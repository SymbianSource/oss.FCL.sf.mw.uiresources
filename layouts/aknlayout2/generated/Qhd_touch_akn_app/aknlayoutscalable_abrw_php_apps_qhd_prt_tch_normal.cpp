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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00017165 };

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
0x8564,	// (0x0001f6c9) Screen

0x8570,	// (0x0001f6d5) application_window

0x857c,	// (0x0001f6e1) area_bottom_pane_ParamLimits

0x857c,	// (0x0001f6e1) area_bottom_pane

0x6d6f,	// (0x0001ded4) area_top_pane_ParamLimits

0x6d6f,	// (0x0001ded4) area_top_pane

0x6dd3,	// (0x0001df38) call_video_uplink_pane_ParamLimits

0x6dd3,	// (0x0001df38) call_video_uplink_pane

0x6e10,	// (0x0001df75) main_pane_ParamLimits

0x6e10,	// (0x0001df75) main_pane

0x2a0a,	// (0x00019b6f) context_pane

0xaf24,	// (0x00022089) navi_pane

0xaf44,	// (0x000220a9) popup_cale_events_window_ParamLimits

0xaf44,	// (0x000220a9) popup_cale_events_window

0x2a1d,	// (0x00019b82) popup_mup_playback_window

0xaf5c,	// (0x000220c1) signal_pane

0x07c7,	// (0x0001792c) main_browser_pane

0x1500,	// (0x00018665) main_burst_pane

0x7412,	// (0x0001e577) main_calc_pane

0x1500,	// (0x00018665) main_cale_day_pane

0x07c7,	// (0x0001792c) main_cale_month_pane

0x1500,	// (0x00018665) main_cale_week_pane

0x1500,	// (0x00018665) main_call_pane

0x0477,	// (0x000175dc) main_call_poc_pane

0x1500,	// (0x00018665) main_camera_pane

0x1500,	// (0x00018665) main_chi_dic_pane

0x1385,	// (0x000184ea) main_clock_pane

0x0477,	// (0x000175dc) main_fmradio_pane

0x1500,	// (0x00018665) main_graph_messa_pane

0x0477,	// (0x000175dc) main_help_pane

0x07c7,	// (0x0001792c) main_im_pane

0x06d2,	// (0x00017837) main_image_pane_ParamLimits

0x06d2,	// (0x00017837) main_image_pane

0x0477,	// (0x000175dc) main_location2_pane

0x1500,	// (0x00018665) main_location_pane

0x0477,	// (0x000175dc) main_messa_pane

0x0477,	// (0x000175dc) main_mp2_pane

0x1500,	// (0x00018665) main_mp_pane

0x0477,	// (0x000175dc) main_msg_pane

0x0477,	// (0x000175dc) main_mup_eq_pane

0x0477,	// (0x000175dc) main_mup_pane

0x07c7,	// (0x0001792c) main_notes_pane

0x0477,	// (0x000175dc) main_pec_pane

0x0477,	// (0x000175dc) main_phob_pane

0x0477,	// (0x000175dc) main_pinb_pane

0x0477,	// (0x000175dc) main_postcard_pane

0x0477,	// (0x000175dc) main_qdial_pane

0x1500,	// (0x00018665) main_skin_pane

0x0477,	// (0x000175dc) main_smil2_pane

0x1500,	// (0x00018665) main_smil_pane

0x1500,	// (0x00018665) main_video_pane

0x1500,	// (0x00018665) main_video_tele_pane

0x06d2,	// (0x00017837) main_viewer_pane_ParamLimits

0x06d2,	// (0x00017837) main_viewer_pane

0x1500,	// (0x00018665) main_vorec_pane

0x745e,	// (0x0001e5c3) popup_blid_sat_info_window_ParamLimits

0x745e,	// (0x0001e5c3) popup_blid_sat_info_window

0x747e,	// (0x0001e5e3) popup_dyc_status_message_window_ParamLimits

0x747e,	// (0x0001e5e3) popup_dyc_status_message_window

0x748e,	// (0x0001e5f3) popup_grid_large_graphic_window_ParamLimits

0x748e,	// (0x0001e5f3) popup_grid_large_graphic_window

0x751f,	// (0x0001e684) popup_loc_request_window_ParamLimits

0x751f,	// (0x0001e684) popup_loc_request_window

0x756d,	// (0x0001e6d2) popup_wml_address_window_ParamLimits

0x756d,	// (0x0001e6d2) popup_wml_address_window

0xae06,	// (0x00021f6b) call_muted_g1

0xaac8,	// (0x00021c2d) popup_call_audio_conf_window_ParamLimits

0xaac8,	// (0x00021c2d) popup_call_audio_conf_window

0xae16,	// (0x00021f7b) popup_call_audio_first_window_ParamLimits

0xae16,	// (0x00021f7b) popup_call_audio_first_window

0xae56,	// (0x00021fbb) popup_call_audio_in_window_ParamLimits

0xae56,	// (0x00021fbb) popup_call_audio_in_window

0xae7a,	// (0x00021fdf) popup_call_audio_out_window_ParamLimits

0xae7a,	// (0x00021fdf) popup_call_audio_out_window

0xae9c,	// (0x00022001) popup_call_audio_second_window_ParamLimits

0xae9c,	// (0x00022001) popup_call_audio_second_window

0xaecc,	// (0x00022031) popup_call_audio_wait_window_ParamLimits

0xaecc,	// (0x00022031) popup_call_audio_wait_window

0xaeed,	// (0x00022052) popup_number_entry_window_ParamLimits

0xaeed,	// (0x00022052) popup_number_entry_window

0x0064,	// (0x000171c9) bg_popup_call_pane_cp05_ParamLimits

0x0064,	// (0x000171c9) bg_popup_call_pane_cp05

0x0084,	// (0x000171e9) popup_number_entry_window_t1

0x0097,	// (0x000171fc) popup_number_entry_window_t2

0x00a9,	// (0x0001720e) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x0002623d) popup_number_entry_window_t

0x00bb,	// (0x00017220) text_title_cp2

0x00ce,	// (0x00017233) bg_popup_call_pane_cp_ParamLimits

0x00ce,	// (0x00017233) bg_popup_call_pane_cp

0x00dc,	// (0x00017241) call_thumbnail_pane

0x00e4,	// (0x00017249) popup_call_audio_in_window_g1_ParamLimits

0x00e4,	// (0x00017249) popup_call_audio_in_window_g1

0x00f0,	// (0x00017255) popup_call_audio_in_window_g2_ParamLimits

0x00f0,	// (0x00017255) popup_call_audio_in_window_g2

0x00fc,	// (0x00017261) popup_call_audio_in_window_g3_ParamLimits

0x00fc,	// (0x00017261) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x00026246) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x00026246) popup_call_audio_in_window_g

0x0108,	// (0x0001726d) popup_call_audio_in_window_t1_ParamLimits

0x0108,	// (0x0001726d) popup_call_audio_in_window_t1

0x0124,	// (0x00017289) popup_call_audio_in_window_t2_ParamLimits

0x0124,	// (0x00017289) popup_call_audio_in_window_t2

0x0140,	// (0x000172a5) popup_call_audio_in_window_t3_ParamLimits

0x0140,	// (0x000172a5) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x0002624d) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x0002624d) popup_call_audio_in_window_t

0x00ce,	// (0x00017233) bg_popup_call_pane_cp01_ParamLimits

0x00ce,	// (0x00017233) bg_popup_call_pane_cp01

0x00dc,	// (0x00017241) call_thumbnail_pane_cp02

0x0153,	// (0x000172b8) call_type_pane_cp022

0x015b,	// (0x000172c0) popup_call_audio_out_window_g1_ParamLimits

0x015b,	// (0x000172c0) popup_call_audio_out_window_g1

0x016d,	// (0x000172d2) popup_call_audio_out_window_g2_ParamLimits

0x016d,	// (0x000172d2) popup_call_audio_out_window_g2

0x0179,	// (0x000172de) popup_call_audio_out_window_g3_ParamLimits

0x0179,	// (0x000172de) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x00026254) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x00026254) popup_call_audio_out_window_g

0x018b,	// (0x000172f0) popup_call_audio_out_window_t1_ParamLimits

0x018b,	// (0x000172f0) popup_call_audio_out_window_t1

0x01a3,	// (0x00017308) popup_call_audio_out_window_t2_ParamLimits

0x01a3,	// (0x00017308) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x0002625b) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x0002625b) popup_call_audio_out_window_t

0x01b8,	// (0x0001731d) bg_popup_call_pane_ParamLimits

0x01b8,	// (0x0001731d) bg_popup_call_pane

0x85f6,	// (0x0001f75b) call_thumbnail_pane_cp_ParamLimits

0x85f6,	// (0x0001f75b) call_thumbnail_pane_cp

0x023c,	// (0x000173a1) call_type_pane_cp01_ParamLimits

0x023c,	// (0x000173a1) call_type_pane_cp01

0x0280,	// (0x000173e5) popup_call_audio_first_window_g1_ParamLimits

0x0280,	// (0x000173e5) popup_call_audio_first_window_g1

0x02cc,	// (0x00017431) popup_call_audio_first_window_g2_ParamLimits

0x02cc,	// (0x00017431) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x00026260) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x00026260) popup_call_audio_first_window_g

0x0310,	// (0x00017475) popup_call_audio_first_window_t1_ParamLimits

0x0310,	// (0x00017475) popup_call_audio_first_window_t1

0x03bc,	// (0x00017521) popup_call_audio_first_window_t4_ParamLimits

0x03bc,	// (0x00017521) popup_call_audio_first_window_t4

0x0448,	// (0x000175ad) popup_call_audio_first_window_t5_ParamLimits

0x0448,	// (0x000175ad) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x00026265) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x00026265) popup_call_audio_first_window_t

0x0477,	// (0x000175dc) bg_popup_call_pane_cp02

0x0481,	// (0x000175e6) call_type_pane_cp023

0x0489,	// (0x000175ee) popup_call_audio_wait_window_g1

0x0491,	// (0x000175f6) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x0002626c) popup_call_audio_wait_window_g

0x0499,	// (0x000175fe) popup_call_audio_wait_window_t3

0x04a7,	// (0x0001760c) bg_popup_call_pane_cp03_ParamLimits

0x04a7,	// (0x0001760c) bg_popup_call_pane_cp03

0x0507,	// (0x0001766c) call_thumbnail_pane_cp011_ParamLimits

0x0507,	// (0x0001766c) call_thumbnail_pane_cp011

0x0513,	// (0x00017678) call_type_pane_cp034_ParamLimits

0x0513,	// (0x00017678) call_type_pane_cp034

0x054f,	// (0x000176b4) popup_call_audio_second_window_g1_ParamLimits

0x054f,	// (0x000176b4) popup_call_audio_second_window_g1

0x058b,	// (0x000176f0) popup_call_audio_second_window_g2_ParamLimits

0x058b,	// (0x000176f0) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x00026271) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x00026271) popup_call_audio_second_window_g

0x05c7,	// (0x0001772c) popup_call_audio_second_window_t1_ParamLimits

0x05c7,	// (0x0001772c) popup_call_audio_second_window_t1

0x0648,	// (0x000177ad) popup_call_audio_second_window_t2_ParamLimits

0x0648,	// (0x000177ad) popup_call_audio_second_window_t2

0x067e,	// (0x000177e3) popup_call_audio_second_window_t3_ParamLimits

0x067e,	// (0x000177e3) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x00026276) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x00026276) popup_call_audio_second_window_t

0x0477,	// (0x000175dc) bg_popup_call_pane_cp04

0x06b4,	// (0x00017819) list_conf_pane

0x06bc,	// (0x00017821) popup_call_audio_conf_window_t1

0x06ca,	// (0x0001782f) call_thumbnail_pane_g1

0x06d2,	// (0x00017837) bg_pinb_pane_ParamLimits

0x06d2,	// (0x00017837) bg_pinb_pane

0x06e0,	// (0x00017845) find_pinb_pane

0x06e9,	// (0x0001784e) listscroll_pinb_pane_ParamLimits

0x06e9,	// (0x0001784e) listscroll_pinb_pane

0x06f8,	// (0x0001785d) pinb_bg_pane_g1

0x861a,	// (0x0001f77f) pinb_bg_pane_g2

0x8626,	// (0x0001f78b) pinb_bg_pane_g3

0x8632,	// (0x0001f797) pinb_bg_pane_g4

0x863e,	// (0x0001f7a3) pinb_bg_pane_g5

0x864a,	// (0x0001f7af) pinb_bg_pane_g6

0x8655,	// (0x0001f7ba) pinb_bg_pane_g7

0x8660,	// (0x0001f7c5) pinb_bg_pane_g8

0x866b,	// (0x0001f7d0) pinb_bg_pane_g9

0x8675,	// (0x0001f7da) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x0002627d) pinb_bg_pane_g

0x8692,	// (0x0001f7f7) grid_pinb_pane

0x869d,	// (0x0001f802) list_pinb_pane

0x86a8,	// (0x0001f80d) scroll_pane_cp01_ParamLimits

0x86a8,	// (0x0001f80d) scroll_pane_cp01

0x0702,	// (0x00017867) find_pinb_pane_g1_ParamLimits

0x0702,	// (0x00017867) find_pinb_pane_g1

0x071a,	// (0x0001787f) find_pinb_pane_t1

0x072c,	// (0x00017891) find_pinb_pane_t2

0x0001,

0xf132,	// (0x00026297) find_pinb_pane_t

0x0741,	// (0x000178a6) input_focus_pane_cp01_ParamLimits

0x0741,	// (0x000178a6) input_focus_pane_cp01

0x86ba,	// (0x0001f81f) cell_pinb_pane_ParamLimits

0x86ba,	// (0x0001f81f) cell_pinb_pane

0x86e2,	// (0x0001f847) cell_pinb_pane_g1_ParamLimits

0x86e2,	// (0x0001f847) cell_pinb_pane_g1

0x86f7,	// (0x0001f85c) cell_pinb_pane_g2_ParamLimits

0x86f7,	// (0x0001f85c) cell_pinb_pane_g2

0x074d,	// (0x000178b2) cell_pinb_pane_g3_ParamLimits

0x074d,	// (0x000178b2) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x0002629c) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x0002629c) cell_pinb_pane_g

0x0477,	// (0x000175dc) grid_highlight_pane_cp01

0x8703,	// (0x0001f868) list_pinb_item_pane_ParamLimits

0x8703,	// (0x0001f868) list_pinb_item_pane

0x0477,	// (0x000175dc) list_highlight_pane_cp02

0x8729,	// (0x0001f88e) list_pinb_item_pane_g1_ParamLimits

0x8729,	// (0x0001f88e) list_pinb_item_pane_g1

0x8736,	// (0x0001f89b) list_pinb_item_pane_g2_ParamLimits

0x8736,	// (0x0001f89b) list_pinb_item_pane_g2

0x8742,	// (0x0001f8a7) list_pinb_item_pane_g3_ParamLimits

0x8742,	// (0x0001f8a7) list_pinb_item_pane_g3

0x8753,	// (0x0001f8b8) list_pinb_item_pane_g4_ParamLimits

0x8753,	// (0x0001f8b8) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x000262a3) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x000262a3) list_pinb_item_pane_g

0x875f,	// (0x0001f8c4) list_pinb_item_pane_t1_ParamLimits

0x875f,	// (0x0001f8c4) list_pinb_item_pane_t1

0x6ff4,	// (0x0001e159) calc_display_pane

0x7012,	// (0x0001e177) calc_paper_pane

0x702e,	// (0x0001e193) grid_calc_pane

0x0477,	// (0x000175dc) bg_list_pane_cp01

0x8776,	// (0x0001f8db) clock_g1

0x877e,	// (0x0001f8e3) clock_g2

0x0001,

0xf147,	// (0x000262ac) clock_g

0x8788,	// (0x0001f8ed) clock_t1_ParamLimits

0x8788,	// (0x0001f8ed) clock_t1

0x879d,	// (0x0001f902) clock_t2_ParamLimits

0x879d,	// (0x0001f902) clock_t2

0x87af,	// (0x0001f914) clock_t3_ParamLimits

0x87af,	// (0x0001f914) clock_t3

0x87c1,	// (0x0001f926) clock_t4_ParamLimits

0x87c1,	// (0x0001f926) clock_t4

0x87d3,	// (0x0001f938) clock_t5_ParamLimits

0x87d3,	// (0x0001f938) clock_t5

0x87e8,	// (0x0001f94d) clock_t6_ParamLimits

0x87e8,	// (0x0001f94d) clock_t6

0x87fa,	// (0x0001f95f) clock_t7_ParamLimits

0x87fa,	// (0x0001f95f) clock_t7

0x880c,	// (0x0001f971) clock_t8_ParamLimits

0x880c,	// (0x0001f971) clock_t8

0x8822,	// (0x0001f987) clock_t9_ParamLimits

0x8822,	// (0x0001f987) clock_t9

0x0008,

0xf14c,	// (0x000262b1) clock_t_ParamLimits

0xf14c,	// (0x000262b1) clock_t

0x0761,	// (0x000178c6) popup_clock_analogue_window_cp02

0x0761,	// (0x000178c6) popup_clock_digital_window_cp01

0x0769,	// (0x000178ce) listscroll_help_pane

0x0477,	// (0x000175dc) phob_pre_status_pane

0x0773,	// (0x000178d8) grid_qdial_pane

0x0477,	// (0x000175dc) listscroll_mce_pane

0x077d,	// (0x000178e2) bg_notes_pane

0x078b,	// (0x000178f0) list_notes_pane

0x8838,	// (0x0001f99d) scroll_pane_cp06

0x0799,	// (0x000178fe) bg_calc_paper_pane

0x705a,	// (0x0001e1bf) list_calc_pane

0x07c7,	// (0x0001792c) bg_calc_display_pane

0x7074,	// (0x0001e1d9) calc_display_pane_t1

0x7089,	// (0x0001e1ee) calc_display_pane_t2

0x709e,	// (0x0001e203) calc_display_pane_t3

0x0002,

0xf15f,	// (0x000262c4) calc_display_pane_t

0x70b0,	// (0x0001e215) cell_calc_pane_ParamLimits

0x70b0,	// (0x0001e215) cell_calc_pane

0x07e5,	// (0x0001794a) bg_calc_paper_pane_g1

0x07fd,	// (0x00017962) bg_calc_paper_pane_g2

0x07f1,	// (0x00017956) bg_calc_paper_pane_g3

0x0815,	// (0x0001797a) bg_calc_paper_pane_g4

0x0809,	// (0x0001796e) bg_calc_paper_pane_g5

0x8847,	// (0x0001f9ac) bg_calc_paper_pane_g6

0x8858,	// (0x0001f9bd) bg_calc_paper_pane_g7

0x8869,	// (0x0001f9ce) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x000262cb) bg_calc_paper_pane_g

0x887a,	// (0x0001f9df) calc_bg_paper_pane_g9

0x888b,	// (0x0001f9f0) list_calc_item_pane_ParamLimits

0x888b,	// (0x0001f9f0) list_calc_item_pane

0x0821,	// (0x00017986) list_calc_item_pane_g1

0x70dd,	// (0x0001e242) list_calc_item_pane_t1_ParamLimits

0x70dd,	// (0x0001e242) list_calc_item_pane_t1

0x70ef,	// (0x0001e254) list_calc_item_pane_t2_ParamLimits

0x70ef,	// (0x0001e254) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x000262dc) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x000262dc) list_calc_item_pane_t

0x0840,	// (0x000179a5) cell_calc_pane_g1

0x084a,	// (0x000179af) grid_highlight_pane_cp02

0x88ba,	// (0x0001fa1f) bg_calc_display_pane_g1

0x711f,	// (0x0001e284) bg_calc_display_pane_g2

0x2eec,	// (0x0001a051) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x000262e6) bg_calc_display_pane_g

0x7129,	// (0x0001e28e) cell_qdial_pane_ParamLimits

0x7129,	// (0x0001e28e) cell_qdial_pane

0x88c3,	// (0x0001fa28) cell_qdial_pane_g1_ParamLimits

0x88c3,	// (0x0001fa28) cell_qdial_pane_g1

0x88d0,	// (0x0001fa35) cell_qdial_pane_g2_ParamLimits

0x88d0,	// (0x0001fa35) cell_qdial_pane_g2

0x086c,	// (0x000179d1) cell_qdial_pane_g3_ParamLimits

0x086c,	// (0x000179d1) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x000262ed) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x000262ed) cell_qdial_pane_g

0x88ee,	// (0x0001fa53) cell_qdial_pane_t1_ParamLimits

0x88ee,	// (0x0001fa53) cell_qdial_pane_t1

0x8906,	// (0x0001fa6b) cell_qdial_pane_t2_ParamLimits

0x8906,	// (0x0001fa6b) cell_qdial_pane_t2

0x8919,	// (0x0001fa7e) cell_qdial_pane_t3_ParamLimits

0x8919,	// (0x0001fa7e) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x000262f6) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x000262f6) cell_qdial_pane_t

0x0477,	// (0x000175dc) grid_highlight_pane_cp04

0x0878,	// (0x000179dd) thumbnail_qdial_pane_ParamLimits

0x0878,	// (0x000179dd) thumbnail_qdial_pane

0x08d4,	// (0x00017a39) list_help_pane

0x08dd,	// (0x00017a42) scroll_pane_cp02

0x892c,	// (0x0001fa91) help_list_pane_t1_ParamLimits

0x892c,	// (0x0001fa91) help_list_pane_t1

0x713d,	// (0x0001e2a2) bg_notes_pane_g2

0x7145,	// (0x0001e2aa) bg_notes_pane_g3

0x714d,	// (0x0001e2b2) notes_bg_pane_g1

0x7155,	// (0x0001e2ba) notes_bg_pane_g4

0x715d,	// (0x0001e2c2) notes_bg_pane_g5

0x7165,	// (0x0001e2ca) notes_bg_pane_g6

0x716d,	// (0x0001e2d2) notes_bg_pane_g7

0x7175,	// (0x0001e2da) notes_bg_pane_g8

0x717d,	// (0x0001e2e2) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x00026314) notes_bg_pane_g

0x895f,	// (0x0001fac4) list_notes_text_pane_ParamLimits

0x895f,	// (0x0001fac4) list_notes_text_pane

0x092e,	// (0x00017a93) list_notes_text_pane_g1

0x8987,	// (0x0001faec) list_notes_text_pane_t1

0x07c7,	// (0x0001792c) listscroll_cale_week_pane

0x89b2,	// (0x0001fb17) bg_cale_heading_pane

0x0948,	// (0x00017aad) bg_cale_pane_cp01

0x89ce,	// (0x0001fb33) cale_week_corner_pane

0x89e4,	// (0x0001fb49) cale_week_day_heading_pane

0x8a00,	// (0x0001fb65) cale_week_scroll_pane_g1

0x8a19,	// (0x0001fb7e) cale_week_scroll_pane_g2

0x8a2a,	// (0x0001fb8f) cale_week_scroll_pane_g3

0x8a3b,	// (0x0001fba0) cale_week_scroll_pane_g4

0x8a4c,	// (0x0001fbb1) cale_week_scroll_pane_g5

0x8a5d,	// (0x0001fbc2) cale_week_scroll_pane_g6

0x8a6e,	// (0x0001fbd3) cale_week_scroll_pane_g7

0x8a81,	// (0x0001fbe6) cale_week_scroll_pane_g8

0x8a94,	// (0x0001fbf9) cale_week_scroll_pane_g9

0x8aa5,	// (0x0001fc0a) cale_week_scroll_pane_g10

0x8ab6,	// (0x0001fc1b) cale_week_scroll_pane_g11

0x8ac7,	// (0x0001fc2c) cale_week_scroll_pane_g12

0x8ad8,	// (0x0001fc3d) cale_week_scroll_pane_g13

0x8af1,	// (0x0001fc56) cale_week_scroll_pane_g14

0x8b0a,	// (0x0001fc6f) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x00026323) cale_week_scroll_pane_g

0x8b23,	// (0x0001fc88) cale_week_time_pane

0x8b36,	// (0x0001fc9b) grid_cale_week_pane

0x8b53,	// (0x0001fcb8) scroll_pane_cp08

0x8b6d,	// (0x0001fcd2) cell_cale_week_pane_ParamLimits

0x8b6d,	// (0x0001fcd2) cell_cale_week_pane

0x8bb9,	// (0x0001fd1e) cale_week_day_heading_pane_t1

0x8bd2,	// (0x0001fd37) cale_week_day_heading_pane_t2

0x8beb,	// (0x0001fd50) cale_week_day_heading_pane_t3

0x8c04,	// (0x0001fd69) cale_week_day_heading_pane_t4

0x8c1d,	// (0x0001fd82) cale_week_day_heading_pane_t5

0x8c36,	// (0x0001fd9b) cale_week_day_heading_pane_t6

0x8c4f,	// (0x0001fdb4) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x00026342) cale_week_day_heading_pane_t

0x0973,	// (0x00017ad8) bg_cale_side_pane

0x7185,	// (0x0001e2ea) cale_week_time_pane_t1

0x719d,	// (0x0001e302) cale_week_time_pane_t2

0x71b5,	// (0x0001e31a) cale_week_time_pane_t3

0x71cd,	// (0x0001e332) cale_week_time_pane_t4

0x71e5,	// (0x0001e34a) cale_week_time_pane_t5

0x71fd,	// (0x0001e362) cale_week_time_pane_t6

0x7215,	// (0x0001e37a) cale_week_time_pane_t7

0x7235,	// (0x0001e39a) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x00026351) cale_week_time_pane_t

0x8c68,	// (0x0001fdcd) cell_cale_week_pane_g2

0x8c79,	// (0x0001fdde) cell_cale_week_pane_g3_ParamLimits

0x8c79,	// (0x0001fdde) cell_cale_week_pane_g3

0x0981,	// (0x00017ae6) grid_highlight_pane_cp07

0x0989,	// (0x00017aee) listscroll_gms_pane

0x0993,	// (0x00017af8) grid_gms_pane

0x099c,	// (0x00017b01) listscroll_gms_pane_g1

0x09a4,	// (0x00017b09) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x00026362) listscroll_gms_pane_g

0x8c91,	// (0x0001fdf6) scroll_pane_cp010

0x8c9c,	// (0x0001fe01) cell_gms_pane_ParamLimits

0x8c9c,	// (0x0001fe01) cell_gms_pane

0x8caf,	// (0x0001fe14) cell_gms_pane_g1

0x09ac,	// (0x00017b11) cell_gms_pane_g2

0x09b4,	// (0x00017b19) cell_gms_pane_g3

0x09bd,	// (0x00017b22) cell_gms_pane_g4

0x0003,

0xf202,	// (0x00026367) cell_gms_pane_g

0x09c6,	// (0x00017b2b) grid_highlight_pane_cp09

0xadae,	// (0x00021f13) phob_pre_status_pane_g1

0xadb6,	// (0x00021f1b) phob_pre_status_pane_g2

0xadbe,	// (0x00021f23) phob_pre_status_pane_g3

0xadc6,	// (0x00021f2b) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x00026756) phob_pre_status_pane_g

0xadd6,	// (0x00021f3b) phob_pre_status_pane_t1

0xade6,	// (0x00021f4b) phob_pre_status_pane_t2

0xadf6,	// (0x00021f5b) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x00026761) phob_pre_status_pane_t

0x0477,	// (0x000175dc) bg_list_pane_cp05

0x725d,	// (0x0001e3c2) grid_vorec_pane

0x7269,	// (0x0001e3ce) vorec_t1

0x7277,	// (0x0001e3dc) vorec_t2

0x7285,	// (0x0001e3ea) vorec_t3

0x7293,	// (0x0001e3f8) vorec_t4

0x72a1,	// (0x0001e406) vorec_t5

0x72af,	// (0x0001e414) vorec_t6

0x0006,

0xf20b,	// (0x00026370) vorec_t

0x72cb,	// (0x0001e430) wait_bar_pane_cp01

0x8cb7,	// (0x0001fe1c) cell_vorec_pane_ParamLimits

0x8cb7,	// (0x0001fe1c) cell_vorec_pane

0x09dc,	// (0x00017b41) cell_vorec_pane_g1

0x0477,	// (0x000175dc) grid_highlight_pane_cp05

0x8cda,	// (0x0001fe3f) cams_zoom_pane

0x8ce6,	// (0x0001fe4b) image_vga_pane

0x8cf5,	// (0x0001fe5a) main_camera_pane_g1

0x8d03,	// (0x0001fe68) main_camera_pane_g2

0x8d0f,	// (0x0001fe74) main_camera_pane_g3

0x8d1b,	// (0x0001fe80) main_camera_pane_g4

0x8d27,	// (0x0001fe8c) main_camera_pane_g5

0x8d33,	// (0x0001fe98) main_camera_pane_g6

0x8d3f,	// (0x0001fea4) main_camera_pane_g7

0x0007,

0xf21a,	// (0x0002637f) main_camera_pane_g

0x8d4b,	// (0x0001feb0) main_camera_pane_t1

0x8d5d,	// (0x0001fec2) main_camera_pane_t2

0x0001,

0xf22b,	// (0x00026390) main_camera_pane_t

0x8d7e,	// (0x0001fee3) cams_zoom_pane_cp_ParamLimits

0x8d7e,	// (0x0001fee3) cams_zoom_pane_cp

0x8da2,	// (0x0001ff07) image_cif_pane_ParamLimits

0x8da2,	// (0x0001ff07) image_cif_pane

0x8dc0,	// (0x0001ff25) image_subqcif_pane

0x8dc8,	// (0x0001ff2d) main_video_pane_g1_ParamLimits

0x8dc8,	// (0x0001ff2d) main_video_pane_g1

0x8de8,	// (0x0001ff4d) main_video_pane_g2_ParamLimits

0x8de8,	// (0x0001ff4d) main_video_pane_g2

0x8e18,	// (0x0001ff7d) main_video_pane_g3_ParamLimits

0x8e18,	// (0x0001ff7d) main_video_pane_g3

0x8e41,	// (0x0001ffa6) main_video_pane_g4_ParamLimits

0x8e41,	// (0x0001ffa6) main_video_pane_g4

0x8e6a,	// (0x0001ffcf) main_video_pane_g5_ParamLimits

0x8e6a,	// (0x0001ffcf) main_video_pane_g5

0x09f2,	// (0x00017b57) main_video_pane_g6_ParamLimits

0x09f2,	// (0x00017b57) main_video_pane_g6

0x0006,

0xf230,	// (0x00026395) main_video_pane_g_ParamLimits

0xf230,	// (0x00026395) main_video_pane_g

0x8e8c,	// (0x0001fff1) main_video_pane_t1_ParamLimits

0x8e8c,	// (0x0001fff1) main_video_pane_t1

0x0a0c,	// (0x00017b71) cams_zoom_pane_g1

0x0a15,	// (0x00017b7a) cams_zoom_pane_g2

0x0a1e,	// (0x00017b83) cams_zoom_pane_g3

0x0a27,	// (0x00017b8c) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x000263a4) cams_zoom_pane_g

0x8ed6,	// (0x0002003b) grid_cams_pane

0x8ee4,	// (0x00020049) linegrid_cams_pane

0x8ef2,	// (0x00020057) cell_cams_pane_ParamLimits

0x8ef2,	// (0x00020057) cell_cams_pane

0x0a30,	// (0x00017b95) cams_burst_image_pane

0x0a38,	// (0x00017b9d) cell_cams_pane_g1

0x0477,	// (0x000175dc) grid_highlight_pane_cp03

0x0840,	// (0x000179a5) mp_bg_pane_g1

0x0477,	// (0x000175dc) bg_list_pane_cp03

0x28e2,	// (0x00019a47) bg_mp_pane

0x28ea,	// (0x00019a4f) grid_mp_pane

0x28f2,	// (0x00019a57) media_player_g1

0x28fa,	// (0x00019a5f) media_player_t1

0x2908,	// (0x00019a6d) media_player_t2

0x2916,	// (0x00019a7b) media_player_t3

0x2924,	// (0x00019a89) media_player_t4

0x2932,	// (0x00019a97) media_player_t5

0x2940,	// (0x00019aa5) media_player_t6

0x294e,	// (0x00019ab3) media_player_t7

0x0006,

0xf5db,	// (0x00026740) media_player_t

0x295c,	// (0x00019ac1) wait_bar_pane_cp02

0xf5c0,	// (0x00026725) main_usb_pane_t

0xada5,	// (0x00021f0a) cell_mp_pane

0x0840,	// (0x000179a5) cell_mp_pane_g1

0x0477,	// (0x000175dc) grid_highlight_pane_cp06

0x0ae0,	// (0x00017c45) grid_skin_colour_pane

0x0ae8,	// (0x00017c4d) list_highlight_pane_cp03

0x8f5c,	// (0x000200c1) skin_g1

0x0af0,	// (0x00017c55) skin_t1

0x0aff,	// (0x00017c64) skin_t2

0x0001,

0xf274,	// (0x000263d9) skin_t

0x8f66,	// (0x000200cb) cell_skin_colour_pane_ParamLimits

0x8f66,	// (0x000200cb) cell_skin_colour_pane

0x0b0d,	// (0x00017c72) cell_skin_colour_pane_g1

0x8fea,	// (0x0002014f) call_video_g1_ParamLimits

0x8fea,	// (0x0002014f) call_video_g1

0x8ffa,	// (0x0002015f) call_video_g2_ParamLimits

0x8ffa,	// (0x0002015f) call_video_g2

0x0001,

0xf279,	// (0x000263de) call_video_g_ParamLimits

0xf279,	// (0x000263de) call_video_g

0x9054,	// (0x000201b9) call_video_uplink_pane_cp1_ParamLimits

0x9054,	// (0x000201b9) call_video_uplink_pane_cp1

0x0b1f,	// (0x00017c84) call_video_uplink_pane_cp2

0x9120,	// (0x00020285) video_down_crop_pane_ParamLimits

0x9120,	// (0x00020285) video_down_crop_pane

0x921e,	// (0x00020383) video_down_pane_ParamLimits

0x921e,	// (0x00020383) video_down_pane

0x0b27,	// (0x00017c8c) video_down_subqcif_pane_ParamLimits

0x0b27,	// (0x00017c8c) video_down_subqcif_pane

0x0b3f,	// (0x00017ca4) video_down_subqcif_pane_cp_ParamLimits

0x0b3f,	// (0x00017ca4) video_down_subqcif_pane_cp

0x0b65,	// (0x00017cca) im_reading_pane_ParamLimits

0x0b65,	// (0x00017cca) im_reading_pane

0x9340,	// (0x000204a5) im_writing_pane_ParamLimits

0x9340,	// (0x000204a5) im_writing_pane

0x935e,	// (0x000204c3) im_reading_pane_t1

0x0b7f,	// (0x00017ce4) list_im_pane

0x0b90,	// (0x00017cf5) scroll_pane_cp07

0x93b2,	// (0x00020517) im_writing_pane_t1_ParamLimits

0x93b2,	// (0x00020517) im_writing_pane_t1

0x0ba9,	// (0x00017d0e) im_writing_pane_t2_ParamLimits

0x0ba9,	// (0x00017d0e) im_writing_pane_t2

0x0001,

0xf283,	// (0x000263e8) im_writing_pane_t_ParamLimits

0xf283,	// (0x000263e8) im_writing_pane_t

0x0477,	// (0x000175dc) input_focus_pane_cp04

0x0477,	// (0x000175dc) input_focus_pane_cp05

0x93c7,	// (0x0002052c) list_im_single_pane_ParamLimits

0x93c7,	// (0x0002052c) list_im_single_pane

0x93eb,	// (0x00020550) list_single_im_pane_t1

0xad69,	// (0x00021ece) blid_accuracy_pane

0xad71,	// (0x00021ed6) blid_compass_pane

0xad7b,	// (0x00021ee0) main_location_t1

0xad89,	// (0x00021eee) main_location_t2

0xad97,	// (0x00021efc) main_location_t3

0x0002,

0xf5ea,	// (0x0002674f) main_location_t

0x0477,	// (0x000175dc) aid_levels_location

0x0840,	// (0x000179a5) blid_accuracy_pane_g1

0x0840,	// (0x000179a5) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x0002644a) blid_accuracy_pane_g

0x0bf1,	// (0x00017d56) wml_content_pane

0x0c2f,	// (0x00017d94) wml_button_pane_ParamLimits

0x0c2f,	// (0x00017d94) wml_button_pane

0x93fa,	// (0x0002055f) wml_list_single_large_pane_ParamLimits

0x93fa,	// (0x0002055f) wml_list_single_large_pane

0x9424,	// (0x00020589) wml_list_single_medium_pane_ParamLimits

0x9424,	// (0x00020589) wml_list_single_medium_pane

0x9455,	// (0x000205ba) wml_list_single_small_pane_ParamLimits

0x9455,	// (0x000205ba) wml_list_single_small_pane

0x0c43,	// (0x00017da8) wml_selection_box_pane_ParamLimits

0x0c43,	// (0x00017da8) wml_selection_box_pane

0x0c56,	// (0x00017dbb) wml_list_single_pane_t1

0x0c65,	// (0x00017dca) wml_list_single_medium_pane_t1

0x0c74,	// (0x00017dd9) wml_list_single_large_pane_t1

0x0c83,	// (0x00017de8) input_focus_pane_cp02_ParamLimits

0x0c83,	// (0x00017de8) input_focus_pane_cp02

0x0c96,	// (0x00017dfb) wml_selection_box_pane_g1

0x0c9f,	// (0x00017e04) wml_selection_box_pane_t1_ParamLimits

0x0c9f,	// (0x00017e04) wml_selection_box_pane_t1

0x06d2,	// (0x00017837) bg_wml_button_pane_ParamLimits

0x06d2,	// (0x00017837) bg_wml_button_pane

0x0cb7,	// (0x00017e1c) wml_button_pane_g1

0x0cbf,	// (0x00017e24) wml_button_pane_t1

0x0cb7,	// (0x00017e1c) wml_button_bg_pane_g1

0x0ccf,	// (0x00017e34) wml_button_bg_pane_g2

0x0cd7,	// (0x00017e3c) wml_button_bg_pane_g3

0x0cdf,	// (0x00017e44) wml_button_bg_pane_g4

0x0ce7,	// (0x00017e4c) wml_button_bg_pane_g5

0x0cef,	// (0x00017e54) wml_button_bg_pane_g6

0x0cf7,	// (0x00017e5c) wml_button_bg_pane_g7

0x0cff,	// (0x00017e64) wml_button_bg_pane_g8

0x0d07,	// (0x00017e6c) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x000263ed) wml_button_bg_pane_g

0x948f,	// (0x000205f4) bg_list_pane_cp02

0x0d0f,	// (0x00017e74) mce_header_pane_ParamLimits

0x0d0f,	// (0x00017e74) mce_header_pane

0x0d25,	// (0x00017e8a) mce_icon_pane

0x0d25,	// (0x00017e8a) mce_image_pane

0x0d2e,	// (0x00017e93) mce_text_pane_ParamLimits

0x0d2e,	// (0x00017e93) mce_text_pane

0x9499,	// (0x000205fe) scroll_pane_cp03

0x0c27,	// (0x00017d8c) scroll_pane_cp04

0x0d41,	// (0x00017ea6) scroll_pane_cp05_ParamLimits

0x0d41,	// (0x00017ea6) scroll_pane_cp05

0x94a3,	// (0x00020608) mce_header_field_pane_ParamLimits

0x94a3,	// (0x00020608) mce_header_field_pane

0x94c3,	// (0x00020628) mce_header_field_pane_2_ParamLimits

0x94c3,	// (0x00020628) mce_header_field_pane_2

0x94d9,	// (0x0002063e) mce_header_field_pane_3

0x94e1,	// (0x00020646) list_single_mce_message_pane_ParamLimits

0x94e1,	// (0x00020646) list_single_mce_message_pane

0x9506,	// (0x0002066b) list_single_mce_smart_pane_ParamLimits

0x9506,	// (0x0002066b) list_single_mce_smart_pane

0x0d4d,	// (0x00017eb2) input_focus_pane_cp03

0x0d56,	// (0x00017ebb) list_header_data_pane

0x9536,	// (0x0002069b) mce_header_field_pane_t1

0x9544,	// (0x000206a9) list_single_mce_header_pane_ParamLimits

0x9544,	// (0x000206a9) list_single_mce_header_pane

0x0d5e,	// (0x00017ec3) list_single_mce_header_pane_t1

0x0d6d,	// (0x00017ed2) list_single_mce_message_pane_g1

0x0d75,	// (0x00017eda) list_single_mce_message_pane_t1

0x9588,	// (0x000206ed) bg_cale_heading_pane_cp01_ParamLimits

0x9588,	// (0x000206ed) bg_cale_heading_pane_cp01

0x0d83,	// (0x00017ee8) bg_cale_pane_cp02_ParamLimits

0x0d83,	// (0x00017ee8) bg_cale_pane_cp02

0x95bb,	// (0x00020720) cale_month_corner_pane

0x95d1,	// (0x00020736) cale_month_day_heading_pane_ParamLimits

0x95d1,	// (0x00020736) cale_month_day_heading_pane

0x9614,	// (0x00020779) cale_month_pane_g1_ParamLimits

0x9614,	// (0x00020779) cale_month_pane_g1

0x9640,	// (0x000207a5) cale_month_pane_g2_ParamLimits

0x9640,	// (0x000207a5) cale_month_pane_g2

0x9663,	// (0x000207c8) cale_month_pane_g3_ParamLimits

0x9663,	// (0x000207c8) cale_month_pane_g3

0x969f,	// (0x00020804) cale_month_pane_g4_ParamLimits

0x969f,	// (0x00020804) cale_month_pane_g4

0x96db,	// (0x00020840) cale_month_pane_g5_ParamLimits

0x96db,	// (0x00020840) cale_month_pane_g5

0x9717,	// (0x0002087c) cale_month_pane_g6_ParamLimits

0x9717,	// (0x0002087c) cale_month_pane_g6

0x9753,	// (0x000208b8) cale_month_pane_g7_ParamLimits

0x9753,	// (0x000208b8) cale_month_pane_g7

0x979f,	// (0x00020904) cale_month_pane_g8_ParamLimits

0x979f,	// (0x00020904) cale_month_pane_g8

0x97eb,	// (0x00020950) cale_month_pane_g9_ParamLimits

0x97eb,	// (0x00020950) cale_month_pane_g9

0x9831,	// (0x00020996) cale_month_pane_g10_ParamLimits

0x9831,	// (0x00020996) cale_month_pane_g10

0x986b,	// (0x000209d0) cale_month_pane_g11_ParamLimits

0x986b,	// (0x000209d0) cale_month_pane_g11

0x98a9,	// (0x00020a0e) cale_month_pane_g12_ParamLimits

0x98a9,	// (0x00020a0e) cale_month_pane_g12

0x98e7,	// (0x00020a4c) cale_month_pane_g13_ParamLimits

0x98e7,	// (0x00020a4c) cale_month_pane_g13

0x000c,

0xf29b,	// (0x00026400) cale_month_pane_g_ParamLimits

0xf29b,	// (0x00026400) cale_month_pane_g

0x9925,	// (0x00020a8a) cale_month_week_pane

0x9938,	// (0x00020a9d) grid_cale_month_pane_ParamLimits

0x9938,	// (0x00020a9d) grid_cale_month_pane

0x9976,	// (0x00020adb) cale_month_day_heading_pane_t1

0x99d4,	// (0x00020b39) cale_month_day_heading_pane_t2

0x9a39,	// (0x00020b9e) cale_month_day_heading_pane_t3

0x9a9e,	// (0x00020c03) cale_month_day_heading_pane_t4

0x9b03,	// (0x00020c68) cale_month_day_heading_pane_t5

0x9b68,	// (0x00020ccd) cale_month_day_heading_pane_t6

0x9bcd,	// (0x00020d32) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x0002641b) cale_month_day_heading_pane_t

0x0973,	// (0x00017ad8) bg_cale_side_pane_cp01

0x9c42,	// (0x00020da7) cale_month_week_pane_t1

0x9c59,	// (0x00020dbe) cale_month_week_pane_t2

0x9c70,	// (0x00020dd5) cale_month_week_pane_t3

0x9c87,	// (0x00020dec) cale_month_week_pane_t4

0x9c9e,	// (0x00020e03) cale_month_week_pane_t5

0x9cb9,	// (0x00020e1e) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x0002642a) cale_month_week_pane_t

0x9cd8,	// (0x00020e3d) cell_cale_month_pane_ParamLimits

0x9cd8,	// (0x00020e3d) cell_cale_month_pane

0x72d3,	// (0x0001e438) cell_cale_month_pane_g1

0x72df,	// (0x0001e444) cell_cale_month_pane_t1_ParamLimits

0x72df,	// (0x0001e444) cell_cale_month_pane_t1

0x0981,	// (0x00017ae6) grid_highlight_pane_cp08

0x0840,	// (0x000179a5) main_smil_g1

0x9d9e,	// (0x00020f03) smil_status_pane

0x0dee,	// (0x00017f53) smil_text_pane

0x2802,	// (0x00019967) bg_popup_call3_rect_pane_g8

0x280a,	// (0x0001996f) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x000266e3) bg_popup_call3_rect_pane_g

0x2a97,	// (0x00019bfc) smil_status_volume_pane_g1

0x0df8,	// (0x00017f5d) smil_status_pane_t1

0x75a2,	// (0x0001e707) volume_smil_pane

0x0e0f,	// (0x00017f74) list_smil_text_pane

0x9db1,	// (0x00020f16) scroll_pane_cp011

0x9dbc,	// (0x00020f21) smil_text_list_pane_t1_ParamLimits

0x9dbc,	// (0x00020f21) smil_text_list_pane_t1

0x72fb,	// (0x0001e460) aid_volume_smil_ParamLimits

0x72fb,	// (0x0001e460) aid_volume_smil

0x0840,	// (0x000179a5) smil_volume_pane_g1

0x0840,	// (0x000179a5) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x0002644a) smil_volume_pane_g

0x07c7,	// (0x0001792c) listscroll_cale_day_pane

0x0e3b,	// (0x00017fa0) bg_cale_pane

0x0e53,	// (0x00017fb8) list_cale_pane

0x0e64,	// (0x00017fc9) scroll_pane_cp09

0x0e75,	// (0x00017fda) cale_bg_pane_g1

0x0e7d,	// (0x00017fe2) cale_bg_pane_g2

0x0e85,	// (0x00017fea) cale_bg_pane_g3

0x0e8d,	// (0x00017ff2) cale_bg_pane_g4

0x0e95,	// (0x00017ffa) cale_bg_pane_g5

0x0e9d,	// (0x00018002) cale_bg_pane_g6

0x0ea5,	// (0x0001800a) cale_bg_pane_g7

0x0ead,	// (0x00018012) cale_bg_pane_g8

0x0eb5,	// (0x0001801a) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x0002644f) cale_bg_pane_g

0x9e34,	// (0x00020f99) list_cale_time_pane_ParamLimits

0x9e34,	// (0x00020f99) list_cale_time_pane

0x0ebd,	// (0x00018022) list_cale_time_pane_g1_ParamLimits

0x0ebd,	// (0x00018022) list_cale_time_pane_g1

0x0ec9,	// (0x0001802e) list_cale_time_pane_g2_ParamLimits

0x0ec9,	// (0x0001802e) list_cale_time_pane_g2

0x9e50,	// (0x00020fb5) list_cale_time_pane_g3_ParamLimits

0x9e50,	// (0x00020fb5) list_cale_time_pane_g3

0x9e5e,	// (0x00020fc3) list_cale_time_pane_g4_ParamLimits

0x9e5e,	// (0x00020fc3) list_cale_time_pane_g4

0x9e6c,	// (0x00020fd1) list_cale_time_pane_g5_ParamLimits

0x9e6c,	// (0x00020fd1) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x00026462) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x00026462) list_cale_time_pane_g

0x0ee3,	// (0x00018048) list_cale_time_pane_t1_ParamLimits

0x0ee3,	// (0x00018048) list_cale_time_pane_t1

0x0f0b,	// (0x00018070) list_cale_time_pane_t2_ParamLimits

0x0f0b,	// (0x00018070) list_cale_time_pane_t2

0xa12a,	// (0x0002128f) aid_blid_cardinal_pane

0xa16c,	// (0x000212d1) compass_pane_t4

0x0f33,	// (0x00018098) list_cale_time_pane_t4_ParamLimits

0x0f33,	// (0x00018098) list_cale_time_pane_t4

0xa17a,	// (0x000212df) compass_pane_t5

0xa18a,	// (0x000212ef) compass_pane_t6

0xa198,	// (0x000212fd) compass_pane_t7

0x1452,	// (0x000185b7) navi_pane_cc_t1

0x15b9,	// (0x0001871e) aid_phob_thumbnail_center_pane

0xa86f,	// (0x000219d4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x0002646f) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x0002646f) list_cale_time_pane_t

0x00ce,	// (0x00017233) bg_popup_window_pane_cp02_ParamLimits

0x00ce,	// (0x00017233) bg_popup_window_pane_cp02

0x0f5b,	// (0x000180c0) heading_pane_cp01_ParamLimits

0x0f5b,	// (0x000180c0) heading_pane_cp01

0x0f67,	// (0x000180cc) loc_req_pane_ParamLimits

0x0f67,	// (0x000180cc) loc_req_pane

0x0f77,	// (0x000180dc) loc_type_pane_ParamLimits

0x0f77,	// (0x000180dc) loc_type_pane

0x0f89,	// (0x000180ee) loc_type_pane_t1_ParamLimits

0x0f89,	// (0x000180ee) loc_type_pane_t1

0x0f9b,	// (0x00018100) loc_type_pane_t2_ParamLimits

0x0f9b,	// (0x00018100) loc_type_pane_t2

0x0fad,	// (0x00018112) loc_type_pane_t3_ParamLimits

0x0fad,	// (0x00018112) loc_type_pane_t3

0x0002,

0xf311,	// (0x00026476) loc_type_pane_t_ParamLimits

0xf311,	// (0x00026476) loc_type_pane_t

0x0fbf,	// (0x00018124) list_loc_req_pane

0x0fc9,	// (0x0001812e) scroll_pane_cp012

0x9e7a,	// (0x00020fdf) list_single_loc_request_popup_menu_pane_ParamLimits

0x9e7a,	// (0x00020fdf) list_single_loc_request_popup_menu_pane

0x0fd4,	// (0x00018139) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0fd4,	// (0x00018139) list_single_loc_request_popup_menu_pane_g1

0x0fe0,	// (0x00018145) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0fe0,	// (0x00018145) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x0002647d) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x0002647d) list_single_loc_request_popup_menu_pane_g

0x0fec,	// (0x00018151) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0fec,	// (0x00018151) list_single_loc_request_popup_menu_pane_t1

0x9e8c,	// (0x00020ff1) bg_popup_window_pane_cp03_ParamLimits

0x9e8c,	// (0x00020ff1) bg_popup_window_pane_cp03

0x9e9a,	// (0x00020fff) heading_loc_req_pane_ParamLimits

0x9e9a,	// (0x00020fff) heading_loc_req_pane

0x9ea6,	// (0x0002100b) popup_dyc_status_message_window_g1_ParamLimits

0x9ea6,	// (0x0002100b) popup_dyc_status_message_window_g1

0x9eb2,	// (0x00021017) popup_dyc_status_message_window_t1_ParamLimits

0x9eb2,	// (0x00021017) popup_dyc_status_message_window_t1

0x9ec4,	// (0x00021029) popup_dyc_status_message_window_t2_ParamLimits

0x9ec4,	// (0x00021029) popup_dyc_status_message_window_t2

0x9ed6,	// (0x0002103b) popup_dyc_status_message_window_t3_ParamLimits

0x9ed6,	// (0x0002103b) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x00026482) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x00026482) popup_dyc_status_message_window_t

0x0477,	// (0x000175dc) bg_heading_pane_cp01

0x100e,	// (0x00018173) heading_loc_req_pane_g1

0x1016,	// (0x0001817b) heading_loc_req_pane_g2

0x101e,	// (0x00018183) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x00026489) heading_loc_req_pane_g

0x1026,	// (0x0001818b) heading_loc_req_pane_t1

0x10aa,	// (0x0001820f) bg_popup_sub_pane_cp01_ParamLimits

0x10aa,	// (0x0001820f) bg_popup_sub_pane_cp01

0x10b8,	// (0x0001821d) popup_cale_events_window_g1_ParamLimits

0x10b8,	// (0x0001821d) popup_cale_events_window_g1

0x10d8,	// (0x0001823d) popup_cale_events_window_g2_ParamLimits

0x10d8,	// (0x0001823d) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x000264bd) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x000264bd) popup_cale_events_window_g

0x10f8,	// (0x0001825d) popup_cale_events_window_t1_ParamLimits

0x10f8,	// (0x0001825d) popup_cale_events_window_t1

0x110a,	// (0x0001826f) popup_cale_events_window_t2_ParamLimits

0x110a,	// (0x0001826f) popup_cale_events_window_t2

0x1148,	// (0x000182ad) popup_cale_events_window_t3_ParamLimits

0x1148,	// (0x000182ad) popup_cale_events_window_t3

0x1182,	// (0x000182e7) popup_cale_events_window_t4_ParamLimits

0x1182,	// (0x000182e7) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x000264c2) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x000264c2) popup_cale_events_window_t

0x9f5a,	// (0x000210bf) call_type_pane

0x15d1,	// (0x00018736) popup_call_status_window_g1

0x9f66,	// (0x000210cb) popup_call_status_window_g2

0x9f72,	// (0x000210d7) popup_call_status_window_g3

0x0002,

0xf366,	// (0x000264cb) popup_call_status_window_g

0x11b8,	// (0x0001831d) call_type_pane_g1

0x11c1,	// (0x00018326) call_type_pane_g2

0x0001,

0xf36d,	// (0x000264d2) call_type_pane_g

0x0477,	// (0x000175dc) bg_popup_sub_pane_cp02

0x11ca,	// (0x0001832f) listscroll_popup_wml_pane

0x11d2,	// (0x00018337) list_wml_pane

0x11dc,	// (0x00018341) scroll_pane_cp013

0x11e7,	// (0x0001834c) list_single_graphic_popup_wml_pane_ParamLimits

0x11e7,	// (0x0001834c) list_single_graphic_popup_wml_pane

0x0840,	// (0x000179a5) list_single_graphic_popup_wml_pane_g1

0x11fb,	// (0x00018360) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x000264d7) list_single_graphic_popup_wml_pane_g

0x1203,	// (0x00018368) list_single_graphic_popup_wml_pane_t1

0x1211,	// (0x00018376) aid_call_pane

0x06ca,	// (0x0001782f) popup_clock_analogue_window_g1

0x06ca,	// (0x0001782f) popup_clock_analogue_window_g2

0x731d,	// (0x0001e482) popup_clock_analogue_window_g3

0x731d,	// (0x0001e482) popup_clock_analogue_window_g4

0x0840,	// (0x000179a5) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x000264dc) popup_clock_analogue_window_g

0x7325,	// (0x0001e48a) popup_clock_analogue_window_t1

0x7333,	// (0x0001e498) clock_digital_number_pane_ParamLimits

0x7333,	// (0x0001e498) clock_digital_number_pane

0x733f,	// (0x0001e4a4) clock_digital_number_pane_cp02_ParamLimits

0x733f,	// (0x0001e4a4) clock_digital_number_pane_cp02

0x734b,	// (0x0001e4b0) clock_digital_number_pane_cp03_ParamLimits

0x734b,	// (0x0001e4b0) clock_digital_number_pane_cp03

0x7357,	// (0x0001e4bc) clock_digital_number_pane_cp04_ParamLimits

0x7357,	// (0x0001e4bc) clock_digital_number_pane_cp04

0x7367,	// (0x0001e4cc) clock_digital_separator_pane_ParamLimits

0x7367,	// (0x0001e4cc) clock_digital_separator_pane

0x7373,	// (0x0001e4d8) popup_clock_digital_window_t1

0x0840,	// (0x000179a5) clock_digital_number_pane_g1

0x0840,	// (0x000179a5) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x0002644a) clock_digital_number_pane_g

0x0840,	// (0x000179a5) clock_digital_separator_pane_g1

0x0840,	// (0x000179a5) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x0002644a) clock_digital_separator_pane_g

0x0477,	// (0x000175dc) bg_popup_window_pane_cp04

0x1294,	// (0x000183f9) heading_pane_cp03

0x129c,	// (0x00018401) listscroll_popup_gms_pane

0x12a4,	// (0x00018409) grid_large_graphic_popup_pane

0x12ae,	// (0x00018413) listscroll_popup_gms_pane_g1

0x12b6,	// (0x0001841b) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x000264e7) listscroll_popup_gms_pane_g

0x0c27,	// (0x00017d8c) scroll_pane_cp014

0x9f7e,	// (0x000210e3) cell_large_graphic_popup_pane_ParamLimits

0x9f7e,	// (0x000210e3) cell_large_graphic_popup_pane

0x9f96,	// (0x000210fb) cell_large_graphic_popup_pane_g1_ParamLimits

0x9f96,	// (0x000210fb) cell_large_graphic_popup_pane_g1

0x12be,	// (0x00018423) cell_large_graphic_popup_pane_g2_ParamLimits

0x12be,	// (0x00018423) cell_large_graphic_popup_pane_g2

0x12ca,	// (0x0001842f) cell_large_graphic_popup_pane_g3_ParamLimits

0x12ca,	// (0x0001842f) cell_large_graphic_popup_pane_g3

0x12d7,	// (0x0001843c) cell_large_graphic_popup_pane_g4_ParamLimits

0x12d7,	// (0x0001843c) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x000264ec) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x000264ec) cell_large_graphic_popup_pane_g

0x12e7,	// (0x0001844c) grid_highlight_pane_cp010

0x0840,	// (0x000179a5) bg_popup_call_pane_g1

0x12f1,	// (0x00018456) list_single_graphic_popup_conf_pane_ParamLimits

0x12f1,	// (0x00018456) list_single_graphic_popup_conf_pane

0x1304,	// (0x00018469) list_highlight_pane_cp01

0x130d,	// (0x00018472) list_single_graphic_popup_conf_pane_g1

0x1315,	// (0x0001847a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x000264f5) list_single_graphic_popup_conf_pane_g

0x131d,	// (0x00018482) list_single_graphic_popup_conf_pane_t1

0x132b,	// (0x00018490) linegrid_cams_pane_g1

0x9fa2,	// (0x00021107) linegrid_cams_pane_g2

0x09b4,	// (0x00017b19) linegrid_cams_pane_g3

0x1334,	// (0x00018499) linegrid_cams_pane_g4

0x9fab,	// (0x00021110) linegrid_cams_pane_g5

0x9fb4,	// (0x00021119) linegrid_cams_pane_g6

0x09bd,	// (0x00017b22) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x000264fa) linegrid_cams_pane_g

0x133d,	// (0x000184a2) popup_clock_analogue_window

0x133d,	// (0x000184a2) popup_clock_digital_window

0x0477,	// (0x000175dc) popup_phob_thumbnail_window

0x0840,	// (0x000179a5) call_video_uplink_pane_g1

0x1346,	// (0x000184ab) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x00026509) call_video_uplink_pane_g

0x134e,	// (0x000184b3) video_uplink_pane

0x1356,	// (0x000184bb) mce_image_pane_g1

0x9fbd,	// (0x00021122) mce_image_pane_g2

0x9fc7,	// (0x0002112c) mce_image_pane_g3

0x9fcf,	// (0x00021134) mce_image_pane_g4

0x9fd7,	// (0x0002113c) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x0002650e) mce_image_pane_g

0x1360,	// (0x000184c5) control_top_pane_stacon_cp01_ParamLimits

0x1360,	// (0x000184c5) control_top_pane_stacon_cp01

0x1374,	// (0x000184d9) uni_indicator_pane_stacon_cp01_ParamLimits

0x1374,	// (0x000184d9) uni_indicator_pane_stacon_cp01

0x1385,	// (0x000184ea) bg_popup_sub_pane_cp03

0x9fdf,	// (0x00021144) chi_dic_find_pane

0x9fe7,	// (0x0002114c) listscroll_chi_dic_pane

0x9ff0,	// (0x00021155) main_pane_chidic_g1

0x138f,	// (0x000184f4) chi_dic_find_pane_t1

0x139d,	// (0x00018502) find_chidic_pane

0x13a6,	// (0x0001850b) chi_dic_list_pane_ParamLimits

0x13a6,	// (0x0001850b) chi_dic_list_pane

0x13b7,	// (0x0001851c) scroll_pane_cp020

0x13bf,	// (0x00018524) find_chidic_pane_t1

0x0477,	// (0x000175dc) input_focus_pane_cp06

0xa003,	// (0x00021168) list_chi_dic_pane_ParamLimits

0xa003,	// (0x00021168) list_chi_dic_pane

0xa01d,	// (0x00021182) list_chi_dic_pane_t1_ParamLimits

0xa01d,	// (0x00021182) list_chi_dic_pane_t1

0x0477,	// (0x000175dc) list_highlight_pane_cp020

0x13ce,	// (0x00018533) bg_cale_heading_pane_g1

0xa030,	// (0x00021195) bg_cale_heading_pane_g2

0xa038,	// (0x0002119d) bg_cale_heading_pane_g3

0xa040,	// (0x000211a5) bg_cale_heading_pane_g4

0xa04a,	// (0x000211af) bg_cale_heading_pane_g5

0xa054,	// (0x000211b9) bg_cale_heading_pane_g6

0xa05c,	// (0x000211c1) bg_cale_heading_pane_g7

0xa064,	// (0x000211c9) bg_cale_heading_pane_g8

0xa06e,	// (0x000211d3) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x00026519) bg_cale_heading_pane_g

0x13ce,	// (0x00018533) bg_cale_side_pane_g1

0xa078,	// (0x000211dd) bg_cale_side_pane_g2

0xa082,	// (0x000211e7) bg_cale_side_pane_g3

0xa08c,	// (0x000211f1) bg_cale_side_pane_g4

0xa096,	// (0x000211fb) bg_cale_side_pane_g5

0xa0a0,	// (0x00021205) bg_cale_side_pane_g6

0xa0aa,	// (0x0002120f) bg_cale_side_pane_g7

0xa0b4,	// (0x00021219) bg_cale_side_pane_g8

0xa0bc,	// (0x00021221) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x0002652c) bg_cale_side_pane_g

0xa0c4,	// (0x00021229) popup_call_status_window_ParamLimits

0xa0c4,	// (0x00021229) popup_call_status_window

0x13d6,	// (0x0001853b) stacon_top_pane

0x13de,	// (0x00018543) status_pane_ParamLimits

0x13de,	// (0x00018543) status_pane

0x13f3,	// (0x00018558) status_small_pane

0x13fb,	// (0x00018560) control_pane

0x0477,	// (0x000175dc) stacon_bottom_pane

0x1403,	// (0x00018568) list_single_mce_smart_pane_t1_ParamLimits

0x1403,	// (0x00018568) list_single_mce_smart_pane_t1

0x1416,	// (0x0001857b) list_single_mce_smart_pane_t2_ParamLimits

0x1416,	// (0x0001857b) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x0002653f) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x0002653f) list_single_mce_smart_pane_t

0xa0d0,	// (0x00021235) compass_pane

0xa0dc,	// (0x00021241) main_location2_pane_t1

0xa0f0,	// (0x00021255) main_location2_pane_t2

0xa104,	// (0x00021269) main_location2_pane_t3

0x0003,

0xf3df,	// (0x00026544) main_location2_pane_t

0x1435,	// (0x0001859a) compass_pane_g1_ParamLimits

0x1435,	// (0x0001859a) compass_pane_g1

0xa14e,	// (0x000212b3) compass_pane_t1

0xa15d,	// (0x000212c2) compass_pane_t2

0x0005,

0xf3e8,	// (0x0002654d) compass_pane_t

0xa1a8,	// (0x0002130d) text_secondary_cp61

0x1449,	// (0x000185ae) navi_pane_cams_g5

0x146c,	// (0x000185d1) navi_pane_im_t1

0x147a,	// (0x000185df) navi_pane_mp_g1_ParamLimits

0x147a,	// (0x000185df) navi_pane_mp_g1

0x148e,	// (0x000185f3) navi_pane_mp_g2_ParamLimits

0x148e,	// (0x000185f3) navi_pane_mp_g2

0x149a,	// (0x000185ff) navi_pane_mp_g3_ParamLimits

0x149a,	// (0x000185ff) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x00026561) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x00026561) navi_pane_mp_g

0x14a6,	// (0x0001860b) navi_pane_mp_t1

0x14b4,	// (0x00018619) navi_pane_mp_t2

0x0002,

0xf403,	// (0x00026568) navi_pane_mp_t

0x14f0,	// (0x00018655) navi_pane_vt_g1

0x14a6,	// (0x0001860b) navi_pane_vt_t1

0x14f8,	// (0x0001865d) navi_slider_pane

0x1500,	// (0x00018665) zooming_pane

0x1508,	// (0x0001866d) navi_slider_pane_g1

0x7390,	// (0x0001e4f5) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x0002656f) navi_slider_pane_g

0x153e,	// (0x000186a3) aid_levels_zoom

0x1546,	// (0x000186ab) zooming_pane_g1

0x154e,	// (0x000186b3) zooming_pane_g2

0x154e,	// (0x000186b3) zooming_pane_g3

0x0002,

0xf419,	// (0x0002657e) zooming_pane_g

0x1556,	// (0x000186bb) level_10_zoom

0x155f,	// (0x000186c4) level_11_zoom

0x1568,	// (0x000186cd) level_1_zoom

0x1571,	// (0x000186d6) level_2_zoom

0x157a,	// (0x000186df) level_3_zoom

0x1583,	// (0x000186e8) level_4_zoom

0x158c,	// (0x000186f1) level_5_zoom

0x1595,	// (0x000186fa) level_6_zoom

0x159e,	// (0x00018703) level_7_zoom

0x15a7,	// (0x0001870c) level_8_zoom

0x15b0,	// (0x00018715) level_9_zoom

0x15c1,	// (0x00018726) popup_phob_thumbnail_window_g1

0x15c9,	// (0x0001872e) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x00026585) popup_phob_thumbnail_window_g

0x2964,	// (0x00019ac9) level_1_location

0x296c,	// (0x00019ad1) level_2_location

0x2974,	// (0x00019ad9) level_3_location

0x297c,	// (0x00019ae1) level_4_location

0x1500,	// (0x00018665) level_5_location

0xa2d3,	// (0x00021438) mce_icon_pane_g1

0xa2db,	// (0x00021440) mce_icon_pane_g2

0x0001,

0xf425,	// (0x0002658a) mce_icon_pane_g

0xa2e3,	// (0x00021448) main_mup_pane_g1_ParamLimits

0xa2e3,	// (0x00021448) main_mup_pane_g1

0xa2fb,	// (0x00021460) main_mup_pane_g2_ParamLimits

0xa2fb,	// (0x00021460) main_mup_pane_g2

0xa317,	// (0x0002147c) main_mup_pane_g3_ParamLimits

0xa317,	// (0x0002147c) main_mup_pane_g3

0xa333,	// (0x00021498) main_mup_pane_g4_ParamLimits

0xa333,	// (0x00021498) main_mup_pane_g4

0xa34f,	// (0x000214b4) main_mup_pane_g5_ParamLimits

0xa34f,	// (0x000214b4) main_mup_pane_g5

0xa370,	// (0x000214d5) main_mup_pane_g6_ParamLimits

0xa370,	// (0x000214d5) main_mup_pane_g6

0xa38c,	// (0x000214f1) main_mup_pane_g7_ParamLimits

0xa38c,	// (0x000214f1) main_mup_pane_g7

0xa3a8,	// (0x0002150d) main_mup_pane_g8_ParamLimits

0xa3a8,	// (0x0002150d) main_mup_pane_g8

0xa3c8,	// (0x0002152d) main_mup_pane_g9_ParamLimits

0xa3c8,	// (0x0002152d) main_mup_pane_g9

0xa3e7,	// (0x0002154c) main_mup_pane_g10_ParamLimits

0xa3e7,	// (0x0002154c) main_mup_pane_g10

0xa406,	// (0x0002156b) main_mup_pane_g11_ParamLimits

0xa406,	// (0x0002156b) main_mup_pane_g11

0xa41e,	// (0x00021583) main_mup_pane_g12_ParamLimits

0xa41e,	// (0x00021583) main_mup_pane_g12

0xa42c,	// (0x00021591) main_mup_pane_g13_ParamLimits

0xa42c,	// (0x00021591) main_mup_pane_g13

0x000c,

0xf42a,	// (0x0002658f) main_mup_pane_g_ParamLimits

0xf42a,	// (0x0002658f) main_mup_pane_g

0xa442,	// (0x000215a7) main_mup_pane_t1_ParamLimits

0xa442,	// (0x000215a7) main_mup_pane_t1

0xa45f,	// (0x000215c4) main_mup_pane_t2_ParamLimits

0xa45f,	// (0x000215c4) main_mup_pane_t2

0xa479,	// (0x000215de) main_mup_pane_t3_ParamLimits

0xa479,	// (0x000215de) main_mup_pane_t3

0xa493,	// (0x000215f8) main_mup_pane_t4_ParamLimits

0xa493,	// (0x000215f8) main_mup_pane_t4

0xa4a5,	// (0x0002160a) main_mup_pane_t5_ParamLimits

0xa4a5,	// (0x0002160a) main_mup_pane_t5

0xa4b7,	// (0x0002161c) main_mup_pane_t6_ParamLimits

0xa4b7,	// (0x0002161c) main_mup_pane_t6

0x0005,

0xf445,	// (0x000265aa) main_mup_pane_t_ParamLimits

0xf445,	// (0x000265aa) main_mup_pane_t

0xa4cd,	// (0x00021632) mup_progress_pane_ParamLimits

0xa4cd,	// (0x00021632) mup_progress_pane

0xa4d9,	// (0x0002163e) mup_visualizer_pane_ParamLimits

0xa4d9,	// (0x0002163e) mup_visualizer_pane

0xa513,	// (0x00021678) mup_volume_pane_ParamLimits

0xa513,	// (0x00021678) mup_volume_pane

0x15d1,	// (0x00018736) mup_visualizer_pane_g1_ParamLimits

0x15d1,	// (0x00018736) mup_visualizer_pane_g1

0x15d1,	// (0x00018736) mup_visualizer_pane_g2_ParamLimits

0x15d1,	// (0x00018736) mup_visualizer_pane_g2

0x1435,	// (0x0001859a) mup_visualizer_pane_g3_ParamLimits

0x1435,	// (0x0001859a) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x000265b7) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x000265b7) mup_visualizer_pane_g

0x0840,	// (0x000179a5) mup_volume_pane_g1

0x15e7,	// (0x0001874c) mup_volume_pane_g2

0x0001,

0xf459,	// (0x000265be) mup_volume_pane_g

0x0840,	// (0x000179a5) mup_progress_pane_g1

0x15f0,	// (0x00018755) mup_progress_pane_g2

0x15f9,	// (0x0001875e) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x000265c3) mup_progress_pane_g

0x0477,	// (0x000175dc) bg_popup_window_pane_cp05

0x1602,	// (0x00018767) heading_pane_cp02_ParamLimits

0x1602,	// (0x00018767) heading_pane_cp02

0x161c,	// (0x00018781) list_popup_blid_pane

0x1624,	// (0x00018789) list_blid_sat_info_pane_ParamLimits

0x1624,	// (0x00018789) list_blid_sat_info_pane

0x1637,	// (0x0001879c) list_blid_sat_info_pane_g1

0x163f,	// (0x000187a4) list_blid_sat_info_pane_t1

0xa620,	// (0x00021785) mup_equalizer_pane_ParamLimits

0xa620,	// (0x00021785) mup_equalizer_pane

0xa641,	// (0x000217a6) mup_equalizer_pane_cp1_ParamLimits

0xa641,	// (0x000217a6) mup_equalizer_pane_cp1

0xa662,	// (0x000217c7) mup_equalizer_pane_cp2_ParamLimits

0xa662,	// (0x000217c7) mup_equalizer_pane_cp2

0xa683,	// (0x000217e8) mup_equalizer_pane_cp3_ParamLimits

0xa683,	// (0x000217e8) mup_equalizer_pane_cp3

0xa6a4,	// (0x00021809) mup_equalizer_pane_cp4_ParamLimits

0xa6a4,	// (0x00021809) mup_equalizer_pane_cp4

0xa6c5,	// (0x0002182a) mup_equalizer_pane_cp5

0xa6db,	// (0x00021840) mup_equalizer_pane_cp6

0xa6f3,	// (0x00021858) mup_equalizer_pane_cp7

0x2882,	// (0x000199e7) bg_popup_call_poc_act_pane_g9

0x288a,	// (0x000199ef) bg_popup_call_poc_act_pane_g10

0x2892,	// (0x000199f7) bg_popup_call_poc_act_pane_g11

0x000a,

0x06d2,	// (0x00017837) mup_scale_pane

0x0840,	// (0x000179a5) mup_scale_pane_g1

0x164d,	// (0x000187b2) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x000265df) mup_scale_pane_g

0x1671,	// (0x000187d6) msg_data_pane

0x1679,	// (0x000187de) scroll_pane_cp017

0xa71d,	// (0x00021882) bg_list_pane_cp04_ParamLimits

0xa71d,	// (0x00021882) bg_list_pane_cp04

0x1689,	// (0x000187ee) msg_data_pane_g1

0xa739,	// (0x0002189e) msg_data_pane_g2

0xa743,	// (0x000218a8) msg_data_pane_g3

0xa74b,	// (0x000218b0) msg_data_pane_g4

0xa753,	// (0x000218b8) msg_data_pane_g5

0xa75b,	// (0x000218c0) msg_data_pane_g6

0xa763,	// (0x000218c8) msg_data_pane_g7

0x0006,

0xf489,	// (0x000265ee) msg_data_pane_g

0xa76b,	// (0x000218d0) msg_text_pane_ParamLimits

0xa76b,	// (0x000218d0) msg_text_pane

0xa7a7,	// (0x0002190c) qrid_highlight_pane_cp011_ParamLimits

0xa7a7,	// (0x0002190c) qrid_highlight_pane_cp011

0x0477,	// (0x000175dc) msg_body_pane

0x0477,	// (0x000175dc) msg_header_pane

0x169a,	// (0x000187ff) input_focus_pane_cp07

0xa7cd,	// (0x00021932) msg_header_pane_t1_ParamLimits

0xa7cd,	// (0x00021932) msg_header_pane_t1

0x16af,	// (0x00018814) msg_header_pane_t2_ParamLimits

0x16af,	// (0x00018814) msg_header_pane_t2

0x0001,

0xf49d,	// (0x00026602) msg_header_pane_t_ParamLimits

0xf49d,	// (0x00026602) msg_header_pane_t

0x16c1,	// (0x00018826) msg_body_pane_g1

0x16c9,	// (0x0001882e) msg_body_pane_t1_ParamLimits

0x16c9,	// (0x0001882e) msg_body_pane_t1

0x16fa,	// (0x0001885f) msg_body_pane_t2_ParamLimits

0x16fa,	// (0x0001885f) msg_body_pane_t2

0x170c,	// (0x00018871) msg_body_pane_t3_ParamLimits

0x170c,	// (0x00018871) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x00026607) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x00026607) msg_body_pane_t

0x73d2,	// (0x0001e537) main_viewer_pane_g1_ParamLimits

0x73d2,	// (0x0001e537) main_viewer_pane_g1

0x73de,	// (0x0001e543) main_viewer_pane_g2_ParamLimits

0x73de,	// (0x0001e543) main_viewer_pane_g2

0xa801,	// (0x00021966) main_viewer_pane_g3_ParamLimits

0xa801,	// (0x00021966) main_viewer_pane_g3

0xa812,	// (0x00021977) main_viewer_pane_g4_ParamLimits

0xa812,	// (0x00021977) main_viewer_pane_g4

0x73ea,	// (0x0001e54f) main_viewer_pane_g5_ParamLimits

0x73ea,	// (0x0001e54f) main_viewer_pane_g5

0x73ea,	// (0x0001e54f) main_viewer_pane_g7_ParamLimits

0x73ea,	// (0x0001e54f) main_viewer_pane_g7

0x0fd4,	// (0x00018139) main_viewer_pane_g8_ParamLimits

0x0fd4,	// (0x00018139) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x00026617) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x00026617) main_viewer_pane_g

0x1760,	// (0x000188c5) viewer_content_pane_ParamLimits

0x1760,	// (0x000188c5) viewer_content_pane

0xa843,	// (0x000219a8) main_postcard_pane_g1_ParamLimits

0xa843,	// (0x000219a8) main_postcard_pane_g1

0xa851,	// (0x000219b6) main_postcard_pane_g2_ParamLimits

0xa851,	// (0x000219b6) main_postcard_pane_g2

0xa85f,	// (0x000219c4) main_postcard_pane_g3_ParamLimits

0xa85f,	// (0x000219c4) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x00026628) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x00026628) main_postcard_pane_g

0xa86f,	// (0x000219d4) main_postcard_pane_g4

0x2a84,	// (0x00019be9) smil_status_volume_pane_g2

0xa89b,	// (0x00021a00) postcard_pane_ParamLimits

0xa89b,	// (0x00021a00) postcard_pane

0x15d1,	// (0x00018736) postcard_pane_g1_ParamLimits

0x15d1,	// (0x00018736) postcard_pane_g1

0xa8cd,	// (0x00021a32) postcard_pane_g2_ParamLimits

0xa8cd,	// (0x00021a32) postcard_pane_g2

0xa8d9,	// (0x00021a3e) postcard_pane_g3_ParamLimits

0xa8d9,	// (0x00021a3e) postcard_pane_g3

0x177c,	// (0x000188e1) postcard_pane_g4_ParamLimits

0x177c,	// (0x000188e1) postcard_pane_g4

0xa8e5,	// (0x00021a4a) postcard_pane_g5_ParamLimits

0xa8e5,	// (0x00021a4a) postcard_pane_g5

0xa8f1,	// (0x00021a56) postcard_pane_g6_ParamLimits

0xa8f1,	// (0x00021a56) postcard_pane_g6

0x176e,	// (0x000188d3) postcard_pane_g7_ParamLimits

0x176e,	// (0x000188d3) postcard_pane_g7

0x0006,

0xf4d0,	// (0x00026635) postcard_pane_g_ParamLimits

0xf4d0,	// (0x00026635) postcard_pane_g

0xa8fd,	// (0x00021a62) main_mp2_pane_g1_ParamLimits

0xa8fd,	// (0x00021a62) main_mp2_pane_g1

0xa909,	// (0x00021a6e) main_mp2_pane_g2_ParamLimits

0xa909,	// (0x00021a6e) main_mp2_pane_g2

0xa915,	// (0x00021a7a) main_mp2_pane_g3_ParamLimits

0xa915,	// (0x00021a7a) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x00026644) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x00026644) main_mp2_pane_g

0xa921,	// (0x00021a86) main_mp2_pane_t1_ParamLimits

0xa921,	// (0x00021a86) main_mp2_pane_t1

0xa938,	// (0x00021a9d) main_mp2_pane_t2_ParamLimits

0xa938,	// (0x00021a9d) main_mp2_pane_t2

0xa94c,	// (0x00021ab1) main_mp2_pane_t3_ParamLimits

0xa94c,	// (0x00021ab1) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x0002664b) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x0002664b) main_mp2_pane_t

0x178a,	// (0x000188ef) pec_content_pane_ParamLimits

0x178a,	// (0x000188ef) pec_content_pane

0x0c27,	// (0x00017d8c) scroll_pane_cp015

0x179c,	// (0x00018901) pec_attribute_pane_ParamLimits

0x179c,	// (0x00018901) pec_attribute_pane

0xa95e,	// (0x00021ac3) pec_content_pane_g1_ParamLimits

0xa95e,	// (0x00021ac3) pec_content_pane_g1

0x17ac,	// (0x00018911) pec_content_pane_t1_ParamLimits

0x17ac,	// (0x00018911) pec_content_pane_t1

0x17be,	// (0x00018923) pec_content_pane_t2_ParamLimits

0x17be,	// (0x00018923) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x00026652) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x00026652) pec_content_pane_t

0xa96a,	// (0x00021acf) list_single_graphic_pane_cp01_ParamLimits

0xa96a,	// (0x00021acf) list_single_graphic_pane_cp01

0x06d2,	// (0x00017837) bg_popup_sub_pane_cp04

0x17d0,	// (0x00018935) popup_mup_playback_window_g1

0x17dc,	// (0x00018941) popup_mup_playback_window_t1

0x17f1,	// (0x00018956) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x00026657) popup_mup_playback_window_t

0x1828,	// (0x0001898d) main_image_pane_g1_ParamLimits

0x1828,	// (0x0001898d) main_image_pane_g1

0x186b,	// (0x000189d0) scroll_pane_cp018_ParamLimits

0x186b,	// (0x000189d0) scroll_pane_cp018

0x1883,	// (0x000189e8) scroll_pane_cp016_ParamLimits

0x1883,	// (0x000189e8) scroll_pane_cp016

0xaa03,	// (0x00021b68) smil2_image_pane_ParamLimits

0xaa03,	// (0x00021b68) smil2_image_pane

0xaa33,	// (0x00021b98) smil2_root_pane_ParamLimits

0xaa33,	// (0x00021b98) smil2_root_pane

0xaa5f,	// (0x00021bc4) smil2_text_pane_ParamLimits

0xaa5f,	// (0x00021bc4) smil2_text_pane

0x0477,	// (0x000175dc) bg_list_pane_cp06

0x18bf,	// (0x00018a24) grid_radio_pane

0x0477,	// (0x000175dc) bg_popup_window_pane_cp06

0x18c7,	// (0x00018a2c) main_fmradio_pane_t1

0x1294,	// (0x000183f9) heading_pane_cp04

0x18d5,	// (0x00018a3a) main_fmradio_pane_t2

0x289a,	// (0x000199ff) popup_cale_lunar_info_window_g1

0x18e3,	// (0x00018a48) main_fmradio_pane_t3

0x28a2,	// (0x00019a07) popup_cale_lunar_info_window_g2

0x18f1,	// (0x00018a56) main_fmradio_pane_t4

0x0001,

0x18ff,	// (0x00018a64) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x00026732) popup_cale_lunar_info_window_g

0xf507,	// (0x0002666c) main_fmradio_pane_t

0x190d,	// (0x00018a72) wait_bar_pane_cp03

0x1915,	// (0x00018a7a) cell_fmradio_pane_ParamLimits

0x1915,	// (0x00018a7a) cell_fmradio_pane

0x176e,	// (0x000188d3) cell_fmradio_pane_g1_ParamLimits

0x176e,	// (0x000188d3) cell_fmradio_pane_g1

0x0477,	// (0x000175dc) grid_highlight_pane_cp011

0x1928,	// (0x00018a8d) poc_content_pane_ParamLimits

0x1928,	// (0x00018a8d) poc_content_pane

0x193a,	// (0x00018a9f) scroll_pane_cp019

0xaa9f,	// (0x00021c04) popup_call_poc_act_window_ParamLimits

0xaa9f,	// (0x00021c04) popup_call_poc_act_window

0xaaac,	// (0x00021c11) popup_call_poc_inact_window_ParamLimits

0xaaac,	// (0x00021c11) popup_call_poc_inact_window

0xf5a4,	// (0x00026709) bg_popup_call_poc_act_pane_g

0x2812,	// (0x00019977) bg_popup_call_poc_inact_pane_g1

0x281a,	// (0x0001997f) bg_popup_call_poc_inact_pane_g2

0x1942,	// (0x00018aa7) popup_call_poc_act_window_g2

0x2822,	// (0x00019987) bg_popup_call_poc_inact_pane_g3

0x282a,	// (0x0001998f) bg_popup_call_poc_inact_pane_g4

0x2832,	// (0x00019997) bg_popup_call_poc_inact_pane_g5

0x194a,	// (0x00018aaf) popup_call_poc_act_window_t1_ParamLimits

0x194a,	// (0x00018aaf) popup_call_poc_act_window_t1

0x1972,	// (0x00018ad7) popup_call_poc_act_window_t2_ParamLimits

0x1972,	// (0x00018ad7) popup_call_poc_act_window_t2

0x199a,	// (0x00018aff) popup_call_poc_act_window_t3_ParamLimits

0x199a,	// (0x00018aff) popup_call_poc_act_window_t3

0x19c2,	// (0x00018b27) popup_call_poc_act_window_t4_ParamLimits

0x19c2,	// (0x00018b27) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x00026677) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x00026677) popup_call_poc_act_window_t

0x283a,	// (0x0001999f) bg_popup_call_poc_inact_pane_g6

0x2842,	// (0x000199a7) bg_popup_call_poc_inact_pane_g7

0x284a,	// (0x000199af) bg_popup_call_poc_inact_pane_g8

0x19d4,	// (0x00018b39) popup_call_poc_inact_window_g2

0x2852,	// (0x000199b7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x000266f6) bg_popup_call_poc_inact_pane_g

0x19dc,	// (0x00018b41) popup_call_poc_inact_window_t1_ParamLimits

0x19dc,	// (0x00018b41) popup_call_poc_inact_window_t1

0x19f1,	// (0x00018b56) popup_call_poc_inact_window_t2_ParamLimits

0x19f1,	// (0x00018b56) popup_call_poc_inact_window_t2

0x1a06,	// (0x00018b6b) popup_call_poc_inact_window_t3_ParamLimits

0x1a06,	// (0x00018b6b) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x00026680) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x00026680) popup_call_poc_inact_window_t

0x2a0a,	// (0x00019b6f) context_pane_ParamLimits

0xaf5c,	// (0x000220c1) signal_pane_ParamLimits

0x1500,	// (0x00018665) main_call2_pane

0x7545,	// (0x0001e6aa) popup_phob_thumbnail2_window_ParamLimits

0x7545,	// (0x0001e6aa) popup_phob_thumbnail2_window

0x73a2,	// (0x0001e507) aid_hotspot_pointer_arrow_pane

0x73aa,	// (0x0001e50f) aid_hotspot_pointer_hand_pane

0xadce,	// (0x00021f33) phob_pre_status_pane_g5

0x8cda,	// (0x0001fe3f) cams_zoom_pane_ParamLimits

0x8ce6,	// (0x0001fe4b) image_vga_pane_ParamLimits

0x8cf5,	// (0x0001fe5a) main_camera_pane_g1_ParamLimits

0x8d03,	// (0x0001fe68) main_camera_pane_g2_ParamLimits

0x8d0f,	// (0x0001fe74) main_camera_pane_g3_ParamLimits

0x8d1b,	// (0x0001fe80) main_camera_pane_g4_ParamLimits

0x8d27,	// (0x0001fe8c) main_camera_pane_g5_ParamLimits

0x8d33,	// (0x0001fe98) main_camera_pane_g6_ParamLimits

0x8d3f,	// (0x0001fea4) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x0002637f) main_camera_pane_g_ParamLimits

0x8d4b,	// (0x0001feb0) main_camera_pane_t1_ParamLimits

0x8d5d,	// (0x0001fec2) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x00026390) main_camera_pane_t_ParamLimits

0x06d2,	// (0x00017837) bg_popup_preview_window_pane_cp01_ParamLimits

0x06d2,	// (0x00017837) bg_popup_preview_window_pane_cp01

0x1a1b,	// (0x00018b80) popup_phob_thumbnail2_window_g1_ParamLimits

0x1a1b,	// (0x00018b80) popup_phob_thumbnail2_window_g1

0x0477,	// (0x000175dc) call2_cli_visual_pane

0xaac8,	// (0x00021c2d) popup_call2_audio_conf_window_ParamLimits

0xaac8,	// (0x00021c2d) popup_call2_audio_conf_window

0xaadd,	// (0x00021c42) popup_call2_audio_first_window_ParamLimits

0xaadd,	// (0x00021c42) popup_call2_audio_first_window

0xab7b,	// (0x00021ce0) popup_call2_audio_in_window_ParamLimits

0xab7b,	// (0x00021ce0) popup_call2_audio_in_window

0xabbd,	// (0x00021d22) popup_call2_audio_out_window_ParamLimits

0xabbd,	// (0x00021d22) popup_call2_audio_out_window

0xac1f,	// (0x00021d84) popup_call2_audio_second_window_ParamLimits

0xac1f,	// (0x00021d84) popup_call2_audio_second_window

0xac7d,	// (0x00021de2) popup_call2_audio_wait_window_ParamLimits

0xac7d,	// (0x00021de2) popup_call2_audio_wait_window

0x0477,	// (0x000175dc) bg_popup_call2_act_pane_cp03

0x06b4,	// (0x00017819) list_conf_pane_cp

0x1a27,	// (0x00018b8c) popup_call2_audio_conf_window_t1

0x12f1,	// (0x00018456) list_single_graphic_popup_conf2_pane_ParamLimits

0x12f1,	// (0x00018456) list_single_graphic_popup_conf2_pane

0x1304,	// (0x00018469) list_highlight_pane_cp04

0x1a35,	// (0x00018b9a) list_single_graphic_popup_conf2_pane_g1

0x1315,	// (0x0001847a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x00026687) list_single_graphic_popup_conf2_pane_g

0x1a3f,	// (0x00018ba4) list_single_graphic_popup_conf2_pane_t1

0x1a4d,	// (0x00018bb2) bg_popup_call2_act_pane_cp01_ParamLimits

0x1a4d,	// (0x00018bb2) bg_popup_call2_act_pane_cp01

0x1ad7,	// (0x00018c3c) call_type_pane_cp05_ParamLimits

0x1ad7,	// (0x00018c3c) call_type_pane_cp05

0x1b2b,	// (0x00018c90) popup_call2_audio_second_window_g1_ParamLimits

0x1b2b,	// (0x00018c90) popup_call2_audio_second_window_g1

0x1b7f,	// (0x00018ce4) popup_call2_audio_second_window_g2_ParamLimits

0x1b7f,	// (0x00018ce4) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x0002668c) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x0002668c) popup_call2_audio_second_window_g

0x1be4,	// (0x00018d49) popup_call2_audio_second_window_t1_ParamLimits

0x1be4,	// (0x00018d49) popup_call2_audio_second_window_t1

0x1c9f,	// (0x00018e04) popup_call2_audio_second_window_t2_ParamLimits

0x1c9f,	// (0x00018e04) popup_call2_audio_second_window_t2

0x1cf2,	// (0x00018e57) popup_call2_audio_second_window_t3_ParamLimits

0x1cf2,	// (0x00018e57) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x00026693) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x00026693) popup_call2_audio_second_window_t

0x0477,	// (0x000175dc) bg_popup_call2_in_pane_cp02

0x0481,	// (0x000175e6) call_type_pane_cp04

0x0489,	// (0x000175ee) popup_call2_audio_wait_window_g1

0x0491,	// (0x000175f6) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x0002626c) popup_call2_audio_wait_window_g

0x0499,	// (0x000175fe) popup_call2_audio_wait_window_t3

0x1de5,	// (0x00018f4a) bg_popup_call2_act_pane_ParamLimits

0x1de5,	// (0x00018f4a) bg_popup_call2_act_pane

0x1ea5,	// (0x0001900a) call_type_pane_cp03_ParamLimits

0x1ea5,	// (0x0001900a) call_type_pane_cp03

0x1f09,	// (0x0001906e) popup_call2_audio_first_window_g1_ParamLimits

0x1f09,	// (0x0001906e) popup_call2_audio_first_window_g1

0x1f79,	// (0x000190de) popup_call2_audio_first_window_g2_ParamLimits

0x1f79,	// (0x000190de) popup_call2_audio_first_window_g2

0x15d1,	// (0x00018736) popup_call2_audio_first_window_g3_ParamLimits

0x15d1,	// (0x00018736) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x0002669c) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x0002669c) popup_call2_audio_first_window_g

0x2057,	// (0x000191bc) popup_call2_audio_first_window_t1_ParamLimits

0x2057,	// (0x000191bc) popup_call2_audio_first_window_t1

0x215a,	// (0x000192bf) popup_call2_audio_first_window_t4_ParamLimits

0x215a,	// (0x000192bf) popup_call2_audio_first_window_t4

0x223d,	// (0x000193a2) popup_call2_audio_first_window_t5_ParamLimits

0x223d,	// (0x000193a2) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x000266a7) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x000266a7) popup_call2_audio_first_window_t

0x06ca,	// (0x0001782f) bg_popup_call2_act_pane_g1

0x28aa,	// (0x00019a0f) popup_cale_lunar_info_window_t1

0x28b8,	// (0x00019a1d) popup_cale_lunar_info_window_t2

0x28c6,	// (0x00019a2b) popup_cale_lunar_info_window_t3

0x0477,	// (0x000175dc) bg_popup_call2_bubble_pane

0x233e,	// (0x000194a3) bg_popup_call2_in_pane_cp01_ParamLimits

0x233e,	// (0x000194a3) bg_popup_call2_in_pane_cp01

0x0153,	// (0x000172b8) call_type_pane_cp02

0x2386,	// (0x000194eb) popup_call2_audio_out_window_g1_ParamLimits

0x2386,	// (0x000194eb) popup_call2_audio_out_window_g1

0x23b2,	// (0x00019517) popup_call2_audio_out_window_g2_ParamLimits

0x23b2,	// (0x00019517) popup_call2_audio_out_window_g2

0x23da,	// (0x0001953f) popup_call2_audio_out_window_g3_ParamLimits

0x23da,	// (0x0001953f) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x000266b0) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x000266b0) popup_call2_audio_out_window_g

0x2415,	// (0x0001957a) popup_call2_audio_out_window_t1_ParamLimits

0x2415,	// (0x0001957a) popup_call2_audio_out_window_t1

0x2474,	// (0x000195d9) popup_call2_audio_out_window_t2_ParamLimits

0x2474,	// (0x000195d9) popup_call2_audio_out_window_t2

0x24c8,	// (0x0001962d) popup_call2_audio_out_window_t3_ParamLimits

0x24c8,	// (0x0001962d) popup_call2_audio_out_window_t3

0x24de,	// (0x00019643) popup_call2_audio_out_window_t4_ParamLimits

0x24de,	// (0x00019643) popup_call2_audio_out_window_t4

0x24f4,	// (0x00019659) popup_call2_audio_out_window_t5_ParamLimits

0x24f4,	// (0x00019659) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x000266b9) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x000266b9) popup_call2_audio_out_window_t

0x2558,	// (0x000196bd) bg_popup_call2_in_pane_ParamLimits

0x2558,	// (0x000196bd) bg_popup_call2_in_pane

0x25b4,	// (0x00019719) popup_call2_audio_in_window_g1_ParamLimits

0x25b4,	// (0x00019719) popup_call2_audio_in_window_g1

0x25ec,	// (0x00019751) popup_call2_audio_in_window_g2_ParamLimits

0x25ec,	// (0x00019751) popup_call2_audio_in_window_g2

0x2624,	// (0x00019789) popup_call2_audio_in_window_g3_ParamLimits

0x2624,	// (0x00019789) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x000266c6) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x000266c6) popup_call2_audio_in_window_g

0x267c,	// (0x000197e1) popup_call2_audio_in_window_t1_ParamLimits

0x267c,	// (0x000197e1) popup_call2_audio_in_window_t1

0x26fc,	// (0x00019861) popup_call2_audio_in_window_t2_ParamLimits

0x26fc,	// (0x00019861) popup_call2_audio_in_window_t2

0x277c,	// (0x000198e1) popup_call2_audio_in_window_t3_ParamLimits

0x277c,	// (0x000198e1) popup_call2_audio_in_window_t3

0x2796,	// (0x000198fb) popup_call2_audio_in_window_t4_ParamLimits

0x2796,	// (0x000198fb) popup_call2_audio_in_window_t4

0x27a8,	// (0x0001990d) popup_call2_audio_in_window_t5_ParamLimits

0x27a8,	// (0x0001990d) popup_call2_audio_in_window_t5

0x27bd,	// (0x00019922) popup_call2_audio_in_window_t6_ParamLimits

0x27bd,	// (0x00019922) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x000266cf) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x000266cf) popup_call2_audio_in_window_t

0x06ca,	// (0x0001782f) bg_popup_call2_in_pane_g1

0x28d4,	// (0x00019a39) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x00026737) popup_cale_lunar_info_window_t

0x06d2,	// (0x00017837) bg_popup_call2_rect_pane_ParamLimits

0x06d2,	// (0x00017837) bg_popup_call2_rect_pane

0x0477,	// (0x000175dc) call2_cli_visual_graphic_pane

0x0477,	// (0x000175dc) call2_cli_visual_text_pane

0x7595,	// (0x0001e6fa) smil_status_volume_pane_g3

0x0002,

0x0840,	// (0x000179a5) call2_cli_visual_graphic_pane_g1

0x0840,	// (0x000179a5) call2_cli_visual_graphic_pane_g2

0x0840,	// (0x000179a5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x000266dc) call2_cli_visual_graphic_pane_g

0x27d2,	// (0x00019937) bg_popup_call2_rect_pane_g1

0x08cc,	// (0x00017a31) bg_popup_call2_rect_pane_g2

0x27da,	// (0x0001993f) bg_popup_call2_rect_pane_g3

0x27e2,	// (0x00019947) bg_popup_call2_rect_pane_g4

0x27ea,	// (0x0001994f) bg_popup_call2_rect_pane_g5

0x27f2,	// (0x00019957) bg_popup_call2_rect_pane_g6

0x27fa,	// (0x0001995f) bg_popup_call2_rect_pane_g7

0x2802,	// (0x00019967) bg_popup_call2_rect_pane_g8

0x280a,	// (0x0001996f) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x000266e3) bg_popup_call2_rect_pane_g

0x2812,	// (0x00019977) bg_popup_call2_bubble_pane_g1

0x281a,	// (0x0001997f) bg_popup_call2_bubble_pane_g2

0x2822,	// (0x00019987) bg_popup_call2_bubble_pane_g3

0x282a,	// (0x0001998f) bg_popup_call2_bubble_pane_g4

0x2832,	// (0x00019997) bg_popup_call2_bubble_pane_g5

0x283a,	// (0x0001999f) bg_popup_call2_bubble_pane_g6

0x2842,	// (0x000199a7) bg_popup_call2_bubble_pane_g7

0x284a,	// (0x000199af) bg_popup_call2_bubble_pane_g8

0x2852,	// (0x000199b7) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x000266f6) bg_popup_call2_bubble_pane_g

0x899f,	// (0x0001fb04) aid_cale_week_size_cell_pane

0x8d6f,	// (0x0001fed4) aid_cams_cif_uncrop_pane_ParamLimits

0x8d6f,	// (0x0001fed4) aid_cams_cif_uncrop_pane

0x8eca,	// (0x0002002f) aid_cams_size_cell_ParamLimits

0x8eca,	// (0x0002002f) aid_cams_size_cell

0x8ed6,	// (0x0002003b) grid_cams_pane_ParamLimits

0x8ee4,	// (0x00020049) linegrid_cams_pane_ParamLimits

0x9012,	// (0x00020177) call_video_pane_t1

0x9033,	// (0x00020198) call_video_pane_t2

0x0001,

0xf27e,	// (0x000263e3) call_video_pane_t

0x956a,	// (0x000206cf) aid_cale_month_size_cell_pane_ParamLimits

0x956a,	// (0x000206cf) aid_cale_month_size_cell_pane

0xf61b,	// (0x00026780) smil_status_volume_pane_g

0x75a2,	// (0x0001e707) volume_smil_pane_ParamLimits

0x6cfb,	// (0x0001de60) aid_popup2_width_pane

0x88e1,	// (0x0001fa46) cell_qdial_pane_g4_ParamLimits

0x88e1,	// (0x0001fa46) cell_qdial_pane_g4

0xa12a,	// (0x0002128f) aid_blid_cardinal_pane_ParamLimits

0xa13a,	// (0x0002129f) aid_blid_destination_pane_ParamLimits

0xa13a,	// (0x0002129f) aid_blid_destination_pane

0x06d2,	// (0x00017837) bg_popup_call_poc_act_pane_ParamLimits

0x06d2,	// (0x00017837) bg_popup_call_poc_act_pane

0x06d2,	// (0x00017837) bg_popup_call_poc_inact_pane_ParamLimits

0x06d2,	// (0x00017837) bg_popup_call_poc_inact_pane

0x285a,	// (0x000199bf) bg_popup_call_poc_act_pane_g1

0x2862,	// (0x000199c7) bg_popup_call_poc_act_pane_g2

0x286a,	// (0x000199cf) bg_popup_call_poc_act_pane_g3

0x282a,	// (0x0001998f) bg_popup_call_poc_act_pane_g4

0x2832,	// (0x00019997) bg_popup_call_poc_act_pane_g5

0x2872,	// (0x000199d7) bg_popup_call_poc_act_pane_g6

0x2842,	// (0x000199a7) bg_popup_call_poc_act_pane_g7

0x287a,	// (0x000199df) bg_popup_call_poc_act_pane_g8

0x0477,	// (0x000175dc) main_usb_pane

0x7474,	// (0x0001e5d9) popup_cale_lunar_info_window

0x935e,	// (0x000204c3) im_reading_pane_t1_ParamLimits

0x0b7f,	// (0x00017ce4) list_im_pane_ParamLimits

0x0b90,	// (0x00017cf5) scroll_pane_cp07_ParamLimits

0x0477,	// (0x000175dc) grid_highlight_pane_cp012

0x06d2,	// (0x00017837) mup_scale_pane_ParamLimits

0x15d1,	// (0x00018736) main_usb_pane_g1_ParamLimits

0x15d1,	// (0x00018736) main_usb_pane_g1

0xacf1,	// (0x00021e56) main_usb_pane_g2_ParamLimits

0xacf1,	// (0x00021e56) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x00026720) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x00026720) main_usb_pane_g

0xacfd,	// (0x00021e62) main_usb_pane_t1_ParamLimits

0xacfd,	// (0x00021e62) main_usb_pane_t1

0xad0f,	// (0x00021e74) main_usb_pane_t2_ParamLimits

0xad0f,	// (0x00021e74) main_usb_pane_t2

0xad21,	// (0x00021e86) main_usb_pane_t3_ParamLimits

0xad21,	// (0x00021e86) main_usb_pane_t3

0xad33,	// (0x00021e98) main_usb_pane_t4_ParamLimits

0xad33,	// (0x00021e98) main_usb_pane_t4

0xad45,	// (0x00021eaa) main_usb_pane_t5_ParamLimits

0xad45,	// (0x00021eaa) main_usb_pane_t5

0xad57,	// (0x00021ebc) main_usb_pane_t6_ParamLimits

0xad57,	// (0x00021ebc) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x00026725) main_usb_pane_t_ParamLimits

0xa0d0,	// (0x00021235) aid_text_placing

0xa0dc,	// (0x00021241) main_location2_pane_t1_ParamLimits

0xa0f0,	// (0x00021255) main_location2_pane_t2_ParamLimits

0xa104,	// (0x00021269) main_location2_pane_t3_ParamLimits

0xa118,	// (0x0002127d) main_location2_pane_t4_ParamLimits

0xa118,	// (0x0002127d) main_location2_pane_t4

0xf3df,	// (0x00026544) main_location2_pane_t_ParamLimits

0x070e,	// (0x00017873) find_pinb_pane_g2_ParamLimits

0x070e,	// (0x00017873) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x00026292) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x00026292) find_pinb_pane_g

0x071a,	// (0x0001787f) find_pinb_pane_t1_ParamLimits

0x072c,	// (0x00017891) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x00026297) find_pinb_pane_t_ParamLimits

0x0477,	// (0x000175dc) main_call3_pane

0x9976,	// (0x00020adb) cale_month_day_heading_pane_t1_ParamLimits

0x99d4,	// (0x00020b39) cale_month_day_heading_pane_t2_ParamLimits

0x9a39,	// (0x00020b9e) cale_month_day_heading_pane_t3_ParamLimits

0x9a9e,	// (0x00020c03) cale_month_day_heading_pane_t4_ParamLimits

0x9b03,	// (0x00020c68) cale_month_day_heading_pane_t5_ParamLimits

0x9b68,	// (0x00020ccd) cale_month_day_heading_pane_t6_ParamLimits

0x9bcd,	// (0x00020d32) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x0002641b) cale_month_day_heading_pane_t_ParamLimits

0x0e06,	// (0x00017f6b) smil_status_volume_pane

0xa8b5,	// (0x00021a1a) postcard_address_pane_ParamLimits

0xa8b5,	// (0x00021a1a) postcard_address_pane

0xa8c1,	// (0x00021a26) postcard_message_pane_ParamLimits

0xa8c1,	// (0x00021a26) postcard_message_pane

0xacbc,	// (0x00021e21) call2_cli_visual_pane_t1_ParamLimits

0xacbc,	// (0x00021e21) call2_cli_visual_pane_t1

0xb144,	// (0x000222a9) postcard_message_pane_t1_ParamLimits

0xb144,	// (0x000222a9) postcard_message_pane_t1

0xb12d,	// (0x00022292) postcard_address_pane_t1_ParamLimits

0xb12d,	// (0x00022292) postcard_address_pane_t1

0xb11e,	// (0x00022283) popup_call3_audio_in_window_ParamLimits

0xb11e,	// (0x00022283) popup_call3_audio_in_window

0xb002,	// (0x00022167) bg_popup_call3_in_pane_ParamLimits

0xb002,	// (0x00022167) bg_popup_call3_in_pane

0xb064,	// (0x000221c9) popup_call3_audio_in_window_g1_ParamLimits

0xb064,	// (0x000221c9) popup_call3_audio_in_window_g1

0xb07c,	// (0x000221e1) popup_call3_audio_in_window_g2_ParamLimits

0xb07c,	// (0x000221e1) popup_call3_audio_in_window_g2

0xb094,	// (0x000221f9) popup_call3_audio_in_window_g3_ParamLimits

0xb094,	// (0x000221f9) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x00026787) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x00026787) popup_call3_audio_in_window_g

0xb0bc,	// (0x00022221) popup_call3_audio_in_window_t1_ParamLimits

0xb0bc,	// (0x00022221) popup_call3_audio_in_window_t1

0xb0e4,	// (0x00022249) popup_call3_audio_in_window_t2_ParamLimits

0xb0e4,	// (0x00022249) popup_call3_audio_in_window_t2

0xb10c,	// (0x00022271) popup_call3_audio_in_window_t3_ParamLimits

0xb10c,	// (0x00022271) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x00026790) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x00026790) popup_call3_audio_in_window_t

0x1500,	// (0x00018665) bg_popup_call3_rect_pane

0x27d2,	// (0x00019937) bg_popup_call3_rect_pane_g1

0x08cc,	// (0x00017a31) bg_popup_call3_rect_pane_g2

0x27da,	// (0x0001993f) bg_popup_call3_rect_pane_g3

0x27e2,	// (0x00019947) bg_popup_call3_rect_pane_g4

0x27ea,	// (0x0001994f) bg_popup_call3_rect_pane_g5

0x27f2,	// (0x00019957) bg_popup_call3_rect_pane_g6

0x27fa,	// (0x0001995f) bg_popup_call3_rect_pane_g7

0xa52e,	// (0x00021693) mup_visualizer_osc_pane

0x15df,	// (0x00018744) mup_visualizer_spec_pane

0xb022,	// (0x00022187) call3_video_qcif_pane_ParamLimits

0xb022,	// (0x00022187) call3_video_qcif_pane

0xb034,	// (0x00022199) call3_video_qcif_uncrop_pane_ParamLimits

0xb034,	// (0x00022199) call3_video_qcif_uncrop_pane

0xb042,	// (0x000221a7) call3_video_subqcif_pane_ParamLimits

0xb042,	// (0x000221a7) call3_video_subqcif_pane

0xb054,	// (0x000221b9) call3_video_subqcif_uncrop_pane_ParamLimits

0xb054,	// (0x000221b9) call3_video_subqcif_uncrop_pane

0xb0ac,	// (0x00022211) popup_call3_audio_in_window_g4_ParamLimits

0xb0ac,	// (0x00022211) popup_call3_audio_in_window_g4

0xaff1,	// (0x00022156) mup_spec_half_pane

0xaffa,	// (0x0002215f) mup_spec_half_pane_cp

0x2a6a,	// (0x00019bcf) mup_osc_middle_pane

0x2a73,	// (0x00019bd8) mup_visualizer_osc_pane_g1

0xafd2,	// (0x00022137) mup_spec_bar_pane_ParamLimits

0xafd2,	// (0x00022137) mup_spec_bar_pane

0x2a57,	// (0x00019bbc) mup_spec_bar_pane_g1

0x2a61,	// (0x00019bc6) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0002677b) mup_spec_bar_pane_g

0x899f,	// (0x0001fb04) aid_cale_week_size_cell_pane_ParamLimits

0x89b2,	// (0x0001fb17) bg_cale_heading_pane_ParamLimits

0x0948,	// (0x00017aad) bg_cale_pane_cp01_ParamLimits

0x89ce,	// (0x0001fb33) cale_week_corner_pane_ParamLimits

0x89e4,	// (0x0001fb49) cale_week_day_heading_pane_ParamLimits

0x8a00,	// (0x0001fb65) cale_week_scroll_pane_g1_ParamLimits

0x8a19,	// (0x0001fb7e) cale_week_scroll_pane_g2_ParamLimits

0x8a2a,	// (0x0001fb8f) cale_week_scroll_pane_g3_ParamLimits

0x8a3b,	// (0x0001fba0) cale_week_scroll_pane_g4_ParamLimits

0x8a4c,	// (0x0001fbb1) cale_week_scroll_pane_g5_ParamLimits

0x8a5d,	// (0x0001fbc2) cale_week_scroll_pane_g6_ParamLimits

0x8a6e,	// (0x0001fbd3) cale_week_scroll_pane_g7_ParamLimits

0x8a81,	// (0x0001fbe6) cale_week_scroll_pane_g8_ParamLimits

0x8a94,	// (0x0001fbf9) cale_week_scroll_pane_g9_ParamLimits

0x8aa5,	// (0x0001fc0a) cale_week_scroll_pane_g10_ParamLimits

0x8ab6,	// (0x0001fc1b) cale_week_scroll_pane_g11_ParamLimits

0x8ac7,	// (0x0001fc2c) cale_week_scroll_pane_g12_ParamLimits

0x8ad8,	// (0x0001fc3d) cale_week_scroll_pane_g13_ParamLimits

0x8af1,	// (0x0001fc56) cale_week_scroll_pane_g14_ParamLimits

0x8b0a,	// (0x0001fc6f) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x00026323) cale_week_scroll_pane_g_ParamLimits

0x8b23,	// (0x0001fc88) cale_week_time_pane_ParamLimits

0x8b36,	// (0x0001fc9b) grid_cale_week_pane_ParamLimits

0x0961,	// (0x00017ac6) listscroll_cale_week_pane_t1

0x8b53,	// (0x0001fcb8) scroll_pane_cp08_ParamLimits

0x95bb,	// (0x00020720) cale_month_corner_pane_ParamLimits

0x0da6,	// (0x00017f0b) cale_month_pane_t1

0x9925,	// (0x00020a8a) cale_month_week_pane_ParamLimits

0x15d1,	// (0x00018736) popup_call_status_window_g1_ParamLimits

0x9f66,	// (0x000210cb) popup_call_status_window_g2_ParamLimits

0x9f72,	// (0x000210d7) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x000264cb) popup_call_status_window_g_ParamLimits

0x1219,	// (0x0001837e) aid_call2_pane

0xa7c1,	// (0x00021926) msg_header_pane_g1

0xa8b5,	// (0x00021a1a) postcard_address2_pane_ParamLimits

0xa8b5,	// (0x00021a1a) postcard_address2_pane

0xa8c1,	// (0x00021a26) postcard_message2_pane_ParamLimits

0xa8c1,	// (0x00021a26) postcard_message2_pane

0xaf6a,	// (0x000220cf) message2_row_pane_ParamLimits

0xaf6a,	// (0x000220cf) message2_row_pane

0xaf85,	// (0x000220ea) address2_row_pane_ParamLimits

0xaf85,	// (0x000220ea) address2_row_pane

0x2a25,	// (0x00019b8a) postcard_message2_row_pane_g1

0x2a2d,	// (0x00019b92) postcard_message2_row_pane_t1

0x2a25,	// (0x00019b8a) address2_row_pane_g1

0x2a2d,	// (0x00019b92) address2_row_pane_t1

0x7255,	// (0x0001e3ba) aid_size_cell_vorec

0x0477,	// (0x000175dc) main_rss_pane

0xaf98,	// (0x000220fd) rss_list_single_pane_ParamLimits

0xaf98,	// (0x000220fd) rss_list_single_pane

0x2a3b,	// (0x00019ba0) rss_list_single_pane_t1

0x2a49,	// (0x00019bae) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x00026776) rss_list_single_pane_t

0x0477,	// (0x000175dc) main_camera2_pane

0x0477,	// (0x000175dc) main_video2_pane

0x7600,	// (0x0001e765) cams_zoom_pane_cp2_ParamLimits

0x7600,	// (0x0001e765) cams_zoom_pane_cp2

0x760c,	// (0x0001e771) image2_vga_pane_ParamLimits

0x760c,	// (0x0001e771) image2_vga_pane

0x761b,	// (0x0001e780) main_camera2_pane_g1_ParamLimits

0x761b,	// (0x0001e780) main_camera2_pane_g1

0x7627,	// (0x0001e78c) main_camera2_pane_g2_ParamLimits

0x7627,	// (0x0001e78c) main_camera2_pane_g2

0x7633,	// (0x0001e798) main_camera2_pane_g3_ParamLimits

0x7633,	// (0x0001e798) main_camera2_pane_g3

0x763f,	// (0x0001e7a4) main_camera2_pane_g4_ParamLimits

0x763f,	// (0x0001e7a4) main_camera2_pane_g4

0x764b,	// (0x0001e7b0) main_camera2_pane_g5_ParamLimits

0x764b,	// (0x0001e7b0) main_camera2_pane_g5

0x7657,	// (0x0001e7bc) main_camera2_pane_g6_ParamLimits

0x7657,	// (0x0001e7bc) main_camera2_pane_g6

0x7663,	// (0x0001e7c8) main_camera2_pane_g7_ParamLimits

0x7663,	// (0x0001e7c8) main_camera2_pane_g7

0x766f,	// (0x0001e7d4) main_camera2_pane_g8_ParamLimits

0x766f,	// (0x0001e7d4) main_camera2_pane_g8

0x0008,

0xf632,	// (0x00026797) main_camera2_pane_g_ParamLimits

0xf632,	// (0x00026797) main_camera2_pane_g

0x7687,	// (0x0001e7ec) main_camera2_pane_t1_ParamLimits

0x7687,	// (0x0001e7ec) main_camera2_pane_t1

0x7699,	// (0x0001e7fe) main_camera2_pane_t2_ParamLimits

0x7699,	// (0x0001e7fe) main_camera2_pane_t2

0x76ab,	// (0x0001e810) main_camera2_pane_t3_ParamLimits

0x76ab,	// (0x0001e810) main_camera2_pane_t3

0x76bd,	// (0x0001e822) main_camera2_pane_t4_ParamLimits

0x76bd,	// (0x0001e822) main_camera2_pane_t4

0x0006,

0xf645,	// (0x000267aa) main_camera2_pane_t_ParamLimits

0xf645,	// (0x000267aa) main_camera2_pane_t

0x771f,	// (0x0001e884) cams_zoom_pane_cp4_ParamLimits

0x771f,	// (0x0001e884) cams_zoom_pane_cp4

0x772f,	// (0x0001e894) image2_cif_pane_ParamLimits

0x772f,	// (0x0001e894) image2_cif_pane

0x7744,	// (0x0001e8a9) image2_subqcif_pane_ParamLimits

0x7744,	// (0x0001e8a9) image2_subqcif_pane

0x7753,	// (0x0001e8b8) main_video2_pane_g1_ParamLimits

0x7753,	// (0x0001e8b8) main_video2_pane_g1

0x7765,	// (0x0001e8ca) main_video2_pane_g2_ParamLimits

0x7765,	// (0x0001e8ca) main_video2_pane_g2

0x7775,	// (0x0001e8da) main_video2_pane_g3_ParamLimits

0x7775,	// (0x0001e8da) main_video2_pane_g3

0x7785,	// (0x0001e8ea) main_video2_pane_g4_ParamLimits

0x7785,	// (0x0001e8ea) main_video2_pane_g4

0x7795,	// (0x0001e8fa) main_video2_pane_g5_ParamLimits

0x7795,	// (0x0001e8fa) main_video2_pane_g5

0x77a5,	// (0x0001e90a) main_video2_pane_g6_ParamLimits

0x77a5,	// (0x0001e90a) main_video2_pane_g6

0x0005,

0xf654,	// (0x000267b9) main_video2_pane_g_ParamLimits

0xf654,	// (0x000267b9) main_video2_pane_g

0x77b7,	// (0x0001e91c) main_video2_pane_t1_ParamLimits

0x77b7,	// (0x0001e91c) main_video2_pane_t1

0x77d1,	// (0x0001e936) main_video2_pane_t2_ParamLimits

0x77d1,	// (0x0001e936) main_video2_pane_t2

0x77f7,	// (0x0001e95c) main_video2_pane_t3_ParamLimits

0x77f7,	// (0x0001e95c) main_video2_pane_t3

0x0002,

0xf661,	// (0x000267c6) main_video2_pane_t_ParamLimits

0xf661,	// (0x000267c6) main_video2_pane_t

0xae0e,	// (0x00021f73) call_muted_g2

0x0001,

0xf603,	// (0x00026768) call_muted_g

0x0477,	// (0x000175dc) main_mup2_pane

0x2b2a,	// (0x00019c8f) main_mup2_pane_g1_ParamLimits

0x2b2a,	// (0x00019c8f) main_mup2_pane_g1

0xb15f,	// (0x000222c4) main_mup2_pane_g2_ParamLimits

0xb15f,	// (0x000222c4) main_mup2_pane_g2

0x7846,	// (0x0001e9ab) main_mup_pane_g13_cp1

0x784e,	// (0x0001e9b3) mup_volume_pane_cp1

0xb17f,	// (0x000222e4) main_mup2_pane_g4_ParamLimits

0xb17f,	// (0x000222e4) main_mup2_pane_g4

0xb194,	// (0x000222f9) main_mup2_pane_g5_ParamLimits

0xb194,	// (0x000222f9) main_mup2_pane_g5

0xb1a9,	// (0x0002230e) main_mup2_pane_g6_ParamLimits

0xb1a9,	// (0x0002230e) main_mup2_pane_g6

0xb1be,	// (0x00022323) main_mup2_pane_g7_ParamLimits

0xb1be,	// (0x00022323) main_mup2_pane_g7

0x0006,

0xf668,	// (0x000267cd) main_mup2_pane_g_ParamLimits

0xf668,	// (0x000267cd) main_mup2_pane_g

0xb1da,	// (0x0002233f) main_mup2_pane_t1_ParamLimits

0xb1da,	// (0x0002233f) main_mup2_pane_t1

0xb1f1,	// (0x00022356) main_mup2_pane_t2_ParamLimits

0xb1f1,	// (0x00022356) main_mup2_pane_t2

0xb208,	// (0x0002236d) main_mup2_pane_t3_ParamLimits

0xb208,	// (0x0002236d) main_mup2_pane_t3

0xb21f,	// (0x00022384) main_mup2_pane_t4_ParamLimits

0xb21f,	// (0x00022384) main_mup2_pane_t4

0xb239,	// (0x0002239e) main_mup2_pane_t5_ParamLimits

0xb239,	// (0x0002239e) main_mup2_pane_t5

0xb253,	// (0x000223b8) main_mup2_pane_t6_ParamLimits

0xb253,	// (0x000223b8) main_mup2_pane_t6

0x0005,

0xf677,	// (0x000267dc) main_mup2_pane_t_ParamLimits

0xf677,	// (0x000267dc) main_mup2_pane_t

0xb28b,	// (0x000223f0) mup2_visualizer_pane_ParamLimits

0xb28b,	// (0x000223f0) mup2_visualizer_pane

0xb2c1,	// (0x00022426) mup_progress_pane_cp_ParamLimits

0xb2c1,	// (0x00022426) mup_progress_pane_cp

0x7831,	// (0x0001e996) mup_volume_pane_cp_ParamLimits

0x7831,	// (0x0001e996) mup_volume_pane_cp

0xb2d8,	// (0x0002243d) mup2_visualizer_pane_g1_ParamLimits

0xb2d8,	// (0x0002243d) mup2_visualizer_pane_g1

0x2afc,	// (0x00019c61) mup2_visualizer_pane_g2_ParamLimits

0x2afc,	// (0x00019c61) mup2_visualizer_pane_g2

0xb2ed,	// (0x00022452) mup2_visualizer_pane_g3_ParamLimits

0xb2ed,	// (0x00022452) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x000267e9) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x000267e9) mup2_visualizer_pane_g

0x18b7,	// (0x00018a1c) aid_size_cell_fmradio

0x7408,	// (0x0001e56d) aid_height_parent_landcape

0x0c0e,	// (0x00017d73) wml_content_pane_cp

0x0c16,	// (0x00017d7b) wml_tabs_pane

0x0c1f,	// (0x00017d84) popup_wml_miniature_window

0x0c27,	// (0x00017d8c) scroll_pane_cp021

0x0c3b,	// (0x00017da0) wml_content_pane_comp8

0x0477,	// (0x000175dc) bg_popup_sub_pane_cp05

0x2b1a,	// (0x00019c7f) popup_wml_miniature_window_g1

0x2b22,	// (0x00019c87) wml_miniature_view_pane

0xb2fb,	// (0x00022460) aid_size_wml_view

0xb303,	// (0x00022468) wml_miniature_view_pane_g1

0xb30c,	// (0x00022471) wml_miniature_view_pane_g2

0xb315,	// (0x0002247a) wml_miniature_view_pane_g3

0xb31d,	// (0x00022482) wml_miniature_view_pane_g4

0xb325,	// (0x0002248a) wml_miniature_view_pane_g5

0xb32d,	// (0x00022492) wml_miniature_view_pane_g6

0xb335,	// (0x0002249a) wml_miniature_view_pane_g7

0xb33d,	// (0x000224a2) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x000267f0) wml_miniature_view_pane_g

0x2b2a,	// (0x00019c8f) background_graphic_ParamLimits

0x2b2a,	// (0x00019c8f) background_graphic

0x2b36,	// (0x00019c9b) wml_tabs_2_pane

0x2b3f,	// (0x00019ca4) wml_tabs_3_pane_ParamLimits

0x2b3f,	// (0x00019ca4) wml_tabs_3_pane

0x2b51,	// (0x00019cb6) wml_tabs_4_pane_ParamLimits

0x2b51,	// (0x00019cb6) wml_tabs_4_pane

0x2b67,	// (0x00019ccc) wml_tabs_5_pane_ParamLimits

0x2b67,	// (0x00019ccc) wml_tabs_5_pane

0x2b81,	// (0x00019ce6) wml_tabs_pane_g2_ParamLimits

0x2b81,	// (0x00019ce6) wml_tabs_pane_g2

0x2b95,	// (0x00019cfa) wml_tabs_pane_g3_ParamLimits

0x2b95,	// (0x00019cfa) wml_tabs_pane_g3

0xb345,	// (0x000224aa) wml_tabs_2_active_pane_ParamLimits

0xb345,	// (0x000224aa) wml_tabs_2_active_pane

0xb355,	// (0x000224ba) wml_tabs_2_passive_pane_ParamLimits

0xb355,	// (0x000224ba) wml_tabs_2_passive_pane

0xb365,	// (0x000224ca) wml_tabs_3_active_pane_cp_ParamLimits

0xb365,	// (0x000224ca) wml_tabs_3_active_pane_cp

0xb376,	// (0x000224db) wml_tabs_3_passive_pane_ParamLimits

0xb376,	// (0x000224db) wml_tabs_3_passive_pane

0xb387,	// (0x000224ec) wml_tabs_3_passive_pane_cp_ParamLimits

0xb387,	// (0x000224ec) wml_tabs_3_passive_pane_cp

0xb398,	// (0x000224fd) tabs_4_active_pane

0xb3a0,	// (0x00022505) tabs_4_passive_pane

0xb3a8,	// (0x0002250d) tabs_4_passive_pane_cp

0xb3b0,	// (0x00022515) tabs_4_passive_pane_cp2

0xace9,	// (0x00021e4e) aid_height_text

0xa4fb,	// (0x00021660) mup_volume_cont_pane_ParamLimits

0xa4fb,	// (0x00021660) mup_volume_cont_pane

0x8680,	// (0x0001f7e5) aid_size_cell_pinb

0x868a,	// (0x0001f7ef) aid_size_list_pinb

0xb2aa,	// (0x0002240f) mup2_volume_cont_pane_ParamLimits

0xb2aa,	// (0x0002240f) mup2_volume_cont_pane

0x781d,	// (0x0001e982) mup2_volume_cont_pane_g1_ParamLimits

0x781d,	// (0x0001e982) mup2_volume_cont_pane_g1

0x6d07,	// (0x0001de6c) aid_size_cell_touch_ParamLimits

0x6d07,	// (0x0001de6c) aid_size_cell_touch

0x6f83,	// (0x0001e0e8) touch_pane_ParamLimits

0x6f83,	// (0x0001e0e8) touch_pane

0x6f79,	// (0x0001e0de) main_rss2_pane

0x2beb,	// (0x00019d50) listscroll_rss2_pane

0x2bf4,	// (0x00019d59) rss2_navigation_pane

0x2bfc,	// (0x00019d61) list_rss2_pane

0x13b7,	// (0x0001851c) scroll_pane_cp22

0x2c04,	// (0x00019d69) rss2_navigation_pane_g1

0x2c0d,	// (0x00019d72) rss2_navigation_pane_g2

0x2c15,	// (0x00019d7a) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x00026801) rss2_navigation_pane_g

0x2c1d,	// (0x00019d82) rss2_navigation_pane_t1

0xb3b8,	// (0x0002251d) rss2_list_single_pane_ParamLimits

0xb3b8,	// (0x0002251d) rss2_list_single_pane

0x2c2b,	// (0x00019d90) rss2_list_single_pane_t2

0x2c39,	// (0x00019d9e) rss2_list_single_pane_t3_ParamLimits

0x2c39,	// (0x00019d9e) rss2_list_single_pane_t3

0x2c56,	// (0x00019dbb) rss2_list_single_pane_t4

0x9da9,	// (0x00020f0e) smil_status_pane_g1

0x741f,	// (0x0001e584) main_image2_pane_ParamLimits

0x741f,	// (0x0001e584) main_image2_pane

0x767b,	// (0x0001e7e0) main_camera2_pane_g9_ParamLimits

0x767b,	// (0x0001e7e0) main_camera2_pane_g9

0x76cf,	// (0x0001e834) main_camera2_pane_t5_ParamLimits

0x76cf,	// (0x0001e834) main_camera2_pane_t5

0x76e1,	// (0x0001e846) main_camera2_pane_t6_ParamLimits

0x76e1,	// (0x0001e846) main_camera2_pane_t6

0xb3e9,	// (0x0002254e) main_image2_pane_g1_ParamLimits

0xb3e9,	// (0x0002254e) main_image2_pane_g1

0xaa89,	// (0x00021bee) smil2_video_pane_ParamLimits

0xaa89,	// (0x00021bee) smil2_video_pane

0x6d3b,	// (0x0001dea0) aid_zoom_text_primary_cp

0x6f2a,	// (0x0001e08f) popup_preview_fixed_window

0x0b77,	// (0x00017cdc) im_reading_pane_g1

0x75c5,	// (0x0001e72a) cams2_bc_adjust_pane_cp_ParamLimits

0x75c5,	// (0x0001e72a) cams2_bc_adjust_pane_cp

0x7711,	// (0x0001e876) cams2_bc_adjust_pane_ParamLimits

0x7711,	// (0x0001e876) cams2_bc_adjust_pane

0x4479,	// (0x0001b5de) cams2_bc_adjust_pane_g1

0x7856,	// (0x0001e9bb) cams2_slider_pane

0x785f,	// (0x0001e9c4) cams2_slider_pane_g1

0x7868,	// (0x0001e9cd) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x00026808) cams2_slider_pane_g

0x6ff4,	// (0x0001e159) calc_display_pane_ParamLimits

0x7012,	// (0x0001e177) calc_paper_pane_ParamLimits

0x702e,	// (0x0001e193) grid_calc_pane_ParamLimits

0x7373,	// (0x0001e4d8) popup_clock_digital_window_t1_ParamLimits

0x1854,	// (0x000189b9) main_image_pane_t1

0x6fda,	// (0x0001e13f) aid_size_cell_calc_ParamLimits

0x6fda,	// (0x0001e13f) aid_size_cell_calc

0x7450,	// (0x0001e5b5) popup_blid_sat_info2_window_ParamLimits

0x7450,	// (0x0001e5b5) popup_blid_sat_info2_window

0x2ca0,	// (0x00019e05) aid_size_cell_blid

0x2ca8,	// (0x00019e0d) bg_popup_window_pane_cp07

0x2ccb,	// (0x00019e30) grid_popup_blid_pane

0x2cd5,	// (0x00019e3a) heading_pane_cp05_ParamLimits

0x2cd5,	// (0x00019e3a) heading_pane_cp05

0x2d9f,	// (0x00019f04) cell_popup_blid_pane_ParamLimits

0x2d9f,	// (0x00019f04) cell_popup_blid_pane

0x2dc3,	// (0x00019f28) cell_popup_blid_pane_g1

0x2dcb,	// (0x00019f30) cell_popup_blid_pane_t1

0xb270,	// (0x000223d5) mup2_indicator_pane_ParamLimits

0xb270,	// (0x000223d5) mup2_indicator_pane

0x1500,	// (0x00018665) mup2_visualizer_osc_pane

0x2b08,	// (0x00019c6d) mup2_visualizer_spec_pane_ParamLimits

0x2b08,	// (0x00019c6d) mup2_visualizer_spec_pane

0xb3f5,	// (0x0002255a) mup2_spec_half_pane

0xb3fe,	// (0x00022563) mup2_spec_half_pane_cp

0xb408,	// (0x0002256d) mup2_spec_bar_pane_ParamLimits

0xb408,	// (0x0002256d) mup2_spec_bar_pane

0x2a57,	// (0x00019bbc) mup2_spec_bar_pane_g1

0x2a61,	// (0x00019bc6) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0002677b) mup2_spec_bar_pane_g

0xb427,	// (0x0002258c) mup2_osc_middle_pane

0x2a73,	// (0x00019bd8) mup2_visualizer_osc_pane_g1

0x0084,	// (0x000171e9) popup_number_entry_window_t1_ParamLimits

0x0097,	// (0x000171fc) popup_number_entry_window_t2_ParamLimits

0x00a9,	// (0x0001720e) popup_number_entry_window_t3_ParamLimits

0x85bd,	// (0x0001f722) popup_number_entry_window_t5_ParamLimits

0x85bd,	// (0x0001f722) popup_number_entry_window_t5

0xf0d8,	// (0x0002623d) popup_number_entry_window_t_ParamLimits

0x00bb,	// (0x00017220) text_title_cp2_ParamLimits

0x73b2,	// (0x0001e517) aid_hotspot_pointer_text2_pane

0x73fc,	// (0x0001e561) main_viewer_pane_g9_ParamLimits

0x73fc,	// (0x0001e561) main_viewer_pane_g9

0x0da6,	// (0x00017f0b) cale_month_pane_t1_ParamLimits

0x0e3b,	// (0x00017fa0) bg_cale_pane_ParamLimits

0x0e53,	// (0x00017fb8) list_cale_pane_ParamLimits

0x0961,	// (0x00017ac6) listscroll_cale_day_pane_t1

0x0e64,	// (0x00017fc9) scroll_pane_cp09_ParamLimits

0xa536,	// (0x0002169b) main_mup_eq_pane_t1_ParamLimits

0xa536,	// (0x0002169b) main_mup_eq_pane_t1

0xa550,	// (0x000216b5) main_mup_eq_pane_t2_ParamLimits

0xa550,	// (0x000216b5) main_mup_eq_pane_t2

0xa56a,	// (0x000216cf) main_mup_eq_pane_t3_ParamLimits

0xa56a,	// (0x000216cf) main_mup_eq_pane_t3

0xa582,	// (0x000216e7) main_mup_eq_pane_t4_ParamLimits

0xa582,	// (0x000216e7) main_mup_eq_pane_t4

0xa59a,	// (0x000216ff) main_mup_eq_pane_t5_ParamLimits

0xa59a,	// (0x000216ff) main_mup_eq_pane_t5

0xa5b2,	// (0x00021717) main_mup_eq_pane_t6_ParamLimits

0xa5b2,	// (0x00021717) main_mup_eq_pane_t6

0xa5c6,	// (0x0002172b) main_mup_eq_pane_t7_ParamLimits

0xa5c6,	// (0x0002172b) main_mup_eq_pane_t7

0xa5da,	// (0x0002173f) main_mup_eq_pane_t8_ParamLimits

0xa5da,	// (0x0002173f) main_mup_eq_pane_t8

0xa5f0,	// (0x00021755) main_mup_eq_pane_t9_ParamLimits

0xa5f0,	// (0x00021755) main_mup_eq_pane_t9

0xa608,	// (0x0002176d) main_mup_eq_pane_t10_ParamLimits

0xa608,	// (0x0002176d) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x000265ca) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x000265ca) main_mup_eq_pane_t

0xa6c5,	// (0x0002182a) mup_equalizer_pane_cp5_ParamLimits

0xa6db,	// (0x00021840) mup_equalizer_pane_cp6_ParamLimits

0xa6f3,	// (0x00021858) mup_equalizer_pane_cp7_ParamLimits

0x6f79,	// (0x0001e0de) main_gallery_pane

0x2a7c,	// (0x00019be1) smil2_volume_pane

0x2a97,	// (0x00019bfc) smil_status_volume_pane_g1_ParamLimits

0x2a84,	// (0x00019be9) smil_status_volume_pane_g2_ParamLimits

0x7595,	// (0x0001e6fa) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x00026780) smil_status_volume_pane_g_ParamLimits

0x2ca8,	// (0x00019e0d) bg_popup_window_pane_cp07_ParamLimits

0x2cb6,	// (0x00019e1b) blid_firmament_pane

0xb430,	// (0x00022595) aid_size_cell_gallery_ParamLimits

0xb430,	// (0x00022595) aid_size_cell_gallery

0xb43e,	// (0x000225a3) grid_gallery_pane_ParamLimits

0xb43e,	// (0x000225a3) grid_gallery_pane

0xb44e,	// (0x000225b3) cell_gallery_pane_ParamLimits

0xb44e,	// (0x000225b3) cell_gallery_pane

0x2dd9,	// (0x00019f3e) bg_cell_gallery_focus_pane_ParamLimits

0x2dd9,	// (0x00019f3e) bg_cell_gallery_focus_pane

0x2deb,	// (0x00019f50) cell_gallery_pane_g1_ParamLimits

0x2deb,	// (0x00019f50) cell_gallery_pane_g1

0xb49c,	// (0x00022601) cell_gallery_pane_g2_ParamLimits

0xb49c,	// (0x00022601) cell_gallery_pane_g2

0xb4a9,	// (0x0002260e) cell_gallery_pane_g3_ParamLimits

0xb4a9,	// (0x0002260e) cell_gallery_pane_g3

0x2df7,	// (0x00019f5c) cell_gallery_pane_g4_ParamLimits

0x2df7,	// (0x00019f5c) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x0002682e) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x0002682e) cell_gallery_pane_g

0x2e03,	// (0x00019f68) bg_cell_gallery_focus_pane_g1

0x2e0b,	// (0x00019f70) bg_cell_gallery_focus_pane_g2

0x2e13,	// (0x00019f78) bg_cell_gallery_focus_pane_g3

0x2e1b,	// (0x00019f80) bg_cell_gallery_focus_pane_g4

0x2e23,	// (0x00019f88) bg_cell_gallery_focus_pane_g5

0x2e2b,	// (0x00019f90) bg_cell_gallery_focus_pane_g6

0x2e33,	// (0x00019f98) bg_cell_gallery_focus_pane_g7

0x2e3b,	// (0x00019fa0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x00026837) bg_cell_gallery_focus_pane_g

0x2e43,	// (0x00019fa8) aid_firma_cardinal

0x2e57,	// (0x00019fbc) blid_firmament_pane_t1

0x2e6e,	// (0x00019fd3) blid_firmament_pane_t2

0x2e85,	// (0x00019fea) blid_firmament_pane_t3

0x2e9c,	// (0x0001a001) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x00026848) blid_firmament_pane_t

0x2eb3,	// (0x0001a018) blid_sat_info_pane

0x2ec3,	// (0x0001a028) blid_sat_info_pane_g1

0x2ec3,	// (0x0001a028) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x00026851) blid_sat_info_pane_g

0x2ecd,	// (0x0001a032) blid_sat_info_pane_t1

0x2edb,	// (0x0001a040) smil2_volume_content_pane

0x2ee4,	// (0x0001a049) smil2_volume_pane_g1

0x2eec,	// (0x0001a051) smil2_volume_content_pane_g1

0x2ef5,	// (0x0001a05a) smil2_volume_content_pane_g2

0x2efe,	// (0x0001a063) smil2_volume_content_pane_g3

0x2f07,	// (0x0001a06c) smil2_volume_content_pane_g4

0x2f10,	// (0x0001a075) smil2_volume_content_pane_g5

0x2f19,	// (0x0001a07e) smil2_volume_content_pane_g6

0x2f22,	// (0x0001a087) smil2_volume_content_pane_g7

0x2f2b,	// (0x0001a090) smil2_volume_content_pane_g8

0x2f34,	// (0x0001a099) smil2_volume_content_pane_g9

0x2f3d,	// (0x0001a0a2) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x00026856) smil2_volume_content_pane_g

0x8bb9,	// (0x0001fd1e) cale_week_day_heading_pane_t1_ParamLimits

0x8bd2,	// (0x0001fd37) cale_week_day_heading_pane_t2_ParamLimits

0x8beb,	// (0x0001fd50) cale_week_day_heading_pane_t3_ParamLimits

0x8c04,	// (0x0001fd69) cale_week_day_heading_pane_t4_ParamLimits

0x8c1d,	// (0x0001fd82) cale_week_day_heading_pane_t5_ParamLimits

0x8c36,	// (0x0001fd9b) cale_week_day_heading_pane_t6_ParamLimits

0x8c4f,	// (0x0001fdb4) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x00026342) cale_week_day_heading_pane_t_ParamLimits

0x0973,	// (0x00017ad8) bg_cale_side_pane_ParamLimits

0x7185,	// (0x0001e2ea) cale_week_time_pane_t1_ParamLimits

0x719d,	// (0x0001e302) cale_week_time_pane_t2_ParamLimits

0x71b5,	// (0x0001e31a) cale_week_time_pane_t3_ParamLimits

0x71cd,	// (0x0001e332) cale_week_time_pane_t4_ParamLimits

0x71e5,	// (0x0001e34a) cale_week_time_pane_t5_ParamLimits

0x71fd,	// (0x0001e362) cale_week_time_pane_t6_ParamLimits

0x7215,	// (0x0001e37a) cale_week_time_pane_t7_ParamLimits

0x7235,	// (0x0001e39a) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x00026351) cale_week_time_pane_t_ParamLimits

0x8c68,	// (0x0001fdcd) cell_cale_week_pane_g2_ParamLimits

0x0973,	// (0x00017ad8) bg_cale_side_pane_cp01_ParamLimits

0x9c42,	// (0x00020da7) cale_month_week_pane_t1_ParamLimits

0x9c59,	// (0x00020dbe) cale_month_week_pane_t2_ParamLimits

0x9c70,	// (0x00020dd5) cale_month_week_pane_t3_ParamLimits

0x9c87,	// (0x00020dec) cale_month_week_pane_t4_ParamLimits

0x9c9e,	// (0x00020e03) cale_month_week_pane_t5_ParamLimits

0x9cb9,	// (0x00020e1e) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x0002642a) cale_month_week_pane_t_ParamLimits

0x72d3,	// (0x0001e438) cell_cale_month_pane_g1_ParamLimits

0x6f79,	// (0x0001e0de) main_cale_event_viewer_pane

0xf0ce,	// (0x00026233) listscroll_cale_event_viewer_pane

0x2f46,	// (0x0001a0ab) list_cale_ev_pane

0x2f4e,	// (0x0001a0b3) scroll_pane_cp023

0x2f5a,	// (0x0001a0bf) field_cale_ev_pane_ParamLimits

0x2f5a,	// (0x0001a0bf) field_cale_ev_pane

0x2f78,	// (0x0001a0dd) field_cale_ev_content_pane_ParamLimits

0x2f78,	// (0x0001a0dd) field_cale_ev_content_pane

0x2f84,	// (0x0001a0e9) field_cale_ev_pane_g1_ParamLimits

0x2f84,	// (0x0001a0e9) field_cale_ev_pane_g1

0x2f90,	// (0x0001a0f5) field_cale_ev_pane_g2_ParamLimits

0x2f90,	// (0x0001a0f5) field_cale_ev_pane_g2

0x2fa8,	// (0x0001a10d) field_cale_ev_pane_g3_ParamLimits

0x2fa8,	// (0x0001a10d) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x0002686b) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x0002686b) field_cale_ev_pane_g

0x2fc0,	// (0x0001a125) field_cale_ev_pane_t1_ParamLimits

0x2fc0,	// (0x0001a125) field_cale_ev_pane_t1

0x2fd7,	// (0x0001a13c) field_cale_ev_content_pane_t1_ParamLimits

0x2fd7,	// (0x0001a13c) field_cale_ev_content_pane_t1

0x1691,	// (0x000187f6) bg_button_pane_cp01

0x07c7,	// (0x0001792c) listscroll_cale_week_pane_ParamLimits

0x8995,	// (0x0001fafa) popup_toolbar_window_cp01

0x0961,	// (0x00017ac6) listscroll_cale_week_pane_t1_ParamLimits

0x07c7,	// (0x0001792c) listscroll_cale_day_pane_ParamLimits

0x8995,	// (0x0001fafa) popup_toolbar_window_cp02

0x0961,	// (0x00017ac6) listscroll_cale_day_pane_t1_ParamLimits

0x07c7,	// (0x0001792c) main_cale_month_pane_ParamLimits

0x7557,	// (0x0001e6bc) popup_toolbar_window_cp03_ParamLimits

0x7557,	// (0x0001e6bc) popup_toolbar_window_cp03

0xa99f,	// (0x00021b04) main_image_pane_g2_ParamLimits

0xa99f,	// (0x00021b04) main_image_pane_g2

0xa9ab,	// (0x00021b10) main_image_pane_g3_ParamLimits

0xa9ab,	// (0x00021b10) main_image_pane_g3

0x0002,

0xf4f7,	// (0x0002665c) main_image_pane_g_ParamLimits

0xf4f7,	// (0x0002665c) main_image_pane_g

0x1854,	// (0x000189b9) main_image_pane_t1_ParamLimits

0xa9b7,	// (0x00021b1c) main_image_pane_t2_ParamLimits

0xa9b7,	// (0x00021b1c) main_image_pane_t2

0xa9c9,	// (0x00021b2e) main_image_pane_t3_ParamLimits

0xa9c9,	// (0x00021b2e) main_image_pane_t3

0xa9db,	// (0x00021b40) main_image_pane_t4_ParamLimits

0xa9db,	// (0x00021b40) main_image_pane_t4

0x0003,

0xf4fe,	// (0x00026663) main_image_pane_t_ParamLimits

0xf4fe,	// (0x00026663) main_image_pane_t

0xa9ed,	// (0x00021b52) popup_image_details_window_cp01

0xa9f7,	// (0x00021b5c) popup_toobar_trans_pane_cp01_ParamLimits

0xa9f7,	// (0x00021b5c) popup_toobar_trans_pane_cp01

0x74a7,	// (0x0001e60c) popup_image_details_window_ParamLimits

0x74a7,	// (0x0001e60c) popup_image_details_window

0x74b5,	// (0x0001e61a) popup_image_focus_window

0x75b7,	// (0x0001e71c) camera2_autofocus_pane_ParamLimits

0x75b7,	// (0x0001e71c) camera2_autofocus_pane

0xf0ce,	// (0x00026233) bg_popup_sub_pane_cp06

0x2ff5,	// (0x0001a15a) popup_image_focus_window_g1

0x2ffd,	// (0x0001a162) popup_image_focus_window_g2

0x3005,	// (0x0001a16a) popup_image_focus_window_g3

0x300d,	// (0x0001a172) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x00026872) popup_image_focus_window_g

0x3015,	// (0x0001a17a) popup_image_focus_window_t1

0x3023,	// (0x0001a188) popup_image_focus_window_t2

0x3033,	// (0x0001a198) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x0002687b) popup_image_focus_window_t

0x3041,	// (0x0001a1a6) camera2_autofocus_pane_g1

0x0056,	// (0x000171bb) bg_tb_trans_pane_cp01

0x304f,	// (0x0001a1b4) popup_image_details_window_g1

0x3062,	// (0x0001a1c7) popup_image_details_window_g2

0x0002,

0xf728,	// (0x0002688d) popup_image_details_window_g

0x308b,	// (0x0001a1f0) popup_image_details_window_t1

0x309d,	// (0x0001a202) popup_image_details_window_t2

0x30b6,	// (0x0001a21b) popup_image_details_window_t3

0x30ca,	// (0x0001a22f) popup_image_details_window_t4

0x30e5,	// (0x0001a24a) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x00026894) popup_image_details_window_t

0x0799,	// (0x000178fe) bg_calc_paper_pane_ParamLimits

0x6f79,	// (0x0001e0de) grid_highlight_pane_cp013

0x705a,	// (0x0001e1bf) list_calc_pane_ParamLimits

0x706c,	// (0x0001e1d1) scroll_pane_cp024

0x07c7,	// (0x0001792c) bg_calc_display_pane_ParamLimits

0x7074,	// (0x0001e1d9) calc_display_pane_t1_ParamLimits

0x7089,	// (0x0001e1ee) calc_display_pane_t2_ParamLimits

0x709e,	// (0x0001e203) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x000262c4) calc_display_pane_t_ParamLimits

0x7107,	// (0x0001e26c) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x000262e1) cell_calc_pane_g

0x7110,	// (0x0001e275) cell_calc_pane_t1

0x084a,	// (0x000179af) grid_highlight_pane_cp02_ParamLimits

0x0860,	// (0x000179c5) toolbar_button_pane_cp01_ParamLimits

0x0860,	// (0x000179c5) toolbar_button_pane_cp01

0x1899,	// (0x000189fe) temp_image_control_pane_ParamLimits

0x1899,	// (0x000189fe) temp_image_control_pane

0x741f,	// (0x0001e584) main_mp3_pane

0x30ff,	// (0x0001a264) temp_image_control_pane_g1_ParamLimits

0x30ff,	// (0x0001a264) temp_image_control_pane_g1

0x310d,	// (0x0001a272) temp_image_control_pane_g2_ParamLimits

0x310d,	// (0x0001a272) temp_image_control_pane_g2

0x311f,	// (0x0001a284) temp_image_control_pane_g3_ParamLimits

0x311f,	// (0x0001a284) temp_image_control_pane_g3

0xb4e6,	// (0x0002264b) temp_image_control_pane_g4_ParamLimits

0xb4e6,	// (0x0002264b) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x0002689f) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x0002689f) temp_image_control_pane_g

0x30ff,	// (0x0001a264) main_mp3_pane_g1

0xb4f7,	// (0x0002265c) main_mp3_pane_g2

0x0007,

0xf743,	// (0x000268a8) main_mp3_pane_g

0x3162,	// (0x0001a2c7) main_mp3_pane_t1

0x09e6,	// (0x00017b4b) main_camera_pane_g8_ParamLimits

0x09e6,	// (0x00017b4b) main_camera_pane_g8

0x8e80,	// (0x0001ffe5) main_video_pane_g7_ParamLimits

0x8e80,	// (0x0001ffe5) main_video_pane_g7

0x76ff,	// (0x0001e864) main_camera2_pane_t7_ParamLimits

0x76ff,	// (0x0001e864) main_camera2_pane_t7

0x0bce,	// (0x00017d33) scroll_pane_cp025_ParamLimits

0x0bce,	// (0x00017d33) scroll_pane_cp025

0x0be2,	// (0x00017d47) scroll_pane_cp026_ParamLimits

0x0be2,	// (0x00017d47) scroll_pane_cp026

0x0bf1,	// (0x00017d56) wml_content_pane_ParamLimits

0x6f79,	// (0x0001e0de) main_touch_calib_pane

0xb59b,	// (0x00022700) main_touch_calib_pane_g1

0xb5a7,	// (0x0002270c) main_touch_calib_pane_g2

0xb5b3,	// (0x00022718) main_touch_calib_pane_g3

0xb5bf,	// (0x00022724) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x000268c6) main_touch_calib_pane_g

0xb5cb,	// (0x00022730) main_touch_calib_pane_t1

0xb5e2,	// (0x00022747) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x000268cf) main_touch_calib_pane_t

0x1441,	// (0x000185a6) mup_progress_pane_cp02

0x1460,	// (0x000185c5) navi_pane_g1

0x14c2,	// (0x00018627) navi_pane_mp_t3

0x741f,	// (0x0001e584) main_mp3_pane_ParamLimits

0xaf24,	// (0x00022089) navi_pane_ParamLimits

0x30ff,	// (0x0001a264) main_mp3_pane_g1_ParamLimits

0xb4f7,	// (0x0002265c) main_mp3_pane_g2_ParamLimits

0xb503,	// (0x00022668) main_mp3_pane_g3_ParamLimits

0xb503,	// (0x00022668) main_mp3_pane_g3

0xb50f,	// (0x00022674) main_mp3_pane_g4_ParamLimits

0xb50f,	// (0x00022674) main_mp3_pane_g4

0x312f,	// (0x0001a294) main_mp3_pane_g5_ParamLimits

0x312f,	// (0x0001a294) main_mp3_pane_g5

0x313d,	// (0x0001a2a2) main_mp3_pane_g6_ParamLimits

0x313d,	// (0x0001a2a2) main_mp3_pane_g6

0x314a,	// (0x0001a2af) main_mp3_pane_g7_ParamLimits

0x314a,	// (0x0001a2af) main_mp3_pane_g7

0x3156,	// (0x0001a2bb) main_mp3_pane_g8_ParamLimits

0x3156,	// (0x0001a2bb) main_mp3_pane_g8

0xf743,	// (0x000268a8) main_mp3_pane_g_ParamLimits

0xb51b,	// (0x00022680) main_mp3_pane_t2

0xb52b,	// (0x00022690) main_mp3_pane_t3

0x3170,	// (0x0001a2d5) main_mp3_pane_t4

0x317e,	// (0x0001a2e3) main_mp3_pane_t5

0x0005,

0xf754,	// (0x000268b9) main_mp3_pane_t

0x318c,	// (0x0001a2f1) mup_progress_pane_cp01

0x6d3b,	// (0x0001dea0) aid_zoom_text_secondary2

0x2f46,	// (0x0001a0ab) list_cale_ev2_pane

0x2f4e,	// (0x0001a0b3) scroll_pane_cp023_ParamLimits

0xb637,	// (0x0002279c) field_cale_ev2_pane_ParamLimits

0xb637,	// (0x0002279c) field_cale_ev2_pane

0xb660,	// (0x000227c5) field_cale_ev2_pane_g1_ParamLimits

0xb660,	// (0x000227c5) field_cale_ev2_pane_g1

0xb66c,	// (0x000227d1) field_cale_ev2_pane_g2_ParamLimits

0xb66c,	// (0x000227d1) field_cale_ev2_pane_g2

0xb684,	// (0x000227e9) field_cale_ev2_pane_g3_ParamLimits

0xb684,	// (0x000227e9) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x000268da) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x000268da) field_cale_ev2_pane_g

0xb69c,	// (0x00022801) field_cale_ev2_pane_t1_ParamLimits

0xb69c,	// (0x00022801) field_cale_ev2_pane_t1

0xb6b3,	// (0x00022818) field_cale_ev2_pane_t2_ParamLimits

0xb6b3,	// (0x00022818) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x000268e3) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x000268e3) field_cale_ev2_pane_t

0xa87f,	// (0x000219e4) main_postcard_pane_g5_ParamLimits

0xa87f,	// (0x000219e4) main_postcard_pane_g5

0xa88d,	// (0x000219f2) main_postcard_pane_g6_ParamLimits

0xa88d,	// (0x000219f2) main_postcard_pane_g6

0x8cca,	// (0x0001fe2f) camera2_autofocus_pane_cp_ParamLimits

0x8cca,	// (0x0001fe2f) camera2_autofocus_pane_cp

0x741f,	// (0x0001e584) main_mup3_pane

0xb6e8,	// (0x0002284d) main_mup3_pane_g1_ParamLimits

0xb6e8,	// (0x0002284d) main_mup3_pane_g1

0xb709,	// (0x0002286e) main_mup3_pane_g2_ParamLimits

0xb709,	// (0x0002286e) main_mup3_pane_g2

0xb781,	// (0x000228e6) main_mup3_pane_g3_ParamLimits

0xb781,	// (0x000228e6) main_mup3_pane_g3

0xb7c4,	// (0x00022929) main_mup3_pane_g4_ParamLimits

0xb7c4,	// (0x00022929) main_mup3_pane_g4

0xb807,	// (0x0002296c) main_mup3_pane_g5_ParamLimits

0xb807,	// (0x0002296c) main_mup3_pane_g5

0xb84a,	// (0x000229af) main_mup3_pane_g6_ParamLimits

0xb84a,	// (0x000229af) main_mup3_pane_g6

0x31a0,	// (0x0001a305) main_mup3_pane_g7_ParamLimits

0x31a0,	// (0x0001a305) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x000268f3) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x000268f3) main_mup3_pane_g

0xb8c0,	// (0x00022a25) main_mup3_pane_t1_ParamLimits

0xb8c0,	// (0x00022a25) main_mup3_pane_t1

0xb92f,	// (0x00022a94) main_mup3_pane_t2_ParamLimits

0xb92f,	// (0x00022a94) main_mup3_pane_t2

0xb9f8,	// (0x00022b5d) main_mup3_pane_t4_ParamLimits

0xb9f8,	// (0x00022b5d) main_mup3_pane_t4

0xba46,	// (0x00022bab) main_mup3_pane_t5_ParamLimits

0xba46,	// (0x00022bab) main_mup3_pane_t5

0xbaf6,	// (0x00022c5b) main_mup3_pane_t6_ParamLimits

0xbaf6,	// (0x00022c5b) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x00026904) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x00026904) main_mup3_pane_t

0xbba2,	// (0x00022d07) mup3_progress_pane_ParamLimits

0xbba2,	// (0x00022d07) mup3_progress_pane

0xbc20,	// (0x00022d85) popup_mup3_control_window_ParamLimits

0xbc20,	// (0x00022d85) popup_mup3_control_window

0x31ae,	// (0x0001a313) popup_mup3_text_window

0xbc39,	// (0x00022d9e) mup3_progress_pane_t1

0xbc58,	// (0x00022dbd) mup3_progress_pane_t2

0x31b6,	// (0x0001a31b) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x00026911) mup3_progress_pane_t

0x31d3,	// (0x0001a338) mup_progress_pane_cp03

0xf0ce,	// (0x00026233) bg_tb_trans_pane_cp04

0xbc77,	// (0x00022ddc) mup3_volume_pane

0xbc7f,	// (0x00022de4) popup_mup3_control_window_g1

0xbc88,	// (0x00022ded) mup3_volume_pane_g1

0xbc91,	// (0x00022df6) mup3_volume_pane_g2

0xbc9a,	// (0x00022dff) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x00026918) mup3_volume_pane_g

0xf0ce,	// (0x00026233) bg_tb_trans_pane_cp03

0x31e3,	// (0x0001a348) popup_mup3_text_window_g1

0x31eb,	// (0x0001a350) popup_mup3_text_window_t1

0x0821,	// (0x00017986) list_calc_item_pane_g1_ParamLimits

0x2bd2,	// (0x00019d37) mup_volume_pane_cp_g1

0xb5f9,	// (0x0002275e) main_touch_calib_pane_t3

0xb60d,	// (0x00022772) main_touch_calib_pane_t4

0xb621,	// (0x00022786) main_touch_calib_pane_t5

0x6cf3,	// (0x0001de58) aid_cell_size_toolbar2

0x6cfb,	// (0x0001de60) aid_popup3_width_pane

0x6d3b,	// (0x0001dea0) aid_zoom_text_msg_primary

0x72bd,	// (0x0001e422) vorec_t7

0x07e5,	// (0x0001794a) bg_calc_paper_pane_g1_ParamLimits

0x07fd,	// (0x00017962) bg_calc_paper_pane_g2_ParamLimits

0x07f1,	// (0x00017956) bg_calc_paper_pane_g3_ParamLimits

0x0815,	// (0x0001797a) bg_calc_paper_pane_g4_ParamLimits

0x0809,	// (0x0001796e) bg_calc_paper_pane_g5_ParamLimits

0x8847,	// (0x0001f9ac) bg_calc_paper_pane_g6_ParamLimits

0x8858,	// (0x0001f9bd) bg_calc_paper_pane_g7_ParamLimits

0x8869,	// (0x0001f9ce) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x000262cb) bg_calc_paper_pane_g_ParamLimits

0x887a,	// (0x0001f9df) calc_bg_paper_pane_g9_ParamLimits

0x8db1,	// (0x0001ff16) image_qvga_pane_ParamLimits

0x8db1,	// (0x0001ff16) image_qvga_pane

0x06d2,	// (0x00017837) bg_popup_sub_pane_cp04_ParamLimits

0x17d0,	// (0x00018935) popup_mup_playback_window_g1_ParamLimits

0x17dc,	// (0x00018941) popup_mup_playback_window_t1_ParamLimits

0x17f1,	// (0x00018956) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x00026657) popup_mup_playback_window_t_ParamLimits

0xb170,	// (0x000222d5) main_mup2_pane_g3_ParamLimits

0xb170,	// (0x000222d5) main_mup2_pane_g3

0x90c0,	// (0x00020225) popup_toolbar_window_cp04

0x1bd3,	// (0x00018d38) popup_call2_audio_second_window_g3_ParamLimits

0x1bd3,	// (0x00018d38) popup_call2_audio_second_window_g3

0x1fdd,	// (0x00019142) popup_call2_audio_first_window_g4_ParamLimits

0x1fdd,	// (0x00019142) popup_call2_audio_first_window_g4

0x265c,	// (0x000197c1) popup_call2_audio_in_window_g4_ParamLimits

0x265c,	// (0x000197c1) popup_call2_audio_in_window_g4

0xa992,	// (0x00021af7) aid_area_sk_bg_cut_ParamLimits

0xa992,	// (0x00021af7) aid_area_sk_bg_cut

0x1806,	// (0x0001896b) aid_area_sk_bg_cut_2_ParamLimits

0x1806,	// (0x0001896b) aid_area_sk_bg_cut_2

0xb48c,	// (0x000225f1) aid_placing_details_win

0xb494,	// (0x000225f9) aid_placing_details_win_2

0x3041,	// (0x0001a1a6) camera2_autofocus_pane_g1_ParamLimits

0x6f1b,	// (0x0001e080) popup_fixed_preview_cale_window_ParamLimits

0x6f1b,	// (0x0001e080) popup_fixed_preview_cale_window

0x152c,	// (0x00018691) navi_slider_pane_g3

0x1523,	// (0x00018688) navi_slider_pane_g4

0x151a,	// (0x0001867f) navi_slider_pane_g5

0x152c,	// (0x00018691) navi_slider_pane_g6

0x7399,	// (0x0001e4fe) navi_slider_pane_g7

0x1656,	// (0x000187bb) mup_scale_pane_g3

0x165f,	// (0x000187c4) mup_scale_pane_g4

0x1668,	// (0x000187cd) mup_scale_pane_g5

0xa70b,	// (0x00021870) mup_scale_pane_g6

0xa714,	// (0x00021879) mup_scale_pane_g7

0x152c,	// (0x00018691) cams2_slider_pane_g3

0x2c87,	// (0x00019dec) cams2_slider_pane_g4

0x7871,	// (0x0001e9d6) cams2_slider_pane_g5

0x152c,	// (0x00018691) cams2_slider_pane_g6

0x7879,	// (0x0001e9de) cams2_slider_pane_g7

0x2ec3,	// (0x0001a028) camera2_autofocus_pane_cp_g1

0x31f9,	// (0x0001a35e) bg_popup_preview_window_pane_cp02_ParamLimits

0x31f9,	// (0x0001a35e) bg_popup_preview_window_pane_cp02

0x3205,	// (0x0001a36a) list_fp_cale_pane_ParamLimits

0x3205,	// (0x0001a36a) list_fp_cale_pane

0x3211,	// (0x0001a376) popup_fixed_preview_cale_window_t1_ParamLimits

0x3211,	// (0x0001a376) popup_fixed_preview_cale_window_t1

0xbca3,	// (0x00022e08) popup_fixed_preview_cale_window_t2_ParamLimits

0xbca3,	// (0x00022e08) popup_fixed_preview_cale_window_t2

0xbcb8,	// (0x00022e1d) popup_fixed_preview_cale_window_t3_ParamLimits

0xbcb8,	// (0x00022e1d) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x0002691f) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x0002691f) popup_fixed_preview_cale_window_t

0xbccd,	// (0x00022e32) list_single_fp_cale_pane_ParamLimits

0xbccd,	// (0x00022e32) list_single_fp_cale_pane

0x322f,	// (0x0001a394) list_single_fp_cale_pane_g1_ParamLimits

0x322f,	// (0x0001a394) list_single_fp_cale_pane_g1

0x323b,	// (0x0001a3a0) list_single_fp_cale_pane_g2_ParamLimits

0x323b,	// (0x0001a3a0) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x00026926) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x00026926) list_single_fp_cale_pane_g

0x3254,	// (0x0001a3b9) list_single_fp_cale_pane_t1_ParamLimits

0x3254,	// (0x0001a3b9) list_single_fp_cale_pane_t1

0x3266,	// (0x0001a3cb) list_single_fp_cale_pane_t2_ParamLimits

0x3266,	// (0x0001a3cb) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x0002692d) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x0002692d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6f79,	// (0x0001e0de) main_dialer_pane

0xbcdf,	// (0x00022e44) aid_cell_size_keypad

0xbce9,	// (0x00022e4e) dialer_ne_pane

0xbcf3,	// (0x00022e58) grid_dialer_command_1_pane

0xbcfb,	// (0x00022e60) grid_dialer_command_2_pane

0xbd03,	// (0x00022e68) grid_dialer_keypad_pane

0xbd15,	// (0x00022e7a) bg_popup_call_pane_cp06_ParamLimits

0xbd15,	// (0x00022e7a) bg_popup_call_pane_cp06

0xbd21,	// (0x00022e86) dialer_ne_clear_pane_ParamLimits

0xbd21,	// (0x00022e86) dialer_ne_clear_pane

0x3299,	// (0x0001a3fe) dialer_ne_pane_g1

0x32a1,	// (0x0001a406) dialer_ne_pane_t1_ParamLimits

0x32a1,	// (0x0001a406) dialer_ne_pane_t1

0xbd2d,	// (0x00022e92) dialer_ne_pane_t2_ParamLimits

0xbd2d,	// (0x00022e92) dialer_ne_pane_t2

0xbd4a,	// (0x00022eaf) dialer_ne_pane_t3_ParamLimits

0xbd4a,	// (0x00022eaf) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x00026932) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x00026932) dialer_ne_pane_t

0xbd6e,	// (0x00022ed3) dialer_ne_pane_t3_copy1_ParamLimits

0xbd6e,	// (0x00022ed3) dialer_ne_pane_t3_copy1

0xbd92,	// (0x00022ef7) cell_dialer_keypad_pane_ParamLimits

0xbd92,	// (0x00022ef7) cell_dialer_keypad_pane

0xbda9,	// (0x00022f0e) cell_dialer_command_1_pane_ParamLimits

0xbda9,	// (0x00022f0e) cell_dialer_command_1_pane

0xbdbf,	// (0x00022f24) cell_dialer_command_2_pane_ParamLimits

0xbdbf,	// (0x00022f24) cell_dialer_command_2_pane

0x32b3,	// (0x0001a418) bg_button_pane_cp02_ParamLimits

0x32b3,	// (0x0001a418) bg_button_pane_cp02

0xbdce,	// (0x00022f33) cell_dialer_keypad_pane_g1_ParamLimits

0xbdce,	// (0x00022f33) cell_dialer_keypad_pane_g1

0x32b3,	// (0x0001a418) bg_button_pane_cp03_ParamLimits

0x32b3,	// (0x0001a418) bg_button_pane_cp03

0xbde3,	// (0x00022f48) cell_dialer_command_1_pane_g1_ParamLimits

0xbde3,	// (0x00022f48) cell_dialer_command_1_pane_g1

0x32bf,	// (0x0001a424) bg_button_pane_cp04

0xbdf7,	// (0x00022f5c) cell_dialer_command_2_pane_g1

0x1500,	// (0x00018665) bg_button_pane_cp06

0x32c7,	// (0x0001a42c) dialer_ne_clear_pane_g1

0xa21f,	// (0x00021384) navi_pane_g2

0xa24d,	// (0x000213b2) navi_pane_g3

0x0002,

0xf3f5,	// (0x0002655a) navi_pane_g

0xa278,	// (0x000213dd) navi_pane_mv_g2

0xa29f,	// (0x00021404) navi_pane_mv_g5

0xa2a7,	// (0x0002140c) navi_pane_mv_t1

0x07c7,	// (0x0001792c) main_clock2_pane

0xbe28,	// (0x00022f8d) main_clock2_list_pane_ParamLimits

0xbe28,	// (0x00022f8d) main_clock2_list_pane

0xbe50,	// (0x00022fb5) main_clock2_pane_t1_ParamLimits

0xbe50,	// (0x00022fb5) main_clock2_pane_t1

0xbe72,	// (0x00022fd7) main_clock2_pane_t2_ParamLimits

0xbe72,	// (0x00022fd7) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x00026939) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x00026939) main_clock2_pane_t

0xbecd,	// (0x00023032) popup_clock_analogue_window_cp03_ParamLimits

0xbecd,	// (0x00023032) popup_clock_analogue_window_cp03

0xbeeb,	// (0x00023050) popup_clock_digital_window_cp02_ParamLimits

0xbeeb,	// (0x00023050) popup_clock_digital_window_cp02

0xbf58,	// (0x000230bd) main_clock2_list_single_pane_ParamLimits

0xbf58,	// (0x000230bd) main_clock2_list_single_pane

0x1500,	// (0x00018665) list_highlight_pane_cp05

0x32cf,	// (0x0001a434) main_clock2_list_single_pane_t1

0x90c0,	// (0x00020225) popup_toolbar_window_cp04_ParamLimits

0xb4b6,	// (0x0002261b) camera2_autofocus_pane_g2_ParamLimits

0xb4b6,	// (0x0002261b) camera2_autofocus_pane_g2

0xb4c2,	// (0x00022627) camera2_autofocus_pane_g3_ParamLimits

0xb4c2,	// (0x00022627) camera2_autofocus_pane_g3

0xb4ce,	// (0x00022633) camera2_autofocus_pane_g4_ParamLimits

0xb4ce,	// (0x00022633) camera2_autofocus_pane_g4

0xb4da,	// (0x0002263f) camera2_autofocus_pane_g5_ParamLimits

0xb4da,	// (0x0002263f) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x00026882) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x00026882) camera2_autofocus_pane_g

0xb6c8,	// (0x0002282d) camera2_autofocus_pane_cp_g2

0xb6d0,	// (0x00022835) camera2_autofocus_pane_cp_g3

0xb6d8,	// (0x0002283d) camera2_autofocus_pane_cp_g4

0xb6e0,	// (0x00022845) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x000268e8) camera2_autofocus_pane_cp_g

0xbd0d,	// (0x00022e72) popup_dialer_spcha_window

0xf0ce,	// (0x00026233) bg_popup_sub_pane_cp07

0x32dd,	// (0x0001a442) list_spcha_pane

0x32e5,	// (0x0001a44a) list_single_spcha_pane_ParamLimits

0x32e5,	// (0x0001a44a) list_single_spcha_pane

0xf0ce,	// (0x00026233) list_highlight_pane_cp06

0x32f6,	// (0x0001a45b) list_single_spcha_pane_t1

0x2406,	// (0x0001956b) popup_call2_audio_out_window_g4_ParamLimits

0x2406,	// (0x0001956b) popup_call2_audio_out_window_g4

0x6f79,	// (0x0001e0de) main_imed2_pane

0x74bd,	// (0x0001e622) popup_imed_adjust2_window

0x74d0,	// (0x0001e635) popup_imed_trans_window_ParamLimits

0x74d0,	// (0x0001e635) popup_imed_trans_window

0x2d01,	// (0x00019e66) popup_blid_sat_info2_window_t1

0x2d0f,	// (0x00019e74) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x00026817) popup_blid_sat_info2_window_t

0xbf8a,	// (0x000230ef) aid_size_cell_colour_35

0xbfa4,	// (0x00023109) aid_size_cell_colour_112

0xbfbb,	// (0x00023120) aid_size_cell_effect

0x0056,	// (0x000171bb) bg_tb_trans_pane_cp02

0x1002,	// (0x00018167) heading_imed_pane

0xbfd5,	// (0x0002313a) listscroll_imed_pane

0x3304,	// (0x0001a469) heading_imed_pane_g1

0x330c,	// (0x0001a471) heading_imed_pane_t1

0x331a,	// (0x0001a47f) grid_imed_colour_35_pane_ParamLimits

0x331a,	// (0x0001a47f) grid_imed_colour_35_pane

0xbfe1,	// (0x00023146) grid_imed_effect_pane

0x3331,	// (0x0001a496) list_imed_aspect_pane

0xbff1,	// (0x00023156) scroll_pane_cp027_ParamLimits

0xbff1,	// (0x00023156) scroll_pane_cp027

0xbffd,	// (0x00023162) cell_imed_effect_pane_ParamLimits

0xbffd,	// (0x00023162) cell_imed_effect_pane

0x3339,	// (0x0001a49e) cell_imed_colour_pane_ParamLimits

0x3339,	// (0x0001a49e) cell_imed_colour_pane

0x337b,	// (0x0001a4e0) cell_imed_colour_pane_g1_ParamLimits

0x337b,	// (0x0001a4e0) cell_imed_colour_pane_g1

0x338c,	// (0x0001a4f1) hgihlgiht_grid_pane_cp016_ParamLimits

0x338c,	// (0x0001a4f1) hgihlgiht_grid_pane_cp016

0xc015,	// (0x0002317a) cell_imed_effect_pane_g1

0xc01d,	// (0x00023182) grid_highlight_pane_cp017

0x339d,	// (0x0001a502) list_imed_single_pane_ParamLimits

0x339d,	// (0x0001a502) list_imed_single_pane

0xf0ce,	// (0x00026233) list_highlight_pane_cp07

0x33b2,	// (0x0001a517) list_imed_aspect_pane_comp1_t1

0x29bd,	// (0x00019b22) bg_tb_trans_pane_cp05

0x33d4,	// (0x0001a539) popup_imed_adjust2_window_g1

0x33fb,	// (0x0001a560) popup_imed_adjust2_window_t1

0x3413,	// (0x0001a578) slider_imed_adjust_pane

0x3427,	// (0x0001a58c) slider_imed_adjust_pane_g1

0x3437,	// (0x0001a59c) slider_imed_adjust_pane_g2

0x3447,	// (0x0001a5ac) slider_imed_adjust_pane_g3

0x3458,	// (0x0001a5bd) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x00026956) slider_imed_adjust_pane_g

0xc026,	// (0x0002318b) aid_size_cell_clipart2

0xc032,	// (0x00023197) grid_imed_clipart_pane

0x3469,	// (0x0001a5ce) scroll_pane_cp031

0xc03c,	// (0x000231a1) cell_imed_clipart_pane_ParamLimits

0xc03c,	// (0x000231a1) cell_imed_clipart_pane

0xc05e,	// (0x000231c3) cell_imed_clipart_pane_g1

0xf0ce,	// (0x00026233) grid_highlight_pane_cp014

0xbe34,	// (0x00022f99) main_clock2_pane_g1_ParamLimits

0xbe34,	// (0x00022f99) main_clock2_pane_g1

0xbf03,	// (0x00023068) aid_call2_pane_cp10

0xbf15,	// (0x0002307a) aid_call_pane_cp10

0x1435,	// (0x0001859a) popup_clock_analogue_window_cp10_g1

0x1435,	// (0x0001859a) popup_clock_analogue_window_cp10_g2

0xbf27,	// (0x0002308c) popup_clock_analogue_window_cp10_g3

0xbf27,	// (0x0002308c) popup_clock_analogue_window_cp10_g4

0x1435,	// (0x0001859a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x00026944) popup_clock_analogue_window_cp10_g

0xbf39,	// (0x0002309e) popup_clock_analogue_window_cp10_t1

0x7882,	// (0x0001e9e7) clock_digital_number_pane_cp10_ParamLimits

0x7882,	// (0x0001e9e7) clock_digital_number_pane_cp10

0x789a,	// (0x0001e9ff) clock_digital_number_pane_cp11_ParamLimits

0x789a,	// (0x0001e9ff) clock_digital_number_pane_cp11

0x78b2,	// (0x0001ea17) clock_digital_number_pane_cp12_ParamLimits

0x78b2,	// (0x0001ea17) clock_digital_number_pane_cp12

0x78ca,	// (0x0001ea2f) clock_digital_number_pane_cp13_ParamLimits

0x78ca,	// (0x0001ea2f) clock_digital_number_pane_cp13

0x78e2,	// (0x0001ea47) clock_digital_separator_pane_cp10_ParamLimits

0x78e2,	// (0x0001ea47) clock_digital_separator_pane_cp10

0xbf6a,	// (0x000230cf) popup_clock_digital_window_cp02_t1_ParamLimits

0xbf6a,	// (0x000230cf) popup_clock_digital_window_cp02_t1

0x06ca,	// (0x0001782f) clock_digital_number_pane_cp10_g1

0x06ca,	// (0x0001782f) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x0002695f) clock_digital_number_pane_cp10_g

0x06ca,	// (0x0001782f) clock_digital_separator_pane_cp10_g1

0x06ca,	// (0x0001782f) clock_digital_separator_pane_g2_cp10

0x14d0,	// (0x00018635) navi_pane_vded_g4

0x14d9,	// (0x0001863e) navi_pane_vded_g5

0x14e2,	// (0x00018647) navi_pane_vded_t1

0x6f79,	// (0x0001e0de) main_vded_pane

0xc067,	// (0x000231cc) main_vded_pane_g1

0xc073,	// (0x000231d8) main_vded_pane_g2

0xc07d,	// (0x000231e2) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x00026964) main_vded_pane_g

0xc087,	// (0x000231ec) main_vded_pane_t1

0xc095,	// (0x000231fa) main_vded_pane_t2

0x0001,

0xf806,	// (0x0002696b) main_vded_pane_t

0xc0a3,	// (0x00023208) vded_slider_pane

0xc0ad,	// (0x00023212) vded_video_pane

0x3471,	// (0x0001a5d6) vded_video_pane_g1

0xc0b7,	// (0x0002321c) vded_video_pane_g2

0x2ec3,	// (0x0001a028) vded_video_pane_g3

0x0002,

0xf80b,	// (0x00026970) vded_video_pane_g

0x347b,	// (0x0001a5e0) vded_slider_pane_g1

0x2bd2,	// (0x00019d37) vded_slider_pane_g2

0x3484,	// (0x0001a5e9) vded_slider_pane_g3

0x348d,	// (0x0001a5f2) vded_slider_pane_g4

0x3496,	// (0x0001a5fb) vded_slider_pane_g5

0x0004,

0xf812,	// (0x00026977) vded_slider_pane_g

0xbc12,	// (0x00022d77) mup3_rocker_pane_ParamLimits

0xbc12,	// (0x00022d77) mup3_rocker_pane

0xc0c0,	// (0x00023225) mup3_control_keys_pane_g1

0xc0c8,	// (0x0002322d) mup3_control_keys_pane_g2

0xc0d0,	// (0x00023235) mup3_control_keys_pane_g3

0xc0d8,	// (0x0002323d) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x00026982) mup3_control_keys_pane_g

0x6f43,	// (0x0001e0a8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6f43,	// (0x0001e0a8) popup_toolbar2_fixed_window_cp01

0xbc2c,	// (0x00022d91) popup_toolbar2_fixed_window_cp02_ParamLimits

0xbc2c,	// (0x00022d91) popup_toolbar2_fixed_window_cp02

0x1d45,	// (0x00018eaa) popup_call2_audio_second_window_t4_ParamLimits

0x1d45,	// (0x00018eaa) popup_call2_audio_second_window_t4

0x2273,	// (0x000193d8) popup_call2_audio_first_window_t6_ParamLimits

0x2273,	// (0x000193d8) popup_call2_audio_first_window_t6

0x2509,	// (0x0001966e) popup_call2_audio_out_window_t6_ParamLimits

0x2509,	// (0x0001966e) popup_call2_audio_out_window_t6

0x6f79,	// (0x0001e0de) main_vitu_pane

0xc0e8,	// (0x0002324d) aid_size_cell_itu_ParamLimits

0xc0e8,	// (0x0002324d) aid_size_cell_itu

0xc0f6,	// (0x0002325b) bg_popup_window_pane_cp08_ParamLimits

0xc0f6,	// (0x0002325b) bg_popup_window_pane_cp08

0xc104,	// (0x00023269) field_vitu_entry_pane_ParamLimits

0xc104,	// (0x00023269) field_vitu_entry_pane

0xc113,	// (0x00023278) grid_vitu_function_pane_ParamLimits

0xc113,	// (0x00023278) grid_vitu_function_pane

0xc123,	// (0x00023288) grid_vitu_itu_pane_ParamLimits

0xc123,	// (0x00023288) grid_vitu_itu_pane

0xc133,	// (0x00023298) cell_vitu_itu_pane_ParamLimits

0xc133,	// (0x00023298) cell_vitu_itu_pane

0xc148,	// (0x000232ad) cell_vitu_function_pane_ParamLimits

0xc148,	// (0x000232ad) cell_vitu_function_pane

0x0056,	// (0x000171bb) bg_popup_sub_pane_cp08_ParamLimits

0x0056,	// (0x000171bb) bg_popup_sub_pane_cp08

0xc15a,	// (0x000232bf) field_vitu_entry_pane_t1_ParamLimits

0xc15a,	// (0x000232bf) field_vitu_entry_pane_t1

0x34b7,	// (0x0001a61c) field_vitu_entry_pane_t2_ParamLimits

0x34b7,	// (0x0001a61c) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x00026990) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x00026990) field_vitu_entry_pane_t

0x34d4,	// (0x0001a639) bg_button_pane_cp05_ParamLimits

0x34d4,	// (0x0001a639) bg_button_pane_cp05

0xc176,	// (0x000232db) cell_vitu_itu_pane_g1

0xc18e,	// (0x000232f3) cell_vitu_itu_pane_t1_ParamLimits

0xc18e,	// (0x000232f3) cell_vitu_itu_pane_t1

0xc1a0,	// (0x00023305) cell_vitu_itu_pane_t2_ParamLimits

0xc1a0,	// (0x00023305) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x00026995) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x00026995) cell_vitu_itu_pane_t

0x34e2,	// (0x0001a647) bg_button_pane_cp07

0xc1d5,	// (0x0002333a) cell_vitu_function_pane_g1

0x7052,	// (0x0001e1b7) main_calc_pane_g1

0x6d2f,	// (0x0001de94) aid_visual_content_pane

0x6f79,	// (0x0001e0de) main_vradio_pane

0xc1de,	// (0x00023343) main_vradio_pane_g1_ParamLimits

0xc1de,	// (0x00023343) main_vradio_pane_g1

0x34ec,	// (0x0001a651) main_vradio_pane_g2_ParamLimits

0x34ec,	// (0x0001a651) main_vradio_pane_g2

0x0001,

0xf837,	// (0x0002699c) main_vradio_pane_g_ParamLimits

0xf837,	// (0x0002699c) main_vradio_pane_g

0xc1ee,	// (0x00023353) main_vradio_pane_t1_ParamLimits

0xc1ee,	// (0x00023353) main_vradio_pane_t1

0xc200,	// (0x00023365) main_vradio_pane_t2_ParamLimits

0xc200,	// (0x00023365) main_vradio_pane_t2

0x34f9,	// (0x0001a65e) main_vradio_pane_t3_ParamLimits

0x34f9,	// (0x0001a65e) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x000269a1) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x000269a1) main_vradio_pane_t

0xc212,	// (0x00023377) vradio_rocker_control_pane_ParamLimits

0xc212,	// (0x00023377) vradio_rocker_control_pane

0xc21e,	// (0x00023383) vradio_station_info_pane_ParamLimits

0xc21e,	// (0x00023383) vradio_station_info_pane

0x350d,	// (0x0001a672) vradio_frequency_info_pane_ParamLimits

0x350d,	// (0x0001a672) vradio_frequency_info_pane

0x2ec3,	// (0x0001a028) vradio_station_info_pane_g1

0x351c,	// (0x0001a681) vradio_station_info_pane_t1_ParamLimits

0x351c,	// (0x0001a681) vradio_station_info_pane_t1

0x353e,	// (0x0001a6a3) vradio_station_info_pane_t2_ParamLimits

0x353e,	// (0x0001a6a3) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x000269a8) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x000269a8) vradio_station_info_pane_t

0x3550,	// (0x0001a6b5) vradio_tuning_pane

0x3558,	// (0x0001a6bd) vradio_rocker_control_pane_g1

0x3560,	// (0x0001a6c5) vradio_rocker_control_pane_g2

0x3568,	// (0x0001a6cd) vradio_rocker_control_pane_g3

0x3570,	// (0x0001a6d5) vradio_rocker_control_pane_g4

0x3578,	// (0x0001a6dd) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x000269ad) vradio_rocker_control_pane_g

0xc22d,	// (0x00023392) vradio_frequency_info_pane_g1

0x3580,	// (0x0001a6e5) vradio_frequency_info_pane_t1_ParamLimits

0x3580,	// (0x0001a6e5) vradio_frequency_info_pane_t1

0xc237,	// (0x0002339c) vradio_tuning_pane_g1

0xc240,	// (0x000233a5) vradio_tuning_pane_t1

0x6d4b,	// (0x0001deb0) area_side_right_pane_ParamLimits

0x6d4b,	// (0x0001deb0) area_side_right_pane

0x2984,	// (0x00019ae9) status_small_pane_g1

0x298c,	// (0x00019af1) status_small_pane_g2

0x2995,	// (0x00019afa) status_small_pane_g3

0x299e,	// (0x00019b03) status_small_pane_g4

0x0003,

0xf608,	// (0x0002676d) status_small_pane_g

0x29a7,	// (0x00019b0c) status_small_pane_t1

0x6f79,	// (0x0001e0de) main_video3_pane

0x3594,	// (0x0001a6f9) cams_zoom_vslider_pane

0x359c,	// (0x0001a701) image3_wide_pane_ParamLimits

0x359c,	// (0x0001a701) image3_wide_pane

0x35b6,	// (0x0001a71b) image3_wide_small_pane

0x35c2,	// (0x0001a727) main_video3_pane_g1_ParamLimits

0x35c2,	// (0x0001a727) main_video3_pane_g1

0x35de,	// (0x0001a743) main_video3_pane_g2_ParamLimits

0x35de,	// (0x0001a743) main_video3_pane_g2

0x0001,

0xf853,	// (0x000269b8) main_video3_pane_g_ParamLimits

0xf853,	// (0x000269b8) main_video3_pane_g

0x35fa,	// (0x0001a75f) main_video3_pane_t1_ParamLimits

0x35fa,	// (0x0001a75f) main_video3_pane_t1

0x3625,	// (0x0001a78a) main_video3_pane_t2_ParamLimits

0x3625,	// (0x0001a78a) main_video3_pane_t2

0x3650,	// (0x0001a7b5) main_video3_pane_t3_ParamLimits

0x3650,	// (0x0001a7b5) main_video3_pane_t3

0x0002,

0xf858,	// (0x000269bd) main_video3_pane_t_ParamLimits

0xf858,	// (0x000269bd) main_video3_pane_t

0x367d,	// (0x0001a7e2) cams_zoom_vslider_pane_g1

0x3686,	// (0x0001a7eb) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x000269c4) cams_zoom_vslider_pane_g

0x368e,	// (0x0001a7f3) small_slider_vertical_pane

0x2ec3,	// (0x0001a028) small_slider_vertical_pane_g1

0x2ec3,	// (0x0001a028) small_slider_vertical_pane_g2

0x3696,	// (0x0001a7fb) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x000269c9) small_slider_vertical_pane_g

0x6f79,	// (0x0001e0de) main_hwr_training_pane

0x369f,	// (0x0001a804) hwr_training_instruct_pane_ParamLimits

0x369f,	// (0x0001a804) hwr_training_instruct_pane

0xc24f,	// (0x000233b4) hwr_training_navi_pane_ParamLimits

0xc24f,	// (0x000233b4) hwr_training_navi_pane

0xc269,	// (0x000233ce) hwr_training_write_pane_ParamLimits

0xc269,	// (0x000233ce) hwr_training_write_pane

0xf0ce,	// (0x00026233) bg_frame_shadow_pane

0x36d6,	// (0x0001a83b) hwr_training_write_pane_g1

0x36de,	// (0x0001a843) hwr_training_write_pane_g2

0x36e6,	// (0x0001a84b) hwr_training_write_pane_g3

0x36ee,	// (0x0001a853) hwr_training_write_pane_g4

0x36f6,	// (0x0001a85b) hwr_training_write_pane_g5

0x36fe,	// (0x0001a863) hwr_training_write_pane_g6

0x3706,	// (0x0001a86b) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x000269d0) hwr_training_write_pane_g

0x78fa,	// (0x0001ea5f) hwr_training_navi_pane_g1_ParamLimits

0x78fa,	// (0x0001ea5f) hwr_training_navi_pane_g1

0x790c,	// (0x0001ea71) hwr_training_navi_pane_g2_ParamLimits

0x790c,	// (0x0001ea71) hwr_training_navi_pane_g2

0x791e,	// (0x0001ea83) hwr_training_navi_pane_g3_ParamLimits

0x791e,	// (0x0001ea83) hwr_training_navi_pane_g3

0x792e,	// (0x0001ea93) hwr_training_navi_pane_g4_ParamLimits

0x792e,	// (0x0001ea93) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x000269df) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x000269df) hwr_training_navi_pane_g

0x7948,	// (0x0001eaad) hwr_training_navi_pane_t1

0xc2a1,	// (0x00023406) list_single_hwr_training_instruct_pane_ParamLimits

0xc2a1,	// (0x00023406) list_single_hwr_training_instruct_pane

0x375d,	// (0x0001a8c2) list_single_hwr_training_instruct_pane_t1

0x2e03,	// (0x00019f68) bg_frame_shadow_pane_g1

0x376c,	// (0x0001a8d1) bg_frame_shadow_pane_g2

0x3774,	// (0x0001a8d9) bg_frame_shadow_pane_g3

0x377c,	// (0x0001a8e1) bg_frame_shadow_pane_g4

0x3784,	// (0x0001a8e9) bg_frame_shadow_pane_g5

0x378c,	// (0x0001a8f1) bg_frame_shadow_pane_g6

0x3794,	// (0x0001a8f9) bg_frame_shadow_pane_g7

0x08a4,	// (0x00017a09) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x000269ea) bg_frame_shadow_pane_g

0x6f79,	// (0x0001e0de) main_video_tele_dialer_pane

0x7956,	// (0x0001eabb) aid_size_cell_video_keypad_ParamLimits

0x7956,	// (0x0001eabb) aid_size_cell_video_keypad

0x7966,	// (0x0001eacb) grid_video_dialer_keypad_pane_ParamLimits

0x7966,	// (0x0001eacb) grid_video_dialer_keypad_pane

0x7974,	// (0x0001ead9) video_down_pane_cp_ParamLimits

0x7974,	// (0x0001ead9) video_down_pane_cp

0x7980,	// (0x0001eae5) cell_video_dialer_keypad_pane_ParamLimits

0x7980,	// (0x0001eae5) cell_video_dialer_keypad_pane

0x37b8,	// (0x0001a91d) bg_button_pane_cp08_ParamLimits

0x37b8,	// (0x0001a91d) bg_button_pane_cp08

0xc2ea,	// (0x0002344f) cell_video_dialer_keypad_pane_g1_ParamLimits

0xc2ea,	// (0x0002344f) cell_video_dialer_keypad_pane_g1

0xbc06,	// (0x00022d6b) mup3_rocker2_pane_ParamLimits

0xbc06,	// (0x00022d6b) mup3_rocker2_pane

0x2ec3,	// (0x0001a028) mup3_rocker2_pane_g1

0x742d,	// (0x0001e592) main_dialer2_pane

0x6f79,	// (0x0001e0de) main_mp4_pane

0x799d,	// (0x0001eb02) main_mp4_pane_g1_ParamLimits

0x799d,	// (0x0001eb02) main_mp4_pane_g1

0x79ab,	// (0x0001eb10) main_mp4_pane_g2_ParamLimits

0x79ab,	// (0x0001eb10) main_mp4_pane_g2

0x79b9,	// (0x0001eb1e) main_mp4_pane_g3_ParamLimits

0x79b9,	// (0x0001eb1e) main_mp4_pane_g3

0x79fe,	// (0x0001eb63) main_mp4_pane_g4_ParamLimits

0x79fe,	// (0x0001eb63) main_mp4_pane_g4

0x7a26,	// (0x0001eb8b) main_mp4_pane_g5_ParamLimits

0x7a26,	// (0x0001eb8b) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x00026a0a) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x00026a0a) main_mp4_pane_g

0x7a76,	// (0x0001ebdb) main_mp4_pane_t1_ParamLimits

0x7a76,	// (0x0001ebdb) main_mp4_pane_t1

0x7ad2,	// (0x0001ec37) main_mp4_pane_t2_ParamLimits

0x7ad2,	// (0x0001ec37) main_mp4_pane_t2

0x3900,	// (0x0001aa65) main_mp4_pane_t3_ParamLimits

0x3900,	// (0x0001aa65) main_mp4_pane_t3

0x7b24,	// (0x0001ec89) main_mp4_pane_t4_ParamLimits

0x7b24,	// (0x0001ec89) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x00026a17) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x00026a17) main_mp4_pane_t

0x7b68,	// (0x0001eccd) mp4_progress_pane_ParamLimits

0x7b68,	// (0x0001eccd) mp4_progress_pane

0x7bb2,	// (0x0001ed17) mp4_rocker_pane_ParamLimits

0x7bb2,	// (0x0001ed17) mp4_rocker_pane

0x39d6,	// (0x0001ab3b) mp4_progress_pane_t1

0x39ef,	// (0x0001ab54) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x00026a20) mp4_progress_pane_t

0x3a08,	// (0x0001ab6d) mup_progress_pane_cp04

0x451a,	// (0x0001b67f) mp4_rocker_pane_g1

0x7bd2,	// (0x0001ed37) aid_cell_size_keypad2_ParamLimits

0x7bd2,	// (0x0001ed37) aid_cell_size_keypad2

0x7be2,	// (0x0001ed47) dialer2_ne_pane_ParamLimits

0x7be2,	// (0x0001ed47) dialer2_ne_pane

0x7bf0,	// (0x0001ed55) grid_dialer2_keypad_pane_ParamLimits

0x7bf0,	// (0x0001ed55) grid_dialer2_keypad_pane

0x4583,	// (0x0001b6e8) bg_popup_call_pane_cp07_ParamLimits

0x4583,	// (0x0001b6e8) bg_popup_call_pane_cp07

0xc324,	// (0x00023489) dialer2_ne_pane_t1_ParamLimits

0xc324,	// (0x00023489) dialer2_ne_pane_t1

0x7c00,	// (0x0001ed65) cell_dialer2_keypad_pane_ParamLimits

0x7c00,	// (0x0001ed65) cell_dialer2_keypad_pane

0x3a26,	// (0x0001ab8b) bg_button_pane_pane_cp04_ParamLimits

0x3a26,	// (0x0001ab8b) bg_button_pane_pane_cp04

0xc349,	// (0x000234ae) cell_dialer2_keypad_pane_g1_ParamLimits

0xc349,	// (0x000234ae) cell_dialer2_keypad_pane_g1

0x8f82,	// (0x000200e7) aid_placing_vt_set_content_ParamLimits

0x8f82,	// (0x000200e7) aid_placing_vt_set_content

0x8fae,	// (0x00020113) aid_placing_vt_set_title_ParamLimits

0x8fae,	// (0x00020113) aid_placing_vt_set_title

0x6f79,	// (0x0001e0de) main_image3_pane

0x7c47,	// (0x0001edac) area_side_right_pane_cp01_ParamLimits

0x7c47,	// (0x0001edac) area_side_right_pane_cp01

0x7c74,	// (0x0001edd9) main_image3_pane_g1_ParamLimits

0x7c74,	// (0x0001edd9) main_image3_pane_g1

0x7c82,	// (0x0001ede7) main_image3_pane_g2_ParamLimits

0x7c82,	// (0x0001ede7) main_image3_pane_g2

0x7c9b,	// (0x0001ee00) main_image3_pane_g3_ParamLimits

0x7c9b,	// (0x0001ee00) main_image3_pane_g3

0x7cb4,	// (0x0001ee19) main_image3_pane_g4_ParamLimits

0x7cb4,	// (0x0001ee19) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x00026a2f) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x00026a2f) main_image3_pane_g

0x7ccd,	// (0x0001ee32) main_image3_pane_t1_ParamLimits

0x7ccd,	// (0x0001ee32) main_image3_pane_t1

0x7cf2,	// (0x0001ee57) main_image3_pane_t2_ParamLimits

0x7cf2,	// (0x0001ee57) main_image3_pane_t2

0x7d11,	// (0x0001ee76) main_image3_pane_t3_ParamLimits

0x7d11,	// (0x0001ee76) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x00026a38) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x00026a38) main_image3_pane_t

0xc0f6,	// (0x0002325b) grid_sctrl_middle_pane_cp01_ParamLimits

0xc0f6,	// (0x0002325b) grid_sctrl_middle_pane_cp01

0xc3b1,	// (0x00023516) cell_sctrl_middle_pane_cp01_ParamLimits

0xc3b1,	// (0x00023516) cell_sctrl_middle_pane_cp01

0xc3c2,	// (0x00023527) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc3c2,	// (0x00023527) cell_sctrl_middle_pane_cp01_g1

0x6f79,	// (0x0001e0de) main_call4_pane

0xc3cf,	// (0x00023534) aid_size_button_call4_ParamLimits

0xc3cf,	// (0x00023534) aid_size_button_call4

0xc3ff,	// (0x00023564) call4_windows_pane_ParamLimits

0xc3ff,	// (0x00023564) call4_windows_pane

0xc419,	// (0x0002357e) grid_call4_button_pane_ParamLimits

0xc419,	// (0x0002357e) grid_call4_button_pane

0x3a64,	// (0x0001abc9) call4_windows_conf_pane

0x3a7b,	// (0x0001abe0) popup_call4_audio_first_window_ParamLimits

0x3a7b,	// (0x0001abe0) popup_call4_audio_first_window

0x3ac7,	// (0x0001ac2c) popup_call4_audio_second_window_ParamLimits

0x3ac7,	// (0x0001ac2c) popup_call4_audio_second_window

0x3adb,	// (0x0001ac40) popup_call4_audio_wait_window_ParamLimits

0x3adb,	// (0x0001ac40) popup_call4_audio_wait_window

0xc43d,	// (0x000235a2) cell_call4_button_pane_ParamLimits

0xc43d,	// (0x000235a2) cell_call4_button_pane

0xc462,	// (0x000235c7) bg_button_pane_cp09_ParamLimits

0xc462,	// (0x000235c7) bg_button_pane_cp09

0xc46e,	// (0x000235d3) cell_call4_button_pane_g1_ParamLimits

0xc46e,	// (0x000235d3) cell_call4_button_pane_g1

0xc47b,	// (0x000235e0) cell_call4_button_pane_t1_ParamLimits

0xc47b,	// (0x000235e0) cell_call4_button_pane_t1

0x3b23,	// (0x0001ac88) popup_call4_audio_conf_window_ParamLimits

0x3b23,	// (0x0001ac88) popup_call4_audio_conf_window

0xbc39,	// (0x00022d9e) mup3_progress_pane_t1_ParamLimits

0xbc58,	// (0x00022dbd) mup3_progress_pane_t2_ParamLimits

0x31b6,	// (0x0001a31b) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x00026911) mup3_progress_pane_t_ParamLimits

0x31d3,	// (0x0001a338) mup_progress_pane_cp03_ParamLimits

0xc0e0,	// (0x00023245) mup3_control_keys_pane_g4_copy1

0x7b96,	// (0x0001ecfb) mp4_rocker2_pane_ParamLimits

0x7b96,	// (0x0001ecfb) mp4_rocker2_pane

0x3b3f,	// (0x0001aca4) mp4_rocker2_pane_g1

0x3b37,	// (0x0001ac9c) mp4_rocker2_pane_g2

0x7d72,	// (0x0001eed7) mp4_rocker2_pane_g3

0x7d7a,	// (0x0001eedf) mp4_rocker2_pane_g4

0x7d82,	// (0x0001eee7) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x00026a41) mp4_rocker2_pane_g

0x6f79,	// (0x0001e0de) main_camera4_pane

0x6f79,	// (0x0001e0de) main_video4_pane

0xc2c6,	// (0x0002342b) main_video_tele_dialer_pane_t1_ParamLimits

0xc2c6,	// (0x0002342b) main_video_tele_dialer_pane_t1

0xc2d8,	// (0x0002343d) main_video_tele_dialer_pane_t2_ParamLimits

0xc2d8,	// (0x0002343d) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x000269fb) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x000269fb) main_video_tele_dialer_pane_t

0x7da2,	// (0x0001ef07) cam4_autofocus_pane_ParamLimits

0x7da2,	// (0x0001ef07) cam4_autofocus_pane

0x7dbc,	// (0x0001ef21) cam4_image_uncrop_pane_ParamLimits

0x7dbc,	// (0x0001ef21) cam4_image_uncrop_pane

0x7dd3,	// (0x0001ef38) cam4_indicators_pane_ParamLimits

0x7dd3,	// (0x0001ef38) cam4_indicators_pane

0x7def,	// (0x0001ef54) main_camera4_pane_g1_ParamLimits

0x7def,	// (0x0001ef54) main_camera4_pane_g1

0x7dfb,	// (0x0001ef60) main_camera4_pane_g2_ParamLimits

0x7dfb,	// (0x0001ef60) main_camera4_pane_g2

0x7dfb,	// (0x0001ef60) main_camera4_pane_g3_ParamLimits

0x7dfb,	// (0x0001ef60) main_camera4_pane_g3

0x7e07,	// (0x0001ef6c) main_camera4_pane_g4_ParamLimits

0x7e07,	// (0x0001ef6c) main_camera4_pane_g4

0x7e13,	// (0x0001ef78) main_camera4_pane_g5_ParamLimits

0x7e13,	// (0x0001ef78) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x00026a4c) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x00026a4c) main_camera4_pane_g

0x7e2d,	// (0x0001ef92) main_camera4_pane_t1_ParamLimits

0x7e2d,	// (0x0001ef92) main_camera4_pane_t1

0x7e51,	// (0x0001efb6) bg_tb_trans_pane_cp06

0x7e67,	// (0x0001efcc) cam4_indicators_pane_g1

0x7e78,	// (0x0001efdd) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x00026a67) cam4_indicators_pane_g

0x7e96,	// (0x0001effb) cam4_indicators_pane_t1

0x7ec0,	// (0x0001f025) main_video4_pane_g1_ParamLimits

0x7ec0,	// (0x0001f025) main_video4_pane_g1

0x7ecc,	// (0x0001f031) main_video4_pane_g2_ParamLimits

0x7ecc,	// (0x0001f031) main_video4_pane_g2

0x7ed8,	// (0x0001f03d) main_video4_pane_g3_ParamLimits

0x7ed8,	// (0x0001f03d) main_video4_pane_g3

0x7ee4,	// (0x0001f049) main_video4_pane_g4_ParamLimits

0x7ee4,	// (0x0001f049) main_video4_pane_g4

0x0004,

0xf909,	// (0x00026a6e) main_video4_pane_g_ParamLimits

0xf909,	// (0x00026a6e) main_video4_pane_g

0x7f04,	// (0x0001f069) vid4_indicators_pane_ParamLimits

0x7f04,	// (0x0001f069) vid4_indicators_pane

0x7f23,	// (0x0001f088) video4_image_uncrop_cif_pane_ParamLimits

0x7f23,	// (0x0001f088) video4_image_uncrop_cif_pane

0x7f32,	// (0x0001f097) video4_image_uncrop_nhd_pane_ParamLimits

0x7f32,	// (0x0001f097) video4_image_uncrop_nhd_pane

0x7dbc,	// (0x0001ef21) video4_image_uncrop_vga_pane_ParamLimits

0x7dbc,	// (0x0001ef21) video4_image_uncrop_vga_pane

0x741f,	// (0x0001e584) bg_tb_trans_pane_cp07

0x7f49,	// (0x0001f0ae) vid4_indicators_pane_g1

0x7f5d,	// (0x0001f0c2) vid4_indicators_pane_g2

0x7f71,	// (0x0001f0d6) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x00026a79) vid4_indicators_pane_g

0x7fa0,	// (0x0001f105) vid4_indicators_pane_t1

0xc4b1,	// (0x00023616) cam4_autofocus_pane_g1

0xc4b9,	// (0x0002361e) cam4_autofocus_pane_g2

0xc4c1,	// (0x00023626) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x00026a84) cam4_autofocus_pane_g

0xc4c9,	// (0x0002362e) cam4_autofocus_pane_g3_copy1

0x379c,	// (0x0001a901) video_down_pane_cp_t1

0x37aa,	// (0x0001a90f) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x00026a00) video_down_pane_cp_t

0x6f6b,	// (0x0001e0d0) popup_vitu2_window_ParamLimits

0x6f6b,	// (0x0001e0d0) popup_vitu2_window

0x7fb7,	// (0x0001f11c) aid_size_cell2_itu2_ParamLimits

0x7fb7,	// (0x0001f11c) aid_size_cell2_itu2

0x7fd9,	// (0x0001f13e) aid_size_cell_itu2_ParamLimits

0x7fd9,	// (0x0001f13e) aid_size_cell_itu2

0x801d,	// (0x0001f182) bg_popup_window_pane_cp09_ParamLimits

0x801d,	// (0x0001f182) bg_popup_window_pane_cp09

0x802b,	// (0x0001f190) field_vitu2_entry_pane_ParamLimits

0x802b,	// (0x0001f190) field_vitu2_entry_pane

0x804b,	// (0x0001f1b0) grid_vitu2_function_pane_ParamLimits

0x804b,	// (0x0001f1b0) grid_vitu2_function_pane

0x808f,	// (0x0001f1f4) grid_vitu2_itu_pane_ParamLimits

0x808f,	// (0x0001f1f4) grid_vitu2_itu_pane

0x8107,	// (0x0001f26c) cell_vitu2_itu_pane_ParamLimits

0x8107,	// (0x0001f26c) cell_vitu2_itu_pane

0x811c,	// (0x0001f281) cell_vitu2_function_pane_ParamLimits

0x811c,	// (0x0001f281) cell_vitu2_function_pane

0x3c4c,	// (0x0001adb1) bg_popup_call_pane_cp08_ParamLimits

0x3c4c,	// (0x0001adb1) bg_popup_call_pane_cp08

0x3c65,	// (0x0001adca) field_vitu2_entry_pane_g1

0x3c71,	// (0x0001add6) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x00026a8b) field_vitu2_entry_pane_g

0x3c8b,	// (0x0001adf0) field_vitu2_entry_pane_t1_ParamLimits

0x3c8b,	// (0x0001adf0) field_vitu2_entry_pane_t1

0x3cba,	// (0x0001ae1f) field_vitu2_entry_pane_t2_ParamLimits

0x3cba,	// (0x0001ae1f) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x00026a92) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x00026a92) field_vitu2_entry_pane_t

0x815b,	// (0x0001f2c0) bg_button_pane_cp010_ParamLimits

0x815b,	// (0x0001f2c0) bg_button_pane_cp010

0x8169,	// (0x0001f2ce) cell_vitu2_itu_pane_g1

0x8187,	// (0x0001f2ec) cell_vitu2_itu_pane_t1_ParamLimits

0x8187,	// (0x0001f2ec) cell_vitu2_itu_pane_t1

0x81d9,	// (0x0001f33e) cell_vitu2_itu_pane_t2_ParamLimits

0x81d9,	// (0x0001f33e) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x00026a9c) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x00026a9c) cell_vitu2_itu_pane_t

0x741f,	// (0x0001e584) bg_button_pane_cp011

0x8294,	// (0x0001f3f9) cell_vitu2_function_pane_g1

0x6f79,	// (0x0001e0de) main_myfav_hc_pane

0x7d53,	// (0x0001eeb8) popup_image3_note_pane_ParamLimits

0x7d53,	// (0x0001eeb8) popup_image3_note_pane

0x7d61,	// (0x0001eec6) popup_image3_tool_bar_pane_ParamLimits

0x7d61,	// (0x0001eec6) popup_image3_tool_bar_pane

0x8247,	// (0x0001f3ac) cell_vitu2_itu_pane_t3_ParamLimits

0x8247,	// (0x0001f3ac) cell_vitu2_itu_pane_t3

0xf0ce,	// (0x00026233) bg_popup_trans_pane

0x3cdf,	// (0x0001ae44) grid_image3_tool_bar_pane

0x3ce9,	// (0x0001ae4e) bg_popup_trans_pane_g1

0x0cd7,	// (0x00017e3c) bg_popup_trans_pane_g2

0x3cf1,	// (0x0001ae56) bg_popup_trans_pane_g3

0x3cf9,	// (0x0001ae5e) bg_popup_trans_pane_g4

0x3d01,	// (0x0001ae66) bg_popup_trans_pane_g5

0x3d09,	// (0x0001ae6e) bg_popup_trans_pane_g6

0x3d11,	// (0x0001ae76) bg_popup_trans_pane_g7

0x3d19,	// (0x0001ae7e) bg_popup_trans_pane_g8

0x0cb7,	// (0x00017e1c) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x00026aa3) bg_popup_trans_pane_g

0x3d21,	// (0x0001ae86) cell_image3_tool_bar_pane_ParamLimits

0x3d21,	// (0x0001ae86) cell_image3_tool_bar_pane

0x2ec3,	// (0x0001a028) cell_image3_tool_bar_pane_g1

0xf0ce,	// (0x00026233) bg_popup_trans_pane_cp1

0x3d35,	// (0x0001ae9a) popup_image3_note_pane_t1

0x3d43,	// (0x0001aea8) popup_image3_note_pane_t2

0x3d51,	// (0x0001aeb6) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x00026ab6) popup_image3_note_pane_t

0x3d5f,	// (0x0001aec4) popup_image3_note_pane_t3_copy1

0xc4d1,	// (0x00023636) bg_myfav_hc_instruction_pane_ParamLimits

0xc4d1,	// (0x00023636) bg_myfav_hc_instruction_pane

0xc4e9,	// (0x0002364e) cell_myfav_contact_pane_ParamLimits

0xc4e9,	// (0x0002364e) cell_myfav_contact_pane

0xc503,	// (0x00023668) cell_myfav_contact_pane_cp1_ParamLimits

0xc503,	// (0x00023668) cell_myfav_contact_pane_cp1

0xc51b,	// (0x00023680) cell_myfav_contact_pane_cp2_ParamLimits

0xc51b,	// (0x00023680) cell_myfav_contact_pane_cp2

0xc533,	// (0x00023698) cell_myfav_contact_pane_cp3_ParamLimits

0xc533,	// (0x00023698) cell_myfav_contact_pane_cp3

0xc54a,	// (0x000236af) cell_myfav_contact_pane_cp4_ParamLimits

0xc54a,	// (0x000236af) cell_myfav_contact_pane_cp4

0xc560,	// (0x000236c5) cell_myfav_contact_pane_cp5_ParamLimits

0xc560,	// (0x000236c5) cell_myfav_contact_pane_cp5

0xc574,	// (0x000236d9) cell_myfav_contact_pane_cp6_ParamLimits

0xc574,	// (0x000236d9) cell_myfav_contact_pane_cp6

0xc588,	// (0x000236ed) cell_myfav_contact_pane_cp7_ParamLimits

0xc588,	// (0x000236ed) cell_myfav_contact_pane_cp7

0x3d6d,	// (0x0001aed2) listscroll_gen_pane_cp05

0xc5a0,	// (0x00023705) main_myfav_hc_pane_g1_ParamLimits

0xc5a0,	// (0x00023705) main_myfav_hc_pane_g1

0xc5b6,	// (0x0002371b) main_myfav_hc_pane_g2_ParamLimits

0xc5b6,	// (0x0002371b) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x00026abd) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x00026abd) main_myfav_hc_pane_g

0xc5e4,	// (0x00023749) main_myfav_hc_pane_t1_ParamLimits

0xc5e4,	// (0x00023749) main_myfav_hc_pane_t1

0x3d76,	// (0x0001aedb) main_myfav_hc_pane_t2_ParamLimits

0x3d76,	// (0x0001aedb) main_myfav_hc_pane_t2

0x3d88,	// (0x0001aeed) main_myfav_hc_pane_t3_ParamLimits

0x3d88,	// (0x0001aeed) main_myfav_hc_pane_t3

0xc5fb,	// (0x00023760) main_myfav_hc_pane_t4_ParamLimits

0xc5fb,	// (0x00023760) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x00026ac4) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x00026ac4) main_myfav_hc_pane_t

0x2ec3,	// (0x0001a028) bg_myfav_hc_instruction_pane_g1

0x3d9a,	// (0x0001aeff) cell_myfav_contact_pane_g1_ParamLimits

0x3d9a,	// (0x0001aeff) cell_myfav_contact_pane_g1

0x3d9a,	// (0x0001aeff) cell_myfav_contact_pane_g2_ParamLimits

0x3d9a,	// (0x0001aeff) cell_myfav_contact_pane_g2

0x3da6,	// (0x0001af0b) cell_myfav_contact_pane_g3_ParamLimits

0x3da6,	// (0x0001af0b) cell_myfav_contact_pane_g3

0x31a0,	// (0x0001a305) cell_myfav_contact_pane_g4_ParamLimits

0x31a0,	// (0x0001a305) cell_myfav_contact_pane_g4

0x3db3,	// (0x0001af18) cell_myfav_contact_pane_g5_ParamLimits

0x3db3,	// (0x0001af18) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x00026acf) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x00026acf) cell_myfav_contact_pane_g

0xc5cc,	// (0x00023731) main_myfav_hc_pane_g3_ParamLimits

0xc5cc,	// (0x00023731) main_myfav_hc_pane_g3

0x6e7e,	// (0x0001dfe3) popup_adpt_find_window

0xc625,	// (0x0002378a) afind_page_pane_ParamLimits

0xc625,	// (0x0002378a) afind_page_pane

0xc632,	// (0x00023797) aid_size_cell_afind_ParamLimits

0xc632,	// (0x00023797) aid_size_cell_afind

0xc64c,	// (0x000237b1) bg_popup_sub_pane_cp09_ParamLimits

0xc64c,	// (0x000237b1) bg_popup_sub_pane_cp09

0xc659,	// (0x000237be) find_pane_cp01_ParamLimits

0xc659,	// (0x000237be) find_pane_cp01

0x3dbf,	// (0x0001af24) grid_afind_control_pane_ParamLimits

0x3dbf,	// (0x0001af24) grid_afind_control_pane

0xc666,	// (0x000237cb) grid_afind_pane_ParamLimits

0xc666,	// (0x000237cb) grid_afind_pane

0xc682,	// (0x000237e7) cell_afind_pane_ParamLimits

0xc682,	// (0x000237e7) cell_afind_pane

0x2ec3,	// (0x0001a028) afind_page_pane_g1

0xc6ca,	// (0x0002382f) afind_page_pane_g2

0xc6d3,	// (0x00023838) afind_page_pane_g3

0x0002,

0xf975,	// (0x00026ada) afind_page_pane_g

0xc6dc,	// (0x00023841) afind_page_pane_t1

0x3dd3,	// (0x0001af38) cell_afind_grid_control_pane_ParamLimits

0x3dd3,	// (0x0001af38) cell_afind_grid_control_pane

0x3a26,	// (0x0001ab8b) bg_button_pane_cp69_ParamLimits

0x3a26,	// (0x0001ab8b) bg_button_pane_cp69

0xc6fc,	// (0x00023861) cell_afind_pane_g1_ParamLimits

0xc6fc,	// (0x00023861) cell_afind_pane_g1

0xc709,	// (0x0002386e) cell_afind_pane_t1_ParamLimits

0xc709,	// (0x0002386e) cell_afind_pane_t1

0x0a30,	// (0x00017b95) bg_button_pane_cp72

0x3de2,	// (0x0001af47) cell_afind_grid_control_pane_g1

0xaab9,	// (0x00021c1e) aid_image_placing_area_ParamLimits

0xaab9,	// (0x00021c1e) aid_image_placing_area

0x349f,	// (0x0001a604) field_vitu_entry_pane_g1_ParamLimits

0x349f,	// (0x0001a604) field_vitu_entry_pane_g1

0x34ab,	// (0x0001a610) field_vitu_entry_pane_g2_ParamLimits

0x34ab,	// (0x0001a610) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x0002698b) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x0002698b) field_vitu_entry_pane_g

0xc176,	// (0x000232db) cell_vitu_itu_pane_g1_ParamLimits

0xc1b8,	// (0x0002331d) cell_vitu_itu_pane_t3_ParamLimits

0xc1b8,	// (0x0002331d) cell_vitu_itu_pane_t3

0x39d6,	// (0x0001ab3b) mp4_progress_pane_t1_ParamLimits

0x39ef,	// (0x0001ab54) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x00026a20) mp4_progress_pane_t_ParamLimits

0x3a08,	// (0x0001ab6d) mup_progress_pane_cp04_ParamLimits

0xc60f,	// (0x00023774) main_myfav_hc_pane_t5_ParamLimits

0xc60f,	// (0x00023774) main_myfav_hc_pane_t5

0x6d43,	// (0x0001dea8) aid_zoom_text_primary

0x6e7e,	// (0x0001dfe3) popup_adpt_find_window_ParamLimits

0x741f,	// (0x0001e584) main_cam_set_pane

0x7de1,	// (0x0001ef46) cam4_zoom_pane_ParamLimits

0x7de1,	// (0x0001ef46) cam4_zoom_pane

0xc71b,	// (0x00023880) main_cam_set_pane_g1_ParamLimits

0xc71b,	// (0x00023880) main_cam_set_pane_g1

0xc729,	// (0x0002388e) main_cam_set_pane_g2_ParamLimits

0xc729,	// (0x0002388e) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x00026ae1) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x00026ae1) main_cam_set_pane_g

0xc735,	// (0x0002389a) main_cam_set_pane_t1_ParamLimits

0xc735,	// (0x0002389a) main_cam_set_pane_t1

0xc751,	// (0x000238b6) main_cset_listscroll_pane_ParamLimits

0xc751,	// (0x000238b6) main_cset_listscroll_pane

0xc77c,	// (0x000238e1) main_cset_slider_pane_ParamLimits

0xc77c,	// (0x000238e1) main_cset_slider_pane

0x3df3,	// (0x0001af58) main_cset_list_pane_ParamLimits

0x3df3,	// (0x0001af58) main_cset_list_pane

0x3e03,	// (0x0001af68) scroll_pane_cp028

0xc79b,	// (0x00023900) aid_area_touch_slider

0xc7b7,	// (0x0002391c) cset_slider_pane

0xc7e1,	// (0x00023946) main_cset_slider_pane_g1

0xc7f6,	// (0x0002395b) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x00026ae6) main_cset_slider_pane_g

0x3e3c,	// (0x0001afa1) main_cset_slider_pane_t1

0xc8b8,	// (0x00023a1d) main_cset_slider_pane_t2

0xc8d2,	// (0x00023a37) main_cset_slider_pane_t3

0xc8ec,	// (0x00023a51) main_cset_slider_pane_t4

0xc906,	// (0x00023a6b) main_cset_slider_pane_t5

0xc924,	// (0x00023a89) main_cset_slider_pane_t6

0xc93b,	// (0x00023aa0) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x00026b0b) main_cset_slider_pane_t

0xca47,	// (0x00023bac) cset_list_set_pane_ParamLimits

0xca47,	// (0x00023bac) cset_list_set_pane

0xca5d,	// (0x00023bc2) aid_position_infowindow_above

0xca65,	// (0x00023bca) aid_position_infowindow_below

0x3edc,	// (0x0001b041) cset_list_set_pane_g1_ParamLimits

0x3edc,	// (0x0001b041) cset_list_set_pane_g1

0x3ee8,	// (0x0001b04d) cset_list_set_pane_g3_ParamLimits

0x3ee8,	// (0x0001b04d) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x00026b2a) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x00026b2a) cset_list_set_pane_g

0x3ef7,	// (0x0001b05c) cset_list_set_pane_t1_ParamLimits

0x3ef7,	// (0x0001b05c) cset_list_set_pane_t1

0x0056,	// (0x000171bb) list_highlight_pane_cp021_ParamLimits

0x0056,	// (0x000171bb) list_highlight_pane_cp021

0x1656,	// (0x000187bb) cset_slider_pane_g1

0x1668,	// (0x000187cd) cset_slider_pane_g2

0x165f,	// (0x000187c4) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x00026b2f) cset_slider_pane_g

0x82a8,	// (0x0001f40d) aid_area_touch_cam4_zoom

0x82b0,	// (0x0001f415) cam4_zoom_cont_pane

0x82b8,	// (0x0001f41d) cam4_zoom_pane_g1

0x82c0,	// (0x0001f425) cam4_zoom_pane_g2

0x82c8,	// (0x0001f42d) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x00026b36) cam4_zoom_pane_g

0x82d0,	// (0x0001f435) cam4_zoom_cont_pane_g1

0x82d9,	// (0x0001f43e) cam4_zoom_cont_pane_g2

0x82e2,	// (0x0001f447) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x00026b3d) cam4_zoom_cont_pane_g

0xc3e9,	// (0x0002354e) call4_image_pane_ParamLimits

0xc3e9,	// (0x0002354e) call4_image_pane

0x3a64,	// (0x0001abc9) call4_windows_conf_pane_ParamLimits

0x3aa5,	// (0x0001ac0a) popup_call4_audio_in_window_ParamLimits

0x3aa5,	// (0x0001ac0a) popup_call4_audio_in_window

0xf0ce,	// (0x00026233) bg_popup_call2_act_pane_cp02

0x3b1b,	// (0x0001ac80) call4_list_conf_pane

0x2ec3,	// (0x0001a028) call4_image_pane_g1

0x2ec3,	// (0x0001a028) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x00026851) call4_image_pane_g

0x3f47,	// (0x0001b0ac) list_single_graphic_popup_conf4_pane_ParamLimits

0x3f47,	// (0x0001b0ac) list_single_graphic_popup_conf4_pane

0xf0ce,	// (0x00026233) list_highlight_pane_cp022

0x3f5a,	// (0x0001b0bf) list_single_graphic_popup_conf4_pane_g1

0x1315,	// (0x0001847a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x00026b44) list_single_graphic_popup_conf4_pane_g

0x3f62,	// (0x0001b0c7) list_single_graphic_popup_conf4_pane_t1

0x9112,	// (0x00020277) popup_vtel_slider_window_ParamLimits

0x9112,	// (0x00020277) popup_vtel_slider_window

0x3a14,	// (0x0001ab79) dialer2_ne_pane_t2_ParamLimits

0x3a14,	// (0x0001ab79) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x00026a25) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x00026a25) dialer2_ne_pane_t

0x0056,	// (0x000171bb) bg_popup_sub_pane_cp010_ParamLimits

0x0056,	// (0x000171bb) bg_popup_sub_pane_cp010

0xca6d,	// (0x00023bd2) popup_vtel_slider_window_g1_ParamLimits

0xca6d,	// (0x00023bd2) popup_vtel_slider_window_g1

0xca79,	// (0x00023bde) popup_vtel_slider_window_g2_ParamLimits

0xca79,	// (0x00023bde) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x00026b49) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x00026b49) popup_vtel_slider_window_g

0xcac1,	// (0x00023c26) vtel_slider_pane_ParamLimits

0xcac1,	// (0x00023c26) vtel_slider_pane

0xcad0,	// (0x00023c35) vtel_slider_pane_g1_ParamLimits

0xcad0,	// (0x00023c35) vtel_slider_pane_g1

0xcadd,	// (0x00023c42) vtel_slider_pane_g2_ParamLimits

0xcadd,	// (0x00023c42) vtel_slider_pane_g2

0xcaea,	// (0x00023c4f) vtel_slider_pane_g3_ParamLimits

0xcaea,	// (0x00023c4f) vtel_slider_pane_g3

0xcad0,	// (0x00023c35) vtel_slider_pane_g4_ParamLimits

0xcad0,	// (0x00023c35) vtel_slider_pane_g4

0xcaf7,	// (0x00023c5c) vtel_slider_pane_g5_ParamLimits

0xcaf7,	// (0x00023c5c) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x00026b52) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x00026b52) vtel_slider_pane_g

0x6f79,	// (0x0001e0de) main_gallery2_pane

0x7fff,	// (0x0001f164) aid_size_row_itut2_dropdow_list_ParamLimits

0x7fff,	// (0x0001f164) aid_size_row_itut2_dropdow_list

0x806d,	// (0x0001f1d2) grid_vitu2_function_top_pane_ParamLimits

0x806d,	// (0x0001f1d2) grid_vitu2_function_top_pane

0x80c3,	// (0x0001f228) popup_vitu2_dropdown_list_window_ParamLimits

0x80c3,	// (0x0001f228) popup_vitu2_dropdown_list_window

0x80e3,	// (0x0001f248) popup_vitu2_match_list_window

0x82eb,	// (0x0001f450) cell_vitu2_function_top_pane_ParamLimits

0x82eb,	// (0x0001f450) cell_vitu2_function_top_pane

0x830b,	// (0x0001f470) cell_vitu2_function_top_pane_cp01_ParamLimits

0x830b,	// (0x0001f470) cell_vitu2_function_top_pane_cp01

0x8329,	// (0x0001f48e) cell_vitu2_function_top_wide_pane_ParamLimits

0x8329,	// (0x0001f48e) cell_vitu2_function_top_wide_pane

0x741f,	// (0x0001e584) bg_button_pane_cp012

0x8347,	// (0x0001f4ac) cell_vitu2_function_top_pane_g1

0x8356,	// (0x0001f4bb) bg_button_pane_cp013_ParamLimits

0x8356,	// (0x0001f4bb) bg_button_pane_cp013

0xcb04,	// (0x00023c69) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcb04,	// (0x00023c69) cell_vitu2_function_top_wide_pane_g1

0x6f6b,	// (0x0001e0d0) bg_popup_sub_pane_cp20

0x8372,	// (0x0001f4d7) list_vitu2_match_list_pane

0x3ce9,	// (0x0001ae4e) bg_popup_sub_pane_cp20_g1

0x3cf1,	// (0x0001ae56) bg_popup_sub_pane_cp20_g2

0x0cd7,	// (0x00017e3c) bg_popup_sub_pane_cp20_g3

0x3cf9,	// (0x0001ae5e) bg_popup_sub_pane_cp20_g4

0x0cb7,	// (0x00017e1c) bg_popup_sub_pane_cp20_g5

0x3fa2,	// (0x0001b107) bg_popup_sub_pane_cp20_g6

0x3d09,	// (0x0001ae6e) bg_popup_sub_pane_cp20_g7

0x3d11,	// (0x0001ae76) bg_popup_sub_pane_cp20_g8

0x3d19,	// (0x0001ae7e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x00026b5d) bg_popup_sub_pane_cp20_g

0x838a,	// (0x0001f4ef) list_vitu2_match_list_item_pane_ParamLimits

0x838a,	// (0x0001f4ef) list_vitu2_match_list_item_pane

0x839c,	// (0x0001f501) list_vitu2_match_list_item_pane_t1

0x6f79,	// (0x0001e0de) bg_popup_sub_pane_cp21

0x83aa,	// (0x0001f50f) grid_vitu2_dropdown_list_pane

0x83b2,	// (0x0001f517) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x83b2,	// (0x0001f517) cell_vitu2_dropdown_list_char_pane

0x83d3,	// (0x0001f538) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x83d3,	// (0x0001f538) cell_vitu2_dropdown_list_ctrl_pane

0x3ff4,	// (0x0001b159) cell_vitu2_dropdown_list_char_pane_g1

0x3feb,	// (0x0001b150) cell_vitu2_dropdown_list_char_pane_g2

0x3fe2,	// (0x0001b147) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x00026b7a) cell_vitu2_dropdown_list_char_pane_g

0x83ff,	// (0x0001f564) cell_vitu2_dropdown_list_char_pane_t1

0xcb4b,	// (0x00023cb0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xcb4b,	// (0x00023cb0) cell_vitu2_dropdown_list_ctrl_pane_g1

0xcb5b,	// (0x00023cc0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xcb5b,	// (0x00023cc0) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcb6c,	// (0x00023cd1) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcb6c,	// (0x00023cd1) cell_vitu2_dropdown_list_ctrl_pane_g3

0x840d,	// (0x0001f572) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x840d,	// (0x0001f572) cell_vitu2_dropdown_list_ctrl_pane_g4

0x7e51,	// (0x0001efb6) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x7e51,	// (0x0001efb6) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x00026b81) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x00026b81) cell_vitu2_dropdown_list_ctrl_pane_g

0xcb7c,	// (0x00023ce1) aid_size_cell_gallery2_ParamLimits

0xcb7c,	// (0x00023ce1) aid_size_cell_gallery2

0xcb8a,	// (0x00023cef) grid_gallery2_pane_ParamLimits

0xcb8a,	// (0x00023cef) grid_gallery2_pane

0xcb99,	// (0x00023cfe) scroll_pane_cp029_ParamLimits

0xcb99,	// (0x00023cfe) scroll_pane_cp029

0xcba5,	// (0x00023d0a) cell_gallery2_pane_ParamLimits

0xcba5,	// (0x00023d0a) cell_gallery2_pane

0x3ffd,	// (0x0001b162) cell_gallery2_pane_g2

0x4fdc,	// (0x0001c141) cell_gallery2_pane_g3

0x4007,	// (0x0001b16c) cell_gallery2_pane_g4

0x400f,	// (0x0001b174) cell_gallery2_pane_g5

0x1500,	// (0x00018665) grid_highlight_pane_cp10

0x80e3,	// (0x0001f248) popup_vitu2_match_list_window_ParamLimits

0x80f7,	// (0x0001f25c) popup_vitu2_query_window_ParamLimits

0x80f7,	// (0x0001f25c) popup_vitu2_query_window

0x6f79,	// (0x0001e0de) bg_vitu2_candi_button_pane

0x3ff4,	// (0x0001b159) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3feb,	// (0x0001b150) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x3fe2,	// (0x0001b147) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xcbd3,	// (0x00023d38) bg_button_pane_cp015

0xcbe5,	// (0x00023d4a) bg_button_pane_cp016

0xcbf8,	// (0x00023d5d) bg_button_pane_cp017

0x29bd,	// (0x00019b22) bg_popup_sub_pane_cp22

0x4017,	// (0x0001b17c) popup_vitu2_query_window_g1

0xcc3d,	// (0x00023da2) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x00026b8c) popup_vitu2_query_window_g

0xcc5a,	// (0x00023dbf) popup_vitu2_query_window_t1_ParamLimits

0xcc5a,	// (0x00023dbf) popup_vitu2_query_window_t1

0xcc8d,	// (0x00023df2) popup_vitu2_query_window_t2_ParamLimits

0xcc8d,	// (0x00023df2) popup_vitu2_query_window_t2

0xcc9f,	// (0x00023e04) popup_vitu2_query_window_t3_ParamLimits

0xcc9f,	// (0x00023e04) popup_vitu2_query_window_t3

0xccc7,	// (0x00023e2c) popup_vitu2_query_window_t4_ParamLimits

0xccc7,	// (0x00023e2c) popup_vitu2_query_window_t4

0xcce8,	// (0x00023e4d) popup_vitu2_query_window_t5_ParamLimits

0xcce8,	// (0x00023e4d) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x00026b93) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x00026b93) popup_vitu2_query_window_t

0x3deb,	// (0x0001af50) main_cset_text_pane

0xc79b,	// (0x00023900) aid_area_touch_slider_ParamLimits

0xc7b7,	// (0x0002391c) cset_slider_pane_ParamLimits

0xc7e1,	// (0x00023946) main_cset_slider_pane_g1_ParamLimits

0xc7f6,	// (0x0002395b) main_cset_slider_pane_g2_ParamLimits

0x3e0c,	// (0x0001af71) main_cset_slider_pane_g3_ParamLimits

0x3e0c,	// (0x0001af71) main_cset_slider_pane_g3

0xc80b,	// (0x00023970) main_cset_slider_pane_g4_ParamLimits

0xc80b,	// (0x00023970) main_cset_slider_pane_g4

0xc81a,	// (0x0002397f) main_cset_slider_pane_g5_ParamLimits

0xc81a,	// (0x0002397f) main_cset_slider_pane_g5

0xc828,	// (0x0002398d) main_cset_slider_pane_g6_ParamLimits

0xc828,	// (0x0002398d) main_cset_slider_pane_g6

0xf981,	// (0x00026ae6) main_cset_slider_pane_g_ParamLimits

0x3e3c,	// (0x0001afa1) main_cset_slider_pane_t1_ParamLimits

0xc8b8,	// (0x00023a1d) main_cset_slider_pane_t2_ParamLimits

0xc8d2,	// (0x00023a37) main_cset_slider_pane_t3_ParamLimits

0xc8ec,	// (0x00023a51) main_cset_slider_pane_t4_ParamLimits

0xc906,	// (0x00023a6b) main_cset_slider_pane_t5_ParamLimits

0xc924,	// (0x00023a89) main_cset_slider_pane_t6_ParamLimits

0xc93b,	// (0x00023aa0) main_cset_slider_pane_t7_ParamLimits

0xc969,	// (0x00023ace) main_cset_slider_pane_t8_ParamLimits

0xc969,	// (0x00023ace) main_cset_slider_pane_t8

0xc991,	// (0x00023af6) main_cset_slider_pane_t9_ParamLimits

0xc991,	// (0x00023af6) main_cset_slider_pane_t9

0xc9b9,	// (0x00023b1e) main_cset_slider_pane_t10_ParamLimits

0xc9b9,	// (0x00023b1e) main_cset_slider_pane_t10

0xc9e1,	// (0x00023b46) main_cset_slider_pane_t11_ParamLimits

0xc9e1,	// (0x00023b46) main_cset_slider_pane_t11

0xca0b,	// (0x00023b70) main_cset_slider_pane_t12_ParamLimits

0xca0b,	// (0x00023b70) main_cset_slider_pane_t12

0xca28,	// (0x00023b8d) main_cset_slider_pane_t13_ParamLimits

0xca28,	// (0x00023b8d) main_cset_slider_pane_t13

0xf9a6,	// (0x00026b0b) main_cset_slider_pane_t_ParamLimits

0xf0ce,	// (0x00026233) bg_popup_sub_pane_cp011

0x4023,	// (0x0001b188) main_cset_text_pane_g1

0x402b,	// (0x0001b190) main_cset_text_pane_t1

0x4039,	// (0x0001b19e) main_cset_text_pane_t2

0x4047,	// (0x0001b1ac) main_cset_text_pane_t3

0x4055,	// (0x0001b1ba) main_cset_text_pane_t4

0x4063,	// (0x0001b1c8) main_cset_text_pane_t5

0x4071,	// (0x0001b1d6) main_cset_text_pane_t6

0x407f,	// (0x0001b1e4) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x00026ba2) main_cset_text_pane_t

0x6f79,	// (0x0001e0de) main_cam4_burst_pane

0x6f79,	// (0x0001e0de) main_cam5_pane

0xc6ea,	// (0x0002384f) bg_button_pane_cp019

0xc6f3,	// (0x00023858) bg_button_pane_cp020

0x3e18,	// (0x0001af7d) main_cset_slider_pane_g7_ParamLimits

0x3e18,	// (0x0001af7d) main_cset_slider_pane_g7

0x3e24,	// (0x0001af89) main_cset_slider_pane_g8_ParamLimits

0x3e24,	// (0x0001af89) main_cset_slider_pane_g8

0xc83c,	// (0x000239a1) main_cset_slider_pane_g9_ParamLimits

0xc83c,	// (0x000239a1) main_cset_slider_pane_g9

0xc848,	// (0x000239ad) main_cset_slider_pane_g10_ParamLimits

0xc848,	// (0x000239ad) main_cset_slider_pane_g10

0xc854,	// (0x000239b9) main_cset_slider_pane_g11_ParamLimits

0xc854,	// (0x000239b9) main_cset_slider_pane_g11

0xc860,	// (0x000239c5) main_cset_slider_pane_g12_ParamLimits

0xc860,	// (0x000239c5) main_cset_slider_pane_g12

0xc86c,	// (0x000239d1) main_cset_slider_pane_g13_ParamLimits

0xc86c,	// (0x000239d1) main_cset_slider_pane_g13

0xc878,	// (0x000239dd) main_cset_slider_pane_g14_ParamLimits

0xc878,	// (0x000239dd) main_cset_slider_pane_g14

0xc884,	// (0x000239e9) main_cset_slider_pane_g15_ParamLimits

0xc884,	// (0x000239e9) main_cset_slider_pane_g15

0x3e6a,	// (0x0001afcf) main_cset_slider_pane_t14_ParamLimits

0x3e6a,	// (0x0001afcf) main_cset_slider_pane_t14

0x3ea3,	// (0x0001b008) main_cset_slider_pane_t15_ParamLimits

0x3ea3,	// (0x0001b008) main_cset_slider_pane_t15

0xcd5f,	// (0x00023ec4) aid_cam4_burst_size_cell_ParamLimits

0xcd5f,	// (0x00023ec4) aid_cam4_burst_size_cell

0xcd7b,	// (0x00023ee0) grid_cam4_burst_pane_ParamLimits

0xcd7b,	// (0x00023ee0) grid_cam4_burst_pane

0xcdab,	// (0x00023f10) linegrid_cam4_burst_pane_ParamLimits

0xcdab,	// (0x00023f10) linegrid_cam4_burst_pane

0xcdcb,	// (0x00023f30) scroll_pane_cp30_ParamLimits

0xcdcb,	// (0x00023f30) scroll_pane_cp30

0xcdd7,	// (0x00023f3c) cell_cam4_burst_pane_ParamLimits

0xcdd7,	// (0x00023f3c) cell_cam4_burst_pane

0x4099,	// (0x0001b1fe) linegrid_cam4_burst_pane_g1_ParamLimits

0x4099,	// (0x0001b1fe) linegrid_cam4_burst_pane_g1

0xce13,	// (0x00023f78) linegrid_cam4_burst_pane_g2_ParamLimits

0xce13,	// (0x00023f78) linegrid_cam4_burst_pane_g2

0x40a6,	// (0x0001b20b) linegrid_cam4_burst_pane_g3_ParamLimits

0x40a6,	// (0x0001b20b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x00026bb1) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x00026bb1) linegrid_cam4_burst_pane_g

0xce24,	// (0x00023f89) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xce24,	// (0x00023f89) linegrid_cam4_burst_pane_g3_copy1

0x40b3,	// (0x0001b218) linegrid_cam4_burst_pane_g4_ParamLimits

0x40b3,	// (0x0001b218) linegrid_cam4_burst_pane_g4

0xce3e,	// (0x00023fa3) linegrid_cam4_burst_pane_g5_ParamLimits

0xce3e,	// (0x00023fa3) linegrid_cam4_burst_pane_g5

0xce4f,	// (0x00023fb4) linegrid_cam4_burst_pane_g6_ParamLimits

0xce4f,	// (0x00023fb4) linegrid_cam4_burst_pane_g6

0x40c0,	// (0x0001b225) linegrid_cam4_burst_pane_g7_ParamLimits

0x40c0,	// (0x0001b225) linegrid_cam4_burst_pane_g7

0xce60,	// (0x00023fc5) cell_cam4_burst_pane_g1

0x40d9,	// (0x0001b23e) main_cam5_pane_t1_ParamLimits

0x40d9,	// (0x0001b23e) main_cam5_pane_t1

0x40eb,	// (0x0001b250) main_cam5_pane_t2_ParamLimits

0x40eb,	// (0x0001b250) main_cam5_pane_t2

0x40fd,	// (0x0001b262) main_cam5_pane_t3_ParamLimits

0x40fd,	// (0x0001b262) main_cam5_pane_t3

0x410f,	// (0x0001b274) main_cam5_pane_t4_ParamLimits

0x410f,	// (0x0001b274) main_cam5_pane_t4

0x4127,	// (0x0001b28c) main_cam5_pane_t5_ParamLimits

0x4127,	// (0x0001b28c) main_cam5_pane_t5

0x413b,	// (0x0001b2a0) main_cam5_pane_t6_ParamLimits

0x413b,	// (0x0001b2a0) main_cam5_pane_t6

0x414f,	// (0x0001b2b4) main_cam5_pane_t7_ParamLimits

0x414f,	// (0x0001b2b4) main_cam5_pane_t7

0x4161,	// (0x0001b2c6) main_cam5_pane_t8_ParamLimits

0x4161,	// (0x0001b2c6) main_cam5_pane_t8

0x417d,	// (0x0001b2e2) main_cam5_pane_t9_ParamLimits

0x417d,	// (0x0001b2e2) main_cam5_pane_t9

0x418f,	// (0x0001b2f4) main_cam5_pane_t10_ParamLimits

0x418f,	// (0x0001b2f4) main_cam5_pane_t10

0x41a1,	// (0x0001b306) main_cam5_pane_t11_ParamLimits

0x41a1,	// (0x0001b306) main_cam5_pane_t11

0x41b3,	// (0x0001b318) main_cam5_pane_t12_ParamLimits

0x41b3,	// (0x0001b318) main_cam5_pane_t12

0x41c8,	// (0x0001b32d) main_cam5_pane_t13_ParamLimits

0x41c8,	// (0x0001b32d) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x00026bbd) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x00026bbd) main_cam5_pane_t

0x6f34,	// (0x0001e099) popup_scut_keymap_window_ParamLimits

0x6f34,	// (0x0001e099) popup_scut_keymap_window

0xce73,	// (0x00023fd8) aid_size_cell_brow_shortcut

0x1500,	// (0x00018665) bg_popup_window_pane_cp010

0xce7f,	// (0x00023fe4) grid_scut_pane

0xce8b,	// (0x00023ff0) cell_scut_pane_ParamLimits

0xce8b,	// (0x00023ff0) cell_scut_pane

0xcea2,	// (0x00024007) cell_scut_pane_g1

0x41e5,	// (0x0001b34a) cell_scut_pane_t1

0x41f4,	// (0x0001b359) cell_scut_pane_t2

0xceab,	// (0x00024010) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x00026bd8) cell_scut_pane_t

0xb858,	// (0x000229bd) main_mup3_pane_g8_ParamLimits

0xb858,	// (0x000229bd) main_mup3_pane_g8

0x800d,	// (0x0001f172) area_vitu2_query_pane_ParamLimits

0x800d,	// (0x0001f172) area_vitu2_query_pane

0xcc0b,	// (0x00023d70) input_focus_pane_cp08

0x4203,	// (0x0001b368) area_vitu2_query_pane_g1

0xceb9,	// (0x0002401e) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x00026bdf) area_vitu2_query_pane_g

0xceca,	// (0x0002402f) area_vitu2_query_pane_t1_ParamLimits

0xceca,	// (0x0002402f) area_vitu2_query_pane_t1

0xcede,	// (0x00024043) area_vitu2_query_pane_t2_ParamLimits

0xcede,	// (0x00024043) area_vitu2_query_pane_t2

0xcef2,	// (0x00024057) area_vitu2_query_pane_t3_ParamLimits

0xcef2,	// (0x00024057) area_vitu2_query_pane_t3

0x420f,	// (0x0001b374) area_vitu2_query_pane_t4_ParamLimits

0x420f,	// (0x0001b374) area_vitu2_query_pane_t4

0x4237,	// (0x0001b39c) area_vitu2_query_pane_t5_ParamLimits

0x4237,	// (0x0001b39c) area_vitu2_query_pane_t5

0x425f,	// (0x0001b3c4) area_vitu2_query_pane_t6_ParamLimits

0x425f,	// (0x0001b3c4) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x00026be4) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x00026be4) area_vitu2_query_pane_t

0xcf1a,	// (0x0002407f) bg_button_pane_cp018

0xcf28,	// (0x0002408d) bg_button_pane_cp021

0xcf34,	// (0x00024099) bg_button_pane_cp022

0xcf45,	// (0x000240aa) input_focus_pane_cp09

0xa1b7,	// (0x0002131c) aid_size_touch_mv_arrow_left

0xa1e0,	// (0x00021345) aid_size_touch_mv_arrow_right

0xc89c,	// (0x00023a01) main_cset_slider_pane_g16_ParamLimits

0xc89c,	// (0x00023a01) main_cset_slider_pane_g16

0xc8aa,	// (0x00023a0f) main_cset_slider_pane_g17_ParamLimits

0xc8aa,	// (0x00023a0f) main_cset_slider_pane_g17

0xce60,	// (0x00023fc5) cell_cam4_burst_pane_g1_ParamLimits

0xf0ce,	// (0x00026233) compa_mode_pane

0xca85,	// (0x00023bea) popup_vtel_slider_window_g3_ParamLimits

0xca85,	// (0x00023bea) popup_vtel_slider_window_g3

0xca99,	// (0x00023bfe) popup_vtel_slider_window_g4_ParamLimits

0xca99,	// (0x00023bfe) popup_vtel_slider_window_g4

0xcaad,	// (0x00023c12) popup_vtel_slider_window_t1_ParamLimits

0xcaad,	// (0x00023c12) popup_vtel_slider_window_t1

0x6f79,	// (0x0001e0de) main_cl_pane

0x74bd,	// (0x0001e622) popup_imed_adjust2_window_ParamLimits

0x29bd,	// (0x00019b22) bg_tb_trans_pane_cp05_ParamLimits

0x33d4,	// (0x0001a539) popup_imed_adjust2_window_g1_ParamLimits

0x33e3,	// (0x0001a548) popup_imed_adjust2_window_g2_ParamLimits

0x33e3,	// (0x0001a548) popup_imed_adjust2_window_g2

0x33ef,	// (0x0001a554) popup_imed_adjust2_window_g3_ParamLimits

0x33ef,	// (0x0001a554) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x0002694f) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x0002694f) popup_imed_adjust2_window_g

0x33fb,	// (0x0001a560) popup_imed_adjust2_window_t1_ParamLimits

0x3413,	// (0x0001a578) slider_imed_adjust_pane_ParamLimits

0x3427,	// (0x0001a58c) slider_imed_adjust_pane_g1_ParamLimits

0x3437,	// (0x0001a59c) slider_imed_adjust_pane_g2_ParamLimits

0x3447,	// (0x0001a5ac) slider_imed_adjust_pane_g3_ParamLimits

0x3458,	// (0x0001a5bd) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x00026956) slider_imed_adjust_pane_g_ParamLimits

0x7d8a,	// (0x0001eeef) aid_touch_area_cam4_ParamLimits

0x7d8a,	// (0x0001eeef) aid_touch_area_cam4

0x7d9a,	// (0x0001eeff) battery_pane_cp01

0x7e21,	// (0x0001ef86) main_camera4_pane_g6_ParamLimits

0x7e21,	// (0x0001ef86) main_camera4_pane_g6

0x7e3f,	// (0x0001efa4) main_camera4_pane_t2_ParamLimits

0x7e3f,	// (0x0001efa4) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x00026a59) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x00026a59) main_camera4_pane_t

0x7eb0,	// (0x0001f015) aid_touch_area_vid4_ParamLimits

0x7eb0,	// (0x0001f015) aid_touch_area_vid4

0x7ef0,	// (0x0001f055) main_video4_pane_g5_ParamLimits

0x7ef0,	// (0x0001f055) main_video4_pane_g5

0x7f14,	// (0x0001f079) vid4_progress_pane_ParamLimits

0x7f14,	// (0x0001f079) vid4_progress_pane

0x3e30,	// (0x0001af95) main_cset_slider_pane_g18_ParamLimits

0x3e30,	// (0x0001af95) main_cset_slider_pane_g18

0x40cd,	// (0x0001b232) cell_cam4_burst_pane_g2_ParamLimits

0x40cd,	// (0x0001b232) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x00026bb8) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x00026bb8) cell_cam4_burst_pane_g

0xcf56,	// (0x000240bb) bg_cl_pane_ParamLimits

0xcf56,	// (0x000240bb) bg_cl_pane

0xcf62,	// (0x000240c7) cl_header_pane_ParamLimits

0xcf62,	// (0x000240c7) cl_header_pane

0xcf6e,	// (0x000240d3) cl_listscroll_pane_ParamLimits

0xcf6e,	// (0x000240d3) cl_listscroll_pane

0x42ab,	// (0x0001b410) bg_cl_pane_g1

0x42b3,	// (0x0001b418) bg_cl_pane_g2

0x42bb,	// (0x0001b420) bg_cl_pane_g3

0x42c3,	// (0x0001b428) bg_cl_pane_g4

0x42cb,	// (0x0001b430) bg_cl_pane_g5

0x42d3,	// (0x0001b438) bg_cl_pane_g6

0x42db,	// (0x0001b440) bg_cl_pane_g7

0x42e3,	// (0x0001b448) bg_cl_pane_g8

0x42eb,	// (0x0001b450) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x00026bf3) bg_cl_pane_g

0xcf7a,	// (0x000240df) aid_height_cl_leading_ParamLimits

0xcf7a,	// (0x000240df) aid_height_cl_leading

0xcf86,	// (0x000240eb) aid_height_cl_text_ParamLimits

0xcf86,	// (0x000240eb) aid_height_cl_text

0xc0f6,	// (0x0002325b) bg_cl_header_pane_ParamLimits

0xc0f6,	// (0x0002325b) bg_cl_header_pane

0xcf9e,	// (0x00024103) cl_header_pane_g1_ParamLimits

0xcf9e,	// (0x00024103) cl_header_pane_g1

0xcfab,	// (0x00024110) cl_header_pane_t1_ParamLimits

0xcfab,	// (0x00024110) cl_header_pane_t1

0x42f3,	// (0x0001b458) cl_list_pane

0x3e03,	// (0x0001af68) hc_scroll_pane_cp01

0x0cb7,	// (0x00017e1c) bg_cl_header_pane_g1

0x3ce9,	// (0x0001ae4e) bg_cl_header_pane_g2

0x0cd7,	// (0x00017e3c) bg_cl_header_pane_g3

0x3cf9,	// (0x0001ae5e) bg_cl_header_pane_g4

0x3cf1,	// (0x0001ae56) bg_cl_header_pane_g5

0x3fa2,	// (0x0001b107) bg_cl_header_pane_g6

0x3d11,	// (0x0001ae76) bg_cl_header_pane_g7

0x3d19,	// (0x0001ae7e) bg_cl_header_pane_g8

0x3d09,	// (0x0001ae6e) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x00026c06) bg_cl_header_pane_g

0xcfbd,	// (0x00024122) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xcfbd,	// (0x00024122) hc_cl_list_double_graphic_heading_pane

0xcfce,	// (0x00024133) hc_cl_list_single_graphic_pane_ParamLimits

0xcfce,	// (0x00024133) hc_cl_list_single_graphic_pane

0xcfe7,	// (0x0002414c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xcfe7,	// (0x0002414c) hc_cl_list_single_graphic_pane_g1

0xcff3,	// (0x00024158) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xcff3,	// (0x00024158) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x00026c19) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x00026c19) hc_cl_list_single_graphic_pane_g

0xd007,	// (0x0002416c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd007,	// (0x0002416c) hc_cl_list_single_graphic_pane_t1

0xcfe7,	// (0x0002414c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xcfe7,	// (0x0002414c) hc_cl_list_double_graphic_heading_pane_g1

0xd01c,	// (0x00024181) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd01c,	// (0x00024181) hc_cl_list_double_graphic_heading_pane_g2

0xd030,	// (0x00024195) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd030,	// (0x00024195) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x00026c1e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x00026c1e) hc_cl_list_double_graphic_heading_pane_g

0xd044,	// (0x000241a9) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd044,	// (0x000241a9) hc_cl_list_double_graphic_heading_pane_t1

0xd059,	// (0x000241be) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd059,	// (0x000241be) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x00026c25) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x00026c25) hc_cl_list_double_graphic_heading_pane_t

0x8431,	// (0x0001f596) vid4_progress_pane_g1

0x8443,	// (0x0001f5a8) vid4_progress_pane_g2

0x0fd4,	// (0x00018139) vid4_progress_pane_g3

0x8453,	// (0x0001f5b8) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x00026c2a) vid4_progress_pane_g

0x8471,	// (0x0001f5d6) vid4_progress_pane_t1

0x8486,	// (0x0001f5eb) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x00026c35) vid4_progress_pane_t

0x84b1,	// (0x0001f616) wait_bar_pane_cp07

0x2cb6,	// (0x00019e1b) blid_firmament_pane_ParamLimits

0x2cf9,	// (0x00019e5e) popup_blid_sat_info2_window_g1

0x2d1d,	// (0x00019e82) popup_blid_sat_info2_window_t3

0x2d2b,	// (0x00019e90) popup_blid_sat_info2_window_t4

0x2d39,	// (0x00019e9e) popup_blid_sat_info2_window_t5

0x2d47,	// (0x00019eac) popup_blid_sat_info2_window_t6

0x2d57,	// (0x00019ebc) popup_blid_sat_info2_window_t7

0x2d65,	// (0x00019eca) popup_blid_sat_info2_window_t8

0x2d73,	// (0x00019ed8) popup_blid_sat_info2_window_t9

0x2d81,	// (0x00019ee6) popup_blid_sat_info2_window_t10

0x2e43,	// (0x00019fa8) aid_firma_cardinal_ParamLimits

0x2e57,	// (0x00019fbc) blid_firmament_pane_t1_ParamLimits

0x2e6e,	// (0x00019fd3) blid_firmament_pane_t2_ParamLimits

0x2e85,	// (0x00019fea) blid_firmament_pane_t3_ParamLimits

0x2e9c,	// (0x0001a001) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x00026848) blid_firmament_pane_t_ParamLimits

0x2eb3,	// (0x0001a018) blid_sat_info_pane_ParamLimits

0x741f,	// (0x0001e584) main_cam_set_pane_ParamLimits

0xbf8a,	// (0x000230ef) aid_size_cell_colour_35_ParamLimits

0xbfa4,	// (0x00023109) aid_size_cell_colour_112_ParamLimits

0xbfbb,	// (0x00023120) aid_size_cell_effect_ParamLimits

0x0056,	// (0x000171bb) bg_tb_trans_pane_cp02_ParamLimits

0x1002,	// (0x00018167) heading_imed_pane_ParamLimits

0xbfd5,	// (0x0002313a) listscroll_imed_pane_ParamLimits

0x1fef,	// (0x00019154) popup_call2_audio_first_window_g5_ParamLimits

0x1fef,	// (0x00019154) popup_call2_audio_first_window_g5

0x7c15,	// (0x0001ed7a) aid_size_touch_image3_arrow_left_ParamLimits

0x7c15,	// (0x0001ed7a) aid_size_touch_image3_arrow_left

0x7c2b,	// (0x0001ed90) aid_size_touch_image3_arrow_right_ParamLimits

0x7c2b,	// (0x0001ed90) aid_size_touch_image3_arrow_right

0x849c,	// (0x0001f601) vid4_progress_pane_t3

0xc281,	// (0x000233e6) main_hwr_training_symbol_option_pane_ParamLimits

0xc281,	// (0x000233e6) main_hwr_training_symbol_option_pane

0x36c1,	// (0x0001a826) popup_hwr_training_preview_window_ParamLimits

0x36c1,	// (0x0001a826) popup_hwr_training_preview_window

0x793b,	// (0x0001eaa0) hwr_training_navi_pane_g5_ParamLimits

0x793b,	// (0x0001eaa0) hwr_training_navi_pane_g5

0x3cd7,	// (0x0001ae3c) popup_char_count_window

0x6f6b,	// (0x0001e0d0) bg_popup_sub_pane_cp20_ParamLimits

0x8372,	// (0x0001f4d7) list_vitu2_match_list_pane_ParamLimits

0x837e,	// (0x0001f4e3) vitu2_page_scroll_pane_ParamLimits

0x837e,	// (0x0001f4e3) vitu2_page_scroll_pane

0x43ce,	// (0x0001b533) list_single_hwr_training_symbol_option_pane_ParamLimits

0x43ce,	// (0x0001b533) list_single_hwr_training_symbol_option_pane

0x43e1,	// (0x0001b546) list_single_hwr_training_symbol_option_pane_g1

0x43e9,	// (0x0001b54e) list_single_hwr_training_symbol_option_pane_t1

0x43f7,	// (0x0001b55c) bg_button_pane_cp023

0x4400,	// (0x0001b565) bg_button_pane_cp024

0xd06e,	// (0x000241d3) vitu2_page_scroll_pane_g1

0xd076,	// (0x000241db) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x00026c3c) vitu2_page_scroll_pane_g

0xd07e,	// (0x000241e3) vitu2_page_scroll_pane_t1

0x4433,	// (0x0001b598) popup_char_count_window_g1

0x443c,	// (0x0001b5a1) popup_char_count_window_g2

0x4445,	// (0x0001b5aa) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x00026c41) popup_char_count_window_g

0x444e,	// (0x0001b5b3) popup_char_count_window_t1

0x6f79,	// (0x0001e0de) main_vded2_pane

0x33c0,	// (0x0001a525) aid_size_cell_imed_line

0x33ca,	// (0x0001a52f) grid_imed_line_width_pane

0x7f82,	// (0x0001f0e7) vid4_indicators_pane_g4

0x445c,	// (0x0001b5c1) cell_imed_line_width_pane_ParamLimits

0x445c,	// (0x0001b5c1) cell_imed_line_width_pane

0x4470,	// (0x0001b5d5) cell_imed_line_width_pane_g1

0x4479,	// (0x0001b5de) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x00026c48) cell_imed_line_width_pane_g

0xd08d,	// (0x000241f2) main_vded2_pane_g1_ParamLimits

0xd08d,	// (0x000241f2) main_vded2_pane_g1

0xd09a,	// (0x000241ff) main_vded2_pane_g2_ParamLimits

0xd09a,	// (0x000241ff) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x00026c4d) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x00026c4d) main_vded2_pane_g

0xd0a8,	// (0x0002420d) vded2_slider_pane_ParamLimits

0xd0a8,	// (0x0002420d) vded2_slider_pane

0xd0b5,	// (0x0002421a) aid_size_touch_vded2_end

0xd0bf,	// (0x00024224) aid_size_touch_vded2_playhead

0x4481,	// (0x0001b5e6) aid_size_touch_vded2_start

0x4489,	// (0x0001b5ee) vded2_slider_bg_pane

0x4492,	// (0x0001b5f7) vded2_slider_pane_g1

0x449b,	// (0x0001b600) vded2_slider_pane_g2

0xd0c7,	// (0x0002422c) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x00026c52) vded2_slider_pane_g

0x44a3,	// (0x0001b608) vded2_slider_bg_pane_g1

0x44ac,	// (0x0001b611) vded2_slider_bg_pane_g2

0x44b5,	// (0x0001b61a) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x00026c59) vded2_slider_bg_pane_g

0xa823,	// (0x00021988) aid_postcard_touch_down_pane_ParamLimits

0xa823,	// (0x00021988) aid_postcard_touch_down_pane

0xa833,	// (0x00021998) aid_postcard_touch_up_pane_ParamLimits

0xa833,	// (0x00021998) aid_postcard_touch_up_pane

0x6f79,	// (0x0001e0de) main_blid2_pane

0x7448,	// (0x0001e5ad) popup_blid2_search_window

0xf0ce,	// (0x00026233) blid2_gps_pane

0xf0ce,	// (0x00026233) blid2_navig_pane

0xf0ce,	// (0x00026233) blid2_search_pane

0xf0ce,	// (0x00026233) blid2_tripm_pane

0xd0d0,	// (0x00024235) blid2_search_pane_g1_ParamLimits

0xd0d0,	// (0x00024235) blid2_search_pane_g1

0xd0e0,	// (0x00024245) blid2_search_pane_t1_ParamLimits

0xd0e0,	// (0x00024245) blid2_search_pane_t1

0xd0f2,	// (0x00024257) aid_size_cell_blid2_gps_ParamLimits

0xd0f2,	// (0x00024257) aid_size_cell_blid2_gps

0xd102,	// (0x00024267) blid2_gps_pane_g1_ParamLimits

0xd102,	// (0x00024267) blid2_gps_pane_g1

0xd10e,	// (0x00024273) grid_blid2_satellite_pane_ParamLimits

0xd10e,	// (0x00024273) grid_blid2_satellite_pane

0xd11e,	// (0x00024283) blid2_navig_pane_g1_ParamLimits

0xd11e,	// (0x00024283) blid2_navig_pane_g1

0xd12a,	// (0x0002428f) blid2_navig_pane_t1_ParamLimits

0xd12a,	// (0x0002428f) blid2_navig_pane_t1

0xd13c,	// (0x000242a1) blid2_navig_pane_t2_ParamLimits

0xd13c,	// (0x000242a1) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x00026c60) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x00026c60) blid2_navig_pane_t

0xd14e,	// (0x000242b3) blid2_navig_ring_pane_ParamLimits

0xd14e,	// (0x000242b3) blid2_navig_ring_pane

0xd15e,	// (0x000242c3) blid2_speed_pane_ParamLimits

0xd15e,	// (0x000242c3) blid2_speed_pane

0xd16a,	// (0x000242cf) blid2_tripm_pane_g1_ParamLimits

0xd16a,	// (0x000242cf) blid2_tripm_pane_g1

0xd17a,	// (0x000242df) blid2_tripm_pane_g2_ParamLimits

0xd17a,	// (0x000242df) blid2_tripm_pane_g2

0xd186,	// (0x000242eb) blid2_tripm_pane_g3_ParamLimits

0xd186,	// (0x000242eb) blid2_tripm_pane_g3

0xd192,	// (0x000242f7) blid2_tripm_pane_g4_ParamLimits

0xd192,	// (0x000242f7) blid2_tripm_pane_g4

0xd19e,	// (0x00024303) blid2_tripm_pane_g5_ParamLimits

0xd19e,	// (0x00024303) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x00026c65) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x00026c65) blid2_tripm_pane_g

0xd1ba,	// (0x0002431f) blid2_tripm_pane_t1_ParamLimits

0xd1ba,	// (0x0002431f) blid2_tripm_pane_t1

0xd1ce,	// (0x00024333) blid2_tripm_pane_t2_ParamLimits

0xd1ce,	// (0x00024333) blid2_tripm_pane_t2

0xd1e0,	// (0x00024345) blid2_tripm_pane_t3_ParamLimits

0xd1e0,	// (0x00024345) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x00026c72) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x00026c72) blid2_tripm_pane_t

0xd212,	// (0x00024377) cell_blid2_satellite_pane_ParamLimits

0xd212,	// (0x00024377) cell_blid2_satellite_pane

0xd22c,	// (0x00024391) cell_blid2_satellite_pane_g1

0x44be,	// (0x0001b623) cell_blid2_satellite_pane_t1

0x2ec3,	// (0x0001a028) blid2_speed_pane_g1

0x44cc,	// (0x0001b631) blid2_speed_pane_t1

0x44da,	// (0x0001b63f) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x00026c7b) blid2_speed_pane_t

0x2ec3,	// (0x0001a028) blid2_navig_ring_pane_g1

0xd235,	// (0x0002439a) blid2_navig_ring_pane_g2

0xd23d,	// (0x000243a2) blid2_navig_ring_pane_g3

0xd245,	// (0x000243aa) blid2_navig_ring_pane_g4

0xd24d,	// (0x000243b2) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x00026c80) blid2_navig_ring_pane_g

0xf0ce,	// (0x00026233) bg_popup_window_pane_cp011

0x44e8,	// (0x0001b64d) popup_blid2_search_window_g1

0x44f0,	// (0x0001b655) popup_blid2_search_window_t1

0x44fe,	// (0x0001b663) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x00026c8b) popup_blid2_search_window_t

0x0bc6,	// (0x00017d2b) main_browser_pane_g1

0x07c7,	// (0x0001792c) main_browser_pane_ParamLimits

0x741f,	// (0x0001e584) bg_button_pane_cp011_ParamLimits

0x8294,	// (0x0001f3f9) cell_vitu2_function_pane_g1_ParamLimits

0x29bd,	// (0x00019b22) bg_popup_sub_pane_cp22_ParamLimits

0xcc0b,	// (0x00023d70) input_focus_pane_cp08_ParamLimits

0xcc22,	// (0x00023d87) popup_vitu2_query_button_pane_ParamLimits

0xcc22,	// (0x00023d87) popup_vitu2_query_button_pane

0xcc33,	// (0x00023d98) popup_vitu2_query_input_button_pane

0x4017,	// (0x0001b17c) popup_vitu2_query_window_g1_ParamLimits

0xcc3d,	// (0x00023da2) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x00026b8c) popup_vitu2_query_window_g_ParamLimits

0xf0ce,	// (0x00026233) bg_button_pane_cp026

0xd255,	// (0x000243ba) popup_vitu2_query_input_button_pane_g1

0xf0ce,	// (0x00026233) bg_button_pane_cp025

0x450c,	// (0x0001b671) popup_vitu2_query_button_pane_t1

0xb53b,	// (0x000226a0) main_mp3_pane_t6

0xb54b,	// (0x000226b0) popup_slider_window_cp01

0x7e5f,	// (0x0001efc4) cam4_battery_pane

0x7f3f,	// (0x0001f0a4) cam4_battery_pane_cp02

0x8429,	// (0x0001f58e) cam4_battery_pane_cp01

0x8429,	// (0x0001f58e) cam4_battery_pane_cp03

0x451a,	// (0x0001b67f) cam4_battery_pane_g1

0x2ec3,	// (0x0001a028) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x00026c90) cam4_battery_pane_g

0x2d8f,	// (0x00019ef4) popup_blid_sat_info2_window_t11

0xa1b7,	// (0x0002131c) aid_size_touch_mv_arrow_left_ParamLimits

0xa1e0,	// (0x00021345) aid_size_touch_mv_arrow_right_ParamLimits

0x1460,	// (0x000185c5) navi_pane_g1_ParamLimits

0xa21f,	// (0x00021384) navi_pane_g2_ParamLimits

0xa24d,	// (0x000213b2) navi_pane_g3_ParamLimits

0xf3f5,	// (0x0002655a) navi_pane_g_ParamLimits

0xa2a7,	// (0x0002140c) navi_pane_mv_t1_ParamLimits

0xbfe1,	// (0x00023146) grid_imed_effect_pane_ParamLimits

0x8fd2,	// (0x00020137) aid_placing_vt_slider_lsc

0x0b15,	// (0x00017c7a) aid_placing_vt_slider_prt

0x0056,	// (0x000171bb) bg_tb_trans_pane_cp01_ParamLimits

0x304f,	// (0x0001a1b4) popup_image_details_window_g1_ParamLimits

0x3062,	// (0x0001a1c7) popup_image_details_window_g2_ParamLimits

0x3077,	// (0x0001a1dc) popup_image_details_window_g3_ParamLimits

0x3077,	// (0x0001a1dc) popup_image_details_window_g3

0xf728,	// (0x0002688d) popup_image_details_window_g_ParamLimits

0x308b,	// (0x0001a1f0) popup_image_details_window_t1_ParamLimits

0x309d,	// (0x0001a202) popup_image_details_window_t2_ParamLimits

0x30b6,	// (0x0001a21b) popup_image_details_window_t3_ParamLimits

0x30ca,	// (0x0001a22f) popup_image_details_window_t4_ParamLimits

0x30e5,	// (0x0001a24a) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x00026894) popup_image_details_window_t_ParamLimits

0xcf92,	// (0x000240f7) cl_header_name_pane_ParamLimits

0xcf92,	// (0x000240f7) cl_header_name_pane

0xd25d,	// (0x000243c2) cl_header_name_pane_t1_ParamLimits

0xd25d,	// (0x000243c2) cl_header_name_pane_t1

0xd274,	// (0x000243d9) cl_header_name_pane_t2_ParamLimits

0xd274,	// (0x000243d9) cl_header_name_pane_t2

0xd29e,	// (0x00024403) cl_header_name_pane_t3_ParamLimits

0xd29e,	// (0x00024403) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x00026c95) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x00026c95) cl_header_name_pane_t

0xa278,	// (0x000213dd) navi_pane_mv_g2_ParamLimits

0x3c65,	// (0x0001adca) field_vitu2_entry_pane_g1_ParamLimits

0x3c71,	// (0x0001add6) field_vitu2_entry_pane_g2_ParamLimits

0x3c7d,	// (0x0001ade2) field_vitu2_entry_pane_g3_ParamLimits

0x3c7d,	// (0x0001ade2) field_vitu2_entry_pane_g3

0xf926,	// (0x00026a8b) field_vitu2_entry_pane_g_ParamLimits

0x8169,	// (0x0001f2ce) cell_vitu2_itu_pane_g1_ParamLimits

0x8179,	// (0x0001f2de) cell_vitu2_itu_pane_g2_ParamLimits

0x8179,	// (0x0001f2de) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x00026a97) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x00026a97) cell_vitu2_itu_pane_g

0x741f,	// (0x0001e584) bg_vkb2_func_pane_cp05_ParamLimits

0x741f,	// (0x0001e584) bg_vkb2_func_pane_cp05

0x741f,	// (0x0001e584) bg_vkb2_func_pane_cp03

0x741f,	// (0x0001e584) bg_vkb2_func_pane_cp04

0x741f,	// (0x0001e584) bg_vkb2_func_pane_cp10_ParamLimits

0x741f,	// (0x0001e584) bg_vkb2_func_pane_cp10

0xcf34,	// (0x00024099) bg_vkb2_func_pane_cp08

0xcf1a,	// (0x0002407f) bg_vkb2_func_pane_cp06

0xcf28,	// (0x0002408d) bg_vkb2_func_pane_cp07

0x4409,	// (0x0001b56e) bg_vkb2_func_pane_cp11_ParamLimits

0x4409,	// (0x0001b56e) bg_vkb2_func_pane_cp11

0x441e,	// (0x0001b583) bg_vkb2_func_pane_cp12_ParamLimits

0x441e,	// (0x0001b583) bg_vkb2_func_pane_cp12

0xf0ce,	// (0x00026233) bg_vkb2_func_pane_cp09

0x3ce9,	// (0x0001ae4e) bg_vkb2_func_pane_g1

0x0cd7,	// (0x00017e3c) bg_vkb2_func_pane_g2

0x3cf1,	// (0x0001ae56) bg_vkb2_func_pane_g3

0x3cf9,	// (0x0001ae5e) bg_vkb2_func_pane_g4

0x3fa2,	// (0x0001b107) bg_vkb2_func_pane_g5

0x3d11,	// (0x0001ae76) bg_vkb2_func_pane_g6

0x3d19,	// (0x0001ae7e) bg_vkb2_func_pane_g7

0x3d09,	// (0x0001ae6e) bg_vkb2_func_pane_g8

0x0cb7,	// (0x00017e1c) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x00026c9c) bg_vkb2_func_pane_g

0xd1ac,	// (0x00024311) blid2_tripm_pane_g6_ParamLimits

0xd1ac,	// (0x00024311) blid2_tripm_pane_g6

0x39ce,	// (0x0001ab33) mp4_progress_pane_g1

0xd206,	// (0x0002436b) blid2_tripm_values_pane_ParamLimits

0xd206,	// (0x0002436b) blid2_tripm_values_pane

0xd2c3,	// (0x00024428) blid2_tripm_values_pane_t1

0xd2d1,	// (0x00024436) blid2_tripm_values_pane_t2

0xd2df,	// (0x00024444) blid2_tripm_values_pane_t3

0xd2ed,	// (0x00024452) blid2_tripm_values_pane_t4

0xd2fb,	// (0x00024460) blid2_tripm_values_pane_t5

0xd309,	// (0x0002446e) blid2_tripm_values_pane_t6

0xd317,	// (0x0002447c) blid2_tripm_values_pane_t7

0xd325,	// (0x0002448a) blid2_tripm_values_pane_t8

0xd333,	// (0x00024498) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x00026caf) blid2_tripm_values_pane_t

0x9012,	// (0x00020177) call_video_pane_t1_ParamLimits

0x9033,	// (0x00020198) call_video_pane_t2_ParamLimits

0xf27e,	// (0x000263e3) call_video_pane_t_ParamLimits

0xa7c1,	// (0x00021926) msg_header_pane_g1_ParamLimits

0x16a3,	// (0x00018808) msg_header_pane_g2_ParamLimits

0x16a3,	// (0x00018808) msg_header_pane_g2

0x0001,

0xf498,	// (0x000265fd) msg_header_pane_g_ParamLimits

0xf498,	// (0x000265fd) msg_header_pane_g

0x07c7,	// (0x0001792c) main_clock2_pane_ParamLimits

0xbdff,	// (0x00022f64) grid_clock2_toolbar_pane_ParamLimits

0xbdff,	// (0x00022f64) grid_clock2_toolbar_pane

0xbdff,	// (0x00022f64) listscroll_clock2_pane_ParamLimits

0xbdff,	// (0x00022f64) listscroll_clock2_pane

0xbe96,	// (0x00022ffb) main_clock2_pane_t3_ParamLimits

0xbe96,	// (0x00022ffb) main_clock2_pane_t3

0xbea8,	// (0x0002300d) main_clock2_pane_t4_ParamLimits

0xbea8,	// (0x0002300d) main_clock2_pane_t4

0x4524,	// (0x0001b689) cell_clock2_toolbar_pane

0x452c,	// (0x0001b691) cell_clock2_toolbar_pane_cp01

0x452c,	// (0x0001b691) cell_clock2_toolbar_pane_cp02

0x4534,	// (0x0001b699) cell_clock2_toolbar_pane_cp03

0x453c,	// (0x0001b6a1) list_clock2_pane

0x13b7,	// (0x0001851c) scroll_pane_cp10

0x4544,	// (0x0001b6a9) list_single_clock2_pane_ParamLimits

0x4544,	// (0x0001b6a9) list_single_clock2_pane

0x1500,	// (0x00018665) list_highlight_pane_cp08

0x4551,	// (0x0001b6b6) list_single_clock2_pane_t1

0x455f,	// (0x0001b6c4) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x00026cc2) list_single_clock2_pane_t

0xf0ce,	// (0x00026233) bg_button_pane_cp10

0x456d,	// (0x0001b6d2) cell_clock2_toolbar_pane_g1

0x73ba,	// (0x0001e51f) aid_main_viewer_pane_g1_ParamLimits

0x73ba,	// (0x0001e51f) aid_main_viewer_pane_g1

0x73c6,	// (0x0001e52b) aid_main_viewer_pane_g2_ParamLimits

0x73c6,	// (0x0001e52b) aid_main_viewer_pane_g2

0xa7df,	// (0x00021944) aid_main_viewer_pane_g3_ParamLimits

0xa7df,	// (0x00021944) aid_main_viewer_pane_g3

0xa7f0,	// (0x00021955) aid_main_viewer_pane_g4_ParamLimits

0xa7f0,	// (0x00021955) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x0002660e) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0002660e) aid_main_viewer_pane_g

0x7412,	// (0x0001e577) main_calc_pane_ParamLimits

0x742d,	// (0x0001e592) main_dialer2_pane_ParamLimits

0x6f79,	// (0x0001e0de) main_cam6_pane

0x6f79,	// (0x0001e0de) main_vid6_pane

0xbe0b,	// (0x00022f70) listscroll_gen_pane_cp06_ParamLimits

0xbe0b,	// (0x00022f70) listscroll_gen_pane_cp06

0xbeba,	// (0x0002301f) main_clock2_pane_t5_ParamLimits

0xbeba,	// (0x0002301f) main_clock2_pane_t5

0xbf03,	// (0x00023068) aid_call2_pane_cp10_ParamLimits

0xbf15,	// (0x0002307a) aid_call_pane_cp10_ParamLimits

0x1435,	// (0x0001859a) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1435,	// (0x0001859a) popup_clock_analogue_window_cp10_g2_ParamLimits

0xbf27,	// (0x0002308c) popup_clock_analogue_window_cp10_g3_ParamLimits

0xbf27,	// (0x0002308c) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1435,	// (0x0001859a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x00026944) popup_clock_analogue_window_cp10_g_ParamLimits

0xbf39,	// (0x0002309e) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc35e,	// (0x000234c3) cell_dialer2_keypad_pane_g2_ParamLimits

0xc35e,	// (0x000234c3) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x00026a2a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x00026a2a) cell_dialer2_keypad_pane_g

0xc37a,	// (0x000234df) cell_dialer2_keypad_pane_t1

0xc788,	// (0x000238ed) main_cset_text2_pane_ParamLimits

0xc788,	// (0x000238ed) main_cset_text2_pane

0x4203,	// (0x0001b368) area_vitu2_query_pane_g1_ParamLimits

0xceb9,	// (0x0002401e) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x00026bdf) area_vitu2_query_pane_g_ParamLimits

0x4287,	// (0x0001b3ec) area_vitu2_query_pane_t7_ParamLimits

0x4287,	// (0x0001b3ec) area_vitu2_query_pane_t7

0xcf1a,	// (0x0002407f) bg_button_pane_cp018_ParamLimits

0xcf28,	// (0x0002408d) bg_button_pane_cp021_ParamLimits

0xcf34,	// (0x00024099) bg_button_pane_cp022_ParamLimits

0xcf34,	// (0x00024099) bg_vkb2_func_pane_cp08_ParamLimits

0xcf1a,	// (0x0002407f) bg_vkb2_func_pane_cp06_ParamLimits

0xcf28,	// (0x0002408d) bg_vkb2_func_pane_cp07_ParamLimits

0xcf45,	// (0x000240aa) input_focus_pane_cp09_ParamLimits

0x84c3,	// (0x0001f628) cam6_autofocus_pane_ParamLimits

0x84c3,	// (0x0001f628) cam6_autofocus_pane

0x84e5,	// (0x0001f64a) cam6_image_uncrop_pane_ParamLimits

0x84e5,	// (0x0001f64a) cam6_image_uncrop_pane

0x8512,	// (0x0001f677) cam6_indi_pane_ParamLimits

0x8512,	// (0x0001f677) cam6_indi_pane

0x852c,	// (0x0001f691) cam6_mode_pane_ParamLimits

0x852c,	// (0x0001f691) cam6_mode_pane

0x8540,	// (0x0001f6a5) cam6_timer_pane_ParamLimits

0x8540,	// (0x0001f6a5) cam6_timer_pane

0x854c,	// (0x0001f6b1) cam6_zoom_pane_ParamLimits

0x854c,	// (0x0001f6b1) cam6_zoom_pane

0xd341,	// (0x000244a6) cam6_mode_pane_g1_ParamLimits

0xd341,	// (0x000244a6) cam6_mode_pane_g1

0xd34d,	// (0x000244b2) cam6_mode_pane_g2_ParamLimits

0xd34d,	// (0x000244b2) cam6_mode_pane_g2

0xd359,	// (0x000244be) cam6_mode_pane_g3_ParamLimits

0xd359,	// (0x000244be) cam6_mode_pane_g3

0xd365,	// (0x000244ca) cam6_mode_pane_g4_ParamLimits

0xd365,	// (0x000244ca) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x00026cc7) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x00026cc7) cam6_mode_pane_g

0x4583,	// (0x0001b6e8) bg_tb_trans_pane_cp08_ParamLimits

0x4583,	// (0x0001b6e8) bg_tb_trans_pane_cp08

0x4591,	// (0x0001b6f6) cam6_battery_pane_ParamLimits

0x4591,	// (0x0001b6f6) cam6_battery_pane

0x45a7,	// (0x0001b70c) cam6_indi_pane_g1_ParamLimits

0x45a7,	// (0x0001b70c) cam6_indi_pane_g1

0x45b9,	// (0x0001b71e) cam6_indi_pane_g2_ParamLimits

0x45b9,	// (0x0001b71e) cam6_indi_pane_g2

0x45cb,	// (0x0001b730) cam6_indi_pane_g3_ParamLimits

0x45cb,	// (0x0001b730) cam6_indi_pane_g3

0x0002,

0xfb6b,	// (0x00026cd0) cam6_indi_pane_g_ParamLimits

0xfb6b,	// (0x00026cd0) cam6_indi_pane_g

0x45dd,	// (0x0001b742) cam6_indi_pane_t1_ParamLimits

0x45dd,	// (0x0001b742) cam6_indi_pane_t1

0xc4b9,	// (0x0002361e) cam6_autofocus_pane_g1

0xc4b1,	// (0x00023616) cam6_autofocus_pane_g2

0xc4c9,	// (0x0002362e) cam6_autofocus_pane_g3

0xc4c1,	// (0x00023626) cam6_autofocus_pane_g4

0x0003,

0xfb72,	// (0x00026cd7) cam6_autofocus_pane_g

0x4603,	// (0x0001b768) cam6_timer_pane_g1

0x460b,	// (0x0001b770) cam6_timer_pane_t1

0x4619,	// (0x0001b77e) cam6_zoom_cont_pane

0x4621,	// (0x0001b786) cam6_zoom_pane_g1

0x4629,	// (0x0001b78e) cam6_zoom_pane_g2

0xd371,	// (0x000244d6) cam6_zoom_pane_g3

0x0002,

0xfb7b,	// (0x00026ce0) cam6_zoom_pane_g

0x2ec3,	// (0x0001a028) cam6_battery_pane_g1

0x2ec3,	// (0x0001a028) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x00026851) cam6_battery_pane_g

0x4631,	// (0x0001b796) cam6_zoom_cont_pane_g1

0x463a,	// (0x0001b79f) cam6_zoom_cont_pane_g2

0x4643,	// (0x0001b7a8) cam6_zoom_cont_pane_g3

0x0002,

0xfb82,	// (0x00026ce7) cam6_zoom_cont_pane_g

0xd38e,	// (0x000244f3) cam6_mode_pane_cp_ParamLimits

0xd38e,	// (0x000244f3) cam6_mode_pane_cp

0xd3a2,	// (0x00024507) cam6_zoom_pane_cp_ParamLimits

0xd3a2,	// (0x00024507) cam6_zoom_pane_cp

0xd3ba,	// (0x0002451f) vid6_image_uncrop_cif_pane_ParamLimits

0xd3ba,	// (0x0002451f) vid6_image_uncrop_cif_pane

0xd3e6,	// (0x0002454b) vid6_image_uncrop_nhd_pane_ParamLimits

0xd3e6,	// (0x0002454b) vid6_image_uncrop_nhd_pane

0xd403,	// (0x00024568) vid6_image_uncrop_vga_pane_ParamLimits

0xd403,	// (0x00024568) vid6_image_uncrop_vga_pane

0xd422,	// (0x00024587) vid6_image_uncrop_wvga_pane_ParamLimits

0xd422,	// (0x00024587) vid6_image_uncrop_wvga_pane

0xd43f,	// (0x000245a4) vid6_indi_pane_ParamLimits

0xd43f,	// (0x000245a4) vid6_indi_pane

0x4583,	// (0x0001b6e8) bg_tb_trans_pane_cp09_ParamLimits

0x4583,	// (0x0001b6e8) bg_tb_trans_pane_cp09

0x465b,	// (0x0001b7c0) cam6_battery_pane_cp_ParamLimits

0x465b,	// (0x0001b7c0) cam6_battery_pane_cp

0x4667,	// (0x0001b7cc) vid6_indi_pane_g1_ParamLimits

0x4667,	// (0x0001b7cc) vid6_indi_pane_g1

0x4679,	// (0x0001b7de) vid6_indi_pane_g2_ParamLimits

0x4679,	// (0x0001b7de) vid6_indi_pane_g2

0x468b,	// (0x0001b7f0) vid6_indi_pane_g3_ParamLimits

0x468b,	// (0x0001b7f0) vid6_indi_pane_g3

0x46a0,	// (0x0001b805) vid6_indi_pane_g4_ParamLimits

0x46a0,	// (0x0001b805) vid6_indi_pane_g4

0x46b5,	// (0x0001b81a) vid6_indi_pane_g5_ParamLimits

0x46b5,	// (0x0001b81a) vid6_indi_pane_g5

0x0004,

0xfb89,	// (0x00026cee) vid6_indi_pane_g_ParamLimits

0xfb89,	// (0x00026cee) vid6_indi_pane_g

0x46cf,	// (0x0001b834) vid6_indi_pane_t1_ParamLimits

0x46cf,	// (0x0001b834) vid6_indi_pane_t1

0x46e5,	// (0x0001b84a) vid6_indi_pane_t2_ParamLimits

0x46e5,	// (0x0001b84a) vid6_indi_pane_t2

0x470d,	// (0x0001b872) vid6_indi_pane_t3_ParamLimits

0x470d,	// (0x0001b872) vid6_indi_pane_t3

0x4735,	// (0x0001b89a) vid6_indi_pane_t4_ParamLimits

0x4735,	// (0x0001b89a) vid6_indi_pane_t4

0x0003,

0xfb94,	// (0x00026cf9) vid6_indi_pane_t_ParamLimits

0xfb94,	// (0x00026cf9) vid6_indi_pane_t

0x4759,	// (0x0001b8be) wait_bar_pane_cp08

0xd464,	// (0x000245c9) main_cset_text2_pane_t1_ParamLimits

0xd464,	// (0x000245c9) main_cset_text2_pane_t1

0xd379,	// (0x000244de) listscroll_gen_pane_cp06_t1_ParamLimits

0xd379,	// (0x000244de) listscroll_gen_pane_cp06_t1

0x6f79,	// (0x0001e0de) main_cam6_set_pane

0x7e51,	// (0x0001efb6) bg_tb_trans_pane_cp06_ParamLimits

0x7e67,	// (0x0001efcc) cam4_indicators_pane_g1_ParamLimits

0x7e78,	// (0x0001efdd) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x00026a67) cam4_indicators_pane_g_ParamLimits

0x7e96,	// (0x0001effb) cam4_indicators_pane_t1_ParamLimits

0x741f,	// (0x0001e584) bg_tb_trans_pane_cp07_ParamLimits

0x7f49,	// (0x0001f0ae) vid4_indicators_pane_g1_ParamLimits

0x7f5d,	// (0x0001f0c2) vid4_indicators_pane_g2_ParamLimits

0x7f71,	// (0x0001f0d6) vid4_indicators_pane_g3_ParamLimits

0x7f82,	// (0x0001f0e7) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x00026a79) vid4_indicators_pane_g_ParamLimits

0x7fa0,	// (0x0001f105) vid4_indicators_pane_t1_ParamLimits

0x8431,	// (0x0001f596) vid4_progress_pane_g1_ParamLimits

0x8443,	// (0x0001f5a8) vid4_progress_pane_g2_ParamLimits

0x0fd4,	// (0x00018139) vid4_progress_pane_g3_ParamLimits

0x8453,	// (0x0001f5b8) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x00026c2a) vid4_progress_pane_g_ParamLimits

0x8471,	// (0x0001f5d6) vid4_progress_pane_t1_ParamLimits

0x8486,	// (0x0001f5eb) vid4_progress_pane_t2_ParamLimits

0x849c,	// (0x0001f601) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x00026c35) vid4_progress_pane_t_ParamLimits

0x84b1,	// (0x0001f616) wait_bar_pane_cp07_ParamLimits

0xd497,	// (0x000245fc) main_cam6_set_pane_g2_ParamLimits

0xd497,	// (0x000245fc) main_cam6_set_pane_g2

0xd4a3,	// (0x00024608) main_cset6_listscroll_pane_ParamLimits

0xd4a3,	// (0x00024608) main_cset6_listscroll_pane

0xd4ce,	// (0x00024633) main_cset6_slider_pane_ParamLimits

0xd4ce,	// (0x00024633) main_cset6_slider_pane

0xd4da,	// (0x0002463f) main_cset6_text2_pane_ParamLimits

0xd4da,	// (0x0002463f) main_cset6_text2_pane

0x4768,	// (0x0001b8cd) main_cset6_text_pane

0x4770,	// (0x0001b8d5) main_cset_list_pane_copy1_ParamLimits

0x4770,	// (0x0001b8d5) main_cset_list_pane_copy1

0x4780,	// (0x0001b8e5) scroll_pane_cp028_copy1

0xd4ed,	// (0x00024652) cset_list_set_pane_copy1

0xd500,	// (0x00024665) aid_position_infowindow_above_copy1

0xd508,	// (0x0002466d) aid_position_infowindow_below_copy1

0xd510,	// (0x00024675) cset_list_set_pane_g1_copy1

0x3ee8,	// (0x0001b04d) cset_list_set_pane_g3_copy1_ParamLimits

0x3ee8,	// (0x0001b04d) cset_list_set_pane_g3_copy1

0x3ef7,	// (0x0001b05c) cset_list_set_pane_t1_copy1_ParamLimits

0x3ef7,	// (0x0001b05c) cset_list_set_pane_t1_copy1

0x0056,	// (0x000171bb) list_highlight_pane_cp021_copy1_ParamLimits

0x0056,	// (0x000171bb) list_highlight_pane_cp021_copy1

0x4789,	// (0x0001b8ee) cset6_slider_pane_ParamLimits

0x4789,	// (0x0001b8ee) cset6_slider_pane

0x47b5,	// (0x0001b91a) main_cset6_slider_pane_g1_ParamLimits

0x47b5,	// (0x0001b91a) main_cset6_slider_pane_g1

0xd518,	// (0x0002467d) main_cset6_slider_pane_g2_ParamLimits

0xd518,	// (0x0002467d) main_cset6_slider_pane_g2

0x47dd,	// (0x0001b942) main_cset6_slider_pane_g3_ParamLimits

0x47dd,	// (0x0001b942) main_cset6_slider_pane_g3

0xd540,	// (0x000246a5) main_cset6_slider_pane_g4_ParamLimits

0xd540,	// (0x000246a5) main_cset6_slider_pane_g4

0xd54c,	// (0x000246b1) main_cset6_slider_pane_g5_ParamLimits

0xd54c,	// (0x000246b1) main_cset6_slider_pane_g5

0x3e18,	// (0x0001af7d) main_cset6_slider_pane_g7_ParamLimits

0x3e18,	// (0x0001af7d) main_cset6_slider_pane_g7

0x3e24,	// (0x0001af89) main_cset6_slider_pane_g8_ParamLimits

0x3e24,	// (0x0001af89) main_cset6_slider_pane_g8

0xd55a,	// (0x000246bf) main_cset6_slider_pane_g9_ParamLimits

0xd55a,	// (0x000246bf) main_cset6_slider_pane_g9

0xd566,	// (0x000246cb) main_cset6_slider_pane_g10_ParamLimits

0xd566,	// (0x000246cb) main_cset6_slider_pane_g10

0xd572,	// (0x000246d7) main_cset6_slider_pane_g11_ParamLimits

0xd572,	// (0x000246d7) main_cset6_slider_pane_g11

0xd57e,	// (0x000246e3) main_cset6_slider_pane_g12_ParamLimits

0xd57e,	// (0x000246e3) main_cset6_slider_pane_g12

0xd58a,	// (0x000246ef) main_cset6_slider_pane_g13_ParamLimits

0xd58a,	// (0x000246ef) main_cset6_slider_pane_g13

0xd596,	// (0x000246fb) main_cset6_slider_pane_g14_ParamLimits

0xd596,	// (0x000246fb) main_cset6_slider_pane_g14

0xd5a2,	// (0x00024707) main_cset6_slider_pane_g15_ParamLimits

0xd5a2,	// (0x00024707) main_cset6_slider_pane_g15

0xd5ba,	// (0x0002471f) main_cset6_slider_pane_g16_ParamLimits

0xd5ba,	// (0x0002471f) main_cset6_slider_pane_g16

0xd5c8,	// (0x0002472d) main_cset6_slider_pane_g17_ParamLimits

0xd5c8,	// (0x0002472d) main_cset6_slider_pane_g17

0x0011,

0xfb9d,	// (0x00026d02) main_cset6_slider_pane_g_ParamLimits

0xfb9d,	// (0x00026d02) main_cset6_slider_pane_g

0x47e9,	// (0x0001b94e) main_cset6_slider_pane_t1_ParamLimits

0x47e9,	// (0x0001b94e) main_cset6_slider_pane_t1

0xd5ee,	// (0x00024753) main_cset6_slider_pane_t2_ParamLimits

0xd5ee,	// (0x00024753) main_cset6_slider_pane_t2

0xd619,	// (0x0002477e) main_cset6_slider_pane_t3_ParamLimits

0xd619,	// (0x0002477e) main_cset6_slider_pane_t3

0xd644,	// (0x000247a9) main_cset6_slider_pane_t4_ParamLimits

0xd644,	// (0x000247a9) main_cset6_slider_pane_t4

0xd66f,	// (0x000247d4) main_cset6_slider_pane_t5_ParamLimits

0xd66f,	// (0x000247d4) main_cset6_slider_pane_t5

0x482a,	// (0x0001b98f) main_cset6_slider_pane_t7_ParamLimits

0x482a,	// (0x0001b98f) main_cset6_slider_pane_t7

0xd69c,	// (0x00024801) main_cset6_slider_pane_t8_ParamLimits

0xd69c,	// (0x00024801) main_cset6_slider_pane_t8

0xd6c0,	// (0x00024825) main_cset6_slider_pane_t9_ParamLimits

0xd6c0,	// (0x00024825) main_cset6_slider_pane_t9

0xd6e4,	// (0x00024849) main_cset6_slider_pane_t10_ParamLimits

0xd6e4,	// (0x00024849) main_cset6_slider_pane_t10

0xd708,	// (0x0002486d) main_cset6_slider_pane_t11_ParamLimits

0xd708,	// (0x0002486d) main_cset6_slider_pane_t11

0x4860,	// (0x0001b9c5) main_cset6_slider_pane_t14_ParamLimits

0x4860,	// (0x0001b9c5) main_cset6_slider_pane_t14

0x4899,	// (0x0001b9fe) main_cset6_slider_pane_t15_ParamLimits

0x4899,	// (0x0001b9fe) main_cset6_slider_pane_t15

0x000b,

0xfbc2,	// (0x00026d27) main_cset6_slider_pane_t_ParamLimits

0xfbc2,	// (0x00026d27) main_cset6_slider_pane_t

0x3f2c,	// (0x0001b091) cset_slider_pane_g1_copy1

0x3f35,	// (0x0001b09a) cset_slider_pane_g2_copy1

0x3f3e,	// (0x0001b0a3) cset_slider_pane_g3_copy1

0xf0ce,	// (0x00026233) bg_popup_sub_pane_cp011_copy1

0x49a3,	// (0x0001bb08) main_cset_text_pane_g1_copy1

0x402b,	// (0x0001b190) main_cset_text_pane_t1_copy1

0x4039,	// (0x0001b19e) main_cset_text_pane_t2_copy1

0x4047,	// (0x0001b1ac) main_cset_text_pane_t3_copy1

0x4055,	// (0x0001b1ba) main_cset_text_pane_t4_copy1

0x4063,	// (0x0001b1c8) main_cset_text_pane_t5_copy1

0x49ab,	// (0x0001bb10) main_cset_text_pane_t6_copy1

0x49b9,	// (0x0001bb1e) main_cset_text_pane_t7_copy1

0xd72c,	// (0x00024891) main_cset_text2_pane_t1_copy1

0x741f,	// (0x0001e584) main_ncimui_pane

0x747e,	// (0x0001e5e3) popup_query_ncimui_window_ParamLimits

0x747e,	// (0x0001e5e3) popup_query_ncimui_window

0x3194,	// (0x0001a2f9) field_cale_ev2_pane_g4_ParamLimits

0x3194,	// (0x0001a2f9) field_cale_ev2_pane_g4

0xc2fe,	// (0x00023463) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc2fe,	// (0x00023463) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x00026a05) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x00026a05) cell_video_dialer_keypad_pane_g

0xc316,	// (0x0002347b) cell_video_dialer_keypad_pane_t1

0xf0ce,	// (0x00026233) bg_popup_window_pane_cp012

0x1294,	// (0x000183f9) heading_pane_cp06

0x49e5,	// (0x0001bb4a) ncim_query_content_pane

0xf0ce,	// (0x00026233) bg_popup_heading_pane_cp01

0x49ed,	// (0x0001bb52) ncim_heading_pane_t1

0x49fb,	// (0x0001bb60) ncim_indicator_popup_pane

0x4a0d,	// (0x0001bb72) ncim_query_button_pane

0x4a21,	// (0x0001bb86) ncim_query_content_pane_t1

0x4a33,	// (0x0001bb98) ncim_query_content_pane_t2

0x0005,

0xfc06,	// (0x00026d6b) ncim_query_content_pane_t

0x4a6d,	// (0x0001bbd2) ncim_query_list_pane

0x4a7f,	// (0x0001bbe4) ncim_query_popup_pane

0x49fb,	// (0x0001bb60) ncim_indicator_popup_pane_ParamLimits

0xd87f,	// (0x000249e4) ncim_query_content_pane_g1_ParamLimits

0xd87f,	// (0x000249e4) ncim_query_content_pane_g1

0x4a21,	// (0x0001bb86) ncim_query_content_pane_t1_ParamLimits

0x4a33,	// (0x0001bb98) ncim_query_content_pane_t2_ParamLimits

0xd88b,	// (0x000249f0) ncim_query_content_pane_t3_ParamLimits

0xd88b,	// (0x000249f0) ncim_query_content_pane_t3

0xd8a8,	// (0x00024a0d) ncim_query_content_pane_t4_ParamLimits

0xd8a8,	// (0x00024a0d) ncim_query_content_pane_t4

0xd8c5,	// (0x00024a2a) ncim_query_content_pane_t5_ParamLimits

0xd8c5,	// (0x00024a2a) ncim_query_content_pane_t5

0x4a45,	// (0x0001bbaa) ncim_query_content_pane_t6_ParamLimits

0x4a45,	// (0x0001bbaa) ncim_query_content_pane_t6

0xfc06,	// (0x00026d6b) ncim_query_content_pane_t_ParamLimits

0x4a6d,	// (0x0001bbd2) ncim_query_list_pane_ParamLimits

0x4a7f,	// (0x0001bbe4) ncim_query_popup_pane_ParamLimits

0x4a93,	// (0x0001bbf8) wait_bar_pane_cp04

0xf0ce,	// (0x00026233) input_focus_pane_cp011

0x4a9b,	// (0x0001bc00) ncim_query_popup_pane_t1

0x4aa9,	// (0x0001bc0e) ncim_list_query_list_pane_ParamLimits

0x4aa9,	// (0x0001bc0e) ncim_list_query_list_pane

0xf0ce,	// (0x00026233) bg_button_pane_cp027

0x4ab6,	// (0x0001bc1b) ncim_query_button_pane_g1

0xf0ce,	// (0x00026233) list_highlight_pane_cp012

0x4ac0,	// (0x0001bc25) ncim_list_query_list_pane_g1

0x4ac8,	// (0x0001bc2d) ncim_list_query_list_pane_t1

0x7e87,	// (0x0001efec) cam4_indicators_pane_g3_ParamLimits

0x7e87,	// (0x0001efec) cam4_indicators_pane_g3

0x7f8e,	// (0x0001f0f3) vid4_indicators_pane_g5_ParamLimits

0x7f8e,	// (0x0001f0f3) vid4_indicators_pane_g5

0x8462,	// (0x0001f5c7) vid4_progress_pane_g5_ParamLimits

0x8462,	// (0x0001f5c7) vid4_progress_pane_g5

0xd76b,	// (0x000248d0) main_ncimui_pane_g1

0xd7d3,	// (0x00024938) ncimui_group_query_pane_ParamLimits

0xd7d3,	// (0x00024938) ncimui_group_query_pane

0xd81b,	// (0x00024980) ncimui_list_pane_ParamLimits

0xd81b,	// (0x00024980) ncimui_list_pane

0xd842,	// (0x000249a7) ncimui_text_pane_ParamLimits

0xd842,	// (0x000249a7) ncimui_text_pane

0xd8e2,	// (0x00024a47) ncimui_text_pane_t1_ParamLimits

0xd8e2,	// (0x00024a47) ncimui_text_pane_t1

0x4ad6,	// (0x0001bc3b) ncimui_list_single_graphic_pane_ParamLimits

0x4ad6,	// (0x0001bc3b) ncimui_list_single_graphic_pane

0xd901,	// (0x00024a66) ncimui_query_pane_ParamLimits

0xd901,	// (0x00024a66) ncimui_query_pane

0xf0ce,	// (0x00026233) list_highlight_pane_cp013

0x4ae6,	// (0x0001bc4b) ncim_list_query_list_pane_t1_copy1

0x4ac0,	// (0x0001bc25) ncim_list_single_graphic_pane_g1

0x4af4,	// (0x0001bc59) ncim_query_button_pane_cp01

0x4b00,	// (0x0001bc65) ncim_query_entry_pane_ParamLimits

0x4b00,	// (0x0001bc65) ncim_query_entry_pane

0x4b13,	// (0x0001bc78) ncimui_query_pane_g1

0x4b1f,	// (0x0001bc84) ncimui_query_pane_t1_ParamLimits

0x4b1f,	// (0x0001bc84) ncimui_query_pane_t1

0x0056,	// (0x000171bb) input_focus_pane_cp012

0x4b38,	// (0x0001bc9d) ncim_query_entry_pane_t1

0x07c7,	// (0x0001792c) main_im_pane_ParamLimits

0x741f,	// (0x0001e584) main_mobtv_pane_ParamLimits

0x741f,	// (0x0001e584) main_mobtv_pane

0xd5d6,	// (0x0002473b) main_cset6_slider_pane_g18_ParamLimits

0xd5d6,	// (0x0002473b) main_cset6_slider_pane_g18

0xd5e2,	// (0x00024747) main_cset6_slider_pane_g19_ParamLimits

0xd5e2,	// (0x00024747) main_cset6_slider_pane_g19

0x3c7d,	// (0x0001ade2) bg_main_mobtv_pane_ParamLimits

0x3c7d,	// (0x0001ade2) bg_main_mobtv_pane

0xd914,	// (0x00024a79) main_mobtv_info_pane

0xd91f,	// (0x00024a84) main_mobtv_loading_pane_ParamLimits

0xd91f,	// (0x00024a84) main_mobtv_loading_pane

0x4b58,	// (0x0001bcbd) main_mobtv_pg_channel_list_pane

0x4b62,	// (0x0001bcc7) main_mobtv_pg_hdr_pane

0xd92c,	// (0x00024a91) main_mobtv_programe_curr_pane_ParamLimits

0xd92c,	// (0x00024a91) main_mobtv_programe_curr_pane

0xd939,	// (0x00024a9e) main_mobtv_programe_next_pane_ParamLimits

0xd939,	// (0x00024a9e) main_mobtv_programe_next_pane

0x4b6b,	// (0x0001bcd0) popup_mobtv_noti_window

0x2ec3,	// (0x0001a028) main_tv_pg_hdr_pane_g1

0x4b73,	// (0x0001bcd8) main_tv_pg_hdr_pane_g2

0x4b7b,	// (0x0001bce0) main_tv_pg_hdr_pane_g3

0x4b83,	// (0x0001bce8) main_tv_pg_hdr_pane_g4

0x4b8b,	// (0x0001bcf0) main_tv_pg_hdr_pane_g5

0x4b95,	// (0x0001bcfa) main_tv_pg_hdr_pane_g6

0x4b9f,	// (0x0001bd04) main_tv_pg_hdr_pane_g7

0x4ba9,	// (0x0001bd0e) main_tv_pg_hdr_pane_g8

0x4bb3,	// (0x0001bd18) main_tv_pg_hdr_pane_g9

0x4bbd,	// (0x0001bd22) main_tv_pg_hdr_pane_g10

0x4bc7,	// (0x0001bd2c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc13,	// (0x00026d78) main_tv_pg_hdr_pane_g

0x4bd1,	// (0x0001bd36) main_tv_pg_hdr_pane_t1

0x4bdf,	// (0x0001bd44) main_tv_pg_hdr_pane_t2

0x4bed,	// (0x0001bd52) main_tv_pg_hdr_pane_t3

0x4bfd,	// (0x0001bd62) main_tv_pg_hdr_pane_t4

0x4c0d,	// (0x0001bd72) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2a,	// (0x00026d8f) main_tv_pg_hdr_pane_t

0x4c1d,	// (0x0001bd82) single_mobtv_pg_channel_pane_ParamLimits

0x4c1d,	// (0x0001bd82) single_mobtv_pg_channel_pane

0x4c2f,	// (0x0001bd94) single_mobtv_pg_channel_table_pane

0x4c38,	// (0x0001bd9d) single_mobtv_pg_channel_thumb_pane

0x4c41,	// (0x0001bda6) single_tv_pg_channel_pane_g1

0x4c4a,	// (0x0001bdaf) single_tv_pg_channel_pane_g2

0x0001,

0xfc35,	// (0x00026d9a) single_tv_pg_channel_pane_g

0x312f,	// (0x0001a294) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x312f,	// (0x0001a294) bg_single_mobtv_pg_channel_thumb_pane

0x4c53,	// (0x0001bdb8) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4c53,	// (0x0001bdb8) single_mobtv_pg_channel_thumb_pane_g1

0x4c61,	// (0x0001bdc6) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4c61,	// (0x0001bdc6) single_mobtv_pg_channel_thumb_pane_g2

0x4c6d,	// (0x0001bdd2) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4c6d,	// (0x0001bdd2) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3a,	// (0x00026d9f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3a,	// (0x00026d9f) single_mobtv_pg_channel_thumb_pane_g

0x4c79,	// (0x0001bdde) single_mobtv_pg_channel_thumb_pane_t1

0x4c87,	// (0x0001bdec) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc41,	// (0x00026da6) single_mobtv_pg_channel_thumb_pane_t

0x2ec3,	// (0x0001a028) bg_single_mobtv_pg_channel_table_pane_g1

0x2ec3,	// (0x0001a028) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x00026851) bg_single_mobtv_pg_channel_table_pane_g

0x4c95,	// (0x0001bdfa) single_mobtv_pg_channel_table_pane_t1

0x4ca3,	// (0x0001be08) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc46,	// (0x00026dab) single_mobtv_pg_channel_table_pane_t

0xd94e,	// (0x00024ab3) main_mobtv_info_pane_g1_ParamLimits

0xd94e,	// (0x00024ab3) main_mobtv_info_pane_g1

0xd96a,	// (0x00024acf) main_mobtv_info_pane_t1_ParamLimits

0xd96a,	// (0x00024acf) main_mobtv_info_pane_t1

0xd9e2,	// (0x00024b47) main_mobtv_info_pane_t2_ParamLimits

0xd9e2,	// (0x00024b47) main_mobtv_info_pane_t2

0x0002,

0xfc50,	// (0x00026db5) main_mobtv_info_pane_t_ParamLimits

0xfc50,	// (0x00026db5) main_mobtv_info_pane_t

0xda71,	// (0x00024bd6) wait_bar_pane_cp05

0xda83,	// (0x00024be8) main_mobtv_loading_pane_g1_ParamLimits

0xda83,	// (0x00024be8) main_mobtv_loading_pane_g1

0xda91,	// (0x00024bf6) main_mobtv_loading_pane_g2_ParamLimits

0xda91,	// (0x00024bf6) main_mobtv_loading_pane_g2

0xda9d,	// (0x00024c02) main_mobtv_loading_pane_g3_ParamLimits

0xda9d,	// (0x00024c02) main_mobtv_loading_pane_g3

0x0002,

0xfc57,	// (0x00026dbc) main_mobtv_loading_pane_g_ParamLimits

0xfc57,	// (0x00026dbc) main_mobtv_loading_pane_g

0x4cb1,	// (0x0001be16) main_mobtv_loading_pane_t1_ParamLimits

0x4cb1,	// (0x0001be16) main_mobtv_loading_pane_t1

0x4cc9,	// (0x0001be2e) main_mobtv_loading_pane_t2_ParamLimits

0x4cc9,	// (0x0001be2e) main_mobtv_loading_pane_t2

0x0001,

0xfc5e,	// (0x00026dc3) main_mobtv_loading_pane_t_ParamLimits

0xfc5e,	// (0x00026dc3) main_mobtv_loading_pane_t

0xdaab,	// (0x00024c10) wait_bar_pane_cp06_ParamLimits

0xdaab,	// (0x00024c10) wait_bar_pane_cp06

0x4ced,	// (0x0001be52) main_mobtv_programe_curr_pane_t1

0x4cfb,	// (0x0001be60) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc63,	// (0x00026dc8) main_mobtv_programe_curr_pane_t

0x4d09,	// (0x0001be6e) main_mobtv_programe_next_pane_t1

0x4d17,	// (0x0001be7c) main_mobtv_programe_next_pane_t2

0x4d25,	// (0x0001be8a) main_mobtv_programe_next_pane_t3

0x0002,

0xfc68,	// (0x00026dcd) main_mobtv_programe_next_pane_t

0xf0ce,	// (0x00026233) bg_popup_mobtv_noti_window_pane

0x4d33,	// (0x0001be98) popup_mobtv_noti_window_g1

0x4d3b,	// (0x0001bea0) popup_mobtv_noti_window_t1

0x4d49,	// (0x0001beae) popup_mobtv_noti_window_t2

0x0001,

0xfc6f,	// (0x00026dd4) popup_mobtv_noti_window_t

0x2ec3,	// (0x0001a028) bg_popup_mobtv_noti_window_pane_g1

0x6f79,	// (0x0001e0de) sc_clock_pane

0x6f79,	// (0x0001e0de) main_fs_bigclock_pane

0xd1f4,	// (0x00024359) blid2_tripm_pane_t4_ParamLimits

0xd1f4,	// (0x00024359) blid2_tripm_pane_t4

0xdab7,	// (0x00024c1c) sc_clock_pane_g1_ParamLimits

0xdab7,	// (0x00024c1c) sc_clock_pane_g1

0xdac5,	// (0x00024c2a) sc_clock_pane_t1_ParamLimits

0xdac5,	// (0x00024c2a) sc_clock_pane_t1

0xdad8,	// (0x00024c3d) sc_clock_pane_t2_ParamLimits

0xdad8,	// (0x00024c3d) sc_clock_pane_t2

0xdaea,	// (0x00024c4f) sc_clock_pane_t3_ParamLimits

0xdaea,	// (0x00024c4f) sc_clock_pane_t3

0x0004,

0xfc74,	// (0x00026dd9) sc_clock_pane_t_ParamLimits

0xfc74,	// (0x00026dd9) sc_clock_pane_t

0xe804,	// (0x00025969) main_fs_bigclock_indicator_pane_ParamLimits

0xe804,	// (0x00025969) main_fs_bigclock_indicator_pane

0xdb77,	// (0x00024cdc) main_fs_bigclock_pane_g1_ParamLimits

0xdb77,	// (0x00024cdc) main_fs_bigclock_pane_g1

0xe810,	// (0x00025975) main_fs_bigclock_pane_t1_ParamLimits

0xe810,	// (0x00025975) main_fs_bigclock_pane_t1

0xe822,	// (0x00025987) main_fs_bigclock_pane_t2_ParamLimits

0xe822,	// (0x00025987) main_fs_bigclock_pane_t2

0xe836,	// (0x0002599b) main_fs_bigclock_pane_t3_ParamLimits

0xe836,	// (0x0002599b) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00026fd8) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00026fd8) main_fs_bigclock_pane_t

0x5984,	// (0x0001cae9) main_fs_bigclock_indicator_pane_g1

0x4a15,	// (0x0001bb7a) ncim_query_content_pane_g2_ParamLimits

0x4a15,	// (0x0001bb7a) ncim_query_content_pane_g2

0x0001,

0xfc01,	// (0x00026d66) ncim_query_content_pane_g_ParamLimits

0xfc01,	// (0x00026d66) ncim_query_content_pane_g

0xdafe,	// (0x00024c63) sc_clock_pane_t4_ParamLimits

0xdafe,	// (0x00024c63) sc_clock_pane_t4

0x741f,	// (0x0001e584) main_radioblah_pane

0x3ae9,	// (0x0001ac4e) cell_call4_button_pane_t1_copy1_ParamLimits

0x3ae9,	// (0x0001ac4e) cell_call4_button_pane_t1_copy1

0xd785,	// (0x000248ea) main_ncimui_pane_t1_ParamLimits

0xd785,	// (0x000248ea) main_ncimui_pane_t1

0xd79f,	// (0x00024904) main_ncimui_pane_t2_ParamLimits

0xd79f,	// (0x00024904) main_ncimui_pane_t2

0x0002,

0xfbfa,	// (0x00026d5f) main_ncimui_pane_t_ParamLimits

0xfbfa,	// (0x00026d5f) main_ncimui_pane_t

0x4e8f,	// (0x0001bff4) main_radioblah_anim_pane_ParamLimits

0x4e8f,	// (0x0001bff4) main_radioblah_anim_pane

0x4ea0,	// (0x0001c005) main_radioblah_info_pane_ParamLimits

0x4ea0,	// (0x0001c005) main_radioblah_info_pane

0x4eb4,	// (0x0001c019) main_radioblah_pane_t1_ParamLimits

0x4eb4,	// (0x0001c019) main_radioblah_pane_t1

0x4ed0,	// (0x0001c035) main_radioblah_pane_t2_ParamLimits

0x4ed0,	// (0x0001c035) main_radioblah_pane_t2

0x0003,

0xfc95,	// (0x00026dfa) main_radioblah_pane_t_ParamLimits

0xfc95,	// (0x00026dfa) main_radioblah_pane_t

0xdbc9,	// (0x00024d2e) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdbc9,	// (0x00024d2e) main_radioblah_rocker_ctrl_pane

0x4f18,	// (0x0001c07d) main_radioblah_info_pane_t1_ParamLimits

0x4f18,	// (0x0001c07d) main_radioblah_info_pane_t1

0xdc0e,	// (0x00024d73) main_radioblah_info_pane_t2_ParamLimits

0xdc0e,	// (0x00024d73) main_radioblah_info_pane_t2

0x0003,

0xfc9e,	// (0x00026e03) main_radioblah_info_pane_t_ParamLimits

0xfc9e,	// (0x00026e03) main_radioblah_info_pane_t

0x2ec3,	// (0x0001a028) main_radioblah_rocker_ctrl_pane_g1

0xdcbe,	// (0x00024e23) main_radioblah_rocker_ctrl_pane_g2

0xdcc6,	// (0x00024e2b) main_radioblah_rocker_ctrl_pane_g3

0xdcce,	// (0x00024e33) main_radioblah_rocker_ctrl_pane_g4

0xdcd6,	// (0x00024e3b) main_radioblah_rocker_ctrl_pane_g5

0xdcde,	// (0x00024e43) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca7,	// (0x00026e0c) main_radioblah_rocker_ctrl_pane_g

0xd72c,	// (0x00024891) main_cset_text2_pane_t1_copy1_ParamLimits

0x7dcb,	// (0x0001ef30) cam4_image_uncrop_qvga_pane

0x7efc,	// (0x0001f061) vid4_image_uncrop_qcif_pane

0x8504,	// (0x0001f669) cam6_image_uncrop_qvga_pane_ParamLimits

0x8504,	// (0x0001f669) cam6_image_uncrop_qvga_pane

0x464b,	// (0x0001b7b0) vid6_image_uncrop_qcif_pane_ParamLimits

0x464b,	// (0x0001b7b0) vid6_image_uncrop_qcif_pane

0xf0ce,	// (0x00026233) bg_popup_preview_window_pane_cp03

0x49c7,	// (0x0001bb2c) list_cset_text2_pane

0x49cf,	// (0x0001bb34) main_cset6_text2_pane_g1

0x49d7,	// (0x0001bb3c) main_cset6_text2_pane_t1

0xdce6,	// (0x00024e4b) list_cset_text2_pane_t1_ParamLimits

0xdce6,	// (0x00024e4b) list_cset_text2_pane_t1

0x741f,	// (0x0001e584) main_radioblah_pane_ParamLimits

0xda5d,	// (0x00024bc2) main_mobtv_info_pane_t3_ParamLimits

0xda5d,	// (0x00024bc2) main_mobtv_info_pane_t3

0xdbb7,	// (0x00024d1c) main_radioblah_pane_g1

0xdbe2,	// (0x00024d47) main_radioblah_info_pane_g1

0xdc63,	// (0x00024dc8) main_radioblah_info_pane_t3_ParamLimits

0xdc63,	// (0x00024dc8) main_radioblah_info_pane_t3

0x9d80,	// (0x00020ee5) highlight_cell_cale_month_pane_ParamLimits

0x9d80,	// (0x00020ee5) highlight_cell_cale_month_pane

0x6f79,	// (0x0001e0de) main_phob_fisheye_pane

0x3223,	// (0x0001a388) scroll_pane_cp0031_ParamLimits

0x3223,	// (0x0001a388) scroll_pane_cp0031

0x4759,	// (0x0001b8be) wait_bar_pane_cp08_ParamLimits

0xd4ed,	// (0x00024652) cset_list_set_pane_copy1_ParamLimits

0x4f52,	// (0x0001c0b7) highlight_cell_cale_month_pane_g1

0xdd03,	// (0x00024e68) highlight_cell_cale_month_pane_t1

0x42f3,	// (0x0001b458) list_gen_pane_cp01

0x3e03,	// (0x0001af68) scroll_pane_01

0xdd11,	// (0x00024e76) list_single_double_fisheye_pane

0xdd1a,	// (0x00024e7f) list_double_fisheye_pane_g1_ParamLimits

0xdd1a,	// (0x00024e7f) list_double_fisheye_pane_g1

0xdd26,	// (0x00024e8b) list_double_fisheye_pane_g2_ParamLimits

0xdd26,	// (0x00024e8b) list_double_fisheye_pane_g2

0xdd3a,	// (0x00024e9f) list_double_fisheye_pane_g3_ParamLimits

0xdd3a,	// (0x00024e9f) list_double_fisheye_pane_g3

0x0004,

0xfcb4,	// (0x00026e19) list_double_fisheye_pane_g_ParamLimits

0xfcb4,	// (0x00026e19) list_double_fisheye_pane_g

0xdd63,	// (0x00024ec8) list_double_fisheye_pane_t1_ParamLimits

0xdd63,	// (0x00024ec8) list_double_fisheye_pane_t1

0xdd7e,	// (0x00024ee3) list_double_fisheye_pane_t2_ParamLimits

0xdd7e,	// (0x00024ee3) list_double_fisheye_pane_t2

0x0001,

0xfcbf,	// (0x00026e24) list_double_fisheye_pane_t_ParamLimits

0xfcbf,	// (0x00026e24) list_double_fisheye_pane_t

0x6f79,	// (0x0001e0de) main_call5_pane

0xdb24,	// (0x00024c89) sc_swipe_pane_ParamLimits

0xdb24,	// (0x00024c89) sc_swipe_pane

0xddac,	// (0x00024f11) call5_image_pane_ParamLimits

0xddac,	// (0x00024f11) call5_image_pane

0xddbc,	// (0x00024f21) call5_swipe_1_pane_ParamLimits

0xddbc,	// (0x00024f21) call5_swipe_1_pane

0xddc8,	// (0x00024f2d) call5_swipe_2_pane_ParamLimits

0xddc8,	// (0x00024f2d) call5_swipe_2_pane

0xdde2,	// (0x00024f47) popup_call5_audio_first_window_ParamLimits

0xdde2,	// (0x00024f47) popup_call5_audio_first_window

0x312f,	// (0x0001a294) call5_swipe_1_pane_g1_ParamLimits

0x312f,	// (0x0001a294) call5_swipe_1_pane_g1

0x4f5a,	// (0x0001c0bf) call5_swipe_1_pane_g2_ParamLimits

0x4f5a,	// (0x0001c0bf) call5_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x00026e29) call5_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x00026e29) call5_swipe_1_pane_g

0x4f66,	// (0x0001c0cb) call5_swipe_1_pane_t1_ParamLimits

0x4f66,	// (0x0001c0cb) call5_swipe_1_pane_t1

0x312f,	// (0x0001a294) call5_swipe_2_pane_g1_ParamLimits

0x312f,	// (0x0001a294) call5_swipe_2_pane_g1

0x4f7b,	// (0x0001c0e0) call5_swipe_2_pane_g2_ParamLimits

0x4f7b,	// (0x0001c0e0) call5_swipe_2_pane_g2

0x0001,

0xfcc9,	// (0x00026e2e) call5_swipe_2_pane_g_ParamLimits

0xfcc9,	// (0x00026e2e) call5_swipe_2_pane_g

0x4f87,	// (0x0001c0ec) call5_swipe_2_pane_t1_ParamLimits

0x4f87,	// (0x0001c0ec) call5_swipe_2_pane_t1

0x4f9c,	// (0x0001c101) sc_swipe_pane_g1_ParamLimits

0x4f9c,	// (0x0001c101) sc_swipe_pane_g1

0x4fa9,	// (0x0001c10e) sc_swipe_pane_g2_ParamLimits

0x4fa9,	// (0x0001c10e) sc_swipe_pane_g2

0x0001,

0xfcce,	// (0x00026e33) sc_swipe_pane_g_ParamLimits

0xfcce,	// (0x00026e33) sc_swipe_pane_g

0x4fb5,	// (0x0001c11a) sc_swipe_pane_t1_ParamLimits

0x4fb5,	// (0x0001c11a) sc_swipe_pane_t1

0x6f79,	// (0x0001e0de) main_cmail_launcher_pane

0xddf0,	// (0x00024f55) aid_size_cell_cmail_l_ParamLimits

0xddf0,	// (0x00024f55) aid_size_cell_cmail_l

0xde00,	// (0x00024f65) grid_cmail_l_pane_ParamLimits

0xde00,	// (0x00024f65) grid_cmail_l_pane

0xde10,	// (0x00024f75) cell_cmail_l_pane_ParamLimits

0xde10,	// (0x00024f75) cell_cmail_l_pane

0xde24,	// (0x00024f89) cell_cmail_l_pane_g1_ParamLimits

0xde24,	// (0x00024f89) cell_cmail_l_pane_g1

0xde30,	// (0x00024f95) cell_cmail_l_pane_t1_ParamLimits

0xde30,	// (0x00024f95) cell_cmail_l_pane_t1

0x4fca,	// (0x0001c12f) cell_cmail_l_pane_t2_ParamLimits

0x4fca,	// (0x0001c12f) cell_cmail_l_pane_t2

0x0001,

0xfcd3,	// (0x00026e38) cell_cmail_l_pane_t_ParamLimits

0xfcd3,	// (0x00026e38) cell_cmail_l_pane_t

0x0056,	// (0x000171bb) grid_highlight_pane_cp018_ParamLimits

0x0056,	// (0x000171bb) grid_highlight_pane_cp018

0x6de7,	// (0x0001df4c) main2_pane_ParamLimits

0x6de7,	// (0x0001df4c) main2_pane

0x0884,	// (0x000179e9) popup_sp_fs_action_menu_bg_pane_g1

0x088c,	// (0x000179f1) popup_sp_fs_action_menu_bg_pane_g2

0x0894,	// (0x000179f9) popup_sp_fs_action_menu_bg_pane_g3

0x089c,	// (0x00017a01) popup_sp_fs_action_menu_bg_pane_g4

0x08a4,	// (0x00017a09) popup_sp_fs_action_menu_bg_pane_g5

0x08ac,	// (0x00017a11) popup_sp_fs_action_menu_bg_pane_g6

0x08b4,	// (0x00017a19) popup_sp_fs_action_menu_bg_pane_g7

0x08bc,	// (0x00017a21) popup_sp_fs_action_menu_bg_pane_g8

0x08c4,	// (0x00017a29) popup_sp_fs_action_menu_bg_pane_g9

0x08cc,	// (0x00017a31) popup_sp_fs_action_menu_bg_pane_g10

0x08cc,	// (0x00017a31) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x000262fd) popup_sp_fs_action_menu_bg_pane_g

0x0a40,	// (0x00017ba5) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0a40,	// (0x00017ba5) list_medium_line_x2_t3_g3_g1

0x0a4c,	// (0x00017bb1) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0a4c,	// (0x00017bb1) list_medium_line_x2_t3_g3_g2

0x0a58,	// (0x00017bbd) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0a58,	// (0x00017bbd) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x000263ad) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x000263ad) list_medium_line_x2_t3_g3_g

0x0a64,	// (0x00017bc9) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0a64,	// (0x00017bc9) list_medium_line_x2_t3_g3_t1

0x8f05,	// (0x0002006a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x8f05,	// (0x0002006a) list_medium_line_x2_t3_g3_t2

0x0a79,	// (0x00017bde) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0a79,	// (0x00017bde) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x000263b4) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x000263b4) list_medium_line_x2_t3_g3_t

0x0a40,	// (0x00017ba5) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0a40,	// (0x00017ba5) list_medium_line_x2_t3_g2_g1

0x0a58,	// (0x00017bbd) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0a58,	// (0x00017bbd) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x000263bb) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x000263bb) list_medium_line_x2_t3_g2_g

0x0a8e,	// (0x00017bf3) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0a8e,	// (0x00017bf3) list_medium_line_x2_t3_g2_t1

0x0aa4,	// (0x00017c09) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0aa4,	// (0x00017c09) list_medium_line_x2_t3_g2_t2

0x0a79,	// (0x00017bde) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0a79,	// (0x00017bde) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x000263c0) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x000263c0) list_medium_line_x2_t3_g2_t

0x0a40,	// (0x00017ba5) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0a40,	// (0x00017ba5) list_medium_line_x2_t4_g4_g1

0x0ab6,	// (0x00017c1b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0ab6,	// (0x00017c1b) list_medium_line_x2_t4_g4_g2

0x0a4c,	// (0x00017bb1) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0a4c,	// (0x00017bb1) list_medium_line_x2_t4_g4_g3

0x0ac2,	// (0x00017c27) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0ac2,	// (0x00017c27) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x000263c7) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x000263c7) list_medium_line_x2_t4_g4_g

0x8f17,	// (0x0002007c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x8f17,	// (0x0002007c) list_medium_line_x2_t4_g4_t1

0x8f31,	// (0x00020096) list_medium_line_x2_t4_g4_t2_ParamLimits

0x8f31,	// (0x00020096) list_medium_line_x2_t4_g4_t2

0x8f47,	// (0x000200ac) list_medium_line_x2_t4_g4_t3_ParamLimits

0x8f47,	// (0x000200ac) list_medium_line_x2_t4_g4_t3

0x0ace,	// (0x00017c33) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0ace,	// (0x00017c33) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x000263d0) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x000263d0) list_medium_line_x2_t4_g4_t

0x0a40,	// (0x00017ba5) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0a40,	// (0x00017ba5) list_medium_line_x2_t2_g4_g1

0x0ab6,	// (0x00017c1b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0ab6,	// (0x00017c1b) list_medium_line_x2_t2_g4_g2

0x0a4c,	// (0x00017bb1) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0a4c,	// (0x00017bb1) list_medium_line_x2_t2_g4_g3

0x0a58,	// (0x00017bbd) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0a58,	// (0x00017bbd) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x00026437) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x00026437) list_medium_line_x2_t2_g4_g

0x0db8,	// (0x00017f1d) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0db8,	// (0x00017f1d) list_medium_line_x2_t2_g4_t1

0x0a79,	// (0x00017bde) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0a79,	// (0x00017bde) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x00026440) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x00026440) list_medium_line_x2_t2_g4_t

0x0a40,	// (0x00017ba5) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0a40,	// (0x00017ba5) list_medium_line_x2_t2_g3_g1

0x0a4c,	// (0x00017bb1) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0a4c,	// (0x00017bb1) list_medium_line_x2_t2_g3_g2

0x0a58,	// (0x00017bbd) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0a58,	// (0x00017bbd) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x000263ad) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x000263ad) list_medium_line_x2_t2_g3_g

0x0dcd,	// (0x00017f32) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0dcd,	// (0x00017f32) list_medium_line_x2_t2_g3_t1

0x0a79,	// (0x00017bde) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0a79,	// (0x00017bde) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x00026445) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x00026445) list_medium_line_x2_t2_g3_t

0x9ee8,	// (0x0002104d) main_sp_fs_list_pane_ParamLimits

0x9ee8,	// (0x0002104d) main_sp_fs_list_pane

0x9ef4,	// (0x00021059) sp_fs_scroll_pane_ParamLimits

0x9ef4,	// (0x00021059) sp_fs_scroll_pane

0x9f00,	// (0x00021065) list_medium_line_x2_t3_t1

0x9f10,	// (0x00021075) list_medium_line_x2_t3_t2

0x1035,	// (0x0001819a) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x00026490) list_medium_line_x2_t3_t

0x9f1e,	// (0x00021083) list_medium_line_x3_t4_t1

0x9f2e,	// (0x00021093) list_medium_line_x3_t4_t2

0x1043,	// (0x000181a8) list_medium_line_x3_t4_t3

0x1035,	// (0x0001819a) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x00026497) list_medium_line_x3_t4_t

0x9f3c,	// (0x000210a1) list_medium_line_x4_t5_t1

0x9f4c,	// (0x000210b1) list_medium_line_x4_t5_t2

0x1043,	// (0x000181a8) list_medium_line_x4_t5_t3

0x1051,	// (0x000181b6) list_medium_line_x4_t5_t4

0x1035,	// (0x0001819a) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x000264a0) list_medium_line_x4_t5_t

0x0a40,	// (0x00017ba5) list_medium_line_t4_g4_g1_ParamLimits

0x0a40,	// (0x00017ba5) list_medium_line_t4_g4_g1

0x0ac2,	// (0x00017c27) list_medium_line_t4_g4_g2_ParamLimits

0x0ac2,	// (0x00017c27) list_medium_line_t4_g4_g2

0x105f,	// (0x000181c4) list_medium_line_t4_g4_g3_ParamLimits

0x105f,	// (0x000181c4) list_medium_line_t4_g4_g3

0x0a58,	// (0x00017bbd) list_medium_line_t4_g4_g4_ParamLimits

0x0a58,	// (0x00017bbd) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x000264ab) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x000264ab) list_medium_line_t4_g4_g

0x106b,	// (0x000181d0) list_medium_line_t4_g4_t1_ParamLimits

0x106b,	// (0x000181d0) list_medium_line_t4_g4_t1

0x1080,	// (0x000181e5) list_medium_line_t4_g4_t2_ParamLimits

0x1080,	// (0x000181e5) list_medium_line_t4_g4_t2

0x1095,	// (0x000181fa) list_medium_line_t4_g4_t3_ParamLimits

0x1095,	// (0x000181fa) list_medium_line_t4_g4_t3

0x0a79,	// (0x00017bde) list_medium_line_t4_g4_t4_ParamLimits

0x0a79,	// (0x00017bde) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x000264b4) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x000264b4) list_medium_line_t4_g4_t

0x9ff8,	// (0x0002115d) chi_dic_find_pane_g1

0x743b,	// (0x0001e5a0) main_tport_pane

0x3f78,	// (0x0001b0dd) list_medium_line_plain_t1

0x3fca,	// (0x0001b12f) list_medium_line_t2_g2_g1_ParamLimits

0x3fca,	// (0x0001b12f) list_medium_line_t2_g2_g1

0x3fd6,	// (0x0001b13b) list_medium_line_t2_g2_g2_ParamLimits

0x3fd6,	// (0x0001b13b) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x00026b70) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x00026b70) list_medium_line_t2_g2_g

0xcb1c,	// (0x00023c81) list_medium_line_t2_g2_t1_ParamLimits

0xcb1c,	// (0x00023c81) list_medium_line_t2_g2_t1

0xcb36,	// (0x00023c9b) list_medium_line_t2_g2_t2_ParamLimits

0xcb36,	// (0x00023c9b) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x00026b75) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x00026b75) list_medium_line_t2_g2_t

0x4374,	// (0x0001b4d9) aid_sp_fs_list_icon_a_sm

0x437c,	// (0x0001b4e1) aid_sp_fs_list_icon_d

0x4384,	// (0x0001b4e9) aid_sp_fs_text_primary

0x438d,	// (0x0001b4f2) aid_sp_fs_text_secondary

0x4396,	// (0x0001b4fb) list_medium_line

0x4396,	// (0x0001b4fb) list_medium_line_g2

0x4396,	// (0x0001b4fb) list_medium_line_g3

0x4396,	// (0x0001b4fb) list_medium_line_plain

0x4396,	// (0x0001b4fb) list_medium_line_plain_t2

0x4396,	// (0x0001b4fb) list_medium_line_plain_t3

0x4396,	// (0x0001b4fb) list_medium_line_right_icon

0x4396,	// (0x0001b4fb) list_medium_line_right_iconx2

0x4396,	// (0x0001b4fb) list_medium_line_t2

0x4396,	// (0x0001b4fb) list_medium_line_t2_g2

0x4396,	// (0x0001b4fb) list_medium_line_t2_g3

0x4396,	// (0x0001b4fb) list_medium_line_t2_right_icon

0x4396,	// (0x0001b4fb) list_medium_line_t2_right_iconx2

0x4396,	// (0x0001b4fb) list_medium_line_t3

0x4396,	// (0x0001b4fb) list_medium_line_t3_g2

0x4396,	// (0x0001b4fb) list_medium_line_t3_g3

0x4396,	// (0x0001b4fb) list_medium_line_t3_right_iconx2

0x439f,	// (0x0001b504) list_medium_line_t4_g4

0x43a8,	// (0x0001b50d) list_medium_line_x2

0x43a8,	// (0x0001b50d) list_medium_line_x2_t2_g2

0x43a8,	// (0x0001b50d) list_medium_line_x2_t2_g3

0x43a8,	// (0x0001b50d) list_medium_line_x2_t2_g4

0x43a8,	// (0x0001b50d) list_medium_line_x2_t3

0x43a8,	// (0x0001b50d) list_medium_line_x2_t3_g2

0x43a8,	// (0x0001b50d) list_medium_line_x2_t3_g3

0x43a8,	// (0x0001b50d) list_medium_line_x2_t3_g4

0x43a8,	// (0x0001b50d) list_medium_line_x2_t4_g2

0x43a8,	// (0x0001b50d) list_medium_line_x2_t4_g4

0x43b1,	// (0x0001b516) list_medium_line_x3

0x43b1,	// (0x0001b516) list_medium_line_x3_t4

0x43b1,	// (0x0001b516) list_medium_line_x3_t4_g4

0x439f,	// (0x0001b504) list_medium_line_x4_t4

0x439f,	// (0x0001b504) list_medium_line_x4_t4_g7

0x439f,	// (0x0001b504) list_medium_line_x4_t5

0x43ba,	// (0x0001b51f) list_single_fs_dyc_pane_ParamLimits

0x43ba,	// (0x0001b51f) list_single_fs_dyc_pane

0x0a40,	// (0x00017ba5) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0a40,	// (0x00017ba5) list_medium_line_x4_t4_g7_g1

0x48d2,	// (0x0001ba37) list_medium_line_x4_t4_g7_g2_ParamLimits

0x48d2,	// (0x0001ba37) list_medium_line_x4_t4_g7_g2

0x48de,	// (0x0001ba43) list_medium_line_x4_t4_g7_g3_ParamLimits

0x48de,	// (0x0001ba43) list_medium_line_x4_t4_g7_g3

0x48ed,	// (0x0001ba52) list_medium_line_x4_t4_g7_g4_ParamLimits

0x48ed,	// (0x0001ba52) list_medium_line_x4_t4_g7_g4

0x48f9,	// (0x0001ba5e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x48f9,	// (0x0001ba5e) list_medium_line_x4_t4_g7_g5

0x4908,	// (0x0001ba6d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x4908,	// (0x0001ba6d) list_medium_line_x4_t4_g7_g6

0x4917,	// (0x0001ba7c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4917,	// (0x0001ba7c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdb,	// (0x00026d40) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdb,	// (0x00026d40) list_medium_line_x4_t4_g7_g

0x4923,	// (0x0001ba88) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4923,	// (0x0001ba88) list_medium_line_x4_t4_g7_t1

0x4938,	// (0x0001ba9d) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4938,	// (0x0001ba9d) list_medium_line_x4_t4_g7_t2

0x494d,	// (0x0001bab2) list_medium_line_x4_t4_g7_t3_ParamLimits

0x494d,	// (0x0001bab2) list_medium_line_x4_t4_g7_t3

0x4962,	// (0x0001bac7) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4962,	// (0x0001bac7) list_medium_line_x4_t4_g7_t4

0x4974,	// (0x0001bad9) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4974,	// (0x0001bad9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbea,	// (0x00026d4f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbea,	// (0x00026d4f) list_medium_line_x4_t4_g7_t

0x4986,	// (0x0001baeb) list_single_dyc_row_pane_ParamLimits

0x4986,	// (0x0001baeb) list_single_dyc_row_pane

0xdda0,	// (0x00024f05) call5_gesture_pane_ParamLimits

0xdda0,	// (0x00024f05) call5_gesture_pane

0xddd4,	// (0x00024f39) call5_windows_pane_ParamLimits

0xddd4,	// (0x00024f39) call5_windows_pane

0xde46,	// (0x00024fab) call5_swipe_1_pane_cp_ParamLimits

0xde46,	// (0x00024fab) call5_swipe_1_pane_cp

0xde52,	// (0x00024fb7) call5_swipe_2_pane_cp_ParamLimits

0xde52,	// (0x00024fb7) call5_swipe_2_pane_cp

0x1500,	// (0x00018665) call5_image_pane_cp

0xde5e,	// (0x00024fc3) popup_call5_audio_first_window_cp_ParamLimits

0xde5e,	// (0x00024fc3) popup_call5_audio_first_window_cp

0x4f9c,	// (0x0001c101) call5_swipe_1_pane_g1_cp_ParamLimits

0x4f9c,	// (0x0001c101) call5_swipe_1_pane_g1_cp

0x4fe4,	// (0x0001c149) call5_swipe_1_pane_g2_cp

0x4fb5,	// (0x0001c11a) call5_swipe_1_pane_t1_cp_ParamLimits

0x4fb5,	// (0x0001c11a) call5_swipe_1_pane_t1_cp

0x4f9c,	// (0x0001c101) call5_swipe_2_pane_g1_cp_ParamLimits

0x4f9c,	// (0x0001c101) call5_swipe_2_pane_g1_cp

0x4fec,	// (0x0001c151) call5_swipe_2_pane_g2_cp

0x4ff4,	// (0x0001c159) call5_swipe_2_pane_t1_cp_ParamLimits

0x4ff4,	// (0x0001c159) call5_swipe_2_pane_t1_cp

0x0056,	// (0x000171bb) main_sp_fs_email_pane

0x5009,	// (0x0001c16e) main_sp_fs_listscroll_pane_te

0x5012,	// (0x0001c177) popup_sp_fs_action_menu_pane_ParamLimits

0x5012,	// (0x0001c177) popup_sp_fs_action_menu_pane

0x2ec3,	// (0x0001a028) bg_sp_fs_ctrlbar_pane_g1

0x5056,	// (0x0001c1bb) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x505f,	// (0x0001c1c4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x5068,	// (0x0001c1cd) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2ec3,	// (0x0001a028) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd8,	// (0x00026e3d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2ca8,	// (0x00019e0d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2ca8,	// (0x00019e0d) bg_sp_fs_ctrlbar_ddmenu_pane

0x5071,	// (0x0001c1d6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x5071,	// (0x0001c1d6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x507d,	// (0x0001c1e2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x507d,	// (0x0001c1e2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce1,	// (0x00026e46) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce1,	// (0x00026e46) main_sp_fs_ctrlbar_ddmenu_pane_g

0x5089,	// (0x0001c1ee) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x5089,	// (0x0001c1ee) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x50a3,	// (0x0001c208) list_medium_line_t2_right_icon_g1

0xde6c,	// (0x00024fd1) list_medium_line_t2_right_icon_t1

0xde7c,	// (0x00024fe1) list_medium_line_t2_right_icon_t2

0x0001,

0xfce6,	// (0x00026e4b) list_medium_line_t2_right_icon_t

0x29bd,	// (0x00019b22) bg_sp_fs_ctrlbar_pane_ParamLimits

0x29bd,	// (0x00019b22) bg_sp_fs_ctrlbar_pane

0xdee1,	// (0x00025046) main_sp_fs_ctrlbar_button_pane_cp01

0xdee9,	// (0x0002504e) main_sp_fs_ctrlbar_ddmenu_pane

0x50e3,	// (0x0001c248) main_sp_fs_ctrlbar_pane_g1

0x50ef,	// (0x0001c254) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfceb,	// (0x00026e50) main_sp_fs_ctrlbar_pane_g

0x50fb,	// (0x0001c260) main_sp_fs_ctrlbar_pane_t1

0xdef3,	// (0x00025058) main_sp_fs_ctrlbar_pane

0xdf0d,	// (0x00025072) main_sp_fs_listscroll_pane_te_cp01

0xdf1e,	// (0x00025083) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xdf1e,	// (0x00025083) popup_sp_fs_action_menu_pane_cp01

0x0056,	// (0x000171bb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0056,	// (0x000171bb) bg_sp_fs_highlight_list_pane_cp01

0x5120,	// (0x0001c285) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5120,	// (0x0001c285) sp_fs_action_menu_list_gene_pane_g1

0x512f,	// (0x0001c294) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x512f,	// (0x0001c294) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf5,	// (0x00026e5a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf5,	// (0x00026e5a) sp_fs_action_menu_list_gene_pane_g

0x513c,	// (0x0001c2a1) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x513c,	// (0x0001c2a1) sp_fs_action_menu_list_gene_pane_t1

0x5154,	// (0x0001c2b9) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5154,	// (0x0001c2b9) sp_fs_action_menu_list_gene_pane

0x5175,	// (0x0001c2da) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x5175,	// (0x0001c2da) popup_sp_fs_action_menu_bg_pane

0x5183,	// (0x0001c2e8) sp_fs_action_menu_list_pane_ParamLimits

0x5183,	// (0x0001c2e8) sp_fs_action_menu_list_pane

0x51a5,	// (0x0001c30a) sp_fs_scroll_pane_cp01_ParamLimits

0x51a5,	// (0x0001c30a) sp_fs_scroll_pane_cp01

0xdf48,	// (0x000250ad) list_medium_line_plain_t2_t1

0xdf58,	// (0x000250bd) list_medium_line_plain_t2_t2

0x0001,

0xfcfa,	// (0x00026e5f) list_medium_line_plain_t2_t

0xdf66,	// (0x000250cb) list_medium_line_plain_t3_t1

0xdf76,	// (0x000250db) list_medium_line_plain_t3_t2

0xdf84,	// (0x000250e9) list_medium_line_plain_t3_t3

0x0002,

0xfcff,	// (0x00026e64) list_medium_line_plain_t3_t

0x0a40,	// (0x00017ba5) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0a40,	// (0x00017ba5) list_medium_line_x2_t2_g2_g1

0x0a58,	// (0x00017bbd) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0a58,	// (0x00017bbd) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x000263bb) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x000263bb) list_medium_line_x2_t2_g2_g

0x106b,	// (0x000181d0) list_medium_line_x2_t2_g2_t1_ParamLimits

0x106b,	// (0x000181d0) list_medium_line_x2_t2_g2_t1

0x0a79,	// (0x00017bde) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0a79,	// (0x00017bde) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd06,	// (0x00026e6b) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd06,	// (0x00026e6b) list_medium_line_x2_t2_g2_t

0x0a40,	// (0x00017ba5) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0a40,	// (0x00017ba5) list_medium_line_x2_t4_g2_g1

0x0a58,	// (0x00017bbd) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0a58,	// (0x00017bbd) list_medium_line_x2_t4_g2_g2

0x0001,

0xf256,	// (0x000263bb) list_medium_line_x2_t4_g2_g_ParamLimits

0xf256,	// (0x000263bb) list_medium_line_x2_t4_g2_g

0xdf92,	// (0x000250f7) list_medium_line_x2_t4_g2_t1_ParamLimits

0xdf92,	// (0x000250f7) list_medium_line_x2_t4_g2_t1

0xdfac,	// (0x00025111) list_medium_line_x2_t4_g2_t2_ParamLimits

0xdfac,	// (0x00025111) list_medium_line_x2_t4_g2_t2

0xdfc1,	// (0x00025126) list_medium_line_x2_t4_g2_t3_ParamLimits

0xdfc1,	// (0x00025126) list_medium_line_x2_t4_g2_t3

0x0a79,	// (0x00017bde) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0a79,	// (0x00017bde) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x00026e70) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x00026e70) list_medium_line_x2_t4_g2_t

0x51cb,	// (0x0001c330) list_medium_line_t3_right_iconx2_g1

0x50a3,	// (0x0001c208) list_medium_line_t3_right_iconx2_g2

0xdfd6,	// (0x0002513b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x00026e79) list_medium_line_t3_right_iconx2_g

0xdfde,	// (0x00025143) list_medium_line_t3_right_iconx2_t1

0xdfee,	// (0x00025153) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x00026e80) list_medium_line_t3_right_iconx2_t

0x0a40,	// (0x00017ba5) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0a40,	// (0x00017ba5) list_medium_line_x3_t4_g4_g1

0x0a4c,	// (0x00017bb1) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0a4c,	// (0x00017bb1) list_medium_line_x3_t4_g4_g2

0x0ac2,	// (0x00017c27) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0ac2,	// (0x00017c27) list_medium_line_x3_t4_g4_g3

0x51d3,	// (0x0001c338) list_medium_line_x3_t4_g4_g4_ParamLimits

0x51d3,	// (0x0001c338) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x00026e85) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x00026e85) list_medium_line_x3_t4_g4_g

0xdffc,	// (0x00025161) list_medium_line_x3_t4_g4_t1_ParamLimits

0xdffc,	// (0x00025161) list_medium_line_x3_t4_g4_t1

0xe013,	// (0x00025178) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe013,	// (0x00025178) list_medium_line_x3_t4_g4_t2

0x1080,	// (0x000181e5) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1080,	// (0x000181e5) list_medium_line_x3_t4_g4_t3

0x51df,	// (0x0001c344) list_medium_line_x3_t4_g4_t4_ParamLimits

0x51df,	// (0x0001c344) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x00026e8e) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x00026e8e) list_medium_line_x3_t4_g4_t

0xe028,	// (0x0002518d) list_single_dyc_row_text_pane_t1_ParamLimits

0xe028,	// (0x0002518d) list_single_dyc_row_text_pane_t1

0xe05f,	// (0x000251c4) list_single_dyc_row_text_pane_t2_ParamLimits

0xe05f,	// (0x000251c4) list_single_dyc_row_text_pane_t2

0x51fc,	// (0x0001c361) list_single_dyc_row_text_pane_t3_ParamLimits

0x51fc,	// (0x0001c361) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x00026e97) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x00026e97) list_single_dyc_row_text_pane_t

0x520e,	// (0x0001c373) list_single_dyc_row_pane_g1_ParamLimits

0x520e,	// (0x0001c373) list_single_dyc_row_pane_g1

0x521a,	// (0x0001c37f) list_single_dyc_row_pane_g2_ParamLimits

0x521a,	// (0x0001c37f) list_single_dyc_row_pane_g2

0x5226,	// (0x0001c38b) list_single_dyc_row_pane_g3_ParamLimits

0x5226,	// (0x0001c38b) list_single_dyc_row_pane_g3

0x5232,	// (0x0001c397) list_single_dyc_row_pane_g4_ParamLimits

0x5232,	// (0x0001c397) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00026e9e) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00026e9e) list_single_dyc_row_pane_g

0x523e,	// (0x0001c3a3) list_single_dyc_row_text_pane_ParamLimits

0x523e,	// (0x0001c3a3) list_single_dyc_row_text_pane

0xf0ce,	// (0x00026233) bg_sp_fs_scroll_pane

0x525d,	// (0x0001c3c2) thumb_sp_fs_scroll_pane

0x3fca,	// (0x0001b12f) list_medium_line_g1_ParamLimits

0x3fca,	// (0x0001b12f) list_medium_line_g1

0x5266,	// (0x0001c3cb) list_medium_line_t1_ParamLimits

0x5266,	// (0x0001c3cb) list_medium_line_t1

0x0a40,	// (0x00017ba5) list_medium_line_x2_g1_ParamLimits

0x0a40,	// (0x00017ba5) list_medium_line_x2_g1

0x0a4c,	// (0x00017bb1) list_medium_line_x2_g2_ParamLimits

0x0a4c,	// (0x00017bb1) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00026ea7) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00026ea7) list_medium_line_x2_g

0x527b,	// (0x0001c3e0) list_medium_line_x2_t1_ParamLimits

0x527b,	// (0x0001c3e0) list_medium_line_x2_t1

0x0a40,	// (0x00017ba5) list_medium_line_x3_g1_ParamLimits

0x0a40,	// (0x00017ba5) list_medium_line_x3_g1

0x0a4c,	// (0x00017bb1) list_medium_line_x3_g2_ParamLimits

0x0a4c,	// (0x00017bb1) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00026ea7) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00026ea7) list_medium_line_x3_g

0x527b,	// (0x0001c3e0) list_medium_line_x3_t1_ParamLimits

0x527b,	// (0x0001c3e0) list_medium_line_x3_t1

0x5291,	// (0x0001c3f6) thumb_sp_fs_scroll_pane_g1

0x529a,	// (0x0001c3ff) thumb_sp_fs_scroll_pane_g2

0x52a3,	// (0x0001c408) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00026eac) thumb_sp_fs_scroll_pane_g

0x5291,	// (0x0001c3f6) bg_sp_fs_scroll_pane_g1

0x529a,	// (0x0001c3ff) bg_sp_fs_scroll_pane_g2

0x52a3,	// (0x0001c408) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00026eac) bg_sp_fs_scroll_pane_g

0x0a40,	// (0x00017ba5) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0a40,	// (0x00017ba5) list_medium_line_x2_t3_g4_g1

0x0ab6,	// (0x00017c1b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0ab6,	// (0x00017c1b) list_medium_line_x2_t3_g4_g2

0x0a4c,	// (0x00017bb1) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0a4c,	// (0x00017bb1) list_medium_line_x2_t3_g4_g3

0x0a58,	// (0x00017bbd) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0a58,	// (0x00017bbd) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x00026437) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x00026437) list_medium_line_x2_t3_g4_g

0xe0b9,	// (0x0002521e) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe0b9,	// (0x0002521e) list_medium_line_x2_t3_g4_t1

0xe0cf,	// (0x00025234) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe0cf,	// (0x00025234) list_medium_line_x2_t3_g4_t2

0x0a79,	// (0x00017bde) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0a79,	// (0x00017bde) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00026eb3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00026eb3) list_medium_line_x2_t3_g4_t

0x3fca,	// (0x0001b12f) list_medium_line_g2_g1_ParamLimits

0x3fca,	// (0x0001b12f) list_medium_line_g2_g1

0x3fd6,	// (0x0001b13b) list_medium_line_g2_g2_ParamLimits

0x3fd6,	// (0x0001b13b) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x00026b70) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x00026b70) list_medium_line_g2_g

0x52ac,	// (0x0001c411) list_medium_line_g2_t1_ParamLimits

0x52ac,	// (0x0001c411) list_medium_line_g2_t1

0x3fca,	// (0x0001b12f) list_medium_line_t3_g2_g1_ParamLimits

0x3fca,	// (0x0001b12f) list_medium_line_t3_g2_g1

0x3fd6,	// (0x0001b13b) list_medium_line_t3_g2_g2_ParamLimits

0x3fd6,	// (0x0001b13b) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x00026b70) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x00026b70) list_medium_line_t3_g2_g

0xe0e9,	// (0x0002524e) list_medium_line_t3_g2_t1_ParamLimits

0xe0e9,	// (0x0002524e) list_medium_line_t3_g2_t1

0xe100,	// (0x00025265) list_medium_line_t3_g2_t2_ParamLimits

0xe100,	// (0x00025265) list_medium_line_t3_g2_t2

0xe115,	// (0x0002527a) list_medium_line_t3_g2_t3_ParamLimits

0xe115,	// (0x0002527a) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00026eba) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00026eba) list_medium_line_t3_g2_t

0x50a3,	// (0x0001c208) list_medium_line_right_icon_g1

0x52c1,	// (0x0001c426) list_medium_line_right_icon_t1

0x3fca,	// (0x0001b12f) list_medium_line_t2_g1_ParamLimits

0x3fca,	// (0x0001b12f) list_medium_line_t2_g1

0xe12a,	// (0x0002528f) list_medium_line_t2_t1_ParamLimits

0xe12a,	// (0x0002528f) list_medium_line_t2_t1

0xe144,	// (0x000252a9) list_medium_line_t2_t2_ParamLimits

0xe144,	// (0x000252a9) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x00026ec1) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x00026ec1) list_medium_line_t2_t

0x3fca,	// (0x0001b12f) list_medium_line_t3_g1_ParamLimits

0x3fca,	// (0x0001b12f) list_medium_line_t3_g1

0xe159,	// (0x000252be) list_medium_line_t3_t1_ParamLimits

0xe159,	// (0x000252be) list_medium_line_t3_t1

0xe173,	// (0x000252d8) list_medium_line_t3_t2_ParamLimits

0xe173,	// (0x000252d8) list_medium_line_t3_t2

0xe188,	// (0x000252ed) list_medium_line_t3_t3_ParamLimits

0xe188,	// (0x000252ed) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00026ec6) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00026ec6) list_medium_line_t3_t

0x3fca,	// (0x0001b12f) list_medium_line_g3_g1_ParamLimits

0x3fca,	// (0x0001b12f) list_medium_line_g3_g1

0x52cf,	// (0x0001c434) list_medium_line_g3_g2_ParamLimits

0x52cf,	// (0x0001c434) list_medium_line_g3_g2

0x3fd6,	// (0x0001b13b) list_medium_line_g3_g3_ParamLimits

0x3fd6,	// (0x0001b13b) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x00026ecd) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x00026ecd) list_medium_line_g3_g

0x52db,	// (0x0001c440) list_medium_line_g3_t1_ParamLimits

0x52db,	// (0x0001c440) list_medium_line_g3_t1

0x3fca,	// (0x0001b12f) list_medium_line_t2_g3_g1_ParamLimits

0x3fca,	// (0x0001b12f) list_medium_line_t2_g3_g1

0x52cf,	// (0x0001c434) list_medium_line_t2_g3_g2_ParamLimits

0x52cf,	// (0x0001c434) list_medium_line_t2_g3_g2

0x3fd6,	// (0x0001b13b) list_medium_line_t2_g3_g3_ParamLimits

0x3fd6,	// (0x0001b13b) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x00026ecd) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x00026ecd) list_medium_line_t2_g3_g

0xe19d,	// (0x00025302) list_medium_line_t2_g3_t1_ParamLimits

0xe19d,	// (0x00025302) list_medium_line_t2_g3_t1

0xe1b7,	// (0x0002531c) list_medium_line_t2_g3_t2_ParamLimits

0xe1b7,	// (0x0002531c) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00026ed4) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00026ed4) list_medium_line_t2_g3_t

0x3fca,	// (0x0001b12f) list_medium_line_t3_g3_g1_ParamLimits

0x3fca,	// (0x0001b12f) list_medium_line_t3_g3_g1

0x52cf,	// (0x0001c434) list_medium_line_t3_g3_g2_ParamLimits

0x52cf,	// (0x0001c434) list_medium_line_t3_g3_g2

0x3fd6,	// (0x0001b13b) list_medium_line_t3_g3_g3_ParamLimits

0x3fd6,	// (0x0001b13b) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x00026ecd) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x00026ecd) list_medium_line_t3_g3_g

0xe1cc,	// (0x00025331) list_medium_line_t3_g3_t1_ParamLimits

0xe1cc,	// (0x00025331) list_medium_line_t3_g3_t1

0xe1e0,	// (0x00025345) list_medium_line_t3_g3_t2_ParamLimits

0xe1e0,	// (0x00025345) list_medium_line_t3_g3_t2

0xe1f2,	// (0x00025357) list_medium_line_t3_g3_t3_ParamLimits

0xe1f2,	// (0x00025357) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00026ed9) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00026ed9) list_medium_line_t3_g3_t

0x51cb,	// (0x0001c330) list_medium_line_right_iconx2_g1

0x50a3,	// (0x0001c208) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00026ee0) list_medium_line_right_iconx2_g

0x52f0,	// (0x0001c455) list_medium_line_right_iconx2_t1

0x51cb,	// (0x0001c330) list_medium_line_t2_right_iconx2_g1

0x50a3,	// (0x0001c208) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00026ee0) list_medium_line_t2_right_iconx2_g

0xe204,	// (0x00025369) list_medium_line_t2_right_iconx2_t1

0xe214,	// (0x00025379) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00026ee5) list_medium_line_t2_right_iconx2_t

0x52fe,	// (0x0001c463) list_medium_line_x4_t4_t1

0xe222,	// (0x00025387) list_medium_line_x4_t4_t2

0xe232,	// (0x00025397) list_medium_line_x4_t4_t3

0xe242,	// (0x000253a7) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00026eea) list_medium_line_x4_t4_t

0xe27b,	// (0x000253e0) tport_appsw_pane_ParamLimits

0xe27b,	// (0x000253e0) tport_appsw_pane

0xe287,	// (0x000253ec) tport_contact_pane_ParamLimits

0xe287,	// (0x000253ec) tport_contact_pane

0xe297,	// (0x000253fc) tport_listscroll_pane_ParamLimits

0xe297,	// (0x000253fc) tport_listscroll_pane

0xe2a7,	// (0x0002540c) cell_tport_appsw_pane_ParamLimits

0xe2a7,	// (0x0002540c) cell_tport_appsw_pane

0x31a0,	// (0x0001a305) tport_appsw_pane_g1_ParamLimits

0x31a0,	// (0x0001a305) tport_appsw_pane_g1

0x530c,	// (0x0001c471) tport_contact_pane_g1

0x4a9b,	// (0x0001bc00) tport_contact_pane_t1

0x5315,	// (0x0001c47a) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x00026ef3) tport_contact_pane_t

0x5323,	// (0x0001c488) list_tport_pane

0x532c,	// (0x0001c491) scroll_pane_cp_030

0x533d,	// (0x0001c4a2) cell_tport_appsw_pane_g1

0x534d,	// (0x0001c4b2) cell_tport_appsw_pane_t1

0xf0ce,	// (0x00026233) grid_highlight_pane_cp019

0xe2d2,	// (0x00025437) list_tport_double_graphic_pane_ParamLimits

0xe2d2,	// (0x00025437) list_tport_double_graphic_pane

0x0056,	// (0x000171bb) list_highlight_pane_cp023_ParamLimits

0x0056,	// (0x000171bb) list_highlight_pane_cp023

0xe2e4,	// (0x00025449) list_tport_double_graphic_pane_g1_ParamLimits

0xe2e4,	// (0x00025449) list_tport_double_graphic_pane_g1

0xe2f1,	// (0x00025456) list_tport_double_graphic_pane_t1_ParamLimits

0xe2f1,	// (0x00025456) list_tport_double_graphic_pane_t1

0xe306,	// (0x0002546b) list_tport_double_graphic_pane_t2_ParamLimits

0xe306,	// (0x0002546b) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x00026eff) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x00026eff) list_tport_double_graphic_pane_t

0xf0ce,	// (0x00026233) main_cale_note_pane

0x8141,	// (0x0001f2a6) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8141,	// (0x0001f2a6) cell_vitu2_function_top_wide_pane_cp01

0xda71,	// (0x00024bd6) wait_bar_pane_cp05_ParamLimits

0xf0ce,	// (0x00026233) listscroll_cmail_pane

0x5363,	// (0x0001c4c8) list_cmail_pane

0xe322,	// (0x00025487) list_cmail_body_pane

0xe33c,	// (0x000254a1) list_single_cmail_header_caption_pane

0xe361,	// (0x000254c6) list_single_cmail_header_detail_pane_ParamLimits

0xe361,	// (0x000254c6) list_single_cmail_header_detail_pane

0xe391,	// (0x000254f6) list_single_cmail_header_caption_pane_t1

0xe39f,	// (0x00025504) list_single_cmail_header_detail_pane_g1_ParamLimits

0xe39f,	// (0x00025504) list_single_cmail_header_detail_pane_g1

0x5384,	// (0x0001c4e9) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5384,	// (0x0001c4e9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x00026f04) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x00026f04) list_single_cmail_header_detail_pane_g

0x539d,	// (0x0001c502) list_single_cmail_header_detail_pane_t1_ParamLimits

0x539d,	// (0x0001c502) list_single_cmail_header_detail_pane_t1

0x53d3,	// (0x0001c538) list_single_cmail_header_editor_pane_bg_ParamLimits

0x53d3,	// (0x0001c538) list_single_cmail_header_editor_pane_bg

0x4c4a,	// (0x0001bdaf) list_cmail_body_pane_g1

0x53e5,	// (0x0001c54a) list_cmail_body_pane_t1

0x3ce9,	// (0x0001ae4e) list_single_cmail_header_editor_pane_bg_g1

0x0cd7,	// (0x00017e3c) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3cf9,	// (0x0001ae5e) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3cf1,	// (0x0001ae56) list_single_cmail_header_editor_pane_bg_g1_copy3

0x3fa2,	// (0x0001b107) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3d19,	// (0x0001ae7e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3d09,	// (0x0001ae6e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3d11,	// (0x0001ae76) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0cb7,	// (0x00017e1c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe3d9,	// (0x0002553e) calenote_gesture_pane_ParamLimits

0xe3d9,	// (0x0002553e) calenote_gesture_pane

0xe3f3,	// (0x00025558) calenote_window_pane_ParamLimits

0xe3f3,	// (0x00025558) calenote_window_pane

0x53f3,	// (0x0001c558) popup_note_window_cp01

0xe40b,	// (0x00025570) calenote_swipe_1_pane_ParamLimits

0xe40b,	// (0x00025570) calenote_swipe_1_pane

0xde52,	// (0x00024fb7) calenote_swipe_2_pane_ParamLimits

0xde52,	// (0x00024fb7) calenote_swipe_2_pane

0x4f9c,	// (0x0001c101) calenote_swipe_1_pane_g1_ParamLimits

0x4f9c,	// (0x0001c101) calenote_swipe_1_pane_g1

0x4fa9,	// (0x0001c10e) calenote_swipe_1_pane_g2_ParamLimits

0x4fa9,	// (0x0001c10e) calenote_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x00026e33) calenote_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x00026e33) calenote_swipe_1_pane_g

0x5405,	// (0x0001c56a) calenote_swipe_1_pane_t1_ParamLimits

0x5405,	// (0x0001c56a) calenote_swipe_1_pane_t1

0x4f9c,	// (0x0001c101) calenote_swipe_2_pane_g1_ParamLimits

0x4f9c,	// (0x0001c101) calenote_swipe_2_pane_g1

0x5424,	// (0x0001c589) calenote_swipe_2_pane_g2_ParamLimits

0x5424,	// (0x0001c589) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x00026f10) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x00026f10) calenote_swipe_2_pane_g

0x5430,	// (0x0001c595) calenote_swipe_2_pane_t1_ParamLimits

0x5430,	// (0x0001c595) calenote_swipe_2_pane_t1

0xf0ce,	// (0x00026233) main_mup_navstr_pane

0xbb08,	// (0x00022c6d) main_mup3_pane_t7_ParamLimits

0xbb08,	// (0x00022c6d) main_mup3_pane_t7

0x7a4e,	// (0x0001ebb3) main_mp4_pane_g6_ParamLimits

0x7a4e,	// (0x0001ebb3) main_mp4_pane_g6

0x7d41,	// (0x0001eea6) main_image3_pane_t4_ParamLimits

0x7d41,	// (0x0001eea6) main_image3_pane_t4

0xe41e,	// (0x00025583) popup_navstr_preview_pane_ParamLimits

0xe41e,	// (0x00025583) popup_navstr_preview_pane

0xe42a,	// (0x0002558f) scroll_navstr_pane_ParamLimits

0xe42a,	// (0x0002558f) scroll_navstr_pane

0xf0ce,	// (0x00026233) bg_popup_preview_window_pane_cp04

0x5457,	// (0x0001c5bc) popup_navstr_preview_pane_t1

0xe436,	// (0x0002559b) scroll_navstr_pane_g1_ParamLimits

0xe436,	// (0x0002559b) scroll_navstr_pane_g1

0xe443,	// (0x000255a8) scroll_navstr_pane_t1_ParamLimits

0xe443,	// (0x000255a8) scroll_navstr_pane_t1

0x53fc,	// (0x0001c561) bg_button_pane_cp014

0x53fc,	// (0x0001c561) bg_button_pane_cp030

0xdd46,	// (0x00024eab) list_double_fisheye_pane_g4_ParamLimits

0xdd46,	// (0x00024eab) list_double_fisheye_pane_g4

0xdd52,	// (0x00024eb7) list_double_fisheye_pane_g5_ParamLimits

0xdd52,	// (0x00024eb7) list_double_fisheye_pane_g5

0x536b,	// (0x0001c4d0) sp_fs_scroll_pane_cp03

0x50e3,	// (0x0001c248) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x50ef,	// (0x0001c254) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfceb,	// (0x00026e50) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x50fb,	// (0x0001c260) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe318,	// (0x0002547d) sp_fs_scroll_pane_cp02

0x0937,	// (0x00017a9c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0937,	// (0x00017a9c) popup_sp_fs_calendar_preview_list_single_pane

0xf0ce,	// (0x00026233) main_cam6_pano_pane

0x741f,	// (0x0001e584) main_mup3_pane_ParamLimits

0xf0ce,	// (0x00026233) main_phacti_pane

0xd946,	// (0x00024aab) bg_button_pane_cp11

0xd95e,	// (0x00024ac3) main_mobtv_info_pane_g2_ParamLimits

0xd95e,	// (0x00024ac3) main_mobtv_info_pane_g2

0x0001,

0xfc4b,	// (0x00026db0) main_mobtv_info_pane_g_ParamLimits

0xfc4b,	// (0x00026db0) main_mobtv_info_pane_g

0xdb10,	// (0x00024c75) sc_clock_pane_t5_ParamLimits

0xdb10,	// (0x00024c75) sc_clock_pane_t5

0xdbb7,	// (0x00024d1c) main_radioblah_pane_g1_ParamLimits

0x4ee8,	// (0x0001c04d) main_radioblah_pane_t3_ParamLimits

0x4ee8,	// (0x0001c04d) main_radioblah_pane_t3

0x4f00,	// (0x0001c065) main_radioblah_pane_t4_ParamLimits

0x4f00,	// (0x0001c065) main_radioblah_pane_t4

0xdbd5,	// (0x00024d3a) main_radioblah_text_pane_ParamLimits

0xdbd5,	// (0x00024d3a) main_radioblah_text_pane

0xdbe2,	// (0x00024d47) main_radioblah_info_pane_g1_ParamLimits

0xdc77,	// (0x00024ddc) main_radioblah_info_pane_t4_ParamLimits

0xdc77,	// (0x00024ddc) main_radioblah_info_pane_t4

0x0056,	// (0x000171bb) main_sp_fs_calendar_pane

0xe455,	// (0x000255ba) main_phacti_pane_g1

0xe45d,	// (0x000255c2) phacti_note_pane_ParamLimits

0xe45d,	// (0x000255c2) phacti_note_pane

0x546e,	// (0x0001c5d3) phacti_term_pane_ParamLimits

0x546e,	// (0x0001c5d3) phacti_term_pane

0x5483,	// (0x0001c5e8) phacti_note_pane_t1_ParamLimits

0x5483,	// (0x0001c5e8) phacti_note_pane_t1

0x549a,	// (0x0001c5ff) phacti_term_pane_g1

0x54a2,	// (0x0001c607) phacti_term_pane_t1_ParamLimits

0x54a2,	// (0x0001c607) phacti_term_pane_t1

0x54cc,	// (0x0001c631) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0a38,	// (0x00017b9d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00026f1a) popup_sp_fs_calendar_preview_list_single_pane_g

0x54d4,	// (0x0001c639) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x54d4,	// (0x0001c639) popup_sp_fs_calendar_preview_list_single_pane_t1

0x54e9,	// (0x0001c64e) aid_popup_sp_fs_bg_corner_pane

0x2ec3,	// (0x0001a028) popup_sp_fs_calendar_preview_bg_pane_g1

0xf0ce,	// (0x00026233) popup_sp_fs_calendar_preview_bg_pane

0x54f1,	// (0x0001c656) popup_sp_fs_calendar_preview_list_pane

0x0056,	// (0x000171bb) bg_main_sp_fs_cale_pane_ParamLimits

0x0056,	// (0x000171bb) bg_main_sp_fs_cale_pane

0x5502,	// (0x0001c667) listscroll_cale_mrui_pane_ParamLimits

0x5502,	// (0x0001c667) listscroll_cale_mrui_pane

0x5516,	// (0x0001c67b) listscroll_sp_fs_schedule_track_pane

0x551f,	// (0x0001c684) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x551f,	// (0x0001c684) main_sp_fs_ctrlbar_pane_cp01

0x5530,	// (0x0001c695) main_sp_fs_ribbon_pane

0x5538,	// (0x0001c69d) popup_sp_fs_cale_preview_window

0xe4a4,	// (0x00025609) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe4a4,	// (0x00025609) list_single_sp_fs_schedule_track_pane

0xc0f6,	// (0x0002325b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xc0f6,	// (0x0002325b) bg_sp_fs_highlight_list_pane_cp03

0xe4c3,	// (0x00025628) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe4c3,	// (0x00025628) list_single_sp_fs_schedule_track_pane_g1

0xe4cf,	// (0x00025634) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe4cf,	// (0x00025634) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00026f1f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00026f1f) list_single_sp_fs_schedule_track_pane_g

0xe4db,	// (0x00025640) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe4db,	// (0x00025640) list_single_sp_fs_schedule_track_pane_t1

0xe4f3,	// (0x00025658) sp_fs_schedule_track_pane_ParamLimits

0xe4f3,	// (0x00025658) sp_fs_schedule_track_pane

0x554a,	// (0x0001c6af) sp_fs_schedule_track_pane_g1

0x5552,	// (0x0001c6b7) sp_fs_schedule_track_pane_g2

0x555a,	// (0x0001c6bf) sp_fs_schedule_track_pane_g3

0x5562,	// (0x0001c6c7) sp_fs_schedule_track_pane_g4

0x556a,	// (0x0001c6cf) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x00026f24) sp_fs_schedule_track_pane_g

0x3ce9,	// (0x0001ae4e) bg_sp_fs_schedule_viewer_highlight_g1

0x0cd7,	// (0x00017e3c) bg_sp_fs_schedule_viewer_highlight_g2

0x3cf1,	// (0x0001ae56) bg_sp_fs_schedule_viewer_highlight_g3

0x3cf9,	// (0x0001ae5e) bg_sp_fs_schedule_viewer_highlight_g4

0x3fa2,	// (0x0001b107) bg_sp_fs_schedule_viewer_highlight_g5

0x3d09,	// (0x0001ae6e) bg_sp_fs_schedule_viewer_highlight_g6

0x3d11,	// (0x0001ae76) bg_sp_fs_schedule_viewer_highlight_g7

0x3d19,	// (0x0001ae7e) bg_sp_fs_schedule_viewer_highlight_g8

0x0cb7,	// (0x00017e1c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00026f2f) bg_sp_fs_schedule_viewer_highlight_g

0xf0ce,	// (0x00026233) bg_main_sp_fs_ribbon_pane

0xe503,	// (0x00025668) main_sp_fs_ribbon_pane_g1

0x5572,	// (0x0001c6d7) main_sp_fs_ribbon_pane_t1

0xe50c,	// (0x00025671) main_sp_fs_ribbon_pane_t2

0x5581,	// (0x0001c6e6) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x00026f42) main_sp_fs_ribbon_pane_t

0x5590,	// (0x0001c6f5) main_sp_fs_ribbon_scheduler_pane

0x5598,	// (0x0001c6fd) bg_main_sp_fs_ribbon_pane_g1

0x55a1,	// (0x0001c706) bg_main_sp_fs_ribbon_pane_g2

0x55aa,	// (0x0001c70f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00026f49) bg_main_sp_fs_ribbon_pane_g

0x55b2,	// (0x0001c717) main_sp_fs_ribbon_scheduler_pane_g1

0x55bb,	// (0x0001c720) main_sp_fs_ribbon_scheduler_pane_g2

0x55c4,	// (0x0001c729) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00026f50) main_sp_fs_ribbon_scheduler_pane_g

0x55cd,	// (0x0001c732) list_cale_mrui_pane

0xe51b,	// (0x00025680) sp_fs_scroll_pane_cp07_ParamLimits

0xe51b,	// (0x00025680) sp_fs_scroll_pane_cp07

0xe531,	// (0x00025696) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe531,	// (0x00025696) bg_sp_fs_schedule_viewer_highlight

0x55d6,	// (0x0001c73b) list_single_sp_fs_schedule_track_pane_cp01

0x55de,	// (0x0001c743) list_sp_fs_schedule_track_pane

0x55e6,	// (0x0001c74b) sp_fs_scroll_pane_cp06_ParamLimits

0x55e6,	// (0x0001c74b) sp_fs_scroll_pane_cp06

0x2ec3,	// (0x0001a028) bgmain_sp_fs_calendar_pane_g1

0xe53e,	// (0x000256a3) list_single_cale_mrui_pane_ParamLimits

0xe53e,	// (0x000256a3) list_single_cale_mrui_pane

0x55f8,	// (0x0001c75d) list_single_cale_mrui_row_pane_ParamLimits

0x55f8,	// (0x0001c75d) list_single_cale_mrui_row_pane

0x5605,	// (0x0001c76a) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5605,	// (0x0001c76a) list_single_cale_mrui_row_pane_g1

0x564a,	// (0x0001c7af) list_single_cale_mrui_row_pane_t1_ParamLimits

0x564a,	// (0x0001c7af) list_single_cale_mrui_row_pane_t1

0xe569,	// (0x000256ce) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe569,	// (0x000256ce) list_single_cale_mrui_row_pane_t2

0x565c,	// (0x0001c7c1) list_single_cale_mrui_row_pane_t3_ParamLimits

0x565c,	// (0x0001c7c1) list_single_cale_mrui_row_pane_t3

0x568b,	// (0x0001c7f0) list_single_cale_mrui_row_pane_t4_ParamLimits

0x568b,	// (0x0001c7f0) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00026f5e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00026f5e) list_single_cale_mrui_row_pane_t

0xe5cf,	// (0x00025734) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe5cf,	// (0x00025734) list_single_cmail_header_editor_pane_bg_cp01

0xe5ef,	// (0x00025754) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe5ef,	// (0x00025754) list_single_cmail_header_editor_pane_bg_cp02

0xe60b,	// (0x00025770) main_radioblah_text_pane_t1_ParamLimits

0xe60b,	// (0x00025770) main_radioblah_text_pane_t1

0x56ba,	// (0x0001c81f) cam6_indi_pane_cp01

0x56c2,	// (0x0001c827) cam6_mode_pane_cp01

0x56ca,	// (0x0001c82f) cam6_pano_pane

0x56d3,	// (0x0001c838) cam6_zoom_pane_cp01

0x56db,	// (0x0001c840) cam6_pano_image_pane

0x56e6,	// (0x0001c84b) cam6_pano_pane_g1

0x4c4a,	// (0x0001bdaf) cam6_pano_pane_g2

0x56ef,	// (0x0001c854) cam6_pano_pane_g3

0x56f8,	// (0x0001c85d) cam6_pano_pane_g4

0x3471,	// (0x0001a5d6) cam6_pano_pane_g5

0x5701,	// (0x0001c866) cam6_pano_pane_g6

0x4fdc,	// (0x0001c141) cam6_pano_pane_g7

0x570b,	// (0x0001c870) cam6_pano_pane_g8

0x5714,	// (0x0001c879) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00026f67) cam6_pano_pane_g

0xf0ce,	// (0x00026233) main_browser_tag_pane

0x544f,	// (0x0001c5b4) grid_navstr_albumart_pane

0x571f,	// (0x0001c884) cell_navstr_albumart_pane_ParamLimits

0x571f,	// (0x0001c884) cell_navstr_albumart_pane

0x5742,	// (0x0001c8a7) cell_navstr_albumart_pane_g1

0x27da,	// (0x0001993f) cell_navstr_albumart_pane_g2

0x27ea,	// (0x0001994f) cell_navstr_albumart_pane_g3

0x27e2,	// (0x00019947) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00026f7a) cell_navstr_albumart_pane_g

0xe626,	// (0x0002578b) bt_list_pane_ParamLimits

0xe626,	// (0x0002578b) bt_list_pane

0xe646,	// (0x000257ab) bt_list_pane_t1

0xe655,	// (0x000257ba) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00026f83) bt_list_pane_t

0xf0ce,	// (0x00026233) main_cale_prevew_pane

0xe664,	// (0x000257c9) popup_cale_preview_window_ParamLimits

0xe664,	// (0x000257c9) popup_cale_preview_window

0x0056,	// (0x000171bb) bg_popup_preview_window_pane_cp05_ParamLimits

0x0056,	// (0x000171bb) bg_popup_preview_window_pane_cp05

0x574a,	// (0x0001c8af) list_cale_preview_pane_ParamLimits

0x574a,	// (0x0001c8af) list_cale_preview_pane

0xe67d,	// (0x000257e2) list_double_cale_preview_pane_ParamLimits

0xe67d,	// (0x000257e2) list_double_cale_preview_pane

0xe68f,	// (0x000257f4) list_single_cale_preview_pane_ParamLimits

0xe68f,	// (0x000257f4) list_single_cale_preview_pane

0xe6a5,	// (0x0002580a) list_single_cale_preview_pane_g1

0xe6ad,	// (0x00025812) list_single_cale_preview_pane_t1_ParamLimits

0xe6ad,	// (0x00025812) list_single_cale_preview_pane_t1

0xe6c2,	// (0x00025827) list_double_cale_preview_pane_g1

0xe6ca,	// (0x0002582f) list_double_cale_preview_pane_t1_ParamLimits

0xe6ca,	// (0x0002582f) list_double_cale_preview_pane_t1

0xe6df,	// (0x00025844) list_double_cale_preview_pane_t2_ParamLimits

0xe6df,	// (0x00025844) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00026f88) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00026f88) list_double_cale_preview_pane_t

0xf0ce,	// (0x00026233) main_ezdial_pane

0x0056,	// (0x000171bb) main_sp_fs_email_pane_ParamLimits

0xde8a,	// (0x00024fef) cmail_ddmenu_btn01_pane_ParamLimits

0xde8a,	// (0x00024fef) cmail_ddmenu_btn01_pane

0xdea7,	// (0x0002500c) cmail_ddmenu_btn02_pane_ParamLimits

0xdea7,	// (0x0002500c) cmail_ddmenu_btn02_pane

0xdec5,	// (0x0002502a) cmail_ddmenu_btn03_pane_ParamLimits

0xdec5,	// (0x0002502a) cmail_ddmenu_btn03_pane

0xdef3,	// (0x00025058) main_sp_fs_ctrlbar_pane_ParamLimits

0xdf0d,	// (0x00025072) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe322,	// (0x00025487) list_cmail_body_pane_ParamLimits

0x537b,	// (0x0001c4e0) bg_button_pane_cp12

0x5390,	// (0x0001c4f5) list_single_cmail_header_detail_pane_g3_ParamLimits

0x5390,	// (0x0001c4f5) list_single_cmail_header_detail_pane_g3

0xe3b5,	// (0x0002551a) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe3b5,	// (0x0002551a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00026f0b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00026f0b) list_single_cmail_header_detail_pane_t

0x54b7,	// (0x0001c61c) phacti_term_pane_t2_ParamLimits

0x54b7,	// (0x0001c61c) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x00026f15) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x00026f15) phacti_term_pane_t

0x5756,	// (0x0001c8bb) aid_size_list_single_double

0xe6f7,	// (0x0002585c) popup_ezdial_listscroll_window

0xe718,	// (0x0002587d) popup_number_entry_window_cp01

0x1500,	// (0x00018665) bg_popup_call_pane_cp09

0x5762,	// (0x0001c8c7) ezdial_list_pane

0x576a,	// (0x0001c8cf) scroll_pane_cp23

0x2ca8,	// (0x00019e0d) bg_button_pane_cp028_ParamLimits

0x2ca8,	// (0x00019e0d) bg_button_pane_cp028

0xe726,	// (0x0002588b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe726,	// (0x0002588b) cmail_ddmenu_btn01_pane_g1

0xe738,	// (0x0002589d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe738,	// (0x0002589d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00026f8d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00026f8d) cmail_ddmenu_btn01_pane_g

0x5772,	// (0x0001c8d7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x5772,	// (0x0001c8d7) cmail_ddmenu_btn01_pane_t1

0x29bd,	// (0x00019b22) bg_button_pane_cp029_ParamLimits

0x29bd,	// (0x00019b22) bg_button_pane_cp029

0xe738,	// (0x0002589d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe738,	// (0x0002589d) cmail_ddmenu_btn02_pane_g1

0xe750,	// (0x000258b5) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe750,	// (0x000258b5) cmail_ddmenu_btn02_pane_t1

0xc0f6,	// (0x0002325b) bg_button_pane_cp031_ParamLimits

0xc0f6,	// (0x0002325b) bg_button_pane_cp031

0xe738,	// (0x0002589d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe738,	// (0x0002589d) cmail_ddmenu_btn03_pane_g1

0xe750,	// (0x000258b5) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe750,	// (0x000258b5) cmail_ddmenu_btn03_pane_t1

0xc37a,	// (0x000234df) cell_dialer2_keypad_pane_t1_ParamLimits

0xc394,	// (0x000234f9) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc394,	// (0x000234f9) cell_dialer2_keypad_pane_t1_copy1

0xd7cb,	// (0x00024930) ncimui_group_button_pane

0x0056,	// (0x000171bb) main_sp_fs_calendar_pane_ParamLimits

0xe33c,	// (0x000254a1) list_single_cmail_header_caption_pane_ParamLimits

0x54f9,	// (0x0001c65e) aid_recal_txt_sm_pane

0xf0ce,	// (0x00026233) mian_recal_day_pane

0x5538,	// (0x0001c69d) popup_sp_fs_cale_preview_window_ParamLimits

0xf0ce,	// (0x00026233) list_recal_day_pane

0x57aa,	// (0x0001c90f) list_single_recal_day_pane_ParamLimits

0x57aa,	// (0x0001c90f) list_single_recal_day_pane

0x57bc,	// (0x0001c921) list_single_recal_day_pane_g1_ParamLimits

0x57bc,	// (0x0001c921) list_single_recal_day_pane_g1

0x57c8,	// (0x0001c92d) list_single_recal_day_pane_g2_ParamLimits

0x57c8,	// (0x0001c92d) list_single_recal_day_pane_g2

0x57d8,	// (0x0001c93d) list_single_recal_day_pane_g3_ParamLimits

0x57d8,	// (0x0001c93d) list_single_recal_day_pane_g3

0xe774,	// (0x000258d9) list_single_recal_day_pane_g4_ParamLimits

0xe774,	// (0x000258d9) list_single_recal_day_pane_g4

0x57e4,	// (0x0001c949) list_single_recal_day_pane_g5_ParamLimits

0x57e4,	// (0x0001c949) list_single_recal_day_pane_g5

0x57f4,	// (0x0001c959) list_single_recal_day_pane_g6_ParamLimits

0x57f4,	// (0x0001c959) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00026f9c) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00026f9c) list_single_recal_day_pane_g

0x580b,	// (0x0001c970) list_single_recal_day_pane_t1

0x581d,	// (0x0001c982) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00026fa7) list_single_recal_day_pane_t

0xe794,	// (0x000258f9) ncimui_query_button_pane_ParamLimits

0xe794,	// (0x000258f9) ncimui_query_button_pane

0xe7a4,	// (0x00025909) ncimui_query_button_pane_t1_ParamLimits

0xe7a4,	// (0x00025909) ncimui_query_button_pane_t1

0x5832,	// (0x0001c997) ncimui_query_button_pane_t2_ParamLimits

0x5832,	// (0x0001c997) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x00026fac) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x00026fac) ncimui_query_button_pane_t

0xe7b7,	// (0x0002591c) query_button_pane_ParamLimits

0xe7b7,	// (0x0002591c) query_button_pane

0xf0ce,	// (0x00026233) bg_button_pane_cp0028

0x5845,	// (0x0001c9aa) query_button_pane_t1

0x743b,	// (0x0001e5a0) main_tport_pane_ParamLimits

0xe252,	// (0x000253b7) bg_popup_window_pane_cp01_ParamLimits

0xe252,	// (0x000253b7) bg_popup_window_pane_cp01

0xe25f,	// (0x000253c4) heading_pane_cp08_ParamLimits

0xe25f,	// (0x000253c4) heading_pane_cp08

0xe26d,	// (0x000253d2) heading_pane_cp07_ParamLimits

0xe26d,	// (0x000253d2) heading_pane_cp07

0x533d,	// (0x0001c4a2) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00026ef8) cell_tport_appsw_pane_g

0x1681,	// (0x000187e6) input_candi_list_open_g1

0x0ed6,	// (0x0001803b) list_cale_time_pane_g6_ParamLimits

0x0ed6,	// (0x0001803b) list_cale_time_pane_g6

0xb555,	// (0x000226ba) aid_size_touch_calib_1_ParamLimits

0xb555,	// (0x000226ba) aid_size_touch_calib_1

0xb561,	// (0x000226c6) aid_size_touch_calib_2_ParamLimits

0xb561,	// (0x000226c6) aid_size_touch_calib_2

0xb56f,	// (0x000226d4) aid_size_touch_calib_3_ParamLimits

0xb56f,	// (0x000226d4) aid_size_touch_calib_3

0xb57f,	// (0x000226e4) aid_size_touch_calib_4_ParamLimits

0xb57f,	// (0x000226e4) aid_size_touch_calib_4

0xb58d,	// (0x000226f2) main_touch_calib_button_group_pane_ParamLimits

0xb58d,	// (0x000226f2) main_touch_calib_button_group_pane

0xb59b,	// (0x00022700) main_touch_calib_pane_g1_ParamLimits

0xb5a7,	// (0x0002270c) main_touch_calib_pane_g2_ParamLimits

0xb5b3,	// (0x00022718) main_touch_calib_pane_g3_ParamLimits

0xb5bf,	// (0x00022724) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x000268c6) main_touch_calib_pane_g_ParamLimits

0xb5cb,	// (0x00022730) main_touch_calib_pane_t1_ParamLimits

0xb5e2,	// (0x00022747) main_touch_calib_pane_t2_ParamLimits

0xb5f9,	// (0x0002275e) main_touch_calib_pane_t3_ParamLimits

0xb60d,	// (0x00022772) main_touch_calib_pane_t4_ParamLimits

0xb621,	// (0x00022786) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x000268cf) main_touch_calib_pane_t_ParamLimits

0x3247,	// (0x0001a3ac) list_single_fp_cale_pane_g3_ParamLimits

0x3247,	// (0x0001a3ac) list_single_fp_cale_pane_g3

0x741f,	// (0x0001e584) bg_button_pane_cp012_ParamLimits

0x741f,	// (0x0001e584) bg_vkb2_func_pane_cp03_ParamLimits

0x8347,	// (0x0001f4ac) cell_vitu2_function_top_pane_g1_ParamLimits

0x741f,	// (0x0001e584) bg_vkb2_func_pane_cp04_ParamLimits

0xd753,	// (0x000248b8) main_ncimui_button_group_pane_ParamLimits

0xd753,	// (0x000248b8) main_ncimui_button_group_pane

0xd7b9,	// (0x0002491e) main_ncimui_pane_t3_ParamLimits

0xd7b9,	// (0x0002491e) main_ncimui_pane_t3

0x5465,	// (0x0001c5ca) phacti_button_group_pane

0x5756,	// (0x0001c8bb) aid_size_list_single_double_ParamLimits

0xe6f7,	// (0x0002585c) popup_ezdial_listscroll_window_ParamLimits

0xe718,	// (0x0002587d) popup_number_entry_window_cp01_ParamLimits

0xe7c4,	// (0x00025929) phacti_button_pane_ParamLimits

0xe7c4,	// (0x00025929) phacti_button_pane

0xf0ce,	// (0x00026233) bg_button_pane_cp14

0x5853,	// (0x0001c9b8) phacti_button_pane_t1

0xe7d5,	// (0x0002593a) main_touch_calib_button_pane_ParamLimits

0xe7d5,	// (0x0002593a) main_touch_calib_button_pane

0x07c7,	// (0x0001792c) bg_button_pane_cp18_ParamLimits

0x07c7,	// (0x0001792c) bg_button_pane_cp18

0x5861,	// (0x0001c9c6) main_touch_calib_button_pane_t1_ParamLimits

0x5861,	// (0x0001c9c6) main_touch_calib_button_pane_t1

0x5877,	// (0x0001c9dc) main_touch_calib_button_pane_t2_ParamLimits

0x5877,	// (0x0001c9dc) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x00026fb1) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x00026fb1) main_touch_calib_button_pane_t

0xf0ce,	// (0x00026233) cell_ncimui_button_pane

0xf0ce,	// (0x00026233) bg_button_pane_cp032

0x5895,	// (0x0001c9fa) cell_ncimui_button_pane_t1

0x7c54,	// (0x0001edb9) image3_infobar_pane_ParamLimits

0x7c54,	// (0x0001edb9) image3_infobar_pane

0xdb32,	// (0x00024c97) fs_bigclock_status_pane_ParamLimits

0xdb32,	// (0x00024c97) fs_bigclock_status_pane

0xdb3f,	// (0x00024ca4) main_fs_bigclock_clock_pane_ParamLimits

0xdb3f,	// (0x00024ca4) main_fs_bigclock_clock_pane

0xdb55,	// (0x00024cba) main_fs_bigclock_indi_pane_ParamLimits

0xdb55,	// (0x00024cba) main_fs_bigclock_indi_pane

0xdb85,	// (0x00024cea) main_fs_bigclock_swipe_pane_ParamLimits

0xdb85,	// (0x00024cea) main_fs_bigclock_swipe_pane

0xf0ce,	// (0x00026233) main_fs_clock_dumped_data

0x4d57,	// (0x0001bebc) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x4d57,	// (0x0001bebc) list_single_fs_bigclock_indicator_pane_g1

0x4d7d,	// (0x0001bee2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x4d7d,	// (0x0001bee2) list_single_fs_bigclock_indicator_pane_g2

0x4d97,	// (0x0001befc) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4d97,	// (0x0001befc) list_single_fs_bigclock_indicator_pane_g3

0x4db1,	// (0x0001bf16) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x4db1,	// (0x0001bf16) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7f,	// (0x00026de4) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7f,	// (0x00026de4) list_single_fs_bigclock_indicator_pane_g

0x4dda,	// (0x0001bf3f) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x4dda,	// (0x0001bf3f) list_single_fs_bigclock_indicator_pane_t1

0x4e02,	// (0x0001bf67) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x4e02,	// (0x0001bf67) list_single_fs_bigclock_indicator_pane_t2

0x4e2a,	// (0x0001bf8f) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x4e2a,	// (0x0001bf8f) list_single_fs_bigclock_indicator_pane_t3

0x4e52,	// (0x0001bfb7) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x4e52,	// (0x0001bfb7) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8a,	// (0x00026def) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8a,	// (0x00026def) list_single_fs_bigclock_indicator_pane_t

0x58a3,	// (0x0001ca08) image3_infobar_fav_pane_ParamLimits

0x58a3,	// (0x0001ca08) image3_infobar_fav_pane

0x58b3,	// (0x0001ca18) image3_infobar_loc_pane_ParamLimits

0x58b3,	// (0x0001ca18) image3_infobar_loc_pane

0x58c7,	// (0x0001ca2c) image3_infobar_time_pane_ParamLimits

0x58c7,	// (0x0001ca2c) image3_infobar_time_pane

0x2ec3,	// (0x0001a028) image3_infobar_time_pane_g1

0x58d7,	// (0x0001ca3c) image3_infobar_time_pane_t1

0x2ec3,	// (0x0001a028) image3_infobar_loc_pane_g1

0x58e5,	// (0x0001ca4a) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00026fb6) image3_infobar_loc_pane_g

0x58ed,	// (0x0001ca52) image3_infobar_loc_pane_t1

0x2ec3,	// (0x0001a028) image3_infobar_fav_pane_g1

0x58fb,	// (0x0001ca60) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x00026fbb) image3_infobar_fav_pane_g

0x5903,	// (0x0001ca68) fs_bigclock_status_battery_pane

0x590c,	// (0x0001ca71) fs_bigclock_status_signal_pane

0x5915,	// (0x0001ca7a) fs_bigclock_status_title_pane

0x591e,	// (0x0001ca83) fs_bigclock_status_signal_pane_g1

0x5927,	// (0x0001ca8c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x00026fc0) fs_bigclock_status_signal_pane_g

0x592f,	// (0x0001ca94) fs_bigclock_status_battery_pane_g1

0x5938,	// (0x0001ca9d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00026fc5) fs_bigclock_status_battery_pane_g

0x5940,	// (0x0001caa5) fs_bigclock_status_title_pane_t1

0x2ec3,	// (0x0001a028) main_fs_bigclock_clock_pane_g1

0x594e,	// (0x0001cab3) main_fs_bigclock_clock_pane_g2

0x594e,	// (0x0001cab3) main_fs_bigclock_clock_pane_g3

0x594e,	// (0x0001cab3) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x00026fca) main_fs_bigclock_clock_pane_g

0x5956,	// (0x0001cabb) main_fs_bigclock_clock_pane_t1

0x5964,	// (0x0001cac9) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00026fd3) main_fs_bigclock_clock_pane_t

0x5973,	// (0x0001cad8) list_single_fs_bigclock_indicator_pane_ParamLimits

0x5973,	// (0x0001cad8) list_single_fs_bigclock_indicator_pane

0xe7e7,	// (0x0002594c) list_single_fs_bigclock_pane_ParamLimits

0xe7e7,	// (0x0002594c) list_single_fs_bigclock_pane

0x598d,	// (0x0001caf2) main_fs_bigclock_indicator_pane_t1

0x599c,	// (0x0001cb01) list_single_fs_bigclock_pane_g1

0x59a4,	// (0x0001cb09) list_single_fs_bigclock_pane_t1

0x2ec3,	// (0x0001a028) main_fs_bigclock_swipe_pane_g1

0x59e7,	// (0x0001cb4c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00026fe4) main_fs_bigclock_swipe_pane_g

0x59ef,	// (0x0001cb54) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x59ef,	// (0x0001cb54) main_fs_bigclock_swipe_pane_t1

0x9f5a,	// (0x000210bf) call_type_pane_ParamLimits

0xf0ce,	// (0x00026233) main_btmg_pane

0x5631,	// (0x0001c796) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5631,	// (0x0001c796) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x00026f57) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x00026f57) list_single_cale_mrui_row_pane_g

0x5791,	// (0x0001c8f6) list_recal_vselct_arw_lo_pane

0x5799,	// (0x0001c8fe) list_recal_vselct_arw_up_pane

0x57a1,	// (0x0001c906) list_recal_vselct_pane

0xe848,	// (0x000259ad) btmg_button_pane

0xe854,	// (0x000259b9) main_btmg_pane_g1

0xf0ce,	// (0x00026233) bg_button_pane_cp044

0x5a0c,	// (0x0001cb71) btmg_button_pane_t1

0x29b5,	// (0x00019b1a) aid_listscroll_gen

0x0056,	// (0x000171bb) main_cntbar_detail_pane

0x535b,	// (0x0001c4c0) list_cmail_folder_pane

0x536b,	// (0x0001c4d0) sp_fs_scroll_pane_cp03_ParamLimits

0xe33c,	// (0x000254a1) list_single_fs_dyc_pane_cp01_ParamLimits

0xe33c,	// (0x000254a1) list_single_fs_dyc_pane_cp01

0x5a1a,	// (0x0001cb7f) aid_size_cmail_indent

0x5a23,	// (0x0001cb88) list_single_dyc_row_pane_cp01

0xe87c,	// (0x000259e1) cntbar_detail_list_pane_ParamLimits

0xe87c,	// (0x000259e1) cntbar_detail_list_pane

0xe8b6,	// (0x00025a1b) main_cntbar_detail_cont_pane_ParamLimits

0xe8b6,	// (0x00025a1b) main_cntbar_detail_cont_pane

0x9ef4,	// (0x00021059) scroll_pane_cp032_ParamLimits

0x9ef4,	// (0x00021059) scroll_pane_cp032

0xe8c2,	// (0x00025a27) cntbar_detail_list_event_pane_ParamLimits

0xe8c2,	// (0x00025a27) cntbar_detail_list_event_pane

0xe888,	// (0x000259ed) cntbar_detail_list_shct_pane

0x0d25,	// (0x00017e8a) aid_list_gen

0x5a2c,	// (0x0001cb91) aid_scroll

0x5a35,	// (0x0001cb9a) aid_size_touch_scroll_bar

0xe8d6,	// (0x00025a3b) aid_list_double

0x5a3e,	// (0x0001cba3) aid_list_single

0xe8df,	// (0x00025a44) aid_list_single_lg

0x5a47,	// (0x0001cbac) aid_list_z_g_a_sm

0x5a4f,	// (0x0001cbb4) aid_list_z_g_d

0x5a57,	// (0x0001cbbc) aid_txt_z_prm

0xe8e8,	// (0x00025a4d) aid_txt_z_prm_cp01

0xe8f6,	// (0x00025a5b) aid_txt_z_sec

0xe904,	// (0x00025a69) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe904,	// (0x00025a69) main_cntbar_detail_cont_pane_g1

0xe911,	// (0x00025a76) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe911,	// (0x00025a76) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x00026fe9) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x00026fe9) main_cntbar_detail_cont_pane_g

0x5a65,	// (0x0001cbca) main_cntbar_detail_cont_pane_t1

0x5a73,	// (0x0001cbd8) main_cntbar_detail_cont_pane_t2

0x5a81,	// (0x0001cbe6) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x00026fee) main_cntbar_detail_cont_pane_t

0xe91d,	// (0x00025a82) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe91d,	// (0x00025a82) cell_cntbar_detail_list_shct_pane

0x5a8f,	// (0x0001cbf4) cntbar_detail_list_shct_pane_g1

0x5a98,	// (0x0001cbfd) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x00026ff5) cntbar_detail_list_shct_pane_g

0xe931,	// (0x00025a96) cntbar_detail_list_event_pane_g1_ParamLimits

0xe931,	// (0x00025a96) cntbar_detail_list_event_pane_g1

0xe93d,	// (0x00025aa2) cntbar_detail_list_event_pane_g2_ParamLimits

0xe93d,	// (0x00025aa2) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x00026ffa) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x00026ffa) cntbar_detail_list_event_pane_g

0xe9a9,	// (0x00025b0e) cntbar_detail_list_event_pane_t1_ParamLimits

0xe9a9,	// (0x00025b0e) cntbar_detail_list_event_pane_t1

0xe9be,	// (0x00025b23) cntbar_detail_list_event_pane_t2_ParamLimits

0xe9be,	// (0x00025b23) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x00027007) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x00027007) cntbar_detail_list_event_pane_t

0x2ec3,	// (0x0001a028) cell_cntbar_detail_list_shct_pane_g1

0xa297,	// (0x000213fc) navi_pane_mv_g3

0x0056,	// (0x000171bb) main_cntbar_detail_pane_ParamLimits

0xf0ce,	// (0x00026233) main_notif_wgt_pane

0x7995,	// (0x0001eafa) aid_tch_main_mp4_pane_g4

0x7bca,	// (0x0001ed2f) popup_slider_window_cp02

0x5787,	// (0x0001c8ec) list_recal_day_event_pane

0xe85c,	// (0x000259c1) cntbar_detail_btn_pane_ParamLimits

0xe85c,	// (0x000259c1) cntbar_detail_btn_pane

0xe86c,	// (0x000259d1) cntbar_detail_btn_pane_cp01_ParamLimits

0xe86c,	// (0x000259d1) cntbar_detail_btn_pane_cp01

0xe888,	// (0x000259ed) cntbar_detail_list_shct_pane_ParamLimits

0xe894,	// (0x000259f9) cntbar_detail_pane_g1_ParamLimits

0xe894,	// (0x000259f9) cntbar_detail_pane_g1

0xe8a0,	// (0x00025a05) cntbar_detail_pane_t1_ParamLimits

0xe8a0,	// (0x00025a05) cntbar_detail_pane_t1

0xe949,	// (0x00025aae) cntbar_detail_list_event_pane_g3_ParamLimits

0xe949,	// (0x00025aae) cntbar_detail_list_event_pane_g3

0xe961,	// (0x00025ac6) cntbar_detail_list_event_pane_g4_ParamLimits

0xe961,	// (0x00025ac6) cntbar_detail_list_event_pane_g4

0xe979,	// (0x00025ade) cntbar_detail_list_event_pane_g5_ParamLimits

0xe979,	// (0x00025ade) cntbar_detail_list_event_pane_g5

0xe991,	// (0x00025af6) cntbar_detail_list_event_pane_g6_ParamLimits

0xe991,	// (0x00025af6) cntbar_detail_list_event_pane_g6

0xe9d3,	// (0x00025b38) cntbar_detail_list_event_pane_t3_ParamLimits

0xe9d3,	// (0x00025b38) cntbar_detail_list_event_pane_t3

0xe9e5,	// (0x00025b4a) popup_notif_wgt_window_ParamLimits

0xe9e5,	// (0x00025b4a) popup_notif_wgt_window

0xe9f5,	// (0x00025b5a) popup_submenu_window_cp01_ParamLimits

0xe9f5,	// (0x00025b5a) popup_submenu_window_cp01

0x1500,	// (0x00018665) bg_popup_window_pane_cp10

0x5aa1,	// (0x0001cc06) listscroll_notif_wgt_pane

0x5ab2,	// (0x0001cc17) list_notif_wgt_window

0x5abb,	// (0x0001cc20) scroll_pane_cp033

0xe67d,	// (0x000257e2) list_notif_wgt_row_pane_ParamLimits

0xe67d,	// (0x000257e2) list_notif_wgt_row_pane

0x5ac4,	// (0x0001cc29) aid_size_list_notif_wgt_del

0x5ad1,	// (0x0001cc36) list_notif_wgt_row_pane_g1

0x5add,	// (0x0001cc42) list_notif_wgt_row_pane_g2

0x5ae9,	// (0x0001cc4e) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0002700e) list_notif_wgt_row_pane_g

0x5af6,	// (0x0001cc5b) list_notif_wgt_row_pane_t1

0x5b0b,	// (0x0001cc70) list_notif_wgt_row_pane_t2

0x5b1d,	// (0x0001cc82) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x00027015) list_notif_wgt_row_pane_t

0x3fe2,	// (0x0001b147) list_recal_day_event_pane_g1

0x5b41,	// (0x0001cca6) list_recal_day_event_pane_t1

0xf0ce,	// (0x00026233) bg_button_pane_cp045

0x5b50,	// (0x0001ccb5) cntbar_detail_btn_pane_t1

0x29bd,	// (0x00019b22) main_callh_pane_ParamLimits

0x29bd,	// (0x00019b22) main_callh_pane

0xf0ce,	// (0x00026233) main_coverflow0_pane

0xf0ce,	// (0x00026233) main_wgtman_pane

0xdb9d,	// (0x00024d02) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdb9d,	// (0x00024d02) main_fs_bigclock_unlock_btn_pane

0x5335,	// (0x0001c49a) bg_button_pane_cp16

0x5345,	// (0x0001c4aa) cell_tport_appsw_pane_g3

0xea03,	// (0x00025b68) cf0_flow_pane_ParamLimits

0xea03,	// (0x00025b68) cf0_flow_pane

0x5b5e,	// (0x0001ccc3) listscroll_cf0_pane

0x5b69,	// (0x0001ccce) main_cf0_pane_g1

0xea12,	// (0x00025b77) main_cf0_pane_t1_ParamLimits

0xea12,	// (0x00025b77) main_cf0_pane_t1

0xea26,	// (0x00025b8b) main_cf0_pane_t2_ParamLimits

0xea26,	// (0x00025b8b) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0002701c) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0002701c) main_cf0_pane_t

0x5b73,	// (0x0001ccd8) scroll_pane_cp11

0xea3a,	// (0x00025b9f) cf0_flow_pane_g1

0xea42,	// (0x00025ba7) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x00027021) cf0_flow_pane_g

0xea4a,	// (0x00025baf) cf0_flow_pane_t1

0xf0ce,	// (0x00026233) main_call6_pane

0xf0ce,	// (0x00026233) main_calllock_pane

0xea58,	// (0x00025bbd) call6_btn_grp_pane_ParamLimits

0xea58,	// (0x00025bbd) call6_btn_grp_pane

0xea67,	// (0x00025bcc) call6_pane_g1_ParamLimits

0xea67,	// (0x00025bcc) call6_pane_g1

0xea76,	// (0x00025bdb) popup_call6_1st_window_ParamLimits

0xea76,	// (0x00025bdb) popup_call6_1st_window

0xea84,	// (0x00025be9) popup_call6_2nd_window_ParamLimits

0xea84,	// (0x00025be9) popup_call6_2nd_window

0xea92,	// (0x00025bf7) cell_call6_btn_pane_ParamLimits

0xea92,	// (0x00025bf7) cell_call6_btn_pane

0x1500,	// (0x00018665) bg_popup_call2_in_pane_cp03

0x5b7e,	// (0x0001cce3) popup_call6_1st_window_g1

0x5b86,	// (0x0001cceb) popup_call6_1st_window_g2

0x5b8e,	// (0x0001ccf3) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x00027026) popup_call6_1st_window_g

0x5b96,	// (0x0001ccfb) popup_call6_1st_window_t1

0x5ba5,	// (0x0001cd0a) popup_call6_1st_window_t2

0x5bb5,	// (0x0001cd1a) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0002702d) popup_call6_1st_window_t

0x1500,	// (0x00018665) bg_popup_call2_in_pane_cp04

0x5b7e,	// (0x0001cce3) popup_call6_2nd_window_g1

0x5b86,	// (0x0001cceb) popup_call6_2nd_window_g2

0x5b8e,	// (0x0001ccf3) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x00027026) popup_call6_2nd_window_g

0x5b96,	// (0x0001ccfb) popup_call6_2nd_window_t1

0xf0ce,	// (0x00026233) bg_button_pane_cp15

0x5bc5,	// (0x0001cd2a) cell_call6_btn_pane_g1

0x5bce,	// (0x0001cd33) cell_call6_btn_pane_t1

0xeaa1,	// (0x00025c06) listscroll_wgtman_pane_ParamLimits

0xeaa1,	// (0x00025c06) listscroll_wgtman_pane

0xeabf,	// (0x00025c24) wgtman_btn_pane_ParamLimits

0xeabf,	// (0x00025c24) wgtman_btn_pane

0x13b7,	// (0x0001851c) aid_scroll_copy1

0x5bdd,	// (0x0001cd42) list_wgtman_pane

0xeaf4,	// (0x00025c59) wgtman_btn_pane_g1_ParamLimits

0xeaf4,	// (0x00025c59) wgtman_btn_pane_g1

0xeb1c,	// (0x00025c81) wgtman_btn_pane_t1_ParamLimits

0xeb1c,	// (0x00025c81) wgtman_btn_pane_t1

0x5be7,	// (0x0001cd4c) wgtman_btn_pane_t2_ParamLimits

0x5be7,	// (0x0001cd4c) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x00027034) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x00027034) wgtman_btn_pane_t

0xeb53,	// (0x00025cb8) listrow_wgtman_pane_ParamLimits

0xeb53,	// (0x00025cb8) listrow_wgtman_pane

0xeb6e,	// (0x00025cd3) listrow_wgtman_pane_g1

0xeb7b,	// (0x00025ce0) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x00027039) listrow_wgtman_pane_g

0xeb99,	// (0x00025cfe) listrow_wgtman_pane_t1

0xebb1,	// (0x00025d16) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0002703e) listrow_wgtman_pane_t

0xebd7,	// (0x00025d3c) wait_bar_pane_cp09

0x5bfe,	// (0x0001cd63) main_calllock_btn_pane

0x5c08,	// (0x0001cd6d) main_calllock_pane_g1

0xf0ce,	// (0x00026233) bg_button_pane_cp17

0x5c14,	// (0x0001cd79) main_calllock_btn_pane_g1

0x5c1d,	// (0x0001cd82) main_calllock_btn_pane_t1

0xf0ce,	// (0x00026233) main_dialer3_pane

0xf0ce,	// (0x00026233) main_fmrd2_pane

0x2ec3,	// (0x0001a028) main_fs_bigclock_unlock_btn_pane_g1

0x5c34,	// (0x0001cd99) main_fs_bigclock_unlock_btn_pane_t1

0xebe9,	// (0x00025d4e) area_fmrd2_info_pane_ParamLimits

0xebe9,	// (0x00025d4e) area_fmrd2_info_pane

0xebf7,	// (0x00025d5c) area_fmrd2_visual_pane_ParamLimits

0xebf7,	// (0x00025d5c) area_fmrd2_visual_pane

0xec05,	// (0x00025d6a) fmrd2_indi_pane_ParamLimits

0xec05,	// (0x00025d6a) fmrd2_indi_pane

0xec12,	// (0x00025d77) area_fmrd2_visual_pane_g1

0xec1a,	// (0x00025d7f) area_fmrd2_visual_pane_t1

0xec2a,	// (0x00025d8f) area_fmrd2_visual_pane_t2

0xec3a,	// (0x00025d9f) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x00027048) area_fmrd2_visual_pane_t

0xec4a,	// (0x00025daf) area_fmrd2_info_pane_g1

0xec52,	// (0x00025db7) area_fmrd2_info_pane_t1

0xec62,	// (0x00025dc7) area_fmrd2_info_pane_t2

0xec72,	// (0x00025dd7) area_fmrd2_info_pane_t3

0xec82,	// (0x00025de7) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0002704f) area_fmrd2_info_pane_t

0xec90,	// (0x00025df5) fmrd2_indi_pane_t1

0xeca0,	// (0x00025e05) fmrd2_indi_pane_t2

0xecb0,	// (0x00025e15) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x00027058) fmrd2_indi_pane_t

0x4dc0,	// (0x0001bf25) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x4dc0,	// (0x0001bf25) list_single_fs_bigclock_indicator_pane_g5

0x4e67,	// (0x0001bfcc) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x4e67,	// (0x0001bfcc) list_single_fs_bigclock_indicator_pane_t5

0xe473,	// (0x000255d8) aid_cell_bcale_month_pane_ParamLimits

0xe473,	// (0x000255d8) aid_cell_bcale_month_pane

0xe483,	// (0x000255e8) bcale_month_pane_ParamLimits

0xe483,	// (0x000255e8) bcale_month_pane

0xe493,	// (0x000255f8) bcale_preview_pane_ParamLimits

0xe493,	// (0x000255f8) bcale_preview_pane

0x59a4,	// (0x0001cb09) list_single_fs_bigclock_pane_t1_ParamLimits

0x59c3,	// (0x0001cb28) list_single_fs_bigclock_pane_t2_ParamLimits

0x59c3,	// (0x0001cb28) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x00026fdf) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x00026fdf) list_single_fs_bigclock_pane_t

0x5c2c,	// (0x0001cd91) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x00027043) main_fs_bigclock_unlock_btn_pane_g

0xecbe,	// (0x00025e23) aid_dia3_key_size_ParamLimits

0xecbe,	// (0x00025e23) aid_dia3_key_size

0xecca,	// (0x00025e2f) aid_dia3_listrow_size_ParamLimits

0xecca,	// (0x00025e2f) aid_dia3_listrow_size

0xecda,	// (0x00025e3f) dia3_keypad_fun_pane_ParamLimits

0xecda,	// (0x00025e3f) dia3_keypad_fun_pane

0xecec,	// (0x00025e51) dia3_keypad_num_pane_ParamLimits

0xecec,	// (0x00025e51) dia3_keypad_num_pane

0xecfe,	// (0x00025e63) dia3_listscroll_pane_ParamLimits

0xecfe,	// (0x00025e63) dia3_listscroll_pane

0xed0c,	// (0x00025e71) dia3_numentry_pane_ParamLimits

0xed0c,	// (0x00025e71) dia3_numentry_pane

0x5c42,	// (0x0001cda7) dia3_list_pane

0x5c4d,	// (0x0001cdb2) scroll_pane_cp12

0xf0ce,	// (0x00026233) bg_dia3_numentry_pane

0xed1a,	// (0x00025e7f) dia3_numentry_pane_t1

0xed29,	// (0x00025e8e) cell_dia3_key_num_pane

0xed31,	// (0x00025e96) cell_dia3_key0_fun_pane_ParamLimits

0xed31,	// (0x00025e96) cell_dia3_key0_fun_pane

0xed3e,	// (0x00025ea3) cell_dia3_key1_fun_pane_ParamLimits

0xed3e,	// (0x00025ea3) cell_dia3_key1_fun_pane

0xed4b,	// (0x00025eb0) dia3_listrow_pane

0x4ab6,	// (0x0001bc1b) bg_dia3_numentry_pane_g1

0xf0ce,	// (0x00026233) bg_button_pane_cp21

0x5c58,	// (0x0001cdbd) cell_dia3_key_num_pane_t1

0x5c66,	// (0x0001cdcb) cell_dia3_key_num_pane_t2

0x5c75,	// (0x0001cdda) cell_dia3_key_num_pane_t3

0x5c84,	// (0x0001cde9) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0002705f) cell_dia3_key_num_pane_t

0xf0ce,	// (0x00026233) bg_button_pane_cp19

0xed58,	// (0x00025ebd) cell_dia3_key0_fun_pane_g1

0xf0ce,	// (0x00026233) bg_button_pane_cp20

0xed60,	// (0x00025ec5) cell_dia3_key1_fun_pane_g1

0xed68,	// (0x00025ecd) area_left_week_number_pane

0xed72,	// (0x00025ed7) area_top_day_name_pane

0xed7e,	// (0x00025ee3) frame_month_view_pane

0xed88,	// (0x00025eed) grid_month_view_pane

0x5c93,	// (0x0001cdf8) cell_top_day_name_pane_ParamLimits

0x5c93,	// (0x0001cdf8) cell_top_day_name_pane

0xed92,	// (0x00025ef7) cell_area_left_week_number_pane_ParamLimits

0xed92,	// (0x00025ef7) cell_area_left_week_number_pane

0xeda6,	// (0x00025f0b) cell_month_view_pane_ParamLimits

0xeda6,	// (0x00025f0b) cell_month_view_pane

0x5cad,	// (0x0001ce12) frm_month_g1

0xedc3,	// (0x00025f28) frm_month_g2

0xedcd,	// (0x00025f32) frm_month_g3

0xedd7,	// (0x00025f3c) frm_month_g4

0xede1,	// (0x00025f46) frm_month_g5

0xedeb,	// (0x00025f50) frm_month_g6

0xedf5,	// (0x00025f5a) frm_month_g7

0x5cb6,	// (0x0001ce1b) frm_month_g8

0x5cbf,	// (0x0001ce24) frm_month_g9

0x5cc8,	// (0x0001ce2d) frm_month_g10

0x5cd1,	// (0x0001ce36) frm_month_g11

0x5cda,	// (0x0001ce3f) frm_month_g12

0x5ce3,	// (0x0001ce48) frm_month_g13

0x5cec,	// (0x0001ce51) frm_month_g14

0x5cf7,	// (0x0001ce5c) frm_month_g15

0x5d02,	// (0x0001ce67) frm_month_g16

0x000f,

0xff03,	// (0x00027068) frm_month_g

0xedff,	// (0x00025f64) cell_top_day_name_pane_t1

0xee0e,	// (0x00025f73) cell_area_left_week_number_pane_g1

0xee16,	// (0x00025f7b) cell_area_left_week_number_pane_t1

0x2ec3,	// (0x0001a028) cell_month_view_pane_g1

0xee25,	// (0x00025f8a) cell_month_view_pane_t1

0xf0ce,	// (0x00026233) main_fps_pane

0x50ab,	// (0x0001c210) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x50ab,	// (0x0001c210) cmail_ddmenu_btn02_pane_cp1

0x50c7,	// (0x0001c22c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x50c7,	// (0x0001c22c) cmail_ddmenu_btn02_pane_cp2

0xe744,	// (0x000258a9) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe744,	// (0x000258a9) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00026f92) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00026f92) cmail_ddmenu_btn02_pane_g

0xe762,	// (0x000258c7) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe762,	// (0x000258c7) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00026f97) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00026f97) cmail_ddmenu_btn02_pane_t

0xee34,	// (0x00025f99) fps_text_pane_ParamLimits

0xee34,	// (0x00025f99) fps_text_pane

0xee41,	// (0x00025fa6) main_fps_pane_g1_ParamLimits

0xee41,	// (0x00025fa6) main_fps_pane_g1

0xee4f,	// (0x00025fb4) wait_bar_pane_cp010_ParamLimits

0xee4f,	// (0x00025fb4) wait_bar_pane_cp010

0xee5b,	// (0x00025fc0) fps_text_pane_t1_ParamLimits

0xee5b,	// (0x00025fc0) fps_text_pane_t1

0xc48d,	// (0x000235f2) cam4_image_uncrop_pane_g1

0xc496,	// (0x000235fb) cam4_image_uncrop_pane_g2

0xc49f,	// (0x00023604) cam4_image_uncrop_pane_g3

0xc4a8,	// (0x0002360d) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x00026a5e) cam4_image_uncrop_pane_g

0xed4b,	// (0x00025eb0) dia3_listrow_pane_ParamLimits

0xf0ce,	// (0x00026233) main_phob2_pane

0xe2b4,	// (0x00025419) cell_tport_appsw_pane_cp02_ParamLimits

0xe2b4,	// (0x00025419) cell_tport_appsw_pane_cp02

0xe2c3,	// (0x00025428) cell_tport_appsw_pane_cp03_ParamLimits

0xe2c3,	// (0x00025428) cell_tport_appsw_pane_cp03

0xf0ce,	// (0x00026233) phob2_contact_card_pane

0xf0ce,	// (0x00026233) phob2_listscroll_pane

0x5d0d,	// (0x0001ce72) phob2_list_pane

0x5d15,	// (0x0001ce7a) scroll_pane_cp034

0xee74,	// (0x00025fd9) phob2_cc_data_pane_ParamLimits

0xee74,	// (0x00025fd9) phob2_cc_data_pane

0xee8e,	// (0x00025ff3) phob2_cc_listscroll_pane_ParamLimits

0xee8e,	// (0x00025ff3) phob2_cc_listscroll_pane

0xeea8,	// (0x0002600d) list_double_large_graphic_phob2_pane_ParamLimits

0xeea8,	// (0x0002600d) list_double_large_graphic_phob2_pane

0xeec6,	// (0x0002602b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xeec6,	// (0x0002602b) list_double_large_graphic_phob2_pane_g1

0x5d1d,	// (0x0001ce82) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x5d1d,	// (0x0001ce82) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x00027089) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x00027089) list_double_large_graphic_phob2_pane_g

0xeed3,	// (0x00026038) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xeed3,	// (0x00026038) list_double_large_graphic_phob2_pane_t1

0xeee8,	// (0x0002604d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xeee8,	// (0x0002604d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0002708e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0002708e) list_double_large_graphic_phob2_pane_t

0xf0ce,	// (0x00026233) list_highlight_pane_cp024

0x5d29,	// (0x0001ce8e) phob2_cc_button_pane

0xeefa,	// (0x0002605f) phob2_cc_data_pane_g1_ParamLimits

0xeefa,	// (0x0002605f) phob2_cc_data_pane_g1

0xef06,	// (0x0002606b) phob2_cc_data_pane_g2_ParamLimits

0xef06,	// (0x0002606b) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x00027093) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x00027093) phob2_cc_data_pane_g

0xef12,	// (0x00026077) phob2_cc_data_pane_t1_ParamLimits

0xef12,	// (0x00026077) phob2_cc_data_pane_t1

0xef24,	// (0x00026089) phob2_cc_data_pane_t2_ParamLimits

0xef24,	// (0x00026089) phob2_cc_data_pane_t2

0xef36,	// (0x0002609b) phob2_cc_data_pane_t3_ParamLimits

0xef36,	// (0x0002609b) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x00027098) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x00027098) phob2_cc_data_pane_t

0x5d31,	// (0x0001ce96) phob2_cc_list_pane_ParamLimits

0x5d31,	// (0x0001ce96) phob2_cc_list_pane

0x408d,	// (0x0001b1f2) scroll_pane_cp035_ParamLimits

0x408d,	// (0x0001b1f2) scroll_pane_cp035

0x0056,	// (0x000171bb) bg_button_pane_cp033

0x5d3d,	// (0x0001cea2) phob2_cc_button_pane_g1

0x5d49,	// (0x0001ceae) phob2_cc_button_pane_t1

0x5d5e,	// (0x0001cec3) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0002709f) phob2_cc_button_pane_t

0xef48,	// (0x000260ad) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xef48,	// (0x000260ad) list_double_large_graphic_phob2_cc_pane

0xef6f,	// (0x000260d4) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xef6f,	// (0x000260d4) list_double_large_graphic_phob2_cc_pane_g1

0xef80,	// (0x000260e5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xef80,	// (0x000260e5) list_double_large_graphic_phob2_cc_pane_g2

0xef8c,	// (0x000260f1) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xef8c,	// (0x000260f1) list_double_large_graphic_phob2_cc_pane_g3

0xef98,	// (0x000260fd) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xef98,	// (0x000260fd) list_double_large_graphic_phob2_cc_pane_g4

0xefa4,	// (0x00026109) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xefa4,	// (0x00026109) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x000270a4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x000270a4) list_double_large_graphic_phob2_cc_pane_g

0xefb0,	// (0x00026115) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xefb0,	// (0x00026115) list_double_large_graphic_phob2_cc_pane_t1

0xefd9,	// (0x0002613e) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xefd9,	// (0x0002613e) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x000270af) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x000270af) list_double_large_graphic_phob2_cc_pane_t

0x5d70,	// (0x0001ced5) list_highlight_pane_cp025_ParamLimits

0x5d70,	// (0x0001ced5) list_highlight_pane_cp025

0x0056,	// (0x000171bb) bg_button_pane_cp033_ParamLimits

0x5d3d,	// (0x0001cea2) phob2_cc_button_pane_g1_ParamLimits

0x5d49,	// (0x0001ceae) phob2_cc_button_pane_t1_ParamLimits

0x5d5e,	// (0x0001cec3) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0002709f) phob2_cc_button_pane_t_ParamLimits

0x85b1,	// (0x0001f716) popup_wgtman_window

0x3e03,	// (0x0001af68) scroll_pane_cp038

0xeadc,	// (0x00025c41) wgtman_btn_pane_cp_01_ParamLimits

0xeadc,	// (0x00025c41) wgtman_btn_pane_cp_01

0x5d7e,	// (0x0001cee3) wgtman_content_pane

0x5d87,	// (0x0001ceec) wgtman_heading_pane

0xf0ce,	// (0x00026233) bg_heading_pane_cp02

0x5d90,	// (0x0001cef5) wgtman_heading_pane_g1

0x5d98,	// (0x0001cefd) wgtman_heading_pane_t1

0x5da6,	// (0x0001cf0b) scroll_pane_cp036

0x5dae,	// (0x0001cf13) wgtman_list_pane

0x5db6,	// (0x0001cf1b) wgtman_list_pane_t1_ParamLimits

0x5db6,	// (0x0001cf1b) wgtman_list_pane_t1

0x7db0,	// (0x0001ef15) cam4_grid_pane

0xcbd3,	// (0x00023d38) bg_button_pane_cp015_ParamLimits

0xcbe5,	// (0x00023d4a) bg_button_pane_cp016_ParamLimits

0xcbf8,	// (0x00023d5d) bg_button_pane_cp017_ParamLimits

0xcc4e,	// (0x00023db3) popup_vitu2_query_window_g3_ParamLimits

0xcc4e,	// (0x00023db3) popup_vitu2_query_window_g3

0xcd09,	// (0x00023e6e) popup_vitu2_query_window_t6_ParamLimits

0xcd09,	// (0x00023e6e) popup_vitu2_query_window_t6

0xcd34,	// (0x00023e99) popup_vitu2_query_window_t7_ParamLimits

0xcd34,	// (0x00023e99) popup_vitu2_query_window_t7

0x5b2f,	// (0x0001cc94) cam4_grid_pane_g1

0x5b38,	// (0x0001cc9d) cam4_grid_pane_g2

0x5dd0,	// (0x0001cf35) cam4_grid_pane_g3

0x5dd9,	// (0x0001cf3e) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x000270b4) cam4_grid_pane_g

0x8fd2,	// (0x00020137) aid_placing_vt_slider_lsc_ParamLimits

0x931e,	// (0x00020483) vidtel_button_pane_ParamLimits

0x931e,	// (0x00020483) vidtel_button_pane

0x5de4,	// (0x0001cf49) bg_button_pane_cp034

0xf002,	// (0x00026167) vidtel_button_pane_g1

0x5dee,	// (0x0001cf53) vidtel_button_pane_t1

0x3f70,	// (0x0001b0d5) aid_size_vtel_slider_touch

0x408d,	// (0x0001b1f2) scroll_pane_cp039

0x4af4,	// (0x0001bc59) ncim_query_button_pane_cp01_ParamLimits

0x4b13,	// (0x0001bc78) ncimui_query_pane_g1_ParamLimits

0x0056,	// (0x000171bb) input_focus_pane_cp012_ParamLimits

0x4b38,	// (0x0001bc9d) ncim_query_entry_pane_t1_ParamLimits

0x408d,	// (0x0001b1f2) scroll_pane_cp039_ParamLimits

0xa209,	// (0x0002136e) navi_pane_bcale_mc_g1

0xa211,	// (0x00021376) navi_pane_bcale_mc_t1

0x5110,	// (0x0001c275) main_sp_fs_email_pane_g1

0x5118,	// (0x0001c27d) main_sp_fs_email_pane_g2

0x0001,

0xfcf0,	// (0x00026e55) main_sp_fs_email_pane_g

0x563d,	// (0x0001c7a2) list_single_cale_mrui_row_pane_g3_ParamLimits

0x563d,	// (0x0001c7a2) list_single_cale_mrui_row_pane_g3

0xe78a,	// (0x000258ef) list_single_recal_day_pane_g5_event_pane

0x5803,	// (0x0001c968) list_single_recal_day_pane_g7

0x5dfc,	// (0x0001cf61) list_recal_day_event_pane_cp01

0x5e05,	// (0x0001cf6a) list_recal_vselct_arw_lo_pane_cp01

0x5e0d,	// (0x0001cf72) list_recal_vselct_arw_up_pane_cp01

0x5e15,	// (0x0001cf7a) list_recal_vselct_pane_cp01

0x3fe2,	// (0x0001b147) list_recal_day_event_pane_cp01_g1

0x5e1f,	// (0x0001cf84) list_recal_day_event_pane_cp01_t1

0x580b,	// (0x0001c970) list_single_recal_day_pane_t1_ParamLimits

0x581d,	// (0x0001c982) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00026fa7) list_single_recal_day_pane_t_ParamLimits

0x077d,	// (0x000178e2) bg_notes_pane_ParamLimits

0x078b,	// (0x000178f0) list_notes_pane_ParamLimits

0x8838,	// (0x0001f99d) scroll_pane_cp06_ParamLimits

0x07c7,	// (0x0001792c) main_notes_pane_ParamLimits

0xf0ce,	// (0x00026233) main_welc_pane

0xf00a,	// (0x0002616f) main_welc_body_pane_ParamLimits

0xf00a,	// (0x0002616f) main_welc_body_pane

0xf024,	// (0x00026189) main_welc_opti_pane_ParamLimits

0xf024,	// (0x00026189) main_welc_opti_pane

0xf057,	// (0x000261bc) main_welc_pane_t1_ParamLimits

0xf057,	// (0x000261bc) main_welc_pane_t1

0xe33c,	// (0x000254a1) main_welc_body_row_pane_ParamLimits

0xe33c,	// (0x000254a1) main_welc_body_row_pane

0xf071,	// (0x000261d6) main_welc_opti_row_pane_ParamLimits

0xf071,	// (0x000261d6) main_welc_opti_row_pane

0x5e2d,	// (0x0001cf92) main_welc_opti_row_pane_g1

0x5e35,	// (0x0001cf9a) main_welc_opti_row_pane_t1

0x5e44,	// (0x0001cfa9) main_welc_body_row_pane_t1

0x5aaa,	// (0x0001cc0f) popup_notif_wgt_heading_pane

0x5ac4,	// (0x0001cc29) aid_size_list_notif_wgt_del_ParamLimits

0x5ad1,	// (0x0001cc36) list_notif_wgt_row_pane_g1_ParamLimits

0x5add,	// (0x0001cc42) list_notif_wgt_row_pane_g2_ParamLimits

0x5ae9,	// (0x0001cc4e) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0002700e) list_notif_wgt_row_pane_g_ParamLimits

0x5af6,	// (0x0001cc5b) list_notif_wgt_row_pane_t1_ParamLimits

0x5b0b,	// (0x0001cc70) list_notif_wgt_row_pane_t2_ParamLimits

0x5b1d,	// (0x0001cc82) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x00027015) list_notif_wgt_row_pane_t_ParamLimits

0xeb6e,	// (0x00025cd3) listrow_wgtman_pane_g1_ParamLimits

0xeb7b,	// (0x00025ce0) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x00027039) listrow_wgtman_pane_g_ParamLimits

0xeb99,	// (0x00025cfe) listrow_wgtman_pane_t1_ParamLimits

0xebb1,	// (0x00025d16) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0002703e) listrow_wgtman_pane_t_ParamLimits

0xebd7,	// (0x00025d3c) wait_bar_pane_cp09_ParamLimits

0xf0ce,	// (0x00026233) bg_popup_heading_pane_cp02

0x5e53,	// (0x0001cfb8) popup_notif_wgt_heading_pane_g1

0x5e5b,	// (0x0001cfc0) popup_notif_wgt_heading_pane_t1

0xf0ce,	// (0x00026233) main_vids_pane

0xf0ce,	// (0x00026233) vids_listscroll_pane

0xf082,	// (0x000261e7) scroll_pane_cp040

0xf0ce,	// (0x00026233) vids_list_pane

0xf08d,	// (0x000261f2) vids_list_double_pane_ParamLimits

0xf08d,	// (0x000261f2) vids_list_double_pane

0xf0a7,	// (0x0002620c) vids_list_double_pane_g1

0xf0b0,	// (0x00026215) vids_list_double_pane_t1

0xf0c0,	// (0x00026225) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x000270c2) vids_list_double_pane_t

0x741f,	// (0x0001e584) main_ncimui_pane_ParamLimits

0xd76b,	// (0x000248d0) main_ncimui_pane_g1_ParamLimits

0xd777,	// (0x000248dc) main_ncimui_pane_g2_ParamLimits

0xd777,	// (0x000248dc) main_ncimui_pane_g2

0x0001,

0xfbf5,	// (0x00026d5a) main_ncimui_pane_g_ParamLimits

0xfbf5,	// (0x00026d5a) main_ncimui_pane_g

0xf03d,	// (0x000261a2) main_welc_pane_g1_ParamLimits

0xf03d,	// (0x000261a2) main_welc_pane_g1

0xf049,	// (0x000261ae) main_welc_pane_g2_ParamLimits

0xf049,	// (0x000261ae) main_welc_pane_g2

0x0001,

0xff58,	// (0x000270bd) main_welc_pane_g_ParamLimits

0xff58,	// (0x000270bd) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
