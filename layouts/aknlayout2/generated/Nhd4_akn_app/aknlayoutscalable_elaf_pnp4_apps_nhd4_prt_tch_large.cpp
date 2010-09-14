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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000640e2 };

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
0x373c,	// (0x0006781e) Screen

0x3748,	// (0x0006782a) application_window

0x37a4,	// (0x00067886) area_bottom_pane_ParamLimits

0x37a4,	// (0x00067886) area_bottom_pane

0x37fc,	// (0x000678de) area_top_pane_ParamLimits

0x37fc,	// (0x000678de) area_top_pane

0x3860,	// (0x00067942) call_video_uplink_pane_ParamLimits

0x3860,	// (0x00067942) call_video_uplink_pane

0x389f,	// (0x00067981) main_pane_ParamLimits

0x389f,	// (0x00067981) main_pane

0x8023,	// (0x0006c105) context_pane

0x8036,	// (0x0006c118) navi_pane

0x805c,	// (0x0006c13e) popup_cale_events_window_ParamLimits

0x805c,	// (0x0006c13e) popup_cale_events_window

0x8074,	// (0x0006c156) popup_mup_playback_window

0x807c,	// (0x0006c15e) signal_pane

0xeacc,	// (0x00072bae) main_browser_pane

0xec7e,	// (0x00072d60) main_burst_pane

0x7e99,	// (0x0006bf7b) main_calc_pane

0x7ea6,	// (0x0006bf88) main_cale_day_pane

0x3eb2,	// (0x00067f94) main_cale_month_pane

0x7ea6,	// (0x0006bf88) main_cale_week_pane

0xec7e,	// (0x00072d60) main_call_pane

0xe776,	// (0x00072858) main_call_poc_pane

0xec7e,	// (0x00072d60) main_camera_pane

0xec7e,	// (0x00072d60) main_chi_dic_pane

0x5c63,	// (0x00069d45) main_clock_pane

0xe776,	// (0x00072858) main_fmradio_pane

0xec7e,	// (0x00072d60) main_graph_messa_pane

0xe776,	// (0x00072858) main_help_pane

0xeacc,	// (0x00072bae) main_im_pane

0xe9df,	// (0x00072ac1) main_image_pane_ParamLimits

0xe9df,	// (0x00072ac1) main_image_pane

0xe776,	// (0x00072858) main_location2_pane

0xec7e,	// (0x00072d60) main_location_pane

0xe9df,	// (0x00072ac1) main_messa_pane

0xe776,	// (0x00072858) main_mp2_pane

0xec7e,	// (0x00072d60) main_mp_pane

0xe776,	// (0x00072858) main_msg_pane

0xe776,	// (0x00072858) main_mup_eq_pane

0xe776,	// (0x00072858) main_mup_pane

0xeacc,	// (0x00072bae) main_notes_pane

0xe776,	// (0x00072858) main_pec_pane

0xe776,	// (0x00072858) main_phob_pane

0xe776,	// (0x00072858) main_pinb_pane

0xe776,	// (0x00072858) main_postcard_pane

0xe776,	// (0x00072858) main_qdial_pane

0xec7e,	// (0x00072d60) main_skin_pane

0xe776,	// (0x00072858) main_smil2_pane

0xec7e,	// (0x00072d60) main_smil_pane

0xec7e,	// (0x00072d60) main_video_pane

0xec7e,	// (0x00072d60) main_video_tele_pane

0xe9df,	// (0x00072ac1) main_viewer_pane_ParamLimits

0xe9df,	// (0x00072ac1) main_viewer_pane

0xec7e,	// (0x00072d60) main_vorec_pane

0x7ef1,	// (0x0006bfd3) popup_blid_sat_info_window_ParamLimits

0x7ef1,	// (0x0006bfd3) popup_blid_sat_info_window

0x7f11,	// (0x0006bff3) popup_dyc_status_message_window_ParamLimits

0x7f11,	// (0x0006bff3) popup_dyc_status_message_window

0x7f1f,	// (0x0006c001) popup_grid_large_graphic_window_ParamLimits

0x7f1f,	// (0x0006c001) popup_grid_large_graphic_window

0x7fae,	// (0x0006c090) popup_loc_request_window_ParamLimits

0x7fae,	// (0x0006c090) popup_loc_request_window

0x7ffb,	// (0x0006c0dd) popup_wml_address_window_ParamLimits

0x7ffb,	// (0x0006c0dd) popup_wml_address_window

0x7d38,	// (0x0006be1a) call_muted_g1

0x6ae6,	// (0x0006abc8) popup_call_audio_conf_window_ParamLimits

0x6ae6,	// (0x0006abc8) popup_call_audio_conf_window

0x7d48,	// (0x0006be2a) popup_call_audio_first_window_ParamLimits

0x7d48,	// (0x0006be2a) popup_call_audio_first_window

0x7d88,	// (0x0006be6a) popup_call_audio_in_window_ParamLimits

0x7d88,	// (0x0006be6a) popup_call_audio_in_window

0x7dac,	// (0x0006be8e) popup_call_audio_out_window_ParamLimits

0x7dac,	// (0x0006be8e) popup_call_audio_out_window

0x7dce,	// (0x0006beb0) popup_call_audio_second_window_ParamLimits

0x7dce,	// (0x0006beb0) popup_call_audio_second_window

0x7dfe,	// (0x0006bee0) popup_call_audio_wait_window_ParamLimits

0x7dfe,	// (0x0006bee0) popup_call_audio_wait_window

0x7e1f,	// (0x0006bf01) popup_number_entry_window_ParamLimits

0x7e1f,	// (0x0006bf01) popup_number_entry_window

0xe363,	// (0x00072445) bg_popup_call_pane_cp05_ParamLimits

0xe363,	// (0x00072445) bg_popup_call_pane_cp05

0xe383,	// (0x00072465) popup_number_entry_window_t1

0xe396,	// (0x00072478) popup_number_entry_window_t2

0xe3a8,	// (0x0007248a) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x0007314d) popup_number_entry_window_t

0xe3ba,	// (0x0007249c) text_title_cp2

0xe3cd,	// (0x000724af) bg_popup_call_pane_cp_ParamLimits

0xe3cd,	// (0x000724af) bg_popup_call_pane_cp

0xe3db,	// (0x000724bd) call_thumbnail_pane

0xe3e3,	// (0x000724c5) popup_call_audio_in_window_g1_ParamLimits

0xe3e3,	// (0x000724c5) popup_call_audio_in_window_g1

0xe3ef,	// (0x000724d1) popup_call_audio_in_window_g2_ParamLimits

0xe3ef,	// (0x000724d1) popup_call_audio_in_window_g2

0xe3fb,	// (0x000724dd) popup_call_audio_in_window_g3_ParamLimits

0xe3fb,	// (0x000724dd) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x00073156) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x00073156) popup_call_audio_in_window_g

0xe407,	// (0x000724e9) popup_call_audio_in_window_t1_ParamLimits

0xe407,	// (0x000724e9) popup_call_audio_in_window_t1

0xe423,	// (0x00072505) popup_call_audio_in_window_t2_ParamLimits

0xe423,	// (0x00072505) popup_call_audio_in_window_t2

0xe43f,	// (0x00072521) popup_call_audio_in_window_t3_ParamLimits

0xe43f,	// (0x00072521) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x0007315d) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x0007315d) popup_call_audio_in_window_t

0xe3cd,	// (0x000724af) bg_popup_call_pane_cp01_ParamLimits

0xe3cd,	// (0x000724af) bg_popup_call_pane_cp01

0xe3db,	// (0x000724bd) call_thumbnail_pane_cp02

0xe452,	// (0x00072534) call_type_pane_cp022

0xe45a,	// (0x0007253c) popup_call_audio_out_window_g1_ParamLimits

0xe45a,	// (0x0007253c) popup_call_audio_out_window_g1

0xe46c,	// (0x0007254e) popup_call_audio_out_window_g2_ParamLimits

0xe46c,	// (0x0007254e) popup_call_audio_out_window_g2

0xe478,	// (0x0007255a) popup_call_audio_out_window_g3_ParamLimits

0xe478,	// (0x0007255a) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x00073164) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x00073164) popup_call_audio_out_window_g

0xe48a,	// (0x0007256c) popup_call_audio_out_window_t1_ParamLimits

0xe48a,	// (0x0007256c) popup_call_audio_out_window_t1

0xe4a2,	// (0x00072584) popup_call_audio_out_window_t2_ParamLimits

0xe4a2,	// (0x00072584) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x0007316b) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x0007316b) popup_call_audio_out_window_t

0xe4b7,	// (0x00072599) bg_popup_call_pane_ParamLimits

0xe4b7,	// (0x00072599) bg_popup_call_pane

0x3aa3,	// (0x00067b85) call_thumbnail_pane_cp_ParamLimits

0x3aa3,	// (0x00067b85) call_thumbnail_pane_cp

0xe53b,	// (0x0007261d) call_type_pane_cp01_ParamLimits

0xe53b,	// (0x0007261d) call_type_pane_cp01

0xe57f,	// (0x00072661) popup_call_audio_first_window_g1_ParamLimits

0xe57f,	// (0x00072661) popup_call_audio_first_window_g1

0xe5cb,	// (0x000726ad) popup_call_audio_first_window_g2_ParamLimits

0xe5cb,	// (0x000726ad) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x00073170) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x00073170) popup_call_audio_first_window_g

0xe60f,	// (0x000726f1) popup_call_audio_first_window_t1_ParamLimits

0xe60f,	// (0x000726f1) popup_call_audio_first_window_t1

0xe6bb,	// (0x0007279d) popup_call_audio_first_window_t4_ParamLimits

0xe6bb,	// (0x0007279d) popup_call_audio_first_window_t4

0xe747,	// (0x00072829) popup_call_audio_first_window_t5_ParamLimits

0xe747,	// (0x00072829) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x00073175) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x00073175) popup_call_audio_first_window_t

0xe776,	// (0x00072858) bg_popup_call_pane_cp02

0xe780,	// (0x00072862) call_type_pane_cp023

0xe788,	// (0x0007286a) popup_call_audio_wait_window_g1

0xe790,	// (0x00072872) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x0007317c) popup_call_audio_wait_window_g

0xe798,	// (0x0007287a) popup_call_audio_wait_window_t3

0xe7a6,	// (0x00072888) bg_popup_call_pane_cp03_ParamLimits

0xe7a6,	// (0x00072888) bg_popup_call_pane_cp03

0xe806,	// (0x000728e8) call_thumbnail_pane_cp011_ParamLimits

0xe806,	// (0x000728e8) call_thumbnail_pane_cp011

0xe812,	// (0x000728f4) call_type_pane_cp034_ParamLimits

0xe812,	// (0x000728f4) call_type_pane_cp034

0xe84e,	// (0x00072930) popup_call_audio_second_window_g1_ParamLimits

0xe84e,	// (0x00072930) popup_call_audio_second_window_g1

0xe88a,	// (0x0007296c) popup_call_audio_second_window_g2_ParamLimits

0xe88a,	// (0x0007296c) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x00073181) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x00073181) popup_call_audio_second_window_g

0xe8c6,	// (0x000729a8) popup_call_audio_second_window_t1_ParamLimits

0xe8c6,	// (0x000729a8) popup_call_audio_second_window_t1

0xe947,	// (0x00072a29) popup_call_audio_second_window_t2_ParamLimits

0xe947,	// (0x00072a29) popup_call_audio_second_window_t2

0xe97d,	// (0x00072a5f) popup_call_audio_second_window_t3_ParamLimits

0xe97d,	// (0x00072a5f) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x00073186) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x00073186) popup_call_audio_second_window_t

0xe776,	// (0x00072858) bg_popup_call_pane_cp04

0xe9b3,	// (0x00072a95) list_conf_pane

0xe9bb,	// (0x00072a9d) popup_call_audio_conf_window_t1

0xe9d7,	// (0x00072ab9) call_thumbnail_pane_g1

0xe9df,	// (0x00072ac1) bg_pinb_pane_ParamLimits

0xe9df,	// (0x00072ac1) bg_pinb_pane

0xe9ed,	// (0x00072acf) find_pinb_pane

0xe9df,	// (0x00072ac1) listscroll_pinb_pane_ParamLimits

0xe9df,	// (0x00072ac1) listscroll_pinb_pane

0xe9f7,	// (0x00072ad9) pinb_bg_pane_g1

0xe9f7,	// (0x00072ad9) pinb_bg_pane_g2

0xe9f7,	// (0x00072ad9) pinb_bg_pane_g3

0xe9f7,	// (0x00072ad9) pinb_bg_pane_g4

0xe9f7,	// (0x00072ad9) pinb_bg_pane_g5

0xe9f7,	// (0x00072ad9) pinb_bg_pane_g6

0xe9f7,	// (0x00072ad9) pinb_bg_pane_g7

0xe9f7,	// (0x00072ad9) pinb_bg_pane_g8

0xe9f7,	// (0x00072ad9) pinb_bg_pane_g9

0xe9f7,	// (0x00072ad9) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x0007318d) pinb_bg_pane_g

0xe359,	// (0x0007243b) grid_pinb_pane

0xe359,	// (0x0007243b) list_pinb_pane

0xea01,	// (0x00072ae3) scroll_pane_cp01_ParamLimits

0xea01,	// (0x00072ae3) scroll_pane_cp01

0xea0f,	// (0x00072af1) find_pinb_pane_g1_ParamLimits

0xea0f,	// (0x00072af1) find_pinb_pane_g1

0xea27,	// (0x00072b09) find_pinb_pane_t1

0xea39,	// (0x00072b1b) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x000731a7) find_pinb_pane_t

0xea4e,	// (0x00072b30) input_focus_pane_cp01_ParamLimits

0xea4e,	// (0x00072b30) input_focus_pane_cp01

0xe9c9,	// (0x00072aab) cell_pinb_pane_ParamLimits

0xe9c9,	// (0x00072aab) cell_pinb_pane

0xea5a,	// (0x00072b3c) cell_pinb_pane_g1_ParamLimits

0xea5a,	// (0x00072b3c) cell_pinb_pane_g1

0xea68,	// (0x00072b4a) cell_pinb_pane_g2_ParamLimits

0xea68,	// (0x00072b4a) cell_pinb_pane_g2

0xea68,	// (0x00072b4a) cell_pinb_pane_g3_ParamLimits

0xea68,	// (0x00072b4a) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x000731ac) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x000731ac) cell_pinb_pane_g

0xe776,	// (0x00072858) grid_highlight_pane_cp01

0xe9c9,	// (0x00072aab) list_pinb_item_pane_ParamLimits

0xe9c9,	// (0x00072aab) list_pinb_item_pane

0xe359,	// (0x0007243b) list_highlight_pane_cp02

0xea76,	// (0x00072b58) list_pinb_item_pane_g1_ParamLimits

0xea76,	// (0x00072b58) list_pinb_item_pane_g1

0xea68,	// (0x00072b4a) list_pinb_item_pane_g2_ParamLimits

0xea68,	// (0x00072b4a) list_pinb_item_pane_g2

0xea5a,	// (0x00072b3c) list_pinb_item_pane_g3_ParamLimits

0xea5a,	// (0x00072b3c) list_pinb_item_pane_g3

0xea68,	// (0x00072b4a) list_pinb_item_pane_g4_ParamLimits

0xea68,	// (0x00072b4a) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x000731b3) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x000731b3) list_pinb_item_pane_g

0xea84,	// (0x00072b66) list_pinb_item_pane_t1_ParamLimits

0xea84,	// (0x00072b66) list_pinb_item_pane_t1

0x3ae1,	// (0x00067bc3) calc_display_pane

0x3aff,	// (0x00067be1) calc_paper_pane

0x3b1b,	// (0x00067bfd) grid_calc_pane

0xe776,	// (0x00072858) bg_list_pane_cp01

0x3b47,	// (0x00067c29) clock_g1

0x3b4f,	// (0x00067c31) clock_g2

0x0001,

0xf0da,	// (0x000731bc) clock_g

0x3b59,	// (0x00067c3b) clock_t1_ParamLimits

0x3b59,	// (0x00067c3b) clock_t1

0x3b6e,	// (0x00067c50) clock_t2_ParamLimits

0x3b6e,	// (0x00067c50) clock_t2

0x3b80,	// (0x00067c62) clock_t3_ParamLimits

0x3b80,	// (0x00067c62) clock_t3

0x3b92,	// (0x00067c74) clock_t4_ParamLimits

0x3b92,	// (0x00067c74) clock_t4

0x3ba4,	// (0x00067c86) clock_t5_ParamLimits

0x3ba4,	// (0x00067c86) clock_t5

0x3bb9,	// (0x00067c9b) clock_t6_ParamLimits

0x3bb9,	// (0x00067c9b) clock_t6

0x3bcb,	// (0x00067cad) clock_t7_ParamLimits

0x3bcb,	// (0x00067cad) clock_t7

0x3bdd,	// (0x00067cbf) clock_t8_ParamLimits

0x3bdd,	// (0x00067cbf) clock_t8

0x3bf3,	// (0x00067cd5) clock_t9_ParamLimits

0x3bf3,	// (0x00067cd5) clock_t9

0x0008,

0xf0df,	// (0x000731c1) clock_t_ParamLimits

0xf0df,	// (0x000731c1) clock_t

0xea98,	// (0x00072b7a) popup_clock_analogue_window_cp02

0xea98,	// (0x00072b7a) popup_clock_digital_window_cp01

0xe776,	// (0x00072858) listscroll_help_pane

0xe776,	// (0x00072858) phob_pre_status_pane

0xeaa0,	// (0x00072b82) grid_qdial_pane

0x3c09,	// (0x00067ceb) listscroll_mce_pane

0xe9df,	// (0x00072ac1) bg_notes_pane

0xeaaa,	// (0x00072b8c) list_notes_pane

0x3c27,	// (0x00067d09) scroll_pane_cp06

0xeab8,	// (0x00072b9a) bg_calc_paper_pane

0x3c36,	// (0x00067d18) list_calc_pane

0xeacc,	// (0x00072bae) bg_calc_display_pane

0x3c50,	// (0x00067d32) calc_display_pane_t1

0x3c65,	// (0x00067d47) calc_display_pane_t2

0x3c7a,	// (0x00067d5c) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x000731d4) calc_display_pane_t

0x3c8c,	// (0x00067d6e) cell_calc_pane_ParamLimits

0x3c8c,	// (0x00067d6e) cell_calc_pane

0xead8,	// (0x00072bba) bg_calc_paper_pane_g1

0xeae4,	// (0x00072bc6) bg_calc_paper_pane_g2

0xeaf0,	// (0x00072bd2) bg_calc_paper_pane_g3

0xeafc,	// (0x00072bde) bg_calc_paper_pane_g4

0xeb08,	// (0x00072bea) bg_calc_paper_pane_g5

0x3cb9,	// (0x00067d9b) bg_calc_paper_pane_g6

0x3cca,	// (0x00067dac) bg_calc_paper_pane_g7

0x3cdb,	// (0x00067dbd) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x000731db) bg_calc_paper_pane_g

0x3cec,	// (0x00067dce) calc_bg_paper_pane_g9

0x3cfd,	// (0x00067ddf) list_calc_item_pane_ParamLimits

0x3cfd,	// (0x00067ddf) list_calc_item_pane

0xeb14,	// (0x00072bf6) list_calc_item_pane_g1

0x3d2a,	// (0x00067e0c) list_calc_item_pane_t1_ParamLimits

0x3d2a,	// (0x00067e0c) list_calc_item_pane_t1

0x3d3c,	// (0x00067e1e) list_calc_item_pane_t2_ParamLimits

0x3d3c,	// (0x00067e1e) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x000731ec) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x000731ec) list_calc_item_pane_t

0xe9f7,	// (0x00072ad9) cell_calc_pane_g1

0xeb21,	// (0x00072c03) grid_highlight_pane_cp02

0x3d6c,	// (0x00067e4e) bg_calc_display_pane_g1

0x3d75,	// (0x00067e57) bg_calc_display_pane_g2

0x3d7f,	// (0x00067e61) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x000731f6) bg_calc_display_pane_g

0x3d88,	// (0x00067e6a) cell_qdial_pane_ParamLimits

0x3d88,	// (0x00067e6a) cell_qdial_pane

0x3d9c,	// (0x00067e7e) cell_qdial_pane_g1_ParamLimits

0x3d9c,	// (0x00067e7e) cell_qdial_pane_g1

0x3da9,	// (0x00067e8b) cell_qdial_pane_g2_ParamLimits

0x3da9,	// (0x00067e8b) cell_qdial_pane_g2

0xeb43,	// (0x00072c25) cell_qdial_pane_g3_ParamLimits

0xeb43,	// (0x00072c25) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x000731fd) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x000731fd) cell_qdial_pane_g

0x3dc6,	// (0x00067ea8) cell_qdial_pane_t1_ParamLimits

0x3dc6,	// (0x00067ea8) cell_qdial_pane_t1

0x3dde,	// (0x00067ec0) cell_qdial_pane_t2_ParamLimits

0x3dde,	// (0x00067ec0) cell_qdial_pane_t2

0x3df1,	// (0x00067ed3) cell_qdial_pane_t3_ParamLimits

0x3df1,	// (0x00067ed3) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x00073206) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x00073206) cell_qdial_pane_t

0xe776,	// (0x00072858) grid_highlight_pane_cp04

0xeb4f,	// (0x00072c31) thumbnail_qdial_pane_ParamLimits

0xeb4f,	// (0x00072c31) thumbnail_qdial_pane

0xebab,	// (0x00072c8d) list_help_pane

0xebb4,	// (0x00072c96) scroll_pane_cp02

0x3e04,	// (0x00067ee6) help_list_pane_t1_ParamLimits

0x3e04,	// (0x00067ee6) help_list_pane_t1

0x3e3e,	// (0x00067f20) bg_notes_pane_g2

0x3e46,	// (0x00067f28) bg_notes_pane_g3

0x3e4e,	// (0x00067f30) notes_bg_pane_g1

0x3e56,	// (0x00067f38) notes_bg_pane_g4

0x3e5e,	// (0x00067f40) notes_bg_pane_g5

0x3e66,	// (0x00067f48) notes_bg_pane_g6

0x3e6e,	// (0x00067f50) notes_bg_pane_g7

0x3e76,	// (0x00067f58) notes_bg_pane_g8

0x3e7e,	// (0x00067f60) notes_bg_pane_g9

0x0006,

0xf142,	// (0x00073224) notes_bg_pane_g

0x3e86,	// (0x00067f68) list_notes_text_pane_ParamLimits

0x3e86,	// (0x00067f68) list_notes_text_pane

0xebbd,	// (0x00072c9f) list_notes_text_pane_g1

0x2a64,	// (0x00066b46) list_notes_text_pane_t1

0x3eb2,	// (0x00067f94) listscroll_cale_week_pane

0x3ed7,	// (0x00067fb9) bg_cale_heading_pane

0xebe0,	// (0x00072cc2) bg_cale_pane_cp01

0x3ef9,	// (0x00067fdb) cale_week_corner_pane

0x3f13,	// (0x00067ff5) cale_week_day_heading_pane

0x3f35,	// (0x00068017) cale_week_scroll_pane_g1

0x3f52,	// (0x00068034) cale_week_scroll_pane_g2

0x3f65,	// (0x00068047) cale_week_scroll_pane_g3

0x3f78,	// (0x0006805a) cale_week_scroll_pane_g4

0x3f8b,	// (0x0006806d) cale_week_scroll_pane_g5

0x3f9e,	// (0x00068080) cale_week_scroll_pane_g6

0x3fb1,	// (0x00068093) cale_week_scroll_pane_g7

0x3fc6,	// (0x000680a8) cale_week_scroll_pane_g8

0x3fdb,	// (0x000680bd) cale_week_scroll_pane_g9

0x3fee,	// (0x000680d0) cale_week_scroll_pane_g10

0x4001,	// (0x000680e3) cale_week_scroll_pane_g11

0x4014,	// (0x000680f6) cale_week_scroll_pane_g12

0x402b,	// (0x0006810d) cale_week_scroll_pane_g13

0x4046,	// (0x00068128) cale_week_scroll_pane_g14

0x4061,	// (0x00068143) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x00073233) cale_week_scroll_pane_g

0x4091,	// (0x00068173) cale_week_time_pane

0x40a6,	// (0x00068188) grid_cale_week_pane

0xec0f,	// (0x00072cf1) scroll_pane_cp08

0x40c5,	// (0x000681a7) cell_cale_week_pane_ParamLimits

0x40c5,	// (0x000681a7) cell_cale_week_pane

0x4127,	// (0x00068209) cale_week_day_heading_pane_t1

0x4142,	// (0x00068224) cale_week_day_heading_pane_t2

0x415d,	// (0x0006823f) cale_week_day_heading_pane_t3

0x4178,	// (0x0006825a) cale_week_day_heading_pane_t4

0x4193,	// (0x00068275) cale_week_day_heading_pane_t5

0x41ae,	// (0x00068290) cale_week_day_heading_pane_t6

0x41c9,	// (0x000682ab) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x00073254) cale_week_day_heading_pane_t

0xec2c,	// (0x00072d0e) bg_cale_side_pane

0x41e4,	// (0x000682c6) cale_week_time_pane_t1

0x41fe,	// (0x000682e0) cale_week_time_pane_t2

0x4218,	// (0x000682fa) cale_week_time_pane_t3

0x4232,	// (0x00068314) cale_week_time_pane_t4

0x424c,	// (0x0006832e) cale_week_time_pane_t5

0x4266,	// (0x00068348) cale_week_time_pane_t6

0x4286,	// (0x00068368) cale_week_time_pane_t7

0x42a8,	// (0x0006838a) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x00073263) cale_week_time_pane_t

0x42cc,	// (0x000683ae) cell_cale_week_pane_g2

0x42f0,	// (0x000683d2) cell_cale_week_pane_g3_ParamLimits

0x42f0,	// (0x000683d2) cell_cale_week_pane_g3

0xec3a,	// (0x00072d1c) grid_highlight_pane_cp07

0xec42,	// (0x00072d24) listscroll_gms_pane

0xec4c,	// (0x00072d2e) grid_gms_pane

0xec55,	// (0x00072d37) listscroll_gms_pane_g1

0xec5d,	// (0x00072d3f) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x00073274) listscroll_gms_pane_g

0x4308,	// (0x000683ea) scroll_pane_cp010

0x4313,	// (0x000683f5) cell_gms_pane_ParamLimits

0x4313,	// (0x000683f5) cell_gms_pane

0x4323,	// (0x00068405) cell_gms_pane_g1

0xec65,	// (0x00072d47) cell_gms_pane_g2

0xebbd,	// (0x00072c9f) cell_gms_pane_g3

0xec6d,	// (0x00072d4f) cell_gms_pane_g4

0x0003,

0xf197,	// (0x00073279) cell_gms_pane_g

0xec76,	// (0x00072d58) grid_highlight_pane_cp09

0x7cbc,	// (0x0006bd9e) phob_pre_status_pane_g1

0x7cc4,	// (0x0006bda6) phob_pre_status_pane_g2

0x7ccc,	// (0x0006bdae) phob_pre_status_pane_g3

0x7cd4,	// (0x0006bdb6) phob_pre_status_pane_g4

0x0004,

0xf573,	// (0x00073655) phob_pre_status_pane_g

0x7ce4,	// (0x0006bdc6) phob_pre_status_pane_t1

0x7cf4,	// (0x0006bdd6) phob_pre_status_pane_t2

0x7d04,	// (0x0006bde6) phob_pre_status_pane_t3

0x0002,

0xf57e,	// (0x00073660) phob_pre_status_pane_t

0xec7e,	// (0x00072d60) bg_list_pane_cp05

0x4333,	// (0x00068415) grid_vorec_pane

0x433d,	// (0x0006841f) vorec_t1

0x434b,	// (0x0006842d) vorec_t2

0x4359,	// (0x0006843b) vorec_t3

0x4367,	// (0x00068449) vorec_t4

0xc765,	// (0x00070847) vorec_t5

0xc773,	// (0x00070855) vorec_t6

0x0004,

0xf1a0,	// (0x00073282) vorec_t

0xc781,	// (0x00070863) wait_bar_pane_cp01

0x4383,	// (0x00068465) cell_vorec_pane_ParamLimits

0x4383,	// (0x00068465) cell_vorec_pane

0x4396,	// (0x00068478) cell_vorec_pane_g1

0xe776,	// (0x00072858) grid_highlight_pane_cp05

0xe9c9,	// (0x00072aab) cams_zoom_pane

0xe9c9,	// (0x00072aab) image_vga_pane

0xea68,	// (0x00072b4a) main_camera_pane_g1

0xea68,	// (0x00072b4a) main_camera_pane_g2

0xea68,	// (0x00072b4a) main_camera_pane_g3

0xea68,	// (0x00072b4a) main_camera_pane_g4

0xea68,	// (0x00072b4a) main_camera_pane_g5

0xea68,	// (0x00072b4a) main_camera_pane_g6

0xea68,	// (0x00072b4a) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x0007328d) main_camera_pane_g

0xf057,	// (0x00073139) main_camera_pane_t1

0xf057,	// (0x00073139) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x0007329e) main_camera_pane_t

0x43a0,	// (0x00068482) cams_zoom_pane_cp_ParamLimits

0x43a0,	// (0x00068482) cams_zoom_pane_cp

0x43ce,	// (0x000684b0) image_cif_pane_ParamLimits

0x43ce,	// (0x000684b0) image_cif_pane

0xe359,	// (0x0007243b) image_subqcif_pane

0x43dc,	// (0x000684be) main_video_pane_g1_ParamLimits

0x43dc,	// (0x000684be) main_video_pane_g1

0x4404,	// (0x000684e6) main_video_pane_g2_ParamLimits

0x4404,	// (0x000684e6) main_video_pane_g2

0x4437,	// (0x00068519) main_video_pane_g3_ParamLimits

0x4437,	// (0x00068519) main_video_pane_g3

0x4437,	// (0x00068519) main_video_pane_g4_ParamLimits

0x4437,	// (0x00068519) main_video_pane_g4

0x4465,	// (0x00068547) main_video_pane_g5_ParamLimits

0x4465,	// (0x00068547) main_video_pane_g5

0xec86,	// (0x00072d68) main_video_pane_g6_ParamLimits

0xec86,	// (0x00072d68) main_video_pane_g6

0x0006,

0xf1c1,	// (0x000732a3) main_video_pane_g_ParamLimits

0xf1c1,	// (0x000732a3) main_video_pane_g

0x4481,	// (0x00068563) main_video_pane_t1_ParamLimits

0x4481,	// (0x00068563) main_video_pane_t1

0xeca0,	// (0x00072d82) cams_zoom_pane_g1

0xeca0,	// (0x00072d82) cams_zoom_pane_g2

0xeca0,	// (0x00072d82) cams_zoom_pane_g3

0xeca0,	// (0x00072d82) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x000732b2) cams_zoom_pane_g

0x44c7,	// (0x000685a9) grid_cams_pane

0x44d5,	// (0x000685b7) linegrid_cams_pane

0x44e3,	// (0x000685c5) cell_cams_pane_ParamLimits

0x44e3,	// (0x000685c5) cell_cams_pane

0xecaa,	// (0x00072d8c) cams_burst_image_pane

0xecb2,	// (0x00072d94) cell_cams_pane_g1

0xe776,	// (0x00072858) grid_highlight_pane_cp03

0xe9f7,	// (0x00072ad9) mp_bg_pane_g1

0xe359,	// (0x0007243b) bg_list_pane_cp03

0xe359,	// (0x0007243b) bg_mp_pane

0xe359,	// (0x0007243b) grid_mp_pane

0xeca0,	// (0x00072d82) media_player_g1

0x591b,	// (0x000699fd) media_player_t1

0x591b,	// (0x000699fd) media_player_t2

0x591b,	// (0x000699fd) media_player_t3

0x591b,	// (0x000699fd) media_player_t4

0x591b,	// (0x000699fd) media_player_t5

0x591b,	// (0x000699fd) media_player_t6

0x591b,	// (0x000699fd) media_player_t7

0x0006,

0xf55d,	// (0x0007363f) media_player_t

0xe359,	// (0x0007243b) wait_bar_pane_cp02

0xf542,	// (0x00073624) main_usb_pane_t

0x5c63,	// (0x00069d45) cell_mp_pane

0xe9f7,	// (0x00072ad9) cell_mp_pane_g1

0xe776,	// (0x00072858) grid_highlight_pane_cp06

0xecce,	// (0x00072db0) grid_skin_colour_pane

0xecd6,	// (0x00072db8) list_highlight_pane_cp03

0x44f6,	// (0x000685d8) skin_g1

0xecde,	// (0x00072dc0) skin_t1

0xeced,	// (0x00072dcf) skin_t2

0x0001,

0xf1fe,	// (0x000732e0) skin_t

0x4500,	// (0x000685e2) cell_skin_colour_pane_ParamLimits

0x4500,	// (0x000685e2) cell_skin_colour_pane

0xecfb,	// (0x00072ddd) cell_skin_colour_pane_g1

0x4584,	// (0x00068666) call_video_g1_ParamLimits

0x4584,	// (0x00068666) call_video_g1

0x4594,	// (0x00068676) call_video_g2_ParamLimits

0x4594,	// (0x00068676) call_video_g2

0x0001,

0xf203,	// (0x000732e5) call_video_g_ParamLimits

0xf203,	// (0x000732e5) call_video_g

0x45ee,	// (0x000686d0) call_video_uplink_pane_cp1_ParamLimits

0x45ee,	// (0x000686d0) call_video_uplink_pane_cp1

0xed0d,	// (0x00072def) call_video_uplink_pane_cp2

0x46ba,	// (0x0006879c) video_down_crop_pane_ParamLimits

0x46ba,	// (0x0006879c) video_down_crop_pane

0x47ac,	// (0x0006888e) video_down_pane_ParamLimits

0x47ac,	// (0x0006888e) video_down_pane

0xed15,	// (0x00072df7) video_down_subqcif_pane_ParamLimits

0xed15,	// (0x00072df7) video_down_subqcif_pane

0xed2d,	// (0x00072e0f) video_down_subqcif_pane_cp_ParamLimits

0xed2d,	// (0x00072e0f) video_down_subqcif_pane_cp

0xed53,	// (0x00072e35) im_reading_pane_ParamLimits

0xed53,	// (0x00072e35) im_reading_pane

0x48cc,	// (0x000689ae) im_writing_pane_ParamLimits

0x48cc,	// (0x000689ae) im_writing_pane

0x48ea,	// (0x000689cc) im_reading_pane_t1

0xed6d,	// (0x00072e4f) list_im_pane

0xed7e,	// (0x00072e60) scroll_pane_cp07

0x4942,	// (0x00068a24) im_writing_pane_t1_ParamLimits

0x4942,	// (0x00068a24) im_writing_pane_t1

0xed97,	// (0x00072e79) im_writing_pane_t2_ParamLimits

0xed97,	// (0x00072e79) im_writing_pane_t2

0x0001,

0xf20d,	// (0x000732ef) im_writing_pane_t_ParamLimits

0xf20d,	// (0x000732ef) im_writing_pane_t

0xe776,	// (0x00072858) input_focus_pane_cp04

0xe776,	// (0x00072858) input_focus_pane_cp05

0x4954,	// (0x00068a36) list_im_single_pane_ParamLimits

0x4954,	// (0x00068a36) list_im_single_pane

0x497b,	// (0x00068a5d) list_single_im_pane_t1

0xec7e,	// (0x00072d60) blid_accuracy_pane

0xec7e,	// (0x00072d60) blid_compass_pane

0x7cad,	// (0x0006bd8f) main_location_t1

0x7cad,	// (0x0006bd8f) main_location_t2

0x7cad,	// (0x0006bd8f) main_location_t3

0x0002,

0xf56c,	// (0x0007364e) main_location_t

0xe776,	// (0x00072858) aid_levels_location

0xe9f7,	// (0x00072ad9) blid_accuracy_pane_g1

0xe9f7,	// (0x00072ad9) blid_accuracy_pane_g2

0x0001,

0xf261,	// (0x00073343) blid_accuracy_pane_g

0xeddf,	// (0x00072ec1) wml_content_pane

0xee1d,	// (0x00072eff) wml_button_pane_ParamLimits

0xee1d,	// (0x00072eff) wml_button_pane

0x498a,	// (0x00068a6c) wml_list_single_large_pane_ParamLimits

0x498a,	// (0x00068a6c) wml_list_single_large_pane

0x49b5,	// (0x00068a97) wml_list_single_medium_pane_ParamLimits

0x49b5,	// (0x00068a97) wml_list_single_medium_pane

0x49e7,	// (0x00068ac9) wml_list_single_small_pane_ParamLimits

0x49e7,	// (0x00068ac9) wml_list_single_small_pane

0xee31,	// (0x00072f13) wml_selection_box_pane_ParamLimits

0xee31,	// (0x00072f13) wml_selection_box_pane

0xee44,	// (0x00072f26) wml_list_single_pane_t1

0xee53,	// (0x00072f35) wml_list_single_medium_pane_t1

0xee62,	// (0x00072f44) wml_list_single_large_pane_t1

0xee71,	// (0x00072f53) input_focus_pane_cp02_ParamLimits

0xee71,	// (0x00072f53) input_focus_pane_cp02

0xee84,	// (0x00072f66) wml_selection_box_pane_g1

0xee8d,	// (0x00072f6f) wml_selection_box_pane_t1_ParamLimits

0xee8d,	// (0x00072f6f) wml_selection_box_pane_t1

0xe9df,	// (0x00072ac1) bg_wml_button_pane_ParamLimits

0xe9df,	// (0x00072ac1) bg_wml_button_pane

0xeea5,	// (0x00072f87) wml_button_pane_g1

0xeead,	// (0x00072f8f) wml_button_pane_t1

0xeea5,	// (0x00072f87) wml_button_bg_pane_g1

0xeebd,	// (0x00072f9f) wml_button_bg_pane_g2

0xeec5,	// (0x00072fa7) wml_button_bg_pane_g3

0xeecd,	// (0x00072faf) wml_button_bg_pane_g4

0xeed5,	// (0x00072fb7) wml_button_bg_pane_g5

0xeedd,	// (0x00072fbf) wml_button_bg_pane_g6

0xeee5,	// (0x00072fc7) wml_button_bg_pane_g7

0xeeed,	// (0x00072fcf) wml_button_bg_pane_g8

0xeef5,	// (0x00072fd7) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x000732f4) wml_button_bg_pane_g

0x4a24,	// (0x00068b06) bg_list_pane_cp02

0xeefd,	// (0x00072fdf) mce_header_pane_ParamLimits

0xeefd,	// (0x00072fdf) mce_header_pane

0xef13,	// (0x00072ff5) mce_icon_pane

0xef13,	// (0x00072ff5) mce_image_pane

0xef1c,	// (0x00072ffe) mce_text_pane_ParamLimits

0xef1c,	// (0x00072ffe) mce_text_pane

0x4a2c,	// (0x00068b0e) scroll_pane_cp03

0xee15,	// (0x00072ef7) scroll_pane_cp04

0xef2f,	// (0x00073011) scroll_pane_cp05_ParamLimits

0xef2f,	// (0x00073011) scroll_pane_cp05

0x4a34,	// (0x00068b16) mce_header_field_pane_ParamLimits

0x4a34,	// (0x00068b16) mce_header_field_pane

0x4a54,	// (0x00068b36) mce_header_field_pane_2_ParamLimits

0x4a54,	// (0x00068b36) mce_header_field_pane_2

0x4a6a,	// (0x00068b4c) mce_header_field_pane_3

0x4a72,	// (0x00068b54) list_single_mce_message_pane_ParamLimits

0x4a72,	// (0x00068b54) list_single_mce_message_pane

0x4a83,	// (0x00068b65) list_single_mce_smart_pane_ParamLimits

0x4a83,	// (0x00068b65) list_single_mce_smart_pane

0xef3b,	// (0x0007301d) input_focus_pane_cp03

0xef44,	// (0x00073026) list_header_data_pane

0x4a9f,	// (0x00068b81) mce_header_field_pane_t1

0x4aad,	// (0x00068b8f) list_single_mce_header_pane_ParamLimits

0x4aad,	// (0x00068b8f) list_single_mce_header_pane

0xef4c,	// (0x0007302e) list_single_mce_header_pane_t1

0xef5b,	// (0x0007303d) list_single_mce_message_pane_g1

0xef63,	// (0x00073045) list_single_mce_message_pane_t1

0x4ae5,	// (0x00068bc7) bg_cale_heading_pane_cp01_ParamLimits

0x4ae5,	// (0x00068bc7) bg_cale_heading_pane_cp01

0xef71,	// (0x00073053) bg_cale_pane_cp02_ParamLimits

0xef71,	// (0x00073053) bg_cale_pane_cp02

0x4b33,	// (0x00068c15) cale_month_corner_pane

0x4b52,	// (0x00068c34) cale_month_day_heading_pane_ParamLimits

0x4b52,	// (0x00068c34) cale_month_day_heading_pane

0x4bb8,	// (0x00068c9a) cale_month_pane_g1_ParamLimits

0x4bb8,	// (0x00068c9a) cale_month_pane_g1

0x4bfb,	// (0x00068cdd) cale_month_pane_g2_ParamLimits

0x4bfb,	// (0x00068cdd) cale_month_pane_g2

0x4c35,	// (0x00068d17) cale_month_pane_g3_ParamLimits

0x4c35,	// (0x00068d17) cale_month_pane_g3

0x4c85,	// (0x00068d67) cale_month_pane_g4_ParamLimits

0x4c85,	// (0x00068d67) cale_month_pane_g4

0x4cd5,	// (0x00068db7) cale_month_pane_g5_ParamLimits

0x4cd5,	// (0x00068db7) cale_month_pane_g5

0x4d25,	// (0x00068e07) cale_month_pane_g6_ParamLimits

0x4d25,	// (0x00068e07) cale_month_pane_g6

0x4d75,	// (0x00068e57) cale_month_pane_g7_ParamLimits

0x4d75,	// (0x00068e57) cale_month_pane_g7

0x4ddd,	// (0x00068ebf) cale_month_pane_g8_ParamLimits

0x4ddd,	// (0x00068ebf) cale_month_pane_g8

0x4e45,	// (0x00068f27) cale_month_pane_g9_ParamLimits

0x4e45,	// (0x00068f27) cale_month_pane_g9

0x4ea3,	// (0x00068f85) cale_month_pane_g10_ParamLimits

0x4ea3,	// (0x00068f85) cale_month_pane_g10

0x4f01,	// (0x00068fe3) cale_month_pane_g11_ParamLimits

0x4f01,	// (0x00068fe3) cale_month_pane_g11

0x4f55,	// (0x00069037) cale_month_pane_g12_ParamLimits

0x4f55,	// (0x00069037) cale_month_pane_g12

0x4fab,	// (0x0006908d) cale_month_pane_g13_ParamLimits

0x4fab,	// (0x0006908d) cale_month_pane_g13

0x000c,

0xf225,	// (0x00073307) cale_month_pane_g_ParamLimits

0xf225,	// (0x00073307) cale_month_pane_g

0x5001,	// (0x000690e3) cale_month_week_pane

0x5025,	// (0x00069107) grid_cale_month_pane_ParamLimits

0x5025,	// (0x00069107) grid_cale_month_pane

0x5082,	// (0x00069164) cale_month_day_heading_pane_t1

0x5108,	// (0x000691ea) cale_month_day_heading_pane_t2

0x5181,	// (0x00069263) cale_month_day_heading_pane_t3

0x51fa,	// (0x000692dc) cale_month_day_heading_pane_t4

0x5273,	// (0x00069355) cale_month_day_heading_pane_t5

0x52ec,	// (0x000693ce) cale_month_day_heading_pane_t6

0x5365,	// (0x00069447) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x00073322) cale_month_day_heading_pane_t

0xec2c,	// (0x00072d0e) bg_cale_side_pane_cp01

0x53f6,	// (0x000694d8) cale_month_week_pane_t1

0x540f,	// (0x000694f1) cale_month_week_pane_t2

0x5428,	// (0x0006950a) cale_month_week_pane_t3

0x5441,	// (0x00069523) cale_month_week_pane_t4

0x545c,	// (0x0006953e) cale_month_week_pane_t5

0x547d,	// (0x0006955f) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x00073331) cale_month_week_pane_t

0x549e,	// (0x00069580) cell_cale_month_pane_ParamLimits

0x549e,	// (0x00069580) cell_cale_month_pane

0x55c4,	// (0x000696a6) cell_cale_month_pane_g1

0x55d0,	// (0x000696b2) cell_cale_month_pane_t1_ParamLimits

0x55d0,	// (0x000696b2) cell_cale_month_pane_t1

0xec3a,	// (0x00072d1c) grid_highlight_pane_cp08

0xe9f7,	// (0x00072ad9) main_smil_g1

0x55fc,	// (0x000696de) smil_status_pane

0xefb0,	// (0x00073092) smil_text_pane

0x7b05,	// (0x0006bbe7) bg_popup_call3_rect_pane_g8

0x7b0d,	// (0x0006bbef) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ed,	// (0x000735cf) bg_popup_call3_rect_pane_g

0x8112,	// (0x0006c1f4) smil_status_volume_pane_g1

0xefba,	// (0x0007309c) smil_status_pane_t1

0x8145,	// (0x0006c227) volume_smil_pane

0xefd1,	// (0x000730b3) list_smil_text_pane

0x560f,	// (0x000696f1) scroll_pane_cp011

0x561a,	// (0x000696fc) smil_text_list_pane_t1_ParamLimits

0x561a,	// (0x000696fc) smil_text_list_pane_t1

0x56a7,	// (0x00069789) aid_volume_smil_ParamLimits

0x56a7,	// (0x00069789) aid_volume_smil

0xe9f7,	// (0x00072ad9) smil_volume_pane_g1

0xe9f7,	// (0x00072ad9) smil_volume_pane_g2

0x0001,

0xf261,	// (0x00073343) smil_volume_pane_g

0x3eb2,	// (0x00067f94) listscroll_cale_day_pane

0xefdb,	// (0x000730bd) bg_cale_pane

0xeff3,	// (0x000730d5) list_cale_pane

0xf016,	// (0x000730f8) scroll_pane_cp09

0xf027,	// (0x00073109) cale_bg_pane_g1

0xf02f,	// (0x00073111) cale_bg_pane_g2

0xf037,	// (0x00073119) cale_bg_pane_g3

0xf03f,	// (0x00073121) cale_bg_pane_g4

0xf047,	// (0x00073129) cale_bg_pane_g5

0xf04f,	// (0x00073131) cale_bg_pane_g6

0x56c9,	// (0x000697ab) cale_bg_pane_g7

0x56d1,	// (0x000697b3) cale_bg_pane_g8

0x56d9,	// (0x000697bb) cale_bg_pane_g9

0x0008,

0xf266,	// (0x00073348) cale_bg_pane_g

0x56e9,	// (0x000697cb) list_cale_time_pane_ParamLimits

0x56e9,	// (0x000697cb) list_cale_time_pane

0x5711,	// (0x000697f3) list_cale_time_pane_g1_ParamLimits

0x5711,	// (0x000697f3) list_cale_time_pane_g1

0x571d,	// (0x000697ff) list_cale_time_pane_g2_ParamLimits

0x571d,	// (0x000697ff) list_cale_time_pane_g2

0x572a,	// (0x0006980c) list_cale_time_pane_g3_ParamLimits

0x572a,	// (0x0006980c) list_cale_time_pane_g3

0x5738,	// (0x0006981a) list_cale_time_pane_g4_ParamLimits

0x5738,	// (0x0006981a) list_cale_time_pane_g4

0x5746,	// (0x00069828) list_cale_time_pane_g5_ParamLimits

0x5746,	// (0x00069828) list_cale_time_pane_g5

0x0005,

0xf279,	// (0x0007335b) list_cale_time_pane_g_ParamLimits

0xf279,	// (0x0007335b) list_cale_time_pane_g

0x5761,	// (0x00069843) list_cale_time_pane_t1_ParamLimits

0x5761,	// (0x00069843) list_cale_time_pane_t1

0x5789,	// (0x0006986b) list_cale_time_pane_t2_ParamLimits

0x5789,	// (0x0006986b) list_cale_time_pane_t2

0x5e61,	// (0x00069f43) aid_blid_cardinal_pane

0x5eaf,	// (0x00069f91) compass_pane_t4

0x57b1,	// (0x00069893) list_cale_time_pane_t4_ParamLimits

0x57b1,	// (0x00069893) list_cale_time_pane_t4

0x5ebd,	// (0x00069f9f) compass_pane_t5

0x5ecd,	// (0x00069faf) compass_pane_t6

0x5edb,	// (0x00069fbd) compass_pane_t7

0x5f75,	// (0x0006a057) navi_pane_cc_t1

0x6190,	// (0x0006a272) aid_phob_thumbnail_center_pane

0x65d5,	// (0x0006a6b7) main_postcard_pane_g4_ParamLimits

0x0002,

0xf286,	// (0x00073368) list_cale_time_pane_t_ParamLimits

0xf286,	// (0x00073368) list_cale_time_pane_t

0xe3cd,	// (0x000724af) bg_popup_window_pane_cp02_ParamLimits

0xe3cd,	// (0x000724af) bg_popup_window_pane_cp02

0x57d9,	// (0x000698bb) heading_pane_cp01_ParamLimits

0x57d9,	// (0x000698bb) heading_pane_cp01

0x57e5,	// (0x000698c7) loc_req_pane_ParamLimits

0x57e5,	// (0x000698c7) loc_req_pane

0x57f5,	// (0x000698d7) loc_type_pane_ParamLimits

0x57f5,	// (0x000698d7) loc_type_pane

0x5807,	// (0x000698e9) loc_type_pane_t1_ParamLimits

0x5807,	// (0x000698e9) loc_type_pane_t1

0x5819,	// (0x000698fb) loc_type_pane_t2_ParamLimits

0x5819,	// (0x000698fb) loc_type_pane_t2

0x582b,	// (0x0006990d) loc_type_pane_t3_ParamLimits

0x582b,	// (0x0006990d) loc_type_pane_t3

0x0002,

0xf28d,	// (0x0007336f) loc_type_pane_t_ParamLimits

0xf28d,	// (0x0007336f) loc_type_pane_t

0x583d,	// (0x0006991f) list_loc_req_pane

0x5847,	// (0x00069929) scroll_pane_cp012

0x2a72,	// (0x00066b54) list_single_loc_request_popup_menu_pane_ParamLimits

0x2a72,	// (0x00066b54) list_single_loc_request_popup_menu_pane

0x5852,	// (0x00069934) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x5852,	// (0x00069934) list_single_loc_request_popup_menu_pane_g1

0x585e,	// (0x00069940) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x585e,	// (0x00069940) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf294,	// (0x00073376) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf294,	// (0x00073376) list_single_loc_request_popup_menu_pane_g

0x586a,	// (0x0006994c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x586a,	// (0x0006994c) list_single_loc_request_popup_menu_pane_t1

0x5880,	// (0x00069962) bg_popup_window_pane_cp03_ParamLimits

0x5880,	// (0x00069962) bg_popup_window_pane_cp03

0x588e,	// (0x00069970) heading_loc_req_pane_ParamLimits

0x588e,	// (0x00069970) heading_loc_req_pane

0x589a,	// (0x0006997c) popup_dyc_status_message_window_g1_ParamLimits

0x589a,	// (0x0006997c) popup_dyc_status_message_window_g1

0x58a6,	// (0x00069988) popup_dyc_status_message_window_t1_ParamLimits

0x58a6,	// (0x00069988) popup_dyc_status_message_window_t1

0x58b8,	// (0x0006999a) popup_dyc_status_message_window_t2_ParamLimits

0x58b8,	// (0x0006999a) popup_dyc_status_message_window_t2

0x58ca,	// (0x000699ac) popup_dyc_status_message_window_t3_ParamLimits

0x58ca,	// (0x000699ac) popup_dyc_status_message_window_t3

0x0002,

0xf299,	// (0x0007337b) popup_dyc_status_message_window_t_ParamLimits

0xf299,	// (0x0007337b) popup_dyc_status_message_window_t

0xe776,	// (0x00072858) bg_heading_pane_cp01

0x58dc,	// (0x000699be) heading_loc_req_pane_g1

0x58e4,	// (0x000699c6) heading_loc_req_pane_g2

0x58ec,	// (0x000699ce) heading_loc_req_pane_g3

0x0002,

0xf2a0,	// (0x00073382) heading_loc_req_pane_g

0x58f4,	// (0x000699d6) heading_loc_req_pane_t1

0x592b,	// (0x00069a0d) bg_popup_sub_pane_cp01_ParamLimits

0x592b,	// (0x00069a0d) bg_popup_sub_pane_cp01

0x5939,	// (0x00069a1b) popup_cale_events_window_g1_ParamLimits

0x5939,	// (0x00069a1b) popup_cale_events_window_g1

0x5959,	// (0x00069a3b) popup_cale_events_window_g2_ParamLimits

0x5959,	// (0x00069a3b) popup_cale_events_window_g2

0x0001,

0xf2c2,	// (0x000733a4) popup_cale_events_window_g_ParamLimits

0xf2c2,	// (0x000733a4) popup_cale_events_window_g

0x5979,	// (0x00069a5b) popup_cale_events_window_t1_ParamLimits

0x5979,	// (0x00069a5b) popup_cale_events_window_t1

0x598b,	// (0x00069a6d) popup_cale_events_window_t2_ParamLimits

0x598b,	// (0x00069a6d) popup_cale_events_window_t2

0x59c9,	// (0x00069aab) popup_cale_events_window_t3_ParamLimits

0x59c9,	// (0x00069aab) popup_cale_events_window_t3

0x5a03,	// (0x00069ae5) popup_cale_events_window_t4_ParamLimits

0x5a03,	// (0x00069ae5) popup_cale_events_window_t4

0x0003,

0xf2c7,	// (0x000733a9) popup_cale_events_window_t_ParamLimits

0xf2c7,	// (0x000733a9) popup_cale_events_window_t

0x5a39,	// (0x00069b1b) call_type_pane

0x5a45,	// (0x00069b27) popup_call_status_window_g1

0x5a53,	// (0x00069b35) popup_call_status_window_g2

0x5a5f,	// (0x00069b41) popup_call_status_window_g3

0x0002,

0xf2d0,	// (0x000733b2) popup_call_status_window_g

0x5a6b,	// (0x00069b4d) call_type_pane_g1

0x5a74,	// (0x00069b56) call_type_pane_g2

0x0001,

0xf2d7,	// (0x000733b9) call_type_pane_g

0xe776,	// (0x00072858) bg_popup_sub_pane_cp02

0x5a7d,	// (0x00069b5f) listscroll_popup_wml_pane

0x5a85,	// (0x00069b67) list_wml_pane

0x5a8f,	// (0x00069b71) scroll_pane_cp013

0x5a9a,	// (0x00069b7c) list_single_graphic_popup_wml_pane_ParamLimits

0x5a9a,	// (0x00069b7c) list_single_graphic_popup_wml_pane

0xe9f7,	// (0x00072ad9) list_single_graphic_popup_wml_pane_g1

0x5aae,	// (0x00069b90) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2dc,	// (0x000733be) list_single_graphic_popup_wml_pane_g

0x5ab6,	// (0x00069b98) list_single_graphic_popup_wml_pane_t1

0x5acc,	// (0x00069bae) aid_call_pane

0xe9d7,	// (0x00072ab9) popup_clock_analogue_window_g1

0xe9d7,	// (0x00072ab9) popup_clock_analogue_window_g2

0x5ad4,	// (0x00069bb6) popup_clock_analogue_window_g3

0x5ad4,	// (0x00069bb6) popup_clock_analogue_window_g4

0xe9f7,	// (0x00072ad9) popup_clock_analogue_window_g5

0x0004,

0xf2e1,	// (0x000733c3) popup_clock_analogue_window_g

0x5adc,	// (0x00069bbe) popup_clock_analogue_window_t1

0x5aea,	// (0x00069bcc) clock_digital_number_pane_ParamLimits

0x5aea,	// (0x00069bcc) clock_digital_number_pane

0x5af6,	// (0x00069bd8) clock_digital_number_pane_cp02_ParamLimits

0x5af6,	// (0x00069bd8) clock_digital_number_pane_cp02

0x5b02,	// (0x00069be4) clock_digital_number_pane_cp03_ParamLimits

0x5b02,	// (0x00069be4) clock_digital_number_pane_cp03

0x5b0e,	// (0x00069bf0) clock_digital_number_pane_cp04_ParamLimits

0x5b0e,	// (0x00069bf0) clock_digital_number_pane_cp04

0x5b1a,	// (0x00069bfc) clock_digital_separator_pane_ParamLimits

0x5b1a,	// (0x00069bfc) clock_digital_separator_pane

0x5b26,	// (0x00069c08) popup_clock_digital_window_t1

0xe9f7,	// (0x00072ad9) clock_digital_number_pane_g1

0xe9f7,	// (0x00072ad9) clock_digital_number_pane_g2

0x0001,

0xf261,	// (0x00073343) clock_digital_number_pane_g

0xe9f7,	// (0x00072ad9) clock_digital_separator_pane_g1

0xe9f7,	// (0x00072ad9) clock_digital_separator_pane_g2

0x0001,

0xf261,	// (0x00073343) clock_digital_separator_pane_g

0xe776,	// (0x00072858) bg_popup_window_pane_cp04

0x5b43,	// (0x00069c25) heading_pane_cp03

0xec7e,	// (0x00072d60) listscroll_popup_gms_pane

0xe776,	// (0x00072858) grid_large_graphic_popup_pane

0x5b4c,	// (0x00069c2e) listscroll_popup_gms_pane_g1

0x5b55,	// (0x00069c37) listscroll_popup_gms_pane_g2

0x0001,

0xf2ec,	// (0x000733ce) listscroll_popup_gms_pane_g

0x5b5e,	// (0x00069c40) scroll_pane_cp014

0xe9c9,	// (0x00072aab) cell_large_graphic_popup_pane_ParamLimits

0xe9c9,	// (0x00072aab) cell_large_graphic_popup_pane

0xea5a,	// (0x00072b3c) cell_large_graphic_popup_pane_g1_ParamLimits

0xea5a,	// (0x00072b3c) cell_large_graphic_popup_pane_g1

0x5b67,	// (0x00069c49) cell_large_graphic_popup_pane_g2_ParamLimits

0x5b67,	// (0x00069c49) cell_large_graphic_popup_pane_g2

0x5b75,	// (0x00069c57) cell_large_graphic_popup_pane_g3_ParamLimits

0x5b75,	// (0x00069c57) cell_large_graphic_popup_pane_g3

0x5b83,	// (0x00069c65) cell_large_graphic_popup_pane_g4_ParamLimits

0x5b83,	// (0x00069c65) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f1,	// (0x000733d3) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f1,	// (0x000733d3) cell_large_graphic_popup_pane_g

0xe776,	// (0x00072858) grid_highlight_pane_cp010

0xe9f7,	// (0x00072ad9) bg_popup_call_pane_g1

0x5b94,	// (0x00069c76) list_single_graphic_popup_conf_pane_ParamLimits

0x5b94,	// (0x00069c76) list_single_graphic_popup_conf_pane

0x5ba7,	// (0x00069c89) list_highlight_pane_cp01

0x5bb0,	// (0x00069c92) list_single_graphic_popup_conf_pane_g1

0x5bb8,	// (0x00069c9a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2fa,	// (0x000733dc) list_single_graphic_popup_conf_pane_g

0x5bc0,	// (0x00069ca2) list_single_graphic_popup_conf_pane_t1

0x5bce,	// (0x00069cb0) linegrid_cams_pane_g1

0x5bd7,	// (0x00069cb9) linegrid_cams_pane_g2

0xebbd,	// (0x00072c9f) linegrid_cams_pane_g3

0x5be0,	// (0x00069cc2) linegrid_cams_pane_g4

0x5be9,	// (0x00069ccb) linegrid_cams_pane_g5

0x5bf2,	// (0x00069cd4) linegrid_cams_pane_g6

0xec6d,	// (0x00072d4f) linegrid_cams_pane_g7

0x0006,

0xf2ff,	// (0x000733e1) linegrid_cams_pane_g

0x5bfb,	// (0x00069cdd) popup_clock_analogue_window

0x5bfb,	// (0x00069cdd) popup_clock_digital_window

0xe776,	// (0x00072858) popup_phob_thumbnail_window

0xe9f7,	// (0x00072ad9) call_video_uplink_pane_g1

0x5c04,	// (0x00069ce6) call_video_uplink_pane_g2

0x0001,

0xf30e,	// (0x000733f0) call_video_uplink_pane_g

0x5c0c,	// (0x00069cee) video_uplink_pane

0x5c14,	// (0x00069cf6) mce_image_pane_g1

0x5c1e,	// (0x00069d00) mce_image_pane_g2

0x5c26,	// (0x00069d08) mce_image_pane_g3

0x5c2e,	// (0x00069d10) mce_image_pane_g4

0x5c36,	// (0x00069d18) mce_image_pane_g5

0x0004,

0xf313,	// (0x000733f5) mce_image_pane_g

0x5c3e,	// (0x00069d20) control_top_pane_stacon_cp01_ParamLimits

0x5c3e,	// (0x00069d20) control_top_pane_stacon_cp01

0x5c52,	// (0x00069d34) uni_indicator_pane_stacon_cp01_ParamLimits

0x5c52,	// (0x00069d34) uni_indicator_pane_stacon_cp01

0x5c63,	// (0x00069d45) bg_popup_sub_pane_cp03

0x5c6d,	// (0x00069d4f) chi_dic_find_pane

0x5c75,	// (0x00069d57) listscroll_chi_dic_pane

0x5c7e,	// (0x00069d60) main_pane_chidic_g1

0x5c91,	// (0x00069d73) chi_dic_find_pane_t1

0x5c9f,	// (0x00069d81) find_chidic_pane

0x5ca8,	// (0x00069d8a) chi_dic_list_pane_ParamLimits

0x5ca8,	// (0x00069d8a) chi_dic_list_pane

0x5cb9,	// (0x00069d9b) scroll_pane_cp020

0x5cc1,	// (0x00069da3) find_chidic_pane_t1

0xe776,	// (0x00072858) input_focus_pane_cp06

0x5cd0,	// (0x00069db2) list_chi_dic_pane_ParamLimits

0x5cd0,	// (0x00069db2) list_chi_dic_pane

0x5ced,	// (0x00069dcf) list_chi_dic_pane_t1_ParamLimits

0x5ced,	// (0x00069dcf) list_chi_dic_pane_t1

0xe776,	// (0x00072858) list_highlight_pane_cp020

0x5d00,	// (0x00069de2) bg_cale_heading_pane_g1

0x5d08,	// (0x00069dea) bg_cale_heading_pane_g2

0x5d10,	// (0x00069df2) bg_cale_heading_pane_g3

0x5d18,	// (0x00069dfa) bg_cale_heading_pane_g4

0x5d22,	// (0x00069e04) bg_cale_heading_pane_g5

0x5d2c,	// (0x00069e0e) bg_cale_heading_pane_g6

0x5d34,	// (0x00069e16) bg_cale_heading_pane_g7

0x5d3c,	// (0x00069e1e) bg_cale_heading_pane_g8

0x5d46,	// (0x00069e28) bg_cale_heading_pane_g9

0x0008,

0xf31e,	// (0x00073400) bg_cale_heading_pane_g

0x5d00,	// (0x00069de2) bg_cale_side_pane_g1

0x5d50,	// (0x00069e32) bg_cale_side_pane_g2

0x5d5a,	// (0x00069e3c) bg_cale_side_pane_g3

0x5d64,	// (0x00069e46) bg_cale_side_pane_g4

0x5d6e,	// (0x00069e50) bg_cale_side_pane_g5

0x5d78,	// (0x00069e5a) bg_cale_side_pane_g6

0x5d82,	// (0x00069e64) bg_cale_side_pane_g7

0x5d8c,	// (0x00069e6e) bg_cale_side_pane_g8

0x5d94,	// (0x00069e76) bg_cale_side_pane_g9

0x0008,

0xf331,	// (0x00073413) bg_cale_side_pane_g

0x5d9c,	// (0x00069e7e) popup_call_status_window_ParamLimits

0x5d9c,	// (0x00069e7e) popup_call_status_window

0x5da8,	// (0x00069e8a) stacon_top_pane

0x5db0,	// (0x00069e92) status_pane_ParamLimits

0x5db0,	// (0x00069e92) status_pane

0x5dc5,	// (0x00069ea7) status_small_pane

0x5dcd,	// (0x00069eaf) control_pane

0xe776,	// (0x00072858) stacon_bottom_pane

0x5dd5,	// (0x00069eb7) list_single_mce_smart_pane_t1_ParamLimits

0x5dd5,	// (0x00069eb7) list_single_mce_smart_pane_t1

0x5de8,	// (0x00069eca) list_single_mce_smart_pane_t2_ParamLimits

0x5de8,	// (0x00069eca) list_single_mce_smart_pane_t2

0x0001,

0xf344,	// (0x00073426) list_single_mce_smart_pane_t_ParamLimits

0xf344,	// (0x00073426) list_single_mce_smart_pane_t

0x5e07,	// (0x00069ee9) compass_pane

0x5e13,	// (0x00069ef5) main_location2_pane_t1

0x5e27,	// (0x00069f09) main_location2_pane_t2

0x5e3b,	// (0x00069f1d) main_location2_pane_t3

0x0003,

0xf349,	// (0x0007342b) main_location2_pane_t

0x5e85,	// (0x00069f67) compass_pane_g1_ParamLimits

0x5e85,	// (0x00069f67) compass_pane_g1

0x5e91,	// (0x00069f73) compass_pane_t1

0x5ea0,	// (0x00069f82) compass_pane_t2

0x0005,

0xf352,	// (0x00073434) compass_pane_t

0x5eeb,	// (0x00069fcd) text_secondary_cp61

0x5f6c,	// (0x0006a04e) navi_pane_cams_g5

0x5fe8,	// (0x0006a0ca) navi_pane_im_t1

0x5ff6,	// (0x0006a0d8) navi_pane_mp_g1_ParamLimits

0x5ff6,	// (0x0006a0d8) navi_pane_mp_g1

0x600a,	// (0x0006a0ec) navi_pane_mp_g2_ParamLimits

0x600a,	// (0x0006a0ec) navi_pane_mp_g2

0x6016,	// (0x0006a0f8) navi_pane_mp_g3_ParamLimits

0x6016,	// (0x0006a0f8) navi_pane_mp_g3

0x0002,

0xf366,	// (0x00073448) navi_pane_mp_g_ParamLimits

0xf366,	// (0x00073448) navi_pane_mp_g

0x6022,	// (0x0006a104) navi_pane_mp_t1

0x6030,	// (0x0006a112) navi_pane_mp_t2

0x0002,

0xf36d,	// (0x0007344f) navi_pane_mp_t

0x60c7,	// (0x0006a1a9) navi_pane_vt_g1

0x6022,	// (0x0006a104) navi_pane_vt_t1

0x60cf,	// (0x0006a1b1) navi_slider_pane

0xec7e,	// (0x00072d60) zooming_pane

0x60df,	// (0x0006a1c1) navi_slider_pane_g1

0x60e8,	// (0x0006a1ca) navi_slider_pane_g2

0x0006,

0xf374,	// (0x00073456) navi_slider_pane_g

0x6115,	// (0x0006a1f7) aid_levels_zoom

0x611d,	// (0x0006a1ff) zooming_pane_g1

0x6125,	// (0x0006a207) zooming_pane_g2

0x6125,	// (0x0006a207) zooming_pane_g3

0x0002,

0xf383,	// (0x00073465) zooming_pane_g

0x612d,	// (0x0006a20f) level_10_zoom

0x6136,	// (0x0006a218) level_11_zoom

0x613f,	// (0x0006a221) level_1_zoom

0x6148,	// (0x0006a22a) level_2_zoom

0x6151,	// (0x0006a233) level_3_zoom

0x615a,	// (0x0006a23c) level_4_zoom

0x6163,	// (0x0006a245) level_5_zoom

0x616c,	// (0x0006a24e) level_6_zoom

0x6175,	// (0x0006a257) level_7_zoom

0x617e,	// (0x0006a260) level_8_zoom

0x6187,	// (0x0006a269) level_9_zoom

0x6198,	// (0x0006a27a) popup_phob_thumbnail_window_g1

0x61a0,	// (0x0006a282) popup_phob_thumbnail_window_g2

0x0001,

0xf38a,	// (0x0007346c) popup_phob_thumbnail_window_g

0x7d14,	// (0x0006bdf6) level_1_location

0x7d1c,	// (0x0006bdfe) level_2_location

0x7d24,	// (0x0006be06) level_3_location

0x7d2e,	// (0x0006be10) level_4_location

0xec7e,	// (0x00072d60) level_5_location

0x61a8,	// (0x0006a28a) mce_icon_pane_g1

0x61b0,	// (0x0006a292) mce_icon_pane_g2

0x0001,

0xf38f,	// (0x00073471) mce_icon_pane_g

0x61b8,	// (0x0006a29a) main_mup_pane_g1_ParamLimits

0x61b8,	// (0x0006a29a) main_mup_pane_g1

0xea76,	// (0x00072b58) main_mup_pane_g2_ParamLimits

0xea76,	// (0x00072b58) main_mup_pane_g2

0xea76,	// (0x00072b58) main_mup_pane_g3_ParamLimits

0xea76,	// (0x00072b58) main_mup_pane_g3

0xea76,	// (0x00072b58) main_mup_pane_g4_ParamLimits

0xea76,	// (0x00072b58) main_mup_pane_g4

0xea76,	// (0x00072b58) main_mup_pane_g5_ParamLimits

0xea76,	// (0x00072b58) main_mup_pane_g5

0xea76,	// (0x00072b58) main_mup_pane_g6_ParamLimits

0xea76,	// (0x00072b58) main_mup_pane_g6

0xea76,	// (0x00072b58) main_mup_pane_g7_ParamLimits

0xea76,	// (0x00072b58) main_mup_pane_g7

0xea76,	// (0x00072b58) main_mup_pane_g8_ParamLimits

0xea76,	// (0x00072b58) main_mup_pane_g8

0xea76,	// (0x00072b58) main_mup_pane_g9_ParamLimits

0xea76,	// (0x00072b58) main_mup_pane_g9

0xea76,	// (0x00072b58) main_mup_pane_g10_ParamLimits

0xea76,	// (0x00072b58) main_mup_pane_g10

0xea76,	// (0x00072b58) main_mup_pane_g11_ParamLimits

0xea76,	// (0x00072b58) main_mup_pane_g11

0xea68,	// (0x00072b4a) main_mup_pane_g12_ParamLimits

0xea68,	// (0x00072b4a) main_mup_pane_g12

0xea76,	// (0x00072b58) main_mup_pane_g13_ParamLimits

0xea76,	// (0x00072b58) main_mup_pane_g13

0x000c,

0xf394,	// (0x00073476) main_mup_pane_g_ParamLimits

0xf394,	// (0x00073476) main_mup_pane_g

0xea84,	// (0x00072b66) main_mup_pane_t1_ParamLimits

0xea84,	// (0x00072b66) main_mup_pane_t1

0xea84,	// (0x00072b66) main_mup_pane_t2_ParamLimits

0xea84,	// (0x00072b66) main_mup_pane_t2

0xea84,	// (0x00072b66) main_mup_pane_t3_ParamLimits

0xea84,	// (0x00072b66) main_mup_pane_t3

0xf057,	// (0x00073139) main_mup_pane_t4_ParamLimits

0xf057,	// (0x00073139) main_mup_pane_t4

0xf057,	// (0x00073139) main_mup_pane_t5_ParamLimits

0xf057,	// (0x00073139) main_mup_pane_t5

0xecba,	// (0x00072d9c) main_mup_pane_t6_ParamLimits

0xecba,	// (0x00072d9c) main_mup_pane_t6

0x0005,

0xf3af,	// (0x00073491) main_mup_pane_t_ParamLimits

0xf3af,	// (0x00073491) main_mup_pane_t

0xea01,	// (0x00072ae3) mup_progress_pane_ParamLimits

0xea01,	// (0x00072ae3) mup_progress_pane

0x61cb,	// (0x0006a2ad) mup_visualizer_pane_ParamLimits

0x61cb,	// (0x0006a2ad) mup_visualizer_pane

0x61cb,	// (0x0006a2ad) mup_volume_pane_ParamLimits

0x61cb,	// (0x0006a2ad) mup_volume_pane

0xea68,	// (0x00072b4a) mup_visualizer_pane_g1_ParamLimits

0xea68,	// (0x00072b4a) mup_visualizer_pane_g1

0x61d9,	// (0x0006a2bb) mup_visualizer_pane_g2_ParamLimits

0x61d9,	// (0x0006a2bb) mup_visualizer_pane_g2

0xea5a,	// (0x00072b3c) mup_visualizer_pane_g3_ParamLimits

0xea5a,	// (0x00072b3c) mup_visualizer_pane_g3

0x0002,

0xf3bc,	// (0x0007349e) mup_visualizer_pane_g_ParamLimits

0xf3bc,	// (0x0007349e) mup_visualizer_pane_g

0xeca0,	// (0x00072d82) mup_volume_pane_g1

0xeca0,	// (0x00072d82) mup_volume_pane_g2

0x0001,

0xf3c3,	// (0x000734a5) mup_volume_pane_g

0xeca0,	// (0x00072d82) mup_progress_pane_g1

0xeca0,	// (0x00072d82) mup_progress_pane_g2

0xeca0,	// (0x00072d82) mup_progress_pane_g3

0x0002,

0xf3c8,	// (0x000734aa) mup_progress_pane_g

0xe776,	// (0x00072858) bg_popup_window_pane_cp05

0x61e7,	// (0x0006a2c9) heading_pane_cp02_ParamLimits

0x61e7,	// (0x0006a2c9) heading_pane_cp02

0x6201,	// (0x0006a2e3) list_popup_blid_pane

0x6209,	// (0x0006a2eb) list_blid_sat_info_pane_ParamLimits

0x6209,	// (0x0006a2eb) list_blid_sat_info_pane

0x621c,	// (0x0006a2fe) list_blid_sat_info_pane_g1

0x6224,	// (0x0006a306) list_blid_sat_info_pane_t1

0x631a,	// (0x0006a3fc) mup_equalizer_pane_ParamLimits

0x631a,	// (0x0006a3fc) mup_equalizer_pane

0x633b,	// (0x0006a41d) mup_equalizer_pane_cp1_ParamLimits

0x633b,	// (0x0006a41d) mup_equalizer_pane_cp1

0x635c,	// (0x0006a43e) mup_equalizer_pane_cp2_ParamLimits

0x635c,	// (0x0006a43e) mup_equalizer_pane_cp2

0x637d,	// (0x0006a45f) mup_equalizer_pane_cp3_ParamLimits

0x637d,	// (0x0006a45f) mup_equalizer_pane_cp3

0x639e,	// (0x0006a480) mup_equalizer_pane_cp4_ParamLimits

0x639e,	// (0x0006a480) mup_equalizer_pane_cp4

0x63bf,	// (0x0006a4a1) mup_equalizer_pane_cp5

0x63d5,	// (0x0006a4b7) mup_equalizer_pane_cp6

0x63ed,	// (0x0006a4cf) mup_equalizer_pane_cp7

0x7b8d,	// (0x0006bc6f) bg_popup_call_poc_act_pane_g9

0x7b95,	// (0x0006bc77) bg_popup_call_poc_act_pane_g10

0x7b9d,	// (0x0006bc7f) bg_popup_call_poc_act_pane_g11

0x000a,

0xe9df,	// (0x00072ac1) mup_scale_pane

0xe9f7,	// (0x00072ad9) mup_scale_pane_g1

0x6405,	// (0x0006a4e7) mup_scale_pane_g2

0x0006,

0xf3e4,	// (0x000734c6) mup_scale_pane_g

0x643b,	// (0x0006a51d) msg_data_pane

0x6443,	// (0x0006a525) scroll_pane_cp017

0x2a8c,	// (0x00066b6e) bg_list_pane_cp04_ParamLimits

0x2a8c,	// (0x00066b6e) bg_list_pane_cp04

0x644b,	// (0x0006a52d) msg_data_pane_g1

0x6453,	// (0x0006a535) msg_data_pane_g2

0x645b,	// (0x0006a53d) msg_data_pane_g3

0x6463,	// (0x0006a545) msg_data_pane_g4

0x646b,	// (0x0006a54d) msg_data_pane_g5

0x6473,	// (0x0006a555) msg_data_pane_g6

0x647b,	// (0x0006a55d) msg_data_pane_g7

0x0006,

0xf3f3,	// (0x000734d5) msg_data_pane_g

0x2ab0,	// (0x00066b92) msg_text_pane_ParamLimits

0x2ab0,	// (0x00066b92) msg_text_pane

0x6483,	// (0x0006a565) qrid_highlight_pane_cp011_ParamLimits

0x6483,	// (0x0006a565) qrid_highlight_pane_cp011

0xe776,	// (0x00072858) msg_body_pane

0xe776,	// (0x00072858) msg_header_pane

0x64a8,	// (0x0006a58a) input_focus_pane_cp07

0x2b0a,	// (0x00066bec) msg_header_pane_t1_ParamLimits

0x2b0a,	// (0x00066bec) msg_header_pane_t1

0x2b20,	// (0x00066c02) msg_header_pane_t2_ParamLimits

0x2b20,	// (0x00066c02) msg_header_pane_t2

0x0001,

0xf407,	// (0x000734e9) msg_header_pane_t_ParamLimits

0xf407,	// (0x000734e9) msg_header_pane_t

0x64bd,	// (0x0006a59f) msg_body_pane_g1

0x2b37,	// (0x00066c19) msg_body_pane_t1_ParamLimits

0x2b37,	// (0x00066c19) msg_body_pane_t1

0x2b68,	// (0x00066c4a) msg_body_pane_t2_ParamLimits

0x2b68,	// (0x00066c4a) msg_body_pane_t2

0x2b7a,	// (0x00066c5c) msg_body_pane_t3_ParamLimits

0x2b7a,	// (0x00066c5c) msg_body_pane_t3

0x0002,

0xf40c,	// (0x000734ee) msg_body_pane_t_ParamLimits

0xf40c,	// (0x000734ee) msg_body_pane_t

0x6517,	// (0x0006a5f9) main_viewer_pane_g1_ParamLimits

0x6517,	// (0x0006a5f9) main_viewer_pane_g1

0x6523,	// (0x0006a605) main_viewer_pane_g2_ParamLimits

0x6523,	// (0x0006a605) main_viewer_pane_g2

0x652f,	// (0x0006a611) main_viewer_pane_g3_ParamLimits

0x652f,	// (0x0006a611) main_viewer_pane_g3

0x6540,	// (0x0006a622) main_viewer_pane_g4_ParamLimits

0x6540,	// (0x0006a622) main_viewer_pane_g4

0x6551,	// (0x0006a633) main_viewer_pane_g5_ParamLimits

0x6551,	// (0x0006a633) main_viewer_pane_g5

0x6551,	// (0x0006a633) main_viewer_pane_g7_ParamLimits

0x6551,	// (0x0006a633) main_viewer_pane_g7

0x6563,	// (0x0006a645) main_viewer_pane_g8_ParamLimits

0x6563,	// (0x0006a645) main_viewer_pane_g8

0x0007,

0xf41c,	// (0x000734fe) main_viewer_pane_g_ParamLimits

0xf41c,	// (0x000734fe) main_viewer_pane_g

0x657b,	// (0x0006a65d) viewer_content_pane_ParamLimits

0x657b,	// (0x0006a65d) viewer_content_pane

0x65a9,	// (0x0006a68b) main_postcard_pane_g1_ParamLimits

0x65a9,	// (0x0006a68b) main_postcard_pane_g1

0x65b7,	// (0x0006a699) main_postcard_pane_g2_ParamLimits

0x65b7,	// (0x0006a699) main_postcard_pane_g2

0x65c5,	// (0x0006a6a7) main_postcard_pane_g3_ParamLimits

0x65c5,	// (0x0006a6a7) main_postcard_pane_g3

0x0005,

0xf42d,	// (0x0007350f) main_postcard_pane_g_ParamLimits

0xf42d,	// (0x0007350f) main_postcard_pane_g

0x65d5,	// (0x0006a6b7) main_postcard_pane_g4

0x8125,	// (0x0006c207) smil_status_volume_pane_g2

0x6601,	// (0x0006a6e3) postcard_pane_ParamLimits

0x6601,	// (0x0006a6e3) postcard_pane

0x5a45,	// (0x00069b27) postcard_pane_g1_ParamLimits

0x5a45,	// (0x00069b27) postcard_pane_g1

0x6633,	// (0x0006a715) postcard_pane_g2_ParamLimits

0x6633,	// (0x0006a715) postcard_pane_g2

0x663f,	// (0x0006a721) postcard_pane_g3_ParamLimits

0x663f,	// (0x0006a721) postcard_pane_g3

0x664b,	// (0x0006a72d) postcard_pane_g4_ParamLimits

0x664b,	// (0x0006a72d) postcard_pane_g4

0x6659,	// (0x0006a73b) postcard_pane_g5_ParamLimits

0x6659,	// (0x0006a73b) postcard_pane_g5

0x6665,	// (0x0006a747) postcard_pane_g6_ParamLimits

0x6665,	// (0x0006a747) postcard_pane_g6

0x6671,	// (0x0006a753) postcard_pane_g7_ParamLimits

0x6671,	// (0x0006a753) postcard_pane_g7

0x0006,

0xf43a,	// (0x0007351c) postcard_pane_g_ParamLimits

0xf43a,	// (0x0007351c) postcard_pane_g

0x667f,	// (0x0006a761) main_mp2_pane_g1_ParamLimits

0x667f,	// (0x0006a761) main_mp2_pane_g1

0x668b,	// (0x0006a76d) main_mp2_pane_g2_ParamLimits

0x668b,	// (0x0006a76d) main_mp2_pane_g2

0x6697,	// (0x0006a779) main_mp2_pane_g3_ParamLimits

0x6697,	// (0x0006a779) main_mp2_pane_g3

0x0002,

0xf449,	// (0x0007352b) main_mp2_pane_g_ParamLimits

0xf449,	// (0x0007352b) main_mp2_pane_g

0x66a3,	// (0x0006a785) main_mp2_pane_t1_ParamLimits

0x66a3,	// (0x0006a785) main_mp2_pane_t1

0x66ba,	// (0x0006a79c) main_mp2_pane_t2_ParamLimits

0x66ba,	// (0x0006a79c) main_mp2_pane_t2

0x66cc,	// (0x0006a7ae) main_mp2_pane_t3_ParamLimits

0x66cc,	// (0x0006a7ae) main_mp2_pane_t3

0x0002,

0xf450,	// (0x00073532) main_mp2_pane_t_ParamLimits

0xf450,	// (0x00073532) main_mp2_pane_t

0x66de,	// (0x0006a7c0) pec_content_pane_ParamLimits

0x66de,	// (0x0006a7c0) pec_content_pane

0xee15,	// (0x00072ef7) scroll_pane_cp015

0x66f0,	// (0x0006a7d2) pec_attribute_pane_ParamLimits

0x66f0,	// (0x0006a7d2) pec_attribute_pane

0x6700,	// (0x0006a7e2) pec_content_pane_g1_ParamLimits

0x6700,	// (0x0006a7e2) pec_content_pane_g1

0x670c,	// (0x0006a7ee) pec_content_pane_t1_ParamLimits

0x670c,	// (0x0006a7ee) pec_content_pane_t1

0x671e,	// (0x0006a800) pec_content_pane_t2_ParamLimits

0x671e,	// (0x0006a800) pec_content_pane_t2

0x0001,

0xf457,	// (0x00073539) pec_content_pane_t_ParamLimits

0xf457,	// (0x00073539) pec_content_pane_t

0x6730,	// (0x0006a812) list_single_graphic_pane_cp01_ParamLimits

0x6730,	// (0x0006a812) list_single_graphic_pane_cp01

0xe9df,	// (0x00072ac1) bg_popup_sub_pane_cp04

0x6759,	// (0x0006a83b) popup_mup_playback_window_g1

0x6765,	// (0x0006a847) popup_mup_playback_window_t1

0x677a,	// (0x0006a85c) popup_mup_playback_window_t2

0x0001,

0xf45c,	// (0x0007353e) popup_mup_playback_window_t

0x67be,	// (0x0006a8a0) main_image_pane_g1_ParamLimits

0x67be,	// (0x0006a8a0) main_image_pane_g1

0x6865,	// (0x0006a947) scroll_pane_cp018_ParamLimits

0x6865,	// (0x0006a947) scroll_pane_cp018

0x687d,	// (0x0006a95f) scroll_pane_cp016_ParamLimits

0x687d,	// (0x0006a95f) scroll_pane_cp016

0x68b1,	// (0x0006a993) smil2_image_pane_ParamLimits

0x68b1,	// (0x0006a993) smil2_image_pane

0x68e1,	// (0x0006a9c3) smil2_root_pane_ParamLimits

0x68e1,	// (0x0006a9c3) smil2_root_pane

0x690d,	// (0x0006a9ef) smil2_text_pane_ParamLimits

0x690d,	// (0x0006a9ef) smil2_text_pane

0xe776,	// (0x00072858) bg_list_pane_cp06

0x6955,	// (0x0006aa37) grid_radio_pane

0xe776,	// (0x00072858) bg_popup_window_pane_cp06

0x695d,	// (0x0006aa3f) main_fmradio_pane_t1

0x7c5d,	// (0x0006bd3f) heading_pane_cp04

0x696b,	// (0x0006aa4d) main_fmradio_pane_t2

0x7c65,	// (0x0006bd47) popup_cale_lunar_info_window_g1

0x6979,	// (0x0006aa5b) main_fmradio_pane_t3

0x7c6d,	// (0x0006bd4f) popup_cale_lunar_info_window_g2

0x6987,	// (0x0006aa69) main_fmradio_pane_t4

0x0001,

0x6995,	// (0x0006aa77) main_fmradio_pane_t5

0x0004,

0xf54f,	// (0x00073631) popup_cale_lunar_info_window_g

0xf471,	// (0x00073553) main_fmradio_pane_t

0x69a3,	// (0x0006aa85) wait_bar_pane_cp03

0x69ab,	// (0x0006aa8d) cell_fmradio_pane_ParamLimits

0x69ab,	// (0x0006aa8d) cell_fmradio_pane

0x6671,	// (0x0006a753) cell_fmradio_pane_g1_ParamLimits

0x6671,	// (0x0006a753) cell_fmradio_pane_g1

0xe776,	// (0x00072858) grid_highlight_pane_cp011

0x69be,	// (0x0006aaa0) poc_content_pane_ParamLimits

0x69be,	// (0x0006aaa0) poc_content_pane

0x69d0,	// (0x0006aab2) scroll_pane_cp019

0x69d8,	// (0x0006aaba) popup_call_poc_act_window_ParamLimits

0x69d8,	// (0x0006aaba) popup_call_poc_act_window

0x69e5,	// (0x0006aac7) popup_call_poc_inact_window_ParamLimits

0x69e5,	// (0x0006aac7) popup_call_poc_inact_window

0xf513,	// (0x000735f5) bg_popup_call_poc_act_pane_g

0x7ba5,	// (0x0006bc87) bg_popup_call_poc_inact_pane_g1

0x7bad,	// (0x0006bc8f) bg_popup_call_poc_inact_pane_g2

0x69f2,	// (0x0006aad4) popup_call_poc_act_window_g2

0x7bb5,	// (0x0006bc97) bg_popup_call_poc_inact_pane_g3

0x7b2d,	// (0x0006bc0f) bg_popup_call_poc_inact_pane_g4

0x7bbd,	// (0x0006bc9f) bg_popup_call_poc_inact_pane_g5

0x69fa,	// (0x0006aadc) popup_call_poc_act_window_t1_ParamLimits

0x69fa,	// (0x0006aadc) popup_call_poc_act_window_t1

0x6a22,	// (0x0006ab04) popup_call_poc_act_window_t2_ParamLimits

0x6a22,	// (0x0006ab04) popup_call_poc_act_window_t2

0x6a4a,	// (0x0006ab2c) popup_call_poc_act_window_t3_ParamLimits

0x6a4a,	// (0x0006ab2c) popup_call_poc_act_window_t3

0x6a72,	// (0x0006ab54) popup_call_poc_act_window_t4_ParamLimits

0x6a72,	// (0x0006ab54) popup_call_poc_act_window_t4

0x0003,

0xf47c,	// (0x0007355e) popup_call_poc_act_window_t_ParamLimits

0xf47c,	// (0x0007355e) popup_call_poc_act_window_t

0x7bc5,	// (0x0006bca7) bg_popup_call_poc_inact_pane_g6

0x7bcd,	// (0x0006bcaf) bg_popup_call_poc_inact_pane_g7

0x7bd5,	// (0x0006bcb7) bg_popup_call_poc_inact_pane_g8

0x6a84,	// (0x0006ab66) popup_call_poc_inact_window_g2

0x7bdd,	// (0x0006bcbf) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf52a,	// (0x0007360c) bg_popup_call_poc_inact_pane_g

0x6a8c,	// (0x0006ab6e) popup_call_poc_inact_window_t1_ParamLimits

0x6a8c,	// (0x0006ab6e) popup_call_poc_inact_window_t1

0x6aa1,	// (0x0006ab83) popup_call_poc_inact_window_t2_ParamLimits

0x6aa1,	// (0x0006ab83) popup_call_poc_inact_window_t2

0x6ab6,	// (0x0006ab98) popup_call_poc_inact_window_t3_ParamLimits

0x6ab6,	// (0x0006ab98) popup_call_poc_inact_window_t3

0x0002,

0xf485,	// (0x00073567) popup_call_poc_inact_window_t_ParamLimits

0xf485,	// (0x00073567) popup_call_poc_inact_window_t

0x8023,	// (0x0006c105) context_pane_ParamLimits

0x807c,	// (0x0006c15e) signal_pane_ParamLimits

0xec7e,	// (0x00072d60) main_call2_pane

0x7fd4,	// (0x0006c0b6) popup_phob_thumbnail2_window_ParamLimits

0x7fd4,	// (0x0006c0b6) popup_phob_thumbnail2_window

0x64c5,	// (0x0006a5a7) aid_hotspot_pointer_arrow_pane

0x64cd,	// (0x0006a5af) aid_hotspot_pointer_hand_pane

0x7cdc,	// (0x0006bdbe) phob_pre_status_pane_g5

0xe9c9,	// (0x00072aab) cams_zoom_pane_ParamLimits

0xe9c9,	// (0x00072aab) image_vga_pane_ParamLimits

0xea68,	// (0x00072b4a) main_camera_pane_g1_ParamLimits

0xea68,	// (0x00072b4a) main_camera_pane_g2_ParamLimits

0xea68,	// (0x00072b4a) main_camera_pane_g3_ParamLimits

0xea68,	// (0x00072b4a) main_camera_pane_g4_ParamLimits

0xea68,	// (0x00072b4a) main_camera_pane_g5_ParamLimits

0xea68,	// (0x00072b4a) main_camera_pane_g6_ParamLimits

0xea68,	// (0x00072b4a) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x0007328d) main_camera_pane_g_ParamLimits

0xf057,	// (0x00073139) main_camera_pane_t1_ParamLimits

0xf057,	// (0x00073139) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x0007329e) main_camera_pane_t_ParamLimits

0xe9df,	// (0x00072ac1) bg_popup_preview_window_pane_cp01_ParamLimits

0xe9df,	// (0x00072ac1) bg_popup_preview_window_pane_cp01

0x6acb,	// (0x0006abad) popup_phob_thumbnail2_window_g1_ParamLimits

0x6acb,	// (0x0006abad) popup_phob_thumbnail2_window_g1

0xe776,	// (0x00072858) call2_cli_visual_pane

0x6ae6,	// (0x0006abc8) popup_call2_audio_conf_window_ParamLimits

0x6ae6,	// (0x0006abc8) popup_call2_audio_conf_window

0x6afb,	// (0x0006abdd) popup_call2_audio_first_window_ParamLimits

0x6afb,	// (0x0006abdd) popup_call2_audio_first_window

0x6b99,	// (0x0006ac7b) popup_call2_audio_in_window_ParamLimits

0x6b99,	// (0x0006ac7b) popup_call2_audio_in_window

0x6bdb,	// (0x0006acbd) popup_call2_audio_out_window_ParamLimits

0x6bdb,	// (0x0006acbd) popup_call2_audio_out_window

0x6c3d,	// (0x0006ad1f) popup_call2_audio_second_window_ParamLimits

0x6c3d,	// (0x0006ad1f) popup_call2_audio_second_window

0x6c9b,	// (0x0006ad7d) popup_call2_audio_wait_window_ParamLimits

0x6c9b,	// (0x0006ad7d) popup_call2_audio_wait_window

0xe776,	// (0x00072858) bg_popup_call2_act_pane_cp03

0xe9b3,	// (0x00072a95) list_conf_pane_cp

0x6cda,	// (0x0006adbc) popup_call2_audio_conf_window_t1

0x6ce8,	// (0x0006adca) list_single_graphic_popup_conf2_pane_ParamLimits

0x6ce8,	// (0x0006adca) list_single_graphic_popup_conf2_pane

0x5ba7,	// (0x00069c89) list_highlight_pane_cp04

0x6cfb,	// (0x0006addd) list_single_graphic_popup_conf2_pane_g1

0x5bb8,	// (0x00069c9a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf48c,	// (0x0007356e) list_single_graphic_popup_conf2_pane_g

0x6d05,	// (0x0006ade7) list_single_graphic_popup_conf2_pane_t1

0x6d13,	// (0x0006adf5) bg_popup_call2_act_pane_cp01_ParamLimits

0x6d13,	// (0x0006adf5) bg_popup_call2_act_pane_cp01

0x6d9d,	// (0x0006ae7f) call_type_pane_cp05_ParamLimits

0x6d9d,	// (0x0006ae7f) call_type_pane_cp05

0x6df1,	// (0x0006aed3) popup_call2_audio_second_window_g1_ParamLimits

0x6df1,	// (0x0006aed3) popup_call2_audio_second_window_g1

0x6e45,	// (0x0006af27) popup_call2_audio_second_window_g2_ParamLimits

0x6e45,	// (0x0006af27) popup_call2_audio_second_window_g2

0x0002,

0xf491,	// (0x00073573) popup_call2_audio_second_window_g_ParamLimits

0xf491,	// (0x00073573) popup_call2_audio_second_window_g

0x6eaa,	// (0x0006af8c) popup_call2_audio_second_window_t1_ParamLimits

0x6eaa,	// (0x0006af8c) popup_call2_audio_second_window_t1

0x6f65,	// (0x0006b047) popup_call2_audio_second_window_t2_ParamLimits

0x6f65,	// (0x0006b047) popup_call2_audio_second_window_t2

0x6fb8,	// (0x0006b09a) popup_call2_audio_second_window_t3_ParamLimits

0x6fb8,	// (0x0006b09a) popup_call2_audio_second_window_t3

0x0003,

0xf498,	// (0x0007357a) popup_call2_audio_second_window_t_ParamLimits

0xf498,	// (0x0007357a) popup_call2_audio_second_window_t

0xe776,	// (0x00072858) bg_popup_call2_in_pane_cp02

0xe780,	// (0x00072862) call_type_pane_cp04

0x70ab,	// (0x0006b18d) popup_call2_audio_wait_window_g1

0x70b3,	// (0x0006b195) popup_call2_audio_wait_window_g2

0x0001,

0xf4a1,	// (0x00073583) popup_call2_audio_wait_window_g

0xe798,	// (0x0007287a) popup_call2_audio_wait_window_t3

0x70bb,	// (0x0006b19d) bg_popup_call2_act_pane_ParamLimits

0x70bb,	// (0x0006b19d) bg_popup_call2_act_pane

0x717b,	// (0x0006b25d) call_type_pane_cp03_ParamLimits

0x717b,	// (0x0006b25d) call_type_pane_cp03

0x71df,	// (0x0006b2c1) popup_call2_audio_first_window_g1_ParamLimits

0x71df,	// (0x0006b2c1) popup_call2_audio_first_window_g1

0x724f,	// (0x0006b331) popup_call2_audio_first_window_g2_ParamLimits

0x724f,	// (0x0006b331) popup_call2_audio_first_window_g2

0x5a45,	// (0x00069b27) popup_call2_audio_first_window_g3_ParamLimits

0x5a45,	// (0x00069b27) popup_call2_audio_first_window_g3

0x0004,

0xf4a6,	// (0x00073588) popup_call2_audio_first_window_g_ParamLimits

0xf4a6,	// (0x00073588) popup_call2_audio_first_window_g

0x732d,	// (0x0006b40f) popup_call2_audio_first_window_t1_ParamLimits

0x732d,	// (0x0006b40f) popup_call2_audio_first_window_t1

0x7430,	// (0x0006b512) popup_call2_audio_first_window_t4_ParamLimits

0x7430,	// (0x0006b512) popup_call2_audio_first_window_t4

0x7513,	// (0x0006b5f5) popup_call2_audio_first_window_t5_ParamLimits

0x7513,	// (0x0006b5f5) popup_call2_audio_first_window_t5

0x0003,

0xf4b1,	// (0x00073593) popup_call2_audio_first_window_t_ParamLimits

0xf4b1,	// (0x00073593) popup_call2_audio_first_window_t

0xe9d7,	// (0x00072ab9) bg_popup_call2_act_pane_g1

0x7c75,	// (0x0006bd57) popup_cale_lunar_info_window_t1

0x7c83,	// (0x0006bd65) popup_cale_lunar_info_window_t2

0x7c91,	// (0x0006bd73) popup_cale_lunar_info_window_t3

0xe776,	// (0x00072858) bg_popup_call2_bubble_pane

0x7614,	// (0x0006b6f6) bg_popup_call2_in_pane_cp01_ParamLimits

0x7614,	// (0x0006b6f6) bg_popup_call2_in_pane_cp01

0xe452,	// (0x00072534) call_type_pane_cp02

0x765c,	// (0x0006b73e) popup_call2_audio_out_window_g1_ParamLimits

0x765c,	// (0x0006b73e) popup_call2_audio_out_window_g1

0x7688,	// (0x0006b76a) popup_call2_audio_out_window_g2_ParamLimits

0x7688,	// (0x0006b76a) popup_call2_audio_out_window_g2

0x76b0,	// (0x0006b792) popup_call2_audio_out_window_g3_ParamLimits

0x76b0,	// (0x0006b792) popup_call2_audio_out_window_g3

0x0003,

0xf4ba,	// (0x0007359c) popup_call2_audio_out_window_g_ParamLimits

0xf4ba,	// (0x0007359c) popup_call2_audio_out_window_g

0x76eb,	// (0x0006b7cd) popup_call2_audio_out_window_t1_ParamLimits

0x76eb,	// (0x0006b7cd) popup_call2_audio_out_window_t1

0x774a,	// (0x0006b82c) popup_call2_audio_out_window_t2_ParamLimits

0x774a,	// (0x0006b82c) popup_call2_audio_out_window_t2

0x779e,	// (0x0006b880) popup_call2_audio_out_window_t3_ParamLimits

0x779e,	// (0x0006b880) popup_call2_audio_out_window_t3

0x77b4,	// (0x0006b896) popup_call2_audio_out_window_t4_ParamLimits

0x77b4,	// (0x0006b896) popup_call2_audio_out_window_t4

0x77ca,	// (0x0006b8ac) popup_call2_audio_out_window_t5_ParamLimits

0x77ca,	// (0x0006b8ac) popup_call2_audio_out_window_t5

0x0005,

0xf4c3,	// (0x000735a5) popup_call2_audio_out_window_t_ParamLimits

0xf4c3,	// (0x000735a5) popup_call2_audio_out_window_t

0x782e,	// (0x0006b910) bg_popup_call2_in_pane_ParamLimits

0x782e,	// (0x0006b910) bg_popup_call2_in_pane

0x788a,	// (0x0006b96c) popup_call2_audio_in_window_g1_ParamLimits

0x788a,	// (0x0006b96c) popup_call2_audio_in_window_g1

0x78c2,	// (0x0006b9a4) popup_call2_audio_in_window_g2_ParamLimits

0x78c2,	// (0x0006b9a4) popup_call2_audio_in_window_g2

0x78fa,	// (0x0006b9dc) popup_call2_audio_in_window_g3_ParamLimits

0x78fa,	// (0x0006b9dc) popup_call2_audio_in_window_g3

0x0003,

0xf4d0,	// (0x000735b2) popup_call2_audio_in_window_g_ParamLimits

0xf4d0,	// (0x000735b2) popup_call2_audio_in_window_g

0x7952,	// (0x0006ba34) popup_call2_audio_in_window_t1_ParamLimits

0x7952,	// (0x0006ba34) popup_call2_audio_in_window_t1

0x79d2,	// (0x0006bab4) popup_call2_audio_in_window_t2_ParamLimits

0x79d2,	// (0x0006bab4) popup_call2_audio_in_window_t2

0x7a52,	// (0x0006bb34) popup_call2_audio_in_window_t3_ParamLimits

0x7a52,	// (0x0006bb34) popup_call2_audio_in_window_t3

0x7a6c,	// (0x0006bb4e) popup_call2_audio_in_window_t4_ParamLimits

0x7a6c,	// (0x0006bb4e) popup_call2_audio_in_window_t4

0x7a7e,	// (0x0006bb60) popup_call2_audio_in_window_t5_ParamLimits

0x7a7e,	// (0x0006bb60) popup_call2_audio_in_window_t5

0x7a90,	// (0x0006bb72) popup_call2_audio_in_window_t6_ParamLimits

0x7a90,	// (0x0006bb72) popup_call2_audio_in_window_t6

0x0005,

0xf4d9,	// (0x000735bb) popup_call2_audio_in_window_t_ParamLimits

0xf4d9,	// (0x000735bb) popup_call2_audio_in_window_t

0xe9d7,	// (0x00072ab9) bg_popup_call2_in_pane_g1

0x7c9f,	// (0x0006bd81) popup_cale_lunar_info_window_t4

0x0003,

0xf554,	// (0x00073636) popup_cale_lunar_info_window_t

0xe9df,	// (0x00072ac1) bg_popup_call2_rect_pane_ParamLimits

0xe9df,	// (0x00072ac1) bg_popup_call2_rect_pane

0xe776,	// (0x00072858) call2_cli_visual_graphic_pane

0xe776,	// (0x00072858) call2_cli_visual_text_pane

0x8138,	// (0x0006c21a) smil_status_volume_pane_g3

0x0002,

0xe9f7,	// (0x00072ad9) call2_cli_visual_graphic_pane_g1

0xe9f7,	// (0x00072ad9) call2_cli_visual_graphic_pane_g2

0xe9f7,	// (0x00072ad9) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e6,	// (0x000735c8) call2_cli_visual_graphic_pane_g

0x7ad5,	// (0x0006bbb7) bg_popup_call2_rect_pane_g1

0xeba3,	// (0x00072c85) bg_popup_call2_rect_pane_g2

0x7add,	// (0x0006bbbf) bg_popup_call2_rect_pane_g3

0x7ae5,	// (0x0006bbc7) bg_popup_call2_rect_pane_g4

0x7aed,	// (0x0006bbcf) bg_popup_call2_rect_pane_g5

0x7af5,	// (0x0006bbd7) bg_popup_call2_rect_pane_g6

0x7afd,	// (0x0006bbdf) bg_popup_call2_rect_pane_g7

0x7b05,	// (0x0006bbe7) bg_popup_call2_rect_pane_g8

0x7b0d,	// (0x0006bbef) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ed,	// (0x000735cf) bg_popup_call2_rect_pane_g

0x7b15,	// (0x0006bbf7) bg_popup_call2_bubble_pane_g1

0x7b1d,	// (0x0006bbff) bg_popup_call2_bubble_pane_g2

0x7b25,	// (0x0006bc07) bg_popup_call2_bubble_pane_g3

0x7b2d,	// (0x0006bc0f) bg_popup_call2_bubble_pane_g4

0x7b35,	// (0x0006bc17) bg_popup_call2_bubble_pane_g5

0x7b3d,	// (0x0006bc1f) bg_popup_call2_bubble_pane_g6

0x7b45,	// (0x0006bc27) bg_popup_call2_bubble_pane_g7

0x7b4d,	// (0x0006bc2f) bg_popup_call2_bubble_pane_g8

0x7b55,	// (0x0006bc37) bg_popup_call2_bubble_pane_g9

0x0008,

0xf500,	// (0x000735e2) bg_popup_call2_bubble_pane_g

0x3ec2,	// (0x00067fa4) aid_cale_week_size_cell_pane

0xe9df,	// (0x00072ac1) aid_cams_cif_uncrop_pane_ParamLimits

0xe9df,	// (0x00072ac1) aid_cams_cif_uncrop_pane

0x44bb,	// (0x0006859d) aid_cams_size_cell_ParamLimits

0x44bb,	// (0x0006859d) aid_cams_size_cell

0x44c7,	// (0x000685a9) grid_cams_pane_ParamLimits

0x44d5,	// (0x000685b7) linegrid_cams_pane_ParamLimits

0x45ac,	// (0x0006868e) call_video_pane_t1

0x45cd,	// (0x000686af) call_video_pane_t2

0x0001,

0xf208,	// (0x000732ea) call_video_pane_t

0x4abf,	// (0x00068ba1) aid_cale_month_size_cell_pane_ParamLimits

0x4abf,	// (0x00068ba1) aid_cale_month_size_cell_pane

0xf598,	// (0x0007367a) smil_status_volume_pane_g

0x8145,	// (0x0006c227) volume_smil_pane_ParamLimits

0x375c,	// (0x0006783e) aid_popup2_width_pane

0x3db9,	// (0x00067e9b) cell_qdial_pane_g4_ParamLimits

0x3db9,	// (0x00067e9b) cell_qdial_pane_g4

0x5e61,	// (0x00069f43) aid_blid_cardinal_pane_ParamLimits

0x5e71,	// (0x00069f53) aid_blid_destination_pane_ParamLimits

0x5e71,	// (0x00069f53) aid_blid_destination_pane

0xe9df,	// (0x00072ac1) bg_popup_call_poc_act_pane_ParamLimits

0xe9df,	// (0x00072ac1) bg_popup_call_poc_act_pane

0xe9df,	// (0x00072ac1) bg_popup_call_poc_inact_pane_ParamLimits

0xe9df,	// (0x00072ac1) bg_popup_call_poc_inact_pane

0x7b65,	// (0x0006bc47) bg_popup_call_poc_act_pane_g1

0x7b6d,	// (0x0006bc4f) bg_popup_call_poc_act_pane_g2

0x7b75,	// (0x0006bc57) bg_popup_call_poc_act_pane_g3

0x7b2d,	// (0x0006bc0f) bg_popup_call_poc_act_pane_g4

0x7b35,	// (0x0006bc17) bg_popup_call_poc_act_pane_g5

0x7b7d,	// (0x0006bc5f) bg_popup_call_poc_act_pane_g6

0x7b45,	// (0x0006bc27) bg_popup_call_poc_act_pane_g7

0x7b85,	// (0x0006bc67) bg_popup_call_poc_act_pane_g8

0xe776,	// (0x00072858) main_usb_pane

0x7f07,	// (0x0006bfe9) popup_cale_lunar_info_window

0x48ea,	// (0x000689cc) im_reading_pane_t1_ParamLimits

0xed6d,	// (0x00072e4f) list_im_pane_ParamLimits

0xed7e,	// (0x00072e60) scroll_pane_cp07_ParamLimits

0xe776,	// (0x00072858) grid_highlight_pane_cp012

0xe9df,	// (0x00072ac1) mup_scale_pane_ParamLimits

0x5a45,	// (0x00069b27) main_usb_pane_g1_ParamLimits

0x5a45,	// (0x00069b27) main_usb_pane_g1

0x7be5,	// (0x0006bcc7) main_usb_pane_g2_ParamLimits

0x7be5,	// (0x0006bcc7) main_usb_pane_g2

0x0001,

0xf53d,	// (0x0007361f) main_usb_pane_g_ParamLimits

0xf53d,	// (0x0007361f) main_usb_pane_g

0x7bf1,	// (0x0006bcd3) main_usb_pane_t1_ParamLimits

0x7bf1,	// (0x0006bcd3) main_usb_pane_t1

0x7c03,	// (0x0006bce5) main_usb_pane_t2_ParamLimits

0x7c03,	// (0x0006bce5) main_usb_pane_t2

0x7c15,	// (0x0006bcf7) main_usb_pane_t3_ParamLimits

0x7c15,	// (0x0006bcf7) main_usb_pane_t3

0x7c27,	// (0x0006bd09) main_usb_pane_t4_ParamLimits

0x7c27,	// (0x0006bd09) main_usb_pane_t4

0x7c39,	// (0x0006bd1b) main_usb_pane_t5_ParamLimits

0x7c39,	// (0x0006bd1b) main_usb_pane_t5

0x7c4b,	// (0x0006bd2d) main_usb_pane_t6_ParamLimits

0x7c4b,	// (0x0006bd2d) main_usb_pane_t6

0x0005,

0xf542,	// (0x00073624) main_usb_pane_t_ParamLimits

0x5e07,	// (0x00069ee9) aid_text_placing

0x5e13,	// (0x00069ef5) main_location2_pane_t1_ParamLimits

0x5e27,	// (0x00069f09) main_location2_pane_t2_ParamLimits

0x5e3b,	// (0x00069f1d) main_location2_pane_t3_ParamLimits

0x5e4f,	// (0x00069f31) main_location2_pane_t4_ParamLimits

0x5e4f,	// (0x00069f31) main_location2_pane_t4

0xf349,	// (0x0007342b) main_location2_pane_t_ParamLimits

0xea1b,	// (0x00072afd) find_pinb_pane_g2_ParamLimits

0xea1b,	// (0x00072afd) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x000731a2) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x000731a2) find_pinb_pane_g

0xea27,	// (0x00072b09) find_pinb_pane_t1_ParamLimits

0xea39,	// (0x00072b1b) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x000731a7) find_pinb_pane_t_ParamLimits

0xe776,	// (0x00072858) main_call3_pane

0x5082,	// (0x00069164) cale_month_day_heading_pane_t1_ParamLimits

0x5108,	// (0x000691ea) cale_month_day_heading_pane_t2_ParamLimits

0x5181,	// (0x00069263) cale_month_day_heading_pane_t3_ParamLimits

0x51fa,	// (0x000692dc) cale_month_day_heading_pane_t4_ParamLimits

0x5273,	// (0x00069355) cale_month_day_heading_pane_t5_ParamLimits

0x52ec,	// (0x000693ce) cale_month_day_heading_pane_t6_ParamLimits

0x5365,	// (0x00069447) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x00073322) cale_month_day_heading_pane_t_ParamLimits

0xefc8,	// (0x000730aa) smil_status_volume_pane

0x661b,	// (0x0006a6fd) postcard_address_pane_ParamLimits

0x661b,	// (0x0006a6fd) postcard_address_pane

0x6627,	// (0x0006a709) postcard_message_pane_ParamLimits

0x6627,	// (0x0006a709) postcard_message_pane

0x7aa2,	// (0x0006bb84) call2_cli_visual_pane_t1_ParamLimits

0x7aa2,	// (0x0006bb84) call2_cli_visual_pane_t1

0x829d,	// (0x0006c37f) postcard_message_pane_t1_ParamLimits

0x829d,	// (0x0006c37f) postcard_message_pane_t1

0x8285,	// (0x0006c367) postcard_address_pane_t1_ParamLimits

0x8285,	// (0x0006c367) postcard_address_pane_t1

0x8276,	// (0x0006c358) popup_call3_audio_in_window_ParamLimits

0x8276,	// (0x0006c358) popup_call3_audio_in_window

0x815a,	// (0x0006c23c) bg_popup_call3_in_pane_ParamLimits

0x815a,	// (0x0006c23c) bg_popup_call3_in_pane

0x81bc,	// (0x0006c29e) popup_call3_audio_in_window_g1_ParamLimits

0x81bc,	// (0x0006c29e) popup_call3_audio_in_window_g1

0x81d4,	// (0x0006c2b6) popup_call3_audio_in_window_g2_ParamLimits

0x81d4,	// (0x0006c2b6) popup_call3_audio_in_window_g2

0x81ec,	// (0x0006c2ce) popup_call3_audio_in_window_g3_ParamLimits

0x81ec,	// (0x0006c2ce) popup_call3_audio_in_window_g3

0x0003,

0xf59f,	// (0x00073681) popup_call3_audio_in_window_g_ParamLimits

0xf59f,	// (0x00073681) popup_call3_audio_in_window_g

0x8214,	// (0x0006c2f6) popup_call3_audio_in_window_t1_ParamLimits

0x8214,	// (0x0006c2f6) popup_call3_audio_in_window_t1

0x823c,	// (0x0006c31e) popup_call3_audio_in_window_t2_ParamLimits

0x823c,	// (0x0006c31e) popup_call3_audio_in_window_t2

0x8264,	// (0x0006c346) popup_call3_audio_in_window_t3_ParamLimits

0x8264,	// (0x0006c346) popup_call3_audio_in_window_t3

0x0002,

0xf5a8,	// (0x0007368a) popup_call3_audio_in_window_t_ParamLimits

0xf5a8,	// (0x0007368a) popup_call3_audio_in_window_t

0xec7e,	// (0x00072d60) bg_popup_call3_rect_pane

0x7ad5,	// (0x0006bbb7) bg_popup_call3_rect_pane_g1

0xeba3,	// (0x00072c85) bg_popup_call3_rect_pane_g2

0x7add,	// (0x0006bbbf) bg_popup_call3_rect_pane_g3

0x7ae5,	// (0x0006bbc7) bg_popup_call3_rect_pane_g4

0x7aed,	// (0x0006bbcf) bg_popup_call3_rect_pane_g5

0x7af5,	// (0x0006bbd7) bg_popup_call3_rect_pane_g6

0x7afd,	// (0x0006bbdf) bg_popup_call3_rect_pane_g7

0xe359,	// (0x0007243b) mup_visualizer_osc_pane

0xe359,	// (0x0007243b) mup_visualizer_spec_pane

0x817a,	// (0x0006c25c) call3_video_qcif_pane_ParamLimits

0x817a,	// (0x0006c25c) call3_video_qcif_pane

0x818c,	// (0x0006c26e) call3_video_qcif_uncrop_pane_ParamLimits

0x818c,	// (0x0006c26e) call3_video_qcif_uncrop_pane

0x819a,	// (0x0006c27c) call3_video_subqcif_pane_ParamLimits

0x819a,	// (0x0006c27c) call3_video_subqcif_pane

0x81ac,	// (0x0006c28e) call3_video_subqcif_uncrop_pane_ParamLimits

0x81ac,	// (0x0006c28e) call3_video_subqcif_uncrop_pane

0x8204,	// (0x0006c2e6) popup_call3_audio_in_window_g4_ParamLimits

0x8204,	// (0x0006c2e6) popup_call3_audio_in_window_g4

0xe359,	// (0x0007243b) mup_spec_half_pane

0xe359,	// (0x0007243b) mup_spec_half_pane_cp

0xe359,	// (0x0007243b) mup_osc_middle_pane

0xeca0,	// (0x00072d82) mup_visualizer_osc_pane_g1

0x80eb,	// (0x0006c1cd) mup_spec_bar_pane_ParamLimits

0x80eb,	// (0x0006c1cd) mup_spec_bar_pane

0xeca0,	// (0x00072d82) mup_spec_bar_pane_g1

0xeca0,	// (0x00072d82) mup_spec_bar_pane_g2

0x0001,

0xf3c3,	// (0x000734a5) mup_spec_bar_pane_g

0x3ec2,	// (0x00067fa4) aid_cale_week_size_cell_pane_ParamLimits

0x3ed7,	// (0x00067fb9) bg_cale_heading_pane_ParamLimits

0xebe0,	// (0x00072cc2) bg_cale_pane_cp01_ParamLimits

0x3ef9,	// (0x00067fdb) cale_week_corner_pane_ParamLimits

0x3f13,	// (0x00067ff5) cale_week_day_heading_pane_ParamLimits

0x3f35,	// (0x00068017) cale_week_scroll_pane_g1_ParamLimits

0x3f52,	// (0x00068034) cale_week_scroll_pane_g2_ParamLimits

0x3f65,	// (0x00068047) cale_week_scroll_pane_g3_ParamLimits

0x3f78,	// (0x0006805a) cale_week_scroll_pane_g4_ParamLimits

0x3f8b,	// (0x0006806d) cale_week_scroll_pane_g5_ParamLimits

0x3f9e,	// (0x00068080) cale_week_scroll_pane_g6_ParamLimits

0x3fb1,	// (0x00068093) cale_week_scroll_pane_g7_ParamLimits

0x3fc6,	// (0x000680a8) cale_week_scroll_pane_g8_ParamLimits

0x3fdb,	// (0x000680bd) cale_week_scroll_pane_g9_ParamLimits

0x3fee,	// (0x000680d0) cale_week_scroll_pane_g10_ParamLimits

0x4001,	// (0x000680e3) cale_week_scroll_pane_g11_ParamLimits

0x4014,	// (0x000680f6) cale_week_scroll_pane_g12_ParamLimits

0x402b,	// (0x0006810d) cale_week_scroll_pane_g13_ParamLimits

0x4046,	// (0x00068128) cale_week_scroll_pane_g14_ParamLimits

0x4061,	// (0x00068143) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x00073233) cale_week_scroll_pane_g_ParamLimits

0x4091,	// (0x00068173) cale_week_time_pane_ParamLimits

0x40a6,	// (0x00068188) grid_cale_week_pane_ParamLimits

0xebfd,	// (0x00072cdf) listscroll_cale_week_pane_t1

0xec0f,	// (0x00072cf1) scroll_pane_cp08_ParamLimits

0x4b33,	// (0x00068c15) cale_month_corner_pane_ParamLimits

0xef9e,	// (0x00073080) cale_month_pane_t1

0x5001,	// (0x000690e3) cale_month_week_pane_ParamLimits

0x5a45,	// (0x00069b27) popup_call_status_window_g1_ParamLimits

0x5a53,	// (0x00069b35) popup_call_status_window_g2_ParamLimits

0x5a5f,	// (0x00069b41) popup_call_status_window_g3_ParamLimits

0xf2d0,	// (0x000733b2) popup_call_status_window_g_ParamLimits

0x5ac4,	// (0x00069ba6) aid_call2_pane

0x2afe,	// (0x00066be0) msg_header_pane_g1

0x661b,	// (0x0006a6fd) postcard_address2_pane_ParamLimits

0x661b,	// (0x0006a6fd) postcard_address2_pane

0x6627,	// (0x0006a709) postcard_message2_pane_ParamLimits

0x6627,	// (0x0006a709) postcard_message2_pane

0x808a,	// (0x0006c16c) message2_row_pane_ParamLimits

0x808a,	// (0x0006c16c) message2_row_pane

0x80a5,	// (0x0006c187) address2_row_pane_ParamLimits

0x80a5,	// (0x0006c187) address2_row_pane

0x80b8,	// (0x0006c19a) postcard_message2_row_pane_g1

0x80c0,	// (0x0006c1a2) postcard_message2_row_pane_t1

0x80b8,	// (0x0006c19a) address2_row_pane_g1

0x80c0,	// (0x0006c1a2) address2_row_pane_t1

0x432b,	// (0x0006840d) aid_size_cell_vorec

0xe776,	// (0x00072858) main_rss_pane

0x80ce,	// (0x0006c1b0) rss_list_single_pane_ParamLimits

0x80ce,	// (0x0006c1b0) rss_list_single_pane

0x80dc,	// (0x0006c1be) rss_list_single_pane_t1

0x80dc,	// (0x0006c1be) rss_list_single_pane_t2

0x0001,

0xf593,	// (0x00073675) rss_list_single_pane_t

0xe776,	// (0x00072858) main_camera2_pane

0xe776,	// (0x00072858) main_video2_pane

0xe9c9,	// (0x00072aab) cams_zoom_pane_cp2_ParamLimits

0xe9c9,	// (0x00072aab) cams_zoom_pane_cp2

0xe9c9,	// (0x00072aab) image2_vga_pane_ParamLimits

0xe9c9,	// (0x00072aab) image2_vga_pane

0xea68,	// (0x00072b4a) main_camera2_pane_g1_ParamLimits

0xea68,	// (0x00072b4a) main_camera2_pane_g1

0xea68,	// (0x00072b4a) main_camera2_pane_g2_ParamLimits

0xea68,	// (0x00072b4a) main_camera2_pane_g2

0xea68,	// (0x00072b4a) main_camera2_pane_g3_ParamLimits

0xea68,	// (0x00072b4a) main_camera2_pane_g3

0xea68,	// (0x00072b4a) main_camera2_pane_g4_ParamLimits

0xea68,	// (0x00072b4a) main_camera2_pane_g4

0xea68,	// (0x00072b4a) main_camera2_pane_g5_ParamLimits

0xea68,	// (0x00072b4a) main_camera2_pane_g5

0xea68,	// (0x00072b4a) main_camera2_pane_g6_ParamLimits

0xea68,	// (0x00072b4a) main_camera2_pane_g6

0xea68,	// (0x00072b4a) main_camera2_pane_g7_ParamLimits

0xea68,	// (0x00072b4a) main_camera2_pane_g7

0xea68,	// (0x00072b4a) main_camera2_pane_g8_ParamLimits

0xea68,	// (0x00072b4a) main_camera2_pane_g8

0x0008,

0xf5af,	// (0x00073691) main_camera2_pane_g_ParamLimits

0xf5af,	// (0x00073691) main_camera2_pane_g

0xf057,	// (0x00073139) main_camera2_pane_t1_ParamLimits

0xf057,	// (0x00073139) main_camera2_pane_t1

0xf057,	// (0x00073139) main_camera2_pane_t2_ParamLimits

0xf057,	// (0x00073139) main_camera2_pane_t2

0xf057,	// (0x00073139) main_camera2_pane_t3_ParamLimits

0xf057,	// (0x00073139) main_camera2_pane_t3

0xf057,	// (0x00073139) main_camera2_pane_t4_ParamLimits

0xf057,	// (0x00073139) main_camera2_pane_t4

0x0006,

0xf5c2,	// (0x000736a4) main_camera2_pane_t_ParamLimits

0xf5c2,	// (0x000736a4) main_camera2_pane_t

0x7eb2,	// (0x0006bf94) cams_zoom_pane_cp4_ParamLimits

0x7eb2,	// (0x0006bf94) cams_zoom_pane_cp4

0xea01,	// (0x00072ae3) image2_cif_pane_ParamLimits

0xea01,	// (0x00072ae3) image2_cif_pane

0xe9c9,	// (0x00072aab) image2_subqcif_pane_ParamLimits

0xe9c9,	// (0x00072aab) image2_subqcif_pane

0xccf1,	// (0x00070dd3) main_video2_pane_g1_ParamLimits

0xccf1,	// (0x00070dd3) main_video2_pane_g1

0xccf1,	// (0x00070dd3) main_video2_pane_g2_ParamLimits

0xccf1,	// (0x00070dd3) main_video2_pane_g2

0xccf1,	// (0x00070dd3) main_video2_pane_g3_ParamLimits

0xccf1,	// (0x00070dd3) main_video2_pane_g3

0xccf1,	// (0x00070dd3) main_video2_pane_g4_ParamLimits

0xccf1,	// (0x00070dd3) main_video2_pane_g4

0xccf1,	// (0x00070dd3) main_video2_pane_g5_ParamLimits

0xccf1,	// (0x00070dd3) main_video2_pane_g5

0xccf1,	// (0x00070dd3) main_video2_pane_g6_ParamLimits

0xccf1,	// (0x00070dd3) main_video2_pane_g6

0x0005,

0xf5d1,	// (0x000736b3) main_video2_pane_g_ParamLimits

0xf5d1,	// (0x000736b3) main_video2_pane_g

0xccff,	// (0x00070de1) main_video2_pane_t1_ParamLimits

0xccff,	// (0x00070de1) main_video2_pane_t1

0xccff,	// (0x00070de1) main_video2_pane_t2_ParamLimits

0xccff,	// (0x00070de1) main_video2_pane_t2

0xccff,	// (0x00070de1) main_video2_pane_t3_ParamLimits

0xccff,	// (0x00070de1) main_video2_pane_t3

0x0002,

0xf5de,	// (0x000736c0) main_video2_pane_t_ParamLimits

0xf5de,	// (0x000736c0) main_video2_pane_t

0x7d40,	// (0x0006be22) call_muted_g2

0x0001,

0xf585,	// (0x00073667) call_muted_g

0xe776,	// (0x00072858) main_mup2_pane

0xea76,	// (0x00072b58) main_mup2_pane_g1_ParamLimits

0xea76,	// (0x00072b58) main_mup2_pane_g1

0xea76,	// (0x00072b58) main_mup2_pane_g2_ParamLimits

0xea76,	// (0x00072b58) main_mup2_pane_g2

0xeca0,	// (0x00072d82) main_mup_pane_g13_cp1

0xe359,	// (0x0007243b) mup_volume_pane_cp1

0xea76,	// (0x00072b58) main_mup2_pane_g4_ParamLimits

0xea76,	// (0x00072b58) main_mup2_pane_g4

0xea76,	// (0x00072b58) main_mup2_pane_g5_ParamLimits

0xea76,	// (0x00072b58) main_mup2_pane_g5

0xea76,	// (0x00072b58) main_mup2_pane_g6_ParamLimits

0xea76,	// (0x00072b58) main_mup2_pane_g6

0xea76,	// (0x00072b58) main_mup2_pane_g7_ParamLimits

0xea76,	// (0x00072b58) main_mup2_pane_g7

0x0006,

0xf5e5,	// (0x000736c7) main_mup2_pane_g_ParamLimits

0xf5e5,	// (0x000736c7) main_mup2_pane_g

0xea84,	// (0x00072b66) main_mup2_pane_t1_ParamLimits

0xea84,	// (0x00072b66) main_mup2_pane_t1

0xea84,	// (0x00072b66) main_mup2_pane_t2_ParamLimits

0xea84,	// (0x00072b66) main_mup2_pane_t2

0xea84,	// (0x00072b66) main_mup2_pane_t3_ParamLimits

0xea84,	// (0x00072b66) main_mup2_pane_t3

0xea84,	// (0x00072b66) main_mup2_pane_t4_ParamLimits

0xea84,	// (0x00072b66) main_mup2_pane_t4

0xea84,	// (0x00072b66) main_mup2_pane_t5_ParamLimits

0xea84,	// (0x00072b66) main_mup2_pane_t5

0xea84,	// (0x00072b66) main_mup2_pane_t6_ParamLimits

0xea84,	// (0x00072b66) main_mup2_pane_t6

0x0005,

0xf5f4,	// (0x000736d6) main_mup2_pane_t_ParamLimits

0xf5f4,	// (0x000736d6) main_mup2_pane_t

0x61cb,	// (0x0006a2ad) mup2_visualizer_pane_ParamLimits

0x61cb,	// (0x0006a2ad) mup2_visualizer_pane

0x61cb,	// (0x0006a2ad) mup_progress_pane_cp_ParamLimits

0x61cb,	// (0x0006a2ad) mup_progress_pane_cp

0x82db,	// (0x0006c3bd) mup_volume_pane_cp_ParamLimits

0x82db,	// (0x0006c3bd) mup_volume_pane_cp

0xea5a,	// (0x00072b3c) mup2_visualizer_pane_g1_ParamLimits

0xea5a,	// (0x00072b3c) mup2_visualizer_pane_g1

0xea68,	// (0x00072b4a) mup2_visualizer_pane_g2_ParamLimits

0xea68,	// (0x00072b4a) mup2_visualizer_pane_g2

0xea68,	// (0x00072b4a) mup2_visualizer_pane_g3_ParamLimits

0xea68,	// (0x00072b4a) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x000731ac) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x000731ac) mup2_visualizer_pane_g

0x694d,	// (0x0006aa2f) aid_size_cell_fmradio

0x7e87,	// (0x0006bf69) aid_height_parent_landcape

0xedfc,	// (0x00072ede) wml_content_pane_cp

0xee04,	// (0x00072ee6) wml_tabs_pane

0xee0d,	// (0x00072eef) popup_wml_miniature_window

0xee15,	// (0x00072ef7) scroll_pane_cp021

0xee29,	// (0x00072f0b) wml_content_pane_comp8

0xe776,	// (0x00072858) bg_popup_sub_pane_cp05

0xcd13,	// (0x00070df5) popup_wml_miniature_window_g1

0xcd1b,	// (0x00070dfd) wml_miniature_view_pane

0x82f1,	// (0x0006c3d3) aid_size_wml_view

0x82f9,	// (0x0006c3db) wml_miniature_view_pane_g1

0x8302,	// (0x0006c3e4) wml_miniature_view_pane_g2

0x830b,	// (0x0006c3ed) wml_miniature_view_pane_g3

0x8313,	// (0x0006c3f5) wml_miniature_view_pane_g4

0x831b,	// (0x0006c3fd) wml_miniature_view_pane_g5

0x8323,	// (0x0006c405) wml_miniature_view_pane_g6

0x832b,	// (0x0006c40d) wml_miniature_view_pane_g7

0x8333,	// (0x0006c415) wml_miniature_view_pane_g8

0x0007,

0xf601,	// (0x000736e3) wml_miniature_view_pane_g

0xcd23,	// (0x00070e05) background_graphic_ParamLimits

0xcd23,	// (0x00070e05) background_graphic

0xcd2f,	// (0x00070e11) wml_tabs_2_pane

0xcd38,	// (0x00070e1a) wml_tabs_3_pane_ParamLimits

0xcd38,	// (0x00070e1a) wml_tabs_3_pane

0xcd4a,	// (0x00070e2c) wml_tabs_4_pane_ParamLimits

0xcd4a,	// (0x00070e2c) wml_tabs_4_pane

0xcd60,	// (0x00070e42) wml_tabs_5_pane_ParamLimits

0xcd60,	// (0x00070e42) wml_tabs_5_pane

0xcd7a,	// (0x00070e5c) wml_tabs_pane_g2_ParamLimits

0xcd7a,	// (0x00070e5c) wml_tabs_pane_g2

0xcd8f,	// (0x00070e71) wml_tabs_pane_g3_ParamLimits

0xcd8f,	// (0x00070e71) wml_tabs_pane_g3

0xcda4,	// (0x00070e86) wml_tabs_2_active_pane_ParamLimits

0xcda4,	// (0x00070e86) wml_tabs_2_active_pane

0xcda4,	// (0x00070e86) wml_tabs_2_passive_pane_ParamLimits

0xcda4,	// (0x00070e86) wml_tabs_2_passive_pane

0x833b,	// (0x0006c41d) wml_tabs_3_active_pane_cp_ParamLimits

0x833b,	// (0x0006c41d) wml_tabs_3_active_pane_cp

0x834c,	// (0x0006c42e) wml_tabs_3_passive_pane_ParamLimits

0x834c,	// (0x0006c42e) wml_tabs_3_passive_pane

0x835d,	// (0x0006c43f) wml_tabs_3_passive_pane_cp_ParamLimits

0x835d,	// (0x0006c43f) wml_tabs_3_passive_pane_cp

0x836e,	// (0x0006c450) tabs_4_active_pane

0x8376,	// (0x0006c458) tabs_4_passive_pane

0x837e,	// (0x0006c460) tabs_4_passive_pane_cp

0x8386,	// (0x0006c468) tabs_4_passive_pane_cp2

0x7b5d,	// (0x0006bc3f) aid_height_text

0x61cb,	// (0x0006a2ad) mup_volume_cont_pane_ParamLimits

0x61cb,	// (0x0006a2ad) mup_volume_cont_pane

0xe359,	// (0x0007243b) aid_size_cell_pinb

0xe359,	// (0x0007243b) aid_size_list_pinb

0x61cb,	// (0x0006a2ad) mup2_volume_cont_pane_ParamLimits

0x61cb,	// (0x0006a2ad) mup2_volume_cont_pane

0x838e,	// (0x0006c470) mup2_volume_cont_pane_g1_ParamLimits

0x838e,	// (0x0006c470) mup2_volume_cont_pane_g1

0x3768,	// (0x0006784a) aid_size_cell_touch_ParamLimits

0x3768,	// (0x0006784a) aid_size_cell_touch

0x3a10,	// (0x00067af2) touch_pane_ParamLimits

0x3a10,	// (0x00067af2) touch_pane

0xe359,	// (0x0007243b) main_rss2_pane

0xcdbb,	// (0x00070e9d) listscroll_rss2_pane

0xcdc4,	// (0x00070ea6) rss2_navigation_pane

0xcdcc,	// (0x00070eae) list_rss2_pane

0x5cb9,	// (0x00069d9b) scroll_pane_cp22

0xcdd4,	// (0x00070eb6) rss2_navigation_pane_g1

0xcddd,	// (0x00070ebf) rss2_navigation_pane_g2

0xcde5,	// (0x00070ec7) rss2_navigation_pane_g3

0x0002,

0xf612,	// (0x000736f4) rss2_navigation_pane_g

0xcded,	// (0x00070ecf) rss2_navigation_pane_t1

0x83a4,	// (0x0006c486) rss2_list_single_pane_ParamLimits

0x83a4,	// (0x0006c486) rss2_list_single_pane

0xcdfb,	// (0x00070edd) rss2_list_single_pane_t2

0xce09,	// (0x00070eeb) rss2_list_single_pane_t3_ParamLimits

0xce09,	// (0x00070eeb) rss2_list_single_pane_t3

0xce26,	// (0x00070f08) rss2_list_single_pane_t4

0x5607,	// (0x000696e9) smil_status_pane_g1

0xea01,	// (0x00072ae3) main_image2_pane_ParamLimits

0xea01,	// (0x00072ae3) main_image2_pane

0xea68,	// (0x00072b4a) main_camera2_pane_g9_ParamLimits

0xea68,	// (0x00072b4a) main_camera2_pane_g9

0xf057,	// (0x00073139) main_camera2_pane_t5_ParamLimits

0xf057,	// (0x00073139) main_camera2_pane_t5

0x82c7,	// (0x0006c3a9) main_camera2_pane_t6_ParamLimits

0x82c7,	// (0x0006c3a9) main_camera2_pane_t6

0x83d8,	// (0x0006c4ba) main_image2_pane_g1_ParamLimits

0x83d8,	// (0x0006c4ba) main_image2_pane_g1

0x6937,	// (0x0006aa19) smil2_video_pane_ParamLimits

0x6937,	// (0x0006aa19) smil2_video_pane

0x379c,	// (0x0006787e) aid_zoom_text_primary_cp

0x39b9,	// (0x00067a9b) popup_preview_fixed_window

0xed65,	// (0x00072e47) im_reading_pane_g1

0x82b9,	// (0x0006c39b) cams2_bc_adjust_pane_cp_ParamLimits

0x82b9,	// (0x0006c39b) cams2_bc_adjust_pane_cp

0xe9c9,	// (0x00072aab) cams2_bc_adjust_pane_ParamLimits

0xe9c9,	// (0x00072aab) cams2_bc_adjust_pane

0xeca0,	// (0x00072d82) cams2_bc_adjust_pane_g1

0xe359,	// (0x0007243b) cams2_slider_pane

0xeca0,	// (0x00072d82) cams2_slider_pane_g1

0xeca0,	// (0x00072d82) cams2_slider_pane_g2

0x0006,

0xf619,	// (0x000736fb) cams2_slider_pane_g

0x3ae1,	// (0x00067bc3) calc_display_pane_ParamLimits

0x3aff,	// (0x00067be1) calc_paper_pane_ParamLimits

0x3b1b,	// (0x00067bfd) grid_calc_pane_ParamLimits

0x5b26,	// (0x00069c08) popup_clock_digital_window_t1_ParamLimits

0x6802,	// (0x0006a8e4) main_image_pane_t1

0x3ac7,	// (0x00067ba9) aid_size_cell_calc_ParamLimits

0x3ac7,	// (0x00067ba9) aid_size_cell_calc

0x7ee3,	// (0x0006bfc5) popup_blid_sat_info2_window_ParamLimits

0x7ee3,	// (0x0006bfc5) popup_blid_sat_info2_window

0xce34,	// (0x00070f16) aid_size_cell_blid

0x61cb,	// (0x0006a2ad) bg_popup_window_pane_cp07

0xce51,	// (0x00070f33) grid_popup_blid_pane

0xce5b,	// (0x00070f3d) heading_pane_cp05_ParamLimits

0xce5b,	// (0x00070f3d) heading_pane_cp05

0xcf25,	// (0x00071007) cell_popup_blid_pane_ParamLimits

0xcf25,	// (0x00071007) cell_popup_blid_pane

0xcf49,	// (0x0007102b) cell_popup_blid_pane_g1

0xcf51,	// (0x00071033) cell_popup_blid_pane_t1

0x61cb,	// (0x0006a2ad) mup2_indicator_pane_ParamLimits

0x61cb,	// (0x0006a2ad) mup2_indicator_pane

0xe359,	// (0x0007243b) mup2_visualizer_osc_pane

0x82db,	// (0x0006c3bd) mup2_visualizer_spec_pane_ParamLimits

0x82db,	// (0x0006c3bd) mup2_visualizer_spec_pane

0xe359,	// (0x0007243b) mup2_spec_half_pane

0xe359,	// (0x0007243b) mup2_spec_half_pane_cp

0xcf5f,	// (0x00071041) mup2_spec_bar_pane_ParamLimits

0xcf5f,	// (0x00071041) mup2_spec_bar_pane

0xeca0,	// (0x00072d82) mup2_spec_bar_pane_g1

0xcf7e,	// (0x00071060) mup2_spec_bar_pane_g2

0x0001,

0xf63f,	// (0x00073721) mup2_spec_bar_pane_g

0xe359,	// (0x0007243b) mup2_osc_middle_pane

0xeca0,	// (0x00072d82) mup2_visualizer_osc_pane_g1

0xe383,	// (0x00072465) popup_number_entry_window_t1_ParamLimits

0xe396,	// (0x00072478) popup_number_entry_window_t2_ParamLimits

0xe3a8,	// (0x0007248a) popup_number_entry_window_t3_ParamLimits

0x3a67,	// (0x00067b49) popup_number_entry_window_t5_ParamLimits

0x3a67,	// (0x00067b49) popup_number_entry_window_t5

0xf06b,	// (0x0007314d) popup_number_entry_window_t_ParamLimits

0xe3ba,	// (0x0007249c) text_title_cp2_ParamLimits

0x64d5,	// (0x0006a5b7) aid_hotspot_pointer_text2_pane

0x656f,	// (0x0006a651) main_viewer_pane_g9_ParamLimits

0x656f,	// (0x0006a651) main_viewer_pane_g9

0xef9e,	// (0x00073080) cale_month_pane_t1_ParamLimits

0xefdb,	// (0x000730bd) bg_cale_pane_ParamLimits

0xeff3,	// (0x000730d5) list_cale_pane_ParamLimits

0xf004,	// (0x000730e6) listscroll_cale_day_pane_t1

0xf016,	// (0x000730f8) scroll_pane_cp09_ParamLimits

0x6232,	// (0x0006a314) main_mup_eq_pane_t1_ParamLimits

0x6232,	// (0x0006a314) main_mup_eq_pane_t1

0x624c,	// (0x0006a32e) main_mup_eq_pane_t2_ParamLimits

0x624c,	// (0x0006a32e) main_mup_eq_pane_t2

0x6264,	// (0x0006a346) main_mup_eq_pane_t3_ParamLimits

0x6264,	// (0x0006a346) main_mup_eq_pane_t3

0x627c,	// (0x0006a35e) main_mup_eq_pane_t4_ParamLimits

0x627c,	// (0x0006a35e) main_mup_eq_pane_t4

0x6294,	// (0x0006a376) main_mup_eq_pane_t5_ParamLimits

0x6294,	// (0x0006a376) main_mup_eq_pane_t5

0x62ac,	// (0x0006a38e) main_mup_eq_pane_t6_ParamLimits

0x62ac,	// (0x0006a38e) main_mup_eq_pane_t6

0x62c0,	// (0x0006a3a2) main_mup_eq_pane_t7_ParamLimits

0x62c0,	// (0x0006a3a2) main_mup_eq_pane_t7

0x62d4,	// (0x0006a3b6) main_mup_eq_pane_t8_ParamLimits

0x62d4,	// (0x0006a3b6) main_mup_eq_pane_t8

0x62ea,	// (0x0006a3cc) main_mup_eq_pane_t9_ParamLimits

0x62ea,	// (0x0006a3cc) main_mup_eq_pane_t9

0x6302,	// (0x0006a3e4) main_mup_eq_pane_t10_ParamLimits

0x6302,	// (0x0006a3e4) main_mup_eq_pane_t10

0x0009,

0xf3cf,	// (0x000734b1) main_mup_eq_pane_t_ParamLimits

0xf3cf,	// (0x000734b1) main_mup_eq_pane_t

0x63bf,	// (0x0006a4a1) mup_equalizer_pane_cp5_ParamLimits

0x63d5,	// (0x0006a4b7) mup_equalizer_pane_cp6_ParamLimits

0x63ed,	// (0x0006a4cf) mup_equalizer_pane_cp7_ParamLimits

0xe359,	// (0x0007243b) main_gallery_pane

0x810a,	// (0x0006c1ec) smil2_volume_pane

0x8112,	// (0x0006c1f4) smil_status_volume_pane_g1_ParamLimits

0x8125,	// (0x0006c207) smil_status_volume_pane_g2_ParamLimits

0x8138,	// (0x0006c21a) smil_status_volume_pane_g3_ParamLimits

0xf598,	// (0x0007367a) smil_status_volume_pane_g_ParamLimits

0x61cb,	// (0x0006a2ad) bg_popup_window_pane_cp07_ParamLimits

0xce3c,	// (0x00070f1e) blid_firmament_pane

0xe9c9,	// (0x00072aab) aid_size_cell_gallery_ParamLimits

0xe9c9,	// (0x00072aab) aid_size_cell_gallery

0xe9c9,	// (0x00072aab) grid_gallery_pane_ParamLimits

0xe9c9,	// (0x00072aab) grid_gallery_pane

0x7eb2,	// (0x0006bf94) cell_gallery_pane_ParamLimits

0x7eb2,	// (0x0006bf94) cell_gallery_pane

0xea01,	// (0x00072ae3) bg_cell_gallery_focus_pane_ParamLimits

0xea01,	// (0x00072ae3) bg_cell_gallery_focus_pane

0xea5a,	// (0x00072b3c) cell_gallery_pane_g1_ParamLimits

0xea5a,	// (0x00072b3c) cell_gallery_pane_g1

0xea5a,	// (0x00072b3c) cell_gallery_pane_g2_ParamLimits

0xea5a,	// (0x00072b3c) cell_gallery_pane_g2

0xea5a,	// (0x00072b3c) cell_gallery_pane_g3_ParamLimits

0xea5a,	// (0x00072b3c) cell_gallery_pane_g3

0xea68,	// (0x00072b4a) cell_gallery_pane_g4_ParamLimits

0xea68,	// (0x00072b4a) cell_gallery_pane_g4

0x0003,

0xf644,	// (0x00073726) cell_gallery_pane_g_ParamLimits

0xf644,	// (0x00073726) cell_gallery_pane_g

0xcf88,	// (0x0007106a) bg_cell_gallery_focus_pane_g1

0xcf90,	// (0x00071072) bg_cell_gallery_focus_pane_g2

0xcf98,	// (0x0007107a) bg_cell_gallery_focus_pane_g3

0xcfa0,	// (0x00071082) bg_cell_gallery_focus_pane_g4

0xcfa8,	// (0x0007108a) bg_cell_gallery_focus_pane_g5

0xcfb0,	// (0x00071092) bg_cell_gallery_focus_pane_g6

0xcfb8,	// (0x0007109a) bg_cell_gallery_focus_pane_g7

0xcfc0,	// (0x000710a2) bg_cell_gallery_focus_pane_g8

0x0007,

0xf64d,	// (0x0007372f) bg_cell_gallery_focus_pane_g

0xcfc8,	// (0x000710aa) aid_firma_cardinal

0xcfdc,	// (0x000710be) blid_firmament_pane_t1

0xcff3,	// (0x000710d5) blid_firmament_pane_t2

0xd00a,	// (0x000710ec) blid_firmament_pane_t3

0xd021,	// (0x00071103) blid_firmament_pane_t4

0x0003,

0xf65e,	// (0x00073740) blid_firmament_pane_t

0xd038,	// (0x0007111a) blid_sat_info_pane

0xeca0,	// (0x00072d82) blid_sat_info_pane_g1

0xeca0,	// (0x00072d82) blid_sat_info_pane_g2

0x0001,

0xf3c3,	// (0x000734a5) blid_sat_info_pane_g

0xd048,	// (0x0007112a) blid_sat_info_pane_t1

0xd056,	// (0x00071138) smil2_volume_content_pane

0xd05f,	// (0x00071141) smil2_volume_pane_g1

0xd067,	// (0x00071149) smil2_volume_content_pane_g1

0xd070,	// (0x00071152) smil2_volume_content_pane_g2

0xd079,	// (0x0007115b) smil2_volume_content_pane_g3

0xd082,	// (0x00071164) smil2_volume_content_pane_g4

0xd08b,	// (0x0007116d) smil2_volume_content_pane_g5

0xd094,	// (0x00071176) smil2_volume_content_pane_g6

0xd09d,	// (0x0007117f) smil2_volume_content_pane_g7

0xd0a6,	// (0x00071188) smil2_volume_content_pane_g8

0xd0af,	// (0x00071191) smil2_volume_content_pane_g9

0xd0b8,	// (0x0007119a) smil2_volume_content_pane_g10

0x0009,

0xf667,	// (0x00073749) smil2_volume_content_pane_g

0x4127,	// (0x00068209) cale_week_day_heading_pane_t1_ParamLimits

0x4142,	// (0x00068224) cale_week_day_heading_pane_t2_ParamLimits

0x415d,	// (0x0006823f) cale_week_day_heading_pane_t3_ParamLimits

0x4178,	// (0x0006825a) cale_week_day_heading_pane_t4_ParamLimits

0x4193,	// (0x00068275) cale_week_day_heading_pane_t5_ParamLimits

0x41ae,	// (0x00068290) cale_week_day_heading_pane_t6_ParamLimits

0x41c9,	// (0x000682ab) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x00073254) cale_week_day_heading_pane_t_ParamLimits

0xec2c,	// (0x00072d0e) bg_cale_side_pane_ParamLimits

0x41e4,	// (0x000682c6) cale_week_time_pane_t1_ParamLimits

0x41fe,	// (0x000682e0) cale_week_time_pane_t2_ParamLimits

0x4218,	// (0x000682fa) cale_week_time_pane_t3_ParamLimits

0x4232,	// (0x00068314) cale_week_time_pane_t4_ParamLimits

0x424c,	// (0x0006832e) cale_week_time_pane_t5_ParamLimits

0x4266,	// (0x00068348) cale_week_time_pane_t6_ParamLimits

0x4286,	// (0x00068368) cale_week_time_pane_t7_ParamLimits

0x42a8,	// (0x0006838a) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x00073263) cale_week_time_pane_t_ParamLimits

0x42cc,	// (0x000683ae) cell_cale_week_pane_g2_ParamLimits

0xec2c,	// (0x00072d0e) bg_cale_side_pane_cp01_ParamLimits

0x53f6,	// (0x000694d8) cale_month_week_pane_t1_ParamLimits

0x540f,	// (0x000694f1) cale_month_week_pane_t2_ParamLimits

0x5428,	// (0x0006950a) cale_month_week_pane_t3_ParamLimits

0x5441,	// (0x00069523) cale_month_week_pane_t4_ParamLimits

0x545c,	// (0x0006953e) cale_month_week_pane_t5_ParamLimits

0x547d,	// (0x0006955f) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x00073331) cale_month_week_pane_t_ParamLimits

0x55c4,	// (0x000696a6) cell_cale_month_pane_g1_ParamLimits

0xe359,	// (0x0007243b) main_cale_event_viewer_pane

0xe359,	// (0x0007243b) listscroll_cale_event_viewer_pane

0xd0c1,	// (0x000711a3) list_cale_ev_pane

0xd0c9,	// (0x000711ab) scroll_pane_cp023

0xd0d5,	// (0x000711b7) field_cale_ev_pane_ParamLimits

0xd0d5,	// (0x000711b7) field_cale_ev_pane

0xd0f3,	// (0x000711d5) field_cale_ev_content_pane_ParamLimits

0xd0f3,	// (0x000711d5) field_cale_ev_content_pane

0xd0ff,	// (0x000711e1) field_cale_ev_pane_g1_ParamLimits

0xd0ff,	// (0x000711e1) field_cale_ev_pane_g1

0xd10b,	// (0x000711ed) field_cale_ev_pane_g2_ParamLimits

0xd10b,	// (0x000711ed) field_cale_ev_pane_g2

0xd123,	// (0x00071205) field_cale_ev_pane_g3_ParamLimits

0xd123,	// (0x00071205) field_cale_ev_pane_g3

0x0002,

0xf67c,	// (0x0007375e) field_cale_ev_pane_g_ParamLimits

0xf67c,	// (0x0007375e) field_cale_ev_pane_g

0xd13b,	// (0x0007121d) field_cale_ev_pane_t1_ParamLimits

0xd13b,	// (0x0007121d) field_cale_ev_pane_t1

0xd152,	// (0x00071234) field_cale_ev_content_pane_t1_ParamLimits

0xd152,	// (0x00071234) field_cale_ev_content_pane_t1

0x649f,	// (0x0006a581) bg_button_pane_cp01

0x3eb2,	// (0x00067f94) listscroll_cale_week_pane_ParamLimits

0xebd7,	// (0x00072cb9) popup_toolbar_window_cp01

0xebfd,	// (0x00072cdf) listscroll_cale_week_pane_t1_ParamLimits

0x3eb2,	// (0x00067f94) listscroll_cale_day_pane_ParamLimits

0xebd7,	// (0x00072cb9) popup_toolbar_window_cp02

0xf004,	// (0x000730e6) listscroll_cale_day_pane_t1_ParamLimits

0x3eb2,	// (0x00067f94) main_cale_month_pane_ParamLimits

0x7fe6,	// (0x0006c0c8) popup_toolbar_window_cp03_ParamLimits

0x7fe6,	// (0x0006c0c8) popup_toolbar_window_cp03

0x67ea,	// (0x0006a8cc) main_image_pane_g2_ParamLimits

0x67ea,	// (0x0006a8cc) main_image_pane_g2

0x67f6,	// (0x0006a8d8) main_image_pane_g3_ParamLimits

0x67f6,	// (0x0006a8d8) main_image_pane_g3

0x0002,

0xf461,	// (0x00073543) main_image_pane_g_ParamLimits

0xf461,	// (0x00073543) main_image_pane_g

0x6802,	// (0x0006a8e4) main_image_pane_t1_ParamLimits

0x6819,	// (0x0006a8fb) main_image_pane_t2_ParamLimits

0x6819,	// (0x0006a8fb) main_image_pane_t2

0x682b,	// (0x0006a90d) main_image_pane_t3_ParamLimits

0x682b,	// (0x0006a90d) main_image_pane_t3

0x683d,	// (0x0006a91f) main_image_pane_t4_ParamLimits

0x683d,	// (0x0006a91f) main_image_pane_t4

0x0003,

0xf468,	// (0x0007354a) main_image_pane_t_ParamLimits

0xf468,	// (0x0007354a) main_image_pane_t

0x684f,	// (0x0006a931) popup_image_details_window_cp01

0x6859,	// (0x0006a93b) popup_toobar_trans_pane_cp01_ParamLimits

0x6859,	// (0x0006a93b) popup_toobar_trans_pane_cp01

0x7f36,	// (0x0006c018) popup_image_details_window_ParamLimits

0x7f36,	// (0x0006c018) popup_image_details_window

0x7f44,	// (0x0006c026) popup_image_focus_window

0xe9c9,	// (0x00072aab) camera2_autofocus_pane_ParamLimits

0xe9c9,	// (0x00072aab) camera2_autofocus_pane

0xe359,	// (0x0007243b) bg_popup_sub_pane_cp06

0xd170,	// (0x00071252) popup_image_focus_window_g1

0xd178,	// (0x0007125a) popup_image_focus_window_g2

0xd180,	// (0x00071262) popup_image_focus_window_g3

0xd188,	// (0x0007126a) popup_image_focus_window_g4

0x0003,

0xf683,	// (0x00073765) popup_image_focus_window_g

0xd190,	// (0x00071272) popup_image_focus_window_t1

0xd19e,	// (0x00071280) popup_image_focus_window_t2

0xd1ae,	// (0x00071290) popup_image_focus_window_t3

0x0002,

0xf68c,	// (0x0007376e) popup_image_focus_window_t

0xea5a,	// (0x00072b3c) camera2_autofocus_pane_g1

0xea01,	// (0x00072ae3) bg_tb_trans_pane_cp01

0xd1bc,	// (0x0007129e) popup_image_details_window_g1

0xd1cf,	// (0x000712b1) popup_image_details_window_g2

0x0002,

0xf69e,	// (0x00073780) popup_image_details_window_g

0xd1f8,	// (0x000712da) popup_image_details_window_t1

0xd20a,	// (0x000712ec) popup_image_details_window_t2

0xd223,	// (0x00071305) popup_image_details_window_t3

0xd237,	// (0x00071319) popup_image_details_window_t4

0xd252,	// (0x00071334) popup_image_details_window_t5

0x0004,

0xf6a5,	// (0x00073787) popup_image_details_window_t

0xeab8,	// (0x00072b9a) bg_calc_paper_pane_ParamLimits

0xe359,	// (0x0007243b) grid_highlight_pane_cp013

0x3c36,	// (0x00067d18) list_calc_pane_ParamLimits

0x3c48,	// (0x00067d2a) scroll_pane_cp024

0xeacc,	// (0x00072bae) bg_calc_display_pane_ParamLimits

0x3c50,	// (0x00067d32) calc_display_pane_t1_ParamLimits

0x3c65,	// (0x00067d47) calc_display_pane_t2_ParamLimits

0x3c7a,	// (0x00067d5c) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x000731d4) calc_display_pane_t_ParamLimits

0x3d54,	// (0x00067e36) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x000731f1) cell_calc_pane_g

0x3d5d,	// (0x00067e3f) cell_calc_pane_t1

0xeb21,	// (0x00072c03) grid_highlight_pane_cp02_ParamLimits

0xeb37,	// (0x00072c19) toolbar_button_pane_cp01_ParamLimits

0xeb37,	// (0x00072c19) toolbar_button_pane_cp01

0x6893,	// (0x0006a975) temp_image_control_pane_ParamLimits

0x6893,	// (0x0006a975) temp_image_control_pane

0xea01,	// (0x00072ae3) main_mp3_pane

0xd26c,	// (0x0007134e) temp_image_control_pane_g1_ParamLimits

0xd26c,	// (0x0007134e) temp_image_control_pane_g1

0xd27a,	// (0x0007135c) temp_image_control_pane_g2_ParamLimits

0xd27a,	// (0x0007135c) temp_image_control_pane_g2

0xd28c,	// (0x0007136e) temp_image_control_pane_g3_ParamLimits

0xd28c,	// (0x0007136e) temp_image_control_pane_g3

0x83e4,	// (0x0006c4c6) temp_image_control_pane_g4_ParamLimits

0x83e4,	// (0x0006c4c6) temp_image_control_pane_g4

0x0003,

0xf6b0,	// (0x00073792) temp_image_control_pane_g_ParamLimits

0xf6b0,	// (0x00073792) temp_image_control_pane_g

0xd26c,	// (0x0007134e) main_mp3_pane_g1

0x83f5,	// (0x0006c4d7) main_mp3_pane_g2

0x0007,

0xf6b9,	// (0x0007379b) main_mp3_pane_g

0xd2c1,	// (0x000713a3) main_mp3_pane_t1

0xea68,	// (0x00072b4a) main_camera_pane_g8_ParamLimits

0xea68,	// (0x00072b4a) main_camera_pane_g8

0x4473,	// (0x00068555) main_video_pane_g7_ParamLimits

0x4473,	// (0x00068555) main_video_pane_g7

0xf057,	// (0x00073139) main_camera2_pane_t7_ParamLimits

0xf057,	// (0x00073139) main_camera2_pane_t7

0xedbc,	// (0x00072e9e) scroll_pane_cp025_ParamLimits

0xedbc,	// (0x00072e9e) scroll_pane_cp025

0xedd0,	// (0x00072eb2) scroll_pane_cp026_ParamLimits

0xedd0,	// (0x00072eb2) scroll_pane_cp026

0xeddf,	// (0x00072ec1) wml_content_pane_ParamLimits

0xe359,	// (0x0007243b) main_touch_calib_pane

0x8499,	// (0x0006c57b) main_touch_calib_pane_g1

0x84a5,	// (0x0006c587) main_touch_calib_pane_g2

0x84b1,	// (0x0006c593) main_touch_calib_pane_g3

0x84bd,	// (0x0006c59f) main_touch_calib_pane_g4

0x0003,

0xf6d7,	// (0x000737b9) main_touch_calib_pane_g

0x84c9,	// (0x0006c5ab) main_touch_calib_pane_t1

0x84e2,	// (0x0006c5c4) main_touch_calib_pane_t2

0x0004,

0xf6e0,	// (0x000737c2) main_touch_calib_pane_t

0x5f4e,	// (0x0006a030) mup_progress_pane_cp02

0x5f83,	// (0x0006a065) navi_pane_g1

0x603e,	// (0x0006a120) navi_pane_mp_t3

0xea01,	// (0x00072ae3) main_mp3_pane_ParamLimits

0x8036,	// (0x0006c118) navi_pane_ParamLimits

0xd26c,	// (0x0007134e) main_mp3_pane_g1_ParamLimits

0x83f5,	// (0x0006c4d7) main_mp3_pane_g2_ParamLimits

0x8401,	// (0x0006c4e3) main_mp3_pane_g3_ParamLimits

0x8401,	// (0x0006c4e3) main_mp3_pane_g3

0x840d,	// (0x0006c4ef) main_mp3_pane_g4_ParamLimits

0x840d,	// (0x0006c4ef) main_mp3_pane_g4

0xea5a,	// (0x00072b3c) main_mp3_pane_g5_ParamLimits

0xea5a,	// (0x00072b3c) main_mp3_pane_g5

0xd29c,	// (0x0007137e) main_mp3_pane_g6_ParamLimits

0xd29c,	// (0x0007137e) main_mp3_pane_g6

0xd2a9,	// (0x0007138b) main_mp3_pane_g7_ParamLimits

0xd2a9,	// (0x0007138b) main_mp3_pane_g7

0xd2b5,	// (0x00071397) main_mp3_pane_g8_ParamLimits

0xd2b5,	// (0x00071397) main_mp3_pane_g8

0xf6b9,	// (0x0007379b) main_mp3_pane_g_ParamLimits

0x8419,	// (0x0006c4fb) main_mp3_pane_t2

0x8429,	// (0x0006c50b) main_mp3_pane_t3

0xd2cf,	// (0x000713b1) main_mp3_pane_t4

0xd2dd,	// (0x000713bf) main_mp3_pane_t5

0x0005,

0xf6ca,	// (0x000737ac) main_mp3_pane_t

0xd2eb,	// (0x000713cd) mup_progress_pane_cp01

0x379c,	// (0x0006787e) aid_zoom_text_secondary2

0xd0c1,	// (0x000711a3) list_cale_ev2_pane

0xd0c9,	// (0x000711ab) scroll_pane_cp023_ParamLimits

0x853d,	// (0x0006c61f) field_cale_ev2_pane_ParamLimits

0x853d,	// (0x0006c61f) field_cale_ev2_pane

0x8567,	// (0x0006c649) field_cale_ev2_pane_g1_ParamLimits

0x8567,	// (0x0006c649) field_cale_ev2_pane_g1

0x8573,	// (0x0006c655) field_cale_ev2_pane_g2_ParamLimits

0x8573,	// (0x0006c655) field_cale_ev2_pane_g2

0x858b,	// (0x0006c66d) field_cale_ev2_pane_g3_ParamLimits

0x858b,	// (0x0006c66d) field_cale_ev2_pane_g3

0x0003,

0xf6eb,	// (0x000737cd) field_cale_ev2_pane_g_ParamLimits

0xf6eb,	// (0x000737cd) field_cale_ev2_pane_g

0x2b8c,	// (0x00066c6e) field_cale_ev2_pane_t1_ParamLimits

0x2b8c,	// (0x00066c6e) field_cale_ev2_pane_t1

0x2ba3,	// (0x00066c85) field_cale_ev2_pane_t2_ParamLimits

0x2ba3,	// (0x00066c85) field_cale_ev2_pane_t2

0x0001,

0xf6f4,	// (0x000737d6) field_cale_ev2_pane_t_ParamLimits

0xf6f4,	// (0x000737d6) field_cale_ev2_pane_t

0x65e5,	// (0x0006a6c7) main_postcard_pane_g5_ParamLimits

0x65e5,	// (0x0006a6c7) main_postcard_pane_g5

0x65f3,	// (0x0006a6d5) main_postcard_pane_g6_ParamLimits

0x65f3,	// (0x0006a6d5) main_postcard_pane_g6

0xe9c9,	// (0x00072aab) camera2_autofocus_pane_cp_ParamLimits

0xe9c9,	// (0x00072aab) camera2_autofocus_pane_cp

0xea01,	// (0x00072ae3) main_mup3_pane

0x85ee,	// (0x0006c6d0) main_mup3_pane_g1_ParamLimits

0x85ee,	// (0x0006c6d0) main_mup3_pane_g1

0x860f,	// (0x0006c6f1) main_mup3_pane_g2_ParamLimits

0x860f,	// (0x0006c6f1) main_mup3_pane_g2

0x8689,	// (0x0006c76b) main_mup3_pane_g3_ParamLimits

0x8689,	// (0x0006c76b) main_mup3_pane_g3

0x86cc,	// (0x0006c7ae) main_mup3_pane_g4_ParamLimits

0x86cc,	// (0x0006c7ae) main_mup3_pane_g4

0x870f,	// (0x0006c7f1) main_mup3_pane_g5_ParamLimits

0x870f,	// (0x0006c7f1) main_mup3_pane_g5

0x8752,	// (0x0006c834) main_mup3_pane_g6_ParamLimits

0x8752,	// (0x0006c834) main_mup3_pane_g6

0xea68,	// (0x00072b4a) main_mup3_pane_g7_ParamLimits

0xea68,	// (0x00072b4a) main_mup3_pane_g7

0x0007,

0xf704,	// (0x000737e6) main_mup3_pane_g_ParamLimits

0xf704,	// (0x000737e6) main_mup3_pane_g

0x87c8,	// (0x0006c8aa) main_mup3_pane_t1_ParamLimits

0x87c8,	// (0x0006c8aa) main_mup3_pane_t1

0x8837,	// (0x0006c919) main_mup3_pane_t2_ParamLimits

0x8837,	// (0x0006c919) main_mup3_pane_t2

0x8900,	// (0x0006c9e2) main_mup3_pane_t4_ParamLimits

0x8900,	// (0x0006c9e2) main_mup3_pane_t4

0x894e,	// (0x0006ca30) main_mup3_pane_t5_ParamLimits

0x894e,	// (0x0006ca30) main_mup3_pane_t5

0x89fe,	// (0x0006cae0) main_mup3_pane_t6_ParamLimits

0x89fe,	// (0x0006cae0) main_mup3_pane_t6

0x0005,

0xf715,	// (0x000737f7) main_mup3_pane_t_ParamLimits

0xf715,	// (0x000737f7) main_mup3_pane_t

0x8aaa,	// (0x0006cb8c) mup3_progress_pane_ParamLimits

0x8aaa,	// (0x0006cb8c) mup3_progress_pane

0x8b1e,	// (0x0006cc00) popup_mup3_control_window_ParamLimits

0x8b1e,	// (0x0006cc00) popup_mup3_control_window

0xd2f3,	// (0x000713d5) popup_mup3_text_window

0x8b37,	// (0x0006cc19) mup3_progress_pane_t1

0x8b56,	// (0x0006cc38) mup3_progress_pane_t2

0xd2fb,	// (0x000713dd) mup3_progress_pane_t3

0x0002,

0xf722,	// (0x00073804) mup3_progress_pane_t

0xd318,	// (0x000713fa) mup_progress_pane_cp03

0xe359,	// (0x0007243b) bg_tb_trans_pane_cp04

0x8b75,	// (0x0006cc57) mup3_volume_pane

0x8b7d,	// (0x0006cc5f) popup_mup3_control_window_g1

0x8b86,	// (0x0006cc68) mup3_volume_pane_g1

0x8b8f,	// (0x0006cc71) mup3_volume_pane_g2

0x8b98,	// (0x0006cc7a) mup3_volume_pane_g3

0x0002,

0xf729,	// (0x0007380b) mup3_volume_pane_g

0xe359,	// (0x0007243b) bg_tb_trans_pane_cp03

0xd328,	// (0x0007140a) popup_mup3_text_window_g1

0xd330,	// (0x00071412) popup_mup3_text_window_t1

0xeb14,	// (0x00072bf6) list_calc_item_pane_g1_ParamLimits

0xcdb2,	// (0x00070e94) mup_volume_pane_cp_g1

0x84fb,	// (0x0006c5dd) main_touch_calib_pane_t3

0x8511,	// (0x0006c5f3) main_touch_calib_pane_t4

0x8527,	// (0x0006c609) main_touch_calib_pane_t5

0x3754,	// (0x00067836) aid_cell_size_toolbar2

0x375c,	// (0x0006783e) aid_popup3_width_pane

0x2a54,	// (0x00066b36) aid_zoom_text_msg_primary

0x4375,	// (0x00068457) vorec_t7

0xead8,	// (0x00072bba) bg_calc_paper_pane_g1_ParamLimits

0xeae4,	// (0x00072bc6) bg_calc_paper_pane_g2_ParamLimits

0xeaf0,	// (0x00072bd2) bg_calc_paper_pane_g3_ParamLimits

0xeafc,	// (0x00072bde) bg_calc_paper_pane_g4_ParamLimits

0xeb08,	// (0x00072bea) bg_calc_paper_pane_g5_ParamLimits

0x3cb9,	// (0x00067d9b) bg_calc_paper_pane_g6_ParamLimits

0x3cca,	// (0x00067dac) bg_calc_paper_pane_g7_ParamLimits

0x3cdb,	// (0x00067dbd) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x000731db) bg_calc_paper_pane_g_ParamLimits

0x3cec,	// (0x00067dce) calc_bg_paper_pane_g9_ParamLimits

0xe9c9,	// (0x00072aab) image_qvga_pane_ParamLimits

0xe9c9,	// (0x00072aab) image_qvga_pane

0xe9df,	// (0x00072ac1) bg_popup_sub_pane_cp04_ParamLimits

0x6759,	// (0x0006a83b) popup_mup_playback_window_g1_ParamLimits

0x6765,	// (0x0006a847) popup_mup_playback_window_t1_ParamLimits

0x677a,	// (0x0006a85c) popup_mup_playback_window_t2_ParamLimits

0xf45c,	// (0x0007353e) popup_mup_playback_window_t_ParamLimits

0xea5a,	// (0x00072b3c) main_mup2_pane_g3_ParamLimits

0xea5a,	// (0x00072b3c) main_mup2_pane_g3

0x465a,	// (0x0006873c) popup_toolbar_window_cp04

0x6e99,	// (0x0006af7b) popup_call2_audio_second_window_g3_ParamLimits

0x6e99,	// (0x0006af7b) popup_call2_audio_second_window_g3

0x72b3,	// (0x0006b395) popup_call2_audio_first_window_g4_ParamLimits

0x72b3,	// (0x0006b395) popup_call2_audio_first_window_g4

0x7932,	// (0x0006ba14) popup_call2_audio_in_window_g4_ParamLimits

0x7932,	// (0x0006ba14) popup_call2_audio_in_window_g4

0x678f,	// (0x0006a871) aid_area_sk_bg_cut_ParamLimits

0x678f,	// (0x0006a871) aid_area_sk_bg_cut

0x679c,	// (0x0006a87e) aid_area_sk_bg_cut_2_ParamLimits

0x679c,	// (0x0006a87e) aid_area_sk_bg_cut_2

0xe359,	// (0x0007243b) aid_placing_details_win

0xe359,	// (0x0007243b) aid_placing_details_win_2

0xea5a,	// (0x00072b3c) camera2_autofocus_pane_g1_ParamLimits

0x39aa,	// (0x00067a8c) popup_fixed_preview_cale_window_ParamLimits

0x39aa,	// (0x00067a8c) popup_fixed_preview_cale_window

0x60f1,	// (0x0006a1d3) navi_slider_pane_g3

0x60fa,	// (0x0006a1dc) navi_slider_pane_g4

0x6103,	// (0x0006a1e5) navi_slider_pane_g5

0x60f1,	// (0x0006a1d3) navi_slider_pane_g6

0x610c,	// (0x0006a1ee) navi_slider_pane_g7

0x640e,	// (0x0006a4f0) mup_scale_pane_g3

0x6417,	// (0x0006a4f9) mup_scale_pane_g4

0x6420,	// (0x0006a502) mup_scale_pane_g5

0x6429,	// (0x0006a50b) mup_scale_pane_g6

0x6432,	// (0x0006a514) mup_scale_pane_g7

0xeca0,	// (0x00072d82) cams2_slider_pane_g3

0xeca0,	// (0x00072d82) cams2_slider_pane_g4

0xeca0,	// (0x00072d82) cams2_slider_pane_g5

0xeca0,	// (0x00072d82) cams2_slider_pane_g6

0xeca0,	// (0x00072d82) cams2_slider_pane_g7

0xeca0,	// (0x00072d82) camera2_autofocus_pane_cp_g1

0x7ea6,	// (0x0006bf88) bg_popup_preview_window_pane_cp02_ParamLimits

0x7ea6,	// (0x0006bf88) bg_popup_preview_window_pane_cp02

0xd33e,	// (0x00071420) list_fp_cale_pane_ParamLimits

0xd33e,	// (0x00071420) list_fp_cale_pane

0xd34a,	// (0x0007142c) popup_fixed_preview_cale_window_t1_ParamLimits

0xd34a,	// (0x0007142c) popup_fixed_preview_cale_window_t1

0x8ba1,	// (0x0006cc83) popup_fixed_preview_cale_window_t2_ParamLimits

0x8ba1,	// (0x0006cc83) popup_fixed_preview_cale_window_t2

0x8bb6,	// (0x0006cc98) popup_fixed_preview_cale_window_t3_ParamLimits

0x8bb6,	// (0x0006cc98) popup_fixed_preview_cale_window_t3

0x0002,

0xf730,	// (0x00073812) popup_fixed_preview_cale_window_t_ParamLimits

0xf730,	// (0x00073812) popup_fixed_preview_cale_window_t

0x8bcb,	// (0x0006ccad) list_single_fp_cale_pane_ParamLimits

0x8bcb,	// (0x0006ccad) list_single_fp_cale_pane

0xd368,	// (0x0007144a) list_single_fp_cale_pane_g1_ParamLimits

0xd368,	// (0x0007144a) list_single_fp_cale_pane_g1

0xd374,	// (0x00071456) list_single_fp_cale_pane_g2_ParamLimits

0xd374,	// (0x00071456) list_single_fp_cale_pane_g2

0x0002,

0xf737,	// (0x00073819) list_single_fp_cale_pane_g_ParamLimits

0xf737,	// (0x00073819) list_single_fp_cale_pane_g

0xd38d,	// (0x0007146f) list_single_fp_cale_pane_t1_ParamLimits

0xd38d,	// (0x0007146f) list_single_fp_cale_pane_t1

0xd39f,	// (0x00071481) list_single_fp_cale_pane_t2_ParamLimits

0xd39f,	// (0x00071481) list_single_fp_cale_pane_t2

0x0001,

0xf73e,	// (0x00073820) list_single_fp_cale_pane_t_ParamLimits

0xf73e,	// (0x00073820) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe359,	// (0x0007243b) main_dialer_pane

0xe359,	// (0x0007243b) aid_cell_size_keypad

0xe359,	// (0x0007243b) dialer_ne_pane

0xe359,	// (0x0007243b) grid_dialer_command_1_pane

0xe359,	// (0x0007243b) grid_dialer_command_2_pane

0xe359,	// (0x0007243b) grid_dialer_keypad_pane

0x61cb,	// (0x0006a2ad) bg_popup_call_pane_cp06_ParamLimits

0x61cb,	// (0x0006a2ad) bg_popup_call_pane_cp06

0x61cb,	// (0x0006a2ad) dialer_ne_clear_pane_ParamLimits

0x61cb,	// (0x0006a2ad) dialer_ne_clear_pane

0xeca0,	// (0x00072d82) dialer_ne_pane_g1

0xf057,	// (0x00073139) dialer_ne_pane_t1_ParamLimits

0xf057,	// (0x00073139) dialer_ne_pane_t1

0xd3d2,	// (0x000714b4) dialer_ne_pane_t2_ParamLimits

0xd3d2,	// (0x000714b4) dialer_ne_pane_t2

0x8bde,	// (0x0006ccc0) dialer_ne_pane_t3_ParamLimits

0x8bde,	// (0x0006ccc0) dialer_ne_pane_t3

0x0002,

0xf743,	// (0x00073825) dialer_ne_pane_t_ParamLimits

0xf743,	// (0x00073825) dialer_ne_pane_t

0x8bde,	// (0x0006ccc0) dialer_ne_pane_t3_copy1_ParamLimits

0x8bde,	// (0x0006ccc0) dialer_ne_pane_t3_copy1

0xd3ef,	// (0x000714d1) cell_dialer_keypad_pane_ParamLimits

0xd3ef,	// (0x000714d1) cell_dialer_keypad_pane

0xea01,	// (0x00072ae3) cell_dialer_command_1_pane_ParamLimits

0xea01,	// (0x00072ae3) cell_dialer_command_1_pane

0xd406,	// (0x000714e8) cell_dialer_command_2_pane_ParamLimits

0xd406,	// (0x000714e8) cell_dialer_command_2_pane

0xea01,	// (0x00072ae3) bg_button_pane_cp02_ParamLimits

0xea01,	// (0x00072ae3) bg_button_pane_cp02

0xea5a,	// (0x00072b3c) cell_dialer_keypad_pane_g1_ParamLimits

0xea5a,	// (0x00072b3c) cell_dialer_keypad_pane_g1

0xea01,	// (0x00072ae3) bg_button_pane_cp03_ParamLimits

0xea01,	// (0x00072ae3) bg_button_pane_cp03

0xea5a,	// (0x00072b3c) cell_dialer_command_1_pane_g1_ParamLimits

0xea5a,	// (0x00072b3c) cell_dialer_command_1_pane_g1

0xe359,	// (0x0007243b) bg_button_pane_cp04

0xeca0,	// (0x00072d82) cell_dialer_command_2_pane_g1

0xe359,	// (0x0007243b) bg_button_pane_cp06

0xeca0,	// (0x00072d82) dialer_ne_clear_pane_g1

0x5f8f,	// (0x0006a071) navi_pane_g2

0x5fbd,	// (0x0006a09f) navi_pane_g3

0x0002,

0xf35f,	// (0x00073441) navi_pane_g

0x604c,	// (0x0006a12e) navi_pane_mv_g2

0x6073,	// (0x0006a155) navi_pane_mv_g5

0x607b,	// (0x0006a15d) navi_pane_mv_t1

0xeacc,	// (0x00072bae) main_clock2_pane

0xe9c9,	// (0x00072aab) main_clock2_list_pane_ParamLimits

0xe9c9,	// (0x00072aab) main_clock2_list_pane

0x8c54,	// (0x0006cd36) main_clock2_pane_t1_ParamLimits

0x8c54,	// (0x0006cd36) main_clock2_pane_t1

0x8c82,	// (0x0006cd64) main_clock2_pane_t2_ParamLimits

0x8c82,	// (0x0006cd64) main_clock2_pane_t2

0x0004,

0xf74f,	// (0x00073831) main_clock2_pane_t_ParamLimits

0xf74f,	// (0x00073831) main_clock2_pane_t

0x8ce7,	// (0x0006cdc9) popup_clock_analogue_window_cp03_ParamLimits

0x8ce7,	// (0x0006cdc9) popup_clock_analogue_window_cp03

0x8d05,	// (0x0006cde7) popup_clock_digital_window_cp02_ParamLimits

0x8d05,	// (0x0006cde7) popup_clock_digital_window_cp02

0x8d7a,	// (0x0006ce5c) main_clock2_list_single_pane_ParamLimits

0x8d7a,	// (0x0006ce5c) main_clock2_list_single_pane

0xec7e,	// (0x00072d60) list_highlight_pane_cp05

0xd449,	// (0x0007152b) main_clock2_list_single_pane_t1

0x465a,	// (0x0006873c) popup_toolbar_window_cp04_ParamLimits

0xea68,	// (0x00072b4a) camera2_autofocus_pane_g2_ParamLimits

0xea68,	// (0x00072b4a) camera2_autofocus_pane_g2

0xea68,	// (0x00072b4a) camera2_autofocus_pane_g3_ParamLimits

0xea68,	// (0x00072b4a) camera2_autofocus_pane_g3

0xea68,	// (0x00072b4a) camera2_autofocus_pane_g4_ParamLimits

0xea68,	// (0x00072b4a) camera2_autofocus_pane_g4

0xea68,	// (0x00072b4a) camera2_autofocus_pane_g5_ParamLimits

0xea68,	// (0x00072b4a) camera2_autofocus_pane_g5

0x0004,

0xf693,	// (0x00073775) camera2_autofocus_pane_g_ParamLimits

0xf693,	// (0x00073775) camera2_autofocus_pane_g

0x85af,	// (0x0006c691) camera2_autofocus_pane_cp_g2

0x85b7,	// (0x0006c699) camera2_autofocus_pane_cp_g3

0x85bf,	// (0x0006c6a1) camera2_autofocus_pane_cp_g4

0x85c7,	// (0x0006c6a9) camera2_autofocus_pane_cp_g5

0x0004,

0xf6f9,	// (0x000737db) camera2_autofocus_pane_cp_g

0xe359,	// (0x0007243b) popup_dialer_spcha_window

0xe359,	// (0x0007243b) bg_popup_sub_pane_cp07

0xe359,	// (0x0007243b) list_spcha_pane

0xd457,	// (0x00071539) list_single_spcha_pane_ParamLimits

0xd457,	// (0x00071539) list_single_spcha_pane

0xe359,	// (0x0007243b) list_highlight_pane_cp06

0x591b,	// (0x000699fd) list_single_spcha_pane_t1

0x76dc,	// (0x0006b7be) popup_call2_audio_out_window_g4_ParamLimits

0x76dc,	// (0x0006b7be) popup_call2_audio_out_window_g4

0xe359,	// (0x0007243b) main_imed2_pane

0x7f4c,	// (0x0006c02e) popup_imed_adjust2_window

0x7f5f,	// (0x0006c041) popup_imed_trans_window_ParamLimits

0x7f5f,	// (0x0006c041) popup_imed_trans_window

0xce87,	// (0x00070f69) popup_blid_sat_info2_window_t1

0xce95,	// (0x00070f77) popup_blid_sat_info2_window_t2

0x000a,

0xf628,	// (0x0007370a) popup_blid_sat_info2_window_t

0x8e2f,	// (0x0006cf11) aid_size_cell_colour_35

0x8e49,	// (0x0006cf2b) aid_size_cell_colour_112

0x8e60,	// (0x0006cf42) aid_size_cell_effect

0xea01,	// (0x00072ae3) bg_tb_trans_pane_cp02

0xd469,	// (0x0007154b) heading_imed_pane

0x8e7a,	// (0x0006cf5c) listscroll_imed_pane

0xd475,	// (0x00071557) heading_imed_pane_g1

0xd47d,	// (0x0007155f) heading_imed_pane_t1

0xd48b,	// (0x0007156d) grid_imed_colour_35_pane_ParamLimits

0xd48b,	// (0x0007156d) grid_imed_colour_35_pane

0x8e86,	// (0x0006cf68) grid_imed_effect_pane

0xd4a3,	// (0x00071585) list_imed_aspect_pane

0x8e96,	// (0x0006cf78) scroll_pane_cp027_ParamLimits

0x8e96,	// (0x0006cf78) scroll_pane_cp027

0x8ea2,	// (0x0006cf84) cell_imed_effect_pane_ParamLimits

0x8ea2,	// (0x0006cf84) cell_imed_effect_pane

0xd4ab,	// (0x0007158d) cell_imed_colour_pane_ParamLimits

0xd4ab,	// (0x0007158d) cell_imed_colour_pane

0xd4ed,	// (0x000715cf) cell_imed_colour_pane_g1_ParamLimits

0xd4ed,	// (0x000715cf) cell_imed_colour_pane_g1

0xd4fe,	// (0x000715e0) hgihlgiht_grid_pane_cp016_ParamLimits

0xd4fe,	// (0x000715e0) hgihlgiht_grid_pane_cp016

0x8eba,	// (0x0006cf9c) cell_imed_effect_pane_g1

0x8ec2,	// (0x0006cfa4) grid_highlight_pane_cp017

0xd50f,	// (0x000715f1) list_imed_single_pane_ParamLimits

0xd50f,	// (0x000715f1) list_imed_single_pane

0xe359,	// (0x0007243b) list_highlight_pane_cp07

0xd524,	// (0x00071606) list_imed_aspect_pane_comp1_t1

0x7eb2,	// (0x0006bf94) bg_tb_trans_pane_cp05

0xd546,	// (0x00071628) popup_imed_adjust2_window_g1

0xd56d,	// (0x0007164f) popup_imed_adjust2_window_t1

0xd585,	// (0x00071667) slider_imed_adjust_pane

0xd599,	// (0x0007167b) slider_imed_adjust_pane_g1

0xd5a9,	// (0x0007168b) slider_imed_adjust_pane_g2

0xd5b9,	// (0x0007169b) slider_imed_adjust_pane_g3

0xd5ca,	// (0x000716ac) slider_imed_adjust_pane_g4

0x0003,

0xf76c,	// (0x0007384e) slider_imed_adjust_pane_g

0x8ecb,	// (0x0006cfad) aid_size_cell_clipart2

0x8ed7,	// (0x0006cfb9) grid_imed_clipart_pane

0xd5db,	// (0x000716bd) scroll_pane_cp031

0x8ee1,	// (0x0006cfc3) cell_imed_clipart_pane_ParamLimits

0x8ee1,	// (0x0006cfc3) cell_imed_clipart_pane

0x8f04,	// (0x0006cfe6) cell_imed_clipart_pane_g1

0xe359,	// (0x0007243b) grid_highlight_pane_cp014

0x8c36,	// (0x0006cd18) main_clock2_pane_g1_ParamLimits

0x8c36,	// (0x0006cd18) main_clock2_pane_g1

0x8d21,	// (0x0006ce03) aid_call2_pane_cp10

0x8d33,	// (0x0006ce15) aid_call_pane_cp10

0x5e85,	// (0x00069f67) popup_clock_analogue_window_cp10_g1

0x5e85,	// (0x00069f67) popup_clock_analogue_window_cp10_g2

0x8d45,	// (0x0006ce27) popup_clock_analogue_window_cp10_g3

0x8d45,	// (0x0006ce27) popup_clock_analogue_window_cp10_g4

0x5e85,	// (0x00069f67) popup_clock_analogue_window_cp10_g5

0x0004,

0xf75a,	// (0x0007383c) popup_clock_analogue_window_cp10_g

0x8d5b,	// (0x0006ce3d) popup_clock_analogue_window_cp10_t1

0x8d8c,	// (0x0006ce6e) clock_digital_number_pane_cp10_ParamLimits

0x8d8c,	// (0x0006ce6e) clock_digital_number_pane_cp10

0x8da6,	// (0x0006ce88) clock_digital_number_pane_cp11_ParamLimits

0x8da6,	// (0x0006ce88) clock_digital_number_pane_cp11

0x8dc0,	// (0x0006cea2) clock_digital_number_pane_cp12_ParamLimits

0x8dc0,	// (0x0006cea2) clock_digital_number_pane_cp12

0x8dda,	// (0x0006cebc) clock_digital_number_pane_cp13_ParamLimits

0x8dda,	// (0x0006cebc) clock_digital_number_pane_cp13

0x8df4,	// (0x0006ced6) clock_digital_separator_pane_cp10_ParamLimits

0x8df4,	// (0x0006ced6) clock_digital_separator_pane_cp10

0x8e0e,	// (0x0006cef0) popup_clock_digital_window_cp02_t1_ParamLimits

0x8e0e,	// (0x0006cef0) popup_clock_digital_window_cp02_t1

0xe9d7,	// (0x00072ab9) clock_digital_number_pane_cp10_g1

0xe9d7,	// (0x00072ab9) clock_digital_number_pane_cp10_g2

0x0001,

0xf775,	// (0x00073857) clock_digital_number_pane_cp10_g

0xe9d7,	// (0x00072ab9) clock_digital_separator_pane_cp10_g1

0xe9d7,	// (0x00072ab9) clock_digital_separator_pane_g2_cp10

0x60a7,	// (0x0006a189) navi_pane_vded_g4

0x60b0,	// (0x0006a192) navi_pane_vded_g5

0x60b9,	// (0x0006a19b) navi_pane_vded_t1

0xe359,	// (0x0007243b) main_vded_pane

0x8f0d,	// (0x0006cfef) main_vded_pane_g1

0x8f19,	// (0x0006cffb) main_vded_pane_g2

0x8f23,	// (0x0006d005) main_vded_pane_g3

0x0002,

0xf77a,	// (0x0007385c) main_vded_pane_g

0x8f2d,	// (0x0006d00f) main_vded_pane_t1

0x8f3b,	// (0x0006d01d) main_vded_pane_t2

0x0001,

0xf781,	// (0x00073863) main_vded_pane_t

0x8f49,	// (0x0006d02b) vded_slider_pane

0x8f53,	// (0x0006d035) vded_video_pane

0xd5e3,	// (0x000716c5) vded_video_pane_g1

0x8f5d,	// (0x0006d03f) vded_video_pane_g2

0xeca0,	// (0x00072d82) vded_video_pane_g3

0x0002,

0xf786,	// (0x00073868) vded_video_pane_g

0xd5ed,	// (0x000716cf) vded_slider_pane_g1

0xcdb2,	// (0x00070e94) vded_slider_pane_g2

0xd5f6,	// (0x000716d8) vded_slider_pane_g3

0xd5ff,	// (0x000716e1) vded_slider_pane_g4

0xd608,	// (0x000716ea) vded_slider_pane_g5

0x0004,

0xf78d,	// (0x0007386f) vded_slider_pane_g

0x8b10,	// (0x0006cbf2) mup3_rocker_pane_ParamLimits

0x8b10,	// (0x0006cbf2) mup3_rocker_pane

0x8f66,	// (0x0006d048) mup3_control_keys_pane_g1

0x8f6e,	// (0x0006d050) mup3_control_keys_pane_g2

0x8f76,	// (0x0006d058) mup3_control_keys_pane_g3

0x8f7e,	// (0x0006d060) mup3_control_keys_pane_g4

0x0003,

0xf798,	// (0x0007387a) mup3_control_keys_pane_g

0x39d2,	// (0x00067ab4) popup_toolbar2_fixed_window_cp01_ParamLimits

0x39d2,	// (0x00067ab4) popup_toolbar2_fixed_window_cp01

0x8b2a,	// (0x0006cc0c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x8b2a,	// (0x0006cc0c) popup_toolbar2_fixed_window_cp02

0x700b,	// (0x0006b0ed) popup_call2_audio_second_window_t4_ParamLimits

0x700b,	// (0x0006b0ed) popup_call2_audio_second_window_t4

0x7549,	// (0x0006b62b) popup_call2_audio_first_window_t6_ParamLimits

0x7549,	// (0x0006b62b) popup_call2_audio_first_window_t6

0x77df,	// (0x0006b8c1) popup_call2_audio_out_window_t6_ParamLimits

0x77df,	// (0x0006b8c1) popup_call2_audio_out_window_t6

0xe359,	// (0x0007243b) main_vitu_pane

0xe9c9,	// (0x00072aab) aid_size_cell_itu_ParamLimits

0xe9c9,	// (0x00072aab) aid_size_cell_itu

0xe9c9,	// (0x00072aab) bg_popup_window_pane_cp08_ParamLimits

0xe9c9,	// (0x00072aab) bg_popup_window_pane_cp08

0xe9c9,	// (0x00072aab) field_vitu_entry_pane_ParamLimits

0xe9c9,	// (0x00072aab) field_vitu_entry_pane

0xe9c9,	// (0x00072aab) grid_vitu_function_pane_ParamLimits

0xe9c9,	// (0x00072aab) grid_vitu_function_pane

0xe9c9,	// (0x00072aab) grid_vitu_itu_pane_ParamLimits

0xe9c9,	// (0x00072aab) grid_vitu_itu_pane

0xe9c9,	// (0x00072aab) cell_vitu_itu_pane_ParamLimits

0xe9c9,	// (0x00072aab) cell_vitu_itu_pane

0xe9c9,	// (0x00072aab) cell_vitu_function_pane_ParamLimits

0xe9c9,	// (0x00072aab) cell_vitu_function_pane

0xea01,	// (0x00072ae3) bg_popup_sub_pane_cp08_ParamLimits

0xea01,	// (0x00072ae3) bg_popup_sub_pane_cp08

0xecba,	// (0x00072d9c) field_vitu_entry_pane_t1_ParamLimits

0xecba,	// (0x00072d9c) field_vitu_entry_pane_t1

0xd3d2,	// (0x000714b4) field_vitu_entry_pane_t2_ParamLimits

0xd3d2,	// (0x000714b4) field_vitu_entry_pane_t2

0x0001,

0xf7a1,	// (0x00073883) field_vitu_entry_pane_t_ParamLimits

0xf7a1,	// (0x00073883) field_vitu_entry_pane_t

0x61cb,	// (0x0006a2ad) bg_button_pane_cp05_ParamLimits

0x61cb,	// (0x0006a2ad) bg_button_pane_cp05

0xd611,	// (0x000716f3) cell_vitu_itu_pane_g1

0xccff,	// (0x00070de1) cell_vitu_itu_pane_t1_ParamLimits

0xccff,	// (0x00070de1) cell_vitu_itu_pane_t1

0xccff,	// (0x00070de1) cell_vitu_itu_pane_t2_ParamLimits

0xccff,	// (0x00070de1) cell_vitu_itu_pane_t2

0x0002,

0xf7a6,	// (0x00073888) cell_vitu_itu_pane_t_ParamLimits

0xf7a6,	// (0x00073888) cell_vitu_itu_pane_t

0xe359,	// (0x0007243b) bg_button_pane_cp07

0xeca0,	// (0x00072d82) cell_vitu_function_pane_g1

0x3b3f,	// (0x00067c21) main_calc_pane_g1

0x3790,	// (0x00067872) aid_visual_content_pane

0xe359,	// (0x0007243b) main_vradio_pane

0xea68,	// (0x00072b4a) main_vradio_pane_g1_ParamLimits

0xea68,	// (0x00072b4a) main_vradio_pane_g1

0xea68,	// (0x00072b4a) main_vradio_pane_g2_ParamLimits

0xea68,	// (0x00072b4a) main_vradio_pane_g2

0x0001,

0xf7ad,	// (0x0007388f) main_vradio_pane_g_ParamLimits

0xf7ad,	// (0x0007388f) main_vradio_pane_g

0xf057,	// (0x00073139) main_vradio_pane_t1_ParamLimits

0xf057,	// (0x00073139) main_vradio_pane_t1

0xf057,	// (0x00073139) main_vradio_pane_t2_ParamLimits

0xf057,	// (0x00073139) main_vradio_pane_t2

0xf057,	// (0x00073139) main_vradio_pane_t3_ParamLimits

0xf057,	// (0x00073139) main_vradio_pane_t3

0x0002,

0xf7b2,	// (0x00073894) main_vradio_pane_t_ParamLimits

0xf7b2,	// (0x00073894) main_vradio_pane_t

0xe9c9,	// (0x00072aab) vradio_rocker_control_pane_ParamLimits

0xe9c9,	// (0x00072aab) vradio_rocker_control_pane

0xe9c9,	// (0x00072aab) vradio_station_info_pane_ParamLimits

0xe9c9,	// (0x00072aab) vradio_station_info_pane

0xea01,	// (0x00072ae3) vradio_frequency_info_pane_ParamLimits

0xea01,	// (0x00072ae3) vradio_frequency_info_pane

0xeca0,	// (0x00072d82) vradio_station_info_pane_g1

0xccff,	// (0x00070de1) vradio_station_info_pane_t1_ParamLimits

0xccff,	// (0x00070de1) vradio_station_info_pane_t1

0xf057,	// (0x00073139) vradio_station_info_pane_t2_ParamLimits

0xf057,	// (0x00073139) vradio_station_info_pane_t2

0x0001,

0xf7b9,	// (0x0007389b) vradio_station_info_pane_t_ParamLimits

0xf7b9,	// (0x0007389b) vradio_station_info_pane_t

0xe359,	// (0x0007243b) vradio_tuning_pane

0x8f8e,	// (0x0006d070) vradio_rocker_control_pane_g1

0xd62d,	// (0x0007170f) vradio_rocker_control_pane_g2

0x8f96,	// (0x0006d078) vradio_rocker_control_pane_g3

0x8f9e,	// (0x0006d080) vradio_rocker_control_pane_g4

0x8fa6,	// (0x0006d088) vradio_rocker_control_pane_g5

0x0004,

0xf7be,	// (0x000738a0) vradio_rocker_control_pane_g

0xeca0,	// (0x00072d82) vradio_frequency_info_pane_g1

0xecba,	// (0x00072d9c) vradio_frequency_info_pane_t1_ParamLimits

0xecba,	// (0x00072d9c) vradio_frequency_info_pane_t1

0x8fae,	// (0x0006d090) vradio_tuning_pane_g1

0x8fbb,	// (0x0006d09d) vradio_tuning_pane_t1

0x37d9,	// (0x000678bb) area_side_right_pane_ParamLimits

0x37d9,	// (0x000678bb) area_side_right_pane

0x7e56,	// (0x0006bf38) status_small_pane_g1

0x7e5e,	// (0x0006bf40) status_small_pane_g2

0x7e67,	// (0x0006bf49) status_small_pane_g3

0x7e70,	// (0x0006bf52) status_small_pane_g4

0x0003,

0xf58a,	// (0x0007366c) status_small_pane_g

0x7e79,	// (0x0006bf5b) status_small_pane_t1

0xe359,	// (0x0007243b) main_video3_pane

0xd635,	// (0x00071717) cams_zoom_vslider_pane

0xd63d,	// (0x0007171f) image3_wide_pane_ParamLimits

0xd63d,	// (0x0007171f) image3_wide_pane

0xd657,	// (0x00071739) image3_wide_small_pane

0xd663,	// (0x00071745) main_video3_pane_g1_ParamLimits

0xd663,	// (0x00071745) main_video3_pane_g1

0xd67f,	// (0x00071761) main_video3_pane_g2_ParamLimits

0xd67f,	// (0x00071761) main_video3_pane_g2

0x0001,

0xf7c9,	// (0x000738ab) main_video3_pane_g_ParamLimits

0xf7c9,	// (0x000738ab) main_video3_pane_g

0xd69b,	// (0x0007177d) main_video3_pane_t1_ParamLimits

0xd69b,	// (0x0007177d) main_video3_pane_t1

0xd6c6,	// (0x000717a8) main_video3_pane_t2_ParamLimits

0xd6c6,	// (0x000717a8) main_video3_pane_t2

0xd6f1,	// (0x000717d3) main_video3_pane_t3_ParamLimits

0xd6f1,	// (0x000717d3) main_video3_pane_t3

0x0002,

0xf7ce,	// (0x000738b0) main_video3_pane_t_ParamLimits

0xf7ce,	// (0x000738b0) main_video3_pane_t

0xd71e,	// (0x00071800) cams_zoom_vslider_pane_g1

0xd727,	// (0x00071809) cams_zoom_vslider_pane_g2

0x0001,

0xf7d5,	// (0x000738b7) cams_zoom_vslider_pane_g

0xd72f,	// (0x00071811) small_slider_vertical_pane

0xeca0,	// (0x00072d82) small_slider_vertical_pane_g1

0xeca0,	// (0x00072d82) small_slider_vertical_pane_g2

0xd737,	// (0x00071819) small_slider_vertical_pane_g3

0x0002,

0xf7da,	// (0x000738bc) small_slider_vertical_pane_g

0xe359,	// (0x0007243b) main_hwr_training_pane

0xd740,	// (0x00071822) hwr_training_instruct_pane_ParamLimits

0xd740,	// (0x00071822) hwr_training_instruct_pane

0x8fca,	// (0x0006d0ac) hwr_training_navi_pane_ParamLimits

0x8fca,	// (0x0006d0ac) hwr_training_navi_pane

0x8fe4,	// (0x0006d0c6) hwr_training_write_pane_ParamLimits

0x8fe4,	// (0x0006d0c6) hwr_training_write_pane

0xe359,	// (0x0007243b) bg_frame_shadow_pane

0xd777,	// (0x00071859) hwr_training_write_pane_g1

0xd77f,	// (0x00071861) hwr_training_write_pane_g2

0xd787,	// (0x00071869) hwr_training_write_pane_g3

0xd78f,	// (0x00071871) hwr_training_write_pane_g4

0xd797,	// (0x00071879) hwr_training_write_pane_g5

0xd79f,	// (0x00071881) hwr_training_write_pane_g6

0xd7a7,	// (0x00071889) hwr_training_write_pane_g7

0x0006,

0xf7e1,	// (0x000738c3) hwr_training_write_pane_g

0x901c,	// (0x0006d0fe) hwr_training_navi_pane_g1_ParamLimits

0x901c,	// (0x0006d0fe) hwr_training_navi_pane_g1

0x902e,	// (0x0006d110) hwr_training_navi_pane_g2_ParamLimits

0x902e,	// (0x0006d110) hwr_training_navi_pane_g2

0x9040,	// (0x0006d122) hwr_training_navi_pane_g3_ParamLimits

0x9040,	// (0x0006d122) hwr_training_navi_pane_g3

0x9050,	// (0x0006d132) hwr_training_navi_pane_g4_ParamLimits

0x9050,	// (0x0006d132) hwr_training_navi_pane_g4

0x0004,

0xf7f0,	// (0x000738d2) hwr_training_navi_pane_g_ParamLimits

0xf7f0,	// (0x000738d2) hwr_training_navi_pane_g

0x906a,	// (0x0006d14c) hwr_training_navi_pane_t1

0x9078,	// (0x0006d15a) list_single_hwr_training_instruct_pane_ParamLimits

0x9078,	// (0x0006d15a) list_single_hwr_training_instruct_pane

0xd7af,	// (0x00071891) list_single_hwr_training_instruct_pane_t1

0xcf88,	// (0x0007106a) bg_frame_shadow_pane_g1

0xd7be,	// (0x000718a0) bg_frame_shadow_pane_g2

0xd7c6,	// (0x000718a8) bg_frame_shadow_pane_g3

0xd7ce,	// (0x000718b0) bg_frame_shadow_pane_g4

0xd7d6,	// (0x000718b8) bg_frame_shadow_pane_g5

0xd7de,	// (0x000718c0) bg_frame_shadow_pane_g6

0xd7e6,	// (0x000718c8) bg_frame_shadow_pane_g7

0xeb7b,	// (0x00072c5d) bg_frame_shadow_pane_g8

0x0007,

0xf7fb,	// (0x000738dd) bg_frame_shadow_pane_g

0xe359,	// (0x0007243b) main_video_tele_dialer_pane

0x90a1,	// (0x0006d183) aid_size_cell_video_keypad_ParamLimits

0x90a1,	// (0x0006d183) aid_size_cell_video_keypad

0x90b1,	// (0x0006d193) grid_video_dialer_keypad_pane_ParamLimits

0x90b1,	// (0x0006d193) grid_video_dialer_keypad_pane

0x90e5,	// (0x0006d1c7) video_down_pane_cp_ParamLimits

0x90e5,	// (0x0006d1c7) video_down_pane_cp

0x910f,	// (0x0006d1f1) cell_video_dialer_keypad_pane_ParamLimits

0x910f,	// (0x0006d1f1) cell_video_dialer_keypad_pane

0xd7ee,	// (0x000718d0) bg_button_pane_cp08_ParamLimits

0xd7ee,	// (0x000718d0) bg_button_pane_cp08

0x9124,	// (0x0006d206) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9124,	// (0x0006d206) cell_video_dialer_keypad_pane_g1

0x8b04,	// (0x0006cbe6) mup3_rocker2_pane_ParamLimits

0x8b04,	// (0x0006cbe6) mup3_rocker2_pane

0xeca0,	// (0x00072d82) mup3_rocker2_pane_g1

0x7ec0,	// (0x0006bfa2) main_dialer2_pane

0xe359,	// (0x0007243b) main_mp4_pane

0x917c,	// (0x0006d25e) main_mp4_pane_g1_ParamLimits

0x917c,	// (0x0006d25e) main_mp4_pane_g1

0x918a,	// (0x0006d26c) main_mp4_pane_g2_ParamLimits

0x918a,	// (0x0006d26c) main_mp4_pane_g2

0x9198,	// (0x0006d27a) main_mp4_pane_g3_ParamLimits

0x9198,	// (0x0006d27a) main_mp4_pane_g3

0x91dd,	// (0x0006d2bf) main_mp4_pane_g4_ParamLimits

0x91dd,	// (0x0006d2bf) main_mp4_pane_g4

0x920b,	// (0x0006d2ed) main_mp4_pane_g5_ParamLimits

0x920b,	// (0x0006d2ed) main_mp4_pane_g5

0x0007,

0xf81b,	// (0x000738fd) main_mp4_pane_g_ParamLimits

0xf81b,	// (0x000738fd) main_mp4_pane_g

0x927f,	// (0x0006d361) main_mp4_pane_t1_ParamLimits

0x927f,	// (0x0006d361) main_mp4_pane_t1

0x92db,	// (0x0006d3bd) main_mp4_pane_t2_ParamLimits

0x92db,	// (0x0006d3bd) main_mp4_pane_t2

0xd7fa,	// (0x000718dc) main_mp4_pane_t3_ParamLimits

0xd7fa,	// (0x000718dc) main_mp4_pane_t3

0x932d,	// (0x0006d40f) main_mp4_pane_t4_ParamLimits

0x932d,	// (0x0006d40f) main_mp4_pane_t4

0x0003,

0xf82c,	// (0x0007390e) main_mp4_pane_t_ParamLimits

0xf82c,	// (0x0007390e) main_mp4_pane_t

0x9371,	// (0x0006d453) mp4_progress_pane_ParamLimits

0x9371,	// (0x0006d453) mp4_progress_pane

0x93bb,	// (0x0006d49d) mp4_rocker_pane_ParamLimits

0x93bb,	// (0x0006d49d) mp4_rocker_pane

0xd828,	// (0x0007190a) mp4_progress_pane_t1

0xd841,	// (0x00071923) mp4_progress_pane_t2

0x0001,

0xf835,	// (0x00073917) mp4_progress_pane_t

0xd85a,	// (0x0007193c) mup_progress_pane_cp04

0xeca0,	// (0x00072d82) mp4_rocker_pane_g1

0x93db,	// (0x0006d4bd) aid_cell_size_keypad2_ParamLimits

0x93db,	// (0x0006d4bd) aid_cell_size_keypad2

0x93eb,	// (0x0006d4cd) dialer2_ne_pane_ParamLimits

0x93eb,	// (0x0006d4cd) dialer2_ne_pane

0x93f9,	// (0x0006d4db) grid_dialer2_keypad_pane_ParamLimits

0x93f9,	// (0x0006d4db) grid_dialer2_keypad_pane

0xd86d,	// (0x0007194f) bg_popup_call_pane_cp07_ParamLimits

0xd86d,	// (0x0007194f) bg_popup_call_pane_cp07

0x9409,	// (0x0006d4eb) dialer2_ne_pane_t1_ParamLimits

0x9409,	// (0x0006d4eb) dialer2_ne_pane_t1

0x942e,	// (0x0006d510) cell_dialer2_keypad_pane_ParamLimits

0x942e,	// (0x0006d510) cell_dialer2_keypad_pane

0xd88d,	// (0x0007196f) bg_button_pane_pane_cp04_ParamLimits

0xd88d,	// (0x0007196f) bg_button_pane_pane_cp04

0x9443,	// (0x0006d525) cell_dialer2_keypad_pane_g1_ParamLimits

0x9443,	// (0x0006d525) cell_dialer2_keypad_pane_g1

0x451c,	// (0x000685fe) aid_placing_vt_set_content_ParamLimits

0x451c,	// (0x000685fe) aid_placing_vt_set_content

0x4548,	// (0x0006862a) aid_placing_vt_set_title_ParamLimits

0x4548,	// (0x0006862a) aid_placing_vt_set_title

0xe359,	// (0x0007243b) main_image3_pane

0x94dd,	// (0x0006d5bf) area_side_right_pane_cp01_ParamLimits

0x94dd,	// (0x0006d5bf) area_side_right_pane_cp01

0xea76,	// (0x00072b58) main_image3_pane_g1_ParamLimits

0xea76,	// (0x00072b58) main_image3_pane_g1

0x950a,	// (0x0006d5ec) main_image3_pane_g2_ParamLimits

0x950a,	// (0x0006d5ec) main_image3_pane_g2

0x9523,	// (0x0006d605) main_image3_pane_g3_ParamLimits

0x9523,	// (0x0006d605) main_image3_pane_g3

0x953c,	// (0x0006d61e) main_image3_pane_g4_ParamLimits

0x953c,	// (0x0006d61e) main_image3_pane_g4

0x0003,

0xf844,	// (0x00073926) main_image3_pane_g_ParamLimits

0xf844,	// (0x00073926) main_image3_pane_g

0x9555,	// (0x0006d637) main_image3_pane_t1_ParamLimits

0x9555,	// (0x0006d637) main_image3_pane_t1

0x957a,	// (0x0006d65c) main_image3_pane_t2_ParamLimits

0x957a,	// (0x0006d65c) main_image3_pane_t2

0x9599,	// (0x0006d67b) main_image3_pane_t3_ParamLimits

0x9599,	// (0x0006d67b) main_image3_pane_t3

0x0003,

0xf84d,	// (0x0007392f) main_image3_pane_t_ParamLimits

0xf84d,	// (0x0007392f) main_image3_pane_t

0xe9c9,	// (0x00072aab) grid_sctrl_middle_pane_cp01_ParamLimits

0xe9c9,	// (0x00072aab) grid_sctrl_middle_pane_cp01

0x95fa,	// (0x0006d6dc) cell_sctrl_middle_pane_cp01_ParamLimits

0x95fa,	// (0x0006d6dc) cell_sctrl_middle_pane_cp01

0x960b,	// (0x0006d6ed) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x960b,	// (0x0006d6ed) cell_sctrl_middle_pane_cp01_g1

0xe359,	// (0x0007243b) main_call4_pane

0x9618,	// (0x0006d6fa) aid_size_button_call4_ParamLimits

0x9618,	// (0x0006d6fa) aid_size_button_call4

0x964e,	// (0x0006d730) call4_windows_pane_ParamLimits

0x964e,	// (0x0006d730) call4_windows_pane

0x9663,	// (0x0006d745) grid_call4_button_pane_ParamLimits

0x9663,	// (0x0006d745) grid_call4_button_pane

0x9691,	// (0x0006d773) call4_windows_conf_pane

0x96a6,	// (0x0006d788) popup_call4_audio_first_window_ParamLimits

0x96a6,	// (0x0006d788) popup_call4_audio_first_window

0x96f6,	// (0x0006d7d8) popup_call4_audio_second_window_ParamLimits

0x96f6,	// (0x0006d7d8) popup_call4_audio_second_window

0x970f,	// (0x0006d7f1) popup_call4_audio_wait_window_ParamLimits

0x970f,	// (0x0006d7f1) popup_call4_audio_wait_window

0x971d,	// (0x0006d7ff) cell_call4_button_pane_ParamLimits

0x971d,	// (0x0006d7ff) cell_call4_button_pane

0x9740,	// (0x0006d822) bg_button_pane_cp09_ParamLimits

0x9740,	// (0x0006d822) bg_button_pane_cp09

0x974c,	// (0x0006d82e) cell_call4_button_pane_g1_ParamLimits

0x974c,	// (0x0006d82e) cell_call4_button_pane_g1

0x9759,	// (0x0006d83b) cell_call4_button_pane_t1_ParamLimits

0x9759,	// (0x0006d83b) cell_call4_button_pane_t1

0xd8a1,	// (0x00071983) popup_call4_audio_conf_window_ParamLimits

0xd8a1,	// (0x00071983) popup_call4_audio_conf_window

0x8b37,	// (0x0006cc19) mup3_progress_pane_t1_ParamLimits

0x8b56,	// (0x0006cc38) mup3_progress_pane_t2_ParamLimits

0xd2fb,	// (0x000713dd) mup3_progress_pane_t3_ParamLimits

0xf722,	// (0x00073804) mup3_progress_pane_t_ParamLimits

0xd318,	// (0x000713fa) mup_progress_pane_cp03_ParamLimits

0x8f86,	// (0x0006d068) mup3_control_keys_pane_g4_copy1

0x939f,	// (0x0006d481) mp4_rocker2_pane_ParamLimits

0x939f,	// (0x0006d481) mp4_rocker2_pane

0xd8b5,	// (0x00071997) mp4_rocker2_pane_g1

0xd8bd,	// (0x0007199f) mp4_rocker2_pane_g2

0x979d,	// (0x0006d87f) mp4_rocker2_pane_g3

0x97a5,	// (0x0006d887) mp4_rocker2_pane_g4

0x97ad,	// (0x0006d88f) mp4_rocker2_pane_g5

0x0004,

0xf856,	// (0x00073938) mp4_rocker2_pane_g

0xe359,	// (0x0007243b) main_camera4_pane

0xe359,	// (0x0007243b) main_video4_pane

0x90c1,	// (0x0006d1a3) main_video_tele_dialer_pane_t1_ParamLimits

0x90c1,	// (0x0006d1a3) main_video_tele_dialer_pane_t1

0x90d3,	// (0x0006d1b5) main_video_tele_dialer_pane_t2_ParamLimits

0x90d3,	// (0x0006d1b5) main_video_tele_dialer_pane_t2

0x0001,

0xf80c,	// (0x000738ee) main_video_tele_dialer_pane_t_ParamLimits

0xf80c,	// (0x000738ee) main_video_tele_dialer_pane_t

0x97cd,	// (0x0006d8af) cam4_autofocus_pane_ParamLimits

0x97cd,	// (0x0006d8af) cam4_autofocus_pane

0x97e7,	// (0x0006d8c9) cam4_image_uncrop_pane_ParamLimits

0x97e7,	// (0x0006d8c9) cam4_image_uncrop_pane

0x97fe,	// (0x0006d8e0) cam4_indicators_pane_ParamLimits

0x97fe,	// (0x0006d8e0) cam4_indicators_pane

0x981a,	// (0x0006d8fc) main_camera4_pane_g1_ParamLimits

0x981a,	// (0x0006d8fc) main_camera4_pane_g1

0x9826,	// (0x0006d908) main_camera4_pane_g2_ParamLimits

0x9826,	// (0x0006d908) main_camera4_pane_g2

0x9826,	// (0x0006d908) main_camera4_pane_g3_ParamLimits

0x9826,	// (0x0006d908) main_camera4_pane_g3

0x9832,	// (0x0006d914) main_camera4_pane_g4_ParamLimits

0x9832,	// (0x0006d914) main_camera4_pane_g4

0x983e,	// (0x0006d920) main_camera4_pane_g5_ParamLimits

0x983e,	// (0x0006d920) main_camera4_pane_g5

0x0005,

0xf861,	// (0x00073943) main_camera4_pane_g_ParamLimits

0xf861,	// (0x00073943) main_camera4_pane_g

0x9858,	// (0x0006d93a) main_camera4_pane_t1_ParamLimits

0x9858,	// (0x0006d93a) main_camera4_pane_t1

0xea5a,	// (0x00072b3c) bg_tb_trans_pane_cp06

0x98a8,	// (0x0006d98a) cam4_indicators_pane_g1

0x98b9,	// (0x0006d99b) cam4_indicators_pane_g2

0x0002,

0xf87c,	// (0x0007395e) cam4_indicators_pane_g

0x98d1,	// (0x0006d9b3) cam4_indicators_pane_t1

0x98fb,	// (0x0006d9dd) main_video4_pane_g1_ParamLimits

0x98fb,	// (0x0006d9dd) main_video4_pane_g1

0x9907,	// (0x0006d9e9) main_video4_pane_g2_ParamLimits

0x9907,	// (0x0006d9e9) main_video4_pane_g2

0x9913,	// (0x0006d9f5) main_video4_pane_g3_ParamLimits

0x9913,	// (0x0006d9f5) main_video4_pane_g3

0x991f,	// (0x0006da01) main_video4_pane_g4_ParamLimits

0x991f,	// (0x0006da01) main_video4_pane_g4

0x0004,

0xf883,	// (0x00073965) main_video4_pane_g_ParamLimits

0xf883,	// (0x00073965) main_video4_pane_g

0x993f,	// (0x0006da21) vid4_indicators_pane_ParamLimits

0x993f,	// (0x0006da21) vid4_indicators_pane

0x995e,	// (0x0006da40) video4_image_uncrop_cif_pane_ParamLimits

0x995e,	// (0x0006da40) video4_image_uncrop_cif_pane

0x996d,	// (0x0006da4f) video4_image_uncrop_nhd_pane_ParamLimits

0x996d,	// (0x0006da4f) video4_image_uncrop_nhd_pane

0x97e7,	// (0x0006d8c9) video4_image_uncrop_vga_pane_ParamLimits

0x97e7,	// (0x0006d8c9) video4_image_uncrop_vga_pane

0xea01,	// (0x00072ae3) bg_tb_trans_pane_cp07

0x9982,	// (0x0006da64) vid4_indicators_pane_g1

0x9996,	// (0x0006da78) vid4_indicators_pane_g2

0x99aa,	// (0x0006da8c) vid4_indicators_pane_g3

0x0004,

0xf88e,	// (0x00073970) vid4_indicators_pane_g

0x99d7,	// (0x0006dab9) vid4_indicators_pane_t1

0x99ee,	// (0x0006dad0) cam4_autofocus_pane_g1

0x99f6,	// (0x0006dad8) cam4_autofocus_pane_g2

0x99fe,	// (0x0006dae0) cam4_autofocus_pane_g3

0x0002,

0xf899,	// (0x0007397b) cam4_autofocus_pane_g

0x9a06,	// (0x0006dae8) cam4_autofocus_pane_g3_copy1

0x90f3,	// (0x0006d1d5) video_down_pane_cp_t1

0x9101,	// (0x0006d1e3) video_down_pane_cp_t2

0x0001,

0xf811,	// (0x000738f3) video_down_pane_cp_t

0xe9c9,	// (0x00072aab) popup_vitu2_window_ParamLimits

0xe9c9,	// (0x00072aab) popup_vitu2_window

0x9a0e,	// (0x0006daf0) aid_size_cell2_itu2_ParamLimits

0x9a0e,	// (0x0006daf0) aid_size_cell2_itu2

0x9a30,	// (0x0006db12) aid_size_cell_itu2_ParamLimits

0x9a30,	// (0x0006db12) aid_size_cell_itu2

0xd86d,	// (0x0007194f) bg_popup_window_pane_cp09_ParamLimits

0xd86d,	// (0x0007194f) bg_popup_window_pane_cp09

0x9a74,	// (0x0006db56) field_vitu2_entry_pane_ParamLimits

0x9a74,	// (0x0006db56) field_vitu2_entry_pane

0x9a94,	// (0x0006db76) grid_vitu2_function_pane_ParamLimits

0x9a94,	// (0x0006db76) grid_vitu2_function_pane

0x9ad8,	// (0x0006dbba) grid_vitu2_itu_pane_ParamLimits

0x9ad8,	// (0x0006dbba) grid_vitu2_itu_pane

0x9b50,	// (0x0006dc32) cell_vitu2_itu_pane_ParamLimits

0x9b50,	// (0x0006dc32) cell_vitu2_itu_pane

0x9b69,	// (0x0006dc4b) cell_vitu2_function_pane_ParamLimits

0x9b69,	// (0x0006dc4b) cell_vitu2_function_pane

0xd8c5,	// (0x000719a7) bg_popup_call_pane_cp08_ParamLimits

0xd8c5,	// (0x000719a7) bg_popup_call_pane_cp08

0xd8dc,	// (0x000719be) field_vitu2_entry_pane_g1

0xd8e8,	// (0x000719ca) field_vitu2_entry_pane_g2

0x0002,

0xf8a0,	// (0x00073982) field_vitu2_entry_pane_g

0x2bb8,	// (0x00066c9a) field_vitu2_entry_pane_t1_ParamLimits

0x2bb8,	// (0x00066c9a) field_vitu2_entry_pane_t1

0x2beb,	// (0x00066ccd) field_vitu2_entry_pane_t2_ParamLimits

0x2beb,	// (0x00066ccd) field_vitu2_entry_pane_t2

0x0001,

0xf8a7,	// (0x00073989) field_vitu2_entry_pane_t_ParamLimits

0xf8a7,	// (0x00073989) field_vitu2_entry_pane_t

0x82b9,	// (0x0006c39b) bg_button_pane_cp010_ParamLimits

0x82b9,	// (0x0006c39b) bg_button_pane_cp010

0x9baa,	// (0x0006dc8c) cell_vitu2_itu_pane_g1

0x9bd0,	// (0x0006dcb2) cell_vitu2_itu_pane_t1_ParamLimits

0x9bd0,	// (0x0006dcb2) cell_vitu2_itu_pane_t1

0x2c08,	// (0x00066cea) cell_vitu2_itu_pane_t2_ParamLimits

0x2c08,	// (0x00066cea) cell_vitu2_itu_pane_t2

0x0002,

0xf8b1,	// (0x00073993) cell_vitu2_itu_pane_t_ParamLimits

0xf8b1,	// (0x00073993) cell_vitu2_itu_pane_t

0xea01,	// (0x00072ae3) bg_button_pane_cp011

0x9c1c,	// (0x0006dcfe) cell_vitu2_function_pane_g1

0xe359,	// (0x0007243b) main_myfav_hc_pane

0x95db,	// (0x0006d6bd) popup_image3_note_pane_ParamLimits

0x95db,	// (0x0006d6bd) popup_image3_note_pane

0x95e9,	// (0x0006d6cb) popup_image3_tool_bar_pane_ParamLimits

0x95e9,	// (0x0006d6cb) popup_image3_tool_bar_pane

0x2c7e,	// (0x00066d60) cell_vitu2_itu_pane_t3_ParamLimits

0x2c7e,	// (0x00066d60) cell_vitu2_itu_pane_t3

0xe359,	// (0x0007243b) bg_popup_trans_pane

0xd8fc,	// (0x000719de) grid_image3_tool_bar_pane

0xd906,	// (0x000719e8) bg_popup_trans_pane_g1

0xeec5,	// (0x00072fa7) bg_popup_trans_pane_g2

0xd90e,	// (0x000719f0) bg_popup_trans_pane_g3

0xd916,	// (0x000719f8) bg_popup_trans_pane_g4

0xd91e,	// (0x00071a00) bg_popup_trans_pane_g5

0xd926,	// (0x00071a08) bg_popup_trans_pane_g6

0xd92e,	// (0x00071a10) bg_popup_trans_pane_g7

0xd936,	// (0x00071a18) bg_popup_trans_pane_g8

0xeea5,	// (0x00072f87) bg_popup_trans_pane_g9

0x0008,

0xf8b8,	// (0x0007399a) bg_popup_trans_pane_g

0xd93e,	// (0x00071a20) cell_image3_tool_bar_pane_ParamLimits

0xd93e,	// (0x00071a20) cell_image3_tool_bar_pane

0xeca0,	// (0x00072d82) cell_image3_tool_bar_pane_g1

0xe359,	// (0x0007243b) bg_popup_trans_pane_cp1

0xd952,	// (0x00071a34) popup_image3_note_pane_t1

0xd960,	// (0x00071a42) popup_image3_note_pane_t2

0xd96e,	// (0x00071a50) popup_image3_note_pane_t3

0x0002,

0xf8cb,	// (0x000739ad) popup_image3_note_pane_t

0xd97c,	// (0x00071a5e) popup_image3_note_pane_t3_copy1

0x9c30,	// (0x0006dd12) bg_myfav_hc_instruction_pane_ParamLimits

0x9c30,	// (0x0006dd12) bg_myfav_hc_instruction_pane

0x9c48,	// (0x0006dd2a) cell_myfav_contact_pane_ParamLimits

0x9c48,	// (0x0006dd2a) cell_myfav_contact_pane

0x9c62,	// (0x0006dd44) cell_myfav_contact_pane_cp1_ParamLimits

0x9c62,	// (0x0006dd44) cell_myfav_contact_pane_cp1

0x9c7a,	// (0x0006dd5c) cell_myfav_contact_pane_cp2_ParamLimits

0x9c7a,	// (0x0006dd5c) cell_myfav_contact_pane_cp2

0x9c92,	// (0x0006dd74) cell_myfav_contact_pane_cp3_ParamLimits

0x9c92,	// (0x0006dd74) cell_myfav_contact_pane_cp3

0x9ca9,	// (0x0006dd8b) cell_myfav_contact_pane_cp4_ParamLimits

0x9ca9,	// (0x0006dd8b) cell_myfav_contact_pane_cp4

0x9cbf,	// (0x0006dda1) cell_myfav_contact_pane_cp5_ParamLimits

0x9cbf,	// (0x0006dda1) cell_myfav_contact_pane_cp5

0x9cd3,	// (0x0006ddb5) cell_myfav_contact_pane_cp6_ParamLimits

0x9cd3,	// (0x0006ddb5) cell_myfav_contact_pane_cp6

0x9ce7,	// (0x0006ddc9) cell_myfav_contact_pane_cp7_ParamLimits

0x9ce7,	// (0x0006ddc9) cell_myfav_contact_pane_cp7

0xd98a,	// (0x00071a6c) listscroll_gen_pane_cp05

0x9cff,	// (0x0006dde1) main_myfav_hc_pane_g1_ParamLimits

0x9cff,	// (0x0006dde1) main_myfav_hc_pane_g1

0x9d15,	// (0x0006ddf7) main_myfav_hc_pane_g2_ParamLimits

0x9d15,	// (0x0006ddf7) main_myfav_hc_pane_g2

0x0002,

0xf8d2,	// (0x000739b4) main_myfav_hc_pane_g_ParamLimits

0xf8d2,	// (0x000739b4) main_myfav_hc_pane_g

0x9d45,	// (0x0006de27) main_myfav_hc_pane_t1_ParamLimits

0x9d45,	// (0x0006de27) main_myfav_hc_pane_t1

0xd993,	// (0x00071a75) main_myfav_hc_pane_t2_ParamLimits

0xd993,	// (0x00071a75) main_myfav_hc_pane_t2

0xd9a5,	// (0x00071a87) main_myfav_hc_pane_t3_ParamLimits

0xd9a5,	// (0x00071a87) main_myfav_hc_pane_t3

0x9d5c,	// (0x0006de3e) main_myfav_hc_pane_t4_ParamLimits

0x9d5c,	// (0x0006de3e) main_myfav_hc_pane_t4

0x0004,

0xf8d9,	// (0x000739bb) main_myfav_hc_pane_t_ParamLimits

0xf8d9,	// (0x000739bb) main_myfav_hc_pane_t

0xeca0,	// (0x00072d82) bg_myfav_hc_instruction_pane_g1

0xd9b7,	// (0x00071a99) cell_myfav_contact_pane_g1_ParamLimits

0xd9b7,	// (0x00071a99) cell_myfav_contact_pane_g1

0xd9b7,	// (0x00071a99) cell_myfav_contact_pane_g2_ParamLimits

0xd9b7,	// (0x00071a99) cell_myfav_contact_pane_g2

0xd9c3,	// (0x00071aa5) cell_myfav_contact_pane_g3_ParamLimits

0xd9c3,	// (0x00071aa5) cell_myfav_contact_pane_g3

0xea68,	// (0x00072b4a) cell_myfav_contact_pane_g4_ParamLimits

0xea68,	// (0x00072b4a) cell_myfav_contact_pane_g4

0xd9d0,	// (0x00071ab2) cell_myfav_contact_pane_g5_ParamLimits

0xd9d0,	// (0x00071ab2) cell_myfav_contact_pane_g5

0x0004,

0xf8e4,	// (0x000739c6) cell_myfav_contact_pane_g_ParamLimits

0xf8e4,	// (0x000739c6) cell_myfav_contact_pane_g

0x9d2d,	// (0x0006de0f) main_myfav_hc_pane_g3_ParamLimits

0x9d2d,	// (0x0006de0f) main_myfav_hc_pane_g3

0x390d,	// (0x000679ef) popup_adpt_find_window

0x9d86,	// (0x0006de68) afind_page_pane_ParamLimits

0x9d86,	// (0x0006de68) afind_page_pane

0x9d93,	// (0x0006de75) aid_size_cell_afind_ParamLimits

0x9d93,	// (0x0006de75) aid_size_cell_afind

0x9dad,	// (0x0006de8f) bg_popup_sub_pane_cp09_ParamLimits

0x9dad,	// (0x0006de8f) bg_popup_sub_pane_cp09

0x9dba,	// (0x0006de9c) find_pane_cp01_ParamLimits

0x9dba,	// (0x0006de9c) find_pane_cp01

0xd9dc,	// (0x00071abe) grid_afind_control_pane_ParamLimits

0xd9dc,	// (0x00071abe) grid_afind_control_pane

0x9dc7,	// (0x0006dea9) grid_afind_pane_ParamLimits

0x9dc7,	// (0x0006dea9) grid_afind_pane

0x9de1,	// (0x0006dec3) cell_afind_pane_ParamLimits

0x9de1,	// (0x0006dec3) cell_afind_pane

0xeca0,	// (0x00072d82) afind_page_pane_g1

0x9e29,	// (0x0006df0b) afind_page_pane_g2

0x9e32,	// (0x0006df14) afind_page_pane_g3

0x0002,

0xf8ef,	// (0x000739d1) afind_page_pane_g

0x9e3b,	// (0x0006df1d) afind_page_pane_t1

0xd9f0,	// (0x00071ad2) cell_afind_grid_control_pane_ParamLimits

0xd9f0,	// (0x00071ad2) cell_afind_grid_control_pane

0xd88d,	// (0x0007196f) bg_button_pane_cp69_ParamLimits

0xd88d,	// (0x0007196f) bg_button_pane_cp69

0x9e5b,	// (0x0006df3d) cell_afind_pane_g1_ParamLimits

0x9e5b,	// (0x0006df3d) cell_afind_pane_g1

0x9e68,	// (0x0006df4a) cell_afind_pane_t1_ParamLimits

0x9e68,	// (0x0006df4a) cell_afind_pane_t1

0xecaa,	// (0x00072d8c) bg_button_pane_cp72

0xd9ff,	// (0x00071ae1) cell_afind_grid_control_pane_g1

0x6ad7,	// (0x0006abb9) aid_image_placing_area_ParamLimits

0x6ad7,	// (0x0006abb9) aid_image_placing_area

0xea5a,	// (0x00072b3c) field_vitu_entry_pane_g1_ParamLimits

0xea5a,	// (0x00072b3c) field_vitu_entry_pane_g1

0xea5a,	// (0x00072b3c) field_vitu_entry_pane_g2_ParamLimits

0xea5a,	// (0x00072b3c) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x000732c9) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x000732c9) field_vitu_entry_pane_g

0xd611,	// (0x000716f3) cell_vitu_itu_pane_g1_ParamLimits

0xd3d2,	// (0x000714b4) cell_vitu_itu_pane_t3_ParamLimits

0xd3d2,	// (0x000714b4) cell_vitu_itu_pane_t3

0xd828,	// (0x0007190a) mp4_progress_pane_t1_ParamLimits

0xd841,	// (0x00071923) mp4_progress_pane_t2_ParamLimits

0xf835,	// (0x00073917) mp4_progress_pane_t_ParamLimits

0xd85a,	// (0x0007193c) mup_progress_pane_cp04_ParamLimits

0x9d70,	// (0x0006de52) main_myfav_hc_pane_t5_ParamLimits

0x9d70,	// (0x0006de52) main_myfav_hc_pane_t5

0x2a5c,	// (0x00066b3e) aid_zoom_text_primary

0x390d,	// (0x000679ef) popup_adpt_find_window_ParamLimits

0xea01,	// (0x00072ae3) main_cam_set_pane

0x980c,	// (0x0006d8ee) cam4_zoom_pane_ParamLimits

0x980c,	// (0x0006d8ee) cam4_zoom_pane

0x9e7a,	// (0x0006df5c) main_cam_set_pane_g1_ParamLimits

0x9e7a,	// (0x0006df5c) main_cam_set_pane_g1

0x9e88,	// (0x0006df6a) main_cam_set_pane_g2_ParamLimits

0x9e88,	// (0x0006df6a) main_cam_set_pane_g2

0x0001,

0xf8f6,	// (0x000739d8) main_cam_set_pane_g_ParamLimits

0xf8f6,	// (0x000739d8) main_cam_set_pane_g

0x9e94,	// (0x0006df76) main_cam_set_pane_t1_ParamLimits

0x9e94,	// (0x0006df76) main_cam_set_pane_t1

0x9eb0,	// (0x0006df92) main_cset_listscroll_pane_ParamLimits

0x9eb0,	// (0x0006df92) main_cset_listscroll_pane

0x9ee2,	// (0x0006dfc4) main_cset_slider_pane_ParamLimits

0x9ee2,	// (0x0006dfc4) main_cset_slider_pane

0xda10,	// (0x00071af2) main_cset_list_pane_ParamLimits

0xda10,	// (0x00071af2) main_cset_list_pane

0xda20,	// (0x00071b02) scroll_pane_cp028

0x9f01,	// (0x0006dfe3) aid_area_touch_slider

0x9f1d,	// (0x0006dfff) cset_slider_pane

0x9f40,	// (0x0006e022) main_cset_slider_pane_g1

0x9f55,	// (0x0006e037) main_cset_slider_pane_g2

0x0011,

0xf8fb,	// (0x000739dd) main_cset_slider_pane_g

0xda59,	// (0x00071b3b) main_cset_slider_pane_t1

0xa01b,	// (0x0006e0fd) main_cset_slider_pane_t2

0xa035,	// (0x0006e117) main_cset_slider_pane_t3

0xa04f,	// (0x0006e131) main_cset_slider_pane_t4

0xa06d,	// (0x0006e14f) main_cset_slider_pane_t5

0xa08b,	// (0x0006e16d) main_cset_slider_pane_t6

0xa0a2,	// (0x0006e184) main_cset_slider_pane_t7

0x000e,

0xf920,	// (0x00073a02) main_cset_slider_pane_t

0xa1b0,	// (0x0006e292) cset_list_set_pane_ParamLimits

0xa1b0,	// (0x0006e292) cset_list_set_pane

0xdaf3,	// (0x00071bd5) aid_position_infowindow_above

0xdafb,	// (0x00071bdd) aid_position_infowindow_below

0xa1c9,	// (0x0006e2ab) cset_list_set_pane_g1_ParamLimits

0xa1c9,	// (0x0006e2ab) cset_list_set_pane_g1

0x2cd0,	// (0x00066db2) cset_list_set_pane_g3_ParamLimits

0x2cd0,	// (0x00066db2) cset_list_set_pane_g3

0x0001,

0xf93f,	// (0x00073a21) cset_list_set_pane_g_ParamLimits

0xf93f,	// (0x00073a21) cset_list_set_pane_g

0x2cdf,	// (0x00066dc1) cset_list_set_pane_t1_ParamLimits

0x2cdf,	// (0x00066dc1) cset_list_set_pane_t1

0xea01,	// (0x00072ae3) list_highlight_pane_cp021_ParamLimits

0xea01,	// (0x00072ae3) list_highlight_pane_cp021

0x640e,	// (0x0006a4f0) cset_slider_pane_g1

0x6420,	// (0x0006a502) cset_slider_pane_g2

0x6417,	// (0x0006a4f9) cset_slider_pane_g3

0x0002,

0xf944,	// (0x00073a26) cset_slider_pane_g

0xa1d5,	// (0x0006e2b7) aid_area_touch_cam4_zoom

0xa1dd,	// (0x0006e2bf) cam4_zoom_cont_pane

0xa1e5,	// (0x0006e2c7) cam4_zoom_pane_g1

0xa1ed,	// (0x0006e2cf) cam4_zoom_pane_g2

0xa1f5,	// (0x0006e2d7) cam4_zoom_pane_g3

0x0002,

0xf94b,	// (0x00073a2d) cam4_zoom_pane_g

0xd737,	// (0x00071819) cam4_zoom_cont_pane_g1

0xdb03,	// (0x00071be5) cam4_zoom_cont_pane_g2

0xdb0c,	// (0x00071bee) cam4_zoom_cont_pane_g3

0x0002,

0xf952,	// (0x00073a34) cam4_zoom_cont_pane_g

0x9632,	// (0x0006d714) call4_image_pane_ParamLimits

0x9632,	// (0x0006d714) call4_image_pane

0x9691,	// (0x0006d773) call4_windows_conf_pane_ParamLimits

0x96d4,	// (0x0006d7b6) popup_call4_audio_in_window_ParamLimits

0x96d4,	// (0x0006d7b6) popup_call4_audio_in_window

0xe359,	// (0x0007243b) bg_popup_call2_act_pane_cp02

0xd899,	// (0x0007197b) call4_list_conf_pane

0xeca0,	// (0x00072d82) call4_image_pane_g1

0xeca0,	// (0x00072d82) call4_image_pane_g2

0x0001,

0xf3c3,	// (0x000734a5) call4_image_pane_g

0xdb15,	// (0x00071bf7) list_single_graphic_popup_conf4_pane_ParamLimits

0xdb15,	// (0x00071bf7) list_single_graphic_popup_conf4_pane

0xe359,	// (0x0007243b) list_highlight_pane_cp022

0xdb28,	// (0x00071c0a) list_single_graphic_popup_conf4_pane_g1

0x5bb8,	// (0x00069c9a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf959,	// (0x00073a3b) list_single_graphic_popup_conf4_pane_g

0xdb30,	// (0x00071c12) list_single_graphic_popup_conf4_pane_t1

0x46ac,	// (0x0006878e) popup_vtel_slider_window_ParamLimits

0x46ac,	// (0x0006878e) popup_vtel_slider_window

0xd87b,	// (0x0007195d) dialer2_ne_pane_t2_ParamLimits

0xd87b,	// (0x0007195d) dialer2_ne_pane_t2

0x0001,

0xf83a,	// (0x0007391c) dialer2_ne_pane_t_ParamLimits

0xf83a,	// (0x0007391c) dialer2_ne_pane_t

0xea01,	// (0x00072ae3) bg_popup_sub_pane_cp010_ParamLimits

0xea01,	// (0x00072ae3) bg_popup_sub_pane_cp010

0xa1fd,	// (0x0006e2df) popup_vtel_slider_window_g1_ParamLimits

0xa1fd,	// (0x0006e2df) popup_vtel_slider_window_g1

0xa209,	// (0x0006e2eb) popup_vtel_slider_window_g2_ParamLimits

0xa209,	// (0x0006e2eb) popup_vtel_slider_window_g2

0x0003,

0xf95e,	// (0x00073a40) popup_vtel_slider_window_g_ParamLimits

0xf95e,	// (0x00073a40) popup_vtel_slider_window_g

0xa251,	// (0x0006e333) vtel_slider_pane_ParamLimits

0xa251,	// (0x0006e333) vtel_slider_pane

0xa260,	// (0x0006e342) vtel_slider_pane_g1_ParamLimits

0xa260,	// (0x0006e342) vtel_slider_pane_g1

0xa26d,	// (0x0006e34f) vtel_slider_pane_g2_ParamLimits

0xa26d,	// (0x0006e34f) vtel_slider_pane_g2

0xa27a,	// (0x0006e35c) vtel_slider_pane_g3_ParamLimits

0xa27a,	// (0x0006e35c) vtel_slider_pane_g3

0xa260,	// (0x0006e342) vtel_slider_pane_g4_ParamLimits

0xa260,	// (0x0006e342) vtel_slider_pane_g4

0xa287,	// (0x0006e369) vtel_slider_pane_g5_ParamLimits

0xa287,	// (0x0006e369) vtel_slider_pane_g5

0x0004,

0xf967,	// (0x00073a49) vtel_slider_pane_g_ParamLimits

0xf967,	// (0x00073a49) vtel_slider_pane_g

0xea01,	// (0x00072ae3) main_gallery2_pane

0x9a56,	// (0x0006db38) aid_size_row_itut2_dropdow_list_ParamLimits

0x9a56,	// (0x0006db38) aid_size_row_itut2_dropdow_list

0x9ab6,	// (0x0006db98) grid_vitu2_function_top_pane_ParamLimits

0x9ab6,	// (0x0006db98) grid_vitu2_function_top_pane

0x9b10,	// (0x0006dbf2) popup_vitu2_dropdown_list_window_ParamLimits

0x9b10,	// (0x0006dbf2) popup_vitu2_dropdown_list_window

0x9b2e,	// (0x0006dc10) popup_vitu2_match_list_window

0xa294,	// (0x0006e376) cell_vitu2_function_top_pane_ParamLimits

0xa294,	// (0x0006e376) cell_vitu2_function_top_pane

0xa2ae,	// (0x0006e390) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa2ae,	// (0x0006e390) cell_vitu2_function_top_pane_cp01

0xa2ca,	// (0x0006e3ac) cell_vitu2_function_top_wide_pane_ParamLimits

0xa2ca,	// (0x0006e3ac) cell_vitu2_function_top_wide_pane

0xea01,	// (0x00072ae3) bg_button_pane_cp012

0xa2e8,	// (0x0006e3ca) cell_vitu2_function_top_pane_g1

0xa2fc,	// (0x0006e3de) bg_button_pane_cp013_ParamLimits

0xa2fc,	// (0x0006e3de) bg_button_pane_cp013

0xa318,	// (0x0006e3fa) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa318,	// (0x0006e3fa) cell_vitu2_function_top_wide_pane_g1

0xe9c9,	// (0x00072aab) bg_popup_sub_pane_cp20

0xa330,	// (0x0006e412) list_vitu2_match_list_pane

0xd906,	// (0x000719e8) bg_popup_sub_pane_cp20_g1

0xd90e,	// (0x000719f0) bg_popup_sub_pane_cp20_g2

0xeec5,	// (0x00072fa7) bg_popup_sub_pane_cp20_g3

0xd916,	// (0x000719f8) bg_popup_sub_pane_cp20_g4

0xeea5,	// (0x00072f87) bg_popup_sub_pane_cp20_g5

0xdb46,	// (0x00071c28) bg_popup_sub_pane_cp20_g6

0xd926,	// (0x00071a08) bg_popup_sub_pane_cp20_g7

0xd92e,	// (0x00071a10) bg_popup_sub_pane_cp20_g8

0xd936,	// (0x00071a18) bg_popup_sub_pane_cp20_g9

0x0008,

0xf972,	// (0x00073a54) bg_popup_sub_pane_cp20_g

0xa348,	// (0x0006e42a) list_vitu2_match_list_item_pane_ParamLimits

0xa348,	// (0x0006e42a) list_vitu2_match_list_item_pane

0xa35a,	// (0x0006e43c) list_vitu2_match_list_item_pane_t1

0xe359,	// (0x0007243b) bg_popup_sub_pane_cp21

0xec7e,	// (0x00072d60) grid_vitu2_dropdown_list_pane

0xa368,	// (0x0006e44a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa368,	// (0x0006e44a) cell_vitu2_dropdown_list_char_pane

0xa388,	// (0x0006e46a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa388,	// (0x0006e46a) cell_vitu2_dropdown_list_ctrl_pane

0xdb4e,	// (0x00071c30) cell_vitu2_dropdown_list_char_pane_g1

0xdb57,	// (0x00071c39) cell_vitu2_dropdown_list_char_pane_g2

0xdb60,	// (0x00071c42) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf985,	// (0x00073a67) cell_vitu2_dropdown_list_char_pane_g

0xa3b0,	// (0x0006e492) cell_vitu2_dropdown_list_char_pane_t1

0xa3be,	// (0x0006e4a0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa3be,	// (0x0006e4a0) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa3cb,	// (0x0006e4ad) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa3cb,	// (0x0006e4ad) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa3d8,	// (0x0006e4ba) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa3d8,	// (0x0006e4ba) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa3e5,	// (0x0006e4c7) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa3e5,	// (0x0006e4c7) cell_vitu2_dropdown_list_ctrl_pane_g4

0xea5a,	// (0x00072b3c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xea5a,	// (0x00072b3c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf98c,	// (0x00073a6e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf98c,	// (0x00073a6e) cell_vitu2_dropdown_list_ctrl_pane_g

0xa401,	// (0x0006e4e3) aid_size_cell_gallery2_ParamLimits

0xa401,	// (0x0006e4e3) aid_size_cell_gallery2

0xa41b,	// (0x0006e4fd) grid_gallery2_pane_ParamLimits

0xa41b,	// (0x0006e4fd) grid_gallery2_pane

0xa432,	// (0x0006e514) scroll_pane_cp029_ParamLimits

0xa432,	// (0x0006e514) scroll_pane_cp029

0xa442,	// (0x0006e524) cell_gallery2_pane_ParamLimits

0xa442,	// (0x0006e524) cell_gallery2_pane

0xdb69,	// (0x00071c4b) cell_gallery2_pane_g2

0xa497,	// (0x0006e579) cell_gallery2_pane_g3

0xdb71,	// (0x00071c53) cell_gallery2_pane_g4

0xdb79,	// (0x00071c5b) cell_gallery2_pane_g5

0xec7e,	// (0x00072d60) grid_highlight_pane_cp10

0x9b2e,	// (0x0006dc10) popup_vitu2_match_list_window_ParamLimits

0x9b40,	// (0x0006dc22) popup_vitu2_query_window_ParamLimits

0x9b40,	// (0x0006dc22) popup_vitu2_query_window

0xe359,	// (0x0007243b) bg_vitu2_candi_button_pane

0xdb4e,	// (0x00071c30) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xdb57,	// (0x00071c39) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xdb60,	// (0x00071c42) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x2cf4,	// (0x00066dd6) bg_button_pane_cp015

0xa49f,	// (0x0006e581) bg_button_pane_cp016

0xa4ab,	// (0x0006e58d) bg_button_pane_cp017

0x7eb2,	// (0x0006bf94) bg_popup_sub_pane_cp22

0xdb81,	// (0x00071c63) popup_vitu2_query_window_g1

0x2d2e,	// (0x00066e10) popup_vitu2_query_window_g2

0x0002,

0xf997,	// (0x00073a79) popup_vitu2_query_window_g

0x2d46,	// (0x00066e28) popup_vitu2_query_window_t1_ParamLimits

0x2d46,	// (0x00066e28) popup_vitu2_query_window_t1

0x2d79,	// (0x00066e5b) popup_vitu2_query_window_t2_ParamLimits

0x2d79,	// (0x00066e5b) popup_vitu2_query_window_t2

0x2d8b,	// (0x00066e6d) popup_vitu2_query_window_t3_ParamLimits

0x2d8b,	// (0x00066e6d) popup_vitu2_query_window_t3

0xa4d2,	// (0x0006e5b4) popup_vitu2_query_window_t4_ParamLimits

0xa4d2,	// (0x0006e5b4) popup_vitu2_query_window_t4

0xa4e6,	// (0x0006e5c8) popup_vitu2_query_window_t5_ParamLimits

0xa4e6,	// (0x0006e5c8) popup_vitu2_query_window_t5

0x0006,

0xf99e,	// (0x00073a80) popup_vitu2_query_window_t_ParamLimits

0xf99e,	// (0x00073a80) popup_vitu2_query_window_t

0xda08,	// (0x00071aea) main_cset_text_pane

0x9f01,	// (0x0006dfe3) aid_area_touch_slider_ParamLimits

0x9f1d,	// (0x0006dfff) cset_slider_pane_ParamLimits

0x9f40,	// (0x0006e022) main_cset_slider_pane_g1_ParamLimits

0x9f55,	// (0x0006e037) main_cset_slider_pane_g2_ParamLimits

0xda29,	// (0x00071b0b) main_cset_slider_pane_g3_ParamLimits

0xda29,	// (0x00071b0b) main_cset_slider_pane_g3

0x9f6a,	// (0x0006e04c) main_cset_slider_pane_g4_ParamLimits

0x9f6a,	// (0x0006e04c) main_cset_slider_pane_g4

0x9f79,	// (0x0006e05b) main_cset_slider_pane_g5_ParamLimits

0x9f79,	// (0x0006e05b) main_cset_slider_pane_g5

0x9f87,	// (0x0006e069) main_cset_slider_pane_g6_ParamLimits

0x9f87,	// (0x0006e069) main_cset_slider_pane_g6

0xf8fb,	// (0x000739dd) main_cset_slider_pane_g_ParamLimits

0xda59,	// (0x00071b3b) main_cset_slider_pane_t1_ParamLimits

0xa01b,	// (0x0006e0fd) main_cset_slider_pane_t2_ParamLimits

0xa035,	// (0x0006e117) main_cset_slider_pane_t3_ParamLimits

0xa04f,	// (0x0006e131) main_cset_slider_pane_t4_ParamLimits

0xa06d,	// (0x0006e14f) main_cset_slider_pane_t5_ParamLimits

0xa08b,	// (0x0006e16d) main_cset_slider_pane_t6_ParamLimits

0xa0a2,	// (0x0006e184) main_cset_slider_pane_t7_ParamLimits

0xa0d0,	// (0x0006e1b2) main_cset_slider_pane_t8_ParamLimits

0xa0d0,	// (0x0006e1b2) main_cset_slider_pane_t8

0xa0f8,	// (0x0006e1da) main_cset_slider_pane_t9_ParamLimits

0xa0f8,	// (0x0006e1da) main_cset_slider_pane_t9

0xa120,	// (0x0006e202) main_cset_slider_pane_t10_ParamLimits

0xa120,	// (0x0006e202) main_cset_slider_pane_t10

0xa148,	// (0x0006e22a) main_cset_slider_pane_t11_ParamLimits

0xa148,	// (0x0006e22a) main_cset_slider_pane_t11

0xa172,	// (0x0006e254) main_cset_slider_pane_t12_ParamLimits

0xa172,	// (0x0006e254) main_cset_slider_pane_t12

0xa191,	// (0x0006e273) main_cset_slider_pane_t13_ParamLimits

0xa191,	// (0x0006e273) main_cset_slider_pane_t13

0xf920,	// (0x00073a02) main_cset_slider_pane_t_ParamLimits

0xe359,	// (0x0007243b) bg_popup_sub_pane_cp011

0xdb8d,	// (0x00071c6f) main_cset_text_pane_g1

0xdb95,	// (0x00071c77) main_cset_text_pane_t1

0xdba3,	// (0x00071c85) main_cset_text_pane_t2

0xdbb1,	// (0x00071c93) main_cset_text_pane_t3

0xdbbf,	// (0x00071ca1) main_cset_text_pane_t4

0xdbcd,	// (0x00071caf) main_cset_text_pane_t5

0xdbdb,	// (0x00071cbd) main_cset_text_pane_t6

0xdbe9,	// (0x00071ccb) main_cset_text_pane_t7

0x0006,

0xf9ad,	// (0x00073a8f) main_cset_text_pane_t

0xe359,	// (0x0007243b) main_cam4_burst_pane

0xe359,	// (0x0007243b) main_cam5_pane

0x9e49,	// (0x0006df2b) bg_button_pane_cp019

0x9e52,	// (0x0006df34) bg_button_pane_cp020

0xda35,	// (0x00071b17) main_cset_slider_pane_g7_ParamLimits

0xda35,	// (0x00071b17) main_cset_slider_pane_g7

0xda41,	// (0x00071b23) main_cset_slider_pane_g8_ParamLimits

0xda41,	// (0x00071b23) main_cset_slider_pane_g8

0x9f9b,	// (0x0006e07d) main_cset_slider_pane_g9_ParamLimits

0x9f9b,	// (0x0006e07d) main_cset_slider_pane_g9

0x9fa7,	// (0x0006e089) main_cset_slider_pane_g10_ParamLimits

0x9fa7,	// (0x0006e089) main_cset_slider_pane_g10

0x9fb3,	// (0x0006e095) main_cset_slider_pane_g11_ParamLimits

0x9fb3,	// (0x0006e095) main_cset_slider_pane_g11

0x9fbf,	// (0x0006e0a1) main_cset_slider_pane_g12_ParamLimits

0x9fbf,	// (0x0006e0a1) main_cset_slider_pane_g12

0x9fcb,	// (0x0006e0ad) main_cset_slider_pane_g13_ParamLimits

0x9fcb,	// (0x0006e0ad) main_cset_slider_pane_g13

0x9fd9,	// (0x0006e0bb) main_cset_slider_pane_g14_ParamLimits

0x9fd9,	// (0x0006e0bb) main_cset_slider_pane_g14

0x9fe7,	// (0x0006e0c9) main_cset_slider_pane_g15_ParamLimits

0x9fe7,	// (0x0006e0c9) main_cset_slider_pane_g15

0xda81,	// (0x00071b63) main_cset_slider_pane_t14_ParamLimits

0xda81,	// (0x00071b63) main_cset_slider_pane_t14

0xdaba,	// (0x00071b9c) main_cset_slider_pane_t15_ParamLimits

0xdaba,	// (0x00071b9c) main_cset_slider_pane_t15

0xa4fa,	// (0x0006e5dc) aid_cam4_burst_size_cell_ParamLimits

0xa4fa,	// (0x0006e5dc) aid_cam4_burst_size_cell

0xa516,	// (0x0006e5f8) grid_cam4_burst_pane_ParamLimits

0xa516,	// (0x0006e5f8) grid_cam4_burst_pane

0xa546,	// (0x0006e628) linegrid_cam4_burst_pane_ParamLimits

0xa546,	// (0x0006e628) linegrid_cam4_burst_pane

0xa566,	// (0x0006e648) scroll_pane_cp30_ParamLimits

0xa566,	// (0x0006e648) scroll_pane_cp30

0xa572,	// (0x0006e654) cell_cam4_burst_pane_ParamLimits

0xa572,	// (0x0006e654) cell_cam4_burst_pane

0xdbf7,	// (0x00071cd9) linegrid_cam4_burst_pane_g1_ParamLimits

0xdbf7,	// (0x00071cd9) linegrid_cam4_burst_pane_g1

0xa5ae,	// (0x0006e690) linegrid_cam4_burst_pane_g2_ParamLimits

0xa5ae,	// (0x0006e690) linegrid_cam4_burst_pane_g2

0xdc04,	// (0x00071ce6) linegrid_cam4_burst_pane_g3_ParamLimits

0xdc04,	// (0x00071ce6) linegrid_cam4_burst_pane_g3

0x0002,

0xf9bc,	// (0x00073a9e) linegrid_cam4_burst_pane_g_ParamLimits

0xf9bc,	// (0x00073a9e) linegrid_cam4_burst_pane_g

0xa5bf,	// (0x0006e6a1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa5bf,	// (0x0006e6a1) linegrid_cam4_burst_pane_g3_copy1

0xdc11,	// (0x00071cf3) linegrid_cam4_burst_pane_g4_ParamLimits

0xdc11,	// (0x00071cf3) linegrid_cam4_burst_pane_g4

0xa5d9,	// (0x0006e6bb) linegrid_cam4_burst_pane_g5_ParamLimits

0xa5d9,	// (0x0006e6bb) linegrid_cam4_burst_pane_g5

0xa5ea,	// (0x0006e6cc) linegrid_cam4_burst_pane_g6_ParamLimits

0xa5ea,	// (0x0006e6cc) linegrid_cam4_burst_pane_g6

0xdc1e,	// (0x00071d00) linegrid_cam4_burst_pane_g7_ParamLimits

0xdc1e,	// (0x00071d00) linegrid_cam4_burst_pane_g7

0xa5fb,	// (0x0006e6dd) cell_cam4_burst_pane_g1

0xdc37,	// (0x00071d19) main_cam5_pane_t1_ParamLimits

0xdc37,	// (0x00071d19) main_cam5_pane_t1

0xdc49,	// (0x00071d2b) main_cam5_pane_t2_ParamLimits

0xdc49,	// (0x00071d2b) main_cam5_pane_t2

0xdc5b,	// (0x00071d3d) main_cam5_pane_t3_ParamLimits

0xdc5b,	// (0x00071d3d) main_cam5_pane_t3

0xdc6d,	// (0x00071d4f) main_cam5_pane_t4_ParamLimits

0xdc6d,	// (0x00071d4f) main_cam5_pane_t4

0xdc85,	// (0x00071d67) main_cam5_pane_t5_ParamLimits

0xdc85,	// (0x00071d67) main_cam5_pane_t5

0xdc99,	// (0x00071d7b) main_cam5_pane_t6_ParamLimits

0xdc99,	// (0x00071d7b) main_cam5_pane_t6

0xdcad,	// (0x00071d8f) main_cam5_pane_t7_ParamLimits

0xdcad,	// (0x00071d8f) main_cam5_pane_t7

0xdcbf,	// (0x00071da1) main_cam5_pane_t8_ParamLimits

0xdcbf,	// (0x00071da1) main_cam5_pane_t8

0xdcdb,	// (0x00071dbd) main_cam5_pane_t9_ParamLimits

0xdcdb,	// (0x00071dbd) main_cam5_pane_t9

0xdced,	// (0x00071dcf) main_cam5_pane_t10_ParamLimits

0xdced,	// (0x00071dcf) main_cam5_pane_t10

0xdcff,	// (0x00071de1) main_cam5_pane_t11_ParamLimits

0xdcff,	// (0x00071de1) main_cam5_pane_t11

0xdd11,	// (0x00071df3) main_cam5_pane_t12_ParamLimits

0xdd11,	// (0x00071df3) main_cam5_pane_t12

0xdd26,	// (0x00071e08) main_cam5_pane_t13_ParamLimits

0xdd26,	// (0x00071e08) main_cam5_pane_t13

0x000c,

0xf9c8,	// (0x00073aaa) main_cam5_pane_t_ParamLimits

0xf9c8,	// (0x00073aaa) main_cam5_pane_t

0x39c3,	// (0x00067aa5) popup_scut_keymap_window_ParamLimits

0x39c3,	// (0x00067aa5) popup_scut_keymap_window

0xa60e,	// (0x0006e6f0) aid_size_cell_brow_shortcut

0xec7e,	// (0x00072d60) bg_popup_window_pane_cp010

0xa61a,	// (0x0006e6fc) grid_scut_pane

0xa626,	// (0x0006e708) cell_scut_pane_ParamLimits

0xa626,	// (0x0006e708) cell_scut_pane

0xa63d,	// (0x0006e71f) cell_scut_pane_g1

0xdd43,	// (0x00071e25) cell_scut_pane_t1

0xdd52,	// (0x00071e34) cell_scut_pane_t2

0xa646,	// (0x0006e728) cell_scut_pane_t3

0x0002,

0xf9e3,	// (0x00073ac5) cell_scut_pane_t

0x8760,	// (0x0006c842) main_mup3_pane_g8_ParamLimits

0x8760,	// (0x0006c842) main_mup3_pane_g8

0x9a64,	// (0x0006db46) area_vitu2_query_pane_ParamLimits

0x9a64,	// (0x0006db46) area_vitu2_query_pane

0x2d09,	// (0x00066deb) input_focus_pane_cp08

0xdd61,	// (0x00071e43) area_vitu2_query_pane_g1

0x2e09,	// (0x00066eeb) area_vitu2_query_pane_g2

0x0001,

0xf9ea,	// (0x00073acc) area_vitu2_query_pane_g

0xa654,	// (0x0006e736) area_vitu2_query_pane_t1_ParamLimits

0xa654,	// (0x0006e736) area_vitu2_query_pane_t1

0xa668,	// (0x0006e74a) area_vitu2_query_pane_t2_ParamLimits

0xa668,	// (0x0006e74a) area_vitu2_query_pane_t2

0x2e1a,	// (0x00066efc) area_vitu2_query_pane_t3_ParamLimits

0x2e1a,	// (0x00066efc) area_vitu2_query_pane_t3

0x2e42,	// (0x00066f24) area_vitu2_query_pane_t4_ParamLimits

0x2e42,	// (0x00066f24) area_vitu2_query_pane_t4

0x2e6a,	// (0x00066f4c) area_vitu2_query_pane_t5_ParamLimits

0x2e6a,	// (0x00066f4c) area_vitu2_query_pane_t5

0x2e92,	// (0x00066f74) area_vitu2_query_pane_t6_ParamLimits

0x2e92,	// (0x00066f74) area_vitu2_query_pane_t6

0x0006,

0xf9ef,	// (0x00073ad1) area_vitu2_query_pane_t_ParamLimits

0xf9ef,	// (0x00073ad1) area_vitu2_query_pane_t

0xa49f,	// (0x0006e581) bg_button_pane_cp018

0xa67c,	// (0x0006e75e) bg_button_pane_cp021

0x2ede,	// (0x00066fc0) bg_button_pane_cp022

0x2f01,	// (0x00066fe3) input_focus_pane_cp09

0x5efa,	// (0x00069fdc) aid_size_touch_mv_arrow_left

0x5f25,	// (0x0006a007) aid_size_touch_mv_arrow_right

0x9fff,	// (0x0006e0e1) main_cset_slider_pane_g16_ParamLimits

0x9fff,	// (0x0006e0e1) main_cset_slider_pane_g16

0xa00d,	// (0x0006e0ef) main_cset_slider_pane_g17_ParamLimits

0xa00d,	// (0x0006e0ef) main_cset_slider_pane_g17

0xa5fb,	// (0x0006e6dd) cell_cam4_burst_pane_g1_ParamLimits

0xe359,	// (0x0007243b) compa_mode_pane

0xa215,	// (0x0006e2f7) popup_vtel_slider_window_g3_ParamLimits

0xa215,	// (0x0006e2f7) popup_vtel_slider_window_g3

0xa229,	// (0x0006e30b) popup_vtel_slider_window_g4_ParamLimits

0xa229,	// (0x0006e30b) popup_vtel_slider_window_g4

0xa23d,	// (0x0006e31f) popup_vtel_slider_window_t1_ParamLimits

0xa23d,	// (0x0006e31f) popup_vtel_slider_window_t1

0xe359,	// (0x0007243b) main_cl_pane

0x7f4c,	// (0x0006c02e) popup_imed_adjust2_window_ParamLimits

0x7eb2,	// (0x0006bf94) bg_tb_trans_pane_cp05_ParamLimits

0xd546,	// (0x00071628) popup_imed_adjust2_window_g1_ParamLimits

0xd555,	// (0x00071637) popup_imed_adjust2_window_g2_ParamLimits

0xd555,	// (0x00071637) popup_imed_adjust2_window_g2

0xd561,	// (0x00071643) popup_imed_adjust2_window_g3_ParamLimits

0xd561,	// (0x00071643) popup_imed_adjust2_window_g3

0x0002,

0xf765,	// (0x00073847) popup_imed_adjust2_window_g_ParamLimits

0xf765,	// (0x00073847) popup_imed_adjust2_window_g

0xd56d,	// (0x0007164f) popup_imed_adjust2_window_t1_ParamLimits

0xd585,	// (0x00071667) slider_imed_adjust_pane_ParamLimits

0xd599,	// (0x0007167b) slider_imed_adjust_pane_g1_ParamLimits

0xd5a9,	// (0x0007168b) slider_imed_adjust_pane_g2_ParamLimits

0xd5b9,	// (0x0007169b) slider_imed_adjust_pane_g3_ParamLimits

0xd5ca,	// (0x000716ac) slider_imed_adjust_pane_g4_ParamLimits

0xf76c,	// (0x0007384e) slider_imed_adjust_pane_g_ParamLimits

0x97b5,	// (0x0006d897) aid_touch_area_cam4_ParamLimits

0x97b5,	// (0x0006d897) aid_touch_area_cam4

0x97c5,	// (0x0006d8a7) battery_pane_cp01

0x984c,	// (0x0006d92e) main_camera4_pane_g6_ParamLimits

0x984c,	// (0x0006d92e) main_camera4_pane_g6

0x986a,	// (0x0006d94c) main_camera4_pane_t2_ParamLimits

0x986a,	// (0x0006d94c) main_camera4_pane_t2

0x0001,

0xf86e,	// (0x00073950) main_camera4_pane_t_ParamLimits

0xf86e,	// (0x00073950) main_camera4_pane_t

0x98eb,	// (0x0006d9cd) aid_touch_area_vid4_ParamLimits

0x98eb,	// (0x0006d9cd) aid_touch_area_vid4

0x992b,	// (0x0006da0d) main_video4_pane_g5_ParamLimits

0x992b,	// (0x0006da0d) main_video4_pane_g5

0x994f,	// (0x0006da31) vid4_progress_pane_ParamLimits

0x994f,	// (0x0006da31) vid4_progress_pane

0xda4d,	// (0x00071b2f) main_cset_slider_pane_g18_ParamLimits

0xda4d,	// (0x00071b2f) main_cset_slider_pane_g18

0xdc2b,	// (0x00071d0d) cell_cam4_burst_pane_g2_ParamLimits

0xdc2b,	// (0x00071d0d) cell_cam4_burst_pane_g2

0x0001,

0xf9c3,	// (0x00073aa5) cell_cam4_burst_pane_g_ParamLimits

0xf9c3,	// (0x00073aa5) cell_cam4_burst_pane_g

0xa688,	// (0x0006e76a) bg_cl_pane_ParamLimits

0xa688,	// (0x0006e76a) bg_cl_pane

0xa694,	// (0x0006e776) cl_header_pane_ParamLimits

0xa694,	// (0x0006e776) cl_header_pane

0xa6a0,	// (0x0006e782) cl_listscroll_pane_ParamLimits

0xa6a0,	// (0x0006e782) cl_listscroll_pane

0xdd6d,	// (0x00071e4f) bg_cl_pane_g1

0xdd75,	// (0x00071e57) bg_cl_pane_g2

0xdd7d,	// (0x00071e5f) bg_cl_pane_g3

0xdd85,	// (0x00071e67) bg_cl_pane_g4

0xdd8d,	// (0x00071e6f) bg_cl_pane_g5

0xdd95,	// (0x00071e77) bg_cl_pane_g6

0xdd9d,	// (0x00071e7f) bg_cl_pane_g7

0xdda5,	// (0x00071e87) bg_cl_pane_g8

0xddad,	// (0x00071e8f) bg_cl_pane_g9

0x0008,

0xf9fe,	// (0x00073ae0) bg_cl_pane_g

0xa6ac,	// (0x0006e78e) aid_height_cl_leading_ParamLimits

0xa6ac,	// (0x0006e78e) aid_height_cl_leading

0xa6b8,	// (0x0006e79a) aid_height_cl_text_ParamLimits

0xa6b8,	// (0x0006e79a) aid_height_cl_text

0xe9c9,	// (0x00072aab) bg_cl_header_pane_ParamLimits

0xe9c9,	// (0x00072aab) bg_cl_header_pane

0xa6d0,	// (0x0006e7b2) cl_header_pane_g1_ParamLimits

0xa6d0,	// (0x0006e7b2) cl_header_pane_g1

0xa6dd,	// (0x0006e7bf) cl_header_pane_t1_ParamLimits

0xa6dd,	// (0x0006e7bf) cl_header_pane_t1

0xddb5,	// (0x00071e97) cl_list_pane

0xda20,	// (0x00071b02) hc_scroll_pane_cp01

0xeea5,	// (0x00072f87) bg_cl_header_pane_g1

0xd906,	// (0x000719e8) bg_cl_header_pane_g2

0xeec5,	// (0x00072fa7) bg_cl_header_pane_g3

0xd916,	// (0x000719f8) bg_cl_header_pane_g4

0xd90e,	// (0x000719f0) bg_cl_header_pane_g5

0xdb46,	// (0x00071c28) bg_cl_header_pane_g6

0xd92e,	// (0x00071a10) bg_cl_header_pane_g7

0xd936,	// (0x00071a18) bg_cl_header_pane_g8

0xd926,	// (0x00071a08) bg_cl_header_pane_g9

0x0008,

0xfa11,	// (0x00073af3) bg_cl_header_pane_g

0xa6ef,	// (0x0006e7d1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa6ef,	// (0x0006e7d1) hc_cl_list_double_graphic_heading_pane

0xa703,	// (0x0006e7e5) hc_cl_list_single_graphic_pane_ParamLimits

0xa703,	// (0x0006e7e5) hc_cl_list_single_graphic_pane

0xa71d,	// (0x0006e7ff) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa71d,	// (0x0006e7ff) hc_cl_list_single_graphic_pane_g1

0xa729,	// (0x0006e80b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa729,	// (0x0006e80b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa24,	// (0x00073b06) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa24,	// (0x00073b06) hc_cl_list_single_graphic_pane_g

0xa73d,	// (0x0006e81f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa73d,	// (0x0006e81f) hc_cl_list_single_graphic_pane_t1

0xa71d,	// (0x0006e7ff) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa71d,	// (0x0006e7ff) hc_cl_list_double_graphic_heading_pane_g1

0xa752,	// (0x0006e834) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa752,	// (0x0006e834) hc_cl_list_double_graphic_heading_pane_g2

0xa766,	// (0x0006e848) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa766,	// (0x0006e848) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa29,	// (0x00073b0b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa29,	// (0x00073b0b) hc_cl_list_double_graphic_heading_pane_g

0xa77a,	// (0x0006e85c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa77a,	// (0x0006e85c) hc_cl_list_double_graphic_heading_pane_t1

0xa78f,	// (0x0006e871) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa78f,	// (0x0006e871) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa30,	// (0x00073b12) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa30,	// (0x00073b12) hc_cl_list_double_graphic_heading_pane_t

0xa7ac,	// (0x0006e88e) vid4_progress_pane_g1

0xa7bc,	// (0x0006e89e) vid4_progress_pane_g2

0xa7cc,	// (0x0006e8ae) vid4_progress_pane_g3

0xa7de,	// (0x0006e8c0) vid4_progress_pane_g4

0x0004,

0xfa35,	// (0x00073b17) vid4_progress_pane_g

0xa7f6,	// (0x0006e8d8) vid4_progress_pane_t1

0xa80c,	// (0x0006e8ee) vid4_progress_pane_t2

0x0002,

0xfa40,	// (0x00073b22) vid4_progress_pane_t

0xa837,	// (0x0006e919) wait_bar_pane_cp07

0xce3c,	// (0x00070f1e) blid_firmament_pane_ParamLimits

0xce7f,	// (0x00070f61) popup_blid_sat_info2_window_g1

0xcea3,	// (0x00070f85) popup_blid_sat_info2_window_t3

0xceb1,	// (0x00070f93) popup_blid_sat_info2_window_t4

0xcebf,	// (0x00070fa1) popup_blid_sat_info2_window_t5

0xcecd,	// (0x00070faf) popup_blid_sat_info2_window_t6

0xcedd,	// (0x00070fbf) popup_blid_sat_info2_window_t7

0xceeb,	// (0x00070fcd) popup_blid_sat_info2_window_t8

0xcef9,	// (0x00070fdb) popup_blid_sat_info2_window_t9

0xcf07,	// (0x00070fe9) popup_blid_sat_info2_window_t10

0xcfc8,	// (0x000710aa) aid_firma_cardinal_ParamLimits

0xcfdc,	// (0x000710be) blid_firmament_pane_t1_ParamLimits

0xcff3,	// (0x000710d5) blid_firmament_pane_t2_ParamLimits

0xd00a,	// (0x000710ec) blid_firmament_pane_t3_ParamLimits

0xd021,	// (0x00071103) blid_firmament_pane_t4_ParamLimits

0xf65e,	// (0x00073740) blid_firmament_pane_t_ParamLimits

0xd038,	// (0x0007111a) blid_sat_info_pane_ParamLimits

0xea01,	// (0x00072ae3) main_cam_set_pane_ParamLimits

0x8e2f,	// (0x0006cf11) aid_size_cell_colour_35_ParamLimits

0x8e49,	// (0x0006cf2b) aid_size_cell_colour_112_ParamLimits

0x8e60,	// (0x0006cf42) aid_size_cell_effect_ParamLimits

0xea01,	// (0x00072ae3) bg_tb_trans_pane_cp02_ParamLimits

0xd469,	// (0x0007154b) heading_imed_pane_ParamLimits

0x8e7a,	// (0x0006cf5c) listscroll_imed_pane_ParamLimits

0x72c5,	// (0x0006b3a7) popup_call2_audio_first_window_g5_ParamLimits

0x72c5,	// (0x0006b3a7) popup_call2_audio_first_window_g5

0x94ab,	// (0x0006d58d) aid_size_touch_image3_arrow_left_ParamLimits

0x94ab,	// (0x0006d58d) aid_size_touch_image3_arrow_left

0x94c1,	// (0x0006d5a3) aid_size_touch_image3_arrow_right_ParamLimits

0x94c1,	// (0x0006d5a3) aid_size_touch_image3_arrow_right

0xa821,	// (0x0006e903) vid4_progress_pane_t3

0x8ffc,	// (0x0006d0de) main_hwr_training_symbol_option_pane_ParamLimits

0x8ffc,	// (0x0006d0de) main_hwr_training_symbol_option_pane

0xd762,	// (0x00071844) popup_hwr_training_preview_window_ParamLimits

0xd762,	// (0x00071844) popup_hwr_training_preview_window

0x905d,	// (0x0006d13f) hwr_training_navi_pane_g5_ParamLimits

0x905d,	// (0x0006d13f) hwr_training_navi_pane_g5

0xd8f4,	// (0x000719d6) popup_char_count_window

0xe9c9,	// (0x00072aab) bg_popup_sub_pane_cp20_ParamLimits

0xa330,	// (0x0006e412) list_vitu2_match_list_pane_ParamLimits

0xa33c,	// (0x0006e41e) vitu2_page_scroll_pane_ParamLimits

0xa33c,	// (0x0006e41e) vitu2_page_scroll_pane

0xddc7,	// (0x00071ea9) list_single_hwr_training_symbol_option_pane_ParamLimits

0xddc7,	// (0x00071ea9) list_single_hwr_training_symbol_option_pane

0xddda,	// (0x00071ebc) list_single_hwr_training_symbol_option_pane_g1

0xdde2,	// (0x00071ec4) list_single_hwr_training_symbol_option_pane_t1

0xddf0,	// (0x00071ed2) bg_button_pane_cp023

0xddf9,	// (0x00071edb) bg_button_pane_cp024

0xde2c,	// (0x00071f0e) vitu2_page_scroll_pane_g1

0xde34,	// (0x00071f16) vitu2_page_scroll_pane_g2

0x0001,

0xfa47,	// (0x00073b29) vitu2_page_scroll_pane_g

0xde3c,	// (0x00071f1e) vitu2_page_scroll_pane_t1

0xd067,	// (0x00071149) popup_char_count_window_g1

0xde4b,	// (0x00071f2d) popup_char_count_window_g2

0xde54,	// (0x00071f36) popup_char_count_window_g3

0x0002,

0xfa4c,	// (0x00073b2e) popup_char_count_window_g

0xde5d,	// (0x00071f3f) popup_char_count_window_t1

0xe359,	// (0x0007243b) main_vded2_pane

0xd532,	// (0x00071614) aid_size_cell_imed_line

0xd53c,	// (0x0007161e) grid_imed_line_width_pane

0x99bb,	// (0x0006da9d) vid4_indicators_pane_g4

0xde6b,	// (0x00071f4d) cell_imed_line_width_pane_ParamLimits

0xde6b,	// (0x00071f4d) cell_imed_line_width_pane

0xde7f,	// (0x00071f61) cell_imed_line_width_pane_g1

0xde88,	// (0x00071f6a) cell_imed_line_width_pane_g2

0x0001,

0xfa53,	// (0x00073b35) cell_imed_line_width_pane_g

0xa850,	// (0x0006e932) main_vded2_pane_g1_ParamLimits

0xa850,	// (0x0006e932) main_vded2_pane_g1

0xa85d,	// (0x0006e93f) main_vded2_pane_g2_ParamLimits

0xa85d,	// (0x0006e93f) main_vded2_pane_g2

0x0001,

0xfa58,	// (0x00073b3a) main_vded2_pane_g_ParamLimits

0xfa58,	// (0x00073b3a) main_vded2_pane_g

0xa86b,	// (0x0006e94d) vded2_slider_pane_ParamLimits

0xa86b,	// (0x0006e94d) vded2_slider_pane

0xa878,	// (0x0006e95a) aid_size_touch_vded2_end

0xa882,	// (0x0006e964) aid_size_touch_vded2_playhead

0xde90,	// (0x00071f72) aid_size_touch_vded2_start

0xde98,	// (0x00071f7a) vded2_slider_bg_pane

0xdea1,	// (0x00071f83) vded2_slider_pane_g1

0xdeaa,	// (0x00071f8c) vded2_slider_pane_g2

0xa88a,	// (0x0006e96c) vded2_slider_pane_g3

0x0002,

0xfa5d,	// (0x00073b3f) vded2_slider_pane_g

0xdeb2,	// (0x00071f94) vded2_slider_bg_pane_g1

0xdebb,	// (0x00071f9d) vded2_slider_bg_pane_g2

0xdec4,	// (0x00071fa6) vded2_slider_bg_pane_g3

0x0002,

0xfa64,	// (0x00073b46) vded2_slider_bg_pane_g

0x6589,	// (0x0006a66b) aid_postcard_touch_down_pane_ParamLimits

0x6589,	// (0x0006a66b) aid_postcard_touch_down_pane

0x6599,	// (0x0006a67b) aid_postcard_touch_up_pane_ParamLimits

0x6599,	// (0x0006a67b) aid_postcard_touch_up_pane

0xe359,	// (0x0007243b) main_blid2_pane

0x7edb,	// (0x0006bfbd) popup_blid2_search_window

0xe359,	// (0x0007243b) blid2_gps_pane

0xe359,	// (0x0007243b) blid2_navig_pane

0xe359,	// (0x0007243b) blid2_search_pane

0xe359,	// (0x0007243b) blid2_tripm_pane

0xa893,	// (0x0006e975) blid2_search_pane_g1_ParamLimits

0xa893,	// (0x0006e975) blid2_search_pane_g1

0xa8a3,	// (0x0006e985) blid2_search_pane_t1_ParamLimits

0xa8a3,	// (0x0006e985) blid2_search_pane_t1

0xa8b5,	// (0x0006e997) aid_size_cell_blid2_gps_ParamLimits

0xa8b5,	// (0x0006e997) aid_size_cell_blid2_gps

0xa8c5,	// (0x0006e9a7) blid2_gps_pane_g1_ParamLimits

0xa8c5,	// (0x0006e9a7) blid2_gps_pane_g1

0xa8d1,	// (0x0006e9b3) grid_blid2_satellite_pane_ParamLimits

0xa8d1,	// (0x0006e9b3) grid_blid2_satellite_pane

0xa8e1,	// (0x0006e9c3) blid2_navig_pane_g1_ParamLimits

0xa8e1,	// (0x0006e9c3) blid2_navig_pane_g1

0xa8ed,	// (0x0006e9cf) blid2_navig_pane_t1_ParamLimits

0xa8ed,	// (0x0006e9cf) blid2_navig_pane_t1

0xa8ff,	// (0x0006e9e1) blid2_navig_pane_t2_ParamLimits

0xa8ff,	// (0x0006e9e1) blid2_navig_pane_t2

0x0001,

0xfa6b,	// (0x00073b4d) blid2_navig_pane_t_ParamLimits

0xfa6b,	// (0x00073b4d) blid2_navig_pane_t

0xa911,	// (0x0006e9f3) blid2_navig_ring_pane_ParamLimits

0xa911,	// (0x0006e9f3) blid2_navig_ring_pane

0xa921,	// (0x0006ea03) blid2_speed_pane_ParamLimits

0xa921,	// (0x0006ea03) blid2_speed_pane

0xa92d,	// (0x0006ea0f) blid2_tripm_pane_g1_ParamLimits

0xa92d,	// (0x0006ea0f) blid2_tripm_pane_g1

0xa93d,	// (0x0006ea1f) blid2_tripm_pane_g2_ParamLimits

0xa93d,	// (0x0006ea1f) blid2_tripm_pane_g2

0xa949,	// (0x0006ea2b) blid2_tripm_pane_g3_ParamLimits

0xa949,	// (0x0006ea2b) blid2_tripm_pane_g3

0xa955,	// (0x0006ea37) blid2_tripm_pane_g4_ParamLimits

0xa955,	// (0x0006ea37) blid2_tripm_pane_g4

0xa961,	// (0x0006ea43) blid2_tripm_pane_g5_ParamLimits

0xa961,	// (0x0006ea43) blid2_tripm_pane_g5

0x0005,

0xfa70,	// (0x00073b52) blid2_tripm_pane_g_ParamLimits

0xfa70,	// (0x00073b52) blid2_tripm_pane_g

0xa97d,	// (0x0006ea5f) blid2_tripm_pane_t1_ParamLimits

0xa97d,	// (0x0006ea5f) blid2_tripm_pane_t1

0xa991,	// (0x0006ea73) blid2_tripm_pane_t2_ParamLimits

0xa991,	// (0x0006ea73) blid2_tripm_pane_t2

0xa9a3,	// (0x0006ea85) blid2_tripm_pane_t3_ParamLimits

0xa9a3,	// (0x0006ea85) blid2_tripm_pane_t3

0x0003,

0xfa7d,	// (0x00073b5f) blid2_tripm_pane_t_ParamLimits

0xfa7d,	// (0x00073b5f) blid2_tripm_pane_t

0xa9d5,	// (0x0006eab7) cell_blid2_satellite_pane_ParamLimits

0xa9d5,	// (0x0006eab7) cell_blid2_satellite_pane

0xa9ef,	// (0x0006ead1) cell_blid2_satellite_pane_g1

0xdecd,	// (0x00071faf) cell_blid2_satellite_pane_t1

0xeca0,	// (0x00072d82) blid2_speed_pane_g1

0xdedb,	// (0x00071fbd) blid2_speed_pane_t1

0xdee9,	// (0x00071fcb) blid2_speed_pane_t2

0x0001,

0xfa86,	// (0x00073b68) blid2_speed_pane_t

0xeca0,	// (0x00072d82) blid2_navig_ring_pane_g1

0xa9f8,	// (0x0006eada) blid2_navig_ring_pane_g2

0xaa00,	// (0x0006eae2) blid2_navig_ring_pane_g3

0xaa08,	// (0x0006eaea) blid2_navig_ring_pane_g4

0xaa10,	// (0x0006eaf2) blid2_navig_ring_pane_g5

0x0004,

0xfa8b,	// (0x00073b6d) blid2_navig_ring_pane_g

0xe359,	// (0x0007243b) bg_popup_window_pane_cp011

0xdef7,	// (0x00071fd9) popup_blid2_search_window_g1

0xdeff,	// (0x00071fe1) popup_blid2_search_window_t1

0xdf0d,	// (0x00071fef) popup_blid2_search_window_t2

0x0001,

0xfa96,	// (0x00073b78) popup_blid2_search_window_t

0xedb4,	// (0x00072e96) main_browser_pane_g1

0xeacc,	// (0x00072bae) main_browser_pane_ParamLimits

0xea01,	// (0x00072ae3) bg_button_pane_cp011_ParamLimits

0x9c1c,	// (0x0006dcfe) cell_vitu2_function_pane_g1_ParamLimits

0x7eb2,	// (0x0006bf94) bg_popup_sub_pane_cp22_ParamLimits

0x2d09,	// (0x00066deb) input_focus_pane_cp08_ParamLimits

0xa4b7,	// (0x0006e599) popup_vitu2_query_button_pane_ParamLimits

0xa4b7,	// (0x0006e599) popup_vitu2_query_button_pane

0x2d24,	// (0x00066e06) popup_vitu2_query_input_button_pane

0xdb81,	// (0x00071c63) popup_vitu2_query_window_g1_ParamLimits

0x2d2e,	// (0x00066e10) popup_vitu2_query_window_g2_ParamLimits

0xf997,	// (0x00073a79) popup_vitu2_query_window_g_ParamLimits

0xe359,	// (0x0007243b) bg_button_pane_cp026

0xaa18,	// (0x0006eafa) popup_vitu2_query_input_button_pane_g1

0xe359,	// (0x0007243b) bg_button_pane_cp025

0xdf1b,	// (0x00071ffd) popup_vitu2_query_button_pane_t1

0x8439,	// (0x0006c51b) main_mp3_pane_t6

0x8449,	// (0x0006c52b) popup_slider_window_cp01

0x98a0,	// (0x0006d982) cam4_battery_pane

0x997a,	// (0x0006da5c) cam4_battery_pane_cp02

0xa7a4,	// (0x0006e886) cam4_battery_pane_cp01

0xa7a4,	// (0x0006e886) cam4_battery_pane_cp03

0xeca0,	// (0x00072d82) cam4_battery_pane_g1

0xdf29,	// (0x0007200b) cam4_battery_pane_g2

0x0001,

0xfa9b,	// (0x00073b7d) cam4_battery_pane_g

0xcf15,	// (0x00070ff7) popup_blid_sat_info2_window_t11

0x5efa,	// (0x00069fdc) aid_size_touch_mv_arrow_left_ParamLimits

0x5f25,	// (0x0006a007) aid_size_touch_mv_arrow_right_ParamLimits

0x5f83,	// (0x0006a065) navi_pane_g1_ParamLimits

0x5f8f,	// (0x0006a071) navi_pane_g2_ParamLimits

0x5fbd,	// (0x0006a09f) navi_pane_g3_ParamLimits

0xf35f,	// (0x00073441) navi_pane_g_ParamLimits

0x607b,	// (0x0006a15d) navi_pane_mv_t1_ParamLimits

0x8e86,	// (0x0006cf68) grid_imed_effect_pane_ParamLimits

0x456c,	// (0x0006864e) aid_placing_vt_slider_lsc

0xed03,	// (0x00072de5) aid_placing_vt_slider_prt

0xea01,	// (0x00072ae3) bg_tb_trans_pane_cp01_ParamLimits

0xd1bc,	// (0x0007129e) popup_image_details_window_g1_ParamLimits

0xd1cf,	// (0x000712b1) popup_image_details_window_g2_ParamLimits

0xd1e4,	// (0x000712c6) popup_image_details_window_g3_ParamLimits

0xd1e4,	// (0x000712c6) popup_image_details_window_g3

0xf69e,	// (0x00073780) popup_image_details_window_g_ParamLimits

0xd1f8,	// (0x000712da) popup_image_details_window_t1_ParamLimits

0xd20a,	// (0x000712ec) popup_image_details_window_t2_ParamLimits

0xd223,	// (0x00071305) popup_image_details_window_t3_ParamLimits

0xd237,	// (0x00071319) popup_image_details_window_t4_ParamLimits

0xd252,	// (0x00071334) popup_image_details_window_t5_ParamLimits

0xf6a5,	// (0x00073787) popup_image_details_window_t_ParamLimits

0xa6c4,	// (0x0006e7a6) cl_header_name_pane_ParamLimits

0xa6c4,	// (0x0006e7a6) cl_header_name_pane

0xaa20,	// (0x0006eb02) cl_header_name_pane_t1_ParamLimits

0xaa20,	// (0x0006eb02) cl_header_name_pane_t1

0xaa37,	// (0x0006eb19) cl_header_name_pane_t2_ParamLimits

0xaa37,	// (0x0006eb19) cl_header_name_pane_t2

0xaa61,	// (0x0006eb43) cl_header_name_pane_t3_ParamLimits

0xaa61,	// (0x0006eb43) cl_header_name_pane_t3

0x0002,

0xfaa0,	// (0x00073b82) cl_header_name_pane_t_ParamLimits

0xfaa0,	// (0x00073b82) cl_header_name_pane_t

0x604c,	// (0x0006a12e) navi_pane_mv_g2_ParamLimits

0xd8dc,	// (0x000719be) field_vitu2_entry_pane_g1_ParamLimits

0xd8e8,	// (0x000719ca) field_vitu2_entry_pane_g2_ParamLimits

0xccf1,	// (0x00070dd3) field_vitu2_entry_pane_g3_ParamLimits

0xccf1,	// (0x00070dd3) field_vitu2_entry_pane_g3

0xf8a0,	// (0x00073982) field_vitu2_entry_pane_g_ParamLimits

0x9baa,	// (0x0006dc8c) cell_vitu2_itu_pane_g1_ParamLimits

0x9bc2,	// (0x0006dca4) cell_vitu2_itu_pane_g2_ParamLimits

0x9bc2,	// (0x0006dca4) cell_vitu2_itu_pane_g2

0x0001,

0xf8ac,	// (0x0007398e) cell_vitu2_itu_pane_g_ParamLimits

0xf8ac,	// (0x0007398e) cell_vitu2_itu_pane_g

0xea01,	// (0x00072ae3) bg_vkb2_func_pane_cp05_ParamLimits

0xea01,	// (0x00072ae3) bg_vkb2_func_pane_cp05

0xea01,	// (0x00072ae3) bg_vkb2_func_pane_cp03

0xea01,	// (0x00072ae3) bg_vkb2_func_pane_cp04

0xea01,	// (0x00072ae3) bg_vkb2_func_pane_cp10_ParamLimits

0xea01,	// (0x00072ae3) bg_vkb2_func_pane_cp10

0x2eef,	// (0x00066fd1) bg_vkb2_func_pane_cp08

0xa49f,	// (0x0006e581) bg_vkb2_func_pane_cp06

0xa67c,	// (0x0006e75e) bg_vkb2_func_pane_cp07

0xde02,	// (0x00071ee4) bg_vkb2_func_pane_cp11_ParamLimits

0xde02,	// (0x00071ee4) bg_vkb2_func_pane_cp11

0xde17,	// (0x00071ef9) bg_vkb2_func_pane_cp12_ParamLimits

0xde17,	// (0x00071ef9) bg_vkb2_func_pane_cp12

0xe359,	// (0x0007243b) bg_vkb2_func_pane_cp09

0xd906,	// (0x000719e8) bg_vkb2_func_pane_g1

0xeec5,	// (0x00072fa7) bg_vkb2_func_pane_g2

0xd90e,	// (0x000719f0) bg_vkb2_func_pane_g3

0xd916,	// (0x000719f8) bg_vkb2_func_pane_g4

0xdb46,	// (0x00071c28) bg_vkb2_func_pane_g5

0xd92e,	// (0x00071a10) bg_vkb2_func_pane_g6

0xd936,	// (0x00071a18) bg_vkb2_func_pane_g7

0xd926,	// (0x00071a08) bg_vkb2_func_pane_g8

0xeea5,	// (0x00072f87) bg_vkb2_func_pane_g9

0x0008,

0xfaa7,	// (0x00073b89) bg_vkb2_func_pane_g

0xa96f,	// (0x0006ea51) blid2_tripm_pane_g6_ParamLimits

0xa96f,	// (0x0006ea51) blid2_tripm_pane_g6

0xd820,	// (0x00071902) mp4_progress_pane_g1

0xa9c9,	// (0x0006eaab) blid2_tripm_values_pane_ParamLimits

0xa9c9,	// (0x0006eaab) blid2_tripm_values_pane

0xaa86,	// (0x0006eb68) blid2_tripm_values_pane_t1

0xaa94,	// (0x0006eb76) blid2_tripm_values_pane_t2

0xaaa2,	// (0x0006eb84) blid2_tripm_values_pane_t3

0xaab0,	// (0x0006eb92) blid2_tripm_values_pane_t4

0xaabe,	// (0x0006eba0) blid2_tripm_values_pane_t5

0xaacc,	// (0x0006ebae) blid2_tripm_values_pane_t6

0xaada,	// (0x0006ebbc) blid2_tripm_values_pane_t7

0xaae8,	// (0x0006ebca) blid2_tripm_values_pane_t8

0xaaf6,	// (0x0006ebd8) blid2_tripm_values_pane_t9

0x0008,

0xfaba,	// (0x00073b9c) blid2_tripm_values_pane_t

0x45ac,	// (0x0006868e) call_video_pane_t1_ParamLimits

0x45cd,	// (0x000686af) call_video_pane_t2_ParamLimits

0xf208,	// (0x000732ea) call_video_pane_t_ParamLimits

0x2afe,	// (0x00066be0) msg_header_pane_g1_ParamLimits

0x64b1,	// (0x0006a593) msg_header_pane_g2_ParamLimits

0x64b1,	// (0x0006a593) msg_header_pane_g2

0x0001,

0xf402,	// (0x000734e4) msg_header_pane_g_ParamLimits

0xf402,	// (0x000734e4) msg_header_pane_g

0xeacc,	// (0x00072bae) main_clock2_pane_ParamLimits

0x8c00,	// (0x0006cce2) grid_clock2_toolbar_pane_ParamLimits

0x8c00,	// (0x0006cce2) grid_clock2_toolbar_pane

0x8c00,	// (0x0006cce2) listscroll_clock2_pane_ParamLimits

0x8c00,	// (0x0006cce2) listscroll_clock2_pane

0x8cb0,	// (0x0006cd92) main_clock2_pane_t3_ParamLimits

0x8cb0,	// (0x0006cd92) main_clock2_pane_t3

0x8cc2,	// (0x0006cda4) main_clock2_pane_t4_ParamLimits

0x8cc2,	// (0x0006cda4) main_clock2_pane_t4

0xdf33,	// (0x00072015) cell_clock2_toolbar_pane

0xdf3b,	// (0x0007201d) cell_clock2_toolbar_pane_cp01

0xdf3b,	// (0x0007201d) cell_clock2_toolbar_pane_cp02

0xdf43,	// (0x00072025) cell_clock2_toolbar_pane_cp03

0xdf4b,	// (0x0007202d) list_clock2_pane

0x5cb9,	// (0x00069d9b) scroll_pane_cp10

0xdf53,	// (0x00072035) list_single_clock2_pane_ParamLimits

0xdf53,	// (0x00072035) list_single_clock2_pane

0xec7e,	// (0x00072d60) list_highlight_pane_cp08

0xdf60,	// (0x00072042) list_single_clock2_pane_t1

0xdf6e,	// (0x00072050) list_single_clock2_pane_t2

0x0001,

0xfacd,	// (0x00073baf) list_single_clock2_pane_t

0xe359,	// (0x0007243b) bg_button_pane_cp10

0xdf7c,	// (0x0007205e) cell_clock2_toolbar_pane_g1

0x64dd,	// (0x0006a5bf) aid_main_viewer_pane_g1_ParamLimits

0x64dd,	// (0x0006a5bf) aid_main_viewer_pane_g1

0x64e9,	// (0x0006a5cb) aid_main_viewer_pane_g2_ParamLimits

0x64e9,	// (0x0006a5cb) aid_main_viewer_pane_g2

0x64f5,	// (0x0006a5d7) aid_main_viewer_pane_g3_ParamLimits

0x64f5,	// (0x0006a5d7) aid_main_viewer_pane_g3

0x6506,	// (0x0006a5e8) aid_main_viewer_pane_g4_ParamLimits

0x6506,	// (0x0006a5e8) aid_main_viewer_pane_g4

0x0003,

0xf413,	// (0x000734f5) aid_main_viewer_pane_g_ParamLimits

0xf413,	// (0x000734f5) aid_main_viewer_pane_g

0x7e99,	// (0x0006bf7b) main_calc_pane_ParamLimits

0x7ec0,	// (0x0006bfa2) main_dialer2_pane_ParamLimits

0xe359,	// (0x0007243b) main_cam6_pane

0xe359,	// (0x0007243b) main_vid6_pane

0x8c0c,	// (0x0006ccee) listscroll_gen_pane_cp06_ParamLimits

0x8c0c,	// (0x0006ccee) listscroll_gen_pane_cp06

0x8cd4,	// (0x0006cdb6) main_clock2_pane_t5_ParamLimits

0x8cd4,	// (0x0006cdb6) main_clock2_pane_t5

0x8d21,	// (0x0006ce03) aid_call2_pane_cp10_ParamLimits

0x8d33,	// (0x0006ce15) aid_call_pane_cp10_ParamLimits

0x5e85,	// (0x00069f67) popup_clock_analogue_window_cp10_g1_ParamLimits

0x5e85,	// (0x00069f67) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8d45,	// (0x0006ce27) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8d45,	// (0x0006ce27) popup_clock_analogue_window_cp10_g4_ParamLimits

0x5e85,	// (0x00069f67) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf75a,	// (0x0007383c) popup_clock_analogue_window_cp10_g_ParamLimits

0x8d5b,	// (0x0006ce3d) popup_clock_analogue_window_cp10_t1_ParamLimits

0x9458,	// (0x0006d53a) cell_dialer2_keypad_pane_g2_ParamLimits

0x9458,	// (0x0006d53a) cell_dialer2_keypad_pane_g2

0x0001,

0xf83f,	// (0x00073921) cell_dialer2_keypad_pane_g_ParamLimits

0xf83f,	// (0x00073921) cell_dialer2_keypad_pane_g

0x9474,	// (0x0006d556) cell_dialer2_keypad_pane_t1

0x9eee,	// (0x0006dfd0) main_cset_text2_pane_ParamLimits

0x9eee,	// (0x0006dfd0) main_cset_text2_pane

0xdd61,	// (0x00071e43) area_vitu2_query_pane_g1_ParamLimits

0x2e09,	// (0x00066eeb) area_vitu2_query_pane_g2_ParamLimits

0xf9ea,	// (0x00073acc) area_vitu2_query_pane_g_ParamLimits

0x2eba,	// (0x00066f9c) area_vitu2_query_pane_t7_ParamLimits

0x2eba,	// (0x00066f9c) area_vitu2_query_pane_t7

0xa49f,	// (0x0006e581) bg_button_pane_cp018_ParamLimits

0xa67c,	// (0x0006e75e) bg_button_pane_cp021_ParamLimits

0x2ede,	// (0x00066fc0) bg_button_pane_cp022_ParamLimits

0x2eef,	// (0x00066fd1) bg_vkb2_func_pane_cp08_ParamLimits

0xa49f,	// (0x0006e581) bg_vkb2_func_pane_cp06_ParamLimits

0xa67c,	// (0x0006e75e) bg_vkb2_func_pane_cp07_ParamLimits

0x2f01,	// (0x00066fe3) input_focus_pane_cp09_ParamLimits

0xab04,	// (0x0006ebe6) cam6_autofocus_pane_ParamLimits

0xab04,	// (0x0006ebe6) cam6_autofocus_pane

0xab26,	// (0x0006ec08) cam6_image_uncrop_pane_ParamLimits

0xab26,	// (0x0006ec08) cam6_image_uncrop_pane

0xab53,	// (0x0006ec35) cam6_indi_pane_ParamLimits

0xab53,	// (0x0006ec35) cam6_indi_pane

0xab6d,	// (0x0006ec4f) cam6_mode_pane_ParamLimits

0xab6d,	// (0x0006ec4f) cam6_mode_pane

0xab81,	// (0x0006ec63) cam6_timer_pane_ParamLimits

0xab81,	// (0x0006ec63) cam6_timer_pane

0xab92,	// (0x0006ec74) cam6_zoom_pane_ParamLimits

0xab92,	// (0x0006ec74) cam6_zoom_pane

0xabaa,	// (0x0006ec8c) cam6_mode_pane_g1_ParamLimits

0xabaa,	// (0x0006ec8c) cam6_mode_pane_g1

0xabb6,	// (0x0006ec98) cam6_mode_pane_g2_ParamLimits

0xabb6,	// (0x0006ec98) cam6_mode_pane_g2

0xabc2,	// (0x0006eca4) cam6_mode_pane_g3_ParamLimits

0xabc2,	// (0x0006eca4) cam6_mode_pane_g3

0xabce,	// (0x0006ecb0) cam6_mode_pane_g4_ParamLimits

0xabce,	// (0x0006ecb0) cam6_mode_pane_g4

0x0003,

0xfad2,	// (0x00073bb4) cam6_mode_pane_g_ParamLimits

0xfad2,	// (0x00073bb4) cam6_mode_pane_g

0xd86d,	// (0x0007194f) bg_tb_trans_pane_cp08_ParamLimits

0xd86d,	// (0x0007194f) bg_tb_trans_pane_cp08

0xdf84,	// (0x00072066) cam6_battery_pane_ParamLimits

0xdf84,	// (0x00072066) cam6_battery_pane

0xdf9a,	// (0x0007207c) cam6_indi_pane_g1_ParamLimits

0xdf9a,	// (0x0007207c) cam6_indi_pane_g1

0xdfac,	// (0x0007208e) cam6_indi_pane_g2_ParamLimits

0xdfac,	// (0x0007208e) cam6_indi_pane_g2

0xdfbe,	// (0x000720a0) cam6_indi_pane_g3_ParamLimits

0xdfbe,	// (0x000720a0) cam6_indi_pane_g3

0x0002,

0xfadb,	// (0x00073bbd) cam6_indi_pane_g_ParamLimits

0xfadb,	// (0x00073bbd) cam6_indi_pane_g

0xdfd0,	// (0x000720b2) cam6_indi_pane_t1_ParamLimits

0xdfd0,	// (0x000720b2) cam6_indi_pane_t1

0x99ee,	// (0x0006dad0) cam6_autofocus_pane_g1

0x99f6,	// (0x0006dad8) cam6_autofocus_pane_g2

0x99fe,	// (0x0006dae0) cam6_autofocus_pane_g3

0x9a06,	// (0x0006dae8) cam6_autofocus_pane_g4

0x0003,

0xfae2,	// (0x00073bc4) cam6_autofocus_pane_g

0xdff6,	// (0x000720d8) cam6_timer_pane_g1

0xdffe,	// (0x000720e0) cam6_timer_pane_t1

0xe00c,	// (0x000720ee) cam6_zoom_cont_pane

0xe014,	// (0x000720f6) cam6_zoom_pane_g1

0xe01c,	// (0x000720fe) cam6_zoom_pane_g2

0xabda,	// (0x0006ecbc) cam6_zoom_pane_g3

0x0002,

0xfaeb,	// (0x00073bcd) cam6_zoom_pane_g

0xeca0,	// (0x00072d82) cam6_battery_pane_g1

0xeca0,	// (0x00072d82) cam6_battery_pane_g2

0x0001,

0xf3c3,	// (0x000734a5) cam6_battery_pane_g

0xe024,	// (0x00072106) cam6_zoom_cont_pane_g1

0xe02d,	// (0x0007210f) cam6_zoom_cont_pane_g2

0xe036,	// (0x00072118) cam6_zoom_cont_pane_g3

0x0002,

0xfaf2,	// (0x00073bd4) cam6_zoom_cont_pane_g

0xabf7,	// (0x0006ecd9) cam6_mode_pane_cp_ParamLimits

0xabf7,	// (0x0006ecd9) cam6_mode_pane_cp

0xab92,	// (0x0006ec74) cam6_zoom_pane_cp_ParamLimits

0xab92,	// (0x0006ec74) cam6_zoom_pane_cp

0xac0b,	// (0x0006eced) vid6_image_uncrop_cif_pane_ParamLimits

0xac0b,	// (0x0006eced) vid6_image_uncrop_cif_pane

0xac37,	// (0x0006ed19) vid6_image_uncrop_nhd_pane_ParamLimits

0xac37,	// (0x0006ed19) vid6_image_uncrop_nhd_pane

0xab26,	// (0x0006ec08) vid6_image_uncrop_vga_pane_ParamLimits

0xab26,	// (0x0006ec08) vid6_image_uncrop_vga_pane

0xac54,	// (0x0006ed36) vid6_image_uncrop_wvga_pane_ParamLimits

0xac54,	// (0x0006ed36) vid6_image_uncrop_wvga_pane

0xac71,	// (0x0006ed53) vid6_indi_pane_ParamLimits

0xac71,	// (0x0006ed53) vid6_indi_pane

0xd86d,	// (0x0007194f) bg_tb_trans_pane_cp09_ParamLimits

0xd86d,	// (0x0007194f) bg_tb_trans_pane_cp09

0xe04e,	// (0x00072130) cam6_battery_pane_cp_ParamLimits

0xe04e,	// (0x00072130) cam6_battery_pane_cp

0xe05a,	// (0x0007213c) vid6_indi_pane_g1_ParamLimits

0xe05a,	// (0x0007213c) vid6_indi_pane_g1

0xe06c,	// (0x0007214e) vid6_indi_pane_g2_ParamLimits

0xe06c,	// (0x0007214e) vid6_indi_pane_g2

0xe07e,	// (0x00072160) vid6_indi_pane_g3_ParamLimits

0xe07e,	// (0x00072160) vid6_indi_pane_g3

0xe093,	// (0x00072175) vid6_indi_pane_g4_ParamLimits

0xe093,	// (0x00072175) vid6_indi_pane_g4

0xe0a8,	// (0x0007218a) vid6_indi_pane_g5_ParamLimits

0xe0a8,	// (0x0007218a) vid6_indi_pane_g5

0x0004,

0xfaf9,	// (0x00073bdb) vid6_indi_pane_g_ParamLimits

0xfaf9,	// (0x00073bdb) vid6_indi_pane_g

0xe0c2,	// (0x000721a4) vid6_indi_pane_t1_ParamLimits

0xe0c2,	// (0x000721a4) vid6_indi_pane_t1

0xe0d8,	// (0x000721ba) vid6_indi_pane_t2_ParamLimits

0xe0d8,	// (0x000721ba) vid6_indi_pane_t2

0xe100,	// (0x000721e2) vid6_indi_pane_t3_ParamLimits

0xe100,	// (0x000721e2) vid6_indi_pane_t3

0xe128,	// (0x0007220a) vid6_indi_pane_t4_ParamLimits

0xe128,	// (0x0007220a) vid6_indi_pane_t4

0x0003,

0xfb04,	// (0x00073be6) vid6_indi_pane_t_ParamLimits

0xfb04,	// (0x00073be6) vid6_indi_pane_t

0xe14c,	// (0x0007222e) wait_bar_pane_cp08

0xac94,	// (0x0006ed76) main_cset_text2_pane_t1_ParamLimits

0xac94,	// (0x0006ed76) main_cset_text2_pane_t1

0xabe2,	// (0x0006ecc4) listscroll_gen_pane_cp06_t1_ParamLimits

0xabe2,	// (0x0006ecc4) listscroll_gen_pane_cp06_t1

0xe359,	// (0x0007243b) main_cam6_set_pane

0xea5a,	// (0x00072b3c) bg_tb_trans_pane_cp06_ParamLimits

0x98a8,	// (0x0006d98a) cam4_indicators_pane_g1_ParamLimits

0x98b9,	// (0x0006d99b) cam4_indicators_pane_g2_ParamLimits

0xf87c,	// (0x0007395e) cam4_indicators_pane_g_ParamLimits

0x98d1,	// (0x0006d9b3) cam4_indicators_pane_t1_ParamLimits

0xea01,	// (0x00072ae3) bg_tb_trans_pane_cp07_ParamLimits

0x9982,	// (0x0006da64) vid4_indicators_pane_g1_ParamLimits

0x9996,	// (0x0006da78) vid4_indicators_pane_g2_ParamLimits

0x99aa,	// (0x0006da8c) vid4_indicators_pane_g3_ParamLimits

0x99bb,	// (0x0006da9d) vid4_indicators_pane_g4_ParamLimits

0xf88e,	// (0x00073970) vid4_indicators_pane_g_ParamLimits

0x99d7,	// (0x0006dab9) vid4_indicators_pane_t1_ParamLimits

0xa7ac,	// (0x0006e88e) vid4_progress_pane_g1_ParamLimits

0xa7bc,	// (0x0006e89e) vid4_progress_pane_g2_ParamLimits

0xa7cc,	// (0x0006e8ae) vid4_progress_pane_g3_ParamLimits

0xa7de,	// (0x0006e8c0) vid4_progress_pane_g4_ParamLimits

0xfa35,	// (0x00073b17) vid4_progress_pane_g_ParamLimits

0xa7f6,	// (0x0006e8d8) vid4_progress_pane_t1_ParamLimits

0xa80c,	// (0x0006e8ee) vid4_progress_pane_t2_ParamLimits

0xa821,	// (0x0006e903) vid4_progress_pane_t3_ParamLimits

0xfa40,	// (0x00073b22) vid4_progress_pane_t_ParamLimits

0xa837,	// (0x0006e919) wait_bar_pane_cp07_ParamLimits

0xaccb,	// (0x0006edad) main_cam6_set_pane_g2_ParamLimits

0xaccb,	// (0x0006edad) main_cam6_set_pane_g2

0xacd7,	// (0x0006edb9) main_cset6_listscroll_pane_ParamLimits

0xacd7,	// (0x0006edb9) main_cset6_listscroll_pane

0xad02,	// (0x0006ede4) main_cset6_slider_pane_ParamLimits

0xad02,	// (0x0006ede4) main_cset6_slider_pane

0xad0e,	// (0x0006edf0) main_cset6_text2_pane_ParamLimits

0xad0e,	// (0x0006edf0) main_cset6_text2_pane

0xe15b,	// (0x0007223d) main_cset6_text_pane

0xe163,	// (0x00072245) main_cset_list_pane_copy1_ParamLimits

0xe163,	// (0x00072245) main_cset_list_pane_copy1

0xe173,	// (0x00072255) scroll_pane_cp028_copy1

0xad21,	// (0x0006ee03) cset_list_set_pane_copy1

0xad37,	// (0x0006ee19) aid_position_infowindow_above_copy1

0xad3f,	// (0x0006ee21) aid_position_infowindow_below_copy1

0xad47,	// (0x0006ee29) cset_list_set_pane_g1_copy1

0x2f36,	// (0x00067018) cset_list_set_pane_g3_copy1_ParamLimits

0x2f36,	// (0x00067018) cset_list_set_pane_g3_copy1

0x2f45,	// (0x00067027) cset_list_set_pane_t1_copy1_ParamLimits

0x2f45,	// (0x00067027) cset_list_set_pane_t1_copy1

0xea01,	// (0x00072ae3) list_highlight_pane_cp021_copy1_ParamLimits

0xea01,	// (0x00072ae3) list_highlight_pane_cp021_copy1

0xe17c,	// (0x0007225e) cset6_slider_pane_ParamLimits

0xe17c,	// (0x0007225e) cset6_slider_pane

0xe1a8,	// (0x0007228a) main_cset6_slider_pane_g1_ParamLimits

0xe1a8,	// (0x0007228a) main_cset6_slider_pane_g1

0xad4f,	// (0x0006ee31) main_cset6_slider_pane_g2_ParamLimits

0xad4f,	// (0x0006ee31) main_cset6_slider_pane_g2

0xe1d0,	// (0x000722b2) main_cset6_slider_pane_g3_ParamLimits

0xe1d0,	// (0x000722b2) main_cset6_slider_pane_g3

0xad77,	// (0x0006ee59) main_cset6_slider_pane_g4_ParamLimits

0xad77,	// (0x0006ee59) main_cset6_slider_pane_g4

0xad83,	// (0x0006ee65) main_cset6_slider_pane_g5_ParamLimits

0xad83,	// (0x0006ee65) main_cset6_slider_pane_g5

0xda35,	// (0x00071b17) main_cset6_slider_pane_g7_ParamLimits

0xda35,	// (0x00071b17) main_cset6_slider_pane_g7

0xda41,	// (0x00071b23) main_cset6_slider_pane_g8_ParamLimits

0xda41,	// (0x00071b23) main_cset6_slider_pane_g8

0xad91,	// (0x0006ee73) main_cset6_slider_pane_g9_ParamLimits

0xad91,	// (0x0006ee73) main_cset6_slider_pane_g9

0xad9d,	// (0x0006ee7f) main_cset6_slider_pane_g10_ParamLimits

0xad9d,	// (0x0006ee7f) main_cset6_slider_pane_g10

0xada9,	// (0x0006ee8b) main_cset6_slider_pane_g11_ParamLimits

0xada9,	// (0x0006ee8b) main_cset6_slider_pane_g11

0xadb5,	// (0x0006ee97) main_cset6_slider_pane_g12_ParamLimits

0xadb5,	// (0x0006ee97) main_cset6_slider_pane_g12

0xe1dc,	// (0x000722be) main_cset6_slider_pane_g13_ParamLimits

0xe1dc,	// (0x000722be) main_cset6_slider_pane_g13

0xe1e8,	// (0x000722ca) main_cset6_slider_pane_g14_ParamLimits

0xe1e8,	// (0x000722ca) main_cset6_slider_pane_g14

0xadc1,	// (0x0006eea3) main_cset6_slider_pane_g15_ParamLimits

0xadc1,	// (0x0006eea3) main_cset6_slider_pane_g15

0xadd9,	// (0x0006eebb) main_cset6_slider_pane_g16_ParamLimits

0xadd9,	// (0x0006eebb) main_cset6_slider_pane_g16

0xade7,	// (0x0006eec9) main_cset6_slider_pane_g17_ParamLimits

0xade7,	// (0x0006eec9) main_cset6_slider_pane_g17

0x0011,

0xfb0d,	// (0x00073bef) main_cset6_slider_pane_g_ParamLimits

0xfb0d,	// (0x00073bef) main_cset6_slider_pane_g

0xe200,	// (0x000722e2) main_cset6_slider_pane_t1_ParamLimits

0xe200,	// (0x000722e2) main_cset6_slider_pane_t1

0xae01,	// (0x0006eee3) main_cset6_slider_pane_t2_ParamLimits

0xae01,	// (0x0006eee3) main_cset6_slider_pane_t2

0xae2c,	// (0x0006ef0e) main_cset6_slider_pane_t3_ParamLimits

0xae2c,	// (0x0006ef0e) main_cset6_slider_pane_t3

0xae57,	// (0x0006ef39) main_cset6_slider_pane_t4_ParamLimits

0xae57,	// (0x0006ef39) main_cset6_slider_pane_t4

0xae82,	// (0x0006ef64) main_cset6_slider_pane_t5_ParamLimits

0xae82,	// (0x0006ef64) main_cset6_slider_pane_t5

0xe241,	// (0x00072323) main_cset6_slider_pane_t7_ParamLimits

0xe241,	// (0x00072323) main_cset6_slider_pane_t7

0xaeaf,	// (0x0006ef91) main_cset6_slider_pane_t8_ParamLimits

0xaeaf,	// (0x0006ef91) main_cset6_slider_pane_t8

0xaed3,	// (0x0006efb5) main_cset6_slider_pane_t9_ParamLimits

0xaed3,	// (0x0006efb5) main_cset6_slider_pane_t9

0xaef7,	// (0x0006efd9) main_cset6_slider_pane_t10_ParamLimits

0xaef7,	// (0x0006efd9) main_cset6_slider_pane_t10

0xaf1b,	// (0x0006effd) main_cset6_slider_pane_t11_ParamLimits

0xaf1b,	// (0x0006effd) main_cset6_slider_pane_t11

0xe277,	// (0x00072359) main_cset6_slider_pane_t14_ParamLimits

0xe277,	// (0x00072359) main_cset6_slider_pane_t14

0xe2b0,	// (0x00072392) main_cset6_slider_pane_t15_ParamLimits

0xe2b0,	// (0x00072392) main_cset6_slider_pane_t15

0x000b,

0xfb32,	// (0x00073c14) main_cset6_slider_pane_t_ParamLimits

0xfb32,	// (0x00073c14) main_cset6_slider_pane_t

0xd737,	// (0x00071819) cset_slider_pane_g1_copy1

0xdb03,	// (0x00071be5) cset_slider_pane_g2_copy1

0xdb0c,	// (0x00071bee) cset_slider_pane_g3_copy1

0xe359,	// (0x0007243b) bg_popup_sub_pane_cp011_copy1

0x0556,	// (0x00064638) main_cset_text_pane_g1_copy1

0xdb95,	// (0x00071c77) main_cset_text_pane_t1_copy1

0xdba3,	// (0x00071c85) main_cset_text_pane_t2_copy1

0xdbb1,	// (0x00071c93) main_cset_text_pane_t3_copy1

0xdbbf,	// (0x00071ca1) main_cset_text_pane_t4_copy1

0xdbcd,	// (0x00071caf) main_cset_text_pane_t5_copy1

0x055e,	// (0x00064640) main_cset_text_pane_t6_copy1

0x056c,	// (0x0006464e) main_cset_text_pane_t7_copy1

0xaf41,	// (0x0006f023) main_cset_text2_pane_t1_copy1

0xea01,	// (0x00072ae3) main_ncimui_pane

0x7f11,	// (0x0006bff3) popup_query_ncimui_window_ParamLimits

0x7f11,	// (0x0006bff3) popup_query_ncimui_window

0x85a3,	// (0x0006c685) field_cale_ev2_pane_g4_ParamLimits

0x85a3,	// (0x0006c685) field_cale_ev2_pane_g4

0x9138,	// (0x0006d21a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9138,	// (0x0006d21a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf816,	// (0x000738f8) cell_video_dialer_keypad_pane_g_ParamLimits

0xf816,	// (0x000738f8) cell_video_dialer_keypad_pane_g

0x9150,	// (0x0006d232) cell_video_dialer_keypad_pane_t1

0xe359,	// (0x0007243b) bg_popup_window_pane_cp012

0x7c5d,	// (0x0006bd3f) heading_pane_cp06

0x0598,	// (0x0006467a) ncim_query_content_pane

0xe359,	// (0x0007243b) bg_popup_heading_pane_cp01

0x05a0,	// (0x00064682) ncim_heading_pane_t1

0x05ae,	// (0x00064690) ncim_indicator_popup_pane

0x05c0,	// (0x000646a2) ncim_query_button_pane

0x05d4,	// (0x000646b6) ncim_query_content_pane_t1

0x05e6,	// (0x000646c8) ncim_query_content_pane_t2

0x0005,

0xfb76,	// (0x00073c58) ncim_query_content_pane_t

0x0620,	// (0x00064702) ncim_query_list_pane

0x0632,	// (0x00064714) ncim_query_popup_pane

0x05ae,	// (0x00064690) ncim_indicator_popup_pane_ParamLimits

0xb095,	// (0x0006f177) ncim_query_content_pane_g1_ParamLimits

0xb095,	// (0x0006f177) ncim_query_content_pane_g1

0x05d4,	// (0x000646b6) ncim_query_content_pane_t1_ParamLimits

0x05e6,	// (0x000646c8) ncim_query_content_pane_t2_ParamLimits

0xb0a1,	// (0x0006f183) ncim_query_content_pane_t3_ParamLimits

0xb0a1,	// (0x0006f183) ncim_query_content_pane_t3

0xb0be,	// (0x0006f1a0) ncim_query_content_pane_t4_ParamLimits

0xb0be,	// (0x0006f1a0) ncim_query_content_pane_t4

0xb0db,	// (0x0006f1bd) ncim_query_content_pane_t5_ParamLimits

0xb0db,	// (0x0006f1bd) ncim_query_content_pane_t5

0x05f8,	// (0x000646da) ncim_query_content_pane_t6_ParamLimits

0x05f8,	// (0x000646da) ncim_query_content_pane_t6

0xfb76,	// (0x00073c58) ncim_query_content_pane_t_ParamLimits

0x0620,	// (0x00064702) ncim_query_list_pane_ParamLimits

0x0632,	// (0x00064714) ncim_query_popup_pane_ParamLimits

0x0646,	// (0x00064728) wait_bar_pane_cp04

0xe359,	// (0x0007243b) input_focus_pane_cp011

0x064e,	// (0x00064730) ncim_query_popup_pane_t1

0x065c,	// (0x0006473e) ncim_list_query_list_pane_ParamLimits

0x065c,	// (0x0006473e) ncim_list_query_list_pane

0xe359,	// (0x0007243b) bg_button_pane_cp027

0x0669,	// (0x0006474b) ncim_query_button_pane_g1

0xe359,	// (0x0007243b) list_highlight_pane_cp012

0x0673,	// (0x00064755) ncim_list_query_list_pane_g1

0x067b,	// (0x0006475d) ncim_list_query_list_pane_t1

0x98c5,	// (0x0006d9a7) cam4_indicators_pane_g3_ParamLimits

0x98c5,	// (0x0006d9a7) cam4_indicators_pane_g3

0x99c7,	// (0x0006daa9) vid4_indicators_pane_g5_ParamLimits

0x99c7,	// (0x0006daa9) vid4_indicators_pane_g5

0xa7ea,	// (0x0006e8cc) vid4_progress_pane_g5_ParamLimits

0xa7ea,	// (0x0006e8cc) vid4_progress_pane_g5

0xaf81,	// (0x0006f063) main_ncimui_pane_g1

0xafe9,	// (0x0006f0cb) ncimui_group_query_pane_ParamLimits

0xafe9,	// (0x0006f0cb) ncimui_group_query_pane

0xb031,	// (0x0006f113) ncimui_list_pane_ParamLimits

0xb031,	// (0x0006f113) ncimui_list_pane

0xb058,	// (0x0006f13a) ncimui_text_pane_ParamLimits

0xb058,	// (0x0006f13a) ncimui_text_pane

0xb0f8,	// (0x0006f1da) ncimui_text_pane_t1_ParamLimits

0xb0f8,	// (0x0006f1da) ncimui_text_pane_t1

0x0689,	// (0x0006476b) ncimui_list_single_graphic_pane_ParamLimits

0x0689,	// (0x0006476b) ncimui_list_single_graphic_pane

0xb117,	// (0x0006f1f9) ncimui_query_pane_ParamLimits

0xb117,	// (0x0006f1f9) ncimui_query_pane

0xe359,	// (0x0007243b) list_highlight_pane_cp013

0x0699,	// (0x0006477b) ncim_list_query_list_pane_t1_copy1

0x06a7,	// (0x00064789) ncim_list_single_graphic_pane_g1

0xb12a,	// (0x0006f20c) ncim_query_button_pane_cp01

0xb136,	// (0x0006f218) ncim_query_entry_pane_ParamLimits

0xb136,	// (0x0006f218) ncim_query_entry_pane

0xb149,	// (0x0006f22b) ncimui_query_pane_g1

0xb155,	// (0x0006f237) ncimui_query_pane_t1_ParamLimits

0xb155,	// (0x0006f237) ncimui_query_pane_t1

0xea01,	// (0x00072ae3) input_focus_pane_cp012

0x06af,	// (0x00064791) ncim_query_entry_pane_t1

0xeacc,	// (0x00072bae) main_im_pane_ParamLimits

0xea01,	// (0x00072ae3) main_mobtv_pane_ParamLimits

0xea01,	// (0x00072ae3) main_mobtv_pane

0xadf5,	// (0x0006eed7) main_cset6_slider_pane_g18_ParamLimits

0xadf5,	// (0x0006eed7) main_cset6_slider_pane_g18

0xe1f4,	// (0x000722d6) main_cset6_slider_pane_g19_ParamLimits

0xe1f4,	// (0x000722d6) main_cset6_slider_pane_g19

0xccf1,	// (0x00070dd3) bg_main_mobtv_pane_ParamLimits

0xccf1,	// (0x00070dd3) bg_main_mobtv_pane

0xb16e,	// (0x0006f250) main_mobtv_info_pane

0xb179,	// (0x0006f25b) main_mobtv_loading_pane_ParamLimits

0xb179,	// (0x0006f25b) main_mobtv_loading_pane

0x06c1,	// (0x000647a3) main_mobtv_pg_channel_list_pane

0x06cb,	// (0x000647ad) main_mobtv_pg_hdr_pane

0xb186,	// (0x0006f268) main_mobtv_programe_curr_pane_ParamLimits

0xb186,	// (0x0006f268) main_mobtv_programe_curr_pane

0xb193,	// (0x0006f275) main_mobtv_programe_next_pane_ParamLimits

0xb193,	// (0x0006f275) main_mobtv_programe_next_pane

0x06d4,	// (0x000647b6) popup_mobtv_noti_window

0xeca0,	// (0x00072d82) main_tv_pg_hdr_pane_g1

0x06dc,	// (0x000647be) main_tv_pg_hdr_pane_g2

0x06e4,	// (0x000647c6) main_tv_pg_hdr_pane_g3

0x06ec,	// (0x000647ce) main_tv_pg_hdr_pane_g4

0x06f4,	// (0x000647d6) main_tv_pg_hdr_pane_g5

0x06fe,	// (0x000647e0) main_tv_pg_hdr_pane_g6

0x0708,	// (0x000647ea) main_tv_pg_hdr_pane_g7

0x0712,	// (0x000647f4) main_tv_pg_hdr_pane_g8

0x071c,	// (0x000647fe) main_tv_pg_hdr_pane_g9

0x0726,	// (0x00064808) main_tv_pg_hdr_pane_g10

0x0730,	// (0x00064812) main_tv_pg_hdr_pane_g11

0x000a,

0xfb83,	// (0x00073c65) main_tv_pg_hdr_pane_g

0x073a,	// (0x0006481c) main_tv_pg_hdr_pane_t1

0x0748,	// (0x0006482a) main_tv_pg_hdr_pane_t2

0x0756,	// (0x00064838) main_tv_pg_hdr_pane_t3

0x0766,	// (0x00064848) main_tv_pg_hdr_pane_t4

0x0776,	// (0x00064858) main_tv_pg_hdr_pane_t5

0x0004,

0xfb9a,	// (0x00073c7c) main_tv_pg_hdr_pane_t

0x0786,	// (0x00064868) single_mobtv_pg_channel_pane_ParamLimits

0x0786,	// (0x00064868) single_mobtv_pg_channel_pane

0x0798,	// (0x0006487a) single_mobtv_pg_channel_table_pane

0xefc8,	// (0x000730aa) single_mobtv_pg_channel_thumb_pane

0x07a1,	// (0x00064883) single_tv_pg_channel_pane_g1

0x07aa,	// (0x0006488c) single_tv_pg_channel_pane_g2

0x0001,

0xfba5,	// (0x00073c87) single_tv_pg_channel_pane_g

0xea5a,	// (0x00072b3c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xea5a,	// (0x00072b3c) bg_single_mobtv_pg_channel_thumb_pane

0x07b3,	// (0x00064895) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x07b3,	// (0x00064895) single_mobtv_pg_channel_thumb_pane_g1

0x07c1,	// (0x000648a3) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x07c1,	// (0x000648a3) single_mobtv_pg_channel_thumb_pane_g2

0x07cd,	// (0x000648af) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x07cd,	// (0x000648af) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbaa,	// (0x00073c8c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbaa,	// (0x00073c8c) single_mobtv_pg_channel_thumb_pane_g

0x07d9,	// (0x000648bb) single_mobtv_pg_channel_thumb_pane_t1

0x07e7,	// (0x000648c9) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb1,	// (0x00073c93) single_mobtv_pg_channel_thumb_pane_t

0xeca0,	// (0x00072d82) bg_single_mobtv_pg_channel_table_pane_g1

0xeca0,	// (0x00072d82) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c3,	// (0x000734a5) bg_single_mobtv_pg_channel_table_pane_g

0x07f5,	// (0x000648d7) single_mobtv_pg_channel_table_pane_t1

0x0803,	// (0x000648e5) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb6,	// (0x00073c98) single_mobtv_pg_channel_table_pane_t

0xb1a8,	// (0x0006f28a) main_mobtv_info_pane_g1_ParamLimits

0xb1a8,	// (0x0006f28a) main_mobtv_info_pane_g1

0xb1c4,	// (0x0006f2a6) main_mobtv_info_pane_t1_ParamLimits

0xb1c4,	// (0x0006f2a6) main_mobtv_info_pane_t1

0xb23c,	// (0x0006f31e) main_mobtv_info_pane_t2_ParamLimits

0xb23c,	// (0x0006f31e) main_mobtv_info_pane_t2

0x0002,

0xfbc0,	// (0x00073ca2) main_mobtv_info_pane_t_ParamLimits

0xfbc0,	// (0x00073ca2) main_mobtv_info_pane_t

0xb2cb,	// (0x0006f3ad) wait_bar_pane_cp05

0xb2dd,	// (0x0006f3bf) main_mobtv_loading_pane_g1_ParamLimits

0xb2dd,	// (0x0006f3bf) main_mobtv_loading_pane_g1

0xb2eb,	// (0x0006f3cd) main_mobtv_loading_pane_g2_ParamLimits

0xb2eb,	// (0x0006f3cd) main_mobtv_loading_pane_g2

0xb2f7,	// (0x0006f3d9) main_mobtv_loading_pane_g3_ParamLimits

0xb2f7,	// (0x0006f3d9) main_mobtv_loading_pane_g3

0x0002,

0xfbc7,	// (0x00073ca9) main_mobtv_loading_pane_g_ParamLimits

0xfbc7,	// (0x00073ca9) main_mobtv_loading_pane_g

0x0811,	// (0x000648f3) main_mobtv_loading_pane_t1_ParamLimits

0x0811,	// (0x000648f3) main_mobtv_loading_pane_t1

0x0829,	// (0x0006490b) main_mobtv_loading_pane_t2_ParamLimits

0x0829,	// (0x0006490b) main_mobtv_loading_pane_t2

0x0001,

0xfbce,	// (0x00073cb0) main_mobtv_loading_pane_t_ParamLimits

0xfbce,	// (0x00073cb0) main_mobtv_loading_pane_t

0xb305,	// (0x0006f3e7) wait_bar_pane_cp06_ParamLimits

0xb305,	// (0x0006f3e7) wait_bar_pane_cp06

0x084d,	// (0x0006492f) main_mobtv_programe_curr_pane_t1

0x085b,	// (0x0006493d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbd3,	// (0x00073cb5) main_mobtv_programe_curr_pane_t

0x0869,	// (0x0006494b) main_mobtv_programe_next_pane_t1

0x0877,	// (0x00064959) main_mobtv_programe_next_pane_t2

0x0885,	// (0x00064967) main_mobtv_programe_next_pane_t3

0x0002,

0xfbd8,	// (0x00073cba) main_mobtv_programe_next_pane_t

0xe359,	// (0x0007243b) bg_popup_mobtv_noti_window_pane

0x0893,	// (0x00064975) popup_mobtv_noti_window_g1

0x089b,	// (0x0006497d) popup_mobtv_noti_window_t1

0x08a9,	// (0x0006498b) popup_mobtv_noti_window_t2

0x0001,

0xfbdf,	// (0x00073cc1) popup_mobtv_noti_window_t

0xeca0,	// (0x00072d82) bg_popup_mobtv_noti_window_pane_g1

0xe359,	// (0x0007243b) sc_clock_pane

0xe359,	// (0x0007243b) main_fs_bigclock_pane

0xa9b7,	// (0x0006ea99) blid2_tripm_pane_t4_ParamLimits

0xa9b7,	// (0x0006ea99) blid2_tripm_pane_t4

0xb311,	// (0x0006f3f3) sc_clock_pane_g1_ParamLimits

0xb311,	// (0x0006f3f3) sc_clock_pane_g1

0xb31f,	// (0x0006f401) sc_clock_pane_t1_ParamLimits

0xb31f,	// (0x0006f401) sc_clock_pane_t1

0xb332,	// (0x0006f414) sc_clock_pane_t2_ParamLimits

0xb332,	// (0x0006f414) sc_clock_pane_t2

0xb344,	// (0x0006f426) sc_clock_pane_t3_ParamLimits

0xb344,	// (0x0006f426) sc_clock_pane_t3

0x0004,

0xfbe4,	// (0x00073cc6) sc_clock_pane_t_ParamLimits

0xfbe4,	// (0x00073cc6) sc_clock_pane_t

0xbc5c,	// (0x0006fd3e) main_fs_bigclock_indicator_pane_ParamLimits

0xbc5c,	// (0x0006fd3e) main_fs_bigclock_indicator_pane

0xb3c7,	// (0x0006f4a9) main_fs_bigclock_pane_g1_ParamLimits

0xb3c7,	// (0x0006f4a9) main_fs_bigclock_pane_g1

0xbc68,	// (0x0006fd4a) main_fs_bigclock_pane_t1_ParamLimits

0xbc68,	// (0x0006fd4a) main_fs_bigclock_pane_t1

0xbc7a,	// (0x0006fd5c) main_fs_bigclock_pane_t2_ParamLimits

0xbc7a,	// (0x0006fd5c) main_fs_bigclock_pane_t2

0xbc8e,	// (0x0006fd70) main_fs_bigclock_pane_t3_ParamLimits

0xbc8e,	// (0x0006fd70) main_fs_bigclock_pane_t3

0x0002,

0xfd75,	// (0x00073e57) main_fs_bigclock_pane_t_ParamLimits

0xfd75,	// (0x00073e57) main_fs_bigclock_pane_t

0x1438,	// (0x0006551a) main_fs_bigclock_indicator_pane_g1

0x05c8,	// (0x000646aa) ncim_query_content_pane_g2_ParamLimits

0x05c8,	// (0x000646aa) ncim_query_content_pane_g2

0x0001,

0xfb71,	// (0x00073c53) ncim_query_content_pane_g_ParamLimits

0xfb71,	// (0x00073c53) ncim_query_content_pane_g

0xb358,	// (0x0006f43a) sc_clock_pane_t4_ParamLimits

0xb358,	// (0x0006f43a) sc_clock_pane_t4

0xea01,	// (0x00072ae3) main_radioblah_pane

0x976b,	// (0x0006d84d) cell_call4_button_pane_t1_copy1_ParamLimits

0x976b,	// (0x0006d84d) cell_call4_button_pane_t1_copy1

0xaf9b,	// (0x0006f07d) main_ncimui_pane_t1_ParamLimits

0xaf9b,	// (0x0006f07d) main_ncimui_pane_t1

0xafb5,	// (0x0006f097) main_ncimui_pane_t2_ParamLimits

0xafb5,	// (0x0006f097) main_ncimui_pane_t2

0x0002,

0xfb6a,	// (0x00073c4c) main_ncimui_pane_t_ParamLimits

0xfb6a,	// (0x00073c4c) main_ncimui_pane_t

0x09ef,	// (0x00064ad1) main_radioblah_anim_pane_ParamLimits

0x09ef,	// (0x00064ad1) main_radioblah_anim_pane

0x0a00,	// (0x00064ae2) main_radioblah_info_pane_ParamLimits

0x0a00,	// (0x00064ae2) main_radioblah_info_pane

0x0a14,	// (0x00064af6) main_radioblah_pane_t1_ParamLimits

0x0a14,	// (0x00064af6) main_radioblah_pane_t1

0x0a30,	// (0x00064b12) main_radioblah_pane_t2_ParamLimits

0x0a30,	// (0x00064b12) main_radioblah_pane_t2

0x0003,

0xfc05,	// (0x00073ce7) main_radioblah_pane_t_ParamLimits

0xfc05,	// (0x00073ce7) main_radioblah_pane_t

0xb41d,	// (0x0006f4ff) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb41d,	// (0x0006f4ff) main_radioblah_rocker_ctrl_pane

0x0a78,	// (0x00064b5a) main_radioblah_info_pane_t1_ParamLimits

0x0a78,	// (0x00064b5a) main_radioblah_info_pane_t1

0xb462,	// (0x0006f544) main_radioblah_info_pane_t2_ParamLimits

0xb462,	// (0x0006f544) main_radioblah_info_pane_t2

0x0003,

0xfc0e,	// (0x00073cf0) main_radioblah_info_pane_t_ParamLimits

0xfc0e,	// (0x00073cf0) main_radioblah_info_pane_t

0xeca0,	// (0x00072d82) main_radioblah_rocker_ctrl_pane_g1

0xb512,	// (0x0006f5f4) main_radioblah_rocker_ctrl_pane_g2

0xb51a,	// (0x0006f5fc) main_radioblah_rocker_ctrl_pane_g3

0xb522,	// (0x0006f604) main_radioblah_rocker_ctrl_pane_g4

0xb52a,	// (0x0006f60c) main_radioblah_rocker_ctrl_pane_g5

0xb532,	// (0x0006f614) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc17,	// (0x00073cf9) main_radioblah_rocker_ctrl_pane_g

0xaf41,	// (0x0006f023) main_cset_text2_pane_t1_copy1_ParamLimits

0x97f6,	// (0x0006d8d8) cam4_image_uncrop_qvga_pane

0x9937,	// (0x0006da19) vid4_image_uncrop_qcif_pane

0xab45,	// (0x0006ec27) cam6_image_uncrop_qvga_pane_ParamLimits

0xab45,	// (0x0006ec27) cam6_image_uncrop_qvga_pane

0xe03e,	// (0x00072120) vid6_image_uncrop_qcif_pane_ParamLimits

0xe03e,	// (0x00072120) vid6_image_uncrop_qcif_pane

0xe359,	// (0x0007243b) bg_popup_preview_window_pane_cp03

0x057a,	// (0x0006465c) list_cset_text2_pane

0x0582,	// (0x00064664) main_cset6_text2_pane_g1

0x058a,	// (0x0006466c) main_cset6_text2_pane_t1

0xb53a,	// (0x0006f61c) list_cset_text2_pane_t1_ParamLimits

0xb53a,	// (0x0006f61c) list_cset_text2_pane_t1

0xea01,	// (0x00072ae3) main_radioblah_pane_ParamLimits

0xb2b7,	// (0x0006f399) main_mobtv_info_pane_t3_ParamLimits

0xb2b7,	// (0x0006f399) main_mobtv_info_pane_t3

0xb40b,	// (0x0006f4ed) main_radioblah_pane_g1

0xb436,	// (0x0006f518) main_radioblah_info_pane_g1

0xb4b7,	// (0x0006f599) main_radioblah_info_pane_t3_ParamLimits

0xb4b7,	// (0x0006f599) main_radioblah_info_pane_t3

0x559e,	// (0x00069680) highlight_cell_cale_month_pane_ParamLimits

0x559e,	// (0x00069680) highlight_cell_cale_month_pane

0xe359,	// (0x0007243b) main_phob_fisheye_pane

0xd35c,	// (0x0007143e) scroll_pane_cp0031_ParamLimits

0xd35c,	// (0x0007143e) scroll_pane_cp0031

0xe14c,	// (0x0007222e) wait_bar_pane_cp08_ParamLimits

0xad21,	// (0x0006ee03) cset_list_set_pane_copy1_ParamLimits

0x0acd,	// (0x00064baf) highlight_cell_cale_month_pane_g1

0xb55b,	// (0x0006f63d) highlight_cell_cale_month_pane_t1

0xddb5,	// (0x00071e97) list_gen_pane_cp01

0xda20,	// (0x00071b02) scroll_pane_01

0x2f77,	// (0x00067059) list_single_double_fisheye_pane

0x2f80,	// (0x00067062) list_double_fisheye_pane_g1_ParamLimits

0x2f80,	// (0x00067062) list_double_fisheye_pane_g1

0x2f8c,	// (0x0006706e) list_double_fisheye_pane_g2_ParamLimits

0x2f8c,	// (0x0006706e) list_double_fisheye_pane_g2

0x2fa0,	// (0x00067082) list_double_fisheye_pane_g3_ParamLimits

0x2fa0,	// (0x00067082) list_double_fisheye_pane_g3

0x0004,

0xfc24,	// (0x00073d06) list_double_fisheye_pane_g_ParamLimits

0xfc24,	// (0x00073d06) list_double_fisheye_pane_g

0x2fc9,	// (0x000670ab) list_double_fisheye_pane_t1_ParamLimits

0x2fc9,	// (0x000670ab) list_double_fisheye_pane_t1

0x2fe4,	// (0x000670c6) list_double_fisheye_pane_t2_ParamLimits

0x2fe4,	// (0x000670c6) list_double_fisheye_pane_t2

0x0001,

0xfc2f,	// (0x00073d11) list_double_fisheye_pane_t_ParamLimits

0xfc2f,	// (0x00073d11) list_double_fisheye_pane_t

0xe359,	// (0x0007243b) main_call5_pane

0xb37e,	// (0x0006f460) sc_swipe_pane_ParamLimits

0xb37e,	// (0x0006f460) sc_swipe_pane

0xb575,	// (0x0006f657) call5_image_pane_ParamLimits

0xb575,	// (0x0006f657) call5_image_pane

0xb585,	// (0x0006f667) call5_swipe_1_pane_ParamLimits

0xb585,	// (0x0006f667) call5_swipe_1_pane

0xb591,	// (0x0006f673) call5_swipe_2_pane_ParamLimits

0xb591,	// (0x0006f673) call5_swipe_2_pane

0xb5ab,	// (0x0006f68d) popup_call5_audio_first_window_ParamLimits

0xb5ab,	// (0x0006f68d) popup_call5_audio_first_window

0xea5a,	// (0x00072b3c) call5_swipe_1_pane_g1_ParamLimits

0xea5a,	// (0x00072b3c) call5_swipe_1_pane_g1

0x0ad5,	// (0x00064bb7) call5_swipe_1_pane_g2_ParamLimits

0x0ad5,	// (0x00064bb7) call5_swipe_1_pane_g2

0x0001,

0xfc34,	// (0x00073d16) call5_swipe_1_pane_g_ParamLimits

0xfc34,	// (0x00073d16) call5_swipe_1_pane_g

0x0ae1,	// (0x00064bc3) call5_swipe_1_pane_t1_ParamLimits

0x0ae1,	// (0x00064bc3) call5_swipe_1_pane_t1

0xea5a,	// (0x00072b3c) call5_swipe_2_pane_g1_ParamLimits

0xea5a,	// (0x00072b3c) call5_swipe_2_pane_g1

0x0af6,	// (0x00064bd8) call5_swipe_2_pane_g2_ParamLimits

0x0af6,	// (0x00064bd8) call5_swipe_2_pane_g2

0x0001,

0xfc39,	// (0x00073d1b) call5_swipe_2_pane_g_ParamLimits

0xfc39,	// (0x00073d1b) call5_swipe_2_pane_g

0x0b02,	// (0x00064be4) call5_swipe_2_pane_t1_ParamLimits

0x0b02,	// (0x00064be4) call5_swipe_2_pane_t1

0x0b17,	// (0x00064bf9) sc_swipe_pane_g1_ParamLimits

0x0b17,	// (0x00064bf9) sc_swipe_pane_g1

0x0b24,	// (0x00064c06) sc_swipe_pane_g2_ParamLimits

0x0b24,	// (0x00064c06) sc_swipe_pane_g2

0x0001,

0xfc3e,	// (0x00073d20) sc_swipe_pane_g_ParamLimits

0xfc3e,	// (0x00073d20) sc_swipe_pane_g

0x0b30,	// (0x00064c12) sc_swipe_pane_t1_ParamLimits

0x0b30,	// (0x00064c12) sc_swipe_pane_t1

0xe359,	// (0x0007243b) main_cmail_launcher_pane

0xb5b9,	// (0x0006f69b) aid_size_cell_cmail_l_ParamLimits

0xb5b9,	// (0x0006f69b) aid_size_cell_cmail_l

0xb5c7,	// (0x0006f6a9) grid_cmail_l_pane_ParamLimits

0xb5c7,	// (0x0006f6a9) grid_cmail_l_pane

0xb5d7,	// (0x0006f6b9) cell_cmail_l_pane_ParamLimits

0xb5d7,	// (0x0006f6b9) cell_cmail_l_pane

0x0b45,	// (0x00064c27) cell_cmail_l_pane_g1_ParamLimits

0x0b45,	// (0x00064c27) cell_cmail_l_pane_g1

0x0b51,	// (0x00064c33) cell_cmail_l_pane_t1_ParamLimits

0x0b51,	// (0x00064c33) cell_cmail_l_pane_t1

0x0b67,	// (0x00064c49) cell_cmail_l_pane_t2_ParamLimits

0x0b67,	// (0x00064c49) cell_cmail_l_pane_t2

0x0001,

0xfc43,	// (0x00073d25) cell_cmail_l_pane_t_ParamLimits

0xfc43,	// (0x00073d25) cell_cmail_l_pane_t

0xea01,	// (0x00072ae3) grid_highlight_pane_cp018_ParamLimits

0xea01,	// (0x00072ae3) grid_highlight_pane_cp018

0x3874,	// (0x00067956) main2_pane_ParamLimits

0x3874,	// (0x00067956) main2_pane

0xeb5b,	// (0x00072c3d) popup_sp_fs_action_menu_bg_pane_g1

0xeb63,	// (0x00072c45) popup_sp_fs_action_menu_bg_pane_g2

0xeb6b,	// (0x00072c4d) popup_sp_fs_action_menu_bg_pane_g3

0xeb73,	// (0x00072c55) popup_sp_fs_action_menu_bg_pane_g4

0xeb7b,	// (0x00072c5d) popup_sp_fs_action_menu_bg_pane_g5

0xeb83,	// (0x00072c65) popup_sp_fs_action_menu_bg_pane_g6

0xeb8b,	// (0x00072c6d) popup_sp_fs_action_menu_bg_pane_g7

0xeb93,	// (0x00072c75) popup_sp_fs_action_menu_bg_pane_g8

0xeb9b,	// (0x00072c7d) popup_sp_fs_action_menu_bg_pane_g9

0xeba3,	// (0x00072c85) popup_sp_fs_action_menu_bg_pane_g10

0xeba3,	// (0x00072c85) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x0007320d) popup_sp_fs_action_menu_bg_pane_g

0xea5a,	// (0x00072b3c) list_medium_line_x2_t3_g3_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t3_g3_g1

0xea5a,	// (0x00072b3c) list_medium_line_x2_t3_g3_g2_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t3_g3_g2

0xea5a,	// (0x00072b3c) list_medium_line_x2_t3_g3_g3_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x000732bb) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x000732bb) list_medium_line_x2_t3_g3_g

0xecba,	// (0x00072d9c) list_medium_line_x2_t3_g3_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t3_g3_t1

0xecba,	// (0x00072d9c) list_medium_line_x2_t3_g3_t2_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t3_g3_t2

0xecba,	// (0x00072d9c) list_medium_line_x2_t3_g3_t3_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x000732c2) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x000732c2) list_medium_line_x2_t3_g3_t

0xea5a,	// (0x00072b3c) list_medium_line_x2_t3_g2_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t3_g2_g1

0xea5a,	// (0x00072b3c) list_medium_line_x2_t3_g2_g2_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x000732c9) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x000732c9) list_medium_line_x2_t3_g2_g

0xecba,	// (0x00072d9c) list_medium_line_x2_t3_g2_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t3_g2_t1

0xecba,	// (0x00072d9c) list_medium_line_x2_t3_g2_t2_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t3_g2_t2

0xecba,	// (0x00072d9c) list_medium_line_x2_t3_g2_t3_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x000732c2) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x000732c2) list_medium_line_x2_t3_g2_t

0xea5a,	// (0x00072b3c) list_medium_line_x2_t4_g4_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t4_g4_g1

0xea5a,	// (0x00072b3c) list_medium_line_x2_t4_g4_g2_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t4_g4_g2

0xea5a,	// (0x00072b3c) list_medium_line_x2_t4_g4_g3_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t4_g4_g3

0xea5a,	// (0x00072b3c) list_medium_line_x2_t4_g4_g4_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x000732ce) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x000732ce) list_medium_line_x2_t4_g4_g

0xecba,	// (0x00072d9c) list_medium_line_x2_t4_g4_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t4_g4_t1

0xecba,	// (0x00072d9c) list_medium_line_x2_t4_g4_t2_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t4_g4_t2

0xecba,	// (0x00072d9c) list_medium_line_x2_t4_g4_t3_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t4_g4_t3

0xecba,	// (0x00072d9c) list_medium_line_x2_t4_g4_t4_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x000732d7) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x000732d7) list_medium_line_x2_t4_g4_t

0xea5a,	// (0x00072b3c) list_medium_line_x2_t2_g4_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t2_g4_g1

0xea5a,	// (0x00072b3c) list_medium_line_x2_t2_g4_g2_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t2_g4_g2

0xea5a,	// (0x00072b3c) list_medium_line_x2_t2_g4_g3_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t2_g4_g3

0xea5a,	// (0x00072b3c) list_medium_line_x2_t2_g4_g4_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x000732ce) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x000732ce) list_medium_line_x2_t2_g4_g

0xecba,	// (0x00072d9c) list_medium_line_x2_t2_g4_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t2_g4_t1

0xecba,	// (0x00072d9c) list_medium_line_x2_t2_g4_t2_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf25c,	// (0x0007333e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf25c,	// (0x0007333e) list_medium_line_x2_t2_g4_t

0xea5a,	// (0x00072b3c) list_medium_line_x2_t2_g3_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t2_g3_g1

0xea5a,	// (0x00072b3c) list_medium_line_x2_t2_g3_g2_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t2_g3_g2

0xea5a,	// (0x00072b3c) list_medium_line_x2_t2_g3_g3_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x000732bb) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x000732bb) list_medium_line_x2_t2_g3_g

0xecba,	// (0x00072d9c) list_medium_line_x2_t2_g3_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t2_g3_t1

0xecba,	// (0x00072d9c) list_medium_line_x2_t2_g3_t2_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf25c,	// (0x0007333e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf25c,	// (0x0007333e) list_medium_line_x2_t2_g3_t

0x5903,	// (0x000699e5) main_sp_fs_list_pane_ParamLimits

0x5903,	// (0x000699e5) main_sp_fs_list_pane

0x590f,	// (0x000699f1) sp_fs_scroll_pane_ParamLimits

0x590f,	// (0x000699f1) sp_fs_scroll_pane

0x591b,	// (0x000699fd) list_medium_line_x2_t3_t1

0x591b,	// (0x000699fd) list_medium_line_x2_t3_t2

0x591b,	// (0x000699fd) list_medium_line_x2_t3_t3

0x0002,

0xf2a7,	// (0x00073389) list_medium_line_x2_t3_t

0x591b,	// (0x000699fd) list_medium_line_x3_t4_t1

0x591b,	// (0x000699fd) list_medium_line_x3_t4_t2

0x591b,	// (0x000699fd) list_medium_line_x3_t4_t3

0x591b,	// (0x000699fd) list_medium_line_x3_t4_t4

0x0003,

0xf2ae,	// (0x00073390) list_medium_line_x3_t4_t

0x591b,	// (0x000699fd) list_medium_line_x4_t5_t1

0x591b,	// (0x000699fd) list_medium_line_x4_t5_t2

0x591b,	// (0x000699fd) list_medium_line_x4_t5_t3

0x591b,	// (0x000699fd) list_medium_line_x4_t5_t4

0x591b,	// (0x000699fd) list_medium_line_x4_t5_t5

0x0004,

0xf2b7,	// (0x00073399) list_medium_line_x4_t5_t

0xea5a,	// (0x00072b3c) list_medium_line_t4_g4_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_t4_g4_g1

0xea5a,	// (0x00072b3c) list_medium_line_t4_g4_g2_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_t4_g4_g2

0xea5a,	// (0x00072b3c) list_medium_line_t4_g4_g3_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_t4_g4_g3

0xea5a,	// (0x00072b3c) list_medium_line_t4_g4_g4_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x000732ce) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x000732ce) list_medium_line_t4_g4_g

0xecba,	// (0x00072d9c) list_medium_line_t4_g4_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t4_g4_t1

0xecba,	// (0x00072d9c) list_medium_line_t4_g4_t2_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t4_g4_t2

0xecba,	// (0x00072d9c) list_medium_line_t4_g4_t3_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t4_g4_t3

0xecba,	// (0x00072d9c) list_medium_line_t4_g4_t4_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x000732d7) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x000732d7) list_medium_line_t4_g4_t

0x5c86,	// (0x00069d68) chi_dic_find_pane_g1

0x7ece,	// (0x0006bfb0) main_tport_pane

0x591b,	// (0x000699fd) list_medium_line_plain_t1

0xea5a,	// (0x00072b3c) list_medium_line_t2_g2_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_t2_g2_g1

0xea5a,	// (0x00072b3c) list_medium_line_t2_g2_g2_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x000732c9) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x000732c9) list_medium_line_t2_g2_g

0xecba,	// (0x00072d9c) list_medium_line_t2_g2_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t2_g2_t1

0xecba,	// (0x00072d9c) list_medium_line_t2_g2_t2_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t2_g2_t2

0x0001,

0xf25c,	// (0x0007333e) list_medium_line_t2_g2_t_ParamLimits

0xf25c,	// (0x0007333e) list_medium_line_t2_g2_t

0x2f11,	// (0x00066ff3) aid_sp_fs_list_icon_a_sm

0xa848,	// (0x0006e92a) aid_sp_fs_list_icon_d

0x2f19,	// (0x00066ffb) aid_sp_fs_text_primary

0xddbe,	// (0x00071ea0) aid_sp_fs_text_secondary

0xe359,	// (0x0007243b) list_medium_line

0xe359,	// (0x0007243b) list_medium_line_g2

0xe359,	// (0x0007243b) list_medium_line_g3

0xe359,	// (0x0007243b) list_medium_line_plain

0xe359,	// (0x0007243b) list_medium_line_plain_t2

0xe359,	// (0x0007243b) list_medium_line_plain_t3

0xe359,	// (0x0007243b) list_medium_line_right_icon

0xe359,	// (0x0007243b) list_medium_line_right_iconx2

0xe359,	// (0x0007243b) list_medium_line_t2

0xe359,	// (0x0007243b) list_medium_line_t2_g2

0xe359,	// (0x0007243b) list_medium_line_t2_g3

0xe359,	// (0x0007243b) list_medium_line_t2_right_icon

0xe359,	// (0x0007243b) list_medium_line_t2_right_iconx2

0xe359,	// (0x0007243b) list_medium_line_t3

0xe359,	// (0x0007243b) list_medium_line_t3_g2

0xe359,	// (0x0007243b) list_medium_line_t3_g3

0xe359,	// (0x0007243b) list_medium_line_t3_right_iconx2

0xe359,	// (0x0007243b) list_medium_line_t4_g4

0xe359,	// (0x0007243b) list_medium_line_x2

0xe359,	// (0x0007243b) list_medium_line_x2_t2_g2

0xe359,	// (0x0007243b) list_medium_line_x2_t2_g3

0xe359,	// (0x0007243b) list_medium_line_x2_t2_g4

0xe359,	// (0x0007243b) list_medium_line_x2_t3

0xe359,	// (0x0007243b) list_medium_line_x2_t3_g2

0xe359,	// (0x0007243b) list_medium_line_x2_t3_g3

0xe359,	// (0x0007243b) list_medium_line_x2_t3_g4

0xe359,	// (0x0007243b) list_medium_line_x2_t4_g2

0xe359,	// (0x0007243b) list_medium_line_x2_t4_g4

0xe359,	// (0x0007243b) list_medium_line_x3

0xe359,	// (0x0007243b) list_medium_line_x3_t4

0xe359,	// (0x0007243b) list_medium_line_x3_t4_g4

0xe359,	// (0x0007243b) list_medium_line_x4_t4

0xe359,	// (0x0007243b) list_medium_line_x4_t4_g7

0xe359,	// (0x0007243b) list_medium_line_x4_t5

0x2f22,	// (0x00067004) list_single_fs_dyc_pane_ParamLimits

0x2f22,	// (0x00067004) list_single_fs_dyc_pane

0xea5a,	// (0x00072b3c) list_medium_line_x4_t4_g7_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x4_t4_g7_g1

0xea5a,	// (0x00072b3c) list_medium_line_x4_t4_g7_g2_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x4_t4_g7_g2

0xea5a,	// (0x00072b3c) list_medium_line_x4_t4_g7_g3_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x4_t4_g7_g3

0xea5a,	// (0x00072b3c) list_medium_line_x4_t4_g7_g4_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x4_t4_g7_g4

0xea5a,	// (0x00072b3c) list_medium_line_x4_t4_g7_g5_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x4_t4_g7_g5

0xea5a,	// (0x00072b3c) list_medium_line_x4_t4_g7_g6_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x4_t4_g7_g6

0xea68,	// (0x00072b4a) list_medium_line_x4_t4_g7_g7_ParamLimits

0xea68,	// (0x00072b4a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb4b,	// (0x00073c2d) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb4b,	// (0x00073c2d) list_medium_line_x4_t4_g7_g

0xecba,	// (0x00072d9c) list_medium_line_x4_t4_g7_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x4_t4_g7_t1

0xecba,	// (0x00072d9c) list_medium_line_x4_t4_g7_t2_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x4_t4_g7_t2

0xecba,	// (0x00072d9c) list_medium_line_x4_t4_g7_t3_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x4_t4_g7_t3

0xf057,	// (0x00073139) list_medium_line_x4_t4_g7_t4_ParamLimits

0xf057,	// (0x00073139) list_medium_line_x4_t4_g7_t4

0xf057,	// (0x00073139) list_medium_line_x4_t4_g7_t5_ParamLimits

0xf057,	// (0x00073139) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb5a,	// (0x00073c3c) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb5a,	// (0x00073c3c) list_medium_line_x4_t4_g7_t

0x2f5a,	// (0x0006703c) list_single_dyc_row_pane_ParamLimits

0x2f5a,	// (0x0006703c) list_single_dyc_row_pane

0xb569,	// (0x0006f64b) call5_gesture_pane_ParamLimits

0xb569,	// (0x0006f64b) call5_gesture_pane

0xb59d,	// (0x0006f67f) call5_windows_pane_ParamLimits

0xb59d,	// (0x0006f67f) call5_windows_pane

0xb5f0,	// (0x0006f6d2) call5_swipe_1_pane_cp_ParamLimits

0xb5f0,	// (0x0006f6d2) call5_swipe_1_pane_cp

0xb5fc,	// (0x0006f6de) call5_swipe_2_pane_cp_ParamLimits

0xb5fc,	// (0x0006f6de) call5_swipe_2_pane_cp

0xec7e,	// (0x00072d60) call5_image_pane_cp

0xb608,	// (0x0006f6ea) popup_call5_audio_first_window_cp_ParamLimits

0xb608,	// (0x0006f6ea) popup_call5_audio_first_window_cp

0x0b17,	// (0x00064bf9) call5_swipe_1_pane_g1_cp_ParamLimits

0x0b17,	// (0x00064bf9) call5_swipe_1_pane_g1_cp

0x0b84,	// (0x00064c66) call5_swipe_1_pane_g2_cp

0x0b30,	// (0x00064c12) call5_swipe_1_pane_t1_cp_ParamLimits

0x0b30,	// (0x00064c12) call5_swipe_1_pane_t1_cp

0x0b17,	// (0x00064bf9) call5_swipe_2_pane_g1_cp_ParamLimits

0x0b17,	// (0x00064bf9) call5_swipe_2_pane_g1_cp

0x0b8c,	// (0x00064c6e) call5_swipe_2_pane_g2_cp

0x0b94,	// (0x00064c76) call5_swipe_2_pane_t1_cp_ParamLimits

0x0b94,	// (0x00064c76) call5_swipe_2_pane_t1_cp

0xea01,	// (0x00072ae3) main_sp_fs_email_pane

0x0ba9,	// (0x00064c8b) main_sp_fs_listscroll_pane_te

0xb616,	// (0x0006f6f8) popup_sp_fs_action_menu_pane_ParamLimits

0xb616,	// (0x0006f6f8) popup_sp_fs_action_menu_pane

0xeca0,	// (0x00072d82) bg_sp_fs_ctrlbar_pane_g1

0x0bb2,	// (0x00064c94) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x0bbb,	// (0x00064c9d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x7e70,	// (0x0006bf52) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xeca0,	// (0x00072d82) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc48,	// (0x00073d2a) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x61cb,	// (0x0006a2ad) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x61cb,	// (0x0006a2ad) bg_sp_fs_ctrlbar_ddmenu_pane

0x0bc4,	// (0x00064ca6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x0bc4,	// (0x00064ca6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x0bd0,	// (0x00064cb2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x0bd0,	// (0x00064cb2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc51,	// (0x00073d33) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc51,	// (0x00073d33) main_sp_fs_ctrlbar_ddmenu_pane_g

0x0bdc,	// (0x00064cbe) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x0bdc,	// (0x00064cbe) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xeca0,	// (0x00072d82) list_medium_line_t2_right_icon_g1

0x591b,	// (0x000699fd) list_medium_line_t2_right_icon_t1

0x591b,	// (0x000699fd) list_medium_line_t2_right_icon_t2

0x0001,

0xfc56,	// (0x00073d38) list_medium_line_t2_right_icon_t

0x7eb2,	// (0x0006bf94) bg_sp_fs_ctrlbar_pane_ParamLimits

0x7eb2,	// (0x0006bf94) bg_sp_fs_ctrlbar_pane

0xb69d,	// (0x0006f77f) main_sp_fs_ctrlbar_button_pane_cp01

0xb6a5,	// (0x0006f787) main_sp_fs_ctrlbar_ddmenu_pane

0x0c2e,	// (0x00064d10) main_sp_fs_ctrlbar_pane_g1

0x0c3a,	// (0x00064d1c) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc5b,	// (0x00073d3d) main_sp_fs_ctrlbar_pane_g

0xb6e1,	// (0x0006f7c3) main_sp_fs_ctrlbar_pane_t1

0xb71c,	// (0x0006f7fe) main_sp_fs_ctrlbar_pane

0xb732,	// (0x0006f814) main_sp_fs_listscroll_pane_te_cp01

0x3006,	// (0x000670e8) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x3006,	// (0x000670e8) popup_sp_fs_action_menu_pane_cp01

0xea01,	// (0x00072ae3) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xea01,	// (0x00072ae3) bg_sp_fs_highlight_list_pane_cp01

0x3026,	// (0x00067108) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x3026,	// (0x00067108) sp_fs_action_menu_list_gene_pane_g1

0x0c70,	// (0x00064d52) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x0c70,	// (0x00064d52) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc69,	// (0x00073d4b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc69,	// (0x00073d4b) sp_fs_action_menu_list_gene_pane_g

0x3035,	// (0x00067117) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x3035,	// (0x00067117) sp_fs_action_menu_list_gene_pane_t1

0x304d,	// (0x0006712f) sp_fs_action_menu_list_gene_pane_ParamLimits

0x304d,	// (0x0006712f) sp_fs_action_menu_list_gene_pane

0x0cb4,	// (0x00064d96) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x0cb4,	// (0x00064d96) popup_sp_fs_action_menu_bg_pane

0x306c,	// (0x0006714e) sp_fs_action_menu_list_pane_ParamLimits

0x306c,	// (0x0006714e) sp_fs_action_menu_list_pane

0xe2fe,	// (0x000723e0) sp_fs_scroll_pane_cp01_ParamLimits

0xe2fe,	// (0x000723e0) sp_fs_scroll_pane_cp01

0x591b,	// (0x000699fd) list_medium_line_plain_t2_t1

0x591b,	// (0x000699fd) list_medium_line_plain_t2_t2

0x0001,

0xfc56,	// (0x00073d38) list_medium_line_plain_t2_t

0x591b,	// (0x000699fd) list_medium_line_plain_t3_t1

0x591b,	// (0x000699fd) list_medium_line_plain_t3_t2

0x591b,	// (0x000699fd) list_medium_line_plain_t3_t3

0x0002,

0xf2a7,	// (0x00073389) list_medium_line_plain_t3_t

0xea5a,	// (0x00072b3c) list_medium_line_x2_t2_g2_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t2_g2_g1

0xea5a,	// (0x00072b3c) list_medium_line_x2_t2_g2_g2_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x000732c9) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x000732c9) list_medium_line_x2_t2_g2_g

0xecba,	// (0x00072d9c) list_medium_line_x2_t2_g2_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t2_g2_t1

0xecba,	// (0x00072d9c) list_medium_line_x2_t2_g2_t2_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t2_g2_t2

0x0001,

0xf25c,	// (0x0007333e) list_medium_line_x2_t2_g2_t_ParamLimits

0xf25c,	// (0x0007333e) list_medium_line_x2_t2_g2_t

0xea5a,	// (0x00072b3c) list_medium_line_x2_t4_g2_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t4_g2_g1

0xea5a,	// (0x00072b3c) list_medium_line_x2_t4_g2_g2_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x000732c9) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x000732c9) list_medium_line_x2_t4_g2_g

0xecba,	// (0x00072d9c) list_medium_line_x2_t4_g2_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t4_g2_t1

0xecba,	// (0x00072d9c) list_medium_line_x2_t4_g2_t2_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t4_g2_t2

0xecba,	// (0x00072d9c) list_medium_line_x2_t4_g2_t3_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t4_g2_t3

0xecba,	// (0x00072d9c) list_medium_line_x2_t4_g2_t4_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x000732d7) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x000732d7) list_medium_line_x2_t4_g2_t

0xeca0,	// (0x00072d82) list_medium_line_t3_right_iconx2_g1

0xeca0,	// (0x00072d82) list_medium_line_t3_right_iconx2_g2

0xeca0,	// (0x00072d82) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c8,	// (0x000734aa) list_medium_line_t3_right_iconx2_g

0x591b,	// (0x000699fd) list_medium_line_t3_right_iconx2_t1

0x591b,	// (0x000699fd) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc56,	// (0x00073d38) list_medium_line_t3_right_iconx2_t

0xea5a,	// (0x00072b3c) list_medium_line_x3_t4_g4_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x3_t4_g4_g1

0xea5a,	// (0x00072b3c) list_medium_line_x3_t4_g4_g2_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x3_t4_g4_g2

0xea5a,	// (0x00072b3c) list_medium_line_x3_t4_g4_g3_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x3_t4_g4_g3

0xea5a,	// (0x00072b3c) list_medium_line_x3_t4_g4_g4_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x000732ce) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x000732ce) list_medium_line_x3_t4_g4_g

0xecba,	// (0x00072d9c) list_medium_line_x3_t4_g4_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x3_t4_g4_t1

0xecba,	// (0x00072d9c) list_medium_line_x3_t4_g4_t2_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x3_t4_g4_t2

0xecba,	// (0x00072d9c) list_medium_line_x3_t4_g4_t3_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x3_t4_g4_t3

0xecba,	// (0x00072d9c) list_medium_line_x3_t4_g4_t4_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x000732d7) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x000732d7) list_medium_line_x3_t4_g4_t

0x308c,	// (0x0006716e) list_single_dyc_row_text_pane_t1_ParamLimits

0x308c,	// (0x0006716e) list_single_dyc_row_text_pane_t1

0x30c3,	// (0x000671a5) list_single_dyc_row_text_pane_t2_ParamLimits

0x30c3,	// (0x000671a5) list_single_dyc_row_text_pane_t2

0x3139,	// (0x0006721b) list_single_dyc_row_text_pane_t3_ParamLimits

0x3139,	// (0x0006721b) list_single_dyc_row_text_pane_t3

0x0005,

0xfc6e,	// (0x00073d50) list_single_dyc_row_text_pane_t_ParamLimits

0xfc6e,	// (0x00073d50) list_single_dyc_row_text_pane_t

0x320a,	// (0x000672ec) list_single_dyc_row_pane_g1_ParamLimits

0x320a,	// (0x000672ec) list_single_dyc_row_pane_g1

0x3216,	// (0x000672f8) list_single_dyc_row_pane_g2_ParamLimits

0x3216,	// (0x000672f8) list_single_dyc_row_pane_g2

0x3222,	// (0x00067304) list_single_dyc_row_pane_g3_ParamLimits

0x3222,	// (0x00067304) list_single_dyc_row_pane_g3

0x322e,	// (0x00067310) list_single_dyc_row_pane_g4_ParamLimits

0x322e,	// (0x00067310) list_single_dyc_row_pane_g4

0x0003,

0xfc7b,	// (0x00073d5d) list_single_dyc_row_pane_g_ParamLimits

0xfc7b,	// (0x00073d5d) list_single_dyc_row_pane_g

0x323a,	// (0x0006731c) list_single_dyc_row_text_pane_ParamLimits

0x323a,	// (0x0006731c) list_single_dyc_row_text_pane

0xe359,	// (0x0007243b) bg_sp_fs_scroll_pane

0x0d55,	// (0x00064e37) thumb_sp_fs_scroll_pane

0xea5a,	// (0x00072b3c) list_medium_line_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_g1

0xecba,	// (0x00072d9c) list_medium_line_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t1

0xea5a,	// (0x00072b3c) list_medium_line_x2_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_g1

0xea5a,	// (0x00072b3c) list_medium_line_x2_g2_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x000732c9) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x000732c9) list_medium_line_x2_g

0xecba,	// (0x00072d9c) list_medium_line_x2_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t1

0xea5a,	// (0x00072b3c) list_medium_line_x3_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x3_g1

0xe324,	// (0x00072406) list_medium_line_x3_g2_ParamLimits

0xe324,	// (0x00072406) list_medium_line_x3_g2

0x0001,

0xfc84,	// (0x00073d66) list_medium_line_x3_g_ParamLimits

0xfc84,	// (0x00073d66) list_medium_line_x3_g

0x0d5e,	// (0x00064e40) list_medium_line_x3_t1_ParamLimits

0x0d5e,	// (0x00064e40) list_medium_line_x3_t1

0x0d72,	// (0x00064e54) thumb_sp_fs_scroll_pane_g1

0x0d7b,	// (0x00064e5d) thumb_sp_fs_scroll_pane_g2

0x0d84,	// (0x00064e66) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x00073d6b) thumb_sp_fs_scroll_pane_g

0x0d72,	// (0x00064e54) bg_sp_fs_scroll_pane_g1

0x0d7b,	// (0x00064e5d) bg_sp_fs_scroll_pane_g2

0x0d84,	// (0x00064e66) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x00073d6b) bg_sp_fs_scroll_pane_g

0xea5a,	// (0x00072b3c) list_medium_line_x2_t3_g4_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t3_g4_g1

0xea5a,	// (0x00072b3c) list_medium_line_x2_t3_g4_g2_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t3_g4_g2

0xea5a,	// (0x00072b3c) list_medium_line_x2_t3_g4_g3_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t3_g4_g3

0xea5a,	// (0x00072b3c) list_medium_line_x2_t3_g4_g4_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x000732ce) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x000732ce) list_medium_line_x2_t3_g4_g

0xecba,	// (0x00072d9c) list_medium_line_x2_t3_g4_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t3_g4_t1

0xecba,	// (0x00072d9c) list_medium_line_x2_t3_g4_t2_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t3_g4_t2

0xecba,	// (0x00072d9c) list_medium_line_x2_t3_g4_t3_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x000732c2) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x000732c2) list_medium_line_x2_t3_g4_t

0xea5a,	// (0x00072b3c) list_medium_line_g2_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_g2_g1

0xea5a,	// (0x00072b3c) list_medium_line_g2_g2_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x000732c9) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x000732c9) list_medium_line_g2_g

0xecba,	// (0x00072d9c) list_medium_line_g2_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_g2_t1

0xea5a,	// (0x00072b3c) list_medium_line_t3_g2_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_t3_g2_g1

0xea5a,	// (0x00072b3c) list_medium_line_t3_g2_g2_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x000732c9) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x000732c9) list_medium_line_t3_g2_g

0xecba,	// (0x00072d9c) list_medium_line_t3_g2_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t3_g2_t1

0xecba,	// (0x00072d9c) list_medium_line_t3_g2_t2_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t3_g2_t2

0xecba,	// (0x00072d9c) list_medium_line_t3_g2_t3_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x000732c2) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x000732c2) list_medium_line_t3_g2_t

0xeca0,	// (0x00072d82) list_medium_line_right_icon_g1

0x591b,	// (0x000699fd) list_medium_line_right_icon_t1

0xea5a,	// (0x00072b3c) list_medium_line_t2_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_t2_g1

0xecba,	// (0x00072d9c) list_medium_line_t2_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t2_t1

0xecba,	// (0x00072d9c) list_medium_line_t2_t2_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t2_t2

0x0001,

0xf25c,	// (0x0007333e) list_medium_line_t2_t_ParamLimits

0xf25c,	// (0x0007333e) list_medium_line_t2_t

0xea5a,	// (0x00072b3c) list_medium_line_t3_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_t3_g1

0xecba,	// (0x00072d9c) list_medium_line_t3_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t3_t1

0xecba,	// (0x00072d9c) list_medium_line_t3_t2_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t3_t2

0xecba,	// (0x00072d9c) list_medium_line_t3_t3_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x000732c2) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x000732c2) list_medium_line_t3_t

0xea5a,	// (0x00072b3c) list_medium_line_g3_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_g3_g1

0xea5a,	// (0x00072b3c) list_medium_line_g3_g2_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_g3_g2

0xea5a,	// (0x00072b3c) list_medium_line_g3_g3_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x000732bb) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x000732bb) list_medium_line_g3_g

0xecba,	// (0x00072d9c) list_medium_line_g3_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_g3_t1

0xea5a,	// (0x00072b3c) list_medium_line_t2_g3_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_t2_g3_g1

0xea5a,	// (0x00072b3c) list_medium_line_t2_g3_g2_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_t2_g3_g2

0xea5a,	// (0x00072b3c) list_medium_line_t2_g3_g3_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x000732bb) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x000732bb) list_medium_line_t2_g3_g

0xecba,	// (0x00072d9c) list_medium_line_t2_g3_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t2_g3_t1

0xecba,	// (0x00072d9c) list_medium_line_t2_g3_t2_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t2_g3_t2

0x0001,

0xf25c,	// (0x0007333e) list_medium_line_t2_g3_t_ParamLimits

0xf25c,	// (0x0007333e) list_medium_line_t2_g3_t

0xea5a,	// (0x00072b3c) list_medium_line_t3_g3_g1_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_t3_g3_g1

0xea5a,	// (0x00072b3c) list_medium_line_t3_g3_g2_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_t3_g3_g2

0xea5a,	// (0x00072b3c) list_medium_line_t3_g3_g3_ParamLimits

0xea5a,	// (0x00072b3c) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x000732bb) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x000732bb) list_medium_line_t3_g3_g

0xecba,	// (0x00072d9c) list_medium_line_t3_g3_t1_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t3_g3_t1

0xecba,	// (0x00072d9c) list_medium_line_t3_g3_t2_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t3_g3_t2

0xecba,	// (0x00072d9c) list_medium_line_t3_g3_t3_ParamLimits

0xecba,	// (0x00072d9c) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x000732c2) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x000732c2) list_medium_line_t3_g3_t

0xeca0,	// (0x00072d82) list_medium_line_right_iconx2_g1

0xeca0,	// (0x00072d82) list_medium_line_right_iconx2_g2

0x0001,

0xf3c3,	// (0x000734a5) list_medium_line_right_iconx2_g

0x591b,	// (0x000699fd) list_medium_line_right_iconx2_t1

0xeca0,	// (0x00072d82) list_medium_line_t2_right_iconx2_g1

0xeca0,	// (0x00072d82) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3c3,	// (0x000734a5) list_medium_line_t2_right_iconx2_g

0x591b,	// (0x000699fd) list_medium_line_t2_right_iconx2_t1

0x591b,	// (0x000699fd) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc56,	// (0x00073d38) list_medium_line_t2_right_iconx2_t

0x591b,	// (0x000699fd) list_medium_line_x4_t4_t1

0x591b,	// (0x000699fd) list_medium_line_x4_t4_t2

0x591b,	// (0x000699fd) list_medium_line_x4_t4_t3

0x591b,	// (0x000699fd) list_medium_line_x4_t4_t4

0x0003,

0xf2ae,	// (0x00073390) list_medium_line_x4_t4_t

0xb76d,	// (0x0006f84f) tport_appsw_pane_ParamLimits

0xb76d,	// (0x0006f84f) tport_appsw_pane

0xb77b,	// (0x0006f85d) tport_contact_pane_ParamLimits

0xb77b,	// (0x0006f85d) tport_contact_pane

0xb78b,	// (0x0006f86d) tport_listscroll_pane_ParamLimits

0xb78b,	// (0x0006f86d) tport_listscroll_pane

0xb79b,	// (0x0006f87d) cell_tport_appsw_pane_ParamLimits

0xb79b,	// (0x0006f87d) cell_tport_appsw_pane

0xea68,	// (0x00072b4a) tport_appsw_pane_g1_ParamLimits

0xea68,	// (0x00072b4a) tport_appsw_pane_g1

0x0d8d,	// (0x00064e6f) tport_contact_pane_g1

0x0d96,	// (0x00064e78) tport_contact_pane_t1

0x0da4,	// (0x00064e86) tport_contact_pane_t2

0x0001,

0xfc90,	// (0x00073d72) tport_contact_pane_t

0x0db2,	// (0x00064e94) list_tport_pane

0x0dbb,	// (0x00064e9d) scroll_pane_cp_030

0xb7ce,	// (0x0006f8b0) cell_tport_appsw_pane_g1

0xb7de,	// (0x0006f8c0) cell_tport_appsw_pane_t1

0xb7ec,	// (0x0006f8ce) grid_highlight_pane_cp019

0xb7f4,	// (0x0006f8d6) list_tport_double_graphic_pane_ParamLimits

0xb7f4,	// (0x0006f8d6) list_tport_double_graphic_pane

0xea01,	// (0x00072ae3) list_highlight_pane_cp023_ParamLimits

0xea01,	// (0x00072ae3) list_highlight_pane_cp023

0xb805,	// (0x0006f8e7) list_tport_double_graphic_pane_g1_ParamLimits

0xb805,	// (0x0006f8e7) list_tport_double_graphic_pane_g1

0xb812,	// (0x0006f8f4) list_tport_double_graphic_pane_t1_ParamLimits

0xb812,	// (0x0006f8f4) list_tport_double_graphic_pane_t1

0xb827,	// (0x0006f909) list_tport_double_graphic_pane_t2_ParamLimits

0xb827,	// (0x0006f909) list_tport_double_graphic_pane_t2

0x0001,

0xfc9c,	// (0x00073d7e) list_tport_double_graphic_pane_t_ParamLimits

0xfc9c,	// (0x00073d7e) list_tport_double_graphic_pane_t

0xe359,	// (0x0007243b) main_cale_note_pane

0x9b90,	// (0x0006dc72) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9b90,	// (0x0006dc72) cell_vitu2_function_top_wide_pane_cp01

0xb2cb,	// (0x0006f3ad) wait_bar_pane_cp05_ParamLimits

0xea01,	// (0x00072ae3) listscroll_cmail_pane

0x0dc4,	// (0x00064ea6) list_cmail_pane

0xb839,	// (0x0006f91b) list_cmail_body_pane

0xb861,	// (0x0006f943) list_single_cmail_header_caption_pane

0xb890,	// (0x0006f972) list_single_cmail_header_detail_pane_ParamLimits

0xb890,	// (0x0006f972) list_single_cmail_header_detail_pane

0x0dd4,	// (0x00064eb6) list_single_cmail_header_caption_pane_t1

0x3259,	// (0x0006733b) list_single_cmail_header_detail_pane_g1_ParamLimits

0x3259,	// (0x0006733b) list_single_cmail_header_detail_pane_g1

0xb8c9,	// (0x0006f9ab) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb8c9,	// (0x0006f9ab) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca1,	// (0x00073d83) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca1,	// (0x00073d83) list_single_cmail_header_detail_pane_g

0x326f,	// (0x00067351) list_single_cmail_header_detail_pane_t1_ParamLimits

0x326f,	// (0x00067351) list_single_cmail_header_detail_pane_t1

0x32cf,	// (0x000673b1) list_single_cmail_header_editor_pane_bg_ParamLimits

0x32cf,	// (0x000673b1) list_single_cmail_header_editor_pane_bg

0x07aa,	// (0x0006488c) list_cmail_body_pane_g1

0x0e7b,	// (0x00064f5d) list_cmail_body_pane_t1

0xd906,	// (0x000719e8) list_single_cmail_header_editor_pane_bg_g1

0xeec5,	// (0x00072fa7) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd916,	// (0x000719f8) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd90e,	// (0x000719f0) list_single_cmail_header_editor_pane_bg_g1_copy3

0xdb46,	// (0x00071c28) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd936,	// (0x00071a18) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd926,	// (0x00071a08) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd92e,	// (0x00071a10) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xeea5,	// (0x00072f87) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb8d5,	// (0x0006f9b7) calenote_gesture_pane_ParamLimits

0xb8d5,	// (0x0006f9b7) calenote_gesture_pane

0xb8ef,	// (0x0006f9d1) calenote_window_pane_ParamLimits

0xb8ef,	// (0x0006f9d1) calenote_window_pane

0x0e89,	// (0x00064f6b) popup_note_window_cp01

0xb907,	// (0x0006f9e9) calenote_swipe_1_pane_ParamLimits

0xb907,	// (0x0006f9e9) calenote_swipe_1_pane

0xb5fc,	// (0x0006f6de) calenote_swipe_2_pane_ParamLimits

0xb5fc,	// (0x0006f6de) calenote_swipe_2_pane

0x0b17,	// (0x00064bf9) calenote_swipe_1_pane_g1_ParamLimits

0x0b17,	// (0x00064bf9) calenote_swipe_1_pane_g1

0x0b24,	// (0x00064c06) calenote_swipe_1_pane_g2_ParamLimits

0x0b24,	// (0x00064c06) calenote_swipe_1_pane_g2

0x0001,

0xfc3e,	// (0x00073d20) calenote_swipe_1_pane_g_ParamLimits

0xfc3e,	// (0x00073d20) calenote_swipe_1_pane_g

0x0e9b,	// (0x00064f7d) calenote_swipe_1_pane_t1_ParamLimits

0x0e9b,	// (0x00064f7d) calenote_swipe_1_pane_t1

0x0b17,	// (0x00064bf9) calenote_swipe_2_pane_g1_ParamLimits

0x0b17,	// (0x00064bf9) calenote_swipe_2_pane_g1

0x0eba,	// (0x00064f9c) calenote_swipe_2_pane_g2_ParamLimits

0x0eba,	// (0x00064f9c) calenote_swipe_2_pane_g2

0x0001,

0xfcad,	// (0x00073d8f) calenote_swipe_2_pane_g_ParamLimits

0xfcad,	// (0x00073d8f) calenote_swipe_2_pane_g

0x0ec6,	// (0x00064fa8) calenote_swipe_2_pane_t1_ParamLimits

0x0ec6,	// (0x00064fa8) calenote_swipe_2_pane_t1

0xe359,	// (0x0007243b) main_mup_navstr_pane

0x8a10,	// (0x0006caf2) main_mup3_pane_t7_ParamLimits

0x8a10,	// (0x0006caf2) main_mup3_pane_t7

0x9239,	// (0x0006d31b) main_mp4_pane_g6_ParamLimits

0x9239,	// (0x0006d31b) main_mp4_pane_g6

0x95c9,	// (0x0006d6ab) main_image3_pane_t4_ParamLimits

0x95c9,	// (0x0006d6ab) main_image3_pane_t4

0xb91a,	// (0x0006f9fc) popup_navstr_preview_pane_ParamLimits

0xb91a,	// (0x0006f9fc) popup_navstr_preview_pane

0xb926,	// (0x0006fa08) scroll_navstr_pane_ParamLimits

0xb926,	// (0x0006fa08) scroll_navstr_pane

0xe359,	// (0x0007243b) bg_popup_preview_window_pane_cp04

0x0eed,	// (0x00064fcf) popup_navstr_preview_pane_t1

0xb932,	// (0x0006fa14) scroll_navstr_pane_g1_ParamLimits

0xb932,	// (0x0006fa14) scroll_navstr_pane_g1

0xb93f,	// (0x0006fa21) scroll_navstr_pane_t1_ParamLimits

0xb93f,	// (0x0006fa21) scroll_navstr_pane_t1

0x0e92,	// (0x00064f74) bg_button_pane_cp014

0x0e92,	// (0x00064f74) bg_button_pane_cp030

0x2fac,	// (0x0006708e) list_double_fisheye_pane_g4_ParamLimits

0x2fac,	// (0x0006708e) list_double_fisheye_pane_g4

0x2fb8,	// (0x0006709a) list_double_fisheye_pane_g5_ParamLimits

0x2fb8,	// (0x0006709a) list_double_fisheye_pane_g5

0xe332,	// (0x00072414) sp_fs_scroll_pane_cp03

0x0c2e,	// (0x00064d10) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x0c3a,	// (0x00064d1c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc5b,	// (0x00073d3d) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb6e1,	// (0x0006f7c3) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x0dcc,	// (0x00064eae) sp_fs_scroll_pane_cp02

0xebc6,	// (0x00072ca8) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xebc6,	// (0x00072ca8) popup_sp_fs_calendar_preview_list_single_pane

0xe359,	// (0x0007243b) main_cam6_pano_pane

0xea01,	// (0x00072ae3) main_mup3_pane_ParamLimits

0xe359,	// (0x0007243b) main_phacti_pane

0xb1a0,	// (0x0006f282) bg_button_pane_cp11

0xb1b8,	// (0x0006f29a) main_mobtv_info_pane_g2_ParamLimits

0xb1b8,	// (0x0006f29a) main_mobtv_info_pane_g2

0x0001,

0xfbbb,	// (0x00073c9d) main_mobtv_info_pane_g_ParamLimits

0xfbbb,	// (0x00073c9d) main_mobtv_info_pane_g

0xb36a,	// (0x0006f44c) sc_clock_pane_t5_ParamLimits

0xb36a,	// (0x0006f44c) sc_clock_pane_t5

0xb40b,	// (0x0006f4ed) main_radioblah_pane_g1_ParamLimits

0x0a48,	// (0x00064b2a) main_radioblah_pane_t3_ParamLimits

0x0a48,	// (0x00064b2a) main_radioblah_pane_t3

0x0a60,	// (0x00064b42) main_radioblah_pane_t4_ParamLimits

0x0a60,	// (0x00064b42) main_radioblah_pane_t4

0xb429,	// (0x0006f50b) main_radioblah_text_pane_ParamLimits

0xb429,	// (0x0006f50b) main_radioblah_text_pane

0xb436,	// (0x0006f518) main_radioblah_info_pane_g1_ParamLimits

0xb4cb,	// (0x0006f5ad) main_radioblah_info_pane_t4_ParamLimits

0xb4cb,	// (0x0006f5ad) main_radioblah_info_pane_t4

0xea01,	// (0x00072ae3) main_sp_fs_calendar_pane

0xb951,	// (0x0006fa33) main_phacti_pane_g1

0xb959,	// (0x0006fa3b) phacti_note_pane_ParamLimits

0xb959,	// (0x0006fa3b) phacti_note_pane

0x0f04,	// (0x00064fe6) phacti_term_pane_ParamLimits

0x0f04,	// (0x00064fe6) phacti_term_pane

0x0f19,	// (0x00064ffb) phacti_note_pane_t1_ParamLimits

0x0f19,	// (0x00064ffb) phacti_note_pane_t1

0x32e6,	// (0x000673c8) phacti_term_pane_g1

0x32ee,	// (0x000673d0) phacti_term_pane_t1_ParamLimits

0x32ee,	// (0x000673d0) phacti_term_pane_t1

0x0f62,	// (0x00065044) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0f6a,	// (0x0006504c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb7,	// (0x00073d99) popup_sp_fs_calendar_preview_list_single_pane_g

0x0f72,	// (0x00065054) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0f72,	// (0x00065054) popup_sp_fs_calendar_preview_list_single_pane_t1

0x0f88,	// (0x0006506a) aid_popup_sp_fs_bg_corner_pane

0xeca0,	// (0x00072d82) popup_sp_fs_calendar_preview_bg_pane_g1

0xe359,	// (0x0007243b) popup_sp_fs_calendar_preview_bg_pane

0x0f90,	// (0x00065072) popup_sp_fs_calendar_preview_list_pane

0x7eb2,	// (0x0006bf94) bg_main_sp_fs_cale_pane_ParamLimits

0x7eb2,	// (0x0006bf94) bg_main_sp_fs_cale_pane

0x3321,	// (0x00067403) listscroll_cale_mrui_pane_ParamLimits

0x3321,	// (0x00067403) listscroll_cale_mrui_pane

0x3336,	// (0x00067418) listscroll_sp_fs_schedule_track_pane

0x333f,	// (0x00067421) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x333f,	// (0x00067421) main_sp_fs_ctrlbar_pane_cp01

0x0fd2,	// (0x000650b4) main_sp_fs_ribbon_pane

0x3352,	// (0x00067434) popup_sp_fs_cale_preview_window

0xb9bc,	// (0x0006fa9e) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb9bc,	// (0x0006fa9e) list_single_sp_fs_schedule_track_pane

0xe9c9,	// (0x00072aab) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe9c9,	// (0x00072aab) bg_sp_fs_highlight_list_pane_cp03

0xb9e2,	// (0x0006fac4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb9e2,	// (0x0006fac4) list_single_sp_fs_schedule_track_pane_g1

0xb9ee,	// (0x0006fad0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb9ee,	// (0x0006fad0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbc,	// (0x00073d9e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbc,	// (0x00073d9e) list_single_sp_fs_schedule_track_pane_g

0xb9fa,	// (0x0006fadc) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb9fa,	// (0x0006fadc) list_single_sp_fs_schedule_track_pane_t1

0xba12,	// (0x0006faf4) sp_fs_schedule_track_pane_ParamLimits

0xba12,	// (0x0006faf4) sp_fs_schedule_track_pane

0x0fec,	// (0x000650ce) sp_fs_schedule_track_pane_g1

0x0ff4,	// (0x000650d6) sp_fs_schedule_track_pane_g2

0x0ffc,	// (0x000650de) sp_fs_schedule_track_pane_g3

0x1004,	// (0x000650e6) sp_fs_schedule_track_pane_g4

0x100c,	// (0x000650ee) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc1,	// (0x00073da3) sp_fs_schedule_track_pane_g

0xd906,	// (0x000719e8) bg_sp_fs_schedule_viewer_highlight_g1

0xeec5,	// (0x00072fa7) bg_sp_fs_schedule_viewer_highlight_g2

0xd90e,	// (0x000719f0) bg_sp_fs_schedule_viewer_highlight_g3

0xd916,	// (0x000719f8) bg_sp_fs_schedule_viewer_highlight_g4

0xdb46,	// (0x00071c28) bg_sp_fs_schedule_viewer_highlight_g5

0xd926,	// (0x00071a08) bg_sp_fs_schedule_viewer_highlight_g6

0xd92e,	// (0x00071a10) bg_sp_fs_schedule_viewer_highlight_g7

0xd936,	// (0x00071a18) bg_sp_fs_schedule_viewer_highlight_g8

0xeea5,	// (0x00072f87) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfccc,	// (0x00073dae) bg_sp_fs_schedule_viewer_highlight_g

0xe359,	// (0x0007243b) bg_main_sp_fs_ribbon_pane

0xba22,	// (0x0006fb04) main_sp_fs_ribbon_pane_g1

0x1014,	// (0x000650f6) main_sp_fs_ribbon_pane_t1

0xba2b,	// (0x0006fb0d) main_sp_fs_ribbon_pane_t2

0x1023,	// (0x00065105) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcdf,	// (0x00073dc1) main_sp_fs_ribbon_pane_t

0x1032,	// (0x00065114) main_sp_fs_ribbon_scheduler_pane

0x103a,	// (0x0006511c) bg_main_sp_fs_ribbon_pane_g1

0x1043,	// (0x00065125) bg_main_sp_fs_ribbon_pane_g2

0x104c,	// (0x0006512e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce6,	// (0x00073dc8) bg_main_sp_fs_ribbon_pane_g

0x1054,	// (0x00065136) main_sp_fs_ribbon_scheduler_pane_g1

0x105d,	// (0x0006513f) main_sp_fs_ribbon_scheduler_pane_g2

0x1066,	// (0x00065148) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfced,	// (0x00073dcf) main_sp_fs_ribbon_scheduler_pane_g

0x106f,	// (0x00065151) list_cale_mrui_pane

0xba3a,	// (0x0006fb1c) sp_fs_scroll_pane_cp07_ParamLimits

0xba3a,	// (0x0006fb1c) sp_fs_scroll_pane_cp07

0xba56,	// (0x0006fb38) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xba56,	// (0x0006fb38) bg_sp_fs_schedule_viewer_highlight

0x107c,	// (0x0006515e) list_single_sp_fs_schedule_track_pane_cp01

0x1084,	// (0x00065166) list_sp_fs_schedule_track_pane

0x108c,	// (0x0006516e) sp_fs_scroll_pane_cp06_ParamLimits

0x108c,	// (0x0006516e) sp_fs_scroll_pane_cp06

0xeca0,	// (0x00072d82) bgmain_sp_fs_calendar_pane_g1

0x3364,	// (0x00067446) list_single_cale_mrui_pane_ParamLimits

0x3364,	// (0x00067446) list_single_cale_mrui_pane

0x3392,	// (0x00067474) list_single_cale_mrui_row_pane_ParamLimits

0x3392,	// (0x00067474) list_single_cale_mrui_row_pane

0x339f,	// (0x00067481) list_single_cale_mrui_row_pane_g1_ParamLimits

0x339f,	// (0x00067481) list_single_cale_mrui_row_pane_g1

0x33d7,	// (0x000674b9) list_single_cale_mrui_row_pane_t1_ParamLimits

0x33d7,	// (0x000674b9) list_single_cale_mrui_row_pane_t1

0x33e9,	// (0x000674cb) list_single_cale_mrui_row_pane_t2_ParamLimits

0x33e9,	// (0x000674cb) list_single_cale_mrui_row_pane_t2

0x344f,	// (0x00067531) list_single_cale_mrui_row_pane_t3_ParamLimits

0x344f,	// (0x00067531) list_single_cale_mrui_row_pane_t3

0x347e,	// (0x00067560) list_single_cale_mrui_row_pane_t4_ParamLimits

0x347e,	// (0x00067560) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcfb,	// (0x00073ddd) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcfb,	// (0x00073ddd) list_single_cale_mrui_row_pane_t

0x34ad,	// (0x0006758f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x34ad,	// (0x0006758f) list_single_cmail_header_editor_pane_bg_cp01

0x34cd,	// (0x000675af) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x34cd,	// (0x000675af) list_single_cmail_header_editor_pane_bg_cp02

0xba63,	// (0x0006fb45) main_radioblah_text_pane_t1_ParamLimits

0xba63,	// (0x0006fb45) main_radioblah_text_pane_t1

0x1160,	// (0x00065242) cam6_indi_pane_cp01

0x1168,	// (0x0006524a) cam6_mode_pane_cp01

0x1170,	// (0x00065252) cam6_pano_pane

0x1179,	// (0x0006525b) cam6_zoom_pane_cp01

0x1181,	// (0x00065263) cam6_pano_image_pane

0x118c,	// (0x0006526e) cam6_pano_pane_g1

0x07aa,	// (0x0006488c) cam6_pano_pane_g2

0x1195,	// (0x00065277) cam6_pano_pane_g3

0x119e,	// (0x00065280) cam6_pano_pane_g4

0xd5e3,	// (0x000716c5) cam6_pano_pane_g5

0x11a7,	// (0x00065289) cam6_pano_pane_g6

0x11b1,	// (0x00065293) cam6_pano_pane_g7

0x11b9,	// (0x0006529b) cam6_pano_pane_g8

0x11c2,	// (0x000652a4) cam6_pano_pane_g9

0x0008,

0xfd04,	// (0x00073de6) cam6_pano_pane_g

0xe359,	// (0x0007243b) main_browser_tag_pane

0x0ee5,	// (0x00064fc7) grid_navstr_albumart_pane

0x11cd,	// (0x000652af) cell_navstr_albumart_pane_ParamLimits

0x11cd,	// (0x000652af) cell_navstr_albumart_pane

0x11ed,	// (0x000652cf) cell_navstr_albumart_pane_g1

0x7add,	// (0x0006bbbf) cell_navstr_albumart_pane_g2

0x7aed,	// (0x0006bbcf) cell_navstr_albumart_pane_g3

0x7ae5,	// (0x0006bbc7) cell_navstr_albumart_pane_g4

0x0003,

0xfd17,	// (0x00073df9) cell_navstr_albumart_pane_g

0xba7e,	// (0x0006fb60) bt_list_pane_ParamLimits

0xba7e,	// (0x0006fb60) bt_list_pane

0xba9f,	// (0x0006fb81) bt_list_pane_t1

0xbaae,	// (0x0006fb90) bt_list_pane_t2

0x0001,

0xfd20,	// (0x00073e02) bt_list_pane_t

0xe359,	// (0x0007243b) main_cale_prevew_pane

0xbabd,	// (0x0006fb9f) popup_cale_preview_window_ParamLimits

0xbabd,	// (0x0006fb9f) popup_cale_preview_window

0xea01,	// (0x00072ae3) bg_popup_preview_window_pane_cp05_ParamLimits

0xea01,	// (0x00072ae3) bg_popup_preview_window_pane_cp05

0x11f5,	// (0x000652d7) list_cale_preview_pane_ParamLimits

0x11f5,	// (0x000652d7) list_cale_preview_pane

0xbad6,	// (0x0006fbb8) list_double_cale_preview_pane_ParamLimits

0xbad6,	// (0x0006fbb8) list_double_cale_preview_pane

0xbae8,	// (0x0006fbca) list_single_cale_preview_pane_ParamLimits

0xbae8,	// (0x0006fbca) list_single_cale_preview_pane

0xbafc,	// (0x0006fbde) list_single_cale_preview_pane_g1

0xbb04,	// (0x0006fbe6) list_single_cale_preview_pane_t1_ParamLimits

0xbb04,	// (0x0006fbe6) list_single_cale_preview_pane_t1

0xbb19,	// (0x0006fbfb) list_double_cale_preview_pane_g1

0xbb21,	// (0x0006fc03) list_double_cale_preview_pane_t1_ParamLimits

0xbb21,	// (0x0006fc03) list_double_cale_preview_pane_t1

0xbb36,	// (0x0006fc18) list_double_cale_preview_pane_t2_ParamLimits

0xbb36,	// (0x0006fc18) list_double_cale_preview_pane_t2

0x0001,

0xfd25,	// (0x00073e07) list_double_cale_preview_pane_t_ParamLimits

0xfd25,	// (0x00073e07) list_double_cale_preview_pane_t

0xe359,	// (0x0007243b) main_ezdial_pane

0xea01,	// (0x00072ae3) main_sp_fs_email_pane_ParamLimits

0xb65a,	// (0x0006f73c) cmail_ddmenu_btn01_pane_ParamLimits

0xb65a,	// (0x0006f73c) cmail_ddmenu_btn01_pane

0xb66f,	// (0x0006f751) cmail_ddmenu_btn02_pane_ParamLimits

0xb66f,	// (0x0006f751) cmail_ddmenu_btn02_pane

0xb687,	// (0x0006f769) cmail_ddmenu_btn03_pane_ParamLimits

0xb687,	// (0x0006f769) cmail_ddmenu_btn03_pane

0xb71c,	// (0x0006f7fe) main_sp_fs_ctrlbar_pane_ParamLimits

0xb732,	// (0x0006f814) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb839,	// (0x0006f91b) list_cmail_body_pane_ParamLimits

0x0de2,	// (0x00064ec4) bg_button_pane_cp12

0x0df7,	// (0x00064ed9) list_single_cmail_header_detail_pane_g3_ParamLimits

0x0df7,	// (0x00064ed9) list_single_cmail_header_detail_pane_g3

0x32ab,	// (0x0006738d) list_single_cmail_header_detail_pane_t2_ParamLimits

0x32ab,	// (0x0006738d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca8,	// (0x00073d8a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca8,	// (0x00073d8a) list_single_cmail_header_detail_pane_t

0x3303,	// (0x000673e5) phacti_term_pane_t2_ParamLimits

0x3303,	// (0x000673e5) phacti_term_pane_t2

0x0001,

0xfcb2,	// (0x00073d94) phacti_term_pane_t_ParamLimits

0xfcb2,	// (0x00073d94) phacti_term_pane_t

0x1201,	// (0x000652e3) aid_size_list_single_double

0xbb4e,	// (0x0006fc30) popup_ezdial_listscroll_window

0xbb72,	// (0x0006fc54) popup_number_entry_window_cp01

0xec7e,	// (0x00072d60) bg_popup_call_pane_cp09

0x120d,	// (0x000652ef) ezdial_list_pane

0x1215,	// (0x000652f7) scroll_pane_cp23

0x61cb,	// (0x0006a2ad) bg_button_pane_cp028_ParamLimits

0x61cb,	// (0x0006a2ad) bg_button_pane_cp028

0xbb80,	// (0x0006fc62) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xbb80,	// (0x0006fc62) cmail_ddmenu_btn01_pane_g1

0xbb90,	// (0x0006fc72) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xbb90,	// (0x0006fc72) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd2a,	// (0x00073e0c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd2a,	// (0x00073e0c) cmail_ddmenu_btn01_pane_g

0x121d,	// (0x000652ff) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x121d,	// (0x000652ff) cmail_ddmenu_btn01_pane_t1

0x7eb2,	// (0x0006bf94) bg_button_pane_cp029_ParamLimits

0x7eb2,	// (0x0006bf94) bg_button_pane_cp029

0xbb90,	// (0x0006fc72) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xbb90,	// (0x0006fc72) cmail_ddmenu_btn02_pane_g1

0xbba8,	// (0x0006fc8a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xbba8,	// (0x0006fc8a) cmail_ddmenu_btn02_pane_t1

0xe9c9,	// (0x00072aab) bg_button_pane_cp031_ParamLimits

0xe9c9,	// (0x00072aab) bg_button_pane_cp031

0xbb90,	// (0x0006fc72) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xbb90,	// (0x0006fc72) cmail_ddmenu_btn03_pane_g1

0xbba8,	// (0x0006fc8a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xbba8,	// (0x0006fc8a) cmail_ddmenu_btn03_pane_t1

0x9474,	// (0x0006d556) cell_dialer2_keypad_pane_t1_ParamLimits

0x948e,	// (0x0006d570) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x948e,	// (0x0006d570) cell_dialer2_keypad_pane_t1_copy1

0xafe1,	// (0x0006f0c3) ncimui_group_button_pane

0xea01,	// (0x00072ae3) main_sp_fs_calendar_pane_ParamLimits

0xb861,	// (0x0006f943) list_single_cmail_header_caption_pane_ParamLimits

0x3318,	// (0x000673fa) aid_recal_txt_sm_pane

0xe359,	// (0x0007243b) mian_recal_day_pane

0x3352,	// (0x00067434) popup_sp_fs_cale_preview_window_ParamLimits

0x1232,	// (0x00065314) list_recal_day_pane

0x3504,	// (0x000675e6) list_single_recal_day_pane_ParamLimits

0x3504,	// (0x000675e6) list_single_recal_day_pane

0x1286,	// (0x00065368) list_single_recal_day_pane_g1_ParamLimits

0x1286,	// (0x00065368) list_single_recal_day_pane_g1

0x3516,	// (0x000675f8) list_single_recal_day_pane_g2_ParamLimits

0x3516,	// (0x000675f8) list_single_recal_day_pane_g2

0x3522,	// (0x00067604) list_single_recal_day_pane_g3_ParamLimits

0x3522,	// (0x00067604) list_single_recal_day_pane_g3

0x352e,	// (0x00067610) list_single_recal_day_pane_g4_ParamLimits

0x352e,	// (0x00067610) list_single_recal_day_pane_g4

0x353c,	// (0x0006761e) list_single_recal_day_pane_g5_ParamLimits

0x353c,	// (0x0006761e) list_single_recal_day_pane_g5

0x3552,	// (0x00067634) list_single_recal_day_pane_g6_ParamLimits

0x3552,	// (0x00067634) list_single_recal_day_pane_g6

0x0004,

0xfd39,	// (0x00073e1b) list_single_recal_day_pane_g_ParamLimits

0xfd39,	// (0x00073e1b) list_single_recal_day_pane_g

0x3566,	// (0x00067648) list_single_recal_day_pane_t1

0x3578,	// (0x0006765a) list_single_recal_day_pane_t2

0x0001,

0xfd44,	// (0x00073e26) list_single_recal_day_pane_t

0xbbcc,	// (0x0006fcae) ncimui_query_button_pane_ParamLimits

0xbbcc,	// (0x0006fcae) ncimui_query_button_pane

0xbbdc,	// (0x0006fcbe) ncimui_query_button_pane_t1_ParamLimits

0xbbdc,	// (0x0006fcbe) ncimui_query_button_pane_t1

0x12ee,	// (0x000653d0) ncimui_query_button_pane_t2_ParamLimits

0x12ee,	// (0x000653d0) ncimui_query_button_pane_t2

0x0001,

0xfd49,	// (0x00073e2b) ncimui_query_button_pane_t_ParamLimits

0xfd49,	// (0x00073e2b) ncimui_query_button_pane_t

0xbbef,	// (0x0006fcd1) query_button_pane_ParamLimits

0xbbef,	// (0x0006fcd1) query_button_pane

0xe359,	// (0x0007243b) bg_button_pane_cp0028

0x1301,	// (0x000653e3) query_button_pane_t1

0x7ece,	// (0x0006bfb0) main_tport_pane_ParamLimits

0xb743,	// (0x0006f825) bg_popup_window_pane_cp01_ParamLimits

0xb743,	// (0x0006f825) bg_popup_window_pane_cp01

0xb751,	// (0x0006f833) heading_pane_cp08_ParamLimits

0xb751,	// (0x0006f833) heading_pane_cp08

0xb75f,	// (0x0006f841) heading_pane_cp07_ParamLimits

0xb75f,	// (0x0006f841) heading_pane_cp07

0xb7ce,	// (0x0006f8b0) cell_tport_appsw_pane_g2

0x0002,

0xfc95,	// (0x00073d77) cell_tport_appsw_pane_g

0x2aa8,	// (0x00066b8a) input_candi_list_open_g1

0x5754,	// (0x00069836) list_cale_time_pane_g6_ParamLimits

0x5754,	// (0x00069836) list_cale_time_pane_g6

0x8453,	// (0x0006c535) aid_size_touch_calib_1_ParamLimits

0x8453,	// (0x0006c535) aid_size_touch_calib_1

0x845f,	// (0x0006c541) aid_size_touch_calib_2_ParamLimits

0x845f,	// (0x0006c541) aid_size_touch_calib_2

0x846d,	// (0x0006c54f) aid_size_touch_calib_3_ParamLimits

0x846d,	// (0x0006c54f) aid_size_touch_calib_3

0x847d,	// (0x0006c55f) aid_size_touch_calib_4_ParamLimits

0x847d,	// (0x0006c55f) aid_size_touch_calib_4

0x848b,	// (0x0006c56d) main_touch_calib_button_group_pane_ParamLimits

0x848b,	// (0x0006c56d) main_touch_calib_button_group_pane

0x8499,	// (0x0006c57b) main_touch_calib_pane_g1_ParamLimits

0x84a5,	// (0x0006c587) main_touch_calib_pane_g2_ParamLimits

0x84b1,	// (0x0006c593) main_touch_calib_pane_g3_ParamLimits

0x84bd,	// (0x0006c59f) main_touch_calib_pane_g4_ParamLimits

0xf6d7,	// (0x000737b9) main_touch_calib_pane_g_ParamLimits

0x84c9,	// (0x0006c5ab) main_touch_calib_pane_t1_ParamLimits

0x84e2,	// (0x0006c5c4) main_touch_calib_pane_t2_ParamLimits

0x84fb,	// (0x0006c5dd) main_touch_calib_pane_t3_ParamLimits

0x8511,	// (0x0006c5f3) main_touch_calib_pane_t4_ParamLimits

0x8527,	// (0x0006c609) main_touch_calib_pane_t5_ParamLimits

0xf6e0,	// (0x000737c2) main_touch_calib_pane_t_ParamLimits

0xd380,	// (0x00071462) list_single_fp_cale_pane_g3_ParamLimits

0xd380,	// (0x00071462) list_single_fp_cale_pane_g3

0xea01,	// (0x00072ae3) bg_button_pane_cp012_ParamLimits

0xea01,	// (0x00072ae3) bg_vkb2_func_pane_cp03_ParamLimits

0xa2e8,	// (0x0006e3ca) cell_vitu2_function_top_pane_g1_ParamLimits

0xea01,	// (0x00072ae3) bg_vkb2_func_pane_cp04_ParamLimits

0xaf69,	// (0x0006f04b) main_ncimui_button_group_pane_ParamLimits

0xaf69,	// (0x0006f04b) main_ncimui_button_group_pane

0xafcf,	// (0x0006f0b1) main_ncimui_pane_t3_ParamLimits

0xafcf,	// (0x0006f0b1) main_ncimui_pane_t3

0x0efb,	// (0x00064fdd) phacti_button_group_pane

0x1201,	// (0x000652e3) aid_size_list_single_double_ParamLimits

0xbb4e,	// (0x0006fc30) popup_ezdial_listscroll_window_ParamLimits

0xbb72,	// (0x0006fc54) popup_number_entry_window_cp01_ParamLimits

0xbbfc,	// (0x0006fcde) phacti_button_pane_ParamLimits

0xbbfc,	// (0x0006fcde) phacti_button_pane

0xe359,	// (0x0007243b) bg_button_pane_cp14

0x130f,	// (0x000653f1) phacti_button_pane_t1

0xbc0d,	// (0x0006fcef) main_touch_calib_button_pane_ParamLimits

0xbc0d,	// (0x0006fcef) main_touch_calib_button_pane

0xeacc,	// (0x00072bae) bg_button_pane_cp18_ParamLimits

0xeacc,	// (0x00072bae) bg_button_pane_cp18

0x131d,	// (0x000653ff) main_touch_calib_button_pane_t1_ParamLimits

0x131d,	// (0x000653ff) main_touch_calib_button_pane_t1

0x1333,	// (0x00065415) main_touch_calib_button_pane_t2_ParamLimits

0x1333,	// (0x00065415) main_touch_calib_button_pane_t2

0x0001,

0xfd4e,	// (0x00073e30) main_touch_calib_button_pane_t_ParamLimits

0xfd4e,	// (0x00073e30) main_touch_calib_button_pane_t

0xe359,	// (0x0007243b) cell_ncimui_button_pane

0xe359,	// (0x0007243b) bg_button_pane_cp032

0x1351,	// (0x00065433) cell_ncimui_button_pane_t1

0x94ea,	// (0x0006d5cc) image3_infobar_pane_ParamLimits

0x94ea,	// (0x0006d5cc) image3_infobar_pane

0xb38c,	// (0x0006f46e) fs_bigclock_status_pane_ParamLimits

0xb38c,	// (0x0006f46e) fs_bigclock_status_pane

0xb399,	// (0x0006f47b) main_fs_bigclock_clock_pane_ParamLimits

0xb399,	// (0x0006f47b) main_fs_bigclock_clock_pane

0xb3ad,	// (0x0006f48f) main_fs_bigclock_indi_pane_ParamLimits

0xb3ad,	// (0x0006f48f) main_fs_bigclock_indi_pane

0xb3d5,	// (0x0006f4b7) main_fs_bigclock_swipe_pane_ParamLimits

0xb3d5,	// (0x0006f4b7) main_fs_bigclock_swipe_pane

0xe359,	// (0x0007243b) main_fs_clock_dumped_data

0x08b7,	// (0x00064999) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x08b7,	// (0x00064999) list_single_fs_bigclock_indicator_pane_g1

0x08d3,	// (0x000649b5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x08d3,	// (0x000649b5) list_single_fs_bigclock_indicator_pane_g2

0x08ed,	// (0x000649cf) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x08ed,	// (0x000649cf) list_single_fs_bigclock_indicator_pane_g3

0x0907,	// (0x000649e9) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x0907,	// (0x000649e9) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbef,	// (0x00073cd1) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbef,	// (0x00073cd1) list_single_fs_bigclock_indicator_pane_g

0x0932,	// (0x00064a14) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x0932,	// (0x00064a14) list_single_fs_bigclock_indicator_pane_t1

0x095a,	// (0x00064a3c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x095a,	// (0x00064a3c) list_single_fs_bigclock_indicator_pane_t2

0x0982,	// (0x00064a64) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x0982,	// (0x00064a64) list_single_fs_bigclock_indicator_pane_t3

0x09aa,	// (0x00064a8c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x09aa,	// (0x00064a8c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbfa,	// (0x00073cdc) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbfa,	// (0x00073cdc) list_single_fs_bigclock_indicator_pane_t

0x135f,	// (0x00065441) image3_infobar_fav_pane_ParamLimits

0x135f,	// (0x00065441) image3_infobar_fav_pane

0x136f,	// (0x00065451) image3_infobar_loc_pane_ParamLimits

0x136f,	// (0x00065451) image3_infobar_loc_pane

0x1383,	// (0x00065465) image3_infobar_time_pane_ParamLimits

0x1383,	// (0x00065465) image3_infobar_time_pane

0xeca0,	// (0x00072d82) image3_infobar_time_pane_g1

0x1393,	// (0x00065475) image3_infobar_time_pane_t1

0xeca0,	// (0x00072d82) image3_infobar_loc_pane_g1

0x13a1,	// (0x00065483) image3_infobar_loc_pane_g2

0x0001,

0xfd53,	// (0x00073e35) image3_infobar_loc_pane_g

0x13a9,	// (0x0006548b) image3_infobar_loc_pane_t1

0xeca0,	// (0x00072d82) image3_infobar_fav_pane_g1

0x13b7,	// (0x00065499) image3_infobar_fav_pane_g2

0x0001,

0xfd58,	// (0x00073e3a) image3_infobar_fav_pane_g

0x13bf,	// (0x000654a1) fs_bigclock_status_battery_pane

0x13c8,	// (0x000654aa) fs_bigclock_status_signal_pane

0x13d1,	// (0x000654b3) fs_bigclock_status_title_pane

0x13da,	// (0x000654bc) fs_bigclock_status_signal_pane_g1

0x13e3,	// (0x000654c5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5d,	// (0x00073e3f) fs_bigclock_status_signal_pane_g

0x13eb,	// (0x000654cd) fs_bigclock_status_battery_pane_g1

0x13f4,	// (0x000654d6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd62,	// (0x00073e44) fs_bigclock_status_battery_pane_g

0x13fc,	// (0x000654de) fs_bigclock_status_title_pane_t1

0xbc1d,	// (0x0006fcff) main_fs_bigclock_clock_pane_g1

0xbc1d,	// (0x0006fcff) main_fs_bigclock_clock_pane_g2

0xbc2a,	// (0x0006fd0c) main_fs_bigclock_clock_pane_g3

0xbc2a,	// (0x0006fd0c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd67,	// (0x00073e49) main_fs_bigclock_clock_pane_g

0xbc36,	// (0x0006fd18) main_fs_bigclock_clock_pane_t1

0xbc49,	// (0x0006fd2b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd70,	// (0x00073e52) main_fs_bigclock_clock_pane_t

0x140a,	// (0x000654ec) list_single_fs_bigclock_indicator_pane_ParamLimits

0x140a,	// (0x000654ec) list_single_fs_bigclock_indicator_pane

0x141b,	// (0x000654fd) list_single_fs_bigclock_pane_ParamLimits

0x141b,	// (0x000654fd) list_single_fs_bigclock_pane

0x1441,	// (0x00065523) main_fs_bigclock_indicator_pane_t1

0x1450,	// (0x00065532) list_single_fs_bigclock_pane_g1

0x1458,	// (0x0006553a) list_single_fs_bigclock_pane_t1

0xeca0,	// (0x00072d82) main_fs_bigclock_swipe_pane_g1

0x149b,	// (0x0006557d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd81,	// (0x00073e63) main_fs_bigclock_swipe_pane_g

0x14a3,	// (0x00065585) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x14a3,	// (0x00065585) main_fs_bigclock_swipe_pane_t1

0x5a39,	// (0x00069b1b) call_type_pane_ParamLimits

0xe359,	// (0x0007243b) main_btmg_pane

0x33cb,	// (0x000674ad) list_single_cale_mrui_row_pane_g2_ParamLimits

0x33cb,	// (0x000674ad) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcf4,	// (0x00073dd6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf4,	// (0x00073dd6) list_single_cale_mrui_row_pane_g

0x34f3,	// (0x000675d5) list_recal_vselct_arw_lo_pane

0x1263,	// (0x00065345) list_recal_vselct_arw_up_pane

0x34fb,	// (0x000675dd) list_recal_vselct_pane

0xbca0,	// (0x0006fd82) btmg_button_pane

0xbcac,	// (0x0006fd8e) main_btmg_pane_g1

0xe359,	// (0x0007243b) bg_button_pane_cp044

0x14c0,	// (0x000655a2) btmg_button_pane_t1

0x7e91,	// (0x0006bf73) aid_listscroll_gen

0xea01,	// (0x00072ae3) main_cntbar_detail_pane

0x0dc4,	// (0x00064ea6) list_cmail_folder_pane

0xe332,	// (0x00072414) sp_fs_scroll_pane_cp03_ParamLimits

0x358a,	// (0x0006766c) list_single_fs_dyc_pane_cp01_ParamLimits

0x358a,	// (0x0006766c) list_single_fs_dyc_pane_cp01

0x14ce,	// (0x000655b0) aid_size_cmail_indent

0x35b5,	// (0x00067697) list_single_dyc_row_pane_cp01

0xbcd4,	// (0x0006fdb6) cntbar_detail_list_pane_ParamLimits

0xbcd4,	// (0x0006fdb6) cntbar_detail_list_pane

0xbd0e,	// (0x0006fdf0) main_cntbar_detail_cont_pane_ParamLimits

0xbd0e,	// (0x0006fdf0) main_cntbar_detail_cont_pane

0x590f,	// (0x000699f1) scroll_pane_cp032_ParamLimits

0x590f,	// (0x000699f1) scroll_pane_cp032

0xbd1a,	// (0x0006fdfc) cntbar_detail_list_event_pane_ParamLimits

0xbd1a,	// (0x0006fdfc) cntbar_detail_list_event_pane

0xbce0,	// (0x0006fdc2) cntbar_detail_list_shct_pane

0xef13,	// (0x00072ff5) aid_list_gen

0x14e0,	// (0x000655c2) aid_scroll

0x14e9,	// (0x000655cb) aid_size_touch_scroll_bar

0xbd2e,	// (0x0006fe10) aid_list_double

0xbd37,	// (0x0006fe19) aid_list_single

0xe33e,	// (0x00072420) aid_list_single_lg

0x35be,	// (0x000676a0) aid_list_z_g_a_sm

0xbd40,	// (0x0006fe22) aid_list_z_g_d

0x35c6,	// (0x000676a8) aid_txt_z_prm

0x35d4,	// (0x000676b6) aid_txt_z_prm_cp01

0x35e2,	// (0x000676c4) aid_txt_z_sec

0xbd48,	// (0x0006fe2a) main_cntbar_detail_cont_pane_g1_ParamLimits

0xbd48,	// (0x0006fe2a) main_cntbar_detail_cont_pane_g1

0xbd55,	// (0x0006fe37) main_cntbar_detail_cont_pane_g2_ParamLimits

0xbd55,	// (0x0006fe37) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd86,	// (0x00073e68) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd86,	// (0x00073e68) main_cntbar_detail_cont_pane_g

0x152c,	// (0x0006560e) main_cntbar_detail_cont_pane_t1

0x153a,	// (0x0006561c) main_cntbar_detail_cont_pane_t2

0x1548,	// (0x0006562a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8b,	// (0x00073e6d) main_cntbar_detail_cont_pane_t

0xbd61,	// (0x0006fe43) cell_cntbar_detail_list_shct_pane_ParamLimits

0xbd61,	// (0x0006fe43) cell_cntbar_detail_list_shct_pane

0x1556,	// (0x00065638) cntbar_detail_list_shct_pane_g1

0x155f,	// (0x00065641) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd92,	// (0x00073e74) cntbar_detail_list_shct_pane_g

0xbd75,	// (0x0006fe57) cntbar_detail_list_event_pane_g1_ParamLimits

0xbd75,	// (0x0006fe57) cntbar_detail_list_event_pane_g1

0xbd81,	// (0x0006fe63) cntbar_detail_list_event_pane_g2_ParamLimits

0xbd81,	// (0x0006fe63) cntbar_detail_list_event_pane_g2

0x0005,

0xfd97,	// (0x00073e79) cntbar_detail_list_event_pane_g_ParamLimits

0xfd97,	// (0x00073e79) cntbar_detail_list_event_pane_g

0xbded,	// (0x0006fecf) cntbar_detail_list_event_pane_t1_ParamLimits

0xbded,	// (0x0006fecf) cntbar_detail_list_event_pane_t1

0xbe02,	// (0x0006fee4) cntbar_detail_list_event_pane_t2_ParamLimits

0xbe02,	// (0x0006fee4) cntbar_detail_list_event_pane_t2

0x0002,

0xfda4,	// (0x00073e86) cntbar_detail_list_event_pane_t_ParamLimits

0xfda4,	// (0x00073e86) cntbar_detail_list_event_pane_t

0xeca0,	// (0x00072d82) cell_cntbar_detail_list_shct_pane_g1

0x606b,	// (0x0006a14d) navi_pane_mv_g3

0xea01,	// (0x00072ae3) main_cntbar_detail_pane_ParamLimits

0xe359,	// (0x0007243b) main_notif_wgt_pane

0x9174,	// (0x0006d256) aid_tch_main_mp4_pane_g4

0x93d3,	// (0x0006d4b5) popup_slider_window_cp02

0x34e9,	// (0x000675cb) list_recal_day_event_pane

0xbcb4,	// (0x0006fd96) cntbar_detail_btn_pane_ParamLimits

0xbcb4,	// (0x0006fd96) cntbar_detail_btn_pane

0xbcc4,	// (0x0006fda6) cntbar_detail_btn_pane_cp01_ParamLimits

0xbcc4,	// (0x0006fda6) cntbar_detail_btn_pane_cp01

0xbce0,	// (0x0006fdc2) cntbar_detail_list_shct_pane_ParamLimits

0xbcec,	// (0x0006fdce) cntbar_detail_pane_g1_ParamLimits

0xbcec,	// (0x0006fdce) cntbar_detail_pane_g1

0xbcf8,	// (0x0006fdda) cntbar_detail_pane_t1_ParamLimits

0xbcf8,	// (0x0006fdda) cntbar_detail_pane_t1

0xbd8d,	// (0x0006fe6f) cntbar_detail_list_event_pane_g3_ParamLimits

0xbd8d,	// (0x0006fe6f) cntbar_detail_list_event_pane_g3

0xbda5,	// (0x0006fe87) cntbar_detail_list_event_pane_g4_ParamLimits

0xbda5,	// (0x0006fe87) cntbar_detail_list_event_pane_g4

0xbdbd,	// (0x0006fe9f) cntbar_detail_list_event_pane_g5_ParamLimits

0xbdbd,	// (0x0006fe9f) cntbar_detail_list_event_pane_g5

0xbdd5,	// (0x0006feb7) cntbar_detail_list_event_pane_g6_ParamLimits

0xbdd5,	// (0x0006feb7) cntbar_detail_list_event_pane_g6

0xbe17,	// (0x0006fef9) cntbar_detail_list_event_pane_t3_ParamLimits

0xbe17,	// (0x0006fef9) cntbar_detail_list_event_pane_t3

0xbe29,	// (0x0006ff0b) popup_notif_wgt_window_ParamLimits

0xbe29,	// (0x0006ff0b) popup_notif_wgt_window

0xbe39,	// (0x0006ff1b) popup_submenu_window_cp01_ParamLimits

0xbe39,	// (0x0006ff1b) popup_submenu_window_cp01

0xec7e,	// (0x00072d60) bg_popup_window_pane_cp10

0x1568,	// (0x0006564a) listscroll_notif_wgt_pane

0x157a,	// (0x0006565c) list_notif_wgt_window

0x1583,	// (0x00065665) scroll_pane_cp033

0xbe47,	// (0x0006ff29) list_notif_wgt_row_pane_ParamLimits

0xbe47,	// (0x0006ff29) list_notif_wgt_row_pane

0x158c,	// (0x0006566e) aid_size_list_notif_wgt_del

0x1599,	// (0x0006567b) list_notif_wgt_row_pane_g1

0x15a5,	// (0x00065687) list_notif_wgt_row_pane_g2

0x15b4,	// (0x00065696) list_notif_wgt_row_pane_g3

0x0002,

0xfdab,	// (0x00073e8d) list_notif_wgt_row_pane_g

0x15c1,	// (0x000656a3) list_notif_wgt_row_pane_t1

0x15d7,	// (0x000656b9) list_notif_wgt_row_pane_t2

0x15e9,	// (0x000656cb) list_notif_wgt_row_pane_t3

0x0002,

0xfdb2,	// (0x00073e94) list_notif_wgt_row_pane_t

0xdb4e,	// (0x00071c30) list_recal_day_event_pane_g1

0x15fb,	// (0x000656dd) list_recal_day_event_pane_t1

0xe359,	// (0x0007243b) bg_button_pane_cp045

0xbe59,	// (0x0006ff3b) cntbar_detail_btn_pane_t1

0x7eb2,	// (0x0006bf94) main_callh_pane_ParamLimits

0x7eb2,	// (0x0006bf94) main_callh_pane

0xe359,	// (0x0007243b) main_coverflow0_pane

0xe359,	// (0x0007243b) main_wgtman_pane

0xb3ed,	// (0x0006f4cf) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb3ed,	// (0x0006f4cf) main_fs_bigclock_unlock_btn_pane

0xb7c6,	// (0x0006f8a8) bg_button_pane_cp16

0xb7d6,	// (0x0006f8b8) cell_tport_appsw_pane_g3

0xbe67,	// (0x0006ff49) cf0_flow_pane_ParamLimits

0xbe67,	// (0x0006ff49) cf0_flow_pane

0x160a,	// (0x000656ec) listscroll_cf0_pane

0x1615,	// (0x000656f7) main_cf0_pane_g1

0xbe76,	// (0x0006ff58) main_cf0_pane_t1_ParamLimits

0xbe76,	// (0x0006ff58) main_cf0_pane_t1

0xbe8a,	// (0x0006ff6c) main_cf0_pane_t2_ParamLimits

0xbe8a,	// (0x0006ff6c) main_cf0_pane_t2

0x0001,

0xfdbe,	// (0x00073ea0) main_cf0_pane_t_ParamLimits

0xfdbe,	// (0x00073ea0) main_cf0_pane_t

0x1627,	// (0x00065709) scroll_pane_cp11

0xbe9e,	// (0x0006ff80) cf0_flow_pane_g1

0xbea6,	// (0x0006ff88) cf0_flow_pane_g2

0x0001,

0xfdc3,	// (0x00073ea5) cf0_flow_pane_g

0xbeae,	// (0x0006ff90) cf0_flow_pane_t1

0xe359,	// (0x0007243b) main_call6_pane

0xe359,	// (0x0007243b) main_calllock_pane

0xbebc,	// (0x0006ff9e) call6_btn_grp_pane_ParamLimits

0xbebc,	// (0x0006ff9e) call6_btn_grp_pane

0xbecb,	// (0x0006ffad) call6_pane_g1_ParamLimits

0xbecb,	// (0x0006ffad) call6_pane_g1

0xbedb,	// (0x0006ffbd) popup_call6_1st_window_ParamLimits

0xbedb,	// (0x0006ffbd) popup_call6_1st_window

0xbee9,	// (0x0006ffcb) popup_call6_2nd_window_ParamLimits

0xbee9,	// (0x0006ffcb) popup_call6_2nd_window

0xbef7,	// (0x0006ffd9) cell_call6_btn_pane_ParamLimits

0xbef7,	// (0x0006ffd9) cell_call6_btn_pane

0xec7e,	// (0x00072d60) bg_popup_call2_in_pane_cp03

0x1632,	// (0x00065714) popup_call6_1st_window_g1

0x163a,	// (0x0006571c) popup_call6_1st_window_g2

0x1642,	// (0x00065724) popup_call6_1st_window_g3

0x0002,

0xfdc8,	// (0x00073eaa) popup_call6_1st_window_g

0x164a,	// (0x0006572c) popup_call6_1st_window_t1

0x1659,	// (0x0006573b) popup_call6_1st_window_t2

0x1667,	// (0x00065749) popup_call6_1st_window_t3

0x0002,

0xfdcf,	// (0x00073eb1) popup_call6_1st_window_t

0xec7e,	// (0x00072d60) bg_popup_call2_in_pane_cp04

0x1675,	// (0x00065757) popup_call6_2nd_window_g1

0x167d,	// (0x0006575f) popup_call6_2nd_window_g2

0x1685,	// (0x00065767) popup_call6_2nd_window_g3

0x0002,

0xfdd6,	// (0x00073eb8) popup_call6_2nd_window_g

0x168d,	// (0x0006576f) popup_call6_2nd_window_t1

0xe359,	// (0x0007243b) bg_button_pane_cp15

0x16cf,	// (0x000657b1) cell_call6_btn_pane_g1

0xbf06,	// (0x0006ffe8) cell_call6_btn_pane_t1

0xbf15,	// (0x0006fff7) listscroll_wgtman_pane_ParamLimits

0xbf15,	// (0x0006fff7) listscroll_wgtman_pane

0xbf31,	// (0x00070013) wgtman_btn_pane_ParamLimits

0xbf31,	// (0x00070013) wgtman_btn_pane

0x5cb9,	// (0x00069d9b) aid_scroll_copy1

0x169c,	// (0x0006577e) list_wgtman_pane

0xbf66,	// (0x00070048) wgtman_btn_pane_g1_ParamLimits

0xbf66,	// (0x00070048) wgtman_btn_pane_g1

0xbf8e,	// (0x00070070) wgtman_btn_pane_t1_ParamLimits

0xbf8e,	// (0x00070070) wgtman_btn_pane_t1

0x16a6,	// (0x00065788) wgtman_btn_pane_t2_ParamLimits

0x16a6,	// (0x00065788) wgtman_btn_pane_t2

0x0001,

0xfddd,	// (0x00073ebf) wgtman_btn_pane_t_ParamLimits

0xfddd,	// (0x00073ebf) wgtman_btn_pane_t

0xbfc5,	// (0x000700a7) listrow_wgtman_pane_ParamLimits

0xbfc5,	// (0x000700a7) listrow_wgtman_pane

0xbfe1,	// (0x000700c3) listrow_wgtman_pane_g1

0xbfee,	// (0x000700d0) listrow_wgtman_pane_g2

0x0001,

0xfde2,	// (0x00073ec4) listrow_wgtman_pane_g

0x35f0,	// (0x000676d2) listrow_wgtman_pane_t1

0x3608,	// (0x000676ea) listrow_wgtman_pane_t2

0x0001,

0xfde7,	// (0x00073ec9) listrow_wgtman_pane_t

0x362e,	// (0x00067710) wait_bar_pane_cp09

0x16bd,	// (0x0006579f) main_calllock_btn_pane

0x16c7,	// (0x000657a9) main_calllock_pane_g1

0xe359,	// (0x0007243b) bg_button_pane_cp17

0x16cf,	// (0x000657b1) main_calllock_btn_pane_g1

0x16d8,	// (0x000657ba) main_calllock_btn_pane_t1

0xe359,	// (0x0007243b) main_dialer3_pane

0xe359,	// (0x0007243b) main_fmrd2_pane

0xeca0,	// (0x00072d82) main_fs_bigclock_unlock_btn_pane_g1

0xc014,	// (0x000700f6) main_fs_bigclock_unlock_btn_pane_t1

0xc022,	// (0x00070104) area_fmrd2_info_pane_ParamLimits

0xc022,	// (0x00070104) area_fmrd2_info_pane

0xc030,	// (0x00070112) area_fmrd2_visual_pane_ParamLimits

0xc030,	// (0x00070112) area_fmrd2_visual_pane

0xc03e,	// (0x00070120) fmrd2_indi_pane_ParamLimits

0xc03e,	// (0x00070120) fmrd2_indi_pane

0xc04b,	// (0x0007012d) area_fmrd2_visual_pane_g1

0xc053,	// (0x00070135) area_fmrd2_visual_pane_t1

0xc063,	// (0x00070145) area_fmrd2_visual_pane_t2

0xc073,	// (0x00070155) area_fmrd2_visual_pane_t3

0x0002,

0xfdf1,	// (0x00073ed3) area_fmrd2_visual_pane_t

0xc083,	// (0x00070165) area_fmrd2_info_pane_g1

0xc08b,	// (0x0007016d) area_fmrd2_info_pane_t1

0xc09b,	// (0x0007017d) area_fmrd2_info_pane_t2

0xc0ab,	// (0x0007018d) area_fmrd2_info_pane_t3

0xc0bb,	// (0x0007019d) area_fmrd2_info_pane_t4

0x0003,

0xfdf8,	// (0x00073eda) area_fmrd2_info_pane_t

0xc0c9,	// (0x000701ab) fmrd2_indi_pane_t1

0xc0d9,	// (0x000701bb) fmrd2_indi_pane_t2

0xc0e9,	// (0x000701cb) fmrd2_indi_pane_t3

0x0002,

0xfe01,	// (0x00073ee3) fmrd2_indi_pane_t

0x0916,	// (0x000649f8) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x0916,	// (0x000649f8) list_single_fs_bigclock_indicator_pane_g5

0x09c7,	// (0x00064aa9) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x09c7,	// (0x00064aa9) list_single_fs_bigclock_indicator_pane_t5

0xb96f,	// (0x0006fa51) aid_cell_bcale_month_pane_ParamLimits

0xb96f,	// (0x0006fa51) aid_cell_bcale_month_pane

0xb98d,	// (0x0006fa6f) bcale_month_pane_ParamLimits

0xb98d,	// (0x0006fa6f) bcale_month_pane

0xb9ab,	// (0x0006fa8d) bcale_preview_pane_ParamLimits

0xb9ab,	// (0x0006fa8d) bcale_preview_pane

0x1458,	// (0x0006553a) list_single_fs_bigclock_pane_t1_ParamLimits

0x1477,	// (0x00065559) list_single_fs_bigclock_pane_t2_ParamLimits

0x1477,	// (0x00065559) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7c,	// (0x00073e5e) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7c,	// (0x00073e5e) list_single_fs_bigclock_pane_t

0xc00c,	// (0x000700ee) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdec,	// (0x00073ece) main_fs_bigclock_unlock_btn_pane_g

0xc0f7,	// (0x000701d9) aid_dia3_key_size_ParamLimits

0xc0f7,	// (0x000701d9) aid_dia3_key_size

0xc103,	// (0x000701e5) aid_dia3_listrow_size_ParamLimits

0xc103,	// (0x000701e5) aid_dia3_listrow_size

0xc113,	// (0x000701f5) dia3_keypad_fun_pane_ParamLimits

0xc113,	// (0x000701f5) dia3_keypad_fun_pane

0xc125,	// (0x00070207) dia3_keypad_num_pane_ParamLimits

0xc125,	// (0x00070207) dia3_keypad_num_pane

0xc137,	// (0x00070219) dia3_listscroll_pane_ParamLimits

0xc137,	// (0x00070219) dia3_listscroll_pane

0xc145,	// (0x00070227) dia3_numentry_pane_ParamLimits

0xc145,	// (0x00070227) dia3_numentry_pane

0x16e7,	// (0x000657c9) dia3_list_pane

0x16f2,	// (0x000657d4) scroll_pane_cp12

0xe359,	// (0x0007243b) bg_dia3_numentry_pane

0xc153,	// (0x00070235) dia3_numentry_pane_t1

0xc162,	// (0x00070244) cell_dia3_key_num_pane

0xc16a,	// (0x0007024c) cell_dia3_key0_fun_pane_ParamLimits

0xc16a,	// (0x0007024c) cell_dia3_key0_fun_pane

0xc177,	// (0x00070259) cell_dia3_key1_fun_pane_ParamLimits

0xc177,	// (0x00070259) cell_dia3_key1_fun_pane

0xc184,	// (0x00070266) dia3_listrow_pane

0x0669,	// (0x0006474b) bg_dia3_numentry_pane_g1

0xe359,	// (0x0007243b) bg_button_pane_cp21

0x16fd,	// (0x000657df) cell_dia3_key_num_pane_t1

0x170b,	// (0x000657ed) cell_dia3_key_num_pane_t2

0x171a,	// (0x000657fc) cell_dia3_key_num_pane_t3

0x1729,	// (0x0006580b) cell_dia3_key_num_pane_t4

0x0003,

0xfe08,	// (0x00073eea) cell_dia3_key_num_pane_t

0xe359,	// (0x0007243b) bg_button_pane_cp19

0xc191,	// (0x00070273) cell_dia3_key0_fun_pane_g1

0xe359,	// (0x0007243b) bg_button_pane_cp20

0xc199,	// (0x0007027b) cell_dia3_key1_fun_pane_g1

0xc1a1,	// (0x00070283) area_left_week_number_pane

0xc1b4,	// (0x00070296) area_top_day_name_pane

0xc1c2,	// (0x000702a4) frame_month_view_pane

0x1738,	// (0x0006581a) grid_month_view_pane

0xc1d7,	// (0x000702b9) cell_top_day_name_pane_ParamLimits

0xc1d7,	// (0x000702b9) cell_top_day_name_pane

0xc1f1,	// (0x000702d3) cell_area_left_week_number_pane_ParamLimits

0xc1f1,	// (0x000702d3) cell_area_left_week_number_pane

0xc214,	// (0x000702f6) cell_month_view_pane_ParamLimits

0xc214,	// (0x000702f6) cell_month_view_pane

0x1746,	// (0x00065828) frm_month_g1

0xc240,	// (0x00070322) frm_month_g2

0xc251,	// (0x00070333) frm_month_g3

0xc262,	// (0x00070344) frm_month_g4

0xc273,	// (0x00070355) frm_month_g5

0xc286,	// (0x00070368) frm_month_g6

0xc299,	// (0x0007037b) frm_month_g7

0x1753,	// (0x00065835) frm_month_g8

0xc2ac,	// (0x0007038e) frm_month_g9

0xc2b9,	// (0x0007039b) frm_month_g10

0xc2c6,	// (0x000703a8) frm_month_g11

0xc2d3,	// (0x000703b5) frm_month_g12

0xc2e0,	// (0x000703c2) frm_month_g13

0xc2ed,	// (0x000703cf) frm_month_g14

0xc2fc,	// (0x000703de) frm_month_g15

0xc30b,	// (0x000703ed) frm_month_g16

0x000f,

0xfe11,	// (0x00073ef3) frm_month_g

0x1760,	// (0x00065842) cell_top_day_name_pane_t1

0xc31a,	// (0x000703fc) cell_area_left_week_number_pane_g1

0xc329,	// (0x0007040b) cell_area_left_week_number_pane_t1

0xea5a,	// (0x00072b3c) cell_month_view_pane_g1

0xc33f,	// (0x00070421) cell_month_view_pane_t1

0xe359,	// (0x0007243b) main_fps_pane

0x0bf6,	// (0x00064cd8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x0bf6,	// (0x00064cd8) cmail_ddmenu_btn02_pane_cp1

0x0c12,	// (0x00064cf4) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x0c12,	// (0x00064cf4) cmail_ddmenu_btn02_pane_cp2

0xbb9c,	// (0x0006fc7e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xbb9c,	// (0x0006fc7e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd2f,	// (0x00073e11) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd2f,	// (0x00073e11) cmail_ddmenu_btn02_pane_g

0xbbba,	// (0x0006fc9c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xbbba,	// (0x0006fc9c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd34,	// (0x00073e16) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd34,	// (0x00073e16) cmail_ddmenu_btn02_pane_t

0xc355,	// (0x00070437) fps_text_pane_ParamLimits

0xc355,	// (0x00070437) fps_text_pane

0xc362,	// (0x00070444) main_fps_pane_g1_ParamLimits

0xc362,	// (0x00070444) main_fps_pane_g1

0xc370,	// (0x00070452) wait_bar_pane_cp010_ParamLimits

0xc370,	// (0x00070452) wait_bar_pane_cp010

0xc37c,	// (0x0007045e) fps_text_pane_t1_ParamLimits

0xc37c,	// (0x0007045e) fps_text_pane_t1

0x987c,	// (0x0006d95e) cam4_image_uncrop_pane_g1

0x9885,	// (0x0006d967) cam4_image_uncrop_pane_g2

0x988e,	// (0x0006d970) cam4_image_uncrop_pane_g3

0x9897,	// (0x0006d979) cam4_image_uncrop_pane_g4

0x0003,

0xf873,	// (0x00073955) cam4_image_uncrop_pane_g

0xc184,	// (0x00070266) dia3_listrow_pane_ParamLimits

0xe359,	// (0x0007243b) main_phob2_pane

0xb7a8,	// (0x0006f88a) cell_tport_appsw_pane_cp02_ParamLimits

0xb7a8,	// (0x0006f88a) cell_tport_appsw_pane_cp02

0xb7b7,	// (0x0006f899) cell_tport_appsw_pane_cp03_ParamLimits

0xb7b7,	// (0x0006f899) cell_tport_appsw_pane_cp03

0xe359,	// (0x0007243b) phob2_contact_card_pane

0xe359,	// (0x0007243b) phob2_listscroll_pane

0x1773,	// (0x00065855) phob2_list_pane

0x177b,	// (0x0006585d) scroll_pane_cp034

0xc395,	// (0x00070477) phob2_cc_data_pane_ParamLimits

0xc395,	// (0x00070477) phob2_cc_data_pane

0xc3af,	// (0x00070491) phob2_cc_listscroll_pane_ParamLimits

0xc3af,	// (0x00070491) phob2_cc_listscroll_pane

0xbfc5,	// (0x000700a7) list_double_large_graphic_phob2_pane_ParamLimits

0xbfc5,	// (0x000700a7) list_double_large_graphic_phob2_pane

0xc3c9,	// (0x000704ab) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xc3c9,	// (0x000704ab) list_double_large_graphic_phob2_pane_g1

0x3640,	// (0x00067722) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x3640,	// (0x00067722) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe32,	// (0x00073f14) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe32,	// (0x00073f14) list_double_large_graphic_phob2_pane_g

0x3658,	// (0x0006773a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x3658,	// (0x0006773a) list_double_large_graphic_phob2_pane_t1

0x366d,	// (0x0006774f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x366d,	// (0x0006774f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe3b,	// (0x00073f1d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe3b,	// (0x00073f1d) list_double_large_graphic_phob2_pane_t

0xe359,	// (0x0007243b) list_highlight_pane_cp024

0x1783,	// (0x00065865) phob2_cc_button_pane

0xc3e4,	// (0x000704c6) phob2_cc_data_pane_g1_ParamLimits

0xc3e4,	// (0x000704c6) phob2_cc_data_pane_g1

0xc3f3,	// (0x000704d5) phob2_cc_data_pane_g2_ParamLimits

0xc3f3,	// (0x000704d5) phob2_cc_data_pane_g2

0x0001,

0xfe40,	// (0x00073f22) phob2_cc_data_pane_g_ParamLimits

0xfe40,	// (0x00073f22) phob2_cc_data_pane_g

0xc402,	// (0x000704e4) phob2_cc_data_pane_t1_ParamLimits

0xc402,	// (0x000704e4) phob2_cc_data_pane_t1

0xc417,	// (0x000704f9) phob2_cc_data_pane_t2_ParamLimits

0xc417,	// (0x000704f9) phob2_cc_data_pane_t2

0xc42c,	// (0x0007050e) phob2_cc_data_pane_t3_ParamLimits

0xc42c,	// (0x0007050e) phob2_cc_data_pane_t3

0x0002,

0xfe45,	// (0x00073f27) phob2_cc_data_pane_t_ParamLimits

0xfe45,	// (0x00073f27) phob2_cc_data_pane_t

0x178b,	// (0x0006586d) phob2_cc_list_pane_ParamLimits

0x178b,	// (0x0006586d) phob2_cc_list_pane

0xe2f2,	// (0x000723d4) scroll_pane_cp035_ParamLimits

0xe2f2,	// (0x000723d4) scroll_pane_cp035

0xea01,	// (0x00072ae3) bg_button_pane_cp033

0x1797,	// (0x00065879) phob2_cc_button_pane_g1

0x17a3,	// (0x00065885) phob2_cc_button_pane_t1

0x17b8,	// (0x0006589a) phob2_cc_button_pane_t2

0x0001,

0xfe4c,	// (0x00073f2e) phob2_cc_button_pane_t

0xc441,	// (0x00070523) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc441,	// (0x00070523) list_double_large_graphic_phob2_cc_pane

0xc4b5,	// (0x00070597) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc4b5,	// (0x00070597) list_double_large_graphic_phob2_cc_pane_g1

0x3682,	// (0x00067764) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x3682,	// (0x00067764) list_double_large_graphic_phob2_cc_pane_g2

0x3691,	// (0x00067773) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x3691,	// (0x00067773) list_double_large_graphic_phob2_cc_pane_g3

0x36a0,	// (0x00067782) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x36a0,	// (0x00067782) list_double_large_graphic_phob2_cc_pane_g4

0x36b1,	// (0x00067793) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x36b1,	// (0x00067793) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe51,	// (0x00073f33) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe51,	// (0x00073f33) list_double_large_graphic_phob2_cc_pane_g

0x36c0,	// (0x000677a2) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x36c0,	// (0x000677a2) list_double_large_graphic_phob2_cc_pane_t1

0x36e9,	// (0x000677cb) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x36e9,	// (0x000677cb) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe5c,	// (0x00073f3e) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe5c,	// (0x00073f3e) list_double_large_graphic_phob2_cc_pane_t

0x17ca,	// (0x000658ac) list_highlight_pane_cp025_ParamLimits

0x17ca,	// (0x000658ac) list_highlight_pane_cp025

0xea01,	// (0x00072ae3) bg_button_pane_cp033_ParamLimits

0x1797,	// (0x00065879) phob2_cc_button_pane_g1_ParamLimits

0x17a3,	// (0x00065885) phob2_cc_button_pane_t1_ParamLimits

0x17b8,	// (0x0006589a) phob2_cc_button_pane_t2_ParamLimits

0xfe4c,	// (0x00073f2e) phob2_cc_button_pane_t_ParamLimits

0x3a04,	// (0x00067ae6) popup_wgtman_window

0xda20,	// (0x00071b02) scroll_pane_cp038

0xbf4e,	// (0x00070030) wgtman_btn_pane_cp_01_ParamLimits

0xbf4e,	// (0x00070030) wgtman_btn_pane_cp_01

0x17d8,	// (0x000658ba) wgtman_content_pane

0x17e1,	// (0x000658c3) wgtman_heading_pane

0xe359,	// (0x0007243b) bg_heading_pane_cp02

0x17ea,	// (0x000658cc) wgtman_heading_pane_g1

0x17f2,	// (0x000658d4) wgtman_heading_pane_t1

0x1800,	// (0x000658e2) scroll_pane_cp036

0x1808,	// (0x000658ea) wgtman_list_pane

0x0ab2,	// (0x00064b94) wgtman_list_pane_t1_ParamLimits

0x0ab2,	// (0x00064b94) wgtman_list_pane_t1

0x97db,	// (0x0006d8bd) cam4_grid_pane

0x2cf4,	// (0x00066dd6) bg_button_pane_cp015_ParamLimits

0xa49f,	// (0x0006e581) bg_button_pane_cp016_ParamLimits

0xa4ab,	// (0x0006e58d) bg_button_pane_cp017_ParamLimits

0xa4c6,	// (0x0006e5a8) popup_vitu2_query_window_g3_ParamLimits

0xa4c6,	// (0x0006e5a8) popup_vitu2_query_window_g3

0x2db3,	// (0x00066e95) popup_vitu2_query_window_t6_ParamLimits

0x2db3,	// (0x00066e95) popup_vitu2_query_window_t6

0x2dde,	// (0x00066ec0) popup_vitu2_query_window_t7_ParamLimits

0x2dde,	// (0x00066ec0) popup_vitu2_query_window_t7

0xe347,	// (0x00072429) cam4_grid_pane_g1

0xe350,	// (0x00072432) cam4_grid_pane_g2

0x1810,	// (0x000658f2) cam4_grid_pane_g3

0x1819,	// (0x000658fb) cam4_grid_pane_g4

0x0003,

0xfe61,	// (0x00073f43) cam4_grid_pane_g

0x456c,	// (0x0006864e) aid_placing_vt_slider_lsc_ParamLimits

0x48ac,	// (0x0006898e) vidtel_button_pane_ParamLimits

0x48ac,	// (0x0006898e) vidtel_button_pane

0xe359,	// (0x0007243b) bg_button_pane_cp034

0x1824,	// (0x00065906) vidtel_button_pane_g1

0x182c,	// (0x0006590e) vidtel_button_pane_t1

0xdb3e,	// (0x00071c20) aid_size_vtel_slider_touch

0xe2f2,	// (0x000723d4) scroll_pane_cp039

0xb12a,	// (0x0006f20c) ncim_query_button_pane_cp01_ParamLimits

0xb149,	// (0x0006f22b) ncimui_query_pane_g1_ParamLimits

0xea01,	// (0x00072ae3) input_focus_pane_cp012_ParamLimits

0x06af,	// (0x00064791) ncim_query_entry_pane_t1_ParamLimits

0xe2f2,	// (0x000723d4) scroll_pane_cp039_ParamLimits

0x5f56,	// (0x0006a038) navi_pane_bcale_mc_g1

0x5f5e,	// (0x0006a040) navi_pane_bcale_mc_t1

0x0c46,	// (0x00064d28) main_sp_fs_email_pane_g1

0x0c52,	// (0x00064d34) main_sp_fs_email_pane_g2

0x0001,

0xfc64,	// (0x00073d46) main_sp_fs_email_pane_g

0x10e3,	// (0x000651c5) list_single_cale_mrui_row_pane_g3_ParamLimits

0x10e3,	// (0x000651c5) list_single_cale_mrui_row_pane_g3

0x3548,	// (0x0006762a) list_single_recal_day_pane_g5_event_pane

0x355e,	// (0x00067640) list_single_recal_day_pane_g7

0x1842,	// (0x00065924) list_recal_day_event_pane_cp01

0x184b,	// (0x0006592d) list_recal_vselct_arw_lo_pane_cp01

0x1853,	// (0x00065935) list_recal_vselct_arw_up_pane_cp01

0x185b,	// (0x0006593d) list_recal_vselct_pane_cp01

0xdb4e,	// (0x00071c30) list_recal_day_event_pane_cp01_g1

0x3712,	// (0x000677f4) list_recal_day_event_pane_cp01_t1

0x3566,	// (0x00067648) list_single_recal_day_pane_t1_ParamLimits

0x3578,	// (0x0006765a) list_single_recal_day_pane_t2_ParamLimits

0xfd44,	// (0x00073e26) list_single_recal_day_pane_t_ParamLimits

0xe9df,	// (0x00072ac1) bg_notes_pane_ParamLimits

0xeaaa,	// (0x00072b8c) list_notes_pane_ParamLimits

0x3c27,	// (0x00067d09) scroll_pane_cp06_ParamLimits

0xeacc,	// (0x00072bae) main_notes_pane_ParamLimits

0xea01,	// (0x00072ae3) main_welc_pane

0xc4e7,	// (0x000705c9) main_welc_body_pane_ParamLimits

0xc4e7,	// (0x000705c9) main_welc_body_pane

0xc500,	// (0x000705e2) main_welc_opti_pane_ParamLimits

0xc500,	// (0x000705e2) main_welc_opti_pane

0xc55b,	// (0x0007063d) main_welc_pane_t1_ParamLimits

0xc55b,	// (0x0007063d) main_welc_pane_t1

0xc6e3,	// (0x000707c5) main_welc_body_row_pane_ParamLimits

0xc6e3,	// (0x000707c5) main_welc_body_row_pane

0xe9c9,	// (0x00072aab) main_welc_opti_row_pane_ParamLimits

0xe9c9,	// (0x00072aab) main_welc_opti_row_pane

0x1883,	// (0x00065965) main_welc_opti_row_pane_g1

0xc70c,	// (0x000707ee) main_welc_opti_row_pane_t1

0x188b,	// (0x0006596d) main_welc_body_row_pane_t1

0x1572,	// (0x00065654) popup_notif_wgt_heading_pane

0x158c,	// (0x0006566e) aid_size_list_notif_wgt_del_ParamLimits

0x1599,	// (0x0006567b) list_notif_wgt_row_pane_g1_ParamLimits

0x15a5,	// (0x00065687) list_notif_wgt_row_pane_g2_ParamLimits

0x15b4,	// (0x00065696) list_notif_wgt_row_pane_g3_ParamLimits

0xfdab,	// (0x00073e8d) list_notif_wgt_row_pane_g_ParamLimits

0x15c1,	// (0x000656a3) list_notif_wgt_row_pane_t1_ParamLimits

0x15d7,	// (0x000656b9) list_notif_wgt_row_pane_t2_ParamLimits

0x15e9,	// (0x000656cb) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb2,	// (0x00073e94) list_notif_wgt_row_pane_t_ParamLimits

0xbfe1,	// (0x000700c3) listrow_wgtman_pane_g1_ParamLimits

0xbfee,	// (0x000700d0) listrow_wgtman_pane_g2_ParamLimits

0xfde2,	// (0x00073ec4) listrow_wgtman_pane_g_ParamLimits

0x35f0,	// (0x000676d2) listrow_wgtman_pane_t1_ParamLimits

0x3608,	// (0x000676ea) listrow_wgtman_pane_t2_ParamLimits

0xfde7,	// (0x00073ec9) listrow_wgtman_pane_t_ParamLimits

0x362e,	// (0x00067710) wait_bar_pane_cp09_ParamLimits

0xe359,	// (0x0007243b) bg_popup_heading_pane_cp02

0x189a,	// (0x0006597c) popup_notif_wgt_heading_pane_g1

0x18a2,	// (0x00065984) popup_notif_wgt_heading_pane_t1

0xe359,	// (0x0007243b) main_vids_pane

0xe359,	// (0x0007243b) vids_listscroll_pane

0xc71b,	// (0x000707fd) scroll_pane_cp040

0xe359,	// (0x0007243b) vids_list_pane

0xc726,	// (0x00070808) vids_list_double_pane_ParamLimits

0xc726,	// (0x00070808) vids_list_double_pane

0xc73e,	// (0x00070820) vids_list_double_pane_g1

0xc747,	// (0x00070829) vids_list_double_pane_t1

0xc757,	// (0x00070839) vids_list_double_pane_t2

0x0001,

0xfe80,	// (0x00073f62) vids_list_double_pane_t

0xea01,	// (0x00072ae3) main_ncimui_pane_ParamLimits

0xaf81,	// (0x0006f063) main_ncimui_pane_g1_ParamLimits

0xaf8d,	// (0x0006f06f) main_ncimui_pane_g2_ParamLimits

0xaf8d,	// (0x0006f06f) main_ncimui_pane_g2

0x0001,

0xfb65,	// (0x00073c47) main_ncimui_pane_g_ParamLimits

0xfb65,	// (0x00073c47) main_ncimui_pane_g

0xc519,	// (0x000705fb) main_welc_pane_g1_ParamLimits

0xc519,	// (0x000705fb) main_welc_pane_g1

0xc525,	// (0x00070607) main_welc_pane_g2_ParamLimits

0xc525,	// (0x00070607) main_welc_pane_g2

0x0003,

0xfe6a,	// (0x00073f4c) main_welc_pane_g_ParamLimits

0xfe6a,	// (0x00073f4c) main_welc_pane_g

0x3c09,	// (0x00067ceb) listscroll_mce_pane_ParamLimits

0x60d7,	// (0x0006a1b9) wait_bar_pane_cp10

0x7ea6,	// (0x0006bf88) main_cale_day_pane_ParamLimits

0x7ea6,	// (0x0006bf88) main_cale_week_pane_ParamLimits

0xe9df,	// (0x00072ac1) main_messa_pane_ParamLimits

0x8c2a,	// (0x0006cd0c) main_clock2_btn_pane_ParamLimits

0x8c2a,	// (0x0006cd0c) main_clock2_btn_pane

0xd417,	// (0x000714f9) main_clock2_btn_pane_cp01_ParamLimits

0xd417,	// (0x000714f9) main_clock2_btn_pane_cp01

0x106f,	// (0x00065151) list_cale_mrui_pane_ParamLimits

0x161f,	// (0x00065701) main_cf0_pane_g2

0x0001,

0xfdb9,	// (0x00073e9b) main_cf0_pane_g

0xc1a1,	// (0x00070283) area_left_week_number_pane_ParamLimits

0xc1b4,	// (0x00070296) area_top_day_name_pane_ParamLimits

0xc1c2,	// (0x000702a4) frame_month_view_pane_ParamLimits

0x1738,	// (0x0006581a) grid_month_view_pane_ParamLimits

0x1746,	// (0x00065828) frm_month_g1_ParamLimits

0xc240,	// (0x00070322) frm_month_g2_ParamLimits

0xc251,	// (0x00070333) frm_month_g3_ParamLimits

0xc262,	// (0x00070344) frm_month_g4_ParamLimits

0xc273,	// (0x00070355) frm_month_g5_ParamLimits

0xc286,	// (0x00070368) frm_month_g6_ParamLimits

0xc299,	// (0x0007037b) frm_month_g7_ParamLimits

0x1753,	// (0x00065835) frm_month_g8_ParamLimits

0xc2ac,	// (0x0007038e) frm_month_g9_ParamLimits

0xc2b9,	// (0x0007039b) frm_month_g10_ParamLimits

0xc2c6,	// (0x000703a8) frm_month_g11_ParamLimits

0xc2d3,	// (0x000703b5) frm_month_g12_ParamLimits

0xc2e0,	// (0x000703c2) frm_month_g13_ParamLimits

0xc2ed,	// (0x000703cf) frm_month_g14_ParamLimits

0xc2fc,	// (0x000703de) frm_month_g15_ParamLimits

0xc30b,	// (0x000703ed) frm_month_g16_ParamLimits

0xfe11,	// (0x00073ef3) frm_month_g_ParamLimits

0x1760,	// (0x00065842) cell_top_day_name_pane_t1_ParamLimits

0xc31a,	// (0x000703fc) cell_area_left_week_number_pane_g1_ParamLimits

0xc329,	// (0x0007040b) cell_area_left_week_number_pane_t1_ParamLimits

0xea5a,	// (0x00072b3c) cell_month_view_pane_g1_ParamLimits

0xc33f,	// (0x00070421) cell_month_view_pane_t1_ParamLimits

0xe9d7,	// (0x00072ab9) main_clock2_btn_pane_g1

0x18b0,	// (0x00065992) main_clock2_btn_pane_t1

0xea01,	// (0x00072ae3) listscroll_cmail_pane_ParamLimits

0x0c46,	// (0x00064d28) main_sp_fs_email_pane_g1_ParamLimits

0x0c52,	// (0x00064d34) main_sp_fs_email_pane_g2_ParamLimits

0xfc64,	// (0x00073d46) main_sp_fs_email_pane_g_ParamLimits

0x1232,	// (0x00065314) list_recal_day_pane_ParamLimits

0x1243,	// (0x00065325) mian_recal_day_pane_t1

0x314b,	// (0x0006722d) list_single_dyc_row_text_pane_t4_ParamLimits

0x314b,	// (0x0006722d) list_single_dyc_row_text_pane_t4

0x3182,	// (0x00067264) list_single_dyc_row_text_pane_t5_ParamLimits

0x3182,	// (0x00067264) list_single_dyc_row_text_pane_t5

0x31f8,	// (0x000672da) list_single_dyc_row_text_pane_t6_ParamLimits

0x31f8,	// (0x000672da) list_single_dyc_row_text_pane_t6

0x56e1,	// (0x000697c3) aid_mgn_list_cale_time_pane

0xea01,	// (0x00072ae3) main_gallery2_pane_ParamLimits

0xd42d,	// (0x0007150f) main_clock2_pane_cp01_t1

0xd43b,	// (0x0007151d) main_clock2_pane_cp01_t3

0x0001,

0xf74a,	// (0x0007382c) main_clock2_pane_cp01_t

0x407c,	// (0x0006815e) cale_week_scroll_pane_g16_ParamLimits

0x407c,	// (0x0006815e) cale_week_scroll_pane_g16

0xec7e,	// (0x00072d60) vorec_slider_pane

0x182c,	// (0x0006590e) vidtel_button_pane_t1_ParamLimits

0xbc1d,	// (0x0006fcff) main_fs_bigclock_clock_pane_g1_ParamLimits

0xbc1d,	// (0x0006fcff) main_fs_bigclock_clock_pane_g2_ParamLimits

0xbc2a,	// (0x0006fd0c) main_fs_bigclock_clock_pane_g3_ParamLimits

0xbc2a,	// (0x0006fd0c) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd67,	// (0x00073e49) main_fs_bigclock_clock_pane_g_ParamLimits

0xbc36,	// (0x0006fd18) main_fs_bigclock_clock_pane_t1_ParamLimits

0xbc49,	// (0x0006fd2b) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd70,	// (0x00073e52) main_fs_bigclock_clock_pane_t_ParamLimits

0x85cf,	// (0x0006c6b1) main_mup3_lyrics_pane_ParamLimits

0x85cf,	// (0x0006c6b1) main_mup3_lyrics_pane

0xc78b,	// (0x0007086d) main_mup3_lyrics_pane_t1_ParamLimits

0xc78b,	// (0x0007086d) main_mup3_lyrics_pane_t1

0x915e,	// (0x0006d240) aid_main_mp4_pane_t1_area

0x9168,	// (0x0006d24a) aid_main_mp4_pane_t2_area

0x9267,	// (0x0006d349) main_mp4_pane_g7_ParamLimits

0x9267,	// (0x0006d349) main_mp4_pane_g7

0x9273,	// (0x0006d355) main_mp4_pane_g8_ParamLimits

0x9273,	// (0x0006d355) main_mp4_pane_g8

0x9685,	// (0x0006d767) aid_call6_pane_g1_size

0xc487,	// (0x00070569) list_double_large_graphic_phob2_other_pane_ParamLimits

0xc487,	// (0x00070569) list_double_large_graphic_phob2_other_pane

0xf027,	// (0x00073109) list_double_large_graphic_phob2_other_pane_g1

0xe359,	// (0x0007243b) list_highlight_pane_cp026

0xea01,	// (0x00072ae3) main_welc_pane_ParamLimits

0xb6af,	// (0x0006f791) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xb6af,	// (0x0006f791) main_sp_fs_ctrlbar_pane_g3

0xb6c7,	// (0x0006f7a9) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xb6c7,	// (0x0006f7a9) main_sp_fs_ctrlbar_pane_g4

0xb6f9,	// (0x0006f7db) toolbar2_fixed_button_pane_cp01

0xb704,	// (0x0006f7e6) toolbar2_fixed_button_pane_cp02

0xb70f,	// (0x0006f7f1) toolbar2_fixed_button_pane_cp03

0xc4d8,	// (0x000705ba) list_welc_entry_pane_ParamLimits

0xc4d8,	// (0x000705ba) list_welc_entry_pane

0xc533,	// (0x00070615) main_welc_pane_g3_ParamLimits

0xc533,	// (0x00070615) main_welc_pane_g3

0xc575,	// (0x00070657) main_welc_pane_t2_ParamLimits

0xc575,	// (0x00070657) main_welc_pane_t2

0xc589,	// (0x0007066b) main_welc_pane_t3_ParamLimits

0xc589,	// (0x0007066b) main_welc_pane_t3

0x0005,

0xfe73,	// (0x00073f55) main_welc_pane_t_ParamLimits

0xfe73,	// (0x00073f55) main_welc_pane_t

0xc685,	// (0x00070767) welc_button_pane_ParamLimits

0xc685,	// (0x00070767) welc_button_pane

0xc6d5,	// (0x000707b7) welc_service_logo_pane_ParamLimits

0xc6d5,	// (0x000707b7) welc_service_logo_pane

0xc7c1,	// (0x000708a3) list_single_welc_entry_pane_ParamLimits

0xc7c1,	// (0x000708a3) list_single_welc_entry_pane

0xc7d2,	// (0x000708b4) list_single_welc_entry_pane_g1

0xc7da,	// (0x000708bc) list_single_welc_entry_pane_t1

0xc7e8,	// (0x000708ca) list_single_welc_entry_pane_t2

0x0001,

0xfe85,	// (0x00073f67) list_single_welc_entry_pane_t

0xe359,	// (0x0007243b) bg_button_pane_cp035

0x18be,	// (0x000659a0) welc_button_pane_t1

0x18cc,	// (0x000659ae) welc_service_logo_pane_g1

0x18d5,	// (0x000659b7) welc_service_logo_pane_g2

0x0001,

0xfe8a,	// (0x00073f6c) welc_service_logo_pane_g

0xe359,	// (0x0007243b) main_int_radio_pane

0xe2e9,	// (0x000723cb) list_single_fs_dyc_pane_g1

0x364c,	// (0x0006772e) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x364c,	// (0x0006772e) list_double_large_graphic_phob2_pane_g3

0xc3d6,	// (0x000704b8) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xc3d6,	// (0x000704b8) list_double_large_graphic_phob2_pane_g4

0xc7f6,	// (0x000708d8) main_int_radio1_pane_ParamLimits

0xc7f6,	// (0x000708d8) main_int_radio1_pane

0x18de,	// (0x000659c0) find_pane_cp02

0xc808,	// (0x000708ea) input_focus_pane_cp12_ParamLimits

0xc808,	// (0x000708ea) input_focus_pane_cp12

0xc814,	// (0x000708f6) input_focus_pane_cp13_ParamLimits

0xc814,	// (0x000708f6) input_focus_pane_cp13

0xc82c,	// (0x0007090e) input_focus_pane_cp14_ParamLimits

0xc82c,	// (0x0007090e) input_focus_pane_cp14

0x18e7,	// (0x000659c9) int_radio1_listscroll_pane

0xc844,	// (0x00070926) main_int_radio1_pane_g1_ParamLimits

0xc844,	// (0x00070926) main_int_radio1_pane_g1

0xc854,	// (0x00070936) main_int_radio1_pane_t1_ParamLimits

0xc854,	// (0x00070936) main_int_radio1_pane_t1

0xc868,	// (0x0007094a) main_int_radio1_pane_t2_ParamLimits

0xc868,	// (0x0007094a) main_int_radio1_pane_t2

0xc87c,	// (0x0007095e) main_int_radio1_pane_t3_ParamLimits

0xc87c,	// (0x0007095e) main_int_radio1_pane_t3

0xc890,	// (0x00070972) main_int_radio1_pane_t4_ParamLimits

0xc890,	// (0x00070972) main_int_radio1_pane_t4

0x18f1,	// (0x000659d3) main_int_radio1_pane_t5_ParamLimits

0x18f1,	// (0x000659d3) main_int_radio1_pane_t5

0xc8a7,	// (0x00070989) main_int_radio1_pane_t6_ParamLimits

0xc8a7,	// (0x00070989) main_int_radio1_pane_t6

0xc8b9,	// (0x0007099b) main_int_radio1_pane_t7_ParamLimits

0xc8b9,	// (0x0007099b) main_int_radio1_pane_t7

0xc8cb,	// (0x000709ad) main_int_radio1_pane_t8_ParamLimits

0xc8cb,	// (0x000709ad) main_int_radio1_pane_t8

0xc8df,	// (0x000709c1) main_int_radio1_pane_t9_ParamLimits

0xc8df,	// (0x000709c1) main_int_radio1_pane_t9

0xc8f1,	// (0x000709d3) main_int_radio1_pane_t10_ParamLimits

0xc8f1,	// (0x000709d3) main_int_radio1_pane_t10

0xc922,	// (0x00070a04) main_int_radio1_pane_t11_ParamLimits

0xc922,	// (0x00070a04) main_int_radio1_pane_t11

0xc953,	// (0x00070a35) main_int_radio1_pane_t12_ParamLimits

0xc953,	// (0x00070a35) main_int_radio1_pane_t12

0x000b,

0xfe8f,	// (0x00073f71) main_int_radio1_pane_t_ParamLimits

0xfe8f,	// (0x00073f71) main_int_radio1_pane_t

0x1903,	// (0x000659e5) int_radio_list_pane

0x177b,	// (0x0006585d) scroll_pane_cp037

0x190b,	// (0x000659ed) list_double_large_graphic_int_radio_pane_ParamLimits

0x190b,	// (0x000659ed) list_double_large_graphic_int_radio_pane

0x1924,	// (0x00065a06) list_double_large_graphic_int_radio_pane_g1

0x3720,	// (0x00067802) list_double_large_graphic_int_radio_pane_t1

0x372e,	// (0x00067810) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfea8,	// (0x00073f8a) list_double_large_graphic_int_radio_pane_t

0xe359,	// (0x0007243b) list_highlight_pane_cp027

0x1873,	// (0x00065955) main_button_pane_4

0xc53f,	// (0x00070621) main_welc_pane_g4_ParamLimits

0xc53f,	// (0x00070621) main_welc_pane_g4

0xc59b,	// (0x0007067d) main_welc_pane_t4_ParamLimits

0xc59b,	// (0x0007067d) main_welc_pane_t4

0xc5ad,	// (0x0007068f) main_welc_pane_t5_ParamLimits

0xc5ad,	// (0x0007068f) main_welc_pane_t5

0xc5dd,	// (0x000706bf) main_welc_pane_t6_ParamLimits

0xc5dd,	// (0x000706bf) main_welc_pane_t6

0xc693,	// (0x00070775) welc_button_pane_2_ParamLimits

0xc693,	// (0x00070775) welc_button_pane_2

0xc6ab,	// (0x0007078d) welc_button_pane_3_ParamLimits

0xc6ab,	// (0x0007078d) welc_button_pane_3

0x187b,	// (0x0006595d) welc_button_pane_4

0xc6c5,	// (0x000707a7) welc_button_pane_5_ParamLimits

0xc6c5,	// (0x000707a7) welc_button_pane_5

0x3790,	// (0x00067872) main_popup_welc_pane

0x1958,	// (0x00065a3a) main_welc_sk_g3

0x1962,	// (0x00065a44) main_welc_sk_g4

0x196c,	// (0x00065a4e) main_welc_sk_t3

0x197c,	// (0x00065a5e) main_welc_sk_t4

0x198c,	// (0x00065a6e) popup_welc_pane_t4

0x199a,	// (0x00065a7c) popup_welc_pane_t5

0x19aa,	// (0x00065a8c) popup_welc_pane_t6

0xe359,	// (0x0007243b) main_acti_pane

0xe359,	// (0x0007243b) main_sso_pane

0xc96a,	// (0x00070a4c) sso_body_pane_ParamLimits

0xc96a,	// (0x00070a4c) sso_body_pane

0xc978,	// (0x00070a5a) sso_logo_pane_ParamLimits

0xc978,	// (0x00070a5a) sso_logo_pane

0xc99f,	// (0x00070a81) sso_sk_pane_ParamLimits

0xc99f,	// (0x00070a81) sso_sk_pane

0xeca0,	// (0x00072d82) main_sso_logo_pane_g1

0xc9ac,	// (0x00070a8e) sso_sk_pane_t1_ParamLimits

0xc9ac,	// (0x00070a8e) sso_sk_pane_t1

0xc9c0,	// (0x00070aa2) sso_sk_pane_t2_ParamLimits

0xc9c0,	// (0x00070aa2) sso_sk_pane_t2

0x0001,

0xfead,	// (0x00073f8f) sso_sk_pane_t_ParamLimits

0xfead,	// (0x00073f8f) sso_sk_pane_t

0x19e8,	// (0x00065aca) aid_sso_gap

0x19f1,	// (0x00065ad3) aid_sso_txt1

0x19fb,	// (0x00065add) aid_sso_txt2

0x1a05,	// (0x00065ae7) aid_sso_txt3

0x0002,

0xfeb2,	// (0x00073f94) aid_sso_txt

0x1a0f,	// (0x00065af1) aid_sso_widget

0xca1f,	// (0x00070b01) sso_btn_pane_ParamLimits

0xca1f,	// (0x00070b01) sso_btn_pane

0xca98,	// (0x00070b7a) sso_option_pane_ParamLimits

0xca98,	// (0x00070b7a) sso_option_pane

0xcb12,	// (0x00070bf4) sso_query_pane_ParamLimits

0xcb12,	// (0x00070bf4) sso_query_pane

0xcb62,	// (0x00070c44) sso_query_pane_cp01_ParamLimits

0xcb62,	// (0x00070c44) sso_query_pane_cp01

0xcbb4,	// (0x00070c96) sso_t_hdr_pane_ParamLimits

0xcbb4,	// (0x00070c96) sso_t_hdr_pane

0xcbd3,	// (0x00070cb5) sso_t_nml_pane_ParamLimits

0xcbd3,	// (0x00070cb5) sso_t_nml_pane

0x1a05,	// (0x00065ae7) sso_t_sub_pane

0xc985,	// (0x00070a67) sso_popup_window_ParamLimits

0xc985,	// (0x00070a67) sso_popup_window

0xc9d2,	// (0x00070ab4) sso_apps_pane_ParamLimits

0xc9d2,	// (0x00070ab4) sso_apps_pane

0xc9f5,	// (0x00070ad7) sso_body_pane_g1

0xc9ff,	// (0x00070ae1) sso_body_pane_t1

0xca0f,	// (0x00070af1) sso_body_pane_t2

0x0001,

0xfeb9,	// (0x00073f9b) sso_body_pane_t

0xca6a,	// (0x00070b4c) sso_btn_pane_cp01_ParamLimits

0xca6a,	// (0x00070b4c) sso_btn_pane_cp01

0xcae4,	// (0x00070bc6) sso_prog_pane_ParamLimits

0xcae4,	// (0x00070bc6) sso_prog_pane

0x1a19,	// (0x00065afb) sso_t_hdr_pane_t1_ParamLimits

0x1a19,	// (0x00065afb) sso_t_hdr_pane_t1

0x1a2c,	// (0x00065b0e) input_focus_pane_cp10_ParamLimits

0x1a2c,	// (0x00065b0e) input_focus_pane_cp10

0x1a42,	// (0x00065b24) sso_query_pane_t1_ParamLimits

0x1a42,	// (0x00065b24) sso_query_pane_t1

0x1a55,	// (0x00065b37) sso_query_pane_t2_ParamLimits

0x1a55,	// (0x00065b37) sso_query_pane_t2

0x1a6e,	// (0x00065b50) sso_query_pane_t3_ParamLimits

0x1a6e,	// (0x00065b50) sso_query_pane_t3

0x1a98,	// (0x00065b7a) sso_query_pane_t4_ParamLimits

0x1a98,	// (0x00065b7a) sso_query_pane_t4

0x0003,

0xfebe,	// (0x00073fa0) sso_query_pane_t_ParamLimits

0xfebe,	// (0x00073fa0) sso_query_pane_t

0xe359,	// (0x0007243b) bg_button_pane_cp22

0x1949,	// (0x00065a2b) sso_btn_pane_t1

0xcc23,	// (0x00070d05) sso_t_nml_pane_t1_ParamLimits

0xcc23,	// (0x00070d05) sso_t_nml_pane_t1

0x1b4d,	// (0x00065c2f) sso_option_row_pane_ParamLimits

0x1b4d,	// (0x00065c2f) sso_option_row_pane

0x1b5a,	// (0x00065c3c) sso_t_sub_pane_t1_ParamLimits

0x1b5a,	// (0x00065c3c) sso_t_sub_pane_t1

0xea01,	// (0x00072ae3) bg_popup_window_pane_cp11_ParamLimits

0xea01,	// (0x00072ae3) bg_popup_window_pane_cp11

0x1b6d,	// (0x00065c4f) popup_sk_window_cp01_ParamLimits

0x1b6d,	// (0x00065c4f) popup_sk_window_cp01

0x1b7a,	// (0x00065c5c) sso_popup_body_pane_ParamLimits

0x1b7a,	// (0x00065c5c) sso_popup_body_pane

0x1b87,	// (0x00065c69) scroll_pane_cp21_ParamLimits

0x1b87,	// (0x00065c69) scroll_pane_cp21

0x1b94,	// (0x00065c76) sso_popup_body_t_pane_ParamLimits

0x1b94,	// (0x00065c76) sso_popup_body_t_pane

0x1ba1,	// (0x00065c83) sso_popup_body_t_hdr_pane_ParamLimits

0x1ba1,	// (0x00065c83) sso_popup_body_t_hdr_pane

0x1baf,	// (0x00065c91) sso_popup_body_t_nml_pane_ParamLimits

0x1baf,	// (0x00065c91) sso_popup_body_t_nml_pane

0x1bca,	// (0x00065cac) sso_popup_body_t_sub_pane_ParamLimits

0x1bca,	// (0x00065cac) sso_popup_body_t_sub_pane

0x1bed,	// (0x00065ccf) sso_popup_body_t_hdr_pane_t1

0xcc40,	// (0x00070d22) sso_popup_body_t_nml_pane_t1_ParamLimits

0xcc40,	// (0x00070d22) sso_popup_body_t_nml_pane_t1

0xcc84,	// (0x00070d66) sso_popup_body_t_sub_pane_t1_ParamLimits

0xcc84,	// (0x00070d66) sso_popup_body_t_sub_pane_t1

0xeca0,	// (0x00072d82) sso_prog_pane_g1

0xcca9,	// (0x00070d8b) sso_apps_pane_comp1_ParamLimits

0xcca9,	// (0x00070d8b) sso_apps_pane_comp1

0xccc5,	// (0x00070da7) sso_apps_pane_comp1_g1

0xcccd,	// (0x00070daf) sso_apps_pane_comp1_t1

0xccdb,	// (0x00070dbd) sso_option_row_pane_g1

0xcce3,	// (0x00070dc5) sso_option_row_pane_t1

0xc4c6,	// (0x000705a8) bg_welc_area_ParamLimits

0xc4c6,	// (0x000705a8) bg_welc_area

0xc613,	// (0x000706f5) sso_t_hdr_pane_a_t1_ParamLimits

0xc613,	// (0x000706f5) sso_t_hdr_pane_a_t1

0xc627,	// (0x00070709) sso_t_nml_pane_a_t1_ParamLimits

0xc627,	// (0x00070709) sso_t_nml_pane_a_t1

0xc651,	// (0x00070733) sso_t_sub_pane_a_t1_ParamLimits

0xc651,	// (0x00070733) sso_t_sub_pane_a_t1

0x1949,	// (0x00065a2b) sso_btn_pane_t1_copy1

0xe359,	// (0x0007243b) welc_button_pane_2_comp1

0x19b8,	// (0x00065a9a) sso_t_hdr_pane_p_t1

0x19c8,	// (0x00065aaa) sso_t_nml_pane_p_t1

0x19d8,	// (0x00065aba) sso_t_sub_pane_p_t1
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
