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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00070c75 };

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
0x3aa8,	// (0x0007471d) Screen

0x3ab4,	// (0x00074729) application_window

0x3af0,	// (0x00074765) area_bottom_pane_ParamLimits

0x3af0,	// (0x00074765) area_bottom_pane

0x3b29,	// (0x0007479e) area_top_pane_ParamLimits

0x3b29,	// (0x0007479e) area_top_pane

0xc3b3,	// (0x0007d028) call_video_uplink_pane_ParamLimits

0xc3b3,	// (0x0007d028) call_video_uplink_pane

0x3bb7,	// (0x0007482c) main_pane_ParamLimits

0x3bb7,	// (0x0007482c) main_pane

0xdfef,	// (0x0007ec64) context_pane

0x67e9,	// (0x0007745e) navi_pane

0x681b,	// (0x00077490) popup_cale_events_window_ParamLimits

0x681b,	// (0x00077490) popup_cale_events_window

0xe002,	// (0x0007ec77) popup_mup_playback_window

0x6833,	// (0x000774a8) signal_pane

0x1f39,	// (0x00072bae) main_browser_pane

0x20eb,	// (0x00072d60) main_burst_pane

0x6551,	// (0x000771c6) main_calc_pane

0xdf8f,	// (0x0007ec04) main_cale_day_pane

0x40c7,	// (0x00074d3c) main_cale_month_pane

0xdf8f,	// (0x0007ec04) main_cale_week_pane

0x20eb,	// (0x00072d60) main_call_pane

0x1be3,	// (0x00072858) main_call_poc_pane

0x20eb,	// (0x00072d60) main_camera_pane

0x20eb,	// (0x00072d60) main_chi_dic_pane

0xc904,	// (0x0007d579) main_clock_pane

0x1be3,	// (0x00072858) main_fmradio_pane

0x20eb,	// (0x00072d60) main_graph_messa_pane

0x1be3,	// (0x00072858) main_help_pane

0x1f39,	// (0x00072bae) main_im_pane

0x1e4c,	// (0x00072ac1) main_image_pane_ParamLimits

0x1e4c,	// (0x00072ac1) main_image_pane

0x1be3,	// (0x00072858) main_location2_pane

0x20eb,	// (0x00072d60) main_location_pane

0x1e4c,	// (0x00072ac1) main_messa_pane

0x1be3,	// (0x00072858) main_mp2_pane

0x20eb,	// (0x00072d60) main_mp_pane

0x1be3,	// (0x00072858) main_msg_pane

0x1be3,	// (0x00072858) main_mup_eq_pane

0x1be3,	// (0x00072858) main_mup_pane

0x1f39,	// (0x00072bae) main_notes_pane

0x1be3,	// (0x00072858) main_pec_pane

0x1be3,	// (0x00072858) main_phob_pane

0x1be3,	// (0x00072858) main_pinb_pane

0x1be3,	// (0x00072858) main_postcard_pane

0x1be3,	// (0x00072858) main_qdial_pane

0x20eb,	// (0x00072d60) main_skin_pane

0x1be3,	// (0x00072858) main_smil2_pane

0x20eb,	// (0x00072d60) main_smil_pane

0x20eb,	// (0x00072d60) main_video_pane

0x20eb,	// (0x00072d60) main_video_tele_pane

0x1e4c,	// (0x00072ac1) main_viewer_pane_ParamLimits

0x1e4c,	// (0x00072ac1) main_viewer_pane

0x20eb,	// (0x00072d60) main_vorec_pane

0x65a5,	// (0x0007721a) popup_blid_sat_info_window_ParamLimits

0x65a5,	// (0x0007721a) popup_blid_sat_info_window

0x65fd,	// (0x00077272) popup_dyc_status_message_window_ParamLimits

0x65fd,	// (0x00077272) popup_dyc_status_message_window

0x6615,	// (0x0007728a) popup_grid_large_graphic_window_ParamLimits

0x6615,	// (0x0007728a) popup_grid_large_graphic_window

0x66c5,	// (0x0007733a) popup_loc_request_window_ParamLimits

0x66c5,	// (0x0007733a) popup_loc_request_window

0x67c1,	// (0x00077436) popup_wml_address_window_ParamLimits

0x67c1,	// (0x00077436) popup_wml_address_window

0x638b,	// (0x00077000) call_muted_g1

0x5ffe,	// (0x00076c73) popup_call_audio_conf_window_ParamLimits

0x5ffe,	// (0x00076c73) popup_call_audio_conf_window

0x639f,	// (0x00077014) popup_call_audio_first_window_ParamLimits

0x639f,	// (0x00077014) popup_call_audio_first_window

0x6415,	// (0x0007708a) popup_call_audio_in_window_ParamLimits

0x6415,	// (0x0007708a) popup_call_audio_in_window

0x6451,	// (0x000770c6) popup_call_audio_out_window_ParamLimits

0x6451,	// (0x000770c6) popup_call_audio_out_window

0x648b,	// (0x00077100) popup_call_audio_second_window_ParamLimits

0x648b,	// (0x00077100) popup_call_audio_second_window

0x64e1,	// (0x00077156) popup_call_audio_wait_window_ParamLimits

0x64e1,	// (0x00077156) popup_call_audio_wait_window

0x6516,	// (0x0007718b) popup_number_entry_window_ParamLimits

0x6516,	// (0x0007718b) popup_number_entry_window

0x17d0,	// (0x00072445) bg_popup_call_pane_cp05_ParamLimits

0x17d0,	// (0x00072445) bg_popup_call_pane_cp05

0x17f0,	// (0x00072465) popup_number_entry_window_t1

0x1803,	// (0x00072478) popup_number_entry_window_t2

0x1815,	// (0x0007248a) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x0007fce0) popup_number_entry_window_t

0x1827,	// (0x0007249c) text_title_cp2

0x183a,	// (0x000724af) bg_popup_call_pane_cp_ParamLimits

0x183a,	// (0x000724af) bg_popup_call_pane_cp

0x1848,	// (0x000724bd) call_thumbnail_pane

0x1850,	// (0x000724c5) popup_call_audio_in_window_g1_ParamLimits

0x1850,	// (0x000724c5) popup_call_audio_in_window_g1

0x185c,	// (0x000724d1) popup_call_audio_in_window_g2_ParamLimits

0x185c,	// (0x000724d1) popup_call_audio_in_window_g2

0x1868,	// (0x000724dd) popup_call_audio_in_window_g3_ParamLimits

0x1868,	// (0x000724dd) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x0007fce9) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x0007fce9) popup_call_audio_in_window_g

0x1874,	// (0x000724e9) popup_call_audio_in_window_t1_ParamLimits

0x1874,	// (0x000724e9) popup_call_audio_in_window_t1

0x1890,	// (0x00072505) popup_call_audio_in_window_t2_ParamLimits

0x1890,	// (0x00072505) popup_call_audio_in_window_t2

0x18ac,	// (0x00072521) popup_call_audio_in_window_t3_ParamLimits

0x18ac,	// (0x00072521) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x0007fcf0) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x0007fcf0) popup_call_audio_in_window_t

0x183a,	// (0x000724af) bg_popup_call_pane_cp01_ParamLimits

0x183a,	// (0x000724af) bg_popup_call_pane_cp01

0x1848,	// (0x000724bd) call_thumbnail_pane_cp02

0x18bf,	// (0x00072534) call_type_pane_cp022

0x18c7,	// (0x0007253c) popup_call_audio_out_window_g1_ParamLimits

0x18c7,	// (0x0007253c) popup_call_audio_out_window_g1

0x18d9,	// (0x0007254e) popup_call_audio_out_window_g2_ParamLimits

0x18d9,	// (0x0007254e) popup_call_audio_out_window_g2

0x18e5,	// (0x0007255a) popup_call_audio_out_window_g3_ParamLimits

0x18e5,	// (0x0007255a) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x0007fcf7) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x0007fcf7) popup_call_audio_out_window_g

0x18f7,	// (0x0007256c) popup_call_audio_out_window_t1_ParamLimits

0x18f7,	// (0x0007256c) popup_call_audio_out_window_t1

0x190f,	// (0x00072584) popup_call_audio_out_window_t2_ParamLimits

0x190f,	// (0x00072584) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x0007fcfe) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x0007fcfe) popup_call_audio_out_window_t

0x1924,	// (0x00072599) bg_popup_call_pane_ParamLimits

0x1924,	// (0x00072599) bg_popup_call_pane

0x3d74,	// (0x000749e9) call_thumbnail_pane_cp_ParamLimits

0x3d74,	// (0x000749e9) call_thumbnail_pane_cp

0x19a8,	// (0x0007261d) call_type_pane_cp01_ParamLimits

0x19a8,	// (0x0007261d) call_type_pane_cp01

0x19ec,	// (0x00072661) popup_call_audio_first_window_g1_ParamLimits

0x19ec,	// (0x00072661) popup_call_audio_first_window_g1

0x1a38,	// (0x000726ad) popup_call_audio_first_window_g2_ParamLimits

0x1a38,	// (0x000726ad) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x0007fd03) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x0007fd03) popup_call_audio_first_window_g

0x1a7c,	// (0x000726f1) popup_call_audio_first_window_t1_ParamLimits

0x1a7c,	// (0x000726f1) popup_call_audio_first_window_t1

0x1b28,	// (0x0007279d) popup_call_audio_first_window_t4_ParamLimits

0x1b28,	// (0x0007279d) popup_call_audio_first_window_t4

0x1bb4,	// (0x00072829) popup_call_audio_first_window_t5_ParamLimits

0x1bb4,	// (0x00072829) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x0007fd08) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x0007fd08) popup_call_audio_first_window_t

0x1be3,	// (0x00072858) bg_popup_call_pane_cp02

0x1bed,	// (0x00072862) call_type_pane_cp023

0x1bf5,	// (0x0007286a) popup_call_audio_wait_window_g1

0x1bfd,	// (0x00072872) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x0007fd0f) popup_call_audio_wait_window_g

0x1c05,	// (0x0007287a) popup_call_audio_wait_window_t3

0x1c13,	// (0x00072888) bg_popup_call_pane_cp03_ParamLimits

0x1c13,	// (0x00072888) bg_popup_call_pane_cp03

0x1c73,	// (0x000728e8) call_thumbnail_pane_cp011_ParamLimits

0x1c73,	// (0x000728e8) call_thumbnail_pane_cp011

0x1c7f,	// (0x000728f4) call_type_pane_cp034_ParamLimits

0x1c7f,	// (0x000728f4) call_type_pane_cp034

0x1cbb,	// (0x00072930) popup_call_audio_second_window_g1_ParamLimits

0x1cbb,	// (0x00072930) popup_call_audio_second_window_g1

0x1cf7,	// (0x0007296c) popup_call_audio_second_window_g2_ParamLimits

0x1cf7,	// (0x0007296c) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x0007fd14) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x0007fd14) popup_call_audio_second_window_g

0x1d33,	// (0x000729a8) popup_call_audio_second_window_t1_ParamLimits

0x1d33,	// (0x000729a8) popup_call_audio_second_window_t1

0x1db4,	// (0x00072a29) popup_call_audio_second_window_t2_ParamLimits

0x1db4,	// (0x00072a29) popup_call_audio_second_window_t2

0x1dea,	// (0x00072a5f) popup_call_audio_second_window_t3_ParamLimits

0x1dea,	// (0x00072a5f) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x0007fd19) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x0007fd19) popup_call_audio_second_window_t

0x1be3,	// (0x00072858) bg_popup_call_pane_cp04

0x1e20,	// (0x00072a95) list_conf_pane

0x1e28,	// (0x00072a9d) popup_call_audio_conf_window_t1

0x1e44,	// (0x00072ab9) call_thumbnail_pane_g1

0x1e4c,	// (0x00072ac1) bg_pinb_pane_ParamLimits

0x1e4c,	// (0x00072ac1) bg_pinb_pane

0x1e5a,	// (0x00072acf) find_pinb_pane

0x1e4c,	// (0x00072ac1) listscroll_pinb_pane_ParamLimits

0x1e4c,	// (0x00072ac1) listscroll_pinb_pane

0x1e64,	// (0x00072ad9) pinb_bg_pane_g1

0x1e64,	// (0x00072ad9) pinb_bg_pane_g2

0x1e64,	// (0x00072ad9) pinb_bg_pane_g3

0x1e64,	// (0x00072ad9) pinb_bg_pane_g4

0x1e64,	// (0x00072ad9) pinb_bg_pane_g5

0x1e64,	// (0x00072ad9) pinb_bg_pane_g6

0x1e64,	// (0x00072ad9) pinb_bg_pane_g7

0x1e64,	// (0x00072ad9) pinb_bg_pane_g8

0x1e64,	// (0x00072ad9) pinb_bg_pane_g9

0x1e64,	// (0x00072ad9) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x0007fd20) pinb_bg_pane_g

0x17c6,	// (0x0007243b) grid_pinb_pane

0x17c6,	// (0x0007243b) list_pinb_pane

0x1e6e,	// (0x00072ae3) scroll_pane_cp01_ParamLimits

0x1e6e,	// (0x00072ae3) scroll_pane_cp01

0x1e7c,	// (0x00072af1) find_pinb_pane_g1_ParamLimits

0x1e7c,	// (0x00072af1) find_pinb_pane_g1

0x1e94,	// (0x00072b09) find_pinb_pane_t1

0x1ea6,	// (0x00072b1b) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x0007fd3a) find_pinb_pane_t

0x1ebb,	// (0x00072b30) input_focus_pane_cp01_ParamLimits

0x1ebb,	// (0x00072b30) input_focus_pane_cp01

0x1e36,	// (0x00072aab) cell_pinb_pane_ParamLimits

0x1e36,	// (0x00072aab) cell_pinb_pane

0x1ec7,	// (0x00072b3c) cell_pinb_pane_g1_ParamLimits

0x1ec7,	// (0x00072b3c) cell_pinb_pane_g1

0x1ed5,	// (0x00072b4a) cell_pinb_pane_g2_ParamLimits

0x1ed5,	// (0x00072b4a) cell_pinb_pane_g2

0x1ed5,	// (0x00072b4a) cell_pinb_pane_g3_ParamLimits

0x1ed5,	// (0x00072b4a) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x0007fd3f) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x0007fd3f) cell_pinb_pane_g

0x1be3,	// (0x00072858) grid_highlight_pane_cp01

0x1e36,	// (0x00072aab) list_pinb_item_pane_ParamLimits

0x1e36,	// (0x00072aab) list_pinb_item_pane

0x17c6,	// (0x0007243b) list_highlight_pane_cp02

0x1ee3,	// (0x00072b58) list_pinb_item_pane_g1_ParamLimits

0x1ee3,	// (0x00072b58) list_pinb_item_pane_g1

0x1ed5,	// (0x00072b4a) list_pinb_item_pane_g2_ParamLimits

0x1ed5,	// (0x00072b4a) list_pinb_item_pane_g2

0x1ec7,	// (0x00072b3c) list_pinb_item_pane_g3_ParamLimits

0x1ec7,	// (0x00072b3c) list_pinb_item_pane_g3

0x1ed5,	// (0x00072b4a) list_pinb_item_pane_g4_ParamLimits

0x1ed5,	// (0x00072b4a) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x0007fd46) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x0007fd46) list_pinb_item_pane_g

0x1ef1,	// (0x00072b66) list_pinb_item_pane_t1_ParamLimits

0x1ef1,	// (0x00072b66) list_pinb_item_pane_t1

0x3db6,	// (0x00074a2b) calc_display_pane

0x3ddb,	// (0x00074a50) calc_paper_pane

0x3dfe,	// (0x00074a73) grid_calc_pane

0x1be3,	// (0x00072858) bg_list_pane_cp01

0x3e2c,	// (0x00074aa1) clock_g1

0x3e34,	// (0x00074aa9) clock_g2

0x0001,

0xf0da,	// (0x0007fd4f) clock_g

0x3e3c,	// (0x00074ab1) clock_t1_ParamLimits

0x3e3c,	// (0x00074ab1) clock_t1

0x3e51,	// (0x00074ac6) clock_t2_ParamLimits

0x3e51,	// (0x00074ac6) clock_t2

0x3e63,	// (0x00074ad8) clock_t3_ParamLimits

0x3e63,	// (0x00074ad8) clock_t3

0x3e75,	// (0x00074aea) clock_t4_ParamLimits

0x3e75,	// (0x00074aea) clock_t4

0x3e87,	// (0x00074afc) clock_t5_ParamLimits

0x3e87,	// (0x00074afc) clock_t5

0x3e9c,	// (0x00074b11) clock_t6_ParamLimits

0x3e9c,	// (0x00074b11) clock_t6

0x3eae,	// (0x00074b23) clock_t7_ParamLimits

0x3eae,	// (0x00074b23) clock_t7

0x3ec0,	// (0x00074b35) clock_t8_ParamLimits

0x3ec0,	// (0x00074b35) clock_t8

0x3ed4,	// (0x00074b49) clock_t9_ParamLimits

0x3ed4,	// (0x00074b49) clock_t9

0x0008,

0xf0df,	// (0x0007fd54) clock_t_ParamLimits

0xf0df,	// (0x0007fd54) clock_t

0x1f05,	// (0x00072b7a) popup_clock_analogue_window_cp02

0x1f05,	// (0x00072b7a) popup_clock_digital_window_cp01

0x1be3,	// (0x00072858) listscroll_help_pane

0x1be3,	// (0x00072858) phob_pre_status_pane

0x1f0d,	// (0x00072b82) grid_qdial_pane

0x3ee8,	// (0x00074b5d) listscroll_mce_pane

0x1e4c,	// (0x00072ac1) bg_notes_pane

0x1f17,	// (0x00072b8c) list_notes_pane

0x3f02,	// (0x00074b77) scroll_pane_cp06

0x1f25,	// (0x00072b9a) bg_calc_paper_pane

0xc3d9,	// (0x0007d04e) list_calc_pane

0x1f39,	// (0x00072bae) bg_calc_display_pane

0x3f16,	// (0x00074b8b) calc_display_pane_t1

0x3f28,	// (0x00074b9d) calc_display_pane_t2

0xc3f3,	// (0x0007d068) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x0007fd67) calc_display_pane_t

0x3f3a,	// (0x00074baf) cell_calc_pane_ParamLimits

0x3f3a,	// (0x00074baf) cell_calc_pane

0x1f45,	// (0x00072bba) bg_calc_paper_pane_g1

0x1f51,	// (0x00072bc6) bg_calc_paper_pane_g2

0x1f5d,	// (0x00072bd2) bg_calc_paper_pane_g3

0x1f69,	// (0x00072bde) bg_calc_paper_pane_g4

0x1f75,	// (0x00072bea) bg_calc_paper_pane_g5

0x3f6f,	// (0x00074be4) bg_calc_paper_pane_g6

0x3f7e,	// (0x00074bf3) bg_calc_paper_pane_g7

0x3f8d,	// (0x00074c02) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x0007fd6e) bg_calc_paper_pane_g

0x3fa0,	// (0x00074c15) calc_bg_paper_pane_g9

0x3fb3,	// (0x00074c28) list_calc_item_pane_ParamLimits

0x3fb3,	// (0x00074c28) list_calc_item_pane

0x1f81,	// (0x00072bf6) list_calc_item_pane_g1

0xc405,	// (0x0007d07a) list_calc_item_pane_t1_ParamLimits

0xc405,	// (0x0007d07a) list_calc_item_pane_t1

0x3fc8,	// (0x00074c3d) list_calc_item_pane_t2_ParamLimits

0x3fc8,	// (0x00074c3d) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x0007fd7f) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x0007fd7f) list_calc_item_pane_t

0x1e64,	// (0x00072ad9) cell_calc_pane_g1

0x1f8e,	// (0x00072c03) grid_highlight_pane_cp02

0x04d4,	// (0x00071149) bg_calc_display_pane_g1

0x3ffa,	// (0x00074c6f) bg_calc_display_pane_g2

0x12c1,	// (0x00071f36) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x0007fd89) bg_calc_display_pane_g

0x4004,	// (0x00074c79) cell_qdial_pane_ParamLimits

0x4004,	// (0x00074c79) cell_qdial_pane

0x4018,	// (0x00074c8d) cell_qdial_pane_g1_ParamLimits

0x4018,	// (0x00074c8d) cell_qdial_pane_g1

0x402e,	// (0x00074ca3) cell_qdial_pane_g2_ParamLimits

0x402e,	// (0x00074ca3) cell_qdial_pane_g2

0x1fb0,	// (0x00072c25) cell_qdial_pane_g3_ParamLimits

0x1fb0,	// (0x00072c25) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x0007fd90) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x0007fd90) cell_qdial_pane_g

0x4054,	// (0x00074cc9) cell_qdial_pane_t1_ParamLimits

0x4054,	// (0x00074cc9) cell_qdial_pane_t1

0x406c,	// (0x00074ce1) cell_qdial_pane_t2_ParamLimits

0x406c,	// (0x00074ce1) cell_qdial_pane_t2

0x407f,	// (0x00074cf4) cell_qdial_pane_t3_ParamLimits

0x407f,	// (0x00074cf4) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x0007fd99) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x0007fd99) cell_qdial_pane_t

0x1be3,	// (0x00072858) grid_highlight_pane_cp04

0x1fbc,	// (0x00072c31) thumbnail_qdial_pane_ParamLimits

0x1fbc,	// (0x00072c31) thumbnail_qdial_pane

0x2018,	// (0x00072c8d) list_help_pane

0x2021,	// (0x00072c96) scroll_pane_cp02

0x4092,	// (0x00074d07) help_list_pane_t1_ParamLimits

0x4092,	// (0x00074d07) help_list_pane_t1

0xc417,	// (0x0007d08c) bg_notes_pane_g2

0xc41f,	// (0x0007d094) bg_notes_pane_g3

0xc427,	// (0x0007d09c) notes_bg_pane_g1

0xc42f,	// (0x0007d0a4) notes_bg_pane_g4

0xc437,	// (0x0007d0ac) notes_bg_pane_g5

0xc43f,	// (0x0007d0b4) notes_bg_pane_g6

0xc447,	// (0x0007d0bc) notes_bg_pane_g7

0xc44f,	// (0x0007d0c4) notes_bg_pane_g8

0xc457,	// (0x0007d0cc) notes_bg_pane_g9

0x0006,

0xf142,	// (0x0007fdb7) notes_bg_pane_g

0x40b1,	// (0x00074d26) list_notes_text_pane_ParamLimits

0x40b1,	// (0x00074d26) list_notes_text_pane

0x202a,	// (0x00072c9f) list_notes_text_pane_g1

0xc45f,	// (0x0007d0d4) list_notes_text_pane_t1

0x40c7,	// (0x00074d3c) listscroll_cale_week_pane

0x40f3,	// (0x00074d68) bg_cale_heading_pane

0x204d,	// (0x00072cc2) bg_cale_pane_cp01

0x410b,	// (0x00074d80) cale_week_corner_pane

0x412a,	// (0x00074d9f) cale_week_day_heading_pane

0x4147,	// (0x00074dbc) cale_week_scroll_pane_g1

0x415a,	// (0x00074dcf) cale_week_scroll_pane_g2

0x4172,	// (0x00074de7) cale_week_scroll_pane_g3

0x418a,	// (0x00074dff) cale_week_scroll_pane_g4

0x41a2,	// (0x00074e17) cale_week_scroll_pane_g5

0x41c2,	// (0x00074e37) cale_week_scroll_pane_g6

0x41e2,	// (0x00074e57) cale_week_scroll_pane_g7

0x4202,	// (0x00074e77) cale_week_scroll_pane_g8

0x4226,	// (0x00074e9b) cale_week_scroll_pane_g9

0x423e,	// (0x00074eb3) cale_week_scroll_pane_g10

0x4256,	// (0x00074ecb) cale_week_scroll_pane_g11

0x426e,	// (0x00074ee3) cale_week_scroll_pane_g12

0x4286,	// (0x00074efb) cale_week_scroll_pane_g13

0x4286,	// (0x00074efb) cale_week_scroll_pane_g14

0x4286,	// (0x00074efb) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x0007fdc6) cale_week_scroll_pane_g

0x42c2,	// (0x00074f37) cale_week_time_pane

0x42e6,	// (0x00074f5b) grid_cale_week_pane

0x207c,	// (0x00072cf1) scroll_pane_cp08

0x430c,	// (0x00074f81) cell_cale_week_pane_ParamLimits

0x430c,	// (0x00074f81) cell_cale_week_pane

0x439a,	// (0x0007500f) cale_week_day_heading_pane_t1

0x43c4,	// (0x00075039) cale_week_day_heading_pane_t2

0x43f3,	// (0x00075068) cale_week_day_heading_pane_t3

0x4422,	// (0x00075097) cale_week_day_heading_pane_t4

0x4451,	// (0x000750c6) cale_week_day_heading_pane_t5

0x4488,	// (0x000750fd) cale_week_day_heading_pane_t6

0x44bf,	// (0x00075134) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x0007fde7) cale_week_day_heading_pane_t

0x2099,	// (0x00072d0e) bg_cale_side_pane

0x44e9,	// (0x0007515e) cale_week_time_pane_t1

0x4503,	// (0x00075178) cale_week_time_pane_t2

0x451d,	// (0x00075192) cale_week_time_pane_t3

0x4537,	// (0x000751ac) cale_week_time_pane_t4

0x4551,	// (0x000751c6) cale_week_time_pane_t5

0x456b,	// (0x000751e0) cale_week_time_pane_t6

0x4585,	// (0x000751fa) cale_week_time_pane_t7

0x459f,	// (0x00075214) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x0007fdf6) cale_week_time_pane_t

0x45bf,	// (0x00075234) cell_cale_week_pane_g2

0x45e3,	// (0x00075258) cell_cale_week_pane_g3_ParamLimits

0x45e3,	// (0x00075258) cell_cale_week_pane_g3

0x20a7,	// (0x00072d1c) grid_highlight_pane_cp07

0x20af,	// (0x00072d24) listscroll_gms_pane

0x20b9,	// (0x00072d2e) grid_gms_pane

0x20c2,	// (0x00072d37) listscroll_gms_pane_g1

0x20ca,	// (0x00072d3f) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x0007fe07) listscroll_gms_pane_g

0x45fb,	// (0x00075270) scroll_pane_cp010

0x4606,	// (0x0007527b) cell_gms_pane_ParamLimits

0x4606,	// (0x0007527b) cell_gms_pane

0x4618,	// (0x0007528d) cell_gms_pane_g1

0x20d2,	// (0x00072d47) cell_gms_pane_g2

0x202a,	// (0x00072c9f) cell_gms_pane_g3

0x20da,	// (0x00072d4f) cell_gms_pane_g4

0x0003,

0xf197,	// (0x0007fe0c) cell_gms_pane_g

0x20e3,	// (0x00072d58) grid_highlight_pane_cp09

0x6313,	// (0x00076f88) phob_pre_status_pane_g1

0x631b,	// (0x00076f90) phob_pre_status_pane_g2

0x6323,	// (0x00076f98) phob_pre_status_pane_g3

0x632b,	// (0x00076fa0) phob_pre_status_pane_g4

0x0004,

0xf56e,	// (0x000801e3) phob_pre_status_pane_g

0x633b,	// (0x00076fb0) phob_pre_status_pane_t1

0x6349,	// (0x00076fbe) phob_pre_status_pane_t2

0x6359,	// (0x00076fce) phob_pre_status_pane_t3

0x0002,

0xf579,	// (0x000801ee) phob_pre_status_pane_t

0x20eb,	// (0x00072d60) bg_list_pane_cp05

0x4628,	// (0x0007529d) grid_vorec_pane

0x4630,	// (0x000752a5) vorec_t1

0x463e,	// (0x000752b3) vorec_t2

0x464c,	// (0x000752c1) vorec_t3

0x465a,	// (0x000752cf) vorec_t4

0xbded,	// (0x0007ca62) vorec_t5

0xbdfb,	// (0x0007ca70) vorec_t6

0x0004,

0xf1a0,	// (0x0007fe15) vorec_t

0xbe09,	// (0x0007ca7e) wait_bar_pane_cp01

0x4676,	// (0x000752eb) cell_vorec_pane_ParamLimits

0x4676,	// (0x000752eb) cell_vorec_pane

0xc46d,	// (0x0007d0e2) cell_vorec_pane_g1

0x1be3,	// (0x00072858) grid_highlight_pane_cp05

0x1e6e,	// (0x00072ae3) cams_zoom_pane

0x1e6e,	// (0x00072ae3) image_vga_pane

0x1ec7,	// (0x00072b3c) main_camera_pane_g1

0x1ec7,	// (0x00072b3c) main_camera_pane_g2

0x1ec7,	// (0x00072b3c) main_camera_pane_g3

0x1ec7,	// (0x00072b3c) main_camera_pane_g4

0x1ec7,	// (0x00072b3c) main_camera_pane_g5

0x1ec7,	// (0x00072b3c) main_camera_pane_g6

0x1ec7,	// (0x00072b3c) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x0007fe20) main_camera_pane_g

0x2127,	// (0x00072d9c) main_camera_pane_t1

0x2127,	// (0x00072d9c) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x0007fe31) main_camera_pane_t

0x469d,	// (0x00075312) cams_zoom_pane_cp_ParamLimits

0x469d,	// (0x00075312) cams_zoom_pane_cp

0x46d1,	// (0x00075346) image_cif_pane_ParamLimits

0x46d1,	// (0x00075346) image_cif_pane

0x17c6,	// (0x0007243b) image_subqcif_pane

0x46e3,	// (0x00075358) main_video_pane_g1_ParamLimits

0x46e3,	// (0x00075358) main_video_pane_g1

0x4711,	// (0x00075386) main_video_pane_g2_ParamLimits

0x4711,	// (0x00075386) main_video_pane_g2

0x474b,	// (0x000753c0) main_video_pane_g3_ParamLimits

0x474b,	// (0x000753c0) main_video_pane_g3

0x474b,	// (0x000753c0) main_video_pane_g4_ParamLimits

0x474b,	// (0x000753c0) main_video_pane_g4

0x477f,	// (0x000753f4) main_video_pane_g5_ParamLimits

0x477f,	// (0x000753f4) main_video_pane_g5

0x20f3,	// (0x00072d68) main_video_pane_g6_ParamLimits

0x20f3,	// (0x00072d68) main_video_pane_g6

0x0006,

0xf1c1,	// (0x0007fe36) main_video_pane_g_ParamLimits

0xf1c1,	// (0x0007fe36) main_video_pane_g

0x479b,	// (0x00075410) main_video_pane_t1_ParamLimits

0x479b,	// (0x00075410) main_video_pane_t1

0x210d,	// (0x00072d82) cams_zoom_pane_g1

0x210d,	// (0x00072d82) cams_zoom_pane_g2

0x210d,	// (0x00072d82) cams_zoom_pane_g3

0x210d,	// (0x00072d82) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x0007fe45) cams_zoom_pane_g

0x47f3,	// (0x00075468) grid_cams_pane

0x480d,	// (0x00075482) linegrid_cams_pane

0x4820,	// (0x00075495) cell_cams_pane_ParamLimits

0x4820,	// (0x00075495) cell_cams_pane

0x2117,	// (0x00072d8c) cams_burst_image_pane

0x211f,	// (0x00072d94) cell_cams_pane_g1

0x1be3,	// (0x00072858) grid_highlight_pane_cp03

0x1e64,	// (0x00072ad9) mp_bg_pane_g1

0x17c6,	// (0x0007243b) bg_list_pane_cp03

0x17c6,	// (0x0007243b) bg_mp_pane

0x17c6,	// (0x0007243b) grid_mp_pane

0x210d,	// (0x00072d82) media_player_g1

0xc629,	// (0x0007d29e) media_player_t1

0xc629,	// (0x0007d29e) media_player_t2

0xc629,	// (0x0007d29e) media_player_t3

0xc629,	// (0x0007d29e) media_player_t4

0xc629,	// (0x0007d29e) media_player_t5

0xc629,	// (0x0007d29e) media_player_t6

0xc629,	// (0x0007d29e) media_player_t7

0x0006,

0xf558,	// (0x000801cd) media_player_t

0x17c6,	// (0x0007243b) wait_bar_pane_cp02

0xf53d,	// (0x000801b2) main_usb_pane_t

0xc904,	// (0x0007d579) cell_mp_pane

0x1e64,	// (0x00072ad9) cell_mp_pane_g1

0x1be3,	// (0x00072858) grid_highlight_pane_cp06

0x213b,	// (0x00072db0) grid_skin_colour_pane

0x2143,	// (0x00072db8) list_highlight_pane_cp03

0x4840,	// (0x000754b5) skin_g1

0x214b,	// (0x00072dc0) skin_t1

0x215a,	// (0x00072dcf) skin_t2

0x0001,

0xf1fe,	// (0x0007fe73) skin_t

0x4848,	// (0x000754bd) cell_skin_colour_pane_ParamLimits

0x4848,	// (0x000754bd) cell_skin_colour_pane

0x2168,	// (0x00072ddd) cell_skin_colour_pane_g1

0x48c1,	// (0x00075536) call_video_g1_ParamLimits

0x48c1,	// (0x00075536) call_video_g1

0x48dd,	// (0x00075552) call_video_g2_ParamLimits

0x48dd,	// (0x00075552) call_video_g2

0x0001,

0xf203,	// (0x0007fe78) call_video_g_ParamLimits

0xf203,	// (0x0007fe78) call_video_g

0x492f,	// (0x000755a4) call_video_uplink_pane_cp1_ParamLimits

0x492f,	// (0x000755a4) call_video_uplink_pane_cp1

0x217a,	// (0x00072def) call_video_uplink_pane_cp2

0x49ce,	// (0x00075643) video_down_crop_pane_ParamLimits

0x49ce,	// (0x00075643) video_down_crop_pane

0x4ab7,	// (0x0007572c) video_down_pane_ParamLimits

0x4ab7,	// (0x0007572c) video_down_pane

0x2182,	// (0x00072df7) video_down_subqcif_pane_ParamLimits

0x2182,	// (0x00072df7) video_down_subqcif_pane

0x219a,	// (0x00072e0f) video_down_subqcif_pane_cp_ParamLimits

0x219a,	// (0x00072e0f) video_down_subqcif_pane_cp

0x21c0,	// (0x00072e35) im_reading_pane_ParamLimits

0x21c0,	// (0x00072e35) im_reading_pane

0x4bc7,	// (0x0007583c) im_writing_pane_ParamLimits

0x4bc7,	// (0x0007583c) im_writing_pane

0x4bdd,	// (0x00075852) im_reading_pane_t1

0x21da,	// (0x00072e4f) list_im_pane

0x21eb,	// (0x00072e60) scroll_pane_cp07

0x4c17,	// (0x0007588c) im_writing_pane_t1_ParamLimits

0x4c17,	// (0x0007588c) im_writing_pane_t1

0x2204,	// (0x00072e79) im_writing_pane_t2_ParamLimits

0x2204,	// (0x00072e79) im_writing_pane_t2

0x0001,

0xf20d,	// (0x0007fe82) im_writing_pane_t_ParamLimits

0xf20d,	// (0x0007fe82) im_writing_pane_t

0x1be3,	// (0x00072858) input_focus_pane_cp04

0x1be3,	// (0x00072858) input_focus_pane_cp05

0x4c2c,	// (0x000758a1) list_im_single_pane_ParamLimits

0x4c2c,	// (0x000758a1) list_im_single_pane

0x4c41,	// (0x000758b6) list_single_im_pane_t1

0x20eb,	// (0x00072d60) blid_accuracy_pane

0x20eb,	// (0x00072d60) blid_compass_pane

0xdf47,	// (0x0007ebbc) main_location_t1

0xdf47,	// (0x0007ebbc) main_location_t2

0xdf47,	// (0x0007ebbc) main_location_t3

0x0002,

0xf567,	// (0x000801dc) main_location_t

0x1be3,	// (0x00072858) aid_levels_location

0x1e64,	// (0x00072ad9) blid_accuracy_pane_g1

0x1e64,	// (0x00072ad9) blid_accuracy_pane_g2

0x0001,

0xf25c,	// (0x0007fed1) blid_accuracy_pane_g

0x224c,	// (0x00072ec1) wml_content_pane

0x228a,	// (0x00072eff) wml_button_pane_ParamLimits

0x228a,	// (0x00072eff) wml_button_pane

0x4c50,	// (0x000758c5) wml_list_single_large_pane_ParamLimits

0x4c50,	// (0x000758c5) wml_list_single_large_pane

0x4c65,	// (0x000758da) wml_list_single_medium_pane_ParamLimits

0x4c65,	// (0x000758da) wml_list_single_medium_pane

0x4c7c,	// (0x000758f1) wml_list_single_small_pane_ParamLimits

0x4c7c,	// (0x000758f1) wml_list_single_small_pane

0x229e,	// (0x00072f13) wml_selection_box_pane_ParamLimits

0x229e,	// (0x00072f13) wml_selection_box_pane

0x22b1,	// (0x00072f26) wml_list_single_pane_t1

0x22c0,	// (0x00072f35) wml_list_single_medium_pane_t1

0x22cf,	// (0x00072f44) wml_list_single_large_pane_t1

0x22de,	// (0x00072f53) input_focus_pane_cp02_ParamLimits

0x22de,	// (0x00072f53) input_focus_pane_cp02

0x22f1,	// (0x00072f66) wml_selection_box_pane_g1

0x22fa,	// (0x00072f6f) wml_selection_box_pane_t1_ParamLimits

0x22fa,	// (0x00072f6f) wml_selection_box_pane_t1

0x1e4c,	// (0x00072ac1) bg_wml_button_pane_ParamLimits

0x1e4c,	// (0x00072ac1) bg_wml_button_pane

0x2312,	// (0x00072f87) wml_button_pane_g1

0x231a,	// (0x00072f8f) wml_button_pane_t1

0x2312,	// (0x00072f87) wml_button_bg_pane_g1

0x232a,	// (0x00072f9f) wml_button_bg_pane_g2

0x2332,	// (0x00072fa7) wml_button_bg_pane_g3

0x233a,	// (0x00072faf) wml_button_bg_pane_g4

0x2342,	// (0x00072fb7) wml_button_bg_pane_g5

0x234a,	// (0x00072fbf) wml_button_bg_pane_g6

0x2352,	// (0x00072fc7) wml_button_bg_pane_g7

0x235a,	// (0x00072fcf) wml_button_bg_pane_g8

0x2362,	// (0x00072fd7) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x0007fe87) wml_button_bg_pane_g

0x4c95,	// (0x0007590a) bg_list_pane_cp02

0x236a,	// (0x00072fdf) mce_header_pane_ParamLimits

0x236a,	// (0x00072fdf) mce_header_pane

0x2380,	// (0x00072ff5) mce_icon_pane

0x2380,	// (0x00072ff5) mce_image_pane

0x2389,	// (0x00072ffe) mce_text_pane_ParamLimits

0x2389,	// (0x00072ffe) mce_text_pane

0x4c9d,	// (0x00075912) scroll_pane_cp03

0x2282,	// (0x00072ef7) scroll_pane_cp04

0x239c,	// (0x00073011) scroll_pane_cp05_ParamLimits

0x239c,	// (0x00073011) scroll_pane_cp05

0x4ca5,	// (0x0007591a) mce_header_field_pane_ParamLimits

0x4ca5,	// (0x0007591a) mce_header_field_pane

0x4cbc,	// (0x00075931) mce_header_field_pane_2_ParamLimits

0x4cbc,	// (0x00075931) mce_header_field_pane_2

0x4cd2,	// (0x00075947) mce_header_field_pane_3

0x4cda,	// (0x0007594f) list_single_mce_message_pane_ParamLimits

0x4cda,	// (0x0007594f) list_single_mce_message_pane

0x4ce9,	// (0x0007595e) list_single_mce_smart_pane_ParamLimits

0x4ce9,	// (0x0007595e) list_single_mce_smart_pane

0x23a8,	// (0x0007301d) input_focus_pane_cp03

0x23b1,	// (0x00073026) list_header_data_pane

0x4d03,	// (0x00075978) mce_header_field_pane_t1

0x4d11,	// (0x00075986) list_single_mce_header_pane_ParamLimits

0x4d11,	// (0x00075986) list_single_mce_header_pane

0x23b9,	// (0x0007302e) list_single_mce_header_pane_t1

0x23c8,	// (0x0007303d) list_single_mce_message_pane_g1

0x23d0,	// (0x00073045) list_single_mce_message_pane_t1

0x4d4b,	// (0x000759c0) bg_cale_heading_pane_cp01_ParamLimits

0x4d4b,	// (0x000759c0) bg_cale_heading_pane_cp01

0x23de,	// (0x00073053) bg_cale_pane_cp02_ParamLimits

0x23de,	// (0x00073053) bg_cale_pane_cp02

0x4d85,	// (0x000759fa) cale_month_corner_pane

0x4da4,	// (0x00075a19) cale_month_day_heading_pane_ParamLimits

0x4da4,	// (0x00075a19) cale_month_day_heading_pane

0x4df6,	// (0x00075a6b) cale_month_pane_g1_ParamLimits

0x4df6,	// (0x00075a6b) cale_month_pane_g1

0x4e25,	// (0x00075a9a) cale_month_pane_g2_ParamLimits

0x4e25,	// (0x00075a9a) cale_month_pane_g2

0x4e55,	// (0x00075aca) cale_month_pane_g3_ParamLimits

0x4e55,	// (0x00075aca) cale_month_pane_g3

0x4e91,	// (0x00075b06) cale_month_pane_g4_ParamLimits

0x4e91,	// (0x00075b06) cale_month_pane_g4

0x4ecd,	// (0x00075b42) cale_month_pane_g5_ParamLimits

0x4ecd,	// (0x00075b42) cale_month_pane_g5

0x4f15,	// (0x00075b8a) cale_month_pane_g6_ParamLimits

0x4f15,	// (0x00075b8a) cale_month_pane_g6

0x4f61,	// (0x00075bd6) cale_month_pane_g7_ParamLimits

0x4f61,	// (0x00075bd6) cale_month_pane_g7

0x4fb1,	// (0x00075c26) cale_month_pane_g8_ParamLimits

0x4fb1,	// (0x00075c26) cale_month_pane_g8

0x5005,	// (0x00075c7a) cale_month_pane_g9_ParamLimits

0x5005,	// (0x00075c7a) cale_month_pane_g9

0x5057,	// (0x00075ccc) cale_month_pane_g10_ParamLimits

0x5057,	// (0x00075ccc) cale_month_pane_g10

0x50a9,	// (0x00075d1e) cale_month_pane_g11_ParamLimits

0x50a9,	// (0x00075d1e) cale_month_pane_g11

0x50fb,	// (0x00075d70) cale_month_pane_g12_ParamLimits

0x50fb,	// (0x00075d70) cale_month_pane_g12

0x514d,	// (0x00075dc2) cale_month_pane_g13_ParamLimits

0x514d,	// (0x00075dc2) cale_month_pane_g13

0x000c,

0xf225,	// (0x0007fe9a) cale_month_pane_g_ParamLimits

0xf225,	// (0x0007fe9a) cale_month_pane_g

0x519f,	// (0x00075e14) cale_month_week_pane

0x51c3,	// (0x00075e38) grid_cale_month_pane_ParamLimits

0x51c3,	// (0x00075e38) grid_cale_month_pane

0x520c,	// (0x00075e81) cale_month_day_heading_pane_t1

0x524e,	// (0x00075ec3) cale_month_day_heading_pane_t2

0x5283,	// (0x00075ef8) cale_month_day_heading_pane_t3

0x52b8,	// (0x00075f2d) cale_month_day_heading_pane_t4

0x52f5,	// (0x00075f6a) cale_month_day_heading_pane_t5

0x533a,	// (0x00075faf) cale_month_day_heading_pane_t6

0x537f,	// (0x00075ff4) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x0007feb5) cale_month_day_heading_pane_t

0x2099,	// (0x00072d0e) bg_cale_side_pane_cp01

0x53cc,	// (0x00076041) cale_month_week_pane_t1

0x53e5,	// (0x0007605a) cale_month_week_pane_t2

0x53fe,	// (0x00076073) cale_month_week_pane_t3

0x5417,	// (0x0007608c) cale_month_week_pane_t4

0x5430,	// (0x000760a5) cale_month_week_pane_t5

0x5449,	// (0x000760be) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x0007fec4) cale_month_week_pane_t

0x5462,	// (0x000760d7) cell_cale_month_pane_ParamLimits

0x5462,	// (0x000760d7) cell_cale_month_pane

0xc477,	// (0x0007d0ec) cell_cale_month_pane_g1

0x5590,	// (0x00076205) cell_cale_month_pane_t1_ParamLimits

0x5590,	// (0x00076205) cell_cale_month_pane_t1

0x20a7,	// (0x00072d1c) grid_highlight_pane_cp08

0x1e64,	// (0x00072ad9) main_smil_g1

0x55bc,	// (0x00076231) smil_status_pane

0x241d,	// (0x00073092) smil_text_pane

0xde1f,	// (0x0007ea94) bg_popup_call3_rect_pane_g8

0xde27,	// (0x0007ea9c) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e8,	// (0x0008015d) bg_popup_call3_rect_pane_g

0xe064,	// (0x0007ecd9) smil_status_volume_pane_g1

0x2427,	// (0x0007309c) smil_status_pane_t1

0xe097,	// (0x0007ed0c) volume_smil_pane

0x243e,	// (0x000730b3) list_smil_text_pane

0x55d1,	// (0x00076246) scroll_pane_cp011

0x55dc,	// (0x00076251) smil_text_list_pane_t1_ParamLimits

0x55dc,	// (0x00076251) smil_text_list_pane_t1

0xc483,	// (0x0007d0f8) aid_volume_smil_ParamLimits

0xc483,	// (0x0007d0f8) aid_volume_smil

0x1e64,	// (0x00072ad9) smil_volume_pane_g1

0x1e64,	// (0x00072ad9) smil_volume_pane_g2

0x0001,

0xf25c,	// (0x0007fed1) smil_volume_pane_g

0x40c7,	// (0x00074d3c) listscroll_cale_day_pane

0x2448,	// (0x000730bd) bg_cale_pane

0x2460,	// (0x000730d5) list_cale_pane

0x2483,	// (0x000730f8) scroll_pane_cp09

0x2494,	// (0x00073109) cale_bg_pane_g1

0x249c,	// (0x00073111) cale_bg_pane_g2

0x24a4,	// (0x00073119) cale_bg_pane_g3

0x24ac,	// (0x00073121) cale_bg_pane_g4

0x24b4,	// (0x00073129) cale_bg_pane_g5

0x24bc,	// (0x00073131) cale_bg_pane_g6

0xc4a5,	// (0x0007d11a) cale_bg_pane_g7

0xc4ad,	// (0x0007d122) cale_bg_pane_g8

0xc4b5,	// (0x0007d12a) cale_bg_pane_g9

0x0008,

0xf261,	// (0x0007fed6) cale_bg_pane_g

0x5628,	// (0x0007629d) list_cale_time_pane_ParamLimits

0x5628,	// (0x0007629d) list_cale_time_pane

0xc4bd,	// (0x0007d132) list_cale_time_pane_g1_ParamLimits

0xc4bd,	// (0x0007d132) list_cale_time_pane_g1

0xc4c9,	// (0x0007d13e) list_cale_time_pane_g2_ParamLimits

0xc4c9,	// (0x0007d13e) list_cale_time_pane_g2

0x563e,	// (0x000762b3) list_cale_time_pane_g3_ParamLimits

0x563e,	// (0x000762b3) list_cale_time_pane_g3

0x564c,	// (0x000762c1) list_cale_time_pane_g4_ParamLimits

0x564c,	// (0x000762c1) list_cale_time_pane_g4

0x565a,	// (0x000762cf) list_cale_time_pane_g5_ParamLimits

0x565a,	// (0x000762cf) list_cale_time_pane_g5

0x0005,

0xf274,	// (0x0007fee9) list_cale_time_pane_g_ParamLimits

0xf274,	// (0x0007fee9) list_cale_time_pane_g

0xc4e3,	// (0x0007d158) list_cale_time_pane_t1_ParamLimits

0xc4e3,	// (0x0007d158) list_cale_time_pane_t1

0xc50b,	// (0x0007d180) list_cale_time_pane_t2_ParamLimits

0xc50b,	// (0x0007d180) list_cale_time_pane_t2

0x58e5,	// (0x0007655a) aid_blid_cardinal_pane

0x5923,	// (0x00076598) compass_pane_t4

0xc533,	// (0x0007d1a8) list_cale_time_pane_t4_ParamLimits

0xc533,	// (0x0007d1a8) list_cale_time_pane_t4

0x5931,	// (0x000765a6) compass_pane_t5

0x593f,	// (0x000765b4) compass_pane_t6

0x594d,	// (0x000765c2) compass_pane_t7

0xca1e,	// (0x0007d693) navi_pane_cc_t1

0xcc0d,	// (0x0007d882) aid_phob_thumbnail_center_pane

0x5cc1,	// (0x00076936) main_postcard_pane_g4_ParamLimits

0x0002,

0xf281,	// (0x0007fef6) list_cale_time_pane_t_ParamLimits

0xf281,	// (0x0007fef6) list_cale_time_pane_t

0x183a,	// (0x000724af) bg_popup_window_pane_cp02_ParamLimits

0x183a,	// (0x000724af) bg_popup_window_pane_cp02

0xc55b,	// (0x0007d1d0) heading_pane_cp01_ParamLimits

0xc55b,	// (0x0007d1d0) heading_pane_cp01

0xc567,	// (0x0007d1dc) loc_req_pane_ParamLimits

0xc567,	// (0x0007d1dc) loc_req_pane

0xc577,	// (0x0007d1ec) loc_type_pane_ParamLimits

0xc577,	// (0x0007d1ec) loc_type_pane

0xc589,	// (0x0007d1fe) loc_type_pane_t1_ParamLimits

0xc589,	// (0x0007d1fe) loc_type_pane_t1

0xc59b,	// (0x0007d210) loc_type_pane_t2_ParamLimits

0xc59b,	// (0x0007d210) loc_type_pane_t2

0xc5ad,	// (0x0007d222) loc_type_pane_t3_ParamLimits

0xc5ad,	// (0x0007d222) loc_type_pane_t3

0x0002,

0xf288,	// (0x0007fefd) loc_type_pane_t_ParamLimits

0xf288,	// (0x0007fefd) loc_type_pane_t

0xc5bf,	// (0x0007d234) list_loc_req_pane

0xc5c9,	// (0x0007d23e) scroll_pane_cp012

0x5668,	// (0x000762dd) list_single_loc_request_popup_menu_pane_ParamLimits

0x5668,	// (0x000762dd) list_single_loc_request_popup_menu_pane

0xc5d4,	// (0x0007d249) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc5d4,	// (0x0007d249) list_single_loc_request_popup_menu_pane_g1

0xc5e0,	// (0x0007d255) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc5e0,	// (0x0007d255) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf28f,	// (0x0007ff04) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf28f,	// (0x0007ff04) list_single_loc_request_popup_menu_pane_g

0xc5ec,	// (0x0007d261) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc5ec,	// (0x0007d261) list_single_loc_request_popup_menu_pane_t1

0x1e4c,	// (0x00072ac1) bg_popup_window_pane_cp03_ParamLimits

0x1e4c,	// (0x00072ac1) bg_popup_window_pane_cp03

0x08d6,	// (0x0007154b) heading_loc_req_pane_ParamLimits

0x08d6,	// (0x0007154b) heading_loc_req_pane

0x5675,	// (0x000762ea) popup_dyc_status_message_window_g1_ParamLimits

0x5675,	// (0x000762ea) popup_dyc_status_message_window_g1

0x5689,	// (0x000762fe) popup_dyc_status_message_window_t1_ParamLimits

0x5689,	// (0x000762fe) popup_dyc_status_message_window_t1

0x569e,	// (0x00076313) popup_dyc_status_message_window_t2_ParamLimits

0x569e,	// (0x00076313) popup_dyc_status_message_window_t2

0x56b3,	// (0x00076328) popup_dyc_status_message_window_t3_ParamLimits

0x56b3,	// (0x00076328) popup_dyc_status_message_window_t3

0x0002,

0xf294,	// (0x0007ff09) popup_dyc_status_message_window_t_ParamLimits

0xf294,	// (0x0007ff09) popup_dyc_status_message_window_t

0x1be3,	// (0x00072858) bg_heading_pane_cp01

0xc602,	// (0x0007d277) heading_loc_req_pane_g1

0xc60a,	// (0x0007d27f) heading_loc_req_pane_g2

0xc612,	// (0x0007d287) heading_loc_req_pane_g3

0x0002,

0xf29b,	// (0x0007ff10) heading_loc_req_pane_g

0xc61a,	// (0x0007d28f) heading_loc_req_pane_t1

0xc639,	// (0x0007d2ae) bg_popup_sub_pane_cp01_ParamLimits

0xc639,	// (0x0007d2ae) bg_popup_sub_pane_cp01

0xc647,	// (0x0007d2bc) popup_cale_events_window_g1_ParamLimits

0xc647,	// (0x0007d2bc) popup_cale_events_window_g1

0xc667,	// (0x0007d2dc) popup_cale_events_window_g2_ParamLimits

0xc667,	// (0x0007d2dc) popup_cale_events_window_g2

0x0001,

0xf2bd,	// (0x0007ff32) popup_cale_events_window_g_ParamLimits

0xf2bd,	// (0x0007ff32) popup_cale_events_window_g

0xc687,	// (0x0007d2fc) popup_cale_events_window_t1_ParamLimits

0xc687,	// (0x0007d2fc) popup_cale_events_window_t1

0xc699,	// (0x0007d30e) popup_cale_events_window_t2_ParamLimits

0xc699,	// (0x0007d30e) popup_cale_events_window_t2

0xc6d7,	// (0x0007d34c) popup_cale_events_window_t3_ParamLimits

0xc6d7,	// (0x0007d34c) popup_cale_events_window_t3

0xc711,	// (0x0007d386) popup_cale_events_window_t4_ParamLimits

0xc711,	// (0x0007d386) popup_cale_events_window_t4

0x0003,

0xf2c2,	// (0x0007ff37) popup_cale_events_window_t_ParamLimits

0xf2c2,	// (0x0007ff37) popup_cale_events_window_t

0x56db,	// (0x00076350) call_type_pane

0x56eb,	// (0x00076360) popup_call_status_window_g1

0x56ff,	// (0x00076374) popup_call_status_window_g2

0x5713,	// (0x00076388) popup_call_status_window_g3

0x0002,

0xf2cb,	// (0x0007ff40) popup_call_status_window_g

0xc747,	// (0x0007d3bc) call_type_pane_g1

0xc750,	// (0x0007d3c5) call_type_pane_g2

0x0001,

0xf2d2,	// (0x0007ff47) call_type_pane_g

0x1be3,	// (0x00072858) bg_popup_sub_pane_cp02

0xc759,	// (0x0007d3ce) listscroll_popup_wml_pane

0xc761,	// (0x0007d3d6) list_wml_pane

0xc76b,	// (0x0007d3e0) scroll_pane_cp013

0xc776,	// (0x0007d3eb) list_single_graphic_popup_wml_pane_ParamLimits

0xc776,	// (0x0007d3eb) list_single_graphic_popup_wml_pane

0x1e64,	// (0x00072ad9) list_single_graphic_popup_wml_pane_g1

0xc78a,	// (0x0007d3ff) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2d7,	// (0x0007ff4c) list_single_graphic_popup_wml_pane_g

0xc792,	// (0x0007d407) list_single_graphic_popup_wml_pane_t1

0xc7a8,	// (0x0007d41d) aid_call_pane

0x1e44,	// (0x00072ab9) popup_clock_analogue_window_g1

0x1e44,	// (0x00072ab9) popup_clock_analogue_window_g2

0xc7b0,	// (0x0007d425) popup_clock_analogue_window_g3

0xc7b0,	// (0x0007d425) popup_clock_analogue_window_g4

0x1e64,	// (0x00072ad9) popup_clock_analogue_window_g5

0x0004,

0xf2dc,	// (0x0007ff51) popup_clock_analogue_window_g

0xc7b8,	// (0x0007d42d) popup_clock_analogue_window_t1

0xc7c6,	// (0x0007d43b) clock_digital_number_pane_ParamLimits

0xc7c6,	// (0x0007d43b) clock_digital_number_pane

0xc7d2,	// (0x0007d447) clock_digital_number_pane_cp02_ParamLimits

0xc7d2,	// (0x0007d447) clock_digital_number_pane_cp02

0xc7de,	// (0x0007d453) clock_digital_number_pane_cp03_ParamLimits

0xc7de,	// (0x0007d453) clock_digital_number_pane_cp03

0xc7ea,	// (0x0007d45f) clock_digital_number_pane_cp04_ParamLimits

0xc7ea,	// (0x0007d45f) clock_digital_number_pane_cp04

0xc7f6,	// (0x0007d46b) clock_digital_separator_pane_ParamLimits

0xc7f6,	// (0x0007d46b) clock_digital_separator_pane

0xc802,	// (0x0007d477) popup_clock_digital_window_t1

0x1e64,	// (0x00072ad9) clock_digital_number_pane_g1

0x1e64,	// (0x00072ad9) clock_digital_number_pane_g2

0x0001,

0xf25c,	// (0x0007fed1) clock_digital_number_pane_g

0x1e64,	// (0x00072ad9) clock_digital_separator_pane_g1

0x1e64,	// (0x00072ad9) clock_digital_separator_pane_g2

0x0001,

0xf25c,	// (0x0007fed1) clock_digital_separator_pane_g

0x1be3,	// (0x00072858) bg_popup_window_pane_cp04

0xc81f,	// (0x0007d494) heading_pane_cp03

0x20eb,	// (0x00072d60) listscroll_popup_gms_pane

0x1be3,	// (0x00072858) grid_large_graphic_popup_pane

0xc828,	// (0x0007d49d) listscroll_popup_gms_pane_g1

0xc831,	// (0x0007d4a6) listscroll_popup_gms_pane_g2

0x0001,

0xf2e7,	// (0x0007ff5c) listscroll_popup_gms_pane_g

0xc83a,	// (0x0007d4af) scroll_pane_cp014

0x1e36,	// (0x00072aab) cell_large_graphic_popup_pane_ParamLimits

0x1e36,	// (0x00072aab) cell_large_graphic_popup_pane

0x1ec7,	// (0x00072b3c) cell_large_graphic_popup_pane_g1_ParamLimits

0x1ec7,	// (0x00072b3c) cell_large_graphic_popup_pane_g1

0xc843,	// (0x0007d4b8) cell_large_graphic_popup_pane_g2_ParamLimits

0xc843,	// (0x0007d4b8) cell_large_graphic_popup_pane_g2

0xc851,	// (0x0007d4c6) cell_large_graphic_popup_pane_g3_ParamLimits

0xc851,	// (0x0007d4c6) cell_large_graphic_popup_pane_g3

0xc85f,	// (0x0007d4d4) cell_large_graphic_popup_pane_g4_ParamLimits

0xc85f,	// (0x0007d4d4) cell_large_graphic_popup_pane_g4

0x0003,

0xf2ec,	// (0x0007ff61) cell_large_graphic_popup_pane_g_ParamLimits

0xf2ec,	// (0x0007ff61) cell_large_graphic_popup_pane_g

0x1be3,	// (0x00072858) grid_highlight_pane_cp010

0x1e64,	// (0x00072ad9) bg_popup_call_pane_g1

0xc870,	// (0x0007d4e5) list_single_graphic_popup_conf_pane_ParamLimits

0xc870,	// (0x0007d4e5) list_single_graphic_popup_conf_pane

0xc883,	// (0x0007d4f8) list_highlight_pane_cp01

0xc88c,	// (0x0007d501) list_single_graphic_popup_conf_pane_g1

0xc894,	// (0x0007d509) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2f5,	// (0x0007ff6a) list_single_graphic_popup_conf_pane_g

0xc89c,	// (0x0007d511) list_single_graphic_popup_conf_pane_t1

0xc8aa,	// (0x0007d51f) linegrid_cams_pane_g1

0x5722,	// (0x00076397) linegrid_cams_pane_g2

0x202a,	// (0x00072c9f) linegrid_cams_pane_g3

0xc8b3,	// (0x0007d528) linegrid_cams_pane_g4

0x572b,	// (0x000763a0) linegrid_cams_pane_g5

0x5734,	// (0x000763a9) linegrid_cams_pane_g6

0x20da,	// (0x00072d4f) linegrid_cams_pane_g7

0x0006,

0xf2fa,	// (0x0007ff6f) linegrid_cams_pane_g

0xc8bc,	// (0x0007d531) popup_clock_analogue_window

0xc8bc,	// (0x0007d531) popup_clock_digital_window

0x1be3,	// (0x00072858) popup_phob_thumbnail_window

0x1e64,	// (0x00072ad9) call_video_uplink_pane_g1

0xc8c5,	// (0x0007d53a) call_video_uplink_pane_g2

0x0001,

0xf309,	// (0x0007ff7e) call_video_uplink_pane_g

0xc8cd,	// (0x0007d542) video_uplink_pane

0xc8d5,	// (0x0007d54a) mce_image_pane_g1

0x573f,	// (0x000763b4) mce_image_pane_g2

0x5747,	// (0x000763bc) mce_image_pane_g3

0x574f,	// (0x000763c4) mce_image_pane_g4

0x5757,	// (0x000763cc) mce_image_pane_g5

0x0004,

0xf30e,	// (0x0007ff83) mce_image_pane_g

0xc8df,	// (0x0007d554) control_top_pane_stacon_cp01_ParamLimits

0xc8df,	// (0x0007d554) control_top_pane_stacon_cp01

0xc8f3,	// (0x0007d568) uni_indicator_pane_stacon_cp01_ParamLimits

0xc8f3,	// (0x0007d568) uni_indicator_pane_stacon_cp01

0xc904,	// (0x0007d579) bg_popup_sub_pane_cp03

0x575f,	// (0x000763d4) chi_dic_find_pane

0x5767,	// (0x000763dc) listscroll_chi_dic_pane

0x5770,	// (0x000763e5) main_pane_chidic_g1

0x5783,	// (0x000763f8) chi_dic_find_pane_t1

0xc90e,	// (0x0007d583) find_chidic_pane

0xc917,	// (0x0007d58c) chi_dic_list_pane_ParamLimits

0xc917,	// (0x0007d58c) chi_dic_list_pane

0xc928,	// (0x0007d59d) scroll_pane_cp020

0x5791,	// (0x00076406) find_chidic_pane_t1

0x1be3,	// (0x00072858) input_focus_pane_cp06

0x57a0,	// (0x00076415) list_chi_dic_pane_ParamLimits

0x57a0,	// (0x00076415) list_chi_dic_pane

0x57b2,	// (0x00076427) list_chi_dic_pane_t1_ParamLimits

0x57b2,	// (0x00076427) list_chi_dic_pane_t1

0x1be3,	// (0x00072858) list_highlight_pane_cp020

0xc930,	// (0x0007d5a5) bg_cale_heading_pane_g1

0x57c5,	// (0x0007643a) bg_cale_heading_pane_g2

0x57cd,	// (0x00076442) bg_cale_heading_pane_g3

0x57d5,	// (0x0007644a) bg_cale_heading_pane_g4

0x57df,	// (0x00076454) bg_cale_heading_pane_g5

0x57e9,	// (0x0007645e) bg_cale_heading_pane_g6

0x57f1,	// (0x00076466) bg_cale_heading_pane_g7

0x57f9,	// (0x0007646e) bg_cale_heading_pane_g8

0x5803,	// (0x00076478) bg_cale_heading_pane_g9

0x0008,

0xf319,	// (0x0007ff8e) bg_cale_heading_pane_g

0xc930,	// (0x0007d5a5) bg_cale_side_pane_g1

0x580d,	// (0x00076482) bg_cale_side_pane_g2

0x5815,	// (0x0007648a) bg_cale_side_pane_g3

0x581d,	// (0x00076492) bg_cale_side_pane_g4

0x5825,	// (0x0007649a) bg_cale_side_pane_g5

0x582d,	// (0x000764a2) bg_cale_side_pane_g6

0x5835,	// (0x000764aa) bg_cale_side_pane_g7

0x583d,	// (0x000764b2) bg_cale_side_pane_g8

0x5845,	// (0x000764ba) bg_cale_side_pane_g9

0x0008,

0xf32c,	// (0x0007ffa1) bg_cale_side_pane_g

0x584d,	// (0x000764c2) popup_call_status_window_ParamLimits

0x584d,	// (0x000764c2) popup_call_status_window

0xc938,	// (0x0007d5ad) stacon_top_pane

0xc940,	// (0x0007d5b5) status_pane_ParamLimits

0xc940,	// (0x0007d5b5) status_pane

0xc955,	// (0x0007d5ca) status_small_pane

0xc95d,	// (0x0007d5d2) control_pane

0x1be3,	// (0x00072858) stacon_bottom_pane

0xc965,	// (0x0007d5da) list_single_mce_smart_pane_t1_ParamLimits

0xc965,	// (0x0007d5da) list_single_mce_smart_pane_t1

0xc978,	// (0x0007d5ed) list_single_mce_smart_pane_t2_ParamLimits

0xc978,	// (0x0007d5ed) list_single_mce_smart_pane_t2

0x0001,

0xf33f,	// (0x0007ffb4) list_single_mce_smart_pane_t_ParamLimits

0xf33f,	// (0x0007ffb4) list_single_mce_smart_pane_t

0x5894,	// (0x00076509) compass_pane

0x589d,	// (0x00076512) main_location2_pane_t1

0x58af,	// (0x00076524) main_location2_pane_t2

0x58c1,	// (0x00076536) main_location2_pane_t3

0x0003,

0xf344,	// (0x0007ffb9) main_location2_pane_t

0xc997,	// (0x0007d60c) compass_pane_g1_ParamLimits

0xc997,	// (0x0007d60c) compass_pane_g1

0x5905,	// (0x0007657a) compass_pane_t1

0x5914,	// (0x00076589) compass_pane_t2

0x0005,

0xf34d,	// (0x0007ffc2) compass_pane_t

0x595b,	// (0x000765d0) text_secondary_cp61

0xca15,	// (0x0007d68a) navi_pane_cams_g5

0xca91,	// (0x0007d706) navi_pane_im_t1

0xca9f,	// (0x0007d714) navi_pane_mp_g1_ParamLimits

0xca9f,	// (0x0007d714) navi_pane_mp_g1

0xcab3,	// (0x0007d728) navi_pane_mp_g2_ParamLimits

0xcab3,	// (0x0007d728) navi_pane_mp_g2

0xcabf,	// (0x0007d734) navi_pane_mp_g3_ParamLimits

0xcabf,	// (0x0007d734) navi_pane_mp_g3

0x0002,

0xf361,	// (0x0007ffd6) navi_pane_mp_g_ParamLimits

0xf361,	// (0x0007ffd6) navi_pane_mp_g

0xcacb,	// (0x0007d740) navi_pane_mp_t1

0xcad9,	// (0x0007d74e) navi_pane_mp_t2

0x0002,

0xf368,	// (0x0007ffdd) navi_pane_mp_t

0xcb44,	// (0x0007d7b9) navi_pane_vt_g1

0xcacb,	// (0x0007d740) navi_pane_vt_t1

0xcb4c,	// (0x0007d7c1) navi_slider_pane

0x20eb,	// (0x00072d60) zooming_pane

0xcb5c,	// (0x0007d7d1) navi_slider_pane_g1

0xcb65,	// (0x0007d7da) navi_slider_pane_g2

0x0006,

0xf36f,	// (0x0007ffe4) navi_slider_pane_g

0xcb92,	// (0x0007d807) aid_levels_zoom

0xcb9a,	// (0x0007d80f) zooming_pane_g1

0xcba2,	// (0x0007d817) zooming_pane_g2

0xcba2,	// (0x0007d817) zooming_pane_g3

0x0002,

0xf37e,	// (0x0007fff3) zooming_pane_g

0xcbaa,	// (0x0007d81f) level_10_zoom

0xcbb3,	// (0x0007d828) level_11_zoom

0xcbbc,	// (0x0007d831) level_1_zoom

0xcbc5,	// (0x0007d83a) level_2_zoom

0xcbce,	// (0x0007d843) level_3_zoom

0xcbd7,	// (0x0007d84c) level_4_zoom

0xcbe0,	// (0x0007d855) level_5_zoom

0xcbe9,	// (0x0007d85e) level_6_zoom

0xcbf2,	// (0x0007d867) level_7_zoom

0xcbfb,	// (0x0007d870) level_8_zoom

0xcc04,	// (0x0007d879) level_9_zoom

0xcc15,	// (0x0007d88a) popup_phob_thumbnail_window_g1

0xcc1d,	// (0x0007d892) popup_phob_thumbnail_window_g2

0x0001,

0xf385,	// (0x0007fffa) popup_phob_thumbnail_window_g

0x6369,	// (0x00076fde) level_1_location

0x6371,	// (0x00076fe6) level_2_location

0x6379,	// (0x00076fee) level_3_location

0x6381,	// (0x00076ff6) level_4_location

0x20eb,	// (0x00072d60) level_5_location

0x59ac,	// (0x00076621) mce_icon_pane_g1

0x59b4,	// (0x00076629) mce_icon_pane_g2

0x0001,

0xf38a,	// (0x0007ffff) mce_icon_pane_g

0x015e,	// (0x00070dd3) main_mup_pane_g1_ParamLimits

0x015e,	// (0x00070dd3) main_mup_pane_g1

0x015e,	// (0x00070dd3) main_mup_pane_g2_ParamLimits

0x015e,	// (0x00070dd3) main_mup_pane_g2

0x015e,	// (0x00070dd3) main_mup_pane_g3_ParamLimits

0x015e,	// (0x00070dd3) main_mup_pane_g3

0x015e,	// (0x00070dd3) main_mup_pane_g4_ParamLimits

0x015e,	// (0x00070dd3) main_mup_pane_g4

0x015e,	// (0x00070dd3) main_mup_pane_g5_ParamLimits

0x015e,	// (0x00070dd3) main_mup_pane_g5

0x015e,	// (0x00070dd3) main_mup_pane_g6_ParamLimits

0x015e,	// (0x00070dd3) main_mup_pane_g6

0x015e,	// (0x00070dd3) main_mup_pane_g7_ParamLimits

0x015e,	// (0x00070dd3) main_mup_pane_g7

0x015e,	// (0x00070dd3) main_mup_pane_g8_ParamLimits

0x015e,	// (0x00070dd3) main_mup_pane_g8

0x015e,	// (0x00070dd3) main_mup_pane_g9_ParamLimits

0x015e,	// (0x00070dd3) main_mup_pane_g9

0x015e,	// (0x00070dd3) main_mup_pane_g10_ParamLimits

0x015e,	// (0x00070dd3) main_mup_pane_g10

0x015e,	// (0x00070dd3) main_mup_pane_g11_ParamLimits

0x015e,	// (0x00070dd3) main_mup_pane_g11

0x1ec7,	// (0x00072b3c) main_mup_pane_g12_ParamLimits

0x1ec7,	// (0x00072b3c) main_mup_pane_g12

0x015e,	// (0x00070dd3) main_mup_pane_g13_ParamLimits

0x015e,	// (0x00070dd3) main_mup_pane_g13

0x000c,

0xf38f,	// (0x00080004) main_mup_pane_g_ParamLimits

0xf38f,	// (0x00080004) main_mup_pane_g

0x016c,	// (0x00070de1) main_mup_pane_t1_ParamLimits

0x016c,	// (0x00070de1) main_mup_pane_t1

0x016c,	// (0x00070de1) main_mup_pane_t2_ParamLimits

0x016c,	// (0x00070de1) main_mup_pane_t2

0x016c,	// (0x00070de1) main_mup_pane_t3_ParamLimits

0x016c,	// (0x00070de1) main_mup_pane_t3

0x2127,	// (0x00072d9c) main_mup_pane_t4_ParamLimits

0x2127,	// (0x00072d9c) main_mup_pane_t4

0x2127,	// (0x00072d9c) main_mup_pane_t5_ParamLimits

0x2127,	// (0x00072d9c) main_mup_pane_t5

0x24c4,	// (0x00073139) main_mup_pane_t6_ParamLimits

0x24c4,	// (0x00073139) main_mup_pane_t6

0x0005,

0xf3aa,	// (0x0008001f) main_mup_pane_t_ParamLimits

0xf3aa,	// (0x0008001f) main_mup_pane_t

0x1e36,	// (0x00072aab) mup_progress_pane_ParamLimits

0x1e36,	// (0x00072aab) mup_progress_pane

0xcc25,	// (0x0007d89a) mup_visualizer_pane_ParamLimits

0xcc25,	// (0x0007d89a) mup_visualizer_pane

0xcc25,	// (0x0007d89a) mup_volume_pane_ParamLimits

0xcc25,	// (0x0007d89a) mup_volume_pane

0x1ed5,	// (0x00072b4a) mup_visualizer_pane_g1_ParamLimits

0x1ed5,	// (0x00072b4a) mup_visualizer_pane_g1

0xcc33,	// (0x0007d8a8) mup_visualizer_pane_g2_ParamLimits

0xcc33,	// (0x0007d8a8) mup_visualizer_pane_g2

0x1ec7,	// (0x00072b3c) mup_visualizer_pane_g3_ParamLimits

0x1ec7,	// (0x00072b3c) mup_visualizer_pane_g3

0x0002,

0xf3b7,	// (0x0008002c) mup_visualizer_pane_g_ParamLimits

0xf3b7,	// (0x0008002c) mup_visualizer_pane_g

0x210d,	// (0x00072d82) mup_volume_pane_g1

0x210d,	// (0x00072d82) mup_volume_pane_g2

0x0001,

0xf3be,	// (0x00080033) mup_volume_pane_g

0x210d,	// (0x00072d82) mup_progress_pane_g1

0x210d,	// (0x00072d82) mup_progress_pane_g2

0x210d,	// (0x00072d82) mup_progress_pane_g3

0x0002,

0xf3c3,	// (0x00080038) mup_progress_pane_g

0x1be3,	// (0x00072858) bg_popup_window_pane_cp05

0xcc41,	// (0x0007d8b6) heading_pane_cp02_ParamLimits

0xcc41,	// (0x0007d8b6) heading_pane_cp02

0xcc5b,	// (0x0007d8d0) list_popup_blid_pane

0xcc63,	// (0x0007d8d8) list_blid_sat_info_pane_ParamLimits

0xcc63,	// (0x0007d8d8) list_blid_sat_info_pane

0xcc76,	// (0x0007d8eb) list_blid_sat_info_pane_g1

0xcc7e,	// (0x0007d8f3) list_blid_sat_info_pane_t1

0x5ab4,	// (0x00076729) mup_equalizer_pane_ParamLimits

0x5ab4,	// (0x00076729) mup_equalizer_pane

0x5acd,	// (0x00076742) mup_equalizer_pane_cp1_ParamLimits

0x5acd,	// (0x00076742) mup_equalizer_pane_cp1

0x5aea,	// (0x0007675f) mup_equalizer_pane_cp2_ParamLimits

0x5aea,	// (0x0007675f) mup_equalizer_pane_cp2

0x5b07,	// (0x0007677c) mup_equalizer_pane_cp3_ParamLimits

0x5b07,	// (0x0007677c) mup_equalizer_pane_cp3

0x5b28,	// (0x0007679d) mup_equalizer_pane_cp4_ParamLimits

0x5b28,	// (0x0007679d) mup_equalizer_pane_cp4

0x5b49,	// (0x000767be) mup_equalizer_pane_cp5

0x5b5d,	// (0x000767d2) mup_equalizer_pane_cp6

0x5b71,	// (0x000767e6) mup_equalizer_pane_cp7

0xde9f,	// (0x0007eb14) bg_popup_call_poc_act_pane_g9

0xdea7,	// (0x0007eb1c) bg_popup_call_poc_act_pane_g10

0xdeaf,	// (0x0007eb24) bg_popup_call_poc_act_pane_g11

0x000a,

0x1e4c,	// (0x00072ac1) mup_scale_pane

0x1e64,	// (0x00072ad9) mup_scale_pane_g1

0xcc8c,	// (0x0007d901) mup_scale_pane_g2

0x0006,

0xf3df,	// (0x00080054) mup_scale_pane_g

0xccb0,	// (0x0007d925) msg_data_pane

0xccb8,	// (0x0007d92d) scroll_pane_cp017

0x3334,	// (0x00073fa9) bg_list_pane_cp04_ParamLimits

0x3334,	// (0x00073fa9) bg_list_pane_cp04

0xccc8,	// (0x0007d93d) msg_data_pane_g1

0x5b97,	// (0x0007680c) msg_data_pane_g2

0x5b9f,	// (0x00076814) msg_data_pane_g3

0x5ba7,	// (0x0007681c) msg_data_pane_g4

0x5baf,	// (0x00076824) msg_data_pane_g5

0x5bb7,	// (0x0007682c) msg_data_pane_g6

0x5bbf,	// (0x00076834) msg_data_pane_g7

0x0006,

0xf3ee,	// (0x00080063) msg_data_pane_g

0x334c,	// (0x00073fc1) msg_text_pane_ParamLimits

0x334c,	// (0x00073fc1) msg_text_pane

0x5bc7,	// (0x0007683c) qrid_highlight_pane_cp011_ParamLimits

0x5bc7,	// (0x0007683c) qrid_highlight_pane_cp011

0x1be3,	// (0x00072858) msg_body_pane

0x1be3,	// (0x00072858) msg_header_pane

0xccd9,	// (0x0007d94e) input_focus_pane_cp07

0xccee,	// (0x0007d963) msg_header_pane_t1_ParamLimits

0xccee,	// (0x0007d963) msg_header_pane_t1

0xcd04,	// (0x0007d979) msg_header_pane_t2_ParamLimits

0xcd04,	// (0x0007d979) msg_header_pane_t2

0x0001,

0xf402,	// (0x00080077) msg_header_pane_t_ParamLimits

0xf402,	// (0x00080077) msg_header_pane_t

0xcd1b,	// (0x0007d990) msg_body_pane_g1

0xcd23,	// (0x0007d998) msg_body_pane_t1_ParamLimits

0xcd23,	// (0x0007d998) msg_body_pane_t1

0xcd54,	// (0x0007d9c9) msg_body_pane_t2_ParamLimits

0xcd54,	// (0x0007d9c9) msg_body_pane_t2

0xcd66,	// (0x0007d9db) msg_body_pane_t3_ParamLimits

0xcd66,	// (0x0007d9db) msg_body_pane_t3

0x0002,

0xf407,	// (0x0008007c) msg_body_pane_t_ParamLimits

0xf407,	// (0x0008007c) msg_body_pane_t

0x5c17,	// (0x0007688c) main_viewer_pane_g1_ParamLimits

0x5c17,	// (0x0007688c) main_viewer_pane_g1

0x5c25,	// (0x0007689a) main_viewer_pane_g2_ParamLimits

0x5c25,	// (0x0007689a) main_viewer_pane_g2

0x5c33,	// (0x000768a8) main_viewer_pane_g3_ParamLimits

0x5c33,	// (0x000768a8) main_viewer_pane_g3

0x5c42,	// (0x000768b7) main_viewer_pane_g4_ParamLimits

0x5c42,	// (0x000768b7) main_viewer_pane_g4

0xcd90,	// (0x0007da05) main_viewer_pane_g5_ParamLimits

0xcd90,	// (0x0007da05) main_viewer_pane_g5

0xcd90,	// (0x0007da05) main_viewer_pane_g7_ParamLimits

0xcd90,	// (0x0007da05) main_viewer_pane_g7

0xcda2,	// (0x0007da17) main_viewer_pane_g8_ParamLimits

0xcda2,	// (0x0007da17) main_viewer_pane_g8

0x0007,

0xf417,	// (0x0008008c) main_viewer_pane_g_ParamLimits

0xf417,	// (0x0008008c) main_viewer_pane_g

0xcdba,	// (0x0007da2f) viewer_content_pane_ParamLimits

0xcdba,	// (0x0007da2f) viewer_content_pane

0x5c7e,	// (0x000768f3) main_postcard_pane_g1_ParamLimits

0x5c7e,	// (0x000768f3) main_postcard_pane_g1

0x5c94,	// (0x00076909) main_postcard_pane_g2_ParamLimits

0x5c94,	// (0x00076909) main_postcard_pane_g2

0x5caa,	// (0x0007691f) main_postcard_pane_g3_ParamLimits

0x5caa,	// (0x0007691f) main_postcard_pane_g3

0x0005,

0xf428,	// (0x0008009d) main_postcard_pane_g_ParamLimits

0xf428,	// (0x0008009d) main_postcard_pane_g

0x5cc1,	// (0x00076936) main_postcard_pane_g4

0xe077,	// (0x0007ecec) smil_status_volume_pane_g2

0x5d04,	// (0x00076979) postcard_pane_ParamLimits

0x5d04,	// (0x00076979) postcard_pane

0xcdc8,	// (0x0007da3d) postcard_pane_g1_ParamLimits

0xcdc8,	// (0x0007da3d) postcard_pane_g1

0x5d46,	// (0x000769bb) postcard_pane_g2_ParamLimits

0x5d46,	// (0x000769bb) postcard_pane_g2

0x5d52,	// (0x000769c7) postcard_pane_g3_ParamLimits

0x5d52,	// (0x000769c7) postcard_pane_g3

0xcdd6,	// (0x0007da4b) postcard_pane_g4_ParamLimits

0xcdd6,	// (0x0007da4b) postcard_pane_g4

0x5d5e,	// (0x000769d3) postcard_pane_g5_ParamLimits

0x5d5e,	// (0x000769d3) postcard_pane_g5

0x5d73,	// (0x000769e8) postcard_pane_g6_ParamLimits

0x5d73,	// (0x000769e8) postcard_pane_g6

0xcdc8,	// (0x0007da3d) postcard_pane_g7_ParamLimits

0xcdc8,	// (0x0007da3d) postcard_pane_g7

0x0006,

0xf435,	// (0x000800aa) postcard_pane_g_ParamLimits

0xf435,	// (0x000800aa) postcard_pane_g

0x5d87,	// (0x000769fc) main_mp2_pane_g1_ParamLimits

0x5d87,	// (0x000769fc) main_mp2_pane_g1

0x5d93,	// (0x00076a08) main_mp2_pane_g2_ParamLimits

0x5d93,	// (0x00076a08) main_mp2_pane_g2

0x5d9f,	// (0x00076a14) main_mp2_pane_g3_ParamLimits

0x5d9f,	// (0x00076a14) main_mp2_pane_g3

0x0002,

0xf444,	// (0x000800b9) main_mp2_pane_g_ParamLimits

0xf444,	// (0x000800b9) main_mp2_pane_g

0x5dab,	// (0x00076a20) main_mp2_pane_t1_ParamLimits

0x5dab,	// (0x00076a20) main_mp2_pane_t1

0x5dc0,	// (0x00076a35) main_mp2_pane_t2_ParamLimits

0x5dc0,	// (0x00076a35) main_mp2_pane_t2

0x5dd2,	// (0x00076a47) main_mp2_pane_t3_ParamLimits

0x5dd2,	// (0x00076a47) main_mp2_pane_t3

0x0002,

0xf44b,	// (0x000800c0) main_mp2_pane_t_ParamLimits

0xf44b,	// (0x000800c0) main_mp2_pane_t

0xcde4,	// (0x0007da59) pec_content_pane_ParamLimits

0xcde4,	// (0x0007da59) pec_content_pane

0x2282,	// (0x00072ef7) scroll_pane_cp015

0xcdf6,	// (0x0007da6b) pec_attribute_pane_ParamLimits

0xcdf6,	// (0x0007da6b) pec_attribute_pane

0x5de4,	// (0x00076a59) pec_content_pane_g1_ParamLimits

0x5de4,	// (0x00076a59) pec_content_pane_g1

0xce06,	// (0x0007da7b) pec_content_pane_t1_ParamLimits

0xce06,	// (0x0007da7b) pec_content_pane_t1

0xce18,	// (0x0007da8d) pec_content_pane_t2_ParamLimits

0xce18,	// (0x0007da8d) pec_content_pane_t2

0x0001,

0xf452,	// (0x000800c7) pec_content_pane_t_ParamLimits

0xf452,	// (0x000800c7) pec_content_pane_t

0x5df0,	// (0x00076a65) list_single_graphic_pane_cp01_ParamLimits

0x5df0,	// (0x00076a65) list_single_graphic_pane_cp01

0x1e4c,	// (0x00072ac1) bg_popup_sub_pane_cp04

0xce2a,	// (0x0007da9f) popup_mup_playback_window_g1

0xce36,	// (0x0007daab) popup_mup_playback_window_t1

0xce4b,	// (0x0007dac0) popup_mup_playback_window_t2

0x0001,

0xf457,	// (0x000800cc) popup_mup_playback_window_t

0xce82,	// (0x0007daf7) main_image_pane_g1_ParamLimits

0xce82,	// (0x0007daf7) main_image_pane_g1

0xcec5,	// (0x0007db3a) scroll_pane_cp018_ParamLimits

0xcec5,	// (0x0007db3a) scroll_pane_cp018

0xcedd,	// (0x0007db52) scroll_pane_cp016_ParamLimits

0xcedd,	// (0x0007db52) scroll_pane_cp016

0x5ebe,	// (0x00076b33) smil2_image_pane_ParamLimits

0x5ebe,	// (0x00076b33) smil2_image_pane

0x5eee,	// (0x00076b63) smil2_root_pane_ParamLimits

0x5eee,	// (0x00076b63) smil2_root_pane

0x5f26,	// (0x00076b9b) smil2_text_pane_ParamLimits

0x5f26,	// (0x00076b9b) smil2_text_pane

0x1be3,	// (0x00072858) bg_list_pane_cp06

0xcf19,	// (0x0007db8e) grid_radio_pane

0x1be3,	// (0x00072858) bg_popup_window_pane_cp06

0xcf21,	// (0x0007db96) main_fmradio_pane_t1

0xdef7,	// (0x0007eb6c) heading_pane_cp04

0xcf2f,	// (0x0007dba4) main_fmradio_pane_t2

0xdeff,	// (0x0007eb74) popup_cale_lunar_info_window_g1

0xcf3d,	// (0x0007dbb2) main_fmradio_pane_t3

0xdf07,	// (0x0007eb7c) popup_cale_lunar_info_window_g2

0xcf4b,	// (0x0007dbc0) main_fmradio_pane_t4

0x0001,

0xcf59,	// (0x0007dbce) main_fmradio_pane_t5

0x0004,

0xf54a,	// (0x000801bf) popup_cale_lunar_info_window_g

0xf46c,	// (0x000800e1) main_fmradio_pane_t

0xcf67,	// (0x0007dbdc) wait_bar_pane_cp03

0xcf6f,	// (0x0007dbe4) cell_fmradio_pane_ParamLimits

0xcf6f,	// (0x0007dbe4) cell_fmradio_pane

0xcdc8,	// (0x0007da3d) cell_fmradio_pane_g1_ParamLimits

0xcdc8,	// (0x0007da3d) cell_fmradio_pane_g1

0x1be3,	// (0x00072858) grid_highlight_pane_cp011

0xcf82,	// (0x0007dbf7) poc_content_pane_ParamLimits

0xcf82,	// (0x0007dbf7) poc_content_pane

0xcf94,	// (0x0007dc09) scroll_pane_cp019

0x5fa6,	// (0x00076c1b) popup_call_poc_act_window_ParamLimits

0x5fa6,	// (0x00076c1b) popup_call_poc_act_window

0x5fca,	// (0x00076c3f) popup_call_poc_inact_window_ParamLimits

0x5fca,	// (0x00076c3f) popup_call_poc_inact_window

0xf50e,	// (0x00080183) bg_popup_call_poc_act_pane_g

0xdeb7,	// (0x0007eb2c) bg_popup_call_poc_inact_pane_g1

0xdebf,	// (0x0007eb34) bg_popup_call_poc_inact_pane_g2

0xcf9c,	// (0x0007dc11) popup_call_poc_act_window_g2

0xdec7,	// (0x0007eb3c) bg_popup_call_poc_inact_pane_g3

0xde47,	// (0x0007eabc) bg_popup_call_poc_inact_pane_g4

0xdecf,	// (0x0007eb44) bg_popup_call_poc_inact_pane_g5

0xcfa4,	// (0x0007dc19) popup_call_poc_act_window_t1_ParamLimits

0xcfa4,	// (0x0007dc19) popup_call_poc_act_window_t1

0xcfcc,	// (0x0007dc41) popup_call_poc_act_window_t2_ParamLimits

0xcfcc,	// (0x0007dc41) popup_call_poc_act_window_t2

0xcff4,	// (0x0007dc69) popup_call_poc_act_window_t3_ParamLimits

0xcff4,	// (0x0007dc69) popup_call_poc_act_window_t3

0xd01c,	// (0x0007dc91) popup_call_poc_act_window_t4_ParamLimits

0xd01c,	// (0x0007dc91) popup_call_poc_act_window_t4

0x0003,

0xf477,	// (0x000800ec) popup_call_poc_act_window_t_ParamLimits

0xf477,	// (0x000800ec) popup_call_poc_act_window_t

0xded7,	// (0x0007eb4c) bg_popup_call_poc_inact_pane_g6

0xdedf,	// (0x0007eb54) bg_popup_call_poc_inact_pane_g7

0xdee7,	// (0x0007eb5c) bg_popup_call_poc_inact_pane_g8

0xd02e,	// (0x0007dca3) popup_call_poc_inact_window_g2

0xdeef,	// (0x0007eb64) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf525,	// (0x0008019a) bg_popup_call_poc_inact_pane_g

0xd036,	// (0x0007dcab) popup_call_poc_inact_window_t1_ParamLimits

0xd036,	// (0x0007dcab) popup_call_poc_inact_window_t1

0xd04b,	// (0x0007dcc0) popup_call_poc_inact_window_t2_ParamLimits

0xd04b,	// (0x0007dcc0) popup_call_poc_inact_window_t2

0xd060,	// (0x0007dcd5) popup_call_poc_inact_window_t3_ParamLimits

0xd060,	// (0x0007dcd5) popup_call_poc_inact_window_t3

0x0002,

0xf480,	// (0x000800f5) popup_call_poc_inact_window_t_ParamLimits

0xf480,	// (0x000800f5) popup_call_poc_inact_window_t

0xdfef,	// (0x0007ec64) context_pane_ParamLimits

0x6833,	// (0x000774a8) signal_pane_ParamLimits

0x20eb,	// (0x00072d60) main_call2_pane

0xdfc8,	// (0x0007ec3d) popup_phob_thumbnail2_window_ParamLimits

0xdfc8,	// (0x0007ec3d) popup_phob_thumbnail2_window

0xcd78,	// (0x0007d9ed) aid_hotspot_pointer_arrow_pane

0xcd80,	// (0x0007d9f5) aid_hotspot_pointer_hand_pane

0x6333,	// (0x00076fa8) phob_pre_status_pane_g5

0x1e6e,	// (0x00072ae3) cams_zoom_pane_ParamLimits

0x1e6e,	// (0x00072ae3) image_vga_pane_ParamLimits

0x1ec7,	// (0x00072b3c) main_camera_pane_g1_ParamLimits

0x1ec7,	// (0x00072b3c) main_camera_pane_g2_ParamLimits

0x1ec7,	// (0x00072b3c) main_camera_pane_g3_ParamLimits

0x1ec7,	// (0x00072b3c) main_camera_pane_g4_ParamLimits

0x1ec7,	// (0x00072b3c) main_camera_pane_g5_ParamLimits

0x1ec7,	// (0x00072b3c) main_camera_pane_g6_ParamLimits

0x1ec7,	// (0x00072b3c) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x0007fe20) main_camera_pane_g_ParamLimits

0x2127,	// (0x00072d9c) main_camera_pane_t1_ParamLimits

0x2127,	// (0x00072d9c) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x0007fe31) main_camera_pane_t_ParamLimits

0x1e4c,	// (0x00072ac1) bg_popup_preview_window_pane_cp01_ParamLimits

0x1e4c,	// (0x00072ac1) bg_popup_preview_window_pane_cp01

0xd075,	// (0x0007dcea) popup_phob_thumbnail2_window_g1_ParamLimits

0xd075,	// (0x0007dcea) popup_phob_thumbnail2_window_g1

0x1be3,	// (0x00072858) call2_cli_visual_pane

0x5ffe,	// (0x00076c73) popup_call2_audio_conf_window_ParamLimits

0x5ffe,	// (0x00076c73) popup_call2_audio_conf_window

0x601e,	// (0x00076c93) popup_call2_audio_first_window_ParamLimits

0x601e,	// (0x00076c93) popup_call2_audio_first_window

0x60b4,	// (0x00076d29) popup_call2_audio_in_window_ParamLimits

0x60b4,	// (0x00076d29) popup_call2_audio_in_window

0x60fc,	// (0x00076d71) popup_call2_audio_out_window_ParamLimits

0x60fc,	// (0x00076d71) popup_call2_audio_out_window

0x6166,	// (0x00076ddb) popup_call2_audio_second_window_ParamLimits

0x6166,	// (0x00076ddb) popup_call2_audio_second_window

0x61cc,	// (0x00076e41) popup_call2_audio_wait_window_ParamLimits

0x61cc,	// (0x00076e41) popup_call2_audio_wait_window

0x1be3,	// (0x00072858) bg_popup_call2_act_pane_cp03

0x1e20,	// (0x00072a95) list_conf_pane_cp

0xd081,	// (0x0007dcf6) popup_call2_audio_conf_window_t1

0xd08f,	// (0x0007dd04) list_single_graphic_popup_conf2_pane_ParamLimits

0xd08f,	// (0x0007dd04) list_single_graphic_popup_conf2_pane

0xc883,	// (0x0007d4f8) list_highlight_pane_cp04

0xd0a2,	// (0x0007dd17) list_single_graphic_popup_conf2_pane_g1

0xc894,	// (0x0007d509) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf487,	// (0x000800fc) list_single_graphic_popup_conf2_pane_g

0xd0ac,	// (0x0007dd21) list_single_graphic_popup_conf2_pane_t1

0xd0ba,	// (0x0007dd2f) bg_popup_call2_act_pane_cp01_ParamLimits

0xd0ba,	// (0x0007dd2f) bg_popup_call2_act_pane_cp01

0xd144,	// (0x0007ddb9) call_type_pane_cp05_ParamLimits

0xd144,	// (0x0007ddb9) call_type_pane_cp05

0xd198,	// (0x0007de0d) popup_call2_audio_second_window_g1_ParamLimits

0xd198,	// (0x0007de0d) popup_call2_audio_second_window_g1

0xd1ec,	// (0x0007de61) popup_call2_audio_second_window_g2_ParamLimits

0xd1ec,	// (0x0007de61) popup_call2_audio_second_window_g2

0x0002,

0xf48c,	// (0x00080101) popup_call2_audio_second_window_g_ParamLimits

0xf48c,	// (0x00080101) popup_call2_audio_second_window_g

0xd251,	// (0x0007dec6) popup_call2_audio_second_window_t1_ParamLimits

0xd251,	// (0x0007dec6) popup_call2_audio_second_window_t1

0xd30c,	// (0x0007df81) popup_call2_audio_second_window_t2_ParamLimits

0xd30c,	// (0x0007df81) popup_call2_audio_second_window_t2

0xd35f,	// (0x0007dfd4) popup_call2_audio_second_window_t3_ParamLimits

0xd35f,	// (0x0007dfd4) popup_call2_audio_second_window_t3

0x0003,

0xf493,	// (0x00080108) popup_call2_audio_second_window_t_ParamLimits

0xf493,	// (0x00080108) popup_call2_audio_second_window_t

0x1be3,	// (0x00072858) bg_popup_call2_in_pane_cp02

0x1bed,	// (0x00072862) call_type_pane_cp04

0x6206,	// (0x00076e7b) popup_call2_audio_wait_window_g1

0x620e,	// (0x00076e83) popup_call2_audio_wait_window_g2

0x0001,

0xf49c,	// (0x00080111) popup_call2_audio_wait_window_g

0x1c05,	// (0x0007287a) popup_call2_audio_wait_window_t3

0xd452,	// (0x0007e0c7) bg_popup_call2_act_pane_ParamLimits

0xd452,	// (0x0007e0c7) bg_popup_call2_act_pane

0xd512,	// (0x0007e187) call_type_pane_cp03_ParamLimits

0xd512,	// (0x0007e187) call_type_pane_cp03

0xd576,	// (0x0007e1eb) popup_call2_audio_first_window_g1_ParamLimits

0xd576,	// (0x0007e1eb) popup_call2_audio_first_window_g1

0xd5e6,	// (0x0007e25b) popup_call2_audio_first_window_g2_ParamLimits

0xd5e6,	// (0x0007e25b) popup_call2_audio_first_window_g2

0xd64a,	// (0x0007e2bf) popup_call2_audio_first_window_g3_ParamLimits

0xd64a,	// (0x0007e2bf) popup_call2_audio_first_window_g3

0x0004,

0xf4a1,	// (0x00080116) popup_call2_audio_first_window_g_ParamLimits

0xf4a1,	// (0x00080116) popup_call2_audio_first_window_g

0xd6d2,	// (0x0007e347) popup_call2_audio_first_window_t1_ParamLimits

0xd6d2,	// (0x0007e347) popup_call2_audio_first_window_t1

0xd7d5,	// (0x0007e44a) popup_call2_audio_first_window_t4_ParamLimits

0xd7d5,	// (0x0007e44a) popup_call2_audio_first_window_t4

0xd8b8,	// (0x0007e52d) popup_call2_audio_first_window_t5_ParamLimits

0xd8b8,	// (0x0007e52d) popup_call2_audio_first_window_t5

0x0003,

0xf4ac,	// (0x00080121) popup_call2_audio_first_window_t_ParamLimits

0xf4ac,	// (0x00080121) popup_call2_audio_first_window_t

0x1e44,	// (0x00072ab9) bg_popup_call2_act_pane_g1

0xdf0f,	// (0x0007eb84) popup_cale_lunar_info_window_t1

0xdf1d,	// (0x0007eb92) popup_cale_lunar_info_window_t2

0xdf2b,	// (0x0007eba0) popup_cale_lunar_info_window_t3

0x1be3,	// (0x00072858) bg_popup_call2_bubble_pane

0xd9b9,	// (0x0007e62e) bg_popup_call2_in_pane_cp01_ParamLimits

0xd9b9,	// (0x0007e62e) bg_popup_call2_in_pane_cp01

0x18bf,	// (0x00072534) call_type_pane_cp02

0x6216,	// (0x00076e8b) popup_call2_audio_out_window_g1_ParamLimits

0x6216,	// (0x00076e8b) popup_call2_audio_out_window_g1

0xda01,	// (0x0007e676) popup_call2_audio_out_window_g2_ParamLimits

0xda01,	// (0x0007e676) popup_call2_audio_out_window_g2

0x6242,	// (0x00076eb7) popup_call2_audio_out_window_g3_ParamLimits

0x6242,	// (0x00076eb7) popup_call2_audio_out_window_g3

0x0003,

0xf4b5,	// (0x0008012a) popup_call2_audio_out_window_g_ParamLimits

0xf4b5,	// (0x0008012a) popup_call2_audio_out_window_g

0xda38,	// (0x0007e6ad) popup_call2_audio_out_window_t1_ParamLimits

0xda38,	// (0x0007e6ad) popup_call2_audio_out_window_t1

0xda97,	// (0x0007e70c) popup_call2_audio_out_window_t2_ParamLimits

0xda97,	// (0x0007e70c) popup_call2_audio_out_window_t2

0xdaeb,	// (0x0007e760) popup_call2_audio_out_window_t3_ParamLimits

0xdaeb,	// (0x0007e760) popup_call2_audio_out_window_t3

0xdb01,	// (0x0007e776) popup_call2_audio_out_window_t4_ParamLimits

0xdb01,	// (0x0007e776) popup_call2_audio_out_window_t4

0xdb17,	// (0x0007e78c) popup_call2_audio_out_window_t5_ParamLimits

0xdb17,	// (0x0007e78c) popup_call2_audio_out_window_t5

0x0005,

0xf4be,	// (0x00080133) popup_call2_audio_out_window_t_ParamLimits

0xf4be,	// (0x00080133) popup_call2_audio_out_window_t

0xdb7b,	// (0x0007e7f0) bg_popup_call2_in_pane_ParamLimits

0xdb7b,	// (0x0007e7f0) bg_popup_call2_in_pane

0xdbd7,	// (0x0007e84c) popup_call2_audio_in_window_g1_ParamLimits

0xdbd7,	// (0x0007e84c) popup_call2_audio_in_window_g1

0xdc0f,	// (0x0007e884) popup_call2_audio_in_window_g2_ParamLimits

0xdc0f,	// (0x0007e884) popup_call2_audio_in_window_g2

0xdc47,	// (0x0007e8bc) popup_call2_audio_in_window_g3_ParamLimits

0xdc47,	// (0x0007e8bc) popup_call2_audio_in_window_g3

0x0003,

0xf4cb,	// (0x00080140) popup_call2_audio_in_window_g_ParamLimits

0xf4cb,	// (0x00080140) popup_call2_audio_in_window_g

0xdc9f,	// (0x0007e914) popup_call2_audio_in_window_t1_ParamLimits

0xdc9f,	// (0x0007e914) popup_call2_audio_in_window_t1

0xdd1f,	// (0x0007e994) popup_call2_audio_in_window_t2_ParamLimits

0xdd1f,	// (0x0007e994) popup_call2_audio_in_window_t2

0xdd9f,	// (0x0007ea14) popup_call2_audio_in_window_t3_ParamLimits

0xdd9f,	// (0x0007ea14) popup_call2_audio_in_window_t3

0xddb9,	// (0x0007ea2e) popup_call2_audio_in_window_t4_ParamLimits

0xddb9,	// (0x0007ea2e) popup_call2_audio_in_window_t4

0xddcb,	// (0x0007ea40) popup_call2_audio_in_window_t5_ParamLimits

0xddcb,	// (0x0007ea40) popup_call2_audio_in_window_t5

0xdddd,	// (0x0007ea52) popup_call2_audio_in_window_t6_ParamLimits

0xdddd,	// (0x0007ea52) popup_call2_audio_in_window_t6

0x0005,

0xf4d4,	// (0x00080149) popup_call2_audio_in_window_t_ParamLimits

0xf4d4,	// (0x00080149) popup_call2_audio_in_window_t

0x1e44,	// (0x00072ab9) bg_popup_call2_in_pane_g1

0xdf39,	// (0x0007ebae) popup_cale_lunar_info_window_t4

0x0003,

0xf54f,	// (0x000801c4) popup_cale_lunar_info_window_t

0x1e4c,	// (0x00072ac1) bg_popup_call2_rect_pane_ParamLimits

0x1e4c,	// (0x00072ac1) bg_popup_call2_rect_pane

0x1be3,	// (0x00072858) call2_cli_visual_graphic_pane

0x1be3,	// (0x00072858) call2_cli_visual_text_pane

0xe08a,	// (0x0007ecff) smil_status_volume_pane_g3

0x0002,

0x1e64,	// (0x00072ad9) call2_cli_visual_graphic_pane_g1

0x1e64,	// (0x00072ad9) call2_cli_visual_graphic_pane_g2

0x1e64,	// (0x00072ad9) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e1,	// (0x00080156) call2_cli_visual_graphic_pane_g

0xddef,	// (0x0007ea64) bg_popup_call2_rect_pane_g1

0x2010,	// (0x00072c85) bg_popup_call2_rect_pane_g2

0xddf7,	// (0x0007ea6c) bg_popup_call2_rect_pane_g3

0xddff,	// (0x0007ea74) bg_popup_call2_rect_pane_g4

0xde07,	// (0x0007ea7c) bg_popup_call2_rect_pane_g5

0xde0f,	// (0x0007ea84) bg_popup_call2_rect_pane_g6

0xde17,	// (0x0007ea8c) bg_popup_call2_rect_pane_g7

0xde1f,	// (0x0007ea94) bg_popup_call2_rect_pane_g8

0xde27,	// (0x0007ea9c) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e8,	// (0x0008015d) bg_popup_call2_rect_pane_g

0xde2f,	// (0x0007eaa4) bg_popup_call2_bubble_pane_g1

0xde37,	// (0x0007eaac) bg_popup_call2_bubble_pane_g2

0xde3f,	// (0x0007eab4) bg_popup_call2_bubble_pane_g3

0xde47,	// (0x0007eabc) bg_popup_call2_bubble_pane_g4

0xde4f,	// (0x0007eac4) bg_popup_call2_bubble_pane_g5

0xde57,	// (0x0007eacc) bg_popup_call2_bubble_pane_g6

0xde5f,	// (0x0007ead4) bg_popup_call2_bubble_pane_g7

0xde67,	// (0x0007eadc) bg_popup_call2_bubble_pane_g8

0xde6f,	// (0x0007eae4) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4fb,	// (0x00080170) bg_popup_call2_bubble_pane_g

0x40d9,	// (0x00074d4e) aid_cale_week_size_cell_pane

0x4689,	// (0x000752fe) aid_cams_cif_uncrop_pane_ParamLimits

0x4689,	// (0x000752fe) aid_cams_cif_uncrop_pane

0x47df,	// (0x00075454) aid_cams_size_cell_ParamLimits

0x47df,	// (0x00075454) aid_cams_size_cell

0x47f3,	// (0x00075468) grid_cams_pane_ParamLimits

0x480d,	// (0x00075482) linegrid_cams_pane_ParamLimits

0x48f3,	// (0x00075568) call_video_pane_t1

0x4911,	// (0x00075586) call_video_pane_t2

0x0001,

0xf208,	// (0x0007fe7d) call_video_pane_t

0x4d25,	// (0x0007599a) aid_cale_month_size_cell_pane_ParamLimits

0x4d25,	// (0x0007599a) aid_cale_month_size_cell_pane

0xf593,	// (0x00080208) smil_status_volume_pane_g

0xe097,	// (0x0007ed0c) volume_smil_pane_ParamLimits

0xc36c,	// (0x0007cfe1) aid_popup2_width_pane

0x403e,	// (0x00074cb3) cell_qdial_pane_g4_ParamLimits

0x403e,	// (0x00074cb3) cell_qdial_pane_g4

0x58e5,	// (0x0007655a) aid_blid_cardinal_pane_ParamLimits

0x58f1,	// (0x00076566) aid_blid_destination_pane_ParamLimits

0x58f1,	// (0x00076566) aid_blid_destination_pane

0x1e4c,	// (0x00072ac1) bg_popup_call_poc_act_pane_ParamLimits

0x1e4c,	// (0x00072ac1) bg_popup_call_poc_act_pane

0x1e4c,	// (0x00072ac1) bg_popup_call_poc_inact_pane_ParamLimits

0x1e4c,	// (0x00072ac1) bg_popup_call_poc_inact_pane

0xde77,	// (0x0007eaec) bg_popup_call_poc_act_pane_g1

0xde7f,	// (0x0007eaf4) bg_popup_call_poc_act_pane_g2

0xde87,	// (0x0007eafc) bg_popup_call_poc_act_pane_g3

0xde47,	// (0x0007eabc) bg_popup_call_poc_act_pane_g4

0xde4f,	// (0x0007eac4) bg_popup_call_poc_act_pane_g5

0xde8f,	// (0x0007eb04) bg_popup_call_poc_act_pane_g6

0xde5f,	// (0x0007ead4) bg_popup_call_poc_act_pane_g7

0xde97,	// (0x0007eb0c) bg_popup_call_poc_act_pane_g8

0x1be3,	// (0x00072858) main_usb_pane

0xdfa3,	// (0x0007ec18) popup_cale_lunar_info_window

0x4bdd,	// (0x00075852) im_reading_pane_t1_ParamLimits

0x21da,	// (0x00072e4f) list_im_pane_ParamLimits

0x21eb,	// (0x00072e60) scroll_pane_cp07_ParamLimits

0x1be3,	// (0x00072858) grid_highlight_pane_cp012

0x1e4c,	// (0x00072ac1) mup_scale_pane_ParamLimits

0xcdc8,	// (0x0007da3d) main_usb_pane_g1_ParamLimits

0xcdc8,	// (0x0007da3d) main_usb_pane_g1

0x6291,	// (0x00076f06) main_usb_pane_g2_ParamLimits

0x6291,	// (0x00076f06) main_usb_pane_g2

0x0001,

0xf538,	// (0x000801ad) main_usb_pane_g_ParamLimits

0xf538,	// (0x000801ad) main_usb_pane_g

0x62a7,	// (0x00076f1c) main_usb_pane_t1_ParamLimits

0x62a7,	// (0x00076f1c) main_usb_pane_t1

0x62b9,	// (0x00076f2e) main_usb_pane_t2_ParamLimits

0x62b9,	// (0x00076f2e) main_usb_pane_t2

0x62cb,	// (0x00076f40) main_usb_pane_t3_ParamLimits

0x62cb,	// (0x00076f40) main_usb_pane_t3

0x62dd,	// (0x00076f52) main_usb_pane_t4_ParamLimits

0x62dd,	// (0x00076f52) main_usb_pane_t4

0x62ef,	// (0x00076f64) main_usb_pane_t5_ParamLimits

0x62ef,	// (0x00076f64) main_usb_pane_t5

0x6301,	// (0x00076f76) main_usb_pane_t6_ParamLimits

0x6301,	// (0x00076f76) main_usb_pane_t6

0x0005,

0xf53d,	// (0x000801b2) main_usb_pane_t_ParamLimits

0x5894,	// (0x00076509) aid_text_placing

0x589d,	// (0x00076512) main_location2_pane_t1_ParamLimits

0x58af,	// (0x00076524) main_location2_pane_t2_ParamLimits

0x58c1,	// (0x00076536) main_location2_pane_t3_ParamLimits

0x58d3,	// (0x00076548) main_location2_pane_t4_ParamLimits

0x58d3,	// (0x00076548) main_location2_pane_t4

0xf344,	// (0x0007ffb9) main_location2_pane_t_ParamLimits

0x1e88,	// (0x00072afd) find_pinb_pane_g2_ParamLimits

0x1e88,	// (0x00072afd) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x0007fd35) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x0007fd35) find_pinb_pane_g

0x1e94,	// (0x00072b09) find_pinb_pane_t1_ParamLimits

0x1ea6,	// (0x00072b1b) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x0007fd3a) find_pinb_pane_t_ParamLimits

0x1be3,	// (0x00072858) main_call3_pane

0x520c,	// (0x00075e81) cale_month_day_heading_pane_t1_ParamLimits

0x524e,	// (0x00075ec3) cale_month_day_heading_pane_t2_ParamLimits

0x5283,	// (0x00075ef8) cale_month_day_heading_pane_t3_ParamLimits

0x52b8,	// (0x00075f2d) cale_month_day_heading_pane_t4_ParamLimits

0x52f5,	// (0x00075f6a) cale_month_day_heading_pane_t5_ParamLimits

0x533a,	// (0x00075faf) cale_month_day_heading_pane_t6_ParamLimits

0x537f,	// (0x00075ff4) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x0007feb5) cale_month_day_heading_pane_t_ParamLimits

0x2435,	// (0x000730aa) smil_status_volume_pane

0x5d22,	// (0x00076997) postcard_address_pane_ParamLimits

0x5d22,	// (0x00076997) postcard_address_pane

0x5d34,	// (0x000769a9) postcard_message_pane_ParamLimits

0x5d34,	// (0x000769a9) postcard_message_pane

0x626e,	// (0x00076ee3) call2_cli_visual_pane_t1_ParamLimits

0x626e,	// (0x00076ee3) call2_cli_visual_pane_t1

0xe0c4,	// (0x0007ed39) postcard_message_pane_t1_ParamLimits

0xe0c4,	// (0x0007ed39) postcard_message_pane_t1

0xe0ac,	// (0x0007ed21) postcard_address_pane_t1_ParamLimits

0xe0ac,	// (0x0007ed21) postcard_address_pane_t1

0x69e6,	// (0x0007765b) popup_call3_audio_in_window_ParamLimits

0x69e6,	// (0x0007765b) popup_call3_audio_in_window

0x6871,	// (0x000774e6) bg_popup_call3_in_pane_ParamLimits

0x6871,	// (0x000774e6) bg_popup_call3_in_pane

0x68e7,	// (0x0007755c) popup_call3_audio_in_window_g1_ParamLimits

0x68e7,	// (0x0007755c) popup_call3_audio_in_window_g1

0x6907,	// (0x0007757c) popup_call3_audio_in_window_g2_ParamLimits

0x6907,	// (0x0007757c) popup_call3_audio_in_window_g2

0x6927,	// (0x0007759c) popup_call3_audio_in_window_g3_ParamLimits

0x6927,	// (0x0007759c) popup_call3_audio_in_window_g3

0x0003,

0xf59a,	// (0x0008020f) popup_call3_audio_in_window_g_ParamLimits

0xf59a,	// (0x0008020f) popup_call3_audio_in_window_g

0x6958,	// (0x000775cd) popup_call3_audio_in_window_t1_ParamLimits

0x6958,	// (0x000775cd) popup_call3_audio_in_window_t1

0x6996,	// (0x0007760b) popup_call3_audio_in_window_t2_ParamLimits

0x6996,	// (0x0007760b) popup_call3_audio_in_window_t2

0x69d4,	// (0x00077649) popup_call3_audio_in_window_t3_ParamLimits

0x69d4,	// (0x00077649) popup_call3_audio_in_window_t3

0x0002,

0xf5a3,	// (0x00080218) popup_call3_audio_in_window_t_ParamLimits

0xf5a3,	// (0x00080218) popup_call3_audio_in_window_t

0x20eb,	// (0x00072d60) bg_popup_call3_rect_pane

0xddef,	// (0x0007ea64) bg_popup_call3_rect_pane_g1

0x2010,	// (0x00072c85) bg_popup_call3_rect_pane_g2

0xddf7,	// (0x0007ea6c) bg_popup_call3_rect_pane_g3

0xddff,	// (0x0007ea74) bg_popup_call3_rect_pane_g4

0xde07,	// (0x0007ea7c) bg_popup_call3_rect_pane_g5

0xde0f,	// (0x0007ea84) bg_popup_call3_rect_pane_g6

0xde17,	// (0x0007ea8c) bg_popup_call3_rect_pane_g7

0x17c6,	// (0x0007243b) mup_visualizer_osc_pane

0x17c6,	// (0x0007243b) mup_visualizer_spec_pane

0x68a1,	// (0x00077516) call3_video_qcif_pane_ParamLimits

0x68a1,	// (0x00077516) call3_video_qcif_pane

0x68b4,	// (0x00077529) call3_video_qcif_uncrop_pane_ParamLimits

0x68b4,	// (0x00077529) call3_video_qcif_uncrop_pane

0x68c2,	// (0x00077537) call3_video_subqcif_pane_ParamLimits

0x68c2,	// (0x00077537) call3_video_subqcif_pane

0x68d6,	// (0x0007754b) call3_video_subqcif_uncrop_pane_ParamLimits

0x68d6,	// (0x0007754b) call3_video_subqcif_uncrop_pane

0x6947,	// (0x000775bc) popup_call3_audio_in_window_g4_ParamLimits

0x6947,	// (0x000775bc) popup_call3_audio_in_window_g4

0x17c6,	// (0x0007243b) mup_spec_half_pane

0x17c6,	// (0x0007243b) mup_spec_half_pane_cp

0x17c6,	// (0x0007243b) mup_osc_middle_pane

0x210d,	// (0x00072d82) mup_visualizer_osc_pane_g1

0xe03d,	// (0x0007ecb2) mup_spec_bar_pane_ParamLimits

0xe03d,	// (0x0007ecb2) mup_spec_bar_pane

0x210d,	// (0x00072d82) mup_spec_bar_pane_g1

0x210d,	// (0x00072d82) mup_spec_bar_pane_g2

0x0001,

0xf3be,	// (0x00080033) mup_spec_bar_pane_g

0x40d9,	// (0x00074d4e) aid_cale_week_size_cell_pane_ParamLimits

0x40f3,	// (0x00074d68) bg_cale_heading_pane_ParamLimits

0x204d,	// (0x00072cc2) bg_cale_pane_cp01_ParamLimits

0x410b,	// (0x00074d80) cale_week_corner_pane_ParamLimits

0x412a,	// (0x00074d9f) cale_week_day_heading_pane_ParamLimits

0x4147,	// (0x00074dbc) cale_week_scroll_pane_g1_ParamLimits

0x415a,	// (0x00074dcf) cale_week_scroll_pane_g2_ParamLimits

0x4172,	// (0x00074de7) cale_week_scroll_pane_g3_ParamLimits

0x418a,	// (0x00074dff) cale_week_scroll_pane_g4_ParamLimits

0x41a2,	// (0x00074e17) cale_week_scroll_pane_g5_ParamLimits

0x41c2,	// (0x00074e37) cale_week_scroll_pane_g6_ParamLimits

0x41e2,	// (0x00074e57) cale_week_scroll_pane_g7_ParamLimits

0x4202,	// (0x00074e77) cale_week_scroll_pane_g8_ParamLimits

0x4226,	// (0x00074e9b) cale_week_scroll_pane_g9_ParamLimits

0x423e,	// (0x00074eb3) cale_week_scroll_pane_g10_ParamLimits

0x4256,	// (0x00074ecb) cale_week_scroll_pane_g11_ParamLimits

0x426e,	// (0x00074ee3) cale_week_scroll_pane_g12_ParamLimits

0x4286,	// (0x00074efb) cale_week_scroll_pane_g13_ParamLimits

0x4286,	// (0x00074efb) cale_week_scroll_pane_g14_ParamLimits

0x4286,	// (0x00074efb) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x0007fdc6) cale_week_scroll_pane_g_ParamLimits

0x42c2,	// (0x00074f37) cale_week_time_pane_ParamLimits

0x42e6,	// (0x00074f5b) grid_cale_week_pane_ParamLimits

0x206a,	// (0x00072cdf) listscroll_cale_week_pane_t1

0x207c,	// (0x00072cf1) scroll_pane_cp08_ParamLimits

0x4d85,	// (0x000759fa) cale_month_corner_pane_ParamLimits

0x240b,	// (0x00073080) cale_month_pane_t1

0x519f,	// (0x00075e14) cale_month_week_pane_ParamLimits

0x56eb,	// (0x00076360) popup_call_status_window_g1_ParamLimits

0x56ff,	// (0x00076374) popup_call_status_window_g2_ParamLimits

0x5713,	// (0x00076388) popup_call_status_window_g3_ParamLimits

0xf2cb,	// (0x0007ff40) popup_call_status_window_g_ParamLimits

0xc7a0,	// (0x0007d415) aid_call2_pane

0x3377,	// (0x00073fec) msg_header_pane_g1

0x5d22,	// (0x00076997) postcard_address2_pane_ParamLimits

0x5d22,	// (0x00076997) postcard_address2_pane

0x5d34,	// (0x000769a9) postcard_message2_pane_ParamLimits

0x5d34,	// (0x000769a9) postcard_message2_pane

0x6841,	// (0x000774b6) message2_row_pane_ParamLimits

0x6841,	// (0x000774b6) message2_row_pane

0x685e,	// (0x000774d3) address2_row_pane_ParamLimits

0x685e,	// (0x000774d3) address2_row_pane

0xe00a,	// (0x0007ec7f) postcard_message2_row_pane_g1

0xe012,	// (0x0007ec87) postcard_message2_row_pane_t1

0xe00a,	// (0x0007ec7f) address2_row_pane_g1

0xe012,	// (0x0007ec87) address2_row_pane_t1

0x4620,	// (0x00075295) aid_size_cell_vorec

0x1be3,	// (0x00072858) main_rss_pane

0xe020,	// (0x0007ec95) rss_list_single_pane_ParamLimits

0xe020,	// (0x0007ec95) rss_list_single_pane

0xe02e,	// (0x0007eca3) rss_list_single_pane_t1

0xe02e,	// (0x0007eca3) rss_list_single_pane_t2

0x0001,

0xf58e,	// (0x00080203) rss_list_single_pane_t

0x1be3,	// (0x00072858) main_camera2_pane

0x1be3,	// (0x00072858) main_video2_pane

0xe0e0,	// (0x0007ed55) cams_zoom_pane_cp2_ParamLimits

0xe0e0,	// (0x0007ed55) cams_zoom_pane_cp2

0xe0e0,	// (0x0007ed55) image2_vga_pane_ParamLimits

0xe0e0,	// (0x0007ed55) image2_vga_pane

0xe0ee,	// (0x0007ed63) main_camera2_pane_g1_ParamLimits

0xe0ee,	// (0x0007ed63) main_camera2_pane_g1

0xe0ee,	// (0x0007ed63) main_camera2_pane_g2_ParamLimits

0xe0ee,	// (0x0007ed63) main_camera2_pane_g2

0xe0ee,	// (0x0007ed63) main_camera2_pane_g3_ParamLimits

0xe0ee,	// (0x0007ed63) main_camera2_pane_g3

0xe0ee,	// (0x0007ed63) main_camera2_pane_g4_ParamLimits

0xe0ee,	// (0x0007ed63) main_camera2_pane_g4

0xe0ee,	// (0x0007ed63) main_camera2_pane_g5_ParamLimits

0xe0ee,	// (0x0007ed63) main_camera2_pane_g5

0xe0ee,	// (0x0007ed63) main_camera2_pane_g6_ParamLimits

0xe0ee,	// (0x0007ed63) main_camera2_pane_g6

0xe0ee,	// (0x0007ed63) main_camera2_pane_g7_ParamLimits

0xe0ee,	// (0x0007ed63) main_camera2_pane_g7

0xe0ee,	// (0x0007ed63) main_camera2_pane_g8_ParamLimits

0xe0ee,	// (0x0007ed63) main_camera2_pane_g8

0x0008,

0xf5aa,	// (0x0008021f) main_camera2_pane_g_ParamLimits

0xf5aa,	// (0x0008021f) main_camera2_pane_g

0x6a08,	// (0x0007767d) main_camera2_pane_t1_ParamLimits

0x6a08,	// (0x0007767d) main_camera2_pane_t1

0x6a08,	// (0x0007767d) main_camera2_pane_t2_ParamLimits

0x6a08,	// (0x0007767d) main_camera2_pane_t2

0x6a08,	// (0x0007767d) main_camera2_pane_t3_ParamLimits

0x6a08,	// (0x0007767d) main_camera2_pane_t3

0x6a08,	// (0x0007767d) main_camera2_pane_t4_ParamLimits

0x6a08,	// (0x0007767d) main_camera2_pane_t4

0x0006,

0xf5bd,	// (0x00080232) main_camera2_pane_t_ParamLimits

0xf5bd,	// (0x00080232) main_camera2_pane_t

0x0cda,	// (0x0007194f) cams_zoom_pane_cp4_ParamLimits

0x0cda,	// (0x0007194f) cams_zoom_pane_cp4

0xe110,	// (0x0007ed85) image2_cif_pane_ParamLimits

0xe110,	// (0x0007ed85) image2_cif_pane

0x1e6e,	// (0x00072ae3) image2_subqcif_pane_ParamLimits

0x1e6e,	// (0x00072ae3) image2_subqcif_pane

0x6a1c,	// (0x00077691) main_video2_pane_g1_ParamLimits

0x6a1c,	// (0x00077691) main_video2_pane_g1

0x6a1c,	// (0x00077691) main_video2_pane_g2_ParamLimits

0x6a1c,	// (0x00077691) main_video2_pane_g2

0x6a1c,	// (0x00077691) main_video2_pane_g3_ParamLimits

0x6a1c,	// (0x00077691) main_video2_pane_g3

0x6a1c,	// (0x00077691) main_video2_pane_g4_ParamLimits

0x6a1c,	// (0x00077691) main_video2_pane_g4

0x6a1c,	// (0x00077691) main_video2_pane_g5_ParamLimits

0x6a1c,	// (0x00077691) main_video2_pane_g5

0x6a1c,	// (0x00077691) main_video2_pane_g6_ParamLimits

0x6a1c,	// (0x00077691) main_video2_pane_g6

0x0005,

0xf5cc,	// (0x00080241) main_video2_pane_g_ParamLimits

0xf5cc,	// (0x00080241) main_video2_pane_g

0x6a2a,	// (0x0007769f) main_video2_pane_t1_ParamLimits

0x6a2a,	// (0x0007769f) main_video2_pane_t1

0x6a2a,	// (0x0007769f) main_video2_pane_t2_ParamLimits

0x6a2a,	// (0x0007769f) main_video2_pane_t2

0x6a2a,	// (0x0007769f) main_video2_pane_t3_ParamLimits

0x6a2a,	// (0x0007769f) main_video2_pane_t3

0x0002,

0xf5d9,	// (0x0008024e) main_video2_pane_t_ParamLimits

0xf5d9,	// (0x0008024e) main_video2_pane_t

0x6395,	// (0x0007700a) call_muted_g2

0x0001,

0xf580,	// (0x000801f5) call_muted_g

0x1be3,	// (0x00072858) main_mup2_pane

0x015e,	// (0x00070dd3) main_mup2_pane_g1_ParamLimits

0x015e,	// (0x00070dd3) main_mup2_pane_g1

0x015e,	// (0x00070dd3) main_mup2_pane_g2_ParamLimits

0x015e,	// (0x00070dd3) main_mup2_pane_g2

0x210d,	// (0x00072d82) main_mup_pane_g13_cp1

0x17c6,	// (0x0007243b) mup_volume_pane_cp1

0x015e,	// (0x00070dd3) main_mup2_pane_g4_ParamLimits

0x015e,	// (0x00070dd3) main_mup2_pane_g4

0x015e,	// (0x00070dd3) main_mup2_pane_g5_ParamLimits

0x015e,	// (0x00070dd3) main_mup2_pane_g5

0x015e,	// (0x00070dd3) main_mup2_pane_g6_ParamLimits

0x015e,	// (0x00070dd3) main_mup2_pane_g6

0x015e,	// (0x00070dd3) main_mup2_pane_g7_ParamLimits

0x015e,	// (0x00070dd3) main_mup2_pane_g7

0x0006,

0xf5e0,	// (0x00080255) main_mup2_pane_g_ParamLimits

0xf5e0,	// (0x00080255) main_mup2_pane_g

0x016c,	// (0x00070de1) main_mup2_pane_t1_ParamLimits

0x016c,	// (0x00070de1) main_mup2_pane_t1

0x016c,	// (0x00070de1) main_mup2_pane_t2_ParamLimits

0x016c,	// (0x00070de1) main_mup2_pane_t2

0x016c,	// (0x00070de1) main_mup2_pane_t3_ParamLimits

0x016c,	// (0x00070de1) main_mup2_pane_t3

0x016c,	// (0x00070de1) main_mup2_pane_t4_ParamLimits

0x016c,	// (0x00070de1) main_mup2_pane_t4

0x016c,	// (0x00070de1) main_mup2_pane_t5_ParamLimits

0x016c,	// (0x00070de1) main_mup2_pane_t5

0x016c,	// (0x00070de1) main_mup2_pane_t6_ParamLimits

0x016c,	// (0x00070de1) main_mup2_pane_t6

0x0005,

0xf5ef,	// (0x00080264) main_mup2_pane_t_ParamLimits

0xf5ef,	// (0x00080264) main_mup2_pane_t

0xcc25,	// (0x0007d89a) mup2_visualizer_pane_ParamLimits

0xcc25,	// (0x0007d89a) mup2_visualizer_pane

0xcc25,	// (0x0007d89a) mup_progress_pane_cp_ParamLimits

0xcc25,	// (0x0007d89a) mup_progress_pane_cp

0xe11e,	// (0x0007ed93) mup_volume_pane_cp_ParamLimits

0xe11e,	// (0x0007ed93) mup_volume_pane_cp

0x1ec7,	// (0x00072b3c) mup2_visualizer_pane_g1_ParamLimits

0x1ec7,	// (0x00072b3c) mup2_visualizer_pane_g1

0x1ed5,	// (0x00072b4a) mup2_visualizer_pane_g2_ParamLimits

0x1ed5,	// (0x00072b4a) mup2_visualizer_pane_g2

0x1ed5,	// (0x00072b4a) mup2_visualizer_pane_g3_ParamLimits

0x1ed5,	// (0x00072b4a) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x0007fd3f) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x0007fd3f) mup2_visualizer_pane_g

0xcf11,	// (0x0007db86) aid_size_cell_fmradio

0x6547,	// (0x000771bc) aid_height_parent_landcape

0x2269,	// (0x00072ede) wml_content_pane_cp

0x2271,	// (0x00072ee6) wml_tabs_pane

0x227a,	// (0x00072eef) popup_wml_miniature_window

0x2282,	// (0x00072ef7) scroll_pane_cp021

0x2296,	// (0x00072f0b) wml_content_pane_comp8

0x1be3,	// (0x00072858) bg_popup_sub_pane_cp05

0x0180,	// (0x00070df5) popup_wml_miniature_window_g1

0x0188,	// (0x00070dfd) wml_miniature_view_pane

0x6a3e,	// (0x000776b3) aid_size_wml_view

0x6a46,	// (0x000776bb) wml_miniature_view_pane_g1

0x6a4f,	// (0x000776c4) wml_miniature_view_pane_g2

0x6a58,	// (0x000776cd) wml_miniature_view_pane_g3

0x6a60,	// (0x000776d5) wml_miniature_view_pane_g4

0x6a68,	// (0x000776dd) wml_miniature_view_pane_g5

0x6a70,	// (0x000776e5) wml_miniature_view_pane_g6

0x6a78,	// (0x000776ed) wml_miniature_view_pane_g7

0x6a80,	// (0x000776f5) wml_miniature_view_pane_g8

0x0007,

0xf5fc,	// (0x00080271) wml_miniature_view_pane_g

0x0190,	// (0x00070e05) background_graphic_ParamLimits

0x0190,	// (0x00070e05) background_graphic

0x019c,	// (0x00070e11) wml_tabs_2_pane

0x01a5,	// (0x00070e1a) wml_tabs_3_pane_ParamLimits

0x01a5,	// (0x00070e1a) wml_tabs_3_pane

0x01b7,	// (0x00070e2c) wml_tabs_4_pane_ParamLimits

0x01b7,	// (0x00070e2c) wml_tabs_4_pane

0x01cd,	// (0x00070e42) wml_tabs_5_pane_ParamLimits

0x01cd,	// (0x00070e42) wml_tabs_5_pane

0x01e7,	// (0x00070e5c) wml_tabs_pane_g2_ParamLimits

0x01e7,	// (0x00070e5c) wml_tabs_pane_g2

0x01fc,	// (0x00070e71) wml_tabs_pane_g3_ParamLimits

0x01fc,	// (0x00070e71) wml_tabs_pane_g3

0x0211,	// (0x00070e86) wml_tabs_2_active_pane_ParamLimits

0x0211,	// (0x00070e86) wml_tabs_2_active_pane

0x0211,	// (0x00070e86) wml_tabs_2_passive_pane_ParamLimits

0x0211,	// (0x00070e86) wml_tabs_2_passive_pane

0x6a88,	// (0x000776fd) wml_tabs_3_active_pane_cp_ParamLimits

0x6a88,	// (0x000776fd) wml_tabs_3_active_pane_cp

0x6a9d,	// (0x00077712) wml_tabs_3_passive_pane_ParamLimits

0x6a9d,	// (0x00077712) wml_tabs_3_passive_pane

0x6ab0,	// (0x00077725) wml_tabs_3_passive_pane_cp_ParamLimits

0x6ab0,	// (0x00077725) wml_tabs_3_passive_pane_cp

0x6ac7,	// (0x0007773c) tabs_4_active_pane

0x6acf,	// (0x00077744) tabs_4_passive_pane

0x6ad9,	// (0x0007774e) tabs_4_passive_pane_cp

0x6ae1,	// (0x00077756) tabs_4_passive_pane_cp2

0x6289,	// (0x00076efe) aid_height_text

0xcc25,	// (0x0007d89a) mup_volume_cont_pane_ParamLimits

0xcc25,	// (0x0007d89a) mup_volume_cont_pane

0x17c6,	// (0x0007243b) aid_size_cell_pinb

0x17c6,	// (0x0007243b) aid_size_list_pinb

0xcc25,	// (0x0007d89a) mup2_volume_cont_pane_ParamLimits

0xcc25,	// (0x0007d89a) mup2_volume_cont_pane

0xe134,	// (0x0007eda9) mup2_volume_cont_pane_g1_ParamLimits

0xe134,	// (0x0007eda9) mup2_volume_cont_pane_g1

0x3ac0,	// (0x00074735) aid_size_cell_touch_ParamLimits

0x3ac0,	// (0x00074735) aid_size_cell_touch

0x3ced,	// (0x00074962) touch_pane_ParamLimits

0x3ced,	// (0x00074962) touch_pane

0x17c6,	// (0x0007243b) main_rss2_pane

0x0228,	// (0x00070e9d) listscroll_rss2_pane

0x0231,	// (0x00070ea6) rss2_navigation_pane

0x0239,	// (0x00070eae) list_rss2_pane

0xc928,	// (0x0007d59d) scroll_pane_cp22

0x0241,	// (0x00070eb6) rss2_navigation_pane_g1

0x024a,	// (0x00070ebf) rss2_navigation_pane_g2

0x0252,	// (0x00070ec7) rss2_navigation_pane_g3

0x0002,

0xf60d,	// (0x00080282) rss2_navigation_pane_g

0x025a,	// (0x00070ecf) rss2_navigation_pane_t1

0x6aeb,	// (0x00077760) rss2_list_single_pane_ParamLimits

0x6aeb,	// (0x00077760) rss2_list_single_pane

0x0268,	// (0x00070edd) rss2_list_single_pane_t2

0x0276,	// (0x00070eeb) rss2_list_single_pane_t3_ParamLimits

0x0276,	// (0x00070eeb) rss2_list_single_pane_t3

0x0293,	// (0x00070f08) rss2_list_single_pane_t4

0x55c7,	// (0x0007623c) smil_status_pane_g1

0x1e6e,	// (0x00072ae3) main_image2_pane_ParamLimits

0x1e6e,	// (0x00072ae3) main_image2_pane

0xe0ee,	// (0x0007ed63) main_camera2_pane_g9_ParamLimits

0xe0ee,	// (0x0007ed63) main_camera2_pane_g9

0x6a08,	// (0x0007767d) main_camera2_pane_t5_ParamLimits

0x6a08,	// (0x0007767d) main_camera2_pane_t5

0xe0fc,	// (0x0007ed71) main_camera2_pane_t6_ParamLimits

0xe0fc,	// (0x0007ed71) main_camera2_pane_t6

0x6b01,	// (0x00077776) main_image2_pane_g1_ParamLimits

0x6b01,	// (0x00077776) main_image2_pane_g1

0x5f5c,	// (0x00076bd1) smil2_video_pane_ParamLimits

0x5f5c,	// (0x00076bd1) smil2_video_pane

0xc388,	// (0x0007cffd) aid_zoom_text_primary_cp

0xc3c7,	// (0x0007d03c) popup_preview_fixed_window

0x21d2,	// (0x00072e47) im_reading_pane_g1

0x69fa,	// (0x0007766f) cams2_bc_adjust_pane_cp_ParamLimits

0x69fa,	// (0x0007766f) cams2_bc_adjust_pane_cp

0xcc25,	// (0x0007d89a) cams2_bc_adjust_pane_ParamLimits

0xcc25,	// (0x0007d89a) cams2_bc_adjust_pane

0x210d,	// (0x00072d82) cams2_bc_adjust_pane_g1

0x17c6,	// (0x0007243b) cams2_slider_pane

0x210d,	// (0x00072d82) cams2_slider_pane_g1

0x210d,	// (0x00072d82) cams2_slider_pane_g2

0x0006,

0xf614,	// (0x00080289) cams2_slider_pane_g

0x3db6,	// (0x00074a2b) calc_display_pane_ParamLimits

0x3ddb,	// (0x00074a50) calc_paper_pane_ParamLimits

0x3dfe,	// (0x00074a73) grid_calc_pane_ParamLimits

0xc802,	// (0x0007d477) popup_clock_digital_window_t1_ParamLimits

0xceae,	// (0x0007db23) main_image_pane_t1

0x3d98,	// (0x00074a0d) aid_size_cell_calc_ParamLimits

0x3d98,	// (0x00074a0d) aid_size_cell_calc

0x658d,	// (0x00077202) popup_blid_sat_info2_window_ParamLimits

0x658d,	// (0x00077202) popup_blid_sat_info2_window

0x02a1,	// (0x00070f16) aid_size_cell_blid

0xe110,	// (0x0007ed85) bg_popup_window_pane_cp07

0x02be,	// (0x00070f33) grid_popup_blid_pane

0x02c8,	// (0x00070f3d) heading_pane_cp05_ParamLimits

0x02c8,	// (0x00070f3d) heading_pane_cp05

0x0392,	// (0x00071007) cell_popup_blid_pane_ParamLimits

0x0392,	// (0x00071007) cell_popup_blid_pane

0x03b6,	// (0x0007102b) cell_popup_blid_pane_g1

0x03be,	// (0x00071033) cell_popup_blid_pane_t1

0xcc25,	// (0x0007d89a) mup2_indicator_pane_ParamLimits

0xcc25,	// (0x0007d89a) mup2_indicator_pane

0x17c6,	// (0x0007243b) mup2_visualizer_osc_pane

0xe11e,	// (0x0007ed93) mup2_visualizer_spec_pane_ParamLimits

0xe11e,	// (0x0007ed93) mup2_visualizer_spec_pane

0x17c6,	// (0x0007243b) mup2_spec_half_pane

0x17c6,	// (0x0007243b) mup2_spec_half_pane_cp

0x03cc,	// (0x00071041) mup2_spec_bar_pane_ParamLimits

0x03cc,	// (0x00071041) mup2_spec_bar_pane

0x210d,	// (0x00072d82) mup2_spec_bar_pane_g1

0x03eb,	// (0x00071060) mup2_spec_bar_pane_g2

0x0001,

0xf63a,	// (0x000802af) mup2_spec_bar_pane_g

0x17c6,	// (0x0007243b) mup2_osc_middle_pane

0x210d,	// (0x00072d82) mup2_visualizer_osc_pane_g1

0x17f0,	// (0x00072465) popup_number_entry_window_t1_ParamLimits

0x1803,	// (0x00072478) popup_number_entry_window_t2_ParamLimits

0x1815,	// (0x0007248a) popup_number_entry_window_t3_ParamLimits

0x3d3f,	// (0x000749b4) popup_number_entry_window_t5_ParamLimits

0x3d3f,	// (0x000749b4) popup_number_entry_window_t5

0xf06b,	// (0x0007fce0) popup_number_entry_window_t_ParamLimits

0x1827,	// (0x0007249c) text_title_cp2_ParamLimits

0xcd88,	// (0x0007d9fd) aid_hotspot_pointer_text2_pane

0xcdae,	// (0x0007da23) main_viewer_pane_g9_ParamLimits

0xcdae,	// (0x0007da23) main_viewer_pane_g9

0x240b,	// (0x00073080) cale_month_pane_t1_ParamLimits

0x2448,	// (0x000730bd) bg_cale_pane_ParamLimits

0x2460,	// (0x000730d5) list_cale_pane_ParamLimits

0x2471,	// (0x000730e6) listscroll_cale_day_pane_t1

0x2483,	// (0x000730f8) scroll_pane_cp09_ParamLimits

0x59bc,	// (0x00076631) main_mup_eq_pane_t1_ParamLimits

0x59bc,	// (0x00076631) main_mup_eq_pane_t1

0x59d6,	// (0x0007664b) main_mup_eq_pane_t2_ParamLimits

0x59d6,	// (0x0007664b) main_mup_eq_pane_t2

0x59f0,	// (0x00076665) main_mup_eq_pane_t3_ParamLimits

0x59f0,	// (0x00076665) main_mup_eq_pane_t3

0x5a0c,	// (0x00076681) main_mup_eq_pane_t4_ParamLimits

0x5a0c,	// (0x00076681) main_mup_eq_pane_t4

0x5a28,	// (0x0007669d) main_mup_eq_pane_t5_ParamLimits

0x5a28,	// (0x0007669d) main_mup_eq_pane_t5

0x5a44,	// (0x000766b9) main_mup_eq_pane_t6_ParamLimits

0x5a44,	// (0x000766b9) main_mup_eq_pane_t6

0x5a58,	// (0x000766cd) main_mup_eq_pane_t7_ParamLimits

0x5a58,	// (0x000766cd) main_mup_eq_pane_t7

0x5a6c,	// (0x000766e1) main_mup_eq_pane_t8_ParamLimits

0x5a6c,	// (0x000766e1) main_mup_eq_pane_t8

0x5a80,	// (0x000766f5) main_mup_eq_pane_t9_ParamLimits

0x5a80,	// (0x000766f5) main_mup_eq_pane_t9

0x5a9a,	// (0x0007670f) main_mup_eq_pane_t10_ParamLimits

0x5a9a,	// (0x0007670f) main_mup_eq_pane_t10

0x0009,

0xf3ca,	// (0x0008003f) main_mup_eq_pane_t_ParamLimits

0xf3ca,	// (0x0008003f) main_mup_eq_pane_t

0x5b49,	// (0x000767be) mup_equalizer_pane_cp5_ParamLimits

0x5b5d,	// (0x000767d2) mup_equalizer_pane_cp6_ParamLimits

0x5b71,	// (0x000767e6) mup_equalizer_pane_cp7_ParamLimits

0x17c6,	// (0x0007243b) main_gallery_pane

0xe05c,	// (0x0007ecd1) smil2_volume_pane

0xe064,	// (0x0007ecd9) smil_status_volume_pane_g1_ParamLimits

0xe077,	// (0x0007ecec) smil_status_volume_pane_g2_ParamLimits

0xe08a,	// (0x0007ecff) smil_status_volume_pane_g3_ParamLimits

0xf593,	// (0x00080208) smil_status_volume_pane_g_ParamLimits

0xe110,	// (0x0007ed85) bg_popup_window_pane_cp07_ParamLimits

0x02a9,	// (0x00070f1e) blid_firmament_pane

0x1e6e,	// (0x00072ae3) aid_size_cell_gallery_ParamLimits

0x1e6e,	// (0x00072ae3) aid_size_cell_gallery

0x1e6e,	// (0x00072ae3) grid_gallery_pane_ParamLimits

0x1e6e,	// (0x00072ae3) grid_gallery_pane

0xe110,	// (0x0007ed85) cell_gallery_pane_ParamLimits

0xe110,	// (0x0007ed85) cell_gallery_pane

0x1e6e,	// (0x00072ae3) bg_cell_gallery_focus_pane_ParamLimits

0x1e6e,	// (0x00072ae3) bg_cell_gallery_focus_pane

0x1ec7,	// (0x00072b3c) cell_gallery_pane_g1_ParamLimits

0x1ec7,	// (0x00072b3c) cell_gallery_pane_g1

0x1ec7,	// (0x00072b3c) cell_gallery_pane_g2_ParamLimits

0x1ec7,	// (0x00072b3c) cell_gallery_pane_g2

0x1ec7,	// (0x00072b3c) cell_gallery_pane_g3_ParamLimits

0x1ec7,	// (0x00072b3c) cell_gallery_pane_g3

0x1ed5,	// (0x00072b4a) cell_gallery_pane_g4_ParamLimits

0x1ed5,	// (0x00072b4a) cell_gallery_pane_g4

0x0003,

0xf63f,	// (0x000802b4) cell_gallery_pane_g_ParamLimits

0xf63f,	// (0x000802b4) cell_gallery_pane_g

0x03f5,	// (0x0007106a) bg_cell_gallery_focus_pane_g1

0x03fd,	// (0x00071072) bg_cell_gallery_focus_pane_g2

0x0405,	// (0x0007107a) bg_cell_gallery_focus_pane_g3

0x040d,	// (0x00071082) bg_cell_gallery_focus_pane_g4

0x0415,	// (0x0007108a) bg_cell_gallery_focus_pane_g5

0x041d,	// (0x00071092) bg_cell_gallery_focus_pane_g6

0x0425,	// (0x0007109a) bg_cell_gallery_focus_pane_g7

0x042d,	// (0x000710a2) bg_cell_gallery_focus_pane_g8

0x0007,

0xf648,	// (0x000802bd) bg_cell_gallery_focus_pane_g

0x0435,	// (0x000710aa) aid_firma_cardinal

0x0449,	// (0x000710be) blid_firmament_pane_t1

0x0460,	// (0x000710d5) blid_firmament_pane_t2

0x0477,	// (0x000710ec) blid_firmament_pane_t3

0x048e,	// (0x00071103) blid_firmament_pane_t4

0x0003,

0xf659,	// (0x000802ce) blid_firmament_pane_t

0x04a5,	// (0x0007111a) blid_sat_info_pane

0x210d,	// (0x00072d82) blid_sat_info_pane_g1

0x210d,	// (0x00072d82) blid_sat_info_pane_g2

0x0001,

0xf3be,	// (0x00080033) blid_sat_info_pane_g

0x04b5,	// (0x0007112a) blid_sat_info_pane_t1

0x04c3,	// (0x00071138) smil2_volume_content_pane

0x04cc,	// (0x00071141) smil2_volume_pane_g1

0x04d4,	// (0x00071149) smil2_volume_content_pane_g1

0x04dd,	// (0x00071152) smil2_volume_content_pane_g2

0x04e6,	// (0x0007115b) smil2_volume_content_pane_g3

0x04ef,	// (0x00071164) smil2_volume_content_pane_g4

0x04f8,	// (0x0007116d) smil2_volume_content_pane_g5

0x0501,	// (0x00071176) smil2_volume_content_pane_g6

0x050a,	// (0x0007117f) smil2_volume_content_pane_g7

0x0513,	// (0x00071188) smil2_volume_content_pane_g8

0x051c,	// (0x00071191) smil2_volume_content_pane_g9

0x0525,	// (0x0007119a) smil2_volume_content_pane_g10

0x0009,

0xf662,	// (0x000802d7) smil2_volume_content_pane_g

0x439a,	// (0x0007500f) cale_week_day_heading_pane_t1_ParamLimits

0x43c4,	// (0x00075039) cale_week_day_heading_pane_t2_ParamLimits

0x43f3,	// (0x00075068) cale_week_day_heading_pane_t3_ParamLimits

0x4422,	// (0x00075097) cale_week_day_heading_pane_t4_ParamLimits

0x4451,	// (0x000750c6) cale_week_day_heading_pane_t5_ParamLimits

0x4488,	// (0x000750fd) cale_week_day_heading_pane_t6_ParamLimits

0x44bf,	// (0x00075134) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x0007fde7) cale_week_day_heading_pane_t_ParamLimits

0x2099,	// (0x00072d0e) bg_cale_side_pane_ParamLimits

0x44e9,	// (0x0007515e) cale_week_time_pane_t1_ParamLimits

0x4503,	// (0x00075178) cale_week_time_pane_t2_ParamLimits

0x451d,	// (0x00075192) cale_week_time_pane_t3_ParamLimits

0x4537,	// (0x000751ac) cale_week_time_pane_t4_ParamLimits

0x4551,	// (0x000751c6) cale_week_time_pane_t5_ParamLimits

0x456b,	// (0x000751e0) cale_week_time_pane_t6_ParamLimits

0x4585,	// (0x000751fa) cale_week_time_pane_t7_ParamLimits

0x459f,	// (0x00075214) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x0007fdf6) cale_week_time_pane_t_ParamLimits

0x45bf,	// (0x00075234) cell_cale_week_pane_g2_ParamLimits

0x2099,	// (0x00072d0e) bg_cale_side_pane_cp01_ParamLimits

0x53cc,	// (0x00076041) cale_month_week_pane_t1_ParamLimits

0x53e5,	// (0x0007605a) cale_month_week_pane_t2_ParamLimits

0x53fe,	// (0x00076073) cale_month_week_pane_t3_ParamLimits

0x5417,	// (0x0007608c) cale_month_week_pane_t4_ParamLimits

0x5430,	// (0x000760a5) cale_month_week_pane_t5_ParamLimits

0x5449,	// (0x000760be) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x0007fec4) cale_month_week_pane_t_ParamLimits

0xc477,	// (0x0007d0ec) cell_cale_month_pane_g1_ParamLimits

0x17c6,	// (0x0007243b) main_cale_event_viewer_pane

0x17c6,	// (0x0007243b) listscroll_cale_event_viewer_pane

0x052e,	// (0x000711a3) list_cale_ev_pane

0x0536,	// (0x000711ab) scroll_pane_cp023

0x0542,	// (0x000711b7) field_cale_ev_pane_ParamLimits

0x0542,	// (0x000711b7) field_cale_ev_pane

0x0560,	// (0x000711d5) field_cale_ev_content_pane_ParamLimits

0x0560,	// (0x000711d5) field_cale_ev_content_pane

0x056c,	// (0x000711e1) field_cale_ev_pane_g1_ParamLimits

0x056c,	// (0x000711e1) field_cale_ev_pane_g1

0x0578,	// (0x000711ed) field_cale_ev_pane_g2_ParamLimits

0x0578,	// (0x000711ed) field_cale_ev_pane_g2

0x0590,	// (0x00071205) field_cale_ev_pane_g3_ParamLimits

0x0590,	// (0x00071205) field_cale_ev_pane_g3

0x0002,

0xf677,	// (0x000802ec) field_cale_ev_pane_g_ParamLimits

0xf677,	// (0x000802ec) field_cale_ev_pane_g

0x05a8,	// (0x0007121d) field_cale_ev_pane_t1_ParamLimits

0x05a8,	// (0x0007121d) field_cale_ev_pane_t1

0x05bf,	// (0x00071234) field_cale_ev_content_pane_t1_ParamLimits

0x05bf,	// (0x00071234) field_cale_ev_content_pane_t1

0xccd0,	// (0x0007d945) bg_button_pane_cp01

0x40c7,	// (0x00074d3c) listscroll_cale_week_pane_ParamLimits

0x2044,	// (0x00072cb9) popup_toolbar_window_cp01

0x206a,	// (0x00072cdf) listscroll_cale_week_pane_t1_ParamLimits

0x40c7,	// (0x00074d3c) listscroll_cale_day_pane_ParamLimits

0x2044,	// (0x00072cb9) popup_toolbar_window_cp02

0x2471,	// (0x000730e6) listscroll_cale_day_pane_t1_ParamLimits

0x40c7,	// (0x00074d3c) main_cale_month_pane_ParamLimits

0xdfda,	// (0x0007ec4f) popup_toolbar_window_cp03_ParamLimits

0xdfda,	// (0x0007ec4f) popup_toolbar_window_cp03

0x5e24,	// (0x00076a99) main_image_pane_g2_ParamLimits

0x5e24,	// (0x00076a99) main_image_pane_g2

0x5e35,	// (0x00076aaa) main_image_pane_g3_ParamLimits

0x5e35,	// (0x00076aaa) main_image_pane_g3

0x0002,

0xf45c,	// (0x000800d1) main_image_pane_g_ParamLimits

0xf45c,	// (0x000800d1) main_image_pane_g

0xceae,	// (0x0007db23) main_image_pane_t1_ParamLimits

0x5e46,	// (0x00076abb) main_image_pane_t2_ParamLimits

0x5e46,	// (0x00076abb) main_image_pane_t2

0x5e58,	// (0x00076acd) main_image_pane_t3_ParamLimits

0x5e58,	// (0x00076acd) main_image_pane_t3

0x5e80,	// (0x00076af5) main_image_pane_t4_ParamLimits

0x5e80,	// (0x00076af5) main_image_pane_t4

0x0003,

0xf463,	// (0x000800d8) main_image_pane_t_ParamLimits

0xf463,	// (0x000800d8) main_image_pane_t

0x5ea0,	// (0x00076b15) popup_image_details_window_cp01

0x5eaa,	// (0x00076b1f) popup_toobar_trans_pane_cp01_ParamLimits

0x5eaa,	// (0x00076b1f) popup_toobar_trans_pane_cp01

0x665e,	// (0x000772d3) popup_image_details_window_ParamLimits

0x665e,	// (0x000772d3) popup_image_details_window

0xdfad,	// (0x0007ec22) popup_image_focus_window

0xe0e0,	// (0x0007ed55) camera2_autofocus_pane_ParamLimits

0xe0e0,	// (0x0007ed55) camera2_autofocus_pane

0x17c6,	// (0x0007243b) bg_popup_sub_pane_cp06

0x05dd,	// (0x00071252) popup_image_focus_window_g1

0x05e5,	// (0x0007125a) popup_image_focus_window_g2

0x05ed,	// (0x00071262) popup_image_focus_window_g3

0x05f5,	// (0x0007126a) popup_image_focus_window_g4

0x0003,

0xf67e,	// (0x000802f3) popup_image_focus_window_g

0x05fd,	// (0x00071272) popup_image_focus_window_t1

0x060b,	// (0x00071280) popup_image_focus_window_t2

0x061b,	// (0x00071290) popup_image_focus_window_t3

0x0002,

0xf687,	// (0x000802fc) popup_image_focus_window_t

0x1ec7,	// (0x00072b3c) camera2_autofocus_pane_g1

0x1e6e,	// (0x00072ae3) bg_tb_trans_pane_cp01

0x0629,	// (0x0007129e) popup_image_details_window_g1

0x063c,	// (0x000712b1) popup_image_details_window_g2

0x0002,

0xf699,	// (0x0008030e) popup_image_details_window_g

0x0665,	// (0x000712da) popup_image_details_window_t1

0x0677,	// (0x000712ec) popup_image_details_window_t2

0x0690,	// (0x00071305) popup_image_details_window_t3

0x06a4,	// (0x00071319) popup_image_details_window_t4

0x06bf,	// (0x00071334) popup_image_details_window_t5

0x0004,

0xf6a0,	// (0x00080315) popup_image_details_window_t

0x1f25,	// (0x00072b9a) bg_calc_paper_pane_ParamLimits

0x17c6,	// (0x0007243b) grid_highlight_pane_cp013

0xc3d9,	// (0x0007d04e) list_calc_pane_ParamLimits

0xc3eb,	// (0x0007d060) scroll_pane_cp024

0x1f39,	// (0x00072bae) bg_calc_display_pane_ParamLimits

0x3f16,	// (0x00074b8b) calc_display_pane_t1_ParamLimits

0x3f28,	// (0x00074b9d) calc_display_pane_t2_ParamLimits

0xc3f3,	// (0x0007d068) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x0007fd67) calc_display_pane_t_ParamLimits

0x3fe2,	// (0x00074c57) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x0007fd84) cell_calc_pane_g

0x3feb,	// (0x00074c60) cell_calc_pane_t1

0x1f8e,	// (0x00072c03) grid_highlight_pane_cp02_ParamLimits

0x1fa4,	// (0x00072c19) toolbar_button_pane_cp01_ParamLimits

0x1fa4,	// (0x00072c19) toolbar_button_pane_cp01

0xcef3,	// (0x0007db68) temp_image_control_pane_ParamLimits

0xcef3,	// (0x0007db68) temp_image_control_pane

0x1e6e,	// (0x00072ae3) main_mp3_pane

0x06d9,	// (0x0007134e) temp_image_control_pane_g1_ParamLimits

0x06d9,	// (0x0007134e) temp_image_control_pane_g1

0x06e7,	// (0x0007135c) temp_image_control_pane_g2_ParamLimits

0x06e7,	// (0x0007135c) temp_image_control_pane_g2

0x06f9,	// (0x0007136e) temp_image_control_pane_g3_ParamLimits

0x06f9,	// (0x0007136e) temp_image_control_pane_g3

0x6b17,	// (0x0007778c) temp_image_control_pane_g4_ParamLimits

0x6b17,	// (0x0007778c) temp_image_control_pane_g4

0x0003,

0xf6ab,	// (0x00080320) temp_image_control_pane_g_ParamLimits

0xf6ab,	// (0x00080320) temp_image_control_pane_g

0x06d9,	// (0x0007134e) main_mp3_pane_g1

0x6b2a,	// (0x0007779f) main_mp3_pane_g2

0x0007,

0xf6b4,	// (0x00080329) main_mp3_pane_g

0x072e,	// (0x000713a3) main_mp3_pane_t1

0x1ed5,	// (0x00072b4a) main_camera_pane_g8_ParamLimits

0x1ed5,	// (0x00072b4a) main_camera_pane_g8

0x478d,	// (0x00075402) main_video_pane_g7_ParamLimits

0x478d,	// (0x00075402) main_video_pane_g7

0x24c4,	// (0x00073139) main_camera2_pane_t7_ParamLimits

0x24c4,	// (0x00073139) main_camera2_pane_t7

0x2229,	// (0x00072e9e) scroll_pane_cp025_ParamLimits

0x2229,	// (0x00072e9e) scroll_pane_cp025

0x223d,	// (0x00072eb2) scroll_pane_cp026_ParamLimits

0x223d,	// (0x00072eb2) scroll_pane_cp026

0x224c,	// (0x00072ec1) wml_content_pane_ParamLimits

0x17c6,	// (0x0007243b) main_touch_calib_pane

0x6bfe,	// (0x00077873) main_touch_calib_pane_g1

0x6c10,	// (0x00077885) main_touch_calib_pane_g2

0x6c22,	// (0x00077897) main_touch_calib_pane_g3

0x6c34,	// (0x000778a9) main_touch_calib_pane_g4

0x0003,

0xf6d2,	// (0x00080347) main_touch_calib_pane_g

0x6c46,	// (0x000778bb) main_touch_calib_pane_t1

0x6c60,	// (0x000778d5) main_touch_calib_pane_t2

0x0004,

0xf6db,	// (0x00080350) main_touch_calib_pane_t

0xc9f7,	// (0x0007d66c) mup_progress_pane_cp02

0xca2c,	// (0x0007d6a1) navi_pane_g1

0xcae7,	// (0x0007d75c) navi_pane_mp_t3

0x1e6e,	// (0x00072ae3) main_mp3_pane_ParamLimits

0x67e9,	// (0x0007745e) navi_pane_ParamLimits

0x06d9,	// (0x0007134e) main_mp3_pane_g1_ParamLimits

0x6b2a,	// (0x0007779f) main_mp3_pane_g2_ParamLimits

0x6b38,	// (0x000777ad) main_mp3_pane_g3_ParamLimits

0x6b38,	// (0x000777ad) main_mp3_pane_g3

0x6b46,	// (0x000777bb) main_mp3_pane_g4_ParamLimits

0x6b46,	// (0x000777bb) main_mp3_pane_g4

0x1ec7,	// (0x00072b3c) main_mp3_pane_g5_ParamLimits

0x1ec7,	// (0x00072b3c) main_mp3_pane_g5

0x0709,	// (0x0007137e) main_mp3_pane_g6_ParamLimits

0x0709,	// (0x0007137e) main_mp3_pane_g6

0x0716,	// (0x0007138b) main_mp3_pane_g7_ParamLimits

0x0716,	// (0x0007138b) main_mp3_pane_g7

0x0722,	// (0x00071397) main_mp3_pane_g8_ParamLimits

0x0722,	// (0x00071397) main_mp3_pane_g8

0xf6b4,	// (0x00080329) main_mp3_pane_g_ParamLimits

0x6b52,	// (0x000777c7) main_mp3_pane_t2

0x6b60,	// (0x000777d5) main_mp3_pane_t3

0x073c,	// (0x000713b1) main_mp3_pane_t4

0x074a,	// (0x000713bf) main_mp3_pane_t5

0x0005,

0xf6c5,	// (0x0008033a) main_mp3_pane_t

0x0758,	// (0x000713cd) mup_progress_pane_cp01

0xc388,	// (0x0007cffd) aid_zoom_text_secondary2

0x052e,	// (0x000711a3) list_cale_ev2_pane

0x0536,	// (0x000711ab) scroll_pane_cp023_ParamLimits

0x6cb6,	// (0x0007792b) field_cale_ev2_pane_ParamLimits

0x6cb6,	// (0x0007792b) field_cale_ev2_pane

0xe14a,	// (0x0007edbf) field_cale_ev2_pane_g1_ParamLimits

0xe14a,	// (0x0007edbf) field_cale_ev2_pane_g1

0xe156,	// (0x0007edcb) field_cale_ev2_pane_g2_ParamLimits

0xe156,	// (0x0007edcb) field_cale_ev2_pane_g2

0xe16e,	// (0x0007ede3) field_cale_ev2_pane_g3_ParamLimits

0xe16e,	// (0x0007ede3) field_cale_ev2_pane_g3

0x0003,

0xf6e6,	// (0x0008035b) field_cale_ev2_pane_g_ParamLimits

0xf6e6,	// (0x0008035b) field_cale_ev2_pane_g

0xe192,	// (0x0007ee07) field_cale_ev2_pane_t1_ParamLimits

0xe192,	// (0x0007ee07) field_cale_ev2_pane_t1

0xe1a9,	// (0x0007ee1e) field_cale_ev2_pane_t2_ParamLimits

0xe1a9,	// (0x0007ee1e) field_cale_ev2_pane_t2

0x0001,

0xf6ef,	// (0x00080364) field_cale_ev2_pane_t_ParamLimits

0xf6ef,	// (0x00080364) field_cale_ev2_pane_t

0x5cd8,	// (0x0007694d) main_postcard_pane_g5_ParamLimits

0x5cd8,	// (0x0007694d) main_postcard_pane_g5

0x5cee,	// (0x00076963) main_postcard_pane_g6_ParamLimits

0x5cee,	// (0x00076963) main_postcard_pane_g6

0x1e6e,	// (0x00072ae3) camera2_autofocus_pane_cp_ParamLimits

0x1e6e,	// (0x00072ae3) camera2_autofocus_pane_cp

0x1e6e,	// (0x00072ae3) main_mup3_pane

0x6d1b,	// (0x00077990) main_mup3_pane_g1_ParamLimits

0x6d1b,	// (0x00077990) main_mup3_pane_g1

0x6d3d,	// (0x000779b2) main_mup3_pane_g2_ParamLimits

0x6d3d,	// (0x000779b2) main_mup3_pane_g2

0x6dbd,	// (0x00077a32) main_mup3_pane_g3_ParamLimits

0x6dbd,	// (0x00077a32) main_mup3_pane_g3

0x6e03,	// (0x00077a78) main_mup3_pane_g4_ParamLimits

0x6e03,	// (0x00077a78) main_mup3_pane_g4

0x6e49,	// (0x00077abe) main_mup3_pane_g5_ParamLimits

0x6e49,	// (0x00077abe) main_mup3_pane_g5

0x6e8f,	// (0x00077b04) main_mup3_pane_g6_ParamLimits

0x6e8f,	// (0x00077b04) main_mup3_pane_g6

0x1ed5,	// (0x00072b4a) main_mup3_pane_g7_ParamLimits

0x1ed5,	// (0x00072b4a) main_mup3_pane_g7

0x0007,

0xf6ff,	// (0x00080374) main_mup3_pane_g_ParamLimits

0xf6ff,	// (0x00080374) main_mup3_pane_g

0x6f0d,	// (0x00077b82) main_mup3_pane_t1_ParamLimits

0x6f0d,	// (0x00077b82) main_mup3_pane_t1

0x6f81,	// (0x00077bf6) main_mup3_pane_t2_ParamLimits

0x6f81,	// (0x00077bf6) main_mup3_pane_t2

0x7055,	// (0x00077cca) main_mup3_pane_t4_ParamLimits

0x7055,	// (0x00077cca) main_mup3_pane_t4

0x70ab,	// (0x00077d20) main_mup3_pane_t5_ParamLimits

0x70ab,	// (0x00077d20) main_mup3_pane_t5

0x7167,	// (0x00077ddc) main_mup3_pane_t6_ParamLimits

0x7167,	// (0x00077ddc) main_mup3_pane_t6

0x0005,

0xf710,	// (0x00080385) main_mup3_pane_t_ParamLimits

0xf710,	// (0x00080385) main_mup3_pane_t

0x721f,	// (0x00077e94) mup3_progress_pane_ParamLimits

0x721f,	// (0x00077e94) mup3_progress_pane

0x72ab,	// (0x00077f20) popup_mup3_control_window_ParamLimits

0x72ab,	// (0x00077f20) popup_mup3_control_window

0x0760,	// (0x000713d5) popup_mup3_text_window

0x72dd,	// (0x00077f52) mup3_progress_pane_t1

0x72fc,	// (0x00077f71) mup3_progress_pane_t2

0x0768,	// (0x000713dd) mup3_progress_pane_t3

0x0002,

0xf71d,	// (0x00080392) mup3_progress_pane_t

0x0785,	// (0x000713fa) mup_progress_pane_cp03

0x17c6,	// (0x0007243b) bg_tb_trans_pane_cp04

0x731b,	// (0x00077f90) mup3_volume_pane

0x7323,	// (0x00077f98) popup_mup3_control_window_g1

0x732c,	// (0x00077fa1) mup3_volume_pane_g1

0x7335,	// (0x00077faa) mup3_volume_pane_g2

0x733e,	// (0x00077fb3) mup3_volume_pane_g3

0x0002,

0xf724,	// (0x00080399) mup3_volume_pane_g

0x17c6,	// (0x0007243b) bg_tb_trans_pane_cp03

0x0795,	// (0x0007140a) popup_mup3_text_window_g1

0x079d,	// (0x00071412) popup_mup3_text_window_t1

0x1f81,	// (0x00072bf6) list_calc_item_pane_g1_ParamLimits

0x021f,	// (0x00070e94) mup_volume_pane_cp_g1

0x6c7a,	// (0x000778ef) main_touch_calib_pane_t3

0x6c8e,	// (0x00077903) main_touch_calib_pane_t4

0x6ca2,	// (0x00077917) main_touch_calib_pane_t5

0xc364,	// (0x0007cfd9) aid_cell_size_toolbar2

0xc36c,	// (0x0007cfe1) aid_popup3_width_pane

0xc378,	// (0x0007cfed) aid_zoom_text_msg_primary

0x4668,	// (0x000752dd) vorec_t7

0x1f45,	// (0x00072bba) bg_calc_paper_pane_g1_ParamLimits

0x1f51,	// (0x00072bc6) bg_calc_paper_pane_g2_ParamLimits

0x1f5d,	// (0x00072bd2) bg_calc_paper_pane_g3_ParamLimits

0x1f69,	// (0x00072bde) bg_calc_paper_pane_g4_ParamLimits

0x1f75,	// (0x00072bea) bg_calc_paper_pane_g5_ParamLimits

0x3f6f,	// (0x00074be4) bg_calc_paper_pane_g6_ParamLimits

0x3f7e,	// (0x00074bf3) bg_calc_paper_pane_g7_ParamLimits

0x3f8d,	// (0x00074c02) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x0007fd6e) bg_calc_paper_pane_g_ParamLimits

0x3fa0,	// (0x00074c15) calc_bg_paper_pane_g9_ParamLimits

0x1e6e,	// (0x00072ae3) image_qvga_pane_ParamLimits

0x1e6e,	// (0x00072ae3) image_qvga_pane

0x1e4c,	// (0x00072ac1) bg_popup_sub_pane_cp04_ParamLimits

0xce2a,	// (0x0007da9f) popup_mup_playback_window_g1_ParamLimits

0xce36,	// (0x0007daab) popup_mup_playback_window_t1_ParamLimits

0xce4b,	// (0x0007dac0) popup_mup_playback_window_t2_ParamLimits

0xf457,	// (0x000800cc) popup_mup_playback_window_t_ParamLimits

0x1ed5,	// (0x00072b4a) main_mup2_pane_g3_ParamLimits

0x1ed5,	// (0x00072b4a) main_mup2_pane_g3

0x4994,	// (0x00075609) popup_toolbar_window_cp04

0xd240,	// (0x0007deb5) popup_call2_audio_second_window_g3_ParamLimits

0xd240,	// (0x0007deb5) popup_call2_audio_second_window_g3

0xd658,	// (0x0007e2cd) popup_call2_audio_first_window_g4_ParamLimits

0xd658,	// (0x0007e2cd) popup_call2_audio_first_window_g4

0xdc7f,	// (0x0007e8f4) popup_call2_audio_in_window_g4_ParamLimits

0xdc7f,	// (0x0007e8f4) popup_call2_audio_in_window_g4

0x5e06,	// (0x00076a7b) aid_area_sk_bg_cut_ParamLimits

0x5e06,	// (0x00076a7b) aid_area_sk_bg_cut

0xce60,	// (0x0007dad5) aid_area_sk_bg_cut_2_ParamLimits

0xce60,	// (0x0007dad5) aid_area_sk_bg_cut_2

0x17c6,	// (0x0007243b) aid_placing_details_win

0x17c6,	// (0x0007243b) aid_placing_details_win_2

0x1ec7,	// (0x00072b3c) camera2_autofocus_pane_g1_ParamLimits

0x3c86,	// (0x000748fb) popup_fixed_preview_cale_window_ParamLimits

0x3c86,	// (0x000748fb) popup_fixed_preview_cale_window

0xcb6e,	// (0x0007d7e3) navi_slider_pane_g3

0xcb77,	// (0x0007d7ec) navi_slider_pane_g4

0xcb80,	// (0x0007d7f5) navi_slider_pane_g5

0xcb6e,	// (0x0007d7e3) navi_slider_pane_g6

0xcb89,	// (0x0007d7fe) navi_slider_pane_g7

0xcc95,	// (0x0007d90a) mup_scale_pane_g3

0xcc9e,	// (0x0007d913) mup_scale_pane_g4

0xcca7,	// (0x0007d91c) mup_scale_pane_g5

0x5b85,	// (0x000767fa) mup_scale_pane_g6

0x5b8e,	// (0x00076803) mup_scale_pane_g7

0x210d,	// (0x00072d82) cams2_slider_pane_g3

0x210d,	// (0x00072d82) cams2_slider_pane_g4

0x210d,	// (0x00072d82) cams2_slider_pane_g5

0x210d,	// (0x00072d82) cams2_slider_pane_g6

0x210d,	// (0x00072d82) cams2_slider_pane_g7

0x210d,	// (0x00072d82) camera2_autofocus_pane_cp_g1

0xdf8f,	// (0x0007ec04) bg_popup_preview_window_pane_cp02_ParamLimits

0xdf8f,	// (0x0007ec04) bg_popup_preview_window_pane_cp02

0x07ab,	// (0x00071420) list_fp_cale_pane_ParamLimits

0x07ab,	// (0x00071420) list_fp_cale_pane

0x07b7,	// (0x0007142c) popup_fixed_preview_cale_window_t1_ParamLimits

0x07b7,	// (0x0007142c) popup_fixed_preview_cale_window_t1

0x7347,	// (0x00077fbc) popup_fixed_preview_cale_window_t2_ParamLimits

0x7347,	// (0x00077fbc) popup_fixed_preview_cale_window_t2

0x735c,	// (0x00077fd1) popup_fixed_preview_cale_window_t3_ParamLimits

0x735c,	// (0x00077fd1) popup_fixed_preview_cale_window_t3

0x0002,

0xf72b,	// (0x000803a0) popup_fixed_preview_cale_window_t_ParamLimits

0xf72b,	// (0x000803a0) popup_fixed_preview_cale_window_t

0x7371,	// (0x00077fe6) list_single_fp_cale_pane_ParamLimits

0x7371,	// (0x00077fe6) list_single_fp_cale_pane

0x07d5,	// (0x0007144a) list_single_fp_cale_pane_g1_ParamLimits

0x07d5,	// (0x0007144a) list_single_fp_cale_pane_g1

0x07e1,	// (0x00071456) list_single_fp_cale_pane_g2_ParamLimits

0x07e1,	// (0x00071456) list_single_fp_cale_pane_g2

0x0002,

0xf732,	// (0x000803a7) list_single_fp_cale_pane_g_ParamLimits

0xf732,	// (0x000803a7) list_single_fp_cale_pane_g

0x07fa,	// (0x0007146f) list_single_fp_cale_pane_t1_ParamLimits

0x07fa,	// (0x0007146f) list_single_fp_cale_pane_t1

0x080c,	// (0x00071481) list_single_fp_cale_pane_t2_ParamLimits

0x080c,	// (0x00071481) list_single_fp_cale_pane_t2

0x0001,

0xf739,	// (0x000803ae) list_single_fp_cale_pane_t_ParamLimits

0xf739,	// (0x000803ae) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x17c6,	// (0x0007243b) main_dialer_pane

0x17c6,	// (0x0007243b) aid_cell_size_keypad

0x17c6,	// (0x0007243b) dialer_ne_pane

0x17c6,	// (0x0007243b) grid_dialer_command_1_pane

0x17c6,	// (0x0007243b) grid_dialer_command_2_pane

0x17c6,	// (0x0007243b) grid_dialer_keypad_pane

0x7387,	// (0x00077ffc) bg_popup_call_pane_cp06_ParamLimits

0x7387,	// (0x00077ffc) bg_popup_call_pane_cp06

0x7387,	// (0x00077ffc) dialer_ne_clear_pane_ParamLimits

0x7387,	// (0x00077ffc) dialer_ne_clear_pane

0x210d,	// (0x00072d82) dialer_ne_pane_g1

0x24c4,	// (0x00073139) dialer_ne_pane_t1_ParamLimits

0x24c4,	// (0x00073139) dialer_ne_pane_t1

0x7395,	// (0x0007800a) dialer_ne_pane_t2_ParamLimits

0x7395,	// (0x0007800a) dialer_ne_pane_t2

0x73bd,	// (0x00078032) dialer_ne_pane_t3_ParamLimits

0x73bd,	// (0x00078032) dialer_ne_pane_t3

0x0002,

0xf73e,	// (0x000803b3) dialer_ne_pane_t_ParamLimits

0xf73e,	// (0x000803b3) dialer_ne_pane_t

0x73bd,	// (0x00078032) dialer_ne_pane_t3_copy1_ParamLimits

0x73bd,	// (0x00078032) dialer_ne_pane_t3_copy1

0x085c,	// (0x000714d1) cell_dialer_keypad_pane_ParamLimits

0x085c,	// (0x000714d1) cell_dialer_keypad_pane

0x1e6e,	// (0x00072ae3) cell_dialer_command_1_pane_ParamLimits

0x1e6e,	// (0x00072ae3) cell_dialer_command_1_pane

0x0873,	// (0x000714e8) cell_dialer_command_2_pane_ParamLimits

0x0873,	// (0x000714e8) cell_dialer_command_2_pane

0x1e6e,	// (0x00072ae3) bg_button_pane_cp02_ParamLimits

0x1e6e,	// (0x00072ae3) bg_button_pane_cp02

0x1ec7,	// (0x00072b3c) cell_dialer_keypad_pane_g1_ParamLimits

0x1ec7,	// (0x00072b3c) cell_dialer_keypad_pane_g1

0x1e6e,	// (0x00072ae3) bg_button_pane_cp03_ParamLimits

0x1e6e,	// (0x00072ae3) bg_button_pane_cp03

0x1ec7,	// (0x00072b3c) cell_dialer_command_1_pane_g1_ParamLimits

0x1ec7,	// (0x00072b3c) cell_dialer_command_1_pane_g1

0x17c6,	// (0x0007243b) bg_button_pane_cp04

0x210d,	// (0x00072d82) cell_dialer_command_2_pane_g1

0x17c6,	// (0x0007243b) bg_button_pane_cp06

0x210d,	// (0x00072d82) dialer_ne_clear_pane_g1

0xca38,	// (0x0007d6ad) navi_pane_g2

0xca66,	// (0x0007d6db) navi_pane_g3

0x0002,

0xf35a,	// (0x0007ffcf) navi_pane_g

0xcaf5,	// (0x0007d76a) navi_pane_mv_g2

0xcb1c,	// (0x0007d791) navi_pane_mv_g5

0x596a,	// (0x000765df) navi_pane_mv_t1

0x1f39,	// (0x00072bae) main_clock2_pane

0x1e6e,	// (0x00072ae3) main_clock2_list_pane_ParamLimits

0x1e6e,	// (0x00072ae3) main_clock2_list_pane

0x7453,	// (0x000780c8) main_clock2_pane_t1_ParamLimits

0x7453,	// (0x000780c8) main_clock2_pane_t1

0x748e,	// (0x00078103) main_clock2_pane_t2_ParamLimits

0x748e,	// (0x00078103) main_clock2_pane_t2

0x0004,

0xf74a,	// (0x000803bf) main_clock2_pane_t_ParamLimits

0xf74a,	// (0x000803bf) main_clock2_pane_t

0x752e,	// (0x000781a3) popup_clock_analogue_window_cp03_ParamLimits

0x752e,	// (0x000781a3) popup_clock_analogue_window_cp03

0x7553,	// (0x000781c8) popup_clock_digital_window_cp02_ParamLimits

0x7553,	// (0x000781c8) popup_clock_digital_window_cp02

0x75cc,	// (0x00078241) main_clock2_list_single_pane_ParamLimits

0x75cc,	// (0x00078241) main_clock2_list_single_pane

0x20eb,	// (0x00072d60) list_highlight_pane_cp05

0x08b6,	// (0x0007152b) main_clock2_list_single_pane_t1

0x4994,	// (0x00075609) popup_toolbar_window_cp04_ParamLimits

0x1ed5,	// (0x00072b4a) camera2_autofocus_pane_g2_ParamLimits

0x1ed5,	// (0x00072b4a) camera2_autofocus_pane_g2

0x1ed5,	// (0x00072b4a) camera2_autofocus_pane_g3_ParamLimits

0x1ed5,	// (0x00072b4a) camera2_autofocus_pane_g3

0x1ed5,	// (0x00072b4a) camera2_autofocus_pane_g4_ParamLimits

0x1ed5,	// (0x00072b4a) camera2_autofocus_pane_g4

0x1ed5,	// (0x00072b4a) camera2_autofocus_pane_g5_ParamLimits

0x1ed5,	// (0x00072b4a) camera2_autofocus_pane_g5

0x0004,

0xf68e,	// (0x00080303) camera2_autofocus_pane_g_ParamLimits

0xf68e,	// (0x00080303) camera2_autofocus_pane_g

0x6cd7,	// (0x0007794c) camera2_autofocus_pane_cp_g2

0x6cdf,	// (0x00077954) camera2_autofocus_pane_cp_g3

0x6ce7,	// (0x0007795c) camera2_autofocus_pane_cp_g4

0x6cef,	// (0x00077964) camera2_autofocus_pane_cp_g5

0x0004,

0xf6f4,	// (0x00080369) camera2_autofocus_pane_cp_g

0x17c6,	// (0x0007243b) popup_dialer_spcha_window

0x17c6,	// (0x0007243b) bg_popup_sub_pane_cp07

0x17c6,	// (0x0007243b) list_spcha_pane

0x08c4,	// (0x00071539) list_single_spcha_pane_ParamLimits

0x08c4,	// (0x00071539) list_single_spcha_pane

0x17c6,	// (0x0007243b) list_highlight_pane_cp06

0xc629,	// (0x0007d29e) list_single_spcha_pane_t1

0xda29,	// (0x0007e69e) popup_call2_audio_out_window_g4_ParamLimits

0xda29,	// (0x0007e69e) popup_call2_audio_out_window_g4

0x17c6,	// (0x0007243b) main_imed2_pane

0xdfb5,	// (0x0007ec2a) popup_imed_adjust2_window

0x6676,	// (0x000772eb) popup_imed_trans_window_ParamLimits

0x6676,	// (0x000772eb) popup_imed_trans_window

0x02f4,	// (0x00070f69) popup_blid_sat_info2_window_t1

0x0302,	// (0x00070f77) popup_blid_sat_info2_window_t2

0x000a,

0xf623,	// (0x00080298) popup_blid_sat_info2_window_t

0x767d,	// (0x000782f2) aid_size_cell_colour_35

0x769d,	// (0x00078312) aid_size_cell_colour_112

0x76bd,	// (0x00078332) aid_size_cell_effect

0xcc25,	// (0x0007d89a) bg_tb_trans_pane_cp02

0xc55b,	// (0x0007d1d0) heading_imed_pane

0x76dd,	// (0x00078352) listscroll_imed_pane

0x08e2,	// (0x00071557) heading_imed_pane_g1

0x08ea,	// (0x0007155f) heading_imed_pane_t1

0x08f8,	// (0x0007156d) grid_imed_colour_35_pane_ParamLimits

0x08f8,	// (0x0007156d) grid_imed_colour_35_pane

0x76e9,	// (0x0007835e) grid_imed_effect_pane

0x0910,	// (0x00071585) list_imed_aspect_pane

0x76ff,	// (0x00078374) scroll_pane_cp027_ParamLimits

0x76ff,	// (0x00078374) scroll_pane_cp027

0x7710,	// (0x00078385) cell_imed_effect_pane_ParamLimits

0x7710,	// (0x00078385) cell_imed_effect_pane

0x0918,	// (0x0007158d) cell_imed_colour_pane_ParamLimits

0x0918,	// (0x0007158d) cell_imed_colour_pane

0x095a,	// (0x000715cf) cell_imed_colour_pane_g1_ParamLimits

0x095a,	// (0x000715cf) cell_imed_colour_pane_g1

0x096b,	// (0x000715e0) hgihlgiht_grid_pane_cp016_ParamLimits

0x096b,	// (0x000715e0) hgihlgiht_grid_pane_cp016

0x7737,	// (0x000783ac) cell_imed_effect_pane_g1

0x773f,	// (0x000783b4) grid_highlight_pane_cp017

0x097c,	// (0x000715f1) list_imed_single_pane_ParamLimits

0x097c,	// (0x000715f1) list_imed_single_pane

0x17c6,	// (0x0007243b) list_highlight_pane_cp07

0x0991,	// (0x00071606) list_imed_aspect_pane_comp1_t1

0xcc25,	// (0x0007d89a) bg_tb_trans_pane_cp05

0x09b3,	// (0x00071628) popup_imed_adjust2_window_g1

0x09da,	// (0x0007164f) popup_imed_adjust2_window_t1

0x09f2,	// (0x00071667) slider_imed_adjust_pane

0x0a06,	// (0x0007167b) slider_imed_adjust_pane_g1

0x0a16,	// (0x0007168b) slider_imed_adjust_pane_g2

0x0a26,	// (0x0007169b) slider_imed_adjust_pane_g3

0x0a37,	// (0x000716ac) slider_imed_adjust_pane_g4

0x0003,

0xf767,	// (0x000803dc) slider_imed_adjust_pane_g

0x7748,	// (0x000783bd) aid_size_cell_clipart2

0x7754,	// (0x000783c9) grid_imed_clipart_pane

0x0a48,	// (0x000716bd) scroll_pane_cp031

0x775e,	// (0x000783d3) cell_imed_clipart_pane_ParamLimits

0x775e,	// (0x000783d3) cell_imed_clipart_pane

0x7780,	// (0x000783f5) cell_imed_clipart_pane_g1

0x17c6,	// (0x0007243b) grid_highlight_pane_cp014

0x742f,	// (0x000780a4) main_clock2_pane_g1_ParamLimits

0x742f,	// (0x000780a4) main_clock2_pane_g1

0x7573,	// (0x000781e8) aid_call2_pane_cp10

0x7585,	// (0x000781fa) aid_call_pane_cp10

0xc997,	// (0x0007d60c) popup_clock_analogue_window_cp10_g1

0xc997,	// (0x0007d60c) popup_clock_analogue_window_cp10_g2

0x7597,	// (0x0007820c) popup_clock_analogue_window_cp10_g3

0x7597,	// (0x0007820c) popup_clock_analogue_window_cp10_g4

0xc997,	// (0x0007d60c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf755,	// (0x000803ca) popup_clock_analogue_window_cp10_g

0x75ad,	// (0x00078222) popup_clock_analogue_window_cp10_t1

0x75de,	// (0x00078253) clock_digital_number_pane_cp10_ParamLimits

0x75de,	// (0x00078253) clock_digital_number_pane_cp10

0x75f6,	// (0x0007826b) clock_digital_number_pane_cp11_ParamLimits

0x75f6,	// (0x0007826b) clock_digital_number_pane_cp11

0x760e,	// (0x00078283) clock_digital_number_pane_cp12_ParamLimits

0x760e,	// (0x00078283) clock_digital_number_pane_cp12

0x7628,	// (0x0007829d) clock_digital_number_pane_cp13_ParamLimits

0x7628,	// (0x0007829d) clock_digital_number_pane_cp13

0x7642,	// (0x000782b7) clock_digital_separator_pane_cp10_ParamLimits

0x7642,	// (0x000782b7) clock_digital_separator_pane_cp10

0x765c,	// (0x000782d1) popup_clock_digital_window_cp02_t1_ParamLimits

0x765c,	// (0x000782d1) popup_clock_digital_window_cp02_t1

0x1e44,	// (0x00072ab9) clock_digital_number_pane_cp10_g1

0x1e44,	// (0x00072ab9) clock_digital_number_pane_cp10_g2

0x0001,

0xf770,	// (0x000803e5) clock_digital_number_pane_cp10_g

0x1e44,	// (0x00072ab9) clock_digital_separator_pane_cp10_g1

0x1e44,	// (0x00072ab9) clock_digital_separator_pane_g2_cp10

0xcb24,	// (0x0007d799) navi_pane_vded_g4

0xcb2d,	// (0x0007d7a2) navi_pane_vded_g5

0xcb36,	// (0x0007d7ab) navi_pane_vded_t1

0x17c6,	// (0x0007243b) main_vded_pane

0x7789,	// (0x000783fe) main_vded_pane_g1

0x7793,	// (0x00078408) main_vded_pane_g2

0x779d,	// (0x00078412) main_vded_pane_g3

0x0002,

0xf775,	// (0x000803ea) main_vded_pane_g

0x77a7,	// (0x0007841c) main_vded_pane_t1

0x77b5,	// (0x0007842a) main_vded_pane_t2

0x0001,

0xf77c,	// (0x000803f1) main_vded_pane_t

0x77c3,	// (0x00078438) vded_slider_pane

0x77cb,	// (0x00078440) vded_video_pane

0x0a50,	// (0x000716c5) vded_video_pane_g1

0x77d3,	// (0x00078448) vded_video_pane_g2

0x210d,	// (0x00072d82) vded_video_pane_g3

0x0002,

0xf781,	// (0x000803f6) vded_video_pane_g

0x0a5a,	// (0x000716cf) vded_slider_pane_g1

0x021f,	// (0x00070e94) vded_slider_pane_g2

0x0a63,	// (0x000716d8) vded_slider_pane_g3

0x0a6c,	// (0x000716e1) vded_slider_pane_g4

0x0a75,	// (0x000716ea) vded_slider_pane_g5

0x0004,

0xf788,	// (0x000803fd) vded_slider_pane_g

0x7293,	// (0x00077f08) mup3_rocker_pane_ParamLimits

0x7293,	// (0x00077f08) mup3_rocker_pane

0x77dc,	// (0x00078451) mup3_control_keys_pane_g1

0x77e4,	// (0x00078459) mup3_control_keys_pane_g2

0x77ec,	// (0x00078461) mup3_control_keys_pane_g3

0x77f4,	// (0x00078469) mup3_control_keys_pane_g4

0x0003,

0xf793,	// (0x00080408) mup3_control_keys_pane_g

0x3cbd,	// (0x00074932) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3cbd,	// (0x00074932) popup_toolbar2_fixed_window_cp01

0x72c7,	// (0x00077f3c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x72c7,	// (0x00077f3c) popup_toolbar2_fixed_window_cp02

0xd3b2,	// (0x0007e027) popup_call2_audio_second_window_t4_ParamLimits

0xd3b2,	// (0x0007e027) popup_call2_audio_second_window_t4

0xd8ee,	// (0x0007e563) popup_call2_audio_first_window_t6_ParamLimits

0xd8ee,	// (0x0007e563) popup_call2_audio_first_window_t6

0xdb2c,	// (0x0007e7a1) popup_call2_audio_out_window_t6_ParamLimits

0xdb2c,	// (0x0007e7a1) popup_call2_audio_out_window_t6

0x17c6,	// (0x0007243b) main_vitu_pane

0x1e6e,	// (0x00072ae3) aid_size_cell_itu_ParamLimits

0x1e6e,	// (0x00072ae3) aid_size_cell_itu

0x1e6e,	// (0x00072ae3) bg_popup_window_pane_cp08_ParamLimits

0x1e6e,	// (0x00072ae3) bg_popup_window_pane_cp08

0x1e6e,	// (0x00072ae3) field_vitu_entry_pane_ParamLimits

0x1e6e,	// (0x00072ae3) field_vitu_entry_pane

0x1e6e,	// (0x00072ae3) grid_vitu_function_pane_ParamLimits

0x1e6e,	// (0x00072ae3) grid_vitu_function_pane

0x1e6e,	// (0x00072ae3) grid_vitu_itu_pane_ParamLimits

0x1e6e,	// (0x00072ae3) grid_vitu_itu_pane

0x1e6e,	// (0x00072ae3) cell_vitu_itu_pane_ParamLimits

0x1e6e,	// (0x00072ae3) cell_vitu_itu_pane

0x1e6e,	// (0x00072ae3) cell_vitu_function_pane_ParamLimits

0x1e6e,	// (0x00072ae3) cell_vitu_function_pane

0x1e6e,	// (0x00072ae3) bg_popup_sub_pane_cp08_ParamLimits

0x1e6e,	// (0x00072ae3) bg_popup_sub_pane_cp08

0x2127,	// (0x00072d9c) field_vitu_entry_pane_t1_ParamLimits

0x2127,	// (0x00072d9c) field_vitu_entry_pane_t1

0x083f,	// (0x000714b4) field_vitu_entry_pane_t2_ParamLimits

0x083f,	// (0x000714b4) field_vitu_entry_pane_t2

0x0001,

0xf79c,	// (0x00080411) field_vitu_entry_pane_t_ParamLimits

0xf79c,	// (0x00080411) field_vitu_entry_pane_t

0xe110,	// (0x0007ed85) bg_button_pane_cp05_ParamLimits

0xe110,	// (0x0007ed85) bg_button_pane_cp05

0x0a7e,	// (0x000716f3) cell_vitu_itu_pane_g1

0x016c,	// (0x00070de1) cell_vitu_itu_pane_t1_ParamLimits

0x016c,	// (0x00070de1) cell_vitu_itu_pane_t1

0x016c,	// (0x00070de1) cell_vitu_itu_pane_t2_ParamLimits

0x016c,	// (0x00070de1) cell_vitu_itu_pane_t2

0x0002,

0xf7a1,	// (0x00080416) cell_vitu_itu_pane_t_ParamLimits

0xf7a1,	// (0x00080416) cell_vitu_itu_pane_t

0x17c6,	// (0x0007243b) bg_button_pane_cp07

0x210d,	// (0x00072d82) cell_vitu_function_pane_g1

0xc3d1,	// (0x0007d046) main_calc_pane_g1

0x3ae4,	// (0x00074759) aid_visual_content_pane

0x17c6,	// (0x0007243b) main_vradio_pane

0x1ec7,	// (0x00072b3c) main_vradio_pane_g1_ParamLimits

0x1ec7,	// (0x00072b3c) main_vradio_pane_g1

0x1ed5,	// (0x00072b4a) main_vradio_pane_g2_ParamLimits

0x1ed5,	// (0x00072b4a) main_vradio_pane_g2

0x0001,

0xf7a8,	// (0x0008041d) main_vradio_pane_g_ParamLimits

0xf7a8,	// (0x0008041d) main_vradio_pane_g

0x2127,	// (0x00072d9c) main_vradio_pane_t1_ParamLimits

0x2127,	// (0x00072d9c) main_vradio_pane_t1

0x2127,	// (0x00072d9c) main_vradio_pane_t2_ParamLimits

0x2127,	// (0x00072d9c) main_vradio_pane_t2

0x24c4,	// (0x00073139) main_vradio_pane_t3_ParamLimits

0x24c4,	// (0x00073139) main_vradio_pane_t3

0x0002,

0xf7ad,	// (0x00080422) main_vradio_pane_t_ParamLimits

0xf7ad,	// (0x00080422) main_vradio_pane_t

0x1e6e,	// (0x00072ae3) vradio_rocker_control_pane_ParamLimits

0x1e6e,	// (0x00072ae3) vradio_rocker_control_pane

0x1e6e,	// (0x00072ae3) vradio_station_info_pane_ParamLimits

0x1e6e,	// (0x00072ae3) vradio_station_info_pane

0x1e6e,	// (0x00072ae3) vradio_frequency_info_pane_ParamLimits

0x1e6e,	// (0x00072ae3) vradio_frequency_info_pane

0x210d,	// (0x00072d82) vradio_station_info_pane_g1

0x016c,	// (0x00070de1) vradio_station_info_pane_t1_ParamLimits

0x016c,	// (0x00070de1) vradio_station_info_pane_t1

0x24c4,	// (0x00073139) vradio_station_info_pane_t2_ParamLimits

0x24c4,	// (0x00073139) vradio_station_info_pane_t2

0x0001,

0xf7b4,	// (0x00080429) vradio_station_info_pane_t_ParamLimits

0xf7b4,	// (0x00080429) vradio_station_info_pane_t

0x17c6,	// (0x0007243b) vradio_tuning_pane

0x7804,	// (0x00078479) vradio_rocker_control_pane_g1

0x0a9a,	// (0x0007170f) vradio_rocker_control_pane_g2

0x780e,	// (0x00078483) vradio_rocker_control_pane_g3

0x7818,	// (0x0007848d) vradio_rocker_control_pane_g4

0x7822,	// (0x00078497) vradio_rocker_control_pane_g5

0x0004,

0xf7b9,	// (0x0008042e) vradio_rocker_control_pane_g

0x210d,	// (0x00072d82) vradio_frequency_info_pane_g1

0x2127,	// (0x00072d9c) vradio_frequency_info_pane_t1_ParamLimits

0x2127,	// (0x00072d9c) vradio_frequency_info_pane_t1

0x782c,	// (0x000784a1) vradio_tuning_pane_g1

0x7837,	// (0x000784ac) vradio_tuning_pane_t1

0xc390,	// (0x0007d005) area_side_right_pane_ParamLimits

0xc390,	// (0x0007d005) area_side_right_pane

0xdf56,	// (0x0007ebcb) status_small_pane_g1

0xdf5e,	// (0x0007ebd3) status_small_pane_g2

0xdf67,	// (0x0007ebdc) status_small_pane_g3

0xdf70,	// (0x0007ebe5) status_small_pane_g4

0x0003,

0xf585,	// (0x000801fa) status_small_pane_g

0xdf79,	// (0x0007ebee) status_small_pane_t1

0x17c6,	// (0x0007243b) main_video3_pane

0x0aa2,	// (0x00071717) cams_zoom_vslider_pane

0x0aaa,	// (0x0007171f) image3_wide_pane_ParamLimits

0x0aaa,	// (0x0007171f) image3_wide_pane

0x0ac4,	// (0x00071739) image3_wide_small_pane

0x0ad0,	// (0x00071745) main_video3_pane_g1_ParamLimits

0x0ad0,	// (0x00071745) main_video3_pane_g1

0x0aec,	// (0x00071761) main_video3_pane_g2_ParamLimits

0x0aec,	// (0x00071761) main_video3_pane_g2

0x0001,

0xf7c4,	// (0x00080439) main_video3_pane_g_ParamLimits

0xf7c4,	// (0x00080439) main_video3_pane_g

0x0b08,	// (0x0007177d) main_video3_pane_t1_ParamLimits

0x0b08,	// (0x0007177d) main_video3_pane_t1

0x0b33,	// (0x000717a8) main_video3_pane_t2_ParamLimits

0x0b33,	// (0x000717a8) main_video3_pane_t2

0x0b5e,	// (0x000717d3) main_video3_pane_t3_ParamLimits

0x0b5e,	// (0x000717d3) main_video3_pane_t3

0x0002,

0xf7c9,	// (0x0008043e) main_video3_pane_t_ParamLimits

0xf7c9,	// (0x0008043e) main_video3_pane_t

0x0b8b,	// (0x00071800) cams_zoom_vslider_pane_g1

0x0b94,	// (0x00071809) cams_zoom_vslider_pane_g2

0x0001,

0xf7d0,	// (0x00080445) cams_zoom_vslider_pane_g

0x0b9c,	// (0x00071811) small_slider_vertical_pane

0x210d,	// (0x00072d82) small_slider_vertical_pane_g1

0x210d,	// (0x00072d82) small_slider_vertical_pane_g2

0x0ba4,	// (0x00071819) small_slider_vertical_pane_g3

0x0002,

0xf7d5,	// (0x0008044a) small_slider_vertical_pane_g

0x17c6,	// (0x0007243b) main_hwr_training_pane

0x0bad,	// (0x00071822) hwr_training_instruct_pane_ParamLimits

0x0bad,	// (0x00071822) hwr_training_instruct_pane

0x7846,	// (0x000784bb) hwr_training_navi_pane_ParamLimits

0x7846,	// (0x000784bb) hwr_training_navi_pane

0x7865,	// (0x000784da) hwr_training_write_pane_ParamLimits

0x7865,	// (0x000784da) hwr_training_write_pane

0x17c6,	// (0x0007243b) bg_frame_shadow_pane

0x0be4,	// (0x00071859) hwr_training_write_pane_g1

0x0bec,	// (0x00071861) hwr_training_write_pane_g2

0x0bf4,	// (0x00071869) hwr_training_write_pane_g3

0x0bfc,	// (0x00071871) hwr_training_write_pane_g4

0x0c04,	// (0x00071879) hwr_training_write_pane_g5

0x0c0c,	// (0x00071881) hwr_training_write_pane_g6

0x0c14,	// (0x00071889) hwr_training_write_pane_g7

0x0006,

0xf7dc,	// (0x00080451) hwr_training_write_pane_g

0xe1be,	// (0x0007ee33) hwr_training_navi_pane_g1_ParamLimits

0xe1be,	// (0x0007ee33) hwr_training_navi_pane_g1

0xe1d0,	// (0x0007ee45) hwr_training_navi_pane_g2_ParamLimits

0xe1d0,	// (0x0007ee45) hwr_training_navi_pane_g2

0xe1e2,	// (0x0007ee57) hwr_training_navi_pane_g3_ParamLimits

0xe1e2,	// (0x0007ee57) hwr_training_navi_pane_g3

0xe1f2,	// (0x0007ee67) hwr_training_navi_pane_g4_ParamLimits

0xe1f2,	// (0x0007ee67) hwr_training_navi_pane_g4

0x0004,

0xf7eb,	// (0x00080460) hwr_training_navi_pane_g_ParamLimits

0xf7eb,	// (0x00080460) hwr_training_navi_pane_g

0xe1ff,	// (0x0007ee74) hwr_training_navi_pane_t1

0x78af,	// (0x00078524) list_single_hwr_training_instruct_pane_ParamLimits

0x78af,	// (0x00078524) list_single_hwr_training_instruct_pane

0x0c1c,	// (0x00071891) list_single_hwr_training_instruct_pane_t1

0x03f5,	// (0x0007106a) bg_frame_shadow_pane_g1

0x0c2b,	// (0x000718a0) bg_frame_shadow_pane_g2

0x0c33,	// (0x000718a8) bg_frame_shadow_pane_g3

0x0c3b,	// (0x000718b0) bg_frame_shadow_pane_g4

0x0c43,	// (0x000718b8) bg_frame_shadow_pane_g5

0x0c4b,	// (0x000718c0) bg_frame_shadow_pane_g6

0x0c53,	// (0x000718c8) bg_frame_shadow_pane_g7

0x1fe8,	// (0x00072c5d) bg_frame_shadow_pane_g8

0x0007,

0xf7f6,	// (0x0008046b) bg_frame_shadow_pane_g

0x17c6,	// (0x0007243b) main_video_tele_dialer_pane

0x78c5,	// (0x0007853a) aid_size_cell_video_keypad_ParamLimits

0x78c5,	// (0x0007853a) aid_size_cell_video_keypad

0x78df,	// (0x00078554) grid_video_dialer_keypad_pane_ParamLimits

0x78df,	// (0x00078554) grid_video_dialer_keypad_pane

0x792d,	// (0x000785a2) video_down_pane_cp_ParamLimits

0x792d,	// (0x000785a2) video_down_pane_cp

0x795f,	// (0x000785d4) cell_video_dialer_keypad_pane_ParamLimits

0x795f,	// (0x000785d4) cell_video_dialer_keypad_pane

0x0c5b,	// (0x000718d0) bg_button_pane_cp08_ParamLimits

0x0c5b,	// (0x000718d0) bg_button_pane_cp08

0x7981,	// (0x000785f6) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7981,	// (0x000785f6) cell_video_dialer_keypad_pane_g1

0x727d,	// (0x00077ef2) mup3_rocker2_pane_ParamLimits

0x727d,	// (0x00077ef2) mup3_rocker2_pane

0x210d,	// (0x00072d82) mup3_rocker2_pane_g1

0x6565,	// (0x000771da) main_dialer2_pane

0x17c6,	// (0x0007243b) main_mp4_pane

0xe22b,	// (0x0007eea0) main_mp4_pane_g1_ParamLimits

0xe22b,	// (0x0007eea0) main_mp4_pane_g1

0xe22b,	// (0x0007eea0) main_mp4_pane_g2_ParamLimits

0xe22b,	// (0x0007eea0) main_mp4_pane_g2

0x79bb,	// (0x00078630) main_mp4_pane_g3_ParamLimits

0x79bb,	// (0x00078630) main_mp4_pane_g3

0xe239,	// (0x0007eeae) main_mp4_pane_g4_ParamLimits

0xe239,	// (0x0007eeae) main_mp4_pane_g4

0xe267,	// (0x0007eedc) main_mp4_pane_g5_ParamLimits

0xe267,	// (0x0007eedc) main_mp4_pane_g5

0x0007,

0xf816,	// (0x0008048b) main_mp4_pane_g_ParamLimits

0xf816,	// (0x0008048b) main_mp4_pane_g

0xe2db,	// (0x0007ef50) main_mp4_pane_t1_ParamLimits

0xe2db,	// (0x0007ef50) main_mp4_pane_t1

0xe337,	// (0x0007efac) main_mp4_pane_t2_ParamLimits

0xe337,	// (0x0007efac) main_mp4_pane_t2

0x0c67,	// (0x000718dc) main_mp4_pane_t3_ParamLimits

0x0c67,	// (0x000718dc) main_mp4_pane_t3

0xe389,	// (0x0007effe) main_mp4_pane_t4_ParamLimits

0xe389,	// (0x0007effe) main_mp4_pane_t4

0x0003,

0xf827,	// (0x0008049c) main_mp4_pane_t_ParamLimits

0xf827,	// (0x0008049c) main_mp4_pane_t

0xe3cd,	// (0x0007f042) mp4_progress_pane_ParamLimits

0xe3cd,	// (0x0007f042) mp4_progress_pane

0xe417,	// (0x0007f08c) mp4_rocker_pane_ParamLimits

0xe417,	// (0x0007f08c) mp4_rocker_pane

0x0c95,	// (0x0007190a) mp4_progress_pane_t1

0x0cae,	// (0x00071923) mp4_progress_pane_t2

0x0001,

0xf830,	// (0x000804a5) mp4_progress_pane_t

0x0cc7,	// (0x0007193c) mup_progress_pane_cp04

0x210d,	// (0x00072d82) mp4_rocker_pane_g1

0x79f7,	// (0x0007866c) aid_cell_size_keypad2_ParamLimits

0x79f7,	// (0x0007866c) aid_cell_size_keypad2

0x7a0d,	// (0x00078682) dialer2_ne_pane_ParamLimits

0x7a0d,	// (0x00078682) dialer2_ne_pane

0x7a27,	// (0x0007869c) grid_dialer2_keypad_pane_ParamLimits

0x7a27,	// (0x0007869c) grid_dialer2_keypad_pane

0xe110,	// (0x0007ed85) bg_popup_call_pane_cp07_ParamLimits

0xe110,	// (0x0007ed85) bg_popup_call_pane_cp07

0x7a43,	// (0x000786b8) dialer2_ne_pane_t1_ParamLimits

0x7a43,	// (0x000786b8) dialer2_ne_pane_t1

0x7a7f,	// (0x000786f4) cell_dialer2_keypad_pane_ParamLimits

0x7a7f,	// (0x000786f4) cell_dialer2_keypad_pane

0x0cfa,	// (0x0007196f) bg_button_pane_pane_cp04_ParamLimits

0x0cfa,	// (0x0007196f) bg_button_pane_pane_cp04

0x7aa1,	// (0x00078716) cell_dialer2_keypad_pane_g1_ParamLimits

0x7aa1,	// (0x00078716) cell_dialer2_keypad_pane_g1

0x4868,	// (0x000754dd) aid_placing_vt_set_content_ParamLimits

0x4868,	// (0x000754dd) aid_placing_vt_set_content

0x4890,	// (0x00075505) aid_placing_vt_set_title_ParamLimits

0x4890,	// (0x00075505) aid_placing_vt_set_title

0x17c6,	// (0x0007243b) main_image3_pane

0x7b67,	// (0x000787dc) area_side_right_pane_cp01_ParamLimits

0x7b67,	// (0x000787dc) area_side_right_pane_cp01

0xe22b,	// (0x0007eea0) main_image3_pane_g1_ParamLimits

0xe22b,	// (0x0007eea0) main_image3_pane_g1

0x7b7e,	// (0x000787f3) main_image3_pane_g2_ParamLimits

0x7b7e,	// (0x000787f3) main_image3_pane_g2

0x7ba6,	// (0x0007881b) main_image3_pane_g3_ParamLimits

0x7ba6,	// (0x0007881b) main_image3_pane_g3

0x7bd0,	// (0x00078845) main_image3_pane_g4_ParamLimits

0x7bd0,	// (0x00078845) main_image3_pane_g4

0x0003,

0xf83f,	// (0x000804b4) main_image3_pane_g_ParamLimits

0xf83f,	// (0x000804b4) main_image3_pane_g

0x7bfa,	// (0x0007886f) main_image3_pane_t1_ParamLimits

0x7bfa,	// (0x0007886f) main_image3_pane_t1

0x7c52,	// (0x000788c7) main_image3_pane_t2_ParamLimits

0x7c52,	// (0x000788c7) main_image3_pane_t2

0x7ca4,	// (0x00078919) main_image3_pane_t3_ParamLimits

0x7ca4,	// (0x00078919) main_image3_pane_t3

0x0003,

0xf848,	// (0x000804bd) main_image3_pane_t_ParamLimits

0xf848,	// (0x000804bd) main_image3_pane_t

0x1e6e,	// (0x00072ae3) grid_sctrl_middle_pane_cp01_ParamLimits

0x1e6e,	// (0x00072ae3) grid_sctrl_middle_pane_cp01

0x7d2c,	// (0x000789a1) cell_sctrl_middle_pane_cp01_ParamLimits

0x7d2c,	// (0x000789a1) cell_sctrl_middle_pane_cp01

0x7d49,	// (0x000789be) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7d49,	// (0x000789be) cell_sctrl_middle_pane_cp01_g1

0x17c6,	// (0x0007243b) main_call4_pane

0x7d5f,	// (0x000789d4) aid_size_button_call4_ParamLimits

0x7d5f,	// (0x000789d4) aid_size_button_call4

0x7d92,	// (0x00078a07) call4_windows_pane_ParamLimits

0x7d92,	// (0x00078a07) call4_windows_pane

0x7db1,	// (0x00078a26) grid_call4_button_pane_ParamLimits

0x7db1,	// (0x00078a26) grid_call4_button_pane

0x7de4,	// (0x00078a59) call4_windows_conf_pane

0x7df9,	// (0x00078a6e) popup_call4_audio_first_window_ParamLimits

0x7df9,	// (0x00078a6e) popup_call4_audio_first_window

0x7e49,	// (0x00078abe) popup_call4_audio_second_window_ParamLimits

0x7e49,	// (0x00078abe) popup_call4_audio_second_window

0x7e60,	// (0x00078ad5) popup_call4_audio_wait_window_ParamLimits

0x7e60,	// (0x00078ad5) popup_call4_audio_wait_window

0x7e6e,	// (0x00078ae3) cell_call4_button_pane_ParamLimits

0x7e6e,	// (0x00078ae3) cell_call4_button_pane

0x7e93,	// (0x00078b08) bg_button_pane_cp09_ParamLimits

0x7e93,	// (0x00078b08) bg_button_pane_cp09

0x7e9f,	// (0x00078b14) cell_call4_button_pane_g1_ParamLimits

0x7e9f,	// (0x00078b14) cell_call4_button_pane_g1

0x7ec5,	// (0x00078b3a) cell_call4_button_pane_t1_ParamLimits

0x7ec5,	// (0x00078b3a) cell_call4_button_pane_t1

0x0d0e,	// (0x00071983) popup_call4_audio_conf_window_ParamLimits

0x0d0e,	// (0x00071983) popup_call4_audio_conf_window

0x72dd,	// (0x00077f52) mup3_progress_pane_t1_ParamLimits

0x72fc,	// (0x00077f71) mup3_progress_pane_t2_ParamLimits

0x0768,	// (0x000713dd) mup3_progress_pane_t3_ParamLimits

0xf71d,	// (0x00080392) mup3_progress_pane_t_ParamLimits

0x0785,	// (0x000713fa) mup_progress_pane_cp03_ParamLimits

0x77fc,	// (0x00078471) mup3_control_keys_pane_g4_copy1

0xe3fb,	// (0x0007f070) mp4_rocker2_pane_ParamLimits

0xe3fb,	// (0x0007f070) mp4_rocker2_pane

0x0d22,	// (0x00071997) mp4_rocker2_pane_g1

0x0d2a,	// (0x0007199f) mp4_rocker2_pane_g2

0xe49b,	// (0x0007f110) mp4_rocker2_pane_g3

0xe4a3,	// (0x0007f118) mp4_rocker2_pane_g4

0xe4ab,	// (0x0007f120) mp4_rocker2_pane_g5

0x0004,

0xf851,	// (0x000804c6) mp4_rocker2_pane_g

0x17c6,	// (0x0007243b) main_camera4_pane

0x17c6,	// (0x0007243b) main_video4_pane

0x78fb,	// (0x00078570) main_video_tele_dialer_pane_t1_ParamLimits

0x78fb,	// (0x00078570) main_video_tele_dialer_pane_t1

0x7914,	// (0x00078589) main_video_tele_dialer_pane_t2_ParamLimits

0x7914,	// (0x00078589) main_video_tele_dialer_pane_t2

0x0001,

0xf807,	// (0x0008047c) main_video_tele_dialer_pane_t_ParamLimits

0xf807,	// (0x0008047c) main_video_tele_dialer_pane_t

0x7f07,	// (0x00078b7c) cam4_autofocus_pane_ParamLimits

0x7f07,	// (0x00078b7c) cam4_autofocus_pane

0x7f1d,	// (0x00078b92) cam4_image_uncrop_pane_ParamLimits

0x7f1d,	// (0x00078b92) cam4_image_uncrop_pane

0x7f37,	// (0x00078bac) cam4_indicators_pane_ParamLimits

0x7f37,	// (0x00078bac) cam4_indicators_pane

0x7f62,	// (0x00078bd7) main_camera4_pane_g1_ParamLimits

0x7f62,	// (0x00078bd7) main_camera4_pane_g1

0x7f74,	// (0x00078be9) main_camera4_pane_g2_ParamLimits

0x7f74,	// (0x00078be9) main_camera4_pane_g2

0x7f87,	// (0x00078bfc) main_camera4_pane_g3_ParamLimits

0x7f87,	// (0x00078bfc) main_camera4_pane_g3

0x7f9a,	// (0x00078c0f) main_camera4_pane_g4_ParamLimits

0x7f9a,	// (0x00078c0f) main_camera4_pane_g4

0x7fad,	// (0x00078c22) main_camera4_pane_g5_ParamLimits

0x7fad,	// (0x00078c22) main_camera4_pane_g5

0x0005,

0xf85c,	// (0x000804d1) main_camera4_pane_g_ParamLimits

0xf85c,	// (0x000804d1) main_camera4_pane_g

0x7fd1,	// (0x00078c46) main_camera4_pane_t1_ParamLimits

0x7fd1,	// (0x00078c46) main_camera4_pane_t1

0x1ec7,	// (0x00072b3c) bg_tb_trans_pane_cp06

0xe4d7,	// (0x0007f14c) cam4_indicators_pane_g1

0xe4e8,	// (0x0007f15d) cam4_indicators_pane_g2

0x0002,

0xf877,	// (0x000804ec) cam4_indicators_pane_g

0xe500,	// (0x0007f175) cam4_indicators_pane_t1

0x8035,	// (0x00078caa) main_video4_pane_g1_ParamLimits

0x8035,	// (0x00078caa) main_video4_pane_g1

0x8044,	// (0x00078cb9) main_video4_pane_g2_ParamLimits

0x8044,	// (0x00078cb9) main_video4_pane_g2

0x8053,	// (0x00078cc8) main_video4_pane_g3_ParamLimits

0x8053,	// (0x00078cc8) main_video4_pane_g3

0x8062,	// (0x00078cd7) main_video4_pane_g4_ParamLimits

0x8062,	// (0x00078cd7) main_video4_pane_g4

0x0004,

0xf87e,	// (0x000804f3) main_video4_pane_g_ParamLimits

0xf87e,	// (0x000804f3) main_video4_pane_g

0x8080,	// (0x00078cf5) vid4_indicators_pane_ParamLimits

0x8080,	// (0x00078cf5) vid4_indicators_pane

0x80ae,	// (0x00078d23) video4_image_uncrop_cif_pane_ParamLimits

0x80ae,	// (0x00078d23) video4_image_uncrop_cif_pane

0x80c8,	// (0x00078d3d) video4_image_uncrop_nhd_pane_ParamLimits

0x80c8,	// (0x00078d3d) video4_image_uncrop_nhd_pane

0x7f1d,	// (0x00078b92) video4_image_uncrop_vga_pane_ParamLimits

0x7f1d,	// (0x00078b92) video4_image_uncrop_vga_pane

0x1e6e,	// (0x00072ae3) bg_tb_trans_pane_cp07

0xe52a,	// (0x0007f19f) vid4_indicators_pane_g1

0xe53e,	// (0x0007f1b3) vid4_indicators_pane_g2

0xe552,	// (0x0007f1c7) vid4_indicators_pane_g3

0x0004,

0xf889,	// (0x000804fe) vid4_indicators_pane_g

0xe57f,	// (0x0007f1f4) vid4_indicators_pane_t1

0x80dc,	// (0x00078d51) cam4_autofocus_pane_g1

0x80e4,	// (0x00078d59) cam4_autofocus_pane_g2

0x80ec,	// (0x00078d61) cam4_autofocus_pane_g3

0x0002,

0xf894,	// (0x00080509) cam4_autofocus_pane_g

0x80f4,	// (0x00078d69) cam4_autofocus_pane_g3_copy1

0x7943,	// (0x000785b8) video_down_pane_cp_t1

0x7951,	// (0x000785c6) video_down_pane_cp_t2

0x0001,

0xf80c,	// (0x00080481) video_down_pane_cp_t

0x1e6e,	// (0x00072ae3) popup_vitu2_window_ParamLimits

0x1e6e,	// (0x00072ae3) popup_vitu2_window

0x80fc,	// (0x00078d71) aid_size_cell2_itu2_ParamLimits

0x80fc,	// (0x00078d71) aid_size_cell2_itu2

0x8122,	// (0x00078d97) aid_size_cell_itu2_ParamLimits

0x8122,	// (0x00078d97) aid_size_cell_itu2

0x7387,	// (0x00077ffc) bg_popup_window_pane_cp09_ParamLimits

0x7387,	// (0x00077ffc) bg_popup_window_pane_cp09

0x817e,	// (0x00078df3) field_vitu2_entry_pane_ParamLimits

0x817e,	// (0x00078df3) field_vitu2_entry_pane

0x81a4,	// (0x00078e19) grid_vitu2_function_pane_ParamLimits

0x81a4,	// (0x00078e19) grid_vitu2_function_pane

0x81f5,	// (0x00078e6a) grid_vitu2_itu_pane_ParamLimits

0x81f5,	// (0x00078e6a) grid_vitu2_itu_pane

0x828b,	// (0x00078f00) cell_vitu2_itu_pane_ParamLimits

0x828b,	// (0x00078f00) cell_vitu2_itu_pane

0x82b7,	// (0x00078f2c) cell_vitu2_function_pane_ParamLimits

0x82b7,	// (0x00078f2c) cell_vitu2_function_pane

0x0d32,	// (0x000719a7) bg_popup_call_pane_cp08_ParamLimits

0x0d32,	// (0x000719a7) bg_popup_call_pane_cp08

0x0d49,	// (0x000719be) field_vitu2_entry_pane_g1

0x0d55,	// (0x000719ca) field_vitu2_entry_pane_g2

0x0002,

0xf89b,	// (0x00080510) field_vitu2_entry_pane_g

0x3385,	// (0x00073ffa) field_vitu2_entry_pane_t1_ParamLimits

0x3385,	// (0x00073ffa) field_vitu2_entry_pane_t1

0xe596,	// (0x0007f20b) field_vitu2_entry_pane_t2_ParamLimits

0xe596,	// (0x0007f20b) field_vitu2_entry_pane_t2

0x0001,

0xf8a2,	// (0x00080517) field_vitu2_entry_pane_t_ParamLimits

0xf8a2,	// (0x00080517) field_vitu2_entry_pane_t

0x82f6,	// (0x00078f6b) bg_button_pane_cp010_ParamLimits

0x82f6,	// (0x00078f6b) bg_button_pane_cp010

0x8304,	// (0x00078f79) cell_vitu2_itu_pane_g1

0x832a,	// (0x00078f9f) cell_vitu2_itu_pane_t1_ParamLimits

0x832a,	// (0x00078f9f) cell_vitu2_itu_pane_t1

0x33b5,	// (0x0007402a) cell_vitu2_itu_pane_t2_ParamLimits

0x33b5,	// (0x0007402a) cell_vitu2_itu_pane_t2

0x0002,

0xf8ac,	// (0x00080521) cell_vitu2_itu_pane_t_ParamLimits

0xf8ac,	// (0x00080521) cell_vitu2_itu_pane_t

0x1e6e,	// (0x00072ae3) bg_button_pane_cp011

0x8388,	// (0x00078ffd) cell_vitu2_function_pane_g1

0x17c6,	// (0x0007243b) main_myfav_hc_pane

0x7cf4,	// (0x00078969) popup_image3_note_pane_ParamLimits

0x7cf4,	// (0x00078969) popup_image3_note_pane

0x7d10,	// (0x00078985) popup_image3_tool_bar_pane_ParamLimits

0x7d10,	// (0x00078985) popup_image3_tool_bar_pane

0x3443,	// (0x000740b8) cell_vitu2_itu_pane_t3_ParamLimits

0x3443,	// (0x000740b8) cell_vitu2_itu_pane_t3

0x17c6,	// (0x0007243b) bg_popup_trans_pane

0x0d69,	// (0x000719de) grid_image3_tool_bar_pane

0x0d73,	// (0x000719e8) bg_popup_trans_pane_g1

0x2332,	// (0x00072fa7) bg_popup_trans_pane_g2

0x0d7b,	// (0x000719f0) bg_popup_trans_pane_g3

0x0d83,	// (0x000719f8) bg_popup_trans_pane_g4

0x0d8b,	// (0x00071a00) bg_popup_trans_pane_g5

0x0d93,	// (0x00071a08) bg_popup_trans_pane_g6

0x0d9b,	// (0x00071a10) bg_popup_trans_pane_g7

0x0da3,	// (0x00071a18) bg_popup_trans_pane_g8

0x2312,	// (0x00072f87) bg_popup_trans_pane_g9

0x0008,

0xf8b3,	// (0x00080528) bg_popup_trans_pane_g

0x0dab,	// (0x00071a20) cell_image3_tool_bar_pane_ParamLimits

0x0dab,	// (0x00071a20) cell_image3_tool_bar_pane

0x210d,	// (0x00072d82) cell_image3_tool_bar_pane_g1

0x17c6,	// (0x0007243b) bg_popup_trans_pane_cp1

0x0dbf,	// (0x00071a34) popup_image3_note_pane_t1

0x0dcd,	// (0x00071a42) popup_image3_note_pane_t2

0x0ddb,	// (0x00071a50) popup_image3_note_pane_t3

0x0002,

0xf8c6,	// (0x0008053b) popup_image3_note_pane_t

0x0de9,	// (0x00071a5e) popup_image3_note_pane_t3_copy1

0x839b,	// (0x00079010) bg_myfav_hc_instruction_pane_ParamLimits

0x839b,	// (0x00079010) bg_myfav_hc_instruction_pane

0x83af,	// (0x00079024) cell_myfav_contact_pane_ParamLimits

0x83af,	// (0x00079024) cell_myfav_contact_pane

0x83cd,	// (0x00079042) cell_myfav_contact_pane_cp1_ParamLimits

0x83cd,	// (0x00079042) cell_myfav_contact_pane_cp1

0x83e5,	// (0x0007905a) cell_myfav_contact_pane_cp2_ParamLimits

0x83e5,	// (0x0007905a) cell_myfav_contact_pane_cp2

0x83fd,	// (0x00079072) cell_myfav_contact_pane_cp3_ParamLimits

0x83fd,	// (0x00079072) cell_myfav_contact_pane_cp3

0x8414,	// (0x00079089) cell_myfav_contact_pane_cp4_ParamLimits

0x8414,	// (0x00079089) cell_myfav_contact_pane_cp4

0x842c,	// (0x000790a1) cell_myfav_contact_pane_cp5_ParamLimits

0x842c,	// (0x000790a1) cell_myfav_contact_pane_cp5

0x8440,	// (0x000790b5) cell_myfav_contact_pane_cp6_ParamLimits

0x8440,	// (0x000790b5) cell_myfav_contact_pane_cp6

0x8456,	// (0x000790cb) cell_myfav_contact_pane_cp7_ParamLimits

0x8456,	// (0x000790cb) cell_myfav_contact_pane_cp7

0x0df7,	// (0x00071a6c) listscroll_gen_pane_cp05

0x8470,	// (0x000790e5) main_myfav_hc_pane_g1_ParamLimits

0x8470,	// (0x000790e5) main_myfav_hc_pane_g1

0x848a,	// (0x000790ff) main_myfav_hc_pane_g2_ParamLimits

0x848a,	// (0x000790ff) main_myfav_hc_pane_g2

0x0002,

0xf8cd,	// (0x00080542) main_myfav_hc_pane_g_ParamLimits

0xf8cd,	// (0x00080542) main_myfav_hc_pane_g

0x84bc,	// (0x00079131) main_myfav_hc_pane_t1_ParamLimits

0x84bc,	// (0x00079131) main_myfav_hc_pane_t1

0x0e00,	// (0x00071a75) main_myfav_hc_pane_t2_ParamLimits

0x0e00,	// (0x00071a75) main_myfav_hc_pane_t2

0x0e12,	// (0x00071a87) main_myfav_hc_pane_t3_ParamLimits

0x0e12,	// (0x00071a87) main_myfav_hc_pane_t3

0x84d3,	// (0x00079148) main_myfav_hc_pane_t4_ParamLimits

0x84d3,	// (0x00079148) main_myfav_hc_pane_t4

0x0004,

0xf8d4,	// (0x00080549) main_myfav_hc_pane_t_ParamLimits

0xf8d4,	// (0x00080549) main_myfav_hc_pane_t

0x210d,	// (0x00072d82) bg_myfav_hc_instruction_pane_g1

0x0e24,	// (0x00071a99) cell_myfav_contact_pane_g1_ParamLimits

0x0e24,	// (0x00071a99) cell_myfav_contact_pane_g1

0x0e24,	// (0x00071a99) cell_myfav_contact_pane_g2_ParamLimits

0x0e24,	// (0x00071a99) cell_myfav_contact_pane_g2

0x0e30,	// (0x00071aa5) cell_myfav_contact_pane_g3_ParamLimits

0x0e30,	// (0x00071aa5) cell_myfav_contact_pane_g3

0x1ed5,	// (0x00072b4a) cell_myfav_contact_pane_g4_ParamLimits

0x1ed5,	// (0x00072b4a) cell_myfav_contact_pane_g4

0x0e3d,	// (0x00071ab2) cell_myfav_contact_pane_g5_ParamLimits

0x0e3d,	// (0x00071ab2) cell_myfav_contact_pane_g5

0x0004,

0xf8df,	// (0x00080554) cell_myfav_contact_pane_g_ParamLimits

0xf8df,	// (0x00080554) cell_myfav_contact_pane_g

0x84a4,	// (0x00079119) main_myfav_hc_pane_g3_ParamLimits

0x84a4,	// (0x00079119) main_myfav_hc_pane_g3

0x3c1f,	// (0x00074894) popup_adpt_find_window

0x84fb,	// (0x00079170) afind_page_pane_ParamLimits

0x84fb,	// (0x00079170) afind_page_pane

0x8510,	// (0x00079185) aid_size_cell_afind_ParamLimits

0x8510,	// (0x00079185) aid_size_cell_afind

0x852e,	// (0x000791a3) bg_popup_sub_pane_cp09_ParamLimits

0x852e,	// (0x000791a3) bg_popup_sub_pane_cp09

0x853b,	// (0x000791b0) find_pane_cp01_ParamLimits

0x853b,	// (0x000791b0) find_pane_cp01

0x0e49,	// (0x00071abe) grid_afind_control_pane_ParamLimits

0x0e49,	// (0x00071abe) grid_afind_control_pane

0x8548,	// (0x000791bd) grid_afind_pane_ParamLimits

0x8548,	// (0x000791bd) grid_afind_pane

0x8567,	// (0x000791dc) cell_afind_pane_ParamLimits

0x8567,	// (0x000791dc) cell_afind_pane

0x210d,	// (0x00072d82) afind_page_pane_g1

0x85ce,	// (0x00079243) afind_page_pane_g2

0x85d7,	// (0x0007924c) afind_page_pane_g3

0x0002,

0xf8ea,	// (0x0008055f) afind_page_pane_g

0x85e0,	// (0x00079255) afind_page_pane_t1

0x0e5d,	// (0x00071ad2) cell_afind_grid_control_pane_ParamLimits

0x0e5d,	// (0x00071ad2) cell_afind_grid_control_pane

0x0cfa,	// (0x0007196f) bg_button_pane_cp69_ParamLimits

0x0cfa,	// (0x0007196f) bg_button_pane_cp69

0x8600,	// (0x00079275) cell_afind_pane_g1_ParamLimits

0x8600,	// (0x00079275) cell_afind_pane_g1

0x860d,	// (0x00079282) cell_afind_pane_t1_ParamLimits

0x860d,	// (0x00079282) cell_afind_pane_t1

0x2117,	// (0x00072d8c) bg_button_pane_cp72

0x0e6c,	// (0x00071ae1) cell_afind_grid_control_pane_g1

0x5fe3,	// (0x00076c58) aid_image_placing_area_ParamLimits

0x5fe3,	// (0x00076c58) aid_image_placing_area

0x1ec7,	// (0x00072b3c) field_vitu_entry_pane_g1_ParamLimits

0x1ec7,	// (0x00072b3c) field_vitu_entry_pane_g1

0x1ec7,	// (0x00072b3c) field_vitu_entry_pane_g2_ParamLimits

0x1ec7,	// (0x00072b3c) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x0007fe5c) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x0007fe5c) field_vitu_entry_pane_g

0x0a7e,	// (0x000716f3) cell_vitu_itu_pane_g1_ParamLimits

0x083f,	// (0x000714b4) cell_vitu_itu_pane_t3_ParamLimits

0x083f,	// (0x000714b4) cell_vitu_itu_pane_t3

0x0c95,	// (0x0007190a) mp4_progress_pane_t1_ParamLimits

0x0cae,	// (0x00071923) mp4_progress_pane_t2_ParamLimits

0xf830,	// (0x000804a5) mp4_progress_pane_t_ParamLimits

0x0cc7,	// (0x0007193c) mup_progress_pane_cp04_ParamLimits

0x84e7,	// (0x0007915c) main_myfav_hc_pane_t5_ParamLimits

0x84e7,	// (0x0007915c) main_myfav_hc_pane_t5

0xc380,	// (0x0007cff5) aid_zoom_text_primary

0x3c1f,	// (0x00074894) popup_adpt_find_window_ParamLimits

0x1e6e,	// (0x00072ae3) main_cam_set_pane

0x7f4e,	// (0x00078bc3) cam4_zoom_pane_ParamLimits

0x7f4e,	// (0x00078bc3) cam4_zoom_pane

0x861f,	// (0x00079294) main_cam_set_pane_g1_ParamLimits

0x861f,	// (0x00079294) main_cam_set_pane_g1

0x862d,	// (0x000792a2) main_cam_set_pane_g2_ParamLimits

0x862d,	// (0x000792a2) main_cam_set_pane_g2

0x0001,

0xf8f1,	// (0x00080566) main_cam_set_pane_g_ParamLimits

0xf8f1,	// (0x00080566) main_cam_set_pane_g

0x864e,	// (0x000792c3) main_cam_set_pane_t1_ParamLimits

0x864e,	// (0x000792c3) main_cam_set_pane_t1

0x8669,	// (0x000792de) main_cset_listscroll_pane_ParamLimits

0x8669,	// (0x000792de) main_cset_listscroll_pane

0x868f,	// (0x00079304) main_cset_slider_pane_ParamLimits

0x868f,	// (0x00079304) main_cset_slider_pane

0x0e7d,	// (0x00071af2) main_cset_list_pane_ParamLimits

0x0e7d,	// (0x00071af2) main_cset_list_pane

0x0e8d,	// (0x00071b02) scroll_pane_cp028

0x86b5,	// (0x0007932a) aid_area_touch_slider

0x86d1,	// (0x00079346) cset_slider_pane

0x86f4,	// (0x00079369) main_cset_slider_pane_g1

0x8709,	// (0x0007937e) main_cset_slider_pane_g2

0x0011,

0xf8f6,	// (0x0008056b) main_cset_slider_pane_g

0x0ec6,	// (0x00071b3b) main_cset_slider_pane_t1

0x87ad,	// (0x00079422) main_cset_slider_pane_t2

0x87c7,	// (0x0007943c) main_cset_slider_pane_t3

0x87e1,	// (0x00079456) main_cset_slider_pane_t4

0x87fb,	// (0x00079470) main_cset_slider_pane_t5

0x8815,	// (0x0007948a) main_cset_slider_pane_t6

0x882a,	// (0x0007949f) main_cset_slider_pane_t7

0x000e,

0xf91b,	// (0x00080590) main_cset_slider_pane_t

0x892e,	// (0x000795a3) cset_list_set_pane_ParamLimits

0x892e,	// (0x000795a3) cset_list_set_pane

0x0f60,	// (0x00071bd5) aid_position_infowindow_above

0x0f68,	// (0x00071bdd) aid_position_infowindow_below

0x8940,	// (0x000795b5) cset_list_set_pane_g1_ParamLimits

0x8940,	// (0x000795b5) cset_list_set_pane_g1

0x34a1,	// (0x00074116) cset_list_set_pane_g3_ParamLimits

0x34a1,	// (0x00074116) cset_list_set_pane_g3

0x0001,

0xf93a,	// (0x000805af) cset_list_set_pane_g_ParamLimits

0xf93a,	// (0x000805af) cset_list_set_pane_g

0x34b0,	// (0x00074125) cset_list_set_pane_t1_ParamLimits

0x34b0,	// (0x00074125) cset_list_set_pane_t1

0x1e6e,	// (0x00072ae3) list_highlight_pane_cp021_ParamLimits

0x1e6e,	// (0x00072ae3) list_highlight_pane_cp021

0xcc95,	// (0x0007d90a) cset_slider_pane_g1

0xcca7,	// (0x0007d91c) cset_slider_pane_g2

0xcc9e,	// (0x0007d913) cset_slider_pane_g3

0x0002,

0xf93f,	// (0x000805b4) cset_slider_pane_g

0xef6b,	// (0x0007fbe0) aid_area_touch_cam4_zoom

0xef73,	// (0x0007fbe8) cam4_zoom_cont_pane

0xef7b,	// (0x0007fbf0) cam4_zoom_pane_g1

0xef83,	// (0x0007fbf8) cam4_zoom_pane_g2

0x894c,	// (0x000795c1) cam4_zoom_pane_g3

0x0002,

0xf946,	// (0x000805bb) cam4_zoom_pane_g

0x0ba4,	// (0x00071819) cam4_zoom_cont_pane_g1

0x0f70,	// (0x00071be5) cam4_zoom_cont_pane_g2

0x0f79,	// (0x00071bee) cam4_zoom_cont_pane_g3

0x0002,

0xf94d,	// (0x000805c2) cam4_zoom_cont_pane_g

0x7d7d,	// (0x000789f2) call4_image_pane_ParamLimits

0x7d7d,	// (0x000789f2) call4_image_pane

0x7de4,	// (0x00078a59) call4_windows_conf_pane_ParamLimits

0x7e27,	// (0x00078a9c) popup_call4_audio_in_window_ParamLimits

0x7e27,	// (0x00078a9c) popup_call4_audio_in_window

0x17c6,	// (0x0007243b) bg_popup_call2_act_pane_cp02

0x0d06,	// (0x0007197b) call4_list_conf_pane

0x210d,	// (0x00072d82) call4_image_pane_g1

0x210d,	// (0x00072d82) call4_image_pane_g2

0x0001,

0xf3be,	// (0x00080033) call4_image_pane_g

0x0f82,	// (0x00071bf7) list_single_graphic_popup_conf4_pane_ParamLimits

0x0f82,	// (0x00071bf7) list_single_graphic_popup_conf4_pane

0x17c6,	// (0x0007243b) list_highlight_pane_cp022

0x0f95,	// (0x00071c0a) list_single_graphic_popup_conf4_pane_g1

0xc894,	// (0x0007d509) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf954,	// (0x000805c9) list_single_graphic_popup_conf4_pane_g

0x0f9d,	// (0x00071c12) list_single_graphic_popup_conf4_pane_t1

0x49b4,	// (0x00075629) popup_vtel_slider_window_ParamLimits

0x49b4,	// (0x00075629) popup_vtel_slider_window

0x0ce8,	// (0x0007195d) dialer2_ne_pane_t2_ParamLimits

0x0ce8,	// (0x0007195d) dialer2_ne_pane_t2

0x0001,

0xf835,	// (0x000804aa) dialer2_ne_pane_t_ParamLimits

0xf835,	// (0x000804aa) dialer2_ne_pane_t

0xe110,	// (0x0007ed85) bg_popup_sub_pane_cp010_ParamLimits

0xe110,	// (0x0007ed85) bg_popup_sub_pane_cp010

0x8954,	// (0x000795c9) popup_vtel_slider_window_g1_ParamLimits

0x8954,	// (0x000795c9) popup_vtel_slider_window_g1

0x8967,	// (0x000795dc) popup_vtel_slider_window_g2_ParamLimits

0x8967,	// (0x000795dc) popup_vtel_slider_window_g2

0x0003,

0xf959,	// (0x000805ce) popup_vtel_slider_window_g_ParamLimits

0xf959,	// (0x000805ce) popup_vtel_slider_window_g

0x89bd,	// (0x00079632) vtel_slider_pane_ParamLimits

0x89bd,	// (0x00079632) vtel_slider_pane

0x89df,	// (0x00079654) vtel_slider_pane_g1_ParamLimits

0x89df,	// (0x00079654) vtel_slider_pane_g1

0x89f3,	// (0x00079668) vtel_slider_pane_g2_ParamLimits

0x89f3,	// (0x00079668) vtel_slider_pane_g2

0x8a0b,	// (0x00079680) vtel_slider_pane_g3_ParamLimits

0x8a0b,	// (0x00079680) vtel_slider_pane_g3

0x89df,	// (0x00079654) vtel_slider_pane_g4_ParamLimits

0x89df,	// (0x00079654) vtel_slider_pane_g4

0x8a21,	// (0x00079696) vtel_slider_pane_g5_ParamLimits

0x8a21,	// (0x00079696) vtel_slider_pane_g5

0x0004,

0xf962,	// (0x000805d7) vtel_slider_pane_g_ParamLimits

0xf962,	// (0x000805d7) vtel_slider_pane_g

0x1e6e,	// (0x00072ae3) main_gallery2_pane

0x814e,	// (0x00078dc3) aid_size_row_itut2_dropdow_list_ParamLimits

0x814e,	// (0x00078dc3) aid_size_row_itut2_dropdow_list

0x81cc,	// (0x00078e41) grid_vitu2_function_top_pane_ParamLimits

0x81cc,	// (0x00078e41) grid_vitu2_function_top_pane

0x8236,	// (0x00078eab) popup_vitu2_dropdown_list_window_ParamLimits

0x8236,	// (0x00078eab) popup_vitu2_dropdown_list_window

0x825d,	// (0x00078ed2) popup_vitu2_match_list_window

0x8a37,	// (0x000796ac) cell_vitu2_function_top_pane_ParamLimits

0x8a37,	// (0x000796ac) cell_vitu2_function_top_pane

0x8a4f,	// (0x000796c4) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8a4f,	// (0x000796c4) cell_vitu2_function_top_pane_cp01

0x8a6b,	// (0x000796e0) cell_vitu2_function_top_wide_pane_ParamLimits

0x8a6b,	// (0x000796e0) cell_vitu2_function_top_wide_pane

0x1e6e,	// (0x00072ae3) bg_button_pane_cp012

0x8a89,	// (0x000796fe) cell_vitu2_function_top_pane_g1

0xef8b,	// (0x0007fc00) bg_button_pane_cp013_ParamLimits

0xef8b,	// (0x0007fc00) bg_button_pane_cp013

0x8a9d,	// (0x00079712) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8a9d,	// (0x00079712) cell_vitu2_function_top_wide_pane_g1

0x1e6e,	// (0x00072ae3) bg_popup_sub_pane_cp20

0x8ab5,	// (0x0007972a) list_vitu2_match_list_pane

0x0d73,	// (0x000719e8) bg_popup_sub_pane_cp20_g1

0x0d7b,	// (0x000719f0) bg_popup_sub_pane_cp20_g2

0x2332,	// (0x00072fa7) bg_popup_sub_pane_cp20_g3

0x0d83,	// (0x000719f8) bg_popup_sub_pane_cp20_g4

0x2312,	// (0x00072f87) bg_popup_sub_pane_cp20_g5

0x0fb3,	// (0x00071c28) bg_popup_sub_pane_cp20_g6

0x0d93,	// (0x00071a08) bg_popup_sub_pane_cp20_g7

0x0d9b,	// (0x00071a10) bg_popup_sub_pane_cp20_g8

0x0da3,	// (0x00071a18) bg_popup_sub_pane_cp20_g9

0x0008,

0xf96d,	// (0x000805e2) bg_popup_sub_pane_cp20_g

0xefa7,	// (0x0007fc1c) list_vitu2_match_list_item_pane_ParamLimits

0xefa7,	// (0x0007fc1c) list_vitu2_match_list_item_pane

0xefb9,	// (0x0007fc2e) list_vitu2_match_list_item_pane_t1

0x17c6,	// (0x0007243b) bg_popup_sub_pane_cp21

0x20eb,	// (0x00072d60) grid_vitu2_dropdown_list_pane

0x8acd,	// (0x00079742) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8acd,	// (0x00079742) cell_vitu2_dropdown_list_char_pane

0x8aed,	// (0x00079762) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8aed,	// (0x00079762) cell_vitu2_dropdown_list_ctrl_pane

0x0fbb,	// (0x00071c30) cell_vitu2_dropdown_list_char_pane_g1

0x0fc4,	// (0x00071c39) cell_vitu2_dropdown_list_char_pane_g2

0x0fcd,	// (0x00071c42) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf980,	// (0x000805f5) cell_vitu2_dropdown_list_char_pane_g

0x8b15,	// (0x0007978a) cell_vitu2_dropdown_list_char_pane_t1

0x8b23,	// (0x00079798) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8b23,	// (0x00079798) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8b30,	// (0x000797a5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8b30,	// (0x000797a5) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8b3d,	// (0x000797b2) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8b3d,	// (0x000797b2) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8b4a,	// (0x000797bf) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8b4a,	// (0x000797bf) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1ec7,	// (0x00072b3c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1ec7,	// (0x00072b3c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf987,	// (0x000805fc) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf987,	// (0x000805fc) cell_vitu2_dropdown_list_ctrl_pane_g

0x8b66,	// (0x000797db) aid_size_cell_gallery2_ParamLimits

0x8b66,	// (0x000797db) aid_size_cell_gallery2

0x8b84,	// (0x000797f9) grid_gallery2_pane_ParamLimits

0x8b84,	// (0x000797f9) grid_gallery2_pane

0x8b9e,	// (0x00079813) scroll_pane_cp029_ParamLimits

0x8b9e,	// (0x00079813) scroll_pane_cp029

0x8baf,	// (0x00079824) cell_gallery2_pane_ParamLimits

0x8baf,	// (0x00079824) cell_gallery2_pane

0x0fd6,	// (0x00071c4b) cell_gallery2_pane_g2

0x8c0e,	// (0x00079883) cell_gallery2_pane_g3

0x0fde,	// (0x00071c53) cell_gallery2_pane_g4

0x0fe6,	// (0x00071c5b) cell_gallery2_pane_g5

0x20eb,	// (0x00072d60) grid_highlight_pane_cp10

0x825d,	// (0x00078ed2) popup_vitu2_match_list_window_ParamLimits

0x8272,	// (0x00078ee7) popup_vitu2_query_window_ParamLimits

0x8272,	// (0x00078ee7) popup_vitu2_query_window

0x17c6,	// (0x0007243b) bg_vitu2_candi_button_pane

0x0fbb,	// (0x00071c30) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x0fc4,	// (0x00071c39) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x0fcd,	// (0x00071c42) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x34c5,	// (0x0007413a) bg_button_pane_cp015

0x8c16,	// (0x0007988b) bg_button_pane_cp016

0x8c22,	// (0x00079897) bg_button_pane_cp017

0xcc25,	// (0x0007d89a) bg_popup_sub_pane_cp22

0x0fee,	// (0x00071c63) popup_vitu2_query_window_g1

0x8c3d,	// (0x000798b2) popup_vitu2_query_window_g2

0x0002,

0xf992,	// (0x00080607) popup_vitu2_query_window_g

0x34f9,	// (0x0007416e) popup_vitu2_query_window_t1_ParamLimits

0x34f9,	// (0x0007416e) popup_vitu2_query_window_t1

0x352c,	// (0x000741a1) popup_vitu2_query_window_t2_ParamLimits

0x352c,	// (0x000741a1) popup_vitu2_query_window_t2

0x353e,	// (0x000741b3) popup_vitu2_query_window_t3_ParamLimits

0x353e,	// (0x000741b3) popup_vitu2_query_window_t3

0x8c5f,	// (0x000798d4) popup_vitu2_query_window_t4_ParamLimits

0x8c5f,	// (0x000798d4) popup_vitu2_query_window_t4

0x8c73,	// (0x000798e8) popup_vitu2_query_window_t5_ParamLimits

0x8c73,	// (0x000798e8) popup_vitu2_query_window_t5

0x0006,

0xf999,	// (0x0008060e) popup_vitu2_query_window_t_ParamLimits

0xf999,	// (0x0008060e) popup_vitu2_query_window_t

0x0e75,	// (0x00071aea) main_cset_text_pane

0x86b5,	// (0x0007932a) aid_area_touch_slider_ParamLimits

0x86d1,	// (0x00079346) cset_slider_pane_ParamLimits

0x86f4,	// (0x00079369) main_cset_slider_pane_g1_ParamLimits

0x8709,	// (0x0007937e) main_cset_slider_pane_g2_ParamLimits

0x0e96,	// (0x00071b0b) main_cset_slider_pane_g3_ParamLimits

0x0e96,	// (0x00071b0b) main_cset_slider_pane_g3

0x871e,	// (0x00079393) main_cset_slider_pane_g4_ParamLimits

0x871e,	// (0x00079393) main_cset_slider_pane_g4

0x872d,	// (0x000793a2) main_cset_slider_pane_g5_ParamLimits

0x872d,	// (0x000793a2) main_cset_slider_pane_g5

0x8739,	// (0x000793ae) main_cset_slider_pane_g6_ParamLimits

0x8739,	// (0x000793ae) main_cset_slider_pane_g6

0xf8f6,	// (0x0008056b) main_cset_slider_pane_g_ParamLimits

0x0ec6,	// (0x00071b3b) main_cset_slider_pane_t1_ParamLimits

0x87ad,	// (0x00079422) main_cset_slider_pane_t2_ParamLimits

0x87c7,	// (0x0007943c) main_cset_slider_pane_t3_ParamLimits

0x87e1,	// (0x00079456) main_cset_slider_pane_t4_ParamLimits

0x87fb,	// (0x00079470) main_cset_slider_pane_t5_ParamLimits

0x8815,	// (0x0007948a) main_cset_slider_pane_t6_ParamLimits

0x882a,	// (0x0007949f) main_cset_slider_pane_t7_ParamLimits

0x8854,	// (0x000794c9) main_cset_slider_pane_t8_ParamLimits

0x8854,	// (0x000794c9) main_cset_slider_pane_t8

0x887c,	// (0x000794f1) main_cset_slider_pane_t9_ParamLimits

0x887c,	// (0x000794f1) main_cset_slider_pane_t9

0x88a4,	// (0x00079519) main_cset_slider_pane_t10_ParamLimits

0x88a4,	// (0x00079519) main_cset_slider_pane_t10

0x88cc,	// (0x00079541) main_cset_slider_pane_t11_ParamLimits

0x88cc,	// (0x00079541) main_cset_slider_pane_t11

0x88f4,	// (0x00079569) main_cset_slider_pane_t12_ParamLimits

0x88f4,	// (0x00079569) main_cset_slider_pane_t12

0x8911,	// (0x00079586) main_cset_slider_pane_t13_ParamLimits

0x8911,	// (0x00079586) main_cset_slider_pane_t13

0xf91b,	// (0x00080590) main_cset_slider_pane_t_ParamLimits

0x17c6,	// (0x0007243b) bg_popup_sub_pane_cp011

0x0ffa,	// (0x00071c6f) main_cset_text_pane_g1

0x1002,	// (0x00071c77) main_cset_text_pane_t1

0x1010,	// (0x00071c85) main_cset_text_pane_t2

0x101e,	// (0x00071c93) main_cset_text_pane_t3

0x102c,	// (0x00071ca1) main_cset_text_pane_t4

0x103a,	// (0x00071caf) main_cset_text_pane_t5

0x1048,	// (0x00071cbd) main_cset_text_pane_t6

0x1056,	// (0x00071ccb) main_cset_text_pane_t7

0x0006,

0xf9a8,	// (0x0008061d) main_cset_text_pane_t

0x17c6,	// (0x0007243b) main_cam4_burst_pane

0x17c6,	// (0x0007243b) main_cam5_pane

0x85ee,	// (0x00079263) bg_button_pane_cp019

0x85f7,	// (0x0007926c) bg_button_pane_cp020

0x0ea2,	// (0x00071b17) main_cset_slider_pane_g7_ParamLimits

0x0ea2,	// (0x00071b17) main_cset_slider_pane_g7

0x0eae,	// (0x00071b23) main_cset_slider_pane_g8_ParamLimits

0x0eae,	// (0x00071b23) main_cset_slider_pane_g8

0x874d,	// (0x000793c2) main_cset_slider_pane_g9_ParamLimits

0x874d,	// (0x000793c2) main_cset_slider_pane_g9

0x8759,	// (0x000793ce) main_cset_slider_pane_g10_ParamLimits

0x8759,	// (0x000793ce) main_cset_slider_pane_g10

0x8765,	// (0x000793da) main_cset_slider_pane_g11_ParamLimits

0x8765,	// (0x000793da) main_cset_slider_pane_g11

0x8771,	// (0x000793e6) main_cset_slider_pane_g12_ParamLimits

0x8771,	// (0x000793e6) main_cset_slider_pane_g12

0x877d,	// (0x000793f2) main_cset_slider_pane_g13_ParamLimits

0x877d,	// (0x000793f2) main_cset_slider_pane_g13

0x8789,	// (0x000793fe) main_cset_slider_pane_g14_ParamLimits

0x8789,	// (0x000793fe) main_cset_slider_pane_g14

0x8795,	// (0x0007940a) main_cset_slider_pane_g15_ParamLimits

0x8795,	// (0x0007940a) main_cset_slider_pane_g15

0x0eee,	// (0x00071b63) main_cset_slider_pane_t14_ParamLimits

0x0eee,	// (0x00071b63) main_cset_slider_pane_t14

0x0f27,	// (0x00071b9c) main_cset_slider_pane_t15_ParamLimits

0x0f27,	// (0x00071b9c) main_cset_slider_pane_t15

0x8c87,	// (0x000798fc) aid_cam4_burst_size_cell_ParamLimits

0x8c87,	// (0x000798fc) aid_cam4_burst_size_cell

0x8ca7,	// (0x0007991c) grid_cam4_burst_pane_ParamLimits

0x8ca7,	// (0x0007991c) grid_cam4_burst_pane

0x8cdf,	// (0x00079954) linegrid_cam4_burst_pane_ParamLimits

0x8cdf,	// (0x00079954) linegrid_cam4_burst_pane

0x175f,	// (0x000723d4) scroll_pane_cp30_ParamLimits

0x175f,	// (0x000723d4) scroll_pane_cp30

0x8d03,	// (0x00079978) cell_cam4_burst_pane_ParamLimits

0x8d03,	// (0x00079978) cell_cam4_burst_pane

0x1064,	// (0x00071cd9) linegrid_cam4_burst_pane_g1_ParamLimits

0x1064,	// (0x00071cd9) linegrid_cam4_burst_pane_g1

0x8d50,	// (0x000799c5) linegrid_cam4_burst_pane_g2_ParamLimits

0x8d50,	// (0x000799c5) linegrid_cam4_burst_pane_g2

0x1071,	// (0x00071ce6) linegrid_cam4_burst_pane_g3_ParamLimits

0x1071,	// (0x00071ce6) linegrid_cam4_burst_pane_g3

0x0002,

0xf9b7,	// (0x0008062c) linegrid_cam4_burst_pane_g_ParamLimits

0xf9b7,	// (0x0008062c) linegrid_cam4_burst_pane_g

0x8d61,	// (0x000799d6) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8d61,	// (0x000799d6) linegrid_cam4_burst_pane_g3_copy1

0x107e,	// (0x00071cf3) linegrid_cam4_burst_pane_g4_ParamLimits

0x107e,	// (0x00071cf3) linegrid_cam4_burst_pane_g4

0x8d7b,	// (0x000799f0) linegrid_cam4_burst_pane_g5_ParamLimits

0x8d7b,	// (0x000799f0) linegrid_cam4_burst_pane_g5

0x8d8c,	// (0x00079a01) linegrid_cam4_burst_pane_g6_ParamLimits

0x8d8c,	// (0x00079a01) linegrid_cam4_burst_pane_g6

0x108b,	// (0x00071d00) linegrid_cam4_burst_pane_g7_ParamLimits

0x108b,	// (0x00071d00) linegrid_cam4_burst_pane_g7

0x8da3,	// (0x00079a18) cell_cam4_burst_pane_g1

0x10a4,	// (0x00071d19) main_cam5_pane_t1_ParamLimits

0x10a4,	// (0x00071d19) main_cam5_pane_t1

0x10b6,	// (0x00071d2b) main_cam5_pane_t2_ParamLimits

0x10b6,	// (0x00071d2b) main_cam5_pane_t2

0x10c8,	// (0x00071d3d) main_cam5_pane_t3_ParamLimits

0x10c8,	// (0x00071d3d) main_cam5_pane_t3

0x10da,	// (0x00071d4f) main_cam5_pane_t4_ParamLimits

0x10da,	// (0x00071d4f) main_cam5_pane_t4

0x10f2,	// (0x00071d67) main_cam5_pane_t5_ParamLimits

0x10f2,	// (0x00071d67) main_cam5_pane_t5

0x1106,	// (0x00071d7b) main_cam5_pane_t6_ParamLimits

0x1106,	// (0x00071d7b) main_cam5_pane_t6

0x111a,	// (0x00071d8f) main_cam5_pane_t7_ParamLimits

0x111a,	// (0x00071d8f) main_cam5_pane_t7

0x112c,	// (0x00071da1) main_cam5_pane_t8_ParamLimits

0x112c,	// (0x00071da1) main_cam5_pane_t8

0x1148,	// (0x00071dbd) main_cam5_pane_t9_ParamLimits

0x1148,	// (0x00071dbd) main_cam5_pane_t9

0x115a,	// (0x00071dcf) main_cam5_pane_t10_ParamLimits

0x115a,	// (0x00071dcf) main_cam5_pane_t10

0x116c,	// (0x00071de1) main_cam5_pane_t11_ParamLimits

0x116c,	// (0x00071de1) main_cam5_pane_t11

0x117e,	// (0x00071df3) main_cam5_pane_t12_ParamLimits

0x117e,	// (0x00071df3) main_cam5_pane_t12

0x1193,	// (0x00071e08) main_cam5_pane_t13_ParamLimits

0x1193,	// (0x00071e08) main_cam5_pane_t13

0x000c,

0xf9c3,	// (0x00080638) main_cam5_pane_t_ParamLimits

0xf9c3,	// (0x00080638) main_cam5_pane_t

0x3ca1,	// (0x00074916) popup_scut_keymap_window_ParamLimits

0x3ca1,	// (0x00074916) popup_scut_keymap_window

0x8db6,	// (0x00079a2b) aid_size_cell_brow_shortcut

0x20eb,	// (0x00072d60) bg_popup_window_pane_cp010

0x8dc2,	// (0x00079a37) grid_scut_pane

0x8dce,	// (0x00079a43) cell_scut_pane_ParamLimits

0x8dce,	// (0x00079a43) cell_scut_pane

0x8de5,	// (0x00079a5a) cell_scut_pane_g1

0x11b0,	// (0x00071e25) cell_scut_pane_t1

0x11bf,	// (0x00071e34) cell_scut_pane_t2

0x8dee,	// (0x00079a63) cell_scut_pane_t3

0x0002,

0xf9de,	// (0x00080653) cell_scut_pane_t

0x6ea0,	// (0x00077b15) main_mup3_pane_g8_ParamLimits

0x6ea0,	// (0x00077b15) main_mup3_pane_g8

0x8166,	// (0x00078ddb) area_vitu2_query_pane_ParamLimits

0x8166,	// (0x00078ddb) area_vitu2_query_pane

0x34d6,	// (0x0007414b) input_focus_pane_cp08

0x11ce,	// (0x00071e43) area_vitu2_query_pane_g1

0x35bc,	// (0x00074231) area_vitu2_query_pane_g2

0x0001,

0xf9e5,	// (0x0008065a) area_vitu2_query_pane_g

0x8dfc,	// (0x00079a71) area_vitu2_query_pane_t1_ParamLimits

0x8dfc,	// (0x00079a71) area_vitu2_query_pane_t1

0x8e10,	// (0x00079a85) area_vitu2_query_pane_t2_ParamLimits

0x8e10,	// (0x00079a85) area_vitu2_query_pane_t2

0x35cb,	// (0x00074240) area_vitu2_query_pane_t3_ParamLimits

0x35cb,	// (0x00074240) area_vitu2_query_pane_t3

0xe5b3,	// (0x0007f228) area_vitu2_query_pane_t4_ParamLimits

0xe5b3,	// (0x0007f228) area_vitu2_query_pane_t4

0xe5db,	// (0x0007f250) area_vitu2_query_pane_t5_ParamLimits

0xe5db,	// (0x0007f250) area_vitu2_query_pane_t5

0xe603,	// (0x0007f278) area_vitu2_query_pane_t6_ParamLimits

0xe603,	// (0x0007f278) area_vitu2_query_pane_t6

0x0006,

0xf9ea,	// (0x0008065f) area_vitu2_query_pane_t_ParamLimits

0xf9ea,	// (0x0008065f) area_vitu2_query_pane_t

0x8e24,	// (0x00079a99) bg_button_pane_cp018

0x8e30,	// (0x00079aa5) bg_button_pane_cp021

0x35f3,	// (0x00074268) bg_button_pane_cp022

0x3612,	// (0x00074287) input_focus_pane_cp09

0xc9a3,	// (0x0007d618) aid_size_touch_mv_arrow_left

0xc9ce,	// (0x0007d643) aid_size_touch_mv_arrow_right

0x1649,	// (0x000722be) main_cset_slider_pane_g16_ParamLimits

0x1649,	// (0x000722be) main_cset_slider_pane_g16

0x1655,	// (0x000722ca) main_cset_slider_pane_g17_ParamLimits

0x1655,	// (0x000722ca) main_cset_slider_pane_g17

0x8da3,	// (0x00079a18) cell_cam4_burst_pane_g1_ParamLimits

0x17c6,	// (0x0007243b) compa_mode_pane

0x8977,	// (0x000795ec) popup_vtel_slider_window_g3_ParamLimits

0x8977,	// (0x000795ec) popup_vtel_slider_window_g3

0x898e,	// (0x00079603) popup_vtel_slider_window_g4_ParamLimits

0x898e,	// (0x00079603) popup_vtel_slider_window_g4

0x89a5,	// (0x0007961a) popup_vtel_slider_window_t1_ParamLimits

0x89a5,	// (0x0007961a) popup_vtel_slider_window_t1

0x17c6,	// (0x0007243b) main_cl_pane

0xdfb5,	// (0x0007ec2a) popup_imed_adjust2_window_ParamLimits

0xcc25,	// (0x0007d89a) bg_tb_trans_pane_cp05_ParamLimits

0x09b3,	// (0x00071628) popup_imed_adjust2_window_g1_ParamLimits

0x09c2,	// (0x00071637) popup_imed_adjust2_window_g2_ParamLimits

0x09c2,	// (0x00071637) popup_imed_adjust2_window_g2

0x09ce,	// (0x00071643) popup_imed_adjust2_window_g3_ParamLimits

0x09ce,	// (0x00071643) popup_imed_adjust2_window_g3

0x0002,

0xf760,	// (0x000803d5) popup_imed_adjust2_window_g_ParamLimits

0xf760,	// (0x000803d5) popup_imed_adjust2_window_g

0x09da,	// (0x0007164f) popup_imed_adjust2_window_t1_ParamLimits

0x09f2,	// (0x00071667) slider_imed_adjust_pane_ParamLimits

0x0a06,	// (0x0007167b) slider_imed_adjust_pane_g1_ParamLimits

0x0a16,	// (0x0007168b) slider_imed_adjust_pane_g2_ParamLimits

0x0a26,	// (0x0007169b) slider_imed_adjust_pane_g3_ParamLimits

0x0a37,	// (0x000716ac) slider_imed_adjust_pane_g4_ParamLimits

0xf767,	// (0x000803dc) slider_imed_adjust_pane_g_ParamLimits

0x7eef,	// (0x00078b64) aid_touch_area_cam4_ParamLimits

0x7eef,	// (0x00078b64) aid_touch_area_cam4

0xe4b3,	// (0x0007f128) battery_pane_cp01

0x7fbe,	// (0x00078c33) main_camera4_pane_g6_ParamLimits

0x7fbe,	// (0x00078c33) main_camera4_pane_g6

0x7fe8,	// (0x00078c5d) main_camera4_pane_t2_ParamLimits

0x7fe8,	// (0x00078c5d) main_camera4_pane_t2

0x0001,

0xf869,	// (0x000804de) main_camera4_pane_t_ParamLimits

0xf869,	// (0x000804de) main_camera4_pane_t

0x801d,	// (0x00078c92) aid_touch_area_vid4_ParamLimits

0x801d,	// (0x00078c92) aid_touch_area_vid4

0x8071,	// (0x00078ce6) main_video4_pane_g5_ParamLimits

0x8071,	// (0x00078ce6) main_video4_pane_g5

0x8096,	// (0x00078d0b) vid4_progress_pane_ParamLimits

0x8096,	// (0x00078d0b) vid4_progress_pane

0x0eba,	// (0x00071b2f) main_cset_slider_pane_g18_ParamLimits

0x0eba,	// (0x00071b2f) main_cset_slider_pane_g18

0x1098,	// (0x00071d0d) cell_cam4_burst_pane_g2_ParamLimits

0x1098,	// (0x00071d0d) cell_cam4_burst_pane_g2

0x0001,

0xf9be,	// (0x00080633) cell_cam4_burst_pane_g_ParamLimits

0xf9be,	// (0x00080633) cell_cam4_burst_pane_g

0x1f39,	// (0x00072bae) bg_cl_pane_ParamLimits

0x1f39,	// (0x00072bae) bg_cl_pane

0x8e3c,	// (0x00079ab1) cl_header_pane_ParamLimits

0x8e3c,	// (0x00079ab1) cl_header_pane

0x8e50,	// (0x00079ac5) cl_listscroll_pane_ParamLimits

0x8e50,	// (0x00079ac5) cl_listscroll_pane

0x11da,	// (0x00071e4f) bg_cl_pane_g1

0x11e2,	// (0x00071e57) bg_cl_pane_g2

0x11ea,	// (0x00071e5f) bg_cl_pane_g3

0x11f2,	// (0x00071e67) bg_cl_pane_g4

0x11fa,	// (0x00071e6f) bg_cl_pane_g5

0x1202,	// (0x00071e77) bg_cl_pane_g6

0x120a,	// (0x00071e7f) bg_cl_pane_g7

0x1212,	// (0x00071e87) bg_cl_pane_g8

0x121a,	// (0x00071e8f) bg_cl_pane_g9

0x0008,

0xf9f9,	// (0x0008066e) bg_cl_pane_g

0x8e60,	// (0x00079ad5) aid_height_cl_leading_ParamLimits

0x8e60,	// (0x00079ad5) aid_height_cl_leading

0x8e6c,	// (0x00079ae1) aid_height_cl_text_ParamLimits

0x8e6c,	// (0x00079ae1) aid_height_cl_text

0x1e6e,	// (0x00072ae3) bg_cl_header_pane_ParamLimits

0x1e6e,	// (0x00072ae3) bg_cl_header_pane

0x8e8b,	// (0x00079b00) cl_header_pane_g1_ParamLimits

0x8e8b,	// (0x00079b00) cl_header_pane_g1

0x8ea1,	// (0x00079b16) cl_header_pane_t1_ParamLimits

0x8ea1,	// (0x00079b16) cl_header_pane_t1

0x1222,	// (0x00071e97) cl_list_pane

0x0e8d,	// (0x00071b02) hc_scroll_pane_cp01

0x2312,	// (0x00072f87) bg_cl_header_pane_g1

0x0d73,	// (0x000719e8) bg_cl_header_pane_g2

0x2332,	// (0x00072fa7) bg_cl_header_pane_g3

0x0d83,	// (0x000719f8) bg_cl_header_pane_g4

0x0d7b,	// (0x000719f0) bg_cl_header_pane_g5

0x0fb3,	// (0x00071c28) bg_cl_header_pane_g6

0x0d9b,	// (0x00071a10) bg_cl_header_pane_g7

0x0da3,	// (0x00071a18) bg_cl_header_pane_g8

0x0d93,	// (0x00071a08) bg_cl_header_pane_g9

0x0008,

0xfa0c,	// (0x00080681) bg_cl_header_pane_g

0x8eba,	// (0x00079b2f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8eba,	// (0x00079b2f) hc_cl_list_double_graphic_heading_pane

0x8ecb,	// (0x00079b40) hc_cl_list_single_graphic_pane_ParamLimits

0x8ecb,	// (0x00079b40) hc_cl_list_single_graphic_pane

0x8ee4,	// (0x00079b59) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8ee4,	// (0x00079b59) hc_cl_list_single_graphic_pane_g1

0x8ef0,	// (0x00079b65) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8ef0,	// (0x00079b65) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa1f,	// (0x00080694) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa1f,	// (0x00080694) hc_cl_list_single_graphic_pane_g

0x8f04,	// (0x00079b79) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8f04,	// (0x00079b79) hc_cl_list_single_graphic_pane_t1

0x8ee4,	// (0x00079b59) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8ee4,	// (0x00079b59) hc_cl_list_double_graphic_heading_pane_g1

0x8f19,	// (0x00079b8e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8f19,	// (0x00079b8e) hc_cl_list_double_graphic_heading_pane_g2

0x8f2d,	// (0x00079ba2) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8f2d,	// (0x00079ba2) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa24,	// (0x00080699) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa24,	// (0x00080699) hc_cl_list_double_graphic_heading_pane_g

0x8f41,	// (0x00079bb6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8f41,	// (0x00079bb6) hc_cl_list_double_graphic_heading_pane_t1

0x8f56,	// (0x00079bcb) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8f56,	// (0x00079bcb) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa2b,	// (0x000806a0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa2b,	// (0x000806a0) hc_cl_list_double_graphic_heading_pane_t

0xefcf,	// (0x0007fc44) vid4_progress_pane_g1

0xefdf,	// (0x0007fc54) vid4_progress_pane_g2

0x8f6b,	// (0x00079be0) vid4_progress_pane_g3

0xefef,	// (0x0007fc64) vid4_progress_pane_g4

0x0004,

0xfa30,	// (0x000806a5) vid4_progress_pane_g

0x8f7d,	// (0x00079bf2) vid4_progress_pane_t1

0xf007,	// (0x0007fc7c) vid4_progress_pane_t2

0x0002,

0xfa3b,	// (0x000806b0) vid4_progress_pane_t

0x8f93,	// (0x00079c08) wait_bar_pane_cp07

0x02a9,	// (0x00070f1e) blid_firmament_pane_ParamLimits

0x02ec,	// (0x00070f61) popup_blid_sat_info2_window_g1

0x0310,	// (0x00070f85) popup_blid_sat_info2_window_t3

0x031e,	// (0x00070f93) popup_blid_sat_info2_window_t4

0x032c,	// (0x00070fa1) popup_blid_sat_info2_window_t5

0x033a,	// (0x00070faf) popup_blid_sat_info2_window_t6

0x034a,	// (0x00070fbf) popup_blid_sat_info2_window_t7

0x0358,	// (0x00070fcd) popup_blid_sat_info2_window_t8

0x0366,	// (0x00070fdb) popup_blid_sat_info2_window_t9

0x0374,	// (0x00070fe9) popup_blid_sat_info2_window_t10

0x0435,	// (0x000710aa) aid_firma_cardinal_ParamLimits

0x0449,	// (0x000710be) blid_firmament_pane_t1_ParamLimits

0x0460,	// (0x000710d5) blid_firmament_pane_t2_ParamLimits

0x0477,	// (0x000710ec) blid_firmament_pane_t3_ParamLimits

0x048e,	// (0x00071103) blid_firmament_pane_t4_ParamLimits

0xf659,	// (0x000802ce) blid_firmament_pane_t_ParamLimits

0x04a5,	// (0x0007111a) blid_sat_info_pane_ParamLimits

0x1e6e,	// (0x00072ae3) main_cam_set_pane_ParamLimits

0x767d,	// (0x000782f2) aid_size_cell_colour_35_ParamLimits

0x769d,	// (0x00078312) aid_size_cell_colour_112_ParamLimits

0x76bd,	// (0x00078332) aid_size_cell_effect_ParamLimits

0xcc25,	// (0x0007d89a) bg_tb_trans_pane_cp02_ParamLimits

0xc55b,	// (0x0007d1d0) heading_imed_pane_ParamLimits

0x76dd,	// (0x00078352) listscroll_imed_pane_ParamLimits

0xd66a,	// (0x0007e2df) popup_call2_audio_first_window_g5_ParamLimits

0xd66a,	// (0x0007e2df) popup_call2_audio_first_window_g5

0x7b09,	// (0x0007877e) aid_size_touch_image3_arrow_left_ParamLimits

0x7b09,	// (0x0007877e) aid_size_touch_image3_arrow_left

0x7b35,	// (0x000787aa) aid_size_touch_image3_arrow_right_ParamLimits

0x7b35,	// (0x000787aa) aid_size_touch_image3_arrow_right

0xf01c,	// (0x0007fc91) vid4_progress_pane_t3

0x7880,	// (0x000784f5) main_hwr_training_symbol_option_pane_ParamLimits

0x7880,	// (0x000784f5) main_hwr_training_symbol_option_pane

0x0bcf,	// (0x00071844) popup_hwr_training_preview_window_ParamLimits

0x0bcf,	// (0x00071844) popup_hwr_training_preview_window

0x78a0,	// (0x00078515) hwr_training_navi_pane_g5_ParamLimits

0x78a0,	// (0x00078515) hwr_training_navi_pane_g5

0x0d61,	// (0x000719d6) popup_char_count_window

0x1e6e,	// (0x00072ae3) bg_popup_sub_pane_cp20_ParamLimits

0x8ab5,	// (0x0007972a) list_vitu2_match_list_pane_ParamLimits

0x8ac1,	// (0x00079736) vitu2_page_scroll_pane_ParamLimits

0x8ac1,	// (0x00079736) vitu2_page_scroll_pane

0x1234,	// (0x00071ea9) list_single_hwr_training_symbol_option_pane_ParamLimits

0x1234,	// (0x00071ea9) list_single_hwr_training_symbol_option_pane

0x1247,	// (0x00071ebc) list_single_hwr_training_symbol_option_pane_g1

0x124f,	// (0x00071ec4) list_single_hwr_training_symbol_option_pane_t1

0x125d,	// (0x00071ed2) bg_button_pane_cp023

0x1266,	// (0x00071edb) bg_button_pane_cp024

0x1299,	// (0x00071f0e) vitu2_page_scroll_pane_g1

0x12a1,	// (0x00071f16) vitu2_page_scroll_pane_g2

0x0001,

0xfa42,	// (0x000806b7) vitu2_page_scroll_pane_g

0x12a9,	// (0x00071f1e) vitu2_page_scroll_pane_t1

0x04d4,	// (0x00071149) popup_char_count_window_g1

0x12b8,	// (0x00071f2d) popup_char_count_window_g2

0x12c1,	// (0x00071f36) popup_char_count_window_g3

0x0002,

0xfa47,	// (0x000806bc) popup_char_count_window_g

0x12ca,	// (0x00071f3f) popup_char_count_window_t1

0x17c6,	// (0x0007243b) main_vded2_pane

0x099f,	// (0x00071614) aid_size_cell_imed_line

0x09a9,	// (0x0007161e) grid_imed_line_width_pane

0xe563,	// (0x0007f1d8) vid4_indicators_pane_g4

0x12d8,	// (0x00071f4d) cell_imed_line_width_pane_ParamLimits

0x12d8,	// (0x00071f4d) cell_imed_line_width_pane

0x12ec,	// (0x00071f61) cell_imed_line_width_pane_g1

0x12f5,	// (0x00071f6a) cell_imed_line_width_pane_g2

0x0001,

0xfa4e,	// (0x000806c3) cell_imed_line_width_pane_g

0x8fa4,	// (0x00079c19) main_vded2_pane_g1_ParamLimits

0x8fa4,	// (0x00079c19) main_vded2_pane_g1

0x8fba,	// (0x00079c2f) main_vded2_pane_g2_ParamLimits

0x8fba,	// (0x00079c2f) main_vded2_pane_g2

0x0001,

0xfa53,	// (0x000806c8) main_vded2_pane_g_ParamLimits

0xfa53,	// (0x000806c8) main_vded2_pane_g

0x8fcc,	// (0x00079c41) vded2_slider_pane_ParamLimits

0x8fcc,	// (0x00079c41) vded2_slider_pane

0x8fdc,	// (0x00079c51) aid_size_touch_vded2_end

0x8fe6,	// (0x00079c5b) aid_size_touch_vded2_playhead

0x12fd,	// (0x00071f72) aid_size_touch_vded2_start

0x1305,	// (0x00071f7a) vded2_slider_bg_pane

0x130e,	// (0x00071f83) vded2_slider_pane_g1

0x1317,	// (0x00071f8c) vded2_slider_pane_g2

0x8ff0,	// (0x00079c65) vded2_slider_pane_g3

0x0002,

0xfa58,	// (0x000806cd) vded2_slider_pane_g

0x131f,	// (0x00071f94) vded2_slider_bg_pane_g1

0x1328,	// (0x00071f9d) vded2_slider_bg_pane_g2

0x1331,	// (0x00071fa6) vded2_slider_bg_pane_g3

0x0002,

0xfa5f,	// (0x000806d4) vded2_slider_bg_pane_g

0x5c51,	// (0x000768c6) aid_postcard_touch_down_pane_ParamLimits

0x5c51,	// (0x000768c6) aid_postcard_touch_down_pane

0x5c67,	// (0x000768dc) aid_postcard_touch_up_pane_ParamLimits

0x5c67,	// (0x000768dc) aid_postcard_touch_up_pane

0x17c6,	// (0x0007243b) main_blid2_pane

0xdf9b,	// (0x0007ec10) popup_blid2_search_window

0x17c6,	// (0x0007243b) blid2_gps_pane

0x17c6,	// (0x0007243b) blid2_navig_pane

0x17c6,	// (0x0007243b) blid2_search_pane

0x17c6,	// (0x0007243b) blid2_tripm_pane

0x8ffb,	// (0x00079c70) blid2_search_pane_g1_ParamLimits

0x8ffb,	// (0x00079c70) blid2_search_pane_g1

0x9013,	// (0x00079c88) blid2_search_pane_t1_ParamLimits

0x9013,	// (0x00079c88) blid2_search_pane_t1

0x9025,	// (0x00079c9a) aid_size_cell_blid2_gps_ParamLimits

0x9025,	// (0x00079c9a) aid_size_cell_blid2_gps

0x903d,	// (0x00079cb2) blid2_gps_pane_g1_ParamLimits

0x903d,	// (0x00079cb2) blid2_gps_pane_g1

0x9051,	// (0x00079cc6) grid_blid2_satellite_pane_ParamLimits

0x9051,	// (0x00079cc6) grid_blid2_satellite_pane

0x906b,	// (0x00079ce0) blid2_navig_pane_g1_ParamLimits

0x906b,	// (0x00079ce0) blid2_navig_pane_g1

0x9077,	// (0x00079cec) blid2_navig_pane_t1_ParamLimits

0x9077,	// (0x00079cec) blid2_navig_pane_t1

0x9092,	// (0x00079d07) blid2_navig_pane_t2_ParamLimits

0x9092,	// (0x00079d07) blid2_navig_pane_t2

0x0001,

0xfa66,	// (0x000806db) blid2_navig_pane_t_ParamLimits

0xfa66,	// (0x000806db) blid2_navig_pane_t

0x90ad,	// (0x00079d22) blid2_navig_ring_pane_ParamLimits

0x90ad,	// (0x00079d22) blid2_navig_ring_pane

0x90c6,	// (0x00079d3b) blid2_speed_pane_ParamLimits

0x90c6,	// (0x00079d3b) blid2_speed_pane

0x90d2,	// (0x00079d47) blid2_tripm_pane_g1_ParamLimits

0x90d2,	// (0x00079d47) blid2_tripm_pane_g1

0x90ed,	// (0x00079d62) blid2_tripm_pane_g2_ParamLimits

0x90ed,	// (0x00079d62) blid2_tripm_pane_g2

0x9101,	// (0x00079d76) blid2_tripm_pane_g3_ParamLimits

0x9101,	// (0x00079d76) blid2_tripm_pane_g3

0x9115,	// (0x00079d8a) blid2_tripm_pane_g4_ParamLimits

0x9115,	// (0x00079d8a) blid2_tripm_pane_g4

0x9129,	// (0x00079d9e) blid2_tripm_pane_g5_ParamLimits

0x9129,	// (0x00079d9e) blid2_tripm_pane_g5

0x0005,

0xfa6b,	// (0x000806e0) blid2_tripm_pane_g_ParamLimits

0xfa6b,	// (0x000806e0) blid2_tripm_pane_g

0x914f,	// (0x00079dc4) blid2_tripm_pane_t1_ParamLimits

0x914f,	// (0x00079dc4) blid2_tripm_pane_t1

0x916a,	// (0x00079ddf) blid2_tripm_pane_t2_ParamLimits

0x916a,	// (0x00079ddf) blid2_tripm_pane_t2

0x9183,	// (0x00079df8) blid2_tripm_pane_t3_ParamLimits

0x9183,	// (0x00079df8) blid2_tripm_pane_t3

0x0003,

0xfa78,	// (0x000806ed) blid2_tripm_pane_t_ParamLimits

0xfa78,	// (0x000806ed) blid2_tripm_pane_t

0x91ca,	// (0x00079e3f) cell_blid2_satellite_pane_ParamLimits

0x91ca,	// (0x00079e3f) cell_blid2_satellite_pane

0x91e8,	// (0x00079e5d) cell_blid2_satellite_pane_g1

0x133a,	// (0x00071faf) cell_blid2_satellite_pane_t1

0x210d,	// (0x00072d82) blid2_speed_pane_g1

0x1348,	// (0x00071fbd) blid2_speed_pane_t1

0x1356,	// (0x00071fcb) blid2_speed_pane_t2

0x0001,

0xfa81,	// (0x000806f6) blid2_speed_pane_t

0x210d,	// (0x00072d82) blid2_navig_ring_pane_g1

0x91f1,	// (0x00079e66) blid2_navig_ring_pane_g2

0x91f9,	// (0x00079e6e) blid2_navig_ring_pane_g3

0x9201,	// (0x00079e76) blid2_navig_ring_pane_g4

0x9209,	// (0x00079e7e) blid2_navig_ring_pane_g5

0x0004,

0xfa86,	// (0x000806fb) blid2_navig_ring_pane_g

0x17c6,	// (0x0007243b) bg_popup_window_pane_cp011

0x1364,	// (0x00071fd9) popup_blid2_search_window_g1

0x136c,	// (0x00071fe1) popup_blid2_search_window_t1

0x137a,	// (0x00071fef) popup_blid2_search_window_t2

0x0001,

0xfa91,	// (0x00080706) popup_blid2_search_window_t

0x2221,	// (0x00072e96) main_browser_pane_g1

0x1f39,	// (0x00072bae) main_browser_pane_ParamLimits

0x1e6e,	// (0x00072ae3) bg_button_pane_cp011_ParamLimits

0x8388,	// (0x00078ffd) cell_vitu2_function_pane_g1_ParamLimits

0xcc25,	// (0x0007d89a) bg_popup_sub_pane_cp22_ParamLimits

0x34d6,	// (0x0007414b) input_focus_pane_cp08_ParamLimits

0x8c2e,	// (0x000798a3) popup_vitu2_query_button_pane_ParamLimits

0x8c2e,	// (0x000798a3) popup_vitu2_query_button_pane

0x34f1,	// (0x00074166) popup_vitu2_query_input_button_pane

0x0fee,	// (0x00071c63) popup_vitu2_query_window_g1_ParamLimits

0x8c3d,	// (0x000798b2) popup_vitu2_query_window_g2_ParamLimits

0xf992,	// (0x00080607) popup_vitu2_query_window_g_ParamLimits

0x17c6,	// (0x0007243b) bg_button_pane_cp026

0x9211,	// (0x00079e86) popup_vitu2_query_input_button_pane_g1

0x17c6,	// (0x0007243b) bg_button_pane_cp025

0x1388,	// (0x00071ffd) popup_vitu2_query_button_pane_t1

0x6b6e,	// (0x000777e3) main_mp3_pane_t6

0x6b7c,	// (0x000777f1) popup_slider_window_cp01

0xe4cf,	// (0x0007f144) cam4_battery_pane

0xe522,	// (0x0007f197) cam4_battery_pane_cp02

0xefc7,	// (0x0007fc3c) cam4_battery_pane_cp01

0xefc7,	// (0x0007fc3c) cam4_battery_pane_cp03

0x210d,	// (0x00072d82) cam4_battery_pane_g1

0x1396,	// (0x0007200b) cam4_battery_pane_g2

0x0001,

0xfa96,	// (0x0008070b) cam4_battery_pane_g

0x0382,	// (0x00070ff7) popup_blid_sat_info2_window_t11

0xc9a3,	// (0x0007d618) aid_size_touch_mv_arrow_left_ParamLimits

0xc9ce,	// (0x0007d643) aid_size_touch_mv_arrow_right_ParamLimits

0xca2c,	// (0x0007d6a1) navi_pane_g1_ParamLimits

0xca38,	// (0x0007d6ad) navi_pane_g2_ParamLimits

0xca66,	// (0x0007d6db) navi_pane_g3_ParamLimits

0xf35a,	// (0x0007ffcf) navi_pane_g_ParamLimits

0x596a,	// (0x000765df) navi_pane_mv_t1_ParamLimits

0x76e9,	// (0x0007835e) grid_imed_effect_pane_ParamLimits

0x48b1,	// (0x00075526) aid_placing_vt_slider_lsc

0x2170,	// (0x00072de5) aid_placing_vt_slider_prt

0x1e6e,	// (0x00072ae3) bg_tb_trans_pane_cp01_ParamLimits

0x0629,	// (0x0007129e) popup_image_details_window_g1_ParamLimits

0x063c,	// (0x000712b1) popup_image_details_window_g2_ParamLimits

0x0651,	// (0x000712c6) popup_image_details_window_g3_ParamLimits

0x0651,	// (0x000712c6) popup_image_details_window_g3

0xf699,	// (0x0008030e) popup_image_details_window_g_ParamLimits

0x0665,	// (0x000712da) popup_image_details_window_t1_ParamLimits

0x0677,	// (0x000712ec) popup_image_details_window_t2_ParamLimits

0x0690,	// (0x00071305) popup_image_details_window_t3_ParamLimits

0x06a4,	// (0x00071319) popup_image_details_window_t4_ParamLimits

0x06bf,	// (0x00071334) popup_image_details_window_t5_ParamLimits

0xf6a0,	// (0x00080315) popup_image_details_window_t_ParamLimits

0x8e78,	// (0x00079aed) cl_header_name_pane_ParamLimits

0x8e78,	// (0x00079aed) cl_header_name_pane

0x9219,	// (0x00079e8e) cl_header_name_pane_t1_ParamLimits

0x9219,	// (0x00079e8e) cl_header_name_pane_t1

0x923a,	// (0x00079eaf) cl_header_name_pane_t2_ParamLimits

0x923a,	// (0x00079eaf) cl_header_name_pane_t2

0x927c,	// (0x00079ef1) cl_header_name_pane_t3_ParamLimits

0x927c,	// (0x00079ef1) cl_header_name_pane_t3

0x0002,

0xfa9b,	// (0x00080710) cl_header_name_pane_t_ParamLimits

0xfa9b,	// (0x00080710) cl_header_name_pane_t

0xcaf5,	// (0x0007d76a) navi_pane_mv_g2_ParamLimits

0x0d49,	// (0x000719be) field_vitu2_entry_pane_g1_ParamLimits

0x0d55,	// (0x000719ca) field_vitu2_entry_pane_g2_ParamLimits

0x015e,	// (0x00070dd3) field_vitu2_entry_pane_g3_ParamLimits

0x015e,	// (0x00070dd3) field_vitu2_entry_pane_g3

0xf89b,	// (0x00080510) field_vitu2_entry_pane_g_ParamLimits

0x8304,	// (0x00078f79) cell_vitu2_itu_pane_g1_ParamLimits

0x831c,	// (0x00078f91) cell_vitu2_itu_pane_g2_ParamLimits

0x831c,	// (0x00078f91) cell_vitu2_itu_pane_g2

0x0001,

0xf8a7,	// (0x0008051c) cell_vitu2_itu_pane_g_ParamLimits

0xf8a7,	// (0x0008051c) cell_vitu2_itu_pane_g

0x1e6e,	// (0x00072ae3) bg_vkb2_func_pane_cp05_ParamLimits

0x1e6e,	// (0x00072ae3) bg_vkb2_func_pane_cp05

0x1e6e,	// (0x00072ae3) bg_vkb2_func_pane_cp03

0x1e6e,	// (0x00072ae3) bg_vkb2_func_pane_cp04

0x1e6e,	// (0x00072ae3) bg_vkb2_func_pane_cp10_ParamLimits

0x1e6e,	// (0x00072ae3) bg_vkb2_func_pane_cp10

0x3602,	// (0x00074277) bg_vkb2_func_pane_cp08

0x8e24,	// (0x00079a99) bg_vkb2_func_pane_cp06

0x8e30,	// (0x00079aa5) bg_vkb2_func_pane_cp07

0x126f,	// (0x00071ee4) bg_vkb2_func_pane_cp11_ParamLimits

0x126f,	// (0x00071ee4) bg_vkb2_func_pane_cp11

0x1284,	// (0x00071ef9) bg_vkb2_func_pane_cp12_ParamLimits

0x1284,	// (0x00071ef9) bg_vkb2_func_pane_cp12

0x17c6,	// (0x0007243b) bg_vkb2_func_pane_cp09

0x0d73,	// (0x000719e8) bg_vkb2_func_pane_g1

0x2332,	// (0x00072fa7) bg_vkb2_func_pane_g2

0x0d7b,	// (0x000719f0) bg_vkb2_func_pane_g3

0x0d83,	// (0x000719f8) bg_vkb2_func_pane_g4

0x0fb3,	// (0x00071c28) bg_vkb2_func_pane_g5

0x0d9b,	// (0x00071a10) bg_vkb2_func_pane_g6

0x0da3,	// (0x00071a18) bg_vkb2_func_pane_g7

0x0d93,	// (0x00071a08) bg_vkb2_func_pane_g8

0x2312,	// (0x00072f87) bg_vkb2_func_pane_g9

0x0008,

0xfaa2,	// (0x00080717) bg_vkb2_func_pane_g

0x913d,	// (0x00079db2) blid2_tripm_pane_g6_ParamLimits

0x913d,	// (0x00079db2) blid2_tripm_pane_g6

0x0c8d,	// (0x00071902) mp4_progress_pane_g1

0x91b6,	// (0x00079e2b) blid2_tripm_values_pane_ParamLimits

0x91b6,	// (0x00079e2b) blid2_tripm_values_pane

0x92ad,	// (0x00079f22) blid2_tripm_values_pane_t1

0x92bb,	// (0x00079f30) blid2_tripm_values_pane_t2

0x92c9,	// (0x00079f3e) blid2_tripm_values_pane_t3

0x92d7,	// (0x00079f4c) blid2_tripm_values_pane_t4

0x92e5,	// (0x00079f5a) blid2_tripm_values_pane_t5

0x92f3,	// (0x00079f68) blid2_tripm_values_pane_t6

0x9301,	// (0x00079f76) blid2_tripm_values_pane_t7

0x930f,	// (0x00079f84) blid2_tripm_values_pane_t8

0x931d,	// (0x00079f92) blid2_tripm_values_pane_t9

0x0008,

0xfab5,	// (0x0008072a) blid2_tripm_values_pane_t

0x48f3,	// (0x00075568) call_video_pane_t1_ParamLimits

0x4911,	// (0x00075586) call_video_pane_t2_ParamLimits

0xf208,	// (0x0007fe7d) call_video_pane_t_ParamLimits

0x3377,	// (0x00073fec) msg_header_pane_g1_ParamLimits

0xcce2,	// (0x0007d957) msg_header_pane_g2_ParamLimits

0xcce2,	// (0x0007d957) msg_header_pane_g2

0x0001,

0xf3fd,	// (0x00080072) msg_header_pane_g_ParamLimits

0xf3fd,	// (0x00080072) msg_header_pane_g

0x1f39,	// (0x00072bae) main_clock2_pane_ParamLimits

0x73ea,	// (0x0007805f) grid_clock2_toolbar_pane_ParamLimits

0x73ea,	// (0x0007805f) grid_clock2_toolbar_pane

0x73ea,	// (0x0007805f) listscroll_clock2_pane_ParamLimits

0x73ea,	// (0x0007805f) listscroll_clock2_pane

0x74ce,	// (0x00078143) main_clock2_pane_t3_ParamLimits

0x74ce,	// (0x00078143) main_clock2_pane_t3

0x74f2,	// (0x00078167) main_clock2_pane_t4_ParamLimits

0x74f2,	// (0x00078167) main_clock2_pane_t4

0x13a0,	// (0x00072015) cell_clock2_toolbar_pane

0x13a8,	// (0x0007201d) cell_clock2_toolbar_pane_cp01

0x13a8,	// (0x0007201d) cell_clock2_toolbar_pane_cp02

0x13b0,	// (0x00072025) cell_clock2_toolbar_pane_cp03

0x13b8,	// (0x0007202d) list_clock2_pane

0xc928,	// (0x0007d59d) scroll_pane_cp10

0x13c0,	// (0x00072035) list_single_clock2_pane_ParamLimits

0x13c0,	// (0x00072035) list_single_clock2_pane

0x20eb,	// (0x00072d60) list_highlight_pane_cp08

0x13cd,	// (0x00072042) list_single_clock2_pane_t1

0x13db,	// (0x00072050) list_single_clock2_pane_t2

0x0001,

0xfac8,	// (0x0008073d) list_single_clock2_pane_t

0x17c6,	// (0x0007243b) bg_button_pane_cp10

0x13e9,	// (0x0007205e) cell_clock2_toolbar_pane_g1

0x5bdd,	// (0x00076852) aid_main_viewer_pane_g1_ParamLimits

0x5bdd,	// (0x00076852) aid_main_viewer_pane_g1

0x5beb,	// (0x00076860) aid_main_viewer_pane_g2_ParamLimits

0x5beb,	// (0x00076860) aid_main_viewer_pane_g2

0x5bf9,	// (0x0007686e) aid_main_viewer_pane_g3_ParamLimits

0x5bf9,	// (0x0007686e) aid_main_viewer_pane_g3

0x5c08,	// (0x0007687d) aid_main_viewer_pane_g4_ParamLimits

0x5c08,	// (0x0007687d) aid_main_viewer_pane_g4

0x0003,

0xf40e,	// (0x00080083) aid_main_viewer_pane_g_ParamLimits

0xf40e,	// (0x00080083) aid_main_viewer_pane_g

0x6551,	// (0x000771c6) main_calc_pane_ParamLimits

0x6565,	// (0x000771da) main_dialer2_pane_ParamLimits

0x17c6,	// (0x0007243b) main_cam6_pane

0x17c6,	// (0x0007243b) main_vid6_pane

0x73f6,	// (0x0007806b) listscroll_gen_pane_cp06_ParamLimits

0x73f6,	// (0x0007806b) listscroll_gen_pane_cp06

0x7515,	// (0x0007818a) main_clock2_pane_t5_ParamLimits

0x7515,	// (0x0007818a) main_clock2_pane_t5

0x7573,	// (0x000781e8) aid_call2_pane_cp10_ParamLimits

0x7585,	// (0x000781fa) aid_call_pane_cp10_ParamLimits

0xc997,	// (0x0007d60c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc997,	// (0x0007d60c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7597,	// (0x0007820c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7597,	// (0x0007820c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc997,	// (0x0007d60c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf755,	// (0x000803ca) popup_clock_analogue_window_cp10_g_ParamLimits

0x75ad,	// (0x00078222) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7ab6,	// (0x0007872b) cell_dialer2_keypad_pane_g2_ParamLimits

0x7ab6,	// (0x0007872b) cell_dialer2_keypad_pane_g2

0x0001,

0xf83a,	// (0x000804af) cell_dialer2_keypad_pane_g_ParamLimits

0xf83a,	// (0x000804af) cell_dialer2_keypad_pane_g

0x7ad2,	// (0x00078747) cell_dialer2_keypad_pane_t1

0x86a7,	// (0x0007931c) main_cset_text2_pane_ParamLimits

0x86a7,	// (0x0007931c) main_cset_text2_pane

0x11ce,	// (0x00071e43) area_vitu2_query_pane_g1_ParamLimits

0x35bc,	// (0x00074231) area_vitu2_query_pane_g2_ParamLimits

0xf9e5,	// (0x0008065a) area_vitu2_query_pane_g_ParamLimits

0xe62b,	// (0x0007f2a0) area_vitu2_query_pane_t7_ParamLimits

0xe62b,	// (0x0007f2a0) area_vitu2_query_pane_t7

0x8e24,	// (0x00079a99) bg_button_pane_cp018_ParamLimits

0x8e30,	// (0x00079aa5) bg_button_pane_cp021_ParamLimits

0x35f3,	// (0x00074268) bg_button_pane_cp022_ParamLimits

0x3602,	// (0x00074277) bg_vkb2_func_pane_cp08_ParamLimits

0x8e24,	// (0x00079a99) bg_vkb2_func_pane_cp06_ParamLimits

0x8e30,	// (0x00079aa5) bg_vkb2_func_pane_cp07_ParamLimits

0x3612,	// (0x00074287) input_focus_pane_cp09_ParamLimits

0xf03a,	// (0x0007fcaf) cam6_autofocus_pane_ParamLimits

0xf03a,	// (0x0007fcaf) cam6_autofocus_pane

0x932b,	// (0x00079fa0) cam6_image_uncrop_pane_ParamLimits

0x932b,	// (0x00079fa0) cam6_image_uncrop_pane

0x933a,	// (0x00079faf) cam6_indi_pane_ParamLimits

0x933a,	// (0x00079faf) cam6_indi_pane

0x9350,	// (0x00079fc5) cam6_mode_pane_ParamLimits

0x9350,	// (0x00079fc5) cam6_mode_pane

0x9362,	// (0x00079fd7) cam6_timer_pane_ParamLimits

0x9362,	// (0x00079fd7) cam6_timer_pane

0x9372,	// (0x00079fe7) cam6_zoom_pane_ParamLimits

0x9372,	// (0x00079fe7) cam6_zoom_pane

0x937e,	// (0x00079ff3) cam6_mode_pane_g1_ParamLimits

0x937e,	// (0x00079ff3) cam6_mode_pane_g1

0x938e,	// (0x0007a003) cam6_mode_pane_g2_ParamLimits

0x938e,	// (0x0007a003) cam6_mode_pane_g2

0x939e,	// (0x0007a013) cam6_mode_pane_g3_ParamLimits

0x939e,	// (0x0007a013) cam6_mode_pane_g3

0x93ae,	// (0x0007a023) cam6_mode_pane_g4_ParamLimits

0x93ae,	// (0x0007a023) cam6_mode_pane_g4

0x0003,

0xfacd,	// (0x00080742) cam6_mode_pane_g_ParamLimits

0xfacd,	// (0x00080742) cam6_mode_pane_g

0x0cda,	// (0x0007194f) bg_tb_trans_pane_cp08_ParamLimits

0x0cda,	// (0x0007194f) bg_tb_trans_pane_cp08

0x13f1,	// (0x00072066) cam6_battery_pane_ParamLimits

0x13f1,	// (0x00072066) cam6_battery_pane

0x1407,	// (0x0007207c) cam6_indi_pane_g1_ParamLimits

0x1407,	// (0x0007207c) cam6_indi_pane_g1

0x1419,	// (0x0007208e) cam6_indi_pane_g2_ParamLimits

0x1419,	// (0x0007208e) cam6_indi_pane_g2

0x142b,	// (0x000720a0) cam6_indi_pane_g3_ParamLimits

0x142b,	// (0x000720a0) cam6_indi_pane_g3

0x0002,

0xfad6,	// (0x0008074b) cam6_indi_pane_g_ParamLimits

0xfad6,	// (0x0008074b) cam6_indi_pane_g

0x143d,	// (0x000720b2) cam6_indi_pane_t1_ParamLimits

0x143d,	// (0x000720b2) cam6_indi_pane_t1

0x93be,	// (0x0007a033) cam6_autofocus_pane_g1

0x93c6,	// (0x0007a03b) cam6_autofocus_pane_g2

0x93ce,	// (0x0007a043) cam6_autofocus_pane_g3

0x93d6,	// (0x0007a04b) cam6_autofocus_pane_g4

0x0003,

0xfadd,	// (0x00080752) cam6_autofocus_pane_g

0x1463,	// (0x000720d8) cam6_timer_pane_g1

0x146b,	// (0x000720e0) cam6_timer_pane_t1

0x1479,	// (0x000720ee) cam6_zoom_cont_pane

0x1481,	// (0x000720f6) cam6_zoom_pane_g1

0x1489,	// (0x000720fe) cam6_zoom_pane_g2

0x93de,	// (0x0007a053) cam6_zoom_pane_g3

0x0002,

0xfae6,	// (0x0008075b) cam6_zoom_pane_g

0x210d,	// (0x00072d82) cam6_battery_pane_g1

0x210d,	// (0x00072d82) cam6_battery_pane_g2

0x0001,

0xf3be,	// (0x00080033) cam6_battery_pane_g

0x1491,	// (0x00072106) cam6_zoom_cont_pane_g1

0x149a,	// (0x0007210f) cam6_zoom_cont_pane_g2

0x14a3,	// (0x00072118) cam6_zoom_cont_pane_g3

0x0002,

0xfaed,	// (0x00080762) cam6_zoom_cont_pane_g

0x93fb,	// (0x0007a070) cam6_mode_pane_cp_ParamLimits

0x93fb,	// (0x0007a070) cam6_mode_pane_cp

0x9372,	// (0x00079fe7) cam6_zoom_pane_cp_ParamLimits

0x9372,	// (0x00079fe7) cam6_zoom_pane_cp

0x940d,	// (0x0007a082) vid6_image_uncrop_cif_pane_ParamLimits

0x940d,	// (0x0007a082) vid6_image_uncrop_cif_pane

0x941d,	// (0x0007a092) vid6_image_uncrop_nhd_pane_ParamLimits

0x941d,	// (0x0007a092) vid6_image_uncrop_nhd_pane

0x932b,	// (0x00079fa0) vid6_image_uncrop_vga_pane_ParamLimits

0x932b,	// (0x00079fa0) vid6_image_uncrop_vga_pane

0x942c,	// (0x0007a0a1) vid6_image_uncrop_wvga_pane_ParamLimits

0x942c,	// (0x0007a0a1) vid6_image_uncrop_wvga_pane

0x943b,	// (0x0007a0b0) vid6_indi_pane_ParamLimits

0x943b,	// (0x0007a0b0) vid6_indi_pane

0x0cda,	// (0x0007194f) bg_tb_trans_pane_cp09_ParamLimits

0x0cda,	// (0x0007194f) bg_tb_trans_pane_cp09

0x14bb,	// (0x00072130) cam6_battery_pane_cp_ParamLimits

0x14bb,	// (0x00072130) cam6_battery_pane_cp

0x14c7,	// (0x0007213c) vid6_indi_pane_g1_ParamLimits

0x14c7,	// (0x0007213c) vid6_indi_pane_g1

0x14d9,	// (0x0007214e) vid6_indi_pane_g2_ParamLimits

0x14d9,	// (0x0007214e) vid6_indi_pane_g2

0x14eb,	// (0x00072160) vid6_indi_pane_g3_ParamLimits

0x14eb,	// (0x00072160) vid6_indi_pane_g3

0x1500,	// (0x00072175) vid6_indi_pane_g4_ParamLimits

0x1500,	// (0x00072175) vid6_indi_pane_g4

0x1515,	// (0x0007218a) vid6_indi_pane_g5_ParamLimits

0x1515,	// (0x0007218a) vid6_indi_pane_g5

0x0004,

0xfaf4,	// (0x00080769) vid6_indi_pane_g_ParamLimits

0xfaf4,	// (0x00080769) vid6_indi_pane_g

0x152f,	// (0x000721a4) vid6_indi_pane_t1_ParamLimits

0x152f,	// (0x000721a4) vid6_indi_pane_t1

0x1545,	// (0x000721ba) vid6_indi_pane_t2_ParamLimits

0x1545,	// (0x000721ba) vid6_indi_pane_t2

0x156d,	// (0x000721e2) vid6_indi_pane_t3_ParamLimits

0x156d,	// (0x000721e2) vid6_indi_pane_t3

0x1595,	// (0x0007220a) vid6_indi_pane_t4_ParamLimits

0x1595,	// (0x0007220a) vid6_indi_pane_t4

0x0003,

0xfaff,	// (0x00080774) vid6_indi_pane_t_ParamLimits

0xfaff,	// (0x00080774) vid6_indi_pane_t

0x15b9,	// (0x0007222e) wait_bar_pane_cp08

0x9453,	// (0x0007a0c8) main_cset_text2_pane_t1_ParamLimits

0x9453,	// (0x0007a0c8) main_cset_text2_pane_t1

0x93e6,	// (0x0007a05b) listscroll_gen_pane_cp06_t1_ParamLimits

0x93e6,	// (0x0007a05b) listscroll_gen_pane_cp06_t1

0x17c6,	// (0x0007243b) main_cam6_set_pane

0x1ec7,	// (0x00072b3c) bg_tb_trans_pane_cp06_ParamLimits

0xe4d7,	// (0x0007f14c) cam4_indicators_pane_g1_ParamLimits

0xe4e8,	// (0x0007f15d) cam4_indicators_pane_g2_ParamLimits

0xf877,	// (0x000804ec) cam4_indicators_pane_g_ParamLimits

0xe500,	// (0x0007f175) cam4_indicators_pane_t1_ParamLimits

0x1e6e,	// (0x00072ae3) bg_tb_trans_pane_cp07_ParamLimits

0xe52a,	// (0x0007f19f) vid4_indicators_pane_g1_ParamLimits

0xe53e,	// (0x0007f1b3) vid4_indicators_pane_g2_ParamLimits

0xe552,	// (0x0007f1c7) vid4_indicators_pane_g3_ParamLimits

0xe563,	// (0x0007f1d8) vid4_indicators_pane_g4_ParamLimits

0xf889,	// (0x000804fe) vid4_indicators_pane_g_ParamLimits

0xe57f,	// (0x0007f1f4) vid4_indicators_pane_t1_ParamLimits

0xefcf,	// (0x0007fc44) vid4_progress_pane_g1_ParamLimits

0xefdf,	// (0x0007fc54) vid4_progress_pane_g2_ParamLimits

0x8f6b,	// (0x00079be0) vid4_progress_pane_g3_ParamLimits

0xefef,	// (0x0007fc64) vid4_progress_pane_g4_ParamLimits

0xfa30,	// (0x000806a5) vid4_progress_pane_g_ParamLimits

0x8f7d,	// (0x00079bf2) vid4_progress_pane_t1_ParamLimits

0xf007,	// (0x0007fc7c) vid4_progress_pane_t2_ParamLimits

0xf01c,	// (0x0007fc91) vid4_progress_pane_t3_ParamLimits

0xfa3b,	// (0x000806b0) vid4_progress_pane_t_ParamLimits

0x8f93,	// (0x00079c08) wait_bar_pane_cp07_ParamLimits

0x9471,	// (0x0007a0e6) main_cam6_set_pane_g2_ParamLimits

0x9471,	// (0x0007a0e6) main_cam6_set_pane_g2

0x9495,	// (0x0007a10a) main_cset6_listscroll_pane_ParamLimits

0x9495,	// (0x0007a10a) main_cset6_listscroll_pane

0x94b1,	// (0x0007a126) main_cset6_slider_pane_ParamLimits

0x94b1,	// (0x0007a126) main_cset6_slider_pane

0x94c7,	// (0x0007a13c) main_cset6_text2_pane_ParamLimits

0x94c7,	// (0x0007a13c) main_cset6_text2_pane

0x15c8,	// (0x0007223d) main_cset6_text_pane

0x15d0,	// (0x00072245) main_cset_list_pane_copy1_ParamLimits

0x15d0,	// (0x00072245) main_cset_list_pane_copy1

0x15e0,	// (0x00072255) scroll_pane_cp028_copy1

0x94d5,	// (0x0007a14a) cset_list_set_pane_copy1

0x94e7,	// (0x0007a15c) aid_position_infowindow_above_copy1

0x94ef,	// (0x0007a164) aid_position_infowindow_below_copy1

0xf048,	// (0x0007fcbd) cset_list_set_pane_g1_copy1

0xe660,	// (0x0007f2d5) cset_list_set_pane_g3_copy1_ParamLimits

0xe660,	// (0x0007f2d5) cset_list_set_pane_g3_copy1

0xe66f,	// (0x0007f2e4) cset_list_set_pane_t1_copy1_ParamLimits

0xe66f,	// (0x0007f2e4) cset_list_set_pane_t1_copy1

0x1e6e,	// (0x00072ae3) list_highlight_pane_cp021_copy1_ParamLimits

0x1e6e,	// (0x00072ae3) list_highlight_pane_cp021_copy1

0x15e9,	// (0x0007225e) cset6_slider_pane_ParamLimits

0x15e9,	// (0x0007225e) cset6_slider_pane

0x1615,	// (0x0007228a) main_cset6_slider_pane_g1_ParamLimits

0x1615,	// (0x0007228a) main_cset6_slider_pane_g1

0x94f7,	// (0x0007a16c) main_cset6_slider_pane_g2_ParamLimits

0x94f7,	// (0x0007a16c) main_cset6_slider_pane_g2

0x163d,	// (0x000722b2) main_cset6_slider_pane_g3_ParamLimits

0x163d,	// (0x000722b2) main_cset6_slider_pane_g3

0x951f,	// (0x0007a194) main_cset6_slider_pane_g4_ParamLimits

0x951f,	// (0x0007a194) main_cset6_slider_pane_g4

0x1661,	// (0x000722d6) main_cset6_slider_pane_g5_ParamLimits

0x1661,	// (0x000722d6) main_cset6_slider_pane_g5

0x0ea2,	// (0x00071b17) main_cset6_slider_pane_g7_ParamLimits

0x0ea2,	// (0x00071b17) main_cset6_slider_pane_g7

0x0eae,	// (0x00071b23) main_cset6_slider_pane_g8_ParamLimits

0x0eae,	// (0x00071b23) main_cset6_slider_pane_g8

0x874d,	// (0x000793c2) main_cset6_slider_pane_g9_ParamLimits

0x874d,	// (0x000793c2) main_cset6_slider_pane_g9

0x8759,	// (0x000793ce) main_cset6_slider_pane_g10_ParamLimits

0x8759,	// (0x000793ce) main_cset6_slider_pane_g10

0x8765,	// (0x000793da) main_cset6_slider_pane_g11_ParamLimits

0x8765,	// (0x000793da) main_cset6_slider_pane_g11

0x8771,	// (0x000793e6) main_cset6_slider_pane_g12_ParamLimits

0x8771,	// (0x000793e6) main_cset6_slider_pane_g12

0x877d,	// (0x000793f2) main_cset6_slider_pane_g13_ParamLimits

0x877d,	// (0x000793f2) main_cset6_slider_pane_g13

0x8789,	// (0x000793fe) main_cset6_slider_pane_g14_ParamLimits

0x8789,	// (0x000793fe) main_cset6_slider_pane_g14

0x952b,	// (0x0007a1a0) main_cset6_slider_pane_g15_ParamLimits

0x952b,	// (0x0007a1a0) main_cset6_slider_pane_g15

0x1649,	// (0x000722be) main_cset6_slider_pane_g16_ParamLimits

0x1649,	// (0x000722be) main_cset6_slider_pane_g16

0x1655,	// (0x000722ca) main_cset6_slider_pane_g17_ParamLimits

0x1655,	// (0x000722ca) main_cset6_slider_pane_g17

0x0011,

0xfb08,	// (0x0008077d) main_cset6_slider_pane_g_ParamLimits

0xfb08,	// (0x0008077d) main_cset6_slider_pane_g

0x166d,	// (0x000722e2) main_cset6_slider_pane_t1_ParamLimits

0x166d,	// (0x000722e2) main_cset6_slider_pane_t1

0x955b,	// (0x0007a1d0) main_cset6_slider_pane_t2_ParamLimits

0x955b,	// (0x0007a1d0) main_cset6_slider_pane_t2

0x9586,	// (0x0007a1fb) main_cset6_slider_pane_t3_ParamLimits

0x9586,	// (0x0007a1fb) main_cset6_slider_pane_t3

0x95b1,	// (0x0007a226) main_cset6_slider_pane_t4_ParamLimits

0x95b1,	// (0x0007a226) main_cset6_slider_pane_t4

0x95dc,	// (0x0007a251) main_cset6_slider_pane_t5_ParamLimits

0x95dc,	// (0x0007a251) main_cset6_slider_pane_t5

0x16ae,	// (0x00072323) main_cset6_slider_pane_t7_ParamLimits

0x16ae,	// (0x00072323) main_cset6_slider_pane_t7

0x9607,	// (0x0007a27c) main_cset6_slider_pane_t8_ParamLimits

0x9607,	// (0x0007a27c) main_cset6_slider_pane_t8

0x962b,	// (0x0007a2a0) main_cset6_slider_pane_t9_ParamLimits

0x962b,	// (0x0007a2a0) main_cset6_slider_pane_t9

0x964f,	// (0x0007a2c4) main_cset6_slider_pane_t10_ParamLimits

0x964f,	// (0x0007a2c4) main_cset6_slider_pane_t10

0x9673,	// (0x0007a2e8) main_cset6_slider_pane_t11_ParamLimits

0x9673,	// (0x0007a2e8) main_cset6_slider_pane_t11

0x16e4,	// (0x00072359) main_cset6_slider_pane_t14_ParamLimits

0x16e4,	// (0x00072359) main_cset6_slider_pane_t14

0x171d,	// (0x00072392) main_cset6_slider_pane_t15_ParamLimits

0x171d,	// (0x00072392) main_cset6_slider_pane_t15

0x000b,

0xfb2d,	// (0x000807a2) main_cset6_slider_pane_t_ParamLimits

0xfb2d,	// (0x000807a2) main_cset6_slider_pane_t

0x0ba4,	// (0x00071819) cset_slider_pane_g1_copy1

0x0f70,	// (0x00071be5) cset_slider_pane_g2_copy1

0x0f79,	// (0x00071bee) cset_slider_pane_g3_copy1

0x17c6,	// (0x0007243b) bg_popup_sub_pane_cp011_copy1

0x9697,	// (0x0007a30c) main_cset_text_pane_g1_copy1

0x1002,	// (0x00071c77) main_cset_text_pane_t1_copy1

0x1010,	// (0x00071c85) main_cset_text_pane_t2_copy1

0x101e,	// (0x00071c93) main_cset_text_pane_t3_copy1

0x102c,	// (0x00071ca1) main_cset_text_pane_t4_copy1

0x103a,	// (0x00071caf) main_cset_text_pane_t5_copy1

0x969f,	// (0x0007a314) main_cset_text_pane_t6_copy1

0x96ad,	// (0x0007a322) main_cset_text_pane_t7_copy1

0x9453,	// (0x0007a0c8) main_cset_text2_pane_t1_copy1

0x1e6e,	// (0x00072ae3) main_ncimui_pane

0x67a9,	// (0x0007741e) popup_query_ncimui_window_ParamLimits

0x67a9,	// (0x0007741e) popup_query_ncimui_window

0xe186,	// (0x0007edfb) field_cale_ev2_pane_g4_ParamLimits

0xe186,	// (0x0007edfb) field_cale_ev2_pane_g4

0x7995,	// (0x0007860a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7995,	// (0x0007860a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf811,	// (0x00080486) cell_video_dialer_keypad_pane_g_ParamLimits

0xf811,	// (0x00080486) cell_video_dialer_keypad_pane_g

0x79ad,	// (0x00078622) cell_video_dialer_keypad_pane_t1

0x17c6,	// (0x0007243b) bg_popup_window_pane_cp012

0xdef7,	// (0x0007eb6c) heading_pane_cp06

0x9802,	// (0x0007a477) ncim_query_content_pane

0x17c6,	// (0x0007243b) bg_popup_heading_pane_cp01

0x980a,	// (0x0007a47f) ncim_heading_pane_t1

0x9818,	// (0x0007a48d) ncim_indicator_popup_pane

0x982a,	// (0x0007a49f) ncim_query_button_pane

0x984a,	// (0x0007a4bf) ncim_query_content_pane_t1

0x985c,	// (0x0007a4d1) ncim_query_content_pane_t2

0x0005,

0xfb71,	// (0x000807e6) ncim_query_content_pane_t

0x990e,	// (0x0007a583) ncim_query_list_pane

0x9920,	// (0x0007a595) ncim_query_popup_pane

0x9818,	// (0x0007a48d) ncim_indicator_popup_pane_ParamLimits

0x9832,	// (0x0007a4a7) ncim_query_content_pane_g1_ParamLimits

0x9832,	// (0x0007a4a7) ncim_query_content_pane_g1

0x984a,	// (0x0007a4bf) ncim_query_content_pane_t1_ParamLimits

0x985c,	// (0x0007a4d1) ncim_query_content_pane_t2_ParamLimits

0x986e,	// (0x0007a4e3) ncim_query_content_pane_t3_ParamLimits

0x986e,	// (0x0007a4e3) ncim_query_content_pane_t3

0x9896,	// (0x0007a50b) ncim_query_content_pane_t4_ParamLimits

0x9896,	// (0x0007a50b) ncim_query_content_pane_t4

0x98be,	// (0x0007a533) ncim_query_content_pane_t5_ParamLimits

0x98be,	// (0x0007a533) ncim_query_content_pane_t5

0x98e6,	// (0x0007a55b) ncim_query_content_pane_t6_ParamLimits

0x98e6,	// (0x0007a55b) ncim_query_content_pane_t6

0xfb71,	// (0x000807e6) ncim_query_content_pane_t_ParamLimits

0x990e,	// (0x0007a583) ncim_query_list_pane_ParamLimits

0x9920,	// (0x0007a595) ncim_query_popup_pane_ParamLimits

0x9934,	// (0x0007a5a9) wait_bar_pane_cp04

0x17c6,	// (0x0007243b) input_focus_pane_cp011

0x993c,	// (0x0007a5b1) ncim_query_popup_pane_t1

0x994a,	// (0x0007a5bf) ncim_list_query_list_pane_ParamLimits

0x994a,	// (0x0007a5bf) ncim_list_query_list_pane

0x17c6,	// (0x0007243b) bg_button_pane_cp027

0x9957,	// (0x0007a5cc) ncim_query_button_pane_g1

0x17c6,	// (0x0007243b) list_highlight_pane_cp012

0x9961,	// (0x0007a5d6) ncim_list_query_list_pane_g1

0x9969,	// (0x0007a5de) ncim_list_query_list_pane_t1

0xe4f4,	// (0x0007f169) cam4_indicators_pane_g3_ParamLimits

0xe4f4,	// (0x0007f169) cam4_indicators_pane_g3

0xe56f,	// (0x0007f1e4) vid4_indicators_pane_g5_ParamLimits

0xe56f,	// (0x0007f1e4) vid4_indicators_pane_g5

0xeffb,	// (0x0007fc70) vid4_progress_pane_g5_ParamLimits

0xeffb,	// (0x0007fc70) vid4_progress_pane_g5

0x96ed,	// (0x0007a362) main_ncimui_pane_g1

0x9756,	// (0x0007a3cb) ncimui_group_query_pane_ParamLimits

0x9756,	// (0x0007a3cb) ncimui_group_query_pane

0x979e,	// (0x0007a413) ncimui_list_pane_ParamLimits

0x979e,	// (0x0007a413) ncimui_list_pane

0x97c5,	// (0x0007a43a) ncimui_text_pane_ParamLimits

0x97c5,	// (0x0007a43a) ncimui_text_pane

0x9977,	// (0x0007a5ec) ncimui_text_pane_t1_ParamLimits

0x9977,	// (0x0007a5ec) ncimui_text_pane_t1

0x9995,	// (0x0007a60a) ncimui_list_single_graphic_pane_ParamLimits

0x9995,	// (0x0007a60a) ncimui_list_single_graphic_pane

0x99a5,	// (0x0007a61a) ncimui_query_pane_ParamLimits

0x99a5,	// (0x0007a61a) ncimui_query_pane

0x17c6,	// (0x0007243b) list_highlight_pane_cp013

0x99b8,	// (0x0007a62d) ncim_list_query_list_pane_t1_copy1

0x99c6,	// (0x0007a63b) ncim_list_single_graphic_pane_g1

0x99ce,	// (0x0007a643) ncim_query_button_pane_cp01

0x99da,	// (0x0007a64f) ncim_query_entry_pane_ParamLimits

0x99da,	// (0x0007a64f) ncim_query_entry_pane

0x99ed,	// (0x0007a662) ncimui_query_pane_g1

0x99f9,	// (0x0007a66e) ncimui_query_pane_t1_ParamLimits

0x99f9,	// (0x0007a66e) ncimui_query_pane_t1

0x1e6e,	// (0x00072ae3) input_focus_pane_cp012

0x9a12,	// (0x0007a687) ncim_query_entry_pane_t1

0x1f39,	// (0x00072bae) main_im_pane_ParamLimits

0x1e6e,	// (0x00072ae3) main_mobtv_pane_ParamLimits

0x1e6e,	// (0x00072ae3) main_mobtv_pane

0x9543,	// (0x0007a1b8) main_cset6_slider_pane_g18_ParamLimits

0x9543,	// (0x0007a1b8) main_cset6_slider_pane_g18

0x954f,	// (0x0007a1c4) main_cset6_slider_pane_g19_ParamLimits

0x954f,	// (0x0007a1c4) main_cset6_slider_pane_g19

0x1ee3,	// (0x00072b58) bg_main_mobtv_pane_ParamLimits

0x1ee3,	// (0x00072b58) bg_main_mobtv_pane

0x9a24,	// (0x0007a699) main_mobtv_info_pane

0x9a2d,	// (0x0007a6a2) main_mobtv_loading_pane_ParamLimits

0x9a2d,	// (0x0007a6a2) main_mobtv_loading_pane

0x9a3a,	// (0x0007a6af) main_mobtv_pg_channel_list_pane

0x9a44,	// (0x0007a6b9) main_mobtv_pg_hdr_pane

0x9a4d,	// (0x0007a6c2) main_mobtv_programe_curr_pane_ParamLimits

0x9a4d,	// (0x0007a6c2) main_mobtv_programe_curr_pane

0x9a5a,	// (0x0007a6cf) main_mobtv_programe_next_pane_ParamLimits

0x9a5a,	// (0x0007a6cf) main_mobtv_programe_next_pane

0x9a67,	// (0x0007a6dc) popup_mobtv_noti_window

0x210d,	// (0x00072d82) main_tv_pg_hdr_pane_g1

0x9a6f,	// (0x0007a6e4) main_tv_pg_hdr_pane_g2

0x9a77,	// (0x0007a6ec) main_tv_pg_hdr_pane_g3

0x9a7f,	// (0x0007a6f4) main_tv_pg_hdr_pane_g4

0x9a87,	// (0x0007a6fc) main_tv_pg_hdr_pane_g5

0x9a91,	// (0x0007a706) main_tv_pg_hdr_pane_g6

0x9a9b,	// (0x0007a710) main_tv_pg_hdr_pane_g7

0x9aa5,	// (0x0007a71a) main_tv_pg_hdr_pane_g8

0x9aaf,	// (0x0007a724) main_tv_pg_hdr_pane_g9

0x9ab9,	// (0x0007a72e) main_tv_pg_hdr_pane_g10

0x9ac3,	// (0x0007a738) main_tv_pg_hdr_pane_g11

0x000a,

0xfb7e,	// (0x000807f3) main_tv_pg_hdr_pane_g

0x9acd,	// (0x0007a742) main_tv_pg_hdr_pane_t1

0x9adb,	// (0x0007a750) main_tv_pg_hdr_pane_t2

0x9ae9,	// (0x0007a75e) main_tv_pg_hdr_pane_t3

0x9af9,	// (0x0007a76e) main_tv_pg_hdr_pane_t4

0x9b09,	// (0x0007a77e) main_tv_pg_hdr_pane_t5

0x0004,

0xfb95,	// (0x0008080a) main_tv_pg_hdr_pane_t

0x9b19,	// (0x0007a78e) single_mobtv_pg_channel_pane_ParamLimits

0x9b19,	// (0x0007a78e) single_mobtv_pg_channel_pane

0x9b2b,	// (0x0007a7a0) single_mobtv_pg_channel_table_pane

0x2435,	// (0x000730aa) single_mobtv_pg_channel_thumb_pane

0x9b34,	// (0x0007a7a9) single_tv_pg_channel_pane_g1

0x9b3d,	// (0x0007a7b2) single_tv_pg_channel_pane_g2

0x0001,

0xfba0,	// (0x00080815) single_tv_pg_channel_pane_g

0x1ec7,	// (0x00072b3c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1ec7,	// (0x00072b3c) bg_single_mobtv_pg_channel_thumb_pane

0x9b46,	// (0x0007a7bb) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x9b46,	// (0x0007a7bb) single_mobtv_pg_channel_thumb_pane_g1

0x9b54,	// (0x0007a7c9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x9b54,	// (0x0007a7c9) single_mobtv_pg_channel_thumb_pane_g2

0x9b60,	// (0x0007a7d5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x9b60,	// (0x0007a7d5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfba5,	// (0x0008081a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfba5,	// (0x0008081a) single_mobtv_pg_channel_thumb_pane_g

0x9b6c,	// (0x0007a7e1) single_mobtv_pg_channel_thumb_pane_t1

0x9b7a,	// (0x0007a7ef) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbac,	// (0x00080821) single_mobtv_pg_channel_thumb_pane_t

0x210d,	// (0x00072d82) bg_single_mobtv_pg_channel_table_pane_g1

0x210d,	// (0x00072d82) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3be,	// (0x00080033) bg_single_mobtv_pg_channel_table_pane_g

0x9b88,	// (0x0007a7fd) single_mobtv_pg_channel_table_pane_t1

0x9b96,	// (0x0007a80b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb1,	// (0x00080826) single_mobtv_pg_channel_table_pane_t

0x9bac,	// (0x0007a821) main_mobtv_info_pane_g1_ParamLimits

0x9bac,	// (0x0007a821) main_mobtv_info_pane_g1

0x9bca,	// (0x0007a83f) main_mobtv_info_pane_t1_ParamLimits

0x9bca,	// (0x0007a83f) main_mobtv_info_pane_t1

0x9c42,	// (0x0007a8b7) main_mobtv_info_pane_t2_ParamLimits

0x9c42,	// (0x0007a8b7) main_mobtv_info_pane_t2

0x0002,

0xfbbb,	// (0x00080830) main_mobtv_info_pane_t_ParamLimits

0xfbbb,	// (0x00080830) main_mobtv_info_pane_t

0x9cd1,	// (0x0007a946) wait_bar_pane_cp05

0x9ce3,	// (0x0007a958) main_mobtv_loading_pane_g1_ParamLimits

0x9ce3,	// (0x0007a958) main_mobtv_loading_pane_g1

0x9cf6,	// (0x0007a96b) main_mobtv_loading_pane_g2_ParamLimits

0x9cf6,	// (0x0007a96b) main_mobtv_loading_pane_g2

0x9d02,	// (0x0007a977) main_mobtv_loading_pane_g3_ParamLimits

0x9d02,	// (0x0007a977) main_mobtv_loading_pane_g3

0x0002,

0xfbc2,	// (0x00080837) main_mobtv_loading_pane_g_ParamLimits

0xfbc2,	// (0x00080837) main_mobtv_loading_pane_g

0x9d15,	// (0x0007a98a) main_mobtv_loading_pane_t1_ParamLimits

0x9d15,	// (0x0007a98a) main_mobtv_loading_pane_t1

0x9d2d,	// (0x0007a9a2) main_mobtv_loading_pane_t2_ParamLimits

0x9d2d,	// (0x0007a9a2) main_mobtv_loading_pane_t2

0x0001,

0xfbc9,	// (0x0008083e) main_mobtv_loading_pane_t_ParamLimits

0xfbc9,	// (0x0008083e) main_mobtv_loading_pane_t

0x9d51,	// (0x0007a9c6) wait_bar_pane_cp06_ParamLimits

0x9d51,	// (0x0007a9c6) wait_bar_pane_cp06

0x9d60,	// (0x0007a9d5) main_mobtv_programe_curr_pane_t1

0x9d6e,	// (0x0007a9e3) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbce,	// (0x00080843) main_mobtv_programe_curr_pane_t

0x9d7c,	// (0x0007a9f1) main_mobtv_programe_next_pane_t1

0x9d8a,	// (0x0007a9ff) main_mobtv_programe_next_pane_t2

0x9d98,	// (0x0007aa0d) main_mobtv_programe_next_pane_t3

0x0002,

0xfbd3,	// (0x00080848) main_mobtv_programe_next_pane_t

0x17c6,	// (0x0007243b) bg_popup_mobtv_noti_window_pane

0x9da6,	// (0x0007aa1b) popup_mobtv_noti_window_g1

0x9dae,	// (0x0007aa23) popup_mobtv_noti_window_t1

0x9dbc,	// (0x0007aa31) popup_mobtv_noti_window_t2

0x0001,

0xfbda,	// (0x0008084f) popup_mobtv_noti_window_t

0x210d,	// (0x00072d82) bg_popup_mobtv_noti_window_pane_g1

0x17c6,	// (0x0007243b) sc_clock_pane

0x17c6,	// (0x0007243b) main_fs_bigclock_pane

0x91a0,	// (0x00079e15) blid2_tripm_pane_t4_ParamLimits

0x91a0,	// (0x00079e15) blid2_tripm_pane_t4

0x9dca,	// (0x0007aa3f) sc_clock_pane_g1_ParamLimits

0x9dca,	// (0x0007aa3f) sc_clock_pane_g1

0x9ddc,	// (0x0007aa51) sc_clock_pane_t1_ParamLimits

0x9ddc,	// (0x0007aa51) sc_clock_pane_t1

0x9dfe,	// (0x0007aa73) sc_clock_pane_t2_ParamLimits

0x9dfe,	// (0x0007aa73) sc_clock_pane_t2

0x9e16,	// (0x0007aa8b) sc_clock_pane_t3_ParamLimits

0x9e16,	// (0x0007aa8b) sc_clock_pane_t3

0x0004,

0xfbdf,	// (0x00080854) sc_clock_pane_t_ParamLimits

0xfbdf,	// (0x00080854) sc_clock_pane_t

0xb056,	// (0x0007bccb) main_fs_bigclock_indicator_pane_ParamLimits

0xb056,	// (0x0007bccb) main_fs_bigclock_indicator_pane

0x9ebc,	// (0x0007ab31) main_fs_bigclock_pane_g1_ParamLimits

0x9ebc,	// (0x0007ab31) main_fs_bigclock_pane_g1

0xb062,	// (0x0007bcd7) main_fs_bigclock_pane_t1_ParamLimits

0xb062,	// (0x0007bcd7) main_fs_bigclock_pane_t1

0xb074,	// (0x0007bce9) main_fs_bigclock_pane_t2_ParamLimits

0xb074,	// (0x0007bce9) main_fs_bigclock_pane_t2

0xb088,	// (0x0007bcfd) main_fs_bigclock_pane_t3_ParamLimits

0xb088,	// (0x0007bcfd) main_fs_bigclock_pane_t3

0x0002,

0xfd70,	// (0x000809e5) main_fs_bigclock_pane_t_ParamLimits

0xfd70,	// (0x000809e5) main_fs_bigclock_pane_t

0xb09a,	// (0x0007bd0f) main_fs_bigclock_indicator_pane_g1

0x983e,	// (0x0007a4b3) ncim_query_content_pane_g2_ParamLimits

0x983e,	// (0x0007a4b3) ncim_query_content_pane_g2

0x0001,

0xfb6c,	// (0x000807e1) ncim_query_content_pane_g_ParamLimits

0xfb6c,	// (0x000807e1) ncim_query_content_pane_g

0x9e2f,	// (0x0007aaa4) sc_clock_pane_t4_ParamLimits

0x9e2f,	// (0x0007aaa4) sc_clock_pane_t4

0x1e6e,	// (0x00072ae3) main_radioblah_pane

0xe469,	// (0x0007f0de) cell_call4_button_pane_t1_copy1_ParamLimits

0xe469,	// (0x0007f0de) cell_call4_button_pane_t1_copy1

0x9705,	// (0x0007a37a) main_ncimui_pane_t1_ParamLimits

0x9705,	// (0x0007a37a) main_ncimui_pane_t1

0x971f,	// (0x0007a394) main_ncimui_pane_t2_ParamLimits

0x971f,	// (0x0007a394) main_ncimui_pane_t2

0x0002,

0xfb65,	// (0x000807da) main_ncimui_pane_t_ParamLimits

0xfb65,	// (0x000807da) main_ncimui_pane_t

0xa041,	// (0x0007acb6) main_radioblah_anim_pane_ParamLimits

0xa041,	// (0x0007acb6) main_radioblah_anim_pane

0xa052,	// (0x0007acc7) main_radioblah_info_pane_ParamLimits

0xa052,	// (0x0007acc7) main_radioblah_info_pane

0xa078,	// (0x0007aced) main_radioblah_pane_t1_ParamLimits

0xa078,	// (0x0007aced) main_radioblah_pane_t1

0xa094,	// (0x0007ad09) main_radioblah_pane_t2_ParamLimits

0xa094,	// (0x0007ad09) main_radioblah_pane_t2

0x0003,

0xfc00,	// (0x00080875) main_radioblah_pane_t_ParamLimits

0xfc00,	// (0x00080875) main_radioblah_pane_t

0xa0dc,	// (0x0007ad51) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa0dc,	// (0x0007ad51) main_radioblah_rocker_ctrl_pane

0xa134,	// (0x0007ada9) main_radioblah_info_pane_t1_ParamLimits

0xa134,	// (0x0007ada9) main_radioblah_info_pane_t1

0xa16e,	// (0x0007ade3) main_radioblah_info_pane_t2_ParamLimits

0xa16e,	// (0x0007ade3) main_radioblah_info_pane_t2

0x0003,

0xfc09,	// (0x0008087e) main_radioblah_info_pane_t_ParamLimits

0xfc09,	// (0x0008087e) main_radioblah_info_pane_t

0x210d,	// (0x00072d82) main_radioblah_rocker_ctrl_pane_g1

0xa21e,	// (0x0007ae93) main_radioblah_rocker_ctrl_pane_g2

0xa226,	// (0x0007ae9b) main_radioblah_rocker_ctrl_pane_g3

0xa22e,	// (0x0007aea3) main_radioblah_rocker_ctrl_pane_g4

0xa236,	// (0x0007aeab) main_radioblah_rocker_ctrl_pane_g5

0xa23e,	// (0x0007aeb3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc12,	// (0x00080887) main_radioblah_rocker_ctrl_pane_g

0x9453,	// (0x0007a0c8) main_cset_text2_pane_t1_copy1_ParamLimits

0xe4c7,	// (0x0007f13c) cam4_image_uncrop_qvga_pane

0xe51a,	// (0x0007f18f) vid4_image_uncrop_qcif_pane

0xf03a,	// (0x0007fcaf) cam6_image_uncrop_qvga_pane_ParamLimits

0xf03a,	// (0x0007fcaf) cam6_image_uncrop_qvga_pane

0x14ab,	// (0x00072120) vid6_image_uncrop_qcif_pane_ParamLimits

0x14ab,	// (0x00072120) vid6_image_uncrop_qcif_pane

0x17c6,	// (0x0007243b) bg_popup_preview_window_pane_cp03

0x96bb,	// (0x0007a330) list_cset_text2_pane

0x96c3,	// (0x0007a338) main_cset6_text2_pane_g1

0x96cb,	// (0x0007a340) main_cset6_text2_pane_t1

0xa246,	// (0x0007aebb) list_cset_text2_pane_t1_ParamLimits

0xa246,	// (0x0007aebb) list_cset_text2_pane_t1

0x1e6e,	// (0x00072ae3) main_radioblah_pane_ParamLimits

0x9cbd,	// (0x0007a932) main_mobtv_info_pane_t3_ParamLimits

0x9cbd,	// (0x0007a932) main_mobtv_info_pane_t3

0xa066,	// (0x0007acdb) main_radioblah_pane_g1

0xa104,	// (0x0007ad79) main_radioblah_info_pane_g1

0xa1c3,	// (0x0007ae38) main_radioblah_info_pane_t3_ParamLimits

0xa1c3,	// (0x0007ae38) main_radioblah_info_pane_t3

0x556a,	// (0x000761df) highlight_cell_cale_month_pane_ParamLimits

0x556a,	// (0x000761df) highlight_cell_cale_month_pane

0x17c6,	// (0x0007243b) main_phob_fisheye_pane

0x07c9,	// (0x0007143e) scroll_pane_cp0031_ParamLimits

0x07c9,	// (0x0007143e) scroll_pane_cp0031

0x15b9,	// (0x0007222e) wait_bar_pane_cp08_ParamLimits

0x94d5,	// (0x0007a14a) cset_list_set_pane_copy1_ParamLimits

0xa261,	// (0x0007aed6) highlight_cell_cale_month_pane_g1

0xa269,	// (0x0007aede) highlight_cell_cale_month_pane_t1

0x1222,	// (0x00071e97) list_gen_pane_cp01

0x0e8d,	// (0x00071b02) scroll_pane_01

0xa277,	// (0x0007aeec) list_single_double_fisheye_pane

0xe684,	// (0x0007f2f9) list_double_fisheye_pane_g1_ParamLimits

0xe684,	// (0x0007f2f9) list_double_fisheye_pane_g1

0xe690,	// (0x0007f305) list_double_fisheye_pane_g2_ParamLimits

0xe690,	// (0x0007f305) list_double_fisheye_pane_g2

0xa280,	// (0x0007aef5) list_double_fisheye_pane_g3_ParamLimits

0xa280,	// (0x0007aef5) list_double_fisheye_pane_g3

0x0004,

0xfc1f,	// (0x00080894) list_double_fisheye_pane_g_ParamLimits

0xfc1f,	// (0x00080894) list_double_fisheye_pane_g

0x3653,	// (0x000742c8) list_double_fisheye_pane_t1_ParamLimits

0x3653,	// (0x000742c8) list_double_fisheye_pane_t1

0x366e,	// (0x000742e3) list_double_fisheye_pane_t2_ParamLimits

0x366e,	// (0x000742e3) list_double_fisheye_pane_t2

0x0001,

0xfc2a,	// (0x0008089f) list_double_fisheye_pane_t_ParamLimits

0xfc2a,	// (0x0008089f) list_double_fisheye_pane_t

0x17c6,	// (0x0007243b) main_call5_pane

0x9e5a,	// (0x0007aacf) sc_swipe_pane_ParamLimits

0x9e5a,	// (0x0007aacf) sc_swipe_pane

0xa29f,	// (0x0007af14) call5_image_pane_ParamLimits

0xa29f,	// (0x0007af14) call5_image_pane

0xa2bc,	// (0x0007af31) call5_swipe_1_pane_ParamLimits

0xa2bc,	// (0x0007af31) call5_swipe_1_pane

0xa2cf,	// (0x0007af44) call5_swipe_2_pane_ParamLimits

0xa2cf,	// (0x0007af44) call5_swipe_2_pane

0xa2fa,	// (0x0007af6f) popup_call5_audio_first_window_ParamLimits

0xa2fa,	// (0x0007af6f) popup_call5_audio_first_window

0x1ec7,	// (0x00072b3c) call5_swipe_1_pane_g1_ParamLimits

0x1ec7,	// (0x00072b3c) call5_swipe_1_pane_g1

0xa30b,	// (0x0007af80) call5_swipe_1_pane_g2_ParamLimits

0xa30b,	// (0x0007af80) call5_swipe_1_pane_g2

0x0001,

0xfc2f,	// (0x000808a4) call5_swipe_1_pane_g_ParamLimits

0xfc2f,	// (0x000808a4) call5_swipe_1_pane_g

0xa317,	// (0x0007af8c) call5_swipe_1_pane_t1_ParamLimits

0xa317,	// (0x0007af8c) call5_swipe_1_pane_t1

0x1ec7,	// (0x00072b3c) call5_swipe_2_pane_g1_ParamLimits

0x1ec7,	// (0x00072b3c) call5_swipe_2_pane_g1

0xa32c,	// (0x0007afa1) call5_swipe_2_pane_g2_ParamLimits

0xa32c,	// (0x0007afa1) call5_swipe_2_pane_g2

0x0001,

0xfc34,	// (0x000808a9) call5_swipe_2_pane_g_ParamLimits

0xfc34,	// (0x000808a9) call5_swipe_2_pane_g

0xa338,	// (0x0007afad) call5_swipe_2_pane_t1_ParamLimits

0xa338,	// (0x0007afad) call5_swipe_2_pane_t1

0xa34d,	// (0x0007afc2) sc_swipe_pane_g1_ParamLimits

0xa34d,	// (0x0007afc2) sc_swipe_pane_g1

0xa35a,	// (0x0007afcf) sc_swipe_pane_g2_ParamLimits

0xa35a,	// (0x0007afcf) sc_swipe_pane_g2

0x0001,

0xfc39,	// (0x000808ae) sc_swipe_pane_g_ParamLimits

0xfc39,	// (0x000808ae) sc_swipe_pane_g

0xa366,	// (0x0007afdb) sc_swipe_pane_t1_ParamLimits

0xa366,	// (0x0007afdb) sc_swipe_pane_t1

0x17c6,	// (0x0007243b) main_cmail_launcher_pane

0xa37b,	// (0x0007aff0) aid_size_cell_cmail_l_ParamLimits

0xa37b,	// (0x0007aff0) aid_size_cell_cmail_l

0xa389,	// (0x0007affe) grid_cmail_l_pane_ParamLimits

0xa389,	// (0x0007affe) grid_cmail_l_pane

0xa3a3,	// (0x0007b018) cell_cmail_l_pane_ParamLimits

0xa3a3,	// (0x0007b018) cell_cmail_l_pane

0xa3bd,	// (0x0007b032) cell_cmail_l_pane_g1_ParamLimits

0xa3bd,	// (0x0007b032) cell_cmail_l_pane_g1

0xa3c9,	// (0x0007b03e) cell_cmail_l_pane_t1_ParamLimits

0xa3c9,	// (0x0007b03e) cell_cmail_l_pane_t1

0xa3df,	// (0x0007b054) cell_cmail_l_pane_t2_ParamLimits

0xa3df,	// (0x0007b054) cell_cmail_l_pane_t2

0x0001,

0xfc3e,	// (0x000808b3) cell_cmail_l_pane_t_ParamLimits

0xfc3e,	// (0x000808b3) cell_cmail_l_pane_t

0x1e6e,	// (0x00072ae3) grid_highlight_pane_cp018_ParamLimits

0x1e6e,	// (0x00072ae3) grid_highlight_pane_cp018

0x3b86,	// (0x000747fb) main2_pane_ParamLimits

0x3b86,	// (0x000747fb) main2_pane

0x1fc8,	// (0x00072c3d) popup_sp_fs_action_menu_bg_pane_g1

0x1fd0,	// (0x00072c45) popup_sp_fs_action_menu_bg_pane_g2

0x1fd8,	// (0x00072c4d) popup_sp_fs_action_menu_bg_pane_g3

0x1fe0,	// (0x00072c55) popup_sp_fs_action_menu_bg_pane_g4

0x1fe8,	// (0x00072c5d) popup_sp_fs_action_menu_bg_pane_g5

0x1ff0,	// (0x00072c65) popup_sp_fs_action_menu_bg_pane_g6

0x1ff8,	// (0x00072c6d) popup_sp_fs_action_menu_bg_pane_g7

0x2000,	// (0x00072c75) popup_sp_fs_action_menu_bg_pane_g8

0x2008,	// (0x00072c7d) popup_sp_fs_action_menu_bg_pane_g9

0x2010,	// (0x00072c85) popup_sp_fs_action_menu_bg_pane_g10

0x2010,	// (0x00072c85) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x0007fda0) popup_sp_fs_action_menu_bg_pane_g

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t3_g3_g1

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t3_g3_g2

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x0007fe4e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x0007fe4e) list_medium_line_x2_t3_g3_g

0x2127,	// (0x00072d9c) list_medium_line_x2_t3_g3_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t3_g3_t1

0x2127,	// (0x00072d9c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t3_g3_t2

0x2127,	// (0x00072d9c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x0007fe55) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x0007fe55) list_medium_line_x2_t3_g3_t

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t3_g2_g1

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x0007fe5c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x0007fe5c) list_medium_line_x2_t3_g2_g

0x2127,	// (0x00072d9c) list_medium_line_x2_t3_g2_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t3_g2_t1

0x2127,	// (0x00072d9c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t3_g2_t2

0x2127,	// (0x00072d9c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x0007fe55) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x0007fe55) list_medium_line_x2_t3_g2_t

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t4_g4_g1

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t4_g4_g2

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t4_g4_g3

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x0007fe61) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x0007fe61) list_medium_line_x2_t4_g4_g

0x2127,	// (0x00072d9c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t4_g4_t1

0x2127,	// (0x00072d9c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t4_g4_t2

0x2127,	// (0x00072d9c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t4_g4_t3

0x2127,	// (0x00072d9c) list_medium_line_x2_t4_g4_t4_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x0007fe6a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x0007fe6a) list_medium_line_x2_t4_g4_t

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t2_g4_g1

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t2_g4_g2

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t2_g4_g3

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x0007fe61) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x0007fe61) list_medium_line_x2_t2_g4_g

0x2127,	// (0x00072d9c) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t2_g4_t1

0x2127,	// (0x00072d9c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1bc,	// (0x0007fe31) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1bc,	// (0x0007fe31) list_medium_line_x2_t2_g4_t

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t2_g3_g1

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t2_g3_g2

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x0007fe4e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x0007fe4e) list_medium_line_x2_t2_g3_g

0x2127,	// (0x00072d9c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t2_g3_t1

0x2127,	// (0x00072d9c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1bc,	// (0x0007fe31) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1bc,	// (0x0007fe31) list_medium_line_x2_t2_g3_t

0x56cf,	// (0x00076344) main_sp_fs_list_pane_ParamLimits

0x56cf,	// (0x00076344) main_sp_fs_list_pane

0x179f,	// (0x00072414) sp_fs_scroll_pane_ParamLimits

0x179f,	// (0x00072414) sp_fs_scroll_pane

0xc629,	// (0x0007d29e) list_medium_line_x2_t3_t1

0xc629,	// (0x0007d29e) list_medium_line_x2_t3_t2

0xc629,	// (0x0007d29e) list_medium_line_x2_t3_t3

0x0002,

0xf2a2,	// (0x0007ff17) list_medium_line_x2_t3_t

0xc629,	// (0x0007d29e) list_medium_line_x3_t4_t1

0xc629,	// (0x0007d29e) list_medium_line_x3_t4_t2

0xc629,	// (0x0007d29e) list_medium_line_x3_t4_t3

0xc629,	// (0x0007d29e) list_medium_line_x3_t4_t4

0x0003,

0xf2a9,	// (0x0007ff1e) list_medium_line_x3_t4_t

0xc629,	// (0x0007d29e) list_medium_line_x4_t5_t1

0xc629,	// (0x0007d29e) list_medium_line_x4_t5_t2

0xc629,	// (0x0007d29e) list_medium_line_x4_t5_t3

0xc629,	// (0x0007d29e) list_medium_line_x4_t5_t4

0xc629,	// (0x0007d29e) list_medium_line_x4_t5_t5

0x0004,

0xf2b2,	// (0x0007ff27) list_medium_line_x4_t5_t

0x1ec7,	// (0x00072b3c) list_medium_line_t4_g4_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_t4_g4_g1

0x1ec7,	// (0x00072b3c) list_medium_line_t4_g4_g2_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_t4_g4_g2

0x1ec7,	// (0x00072b3c) list_medium_line_t4_g4_g3_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_t4_g4_g3

0x1ec7,	// (0x00072b3c) list_medium_line_t4_g4_g4_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x0007fe61) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x0007fe61) list_medium_line_t4_g4_g

0x2127,	// (0x00072d9c) list_medium_line_t4_g4_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t4_g4_t1

0x2127,	// (0x00072d9c) list_medium_line_t4_g4_t2_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t4_g4_t2

0x2127,	// (0x00072d9c) list_medium_line_t4_g4_t3_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t4_g4_t3

0x2127,	// (0x00072d9c) list_medium_line_t4_g4_t4_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x0007fe6a) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x0007fe6a) list_medium_line_t4_g4_t

0x5778,	// (0x000763ed) chi_dic_find_pane_g1

0x6579,	// (0x000771ee) main_tport_pane

0xc629,	// (0x0007d29e) list_medium_line_plain_t1

0x1ec7,	// (0x00072b3c) list_medium_line_t2_g2_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_t2_g2_g1

0x1ec7,	// (0x00072b3c) list_medium_line_t2_g2_g2_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x0007fe5c) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x0007fe5c) list_medium_line_t2_g2_g

0x2127,	// (0x00072d9c) list_medium_line_t2_g2_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t2_g2_t1

0x2127,	// (0x00072d9c) list_medium_line_t2_g2_t2_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t2_g2_t2

0x0001,

0xf1bc,	// (0x0007fe31) list_medium_line_t2_g2_t_ParamLimits

0xf1bc,	// (0x0007fe31) list_medium_line_t2_g2_t

0xe64f,	// (0x0007f2c4) aid_sp_fs_list_icon_a_sm

0xf032,	// (0x0007fca7) aid_sp_fs_list_icon_d

0xe657,	// (0x0007f2cc) aid_sp_fs_text_primary

0x122b,	// (0x00071ea0) aid_sp_fs_text_secondary

0x17c6,	// (0x0007243b) list_medium_line

0x17c6,	// (0x0007243b) list_medium_line_g2

0x17c6,	// (0x0007243b) list_medium_line_g3

0x17c6,	// (0x0007243b) list_medium_line_plain

0x17c6,	// (0x0007243b) list_medium_line_plain_t2

0x17c6,	// (0x0007243b) list_medium_line_plain_t3

0x17c6,	// (0x0007243b) list_medium_line_right_icon

0x17c6,	// (0x0007243b) list_medium_line_right_iconx2

0x17c6,	// (0x0007243b) list_medium_line_t2

0x17c6,	// (0x0007243b) list_medium_line_t2_g2

0x17c6,	// (0x0007243b) list_medium_line_t2_g3

0x17c6,	// (0x0007243b) list_medium_line_t2_right_icon

0x17c6,	// (0x0007243b) list_medium_line_t2_right_iconx2

0x17c6,	// (0x0007243b) list_medium_line_t3

0x17c6,	// (0x0007243b) list_medium_line_t3_g2

0x17c6,	// (0x0007243b) list_medium_line_t3_g3

0x17c6,	// (0x0007243b) list_medium_line_t3_right_iconx2

0x17c6,	// (0x0007243b) list_medium_line_t4_g4

0x17c6,	// (0x0007243b) list_medium_line_x2

0x17c6,	// (0x0007243b) list_medium_line_x2_t2_g2

0x17c6,	// (0x0007243b) list_medium_line_x2_t2_g3

0x17c6,	// (0x0007243b) list_medium_line_x2_t2_g4

0x17c6,	// (0x0007243b) list_medium_line_x2_t3

0x17c6,	// (0x0007243b) list_medium_line_x2_t3_g2

0x17c6,	// (0x0007243b) list_medium_line_x2_t3_g3

0x17c6,	// (0x0007243b) list_medium_line_x2_t3_g4

0x17c6,	// (0x0007243b) list_medium_line_x2_t4_g2

0x17c6,	// (0x0007243b) list_medium_line_x2_t4_g4

0x17c6,	// (0x0007243b) list_medium_line_x3

0x17c6,	// (0x0007243b) list_medium_line_x3_t4

0x17c6,	// (0x0007243b) list_medium_line_x3_t4_g4

0x17c6,	// (0x0007243b) list_medium_line_x4_t4

0x17c6,	// (0x0007243b) list_medium_line_x4_t4_g7

0x17c6,	// (0x0007243b) list_medium_line_x4_t5

0x3622,	// (0x00074297) list_single_fs_dyc_pane_ParamLimits

0x3622,	// (0x00074297) list_single_fs_dyc_pane

0x1ec7,	// (0x00072b3c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x4_t4_g7_g1

0x1ec7,	// (0x00072b3c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x4_t4_g7_g2

0x1ec7,	// (0x00072b3c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x4_t4_g7_g3

0x1ec7,	// (0x00072b3c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x4_t4_g7_g4

0x1ec7,	// (0x00072b3c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x4_t4_g7_g5

0x1ec7,	// (0x00072b3c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x4_t4_g7_g6

0x1ed5,	// (0x00072b4a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1ed5,	// (0x00072b4a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb46,	// (0x000807bb) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb46,	// (0x000807bb) list_medium_line_x4_t4_g7_g

0x2127,	// (0x00072d9c) list_medium_line_x4_t4_g7_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x4_t4_g7_t1

0x2127,	// (0x00072d9c) list_medium_line_x4_t4_g7_t2_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x4_t4_g7_t2

0x2127,	// (0x00072d9c) list_medium_line_x4_t4_g7_t3_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x4_t4_g7_t3

0x24c4,	// (0x00073139) list_medium_line_x4_t4_g7_t4_ParamLimits

0x24c4,	// (0x00073139) list_medium_line_x4_t4_g7_t4

0x24c4,	// (0x00073139) list_medium_line_x4_t4_g7_t5_ParamLimits

0x24c4,	// (0x00073139) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb55,	// (0x000807ca) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb55,	// (0x000807ca) list_medium_line_x4_t4_g7_t

0x3636,	// (0x000742ab) list_single_dyc_row_pane_ParamLimits

0x3636,	// (0x000742ab) list_single_dyc_row_pane

0xa28c,	// (0x0007af01) call5_gesture_pane_ParamLimits

0xa28c,	// (0x0007af01) call5_gesture_pane

0xa2e2,	// (0x0007af57) call5_windows_pane_ParamLimits

0xa2e2,	// (0x0007af57) call5_windows_pane

0xa3fc,	// (0x0007b071) call5_swipe_1_pane_cp_ParamLimits

0xa3fc,	// (0x0007b071) call5_swipe_1_pane_cp

0xa408,	// (0x0007b07d) call5_swipe_2_pane_cp_ParamLimits

0xa408,	// (0x0007b07d) call5_swipe_2_pane_cp

0x20eb,	// (0x00072d60) call5_image_pane_cp

0xa414,	// (0x0007b089) popup_call5_audio_first_window_cp_ParamLimits

0xa414,	// (0x0007b089) popup_call5_audio_first_window_cp

0xa34d,	// (0x0007afc2) call5_swipe_1_pane_g1_cp_ParamLimits

0xa34d,	// (0x0007afc2) call5_swipe_1_pane_g1_cp

0xa422,	// (0x0007b097) call5_swipe_1_pane_g2_cp

0xa366,	// (0x0007afdb) call5_swipe_1_pane_t1_cp_ParamLimits

0xa366,	// (0x0007afdb) call5_swipe_1_pane_t1_cp

0xa34d,	// (0x0007afc2) call5_swipe_2_pane_g1_cp_ParamLimits

0xa34d,	// (0x0007afc2) call5_swipe_2_pane_g1_cp

0xa42a,	// (0x0007b09f) call5_swipe_2_pane_g2_cp

0xa432,	// (0x0007b0a7) call5_swipe_2_pane_t1_cp_ParamLimits

0xa432,	// (0x0007b0a7) call5_swipe_2_pane_t1_cp

0x1e6e,	// (0x00072ae3) main_sp_fs_email_pane

0xa447,	// (0x0007b0bc) main_sp_fs_listscroll_pane_te

0xa450,	// (0x0007b0c5) popup_sp_fs_action_menu_pane_ParamLimits

0xa450,	// (0x0007b0c5) popup_sp_fs_action_menu_pane

0x210d,	// (0x00072d82) bg_sp_fs_ctrlbar_pane_g1

0xa492,	// (0x0007b107) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xa49b,	// (0x0007b110) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xdf70,	// (0x0007ebe5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x210d,	// (0x00072d82) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc43,	// (0x000808b8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe110,	// (0x0007ed85) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe110,	// (0x0007ed85) bg_sp_fs_ctrlbar_ddmenu_pane

0xa4a4,	// (0x0007b119) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xa4a4,	// (0x0007b119) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xa4b0,	// (0x0007b125) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xa4b0,	// (0x0007b125) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc4c,	// (0x000808c1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc4c,	// (0x000808c1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xa4bc,	// (0x0007b131) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xa4bc,	// (0x0007b131) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x210d,	// (0x00072d82) list_medium_line_t2_right_icon_g1

0xc629,	// (0x0007d29e) list_medium_line_t2_right_icon_t1

0xc629,	// (0x0007d29e) list_medium_line_t2_right_icon_t2

0x0001,

0xfc51,	// (0x000808c6) list_medium_line_t2_right_icon_t

0xcc25,	// (0x0007d89a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xcc25,	// (0x0007d89a) bg_sp_fs_ctrlbar_pane

0xa556,	// (0x0007b1cb) main_sp_fs_ctrlbar_button_pane_cp01

0xa560,	// (0x0007b1d5) main_sp_fs_ctrlbar_ddmenu_pane

0xa56a,	// (0x0007b1df) main_sp_fs_ctrlbar_pane_g1

0xa576,	// (0x0007b1eb) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc56,	// (0x000808cb) main_sp_fs_ctrlbar_pane_g

0xa5b6,	// (0x0007b22b) main_sp_fs_ctrlbar_pane_t1

0xa5f5,	// (0x0007b26a) main_sp_fs_ctrlbar_pane

0xa634,	// (0x0007b2a9) main_sp_fs_listscroll_pane_te_cp01

0x3690,	// (0x00074305) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x3690,	// (0x00074305) popup_sp_fs_action_menu_pane_cp01

0x1e6e,	// (0x00072ae3) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1e6e,	// (0x00072ae3) bg_sp_fs_highlight_list_pane_cp01

0xe6c1,	// (0x0007f336) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe6c1,	// (0x0007f336) sp_fs_action_menu_list_gene_pane_g1

0xa654,	// (0x0007b2c9) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xa654,	// (0x0007b2c9) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc64,	// (0x000808d9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc64,	// (0x000808d9) sp_fs_action_menu_list_gene_pane_g

0xe6d0,	// (0x0007f345) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe6d0,	// (0x0007f345) sp_fs_action_menu_list_gene_pane_t1

0xe6e8,	// (0x0007f35d) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe6e8,	// (0x0007f35d) sp_fs_action_menu_list_gene_pane

0xa661,	// (0x0007b2d6) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xa661,	// (0x0007b2d6) popup_sp_fs_action_menu_bg_pane

0xe707,	// (0x0007f37c) sp_fs_action_menu_list_pane_ParamLimits

0xe707,	// (0x0007f37c) sp_fs_action_menu_list_pane

0x36b5,	// (0x0007432a) sp_fs_scroll_pane_cp01_ParamLimits

0x36b5,	// (0x0007432a) sp_fs_scroll_pane_cp01

0xc629,	// (0x0007d29e) list_medium_line_plain_t2_t1

0xc629,	// (0x0007d29e) list_medium_line_plain_t2_t2

0x0001,

0xfc51,	// (0x000808c6) list_medium_line_plain_t2_t

0xc629,	// (0x0007d29e) list_medium_line_plain_t3_t1

0xc629,	// (0x0007d29e) list_medium_line_plain_t3_t2

0xc629,	// (0x0007d29e) list_medium_line_plain_t3_t3

0x0002,

0xf2a2,	// (0x0007ff17) list_medium_line_plain_t3_t

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t2_g2_g1

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x0007fe5c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x0007fe5c) list_medium_line_x2_t2_g2_g

0x2127,	// (0x00072d9c) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t2_g2_t1

0x2127,	// (0x00072d9c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1bc,	// (0x0007fe31) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1bc,	// (0x0007fe31) list_medium_line_x2_t2_g2_t

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t4_g2_g1

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x0007fe5c) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x0007fe5c) list_medium_line_x2_t4_g2_g

0x2127,	// (0x00072d9c) list_medium_line_x2_t4_g2_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t4_g2_t1

0x2127,	// (0x00072d9c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t4_g2_t2

0x2127,	// (0x00072d9c) list_medium_line_x2_t4_g2_t3_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t4_g2_t3

0x2127,	// (0x00072d9c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x0007fe6a) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x0007fe6a) list_medium_line_x2_t4_g2_t

0x210d,	// (0x00072d82) list_medium_line_t3_right_iconx2_g1

0x210d,	// (0x00072d82) list_medium_line_t3_right_iconx2_g2

0x210d,	// (0x00072d82) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c3,	// (0x00080038) list_medium_line_t3_right_iconx2_g

0xc629,	// (0x0007d29e) list_medium_line_t3_right_iconx2_t1

0xc629,	// (0x0007d29e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc51,	// (0x000808c6) list_medium_line_t3_right_iconx2_t

0x1ec7,	// (0x00072b3c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x3_t4_g4_g1

0x1ec7,	// (0x00072b3c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x3_t4_g4_g2

0x1ec7,	// (0x00072b3c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x3_t4_g4_g3

0x1ec7,	// (0x00072b3c) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x0007fe61) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x0007fe61) list_medium_line_x3_t4_g4_g

0x2127,	// (0x00072d9c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x3_t4_g4_t1

0x2127,	// (0x00072d9c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x3_t4_g4_t2

0x2127,	// (0x00072d9c) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x3_t4_g4_t3

0x2127,	// (0x00072d9c) list_medium_line_x3_t4_g4_t4_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x0007fe6a) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x0007fe6a) list_medium_line_x3_t4_g4_t

0x36db,	// (0x00074350) list_single_dyc_row_text_pane_t1_ParamLimits

0x36db,	// (0x00074350) list_single_dyc_row_text_pane_t1

0x3724,	// (0x00074399) list_single_dyc_row_text_pane_t2_ParamLimits

0x3724,	// (0x00074399) list_single_dyc_row_text_pane_t2

0xe727,	// (0x0007f39c) list_single_dyc_row_text_pane_t3_ParamLimits

0xe727,	// (0x0007f39c) list_single_dyc_row_text_pane_t3

0x0005,

0xfc69,	// (0x000808de) list_single_dyc_row_text_pane_t_ParamLimits

0xfc69,	// (0x000808de) list_single_dyc_row_text_pane_t

0xe74b,	// (0x0007f3c0) list_single_dyc_row_pane_g1_ParamLimits

0xe74b,	// (0x0007f3c0) list_single_dyc_row_pane_g1

0xe757,	// (0x0007f3cc) list_single_dyc_row_pane_g2_ParamLimits

0xe757,	// (0x0007f3cc) list_single_dyc_row_pane_g2

0xe763,	// (0x0007f3d8) list_single_dyc_row_pane_g3_ParamLimits

0xe763,	// (0x0007f3d8) list_single_dyc_row_pane_g3

0xe76f,	// (0x0007f3e4) list_single_dyc_row_pane_g4_ParamLimits

0xe76f,	// (0x0007f3e4) list_single_dyc_row_pane_g4

0x0003,

0xfc76,	// (0x000808eb) list_single_dyc_row_pane_g_ParamLimits

0xfc76,	// (0x000808eb) list_single_dyc_row_pane_g

0xe77b,	// (0x0007f3f0) list_single_dyc_row_text_pane_ParamLimits

0xe77b,	// (0x0007f3f0) list_single_dyc_row_text_pane

0x17c6,	// (0x0007243b) bg_sp_fs_scroll_pane

0xa66f,	// (0x0007b2e4) thumb_sp_fs_scroll_pane

0x1ec7,	// (0x00072b3c) list_medium_line_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_g1

0x2127,	// (0x00072d9c) list_medium_line_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t1

0x1ec7,	// (0x00072b3c) list_medium_line_x2_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_g1

0x1ec7,	// (0x00072b3c) list_medium_line_x2_g2_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x0007fe5c) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x0007fe5c) list_medium_line_x2_g

0x2127,	// (0x00072d9c) list_medium_line_x2_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t1

0x1ec7,	// (0x00072b3c) list_medium_line_x3_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x3_g1

0x1791,	// (0x00072406) list_medium_line_x3_g2_ParamLimits

0x1791,	// (0x00072406) list_medium_line_x3_g2

0x0001,

0xfc7f,	// (0x000808f4) list_medium_line_x3_g_ParamLimits

0xfc7f,	// (0x000808f4) list_medium_line_x3_g

0xa678,	// (0x0007b2ed) list_medium_line_x3_t1_ParamLimits

0xa678,	// (0x0007b2ed) list_medium_line_x3_t1

0xa68c,	// (0x0007b301) thumb_sp_fs_scroll_pane_g1

0xa695,	// (0x0007b30a) thumb_sp_fs_scroll_pane_g2

0xa69e,	// (0x0007b313) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc84,	// (0x000808f9) thumb_sp_fs_scroll_pane_g

0xa68c,	// (0x0007b301) bg_sp_fs_scroll_pane_g1

0xa695,	// (0x0007b30a) bg_sp_fs_scroll_pane_g2

0xa69e,	// (0x0007b313) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc84,	// (0x000808f9) bg_sp_fs_scroll_pane_g

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t3_g4_g1

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t3_g4_g2

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t3_g4_g3

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x0007fe61) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x0007fe61) list_medium_line_x2_t3_g4_g

0x2127,	// (0x00072d9c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t3_g4_t1

0x2127,	// (0x00072d9c) list_medium_line_x2_t3_g4_t2_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t3_g4_t2

0x2127,	// (0x00072d9c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x0007fe55) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x0007fe55) list_medium_line_x2_t3_g4_t

0x1ec7,	// (0x00072b3c) list_medium_line_g2_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_g2_g1

0x1ec7,	// (0x00072b3c) list_medium_line_g2_g2_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x0007fe5c) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x0007fe5c) list_medium_line_g2_g

0x2127,	// (0x00072d9c) list_medium_line_g2_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_g2_t1

0x1ec7,	// (0x00072b3c) list_medium_line_t3_g2_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_t3_g2_g1

0x1ec7,	// (0x00072b3c) list_medium_line_t3_g2_g2_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x0007fe5c) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x0007fe5c) list_medium_line_t3_g2_g

0x2127,	// (0x00072d9c) list_medium_line_t3_g2_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t3_g2_t1

0x2127,	// (0x00072d9c) list_medium_line_t3_g2_t2_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t3_g2_t2

0x2127,	// (0x00072d9c) list_medium_line_t3_g2_t3_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x0007fe55) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x0007fe55) list_medium_line_t3_g2_t

0x210d,	// (0x00072d82) list_medium_line_right_icon_g1

0xc629,	// (0x0007d29e) list_medium_line_right_icon_t1

0x1ec7,	// (0x00072b3c) list_medium_line_t2_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_t2_g1

0x2127,	// (0x00072d9c) list_medium_line_t2_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t2_t1

0x2127,	// (0x00072d9c) list_medium_line_t2_t2_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t2_t2

0x0001,

0xf1bc,	// (0x0007fe31) list_medium_line_t2_t_ParamLimits

0xf1bc,	// (0x0007fe31) list_medium_line_t2_t

0x1ec7,	// (0x00072b3c) list_medium_line_t3_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_t3_g1

0x2127,	// (0x00072d9c) list_medium_line_t3_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t3_t1

0x2127,	// (0x00072d9c) list_medium_line_t3_t2_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t3_t2

0x2127,	// (0x00072d9c) list_medium_line_t3_t3_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x0007fe55) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x0007fe55) list_medium_line_t3_t

0x1ec7,	// (0x00072b3c) list_medium_line_g3_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_g3_g1

0x1ec7,	// (0x00072b3c) list_medium_line_g3_g2_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_g3_g2

0x1ec7,	// (0x00072b3c) list_medium_line_g3_g3_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x0007fe4e) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x0007fe4e) list_medium_line_g3_g

0x2127,	// (0x00072d9c) list_medium_line_g3_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_g3_t1

0x1ec7,	// (0x00072b3c) list_medium_line_t2_g3_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_t2_g3_g1

0x1ec7,	// (0x00072b3c) list_medium_line_t2_g3_g2_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_t2_g3_g2

0x1ec7,	// (0x00072b3c) list_medium_line_t2_g3_g3_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x0007fe4e) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x0007fe4e) list_medium_line_t2_g3_g

0x2127,	// (0x00072d9c) list_medium_line_t2_g3_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t2_g3_t1

0x2127,	// (0x00072d9c) list_medium_line_t2_g3_t2_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t2_g3_t2

0x0001,

0xf1bc,	// (0x0007fe31) list_medium_line_t2_g3_t_ParamLimits

0xf1bc,	// (0x0007fe31) list_medium_line_t2_g3_t

0x1ec7,	// (0x00072b3c) list_medium_line_t3_g3_g1_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_t3_g3_g1

0x1ec7,	// (0x00072b3c) list_medium_line_t3_g3_g2_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_t3_g3_g2

0x1ec7,	// (0x00072b3c) list_medium_line_t3_g3_g3_ParamLimits

0x1ec7,	// (0x00072b3c) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x0007fe4e) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x0007fe4e) list_medium_line_t3_g3_g

0x2127,	// (0x00072d9c) list_medium_line_t3_g3_t1_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t3_g3_t1

0x2127,	// (0x00072d9c) list_medium_line_t3_g3_t2_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t3_g3_t2

0x2127,	// (0x00072d9c) list_medium_line_t3_g3_t3_ParamLimits

0x2127,	// (0x00072d9c) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x0007fe55) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x0007fe55) list_medium_line_t3_g3_t

0x210d,	// (0x00072d82) list_medium_line_right_iconx2_g1

0x210d,	// (0x00072d82) list_medium_line_right_iconx2_g2

0x0001,

0xf3be,	// (0x00080033) list_medium_line_right_iconx2_g

0xc629,	// (0x0007d29e) list_medium_line_right_iconx2_t1

0x210d,	// (0x00072d82) list_medium_line_t2_right_iconx2_g1

0x210d,	// (0x00072d82) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3be,	// (0x00080033) list_medium_line_t2_right_iconx2_g

0xc629,	// (0x0007d29e) list_medium_line_t2_right_iconx2_t1

0xc629,	// (0x0007d29e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc51,	// (0x000808c6) list_medium_line_t2_right_iconx2_t

0xc629,	// (0x0007d29e) list_medium_line_x4_t4_t1

0xc629,	// (0x0007d29e) list_medium_line_x4_t4_t2

0xc629,	// (0x0007d29e) list_medium_line_x4_t4_t3

0xc629,	// (0x0007d29e) list_medium_line_x4_t4_t4

0x0003,

0xf2a9,	// (0x0007ff1e) list_medium_line_x4_t4_t

0xa6ea,	// (0x0007b35f) tport_appsw_pane_ParamLimits

0xa6ea,	// (0x0007b35f) tport_appsw_pane

0xa702,	// (0x0007b377) tport_contact_pane_ParamLimits

0xa702,	// (0x0007b377) tport_contact_pane

0xa71a,	// (0x0007b38f) tport_listscroll_pane_ParamLimits

0xa71a,	// (0x0007b38f) tport_listscroll_pane

0xa734,	// (0x0007b3a9) cell_tport_appsw_pane_ParamLimits

0xa734,	// (0x0007b3a9) cell_tport_appsw_pane

0x015e,	// (0x00070dd3) tport_appsw_pane_g1_ParamLimits

0x015e,	// (0x00070dd3) tport_appsw_pane_g1

0xa774,	// (0x0007b3e9) tport_contact_pane_g1

0xa77d,	// (0x0007b3f2) tport_contact_pane_t1

0xa78b,	// (0x0007b400) tport_contact_pane_t2

0x0001,

0xfc8b,	// (0x00080900) tport_contact_pane_t

0xa799,	// (0x0007b40e) list_tport_pane

0xa7a2,	// (0x0007b417) scroll_pane_cp_030

0xa7b3,	// (0x0007b428) cell_tport_appsw_pane_g1

0xa7c3,	// (0x0007b438) cell_tport_appsw_pane_t1

0xa7d1,	// (0x0007b446) grid_highlight_pane_cp019

0xa7d9,	// (0x0007b44e) list_tport_double_graphic_pane_ParamLimits

0xa7d9,	// (0x0007b44e) list_tport_double_graphic_pane

0x1e6e,	// (0x00072ae3) list_highlight_pane_cp023_ParamLimits

0x1e6e,	// (0x00072ae3) list_highlight_pane_cp023

0xa7e6,	// (0x0007b45b) list_tport_double_graphic_pane_g1_ParamLimits

0xa7e6,	// (0x0007b45b) list_tport_double_graphic_pane_g1

0xa7f3,	// (0x0007b468) list_tport_double_graphic_pane_t1_ParamLimits

0xa7f3,	// (0x0007b468) list_tport_double_graphic_pane_t1

0xa808,	// (0x0007b47d) list_tport_double_graphic_pane_t2_ParamLimits

0xa808,	// (0x0007b47d) list_tport_double_graphic_pane_t2

0x0001,

0xfc97,	// (0x0008090c) list_tport_double_graphic_pane_t_ParamLimits

0xfc97,	// (0x0008090c) list_tport_double_graphic_pane_t

0x17c6,	// (0x0007243b) main_cale_note_pane

0x82dc,	// (0x00078f51) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x82dc,	// (0x00078f51) cell_vitu2_function_top_wide_pane_cp01

0x9cd1,	// (0x0007a946) wait_bar_pane_cp05_ParamLimits

0x1e6e,	// (0x00072ae3) listscroll_cmail_pane

0xa81a,	// (0x0007b48f) list_cmail_pane

0xa82a,	// (0x0007b49f) list_cmail_body_pane

0xa840,	// (0x0007b4b5) list_single_cmail_header_caption_pane

0xa857,	// (0x0007b4cc) list_single_cmail_header_detail_pane_ParamLimits

0xa857,	// (0x0007b4cc) list_single_cmail_header_detail_pane

0xa881,	// (0x0007b4f6) list_single_cmail_header_caption_pane_t1

0x3859,	// (0x000744ce) list_single_cmail_header_detail_pane_g1_ParamLimits

0x3859,	// (0x000744ce) list_single_cmail_header_detail_pane_g1

0xf050,	// (0x0007fcc5) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf050,	// (0x0007fcc5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc9c,	// (0x00080911) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc9c,	// (0x00080911) list_single_cmail_header_detail_pane_g

0xe79a,	// (0x0007f40f) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe79a,	// (0x0007f40f) list_single_cmail_header_detail_pane_t1

0xe7fa,	// (0x0007f46f) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe7fa,	// (0x0007f46f) list_single_cmail_header_editor_pane_bg

0x9b3d,	// (0x0007a7b2) list_cmail_body_pane_g1

0xa8a5,	// (0x0007b51a) list_cmail_body_pane_t1

0x0d73,	// (0x000719e8) list_single_cmail_header_editor_pane_bg_g1

0x2332,	// (0x00072fa7) list_single_cmail_header_editor_pane_bg_g1_copy1

0x0d83,	// (0x000719f8) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0d7b,	// (0x000719f0) list_single_cmail_header_editor_pane_bg_g1_copy3

0x0fb3,	// (0x00071c28) list_single_cmail_header_editor_pane_bg_g1_copy4

0x0da3,	// (0x00071a18) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x0d93,	// (0x00071a08) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0d9b,	// (0x00071a10) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2312,	// (0x00072f87) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa8b3,	// (0x0007b528) calenote_gesture_pane_ParamLimits

0xa8b3,	// (0x0007b528) calenote_gesture_pane

0xa8d3,	// (0x0007b548) calenote_window_pane_ParamLimits

0xa8d3,	// (0x0007b548) calenote_window_pane

0xa8ef,	// (0x0007b564) popup_note_window_cp01

0xa8f8,	// (0x0007b56d) calenote_swipe_1_pane_ParamLimits

0xa8f8,	// (0x0007b56d) calenote_swipe_1_pane

0xa408,	// (0x0007b07d) calenote_swipe_2_pane_ParamLimits

0xa408,	// (0x0007b07d) calenote_swipe_2_pane

0xa34d,	// (0x0007afc2) calenote_swipe_1_pane_g1_ParamLimits

0xa34d,	// (0x0007afc2) calenote_swipe_1_pane_g1

0xa35a,	// (0x0007afcf) calenote_swipe_1_pane_g2_ParamLimits

0xa35a,	// (0x0007afcf) calenote_swipe_1_pane_g2

0x0001,

0xfc39,	// (0x000808ae) calenote_swipe_1_pane_g_ParamLimits

0xfc39,	// (0x000808ae) calenote_swipe_1_pane_g

0xa916,	// (0x0007b58b) calenote_swipe_1_pane_t1_ParamLimits

0xa916,	// (0x0007b58b) calenote_swipe_1_pane_t1

0xa34d,	// (0x0007afc2) calenote_swipe_2_pane_g1_ParamLimits

0xa34d,	// (0x0007afc2) calenote_swipe_2_pane_g1

0xa935,	// (0x0007b5aa) calenote_swipe_2_pane_g2_ParamLimits

0xa935,	// (0x0007b5aa) calenote_swipe_2_pane_g2

0x0001,

0xfca8,	// (0x0008091d) calenote_swipe_2_pane_g_ParamLimits

0xfca8,	// (0x0008091d) calenote_swipe_2_pane_g

0xa941,	// (0x0007b5b6) calenote_swipe_2_pane_t1_ParamLimits

0xa941,	// (0x0007b5b6) calenote_swipe_2_pane_t1

0x17c6,	// (0x0007243b) main_mup_navstr_pane

0x7179,	// (0x00077dee) main_mup3_pane_t7_ParamLimits

0x7179,	// (0x00077dee) main_mup3_pane_t7

0xe295,	// (0x0007ef0a) main_mp4_pane_g6_ParamLimits

0xe295,	// (0x0007ef0a) main_mp4_pane_g6

0xe457,	// (0x0007f0cc) main_image3_pane_t4_ParamLimits

0xe457,	// (0x0007f0cc) main_image3_pane_t4

0xa968,	// (0x0007b5dd) popup_navstr_preview_pane_ParamLimits

0xa968,	// (0x0007b5dd) popup_navstr_preview_pane

0xa97c,	// (0x0007b5f1) scroll_navstr_pane_ParamLimits

0xa97c,	// (0x0007b5f1) scroll_navstr_pane

0x17c6,	// (0x0007243b) bg_popup_preview_window_pane_cp04

0xa990,	// (0x0007b605) popup_navstr_preview_pane_t1

0xa99e,	// (0x0007b613) scroll_navstr_pane_g1_ParamLimits

0xa99e,	// (0x0007b613) scroll_navstr_pane_g1

0xa9b2,	// (0x0007b627) scroll_navstr_pane_t1_ParamLimits

0xa9b2,	// (0x0007b627) scroll_navstr_pane_t1

0xa90d,	// (0x0007b582) bg_button_pane_cp014

0xa90d,	// (0x0007b582) bg_button_pane_cp030

0xe6a4,	// (0x0007f319) list_double_fisheye_pane_g4_ParamLimits

0xe6a4,	// (0x0007f319) list_double_fisheye_pane_g4

0xe6b0,	// (0x0007f325) list_double_fisheye_pane_g5_ParamLimits

0xe6b0,	// (0x0007f325) list_double_fisheye_pane_g5

0x179f,	// (0x00072414) sp_fs_scroll_pane_cp03

0xa56a,	// (0x0007b1df) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xa576,	// (0x0007b1eb) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc56,	// (0x000808cb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xa5b6,	// (0x0007b22b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa822,	// (0x0007b497) sp_fs_scroll_pane_cp02

0x2033,	// (0x00072ca8) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2033,	// (0x00072ca8) popup_sp_fs_calendar_preview_list_single_pane

0x17c6,	// (0x0007243b) main_cam6_pano_pane

0x1e6e,	// (0x00072ae3) main_mup3_pane_ParamLimits

0x17c6,	// (0x0007243b) main_phacti_pane

0x9ba4,	// (0x0007a819) bg_button_pane_cp11

0x9bbe,	// (0x0007a833) main_mobtv_info_pane_g2_ParamLimits

0x9bbe,	// (0x0007a833) main_mobtv_info_pane_g2

0x0001,

0xfbb6,	// (0x0008082b) main_mobtv_info_pane_g_ParamLimits

0xfbb6,	// (0x0008082b) main_mobtv_info_pane_g

0x9e41,	// (0x0007aab6) sc_clock_pane_t5_ParamLimits

0x9e41,	// (0x0007aab6) sc_clock_pane_t5

0xa066,	// (0x0007acdb) main_radioblah_pane_g1_ParamLimits

0xa0ac,	// (0x0007ad21) main_radioblah_pane_t3_ParamLimits

0xa0ac,	// (0x0007ad21) main_radioblah_pane_t3

0xa0c4,	// (0x0007ad39) main_radioblah_pane_t4_ParamLimits

0xa0c4,	// (0x0007ad39) main_radioblah_pane_t4

0xa0f2,	// (0x0007ad67) main_radioblah_text_pane_ParamLimits

0xa0f2,	// (0x0007ad67) main_radioblah_text_pane

0xa104,	// (0x0007ad79) main_radioblah_info_pane_g1_ParamLimits

0xa1d7,	// (0x0007ae4c) main_radioblah_info_pane_t4_ParamLimits

0xa1d7,	// (0x0007ae4c) main_radioblah_info_pane_t4

0x1e6e,	// (0x00072ae3) main_sp_fs_calendar_pane

0xa9c9,	// (0x0007b63e) main_phacti_pane_g1

0xa9da,	// (0x0007b64f) phacti_note_pane_ParamLimits

0xa9da,	// (0x0007b64f) phacti_note_pane

0xa9ee,	// (0x0007b663) phacti_term_pane_ParamLimits

0xa9ee,	// (0x0007b663) phacti_term_pane

0xaa03,	// (0x0007b678) phacti_note_pane_t1_ParamLimits

0xaa03,	// (0x0007b678) phacti_note_pane_t1

0xe811,	// (0x0007f486) phacti_term_pane_g1

0xe819,	// (0x0007f48e) phacti_term_pane_t1_ParamLimits

0xe819,	// (0x0007f48e) phacti_term_pane_t1

0xaa1a,	// (0x0007b68f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaa22,	// (0x0007b697) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb2,	// (0x00080927) popup_sp_fs_calendar_preview_list_single_pane_g

0xaa2a,	// (0x0007b69f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xaa2a,	// (0x0007b69f) popup_sp_fs_calendar_preview_list_single_pane_t1

0xaa40,	// (0x0007b6b5) aid_popup_sp_fs_bg_corner_pane

0x210d,	// (0x00072d82) popup_sp_fs_calendar_preview_bg_pane_g1

0x17c6,	// (0x0007243b) popup_sp_fs_calendar_preview_bg_pane

0xaa48,	// (0x0007b6bd) popup_sp_fs_calendar_preview_list_pane

0xcc25,	// (0x0007d89a) bg_main_sp_fs_cale_pane_ParamLimits

0xcc25,	// (0x0007d89a) bg_main_sp_fs_cale_pane

0xe84c,	// (0x0007f4c1) listscroll_cale_mrui_pane_ParamLimits

0xe84c,	// (0x0007f4c1) listscroll_cale_mrui_pane

0xe861,	// (0x0007f4d6) listscroll_sp_fs_schedule_track_pane

0xe86a,	// (0x0007f4df) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe86a,	// (0x0007f4df) main_sp_fs_ctrlbar_pane_cp01

0xaab1,	// (0x0007b726) main_sp_fs_ribbon_pane

0xe87d,	// (0x0007f4f2) popup_sp_fs_cale_preview_window

0xaab9,	// (0x0007b72e) list_single_sp_fs_schedule_track_pane_ParamLimits

0xaab9,	// (0x0007b72e) list_single_sp_fs_schedule_track_pane

0x1e6e,	// (0x00072ae3) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1e6e,	// (0x00072ae3) bg_sp_fs_highlight_list_pane_cp03

0xaacd,	// (0x0007b742) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xaacd,	// (0x0007b742) list_single_sp_fs_schedule_track_pane_g1

0xaad9,	// (0x0007b74e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xaad9,	// (0x0007b74e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcb7,	// (0x0008092c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcb7,	// (0x0008092c) list_single_sp_fs_schedule_track_pane_g

0xaae5,	// (0x0007b75a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xaae5,	// (0x0007b75a) list_single_sp_fs_schedule_track_pane_t1

0xaaff,	// (0x0007b774) sp_fs_schedule_track_pane_ParamLimits

0xaaff,	// (0x0007b774) sp_fs_schedule_track_pane

0xab10,	// (0x0007b785) sp_fs_schedule_track_pane_g1

0xab18,	// (0x0007b78d) sp_fs_schedule_track_pane_g2

0xab20,	// (0x0007b795) sp_fs_schedule_track_pane_g3

0xab28,	// (0x0007b79d) sp_fs_schedule_track_pane_g4

0xab30,	// (0x0007b7a5) sp_fs_schedule_track_pane_g5

0x0004,

0xfcbc,	// (0x00080931) sp_fs_schedule_track_pane_g

0x0d73,	// (0x000719e8) bg_sp_fs_schedule_viewer_highlight_g1

0x2332,	// (0x00072fa7) bg_sp_fs_schedule_viewer_highlight_g2

0x0d7b,	// (0x000719f0) bg_sp_fs_schedule_viewer_highlight_g3

0x0d83,	// (0x000719f8) bg_sp_fs_schedule_viewer_highlight_g4

0x0fb3,	// (0x00071c28) bg_sp_fs_schedule_viewer_highlight_g5

0x0d93,	// (0x00071a08) bg_sp_fs_schedule_viewer_highlight_g6

0x0d9b,	// (0x00071a10) bg_sp_fs_schedule_viewer_highlight_g7

0x0da3,	// (0x00071a18) bg_sp_fs_schedule_viewer_highlight_g8

0x2312,	// (0x00072f87) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcc7,	// (0x0008093c) bg_sp_fs_schedule_viewer_highlight_g

0x17c6,	// (0x0007243b) bg_main_sp_fs_ribbon_pane

0xab38,	// (0x0007b7ad) main_sp_fs_ribbon_pane_g1

0xab41,	// (0x0007b7b6) main_sp_fs_ribbon_pane_t1

0xab50,	// (0x0007b7c5) main_sp_fs_ribbon_pane_t2

0xab5f,	// (0x0007b7d4) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcda,	// (0x0008094f) main_sp_fs_ribbon_pane_t

0xab6e,	// (0x0007b7e3) main_sp_fs_ribbon_scheduler_pane

0xab76,	// (0x0007b7eb) bg_main_sp_fs_ribbon_pane_g1

0xab7f,	// (0x0007b7f4) bg_main_sp_fs_ribbon_pane_g2

0xab88,	// (0x0007b7fd) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce1,	// (0x00080956) bg_main_sp_fs_ribbon_pane_g

0xab90,	// (0x0007b805) main_sp_fs_ribbon_scheduler_pane_g1

0xab99,	// (0x0007b80e) main_sp_fs_ribbon_scheduler_pane_g2

0xaba2,	// (0x0007b817) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfce8,	// (0x0008095d) main_sp_fs_ribbon_scheduler_pane_g

0xabab,	// (0x0007b820) list_cale_mrui_pane

0xabb8,	// (0x0007b82d) sp_fs_scroll_pane_cp07_ParamLimits

0xabb8,	// (0x0007b82d) sp_fs_scroll_pane_cp07

0xabd4,	// (0x0007b849) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xabd4,	// (0x0007b849) bg_sp_fs_schedule_viewer_highlight

0xabe4,	// (0x0007b859) list_single_sp_fs_schedule_track_pane_cp01

0xabec,	// (0x0007b861) list_sp_fs_schedule_track_pane

0xabf4,	// (0x0007b869) sp_fs_scroll_pane_cp06_ParamLimits

0xabf4,	// (0x0007b869) sp_fs_scroll_pane_cp06

0x210d,	// (0x00072d82) bgmain_sp_fs_calendar_pane_g1

0x3871,	// (0x000744e6) list_single_cale_mrui_pane_ParamLimits

0x3871,	// (0x000744e6) list_single_cale_mrui_pane

0xe88f,	// (0x0007f504) list_single_cale_mrui_row_pane_ParamLimits

0xe88f,	// (0x0007f504) list_single_cale_mrui_row_pane

0xe89c,	// (0x0007f511) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe89c,	// (0x0007f511) list_single_cale_mrui_row_pane_g1

0xe8d4,	// (0x0007f549) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8d4,	// (0x0007f549) list_single_cale_mrui_row_pane_t1

0x3892,	// (0x00074507) list_single_cale_mrui_row_pane_t2_ParamLimits

0x3892,	// (0x00074507) list_single_cale_mrui_row_pane_t2

0xe8e6,	// (0x0007f55b) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8e6,	// (0x0007f55b) list_single_cale_mrui_row_pane_t3

0xe915,	// (0x0007f58a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe915,	// (0x0007f58a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcf6,	// (0x0008096b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcf6,	// (0x0008096b) list_single_cale_mrui_row_pane_t

0x38fa,	// (0x0007456f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x38fa,	// (0x0007456f) list_single_cmail_header_editor_pane_bg_cp01

0x3920,	// (0x00074595) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x3920,	// (0x00074595) list_single_cmail_header_editor_pane_bg_cp02

0xac13,	// (0x0007b888) main_radioblah_text_pane_t1_ParamLimits

0xac13,	// (0x0007b888) main_radioblah_text_pane_t1

0xac2e,	// (0x0007b8a3) cam6_indi_pane_cp01

0xac36,	// (0x0007b8ab) cam6_mode_pane_cp01

0xac3e,	// (0x0007b8b3) cam6_pano_pane

0xac47,	// (0x0007b8bc) cam6_zoom_pane_cp01

0xac4f,	// (0x0007b8c4) cam6_pano_image_pane

0xac5a,	// (0x0007b8cf) cam6_pano_pane_g1

0x9b3d,	// (0x0007a7b2) cam6_pano_pane_g2

0xac63,	// (0x0007b8d8) cam6_pano_pane_g3

0xac6c,	// (0x0007b8e1) cam6_pano_pane_g4

0x0a50,	// (0x000716c5) cam6_pano_pane_g5

0xac75,	// (0x0007b8ea) cam6_pano_pane_g6

0xac7f,	// (0x0007b8f4) cam6_pano_pane_g7

0xac87,	// (0x0007b8fc) cam6_pano_pane_g8

0xac90,	// (0x0007b905) cam6_pano_pane_g9

0x0008,

0xfcff,	// (0x00080974) cam6_pano_pane_g

0x17c6,	// (0x0007243b) main_browser_tag_pane

0xa960,	// (0x0007b5d5) grid_navstr_albumart_pane

0xac9b,	// (0x0007b910) cell_navstr_albumart_pane_ParamLimits

0xac9b,	// (0x0007b910) cell_navstr_albumart_pane

0xacbb,	// (0x0007b930) cell_navstr_albumart_pane_g1

0xddf7,	// (0x0007ea6c) cell_navstr_albumart_pane_g2

0xde07,	// (0x0007ea7c) cell_navstr_albumart_pane_g3

0xddff,	// (0x0007ea74) cell_navstr_albumart_pane_g4

0x0003,

0xfd12,	// (0x00080987) cell_navstr_albumart_pane_g

0xacc3,	// (0x0007b938) bt_list_pane_ParamLimits

0xacc3,	// (0x0007b938) bt_list_pane

0xacd7,	// (0x0007b94c) bt_list_pane_t1

0xace6,	// (0x0007b95b) bt_list_pane_t2

0x0001,

0xfd1b,	// (0x00080990) bt_list_pane_t

0x17c6,	// (0x0007243b) main_cale_prevew_pane

0xacf5,	// (0x0007b96a) popup_cale_preview_window_ParamLimits

0xacf5,	// (0x0007b96a) popup_cale_preview_window

0x1e6e,	// (0x00072ae3) bg_popup_preview_window_pane_cp05_ParamLimits

0x1e6e,	// (0x00072ae3) bg_popup_preview_window_pane_cp05

0xad0e,	// (0x0007b983) list_cale_preview_pane_ParamLimits

0xad0e,	// (0x0007b983) list_cale_preview_pane

0xad1a,	// (0x0007b98f) list_double_cale_preview_pane_ParamLimits

0xad1a,	// (0x0007b98f) list_double_cale_preview_pane

0x0dab,	// (0x00071a20) list_single_cale_preview_pane_ParamLimits

0x0dab,	// (0x00071a20) list_single_cale_preview_pane

0xad2c,	// (0x0007b9a1) list_single_cale_preview_pane_g1

0xad34,	// (0x0007b9a9) list_single_cale_preview_pane_t1_ParamLimits

0xad34,	// (0x0007b9a9) list_single_cale_preview_pane_t1

0xad49,	// (0x0007b9be) list_double_cale_preview_pane_g1

0xad51,	// (0x0007b9c6) list_double_cale_preview_pane_t1_ParamLimits

0xad51,	// (0x0007b9c6) list_double_cale_preview_pane_t1

0xad66,	// (0x0007b9db) list_double_cale_preview_pane_t2_ParamLimits

0xad66,	// (0x0007b9db) list_double_cale_preview_pane_t2

0x0001,

0xfd20,	// (0x00080995) list_double_cale_preview_pane_t_ParamLimits

0xfd20,	// (0x00080995) list_double_cale_preview_pane_t

0x17c6,	// (0x0007243b) main_ezdial_pane

0x1e6e,	// (0x00072ae3) main_sp_fs_email_pane_ParamLimits

0xa4d6,	// (0x0007b14b) cmail_ddmenu_btn01_pane_ParamLimits

0xa4d6,	// (0x0007b14b) cmail_ddmenu_btn01_pane

0xa4e9,	// (0x0007b15e) cmail_ddmenu_btn02_pane_ParamLimits

0xa4e9,	// (0x0007b15e) cmail_ddmenu_btn02_pane

0xa544,	// (0x0007b1b9) cmail_ddmenu_btn03_pane_ParamLimits

0xa544,	// (0x0007b1b9) cmail_ddmenu_btn03_pane

0xa5f5,	// (0x0007b26a) main_sp_fs_ctrlbar_pane_ParamLimits

0xa634,	// (0x0007b2a9) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa82a,	// (0x0007b49f) list_cmail_body_pane_ParamLimits

0xa88f,	// (0x0007b504) bg_button_pane_cp12

0xa898,	// (0x0007b50d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xa898,	// (0x0007b50d) list_single_cmail_header_detail_pane_g3

0xe7d6,	// (0x0007f44b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe7d6,	// (0x0007f44b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca3,	// (0x00080918) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca3,	// (0x00080918) list_single_cmail_header_detail_pane_t

0xe82e,	// (0x0007f4a3) phacti_term_pane_t2_ParamLimits

0xe82e,	// (0x0007f4a3) phacti_term_pane_t2

0x0001,

0xfcad,	// (0x00080922) phacti_term_pane_t_ParamLimits

0xfcad,	// (0x00080922) phacti_term_pane_t

0xad7e,	// (0x0007b9f3) aid_size_list_single_double

0xad8a,	// (0x0007b9ff) popup_ezdial_listscroll_window

0xada6,	// (0x0007ba1b) popup_number_entry_window_cp01

0x20eb,	// (0x00072d60) bg_popup_call_pane_cp09

0xadb4,	// (0x0007ba29) ezdial_list_pane

0xadbc,	// (0x0007ba31) scroll_pane_cp23

0xcc25,	// (0x0007d89a) bg_button_pane_cp028_ParamLimits

0xcc25,	// (0x0007d89a) bg_button_pane_cp028

0xadc4,	// (0x0007ba39) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xadc4,	// (0x0007ba39) cmail_ddmenu_btn01_pane_g1

0xadd0,	// (0x0007ba45) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xadd0,	// (0x0007ba45) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd25,	// (0x0008099a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd25,	// (0x0008099a) cmail_ddmenu_btn01_pane_g

0xaddc,	// (0x0007ba51) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xaddc,	// (0x0007ba51) cmail_ddmenu_btn01_pane_t1

0xcc25,	// (0x0007d89a) bg_button_pane_cp029_ParamLimits

0xcc25,	// (0x0007d89a) bg_button_pane_cp029

0xadf1,	// (0x0007ba66) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xadf1,	// (0x0007ba66) cmail_ddmenu_btn02_pane_g1

0xae09,	// (0x0007ba7e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xae09,	// (0x0007ba7e) cmail_ddmenu_btn02_pane_t1

0x1e6e,	// (0x00072ae3) bg_button_pane_cp031_ParamLimits

0x1e6e,	// (0x00072ae3) bg_button_pane_cp031

0xadf1,	// (0x0007ba66) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xadf1,	// (0x0007ba66) cmail_ddmenu_btn03_pane_g1

0xae09,	// (0x0007ba7e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xae09,	// (0x0007ba7e) cmail_ddmenu_btn03_pane_t1

0x7ad2,	// (0x00078747) cell_dialer2_keypad_pane_t1_ParamLimits

0x7aec,	// (0x00078761) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7aec,	// (0x00078761) cell_dialer2_keypad_pane_t1_copy1

0x974e,	// (0x0007a3c3) ncimui_group_button_pane

0x1e6e,	// (0x00072ae3) main_sp_fs_calendar_pane_ParamLimits

0xa840,	// (0x0007b4b5) list_single_cmail_header_caption_pane_ParamLimits

0xe843,	// (0x0007f4b8) aid_recal_txt_sm_pane

0x17c6,	// (0x0007243b) mian_recal_day_pane

0xe87d,	// (0x0007f4f2) popup_sp_fs_cale_preview_window_ParamLimits

0xae2d,	// (0x0007baa2) list_recal_day_pane

0xe95f,	// (0x0007f5d4) list_single_recal_day_pane_ParamLimits

0xe95f,	// (0x0007f5d4) list_single_recal_day_pane

0xae54,	// (0x0007bac9) list_single_recal_day_pane_g1_ParamLimits

0xae54,	// (0x0007bac9) list_single_recal_day_pane_g1

0xe971,	// (0x0007f5e6) list_single_recal_day_pane_g2_ParamLimits

0xe971,	// (0x0007f5e6) list_single_recal_day_pane_g2

0xe97d,	// (0x0007f5f2) list_single_recal_day_pane_g3_ParamLimits

0xe97d,	// (0x0007f5f2) list_single_recal_day_pane_g3

0x3940,	// (0x000745b5) list_single_recal_day_pane_g4_ParamLimits

0x3940,	// (0x000745b5) list_single_recal_day_pane_g4

0xe989,	// (0x0007f5fe) list_single_recal_day_pane_g5_ParamLimits

0xe989,	// (0x0007f5fe) list_single_recal_day_pane_g5

0xe995,	// (0x0007f60a) list_single_recal_day_pane_g6_ParamLimits

0xe995,	// (0x0007f60a) list_single_recal_day_pane_g6

0x0004,

0xfd34,	// (0x000809a9) list_single_recal_day_pane_g_ParamLimits

0xfd34,	// (0x000809a9) list_single_recal_day_pane_g

0xe9a9,	// (0x0007f61e) list_single_recal_day_pane_t1

0xe9bb,	// (0x0007f630) list_single_recal_day_pane_t2

0x0001,

0xfd3f,	// (0x000809b4) list_single_recal_day_pane_t

0xae60,	// (0x0007bad5) ncimui_query_button_pane_ParamLimits

0xae60,	// (0x0007bad5) ncimui_query_button_pane

0xae70,	// (0x0007bae5) ncimui_query_button_pane_t1_ParamLimits

0xae70,	// (0x0007bae5) ncimui_query_button_pane_t1

0xae83,	// (0x0007baf8) ncimui_query_button_pane_t2_ParamLimits

0xae83,	// (0x0007baf8) ncimui_query_button_pane_t2

0x0001,

0xfd44,	// (0x000809b9) ncimui_query_button_pane_t_ParamLimits

0xfd44,	// (0x000809b9) ncimui_query_button_pane_t

0xae96,	// (0x0007bb0b) query_button_pane_ParamLimits

0xae96,	// (0x0007bb0b) query_button_pane

0x17c6,	// (0x0007243b) bg_button_pane_cp0028

0xaea9,	// (0x0007bb1e) query_button_pane_t1

0x6579,	// (0x000771ee) main_tport_pane_ParamLimits

0xa6a7,	// (0x0007b31c) bg_popup_window_pane_cp01_ParamLimits

0xa6a7,	// (0x0007b31c) bg_popup_window_pane_cp01

0xa6c2,	// (0x0007b337) heading_pane_cp08_ParamLimits

0xa6c2,	// (0x0007b337) heading_pane_cp08

0xa6d5,	// (0x0007b34a) heading_pane_cp07_ParamLimits

0xa6d5,	// (0x0007b34a) heading_pane_cp07

0xa7b3,	// (0x0007b428) cell_tport_appsw_pane_g2

0x0002,

0xfc90,	// (0x00080905) cell_tport_appsw_pane_g

0xccc0,	// (0x0007d935) input_candi_list_open_g1

0xc4d6,	// (0x0007d14b) list_cale_time_pane_g6_ParamLimits

0xc4d6,	// (0x0007d14b) list_cale_time_pane_g6

0x6b86,	// (0x000777fb) aid_size_touch_calib_1_ParamLimits

0x6b86,	// (0x000777fb) aid_size_touch_calib_1

0x6b98,	// (0x0007780d) aid_size_touch_calib_2_ParamLimits

0x6b98,	// (0x0007780d) aid_size_touch_calib_2

0x6bb0,	// (0x00077825) aid_size_touch_calib_3_ParamLimits

0x6bb0,	// (0x00077825) aid_size_touch_calib_3

0x6bce,	// (0x00077843) aid_size_touch_calib_4_ParamLimits

0x6bce,	// (0x00077843) aid_size_touch_calib_4

0x6be6,	// (0x0007785b) main_touch_calib_button_group_pane_ParamLimits

0x6be6,	// (0x0007785b) main_touch_calib_button_group_pane

0x6bfe,	// (0x00077873) main_touch_calib_pane_g1_ParamLimits

0x6c10,	// (0x00077885) main_touch_calib_pane_g2_ParamLimits

0x6c22,	// (0x00077897) main_touch_calib_pane_g3_ParamLimits

0x6c34,	// (0x000778a9) main_touch_calib_pane_g4_ParamLimits

0xf6d2,	// (0x00080347) main_touch_calib_pane_g_ParamLimits

0x6c46,	// (0x000778bb) main_touch_calib_pane_t1_ParamLimits

0x6c60,	// (0x000778d5) main_touch_calib_pane_t2_ParamLimits

0x6c7a,	// (0x000778ef) main_touch_calib_pane_t3_ParamLimits

0x6c8e,	// (0x00077903) main_touch_calib_pane_t4_ParamLimits

0x6ca2,	// (0x00077917) main_touch_calib_pane_t5_ParamLimits

0xf6db,	// (0x00080350) main_touch_calib_pane_t_ParamLimits

0x07ed,	// (0x00071462) list_single_fp_cale_pane_g3_ParamLimits

0x07ed,	// (0x00071462) list_single_fp_cale_pane_g3

0x1e6e,	// (0x00072ae3) bg_button_pane_cp012_ParamLimits

0x1e6e,	// (0x00072ae3) bg_vkb2_func_pane_cp03_ParamLimits

0x8a89,	// (0x000796fe) cell_vitu2_function_top_pane_g1_ParamLimits

0x1e6e,	// (0x00072ae3) bg_vkb2_func_pane_cp04_ParamLimits

0x96d9,	// (0x0007a34e) main_ncimui_button_group_pane_ParamLimits

0x96d9,	// (0x0007a34e) main_ncimui_button_group_pane

0x9739,	// (0x0007a3ae) main_ncimui_pane_t3_ParamLimits

0x9739,	// (0x0007a3ae) main_ncimui_pane_t3

0xa9d1,	// (0x0007b646) phacti_button_group_pane

0xad7e,	// (0x0007b9f3) aid_size_list_single_double_ParamLimits

0xad8a,	// (0x0007b9ff) popup_ezdial_listscroll_window_ParamLimits

0xada6,	// (0x0007ba1b) popup_number_entry_window_cp01_ParamLimits

0xaeb7,	// (0x0007bb2c) phacti_button_pane_ParamLimits

0xaeb7,	// (0x0007bb2c) phacti_button_pane

0x17c6,	// (0x0007243b) bg_button_pane_cp14

0xaec8,	// (0x0007bb3d) phacti_button_pane_t1

0xaed6,	// (0x0007bb4b) main_touch_calib_button_pane_ParamLimits

0xaed6,	// (0x0007bb4b) main_touch_calib_button_pane

0x1f39,	// (0x00072bae) bg_button_pane_cp18_ParamLimits

0x1f39,	// (0x00072bae) bg_button_pane_cp18

0xaeeb,	// (0x0007bb60) main_touch_calib_button_pane_t1_ParamLimits

0xaeeb,	// (0x0007bb60) main_touch_calib_button_pane_t1

0xaf01,	// (0x0007bb76) main_touch_calib_button_pane_t2_ParamLimits

0xaf01,	// (0x0007bb76) main_touch_calib_button_pane_t2

0x0001,

0xfd49,	// (0x000809be) main_touch_calib_button_pane_t_ParamLimits

0xfd49,	// (0x000809be) main_touch_calib_button_pane_t

0x17c6,	// (0x0007243b) cell_ncimui_button_pane

0x17c6,	// (0x0007243b) bg_button_pane_cp032

0xaf1f,	// (0x0007bb94) cell_ncimui_button_pane_t1

0xe437,	// (0x0007f0ac) image3_infobar_pane_ParamLimits

0xe437,	// (0x0007f0ac) image3_infobar_pane

0x9e6d,	// (0x0007aae2) fs_bigclock_status_pane_ParamLimits

0x9e6d,	// (0x0007aae2) fs_bigclock_status_pane

0x9e7a,	// (0x0007aaef) main_fs_bigclock_clock_pane_ParamLimits

0x9e7a,	// (0x0007aaef) main_fs_bigclock_clock_pane

0x9e98,	// (0x0007ab0d) main_fs_bigclock_indi_pane_ParamLimits

0x9e98,	// (0x0007ab0d) main_fs_bigclock_indi_pane

0x9eca,	// (0x0007ab3f) main_fs_bigclock_swipe_pane_ParamLimits

0x9eca,	// (0x0007ab3f) main_fs_bigclock_swipe_pane

0x17c6,	// (0x0007243b) main_fs_clock_dumped_data

0x9f09,	// (0x0007ab7e) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x9f09,	// (0x0007ab7e) list_single_fs_bigclock_indicator_pane_g1

0x9f25,	// (0x0007ab9a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x9f25,	// (0x0007ab9a) list_single_fs_bigclock_indicator_pane_g2

0x9f3f,	// (0x0007abb4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x9f3f,	// (0x0007abb4) list_single_fs_bigclock_indicator_pane_g3

0x9f59,	// (0x0007abce) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x9f59,	// (0x0007abce) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbea,	// (0x0008085f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbea,	// (0x0008085f) list_single_fs_bigclock_indicator_pane_g

0x9f84,	// (0x0007abf9) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x9f84,	// (0x0007abf9) list_single_fs_bigclock_indicator_pane_t1

0x9fac,	// (0x0007ac21) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x9fac,	// (0x0007ac21) list_single_fs_bigclock_indicator_pane_t2

0x9fd4,	// (0x0007ac49) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9fd4,	// (0x0007ac49) list_single_fs_bigclock_indicator_pane_t3

0x9ffc,	// (0x0007ac71) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x9ffc,	// (0x0007ac71) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbf5,	// (0x0008086a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbf5,	// (0x0008086a) list_single_fs_bigclock_indicator_pane_t

0xaf2d,	// (0x0007bba2) image3_infobar_fav_pane_ParamLimits

0xaf2d,	// (0x0007bba2) image3_infobar_fav_pane

0xaf3d,	// (0x0007bbb2) image3_infobar_loc_pane_ParamLimits

0xaf3d,	// (0x0007bbb2) image3_infobar_loc_pane

0xaf51,	// (0x0007bbc6) image3_infobar_time_pane_ParamLimits

0xaf51,	// (0x0007bbc6) image3_infobar_time_pane

0x210d,	// (0x00072d82) image3_infobar_time_pane_g1

0xaf61,	// (0x0007bbd6) image3_infobar_time_pane_t1

0x210d,	// (0x00072d82) image3_infobar_loc_pane_g1

0xaf6f,	// (0x0007bbe4) image3_infobar_loc_pane_g2

0x0001,

0xfd4e,	// (0x000809c3) image3_infobar_loc_pane_g

0xaf77,	// (0x0007bbec) image3_infobar_loc_pane_t1

0x210d,	// (0x00072d82) image3_infobar_fav_pane_g1

0xaf85,	// (0x0007bbfa) image3_infobar_fav_pane_g2

0x0001,

0xfd53,	// (0x000809c8) image3_infobar_fav_pane_g

0xaf8d,	// (0x0007bc02) fs_bigclock_status_battery_pane

0xaf96,	// (0x0007bc0b) fs_bigclock_status_signal_pane

0xaf9f,	// (0x0007bc14) fs_bigclock_status_title_pane

0xafa8,	// (0x0007bc1d) fs_bigclock_status_signal_pane_g1

0xafb1,	// (0x0007bc26) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd58,	// (0x000809cd) fs_bigclock_status_signal_pane_g

0xafb9,	// (0x0007bc2e) fs_bigclock_status_battery_pane_g1

0xafc2,	// (0x0007bc37) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd5d,	// (0x000809d2) fs_bigclock_status_battery_pane_g

0xafca,	// (0x0007bc3f) fs_bigclock_status_title_pane_t1

0xafd8,	// (0x0007bc4d) main_fs_bigclock_clock_pane_g1

0xafd8,	// (0x0007bc4d) main_fs_bigclock_clock_pane_g2

0xafe9,	// (0x0007bc5e) main_fs_bigclock_clock_pane_g3

0xafe9,	// (0x0007bc5e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd62,	// (0x000809d7) main_fs_bigclock_clock_pane_g

0xaffc,	// (0x0007bc71) main_fs_bigclock_clock_pane_t1

0xb012,	// (0x0007bc87) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd6b,	// (0x000809e0) main_fs_bigclock_clock_pane_t

0xb028,	// (0x0007bc9d) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb028,	// (0x0007bc9d) list_single_fs_bigclock_indicator_pane

0xb039,	// (0x0007bcae) list_single_fs_bigclock_pane_ParamLimits

0xb039,	// (0x0007bcae) list_single_fs_bigclock_pane

0xb0a3,	// (0x0007bd18) main_fs_bigclock_indicator_pane_t1

0xb0b2,	// (0x0007bd27) list_single_fs_bigclock_pane_g1

0xb0ba,	// (0x0007bd2f) list_single_fs_bigclock_pane_t1

0x210d,	// (0x00072d82) main_fs_bigclock_swipe_pane_g1

0xb0fd,	// (0x0007bd72) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd7c,	// (0x000809f1) main_fs_bigclock_swipe_pane_g

0xb105,	// (0x0007bd7a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xb105,	// (0x0007bd7a) main_fs_bigclock_swipe_pane_t1

0x56db,	// (0x00076350) call_type_pane_ParamLimits

0x17c6,	// (0x0007243b) main_btmg_pane

0xe8c8,	// (0x0007f53d) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8c8,	// (0x0007f53d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcef,	// (0x00080964) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcef,	// (0x00080964) list_single_cale_mrui_row_pane_g

0xe94e,	// (0x0007f5c3) list_recal_vselct_arw_lo_pane

0xae4c,	// (0x0007bac1) list_recal_vselct_arw_up_pane

0xe956,	// (0x0007f5cb) list_recal_vselct_pane

0xb122,	// (0x0007bd97) btmg_button_pane

0xb12c,	// (0x0007bda1) main_btmg_pane_g1

0x17c6,	// (0x0007243b) bg_button_pane_cp044

0xb136,	// (0x0007bdab) btmg_button_pane_t1

0xdf87,	// (0x0007ebfc) aid_listscroll_gen

0x1e6e,	// (0x00072ae3) main_cntbar_detail_pane

0xa81a,	// (0x0007b48f) list_cmail_folder_pane

0x179f,	// (0x00072414) sp_fs_scroll_pane_cp03_ParamLimits

0x3958,	// (0x000745cd) list_single_fs_dyc_pane_cp01_ParamLimits

0x3958,	// (0x000745cd) list_single_fs_dyc_pane_cp01

0xb144,	// (0x0007bdb9) aid_size_cmail_indent

0xe9cd,	// (0x0007f642) list_single_dyc_row_pane_cp01

0xb17f,	// (0x0007bdf4) cntbar_detail_list_pane_ParamLimits

0xb17f,	// (0x0007bdf4) cntbar_detail_list_pane

0xb1cb,	// (0x0007be40) main_cntbar_detail_cont_pane_ParamLimits

0xb1cb,	// (0x0007be40) main_cntbar_detail_cont_pane

0x179f,	// (0x00072414) scroll_pane_cp032_ParamLimits

0x179f,	// (0x00072414) scroll_pane_cp032

0xb1df,	// (0x0007be54) cntbar_detail_list_event_pane_ParamLimits

0xb1df,	// (0x0007be54) cntbar_detail_list_event_pane

0xb18f,	// (0x0007be04) cntbar_detail_list_shct_pane

0x2380,	// (0x00072ff5) aid_list_gen

0xb1ef,	// (0x0007be64) aid_scroll

0xb1f8,	// (0x0007be6d) aid_size_touch_scroll_bar

0xa277,	// (0x0007aeec) aid_list_double

0xb201,	// (0x0007be76) aid_list_single

0x17ab,	// (0x00072420) aid_list_single_lg

0x396e,	// (0x000745e3) aid_list_z_g_a_sm

0xb20a,	// (0x0007be7f) aid_list_z_g_d

0x3976,	// (0x000745eb) aid_txt_z_prm

0x3984,	// (0x000745f9) aid_txt_z_prm_cp01

0x3992,	// (0x00074607) aid_txt_z_sec

0xb212,	// (0x0007be87) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb212,	// (0x0007be87) main_cntbar_detail_cont_pane_g1

0xb226,	// (0x0007be9b) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb226,	// (0x0007be9b) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd81,	// (0x000809f6) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd81,	// (0x000809f6) main_cntbar_detail_cont_pane_g

0xb236,	// (0x0007beab) main_cntbar_detail_cont_pane_t1

0xb244,	// (0x0007beb9) main_cntbar_detail_cont_pane_t2

0xb252,	// (0x0007bec7) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd86,	// (0x000809fb) main_cntbar_detail_cont_pane_t

0xb260,	// (0x0007bed5) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb260,	// (0x0007bed5) cell_cntbar_detail_list_shct_pane

0xb274,	// (0x0007bee9) cntbar_detail_list_shct_pane_g1

0xb27d,	// (0x0007bef2) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd8d,	// (0x00080a02) cntbar_detail_list_shct_pane_g

0xb286,	// (0x0007befb) cntbar_detail_list_event_pane_g1_ParamLimits

0xb286,	// (0x0007befb) cntbar_detail_list_event_pane_g1

0xb292,	// (0x0007bf07) cntbar_detail_list_event_pane_g2_ParamLimits

0xb292,	// (0x0007bf07) cntbar_detail_list_event_pane_g2

0x0005,

0xfd92,	// (0x00080a07) cntbar_detail_list_event_pane_g_ParamLimits

0xfd92,	// (0x00080a07) cntbar_detail_list_event_pane_g

0xb2fe,	// (0x0007bf73) cntbar_detail_list_event_pane_t1_ParamLimits

0xb2fe,	// (0x0007bf73) cntbar_detail_list_event_pane_t1

0xb313,	// (0x0007bf88) cntbar_detail_list_event_pane_t2_ParamLimits

0xb313,	// (0x0007bf88) cntbar_detail_list_event_pane_t2

0x0002,

0xfd9f,	// (0x00080a14) cntbar_detail_list_event_pane_t_ParamLimits

0xfd9f,	// (0x00080a14) cntbar_detail_list_event_pane_t

0x210d,	// (0x00072d82) cell_cntbar_detail_list_shct_pane_g1

0xcb14,	// (0x0007d789) navi_pane_mv_g3

0x1e6e,	// (0x00072ae3) main_cntbar_detail_pane_ParamLimits

0x17c6,	// (0x0007243b) main_notif_wgt_pane

0xe223,	// (0x0007ee98) aid_tch_main_mp4_pane_g4

0xe42f,	// (0x0007f0a4) popup_slider_window_cp02

0xe944,	// (0x0007f5b9) list_recal_day_event_pane

0xb14d,	// (0x0007bdc2) cntbar_detail_btn_pane_ParamLimits

0xb14d,	// (0x0007bdc2) cntbar_detail_btn_pane

0xb166,	// (0x0007bddb) cntbar_detail_btn_pane_cp01_ParamLimits

0xb166,	// (0x0007bddb) cntbar_detail_btn_pane_cp01

0xb18f,	// (0x0007be04) cntbar_detail_list_shct_pane_ParamLimits

0xb19f,	// (0x0007be14) cntbar_detail_pane_g1_ParamLimits

0xb19f,	// (0x0007be14) cntbar_detail_pane_g1

0xb1af,	// (0x0007be24) cntbar_detail_pane_t1_ParamLimits

0xb1af,	// (0x0007be24) cntbar_detail_pane_t1

0xb29e,	// (0x0007bf13) cntbar_detail_list_event_pane_g3_ParamLimits

0xb29e,	// (0x0007bf13) cntbar_detail_list_event_pane_g3

0xb2b6,	// (0x0007bf2b) cntbar_detail_list_event_pane_g4_ParamLimits

0xb2b6,	// (0x0007bf2b) cntbar_detail_list_event_pane_g4

0xb2ce,	// (0x0007bf43) cntbar_detail_list_event_pane_g5_ParamLimits

0xb2ce,	// (0x0007bf43) cntbar_detail_list_event_pane_g5

0xb2e6,	// (0x0007bf5b) cntbar_detail_list_event_pane_g6_ParamLimits

0xb2e6,	// (0x0007bf5b) cntbar_detail_list_event_pane_g6

0xb328,	// (0x0007bf9d) cntbar_detail_list_event_pane_t3_ParamLimits

0xb328,	// (0x0007bf9d) cntbar_detail_list_event_pane_t3

0xb33a,	// (0x0007bfaf) popup_notif_wgt_window_ParamLimits

0xb33a,	// (0x0007bfaf) popup_notif_wgt_window

0xb353,	// (0x0007bfc8) popup_submenu_window_cp01_ParamLimits

0xb353,	// (0x0007bfc8) popup_submenu_window_cp01

0x20eb,	// (0x00072d60) bg_popup_window_pane_cp10

0xb365,	// (0x0007bfda) listscroll_notif_wgt_pane

0xb377,	// (0x0007bfec) list_notif_wgt_window

0xb380,	// (0x0007bff5) scroll_pane_cp033

0xb389,	// (0x0007bffe) list_notif_wgt_row_pane_ParamLimits

0xb389,	// (0x0007bffe) list_notif_wgt_row_pane

0xb399,	// (0x0007c00e) aid_size_list_notif_wgt_del

0xb3a6,	// (0x0007c01b) list_notif_wgt_row_pane_g1

0xb3b2,	// (0x0007c027) list_notif_wgt_row_pane_g2

0xb3c1,	// (0x0007c036) list_notif_wgt_row_pane_g3

0x0002,

0xfda6,	// (0x00080a1b) list_notif_wgt_row_pane_g

0xb3ce,	// (0x0007c043) list_notif_wgt_row_pane_t1

0xe9d6,	// (0x0007f64b) list_notif_wgt_row_pane_t2

0xe9e8,	// (0x0007f65d) list_notif_wgt_row_pane_t3

0x0002,

0xfdad,	// (0x00080a22) list_notif_wgt_row_pane_t

0x0fbb,	// (0x00071c30) list_recal_day_event_pane_g1

0xe9fa,	// (0x0007f66f) list_recal_day_event_pane_t1

0x17c6,	// (0x0007243b) bg_button_pane_cp045

0xb3e4,	// (0x0007c059) cntbar_detail_btn_pane_t1

0xcc25,	// (0x0007d89a) main_callh_pane_ParamLimits

0xcc25,	// (0x0007d89a) main_callh_pane

0x17c6,	// (0x0007243b) main_coverflow0_pane

0x17c6,	// (0x0007243b) main_wgtman_pane

0x9ee2,	// (0x0007ab57) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9ee2,	// (0x0007ab57) main_fs_bigclock_unlock_btn_pane

0xa7ab,	// (0x0007b420) bg_button_pane_cp16

0xa7bb,	// (0x0007b430) cell_tport_appsw_pane_g3

0xb3f2,	// (0x0007c067) cf0_flow_pane_ParamLimits

0xb3f2,	// (0x0007c067) cf0_flow_pane

0xea09,	// (0x0007f67e) listscroll_cf0_pane

0xea14,	// (0x0007f689) main_cf0_pane_g1

0xb407,	// (0x0007c07c) main_cf0_pane_t1_ParamLimits

0xb407,	// (0x0007c07c) main_cf0_pane_t1

0xb41e,	// (0x0007c093) main_cf0_pane_t2_ParamLimits

0xb41e,	// (0x0007c093) main_cf0_pane_t2

0x0001,

0xfdb9,	// (0x00080a2e) main_cf0_pane_t_ParamLimits

0xfdb9,	// (0x00080a2e) main_cf0_pane_t

0xea26,	// (0x0007f69b) scroll_pane_cp11

0xb435,	// (0x0007c0aa) cf0_flow_pane_g1

0xb43d,	// (0x0007c0b2) cf0_flow_pane_g2

0x0001,

0xfdbe,	// (0x00080a33) cf0_flow_pane_g

0xb445,	// (0x0007c0ba) cf0_flow_pane_t1

0x17c6,	// (0x0007243b) main_call6_pane

0x17c6,	// (0x0007243b) main_calllock_pane

0xb453,	// (0x0007c0c8) call6_btn_grp_pane_ParamLimits

0xb453,	// (0x0007c0c8) call6_btn_grp_pane

0xb46d,	// (0x0007c0e2) call6_pane_g1_ParamLimits

0xb46d,	// (0x0007c0e2) call6_pane_g1

0xb483,	// (0x0007c0f8) popup_call6_1st_window_ParamLimits

0xb483,	// (0x0007c0f8) popup_call6_1st_window

0xb494,	// (0x0007c109) popup_call6_2nd_window_ParamLimits

0xb494,	// (0x0007c109) popup_call6_2nd_window

0xb4a5,	// (0x0007c11a) cell_call6_btn_pane_ParamLimits

0xb4a5,	// (0x0007c11a) cell_call6_btn_pane

0x20eb,	// (0x00072d60) bg_popup_call2_in_pane_cp03

0xea31,	// (0x0007f6a6) popup_call6_1st_window_g1

0xea39,	// (0x0007f6ae) popup_call6_1st_window_g2

0xea41,	// (0x0007f6b6) popup_call6_1st_window_g3

0x0002,

0xfdc3,	// (0x00080a38) popup_call6_1st_window_g

0xea49,	// (0x0007f6be) popup_call6_1st_window_t1

0xea58,	// (0x0007f6cd) popup_call6_1st_window_t2

0xea66,	// (0x0007f6db) popup_call6_1st_window_t3

0x0002,

0xfdca,	// (0x00080a3f) popup_call6_1st_window_t

0x20eb,	// (0x00072d60) bg_popup_call2_in_pane_cp04

0xea74,	// (0x0007f6e9) popup_call6_2nd_window_g1

0xea7c,	// (0x0007f6f1) popup_call6_2nd_window_g2

0xea84,	// (0x0007f6f9) popup_call6_2nd_window_g3

0x0002,

0xfdd1,	// (0x00080a46) popup_call6_2nd_window_g

0xea8c,	// (0x0007f701) popup_call6_2nd_window_t1

0x17c6,	// (0x0007243b) bg_button_pane_cp15

0xea9b,	// (0x0007f710) cell_call6_btn_pane_g1

0xf05c,	// (0x0007fcd1) cell_call6_btn_pane_t1

0xb4b9,	// (0x0007c12e) listscroll_wgtman_pane_ParamLimits

0xb4b9,	// (0x0007c12e) listscroll_wgtman_pane

0xb4da,	// (0x0007c14f) wgtman_btn_pane_ParamLimits

0xb4da,	// (0x0007c14f) wgtman_btn_pane

0xc928,	// (0x0007d59d) aid_scroll_copy1

0xeaa4,	// (0x0007f719) list_wgtman_pane

0xb51d,	// (0x0007c192) wgtman_btn_pane_g1_ParamLimits

0xb51d,	// (0x0007c192) wgtman_btn_pane_g1

0xb549,	// (0x0007c1be) wgtman_btn_pane_t1_ParamLimits

0xb549,	// (0x0007c1be) wgtman_btn_pane_t1

0xeaae,	// (0x0007f723) wgtman_btn_pane_t2_ParamLimits

0xeaae,	// (0x0007f723) wgtman_btn_pane_t2

0x0001,

0xfdd8,	// (0x00080a4d) wgtman_btn_pane_t_ParamLimits

0xfdd8,	// (0x00080a4d) wgtman_btn_pane_t

0xb586,	// (0x0007c1fb) listrow_wgtman_pane_ParamLimits

0xb586,	// (0x0007c1fb) listrow_wgtman_pane

0xb599,	// (0x0007c20e) listrow_wgtman_pane_g1

0xb5a6,	// (0x0007c21b) listrow_wgtman_pane_g2

0x0001,

0xfddd,	// (0x00080a52) listrow_wgtman_pane_g

0x39a0,	// (0x00074615) listrow_wgtman_pane_t1

0x39b8,	// (0x0007462d) listrow_wgtman_pane_t2

0x0001,

0xfde2,	// (0x00080a57) listrow_wgtman_pane_t

0x39de,	// (0x00074653) wait_bar_pane_cp09

0xeac5,	// (0x0007f73a) main_calllock_btn_pane

0xeacf,	// (0x0007f744) main_calllock_pane_g1

0x17c6,	// (0x0007243b) bg_button_pane_cp17

0xea9b,	// (0x0007f710) main_calllock_btn_pane_g1

0xead7,	// (0x0007f74c) main_calllock_btn_pane_t1

0x17c6,	// (0x0007243b) main_dialer3_pane

0x17c6,	// (0x0007243b) main_fmrd2_pane

0x210d,	// (0x00072d82) main_fs_bigclock_unlock_btn_pane_g1

0xb5cc,	// (0x0007c241) main_fs_bigclock_unlock_btn_pane_t1

0xb5da,	// (0x0007c24f) area_fmrd2_info_pane_ParamLimits

0xb5da,	// (0x0007c24f) area_fmrd2_info_pane

0xb5eb,	// (0x0007c260) area_fmrd2_visual_pane_ParamLimits

0xb5eb,	// (0x0007c260) area_fmrd2_visual_pane

0xb5f9,	// (0x0007c26e) fmrd2_indi_pane_ParamLimits

0xb5f9,	// (0x0007c26e) fmrd2_indi_pane

0xb606,	// (0x0007c27b) area_fmrd2_visual_pane_g1

0xb60e,	// (0x0007c283) area_fmrd2_visual_pane_t1

0xb61e,	// (0x0007c293) area_fmrd2_visual_pane_t2

0xb62e,	// (0x0007c2a3) area_fmrd2_visual_pane_t3

0x0002,

0xfdec,	// (0x00080a61) area_fmrd2_visual_pane_t

0xb63e,	// (0x0007c2b3) area_fmrd2_info_pane_g1

0xb646,	// (0x0007c2bb) area_fmrd2_info_pane_t1

0xb656,	// (0x0007c2cb) area_fmrd2_info_pane_t2

0xb666,	// (0x0007c2db) area_fmrd2_info_pane_t3

0xb676,	// (0x0007c2eb) area_fmrd2_info_pane_t4

0x0003,

0xfdf3,	// (0x00080a68) area_fmrd2_info_pane_t

0xb684,	// (0x0007c2f9) fmrd2_indi_pane_t1

0xb694,	// (0x0007c309) fmrd2_indi_pane_t2

0xb6a4,	// (0x0007c319) fmrd2_indi_pane_t3

0x0002,

0xfdfc,	// (0x00080a71) fmrd2_indi_pane_t

0x9f68,	// (0x0007abdd) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9f68,	// (0x0007abdd) list_single_fs_bigclock_indicator_pane_g5

0xa019,	// (0x0007ac8e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xa019,	// (0x0007ac8e) list_single_fs_bigclock_indicator_pane_t5

0xaa50,	// (0x0007b6c5) aid_cell_bcale_month_pane_ParamLimits

0xaa50,	// (0x0007b6c5) aid_cell_bcale_month_pane

0xaa6e,	// (0x0007b6e3) bcale_month_pane_ParamLimits

0xaa6e,	// (0x0007b6e3) bcale_month_pane

0xaa92,	// (0x0007b707) bcale_preview_pane_ParamLimits

0xaa92,	// (0x0007b707) bcale_preview_pane

0xb0ba,	// (0x0007bd2f) list_single_fs_bigclock_pane_t1_ParamLimits

0xb0d9,	// (0x0007bd4e) list_single_fs_bigclock_pane_t2_ParamLimits

0xb0d9,	// (0x0007bd4e) list_single_fs_bigclock_pane_t2

0x0001,

0xfd77,	// (0x000809ec) list_single_fs_bigclock_pane_t_ParamLimits

0xfd77,	// (0x000809ec) list_single_fs_bigclock_pane_t

0xb5c4,	// (0x0007c239) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfde7,	// (0x00080a5c) main_fs_bigclock_unlock_btn_pane_g

0xb6b4,	// (0x0007c329) aid_dia3_key_size_ParamLimits

0xb6b4,	// (0x0007c329) aid_dia3_key_size

0xb6c3,	// (0x0007c338) aid_dia3_listrow_size_ParamLimits

0xb6c3,	// (0x0007c338) aid_dia3_listrow_size

0xb6d8,	// (0x0007c34d) dia3_keypad_fun_pane_ParamLimits

0xb6d8,	// (0x0007c34d) dia3_keypad_fun_pane

0xb6f4,	// (0x0007c369) dia3_keypad_num_pane_ParamLimits

0xb6f4,	// (0x0007c369) dia3_keypad_num_pane

0xb70f,	// (0x0007c384) dia3_listscroll_pane_ParamLimits

0xb70f,	// (0x0007c384) dia3_listscroll_pane

0xb722,	// (0x0007c397) dia3_numentry_pane_ParamLimits

0xb722,	// (0x0007c397) dia3_numentry_pane

0xeae6,	// (0x0007f75b) dia3_list_pane

0xeaf1,	// (0x0007f766) scroll_pane_cp12

0x17c6,	// (0x0007243b) bg_dia3_numentry_pane

0xb73a,	// (0x0007c3af) dia3_numentry_pane_t1

0xb749,	// (0x0007c3be) cell_dia3_key_num_pane

0xb751,	// (0x0007c3c6) cell_dia3_key0_fun_pane_ParamLimits

0xb751,	// (0x0007c3c6) cell_dia3_key0_fun_pane

0xb765,	// (0x0007c3da) cell_dia3_key1_fun_pane_ParamLimits

0xb765,	// (0x0007c3da) cell_dia3_key1_fun_pane

0xb77d,	// (0x0007c3f2) dia3_listrow_pane

0x9957,	// (0x0007a5cc) bg_dia3_numentry_pane_g1

0x17c6,	// (0x0007243b) bg_button_pane_cp21

0xeafc,	// (0x0007f771) cell_dia3_key_num_pane_t1

0xeb0a,	// (0x0007f77f) cell_dia3_key_num_pane_t2

0xeb19,	// (0x0007f78e) cell_dia3_key_num_pane_t3

0xeb28,	// (0x0007f79d) cell_dia3_key_num_pane_t4

0x0003,

0xfe03,	// (0x00080a78) cell_dia3_key_num_pane_t

0x17c6,	// (0x0007243b) bg_button_pane_cp19

0xb78f,	// (0x0007c404) cell_dia3_key0_fun_pane_g1

0x17c6,	// (0x0007243b) bg_button_pane_cp20

0xb797,	// (0x0007c40c) cell_dia3_key1_fun_pane_g1

0xb79f,	// (0x0007c414) area_left_week_number_pane

0xb7ab,	// (0x0007c420) area_top_day_name_pane

0xb7be,	// (0x0007c433) frame_month_view_pane

0xeb37,	// (0x0007f7ac) grid_month_view_pane

0xb7d1,	// (0x0007c446) cell_top_day_name_pane_ParamLimits

0xb7d1,	// (0x0007c446) cell_top_day_name_pane

0xb7fe,	// (0x0007c473) cell_area_left_week_number_pane_ParamLimits

0xb7fe,	// (0x0007c473) cell_area_left_week_number_pane

0xb812,	// (0x0007c487) cell_month_view_pane_ParamLimits

0xb812,	// (0x0007c487) cell_month_view_pane

0xeb45,	// (0x0007f7ba) frm_month_g1

0xb83f,	// (0x0007c4b4) frm_month_g2

0xb852,	// (0x0007c4c7) frm_month_g3

0xb865,	// (0x0007c4da) frm_month_g4

0xb878,	// (0x0007c4ed) frm_month_g5

0xb88b,	// (0x0007c500) frm_month_g6

0xb89e,	// (0x0007c513) frm_month_g7

0xeb52,	// (0x0007f7c7) frm_month_g8

0xb8b1,	// (0x0007c526) frm_month_g9

0xb8c1,	// (0x0007c536) frm_month_g10

0xb8d1,	// (0x0007c546) frm_month_g11

0xb8e1,	// (0x0007c556) frm_month_g12

0xb8f3,	// (0x0007c568) frm_month_g13

0xb905,	// (0x0007c57a) frm_month_g14

0xb919,	// (0x0007c58e) frm_month_g15

0xb92d,	// (0x0007c5a2) frm_month_g16

0x000f,

0xfe0c,	// (0x00080a81) frm_month_g

0xeb5f,	// (0x0007f7d4) cell_top_day_name_pane_t1

0xb941,	// (0x0007c5b6) cell_area_left_week_number_pane_g1

0xb94d,	// (0x0007c5c2) cell_area_left_week_number_pane_t1

0x1ec7,	// (0x00072b3c) cell_month_view_pane_g1

0xb960,	// (0x0007c5d5) cell_month_view_pane_t1

0x17c6,	// (0x0007243b) main_fps_pane

0xa50c,	// (0x0007b181) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xa50c,	// (0x0007b181) cmail_ddmenu_btn02_pane_cp1

0xa528,	// (0x0007b19d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xa528,	// (0x0007b19d) cmail_ddmenu_btn02_pane_cp2

0xadfd,	// (0x0007ba72) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xadfd,	// (0x0007ba72) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd2a,	// (0x0008099f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd2a,	// (0x0008099f) cmail_ddmenu_btn02_pane_g

0xae1b,	// (0x0007ba90) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xae1b,	// (0x0007ba90) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd2f,	// (0x000809a4) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd2f,	// (0x000809a4) cmail_ddmenu_btn02_pane_t

0xb973,	// (0x0007c5e8) fps_text_pane_ParamLimits

0xb973,	// (0x0007c5e8) fps_text_pane

0xb98a,	// (0x0007c5ff) main_fps_pane_g1_ParamLimits

0xb98a,	// (0x0007c5ff) main_fps_pane_g1

0xb9a4,	// (0x0007c619) wait_bar_pane_cp010_ParamLimits

0xb9a4,	// (0x0007c619) wait_bar_pane_cp010

0xb9b5,	// (0x0007c62a) fps_text_pane_t1_ParamLimits

0xb9b5,	// (0x0007c62a) fps_text_pane_t1

0x17b4,	// (0x00072429) cam4_image_uncrop_pane_g1

0x17bd,	// (0x00072432) cam4_image_uncrop_pane_g2

0x8009,	// (0x00078c7e) cam4_image_uncrop_pane_g3

0x8012,	// (0x00078c87) cam4_image_uncrop_pane_g4

0x0003,

0xf86e,	// (0x000804e3) cam4_image_uncrop_pane_g

0xb77d,	// (0x0007c3f2) dia3_listrow_pane_ParamLimits

0x17c6,	// (0x0007243b) main_phob2_pane

0xa745,	// (0x0007b3ba) cell_tport_appsw_pane_cp02_ParamLimits

0xa745,	// (0x0007b3ba) cell_tport_appsw_pane_cp02

0xa759,	// (0x0007b3ce) cell_tport_appsw_pane_cp03_ParamLimits

0xa759,	// (0x0007b3ce) cell_tport_appsw_pane_cp03

0x17c6,	// (0x0007243b) phob2_contact_card_pane

0x17c6,	// (0x0007243b) phob2_listscroll_pane

0xeb72,	// (0x0007f7e7) phob2_list_pane

0xeb7a,	// (0x0007f7ef) scroll_pane_cp034

0xb9cd,	// (0x0007c642) phob2_cc_data_pane_ParamLimits

0xb9cd,	// (0x0007c642) phob2_cc_data_pane

0xb9ec,	// (0x0007c661) phob2_cc_listscroll_pane_ParamLimits

0xb9ec,	// (0x0007c661) phob2_cc_listscroll_pane

0xb586,	// (0x0007c1fb) list_double_large_graphic_phob2_pane_ParamLimits

0xb586,	// (0x0007c1fb) list_double_large_graphic_phob2_pane

0xba0a,	// (0x0007c67f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xba0a,	// (0x0007c67f) list_double_large_graphic_phob2_pane_g1

0x39f0,	// (0x00074665) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x39f0,	// (0x00074665) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe2d,	// (0x00080aa2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe2d,	// (0x00080aa2) list_double_large_graphic_phob2_pane_g

0x3a08,	// (0x0007467d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x3a08,	// (0x0007467d) list_double_large_graphic_phob2_pane_t1

0x3a1d,	// (0x00074692) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x3a1d,	// (0x00074692) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe36,	// (0x00080aab) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe36,	// (0x00080aab) list_double_large_graphic_phob2_pane_t

0x17c6,	// (0x0007243b) list_highlight_pane_cp024

0xeb82,	// (0x0007f7f7) phob2_cc_button_pane

0xba25,	// (0x0007c69a) phob2_cc_data_pane_g1_ParamLimits

0xba25,	// (0x0007c69a) phob2_cc_data_pane_g1

0xba3c,	// (0x0007c6b1) phob2_cc_data_pane_g2_ParamLimits

0xba3c,	// (0x0007c6b1) phob2_cc_data_pane_g2

0x0001,

0xfe3b,	// (0x00080ab0) phob2_cc_data_pane_g_ParamLimits

0xfe3b,	// (0x00080ab0) phob2_cc_data_pane_g

0xba4e,	// (0x0007c6c3) phob2_cc_data_pane_t1_ParamLimits

0xba4e,	// (0x0007c6c3) phob2_cc_data_pane_t1

0xba66,	// (0x0007c6db) phob2_cc_data_pane_t2_ParamLimits

0xba66,	// (0x0007c6db) phob2_cc_data_pane_t2

0xba7e,	// (0x0007c6f3) phob2_cc_data_pane_t3_ParamLimits

0xba7e,	// (0x0007c6f3) phob2_cc_data_pane_t3

0x0002,

0xfe40,	// (0x00080ab5) phob2_cc_data_pane_t_ParamLimits

0xfe40,	// (0x00080ab5) phob2_cc_data_pane_t

0xeb8a,	// (0x0007f7ff) phob2_cc_list_pane_ParamLimits

0xeb8a,	// (0x0007f7ff) phob2_cc_list_pane

0x175f,	// (0x000723d4) scroll_pane_cp035_ParamLimits

0x175f,	// (0x000723d4) scroll_pane_cp035

0x1e6e,	// (0x00072ae3) bg_button_pane_cp033

0xeb96,	// (0x0007f80b) phob2_cc_button_pane_g1

0xeba2,	// (0x0007f817) phob2_cc_button_pane_t1

0xebb7,	// (0x0007f82c) phob2_cc_button_pane_t2

0x0001,

0xfe47,	// (0x00080abc) phob2_cc_button_pane_t

0xba96,	// (0x0007c70b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xba96,	// (0x0007c70b) list_double_large_graphic_phob2_cc_pane

0xbac8,	// (0x0007c73d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbac8,	// (0x0007c73d) list_double_large_graphic_phob2_cc_pane_g1

0x3a32,	// (0x000746a7) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x3a32,	// (0x000746a7) list_double_large_graphic_phob2_cc_pane_g2

0xbad4,	// (0x0007c749) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xbad4,	// (0x0007c749) list_double_large_graphic_phob2_cc_pane_g3

0x3a3e,	// (0x000746b3) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x3a3e,	// (0x000746b3) list_double_large_graphic_phob2_cc_pane_g4

0x3a4a,	// (0x000746bf) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x3a4a,	// (0x000746bf) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe4c,	// (0x00080ac1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe4c,	// (0x00080ac1) list_double_large_graphic_phob2_cc_pane_g

0x3a56,	// (0x000746cb) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x3a56,	// (0x000746cb) list_double_large_graphic_phob2_cc_pane_t1

0x3a7f,	// (0x000746f4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x3a7f,	// (0x000746f4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe57,	// (0x00080acc) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe57,	// (0x00080acc) list_double_large_graphic_phob2_cc_pane_t

0xebc9,	// (0x0007f83e) list_highlight_pane_cp025_ParamLimits

0xebc9,	// (0x0007f83e) list_highlight_pane_cp025

0x1e6e,	// (0x00072ae3) bg_button_pane_cp033_ParamLimits

0xeb96,	// (0x0007f80b) phob2_cc_button_pane_g1_ParamLimits

0xeba2,	// (0x0007f817) phob2_cc_button_pane_t1_ParamLimits

0xebb7,	// (0x0007f82c) phob2_cc_button_pane_t2_ParamLimits

0xfe47,	// (0x00080abc) phob2_cc_button_pane_t_ParamLimits

0x3ce1,	// (0x00074956) popup_wgtman_window

0x0e8d,	// (0x00071b02) scroll_pane_cp038

0xb4ff,	// (0x0007c174) wgtman_btn_pane_cp_01_ParamLimits

0xb4ff,	// (0x0007c174) wgtman_btn_pane_cp_01

0xebd7,	// (0x0007f84c) wgtman_content_pane

0xebe0,	// (0x0007f855) wgtman_heading_pane

0x17c6,	// (0x0007243b) bg_heading_pane_cp02

0xebe9,	// (0x0007f85e) wgtman_heading_pane_g1

0xebf1,	// (0x0007f866) wgtman_heading_pane_t1

0xebff,	// (0x0007f874) scroll_pane_cp036

0xec07,	// (0x0007f87c) wgtman_list_pane

0xa246,	// (0x0007aebb) wgtman_list_pane_t1_ParamLimits

0xa246,	// (0x0007aebb) wgtman_list_pane_t1

0xe4bb,	// (0x0007f130) cam4_grid_pane

0x34c5,	// (0x0007413a) bg_button_pane_cp015_ParamLimits

0x8c16,	// (0x0007988b) bg_button_pane_cp016_ParamLimits

0x8c22,	// (0x00079897) bg_button_pane_cp017_ParamLimits

0x8c53,	// (0x000798c8) popup_vitu2_query_window_g3_ParamLimits

0x8c53,	// (0x000798c8) popup_vitu2_query_window_g3

0x3566,	// (0x000741db) popup_vitu2_query_window_t6_ParamLimits

0x3566,	// (0x000741db) popup_vitu2_query_window_t6

0x3591,	// (0x00074206) popup_vitu2_query_window_t7_ParamLimits

0x3591,	// (0x00074206) popup_vitu2_query_window_t7

0x17b4,	// (0x00072429) cam4_grid_pane_g1

0x17bd,	// (0x00072432) cam4_grid_pane_g2

0xec0f,	// (0x0007f884) cam4_grid_pane_g3

0xec18,	// (0x0007f88d) cam4_grid_pane_g4

0x0003,

0xfe5c,	// (0x00080ad1) cam4_grid_pane_g

0x48b1,	// (0x00075526) aid_placing_vt_slider_lsc_ParamLimits

0x4bae,	// (0x00075823) vidtel_button_pane_ParamLimits

0x4bae,	// (0x00075823) vidtel_button_pane

0x17c6,	// (0x0007243b) bg_button_pane_cp034

0xec23,	// (0x0007f898) vidtel_button_pane_g1

0xec2b,	// (0x0007f8a0) vidtel_button_pane_t1

0x0fab,	// (0x00071c20) aid_size_vtel_slider_touch

0x175f,	// (0x000723d4) scroll_pane_cp039

0x99ce,	// (0x0007a643) ncim_query_button_pane_cp01_ParamLimits

0x99ed,	// (0x0007a662) ncimui_query_pane_g1_ParamLimits

0x1e6e,	// (0x00072ae3) input_focus_pane_cp012_ParamLimits

0x9a12,	// (0x0007a687) ncim_query_entry_pane_t1_ParamLimits

0x175f,	// (0x000723d4) scroll_pane_cp039_ParamLimits

0xc9ff,	// (0x0007d674) navi_pane_bcale_mc_g1

0xca07,	// (0x0007d67c) navi_pane_bcale_mc_t1

0xa619,	// (0x0007b28e) main_sp_fs_email_pane_g1

0xa625,	// (0x0007b29a) main_sp_fs_email_pane_g2

0x0001,

0xfc5f,	// (0x000808d4) main_sp_fs_email_pane_g

0xac06,	// (0x0007b87b) list_single_cale_mrui_row_pane_g3_ParamLimits

0xac06,	// (0x0007b87b) list_single_cale_mrui_row_pane_g3

0x394e,	// (0x000745c3) list_single_recal_day_pane_g5_event_pane

0xe9a1,	// (0x0007f616) list_single_recal_day_pane_g7

0xec41,	// (0x0007f8b6) list_recal_day_event_pane_cp01

0xec4a,	// (0x0007f8bf) list_recal_vselct_arw_lo_pane_cp01

0xec52,	// (0x0007f8c7) list_recal_vselct_arw_up_pane_cp01

0xec5a,	// (0x0007f8cf) list_recal_vselct_pane_cp01

0x0fbb,	// (0x00071c30) list_recal_day_event_pane_cp01_g1

0xec64,	// (0x0007f8d9) list_recal_day_event_pane_cp01_t1

0xe9a9,	// (0x0007f61e) list_single_recal_day_pane_t1_ParamLimits

0xe9bb,	// (0x0007f630) list_single_recal_day_pane_t2_ParamLimits

0xfd3f,	// (0x000809b4) list_single_recal_day_pane_t_ParamLimits

0x1e4c,	// (0x00072ac1) bg_notes_pane_ParamLimits

0x1f17,	// (0x00072b8c) list_notes_pane_ParamLimits

0x3f02,	// (0x00074b77) scroll_pane_cp06_ParamLimits

0x1f39,	// (0x00072bae) main_notes_pane_ParamLimits

0x1e6e,	// (0x00072ae3) main_welc_pane

0xbb0f,	// (0x0007c784) main_welc_body_pane_ParamLimits

0xbb0f,	// (0x0007c784) main_welc_body_pane

0xbb2c,	// (0x0007c7a1) main_welc_opti_pane_ParamLimits

0xbb2c,	// (0x0007c7a1) main_welc_opti_pane

0xbba2,	// (0x0007c817) main_welc_pane_t1_ParamLimits

0xbba2,	// (0x0007c817) main_welc_pane_t1

0xbd85,	// (0x0007c9fa) main_welc_body_row_pane_ParamLimits

0xbd85,	// (0x0007c9fa) main_welc_body_row_pane

0x1e36,	// (0x00072aab) main_welc_opti_row_pane_ParamLimits

0x1e36,	// (0x00072aab) main_welc_opti_row_pane

0xec82,	// (0x0007f8f7) main_welc_opti_row_pane_g1

0xbd9a,	// (0x0007ca0f) main_welc_opti_row_pane_t1

0xec8a,	// (0x0007f8ff) main_welc_body_row_pane_t1

0xb36f,	// (0x0007bfe4) popup_notif_wgt_heading_pane

0xb399,	// (0x0007c00e) aid_size_list_notif_wgt_del_ParamLimits

0xb3a6,	// (0x0007c01b) list_notif_wgt_row_pane_g1_ParamLimits

0xb3b2,	// (0x0007c027) list_notif_wgt_row_pane_g2_ParamLimits

0xb3c1,	// (0x0007c036) list_notif_wgt_row_pane_g3_ParamLimits

0xfda6,	// (0x00080a1b) list_notif_wgt_row_pane_g_ParamLimits

0xb3ce,	// (0x0007c043) list_notif_wgt_row_pane_t1_ParamLimits

0xe9d6,	// (0x0007f64b) list_notif_wgt_row_pane_t2_ParamLimits

0xe9e8,	// (0x0007f65d) list_notif_wgt_row_pane_t3_ParamLimits

0xfdad,	// (0x00080a22) list_notif_wgt_row_pane_t_ParamLimits

0xb599,	// (0x0007c20e) listrow_wgtman_pane_g1_ParamLimits

0xb5a6,	// (0x0007c21b) listrow_wgtman_pane_g2_ParamLimits

0xfddd,	// (0x00080a52) listrow_wgtman_pane_g_ParamLimits

0x39a0,	// (0x00074615) listrow_wgtman_pane_t1_ParamLimits

0x39b8,	// (0x0007462d) listrow_wgtman_pane_t2_ParamLimits

0xfde2,	// (0x00080a57) listrow_wgtman_pane_t_ParamLimits

0x39de,	// (0x00074653) wait_bar_pane_cp09_ParamLimits

0x17c6,	// (0x0007243b) bg_popup_heading_pane_cp02

0xec99,	// (0x0007f90e) popup_notif_wgt_heading_pane_g1

0xeca1,	// (0x0007f916) popup_notif_wgt_heading_pane_t1

0x17c6,	// (0x0007243b) main_vids_pane

0x17c6,	// (0x0007243b) vids_listscroll_pane

0xbda9,	// (0x0007ca1e) scroll_pane_cp040

0x17c6,	// (0x0007243b) vids_list_pane

0xbdb4,	// (0x0007ca29) vids_list_double_pane_ParamLimits

0xbdb4,	// (0x0007ca29) vids_list_double_pane

0xbdc5,	// (0x0007ca3a) vids_list_double_pane_g1

0xbdce,	// (0x0007ca43) vids_list_double_pane_t1

0xbddd,	// (0x0007ca52) vids_list_double_pane_t2

0x0001,

0xfe7b,	// (0x00080af0) vids_list_double_pane_t

0x1e6e,	// (0x00072ae3) main_ncimui_pane_ParamLimits

0x96ed,	// (0x0007a362) main_ncimui_pane_g1_ParamLimits

0x96f9,	// (0x0007a36e) main_ncimui_pane_g2_ParamLimits

0x96f9,	// (0x0007a36e) main_ncimui_pane_g2

0x0001,

0xfb60,	// (0x000807d5) main_ncimui_pane_g_ParamLimits

0xfb60,	// (0x000807d5) main_ncimui_pane_g

0xbb47,	// (0x0007c7bc) main_welc_pane_g1_ParamLimits

0xbb47,	// (0x0007c7bc) main_welc_pane_g1

0xbb5c,	// (0x0007c7d1) main_welc_pane_g2_ParamLimits

0xbb5c,	// (0x0007c7d1) main_welc_pane_g2

0x0003,

0xfe65,	// (0x00080ada) main_welc_pane_g_ParamLimits

0xfe65,	// (0x00080ada) main_welc_pane_g

0x3ee8,	// (0x00074b5d) listscroll_mce_pane_ParamLimits

0xcb54,	// (0x0007d7c9) wait_bar_pane_cp10

0xdf8f,	// (0x0007ec04) main_cale_day_pane_ParamLimits

0xdf8f,	// (0x0007ec04) main_cale_week_pane_ParamLimits

0x1e4c,	// (0x00072ac1) main_messa_pane_ParamLimits

0x741b,	// (0x00078090) main_clock2_btn_pane_ParamLimits

0x741b,	// (0x00078090) main_clock2_btn_pane

0x0884,	// (0x000714f9) main_clock2_btn_pane_cp01_ParamLimits

0x0884,	// (0x000714f9) main_clock2_btn_pane_cp01

0xabab,	// (0x0007b820) list_cale_mrui_pane_ParamLimits

0xea1e,	// (0x0007f693) main_cf0_pane_g2

0x0001,

0xfdb4,	// (0x00080a29) main_cf0_pane_g

0xb79f,	// (0x0007c414) area_left_week_number_pane_ParamLimits

0xb7ab,	// (0x0007c420) area_top_day_name_pane_ParamLimits

0xb7be,	// (0x0007c433) frame_month_view_pane_ParamLimits

0xeb37,	// (0x0007f7ac) grid_month_view_pane_ParamLimits

0xeb45,	// (0x0007f7ba) frm_month_g1_ParamLimits

0xb83f,	// (0x0007c4b4) frm_month_g2_ParamLimits

0xb852,	// (0x0007c4c7) frm_month_g3_ParamLimits

0xb865,	// (0x0007c4da) frm_month_g4_ParamLimits

0xb878,	// (0x0007c4ed) frm_month_g5_ParamLimits

0xb88b,	// (0x0007c500) frm_month_g6_ParamLimits

0xb89e,	// (0x0007c513) frm_month_g7_ParamLimits

0xeb52,	// (0x0007f7c7) frm_month_g8_ParamLimits

0xb8b1,	// (0x0007c526) frm_month_g9_ParamLimits

0xb8c1,	// (0x0007c536) frm_month_g10_ParamLimits

0xb8d1,	// (0x0007c546) frm_month_g11_ParamLimits

0xb8e1,	// (0x0007c556) frm_month_g12_ParamLimits

0xb8f3,	// (0x0007c568) frm_month_g13_ParamLimits

0xb905,	// (0x0007c57a) frm_month_g14_ParamLimits

0xb919,	// (0x0007c58e) frm_month_g15_ParamLimits

0xb92d,	// (0x0007c5a2) frm_month_g16_ParamLimits

0xfe0c,	// (0x00080a81) frm_month_g_ParamLimits

0xeb5f,	// (0x0007f7d4) cell_top_day_name_pane_t1_ParamLimits

0xb941,	// (0x0007c5b6) cell_area_left_week_number_pane_g1_ParamLimits

0xb94d,	// (0x0007c5c2) cell_area_left_week_number_pane_t1_ParamLimits

0x1ec7,	// (0x00072b3c) cell_month_view_pane_g1_ParamLimits

0xb960,	// (0x0007c5d5) cell_month_view_pane_t1_ParamLimits

0x1e44,	// (0x00072ab9) main_clock2_btn_pane_g1

0xecaf,	// (0x0007f924) main_clock2_btn_pane_t1

0x1e6e,	// (0x00072ae3) listscroll_cmail_pane_ParamLimits

0xa619,	// (0x0007b28e) main_sp_fs_email_pane_g1_ParamLimits

0xa625,	// (0x0007b29a) main_sp_fs_email_pane_g2_ParamLimits

0xfc5f,	// (0x000808d4) main_sp_fs_email_pane_g_ParamLimits

0xae2d,	// (0x0007baa2) list_recal_day_pane_ParamLimits

0xae3e,	// (0x0007bab3) mian_recal_day_pane_t1

0x379a,	// (0x0007440f) list_single_dyc_row_text_pane_t4_ParamLimits

0x379a,	// (0x0007440f) list_single_dyc_row_text_pane_t4

0x37e3,	// (0x00074458) list_single_dyc_row_text_pane_t5_ParamLimits

0x37e3,	// (0x00074458) list_single_dyc_row_text_pane_t5

0xe739,	// (0x0007f3ae) list_single_dyc_row_text_pane_t6_ParamLimits

0xe739,	// (0x0007f3ae) list_single_dyc_row_text_pane_t6

0x5620,	// (0x00076295) aid_mgn_list_cale_time_pane

0x1e6e,	// (0x00072ae3) main_gallery2_pane_ParamLimits

0x089a,	// (0x0007150f) main_clock2_pane_cp01_t1

0x08a8,	// (0x0007151d) main_clock2_pane_cp01_t3

0x0001,

0xf745,	// (0x000803ba) main_clock2_pane_cp01_t

0x429e,	// (0x00074f13) cale_week_scroll_pane_g16_ParamLimits

0x429e,	// (0x00074f13) cale_week_scroll_pane_g16

0x20eb,	// (0x00072d60) vorec_slider_pane

0xec2b,	// (0x0007f8a0) vidtel_button_pane_t1_ParamLimits

0xafd8,	// (0x0007bc4d) main_fs_bigclock_clock_pane_g1_ParamLimits

0xafd8,	// (0x0007bc4d) main_fs_bigclock_clock_pane_g2_ParamLimits

0xafe9,	// (0x0007bc5e) main_fs_bigclock_clock_pane_g3_ParamLimits

0xafe9,	// (0x0007bc5e) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd62,	// (0x000809d7) main_fs_bigclock_clock_pane_g_ParamLimits

0xaffc,	// (0x0007bc71) main_fs_bigclock_clock_pane_t1_ParamLimits

0xb012,	// (0x0007bc87) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd6b,	// (0x000809e0) main_fs_bigclock_clock_pane_t_ParamLimits

0x6cf7,	// (0x0007796c) main_mup3_lyrics_pane_ParamLimits

0x6cf7,	// (0x0007796c) main_mup3_lyrics_pane

0xbe13,	// (0x0007ca88) main_mup3_lyrics_pane_t1_ParamLimits

0xbe13,	// (0x0007ca88) main_mup3_lyrics_pane_t1

0xe20d,	// (0x0007ee82) aid_main_mp4_pane_t1_area

0xe217,	// (0x0007ee8c) aid_main_mp4_pane_t2_area

0xe2c3,	// (0x0007ef38) main_mp4_pane_g7_ParamLimits

0xe2c3,	// (0x0007ef38) main_mp4_pane_g7

0xe2cf,	// (0x0007ef44) main_mp4_pane_g8_ParamLimits

0xe2cf,	// (0x0007ef44) main_mp4_pane_g8

0x7dda,	// (0x00078a4f) aid_call6_pane_g1_size

0xbab1,	// (0x0007c726) list_double_large_graphic_phob2_other_pane_ParamLimits

0xbab1,	// (0x0007c726) list_double_large_graphic_phob2_other_pane

0xc930,	// (0x0007d5a5) list_double_large_graphic_phob2_other_pane_g1

0x17c6,	// (0x0007243b) list_highlight_pane_cp026

0x1e6e,	// (0x00072ae3) main_welc_pane_ParamLimits

0xa582,	// (0x0007b1f7) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xa582,	// (0x0007b1f7) main_sp_fs_ctrlbar_pane_g3

0xa59c,	// (0x0007b211) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xa59c,	// (0x0007b211) main_sp_fs_ctrlbar_pane_g4

0xa5d0,	// (0x0007b245) toolbar2_fixed_button_pane_cp01

0xa5db,	// (0x0007b250) toolbar2_fixed_button_pane_cp02

0xa5e8,	// (0x0007b25d) toolbar2_fixed_button_pane_cp03

0xbaf3,	// (0x0007c768) list_welc_entry_pane_ParamLimits

0xbaf3,	// (0x0007c768) list_welc_entry_pane

0xbb71,	// (0x0007c7e6) main_welc_pane_g3_ParamLimits

0xbb71,	// (0x0007c7e6) main_welc_pane_g3

0xbbc0,	// (0x0007c835) main_welc_pane_t2_ParamLimits

0xbbc0,	// (0x0007c835) main_welc_pane_t2

0xbbda,	// (0x0007c84f) main_welc_pane_t3_ParamLimits

0xbbda,	// (0x0007c84f) main_welc_pane_t3

0x0005,

0xfe6e,	// (0x00080ae3) main_welc_pane_t_ParamLimits

0xfe6e,	// (0x00080ae3) main_welc_pane_t

0xbd09,	// (0x0007c97e) welc_button_pane_ParamLimits

0xbd09,	// (0x0007c97e) welc_button_pane

0xbd71,	// (0x0007c9e6) welc_service_logo_pane_ParamLimits

0xbd71,	// (0x0007c9e6) welc_service_logo_pane

0xbe2f,	// (0x0007caa4) list_single_welc_entry_pane_ParamLimits

0xbe2f,	// (0x0007caa4) list_single_welc_entry_pane

0xbe40,	// (0x0007cab5) list_single_welc_entry_pane_g1

0xbe48,	// (0x0007cabd) list_single_welc_entry_pane_t1

0xbe56,	// (0x0007cacb) list_single_welc_entry_pane_t2

0x0001,

0xfe80,	// (0x00080af5) list_single_welc_entry_pane_t

0x17c6,	// (0x0007243b) bg_button_pane_cp035

0xecbd,	// (0x0007f932) welc_button_pane_t1

0xeccb,	// (0x0007f940) welc_service_logo_pane_g1

0xecd4,	// (0x0007f949) welc_service_logo_pane_g2

0x0001,

0xfe85,	// (0x00080afa) welc_service_logo_pane_g

0x17c6,	// (0x0007243b) main_int_radio_pane

0x1756,	// (0x000723cb) list_single_fs_dyc_pane_g1

0x39fc,	// (0x00074671) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x39fc,	// (0x00074671) list_double_large_graphic_phob2_pane_g3

0xba17,	// (0x0007c68c) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xba17,	// (0x0007c68c) list_double_large_graphic_phob2_pane_g4

0xbe64,	// (0x0007cad9) main_int_radio1_pane_ParamLimits

0xbe64,	// (0x0007cad9) main_int_radio1_pane

0xecdd,	// (0x0007f952) find_pane_cp02

0xbe81,	// (0x0007caf6) input_focus_pane_cp12_ParamLimits

0xbe81,	// (0x0007caf6) input_focus_pane_cp12

0xbe91,	// (0x0007cb06) input_focus_pane_cp13_ParamLimits

0xbe91,	// (0x0007cb06) input_focus_pane_cp13

0xbea5,	// (0x0007cb1a) input_focus_pane_cp14_ParamLimits

0xbea5,	// (0x0007cb1a) input_focus_pane_cp14

0xece6,	// (0x0007f95b) int_radio1_listscroll_pane

0xbeb9,	// (0x0007cb2e) main_int_radio1_pane_g1_ParamLimits

0xbeb9,	// (0x0007cb2e) main_int_radio1_pane_g1

0xbed1,	// (0x0007cb46) main_int_radio1_pane_t1_ParamLimits

0xbed1,	// (0x0007cb46) main_int_radio1_pane_t1

0xbeec,	// (0x0007cb61) main_int_radio1_pane_t2_ParamLimits

0xbeec,	// (0x0007cb61) main_int_radio1_pane_t2

0xbf07,	// (0x0007cb7c) main_int_radio1_pane_t3_ParamLimits

0xbf07,	// (0x0007cb7c) main_int_radio1_pane_t3

0xbf22,	// (0x0007cb97) main_int_radio1_pane_t4_ParamLimits

0xbf22,	// (0x0007cb97) main_int_radio1_pane_t4

0xecf0,	// (0x0007f965) main_int_radio1_pane_t5_ParamLimits

0xecf0,	// (0x0007f965) main_int_radio1_pane_t5

0xbf34,	// (0x0007cba9) main_int_radio1_pane_t6_ParamLimits

0xbf34,	// (0x0007cba9) main_int_radio1_pane_t6

0xbf49,	// (0x0007cbbe) main_int_radio1_pane_t7_ParamLimits

0xbf49,	// (0x0007cbbe) main_int_radio1_pane_t7

0xbf5e,	// (0x0007cbd3) main_int_radio1_pane_t8_ParamLimits

0xbf5e,	// (0x0007cbd3) main_int_radio1_pane_t8

0xbf7d,	// (0x0007cbf2) main_int_radio1_pane_t9_ParamLimits

0xbf7d,	// (0x0007cbf2) main_int_radio1_pane_t9

0xbf8f,	// (0x0007cc04) main_int_radio1_pane_t10_ParamLimits

0xbf8f,	// (0x0007cc04) main_int_radio1_pane_t10

0xbfb5,	// (0x0007cc2a) main_int_radio1_pane_t11_ParamLimits

0xbfb5,	// (0x0007cc2a) main_int_radio1_pane_t11

0xbfdb,	// (0x0007cc50) main_int_radio1_pane_t12_ParamLimits

0xbfdb,	// (0x0007cc50) main_int_radio1_pane_t12

0x000b,

0xfe8a,	// (0x00080aff) main_int_radio1_pane_t_ParamLimits

0xfe8a,	// (0x00080aff) main_int_radio1_pane_t

0xed02,	// (0x0007f977) int_radio_list_pane

0xeb7a,	// (0x0007f7ef) scroll_pane_cp037

0xed0a,	// (0x0007f97f) list_double_large_graphic_int_radio_pane_ParamLimits

0xed0a,	// (0x0007f97f) list_double_large_graphic_int_radio_pane

0xed23,	// (0x0007f998) list_double_large_graphic_int_radio_pane_g1

0xed2c,	// (0x0007f9a1) list_double_large_graphic_int_radio_pane_t1

0xed3a,	// (0x0007f9af) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfea3,	// (0x00080b18) list_double_large_graphic_int_radio_pane_t

0x17c6,	// (0x0007243b) list_highlight_pane_cp027

0xec72,	// (0x0007f8e7) main_button_pane_4

0xbb81,	// (0x0007c7f6) main_welc_pane_g4_ParamLimits

0xbb81,	// (0x0007c7f6) main_welc_pane_g4

0xbbf2,	// (0x0007c867) main_welc_pane_t4_ParamLimits

0xbbf2,	// (0x0007c867) main_welc_pane_t4

0xbc09,	// (0x0007c87e) main_welc_pane_t5_ParamLimits

0xbc09,	// (0x0007c87e) main_welc_pane_t5

0xbc46,	// (0x0007c8bb) main_welc_pane_t6_ParamLimits

0xbc46,	// (0x0007c8bb) main_welc_pane_t6

0xbd20,	// (0x0007c995) welc_button_pane_2_ParamLimits

0xbd20,	// (0x0007c995) welc_button_pane_2

0xbd3c,	// (0x0007c9b1) welc_button_pane_3_ParamLimits

0xbd3c,	// (0x0007c9b1) welc_button_pane_3

0xec7a,	// (0x0007f8ef) welc_button_pane_4

0xbd5b,	// (0x0007c9d0) welc_button_pane_5_ParamLimits

0xbd5b,	// (0x0007c9d0) welc_button_pane_5

0x3ae4,	// (0x00074759) main_popup_welc_pane

0xed57,	// (0x0007f9cc) main_welc_sk_g3

0xed61,	// (0x0007f9d6) main_welc_sk_g4

0xed6b,	// (0x0007f9e0) main_welc_sk_t3

0xed7b,	// (0x0007f9f0) main_welc_sk_t4

0xed8b,	// (0x0007fa00) popup_welc_pane_t4

0xed99,	// (0x0007fa0e) popup_welc_pane_t5

0xeda9,	// (0x0007fa1e) popup_welc_pane_t6

0x17c6,	// (0x0007243b) main_acti_pane

0x17c6,	// (0x0007243b) main_sso_pane

0xbfed,	// (0x0007cc62) sso_body_pane_ParamLimits

0xbfed,	// (0x0007cc62) sso_body_pane

0xc001,	// (0x0007cc76) sso_logo_pane_ParamLimits

0xc001,	// (0x0007cc76) sso_logo_pane

0xc02d,	// (0x0007cca2) sso_sk_pane_ParamLimits

0xc02d,	// (0x0007cca2) sso_sk_pane

0x210d,	// (0x00072d82) main_sso_logo_pane_g1

0xc03f,	// (0x0007ccb4) sso_sk_pane_t1_ParamLimits

0xc03f,	// (0x0007ccb4) sso_sk_pane_t1

0xc059,	// (0x0007ccce) sso_sk_pane_t2_ParamLimits

0xc059,	// (0x0007ccce) sso_sk_pane_t2

0x0001,

0xfea8,	// (0x00080b1d) sso_sk_pane_t_ParamLimits

0xfea8,	// (0x00080b1d) sso_sk_pane_t

0xede7,	// (0x0007fa5c) aid_sso_gap

0xedf0,	// (0x0007fa65) aid_sso_txt1

0xedfa,	// (0x0007fa6f) aid_sso_txt2

0xee04,	// (0x0007fa79) aid_sso_txt3

0x0002,

0xfead,	// (0x00080b22) aid_sso_txt

0xee0e,	// (0x0007fa83) aid_sso_widget

0xc0c3,	// (0x0007cd38) sso_btn_pane_ParamLimits

0xc0c3,	// (0x0007cd38) sso_btn_pane

0xc14b,	// (0x0007cdc0) sso_option_pane_ParamLimits

0xc14b,	// (0x0007cdc0) sso_option_pane

0xc1cb,	// (0x0007ce40) sso_query_pane_ParamLimits

0xc1cb,	// (0x0007ce40) sso_query_pane

0xc221,	// (0x0007ce96) sso_query_pane_cp01_ParamLimits

0xc221,	// (0x0007ce96) sso_query_pane_cp01

0xc27b,	// (0x0007cef0) sso_t_hdr_pane_ParamLimits

0xc27b,	// (0x0007cef0) sso_t_hdr_pane

0xc29f,	// (0x0007cf14) sso_t_nml_pane_ParamLimits

0xc29f,	// (0x0007cf14) sso_t_nml_pane

0xee04,	// (0x0007fa79) sso_t_sub_pane

0xc00e,	// (0x0007cc83) sso_popup_window_ParamLimits

0xc00e,	// (0x0007cc83) sso_popup_window

0xc06f,	// (0x0007cce4) sso_apps_pane_ParamLimits

0xc06f,	// (0x0007cce4) sso_apps_pane

0xc099,	// (0x0007cd0e) sso_body_pane_g1

0xc0a3,	// (0x0007cd18) sso_body_pane_t1

0xc0b3,	// (0x0007cd28) sso_body_pane_t2

0x0001,

0xfeb4,	// (0x00080b29) sso_body_pane_t

0xc115,	// (0x0007cd8a) sso_btn_pane_cp01_ParamLimits

0xc115,	// (0x0007cd8a) sso_btn_pane_cp01

0xc19f,	// (0x0007ce14) sso_prog_pane_ParamLimits

0xc19f,	// (0x0007ce14) sso_prog_pane

0xee18,	// (0x0007fa8d) sso_t_hdr_pane_t1_ParamLimits

0xee18,	// (0x0007fa8d) sso_t_hdr_pane_t1

0xee2b,	// (0x0007faa0) input_focus_pane_cp10_ParamLimits

0xee2b,	// (0x0007faa0) input_focus_pane_cp10

0xee41,	// (0x0007fab6) sso_query_pane_t1_ParamLimits

0xee41,	// (0x0007fab6) sso_query_pane_t1

0xee54,	// (0x0007fac9) sso_query_pane_t2_ParamLimits

0xee54,	// (0x0007fac9) sso_query_pane_t2

0xee6d,	// (0x0007fae2) sso_query_pane_t3_ParamLimits

0xee6d,	// (0x0007fae2) sso_query_pane_t3

0xee97,	// (0x0007fb0c) sso_query_pane_t4_ParamLimits

0xee97,	// (0x0007fb0c) sso_query_pane_t4

0x0003,

0xfeb9,	// (0x00080b2e) sso_query_pane_t_ParamLimits

0xfeb9,	// (0x00080b2e) sso_query_pane_t

0x17c6,	// (0x0007243b) bg_button_pane_cp22

0xed48,	// (0x0007f9bd) sso_btn_pane_t1

0xc2f5,	// (0x0007cf6a) sso_t_nml_pane_t1_ParamLimits

0xc2f5,	// (0x0007cf6a) sso_t_nml_pane_t1

0xeebb,	// (0x0007fb30) sso_option_row_pane_ParamLimits

0xeebb,	// (0x0007fb30) sso_option_row_pane

0xeec8,	// (0x0007fb3d) sso_t_sub_pane_t1_ParamLimits

0xeec8,	// (0x0007fb3d) sso_t_sub_pane_t1

0x1e6e,	// (0x00072ae3) bg_popup_window_pane_cp11_ParamLimits

0x1e6e,	// (0x00072ae3) bg_popup_window_pane_cp11

0xeedb,	// (0x0007fb50) popup_sk_window_cp01_ParamLimits

0xeedb,	// (0x0007fb50) popup_sk_window_cp01

0xeee8,	// (0x0007fb5d) sso_popup_body_pane_ParamLimits

0xeee8,	// (0x0007fb5d) sso_popup_body_pane

0xeef5,	// (0x0007fb6a) scroll_pane_cp21_ParamLimits

0xeef5,	// (0x0007fb6a) scroll_pane_cp21

0xef02,	// (0x0007fb77) sso_popup_body_t_pane_ParamLimits

0xef02,	// (0x0007fb77) sso_popup_body_t_pane

0xef0f,	// (0x0007fb84) sso_popup_body_t_hdr_pane_ParamLimits

0xef0f,	// (0x0007fb84) sso_popup_body_t_hdr_pane

0xef1d,	// (0x0007fb92) sso_popup_body_t_nml_pane_ParamLimits

0xef1d,	// (0x0007fb92) sso_popup_body_t_nml_pane

0xef38,	// (0x0007fbad) sso_popup_body_t_sub_pane_ParamLimits

0xef38,	// (0x0007fbad) sso_popup_body_t_sub_pane

0xef5b,	// (0x0007fbd0) sso_popup_body_t_hdr_pane_t1

0xc310,	// (0x0007cf85) sso_popup_body_t_nml_pane_t1_ParamLimits

0xc310,	// (0x0007cf85) sso_popup_body_t_nml_pane_t1

0x00f1,	// (0x00070d66) sso_popup_body_t_sub_pane_t1_ParamLimits

0x00f1,	// (0x00070d66) sso_popup_body_t_sub_pane_t1

0x210d,	// (0x00072d82) sso_prog_pane_g1

0xc34a,	// (0x0007cfbf) sso_apps_pane_comp1_ParamLimits

0xc34a,	// (0x0007cfbf) sso_apps_pane_comp1

0x0132,	// (0x00070da7) sso_apps_pane_comp1_g1

0x013a,	// (0x00070daf) sso_apps_pane_comp1_t1

0x0148,	// (0x00070dbd) sso_option_row_pane_g1

0x0150,	// (0x00070dc5) sso_option_row_pane_t1

0xbae0,	// (0x0007c755) bg_welc_area_ParamLimits

0xbae0,	// (0x0007c755) bg_welc_area

0xbc84,	// (0x0007c8f9) sso_t_hdr_pane_a_t1_ParamLimits

0xbc84,	// (0x0007c8f9) sso_t_hdr_pane_a_t1

0xbc9f,	// (0x0007c914) sso_t_nml_pane_a_t1_ParamLimits

0xbc9f,	// (0x0007c914) sso_t_nml_pane_a_t1

0xbcce,	// (0x0007c943) sso_t_sub_pane_a_t1_ParamLimits

0xbcce,	// (0x0007c943) sso_t_sub_pane_a_t1

0xed48,	// (0x0007f9bd) sso_btn_pane_t1_copy1

0x17c6,	// (0x0007243b) welc_button_pane_2_comp1

0xedb7,	// (0x0007fa2c) sso_t_hdr_pane_p_t1

0xedc7,	// (0x0007fa3c) sso_t_nml_pane_p_t1

0xedd7,	// (0x0007fa4c) sso_t_sub_pane_p_t1
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
