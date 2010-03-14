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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00033356 };

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
0x4212,	// (0x00037568) Screen

0x421e,	// (0x00037574) application_window

0x4284,	// (0x000375da) area_bottom_pane_ParamLimits

0x4284,	// (0x000375da) area_bottom_pane

0x42dd,	// (0x00037633) area_top_pane_ParamLimits

0x42dd,	// (0x00037633) area_top_pane

0x4341,	// (0x00037697) call_video_uplink_pane_ParamLimits

0x4341,	// (0x00037697) call_video_uplink_pane

0x437e,	// (0x000376d4) main_pane_ParamLimits

0x437e,	// (0x000376d4) main_pane

0xe298,	// (0x000415ee) context_pane

0x7406,	// (0x0003a75c) navi_pane

0x7426,	// (0x0003a77c) popup_cale_events_window_ParamLimits

0x7426,	// (0x0003a77c) popup_cale_events_window

0xe2ab,	// (0x00041601) popup_mup_playback_window

0x743e,	// (0x0003a794) signal_pane

0xc399,	// (0x0003f6ef) main_browser_pane

0xce23,	// (0x00040179) main_burst_pane

0x72ce,	// (0x0003a624) main_calc_pane

0xce23,	// (0x00040179) main_cale_day_pane

0xc399,	// (0x0003f6ef) main_cale_month_pane

0xce23,	// (0x00040179) main_cale_week_pane

0xce23,	// (0x00040179) main_call_pane

0xc027,	// (0x0003f37d) main_call_poc_pane

0xce23,	// (0x00040179) main_camera_pane

0xce23,	// (0x00040179) main_chi_dic_pane

0xccb2,	// (0x00040008) main_clock_pane

0xc027,	// (0x0003f37d) main_fmradio_pane

0xce23,	// (0x00040179) main_graph_messa_pane

0xc027,	// (0x0003f37d) main_help_pane

0xc399,	// (0x0003f6ef) main_im_pane

0xc282,	// (0x0003f5d8) main_image_pane_ParamLimits

0xc282,	// (0x0003f5d8) main_image_pane

0xc027,	// (0x0003f37d) main_location2_pane

0xce23,	// (0x00040179) main_location_pane

0xc027,	// (0x0003f37d) main_messa_pane

0xc027,	// (0x0003f37d) main_mp2_pane

0xce23,	// (0x00040179) main_mp_pane

0xc027,	// (0x0003f37d) main_msg_pane

0xc027,	// (0x0003f37d) main_mup_eq_pane

0xc027,	// (0x0003f37d) main_mup_pane

0xc399,	// (0x0003f6ef) main_notes_pane

0xc027,	// (0x0003f37d) main_pec_pane

0xc027,	// (0x0003f37d) main_phob_pane

0xc027,	// (0x0003f37d) main_pinb_pane

0xc027,	// (0x0003f37d) main_postcard_pane

0xc027,	// (0x0003f37d) main_qdial_pane

0xce23,	// (0x00040179) main_skin_pane

0xc027,	// (0x0003f37d) main_smil2_pane

0xce23,	// (0x00040179) main_smil_pane

0xce23,	// (0x00040179) main_video_pane

0xce23,	// (0x00040179) main_video_tele_pane

0xc282,	// (0x0003f5d8) main_viewer_pane_ParamLimits

0xc282,	// (0x0003f5d8) main_viewer_pane

0xce23,	// (0x00040179) main_vorec_pane

0x7312,	// (0x0003a668) popup_blid_sat_info_window_ParamLimits

0x7312,	// (0x0003a668) popup_blid_sat_info_window

0x7328,	// (0x0003a67e) popup_dyc_status_message_window_ParamLimits

0x7328,	// (0x0003a67e) popup_dyc_status_message_window

0x7336,	// (0x0003a68c) popup_grid_large_graphic_window_ParamLimits

0x7336,	// (0x0003a68c) popup_grid_large_graphic_window

0x73aa,	// (0x0003a700) popup_loc_request_window_ParamLimits

0x73aa,	// (0x0003a700) popup_loc_request_window

0x73de,	// (0x0003a734) popup_wml_address_window_ParamLimits

0x73de,	// (0x0003a734) popup_wml_address_window

0x71a6,	// (0x0003a4fc) call_muted_g1

0x6e65,	// (0x0003a1bb) popup_call_audio_conf_window_ParamLimits

0x6e65,	// (0x0003a1bb) popup_call_audio_conf_window

0x71b6,	// (0x0003a50c) popup_call_audio_first_window_ParamLimits

0x71b6,	// (0x0003a50c) popup_call_audio_first_window

0x71f6,	// (0x0003a54c) popup_call_audio_in_window_ParamLimits

0x71f6,	// (0x0003a54c) popup_call_audio_in_window

0x721a,	// (0x0003a570) popup_call_audio_out_window_ParamLimits

0x721a,	// (0x0003a570) popup_call_audio_out_window

0x723c,	// (0x0003a592) popup_call_audio_second_window_ParamLimits

0x723c,	// (0x0003a592) popup_call_audio_second_window

0x726c,	// (0x0003a5c2) popup_call_audio_wait_window_ParamLimits

0x726c,	// (0x0003a5c2) popup_call_audio_wait_window

0x728d,	// (0x0003a5e3) popup_number_entry_window_ParamLimits

0x728d,	// (0x0003a5e3) popup_number_entry_window

0xbc16,	// (0x0003ef6c) bg_popup_call_pane_cp05_ParamLimits

0xbc16,	// (0x0003ef6c) bg_popup_call_pane_cp05

0xbc36,	// (0x0003ef8c) popup_number_entry_window_t1

0xbc49,	// (0x0003ef9f) popup_number_entry_window_t2

0xbc5b,	// (0x0003efb1) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x0004243d) popup_number_entry_window_t

0xbc6d,	// (0x0003efc3) text_title_cp2

0xbc80,	// (0x0003efd6) bg_popup_call_pane_cp_ParamLimits

0xbc80,	// (0x0003efd6) bg_popup_call_pane_cp

0xbc8e,	// (0x0003efe4) call_thumbnail_pane

0xbc96,	// (0x0003efec) popup_call_audio_in_window_g1_ParamLimits

0xbc96,	// (0x0003efec) popup_call_audio_in_window_g1

0xbca2,	// (0x0003eff8) popup_call_audio_in_window_g2_ParamLimits

0xbca2,	// (0x0003eff8) popup_call_audio_in_window_g2

0xbcae,	// (0x0003f004) popup_call_audio_in_window_g3_ParamLimits

0xbcae,	// (0x0003f004) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x00042446) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x00042446) popup_call_audio_in_window_g

0xbcba,	// (0x0003f010) popup_call_audio_in_window_t1_ParamLimits

0xbcba,	// (0x0003f010) popup_call_audio_in_window_t1

0xbcd5,	// (0x0003f02b) popup_call_audio_in_window_t2_ParamLimits

0xbcd5,	// (0x0003f02b) popup_call_audio_in_window_t2

0xbcf0,	// (0x0003f046) popup_call_audio_in_window_t3_ParamLimits

0xbcf0,	// (0x0003f046) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x0004244d) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x0004244d) popup_call_audio_in_window_t

0xbc80,	// (0x0003efd6) bg_popup_call_pane_cp01_ParamLimits

0xbc80,	// (0x0003efd6) bg_popup_call_pane_cp01

0xbc8e,	// (0x0003efe4) call_thumbnail_pane_cp02

0xbd03,	// (0x0003f059) call_type_pane_cp022

0xbd0b,	// (0x0003f061) popup_call_audio_out_window_g1_ParamLimits

0xbd0b,	// (0x0003f061) popup_call_audio_out_window_g1

0xbd1d,	// (0x0003f073) popup_call_audio_out_window_g2_ParamLimits

0xbd1d,	// (0x0003f073) popup_call_audio_out_window_g2

0xbd29,	// (0x0003f07f) popup_call_audio_out_window_g3_ParamLimits

0xbd29,	// (0x0003f07f) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x00042454) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x00042454) popup_call_audio_out_window_g

0xbd3b,	// (0x0003f091) popup_call_audio_out_window_t1_ParamLimits

0xbd3b,	// (0x0003f091) popup_call_audio_out_window_t1

0xbd53,	// (0x0003f0a9) popup_call_audio_out_window_t2_ParamLimits

0xbd53,	// (0x0003f0a9) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x0004245b) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x0004245b) popup_call_audio_out_window_t

0xbd68,	// (0x0003f0be) bg_popup_call_pane_ParamLimits

0xbd68,	// (0x0003f0be) bg_popup_call_pane

0x4589,	// (0x000378df) call_thumbnail_pane_cp_ParamLimits

0x4589,	// (0x000378df) call_thumbnail_pane_cp

0xbdec,	// (0x0003f142) call_type_pane_cp01_ParamLimits

0xbdec,	// (0x0003f142) call_type_pane_cp01

0xbe30,	// (0x0003f186) popup_call_audio_first_window_g1_ParamLimits

0xbe30,	// (0x0003f186) popup_call_audio_first_window_g1

0xbe7c,	// (0x0003f1d2) popup_call_audio_first_window_g2_ParamLimits

0xbe7c,	// (0x0003f1d2) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x00042460) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x00042460) popup_call_audio_first_window_g

0xbec0,	// (0x0003f216) popup_call_audio_first_window_t1_ParamLimits

0xbec0,	// (0x0003f216) popup_call_audio_first_window_t1

0xbf6c,	// (0x0003f2c2) popup_call_audio_first_window_t4_ParamLimits

0xbf6c,	// (0x0003f2c2) popup_call_audio_first_window_t4

0xbff8,	// (0x0003f34e) popup_call_audio_first_window_t5_ParamLimits

0xbff8,	// (0x0003f34e) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x00042465) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x00042465) popup_call_audio_first_window_t

0xc027,	// (0x0003f37d) bg_popup_call_pane_cp02

0xc031,	// (0x0003f387) call_type_pane_cp023

0xc039,	// (0x0003f38f) popup_call_audio_wait_window_g1

0xc041,	// (0x0003f397) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x0004246c) popup_call_audio_wait_window_g

0xc049,	// (0x0003f39f) popup_call_audio_wait_window_t3

0xc057,	// (0x0003f3ad) bg_popup_call_pane_cp03_ParamLimits

0xc057,	// (0x0003f3ad) bg_popup_call_pane_cp03

0xc0b7,	// (0x0003f40d) call_thumbnail_pane_cp011_ParamLimits

0xc0b7,	// (0x0003f40d) call_thumbnail_pane_cp011

0xc0c3,	// (0x0003f419) call_type_pane_cp034_ParamLimits

0xc0c3,	// (0x0003f419) call_type_pane_cp034

0xc0ff,	// (0x0003f455) popup_call_audio_second_window_g1_ParamLimits

0xc0ff,	// (0x0003f455) popup_call_audio_second_window_g1

0xc13b,	// (0x0003f491) popup_call_audio_second_window_g2_ParamLimits

0xc13b,	// (0x0003f491) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x00042471) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x00042471) popup_call_audio_second_window_g

0xc177,	// (0x0003f4cd) popup_call_audio_second_window_t1_ParamLimits

0xc177,	// (0x0003f4cd) popup_call_audio_second_window_t1

0xc1f8,	// (0x0003f54e) popup_call_audio_second_window_t2_ParamLimits

0xc1f8,	// (0x0003f54e) popup_call_audio_second_window_t2

0xc22e,	// (0x0003f584) popup_call_audio_second_window_t3_ParamLimits

0xc22e,	// (0x0003f584) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x00042476) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x00042476) popup_call_audio_second_window_t

0xc027,	// (0x0003f37d) bg_popup_call_pane_cp04

0xc264,	// (0x0003f5ba) list_conf_pane

0xc26c,	// (0x0003f5c2) popup_call_audio_conf_window_t1

0xc27a,	// (0x0003f5d0) call_thumbnail_pane_g1

0xc282,	// (0x0003f5d8) bg_pinb_pane_ParamLimits

0xc282,	// (0x0003f5d8) bg_pinb_pane

0xc290,	// (0x0003f5e6) find_pinb_pane

0xc299,	// (0x0003f5ef) listscroll_pinb_pane_ParamLimits

0xc299,	// (0x0003f5ef) listscroll_pinb_pane

0xc2a8,	// (0x0003f5fe) pinb_bg_pane_g1

0x45ad,	// (0x00037903) pinb_bg_pane_g2

0x45b9,	// (0x0003790f) pinb_bg_pane_g3

0x45c5,	// (0x0003791b) pinb_bg_pane_g4

0x45d1,	// (0x00037927) pinb_bg_pane_g5

0x45dd,	// (0x00037933) pinb_bg_pane_g6

0x45e8,	// (0x0003793e) pinb_bg_pane_g7

0x45f3,	// (0x00037949) pinb_bg_pane_g8

0x45fe,	// (0x00037954) pinb_bg_pane_g9

0x4608,	// (0x0003795e) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x0004247d) pinb_bg_pane_g

0x461d,	// (0x00037973) grid_pinb_pane

0x4628,	// (0x0003797e) list_pinb_pane

0x4633,	// (0x00037989) scroll_pane_cp01_ParamLimits

0x4633,	// (0x00037989) scroll_pane_cp01

0xc2ba,	// (0x0003f610) find_pinb_pane_g1_ParamLimits

0xc2ba,	// (0x0003f610) find_pinb_pane_g1

0xc2d2,	// (0x0003f628) find_pinb_pane_t1

0xc2e4,	// (0x0003f63a) find_pinb_pane_t2

0x0001,

0xf141,	// (0x00042497) find_pinb_pane_t

0xc2f9,	// (0x0003f64f) input_focus_pane_cp01_ParamLimits

0xc2f9,	// (0x0003f64f) input_focus_pane_cp01

0x4645,	// (0x0003799b) cell_pinb_pane_ParamLimits

0x4645,	// (0x0003799b) cell_pinb_pane

0x4679,	// (0x000379cf) cell_pinb_pane_g1_ParamLimits

0x4679,	// (0x000379cf) cell_pinb_pane_g1

0x468e,	// (0x000379e4) cell_pinb_pane_g2_ParamLimits

0x468e,	// (0x000379e4) cell_pinb_pane_g2

0xc305,	// (0x0003f65b) cell_pinb_pane_g3_ParamLimits

0xc305,	// (0x0003f65b) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x0004249c) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x0004249c) cell_pinb_pane_g

0xc027,	// (0x0003f37d) grid_highlight_pane_cp01

0x469a,	// (0x000379f0) list_pinb_item_pane_ParamLimits

0x469a,	// (0x000379f0) list_pinb_item_pane

0xc027,	// (0x0003f37d) list_highlight_pane_cp02

0xc311,	// (0x0003f667) list_pinb_item_pane_g1_ParamLimits

0xc311,	// (0x0003f667) list_pinb_item_pane_g1

0xc31e,	// (0x0003f674) list_pinb_item_pane_g2_ParamLimits

0xc31e,	// (0x0003f674) list_pinb_item_pane_g2

0x46c7,	// (0x00037a1d) list_pinb_item_pane_g3_ParamLimits

0x46c7,	// (0x00037a1d) list_pinb_item_pane_g3

0xc32a,	// (0x0003f680) list_pinb_item_pane_g4_ParamLimits

0xc32a,	// (0x0003f680) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x000424a3) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x000424a3) list_pinb_item_pane_g

0xc336,	// (0x0003f68c) list_pinb_item_pane_t1_ParamLimits

0xc336,	// (0x0003f68c) list_pinb_item_pane_t1

0x46f2,	// (0x00037a48) calc_display_pane

0x4710,	// (0x00037a66) calc_paper_pane

0x472c,	// (0x00037a82) grid_calc_pane

0xc027,	// (0x0003f37d) bg_list_pane_cp01

0x4758,	// (0x00037aae) clock_g1

0x4760,	// (0x00037ab6) clock_g2

0x0001,

0xf156,	// (0x000424ac) clock_g

0x476a,	// (0x00037ac0) clock_t1_ParamLimits

0x476a,	// (0x00037ac0) clock_t1

0x477f,	// (0x00037ad5) clock_t2_ParamLimits

0x477f,	// (0x00037ad5) clock_t2

0x4791,	// (0x00037ae7) clock_t3_ParamLimits

0x4791,	// (0x00037ae7) clock_t3

0x47a3,	// (0x00037af9) clock_t4_ParamLimits

0x47a3,	// (0x00037af9) clock_t4

0x47b5,	// (0x00037b0b) clock_t5_ParamLimits

0x47b5,	// (0x00037b0b) clock_t5

0x47ca,	// (0x00037b20) clock_t6_ParamLimits

0x47ca,	// (0x00037b20) clock_t6

0x47dc,	// (0x00037b32) clock_t7_ParamLimits

0x47dc,	// (0x00037b32) clock_t7

0x47ee,	// (0x00037b44) clock_t8_ParamLimits

0x47ee,	// (0x00037b44) clock_t8

0x4804,	// (0x00037b5a) clock_t9_ParamLimits

0x4804,	// (0x00037b5a) clock_t9

0x0008,

0xf15b,	// (0x000424b1) clock_t_ParamLimits

0xf15b,	// (0x000424b1) clock_t

0xc34d,	// (0x0003f6a3) popup_clock_analogue_window_cp02

0xc34d,	// (0x0003f6a3) popup_clock_digital_window_cp01

0xc355,	// (0x0003f6ab) listscroll_help_pane

0xc027,	// (0x0003f37d) phob_pre_status_pane

0xc35f,	// (0x0003f6b5) grid_qdial_pane

0xc027,	// (0x0003f37d) listscroll_mce_pane

0xc369,	// (0x0003f6bf) bg_notes_pane

0xc377,	// (0x0003f6cd) list_notes_pane

0x481a,	// (0x00037b70) scroll_pane_cp06

0xc385,	// (0x0003f6db) bg_calc_paper_pane

0x4829,	// (0x00037b7f) list_calc_pane

0xc399,	// (0x0003f6ef) bg_calc_display_pane

0x4843,	// (0x00037b99) calc_display_pane_t1

0x4858,	// (0x00037bae) calc_display_pane_t2

0x486d,	// (0x00037bc3) calc_display_pane_t3

0x0002,

0xf16e,	// (0x000424c4) calc_display_pane_t

0x487f,	// (0x00037bd5) cell_calc_pane_ParamLimits

0x487f,	// (0x00037bd5) cell_calc_pane

0xc3a5,	// (0x0003f6fb) bg_calc_paper_pane_g1

0xc3b1,	// (0x0003f707) bg_calc_paper_pane_g2

0xc3bd,	// (0x0003f713) bg_calc_paper_pane_g3

0xc3c9,	// (0x0003f71f) bg_calc_paper_pane_g4

0xc3d5,	// (0x0003f72b) bg_calc_paper_pane_g5

0x48ac,	// (0x00037c02) bg_calc_paper_pane_g6

0x48bd,	// (0x00037c13) bg_calc_paper_pane_g7

0x48ce,	// (0x00037c24) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x000424cb) bg_calc_paper_pane_g

0x48df,	// (0x00037c35) calc_bg_paper_pane_g9

0x48f0,	// (0x00037c46) list_calc_item_pane_ParamLimits

0x48f0,	// (0x00037c46) list_calc_item_pane

0xc3e1,	// (0x0003f737) list_calc_item_pane_g1

0x492a,	// (0x00037c80) list_calc_item_pane_t1_ParamLimits

0x492a,	// (0x00037c80) list_calc_item_pane_t1

0x493c,	// (0x00037c92) list_calc_item_pane_t2_ParamLimits

0x493c,	// (0x00037c92) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x000424dc) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x000424dc) list_calc_item_pane_t

0xc3ee,	// (0x0003f744) cell_calc_pane_g1

0xc3f8,	// (0x0003f74e) grid_highlight_pane_cp02

0xc41a,	// (0x0003f770) bg_calc_display_pane_g1

0x496c,	// (0x00037cc2) bg_calc_display_pane_g2

0xc423,	// (0x0003f779) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x000424e6) bg_calc_display_pane_g

0x4976,	// (0x00037ccc) cell_qdial_pane_ParamLimits

0x4976,	// (0x00037ccc) cell_qdial_pane

0x498a,	// (0x00037ce0) cell_qdial_pane_g1_ParamLimits

0x498a,	// (0x00037ce0) cell_qdial_pane_g1

0x4997,	// (0x00037ced) cell_qdial_pane_g2_ParamLimits

0x4997,	// (0x00037ced) cell_qdial_pane_g2

0xc42c,	// (0x0003f782) cell_qdial_pane_g3_ParamLimits

0xc42c,	// (0x0003f782) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x000424ed) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x000424ed) cell_qdial_pane_g

0x49b5,	// (0x00037d0b) cell_qdial_pane_t1_ParamLimits

0x49b5,	// (0x00037d0b) cell_qdial_pane_t1

0x49cd,	// (0x00037d23) cell_qdial_pane_t2_ParamLimits

0x49cd,	// (0x00037d23) cell_qdial_pane_t2

0x49e0,	// (0x00037d36) cell_qdial_pane_t3_ParamLimits

0x49e0,	// (0x00037d36) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x000424f6) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x000424f6) cell_qdial_pane_t

0xc027,	// (0x0003f37d) grid_highlight_pane_cp04

0xc438,	// (0x0003f78e) thumbnail_qdial_pane_ParamLimits

0xc438,	// (0x0003f78e) thumbnail_qdial_pane

0xc494,	// (0x0003f7ea) list_help_pane

0xc49d,	// (0x0003f7f3) scroll_pane_cp02

0x49f3,	// (0x00037d49) help_list_pane_t1_ParamLimits

0x49f3,	// (0x00037d49) help_list_pane_t1

0x4a31,	// (0x00037d87) bg_notes_pane_g2

0x4a39,	// (0x00037d8f) bg_notes_pane_g3

0x4a41,	// (0x00037d97) notes_bg_pane_g1

0x4a49,	// (0x00037d9f) notes_bg_pane_g4

0x4a51,	// (0x00037da7) notes_bg_pane_g5

0x4a59,	// (0x00037daf) notes_bg_pane_g6

0x4a61,	// (0x00037db7) notes_bg_pane_g7

0x4a69,	// (0x00037dbf) notes_bg_pane_g8

0x4a71,	// (0x00037dc7) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x00042514) notes_bg_pane_g

0x4a79,	// (0x00037dcf) list_notes_text_pane_ParamLimits

0x4a79,	// (0x00037dcf) list_notes_text_pane

0xc4a6,	// (0x0003f7fc) list_notes_text_pane_g1

0x3041,	// (0x00036397) list_notes_text_pane_t1

0xc399,	// (0x0003f6ef) listscroll_cale_week_pane

0x4aea,	// (0x00037e40) bg_cale_heading_pane

0xc4c0,	// (0x0003f816) bg_cale_pane_cp01

0x4b06,	// (0x00037e5c) cale_week_corner_pane

0x4b17,	// (0x00037e6d) cale_week_day_heading_pane

0x4b33,	// (0x00037e89) cale_week_scroll_pane_g1

0x4b4c,	// (0x00037ea2) cale_week_scroll_pane_g2

0x4b5d,	// (0x00037eb3) cale_week_scroll_pane_g3

0x4b6e,	// (0x00037ec4) cale_week_scroll_pane_g4

0x4b7f,	// (0x00037ed5) cale_week_scroll_pane_g5

0x4b90,	// (0x00037ee6) cale_week_scroll_pane_g6

0x4ba1,	// (0x00037ef7) cale_week_scroll_pane_g7

0x4bb4,	// (0x00037f0a) cale_week_scroll_pane_g8

0x4bc7,	// (0x00037f1d) cale_week_scroll_pane_g9

0x4bd8,	// (0x00037f2e) cale_week_scroll_pane_g10

0x4be9,	// (0x00037f3f) cale_week_scroll_pane_g11

0x4bfa,	// (0x00037f50) cale_week_scroll_pane_g12

0x4c13,	// (0x00037f69) cale_week_scroll_pane_g13

0x4c2c,	// (0x00037f82) cale_week_scroll_pane_g14

0x4c45,	// (0x00037f9b) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x00042523) cale_week_scroll_pane_g

0x4c5e,	// (0x00037fb4) cale_week_time_pane

0x4c71,	// (0x00037fc7) grid_cale_week_pane

0x4c8e,	// (0x00037fe4) scroll_pane_cp08

0x4ca8,	// (0x00037ffe) cell_cale_week_pane_ParamLimits

0x4ca8,	// (0x00037ffe) cell_cale_week_pane

0x4cf8,	// (0x0003804e) cale_week_day_heading_pane_t1

0x4d0c,	// (0x00038062) cale_week_day_heading_pane_t2

0x4d20,	// (0x00038076) cale_week_day_heading_pane_t3

0x4d34,	// (0x0003808a) cale_week_day_heading_pane_t4

0x4d48,	// (0x0003809e) cale_week_day_heading_pane_t5

0x4d5c,	// (0x000380b2) cale_week_day_heading_pane_t6

0x4d70,	// (0x000380c6) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x00042542) cale_week_day_heading_pane_t

0xc4eb,	// (0x0003f841) bg_cale_side_pane

0x4d84,	// (0x000380da) cale_week_time_pane_t1

0x4d9c,	// (0x000380f2) cale_week_time_pane_t2

0x4db4,	// (0x0003810a) cale_week_time_pane_t3

0x4dcc,	// (0x00038122) cale_week_time_pane_t4

0x4de4,	// (0x0003813a) cale_week_time_pane_t5

0x4dfc,	// (0x00038152) cale_week_time_pane_t6

0x4e1c,	// (0x00038172) cale_week_time_pane_t7

0x4e3c,	// (0x00038192) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x00042551) cale_week_time_pane_t

0x4e5c,	// (0x000381b2) cell_cale_week_pane_g2

0x4e6d,	// (0x000381c3) cell_cale_week_pane_g3_ParamLimits

0x4e6d,	// (0x000381c3) cell_cale_week_pane_g3

0xc4f9,	// (0x0003f84f) grid_highlight_pane_cp07

0xc501,	// (0x0003f857) listscroll_gms_pane

0xc50b,	// (0x0003f861) grid_gms_pane

0xc514,	// (0x0003f86a) listscroll_gms_pane_g1

0xc51c,	// (0x0003f872) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x00042562) listscroll_gms_pane_g

0x4e85,	// (0x000381db) scroll_pane_cp010

0x4e90,	// (0x000381e6) cell_gms_pane_ParamLimits

0x4e90,	// (0x000381e6) cell_gms_pane

0x4ea2,	// (0x000381f8) cell_gms_pane_g1

0xc524,	// (0x0003f87a) cell_gms_pane_g2

0xc4a6,	// (0x0003f7fc) cell_gms_pane_g3

0xc52c,	// (0x0003f882) cell_gms_pane_g4

0x0003,

0xf211,	// (0x00042567) cell_gms_pane_g

0xc535,	// (0x0003f88b) grid_highlight_pane_cp09

0x714e,	// (0x0003a4a4) phob_pre_status_pane_g1

0x7156,	// (0x0003a4ac) phob_pre_status_pane_g2

0x715e,	// (0x0003a4b4) phob_pre_status_pane_g3

0x7166,	// (0x0003a4bc) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x00042956) phob_pre_status_pane_g

0x7176,	// (0x0003a4cc) phob_pre_status_pane_t1

0x7186,	// (0x0003a4dc) phob_pre_status_pane_t2

0x7196,	// (0x0003a4ec) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x00042961) phob_pre_status_pane_t

0xc027,	// (0x0003f37d) bg_list_pane_cp05

0x4eb2,	// (0x00038208) grid_vorec_pane

0x4eba,	// (0x00038210) vorec_t1

0x4ec8,	// (0x0003821e) vorec_t2

0x4ed6,	// (0x0003822c) vorec_t3

0x4ee4,	// (0x0003823a) vorec_t4

0x4ef2,	// (0x00038248) vorec_t5

0x4f00,	// (0x00038256) vorec_t6

0x0006,

0xf21a,	// (0x00042570) vorec_t

0x4f1c,	// (0x00038272) wait_bar_pane_cp01

0xc53d,	// (0x0003f893) cell_vorec_pane_ParamLimits

0xc53d,	// (0x0003f893) cell_vorec_pane

0xc550,	// (0x0003f8a6) cell_vorec_pane_g1

0xc027,	// (0x0003f37d) grid_highlight_pane_cp05

0x4f34,	// (0x0003828a) cams_zoom_pane

0x4f40,	// (0x00038296) image_vga_pane

0x4f4f,	// (0x000382a5) main_camera_pane_g1

0x4f5d,	// (0x000382b3) main_camera_pane_g2

0x4f6b,	// (0x000382c1) main_camera_pane_g3

0x4f77,	// (0x000382cd) main_camera_pane_g4

0x4f83,	// (0x000382d9) main_camera_pane_g5

0x4f8f,	// (0x000382e5) main_camera_pane_g6

0x4f9b,	// (0x000382f1) main_camera_pane_g7

0x0007,

0xf229,	// (0x0004257f) main_camera_pane_g

0x4fa7,	// (0x000382fd) main_camera_pane_t1

0x4fb9,	// (0x0003830f) main_camera_pane_t2

0x0001,

0xf23a,	// (0x00042590) main_camera_pane_t

0x4fda,	// (0x00038330) cams_zoom_pane_cp_ParamLimits

0x4fda,	// (0x00038330) cams_zoom_pane_cp

0x4ffe,	// (0x00038354) image_cif_pane_ParamLimits

0x4ffe,	// (0x00038354) image_cif_pane

0x501c,	// (0x00038372) image_subqcif_pane

0x5024,	// (0x0003837a) main_video_pane_g1_ParamLimits

0x5024,	// (0x0003837a) main_video_pane_g1

0x5044,	// (0x0003839a) main_video_pane_g2_ParamLimits

0x5044,	// (0x0003839a) main_video_pane_g2

0x5076,	// (0x000383cc) main_video_pane_g3_ParamLimits

0x5076,	// (0x000383cc) main_video_pane_g3

0x50a1,	// (0x000383f7) main_video_pane_g4_ParamLimits

0x50a1,	// (0x000383f7) main_video_pane_g4

0x50cc,	// (0x00038422) main_video_pane_g5_ParamLimits

0x50cc,	// (0x00038422) main_video_pane_g5

0xc566,	// (0x0003f8bc) main_video_pane_g6_ParamLimits

0xc566,	// (0x0003f8bc) main_video_pane_g6

0x0006,

0xf23f,	// (0x00042595) main_video_pane_g_ParamLimits

0xf23f,	// (0x00042595) main_video_pane_g

0x50f0,	// (0x00038446) main_video_pane_t1_ParamLimits

0x50f0,	// (0x00038446) main_video_pane_t1

0xc580,	// (0x0003f8d6) cams_zoom_pane_g1

0xc589,	// (0x0003f8df) cams_zoom_pane_g2

0xc592,	// (0x0003f8e8) cams_zoom_pane_g3

0xc59b,	// (0x0003f8f1) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x000425a4) cams_zoom_pane_g

0x513a,	// (0x00038490) grid_cams_pane

0x5148,	// (0x0003849e) linegrid_cams_pane

0x5156,	// (0x000384ac) cell_cams_pane_ParamLimits

0x5156,	// (0x000384ac) cell_cams_pane

0xc5a4,	// (0x0003f8fa) cams_burst_image_pane

0xc5ac,	// (0x0003f902) cell_cams_pane_g1

0xc027,	// (0x0003f37d) grid_highlight_pane_cp03

0xc3ee,	// (0x0003f744) mp_bg_pane_g1

0xc027,	// (0x0003f37d) bg_list_pane_cp03

0xe170,	// (0x000414c6) bg_mp_pane

0xe178,	// (0x000414ce) grid_mp_pane

0xe180,	// (0x000414d6) media_player_g1

0xe188,	// (0x000414de) media_player_t1

0xe196,	// (0x000414ec) media_player_t2

0xe1a4,	// (0x000414fa) media_player_t3

0xe1b2,	// (0x00041508) media_player_t4

0xe1c0,	// (0x00041516) media_player_t5

0xe1ce,	// (0x00041524) media_player_t6

0xe1dc,	// (0x00041532) media_player_t7

0x0006,

0xf5ea,	// (0x00042940) media_player_t

0xe1ea,	// (0x00041540) wait_bar_pane_cp02

0xf5cf,	// (0x00042925) main_usb_pane_t

0x7145,	// (0x0003a49b) cell_mp_pane

0xc3ee,	// (0x0003f744) cell_mp_pane_g1

0xc027,	// (0x0003f37d) grid_highlight_pane_cp06

0xc5b4,	// (0x0003f90a) grid_skin_colour_pane

0xc5bc,	// (0x0003f912) list_highlight_pane_cp03

0x5169,	// (0x000384bf) skin_g1

0xc5c4,	// (0x0003f91a) skin_t1

0xc5d3,	// (0x0003f929) skin_t2

0x0001,

0xf283,	// (0x000425d9) skin_t

0x5173,	// (0x000384c9) cell_skin_colour_pane_ParamLimits

0x5173,	// (0x000384c9) cell_skin_colour_pane

0xc5e1,	// (0x0003f937) cell_skin_colour_pane_g1

0x51f7,	// (0x0003854d) call_video_g1_ParamLimits

0x51f7,	// (0x0003854d) call_video_g1

0x5207,	// (0x0003855d) call_video_g2_ParamLimits

0x5207,	// (0x0003855d) call_video_g2

0x0001,

0xf288,	// (0x000425de) call_video_g_ParamLimits

0xf288,	// (0x000425de) call_video_g

0x5261,	// (0x000385b7) call_video_uplink_pane_cp1_ParamLimits

0x5261,	// (0x000385b7) call_video_uplink_pane_cp1

0xc5f3,	// (0x0003f949) call_video_uplink_pane_cp2

0x532d,	// (0x00038683) video_down_crop_pane_ParamLimits

0x532d,	// (0x00038683) video_down_crop_pane

0x541f,	// (0x00038775) video_down_pane_ParamLimits

0x541f,	// (0x00038775) video_down_pane

0xc5fb,	// (0x0003f951) video_down_subqcif_pane_ParamLimits

0xc5fb,	// (0x0003f951) video_down_subqcif_pane

0xc613,	// (0x0003f969) video_down_subqcif_pane_cp_ParamLimits

0xc613,	// (0x0003f969) video_down_subqcif_pane_cp

0xc639,	// (0x0003f98f) im_reading_pane_ParamLimits

0xc639,	// (0x0003f98f) im_reading_pane

0x5541,	// (0x00038897) im_writing_pane_ParamLimits

0x5541,	// (0x00038897) im_writing_pane

0x555f,	// (0x000388b5) im_reading_pane_t1

0xc653,	// (0x0003f9a9) list_im_pane

0xc664,	// (0x0003f9ba) scroll_pane_cp07

0x55bf,	// (0x00038915) im_writing_pane_t1_ParamLimits

0x55bf,	// (0x00038915) im_writing_pane_t1

0xc67d,	// (0x0003f9d3) im_writing_pane_t2_ParamLimits

0xc67d,	// (0x0003f9d3) im_writing_pane_t2

0x0001,

0xf292,	// (0x000425e8) im_writing_pane_t_ParamLimits

0xf292,	// (0x000425e8) im_writing_pane_t

0xc027,	// (0x0003f37d) input_focus_pane_cp04

0xc027,	// (0x0003f37d) input_focus_pane_cp05

0x55d1,	// (0x00038927) list_im_single_pane_ParamLimits

0x55d1,	// (0x00038927) list_im_single_pane

0x55fd,	// (0x00038953) list_single_im_pane_t1

0x7109,	// (0x0003a45f) blid_accuracy_pane

0x7111,	// (0x0003a467) blid_compass_pane

0x711b,	// (0x0003a471) main_location_t1

0x7129,	// (0x0003a47f) main_location_t2

0x7137,	// (0x0003a48d) main_location_t3

0x0002,

0xf5f9,	// (0x0004294f) main_location_t

0xc027,	// (0x0003f37d) aid_levels_location

0xc3ee,	// (0x0003f744) blid_accuracy_pane_g1

0xc3ee,	// (0x0003f744) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x0004264a) blid_accuracy_pane_g

0xc6c5,	// (0x0003fa1b) wml_content_pane

0xc703,	// (0x0003fa59) wml_button_pane_ParamLimits

0xc703,	// (0x0003fa59) wml_button_pane

0x560c,	// (0x00038962) wml_list_single_large_pane_ParamLimits

0x560c,	// (0x00038962) wml_list_single_large_pane

0x563e,	// (0x00038994) wml_list_single_medium_pane_ParamLimits

0x563e,	// (0x00038994) wml_list_single_medium_pane

0x5677,	// (0x000389cd) wml_list_single_small_pane_ParamLimits

0x5677,	// (0x000389cd) wml_list_single_small_pane

0xc717,	// (0x0003fa6d) wml_selection_box_pane_ParamLimits

0xc717,	// (0x0003fa6d) wml_selection_box_pane

0xc72a,	// (0x0003fa80) wml_list_single_pane_t1

0xc739,	// (0x0003fa8f) wml_list_single_medium_pane_t1

0xc748,	// (0x0003fa9e) wml_list_single_large_pane_t1

0xc757,	// (0x0003faad) input_focus_pane_cp02_ParamLimits

0xc757,	// (0x0003faad) input_focus_pane_cp02

0xc76a,	// (0x0003fac0) wml_selection_box_pane_g1

0xc773,	// (0x0003fac9) wml_selection_box_pane_t1_ParamLimits

0xc773,	// (0x0003fac9) wml_selection_box_pane_t1

0xc282,	// (0x0003f5d8) bg_wml_button_pane_ParamLimits

0xc282,	// (0x0003f5d8) bg_wml_button_pane

0xc78b,	// (0x0003fae1) wml_button_pane_g1

0xc793,	// (0x0003fae9) wml_button_pane_t1

0xc78b,	// (0x0003fae1) wml_button_bg_pane_g1

0xc7a3,	// (0x0003faf9) wml_button_bg_pane_g2

0xc7ab,	// (0x0003fb01) wml_button_bg_pane_g3

0xc7b3,	// (0x0003fb09) wml_button_bg_pane_g4

0xc7bb,	// (0x0003fb11) wml_button_bg_pane_g5

0xc7c3,	// (0x0003fb19) wml_button_bg_pane_g6

0xc7cb,	// (0x0003fb21) wml_button_bg_pane_g7

0xc7d3,	// (0x0003fb29) wml_button_bg_pane_g8

0xc7db,	// (0x0003fb31) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x000425ed) wml_button_bg_pane_g

0x56bf,	// (0x00038a15) bg_list_pane_cp02

0xc7e3,	// (0x0003fb39) mce_header_pane_ParamLimits

0xc7e3,	// (0x0003fb39) mce_header_pane

0xc7f9,	// (0x0003fb4f) mce_icon_pane

0xc7f9,	// (0x0003fb4f) mce_image_pane

0xc802,	// (0x0003fb58) mce_text_pane_ParamLimits

0xc802,	// (0x0003fb58) mce_text_pane

0x56c9,	// (0x00038a1f) scroll_pane_cp03

0xc6fb,	// (0x0003fa51) scroll_pane_cp04

0xc815,	// (0x0003fb6b) scroll_pane_cp05_ParamLimits

0xc815,	// (0x0003fb6b) scroll_pane_cp05

0x56d3,	// (0x00038a29) mce_header_field_pane_ParamLimits

0x56d3,	// (0x00038a29) mce_header_field_pane

0x56f3,	// (0x00038a49) mce_header_field_pane_2_ParamLimits

0x56f3,	// (0x00038a49) mce_header_field_pane_2

0x5709,	// (0x00038a5f) mce_header_field_pane_3

0x5711,	// (0x00038a67) list_single_mce_message_pane_ParamLimits

0x5711,	// (0x00038a67) list_single_mce_message_pane

0x5741,	// (0x00038a97) list_single_mce_smart_pane_ParamLimits

0x5741,	// (0x00038a97) list_single_mce_smart_pane

0xc821,	// (0x0003fb77) input_focus_pane_cp03

0xc82a,	// (0x0003fb80) list_header_data_pane

0x577c,	// (0x00038ad2) mce_header_field_pane_t1

0x578c,	// (0x00038ae2) list_single_mce_header_pane_ParamLimits

0x578c,	// (0x00038ae2) list_single_mce_header_pane

0xc832,	// (0x0003fb88) list_single_mce_header_pane_t1

0xc841,	// (0x0003fb97) list_single_mce_message_pane_g1

0xc849,	// (0x0003fb9f) list_single_mce_message_pane_t1

0x57de,	// (0x00038b34) bg_cale_heading_pane_cp01_ParamLimits

0x57de,	// (0x00038b34) bg_cale_heading_pane_cp01

0xc857,	// (0x0003fbad) bg_cale_pane_cp02_ParamLimits

0xc857,	// (0x0003fbad) bg_cale_pane_cp02

0x5811,	// (0x00038b67) cale_month_corner_pane

0x5827,	// (0x00038b7d) cale_month_day_heading_pane_ParamLimits

0x5827,	// (0x00038b7d) cale_month_day_heading_pane

0x586a,	// (0x00038bc0) cale_month_pane_g1_ParamLimits

0x586a,	// (0x00038bc0) cale_month_pane_g1

0x5896,	// (0x00038bec) cale_month_pane_g2_ParamLimits

0x5896,	// (0x00038bec) cale_month_pane_g2

0x58b9,	// (0x00038c0f) cale_month_pane_g3_ParamLimits

0x58b9,	// (0x00038c0f) cale_month_pane_g3

0x58f5,	// (0x00038c4b) cale_month_pane_g4_ParamLimits

0x58f5,	// (0x00038c4b) cale_month_pane_g4

0x5931,	// (0x00038c87) cale_month_pane_g5_ParamLimits

0x5931,	// (0x00038c87) cale_month_pane_g5

0x596d,	// (0x00038cc3) cale_month_pane_g6_ParamLimits

0x596d,	// (0x00038cc3) cale_month_pane_g6

0x59a9,	// (0x00038cff) cale_month_pane_g7_ParamLimits

0x59a9,	// (0x00038cff) cale_month_pane_g7

0x59f5,	// (0x00038d4b) cale_month_pane_g8_ParamLimits

0x59f5,	// (0x00038d4b) cale_month_pane_g8

0x5a41,	// (0x00038d97) cale_month_pane_g9_ParamLimits

0x5a41,	// (0x00038d97) cale_month_pane_g9

0x5a87,	// (0x00038ddd) cale_month_pane_g10_ParamLimits

0x5a87,	// (0x00038ddd) cale_month_pane_g10

0x5acd,	// (0x00038e23) cale_month_pane_g11_ParamLimits

0x5acd,	// (0x00038e23) cale_month_pane_g11

0x5b0b,	// (0x00038e61) cale_month_pane_g12_ParamLimits

0x5b0b,	// (0x00038e61) cale_month_pane_g12

0x5b49,	// (0x00038e9f) cale_month_pane_g13_ParamLimits

0x5b49,	// (0x00038e9f) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x00042600) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x00042600) cale_month_pane_g

0x5b87,	// (0x00038edd) cale_month_week_pane

0x5b9a,	// (0x00038ef0) grid_cale_month_pane_ParamLimits

0x5b9a,	// (0x00038ef0) grid_cale_month_pane

0x5bd8,	// (0x00038f2e) cale_month_day_heading_pane_t1

0x5c36,	// (0x00038f8c) cale_month_day_heading_pane_t2

0x5c9b,	// (0x00038ff1) cale_month_day_heading_pane_t3

0x5d00,	// (0x00039056) cale_month_day_heading_pane_t4

0x5d65,	// (0x000390bb) cale_month_day_heading_pane_t5

0x5dca,	// (0x00039120) cale_month_day_heading_pane_t6

0x5e37,	// (0x0003918d) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x0004261b) cale_month_day_heading_pane_t

0xc4eb,	// (0x0003f841) bg_cale_side_pane_cp01

0x5eac,	// (0x00039202) cale_month_week_pane_t1

0x5ec3,	// (0x00039219) cale_month_week_pane_t2

0x5eda,	// (0x00039230) cale_month_week_pane_t3

0x5ef1,	// (0x00039247) cale_month_week_pane_t4

0x5f08,	// (0x0003925e) cale_month_week_pane_t5

0x5f27,	// (0x0003927d) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x0004262a) cale_month_week_pane_t

0x5f46,	// (0x0003929c) cell_cale_month_pane_ParamLimits

0x5f46,	// (0x0003929c) cell_cale_month_pane

0x6014,	// (0x0003936a) cell_cale_month_pane_g1

0x6020,	// (0x00039376) cell_cale_month_pane_t1_ParamLimits

0x6020,	// (0x00039376) cell_cale_month_pane_t1

0xc4f9,	// (0x0003f84f) grid_highlight_pane_cp08

0xc3ee,	// (0x0003f744) main_smil_g1

0x603c,	// (0x00039392) smil_status_pane

0xc88c,	// (0x0003fbe2) smil_text_pane

0xe088,	// (0x000413de) bg_popup_call3_rect_pane_g8

0xe090,	// (0x000413e6) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x000428e3) bg_popup_call3_rect_pane_g

0xe312,	// (0x00041668) smil_status_volume_pane_g1

0xc896,	// (0x0003fbec) smil_status_pane_t1

0x74fd,	// (0x0003a853) volume_smil_pane

0xc8ad,	// (0x0003fc03) list_smil_text_pane

0x604f,	// (0x000393a5) scroll_pane_cp011

0x605a,	// (0x000393b0) smil_text_list_pane_t1_ParamLimits

0x605a,	// (0x000393b0) smil_text_list_pane_t1

0x6105,	// (0x0003945b) aid_volume_smil_ParamLimits

0x6105,	// (0x0003945b) aid_volume_smil

0xc3ee,	// (0x0003f744) smil_volume_pane_g1

0xc3ee,	// (0x0003f744) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x0004264a) smil_volume_pane_g

0xc399,	// (0x0003f6ef) listscroll_cale_day_pane

0xc8b7,	// (0x0003fc0d) bg_cale_pane

0xc8cf,	// (0x0003fc25) list_cale_pane

0xc8e0,	// (0x0003fc36) scroll_pane_cp09

0xc8f1,	// (0x0003fc47) cale_bg_pane_g1

0xc8f9,	// (0x0003fc4f) cale_bg_pane_g2

0xc901,	// (0x0003fc57) cale_bg_pane_g3

0xc909,	// (0x0003fc5f) cale_bg_pane_g4

0xc911,	// (0x0003fc67) cale_bg_pane_g5

0xc919,	// (0x0003fc6f) cale_bg_pane_g6

0xc921,	// (0x0003fc77) cale_bg_pane_g7

0xc929,	// (0x0003fc7f) cale_bg_pane_g8

0xc931,	// (0x0003fc87) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0004264f) cale_bg_pane_g

0x6127,	// (0x0003947d) list_cale_time_pane_ParamLimits

0x6127,	// (0x0003947d) list_cale_time_pane

0x6148,	// (0x0003949e) list_cale_time_pane_g1_ParamLimits

0x6148,	// (0x0003949e) list_cale_time_pane_g1

0xc939,	// (0x0003fc8f) list_cale_time_pane_g2_ParamLimits

0xc939,	// (0x0003fc8f) list_cale_time_pane_g2

0x6154,	// (0x000394aa) list_cale_time_pane_g3_ParamLimits

0x6154,	// (0x000394aa) list_cale_time_pane_g3

0x6170,	// (0x000394c6) list_cale_time_pane_g4_ParamLimits

0x6170,	// (0x000394c6) list_cale_time_pane_g4

0x617e,	// (0x000394d4) list_cale_time_pane_g5_ParamLimits

0x617e,	// (0x000394d4) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x00042662) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x00042662) list_cale_time_pane_g

0x618c,	// (0x000394e2) list_cale_time_pane_t1_ParamLimits

0x618c,	// (0x000394e2) list_cale_time_pane_t1

0x61b4,	// (0x0003950a) list_cale_time_pane_t2_ParamLimits

0x61b4,	// (0x0003950a) list_cale_time_pane_t2

0x64b4,	// (0x0003980a) aid_blid_cardinal_pane

0x64f6,	// (0x0003984c) compass_pane_t4

0x61dc,	// (0x00039532) list_cale_time_pane_t4_ParamLimits

0x61dc,	// (0x00039532) list_cale_time_pane_t4

0x6504,	// (0x0003985a) compass_pane_t5

0x6514,	// (0x0003986a) compass_pane_t6

0x6522,	// (0x00039878) compass_pane_t7

0xcd75,	// (0x000400cb) navi_pane_cc_t1

0xceca,	// (0x00040220) aid_phob_thumbnail_center_pane

0x6bff,	// (0x00039f55) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0004266f) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0004266f) list_cale_time_pane_t

0xbc80,	// (0x0003efd6) bg_popup_window_pane_cp02_ParamLimits

0xbc80,	// (0x0003efd6) bg_popup_window_pane_cp02

0xc953,	// (0x0003fca9) heading_pane_cp01_ParamLimits

0xc953,	// (0x0003fca9) heading_pane_cp01

0xc95f,	// (0x0003fcb5) loc_req_pane_ParamLimits

0xc95f,	// (0x0003fcb5) loc_req_pane

0xc96f,	// (0x0003fcc5) loc_type_pane_ParamLimits

0xc96f,	// (0x0003fcc5) loc_type_pane

0xc981,	// (0x0003fcd7) loc_type_pane_t1_ParamLimits

0xc981,	// (0x0003fcd7) loc_type_pane_t1

0xc993,	// (0x0003fce9) loc_type_pane_t2_ParamLimits

0xc993,	// (0x0003fce9) loc_type_pane_t2

0xc9a5,	// (0x0003fcfb) loc_type_pane_t3_ParamLimits

0xc9a5,	// (0x0003fcfb) loc_type_pane_t3

0x0002,

0xf320,	// (0x00042676) loc_type_pane_t_ParamLimits

0xf320,	// (0x00042676) loc_type_pane_t

0xc9b7,	// (0x0003fd0d) list_loc_req_pane

0xc9c1,	// (0x0003fd17) scroll_pane_cp012

0x6204,	// (0x0003955a) list_single_loc_request_popup_menu_pane_ParamLimits

0x6204,	// (0x0003955a) list_single_loc_request_popup_menu_pane

0xc9cc,	// (0x0003fd22) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc9cc,	// (0x0003fd22) list_single_loc_request_popup_menu_pane_g1

0xc9d8,	// (0x0003fd2e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc9d8,	// (0x0003fd2e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0004267d) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0004267d) list_single_loc_request_popup_menu_pane_g

0xc9e4,	// (0x0003fd3a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc9e4,	// (0x0003fd3a) list_single_loc_request_popup_menu_pane_t1

0x6216,	// (0x0003956c) bg_popup_window_pane_cp03_ParamLimits

0x6216,	// (0x0003956c) bg_popup_window_pane_cp03

0x6224,	// (0x0003957a) heading_loc_req_pane_ParamLimits

0x6224,	// (0x0003957a) heading_loc_req_pane

0x6230,	// (0x00039586) popup_dyc_status_message_window_g1_ParamLimits

0x6230,	// (0x00039586) popup_dyc_status_message_window_g1

0x623c,	// (0x00039592) popup_dyc_status_message_window_t1_ParamLimits

0x623c,	// (0x00039592) popup_dyc_status_message_window_t1

0x624e,	// (0x000395a4) popup_dyc_status_message_window_t2_ParamLimits

0x624e,	// (0x000395a4) popup_dyc_status_message_window_t2

0x6260,	// (0x000395b6) popup_dyc_status_message_window_t3_ParamLimits

0x6260,	// (0x000395b6) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x00042682) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x00042682) popup_dyc_status_message_window_t

0xc027,	// (0x0003f37d) bg_heading_pane_cp01

0xc9fa,	// (0x0003fd50) heading_loc_req_pane_g1

0xca02,	// (0x0003fd58) heading_loc_req_pane_g2

0xca0a,	// (0x0003fd60) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x00042689) heading_loc_req_pane_g

0xca12,	// (0x0003fd68) heading_loc_req_pane_t1

0xca21,	// (0x0003fd77) bg_popup_sub_pane_cp01_ParamLimits

0xca21,	// (0x0003fd77) bg_popup_sub_pane_cp01

0xca2f,	// (0x0003fd85) popup_cale_events_window_g1_ParamLimits

0xca2f,	// (0x0003fd85) popup_cale_events_window_g1

0xca4f,	// (0x0003fda5) popup_cale_events_window_g2_ParamLimits

0xca4f,	// (0x0003fda5) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x000426bd) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x000426bd) popup_cale_events_window_g

0xca6f,	// (0x0003fdc5) popup_cale_events_window_t1_ParamLimits

0xca6f,	// (0x0003fdc5) popup_cale_events_window_t1

0xca81,	// (0x0003fdd7) popup_cale_events_window_t2_ParamLimits

0xca81,	// (0x0003fdd7) popup_cale_events_window_t2

0xcabf,	// (0x0003fe15) popup_cale_events_window_t3_ParamLimits

0xcabf,	// (0x0003fe15) popup_cale_events_window_t3

0xcaf9,	// (0x0003fe4f) popup_cale_events_window_t4_ParamLimits

0xcaf9,	// (0x0003fe4f) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x000426c2) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x000426c2) popup_cale_events_window_t

0x628a,	// (0x000395e0) call_type_pane

0xcb2f,	// (0x0003fe85) popup_call_status_window_g1

0x6296,	// (0x000395ec) popup_call_status_window_g2

0x62a2,	// (0x000395f8) popup_call_status_window_g3

0x0002,

0xf375,	// (0x000426cb) popup_call_status_window_g

0xcb3d,	// (0x0003fe93) call_type_pane_g1

0xcb46,	// (0x0003fe9c) call_type_pane_g2

0x0001,

0xf37c,	// (0x000426d2) call_type_pane_g

0xc027,	// (0x0003f37d) bg_popup_sub_pane_cp02

0xcb4f,	// (0x0003fea5) listscroll_popup_wml_pane

0xcb57,	// (0x0003fead) list_wml_pane

0xcb61,	// (0x0003feb7) scroll_pane_cp013

0xcb6c,	// (0x0003fec2) list_single_graphic_popup_wml_pane_ParamLimits

0xcb6c,	// (0x0003fec2) list_single_graphic_popup_wml_pane

0xc3ee,	// (0x0003f744) list_single_graphic_popup_wml_pane_g1

0xcb80,	// (0x0003fed6) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x000426d7) list_single_graphic_popup_wml_pane_g

0xcb88,	// (0x0003fede) list_single_graphic_popup_wml_pane_t1

0xcb9e,	// (0x0003fef4) aid_call_pane

0xc27a,	// (0x0003f5d0) popup_clock_analogue_window_g1

0xc27a,	// (0x0003f5d0) popup_clock_analogue_window_g2

0x62ae,	// (0x00039604) popup_clock_analogue_window_g3

0x62ae,	// (0x00039604) popup_clock_analogue_window_g4

0xc3ee,	// (0x0003f744) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x000426dc) popup_clock_analogue_window_g

0x62b6,	// (0x0003960c) popup_clock_analogue_window_t1

0x62c4,	// (0x0003961a) clock_digital_number_pane_ParamLimits

0x62c4,	// (0x0003961a) clock_digital_number_pane

0x62d0,	// (0x00039626) clock_digital_number_pane_cp02_ParamLimits

0x62d0,	// (0x00039626) clock_digital_number_pane_cp02

0x62dc,	// (0x00039632) clock_digital_number_pane_cp03_ParamLimits

0x62dc,	// (0x00039632) clock_digital_number_pane_cp03

0x62e8,	// (0x0003963e) clock_digital_number_pane_cp04_ParamLimits

0x62e8,	// (0x0003963e) clock_digital_number_pane_cp04

0x62f4,	// (0x0003964a) clock_digital_separator_pane_ParamLimits

0x62f4,	// (0x0003964a) clock_digital_separator_pane

0x6300,	// (0x00039656) popup_clock_digital_window_t1

0xc3ee,	// (0x0003f744) clock_digital_number_pane_g1

0xc3ee,	// (0x0003f744) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x0004264a) clock_digital_number_pane_g

0xc3ee,	// (0x0003f744) clock_digital_separator_pane_g1

0xc3ee,	// (0x0003f744) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x0004264a) clock_digital_separator_pane_g

0xc027,	// (0x0003f37d) bg_popup_window_pane_cp04

0xcba6,	// (0x0003fefc) heading_pane_cp03

0xcbae,	// (0x0003ff04) listscroll_popup_gms_pane

0xcbb6,	// (0x0003ff0c) grid_large_graphic_popup_pane

0xcbc0,	// (0x0003ff16) listscroll_popup_gms_pane_g1

0xcbc8,	// (0x0003ff1e) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x000426e7) listscroll_popup_gms_pane_g

0xc6fb,	// (0x0003fa51) scroll_pane_cp014

0xcbd0,	// (0x0003ff26) cell_large_graphic_popup_pane_ParamLimits

0xcbd0,	// (0x0003ff26) cell_large_graphic_popup_pane

0xcbe8,	// (0x0003ff3e) cell_large_graphic_popup_pane_g1_ParamLimits

0xcbe8,	// (0x0003ff3e) cell_large_graphic_popup_pane_g1

0xcbf4,	// (0x0003ff4a) cell_large_graphic_popup_pane_g2_ParamLimits

0xcbf4,	// (0x0003ff4a) cell_large_graphic_popup_pane_g2

0xcc00,	// (0x0003ff56) cell_large_graphic_popup_pane_g3_ParamLimits

0xcc00,	// (0x0003ff56) cell_large_graphic_popup_pane_g3

0xcc0d,	// (0x0003ff63) cell_large_graphic_popup_pane_g4_ParamLimits

0xcc0d,	// (0x0003ff63) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x000426ec) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x000426ec) cell_large_graphic_popup_pane_g

0xcc1d,	// (0x0003ff73) grid_highlight_pane_cp010

0xc3ee,	// (0x0003f744) bg_popup_call_pane_g1

0xcc27,	// (0x0003ff7d) list_single_graphic_popup_conf_pane_ParamLimits

0xcc27,	// (0x0003ff7d) list_single_graphic_popup_conf_pane

0xcc39,	// (0x0003ff8f) list_highlight_pane_cp01

0xcc42,	// (0x0003ff98) list_single_graphic_popup_conf_pane_g1

0xcc4a,	// (0x0003ffa0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x000426f5) list_single_graphic_popup_conf_pane_g

0xcc52,	// (0x0003ffa8) list_single_graphic_popup_conf_pane_t1

0xcc60,	// (0x0003ffb6) linegrid_cams_pane_g1

0x631d,	// (0x00039673) linegrid_cams_pane_g2

0xc4a6,	// (0x0003f7fc) linegrid_cams_pane_g3

0xcc69,	// (0x0003ffbf) linegrid_cams_pane_g4

0x6326,	// (0x0003967c) linegrid_cams_pane_g5

0x632f,	// (0x00039685) linegrid_cams_pane_g6

0xc52c,	// (0x0003f882) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x000426fa) linegrid_cams_pane_g

0xcc72,	// (0x0003ffc8) popup_clock_analogue_window

0xcc72,	// (0x0003ffc8) popup_clock_digital_window

0xc027,	// (0x0003f37d) popup_phob_thumbnail_window

0xc3ee,	// (0x0003f744) call_video_uplink_pane_g1

0xcc7b,	// (0x0003ffd1) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x00042709) call_video_uplink_pane_g

0xc4f9,	// (0x0003f84f) video_uplink_pane

0xcc83,	// (0x0003ffd9) mce_image_pane_g1

0x6338,	// (0x0003968e) mce_image_pane_g2

0x6340,	// (0x00039696) mce_image_pane_g3

0x6348,	// (0x0003969e) mce_image_pane_g4

0x6350,	// (0x000396a6) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x0004270e) mce_image_pane_g

0xcc8d,	// (0x0003ffe3) control_top_pane_stacon_cp01_ParamLimits

0xcc8d,	// (0x0003ffe3) control_top_pane_stacon_cp01

0xcca1,	// (0x0003fff7) uni_indicator_pane_stacon_cp01_ParamLimits

0xcca1,	// (0x0003fff7) uni_indicator_pane_stacon_cp01

0xccb2,	// (0x00040008) bg_popup_sub_pane_cp03

0x6358,	// (0x000396ae) chi_dic_find_pane

0x6360,	// (0x000396b6) listscroll_chi_dic_pane

0x6369,	// (0x000396bf) main_pane_chidic_g1

0x637c,	// (0x000396d2) chi_dic_find_pane_t1

0xccbc,	// (0x00040012) find_chidic_pane

0xccc5,	// (0x0004001b) chi_dic_list_pane_ParamLimits

0xccc5,	// (0x0004001b) chi_dic_list_pane

0xccd6,	// (0x0004002c) scroll_pane_cp020

0x638a,	// (0x000396e0) find_chidic_pane_t1

0xc027,	// (0x0003f37d) input_focus_pane_cp06

0x6399,	// (0x000396ef) list_chi_dic_pane_ParamLimits

0x6399,	// (0x000396ef) list_chi_dic_pane

0xccde,	// (0x00040034) list_chi_dic_pane_t1_ParamLimits

0xccde,	// (0x00040034) list_chi_dic_pane_t1

0xc027,	// (0x0003f37d) list_highlight_pane_cp020

0xccf1,	// (0x00040047) bg_cale_heading_pane_g1

0x63ba,	// (0x00039710) bg_cale_heading_pane_g2

0x63c2,	// (0x00039718) bg_cale_heading_pane_g3

0x63ca,	// (0x00039720) bg_cale_heading_pane_g4

0x63d4,	// (0x0003972a) bg_cale_heading_pane_g5

0x63de,	// (0x00039734) bg_cale_heading_pane_g6

0x63e6,	// (0x0003973c) bg_cale_heading_pane_g7

0x63ee,	// (0x00039744) bg_cale_heading_pane_g8

0x63f8,	// (0x0003974e) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x00042719) bg_cale_heading_pane_g

0xccf1,	// (0x00040047) bg_cale_side_pane_g1

0x6402,	// (0x00039758) bg_cale_side_pane_g2

0x640c,	// (0x00039762) bg_cale_side_pane_g3

0x6416,	// (0x0003976c) bg_cale_side_pane_g4

0x6420,	// (0x00039776) bg_cale_side_pane_g5

0x642a,	// (0x00039780) bg_cale_side_pane_g6

0x6434,	// (0x0003978a) bg_cale_side_pane_g7

0x643e,	// (0x00039794) bg_cale_side_pane_g8

0x6446,	// (0x0003979c) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x0004272c) bg_cale_side_pane_g

0x644e,	// (0x000397a4) popup_call_status_window_ParamLimits

0x644e,	// (0x000397a4) popup_call_status_window

0xccf9,	// (0x0004004f) stacon_top_pane

0xcd01,	// (0x00040057) status_pane_ParamLimits

0xcd01,	// (0x00040057) status_pane

0xcd16,	// (0x0004006c) status_small_pane

0xcd1e,	// (0x00040074) control_pane

0xc027,	// (0x0003f37d) stacon_bottom_pane

0xcd26,	// (0x0004007c) list_single_mce_smart_pane_t1_ParamLimits

0xcd26,	// (0x0004007c) list_single_mce_smart_pane_t1

0xcd39,	// (0x0004008f) list_single_mce_smart_pane_t2_ParamLimits

0xcd39,	// (0x0004008f) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0004273f) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0004273f) list_single_mce_smart_pane_t

0x645a,	// (0x000397b0) compass_pane

0x6466,	// (0x000397bc) main_location2_pane_t1

0x647a,	// (0x000397d0) main_location2_pane_t2

0x648e,	// (0x000397e4) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x00042744) main_location2_pane_t

0xcd58,	// (0x000400ae) compass_pane_g1_ParamLimits

0xcd58,	// (0x000400ae) compass_pane_g1

0x64d8,	// (0x0003982e) compass_pane_t1

0x64e7,	// (0x0003983d) compass_pane_t2

0x0005,

0xf3f7,	// (0x0004274d) compass_pane_t

0x6532,	// (0x00039888) text_secondary_cp61

0xcd6c,	// (0x000400c2) navi_pane_cams_g5

0xcd8f,	// (0x000400e5) navi_pane_im_t1

0xcd9d,	// (0x000400f3) navi_pane_mp_g1_ParamLimits

0xcd9d,	// (0x000400f3) navi_pane_mp_g1

0xcdb1,	// (0x00040107) navi_pane_mp_g2_ParamLimits

0xcdb1,	// (0x00040107) navi_pane_mp_g2

0xcdbd,	// (0x00040113) navi_pane_mp_g3_ParamLimits

0xcdbd,	// (0x00040113) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x00042761) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x00042761) navi_pane_mp_g

0xcdc9,	// (0x0004011f) navi_pane_mp_t1

0xcdd7,	// (0x0004012d) navi_pane_mp_t2

0x0002,

0xf412,	// (0x00042768) navi_pane_mp_t

0xce13,	// (0x00040169) navi_pane_vt_g1

0xcdc9,	// (0x0004011f) navi_pane_vt_t1

0xce1b,	// (0x00040171) navi_slider_pane

0xce23,	// (0x00040179) zooming_pane

0xce2b,	// (0x00040181) navi_slider_pane_g1

0x665f,	// (0x000399b5) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0004276f) navi_slider_pane_g

0xce4f,	// (0x000401a5) aid_levels_zoom

0xce57,	// (0x000401ad) zooming_pane_g1

0xce5f,	// (0x000401b5) zooming_pane_g2

0xce5f,	// (0x000401b5) zooming_pane_g3

0x0002,

0xf428,	// (0x0004277e) zooming_pane_g

0xce67,	// (0x000401bd) level_10_zoom

0xce70,	// (0x000401c6) level_11_zoom

0xce79,	// (0x000401cf) level_1_zoom

0xce82,	// (0x000401d8) level_2_zoom

0xce8b,	// (0x000401e1) level_3_zoom

0xce94,	// (0x000401ea) level_4_zoom

0xce9d,	// (0x000401f3) level_5_zoom

0xcea6,	// (0x000401fc) level_6_zoom

0xceaf,	// (0x00040205) level_7_zoom

0xceb8,	// (0x0004020e) level_8_zoom

0xcec1,	// (0x00040217) level_9_zoom

0xced2,	// (0x00040228) popup_phob_thumbnail_window_g1

0xceda,	// (0x00040230) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x00042785) popup_phob_thumbnail_window_g

0xe1f2,	// (0x00041548) level_1_location

0xe1fa,	// (0x00041550) level_2_location

0xe202,	// (0x00041558) level_3_location

0xe20a,	// (0x00041560) level_4_location

0xce23,	// (0x00040179) level_5_location

0x6671,	// (0x000399c7) mce_icon_pane_g1

0x6679,	// (0x000399cf) mce_icon_pane_g2

0x0001,

0xf434,	// (0x0004278a) mce_icon_pane_g

0x6681,	// (0x000399d7) main_mup_pane_g1_ParamLimits

0x6681,	// (0x000399d7) main_mup_pane_g1

0x6699,	// (0x000399ef) main_mup_pane_g2_ParamLimits

0x6699,	// (0x000399ef) main_mup_pane_g2

0x66b5,	// (0x00039a0b) main_mup_pane_g3_ParamLimits

0x66b5,	// (0x00039a0b) main_mup_pane_g3

0x66d1,	// (0x00039a27) main_mup_pane_g4_ParamLimits

0x66d1,	// (0x00039a27) main_mup_pane_g4

0x66ed,	// (0x00039a43) main_mup_pane_g5_ParamLimits

0x66ed,	// (0x00039a43) main_mup_pane_g5

0x670e,	// (0x00039a64) main_mup_pane_g6_ParamLimits

0x670e,	// (0x00039a64) main_mup_pane_g6

0x672a,	// (0x00039a80) main_mup_pane_g7_ParamLimits

0x672a,	// (0x00039a80) main_mup_pane_g7

0x6746,	// (0x00039a9c) main_mup_pane_g8_ParamLimits

0x6746,	// (0x00039a9c) main_mup_pane_g8

0x6762,	// (0x00039ab8) main_mup_pane_g9_ParamLimits

0x6762,	// (0x00039ab8) main_mup_pane_g9

0x6781,	// (0x00039ad7) main_mup_pane_g10_ParamLimits

0x6781,	// (0x00039ad7) main_mup_pane_g10

0x67a0,	// (0x00039af6) main_mup_pane_g11_ParamLimits

0x67a0,	// (0x00039af6) main_mup_pane_g11

0x67b8,	// (0x00039b0e) main_mup_pane_g12_ParamLimits

0x67b8,	// (0x00039b0e) main_mup_pane_g12

0x67c6,	// (0x00039b1c) main_mup_pane_g13_ParamLimits

0x67c6,	// (0x00039b1c) main_mup_pane_g13

0x000c,

0xf439,	// (0x0004278f) main_mup_pane_g_ParamLimits

0xf439,	// (0x0004278f) main_mup_pane_g

0x67dc,	// (0x00039b32) main_mup_pane_t1_ParamLimits

0x67dc,	// (0x00039b32) main_mup_pane_t1

0x67f9,	// (0x00039b4f) main_mup_pane_t2_ParamLimits

0x67f9,	// (0x00039b4f) main_mup_pane_t2

0x6813,	// (0x00039b69) main_mup_pane_t3_ParamLimits

0x6813,	// (0x00039b69) main_mup_pane_t3

0x682d,	// (0x00039b83) main_mup_pane_t4_ParamLimits

0x682d,	// (0x00039b83) main_mup_pane_t4

0x683f,	// (0x00039b95) main_mup_pane_t5_ParamLimits

0x683f,	// (0x00039b95) main_mup_pane_t5

0x6851,	// (0x00039ba7) main_mup_pane_t6_ParamLimits

0x6851,	// (0x00039ba7) main_mup_pane_t6

0x0005,

0xf454,	// (0x000427aa) main_mup_pane_t_ParamLimits

0xf454,	// (0x000427aa) main_mup_pane_t

0x6867,	// (0x00039bbd) mup_progress_pane_ParamLimits

0x6867,	// (0x00039bbd) mup_progress_pane

0x6873,	// (0x00039bc9) mup_visualizer_pane_ParamLimits

0x6873,	// (0x00039bc9) mup_visualizer_pane

0x68b1,	// (0x00039c07) mup_volume_pane_ParamLimits

0x68b1,	// (0x00039c07) mup_volume_pane

0xcb2f,	// (0x0003fe85) mup_visualizer_pane_g1_ParamLimits

0xcb2f,	// (0x0003fe85) mup_visualizer_pane_g1

0xcb2f,	// (0x0003fe85) mup_visualizer_pane_g2_ParamLimits

0xcb2f,	// (0x0003fe85) mup_visualizer_pane_g2

0xcd58,	// (0x000400ae) mup_visualizer_pane_g3_ParamLimits

0xcd58,	// (0x000400ae) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x000427b7) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x000427b7) mup_visualizer_pane_g

0xc3ee,	// (0x0003f744) mup_volume_pane_g1

0xceea,	// (0x00040240) mup_volume_pane_g2

0x0001,

0xf468,	// (0x000427be) mup_volume_pane_g

0xc3ee,	// (0x0003f744) mup_progress_pane_g1

0xcef3,	// (0x00040249) mup_progress_pane_g2

0xcefc,	// (0x00040252) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x000427c3) mup_progress_pane_g

0xc027,	// (0x0003f37d) bg_popup_window_pane_cp05

0xcf05,	// (0x0004025b) heading_pane_cp02_ParamLimits

0xcf05,	// (0x0004025b) heading_pane_cp02

0xcf1f,	// (0x00040275) list_popup_blid_pane

0xcf27,	// (0x0004027d) list_blid_sat_info_pane_ParamLimits

0xcf27,	// (0x0004027d) list_blid_sat_info_pane

0xcf3a,	// (0x00040290) list_blid_sat_info_pane_g1

0xcf42,	// (0x00040298) list_blid_sat_info_pane_t1

0x69bc,	// (0x00039d12) mup_equalizer_pane_ParamLimits

0x69bc,	// (0x00039d12) mup_equalizer_pane

0x69dd,	// (0x00039d33) mup_equalizer_pane_cp1_ParamLimits

0x69dd,	// (0x00039d33) mup_equalizer_pane_cp1

0x69fe,	// (0x00039d54) mup_equalizer_pane_cp2_ParamLimits

0x69fe,	// (0x00039d54) mup_equalizer_pane_cp2

0x6a1f,	// (0x00039d75) mup_equalizer_pane_cp3_ParamLimits

0x6a1f,	// (0x00039d75) mup_equalizer_pane_cp3

0x6a40,	// (0x00039d96) mup_equalizer_pane_cp4_ParamLimits

0x6a40,	// (0x00039d96) mup_equalizer_pane_cp4

0x6a61,	// (0x00039db7) mup_equalizer_pane_cp5

0x6a77,	// (0x00039dcd) mup_equalizer_pane_cp6

0x6a8f,	// (0x00039de5) mup_equalizer_pane_cp7

0xe110,	// (0x00041466) bg_popup_call_poc_act_pane_g9

0xe118,	// (0x0004146e) bg_popup_call_poc_act_pane_g10

0xe120,	// (0x00041476) bg_popup_call_poc_act_pane_g11

0x000a,

0xc282,	// (0x0003f5d8) mup_scale_pane

0xc3ee,	// (0x0003f744) mup_scale_pane_g1

0xcf50,	// (0x000402a6) mup_scale_pane_g2

0x0006,

0xf489,	// (0x000427df) mup_scale_pane_g

0xcf74,	// (0x000402ca) msg_data_pane

0xcf7c,	// (0x000402d2) scroll_pane_cp017

0x323a,	// (0x00036590) bg_list_pane_cp04_ParamLimits

0x323a,	// (0x00036590) bg_list_pane_cp04

0xcf84,	// (0x000402da) msg_data_pane_g1

0x6ab9,	// (0x00039e0f) msg_data_pane_g2

0x6340,	// (0x00039696) msg_data_pane_g3

0x6ac1,	// (0x00039e17) msg_data_pane_g4

0x6ac9,	// (0x00039e1f) msg_data_pane_g5

0x6ad1,	// (0x00039e27) msg_data_pane_g6

0x6ad9,	// (0x00039e2f) msg_data_pane_g7

0x0006,

0xf498,	// (0x000427ee) msg_data_pane_g

0x325a,	// (0x000365b0) msg_text_pane_ParamLimits

0x325a,	// (0x000365b0) msg_text_pane

0x6ae1,	// (0x00039e37) qrid_highlight_pane_cp011_ParamLimits

0x6ae1,	// (0x00039e37) qrid_highlight_pane_cp011

0xc027,	// (0x0003f37d) msg_body_pane

0xc027,	// (0x0003f37d) msg_header_pane

0xcf95,	// (0x000402eb) input_focus_pane_cp07

0x32bb,	// (0x00036611) msg_header_pane_t1_ParamLimits

0x32bb,	// (0x00036611) msg_header_pane_t1

0x32cf,	// (0x00036625) msg_header_pane_t2_ParamLimits

0x32cf,	// (0x00036625) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x00042802) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x00042802) msg_header_pane_t

0xcfaa,	// (0x00040300) msg_body_pane_g1

0x32e1,	// (0x00036637) msg_body_pane_t1_ParamLimits

0x32e1,	// (0x00036637) msg_body_pane_t1

0x3312,	// (0x00036668) msg_body_pane_t2_ParamLimits

0x3312,	// (0x00036668) msg_body_pane_t2

0x3324,	// (0x0003667a) msg_body_pane_t3_ParamLimits

0x3324,	// (0x0003667a) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x00042807) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x00042807) msg_body_pane_t

0x6b4f,	// (0x00039ea5) main_viewer_pane_g1_ParamLimits

0x6b4f,	// (0x00039ea5) main_viewer_pane_g1

0x6b5b,	// (0x00039eb1) main_viewer_pane_g2_ParamLimits

0x6b5b,	// (0x00039eb1) main_viewer_pane_g2

0x6b67,	// (0x00039ebd) main_viewer_pane_g3_ParamLimits

0x6b67,	// (0x00039ebd) main_viewer_pane_g3

0x6b78,	// (0x00039ece) main_viewer_pane_g4_ParamLimits

0x6b78,	// (0x00039ece) main_viewer_pane_g4

0x6b89,	// (0x00039edf) main_viewer_pane_g5_ParamLimits

0x6b89,	// (0x00039edf) main_viewer_pane_g5

0x6b89,	// (0x00039edf) main_viewer_pane_g7_ParamLimits

0x6b89,	// (0x00039edf) main_viewer_pane_g7

0x6b9b,	// (0x00039ef1) main_viewer_pane_g8_ParamLimits

0x6b9b,	// (0x00039ef1) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x00042817) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x00042817) main_viewer_pane_g

0xcfb2,	// (0x00040308) viewer_content_pane_ParamLimits

0xcfb2,	// (0x00040308) viewer_content_pane

0x6bd3,	// (0x00039f29) main_postcard_pane_g1_ParamLimits

0x6bd3,	// (0x00039f29) main_postcard_pane_g1

0x6be1,	// (0x00039f37) main_postcard_pane_g2_ParamLimits

0x6be1,	// (0x00039f37) main_postcard_pane_g2

0x6bef,	// (0x00039f45) main_postcard_pane_g3_ParamLimits

0x6bef,	// (0x00039f45) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x00042828) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x00042828) main_postcard_pane_g

0x6bff,	// (0x00039f55) main_postcard_pane_g4

0xe325,	// (0x0004167b) smil_status_volume_pane_g2

0x6c2b,	// (0x00039f81) postcard_pane_ParamLimits

0x6c2b,	// (0x00039f81) postcard_pane

0xcb2f,	// (0x0003fe85) postcard_pane_g1_ParamLimits

0xcb2f,	// (0x0003fe85) postcard_pane_g1

0x6c5d,	// (0x00039fb3) postcard_pane_g2_ParamLimits

0x6c5d,	// (0x00039fb3) postcard_pane_g2

0x6c69,	// (0x00039fbf) postcard_pane_g3_ParamLimits

0x6c69,	// (0x00039fbf) postcard_pane_g3

0xcfc0,	// (0x00040316) postcard_pane_g4_ParamLimits

0xcfc0,	// (0x00040316) postcard_pane_g4

0x6c75,	// (0x00039fcb) postcard_pane_g5_ParamLimits

0x6c75,	// (0x00039fcb) postcard_pane_g5

0x6c81,	// (0x00039fd7) postcard_pane_g6_ParamLimits

0x6c81,	// (0x00039fd7) postcard_pane_g6

0xcfce,	// (0x00040324) postcard_pane_g7_ParamLimits

0xcfce,	// (0x00040324) postcard_pane_g7

0x0006,

0xf4df,	// (0x00042835) postcard_pane_g_ParamLimits

0xf4df,	// (0x00042835) postcard_pane_g

0x6c8d,	// (0x00039fe3) main_mp2_pane_g1_ParamLimits

0x6c8d,	// (0x00039fe3) main_mp2_pane_g1

0x6c99,	// (0x00039fef) main_mp2_pane_g2_ParamLimits

0x6c99,	// (0x00039fef) main_mp2_pane_g2

0x6ca5,	// (0x00039ffb) main_mp2_pane_g3_ParamLimits

0x6ca5,	// (0x00039ffb) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x00042844) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x00042844) main_mp2_pane_g

0x6cb1,	// (0x0003a007) main_mp2_pane_t1_ParamLimits

0x6cb1,	// (0x0003a007) main_mp2_pane_t1

0x6cc8,	// (0x0003a01e) main_mp2_pane_t2_ParamLimits

0x6cc8,	// (0x0003a01e) main_mp2_pane_t2

0x6cda,	// (0x0003a030) main_mp2_pane_t3_ParamLimits

0x6cda,	// (0x0003a030) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0004284b) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0004284b) main_mp2_pane_t

0xcfdc,	// (0x00040332) pec_content_pane_ParamLimits

0xcfdc,	// (0x00040332) pec_content_pane

0xc6fb,	// (0x0003fa51) scroll_pane_cp015

0xcfee,	// (0x00040344) pec_attribute_pane_ParamLimits

0xcfee,	// (0x00040344) pec_attribute_pane

0x6cec,	// (0x0003a042) pec_content_pane_g1_ParamLimits

0x6cec,	// (0x0003a042) pec_content_pane_g1

0xcffe,	// (0x00040354) pec_content_pane_t1_ParamLimits

0xcffe,	// (0x00040354) pec_content_pane_t1

0xd010,	// (0x00040366) pec_content_pane_t2_ParamLimits

0xd010,	// (0x00040366) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x00042852) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x00042852) pec_content_pane_t

0x6cf8,	// (0x0003a04e) list_single_graphic_pane_cp01_ParamLimits

0x6cf8,	// (0x0003a04e) list_single_graphic_pane_cp01

0xc282,	// (0x0003f5d8) bg_popup_sub_pane_cp04

0xd022,	// (0x00040378) popup_mup_playback_window_g1

0xd02e,	// (0x00040384) popup_mup_playback_window_t1

0xd043,	// (0x00040399) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x00042857) popup_mup_playback_window_t

0xd07a,	// (0x000403d0) main_image_pane_g1_ParamLimits

0xd07a,	// (0x000403d0) main_image_pane_g1

0xd0bd,	// (0x00040413) scroll_pane_cp018_ParamLimits

0xd0bd,	// (0x00040413) scroll_pane_cp018

0xd0d5,	// (0x0004042b) scroll_pane_cp016_ParamLimits

0xd0d5,	// (0x0004042b) scroll_pane_cp016

0x6d9c,	// (0x0003a0f2) smil2_image_pane_ParamLimits

0x6d9c,	// (0x0003a0f2) smil2_image_pane

0x6dd0,	// (0x0003a126) smil2_root_pane_ParamLimits

0x6dd0,	// (0x0003a126) smil2_root_pane

0x6dfc,	// (0x0003a152) smil2_text_pane_ParamLimits

0x6dfc,	// (0x0003a152) smil2_text_pane

0xc027,	// (0x0003f37d) bg_list_pane_cp06

0xd111,	// (0x00040467) grid_radio_pane

0xc027,	// (0x0003f37d) bg_popup_window_pane_cp06

0xd119,	// (0x0004046f) main_fmradio_pane_t1

0xcba6,	// (0x0003fefc) heading_pane_cp04

0xd127,	// (0x0004047d) main_fmradio_pane_t2

0xe128,	// (0x0004147e) popup_cale_lunar_info_window_g1

0xd135,	// (0x0004048b) main_fmradio_pane_t3

0xe130,	// (0x00041486) popup_cale_lunar_info_window_g2

0xd143,	// (0x00040499) main_fmradio_pane_t4

0x0001,

0xd151,	// (0x000404a7) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x00042932) popup_cale_lunar_info_window_g

0xf516,	// (0x0004286c) main_fmradio_pane_t

0xd15f,	// (0x000404b5) wait_bar_pane_cp03

0xd167,	// (0x000404bd) cell_fmradio_pane_ParamLimits

0xd167,	// (0x000404bd) cell_fmradio_pane

0xcfce,	// (0x00040324) cell_fmradio_pane_g1_ParamLimits

0xcfce,	// (0x00040324) cell_fmradio_pane_g1

0xc027,	// (0x0003f37d) grid_highlight_pane_cp011

0xd17a,	// (0x000404d0) poc_content_pane_ParamLimits

0xd17a,	// (0x000404d0) poc_content_pane

0xd18c,	// (0x000404e2) scroll_pane_cp019

0x6e3c,	// (0x0003a192) popup_call_poc_act_window_ParamLimits

0x6e3c,	// (0x0003a192) popup_call_poc_act_window

0x6e49,	// (0x0003a19f) popup_call_poc_inact_window_ParamLimits

0x6e49,	// (0x0003a19f) popup_call_poc_inact_window

0xf5b3,	// (0x00042909) bg_popup_call_poc_act_pane_g

0xe098,	// (0x000413ee) bg_popup_call_poc_inact_pane_g1

0xe0a0,	// (0x000413f6) bg_popup_call_poc_inact_pane_g2

0xd194,	// (0x000404ea) popup_call_poc_act_window_g2

0xe0a8,	// (0x000413fe) bg_popup_call_poc_inact_pane_g3

0xe0b0,	// (0x00041406) bg_popup_call_poc_inact_pane_g4

0xe0b8,	// (0x0004140e) bg_popup_call_poc_inact_pane_g5

0xd19c,	// (0x000404f2) popup_call_poc_act_window_t1_ParamLimits

0xd19c,	// (0x000404f2) popup_call_poc_act_window_t1

0xd1c4,	// (0x0004051a) popup_call_poc_act_window_t2_ParamLimits

0xd1c4,	// (0x0004051a) popup_call_poc_act_window_t2

0xd1ec,	// (0x00040542) popup_call_poc_act_window_t3_ParamLimits

0xd1ec,	// (0x00040542) popup_call_poc_act_window_t3

0xd214,	// (0x0004056a) popup_call_poc_act_window_t4_ParamLimits

0xd214,	// (0x0004056a) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x00042877) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x00042877) popup_call_poc_act_window_t

0xe0c0,	// (0x00041416) bg_popup_call_poc_inact_pane_g6

0xe0c8,	// (0x0004141e) bg_popup_call_poc_inact_pane_g7

0xe0d0,	// (0x00041426) bg_popup_call_poc_inact_pane_g8

0xd226,	// (0x0004057c) popup_call_poc_inact_window_g2

0xe0d8,	// (0x0004142e) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x000428f6) bg_popup_call_poc_inact_pane_g

0xd22e,	// (0x00040584) popup_call_poc_inact_window_t1_ParamLimits

0xd22e,	// (0x00040584) popup_call_poc_inact_window_t1

0xd243,	// (0x00040599) popup_call_poc_inact_window_t2_ParamLimits

0xd243,	// (0x00040599) popup_call_poc_inact_window_t2

0xd258,	// (0x000405ae) popup_call_poc_inact_window_t3_ParamLimits

0xd258,	// (0x000405ae) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x00042880) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x00042880) popup_call_poc_inact_window_t

0xe298,	// (0x000415ee) context_pane_ParamLimits

0x743e,	// (0x0003a794) signal_pane_ParamLimits

0xce23,	// (0x00040179) main_call2_pane

0xe286,	// (0x000415dc) popup_phob_thumbnail2_window_ParamLimits

0xe286,	// (0x000415dc) popup_phob_thumbnail2_window

0x6afd,	// (0x00039e53) aid_hotspot_pointer_arrow_pane

0x6b05,	// (0x00039e5b) aid_hotspot_pointer_hand_pane

0x716e,	// (0x0003a4c4) phob_pre_status_pane_g5

0x4f34,	// (0x0003828a) cams_zoom_pane_ParamLimits

0x4f40,	// (0x00038296) image_vga_pane_ParamLimits

0x4f4f,	// (0x000382a5) main_camera_pane_g1_ParamLimits

0x4f5d,	// (0x000382b3) main_camera_pane_g2_ParamLimits

0x4f6b,	// (0x000382c1) main_camera_pane_g3_ParamLimits

0x4f77,	// (0x000382cd) main_camera_pane_g4_ParamLimits

0x4f83,	// (0x000382d9) main_camera_pane_g5_ParamLimits

0x4f8f,	// (0x000382e5) main_camera_pane_g6_ParamLimits

0x4f9b,	// (0x000382f1) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0004257f) main_camera_pane_g_ParamLimits

0x4fa7,	// (0x000382fd) main_camera_pane_t1_ParamLimits

0x4fb9,	// (0x0003830f) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x00042590) main_camera_pane_t_ParamLimits

0xc282,	// (0x0003f5d8) bg_popup_preview_window_pane_cp01_ParamLimits

0xc282,	// (0x0003f5d8) bg_popup_preview_window_pane_cp01

0xd26d,	// (0x000405c3) popup_phob_thumbnail2_window_g1_ParamLimits

0xd26d,	// (0x000405c3) popup_phob_thumbnail2_window_g1

0xc027,	// (0x0003f37d) call2_cli_visual_pane

0x6e65,	// (0x0003a1bb) popup_call2_audio_conf_window_ParamLimits

0x6e65,	// (0x0003a1bb) popup_call2_audio_conf_window

0x6e7a,	// (0x0003a1d0) popup_call2_audio_first_window_ParamLimits

0x6e7a,	// (0x0003a1d0) popup_call2_audio_first_window

0x6f18,	// (0x0003a26e) popup_call2_audio_in_window_ParamLimits

0x6f18,	// (0x0003a26e) popup_call2_audio_in_window

0x6f5a,	// (0x0003a2b0) popup_call2_audio_out_window_ParamLimits

0x6f5a,	// (0x0003a2b0) popup_call2_audio_out_window

0x6fbc,	// (0x0003a312) popup_call2_audio_second_window_ParamLimits

0x6fbc,	// (0x0003a312) popup_call2_audio_second_window

0x701a,	// (0x0003a370) popup_call2_audio_wait_window_ParamLimits

0x701a,	// (0x0003a370) popup_call2_audio_wait_window

0xc027,	// (0x0003f37d) bg_popup_call2_act_pane_cp03

0xc264,	// (0x0003f5ba) list_conf_pane_cp

0xd279,	// (0x000405cf) popup_call2_audio_conf_window_t1

0xd287,	// (0x000405dd) list_single_graphic_popup_conf2_pane_ParamLimits

0xd287,	// (0x000405dd) list_single_graphic_popup_conf2_pane

0xcc39,	// (0x0003ff8f) list_highlight_pane_cp04

0xd29a,	// (0x000405f0) list_single_graphic_popup_conf2_pane_g1

0xcc4a,	// (0x0003ffa0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x00042887) list_single_graphic_popup_conf2_pane_g

0xd2a4,	// (0x000405fa) list_single_graphic_popup_conf2_pane_t1

0xd2b2,	// (0x00040608) bg_popup_call2_act_pane_cp01_ParamLimits

0xd2b2,	// (0x00040608) bg_popup_call2_act_pane_cp01

0xd33c,	// (0x00040692) call_type_pane_cp05_ParamLimits

0xd33c,	// (0x00040692) call_type_pane_cp05

0xd390,	// (0x000406e6) popup_call2_audio_second_window_g1_ParamLimits

0xd390,	// (0x000406e6) popup_call2_audio_second_window_g1

0xd3e4,	// (0x0004073a) popup_call2_audio_second_window_g2_ParamLimits

0xd3e4,	// (0x0004073a) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x0004288c) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x0004288c) popup_call2_audio_second_window_g

0xd449,	// (0x0004079f) popup_call2_audio_second_window_t1_ParamLimits

0xd449,	// (0x0004079f) popup_call2_audio_second_window_t1

0xd504,	// (0x0004085a) popup_call2_audio_second_window_t2_ParamLimits

0xd504,	// (0x0004085a) popup_call2_audio_second_window_t2

0xd557,	// (0x000408ad) popup_call2_audio_second_window_t3_ParamLimits

0xd557,	// (0x000408ad) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x00042893) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x00042893) popup_call2_audio_second_window_t

0xc027,	// (0x0003f37d) bg_popup_call2_in_pane_cp02

0xc031,	// (0x0003f387) call_type_pane_cp04

0xc039,	// (0x0003f38f) popup_call2_audio_wait_window_g1

0xc041,	// (0x0003f397) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x0004246c) popup_call2_audio_wait_window_g

0xc049,	// (0x0003f39f) popup_call2_audio_wait_window_t3

0xd64a,	// (0x000409a0) bg_popup_call2_act_pane_ParamLimits

0xd64a,	// (0x000409a0) bg_popup_call2_act_pane

0xd70a,	// (0x00040a60) call_type_pane_cp03_ParamLimits

0xd70a,	// (0x00040a60) call_type_pane_cp03

0xd76e,	// (0x00040ac4) popup_call2_audio_first_window_g1_ParamLimits

0xd76e,	// (0x00040ac4) popup_call2_audio_first_window_g1

0xd7de,	// (0x00040b34) popup_call2_audio_first_window_g2_ParamLimits

0xd7de,	// (0x00040b34) popup_call2_audio_first_window_g2

0xcb2f,	// (0x0003fe85) popup_call2_audio_first_window_g3_ParamLimits

0xcb2f,	// (0x0003fe85) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x0004289c) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x0004289c) popup_call2_audio_first_window_g

0xd8d4,	// (0x00040c2a) popup_call2_audio_first_window_t1_ParamLimits

0xd8d4,	// (0x00040c2a) popup_call2_audio_first_window_t1

0xd9d7,	// (0x00040d2d) popup_call2_audio_first_window_t4_ParamLimits

0xd9d7,	// (0x00040d2d) popup_call2_audio_first_window_t4

0xdaba,	// (0x00040e10) popup_call2_audio_first_window_t5_ParamLimits

0xdaba,	// (0x00040e10) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x000428a7) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x000428a7) popup_call2_audio_first_window_t

0xc27a,	// (0x0003f5d0) bg_popup_call2_act_pane_g1

0xe138,	// (0x0004148e) popup_cale_lunar_info_window_t1

0xe146,	// (0x0004149c) popup_cale_lunar_info_window_t2

0xe154,	// (0x000414aa) popup_cale_lunar_info_window_t3

0xc027,	// (0x0003f37d) bg_popup_call2_bubble_pane

0xdbbb,	// (0x00040f11) bg_popup_call2_in_pane_cp01_ParamLimits

0xdbbb,	// (0x00040f11) bg_popup_call2_in_pane_cp01

0xbd03,	// (0x0003f059) call_type_pane_cp02

0xdc03,	// (0x00040f59) popup_call2_audio_out_window_g1_ParamLimits

0xdc03,	// (0x00040f59) popup_call2_audio_out_window_g1

0xdc2f,	// (0x00040f85) popup_call2_audio_out_window_g2_ParamLimits

0xdc2f,	// (0x00040f85) popup_call2_audio_out_window_g2

0xdc57,	// (0x00040fad) popup_call2_audio_out_window_g3_ParamLimits

0xdc57,	// (0x00040fad) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x000428b0) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x000428b0) popup_call2_audio_out_window_g

0xdc92,	// (0x00040fe8) popup_call2_audio_out_window_t1_ParamLimits

0xdc92,	// (0x00040fe8) popup_call2_audio_out_window_t1

0xdcfa,	// (0x00041050) popup_call2_audio_out_window_t2_ParamLimits

0xdcfa,	// (0x00041050) popup_call2_audio_out_window_t2

0xdd4e,	// (0x000410a4) popup_call2_audio_out_window_t3_ParamLimits

0xdd4e,	// (0x000410a4) popup_call2_audio_out_window_t3

0xdd64,	// (0x000410ba) popup_call2_audio_out_window_t4_ParamLimits

0xdd64,	// (0x000410ba) popup_call2_audio_out_window_t4

0xdd7a,	// (0x000410d0) popup_call2_audio_out_window_t5_ParamLimits

0xdd7a,	// (0x000410d0) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x000428b9) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x000428b9) popup_call2_audio_out_window_t

0xddde,	// (0x00041134) bg_popup_call2_in_pane_ParamLimits

0xddde,	// (0x00041134) bg_popup_call2_in_pane

0xde3a,	// (0x00041190) popup_call2_audio_in_window_g1_ParamLimits

0xde3a,	// (0x00041190) popup_call2_audio_in_window_g1

0xde72,	// (0x000411c8) popup_call2_audio_in_window_g2_ParamLimits

0xde72,	// (0x000411c8) popup_call2_audio_in_window_g2

0xdeaa,	// (0x00041200) popup_call2_audio_in_window_g3_ParamLimits

0xdeaa,	// (0x00041200) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x000428c6) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x000428c6) popup_call2_audio_in_window_g

0xdf02,	// (0x00041258) popup_call2_audio_in_window_t1_ParamLimits

0xdf02,	// (0x00041258) popup_call2_audio_in_window_t1

0xdf82,	// (0x000412d8) popup_call2_audio_in_window_t2_ParamLimits

0xdf82,	// (0x000412d8) popup_call2_audio_in_window_t2

0xe002,	// (0x00041358) popup_call2_audio_in_window_t3_ParamLimits

0xe002,	// (0x00041358) popup_call2_audio_in_window_t3

0xe01c,	// (0x00041372) popup_call2_audio_in_window_t4_ParamLimits

0xe01c,	// (0x00041372) popup_call2_audio_in_window_t4

0xe02e,	// (0x00041384) popup_call2_audio_in_window_t5_ParamLimits

0xe02e,	// (0x00041384) popup_call2_audio_in_window_t5

0xe043,	// (0x00041399) popup_call2_audio_in_window_t6_ParamLimits

0xe043,	// (0x00041399) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x000428cf) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x000428cf) popup_call2_audio_in_window_t

0xc27a,	// (0x0003f5d0) bg_popup_call2_in_pane_g1

0xe162,	// (0x000414b8) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x00042937) popup_cale_lunar_info_window_t

0xc282,	// (0x0003f5d8) bg_popup_call2_rect_pane_ParamLimits

0xc282,	// (0x0003f5d8) bg_popup_call2_rect_pane

0xc027,	// (0x0003f37d) call2_cli_visual_graphic_pane

0xc027,	// (0x0003f37d) call2_cli_visual_text_pane

0x74f0,	// (0x0003a846) smil_status_volume_pane_g3

0x0002,

0xc3ee,	// (0x0003f744) call2_cli_visual_graphic_pane_g1

0xc3ee,	// (0x0003f744) call2_cli_visual_graphic_pane_g2

0xc3ee,	// (0x0003f744) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x000428dc) call2_cli_visual_graphic_pane_g

0xe058,	// (0x000413ae) bg_popup_call2_rect_pane_g1

0xc48c,	// (0x0003f7e2) bg_popup_call2_rect_pane_g2

0xe060,	// (0x000413b6) bg_popup_call2_rect_pane_g3

0xe068,	// (0x000413be) bg_popup_call2_rect_pane_g4

0xe070,	// (0x000413c6) bg_popup_call2_rect_pane_g5

0xe078,	// (0x000413ce) bg_popup_call2_rect_pane_g6

0xe080,	// (0x000413d6) bg_popup_call2_rect_pane_g7

0xe088,	// (0x000413de) bg_popup_call2_rect_pane_g8

0xe090,	// (0x000413e6) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x000428e3) bg_popup_call2_rect_pane_g

0xe098,	// (0x000413ee) bg_popup_call2_bubble_pane_g1

0xe0a0,	// (0x000413f6) bg_popup_call2_bubble_pane_g2

0xe0a8,	// (0x000413fe) bg_popup_call2_bubble_pane_g3

0xe0b0,	// (0x00041406) bg_popup_call2_bubble_pane_g4

0xe0b8,	// (0x0004140e) bg_popup_call2_bubble_pane_g5

0xe0c0,	// (0x00041416) bg_popup_call2_bubble_pane_g6

0xe0c8,	// (0x0004141e) bg_popup_call2_bubble_pane_g7

0xe0d0,	// (0x00041426) bg_popup_call2_bubble_pane_g8

0xe0d8,	// (0x0004142e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x000428f6) bg_popup_call2_bubble_pane_g

0x4ad7,	// (0x00037e2d) aid_cale_week_size_cell_pane

0x4fcb,	// (0x00038321) aid_cams_cif_uncrop_pane_ParamLimits

0x4fcb,	// (0x00038321) aid_cams_cif_uncrop_pane

0x512e,	// (0x00038484) aid_cams_size_cell_ParamLimits

0x512e,	// (0x00038484) aid_cams_size_cell

0x513a,	// (0x00038490) grid_cams_pane_ParamLimits

0x5148,	// (0x0003849e) linegrid_cams_pane_ParamLimits

0x521f,	// (0x00038575) call_video_pane_t1

0x5240,	// (0x00038596) call_video_pane_t2

0x0001,

0xf28d,	// (0x000425e3) call_video_pane_t

0x57c0,	// (0x00038b16) aid_cale_month_size_cell_pane_ParamLimits

0x57c0,	// (0x00038b16) aid_cale_month_size_cell_pane

0xf62a,	// (0x00042980) smil_status_volume_pane_g

0x74fd,	// (0x0003a853) volume_smil_pane_ParamLimits

0x423c,	// (0x00037592) aid_popup2_width_pane

0x49a8,	// (0x00037cfe) cell_qdial_pane_g4_ParamLimits

0x49a8,	// (0x00037cfe) cell_qdial_pane_g4

0x64b4,	// (0x0003980a) aid_blid_cardinal_pane_ParamLimits

0x64c4,	// (0x0003981a) aid_blid_destination_pane_ParamLimits

0x64c4,	// (0x0003981a) aid_blid_destination_pane

0xc282,	// (0x0003f5d8) bg_popup_call_poc_act_pane_ParamLimits

0xc282,	// (0x0003f5d8) bg_popup_call_poc_act_pane

0xc282,	// (0x0003f5d8) bg_popup_call_poc_inact_pane_ParamLimits

0xc282,	// (0x0003f5d8) bg_popup_call_poc_inact_pane

0xe0e8,	// (0x0004143e) bg_popup_call_poc_act_pane_g1

0xe0f0,	// (0x00041446) bg_popup_call_poc_act_pane_g2

0xe0f8,	// (0x0004144e) bg_popup_call_poc_act_pane_g3

0xe0b0,	// (0x00041406) bg_popup_call_poc_act_pane_g4

0xe0b8,	// (0x0004140e) bg_popup_call_poc_act_pane_g5

0xe100,	// (0x00041456) bg_popup_call_poc_act_pane_g6

0xe0c8,	// (0x0004141e) bg_popup_call_poc_act_pane_g7

0xe108,	// (0x0004145e) bg_popup_call_poc_act_pane_g8

0xc027,	// (0x0003f37d) main_usb_pane

0xe261,	// (0x000415b7) popup_cale_lunar_info_window

0x555f,	// (0x000388b5) im_reading_pane_t1_ParamLimits

0xc653,	// (0x0003f9a9) list_im_pane_ParamLimits

0xc664,	// (0x0003f9ba) scroll_pane_cp07_ParamLimits

0xc027,	// (0x0003f37d) grid_highlight_pane_cp012

0xc282,	// (0x0003f5d8) mup_scale_pane_ParamLimits

0xcb2f,	// (0x0003fe85) main_usb_pane_g1_ParamLimits

0xcb2f,	// (0x0003fe85) main_usb_pane_g1

0x7091,	// (0x0003a3e7) main_usb_pane_g2_ParamLimits

0x7091,	// (0x0003a3e7) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x00042920) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x00042920) main_usb_pane_g

0x709d,	// (0x0003a3f3) main_usb_pane_t1_ParamLimits

0x709d,	// (0x0003a3f3) main_usb_pane_t1

0x70af,	// (0x0003a405) main_usb_pane_t2_ParamLimits

0x70af,	// (0x0003a405) main_usb_pane_t2

0x70c1,	// (0x0003a417) main_usb_pane_t3_ParamLimits

0x70c1,	// (0x0003a417) main_usb_pane_t3

0x70d3,	// (0x0003a429) main_usb_pane_t4_ParamLimits

0x70d3,	// (0x0003a429) main_usb_pane_t4

0x70e5,	// (0x0003a43b) main_usb_pane_t5_ParamLimits

0x70e5,	// (0x0003a43b) main_usb_pane_t5

0x70f7,	// (0x0003a44d) main_usb_pane_t6_ParamLimits

0x70f7,	// (0x0003a44d) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x00042925) main_usb_pane_t_ParamLimits

0x645a,	// (0x000397b0) aid_text_placing

0x6466,	// (0x000397bc) main_location2_pane_t1_ParamLimits

0x647a,	// (0x000397d0) main_location2_pane_t2_ParamLimits

0x648e,	// (0x000397e4) main_location2_pane_t3_ParamLimits

0x64a2,	// (0x000397f8) main_location2_pane_t4_ParamLimits

0x64a2,	// (0x000397f8) main_location2_pane_t4

0xf3ee,	// (0x00042744) main_location2_pane_t_ParamLimits

0xc2c6,	// (0x0003f61c) find_pinb_pane_g2_ParamLimits

0xc2c6,	// (0x0003f61c) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x00042492) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x00042492) find_pinb_pane_g

0xc2d2,	// (0x0003f628) find_pinb_pane_t1_ParamLimits

0xc2e4,	// (0x0003f63a) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x00042497) find_pinb_pane_t_ParamLimits

0xc027,	// (0x0003f37d) main_call3_pane

0x5bd8,	// (0x00038f2e) cale_month_day_heading_pane_t1_ParamLimits

0x5c36,	// (0x00038f8c) cale_month_day_heading_pane_t2_ParamLimits

0x5c9b,	// (0x00038ff1) cale_month_day_heading_pane_t3_ParamLimits

0x5d00,	// (0x00039056) cale_month_day_heading_pane_t4_ParamLimits

0x5d65,	// (0x000390bb) cale_month_day_heading_pane_t5_ParamLimits

0x5dca,	// (0x00039120) cale_month_day_heading_pane_t6_ParamLimits

0x5e37,	// (0x0003918d) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x0004261b) cale_month_day_heading_pane_t_ParamLimits

0xc8a4,	// (0x0003fbfa) smil_status_volume_pane

0x6c45,	// (0x00039f9b) postcard_address_pane_ParamLimits

0x6c45,	// (0x00039f9b) postcard_address_pane

0x6c51,	// (0x00039fa7) postcard_message_pane_ParamLimits

0x6c51,	// (0x00039fa7) postcard_message_pane

0x7059,	// (0x0003a3af) call2_cli_visual_pane_t1_ParamLimits

0x7059,	// (0x0003a3af) call2_cli_visual_pane_t1

0x7650,	// (0x0003a9a6) postcard_message_pane_t1_ParamLimits

0x7650,	// (0x0003a9a6) postcard_message_pane_t1

0x7639,	// (0x0003a98f) postcard_address_pane_t1_ParamLimits

0x7639,	// (0x0003a98f) postcard_address_pane_t1

0x762a,	// (0x0003a980) popup_call3_audio_in_window_ParamLimits

0x762a,	// (0x0003a980) popup_call3_audio_in_window

0x7512,	// (0x0003a868) bg_popup_call3_in_pane_ParamLimits

0x7512,	// (0x0003a868) bg_popup_call3_in_pane

0x7570,	// (0x0003a8c6) popup_call3_audio_in_window_g1_ParamLimits

0x7570,	// (0x0003a8c6) popup_call3_audio_in_window_g1

0x7588,	// (0x0003a8de) popup_call3_audio_in_window_g2_ParamLimits

0x7588,	// (0x0003a8de) popup_call3_audio_in_window_g2

0x75a0,	// (0x0003a8f6) popup_call3_audio_in_window_g3_ParamLimits

0x75a0,	// (0x0003a8f6) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x00042987) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x00042987) popup_call3_audio_in_window_g

0x75c8,	// (0x0003a91e) popup_call3_audio_in_window_t1_ParamLimits

0x75c8,	// (0x0003a91e) popup_call3_audio_in_window_t1

0x75f0,	// (0x0003a946) popup_call3_audio_in_window_t2_ParamLimits

0x75f0,	// (0x0003a946) popup_call3_audio_in_window_t2

0x7618,	// (0x0003a96e) popup_call3_audio_in_window_t3_ParamLimits

0x7618,	// (0x0003a96e) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x00042990) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x00042990) popup_call3_audio_in_window_t

0xce23,	// (0x00040179) bg_popup_call3_rect_pane

0xe058,	// (0x000413ae) bg_popup_call3_rect_pane_g1

0xc48c,	// (0x0003f7e2) bg_popup_call3_rect_pane_g2

0xe060,	// (0x000413b6) bg_popup_call3_rect_pane_g3

0xe068,	// (0x000413be) bg_popup_call3_rect_pane_g4

0xe070,	// (0x000413c6) bg_popup_call3_rect_pane_g5

0xe078,	// (0x000413ce) bg_popup_call3_rect_pane_g6

0xe080,	// (0x000413d6) bg_popup_call3_rect_pane_g7

0x68cc,	// (0x00039c22) mup_visualizer_osc_pane

0xcee2,	// (0x00040238) mup_visualizer_spec_pane

0x7532,	// (0x0003a888) call3_video_qcif_pane_ParamLimits

0x7532,	// (0x0003a888) call3_video_qcif_pane

0x7542,	// (0x0003a898) call3_video_qcif_uncrop_pane_ParamLimits

0x7542,	// (0x0003a898) call3_video_qcif_uncrop_pane

0x754e,	// (0x0003a8a4) call3_video_subqcif_pane_ParamLimits

0x754e,	// (0x0003a8a4) call3_video_subqcif_pane

0x7560,	// (0x0003a8b6) call3_video_subqcif_uncrop_pane_ParamLimits

0x7560,	// (0x0003a8b6) call3_video_subqcif_uncrop_pane

0x75b8,	// (0x0003a90e) popup_call3_audio_in_window_g4_ParamLimits

0x75b8,	// (0x0003a90e) popup_call3_audio_in_window_g4

0x74dd,	// (0x0003a833) mup_spec_half_pane

0x74e6,	// (0x0003a83c) mup_spec_half_pane_cp

0xe2f8,	// (0x0004164e) mup_osc_middle_pane

0xe301,	// (0x00041657) mup_visualizer_osc_pane_g1

0x74be,	// (0x0003a814) mup_spec_bar_pane_ParamLimits

0x74be,	// (0x0003a814) mup_spec_bar_pane

0xe2e5,	// (0x0004163b) mup_spec_bar_pane_g1

0xe2ef,	// (0x00041645) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0004297b) mup_spec_bar_pane_g

0x4ad7,	// (0x00037e2d) aid_cale_week_size_cell_pane_ParamLimits

0x4aea,	// (0x00037e40) bg_cale_heading_pane_ParamLimits

0xc4c0,	// (0x0003f816) bg_cale_pane_cp01_ParamLimits

0x4b06,	// (0x00037e5c) cale_week_corner_pane_ParamLimits

0x4b17,	// (0x00037e6d) cale_week_day_heading_pane_ParamLimits

0x4b33,	// (0x00037e89) cale_week_scroll_pane_g1_ParamLimits

0x4b4c,	// (0x00037ea2) cale_week_scroll_pane_g2_ParamLimits

0x4b5d,	// (0x00037eb3) cale_week_scroll_pane_g3_ParamLimits

0x4b6e,	// (0x00037ec4) cale_week_scroll_pane_g4_ParamLimits

0x4b7f,	// (0x00037ed5) cale_week_scroll_pane_g5_ParamLimits

0x4b90,	// (0x00037ee6) cale_week_scroll_pane_g6_ParamLimits

0x4ba1,	// (0x00037ef7) cale_week_scroll_pane_g7_ParamLimits

0x4bb4,	// (0x00037f0a) cale_week_scroll_pane_g8_ParamLimits

0x4bc7,	// (0x00037f1d) cale_week_scroll_pane_g9_ParamLimits

0x4bd8,	// (0x00037f2e) cale_week_scroll_pane_g10_ParamLimits

0x4be9,	// (0x00037f3f) cale_week_scroll_pane_g11_ParamLimits

0x4bfa,	// (0x00037f50) cale_week_scroll_pane_g12_ParamLimits

0x4c13,	// (0x00037f69) cale_week_scroll_pane_g13_ParamLimits

0x4c2c,	// (0x00037f82) cale_week_scroll_pane_g14_ParamLimits

0x4c45,	// (0x00037f9b) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x00042523) cale_week_scroll_pane_g_ParamLimits

0x4c5e,	// (0x00037fb4) cale_week_time_pane_ParamLimits

0x4c71,	// (0x00037fc7) grid_cale_week_pane_ParamLimits

0xc4d9,	// (0x0003f82f) listscroll_cale_week_pane_t1

0x4c8e,	// (0x00037fe4) scroll_pane_cp08_ParamLimits

0x5811,	// (0x00038b67) cale_month_corner_pane_ParamLimits

0xc87a,	// (0x0003fbd0) cale_month_pane_t1

0x5b87,	// (0x00038edd) cale_month_week_pane_ParamLimits

0xcb2f,	// (0x0003fe85) popup_call_status_window_g1_ParamLimits

0x6296,	// (0x000395ec) popup_call_status_window_g2_ParamLimits

0x62a2,	// (0x000395f8) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x000426cb) popup_call_status_window_g_ParamLimits

0xcb96,	// (0x0003feec) aid_call2_pane

0x32ad,	// (0x00036603) msg_header_pane_g1

0x6c45,	// (0x00039f9b) postcard_address2_pane_ParamLimits

0x6c45,	// (0x00039f9b) postcard_address2_pane

0x6c51,	// (0x00039fa7) postcard_message2_pane_ParamLimits

0x6c51,	// (0x00039fa7) postcard_message2_pane

0x744c,	// (0x0003a7a2) message2_row_pane_ParamLimits

0x744c,	// (0x0003a7a2) message2_row_pane

0x7469,	// (0x0003a7bf) address2_row_pane_ParamLimits

0x7469,	// (0x0003a7bf) address2_row_pane

0xe2b3,	// (0x00041609) postcard_message2_row_pane_g1

0xe2bb,	// (0x00041611) postcard_message2_row_pane_t1

0xe2b3,	// (0x00041609) address2_row_pane_g1

0xe2bb,	// (0x00041611) address2_row_pane_t1

0x4eaa,	// (0x00038200) aid_size_cell_vorec

0xc027,	// (0x0003f37d) main_rss_pane

0x747c,	// (0x0003a7d2) rss_list_single_pane_ParamLimits

0x747c,	// (0x0003a7d2) rss_list_single_pane

0xe2c9,	// (0x0004161f) rss_list_single_pane_t1

0xe2d7,	// (0x0004162d) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x00042976) rss_list_single_pane_t

0xc027,	// (0x0003f37d) main_camera2_pane

0xc027,	// (0x0003f37d) main_video2_pane

0x76b4,	// (0x0003aa0a) cams_zoom_pane_cp2_ParamLimits

0x76b4,	// (0x0003aa0a) cams_zoom_pane_cp2

0x76c0,	// (0x0003aa16) image2_vga_pane_ParamLimits

0x76c0,	// (0x0003aa16) image2_vga_pane

0x76cf,	// (0x0003aa25) main_camera2_pane_g1_ParamLimits

0x76cf,	// (0x0003aa25) main_camera2_pane_g1

0x76db,	// (0x0003aa31) main_camera2_pane_g2_ParamLimits

0x76db,	// (0x0003aa31) main_camera2_pane_g2

0x76e7,	// (0x0003aa3d) main_camera2_pane_g3_ParamLimits

0x76e7,	// (0x0003aa3d) main_camera2_pane_g3

0x76f3,	// (0x0003aa49) main_camera2_pane_g4_ParamLimits

0x76f3,	// (0x0003aa49) main_camera2_pane_g4

0x76ff,	// (0x0003aa55) main_camera2_pane_g5_ParamLimits

0x76ff,	// (0x0003aa55) main_camera2_pane_g5

0x770b,	// (0x0003aa61) main_camera2_pane_g6_ParamLimits

0x770b,	// (0x0003aa61) main_camera2_pane_g6

0x7717,	// (0x0003aa6d) main_camera2_pane_g7_ParamLimits

0x7717,	// (0x0003aa6d) main_camera2_pane_g7

0x7723,	// (0x0003aa79) main_camera2_pane_g8_ParamLimits

0x7723,	// (0x0003aa79) main_camera2_pane_g8

0x0008,

0xf641,	// (0x00042997) main_camera2_pane_g_ParamLimits

0xf641,	// (0x00042997) main_camera2_pane_g

0x773b,	// (0x0003aa91) main_camera2_pane_t1_ParamLimits

0x773b,	// (0x0003aa91) main_camera2_pane_t1

0x774d,	// (0x0003aaa3) main_camera2_pane_t2_ParamLimits

0x774d,	// (0x0003aaa3) main_camera2_pane_t2

0x775f,	// (0x0003aab5) main_camera2_pane_t3_ParamLimits

0x775f,	// (0x0003aab5) main_camera2_pane_t3

0x7771,	// (0x0003aac7) main_camera2_pane_t4_ParamLimits

0x7771,	// (0x0003aac7) main_camera2_pane_t4

0x0006,

0xf654,	// (0x000429aa) main_camera2_pane_t_ParamLimits

0xf654,	// (0x000429aa) main_camera2_pane_t

0x77d3,	// (0x0003ab29) cams_zoom_pane_cp4_ParamLimits

0x77d3,	// (0x0003ab29) cams_zoom_pane_cp4

0x77e3,	// (0x0003ab39) image2_cif_pane_ParamLimits

0x77e3,	// (0x0003ab39) image2_cif_pane

0x77f8,	// (0x0003ab4e) image2_subqcif_pane_ParamLimits

0x77f8,	// (0x0003ab4e) image2_subqcif_pane

0x7807,	// (0x0003ab5d) main_video2_pane_g1_ParamLimits

0x7807,	// (0x0003ab5d) main_video2_pane_g1

0x7819,	// (0x0003ab6f) main_video2_pane_g2_ParamLimits

0x7819,	// (0x0003ab6f) main_video2_pane_g2

0x7829,	// (0x0003ab7f) main_video2_pane_g3_ParamLimits

0x7829,	// (0x0003ab7f) main_video2_pane_g3

0x7839,	// (0x0003ab8f) main_video2_pane_g4_ParamLimits

0x7839,	// (0x0003ab8f) main_video2_pane_g4

0x7849,	// (0x0003ab9f) main_video2_pane_g5_ParamLimits

0x7849,	// (0x0003ab9f) main_video2_pane_g5

0x7859,	// (0x0003abaf) main_video2_pane_g6_ParamLimits

0x7859,	// (0x0003abaf) main_video2_pane_g6

0x0005,

0xf663,	// (0x000429b9) main_video2_pane_g_ParamLimits

0xf663,	// (0x000429b9) main_video2_pane_g

0x786b,	// (0x0003abc1) main_video2_pane_t1_ParamLimits

0x786b,	// (0x0003abc1) main_video2_pane_t1

0x7885,	// (0x0003abdb) main_video2_pane_t2_ParamLimits

0x7885,	// (0x0003abdb) main_video2_pane_t2

0x78ab,	// (0x0003ac01) main_video2_pane_t3_ParamLimits

0x78ab,	// (0x0003ac01) main_video2_pane_t3

0x0002,

0xf670,	// (0x000429c6) main_video2_pane_t_ParamLimits

0xf670,	// (0x000429c6) main_video2_pane_t

0x71ae,	// (0x0003a504) call_muted_g2

0x0001,

0xf612,	// (0x00042968) call_muted_g

0xc027,	// (0x0003f37d) main_mup2_pane

0xe338,	// (0x0004168e) main_mup2_pane_g1_ParamLimits

0xe338,	// (0x0004168e) main_mup2_pane_g1

0x78d1,	// (0x0003ac27) main_mup2_pane_g2_ParamLimits

0x78d1,	// (0x0003ac27) main_mup2_pane_g2

0x7b53,	// (0x0003aea9) main_mup_pane_g13_cp1

0x7b5b,	// (0x0003aeb1) mup_volume_pane_cp1

0x78f1,	// (0x0003ac47) main_mup2_pane_g4_ParamLimits

0x78f1,	// (0x0003ac47) main_mup2_pane_g4

0x7906,	// (0x0003ac5c) main_mup2_pane_g5_ParamLimits

0x7906,	// (0x0003ac5c) main_mup2_pane_g5

0x791b,	// (0x0003ac71) main_mup2_pane_g6_ParamLimits

0x791b,	// (0x0003ac71) main_mup2_pane_g6

0x7930,	// (0x0003ac86) main_mup2_pane_g7_ParamLimits

0x7930,	// (0x0003ac86) main_mup2_pane_g7

0x0006,

0xf677,	// (0x000429cd) main_mup2_pane_g_ParamLimits

0xf677,	// (0x000429cd) main_mup2_pane_g

0x794c,	// (0x0003aca2) main_mup2_pane_t1_ParamLimits

0x794c,	// (0x0003aca2) main_mup2_pane_t1

0x7963,	// (0x0003acb9) main_mup2_pane_t2_ParamLimits

0x7963,	// (0x0003acb9) main_mup2_pane_t2

0x797a,	// (0x0003acd0) main_mup2_pane_t3_ParamLimits

0x797a,	// (0x0003acd0) main_mup2_pane_t3

0x7991,	// (0x0003ace7) main_mup2_pane_t4_ParamLimits

0x7991,	// (0x0003ace7) main_mup2_pane_t4

0x79ab,	// (0x0003ad01) main_mup2_pane_t5_ParamLimits

0x79ab,	// (0x0003ad01) main_mup2_pane_t5

0x79c5,	// (0x0003ad1b) main_mup2_pane_t6_ParamLimits

0x79c5,	// (0x0003ad1b) main_mup2_pane_t6

0x0005,

0xf686,	// (0x000429dc) main_mup2_pane_t_ParamLimits

0xf686,	// (0x000429dc) main_mup2_pane_t

0x79fd,	// (0x0003ad53) mup2_visualizer_pane_ParamLimits

0x79fd,	// (0x0003ad53) mup2_visualizer_pane

0x7a33,	// (0x0003ad89) mup_progress_pane_cp_ParamLimits

0x7a33,	// (0x0003ad89) mup_progress_pane_cp

0x7b3e,	// (0x0003ae94) mup_volume_pane_cp_ParamLimits

0x7b3e,	// (0x0003ae94) mup_volume_pane_cp

0x7a4a,	// (0x0003ada0) mup2_visualizer_pane_g1_ParamLimits

0x7a4a,	// (0x0003ada0) mup2_visualizer_pane_g1

0xe344,	// (0x0004169a) mup2_visualizer_pane_g2_ParamLimits

0xe344,	// (0x0004169a) mup2_visualizer_pane_g2

0x7a5f,	// (0x0003adb5) mup2_visualizer_pane_g3_ParamLimits

0x7a5f,	// (0x0003adb5) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x000429e9) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x000429e9) mup2_visualizer_pane_g

0xd109,	// (0x0004045f) aid_size_cell_fmradio

0x72c4,	// (0x0003a61a) aid_height_parent_landcape

0xc6e2,	// (0x0003fa38) wml_content_pane_cp

0xc6ea,	// (0x0003fa40) wml_tabs_pane

0xc6f3,	// (0x0003fa49) popup_wml_miniature_window

0xc6fb,	// (0x0003fa51) scroll_pane_cp021

0xc70f,	// (0x0003fa65) wml_content_pane_comp8

0xc027,	// (0x0003f37d) bg_popup_sub_pane_cp05

0xe362,	// (0x000416b8) popup_wml_miniature_window_g1

0xe36a,	// (0x000416c0) wml_miniature_view_pane

0x7a6d,	// (0x0003adc3) aid_size_wml_view

0x7a75,	// (0x0003adcb) wml_miniature_view_pane_g1

0x7a7e,	// (0x0003add4) wml_miniature_view_pane_g2

0x7a87,	// (0x0003addd) wml_miniature_view_pane_g3

0x7a8f,	// (0x0003ade5) wml_miniature_view_pane_g4

0x7a97,	// (0x0003aded) wml_miniature_view_pane_g5

0x7a9f,	// (0x0003adf5) wml_miniature_view_pane_g6

0x7aa7,	// (0x0003adfd) wml_miniature_view_pane_g7

0x7aaf,	// (0x0003ae05) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x000429f0) wml_miniature_view_pane_g

0xe338,	// (0x0004168e) background_graphic_ParamLimits

0xe338,	// (0x0004168e) background_graphic

0xe372,	// (0x000416c8) wml_tabs_2_pane

0xe37b,	// (0x000416d1) wml_tabs_3_pane_ParamLimits

0xe37b,	// (0x000416d1) wml_tabs_3_pane

0xe38d,	// (0x000416e3) wml_tabs_4_pane_ParamLimits

0xe38d,	// (0x000416e3) wml_tabs_4_pane

0xe3a3,	// (0x000416f9) wml_tabs_5_pane_ParamLimits

0xe3a3,	// (0x000416f9) wml_tabs_5_pane

0xe3bd,	// (0x00041713) wml_tabs_pane_g2_ParamLimits

0xe3bd,	// (0x00041713) wml_tabs_pane_g2

0xe3d1,	// (0x00041727) wml_tabs_pane_g3_ParamLimits

0xe3d1,	// (0x00041727) wml_tabs_pane_g3

0x7ab7,	// (0x0003ae0d) wml_tabs_2_active_pane_ParamLimits

0x7ab7,	// (0x0003ae0d) wml_tabs_2_active_pane

0x7ac7,	// (0x0003ae1d) wml_tabs_2_passive_pane_ParamLimits

0x7ac7,	// (0x0003ae1d) wml_tabs_2_passive_pane

0x7ad7,	// (0x0003ae2d) wml_tabs_3_active_pane_cp_ParamLimits

0x7ad7,	// (0x0003ae2d) wml_tabs_3_active_pane_cp

0x7ae8,	// (0x0003ae3e) wml_tabs_3_passive_pane_ParamLimits

0x7ae8,	// (0x0003ae3e) wml_tabs_3_passive_pane

0x7af9,	// (0x0003ae4f) wml_tabs_3_passive_pane_cp_ParamLimits

0x7af9,	// (0x0003ae4f) wml_tabs_3_passive_pane_cp

0x7b0a,	// (0x0003ae60) tabs_4_active_pane

0x7b12,	// (0x0003ae68) tabs_4_passive_pane

0x7b1a,	// (0x0003ae70) tabs_4_passive_pane_cp

0x7b22,	// (0x0003ae78) tabs_4_passive_pane_cp2

0xe0e0,	// (0x00041436) aid_height_text

0x6895,	// (0x00039beb) mup_volume_cont_pane_ParamLimits

0x6895,	// (0x00039beb) mup_volume_cont_pane

0x4613,	// (0x00037969) aid_size_cell_pinb

0xc2b2,	// (0x0003f608) aid_size_list_pinb

0x7a1c,	// (0x0003ad72) mup2_volume_cont_pane_ParamLimits

0x7a1c,	// (0x0003ad72) mup2_volume_cont_pane

0x7b2a,	// (0x0003ae80) mup2_volume_cont_pane_g1_ParamLimits

0x7b2a,	// (0x0003ae80) mup2_volume_cont_pane_g1

0x4248,	// (0x0003759e) aid_size_cell_touch_ParamLimits

0x4248,	// (0x0003759e) aid_size_cell_touch

0x44f3,	// (0x00037849) touch_pane_ParamLimits

0x44f3,	// (0x00037849) touch_pane

0x422a,	// (0x00037580) main_rss2_pane

0xe3ee,	// (0x00041744) listscroll_rss2_pane

0xe3f7,	// (0x0004174d) rss2_navigation_pane

0xe3ff,	// (0x00041755) list_rss2_pane

0xccd6,	// (0x0004002c) scroll_pane_cp22

0xe407,	// (0x0004175d) rss2_navigation_pane_g1

0xe410,	// (0x00041766) rss2_navigation_pane_g2

0xe418,	// (0x0004176e) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x00042a01) rss2_navigation_pane_g

0xe420,	// (0x00041776) rss2_navigation_pane_t1

0x7b63,	// (0x0003aeb9) rss2_list_single_pane_ParamLimits

0x7b63,	// (0x0003aeb9) rss2_list_single_pane

0xe42e,	// (0x00041784) rss2_list_single_pane_t2

0xe43c,	// (0x00041792) rss2_list_single_pane_t3_ParamLimits

0xe43c,	// (0x00041792) rss2_list_single_pane_t3

0xe459,	// (0x000417af) rss2_list_single_pane_t4

0x6047,	// (0x0003939d) smil_status_pane_g1

0x72db,	// (0x0003a631) main_image2_pane_ParamLimits

0x72db,	// (0x0003a631) main_image2_pane

0x772f,	// (0x0003aa85) main_camera2_pane_g9_ParamLimits

0x772f,	// (0x0003aa85) main_camera2_pane_g9

0x7783,	// (0x0003aad9) main_camera2_pane_t5_ParamLimits

0x7783,	// (0x0003aad9) main_camera2_pane_t5

0x7795,	// (0x0003aaeb) main_camera2_pane_t6_ParamLimits

0x7795,	// (0x0003aaeb) main_camera2_pane_t6

0x7b9f,	// (0x0003aef5) main_image2_pane_g1_ParamLimits

0x7b9f,	// (0x0003aef5) main_image2_pane_g1

0x6e26,	// (0x0003a17c) smil2_video_pane_ParamLimits

0x6e26,	// (0x0003a17c) smil2_video_pane

0x3039,	// (0x0003638f) aid_zoom_text_primary_cp

0x4498,	// (0x000377ee) popup_preview_fixed_window

0xc64b,	// (0x0003f9a1) im_reading_pane_g1

0x7679,	// (0x0003a9cf) cams2_bc_adjust_pane_cp_ParamLimits

0x7679,	// (0x0003a9cf) cams2_bc_adjust_pane_cp

0x77c5,	// (0x0003ab1b) cams2_bc_adjust_pane_ParamLimits

0x77c5,	// (0x0003ab1b) cams2_bc_adjust_pane

0x7bab,	// (0x0003af01) cams2_bc_adjust_pane_g1

0x7bb3,	// (0x0003af09) cams2_slider_pane

0x7bbc,	// (0x0003af12) cams2_slider_pane_g1

0x7bc5,	// (0x0003af1b) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x00042a08) cams2_slider_pane_g

0x46f2,	// (0x00037a48) calc_display_pane_ParamLimits

0x4710,	// (0x00037a66) calc_paper_pane_ParamLimits

0x472c,	// (0x00037a82) grid_calc_pane_ParamLimits

0x6300,	// (0x00039656) popup_clock_digital_window_t1_ParamLimits

0xd0a6,	// (0x000403fc) main_image_pane_t1

0x46d8,	// (0x00037a2e) aid_size_cell_calc_ParamLimits

0x46d8,	// (0x00037a2e) aid_size_cell_calc

0x7304,	// (0x0003a65a) popup_blid_sat_info2_window_ParamLimits

0x7304,	// (0x0003a65a) popup_blid_sat_info2_window

0xe477,	// (0x000417cd) aid_size_cell_blid

0xe47f,	// (0x000417d5) bg_popup_window_pane_cp07

0xe4a2,	// (0x000417f8) grid_popup_blid_pane

0xe4ac,	// (0x00041802) heading_pane_cp05_ParamLimits

0xe4ac,	// (0x00041802) heading_pane_cp05

0xe576,	// (0x000418cc) cell_popup_blid_pane_ParamLimits

0xe576,	// (0x000418cc) cell_popup_blid_pane

0xe59c,	// (0x000418f2) cell_popup_blid_pane_g1

0xe5a4,	// (0x000418fa) cell_popup_blid_pane_t1

0x79e2,	// (0x0003ad38) mup2_indicator_pane_ParamLimits

0x79e2,	// (0x0003ad38) mup2_indicator_pane

0xce23,	// (0x00040179) mup2_visualizer_osc_pane

0xe350,	// (0x000416a6) mup2_visualizer_spec_pane_ParamLimits

0xe350,	// (0x000416a6) mup2_visualizer_spec_pane

0x7bdf,	// (0x0003af35) mup2_spec_half_pane

0x7be8,	// (0x0003af3e) mup2_spec_half_pane_cp

0x7bf2,	// (0x0003af48) mup2_spec_bar_pane_ParamLimits

0x7bf2,	// (0x0003af48) mup2_spec_bar_pane

0xe2e5,	// (0x0004163b) mup2_spec_bar_pane_g1

0xe2ef,	// (0x00041645) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0004297b) mup2_spec_bar_pane_g

0x7c11,	// (0x0003af67) mup2_osc_middle_pane

0xe301,	// (0x00041657) mup2_visualizer_osc_pane_g1

0xbc36,	// (0x0003ef8c) popup_number_entry_window_t1_ParamLimits

0xbc49,	// (0x0003ef9f) popup_number_entry_window_t2_ParamLimits

0xbc5b,	// (0x0003efb1) popup_number_entry_window_t3_ParamLimits

0x454a,	// (0x000378a0) popup_number_entry_window_t5_ParamLimits

0x454a,	// (0x000378a0) popup_number_entry_window_t5

0xf0e7,	// (0x0004243d) popup_number_entry_window_t_ParamLimits

0xbc6d,	// (0x0003efc3) text_title_cp2_ParamLimits

0x6b0d,	// (0x00039e63) aid_hotspot_pointer_text2_pane

0x6ba7,	// (0x00039efd) main_viewer_pane_g9_ParamLimits

0x6ba7,	// (0x00039efd) main_viewer_pane_g9

0xc87a,	// (0x0003fbd0) cale_month_pane_t1_ParamLimits

0xc8b7,	// (0x0003fc0d) bg_cale_pane_ParamLimits

0xc8cf,	// (0x0003fc25) list_cale_pane_ParamLimits

0xc4d9,	// (0x0003f82f) listscroll_cale_day_pane_t1

0xc8e0,	// (0x0003fc36) scroll_pane_cp09_ParamLimits

0x68d4,	// (0x00039c2a) main_mup_eq_pane_t1_ParamLimits

0x68d4,	// (0x00039c2a) main_mup_eq_pane_t1

0x68ee,	// (0x00039c44) main_mup_eq_pane_t2_ParamLimits

0x68ee,	// (0x00039c44) main_mup_eq_pane_t2

0x6906,	// (0x00039c5c) main_mup_eq_pane_t3_ParamLimits

0x6906,	// (0x00039c5c) main_mup_eq_pane_t3

0x691e,	// (0x00039c74) main_mup_eq_pane_t4_ParamLimits

0x691e,	// (0x00039c74) main_mup_eq_pane_t4

0x6936,	// (0x00039c8c) main_mup_eq_pane_t5_ParamLimits

0x6936,	// (0x00039c8c) main_mup_eq_pane_t5

0x694e,	// (0x00039ca4) main_mup_eq_pane_t6_ParamLimits

0x694e,	// (0x00039ca4) main_mup_eq_pane_t6

0x6962,	// (0x00039cb8) main_mup_eq_pane_t7_ParamLimits

0x6962,	// (0x00039cb8) main_mup_eq_pane_t7

0x6976,	// (0x00039ccc) main_mup_eq_pane_t8_ParamLimits

0x6976,	// (0x00039ccc) main_mup_eq_pane_t8

0x698c,	// (0x00039ce2) main_mup_eq_pane_t9_ParamLimits

0x698c,	// (0x00039ce2) main_mup_eq_pane_t9

0x69a4,	// (0x00039cfa) main_mup_eq_pane_t10_ParamLimits

0x69a4,	// (0x00039cfa) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x000427ca) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x000427ca) main_mup_eq_pane_t

0x6a61,	// (0x00039db7) mup_equalizer_pane_cp5_ParamLimits

0x6a77,	// (0x00039dcd) mup_equalizer_pane_cp6_ParamLimits

0x6a8f,	// (0x00039de5) mup_equalizer_pane_cp7_ParamLimits

0x422a,	// (0x00037580) main_gallery_pane

0xe30a,	// (0x00041660) smil2_volume_pane

0xe312,	// (0x00041668) smil_status_volume_pane_g1_ParamLimits

0xe325,	// (0x0004167b) smil_status_volume_pane_g2_ParamLimits

0x74f0,	// (0x0003a846) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x00042980) smil_status_volume_pane_g_ParamLimits

0xe47f,	// (0x000417d5) bg_popup_window_pane_cp07_ParamLimits

0xe48d,	// (0x000417e3) blid_firmament_pane

0x7c1a,	// (0x0003af70) aid_size_cell_gallery_ParamLimits

0x7c1a,	// (0x0003af70) aid_size_cell_gallery

0x7c28,	// (0x0003af7e) grid_gallery_pane_ParamLimits

0x7c28,	// (0x0003af7e) grid_gallery_pane

0x7c38,	// (0x0003af8e) cell_gallery_pane_ParamLimits

0x7c38,	// (0x0003af8e) cell_gallery_pane

0xe5b2,	// (0x00041908) bg_cell_gallery_focus_pane_ParamLimits

0xe5b2,	// (0x00041908) bg_cell_gallery_focus_pane

0xe5c4,	// (0x0004191a) cell_gallery_pane_g1_ParamLimits

0xe5c4,	// (0x0004191a) cell_gallery_pane_g1

0x7c86,	// (0x0003afdc) cell_gallery_pane_g2_ParamLimits

0x7c86,	// (0x0003afdc) cell_gallery_pane_g2

0x7c93,	// (0x0003afe9) cell_gallery_pane_g3_ParamLimits

0x7c93,	// (0x0003afe9) cell_gallery_pane_g3

0xe5d0,	// (0x00041926) cell_gallery_pane_g4_ParamLimits

0xe5d0,	// (0x00041926) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x00042a2e) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x00042a2e) cell_gallery_pane_g

0xe5dc,	// (0x00041932) bg_cell_gallery_focus_pane_g1

0xe5e4,	// (0x0004193a) bg_cell_gallery_focus_pane_g2

0xe5ec,	// (0x00041942) bg_cell_gallery_focus_pane_g3

0xe5f4,	// (0x0004194a) bg_cell_gallery_focus_pane_g4

0xe5fc,	// (0x00041952) bg_cell_gallery_focus_pane_g5

0xe604,	// (0x0004195a) bg_cell_gallery_focus_pane_g6

0xe60c,	// (0x00041962) bg_cell_gallery_focus_pane_g7

0xe614,	// (0x0004196a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x00042a37) bg_cell_gallery_focus_pane_g

0xe61c,	// (0x00041972) aid_firma_cardinal

0xe630,	// (0x00041986) blid_firmament_pane_t1

0xe647,	// (0x0004199d) blid_firmament_pane_t2

0xe65e,	// (0x000419b4) blid_firmament_pane_t3

0xe675,	// (0x000419cb) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x00042a48) blid_firmament_pane_t

0xe68c,	// (0x000419e2) blid_sat_info_pane

0xe69c,	// (0x000419f2) blid_sat_info_pane_g1

0xe69c,	// (0x000419f2) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x00042a51) blid_sat_info_pane_g

0xe6a6,	// (0x000419fc) blid_sat_info_pane_t1

0xe6b4,	// (0x00041a0a) smil2_volume_content_pane

0xe6bd,	// (0x00041a13) smil2_volume_pane_g1

0xe6c5,	// (0x00041a1b) smil2_volume_content_pane_g1

0xe6ce,	// (0x00041a24) smil2_volume_content_pane_g2

0xe6d7,	// (0x00041a2d) smil2_volume_content_pane_g3

0xe6e0,	// (0x00041a36) smil2_volume_content_pane_g4

0xe6e9,	// (0x00041a3f) smil2_volume_content_pane_g5

0xe6f2,	// (0x00041a48) smil2_volume_content_pane_g6

0xe6fb,	// (0x00041a51) smil2_volume_content_pane_g7

0xe704,	// (0x00041a5a) smil2_volume_content_pane_g8

0xe70d,	// (0x00041a63) smil2_volume_content_pane_g9

0xe716,	// (0x00041a6c) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x00042a56) smil2_volume_content_pane_g

0x4cf8,	// (0x0003804e) cale_week_day_heading_pane_t1_ParamLimits

0x4d0c,	// (0x00038062) cale_week_day_heading_pane_t2_ParamLimits

0x4d20,	// (0x00038076) cale_week_day_heading_pane_t3_ParamLimits

0x4d34,	// (0x0003808a) cale_week_day_heading_pane_t4_ParamLimits

0x4d48,	// (0x0003809e) cale_week_day_heading_pane_t5_ParamLimits

0x4d5c,	// (0x000380b2) cale_week_day_heading_pane_t6_ParamLimits

0x4d70,	// (0x000380c6) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x00042542) cale_week_day_heading_pane_t_ParamLimits

0xc4eb,	// (0x0003f841) bg_cale_side_pane_ParamLimits

0x4d84,	// (0x000380da) cale_week_time_pane_t1_ParamLimits

0x4d9c,	// (0x000380f2) cale_week_time_pane_t2_ParamLimits

0x4db4,	// (0x0003810a) cale_week_time_pane_t3_ParamLimits

0x4dcc,	// (0x00038122) cale_week_time_pane_t4_ParamLimits

0x4de4,	// (0x0003813a) cale_week_time_pane_t5_ParamLimits

0x4dfc,	// (0x00038152) cale_week_time_pane_t6_ParamLimits

0x4e1c,	// (0x00038172) cale_week_time_pane_t7_ParamLimits

0x4e3c,	// (0x00038192) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x00042551) cale_week_time_pane_t_ParamLimits

0x4e5c,	// (0x000381b2) cell_cale_week_pane_g2_ParamLimits

0xc4eb,	// (0x0003f841) bg_cale_side_pane_cp01_ParamLimits

0x5eac,	// (0x00039202) cale_month_week_pane_t1_ParamLimits

0x5ec3,	// (0x00039219) cale_month_week_pane_t2_ParamLimits

0x5eda,	// (0x00039230) cale_month_week_pane_t3_ParamLimits

0x5ef1,	// (0x00039247) cale_month_week_pane_t4_ParamLimits

0x5f08,	// (0x0003925e) cale_month_week_pane_t5_ParamLimits

0x5f27,	// (0x0003927d) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x0004262a) cale_month_week_pane_t_ParamLimits

0x6014,	// (0x0003936a) cell_cale_month_pane_g1_ParamLimits

0x422a,	// (0x00037580) main_cale_event_viewer_pane

0x422a,	// (0x00037580) listscroll_cale_event_viewer_pane

0xe71f,	// (0x00041a75) list_cale_ev_pane

0xe727,	// (0x00041a7d) scroll_pane_cp023

0xe733,	// (0x00041a89) field_cale_ev_pane_ParamLimits

0xe733,	// (0x00041a89) field_cale_ev_pane

0xe74d,	// (0x00041aa3) field_cale_ev_content_pane_ParamLimits

0xe74d,	// (0x00041aa3) field_cale_ev_content_pane

0xe759,	// (0x00041aaf) field_cale_ev_pane_g1_ParamLimits

0xe759,	// (0x00041aaf) field_cale_ev_pane_g1

0xe765,	// (0x00041abb) field_cale_ev_pane_g2_ParamLimits

0xe765,	// (0x00041abb) field_cale_ev_pane_g2

0xe77d,	// (0x00041ad3) field_cale_ev_pane_g3_ParamLimits

0xe77d,	// (0x00041ad3) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x00042a6b) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x00042a6b) field_cale_ev_pane_g

0xe795,	// (0x00041aeb) field_cale_ev_pane_t1_ParamLimits

0xe795,	// (0x00041aeb) field_cale_ev_pane_t1

0xe7ac,	// (0x00041b02) field_cale_ev_content_pane_t1_ParamLimits

0xe7ac,	// (0x00041b02) field_cale_ev_content_pane_t1

0xcf8c,	// (0x000402e2) bg_button_pane_cp01

0xc399,	// (0x0003f6ef) listscroll_cale_week_pane_ParamLimits

0x4acd,	// (0x00037e23) popup_toolbar_window_cp01

0xc4d9,	// (0x0003f82f) listscroll_cale_week_pane_t1_ParamLimits

0xc399,	// (0x0003f6ef) listscroll_cale_day_pane_ParamLimits

0x4acd,	// (0x00037e23) popup_toolbar_window_cp02

0xc4d9,	// (0x0003f82f) listscroll_cale_day_pane_t1_ParamLimits

0xc399,	// (0x0003f6ef) main_cale_month_pane_ParamLimits

0x73c8,	// (0x0003a71e) popup_toolbar_window_cp03_ParamLimits

0x73c8,	// (0x0003a71e) popup_toolbar_window_cp03

0x6d38,	// (0x0003a08e) main_image_pane_g2_ParamLimits

0x6d38,	// (0x0003a08e) main_image_pane_g2

0x6d44,	// (0x0003a09a) main_image_pane_g3_ParamLimits

0x6d44,	// (0x0003a09a) main_image_pane_g3

0x0002,

0xf506,	// (0x0004285c) main_image_pane_g_ParamLimits

0xf506,	// (0x0004285c) main_image_pane_g

0xd0a6,	// (0x000403fc) main_image_pane_t1_ParamLimits

0x6d50,	// (0x0003a0a6) main_image_pane_t2_ParamLimits

0x6d50,	// (0x0003a0a6) main_image_pane_t2

0x6d62,	// (0x0003a0b8) main_image_pane_t3_ParamLimits

0x6d62,	// (0x0003a0b8) main_image_pane_t3

0x6d74,	// (0x0003a0ca) main_image_pane_t4_ParamLimits

0x6d74,	// (0x0003a0ca) main_image_pane_t4

0x0003,

0xf50d,	// (0x00042863) main_image_pane_t_ParamLimits

0xf50d,	// (0x00042863) main_image_pane_t

0x6d86,	// (0x0003a0dc) popup_image_details_window_cp01

0x6d90,	// (0x0003a0e6) popup_toobar_trans_pane_cp01_ParamLimits

0x6d90,	// (0x0003a0e6) popup_toobar_trans_pane_cp01

0x734d,	// (0x0003a6a3) popup_image_details_window_ParamLimits

0x734d,	// (0x0003a6a3) popup_image_details_window

0xe26b,	// (0x000415c1) popup_image_focus_window

0x766b,	// (0x0003a9c1) camera2_autofocus_pane_ParamLimits

0x766b,	// (0x0003a9c1) camera2_autofocus_pane

0x422a,	// (0x00037580) bg_popup_sub_pane_cp06

0xe7c9,	// (0x00041b1f) popup_image_focus_window_g1

0xe7d1,	// (0x00041b27) popup_image_focus_window_g2

0xe7d9,	// (0x00041b2f) popup_image_focus_window_g3

0xe7e1,	// (0x00041b37) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x00042a72) popup_image_focus_window_g

0xe7e9,	// (0x00041b3f) popup_image_focus_window_t1

0xe7f7,	// (0x00041b4d) popup_image_focus_window_t2

0xe807,	// (0x00041b5d) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x00042a7b) popup_image_focus_window_t

0xe815,	// (0x00041b6b) camera2_autofocus_pane_g1

0x72db,	// (0x0003a631) bg_tb_trans_pane_cp01

0xe823,	// (0x00041b79) popup_image_details_window_g1

0xe836,	// (0x00041b8c) popup_image_details_window_g2

0x0002,

0xf737,	// (0x00042a8d) popup_image_details_window_g

0xe85f,	// (0x00041bb5) popup_image_details_window_t1

0xe871,	// (0x00041bc7) popup_image_details_window_t2

0xe88a,	// (0x00041be0) popup_image_details_window_t3

0xe89e,	// (0x00041bf4) popup_image_details_window_t4

0xe8b9,	// (0x00041c0f) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x00042a94) popup_image_details_window_t

0xc385,	// (0x0003f6db) bg_calc_paper_pane_ParamLimits

0x422a,	// (0x00037580) grid_highlight_pane_cp013

0x4829,	// (0x00037b7f) list_calc_pane_ParamLimits

0x483b,	// (0x00037b91) scroll_pane_cp024

0xc399,	// (0x0003f6ef) bg_calc_display_pane_ParamLimits

0x4843,	// (0x00037b99) calc_display_pane_t1_ParamLimits

0x4858,	// (0x00037bae) calc_display_pane_t2_ParamLimits

0x486d,	// (0x00037bc3) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x000424c4) calc_display_pane_t_ParamLimits

0x4954,	// (0x00037caa) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x000424e1) cell_calc_pane_g

0x495d,	// (0x00037cb3) cell_calc_pane_t1

0xc3f8,	// (0x0003f74e) grid_highlight_pane_cp02_ParamLimits

0xc40e,	// (0x0003f764) toolbar_button_pane_cp01_ParamLimits

0xc40e,	// (0x0003f764) toolbar_button_pane_cp01

0xd0eb,	// (0x00040441) temp_image_control_pane_ParamLimits

0xd0eb,	// (0x00040441) temp_image_control_pane

0x72db,	// (0x0003a631) main_mp3_pane

0xe8d3,	// (0x00041c29) temp_image_control_pane_g1_ParamLimits

0xe8d3,	// (0x00041c29) temp_image_control_pane_g1

0xe8e1,	// (0x00041c37) temp_image_control_pane_g2_ParamLimits

0xe8e1,	// (0x00041c37) temp_image_control_pane_g2

0xe8f3,	// (0x00041c49) temp_image_control_pane_g3_ParamLimits

0xe8f3,	// (0x00041c49) temp_image_control_pane_g3

0x7cd0,	// (0x0003b026) temp_image_control_pane_g4_ParamLimits

0x7cd0,	// (0x0003b026) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x00042a9f) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x00042a9f) temp_image_control_pane_g

0xe8d3,	// (0x00041c29) main_mp3_pane_g1

0x7ce1,	// (0x0003b037) main_mp3_pane_g2

0x0007,

0xf752,	// (0x00042aa8) main_mp3_pane_g

0xe936,	// (0x00041c8c) main_mp3_pane_t1

0xc55a,	// (0x0003f8b0) main_camera_pane_g8_ParamLimits

0xc55a,	// (0x0003f8b0) main_camera_pane_g8

0x50e4,	// (0x0003843a) main_video_pane_g7_ParamLimits

0x50e4,	// (0x0003843a) main_video_pane_g7

0x77b3,	// (0x0003ab09) main_camera2_pane_t7_ParamLimits

0x77b3,	// (0x0003ab09) main_camera2_pane_t7

0xc6a2,	// (0x0003f9f8) scroll_pane_cp025_ParamLimits

0xc6a2,	// (0x0003f9f8) scroll_pane_cp025

0xc6b6,	// (0x0003fa0c) scroll_pane_cp026_ParamLimits

0xc6b6,	// (0x0003fa0c) scroll_pane_cp026

0xc6c5,	// (0x0003fa1b) wml_content_pane_ParamLimits

0x422a,	// (0x00037580) main_touch_calib_pane

0x7d85,	// (0x0003b0db) main_touch_calib_pane_g1

0x7d91,	// (0x0003b0e7) main_touch_calib_pane_g2

0x7d9d,	// (0x0003b0f3) main_touch_calib_pane_g3

0x7da9,	// (0x0003b0ff) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x00042ac6) main_touch_calib_pane_g

0x7db5,	// (0x0003b10b) main_touch_calib_pane_t1

0x7dcc,	// (0x0003b122) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x00042acf) main_touch_calib_pane_t

0xcd64,	// (0x000400ba) mup_progress_pane_cp02

0xcd83,	// (0x000400d9) navi_pane_g1

0xcde5,	// (0x0004013b) navi_pane_mp_t3

0x72db,	// (0x0003a631) main_mp3_pane_ParamLimits

0x7406,	// (0x0003a75c) navi_pane_ParamLimits

0xe8d3,	// (0x00041c29) main_mp3_pane_g1_ParamLimits

0x7ce1,	// (0x0003b037) main_mp3_pane_g2_ParamLimits

0x7ced,	// (0x0003b043) main_mp3_pane_g3_ParamLimits

0x7ced,	// (0x0003b043) main_mp3_pane_g3

0x7cf9,	// (0x0003b04f) main_mp3_pane_g4_ParamLimits

0x7cf9,	// (0x0003b04f) main_mp3_pane_g4

0xe903,	// (0x00041c59) main_mp3_pane_g5_ParamLimits

0xe903,	// (0x00041c59) main_mp3_pane_g5

0xe911,	// (0x00041c67) main_mp3_pane_g6_ParamLimits

0xe911,	// (0x00041c67) main_mp3_pane_g6

0xe91e,	// (0x00041c74) main_mp3_pane_g7_ParamLimits

0xe91e,	// (0x00041c74) main_mp3_pane_g7

0xe92a,	// (0x00041c80) main_mp3_pane_g8_ParamLimits

0xe92a,	// (0x00041c80) main_mp3_pane_g8

0xf752,	// (0x00042aa8) main_mp3_pane_g_ParamLimits

0x7d05,	// (0x0003b05b) main_mp3_pane_t2

0x7d15,	// (0x0003b06b) main_mp3_pane_t3

0xe944,	// (0x00041c9a) main_mp3_pane_t4

0xe952,	// (0x00041ca8) main_mp3_pane_t5

0x0005,

0xf763,	// (0x00042ab9) main_mp3_pane_t

0xe960,	// (0x00041cb6) mup_progress_pane_cp01

0x3039,	// (0x0003638f) aid_zoom_text_secondary2

0xe71f,	// (0x00041a75) list_cale_ev2_pane

0xe727,	// (0x00041a7d) scroll_pane_cp023_ParamLimits

0x7e1f,	// (0x0003b175) field_cale_ev2_pane_ParamLimits

0x7e1f,	// (0x0003b175) field_cale_ev2_pane

0x3336,	// (0x0003668c) field_cale_ev2_pane_g1_ParamLimits

0x3336,	// (0x0003668c) field_cale_ev2_pane_g1

0x3342,	// (0x00036698) field_cale_ev2_pane_g2_ParamLimits

0x3342,	// (0x00036698) field_cale_ev2_pane_g2

0x335a,	// (0x000366b0) field_cale_ev2_pane_g3_ParamLimits

0x335a,	// (0x000366b0) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x00042ada) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x00042ada) field_cale_ev2_pane_g

0x337e,	// (0x000366d4) field_cale_ev2_pane_t1_ParamLimits

0x337e,	// (0x000366d4) field_cale_ev2_pane_t1

0x3395,	// (0x000366eb) field_cale_ev2_pane_t2_ParamLimits

0x3395,	// (0x000366eb) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x00042ae3) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x00042ae3) field_cale_ev2_pane_t

0x6c0f,	// (0x00039f65) main_postcard_pane_g5_ParamLimits

0x6c0f,	// (0x00039f65) main_postcard_pane_g5

0x6c1d,	// (0x00039f73) main_postcard_pane_g6_ParamLimits

0x6c1d,	// (0x00039f73) main_postcard_pane_g6

0x4f24,	// (0x0003827a) camera2_autofocus_pane_cp_ParamLimits

0x4f24,	// (0x0003827a) camera2_autofocus_pane_cp

0x72db,	// (0x0003a631) main_mup3_pane

0x7e73,	// (0x0003b1c9) main_mup3_pane_g1_ParamLimits

0x7e73,	// (0x0003b1c9) main_mup3_pane_g1

0x7e94,	// (0x0003b1ea) main_mup3_pane_g2_ParamLimits

0x7e94,	// (0x0003b1ea) main_mup3_pane_g2

0x7f13,	// (0x0003b269) main_mup3_pane_g3_ParamLimits

0x7f13,	// (0x0003b269) main_mup3_pane_g3

0x7f56,	// (0x0003b2ac) main_mup3_pane_g4_ParamLimits

0x7f56,	// (0x0003b2ac) main_mup3_pane_g4

0x7f99,	// (0x0003b2ef) main_mup3_pane_g5_ParamLimits

0x7f99,	// (0x0003b2ef) main_mup3_pane_g5

0x7fde,	// (0x0003b334) main_mup3_pane_g6_ParamLimits

0x7fde,	// (0x0003b334) main_mup3_pane_g6

0xe968,	// (0x00041cbe) main_mup3_pane_g7_ParamLimits

0xe968,	// (0x00041cbe) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x00042af3) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x00042af3) main_mup3_pane_g

0x8054,	// (0x0003b3aa) main_mup3_pane_t1_ParamLimits

0x8054,	// (0x0003b3aa) main_mup3_pane_t1

0x80c3,	// (0x0003b419) main_mup3_pane_t2_ParamLimits

0x80c3,	// (0x0003b419) main_mup3_pane_t2

0x818c,	// (0x0003b4e2) main_mup3_pane_t4_ParamLimits

0x818c,	// (0x0003b4e2) main_mup3_pane_t4

0x81e0,	// (0x0003b536) main_mup3_pane_t5_ParamLimits

0x81e0,	// (0x0003b536) main_mup3_pane_t5

0x8290,	// (0x0003b5e6) main_mup3_pane_t6_ParamLimits

0x8290,	// (0x0003b5e6) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x00042b04) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x00042b04) main_mup3_pane_t

0x833c,	// (0x0003b692) mup3_progress_pane_ParamLimits

0x833c,	// (0x0003b692) mup3_progress_pane

0x83b0,	// (0x0003b706) popup_mup3_control_window_ParamLimits

0x83b0,	// (0x0003b706) popup_mup3_control_window

0xe976,	// (0x00041ccc) popup_mup3_text_window

0x83c9,	// (0x0003b71f) mup3_progress_pane_t1

0x83e8,	// (0x0003b73e) mup3_progress_pane_t2

0xe97e,	// (0x00041cd4) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x00042b11) mup3_progress_pane_t

0xe99b,	// (0x00041cf1) mup_progress_pane_cp03

0x422a,	// (0x00037580) bg_tb_trans_pane_cp04

0x8407,	// (0x0003b75d) mup3_volume_pane

0x840f,	// (0x0003b765) popup_mup3_control_window_g1

0x8418,	// (0x0003b76e) mup3_volume_pane_g1

0x8421,	// (0x0003b777) mup3_volume_pane_g2

0x842a,	// (0x0003b780) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x00042b18) mup3_volume_pane_g

0x422a,	// (0x00037580) bg_tb_trans_pane_cp03

0xe9ab,	// (0x00041d01) popup_mup3_text_window_g1

0xe9b3,	// (0x00041d09) popup_mup3_text_window_t1

0xc3e1,	// (0x0003f737) list_calc_item_pane_g1_ParamLimits

0xe3e5,	// (0x0004173b) mup_volume_pane_cp_g1

0x7de3,	// (0x0003b139) main_touch_calib_pane_t3

0x7df7,	// (0x0003b14d) main_touch_calib_pane_t4

0x7e0b,	// (0x0003b161) main_touch_calib_pane_t5

0x4234,	// (0x0003758a) aid_cell_size_toolbar2

0x423c,	// (0x00037592) aid_popup3_width_pane

0x3031,	// (0x00036387) aid_zoom_text_msg_primary

0x4f0e,	// (0x00038264) vorec_t7

0xc3a5,	// (0x0003f6fb) bg_calc_paper_pane_g1_ParamLimits

0xc3b1,	// (0x0003f707) bg_calc_paper_pane_g2_ParamLimits

0xc3bd,	// (0x0003f713) bg_calc_paper_pane_g3_ParamLimits

0xc3c9,	// (0x0003f71f) bg_calc_paper_pane_g4_ParamLimits

0xc3d5,	// (0x0003f72b) bg_calc_paper_pane_g5_ParamLimits

0x48ac,	// (0x00037c02) bg_calc_paper_pane_g6_ParamLimits

0x48bd,	// (0x00037c13) bg_calc_paper_pane_g7_ParamLimits

0x48ce,	// (0x00037c24) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x000424cb) bg_calc_paper_pane_g_ParamLimits

0x48df,	// (0x00037c35) calc_bg_paper_pane_g9_ParamLimits

0x500d,	// (0x00038363) image_qvga_pane_ParamLimits

0x500d,	// (0x00038363) image_qvga_pane

0xc282,	// (0x0003f5d8) bg_popup_sub_pane_cp04_ParamLimits

0xd022,	// (0x00040378) popup_mup_playback_window_g1_ParamLimits

0xd02e,	// (0x00040384) popup_mup_playback_window_t1_ParamLimits

0xd043,	// (0x00040399) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x00042857) popup_mup_playback_window_t_ParamLimits

0x78e2,	// (0x0003ac38) main_mup2_pane_g3_ParamLimits

0x78e2,	// (0x0003ac38) main_mup2_pane_g3

0x52cd,	// (0x00038623) popup_toolbar_window_cp04

0xd438,	// (0x0004078e) popup_call2_audio_second_window_g3_ParamLimits

0xd438,	// (0x0004078e) popup_call2_audio_second_window_g3

0xd842,	// (0x00040b98) popup_call2_audio_first_window_g4_ParamLimits

0xd842,	// (0x00040b98) popup_call2_audio_first_window_g4

0xdee2,	// (0x00041238) popup_call2_audio_in_window_g4_ParamLimits

0xdee2,	// (0x00041238) popup_call2_audio_in_window_g4

0x6d2b,	// (0x0003a081) aid_area_sk_bg_cut_ParamLimits

0x6d2b,	// (0x0003a081) aid_area_sk_bg_cut

0xd058,	// (0x000403ae) aid_area_sk_bg_cut_2_ParamLimits

0xd058,	// (0x000403ae) aid_area_sk_bg_cut_2

0x7c76,	// (0x0003afcc) aid_placing_details_win

0x7c7e,	// (0x0003afd4) aid_placing_details_win_2

0xe815,	// (0x00041b6b) camera2_autofocus_pane_g1_ParamLimits

0x4489,	// (0x000377df) popup_fixed_preview_cale_window_ParamLimits

0x4489,	// (0x000377df) popup_fixed_preview_cale_window

0xce34,	// (0x0004018a) navi_slider_pane_g3

0xce3d,	// (0x00040193) navi_slider_pane_g4

0xce46,	// (0x0004019c) navi_slider_pane_g5

0xce34,	// (0x0004018a) navi_slider_pane_g6

0x6668,	// (0x000399be) navi_slider_pane_g7

0xcf59,	// (0x000402af) mup_scale_pane_g3

0xcf62,	// (0x000402b8) mup_scale_pane_g4

0xcf6b,	// (0x000402c1) mup_scale_pane_g5

0x6aa7,	// (0x00039dfd) mup_scale_pane_g6

0x6ab0,	// (0x00039e06) mup_scale_pane_g7

0xce34,	// (0x0004018a) cams2_slider_pane_g3

0xe467,	// (0x000417bd) cams2_slider_pane_g4

0x7bce,	// (0x0003af24) cams2_slider_pane_g5

0xce34,	// (0x0004018a) cams2_slider_pane_g6

0x7bd6,	// (0x0003af2c) cams2_slider_pane_g7

0xe69c,	// (0x000419f2) camera2_autofocus_pane_cp_g1

0xe9c1,	// (0x00041d17) bg_popup_preview_window_pane_cp02_ParamLimits

0xe9c1,	// (0x00041d17) bg_popup_preview_window_pane_cp02

0xe9cd,	// (0x00041d23) list_fp_cale_pane_ParamLimits

0xe9cd,	// (0x00041d23) list_fp_cale_pane

0xe9d9,	// (0x00041d2f) popup_fixed_preview_cale_window_t1_ParamLimits

0xe9d9,	// (0x00041d2f) popup_fixed_preview_cale_window_t1

0x8433,	// (0x0003b789) popup_fixed_preview_cale_window_t2_ParamLimits

0x8433,	// (0x0003b789) popup_fixed_preview_cale_window_t2

0x8448,	// (0x0003b79e) popup_fixed_preview_cale_window_t3_ParamLimits

0x8448,	// (0x0003b79e) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x00042b1f) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x00042b1f) popup_fixed_preview_cale_window_t

0x845d,	// (0x0003b7b3) list_single_fp_cale_pane_ParamLimits

0x845d,	// (0x0003b7b3) list_single_fp_cale_pane

0xe9f7,	// (0x00041d4d) list_single_fp_cale_pane_g1_ParamLimits

0xe9f7,	// (0x00041d4d) list_single_fp_cale_pane_g1

0xea03,	// (0x00041d59) list_single_fp_cale_pane_g2_ParamLimits

0xea03,	// (0x00041d59) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x00042b26) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x00042b26) list_single_fp_cale_pane_g

0xea1c,	// (0x00041d72) list_single_fp_cale_pane_t1_ParamLimits

0xea1c,	// (0x00041d72) list_single_fp_cale_pane_t1

0xea2e,	// (0x00041d84) list_single_fp_cale_pane_t2_ParamLimits

0xea2e,	// (0x00041d84) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x00042b2d) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x00042b2d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x422a,	// (0x00037580) main_dialer_pane

0x8472,	// (0x0003b7c8) aid_cell_size_keypad

0x847c,	// (0x0003b7d2) dialer_ne_pane

0x8486,	// (0x0003b7dc) grid_dialer_command_1_pane

0x848e,	// (0x0003b7e4) grid_dialer_command_2_pane

0x8496,	// (0x0003b7ec) grid_dialer_keypad_pane

0x84aa,	// (0x0003b800) bg_popup_call_pane_cp06_ParamLimits

0x84aa,	// (0x0003b800) bg_popup_call_pane_cp06

0x84b6,	// (0x0003b80c) dialer_ne_clear_pane_ParamLimits

0x84b6,	// (0x0003b80c) dialer_ne_clear_pane

0xea61,	// (0x00041db7) dialer_ne_pane_g1

0xea69,	// (0x00041dbf) dialer_ne_pane_t1_ParamLimits

0xea69,	// (0x00041dbf) dialer_ne_pane_t1

0x84c2,	// (0x0003b818) dialer_ne_pane_t2_ParamLimits

0x84c2,	// (0x0003b818) dialer_ne_pane_t2

0x84df,	// (0x0003b835) dialer_ne_pane_t3_ParamLimits

0x84df,	// (0x0003b835) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x00042b32) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x00042b32) dialer_ne_pane_t

0x8503,	// (0x0003b859) dialer_ne_pane_t3_copy1_ParamLimits

0x8503,	// (0x0003b859) dialer_ne_pane_t3_copy1

0x8527,	// (0x0003b87d) cell_dialer_keypad_pane_ParamLimits

0x8527,	// (0x0003b87d) cell_dialer_keypad_pane

0x853e,	// (0x0003b894) cell_dialer_command_1_pane_ParamLimits

0x853e,	// (0x0003b894) cell_dialer_command_1_pane

0x8554,	// (0x0003b8aa) cell_dialer_command_2_pane_ParamLimits

0x8554,	// (0x0003b8aa) cell_dialer_command_2_pane

0xea7b,	// (0x00041dd1) bg_button_pane_cp02_ParamLimits

0xea7b,	// (0x00041dd1) bg_button_pane_cp02

0x8563,	// (0x0003b8b9) cell_dialer_keypad_pane_g1_ParamLimits

0x8563,	// (0x0003b8b9) cell_dialer_keypad_pane_g1

0xea7b,	// (0x00041dd1) bg_button_pane_cp03_ParamLimits

0xea7b,	// (0x00041dd1) bg_button_pane_cp03

0x8578,	// (0x0003b8ce) cell_dialer_command_1_pane_g1_ParamLimits

0x8578,	// (0x0003b8ce) cell_dialer_command_1_pane_g1

0xea87,	// (0x00041ddd) bg_button_pane_cp04

0x858c,	// (0x0003b8e2) cell_dialer_command_2_pane_g1

0xce23,	// (0x00040179) bg_button_pane_cp06

0xea8f,	// (0x00041de5) dialer_ne_clear_pane_g1

0x65ab,	// (0x00039901) navi_pane_g2

0x65d9,	// (0x0003992f) navi_pane_g3

0x0002,

0xf404,	// (0x0004275a) navi_pane_g

0x6604,	// (0x0003995a) navi_pane_mv_g2

0x662b,	// (0x00039981) navi_pane_mv_g5

0x6633,	// (0x00039989) navi_pane_mv_t1

0xc399,	// (0x0003f6ef) main_clock2_pane

0x85bf,	// (0x0003b915) main_clock2_list_pane_ParamLimits

0x85bf,	// (0x0003b915) main_clock2_list_pane

0x85e9,	// (0x0003b93f) main_clock2_pane_t1_ParamLimits

0x85e9,	// (0x0003b93f) main_clock2_pane_t1

0x860d,	// (0x0003b963) main_clock2_pane_t2_ParamLimits

0x860d,	// (0x0003b963) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x00042b39) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x00042b39) main_clock2_pane_t

0x8668,	// (0x0003b9be) popup_clock_analogue_window_cp03_ParamLimits

0x8668,	// (0x0003b9be) popup_clock_analogue_window_cp03

0x8688,	// (0x0003b9de) popup_clock_digital_window_cp02_ParamLimits

0x8688,	// (0x0003b9de) popup_clock_digital_window_cp02

0x86fd,	// (0x0003ba53) main_clock2_list_single_pane_ParamLimits

0x86fd,	// (0x0003ba53) main_clock2_list_single_pane

0xce23,	// (0x00040179) list_highlight_pane_cp05

0xea97,	// (0x00041ded) main_clock2_list_single_pane_t1

0x52cd,	// (0x00038623) popup_toolbar_window_cp04_ParamLimits

0x7ca0,	// (0x0003aff6) camera2_autofocus_pane_g2_ParamLimits

0x7ca0,	// (0x0003aff6) camera2_autofocus_pane_g2

0x7cac,	// (0x0003b002) camera2_autofocus_pane_g3_ParamLimits

0x7cac,	// (0x0003b002) camera2_autofocus_pane_g3

0x7cb8,	// (0x0003b00e) camera2_autofocus_pane_g4_ParamLimits

0x7cb8,	// (0x0003b00e) camera2_autofocus_pane_g4

0x7cc4,	// (0x0003b01a) camera2_autofocus_pane_g5_ParamLimits

0x7cc4,	// (0x0003b01a) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x00042a82) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x00042a82) camera2_autofocus_pane_g

0x7e53,	// (0x0003b1a9) camera2_autofocus_pane_cp_g2

0x7e5b,	// (0x0003b1b1) camera2_autofocus_pane_cp_g3

0x7e63,	// (0x0003b1b9) camera2_autofocus_pane_cp_g4

0x7e6b,	// (0x0003b1c1) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x00042ae8) camera2_autofocus_pane_cp_g

0x84a2,	// (0x0003b7f8) popup_dialer_spcha_window

0x422a,	// (0x00037580) bg_popup_sub_pane_cp07

0xeaa5,	// (0x00041dfb) list_spcha_pane

0xeaad,	// (0x00041e03) list_single_spcha_pane_ParamLimits

0xeaad,	// (0x00041e03) list_single_spcha_pane

0x422a,	// (0x00037580) list_highlight_pane_cp06

0xeabe,	// (0x00041e14) list_single_spcha_pane_t1

0xdc83,	// (0x00040fd9) popup_call2_audio_out_window_g4_ParamLimits

0xdc83,	// (0x00040fd9) popup_call2_audio_out_window_g4

0x422a,	// (0x00037580) main_imed2_pane

0xe273,	// (0x000415c9) popup_imed_adjust2_window

0x735b,	// (0x0003a6b1) popup_imed_trans_window_ParamLimits

0x735b,	// (0x0003a6b1) popup_imed_trans_window

0xe4d8,	// (0x0004182e) popup_blid_sat_info2_window_t1

0xe4e6,	// (0x0004183c) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x00042a17) popup_blid_sat_info2_window_t

0x87a7,	// (0x0003bafd) aid_size_cell_colour_35

0x87c1,	// (0x0003bb17) aid_size_cell_colour_112

0x87d8,	// (0x0003bb2e) aid_size_cell_effect

0x72db,	// (0x0003a631) bg_tb_trans_pane_cp02

0xd8bc,	// (0x00040c12) heading_imed_pane

0x87f2,	// (0x0003bb48) listscroll_imed_pane

0xeacc,	// (0x00041e22) heading_imed_pane_g1

0xead4,	// (0x00041e2a) heading_imed_pane_t1

0xeae2,	// (0x00041e38) grid_imed_colour_35_pane_ParamLimits

0xeae2,	// (0x00041e38) grid_imed_colour_35_pane

0x87fe,	// (0x0003bb54) grid_imed_effect_pane

0xeafd,	// (0x00041e53) list_imed_aspect_pane

0x880e,	// (0x0003bb64) scroll_pane_cp027_ParamLimits

0x880e,	// (0x0003bb64) scroll_pane_cp027

0x881a,	// (0x0003bb70) cell_imed_effect_pane_ParamLimits

0x881a,	// (0x0003bb70) cell_imed_effect_pane

0xeb05,	// (0x00041e5b) cell_imed_colour_pane_ParamLimits

0xeb05,	// (0x00041e5b) cell_imed_colour_pane

0xeb47,	// (0x00041e9d) cell_imed_colour_pane_g1_ParamLimits

0xeb47,	// (0x00041e9d) cell_imed_colour_pane_g1

0xeb58,	// (0x00041eae) hgihlgiht_grid_pane_cp016_ParamLimits

0xeb58,	// (0x00041eae) hgihlgiht_grid_pane_cp016

0x8832,	// (0x0003bb88) cell_imed_effect_pane_g1

0x883a,	// (0x0003bb90) grid_highlight_pane_cp017

0xeb69,	// (0x00041ebf) list_imed_single_pane_ParamLimits

0xeb69,	// (0x00041ebf) list_imed_single_pane

0x422a,	// (0x00037580) list_highlight_pane_cp07

0xeb80,	// (0x00041ed6) list_imed_aspect_pane_comp1_t1

0xe24b,	// (0x000415a1) bg_tb_trans_pane_cp05

0xeba2,	// (0x00041ef8) popup_imed_adjust2_window_g1

0xebc9,	// (0x00041f1f) popup_imed_adjust2_window_t1

0xebe1,	// (0x00041f37) slider_imed_adjust_pane

0xebf5,	// (0x00041f4b) slider_imed_adjust_pane_g1

0xec05,	// (0x00041f5b) slider_imed_adjust_pane_g2

0xec15,	// (0x00041f6b) slider_imed_adjust_pane_g3

0xec26,	// (0x00041f7c) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x00042b56) slider_imed_adjust_pane_g

0x8843,	// (0x0003bb99) aid_size_cell_clipart2

0x884f,	// (0x0003bba5) grid_imed_clipart_pane

0xec37,	// (0x00041f8d) scroll_pane_cp031

0x8859,	// (0x0003bbaf) cell_imed_clipart_pane_ParamLimits

0x8859,	// (0x0003bbaf) cell_imed_clipart_pane

0x8880,	// (0x0003bbd6) cell_imed_clipart_pane_g1

0x422a,	// (0x00037580) grid_highlight_pane_cp014

0x85cb,	// (0x0003b921) main_clock2_pane_g1_ParamLimits

0x85cb,	// (0x0003b921) main_clock2_pane_g1

0x86a4,	// (0x0003b9fa) aid_call2_pane_cp10

0x86b6,	// (0x0003ba0c) aid_call_pane_cp10

0xcd58,	// (0x000400ae) popup_clock_analogue_window_cp10_g1

0xcd58,	// (0x000400ae) popup_clock_analogue_window_cp10_g2

0x86c8,	// (0x0003ba1e) popup_clock_analogue_window_cp10_g3

0x86c8,	// (0x0003ba1e) popup_clock_analogue_window_cp10_g4

0xcd58,	// (0x000400ae) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x00042b44) popup_clock_analogue_window_cp10_g

0x86de,	// (0x0003ba34) popup_clock_analogue_window_cp10_t1

0x870f,	// (0x0003ba65) clock_digital_number_pane_cp10_ParamLimits

0x870f,	// (0x0003ba65) clock_digital_number_pane_cp10

0x8727,	// (0x0003ba7d) clock_digital_number_pane_cp11_ParamLimits

0x8727,	// (0x0003ba7d) clock_digital_number_pane_cp11

0x873f,	// (0x0003ba95) clock_digital_number_pane_cp12_ParamLimits

0x873f,	// (0x0003ba95) clock_digital_number_pane_cp12

0x8757,	// (0x0003baad) clock_digital_number_pane_cp13_ParamLimits

0x8757,	// (0x0003baad) clock_digital_number_pane_cp13

0x876f,	// (0x0003bac5) clock_digital_separator_pane_cp10_ParamLimits

0x876f,	// (0x0003bac5) clock_digital_separator_pane_cp10

0x8787,	// (0x0003badd) popup_clock_digital_window_cp02_t1_ParamLimits

0x8787,	// (0x0003badd) popup_clock_digital_window_cp02_t1

0xc27a,	// (0x0003f5d0) clock_digital_number_pane_cp10_g1

0xc27a,	// (0x0003f5d0) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x00042b5f) clock_digital_number_pane_cp10_g

0xc27a,	// (0x0003f5d0) clock_digital_separator_pane_cp10_g1

0xc27a,	// (0x0003f5d0) clock_digital_separator_pane_g2_cp10

0xcdf3,	// (0x00040149) navi_pane_vded_g4

0xcdfc,	// (0x00040152) navi_pane_vded_g5

0xce05,	// (0x0004015b) navi_pane_vded_t1

0x422a,	// (0x00037580) main_vded_pane

0x8889,	// (0x0003bbdf) main_vded_pane_g1

0x8895,	// (0x0003bbeb) main_vded_pane_g2

0x889f,	// (0x0003bbf5) main_vded_pane_g3

0x0002,

0xf80e,	// (0x00042b64) main_vded_pane_g

0x88a9,	// (0x0003bbff) main_vded_pane_t1

0x88b7,	// (0x0003bc0d) main_vded_pane_t2

0x0001,

0xf815,	// (0x00042b6b) main_vded_pane_t

0x88c5,	// (0x0003bc1b) vded_slider_pane

0x88cf,	// (0x0003bc25) vded_video_pane

0xec3f,	// (0x00041f95) vded_video_pane_g1

0x88d9,	// (0x0003bc2f) vded_video_pane_g2

0xe69c,	// (0x000419f2) vded_video_pane_g3

0x0002,

0xf81a,	// (0x00042b70) vded_video_pane_g

0xec49,	// (0x00041f9f) vded_slider_pane_g1

0xe3e5,	// (0x0004173b) vded_slider_pane_g2

0xec52,	// (0x00041fa8) vded_slider_pane_g3

0xec5b,	// (0x00041fb1) vded_slider_pane_g4

0xec64,	// (0x00041fba) vded_slider_pane_g5

0x0004,

0xf821,	// (0x00042b77) vded_slider_pane_g

0x83a2,	// (0x0003b6f8) mup3_rocker_pane_ParamLimits

0x83a2,	// (0x0003b6f8) mup3_rocker_pane

0x88e2,	// (0x0003bc38) mup3_control_keys_pane_g1

0x88ea,	// (0x0003bc40) mup3_control_keys_pane_g2

0x88f2,	// (0x0003bc48) mup3_control_keys_pane_g3

0x88fa,	// (0x0003bc50) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x00042b82) mup3_control_keys_pane_g

0x44b1,	// (0x00037807) popup_toolbar2_fixed_window_cp01_ParamLimits

0x44b1,	// (0x00037807) popup_toolbar2_fixed_window_cp01

0x83bc,	// (0x0003b712) popup_toolbar2_fixed_window_cp02_ParamLimits

0x83bc,	// (0x0003b712) popup_toolbar2_fixed_window_cp02

0xd5aa,	// (0x00040900) popup_call2_audio_second_window_t4_ParamLimits

0xd5aa,	// (0x00040900) popup_call2_audio_second_window_t4

0xdaf0,	// (0x00040e46) popup_call2_audio_first_window_t6_ParamLimits

0xdaf0,	// (0x00040e46) popup_call2_audio_first_window_t6

0xdd8f,	// (0x000410e5) popup_call2_audio_out_window_t6_ParamLimits

0xdd8f,	// (0x000410e5) popup_call2_audio_out_window_t6

0x422a,	// (0x00037580) main_vitu_pane

0x890a,	// (0x0003bc60) aid_size_cell_itu_ParamLimits

0x890a,	// (0x0003bc60) aid_size_cell_itu

0x44d9,	// (0x0003782f) bg_popup_window_pane_cp08_ParamLimits

0x44d9,	// (0x0003782f) bg_popup_window_pane_cp08

0x8918,	// (0x0003bc6e) field_vitu_entry_pane_ParamLimits

0x8918,	// (0x0003bc6e) field_vitu_entry_pane

0x8927,	// (0x0003bc7d) grid_vitu_function_pane_ParamLimits

0x8927,	// (0x0003bc7d) grid_vitu_function_pane

0x8937,	// (0x0003bc8d) grid_vitu_itu_pane_ParamLimits

0x8937,	// (0x0003bc8d) grid_vitu_itu_pane

0x8947,	// (0x0003bc9d) cell_vitu_itu_pane_ParamLimits

0x8947,	// (0x0003bc9d) cell_vitu_itu_pane

0x895c,	// (0x0003bcb2) cell_vitu_function_pane_ParamLimits

0x895c,	// (0x0003bcb2) cell_vitu_function_pane

0x72db,	// (0x0003a631) bg_popup_sub_pane_cp08_ParamLimits

0x72db,	// (0x0003a631) bg_popup_sub_pane_cp08

0x8970,	// (0x0003bcc6) field_vitu_entry_pane_t1_ParamLimits

0x8970,	// (0x0003bcc6) field_vitu_entry_pane_t1

0xec85,	// (0x00041fdb) field_vitu_entry_pane_t2_ParamLimits

0xec85,	// (0x00041fdb) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x00042b90) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x00042b90) field_vitu_entry_pane_t

0xeca2,	// (0x00041ff8) bg_button_pane_cp05_ParamLimits

0xeca2,	// (0x00041ff8) bg_button_pane_cp05

0x898e,	// (0x0003bce4) cell_vitu_itu_pane_g1

0x89a6,	// (0x0003bcfc) cell_vitu_itu_pane_t1_ParamLimits

0x89a6,	// (0x0003bcfc) cell_vitu_itu_pane_t1

0x89b8,	// (0x0003bd0e) cell_vitu_itu_pane_t2_ParamLimits

0x89b8,	// (0x0003bd0e) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x00042b95) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x00042b95) cell_vitu_itu_pane_t

0xecb0,	// (0x00042006) bg_button_pane_cp07

0x89ed,	// (0x0003bd43) cell_vitu_function_pane_g1

0x4750,	// (0x00037aa6) main_calc_pane_g1

0x4270,	// (0x000375c6) aid_visual_content_pane

0x422a,	// (0x00037580) main_vradio_pane

0x89f6,	// (0x0003bd4c) main_vradio_pane_g1_ParamLimits

0x89f6,	// (0x0003bd4c) main_vradio_pane_g1

0xecba,	// (0x00042010) main_vradio_pane_g2_ParamLimits

0xecba,	// (0x00042010) main_vradio_pane_g2

0x0001,

0xf846,	// (0x00042b9c) main_vradio_pane_g_ParamLimits

0xf846,	// (0x00042b9c) main_vradio_pane_g

0x8a06,	// (0x0003bd5c) main_vradio_pane_t1_ParamLimits

0x8a06,	// (0x0003bd5c) main_vradio_pane_t1

0x8a18,	// (0x0003bd6e) main_vradio_pane_t2_ParamLimits

0x8a18,	// (0x0003bd6e) main_vradio_pane_t2

0xecc7,	// (0x0004201d) main_vradio_pane_t3_ParamLimits

0xecc7,	// (0x0004201d) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x00042ba1) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x00042ba1) main_vradio_pane_t

0x8a2a,	// (0x0003bd80) vradio_rocker_control_pane_ParamLimits

0x8a2a,	// (0x0003bd80) vradio_rocker_control_pane

0x8a36,	// (0x0003bd8c) vradio_station_info_pane_ParamLimits

0x8a36,	// (0x0003bd8c) vradio_station_info_pane

0xecdb,	// (0x00042031) vradio_frequency_info_pane_ParamLimits

0xecdb,	// (0x00042031) vradio_frequency_info_pane

0xe69c,	// (0x000419f2) vradio_station_info_pane_g1

0xecea,	// (0x00042040) vradio_station_info_pane_t1_ParamLimits

0xecea,	// (0x00042040) vradio_station_info_pane_t1

0xed0c,	// (0x00042062) vradio_station_info_pane_t2_ParamLimits

0xed0c,	// (0x00042062) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x00042ba8) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x00042ba8) vradio_station_info_pane_t

0xed1e,	// (0x00042074) vradio_tuning_pane

0xed26,	// (0x0004207c) vradio_rocker_control_pane_g1

0xed2e,	// (0x00042084) vradio_rocker_control_pane_g2

0xed36,	// (0x0004208c) vradio_rocker_control_pane_g3

0xed3e,	// (0x00042094) vradio_rocker_control_pane_g4

0xed46,	// (0x0004209c) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x00042bad) vradio_rocker_control_pane_g

0x8a45,	// (0x0003bd9b) vradio_frequency_info_pane_g1

0xed4e,	// (0x000420a4) vradio_frequency_info_pane_t1_ParamLimits

0xed4e,	// (0x000420a4) vradio_frequency_info_pane_t1

0x8a4f,	// (0x0003bda5) vradio_tuning_pane_g1

0x8a58,	// (0x0003bdae) vradio_tuning_pane_t1

0x42b9,	// (0x0003760f) area_side_right_pane_ParamLimits

0x42b9,	// (0x0003760f) area_side_right_pane

0xe212,	// (0x00041568) status_small_pane_g1

0xe21a,	// (0x00041570) status_small_pane_g2

0xe223,	// (0x00041579) status_small_pane_g3

0xe22c,	// (0x00041582) status_small_pane_g4

0x0003,

0xf617,	// (0x0004296d) status_small_pane_g

0xe235,	// (0x0004158b) status_small_pane_t1

0x422a,	// (0x00037580) main_video3_pane

0xed62,	// (0x000420b8) cams_zoom_vslider_pane

0xed6a,	// (0x000420c0) image3_wide_pane_ParamLimits

0xed6a,	// (0x000420c0) image3_wide_pane

0xed84,	// (0x000420da) image3_wide_small_pane

0xed90,	// (0x000420e6) main_video3_pane_g1_ParamLimits

0xed90,	// (0x000420e6) main_video3_pane_g1

0xedac,	// (0x00042102) main_video3_pane_g2_ParamLimits

0xedac,	// (0x00042102) main_video3_pane_g2

0x0001,

0xf862,	// (0x00042bb8) main_video3_pane_g_ParamLimits

0xf862,	// (0x00042bb8) main_video3_pane_g

0xedc8,	// (0x0004211e) main_video3_pane_t1_ParamLimits

0xedc8,	// (0x0004211e) main_video3_pane_t1

0xedf3,	// (0x00042149) main_video3_pane_t2_ParamLimits

0xedf3,	// (0x00042149) main_video3_pane_t2

0xee1e,	// (0x00042174) main_video3_pane_t3_ParamLimits

0xee1e,	// (0x00042174) main_video3_pane_t3

0x0002,

0xf867,	// (0x00042bbd) main_video3_pane_t_ParamLimits

0xf867,	// (0x00042bbd) main_video3_pane_t

0xee4b,	// (0x000421a1) cams_zoom_vslider_pane_g1

0xee54,	// (0x000421aa) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x00042bc4) cams_zoom_vslider_pane_g

0xee5c,	// (0x000421b2) small_slider_vertical_pane

0xe69c,	// (0x000419f2) small_slider_vertical_pane_g1

0xe69c,	// (0x000419f2) small_slider_vertical_pane_g2

0xee64,	// (0x000421ba) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x00042bc9) small_slider_vertical_pane_g

0x422a,	// (0x00037580) main_hwr_training_pane

0xee6d,	// (0x000421c3) hwr_training_instruct_pane_ParamLimits

0xee6d,	// (0x000421c3) hwr_training_instruct_pane

0x8a67,	// (0x0003bdbd) hwr_training_navi_pane_ParamLimits

0x8a67,	// (0x0003bdbd) hwr_training_navi_pane

0x8a81,	// (0x0003bdd7) hwr_training_write_pane_ParamLimits

0x8a81,	// (0x0003bdd7) hwr_training_write_pane

0x422a,	// (0x00037580) bg_frame_shadow_pane

0xeea4,	// (0x000421fa) hwr_training_write_pane_g1

0xeeac,	// (0x00042202) hwr_training_write_pane_g2

0xeeb4,	// (0x0004220a) hwr_training_write_pane_g3

0xeebc,	// (0x00042212) hwr_training_write_pane_g4

0xeec4,	// (0x0004221a) hwr_training_write_pane_g5

0xeecc,	// (0x00042222) hwr_training_write_pane_g6

0xeed4,	// (0x0004222a) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x00042bd0) hwr_training_write_pane_g

0x8ab9,	// (0x0003be0f) hwr_training_navi_pane_g1_ParamLimits

0x8ab9,	// (0x0003be0f) hwr_training_navi_pane_g1

0x8acb,	// (0x0003be21) hwr_training_navi_pane_g2_ParamLimits

0x8acb,	// (0x0003be21) hwr_training_navi_pane_g2

0x8add,	// (0x0003be33) hwr_training_navi_pane_g3_ParamLimits

0x8add,	// (0x0003be33) hwr_training_navi_pane_g3

0x8aed,	// (0x0003be43) hwr_training_navi_pane_g4_ParamLimits

0x8aed,	// (0x0003be43) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x00042bdf) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x00042bdf) hwr_training_navi_pane_g

0x8b07,	// (0x0003be5d) hwr_training_navi_pane_t1

0x8b15,	// (0x0003be6b) list_single_hwr_training_instruct_pane_ParamLimits

0x8b15,	// (0x0003be6b) list_single_hwr_training_instruct_pane

0xeedc,	// (0x00042232) list_single_hwr_training_instruct_pane_t1

0xe5dc,	// (0x00041932) bg_frame_shadow_pane_g1

0xeeeb,	// (0x00042241) bg_frame_shadow_pane_g2

0xeef3,	// (0x00042249) bg_frame_shadow_pane_g3

0xeefb,	// (0x00042251) bg_frame_shadow_pane_g4

0xef03,	// (0x00042259) bg_frame_shadow_pane_g5

0xef0b,	// (0x00042261) bg_frame_shadow_pane_g6

0xef13,	// (0x00042269) bg_frame_shadow_pane_g7

0xc464,	// (0x0003f7ba) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x00042bea) bg_frame_shadow_pane_g

0x422a,	// (0x00037580) main_video_tele_dialer_pane

0x8b4b,	// (0x0003bea1) aid_size_cell_video_keypad_ParamLimits

0x8b4b,	// (0x0003bea1) aid_size_cell_video_keypad

0x8b5b,	// (0x0003beb1) grid_video_dialer_keypad_pane_ParamLimits

0x8b5b,	// (0x0003beb1) grid_video_dialer_keypad_pane

0x8b8d,	// (0x0003bee3) video_down_pane_cp_ParamLimits

0x8b8d,	// (0x0003bee3) video_down_pane_cp

0x8bb5,	// (0x0003bf0b) cell_video_dialer_keypad_pane_ParamLimits

0x8bb5,	// (0x0003bf0b) cell_video_dialer_keypad_pane

0xef1b,	// (0x00042271) bg_button_pane_cp08_ParamLimits

0xef1b,	// (0x00042271) bg_button_pane_cp08

0x8bca,	// (0x0003bf20) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8bca,	// (0x0003bf20) cell_video_dialer_keypad_pane_g1

0x8396,	// (0x0003b6ec) mup3_rocker2_pane_ParamLimits

0x8396,	// (0x0003b6ec) mup3_rocker2_pane

0xe69c,	// (0x000419f2) mup3_rocker2_pane_g1

0x72e9,	// (0x0003a63f) main_dialer2_pane

0x422a,	// (0x00037580) main_mp4_pane

0x8c09,	// (0x0003bf5f) main_mp4_pane_g1_ParamLimits

0x8c09,	// (0x0003bf5f) main_mp4_pane_g1

0x8c17,	// (0x0003bf6d) main_mp4_pane_g2_ParamLimits

0x8c17,	// (0x0003bf6d) main_mp4_pane_g2

0x8c25,	// (0x0003bf7b) main_mp4_pane_g3_ParamLimits

0x8c25,	// (0x0003bf7b) main_mp4_pane_g3

0x8c6a,	// (0x0003bfc0) main_mp4_pane_g4_ParamLimits

0x8c6a,	// (0x0003bfc0) main_mp4_pane_g4

0x8c92,	// (0x0003bfe8) main_mp4_pane_g5_ParamLimits

0x8c92,	// (0x0003bfe8) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x00042c0a) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x00042c0a) main_mp4_pane_g

0x8ce2,	// (0x0003c038) main_mp4_pane_t1_ParamLimits

0x8ce2,	// (0x0003c038) main_mp4_pane_t1

0x8d3e,	// (0x0003c094) main_mp4_pane_t2_ParamLimits

0x8d3e,	// (0x0003c094) main_mp4_pane_t2

0xef27,	// (0x0004227d) main_mp4_pane_t3_ParamLimits

0xef27,	// (0x0004227d) main_mp4_pane_t3

0x8d90,	// (0x0003c0e6) main_mp4_pane_t4_ParamLimits

0x8d90,	// (0x0003c0e6) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x00042c17) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x00042c17) main_mp4_pane_t

0x8dd4,	// (0x0003c12a) mp4_progress_pane_ParamLimits

0x8dd4,	// (0x0003c12a) mp4_progress_pane

0x8e1e,	// (0x0003c174) mp4_rocker_pane_ParamLimits

0x8e1e,	// (0x0003c174) mp4_rocker_pane

0xef4f,	// (0x000422a5) mp4_progress_pane_t1

0xef68,	// (0x000422be) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x00042c20) mp4_progress_pane_t

0xef81,	// (0x000422d7) mup_progress_pane_cp04

0xe69c,	// (0x000419f2) mp4_rocker_pane_g1

0x8e3e,	// (0x0003c194) aid_cell_size_keypad2_ParamLimits

0x8e3e,	// (0x0003c194) aid_cell_size_keypad2

0x8e4e,	// (0x0003c1a4) dialer2_ne_pane_ParamLimits

0x8e4e,	// (0x0003c1a4) dialer2_ne_pane

0x8e5c,	// (0x0003c1b2) grid_dialer2_keypad_pane_ParamLimits

0x8e5c,	// (0x0003c1b2) grid_dialer2_keypad_pane

0x08bd,	// (0x00033c13) bg_popup_call_pane_cp07_ParamLimits

0x08bd,	// (0x00033c13) bg_popup_call_pane_cp07

0x8e6c,	// (0x0003c1c2) dialer2_ne_pane_t1_ParamLimits

0x8e6c,	// (0x0003c1c2) dialer2_ne_pane_t1

0x8e91,	// (0x0003c1e7) cell_dialer2_keypad_pane_ParamLimits

0x8e91,	// (0x0003c1e7) cell_dialer2_keypad_pane

0xef9f,	// (0x000422f5) bg_button_pane_pane_cp04_ParamLimits

0xef9f,	// (0x000422f5) bg_button_pane_pane_cp04

0x8ea8,	// (0x0003c1fe) cell_dialer2_keypad_pane_g1_ParamLimits

0x8ea8,	// (0x0003c1fe) cell_dialer2_keypad_pane_g1

0x518f,	// (0x000384e5) aid_placing_vt_set_content_ParamLimits

0x518f,	// (0x000384e5) aid_placing_vt_set_content

0x51bb,	// (0x00038511) aid_placing_vt_set_title_ParamLimits

0x51bb,	// (0x00038511) aid_placing_vt_set_title

0x422a,	// (0x00037580) main_image3_pane

0x8f42,	// (0x0003c298) area_side_right_pane_cp01_ParamLimits

0x8f42,	// (0x0003c298) area_side_right_pane_cp01

0x0ea1,	// (0x000341f7) main_image3_pane_g1_ParamLimits

0x0ea1,	// (0x000341f7) main_image3_pane_g1

0x8f6f,	// (0x0003c2c5) main_image3_pane_g2_ParamLimits

0x8f6f,	// (0x0003c2c5) main_image3_pane_g2

0x8f88,	// (0x0003c2de) main_image3_pane_g3_ParamLimits

0x8f88,	// (0x0003c2de) main_image3_pane_g3

0x8fa1,	// (0x0003c2f7) main_image3_pane_g4_ParamLimits

0x8fa1,	// (0x0003c2f7) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x00042c2f) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x00042c2f) main_image3_pane_g

0x8fba,	// (0x0003c310) main_image3_pane_t1_ParamLimits

0x8fba,	// (0x0003c310) main_image3_pane_t1

0x8fdf,	// (0x0003c335) main_image3_pane_t2_ParamLimits

0x8fdf,	// (0x0003c335) main_image3_pane_t2

0x8ffe,	// (0x0003c354) main_image3_pane_t3_ParamLimits

0x8ffe,	// (0x0003c354) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x00042c38) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x00042c38) main_image3_pane_t

0x44d9,	// (0x0003782f) grid_sctrl_middle_pane_cp01_ParamLimits

0x44d9,	// (0x0003782f) grid_sctrl_middle_pane_cp01

0x905f,	// (0x0003c3b5) cell_sctrl_middle_pane_cp01_ParamLimits

0x905f,	// (0x0003c3b5) cell_sctrl_middle_pane_cp01

0x9070,	// (0x0003c3c6) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9070,	// (0x0003c3c6) cell_sctrl_middle_pane_cp01_g1

0x422a,	// (0x00037580) main_call4_pane

0x907d,	// (0x0003c3d3) aid_size_button_call4_ParamLimits

0x907d,	// (0x0003c3d3) aid_size_button_call4

0x90ad,	// (0x0003c403) call4_windows_pane_ParamLimits

0x90ad,	// (0x0003c403) call4_windows_pane

0x90c7,	// (0x0003c41d) grid_call4_button_pane_ParamLimits

0x90c7,	// (0x0003c41d) grid_call4_button_pane

0xefab,	// (0x00042301) call4_windows_conf_pane

0xefc0,	// (0x00042316) popup_call4_audio_first_window_ParamLimits

0xefc0,	// (0x00042316) popup_call4_audio_first_window

0xf016,	// (0x0004236c) popup_call4_audio_second_window_ParamLimits

0xf016,	// (0x0004236c) popup_call4_audio_second_window

0xf02a,	// (0x00042380) popup_call4_audio_wait_window_ParamLimits

0xf02a,	// (0x00042380) popup_call4_audio_wait_window

0x90eb,	// (0x0003c441) cell_call4_button_pane_ParamLimits

0x90eb,	// (0x0003c441) cell_call4_button_pane

0x9110,	// (0x0003c466) bg_button_pane_cp09_ParamLimits

0x9110,	// (0x0003c466) bg_button_pane_cp09

0x911c,	// (0x0003c472) cell_call4_button_pane_g1_ParamLimits

0x911c,	// (0x0003c472) cell_call4_button_pane_g1

0x9129,	// (0x0003c47f) cell_call4_button_pane_t1_ParamLimits

0x9129,	// (0x0003c47f) cell_call4_button_pane_t1

0xf072,	// (0x000423c8) popup_call4_audio_conf_window_ParamLimits

0xf072,	// (0x000423c8) popup_call4_audio_conf_window

0x83c9,	// (0x0003b71f) mup3_progress_pane_t1_ParamLimits

0x83e8,	// (0x0003b73e) mup3_progress_pane_t2_ParamLimits

0xe97e,	// (0x00041cd4) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x00042b11) mup3_progress_pane_t_ParamLimits

0xe99b,	// (0x00041cf1) mup_progress_pane_cp03_ParamLimits

0x8902,	// (0x0003bc58) mup3_control_keys_pane_g4_copy1

0x8e02,	// (0x0003c158) mp4_rocker2_pane_ParamLimits

0x8e02,	// (0x0003c158) mp4_rocker2_pane

0xf086,	// (0x000423dc) mp4_rocker2_pane_g1

0xf08e,	// (0x000423e4) mp4_rocker2_pane_g2

0x913b,	// (0x0003c491) mp4_rocker2_pane_g3

0x9143,	// (0x0003c499) mp4_rocker2_pane_g4

0x914b,	// (0x0003c4a1) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x00042c41) mp4_rocker2_pane_g

0x422a,	// (0x00037580) main_camera4_pane

0x422a,	// (0x00037580) main_video4_pane

0x8b69,	// (0x0003bebf) main_video_tele_dialer_pane_t1_ParamLimits

0x8b69,	// (0x0003bebf) main_video_tele_dialer_pane_t1

0x8b7b,	// (0x0003bed1) main_video_tele_dialer_pane_t2_ParamLimits

0x8b7b,	// (0x0003bed1) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x00042bfb) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x00042bfb) main_video_tele_dialer_pane_t

0x916b,	// (0x0003c4c1) cam4_autofocus_pane_ParamLimits

0x916b,	// (0x0003c4c1) cam4_autofocus_pane

0x9185,	// (0x0003c4db) cam4_image_uncrop_pane_ParamLimits

0x9185,	// (0x0003c4db) cam4_image_uncrop_pane

0x919c,	// (0x0003c4f2) cam4_indicators_pane_ParamLimits

0x919c,	// (0x0003c4f2) cam4_indicators_pane

0x91b8,	// (0x0003c50e) main_camera4_pane_g1_ParamLimits

0x91b8,	// (0x0003c50e) main_camera4_pane_g1

0x91c4,	// (0x0003c51a) main_camera4_pane_g2_ParamLimits

0x91c4,	// (0x0003c51a) main_camera4_pane_g2

0x91c4,	// (0x0003c51a) main_camera4_pane_g3_ParamLimits

0x91c4,	// (0x0003c51a) main_camera4_pane_g3

0x91d0,	// (0x0003c526) main_camera4_pane_g4_ParamLimits

0x91d0,	// (0x0003c526) main_camera4_pane_g4

0x91dc,	// (0x0003c532) main_camera4_pane_g5_ParamLimits

0x91dc,	// (0x0003c532) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x00042c4c) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x00042c4c) main_camera4_pane_g

0x91f6,	// (0x0003c54c) main_camera4_pane_t1_ParamLimits

0x91f6,	// (0x0003c54c) main_camera4_pane_t1

0xe903,	// (0x00041c59) bg_tb_trans_pane_cp06

0x9246,	// (0x0003c59c) cam4_indicators_pane_g1

0x9257,	// (0x0003c5ad) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x00042c67) cam4_indicators_pane_g

0x9275,	// (0x0003c5cb) cam4_indicators_pane_t1

0x929f,	// (0x0003c5f5) main_video4_pane_g1_ParamLimits

0x929f,	// (0x0003c5f5) main_video4_pane_g1

0x92ab,	// (0x0003c601) main_video4_pane_g2_ParamLimits

0x92ab,	// (0x0003c601) main_video4_pane_g2

0x92b7,	// (0x0003c60d) main_video4_pane_g3_ParamLimits

0x92b7,	// (0x0003c60d) main_video4_pane_g3

0x92c3,	// (0x0003c619) main_video4_pane_g4_ParamLimits

0x92c3,	// (0x0003c619) main_video4_pane_g4

0x0004,

0xf918,	// (0x00042c6e) main_video4_pane_g_ParamLimits

0xf918,	// (0x00042c6e) main_video4_pane_g

0x92e3,	// (0x0003c639) vid4_indicators_pane_ParamLimits

0x92e3,	// (0x0003c639) vid4_indicators_pane

0x9301,	// (0x0003c657) video4_image_uncrop_cif_pane_ParamLimits

0x9301,	// (0x0003c657) video4_image_uncrop_cif_pane

0x9310,	// (0x0003c666) video4_image_uncrop_nhd_pane_ParamLimits

0x9310,	// (0x0003c666) video4_image_uncrop_nhd_pane

0x9185,	// (0x0003c4db) video4_image_uncrop_vga_pane_ParamLimits

0x9185,	// (0x0003c4db) video4_image_uncrop_vga_pane

0x72db,	// (0x0003a631) bg_tb_trans_pane_cp07

0x9246,	// (0x0003c59c) vid4_indicators_pane_g1

0x9325,	// (0x0003c67b) vid4_indicators_pane_g2

0x9336,	// (0x0003c68c) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x00042c79) vid4_indicators_pane_g

0x9363,	// (0x0003c6b9) vid4_indicators_pane_t1

0x937c,	// (0x0003c6d2) cam4_autofocus_pane_g1

0x9384,	// (0x0003c6da) cam4_autofocus_pane_g2

0x938c,	// (0x0003c6e2) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x00042c84) cam4_autofocus_pane_g

0x9394,	// (0x0003c6ea) cam4_autofocus_pane_g3_copy1

0x8b99,	// (0x0003beef) video_down_pane_cp_t1

0x8ba7,	// (0x0003befd) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x00042c00) video_down_pane_cp_t

0x44d9,	// (0x0003782f) popup_vitu2_window_ParamLimits

0x44d9,	// (0x0003782f) popup_vitu2_window

0x939c,	// (0x0003c6f2) aid_size_cell2_itu2_ParamLimits

0x939c,	// (0x0003c6f2) aid_size_cell2_itu2

0x93be,	// (0x0003c714) aid_size_cell_itu2_ParamLimits

0x93be,	// (0x0003c714) aid_size_cell_itu2

0x08bd,	// (0x00033c13) bg_popup_window_pane_cp09_ParamLimits

0x08bd,	// (0x00033c13) bg_popup_window_pane_cp09

0x9402,	// (0x0003c758) field_vitu2_entry_pane_ParamLimits

0x9402,	// (0x0003c758) field_vitu2_entry_pane

0x9422,	// (0x0003c778) grid_vitu2_function_pane_ParamLimits

0x9422,	// (0x0003c778) grid_vitu2_function_pane

0x9466,	// (0x0003c7bc) grid_vitu2_itu_pane_ParamLimits

0x9466,	// (0x0003c7bc) grid_vitu2_itu_pane

0x94dc,	// (0x0003c832) cell_vitu2_itu_pane_ParamLimits

0x94dc,	// (0x0003c832) cell_vitu2_itu_pane

0x94f1,	// (0x0003c847) cell_vitu2_function_pane_ParamLimits

0x94f1,	// (0x0003c847) cell_vitu2_function_pane

0xf0a8,	// (0x000423fe) bg_popup_call_pane_cp08_ParamLimits

0xf0a8,	// (0x000423fe) bg_popup_call_pane_cp08

0xf0c1,	// (0x00042417) field_vitu2_entry_pane_g1

0xf0cd,	// (0x00042423) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x00042c8b) field_vitu2_entry_pane_g

0x33aa,	// (0x00036700) field_vitu2_entry_pane_t1_ParamLimits

0x33aa,	// (0x00036700) field_vitu2_entry_pane_t1

0x33dc,	// (0x00036732) field_vitu2_entry_pane_t2_ParamLimits

0x33dc,	// (0x00036732) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x00042c92) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x00042c92) field_vitu2_entry_pane_t

0x9532,	// (0x0003c888) bg_button_pane_cp010_ParamLimits

0x9532,	// (0x0003c888) bg_button_pane_cp010

0x9540,	// (0x0003c896) cell_vitu2_itu_pane_g1

0x955e,	// (0x0003c8b4) cell_vitu2_itu_pane_t1_ParamLimits

0x955e,	// (0x0003c8b4) cell_vitu2_itu_pane_t1

0x33f9,	// (0x0003674f) cell_vitu2_itu_pane_t2_ParamLimits

0x33f9,	// (0x0003674f) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x00042c9c) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x00042c9c) cell_vitu2_itu_pane_t

0x72db,	// (0x0003a631) bg_button_pane_cp011

0x95b0,	// (0x0003c906) cell_vitu2_function_pane_g1

0x422a,	// (0x00037580) main_myfav_hc_pane

0x9040,	// (0x0003c396) popup_image3_note_pane_ParamLimits

0x9040,	// (0x0003c396) popup_image3_note_pane

0x904e,	// (0x0003c3a4) popup_image3_tool_bar_pane_ParamLimits

0x904e,	// (0x0003c3a4) popup_image3_tool_bar_pane

0x3467,	// (0x000367bd) cell_vitu2_itu_pane_t3_ParamLimits

0x3467,	// (0x000367bd) cell_vitu2_itu_pane_t3

0x422a,	// (0x00037580) bg_popup_trans_pane

0x0060,	// (0x000333b6) grid_image3_tool_bar_pane

0x006a,	// (0x000333c0) bg_popup_trans_pane_g1

0xc7ab,	// (0x0003fb01) bg_popup_trans_pane_g2

0x0072,	// (0x000333c8) bg_popup_trans_pane_g3

0x007a,	// (0x000333d0) bg_popup_trans_pane_g4

0x0082,	// (0x000333d8) bg_popup_trans_pane_g5

0x008a,	// (0x000333e0) bg_popup_trans_pane_g6

0x0092,	// (0x000333e8) bg_popup_trans_pane_g7

0x009a,	// (0x000333f0) bg_popup_trans_pane_g8

0xc78b,	// (0x0003fae1) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x00042ca3) bg_popup_trans_pane_g

0x00a2,	// (0x000333f8) cell_image3_tool_bar_pane_ParamLimits

0x00a2,	// (0x000333f8) cell_image3_tool_bar_pane

0xe69c,	// (0x000419f2) cell_image3_tool_bar_pane_g1

0x422a,	// (0x00037580) bg_popup_trans_pane_cp1

0x00b6,	// (0x0003340c) popup_image3_note_pane_t1

0x00c4,	// (0x0003341a) popup_image3_note_pane_t2

0x00d2,	// (0x00033428) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x00042cb6) popup_image3_note_pane_t

0x00e0,	// (0x00033436) popup_image3_note_pane_t3_copy1

0x95c4,	// (0x0003c91a) bg_myfav_hc_instruction_pane_ParamLimits

0x95c4,	// (0x0003c91a) bg_myfav_hc_instruction_pane

0x95dc,	// (0x0003c932) cell_myfav_contact_pane_ParamLimits

0x95dc,	// (0x0003c932) cell_myfav_contact_pane

0x95f6,	// (0x0003c94c) cell_myfav_contact_pane_cp1_ParamLimits

0x95f6,	// (0x0003c94c) cell_myfav_contact_pane_cp1

0x960e,	// (0x0003c964) cell_myfav_contact_pane_cp2_ParamLimits

0x960e,	// (0x0003c964) cell_myfav_contact_pane_cp2

0x9626,	// (0x0003c97c) cell_myfav_contact_pane_cp3_ParamLimits

0x9626,	// (0x0003c97c) cell_myfav_contact_pane_cp3

0x963d,	// (0x0003c993) cell_myfav_contact_pane_cp4_ParamLimits

0x963d,	// (0x0003c993) cell_myfav_contact_pane_cp4

0x9653,	// (0x0003c9a9) cell_myfav_contact_pane_cp5_ParamLimits

0x9653,	// (0x0003c9a9) cell_myfav_contact_pane_cp5

0x9667,	// (0x0003c9bd) cell_myfav_contact_pane_cp6_ParamLimits

0x9667,	// (0x0003c9bd) cell_myfav_contact_pane_cp6

0x967b,	// (0x0003c9d1) cell_myfav_contact_pane_cp7_ParamLimits

0x967b,	// (0x0003c9d1) cell_myfav_contact_pane_cp7

0x00ee,	// (0x00033444) listscroll_gen_pane_cp05

0x9693,	// (0x0003c9e9) main_myfav_hc_pane_g1_ParamLimits

0x9693,	// (0x0003c9e9) main_myfav_hc_pane_g1

0x96ab,	// (0x0003ca01) main_myfav_hc_pane_g2_ParamLimits

0x96ab,	// (0x0003ca01) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x00042cbd) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x00042cbd) main_myfav_hc_pane_g

0x96db,	// (0x0003ca31) main_myfav_hc_pane_t1_ParamLimits

0x96db,	// (0x0003ca31) main_myfav_hc_pane_t1

0x00f7,	// (0x0003344d) main_myfav_hc_pane_t2_ParamLimits

0x00f7,	// (0x0003344d) main_myfav_hc_pane_t2

0x0109,	// (0x0003345f) main_myfav_hc_pane_t3_ParamLimits

0x0109,	// (0x0003345f) main_myfav_hc_pane_t3

0x96f2,	// (0x0003ca48) main_myfav_hc_pane_t4_ParamLimits

0x96f2,	// (0x0003ca48) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x00042cc4) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x00042cc4) main_myfav_hc_pane_t

0xe69c,	// (0x000419f2) bg_myfav_hc_instruction_pane_g1

0x011b,	// (0x00033471) cell_myfav_contact_pane_g1_ParamLimits

0x011b,	// (0x00033471) cell_myfav_contact_pane_g1

0x011b,	// (0x00033471) cell_myfav_contact_pane_g2_ParamLimits

0x011b,	// (0x00033471) cell_myfav_contact_pane_g2

0x0127,	// (0x0003347d) cell_myfav_contact_pane_g3_ParamLimits

0x0127,	// (0x0003347d) cell_myfav_contact_pane_g3

0xe968,	// (0x00041cbe) cell_myfav_contact_pane_g4_ParamLimits

0xe968,	// (0x00041cbe) cell_myfav_contact_pane_g4

0x0134,	// (0x0003348a) cell_myfav_contact_pane_g5_ParamLimits

0x0134,	// (0x0003348a) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x00042ccf) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x00042ccf) cell_myfav_contact_pane_g

0x96c3,	// (0x0003ca19) main_myfav_hc_pane_g3_ParamLimits

0x96c3,	// (0x0003ca19) main_myfav_hc_pane_g3

0x43ec,	// (0x00037742) popup_adpt_find_window

0x971c,	// (0x0003ca72) afind_page_pane_ParamLimits

0x971c,	// (0x0003ca72) afind_page_pane

0x9729,	// (0x0003ca7f) aid_size_cell_afind_ParamLimits

0x9729,	// (0x0003ca7f) aid_size_cell_afind

0x9743,	// (0x0003ca99) bg_popup_sub_pane_cp09_ParamLimits

0x9743,	// (0x0003ca99) bg_popup_sub_pane_cp09

0x9750,	// (0x0003caa6) find_pane_cp01_ParamLimits

0x9750,	// (0x0003caa6) find_pane_cp01

0x0140,	// (0x00033496) grid_afind_control_pane_ParamLimits

0x0140,	// (0x00033496) grid_afind_control_pane

0x975d,	// (0x0003cab3) grid_afind_pane_ParamLimits

0x975d,	// (0x0003cab3) grid_afind_pane

0x9779,	// (0x0003cacf) cell_afind_pane_ParamLimits

0x9779,	// (0x0003cacf) cell_afind_pane

0xe69c,	// (0x000419f2) afind_page_pane_g1

0x97c1,	// (0x0003cb17) afind_page_pane_g2

0x97ca,	// (0x0003cb20) afind_page_pane_g3

0x0002,

0xf984,	// (0x00042cda) afind_page_pane_g

0x97d3,	// (0x0003cb29) afind_page_pane_t1

0x0154,	// (0x000334aa) cell_afind_grid_control_pane_ParamLimits

0x0154,	// (0x000334aa) cell_afind_grid_control_pane

0xef9f,	// (0x000422f5) bg_button_pane_cp69_ParamLimits

0xef9f,	// (0x000422f5) bg_button_pane_cp69

0x97ea,	// (0x0003cb40) cell_afind_pane_g1_ParamLimits

0x97ea,	// (0x0003cb40) cell_afind_pane_g1

0x97f7,	// (0x0003cb4d) cell_afind_pane_t1_ParamLimits

0x97f7,	// (0x0003cb4d) cell_afind_pane_t1

0xc5a4,	// (0x0003f8fa) bg_button_pane_cp72

0x0163,	// (0x000334b9) cell_afind_grid_control_pane_g1

0x6e56,	// (0x0003a1ac) aid_image_placing_area_ParamLimits

0x6e56,	// (0x0003a1ac) aid_image_placing_area

0xec6d,	// (0x00041fc3) field_vitu_entry_pane_g1_ParamLimits

0xec6d,	// (0x00041fc3) field_vitu_entry_pane_g1

0xec79,	// (0x00041fcf) field_vitu_entry_pane_g2_ParamLimits

0xec79,	// (0x00041fcf) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x00042b8b) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x00042b8b) field_vitu_entry_pane_g

0x898e,	// (0x0003bce4) cell_vitu_itu_pane_g1_ParamLimits

0x89d0,	// (0x0003bd26) cell_vitu_itu_pane_t3_ParamLimits

0x89d0,	// (0x0003bd26) cell_vitu_itu_pane_t3

0xef4f,	// (0x000422a5) mp4_progress_pane_t1_ParamLimits

0xef68,	// (0x000422be) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x00042c20) mp4_progress_pane_t_ParamLimits

0xef81,	// (0x000422d7) mup_progress_pane_cp04_ParamLimits

0x9706,	// (0x0003ca5c) main_myfav_hc_pane_t5_ParamLimits

0x9706,	// (0x0003ca5c) main_myfav_hc_pane_t5

0x427c,	// (0x000375d2) aid_zoom_text_primary

0x43ec,	// (0x00037742) popup_adpt_find_window_ParamLimits

0x72db,	// (0x0003a631) main_cam_set_pane

0x91aa,	// (0x0003c500) cam4_zoom_pane_ParamLimits

0x91aa,	// (0x0003c500) cam4_zoom_pane

0x9809,	// (0x0003cb5f) main_cam_set_pane_g1_ParamLimits

0x9809,	// (0x0003cb5f) main_cam_set_pane_g1

0x9817,	// (0x0003cb6d) main_cam_set_pane_g2_ParamLimits

0x9817,	// (0x0003cb6d) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x00042ce1) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x00042ce1) main_cam_set_pane_g

0x9823,	// (0x0003cb79) main_cam_set_pane_t1_ParamLimits

0x9823,	// (0x0003cb79) main_cam_set_pane_t1

0x983f,	// (0x0003cb95) main_cset_listscroll_pane_ParamLimits

0x983f,	// (0x0003cb95) main_cset_listscroll_pane

0x986a,	// (0x0003cbc0) main_cset_slider_pane_ParamLimits

0x986a,	// (0x0003cbc0) main_cset_slider_pane

0x0174,	// (0x000334ca) main_cset_list_pane_ParamLimits

0x0174,	// (0x000334ca) main_cset_list_pane

0x0184,	// (0x000334da) scroll_pane_cp028

0x9889,	// (0x0003cbdf) aid_area_touch_slider

0x98a5,	// (0x0003cbfb) cset_slider_pane

0x98cf,	// (0x0003cc25) main_cset_slider_pane_g1

0x98e4,	// (0x0003cc3a) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x00042ce6) main_cset_slider_pane_g

0x01bd,	// (0x00033513) main_cset_slider_pane_t1

0x99ac,	// (0x0003cd02) main_cset_slider_pane_t2

0x99c6,	// (0x0003cd1c) main_cset_slider_pane_t3

0x99e0,	// (0x0003cd36) main_cset_slider_pane_t4

0x99fe,	// (0x0003cd54) main_cset_slider_pane_t5

0x9a20,	// (0x0003cd76) main_cset_slider_pane_t6

0x9a37,	// (0x0003cd8d) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x00042d0b) main_cset_slider_pane_t

0x9b45,	// (0x0003ce9b) cset_list_set_pane_ParamLimits

0x9b45,	// (0x0003ce9b) cset_list_set_pane

0x9b62,	// (0x0003ceb8) aid_position_infowindow_above

0x9b6a,	// (0x0003cec0) aid_position_infowindow_below

0x34b4,	// (0x0003680a) cset_list_set_pane_g1_ParamLimits

0x34b4,	// (0x0003680a) cset_list_set_pane_g1

0x34c0,	// (0x00036816) cset_list_set_pane_g3_ParamLimits

0x34c0,	// (0x00036816) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x00042d2a) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x00042d2a) cset_list_set_pane_g

0x34cf,	// (0x00036825) cset_list_set_pane_t1_ParamLimits

0x34cf,	// (0x00036825) cset_list_set_pane_t1

0x72db,	// (0x0003a631) list_highlight_pane_cp021_ParamLimits

0x72db,	// (0x0003a631) list_highlight_pane_cp021

0xcf59,	// (0x000402af) cset_slider_pane_g1

0xcf6b,	// (0x000402c1) cset_slider_pane_g2

0xcf62,	// (0x000402b8) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x00042d2f) cset_slider_pane_g

0x9b72,	// (0x0003cec8) aid_area_touch_cam4_zoom

0x9b7a,	// (0x0003ced0) cam4_zoom_cont_pane

0x9b82,	// (0x0003ced8) cam4_zoom_pane_g1

0x9b8a,	// (0x0003cee0) cam4_zoom_pane_g2

0x9b92,	// (0x0003cee8) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x00042d36) cam4_zoom_pane_g

0x0c2c,	// (0x00033f82) cam4_zoom_cont_pane_g1

0x0c35,	// (0x00033f8b) cam4_zoom_cont_pane_g2

0x0c3e,	// (0x00033f94) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x00042d3d) cam4_zoom_cont_pane_g

0x9097,	// (0x0003c3ed) call4_image_pane_ParamLimits

0x9097,	// (0x0003c3ed) call4_image_pane

0xefab,	// (0x00042301) call4_windows_conf_pane_ParamLimits

0xefea,	// (0x00042340) popup_call4_audio_in_window_ParamLimits

0xefea,	// (0x00042340) popup_call4_audio_in_window

0x422a,	// (0x00037580) bg_popup_call2_act_pane_cp02

0xf06a,	// (0x000423c0) call4_list_conf_pane

0xe69c,	// (0x000419f2) call4_image_pane_g1

0xe69c,	// (0x000419f2) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x00042a51) call4_image_pane_g

0x0298,	// (0x000335ee) list_single_graphic_popup_conf4_pane_ParamLimits

0x0298,	// (0x000335ee) list_single_graphic_popup_conf4_pane

0x422a,	// (0x00037580) list_highlight_pane_cp022

0x02ab,	// (0x00033601) list_single_graphic_popup_conf4_pane_g1

0xcc4a,	// (0x0003ffa0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x00042d44) list_single_graphic_popup_conf4_pane_g

0x02b3,	// (0x00033609) list_single_graphic_popup_conf4_pane_t1

0x531f,	// (0x00038675) popup_vtel_slider_window_ParamLimits

0x531f,	// (0x00038675) popup_vtel_slider_window

0xef8d,	// (0x000422e3) dialer2_ne_pane_t2_ParamLimits

0xef8d,	// (0x000422e3) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x00042c25) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x00042c25) dialer2_ne_pane_t

0x72db,	// (0x0003a631) bg_popup_sub_pane_cp010_ParamLimits

0x72db,	// (0x0003a631) bg_popup_sub_pane_cp010

0x9b9a,	// (0x0003cef0) popup_vtel_slider_window_g1_ParamLimits

0x9b9a,	// (0x0003cef0) popup_vtel_slider_window_g1

0x9ba6,	// (0x0003cefc) popup_vtel_slider_window_g2_ParamLimits

0x9ba6,	// (0x0003cefc) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x00042d49) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x00042d49) popup_vtel_slider_window_g

0x9bee,	// (0x0003cf44) vtel_slider_pane_ParamLimits

0x9bee,	// (0x0003cf44) vtel_slider_pane

0x9bfd,	// (0x0003cf53) vtel_slider_pane_g1_ParamLimits

0x9bfd,	// (0x0003cf53) vtel_slider_pane_g1

0x9c0a,	// (0x0003cf60) vtel_slider_pane_g2_ParamLimits

0x9c0a,	// (0x0003cf60) vtel_slider_pane_g2

0x9c17,	// (0x0003cf6d) vtel_slider_pane_g3_ParamLimits

0x9c17,	// (0x0003cf6d) vtel_slider_pane_g3

0x9bfd,	// (0x0003cf53) vtel_slider_pane_g4_ParamLimits

0x9bfd,	// (0x0003cf53) vtel_slider_pane_g4

0x9c24,	// (0x0003cf7a) vtel_slider_pane_g5_ParamLimits

0x9c24,	// (0x0003cf7a) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x00042d52) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x00042d52) vtel_slider_pane_g

0x422a,	// (0x00037580) main_gallery2_pane

0x93e4,	// (0x0003c73a) aid_size_row_itut2_dropdow_list_ParamLimits

0x93e4,	// (0x0003c73a) aid_size_row_itut2_dropdow_list

0x9444,	// (0x0003c79a) grid_vitu2_function_top_pane_ParamLimits

0x9444,	// (0x0003c79a) grid_vitu2_function_top_pane

0x949a,	// (0x0003c7f0) popup_vitu2_dropdown_list_window_ParamLimits

0x949a,	// (0x0003c7f0) popup_vitu2_dropdown_list_window

0x94ba,	// (0x0003c810) popup_vitu2_match_list_window

0x9c31,	// (0x0003cf87) cell_vitu2_function_top_pane_ParamLimits

0x9c31,	// (0x0003cf87) cell_vitu2_function_top_pane

0x9c51,	// (0x0003cfa7) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9c51,	// (0x0003cfa7) cell_vitu2_function_top_pane_cp01

0x9c6f,	// (0x0003cfc5) cell_vitu2_function_top_wide_pane_ParamLimits

0x9c6f,	// (0x0003cfc5) cell_vitu2_function_top_wide_pane

0x72db,	// (0x0003a631) bg_button_pane_cp012

0x9c8d,	// (0x0003cfe3) cell_vitu2_function_top_pane_g1

0x9c9c,	// (0x0003cff2) bg_button_pane_cp013_ParamLimits

0x9c9c,	// (0x0003cff2) bg_button_pane_cp013

0x9cb8,	// (0x0003d00e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9cb8,	// (0x0003d00e) cell_vitu2_function_top_wide_pane_g1

0x44d9,	// (0x0003782f) bg_popup_sub_pane_cp20

0x9cd0,	// (0x0003d026) list_vitu2_match_list_pane

0x006a,	// (0x000333c0) bg_popup_sub_pane_cp20_g1

0x0072,	// (0x000333c8) bg_popup_sub_pane_cp20_g2

0xc7ab,	// (0x0003fb01) bg_popup_sub_pane_cp20_g3

0x007a,	// (0x000333d0) bg_popup_sub_pane_cp20_g4

0xc78b,	// (0x0003fae1) bg_popup_sub_pane_cp20_g5

0x02f3,	// (0x00033649) bg_popup_sub_pane_cp20_g6

0x008a,	// (0x000333e0) bg_popup_sub_pane_cp20_g7

0x0092,	// (0x000333e8) bg_popup_sub_pane_cp20_g8

0x009a,	// (0x000333f0) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x00042d5d) bg_popup_sub_pane_cp20_g

0x9ce8,	// (0x0003d03e) list_vitu2_match_list_item_pane_ParamLimits

0x9ce8,	// (0x0003d03e) list_vitu2_match_list_item_pane

0x9cfa,	// (0x0003d050) list_vitu2_match_list_item_pane_t1

0x422a,	// (0x00037580) bg_popup_sub_pane_cp21

0xcb4f,	// (0x0003fea5) grid_vitu2_dropdown_list_pane

0x9d08,	// (0x0003d05e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9d08,	// (0x0003d05e) cell_vitu2_dropdown_list_char_pane

0x9d29,	// (0x0003d07f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9d29,	// (0x0003d07f) cell_vitu2_dropdown_list_ctrl_pane

0x034d,	// (0x000336a3) cell_vitu2_dropdown_list_char_pane_g1

0x0344,	// (0x0003369a) cell_vitu2_dropdown_list_char_pane_g2

0x033b,	// (0x00033691) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x00042d7a) cell_vitu2_dropdown_list_char_pane_g

0x9d55,	// (0x0003d0ab) cell_vitu2_dropdown_list_char_pane_t1

0x9d63,	// (0x0003d0b9) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9d63,	// (0x0003d0b9) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9d73,	// (0x0003d0c9) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9d73,	// (0x0003d0c9) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9d84,	// (0x0003d0da) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9d84,	// (0x0003d0da) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9d94,	// (0x0003d0ea) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9d94,	// (0x0003d0ea) cell_vitu2_dropdown_list_ctrl_pane_g4

0xe903,	// (0x00041c59) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xe903,	// (0x00041c59) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x00042d81) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x00042d81) cell_vitu2_dropdown_list_ctrl_pane_g

0x9db0,	// (0x0003d106) aid_size_cell_gallery2_ParamLimits

0x9db0,	// (0x0003d106) aid_size_cell_gallery2

0x9dbe,	// (0x0003d114) grid_gallery2_pane_ParamLimits

0x9dbe,	// (0x0003d114) grid_gallery2_pane

0x9dcd,	// (0x0003d123) scroll_pane_cp029_ParamLimits

0x9dcd,	// (0x0003d123) scroll_pane_cp029

0x9dd9,	// (0x0003d12f) cell_gallery2_pane_ParamLimits

0x9dd9,	// (0x0003d12f) cell_gallery2_pane

0x0356,	// (0x000336ac) cell_gallery2_pane_g2

0x9e0a,	// (0x0003d160) cell_gallery2_pane_g3

0x0360,	// (0x000336b6) cell_gallery2_pane_g4

0x0368,	// (0x000336be) cell_gallery2_pane_g5

0xce23,	// (0x00040179) grid_highlight_pane_cp10

0x94ba,	// (0x0003c810) popup_vitu2_match_list_window_ParamLimits

0x94cc,	// (0x0003c822) popup_vitu2_query_window_ParamLimits

0x94cc,	// (0x0003c822) popup_vitu2_query_window

0x422a,	// (0x00037580) bg_vitu2_candi_button_pane

0x034d,	// (0x000336a3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x0344,	// (0x0003369a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x033b,	// (0x00033691) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x3539,	// (0x0003688f) bg_button_pane_cp015

0x9e12,	// (0x0003d168) bg_button_pane_cp016

0x9e25,	// (0x0003d17b) bg_button_pane_cp017

0xe24b,	// (0x000415a1) bg_popup_sub_pane_cp22

0x0370,	// (0x000336c6) popup_vitu2_query_window_g1

0x356c,	// (0x000368c2) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x00042d8c) popup_vitu2_query_window_g

0x3589,	// (0x000368df) popup_vitu2_query_window_t1_ParamLimits

0x3589,	// (0x000368df) popup_vitu2_query_window_t1

0x35bc,	// (0x00036912) popup_vitu2_query_window_t2_ParamLimits

0x35bc,	// (0x00036912) popup_vitu2_query_window_t2

0x35ce,	// (0x00036924) popup_vitu2_query_window_t3_ParamLimits

0x35ce,	// (0x00036924) popup_vitu2_query_window_t3

0x9e49,	// (0x0003d19f) popup_vitu2_query_window_t4_ParamLimits

0x9e49,	// (0x0003d19f) popup_vitu2_query_window_t4

0x9e6a,	// (0x0003d1c0) popup_vitu2_query_window_t5_ParamLimits

0x9e6a,	// (0x0003d1c0) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x00042d93) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x00042d93) popup_vitu2_query_window_t

0x016c,	// (0x000334c2) main_cset_text_pane

0x9889,	// (0x0003cbdf) aid_area_touch_slider_ParamLimits

0x98a5,	// (0x0003cbfb) cset_slider_pane_ParamLimits

0x98cf,	// (0x0003cc25) main_cset_slider_pane_g1_ParamLimits

0x98e4,	// (0x0003cc3a) main_cset_slider_pane_g2_ParamLimits

0x018d,	// (0x000334e3) main_cset_slider_pane_g3_ParamLimits

0x018d,	// (0x000334e3) main_cset_slider_pane_g3

0x98f9,	// (0x0003cc4f) main_cset_slider_pane_g4_ParamLimits

0x98f9,	// (0x0003cc4f) main_cset_slider_pane_g4

0x9908,	// (0x0003cc5e) main_cset_slider_pane_g5_ParamLimits

0x9908,	// (0x0003cc5e) main_cset_slider_pane_g5

0x9916,	// (0x0003cc6c) main_cset_slider_pane_g6_ParamLimits

0x9916,	// (0x0003cc6c) main_cset_slider_pane_g6

0xf990,	// (0x00042ce6) main_cset_slider_pane_g_ParamLimits

0x01bd,	// (0x00033513) main_cset_slider_pane_t1_ParamLimits

0x99ac,	// (0x0003cd02) main_cset_slider_pane_t2_ParamLimits

0x99c6,	// (0x0003cd1c) main_cset_slider_pane_t3_ParamLimits

0x99e0,	// (0x0003cd36) main_cset_slider_pane_t4_ParamLimits

0x99fe,	// (0x0003cd54) main_cset_slider_pane_t5_ParamLimits

0x9a20,	// (0x0003cd76) main_cset_slider_pane_t6_ParamLimits

0x9a37,	// (0x0003cd8d) main_cset_slider_pane_t7_ParamLimits

0x9a65,	// (0x0003cdbb) main_cset_slider_pane_t8_ParamLimits

0x9a65,	// (0x0003cdbb) main_cset_slider_pane_t8

0x9a8d,	// (0x0003cde3) main_cset_slider_pane_t9_ParamLimits

0x9a8d,	// (0x0003cde3) main_cset_slider_pane_t9

0x9ab5,	// (0x0003ce0b) main_cset_slider_pane_t10_ParamLimits

0x9ab5,	// (0x0003ce0b) main_cset_slider_pane_t10

0x9add,	// (0x0003ce33) main_cset_slider_pane_t11_ParamLimits

0x9add,	// (0x0003ce33) main_cset_slider_pane_t11

0x9b07,	// (0x0003ce5d) main_cset_slider_pane_t12_ParamLimits

0x9b07,	// (0x0003ce5d) main_cset_slider_pane_t12

0x9b26,	// (0x0003ce7c) main_cset_slider_pane_t13_ParamLimits

0x9b26,	// (0x0003ce7c) main_cset_slider_pane_t13

0xf9b5,	// (0x00042d0b) main_cset_slider_pane_t_ParamLimits

0x422a,	// (0x00037580) bg_popup_sub_pane_cp011

0x037c,	// (0x000336d2) main_cset_text_pane_g1

0x0384,	// (0x000336da) main_cset_text_pane_t1

0x0392,	// (0x000336e8) main_cset_text_pane_t2

0x03a0,	// (0x000336f6) main_cset_text_pane_t3

0x03ae,	// (0x00033704) main_cset_text_pane_t4

0x03bc,	// (0x00033712) main_cset_text_pane_t5

0x03ca,	// (0x00033720) main_cset_text_pane_t6

0x03d8,	// (0x0003372e) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x00042da2) main_cset_text_pane_t

0x422a,	// (0x00037580) main_cam4_burst_pane

0x422a,	// (0x00037580) main_cam5_pane

0xc8a4,	// (0x0003fbfa) bg_button_pane_cp019

0x97e1,	// (0x0003cb37) bg_button_pane_cp020

0x0199,	// (0x000334ef) main_cset_slider_pane_g7_ParamLimits

0x0199,	// (0x000334ef) main_cset_slider_pane_g7

0x01a5,	// (0x000334fb) main_cset_slider_pane_g8_ParamLimits

0x01a5,	// (0x000334fb) main_cset_slider_pane_g8

0x992c,	// (0x0003cc82) main_cset_slider_pane_g9_ParamLimits

0x992c,	// (0x0003cc82) main_cset_slider_pane_g9

0x9938,	// (0x0003cc8e) main_cset_slider_pane_g10_ParamLimits

0x9938,	// (0x0003cc8e) main_cset_slider_pane_g10

0x9944,	// (0x0003cc9a) main_cset_slider_pane_g11_ParamLimits

0x9944,	// (0x0003cc9a) main_cset_slider_pane_g11

0x9950,	// (0x0003cca6) main_cset_slider_pane_g12_ParamLimits

0x9950,	// (0x0003cca6) main_cset_slider_pane_g12

0x995c,	// (0x0003ccb2) main_cset_slider_pane_g13_ParamLimits

0x995c,	// (0x0003ccb2) main_cset_slider_pane_g13

0x996a,	// (0x0003ccc0) main_cset_slider_pane_g14_ParamLimits

0x996a,	// (0x0003ccc0) main_cset_slider_pane_g14

0x9978,	// (0x0003ccce) main_cset_slider_pane_g15_ParamLimits

0x9978,	// (0x0003ccce) main_cset_slider_pane_g15

0x01eb,	// (0x00033541) main_cset_slider_pane_t14_ParamLimits

0x01eb,	// (0x00033541) main_cset_slider_pane_t14

0x0224,	// (0x0003357a) main_cset_slider_pane_t15_ParamLimits

0x0224,	// (0x0003357a) main_cset_slider_pane_t15

0x9e8b,	// (0x0003d1e1) aid_cam4_burst_size_cell_ParamLimits

0x9e8b,	// (0x0003d1e1) aid_cam4_burst_size_cell

0x9ea7,	// (0x0003d1fd) grid_cam4_burst_pane_ParamLimits

0x9ea7,	// (0x0003d1fd) grid_cam4_burst_pane

0x9ed7,	// (0x0003d22d) linegrid_cam4_burst_pane_ParamLimits

0x9ed7,	// (0x0003d22d) linegrid_cam4_burst_pane

0x9ef9,	// (0x0003d24f) scroll_pane_cp30_ParamLimits

0x9ef9,	// (0x0003d24f) scroll_pane_cp30

0x9f05,	// (0x0003d25b) cell_cam4_burst_pane_ParamLimits

0x9f05,	// (0x0003d25b) cell_cam4_burst_pane

0x03f2,	// (0x00033748) linegrid_cam4_burst_pane_g1_ParamLimits

0x03f2,	// (0x00033748) linegrid_cam4_burst_pane_g1

0x9f41,	// (0x0003d297) linegrid_cam4_burst_pane_g2_ParamLimits

0x9f41,	// (0x0003d297) linegrid_cam4_burst_pane_g2

0x03ff,	// (0x00033755) linegrid_cam4_burst_pane_g3_ParamLimits

0x03ff,	// (0x00033755) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x00042db1) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x00042db1) linegrid_cam4_burst_pane_g

0x9f52,	// (0x0003d2a8) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9f52,	// (0x0003d2a8) linegrid_cam4_burst_pane_g3_copy1

0x040c,	// (0x00033762) linegrid_cam4_burst_pane_g4_ParamLimits

0x040c,	// (0x00033762) linegrid_cam4_burst_pane_g4

0x9f6c,	// (0x0003d2c2) linegrid_cam4_burst_pane_g5_ParamLimits

0x9f6c,	// (0x0003d2c2) linegrid_cam4_burst_pane_g5

0x9f7d,	// (0x0003d2d3) linegrid_cam4_burst_pane_g6_ParamLimits

0x9f7d,	// (0x0003d2d3) linegrid_cam4_burst_pane_g6

0x0419,	// (0x0003376f) linegrid_cam4_burst_pane_g7_ParamLimits

0x0419,	// (0x0003376f) linegrid_cam4_burst_pane_g7

0x9f8e,	// (0x0003d2e4) cell_cam4_burst_pane_g1

0x0432,	// (0x00033788) main_cam5_pane_t1_ParamLimits

0x0432,	// (0x00033788) main_cam5_pane_t1

0x0444,	// (0x0003379a) main_cam5_pane_t2_ParamLimits

0x0444,	// (0x0003379a) main_cam5_pane_t2

0x0456,	// (0x000337ac) main_cam5_pane_t3_ParamLimits

0x0456,	// (0x000337ac) main_cam5_pane_t3

0x0468,	// (0x000337be) main_cam5_pane_t4_ParamLimits

0x0468,	// (0x000337be) main_cam5_pane_t4

0x047e,	// (0x000337d4) main_cam5_pane_t5_ParamLimits

0x047e,	// (0x000337d4) main_cam5_pane_t5

0x0490,	// (0x000337e6) main_cam5_pane_t6_ParamLimits

0x0490,	// (0x000337e6) main_cam5_pane_t6

0x04a4,	// (0x000337fa) main_cam5_pane_t7_ParamLimits

0x04a4,	// (0x000337fa) main_cam5_pane_t7

0x04b6,	// (0x0003380c) main_cam5_pane_t8_ParamLimits

0x04b6,	// (0x0003380c) main_cam5_pane_t8

0x04d2,	// (0x00033828) main_cam5_pane_t9_ParamLimits

0x04d2,	// (0x00033828) main_cam5_pane_t9

0x04e4,	// (0x0003383a) main_cam5_pane_t10_ParamLimits

0x04e4,	// (0x0003383a) main_cam5_pane_t10

0x04f6,	// (0x0003384c) main_cam5_pane_t11_ParamLimits

0x04f6,	// (0x0003384c) main_cam5_pane_t11

0x0508,	// (0x0003385e) main_cam5_pane_t12_ParamLimits

0x0508,	// (0x0003385e) main_cam5_pane_t12

0x051d,	// (0x00033873) main_cam5_pane_t13_ParamLimits

0x051d,	// (0x00033873) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x00042dbd) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x00042dbd) main_cam5_pane_t

0x44a2,	// (0x000377f8) popup_scut_keymap_window_ParamLimits

0x44a2,	// (0x000377f8) popup_scut_keymap_window

0x9fa1,	// (0x0003d2f7) aid_size_cell_brow_shortcut

0xce23,	// (0x00040179) bg_popup_window_pane_cp010

0x9fad,	// (0x0003d303) grid_scut_pane

0x9fb9,	// (0x0003d30f) cell_scut_pane_ParamLimits

0x9fb9,	// (0x0003d30f) cell_scut_pane

0x9fd0,	// (0x0003d326) cell_scut_pane_g1

0x053a,	// (0x00033890) cell_scut_pane_t1

0x0549,	// (0x0003389f) cell_scut_pane_t2

0x9fd9,	// (0x0003d32f) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x00042dd8) cell_scut_pane_t

0x7fec,	// (0x0003b342) main_mup3_pane_g8_ParamLimits

0x7fec,	// (0x0003b342) main_mup3_pane_g8

0x93f2,	// (0x0003c748) area_vitu2_query_pane_ParamLimits

0x93f2,	// (0x0003c748) area_vitu2_query_pane

0x354b,	// (0x000368a1) input_focus_pane_cp08

0x0558,	// (0x000338ae) area_vitu2_query_pane_g1

0x364c,	// (0x000369a2) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x00042ddf) area_vitu2_query_pane_g

0x9fe7,	// (0x0003d33d) area_vitu2_query_pane_t1_ParamLimits

0x9fe7,	// (0x0003d33d) area_vitu2_query_pane_t1

0x9ffb,	// (0x0003d351) area_vitu2_query_pane_t2_ParamLimits

0x9ffb,	// (0x0003d351) area_vitu2_query_pane_t2

0x365d,	// (0x000369b3) area_vitu2_query_pane_t3_ParamLimits

0x365d,	// (0x000369b3) area_vitu2_query_pane_t3

0x3685,	// (0x000369db) area_vitu2_query_pane_t4_ParamLimits

0x3685,	// (0x000369db) area_vitu2_query_pane_t4

0x36ad,	// (0x00036a03) area_vitu2_query_pane_t5_ParamLimits

0x36ad,	// (0x00036a03) area_vitu2_query_pane_t5

0x36d5,	// (0x00036a2b) area_vitu2_query_pane_t6_ParamLimits

0x36d5,	// (0x00036a2b) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x00042de4) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x00042de4) area_vitu2_query_pane_t

0xa00f,	// (0x0003d365) bg_button_pane_cp018

0xa01d,	// (0x0003d373) bg_button_pane_cp021

0x3721,	// (0x00036a77) bg_button_pane_cp022

0x3732,	// (0x00036a88) input_focus_pane_cp09

0x6541,	// (0x00039897) aid_size_touch_mv_arrow_left

0x656c,	// (0x000398c2) aid_size_touch_mv_arrow_right

0x9990,	// (0x0003cce6) main_cset_slider_pane_g16_ParamLimits

0x9990,	// (0x0003cce6) main_cset_slider_pane_g16

0x999e,	// (0x0003ccf4) main_cset_slider_pane_g17_ParamLimits

0x999e,	// (0x0003ccf4) main_cset_slider_pane_g17

0x9f8e,	// (0x0003d2e4) cell_cam4_burst_pane_g1_ParamLimits

0x422a,	// (0x00037580) compa_mode_pane

0x9bb2,	// (0x0003cf08) popup_vtel_slider_window_g3_ParamLimits

0x9bb2,	// (0x0003cf08) popup_vtel_slider_window_g3

0x9bc6,	// (0x0003cf1c) popup_vtel_slider_window_g4_ParamLimits

0x9bc6,	// (0x0003cf1c) popup_vtel_slider_window_g4

0x9bda,	// (0x0003cf30) popup_vtel_slider_window_t1_ParamLimits

0x9bda,	// (0x0003cf30) popup_vtel_slider_window_t1

0x422a,	// (0x00037580) main_cl_pane

0xe273,	// (0x000415c9) popup_imed_adjust2_window_ParamLimits

0xe24b,	// (0x000415a1) bg_tb_trans_pane_cp05_ParamLimits

0xeba2,	// (0x00041ef8) popup_imed_adjust2_window_g1_ParamLimits

0xebb1,	// (0x00041f07) popup_imed_adjust2_window_g2_ParamLimits

0xebb1,	// (0x00041f07) popup_imed_adjust2_window_g2

0xebbd,	// (0x00041f13) popup_imed_adjust2_window_g3_ParamLimits

0xebbd,	// (0x00041f13) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x00042b4f) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x00042b4f) popup_imed_adjust2_window_g

0xebc9,	// (0x00041f1f) popup_imed_adjust2_window_t1_ParamLimits

0xebe1,	// (0x00041f37) slider_imed_adjust_pane_ParamLimits

0xebf5,	// (0x00041f4b) slider_imed_adjust_pane_g1_ParamLimits

0xec05,	// (0x00041f5b) slider_imed_adjust_pane_g2_ParamLimits

0xec15,	// (0x00041f6b) slider_imed_adjust_pane_g3_ParamLimits

0xec26,	// (0x00041f7c) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x00042b56) slider_imed_adjust_pane_g_ParamLimits

0x9153,	// (0x0003c4a9) aid_touch_area_cam4_ParamLimits

0x9153,	// (0x0003c4a9) aid_touch_area_cam4

0x9163,	// (0x0003c4b9) battery_pane_cp01

0x91ea,	// (0x0003c540) main_camera4_pane_g6_ParamLimits

0x91ea,	// (0x0003c540) main_camera4_pane_g6

0x9208,	// (0x0003c55e) main_camera4_pane_t2_ParamLimits

0x9208,	// (0x0003c55e) main_camera4_pane_t2

0x0001,

0xf903,	// (0x00042c59) main_camera4_pane_t_ParamLimits

0xf903,	// (0x00042c59) main_camera4_pane_t

0x928f,	// (0x0003c5e5) aid_touch_area_vid4_ParamLimits

0x928f,	// (0x0003c5e5) aid_touch_area_vid4

0x92cf,	// (0x0003c625) main_video4_pane_g5_ParamLimits

0x92cf,	// (0x0003c625) main_video4_pane_g5

0x92f1,	// (0x0003c647) vid4_progress_pane_ParamLimits

0x92f1,	// (0x0003c647) vid4_progress_pane

0x01b1,	// (0x00033507) main_cset_slider_pane_g18_ParamLimits

0x01b1,	// (0x00033507) main_cset_slider_pane_g18

0x0426,	// (0x0003377c) cell_cam4_burst_pane_g2_ParamLimits

0x0426,	// (0x0003377c) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x00042db8) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x00042db8) cell_cam4_burst_pane_g

0xa029,	// (0x0003d37f) bg_cl_pane_ParamLimits

0xa029,	// (0x0003d37f) bg_cl_pane

0xa035,	// (0x0003d38b) cl_header_pane_ParamLimits

0xa035,	// (0x0003d38b) cl_header_pane

0xa041,	// (0x0003d397) cl_listscroll_pane_ParamLimits

0xa041,	// (0x0003d397) cl_listscroll_pane

0x0600,	// (0x00033956) bg_cl_pane_g1

0x0608,	// (0x0003395e) bg_cl_pane_g2

0x0610,	// (0x00033966) bg_cl_pane_g3

0x0618,	// (0x0003396e) bg_cl_pane_g4

0x0620,	// (0x00033976) bg_cl_pane_g5

0x0628,	// (0x0003397e) bg_cl_pane_g6

0x0630,	// (0x00033986) bg_cl_pane_g7

0x0638,	// (0x0003398e) bg_cl_pane_g8

0x0640,	// (0x00033996) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x00042df3) bg_cl_pane_g

0xa04d,	// (0x0003d3a3) aid_height_cl_leading_ParamLimits

0xa04d,	// (0x0003d3a3) aid_height_cl_leading

0xa059,	// (0x0003d3af) aid_height_cl_text_ParamLimits

0xa059,	// (0x0003d3af) aid_height_cl_text

0x44d9,	// (0x0003782f) bg_cl_header_pane_ParamLimits

0x44d9,	// (0x0003782f) bg_cl_header_pane

0xa071,	// (0x0003d3c7) cl_header_pane_g1_ParamLimits

0xa071,	// (0x0003d3c7) cl_header_pane_g1

0xa07e,	// (0x0003d3d4) cl_header_pane_t1_ParamLimits

0xa07e,	// (0x0003d3d4) cl_header_pane_t1

0x0648,	// (0x0003399e) cl_list_pane

0x0184,	// (0x000334da) hc_scroll_pane_cp01

0xc78b,	// (0x0003fae1) bg_cl_header_pane_g1

0x006a,	// (0x000333c0) bg_cl_header_pane_g2

0xc7ab,	// (0x0003fb01) bg_cl_header_pane_g3

0x007a,	// (0x000333d0) bg_cl_header_pane_g4

0x0072,	// (0x000333c8) bg_cl_header_pane_g5

0x02f3,	// (0x00033649) bg_cl_header_pane_g6

0x0092,	// (0x000333e8) bg_cl_header_pane_g7

0x009a,	// (0x000333f0) bg_cl_header_pane_g8

0x008a,	// (0x000333e0) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x00042e06) bg_cl_header_pane_g

0xa090,	// (0x0003d3e6) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa090,	// (0x0003d3e6) hc_cl_list_double_graphic_heading_pane

0xa0a7,	// (0x0003d3fd) hc_cl_list_single_graphic_pane_ParamLimits

0xa0a7,	// (0x0003d3fd) hc_cl_list_single_graphic_pane

0xa0c7,	// (0x0003d41d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa0c7,	// (0x0003d41d) hc_cl_list_single_graphic_pane_g1

0xa0d3,	// (0x0003d429) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa0d3,	// (0x0003d429) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x00042e19) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x00042e19) hc_cl_list_single_graphic_pane_g

0xa0e7,	// (0x0003d43d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa0e7,	// (0x0003d43d) hc_cl_list_single_graphic_pane_t1

0xa0c7,	// (0x0003d41d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa0c7,	// (0x0003d41d) hc_cl_list_double_graphic_heading_pane_g1

0xa0fc,	// (0x0003d452) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa0fc,	// (0x0003d452) hc_cl_list_double_graphic_heading_pane_g2

0xa110,	// (0x0003d466) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa110,	// (0x0003d466) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x00042e1e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x00042e1e) hc_cl_list_double_graphic_heading_pane_g

0xa124,	// (0x0003d47a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa124,	// (0x0003d47a) hc_cl_list_double_graphic_heading_pane_t1

0xa139,	// (0x0003d48f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa139,	// (0x0003d48f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x00042e25) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x00042e25) hc_cl_list_double_graphic_heading_pane_t

0xa156,	// (0x0003d4ac) vid4_progress_pane_g1

0xa166,	// (0x0003d4bc) vid4_progress_pane_g2

0xa176,	// (0x0003d4cc) vid4_progress_pane_g3

0x9257,	// (0x0003c5ad) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x00042e2a) vid4_progress_pane_g

0xa182,	// (0x0003d4d8) vid4_progress_pane_t1

0xa197,	// (0x0003d4ed) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x00042e35) vid4_progress_pane_t

0xa1c2,	// (0x0003d518) wait_bar_pane_cp07

0xe48d,	// (0x000417e3) blid_firmament_pane_ParamLimits

0xe4d0,	// (0x00041826) popup_blid_sat_info2_window_g1

0xe4f4,	// (0x0004184a) popup_blid_sat_info2_window_t3

0xe502,	// (0x00041858) popup_blid_sat_info2_window_t4

0xe510,	// (0x00041866) popup_blid_sat_info2_window_t5

0xe51e,	// (0x00041874) popup_blid_sat_info2_window_t6

0xe52e,	// (0x00041884) popup_blid_sat_info2_window_t7

0xe53c,	// (0x00041892) popup_blid_sat_info2_window_t8

0xe54a,	// (0x000418a0) popup_blid_sat_info2_window_t9

0xe558,	// (0x000418ae) popup_blid_sat_info2_window_t10

0xe61c,	// (0x00041972) aid_firma_cardinal_ParamLimits

0xe630,	// (0x00041986) blid_firmament_pane_t1_ParamLimits

0xe647,	// (0x0004199d) blid_firmament_pane_t2_ParamLimits

0xe65e,	// (0x000419b4) blid_firmament_pane_t3_ParamLimits

0xe675,	// (0x000419cb) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x00042a48) blid_firmament_pane_t_ParamLimits

0xe68c,	// (0x000419e2) blid_sat_info_pane_ParamLimits

0x72db,	// (0x0003a631) main_cam_set_pane_ParamLimits

0x87a7,	// (0x0003bafd) aid_size_cell_colour_35_ParamLimits

0x87c1,	// (0x0003bb17) aid_size_cell_colour_112_ParamLimits

0x87d8,	// (0x0003bb2e) aid_size_cell_effect_ParamLimits

0x72db,	// (0x0003a631) bg_tb_trans_pane_cp02_ParamLimits

0xd8bc,	// (0x00040c12) heading_imed_pane_ParamLimits

0x87f2,	// (0x0003bb48) listscroll_imed_pane_ParamLimits

0xd854,	// (0x00040baa) popup_call2_audio_first_window_g5_ParamLimits

0xd854,	// (0x00040baa) popup_call2_audio_first_window_g5

0x8f10,	// (0x0003c266) aid_size_touch_image3_arrow_left_ParamLimits

0x8f10,	// (0x0003c266) aid_size_touch_image3_arrow_left

0x8f26,	// (0x0003c27c) aid_size_touch_image3_arrow_right_ParamLimits

0x8f26,	// (0x0003c27c) aid_size_touch_image3_arrow_right

0xa1ad,	// (0x0003d503) vid4_progress_pane_t3

0x8a99,	// (0x0003bdef) main_hwr_training_symbol_option_pane_ParamLimits

0x8a99,	// (0x0003bdef) main_hwr_training_symbol_option_pane

0xee8f,	// (0x000421e5) popup_hwr_training_preview_window_ParamLimits

0xee8f,	// (0x000421e5) popup_hwr_training_preview_window

0x8afa,	// (0x0003be50) hwr_training_navi_pane_g5_ParamLimits

0x8afa,	// (0x0003be50) hwr_training_navi_pane_g5

0x004a,	// (0x000333a0) popup_char_count_window

0x44d9,	// (0x0003782f) bg_popup_sub_pane_cp20_ParamLimits

0x9cd0,	// (0x0003d026) list_vitu2_match_list_pane_ParamLimits

0x9cdc,	// (0x0003d032) vitu2_page_scroll_pane_ParamLimits

0x9cdc,	// (0x0003d032) vitu2_page_scroll_pane

0x0723,	// (0x00033a79) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0723,	// (0x00033a79) list_single_hwr_training_symbol_option_pane

0x0736,	// (0x00033a8c) list_single_hwr_training_symbol_option_pane_g1

0x073e,	// (0x00033a94) list_single_hwr_training_symbol_option_pane_t1

0x074c,	// (0x00033aa2) bg_button_pane_cp023

0x0755,	// (0x00033aab) bg_button_pane_cp024

0xa1d2,	// (0x0003d528) vitu2_page_scroll_pane_g1

0xa1da,	// (0x0003d530) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x00042e3c) vitu2_page_scroll_pane_g

0xa1e2,	// (0x0003d538) vitu2_page_scroll_pane_t1

0xe3e5,	// (0x0004173b) popup_char_count_window_g1

0x0788,	// (0x00033ade) popup_char_count_window_g2

0x0791,	// (0x00033ae7) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x00042e41) popup_char_count_window_g

0x079a,	// (0x00033af0) popup_char_count_window_t1

0x422a,	// (0x00037580) main_vded2_pane

0xeb8e,	// (0x00041ee4) aid_size_cell_imed_line

0xeb98,	// (0x00041eee) grid_imed_line_width_pane

0x9347,	// (0x0003c69d) vid4_indicators_pane_g4

0x07a8,	// (0x00033afe) cell_imed_line_width_pane_ParamLimits

0x07a8,	// (0x00033afe) cell_imed_line_width_pane

0x07bc,	// (0x00033b12) cell_imed_line_width_pane_g1

0xe46f,	// (0x000417c5) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x00042e48) cell_imed_line_width_pane_g

0xa1f1,	// (0x0003d547) main_vded2_pane_g1_ParamLimits

0xa1f1,	// (0x0003d547) main_vded2_pane_g1

0xa1fe,	// (0x0003d554) main_vded2_pane_g2_ParamLimits

0xa1fe,	// (0x0003d554) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x00042e4d) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x00042e4d) main_vded2_pane_g

0xa20c,	// (0x0003d562) vded2_slider_pane_ParamLimits

0xa20c,	// (0x0003d562) vded2_slider_pane

0xa219,	// (0x0003d56f) aid_size_touch_vded2_end

0xa223,	// (0x0003d579) aid_size_touch_vded2_playhead

0x07c5,	// (0x00033b1b) aid_size_touch_vded2_start

0x07cd,	// (0x00033b23) vded2_slider_bg_pane

0x07d6,	// (0x00033b2c) vded2_slider_pane_g1

0x07df,	// (0x00033b35) vded2_slider_pane_g2

0xa22b,	// (0x0003d581) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x00042e52) vded2_slider_pane_g

0x07e7,	// (0x00033b3d) vded2_slider_bg_pane_g1

0x07f0,	// (0x00033b46) vded2_slider_bg_pane_g2

0x07f9,	// (0x00033b4f) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x00042e59) vded2_slider_bg_pane_g

0x6bb3,	// (0x00039f09) aid_postcard_touch_down_pane_ParamLimits

0x6bb3,	// (0x00039f09) aid_postcard_touch_down_pane

0x6bc3,	// (0x00039f19) aid_postcard_touch_up_pane_ParamLimits

0x6bc3,	// (0x00039f19) aid_postcard_touch_up_pane

0x422a,	// (0x00037580) main_blid2_pane

0xe259,	// (0x000415af) popup_blid2_search_window

0x422a,	// (0x00037580) blid2_gps_pane

0x422a,	// (0x00037580) blid2_navig_pane

0x422a,	// (0x00037580) blid2_search_pane

0x422a,	// (0x00037580) blid2_tripm_pane

0xa234,	// (0x0003d58a) blid2_search_pane_g1_ParamLimits

0xa234,	// (0x0003d58a) blid2_search_pane_g1

0xa244,	// (0x0003d59a) blid2_search_pane_t1_ParamLimits

0xa244,	// (0x0003d59a) blid2_search_pane_t1

0xa256,	// (0x0003d5ac) aid_size_cell_blid2_gps_ParamLimits

0xa256,	// (0x0003d5ac) aid_size_cell_blid2_gps

0xa266,	// (0x0003d5bc) blid2_gps_pane_g1_ParamLimits

0xa266,	// (0x0003d5bc) blid2_gps_pane_g1

0xa272,	// (0x0003d5c8) grid_blid2_satellite_pane_ParamLimits

0xa272,	// (0x0003d5c8) grid_blid2_satellite_pane

0xa282,	// (0x0003d5d8) blid2_navig_pane_g1_ParamLimits

0xa282,	// (0x0003d5d8) blid2_navig_pane_g1

0xa28e,	// (0x0003d5e4) blid2_navig_pane_t1_ParamLimits

0xa28e,	// (0x0003d5e4) blid2_navig_pane_t1

0xa2a0,	// (0x0003d5f6) blid2_navig_pane_t2_ParamLimits

0xa2a0,	// (0x0003d5f6) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x00042e60) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x00042e60) blid2_navig_pane_t

0xa2b2,	// (0x0003d608) blid2_navig_ring_pane_ParamLimits

0xa2b2,	// (0x0003d608) blid2_navig_ring_pane

0xa2c2,	// (0x0003d618) blid2_speed_pane_ParamLimits

0xa2c2,	// (0x0003d618) blid2_speed_pane

0xa2ce,	// (0x0003d624) blid2_tripm_pane_g1_ParamLimits

0xa2ce,	// (0x0003d624) blid2_tripm_pane_g1

0xa2de,	// (0x0003d634) blid2_tripm_pane_g2_ParamLimits

0xa2de,	// (0x0003d634) blid2_tripm_pane_g2

0xa2ea,	// (0x0003d640) blid2_tripm_pane_g3_ParamLimits

0xa2ea,	// (0x0003d640) blid2_tripm_pane_g3

0xa2f6,	// (0x0003d64c) blid2_tripm_pane_g4_ParamLimits

0xa2f6,	// (0x0003d64c) blid2_tripm_pane_g4

0xa302,	// (0x0003d658) blid2_tripm_pane_g5_ParamLimits

0xa302,	// (0x0003d658) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x00042e65) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x00042e65) blid2_tripm_pane_g

0xa31e,	// (0x0003d674) blid2_tripm_pane_t1_ParamLimits

0xa31e,	// (0x0003d674) blid2_tripm_pane_t1

0xa332,	// (0x0003d688) blid2_tripm_pane_t2_ParamLimits

0xa332,	// (0x0003d688) blid2_tripm_pane_t2

0xa346,	// (0x0003d69c) blid2_tripm_pane_t3_ParamLimits

0xa346,	// (0x0003d69c) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x00042e72) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x00042e72) blid2_tripm_pane_t

0xa378,	// (0x0003d6ce) cell_blid2_satellite_pane_ParamLimits

0xa378,	// (0x0003d6ce) cell_blid2_satellite_pane

0xa392,	// (0x0003d6e8) cell_blid2_satellite_pane_g1

0x0802,	// (0x00033b58) cell_blid2_satellite_pane_t1

0xe69c,	// (0x000419f2) blid2_speed_pane_g1

0x0810,	// (0x00033b66) blid2_speed_pane_t1

0x081e,	// (0x00033b74) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x00042e7b) blid2_speed_pane_t

0xe69c,	// (0x000419f2) blid2_navig_ring_pane_g1

0xa39b,	// (0x0003d6f1) blid2_navig_ring_pane_g2

0xa3a3,	// (0x0003d6f9) blid2_navig_ring_pane_g3

0xa3ab,	// (0x0003d701) blid2_navig_ring_pane_g4

0xa3b3,	// (0x0003d709) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x00042e80) blid2_navig_ring_pane_g

0x422a,	// (0x00037580) bg_popup_window_pane_cp011

0x082c,	// (0x00033b82) popup_blid2_search_window_g1

0x0834,	// (0x00033b8a) popup_blid2_search_window_t1

0x0842,	// (0x00033b98) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x00042e8b) popup_blid2_search_window_t

0xc69a,	// (0x0003f9f0) main_browser_pane_g1

0xc399,	// (0x0003f6ef) main_browser_pane_ParamLimits

0x72db,	// (0x0003a631) bg_button_pane_cp011_ParamLimits

0x95b0,	// (0x0003c906) cell_vitu2_function_pane_g1_ParamLimits

0xe24b,	// (0x000415a1) bg_popup_sub_pane_cp22_ParamLimits

0x354b,	// (0x000368a1) input_focus_pane_cp08_ParamLimits

0x9e38,	// (0x0003d18e) popup_vitu2_query_button_pane_ParamLimits

0x9e38,	// (0x0003d18e) popup_vitu2_query_button_pane

0x3562,	// (0x000368b8) popup_vitu2_query_input_button_pane

0x0370,	// (0x000336c6) popup_vitu2_query_window_g1_ParamLimits

0x356c,	// (0x000368c2) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x00042d8c) popup_vitu2_query_window_g_ParamLimits

0x422a,	// (0x00037580) bg_button_pane_cp026

0xa3bb,	// (0x0003d711) popup_vitu2_query_input_button_pane_g1

0x422a,	// (0x00037580) bg_button_pane_cp025

0x0850,	// (0x00033ba6) popup_vitu2_query_button_pane_t1

0x7d25,	// (0x0003b07b) main_mp3_pane_t6

0x7d35,	// (0x0003b08b) popup_slider_window_cp01

0x923e,	// (0x0003c594) cam4_battery_pane

0x931d,	// (0x0003c673) cam4_battery_pane_cp02

0xa14e,	// (0x0003d4a4) cam4_battery_pane_cp01

0xa14e,	// (0x0003d4a4) cam4_battery_pane_cp03

0xe69c,	// (0x000419f2) cam4_battery_pane_g1

0xf00c,	// (0x00042362) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x00042e90) cam4_battery_pane_g

0xe566,	// (0x000418bc) popup_blid_sat_info2_window_t11

0x6541,	// (0x00039897) aid_size_touch_mv_arrow_left_ParamLimits

0x656c,	// (0x000398c2) aid_size_touch_mv_arrow_right_ParamLimits

0xcd83,	// (0x000400d9) navi_pane_g1_ParamLimits

0x65ab,	// (0x00039901) navi_pane_g2_ParamLimits

0x65d9,	// (0x0003992f) navi_pane_g3_ParamLimits

0xf404,	// (0x0004275a) navi_pane_g_ParamLimits

0x6633,	// (0x00039989) navi_pane_mv_t1_ParamLimits

0x87fe,	// (0x0003bb54) grid_imed_effect_pane_ParamLimits

0x51df,	// (0x00038535) aid_placing_vt_slider_lsc

0xc5e9,	// (0x0003f93f) aid_placing_vt_slider_prt

0x72db,	// (0x0003a631) bg_tb_trans_pane_cp01_ParamLimits

0xe823,	// (0x00041b79) popup_image_details_window_g1_ParamLimits

0xe836,	// (0x00041b8c) popup_image_details_window_g2_ParamLimits

0xe84b,	// (0x00041ba1) popup_image_details_window_g3_ParamLimits

0xe84b,	// (0x00041ba1) popup_image_details_window_g3

0xf737,	// (0x00042a8d) popup_image_details_window_g_ParamLimits

0xe85f,	// (0x00041bb5) popup_image_details_window_t1_ParamLimits

0xe871,	// (0x00041bc7) popup_image_details_window_t2_ParamLimits

0xe88a,	// (0x00041be0) popup_image_details_window_t3_ParamLimits

0xe89e,	// (0x00041bf4) popup_image_details_window_t4_ParamLimits

0xe8b9,	// (0x00041c0f) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x00042a94) popup_image_details_window_t_ParamLimits

0xa065,	// (0x0003d3bb) cl_header_name_pane_ParamLimits

0xa065,	// (0x0003d3bb) cl_header_name_pane

0xa3c3,	// (0x0003d719) cl_header_name_pane_t1_ParamLimits

0xa3c3,	// (0x0003d719) cl_header_name_pane_t1

0xa3da,	// (0x0003d730) cl_header_name_pane_t2_ParamLimits

0xa3da,	// (0x0003d730) cl_header_name_pane_t2

0xa404,	// (0x0003d75a) cl_header_name_pane_t3_ParamLimits

0xa404,	// (0x0003d75a) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x00042e95) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x00042e95) cl_header_name_pane_t

0x6604,	// (0x0003995a) navi_pane_mv_g2_ParamLimits

0xf0c1,	// (0x00042417) field_vitu2_entry_pane_g1_ParamLimits

0xf0cd,	// (0x00042423) field_vitu2_entry_pane_g2_ParamLimits

0xf0d9,	// (0x0004242f) field_vitu2_entry_pane_g3_ParamLimits

0xf0d9,	// (0x0004242f) field_vitu2_entry_pane_g3

0xf935,	// (0x00042c8b) field_vitu2_entry_pane_g_ParamLimits

0x9540,	// (0x0003c896) cell_vitu2_itu_pane_g1_ParamLimits

0x9550,	// (0x0003c8a6) cell_vitu2_itu_pane_g2_ParamLimits

0x9550,	// (0x0003c8a6) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x00042c97) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x00042c97) cell_vitu2_itu_pane_g

0x72db,	// (0x0003a631) bg_vkb2_func_pane_cp05_ParamLimits

0x72db,	// (0x0003a631) bg_vkb2_func_pane_cp05

0x72db,	// (0x0003a631) bg_vkb2_func_pane_cp03

0x72db,	// (0x0003a631) bg_vkb2_func_pane_cp04

0x72db,	// (0x0003a631) bg_vkb2_func_pane_cp10_ParamLimits

0x72db,	// (0x0003a631) bg_vkb2_func_pane_cp10

0x3721,	// (0x00036a77) bg_vkb2_func_pane_cp08

0xa00f,	// (0x0003d365) bg_vkb2_func_pane_cp06

0xa01d,	// (0x0003d373) bg_vkb2_func_pane_cp07

0x075e,	// (0x00033ab4) bg_vkb2_func_pane_cp11_ParamLimits

0x075e,	// (0x00033ab4) bg_vkb2_func_pane_cp11

0x0773,	// (0x00033ac9) bg_vkb2_func_pane_cp12_ParamLimits

0x0773,	// (0x00033ac9) bg_vkb2_func_pane_cp12

0x422a,	// (0x00037580) bg_vkb2_func_pane_cp09

0x006a,	// (0x000333c0) bg_vkb2_func_pane_g1

0xc7ab,	// (0x0003fb01) bg_vkb2_func_pane_g2

0x0072,	// (0x000333c8) bg_vkb2_func_pane_g3

0x007a,	// (0x000333d0) bg_vkb2_func_pane_g4

0x02f3,	// (0x00033649) bg_vkb2_func_pane_g5

0x0092,	// (0x000333e8) bg_vkb2_func_pane_g6

0x009a,	// (0x000333f0) bg_vkb2_func_pane_g7

0x008a,	// (0x000333e0) bg_vkb2_func_pane_g8

0xc78b,	// (0x0003fae1) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x00042e9c) bg_vkb2_func_pane_g

0xa310,	// (0x0003d666) blid2_tripm_pane_g6_ParamLimits

0xa310,	// (0x0003d666) blid2_tripm_pane_g6

0xef47,	// (0x0004229d) mp4_progress_pane_g1

0xa36c,	// (0x0003d6c2) blid2_tripm_values_pane_ParamLimits

0xa36c,	// (0x0003d6c2) blid2_tripm_values_pane

0xa429,	// (0x0003d77f) blid2_tripm_values_pane_t1

0xa437,	// (0x0003d78d) blid2_tripm_values_pane_t2

0xa445,	// (0x0003d79b) blid2_tripm_values_pane_t3

0xa453,	// (0x0003d7a9) blid2_tripm_values_pane_t4

0xa461,	// (0x0003d7b7) blid2_tripm_values_pane_t5

0xa46f,	// (0x0003d7c5) blid2_tripm_values_pane_t6

0xa47d,	// (0x0003d7d3) blid2_tripm_values_pane_t7

0xa48b,	// (0x0003d7e1) blid2_tripm_values_pane_t8

0xa499,	// (0x0003d7ef) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x00042eaf) blid2_tripm_values_pane_t

0x521f,	// (0x00038575) call_video_pane_t1_ParamLimits

0x5240,	// (0x00038596) call_video_pane_t2_ParamLimits

0xf28d,	// (0x000425e3) call_video_pane_t_ParamLimits

0x32ad,	// (0x00036603) msg_header_pane_g1_ParamLimits

0xcf9e,	// (0x000402f4) msg_header_pane_g2_ParamLimits

0xcf9e,	// (0x000402f4) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x000427fd) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x000427fd) msg_header_pane_g

0xc399,	// (0x0003f6ef) main_clock2_pane_ParamLimits

0x8594,	// (0x0003b8ea) grid_clock2_toolbar_pane_ParamLimits

0x8594,	// (0x0003b8ea) grid_clock2_toolbar_pane

0x8594,	// (0x0003b8ea) listscroll_clock2_pane_ParamLimits

0x8594,	// (0x0003b8ea) listscroll_clock2_pane

0x8631,	// (0x0003b987) main_clock2_pane_t3_ParamLimits

0x8631,	// (0x0003b987) main_clock2_pane_t3

0x8643,	// (0x0003b999) main_clock2_pane_t4_ParamLimits

0x8643,	// (0x0003b999) main_clock2_pane_t4

0x085e,	// (0x00033bb4) cell_clock2_toolbar_pane

0x0866,	// (0x00033bbc) cell_clock2_toolbar_pane_cp01

0x0866,	// (0x00033bbc) cell_clock2_toolbar_pane_cp02

0x086e,	// (0x00033bc4) cell_clock2_toolbar_pane_cp03

0x0876,	// (0x00033bcc) list_clock2_pane

0xccd6,	// (0x0004002c) scroll_pane_cp10

0x087e,	// (0x00033bd4) list_single_clock2_pane_ParamLimits

0x087e,	// (0x00033bd4) list_single_clock2_pane

0xce23,	// (0x00040179) list_highlight_pane_cp08

0x088b,	// (0x00033be1) list_single_clock2_pane_t1

0x0899,	// (0x00033bef) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x00042ec2) list_single_clock2_pane_t

0x422a,	// (0x00037580) bg_button_pane_cp10

0x08a7,	// (0x00033bfd) cell_clock2_toolbar_pane_g1

0x6b15,	// (0x00039e6b) aid_main_viewer_pane_g1_ParamLimits

0x6b15,	// (0x00039e6b) aid_main_viewer_pane_g1

0x6b21,	// (0x00039e77) aid_main_viewer_pane_g2_ParamLimits

0x6b21,	// (0x00039e77) aid_main_viewer_pane_g2

0x6b2d,	// (0x00039e83) aid_main_viewer_pane_g3_ParamLimits

0x6b2d,	// (0x00039e83) aid_main_viewer_pane_g3

0x6b3e,	// (0x00039e94) aid_main_viewer_pane_g4_ParamLimits

0x6b3e,	// (0x00039e94) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x0004280e) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x0004280e) aid_main_viewer_pane_g

0x72ce,	// (0x0003a624) main_calc_pane_ParamLimits

0x72e9,	// (0x0003a63f) main_dialer2_pane_ParamLimits

0x422a,	// (0x00037580) main_cam6_pane

0x422a,	// (0x00037580) main_vid6_pane

0x85a0,	// (0x0003b8f6) listscroll_gen_pane_cp06_ParamLimits

0x85a0,	// (0x0003b8f6) listscroll_gen_pane_cp06

0x8655,	// (0x0003b9ab) main_clock2_pane_t5_ParamLimits

0x8655,	// (0x0003b9ab) main_clock2_pane_t5

0x86a4,	// (0x0003b9fa) aid_call2_pane_cp10_ParamLimits

0x86b6,	// (0x0003ba0c) aid_call_pane_cp10_ParamLimits

0xcd58,	// (0x000400ae) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcd58,	// (0x000400ae) popup_clock_analogue_window_cp10_g2_ParamLimits

0x86c8,	// (0x0003ba1e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x86c8,	// (0x0003ba1e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcd58,	// (0x000400ae) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x00042b44) popup_clock_analogue_window_cp10_g_ParamLimits

0x86de,	// (0x0003ba34) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8ebd,	// (0x0003c213) cell_dialer2_keypad_pane_g2_ParamLimits

0x8ebd,	// (0x0003c213) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x00042c2a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x00042c2a) cell_dialer2_keypad_pane_g

0x8ed9,	// (0x0003c22f) cell_dialer2_keypad_pane_t1

0x9876,	// (0x0003cbcc) main_cset_text2_pane_ParamLimits

0x9876,	// (0x0003cbcc) main_cset_text2_pane

0x0558,	// (0x000338ae) area_vitu2_query_pane_g1_ParamLimits

0x364c,	// (0x000369a2) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x00042ddf) area_vitu2_query_pane_g_ParamLimits

0x36fd,	// (0x00036a53) area_vitu2_query_pane_t7_ParamLimits

0x36fd,	// (0x00036a53) area_vitu2_query_pane_t7

0xa00f,	// (0x0003d365) bg_button_pane_cp018_ParamLimits

0xa01d,	// (0x0003d373) bg_button_pane_cp021_ParamLimits

0x3721,	// (0x00036a77) bg_button_pane_cp022_ParamLimits

0x3721,	// (0x00036a77) bg_vkb2_func_pane_cp08_ParamLimits

0xa00f,	// (0x0003d365) bg_vkb2_func_pane_cp06_ParamLimits

0xa01d,	// (0x0003d373) bg_vkb2_func_pane_cp07_ParamLimits

0x3732,	// (0x00036a88) input_focus_pane_cp09_ParamLimits

0xa4a7,	// (0x0003d7fd) cam6_autofocus_pane_ParamLimits

0xa4a7,	// (0x0003d7fd) cam6_autofocus_pane

0xa4c9,	// (0x0003d81f) cam6_image_uncrop_pane_ParamLimits

0xa4c9,	// (0x0003d81f) cam6_image_uncrop_pane

0xa4f6,	// (0x0003d84c) cam6_indi_pane_ParamLimits

0xa4f6,	// (0x0003d84c) cam6_indi_pane

0xa510,	// (0x0003d866) cam6_mode_pane_ParamLimits

0xa510,	// (0x0003d866) cam6_mode_pane

0xa524,	// (0x0003d87a) cam6_timer_pane_ParamLimits

0xa524,	// (0x0003d87a) cam6_timer_pane

0xa530,	// (0x0003d886) cam6_zoom_pane_ParamLimits

0xa530,	// (0x0003d886) cam6_zoom_pane

0x929f,	// (0x0003c5f5) cam6_mode_pane_g1_ParamLimits

0x929f,	// (0x0003c5f5) cam6_mode_pane_g1

0x92b7,	// (0x0003c60d) cam6_mode_pane_g2_ParamLimits

0x92b7,	// (0x0003c60d) cam6_mode_pane_g2

0x92c3,	// (0x0003c619) cam6_mode_pane_g3_ParamLimits

0x92c3,	// (0x0003c619) cam6_mode_pane_g3

0x92cf,	// (0x0003c625) cam6_mode_pane_g4_ParamLimits

0x92cf,	// (0x0003c625) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x00042ec7) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x00042ec7) cam6_mode_pane_g

0x08bd,	// (0x00033c13) bg_tb_trans_pane_cp08_ParamLimits

0x08bd,	// (0x00033c13) bg_tb_trans_pane_cp08

0x08cb,	// (0x00033c21) cam6_battery_pane_ParamLimits

0x08cb,	// (0x00033c21) cam6_battery_pane

0x08e1,	// (0x00033c37) cam6_indi_pane_g1_ParamLimits

0x08e1,	// (0x00033c37) cam6_indi_pane_g1

0x08f3,	// (0x00033c49) cam6_indi_pane_g2_ParamLimits

0x08f3,	// (0x00033c49) cam6_indi_pane_g2

0x0905,	// (0x00033c5b) cam6_indi_pane_g3_ParamLimits

0x0905,	// (0x00033c5b) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x00042ed0) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x00042ed0) cam6_indi_pane_g

0x0917,	// (0x00033c6d) cam6_indi_pane_t1_ParamLimits

0x0917,	// (0x00033c6d) cam6_indi_pane_t1

0x937c,	// (0x0003c6d2) cam6_autofocus_pane_g1

0x9384,	// (0x0003c6da) cam6_autofocus_pane_g2

0x938c,	// (0x0003c6e2) cam6_autofocus_pane_g3

0x9394,	// (0x0003c6ea) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x00042ed7) cam6_autofocus_pane_g

0x093d,	// (0x00033c93) cam6_timer_pane_g1

0x0945,	// (0x00033c9b) cam6_timer_pane_t1

0x0953,	// (0x00033ca9) cam6_zoom_cont_pane

0x095b,	// (0x00033cb1) cam6_zoom_pane_g1

0x0963,	// (0x00033cb9) cam6_zoom_pane_g2

0xa548,	// (0x0003d89e) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x00042ee0) cam6_zoom_pane_g

0xe69c,	// (0x000419f2) cam6_battery_pane_g1

0xe69c,	// (0x000419f2) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x00042a51) cam6_battery_pane_g

0x096b,	// (0x00033cc1) cam6_zoom_cont_pane_g1

0x0974,	// (0x00033cca) cam6_zoom_cont_pane_g2

0x097d,	// (0x00033cd3) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x00042ee7) cam6_zoom_cont_pane_g

0xa565,	// (0x0003d8bb) cam6_mode_pane_cp_ParamLimits

0xa565,	// (0x0003d8bb) cam6_mode_pane_cp

0xa530,	// (0x0003d886) cam6_zoom_pane_cp_ParamLimits

0xa530,	// (0x0003d886) cam6_zoom_pane_cp

0xa579,	// (0x0003d8cf) vid6_image_uncrop_cif_pane_ParamLimits

0xa579,	// (0x0003d8cf) vid6_image_uncrop_cif_pane

0xa5a5,	// (0x0003d8fb) vid6_image_uncrop_nhd_pane_ParamLimits

0xa5a5,	// (0x0003d8fb) vid6_image_uncrop_nhd_pane

0xa4c9,	// (0x0003d81f) vid6_image_uncrop_vga_pane_ParamLimits

0xa4c9,	// (0x0003d81f) vid6_image_uncrop_vga_pane

0xa5c2,	// (0x0003d918) vid6_image_uncrop_wvga_pane_ParamLimits

0xa5c2,	// (0x0003d918) vid6_image_uncrop_wvga_pane

0xa5df,	// (0x0003d935) vid6_indi_pane_ParamLimits

0xa5df,	// (0x0003d935) vid6_indi_pane

0x08bd,	// (0x00033c13) bg_tb_trans_pane_cp09_ParamLimits

0x08bd,	// (0x00033c13) bg_tb_trans_pane_cp09

0x0995,	// (0x00033ceb) cam6_battery_pane_cp_ParamLimits

0x0995,	// (0x00033ceb) cam6_battery_pane_cp

0x09a1,	// (0x00033cf7) vid6_indi_pane_g1_ParamLimits

0x09a1,	// (0x00033cf7) vid6_indi_pane_g1

0x09b3,	// (0x00033d09) vid6_indi_pane_g2_ParamLimits

0x09b3,	// (0x00033d09) vid6_indi_pane_g2

0x09c5,	// (0x00033d1b) vid6_indi_pane_g3_ParamLimits

0x09c5,	// (0x00033d1b) vid6_indi_pane_g3

0x09da,	// (0x00033d30) vid6_indi_pane_g4_ParamLimits

0x09da,	// (0x00033d30) vid6_indi_pane_g4

0x09ef,	// (0x00033d45) vid6_indi_pane_g5_ParamLimits

0x09ef,	// (0x00033d45) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x00042eee) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x00042eee) vid6_indi_pane_g

0x0a09,	// (0x00033d5f) vid6_indi_pane_t1_ParamLimits

0x0a09,	// (0x00033d5f) vid6_indi_pane_t1

0x0a1f,	// (0x00033d75) vid6_indi_pane_t2_ParamLimits

0x0a1f,	// (0x00033d75) vid6_indi_pane_t2

0x0a47,	// (0x00033d9d) vid6_indi_pane_t3_ParamLimits

0x0a47,	// (0x00033d9d) vid6_indi_pane_t3

0x0a6f,	// (0x00033dc5) vid6_indi_pane_t4_ParamLimits

0x0a6f,	// (0x00033dc5) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x00042ef9) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x00042ef9) vid6_indi_pane_t

0x0a93,	// (0x00033de9) wait_bar_pane_cp08

0xa602,	// (0x0003d958) main_cset_text2_pane_t1_ParamLimits

0xa602,	// (0x0003d958) main_cset_text2_pane_t1

0xa550,	// (0x0003d8a6) listscroll_gen_pane_cp06_t1_ParamLimits

0xa550,	// (0x0003d8a6) listscroll_gen_pane_cp06_t1

0x422a,	// (0x00037580) main_cam6_set_pane

0xe903,	// (0x00041c59) bg_tb_trans_pane_cp06_ParamLimits

0x9246,	// (0x0003c59c) cam4_indicators_pane_g1_ParamLimits

0x9257,	// (0x0003c5ad) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x00042c67) cam4_indicators_pane_g_ParamLimits

0x9275,	// (0x0003c5cb) cam4_indicators_pane_t1_ParamLimits

0x72db,	// (0x0003a631) bg_tb_trans_pane_cp07_ParamLimits

0x9246,	// (0x0003c59c) vid4_indicators_pane_g1_ParamLimits

0x9325,	// (0x0003c67b) vid4_indicators_pane_g2_ParamLimits

0x9336,	// (0x0003c68c) vid4_indicators_pane_g3_ParamLimits

0x9347,	// (0x0003c69d) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x00042c79) vid4_indicators_pane_g_ParamLimits

0x9363,	// (0x0003c6b9) vid4_indicators_pane_t1_ParamLimits

0xa156,	// (0x0003d4ac) vid4_progress_pane_g1_ParamLimits

0xa166,	// (0x0003d4bc) vid4_progress_pane_g2_ParamLimits

0xa176,	// (0x0003d4cc) vid4_progress_pane_g3_ParamLimits

0x9257,	// (0x0003c5ad) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x00042e2a) vid4_progress_pane_g_ParamLimits

0xa182,	// (0x0003d4d8) vid4_progress_pane_t1_ParamLimits

0xa197,	// (0x0003d4ed) vid4_progress_pane_t2_ParamLimits

0xa1ad,	// (0x0003d503) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x00042e35) vid4_progress_pane_t_ParamLimits

0xa1c2,	// (0x0003d518) wait_bar_pane_cp07_ParamLimits

0xa640,	// (0x0003d996) main_cam6_set_pane_g2_ParamLimits

0xa640,	// (0x0003d996) main_cam6_set_pane_g2

0xa64c,	// (0x0003d9a2) main_cset6_listscroll_pane_ParamLimits

0xa64c,	// (0x0003d9a2) main_cset6_listscroll_pane

0xa677,	// (0x0003d9cd) main_cset6_slider_pane_ParamLimits

0xa677,	// (0x0003d9cd) main_cset6_slider_pane

0xa683,	// (0x0003d9d9) main_cset6_text2_pane_ParamLimits

0xa683,	// (0x0003d9d9) main_cset6_text2_pane

0x0aa2,	// (0x00033df8) main_cset6_text_pane

0x0aaa,	// (0x00033e00) main_cset_list_pane_copy1_ParamLimits

0x0aaa,	// (0x00033e00) main_cset_list_pane_copy1

0x0aba,	// (0x00033e10) scroll_pane_cp028_copy1

0xa696,	// (0x0003d9ec) cset_list_set_pane_copy1

0xa6b0,	// (0x0003da06) aid_position_infowindow_above_copy1

0xa6b8,	// (0x0003da0e) aid_position_infowindow_below_copy1

0x3782,	// (0x00036ad8) cset_list_set_pane_g1_copy1

0x34c0,	// (0x00036816) cset_list_set_pane_g3_copy1_ParamLimits

0x34c0,	// (0x00036816) cset_list_set_pane_g3_copy1

0x34cf,	// (0x00036825) cset_list_set_pane_t1_copy1_ParamLimits

0x34cf,	// (0x00036825) cset_list_set_pane_t1_copy1

0x72db,	// (0x0003a631) list_highlight_pane_cp021_copy1_ParamLimits

0x72db,	// (0x0003a631) list_highlight_pane_cp021_copy1

0x0aef,	// (0x00033e45) cset6_slider_pane_ParamLimits

0x0aef,	// (0x00033e45) cset6_slider_pane

0x0b1b,	// (0x00033e71) main_cset6_slider_pane_g1_ParamLimits

0x0b1b,	// (0x00033e71) main_cset6_slider_pane_g1

0xa6c0,	// (0x0003da16) main_cset6_slider_pane_g2_ParamLimits

0xa6c0,	// (0x0003da16) main_cset6_slider_pane_g2

0x0199,	// (0x000334ef) main_cset6_slider_pane_g3_ParamLimits

0x0199,	// (0x000334ef) main_cset6_slider_pane_g3

0xa6e8,	// (0x0003da3e) main_cset6_slider_pane_g4_ParamLimits

0xa6e8,	// (0x0003da3e) main_cset6_slider_pane_g4

0xa6f4,	// (0x0003da4a) main_cset6_slider_pane_g5_ParamLimits

0xa6f4,	// (0x0003da4a) main_cset6_slider_pane_g5

0x0199,	// (0x000334ef) main_cset6_slider_pane_g7_ParamLimits

0x0199,	// (0x000334ef) main_cset6_slider_pane_g7

0x01a5,	// (0x000334fb) main_cset6_slider_pane_g8_ParamLimits

0x01a5,	// (0x000334fb) main_cset6_slider_pane_g8

0xa702,	// (0x0003da58) main_cset6_slider_pane_g9_ParamLimits

0xa702,	// (0x0003da58) main_cset6_slider_pane_g9

0xa70e,	// (0x0003da64) main_cset6_slider_pane_g10_ParamLimits

0xa70e,	// (0x0003da64) main_cset6_slider_pane_g10

0xa6e8,	// (0x0003da3e) main_cset6_slider_pane_g11_ParamLimits

0xa6e8,	// (0x0003da3e) main_cset6_slider_pane_g11

0xa71a,	// (0x0003da70) main_cset6_slider_pane_g12_ParamLimits

0xa71a,	// (0x0003da70) main_cset6_slider_pane_g12

0xa726,	// (0x0003da7c) main_cset6_slider_pane_g13_ParamLimits

0xa726,	// (0x0003da7c) main_cset6_slider_pane_g13

0xa734,	// (0x0003da8a) main_cset6_slider_pane_g14_ParamLimits

0xa734,	// (0x0003da8a) main_cset6_slider_pane_g14

0xa742,	// (0x0003da98) main_cset6_slider_pane_g15_ParamLimits

0xa742,	// (0x0003da98) main_cset6_slider_pane_g15

0xa6f4,	// (0x0003da4a) main_cset6_slider_pane_g16_ParamLimits

0xa6f4,	// (0x0003da4a) main_cset6_slider_pane_g16

0xa75a,	// (0x0003dab0) main_cset6_slider_pane_g17_ParamLimits

0xa75a,	// (0x0003dab0) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x00042f02) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x00042f02) main_cset6_slider_pane_g

0x0b43,	// (0x00033e99) main_cset6_slider_pane_t1_ParamLimits

0x0b43,	// (0x00033e99) main_cset6_slider_pane_t1

0xa768,	// (0x0003dabe) main_cset6_slider_pane_t2_ParamLimits

0xa768,	// (0x0003dabe) main_cset6_slider_pane_t2

0xa793,	// (0x0003dae9) main_cset6_slider_pane_t3_ParamLimits

0xa793,	// (0x0003dae9) main_cset6_slider_pane_t3

0xa7be,	// (0x0003db14) main_cset6_slider_pane_t4_ParamLimits

0xa7be,	// (0x0003db14) main_cset6_slider_pane_t4

0xa7eb,	// (0x0003db41) main_cset6_slider_pane_t5_ParamLimits

0xa7eb,	// (0x0003db41) main_cset6_slider_pane_t5

0x0b84,	// (0x00033eda) main_cset6_slider_pane_t7_ParamLimits

0x0b84,	// (0x00033eda) main_cset6_slider_pane_t7

0xa818,	// (0x0003db6e) main_cset6_slider_pane_t8_ParamLimits

0xa818,	// (0x0003db6e) main_cset6_slider_pane_t8

0xa83c,	// (0x0003db92) main_cset6_slider_pane_t9_ParamLimits

0xa83c,	// (0x0003db92) main_cset6_slider_pane_t9

0xa860,	// (0x0003dbb6) main_cset6_slider_pane_t10_ParamLimits

0xa860,	// (0x0003dbb6) main_cset6_slider_pane_t10

0xa884,	// (0x0003dbda) main_cset6_slider_pane_t11_ParamLimits

0xa884,	// (0x0003dbda) main_cset6_slider_pane_t11

0x0bba,	// (0x00033f10) main_cset6_slider_pane_t14_ParamLimits

0x0bba,	// (0x00033f10) main_cset6_slider_pane_t14

0x0bf3,	// (0x00033f49) main_cset6_slider_pane_t15_ParamLimits

0x0bf3,	// (0x00033f49) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x00042f27) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x00042f27) main_cset6_slider_pane_t

0x0c2c,	// (0x00033f82) cset_slider_pane_g1_copy1

0x0c35,	// (0x00033f8b) cset_slider_pane_g2_copy1

0x0c3e,	// (0x00033f94) cset_slider_pane_g3_copy1

0x422a,	// (0x00037580) bg_popup_sub_pane_cp011_copy1

0x037c,	// (0x000336d2) main_cset_text_pane_g1_copy1

0x0384,	// (0x000336da) main_cset_text_pane_t1_copy1

0x0392,	// (0x000336e8) main_cset_text_pane_t2_copy1

0x03a0,	// (0x000336f6) main_cset_text_pane_t3_copy1

0x03ae,	// (0x00033704) main_cset_text_pane_t4_copy1

0x03bc,	// (0x00033712) main_cset_text_pane_t5_copy1

0x03ca,	// (0x00033720) main_cset_text_pane_t6_copy1

0x03d8,	// (0x0003372e) main_cset_text_pane_t7_copy1

0xa8aa,	// (0x0003dc00) main_cset_text2_pane_t1_copy1

0x422a,	// (0x00037580) main_ncimui_pane

0x7328,	// (0x0003a67e) popup_query_ncimui_window_ParamLimits

0x7328,	// (0x0003a67e) popup_query_ncimui_window

0x3372,	// (0x000366c8) field_cale_ev2_pane_g4_ParamLimits

0x3372,	// (0x000366c8) field_cale_ev2_pane_g4

0x8bdb,	// (0x0003bf31) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8bdb,	// (0x0003bf31) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x00042c05) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x00042c05) cell_video_dialer_keypad_pane_g

0x8bf3,	// (0x0003bf49) cell_video_dialer_keypad_pane_t1

0x422a,	// (0x00037580) bg_popup_window_pane_cp012

0xcba6,	// (0x0003fefc) heading_pane_cp06

0x0d36,	// (0x0003408c) ncim_query_content_pane

0x422a,	// (0x00037580) bg_popup_heading_pane_cp01

0x0d3e,	// (0x00034094) ncim_heading_pane_t1

0x0d4c,	// (0x000340a2) ncim_indicator_popup_pane

0x0d5e,	// (0x000340b4) ncim_query_button_pane

0x0d72,	// (0x000340c8) ncim_query_content_pane_t1

0x0d84,	// (0x000340da) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x00042f66) ncim_query_content_pane_t

0x0dbe,	// (0x00034114) ncim_query_list_pane

0x0dd0,	// (0x00034126) ncim_query_popup_pane

0x0d4c,	// (0x000340a2) ncim_indicator_popup_pane_ParamLimits

0xa9d7,	// (0x0003dd2d) ncim_query_content_pane_g1_ParamLimits

0xa9d7,	// (0x0003dd2d) ncim_query_content_pane_g1

0x0d72,	// (0x000340c8) ncim_query_content_pane_t1_ParamLimits

0x0d84,	// (0x000340da) ncim_query_content_pane_t2_ParamLimits

0xa9e3,	// (0x0003dd39) ncim_query_content_pane_t3_ParamLimits

0xa9e3,	// (0x0003dd39) ncim_query_content_pane_t3

0xaa00,	// (0x0003dd56) ncim_query_content_pane_t4_ParamLimits

0xaa00,	// (0x0003dd56) ncim_query_content_pane_t4

0xaa1d,	// (0x0003dd73) ncim_query_content_pane_t5_ParamLimits

0xaa1d,	// (0x0003dd73) ncim_query_content_pane_t5

0x0d96,	// (0x000340ec) ncim_query_content_pane_t6_ParamLimits

0x0d96,	// (0x000340ec) ncim_query_content_pane_t6

0xfc10,	// (0x00042f66) ncim_query_content_pane_t_ParamLimits

0x0dbe,	// (0x00034114) ncim_query_list_pane_ParamLimits

0x0dd0,	// (0x00034126) ncim_query_popup_pane_ParamLimits

0x0de4,	// (0x0003413a) wait_bar_pane_cp04

0x422a,	// (0x00037580) input_focus_pane_cp011

0x0dec,	// (0x00034142) ncim_query_popup_pane_t1

0x0dfa,	// (0x00034150) ncim_list_query_list_pane_ParamLimits

0x0dfa,	// (0x00034150) ncim_list_query_list_pane

0x422a,	// (0x00037580) bg_button_pane_cp027

0x0e0d,	// (0x00034163) ncim_query_button_pane_g1

0x422a,	// (0x00037580) list_highlight_pane_cp012

0x0e17,	// (0x0003416d) ncim_list_query_list_pane_g1

0x0e1f,	// (0x00034175) ncim_list_query_list_pane_t1

0x9266,	// (0x0003c5bc) cam4_indicators_pane_g3_ParamLimits

0x9266,	// (0x0003c5bc) cam4_indicators_pane_g3

0x9353,	// (0x0003c6a9) vid4_indicators_pane_g5_ParamLimits

0x9353,	// (0x0003c6a9) vid4_indicators_pane_g5

0x9266,	// (0x0003c5bc) vid4_progress_pane_g5_ParamLimits

0x9266,	// (0x0003c5bc) vid4_progress_pane_g5

0xa8f0,	// (0x0003dc46) main_ncimui_pane_g1

0xa946,	// (0x0003dc9c) ncimui_group_query_pane_ParamLimits

0xa946,	// (0x0003dc9c) ncimui_group_query_pane

0xa982,	// (0x0003dcd8) ncimui_list_pane_ParamLimits

0xa982,	// (0x0003dcd8) ncimui_list_pane

0xa9a3,	// (0x0003dcf9) ncimui_text_pane_ParamLimits

0xa9a3,	// (0x0003dcf9) ncimui_text_pane

0xaa3a,	// (0x0003dd90) ncimui_text_pane_t1_ParamLimits

0xaa3a,	// (0x0003dd90) ncimui_text_pane_t1

0x0e2d,	// (0x00034183) ncimui_list_single_graphic_pane_ParamLimits

0x0e2d,	// (0x00034183) ncimui_list_single_graphic_pane

0xaa59,	// (0x0003ddaf) ncimui_query_pane_ParamLimits

0xaa59,	// (0x0003ddaf) ncimui_query_pane

0x422a,	// (0x00037580) list_highlight_pane_cp013

0x0e3d,	// (0x00034193) ncim_list_query_list_pane_t1_copy1

0x0e17,	// (0x0003416d) ncim_list_single_graphic_pane_g1

0x0e4b,	// (0x000341a1) ncim_query_button_pane_cp01

0x0e57,	// (0x000341ad) ncim_query_entry_pane_ParamLimits

0x0e57,	// (0x000341ad) ncim_query_entry_pane

0x0e6a,	// (0x000341c0) ncimui_query_pane_g1

0x0e76,	// (0x000341cc) ncimui_query_pane_t1_ParamLimits

0x0e76,	// (0x000341cc) ncimui_query_pane_t1

0x72db,	// (0x0003a631) input_focus_pane_cp012

0x0e8f,	// (0x000341e5) ncim_query_entry_pane_t1

0xc399,	// (0x0003f6ef) main_im_pane_ParamLimits

0x72db,	// (0x0003a631) main_mobtv_pane_ParamLimits

0x72db,	// (0x0003a631) main_mobtv_pane

0xa702,	// (0x0003da58) main_cset6_slider_pane_g18_ParamLimits

0xa702,	// (0x0003da58) main_cset6_slider_pane_g18

0xa726,	// (0x0003da7c) main_cset6_slider_pane_g19_ParamLimits

0xa726,	// (0x0003da7c) main_cset6_slider_pane_g19

0xf0d9,	// (0x0004242f) bg_main_mobtv_pane_ParamLimits

0xf0d9,	// (0x0004242f) bg_main_mobtv_pane

0xaa6c,	// (0x0003ddc2) main_mobtv_info_pane

0xaa77,	// (0x0003ddcd) main_mobtv_loading_pane_ParamLimits

0xaa77,	// (0x0003ddcd) main_mobtv_loading_pane

0x0eaf,	// (0x00034205) main_mobtv_pg_channel_list_pane

0x0eb9,	// (0x0003420f) main_mobtv_pg_hdr_pane

0xaa84,	// (0x0003ddda) main_mobtv_programe_curr_pane_ParamLimits

0xaa84,	// (0x0003ddda) main_mobtv_programe_curr_pane

0xaa91,	// (0x0003dde7) main_mobtv_programe_next_pane_ParamLimits

0xaa91,	// (0x0003dde7) main_mobtv_programe_next_pane

0x0ec2,	// (0x00034218) popup_mobtv_noti_window

0xe69c,	// (0x000419f2) main_tv_pg_hdr_pane_g1

0x0eca,	// (0x00034220) main_tv_pg_hdr_pane_g2

0x0ed2,	// (0x00034228) main_tv_pg_hdr_pane_g3

0x0eda,	// (0x00034230) main_tv_pg_hdr_pane_g4

0x0ee2,	// (0x00034238) main_tv_pg_hdr_pane_g5

0x0eec,	// (0x00034242) main_tv_pg_hdr_pane_g6

0x0ef6,	// (0x0003424c) main_tv_pg_hdr_pane_g7

0x0f00,	// (0x00034256) main_tv_pg_hdr_pane_g8

0x0f0a,	// (0x00034260) main_tv_pg_hdr_pane_g9

0x0f14,	// (0x0003426a) main_tv_pg_hdr_pane_g10

0x0f1e,	// (0x00034274) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x00042f73) main_tv_pg_hdr_pane_g

0x0f28,	// (0x0003427e) main_tv_pg_hdr_pane_t1

0x0f36,	// (0x0003428c) main_tv_pg_hdr_pane_t2

0x0f44,	// (0x0003429a) main_tv_pg_hdr_pane_t3

0x0f54,	// (0x000342aa) main_tv_pg_hdr_pane_t4

0x0f64,	// (0x000342ba) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x00042f8a) main_tv_pg_hdr_pane_t

0x0f74,	// (0x000342ca) single_mobtv_pg_channel_pane_ParamLimits

0x0f74,	// (0x000342ca) single_mobtv_pg_channel_pane

0x0f86,	// (0x000342dc) single_mobtv_pg_channel_table_pane

0x0f8f,	// (0x000342e5) single_mobtv_pg_channel_thumb_pane

0x0f98,	// (0x000342ee) single_tv_pg_channel_pane_g1

0x0fa1,	// (0x000342f7) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x00042f95) single_tv_pg_channel_pane_g

0xe903,	// (0x00041c59) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe903,	// (0x00041c59) bg_single_mobtv_pg_channel_thumb_pane

0x0faa,	// (0x00034300) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x0faa,	// (0x00034300) single_mobtv_pg_channel_thumb_pane_g1

0x0fb8,	// (0x0003430e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x0fb8,	// (0x0003430e) single_mobtv_pg_channel_thumb_pane_g2

0x0fc4,	// (0x0003431a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x0fc4,	// (0x0003431a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x00042f9a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x00042f9a) single_mobtv_pg_channel_thumb_pane_g

0x0fd0,	// (0x00034326) single_mobtv_pg_channel_thumb_pane_t1

0x0fde,	// (0x00034334) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x00042fa1) single_mobtv_pg_channel_thumb_pane_t

0xe69c,	// (0x000419f2) bg_single_mobtv_pg_channel_table_pane_g1

0xe69c,	// (0x000419f2) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x00042a51) bg_single_mobtv_pg_channel_table_pane_g

0x0fec,	// (0x00034342) single_mobtv_pg_channel_table_pane_t1

0x0ffa,	// (0x00034350) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x00042fa6) single_mobtv_pg_channel_table_pane_t

0xaaa6,	// (0x0003ddfc) main_mobtv_info_pane_g1_ParamLimits

0xaaa6,	// (0x0003ddfc) main_mobtv_info_pane_g1

0xaac2,	// (0x0003de18) main_mobtv_info_pane_t1_ParamLimits

0xaac2,	// (0x0003de18) main_mobtv_info_pane_t1

0xab3a,	// (0x0003de90) main_mobtv_info_pane_t2_ParamLimits

0xab3a,	// (0x0003de90) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x00042fb0) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x00042fb0) main_mobtv_info_pane_t

0xabc9,	// (0x0003df1f) wait_bar_pane_cp05

0xabdb,	// (0x0003df31) main_mobtv_loading_pane_g1_ParamLimits

0xabdb,	// (0x0003df31) main_mobtv_loading_pane_g1

0xabe9,	// (0x0003df3f) main_mobtv_loading_pane_g2_ParamLimits

0xabe9,	// (0x0003df3f) main_mobtv_loading_pane_g2

0xabf5,	// (0x0003df4b) main_mobtv_loading_pane_g3_ParamLimits

0xabf5,	// (0x0003df4b) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x00042fb7) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x00042fb7) main_mobtv_loading_pane_g

0x1008,	// (0x0003435e) main_mobtv_loading_pane_t1_ParamLimits

0x1008,	// (0x0003435e) main_mobtv_loading_pane_t1

0x1020,	// (0x00034376) main_mobtv_loading_pane_t2_ParamLimits

0x1020,	// (0x00034376) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x00042fbe) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x00042fbe) main_mobtv_loading_pane_t

0xac03,	// (0x0003df59) wait_bar_pane_cp06_ParamLimits

0xac03,	// (0x0003df59) wait_bar_pane_cp06

0x1044,	// (0x0003439a) main_mobtv_programe_curr_pane_t1

0x1052,	// (0x000343a8) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x00042fc3) main_mobtv_programe_curr_pane_t

0x1060,	// (0x000343b6) main_mobtv_programe_next_pane_t1

0x106e,	// (0x000343c4) main_mobtv_programe_next_pane_t2

0x107c,	// (0x000343d2) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x00042fc8) main_mobtv_programe_next_pane_t

0x422a,	// (0x00037580) bg_popup_mobtv_noti_window_pane

0x108a,	// (0x000343e0) popup_mobtv_noti_window_g1

0x1092,	// (0x000343e8) popup_mobtv_noti_window_t1

0x10a0,	// (0x000343f6) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x00042fcf) popup_mobtv_noti_window_t

0xe69c,	// (0x000419f2) bg_popup_mobtv_noti_window_pane_g1

0x422a,	// (0x00037580) sc_clock_pane

0x422a,	// (0x00037580) main_fs_bigclock_pane

0xa35a,	// (0x0003d6b0) blid2_tripm_pane_t4_ParamLimits

0xa35a,	// (0x0003d6b0) blid2_tripm_pane_t4

0xac0f,	// (0x0003df65) sc_clock_pane_g1_ParamLimits

0xac0f,	// (0x0003df65) sc_clock_pane_g1

0xac1d,	// (0x0003df73) sc_clock_pane_t1_ParamLimits

0xac1d,	// (0x0003df73) sc_clock_pane_t1

0xac30,	// (0x0003df86) sc_clock_pane_t2_ParamLimits

0xac30,	// (0x0003df86) sc_clock_pane_t2

0xac42,	// (0x0003df98) sc_clock_pane_t3_ParamLimits

0xac42,	// (0x0003df98) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x00042fd4) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x00042fd4) sc_clock_pane_t

0xb484,	// (0x0003e7da) main_fs_bigclock_indicator_pane_ParamLimits

0xb484,	// (0x0003e7da) main_fs_bigclock_indicator_pane

0xacce,	// (0x0003e024) main_fs_bigclock_pane_g1_ParamLimits

0xacce,	// (0x0003e024) main_fs_bigclock_pane_g1

0xb490,	// (0x0003e7e6) main_fs_bigclock_pane_t1_ParamLimits

0xb490,	// (0x0003e7e6) main_fs_bigclock_pane_t1

0xb4a2,	// (0x0003e7f8) main_fs_bigclock_pane_t2_ParamLimits

0xb4a2,	// (0x0003e7f8) main_fs_bigclock_pane_t2

0xb4b4,	// (0x0003e80a) main_fs_bigclock_pane_t3_ParamLimits

0xb4b4,	// (0x0003e80a) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x000431d8) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x000431d8) main_fs_bigclock_pane_t

0x1d67,	// (0x000350bd) main_fs_bigclock_indicator_pane_g1

0x0d66,	// (0x000340bc) ncim_query_content_pane_g2_ParamLimits

0x0d66,	// (0x000340bc) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x00042f61) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x00042f61) ncim_query_content_pane_g

0xac56,	// (0x0003dfac) sc_clock_pane_t4_ParamLimits

0xac56,	// (0x0003dfac) sc_clock_pane_t4

0x72db,	// (0x0003a631) main_radioblah_pane

0xf038,	// (0x0004238e) cell_call4_button_pane_t1_copy1_ParamLimits

0xf038,	// (0x0004238e) cell_call4_button_pane_t1_copy1

0xa8f8,	// (0x0003dc4e) main_ncimui_pane_t1_ParamLimits

0xa8f8,	// (0x0003dc4e) main_ncimui_pane_t1

0xa912,	// (0x0003dc68) main_ncimui_pane_t2_ParamLimits

0xa912,	// (0x0003dc68) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x00042f5a) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x00042f5a) main_ncimui_pane_t

0x11e9,	// (0x0003453f) main_radioblah_anim_pane_ParamLimits

0x11e9,	// (0x0003453f) main_radioblah_anim_pane

0x11fa,	// (0x00034550) main_radioblah_info_pane_ParamLimits

0x11fa,	// (0x00034550) main_radioblah_info_pane

0x120e,	// (0x00034564) main_radioblah_pane_t1_ParamLimits

0x120e,	// (0x00034564) main_radioblah_pane_t1

0x122a,	// (0x00034580) main_radioblah_pane_t2_ParamLimits

0x122a,	// (0x00034580) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x00042ff5) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x00042ff5) main_radioblah_pane_t

0xad20,	// (0x0003e076) main_radioblah_rocker_ctrl_pane_ParamLimits

0xad20,	// (0x0003e076) main_radioblah_rocker_ctrl_pane

0x1272,	// (0x000345c8) main_radioblah_info_pane_t1_ParamLimits

0x1272,	// (0x000345c8) main_radioblah_info_pane_t1

0xad65,	// (0x0003e0bb) main_radioblah_info_pane_t2_ParamLimits

0xad65,	// (0x0003e0bb) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x00042ffe) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x00042ffe) main_radioblah_info_pane_t

0xe69c,	// (0x000419f2) main_radioblah_rocker_ctrl_pane_g1

0xae15,	// (0x0003e16b) main_radioblah_rocker_ctrl_pane_g2

0xae1d,	// (0x0003e173) main_radioblah_rocker_ctrl_pane_g3

0xae25,	// (0x0003e17b) main_radioblah_rocker_ctrl_pane_g4

0xae2d,	// (0x0003e183) main_radioblah_rocker_ctrl_pane_g5

0xae35,	// (0x0003e18b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x00043007) main_radioblah_rocker_ctrl_pane_g

0xa8aa,	// (0x0003dc00) main_cset_text2_pane_t1_copy1_ParamLimits

0x9194,	// (0x0003c4ea) cam4_image_uncrop_qvga_pane

0x92db,	// (0x0003c631) vid4_image_uncrop_qcif_pane

0xa4e8,	// (0x0003d83e) cam6_image_uncrop_qvga_pane_ParamLimits

0xa4e8,	// (0x0003d83e) cam6_image_uncrop_qvga_pane

0x0985,	// (0x00033cdb) vid6_image_uncrop_qcif_pane_ParamLimits

0x0985,	// (0x00033cdb) vid6_image_uncrop_qcif_pane

0x422a,	// (0x00037580) bg_popup_preview_window_pane_cp03

0x0d18,	// (0x0003406e) list_cset_text2_pane

0x0d20,	// (0x00034076) main_cset6_text2_pane_g1

0x0d28,	// (0x0003407e) main_cset6_text2_pane_t1

0xae3d,	// (0x0003e193) list_cset_text2_pane_t1_ParamLimits

0xae3d,	// (0x0003e193) list_cset_text2_pane_t1

0x72db,	// (0x0003a631) main_radioblah_pane_ParamLimits

0xabb5,	// (0x0003df0b) main_mobtv_info_pane_t3_ParamLimits

0xabb5,	// (0x0003df0b) main_mobtv_info_pane_t3

0xad0e,	// (0x0003e064) main_radioblah_pane_g1

0xad39,	// (0x0003e08f) main_radioblah_info_pane_g1

0xadba,	// (0x0003e110) main_radioblah_info_pane_t3_ParamLimits

0xadba,	// (0x0003e110) main_radioblah_info_pane_t3

0x5ff6,	// (0x0003934c) highlight_cell_cale_month_pane_ParamLimits

0x5ff6,	// (0x0003934c) highlight_cell_cale_month_pane

0x422a,	// (0x00037580) main_phob_fisheye_pane

0xe9eb,	// (0x00041d41) scroll_pane_cp0031_ParamLimits

0xe9eb,	// (0x00041d41) scroll_pane_cp0031

0x0a93,	// (0x00033de9) wait_bar_pane_cp08_ParamLimits

0xa696,	// (0x0003d9ec) cset_list_set_pane_copy1_ParamLimits

0x12ac,	// (0x00034602) highlight_cell_cale_month_pane_g1

0xae68,	// (0x0003e1be) highlight_cell_cale_month_pane_t1

0x0648,	// (0x0003399e) list_gen_pane_cp01

0x0184,	// (0x000334da) scroll_pane_01

0x385b,	// (0x00036bb1) list_single_double_fisheye_pane

0x3864,	// (0x00036bba) list_double_fisheye_pane_g1_ParamLimits

0x3864,	// (0x00036bba) list_double_fisheye_pane_g1

0x3870,	// (0x00036bc6) list_double_fisheye_pane_g2_ParamLimits

0x3870,	// (0x00036bc6) list_double_fisheye_pane_g2

0x3884,	// (0x00036bda) list_double_fisheye_pane_g3_ParamLimits

0x3884,	// (0x00036bda) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x00043014) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x00043014) list_double_fisheye_pane_g

0x38ad,	// (0x00036c03) list_double_fisheye_pane_t1_ParamLimits

0x38ad,	// (0x00036c03) list_double_fisheye_pane_t1

0x38c8,	// (0x00036c1e) list_double_fisheye_pane_t2_ParamLimits

0x38c8,	// (0x00036c1e) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x0004301f) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x0004301f) list_double_fisheye_pane_t

0x422a,	// (0x00037580) main_call5_pane

0xac7c,	// (0x0003dfd2) sc_swipe_pane_ParamLimits

0xac7c,	// (0x0003dfd2) sc_swipe_pane

0xae82,	// (0x0003e1d8) call5_image_pane_ParamLimits

0xae82,	// (0x0003e1d8) call5_image_pane

0xae92,	// (0x0003e1e8) call5_swipe_1_pane_ParamLimits

0xae92,	// (0x0003e1e8) call5_swipe_1_pane

0xae9e,	// (0x0003e1f4) call5_swipe_2_pane_ParamLimits

0xae9e,	// (0x0003e1f4) call5_swipe_2_pane

0xaeb8,	// (0x0003e20e) popup_call5_audio_first_window_ParamLimits

0xaeb8,	// (0x0003e20e) popup_call5_audio_first_window

0xe903,	// (0x00041c59) call5_swipe_1_pane_g1_ParamLimits

0xe903,	// (0x00041c59) call5_swipe_1_pane_g1

0x1343,	// (0x00034699) call5_swipe_1_pane_g2_ParamLimits

0x1343,	// (0x00034699) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x00043024) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x00043024) call5_swipe_1_pane_g

0x134f,	// (0x000346a5) call5_swipe_1_pane_t1_ParamLimits

0x134f,	// (0x000346a5) call5_swipe_1_pane_t1

0xe903,	// (0x00041c59) call5_swipe_2_pane_g1_ParamLimits

0xe903,	// (0x00041c59) call5_swipe_2_pane_g1

0x1364,	// (0x000346ba) call5_swipe_2_pane_g2_ParamLimits

0x1364,	// (0x000346ba) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x00043029) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x00043029) call5_swipe_2_pane_g

0x1370,	// (0x000346c6) call5_swipe_2_pane_t1_ParamLimits

0x1370,	// (0x000346c6) call5_swipe_2_pane_t1

0x1385,	// (0x000346db) sc_swipe_pane_g1_ParamLimits

0x1385,	// (0x000346db) sc_swipe_pane_g1

0x1392,	// (0x000346e8) sc_swipe_pane_g2_ParamLimits

0x1392,	// (0x000346e8) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x0004302e) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x0004302e) sc_swipe_pane_g

0x139e,	// (0x000346f4) sc_swipe_pane_t1_ParamLimits

0x139e,	// (0x000346f4) sc_swipe_pane_t1

0x422a,	// (0x00037580) main_cmail_launcher_pane

0xaec6,	// (0x0003e21c) aid_size_cell_cmail_l_ParamLimits

0xaec6,	// (0x0003e21c) aid_size_cell_cmail_l

0xaed6,	// (0x0003e22c) grid_cmail_l_pane_ParamLimits

0xaed6,	// (0x0003e22c) grid_cmail_l_pane

0xaee6,	// (0x0003e23c) cell_cmail_l_pane_ParamLimits

0xaee6,	// (0x0003e23c) cell_cmail_l_pane

0xaefa,	// (0x0003e250) cell_cmail_l_pane_g1_ParamLimits

0xaefa,	// (0x0003e250) cell_cmail_l_pane_g1

0xaf06,	// (0x0003e25c) cell_cmail_l_pane_t1_ParamLimits

0xaf06,	// (0x0003e25c) cell_cmail_l_pane_t1

0x13b3,	// (0x00034709) cell_cmail_l_pane_t2_ParamLimits

0x13b3,	// (0x00034709) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x00043033) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x00043033) cell_cmail_l_pane_t

0x72db,	// (0x0003a631) grid_highlight_pane_cp018_ParamLimits

0x72db,	// (0x0003a631) grid_highlight_pane_cp018

0x4355,	// (0x000376ab) main2_pane_ParamLimits

0x4355,	// (0x000376ab) main2_pane

0xc444,	// (0x0003f79a) popup_sp_fs_action_menu_bg_pane_g1

0xc44c,	// (0x0003f7a2) popup_sp_fs_action_menu_bg_pane_g2

0xc454,	// (0x0003f7aa) popup_sp_fs_action_menu_bg_pane_g3

0xc45c,	// (0x0003f7b2) popup_sp_fs_action_menu_bg_pane_g4

0xc464,	// (0x0003f7ba) popup_sp_fs_action_menu_bg_pane_g5

0xc46c,	// (0x0003f7c2) popup_sp_fs_action_menu_bg_pane_g6

0xc474,	// (0x0003f7ca) popup_sp_fs_action_menu_bg_pane_g7

0xc47c,	// (0x0003f7d2) popup_sp_fs_action_menu_bg_pane_g8

0xc484,	// (0x0003f7da) popup_sp_fs_action_menu_bg_pane_g9

0xc48c,	// (0x0003f7e2) popup_sp_fs_action_menu_bg_pane_g10

0xc48c,	// (0x0003f7e2) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x000424fd) popup_sp_fs_action_menu_bg_pane_g

0x304f,	// (0x000363a5) list_medium_line_x2_t3_g3_g1_ParamLimits

0x304f,	// (0x000363a5) list_medium_line_x2_t3_g3_g1

0x305b,	// (0x000363b1) list_medium_line_x2_t3_g3_g2_ParamLimits

0x305b,	// (0x000363b1) list_medium_line_x2_t3_g3_g2

0x3067,	// (0x000363bd) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3067,	// (0x000363bd) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x000425ad) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x000425ad) list_medium_line_x2_t3_g3_g

0x3073,	// (0x000363c9) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3073,	// (0x000363c9) list_medium_line_x2_t3_g3_t1

0x3088,	// (0x000363de) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3088,	// (0x000363de) list_medium_line_x2_t3_g3_t2

0x309c,	// (0x000363f2) list_medium_line_x2_t3_g3_t3_ParamLimits

0x309c,	// (0x000363f2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x000425b4) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x000425b4) list_medium_line_x2_t3_g3_t

0x304f,	// (0x000363a5) list_medium_line_x2_t3_g2_g1_ParamLimits

0x304f,	// (0x000363a5) list_medium_line_x2_t3_g2_g1

0x3067,	// (0x000363bd) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3067,	// (0x000363bd) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x000425bb) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x000425bb) list_medium_line_x2_t3_g2_g

0x30b1,	// (0x00036407) list_medium_line_x2_t3_g2_t1_ParamLimits

0x30b1,	// (0x00036407) list_medium_line_x2_t3_g2_t1

0x30c7,	// (0x0003641d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x30c7,	// (0x0003641d) list_medium_line_x2_t3_g2_t2

0x309c,	// (0x000363f2) list_medium_line_x2_t3_g2_t3_ParamLimits

0x309c,	// (0x000363f2) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x000425c0) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x000425c0) list_medium_line_x2_t3_g2_t

0x304f,	// (0x000363a5) list_medium_line_x2_t4_g4_g1_ParamLimits

0x304f,	// (0x000363a5) list_medium_line_x2_t4_g4_g1

0x30d9,	// (0x0003642f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x30d9,	// (0x0003642f) list_medium_line_x2_t4_g4_g2

0x305b,	// (0x000363b1) list_medium_line_x2_t4_g4_g3_ParamLimits

0x305b,	// (0x000363b1) list_medium_line_x2_t4_g4_g3

0x30e5,	// (0x0003643b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x30e5,	// (0x0003643b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x000425c7) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x000425c7) list_medium_line_x2_t4_g4_g

0x30f1,	// (0x00036447) list_medium_line_x2_t4_g4_t1_ParamLimits

0x30f1,	// (0x00036447) list_medium_line_x2_t4_g4_t1

0x3108,	// (0x0003645e) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3108,	// (0x0003645e) list_medium_line_x2_t4_g4_t2

0x311d,	// (0x00036473) list_medium_line_x2_t4_g4_t3_ParamLimits

0x311d,	// (0x00036473) list_medium_line_x2_t4_g4_t3

0x312f,	// (0x00036485) list_medium_line_x2_t4_g4_t4_ParamLimits

0x312f,	// (0x00036485) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x000425d0) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x000425d0) list_medium_line_x2_t4_g4_t

0x304f,	// (0x000363a5) list_medium_line_x2_t2_g4_g1_ParamLimits

0x304f,	// (0x000363a5) list_medium_line_x2_t2_g4_g1

0x30d9,	// (0x0003642f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x30d9,	// (0x0003642f) list_medium_line_x2_t2_g4_g2

0x305b,	// (0x000363b1) list_medium_line_x2_t2_g4_g3_ParamLimits

0x305b,	// (0x000363b1) list_medium_line_x2_t2_g4_g3

0x3067,	// (0x000363bd) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3067,	// (0x000363bd) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x00042637) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x00042637) list_medium_line_x2_t2_g4_g

0x3141,	// (0x00036497) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3141,	// (0x00036497) list_medium_line_x2_t2_g4_t1

0x309c,	// (0x000363f2) list_medium_line_x2_t2_g4_t2_ParamLimits

0x309c,	// (0x000363f2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x00042640) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x00042640) list_medium_line_x2_t2_g4_t

0x304f,	// (0x000363a5) list_medium_line_x2_t2_g3_g1_ParamLimits

0x304f,	// (0x000363a5) list_medium_line_x2_t2_g3_g1

0x305b,	// (0x000363b1) list_medium_line_x2_t2_g3_g2_ParamLimits

0x305b,	// (0x000363b1) list_medium_line_x2_t2_g3_g2

0x3067,	// (0x000363bd) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3067,	// (0x000363bd) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x000425ad) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x000425ad) list_medium_line_x2_t2_g3_g

0x3156,	// (0x000364ac) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3156,	// (0x000364ac) list_medium_line_x2_t2_g3_t1

0x309c,	// (0x000363f2) list_medium_line_x2_t2_g3_t2_ParamLimits

0x309c,	// (0x000363f2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x00042645) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x00042645) list_medium_line_x2_t2_g3_t

0x6272,	// (0x000395c8) main_sp_fs_list_pane_ParamLimits

0x6272,	// (0x000395c8) main_sp_fs_list_pane

0x627e,	// (0x000395d4) sp_fs_scroll_pane_ParamLimits

0x627e,	// (0x000395d4) sp_fs_scroll_pane

0x316b,	// (0x000364c1) list_medium_line_x2_t3_t1

0x317b,	// (0x000364d1) list_medium_line_x2_t3_t2

0x3189,	// (0x000364df) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x00042690) list_medium_line_x2_t3_t

0x3197,	// (0x000364ed) list_medium_line_x3_t4_t1

0x31a7,	// (0x000364fd) list_medium_line_x3_t4_t2

0x31b5,	// (0x0003650b) list_medium_line_x3_t4_t3

0x3189,	// (0x000364df) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x00042697) list_medium_line_x3_t4_t

0x31c3,	// (0x00036519) list_medium_line_x4_t5_t1

0x31d3,	// (0x00036529) list_medium_line_x4_t5_t2

0x31b5,	// (0x0003650b) list_medium_line_x4_t5_t3

0x31e1,	// (0x00036537) list_medium_line_x4_t5_t4

0x3189,	// (0x000364df) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x000426a0) list_medium_line_x4_t5_t

0x304f,	// (0x000363a5) list_medium_line_t4_g4_g1_ParamLimits

0x304f,	// (0x000363a5) list_medium_line_t4_g4_g1

0x30e5,	// (0x0003643b) list_medium_line_t4_g4_g2_ParamLimits

0x30e5,	// (0x0003643b) list_medium_line_t4_g4_g2

0x31ef,	// (0x00036545) list_medium_line_t4_g4_g3_ParamLimits

0x31ef,	// (0x00036545) list_medium_line_t4_g4_g3

0x3067,	// (0x000363bd) list_medium_line_t4_g4_g4_ParamLimits

0x3067,	// (0x000363bd) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x000426ab) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x000426ab) list_medium_line_t4_g4_g

0x31fb,	// (0x00036551) list_medium_line_t4_g4_t1_ParamLimits

0x31fb,	// (0x00036551) list_medium_line_t4_g4_t1

0x3210,	// (0x00036566) list_medium_line_t4_g4_t2_ParamLimits

0x3210,	// (0x00036566) list_medium_line_t4_g4_t2

0x3225,	// (0x0003657b) list_medium_line_t4_g4_t3_ParamLimits

0x3225,	// (0x0003657b) list_medium_line_t4_g4_t3

0x309c,	// (0x000363f2) list_medium_line_t4_g4_t4_ParamLimits

0x309c,	// (0x000363f2) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x000426b4) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x000426b4) list_medium_line_t4_g4_t

0x6371,	// (0x000396c7) chi_dic_find_pane_g1

0x72f7,	// (0x0003a64d) main_tport_pane

0x34e4,	// (0x0003683a) list_medium_line_plain_t1

0x34f2,	// (0x00036848) list_medium_line_t2_g2_g1_ParamLimits

0x34f2,	// (0x00036848) list_medium_line_t2_g2_g1

0x34fe,	// (0x00036854) list_medium_line_t2_g2_g2_ParamLimits

0x34fe,	// (0x00036854) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x00042d70) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x00042d70) list_medium_line_t2_g2_g

0x350a,	// (0x00036860) list_medium_line_t2_g2_t1_ParamLimits

0x350a,	// (0x00036860) list_medium_line_t2_g2_t1

0x3524,	// (0x0003687a) list_medium_line_t2_g2_t2_ParamLimits

0x3524,	// (0x0003687a) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x00042d75) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x00042d75) list_medium_line_t2_g2_t

0x3743,	// (0x00036a99) aid_sp_fs_list_icon_a_sm

0x374b,	// (0x00036aa1) aid_sp_fs_list_icon_d

0x1b84,	// (0x00034eda) aid_sp_fs_text_primary

0x18dd,	// (0x00034c33) aid_sp_fs_text_secondary

0xdcf1,	// (0x00041047) list_medium_line

0xdcf1,	// (0x00041047) list_medium_line_g2

0xdcf1,	// (0x00041047) list_medium_line_g3

0xdcf1,	// (0x00041047) list_medium_line_plain

0xdcf1,	// (0x00041047) list_medium_line_plain_t2

0xdcf1,	// (0x00041047) list_medium_line_plain_t3

0xdcf1,	// (0x00041047) list_medium_line_right_icon

0xdcf1,	// (0x00041047) list_medium_line_right_iconx2

0xdcf1,	// (0x00041047) list_medium_line_t2

0xdcf1,	// (0x00041047) list_medium_line_t2_g2

0xdcf1,	// (0x00041047) list_medium_line_t2_g3

0xdcf1,	// (0x00041047) list_medium_line_t2_right_icon

0xdcf1,	// (0x00041047) list_medium_line_t2_right_iconx2

0xdcf1,	// (0x00041047) list_medium_line_t3

0xdcf1,	// (0x00041047) list_medium_line_t3_g2

0xdcf1,	// (0x00041047) list_medium_line_t3_g3

0xdcf1,	// (0x00041047) list_medium_line_t3_right_iconx2

0x3753,	// (0x00036aa9) list_medium_line_t4_g4

0x375c,	// (0x00036ab2) list_medium_line_x2

0x375c,	// (0x00036ab2) list_medium_line_x2_t2_g2

0x375c,	// (0x00036ab2) list_medium_line_x2_t2_g3

0x375c,	// (0x00036ab2) list_medium_line_x2_t2_g4

0x375c,	// (0x00036ab2) list_medium_line_x2_t3

0x375c,	// (0x00036ab2) list_medium_line_x2_t3_g2

0x375c,	// (0x00036ab2) list_medium_line_x2_t3_g3

0x375c,	// (0x00036ab2) list_medium_line_x2_t3_g4

0x375c,	// (0x00036ab2) list_medium_line_x2_t4_g2

0x375c,	// (0x00036ab2) list_medium_line_x2_t4_g4

0x3765,	// (0x00036abb) list_medium_line_x3

0x3765,	// (0x00036abb) list_medium_line_x3_t4

0x3765,	// (0x00036abb) list_medium_line_x3_t4_g4

0x3753,	// (0x00036aa9) list_medium_line_x4_t4

0x3753,	// (0x00036aa9) list_medium_line_x4_t4_g7

0x3753,	// (0x00036aa9) list_medium_line_x4_t5

0x376e,	// (0x00036ac4) list_single_fs_dyc_pane_ParamLimits

0x376e,	// (0x00036ac4) list_single_fs_dyc_pane

0x304f,	// (0x000363a5) list_medium_line_x4_t4_g7_g1_ParamLimits

0x304f,	// (0x000363a5) list_medium_line_x4_t4_g7_g1

0x378a,	// (0x00036ae0) list_medium_line_x4_t4_g7_g2_ParamLimits

0x378a,	// (0x00036ae0) list_medium_line_x4_t4_g7_g2

0x3796,	// (0x00036aec) list_medium_line_x4_t4_g7_g3_ParamLimits

0x3796,	// (0x00036aec) list_medium_line_x4_t4_g7_g3

0x37a5,	// (0x00036afb) list_medium_line_x4_t4_g7_g4_ParamLimits

0x37a5,	// (0x00036afb) list_medium_line_x4_t4_g7_g4

0x37b1,	// (0x00036b07) list_medium_line_x4_t4_g7_g5_ParamLimits

0x37b1,	// (0x00036b07) list_medium_line_x4_t4_g7_g5

0x37c0,	// (0x00036b16) list_medium_line_x4_t4_g7_g6_ParamLimits

0x37c0,	// (0x00036b16) list_medium_line_x4_t4_g7_g6

0x37cf,	// (0x00036b25) list_medium_line_x4_t4_g7_g7_ParamLimits

0x37cf,	// (0x00036b25) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x00042f40) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x00042f40) list_medium_line_x4_t4_g7_g

0x37db,	// (0x00036b31) list_medium_line_x4_t4_g7_t1_ParamLimits

0x37db,	// (0x00036b31) list_medium_line_x4_t4_g7_t1

0x37f0,	// (0x00036b46) list_medium_line_x4_t4_g7_t2_ParamLimits

0x37f0,	// (0x00036b46) list_medium_line_x4_t4_g7_t2

0x3805,	// (0x00036b5b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x3805,	// (0x00036b5b) list_medium_line_x4_t4_g7_t3

0x381a,	// (0x00036b70) list_medium_line_x4_t4_g7_t4_ParamLimits

0x381a,	// (0x00036b70) list_medium_line_x4_t4_g7_t4

0x382c,	// (0x00036b82) list_medium_line_x4_t4_g7_t5_ParamLimits

0x382c,	// (0x00036b82) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x00042f4f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x00042f4f) list_medium_line_x4_t4_g7_t

0x383e,	// (0x00036b94) list_single_dyc_row_pane_ParamLimits

0x383e,	// (0x00036b94) list_single_dyc_row_pane

0xae76,	// (0x0003e1cc) call5_gesture_pane_ParamLimits

0xae76,	// (0x0003e1cc) call5_gesture_pane

0xaeaa,	// (0x0003e200) call5_windows_pane_ParamLimits

0xaeaa,	// (0x0003e200) call5_windows_pane

0xaf1c,	// (0x0003e272) call5_swipe_1_pane_cp_ParamLimits

0xaf1c,	// (0x0003e272) call5_swipe_1_pane_cp

0xaf28,	// (0x0003e27e) call5_swipe_2_pane_cp_ParamLimits

0xaf28,	// (0x0003e27e) call5_swipe_2_pane_cp

0xce23,	// (0x00040179) call5_image_pane_cp

0xaf34,	// (0x0003e28a) popup_call5_audio_first_window_cp_ParamLimits

0xaf34,	// (0x0003e28a) popup_call5_audio_first_window_cp

0x1385,	// (0x000346db) call5_swipe_1_pane_g1_cp_ParamLimits

0x1385,	// (0x000346db) call5_swipe_1_pane_g1_cp

0x13c5,	// (0x0003471b) call5_swipe_1_pane_g2_cp

0x139e,	// (0x000346f4) call5_swipe_1_pane_t1_cp_ParamLimits

0x139e,	// (0x000346f4) call5_swipe_1_pane_t1_cp

0x1385,	// (0x000346db) call5_swipe_2_pane_g1_cp_ParamLimits

0x1385,	// (0x000346db) call5_swipe_2_pane_g1_cp

0x13cd,	// (0x00034723) call5_swipe_2_pane_g2_cp

0x13d5,	// (0x0003472b) call5_swipe_2_pane_t1_cp_ParamLimits

0x13d5,	// (0x0003472b) call5_swipe_2_pane_t1_cp

0x72db,	// (0x0003a631) main_sp_fs_email_pane

0x13ea,	// (0x00034740) main_sp_fs_listscroll_pane_te

0x38ea,	// (0x00036c40) popup_sp_fs_action_menu_pane_ParamLimits

0x38ea,	// (0x00036c40) popup_sp_fs_action_menu_pane

0xe69c,	// (0x000419f2) bg_sp_fs_ctrlbar_pane_g1

0x1433,	// (0x00034789) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x143c,	// (0x00034792) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x1445,	// (0x0003479b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe69c,	// (0x000419f2) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x00043038) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe47f,	// (0x000417d5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe47f,	// (0x000417d5) bg_sp_fs_ctrlbar_ddmenu_pane

0x144e,	// (0x000347a4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x144e,	// (0x000347a4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x145a,	// (0x000347b0) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x145a,	// (0x000347b0) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x00043041) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x00043041) main_sp_fs_ctrlbar_ddmenu_pane_g

0x1466,	// (0x000347bc) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x1466,	// (0x000347bc) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x392a,	// (0x00036c80) list_medium_line_t2_right_icon_g1

0x3932,	// (0x00036c88) list_medium_line_t2_right_icon_t1

0x3942,	// (0x00036c98) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x00043046) list_medium_line_t2_right_icon_t

0xe24b,	// (0x000415a1) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe24b,	// (0x000415a1) bg_sp_fs_ctrlbar_pane

0xaf97,	// (0x0003e2ed) main_sp_fs_ctrlbar_button_pane_cp01

0xaf9f,	// (0x0003e2f5) main_sp_fs_ctrlbar_ddmenu_pane

0xd8c8,	// (0x00040c1e) main_sp_fs_ctrlbar_pane_g1

0x14c0,	// (0x00034816) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x0004304b) main_sp_fs_ctrlbar_pane_g

0x14cc,	// (0x00034822) main_sp_fs_ctrlbar_pane_t1

0x3950,	// (0x00036ca6) main_sp_fs_ctrlbar_pane

0x396a,	// (0x00036cc0) main_sp_fs_listscroll_pane_te_cp01

0x397b,	// (0x00036cd1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x397b,	// (0x00036cd1) popup_sp_fs_action_menu_pane_cp01

0x72db,	// (0x0003a631) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x72db,	// (0x0003a631) bg_sp_fs_highlight_list_pane_cp01

0x3993,	// (0x00036ce9) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x3993,	// (0x00036ce9) sp_fs_action_menu_list_gene_pane_g1

0x1500,	// (0x00034856) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x1500,	// (0x00034856) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00043055) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00043055) sp_fs_action_menu_list_gene_pane_g

0x39a2,	// (0x00036cf8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x39a2,	// (0x00036cf8) sp_fs_action_menu_list_gene_pane_t1

0x39ba,	// (0x00036d10) sp_fs_action_menu_list_gene_pane_ParamLimits

0x39ba,	// (0x00036d10) sp_fs_action_menu_list_gene_pane

0x1542,	// (0x00034898) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x1542,	// (0x00034898) popup_sp_fs_action_menu_bg_pane

0x39d7,	// (0x00036d2d) sp_fs_action_menu_list_pane_ParamLimits

0x39d7,	// (0x00036d2d) sp_fs_action_menu_list_pane

0x156e,	// (0x000348c4) sp_fs_scroll_pane_cp01_ParamLimits

0x156e,	// (0x000348c4) sp_fs_scroll_pane_cp01

0x39f5,	// (0x00036d4b) list_medium_line_plain_t2_t1

0x3a05,	// (0x00036d5b) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0004305a) list_medium_line_plain_t2_t

0x3a13,	// (0x00036d69) list_medium_line_plain_t3_t1

0x3a23,	// (0x00036d79) list_medium_line_plain_t3_t2

0x3a31,	// (0x00036d87) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0004305f) list_medium_line_plain_t3_t

0x304f,	// (0x000363a5) list_medium_line_x2_t2_g2_g1_ParamLimits

0x304f,	// (0x000363a5) list_medium_line_x2_t2_g2_g1

0x3067,	// (0x000363bd) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3067,	// (0x000363bd) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x000425bb) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x000425bb) list_medium_line_x2_t2_g2_g

0x31fb,	// (0x00036551) list_medium_line_x2_t2_g2_t1_ParamLimits

0x31fb,	// (0x00036551) list_medium_line_x2_t2_g2_t1

0x309c,	// (0x000363f2) list_medium_line_x2_t2_g2_t2_ParamLimits

0x309c,	// (0x000363f2) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00043066) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00043066) list_medium_line_x2_t2_g2_t

0x304f,	// (0x000363a5) list_medium_line_x2_t4_g2_g1_ParamLimits

0x304f,	// (0x000363a5) list_medium_line_x2_t4_g2_g1

0x3a3f,	// (0x00036d95) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3a3f,	// (0x00036d95) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x0004306b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x0004306b) list_medium_line_x2_t4_g2_g

0x3a51,	// (0x00036da7) list_medium_line_x2_t4_g2_t1_ParamLimits

0x3a51,	// (0x00036da7) list_medium_line_x2_t4_g2_t1

0x3a6b,	// (0x00036dc1) list_medium_line_x2_t4_g2_t2_ParamLimits

0x3a6b,	// (0x00036dc1) list_medium_line_x2_t4_g2_t2

0x3a80,	// (0x00036dd6) list_medium_line_x2_t4_g2_t3_ParamLimits

0x3a80,	// (0x00036dd6) list_medium_line_x2_t4_g2_t3

0x309c,	// (0x000363f2) list_medium_line_x2_t4_g2_t4_ParamLimits

0x309c,	// (0x000363f2) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x00043070) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x00043070) list_medium_line_x2_t4_g2_t

0x3a95,	// (0x00036deb) list_medium_line_t3_right_iconx2_g1

0x392a,	// (0x00036c80) list_medium_line_t3_right_iconx2_g2

0x3a9d,	// (0x00036df3) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x00043079) list_medium_line_t3_right_iconx2_g

0x3aa5,	// (0x00036dfb) list_medium_line_t3_right_iconx2_t1

0x3ab5,	// (0x00036e0b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x00043080) list_medium_line_t3_right_iconx2_t

0x304f,	// (0x000363a5) list_medium_line_x3_t4_g4_g1_ParamLimits

0x304f,	// (0x000363a5) list_medium_line_x3_t4_g4_g1

0x305b,	// (0x000363b1) list_medium_line_x3_t4_g4_g2_ParamLimits

0x305b,	// (0x000363b1) list_medium_line_x3_t4_g4_g2

0x30e5,	// (0x0003643b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x30e5,	// (0x0003643b) list_medium_line_x3_t4_g4_g3

0x3ac3,	// (0x00036e19) list_medium_line_x3_t4_g4_g4_ParamLimits

0x3ac3,	// (0x00036e19) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x00043085) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x00043085) list_medium_line_x3_t4_g4_g

0x3acf,	// (0x00036e25) list_medium_line_x3_t4_g4_t1_ParamLimits

0x3acf,	// (0x00036e25) list_medium_line_x3_t4_g4_t1

0x3ae6,	// (0x00036e3c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x3ae6,	// (0x00036e3c) list_medium_line_x3_t4_g4_t2

0x3210,	// (0x00036566) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3210,	// (0x00036566) list_medium_line_x3_t4_g4_t3

0x3afb,	// (0x00036e51) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3afb,	// (0x00036e51) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x0004308e) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x0004308e) list_medium_line_x3_t4_g4_t

0x3b18,	// (0x00036e6e) list_single_dyc_row_text_pane_t1_ParamLimits

0x3b18,	// (0x00036e6e) list_single_dyc_row_text_pane_t1

0x3b4f,	// (0x00036ea5) list_single_dyc_row_text_pane_t2_ParamLimits

0x3b4f,	// (0x00036ea5) list_single_dyc_row_text_pane_t2

0x3ba9,	// (0x00036eff) list_single_dyc_row_text_pane_t3_ParamLimits

0x3ba9,	// (0x00036eff) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x00043097) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x00043097) list_single_dyc_row_text_pane_t

0x3bbb,	// (0x00036f11) list_single_dyc_row_pane_g1_ParamLimits

0x3bbb,	// (0x00036f11) list_single_dyc_row_pane_g1

0x3bc7,	// (0x00036f1d) list_single_dyc_row_pane_g2_ParamLimits

0x3bc7,	// (0x00036f1d) list_single_dyc_row_pane_g2

0x3bd3,	// (0x00036f29) list_single_dyc_row_pane_g3_ParamLimits

0x3bd3,	// (0x00036f29) list_single_dyc_row_pane_g3

0x3bdf,	// (0x00036f35) list_single_dyc_row_pane_g4_ParamLimits

0x3bdf,	// (0x00036f35) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x0004309e) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x0004309e) list_single_dyc_row_pane_g

0x3beb,	// (0x00036f41) list_single_dyc_row_text_pane_ParamLimits

0x3beb,	// (0x00036f41) list_single_dyc_row_text_pane

0x422a,	// (0x00037580) bg_sp_fs_scroll_pane

0x1626,	// (0x0003497c) thumb_sp_fs_scroll_pane

0x34f2,	// (0x00036848) list_medium_line_g1_ParamLimits

0x34f2,	// (0x00036848) list_medium_line_g1

0x3c0a,	// (0x00036f60) list_medium_line_t1_ParamLimits

0x3c0a,	// (0x00036f60) list_medium_line_t1

0x304f,	// (0x000363a5) list_medium_line_x2_g1_ParamLimits

0x304f,	// (0x000363a5) list_medium_line_x2_g1

0x305b,	// (0x000363b1) list_medium_line_x2_g2_ParamLimits

0x305b,	// (0x000363b1) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x000430a7) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x000430a7) list_medium_line_x2_g

0x3c1f,	// (0x00036f75) list_medium_line_x2_t1_ParamLimits

0x3c1f,	// (0x00036f75) list_medium_line_x2_t1

0x304f,	// (0x000363a5) list_medium_line_x3_g1_ParamLimits

0x304f,	// (0x000363a5) list_medium_line_x3_g1

0x305b,	// (0x000363b1) list_medium_line_x3_g2_ParamLimits

0x305b,	// (0x000363b1) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x000430a7) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x000430a7) list_medium_line_x3_g

0x3c1f,	// (0x00036f75) list_medium_line_x3_t1_ParamLimits

0x3c1f,	// (0x00036f75) list_medium_line_x3_t1

0x165a,	// (0x000349b0) thumb_sp_fs_scroll_pane_g1

0x1663,	// (0x000349b9) thumb_sp_fs_scroll_pane_g2

0x166c,	// (0x000349c2) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x000430ac) thumb_sp_fs_scroll_pane_g

0x165a,	// (0x000349b0) bg_sp_fs_scroll_pane_g1

0x1663,	// (0x000349b9) bg_sp_fs_scroll_pane_g2

0x166c,	// (0x000349c2) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x000430ac) bg_sp_fs_scroll_pane_g

0x304f,	// (0x000363a5) list_medium_line_x2_t3_g4_g1_ParamLimits

0x304f,	// (0x000363a5) list_medium_line_x2_t3_g4_g1

0x30d9,	// (0x0003642f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x30d9,	// (0x0003642f) list_medium_line_x2_t3_g4_g2

0x305b,	// (0x000363b1) list_medium_line_x2_t3_g4_g3_ParamLimits

0x305b,	// (0x000363b1) list_medium_line_x2_t3_g4_g3

0x3067,	// (0x000363bd) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3067,	// (0x000363bd) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x00042637) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x00042637) list_medium_line_x2_t3_g4_g

0x3c35,	// (0x00036f8b) list_medium_line_x2_t3_g4_t1_ParamLimits

0x3c35,	// (0x00036f8b) list_medium_line_x2_t3_g4_t1

0x3c4b,	// (0x00036fa1) list_medium_line_x2_t3_g4_t2_ParamLimits

0x3c4b,	// (0x00036fa1) list_medium_line_x2_t3_g4_t2

0x309c,	// (0x000363f2) list_medium_line_x2_t3_g4_t3_ParamLimits

0x309c,	// (0x000363f2) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x000430b3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x000430b3) list_medium_line_x2_t3_g4_t

0x34f2,	// (0x00036848) list_medium_line_g2_g1_ParamLimits

0x34f2,	// (0x00036848) list_medium_line_g2_g1

0x34fe,	// (0x00036854) list_medium_line_g2_g2_ParamLimits

0x34fe,	// (0x00036854) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x00042d70) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x00042d70) list_medium_line_g2_g

0x3c64,	// (0x00036fba) list_medium_line_g2_t1_ParamLimits

0x3c64,	// (0x00036fba) list_medium_line_g2_t1

0x34f2,	// (0x00036848) list_medium_line_t3_g2_g1_ParamLimits

0x34f2,	// (0x00036848) list_medium_line_t3_g2_g1

0x34fe,	// (0x00036854) list_medium_line_t3_g2_g2_ParamLimits

0x34fe,	// (0x00036854) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x00042d70) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x00042d70) list_medium_line_t3_g2_g

0x3c79,	// (0x00036fcf) list_medium_line_t3_g2_t1_ParamLimits

0x3c79,	// (0x00036fcf) list_medium_line_t3_g2_t1

0x3c93,	// (0x00036fe9) list_medium_line_t3_g2_t2_ParamLimits

0x3c93,	// (0x00036fe9) list_medium_line_t3_g2_t2

0x3ca8,	// (0x00036ffe) list_medium_line_t3_g2_t3_ParamLimits

0x3ca8,	// (0x00036ffe) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x000430ba) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x000430ba) list_medium_line_t3_g2_t

0x392a,	// (0x00036c80) list_medium_line_right_icon_g1

0x3cbe,	// (0x00037014) list_medium_line_right_icon_t1

0x34f2,	// (0x00036848) list_medium_line_t2_g1_ParamLimits

0x34f2,	// (0x00036848) list_medium_line_t2_g1

0x3ccc,	// (0x00037022) list_medium_line_t2_t1_ParamLimits

0x3ccc,	// (0x00037022) list_medium_line_t2_t1

0x3ce3,	// (0x00037039) list_medium_line_t2_t2_ParamLimits

0x3ce3,	// (0x00037039) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x000430c1) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x000430c1) list_medium_line_t2_t

0x34f2,	// (0x00036848) list_medium_line_t3_g1_ParamLimits

0x34f2,	// (0x00036848) list_medium_line_t3_g1

0x3cf5,	// (0x0003704b) list_medium_line_t3_t1_ParamLimits

0x3cf5,	// (0x0003704b) list_medium_line_t3_t1

0x3d0c,	// (0x00037062) list_medium_line_t3_t2_ParamLimits

0x3d0c,	// (0x00037062) list_medium_line_t3_t2

0x3d21,	// (0x00037077) list_medium_line_t3_t3_ParamLimits

0x3d21,	// (0x00037077) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x000430c6) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x000430c6) list_medium_line_t3_t

0x34f2,	// (0x00036848) list_medium_line_g3_g1_ParamLimits

0x34f2,	// (0x00036848) list_medium_line_g3_g1

0x3d33,	// (0x00037089) list_medium_line_g3_g2_ParamLimits

0x3d33,	// (0x00037089) list_medium_line_g3_g2

0x34fe,	// (0x00036854) list_medium_line_g3_g3_ParamLimits

0x34fe,	// (0x00036854) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x000430cd) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x000430cd) list_medium_line_g3_g

0x3d3f,	// (0x00037095) list_medium_line_g3_t1_ParamLimits

0x3d3f,	// (0x00037095) list_medium_line_g3_t1

0x34f2,	// (0x00036848) list_medium_line_t2_g3_g1_ParamLimits

0x34f2,	// (0x00036848) list_medium_line_t2_g3_g1

0x3d33,	// (0x00037089) list_medium_line_t2_g3_g2_ParamLimits

0x3d33,	// (0x00037089) list_medium_line_t2_g3_g2

0x34fe,	// (0x00036854) list_medium_line_t2_g3_g3_ParamLimits

0x34fe,	// (0x00036854) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x000430cd) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x000430cd) list_medium_line_t2_g3_g

0x3d54,	// (0x000370aa) list_medium_line_t2_g3_t1_ParamLimits

0x3d54,	// (0x000370aa) list_medium_line_t2_g3_t1

0x3d6e,	// (0x000370c4) list_medium_line_t2_g3_t2_ParamLimits

0x3d6e,	// (0x000370c4) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x000430d4) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x000430d4) list_medium_line_t2_g3_t

0x34f2,	// (0x00036848) list_medium_line_t3_g3_g1_ParamLimits

0x34f2,	// (0x00036848) list_medium_line_t3_g3_g1

0x3d33,	// (0x00037089) list_medium_line_t3_g3_g2_ParamLimits

0x3d33,	// (0x00037089) list_medium_line_t3_g3_g2

0x34fe,	// (0x00036854) list_medium_line_t3_g3_g3_ParamLimits

0x34fe,	// (0x00036854) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x000430cd) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x000430cd) list_medium_line_t3_g3_g

0x3d83,	// (0x000370d9) list_medium_line_t3_g3_t1_ParamLimits

0x3d83,	// (0x000370d9) list_medium_line_t3_g3_t1

0x3d9c,	// (0x000370f2) list_medium_line_t3_g3_t2_ParamLimits

0x3d9c,	// (0x000370f2) list_medium_line_t3_g3_t2

0x3db2,	// (0x00037108) list_medium_line_t3_g3_t3_ParamLimits

0x3db2,	// (0x00037108) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x000430d9) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x000430d9) list_medium_line_t3_g3_t

0x3a95,	// (0x00036deb) list_medium_line_right_iconx2_g1

0x392a,	// (0x00036c80) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x000430e0) list_medium_line_right_iconx2_g

0x3dc8,	// (0x0003711e) list_medium_line_right_iconx2_t1

0x3a95,	// (0x00036deb) list_medium_line_t2_right_iconx2_g1

0x392a,	// (0x00036c80) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x000430e0) list_medium_line_t2_right_iconx2_g

0x3dd6,	// (0x0003712c) list_medium_line_t2_right_iconx2_t1

0x3de6,	// (0x0003713c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x000430e5) list_medium_line_t2_right_iconx2_t

0x3df4,	// (0x0003714a) list_medium_line_x4_t4_t1

0x3e02,	// (0x00037158) list_medium_line_x4_t4_t2

0x3e12,	// (0x00037168) list_medium_line_x4_t4_t3

0x3e22,	// (0x00037178) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x000430ea) list_medium_line_x4_t4_t

0xafd2,	// (0x0003e328) tport_appsw_pane_ParamLimits

0xafd2,	// (0x0003e328) tport_appsw_pane

0xafde,	// (0x0003e334) tport_contact_pane_ParamLimits

0xafde,	// (0x0003e334) tport_contact_pane

0xafee,	// (0x0003e344) tport_listscroll_pane_ParamLimits

0xafee,	// (0x0003e344) tport_listscroll_pane

0xaffe,	// (0x0003e354) cell_tport_appsw_pane_ParamLimits

0xaffe,	// (0x0003e354) cell_tport_appsw_pane

0xe968,	// (0x00041cbe) tport_appsw_pane_g1_ParamLimits

0xe968,	// (0x00041cbe) tport_appsw_pane_g1

0x16d5,	// (0x00034a2b) tport_contact_pane_g1

0x16de,	// (0x00034a34) tport_contact_pane_t1

0x16ec,	// (0x00034a42) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x000430f3) tport_contact_pane_t

0x16fa,	// (0x00034a50) list_tport_pane

0x1703,	// (0x00034a59) scroll_pane_cp_030

0x1714,	// (0x00034a6a) cell_tport_appsw_pane_g1

0x1724,	// (0x00034a7a) cell_tport_appsw_pane_t1

0x422a,	// (0x00037580) grid_highlight_pane_cp019

0xb029,	// (0x0003e37f) list_tport_double_graphic_pane_ParamLimits

0xb029,	// (0x0003e37f) list_tport_double_graphic_pane

0x72db,	// (0x0003a631) list_highlight_pane_cp023_ParamLimits

0x72db,	// (0x0003a631) list_highlight_pane_cp023

0xb03c,	// (0x0003e392) list_tport_double_graphic_pane_g1_ParamLimits

0xb03c,	// (0x0003e392) list_tport_double_graphic_pane_g1

0xb049,	// (0x0003e39f) list_tport_double_graphic_pane_t1_ParamLimits

0xb049,	// (0x0003e39f) list_tport_double_graphic_pane_t1

0xb05e,	// (0x0003e3b4) list_tport_double_graphic_pane_t2_ParamLimits

0xb05e,	// (0x0003e3b4) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x000430ff) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x000430ff) list_tport_double_graphic_pane_t

0x422a,	// (0x00037580) main_cale_note_pane

0x9518,	// (0x0003c86e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9518,	// (0x0003c86e) cell_vitu2_function_top_wide_pane_cp01

0xabc9,	// (0x0003df1f) wait_bar_pane_cp05_ParamLimits

0x422a,	// (0x00037580) listscroll_cmail_pane

0x173a,	// (0x00034a90) list_cmail_pane

0xb07a,	// (0x0003e3d0) list_cmail_body_pane

0xb09e,	// (0x0003e3f4) list_single_cmail_header_caption_pane

0xb0cc,	// (0x0003e422) list_single_cmail_header_detail_pane_ParamLimits

0xb0cc,	// (0x0003e422) list_single_cmail_header_detail_pane

0xb104,	// (0x0003e45a) list_single_cmail_header_caption_pane_t1

0x3e32,	// (0x00037188) list_single_cmail_header_detail_pane_g1_ParamLimits

0x3e32,	// (0x00037188) list_single_cmail_header_detail_pane_g1

0x3e4a,	// (0x000371a0) list_single_cmail_header_detail_pane_g2_ParamLimits

0x3e4a,	// (0x000371a0) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x00043104) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x00043104) list_single_cmail_header_detail_pane_g

0x3e56,	// (0x000371ac) list_single_cmail_header_detail_pane_t1_ParamLimits

0x3e56,	// (0x000371ac) list_single_cmail_header_detail_pane_t1

0x3eae,	// (0x00037204) list_single_cmail_header_editor_pane_bg_ParamLimits

0x3eae,	// (0x00037204) list_single_cmail_header_editor_pane_bg

0x17b7,	// (0x00034b0d) list_cmail_body_pane_g1

0x17c0,	// (0x00034b16) list_cmail_body_pane_t1

0x006a,	// (0x000333c0) list_single_cmail_header_editor_pane_bg_g1

0xc7ab,	// (0x0003fb01) list_single_cmail_header_editor_pane_bg_g1_copy1

0x007a,	// (0x000333d0) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0072,	// (0x000333c8) list_single_cmail_header_editor_pane_bg_g1_copy3

0x02f3,	// (0x00033649) list_single_cmail_header_editor_pane_bg_g1_copy4

0x009a,	// (0x000333f0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x008a,	// (0x000333e0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0092,	// (0x000333e8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc78b,	// (0x0003fae1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb114,	// (0x0003e46a) calenote_gesture_pane_ParamLimits

0xb114,	// (0x0003e46a) calenote_gesture_pane

0xb12e,	// (0x0003e484) calenote_window_pane_ParamLimits

0xb12e,	// (0x0003e484) calenote_window_pane

0x17ce,	// (0x00034b24) popup_note_window_cp01

0xb146,	// (0x0003e49c) calenote_swipe_1_pane_ParamLimits

0xb146,	// (0x0003e49c) calenote_swipe_1_pane

0xaf28,	// (0x0003e27e) calenote_swipe_2_pane_ParamLimits

0xaf28,	// (0x0003e27e) calenote_swipe_2_pane

0x1385,	// (0x000346db) calenote_swipe_1_pane_g1_ParamLimits

0x1385,	// (0x000346db) calenote_swipe_1_pane_g1

0x1392,	// (0x000346e8) calenote_swipe_1_pane_g2_ParamLimits

0x1392,	// (0x000346e8) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x0004302e) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x0004302e) calenote_swipe_1_pane_g

0x17e0,	// (0x00034b36) calenote_swipe_1_pane_t1_ParamLimits

0x17e0,	// (0x00034b36) calenote_swipe_1_pane_t1

0x1385,	// (0x000346db) calenote_swipe_2_pane_g1_ParamLimits

0x1385,	// (0x000346db) calenote_swipe_2_pane_g1

0x17ff,	// (0x00034b55) calenote_swipe_2_pane_g2_ParamLimits

0x17ff,	// (0x00034b55) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x00043110) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x00043110) calenote_swipe_2_pane_g

0x180b,	// (0x00034b61) calenote_swipe_2_pane_t1_ParamLimits

0x180b,	// (0x00034b61) calenote_swipe_2_pane_t1

0x422a,	// (0x00037580) main_mup_navstr_pane

0x82a2,	// (0x0003b5f8) main_mup3_pane_t7_ParamLimits

0x82a2,	// (0x0003b5f8) main_mup3_pane_t7

0x8cba,	// (0x0003c010) main_mp4_pane_g6_ParamLimits

0x8cba,	// (0x0003c010) main_mp4_pane_g6

0x902e,	// (0x0003c384) main_image3_pane_t4_ParamLimits

0x902e,	// (0x0003c384) main_image3_pane_t4

0xb159,	// (0x0003e4af) popup_navstr_preview_pane_ParamLimits

0xb159,	// (0x0003e4af) popup_navstr_preview_pane

0xb165,	// (0x0003e4bb) scroll_navstr_pane_ParamLimits

0xb165,	// (0x0003e4bb) scroll_navstr_pane

0x422a,	// (0x00037580) bg_popup_preview_window_pane_cp04

0x1832,	// (0x00034b88) popup_navstr_preview_pane_t1

0xb171,	// (0x0003e4c7) scroll_navstr_pane_g1_ParamLimits

0xb171,	// (0x0003e4c7) scroll_navstr_pane_g1

0xb17e,	// (0x0003e4d4) scroll_navstr_pane_t1_ParamLimits

0xb17e,	// (0x0003e4d4) scroll_navstr_pane_t1

0x17d7,	// (0x00034b2d) bg_button_pane_cp014

0x17d7,	// (0x00034b2d) bg_button_pane_cp030

0x3890,	// (0x00036be6) list_double_fisheye_pane_g4_ParamLimits

0x3890,	// (0x00036be6) list_double_fisheye_pane_g4

0x389c,	// (0x00036bf2) list_double_fisheye_pane_g5_ParamLimits

0x389c,	// (0x00036bf2) list_double_fisheye_pane_g5

0x1742,	// (0x00034a98) sp_fs_scroll_pane_cp03

0xd8c8,	// (0x00040c1e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x14c0,	// (0x00034816) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x0004304b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x14cc,	// (0x00034822) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb070,	// (0x0003e3c6) sp_fs_scroll_pane_cp02

0xc4af,	// (0x0003f805) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc4af,	// (0x0003f805) popup_sp_fs_calendar_preview_list_single_pane

0x422a,	// (0x00037580) main_cam6_pano_pane

0x72db,	// (0x0003a631) main_mup3_pane_ParamLimits

0x422a,	// (0x00037580) main_phacti_pane

0xaa9e,	// (0x0003ddf4) bg_button_pane_cp11

0xaab6,	// (0x0003de0c) main_mobtv_info_pane_g2_ParamLimits

0xaab6,	// (0x0003de0c) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x00042fab) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x00042fab) main_mobtv_info_pane_g

0xac68,	// (0x0003dfbe) sc_clock_pane_t5_ParamLimits

0xac68,	// (0x0003dfbe) sc_clock_pane_t5

0xad0e,	// (0x0003e064) main_radioblah_pane_g1_ParamLimits

0x1242,	// (0x00034598) main_radioblah_pane_t3_ParamLimits

0x1242,	// (0x00034598) main_radioblah_pane_t3

0x125a,	// (0x000345b0) main_radioblah_pane_t4_ParamLimits

0x125a,	// (0x000345b0) main_radioblah_pane_t4

0xad2c,	// (0x0003e082) main_radioblah_text_pane_ParamLimits

0xad2c,	// (0x0003e082) main_radioblah_text_pane

0xad39,	// (0x0003e08f) main_radioblah_info_pane_g1_ParamLimits

0xadce,	// (0x0003e124) main_radioblah_info_pane_t4_ParamLimits

0xadce,	// (0x0003e124) main_radioblah_info_pane_t4

0x72db,	// (0x0003a631) main_sp_fs_calendar_pane

0xb190,	// (0x0003e4e6) main_phacti_pane_g1

0xb198,	// (0x0003e4ee) phacti_note_pane_ParamLimits

0xb198,	// (0x0003e4ee) phacti_note_pane

0x1849,	// (0x00034b9f) phacti_term_pane_ParamLimits

0x1849,	// (0x00034b9f) phacti_term_pane

0x185e,	// (0x00034bb4) phacti_note_pane_t1_ParamLimits

0x185e,	// (0x00034bb4) phacti_note_pane_t1

0x3ec0,	// (0x00037216) phacti_term_pane_g1

0x3ec8,	// (0x0003721e) phacti_term_pane_t1_ParamLimits

0x3ec8,	// (0x0003721e) phacti_term_pane_t1

0x18a7,	// (0x00034bfd) popup_sp_fs_calendar_preview_list_single_pane_g1

0x18af,	// (0x00034c05) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x0004311a) popup_sp_fs_calendar_preview_list_single_pane_g

0x18b7,	// (0x00034c0d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x18b7,	// (0x00034c0d) popup_sp_fs_calendar_preview_list_single_pane_t1

0x18cd,	// (0x00034c23) aid_popup_sp_fs_bg_corner_pane

0xe69c,	// (0x000419f2) popup_sp_fs_calendar_preview_bg_pane_g1

0x422a,	// (0x00037580) popup_sp_fs_calendar_preview_bg_pane

0x18d5,	// (0x00034c2b) popup_sp_fs_calendar_preview_list_pane

0x72db,	// (0x0003a631) bg_main_sp_fs_cale_pane_ParamLimits

0x72db,	// (0x0003a631) bg_main_sp_fs_cale_pane

0x3ef2,	// (0x00037248) listscroll_cale_mrui_pane_ParamLimits

0x3ef2,	// (0x00037248) listscroll_cale_mrui_pane

0x3f06,	// (0x0003725c) listscroll_sp_fs_schedule_track_pane

0x3f0f,	// (0x00037265) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x3f0f,	// (0x00037265) main_sp_fs_ctrlbar_pane_cp01

0x1914,	// (0x00034c6a) main_sp_fs_ribbon_pane

0x191c,	// (0x00034c72) popup_sp_fs_cale_preview_window

0xb1db,	// (0x0003e531) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb1db,	// (0x0003e531) list_single_sp_fs_schedule_track_pane

0x44d9,	// (0x0003782f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x44d9,	// (0x0003782f) bg_sp_fs_highlight_list_pane_cp03

0xb203,	// (0x0003e559) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb203,	// (0x0003e559) list_single_sp_fs_schedule_track_pane_g1

0xb20f,	// (0x0003e565) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb20f,	// (0x0003e565) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x0004311f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x0004311f) list_single_sp_fs_schedule_track_pane_g

0xb21b,	// (0x0003e571) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb21b,	// (0x0003e571) list_single_sp_fs_schedule_track_pane_t1

0xb233,	// (0x0003e589) sp_fs_schedule_track_pane_ParamLimits

0xb233,	// (0x0003e589) sp_fs_schedule_track_pane

0x192e,	// (0x00034c84) sp_fs_schedule_track_pane_g1

0x1936,	// (0x00034c8c) sp_fs_schedule_track_pane_g2

0x193e,	// (0x00034c94) sp_fs_schedule_track_pane_g3

0x1946,	// (0x00034c9c) sp_fs_schedule_track_pane_g4

0x194e,	// (0x00034ca4) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x00043124) sp_fs_schedule_track_pane_g

0x006a,	// (0x000333c0) bg_sp_fs_schedule_viewer_highlight_g1

0xc7ab,	// (0x0003fb01) bg_sp_fs_schedule_viewer_highlight_g2

0x0072,	// (0x000333c8) bg_sp_fs_schedule_viewer_highlight_g3

0x007a,	// (0x000333d0) bg_sp_fs_schedule_viewer_highlight_g4

0x02f3,	// (0x00033649) bg_sp_fs_schedule_viewer_highlight_g5

0x008a,	// (0x000333e0) bg_sp_fs_schedule_viewer_highlight_g6

0x0092,	// (0x000333e8) bg_sp_fs_schedule_viewer_highlight_g7

0x009a,	// (0x000333f0) bg_sp_fs_schedule_viewer_highlight_g8

0xc78b,	// (0x0003fae1) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x0004312f) bg_sp_fs_schedule_viewer_highlight_g

0x422a,	// (0x00037580) bg_main_sp_fs_ribbon_pane

0xb243,	// (0x0003e599) main_sp_fs_ribbon_pane_g1

0x1956,	// (0x00034cac) main_sp_fs_ribbon_pane_t1

0xb24e,	// (0x0003e5a4) main_sp_fs_ribbon_pane_t2

0x1965,	// (0x00034cbb) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x00043142) main_sp_fs_ribbon_pane_t

0x1974,	// (0x00034cca) main_sp_fs_ribbon_scheduler_pane

0x197c,	// (0x00034cd2) bg_main_sp_fs_ribbon_pane_g1

0x1985,	// (0x00034cdb) bg_main_sp_fs_ribbon_pane_g2

0x198e,	// (0x00034ce4) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x00043149) bg_main_sp_fs_ribbon_pane_g

0x1996,	// (0x00034cec) main_sp_fs_ribbon_scheduler_pane_g1

0x199f,	// (0x00034cf5) main_sp_fs_ribbon_scheduler_pane_g2

0x19a8,	// (0x00034cfe) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x00043150) main_sp_fs_ribbon_scheduler_pane_g

0x19b1,	// (0x00034d07) list_cale_mrui_pane

0xb25f,	// (0x0003e5b5) sp_fs_scroll_pane_cp07_ParamLimits

0xb25f,	// (0x0003e5b5) sp_fs_scroll_pane_cp07

0xb275,	// (0x0003e5cb) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb275,	// (0x0003e5cb) bg_sp_fs_schedule_viewer_highlight

0x19ba,	// (0x00034d10) list_single_sp_fs_schedule_track_pane_cp01

0x19c2,	// (0x00034d18) list_sp_fs_schedule_track_pane

0x19ca,	// (0x00034d20) sp_fs_scroll_pane_cp06_ParamLimits

0x19ca,	// (0x00034d20) sp_fs_scroll_pane_cp06

0xe69c,	// (0x000419f2) bgmain_sp_fs_calendar_pane_g1

0x3f20,	// (0x00037276) list_single_cale_mrui_pane_ParamLimits

0x3f20,	// (0x00037276) list_single_cale_mrui_pane

0x3f55,	// (0x000372ab) list_single_cale_mrui_row_pane_ParamLimits

0x3f55,	// (0x000372ab) list_single_cale_mrui_row_pane

0x3f62,	// (0x000372b8) list_single_cale_mrui_row_pane_g1_ParamLimits

0x3f62,	// (0x000372b8) list_single_cale_mrui_row_pane_g1

0x3f9a,	// (0x000372f0) list_single_cale_mrui_row_pane_t1_ParamLimits

0x3f9a,	// (0x000372f0) list_single_cale_mrui_row_pane_t1

0x3fac,	// (0x00037302) list_single_cale_mrui_row_pane_t2_ParamLimits

0x3fac,	// (0x00037302) list_single_cale_mrui_row_pane_t2

0x4012,	// (0x00037368) list_single_cale_mrui_row_pane_t3_ParamLimits

0x4012,	// (0x00037368) list_single_cale_mrui_row_pane_t3

0x4041,	// (0x00037397) list_single_cale_mrui_row_pane_t4_ParamLimits

0x4041,	// (0x00037397) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe08,	// (0x0004315e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe08,	// (0x0004315e) list_single_cale_mrui_row_pane_t

0x4070,	// (0x000373c6) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x4070,	// (0x000373c6) list_single_cmail_header_editor_pane_bg_cp01

0x4092,	// (0x000373e8) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x4092,	// (0x000373e8) list_single_cmail_header_editor_pane_bg_cp02

0xb282,	// (0x0003e5d8) main_radioblah_text_pane_t1_ParamLimits

0xb282,	// (0x0003e5d8) main_radioblah_text_pane_t1

0x1a9e,	// (0x00034df4) cam6_indi_pane_cp01

0x1aa6,	// (0x00034dfc) cam6_mode_pane_cp01

0x1aae,	// (0x00034e04) cam6_pano_pane

0x1ab7,	// (0x00034e0d) cam6_zoom_pane_cp01

0x1abf,	// (0x00034e15) cam6_pano_image_pane

0x1aca,	// (0x00034e20) cam6_pano_pane_g1

0x0fa1,	// (0x000342f7) cam6_pano_pane_g2

0x1ad3,	// (0x00034e29) cam6_pano_pane_g3

0x1adc,	// (0x00034e32) cam6_pano_pane_g4

0xec3f,	// (0x00041f95) cam6_pano_pane_g5

0x1ae5,	// (0x00034e3b) cam6_pano_pane_g6

0x1aef,	// (0x00034e45) cam6_pano_pane_g7

0x1af7,	// (0x00034e4d) cam6_pano_pane_g8

0x1b00,	// (0x00034e56) cam6_pano_pane_g9

0x0008,

0xfe11,	// (0x00043167) cam6_pano_pane_g

0x422a,	// (0x00037580) main_browser_tag_pane

0x182a,	// (0x00034b80) grid_navstr_albumart_pane

0x1b0b,	// (0x00034e61) cell_navstr_albumart_pane_ParamLimits

0x1b0b,	// (0x00034e61) cell_navstr_albumart_pane

0xcf84,	// (0x000402da) cell_navstr_albumart_pane_g1

0xe060,	// (0x000413b6) cell_navstr_albumart_pane_g2

0xe070,	// (0x000413c6) cell_navstr_albumart_pane_g3

0xe068,	// (0x000413be) cell_navstr_albumart_pane_g4

0x0003,

0xfe24,	// (0x0004317a) cell_navstr_albumart_pane_g

0xb29f,	// (0x0003e5f5) bt_list_pane_ParamLimits

0xb29f,	// (0x0003e5f5) bt_list_pane

0xb2c6,	// (0x0003e61c) bt_list_pane_t1

0xb2d5,	// (0x0003e62b) bt_list_pane_t2

0x0001,

0xfe2d,	// (0x00043183) bt_list_pane_t

0x422a,	// (0x00037580) main_cale_prevew_pane

0xb2e4,	// (0x0003e63a) popup_cale_preview_window_ParamLimits

0xb2e4,	// (0x0003e63a) popup_cale_preview_window

0x72db,	// (0x0003a631) bg_popup_preview_window_pane_cp05_ParamLimits

0x72db,	// (0x0003a631) bg_popup_preview_window_pane_cp05

0x1b2d,	// (0x00034e83) list_cale_preview_pane_ParamLimits

0x1b2d,	// (0x00034e83) list_cale_preview_pane

0xb2fb,	// (0x0003e651) list_double_cale_preview_pane_ParamLimits

0xb2fb,	// (0x0003e651) list_double_cale_preview_pane

0xb30d,	// (0x0003e663) list_single_cale_preview_pane_ParamLimits

0xb30d,	// (0x0003e663) list_single_cale_preview_pane

0xb321,	// (0x0003e677) list_single_cale_preview_pane_g1

0xb329,	// (0x0003e67f) list_single_cale_preview_pane_t1_ParamLimits

0xb329,	// (0x0003e67f) list_single_cale_preview_pane_t1

0xb33e,	// (0x0003e694) list_double_cale_preview_pane_g1

0xb346,	// (0x0003e69c) list_double_cale_preview_pane_t1_ParamLimits

0xb346,	// (0x0003e69c) list_double_cale_preview_pane_t1

0xb35b,	// (0x0003e6b1) list_double_cale_preview_pane_t2_ParamLimits

0xb35b,	// (0x0003e6b1) list_double_cale_preview_pane_t2

0x0001,

0xfe32,	// (0x00043188) list_double_cale_preview_pane_t_ParamLimits

0xfe32,	// (0x00043188) list_double_cale_preview_pane_t

0x422a,	// (0x00037580) main_ezdial_pane

0x72db,	// (0x0003a631) main_sp_fs_email_pane_ParamLimits

0xaf40,	// (0x0003e296) cmail_ddmenu_btn01_pane_ParamLimits

0xaf40,	// (0x0003e296) cmail_ddmenu_btn01_pane

0xaf5d,	// (0x0003e2b3) cmail_ddmenu_btn02_pane_ParamLimits

0xaf5d,	// (0x0003e2b3) cmail_ddmenu_btn02_pane

0xaf7b,	// (0x0003e2d1) cmail_ddmenu_btn03_pane_ParamLimits

0xaf7b,	// (0x0003e2d1) cmail_ddmenu_btn03_pane

0x3950,	// (0x00036ca6) main_sp_fs_ctrlbar_pane_ParamLimits

0x396a,	// (0x00036cc0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb07a,	// (0x0003e3d0) list_cmail_body_pane_ParamLimits

0x1751,	// (0x00034aa7) bg_button_pane_cp12

0x1766,	// (0x00034abc) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1766,	// (0x00034abc) list_single_cmail_header_detail_pane_g3

0x3e88,	// (0x000371de) list_single_cmail_header_detail_pane_t2_ParamLimits

0x3e88,	// (0x000371de) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x0004310b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x0004310b) list_single_cmail_header_detail_pane_t

0x3edd,	// (0x00037233) phacti_term_pane_t2_ParamLimits

0x3edd,	// (0x00037233) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x00043115) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x00043115) phacti_term_pane_t

0x1b39,	// (0x00034e8f) aid_size_list_single_double

0xb373,	// (0x0003e6c9) popup_ezdial_listscroll_window

0xb396,	// (0x0003e6ec) popup_number_entry_window_cp01

0xce23,	// (0x00040179) bg_popup_call_pane_cp09

0x1b45,	// (0x00034e9b) ezdial_list_pane

0x1b4d,	// (0x00034ea3) scroll_pane_cp23

0xe47f,	// (0x000417d5) bg_button_pane_cp028_ParamLimits

0xe47f,	// (0x000417d5) bg_button_pane_cp028

0xb3a4,	// (0x0003e6fa) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb3a4,	// (0x0003e6fa) cmail_ddmenu_btn01_pane_g1

0xb3b6,	// (0x0003e70c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb3b6,	// (0x0003e70c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe37,	// (0x0004318d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe37,	// (0x0004318d) cmail_ddmenu_btn01_pane_g

0x1b55,	// (0x00034eab) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1b55,	// (0x00034eab) cmail_ddmenu_btn01_pane_t1

0xe24b,	// (0x000415a1) bg_button_pane_cp029_ParamLimits

0xe24b,	// (0x000415a1) bg_button_pane_cp029

0xb3b6,	// (0x0003e70c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb3b6,	// (0x0003e70c) cmail_ddmenu_btn02_pane_g1

0xb3ce,	// (0x0003e724) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb3ce,	// (0x0003e724) cmail_ddmenu_btn02_pane_t1

0x44d9,	// (0x0003782f) bg_button_pane_cp031_ParamLimits

0x44d9,	// (0x0003782f) bg_button_pane_cp031

0xb3b6,	// (0x0003e70c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb3b6,	// (0x0003e70c) cmail_ddmenu_btn03_pane_g1

0xb3ce,	// (0x0003e724) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb3ce,	// (0x0003e724) cmail_ddmenu_btn03_pane_t1

0x8ed9,	// (0x0003c22f) cell_dialer2_keypad_pane_t1_ParamLimits

0x8ef3,	// (0x0003c249) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8ef3,	// (0x0003c249) cell_dialer2_keypad_pane_t1_copy1

0xa93e,	// (0x0003dc94) ncimui_group_button_pane

0x72db,	// (0x0003a631) main_sp_fs_calendar_pane_ParamLimits

0xb09e,	// (0x0003e3f4) list_single_cmail_header_caption_pane_ParamLimits

0x18dd,	// (0x00034c33) aid_recal_txt_sm_pane

0x422a,	// (0x00037580) mian_recal_day_pane

0x191c,	// (0x00034c72) popup_sp_fs_cale_preview_window_ParamLimits

0x422a,	// (0x00037580) list_recal_day_pane

0x1b8d,	// (0x00034ee3) list_single_recal_day_pane_ParamLimits

0x1b8d,	// (0x00034ee3) list_single_recal_day_pane

0x1b9f,	// (0x00034ef5) list_single_recal_day_pane_g1_ParamLimits

0x1b9f,	// (0x00034ef5) list_single_recal_day_pane_g1

0x1bab,	// (0x00034f01) list_single_recal_day_pane_g2_ParamLimits

0x1bab,	// (0x00034f01) list_single_recal_day_pane_g2

0x1bbb,	// (0x00034f11) list_single_recal_day_pane_g3_ParamLimits

0x1bbb,	// (0x00034f11) list_single_recal_day_pane_g3

0xb3f2,	// (0x0003e748) list_single_recal_day_pane_g4_ParamLimits

0xb3f2,	// (0x0003e748) list_single_recal_day_pane_g4

0x1bc7,	// (0x00034f1d) list_single_recal_day_pane_g5_ParamLimits

0x1bc7,	// (0x00034f1d) list_single_recal_day_pane_g5

0x1bd7,	// (0x00034f2d) list_single_recal_day_pane_g6_ParamLimits

0x1bd7,	// (0x00034f2d) list_single_recal_day_pane_g6

0x0004,

0xfe46,	// (0x0004319c) list_single_recal_day_pane_g_ParamLimits

0xfe46,	// (0x0004319c) list_single_recal_day_pane_g

0x1bee,	// (0x00034f44) list_single_recal_day_pane_t1

0x1c00,	// (0x00034f56) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x000431a7) list_single_recal_day_pane_t

0xb412,	// (0x0003e768) ncimui_query_button_pane_ParamLimits

0xb412,	// (0x0003e768) ncimui_query_button_pane

0xb422,	// (0x0003e778) ncimui_query_button_pane_t1_ParamLimits

0xb422,	// (0x0003e778) ncimui_query_button_pane_t1

0x1c15,	// (0x00034f6b) ncimui_query_button_pane_t2_ParamLimits

0x1c15,	// (0x00034f6b) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x000431ac) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x000431ac) ncimui_query_button_pane_t

0xb435,	// (0x0003e78b) query_button_pane_ParamLimits

0xb435,	// (0x0003e78b) query_button_pane

0x422a,	// (0x00037580) bg_button_pane_cp0028

0x1c28,	// (0x00034f7e) query_button_pane_t1

0x72f7,	// (0x0003a64d) main_tport_pane_ParamLimits

0xafa9,	// (0x0003e2ff) bg_popup_window_pane_cp01_ParamLimits

0xafa9,	// (0x0003e2ff) bg_popup_window_pane_cp01

0xafb6,	// (0x0003e30c) heading_pane_cp08_ParamLimits

0xafb6,	// (0x0003e30c) heading_pane_cp08

0xafc4,	// (0x0003e31a) heading_pane_cp07_ParamLimits

0xafc4,	// (0x0003e31a) heading_pane_cp07

0x1714,	// (0x00034a6a) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x000430f8) cell_tport_appsw_pane_g

0x3252,	// (0x000365a8) input_candi_list_open_g1

0xc946,	// (0x0003fc9c) list_cale_time_pane_g6_ParamLimits

0xc946,	// (0x0003fc9c) list_cale_time_pane_g6

0x7d3f,	// (0x0003b095) aid_size_touch_calib_1_ParamLimits

0x7d3f,	// (0x0003b095) aid_size_touch_calib_1

0x7d4b,	// (0x0003b0a1) aid_size_touch_calib_2_ParamLimits

0x7d4b,	// (0x0003b0a1) aid_size_touch_calib_2

0x7d59,	// (0x0003b0af) aid_size_touch_calib_3_ParamLimits

0x7d59,	// (0x0003b0af) aid_size_touch_calib_3

0x7d69,	// (0x0003b0bf) aid_size_touch_calib_4_ParamLimits

0x7d69,	// (0x0003b0bf) aid_size_touch_calib_4

0x7d77,	// (0x0003b0cd) main_touch_calib_button_group_pane_ParamLimits

0x7d77,	// (0x0003b0cd) main_touch_calib_button_group_pane

0x7d85,	// (0x0003b0db) main_touch_calib_pane_g1_ParamLimits

0x7d91,	// (0x0003b0e7) main_touch_calib_pane_g2_ParamLimits

0x7d9d,	// (0x0003b0f3) main_touch_calib_pane_g3_ParamLimits

0x7da9,	// (0x0003b0ff) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x00042ac6) main_touch_calib_pane_g_ParamLimits

0x7db5,	// (0x0003b10b) main_touch_calib_pane_t1_ParamLimits

0x7dcc,	// (0x0003b122) main_touch_calib_pane_t2_ParamLimits

0x7de3,	// (0x0003b139) main_touch_calib_pane_t3_ParamLimits

0x7df7,	// (0x0003b14d) main_touch_calib_pane_t4_ParamLimits

0x7e0b,	// (0x0003b161) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x00042acf) main_touch_calib_pane_t_ParamLimits

0xea0f,	// (0x00041d65) list_single_fp_cale_pane_g3_ParamLimits

0xea0f,	// (0x00041d65) list_single_fp_cale_pane_g3

0x72db,	// (0x0003a631) bg_button_pane_cp012_ParamLimits

0x72db,	// (0x0003a631) bg_vkb2_func_pane_cp03_ParamLimits

0x9c8d,	// (0x0003cfe3) cell_vitu2_function_top_pane_g1_ParamLimits

0x72db,	// (0x0003a631) bg_vkb2_func_pane_cp04_ParamLimits

0xa8dc,	// (0x0003dc32) main_ncimui_button_group_pane_ParamLimits

0xa8dc,	// (0x0003dc32) main_ncimui_button_group_pane

0xa92c,	// (0x0003dc82) main_ncimui_pane_t3_ParamLimits

0xa92c,	// (0x0003dc82) main_ncimui_pane_t3

0x1840,	// (0x00034b96) phacti_button_group_pane

0x1b39,	// (0x00034e8f) aid_size_list_single_double_ParamLimits

0xb373,	// (0x0003e6c9) popup_ezdial_listscroll_window_ParamLimits

0xb396,	// (0x0003e6ec) popup_number_entry_window_cp01_ParamLimits

0xb442,	// (0x0003e798) phacti_button_pane_ParamLimits

0xb442,	// (0x0003e798) phacti_button_pane

0x422a,	// (0x00037580) bg_button_pane_cp14

0x1c36,	// (0x00034f8c) phacti_button_pane_t1

0xb453,	// (0x0003e7a9) main_touch_calib_button_pane_ParamLimits

0xb453,	// (0x0003e7a9) main_touch_calib_button_pane

0xc399,	// (0x0003f6ef) bg_button_pane_cp18_ParamLimits

0xc399,	// (0x0003f6ef) bg_button_pane_cp18

0x1c44,	// (0x00034f9a) main_touch_calib_button_pane_t1_ParamLimits

0x1c44,	// (0x00034f9a) main_touch_calib_button_pane_t1

0x1c5a,	// (0x00034fb0) main_touch_calib_button_pane_t2_ParamLimits

0x1c5a,	// (0x00034fb0) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x000431b1) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x000431b1) main_touch_calib_button_pane_t

0x422a,	// (0x00037580) cell_ncimui_button_pane

0x422a,	// (0x00037580) bg_button_pane_cp032

0x1c78,	// (0x00034fce) cell_ncimui_button_pane_t1

0x8f4f,	// (0x0003c2a5) image3_infobar_pane_ParamLimits

0x8f4f,	// (0x0003c2a5) image3_infobar_pane

0xac8a,	// (0x0003dfe0) fs_bigclock_status_pane_ParamLimits

0xac8a,	// (0x0003dfe0) fs_bigclock_status_pane

0xac97,	// (0x0003dfed) main_fs_bigclock_clock_pane_ParamLimits

0xac97,	// (0x0003dfed) main_fs_bigclock_clock_pane

0xacad,	// (0x0003e003) main_fs_bigclock_indi_pane_ParamLimits

0xacad,	// (0x0003e003) main_fs_bigclock_indi_pane

0xacdc,	// (0x0003e032) main_fs_bigclock_swipe_pane_ParamLimits

0xacdc,	// (0x0003e032) main_fs_bigclock_swipe_pane

0x422a,	// (0x00037580) main_fs_clock_dumped_data

0x10ae,	// (0x00034404) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x10ae,	// (0x00034404) list_single_fs_bigclock_indicator_pane_g1

0x10d7,	// (0x0003442d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x10d7,	// (0x0003442d) list_single_fs_bigclock_indicator_pane_g2

0x10f1,	// (0x00034447) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x10f1,	// (0x00034447) list_single_fs_bigclock_indicator_pane_g3

0x110b,	// (0x00034461) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x110b,	// (0x00034461) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x00042fdf) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x00042fdf) list_single_fs_bigclock_indicator_pane_g

0x1134,	// (0x0003448a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x1134,	// (0x0003448a) list_single_fs_bigclock_indicator_pane_t1

0x115c,	// (0x000344b2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x115c,	// (0x000344b2) list_single_fs_bigclock_indicator_pane_t2

0x1184,	// (0x000344da) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x1184,	// (0x000344da) list_single_fs_bigclock_indicator_pane_t3

0x11ac,	// (0x00034502) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x11ac,	// (0x00034502) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x00042fea) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x00042fea) list_single_fs_bigclock_indicator_pane_t

0x1c86,	// (0x00034fdc) image3_infobar_fav_pane_ParamLimits

0x1c86,	// (0x00034fdc) image3_infobar_fav_pane

0x1c96,	// (0x00034fec) image3_infobar_loc_pane_ParamLimits

0x1c96,	// (0x00034fec) image3_infobar_loc_pane

0x1caa,	// (0x00035000) image3_infobar_time_pane_ParamLimits

0x1caa,	// (0x00035000) image3_infobar_time_pane

0xe69c,	// (0x000419f2) image3_infobar_time_pane_g1

0x1cba,	// (0x00035010) image3_infobar_time_pane_t1

0xe69c,	// (0x000419f2) image3_infobar_loc_pane_g1

0x1cc8,	// (0x0003501e) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x000431b6) image3_infobar_loc_pane_g

0x1cd0,	// (0x00035026) image3_infobar_loc_pane_t1

0xe69c,	// (0x000419f2) image3_infobar_fav_pane_g1

0x1cde,	// (0x00035034) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x000431bb) image3_infobar_fav_pane_g

0x1ce6,	// (0x0003503c) fs_bigclock_status_battery_pane

0x1cef,	// (0x00035045) fs_bigclock_status_signal_pane

0x1cf8,	// (0x0003504e) fs_bigclock_status_title_pane

0x1d01,	// (0x00035057) fs_bigclock_status_signal_pane_g1

0x1d0a,	// (0x00035060) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x000431c0) fs_bigclock_status_signal_pane_g

0x1d12,	// (0x00035068) fs_bigclock_status_battery_pane_g1

0x1d1b,	// (0x00035071) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x000431c5) fs_bigclock_status_battery_pane_g

0x1d23,	// (0x00035079) fs_bigclock_status_title_pane_t1

0xe69c,	// (0x000419f2) main_fs_bigclock_clock_pane_g1

0x1d31,	// (0x00035087) main_fs_bigclock_clock_pane_g2

0x1d31,	// (0x00035087) main_fs_bigclock_clock_pane_g3

0x1d31,	// (0x00035087) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x000431ca) main_fs_bigclock_clock_pane_g

0x1d39,	// (0x0003508f) main_fs_bigclock_clock_pane_t1

0x1d47,	// (0x0003509d) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x000431d3) main_fs_bigclock_clock_pane_t

0x1d56,	// (0x000350ac) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1d56,	// (0x000350ac) list_single_fs_bigclock_indicator_pane

0xb463,	// (0x0003e7b9) list_single_fs_bigclock_pane_ParamLimits

0xb463,	// (0x0003e7b9) list_single_fs_bigclock_pane

0x1d70,	// (0x000350c6) main_fs_bigclock_indicator_pane_t1

0x1d7f,	// (0x000350d5) list_single_fs_bigclock_pane_g1

0x1d87,	// (0x000350dd) list_single_fs_bigclock_pane_t1

0xe69c,	// (0x000419f2) main_fs_bigclock_swipe_pane_g1

0x1dca,	// (0x00035120) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x000431e4) main_fs_bigclock_swipe_pane_g

0x1dd2,	// (0x00035128) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1dd2,	// (0x00035128) main_fs_bigclock_swipe_pane_t1

0x628a,	// (0x000395e0) call_type_pane_ParamLimits

0x422a,	// (0x00037580) main_btmg_pane

0x3f8e,	// (0x000372e4) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3f8e,	// (0x000372e4) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe01,	// (0x00043157) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x00043157) list_single_cale_mrui_row_pane_g

0x1b74,	// (0x00034eca) list_recal_vselct_arw_lo_pane

0x1b7c,	// (0x00034ed2) list_recal_vselct_arw_up_pane

0x1b84,	// (0x00034eda) list_recal_vselct_pane

0x1def,	// (0x00035145) btmg_button_pane

0xb4c6,	// (0x0003e81c) main_btmg_pane_g1

0x422a,	// (0x00037580) bg_button_pane_cp044

0x1df9,	// (0x0003514f) btmg_button_pane_t1

0xe243,	// (0x00041599) aid_listscroll_gen

0x72db,	// (0x0003a631) main_cntbar_detail_pane

0x1732,	// (0x00034a88) list_cmail_folder_pane

0x1742,	// (0x00034a98) sp_fs_scroll_pane_cp03_ParamLimits

0x40ae,	// (0x00037404) list_single_fs_dyc_pane_cp01_ParamLimits

0x40ae,	// (0x00037404) list_single_fs_dyc_pane_cp01

0x1e07,	// (0x0003515d) aid_size_cmail_indent

0x40df,	// (0x00037435) list_single_dyc_row_pane_cp01

0xb4ee,	// (0x0003e844) cntbar_detail_list_pane_ParamLimits

0xb4ee,	// (0x0003e844) cntbar_detail_list_pane

0xb528,	// (0x0003e87e) main_cntbar_detail_cont_pane_ParamLimits

0xb528,	// (0x0003e87e) main_cntbar_detail_cont_pane

0x627e,	// (0x000395d4) scroll_pane_cp032_ParamLimits

0x627e,	// (0x000395d4) scroll_pane_cp032

0xb534,	// (0x0003e88a) cntbar_detail_list_event_pane_ParamLimits

0xb534,	// (0x0003e88a) cntbar_detail_list_event_pane

0xb4fa,	// (0x0003e850) cntbar_detail_list_shct_pane

0xc7f9,	// (0x0003fb4f) aid_list_gen

0x1e19,	// (0x0003516f) aid_scroll

0x1e22,	// (0x00035178) aid_size_touch_scroll_bar

0x06fd,	// (0x00033a53) aid_list_double

0x1e34,	// (0x0003518a) aid_list_single

0x40e8,	// (0x0003743e) aid_list_single_lg

0x40f1,	// (0x00037447) aid_list_z_g_a_sm

0x40f9,	// (0x0003744f) aid_list_z_g_d

0x4101,	// (0x00037457) aid_txt_z_prm

0x410f,	// (0x00037465) aid_txt_z_prm_cp01

0x411d,	// (0x00037473) aid_txt_z_sec

0xb548,	// (0x0003e89e) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb548,	// (0x0003e89e) main_cntbar_detail_cont_pane_g1

0xb555,	// (0x0003e8ab) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb555,	// (0x0003e8ab) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x000431e9) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x000431e9) main_cntbar_detail_cont_pane_g

0x1e64,	// (0x000351ba) main_cntbar_detail_cont_pane_t1

0x1e72,	// (0x000351c8) main_cntbar_detail_cont_pane_t2

0x1e80,	// (0x000351d6) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x000431ee) main_cntbar_detail_cont_pane_t

0xb561,	// (0x0003e8b7) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb561,	// (0x0003e8b7) cell_cntbar_detail_list_shct_pane

0x1e8e,	// (0x000351e4) cntbar_detail_list_shct_pane_g1

0x1e97,	// (0x000351ed) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x000431f5) cntbar_detail_list_shct_pane_g

0xb575,	// (0x0003e8cb) cntbar_detail_list_event_pane_g1_ParamLimits

0xb575,	// (0x0003e8cb) cntbar_detail_list_event_pane_g1

0xb581,	// (0x0003e8d7) cntbar_detail_list_event_pane_g2_ParamLimits

0xb581,	// (0x0003e8d7) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x000431fa) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x000431fa) cntbar_detail_list_event_pane_g

0xb5ed,	// (0x0003e943) cntbar_detail_list_event_pane_t1_ParamLimits

0xb5ed,	// (0x0003e943) cntbar_detail_list_event_pane_t1

0xb602,	// (0x0003e958) cntbar_detail_list_event_pane_t2_ParamLimits

0xb602,	// (0x0003e958) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x00043207) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x00043207) cntbar_detail_list_event_pane_t

0xe69c,	// (0x000419f2) cell_cntbar_detail_list_shct_pane_g1

0x6623,	// (0x00039979) navi_pane_mv_g3

0x72db,	// (0x0003a631) main_cntbar_detail_pane_ParamLimits

0x422a,	// (0x00037580) main_notif_wgt_pane

0x8c01,	// (0x0003bf57) aid_tch_main_mp4_pane_g4

0x8e36,	// (0x0003c18c) popup_slider_window_cp02

0x1b6a,	// (0x00034ec0) list_recal_day_event_pane

0xb4ce,	// (0x0003e824) cntbar_detail_btn_pane_ParamLimits

0xb4ce,	// (0x0003e824) cntbar_detail_btn_pane

0xb4de,	// (0x0003e834) cntbar_detail_btn_pane_cp01_ParamLimits

0xb4de,	// (0x0003e834) cntbar_detail_btn_pane_cp01

0xb4fa,	// (0x0003e850) cntbar_detail_list_shct_pane_ParamLimits

0xb506,	// (0x0003e85c) cntbar_detail_pane_g1_ParamLimits

0xb506,	// (0x0003e85c) cntbar_detail_pane_g1

0xb512,	// (0x0003e868) cntbar_detail_pane_t1_ParamLimits

0xb512,	// (0x0003e868) cntbar_detail_pane_t1

0xb58d,	// (0x0003e8e3) cntbar_detail_list_event_pane_g3_ParamLimits

0xb58d,	// (0x0003e8e3) cntbar_detail_list_event_pane_g3

0xb5a5,	// (0x0003e8fb) cntbar_detail_list_event_pane_g4_ParamLimits

0xb5a5,	// (0x0003e8fb) cntbar_detail_list_event_pane_g4

0xb5bd,	// (0x0003e913) cntbar_detail_list_event_pane_g5_ParamLimits

0xb5bd,	// (0x0003e913) cntbar_detail_list_event_pane_g5

0xb5d5,	// (0x0003e92b) cntbar_detail_list_event_pane_g6_ParamLimits

0xb5d5,	// (0x0003e92b) cntbar_detail_list_event_pane_g6

0xb617,	// (0x0003e96d) cntbar_detail_list_event_pane_t3_ParamLimits

0xb617,	// (0x0003e96d) cntbar_detail_list_event_pane_t3

0xb629,	// (0x0003e97f) popup_notif_wgt_window_ParamLimits

0xb629,	// (0x0003e97f) popup_notif_wgt_window

0xb639,	// (0x0003e98f) popup_submenu_window_cp01_ParamLimits

0xb639,	// (0x0003e98f) popup_submenu_window_cp01

0xce23,	// (0x00040179) bg_popup_window_pane_cp10

0x1ea0,	// (0x000351f6) listscroll_notif_wgt_pane

0x1eaa,	// (0x00035200) list_notif_wgt_window

0x1eb3,	// (0x00035209) scroll_pane_cp033

0x1ebc,	// (0x00035212) list_notif_wgt_row_pane_ParamLimits

0x1ebc,	// (0x00035212) list_notif_wgt_row_pane

0x1ed0,	// (0x00035226) aid_size_list_notif_wgt_del

0x1ed9,	// (0x0003522f) list_notif_wgt_row_pane_g1

0x1ee1,	// (0x00035237) list_notif_wgt_row_pane_g2

0x1ee9,	// (0x0003523f) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x0004320e) list_notif_wgt_row_pane_g

0x1ef2,	// (0x00035248) list_notif_wgt_row_pane_t1

0x1f00,	// (0x00035256) list_notif_wgt_row_pane_t2

0x1f0e,	// (0x00035264) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x00043215) list_notif_wgt_row_pane_t

0x034d,	// (0x000336a3) list_recal_day_event_pane_g1

0x1f1c,	// (0x00035272) list_recal_day_event_pane_t1

0x422a,	// (0x00037580) bg_button_pane_cp045

0x1f2b,	// (0x00035281) cntbar_detail_btn_pane_t1

0xe24b,	// (0x000415a1) main_callh_pane_ParamLimits

0xe24b,	// (0x000415a1) main_callh_pane

0x422a,	// (0x00037580) main_coverflow0_pane

0x422a,	// (0x00037580) main_wgtman_pane

0xacf4,	// (0x0003e04a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xacf4,	// (0x0003e04a) main_fs_bigclock_unlock_btn_pane

0x170c,	// (0x00034a62) bg_button_pane_cp16

0x171c,	// (0x00034a72) cell_tport_appsw_pane_g3

0xb647,	// (0x0003e99d) cf0_flow_pane_ParamLimits

0xb647,	// (0x0003e99d) cf0_flow_pane

0x1f39,	// (0x0003528f) listscroll_cf0_pane

0x1f42,	// (0x00035298) main_cf0_pane_g1

0xb656,	// (0x0003e9ac) main_cf0_pane_t1_ParamLimits

0xb656,	// (0x0003e9ac) main_cf0_pane_t1

0xb66a,	// (0x0003e9c0) main_cf0_pane_t2_ParamLimits

0xb66a,	// (0x0003e9c0) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x0004321c) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x0004321c) main_cf0_pane_t

0x1f4c,	// (0x000352a2) scroll_pane_cp11

0xb67e,	// (0x0003e9d4) cf0_flow_pane_g1

0xb686,	// (0x0003e9dc) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x00043221) cf0_flow_pane_g

0xb68e,	// (0x0003e9e4) cf0_flow_pane_t1

0x422a,	// (0x00037580) main_call6_pane

0x422a,	// (0x00037580) main_calllock_pane

0xb69c,	// (0x0003e9f2) call6_btn_grp_pane_ParamLimits

0xb69c,	// (0x0003e9f2) call6_btn_grp_pane

0xb6ab,	// (0x0003ea01) call6_pane_g1_ParamLimits

0xb6ab,	// (0x0003ea01) call6_pane_g1

0xb6ba,	// (0x0003ea10) popup_call6_1st_window_ParamLimits

0xb6ba,	// (0x0003ea10) popup_call6_1st_window

0xb6c8,	// (0x0003ea1e) popup_call6_2nd_window_ParamLimits

0xb6c8,	// (0x0003ea1e) popup_call6_2nd_window

0xb6d6,	// (0x0003ea2c) cell_call6_btn_pane_ParamLimits

0xb6d6,	// (0x0003ea2c) cell_call6_btn_pane

0xce23,	// (0x00040179) bg_popup_call2_in_pane_cp03

0x1f57,	// (0x000352ad) popup_call6_1st_window_g1

0x1f5f,	// (0x000352b5) popup_call6_1st_window_g2

0x1f67,	// (0x000352bd) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x00043226) popup_call6_1st_window_g

0x1f6f,	// (0x000352c5) popup_call6_1st_window_t1

0x1f7e,	// (0x000352d4) popup_call6_1st_window_t2

0x1f8e,	// (0x000352e4) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x0004322d) popup_call6_1st_window_t

0xce23,	// (0x00040179) bg_popup_call2_in_pane_cp04

0x1f57,	// (0x000352ad) popup_call6_2nd_window_g1

0x1f5f,	// (0x000352b5) popup_call6_2nd_window_g2

0x1f67,	// (0x000352bd) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x00043226) popup_call6_2nd_window_g

0x1f6f,	// (0x000352c5) popup_call6_2nd_window_t1

0x422a,	// (0x00037580) bg_button_pane_cp15

0x1f9e,	// (0x000352f4) cell_call6_btn_pane_g1

0x1fa7,	// (0x000352fd) cell_call6_btn_pane_t1

0xb6e5,	// (0x0003ea3b) listscroll_wgtman_pane_ParamLimits

0xb6e5,	// (0x0003ea3b) listscroll_wgtman_pane

0xb703,	// (0x0003ea59) wgtman_btn_pane_ParamLimits

0xb703,	// (0x0003ea59) wgtman_btn_pane

0xccd6,	// (0x0004002c) aid_scroll_copy1

0x1fb6,	// (0x0003530c) list_wgtman_pane

0xb738,	// (0x0003ea8e) wgtman_btn_pane_g1_ParamLimits

0xb738,	// (0x0003ea8e) wgtman_btn_pane_g1

0xb760,	// (0x0003eab6) wgtman_btn_pane_t1_ParamLimits

0xb760,	// (0x0003eab6) wgtman_btn_pane_t1

0x1fc0,	// (0x00035316) wgtman_btn_pane_t2_ParamLimits

0x1fc0,	// (0x00035316) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x00043234) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x00043234) wgtman_btn_pane_t

0xb797,	// (0x0003eaed) listrow_wgtman_pane_ParamLimits

0xb797,	// (0x0003eaed) listrow_wgtman_pane

0xb7b3,	// (0x0003eb09) listrow_wgtman_pane_g1

0xb7bc,	// (0x0003eb12) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x00043239) listrow_wgtman_pane_g

0x412b,	// (0x00037481) listrow_wgtman_pane_t1

0x4139,	// (0x0003748f) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x0004323e) listrow_wgtman_pane_t

0x4147,	// (0x0003749d) wait_bar_pane_cp09

0x1fd7,	// (0x0003532d) main_calllock_btn_pane

0x1fe1,	// (0x00035337) main_calllock_pane_g1

0x422a,	// (0x00037580) bg_button_pane_cp17

0x1fec,	// (0x00035342) main_calllock_btn_pane_g1

0x1ff5,	// (0x0003534b) main_calllock_btn_pane_t1

0x422a,	// (0x00037580) main_dialer3_pane

0x422a,	// (0x00037580) main_fmrd2_pane

0xe69c,	// (0x000419f2) main_fs_bigclock_unlock_btn_pane_g1

0x200c,	// (0x00035362) main_fs_bigclock_unlock_btn_pane_t1

0xb7c6,	// (0x0003eb1c) area_fmrd2_info_pane_ParamLimits

0xb7c6,	// (0x0003eb1c) area_fmrd2_info_pane

0xb7d4,	// (0x0003eb2a) area_fmrd2_visual_pane_ParamLimits

0xb7d4,	// (0x0003eb2a) area_fmrd2_visual_pane

0xb7e2,	// (0x0003eb38) fmrd2_indi_pane_ParamLimits

0xb7e2,	// (0x0003eb38) fmrd2_indi_pane

0xb7ef,	// (0x0003eb45) area_fmrd2_visual_pane_g1

0xb7f7,	// (0x0003eb4d) area_fmrd2_visual_pane_t1

0xb807,	// (0x0003eb5d) area_fmrd2_visual_pane_t2

0xb817,	// (0x0003eb6d) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x00043248) area_fmrd2_visual_pane_t

0xb827,	// (0x0003eb7d) area_fmrd2_info_pane_g1

0xb82f,	// (0x0003eb85) area_fmrd2_info_pane_t1

0xb83f,	// (0x0003eb95) area_fmrd2_info_pane_t2

0xb84f,	// (0x0003eba5) area_fmrd2_info_pane_t3

0xb85f,	// (0x0003ebb5) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x0004324f) area_fmrd2_info_pane_t

0xb86d,	// (0x0003ebc3) fmrd2_indi_pane_t1

0xb87d,	// (0x0003ebd3) fmrd2_indi_pane_t2

0xb88d,	// (0x0003ebe3) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x00043258) fmrd2_indi_pane_t

0x111a,	// (0x00034470) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x111a,	// (0x00034470) list_single_fs_bigclock_indicator_pane_g5

0x11c1,	// (0x00034517) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x11c1,	// (0x00034517) list_single_fs_bigclock_indicator_pane_t5

0xb1ae,	// (0x0003e504) aid_cell_bcale_month_pane_ParamLimits

0xb1ae,	// (0x0003e504) aid_cell_bcale_month_pane

0xb1ba,	// (0x0003e510) bcale_month_pane_ParamLimits

0xb1ba,	// (0x0003e510) bcale_month_pane

0xb1ca,	// (0x0003e520) bcale_preview_pane_ParamLimits

0xb1ca,	// (0x0003e520) bcale_preview_pane

0x1d87,	// (0x000350dd) list_single_fs_bigclock_pane_t1_ParamLimits

0x1da6,	// (0x000350fc) list_single_fs_bigclock_pane_t2_ParamLimits

0x1da6,	// (0x000350fc) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x000431df) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x000431df) list_single_fs_bigclock_pane_t

0x2004,	// (0x0003535a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x00043243) main_fs_bigclock_unlock_btn_pane_g

0xb89b,	// (0x0003ebf1) aid_dia3_key_size_ParamLimits

0xb89b,	// (0x0003ebf1) aid_dia3_key_size

0xb8a7,	// (0x0003ebfd) aid_dia3_listrow_size_ParamLimits

0xb8a7,	// (0x0003ebfd) aid_dia3_listrow_size

0xb8b7,	// (0x0003ec0d) dia3_keypad_fun_pane_ParamLimits

0xb8b7,	// (0x0003ec0d) dia3_keypad_fun_pane

0xb8c9,	// (0x0003ec1f) dia3_keypad_num_pane_ParamLimits

0xb8c9,	// (0x0003ec1f) dia3_keypad_num_pane

0xb8db,	// (0x0003ec31) dia3_listscroll_pane_ParamLimits

0xb8db,	// (0x0003ec31) dia3_listscroll_pane

0xb8e9,	// (0x0003ec3f) dia3_numentry_pane_ParamLimits

0xb8e9,	// (0x0003ec3f) dia3_numentry_pane

0x201a,	// (0x00035370) dia3_list_pane

0x2025,	// (0x0003537b) scroll_pane_cp12

0x422a,	// (0x00037580) bg_dia3_numentry_pane

0xb8f7,	// (0x0003ec4d) dia3_numentry_pane_t1

0xb906,	// (0x0003ec5c) cell_dia3_key_num_pane

0xb90e,	// (0x0003ec64) cell_dia3_key0_fun_pane_ParamLimits

0xb90e,	// (0x0003ec64) cell_dia3_key0_fun_pane

0xb91b,	// (0x0003ec71) cell_dia3_key1_fun_pane_ParamLimits

0xb91b,	// (0x0003ec71) cell_dia3_key1_fun_pane

0xb928,	// (0x0003ec7e) dia3_listrow_pane

0x0e0d,	// (0x00034163) bg_dia3_numentry_pane_g1

0x422a,	// (0x00037580) bg_button_pane_cp21

0x2030,	// (0x00035386) cell_dia3_key_num_pane_t1

0x203e,	// (0x00035394) cell_dia3_key_num_pane_t2

0x204d,	// (0x000353a3) cell_dia3_key_num_pane_t3

0x205c,	// (0x000353b2) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x0004325f) cell_dia3_key_num_pane_t

0x422a,	// (0x00037580) bg_button_pane_cp19

0xb935,	// (0x0003ec8b) cell_dia3_key0_fun_pane_g1

0x422a,	// (0x00037580) bg_button_pane_cp20

0xb93d,	// (0x0003ec93) cell_dia3_key1_fun_pane_g1

0xb945,	// (0x0003ec9b) area_left_week_number_pane

0xb94e,	// (0x0003eca4) area_top_day_name_pane

0xb957,	// (0x0003ecad) frame_month_view_pane

0xb963,	// (0x0003ecb9) grid_month_view_pane

0xb96d,	// (0x0003ecc3) cell_top_day_name_pane_ParamLimits

0xb96d,	// (0x0003ecc3) cell_top_day_name_pane

0xb987,	// (0x0003ecdd) cell_area_left_week_number_pane_ParamLimits

0xb987,	// (0x0003ecdd) cell_area_left_week_number_pane

0xb99b,	// (0x0003ecf1) cell_month_view_pane_ParamLimits

0xb99b,	// (0x0003ecf1) cell_month_view_pane

0x206b,	// (0x000353c1) frm_month_g1

0xb9b8,	// (0x0003ed0e) frm_month_g2

0xb9c2,	// (0x0003ed18) frm_month_g3

0xb9cc,	// (0x0003ed22) frm_month_g4

0xb9d6,	// (0x0003ed2c) frm_month_g5

0xb9e0,	// (0x0003ed36) frm_month_g6

0xb9ea,	// (0x0003ed40) frm_month_g7

0x2074,	// (0x000353ca) frm_month_g8

0xb9f6,	// (0x0003ed4c) frm_month_g9

0xb9ff,	// (0x0003ed55) frm_month_g10

0xba08,	// (0x0003ed5e) frm_month_g11

0xba11,	// (0x0003ed67) frm_month_g12

0xba1a,	// (0x0003ed70) frm_month_g13

0xba23,	// (0x0003ed79) frm_month_g14

0xba2c,	// (0x0003ed82) frm_month_g15

0xba37,	// (0x0003ed8d) frm_month_g16

0x000f,

0xff12,	// (0x00043268) frm_month_g

0xba42,	// (0x0003ed98) cell_top_day_name_pane_t1

0xba51,	// (0x0003eda7) cell_area_left_week_number_pane_g1

0xba42,	// (0x0003ed98) cell_area_left_week_number_pane_t1

0xe69c,	// (0x000419f2) cell_month_view_pane_g1

0xba59,	// (0x0003edaf) cell_month_view_pane_t1

0x422a,	// (0x00037580) main_fps_pane

0x1488,	// (0x000347de) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x1488,	// (0x000347de) cmail_ddmenu_btn02_pane_cp1

0x14a4,	// (0x000347fa) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x14a4,	// (0x000347fa) cmail_ddmenu_btn02_pane_cp2

0xb3c2,	// (0x0003e718) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb3c2,	// (0x0003e718) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3c,	// (0x00043192) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3c,	// (0x00043192) cmail_ddmenu_btn02_pane_g

0xb3e0,	// (0x0003e736) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb3e0,	// (0x0003e736) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe41,	// (0x00043197) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe41,	// (0x00043197) cmail_ddmenu_btn02_pane_t

0xba68,	// (0x0003edbe) fps_text_pane_ParamLimits

0xba68,	// (0x0003edbe) fps_text_pane

0xba75,	// (0x0003edcb) main_fps_pane_g1_ParamLimits

0xba75,	// (0x0003edcb) main_fps_pane_g1

0xba83,	// (0x0003edd9) wait_bar_pane_cp010_ParamLimits

0xba83,	// (0x0003edd9) wait_bar_pane_cp010

0xba8f,	// (0x0003ede5) fps_text_pane_t1_ParamLimits

0xba8f,	// (0x0003ede5) fps_text_pane_t1

0x921a,	// (0x0003c570) cam4_image_uncrop_pane_g1

0x9223,	// (0x0003c579) cam4_image_uncrop_pane_g2

0x922c,	// (0x0003c582) cam4_image_uncrop_pane_g3

0x9235,	// (0x0003c58b) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x00042c5e) cam4_image_uncrop_pane_g

0xb928,	// (0x0003ec7e) dia3_listrow_pane_ParamLimits

0x422a,	// (0x00037580) main_phob2_pane

0xb00b,	// (0x0003e361) cell_tport_appsw_pane_cp02_ParamLimits

0xb00b,	// (0x0003e361) cell_tport_appsw_pane_cp02

0xb01a,	// (0x0003e370) cell_tport_appsw_pane_cp03_ParamLimits

0xb01a,	// (0x0003e370) cell_tport_appsw_pane_cp03

0x422a,	// (0x00037580) phob2_contact_card_pane

0x422a,	// (0x00037580) phob2_listscroll_pane

0x207d,	// (0x000353d3) phob2_list_pane

0x2085,	// (0x000353db) scroll_pane_cp034

0xbaa8,	// (0x0003edfe) phob2_cc_data_pane_ParamLimits

0xbaa8,	// (0x0003edfe) phob2_cc_data_pane

0xbac2,	// (0x0003ee18) phob2_cc_listscroll_pane_ParamLimits

0xbac2,	// (0x0003ee18) phob2_cc_listscroll_pane

0xbadc,	// (0x0003ee32) list_double_large_graphic_phob2_pane_ParamLimits

0xbadc,	// (0x0003ee32) list_double_large_graphic_phob2_pane

0xbaff,	// (0x0003ee55) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xbaff,	// (0x0003ee55) list_double_large_graphic_phob2_pane_g1

0x414f,	// (0x000374a5) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x414f,	// (0x000374a5) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x00043289) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x00043289) list_double_large_graphic_phob2_pane_g

0x415b,	// (0x000374b1) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x415b,	// (0x000374b1) list_double_large_graphic_phob2_pane_t1

0x4170,	// (0x000374c6) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x4170,	// (0x000374c6) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x0004328e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x0004328e) list_double_large_graphic_phob2_pane_t

0x422a,	// (0x00037580) list_highlight_pane_cp024

0x208d,	// (0x000353e3) phob2_cc_button_pane

0xbb0c,	// (0x0003ee62) phob2_cc_data_pane_g1_ParamLimits

0xbb0c,	// (0x0003ee62) phob2_cc_data_pane_g1

0xbb18,	// (0x0003ee6e) phob2_cc_data_pane_g2_ParamLimits

0xbb18,	// (0x0003ee6e) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x00043293) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x00043293) phob2_cc_data_pane_g

0xbb24,	// (0x0003ee7a) phob2_cc_data_pane_t1_ParamLimits

0xbb24,	// (0x0003ee7a) phob2_cc_data_pane_t1

0xbb36,	// (0x0003ee8c) phob2_cc_data_pane_t2_ParamLimits

0xbb36,	// (0x0003ee8c) phob2_cc_data_pane_t2

0xbb48,	// (0x0003ee9e) phob2_cc_data_pane_t3_ParamLimits

0xbb48,	// (0x0003ee9e) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x00043298) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x00043298) phob2_cc_data_pane_t

0x2095,	// (0x000353eb) phob2_cc_list_pane_ParamLimits

0x2095,	// (0x000353eb) phob2_cc_list_pane

0x03e6,	// (0x0003373c) scroll_pane_cp035_ParamLimits

0x03e6,	// (0x0003373c) scroll_pane_cp035

0x72db,	// (0x0003a631) bg_button_pane_cp033

0x20a1,	// (0x000353f7) phob2_cc_button_pane_g1

0x20ad,	// (0x00035403) phob2_cc_button_pane_t1

0x20c2,	// (0x00035418) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x0004329f) phob2_cc_button_pane_t

0xbb5a,	// (0x0003eeb0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbb5a,	// (0x0003eeb0) list_double_large_graphic_phob2_cc_pane

0xbb8a,	// (0x0003eee0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbb8a,	// (0x0003eee0) list_double_large_graphic_phob2_cc_pane_g1

0x4182,	// (0x000374d8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x4182,	// (0x000374d8) list_double_large_graphic_phob2_cc_pane_g2

0x4191,	// (0x000374e7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x4191,	// (0x000374e7) list_double_large_graphic_phob2_cc_pane_g3

0x41a0,	// (0x000374f6) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x41a0,	// (0x000374f6) list_double_large_graphic_phob2_cc_pane_g4

0x41b1,	// (0x00037507) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x41b1,	// (0x00037507) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x000432a4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x000432a4) list_double_large_graphic_phob2_cc_pane_g

0x41c0,	// (0x00037516) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x41c0,	// (0x00037516) list_double_large_graphic_phob2_cc_pane_t1

0x41e9,	// (0x0003753f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x41e9,	// (0x0003753f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x000432af) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x000432af) list_double_large_graphic_phob2_cc_pane_t

0x20d4,	// (0x0003542a) list_highlight_pane_cp025_ParamLimits

0x20d4,	// (0x0003542a) list_highlight_pane_cp025

0x72db,	// (0x0003a631) bg_button_pane_cp033_ParamLimits

0x20a1,	// (0x000353f7) phob2_cc_button_pane_g1_ParamLimits

0x20ad,	// (0x00035403) phob2_cc_button_pane_t1_ParamLimits

0x20c2,	// (0x00035418) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x0004329f) phob2_cc_button_pane_t_ParamLimits

0x44e7,	// (0x0003783d) popup_wgtman_window

0x0184,	// (0x000334da) scroll_pane_cp038

0xb720,	// (0x0003ea76) wgtman_btn_pane_cp_01_ParamLimits

0xb720,	// (0x0003ea76) wgtman_btn_pane_cp_01

0x20e2,	// (0x00035438) wgtman_content_pane

0x1e2b,	// (0x00035181) wgtman_heading_pane

0x422a,	// (0x00037580) bg_heading_pane_cp02

0x20eb,	// (0x00035441) wgtman_heading_pane_g1

0x20f3,	// (0x00035449) wgtman_heading_pane_t1

0x2101,	// (0x00035457) scroll_pane_cp036

0x2109,	// (0x0003545f) wgtman_list_pane

0x2111,	// (0x00035467) wgtman_list_pane_t1_ParamLimits

0x2111,	// (0x00035467) wgtman_list_pane_t1

0x9179,	// (0x0003c4cf) cam4_grid_pane

0x3539,	// (0x0003688f) bg_button_pane_cp015_ParamLimits

0x9e12,	// (0x0003d168) bg_button_pane_cp016_ParamLimits

0x9e25,	// (0x0003d17b) bg_button_pane_cp017_ParamLimits

0x357d,	// (0x000368d3) popup_vitu2_query_window_g3_ParamLimits

0x357d,	// (0x000368d3) popup_vitu2_query_window_g3

0x35f6,	// (0x0003694c) popup_vitu2_query_window_t6_ParamLimits

0x35f6,	// (0x0003694c) popup_vitu2_query_window_t6

0x3621,	// (0x00036977) popup_vitu2_query_window_t7_ParamLimits

0x3621,	// (0x00036977) popup_vitu2_query_window_t7

0xf096,	// (0x000423ec) cam4_grid_pane_g1

0xf09f,	// (0x000423f5) cam4_grid_pane_g2

0x2133,	// (0x00035489) cam4_grid_pane_g3

0x213c,	// (0x00035492) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x000432b4) cam4_grid_pane_g

0x51df,	// (0x00038535) aid_placing_vt_slider_lsc_ParamLimits

0x551f,	// (0x00038875) vidtel_button_pane_ParamLimits

0x551f,	// (0x00038875) vidtel_button_pane

0x2147,	// (0x0003549d) bg_button_pane_cp034

0xbb9b,	// (0x0003eef1) vidtel_button_pane_g1

0x2151,	// (0x000354a7) vidtel_button_pane_t1

0x02c1,	// (0x00033617) aid_size_vtel_slider_touch

0x03e6,	// (0x0003373c) scroll_pane_cp039

0x0e4b,	// (0x000341a1) ncim_query_button_pane_cp01_ParamLimits

0x0e6a,	// (0x000341c0) ncimui_query_pane_g1_ParamLimits

0x72db,	// (0x0003a631) input_focus_pane_cp012_ParamLimits

0x0e8f,	// (0x000341e5) ncim_query_entry_pane_t1_ParamLimits

0x03e6,	// (0x0003373c) scroll_pane_cp039_ParamLimits

0x6595,	// (0x000398eb) navi_pane_bcale_mc_g1

0x659d,	// (0x000398f3) navi_pane_bcale_mc_t1

0x14e1,	// (0x00034837) main_sp_fs_email_pane_g1

0x14e9,	// (0x0003483f) main_sp_fs_email_pane_g2

0x0001,

0xfcfa,	// (0x00043050) main_sp_fs_email_pane_g

0x1a21,	// (0x00034d77) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1a21,	// (0x00034d77) list_single_cale_mrui_row_pane_g3

0xb408,	// (0x0003e75e) list_single_recal_day_pane_g5_event_pane

0x1be6,	// (0x00034f3c) list_single_recal_day_pane_g7

0x215f,	// (0x000354b5) list_recal_day_event_pane_cp01

0x2168,	// (0x000354be) list_recal_vselct_arw_lo_pane_cp01

0x2170,	// (0x000354c6) list_recal_vselct_arw_up_pane_cp01

0x2178,	// (0x000354ce) list_recal_vselct_pane_cp01

0x034d,	// (0x000336a3) list_recal_day_event_pane_cp01_g1

0x2182,	// (0x000354d8) list_recal_day_event_pane_cp01_t1

0x1bee,	// (0x00034f44) list_single_recal_day_pane_t1_ParamLimits

0x1c00,	// (0x00034f56) list_single_recal_day_pane_t2_ParamLimits

0xfe51,	// (0x000431a7) list_single_recal_day_pane_t_ParamLimits

0xc369,	// (0x0003f6bf) bg_notes_pane_ParamLimits

0xc377,	// (0x0003f6cd) list_notes_pane_ParamLimits

0x481a,	// (0x00037b70) scroll_pane_cp06_ParamLimits

0xc399,	// (0x0003f6ef) main_notes_pane_ParamLimits

0x422a,	// (0x00037580) main_welc_pane

0xbba3,	// (0x0003eef9) main_welc_body_pane_ParamLimits

0xbba3,	// (0x0003eef9) main_welc_body_pane

0xbbb1,	// (0x0003ef07) main_welc_opti_pane_ParamLimits

0xbbb1,	// (0x0003ef07) main_welc_opti_pane

0xbbc0,	// (0x0003ef16) main_welc_pane_t1_ParamLimits

0xbbc0,	// (0x0003ef16) main_welc_pane_t1

0xbbd4,	// (0x0003ef2a) main_welc_body_row_pane_ParamLimits

0xbbd4,	// (0x0003ef2a) main_welc_body_row_pane

0xbc05,	// (0x0003ef5b) main_welc_opti_row_pane_ParamLimits

0xbc05,	// (0x0003ef5b) main_welc_opti_row_pane

0x2190,	// (0x000354e6) main_welc_opti_row_pane_g1

0x2198,	// (0x000354ee) main_welc_opti_row_pane_t1

0x21a7,	// (0x000354fd) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
