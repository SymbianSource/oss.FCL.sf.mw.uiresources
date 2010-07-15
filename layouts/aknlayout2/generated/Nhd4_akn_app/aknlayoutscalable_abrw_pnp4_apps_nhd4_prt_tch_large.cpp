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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0009a54c };

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
0x0c6d,	// (0x0009b1b9) Screen

0x0c79,	// (0x0009b1c5) application_window

0x0cd5,	// (0x0009b221) area_bottom_pane_ParamLimits

0x0cd5,	// (0x0009b221) area_bottom_pane

0x0d2e,	// (0x0009b27a) area_top_pane_ParamLimits

0x0d2e,	// (0x0009b27a) area_top_pane

0x0d92,	// (0x0009b2de) call_video_uplink_pane_ParamLimits

0x0d92,	// (0x0009b2de) call_video_uplink_pane

0x0dd1,	// (0x0009b31d) main_pane_ParamLimits

0x0dd1,	// (0x0009b31d) main_pane

0xc922,	// (0x000a6e6e) context_pane

0x42bd,	// (0x0009e809) navi_pane

0x42e3,	// (0x0009e82f) popup_cale_events_window_ParamLimits

0x42e3,	// (0x0009e82f) popup_cale_events_window

0xc935,	// (0x000a6e81) popup_mup_playback_window

0x42fb,	// (0x0009e847) signal_pane

0xa890,	// (0x000a4ddc) main_browser_pane

0xaa7c,	// (0x000a4fc8) main_burst_pane

0x413f,	// (0x0009e68b) main_calc_pane

0xc908,	// (0x000a6e54) main_cale_day_pane

0x1531,	// (0x0009ba7d) main_cale_month_pane

0xc908,	// (0x000a6e54) main_cale_week_pane

0xaa7c,	// (0x000a4fc8) main_call_pane

0xa42e,	// (0x000a497a) main_call_poc_pane

0xaa7c,	// (0x000a4fc8) main_camera_pane

0xaa7c,	// (0x000a4fc8) main_chi_dic_pane

0xb25f,	// (0x000a57ab) main_clock_pane

0xa42e,	// (0x000a497a) main_fmradio_pane

0xaa7c,	// (0x000a4fc8) main_graph_messa_pane

0xa42e,	// (0x000a497a) main_help_pane

0xa890,	// (0x000a4ddc) main_im_pane

0xa7bf,	// (0x000a4d0b) main_image_pane_ParamLimits

0xa7bf,	// (0x000a4d0b) main_image_pane

0xa42e,	// (0x000a497a) main_location2_pane

0xaa7c,	// (0x000a4fc8) main_location_pane

0xa7bf,	// (0x000a4d0b) main_messa_pane

0xa42e,	// (0x000a497a) main_mp2_pane

0xaa7c,	// (0x000a4fc8) main_mp_pane

0xa42e,	// (0x000a497a) main_msg_pane

0xa42e,	// (0x000a497a) main_mup_eq_pane

0xa42e,	// (0x000a497a) main_mup_pane

0xa890,	// (0x000a4ddc) main_notes_pane

0xa42e,	// (0x000a497a) main_pec_pane

0xa42e,	// (0x000a497a) main_phob_pane

0xa42e,	// (0x000a497a) main_pinb_pane

0xa42e,	// (0x000a497a) main_postcard_pane

0xa42e,	// (0x000a497a) main_qdial_pane

0xaa7c,	// (0x000a4fc8) main_skin_pane

0xa42e,	// (0x000a497a) main_smil2_pane

0xaa7c,	// (0x000a4fc8) main_smil_pane

0xaa7c,	// (0x000a4fc8) main_video_pane

0xaa7c,	// (0x000a4fc8) main_video_tele_pane

0xa7bf,	// (0x000a4d0b) main_viewer_pane_ParamLimits

0xa7bf,	// (0x000a4d0b) main_viewer_pane

0xaa7c,	// (0x000a4fc8) main_vorec_pane

0x418b,	// (0x0009e6d7) popup_blid_sat_info_window_ParamLimits

0x418b,	// (0x0009e6d7) popup_blid_sat_info_window

0x41ab,	// (0x0009e6f7) popup_dyc_status_message_window_ParamLimits

0x41ab,	// (0x0009e6f7) popup_dyc_status_message_window

0x41b9,	// (0x0009e705) popup_grid_large_graphic_window_ParamLimits

0x41b9,	// (0x0009e705) popup_grid_large_graphic_window

0x4248,	// (0x0009e794) popup_loc_request_window_ParamLimits

0x4248,	// (0x0009e794) popup_loc_request_window

0x4295,	// (0x0009e7e1) popup_wml_address_window_ParamLimits

0x4295,	// (0x0009e7e1) popup_wml_address_window

0x4017,	// (0x0009e563) call_muted_g1

0x3cd3,	// (0x0009e21f) popup_call_audio_conf_window_ParamLimits

0x3cd3,	// (0x0009e21f) popup_call_audio_conf_window

0x4027,	// (0x0009e573) popup_call_audio_first_window_ParamLimits

0x4027,	// (0x0009e573) popup_call_audio_first_window

0x4067,	// (0x0009e5b3) popup_call_audio_in_window_ParamLimits

0x4067,	// (0x0009e5b3) popup_call_audio_in_window

0x408b,	// (0x0009e5d7) popup_call_audio_out_window_ParamLimits

0x408b,	// (0x0009e5d7) popup_call_audio_out_window

0x40ad,	// (0x0009e5f9) popup_call_audio_second_window_ParamLimits

0x40ad,	// (0x0009e5f9) popup_call_audio_second_window

0x40dd,	// (0x0009e629) popup_call_audio_wait_window_ParamLimits

0x40dd,	// (0x0009e629) popup_call_audio_wait_window

0x40fe,	// (0x0009e64a) popup_number_entry_window_ParamLimits

0x40fe,	// (0x0009e64a) popup_number_entry_window

0x9bf0,	// (0x000a413c) bg_popup_call_pane_cp05_ParamLimits

0x9bf0,	// (0x000a413c) bg_popup_call_pane_cp05

0x9c10,	// (0x000a415c) popup_number_entry_window_t1

0x9c23,	// (0x000a416f) popup_number_entry_window_t2

0x9c35,	// (0x000a4181) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x000a95fb) popup_number_entry_window_t

0x9c47,	// (0x000a4193) text_title_cp2

0x9c5a,	// (0x000a41a6) bg_popup_call_pane_cp_ParamLimits

0x9c5a,	// (0x000a41a6) bg_popup_call_pane_cp

0x9c68,	// (0x000a41b4) call_thumbnail_pane

0x9c70,	// (0x000a41bc) popup_call_audio_in_window_g1_ParamLimits

0x9c70,	// (0x000a41bc) popup_call_audio_in_window_g1

0x9c7c,	// (0x000a41c8) popup_call_audio_in_window_g2_ParamLimits

0x9c7c,	// (0x000a41c8) popup_call_audio_in_window_g2

0x9c88,	// (0x000a41d4) popup_call_audio_in_window_g3_ParamLimits

0x9c88,	// (0x000a41d4) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x000a9604) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x000a9604) popup_call_audio_in_window_g

0x9c94,	// (0x000a41e0) popup_call_audio_in_window_t1_ParamLimits

0x9c94,	// (0x000a41e0) popup_call_audio_in_window_t1

0x9cb0,	// (0x000a41fc) popup_call_audio_in_window_t2_ParamLimits

0x9cb0,	// (0x000a41fc) popup_call_audio_in_window_t2

0x9ccc,	// (0x000a4218) popup_call_audio_in_window_t3_ParamLimits

0x9ccc,	// (0x000a4218) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x000a960b) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x000a960b) popup_call_audio_in_window_t

0x9c5a,	// (0x000a41a6) bg_popup_call_pane_cp01_ParamLimits

0x9c5a,	// (0x000a41a6) bg_popup_call_pane_cp01

0x9c68,	// (0x000a41b4) call_thumbnail_pane_cp02

0x9cdf,	// (0x000a422b) call_type_pane_cp022

0x9ce7,	// (0x000a4233) popup_call_audio_out_window_g1_ParamLimits

0x9ce7,	// (0x000a4233) popup_call_audio_out_window_g1

0x9cf9,	// (0x000a4245) popup_call_audio_out_window_g2_ParamLimits

0x9cf9,	// (0x000a4245) popup_call_audio_out_window_g2

0x9d05,	// (0x000a4251) popup_call_audio_out_window_g3_ParamLimits

0x9d05,	// (0x000a4251) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x000a9612) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x000a9612) popup_call_audio_out_window_g

0x9d17,	// (0x000a4263) popup_call_audio_out_window_t1_ParamLimits

0x9d17,	// (0x000a4263) popup_call_audio_out_window_t1

0x9d2f,	// (0x000a427b) popup_call_audio_out_window_t2_ParamLimits

0x9d2f,	// (0x000a427b) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x000a9619) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x000a9619) popup_call_audio_out_window_t

0x9d44,	// (0x000a4290) bg_popup_call_pane_ParamLimits

0x9d44,	// (0x000a4290) bg_popup_call_pane

0x0fed,	// (0x0009b539) call_thumbnail_pane_cp_ParamLimits

0x0fed,	// (0x0009b539) call_thumbnail_pane_cp

0x9dc8,	// (0x000a4314) call_type_pane_cp01_ParamLimits

0x9dc8,	// (0x000a4314) call_type_pane_cp01

0x9e0c,	// (0x000a4358) popup_call_audio_first_window_g1_ParamLimits

0x9e0c,	// (0x000a4358) popup_call_audio_first_window_g1

0x9e58,	// (0x000a43a4) popup_call_audio_first_window_g2_ParamLimits

0x9e58,	// (0x000a43a4) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x000a961e) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x000a961e) popup_call_audio_first_window_g

0x9e9c,	// (0x000a43e8) popup_call_audio_first_window_t1_ParamLimits

0x9e9c,	// (0x000a43e8) popup_call_audio_first_window_t1

0xa373,	// (0x000a48bf) popup_call_audio_first_window_t4_ParamLimits

0xa373,	// (0x000a48bf) popup_call_audio_first_window_t4

0xa3ff,	// (0x000a494b) popup_call_audio_first_window_t5_ParamLimits

0xa3ff,	// (0x000a494b) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x000a9623) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x000a9623) popup_call_audio_first_window_t

0xa42e,	// (0x000a497a) bg_popup_call_pane_cp02

0xa438,	// (0x000a4984) call_type_pane_cp023

0xa440,	// (0x000a498c) popup_call_audio_wait_window_g1

0xa448,	// (0x000a4994) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x000a962a) popup_call_audio_wait_window_g

0xa450,	// (0x000a499c) popup_call_audio_wait_window_t3

0xa45e,	// (0x000a49aa) bg_popup_call_pane_cp03_ParamLimits

0xa45e,	// (0x000a49aa) bg_popup_call_pane_cp03

0xa4be,	// (0x000a4a0a) call_thumbnail_pane_cp011_ParamLimits

0xa4be,	// (0x000a4a0a) call_thumbnail_pane_cp011

0xa4ca,	// (0x000a4a16) call_type_pane_cp034_ParamLimits

0xa4ca,	// (0x000a4a16) call_type_pane_cp034

0xa506,	// (0x000a4a52) popup_call_audio_second_window_g1_ParamLimits

0xa506,	// (0x000a4a52) popup_call_audio_second_window_g1

0xa542,	// (0x000a4a8e) popup_call_audio_second_window_g2_ParamLimits

0xa542,	// (0x000a4a8e) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x000a962f) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x000a962f) popup_call_audio_second_window_g

0xa6b4,	// (0x000a4c00) popup_call_audio_second_window_t1_ParamLimits

0xa6b4,	// (0x000a4c00) popup_call_audio_second_window_t1

0xa735,	// (0x000a4c81) popup_call_audio_second_window_t2_ParamLimits

0xa735,	// (0x000a4c81) popup_call_audio_second_window_t2

0xa76b,	// (0x000a4cb7) popup_call_audio_second_window_t3_ParamLimits

0xa76b,	// (0x000a4cb7) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x000a9634) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x000a9634) popup_call_audio_second_window_t

0xa42e,	// (0x000a497a) bg_popup_call_pane_cp04

0xa7a1,	// (0x000a4ced) list_conf_pane

0xa7a9,	// (0x000a4cf5) popup_call_audio_conf_window_t1

0xa7b7,	// (0x000a4d03) call_thumbnail_pane_g1

0xa7bf,	// (0x000a4d0b) bg_pinb_pane_ParamLimits

0xa7bf,	// (0x000a4d0b) bg_pinb_pane

0xa7cd,	// (0x000a4d19) find_pinb_pane

0xa7d6,	// (0x000a4d22) listscroll_pinb_pane_ParamLimits

0xa7d6,	// (0x000a4d22) listscroll_pinb_pane

0xa7e5,	// (0x000a4d31) pinb_bg_pane_g1

0x1011,	// (0x0009b55d) pinb_bg_pane_g2

0x101d,	// (0x0009b569) pinb_bg_pane_g3

0x1029,	// (0x0009b575) pinb_bg_pane_g4

0x1035,	// (0x0009b581) pinb_bg_pane_g5

0x1041,	// (0x0009b58d) pinb_bg_pane_g6

0x104c,	// (0x0009b598) pinb_bg_pane_g7

0x1057,	// (0x0009b5a3) pinb_bg_pane_g8

0x1062,	// (0x0009b5ae) pinb_bg_pane_g9

0x106c,	// (0x0009b5b8) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x000a963b) pinb_bg_pane_g

0x1089,	// (0x0009b5d5) grid_pinb_pane

0x1094,	// (0x0009b5e0) list_pinb_pane

0x109f,	// (0x0009b5eb) scroll_pane_cp01_ParamLimits

0x109f,	// (0x0009b5eb) scroll_pane_cp01

0xa7ef,	// (0x000a4d3b) find_pinb_pane_g1_ParamLimits

0xa7ef,	// (0x000a4d3b) find_pinb_pane_g1

0xa807,	// (0x000a4d53) find_pinb_pane_t1

0xa819,	// (0x000a4d65) find_pinb_pane_t2

0x0001,

0xf109,	// (0x000a9655) find_pinb_pane_t

0xa82e,	// (0x000a4d7a) input_focus_pane_cp01_ParamLimits

0xa82e,	// (0x000a4d7a) input_focus_pane_cp01

0x10b1,	// (0x0009b5fd) cell_pinb_pane_ParamLimits

0x10b1,	// (0x0009b5fd) cell_pinb_pane

0x10dc,	// (0x0009b628) cell_pinb_pane_g1_ParamLimits

0x10dc,	// (0x0009b628) cell_pinb_pane_g1

0xa83a,	// (0x000a4d86) cell_pinb_pane_g2_ParamLimits

0xa83a,	// (0x000a4d86) cell_pinb_pane_g2

0xa846,	// (0x000a4d92) cell_pinb_pane_g3_ParamLimits

0xa846,	// (0x000a4d92) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x000a965a) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x000a965a) cell_pinb_pane_g

0xa42e,	// (0x000a497a) grid_highlight_pane_cp01

0x10f1,	// (0x0009b63d) list_pinb_item_pane_ParamLimits

0x10f1,	// (0x0009b63d) list_pinb_item_pane

0xa42e,	// (0x000a497a) list_highlight_pane_cp02

0x111a,	// (0x0009b666) list_pinb_item_pane_g1_ParamLimits

0x111a,	// (0x0009b666) list_pinb_item_pane_g1

0x1127,	// (0x0009b673) list_pinb_item_pane_g2_ParamLimits

0x1127,	// (0x0009b673) list_pinb_item_pane_g2

0x1133,	// (0x0009b67f) list_pinb_item_pane_g3_ParamLimits

0x1133,	// (0x0009b67f) list_pinb_item_pane_g3

0x1144,	// (0x0009b690) list_pinb_item_pane_g4_ParamLimits

0x1144,	// (0x0009b690) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x000a9661) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x000a9661) list_pinb_item_pane_g

0x1150,	// (0x0009b69c) list_pinb_item_pane_t1_ParamLimits

0x1150,	// (0x0009b69c) list_pinb_item_pane_t1

0x1181,	// (0x0009b6cd) calc_display_pane

0x119f,	// (0x0009b6eb) calc_paper_pane

0x11bb,	// (0x0009b707) grid_calc_pane

0xa42e,	// (0x000a497a) bg_list_pane_cp01

0x11e7,	// (0x0009b733) clock_g1

0x11ef,	// (0x0009b73b) clock_g2

0x0001,

0xf11e,	// (0x000a966a) clock_g

0x11f9,	// (0x0009b745) clock_t1_ParamLimits

0x11f9,	// (0x0009b745) clock_t1

0x120e,	// (0x0009b75a) clock_t2_ParamLimits

0x120e,	// (0x0009b75a) clock_t2

0x1220,	// (0x0009b76c) clock_t3_ParamLimits

0x1220,	// (0x0009b76c) clock_t3

0x1232,	// (0x0009b77e) clock_t4_ParamLimits

0x1232,	// (0x0009b77e) clock_t4

0x1244,	// (0x0009b790) clock_t5_ParamLimits

0x1244,	// (0x0009b790) clock_t5

0x1259,	// (0x0009b7a5) clock_t6_ParamLimits

0x1259,	// (0x0009b7a5) clock_t6

0x126b,	// (0x0009b7b7) clock_t7_ParamLimits

0x126b,	// (0x0009b7b7) clock_t7

0x127d,	// (0x0009b7c9) clock_t8_ParamLimits

0x127d,	// (0x0009b7c9) clock_t8

0x1293,	// (0x0009b7df) clock_t9_ParamLimits

0x1293,	// (0x0009b7df) clock_t9

0x0008,

0xf123,	// (0x000a966f) clock_t_ParamLimits

0xf123,	// (0x000a966f) clock_t

0xa852,	// (0x000a4d9e) popup_clock_analogue_window_cp02

0xa852,	// (0x000a4d9e) popup_clock_digital_window_cp01

0xa85a,	// (0x000a4da6) listscroll_help_pane

0xa42e,	// (0x000a497a) phob_pre_status_pane

0xa864,	// (0x000a4db0) grid_qdial_pane

0xa7bf,	// (0x000a4d0b) listscroll_mce_pane

0xa7bf,	// (0x000a4d0b) bg_notes_pane

0xa86e,	// (0x000a4dba) list_notes_pane

0x12a9,	// (0x0009b7f5) scroll_pane_cp06

0xa87c,	// (0x000a4dc8) bg_calc_paper_pane

0x12b8,	// (0x0009b804) list_calc_pane

0xa890,	// (0x000a4ddc) bg_calc_display_pane

0x12d2,	// (0x0009b81e) calc_display_pane_t1

0x12e7,	// (0x0009b833) calc_display_pane_t2

0x12fc,	// (0x0009b848) calc_display_pane_t3

0x0002,

0xf136,	// (0x000a9682) calc_display_pane_t

0x130e,	// (0x0009b85a) cell_calc_pane_ParamLimits

0x130e,	// (0x0009b85a) cell_calc_pane

0xa89c,	// (0x000a4de8) bg_calc_paper_pane_g1

0xa8a8,	// (0x000a4df4) bg_calc_paper_pane_g2

0xa8b4,	// (0x000a4e00) bg_calc_paper_pane_g3

0xa8c0,	// (0x000a4e0c) bg_calc_paper_pane_g4

0xa8cc,	// (0x000a4e18) bg_calc_paper_pane_g5

0x133b,	// (0x0009b887) bg_calc_paper_pane_g6

0x134c,	// (0x0009b898) bg_calc_paper_pane_g7

0x135d,	// (0x0009b8a9) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x000a9689) bg_calc_paper_pane_g

0x136e,	// (0x0009b8ba) calc_bg_paper_pane_g9

0x137f,	// (0x0009b8cb) list_calc_item_pane_ParamLimits

0x137f,	// (0x0009b8cb) list_calc_item_pane

0xa8d8,	// (0x000a4e24) list_calc_item_pane_g1

0x13ac,	// (0x0009b8f8) list_calc_item_pane_t1_ParamLimits

0x13ac,	// (0x0009b8f8) list_calc_item_pane_t1

0x13be,	// (0x0009b90a) list_calc_item_pane_t2_ParamLimits

0x13be,	// (0x0009b90a) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x000a969a) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x000a969a) list_calc_item_pane_t

0xa8e5,	// (0x000a4e31) cell_calc_pane_g1

0xa8ef,	// (0x000a4e3b) grid_highlight_pane_cp02

0x13ee,	// (0x0009b93a) bg_calc_display_pane_g1

0x13f7,	// (0x0009b943) bg_calc_display_pane_g2

0x1401,	// (0x0009b94d) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x000a96a4) bg_calc_display_pane_g

0x140a,	// (0x0009b956) cell_qdial_pane_ParamLimits

0x140a,	// (0x0009b956) cell_qdial_pane

0x141e,	// (0x0009b96a) cell_qdial_pane_g1_ParamLimits

0x141e,	// (0x0009b96a) cell_qdial_pane_g1

0x142b,	// (0x0009b977) cell_qdial_pane_g2_ParamLimits

0x142b,	// (0x0009b977) cell_qdial_pane_g2

0xa911,	// (0x000a4e5d) cell_qdial_pane_g3_ParamLimits

0xa911,	// (0x000a4e5d) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x000a96ab) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x000a96ab) cell_qdial_pane_g

0x1448,	// (0x0009b994) cell_qdial_pane_t1_ParamLimits

0x1448,	// (0x0009b994) cell_qdial_pane_t1

0x1460,	// (0x0009b9ac) cell_qdial_pane_t2_ParamLimits

0x1460,	// (0x0009b9ac) cell_qdial_pane_t2

0x1473,	// (0x0009b9bf) cell_qdial_pane_t3_ParamLimits

0x1473,	// (0x0009b9bf) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x000a96b4) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x000a96b4) cell_qdial_pane_t

0xa42e,	// (0x000a497a) grid_highlight_pane_cp04

0xa91d,	// (0x000a4e69) thumbnail_qdial_pane_ParamLimits

0xa91d,	// (0x000a4e69) thumbnail_qdial_pane

0xa979,	// (0x000a4ec5) list_help_pane

0xa982,	// (0x000a4ece) scroll_pane_cp02

0x1486,	// (0x0009b9d2) help_list_pane_t1_ParamLimits

0x1486,	// (0x0009b9d2) help_list_pane_t1

0x14bd,	// (0x0009ba09) bg_notes_pane_g2

0x14c5,	// (0x0009ba11) bg_notes_pane_g3

0x14cd,	// (0x0009ba19) notes_bg_pane_g1

0x14d5,	// (0x0009ba21) notes_bg_pane_g4

0x14dd,	// (0x0009ba29) notes_bg_pane_g5

0x14e5,	// (0x0009ba31) notes_bg_pane_g6

0x14ed,	// (0x0009ba39) notes_bg_pane_g7

0x14f5,	// (0x0009ba41) notes_bg_pane_g8

0x14fd,	// (0x0009ba49) notes_bg_pane_g9

0x0006,

0xf186,	// (0x000a96d2) notes_bg_pane_g

0x1505,	// (0x0009ba51) list_notes_text_pane_ParamLimits

0x1505,	// (0x0009ba51) list_notes_text_pane

0xa98b,	// (0x000a4ed7) list_notes_text_pane_g1

0x9f48,	// (0x000a4494) list_notes_text_pane_t1

0x1531,	// (0x0009ba7d) listscroll_cale_week_pane

0x1556,	// (0x0009baa2) bg_cale_heading_pane

0xa9d5,	// (0x000a4f21) bg_cale_pane_cp01

0x1578,	// (0x0009bac4) cale_week_corner_pane

0x1592,	// (0x0009bade) cale_week_day_heading_pane

0x15b4,	// (0x0009bb00) cale_week_scroll_pane_g1

0x15d1,	// (0x0009bb1d) cale_week_scroll_pane_g2

0x15e4,	// (0x0009bb30) cale_week_scroll_pane_g3

0x15f7,	// (0x0009bb43) cale_week_scroll_pane_g4

0x160a,	// (0x0009bb56) cale_week_scroll_pane_g5

0x161d,	// (0x0009bb69) cale_week_scroll_pane_g6

0x1630,	// (0x0009bb7c) cale_week_scroll_pane_g7

0x1645,	// (0x0009bb91) cale_week_scroll_pane_g8

0x165a,	// (0x0009bba6) cale_week_scroll_pane_g9

0x166d,	// (0x0009bbb9) cale_week_scroll_pane_g10

0x1680,	// (0x0009bbcc) cale_week_scroll_pane_g11

0x1693,	// (0x0009bbdf) cale_week_scroll_pane_g12

0x16aa,	// (0x0009bbf6) cale_week_scroll_pane_g13

0x16c5,	// (0x0009bc11) cale_week_scroll_pane_g14

0x16e0,	// (0x0009bc2c) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x000a96e1) cale_week_scroll_pane_g

0x1710,	// (0x0009bc5c) cale_week_time_pane

0x1725,	// (0x0009bc71) grid_cale_week_pane

0xaa04,	// (0x000a4f50) scroll_pane_cp08

0x1744,	// (0x0009bc90) cell_cale_week_pane_ParamLimits

0x1744,	// (0x0009bc90) cell_cale_week_pane

0x17a6,	// (0x0009bcf2) cale_week_day_heading_pane_t1

0x17c1,	// (0x0009bd0d) cale_week_day_heading_pane_t2

0x17dc,	// (0x0009bd28) cale_week_day_heading_pane_t3

0x17f7,	// (0x0009bd43) cale_week_day_heading_pane_t4

0x1812,	// (0x0009bd5e) cale_week_day_heading_pane_t5

0x182d,	// (0x0009bd79) cale_week_day_heading_pane_t6

0x1848,	// (0x0009bd94) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x000a9702) cale_week_day_heading_pane_t

0xaa21,	// (0x000a4f6d) bg_cale_side_pane

0x1863,	// (0x0009bdaf) cale_week_time_pane_t1

0x187d,	// (0x0009bdc9) cale_week_time_pane_t2

0x1897,	// (0x0009bde3) cale_week_time_pane_t3

0x18b1,	// (0x0009bdfd) cale_week_time_pane_t4

0x18cb,	// (0x0009be17) cale_week_time_pane_t5

0x18e5,	// (0x0009be31) cale_week_time_pane_t6

0x1905,	// (0x0009be51) cale_week_time_pane_t7

0x1927,	// (0x0009be73) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x000a9711) cale_week_time_pane_t

0x194b,	// (0x0009be97) cell_cale_week_pane_g2

0x196f,	// (0x0009bebb) cell_cale_week_pane_g3_ParamLimits

0x196f,	// (0x0009bebb) cell_cale_week_pane_g3

0xaa2f,	// (0x000a4f7b) grid_highlight_pane_cp07

0xaa37,	// (0x000a4f83) listscroll_gms_pane

0xaa41,	// (0x000a4f8d) grid_gms_pane

0xaa4a,	// (0x000a4f96) listscroll_gms_pane_g1

0xaa52,	// (0x000a4f9e) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x000a9722) listscroll_gms_pane_g

0x1987,	// (0x0009bed3) scroll_pane_cp010

0x1992,	// (0x0009bede) cell_gms_pane_ParamLimits

0x1992,	// (0x0009bede) cell_gms_pane

0x19a2,	// (0x0009beee) cell_gms_pane_g1

0xaa5a,	// (0x000a4fa6) cell_gms_pane_g2

0xaa62,	// (0x000a4fae) cell_gms_pane_g3

0xaa6b,	// (0x000a4fb7) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x000a9727) cell_gms_pane_g

0xaa74,	// (0x000a4fc0) grid_highlight_pane_cp09

0x3fbf,	// (0x0009e50b) phob_pre_status_pane_g1

0x3fc7,	// (0x0009e513) phob_pre_status_pane_g2

0x3fcf,	// (0x0009e51b) phob_pre_status_pane_g3

0x3fd7,	// (0x0009e523) phob_pre_status_pane_g4

0x0004,

0xf515,	// (0x000a9a61) phob_pre_status_pane_g

0x3fe7,	// (0x0009e533) phob_pre_status_pane_t1

0x3ff7,	// (0x0009e543) phob_pre_status_pane_t2

0x4007,	// (0x0009e553) phob_pre_status_pane_t3

0x0002,

0xf520,	// (0x000a9a6c) phob_pre_status_pane_t

0xaa7c,	// (0x000a4fc8) bg_list_pane_cp05

0x19b2,	// (0x0009befe) grid_vorec_pane

0x19bc,	// (0x0009bf08) vorec_t1

0x19ca,	// (0x0009bf16) vorec_t2

0x19d8,	// (0x0009bf24) vorec_t3

0x19e6,	// (0x0009bf32) vorec_t4

0x9b8a,	// (0x000a40d6) vorec_t5

0x9b98,	// (0x000a40e4) vorec_t6

0x0004,

0xf1e4,	// (0x000a9730) vorec_t

0x9ba6,	// (0x000a40f2) wait_bar_pane_cp01

0x1a02,	// (0x0009bf4e) cell_vorec_pane_ParamLimits

0x1a02,	// (0x0009bf4e) cell_vorec_pane

0x1a15,	// (0x0009bf61) cell_vorec_pane_g1

0xa42e,	// (0x000a497a) grid_highlight_pane_cp05

0x1a2f,	// (0x0009bf7b) cams_zoom_pane

0x1a3b,	// (0x0009bf87) image_vga_pane

0x1a4a,	// (0x0009bf96) main_camera_pane_g1

0x1a58,	// (0x0009bfa4) main_camera_pane_g2

0x1a64,	// (0x0009bfb0) main_camera_pane_g3

0x1a70,	// (0x0009bfbc) main_camera_pane_g4

0x1a7c,	// (0x0009bfc8) main_camera_pane_g5

0x1a88,	// (0x0009bfd4) main_camera_pane_g6

0x1a94,	// (0x0009bfe0) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x000a973b) main_camera_pane_g

0x1aa0,	// (0x0009bfec) main_camera_pane_t1

0x1ab2,	// (0x0009bffe) main_camera_pane_t2

0x0001,

0xf200,	// (0x000a974c) main_camera_pane_t

0x1ad3,	// (0x0009c01f) cams_zoom_pane_cp_ParamLimits

0x1ad3,	// (0x0009c01f) cams_zoom_pane_cp

0x1af7,	// (0x0009c043) image_cif_pane_ParamLimits

0x1af7,	// (0x0009c043) image_cif_pane

0x1b15,	// (0x0009c061) image_subqcif_pane

0x1b1d,	// (0x0009c069) main_video_pane_g1_ParamLimits

0x1b1d,	// (0x0009c069) main_video_pane_g1

0x1b3d,	// (0x0009c089) main_video_pane_g2_ParamLimits

0x1b3d,	// (0x0009c089) main_video_pane_g2

0x1b6d,	// (0x0009c0b9) main_video_pane_g3_ParamLimits

0x1b6d,	// (0x0009c0b9) main_video_pane_g3

0x1b96,	// (0x0009c0e2) main_video_pane_g4_ParamLimits

0x1b96,	// (0x0009c0e2) main_video_pane_g4

0x1bbf,	// (0x0009c10b) main_video_pane_g5_ParamLimits

0x1bbf,	// (0x0009c10b) main_video_pane_g5

0xaa90,	// (0x000a4fdc) main_video_pane_g6_ParamLimits

0xaa90,	// (0x000a4fdc) main_video_pane_g6

0x0006,

0xf205,	// (0x000a9751) main_video_pane_g_ParamLimits

0xf205,	// (0x000a9751) main_video_pane_g

0x1be1,	// (0x0009c12d) main_video_pane_t1_ParamLimits

0x1be1,	// (0x0009c12d) main_video_pane_t1

0xaaaa,	// (0x000a4ff6) cams_zoom_pane_g1

0xaab3,	// (0x000a4fff) cams_zoom_pane_g2

0xaabc,	// (0x000a5008) cams_zoom_pane_g3

0xaac5,	// (0x000a5011) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x000a9760) cams_zoom_pane_g

0x1c2b,	// (0x0009c177) grid_cams_pane

0x1c39,	// (0x0009c185) linegrid_cams_pane

0x1c47,	// (0x0009c193) cell_cams_pane_ParamLimits

0x1c47,	// (0x0009c193) cell_cams_pane

0xaace,	// (0x000a501a) cams_burst_image_pane

0xaad6,	// (0x000a5022) cell_cams_pane_g1

0xa42e,	// (0x000a497a) grid_highlight_pane_cp03

0xa8e5,	// (0x000a4e31) mp_bg_pane_g1

0xa42e,	// (0x000a497a) bg_list_pane_cp03

0xc82d,	// (0x000a6d79) bg_mp_pane

0xc835,	// (0x000a6d81) grid_mp_pane

0xc83d,	// (0x000a6d89) media_player_g1

0xc845,	// (0x000a6d91) media_player_t1

0xc853,	// (0x000a6d9f) media_player_t2

0xc861,	// (0x000a6dad) media_player_t3

0xc86f,	// (0x000a6dbb) media_player_t4

0xc87d,	// (0x000a6dc9) media_player_t5

0xc88b,	// (0x000a6dd7) media_player_t6

0xc899,	// (0x000a6de5) media_player_t7

0x0006,

0x0212,	// (0x0009a75e) media_player_t

0xc8a7,	// (0x000a6df3) wait_bar_pane_cp02

0xf501,	// (0x000a9a4d) main_usb_pane_t

0x3fb6,	// (0x0009e502) cell_mp_pane

0xa8e5,	// (0x000a4e31) cell_mp_pane_g1

0xa42e,	// (0x000a497a) grid_highlight_pane_cp06

0xaade,	// (0x000a502a) grid_skin_colour_pane

0xaae6,	// (0x000a5032) list_highlight_pane_cp03

0x1d51,	// (0x0009c29d) skin_g1

0xaaee,	// (0x000a503a) skin_t1

0xaafd,	// (0x000a5049) skin_t2

0x0001,

0xf249,	// (0x000a9795) skin_t

0x1d5b,	// (0x0009c2a7) cell_skin_colour_pane_ParamLimits

0x1d5b,	// (0x0009c2a7) cell_skin_colour_pane

0xab0b,	// (0x000a5057) cell_skin_colour_pane_g1

0x1ddf,	// (0x0009c32b) call_video_g1_ParamLimits

0x1ddf,	// (0x0009c32b) call_video_g1

0x1def,	// (0x0009c33b) call_video_g2_ParamLimits

0x1def,	// (0x0009c33b) call_video_g2

0x0001,

0xf24e,	// (0x000a979a) call_video_g_ParamLimits

0xf24e,	// (0x000a979a) call_video_g

0x1e49,	// (0x0009c395) call_video_uplink_pane_cp1_ParamLimits

0x1e49,	// (0x0009c395) call_video_uplink_pane_cp1

0xab1d,	// (0x000a5069) call_video_uplink_pane_cp2

0x1f15,	// (0x0009c461) video_down_crop_pane_ParamLimits

0x1f15,	// (0x0009c461) video_down_crop_pane

0x2007,	// (0x0009c553) video_down_pane_ParamLimits

0x2007,	// (0x0009c553) video_down_pane

0xab25,	// (0x000a5071) video_down_subqcif_pane_ParamLimits

0xab25,	// (0x000a5071) video_down_subqcif_pane

0xab3d,	// (0x000a5089) video_down_subqcif_pane_cp_ParamLimits

0xab3d,	// (0x000a5089) video_down_subqcif_pane_cp

0xab63,	// (0x000a50af) im_reading_pane_ParamLimits

0xab63,	// (0x000a50af) im_reading_pane

0x2127,	// (0x0009c673) im_writing_pane_ParamLimits

0x2127,	// (0x0009c673) im_writing_pane

0x2145,	// (0x0009c691) im_reading_pane_t1

0xab7d,	// (0x000a50c9) list_im_pane

0xab8e,	// (0x000a50da) scroll_pane_cp07

0x219d,	// (0x0009c6e9) im_writing_pane_t1_ParamLimits

0x219d,	// (0x0009c6e9) im_writing_pane_t1

0xaba7,	// (0x000a50f3) im_writing_pane_t2_ParamLimits

0xaba7,	// (0x000a50f3) im_writing_pane_t2

0x0001,

0xf258,	// (0x000a97a4) im_writing_pane_t_ParamLimits

0xf258,	// (0x000a97a4) im_writing_pane_t

0xa42e,	// (0x000a497a) input_focus_pane_cp04

0xa42e,	// (0x000a497a) input_focus_pane_cp05

0x21af,	// (0x0009c6fb) list_im_single_pane_ParamLimits

0x21af,	// (0x0009c6fb) list_im_single_pane

0x21d6,	// (0x0009c722) list_single_im_pane_t1

0x3f7a,	// (0x0009e4c6) blid_accuracy_pane

0x3f82,	// (0x0009e4ce) blid_compass_pane

0x3f8c,	// (0x0009e4d8) main_location_t1

0x3f9a,	// (0x0009e4e6) main_location_t2

0x3fa8,	// (0x0009e4f4) main_location_t3

0x0002,

0xf50e,	// (0x000a9a5a) main_location_t

0xa42e,	// (0x000a497a) aid_levels_location

0xa8e5,	// (0x000a4e31) blid_accuracy_pane_g1

0xa8e5,	// (0x000a4e31) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x000a9806) blid_accuracy_pane_g

0xabef,	// (0x000a513b) wml_content_pane

0xac2d,	// (0x000a5179) wml_button_pane_ParamLimits

0xac2d,	// (0x000a5179) wml_button_pane

0x21e5,	// (0x0009c731) wml_list_single_large_pane_ParamLimits

0x21e5,	// (0x0009c731) wml_list_single_large_pane

0x2210,	// (0x0009c75c) wml_list_single_medium_pane_ParamLimits

0x2210,	// (0x0009c75c) wml_list_single_medium_pane

0x2242,	// (0x0009c78e) wml_list_single_small_pane_ParamLimits

0x2242,	// (0x0009c78e) wml_list_single_small_pane

0xac41,	// (0x000a518d) wml_selection_box_pane_ParamLimits

0xac41,	// (0x000a518d) wml_selection_box_pane

0xac54,	// (0x000a51a0) wml_list_single_pane_t1

0xac63,	// (0x000a51af) wml_list_single_medium_pane_t1

0xac72,	// (0x000a51be) wml_list_single_large_pane_t1

0xac81,	// (0x000a51cd) input_focus_pane_cp02_ParamLimits

0xac81,	// (0x000a51cd) input_focus_pane_cp02

0xac94,	// (0x000a51e0) wml_selection_box_pane_g1

0xac9d,	// (0x000a51e9) wml_selection_box_pane_t1_ParamLimits

0xac9d,	// (0x000a51e9) wml_selection_box_pane_t1

0xa7bf,	// (0x000a4d0b) bg_wml_button_pane_ParamLimits

0xa7bf,	// (0x000a4d0b) bg_wml_button_pane

0xacb5,	// (0x000a5201) wml_button_pane_g1

0xacbd,	// (0x000a5209) wml_button_pane_t1

0xacb5,	// (0x000a5201) wml_button_bg_pane_g1

0xaccd,	// (0x000a5219) wml_button_bg_pane_g2

0xacd5,	// (0x000a5221) wml_button_bg_pane_g3

0xacdd,	// (0x000a5229) wml_button_bg_pane_g4

0xace5,	// (0x000a5231) wml_button_bg_pane_g5

0xaced,	// (0x000a5239) wml_button_bg_pane_g6

0xacf5,	// (0x000a5241) wml_button_bg_pane_g7

0xacfd,	// (0x000a5249) wml_button_bg_pane_g8

0xad05,	// (0x000a5251) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x000a97a9) wml_button_bg_pane_g

0x227f,	// (0x0009c7cb) bg_list_pane_cp02

0xad0d,	// (0x000a5259) mce_header_pane_ParamLimits

0xad0d,	// (0x000a5259) mce_header_pane

0xad23,	// (0x000a526f) mce_icon_pane

0xad23,	// (0x000a526f) mce_image_pane

0xad2c,	// (0x000a5278) mce_text_pane_ParamLimits

0xad2c,	// (0x000a5278) mce_text_pane

0x2289,	// (0x0009c7d5) scroll_pane_cp03

0xac25,	// (0x000a5171) scroll_pane_cp04

0xad3f,	// (0x000a528b) scroll_pane_cp05_ParamLimits

0xad3f,	// (0x000a528b) scroll_pane_cp05

0x2293,	// (0x0009c7df) mce_header_field_pane_ParamLimits

0x2293,	// (0x0009c7df) mce_header_field_pane

0x22b3,	// (0x0009c7ff) mce_header_field_pane_2_ParamLimits

0x22b3,	// (0x0009c7ff) mce_header_field_pane_2

0x22c9,	// (0x0009c815) mce_header_field_pane_3

0x22d1,	// (0x0009c81d) list_single_mce_message_pane_ParamLimits

0x22d1,	// (0x0009c81d) list_single_mce_message_pane

0x22ff,	// (0x0009c84b) list_single_mce_smart_pane_ParamLimits

0x22ff,	// (0x0009c84b) list_single_mce_smart_pane

0xad4b,	// (0x000a5297) input_focus_pane_cp03

0xad54,	// (0x000a52a0) list_header_data_pane

0x2338,	// (0x0009c884) mce_header_field_pane_t1

0x2346,	// (0x0009c892) list_single_mce_header_pane_ParamLimits

0x2346,	// (0x0009c892) list_single_mce_header_pane

0xad5c,	// (0x000a52a8) list_single_mce_header_pane_t1

0xad6b,	// (0x000a52b7) list_single_mce_message_pane_g1

0xad73,	// (0x000a52bf) list_single_mce_message_pane_t1

0x239c,	// (0x0009c8e8) bg_cale_heading_pane_cp01_ParamLimits

0x239c,	// (0x0009c8e8) bg_cale_heading_pane_cp01

0xad81,	// (0x000a52cd) bg_cale_pane_cp02_ParamLimits

0xad81,	// (0x000a52cd) bg_cale_pane_cp02

0x23ea,	// (0x0009c936) cale_month_corner_pane

0x2409,	// (0x0009c955) cale_month_day_heading_pane_ParamLimits

0x2409,	// (0x0009c955) cale_month_day_heading_pane

0x246f,	// (0x0009c9bb) cale_month_pane_g1_ParamLimits

0x246f,	// (0x0009c9bb) cale_month_pane_g1

0x24b2,	// (0x0009c9fe) cale_month_pane_g2_ParamLimits

0x24b2,	// (0x0009c9fe) cale_month_pane_g2

0x24ec,	// (0x0009ca38) cale_month_pane_g3_ParamLimits

0x24ec,	// (0x0009ca38) cale_month_pane_g3

0x253c,	// (0x0009ca88) cale_month_pane_g4_ParamLimits

0x253c,	// (0x0009ca88) cale_month_pane_g4

0x258c,	// (0x0009cad8) cale_month_pane_g5_ParamLimits

0x258c,	// (0x0009cad8) cale_month_pane_g5

0x25dc,	// (0x0009cb28) cale_month_pane_g6_ParamLimits

0x25dc,	// (0x0009cb28) cale_month_pane_g6

0x262c,	// (0x0009cb78) cale_month_pane_g7_ParamLimits

0x262c,	// (0x0009cb78) cale_month_pane_g7

0x2694,	// (0x0009cbe0) cale_month_pane_g8_ParamLimits

0x2694,	// (0x0009cbe0) cale_month_pane_g8

0x26fc,	// (0x0009cc48) cale_month_pane_g9_ParamLimits

0x26fc,	// (0x0009cc48) cale_month_pane_g9

0x275a,	// (0x0009cca6) cale_month_pane_g10_ParamLimits

0x275a,	// (0x0009cca6) cale_month_pane_g10

0x27b8,	// (0x0009cd04) cale_month_pane_g11_ParamLimits

0x27b8,	// (0x0009cd04) cale_month_pane_g11

0x280c,	// (0x0009cd58) cale_month_pane_g12_ParamLimits

0x280c,	// (0x0009cd58) cale_month_pane_g12

0x2862,	// (0x0009cdae) cale_month_pane_g13_ParamLimits

0x2862,	// (0x0009cdae) cale_month_pane_g13

0x000c,

0xf270,	// (0x000a97bc) cale_month_pane_g_ParamLimits

0xf270,	// (0x000a97bc) cale_month_pane_g

0x28b8,	// (0x0009ce04) cale_month_week_pane

0x28dc,	// (0x0009ce28) grid_cale_month_pane_ParamLimits

0x28dc,	// (0x0009ce28) grid_cale_month_pane

0x2939,	// (0x0009ce85) cale_month_day_heading_pane_t1

0x29bf,	// (0x0009cf0b) cale_month_day_heading_pane_t2

0x2a38,	// (0x0009cf84) cale_month_day_heading_pane_t3

0x2ab1,	// (0x0009cffd) cale_month_day_heading_pane_t4

0x2b2a,	// (0x0009d076) cale_month_day_heading_pane_t5

0x2ba3,	// (0x0009d0ef) cale_month_day_heading_pane_t6

0x2c1c,	// (0x0009d168) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x000a97d7) cale_month_day_heading_pane_t

0xaa21,	// (0x000a4f6d) bg_cale_side_pane_cp01

0x2cad,	// (0x0009d1f9) cale_month_week_pane_t1

0x2cc6,	// (0x0009d212) cale_month_week_pane_t2

0x2cdf,	// (0x0009d22b) cale_month_week_pane_t3

0x2cf8,	// (0x0009d244) cale_month_week_pane_t4

0x2d13,	// (0x0009d25f) cale_month_week_pane_t5

0x2d34,	// (0x0009d280) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x000a97e6) cale_month_week_pane_t

0x2d55,	// (0x0009d2a1) cell_cale_month_pane_ParamLimits

0x2d55,	// (0x0009d2a1) cell_cale_month_pane

0x2ea5,	// (0x0009d3f1) cell_cale_month_pane_g1

0x2eb1,	// (0x0009d3fd) cell_cale_month_pane_t1_ParamLimits

0x2eb1,	// (0x0009d3fd) cell_cale_month_pane_t1

0xaa2f,	// (0x000a4f7b) grid_highlight_pane_cp08

0xa8e5,	// (0x000a4e31) main_smil_g1

0x2edd,	// (0x0009d429) smil_status_pane

0xadc0,	// (0x000a530c) smil_text_pane

0xc70d,	// (0x000a6c59) bg_popup_call3_rect_pane_g8

0xc715,	// (0x000a6c61) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e9,	// (0x000a9a35) bg_popup_call3_rect_pane_g

0xc99c,	// (0x000a6ee8) smil_status_volume_pane_g1

0xadca,	// (0x000a5316) smil_status_pane_t1

0x43b1,	// (0x0009e8fd) volume_smil_pane

0xade1,	// (0x000a532d) list_smil_text_pane

0x2ef0,	// (0x0009d43c) scroll_pane_cp011

0x2efb,	// (0x0009d447) smil_text_list_pane_t1_ParamLimits

0x2efb,	// (0x0009d447) smil_text_list_pane_t1

0x2f88,	// (0x0009d4d4) aid_volume_smil_ParamLimits

0x2f88,	// (0x0009d4d4) aid_volume_smil

0xa8e5,	// (0x000a4e31) smil_volume_pane_g1

0xa8e5,	// (0x000a4e31) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x000a9806) smil_volume_pane_g

0x1531,	// (0x0009ba7d) listscroll_cale_day_pane

0xadeb,	// (0x000a5337) bg_cale_pane

0xae03,	// (0x000a534f) list_cale_pane

0xae26,	// (0x000a5372) scroll_pane_cp09

0xae37,	// (0x000a5383) cale_bg_pane_g1

0xae3f,	// (0x000a538b) cale_bg_pane_g2

0xae47,	// (0x000a5393) cale_bg_pane_g3

0xae4f,	// (0x000a539b) cale_bg_pane_g4

0xae57,	// (0x000a53a3) cale_bg_pane_g5

0xae5f,	// (0x000a53ab) cale_bg_pane_g6

0xae67,	// (0x000a53b3) cale_bg_pane_g7

0xae6f,	// (0x000a53bb) cale_bg_pane_g8

0xae77,	// (0x000a53c3) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x000a980b) cale_bg_pane_g

0x2fb2,	// (0x0009d4fe) list_cale_time_pane_ParamLimits

0x2fb2,	// (0x0009d4fe) list_cale_time_pane

0xae7f,	// (0x000a53cb) list_cale_time_pane_g1_ParamLimits

0xae7f,	// (0x000a53cb) list_cale_time_pane_g1

0xae8b,	// (0x000a53d7) list_cale_time_pane_g2_ParamLimits

0xae8b,	// (0x000a53d7) list_cale_time_pane_g2

0x2fda,	// (0x0009d526) list_cale_time_pane_g3_ParamLimits

0x2fda,	// (0x0009d526) list_cale_time_pane_g3

0x2fe8,	// (0x0009d534) list_cale_time_pane_g4_ParamLimits

0x2fe8,	// (0x0009d534) list_cale_time_pane_g4

0x2ff6,	// (0x0009d542) list_cale_time_pane_g5_ParamLimits

0x2ff6,	// (0x0009d542) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x000a981e) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x000a981e) list_cale_time_pane_g

0xaea5,	// (0x000a53f1) list_cale_time_pane_t1_ParamLimits

0xaea5,	// (0x000a53f1) list_cale_time_pane_t1

0xaecd,	// (0x000a5419) list_cale_time_pane_t2_ParamLimits

0xaecd,	// (0x000a5419) list_cale_time_pane_t2

0x33be,	// (0x0009d90a) aid_blid_cardinal_pane

0x3400,	// (0x0009d94c) compass_pane_t4

0xaef5,	// (0x000a5441) list_cale_time_pane_t4_ParamLimits

0xaef5,	// (0x000a5441) list_cale_time_pane_t4

0x340e,	// (0x0009d95a) compass_pane_t5

0x341e,	// (0x0009d96a) compass_pane_t6

0x342c,	// (0x0009d978) compass_pane_t7

0xb399,	// (0x000a58e5) navi_pane_cc_t1

0xb576,	// (0x000a5ac2) aid_phob_thumbnail_center_pane

0x3a7b,	// (0x0009dfc7) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x000a982b) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x000a982b) list_cale_time_pane_t

0x9c5a,	// (0x000a41a6) bg_popup_window_pane_cp02_ParamLimits

0x9c5a,	// (0x000a41a6) bg_popup_window_pane_cp02

0xaf1d,	// (0x000a5469) heading_pane_cp01_ParamLimits

0xaf1d,	// (0x000a5469) heading_pane_cp01

0xaf29,	// (0x000a5475) loc_req_pane_ParamLimits

0xaf29,	// (0x000a5475) loc_req_pane

0xaf39,	// (0x000a5485) loc_type_pane_ParamLimits

0xaf39,	// (0x000a5485) loc_type_pane

0xaf4b,	// (0x000a5497) loc_type_pane_t1_ParamLimits

0xaf4b,	// (0x000a5497) loc_type_pane_t1

0xaf5d,	// (0x000a54a9) loc_type_pane_t2_ParamLimits

0xaf5d,	// (0x000a54a9) loc_type_pane_t2

0xaf6f,	// (0x000a54bb) loc_type_pane_t3_ParamLimits

0xaf6f,	// (0x000a54bb) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x000a9832) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x000a9832) loc_type_pane_t

0xaf81,	// (0x000a54cd) list_loc_req_pane

0xaf8b,	// (0x000a54d7) scroll_pane_cp012

0x3004,	// (0x0009d550) list_single_loc_request_popup_menu_pane_ParamLimits

0x3004,	// (0x0009d550) list_single_loc_request_popup_menu_pane

0xaf96,	// (0x000a54e2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf96,	// (0x000a54e2) list_single_loc_request_popup_menu_pane_g1

0xafa2,	// (0x000a54ee) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafa2,	// (0x000a54ee) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x000a9839) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x000a9839) list_single_loc_request_popup_menu_pane_g

0xafae,	// (0x000a54fa) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafae,	// (0x000a54fa) list_single_loc_request_popup_menu_pane_t1

0x301e,	// (0x0009d56a) bg_popup_window_pane_cp03_ParamLimits

0x301e,	// (0x0009d56a) bg_popup_window_pane_cp03

0x302c,	// (0x0009d578) heading_loc_req_pane_ParamLimits

0x302c,	// (0x0009d578) heading_loc_req_pane

0x3038,	// (0x0009d584) popup_dyc_status_message_window_g1_ParamLimits

0x3038,	// (0x0009d584) popup_dyc_status_message_window_g1

0x3044,	// (0x0009d590) popup_dyc_status_message_window_t1_ParamLimits

0x3044,	// (0x0009d590) popup_dyc_status_message_window_t1

0x3056,	// (0x0009d5a2) popup_dyc_status_message_window_t2_ParamLimits

0x3056,	// (0x0009d5a2) popup_dyc_status_message_window_t2

0x3068,	// (0x0009d5b4) popup_dyc_status_message_window_t3_ParamLimits

0x3068,	// (0x0009d5b4) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x000a983e) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x000a983e) popup_dyc_status_message_window_t

0xa42e,	// (0x000a497a) bg_heading_pane_cp01

0xafc4,	// (0x000a5510) heading_loc_req_pane_g1

0xafcc,	// (0x000a5518) heading_loc_req_pane_g2

0xafd4,	// (0x000a5520) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x000a9845) heading_loc_req_pane_g

0xafdc,	// (0x000a5528) heading_loc_req_pane_t1

0xaff7,	// (0x000a5543) bg_popup_sub_pane_cp01_ParamLimits

0xaff7,	// (0x000a5543) bg_popup_sub_pane_cp01

0xb005,	// (0x000a5551) popup_cale_events_window_g1_ParamLimits

0xb005,	// (0x000a5551) popup_cale_events_window_g1

0xb025,	// (0x000a5571) popup_cale_events_window_g2_ParamLimits

0xb025,	// (0x000a5571) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x000a9879) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x000a9879) popup_cale_events_window_g

0xb045,	// (0x000a5591) popup_cale_events_window_t1_ParamLimits

0xb045,	// (0x000a5591) popup_cale_events_window_t1

0xb057,	// (0x000a55a3) popup_cale_events_window_t2_ParamLimits

0xb057,	// (0x000a55a3) popup_cale_events_window_t2

0xb095,	// (0x000a55e1) popup_cale_events_window_t3_ParamLimits

0xb095,	// (0x000a55e1) popup_cale_events_window_t3

0xb0cf,	// (0x000a561b) popup_cale_events_window_t4_ParamLimits

0xb0cf,	// (0x000a561b) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x000a987e) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x000a987e) popup_cale_events_window_t

0x3161,	// (0x0009d6ad) call_type_pane

0xb304,	// (0x000a5850) popup_call_status_window_g1

0x316d,	// (0x0009d6b9) popup_call_status_window_g2

0x3179,	// (0x0009d6c5) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x000a9887) popup_call_status_window_g

0xb105,	// (0x000a5651) call_type_pane_g1

0xb10e,	// (0x000a565a) call_type_pane_g2

0x0001,

0xf342,	// (0x000a988e) call_type_pane_g

0xa42e,	// (0x000a497a) bg_popup_sub_pane_cp02

0xb117,	// (0x000a5663) listscroll_popup_wml_pane

0xb11f,	// (0x000a566b) list_wml_pane

0xb129,	// (0x000a5675) scroll_pane_cp013

0xb134,	// (0x000a5680) list_single_graphic_popup_wml_pane_ParamLimits

0xb134,	// (0x000a5680) list_single_graphic_popup_wml_pane

0xa8e5,	// (0x000a4e31) list_single_graphic_popup_wml_pane_g1

0xb148,	// (0x000a5694) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x000a9893) list_single_graphic_popup_wml_pane_g

0xb150,	// (0x000a569c) list_single_graphic_popup_wml_pane_t1

0xb166,	// (0x000a56b2) aid_call_pane

0xa7b7,	// (0x000a4d03) popup_clock_analogue_window_g1

0xa7b7,	// (0x000a4d03) popup_clock_analogue_window_g2

0x3185,	// (0x0009d6d1) popup_clock_analogue_window_g3

0x3185,	// (0x0009d6d1) popup_clock_analogue_window_g4

0xa8e5,	// (0x000a4e31) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x000a9898) popup_clock_analogue_window_g

0x318d,	// (0x0009d6d9) popup_clock_analogue_window_t1

0x319b,	// (0x0009d6e7) clock_digital_number_pane_ParamLimits

0x319b,	// (0x0009d6e7) clock_digital_number_pane

0x31a7,	// (0x0009d6f3) clock_digital_number_pane_cp02_ParamLimits

0x31a7,	// (0x0009d6f3) clock_digital_number_pane_cp02

0x31b3,	// (0x0009d6ff) clock_digital_number_pane_cp03_ParamLimits

0x31b3,	// (0x0009d6ff) clock_digital_number_pane_cp03

0x31bf,	// (0x0009d70b) clock_digital_number_pane_cp04_ParamLimits

0x31bf,	// (0x0009d70b) clock_digital_number_pane_cp04

0x31cb,	// (0x0009d717) clock_digital_separator_pane_ParamLimits

0x31cb,	// (0x0009d717) clock_digital_separator_pane

0x31d7,	// (0x0009d723) popup_clock_digital_window_t1

0xa8e5,	// (0x000a4e31) clock_digital_number_pane_g1

0xa8e5,	// (0x000a4e31) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x000a9806) clock_digital_number_pane_g

0xa8e5,	// (0x000a4e31) clock_digital_separator_pane_g1

0xa8e5,	// (0x000a4e31) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x000a9806) clock_digital_separator_pane_g

0xa42e,	// (0x000a497a) bg_popup_window_pane_cp04

0xb16e,	// (0x000a56ba) heading_pane_cp03

0xb176,	// (0x000a56c2) listscroll_popup_gms_pane

0xb17e,	// (0x000a56ca) grid_large_graphic_popup_pane

0xb188,	// (0x000a56d4) listscroll_popup_gms_pane_g1

0xb190,	// (0x000a56dc) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x000a98a3) listscroll_popup_gms_pane_g

0xac25,	// (0x000a5171) scroll_pane_cp014

0x31f4,	// (0x0009d740) cell_large_graphic_popup_pane_ParamLimits

0x31f4,	// (0x0009d740) cell_large_graphic_popup_pane

0x320c,	// (0x0009d758) cell_large_graphic_popup_pane_g1_ParamLimits

0x320c,	// (0x0009d758) cell_large_graphic_popup_pane_g1

0xb198,	// (0x000a56e4) cell_large_graphic_popup_pane_g2_ParamLimits

0xb198,	// (0x000a56e4) cell_large_graphic_popup_pane_g2

0xb1a4,	// (0x000a56f0) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1a4,	// (0x000a56f0) cell_large_graphic_popup_pane_g3

0xb1b1,	// (0x000a56fd) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1b1,	// (0x000a56fd) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x000a98a8) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x000a98a8) cell_large_graphic_popup_pane_g

0xb1c1,	// (0x000a570d) grid_highlight_pane_cp010

0xa8e5,	// (0x000a4e31) bg_popup_call_pane_g1

0xb1cb,	// (0x000a5717) list_single_graphic_popup_conf_pane_ParamLimits

0xb1cb,	// (0x000a5717) list_single_graphic_popup_conf_pane

0xb1de,	// (0x000a572a) list_highlight_pane_cp01

0xb1e7,	// (0x000a5733) list_single_graphic_popup_conf_pane_g1

0xb1ef,	// (0x000a573b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x000a98b1) list_single_graphic_popup_conf_pane_g

0xb1f7,	// (0x000a5743) list_single_graphic_popup_conf_pane_t1

0xb205,	// (0x000a5751) linegrid_cams_pane_g1

0x3218,	// (0x0009d764) linegrid_cams_pane_g2

0xaa62,	// (0x000a4fae) linegrid_cams_pane_g3

0xb20e,	// (0x000a575a) linegrid_cams_pane_g4

0x3221,	// (0x0009d76d) linegrid_cams_pane_g5

0x322a,	// (0x0009d776) linegrid_cams_pane_g6

0xaa6b,	// (0x000a4fb7) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x000a98b6) linegrid_cams_pane_g

0xb217,	// (0x000a5763) popup_clock_analogue_window

0xb217,	// (0x000a5763) popup_clock_digital_window

0xa42e,	// (0x000a497a) popup_phob_thumbnail_window

0xa8e5,	// (0x000a4e31) call_video_uplink_pane_g1

0xb220,	// (0x000a576c) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x000a98c5) call_video_uplink_pane_g

0xb228,	// (0x000a5774) video_uplink_pane

0xb230,	// (0x000a577c) mce_image_pane_g1

0x3233,	// (0x0009d77f) mce_image_pane_g2

0x323b,	// (0x0009d787) mce_image_pane_g3

0x3243,	// (0x0009d78f) mce_image_pane_g4

0x324b,	// (0x0009d797) mce_image_pane_g5

0x0004,

0xf37e,	// (0x000a98ca) mce_image_pane_g

0xb23a,	// (0x000a5786) control_top_pane_stacon_cp01_ParamLimits

0xb23a,	// (0x000a5786) control_top_pane_stacon_cp01

0xb24e,	// (0x000a579a) uni_indicator_pane_stacon_cp01_ParamLimits

0xb24e,	// (0x000a579a) uni_indicator_pane_stacon_cp01

0xb25f,	// (0x000a57ab) bg_popup_sub_pane_cp03

0x3253,	// (0x0009d79f) chi_dic_find_pane

0x325b,	// (0x0009d7a7) listscroll_chi_dic_pane

0x3264,	// (0x0009d7b0) main_pane_chidic_g1

0x3277,	// (0x0009d7c3) chi_dic_find_pane_t1

0xb269,	// (0x000a57b5) find_chidic_pane

0xb272,	// (0x000a57be) chi_dic_list_pane_ParamLimits

0xb272,	// (0x000a57be) chi_dic_list_pane

0xb283,	// (0x000a57cf) scroll_pane_cp020

0x3285,	// (0x0009d7d1) find_chidic_pane_t1

0xa42e,	// (0x000a497a) input_focus_pane_cp06

0x3294,	// (0x0009d7e0) list_chi_dic_pane_ParamLimits

0x3294,	// (0x0009d7e0) list_chi_dic_pane

0x32b1,	// (0x0009d7fd) list_chi_dic_pane_t1_ParamLimits

0x32b1,	// (0x0009d7fd) list_chi_dic_pane_t1

0xa42e,	// (0x000a497a) list_highlight_pane_cp020

0xb28b,	// (0x000a57d7) bg_cale_heading_pane_g1

0x32c4,	// (0x0009d810) bg_cale_heading_pane_g2

0x32cc,	// (0x0009d818) bg_cale_heading_pane_g3

0x32d4,	// (0x0009d820) bg_cale_heading_pane_g4

0x32de,	// (0x0009d82a) bg_cale_heading_pane_g5

0x32e8,	// (0x0009d834) bg_cale_heading_pane_g6

0x32f0,	// (0x0009d83c) bg_cale_heading_pane_g7

0x32f8,	// (0x0009d844) bg_cale_heading_pane_g8

0x3302,	// (0x0009d84e) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x000a98d5) bg_cale_heading_pane_g

0xb28b,	// (0x000a57d7) bg_cale_side_pane_g1

0x330c,	// (0x0009d858) bg_cale_side_pane_g2

0x3316,	// (0x0009d862) bg_cale_side_pane_g3

0x3320,	// (0x0009d86c) bg_cale_side_pane_g4

0x332a,	// (0x0009d876) bg_cale_side_pane_g5

0x3334,	// (0x0009d880) bg_cale_side_pane_g6

0x333e,	// (0x0009d88a) bg_cale_side_pane_g7

0x3348,	// (0x0009d894) bg_cale_side_pane_g8

0x3350,	// (0x0009d89c) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x000a98e8) bg_cale_side_pane_g

0x3358,	// (0x0009d8a4) popup_call_status_window_ParamLimits

0x3358,	// (0x0009d8a4) popup_call_status_window

0xb293,	// (0x000a57df) stacon_top_pane

0xb29b,	// (0x000a57e7) status_pane_ParamLimits

0xb29b,	// (0x000a57e7) status_pane

0xb2b0,	// (0x000a57fc) status_small_pane

0xb2b8,	// (0x000a5804) control_pane

0xa42e,	// (0x000a497a) stacon_bottom_pane

0xb2c0,	// (0x000a580c) list_single_mce_smart_pane_t1_ParamLimits

0xb2c0,	// (0x000a580c) list_single_mce_smart_pane_t1

0xb2d3,	// (0x000a581f) list_single_mce_smart_pane_t2_ParamLimits

0xb2d3,	// (0x000a581f) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x000a98fb) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x000a98fb) list_single_mce_smart_pane_t

0x3364,	// (0x0009d8b0) compass_pane

0x3370,	// (0x0009d8bc) main_location2_pane_t1

0x3384,	// (0x0009d8d0) main_location2_pane_t2

0x3398,	// (0x0009d8e4) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x000a9900) main_location2_pane_t

0xb312,	// (0x000a585e) compass_pane_g1_ParamLimits

0xb312,	// (0x000a585e) compass_pane_g1

0x33e2,	// (0x0009d92e) compass_pane_t1

0x33f1,	// (0x0009d93d) compass_pane_t2

0x0005,

0xf3bd,	// (0x000a9909) compass_pane_t

0x343c,	// (0x0009d988) text_secondary_cp61

0xb390,	// (0x000a58dc) navi_pane_cams_g5

0xb40c,	// (0x000a5958) navi_pane_im_t1

0xb41a,	// (0x000a5966) navi_pane_mp_g1_ParamLimits

0xb41a,	// (0x000a5966) navi_pane_mp_g1

0xb42e,	// (0x000a597a) navi_pane_mp_g2_ParamLimits

0xb42e,	// (0x000a597a) navi_pane_mp_g2

0xb43a,	// (0x000a5986) navi_pane_mp_g3_ParamLimits

0xb43a,	// (0x000a5986) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x000a991d) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x000a991d) navi_pane_mp_g

0xb446,	// (0x000a5992) navi_pane_mp_t1

0xb454,	// (0x000a59a0) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x000a9924) navi_pane_mp_t

0xb4bf,	// (0x000a5a0b) navi_pane_vt_g1

0xb446,	// (0x000a5992) navi_pane_vt_t1

0xb4c7,	// (0x000a5a13) navi_slider_pane

0xaa7c,	// (0x000a4fc8) zooming_pane

0xb4d7,	// (0x000a5a23) navi_slider_pane_g1

0x3477,	// (0x0009d9c3) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x000a992b) navi_slider_pane_g

0xb4fb,	// (0x000a5a47) aid_levels_zoom

0xb503,	// (0x000a5a4f) zooming_pane_g1

0xb50b,	// (0x000a5a57) zooming_pane_g2

0xb50b,	// (0x000a5a57) zooming_pane_g3

0x0002,

0xf3ee,	// (0x000a993a) zooming_pane_g

0xb513,	// (0x000a5a5f) level_10_zoom

0xb51c,	// (0x000a5a68) level_11_zoom

0xb525,	// (0x000a5a71) level_1_zoom

0xb52e,	// (0x000a5a7a) level_2_zoom

0xb537,	// (0x000a5a83) level_3_zoom

0xb540,	// (0x000a5a8c) level_4_zoom

0xb549,	// (0x000a5a95) level_5_zoom

0xb552,	// (0x000a5a9e) level_6_zoom

0xb55b,	// (0x000a5aa7) level_7_zoom

0xb564,	// (0x000a5ab0) level_8_zoom

0xb56d,	// (0x000a5ab9) level_9_zoom

0xb57e,	// (0x000a5aca) popup_phob_thumbnail_window_g1

0xb586,	// (0x000a5ad2) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x000a9941) popup_phob_thumbnail_window_g

0xc8af,	// (0x000a6dfb) level_1_location

0xc8b7,	// (0x000a6e03) level_2_location

0xc8bf,	// (0x000a6e0b) level_3_location

0xc8c7,	// (0x000a6e13) level_4_location

0xaa7c,	// (0x000a4fc8) level_5_location

0x3489,	// (0x0009d9d5) mce_icon_pane_g1

0x3491,	// (0x0009d9dd) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x000a9946) mce_icon_pane_g

0x3499,	// (0x0009d9e5) main_mup_pane_g1_ParamLimits

0x3499,	// (0x0009d9e5) main_mup_pane_g1

0x34b1,	// (0x0009d9fd) main_mup_pane_g2_ParamLimits

0x34b1,	// (0x0009d9fd) main_mup_pane_g2

0x34c5,	// (0x0009da11) main_mup_pane_g3_ParamLimits

0x34c5,	// (0x0009da11) main_mup_pane_g3

0x34d9,	// (0x0009da25) main_mup_pane_g4_ParamLimits

0x34d9,	// (0x0009da25) main_mup_pane_g4

0x34f5,	// (0x0009da41) main_mup_pane_g5_ParamLimits

0x34f5,	// (0x0009da41) main_mup_pane_g5

0x3516,	// (0x0009da62) main_mup_pane_g6_ParamLimits

0x3516,	// (0x0009da62) main_mup_pane_g6

0x3532,	// (0x0009da7e) main_mup_pane_g7_ParamLimits

0x3532,	// (0x0009da7e) main_mup_pane_g7

0x354e,	// (0x0009da9a) main_mup_pane_g8_ParamLimits

0x354e,	// (0x0009da9a) main_mup_pane_g8

0x356a,	// (0x0009dab6) main_mup_pane_g9_ParamLimits

0x356a,	// (0x0009dab6) main_mup_pane_g9

0x3589,	// (0x0009dad5) main_mup_pane_g10_ParamLimits

0x3589,	// (0x0009dad5) main_mup_pane_g10

0x35a8,	// (0x0009daf4) main_mup_pane_g11_ParamLimits

0x35a8,	// (0x0009daf4) main_mup_pane_g11

0x35c0,	// (0x0009db0c) main_mup_pane_g12_ParamLimits

0x35c0,	// (0x0009db0c) main_mup_pane_g12

0x35ce,	// (0x0009db1a) main_mup_pane_g13_ParamLimits

0x35ce,	// (0x0009db1a) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x000a994b) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x000a994b) main_mup_pane_g

0x35e4,	// (0x0009db30) main_mup_pane_t1_ParamLimits

0x35e4,	// (0x0009db30) main_mup_pane_t1

0x3601,	// (0x0009db4d) main_mup_pane_t2_ParamLimits

0x3601,	// (0x0009db4d) main_mup_pane_t2

0x361b,	// (0x0009db67) main_mup_pane_t3_ParamLimits

0x361b,	// (0x0009db67) main_mup_pane_t3

0x3635,	// (0x0009db81) main_mup_pane_t4_ParamLimits

0x3635,	// (0x0009db81) main_mup_pane_t4

0x3647,	// (0x0009db93) main_mup_pane_t5_ParamLimits

0x3647,	// (0x0009db93) main_mup_pane_t5

0x3659,	// (0x0009dba5) main_mup_pane_t6_ParamLimits

0x3659,	// (0x0009dba5) main_mup_pane_t6

0x0005,

0xf41a,	// (0x000a9966) main_mup_pane_t_ParamLimits

0xf41a,	// (0x000a9966) main_mup_pane_t

0x366f,	// (0x0009dbbb) mup_progress_pane_ParamLimits

0x366f,	// (0x0009dbbb) mup_progress_pane

0x367b,	// (0x0009dbc7) mup_visualizer_pane_ParamLimits

0x367b,	// (0x0009dbc7) mup_visualizer_pane

0x36b9,	// (0x0009dc05) mup_volume_pane_ParamLimits

0x36b9,	// (0x0009dc05) mup_volume_pane

0xb304,	// (0x000a5850) mup_visualizer_pane_g1_ParamLimits

0xb304,	// (0x000a5850) mup_visualizer_pane_g1

0xb304,	// (0x000a5850) mup_visualizer_pane_g2_ParamLimits

0xb304,	// (0x000a5850) mup_visualizer_pane_g2

0xb312,	// (0x000a585e) mup_visualizer_pane_g3_ParamLimits

0xb312,	// (0x000a585e) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x000a9973) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x000a9973) mup_visualizer_pane_g

0xa8e5,	// (0x000a4e31) mup_volume_pane_g1

0xb596,	// (0x000a5ae2) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x000a997a) mup_volume_pane_g

0xa8e5,	// (0x000a4e31) mup_progress_pane_g1

0xb59f,	// (0x000a5aeb) mup_progress_pane_g2

0xb5a8,	// (0x000a5af4) mup_progress_pane_g3

0x0002,

0xf433,	// (0x000a997f) mup_progress_pane_g

0xa42e,	// (0x000a497a) bg_popup_window_pane_cp05

0xb5b1,	// (0x000a5afd) heading_pane_cp02_ParamLimits

0xb5b1,	// (0x000a5afd) heading_pane_cp02

0xb5cb,	// (0x000a5b17) list_popup_blid_pane

0xb5d3,	// (0x000a5b1f) list_blid_sat_info_pane_ParamLimits

0xb5d3,	// (0x000a5b1f) list_blid_sat_info_pane

0xb5e6,	// (0x000a5b32) list_blid_sat_info_pane_g1

0xb5ee,	// (0x000a5b3a) list_blid_sat_info_pane_t1

0x37c4,	// (0x0009dd10) mup_equalizer_pane_ParamLimits

0x37c4,	// (0x0009dd10) mup_equalizer_pane

0x37e5,	// (0x0009dd31) mup_equalizer_pane_cp1_ParamLimits

0x37e5,	// (0x0009dd31) mup_equalizer_pane_cp1

0x3806,	// (0x0009dd52) mup_equalizer_pane_cp2_ParamLimits

0x3806,	// (0x0009dd52) mup_equalizer_pane_cp2

0x3827,	// (0x0009dd73) mup_equalizer_pane_cp3_ParamLimits

0x3827,	// (0x0009dd73) mup_equalizer_pane_cp3

0x3848,	// (0x0009dd94) mup_equalizer_pane_cp4_ParamLimits

0x3848,	// (0x0009dd94) mup_equalizer_pane_cp4

0x3869,	// (0x0009ddb5) mup_equalizer_pane_cp5

0x387f,	// (0x0009ddcb) mup_equalizer_pane_cp6

0x3897,	// (0x0009dde3) mup_equalizer_pane_cp7

0xc78d,	// (0x000a6cd9) bg_popup_call_poc_act_pane_g9

0xc795,	// (0x000a6ce1) bg_popup_call_poc_act_pane_g10

0xc79d,	// (0x000a6ce9) bg_popup_call_poc_act_pane_g11

0x000a,

0xa7bf,	// (0x000a4d0b) mup_scale_pane

0xa8e5,	// (0x000a4e31) mup_scale_pane_g1

0xb5fc,	// (0x000a5b48) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x000a999b) mup_scale_pane_g

0xb620,	// (0x000a5b6c) msg_data_pane

0xb628,	// (0x000a5b74) scroll_pane_cp017

0x38c1,	// (0x0009de0d) bg_list_pane_cp04_ParamLimits

0x38c1,	// (0x0009de0d) bg_list_pane_cp04

0xb630,	// (0x000a5b7c) msg_data_pane_g1

0x38dd,	// (0x0009de29) msg_data_pane_g2

0x38e5,	// (0x0009de31) msg_data_pane_g3

0x38ed,	// (0x0009de39) msg_data_pane_g4

0x38f5,	// (0x0009de41) msg_data_pane_g5

0x38fd,	// (0x0009de49) msg_data_pane_g6

0x3905,	// (0x0009de51) msg_data_pane_g7

0x0006,

0xf45e,	// (0x000a99aa) msg_data_pane_g

0x390d,	// (0x0009de59) msg_text_pane_ParamLimits

0x390d,	// (0x0009de59) msg_text_pane

0x395d,	// (0x0009dea9) qrid_highlight_pane_cp011_ParamLimits

0x395d,	// (0x0009dea9) qrid_highlight_pane_cp011

0xa42e,	// (0x000a497a) msg_body_pane

0xa42e,	// (0x000a497a) msg_header_pane

0xb641,	// (0x000a5b8d) input_focus_pane_cp07

0x9f5e,	// (0x000a44aa) msg_header_pane_t1_ParamLimits

0x9f5e,	// (0x000a44aa) msg_header_pane_t1

0x9f70,	// (0x000a44bc) msg_header_pane_t2_ParamLimits

0x9f70,	// (0x000a44bc) msg_header_pane_t2

0x0001,

0xf472,	// (0x000a99be) msg_header_pane_t_ParamLimits

0xf472,	// (0x000a99be) msg_header_pane_t

0xb656,	// (0x000a5ba2) msg_body_pane_g1

0x9f82,	// (0x000a44ce) msg_body_pane_t1_ParamLimits

0x9f82,	// (0x000a44ce) msg_body_pane_t1

0x9fb3,	// (0x000a44ff) msg_body_pane_t2_ParamLimits

0x9fb3,	// (0x000a44ff) msg_body_pane_t2

0x9fc5,	// (0x000a4511) msg_body_pane_t3_ParamLimits

0x9fc5,	// (0x000a4511) msg_body_pane_t3

0x0002,

0xf477,	// (0x000a99c3) msg_body_pane_t_ParamLimits

0xf477,	// (0x000a99c3) msg_body_pane_t

0x39d7,	// (0x0009df23) main_viewer_pane_g1_ParamLimits

0x39d7,	// (0x0009df23) main_viewer_pane_g1

0x39e3,	// (0x0009df2f) main_viewer_pane_g2_ParamLimits

0x39e3,	// (0x0009df2f) main_viewer_pane_g2

0x39ef,	// (0x0009df3b) main_viewer_pane_g3_ParamLimits

0x39ef,	// (0x0009df3b) main_viewer_pane_g3

0x3a00,	// (0x0009df4c) main_viewer_pane_g4_ParamLimits

0x3a00,	// (0x0009df4c) main_viewer_pane_g4

0x3a11,	// (0x0009df5d) main_viewer_pane_g5_ParamLimits

0x3a11,	// (0x0009df5d) main_viewer_pane_g5

0x3a11,	// (0x0009df5d) main_viewer_pane_g7_ParamLimits

0x3a11,	// (0x0009df5d) main_viewer_pane_g7

0xaf96,	// (0x000a54e2) main_viewer_pane_g8_ParamLimits

0xaf96,	// (0x000a54e2) main_viewer_pane_g8

0x0007,

0xf487,	// (0x000a99d3) main_viewer_pane_g_ParamLimits

0xf487,	// (0x000a99d3) main_viewer_pane_g

0xb65e,	// (0x000a5baa) viewer_content_pane_ParamLimits

0xb65e,	// (0x000a5baa) viewer_content_pane

0x3a4f,	// (0x0009df9b) main_postcard_pane_g1_ParamLimits

0x3a4f,	// (0x0009df9b) main_postcard_pane_g1

0x3a5d,	// (0x0009dfa9) main_postcard_pane_g2_ParamLimits

0x3a5d,	// (0x0009dfa9) main_postcard_pane_g2

0x3a6b,	// (0x0009dfb7) main_postcard_pane_g3_ParamLimits

0x3a6b,	// (0x0009dfb7) main_postcard_pane_g3

0x0005,

0xf498,	// (0x000a99e4) main_postcard_pane_g_ParamLimits

0xf498,	// (0x000a99e4) main_postcard_pane_g

0x3a7b,	// (0x0009dfc7) main_postcard_pane_g4

0xc9af,	// (0x000a6efb) smil_status_volume_pane_g2

0x3aa7,	// (0x0009dff3) postcard_pane_ParamLimits

0x3aa7,	// (0x0009dff3) postcard_pane

0xb304,	// (0x000a5850) postcard_pane_g1_ParamLimits

0xb304,	// (0x000a5850) postcard_pane_g1

0x3ad9,	// (0x0009e025) postcard_pane_g2_ParamLimits

0x3ad9,	// (0x0009e025) postcard_pane_g2

0x3ae5,	// (0x0009e031) postcard_pane_g3_ParamLimits

0x3ae5,	// (0x0009e031) postcard_pane_g3

0xb66c,	// (0x000a5bb8) postcard_pane_g4_ParamLimits

0xb66c,	// (0x000a5bb8) postcard_pane_g4

0x3af1,	// (0x0009e03d) postcard_pane_g5_ParamLimits

0x3af1,	// (0x0009e03d) postcard_pane_g5

0x3afd,	// (0x0009e049) postcard_pane_g6_ParamLimits

0x3afd,	// (0x0009e049) postcard_pane_g6

0xb67a,	// (0x000a5bc6) postcard_pane_g7_ParamLimits

0xb67a,	// (0x000a5bc6) postcard_pane_g7

0x0006,

0xf4a5,	// (0x000a99f1) postcard_pane_g_ParamLimits

0xf4a5,	// (0x000a99f1) postcard_pane_g

0x3b09,	// (0x0009e055) main_mp2_pane_g1_ParamLimits

0x3b09,	// (0x0009e055) main_mp2_pane_g1

0x3b15,	// (0x0009e061) main_mp2_pane_g2_ParamLimits

0x3b15,	// (0x0009e061) main_mp2_pane_g2

0x3b21,	// (0x0009e06d) main_mp2_pane_g3_ParamLimits

0x3b21,	// (0x0009e06d) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x000a9a00) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x000a9a00) main_mp2_pane_g

0x3b2d,	// (0x0009e079) main_mp2_pane_t1_ParamLimits

0x3b2d,	// (0x0009e079) main_mp2_pane_t1

0x3b44,	// (0x0009e090) main_mp2_pane_t2_ParamLimits

0x3b44,	// (0x0009e090) main_mp2_pane_t2

0x3b56,	// (0x0009e0a2) main_mp2_pane_t3_ParamLimits

0x3b56,	// (0x0009e0a2) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x000a9a07) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x000a9a07) main_mp2_pane_t

0xb688,	// (0x000a5bd4) pec_content_pane_ParamLimits

0xb688,	// (0x000a5bd4) pec_content_pane

0xac25,	// (0x000a5171) scroll_pane_cp015

0xb69a,	// (0x000a5be6) pec_attribute_pane_ParamLimits

0xb69a,	// (0x000a5be6) pec_attribute_pane

0x3b68,	// (0x0009e0b4) pec_content_pane_g1_ParamLimits

0x3b68,	// (0x0009e0b4) pec_content_pane_g1

0xb6aa,	// (0x000a5bf6) pec_content_pane_t1_ParamLimits

0xb6aa,	// (0x000a5bf6) pec_content_pane_t1

0xb6bc,	// (0x000a5c08) pec_content_pane_t2_ParamLimits

0xb6bc,	// (0x000a5c08) pec_content_pane_t2

0x0001,

0x0111,	// (0x0009a65d) pec_content_pane_t_ParamLimits

0x0111,	// (0x0009a65d) pec_content_pane_t

0x3b74,	// (0x0009e0c0) list_single_graphic_pane_cp01_ParamLimits

0x3b74,	// (0x0009e0c0) list_single_graphic_pane_cp01

0xa7bf,	// (0x000a4d0b) bg_popup_sub_pane_cp04

0xb6ce,	// (0x000a5c1a) popup_mup_playback_window_g1

0xb6da,	// (0x000a5c26) popup_mup_playback_window_t1

0xb6ef,	// (0x000a5c3b) popup_mup_playback_window_t2

0x0001,

0x0116,	// (0x0009a662) popup_mup_playback_window_t

0xb726,	// (0x000a5c72) main_image_pane_g1_ParamLimits

0xb726,	// (0x000a5c72) main_image_pane_g1

0xb769,	// (0x000a5cb5) scroll_pane_cp018_ParamLimits

0xb769,	// (0x000a5cb5) scroll_pane_cp018

0xb781,	// (0x000a5ccd) scroll_pane_cp016_ParamLimits

0xb781,	// (0x000a5ccd) scroll_pane_cp016

0x3c0e,	// (0x0009e15a) smil2_image_pane_ParamLimits

0x3c0e,	// (0x0009e15a) smil2_image_pane

0x3c3e,	// (0x0009e18a) smil2_root_pane_ParamLimits

0x3c3e,	// (0x0009e18a) smil2_root_pane

0x3c6a,	// (0x0009e1b6) smil2_text_pane_ParamLimits

0x3c6a,	// (0x0009e1b6) smil2_text_pane

0xa42e,	// (0x000a497a) bg_list_pane_cp06

0xb7bd,	// (0x000a5d09) grid_radio_pane

0xa42e,	// (0x000a497a) bg_popup_window_pane_cp06

0xb7c5,	// (0x000a5d11) main_fmradio_pane_t1

0xb16e,	// (0x000a56ba) heading_pane_cp04

0xb7d3,	// (0x000a5d1f) main_fmradio_pane_t2

0xc7e5,	// (0x000a6d31) popup_cale_lunar_info_window_g1

0xb7e1,	// (0x000a5d2d) main_fmradio_pane_t3

0xc7ed,	// (0x000a6d39) popup_cale_lunar_info_window_g2

0xb7ef,	// (0x000a5d3b) main_fmradio_pane_t4

0x0001,

0xb7fd,	// (0x000a5d49) main_fmradio_pane_t5

0x0004,

0x0204,	// (0x0009a750) popup_cale_lunar_info_window_g

0x012b,	// (0x0009a677) main_fmradio_pane_t

0xb80b,	// (0x000a5d57) wait_bar_pane_cp03

0xb813,	// (0x000a5d5f) cell_fmradio_pane_ParamLimits

0xb813,	// (0x000a5d5f) cell_fmradio_pane

0xb67a,	// (0x000a5bc6) cell_fmradio_pane_g1_ParamLimits

0xb67a,	// (0x000a5bc6) cell_fmradio_pane_g1

0xa42e,	// (0x000a497a) grid_highlight_pane_cp011

0xb826,	// (0x000a5d72) poc_content_pane_ParamLimits

0xb826,	// (0x000a5d72) poc_content_pane

0xb838,	// (0x000a5d84) scroll_pane_cp019

0x3caa,	// (0x0009e1f6) popup_call_poc_act_window_ParamLimits

0x3caa,	// (0x0009e1f6) popup_call_poc_act_window

0x3cb7,	// (0x0009e203) popup_call_poc_inact_window_ParamLimits

0x3cb7,	// (0x0009e203) popup_call_poc_inact_window

0x01c8,	// (0x0009a714) bg_popup_call_poc_act_pane_g

0xc7a5,	// (0x000a6cf1) bg_popup_call_poc_inact_pane_g1

0xc7ad,	// (0x000a6cf9) bg_popup_call_poc_inact_pane_g2

0xb840,	// (0x000a5d8c) popup_call_poc_act_window_g2

0xc7b5,	// (0x000a6d01) bg_popup_call_poc_inact_pane_g3

0xc735,	// (0x000a6c81) bg_popup_call_poc_inact_pane_g4

0xc7bd,	// (0x000a6d09) bg_popup_call_poc_inact_pane_g5

0xb848,	// (0x000a5d94) popup_call_poc_act_window_t1_ParamLimits

0xb848,	// (0x000a5d94) popup_call_poc_act_window_t1

0xb870,	// (0x000a5dbc) popup_call_poc_act_window_t2_ParamLimits

0xb870,	// (0x000a5dbc) popup_call_poc_act_window_t2

0xb898,	// (0x000a5de4) popup_call_poc_act_window_t3_ParamLimits

0xb898,	// (0x000a5de4) popup_call_poc_act_window_t3

0xb8c0,	// (0x000a5e0c) popup_call_poc_act_window_t4_ParamLimits

0xb8c0,	// (0x000a5e0c) popup_call_poc_act_window_t4

0x0003,

0x0136,	// (0x0009a682) popup_call_poc_act_window_t_ParamLimits

0x0136,	// (0x0009a682) popup_call_poc_act_window_t

0xc7c5,	// (0x000a6d11) bg_popup_call_poc_inact_pane_g6

0xc7cd,	// (0x000a6d19) bg_popup_call_poc_inact_pane_g7

0xc7d5,	// (0x000a6d21) bg_popup_call_poc_inact_pane_g8

0xb8d2,	// (0x000a5e1e) popup_call_poc_inact_window_g2

0xc7dd,	// (0x000a6d29) bg_popup_call_poc_inact_pane_g9

0x0008,

0x01df,	// (0x0009a72b) bg_popup_call_poc_inact_pane_g

0xb8da,	// (0x000a5e26) popup_call_poc_inact_window_t1_ParamLimits

0xb8da,	// (0x000a5e26) popup_call_poc_inact_window_t1

0xb8ef,	// (0x000a5e3b) popup_call_poc_inact_window_t2_ParamLimits

0xb8ef,	// (0x000a5e3b) popup_call_poc_inact_window_t2

0xb904,	// (0x000a5e50) popup_call_poc_inact_window_t3_ParamLimits

0xb904,	// (0x000a5e50) popup_call_poc_inact_window_t3

0x0002,

0x013f,	// (0x0009a68b) popup_call_poc_inact_window_t_ParamLimits

0x013f,	// (0x0009a68b) popup_call_poc_inact_window_t

0xc922,	// (0x000a6e6e) context_pane_ParamLimits

0x42fb,	// (0x0009e847) signal_pane_ParamLimits

0xaa7c,	// (0x000a4fc8) main_call2_pane

0x426e,	// (0x0009e7ba) popup_phob_thumbnail2_window_ParamLimits

0x426e,	// (0x0009e7ba) popup_phob_thumbnail2_window

0x3985,	// (0x0009ded1) aid_hotspot_pointer_arrow_pane

0x398d,	// (0x0009ded9) aid_hotspot_pointer_hand_pane

0x3fdf,	// (0x0009e52b) phob_pre_status_pane_g5

0x1a2f,	// (0x0009bf7b) cams_zoom_pane_ParamLimits

0x1a3b,	// (0x0009bf87) image_vga_pane_ParamLimits

0x1a4a,	// (0x0009bf96) main_camera_pane_g1_ParamLimits

0x1a58,	// (0x0009bfa4) main_camera_pane_g2_ParamLimits

0x1a64,	// (0x0009bfb0) main_camera_pane_g3_ParamLimits

0x1a70,	// (0x0009bfbc) main_camera_pane_g4_ParamLimits

0x1a7c,	// (0x0009bfc8) main_camera_pane_g5_ParamLimits

0x1a88,	// (0x0009bfd4) main_camera_pane_g6_ParamLimits

0x1a94,	// (0x0009bfe0) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x000a973b) main_camera_pane_g_ParamLimits

0x1aa0,	// (0x0009bfec) main_camera_pane_t1_ParamLimits

0x1ab2,	// (0x0009bffe) main_camera_pane_t2_ParamLimits

0xf200,	// (0x000a974c) main_camera_pane_t_ParamLimits

0xa7bf,	// (0x000a4d0b) bg_popup_preview_window_pane_cp01_ParamLimits

0xa7bf,	// (0x000a4d0b) bg_popup_preview_window_pane_cp01

0xb919,	// (0x000a5e65) popup_phob_thumbnail2_window_g1_ParamLimits

0xb919,	// (0x000a5e65) popup_phob_thumbnail2_window_g1

0xa42e,	// (0x000a497a) call2_cli_visual_pane

0x3cd3,	// (0x0009e21f) popup_call2_audio_conf_window_ParamLimits

0x3cd3,	// (0x0009e21f) popup_call2_audio_conf_window

0x3ce8,	// (0x0009e234) popup_call2_audio_first_window_ParamLimits

0x3ce8,	// (0x0009e234) popup_call2_audio_first_window

0x3d86,	// (0x0009e2d2) popup_call2_audio_in_window_ParamLimits

0x3d86,	// (0x0009e2d2) popup_call2_audio_in_window

0x3dc8,	// (0x0009e314) popup_call2_audio_out_window_ParamLimits

0x3dc8,	// (0x0009e314) popup_call2_audio_out_window

0x3e2a,	// (0x0009e376) popup_call2_audio_second_window_ParamLimits

0x3e2a,	// (0x0009e376) popup_call2_audio_second_window

0x3e88,	// (0x0009e3d4) popup_call2_audio_wait_window_ParamLimits

0x3e88,	// (0x0009e3d4) popup_call2_audio_wait_window

0xa42e,	// (0x000a497a) bg_popup_call2_act_pane_cp03

0xa7a1,	// (0x000a4ced) list_conf_pane_cp

0xb925,	// (0x000a5e71) popup_call2_audio_conf_window_t1

0xb933,	// (0x000a5e7f) list_single_graphic_popup_conf2_pane_ParamLimits

0xb933,	// (0x000a5e7f) list_single_graphic_popup_conf2_pane

0xb1de,	// (0x000a572a) list_highlight_pane_cp04

0xb946,	// (0x000a5e92) list_single_graphic_popup_conf2_pane_g1

0xb1ef,	// (0x000a573b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4d2,	// (0x000a9a1e) list_single_graphic_popup_conf2_pane_g

0xb950,	// (0x000a5e9c) list_single_graphic_popup_conf2_pane_t1

0xb95e,	// (0x000a5eaa) bg_popup_call2_act_pane_cp01_ParamLimits

0xb95e,	// (0x000a5eaa) bg_popup_call2_act_pane_cp01

0xb9e8,	// (0x000a5f34) call_type_pane_cp05_ParamLimits

0xb9e8,	// (0x000a5f34) call_type_pane_cp05

0xba3c,	// (0x000a5f88) popup_call2_audio_second_window_g1_ParamLimits

0xba3c,	// (0x000a5f88) popup_call2_audio_second_window_g1

0xba90,	// (0x000a5fdc) popup_call2_audio_second_window_g2_ParamLimits

0xba90,	// (0x000a5fdc) popup_call2_audio_second_window_g2

0x0002,

0x014b,	// (0x0009a697) popup_call2_audio_second_window_g_ParamLimits

0x014b,	// (0x0009a697) popup_call2_audio_second_window_g

0xbaf5,	// (0x000a6041) popup_call2_audio_second_window_t1_ParamLimits

0xbaf5,	// (0x000a6041) popup_call2_audio_second_window_t1

0xbbb0,	// (0x000a60fc) popup_call2_audio_second_window_t2_ParamLimits

0xbbb0,	// (0x000a60fc) popup_call2_audio_second_window_t2

0xbc03,	// (0x000a614f) popup_call2_audio_second_window_t3_ParamLimits

0xbc03,	// (0x000a614f) popup_call2_audio_second_window_t3

0x0003,

0x0152,	// (0x0009a69e) popup_call2_audio_second_window_t_ParamLimits

0x0152,	// (0x0009a69e) popup_call2_audio_second_window_t

0xa42e,	// (0x000a497a) bg_popup_call2_in_pane_cp02

0xa438,	// (0x000a4984) call_type_pane_cp04

0xa440,	// (0x000a498c) popup_call2_audio_wait_window_g1

0xa448,	// (0x000a4994) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x000a962a) popup_call2_audio_wait_window_g

0xa450,	// (0x000a499c) popup_call2_audio_wait_window_t3

0xbcf6,	// (0x000a6242) bg_popup_call2_act_pane_ParamLimits

0xbcf6,	// (0x000a6242) bg_popup_call2_act_pane

0xbdb6,	// (0x000a6302) call_type_pane_cp03_ParamLimits

0xbdb6,	// (0x000a6302) call_type_pane_cp03

0xbe1a,	// (0x000a6366) popup_call2_audio_first_window_g1_ParamLimits

0xbe1a,	// (0x000a6366) popup_call2_audio_first_window_g1

0xbe8a,	// (0x000a63d6) popup_call2_audio_first_window_g2_ParamLimits

0xbe8a,	// (0x000a63d6) popup_call2_audio_first_window_g2

0xb304,	// (0x000a5850) popup_call2_audio_first_window_g3_ParamLimits

0xb304,	// (0x000a5850) popup_call2_audio_first_window_g3

0x0004,

0xf4d7,	// (0x000a9a23) popup_call2_audio_first_window_g_ParamLimits

0xf4d7,	// (0x000a9a23) popup_call2_audio_first_window_g

0xbf68,	// (0x000a64b4) popup_call2_audio_first_window_t1_ParamLimits

0xbf68,	// (0x000a64b4) popup_call2_audio_first_window_t1

0xc06b,	// (0x000a65b7) popup_call2_audio_first_window_t4_ParamLimits

0xc06b,	// (0x000a65b7) popup_call2_audio_first_window_t4

0xc14e,	// (0x000a669a) popup_call2_audio_first_window_t5_ParamLimits

0xc14e,	// (0x000a669a) popup_call2_audio_first_window_t5

0x0003,

0x0166,	// (0x0009a6b2) popup_call2_audio_first_window_t_ParamLimits

0x0166,	// (0x0009a6b2) popup_call2_audio_first_window_t

0xa7b7,	// (0x000a4d03) bg_popup_call2_act_pane_g1

0xc7f5,	// (0x000a6d41) popup_cale_lunar_info_window_t1

0xc803,	// (0x000a6d4f) popup_cale_lunar_info_window_t2

0xc811,	// (0x000a6d5d) popup_cale_lunar_info_window_t3

0xa42e,	// (0x000a497a) bg_popup_call2_bubble_pane

0xc24f,	// (0x000a679b) bg_popup_call2_in_pane_cp01_ParamLimits

0xc24f,	// (0x000a679b) bg_popup_call2_in_pane_cp01

0x9cdf,	// (0x000a422b) call_type_pane_cp02

0xc297,	// (0x000a67e3) popup_call2_audio_out_window_g1_ParamLimits

0xc297,	// (0x000a67e3) popup_call2_audio_out_window_g1

0xc2c3,	// (0x000a680f) popup_call2_audio_out_window_g2_ParamLimits

0xc2c3,	// (0x000a680f) popup_call2_audio_out_window_g2

0xc2eb,	// (0x000a6837) popup_call2_audio_out_window_g3_ParamLimits

0xc2eb,	// (0x000a6837) popup_call2_audio_out_window_g3

0x0003,

0x016f,	// (0x0009a6bb) popup_call2_audio_out_window_g_ParamLimits

0x016f,	// (0x0009a6bb) popup_call2_audio_out_window_g

0xc326,	// (0x000a6872) popup_call2_audio_out_window_t1_ParamLimits

0xc326,	// (0x000a6872) popup_call2_audio_out_window_t1

0xc385,	// (0x000a68d1) popup_call2_audio_out_window_t2_ParamLimits

0xc385,	// (0x000a68d1) popup_call2_audio_out_window_t2

0xc3d9,	// (0x000a6925) popup_call2_audio_out_window_t3_ParamLimits

0xc3d9,	// (0x000a6925) popup_call2_audio_out_window_t3

0xc3ef,	// (0x000a693b) popup_call2_audio_out_window_t4_ParamLimits

0xc3ef,	// (0x000a693b) popup_call2_audio_out_window_t4

0xc405,	// (0x000a6951) popup_call2_audio_out_window_t5_ParamLimits

0xc405,	// (0x000a6951) popup_call2_audio_out_window_t5

0x0005,

0x0178,	// (0x0009a6c4) popup_call2_audio_out_window_t_ParamLimits

0x0178,	// (0x0009a6c4) popup_call2_audio_out_window_t

0xc469,	// (0x000a69b5) bg_popup_call2_in_pane_ParamLimits

0xc469,	// (0x000a69b5) bg_popup_call2_in_pane

0xc4c5,	// (0x000a6a11) popup_call2_audio_in_window_g1_ParamLimits

0xc4c5,	// (0x000a6a11) popup_call2_audio_in_window_g1

0xc4fd,	// (0x000a6a49) popup_call2_audio_in_window_g2_ParamLimits

0xc4fd,	// (0x000a6a49) popup_call2_audio_in_window_g2

0xc535,	// (0x000a6a81) popup_call2_audio_in_window_g3_ParamLimits

0xc535,	// (0x000a6a81) popup_call2_audio_in_window_g3

0x0003,

0x0185,	// (0x0009a6d1) popup_call2_audio_in_window_g_ParamLimits

0x0185,	// (0x0009a6d1) popup_call2_audio_in_window_g

0xc58d,	// (0x000a6ad9) popup_call2_audio_in_window_t1_ParamLimits

0xc58d,	// (0x000a6ad9) popup_call2_audio_in_window_t1

0xc60d,	// (0x000a6b59) popup_call2_audio_in_window_t2_ParamLimits

0xc60d,	// (0x000a6b59) popup_call2_audio_in_window_t2

0xc68d,	// (0x000a6bd9) popup_call2_audio_in_window_t3_ParamLimits

0xc68d,	// (0x000a6bd9) popup_call2_audio_in_window_t3

0xc6a7,	// (0x000a6bf3) popup_call2_audio_in_window_t4_ParamLimits

0xc6a7,	// (0x000a6bf3) popup_call2_audio_in_window_t4

0xc6b9,	// (0x000a6c05) popup_call2_audio_in_window_t5_ParamLimits

0xc6b9,	// (0x000a6c05) popup_call2_audio_in_window_t5

0xc6cb,	// (0x000a6c17) popup_call2_audio_in_window_t6_ParamLimits

0xc6cb,	// (0x000a6c17) popup_call2_audio_in_window_t6

0x0005,

0x018e,	// (0x0009a6da) popup_call2_audio_in_window_t_ParamLimits

0x018e,	// (0x0009a6da) popup_call2_audio_in_window_t

0xa7b7,	// (0x000a4d03) bg_popup_call2_in_pane_g1

0xc81f,	// (0x000a6d6b) popup_cale_lunar_info_window_t4

0x0003,

0x0209,	// (0x0009a755) popup_cale_lunar_info_window_t

0xa7bf,	// (0x000a4d0b) bg_popup_call2_rect_pane_ParamLimits

0xa7bf,	// (0x000a4d0b) bg_popup_call2_rect_pane

0xa42e,	// (0x000a497a) call2_cli_visual_graphic_pane

0xa42e,	// (0x000a497a) call2_cli_visual_text_pane

0x43a4,	// (0x0009e8f0) smil_status_volume_pane_g3

0x0002,

0xa8e5,	// (0x000a4e31) call2_cli_visual_graphic_pane_g1

0xa8e5,	// (0x000a4e31) call2_cli_visual_graphic_pane_g2

0xa8e5,	// (0x000a4e31) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e2,	// (0x000a9a2e) call2_cli_visual_graphic_pane_g

0xc6dd,	// (0x000a6c29) bg_popup_call2_rect_pane_g1

0xa971,	// (0x000a4ebd) bg_popup_call2_rect_pane_g2

0xc6e5,	// (0x000a6c31) bg_popup_call2_rect_pane_g3

0xc6ed,	// (0x000a6c39) bg_popup_call2_rect_pane_g4

0xc6f5,	// (0x000a6c41) bg_popup_call2_rect_pane_g5

0xc6fd,	// (0x000a6c49) bg_popup_call2_rect_pane_g6

0xc705,	// (0x000a6c51) bg_popup_call2_rect_pane_g7

0xc70d,	// (0x000a6c59) bg_popup_call2_rect_pane_g8

0xc715,	// (0x000a6c61) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e9,	// (0x000a9a35) bg_popup_call2_rect_pane_g

0xc71d,	// (0x000a6c69) bg_popup_call2_bubble_pane_g1

0xc725,	// (0x000a6c71) bg_popup_call2_bubble_pane_g2

0xc72d,	// (0x000a6c79) bg_popup_call2_bubble_pane_g3

0xc735,	// (0x000a6c81) bg_popup_call2_bubble_pane_g4

0xc73d,	// (0x000a6c89) bg_popup_call2_bubble_pane_g5

0xc745,	// (0x000a6c91) bg_popup_call2_bubble_pane_g6

0xc74d,	// (0x000a6c99) bg_popup_call2_bubble_pane_g7

0xc755,	// (0x000a6ca1) bg_popup_call2_bubble_pane_g8

0xc75d,	// (0x000a6ca9) bg_popup_call2_bubble_pane_g9

0x0008,

0x01b5,	// (0x0009a701) bg_popup_call2_bubble_pane_g

0x1541,	// (0x0009ba8d) aid_cale_week_size_cell_pane

0x1ac4,	// (0x0009c010) aid_cams_cif_uncrop_pane_ParamLimits

0x1ac4,	// (0x0009c010) aid_cams_cif_uncrop_pane

0x1c1f,	// (0x0009c16b) aid_cams_size_cell_ParamLimits

0x1c1f,	// (0x0009c16b) aid_cams_size_cell

0x1c2b,	// (0x0009c177) grid_cams_pane_ParamLimits

0x1c39,	// (0x0009c185) linegrid_cams_pane_ParamLimits

0x1e07,	// (0x0009c353) call_video_pane_t1

0x1e28,	// (0x0009c374) call_video_pane_t2

0x0001,

0xf253,	// (0x000a979f) call_video_pane_t

0x2376,	// (0x0009c8c2) aid_cale_month_size_cell_pane_ParamLimits

0x2376,	// (0x0009c8c2) aid_cale_month_size_cell_pane

0xf52c,	// (0x000a9a78) smil_status_volume_pane_g

0x43b1,	// (0x0009e8fd) volume_smil_pane_ParamLimits

0x0c8d,	// (0x0009b1d9) aid_popup2_width_pane

0x143b,	// (0x0009b987) cell_qdial_pane_g4_ParamLimits

0x143b,	// (0x0009b987) cell_qdial_pane_g4

0x33be,	// (0x0009d90a) aid_blid_cardinal_pane_ParamLimits

0x33ce,	// (0x0009d91a) aid_blid_destination_pane_ParamLimits

0x33ce,	// (0x0009d91a) aid_blid_destination_pane

0xa7bf,	// (0x000a4d0b) bg_popup_call_poc_act_pane_ParamLimits

0xa7bf,	// (0x000a4d0b) bg_popup_call_poc_act_pane

0xa7bf,	// (0x000a4d0b) bg_popup_call_poc_inact_pane_ParamLimits

0xa7bf,	// (0x000a4d0b) bg_popup_call_poc_inact_pane

0xc765,	// (0x000a6cb1) bg_popup_call_poc_act_pane_g1

0xc76d,	// (0x000a6cb9) bg_popup_call_poc_act_pane_g2

0xc775,	// (0x000a6cc1) bg_popup_call_poc_act_pane_g3

0xc735,	// (0x000a6c81) bg_popup_call_poc_act_pane_g4

0xc73d,	// (0x000a6c89) bg_popup_call_poc_act_pane_g5

0xc77d,	// (0x000a6cc9) bg_popup_call_poc_act_pane_g6

0xc74d,	// (0x000a6c99) bg_popup_call_poc_act_pane_g7

0xc785,	// (0x000a6cd1) bg_popup_call_poc_act_pane_g8

0xa42e,	// (0x000a497a) main_usb_pane

0x41a1,	// (0x0009e6ed) popup_cale_lunar_info_window

0x2145,	// (0x0009c691) im_reading_pane_t1_ParamLimits

0xab7d,	// (0x000a50c9) list_im_pane_ParamLimits

0xab8e,	// (0x000a50da) scroll_pane_cp07_ParamLimits

0xa42e,	// (0x000a497a) grid_highlight_pane_cp012

0xa7bf,	// (0x000a4d0b) mup_scale_pane_ParamLimits

0xb304,	// (0x000a5850) main_usb_pane_g1_ParamLimits

0xb304,	// (0x000a5850) main_usb_pane_g1

0x3f02,	// (0x0009e44e) main_usb_pane_g2_ParamLimits

0x3f02,	// (0x0009e44e) main_usb_pane_g2

0x0001,

0xf4fc,	// (0x000a9a48) main_usb_pane_g_ParamLimits

0xf4fc,	// (0x000a9a48) main_usb_pane_g

0x3f0e,	// (0x0009e45a) main_usb_pane_t1_ParamLimits

0x3f0e,	// (0x0009e45a) main_usb_pane_t1

0x3f20,	// (0x0009e46c) main_usb_pane_t2_ParamLimits

0x3f20,	// (0x0009e46c) main_usb_pane_t2

0x3f32,	// (0x0009e47e) main_usb_pane_t3_ParamLimits

0x3f32,	// (0x0009e47e) main_usb_pane_t3

0x3f44,	// (0x0009e490) main_usb_pane_t4_ParamLimits

0x3f44,	// (0x0009e490) main_usb_pane_t4

0x3f56,	// (0x0009e4a2) main_usb_pane_t5_ParamLimits

0x3f56,	// (0x0009e4a2) main_usb_pane_t5

0x3f68,	// (0x0009e4b4) main_usb_pane_t6_ParamLimits

0x3f68,	// (0x0009e4b4) main_usb_pane_t6

0x0005,

0xf501,	// (0x000a9a4d) main_usb_pane_t_ParamLimits

0x3364,	// (0x0009d8b0) aid_text_placing

0x3370,	// (0x0009d8bc) main_location2_pane_t1_ParamLimits

0x3384,	// (0x0009d8d0) main_location2_pane_t2_ParamLimits

0x3398,	// (0x0009d8e4) main_location2_pane_t3_ParamLimits

0x33ac,	// (0x0009d8f8) main_location2_pane_t4_ParamLimits

0x33ac,	// (0x0009d8f8) main_location2_pane_t4

0xf3b4,	// (0x000a9900) main_location2_pane_t_ParamLimits

0xa7fb,	// (0x000a4d47) find_pinb_pane_g2_ParamLimits

0xa7fb,	// (0x000a4d47) find_pinb_pane_g2

0x0001,

0xf104,	// (0x000a9650) find_pinb_pane_g_ParamLimits

0xf104,	// (0x000a9650) find_pinb_pane_g

0xa807,	// (0x000a4d53) find_pinb_pane_t1_ParamLimits

0xa819,	// (0x000a4d65) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x000a9655) find_pinb_pane_t_ParamLimits

0xa42e,	// (0x000a497a) main_call3_pane

0x2939,	// (0x0009ce85) cale_month_day_heading_pane_t1_ParamLimits

0x29bf,	// (0x0009cf0b) cale_month_day_heading_pane_t2_ParamLimits

0x2a38,	// (0x0009cf84) cale_month_day_heading_pane_t3_ParamLimits

0x2ab1,	// (0x0009cffd) cale_month_day_heading_pane_t4_ParamLimits

0x2b2a,	// (0x0009d076) cale_month_day_heading_pane_t5_ParamLimits

0x2ba3,	// (0x0009d0ef) cale_month_day_heading_pane_t6_ParamLimits

0x2c1c,	// (0x0009d168) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x000a97d7) cale_month_day_heading_pane_t_ParamLimits

0xadd8,	// (0x000a5324) smil_status_volume_pane

0x3ac1,	// (0x0009e00d) postcard_address_pane_ParamLimits

0x3ac1,	// (0x0009e00d) postcard_address_pane

0x3acd,	// (0x0009e019) postcard_message_pane_ParamLimits

0x3acd,	// (0x0009e019) postcard_message_pane

0x3ec7,	// (0x0009e413) call2_cli_visual_pane_t1_ParamLimits

0x3ec7,	// (0x0009e413) call2_cli_visual_pane_t1

0x4508,	// (0x0009ea54) postcard_message_pane_t1_ParamLimits

0x4508,	// (0x0009ea54) postcard_message_pane_t1

0x44f1,	// (0x0009ea3d) postcard_address_pane_t1_ParamLimits

0x44f1,	// (0x0009ea3d) postcard_address_pane_t1

0x44e2,	// (0x0009ea2e) popup_call3_audio_in_window_ParamLimits

0x44e2,	// (0x0009ea2e) popup_call3_audio_in_window

0x43c6,	// (0x0009e912) bg_popup_call3_in_pane_ParamLimits

0x43c6,	// (0x0009e912) bg_popup_call3_in_pane

0x4428,	// (0x0009e974) popup_call3_audio_in_window_g1_ParamLimits

0x4428,	// (0x0009e974) popup_call3_audio_in_window_g1

0x4440,	// (0x0009e98c) popup_call3_audio_in_window_g2_ParamLimits

0x4440,	// (0x0009e98c) popup_call3_audio_in_window_g2

0x4458,	// (0x0009e9a4) popup_call3_audio_in_window_g3_ParamLimits

0x4458,	// (0x0009e9a4) popup_call3_audio_in_window_g3

0x0003,

0xf533,	// (0x000a9a7f) popup_call3_audio_in_window_g_ParamLimits

0xf533,	// (0x000a9a7f) popup_call3_audio_in_window_g

0x4480,	// (0x0009e9cc) popup_call3_audio_in_window_t1_ParamLimits

0x4480,	// (0x0009e9cc) popup_call3_audio_in_window_t1

0x44a8,	// (0x0009e9f4) popup_call3_audio_in_window_t2_ParamLimits

0x44a8,	// (0x0009e9f4) popup_call3_audio_in_window_t2

0x44d0,	// (0x0009ea1c) popup_call3_audio_in_window_t3_ParamLimits

0x44d0,	// (0x0009ea1c) popup_call3_audio_in_window_t3

0x0002,

0xf53c,	// (0x000a9a88) popup_call3_audio_in_window_t_ParamLimits

0xf53c,	// (0x000a9a88) popup_call3_audio_in_window_t

0xaa7c,	// (0x000a4fc8) bg_popup_call3_rect_pane

0xc6dd,	// (0x000a6c29) bg_popup_call3_rect_pane_g1

0xa971,	// (0x000a4ebd) bg_popup_call3_rect_pane_g2

0xc6e5,	// (0x000a6c31) bg_popup_call3_rect_pane_g3

0xc6ed,	// (0x000a6c39) bg_popup_call3_rect_pane_g4

0xc6f5,	// (0x000a6c41) bg_popup_call3_rect_pane_g5

0xc6fd,	// (0x000a6c49) bg_popup_call3_rect_pane_g6

0xc705,	// (0x000a6c51) bg_popup_call3_rect_pane_g7

0x36d4,	// (0x0009dc20) mup_visualizer_osc_pane

0xb58e,	// (0x000a5ada) mup_visualizer_spec_pane

0x43e6,	// (0x0009e932) call3_video_qcif_pane_ParamLimits

0x43e6,	// (0x0009e932) call3_video_qcif_pane

0x43f8,	// (0x0009e944) call3_video_qcif_uncrop_pane_ParamLimits

0x43f8,	// (0x0009e944) call3_video_qcif_uncrop_pane

0x4406,	// (0x0009e952) call3_video_subqcif_pane_ParamLimits

0x4406,	// (0x0009e952) call3_video_subqcif_pane

0x4418,	// (0x0009e964) call3_video_subqcif_uncrop_pane_ParamLimits

0x4418,	// (0x0009e964) call3_video_subqcif_uncrop_pane

0x4470,	// (0x0009e9bc) popup_call3_audio_in_window_g4_ParamLimits

0x4470,	// (0x0009e9bc) popup_call3_audio_in_window_g4

0x4391,	// (0x0009e8dd) mup_spec_half_pane

0x439a,	// (0x0009e8e6) mup_spec_half_pane_cp

0xc982,	// (0x000a6ece) mup_osc_middle_pane

0xc98b,	// (0x000a6ed7) mup_visualizer_osc_pane_g1

0x4372,	// (0x0009e8be) mup_spec_bar_pane_ParamLimits

0x4372,	// (0x0009e8be) mup_spec_bar_pane

0xc96f,	// (0x000a6ebb) mup_spec_bar_pane_g1

0xc979,	// (0x000a6ec5) mup_spec_bar_pane_g2

0x0001,

0x024d,	// (0x0009a799) mup_spec_bar_pane_g

0x1541,	// (0x0009ba8d) aid_cale_week_size_cell_pane_ParamLimits

0x1556,	// (0x0009baa2) bg_cale_heading_pane_ParamLimits

0xa9d5,	// (0x000a4f21) bg_cale_pane_cp01_ParamLimits

0x1578,	// (0x0009bac4) cale_week_corner_pane_ParamLimits

0x1592,	// (0x0009bade) cale_week_day_heading_pane_ParamLimits

0x15b4,	// (0x0009bb00) cale_week_scroll_pane_g1_ParamLimits

0x15d1,	// (0x0009bb1d) cale_week_scroll_pane_g2_ParamLimits

0x15e4,	// (0x0009bb30) cale_week_scroll_pane_g3_ParamLimits

0x15f7,	// (0x0009bb43) cale_week_scroll_pane_g4_ParamLimits

0x160a,	// (0x0009bb56) cale_week_scroll_pane_g5_ParamLimits

0x161d,	// (0x0009bb69) cale_week_scroll_pane_g6_ParamLimits

0x1630,	// (0x0009bb7c) cale_week_scroll_pane_g7_ParamLimits

0x1645,	// (0x0009bb91) cale_week_scroll_pane_g8_ParamLimits

0x165a,	// (0x0009bba6) cale_week_scroll_pane_g9_ParamLimits

0x166d,	// (0x0009bbb9) cale_week_scroll_pane_g10_ParamLimits

0x1680,	// (0x0009bbcc) cale_week_scroll_pane_g11_ParamLimits

0x1693,	// (0x0009bbdf) cale_week_scroll_pane_g12_ParamLimits

0x16aa,	// (0x0009bbf6) cale_week_scroll_pane_g13_ParamLimits

0x16c5,	// (0x0009bc11) cale_week_scroll_pane_g14_ParamLimits

0x16e0,	// (0x0009bc2c) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x000a96e1) cale_week_scroll_pane_g_ParamLimits

0x1710,	// (0x0009bc5c) cale_week_time_pane_ParamLimits

0x1725,	// (0x0009bc71) grid_cale_week_pane_ParamLimits

0xa9f2,	// (0x000a4f3e) listscroll_cale_week_pane_t1

0xaa04,	// (0x000a4f50) scroll_pane_cp08_ParamLimits

0x23ea,	// (0x0009c936) cale_month_corner_pane_ParamLimits

0xadae,	// (0x000a52fa) cale_month_pane_t1

0x28b8,	// (0x0009ce04) cale_month_week_pane_ParamLimits

0xb304,	// (0x000a5850) popup_call_status_window_g1_ParamLimits

0x316d,	// (0x0009d6b9) popup_call_status_window_g2_ParamLimits

0x3179,	// (0x0009d6c5) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x000a9887) popup_call_status_window_g_ParamLimits

0xb15e,	// (0x000a56aa) aid_call2_pane

0x3979,	// (0x0009dec5) msg_header_pane_g1

0x3ac1,	// (0x0009e00d) postcard_address2_pane_ParamLimits

0x3ac1,	// (0x0009e00d) postcard_address2_pane

0x3acd,	// (0x0009e019) postcard_message2_pane_ParamLimits

0x3acd,	// (0x0009e019) postcard_message2_pane

0x4309,	// (0x0009e855) message2_row_pane_ParamLimits

0x4309,	// (0x0009e855) message2_row_pane

0x4324,	// (0x0009e870) address2_row_pane_ParamLimits

0x4324,	// (0x0009e870) address2_row_pane

0xc93d,	// (0x000a6e89) postcard_message2_row_pane_g1

0xc945,	// (0x000a6e91) postcard_message2_row_pane_t1

0xc93d,	// (0x000a6e89) address2_row_pane_g1

0xc945,	// (0x000a6e91) address2_row_pane_t1

0x19aa,	// (0x0009bef6) aid_size_cell_vorec

0xa42e,	// (0x000a497a) main_rss_pane

0x4337,	// (0x0009e883) rss_list_single_pane_ParamLimits

0x4337,	// (0x0009e883) rss_list_single_pane

0xc953,	// (0x000a6e9f) rss_list_single_pane_t1

0xc961,	// (0x000a6ead) rss_list_single_pane_t2

0x0001,

0x0248,	// (0x0009a794) rss_list_single_pane_t

0xa42e,	// (0x000a497a) main_camera2_pane

0xa42e,	// (0x000a497a) main_video2_pane

0x456c,	// (0x0009eab8) cams_zoom_pane_cp2_ParamLimits

0x456c,	// (0x0009eab8) cams_zoom_pane_cp2

0x4578,	// (0x0009eac4) image2_vga_pane_ParamLimits

0x4578,	// (0x0009eac4) image2_vga_pane

0x4587,	// (0x0009ead3) main_camera2_pane_g1_ParamLimits

0x4587,	// (0x0009ead3) main_camera2_pane_g1

0x4593,	// (0x0009eadf) main_camera2_pane_g2_ParamLimits

0x4593,	// (0x0009eadf) main_camera2_pane_g2

0x459f,	// (0x0009eaeb) main_camera2_pane_g3_ParamLimits

0x459f,	// (0x0009eaeb) main_camera2_pane_g3

0x45ab,	// (0x0009eaf7) main_camera2_pane_g4_ParamLimits

0x45ab,	// (0x0009eaf7) main_camera2_pane_g4

0x45b7,	// (0x0009eb03) main_camera2_pane_g5_ParamLimits

0x45b7,	// (0x0009eb03) main_camera2_pane_g5

0x45c3,	// (0x0009eb0f) main_camera2_pane_g6_ParamLimits

0x45c3,	// (0x0009eb0f) main_camera2_pane_g6

0x45cf,	// (0x0009eb1b) main_camera2_pane_g7_ParamLimits

0x45cf,	// (0x0009eb1b) main_camera2_pane_g7

0x45db,	// (0x0009eb27) main_camera2_pane_g8_ParamLimits

0x45db,	// (0x0009eb27) main_camera2_pane_g8

0x0008,

0xf543,	// (0x000a9a8f) main_camera2_pane_g_ParamLimits

0xf543,	// (0x000a9a8f) main_camera2_pane_g

0x45f3,	// (0x0009eb3f) main_camera2_pane_t1_ParamLimits

0x45f3,	// (0x0009eb3f) main_camera2_pane_t1

0x4605,	// (0x0009eb51) main_camera2_pane_t2_ParamLimits

0x4605,	// (0x0009eb51) main_camera2_pane_t2

0x4617,	// (0x0009eb63) main_camera2_pane_t3_ParamLimits

0x4617,	// (0x0009eb63) main_camera2_pane_t3

0x4629,	// (0x0009eb75) main_camera2_pane_t4_ParamLimits

0x4629,	// (0x0009eb75) main_camera2_pane_t4

0x0006,

0xf556,	// (0x000a9aa2) main_camera2_pane_t_ParamLimits

0xf556,	// (0x000a9aa2) main_camera2_pane_t

0x468b,	// (0x0009ebd7) cams_zoom_pane_cp4_ParamLimits

0x468b,	// (0x0009ebd7) cams_zoom_pane_cp4

0x469b,	// (0x0009ebe7) image2_cif_pane_ParamLimits

0x469b,	// (0x0009ebe7) image2_cif_pane

0x46b0,	// (0x0009ebfc) image2_subqcif_pane_ParamLimits

0x46b0,	// (0x0009ebfc) image2_subqcif_pane

0x46bf,	// (0x0009ec0b) main_video2_pane_g1_ParamLimits

0x46bf,	// (0x0009ec0b) main_video2_pane_g1

0x46d1,	// (0x0009ec1d) main_video2_pane_g2_ParamLimits

0x46d1,	// (0x0009ec1d) main_video2_pane_g2

0x46e1,	// (0x0009ec2d) main_video2_pane_g3_ParamLimits

0x46e1,	// (0x0009ec2d) main_video2_pane_g3

0x46f1,	// (0x0009ec3d) main_video2_pane_g4_ParamLimits

0x46f1,	// (0x0009ec3d) main_video2_pane_g4

0x4701,	// (0x0009ec4d) main_video2_pane_g5_ParamLimits

0x4701,	// (0x0009ec4d) main_video2_pane_g5

0x4711,	// (0x0009ec5d) main_video2_pane_g6_ParamLimits

0x4711,	// (0x0009ec5d) main_video2_pane_g6

0x0005,

0xf565,	// (0x000a9ab1) main_video2_pane_g_ParamLimits

0xf565,	// (0x000a9ab1) main_video2_pane_g

0x4723,	// (0x0009ec6f) main_video2_pane_t1_ParamLimits

0x4723,	// (0x0009ec6f) main_video2_pane_t1

0x473d,	// (0x0009ec89) main_video2_pane_t2_ParamLimits

0x473d,	// (0x0009ec89) main_video2_pane_t2

0x4763,	// (0x0009ecaf) main_video2_pane_t3_ParamLimits

0x4763,	// (0x0009ecaf) main_video2_pane_t3

0x0002,

0xf572,	// (0x000a9abe) main_video2_pane_t_ParamLimits

0xf572,	// (0x000a9abe) main_video2_pane_t

0x401f,	// (0x0009e56b) call_muted_g2

0x0001,

0xf527,	// (0x000a9a73) call_muted_g

0xa42e,	// (0x000a497a) main_mup2_pane

0xc9c2,	// (0x000a6f0e) main_mup2_pane_g1_ParamLimits

0xc9c2,	// (0x000a6f0e) main_mup2_pane_g1

0x4789,	// (0x0009ecd5) main_mup2_pane_g2_ParamLimits

0x4789,	// (0x0009ecd5) main_mup2_pane_g2

0x4a0b,	// (0x0009ef57) main_mup_pane_g13_cp1

0x4a13,	// (0x0009ef5f) mup_volume_pane_cp1

0x47a9,	// (0x0009ecf5) main_mup2_pane_g4_ParamLimits

0x47a9,	// (0x0009ecf5) main_mup2_pane_g4

0x47be,	// (0x0009ed0a) main_mup2_pane_g5_ParamLimits

0x47be,	// (0x0009ed0a) main_mup2_pane_g5

0x47d3,	// (0x0009ed1f) main_mup2_pane_g6_ParamLimits

0x47d3,	// (0x0009ed1f) main_mup2_pane_g6

0x47e8,	// (0x0009ed34) main_mup2_pane_g7_ParamLimits

0x47e8,	// (0x0009ed34) main_mup2_pane_g7

0x0006,

0xf579,	// (0x000a9ac5) main_mup2_pane_g_ParamLimits

0xf579,	// (0x000a9ac5) main_mup2_pane_g

0x4804,	// (0x0009ed50) main_mup2_pane_t1_ParamLimits

0x4804,	// (0x0009ed50) main_mup2_pane_t1

0x481b,	// (0x0009ed67) main_mup2_pane_t2_ParamLimits

0x481b,	// (0x0009ed67) main_mup2_pane_t2

0x4832,	// (0x0009ed7e) main_mup2_pane_t3_ParamLimits

0x4832,	// (0x0009ed7e) main_mup2_pane_t3

0x4849,	// (0x0009ed95) main_mup2_pane_t4_ParamLimits

0x4849,	// (0x0009ed95) main_mup2_pane_t4

0x4863,	// (0x0009edaf) main_mup2_pane_t5_ParamLimits

0x4863,	// (0x0009edaf) main_mup2_pane_t5

0x487d,	// (0x0009edc9) main_mup2_pane_t6_ParamLimits

0x487d,	// (0x0009edc9) main_mup2_pane_t6

0x0005,

0xf588,	// (0x000a9ad4) main_mup2_pane_t_ParamLimits

0xf588,	// (0x000a9ad4) main_mup2_pane_t

0x48b5,	// (0x0009ee01) mup2_visualizer_pane_ParamLimits

0x48b5,	// (0x0009ee01) mup2_visualizer_pane

0x48eb,	// (0x0009ee37) mup_progress_pane_cp_ParamLimits

0x48eb,	// (0x0009ee37) mup_progress_pane_cp

0x49f6,	// (0x0009ef42) mup_volume_pane_cp_ParamLimits

0x49f6,	// (0x0009ef42) mup_volume_pane_cp

0x4902,	// (0x0009ee4e) mup2_visualizer_pane_g1_ParamLimits

0x4902,	// (0x0009ee4e) mup2_visualizer_pane_g1

0xc9ce,	// (0x000a6f1a) mup2_visualizer_pane_g2_ParamLimits

0xc9ce,	// (0x000a6f1a) mup2_visualizer_pane_g2

0x4917,	// (0x0009ee63) mup2_visualizer_pane_g3_ParamLimits

0x4917,	// (0x0009ee63) mup2_visualizer_pane_g3

0x0002,

0xf595,	// (0x000a9ae1) mup2_visualizer_pane_g_ParamLimits

0xf595,	// (0x000a9ae1) mup2_visualizer_pane_g

0xb7b5,	// (0x000a5d01) aid_size_cell_fmradio

0x4135,	// (0x0009e681) aid_height_parent_landcape

0xac0c,	// (0x000a5158) wml_content_pane_cp

0xac14,	// (0x000a5160) wml_tabs_pane

0xac1d,	// (0x000a5169) popup_wml_miniature_window

0xac25,	// (0x000a5171) scroll_pane_cp021

0xac39,	// (0x000a5185) wml_content_pane_comp8

0xa42e,	// (0x000a497a) bg_popup_sub_pane_cp05

0xc9ec,	// (0x000a6f38) popup_wml_miniature_window_g1

0xc9f4,	// (0x000a6f40) wml_miniature_view_pane

0x4925,	// (0x0009ee71) aid_size_wml_view

0x492d,	// (0x0009ee79) wml_miniature_view_pane_g1

0x4936,	// (0x0009ee82) wml_miniature_view_pane_g2

0x493f,	// (0x0009ee8b) wml_miniature_view_pane_g3

0x4947,	// (0x0009ee93) wml_miniature_view_pane_g4

0x494f,	// (0x0009ee9b) wml_miniature_view_pane_g5

0x4957,	// (0x0009eea3) wml_miniature_view_pane_g6

0x495f,	// (0x0009eeab) wml_miniature_view_pane_g7

0x4967,	// (0x0009eeb3) wml_miniature_view_pane_g8

0x0007,

0xf59c,	// (0x000a9ae8) wml_miniature_view_pane_g

0xc9c2,	// (0x000a6f0e) background_graphic_ParamLimits

0xc9c2,	// (0x000a6f0e) background_graphic

0xc9fc,	// (0x000a6f48) wml_tabs_2_pane

0xca05,	// (0x000a6f51) wml_tabs_3_pane_ParamLimits

0xca05,	// (0x000a6f51) wml_tabs_3_pane

0xca17,	// (0x000a6f63) wml_tabs_4_pane_ParamLimits

0xca17,	// (0x000a6f63) wml_tabs_4_pane

0xca2d,	// (0x000a6f79) wml_tabs_5_pane_ParamLimits

0xca2d,	// (0x000a6f79) wml_tabs_5_pane

0xca47,	// (0x000a6f93) wml_tabs_pane_g2_ParamLimits

0xca47,	// (0x000a6f93) wml_tabs_pane_g2

0xca5b,	// (0x000a6fa7) wml_tabs_pane_g3_ParamLimits

0xca5b,	// (0x000a6fa7) wml_tabs_pane_g3

0x496f,	// (0x0009eebb) wml_tabs_2_active_pane_ParamLimits

0x496f,	// (0x0009eebb) wml_tabs_2_active_pane

0x497f,	// (0x0009eecb) wml_tabs_2_passive_pane_ParamLimits

0x497f,	// (0x0009eecb) wml_tabs_2_passive_pane

0x498f,	// (0x0009eedb) wml_tabs_3_active_pane_cp_ParamLimits

0x498f,	// (0x0009eedb) wml_tabs_3_active_pane_cp

0x49a0,	// (0x0009eeec) wml_tabs_3_passive_pane_ParamLimits

0x49a0,	// (0x0009eeec) wml_tabs_3_passive_pane

0x49b1,	// (0x0009eefd) wml_tabs_3_passive_pane_cp_ParamLimits

0x49b1,	// (0x0009eefd) wml_tabs_3_passive_pane_cp

0x49c2,	// (0x0009ef0e) tabs_4_active_pane

0x49ca,	// (0x0009ef16) tabs_4_passive_pane

0x49d2,	// (0x0009ef1e) tabs_4_passive_pane_cp

0x49da,	// (0x0009ef26) tabs_4_passive_pane_cp2

0x3efa,	// (0x0009e446) aid_height_text

0x369d,	// (0x0009dbe9) mup_volume_cont_pane_ParamLimits

0x369d,	// (0x0009dbe9) mup_volume_cont_pane

0x1077,	// (0x0009b5c3) aid_size_cell_pinb

0x1081,	// (0x0009b5cd) aid_size_list_pinb

0x48d4,	// (0x0009ee20) mup2_volume_cont_pane_ParamLimits

0x48d4,	// (0x0009ee20) mup2_volume_cont_pane

0x49e2,	// (0x0009ef2e) mup2_volume_cont_pane_g1_ParamLimits

0x49e2,	// (0x0009ef2e) mup2_volume_cont_pane_g1

0x0c99,	// (0x0009b1e5) aid_size_cell_touch_ParamLimits

0x0c99,	// (0x0009b1e5) aid_size_cell_touch

0x0f5a,	// (0x0009b4a6) touch_pane_ParamLimits

0x0f5a,	// (0x0009b4a6) touch_pane

0x0f50,	// (0x0009b49c) main_rss2_pane

0xca78,	// (0x000a6fc4) listscroll_rss2_pane

0xca81,	// (0x000a6fcd) rss2_navigation_pane

0xca89,	// (0x000a6fd5) list_rss2_pane

0xb283,	// (0x000a57cf) scroll_pane_cp22

0xca91,	// (0x000a6fdd) rss2_navigation_pane_g1

0xca9a,	// (0x000a6fe6) rss2_navigation_pane_g2

0xcaa2,	// (0x000a6fee) rss2_navigation_pane_g3

0x0002,

0x02d3,	// (0x0009a81f) rss2_navigation_pane_g

0xcaaa,	// (0x000a6ff6) rss2_navigation_pane_t1

0x4a1b,	// (0x0009ef67) rss2_list_single_pane_ParamLimits

0x4a1b,	// (0x0009ef67) rss2_list_single_pane

0xcab8,	// (0x000a7004) rss2_list_single_pane_t2

0xcac6,	// (0x000a7012) rss2_list_single_pane_t3_ParamLimits

0xcac6,	// (0x000a7012) rss2_list_single_pane_t3

0xcae3,	// (0x000a702f) rss2_list_single_pane_t4

0x2ee8,	// (0x0009d434) smil_status_pane_g1

0x414c,	// (0x0009e698) main_image2_pane_ParamLimits

0x414c,	// (0x0009e698) main_image2_pane

0x45e7,	// (0x0009eb33) main_camera2_pane_g9_ParamLimits

0x45e7,	// (0x0009eb33) main_camera2_pane_g9

0x463b,	// (0x0009eb87) main_camera2_pane_t5_ParamLimits

0x463b,	// (0x0009eb87) main_camera2_pane_t5

0x464d,	// (0x0009eb99) main_camera2_pane_t6_ParamLimits

0x464d,	// (0x0009eb99) main_camera2_pane_t6

0x4a4f,	// (0x0009ef9b) main_image2_pane_g1_ParamLimits

0x4a4f,	// (0x0009ef9b) main_image2_pane_g1

0x3c94,	// (0x0009e1e0) smil2_video_pane_ParamLimits

0x3c94,	// (0x0009e1e0) smil2_video_pane

0x0ccd,	// (0x0009b219) aid_zoom_text_primary_cp

0x0eeb,	// (0x0009b437) popup_preview_fixed_window

0xab75,	// (0x000a50c1) im_reading_pane_g1

0x4531,	// (0x0009ea7d) cams2_bc_adjust_pane_cp_ParamLimits

0x4531,	// (0x0009ea7d) cams2_bc_adjust_pane_cp

0x467d,	// (0x0009ebc9) cams2_bc_adjust_pane_ParamLimits

0x467d,	// (0x0009ebc9) cams2_bc_adjust_pane

0xdb4e,	// (0x000a809a) cams2_bc_adjust_pane_g1

0x4a5b,	// (0x0009efa7) cams2_slider_pane

0x4a64,	// (0x0009efb0) cams2_slider_pane_g1

0x4a6d,	// (0x0009efb9) cams2_slider_pane_g2

0x0006,

0xf5ad,	// (0x000a9af9) cams2_slider_pane_g

0x1181,	// (0x0009b6cd) calc_display_pane_ParamLimits

0x119f,	// (0x0009b6eb) calc_paper_pane_ParamLimits

0x11bb,	// (0x0009b707) grid_calc_pane_ParamLimits

0x31d7,	// (0x0009d723) popup_clock_digital_window_t1_ParamLimits

0xb752,	// (0x000a5c9e) main_image_pane_t1

0x1167,	// (0x0009b6b3) aid_size_cell_calc_ParamLimits

0x1167,	// (0x0009b6b3) aid_size_cell_calc

0x417d,	// (0x0009e6c9) popup_blid_sat_info2_window_ParamLimits

0x417d,	// (0x0009e6c9) popup_blid_sat_info2_window

0xcaf9,	// (0x000a7045) aid_size_cell_blid

0xcb01,	// (0x000a704d) bg_popup_window_pane_cp07

0xcb24,	// (0x000a7070) grid_popup_blid_pane

0xcb2e,	// (0x000a707a) heading_pane_cp05_ParamLimits

0xcb2e,	// (0x000a707a) heading_pane_cp05

0xcbf8,	// (0x000a7144) cell_popup_blid_pane_ParamLimits

0xcbf8,	// (0x000a7144) cell_popup_blid_pane

0xcc1c,	// (0x000a7168) cell_popup_blid_pane_g1

0xcc24,	// (0x000a7170) cell_popup_blid_pane_t1

0x489a,	// (0x0009ede6) mup2_indicator_pane_ParamLimits

0x489a,	// (0x0009ede6) mup2_indicator_pane

0xaa7c,	// (0x000a4fc8) mup2_visualizer_osc_pane

0xc9da,	// (0x000a6f26) mup2_visualizer_spec_pane_ParamLimits

0xc9da,	// (0x000a6f26) mup2_visualizer_spec_pane

0x4a87,	// (0x0009efd3) mup2_spec_half_pane

0x4a90,	// (0x0009efdc) mup2_spec_half_pane_cp

0x4a9a,	// (0x0009efe6) mup2_spec_bar_pane_ParamLimits

0x4a9a,	// (0x0009efe6) mup2_spec_bar_pane

0xc96f,	// (0x000a6ebb) mup2_spec_bar_pane_g1

0xc979,	// (0x000a6ec5) mup2_spec_bar_pane_g2

0x0001,

0x024d,	// (0x0009a799) mup2_spec_bar_pane_g

0x4ab9,	// (0x0009f005) mup2_osc_middle_pane

0xc98b,	// (0x000a6ed7) mup2_visualizer_osc_pane_g1

0x9c10,	// (0x000a415c) popup_number_entry_window_t1_ParamLimits

0x9c23,	// (0x000a416f) popup_number_entry_window_t2_ParamLimits

0x9c35,	// (0x000a4181) popup_number_entry_window_t3_ParamLimits

0x0fb1,	// (0x0009b4fd) popup_number_entry_window_t5_ParamLimits

0x0fb1,	// (0x0009b4fd) popup_number_entry_window_t5

0xf0af,	// (0x000a95fb) popup_number_entry_window_t_ParamLimits

0x9c47,	// (0x000a4193) text_title_cp2_ParamLimits

0x3995,	// (0x0009dee1) aid_hotspot_pointer_text2_pane

0x3a23,	// (0x0009df6f) main_viewer_pane_g9_ParamLimits

0x3a23,	// (0x0009df6f) main_viewer_pane_g9

0xadae,	// (0x000a52fa) cale_month_pane_t1_ParamLimits

0xadeb,	// (0x000a5337) bg_cale_pane_ParamLimits

0xae03,	// (0x000a534f) list_cale_pane_ParamLimits

0xae14,	// (0x000a5360) listscroll_cale_day_pane_t1

0xae26,	// (0x000a5372) scroll_pane_cp09_ParamLimits

0x36dc,	// (0x0009dc28) main_mup_eq_pane_t1_ParamLimits

0x36dc,	// (0x0009dc28) main_mup_eq_pane_t1

0x36f6,	// (0x0009dc42) main_mup_eq_pane_t2_ParamLimits

0x36f6,	// (0x0009dc42) main_mup_eq_pane_t2

0x370e,	// (0x0009dc5a) main_mup_eq_pane_t3_ParamLimits

0x370e,	// (0x0009dc5a) main_mup_eq_pane_t3

0x3726,	// (0x0009dc72) main_mup_eq_pane_t4_ParamLimits

0x3726,	// (0x0009dc72) main_mup_eq_pane_t4

0x373e,	// (0x0009dc8a) main_mup_eq_pane_t5_ParamLimits

0x373e,	// (0x0009dc8a) main_mup_eq_pane_t5

0x3756,	// (0x0009dca2) main_mup_eq_pane_t6_ParamLimits

0x3756,	// (0x0009dca2) main_mup_eq_pane_t6

0x376a,	// (0x0009dcb6) main_mup_eq_pane_t7_ParamLimits

0x376a,	// (0x0009dcb6) main_mup_eq_pane_t7

0x377e,	// (0x0009dcca) main_mup_eq_pane_t8_ParamLimits

0x377e,	// (0x0009dcca) main_mup_eq_pane_t8

0x3794,	// (0x0009dce0) main_mup_eq_pane_t9_ParamLimits

0x3794,	// (0x0009dce0) main_mup_eq_pane_t9

0x37ac,	// (0x0009dcf8) main_mup_eq_pane_t10_ParamLimits

0x37ac,	// (0x0009dcf8) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x000a9986) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x000a9986) main_mup_eq_pane_t

0x3869,	// (0x0009ddb5) mup_equalizer_pane_cp5_ParamLimits

0x387f,	// (0x0009ddcb) mup_equalizer_pane_cp6_ParamLimits

0x3897,	// (0x0009dde3) mup_equalizer_pane_cp7_ParamLimits

0x0f50,	// (0x0009b49c) main_gallery_pane

0xc994,	// (0x000a6ee0) smil2_volume_pane

0xc99c,	// (0x000a6ee8) smil_status_volume_pane_g1_ParamLimits

0xc9af,	// (0x000a6efb) smil_status_volume_pane_g2_ParamLimits

0x43a4,	// (0x0009e8f0) smil_status_volume_pane_g3_ParamLimits

0xf52c,	// (0x000a9a78) smil_status_volume_pane_g_ParamLimits

0xcb01,	// (0x000a704d) bg_popup_window_pane_cp07_ParamLimits

0xcb0f,	// (0x000a705b) blid_firmament_pane

0x4ac2,	// (0x0009f00e) aid_size_cell_gallery_ParamLimits

0x4ac2,	// (0x0009f00e) aid_size_cell_gallery

0x4ad0,	// (0x0009f01c) grid_gallery_pane_ParamLimits

0x4ad0,	// (0x0009f01c) grid_gallery_pane

0x4ae0,	// (0x0009f02c) cell_gallery_pane_ParamLimits

0x4ae0,	// (0x0009f02c) cell_gallery_pane

0xcc32,	// (0x000a717e) bg_cell_gallery_focus_pane_ParamLimits

0xcc32,	// (0x000a717e) bg_cell_gallery_focus_pane

0xcc44,	// (0x000a7190) cell_gallery_pane_g1_ParamLimits

0xcc44,	// (0x000a7190) cell_gallery_pane_g1

0x4b2e,	// (0x0009f07a) cell_gallery_pane_g2_ParamLimits

0x4b2e,	// (0x0009f07a) cell_gallery_pane_g2

0x4b3b,	// (0x0009f087) cell_gallery_pane_g3_ParamLimits

0x4b3b,	// (0x0009f087) cell_gallery_pane_g3

0xcc50,	// (0x000a719c) cell_gallery_pane_g4_ParamLimits

0xcc50,	// (0x000a719c) cell_gallery_pane_g4

0x0003,

0xf5bc,	// (0x000a9b08) cell_gallery_pane_g_ParamLimits

0xf5bc,	// (0x000a9b08) cell_gallery_pane_g

0xcc5c,	// (0x000a71a8) bg_cell_gallery_focus_pane_g1

0xcc64,	// (0x000a71b0) bg_cell_gallery_focus_pane_g2

0xcc6c,	// (0x000a71b8) bg_cell_gallery_focus_pane_g3

0xcc74,	// (0x000a71c0) bg_cell_gallery_focus_pane_g4

0xcc7c,	// (0x000a71c8) bg_cell_gallery_focus_pane_g5

0xcc84,	// (0x000a71d0) bg_cell_gallery_focus_pane_g6

0xcc8c,	// (0x000a71d8) bg_cell_gallery_focus_pane_g7

0xcc94,	// (0x000a71e0) bg_cell_gallery_focus_pane_g8

0x0007,

0x0309,	// (0x0009a855) bg_cell_gallery_focus_pane_g

0xcc9c,	// (0x000a71e8) aid_firma_cardinal

0xccb0,	// (0x000a71fc) blid_firmament_pane_t1

0xccc7,	// (0x000a7213) blid_firmament_pane_t2

0xccde,	// (0x000a722a) blid_firmament_pane_t3

0xccf5,	// (0x000a7241) blid_firmament_pane_t4

0x0003,

0x031a,	// (0x0009a866) blid_firmament_pane_t

0xcd0c,	// (0x000a7258) blid_sat_info_pane

0xcd1c,	// (0x000a7268) blid_sat_info_pane_g1

0xcd1c,	// (0x000a7268) blid_sat_info_pane_g2

0x0001,

0x0323,	// (0x0009a86f) blid_sat_info_pane_g

0xcd26,	// (0x000a7272) blid_sat_info_pane_t1

0xcd34,	// (0x000a7280) smil2_volume_content_pane

0xcd3d,	// (0x000a7289) smil2_volume_pane_g1

0xa9a5,	// (0x000a4ef1) smil2_volume_content_pane_g1

0xcd45,	// (0x000a7291) smil2_volume_content_pane_g2

0xcd4e,	// (0x000a729a) smil2_volume_content_pane_g3

0xcd57,	// (0x000a72a3) smil2_volume_content_pane_g4

0xcd60,	// (0x000a72ac) smil2_volume_content_pane_g5

0xcd69,	// (0x000a72b5) smil2_volume_content_pane_g6

0xcd72,	// (0x000a72be) smil2_volume_content_pane_g7

0xcd7b,	// (0x000a72c7) smil2_volume_content_pane_g8

0xcd84,	// (0x000a72d0) smil2_volume_content_pane_g9

0xcd8d,	// (0x000a72d9) smil2_volume_content_pane_g10

0x0009,

0xf5c5,	// (0x000a9b11) smil2_volume_content_pane_g

0x17a6,	// (0x0009bcf2) cale_week_day_heading_pane_t1_ParamLimits

0x17c1,	// (0x0009bd0d) cale_week_day_heading_pane_t2_ParamLimits

0x17dc,	// (0x0009bd28) cale_week_day_heading_pane_t3_ParamLimits

0x17f7,	// (0x0009bd43) cale_week_day_heading_pane_t4_ParamLimits

0x1812,	// (0x0009bd5e) cale_week_day_heading_pane_t5_ParamLimits

0x182d,	// (0x0009bd79) cale_week_day_heading_pane_t6_ParamLimits

0x1848,	// (0x0009bd94) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x000a9702) cale_week_day_heading_pane_t_ParamLimits

0xaa21,	// (0x000a4f6d) bg_cale_side_pane_ParamLimits

0x1863,	// (0x0009bdaf) cale_week_time_pane_t1_ParamLimits

0x187d,	// (0x0009bdc9) cale_week_time_pane_t2_ParamLimits

0x1897,	// (0x0009bde3) cale_week_time_pane_t3_ParamLimits

0x18b1,	// (0x0009bdfd) cale_week_time_pane_t4_ParamLimits

0x18cb,	// (0x0009be17) cale_week_time_pane_t5_ParamLimits

0x18e5,	// (0x0009be31) cale_week_time_pane_t6_ParamLimits

0x1905,	// (0x0009be51) cale_week_time_pane_t7_ParamLimits

0x1927,	// (0x0009be73) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x000a9711) cale_week_time_pane_t_ParamLimits

0x194b,	// (0x0009be97) cell_cale_week_pane_g2_ParamLimits

0xaa21,	// (0x000a4f6d) bg_cale_side_pane_cp01_ParamLimits

0x2cad,	// (0x0009d1f9) cale_month_week_pane_t1_ParamLimits

0x2cc6,	// (0x0009d212) cale_month_week_pane_t2_ParamLimits

0x2cdf,	// (0x0009d22b) cale_month_week_pane_t3_ParamLimits

0x2cf8,	// (0x0009d244) cale_month_week_pane_t4_ParamLimits

0x2d13,	// (0x0009d25f) cale_month_week_pane_t5_ParamLimits

0x2d34,	// (0x0009d280) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x000a97e6) cale_month_week_pane_t_ParamLimits

0x2ea5,	// (0x0009d3f1) cell_cale_month_pane_g1_ParamLimits

0x0f50,	// (0x0009b49c) main_cale_event_viewer_pane

0x9be6,	// (0x000a4132) listscroll_cale_event_viewer_pane

0xcd96,	// (0x000a72e2) list_cale_ev_pane

0xcd9e,	// (0x000a72ea) scroll_pane_cp023

0xcdaa,	// (0x000a72f6) field_cale_ev_pane_ParamLimits

0xcdaa,	// (0x000a72f6) field_cale_ev_pane

0xcdc8,	// (0x000a7314) field_cale_ev_content_pane_ParamLimits

0xcdc8,	// (0x000a7314) field_cale_ev_content_pane

0xcdd4,	// (0x000a7320) field_cale_ev_pane_g1_ParamLimits

0xcdd4,	// (0x000a7320) field_cale_ev_pane_g1

0xcde0,	// (0x000a732c) field_cale_ev_pane_g2_ParamLimits

0xcde0,	// (0x000a732c) field_cale_ev_pane_g2

0xcdf8,	// (0x000a7344) field_cale_ev_pane_g3_ParamLimits

0xcdf8,	// (0x000a7344) field_cale_ev_pane_g3

0x0002,

0x033d,	// (0x0009a889) field_cale_ev_pane_g_ParamLimits

0x033d,	// (0x0009a889) field_cale_ev_pane_g

0xce10,	// (0x000a735c) field_cale_ev_pane_t1_ParamLimits

0xce10,	// (0x000a735c) field_cale_ev_pane_t1

0xa9ae,	// (0x000a4efa) field_cale_ev_content_pane_t1_ParamLimits

0xa9ae,	// (0x000a4efa) field_cale_ev_content_pane_t1

0xb638,	// (0x000a5b84) bg_button_pane_cp01

0x1531,	// (0x0009ba7d) listscroll_cale_week_pane_ParamLimits

0xa9cc,	// (0x000a4f18) popup_toolbar_window_cp01

0xa9f2,	// (0x000a4f3e) listscroll_cale_week_pane_t1_ParamLimits

0x1531,	// (0x0009ba7d) listscroll_cale_day_pane_ParamLimits

0xa9cc,	// (0x000a4f18) popup_toolbar_window_cp02

0xae14,	// (0x000a5360) listscroll_cale_day_pane_t1_ParamLimits

0x1531,	// (0x0009ba7d) main_cale_month_pane_ParamLimits

0x4280,	// (0x0009e7cc) popup_toolbar_window_cp03_ParamLimits

0x4280,	// (0x0009e7cc) popup_toolbar_window_cp03

0x3baa,	// (0x0009e0f6) main_image_pane_g2_ParamLimits

0x3baa,	// (0x0009e0f6) main_image_pane_g2

0x3bb6,	// (0x0009e102) main_image_pane_g3_ParamLimits

0x3bb6,	// (0x0009e102) main_image_pane_g3

0x0002,

0xf4c2,	// (0x000a9a0e) main_image_pane_g_ParamLimits

0xf4c2,	// (0x000a9a0e) main_image_pane_g

0xb752,	// (0x000a5c9e) main_image_pane_t1_ParamLimits

0x3bc2,	// (0x0009e10e) main_image_pane_t2_ParamLimits

0x3bc2,	// (0x0009e10e) main_image_pane_t2

0x3bd4,	// (0x0009e120) main_image_pane_t3_ParamLimits

0x3bd4,	// (0x0009e120) main_image_pane_t3

0x3be6,	// (0x0009e132) main_image_pane_t4_ParamLimits

0x3be6,	// (0x0009e132) main_image_pane_t4

0x0003,

0xf4c9,	// (0x000a9a15) main_image_pane_t_ParamLimits

0xf4c9,	// (0x000a9a15) main_image_pane_t

0x3bf8,	// (0x0009e144) popup_image_details_window_cp01

0x3c02,	// (0x0009e14e) popup_toobar_trans_pane_cp01_ParamLimits

0x3c02,	// (0x0009e14e) popup_toobar_trans_pane_cp01

0x41d0,	// (0x0009e71c) popup_image_details_window_ParamLimits

0x41d0,	// (0x0009e71c) popup_image_details_window

0x41de,	// (0x0009e72a) popup_image_focus_window

0x4523,	// (0x0009ea6f) camera2_autofocus_pane_ParamLimits

0x4523,	// (0x0009ea6f) camera2_autofocus_pane

0x9be6,	// (0x000a4132) bg_popup_sub_pane_cp06

0xce27,	// (0x000a7373) popup_image_focus_window_g1

0xce2f,	// (0x000a737b) popup_image_focus_window_g2

0xce37,	// (0x000a7383) popup_image_focus_window_g3

0xce3f,	// (0x000a738b) popup_image_focus_window_g4

0x0003,

0x0344,	// (0x0009a890) popup_image_focus_window_g

0xce47,	// (0x000a7393) popup_image_focus_window_t1

0xce55,	// (0x000a73a1) popup_image_focus_window_t2

0xce65,	// (0x000a73b1) popup_image_focus_window_t3

0x0002,

0x034d,	// (0x0009a899) popup_image_focus_window_t

0xce73,	// (0x000a73bf) camera2_autofocus_pane_g1

0xa57e,	// (0x000a4aca) bg_tb_trans_pane_cp01

0xce81,	// (0x000a73cd) popup_image_details_window_g1

0xce94,	// (0x000a73e0) popup_image_details_window_g2

0x0002,

0x035f,	// (0x0009a8ab) popup_image_details_window_g

0xcebd,	// (0x000a7409) popup_image_details_window_t1

0xcecf,	// (0x000a741b) popup_image_details_window_t2

0xcee8,	// (0x000a7434) popup_image_details_window_t3

0xcefc,	// (0x000a7448) popup_image_details_window_t4

0xcf17,	// (0x000a7463) popup_image_details_window_t5

0x0004,

0x0366,	// (0x0009a8b2) popup_image_details_window_t

0xa87c,	// (0x000a4dc8) bg_calc_paper_pane_ParamLimits

0x0f50,	// (0x0009b49c) grid_highlight_pane_cp013

0x12b8,	// (0x0009b804) list_calc_pane_ParamLimits

0x12ca,	// (0x0009b816) scroll_pane_cp024

0xa890,	// (0x000a4ddc) bg_calc_display_pane_ParamLimits

0x12d2,	// (0x0009b81e) calc_display_pane_t1_ParamLimits

0x12e7,	// (0x0009b833) calc_display_pane_t2_ParamLimits

0x12fc,	// (0x0009b848) calc_display_pane_t3_ParamLimits

0xf136,	// (0x000a9682) calc_display_pane_t_ParamLimits

0x13d6,	// (0x0009b922) cell_calc_pane_g2

0x0001,

0xf153,	// (0x000a969f) cell_calc_pane_g

0x13df,	// (0x0009b92b) cell_calc_pane_t1

0xa8ef,	// (0x000a4e3b) grid_highlight_pane_cp02_ParamLimits

0xa905,	// (0x000a4e51) toolbar_button_pane_cp01_ParamLimits

0xa905,	// (0x000a4e51) toolbar_button_pane_cp01

0xb797,	// (0x000a5ce3) temp_image_control_pane_ParamLimits

0xb797,	// (0x000a5ce3) temp_image_control_pane

0x414c,	// (0x0009e698) main_mp3_pane

0xcf31,	// (0x000a747d) temp_image_control_pane_g1_ParamLimits

0xcf31,	// (0x000a747d) temp_image_control_pane_g1

0xcf3f,	// (0x000a748b) temp_image_control_pane_g2_ParamLimits

0xcf3f,	// (0x000a748b) temp_image_control_pane_g2

0xcf51,	// (0x000a749d) temp_image_control_pane_g3_ParamLimits

0xcf51,	// (0x000a749d) temp_image_control_pane_g3

0x4b78,	// (0x0009f0c4) temp_image_control_pane_g4_ParamLimits

0x4b78,	// (0x0009f0c4) temp_image_control_pane_g4

0x0003,

0xf5e5,	// (0x000a9b31) temp_image_control_pane_g_ParamLimits

0xf5e5,	// (0x000a9b31) temp_image_control_pane_g

0xcf31,	// (0x000a747d) main_mp3_pane_g1

0x4b89,	// (0x0009f0d5) main_mp3_pane_g2

0x0007,

0xf5ee,	// (0x000a9b3a) main_mp3_pane_g

0xcf94,	// (0x000a74e0) main_mp3_pane_t1

0xaa84,	// (0x000a4fd0) main_camera_pane_g8_ParamLimits

0xaa84,	// (0x000a4fd0) main_camera_pane_g8

0x1bd5,	// (0x0009c121) main_video_pane_g7_ParamLimits

0x1bd5,	// (0x0009c121) main_video_pane_g7

0x466b,	// (0x0009ebb7) main_camera2_pane_t7_ParamLimits

0x466b,	// (0x0009ebb7) main_camera2_pane_t7

0xabcc,	// (0x000a5118) scroll_pane_cp025_ParamLimits

0xabcc,	// (0x000a5118) scroll_pane_cp025

0xabe0,	// (0x000a512c) scroll_pane_cp026_ParamLimits

0xabe0,	// (0x000a512c) scroll_pane_cp026

0xabef,	// (0x000a513b) wml_content_pane_ParamLimits

0x0f50,	// (0x0009b49c) main_touch_calib_pane

0x4c2d,	// (0x0009f179) main_touch_calib_pane_g1

0x4c39,	// (0x0009f185) main_touch_calib_pane_g2

0x4c45,	// (0x0009f191) main_touch_calib_pane_g3

0x4c51,	// (0x0009f19d) main_touch_calib_pane_g4

0x0003,

0xf60c,	// (0x000a9b58) main_touch_calib_pane_g

0x4c5d,	// (0x0009f1a9) main_touch_calib_pane_t1

0x4c76,	// (0x0009f1c2) main_touch_calib_pane_t2

0x0004,

0xf615,	// (0x000a9b61) main_touch_calib_pane_t

0xb372,	// (0x000a58be) mup_progress_pane_cp02

0xb3a7,	// (0x000a58f3) navi_pane_g1

0xb462,	// (0x000a59ae) navi_pane_mp_t3

0x414c,	// (0x0009e698) main_mp3_pane_ParamLimits

0x42bd,	// (0x0009e809) navi_pane_ParamLimits

0xcf31,	// (0x000a747d) main_mp3_pane_g1_ParamLimits

0x4b89,	// (0x0009f0d5) main_mp3_pane_g2_ParamLimits

0x4b95,	// (0x0009f0e1) main_mp3_pane_g3_ParamLimits

0x4b95,	// (0x0009f0e1) main_mp3_pane_g3

0x4ba1,	// (0x0009f0ed) main_mp3_pane_g4_ParamLimits

0x4ba1,	// (0x0009f0ed) main_mp3_pane_g4

0xcf61,	// (0x000a74ad) main_mp3_pane_g5_ParamLimits

0xcf61,	// (0x000a74ad) main_mp3_pane_g5

0xcf6f,	// (0x000a74bb) main_mp3_pane_g6_ParamLimits

0xcf6f,	// (0x000a74bb) main_mp3_pane_g6

0xcf7c,	// (0x000a74c8) main_mp3_pane_g7_ParamLimits

0xcf7c,	// (0x000a74c8) main_mp3_pane_g7

0xcf88,	// (0x000a74d4) main_mp3_pane_g8_ParamLimits

0xcf88,	// (0x000a74d4) main_mp3_pane_g8

0xf5ee,	// (0x000a9b3a) main_mp3_pane_g_ParamLimits

0x4bad,	// (0x0009f0f9) main_mp3_pane_t2

0x4bbd,	// (0x0009f109) main_mp3_pane_t3

0xcfa2,	// (0x000a74ee) main_mp3_pane_t4

0xcfb0,	// (0x000a74fc) main_mp3_pane_t5

0x0005,

0xf5ff,	// (0x000a9b4b) main_mp3_pane_t

0xcfbe,	// (0x000a750a) mup_progress_pane_cp01

0x0ccd,	// (0x0009b219) aid_zoom_text_secondary2

0xcd96,	// (0x000a72e2) list_cale_ev2_pane

0xcd9e,	// (0x000a72ea) scroll_pane_cp023_ParamLimits

0x4cd1,	// (0x0009f21d) field_cale_ev2_pane_ParamLimits

0x4cd1,	// (0x0009f21d) field_cale_ev2_pane

0x9fd7,	// (0x000a4523) field_cale_ev2_pane_g1_ParamLimits

0x9fd7,	// (0x000a4523) field_cale_ev2_pane_g1

0x9fe3,	// (0x000a452f) field_cale_ev2_pane_g2_ParamLimits

0x9fe3,	// (0x000a452f) field_cale_ev2_pane_g2

0x9ffb,	// (0x000a4547) field_cale_ev2_pane_g3_ParamLimits

0x9ffb,	// (0x000a4547) field_cale_ev2_pane_g3

0x0003,

0xf620,	// (0x000a9b6c) field_cale_ev2_pane_g_ParamLimits

0xf620,	// (0x000a9b6c) field_cale_ev2_pane_g

0xa01f,	// (0x000a456b) field_cale_ev2_pane_t1_ParamLimits

0xa01f,	// (0x000a456b) field_cale_ev2_pane_t1

0xa036,	// (0x000a4582) field_cale_ev2_pane_t2_ParamLimits

0xa036,	// (0x000a4582) field_cale_ev2_pane_t2

0x0001,

0xf629,	// (0x000a9b75) field_cale_ev2_pane_t_ParamLimits

0xf629,	// (0x000a9b75) field_cale_ev2_pane_t

0x3a8b,	// (0x0009dfd7) main_postcard_pane_g5_ParamLimits

0x3a8b,	// (0x0009dfd7) main_postcard_pane_g5

0x3a99,	// (0x0009dfe5) main_postcard_pane_g6_ParamLimits

0x3a99,	// (0x0009dfe5) main_postcard_pane_g6

0x1a1f,	// (0x0009bf6b) camera2_autofocus_pane_cp_ParamLimits

0x1a1f,	// (0x0009bf6b) camera2_autofocus_pane_cp

0x414c,	// (0x0009e698) main_mup3_pane

0x4d3a,	// (0x0009f286) main_mup3_pane_g1_ParamLimits

0x4d3a,	// (0x0009f286) main_mup3_pane_g1

0x4d5b,	// (0x0009f2a7) main_mup3_pane_g2_ParamLimits

0x4d5b,	// (0x0009f2a7) main_mup3_pane_g2

0x4dd5,	// (0x0009f321) main_mup3_pane_g3_ParamLimits

0x4dd5,	// (0x0009f321) main_mup3_pane_g3

0x4e18,	// (0x0009f364) main_mup3_pane_g4_ParamLimits

0x4e18,	// (0x0009f364) main_mup3_pane_g4

0x4e5b,	// (0x0009f3a7) main_mup3_pane_g5_ParamLimits

0x4e5b,	// (0x0009f3a7) main_mup3_pane_g5

0x4e9e,	// (0x0009f3ea) main_mup3_pane_g6_ParamLimits

0x4e9e,	// (0x0009f3ea) main_mup3_pane_g6

0xcfc6,	// (0x000a7512) main_mup3_pane_g7_ParamLimits

0xcfc6,	// (0x000a7512) main_mup3_pane_g7

0x0007,

0xf639,	// (0x000a9b85) main_mup3_pane_g_ParamLimits

0xf639,	// (0x000a9b85) main_mup3_pane_g

0x4f14,	// (0x0009f460) main_mup3_pane_t1_ParamLimits

0x4f14,	// (0x0009f460) main_mup3_pane_t1

0x4f83,	// (0x0009f4cf) main_mup3_pane_t2_ParamLimits

0x4f83,	// (0x0009f4cf) main_mup3_pane_t2

0x504c,	// (0x0009f598) main_mup3_pane_t4_ParamLimits

0x504c,	// (0x0009f598) main_mup3_pane_t4

0x509a,	// (0x0009f5e6) main_mup3_pane_t5_ParamLimits

0x509a,	// (0x0009f5e6) main_mup3_pane_t5

0x514a,	// (0x0009f696) main_mup3_pane_t6_ParamLimits

0x514a,	// (0x0009f696) main_mup3_pane_t6

0x0005,

0xf64a,	// (0x000a9b96) main_mup3_pane_t_ParamLimits

0xf64a,	// (0x000a9b96) main_mup3_pane_t

0x51f6,	// (0x0009f742) mup3_progress_pane_ParamLimits

0x51f6,	// (0x0009f742) mup3_progress_pane

0x526a,	// (0x0009f7b6) popup_mup3_control_window_ParamLimits

0x526a,	// (0x0009f7b6) popup_mup3_control_window

0xcfd4,	// (0x000a7520) popup_mup3_text_window

0x5283,	// (0x0009f7cf) mup3_progress_pane_t1

0x52a2,	// (0x0009f7ee) mup3_progress_pane_t2

0xcfdc,	// (0x000a7528) mup3_progress_pane_t3

0x0002,

0xf657,	// (0x000a9ba3) mup3_progress_pane_t

0xcff9,	// (0x000a7545) mup_progress_pane_cp03

0x9be6,	// (0x000a4132) bg_tb_trans_pane_cp04

0x52c1,	// (0x0009f80d) mup3_volume_pane

0x52c9,	// (0x0009f815) popup_mup3_control_window_g1

0x52d2,	// (0x0009f81e) mup3_volume_pane_g1

0x52db,	// (0x0009f827) mup3_volume_pane_g2

0x52e4,	// (0x0009f830) mup3_volume_pane_g3

0x0002,

0xf65e,	// (0x000a9baa) mup3_volume_pane_g

0x9be6,	// (0x000a4132) bg_tb_trans_pane_cp03

0xd009,	// (0x000a7555) popup_mup3_text_window_g1

0xd011,	// (0x000a755d) popup_mup3_text_window_t1

0xa8d8,	// (0x000a4e24) list_calc_item_pane_g1_ParamLimits

0xca6f,	// (0x000a6fbb) mup_volume_pane_cp_g1

0x4c8f,	// (0x0009f1db) main_touch_calib_pane_t3

0x4ca5,	// (0x0009f1f1) main_touch_calib_pane_t4

0x4cbb,	// (0x0009f207) main_touch_calib_pane_t5

0x0c85,	// (0x0009b1d1) aid_cell_size_toolbar2

0x0c8d,	// (0x0009b1d9) aid_popup3_width_pane

0x0b95,	// (0x0009b0e1) aid_zoom_text_msg_primary

0x19f4,	// (0x0009bf40) vorec_t7

0xa89c,	// (0x000a4de8) bg_calc_paper_pane_g1_ParamLimits

0xa8a8,	// (0x000a4df4) bg_calc_paper_pane_g2_ParamLimits

0xa8b4,	// (0x000a4e00) bg_calc_paper_pane_g3_ParamLimits

0xa8c0,	// (0x000a4e0c) bg_calc_paper_pane_g4_ParamLimits

0xa8cc,	// (0x000a4e18) bg_calc_paper_pane_g5_ParamLimits

0x133b,	// (0x0009b887) bg_calc_paper_pane_g6_ParamLimits

0x134c,	// (0x0009b898) bg_calc_paper_pane_g7_ParamLimits

0x135d,	// (0x0009b8a9) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x000a9689) bg_calc_paper_pane_g_ParamLimits

0x136e,	// (0x0009b8ba) calc_bg_paper_pane_g9_ParamLimits

0x1b06,	// (0x0009c052) image_qvga_pane_ParamLimits

0x1b06,	// (0x0009c052) image_qvga_pane

0xa7bf,	// (0x000a4d0b) bg_popup_sub_pane_cp04_ParamLimits

0xb6ce,	// (0x000a5c1a) popup_mup_playback_window_g1_ParamLimits

0xb6da,	// (0x000a5c26) popup_mup_playback_window_t1_ParamLimits

0xb6ef,	// (0x000a5c3b) popup_mup_playback_window_t2_ParamLimits

0x0116,	// (0x0009a662) popup_mup_playback_window_t_ParamLimits

0x479a,	// (0x0009ece6) main_mup2_pane_g3_ParamLimits

0x479a,	// (0x0009ece6) main_mup2_pane_g3

0x1eb5,	// (0x0009c401) popup_toolbar_window_cp04

0xbae4,	// (0x000a6030) popup_call2_audio_second_window_g3_ParamLimits

0xbae4,	// (0x000a6030) popup_call2_audio_second_window_g3

0xbeee,	// (0x000a643a) popup_call2_audio_first_window_g4_ParamLimits

0xbeee,	// (0x000a643a) popup_call2_audio_first_window_g4

0xc56d,	// (0x000a6ab9) popup_call2_audio_in_window_g4_ParamLimits

0xc56d,	// (0x000a6ab9) popup_call2_audio_in_window_g4

0x3b9d,	// (0x0009e0e9) aid_area_sk_bg_cut_ParamLimits

0x3b9d,	// (0x0009e0e9) aid_area_sk_bg_cut

0xb704,	// (0x000a5c50) aid_area_sk_bg_cut_2_ParamLimits

0xb704,	// (0x000a5c50) aid_area_sk_bg_cut_2

0x4b1e,	// (0x0009f06a) aid_placing_details_win

0x4b26,	// (0x0009f072) aid_placing_details_win_2

0xce73,	// (0x000a73bf) camera2_autofocus_pane_g1_ParamLimits

0x0edc,	// (0x0009b428) popup_fixed_preview_cale_window_ParamLimits

0x0edc,	// (0x0009b428) popup_fixed_preview_cale_window

0xb4e0,	// (0x000a5a2c) navi_slider_pane_g3

0xb4e9,	// (0x000a5a35) navi_slider_pane_g4

0xb4f2,	// (0x000a5a3e) navi_slider_pane_g5

0xb4e0,	// (0x000a5a2c) navi_slider_pane_g6

0x3480,	// (0x0009d9cc) navi_slider_pane_g7

0xb605,	// (0x000a5b51) mup_scale_pane_g3

0xb60e,	// (0x000a5b5a) mup_scale_pane_g4

0xb617,	// (0x000a5b63) mup_scale_pane_g5

0x38af,	// (0x0009ddfb) mup_scale_pane_g6

0x38b8,	// (0x0009de04) mup_scale_pane_g7

0xb4e0,	// (0x000a5a2c) cams2_slider_pane_g3

0xcaf1,	// (0x000a703d) cams2_slider_pane_g4

0x4a76,	// (0x0009efc2) cams2_slider_pane_g5

0xb4e0,	// (0x000a5a2c) cams2_slider_pane_g6

0x4a7e,	// (0x0009efca) cams2_slider_pane_g7

0xcd1c,	// (0x000a7268) camera2_autofocus_pane_cp_g1

0xc908,	// (0x000a6e54) bg_popup_preview_window_pane_cp02_ParamLimits

0xc908,	// (0x000a6e54) bg_popup_preview_window_pane_cp02

0xd01f,	// (0x000a756b) list_fp_cale_pane_ParamLimits

0xd01f,	// (0x000a756b) list_fp_cale_pane

0xd02b,	// (0x000a7577) popup_fixed_preview_cale_window_t1_ParamLimits

0xd02b,	// (0x000a7577) popup_fixed_preview_cale_window_t1

0x52ed,	// (0x0009f839) popup_fixed_preview_cale_window_t2_ParamLimits

0x52ed,	// (0x0009f839) popup_fixed_preview_cale_window_t2

0x5302,	// (0x0009f84e) popup_fixed_preview_cale_window_t3_ParamLimits

0x5302,	// (0x0009f84e) popup_fixed_preview_cale_window_t3

0x0002,

0xf665,	// (0x000a9bb1) popup_fixed_preview_cale_window_t_ParamLimits

0xf665,	// (0x000a9bb1) popup_fixed_preview_cale_window_t

0x5317,	// (0x0009f863) list_single_fp_cale_pane_ParamLimits

0x5317,	// (0x0009f863) list_single_fp_cale_pane

0xd049,	// (0x000a7595) list_single_fp_cale_pane_g1_ParamLimits

0xd049,	// (0x000a7595) list_single_fp_cale_pane_g1

0xd055,	// (0x000a75a1) list_single_fp_cale_pane_g2_ParamLimits

0xd055,	// (0x000a75a1) list_single_fp_cale_pane_g2

0x0002,

0x03f8,	// (0x0009a944) list_single_fp_cale_pane_g_ParamLimits

0x03f8,	// (0x0009a944) list_single_fp_cale_pane_g

0xd06e,	// (0x000a75ba) list_single_fp_cale_pane_t1_ParamLimits

0xd06e,	// (0x000a75ba) list_single_fp_cale_pane_t1

0xd080,	// (0x000a75cc) list_single_fp_cale_pane_t2_ParamLimits

0xd080,	// (0x000a75cc) list_single_fp_cale_pane_t2

0x0001,

0x03ff,	// (0x0009a94b) list_single_fp_cale_pane_t_ParamLimits

0x03ff,	// (0x0009a94b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0f50,	// (0x0009b49c) main_dialer_pane

0x532a,	// (0x0009f876) aid_cell_size_keypad

0x5334,	// (0x0009f880) dialer_ne_pane

0x533e,	// (0x0009f88a) grid_dialer_command_1_pane

0x5346,	// (0x0009f892) grid_dialer_command_2_pane

0x534e,	// (0x0009f89a) grid_dialer_keypad_pane

0x5362,	// (0x0009f8ae) bg_popup_call_pane_cp06_ParamLimits

0x5362,	// (0x0009f8ae) bg_popup_call_pane_cp06

0x536e,	// (0x0009f8ba) dialer_ne_clear_pane_ParamLimits

0x536e,	// (0x0009f8ba) dialer_ne_clear_pane

0xd0b3,	// (0x000a75ff) dialer_ne_pane_g1

0xd0bb,	// (0x000a7607) dialer_ne_pane_t1_ParamLimits

0xd0bb,	// (0x000a7607) dialer_ne_pane_t1

0x537a,	// (0x0009f8c6) dialer_ne_pane_t2_ParamLimits

0x537a,	// (0x0009f8c6) dialer_ne_pane_t2

0x5397,	// (0x0009f8e3) dialer_ne_pane_t3_ParamLimits

0x5397,	// (0x0009f8e3) dialer_ne_pane_t3

0x0002,

0xf66c,	// (0x000a9bb8) dialer_ne_pane_t_ParamLimits

0xf66c,	// (0x000a9bb8) dialer_ne_pane_t

0x53bb,	// (0x0009f907) dialer_ne_pane_t3_copy1_ParamLimits

0x53bb,	// (0x0009f907) dialer_ne_pane_t3_copy1

0x53df,	// (0x0009f92b) cell_dialer_keypad_pane_ParamLimits

0x53df,	// (0x0009f92b) cell_dialer_keypad_pane

0x53f6,	// (0x0009f942) cell_dialer_command_1_pane_ParamLimits

0x53f6,	// (0x0009f942) cell_dialer_command_1_pane

0x540c,	// (0x0009f958) cell_dialer_command_2_pane_ParamLimits

0x540c,	// (0x0009f958) cell_dialer_command_2_pane

0xd0cd,	// (0x000a7619) bg_button_pane_cp02_ParamLimits

0xd0cd,	// (0x000a7619) bg_button_pane_cp02

0x541b,	// (0x0009f967) cell_dialer_keypad_pane_g1_ParamLimits

0x541b,	// (0x0009f967) cell_dialer_keypad_pane_g1

0xd0cd,	// (0x000a7619) bg_button_pane_cp03_ParamLimits

0xd0cd,	// (0x000a7619) bg_button_pane_cp03

0x5430,	// (0x0009f97c) cell_dialer_command_1_pane_g1_ParamLimits

0x5430,	// (0x0009f97c) cell_dialer_command_1_pane_g1

0xd0d9,	// (0x000a7625) bg_button_pane_cp04

0x5444,	// (0x0009f990) cell_dialer_command_2_pane_g1

0xaa7c,	// (0x000a4fc8) bg_button_pane_cp06

0xd0e1,	// (0x000a762d) dialer_ne_clear_pane_g1

0xb3b3,	// (0x000a58ff) navi_pane_g2

0xb3e1,	// (0x000a592d) navi_pane_g3

0x0002,

0xf3ca,	// (0x000a9916) navi_pane_g

0xb470,	// (0x000a59bc) navi_pane_mv_g2

0xb497,	// (0x000a59e3) navi_pane_mv_g5

0x344b,	// (0x0009d997) navi_pane_mv_t1

0xa890,	// (0x000a4ddc) main_clock2_pane

0xea90,	// (0x000a8fdc) main_clock2_list_pane_ParamLimits

0xea90,	// (0x000a8fdc) main_clock2_list_pane

0x54a0,	// (0x0009f9ec) main_clock2_pane_t1_ParamLimits

0x54a0,	// (0x0009f9ec) main_clock2_pane_t1

0x54ce,	// (0x0009fa1a) main_clock2_pane_t2_ParamLimits

0x54ce,	// (0x0009fa1a) main_clock2_pane_t2

0x0004,

0xf673,	// (0x000a9bbf) main_clock2_pane_t_ParamLimits

0xf673,	// (0x000a9bbf) main_clock2_pane_t

0x5533,	// (0x0009fa7f) popup_clock_analogue_window_cp03_ParamLimits

0x5533,	// (0x0009fa7f) popup_clock_analogue_window_cp03

0x5551,	// (0x0009fa9d) popup_clock_digital_window_cp02_ParamLimits

0x5551,	// (0x0009fa9d) popup_clock_digital_window_cp02

0x55c6,	// (0x0009fb12) main_clock2_list_single_pane_ParamLimits

0x55c6,	// (0x0009fb12) main_clock2_list_single_pane

0xaa7c,	// (0x000a4fc8) list_highlight_pane_cp05

0xd11b,	// (0x000a7667) main_clock2_list_single_pane_t1

0x1eb5,	// (0x0009c401) popup_toolbar_window_cp04_ParamLimits

0x4b48,	// (0x0009f094) camera2_autofocus_pane_g2_ParamLimits

0x4b48,	// (0x0009f094) camera2_autofocus_pane_g2

0x4b54,	// (0x0009f0a0) camera2_autofocus_pane_g3_ParamLimits

0x4b54,	// (0x0009f0a0) camera2_autofocus_pane_g3

0x4b60,	// (0x0009f0ac) camera2_autofocus_pane_g4_ParamLimits

0x4b60,	// (0x0009f0ac) camera2_autofocus_pane_g4

0x4b6c,	// (0x0009f0b8) camera2_autofocus_pane_g5_ParamLimits

0x4b6c,	// (0x0009f0b8) camera2_autofocus_pane_g5

0x0004,

0xf5da,	// (0x000a9b26) camera2_autofocus_pane_g_ParamLimits

0xf5da,	// (0x000a9b26) camera2_autofocus_pane_g

0x4cfb,	// (0x0009f247) camera2_autofocus_pane_cp_g2

0x4d03,	// (0x0009f24f) camera2_autofocus_pane_cp_g3

0x4d0b,	// (0x0009f257) camera2_autofocus_pane_cp_g4

0x4d13,	// (0x0009f25f) camera2_autofocus_pane_cp_g5

0x0004,

0xf62e,	// (0x000a9b7a) camera2_autofocus_pane_cp_g

0x535a,	// (0x0009f8a6) popup_dialer_spcha_window

0x9be6,	// (0x000a4132) bg_popup_sub_pane_cp07

0xd129,	// (0x000a7675) list_spcha_pane

0xd131,	// (0x000a767d) list_single_spcha_pane_ParamLimits

0xd131,	// (0x000a767d) list_single_spcha_pane

0x9be6,	// (0x000a4132) list_highlight_pane_cp06

0xd142,	// (0x000a768e) list_single_spcha_pane_t1

0xc317,	// (0x000a6863) popup_call2_audio_out_window_g4_ParamLimits

0xc317,	// (0x000a6863) popup_call2_audio_out_window_g4

0x0f50,	// (0x0009b49c) main_imed2_pane

0x41e6,	// (0x0009e732) popup_imed_adjust2_window

0x41f9,	// (0x0009e745) popup_imed_trans_window_ParamLimits

0x41f9,	// (0x0009e745) popup_imed_trans_window

0xcb5a,	// (0x000a70a6) popup_blid_sat_info2_window_t1

0xcb68,	// (0x000a70b4) popup_blid_sat_info2_window_t2

0x000a,

0x02e9,	// (0x0009a835) popup_blid_sat_info2_window_t

0x567b,	// (0x0009fbc7) aid_size_cell_colour_35

0x5695,	// (0x0009fbe1) aid_size_cell_colour_112

0x56ac,	// (0x0009fbf8) aid_size_cell_effect

0xa57e,	// (0x000a4aca) bg_tb_trans_pane_cp02

0xafeb,	// (0x000a5537) heading_imed_pane

0x56c6,	// (0x0009fc12) listscroll_imed_pane

0xd150,	// (0x000a769c) heading_imed_pane_g1

0xd158,	// (0x000a76a4) heading_imed_pane_t1

0xd166,	// (0x000a76b2) grid_imed_colour_35_pane_ParamLimits

0xd166,	// (0x000a76b2) grid_imed_colour_35_pane

0x56d2,	// (0x0009fc1e) grid_imed_effect_pane

0xd17e,	// (0x000a76ca) list_imed_aspect_pane

0x56e2,	// (0x0009fc2e) scroll_pane_cp027_ParamLimits

0x56e2,	// (0x0009fc2e) scroll_pane_cp027

0x56ee,	// (0x0009fc3a) cell_imed_effect_pane_ParamLimits

0x56ee,	// (0x0009fc3a) cell_imed_effect_pane

0xd186,	// (0x000a76d2) cell_imed_colour_pane_ParamLimits

0xd186,	// (0x000a76d2) cell_imed_colour_pane

0xd1c8,	// (0x000a7714) cell_imed_colour_pane_g1_ParamLimits

0xd1c8,	// (0x000a7714) cell_imed_colour_pane_g1

0xd1d9,	// (0x000a7725) hgihlgiht_grid_pane_cp016_ParamLimits

0xd1d9,	// (0x000a7725) hgihlgiht_grid_pane_cp016

0x5706,	// (0x0009fc52) cell_imed_effect_pane_g1

0x570e,	// (0x0009fc5a) grid_highlight_pane_cp017

0xd1ea,	// (0x000a7736) list_imed_single_pane_ParamLimits

0xd1ea,	// (0x000a7736) list_imed_single_pane

0x9be6,	// (0x000a4132) list_highlight_pane_cp07

0xd1ff,	// (0x000a774b) list_imed_aspect_pane_comp1_t1

0xc914,	// (0x000a6e60) bg_tb_trans_pane_cp05

0xd221,	// (0x000a776d) popup_imed_adjust2_window_g1

0xd248,	// (0x000a7794) popup_imed_adjust2_window_t1

0xd260,	// (0x000a77ac) slider_imed_adjust_pane

0xd274,	// (0x000a77c0) slider_imed_adjust_pane_g1

0xd284,	// (0x000a77d0) slider_imed_adjust_pane_g2

0xd294,	// (0x000a77e0) slider_imed_adjust_pane_g3

0xd2a5,	// (0x000a77f1) slider_imed_adjust_pane_g4

0x0003,

0x042d,	// (0x0009a979) slider_imed_adjust_pane_g

0x5717,	// (0x0009fc63) aid_size_cell_clipart2

0x5723,	// (0x0009fc6f) grid_imed_clipart_pane

0xd2b6,	// (0x000a7802) scroll_pane_cp031

0x572d,	// (0x0009fc79) cell_imed_clipart_pane_ParamLimits

0x572d,	// (0x0009fc79) cell_imed_clipart_pane

0x5750,	// (0x0009fc9c) cell_imed_clipart_pane_g1

0x9be6,	// (0x000a4132) grid_highlight_pane_cp014

0x5482,	// (0x0009f9ce) main_clock2_pane_g1_ParamLimits

0x5482,	// (0x0009f9ce) main_clock2_pane_g1

0x556d,	// (0x0009fab9) aid_call2_pane_cp10

0x557f,	// (0x0009facb) aid_call_pane_cp10

0xb312,	// (0x000a585e) popup_clock_analogue_window_cp10_g1

0xb312,	// (0x000a585e) popup_clock_analogue_window_cp10_g2

0x5591,	// (0x0009fadd) popup_clock_analogue_window_cp10_g3

0x5591,	// (0x0009fadd) popup_clock_analogue_window_cp10_g4

0xb312,	// (0x000a585e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf67e,	// (0x000a9bca) popup_clock_analogue_window_cp10_g

0x55a7,	// (0x0009faf3) popup_clock_analogue_window_cp10_t1

0x55d8,	// (0x0009fb24) clock_digital_number_pane_cp10_ParamLimits

0x55d8,	// (0x0009fb24) clock_digital_number_pane_cp10

0x55f2,	// (0x0009fb3e) clock_digital_number_pane_cp11_ParamLimits

0x55f2,	// (0x0009fb3e) clock_digital_number_pane_cp11

0x560c,	// (0x0009fb58) clock_digital_number_pane_cp12_ParamLimits

0x560c,	// (0x0009fb58) clock_digital_number_pane_cp12

0x5626,	// (0x0009fb72) clock_digital_number_pane_cp13_ParamLimits

0x5626,	// (0x0009fb72) clock_digital_number_pane_cp13

0x5640,	// (0x0009fb8c) clock_digital_separator_pane_cp10_ParamLimits

0x5640,	// (0x0009fb8c) clock_digital_separator_pane_cp10

0x565a,	// (0x0009fba6) popup_clock_digital_window_cp02_t1_ParamLimits

0x565a,	// (0x0009fba6) popup_clock_digital_window_cp02_t1

0xa7b7,	// (0x000a4d03) clock_digital_number_pane_cp10_g1

0xa7b7,	// (0x000a4d03) clock_digital_number_pane_cp10_g2

0x0001,

0xf689,	// (0x000a9bd5) clock_digital_number_pane_cp10_g

0xa7b7,	// (0x000a4d03) clock_digital_separator_pane_cp10_g1

0xa7b7,	// (0x000a4d03) clock_digital_separator_pane_g2_cp10

0xb49f,	// (0x000a59eb) navi_pane_vded_g4

0xb4a8,	// (0x000a59f4) navi_pane_vded_g5

0xb4b1,	// (0x000a59fd) navi_pane_vded_t1

0x0f50,	// (0x0009b49c) main_vded_pane

0x5759,	// (0x0009fca5) main_vded_pane_g1

0x5765,	// (0x0009fcb1) main_vded_pane_g2

0x576f,	// (0x0009fcbb) main_vded_pane_g3

0x0002,

0xf68e,	// (0x000a9bda) main_vded_pane_g

0x5779,	// (0x0009fcc5) main_vded_pane_t1

0x5787,	// (0x0009fcd3) main_vded_pane_t2

0x0001,

0xf695,	// (0x000a9be1) main_vded_pane_t

0x5795,	// (0x0009fce1) vded_slider_pane

0x579f,	// (0x0009fceb) vded_video_pane

0xd2be,	// (0x000a780a) vded_video_pane_g1

0x57a9,	// (0x0009fcf5) vded_video_pane_g2

0xcd1c,	// (0x000a7268) vded_video_pane_g3

0x0002,

0xf69a,	// (0x000a9be6) vded_video_pane_g

0xd2c8,	// (0x000a7814) vded_slider_pane_g1

0xca6f,	// (0x000a6fbb) vded_slider_pane_g2

0xd2d1,	// (0x000a781d) vded_slider_pane_g3

0xd2da,	// (0x000a7826) vded_slider_pane_g4

0xd2e3,	// (0x000a782f) vded_slider_pane_g5

0x0004,

0x044e,	// (0x0009a99a) vded_slider_pane_g

0x525c,	// (0x0009f7a8) mup3_rocker_pane_ParamLimits

0x525c,	// (0x0009f7a8) mup3_rocker_pane

0x57b2,	// (0x0009fcfe) mup3_control_keys_pane_g1

0x57ba,	// (0x0009fd06) mup3_control_keys_pane_g2

0x57c2,	// (0x0009fd0e) mup3_control_keys_pane_g3

0x57ca,	// (0x0009fd16) mup3_control_keys_pane_g4

0x0003,

0xf6a1,	// (0x000a9bed) mup3_control_keys_pane_g

0x0f04,	// (0x0009b450) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0f04,	// (0x0009b450) popup_toolbar2_fixed_window_cp01

0x5276,	// (0x0009f7c2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5276,	// (0x0009f7c2) popup_toolbar2_fixed_window_cp02

0xbc56,	// (0x000a61a2) popup_call2_audio_second_window_t4_ParamLimits

0xbc56,	// (0x000a61a2) popup_call2_audio_second_window_t4

0xc184,	// (0x000a66d0) popup_call2_audio_first_window_t6_ParamLimits

0xc184,	// (0x000a66d0) popup_call2_audio_first_window_t6

0xc41a,	// (0x000a6966) popup_call2_audio_out_window_t6_ParamLimits

0xc41a,	// (0x000a6966) popup_call2_audio_out_window_t6

0x0f50,	// (0x0009b49c) main_vitu_pane

0x57da,	// (0x0009fd26) aid_size_cell_itu_ParamLimits

0x57da,	// (0x0009fd26) aid_size_cell_itu

0xea90,	// (0x000a8fdc) bg_popup_window_pane_cp08_ParamLimits

0xea90,	// (0x000a8fdc) bg_popup_window_pane_cp08

0x57e8,	// (0x0009fd34) field_vitu_entry_pane_ParamLimits

0x57e8,	// (0x0009fd34) field_vitu_entry_pane

0x57f7,	// (0x0009fd43) grid_vitu_function_pane_ParamLimits

0x57f7,	// (0x0009fd43) grid_vitu_function_pane

0x5807,	// (0x0009fd53) grid_vitu_itu_pane_ParamLimits

0x5807,	// (0x0009fd53) grid_vitu_itu_pane

0x5817,	// (0x0009fd63) cell_vitu_itu_pane_ParamLimits

0x5817,	// (0x0009fd63) cell_vitu_itu_pane

0x582c,	// (0x0009fd78) cell_vitu_function_pane_ParamLimits

0x582c,	// (0x0009fd78) cell_vitu_function_pane

0xa57e,	// (0x000a4aca) bg_popup_sub_pane_cp08_ParamLimits

0xa57e,	// (0x000a4aca) bg_popup_sub_pane_cp08

0x583e,	// (0x0009fd8a) field_vitu_entry_pane_t1_ParamLimits

0x583e,	// (0x0009fd8a) field_vitu_entry_pane_t1

0xd304,	// (0x000a7850) field_vitu_entry_pane_t2_ParamLimits

0xd304,	// (0x000a7850) field_vitu_entry_pane_t2

0x0001,

0xf6aa,	// (0x000a9bf6) field_vitu_entry_pane_t_ParamLimits

0xf6aa,	// (0x000a9bf6) field_vitu_entry_pane_t

0xd321,	// (0x000a786d) bg_button_pane_cp05_ParamLimits

0xd321,	// (0x000a786d) bg_button_pane_cp05

0x585b,	// (0x0009fda7) cell_vitu_itu_pane_g1

0x5873,	// (0x0009fdbf) cell_vitu_itu_pane_t1_ParamLimits

0x5873,	// (0x0009fdbf) cell_vitu_itu_pane_t1

0x5885,	// (0x0009fdd1) cell_vitu_itu_pane_t2_ParamLimits

0x5885,	// (0x0009fdd1) cell_vitu_itu_pane_t2

0x0002,

0xf6af,	// (0x000a9bfb) cell_vitu_itu_pane_t_ParamLimits

0xf6af,	// (0x000a9bfb) cell_vitu_itu_pane_t

0xd32f,	// (0x000a787b) bg_button_pane_cp07

0x58ba,	// (0x0009fe06) cell_vitu_function_pane_g1

0x11df,	// (0x0009b72b) main_calc_pane_g1

0x0cc1,	// (0x0009b20d) aid_visual_content_pane

0x0f50,	// (0x0009b49c) main_vradio_pane

0x58c3,	// (0x0009fe0f) main_vradio_pane_g1_ParamLimits

0x58c3,	// (0x0009fe0f) main_vradio_pane_g1

0xd339,	// (0x000a7885) main_vradio_pane_g2_ParamLimits

0xd339,	// (0x000a7885) main_vradio_pane_g2

0x0001,

0xf6b6,	// (0x000a9c02) main_vradio_pane_g_ParamLimits

0xf6b6,	// (0x000a9c02) main_vradio_pane_g

0x58d3,	// (0x0009fe1f) main_vradio_pane_t1_ParamLimits

0x58d3,	// (0x0009fe1f) main_vradio_pane_t1

0x58e5,	// (0x0009fe31) main_vradio_pane_t2_ParamLimits

0x58e5,	// (0x0009fe31) main_vradio_pane_t2

0xd346,	// (0x000a7892) main_vradio_pane_t3_ParamLimits

0xd346,	// (0x000a7892) main_vradio_pane_t3

0x0002,

0xf6bb,	// (0x000a9c07) main_vradio_pane_t_ParamLimits

0xf6bb,	// (0x000a9c07) main_vradio_pane_t

0x58f7,	// (0x0009fe43) vradio_rocker_control_pane_ParamLimits

0x58f7,	// (0x0009fe43) vradio_rocker_control_pane

0x5903,	// (0x0009fe4f) vradio_station_info_pane_ParamLimits

0x5903,	// (0x0009fe4f) vradio_station_info_pane

0xd35a,	// (0x000a78a6) vradio_frequency_info_pane_ParamLimits

0xd35a,	// (0x000a78a6) vradio_frequency_info_pane

0xcd1c,	// (0x000a7268) vradio_station_info_pane_g1

0xd369,	// (0x000a78b5) vradio_station_info_pane_t1_ParamLimits

0xd369,	// (0x000a78b5) vradio_station_info_pane_t1

0xd38b,	// (0x000a78d7) vradio_station_info_pane_t2_ParamLimits

0xd38b,	// (0x000a78d7) vradio_station_info_pane_t2

0x0001,

0x047f,	// (0x0009a9cb) vradio_station_info_pane_t_ParamLimits

0x047f,	// (0x0009a9cb) vradio_station_info_pane_t

0xd39d,	// (0x000a78e9) vradio_tuning_pane

0xd3a5,	// (0x000a78f1) vradio_rocker_control_pane_g1

0xd3ad,	// (0x000a78f9) vradio_rocker_control_pane_g2

0xd3b5,	// (0x000a7901) vradio_rocker_control_pane_g3

0xd3bd,	// (0x000a7909) vradio_rocker_control_pane_g4

0xd3c5,	// (0x000a7911) vradio_rocker_control_pane_g5

0x0004,

0x0484,	// (0x0009a9d0) vradio_rocker_control_pane_g

0x5912,	// (0x0009fe5e) vradio_frequency_info_pane_g1

0xd3cd,	// (0x000a7919) vradio_frequency_info_pane_t1_ParamLimits

0xd3cd,	// (0x000a7919) vradio_frequency_info_pane_t1

0x591c,	// (0x0009fe68) vradio_tuning_pane_g1

0x5925,	// (0x0009fe71) vradio_tuning_pane_t1

0x0d0a,	// (0x0009b256) area_side_right_pane_ParamLimits

0x0d0a,	// (0x0009b256) area_side_right_pane

0xc8cf,	// (0x000a6e1b) status_small_pane_g1

0xc8d7,	// (0x000a6e23) status_small_pane_g2

0xc8e0,	// (0x000a6e2c) status_small_pane_g3

0xc8e9,	// (0x000a6e35) status_small_pane_g4

0x0003,

0x023f,	// (0x0009a78b) status_small_pane_g

0xc8f2,	// (0x000a6e3e) status_small_pane_t1

0x0f50,	// (0x0009b49c) main_video3_pane

0xd3e1,	// (0x000a792d) cams_zoom_vslider_pane

0xd3e9,	// (0x000a7935) image3_wide_pane_ParamLimits

0xd3e9,	// (0x000a7935) image3_wide_pane

0xd403,	// (0x000a794f) image3_wide_small_pane

0xd40f,	// (0x000a795b) main_video3_pane_g1_ParamLimits

0xd40f,	// (0x000a795b) main_video3_pane_g1

0xd42b,	// (0x000a7977) main_video3_pane_g2_ParamLimits

0xd42b,	// (0x000a7977) main_video3_pane_g2

0x0001,

0x048f,	// (0x0009a9db) main_video3_pane_g_ParamLimits

0x048f,	// (0x0009a9db) main_video3_pane_g

0xd447,	// (0x000a7993) main_video3_pane_t1_ParamLimits

0xd447,	// (0x000a7993) main_video3_pane_t1

0xd472,	// (0x000a79be) main_video3_pane_t2_ParamLimits

0xd472,	// (0x000a79be) main_video3_pane_t2

0xd49d,	// (0x000a79e9) main_video3_pane_t3_ParamLimits

0xd49d,	// (0x000a79e9) main_video3_pane_t3

0x0002,

0x0494,	// (0x0009a9e0) main_video3_pane_t_ParamLimits

0x0494,	// (0x0009a9e0) main_video3_pane_t

0xd4ca,	// (0x000a7a16) cams_zoom_vslider_pane_g1

0xd4d3,	// (0x000a7a1f) cams_zoom_vslider_pane_g2

0x0001,

0x049b,	// (0x0009a9e7) cams_zoom_vslider_pane_g

0xd4db,	// (0x000a7a27) small_slider_vertical_pane

0xcd1c,	// (0x000a7268) small_slider_vertical_pane_g1

0xcd1c,	// (0x000a7268) small_slider_vertical_pane_g2

0xd4e3,	// (0x000a7a2f) small_slider_vertical_pane_g3

0x0002,

0x04a0,	// (0x0009a9ec) small_slider_vertical_pane_g

0x0f50,	// (0x0009b49c) main_hwr_training_pane

0xd4ec,	// (0x000a7a38) hwr_training_instruct_pane_ParamLimits

0xd4ec,	// (0x000a7a38) hwr_training_instruct_pane

0x5934,	// (0x0009fe80) hwr_training_navi_pane_ParamLimits

0x5934,	// (0x0009fe80) hwr_training_navi_pane

0x594e,	// (0x0009fe9a) hwr_training_write_pane_ParamLimits

0x594e,	// (0x0009fe9a) hwr_training_write_pane

0x9be6,	// (0x000a4132) bg_frame_shadow_pane

0xd523,	// (0x000a7a6f) hwr_training_write_pane_g1

0xd540,	// (0x000a7a8c) hwr_training_write_pane_g2

0xd548,	// (0x000a7a94) hwr_training_write_pane_g3

0xd550,	// (0x000a7a9c) hwr_training_write_pane_g4

0xd558,	// (0x000a7aa4) hwr_training_write_pane_g5

0xd560,	// (0x000a7aac) hwr_training_write_pane_g6

0xd568,	// (0x000a7ab4) hwr_training_write_pane_g7

0x0006,

0xf6c2,	// (0x000a9c0e) hwr_training_write_pane_g

0x5986,	// (0x0009fed2) hwr_training_navi_pane_g1_ParamLimits

0x5986,	// (0x0009fed2) hwr_training_navi_pane_g1

0x5998,	// (0x0009fee4) hwr_training_navi_pane_g2_ParamLimits

0x5998,	// (0x0009fee4) hwr_training_navi_pane_g2

0x59aa,	// (0x0009fef6) hwr_training_navi_pane_g3_ParamLimits

0x59aa,	// (0x0009fef6) hwr_training_navi_pane_g3

0x59ba,	// (0x0009ff06) hwr_training_navi_pane_g4_ParamLimits

0x59ba,	// (0x0009ff06) hwr_training_navi_pane_g4

0x0004,

0xf6d1,	// (0x000a9c1d) hwr_training_navi_pane_g_ParamLimits

0xf6d1,	// (0x000a9c1d) hwr_training_navi_pane_g

0x59d4,	// (0x0009ff20) hwr_training_navi_pane_t1

0x59e2,	// (0x0009ff2e) list_single_hwr_training_instruct_pane_ParamLimits

0x59e2,	// (0x0009ff2e) list_single_hwr_training_instruct_pane

0xd570,	// (0x000a7abc) list_single_hwr_training_instruct_pane_t1

0xcc5c,	// (0x000a71a8) bg_frame_shadow_pane_g1

0xd57f,	// (0x000a7acb) bg_frame_shadow_pane_g2

0xd587,	// (0x000a7ad3) bg_frame_shadow_pane_g3

0xd58f,	// (0x000a7adb) bg_frame_shadow_pane_g4

0xd597,	// (0x000a7ae3) bg_frame_shadow_pane_g5

0xd59f,	// (0x000a7aeb) bg_frame_shadow_pane_g6

0xd5a7,	// (0x000a7af3) bg_frame_shadow_pane_g7

0xa949,	// (0x000a4e95) bg_frame_shadow_pane_g8

0x0007,

0xf6dc,	// (0x000a9c28) bg_frame_shadow_pane_g

0x0f50,	// (0x0009b49c) main_video_tele_dialer_pane

0x5a0b,	// (0x0009ff57) aid_size_cell_video_keypad_ParamLimits

0x5a0b,	// (0x0009ff57) aid_size_cell_video_keypad

0x5a1b,	// (0x0009ff67) grid_video_dialer_keypad_pane_ParamLimits

0x5a1b,	// (0x0009ff67) grid_video_dialer_keypad_pane

0x5a4f,	// (0x0009ff9b) video_down_pane_cp_ParamLimits

0x5a4f,	// (0x0009ff9b) video_down_pane_cp

0x5a79,	// (0x0009ffc5) cell_video_dialer_keypad_pane_ParamLimits

0x5a79,	// (0x0009ffc5) cell_video_dialer_keypad_pane

0xd5af,	// (0x000a7afb) bg_button_pane_cp08_ParamLimits

0xd5af,	// (0x000a7afb) bg_button_pane_cp08

0x5a8e,	// (0x0009ffda) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5a8e,	// (0x0009ffda) cell_video_dialer_keypad_pane_g1

0x5250,	// (0x0009f79c) mup3_rocker2_pane_ParamLimits

0x5250,	// (0x0009f79c) mup3_rocker2_pane

0xcd1c,	// (0x000a7268) mup3_rocker2_pane_g1

0x415a,	// (0x0009e6a6) main_dialer2_pane

0x0f50,	// (0x0009b49c) main_mp4_pane

0x5ae6,	// (0x000a0032) main_mp4_pane_g1_ParamLimits

0x5ae6,	// (0x000a0032) main_mp4_pane_g1

0x5af4,	// (0x000a0040) main_mp4_pane_g2_ParamLimits

0x5af4,	// (0x000a0040) main_mp4_pane_g2

0x5b02,	// (0x000a004e) main_mp4_pane_g3_ParamLimits

0x5b02,	// (0x000a004e) main_mp4_pane_g3

0x5b47,	// (0x000a0093) main_mp4_pane_g4_ParamLimits

0x5b47,	// (0x000a0093) main_mp4_pane_g4

0x5b75,	// (0x000a00c1) main_mp4_pane_g5_ParamLimits

0x5b75,	// (0x000a00c1) main_mp4_pane_g5

0x0007,

0xf6fc,	// (0x000a9c48) main_mp4_pane_g_ParamLimits

0xf6fc,	// (0x000a9c48) main_mp4_pane_g

0x5be9,	// (0x000a0135) main_mp4_pane_t1_ParamLimits

0x5be9,	// (0x000a0135) main_mp4_pane_t1

0x5c45,	// (0x000a0191) main_mp4_pane_t2_ParamLimits

0x5c45,	// (0x000a0191) main_mp4_pane_t2

0xd5bb,	// (0x000a7b07) main_mp4_pane_t3_ParamLimits

0xd5bb,	// (0x000a7b07) main_mp4_pane_t3

0x5c97,	// (0x000a01e3) main_mp4_pane_t4_ParamLimits

0x5c97,	// (0x000a01e3) main_mp4_pane_t4

0x0003,

0xf70d,	// (0x000a9c59) main_mp4_pane_t_ParamLimits

0xf70d,	// (0x000a9c59) main_mp4_pane_t

0x5cdb,	// (0x000a0227) mp4_progress_pane_ParamLimits

0x5cdb,	// (0x000a0227) mp4_progress_pane

0x5d25,	// (0x000a0271) mp4_rocker_pane_ParamLimits

0x5d25,	// (0x000a0271) mp4_rocker_pane

0xd5e9,	// (0x000a7b35) mp4_progress_pane_t1

0xd602,	// (0x000a7b4e) mp4_progress_pane_t2

0x0001,

0x04fb,	// (0x0009aa47) mp4_progress_pane_t

0xd61b,	// (0x000a7b67) mup_progress_pane_cp04

0xdb56,	// (0x000a80a2) mp4_rocker_pane_g1

0x5d45,	// (0x000a0291) aid_cell_size_keypad2_ParamLimits

0x5d45,	// (0x000a0291) aid_cell_size_keypad2

0x5d55,	// (0x000a02a1) dialer2_ne_pane_ParamLimits

0x5d55,	// (0x000a02a1) dialer2_ne_pane

0x5d63,	// (0x000a02af) grid_dialer2_keypad_pane_ParamLimits

0x5d63,	// (0x000a02af) grid_dialer2_keypad_pane

0xdb60,	// (0x000a80ac) bg_popup_call_pane_cp07_ParamLimits

0xdb60,	// (0x000a80ac) bg_popup_call_pane_cp07

0x5d73,	// (0x000a02bf) dialer2_ne_pane_t1_ParamLimits

0x5d73,	// (0x000a02bf) dialer2_ne_pane_t1

0x5d98,	// (0x000a02e4) cell_dialer2_keypad_pane_ParamLimits

0x5d98,	// (0x000a02e4) cell_dialer2_keypad_pane

0xd640,	// (0x000a7b8c) bg_button_pane_pane_cp04_ParamLimits

0xd640,	// (0x000a7b8c) bg_button_pane_pane_cp04

0x5dad,	// (0x000a02f9) cell_dialer2_keypad_pane_g1_ParamLimits

0x5dad,	// (0x000a02f9) cell_dialer2_keypad_pane_g1

0x1d77,	// (0x0009c2c3) aid_placing_vt_set_content_ParamLimits

0x1d77,	// (0x0009c2c3) aid_placing_vt_set_content

0x1da3,	// (0x0009c2ef) aid_placing_vt_set_title_ParamLimits

0x1da3,	// (0x0009c2ef) aid_placing_vt_set_title

0x0f50,	// (0x0009b49c) main_image3_pane

0x5e47,	// (0x000a0393) area_side_right_pane_cp01_ParamLimits

0x5e47,	// (0x000a0393) area_side_right_pane_cp01

0x5e74,	// (0x000a03c0) main_image3_pane_g1_ParamLimits

0x5e74,	// (0x000a03c0) main_image3_pane_g1

0x5e82,	// (0x000a03ce) main_image3_pane_g2_ParamLimits

0x5e82,	// (0x000a03ce) main_image3_pane_g2

0x5e9b,	// (0x000a03e7) main_image3_pane_g3_ParamLimits

0x5e9b,	// (0x000a03e7) main_image3_pane_g3

0x5eb4,	// (0x000a0400) main_image3_pane_g4_ParamLimits

0x5eb4,	// (0x000a0400) main_image3_pane_g4

0x0003,

0xf720,	// (0x000a9c6c) main_image3_pane_g_ParamLimits

0xf720,	// (0x000a9c6c) main_image3_pane_g

0x5ecd,	// (0x000a0419) main_image3_pane_t1_ParamLimits

0x5ecd,	// (0x000a0419) main_image3_pane_t1

0x5ef2,	// (0x000a043e) main_image3_pane_t2_ParamLimits

0x5ef2,	// (0x000a043e) main_image3_pane_t2

0x5f11,	// (0x000a045d) main_image3_pane_t3_ParamLimits

0x5f11,	// (0x000a045d) main_image3_pane_t3

0x0003,

0xf729,	// (0x000a9c75) main_image3_pane_t_ParamLimits

0xf729,	// (0x000a9c75) main_image3_pane_t

0xea90,	// (0x000a8fdc) grid_sctrl_middle_pane_cp01_ParamLimits

0xea90,	// (0x000a8fdc) grid_sctrl_middle_pane_cp01

0x5f72,	// (0x000a04be) cell_sctrl_middle_pane_cp01_ParamLimits

0x5f72,	// (0x000a04be) cell_sctrl_middle_pane_cp01

0x5f83,	// (0x000a04cf) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5f83,	// (0x000a04cf) cell_sctrl_middle_pane_cp01_g1

0x0f50,	// (0x0009b49c) main_call4_pane

0x5f90,	// (0x000a04dc) aid_size_button_call4_ParamLimits

0x5f90,	// (0x000a04dc) aid_size_button_call4

0x5fc6,	// (0x000a0512) call4_windows_pane_ParamLimits

0x5fc6,	// (0x000a0512) call4_windows_pane

0x5fdb,	// (0x000a0527) grid_call4_button_pane_ParamLimits

0x5fdb,	// (0x000a0527) grid_call4_button_pane

0x6009,	// (0x000a0555) call4_windows_conf_pane

0x6020,	// (0x000a056c) popup_call4_audio_first_window_ParamLimits

0x6020,	// (0x000a056c) popup_call4_audio_first_window

0x6070,	// (0x000a05bc) popup_call4_audio_second_window_ParamLimits

0x6070,	// (0x000a05bc) popup_call4_audio_second_window

0x6089,	// (0x000a05d5) popup_call4_audio_wait_window_ParamLimits

0x6089,	// (0x000a05d5) popup_call4_audio_wait_window

0x6097,	// (0x000a05e3) cell_call4_button_pane_ParamLimits

0x6097,	// (0x000a05e3) cell_call4_button_pane

0x60ba,	// (0x000a0606) bg_button_pane_cp09_ParamLimits

0x60ba,	// (0x000a0606) bg_button_pane_cp09

0x60c6,	// (0x000a0612) cell_call4_button_pane_g1_ParamLimits

0x60c6,	// (0x000a0612) cell_call4_button_pane_g1

0x60d3,	// (0x000a061f) cell_call4_button_pane_t1_ParamLimits

0x60d3,	// (0x000a061f) cell_call4_button_pane_t1

0xd654,	// (0x000a7ba0) popup_call4_audio_conf_window_ParamLimits

0xd654,	// (0x000a7ba0) popup_call4_audio_conf_window

0x5283,	// (0x0009f7cf) mup3_progress_pane_t1_ParamLimits

0x52a2,	// (0x0009f7ee) mup3_progress_pane_t2_ParamLimits

0xcfdc,	// (0x000a7528) mup3_progress_pane_t3_ParamLimits

0xf657,	// (0x000a9ba3) mup3_progress_pane_t_ParamLimits

0xcff9,	// (0x000a7545) mup_progress_pane_cp03_ParamLimits

0x57d2,	// (0x0009fd1e) mup3_control_keys_pane_g4_copy1

0x5d09,	// (0x000a0255) mp4_rocker2_pane_ParamLimits

0x5d09,	// (0x000a0255) mp4_rocker2_pane

0xd668,	// (0x000a7bb4) mp4_rocker2_pane_g1

0xd670,	// (0x000a7bbc) mp4_rocker2_pane_g2

0x6117,	// (0x000a0663) mp4_rocker2_pane_g3

0x611f,	// (0x000a066b) mp4_rocker2_pane_g4

0x6127,	// (0x000a0673) mp4_rocker2_pane_g5

0x0004,

0xf732,	// (0x000a9c7e) mp4_rocker2_pane_g

0x0f50,	// (0x0009b49c) main_camera4_pane

0x0f50,	// (0x0009b49c) main_video4_pane

0x5a2b,	// (0x0009ff77) main_video_tele_dialer_pane_t1_ParamLimits

0x5a2b,	// (0x0009ff77) main_video_tele_dialer_pane_t1

0x5a3d,	// (0x0009ff89) main_video_tele_dialer_pane_t2_ParamLimits

0x5a3d,	// (0x0009ff89) main_video_tele_dialer_pane_t2

0x0001,

0xf6ed,	// (0x000a9c39) main_video_tele_dialer_pane_t_ParamLimits

0xf6ed,	// (0x000a9c39) main_video_tele_dialer_pane_t

0x6147,	// (0x000a0693) cam4_autofocus_pane_ParamLimits

0x6147,	// (0x000a0693) cam4_autofocus_pane

0x6161,	// (0x000a06ad) cam4_image_uncrop_pane_ParamLimits

0x6161,	// (0x000a06ad) cam4_image_uncrop_pane

0x6178,	// (0x000a06c4) cam4_indicators_pane_ParamLimits

0x6178,	// (0x000a06c4) cam4_indicators_pane

0x6194,	// (0x000a06e0) main_camera4_pane_g1_ParamLimits

0x6194,	// (0x000a06e0) main_camera4_pane_g1

0x61a0,	// (0x000a06ec) main_camera4_pane_g2_ParamLimits

0x61a0,	// (0x000a06ec) main_camera4_pane_g2

0x61a0,	// (0x000a06ec) main_camera4_pane_g3_ParamLimits

0x61a0,	// (0x000a06ec) main_camera4_pane_g3

0x61ac,	// (0x000a06f8) main_camera4_pane_g4_ParamLimits

0x61ac,	// (0x000a06f8) main_camera4_pane_g4

0x61b8,	// (0x000a0704) main_camera4_pane_g5_ParamLimits

0x61b8,	// (0x000a0704) main_camera4_pane_g5

0x0005,

0xf73d,	// (0x000a9c89) main_camera4_pane_g_ParamLimits

0xf73d,	// (0x000a9c89) main_camera4_pane_g

0x61d2,	// (0x000a071e) main_camera4_pane_t1_ParamLimits

0x61d2,	// (0x000a071e) main_camera4_pane_t1

0x621a,	// (0x000a0766) bg_tb_trans_pane_cp06

0x6230,	// (0x000a077c) cam4_indicators_pane_g1

0x6241,	// (0x000a078d) cam4_indicators_pane_g2

0x0002,

0xf758,	// (0x000a9ca4) cam4_indicators_pane_g

0x6259,	// (0x000a07a5) cam4_indicators_pane_t1

0x6283,	// (0x000a07cf) main_video4_pane_g1_ParamLimits

0x6283,	// (0x000a07cf) main_video4_pane_g1

0x628f,	// (0x000a07db) main_video4_pane_g2_ParamLimits

0x628f,	// (0x000a07db) main_video4_pane_g2

0x629b,	// (0x000a07e7) main_video4_pane_g3_ParamLimits

0x629b,	// (0x000a07e7) main_video4_pane_g3

0x62a7,	// (0x000a07f3) main_video4_pane_g4_ParamLimits

0x62a7,	// (0x000a07f3) main_video4_pane_g4

0x0004,

0xf75f,	// (0x000a9cab) main_video4_pane_g_ParamLimits

0xf75f,	// (0x000a9cab) main_video4_pane_g

0x62c7,	// (0x000a0813) vid4_indicators_pane_ParamLimits

0x62c7,	// (0x000a0813) vid4_indicators_pane

0x62e6,	// (0x000a0832) video4_image_uncrop_cif_pane_ParamLimits

0x62e6,	// (0x000a0832) video4_image_uncrop_cif_pane

0x62f5,	// (0x000a0841) video4_image_uncrop_nhd_pane_ParamLimits

0x62f5,	// (0x000a0841) video4_image_uncrop_nhd_pane

0x6161,	// (0x000a06ad) video4_image_uncrop_vga_pane_ParamLimits

0x6161,	// (0x000a06ad) video4_image_uncrop_vga_pane

0x414c,	// (0x0009e698) bg_tb_trans_pane_cp07

0x630a,	// (0x000a0856) vid4_indicators_pane_g1

0x631e,	// (0x000a086a) vid4_indicators_pane_g2

0x6332,	// (0x000a087e) vid4_indicators_pane_g3

0x0004,

0xf76a,	// (0x000a9cb6) vid4_indicators_pane_g

0x635f,	// (0x000a08ab) vid4_indicators_pane_t1

0x6376,	// (0x000a08c2) cam4_autofocus_pane_g1

0x637e,	// (0x000a08ca) cam4_autofocus_pane_g2

0x6386,	// (0x000a08d2) cam4_autofocus_pane_g3

0x0002,

0xf775,	// (0x000a9cc1) cam4_autofocus_pane_g

0x638e,	// (0x000a08da) cam4_autofocus_pane_g3_copy1

0x5a5d,	// (0x0009ffa9) video_down_pane_cp_t1

0x5a6b,	// (0x0009ffb7) video_down_pane_cp_t2

0x0001,

0xf6f2,	// (0x000a9c3e) video_down_pane_cp_t

0x0f36,	// (0x0009b482) popup_vitu2_window_ParamLimits

0x0f36,	// (0x0009b482) popup_vitu2_window

0x6396,	// (0x000a08e2) aid_size_cell2_itu2_ParamLimits

0x6396,	// (0x000a08e2) aid_size_cell2_itu2

0x63b8,	// (0x000a0904) aid_size_cell_itu2_ParamLimits

0x63b8,	// (0x000a0904) aid_size_cell_itu2

0x63fc,	// (0x000a0948) bg_popup_window_pane_cp09_ParamLimits

0x63fc,	// (0x000a0948) bg_popup_window_pane_cp09

0x640a,	// (0x000a0956) field_vitu2_entry_pane_ParamLimits

0x640a,	// (0x000a0956) field_vitu2_entry_pane

0x642a,	// (0x000a0976) grid_vitu2_function_pane_ParamLimits

0x642a,	// (0x000a0976) grid_vitu2_function_pane

0x646e,	// (0x000a09ba) grid_vitu2_itu_pane_ParamLimits

0x646e,	// (0x000a09ba) grid_vitu2_itu_pane

0x64e8,	// (0x000a0a34) cell_vitu2_itu_pane_ParamLimits

0x64e8,	// (0x000a0a34) cell_vitu2_itu_pane

0x6501,	// (0x000a0a4d) cell_vitu2_function_pane_ParamLimits

0x6501,	// (0x000a0a4d) cell_vitu2_function_pane

0xd678,	// (0x000a7bc4) bg_popup_call_pane_cp08_ParamLimits

0xd678,	// (0x000a7bc4) bg_popup_call_pane_cp08

0xd68f,	// (0x000a7bdb) field_vitu2_entry_pane_g1

0xd69b,	// (0x000a7be7) field_vitu2_entry_pane_g2

0x0002,

0xf77c,	// (0x000a9cc8) field_vitu2_entry_pane_g

0x6542,	// (0x000a0a8e) field_vitu2_entry_pane_t1_ParamLimits

0x6542,	// (0x000a0a8e) field_vitu2_entry_pane_t1

0xa04b,	// (0x000a4597) field_vitu2_entry_pane_t2_ParamLimits

0xa04b,	// (0x000a4597) field_vitu2_entry_pane_t2

0x0001,

0xf783,	// (0x000a9ccf) field_vitu2_entry_pane_t_ParamLimits

0xf783,	// (0x000a9ccf) field_vitu2_entry_pane_t

0x6572,	// (0x000a0abe) bg_button_pane_cp010_ParamLimits

0x6572,	// (0x000a0abe) bg_button_pane_cp010

0x6580,	// (0x000a0acc) cell_vitu2_itu_pane_g1

0x65a0,	// (0x000a0aec) cell_vitu2_itu_pane_t1_ParamLimits

0x65a0,	// (0x000a0aec) cell_vitu2_itu_pane_t1

0x0ba5,	// (0x0009b0f1) cell_vitu2_itu_pane_t2_ParamLimits

0x0ba5,	// (0x0009b0f1) cell_vitu2_itu_pane_t2

0x0002,

0xf78d,	// (0x000a9cd9) cell_vitu2_itu_pane_t_ParamLimits

0xf78d,	// (0x000a9cd9) cell_vitu2_itu_pane_t

0x414c,	// (0x0009e698) bg_button_pane_cp011

0x65ec,	// (0x000a0b38) cell_vitu2_function_pane_g1

0x0f50,	// (0x0009b49c) main_myfav_hc_pane

0x5f53,	// (0x000a049f) popup_image3_note_pane_ParamLimits

0x5f53,	// (0x000a049f) popup_image3_note_pane

0x5f61,	// (0x000a04ad) popup_image3_tool_bar_pane_ParamLimits

0x5f61,	// (0x000a04ad) popup_image3_tool_bar_pane

0x0c1b,	// (0x0009b167) cell_vitu2_itu_pane_t3_ParamLimits

0x0c1b,	// (0x0009b167) cell_vitu2_itu_pane_t3

0x9be6,	// (0x000a4132) bg_popup_trans_pane

0xd6bd,	// (0x000a7c09) grid_image3_tool_bar_pane

0xd6c7,	// (0x000a7c13) bg_popup_trans_pane_g1

0xacd5,	// (0x000a5221) bg_popup_trans_pane_g2

0xd6cf,	// (0x000a7c1b) bg_popup_trans_pane_g3

0xd6d7,	// (0x000a7c23) bg_popup_trans_pane_g4

0xd6df,	// (0x000a7c2b) bg_popup_trans_pane_g5

0xd6e7,	// (0x000a7c33) bg_popup_trans_pane_g6

0xd6ef,	// (0x000a7c3b) bg_popup_trans_pane_g7

0xd6f7,	// (0x000a7c43) bg_popup_trans_pane_g8

0xacb5,	// (0x000a5201) bg_popup_trans_pane_g9

0x0008,

0xf794,	// (0x000a9ce0) bg_popup_trans_pane_g

0xd6ff,	// (0x000a7c4b) cell_image3_tool_bar_pane_ParamLimits

0xd6ff,	// (0x000a7c4b) cell_image3_tool_bar_pane

0xcd1c,	// (0x000a7268) cell_image3_tool_bar_pane_g1

0x9be6,	// (0x000a4132) bg_popup_trans_pane_cp1

0xd713,	// (0x000a7c5f) popup_image3_note_pane_t1

0xd721,	// (0x000a7c6d) popup_image3_note_pane_t2

0xd72f,	// (0x000a7c7b) popup_image3_note_pane_t3

0x0002,

0xf7a7,	// (0x000a9cf3) popup_image3_note_pane_t

0xd73d,	// (0x000a7c89) popup_image3_note_pane_t3_copy1

0x6600,	// (0x000a0b4c) bg_myfav_hc_instruction_pane_ParamLimits

0x6600,	// (0x000a0b4c) bg_myfav_hc_instruction_pane

0x6618,	// (0x000a0b64) cell_myfav_contact_pane_ParamLimits

0x6618,	// (0x000a0b64) cell_myfav_contact_pane

0x6632,	// (0x000a0b7e) cell_myfav_contact_pane_cp1_ParamLimits

0x6632,	// (0x000a0b7e) cell_myfav_contact_pane_cp1

0x664a,	// (0x000a0b96) cell_myfav_contact_pane_cp2_ParamLimits

0x664a,	// (0x000a0b96) cell_myfav_contact_pane_cp2

0x6662,	// (0x000a0bae) cell_myfav_contact_pane_cp3_ParamLimits

0x6662,	// (0x000a0bae) cell_myfav_contact_pane_cp3

0x6679,	// (0x000a0bc5) cell_myfav_contact_pane_cp4_ParamLimits

0x6679,	// (0x000a0bc5) cell_myfav_contact_pane_cp4

0x668f,	// (0x000a0bdb) cell_myfav_contact_pane_cp5_ParamLimits

0x668f,	// (0x000a0bdb) cell_myfav_contact_pane_cp5

0x66a3,	// (0x000a0bef) cell_myfav_contact_pane_cp6_ParamLimits

0x66a3,	// (0x000a0bef) cell_myfav_contact_pane_cp6

0x66b7,	// (0x000a0c03) cell_myfav_contact_pane_cp7_ParamLimits

0x66b7,	// (0x000a0c03) cell_myfav_contact_pane_cp7

0xd74b,	// (0x000a7c97) listscroll_gen_pane_cp05

0x66cf,	// (0x000a0c1b) main_myfav_hc_pane_g1_ParamLimits

0x66cf,	// (0x000a0c1b) main_myfav_hc_pane_g1

0x66e5,	// (0x000a0c31) main_myfav_hc_pane_g2_ParamLimits

0x66e5,	// (0x000a0c31) main_myfav_hc_pane_g2

0x0002,

0xf7ae,	// (0x000a9cfa) main_myfav_hc_pane_g_ParamLimits

0xf7ae,	// (0x000a9cfa) main_myfav_hc_pane_g

0x6715,	// (0x000a0c61) main_myfav_hc_pane_t1_ParamLimits

0x6715,	// (0x000a0c61) main_myfav_hc_pane_t1

0xd754,	// (0x000a7ca0) main_myfav_hc_pane_t2_ParamLimits

0xd754,	// (0x000a7ca0) main_myfav_hc_pane_t2

0xd766,	// (0x000a7cb2) main_myfav_hc_pane_t3_ParamLimits

0xd766,	// (0x000a7cb2) main_myfav_hc_pane_t3

0x672c,	// (0x000a0c78) main_myfav_hc_pane_t4_ParamLimits

0x672c,	// (0x000a0c78) main_myfav_hc_pane_t4

0x0004,

0xf7b5,	// (0x000a9d01) main_myfav_hc_pane_t_ParamLimits

0xf7b5,	// (0x000a9d01) main_myfav_hc_pane_t

0xcd1c,	// (0x000a7268) bg_myfav_hc_instruction_pane_g1

0xd778,	// (0x000a7cc4) cell_myfav_contact_pane_g1_ParamLimits

0xd778,	// (0x000a7cc4) cell_myfav_contact_pane_g1

0xd778,	// (0x000a7cc4) cell_myfav_contact_pane_g2_ParamLimits

0xd778,	// (0x000a7cc4) cell_myfav_contact_pane_g2

0xd784,	// (0x000a7cd0) cell_myfav_contact_pane_g3_ParamLimits

0xd784,	// (0x000a7cd0) cell_myfav_contact_pane_g3

0xcfc6,	// (0x000a7512) cell_myfav_contact_pane_g4_ParamLimits

0xcfc6,	// (0x000a7512) cell_myfav_contact_pane_g4

0xd791,	// (0x000a7cdd) cell_myfav_contact_pane_g5_ParamLimits

0xd791,	// (0x000a7cdd) cell_myfav_contact_pane_g5

0x0004,

0xf7c0,	// (0x000a9d0c) cell_myfav_contact_pane_g_ParamLimits

0xf7c0,	// (0x000a9d0c) cell_myfav_contact_pane_g

0x66fd,	// (0x000a0c49) main_myfav_hc_pane_g3_ParamLimits

0x66fd,	// (0x000a0c49) main_myfav_hc_pane_g3

0x0e3f,	// (0x0009b38b) popup_adpt_find_window

0x6756,	// (0x000a0ca2) afind_page_pane_ParamLimits

0x6756,	// (0x000a0ca2) afind_page_pane

0x6763,	// (0x000a0caf) aid_size_cell_afind_ParamLimits

0x6763,	// (0x000a0caf) aid_size_cell_afind

0x677d,	// (0x000a0cc9) bg_popup_sub_pane_cp09_ParamLimits

0x677d,	// (0x000a0cc9) bg_popup_sub_pane_cp09

0x678a,	// (0x000a0cd6) find_pane_cp01_ParamLimits

0x678a,	// (0x000a0cd6) find_pane_cp01

0xd79d,	// (0x000a7ce9) grid_afind_control_pane_ParamLimits

0xd79d,	// (0x000a7ce9) grid_afind_control_pane

0x6797,	// (0x000a0ce3) grid_afind_pane_ParamLimits

0x6797,	// (0x000a0ce3) grid_afind_pane

0x67b1,	// (0x000a0cfd) cell_afind_pane_ParamLimits

0x67b1,	// (0x000a0cfd) cell_afind_pane

0xcd1c,	// (0x000a7268) afind_page_pane_g1

0x67f9,	// (0x000a0d45) afind_page_pane_g2

0x6802,	// (0x000a0d4e) afind_page_pane_g3

0x0002,

0xf7cb,	// (0x000a9d17) afind_page_pane_g

0x680b,	// (0x000a0d57) afind_page_pane_t1

0xd7b1,	// (0x000a7cfd) cell_afind_grid_control_pane_ParamLimits

0xd7b1,	// (0x000a7cfd) cell_afind_grid_control_pane

0xd640,	// (0x000a7b8c) bg_button_pane_cp69_ParamLimits

0xd640,	// (0x000a7b8c) bg_button_pane_cp69

0x682b,	// (0x000a0d77) cell_afind_pane_g1_ParamLimits

0x682b,	// (0x000a0d77) cell_afind_pane_g1

0x6838,	// (0x000a0d84) cell_afind_pane_t1_ParamLimits

0x6838,	// (0x000a0d84) cell_afind_pane_t1

0xaace,	// (0x000a501a) bg_button_pane_cp72

0xd7c0,	// (0x000a7d0c) cell_afind_grid_control_pane_g1

0x3cc4,	// (0x0009e210) aid_image_placing_area_ParamLimits

0x3cc4,	// (0x0009e210) aid_image_placing_area

0xd2ec,	// (0x000a7838) field_vitu_entry_pane_g1_ParamLimits

0xd2ec,	// (0x000a7838) field_vitu_entry_pane_g1

0xd2f8,	// (0x000a7844) field_vitu_entry_pane_g2_ParamLimits

0xd2f8,	// (0x000a7844) field_vitu_entry_pane_g2

0x0001,

0x0462,	// (0x0009a9ae) field_vitu_entry_pane_g_ParamLimits

0x0462,	// (0x0009a9ae) field_vitu_entry_pane_g

0x585b,	// (0x0009fda7) cell_vitu_itu_pane_g1_ParamLimits

0x589d,	// (0x0009fde9) cell_vitu_itu_pane_t3_ParamLimits

0x589d,	// (0x0009fde9) cell_vitu_itu_pane_t3

0xd5e9,	// (0x000a7b35) mp4_progress_pane_t1_ParamLimits

0xd602,	// (0x000a7b4e) mp4_progress_pane_t2_ParamLimits

0x04fb,	// (0x0009aa47) mp4_progress_pane_t_ParamLimits

0xd61b,	// (0x000a7b67) mup_progress_pane_cp04_ParamLimits

0x6740,	// (0x000a0c8c) main_myfav_hc_pane_t5_ParamLimits

0x6740,	// (0x000a0c8c) main_myfav_hc_pane_t5

0x0b9d,	// (0x0009b0e9) aid_zoom_text_primary

0x0e3f,	// (0x0009b38b) popup_adpt_find_window_ParamLimits

0x414c,	// (0x0009e698) main_cam_set_pane

0x6186,	// (0x000a06d2) cam4_zoom_pane_ParamLimits

0x6186,	// (0x000a06d2) cam4_zoom_pane

0x684a,	// (0x000a0d96) main_cam_set_pane_g1_ParamLimits

0x684a,	// (0x000a0d96) main_cam_set_pane_g1

0x6858,	// (0x000a0da4) main_cam_set_pane_g2_ParamLimits

0x6858,	// (0x000a0da4) main_cam_set_pane_g2

0x0001,

0xf7d2,	// (0x000a9d1e) main_cam_set_pane_g_ParamLimits

0xf7d2,	// (0x000a9d1e) main_cam_set_pane_g

0x6864,	// (0x000a0db0) main_cam_set_pane_t1_ParamLimits

0x6864,	// (0x000a0db0) main_cam_set_pane_t1

0x6880,	// (0x000a0dcc) main_cset_listscroll_pane_ParamLimits

0x6880,	// (0x000a0dcc) main_cset_listscroll_pane

0x68ab,	// (0x000a0df7) main_cset_slider_pane_ParamLimits

0x68ab,	// (0x000a0df7) main_cset_slider_pane

0xd7d1,	// (0x000a7d1d) main_cset_list_pane_ParamLimits

0xd7d1,	// (0x000a7d1d) main_cset_list_pane

0xd7e1,	// (0x000a7d2d) scroll_pane_cp028

0x68ca,	// (0x000a0e16) aid_area_touch_slider

0x68e6,	// (0x000a0e32) cset_slider_pane

0x6910,	// (0x000a0e5c) main_cset_slider_pane_g1

0x6925,	// (0x000a0e71) main_cset_slider_pane_g2

0x0011,

0xf7d7,	// (0x000a9d23) main_cset_slider_pane_g

0xd844,	// (0x000a7d90) main_cset_slider_pane_t1

0x69eb,	// (0x000a0f37) main_cset_slider_pane_t2

0x6a05,	// (0x000a0f51) main_cset_slider_pane_t3

0x6a1f,	// (0x000a0f6b) main_cset_slider_pane_t4

0x6a3d,	// (0x000a0f89) main_cset_slider_pane_t5

0x6a5b,	// (0x000a0fa7) main_cset_slider_pane_t6

0x6a72,	// (0x000a0fbe) main_cset_slider_pane_t7

0x000e,

0xf7fc,	// (0x000a9d48) main_cset_slider_pane_t

0x6b80,	// (0x000a10cc) cset_list_set_pane_ParamLimits

0x6b80,	// (0x000a10cc) cset_list_set_pane

0x6b99,	// (0x000a10e5) aid_position_infowindow_above

0x6ba1,	// (0x000a10ed) aid_position_infowindow_below

0x6ba9,	// (0x000a10f5) cset_list_set_pane_g1_ParamLimits

0x6ba9,	// (0x000a10f5) cset_list_set_pane_g1

0x6bb5,	// (0x000a1101) cset_list_set_pane_g3_ParamLimits

0x6bb5,	// (0x000a1101) cset_list_set_pane_g3

0x0001,

0xf81b,	// (0x000a9d67) cset_list_set_pane_g_ParamLimits

0xf81b,	// (0x000a9d67) cset_list_set_pane_g

0x6bc4,	// (0x000a1110) cset_list_set_pane_t1_ParamLimits

0x6bc4,	// (0x000a1110) cset_list_set_pane_t1

0xa57e,	// (0x000a4aca) list_highlight_pane_cp021_ParamLimits

0xa57e,	// (0x000a4aca) list_highlight_pane_cp021

0xb605,	// (0x000a5b51) cset_slider_pane_g1

0xb617,	// (0x000a5b63) cset_slider_pane_g2

0xb60e,	// (0x000a5b5a) cset_slider_pane_g3

0x0002,

0x060a,	// (0x0009ab56) cset_slider_pane_g

0x6bd9,	// (0x000a1125) aid_area_touch_cam4_zoom

0x6be1,	// (0x000a112d) cam4_zoom_cont_pane

0x6be9,	// (0x000a1135) cam4_zoom_pane_g1

0x6bf1,	// (0x000a113d) cam4_zoom_pane_g2

0x6bf9,	// (0x000a1145) cam4_zoom_pane_g3

0x0002,

0xf820,	// (0x000a9d6c) cam4_zoom_pane_g

0x6c01,	// (0x000a114d) cam4_zoom_cont_pane_g1

0x6c0a,	// (0x000a1156) cam4_zoom_cont_pane_g2

0x6c13,	// (0x000a115f) cam4_zoom_cont_pane_g3

0x0002,

0xf827,	// (0x000a9d73) cam4_zoom_cont_pane_g

0x5faa,	// (0x000a04f6) call4_image_pane_ParamLimits

0x5faa,	// (0x000a04f6) call4_image_pane

0x6009,	// (0x000a0555) call4_windows_conf_pane_ParamLimits

0x604e,	// (0x000a059a) popup_call4_audio_in_window_ParamLimits

0x604e,	// (0x000a059a) popup_call4_audio_in_window

0x9be6,	// (0x000a4132) bg_popup_call2_act_pane_cp02

0xd64c,	// (0x000a7b98) call4_list_conf_pane

0xcd1c,	// (0x000a7268) call4_image_pane_g1

0xcd1c,	// (0x000a7268) call4_image_pane_g2

0x0001,

0x0323,	// (0x0009a86f) call4_image_pane_g

0xd8e4,	// (0x000a7e30) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8e4,	// (0x000a7e30) list_single_graphic_popup_conf4_pane

0x9be6,	// (0x000a4132) list_highlight_pane_cp022

0xd8f7,	// (0x000a7e43) list_single_graphic_popup_conf4_pane_g1

0xb1ef,	// (0x000a573b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf82e,	// (0x000a9d7a) list_single_graphic_popup_conf4_pane_g

0xd8ff,	// (0x000a7e4b) list_single_graphic_popup_conf4_pane_t1

0x1f07,	// (0x0009c453) popup_vtel_slider_window_ParamLimits

0x1f07,	// (0x0009c453) popup_vtel_slider_window

0xd62e,	// (0x000a7b7a) dialer2_ne_pane_t2_ParamLimits

0xd62e,	// (0x000a7b7a) dialer2_ne_pane_t2

0x0001,

0xf716,	// (0x000a9c62) dialer2_ne_pane_t_ParamLimits

0xf716,	// (0x000a9c62) dialer2_ne_pane_t

0xa57e,	// (0x000a4aca) bg_popup_sub_pane_cp010_ParamLimits

0xa57e,	// (0x000a4aca) bg_popup_sub_pane_cp010

0x6c1c,	// (0x000a1168) popup_vtel_slider_window_g1_ParamLimits

0x6c1c,	// (0x000a1168) popup_vtel_slider_window_g1

0x6c28,	// (0x000a1174) popup_vtel_slider_window_g2_ParamLimits

0x6c28,	// (0x000a1174) popup_vtel_slider_window_g2

0x0003,

0xf833,	// (0x000a9d7f) popup_vtel_slider_window_g_ParamLimits

0xf833,	// (0x000a9d7f) popup_vtel_slider_window_g

0x6c70,	// (0x000a11bc) vtel_slider_pane_ParamLimits

0x6c70,	// (0x000a11bc) vtel_slider_pane

0x6c7f,	// (0x000a11cb) vtel_slider_pane_g1_ParamLimits

0x6c7f,	// (0x000a11cb) vtel_slider_pane_g1

0x6c8c,	// (0x000a11d8) vtel_slider_pane_g2_ParamLimits

0x6c8c,	// (0x000a11d8) vtel_slider_pane_g2

0x6c99,	// (0x000a11e5) vtel_slider_pane_g3_ParamLimits

0x6c99,	// (0x000a11e5) vtel_slider_pane_g3

0x6c7f,	// (0x000a11cb) vtel_slider_pane_g4_ParamLimits

0x6c7f,	// (0x000a11cb) vtel_slider_pane_g4

0x6ca6,	// (0x000a11f2) vtel_slider_pane_g5_ParamLimits

0x6ca6,	// (0x000a11f2) vtel_slider_pane_g5

0x0004,

0xf83c,	// (0x000a9d88) vtel_slider_pane_g_ParamLimits

0xf83c,	// (0x000a9d88) vtel_slider_pane_g

0x414c,	// (0x0009e698) main_gallery2_pane

0x63de,	// (0x000a092a) aid_size_row_itut2_dropdow_list_ParamLimits

0x63de,	// (0x000a092a) aid_size_row_itut2_dropdow_list

0x644c,	// (0x000a0998) grid_vitu2_function_top_pane_ParamLimits

0x644c,	// (0x000a0998) grid_vitu2_function_top_pane

0x64a6,	// (0x000a09f2) popup_vitu2_dropdown_list_window_ParamLimits

0x64a6,	// (0x000a09f2) popup_vitu2_dropdown_list_window

0x64c6,	// (0x000a0a12) popup_vitu2_match_list_window

0x6cc1,	// (0x000a120d) cell_vitu2_function_top_pane_ParamLimits

0x6cc1,	// (0x000a120d) cell_vitu2_function_top_pane

0x6cdb,	// (0x000a1227) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6cdb,	// (0x000a1227) cell_vitu2_function_top_pane_cp01

0x6cf7,	// (0x000a1243) cell_vitu2_function_top_wide_pane_ParamLimits

0x6cf7,	// (0x000a1243) cell_vitu2_function_top_wide_pane

0x414c,	// (0x0009e698) bg_button_pane_cp012

0x6d13,	// (0x000a125f) cell_vitu2_function_top_pane_g1

0x6d27,	// (0x000a1273) bg_button_pane_cp013_ParamLimits

0x6d27,	// (0x000a1273) bg_button_pane_cp013

0x6d43,	// (0x000a128f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6d43,	// (0x000a128f) cell_vitu2_function_top_wide_pane_g1

0x0f36,	// (0x0009b482) bg_popup_sub_pane_cp20

0x6d5b,	// (0x000a12a7) list_vitu2_match_list_pane

0xd6c7,	// (0x000a7c13) bg_popup_sub_pane_cp20_g1

0xd6cf,	// (0x000a7c1b) bg_popup_sub_pane_cp20_g2

0xacd5,	// (0x000a5221) bg_popup_sub_pane_cp20_g3

0xd6d7,	// (0x000a7c23) bg_popup_sub_pane_cp20_g4

0xacb5,	// (0x000a5201) bg_popup_sub_pane_cp20_g5

0xd915,	// (0x000a7e61) bg_popup_sub_pane_cp20_g6

0xd6e7,	// (0x000a7c33) bg_popup_sub_pane_cp20_g7

0xd6ef,	// (0x000a7c3b) bg_popup_sub_pane_cp20_g8

0xd6f7,	// (0x000a7c43) bg_popup_sub_pane_cp20_g9

0x0008,

0xf847,	// (0x000a9d93) bg_popup_sub_pane_cp20_g

0x6d73,	// (0x000a12bf) list_vitu2_match_list_item_pane_ParamLimits

0x6d73,	// (0x000a12bf) list_vitu2_match_list_item_pane

0x6d85,	// (0x000a12d1) list_vitu2_match_list_item_pane_t1

0x0f50,	// (0x0009b49c) bg_popup_sub_pane_cp21

0x6ddb,	// (0x000a1327) grid_vitu2_dropdown_list_pane

0x6de3,	// (0x000a132f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6de3,	// (0x000a132f) cell_vitu2_dropdown_list_char_pane

0x6e04,	// (0x000a1350) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6e04,	// (0x000a1350) cell_vitu2_dropdown_list_ctrl_pane

0xd91d,	// (0x000a7e69) cell_vitu2_dropdown_list_char_pane_g1

0xd926,	// (0x000a7e72) cell_vitu2_dropdown_list_char_pane_g2

0xd92f,	// (0x000a7e7b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf864,	// (0x000a9db0) cell_vitu2_dropdown_list_char_pane_g

0x6e30,	// (0x000a137c) cell_vitu2_dropdown_list_char_pane_t1

0x6e3e,	// (0x000a138a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6e3e,	// (0x000a138a) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6e4e,	// (0x000a139a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6e4e,	// (0x000a139a) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6e5f,	// (0x000a13ab) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6e5f,	// (0x000a13ab) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6e6f,	// (0x000a13bb) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6e6f,	// (0x000a13bb) cell_vitu2_dropdown_list_ctrl_pane_g4

0x621a,	// (0x000a0766) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x621a,	// (0x000a0766) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf86b,	// (0x000a9db7) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf86b,	// (0x000a9db7) cell_vitu2_dropdown_list_ctrl_pane_g

0x6e8b,	// (0x000a13d7) aid_size_cell_gallery2_ParamLimits

0x6e8b,	// (0x000a13d7) aid_size_cell_gallery2

0x6ea5,	// (0x000a13f1) grid_gallery2_pane_ParamLimits

0x6ea5,	// (0x000a13f1) grid_gallery2_pane

0x6ebc,	// (0x000a1408) scroll_pane_cp029_ParamLimits

0x6ebc,	// (0x000a1408) scroll_pane_cp029

0x6ecc,	// (0x000a1418) cell_gallery2_pane_ParamLimits

0x6ecc,	// (0x000a1418) cell_gallery2_pane

0xd938,	// (0x000a7e84) cell_gallery2_pane_g2

0x6f21,	// (0x000a146d) cell_gallery2_pane_g3

0xd940,	// (0x000a7e8c) cell_gallery2_pane_g4

0xd948,	// (0x000a7e94) cell_gallery2_pane_g5

0xaa7c,	// (0x000a4fc8) grid_highlight_pane_cp10

0x64c6,	// (0x000a0a12) popup_vitu2_match_list_window_ParamLimits

0x64d8,	// (0x000a0a24) popup_vitu2_query_window_ParamLimits

0x64d8,	// (0x000a0a24) popup_vitu2_query_window

0x0f50,	// (0x0009b49c) bg_vitu2_candi_button_pane

0xd91d,	// (0x000a7e69) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd926,	// (0x000a7e72) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd92f,	// (0x000a7e7b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6f29,	// (0x000a1475) bg_button_pane_cp015

0x6f3b,	// (0x000a1487) bg_button_pane_cp016

0x6f4e,	// (0x000a149a) bg_button_pane_cp017

0xc914,	// (0x000a6e60) bg_popup_sub_pane_cp22

0xd950,	// (0x000a7e9c) popup_vitu2_query_window_g1

0x6f93,	// (0x000a14df) popup_vitu2_query_window_g2

0x0002,

0xf876,	// (0x000a9dc2) popup_vitu2_query_window_g

0x6fb0,	// (0x000a14fc) popup_vitu2_query_window_t1_ParamLimits

0x6fb0,	// (0x000a14fc) popup_vitu2_query_window_t1

0x6fe3,	// (0x000a152f) popup_vitu2_query_window_t2_ParamLimits

0x6fe3,	// (0x000a152f) popup_vitu2_query_window_t2

0x6ff5,	// (0x000a1541) popup_vitu2_query_window_t3_ParamLimits

0x6ff5,	// (0x000a1541) popup_vitu2_query_window_t3

0x701d,	// (0x000a1569) popup_vitu2_query_window_t4_ParamLimits

0x701d,	// (0x000a1569) popup_vitu2_query_window_t4

0x703e,	// (0x000a158a) popup_vitu2_query_window_t5_ParamLimits

0x703e,	// (0x000a158a) popup_vitu2_query_window_t5

0x0006,

0xf87d,	// (0x000a9dc9) popup_vitu2_query_window_t_ParamLimits

0xf87d,	// (0x000a9dc9) popup_vitu2_query_window_t

0xd7c9,	// (0x000a7d15) main_cset_text_pane

0x68ca,	// (0x000a0e16) aid_area_touch_slider_ParamLimits

0x68e6,	// (0x000a0e32) cset_slider_pane_ParamLimits

0x6910,	// (0x000a0e5c) main_cset_slider_pane_g1_ParamLimits

0x6925,	// (0x000a0e71) main_cset_slider_pane_g2_ParamLimits

0xd7ea,	// (0x000a7d36) main_cset_slider_pane_g3_ParamLimits

0xd7ea,	// (0x000a7d36) main_cset_slider_pane_g3

0x693a,	// (0x000a0e86) main_cset_slider_pane_g4_ParamLimits

0x693a,	// (0x000a0e86) main_cset_slider_pane_g4

0x6949,	// (0x000a0e95) main_cset_slider_pane_g5_ParamLimits

0x6949,	// (0x000a0e95) main_cset_slider_pane_g5

0x6957,	// (0x000a0ea3) main_cset_slider_pane_g6_ParamLimits

0x6957,	// (0x000a0ea3) main_cset_slider_pane_g6

0xf7d7,	// (0x000a9d23) main_cset_slider_pane_g_ParamLimits

0xd844,	// (0x000a7d90) main_cset_slider_pane_t1_ParamLimits

0x69eb,	// (0x000a0f37) main_cset_slider_pane_t2_ParamLimits

0x6a05,	// (0x000a0f51) main_cset_slider_pane_t3_ParamLimits

0x6a1f,	// (0x000a0f6b) main_cset_slider_pane_t4_ParamLimits

0x6a3d,	// (0x000a0f89) main_cset_slider_pane_t5_ParamLimits

0x6a5b,	// (0x000a0fa7) main_cset_slider_pane_t6_ParamLimits

0x6a72,	// (0x000a0fbe) main_cset_slider_pane_t7_ParamLimits

0x6aa0,	// (0x000a0fec) main_cset_slider_pane_t8_ParamLimits

0x6aa0,	// (0x000a0fec) main_cset_slider_pane_t8

0x6ac8,	// (0x000a1014) main_cset_slider_pane_t9_ParamLimits

0x6ac8,	// (0x000a1014) main_cset_slider_pane_t9

0x6af0,	// (0x000a103c) main_cset_slider_pane_t10_ParamLimits

0x6af0,	// (0x000a103c) main_cset_slider_pane_t10

0x6b18,	// (0x000a1064) main_cset_slider_pane_t11_ParamLimits

0x6b18,	// (0x000a1064) main_cset_slider_pane_t11

0x6b42,	// (0x000a108e) main_cset_slider_pane_t12_ParamLimits

0x6b42,	// (0x000a108e) main_cset_slider_pane_t12

0x6b61,	// (0x000a10ad) main_cset_slider_pane_t13_ParamLimits

0x6b61,	// (0x000a10ad) main_cset_slider_pane_t13

0xf7fc,	// (0x000a9d48) main_cset_slider_pane_t_ParamLimits

0x9be6,	// (0x000a4132) bg_popup_sub_pane_cp011

0xd95c,	// (0x000a7ea8) main_cset_text_pane_g1

0xd964,	// (0x000a7eb0) main_cset_text_pane_t1

0xd972,	// (0x000a7ebe) main_cset_text_pane_t2

0xd980,	// (0x000a7ecc) main_cset_text_pane_t3

0xd98e,	// (0x000a7eda) main_cset_text_pane_t4

0xd99c,	// (0x000a7ee8) main_cset_text_pane_t5

0xd9aa,	// (0x000a7ef6) main_cset_text_pane_t6

0xd9b8,	// (0x000a7f04) main_cset_text_pane_t7

0x0006,

0xf88c,	// (0x000a9dd8) main_cset_text_pane_t

0x0f50,	// (0x0009b49c) main_cam4_burst_pane

0x0f50,	// (0x0009b49c) main_cam5_pane

0x6819,	// (0x000a0d65) bg_button_pane_cp019

0x6822,	// (0x000a0d6e) bg_button_pane_cp020

0xd7f6,	// (0x000a7d42) main_cset_slider_pane_g7_ParamLimits

0xd7f6,	// (0x000a7d42) main_cset_slider_pane_g7

0xd802,	// (0x000a7d4e) main_cset_slider_pane_g8_ParamLimits

0xd802,	// (0x000a7d4e) main_cset_slider_pane_g8

0x696b,	// (0x000a0eb7) main_cset_slider_pane_g9_ParamLimits

0x696b,	// (0x000a0eb7) main_cset_slider_pane_g9

0x6977,	// (0x000a0ec3) main_cset_slider_pane_g10_ParamLimits

0x6977,	// (0x000a0ec3) main_cset_slider_pane_g10

0x6983,	// (0x000a0ecf) main_cset_slider_pane_g11_ParamLimits

0x6983,	// (0x000a0ecf) main_cset_slider_pane_g11

0x698f,	// (0x000a0edb) main_cset_slider_pane_g12_ParamLimits

0x698f,	// (0x000a0edb) main_cset_slider_pane_g12

0x699b,	// (0x000a0ee7) main_cset_slider_pane_g13_ParamLimits

0x699b,	// (0x000a0ee7) main_cset_slider_pane_g13

0x69a9,	// (0x000a0ef5) main_cset_slider_pane_g14_ParamLimits

0x69a9,	// (0x000a0ef5) main_cset_slider_pane_g14

0x69b7,	// (0x000a0f03) main_cset_slider_pane_g15_ParamLimits

0x69b7,	// (0x000a0f03) main_cset_slider_pane_g15

0xd872,	// (0x000a7dbe) main_cset_slider_pane_t14_ParamLimits

0xd872,	// (0x000a7dbe) main_cset_slider_pane_t14

0xd8ab,	// (0x000a7df7) main_cset_slider_pane_t15_ParamLimits

0xd8ab,	// (0x000a7df7) main_cset_slider_pane_t15

0x70b5,	// (0x000a1601) aid_cam4_burst_size_cell_ParamLimits

0x70b5,	// (0x000a1601) aid_cam4_burst_size_cell

0x70d1,	// (0x000a161d) grid_cam4_burst_pane_ParamLimits

0x70d1,	// (0x000a161d) grid_cam4_burst_pane

0x7101,	// (0x000a164d) linegrid_cam4_burst_pane_ParamLimits

0x7101,	// (0x000a164d) linegrid_cam4_burst_pane

0x7121,	// (0x000a166d) scroll_pane_cp30_ParamLimits

0x7121,	// (0x000a166d) scroll_pane_cp30

0x712d,	// (0x000a1679) cell_cam4_burst_pane_ParamLimits

0x712d,	// (0x000a1679) cell_cam4_burst_pane

0xd9c6,	// (0x000a7f12) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9c6,	// (0x000a7f12) linegrid_cam4_burst_pane_g1

0x7169,	// (0x000a16b5) linegrid_cam4_burst_pane_g2_ParamLimits

0x7169,	// (0x000a16b5) linegrid_cam4_burst_pane_g2

0xd9d3,	// (0x000a7f1f) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9d3,	// (0x000a7f1f) linegrid_cam4_burst_pane_g3

0x0002,

0xf89b,	// (0x000a9de7) linegrid_cam4_burst_pane_g_ParamLimits

0xf89b,	// (0x000a9de7) linegrid_cam4_burst_pane_g

0x717a,	// (0x000a16c6) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x717a,	// (0x000a16c6) linegrid_cam4_burst_pane_g3_copy1

0xd9e0,	// (0x000a7f2c) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9e0,	// (0x000a7f2c) linegrid_cam4_burst_pane_g4

0x7194,	// (0x000a16e0) linegrid_cam4_burst_pane_g5_ParamLimits

0x7194,	// (0x000a16e0) linegrid_cam4_burst_pane_g5

0x71a5,	// (0x000a16f1) linegrid_cam4_burst_pane_g6_ParamLimits

0x71a5,	// (0x000a16f1) linegrid_cam4_burst_pane_g6

0xd9ed,	// (0x000a7f39) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9ed,	// (0x000a7f39) linegrid_cam4_burst_pane_g7

0x71b6,	// (0x000a1702) cell_cam4_burst_pane_g1

0xda06,	// (0x000a7f52) main_cam5_pane_t1_ParamLimits

0xda06,	// (0x000a7f52) main_cam5_pane_t1

0xda18,	// (0x000a7f64) main_cam5_pane_t2_ParamLimits

0xda18,	// (0x000a7f64) main_cam5_pane_t2

0xda2a,	// (0x000a7f76) main_cam5_pane_t3_ParamLimits

0xda2a,	// (0x000a7f76) main_cam5_pane_t3

0xda3c,	// (0x000a7f88) main_cam5_pane_t4_ParamLimits

0xda3c,	// (0x000a7f88) main_cam5_pane_t4

0xda54,	// (0x000a7fa0) main_cam5_pane_t5_ParamLimits

0xda54,	// (0x000a7fa0) main_cam5_pane_t5

0xda68,	// (0x000a7fb4) main_cam5_pane_t6_ParamLimits

0xda68,	// (0x000a7fb4) main_cam5_pane_t6

0xda7c,	// (0x000a7fc8) main_cam5_pane_t7_ParamLimits

0xda7c,	// (0x000a7fc8) main_cam5_pane_t7

0xda8e,	// (0x000a7fda) main_cam5_pane_t8_ParamLimits

0xda8e,	// (0x000a7fda) main_cam5_pane_t8

0xdaaa,	// (0x000a7ff6) main_cam5_pane_t9_ParamLimits

0xdaaa,	// (0x000a7ff6) main_cam5_pane_t9

0xdabc,	// (0x000a8008) main_cam5_pane_t10_ParamLimits

0xdabc,	// (0x000a8008) main_cam5_pane_t10

0xdace,	// (0x000a801a) main_cam5_pane_t11_ParamLimits

0xdace,	// (0x000a801a) main_cam5_pane_t11

0xdae0,	// (0x000a802c) main_cam5_pane_t12_ParamLimits

0xdae0,	// (0x000a802c) main_cam5_pane_t12

0xdaf5,	// (0x000a8041) main_cam5_pane_t13_ParamLimits

0xdaf5,	// (0x000a8041) main_cam5_pane_t13

0x000c,

0xf8a7,	// (0x000a9df3) main_cam5_pane_t_ParamLimits

0xf8a7,	// (0x000a9df3) main_cam5_pane_t

0x0ef5,	// (0x0009b441) popup_scut_keymap_window_ParamLimits

0x0ef5,	// (0x0009b441) popup_scut_keymap_window

0x71c9,	// (0x000a1715) aid_size_cell_brow_shortcut

0xaa7c,	// (0x000a4fc8) bg_popup_window_pane_cp010

0x71d5,	// (0x000a1721) grid_scut_pane

0x71e1,	// (0x000a172d) cell_scut_pane_ParamLimits

0x71e1,	// (0x000a172d) cell_scut_pane

0x71f8,	// (0x000a1744) cell_scut_pane_g1

0xdb12,	// (0x000a805e) cell_scut_pane_t1

0xdb21,	// (0x000a806d) cell_scut_pane_t2

0x7201,	// (0x000a174d) cell_scut_pane_t3

0x0002,

0xf8c2,	// (0x000a9e0e) cell_scut_pane_t

0x4eac,	// (0x0009f3f8) main_mup3_pane_g8_ParamLimits

0x4eac,	// (0x0009f3f8) main_mup3_pane_g8

0x63ec,	// (0x000a0938) area_vitu2_query_pane_ParamLimits

0x63ec,	// (0x000a0938) area_vitu2_query_pane

0x6f61,	// (0x000a14ad) input_focus_pane_cp08

0xdb6e,	// (0x000a80ba) area_vitu2_query_pane_g1

0x720f,	// (0x000a175b) area_vitu2_query_pane_g2

0x0001,

0xf8c9,	// (0x000a9e15) area_vitu2_query_pane_g

0x7220,	// (0x000a176c) area_vitu2_query_pane_t1_ParamLimits

0x7220,	// (0x000a176c) area_vitu2_query_pane_t1

0x7234,	// (0x000a1780) area_vitu2_query_pane_t2_ParamLimits

0x7234,	// (0x000a1780) area_vitu2_query_pane_t2

0x7248,	// (0x000a1794) area_vitu2_query_pane_t3_ParamLimits

0x7248,	// (0x000a1794) area_vitu2_query_pane_t3

0xa068,	// (0x000a45b4) area_vitu2_query_pane_t4_ParamLimits

0xa068,	// (0x000a45b4) area_vitu2_query_pane_t4

0xa090,	// (0x000a45dc) area_vitu2_query_pane_t5_ParamLimits

0xa090,	// (0x000a45dc) area_vitu2_query_pane_t5

0xa0b8,	// (0x000a4604) area_vitu2_query_pane_t6_ParamLimits

0xa0b8,	// (0x000a4604) area_vitu2_query_pane_t6

0x0006,

0xf8ce,	// (0x000a9e1a) area_vitu2_query_pane_t_ParamLimits

0xf8ce,	// (0x000a9e1a) area_vitu2_query_pane_t

0x7270,	// (0x000a17bc) bg_button_pane_cp018

0x727e,	// (0x000a17ca) bg_button_pane_cp021

0x728a,	// (0x000a17d6) bg_button_pane_cp022

0x729b,	// (0x000a17e7) input_focus_pane_cp09

0xb31e,	// (0x000a586a) aid_size_touch_mv_arrow_left

0xb349,	// (0x000a5895) aid_size_touch_mv_arrow_right

0x69cf,	// (0x000a0f1b) main_cset_slider_pane_g16_ParamLimits

0x69cf,	// (0x000a0f1b) main_cset_slider_pane_g16

0x69dd,	// (0x000a0f29) main_cset_slider_pane_g17_ParamLimits

0x69dd,	// (0x000a0f29) main_cset_slider_pane_g17

0x71b6,	// (0x000a1702) cell_cam4_burst_pane_g1_ParamLimits

0x9be6,	// (0x000a4132) compa_mode_pane

0x6c34,	// (0x000a1180) popup_vtel_slider_window_g3_ParamLimits

0x6c34,	// (0x000a1180) popup_vtel_slider_window_g3

0x6c48,	// (0x000a1194) popup_vtel_slider_window_g4_ParamLimits

0x6c48,	// (0x000a1194) popup_vtel_slider_window_g4

0x6c5c,	// (0x000a11a8) popup_vtel_slider_window_t1_ParamLimits

0x6c5c,	// (0x000a11a8) popup_vtel_slider_window_t1

0x0f50,	// (0x0009b49c) main_cl_pane

0x41e6,	// (0x0009e732) popup_imed_adjust2_window_ParamLimits

0xc914,	// (0x000a6e60) bg_tb_trans_pane_cp05_ParamLimits

0xd221,	// (0x000a776d) popup_imed_adjust2_window_g1_ParamLimits

0xd230,	// (0x000a777c) popup_imed_adjust2_window_g2_ParamLimits

0xd230,	// (0x000a777c) popup_imed_adjust2_window_g2

0xd23c,	// (0x000a7788) popup_imed_adjust2_window_g3_ParamLimits

0xd23c,	// (0x000a7788) popup_imed_adjust2_window_g3

0x0002,

0x0426,	// (0x0009a972) popup_imed_adjust2_window_g_ParamLimits

0x0426,	// (0x0009a972) popup_imed_adjust2_window_g

0xd248,	// (0x000a7794) popup_imed_adjust2_window_t1_ParamLimits

0xd260,	// (0x000a77ac) slider_imed_adjust_pane_ParamLimits

0xd274,	// (0x000a77c0) slider_imed_adjust_pane_g1_ParamLimits

0xd284,	// (0x000a77d0) slider_imed_adjust_pane_g2_ParamLimits

0xd294,	// (0x000a77e0) slider_imed_adjust_pane_g3_ParamLimits

0xd2a5,	// (0x000a77f1) slider_imed_adjust_pane_g4_ParamLimits

0x042d,	// (0x0009a979) slider_imed_adjust_pane_g_ParamLimits

0x612f,	// (0x000a067b) aid_touch_area_cam4_ParamLimits

0x612f,	// (0x000a067b) aid_touch_area_cam4

0x613f,	// (0x000a068b) battery_pane_cp01

0x61c6,	// (0x000a0712) main_camera4_pane_g6_ParamLimits

0x61c6,	// (0x000a0712) main_camera4_pane_g6

0x61e4,	// (0x000a0730) main_camera4_pane_t2_ParamLimits

0x61e4,	// (0x000a0730) main_camera4_pane_t2

0x0001,

0xf74a,	// (0x000a9c96) main_camera4_pane_t_ParamLimits

0xf74a,	// (0x000a9c96) main_camera4_pane_t

0x6273,	// (0x000a07bf) aid_touch_area_vid4_ParamLimits

0x6273,	// (0x000a07bf) aid_touch_area_vid4

0x62b3,	// (0x000a07ff) main_video4_pane_g5_ParamLimits

0x62b3,	// (0x000a07ff) main_video4_pane_g5

0x62d7,	// (0x000a0823) vid4_progress_pane_ParamLimits

0x62d7,	// (0x000a0823) vid4_progress_pane

0xd80e,	// (0x000a7d5a) main_cset_slider_pane_g18_ParamLimits

0xd80e,	// (0x000a7d5a) main_cset_slider_pane_g18

0xd9fa,	// (0x000a7f46) cell_cam4_burst_pane_g2_ParamLimits

0xd9fa,	// (0x000a7f46) cell_cam4_burst_pane_g2

0x0001,

0xf8a2,	// (0x000a9dee) cell_cam4_burst_pane_g_ParamLimits

0xf8a2,	// (0x000a9dee) cell_cam4_burst_pane_g

0x72ac,	// (0x000a17f8) bg_cl_pane_ParamLimits

0x72ac,	// (0x000a17f8) bg_cl_pane

0x72b8,	// (0x000a1804) cl_header_pane_ParamLimits

0x72b8,	// (0x000a1804) cl_header_pane

0x72c4,	// (0x000a1810) cl_listscroll_pane_ParamLimits

0x72c4,	// (0x000a1810) cl_listscroll_pane

0xdb7a,	// (0x000a80c6) bg_cl_pane_g1

0xdb82,	// (0x000a80ce) bg_cl_pane_g2

0xdb8a,	// (0x000a80d6) bg_cl_pane_g3

0xdb92,	// (0x000a80de) bg_cl_pane_g4

0xdb9a,	// (0x000a80e6) bg_cl_pane_g5

0xdba2,	// (0x000a80ee) bg_cl_pane_g6

0xdbaa,	// (0x000a80f6) bg_cl_pane_g7

0xdbb2,	// (0x000a80fe) bg_cl_pane_g8

0xdbba,	// (0x000a8106) bg_cl_pane_g9

0x0008,

0xf8dd,	// (0x000a9e29) bg_cl_pane_g

0x72d0,	// (0x000a181c) aid_height_cl_leading_ParamLimits

0x72d0,	// (0x000a181c) aid_height_cl_leading

0x72dc,	// (0x000a1828) aid_height_cl_text_ParamLimits

0x72dc,	// (0x000a1828) aid_height_cl_text

0xea90,	// (0x000a8fdc) bg_cl_header_pane_ParamLimits

0xea90,	// (0x000a8fdc) bg_cl_header_pane

0x72f4,	// (0x000a1840) cl_header_pane_g1_ParamLimits

0x72f4,	// (0x000a1840) cl_header_pane_g1

0x7301,	// (0x000a184d) cl_header_pane_t1_ParamLimits

0x7301,	// (0x000a184d) cl_header_pane_t1

0xdbc2,	// (0x000a810e) cl_list_pane

0xd7e1,	// (0x000a7d2d) hc_scroll_pane_cp01

0xacb5,	// (0x000a5201) bg_cl_header_pane_g1

0xd6c7,	// (0x000a7c13) bg_cl_header_pane_g2

0xacd5,	// (0x000a5221) bg_cl_header_pane_g3

0xd6d7,	// (0x000a7c23) bg_cl_header_pane_g4

0xd6cf,	// (0x000a7c1b) bg_cl_header_pane_g5

0xd915,	// (0x000a7e61) bg_cl_header_pane_g6

0xd6ef,	// (0x000a7c3b) bg_cl_header_pane_g7

0xd6f7,	// (0x000a7c43) bg_cl_header_pane_g8

0xd6e7,	// (0x000a7c33) bg_cl_header_pane_g9

0x0008,

0xf8f0,	// (0x000a9e3c) bg_cl_header_pane_g

0x7313,	// (0x000a185f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7313,	// (0x000a185f) hc_cl_list_double_graphic_heading_pane

0x7327,	// (0x000a1873) hc_cl_list_single_graphic_pane_ParamLimits

0x7327,	// (0x000a1873) hc_cl_list_single_graphic_pane

0x7341,	// (0x000a188d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7341,	// (0x000a188d) hc_cl_list_single_graphic_pane_g1

0x734d,	// (0x000a1899) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x734d,	// (0x000a1899) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf903,	// (0x000a9e4f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf903,	// (0x000a9e4f) hc_cl_list_single_graphic_pane_g

0x7361,	// (0x000a18ad) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7361,	// (0x000a18ad) hc_cl_list_single_graphic_pane_t1

0x7341,	// (0x000a188d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7341,	// (0x000a188d) hc_cl_list_double_graphic_heading_pane_g1

0x7376,	// (0x000a18c2) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7376,	// (0x000a18c2) hc_cl_list_double_graphic_heading_pane_g2

0x738a,	// (0x000a18d6) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x738a,	// (0x000a18d6) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf908,	// (0x000a9e54) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf908,	// (0x000a9e54) hc_cl_list_double_graphic_heading_pane_g

0x739e,	// (0x000a18ea) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x739e,	// (0x000a18ea) hc_cl_list_double_graphic_heading_pane_t1

0x73b3,	// (0x000a18ff) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x73b3,	// (0x000a18ff) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf90f,	// (0x000a9e5b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf90f,	// (0x000a9e5b) hc_cl_list_double_graphic_heading_pane_t

0x73d0,	// (0x000a191c) vid4_progress_pane_g1

0x73e0,	// (0x000a192c) vid4_progress_pane_g2

0x73f0,	// (0x000a193c) vid4_progress_pane_g3

0x7402,	// (0x000a194e) vid4_progress_pane_g4

0x0004,

0xf914,	// (0x000a9e60) vid4_progress_pane_g

0x741a,	// (0x000a1966) vid4_progress_pane_t1

0x7430,	// (0x000a197c) vid4_progress_pane_t2

0x0002,

0xf91f,	// (0x000a9e6b) vid4_progress_pane_t

0x745b,	// (0x000a19a7) wait_bar_pane_cp07

0xcb0f,	// (0x000a705b) blid_firmament_pane_ParamLimits

0xcb52,	// (0x000a709e) popup_blid_sat_info2_window_g1

0xcb76,	// (0x000a70c2) popup_blid_sat_info2_window_t3

0xcb84,	// (0x000a70d0) popup_blid_sat_info2_window_t4

0xcb92,	// (0x000a70de) popup_blid_sat_info2_window_t5

0xcba0,	// (0x000a70ec) popup_blid_sat_info2_window_t6

0xcbb0,	// (0x000a70fc) popup_blid_sat_info2_window_t7

0xcbbe,	// (0x000a710a) popup_blid_sat_info2_window_t8

0xcbcc,	// (0x000a7118) popup_blid_sat_info2_window_t9

0xcbda,	// (0x000a7126) popup_blid_sat_info2_window_t10

0xcc9c,	// (0x000a71e8) aid_firma_cardinal_ParamLimits

0xccb0,	// (0x000a71fc) blid_firmament_pane_t1_ParamLimits

0xccc7,	// (0x000a7213) blid_firmament_pane_t2_ParamLimits

0xccde,	// (0x000a722a) blid_firmament_pane_t3_ParamLimits

0xccf5,	// (0x000a7241) blid_firmament_pane_t4_ParamLimits

0x031a,	// (0x0009a866) blid_firmament_pane_t_ParamLimits

0xcd0c,	// (0x000a7258) blid_sat_info_pane_ParamLimits

0x414c,	// (0x0009e698) main_cam_set_pane_ParamLimits

0x567b,	// (0x0009fbc7) aid_size_cell_colour_35_ParamLimits

0x5695,	// (0x0009fbe1) aid_size_cell_colour_112_ParamLimits

0x56ac,	// (0x0009fbf8) aid_size_cell_effect_ParamLimits

0xa57e,	// (0x000a4aca) bg_tb_trans_pane_cp02_ParamLimits

0xafeb,	// (0x000a5537) heading_imed_pane_ParamLimits

0x56c6,	// (0x0009fc12) listscroll_imed_pane_ParamLimits

0xbf00,	// (0x000a644c) popup_call2_audio_first_window_g5_ParamLimits

0xbf00,	// (0x000a644c) popup_call2_audio_first_window_g5

0x5e15,	// (0x000a0361) aid_size_touch_image3_arrow_left_ParamLimits

0x5e15,	// (0x000a0361) aid_size_touch_image3_arrow_left

0x5e2b,	// (0x000a0377) aid_size_touch_image3_arrow_right_ParamLimits

0x5e2b,	// (0x000a0377) aid_size_touch_image3_arrow_right

0x7445,	// (0x000a1991) vid4_progress_pane_t3

0x5966,	// (0x0009feb2) main_hwr_training_symbol_option_pane_ParamLimits

0x5966,	// (0x0009feb2) main_hwr_training_symbol_option_pane

0xd50e,	// (0x000a7a5a) popup_hwr_training_preview_window_ParamLimits

0xd50e,	// (0x000a7a5a) popup_hwr_training_preview_window

0x59c7,	// (0x0009ff13) hwr_training_navi_pane_g5_ParamLimits

0x59c7,	// (0x0009ff13) hwr_training_navi_pane_g5

0xd6b5,	// (0x000a7c01) popup_char_count_window

0x0f36,	// (0x0009b482) bg_popup_sub_pane_cp20_ParamLimits

0x6d5b,	// (0x000a12a7) list_vitu2_match_list_pane_ParamLimits

0x6d67,	// (0x000a12b3) vitu2_page_scroll_pane_ParamLimits

0x6d67,	// (0x000a12b3) vitu2_page_scroll_pane

0xdbcb,	// (0x000a8117) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbcb,	// (0x000a8117) list_single_hwr_training_symbol_option_pane

0xdbde,	// (0x000a812a) list_single_hwr_training_symbol_option_pane_g1

0xdbe6,	// (0x000a8132) list_single_hwr_training_symbol_option_pane_t1

0xdbf4,	// (0x000a8140) bg_button_pane_cp023

0xdbfd,	// (0x000a8149) bg_button_pane_cp024

0x74a4,	// (0x000a19f0) vitu2_page_scroll_pane_g1

0x74ac,	// (0x000a19f8) vitu2_page_scroll_pane_g2

0x0001,

0xf926,	// (0x000a9e72) vitu2_page_scroll_pane_g

0x74b4,	// (0x000a1a00) vitu2_page_scroll_pane_t1

0xa9a5,	// (0x000a4ef1) popup_char_count_window_g1

0xdc30,	// (0x000a817c) popup_char_count_window_g2

0xd52b,	// (0x000a7a77) popup_char_count_window_g3

0x0002,

0xf92b,	// (0x000a9e77) popup_char_count_window_g

0xdc39,	// (0x000a8185) popup_char_count_window_t1

0x0f50,	// (0x0009b49c) main_vded2_pane

0xd20d,	// (0x000a7759) aid_size_cell_imed_line

0xd217,	// (0x000a7763) grid_imed_line_width_pane

0x6343,	// (0x000a088f) vid4_indicators_pane_g4

0xdc47,	// (0x000a8193) cell_imed_line_width_pane_ParamLimits

0xdc47,	// (0x000a8193) cell_imed_line_width_pane

0xdc5b,	// (0x000a81a7) cell_imed_line_width_pane_g1

0xdb4e,	// (0x000a809a) cell_imed_line_width_pane_g2

0x0001,

0xf932,	// (0x000a9e7e) cell_imed_line_width_pane_g

0x74c3,	// (0x000a1a0f) main_vded2_pane_g1_ParamLimits

0x74c3,	// (0x000a1a0f) main_vded2_pane_g1

0x74d0,	// (0x000a1a1c) main_vded2_pane_g2_ParamLimits

0x74d0,	// (0x000a1a1c) main_vded2_pane_g2

0x0001,

0xf937,	// (0x000a9e83) main_vded2_pane_g_ParamLimits

0xf937,	// (0x000a9e83) main_vded2_pane_g

0x74de,	// (0x000a1a2a) vded2_slider_pane_ParamLimits

0x74de,	// (0x000a1a2a) vded2_slider_pane

0x74eb,	// (0x000a1a37) aid_size_touch_vded2_end

0x74f5,	// (0x000a1a41) aid_size_touch_vded2_playhead

0xdc64,	// (0x000a81b0) aid_size_touch_vded2_start

0xdc6c,	// (0x000a81b8) vded2_slider_bg_pane

0xdc75,	// (0x000a81c1) vded2_slider_pane_g1

0xdc7e,	// (0x000a81ca) vded2_slider_pane_g2

0x74fd,	// (0x000a1a49) vded2_slider_pane_g3

0x0002,

0xf93c,	// (0x000a9e88) vded2_slider_pane_g

0xdc86,	// (0x000a81d2) vded2_slider_bg_pane_g1

0xdc8f,	// (0x000a81db) vded2_slider_bg_pane_g2

0xdc98,	// (0x000a81e4) vded2_slider_bg_pane_g3

0x0002,

0xf943,	// (0x000a9e8f) vded2_slider_bg_pane_g

0x3a2f,	// (0x0009df7b) aid_postcard_touch_down_pane_ParamLimits

0x3a2f,	// (0x0009df7b) aid_postcard_touch_down_pane

0x3a3f,	// (0x0009df8b) aid_postcard_touch_up_pane_ParamLimits

0x3a3f,	// (0x0009df8b) aid_postcard_touch_up_pane

0x0f50,	// (0x0009b49c) main_blid2_pane

0x4175,	// (0x0009e6c1) popup_blid2_search_window

0x9be6,	// (0x000a4132) blid2_gps_pane

0x9be6,	// (0x000a4132) blid2_navig_pane

0x9be6,	// (0x000a4132) blid2_search_pane

0x9be6,	// (0x000a4132) blid2_tripm_pane

0x7506,	// (0x000a1a52) blid2_search_pane_g1_ParamLimits

0x7506,	// (0x000a1a52) blid2_search_pane_g1

0x7516,	// (0x000a1a62) blid2_search_pane_t1_ParamLimits

0x7516,	// (0x000a1a62) blid2_search_pane_t1

0x7528,	// (0x000a1a74) aid_size_cell_blid2_gps_ParamLimits

0x7528,	// (0x000a1a74) aid_size_cell_blid2_gps

0x7538,	// (0x000a1a84) blid2_gps_pane_g1_ParamLimits

0x7538,	// (0x000a1a84) blid2_gps_pane_g1

0x7544,	// (0x000a1a90) grid_blid2_satellite_pane_ParamLimits

0x7544,	// (0x000a1a90) grid_blid2_satellite_pane

0x7554,	// (0x000a1aa0) blid2_navig_pane_g1_ParamLimits

0x7554,	// (0x000a1aa0) blid2_navig_pane_g1

0x7560,	// (0x000a1aac) blid2_navig_pane_t1_ParamLimits

0x7560,	// (0x000a1aac) blid2_navig_pane_t1

0x7572,	// (0x000a1abe) blid2_navig_pane_t2_ParamLimits

0x7572,	// (0x000a1abe) blid2_navig_pane_t2

0x0001,

0xf94a,	// (0x000a9e96) blid2_navig_pane_t_ParamLimits

0xf94a,	// (0x000a9e96) blid2_navig_pane_t

0x7584,	// (0x000a1ad0) blid2_navig_ring_pane_ParamLimits

0x7584,	// (0x000a1ad0) blid2_navig_ring_pane

0x7594,	// (0x000a1ae0) blid2_speed_pane_ParamLimits

0x7594,	// (0x000a1ae0) blid2_speed_pane

0x75a0,	// (0x000a1aec) blid2_tripm_pane_g1_ParamLimits

0x75a0,	// (0x000a1aec) blid2_tripm_pane_g1

0x75b0,	// (0x000a1afc) blid2_tripm_pane_g2_ParamLimits

0x75b0,	// (0x000a1afc) blid2_tripm_pane_g2

0x75bc,	// (0x000a1b08) blid2_tripm_pane_g3_ParamLimits

0x75bc,	// (0x000a1b08) blid2_tripm_pane_g3

0x75c8,	// (0x000a1b14) blid2_tripm_pane_g4_ParamLimits

0x75c8,	// (0x000a1b14) blid2_tripm_pane_g4

0x75d4,	// (0x000a1b20) blid2_tripm_pane_g5_ParamLimits

0x75d4,	// (0x000a1b20) blid2_tripm_pane_g5

0x0005,

0xf94f,	// (0x000a9e9b) blid2_tripm_pane_g_ParamLimits

0xf94f,	// (0x000a9e9b) blid2_tripm_pane_g

0x75f0,	// (0x000a1b3c) blid2_tripm_pane_t1_ParamLimits

0x75f0,	// (0x000a1b3c) blid2_tripm_pane_t1

0x7604,	// (0x000a1b50) blid2_tripm_pane_t2_ParamLimits

0x7604,	// (0x000a1b50) blid2_tripm_pane_t2

0x7616,	// (0x000a1b62) blid2_tripm_pane_t3_ParamLimits

0x7616,	// (0x000a1b62) blid2_tripm_pane_t3

0x0003,

0xf95c,	// (0x000a9ea8) blid2_tripm_pane_t_ParamLimits

0xf95c,	// (0x000a9ea8) blid2_tripm_pane_t

0x7648,	// (0x000a1b94) cell_blid2_satellite_pane_ParamLimits

0x7648,	// (0x000a1b94) cell_blid2_satellite_pane

0x7662,	// (0x000a1bae) cell_blid2_satellite_pane_g1

0xdca1,	// (0x000a81ed) cell_blid2_satellite_pane_t1

0xcd1c,	// (0x000a7268) blid2_speed_pane_g1

0xdcaf,	// (0x000a81fb) blid2_speed_pane_t1

0xdcbd,	// (0x000a8209) blid2_speed_pane_t2

0x0001,

0xf965,	// (0x000a9eb1) blid2_speed_pane_t

0xcd1c,	// (0x000a7268) blid2_navig_ring_pane_g1

0x766b,	// (0x000a1bb7) blid2_navig_ring_pane_g2

0x7673,	// (0x000a1bbf) blid2_navig_ring_pane_g3

0x767b,	// (0x000a1bc7) blid2_navig_ring_pane_g4

0x7683,	// (0x000a1bcf) blid2_navig_ring_pane_g5

0x0004,

0xf96a,	// (0x000a9eb6) blid2_navig_ring_pane_g

0x9be6,	// (0x000a4132) bg_popup_window_pane_cp011

0xdccb,	// (0x000a8217) popup_blid2_search_window_g1

0xdcd3,	// (0x000a821f) popup_blid2_search_window_t1

0xdce1,	// (0x000a822d) popup_blid2_search_window_t2

0x0001,

0xf975,	// (0x000a9ec1) popup_blid2_search_window_t

0xabc4,	// (0x000a5110) main_browser_pane_g1

0xa890,	// (0x000a4ddc) main_browser_pane_ParamLimits

0x414c,	// (0x0009e698) bg_button_pane_cp011_ParamLimits

0x65ec,	// (0x000a0b38) cell_vitu2_function_pane_g1_ParamLimits

0xc914,	// (0x000a6e60) bg_popup_sub_pane_cp22_ParamLimits

0x6f61,	// (0x000a14ad) input_focus_pane_cp08_ParamLimits

0x6f78,	// (0x000a14c4) popup_vitu2_query_button_pane_ParamLimits

0x6f78,	// (0x000a14c4) popup_vitu2_query_button_pane

0x6f89,	// (0x000a14d5) popup_vitu2_query_input_button_pane

0xd950,	// (0x000a7e9c) popup_vitu2_query_window_g1_ParamLimits

0x6f93,	// (0x000a14df) popup_vitu2_query_window_g2_ParamLimits

0xf876,	// (0x000a9dc2) popup_vitu2_query_window_g_ParamLimits

0x9be6,	// (0x000a4132) bg_button_pane_cp026

0x768b,	// (0x000a1bd7) popup_vitu2_query_input_button_pane_g1

0x9be6,	// (0x000a4132) bg_button_pane_cp025

0xdcef,	// (0x000a823b) popup_vitu2_query_button_pane_t1

0x4bcd,	// (0x0009f119) main_mp3_pane_t6

0x4bdd,	// (0x0009f129) popup_slider_window_cp01

0x6228,	// (0x000a0774) cam4_battery_pane

0x6302,	// (0x000a084e) cam4_battery_pane_cp02

0x73c8,	// (0x000a1914) cam4_battery_pane_cp01

0x73c8,	// (0x000a1914) cam4_battery_pane_cp03

0xdb56,	// (0x000a80a2) cam4_battery_pane_g1

0xcd1c,	// (0x000a7268) cam4_battery_pane_g2

0x0001,

0xf97a,	// (0x000a9ec6) cam4_battery_pane_g

0xcbe8,	// (0x000a7134) popup_blid_sat_info2_window_t11

0xb31e,	// (0x000a586a) aid_size_touch_mv_arrow_left_ParamLimits

0xb349,	// (0x000a5895) aid_size_touch_mv_arrow_right_ParamLimits

0xb3a7,	// (0x000a58f3) navi_pane_g1_ParamLimits

0xb3b3,	// (0x000a58ff) navi_pane_g2_ParamLimits

0xb3e1,	// (0x000a592d) navi_pane_g3_ParamLimits

0xf3ca,	// (0x000a9916) navi_pane_g_ParamLimits

0x344b,	// (0x0009d997) navi_pane_mv_t1_ParamLimits

0x56d2,	// (0x0009fc1e) grid_imed_effect_pane_ParamLimits

0x1dc7,	// (0x0009c313) aid_placing_vt_slider_lsc

0xab13,	// (0x000a505f) aid_placing_vt_slider_prt

0xa57e,	// (0x000a4aca) bg_tb_trans_pane_cp01_ParamLimits

0xce81,	// (0x000a73cd) popup_image_details_window_g1_ParamLimits

0xce94,	// (0x000a73e0) popup_image_details_window_g2_ParamLimits

0xcea9,	// (0x000a73f5) popup_image_details_window_g3_ParamLimits

0xcea9,	// (0x000a73f5) popup_image_details_window_g3

0x035f,	// (0x0009a8ab) popup_image_details_window_g_ParamLimits

0xcebd,	// (0x000a7409) popup_image_details_window_t1_ParamLimits

0xcecf,	// (0x000a741b) popup_image_details_window_t2_ParamLimits

0xcee8,	// (0x000a7434) popup_image_details_window_t3_ParamLimits

0xcefc,	// (0x000a7448) popup_image_details_window_t4_ParamLimits

0xcf17,	// (0x000a7463) popup_image_details_window_t5_ParamLimits

0x0366,	// (0x0009a8b2) popup_image_details_window_t_ParamLimits

0x72e8,	// (0x000a1834) cl_header_name_pane_ParamLimits

0x72e8,	// (0x000a1834) cl_header_name_pane

0x7693,	// (0x000a1bdf) cl_header_name_pane_t1_ParamLimits

0x7693,	// (0x000a1bdf) cl_header_name_pane_t1

0x76aa,	// (0x000a1bf6) cl_header_name_pane_t2_ParamLimits

0x76aa,	// (0x000a1bf6) cl_header_name_pane_t2

0x76d4,	// (0x000a1c20) cl_header_name_pane_t3_ParamLimits

0x76d4,	// (0x000a1c20) cl_header_name_pane_t3

0x0002,

0xf97f,	// (0x000a9ecb) cl_header_name_pane_t_ParamLimits

0xf97f,	// (0x000a9ecb) cl_header_name_pane_t

0xb470,	// (0x000a59bc) navi_pane_mv_g2_ParamLimits

0xd68f,	// (0x000a7bdb) field_vitu2_entry_pane_g1_ParamLimits

0xd69b,	// (0x000a7be7) field_vitu2_entry_pane_g2_ParamLimits

0xd6a7,	// (0x000a7bf3) field_vitu2_entry_pane_g3_ParamLimits

0xd6a7,	// (0x000a7bf3) field_vitu2_entry_pane_g3

0xf77c,	// (0x000a9cc8) field_vitu2_entry_pane_g_ParamLimits

0x6580,	// (0x000a0acc) cell_vitu2_itu_pane_g1_ParamLimits

0x6592,	// (0x000a0ade) cell_vitu2_itu_pane_g2_ParamLimits

0x6592,	// (0x000a0ade) cell_vitu2_itu_pane_g2

0x0001,

0xf788,	// (0x000a9cd4) cell_vitu2_itu_pane_g_ParamLimits

0xf788,	// (0x000a9cd4) cell_vitu2_itu_pane_g

0x414c,	// (0x0009e698) bg_vkb2_func_pane_cp05_ParamLimits

0x414c,	// (0x0009e698) bg_vkb2_func_pane_cp05

0x414c,	// (0x0009e698) bg_vkb2_func_pane_cp03

0x414c,	// (0x0009e698) bg_vkb2_func_pane_cp04

0x414c,	// (0x0009e698) bg_vkb2_func_pane_cp10_ParamLimits

0x414c,	// (0x0009e698) bg_vkb2_func_pane_cp10

0x728a,	// (0x000a17d6) bg_vkb2_func_pane_cp08

0x7270,	// (0x000a17bc) bg_vkb2_func_pane_cp06

0x727e,	// (0x000a17ca) bg_vkb2_func_pane_cp07

0xdc06,	// (0x000a8152) bg_vkb2_func_pane_cp11_ParamLimits

0xdc06,	// (0x000a8152) bg_vkb2_func_pane_cp11

0xdc1b,	// (0x000a8167) bg_vkb2_func_pane_cp12_ParamLimits

0xdc1b,	// (0x000a8167) bg_vkb2_func_pane_cp12

0x9be6,	// (0x000a4132) bg_vkb2_func_pane_cp09

0xd6c7,	// (0x000a7c13) bg_vkb2_func_pane_g1

0xacd5,	// (0x000a5221) bg_vkb2_func_pane_g2

0xd6cf,	// (0x000a7c1b) bg_vkb2_func_pane_g3

0xd6d7,	// (0x000a7c23) bg_vkb2_func_pane_g4

0xd915,	// (0x000a7e61) bg_vkb2_func_pane_g5

0xd6ef,	// (0x000a7c3b) bg_vkb2_func_pane_g6

0xd6f7,	// (0x000a7c43) bg_vkb2_func_pane_g7

0xd6e7,	// (0x000a7c33) bg_vkb2_func_pane_g8

0xacb5,	// (0x000a5201) bg_vkb2_func_pane_g9

0x0008,

0xf986,	// (0x000a9ed2) bg_vkb2_func_pane_g

0x75e2,	// (0x000a1b2e) blid2_tripm_pane_g6_ParamLimits

0x75e2,	// (0x000a1b2e) blid2_tripm_pane_g6

0xd5e1,	// (0x000a7b2d) mp4_progress_pane_g1

0x763c,	// (0x000a1b88) blid2_tripm_values_pane_ParamLimits

0x763c,	// (0x000a1b88) blid2_tripm_values_pane

0x76f9,	// (0x000a1c45) blid2_tripm_values_pane_t1

0x7707,	// (0x000a1c53) blid2_tripm_values_pane_t2

0x7715,	// (0x000a1c61) blid2_tripm_values_pane_t3

0x7723,	// (0x000a1c6f) blid2_tripm_values_pane_t4

0x7731,	// (0x000a1c7d) blid2_tripm_values_pane_t5

0x773f,	// (0x000a1c8b) blid2_tripm_values_pane_t6

0x774d,	// (0x000a1c99) blid2_tripm_values_pane_t7

0x775b,	// (0x000a1ca7) blid2_tripm_values_pane_t8

0x7769,	// (0x000a1cb5) blid2_tripm_values_pane_t9

0x0008,

0xf999,	// (0x000a9ee5) blid2_tripm_values_pane_t

0x1e07,	// (0x0009c353) call_video_pane_t1_ParamLimits

0x1e28,	// (0x0009c374) call_video_pane_t2_ParamLimits

0xf253,	// (0x000a979f) call_video_pane_t_ParamLimits

0x3979,	// (0x0009dec5) msg_header_pane_g1_ParamLimits

0xb64a,	// (0x000a5b96) msg_header_pane_g2_ParamLimits

0xb64a,	// (0x000a5b96) msg_header_pane_g2

0x0001,

0xf46d,	// (0x000a99b9) msg_header_pane_g_ParamLimits

0xf46d,	// (0x000a99b9) msg_header_pane_g

0xa890,	// (0x000a4ddc) main_clock2_pane_ParamLimits

0x544c,	// (0x0009f998) grid_clock2_toolbar_pane_ParamLimits

0x544c,	// (0x0009f998) grid_clock2_toolbar_pane

0x544c,	// (0x0009f998) listscroll_clock2_pane_ParamLimits

0x544c,	// (0x0009f998) listscroll_clock2_pane

0x54fc,	// (0x0009fa48) main_clock2_pane_t3_ParamLimits

0x54fc,	// (0x0009fa48) main_clock2_pane_t3

0x550e,	// (0x0009fa5a) main_clock2_pane_t4_ParamLimits

0x550e,	// (0x0009fa5a) main_clock2_pane_t4

0xdcfd,	// (0x000a8249) cell_clock2_toolbar_pane

0xdd05,	// (0x000a8251) cell_clock2_toolbar_pane_cp01

0xdd05,	// (0x000a8251) cell_clock2_toolbar_pane_cp02

0xdd0d,	// (0x000a8259) cell_clock2_toolbar_pane_cp03

0xdd15,	// (0x000a8261) list_clock2_pane

0xb283,	// (0x000a57cf) scroll_pane_cp10

0xdd1d,	// (0x000a8269) list_single_clock2_pane_ParamLimits

0xdd1d,	// (0x000a8269) list_single_clock2_pane

0xaa7c,	// (0x000a4fc8) list_highlight_pane_cp08

0xdd2a,	// (0x000a8276) list_single_clock2_pane_t1

0xdd38,	// (0x000a8284) list_single_clock2_pane_t2

0x0001,

0xf9ac,	// (0x000a9ef8) list_single_clock2_pane_t

0x9be6,	// (0x000a4132) bg_button_pane_cp10

0xdd46,	// (0x000a8292) cell_clock2_toolbar_pane_g1

0x399d,	// (0x0009dee9) aid_main_viewer_pane_g1_ParamLimits

0x399d,	// (0x0009dee9) aid_main_viewer_pane_g1

0x39a9,	// (0x0009def5) aid_main_viewer_pane_g2_ParamLimits

0x39a9,	// (0x0009def5) aid_main_viewer_pane_g2

0x39b5,	// (0x0009df01) aid_main_viewer_pane_g3_ParamLimits

0x39b5,	// (0x0009df01) aid_main_viewer_pane_g3

0x39c6,	// (0x0009df12) aid_main_viewer_pane_g4_ParamLimits

0x39c6,	// (0x0009df12) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x000a99ca) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x000a99ca) aid_main_viewer_pane_g

0x413f,	// (0x0009e68b) main_calc_pane_ParamLimits

0x415a,	// (0x0009e6a6) main_dialer2_pane_ParamLimits

0x0f50,	// (0x0009b49c) main_cam6_pane

0x0f50,	// (0x0009b49c) main_vid6_pane

0x5458,	// (0x0009f9a4) listscroll_gen_pane_cp06_ParamLimits

0x5458,	// (0x0009f9a4) listscroll_gen_pane_cp06

0x5520,	// (0x0009fa6c) main_clock2_pane_t5_ParamLimits

0x5520,	// (0x0009fa6c) main_clock2_pane_t5

0x556d,	// (0x0009fab9) aid_call2_pane_cp10_ParamLimits

0x557f,	// (0x0009facb) aid_call_pane_cp10_ParamLimits

0xb312,	// (0x000a585e) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb312,	// (0x000a585e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5591,	// (0x0009fadd) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5591,	// (0x0009fadd) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb312,	// (0x000a585e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf67e,	// (0x000a9bca) popup_clock_analogue_window_cp10_g_ParamLimits

0x55a7,	// (0x0009faf3) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5dc2,	// (0x000a030e) cell_dialer2_keypad_pane_g2_ParamLimits

0x5dc2,	// (0x000a030e) cell_dialer2_keypad_pane_g2

0x0001,

0xf71b,	// (0x000a9c67) cell_dialer2_keypad_pane_g_ParamLimits

0xf71b,	// (0x000a9c67) cell_dialer2_keypad_pane_g

0x5dde,	// (0x000a032a) cell_dialer2_keypad_pane_t1

0x68b7,	// (0x000a0e03) main_cset_text2_pane_ParamLimits

0x68b7,	// (0x000a0e03) main_cset_text2_pane

0xdb6e,	// (0x000a80ba) area_vitu2_query_pane_g1_ParamLimits

0x720f,	// (0x000a175b) area_vitu2_query_pane_g2_ParamLimits

0xf8c9,	// (0x000a9e15) area_vitu2_query_pane_g_ParamLimits

0xa0e0,	// (0x000a462c) area_vitu2_query_pane_t7_ParamLimits

0xa0e0,	// (0x000a462c) area_vitu2_query_pane_t7

0x7270,	// (0x000a17bc) bg_button_pane_cp018_ParamLimits

0x727e,	// (0x000a17ca) bg_button_pane_cp021_ParamLimits

0x728a,	// (0x000a17d6) bg_button_pane_cp022_ParamLimits

0x728a,	// (0x000a17d6) bg_vkb2_func_pane_cp08_ParamLimits

0x7270,	// (0x000a17bc) bg_vkb2_func_pane_cp06_ParamLimits

0x727e,	// (0x000a17ca) bg_vkb2_func_pane_cp07_ParamLimits

0x729b,	// (0x000a17e7) input_focus_pane_cp09_ParamLimits

0x7777,	// (0x000a1cc3) cam6_autofocus_pane_ParamLimits

0x7777,	// (0x000a1cc3) cam6_autofocus_pane

0x7799,	// (0x000a1ce5) cam6_image_uncrop_pane_ParamLimits

0x7799,	// (0x000a1ce5) cam6_image_uncrop_pane

0x77c6,	// (0x000a1d12) cam6_indi_pane_ParamLimits

0x77c6,	// (0x000a1d12) cam6_indi_pane

0x77e0,	// (0x000a1d2c) cam6_mode_pane_ParamLimits

0x77e0,	// (0x000a1d2c) cam6_mode_pane

0x77f4,	// (0x000a1d40) cam6_timer_pane_ParamLimits

0x77f4,	// (0x000a1d40) cam6_timer_pane

0x7805,	// (0x000a1d51) cam6_zoom_pane_ParamLimits

0x7805,	// (0x000a1d51) cam6_zoom_pane

0x781d,	// (0x000a1d69) cam6_mode_pane_g1_ParamLimits

0x781d,	// (0x000a1d69) cam6_mode_pane_g1

0x7829,	// (0x000a1d75) cam6_mode_pane_g2_ParamLimits

0x7829,	// (0x000a1d75) cam6_mode_pane_g2

0x7835,	// (0x000a1d81) cam6_mode_pane_g3_ParamLimits

0x7835,	// (0x000a1d81) cam6_mode_pane_g3

0x7841,	// (0x000a1d8d) cam6_mode_pane_g4_ParamLimits

0x7841,	// (0x000a1d8d) cam6_mode_pane_g4

0x0003,

0xf9b1,	// (0x000a9efd) cam6_mode_pane_g_ParamLimits

0xf9b1,	// (0x000a9efd) cam6_mode_pane_g

0xdb60,	// (0x000a80ac) bg_tb_trans_pane_cp08_ParamLimits

0xdb60,	// (0x000a80ac) bg_tb_trans_pane_cp08

0xdd4e,	// (0x000a829a) cam6_battery_pane_ParamLimits

0xdd4e,	// (0x000a829a) cam6_battery_pane

0xdd64,	// (0x000a82b0) cam6_indi_pane_g1_ParamLimits

0xdd64,	// (0x000a82b0) cam6_indi_pane_g1

0xdd76,	// (0x000a82c2) cam6_indi_pane_g2_ParamLimits

0xdd76,	// (0x000a82c2) cam6_indi_pane_g2

0xdd88,	// (0x000a82d4) cam6_indi_pane_g3_ParamLimits

0xdd88,	// (0x000a82d4) cam6_indi_pane_g3

0x0002,

0x07ab,	// (0x0009acf7) cam6_indi_pane_g_ParamLimits

0x07ab,	// (0x0009acf7) cam6_indi_pane_g

0xdd9a,	// (0x000a82e6) cam6_indi_pane_t1_ParamLimits

0xdd9a,	// (0x000a82e6) cam6_indi_pane_t1

0x637e,	// (0x000a08ca) cam6_autofocus_pane_g1

0x6376,	// (0x000a08c2) cam6_autofocus_pane_g2

0x638e,	// (0x000a08da) cam6_autofocus_pane_g3

0x6386,	// (0x000a08d2) cam6_autofocus_pane_g4

0x0003,

0xf9ba,	// (0x000a9f06) cam6_autofocus_pane_g

0xddc0,	// (0x000a830c) cam6_timer_pane_g1

0xddc8,	// (0x000a8314) cam6_timer_pane_t1

0xddd6,	// (0x000a8322) cam6_zoom_cont_pane

0xddde,	// (0x000a832a) cam6_zoom_pane_g1

0xdde6,	// (0x000a8332) cam6_zoom_pane_g2

0x784d,	// (0x000a1d99) cam6_zoom_pane_g3

0x0002,

0xf9c3,	// (0x000a9f0f) cam6_zoom_pane_g

0xcd1c,	// (0x000a7268) cam6_battery_pane_g1

0xcd1c,	// (0x000a7268) cam6_battery_pane_g2

0x0001,

0x0323,	// (0x0009a86f) cam6_battery_pane_g

0xddee,	// (0x000a833a) cam6_zoom_cont_pane_g1

0xddf7,	// (0x000a8343) cam6_zoom_cont_pane_g2

0xde00,	// (0x000a834c) cam6_zoom_cont_pane_g3

0x0002,

0x07c2,	// (0x0009ad0e) cam6_zoom_cont_pane_g

0x786a,	// (0x000a1db6) cam6_mode_pane_cp_ParamLimits

0x786a,	// (0x000a1db6) cam6_mode_pane_cp

0x787e,	// (0x000a1dca) cam6_zoom_pane_cp_ParamLimits

0x787e,	// (0x000a1dca) cam6_zoom_pane_cp

0x7896,	// (0x000a1de2) vid6_image_uncrop_cif_pane_ParamLimits

0x7896,	// (0x000a1de2) vid6_image_uncrop_cif_pane

0x78c2,	// (0x000a1e0e) vid6_image_uncrop_nhd_pane_ParamLimits

0x78c2,	// (0x000a1e0e) vid6_image_uncrop_nhd_pane

0x78df,	// (0x000a1e2b) vid6_image_uncrop_vga_pane_ParamLimits

0x78df,	// (0x000a1e2b) vid6_image_uncrop_vga_pane

0x78fe,	// (0x000a1e4a) vid6_image_uncrop_wvga_pane_ParamLimits

0x78fe,	// (0x000a1e4a) vid6_image_uncrop_wvga_pane

0x791b,	// (0x000a1e67) vid6_indi_pane_ParamLimits

0x791b,	// (0x000a1e67) vid6_indi_pane

0xdb60,	// (0x000a80ac) bg_tb_trans_pane_cp09_ParamLimits

0xdb60,	// (0x000a80ac) bg_tb_trans_pane_cp09

0xde18,	// (0x000a8364) cam6_battery_pane_cp_ParamLimits

0xde18,	// (0x000a8364) cam6_battery_pane_cp

0xde24,	// (0x000a8370) vid6_indi_pane_g1_ParamLimits

0xde24,	// (0x000a8370) vid6_indi_pane_g1

0xde36,	// (0x000a8382) vid6_indi_pane_g2_ParamLimits

0xde36,	// (0x000a8382) vid6_indi_pane_g2

0xde48,	// (0x000a8394) vid6_indi_pane_g3_ParamLimits

0xde48,	// (0x000a8394) vid6_indi_pane_g3

0xde5d,	// (0x000a83a9) vid6_indi_pane_g4_ParamLimits

0xde5d,	// (0x000a83a9) vid6_indi_pane_g4

0xde72,	// (0x000a83be) vid6_indi_pane_g5_ParamLimits

0xde72,	// (0x000a83be) vid6_indi_pane_g5

0x0004,

0x07c9,	// (0x0009ad15) vid6_indi_pane_g_ParamLimits

0x07c9,	// (0x0009ad15) vid6_indi_pane_g

0xde8c,	// (0x000a83d8) vid6_indi_pane_t1_ParamLimits

0xde8c,	// (0x000a83d8) vid6_indi_pane_t1

0xdea2,	// (0x000a83ee) vid6_indi_pane_t2_ParamLimits

0xdea2,	// (0x000a83ee) vid6_indi_pane_t2

0xdeca,	// (0x000a8416) vid6_indi_pane_t3_ParamLimits

0xdeca,	// (0x000a8416) vid6_indi_pane_t3

0xdef2,	// (0x000a843e) vid6_indi_pane_t4_ParamLimits

0xdef2,	// (0x000a843e) vid6_indi_pane_t4

0x0003,

0x07d4,	// (0x0009ad20) vid6_indi_pane_t_ParamLimits

0x07d4,	// (0x0009ad20) vid6_indi_pane_t

0xdf16,	// (0x000a8462) wait_bar_pane_cp08

0x793e,	// (0x000a1e8a) main_cset_text2_pane_t1_ParamLimits

0x793e,	// (0x000a1e8a) main_cset_text2_pane_t1

0x7855,	// (0x000a1da1) listscroll_gen_pane_cp06_t1_ParamLimits

0x7855,	// (0x000a1da1) listscroll_gen_pane_cp06_t1

0x0f50,	// (0x0009b49c) main_cam6_set_pane

0x621a,	// (0x000a0766) bg_tb_trans_pane_cp06_ParamLimits

0x6230,	// (0x000a077c) cam4_indicators_pane_g1_ParamLimits

0x6241,	// (0x000a078d) cam4_indicators_pane_g2_ParamLimits

0xf758,	// (0x000a9ca4) cam4_indicators_pane_g_ParamLimits

0x6259,	// (0x000a07a5) cam4_indicators_pane_t1_ParamLimits

0x414c,	// (0x0009e698) bg_tb_trans_pane_cp07_ParamLimits

0x630a,	// (0x000a0856) vid4_indicators_pane_g1_ParamLimits

0x631e,	// (0x000a086a) vid4_indicators_pane_g2_ParamLimits

0x6332,	// (0x000a087e) vid4_indicators_pane_g3_ParamLimits

0x6343,	// (0x000a088f) vid4_indicators_pane_g4_ParamLimits

0xf76a,	// (0x000a9cb6) vid4_indicators_pane_g_ParamLimits

0x635f,	// (0x000a08ab) vid4_indicators_pane_t1_ParamLimits

0x73d0,	// (0x000a191c) vid4_progress_pane_g1_ParamLimits

0x73e0,	// (0x000a192c) vid4_progress_pane_g2_ParamLimits

0x73f0,	// (0x000a193c) vid4_progress_pane_g3_ParamLimits

0x7402,	// (0x000a194e) vid4_progress_pane_g4_ParamLimits

0xf914,	// (0x000a9e60) vid4_progress_pane_g_ParamLimits

0x741a,	// (0x000a1966) vid4_progress_pane_t1_ParamLimits

0x7430,	// (0x000a197c) vid4_progress_pane_t2_ParamLimits

0x7445,	// (0x000a1991) vid4_progress_pane_t3_ParamLimits

0xf91f,	// (0x000a9e6b) vid4_progress_pane_t_ParamLimits

0x745b,	// (0x000a19a7) wait_bar_pane_cp07_ParamLimits

0x7975,	// (0x000a1ec1) main_cam6_set_pane_g2_ParamLimits

0x7975,	// (0x000a1ec1) main_cam6_set_pane_g2

0x7981,	// (0x000a1ecd) main_cset6_listscroll_pane_ParamLimits

0x7981,	// (0x000a1ecd) main_cset6_listscroll_pane

0x79ac,	// (0x000a1ef8) main_cset6_slider_pane_ParamLimits

0x79ac,	// (0x000a1ef8) main_cset6_slider_pane

0x79b8,	// (0x000a1f04) main_cset6_text2_pane_ParamLimits

0x79b8,	// (0x000a1f04) main_cset6_text2_pane

0xdf25,	// (0x000a8471) main_cset6_text_pane

0xdf2d,	// (0x000a8479) main_cset_list_pane_copy1_ParamLimits

0xdf2d,	// (0x000a8479) main_cset_list_pane_copy1

0xdf3d,	// (0x000a8489) scroll_pane_cp028_copy1

0x79cb,	// (0x000a1f17) cset_list_set_pane_copy1

0x79e1,	// (0x000a1f2d) aid_position_infowindow_above_copy1

0x79e9,	// (0x000a1f35) aid_position_infowindow_below_copy1

0xa594,	// (0x000a4ae0) cset_list_set_pane_g1_copy1

0xa10c,	// (0x000a4658) cset_list_set_pane_g3_copy1_ParamLimits

0xa10c,	// (0x000a4658) cset_list_set_pane_g3_copy1

0xa11b,	// (0x000a4667) cset_list_set_pane_t1_copy1_ParamLimits

0xa11b,	// (0x000a4667) cset_list_set_pane_t1_copy1

0xa57e,	// (0x000a4aca) list_highlight_pane_cp021_copy1_ParamLimits

0xa57e,	// (0x000a4aca) list_highlight_pane_cp021_copy1

0xdf46,	// (0x000a8492) cset6_slider_pane_ParamLimits

0xdf46,	// (0x000a8492) cset6_slider_pane

0xdf72,	// (0x000a84be) main_cset6_slider_pane_g1_ParamLimits

0xdf72,	// (0x000a84be) main_cset6_slider_pane_g1

0x79f1,	// (0x000a1f3d) main_cset6_slider_pane_g2_ParamLimits

0x79f1,	// (0x000a1f3d) main_cset6_slider_pane_g2

0xdf9a,	// (0x000a84e6) main_cset6_slider_pane_g3_ParamLimits

0xdf9a,	// (0x000a84e6) main_cset6_slider_pane_g3

0x7a19,	// (0x000a1f65) main_cset6_slider_pane_g4_ParamLimits

0x7a19,	// (0x000a1f65) main_cset6_slider_pane_g4

0x7a25,	// (0x000a1f71) main_cset6_slider_pane_g5_ParamLimits

0x7a25,	// (0x000a1f71) main_cset6_slider_pane_g5

0xd7f6,	// (0x000a7d42) main_cset6_slider_pane_g7_ParamLimits

0xd7f6,	// (0x000a7d42) main_cset6_slider_pane_g7

0xd802,	// (0x000a7d4e) main_cset6_slider_pane_g8_ParamLimits

0xd802,	// (0x000a7d4e) main_cset6_slider_pane_g8

0x7a33,	// (0x000a1f7f) main_cset6_slider_pane_g9_ParamLimits

0x7a33,	// (0x000a1f7f) main_cset6_slider_pane_g9

0x7a3f,	// (0x000a1f8b) main_cset6_slider_pane_g10_ParamLimits

0x7a3f,	// (0x000a1f8b) main_cset6_slider_pane_g10

0x7a4b,	// (0x000a1f97) main_cset6_slider_pane_g11_ParamLimits

0x7a4b,	// (0x000a1f97) main_cset6_slider_pane_g11

0x7a57,	// (0x000a1fa3) main_cset6_slider_pane_g12_ParamLimits

0x7a57,	// (0x000a1fa3) main_cset6_slider_pane_g12

0xd81a,	// (0x000a7d66) main_cset6_slider_pane_g13_ParamLimits

0xd81a,	// (0x000a7d66) main_cset6_slider_pane_g13

0xd826,	// (0x000a7d72) main_cset6_slider_pane_g14_ParamLimits

0xd826,	// (0x000a7d72) main_cset6_slider_pane_g14

0x7a63,	// (0x000a1faf) main_cset6_slider_pane_g15_ParamLimits

0x7a63,	// (0x000a1faf) main_cset6_slider_pane_g15

0x7a7b,	// (0x000a1fc7) main_cset6_slider_pane_g16_ParamLimits

0x7a7b,	// (0x000a1fc7) main_cset6_slider_pane_g16

0x7a89,	// (0x000a1fd5) main_cset6_slider_pane_g17_ParamLimits

0x7a89,	// (0x000a1fd5) main_cset6_slider_pane_g17

0x0011,

0xf9ca,	// (0x000a9f16) main_cset6_slider_pane_g_ParamLimits

0xf9ca,	// (0x000a9f16) main_cset6_slider_pane_g

0xdfb2,	// (0x000a84fe) main_cset6_slider_pane_t1_ParamLimits

0xdfb2,	// (0x000a84fe) main_cset6_slider_pane_t1

0x7aa3,	// (0x000a1fef) main_cset6_slider_pane_t2_ParamLimits

0x7aa3,	// (0x000a1fef) main_cset6_slider_pane_t2

0x7ace,	// (0x000a201a) main_cset6_slider_pane_t3_ParamLimits

0x7ace,	// (0x000a201a) main_cset6_slider_pane_t3

0x7af9,	// (0x000a2045) main_cset6_slider_pane_t4_ParamLimits

0x7af9,	// (0x000a2045) main_cset6_slider_pane_t4

0x7b24,	// (0x000a2070) main_cset6_slider_pane_t5_ParamLimits

0x7b24,	// (0x000a2070) main_cset6_slider_pane_t5

0xdff3,	// (0x000a853f) main_cset6_slider_pane_t7_ParamLimits

0xdff3,	// (0x000a853f) main_cset6_slider_pane_t7

0x7b51,	// (0x000a209d) main_cset6_slider_pane_t8_ParamLimits

0x7b51,	// (0x000a209d) main_cset6_slider_pane_t8

0x7b75,	// (0x000a20c1) main_cset6_slider_pane_t9_ParamLimits

0x7b75,	// (0x000a20c1) main_cset6_slider_pane_t9

0x7b99,	// (0x000a20e5) main_cset6_slider_pane_t10_ParamLimits

0x7b99,	// (0x000a20e5) main_cset6_slider_pane_t10

0x7bbd,	// (0x000a2109) main_cset6_slider_pane_t11_ParamLimits

0x7bbd,	// (0x000a2109) main_cset6_slider_pane_t11

0xe029,	// (0x000a8575) main_cset6_slider_pane_t14_ParamLimits

0xe029,	// (0x000a8575) main_cset6_slider_pane_t14

0xe062,	// (0x000a85ae) main_cset6_slider_pane_t15_ParamLimits

0xe062,	// (0x000a85ae) main_cset6_slider_pane_t15

0x000b,

0xf9ef,	// (0x000a9f3b) main_cset6_slider_pane_t_ParamLimits

0xf9ef,	// (0x000a9f3b) main_cset6_slider_pane_t

0xd4e3,	// (0x000a7a2f) cset_slider_pane_g1_copy1

0xdb30,	// (0x000a807c) cset_slider_pane_g2_copy1

0xdb39,	// (0x000a8085) cset_slider_pane_g3_copy1

0x9be6,	// (0x000a4132) bg_popup_sub_pane_cp011_copy1

0xe09b,	// (0x000a85e7) main_cset_text_pane_g1_copy1

0xd964,	// (0x000a7eb0) main_cset_text_pane_t1_copy1

0xd972,	// (0x000a7ebe) main_cset_text_pane_t2_copy1

0xd980,	// (0x000a7ecc) main_cset_text_pane_t3_copy1

0xd98e,	// (0x000a7eda) main_cset_text_pane_t4_copy1

0xd99c,	// (0x000a7ee8) main_cset_text_pane_t5_copy1

0xe0a3,	// (0x000a85ef) main_cset_text_pane_t6_copy1

0xe0b1,	// (0x000a85fd) main_cset_text_pane_t7_copy1

0x7cb9,	// (0x000a2205) main_cset_text2_pane_t1_copy1

0x414c,	// (0x0009e698) main_ncimui_pane

0x41ab,	// (0x0009e6f7) popup_query_ncimui_window_ParamLimits

0x41ab,	// (0x0009e6f7) popup_query_ncimui_window

0xa013,	// (0x000a455f) field_cale_ev2_pane_g4_ParamLimits

0xa013,	// (0x000a455f) field_cale_ev2_pane_g4

0x5aa2,	// (0x0009ffee) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5aa2,	// (0x0009ffee) cell_video_dialer_keypad_pane_g2

0x0001,

0xf6f7,	// (0x000a9c43) cell_video_dialer_keypad_pane_g_ParamLimits

0xf6f7,	// (0x000a9c43) cell_video_dialer_keypad_pane_g

0x5aba,	// (0x000a0006) cell_video_dialer_keypad_pane_t1

0x9be6,	// (0x000a4132) bg_popup_window_pane_cp012

0xb16e,	// (0x000a56ba) heading_pane_cp06

0xe0dd,	// (0x000a8629) ncim_query_content_pane

0x9be6,	// (0x000a4132) bg_popup_heading_pane_cp01

0xe0e5,	// (0x000a8631) ncim_heading_pane_t1

0xe0f3,	// (0x000a863f) ncim_indicator_popup_pane

0xe105,	// (0x000a8651) ncim_query_button_pane

0xe119,	// (0x000a8665) ncim_query_content_pane_t1

0xe12b,	// (0x000a8677) ncim_query_content_pane_t2

0x0005,

0xfa33,	// (0x000a9f7f) ncim_query_content_pane_t

0xe165,	// (0x000a86b1) ncim_query_list_pane

0xe177,	// (0x000a86c3) ncim_query_popup_pane

0xe0f3,	// (0x000a863f) ncim_indicator_popup_pane_ParamLimits

0x7e0d,	// (0x000a2359) ncim_query_content_pane_g1_ParamLimits

0x7e0d,	// (0x000a2359) ncim_query_content_pane_g1

0xe119,	// (0x000a8665) ncim_query_content_pane_t1_ParamLimits

0xe12b,	// (0x000a8677) ncim_query_content_pane_t2_ParamLimits

0x7e19,	// (0x000a2365) ncim_query_content_pane_t3_ParamLimits

0x7e19,	// (0x000a2365) ncim_query_content_pane_t3

0x7e36,	// (0x000a2382) ncim_query_content_pane_t4_ParamLimits

0x7e36,	// (0x000a2382) ncim_query_content_pane_t4

0x7e53,	// (0x000a239f) ncim_query_content_pane_t5_ParamLimits

0x7e53,	// (0x000a239f) ncim_query_content_pane_t5

0xe13d,	// (0x000a8689) ncim_query_content_pane_t6_ParamLimits

0xe13d,	// (0x000a8689) ncim_query_content_pane_t6

0xfa33,	// (0x000a9f7f) ncim_query_content_pane_t_ParamLimits

0xe165,	// (0x000a86b1) ncim_query_list_pane_ParamLimits

0xe177,	// (0x000a86c3) ncim_query_popup_pane_ParamLimits

0xe18b,	// (0x000a86d7) wait_bar_pane_cp04

0x9be6,	// (0x000a4132) input_focus_pane_cp011

0xe193,	// (0x000a86df) ncim_query_popup_pane_t1

0xe1a1,	// (0x000a86ed) ncim_list_query_list_pane_ParamLimits

0xe1a1,	// (0x000a86ed) ncim_list_query_list_pane

0x9be6,	// (0x000a4132) bg_button_pane_cp027

0xe1ae,	// (0x000a86fa) ncim_query_button_pane_g1

0x9be6,	// (0x000a4132) list_highlight_pane_cp012

0xe1b8,	// (0x000a8704) ncim_list_query_list_pane_g1

0xe1c0,	// (0x000a870c) ncim_list_query_list_pane_t1

0x624d,	// (0x000a0799) cam4_indicators_pane_g3_ParamLimits

0x624d,	// (0x000a0799) cam4_indicators_pane_g3

0x634f,	// (0x000a089b) vid4_indicators_pane_g5_ParamLimits

0x634f,	// (0x000a089b) vid4_indicators_pane_g5

0x740e,	// (0x000a195a) vid4_progress_pane_g5_ParamLimits

0x740e,	// (0x000a195a) vid4_progress_pane_g5

0x7cf9,	// (0x000a2245) main_ncimui_pane_g1

0x7d61,	// (0x000a22ad) ncimui_group_query_pane_ParamLimits

0x7d61,	// (0x000a22ad) ncimui_group_query_pane

0x7da9,	// (0x000a22f5) ncimui_list_pane_ParamLimits

0x7da9,	// (0x000a22f5) ncimui_list_pane

0x7dd0,	// (0x000a231c) ncimui_text_pane_ParamLimits

0x7dd0,	// (0x000a231c) ncimui_text_pane

0x7e70,	// (0x000a23bc) ncimui_text_pane_t1_ParamLimits

0x7e70,	// (0x000a23bc) ncimui_text_pane_t1

0xe1ce,	// (0x000a871a) ncimui_list_single_graphic_pane_ParamLimits

0xe1ce,	// (0x000a871a) ncimui_list_single_graphic_pane

0x7e8f,	// (0x000a23db) ncimui_query_pane_ParamLimits

0x7e8f,	// (0x000a23db) ncimui_query_pane

0x9be6,	// (0x000a4132) list_highlight_pane_cp013

0xe1de,	// (0x000a872a) ncim_list_query_list_pane_t1_copy1

0xe1ec,	// (0x000a8738) ncim_list_single_graphic_pane_g1

0x7ea2,	// (0x000a23ee) ncim_query_button_pane_cp01

0x7eae,	// (0x000a23fa) ncim_query_entry_pane_ParamLimits

0x7eae,	// (0x000a23fa) ncim_query_entry_pane

0x7ec1,	// (0x000a240d) ncimui_query_pane_g1

0x7ecd,	// (0x000a2419) ncimui_query_pane_t1_ParamLimits

0x7ecd,	// (0x000a2419) ncimui_query_pane_t1

0xa57e,	// (0x000a4aca) input_focus_pane_cp012

0xe1f4,	// (0x000a8740) ncim_query_entry_pane_t1

0xa890,	// (0x000a4ddc) main_im_pane_ParamLimits

0x414c,	// (0x0009e698) main_mobtv_pane_ParamLimits

0x414c,	// (0x0009e698) main_mobtv_pane

0x7a97,	// (0x000a1fe3) main_cset6_slider_pane_g18_ParamLimits

0x7a97,	// (0x000a1fe3) main_cset6_slider_pane_g18

0xdfa6,	// (0x000a84f2) main_cset6_slider_pane_g19_ParamLimits

0xdfa6,	// (0x000a84f2) main_cset6_slider_pane_g19

0xd6a7,	// (0x000a7bf3) bg_main_mobtv_pane_ParamLimits

0xd6a7,	// (0x000a7bf3) bg_main_mobtv_pane

0x7ee6,	// (0x000a2432) main_mobtv_info_pane

0x7ef1,	// (0x000a243d) main_mobtv_loading_pane_ParamLimits

0x7ef1,	// (0x000a243d) main_mobtv_loading_pane

0xe206,	// (0x000a8752) main_mobtv_pg_channel_list_pane

0xe210,	// (0x000a875c) main_mobtv_pg_hdr_pane

0x7efe,	// (0x000a244a) main_mobtv_programe_curr_pane_ParamLimits

0x7efe,	// (0x000a244a) main_mobtv_programe_curr_pane

0x7f0b,	// (0x000a2457) main_mobtv_programe_next_pane_ParamLimits

0x7f0b,	// (0x000a2457) main_mobtv_programe_next_pane

0xe219,	// (0x000a8765) popup_mobtv_noti_window

0xcd1c,	// (0x000a7268) main_tv_pg_hdr_pane_g1

0xe221,	// (0x000a876d) main_tv_pg_hdr_pane_g2

0xe229,	// (0x000a8775) main_tv_pg_hdr_pane_g3

0xe231,	// (0x000a877d) main_tv_pg_hdr_pane_g4

0xe239,	// (0x000a8785) main_tv_pg_hdr_pane_g5

0xe243,	// (0x000a878f) main_tv_pg_hdr_pane_g6

0xe24d,	// (0x000a8799) main_tv_pg_hdr_pane_g7

0xe257,	// (0x000a87a3) main_tv_pg_hdr_pane_g8

0xe261,	// (0x000a87ad) main_tv_pg_hdr_pane_g9

0xe26b,	// (0x000a87b7) main_tv_pg_hdr_pane_g10

0xe275,	// (0x000a87c1) main_tv_pg_hdr_pane_g11

0x000a,

0x0853,	// (0x0009ad9f) main_tv_pg_hdr_pane_g

0xe27f,	// (0x000a87cb) main_tv_pg_hdr_pane_t1

0xe28d,	// (0x000a87d9) main_tv_pg_hdr_pane_t2

0xe29b,	// (0x000a87e7) main_tv_pg_hdr_pane_t3

0xe2ab,	// (0x000a87f7) main_tv_pg_hdr_pane_t4

0xe2bb,	// (0x000a8807) main_tv_pg_hdr_pane_t5

0x0004,

0x086a,	// (0x0009adb6) main_tv_pg_hdr_pane_t

0xe2cb,	// (0x000a8817) single_mobtv_pg_channel_pane_ParamLimits

0xe2cb,	// (0x000a8817) single_mobtv_pg_channel_pane

0xe2dd,	// (0x000a8829) single_mobtv_pg_channel_table_pane

0xadd8,	// (0x000a5324) single_mobtv_pg_channel_thumb_pane

0xe2e6,	// (0x000a8832) single_tv_pg_channel_pane_g1

0xe2ef,	// (0x000a883b) single_tv_pg_channel_pane_g2

0x0001,

0x0875,	// (0x0009adc1) single_tv_pg_channel_pane_g

0xcf61,	// (0x000a74ad) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf61,	// (0x000a74ad) bg_single_mobtv_pg_channel_thumb_pane

0xe2f8,	// (0x000a8844) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2f8,	// (0x000a8844) single_mobtv_pg_channel_thumb_pane_g1

0xe306,	// (0x000a8852) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe306,	// (0x000a8852) single_mobtv_pg_channel_thumb_pane_g2

0xe312,	// (0x000a885e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe312,	// (0x000a885e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x087a,	// (0x0009adc6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x087a,	// (0x0009adc6) single_mobtv_pg_channel_thumb_pane_g

0xe31e,	// (0x000a886a) single_mobtv_pg_channel_thumb_pane_t1

0xe32c,	// (0x000a8878) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0881,	// (0x0009adcd) single_mobtv_pg_channel_thumb_pane_t

0xcd1c,	// (0x000a7268) bg_single_mobtv_pg_channel_table_pane_g1

0xcd1c,	// (0x000a7268) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x0323,	// (0x0009a86f) bg_single_mobtv_pg_channel_table_pane_g

0xe33a,	// (0x000a8886) single_mobtv_pg_channel_table_pane_t1

0xe348,	// (0x000a8894) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0886,	// (0x0009add2) single_mobtv_pg_channel_table_pane_t

0x7f20,	// (0x000a246c) main_mobtv_info_pane_g1_ParamLimits

0x7f20,	// (0x000a246c) main_mobtv_info_pane_g1

0x7f3c,	// (0x000a2488) main_mobtv_info_pane_t1_ParamLimits

0x7f3c,	// (0x000a2488) main_mobtv_info_pane_t1

0x7fb4,	// (0x000a2500) main_mobtv_info_pane_t2_ParamLimits

0x7fb4,	// (0x000a2500) main_mobtv_info_pane_t2

0x0002,

0xfa45,	// (0x000a9f91) main_mobtv_info_pane_t_ParamLimits

0xfa45,	// (0x000a9f91) main_mobtv_info_pane_t

0x8043,	// (0x000a258f) wait_bar_pane_cp05

0x8055,	// (0x000a25a1) main_mobtv_loading_pane_g1_ParamLimits

0x8055,	// (0x000a25a1) main_mobtv_loading_pane_g1

0x8063,	// (0x000a25af) main_mobtv_loading_pane_g2_ParamLimits

0x8063,	// (0x000a25af) main_mobtv_loading_pane_g2

0x806f,	// (0x000a25bb) main_mobtv_loading_pane_g3_ParamLimits

0x806f,	// (0x000a25bb) main_mobtv_loading_pane_g3

0x0002,

0xfa4c,	// (0x000a9f98) main_mobtv_loading_pane_g_ParamLimits

0xfa4c,	// (0x000a9f98) main_mobtv_loading_pane_g

0xe356,	// (0x000a88a2) main_mobtv_loading_pane_t1_ParamLimits

0xe356,	// (0x000a88a2) main_mobtv_loading_pane_t1

0xe36e,	// (0x000a88ba) main_mobtv_loading_pane_t2_ParamLimits

0xe36e,	// (0x000a88ba) main_mobtv_loading_pane_t2

0x0001,

0x089e,	// (0x0009adea) main_mobtv_loading_pane_t_ParamLimits

0x089e,	// (0x0009adea) main_mobtv_loading_pane_t

0x807d,	// (0x000a25c9) wait_bar_pane_cp06_ParamLimits

0x807d,	// (0x000a25c9) wait_bar_pane_cp06

0xe392,	// (0x000a88de) main_mobtv_programe_curr_pane_t1

0xe3a0,	// (0x000a88ec) main_mobtv_programe_curr_pane_t2

0x0001,

0x08a3,	// (0x0009adef) main_mobtv_programe_curr_pane_t

0xe3ae,	// (0x000a88fa) main_mobtv_programe_next_pane_t1

0xe3bc,	// (0x000a8908) main_mobtv_programe_next_pane_t2

0xe3ca,	// (0x000a8916) main_mobtv_programe_next_pane_t3

0x0002,

0x08a8,	// (0x0009adf4) main_mobtv_programe_next_pane_t

0x9be6,	// (0x000a4132) bg_popup_mobtv_noti_window_pane

0xe3d8,	// (0x000a8924) popup_mobtv_noti_window_g1

0xe3e0,	// (0x000a892c) popup_mobtv_noti_window_t1

0xe3ee,	// (0x000a893a) popup_mobtv_noti_window_t2

0x0001,

0x08af,	// (0x0009adfb) popup_mobtv_noti_window_t

0xcd1c,	// (0x000a7268) bg_popup_mobtv_noti_window_pane_g1

0x0f50,	// (0x0009b49c) sc_clock_pane

0x0f50,	// (0x0009b49c) main_fs_bigclock_pane

0x762a,	// (0x000a1b76) blid2_tripm_pane_t4_ParamLimits

0x762a,	// (0x000a1b76) blid2_tripm_pane_t4

0x8089,	// (0x000a25d5) sc_clock_pane_g1_ParamLimits

0x8089,	// (0x000a25d5) sc_clock_pane_g1

0x8097,	// (0x000a25e3) sc_clock_pane_t1_ParamLimits

0x8097,	// (0x000a25e3) sc_clock_pane_t1

0x80aa,	// (0x000a25f6) sc_clock_pane_t2_ParamLimits

0x80aa,	// (0x000a25f6) sc_clock_pane_t2

0x80bc,	// (0x000a2608) sc_clock_pane_t3_ParamLimits

0x80bc,	// (0x000a2608) sc_clock_pane_t3

0x0004,

0xfa53,	// (0x000a9f9f) sc_clock_pane_t_ParamLimits

0xfa53,	// (0x000a9f9f) sc_clock_pane_t

0x9057,	// (0x000a35a3) main_fs_bigclock_indicator_pane_ParamLimits

0x9057,	// (0x000a35a3) main_fs_bigclock_indicator_pane

0x813f,	// (0x000a268b) main_fs_bigclock_pane_g1_ParamLimits

0x813f,	// (0x000a268b) main_fs_bigclock_pane_g1

0x9063,	// (0x000a35af) main_fs_bigclock_pane_t1_ParamLimits

0x9063,	// (0x000a35af) main_fs_bigclock_pane_t1

0x9075,	// (0x000a35c1) main_fs_bigclock_pane_t2_ParamLimits

0x9075,	// (0x000a35c1) main_fs_bigclock_pane_t2

0x9089,	// (0x000a35d5) main_fs_bigclock_pane_t3_ParamLimits

0x9089,	// (0x000a35d5) main_fs_bigclock_pane_t3

0x0002,

0xfc00,	// (0x000aa14c) main_fs_bigclock_pane_t_ParamLimits

0xfc00,	// (0x000aa14c) main_fs_bigclock_pane_t

0xec60,	// (0x000a91ac) main_fs_bigclock_indicator_pane_g1

0xe10d,	// (0x000a8659) ncim_query_content_pane_g2_ParamLimits

0xe10d,	// (0x000a8659) ncim_query_content_pane_g2

0x0001,

0xfa2e,	// (0x000a9f7a) ncim_query_content_pane_g_ParamLimits

0xfa2e,	// (0x000a9f7a) ncim_query_content_pane_g

0x80d0,	// (0x000a261c) sc_clock_pane_t4_ParamLimits

0x80d0,	// (0x000a261c) sc_clock_pane_t4

0x414c,	// (0x0009e698) main_radioblah_pane

0x60e5,	// (0x000a0631) cell_call4_button_pane_t1_copy1_ParamLimits

0x60e5,	// (0x000a0631) cell_call4_button_pane_t1_copy1

0x7d13,	// (0x000a225f) main_ncimui_pane_t1_ParamLimits

0x7d13,	// (0x000a225f) main_ncimui_pane_t1

0x7d2d,	// (0x000a2279) main_ncimui_pane_t2_ParamLimits

0x7d2d,	// (0x000a2279) main_ncimui_pane_t2

0x0002,

0xfa27,	// (0x000a9f73) main_ncimui_pane_t_ParamLimits

0xfa27,	// (0x000a9f73) main_ncimui_pane_t

0xe534,	// (0x000a8a80) main_radioblah_anim_pane_ParamLimits

0xe534,	// (0x000a8a80) main_radioblah_anim_pane

0xe545,	// (0x000a8a91) main_radioblah_info_pane_ParamLimits

0xe545,	// (0x000a8a91) main_radioblah_info_pane

0xe559,	// (0x000a8aa5) main_radioblah_pane_t1_ParamLimits

0xe559,	// (0x000a8aa5) main_radioblah_pane_t1

0xe575,	// (0x000a8ac1) main_radioblah_pane_t2_ParamLimits

0xe575,	// (0x000a8ac1) main_radioblah_pane_t2

0x0003,

0x08d5,	// (0x0009ae21) main_radioblah_pane_t_ParamLimits

0x08d5,	// (0x0009ae21) main_radioblah_pane_t

0x8195,	// (0x000a26e1) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8195,	// (0x000a26e1) main_radioblah_rocker_ctrl_pane

0xe5bd,	// (0x000a8b09) main_radioblah_info_pane_t1_ParamLimits

0xe5bd,	// (0x000a8b09) main_radioblah_info_pane_t1

0x81da,	// (0x000a2726) main_radioblah_info_pane_t2_ParamLimits

0x81da,	// (0x000a2726) main_radioblah_info_pane_t2

0x0003,

0xfa5e,	// (0x000a9faa) main_radioblah_info_pane_t_ParamLimits

0xfa5e,	// (0x000a9faa) main_radioblah_info_pane_t

0xcd1c,	// (0x000a7268) main_radioblah_rocker_ctrl_pane_g1

0x828a,	// (0x000a27d6) main_radioblah_rocker_ctrl_pane_g2

0x8292,	// (0x000a27de) main_radioblah_rocker_ctrl_pane_g3

0x829a,	// (0x000a27e6) main_radioblah_rocker_ctrl_pane_g4

0x82a2,	// (0x000a27ee) main_radioblah_rocker_ctrl_pane_g5

0x82aa,	// (0x000a27f6) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfa67,	// (0x000a9fb3) main_radioblah_rocker_ctrl_pane_g

0x7cb9,	// (0x000a2205) main_cset_text2_pane_t1_copy1_ParamLimits

0x6170,	// (0x000a06bc) cam4_image_uncrop_qvga_pane

0x62bf,	// (0x000a080b) vid4_image_uncrop_qcif_pane

0x77b8,	// (0x000a1d04) cam6_image_uncrop_qvga_pane_ParamLimits

0x77b8,	// (0x000a1d04) cam6_image_uncrop_qvga_pane

0xde08,	// (0x000a8354) vid6_image_uncrop_qcif_pane_ParamLimits

0xde08,	// (0x000a8354) vid6_image_uncrop_qcif_pane

0x9be6,	// (0x000a4132) bg_popup_preview_window_pane_cp03

0xe0bf,	// (0x000a860b) list_cset_text2_pane

0xe0c7,	// (0x000a8613) main_cset6_text2_pane_g1

0xe0cf,	// (0x000a861b) main_cset6_text2_pane_t1

0x82b2,	// (0x000a27fe) list_cset_text2_pane_t1_ParamLimits

0x82b2,	// (0x000a27fe) list_cset_text2_pane_t1

0x414c,	// (0x0009e698) main_radioblah_pane_ParamLimits

0x802f,	// (0x000a257b) main_mobtv_info_pane_t3_ParamLimits

0x802f,	// (0x000a257b) main_mobtv_info_pane_t3

0x8183,	// (0x000a26cf) main_radioblah_pane_g1

0x81ae,	// (0x000a26fa) main_radioblah_info_pane_g1

0x822f,	// (0x000a277b) main_radioblah_info_pane_t3_ParamLimits

0x822f,	// (0x000a277b) main_radioblah_info_pane_t3

0x2e55,	// (0x0009d3a1) highlight_cell_cale_month_pane_ParamLimits

0x2e55,	// (0x0009d3a1) highlight_cell_cale_month_pane

0x0f50,	// (0x0009b49c) main_phob_fisheye_pane

0xd03d,	// (0x000a7589) scroll_pane_cp0031_ParamLimits

0xd03d,	// (0x000a7589) scroll_pane_cp0031

0xdf16,	// (0x000a8462) wait_bar_pane_cp08_ParamLimits

0x79cb,	// (0x000a1f17) cset_list_set_pane_copy1_ParamLimits

0xe5f7,	// (0x000a8b43) highlight_cell_cale_month_pane_g1

0x82d3,	// (0x000a281f) highlight_cell_cale_month_pane_t1

0xdbc2,	// (0x000a810e) list_gen_pane_cp01

0xd7e1,	// (0x000a7d2d) scroll_pane_01

0x82e1,	// (0x000a282d) list_single_double_fisheye_pane

0x82ea,	// (0x000a2836) list_double_fisheye_pane_g1_ParamLimits

0x82ea,	// (0x000a2836) list_double_fisheye_pane_g1

0x82f6,	// (0x000a2842) list_double_fisheye_pane_g2_ParamLimits

0x82f6,	// (0x000a2842) list_double_fisheye_pane_g2

0x830a,	// (0x000a2856) list_double_fisheye_pane_g3_ParamLimits

0x830a,	// (0x000a2856) list_double_fisheye_pane_g3

0x0004,

0xfa74,	// (0x000a9fc0) list_double_fisheye_pane_g_ParamLimits

0xfa74,	// (0x000a9fc0) list_double_fisheye_pane_g

0x8333,	// (0x000a287f) list_double_fisheye_pane_t1_ParamLimits

0x8333,	// (0x000a287f) list_double_fisheye_pane_t1

0x834e,	// (0x000a289a) list_double_fisheye_pane_t2_ParamLimits

0x834e,	// (0x000a289a) list_double_fisheye_pane_t2

0x0001,

0xfa7f,	// (0x000a9fcb) list_double_fisheye_pane_t_ParamLimits

0xfa7f,	// (0x000a9fcb) list_double_fisheye_pane_t

0x0f50,	// (0x0009b49c) main_call5_pane

0x80f6,	// (0x000a2642) sc_swipe_pane_ParamLimits

0x80f6,	// (0x000a2642) sc_swipe_pane

0x837c,	// (0x000a28c8) call5_image_pane_ParamLimits

0x837c,	// (0x000a28c8) call5_image_pane

0x838c,	// (0x000a28d8) call5_swipe_1_pane_ParamLimits

0x838c,	// (0x000a28d8) call5_swipe_1_pane

0x8398,	// (0x000a28e4) call5_swipe_2_pane_ParamLimits

0x8398,	// (0x000a28e4) call5_swipe_2_pane

0x83b2,	// (0x000a28fe) popup_call5_audio_first_window_ParamLimits

0x83b2,	// (0x000a28fe) popup_call5_audio_first_window

0xcf61,	// (0x000a74ad) call5_swipe_1_pane_g1_ParamLimits

0xcf61,	// (0x000a74ad) call5_swipe_1_pane_g1

0xe5ff,	// (0x000a8b4b) call5_swipe_1_pane_g2_ParamLimits

0xe5ff,	// (0x000a8b4b) call5_swipe_1_pane_g2

0x0001,

0xfa84,	// (0x000a9fd0) call5_swipe_1_pane_g_ParamLimits

0xfa84,	// (0x000a9fd0) call5_swipe_1_pane_g

0xe60b,	// (0x000a8b57) call5_swipe_1_pane_t1_ParamLimits

0xe60b,	// (0x000a8b57) call5_swipe_1_pane_t1

0xcf61,	// (0x000a74ad) call5_swipe_2_pane_g1_ParamLimits

0xcf61,	// (0x000a74ad) call5_swipe_2_pane_g1

0xe620,	// (0x000a8b6c) call5_swipe_2_pane_g2_ParamLimits

0xe620,	// (0x000a8b6c) call5_swipe_2_pane_g2

0x0001,

0xfa89,	// (0x000a9fd5) call5_swipe_2_pane_g_ParamLimits

0xfa89,	// (0x000a9fd5) call5_swipe_2_pane_g

0xe62c,	// (0x000a8b78) call5_swipe_2_pane_t1_ParamLimits

0xe62c,	// (0x000a8b78) call5_swipe_2_pane_t1

0xe641,	// (0x000a8b8d) sc_swipe_pane_g1_ParamLimits

0xe641,	// (0x000a8b8d) sc_swipe_pane_g1

0xe64e,	// (0x000a8b9a) sc_swipe_pane_g2_ParamLimits

0xe64e,	// (0x000a8b9a) sc_swipe_pane_g2

0x0001,

0xfa8e,	// (0x000a9fda) sc_swipe_pane_g_ParamLimits

0xfa8e,	// (0x000a9fda) sc_swipe_pane_g

0xe65a,	// (0x000a8ba6) sc_swipe_pane_t1_ParamLimits

0xe65a,	// (0x000a8ba6) sc_swipe_pane_t1

0x0f50,	// (0x0009b49c) main_cmail_launcher_pane

0x83c0,	// (0x000a290c) aid_size_cell_cmail_l_ParamLimits

0x83c0,	// (0x000a290c) aid_size_cell_cmail_l

0x83ce,	// (0x000a291a) grid_cmail_l_pane_ParamLimits

0x83ce,	// (0x000a291a) grid_cmail_l_pane

0x83de,	// (0x000a292a) cell_cmail_l_pane_ParamLimits

0x83de,	// (0x000a292a) cell_cmail_l_pane

0xe66f,	// (0x000a8bbb) cell_cmail_l_pane_g1_ParamLimits

0xe66f,	// (0x000a8bbb) cell_cmail_l_pane_g1

0xe67b,	// (0x000a8bc7) cell_cmail_l_pane_t1_ParamLimits

0xe67b,	// (0x000a8bc7) cell_cmail_l_pane_t1

0xe691,	// (0x000a8bdd) cell_cmail_l_pane_t2_ParamLimits

0xe691,	// (0x000a8bdd) cell_cmail_l_pane_t2

0x0001,

0xfa93,	// (0x000a9fdf) cell_cmail_l_pane_t_ParamLimits

0xfa93,	// (0x000a9fdf) cell_cmail_l_pane_t

0xa57e,	// (0x000a4aca) grid_highlight_pane_cp018_ParamLimits

0xa57e,	// (0x000a4aca) grid_highlight_pane_cp018

0x0da6,	// (0x0009b2f2) main2_pane_ParamLimits

0x0da6,	// (0x0009b2f2) main2_pane

0xa929,	// (0x000a4e75) popup_sp_fs_action_menu_bg_pane_g1

0xa931,	// (0x000a4e7d) popup_sp_fs_action_menu_bg_pane_g2

0xa939,	// (0x000a4e85) popup_sp_fs_action_menu_bg_pane_g3

0xa941,	// (0x000a4e8d) popup_sp_fs_action_menu_bg_pane_g4

0xa949,	// (0x000a4e95) popup_sp_fs_action_menu_bg_pane_g5

0xa951,	// (0x000a4e9d) popup_sp_fs_action_menu_bg_pane_g6

0xa959,	// (0x000a4ea5) popup_sp_fs_action_menu_bg_pane_g7

0xa961,	// (0x000a4ead) popup_sp_fs_action_menu_bg_pane_g8

0xa969,	// (0x000a4eb5) popup_sp_fs_action_menu_bg_pane_g9

0xa971,	// (0x000a4ebd) popup_sp_fs_action_menu_bg_pane_g10

0xa971,	// (0x000a4ebd) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x000a96bb) popup_sp_fs_action_menu_bg_pane_g

0x1c5a,	// (0x0009c1a6) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1c5a,	// (0x0009c1a6) list_medium_line_x2_t3_g3_g1

0x1c66,	// (0x0009c1b2) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1c66,	// (0x0009c1b2) list_medium_line_x2_t3_g3_g2

0x1c72,	// (0x0009c1be) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1c72,	// (0x0009c1be) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x000a9769) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x000a9769) list_medium_line_x2_t3_g3_g

0x1c7e,	// (0x0009c1ca) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1c7e,	// (0x0009c1ca) list_medium_line_x2_t3_g3_t1

0x1c93,	// (0x0009c1df) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1c93,	// (0x0009c1df) list_medium_line_x2_t3_g3_t2

0x1ca5,	// (0x0009c1f1) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1ca5,	// (0x0009c1f1) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x000a9770) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x000a9770) list_medium_line_x2_t3_g3_t

0x1c5a,	// (0x0009c1a6) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1c5a,	// (0x0009c1a6) list_medium_line_x2_t3_g2_g1

0x1c72,	// (0x0009c1be) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1c72,	// (0x0009c1be) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x000a9777) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x000a9777) list_medium_line_x2_t3_g2_g

0x1cba,	// (0x0009c206) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1cba,	// (0x0009c206) list_medium_line_x2_t3_g2_t1

0x1cd0,	// (0x0009c21c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1cd0,	// (0x0009c21c) list_medium_line_x2_t3_g2_t2

0x1ca5,	// (0x0009c1f1) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1ca5,	// (0x0009c1f1) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x000a977c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x000a977c) list_medium_line_x2_t3_g2_t

0x1c5a,	// (0x0009c1a6) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1c5a,	// (0x0009c1a6) list_medium_line_x2_t4_g4_g1

0x1ce2,	// (0x0009c22e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1ce2,	// (0x0009c22e) list_medium_line_x2_t4_g4_g2

0x1c66,	// (0x0009c1b2) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1c66,	// (0x0009c1b2) list_medium_line_x2_t4_g4_g3

0x1cee,	// (0x0009c23a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1cee,	// (0x0009c23a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x000a9783) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x000a9783) list_medium_line_x2_t4_g4_g

0x1cfa,	// (0x0009c246) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1cfa,	// (0x0009c246) list_medium_line_x2_t4_g4_t1

0x1d14,	// (0x0009c260) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1d14,	// (0x0009c260) list_medium_line_x2_t4_g4_t2

0x1d2a,	// (0x0009c276) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1d2a,	// (0x0009c276) list_medium_line_x2_t4_g4_t3

0x1d3f,	// (0x0009c28b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1d3f,	// (0x0009c28b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x000a978c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x000a978c) list_medium_line_x2_t4_g4_t

0x1c5a,	// (0x0009c1a6) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1c5a,	// (0x0009c1a6) list_medium_line_x2_t2_g4_g1

0x1ce2,	// (0x0009c22e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1ce2,	// (0x0009c22e) list_medium_line_x2_t2_g4_g2

0x1c66,	// (0x0009c1b2) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1c66,	// (0x0009c1b2) list_medium_line_x2_t2_g4_g3

0x1c72,	// (0x0009c1be) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1c72,	// (0x0009c1be) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x000a97f3) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x000a97f3) list_medium_line_x2_t2_g4_g

0x2e7b,	// (0x0009d3c7) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2e7b,	// (0x0009d3c7) list_medium_line_x2_t2_g4_t1

0x1ca5,	// (0x0009c1f1) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1ca5,	// (0x0009c1f1) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x000a97fc) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x000a97fc) list_medium_line_x2_t2_g4_t

0x1c5a,	// (0x0009c1a6) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1c5a,	// (0x0009c1a6) list_medium_line_x2_t2_g3_g1

0x1c66,	// (0x0009c1b2) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1c66,	// (0x0009c1b2) list_medium_line_x2_t2_g3_g2

0x1c72,	// (0x0009c1be) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1c72,	// (0x0009c1be) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x000a9769) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x000a9769) list_medium_line_x2_t2_g3_g

0x2e90,	// (0x0009d3dc) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2e90,	// (0x0009d3dc) list_medium_line_x2_t2_g3_t1

0x1ca5,	// (0x0009c1f1) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1ca5,	// (0x0009c1f1) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x000a9801) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x000a9801) list_medium_line_x2_t2_g3_t

0x307a,	// (0x0009d5c6) main_sp_fs_list_pane_ParamLimits

0x307a,	// (0x0009d5c6) main_sp_fs_list_pane

0x3086,	// (0x0009d5d2) sp_fs_scroll_pane_ParamLimits

0x3086,	// (0x0009d5d2) sp_fs_scroll_pane

0x3092,	// (0x0009d5de) list_medium_line_x2_t3_t1

0x30a2,	// (0x0009d5ee) list_medium_line_x2_t3_t2

0x30b0,	// (0x0009d5fc) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x000a984c) list_medium_line_x2_t3_t

0x30be,	// (0x0009d60a) list_medium_line_x3_t4_t1

0x30ce,	// (0x0009d61a) list_medium_line_x3_t4_t2

0x30dc,	// (0x0009d628) list_medium_line_x3_t4_t3

0x30b0,	// (0x0009d5fc) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x000a9853) list_medium_line_x3_t4_t

0x30ea,	// (0x0009d636) list_medium_line_x4_t5_t1

0x30fa,	// (0x0009d646) list_medium_line_x4_t5_t2

0x30dc,	// (0x0009d628) list_medium_line_x4_t5_t3

0x3108,	// (0x0009d654) list_medium_line_x4_t5_t4

0x30b0,	// (0x0009d5fc) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x000a985c) list_medium_line_x4_t5_t

0x1c5a,	// (0x0009c1a6) list_medium_line_t4_g4_g1_ParamLimits

0x1c5a,	// (0x0009c1a6) list_medium_line_t4_g4_g1

0x1cee,	// (0x0009c23a) list_medium_line_t4_g4_g2_ParamLimits

0x1cee,	// (0x0009c23a) list_medium_line_t4_g4_g2

0x3116,	// (0x0009d662) list_medium_line_t4_g4_g3_ParamLimits

0x3116,	// (0x0009d662) list_medium_line_t4_g4_g3

0x1c72,	// (0x0009c1be) list_medium_line_t4_g4_g4_ParamLimits

0x1c72,	// (0x0009c1be) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x000a9867) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x000a9867) list_medium_line_t4_g4_g

0x3122,	// (0x0009d66e) list_medium_line_t4_g4_t1_ParamLimits

0x3122,	// (0x0009d66e) list_medium_line_t4_g4_t1

0x3137,	// (0x0009d683) list_medium_line_t4_g4_t2_ParamLimits

0x3137,	// (0x0009d683) list_medium_line_t4_g4_t2

0x314c,	// (0x0009d698) list_medium_line_t4_g4_t3_ParamLimits

0x314c,	// (0x0009d698) list_medium_line_t4_g4_t3

0x1ca5,	// (0x0009c1f1) list_medium_line_t4_g4_t4_ParamLimits

0x1ca5,	// (0x0009c1f1) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x000a9870) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x000a9870) list_medium_line_t4_g4_t

0x326c,	// (0x0009d7b8) chi_dic_find_pane_g1

0x4168,	// (0x0009e6b4) main_tport_pane

0x6cb3,	// (0x000a11ff) list_medium_line_plain_t1

0x6d93,	// (0x000a12df) list_medium_line_t2_g2_g1_ParamLimits

0x6d93,	// (0x000a12df) list_medium_line_t2_g2_g1

0x6d9f,	// (0x000a12eb) list_medium_line_t2_g2_g2_ParamLimits

0x6d9f,	// (0x000a12eb) list_medium_line_t2_g2_g2

0x0001,

0xf85a,	// (0x000a9da6) list_medium_line_t2_g2_g_ParamLimits

0xf85a,	// (0x000a9da6) list_medium_line_t2_g2_g

0x6dab,	// (0x000a12f7) list_medium_line_t2_g2_t1_ParamLimits

0x6dab,	// (0x000a12f7) list_medium_line_t2_g2_t1

0x6dc5,	// (0x000a1311) list_medium_line_t2_g2_t2_ParamLimits

0x6dc5,	// (0x000a1311) list_medium_line_t2_g2_t2

0x0001,

0xf85f,	// (0x000a9dab) list_medium_line_t2_g2_t_ParamLimits

0xf85f,	// (0x000a9dab) list_medium_line_t2_g2_t

0xa104,	// (0x000a4650) aid_sp_fs_list_icon_a_sm

0xa58c,	// (0x000a4ad8) aid_sp_fs_list_icon_d

0xb2f2,	// (0x000a583e) aid_sp_fs_text_primary

0xb2fb,	// (0x000a5847) aid_sp_fs_text_secondary

0x746c,	// (0x000a19b8) list_medium_line

0x746c,	// (0x000a19b8) list_medium_line_g2

0x746c,	// (0x000a19b8) list_medium_line_g3

0x746c,	// (0x000a19b8) list_medium_line_plain

0x746c,	// (0x000a19b8) list_medium_line_plain_t2

0x746c,	// (0x000a19b8) list_medium_line_plain_t3

0x746c,	// (0x000a19b8) list_medium_line_right_icon

0x746c,	// (0x000a19b8) list_medium_line_right_iconx2

0x746c,	// (0x000a19b8) list_medium_line_t2

0x746c,	// (0x000a19b8) list_medium_line_t2_g2

0x746c,	// (0x000a19b8) list_medium_line_t2_g3

0x746c,	// (0x000a19b8) list_medium_line_t2_right_icon

0x746c,	// (0x000a19b8) list_medium_line_t2_right_iconx2

0x746c,	// (0x000a19b8) list_medium_line_t3

0x746c,	// (0x000a19b8) list_medium_line_t3_g2

0x746c,	// (0x000a19b8) list_medium_line_t3_g3

0x746c,	// (0x000a19b8) list_medium_line_t3_right_iconx2

0x7475,	// (0x000a19c1) list_medium_line_t4_g4

0x747e,	// (0x000a19ca) list_medium_line_x2

0x747e,	// (0x000a19ca) list_medium_line_x2_t2_g2

0x747e,	// (0x000a19ca) list_medium_line_x2_t2_g3

0x747e,	// (0x000a19ca) list_medium_line_x2_t2_g4

0x747e,	// (0x000a19ca) list_medium_line_x2_t3

0x747e,	// (0x000a19ca) list_medium_line_x2_t3_g2

0x747e,	// (0x000a19ca) list_medium_line_x2_t3_g3

0x747e,	// (0x000a19ca) list_medium_line_x2_t3_g4

0x747e,	// (0x000a19ca) list_medium_line_x2_t4_g2

0x747e,	// (0x000a19ca) list_medium_line_x2_t4_g4

0x7487,	// (0x000a19d3) list_medium_line_x3

0x7487,	// (0x000a19d3) list_medium_line_x3_t4

0x7487,	// (0x000a19d3) list_medium_line_x3_t4_g4

0x7475,	// (0x000a19c1) list_medium_line_x4_t4

0x7475,	// (0x000a19c1) list_medium_line_x4_t4_g7

0x7475,	// (0x000a19c1) list_medium_line_x4_t5

0x7490,	// (0x000a19dc) list_single_fs_dyc_pane_ParamLimits

0x7490,	// (0x000a19dc) list_single_fs_dyc_pane

0x1c5a,	// (0x0009c1a6) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1c5a,	// (0x0009c1a6) list_medium_line_x4_t4_g7_g1

0x7be3,	// (0x000a212f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7be3,	// (0x000a212f) list_medium_line_x4_t4_g7_g2

0x7bef,	// (0x000a213b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7bef,	// (0x000a213b) list_medium_line_x4_t4_g7_g3

0x7bfe,	// (0x000a214a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7bfe,	// (0x000a214a) list_medium_line_x4_t4_g7_g4

0x7c0a,	// (0x000a2156) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7c0a,	// (0x000a2156) list_medium_line_x4_t4_g7_g5

0x7c19,	// (0x000a2165) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7c19,	// (0x000a2165) list_medium_line_x4_t4_g7_g6

0x7c28,	// (0x000a2174) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7c28,	// (0x000a2174) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa08,	// (0x000a9f54) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa08,	// (0x000a9f54) list_medium_line_x4_t4_g7_g

0x7c34,	// (0x000a2180) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7c34,	// (0x000a2180) list_medium_line_x4_t4_g7_t1

0x7c49,	// (0x000a2195) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7c49,	// (0x000a2195) list_medium_line_x4_t4_g7_t2

0x7c5e,	// (0x000a21aa) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7c5e,	// (0x000a21aa) list_medium_line_x4_t4_g7_t3

0x7c73,	// (0x000a21bf) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7c73,	// (0x000a21bf) list_medium_line_x4_t4_g7_t4

0x7c85,	// (0x000a21d1) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7c85,	// (0x000a21d1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa17,	// (0x000a9f63) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa17,	// (0x000a9f63) list_medium_line_x4_t4_g7_t

0x7c97,	// (0x000a21e3) list_single_dyc_row_pane_ParamLimits

0x7c97,	// (0x000a21e3) list_single_dyc_row_pane

0x8370,	// (0x000a28bc) call5_gesture_pane_ParamLimits

0x8370,	// (0x000a28bc) call5_gesture_pane

0x83a4,	// (0x000a28f0) call5_windows_pane_ParamLimits

0x83a4,	// (0x000a28f0) call5_windows_pane

0x83f7,	// (0x000a2943) call5_swipe_1_pane_cp_ParamLimits

0x83f7,	// (0x000a2943) call5_swipe_1_pane_cp

0x8403,	// (0x000a294f) call5_swipe_2_pane_cp_ParamLimits

0x8403,	// (0x000a294f) call5_swipe_2_pane_cp

0xaa7c,	// (0x000a4fc8) call5_image_pane_cp

0x840f,	// (0x000a295b) popup_call5_audio_first_window_cp_ParamLimits

0x840f,	// (0x000a295b) popup_call5_audio_first_window_cp

0xe641,	// (0x000a8b8d) call5_swipe_1_pane_g1_cp_ParamLimits

0xe641,	// (0x000a8b8d) call5_swipe_1_pane_g1_cp

0xe6ae,	// (0x000a8bfa) call5_swipe_1_pane_g2_cp

0xe65a,	// (0x000a8ba6) call5_swipe_1_pane_t1_cp_ParamLimits

0xe65a,	// (0x000a8ba6) call5_swipe_1_pane_t1_cp

0xe641,	// (0x000a8b8d) call5_swipe_2_pane_g1_cp_ParamLimits

0xe641,	// (0x000a8b8d) call5_swipe_2_pane_g1_cp

0xe6b6,	// (0x000a8c02) call5_swipe_2_pane_g2_cp

0xe6be,	// (0x000a8c0a) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6be,	// (0x000a8c0a) call5_swipe_2_pane_t1_cp

0xa57e,	// (0x000a4aca) main_sp_fs_email_pane

0xe6d3,	// (0x000a8c1f) main_sp_fs_listscroll_pane_te

0x841d,	// (0x000a2969) popup_sp_fs_action_menu_pane_ParamLimits

0x841d,	// (0x000a2969) popup_sp_fs_action_menu_pane

0xcd1c,	// (0x000a7268) bg_sp_fs_ctrlbar_pane_g1

0xe6dc,	// (0x000a8c28) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6e5,	// (0x000a8c31) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6ee,	// (0x000a8c3a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd1c,	// (0x000a7268) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfa98,	// (0x000a9fe4) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb01,	// (0x000a704d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb01,	// (0x000a704d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6f7,	// (0x000a8c43) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6f7,	// (0x000a8c43) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe703,	// (0x000a8c4f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe703,	// (0x000a8c4f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfaa1,	// (0x000a9fed) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfaa1,	// (0x000a9fed) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe70f,	// (0x000a8c5b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe70f,	// (0x000a8c5b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8461,	// (0x000a29ad) list_medium_line_t2_right_icon_g1

0x8469,	// (0x000a29b5) list_medium_line_t2_right_icon_t1

0x8479,	// (0x000a29c5) list_medium_line_t2_right_icon_t2

0x0001,

0xfaa6,	// (0x000a9ff2) list_medium_line_t2_right_icon_t

0xc914,	// (0x000a6e60) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc914,	// (0x000a6e60) bg_sp_fs_ctrlbar_pane

0x84ca,	// (0x000a2a16) main_sp_fs_ctrlbar_button_pane_cp01

0x84d2,	// (0x000a2a1e) main_sp_fs_ctrlbar_ddmenu_pane

0xe77c,	// (0x000a8cc8) main_sp_fs_ctrlbar_pane_g1

0xe788,	// (0x000a8cd4) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfaab,	// (0x000a9ff7) main_sp_fs_ctrlbar_pane_g

0x850e,	// (0x000a2a5a) main_sp_fs_ctrlbar_pane_t1

0x8549,	// (0x000a2a95) main_sp_fs_ctrlbar_pane

0x855f,	// (0x000a2aab) main_sp_fs_listscroll_pane_te_cp01

0x8570,	// (0x000a2abc) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8570,	// (0x000a2abc) popup_sp_fs_action_menu_pane_cp01

0xa57e,	// (0x000a4aca) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa57e,	// (0x000a4aca) bg_sp_fs_highlight_list_pane_cp01

0xa130,	// (0x000a467c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa130,	// (0x000a467c) sp_fs_action_menu_list_gene_pane_g1

0xe7af,	// (0x000a8cfb) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7af,	// (0x000a8cfb) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfab4,	// (0x000aa000) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfab4,	// (0x000aa000) sp_fs_action_menu_list_gene_pane_g

0xa13f,	// (0x000a468b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa13f,	// (0x000a468b) sp_fs_action_menu_list_gene_pane_t1

0xa157,	// (0x000a46a3) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa157,	// (0x000a46a3) sp_fs_action_menu_list_gene_pane

0xe7bc,	// (0x000a8d08) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7bc,	// (0x000a8d08) popup_sp_fs_action_menu_bg_pane

0xa176,	// (0x000a46c2) sp_fs_action_menu_list_pane_ParamLimits

0xa176,	// (0x000a46c2) sp_fs_action_menu_list_pane

0x859a,	// (0x000a2ae6) sp_fs_scroll_pane_cp01_ParamLimits

0x859a,	// (0x000a2ae6) sp_fs_scroll_pane_cp01

0x85c0,	// (0x000a2b0c) list_medium_line_plain_t2_t1

0x85d0,	// (0x000a2b1c) list_medium_line_plain_t2_t2

0x0001,

0xfab9,	// (0x000aa005) list_medium_line_plain_t2_t

0x85de,	// (0x000a2b2a) list_medium_line_plain_t3_t1

0x85ee,	// (0x000a2b3a) list_medium_line_plain_t3_t2

0x85fc,	// (0x000a2b48) list_medium_line_plain_t3_t3

0x0002,

0xfabe,	// (0x000aa00a) list_medium_line_plain_t3_t

0x1c5a,	// (0x0009c1a6) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1c5a,	// (0x0009c1a6) list_medium_line_x2_t2_g2_g1

0x1c72,	// (0x0009c1be) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1c72,	// (0x0009c1be) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x000a9777) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x000a9777) list_medium_line_x2_t2_g2_g

0x3122,	// (0x0009d66e) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3122,	// (0x0009d66e) list_medium_line_x2_t2_g2_t1

0x1ca5,	// (0x0009c1f1) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1ca5,	// (0x0009c1f1) list_medium_line_x2_t2_g2_t2

0x0001,

0xfac5,	// (0x000aa011) list_medium_line_x2_t2_g2_t_ParamLimits

0xfac5,	// (0x000aa011) list_medium_line_x2_t2_g2_t

0x1c5a,	// (0x0009c1a6) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1c5a,	// (0x0009c1a6) list_medium_line_x2_t4_g2_g1

0x860a,	// (0x000a2b56) list_medium_line_x2_t4_g2_g2_ParamLimits

0x860a,	// (0x000a2b56) list_medium_line_x2_t4_g2_g2

0x0001,

0xfaca,	// (0x000aa016) list_medium_line_x2_t4_g2_g_ParamLimits

0xfaca,	// (0x000aa016) list_medium_line_x2_t4_g2_g

0x861c,	// (0x000a2b68) list_medium_line_x2_t4_g2_t1_ParamLimits

0x861c,	// (0x000a2b68) list_medium_line_x2_t4_g2_t1

0x8636,	// (0x000a2b82) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8636,	// (0x000a2b82) list_medium_line_x2_t4_g2_t2

0x864c,	// (0x000a2b98) list_medium_line_x2_t4_g2_t3_ParamLimits

0x864c,	// (0x000a2b98) list_medium_line_x2_t4_g2_t3

0x1ca5,	// (0x0009c1f1) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1ca5,	// (0x0009c1f1) list_medium_line_x2_t4_g2_t4

0x0003,

0xfacf,	// (0x000aa01b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfacf,	// (0x000aa01b) list_medium_line_x2_t4_g2_t

0x8661,	// (0x000a2bad) list_medium_line_t3_right_iconx2_g1

0x8461,	// (0x000a29ad) list_medium_line_t3_right_iconx2_g2

0x8669,	// (0x000a2bb5) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfad8,	// (0x000aa024) list_medium_line_t3_right_iconx2_g

0x8671,	// (0x000a2bbd) list_medium_line_t3_right_iconx2_t1

0x8681,	// (0x000a2bcd) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfadf,	// (0x000aa02b) list_medium_line_t3_right_iconx2_t

0x1c5a,	// (0x0009c1a6) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1c5a,	// (0x0009c1a6) list_medium_line_x3_t4_g4_g1

0x1c66,	// (0x0009c1b2) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1c66,	// (0x0009c1b2) list_medium_line_x3_t4_g4_g2

0x1cee,	// (0x0009c23a) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1cee,	// (0x0009c23a) list_medium_line_x3_t4_g4_g3

0x868f,	// (0x000a2bdb) list_medium_line_x3_t4_g4_g4_ParamLimits

0x868f,	// (0x000a2bdb) list_medium_line_x3_t4_g4_g4

0x0003,

0xfae4,	// (0x000aa030) list_medium_line_x3_t4_g4_g_ParamLimits

0xfae4,	// (0x000aa030) list_medium_line_x3_t4_g4_g

0x869b,	// (0x000a2be7) list_medium_line_x3_t4_g4_t1_ParamLimits

0x869b,	// (0x000a2be7) list_medium_line_x3_t4_g4_t1

0x86b2,	// (0x000a2bfe) list_medium_line_x3_t4_g4_t2_ParamLimits

0x86b2,	// (0x000a2bfe) list_medium_line_x3_t4_g4_t2

0x3137,	// (0x0009d683) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3137,	// (0x0009d683) list_medium_line_x3_t4_g4_t3

0x86c7,	// (0x000a2c13) list_medium_line_x3_t4_g4_t4_ParamLimits

0x86c7,	// (0x000a2c13) list_medium_line_x3_t4_g4_t4

0x0003,

0xfaed,	// (0x000aa039) list_medium_line_x3_t4_g4_t_ParamLimits

0xfaed,	// (0x000aa039) list_medium_line_x3_t4_g4_t

0x86e4,	// (0x000a2c30) list_single_dyc_row_text_pane_t1_ParamLimits

0x86e4,	// (0x000a2c30) list_single_dyc_row_text_pane_t1

0x871b,	// (0x000a2c67) list_single_dyc_row_text_pane_t2_ParamLimits

0x871b,	// (0x000a2c67) list_single_dyc_row_text_pane_t2

0xa196,	// (0x000a46e2) list_single_dyc_row_text_pane_t3_ParamLimits

0xa196,	// (0x000a46e2) list_single_dyc_row_text_pane_t3

0x0005,

0xfaf6,	// (0x000aa042) list_single_dyc_row_text_pane_t_ParamLimits

0xfaf6,	// (0x000aa042) list_single_dyc_row_text_pane_t

0xa1ba,	// (0x000a4706) list_single_dyc_row_pane_g1_ParamLimits

0xa1ba,	// (0x000a4706) list_single_dyc_row_pane_g1

0xa1c6,	// (0x000a4712) list_single_dyc_row_pane_g2_ParamLimits

0xa1c6,	// (0x000a4712) list_single_dyc_row_pane_g2

0xa1d2,	// (0x000a471e) list_single_dyc_row_pane_g3_ParamLimits

0xa1d2,	// (0x000a471e) list_single_dyc_row_pane_g3

0xa1de,	// (0x000a472a) list_single_dyc_row_pane_g4_ParamLimits

0xa1de,	// (0x000a472a) list_single_dyc_row_pane_g4

0x0003,

0xfb03,	// (0x000aa04f) list_single_dyc_row_pane_g_ParamLimits

0xfb03,	// (0x000aa04f) list_single_dyc_row_pane_g

0xa1ea,	// (0x000a4736) list_single_dyc_row_text_pane_ParamLimits

0xa1ea,	// (0x000a4736) list_single_dyc_row_text_pane

0x9be6,	// (0x000a4132) bg_sp_fs_scroll_pane

0xe7ca,	// (0x000a8d16) thumb_sp_fs_scroll_pane

0x6d93,	// (0x000a12df) list_medium_line_g1_ParamLimits

0x6d93,	// (0x000a12df) list_medium_line_g1

0x883e,	// (0x000a2d8a) list_medium_line_t1_ParamLimits

0x883e,	// (0x000a2d8a) list_medium_line_t1

0x1c5a,	// (0x0009c1a6) list_medium_line_x2_g1_ParamLimits

0x1c5a,	// (0x0009c1a6) list_medium_line_x2_g1

0x1c66,	// (0x0009c1b2) list_medium_line_x2_g2_ParamLimits

0x1c66,	// (0x0009c1b2) list_medium_line_x2_g2

0x0001,

0xfb0c,	// (0x000aa058) list_medium_line_x2_g_ParamLimits

0xfb0c,	// (0x000aa058) list_medium_line_x2_g

0xa209,	// (0x000a4755) list_medium_line_x2_t1_ParamLimits

0xa209,	// (0x000a4755) list_medium_line_x2_t1

0x1c5a,	// (0x0009c1a6) list_medium_line_x3_g1_ParamLimits

0x1c5a,	// (0x0009c1a6) list_medium_line_x3_g1

0x1c66,	// (0x0009c1b2) list_medium_line_x3_g2_ParamLimits

0x1c66,	// (0x0009c1b2) list_medium_line_x3_g2

0x0001,

0xfb0c,	// (0x000aa058) list_medium_line_x3_g_ParamLimits

0xfb0c,	// (0x000aa058) list_medium_line_x3_g

0xa209,	// (0x000a4755) list_medium_line_x3_t1_ParamLimits

0xa209,	// (0x000a4755) list_medium_line_x3_t1

0xe7d3,	// (0x000a8d1f) thumb_sp_fs_scroll_pane_g1

0xe7dc,	// (0x000a8d28) thumb_sp_fs_scroll_pane_g2

0xe7e5,	// (0x000a8d31) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0996,	// (0x0009aee2) thumb_sp_fs_scroll_pane_g

0xe7d3,	// (0x000a8d1f) bg_sp_fs_scroll_pane_g1

0xe7dc,	// (0x000a8d28) bg_sp_fs_scroll_pane_g2

0xe7e5,	// (0x000a8d31) bg_sp_fs_scroll_pane_g3

0x0002,

0x0996,	// (0x0009aee2) bg_sp_fs_scroll_pane_g

0x1c5a,	// (0x0009c1a6) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1c5a,	// (0x0009c1a6) list_medium_line_x2_t3_g4_g1

0x1ce2,	// (0x0009c22e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1ce2,	// (0x0009c22e) list_medium_line_x2_t3_g4_g2

0x1c66,	// (0x0009c1b2) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1c66,	// (0x0009c1b2) list_medium_line_x2_t3_g4_g3

0x1c72,	// (0x0009c1be) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1c72,	// (0x0009c1be) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x000a97f3) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x000a97f3) list_medium_line_x2_t3_g4_g

0x8853,	// (0x000a2d9f) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8853,	// (0x000a2d9f) list_medium_line_x2_t3_g4_t1

0x8869,	// (0x000a2db5) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8869,	// (0x000a2db5) list_medium_line_x2_t3_g4_t2

0x1ca5,	// (0x0009c1f1) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1ca5,	// (0x0009c1f1) list_medium_line_x2_t3_g4_t3

0x0002,

0xfb11,	// (0x000aa05d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfb11,	// (0x000aa05d) list_medium_line_x2_t3_g4_t

0x6d93,	// (0x000a12df) list_medium_line_g2_g1_ParamLimits

0x6d93,	// (0x000a12df) list_medium_line_g2_g1

0x6d9f,	// (0x000a12eb) list_medium_line_g2_g2_ParamLimits

0x6d9f,	// (0x000a12eb) list_medium_line_g2_g2

0x0001,

0xf85a,	// (0x000a9da6) list_medium_line_g2_g_ParamLimits

0xf85a,	// (0x000a9da6) list_medium_line_g2_g

0x8883,	// (0x000a2dcf) list_medium_line_g2_t1_ParamLimits

0x8883,	// (0x000a2dcf) list_medium_line_g2_t1

0x6d93,	// (0x000a12df) list_medium_line_t3_g2_g1_ParamLimits

0x6d93,	// (0x000a12df) list_medium_line_t3_g2_g1

0x6d9f,	// (0x000a12eb) list_medium_line_t3_g2_g2_ParamLimits

0x6d9f,	// (0x000a12eb) list_medium_line_t3_g2_g2

0x0001,

0xf85a,	// (0x000a9da6) list_medium_line_t3_g2_g_ParamLimits

0xf85a,	// (0x000a9da6) list_medium_line_t3_g2_g

0x8898,	// (0x000a2de4) list_medium_line_t3_g2_t1_ParamLimits

0x8898,	// (0x000a2de4) list_medium_line_t3_g2_t1

0x88b2,	// (0x000a2dfe) list_medium_line_t3_g2_t2_ParamLimits

0x88b2,	// (0x000a2dfe) list_medium_line_t3_g2_t2

0x88c8,	// (0x000a2e14) list_medium_line_t3_g2_t3_ParamLimits

0x88c8,	// (0x000a2e14) list_medium_line_t3_g2_t3

0x0002,

0xfb18,	// (0x000aa064) list_medium_line_t3_g2_t_ParamLimits

0xfb18,	// (0x000aa064) list_medium_line_t3_g2_t

0x8461,	// (0x000a29ad) list_medium_line_right_icon_g1

0x88de,	// (0x000a2e2a) list_medium_line_right_icon_t1

0x6d93,	// (0x000a12df) list_medium_line_t2_g1_ParamLimits

0x6d93,	// (0x000a12df) list_medium_line_t2_g1

0x88ec,	// (0x000a2e38) list_medium_line_t2_t1_ParamLimits

0x88ec,	// (0x000a2e38) list_medium_line_t2_t1

0x8906,	// (0x000a2e52) list_medium_line_t2_t2_ParamLimits

0x8906,	// (0x000a2e52) list_medium_line_t2_t2

0x0001,

0xfb1f,	// (0x000aa06b) list_medium_line_t2_t_ParamLimits

0xfb1f,	// (0x000aa06b) list_medium_line_t2_t

0x6d93,	// (0x000a12df) list_medium_line_t3_g1_ParamLimits

0x6d93,	// (0x000a12df) list_medium_line_t3_g1

0x891b,	// (0x000a2e67) list_medium_line_t3_t1_ParamLimits

0x891b,	// (0x000a2e67) list_medium_line_t3_t1

0x8935,	// (0x000a2e81) list_medium_line_t3_t2_ParamLimits

0x8935,	// (0x000a2e81) list_medium_line_t3_t2

0x894b,	// (0x000a2e97) list_medium_line_t3_t3_ParamLimits

0x894b,	// (0x000a2e97) list_medium_line_t3_t3

0x0002,

0xfb24,	// (0x000aa070) list_medium_line_t3_t_ParamLimits

0xfb24,	// (0x000aa070) list_medium_line_t3_t

0x6d93,	// (0x000a12df) list_medium_line_g3_g1_ParamLimits

0x6d93,	// (0x000a12df) list_medium_line_g3_g1

0x8960,	// (0x000a2eac) list_medium_line_g3_g2_ParamLimits

0x8960,	// (0x000a2eac) list_medium_line_g3_g2

0x6d9f,	// (0x000a12eb) list_medium_line_g3_g3_ParamLimits

0x6d9f,	// (0x000a12eb) list_medium_line_g3_g3

0x0002,

0xfb2b,	// (0x000aa077) list_medium_line_g3_g_ParamLimits

0xfb2b,	// (0x000aa077) list_medium_line_g3_g

0x896c,	// (0x000a2eb8) list_medium_line_g3_t1_ParamLimits

0x896c,	// (0x000a2eb8) list_medium_line_g3_t1

0x6d93,	// (0x000a12df) list_medium_line_t2_g3_g1_ParamLimits

0x6d93,	// (0x000a12df) list_medium_line_t2_g3_g1

0x8960,	// (0x000a2eac) list_medium_line_t2_g3_g2_ParamLimits

0x8960,	// (0x000a2eac) list_medium_line_t2_g3_g2

0x6d9f,	// (0x000a12eb) list_medium_line_t2_g3_g3_ParamLimits

0x6d9f,	// (0x000a12eb) list_medium_line_t2_g3_g3

0x0002,

0xfb2b,	// (0x000aa077) list_medium_line_t2_g3_g_ParamLimits

0xfb2b,	// (0x000aa077) list_medium_line_t2_g3_g

0x8981,	// (0x000a2ecd) list_medium_line_t2_g3_t1_ParamLimits

0x8981,	// (0x000a2ecd) list_medium_line_t2_g3_t1

0x899b,	// (0x000a2ee7) list_medium_line_t2_g3_t2_ParamLimits

0x899b,	// (0x000a2ee7) list_medium_line_t2_g3_t2

0x0001,

0xfb32,	// (0x000aa07e) list_medium_line_t2_g3_t_ParamLimits

0xfb32,	// (0x000aa07e) list_medium_line_t2_g3_t

0x6d93,	// (0x000a12df) list_medium_line_t3_g3_g1_ParamLimits

0x6d93,	// (0x000a12df) list_medium_line_t3_g3_g1

0x8960,	// (0x000a2eac) list_medium_line_t3_g3_g2_ParamLimits

0x8960,	// (0x000a2eac) list_medium_line_t3_g3_g2

0x6d9f,	// (0x000a12eb) list_medium_line_t3_g3_g3_ParamLimits

0x6d9f,	// (0x000a12eb) list_medium_line_t3_g3_g3

0x0002,

0xfb2b,	// (0x000aa077) list_medium_line_t3_g3_g_ParamLimits

0xfb2b,	// (0x000aa077) list_medium_line_t3_g3_g

0x89b1,	// (0x000a2efd) list_medium_line_t3_g3_t1_ParamLimits

0x89b1,	// (0x000a2efd) list_medium_line_t3_g3_t1

0x89ca,	// (0x000a2f16) list_medium_line_t3_g3_t2_ParamLimits

0x89ca,	// (0x000a2f16) list_medium_line_t3_g3_t2

0x89e0,	// (0x000a2f2c) list_medium_line_t3_g3_t3_ParamLimits

0x89e0,	// (0x000a2f2c) list_medium_line_t3_g3_t3

0x0002,

0xfb37,	// (0x000aa083) list_medium_line_t3_g3_t_ParamLimits

0xfb37,	// (0x000aa083) list_medium_line_t3_g3_t

0x8661,	// (0x000a2bad) list_medium_line_right_iconx2_g1

0x8461,	// (0x000a29ad) list_medium_line_right_iconx2_g2

0x0001,

0xfb3e,	// (0x000aa08a) list_medium_line_right_iconx2_g

0xa59c,	// (0x000a4ae8) list_medium_line_right_iconx2_t1

0x8661,	// (0x000a2bad) list_medium_line_t2_right_iconx2_g1

0x8461,	// (0x000a29ad) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfb3e,	// (0x000aa08a) list_medium_line_t2_right_iconx2_g

0x89f6,	// (0x000a2f42) list_medium_line_t2_right_iconx2_t1

0x8a06,	// (0x000a2f52) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb43,	// (0x000aa08f) list_medium_line_t2_right_iconx2_t

0x8a14,	// (0x000a2f60) list_medium_line_x4_t4_t1

0x8a22,	// (0x000a2f6e) list_medium_line_x4_t4_t2

0x8a32,	// (0x000a2f7e) list_medium_line_x4_t4_t3

0x8a42,	// (0x000a2f8e) list_medium_line_x4_t4_t4

0x0003,

0xfb48,	// (0x000aa094) list_medium_line_x4_t4_t

0x8a7c,	// (0x000a2fc8) tport_appsw_pane_ParamLimits

0x8a7c,	// (0x000a2fc8) tport_appsw_pane

0x8a8a,	// (0x000a2fd6) tport_contact_pane_ParamLimits

0x8a8a,	// (0x000a2fd6) tport_contact_pane

0x8a9a,	// (0x000a2fe6) tport_listscroll_pane_ParamLimits

0x8a9a,	// (0x000a2fe6) tport_listscroll_pane

0x8aaa,	// (0x000a2ff6) cell_tport_appsw_pane_ParamLimits

0x8aaa,	// (0x000a2ff6) cell_tport_appsw_pane

0xcfc6,	// (0x000a7512) tport_appsw_pane_g1_ParamLimits

0xcfc6,	// (0x000a7512) tport_appsw_pane_g1

0xe7ee,	// (0x000a8d3a) tport_contact_pane_g1

0xe7f7,	// (0x000a8d43) tport_contact_pane_t1

0xe805,	// (0x000a8d51) tport_contact_pane_t2

0x0001,

0x09dd,	// (0x0009af29) tport_contact_pane_t

0xe813,	// (0x000a8d5f) list_tport_pane

0xe81c,	// (0x000a8d68) scroll_pane_cp_030

0x8add,	// (0x000a3029) cell_tport_appsw_pane_g1

0x8aed,	// (0x000a3039) cell_tport_appsw_pane_t1

0x8afb,	// (0x000a3047) grid_highlight_pane_cp019

0x8b03,	// (0x000a304f) list_tport_double_graphic_pane_ParamLimits

0x8b03,	// (0x000a304f) list_tport_double_graphic_pane

0xa57e,	// (0x000a4aca) list_highlight_pane_cp023_ParamLimits

0xa57e,	// (0x000a4aca) list_highlight_pane_cp023

0x8b14,	// (0x000a3060) list_tport_double_graphic_pane_g1_ParamLimits

0x8b14,	// (0x000a3060) list_tport_double_graphic_pane_g1

0x8b21,	// (0x000a306d) list_tport_double_graphic_pane_t1_ParamLimits

0x8b21,	// (0x000a306d) list_tport_double_graphic_pane_t1

0x8b36,	// (0x000a3082) list_tport_double_graphic_pane_t2_ParamLimits

0x8b36,	// (0x000a3082) list_tport_double_graphic_pane_t2

0x0001,

0xfb58,	// (0x000aa0a4) list_tport_double_graphic_pane_t_ParamLimits

0xfb58,	// (0x000aa0a4) list_tport_double_graphic_pane_t

0x9be6,	// (0x000a4132) main_cale_note_pane

0x6528,	// (0x000a0a74) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6528,	// (0x000a0a74) cell_vitu2_function_top_wide_pane_cp01

0x8043,	// (0x000a258f) wait_bar_pane_cp05_ParamLimits

0xa57e,	// (0x000a4aca) listscroll_cmail_pane

0xe825,	// (0x000a8d71) list_cmail_pane

0x8b48,	// (0x000a3094) list_cmail_body_pane

0x8b70,	// (0x000a30bc) list_single_cmail_header_caption_pane

0x8b9c,	// (0x000a30e8) list_single_cmail_header_detail_pane_ParamLimits

0x8b9c,	// (0x000a30e8) list_single_cmail_header_detail_pane

0xe835,	// (0x000a8d81) list_single_cmail_header_caption_pane_t1

0x8bd5,	// (0x000a3121) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8bd5,	// (0x000a3121) list_single_cmail_header_detail_pane_g1

0xa5aa,	// (0x000a4af6) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa5aa,	// (0x000a4af6) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb5d,	// (0x000aa0a9) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb5d,	// (0x000aa0a9) list_single_cmail_header_detail_pane_g

0xa21f,	// (0x000a476b) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa21f,	// (0x000a476b) list_single_cmail_header_detail_pane_t1

0xa27f,	// (0x000a47cb) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa27f,	// (0x000a47cb) list_single_cmail_header_editor_pane_bg

0xe2ef,	// (0x000a883b) list_cmail_body_pane_g1

0xe859,	// (0x000a8da5) list_cmail_body_pane_t1

0xd6c7,	// (0x000a7c13) list_single_cmail_header_editor_pane_bg_g1

0xacd5,	// (0x000a5221) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6d7,	// (0x000a7c23) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6cf,	// (0x000a7c1b) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd915,	// (0x000a7e61) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6f7,	// (0x000a7c43) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6e7,	// (0x000a7c33) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6ef,	// (0x000a7c3b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacb5,	// (0x000a5201) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8beb,	// (0x000a3137) calenote_gesture_pane_ParamLimits

0x8beb,	// (0x000a3137) calenote_gesture_pane

0x8c05,	// (0x000a3151) calenote_window_pane_ParamLimits

0x8c05,	// (0x000a3151) calenote_window_pane

0xe867,	// (0x000a8db3) popup_note_window_cp01

0x8c1d,	// (0x000a3169) calenote_swipe_1_pane_ParamLimits

0x8c1d,	// (0x000a3169) calenote_swipe_1_pane

0x8403,	// (0x000a294f) calenote_swipe_2_pane_ParamLimits

0x8403,	// (0x000a294f) calenote_swipe_2_pane

0xe641,	// (0x000a8b8d) calenote_swipe_1_pane_g1_ParamLimits

0xe641,	// (0x000a8b8d) calenote_swipe_1_pane_g1

0xe64e,	// (0x000a8b9a) calenote_swipe_1_pane_g2_ParamLimits

0xe64e,	// (0x000a8b9a) calenote_swipe_1_pane_g2

0x0001,

0xfa8e,	// (0x000a9fda) calenote_swipe_1_pane_g_ParamLimits

0xfa8e,	// (0x000a9fda) calenote_swipe_1_pane_g

0xe879,	// (0x000a8dc5) calenote_swipe_1_pane_t1_ParamLimits

0xe879,	// (0x000a8dc5) calenote_swipe_1_pane_t1

0xe641,	// (0x000a8b8d) calenote_swipe_2_pane_g1_ParamLimits

0xe641,	// (0x000a8b8d) calenote_swipe_2_pane_g1

0xe898,	// (0x000a8de4) calenote_swipe_2_pane_g2_ParamLimits

0xe898,	// (0x000a8de4) calenote_swipe_2_pane_g2

0x0001,

0xfb69,	// (0x000aa0b5) calenote_swipe_2_pane_g_ParamLimits

0xfb69,	// (0x000aa0b5) calenote_swipe_2_pane_g

0xe8a4,	// (0x000a8df0) calenote_swipe_2_pane_t1_ParamLimits

0xe8a4,	// (0x000a8df0) calenote_swipe_2_pane_t1

0x9be6,	// (0x000a4132) main_mup_navstr_pane

0x515c,	// (0x0009f6a8) main_mup3_pane_t7_ParamLimits

0x515c,	// (0x0009f6a8) main_mup3_pane_t7

0x5ba3,	// (0x000a00ef) main_mp4_pane_g6_ParamLimits

0x5ba3,	// (0x000a00ef) main_mp4_pane_g6

0x5f41,	// (0x000a048d) main_image3_pane_t4_ParamLimits

0x5f41,	// (0x000a048d) main_image3_pane_t4

0x8c30,	// (0x000a317c) popup_navstr_preview_pane_ParamLimits

0x8c30,	// (0x000a317c) popup_navstr_preview_pane

0x8c3c,	// (0x000a3188) scroll_navstr_pane_ParamLimits

0x8c3c,	// (0x000a3188) scroll_navstr_pane

0x9be6,	// (0x000a4132) bg_popup_preview_window_pane_cp04

0xe8cb,	// (0x000a8e17) popup_navstr_preview_pane_t1

0x8c48,	// (0x000a3194) scroll_navstr_pane_g1_ParamLimits

0x8c48,	// (0x000a3194) scroll_navstr_pane_g1

0x8c55,	// (0x000a31a1) scroll_navstr_pane_t1_ParamLimits

0x8c55,	// (0x000a31a1) scroll_navstr_pane_t1

0xe870,	// (0x000a8dbc) bg_button_pane_cp014

0xe870,	// (0x000a8dbc) bg_button_pane_cp030

0x8316,	// (0x000a2862) list_double_fisheye_pane_g4_ParamLimits

0x8316,	// (0x000a2862) list_double_fisheye_pane_g4

0x8322,	// (0x000a286e) list_double_fisheye_pane_g5_ParamLimits

0x8322,	// (0x000a286e) list_double_fisheye_pane_g5

0xd534,	// (0x000a7a80) sp_fs_scroll_pane_cp03

0xe77c,	// (0x000a8cc8) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe788,	// (0x000a8cd4) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfaab,	// (0x000a9ff7) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x850e,	// (0x000a2a5a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe82d,	// (0x000a8d79) sp_fs_scroll_pane_cp02

0xa994,	// (0x000a4ee0) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa994,	// (0x000a4ee0) popup_sp_fs_calendar_preview_list_single_pane

0x9be6,	// (0x000a4132) main_cam6_pano_pane

0x414c,	// (0x0009e698) main_mup3_pane_ParamLimits

0x9be6,	// (0x000a4132) main_phacti_pane

0x7f18,	// (0x000a2464) bg_button_pane_cp11

0x7f30,	// (0x000a247c) main_mobtv_info_pane_g2_ParamLimits

0x7f30,	// (0x000a247c) main_mobtv_info_pane_g2

0x0001,

0xfa40,	// (0x000a9f8c) main_mobtv_info_pane_g_ParamLimits

0xfa40,	// (0x000a9f8c) main_mobtv_info_pane_g

0x80e2,	// (0x000a262e) sc_clock_pane_t5_ParamLimits

0x80e2,	// (0x000a262e) sc_clock_pane_t5

0x8183,	// (0x000a26cf) main_radioblah_pane_g1_ParamLimits

0xe58d,	// (0x000a8ad9) main_radioblah_pane_t3_ParamLimits

0xe58d,	// (0x000a8ad9) main_radioblah_pane_t3

0xe5a5,	// (0x000a8af1) main_radioblah_pane_t4_ParamLimits

0xe5a5,	// (0x000a8af1) main_radioblah_pane_t4

0x81a1,	// (0x000a26ed) main_radioblah_text_pane_ParamLimits

0x81a1,	// (0x000a26ed) main_radioblah_text_pane

0x81ae,	// (0x000a26fa) main_radioblah_info_pane_g1_ParamLimits

0x8243,	// (0x000a278f) main_radioblah_info_pane_t4_ParamLimits

0x8243,	// (0x000a278f) main_radioblah_info_pane_t4

0xa57e,	// (0x000a4aca) main_sp_fs_calendar_pane

0x8c67,	// (0x000a31b3) main_phacti_pane_g1

0x8c6f,	// (0x000a31bb) phacti_note_pane_ParamLimits

0x8c6f,	// (0x000a31bb) phacti_note_pane

0xe8e2,	// (0x000a8e2e) phacti_term_pane_ParamLimits

0xe8e2,	// (0x000a8e2e) phacti_term_pane

0xe8f7,	// (0x000a8e43) phacti_note_pane_t1_ParamLimits

0xe8f7,	// (0x000a8e43) phacti_note_pane_t1

0xa296,	// (0x000a47e2) phacti_term_pane_g1

0xa29e,	// (0x000a47ea) phacti_term_pane_t1_ParamLimits

0xa29e,	// (0x000a47ea) phacti_term_pane_t1

0xe90e,	// (0x000a8e5a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe916,	// (0x000a8e62) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0a04,	// (0x0009af50) popup_sp_fs_calendar_preview_list_single_pane_g

0xe91e,	// (0x000a8e6a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe91e,	// (0x000a8e6a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe934,	// (0x000a8e80) aid_popup_sp_fs_bg_corner_pane

0xcd1c,	// (0x000a7268) popup_sp_fs_calendar_preview_bg_pane_g1

0x9be6,	// (0x000a4132) popup_sp_fs_calendar_preview_bg_pane

0xa2c8,	// (0x000a4814) popup_sp_fs_calendar_preview_list_pane

0xc914,	// (0x000a6e60) bg_main_sp_fs_cale_pane_ParamLimits

0xc914,	// (0x000a6e60) bg_main_sp_fs_cale_pane

0xa2d9,	// (0x000a4825) listscroll_cale_mrui_pane_ParamLimits

0xa2d9,	// (0x000a4825) listscroll_cale_mrui_pane

0xa2ee,	// (0x000a483a) listscroll_sp_fs_schedule_track_pane

0xa2f7,	// (0x000a4843) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa2f7,	// (0x000a4843) main_sp_fs_ctrlbar_pane_cp01

0xe93c,	// (0x000a8e88) main_sp_fs_ribbon_pane

0xa30a,	// (0x000a4856) popup_sp_fs_cale_preview_window

0x8cd2,	// (0x000a321e) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8cd2,	// (0x000a321e) list_single_sp_fs_schedule_track_pane

0xea90,	// (0x000a8fdc) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xea90,	// (0x000a8fdc) bg_sp_fs_highlight_list_pane_cp03

0x8cf5,	// (0x000a3241) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8cf5,	// (0x000a3241) list_single_sp_fs_schedule_track_pane_g1

0x8d01,	// (0x000a324d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d01,	// (0x000a324d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb73,	// (0x000aa0bf) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb73,	// (0x000aa0bf) list_single_sp_fs_schedule_track_pane_g

0x8d0d,	// (0x000a3259) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d0d,	// (0x000a3259) list_single_sp_fs_schedule_track_pane_t1

0x8d25,	// (0x000a3271) sp_fs_schedule_track_pane_ParamLimits

0x8d25,	// (0x000a3271) sp_fs_schedule_track_pane

0xe944,	// (0x000a8e90) sp_fs_schedule_track_pane_g1

0xe94c,	// (0x000a8e98) sp_fs_schedule_track_pane_g2

0xe954,	// (0x000a8ea0) sp_fs_schedule_track_pane_g3

0xe95c,	// (0x000a8ea8) sp_fs_schedule_track_pane_g4

0xe964,	// (0x000a8eb0) sp_fs_schedule_track_pane_g5

0x0004,

0x0a0e,	// (0x0009af5a) sp_fs_schedule_track_pane_g

0xd6c7,	// (0x000a7c13) bg_sp_fs_schedule_viewer_highlight_g1

0xacd5,	// (0x000a5221) bg_sp_fs_schedule_viewer_highlight_g2

0xd6cf,	// (0x000a7c1b) bg_sp_fs_schedule_viewer_highlight_g3

0xd6d7,	// (0x000a7c23) bg_sp_fs_schedule_viewer_highlight_g4

0xd915,	// (0x000a7e61) bg_sp_fs_schedule_viewer_highlight_g5

0xd6e7,	// (0x000a7c33) bg_sp_fs_schedule_viewer_highlight_g6

0xd6ef,	// (0x000a7c3b) bg_sp_fs_schedule_viewer_highlight_g7

0xd6f7,	// (0x000a7c43) bg_sp_fs_schedule_viewer_highlight_g8

0xacb5,	// (0x000a5201) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb78,	// (0x000aa0c4) bg_sp_fs_schedule_viewer_highlight_g

0x9be6,	// (0x000a4132) bg_main_sp_fs_ribbon_pane

0x8d35,	// (0x000a3281) main_sp_fs_ribbon_pane_g1

0xe96c,	// (0x000a8eb8) main_sp_fs_ribbon_pane_t1

0x8d3e,	// (0x000a328a) main_sp_fs_ribbon_pane_t2

0xe97b,	// (0x000a8ec7) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb8b,	// (0x000aa0d7) main_sp_fs_ribbon_pane_t

0xe98a,	// (0x000a8ed6) main_sp_fs_ribbon_scheduler_pane

0xe992,	// (0x000a8ede) bg_main_sp_fs_ribbon_pane_g1

0xe99b,	// (0x000a8ee7) bg_main_sp_fs_ribbon_pane_g2

0xe9a4,	// (0x000a8ef0) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0a33,	// (0x0009af7f) bg_main_sp_fs_ribbon_pane_g

0xe9ac,	// (0x000a8ef8) main_sp_fs_ribbon_scheduler_pane_g1

0xe9b5,	// (0x000a8f01) main_sp_fs_ribbon_scheduler_pane_g2

0xe9be,	// (0x000a8f0a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0a3a,	// (0x0009af86) main_sp_fs_ribbon_scheduler_pane_g

0xe9c7,	// (0x000a8f13) list_cale_mrui_pane

0x8d4d,	// (0x000a3299) sp_fs_scroll_pane_cp07_ParamLimits

0x8d4d,	// (0x000a3299) sp_fs_scroll_pane_cp07

0x8d69,	// (0x000a32b5) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8d69,	// (0x000a32b5) bg_sp_fs_schedule_viewer_highlight

0xe9d4,	// (0x000a8f20) list_single_sp_fs_schedule_track_pane_cp01

0xe9dc,	// (0x000a8f28) list_sp_fs_schedule_track_pane

0xe9e4,	// (0x000a8f30) sp_fs_scroll_pane_cp06_ParamLimits

0xe9e4,	// (0x000a8f30) sp_fs_scroll_pane_cp06

0xcd1c,	// (0x000a7268) bgmain_sp_fs_calendar_pane_g1

0x8d76,	// (0x000a32c2) list_single_cale_mrui_pane_ParamLimits

0x8d76,	// (0x000a32c2) list_single_cale_mrui_pane

0xa31c,	// (0x000a4868) list_single_cale_mrui_row_pane_ParamLimits

0xa31c,	// (0x000a4868) list_single_cale_mrui_row_pane

0xa329,	// (0x000a4875) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa329,	// (0x000a4875) list_single_cale_mrui_row_pane_g1

0xa361,	// (0x000a48ad) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa361,	// (0x000a48ad) list_single_cale_mrui_row_pane_t1

0x8da4,	// (0x000a32f0) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8da4,	// (0x000a32f0) list_single_cale_mrui_row_pane_t2

0xa5b6,	// (0x000a4b02) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa5b6,	// (0x000a4b02) list_single_cale_mrui_row_pane_t3

0xa5e5,	// (0x000a4b31) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa5e5,	// (0x000a4b31) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb99,	// (0x000aa0e5) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb99,	// (0x000aa0e5) list_single_cale_mrui_row_pane_t

0x8e0a,	// (0x000a3356) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e0a,	// (0x000a3356) list_single_cmail_header_editor_pane_bg_cp01

0x8e2a,	// (0x000a3376) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e2a,	// (0x000a3376) list_single_cmail_header_editor_pane_bg_cp02

0x8e46,	// (0x000a3392) main_radioblah_text_pane_t1_ParamLimits

0x8e46,	// (0x000a3392) main_radioblah_text_pane_t1

0xea03,	// (0x000a8f4f) cam6_indi_pane_cp01

0xea0b,	// (0x000a8f57) cam6_mode_pane_cp01

0xea13,	// (0x000a8f5f) cam6_pano_pane

0xea1c,	// (0x000a8f68) cam6_zoom_pane_cp01

0xea24,	// (0x000a8f70) cam6_pano_image_pane

0xea2f,	// (0x000a8f7b) cam6_pano_pane_g1

0xe2ef,	// (0x000a883b) cam6_pano_pane_g2

0xea38,	// (0x000a8f84) cam6_pano_pane_g3

0xea41,	// (0x000a8f8d) cam6_pano_pane_g4

0xd2be,	// (0x000a780a) cam6_pano_pane_g5

0xea4a,	// (0x000a8f96) cam6_pano_pane_g6

0xea54,	// (0x000a8fa0) cam6_pano_pane_g7

0xea5c,	// (0x000a8fa8) cam6_pano_pane_g8

0xea65,	// (0x000a8fb1) cam6_pano_pane_g9

0x0008,

0x0a51,	// (0x0009af9d) cam6_pano_pane_g

0x9be6,	// (0x000a4132) main_browser_tag_pane

0xe8c3,	// (0x000a8e0f) grid_navstr_albumart_pane

0xea70,	// (0x000a8fbc) cell_navstr_albumart_pane_ParamLimits

0xea70,	// (0x000a8fbc) cell_navstr_albumart_pane

0xea9e,	// (0x000a8fea) cell_navstr_albumart_pane_g1

0xc6e5,	// (0x000a6c31) cell_navstr_albumart_pane_g2

0xc6f5,	// (0x000a6c41) cell_navstr_albumart_pane_g3

0xc6ed,	// (0x000a6c39) cell_navstr_albumart_pane_g4

0x0003,

0xfba2,	// (0x000aa0ee) cell_navstr_albumart_pane_g

0x8e61,	// (0x000a33ad) bt_list_pane_ParamLimits

0x8e61,	// (0x000a33ad) bt_list_pane

0x8e82,	// (0x000a33ce) bt_list_pane_t1

0x8e91,	// (0x000a33dd) bt_list_pane_t2

0x0001,

0xfbab,	// (0x000aa0f7) bt_list_pane_t

0x9be6,	// (0x000a4132) main_cale_prevew_pane

0x8ea0,	// (0x000a33ec) popup_cale_preview_window_ParamLimits

0x8ea0,	// (0x000a33ec) popup_cale_preview_window

0xa57e,	// (0x000a4aca) bg_popup_preview_window_pane_cp05_ParamLimits

0xa57e,	// (0x000a4aca) bg_popup_preview_window_pane_cp05

0xeaa6,	// (0x000a8ff2) list_cale_preview_pane_ParamLimits

0xeaa6,	// (0x000a8ff2) list_cale_preview_pane

0x8eb9,	// (0x000a3405) list_double_cale_preview_pane_ParamLimits

0x8eb9,	// (0x000a3405) list_double_cale_preview_pane

0x8ecb,	// (0x000a3417) list_single_cale_preview_pane_ParamLimits

0x8ecb,	// (0x000a3417) list_single_cale_preview_pane

0x8edf,	// (0x000a342b) list_single_cale_preview_pane_g1

0x8ee7,	// (0x000a3433) list_single_cale_preview_pane_t1_ParamLimits

0x8ee7,	// (0x000a3433) list_single_cale_preview_pane_t1

0x8efc,	// (0x000a3448) list_double_cale_preview_pane_g1

0x8f04,	// (0x000a3450) list_double_cale_preview_pane_t1_ParamLimits

0x8f04,	// (0x000a3450) list_double_cale_preview_pane_t1

0x8f19,	// (0x000a3465) list_double_cale_preview_pane_t2_ParamLimits

0x8f19,	// (0x000a3465) list_double_cale_preview_pane_t2

0x0001,

0xfbb0,	// (0x000aa0fc) list_double_cale_preview_pane_t_ParamLimits

0xfbb0,	// (0x000aa0fc) list_double_cale_preview_pane_t

0x9be6,	// (0x000a4132) main_ezdial_pane

0xa57e,	// (0x000a4aca) main_sp_fs_email_pane_ParamLimits

0x8487,	// (0x000a29d3) cmail_ddmenu_btn01_pane_ParamLimits

0x8487,	// (0x000a29d3) cmail_ddmenu_btn01_pane

0x849c,	// (0x000a29e8) cmail_ddmenu_btn02_pane_ParamLimits

0x849c,	// (0x000a29e8) cmail_ddmenu_btn02_pane

0x84b4,	// (0x000a2a00) cmail_ddmenu_btn03_pane_ParamLimits

0x84b4,	// (0x000a2a00) cmail_ddmenu_btn03_pane

0x8549,	// (0x000a2a95) main_sp_fs_ctrlbar_pane_ParamLimits

0x855f,	// (0x000a2aab) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8b48,	// (0x000a3094) list_cmail_body_pane_ParamLimits

0xe843,	// (0x000a8d8f) bg_button_pane_cp12

0xe84c,	// (0x000a8d98) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe84c,	// (0x000a8d98) list_single_cmail_header_detail_pane_g3

0xa25b,	// (0x000a47a7) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa25b,	// (0x000a47a7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb64,	// (0x000aa0b0) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb64,	// (0x000aa0b0) list_single_cmail_header_detail_pane_t

0xa2b3,	// (0x000a47ff) phacti_term_pane_t2_ParamLimits

0xa2b3,	// (0x000a47ff) phacti_term_pane_t2

0x0001,

0xfb6e,	// (0x000aa0ba) phacti_term_pane_t_ParamLimits

0xfb6e,	// (0x000aa0ba) phacti_term_pane_t

0xeab2,	// (0x000a8ffe) aid_size_list_single_double

0x8f31,	// (0x000a347d) popup_ezdial_listscroll_window

0x8f55,	// (0x000a34a1) popup_number_entry_window_cp01

0xaa7c,	// (0x000a4fc8) bg_popup_call_pane_cp09

0xeabe,	// (0x000a900a) ezdial_list_pane

0xeac6,	// (0x000a9012) scroll_pane_cp23

0xcb01,	// (0x000a704d) bg_button_pane_cp028_ParamLimits

0xcb01,	// (0x000a704d) bg_button_pane_cp028

0x8f63,	// (0x000a34af) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f63,	// (0x000a34af) cmail_ddmenu_btn01_pane_g1

0x8f73,	// (0x000a34bf) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8f73,	// (0x000a34bf) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfbb5,	// (0x000aa101) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfbb5,	// (0x000aa101) cmail_ddmenu_btn01_pane_g

0xeace,	// (0x000a901a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeace,	// (0x000a901a) cmail_ddmenu_btn01_pane_t1

0xc914,	// (0x000a6e60) bg_button_pane_cp029_ParamLimits

0xc914,	// (0x000a6e60) bg_button_pane_cp029

0x8f73,	// (0x000a34bf) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8f73,	// (0x000a34bf) cmail_ddmenu_btn02_pane_g1

0x8f8b,	// (0x000a34d7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8f8b,	// (0x000a34d7) cmail_ddmenu_btn02_pane_t1

0xea90,	// (0x000a8fdc) bg_button_pane_cp031_ParamLimits

0xea90,	// (0x000a8fdc) bg_button_pane_cp031

0x8f73,	// (0x000a34bf) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8f73,	// (0x000a34bf) cmail_ddmenu_btn03_pane_g1

0x8f8b,	// (0x000a34d7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8f8b,	// (0x000a34d7) cmail_ddmenu_btn03_pane_t1

0x5dde,	// (0x000a032a) cell_dialer2_keypad_pane_t1_ParamLimits

0x5df8,	// (0x000a0344) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5df8,	// (0x000a0344) cell_dialer2_keypad_pane_t1_copy1

0x7d59,	// (0x000a22a5) ncimui_group_button_pane

0xa57e,	// (0x000a4aca) main_sp_fs_calendar_pane_ParamLimits

0x8b70,	// (0x000a30bc) list_single_cmail_header_caption_pane_ParamLimits

0xa2d0,	// (0x000a481c) aid_recal_txt_sm_pane

0x9be6,	// (0x000a4132) mian_recal_day_pane

0xa30a,	// (0x000a4856) popup_sp_fs_cale_preview_window_ParamLimits

0xeae3,	// (0x000a902f) list_recal_day_pane

0xa62f,	// (0x000a4b7b) list_single_recal_day_pane_ParamLimits

0xa62f,	// (0x000a4b7b) list_single_recal_day_pane

0xeb0a,	// (0x000a9056) list_single_recal_day_pane_g1_ParamLimits

0xeb0a,	// (0x000a9056) list_single_recal_day_pane_g1

0xa641,	// (0x000a4b8d) list_single_recal_day_pane_g2_ParamLimits

0xa641,	// (0x000a4b8d) list_single_recal_day_pane_g2

0xa64d,	// (0x000a4b99) list_single_recal_day_pane_g3_ParamLimits

0xa64d,	// (0x000a4b99) list_single_recal_day_pane_g3

0x8faf,	// (0x000a34fb) list_single_recal_day_pane_g4_ParamLimits

0x8faf,	// (0x000a34fb) list_single_recal_day_pane_g4

0xa659,	// (0x000a4ba5) list_single_recal_day_pane_g5_ParamLimits

0xa659,	// (0x000a4ba5) list_single_recal_day_pane_g5

0xa665,	// (0x000a4bb1) list_single_recal_day_pane_g6_ParamLimits

0xa665,	// (0x000a4bb1) list_single_recal_day_pane_g6

0x0004,

0xfbc4,	// (0x000aa110) list_single_recal_day_pane_g_ParamLimits

0xfbc4,	// (0x000aa110) list_single_recal_day_pane_g

0xa679,	// (0x000a4bc5) list_single_recal_day_pane_t1

0xa68b,	// (0x000a4bd7) list_single_recal_day_pane_t2

0x0001,

0xfbcf,	// (0x000aa11b) list_single_recal_day_pane_t

0x8fc7,	// (0x000a3513) ncimui_query_button_pane_ParamLimits

0x8fc7,	// (0x000a3513) ncimui_query_button_pane

0x8fd7,	// (0x000a3523) ncimui_query_button_pane_t1_ParamLimits

0x8fd7,	// (0x000a3523) ncimui_query_button_pane_t1

0xeb16,	// (0x000a9062) ncimui_query_button_pane_t2_ParamLimits

0xeb16,	// (0x000a9062) ncimui_query_button_pane_t2

0x0001,

0xfbd4,	// (0x000aa120) ncimui_query_button_pane_t_ParamLimits

0xfbd4,	// (0x000aa120) ncimui_query_button_pane_t

0x8fea,	// (0x000a3536) query_button_pane_ParamLimits

0x8fea,	// (0x000a3536) query_button_pane

0x9be6,	// (0x000a4132) bg_button_pane_cp0028

0xeb29,	// (0x000a9075) query_button_pane_t1

0x4168,	// (0x0009e6b4) main_tport_pane_ParamLimits

0x8a52,	// (0x000a2f9e) bg_popup_window_pane_cp01_ParamLimits

0x8a52,	// (0x000a2f9e) bg_popup_window_pane_cp01

0x8a60,	// (0x000a2fac) heading_pane_cp08_ParamLimits

0x8a60,	// (0x000a2fac) heading_pane_cp08

0x8a6e,	// (0x000a2fba) heading_pane_cp07_ParamLimits

0x8a6e,	// (0x000a2fba) heading_pane_cp07

0x8add,	// (0x000a3029) cell_tport_appsw_pane_g2

0x0002,

0xfb51,	// (0x000aa09d) cell_tport_appsw_pane_g

0x9f56,	// (0x000a44a2) input_candi_list_open_g1

0xae98,	// (0x000a53e4) list_cale_time_pane_g6_ParamLimits

0xae98,	// (0x000a53e4) list_cale_time_pane_g6

0x4be7,	// (0x0009f133) aid_size_touch_calib_1_ParamLimits

0x4be7,	// (0x0009f133) aid_size_touch_calib_1

0x4bf3,	// (0x0009f13f) aid_size_touch_calib_2_ParamLimits

0x4bf3,	// (0x0009f13f) aid_size_touch_calib_2

0x4c01,	// (0x0009f14d) aid_size_touch_calib_3_ParamLimits

0x4c01,	// (0x0009f14d) aid_size_touch_calib_3

0x4c11,	// (0x0009f15d) aid_size_touch_calib_4_ParamLimits

0x4c11,	// (0x0009f15d) aid_size_touch_calib_4

0x4c1f,	// (0x0009f16b) main_touch_calib_button_group_pane_ParamLimits

0x4c1f,	// (0x0009f16b) main_touch_calib_button_group_pane

0x4c2d,	// (0x0009f179) main_touch_calib_pane_g1_ParamLimits

0x4c39,	// (0x0009f185) main_touch_calib_pane_g2_ParamLimits

0x4c45,	// (0x0009f191) main_touch_calib_pane_g3_ParamLimits

0x4c51,	// (0x0009f19d) main_touch_calib_pane_g4_ParamLimits

0xf60c,	// (0x000a9b58) main_touch_calib_pane_g_ParamLimits

0x4c5d,	// (0x0009f1a9) main_touch_calib_pane_t1_ParamLimits

0x4c76,	// (0x0009f1c2) main_touch_calib_pane_t2_ParamLimits

0x4c8f,	// (0x0009f1db) main_touch_calib_pane_t3_ParamLimits

0x4ca5,	// (0x0009f1f1) main_touch_calib_pane_t4_ParamLimits

0x4cbb,	// (0x0009f207) main_touch_calib_pane_t5_ParamLimits

0xf615,	// (0x000a9b61) main_touch_calib_pane_t_ParamLimits

0xd061,	// (0x000a75ad) list_single_fp_cale_pane_g3_ParamLimits

0xd061,	// (0x000a75ad) list_single_fp_cale_pane_g3

0x414c,	// (0x0009e698) bg_button_pane_cp012_ParamLimits

0x414c,	// (0x0009e698) bg_vkb2_func_pane_cp03_ParamLimits

0x6d13,	// (0x000a125f) cell_vitu2_function_top_pane_g1_ParamLimits

0x414c,	// (0x0009e698) bg_vkb2_func_pane_cp04_ParamLimits

0x7ce1,	// (0x000a222d) main_ncimui_button_group_pane_ParamLimits

0x7ce1,	// (0x000a222d) main_ncimui_button_group_pane

0x7d47,	// (0x000a2293) main_ncimui_pane_t3_ParamLimits

0x7d47,	// (0x000a2293) main_ncimui_pane_t3

0xe8d9,	// (0x000a8e25) phacti_button_group_pane

0xeab2,	// (0x000a8ffe) aid_size_list_single_double_ParamLimits

0x8f31,	// (0x000a347d) popup_ezdial_listscroll_window_ParamLimits

0x8f55,	// (0x000a34a1) popup_number_entry_window_cp01_ParamLimits

0x8ff7,	// (0x000a3543) phacti_button_pane_ParamLimits

0x8ff7,	// (0x000a3543) phacti_button_pane

0x9be6,	// (0x000a4132) bg_button_pane_cp14

0xeb37,	// (0x000a9083) phacti_button_pane_t1

0x9008,	// (0x000a3554) main_touch_calib_button_pane_ParamLimits

0x9008,	// (0x000a3554) main_touch_calib_button_pane

0xa890,	// (0x000a4ddc) bg_button_pane_cp18_ParamLimits

0xa890,	// (0x000a4ddc) bg_button_pane_cp18

0xeb45,	// (0x000a9091) main_touch_calib_button_pane_t1_ParamLimits

0xeb45,	// (0x000a9091) main_touch_calib_button_pane_t1

0xeb5b,	// (0x000a90a7) main_touch_calib_button_pane_t2_ParamLimits

0xeb5b,	// (0x000a90a7) main_touch_calib_button_pane_t2

0x0001,

0xfbd9,	// (0x000aa125) main_touch_calib_button_pane_t_ParamLimits

0xfbd9,	// (0x000aa125) main_touch_calib_button_pane_t

0x9be6,	// (0x000a4132) cell_ncimui_button_pane

0x9be6,	// (0x000a4132) bg_button_pane_cp032

0xeb79,	// (0x000a90c5) cell_ncimui_button_pane_t1

0x5e54,	// (0x000a03a0) image3_infobar_pane_ParamLimits

0x5e54,	// (0x000a03a0) image3_infobar_pane

0x8104,	// (0x000a2650) fs_bigclock_status_pane_ParamLimits

0x8104,	// (0x000a2650) fs_bigclock_status_pane

0x8111,	// (0x000a265d) main_fs_bigclock_clock_pane_ParamLimits

0x8111,	// (0x000a265d) main_fs_bigclock_clock_pane

0x8125,	// (0x000a2671) main_fs_bigclock_indi_pane_ParamLimits

0x8125,	// (0x000a2671) main_fs_bigclock_indi_pane

0x814d,	// (0x000a2699) main_fs_bigclock_swipe_pane_ParamLimits

0x814d,	// (0x000a2699) main_fs_bigclock_swipe_pane

0x9be6,	// (0x000a4132) main_fs_clock_dumped_data

0xe3fc,	// (0x000a8948) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3fc,	// (0x000a8948) list_single_fs_bigclock_indicator_pane_g1

0xe418,	// (0x000a8964) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe418,	// (0x000a8964) list_single_fs_bigclock_indicator_pane_g2

0xe432,	// (0x000a897e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe432,	// (0x000a897e) list_single_fs_bigclock_indicator_pane_g3

0xe44c,	// (0x000a8998) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe44c,	// (0x000a8998) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x08bf,	// (0x0009ae0b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x08bf,	// (0x0009ae0b) list_single_fs_bigclock_indicator_pane_g

0xe477,	// (0x000a89c3) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe477,	// (0x000a89c3) list_single_fs_bigclock_indicator_pane_t1

0xe49f,	// (0x000a89eb) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe49f,	// (0x000a89eb) list_single_fs_bigclock_indicator_pane_t2

0xe4c7,	// (0x000a8a13) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4c7,	// (0x000a8a13) list_single_fs_bigclock_indicator_pane_t3

0xe4ef,	// (0x000a8a3b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4ef,	// (0x000a8a3b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x08ca,	// (0x0009ae16) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x08ca,	// (0x0009ae16) list_single_fs_bigclock_indicator_pane_t

0xeb87,	// (0x000a90d3) image3_infobar_fav_pane_ParamLimits

0xeb87,	// (0x000a90d3) image3_infobar_fav_pane

0xeb97,	// (0x000a90e3) image3_infobar_loc_pane_ParamLimits

0xeb97,	// (0x000a90e3) image3_infobar_loc_pane

0xebab,	// (0x000a90f7) image3_infobar_time_pane_ParamLimits

0xebab,	// (0x000a90f7) image3_infobar_time_pane

0xcd1c,	// (0x000a7268) image3_infobar_time_pane_g1

0xebbb,	// (0x000a9107) image3_infobar_time_pane_t1

0xcd1c,	// (0x000a7268) image3_infobar_loc_pane_g1

0xebc9,	// (0x000a9115) image3_infobar_loc_pane_g2

0x0001,

0xfbde,	// (0x000aa12a) image3_infobar_loc_pane_g

0xebd1,	// (0x000a911d) image3_infobar_loc_pane_t1

0xcd1c,	// (0x000a7268) image3_infobar_fav_pane_g1

0xebdf,	// (0x000a912b) image3_infobar_fav_pane_g2

0x0001,

0xfbe3,	// (0x000aa12f) image3_infobar_fav_pane_g

0xebe7,	// (0x000a9133) fs_bigclock_status_battery_pane

0xebf0,	// (0x000a913c) fs_bigclock_status_signal_pane

0xebf9,	// (0x000a9145) fs_bigclock_status_title_pane

0xec02,	// (0x000a914e) fs_bigclock_status_signal_pane_g1

0xec0b,	// (0x000a9157) fs_bigclock_status_signal_pane_g2

0x0001,

0xfbe8,	// (0x000aa134) fs_bigclock_status_signal_pane_g

0xec13,	// (0x000a915f) fs_bigclock_status_battery_pane_g1

0xec1c,	// (0x000a9168) fs_bigclock_status_battery_pane_g2

0x0001,

0xfbed,	// (0x000aa139) fs_bigclock_status_battery_pane_g

0xec24,	// (0x000a9170) fs_bigclock_status_title_pane_t1

0x9018,	// (0x000a3564) main_fs_bigclock_clock_pane_g1

0x9018,	// (0x000a3564) main_fs_bigclock_clock_pane_g2

0x9025,	// (0x000a3571) main_fs_bigclock_clock_pane_g3

0x9025,	// (0x000a3571) main_fs_bigclock_clock_pane_g4

0x0003,

0xfbf2,	// (0x000aa13e) main_fs_bigclock_clock_pane_g

0x9031,	// (0x000a357d) main_fs_bigclock_clock_pane_t1

0x9044,	// (0x000a3590) main_fs_bigclock_clock_pane_t2

0x0001,

0xfbfb,	// (0x000aa147) main_fs_bigclock_clock_pane_t

0xec32,	// (0x000a917e) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec32,	// (0x000a917e) list_single_fs_bigclock_indicator_pane

0xec43,	// (0x000a918f) list_single_fs_bigclock_pane_ParamLimits

0xec43,	// (0x000a918f) list_single_fs_bigclock_pane

0xec69,	// (0x000a91b5) main_fs_bigclock_indicator_pane_t1

0xec78,	// (0x000a91c4) list_single_fs_bigclock_pane_g1

0xec80,	// (0x000a91cc) list_single_fs_bigclock_pane_t1

0xcd1c,	// (0x000a7268) main_fs_bigclock_swipe_pane_g1

0xecc3,	// (0x000a920f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfc0c,	// (0x000aa158) main_fs_bigclock_swipe_pane_g

0xeccb,	// (0x000a9217) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeccb,	// (0x000a9217) main_fs_bigclock_swipe_pane_t1

0x3161,	// (0x0009d6ad) call_type_pane_ParamLimits

0x9be6,	// (0x000a4132) main_btmg_pane

0xa355,	// (0x000a48a1) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa355,	// (0x000a48a1) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb92,	// (0x000aa0de) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb92,	// (0x000aa0de) list_single_cale_mrui_row_pane_g

0xa61e,	// (0x000a4b6a) list_recal_vselct_arw_lo_pane

0xeb02,	// (0x000a904e) list_recal_vselct_arw_up_pane

0xa626,	// (0x000a4b72) list_recal_vselct_pane

0x909b,	// (0x000a35e7) btmg_button_pane

0x90a7,	// (0x000a35f3) main_btmg_pane_g1

0x9be6,	// (0x000a4132) bg_button_pane_cp044

0xece8,	// (0x000a9234) btmg_button_pane_t1

0xc900,	// (0x000a6e4c) aid_listscroll_gen

0xa57e,	// (0x000a4aca) main_cntbar_detail_pane

0xe825,	// (0x000a8d71) list_cmail_folder_pane

0xd534,	// (0x000a7a80) sp_fs_scroll_pane_cp03_ParamLimits

0x90af,	// (0x000a35fb) list_single_fs_dyc_pane_cp01_ParamLimits

0x90af,	// (0x000a35fb) list_single_fs_dyc_pane_cp01

0xecf6,	// (0x000a9242) aid_size_cmail_indent

0xa69d,	// (0x000a4be9) list_single_dyc_row_pane_cp01

0x90f7,	// (0x000a3643) cntbar_detail_list_pane_ParamLimits

0x90f7,	// (0x000a3643) cntbar_detail_list_pane

0x9131,	// (0x000a367d) main_cntbar_detail_cont_pane_ParamLimits

0x9131,	// (0x000a367d) main_cntbar_detail_cont_pane

0x3086,	// (0x0009d5d2) scroll_pane_cp032_ParamLimits

0x3086,	// (0x0009d5d2) scroll_pane_cp032

0x913d,	// (0x000a3689) cntbar_detail_list_event_pane_ParamLimits

0x913d,	// (0x000a3689) cntbar_detail_list_event_pane

0x9103,	// (0x000a364f) cntbar_detail_list_shct_pane

0xad23,	// (0x000a526f) aid_list_gen

0xecff,	// (0x000a924b) aid_scroll

0xed08,	// (0x000a9254) aid_size_touch_scroll_bar

0x747e,	// (0x000a19ca) aid_list_double

0x9151,	// (0x000a369d) aid_list_single

0x746c,	// (0x000a19b8) aid_list_single_lg

0x915a,	// (0x000a36a6) aid_list_z_g_a_sm

0x9162,	// (0x000a36ae) aid_list_z_g_d

0x916a,	// (0x000a36b6) aid_txt_z_prm

0x9178,	// (0x000a36c4) aid_txt_z_prm_cp01

0x9186,	// (0x000a36d2) aid_txt_z_sec

0x9194,	// (0x000a36e0) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9194,	// (0x000a36e0) main_cntbar_detail_cont_pane_g1

0x91a1,	// (0x000a36ed) main_cntbar_detail_cont_pane_g2_ParamLimits

0x91a1,	// (0x000a36ed) main_cntbar_detail_cont_pane_g2

0x0001,

0xfc11,	// (0x000aa15d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfc11,	// (0x000aa15d) main_cntbar_detail_cont_pane_g

0xed11,	// (0x000a925d) main_cntbar_detail_cont_pane_t1

0xed1f,	// (0x000a926b) main_cntbar_detail_cont_pane_t2

0xed2d,	// (0x000a9279) main_cntbar_detail_cont_pane_t3

0x0002,

0xfc16,	// (0x000aa162) main_cntbar_detail_cont_pane_t

0x91ad,	// (0x000a36f9) cell_cntbar_detail_list_shct_pane_ParamLimits

0x91ad,	// (0x000a36f9) cell_cntbar_detail_list_shct_pane

0xed3b,	// (0x000a9287) cntbar_detail_list_shct_pane_g1

0xed44,	// (0x000a9290) cntbar_detail_list_shct_pane_g2

0x0001,

0xfc1d,	// (0x000aa169) cntbar_detail_list_shct_pane_g

0x91c1,	// (0x000a370d) cntbar_detail_list_event_pane_g1_ParamLimits

0x91c1,	// (0x000a370d) cntbar_detail_list_event_pane_g1

0x91cd,	// (0x000a3719) cntbar_detail_list_event_pane_g2_ParamLimits

0x91cd,	// (0x000a3719) cntbar_detail_list_event_pane_g2

0x0005,

0xfc22,	// (0x000aa16e) cntbar_detail_list_event_pane_g_ParamLimits

0xfc22,	// (0x000aa16e) cntbar_detail_list_event_pane_g

0x9239,	// (0x000a3785) cntbar_detail_list_event_pane_t1_ParamLimits

0x9239,	// (0x000a3785) cntbar_detail_list_event_pane_t1

0x924e,	// (0x000a379a) cntbar_detail_list_event_pane_t2_ParamLimits

0x924e,	// (0x000a379a) cntbar_detail_list_event_pane_t2

0x0002,

0xfc2f,	// (0x000aa17b) cntbar_detail_list_event_pane_t_ParamLimits

0xfc2f,	// (0x000aa17b) cntbar_detail_list_event_pane_t

0xcd1c,	// (0x000a7268) cell_cntbar_detail_list_shct_pane_g1

0xb48f,	// (0x000a59db) navi_pane_mv_g3

0xa57e,	// (0x000a4aca) main_cntbar_detail_pane_ParamLimits

0x9be6,	// (0x000a4132) main_notif_wgt_pane

0x5ade,	// (0x000a002a) aid_tch_main_mp4_pane_g4

0x5d3d,	// (0x000a0289) popup_slider_window_cp02

0xa614,	// (0x000a4b60) list_recal_day_event_pane

0x90d7,	// (0x000a3623) cntbar_detail_btn_pane_ParamLimits

0x90d7,	// (0x000a3623) cntbar_detail_btn_pane

0x90e7,	// (0x000a3633) cntbar_detail_btn_pane_cp01_ParamLimits

0x90e7,	// (0x000a3633) cntbar_detail_btn_pane_cp01

0x9103,	// (0x000a364f) cntbar_detail_list_shct_pane_ParamLimits

0x910f,	// (0x000a365b) cntbar_detail_pane_g1_ParamLimits

0x910f,	// (0x000a365b) cntbar_detail_pane_g1

0x911b,	// (0x000a3667) cntbar_detail_pane_t1_ParamLimits

0x911b,	// (0x000a3667) cntbar_detail_pane_t1

0x91d9,	// (0x000a3725) cntbar_detail_list_event_pane_g3_ParamLimits

0x91d9,	// (0x000a3725) cntbar_detail_list_event_pane_g3

0x91f1,	// (0x000a373d) cntbar_detail_list_event_pane_g4_ParamLimits

0x91f1,	// (0x000a373d) cntbar_detail_list_event_pane_g4

0x9209,	// (0x000a3755) cntbar_detail_list_event_pane_g5_ParamLimits

0x9209,	// (0x000a3755) cntbar_detail_list_event_pane_g5

0x9221,	// (0x000a376d) cntbar_detail_list_event_pane_g6_ParamLimits

0x9221,	// (0x000a376d) cntbar_detail_list_event_pane_g6

0x9263,	// (0x000a37af) cntbar_detail_list_event_pane_t3_ParamLimits

0x9263,	// (0x000a37af) cntbar_detail_list_event_pane_t3

0x9275,	// (0x000a37c1) popup_notif_wgt_window_ParamLimits

0x9275,	// (0x000a37c1) popup_notif_wgt_window

0x9285,	// (0x000a37d1) popup_submenu_window_cp01_ParamLimits

0x9285,	// (0x000a37d1) popup_submenu_window_cp01

0xaa7c,	// (0x000a4fc8) bg_popup_window_pane_cp10

0xed4d,	// (0x000a9299) listscroll_notif_wgt_pane

0xed5f,	// (0x000a92ab) list_notif_wgt_window

0xed68,	// (0x000a92b4) scroll_pane_cp033

0x9293,	// (0x000a37df) list_notif_wgt_row_pane_ParamLimits

0x9293,	// (0x000a37df) list_notif_wgt_row_pane

0xed71,	// (0x000a92bd) aid_size_list_notif_wgt_del

0xed7e,	// (0x000a92ca) list_notif_wgt_row_pane_g1

0xed8a,	// (0x000a92d6) list_notif_wgt_row_pane_g2

0xed99,	// (0x000a92e5) list_notif_wgt_row_pane_g3

0x0002,

0xfc36,	// (0x000aa182) list_notif_wgt_row_pane_g

0xeda6,	// (0x000a92f2) list_notif_wgt_row_pane_t1

0xedbc,	// (0x000a9308) list_notif_wgt_row_pane_t2

0xedce,	// (0x000a931a) list_notif_wgt_row_pane_t3

0x0002,

0xfc3d,	// (0x000aa189) list_notif_wgt_row_pane_t

0xd92f,	// (0x000a7e7b) list_recal_day_event_pane_g1

0xede0,	// (0x000a932c) list_recal_day_event_pane_t1

0x9be6,	// (0x000a4132) bg_button_pane_cp045

0x92a5,	// (0x000a37f1) cntbar_detail_btn_pane_t1

0xc914,	// (0x000a6e60) main_callh_pane_ParamLimits

0xc914,	// (0x000a6e60) main_callh_pane

0x9be6,	// (0x000a4132) main_coverflow0_pane

0x9be6,	// (0x000a4132) main_wgtman_pane

0x8165,	// (0x000a26b1) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8165,	// (0x000a26b1) main_fs_bigclock_unlock_btn_pane

0x8ad5,	// (0x000a3021) bg_button_pane_cp16

0x8ae5,	// (0x000a3031) cell_tport_appsw_pane_g3

0x92b3,	// (0x000a37ff) cf0_flow_pane_ParamLimits

0x92b3,	// (0x000a37ff) cf0_flow_pane

0xedef,	// (0x000a933b) listscroll_cf0_pane

0xedfa,	// (0x000a9346) main_cf0_pane_g1

0x92c2,	// (0x000a380e) main_cf0_pane_t1_ParamLimits

0x92c2,	// (0x000a380e) main_cf0_pane_t1

0x92d6,	// (0x000a3822) main_cf0_pane_t2_ParamLimits

0x92d6,	// (0x000a3822) main_cf0_pane_t2

0x0001,

0xfc49,	// (0x000aa195) main_cf0_pane_t_ParamLimits

0xfc49,	// (0x000aa195) main_cf0_pane_t

0xee0c,	// (0x000a9358) scroll_pane_cp11

0x92ea,	// (0x000a3836) cf0_flow_pane_g1

0x92f2,	// (0x000a383e) cf0_flow_pane_g2

0x0001,

0xfc4e,	// (0x000aa19a) cf0_flow_pane_g

0x92fa,	// (0x000a3846) cf0_flow_pane_t1

0x9be6,	// (0x000a4132) main_call6_pane

0x9be6,	// (0x000a4132) main_calllock_pane

0x9308,	// (0x000a3854) call6_btn_grp_pane_ParamLimits

0x9308,	// (0x000a3854) call6_btn_grp_pane

0x9317,	// (0x000a3863) call6_pane_g1_ParamLimits

0x9317,	// (0x000a3863) call6_pane_g1

0x9327,	// (0x000a3873) popup_call6_1st_window_ParamLimits

0x9327,	// (0x000a3873) popup_call6_1st_window

0x9335,	// (0x000a3881) popup_call6_2nd_window_ParamLimits

0x9335,	// (0x000a3881) popup_call6_2nd_window

0x9343,	// (0x000a388f) cell_call6_btn_pane_ParamLimits

0x9343,	// (0x000a388f) cell_call6_btn_pane

0xaa7c,	// (0x000a4fc8) bg_popup_call2_in_pane_cp03

0xee17,	// (0x000a9363) popup_call6_1st_window_g1

0xee1f,	// (0x000a936b) popup_call6_1st_window_g2

0xee27,	// (0x000a9373) popup_call6_1st_window_g3

0x0002,

0xfc53,	// (0x000aa19f) popup_call6_1st_window_g

0xee2f,	// (0x000a937b) popup_call6_1st_window_t1

0xee3e,	// (0x000a938a) popup_call6_1st_window_t2

0xee4c,	// (0x000a9398) popup_call6_1st_window_t3

0x0002,

0xfc5a,	// (0x000aa1a6) popup_call6_1st_window_t

0xaa7c,	// (0x000a4fc8) bg_popup_call2_in_pane_cp04

0xee17,	// (0x000a9363) popup_call6_2nd_window_g1

0xee1f,	// (0x000a936b) popup_call6_2nd_window_g2

0xee27,	// (0x000a9373) popup_call6_2nd_window_g3

0x0002,

0xfc53,	// (0x000aa19f) popup_call6_2nd_window_g

0xee2f,	// (0x000a937b) popup_call6_2nd_window_t1

0x0f50,	// (0x0009b49c) bg_button_pane_cp15

0x9352,	// (0x000a389e) cell_call6_btn_pane_g1

0x935b,	// (0x000a38a7) cell_call6_btn_pane_t1

0x936a,	// (0x000a38b6) listscroll_wgtman_pane_ParamLimits

0x936a,	// (0x000a38b6) listscroll_wgtman_pane

0x9386,	// (0x000a38d2) wgtman_btn_pane_ParamLimits

0x9386,	// (0x000a38d2) wgtman_btn_pane

0xb283,	// (0x000a57cf) aid_scroll_copy1

0xee5a,	// (0x000a93a6) list_wgtman_pane

0x93bb,	// (0x000a3907) wgtman_btn_pane_g1_ParamLimits

0x93bb,	// (0x000a3907) wgtman_btn_pane_g1

0x93e3,	// (0x000a392f) wgtman_btn_pane_t1_ParamLimits

0x93e3,	// (0x000a392f) wgtman_btn_pane_t1

0xee64,	// (0x000a93b0) wgtman_btn_pane_t2_ParamLimits

0xee64,	// (0x000a93b0) wgtman_btn_pane_t2

0x0001,

0xfc61,	// (0x000aa1ad) wgtman_btn_pane_t_ParamLimits

0xfc61,	// (0x000aa1ad) wgtman_btn_pane_t

0x941a,	// (0x000a3966) listrow_wgtman_pane_ParamLimits

0x941a,	// (0x000a3966) listrow_wgtman_pane

0x9436,	// (0x000a3982) listrow_wgtman_pane_g1

0x9443,	// (0x000a398f) listrow_wgtman_pane_g2

0x0001,

0xfc66,	// (0x000aa1b2) listrow_wgtman_pane_g

0x9461,	// (0x000a39ad) listrow_wgtman_pane_t1

0x9479,	// (0x000a39c5) listrow_wgtman_pane_t2

0x0001,

0xfc6b,	// (0x000aa1b7) listrow_wgtman_pane_t

0x949f,	// (0x000a39eb) wait_bar_pane_cp09

0xee7b,	// (0x000a93c7) main_calllock_btn_pane

0xee85,	// (0x000a93d1) main_calllock_pane_g1

0x9be6,	// (0x000a4132) bg_button_pane_cp17

0xee91,	// (0x000a93dd) main_calllock_btn_pane_g1

0xee9a,	// (0x000a93e6) main_calllock_btn_pane_t1

0x9be6,	// (0x000a4132) main_dialer3_pane

0x9be6,	// (0x000a4132) main_fmrd2_pane

0xcd1c,	// (0x000a7268) main_fs_bigclock_unlock_btn_pane_g1

0x94b9,	// (0x000a3a05) main_fs_bigclock_unlock_btn_pane_t1

0x94c7,	// (0x000a3a13) area_fmrd2_info_pane_ParamLimits

0x94c7,	// (0x000a3a13) area_fmrd2_info_pane

0x94d5,	// (0x000a3a21) area_fmrd2_visual_pane_ParamLimits

0x94d5,	// (0x000a3a21) area_fmrd2_visual_pane

0x94e3,	// (0x000a3a2f) fmrd2_indi_pane_ParamLimits

0x94e3,	// (0x000a3a2f) fmrd2_indi_pane

0x94f0,	// (0x000a3a3c) area_fmrd2_visual_pane_g1

0x94f8,	// (0x000a3a44) area_fmrd2_visual_pane_t1

0x9508,	// (0x000a3a54) area_fmrd2_visual_pane_t2

0x9518,	// (0x000a3a64) area_fmrd2_visual_pane_t3

0x0002,

0xfc75,	// (0x000aa1c1) area_fmrd2_visual_pane_t

0x9528,	// (0x000a3a74) area_fmrd2_info_pane_g1

0x9530,	// (0x000a3a7c) area_fmrd2_info_pane_t1

0x9540,	// (0x000a3a8c) area_fmrd2_info_pane_t2

0x9550,	// (0x000a3a9c) area_fmrd2_info_pane_t3

0x9560,	// (0x000a3aac) area_fmrd2_info_pane_t4

0x0003,

0xfc7c,	// (0x000aa1c8) area_fmrd2_info_pane_t

0x956e,	// (0x000a3aba) fmrd2_indi_pane_t1

0x957e,	// (0x000a3aca) fmrd2_indi_pane_t2

0x958e,	// (0x000a3ada) fmrd2_indi_pane_t3

0x0002,

0xfc85,	// (0x000aa1d1) fmrd2_indi_pane_t

0xe45b,	// (0x000a89a7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe45b,	// (0x000a89a7) list_single_fs_bigclock_indicator_pane_g5

0xe50c,	// (0x000a8a58) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe50c,	// (0x000a8a58) list_single_fs_bigclock_indicator_pane_t5

0x8c85,	// (0x000a31d1) aid_cell_bcale_month_pane_ParamLimits

0x8c85,	// (0x000a31d1) aid_cell_bcale_month_pane

0x8ca3,	// (0x000a31ef) bcale_month_pane_ParamLimits

0x8ca3,	// (0x000a31ef) bcale_month_pane

0x8cc1,	// (0x000a320d) bcale_preview_pane_ParamLimits

0x8cc1,	// (0x000a320d) bcale_preview_pane

0xec80,	// (0x000a91cc) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9f,	// (0x000a91eb) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9f,	// (0x000a91eb) list_single_fs_bigclock_pane_t2

0x0001,

0xfc07,	// (0x000aa153) list_single_fs_bigclock_pane_t_ParamLimits

0xfc07,	// (0x000aa153) list_single_fs_bigclock_pane_t

0x94b1,	// (0x000a39fd) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfc70,	// (0x000aa1bc) main_fs_bigclock_unlock_btn_pane_g

0x959c,	// (0x000a3ae8) aid_dia3_key_size_ParamLimits

0x959c,	// (0x000a3ae8) aid_dia3_key_size

0x95a8,	// (0x000a3af4) aid_dia3_listrow_size_ParamLimits

0x95a8,	// (0x000a3af4) aid_dia3_listrow_size

0x95b8,	// (0x000a3b04) dia3_keypad_fun_pane_ParamLimits

0x95b8,	// (0x000a3b04) dia3_keypad_fun_pane

0x95ca,	// (0x000a3b16) dia3_keypad_num_pane_ParamLimits

0x95ca,	// (0x000a3b16) dia3_keypad_num_pane

0x95dc,	// (0x000a3b28) dia3_listscroll_pane_ParamLimits

0x95dc,	// (0x000a3b28) dia3_listscroll_pane

0x95ea,	// (0x000a3b36) dia3_numentry_pane_ParamLimits

0x95ea,	// (0x000a3b36) dia3_numentry_pane

0xeea9,	// (0x000a93f5) dia3_list_pane

0xeeb4,	// (0x000a9400) scroll_pane_cp12

0x9be6,	// (0x000a4132) bg_dia3_numentry_pane

0x95f8,	// (0x000a3b44) dia3_numentry_pane_t1

0x9607,	// (0x000a3b53) cell_dia3_key_num_pane

0x960f,	// (0x000a3b5b) cell_dia3_key0_fun_pane_ParamLimits

0x960f,	// (0x000a3b5b) cell_dia3_key0_fun_pane

0x961c,	// (0x000a3b68) cell_dia3_key1_fun_pane_ParamLimits

0x961c,	// (0x000a3b68) cell_dia3_key1_fun_pane

0x9629,	// (0x000a3b75) dia3_listrow_pane

0xe1ae,	// (0x000a86fa) bg_dia3_numentry_pane_g1

0x9be6,	// (0x000a4132) bg_button_pane_cp21

0xeebf,	// (0x000a940b) cell_dia3_key_num_pane_t1

0xeecd,	// (0x000a9419) cell_dia3_key_num_pane_t2

0xeedc,	// (0x000a9428) cell_dia3_key_num_pane_t3

0xeeeb,	// (0x000a9437) cell_dia3_key_num_pane_t4

0x0003,

0xfc8c,	// (0x000aa1d8) cell_dia3_key_num_pane_t

0x9be6,	// (0x000a4132) bg_button_pane_cp19

0x9636,	// (0x000a3b82) cell_dia3_key0_fun_pane_g1

0x9be6,	// (0x000a4132) bg_button_pane_cp20

0x963e,	// (0x000a3b8a) cell_dia3_key1_fun_pane_g1

0x9646,	// (0x000a3b92) area_left_week_number_pane

0x9659,	// (0x000a3ba5) area_top_day_name_pane

0x9667,	// (0x000a3bb3) frame_month_view_pane

0xeefa,	// (0x000a9446) grid_month_view_pane

0x967c,	// (0x000a3bc8) cell_top_day_name_pane_ParamLimits

0x967c,	// (0x000a3bc8) cell_top_day_name_pane

0x9696,	// (0x000a3be2) cell_area_left_week_number_pane_ParamLimits

0x9696,	// (0x000a3be2) cell_area_left_week_number_pane

0x96b9,	// (0x000a3c05) cell_month_view_pane_ParamLimits

0x96b9,	// (0x000a3c05) cell_month_view_pane

0xef08,	// (0x000a9454) frm_month_g1

0x96e5,	// (0x000a3c31) frm_month_g2

0x96f6,	// (0x000a3c42) frm_month_g3

0x9707,	// (0x000a3c53) frm_month_g4

0x9718,	// (0x000a3c64) frm_month_g5

0x972b,	// (0x000a3c77) frm_month_g6

0x973e,	// (0x000a3c8a) frm_month_g7

0xef15,	// (0x000a9461) frm_month_g8

0x9751,	// (0x000a3c9d) frm_month_g9

0x975e,	// (0x000a3caa) frm_month_g10

0x976b,	// (0x000a3cb7) frm_month_g11

0x9778,	// (0x000a3cc4) frm_month_g12

0x9785,	// (0x000a3cd1) frm_month_g13

0x9792,	// (0x000a3cde) frm_month_g14

0x97a1,	// (0x000a3ced) frm_month_g15

0x97b0,	// (0x000a3cfc) frm_month_g16

0x000f,

0xfc95,	// (0x000aa1e1) frm_month_g

0xef22,	// (0x000a946e) cell_top_day_name_pane_t1

0x97bf,	// (0x000a3d0b) cell_area_left_week_number_pane_g1

0x97ce,	// (0x000a3d1a) cell_area_left_week_number_pane_t1

0xcf61,	// (0x000a74ad) cell_month_view_pane_g1

0x97e4,	// (0x000a3d30) cell_month_view_pane_t1

0x9be6,	// (0x000a4132) main_fps_pane

0xe729,	// (0x000a8c75) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe729,	// (0x000a8c75) cmail_ddmenu_btn02_pane_cp1

0xe745,	// (0x000a8c91) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe745,	// (0x000a8c91) cmail_ddmenu_btn02_pane_cp2

0x8f7f,	// (0x000a34cb) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8f7f,	// (0x000a34cb) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfbba,	// (0x000aa106) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfbba,	// (0x000aa106) cmail_ddmenu_btn02_pane_g

0x8f9d,	// (0x000a34e9) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8f9d,	// (0x000a34e9) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfbbf,	// (0x000aa10b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfbbf,	// (0x000aa10b) cmail_ddmenu_btn02_pane_t

0x97fa,	// (0x000a3d46) fps_text_pane_ParamLimits

0x97fa,	// (0x000a3d46) fps_text_pane

0x9807,	// (0x000a3d53) main_fps_pane_g1_ParamLimits

0x9807,	// (0x000a3d53) main_fps_pane_g1

0x9815,	// (0x000a3d61) wait_bar_pane_cp010_ParamLimits

0x9815,	// (0x000a3d61) wait_bar_pane_cp010

0x9821,	// (0x000a3d6d) fps_text_pane_t1_ParamLimits

0x9821,	// (0x000a3d6d) fps_text_pane_t1

0x61f6,	// (0x000a0742) cam4_image_uncrop_pane_g1

0x61ff,	// (0x000a074b) cam4_image_uncrop_pane_g2

0x6208,	// (0x000a0754) cam4_image_uncrop_pane_g3

0x6211,	// (0x000a075d) cam4_image_uncrop_pane_g4

0x0003,

0xf74f,	// (0x000a9c9b) cam4_image_uncrop_pane_g

0x9629,	// (0x000a3b75) dia3_listrow_pane_ParamLimits

0x9be6,	// (0x000a4132) main_phob2_pane

0x8ab7,	// (0x000a3003) cell_tport_appsw_pane_cp02_ParamLimits

0x8ab7,	// (0x000a3003) cell_tport_appsw_pane_cp02

0x8ac6,	// (0x000a3012) cell_tport_appsw_pane_cp03_ParamLimits

0x8ac6,	// (0x000a3012) cell_tport_appsw_pane_cp03

0x9be6,	// (0x000a4132) phob2_contact_card_pane

0x9be6,	// (0x000a4132) phob2_listscroll_pane

0xef35,	// (0x000a9481) phob2_list_pane

0xef3d,	// (0x000a9489) scroll_pane_cp034

0x983a,	// (0x000a3d86) phob2_cc_data_pane_ParamLimits

0x983a,	// (0x000a3d86) phob2_cc_data_pane

0x9854,	// (0x000a3da0) phob2_cc_listscroll_pane_ParamLimits

0x9854,	// (0x000a3da0) phob2_cc_listscroll_pane

0x986e,	// (0x000a3dba) list_double_large_graphic_phob2_pane_ParamLimits

0x986e,	// (0x000a3dba) list_double_large_graphic_phob2_pane

0x988d,	// (0x000a3dd9) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x988d,	// (0x000a3dd9) list_double_large_graphic_phob2_pane_g1

0x98a3,	// (0x000a3def) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x98a3,	// (0x000a3def) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfcb6,	// (0x000aa202) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfcb6,	// (0x000aa202) list_double_large_graphic_phob2_pane_g

0x98af,	// (0x000a3dfb) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x98af,	// (0x000a3dfb) list_double_large_graphic_phob2_pane_t1

0x98c5,	// (0x000a3e11) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x98c5,	// (0x000a3e11) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfcbb,	// (0x000aa207) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfcbb,	// (0x000aa207) list_double_large_graphic_phob2_pane_t

0x9be6,	// (0x000a4132) list_highlight_pane_cp024

0x98da,	// (0x000a3e26) phob2_cc_button_pane

0x98e2,	// (0x000a3e2e) phob2_cc_data_pane_g1_ParamLimits

0x98e2,	// (0x000a3e2e) phob2_cc_data_pane_g1

0x98ee,	// (0x000a3e3a) phob2_cc_data_pane_g2_ParamLimits

0x98ee,	// (0x000a3e3a) phob2_cc_data_pane_g2

0x0001,

0xfcc0,	// (0x000aa20c) phob2_cc_data_pane_g_ParamLimits

0xfcc0,	// (0x000aa20c) phob2_cc_data_pane_g

0x98fa,	// (0x000a3e46) phob2_cc_data_pane_t1_ParamLimits

0x98fa,	// (0x000a3e46) phob2_cc_data_pane_t1

0x990c,	// (0x000a3e58) phob2_cc_data_pane_t2_ParamLimits

0x990c,	// (0x000a3e58) phob2_cc_data_pane_t2

0x991e,	// (0x000a3e6a) phob2_cc_data_pane_t3_ParamLimits

0x991e,	// (0x000a3e6a) phob2_cc_data_pane_t3

0x0002,

0xfcc5,	// (0x000aa211) phob2_cc_data_pane_t_ParamLimits

0xfcc5,	// (0x000aa211) phob2_cc_data_pane_t

0xef45,	// (0x000a9491) phob2_cc_list_pane_ParamLimits

0xef45,	// (0x000a9491) phob2_cc_list_pane

0xdb42,	// (0x000a808e) scroll_pane_cp035_ParamLimits

0xdb42,	// (0x000a808e) scroll_pane_cp035

0xa57e,	// (0x000a4aca) bg_button_pane_cp033

0xef51,	// (0x000a949d) phob2_cc_button_pane_g1

0xef5d,	// (0x000a94a9) phob2_cc_button_pane_t1

0xef72,	// (0x000a94be) phob2_cc_button_pane_t2

0x0001,

0xfccc,	// (0x000aa218) phob2_cc_button_pane_t

0x9930,	// (0x000a3e7c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9930,	// (0x000a3e7c) list_double_large_graphic_phob2_cc_pane

0x99a4,	// (0x000a3ef0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x99a4,	// (0x000a3ef0) list_double_large_graphic_phob2_cc_pane_g1

0x99b5,	// (0x000a3f01) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x99b5,	// (0x000a3f01) list_double_large_graphic_phob2_cc_pane_g2

0x99c4,	// (0x000a3f10) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x99c4,	// (0x000a3f10) list_double_large_graphic_phob2_cc_pane_g3

0x99d3,	// (0x000a3f1f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x99d3,	// (0x000a3f1f) list_double_large_graphic_phob2_cc_pane_g4

0x99e4,	// (0x000a3f30) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x99e4,	// (0x000a3f30) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfcd1,	// (0x000aa21d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfcd1,	// (0x000aa21d) list_double_large_graphic_phob2_cc_pane_g

0x99f3,	// (0x000a3f3f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x99f3,	// (0x000a3f3f) list_double_large_graphic_phob2_cc_pane_t1

0x9a1c,	// (0x000a3f68) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a1c,	// (0x000a3f68) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfcdc,	// (0x000aa228) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfcdc,	// (0x000aa228) list_double_large_graphic_phob2_cc_pane_t

0xef84,	// (0x000a94d0) list_highlight_pane_cp025_ParamLimits

0xef84,	// (0x000a94d0) list_highlight_pane_cp025

0xa57e,	// (0x000a4aca) bg_button_pane_cp033_ParamLimits

0xef51,	// (0x000a949d) phob2_cc_button_pane_g1_ParamLimits

0xef5d,	// (0x000a94a9) phob2_cc_button_pane_t1_ParamLimits

0xef72,	// (0x000a94be) phob2_cc_button_pane_t2_ParamLimits

0xfccc,	// (0x000aa218) phob2_cc_button_pane_t_ParamLimits

0x0f44,	// (0x0009b490) popup_wgtman_window

0xd7e1,	// (0x000a7d2d) scroll_pane_cp038

0x93a3,	// (0x000a38ef) wgtman_btn_pane_cp_01_ParamLimits

0x93a3,	// (0x000a38ef) wgtman_btn_pane_cp_01

0xef92,	// (0x000a94de) wgtman_content_pane

0xef9b,	// (0x000a94e7) wgtman_heading_pane

0x9be6,	// (0x000a4132) bg_heading_pane_cp02

0xefa4,	// (0x000a94f0) wgtman_heading_pane_g1

0xefac,	// (0x000a94f8) wgtman_heading_pane_t1

0xefba,	// (0x000a9506) scroll_pane_cp036

0xefc2,	// (0x000a950e) wgtman_list_pane

0xe761,	// (0x000a8cad) wgtman_list_pane_t1_ParamLimits

0xe761,	// (0x000a8cad) wgtman_list_pane_t1

0x6155,	// (0x000a06a1) cam4_grid_pane

0x6f29,	// (0x000a1475) bg_button_pane_cp015_ParamLimits

0x6f3b,	// (0x000a1487) bg_button_pane_cp016_ParamLimits

0x6f4e,	// (0x000a149a) bg_button_pane_cp017_ParamLimits

0x6fa4,	// (0x000a14f0) popup_vitu2_query_window_g3_ParamLimits

0x6fa4,	// (0x000a14f0) popup_vitu2_query_window_g3

0x705f,	// (0x000a15ab) popup_vitu2_query_window_t6_ParamLimits

0x705f,	// (0x000a15ab) popup_vitu2_query_window_t6

0x708a,	// (0x000a15d6) popup_vitu2_query_window_t7_ParamLimits

0x708a,	// (0x000a15d6) popup_vitu2_query_window_t7

0xd832,	// (0x000a7d7e) cam4_grid_pane_g1

0xd83b,	// (0x000a7d87) cam4_grid_pane_g2

0xefca,	// (0x000a9516) cam4_grid_pane_g3

0xefd3,	// (0x000a951f) cam4_grid_pane_g4

0x0003,

0xfce1,	// (0x000aa22d) cam4_grid_pane_g

0x1dc7,	// (0x0009c313) aid_placing_vt_slider_lsc_ParamLimits

0x2107,	// (0x0009c653) vidtel_button_pane_ParamLimits

0x2107,	// (0x0009c653) vidtel_button_pane

0x9be6,	// (0x000a4132) bg_button_pane_cp034

0xefde,	// (0x000a952a) vidtel_button_pane_g1

0xefe6,	// (0x000a9532) vidtel_button_pane_t1

0xd90d,	// (0x000a7e59) aid_size_vtel_slider_touch

0xdb42,	// (0x000a808e) scroll_pane_cp039

0x7ea2,	// (0x000a23ee) ncim_query_button_pane_cp01_ParamLimits

0x7ec1,	// (0x000a240d) ncimui_query_pane_g1_ParamLimits

0xa57e,	// (0x000a4aca) input_focus_pane_cp012_ParamLimits

0xe1f4,	// (0x000a8740) ncim_query_entry_pane_t1_ParamLimits

0xdb42,	// (0x000a808e) scroll_pane_cp039_ParamLimits

0xb37a,	// (0x000a58c6) navi_pane_bcale_mc_g1

0xb382,	// (0x000a58ce) navi_pane_bcale_mc_t1

0xe794,	// (0x000a8ce0) main_sp_fs_email_pane_g1

0xe7a0,	// (0x000a8cec) main_sp_fs_email_pane_g2

0x0001,

0x0934,	// (0x0009ae80) main_sp_fs_email_pane_g

0xe9f6,	// (0x000a8f42) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9f6,	// (0x000a8f42) list_single_cale_mrui_row_pane_g3

0x8fbd,	// (0x000a3509) list_single_recal_day_pane_g5_event_pane

0xa671,	// (0x000a4bbd) list_single_recal_day_pane_g7

0xeffc,	// (0x000a9548) list_recal_day_event_pane_cp01

0xf005,	// (0x000a9551) list_recal_vselct_arw_lo_pane_cp01

0xf00d,	// (0x000a9559) list_recal_vselct_arw_up_pane_cp01

0xf015,	// (0x000a9561) list_recal_vselct_pane_cp01

0xd92f,	// (0x000a7e7b) list_recal_day_event_pane_cp01_g1

0xa6a6,	// (0x000a4bf2) list_recal_day_event_pane_cp01_t1

0xa679,	// (0x000a4bc5) list_single_recal_day_pane_t1_ParamLimits

0xa68b,	// (0x000a4bd7) list_single_recal_day_pane_t2_ParamLimits

0xfbcf,	// (0x000aa11b) list_single_recal_day_pane_t_ParamLimits

0xa7bf,	// (0x000a4d0b) bg_notes_pane_ParamLimits

0xa86e,	// (0x000a4dba) list_notes_pane_ParamLimits

0x12a9,	// (0x0009b7f5) scroll_pane_cp06_ParamLimits

0xa890,	// (0x000a4ddc) main_notes_pane_ParamLimits

0xa57e,	// (0x000a4aca) main_welc_pane

0x9a54,	// (0x000a3fa0) main_welc_body_pane_ParamLimits

0x9a54,	// (0x000a3fa0) main_welc_body_pane

0x9a6d,	// (0x000a3fb9) main_welc_opti_pane_ParamLimits

0x9a6d,	// (0x000a3fb9) main_welc_opti_pane

0x9aac,	// (0x000a3ff8) main_welc_pane_t1_ParamLimits

0x9aac,	// (0x000a3ff8) main_welc_pane_t1

0x9b08,	// (0x000a4054) main_welc_body_row_pane_ParamLimits

0x9b08,	// (0x000a4054) main_welc_body_row_pane

0xea90,	// (0x000a8fdc) main_welc_opti_row_pane_ParamLimits

0xea90,	// (0x000a8fdc) main_welc_opti_row_pane

0xf01f,	// (0x000a956b) main_welc_opti_row_pane_g1

0x9b31,	// (0x000a407d) main_welc_opti_row_pane_t1

0xf027,	// (0x000a9573) main_welc_body_row_pane_t1

0xed57,	// (0x000a92a3) popup_notif_wgt_heading_pane

0xed71,	// (0x000a92bd) aid_size_list_notif_wgt_del_ParamLimits

0xed7e,	// (0x000a92ca) list_notif_wgt_row_pane_g1_ParamLimits

0xed8a,	// (0x000a92d6) list_notif_wgt_row_pane_g2_ParamLimits

0xed99,	// (0x000a92e5) list_notif_wgt_row_pane_g3_ParamLimits

0xfc36,	// (0x000aa182) list_notif_wgt_row_pane_g_ParamLimits

0xeda6,	// (0x000a92f2) list_notif_wgt_row_pane_t1_ParamLimits

0xedbc,	// (0x000a9308) list_notif_wgt_row_pane_t2_ParamLimits

0xedce,	// (0x000a931a) list_notif_wgt_row_pane_t3_ParamLimits

0xfc3d,	// (0x000aa189) list_notif_wgt_row_pane_t_ParamLimits

0x9436,	// (0x000a3982) listrow_wgtman_pane_g1_ParamLimits

0x9443,	// (0x000a398f) listrow_wgtman_pane_g2_ParamLimits

0xfc66,	// (0x000aa1b2) listrow_wgtman_pane_g_ParamLimits

0x9461,	// (0x000a39ad) listrow_wgtman_pane_t1_ParamLimits

0x9479,	// (0x000a39c5) listrow_wgtman_pane_t2_ParamLimits

0xfc6b,	// (0x000aa1b7) listrow_wgtman_pane_t_ParamLimits

0x949f,	// (0x000a39eb) wait_bar_pane_cp09_ParamLimits

0x9be6,	// (0x000a4132) bg_popup_heading_pane_cp02

0xf036,	// (0x000a9582) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x000a958a) popup_notif_wgt_heading_pane_t1

0x9be6,	// (0x000a4132) main_vids_pane

0x9be6,	// (0x000a4132) vids_listscroll_pane

0x9b40,	// (0x000a408c) scroll_pane_cp040

0x9be6,	// (0x000a4132) vids_list_pane

0x9b4b,	// (0x000a4097) vids_list_double_pane_ParamLimits

0x9b4b,	// (0x000a4097) vids_list_double_pane

0x9b63,	// (0x000a40af) vids_list_double_pane_g1

0x9b6c,	// (0x000a40b8) vids_list_double_pane_t1

0x9b7c,	// (0x000a40c8) vids_list_double_pane_t2

0x0001,

0xfcf8,	// (0x000aa244) vids_list_double_pane_t

0x414c,	// (0x0009e698) main_ncimui_pane_ParamLimits

0x7cf9,	// (0x000a2245) main_ncimui_pane_g1_ParamLimits

0x7d05,	// (0x000a2251) main_ncimui_pane_g2_ParamLimits

0x7d05,	// (0x000a2251) main_ncimui_pane_g2

0x0001,

0xfa22,	// (0x000a9f6e) main_ncimui_pane_g_ParamLimits

0xfa22,	// (0x000a9f6e) main_ncimui_pane_g

0x9a86,	// (0x000a3fd2) main_welc_pane_g1_ParamLimits

0x9a86,	// (0x000a3fd2) main_welc_pane_g1

0x9a92,	// (0x000a3fde) main_welc_pane_g2_ParamLimits

0x9a92,	// (0x000a3fde) main_welc_pane_g2

0x0002,

0xfcea,	// (0x000aa236) main_welc_pane_g_ParamLimits

0xfcea,	// (0x000aa236) main_welc_pane_g

0xa7bf,	// (0x000a4d0b) listscroll_mce_pane_ParamLimits

0xb4cf,	// (0x000a5a1b) wait_bar_pane_cp10

0xc908,	// (0x000a6e54) main_cale_day_pane_ParamLimits

0xc908,	// (0x000a6e54) main_cale_week_pane_ParamLimits

0xa7bf,	// (0x000a4d0b) main_messa_pane_ParamLimits

0x5476,	// (0x0009f9c2) main_clock2_btn_pane_ParamLimits

0x5476,	// (0x0009f9c2) main_clock2_btn_pane

0xd0e9,	// (0x000a7635) main_clock2_btn_pane_cp01_ParamLimits

0xd0e9,	// (0x000a7635) main_clock2_btn_pane_cp01

0xe9c7,	// (0x000a8f13) list_cale_mrui_pane_ParamLimits

0xee04,	// (0x000a9350) main_cf0_pane_g2

0x0001,

0xfc44,	// (0x000aa190) main_cf0_pane_g

0x9646,	// (0x000a3b92) area_left_week_number_pane_ParamLimits

0x9659,	// (0x000a3ba5) area_top_day_name_pane_ParamLimits

0x9667,	// (0x000a3bb3) frame_month_view_pane_ParamLimits

0xeefa,	// (0x000a9446) grid_month_view_pane_ParamLimits

0xef08,	// (0x000a9454) frm_month_g1_ParamLimits

0x96e5,	// (0x000a3c31) frm_month_g2_ParamLimits

0x96f6,	// (0x000a3c42) frm_month_g3_ParamLimits

0x9707,	// (0x000a3c53) frm_month_g4_ParamLimits

0x9718,	// (0x000a3c64) frm_month_g5_ParamLimits

0x972b,	// (0x000a3c77) frm_month_g6_ParamLimits

0x973e,	// (0x000a3c8a) frm_month_g7_ParamLimits

0xef15,	// (0x000a9461) frm_month_g8_ParamLimits

0x9751,	// (0x000a3c9d) frm_month_g9_ParamLimits

0x975e,	// (0x000a3caa) frm_month_g10_ParamLimits

0x976b,	// (0x000a3cb7) frm_month_g11_ParamLimits

0x9778,	// (0x000a3cc4) frm_month_g12_ParamLimits

0x9785,	// (0x000a3cd1) frm_month_g13_ParamLimits

0x9792,	// (0x000a3cde) frm_month_g14_ParamLimits

0x97a1,	// (0x000a3ced) frm_month_g15_ParamLimits

0x97b0,	// (0x000a3cfc) frm_month_g16_ParamLimits

0xfc95,	// (0x000aa1e1) frm_month_g_ParamLimits

0xef22,	// (0x000a946e) cell_top_day_name_pane_t1_ParamLimits

0x97bf,	// (0x000a3d0b) cell_area_left_week_number_pane_g1_ParamLimits

0x97ce,	// (0x000a3d1a) cell_area_left_week_number_pane_t1_ParamLimits

0xcf61,	// (0x000a74ad) cell_month_view_pane_g1_ParamLimits

0x97e4,	// (0x000a3d30) cell_month_view_pane_t1_ParamLimits

0xa7b7,	// (0x000a4d03) main_clock2_btn_pane_g1

0xf04c,	// (0x000a9598) main_clock2_btn_pane_t1

0xa57e,	// (0x000a4aca) listscroll_cmail_pane_ParamLimits

0xe794,	// (0x000a8ce0) main_sp_fs_email_pane_g1_ParamLimits

0xe7a0,	// (0x000a8cec) main_sp_fs_email_pane_g2_ParamLimits

0x0934,	// (0x0009ae80) main_sp_fs_email_pane_g_ParamLimits

0xeae3,	// (0x000a902f) list_recal_day_pane_ParamLimits

0xeaf4,	// (0x000a9040) mian_recal_day_pane_t1

0x8791,	// (0x000a2cdd) list_single_dyc_row_text_pane_t4_ParamLimits

0x8791,	// (0x000a2cdd) list_single_dyc_row_text_pane_t4

0x87c8,	// (0x000a2d14) list_single_dyc_row_text_pane_t5_ParamLimits

0x87c8,	// (0x000a2d14) list_single_dyc_row_text_pane_t5

0xa1a8,	// (0x000a46f4) list_single_dyc_row_text_pane_t6_ParamLimits

0xa1a8,	// (0x000a46f4) list_single_dyc_row_text_pane_t6

0x2faa,	// (0x0009d4f6) aid_mgn_list_cale_time_pane

0x414c,	// (0x0009e698) main_gallery2_pane_ParamLimits

0xd0ff,	// (0x000a764b) main_clock2_pane_cp01_t1

0xd10d,	// (0x000a7659) main_clock2_pane_cp01_t3

0x0001,

0x040b,	// (0x0009a957) main_clock2_pane_cp01_t

0x16fb,	// (0x0009bc47) cale_week_scroll_pane_g16_ParamLimits

0x16fb,	// (0x0009bc47) cale_week_scroll_pane_g16

0xaa7c,	// (0x000a4fc8) vorec_slider_pane

0xefe6,	// (0x000a9532) vidtel_button_pane_t1_ParamLimits

0x9018,	// (0x000a3564) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9018,	// (0x000a3564) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9025,	// (0x000a3571) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9025,	// (0x000a3571) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfbf2,	// (0x000aa13e) main_fs_bigclock_clock_pane_g_ParamLimits

0x9031,	// (0x000a357d) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9044,	// (0x000a3590) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfbfb,	// (0x000aa147) main_fs_bigclock_clock_pane_t_ParamLimits

0x4d1b,	// (0x0009f267) main_mup3_lyrics_pane_ParamLimits

0x4d1b,	// (0x0009f267) main_mup3_lyrics_pane

0x9bb0,	// (0x000a40fc) main_mup3_lyrics_pane_t1_ParamLimits

0x9bb0,	// (0x000a40fc) main_mup3_lyrics_pane_t1

0x5ac8,	// (0x000a0014) aid_main_mp4_pane_t1_area

0x5ad2,	// (0x000a001e) aid_main_mp4_pane_t2_area

0x5bd1,	// (0x000a011d) main_mp4_pane_g7_ParamLimits

0x5bd1,	// (0x000a011d) main_mp4_pane_g7

0x5bdd,	// (0x000a0129) main_mp4_pane_g8_ParamLimits

0x5bdd,	// (0x000a0129) main_mp4_pane_g8

0x5ffd,	// (0x000a0549) aid_call6_pane_g1_size

0x9976,	// (0x000a3ec2) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9976,	// (0x000a3ec2) list_double_large_graphic_phob2_other_pane

0xae37,	// (0x000a5383) list_double_large_graphic_phob2_other_pane_g1

0x9be6,	// (0x000a4132) list_highlight_pane_cp026

0xa57e,	// (0x000a4aca) main_welc_pane_ParamLimits

0x84dc,	// (0x000a2a28) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x84dc,	// (0x000a2a28) main_sp_fs_ctrlbar_pane_g3

0x84f4,	// (0x000a2a40) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x84f4,	// (0x000a2a40) main_sp_fs_ctrlbar_pane_g4

0x8526,	// (0x000a2a72) toolbar2_fixed_button_pane_cp01

0x8531,	// (0x000a2a7d) toolbar2_fixed_button_pane_cp02

0x853c,	// (0x000a2a88) toolbar2_fixed_button_pane_cp03

0x9a45,	// (0x000a3f91) list_welc_entry_pane_ParamLimits

0x9a45,	// (0x000a3f91) list_welc_entry_pane

0x9aa0,	// (0x000a3fec) main_welc_pane_g3_ParamLimits

0x9aa0,	// (0x000a3fec) main_welc_pane_g3

0x9ac6,	// (0x000a4012) main_welc_pane_t2_ParamLimits

0x9ac6,	// (0x000a4012) main_welc_pane_t2

0x9ada,	// (0x000a4026) main_welc_pane_t3_ParamLimits

0x9ada,	// (0x000a4026) main_welc_pane_t3

0x0002,

0xfcf1,	// (0x000aa23d) main_welc_pane_t_ParamLimits

0xfcf1,	// (0x000aa23d) main_welc_pane_t

0x9aec,	// (0x000a4038) welc_button_pane_ParamLimits

0x9aec,	// (0x000a4038) welc_button_pane

0x9afa,	// (0x000a4046) welc_service_logo_pane_ParamLimits

0x9afa,	// (0x000a4046) welc_service_logo_pane

0xf05a,	// (0x000a95a6) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x000a95a6) list_single_welc_entry_pane

0xf06b,	// (0x000a95b7) list_single_welc_entry_pane_g1

0xf073,	// (0x000a95bf) list_single_welc_entry_pane_t1

0xf081,	// (0x000a95cd) list_single_welc_entry_pane_t2

0x0001,

0x0b8b,	// (0x0009b0d7) list_single_welc_entry_pane_t

0x9be6,	// (0x000a4132) bg_button_pane_cp035

0xf08f,	// (0x000a95db) welc_button_pane_t1

0xf09d,	// (0x000a95e9) welc_service_logo_pane_g1

0xf0a6,	// (0x000a95f2) welc_service_logo_pane_g2

0x0001,

0x0b90,	// (0x0009b0dc) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
