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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00074d3a };

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
0x151a,	// (0x00076254) Screen

0x1526,	// (0x00076260) application_window

0x1562,	// (0x0007629c) area_bottom_pane_ParamLimits

0x1562,	// (0x0007629c) area_bottom_pane

0x159b,	// (0x000762d5) area_top_pane_ParamLimits

0x159b,	// (0x000762d5) area_top_pane

0xa8c6,	// (0x0007f600) call_video_uplink_pane_ParamLimits

0xa8c6,	// (0x0007f600) call_video_uplink_pane

0x1610,	// (0x0007634a) main_pane_ParamLimits

0x1610,	// (0x0007634a) main_pane

0xbced,	// (0x00080a27) context_pane

0x5b33,	// (0x0007a86d) navi_pane

0x5b5b,	// (0x0007a895) popup_cale_events_window_ParamLimits

0x5b5b,	// (0x0007a895) popup_cale_events_window

0xbd00,	// (0x00080a3a) popup_mup_playback_window

0x5b73,	// (0x0007a8ad) signal_pane

0x21dd,	// (0x00076f17) main_browser_pane

0x4703,	// (0x0007943d) main_burst_pane

0x5893,	// (0x0007a5cd) main_calc_pane

0x4703,	// (0x0007943d) main_cale_day_pane

0x21dd,	// (0x00076f17) main_cale_month_pane

0x4703,	// (0x0007943d) main_cale_week_pane

0x4703,	// (0x0007943d) main_call_pane

0x1bfd,	// (0x00076937) main_call_poc_pane

0x4703,	// (0x0007943d) main_camera_pane

0x4703,	// (0x0007943d) main_chi_dic_pane

0x425e,	// (0x00078f98) main_clock_pane

0x1bfd,	// (0x00076937) main_fmradio_pane

0x4703,	// (0x0007943d) main_graph_messa_pane

0x1bfd,	// (0x00076937) main_help_pane

0x21dd,	// (0x00076f17) main_im_pane

0x1e58,	// (0x00076b92) main_image_pane_ParamLimits

0x1e58,	// (0x00076b92) main_image_pane

0x1bfd,	// (0x00076937) main_location2_pane

0x4703,	// (0x0007943d) main_location_pane

0x1bfd,	// (0x00076937) main_messa_pane

0x1bfd,	// (0x00076937) main_mp2_pane

0x4703,	// (0x0007943d) main_mp_pane

0x1bfd,	// (0x00076937) main_msg_pane

0x1bfd,	// (0x00076937) main_mup_eq_pane

0x1bfd,	// (0x00076937) main_mup_pane

0x21dd,	// (0x00076f17) main_notes_pane

0x1bfd,	// (0x00076937) main_pec_pane

0x1bfd,	// (0x00076937) main_phob_pane

0x1bfd,	// (0x00076937) main_pinb_pane

0x1bfd,	// (0x00076937) main_postcard_pane

0x1bfd,	// (0x00076937) main_qdial_pane

0x4703,	// (0x0007943d) main_skin_pane

0x1bfd,	// (0x00076937) main_smil2_pane

0x4703,	// (0x0007943d) main_smil_pane

0x4703,	// (0x0007943d) main_video_pane

0x4703,	// (0x0007943d) main_video_tele_pane

0x1e58,	// (0x00076b92) main_viewer_pane_ParamLimits

0x1e58,	// (0x00076b92) main_viewer_pane

0x4703,	// (0x0007943d) main_vorec_pane

0x58e7,	// (0x0007a621) popup_blid_sat_info_window_ParamLimits

0x58e7,	// (0x0007a621) popup_blid_sat_info_window

0x593f,	// (0x0007a679) popup_dyc_status_message_window_ParamLimits

0x593f,	// (0x0007a679) popup_dyc_status_message_window

0x5957,	// (0x0007a691) popup_grid_large_graphic_window_ParamLimits

0x5957,	// (0x0007a691) popup_grid_large_graphic_window

0x5a0d,	// (0x0007a747) popup_loc_request_window_ParamLimits

0x5a0d,	// (0x0007a747) popup_loc_request_window

0x5b0b,	// (0x0007a845) popup_wml_address_window_ParamLimits

0x5b0b,	// (0x0007a845) popup_wml_address_window

0x56cd,	// (0x0007a407) call_muted_g1

0x5385,	// (0x0007a0bf) popup_call_audio_conf_window_ParamLimits

0x5385,	// (0x0007a0bf) popup_call_audio_conf_window

0x56e1,	// (0x0007a41b) popup_call_audio_first_window_ParamLimits

0x56e1,	// (0x0007a41b) popup_call_audio_first_window

0x5757,	// (0x0007a491) popup_call_audio_in_window_ParamLimits

0x5757,	// (0x0007a491) popup_call_audio_in_window

0x5793,	// (0x0007a4cd) popup_call_audio_out_window_ParamLimits

0x5793,	// (0x0007a4cd) popup_call_audio_out_window

0x57cd,	// (0x0007a507) popup_call_audio_second_window_ParamLimits

0x57cd,	// (0x0007a507) popup_call_audio_second_window

0x5823,	// (0x0007a55d) popup_call_audio_wait_window_ParamLimits

0x5823,	// (0x0007a55d) popup_call_audio_wait_window

0x5858,	// (0x0007a592) popup_number_entry_window_ParamLimits

0x5858,	// (0x0007a592) popup_number_entry_window

0x1792,	// (0x000764cc) bg_popup_call_pane_cp05_ParamLimits

0x1792,	// (0x000764cc) bg_popup_call_pane_cp05

0x17b2,	// (0x000764ec) popup_number_entry_window_t1

0x17c5,	// (0x000764ff) popup_number_entry_window_t2

0x17d7,	// (0x00076511) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x00083e21) popup_number_entry_window_t

0x181f,	// (0x00076559) text_title_cp2

0x1832,	// (0x0007656c) bg_popup_call_pane_cp_ParamLimits

0x1832,	// (0x0007656c) bg_popup_call_pane_cp

0x1840,	// (0x0007657a) call_thumbnail_pane

0x1848,	// (0x00076582) popup_call_audio_in_window_g1_ParamLimits

0x1848,	// (0x00076582) popup_call_audio_in_window_g1

0x1854,	// (0x0007658e) popup_call_audio_in_window_g2_ParamLimits

0x1854,	// (0x0007658e) popup_call_audio_in_window_g2

0x1860,	// (0x0007659a) popup_call_audio_in_window_g3_ParamLimits

0x1860,	// (0x0007659a) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x00083e2a) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x00083e2a) popup_call_audio_in_window_g

0x186c,	// (0x000765a6) popup_call_audio_in_window_t1_ParamLimits

0x186c,	// (0x000765a6) popup_call_audio_in_window_t1

0x1887,	// (0x000765c1) popup_call_audio_in_window_t2_ParamLimits

0x1887,	// (0x000765c1) popup_call_audio_in_window_t2

0x18a2,	// (0x000765dc) popup_call_audio_in_window_t3_ParamLimits

0x18a2,	// (0x000765dc) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x00083e31) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x00083e31) popup_call_audio_in_window_t

0x1832,	// (0x0007656c) bg_popup_call_pane_cp01_ParamLimits

0x1832,	// (0x0007656c) bg_popup_call_pane_cp01

0x1840,	// (0x0007657a) call_thumbnail_pane_cp02

0x18b5,	// (0x000765ef) call_type_pane_cp022

0x18bd,	// (0x000765f7) popup_call_audio_out_window_g1_ParamLimits

0x18bd,	// (0x000765f7) popup_call_audio_out_window_g1

0x18cf,	// (0x00076609) popup_call_audio_out_window_g2_ParamLimits

0x18cf,	// (0x00076609) popup_call_audio_out_window_g2

0x18db,	// (0x00076615) popup_call_audio_out_window_g3_ParamLimits

0x18db,	// (0x00076615) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x00083e38) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x00083e38) popup_call_audio_out_window_g

0x18ed,	// (0x00076627) popup_call_audio_out_window_t1_ParamLimits

0x18ed,	// (0x00076627) popup_call_audio_out_window_t1

0x1905,	// (0x0007663f) popup_call_audio_out_window_t2_ParamLimits

0x1905,	// (0x0007663f) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x00083e3f) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x00083e3f) popup_call_audio_out_window_t

0x191a,	// (0x00076654) bg_popup_call_pane_ParamLimits

0x191a,	// (0x00076654) bg_popup_call_pane

0x199e,	// (0x000766d8) call_thumbnail_pane_cp_ParamLimits

0x199e,	// (0x000766d8) call_thumbnail_pane_cp

0x19c2,	// (0x000766fc) call_type_pane_cp01_ParamLimits

0x19c2,	// (0x000766fc) call_type_pane_cp01

0x1a06,	// (0x00076740) popup_call_audio_first_window_g1_ParamLimits

0x1a06,	// (0x00076740) popup_call_audio_first_window_g1

0x1a52,	// (0x0007678c) popup_call_audio_first_window_g2_ParamLimits

0x1a52,	// (0x0007678c) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x00083e44) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x00083e44) popup_call_audio_first_window_g

0x1a96,	// (0x000767d0) popup_call_audio_first_window_t1_ParamLimits

0x1a96,	// (0x000767d0) popup_call_audio_first_window_t1

0x1b42,	// (0x0007687c) popup_call_audio_first_window_t4_ParamLimits

0x1b42,	// (0x0007687c) popup_call_audio_first_window_t4

0x1bce,	// (0x00076908) popup_call_audio_first_window_t5_ParamLimits

0x1bce,	// (0x00076908) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x00083e49) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x00083e49) popup_call_audio_first_window_t

0x1bfd,	// (0x00076937) bg_popup_call_pane_cp02

0x1c07,	// (0x00076941) call_type_pane_cp023

0x1c0f,	// (0x00076949) popup_call_audio_wait_window_g1

0x1c17,	// (0x00076951) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x00083e50) popup_call_audio_wait_window_g

0x1c1f,	// (0x00076959) popup_call_audio_wait_window_t3

0x1c2d,	// (0x00076967) bg_popup_call_pane_cp03_ParamLimits

0x1c2d,	// (0x00076967) bg_popup_call_pane_cp03

0x1c8d,	// (0x000769c7) call_thumbnail_pane_cp011_ParamLimits

0x1c8d,	// (0x000769c7) call_thumbnail_pane_cp011

0x1c99,	// (0x000769d3) call_type_pane_cp034_ParamLimits

0x1c99,	// (0x000769d3) call_type_pane_cp034

0x1cd5,	// (0x00076a0f) popup_call_audio_second_window_g1_ParamLimits

0x1cd5,	// (0x00076a0f) popup_call_audio_second_window_g1

0x1d11,	// (0x00076a4b) popup_call_audio_second_window_g2_ParamLimits

0x1d11,	// (0x00076a4b) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x00083e55) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x00083e55) popup_call_audio_second_window_g

0x1d4d,	// (0x00076a87) popup_call_audio_second_window_t1_ParamLimits

0x1d4d,	// (0x00076a87) popup_call_audio_second_window_t1

0x1dce,	// (0x00076b08) popup_call_audio_second_window_t2_ParamLimits

0x1dce,	// (0x00076b08) popup_call_audio_second_window_t2

0x1e04,	// (0x00076b3e) popup_call_audio_second_window_t3_ParamLimits

0x1e04,	// (0x00076b3e) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x00083e5a) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x00083e5a) popup_call_audio_second_window_t

0x1bfd,	// (0x00076937) bg_popup_call_pane_cp04

0x1e3a,	// (0x00076b74) list_conf_pane

0x1e42,	// (0x00076b7c) popup_call_audio_conf_window_t1

0x1e50,	// (0x00076b8a) call_thumbnail_pane_g1

0x1e58,	// (0x00076b92) bg_pinb_pane_ParamLimits

0x1e58,	// (0x00076b92) bg_pinb_pane

0x1e66,	// (0x00076ba0) find_pinb_pane

0x1e6f,	// (0x00076ba9) listscroll_pinb_pane_ParamLimits

0x1e6f,	// (0x00076ba9) listscroll_pinb_pane

0x1e7e,	// (0x00076bb8) pinb_bg_pane_g1

0x1e88,	// (0x00076bc2) pinb_bg_pane_g2

0x1e94,	// (0x00076bce) pinb_bg_pane_g3

0x1ea0,	// (0x00076bda) pinb_bg_pane_g4

0x1eac,	// (0x00076be6) pinb_bg_pane_g5

0x1eb8,	// (0x00076bf2) pinb_bg_pane_g6

0x1ec3,	// (0x00076bfd) pinb_bg_pane_g7

0x1ece,	// (0x00076c08) pinb_bg_pane_g8

0x1ed9,	// (0x00076c13) pinb_bg_pane_g9

0x1ee3,	// (0x00076c1d) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x00083e61) pinb_bg_pane_g

0x1f00,	// (0x00076c3a) grid_pinb_pane

0x1f09,	// (0x00076c43) list_pinb_pane

0x1f12,	// (0x00076c4c) scroll_pane_cp01_ParamLimits

0x1f12,	// (0x00076c4c) scroll_pane_cp01

0x1f24,	// (0x00076c5e) find_pinb_pane_g1_ParamLimits

0x1f24,	// (0x00076c5e) find_pinb_pane_g1

0x1f3c,	// (0x00076c76) find_pinb_pane_t1

0x1f4e,	// (0x00076c88) find_pinb_pane_t2

0x0001,

0xf141,	// (0x00083e7b) find_pinb_pane_t

0x1f63,	// (0x00076c9d) input_focus_pane_cp01_ParamLimits

0x1f63,	// (0x00076c9d) input_focus_pane_cp01

0x1f6f,	// (0x00076ca9) cell_pinb_pane_ParamLimits

0x1f6f,	// (0x00076ca9) cell_pinb_pane

0x1fa1,	// (0x00076cdb) cell_pinb_pane_g1_ParamLimits

0x1fa1,	// (0x00076cdb) cell_pinb_pane_g1

0x1fb1,	// (0x00076ceb) cell_pinb_pane_g2_ParamLimits

0x1fb1,	// (0x00076ceb) cell_pinb_pane_g2

0x1fbd,	// (0x00076cf7) cell_pinb_pane_g3_ParamLimits

0x1fbd,	// (0x00076cf7) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x00083e80) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x00083e80) cell_pinb_pane_g

0x1bfd,	// (0x00076937) grid_highlight_pane_cp01

0x1fc9,	// (0x00076d03) list_pinb_item_pane_ParamLimits

0x1fc9,	// (0x00076d03) list_pinb_item_pane

0x1bfd,	// (0x00076937) list_highlight_pane_cp02

0x1fdd,	// (0x00076d17) list_pinb_item_pane_g1_ParamLimits

0x1fdd,	// (0x00076d17) list_pinb_item_pane_g1

0x1fea,	// (0x00076d24) list_pinb_item_pane_g2_ParamLimits

0x1fea,	// (0x00076d24) list_pinb_item_pane_g2

0x1ff6,	// (0x00076d30) list_pinb_item_pane_g3_ParamLimits

0x1ff6,	// (0x00076d30) list_pinb_item_pane_g3

0x2007,	// (0x00076d41) list_pinb_item_pane_g4_ParamLimits

0x2007,	// (0x00076d41) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x00083e87) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x00083e87) list_pinb_item_pane_g

0x2013,	// (0x00076d4d) list_pinb_item_pane_t1_ParamLimits

0x2013,	// (0x00076d4d) list_pinb_item_pane_t1

0x2048,	// (0x00076d82) calc_display_pane

0x2070,	// (0x00076daa) calc_paper_pane

0x2093,	// (0x00076dcd) grid_calc_pane

0x1bfd,	// (0x00076937) bg_list_pane_cp01

0x20c1,	// (0x00076dfb) clock_g1

0x20c9,	// (0x00076e03) clock_g2

0x0001,

0xf156,	// (0x00083e90) clock_g

0x20d1,	// (0x00076e0b) clock_t1_ParamLimits

0x20d1,	// (0x00076e0b) clock_t1

0x20e6,	// (0x00076e20) clock_t2_ParamLimits

0x20e6,	// (0x00076e20) clock_t2

0x20f8,	// (0x00076e32) clock_t3_ParamLimits

0x20f8,	// (0x00076e32) clock_t3

0x210a,	// (0x00076e44) clock_t4_ParamLimits

0x210a,	// (0x00076e44) clock_t4

0x211c,	// (0x00076e56) clock_t5_ParamLimits

0x211c,	// (0x00076e56) clock_t5

0x2131,	// (0x00076e6b) clock_t6_ParamLimits

0x2131,	// (0x00076e6b) clock_t6

0x2143,	// (0x00076e7d) clock_t7_ParamLimits

0x2143,	// (0x00076e7d) clock_t7

0x2155,	// (0x00076e8f) clock_t8_ParamLimits

0x2155,	// (0x00076e8f) clock_t8

0x2169,	// (0x00076ea3) clock_t9_ParamLimits

0x2169,	// (0x00076ea3) clock_t9

0x0008,

0xf15b,	// (0x00083e95) clock_t_ParamLimits

0xf15b,	// (0x00083e95) clock_t

0x217d,	// (0x00076eb7) popup_clock_analogue_window_cp02

0x217d,	// (0x00076eb7) popup_clock_digital_window_cp01

0x2185,	// (0x00076ebf) listscroll_help_pane

0x1bfd,	// (0x00076937) phob_pre_status_pane

0x218f,	// (0x00076ec9) grid_qdial_pane

0x1bfd,	// (0x00076937) listscroll_mce_pane

0x2199,	// (0x00076ed3) bg_notes_pane

0x21a7,	// (0x00076ee1) list_notes_pane

0x21b5,	// (0x00076eef) scroll_pane_cp06

0x21c9,	// (0x00076f03) bg_calc_paper_pane

0xa8fa,	// (0x0007f634) list_calc_pane

0x21dd,	// (0x00076f17) bg_calc_display_pane

0x21e9,	// (0x00076f23) calc_display_pane_t1

0x21fb,	// (0x00076f35) calc_display_pane_t2

0xa914,	// (0x0007f64e) calc_display_pane_t3

0x0002,

0xf16e,	// (0x00083ea8) calc_display_pane_t

0x220d,	// (0x00076f47) cell_calc_pane_ParamLimits

0x220d,	// (0x00076f47) cell_calc_pane

0x2244,	// (0x00076f7e) bg_calc_paper_pane_g1

0x2250,	// (0x00076f8a) bg_calc_paper_pane_g2

0x225c,	// (0x00076f96) bg_calc_paper_pane_g3

0x2268,	// (0x00076fa2) bg_calc_paper_pane_g4

0x2274,	// (0x00076fae) bg_calc_paper_pane_g5

0x2280,	// (0x00076fba) bg_calc_paper_pane_g6

0x2291,	// (0x00076fcb) bg_calc_paper_pane_g7

0x22a2,	// (0x00076fdc) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x00083eaf) bg_calc_paper_pane_g

0x22b5,	// (0x00076fef) calc_bg_paper_pane_g9

0x22c8,	// (0x00077002) list_calc_item_pane_ParamLimits

0x22c8,	// (0x00077002) list_calc_item_pane

0x22e0,	// (0x0007701a) list_calc_item_pane_g1

0xa926,	// (0x0007f660) list_calc_item_pane_t1_ParamLimits

0xa926,	// (0x0007f660) list_calc_item_pane_t1

0x22ed,	// (0x00077027) list_calc_item_pane_t2_ParamLimits

0x22ed,	// (0x00077027) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x00083ec0) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x00083ec0) list_calc_item_pane_t

0x2307,	// (0x00077041) cell_calc_pane_g1

0x2329,	// (0x00077063) grid_highlight_pane_cp02

0x234b,	// (0x00077085) bg_calc_display_pane_g1

0xa938,	// (0x0007f672) bg_calc_display_pane_g2

0x2354,	// (0x0007708e) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x00083eca) bg_calc_display_pane_g

0x235d,	// (0x00077097) cell_qdial_pane_ParamLimits

0x235d,	// (0x00077097) cell_qdial_pane

0x2371,	// (0x000770ab) cell_qdial_pane_g1_ParamLimits

0x2371,	// (0x000770ab) cell_qdial_pane_g1

0x2387,	// (0x000770c1) cell_qdial_pane_g2_ParamLimits

0x2387,	// (0x000770c1) cell_qdial_pane_g2

0x2398,	// (0x000770d2) cell_qdial_pane_g3_ParamLimits

0x2398,	// (0x000770d2) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x00083ed1) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x00083ed1) cell_qdial_pane_g

0x23ba,	// (0x000770f4) cell_qdial_pane_t1_ParamLimits

0x23ba,	// (0x000770f4) cell_qdial_pane_t1

0x23d2,	// (0x0007710c) cell_qdial_pane_t2_ParamLimits

0x23d2,	// (0x0007710c) cell_qdial_pane_t2

0x23e5,	// (0x0007711f) cell_qdial_pane_t3_ParamLimits

0x23e5,	// (0x0007711f) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x00083eda) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x00083eda) cell_qdial_pane_t

0x1bfd,	// (0x00076937) grid_highlight_pane_cp04

0x23f8,	// (0x00077132) thumbnail_qdial_pane_ParamLimits

0x23f8,	// (0x00077132) thumbnail_qdial_pane

0x2454,	// (0x0007718e) list_help_pane

0x245d,	// (0x00077197) scroll_pane_cp02

0x2466,	// (0x000771a0) help_list_pane_t1_ParamLimits

0x2466,	// (0x000771a0) help_list_pane_t1

0xa942,	// (0x0007f67c) bg_notes_pane_g2

0xa94a,	// (0x0007f684) bg_notes_pane_g3

0xa952,	// (0x0007f68c) notes_bg_pane_g1

0xa95a,	// (0x0007f694) notes_bg_pane_g4

0xa962,	// (0x0007f69c) notes_bg_pane_g5

0xa96a,	// (0x0007f6a4) notes_bg_pane_g6

0xa972,	// (0x0007f6ac) notes_bg_pane_g7

0xa97a,	// (0x0007f6b4) notes_bg_pane_g8

0xa982,	// (0x0007f6bc) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x00083ef8) notes_bg_pane_g

0x2486,	// (0x000771c0) list_notes_text_pane_ParamLimits

0x2486,	// (0x000771c0) list_notes_text_pane

0x249d,	// (0x000771d7) list_notes_text_pane_g1

0x0b37,	// (0x00075871) list_notes_text_pane_t1

0x21dd,	// (0x00076f17) listscroll_cale_week_pane

0x24d4,	// (0x0007720e) bg_cale_heading_pane

0x24ec,	// (0x00077226) bg_cale_pane_cp01

0x2505,	// (0x0007723f) cale_week_corner_pane

0x2516,	// (0x00077250) cale_week_day_heading_pane

0x252e,	// (0x00077268) cale_week_scroll_pane_g1

0x2543,	// (0x0007727d) cale_week_scroll_pane_g2

0x2554,	// (0x0007728e) cale_week_scroll_pane_g3

0x2565,	// (0x0007729f) cale_week_scroll_pane_g4

0x2576,	// (0x000772b0) cale_week_scroll_pane_g5

0x2589,	// (0x000772c3) cale_week_scroll_pane_g6

0x259c,	// (0x000772d6) cale_week_scroll_pane_g7

0x25af,	// (0x000772e9) cale_week_scroll_pane_g8

0x25c2,	// (0x000772fc) cale_week_scroll_pane_g9

0x25d3,	// (0x0007730d) cale_week_scroll_pane_g10

0x25e4,	// (0x0007731e) cale_week_scroll_pane_g11

0x25f5,	// (0x0007732f) cale_week_scroll_pane_g12

0x2606,	// (0x00077340) cale_week_scroll_pane_g13

0x2617,	// (0x00077351) cale_week_scroll_pane_g14

0x2628,	// (0x00077362) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x00083f07) cale_week_scroll_pane_g

0x263d,	// (0x00077377) cale_week_time_pane

0x2650,	// (0x0007738a) grid_cale_week_pane

0x2677,	// (0x000773b1) scroll_pane_cp08

0x2691,	// (0x000773cb) cell_cale_week_pane_ParamLimits

0x2691,	// (0x000773cb) cell_cale_week_pane

0x26d1,	// (0x0007740b) cale_week_day_heading_pane_t1

0x26e5,	// (0x0007741f) cale_week_day_heading_pane_t2

0x26f9,	// (0x00077433) cale_week_day_heading_pane_t3

0x270d,	// (0x00077447) cale_week_day_heading_pane_t4

0x2721,	// (0x0007745b) cale_week_day_heading_pane_t5

0x2735,	// (0x0007746f) cale_week_day_heading_pane_t6

0x274b,	// (0x00077485) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x00083f26) cale_week_day_heading_pane_t

0x275f,	// (0x00077499) bg_cale_side_pane

0x276d,	// (0x000774a7) cale_week_time_pane_t1

0x2785,	// (0x000774bf) cale_week_time_pane_t2

0x279d,	// (0x000774d7) cale_week_time_pane_t3

0x27b5,	// (0x000774ef) cale_week_time_pane_t4

0x27cd,	// (0x00077507) cale_week_time_pane_t5

0x27e5,	// (0x0007751f) cale_week_time_pane_t6

0x27fd,	// (0x00077537) cale_week_time_pane_t7

0x2815,	// (0x0007754f) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x00083f35) cale_week_time_pane_t

0x282d,	// (0x00077567) cell_cale_week_pane_g2

0x2846,	// (0x00077580) cell_cale_week_pane_g3_ParamLimits

0x2846,	// (0x00077580) cell_cale_week_pane_g3

0x285e,	// (0x00077598) grid_highlight_pane_cp07

0x2866,	// (0x000775a0) listscroll_gms_pane

0x2870,	// (0x000775aa) grid_gms_pane

0x2879,	// (0x000775b3) listscroll_gms_pane_g1

0x2881,	// (0x000775bb) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x00083f46) listscroll_gms_pane_g

0x2889,	// (0x000775c3) scroll_pane_cp010

0x2894,	// (0x000775ce) cell_gms_pane_ParamLimits

0x2894,	// (0x000775ce) cell_gms_pane

0x28a6,	// (0x000775e0) cell_gms_pane_g1

0x28ae,	// (0x000775e8) cell_gms_pane_g2

0x249d,	// (0x000771d7) cell_gms_pane_g3

0x28b6,	// (0x000775f0) cell_gms_pane_g4

0x0003,

0xf211,	// (0x00083f4b) cell_gms_pane_g

0x28bf,	// (0x000775f9) grid_highlight_pane_cp09

0x5675,	// (0x0007a3af) phob_pre_status_pane_g1

0x567d,	// (0x0007a3b7) phob_pre_status_pane_g2

0x5685,	// (0x0007a3bf) phob_pre_status_pane_g3

0x568d,	// (0x0007a3c7) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x0008433a) phob_pre_status_pane_g

0x569f,	// (0x0007a3d9) phob_pre_status_pane_t1

0x56ad,	// (0x0007a3e7) phob_pre_status_pane_t2

0x56bd,	// (0x0007a3f7) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x00084345) phob_pre_status_pane_t

0x1bfd,	// (0x00076937) bg_list_pane_cp05

0xa992,	// (0x0007f6cc) grid_vorec_pane

0xa99a,	// (0x0007f6d4) vorec_t1

0xa9a8,	// (0x0007f6e2) vorec_t2

0xa9b6,	// (0x0007f6f0) vorec_t3

0xa9c4,	// (0x0007f6fe) vorec_t4

0xa9d2,	// (0x0007f70c) vorec_t5

0xa9e0,	// (0x0007f71a) vorec_t6

0x0006,

0xf21a,	// (0x00083f54) vorec_t

0xa9fc,	// (0x0007f736) wait_bar_pane_cp01

0x28c7,	// (0x00077601) cell_vorec_pane_ParamLimits

0x28c7,	// (0x00077601) cell_vorec_pane

0x28da,	// (0x00077614) cell_vorec_pane_g1

0x1bfd,	// (0x00076937) grid_highlight_pane_cp05

0x28fc,	// (0x00077636) cams_zoom_pane

0x290b,	// (0x00077645) image_vga_pane

0x2925,	// (0x0007765f) main_camera_pane_g1

0x2937,	// (0x00077671) main_camera_pane_g2

0x2949,	// (0x00077683) main_camera_pane_g3

0x295b,	// (0x00077695) main_camera_pane_g4

0x296d,	// (0x000776a7) main_camera_pane_g5

0x297f,	// (0x000776b9) main_camera_pane_g6

0x2991,	// (0x000776cb) main_camera_pane_g7

0x0007,

0xf229,	// (0x00083f63) main_camera_pane_g

0x29af,	// (0x000776e9) main_camera_pane_t1

0x29c5,	// (0x000776ff) main_camera_pane_t2

0x0001,

0xf23a,	// (0x00083f74) main_camera_pane_t

0x2a01,	// (0x0007773b) cams_zoom_pane_cp_ParamLimits

0x2a01,	// (0x0007773b) cams_zoom_pane_cp

0x2a29,	// (0x00077763) image_cif_pane_ParamLimits

0x2a29,	// (0x00077763) image_cif_pane

0x2a64,	// (0x0007779e) image_subqcif_pane

0x2a6c,	// (0x000777a6) main_video_pane_g1_ParamLimits

0x2a6c,	// (0x000777a6) main_video_pane_g1

0x2a90,	// (0x000777ca) main_video_pane_g2_ParamLimits

0x2a90,	// (0x000777ca) main_video_pane_g2

0x2ac6,	// (0x00077800) main_video_pane_g3_ParamLimits

0x2ac6,	// (0x00077800) main_video_pane_g3

0x2af6,	// (0x00077830) main_video_pane_g4_ParamLimits

0x2af6,	// (0x00077830) main_video_pane_g4

0x2b26,	// (0x00077860) main_video_pane_g5_ParamLimits

0x2b26,	// (0x00077860) main_video_pane_g5

0x2b40,	// (0x0007787a) main_video_pane_g6_ParamLimits

0x2b40,	// (0x0007787a) main_video_pane_g6

0x0006,

0xf23f,	// (0x00083f79) main_video_pane_g_ParamLimits

0xf23f,	// (0x00083f79) main_video_pane_g

0x2b6b,	// (0x000778a5) main_video_pane_t1_ParamLimits

0x2b6b,	// (0x000778a5) main_video_pane_t1

0x2bb4,	// (0x000778ee) cams_zoom_pane_g1

0x2bbd,	// (0x000778f7) cams_zoom_pane_g2

0x2bc6,	// (0x00077900) cams_zoom_pane_g3

0x2bcf,	// (0x00077909) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x00083f88) cams_zoom_pane_g

0x2bec,	// (0x00077926) grid_cams_pane

0x2c06,	// (0x00077940) linegrid_cams_pane

0x2c19,	// (0x00077953) cell_cams_pane_ParamLimits

0x2c19,	// (0x00077953) cell_cams_pane

0x2c39,	// (0x00077973) cams_burst_image_pane

0x2c41,	// (0x0007797b) cell_cams_pane_g1

0x1bfd,	// (0x00076937) grid_highlight_pane_cp03

0x2307,	// (0x00077041) mp_bg_pane_g1

0x1bfd,	// (0x00076937) bg_list_pane_cp03

0xbbc5,	// (0x000808ff) bg_mp_pane

0xbbcd,	// (0x00080907) grid_mp_pane

0xbbd5,	// (0x0008090f) media_player_g1

0xbbdd,	// (0x00080917) media_player_t1

0xbbeb,	// (0x00080925) media_player_t2

0xbbf9,	// (0x00080933) media_player_t3

0xbc07,	// (0x00080941) media_player_t4

0xbc15,	// (0x0008094f) media_player_t5

0xbc23,	// (0x0008095d) media_player_t6

0xbc31,	// (0x0008096b) media_player_t7

0x0006,

0xf5ea,	// (0x00084324) media_player_t

0xbc3f,	// (0x00080979) wait_bar_pane_cp02

0xf5cf,	// (0x00084309) main_usb_pane_t

0x566c,	// (0x0007a3a6) cell_mp_pane

0x2307,	// (0x00077041) cell_mp_pane_g1

0x1bfd,	// (0x00076937) grid_highlight_pane_cp06

0x2c49,	// (0x00077983) grid_skin_colour_pane

0x2c51,	// (0x0007798b) list_highlight_pane_cp03

0x2c59,	// (0x00077993) skin_g1

0x2c61,	// (0x0007799b) skin_t1

0x2c70,	// (0x000779aa) skin_t2

0x0001,

0xf283,	// (0x00083fbd) skin_t

0x2c7e,	// (0x000779b8) cell_skin_colour_pane_ParamLimits

0x2c7e,	// (0x000779b8) cell_skin_colour_pane

0x2c9e,	// (0x000779d8) cell_skin_colour_pane_g1

0x2d09,	// (0x00077a43) call_video_g1_ParamLimits

0x2d09,	// (0x00077a43) call_video_g1

0x2d25,	// (0x00077a5f) call_video_g2_ParamLimits

0x2d25,	// (0x00077a5f) call_video_g2

0x0001,

0xf288,	// (0x00083fc2) call_video_g_ParamLimits

0xf288,	// (0x00083fc2) call_video_g

0x2d77,	// (0x00077ab1) call_video_uplink_pane_cp1_ParamLimits

0x2d77,	// (0x00077ab1) call_video_uplink_pane_cp1

0x2ddc,	// (0x00077b16) call_video_uplink_pane_cp2

0x2e1e,	// (0x00077b58) video_down_crop_pane_ParamLimits

0x2e1e,	// (0x00077b58) video_down_crop_pane

0x2f07,	// (0x00077c41) video_down_pane_ParamLimits

0x2f07,	// (0x00077c41) video_down_pane

0x2ffe,	// (0x00077d38) video_down_subqcif_pane_ParamLimits

0x2ffe,	// (0x00077d38) video_down_subqcif_pane

0x3016,	// (0x00077d50) video_down_subqcif_pane_cp_ParamLimits

0x3016,	// (0x00077d50) video_down_subqcif_pane_cp

0x3053,	// (0x00077d8d) im_reading_pane_ParamLimits

0x3053,	// (0x00077d8d) im_reading_pane

0x3065,	// (0x00077d9f) im_writing_pane_ParamLimits

0x3065,	// (0x00077d9f) im_writing_pane

0x3083,	// (0x00077dbd) im_reading_pane_t1

0x30bf,	// (0x00077df9) list_im_pane

0x30d0,	// (0x00077e0a) scroll_pane_cp07

0x30e9,	// (0x00077e23) im_writing_pane_t1_ParamLimits

0x30e9,	// (0x00077e23) im_writing_pane_t1

0x30fe,	// (0x00077e38) im_writing_pane_t2_ParamLimits

0x30fe,	// (0x00077e38) im_writing_pane_t2

0x0001,

0xf292,	// (0x00083fcc) im_writing_pane_t_ParamLimits

0xf292,	// (0x00083fcc) im_writing_pane_t

0x1bfd,	// (0x00076937) input_focus_pane_cp04

0x1bfd,	// (0x00076937) input_focus_pane_cp05

0x311b,	// (0x00077e55) list_im_single_pane_ParamLimits

0x311b,	// (0x00077e55) list_im_single_pane

0x3131,	// (0x00077e6b) list_single_im_pane_t1

0x562c,	// (0x0007a366) blid_accuracy_pane

0x5634,	// (0x0007a36e) blid_compass_pane

0x563e,	// (0x0007a378) main_location_t1

0x564e,	// (0x0007a388) main_location_t2

0x565e,	// (0x0007a398) main_location_t3

0x0002,

0xf5f9,	// (0x00084333) main_location_t

0x1bfd,	// (0x00076937) aid_levels_location

0x2307,	// (0x00077041) blid_accuracy_pane_g1

0x2307,	// (0x00077041) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x0008402e) blid_accuracy_pane_g

0x316b,	// (0x00077ea5) wml_content_pane

0x31a9,	// (0x00077ee3) wml_button_pane_ParamLimits

0x31a9,	// (0x00077ee3) wml_button_pane

0x31bd,	// (0x00077ef7) wml_list_single_large_pane_ParamLimits

0x31bd,	// (0x00077ef7) wml_list_single_large_pane

0x31d4,	// (0x00077f0e) wml_list_single_medium_pane_ParamLimits

0x31d4,	// (0x00077f0e) wml_list_single_medium_pane

0x31ec,	// (0x00077f26) wml_list_single_small_pane_ParamLimits

0x31ec,	// (0x00077f26) wml_list_single_small_pane

0x320a,	// (0x00077f44) wml_selection_box_pane_ParamLimits

0x320a,	// (0x00077f44) wml_selection_box_pane

0x321d,	// (0x00077f57) wml_list_single_pane_t1

0x322c,	// (0x00077f66) wml_list_single_medium_pane_t1

0x323b,	// (0x00077f75) wml_list_single_large_pane_t1

0x324a,	// (0x00077f84) input_focus_pane_cp02_ParamLimits

0x324a,	// (0x00077f84) input_focus_pane_cp02

0x325d,	// (0x00077f97) wml_selection_box_pane_g1

0x3266,	// (0x00077fa0) wml_selection_box_pane_t1_ParamLimits

0x3266,	// (0x00077fa0) wml_selection_box_pane_t1

0x1e58,	// (0x00076b92) bg_wml_button_pane_ParamLimits

0x1e58,	// (0x00076b92) bg_wml_button_pane

0x327e,	// (0x00077fb8) wml_button_pane_g1

0x3286,	// (0x00077fc0) wml_button_pane_t1

0x327e,	// (0x00077fb8) wml_button_bg_pane_g1

0x3296,	// (0x00077fd0) wml_button_bg_pane_g2

0x329e,	// (0x00077fd8) wml_button_bg_pane_g3

0x32a6,	// (0x00077fe0) wml_button_bg_pane_g4

0x32ae,	// (0x00077fe8) wml_button_bg_pane_g5

0x32b6,	// (0x00077ff0) wml_button_bg_pane_g6

0x32be,	// (0x00077ff8) wml_button_bg_pane_g7

0x32c6,	// (0x00078000) wml_button_bg_pane_g8

0x32ce,	// (0x00078008) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x00083fd1) wml_button_bg_pane_g

0x32d6,	// (0x00078010) bg_list_pane_cp02

0x32de,	// (0x00078018) mce_header_pane_ParamLimits

0x32de,	// (0x00078018) mce_header_pane

0x32f4,	// (0x0007802e) mce_icon_pane

0x32f4,	// (0x0007802e) mce_image_pane

0x32fd,	// (0x00078037) mce_text_pane_ParamLimits

0x32fd,	// (0x00078037) mce_text_pane

0x3310,	// (0x0007804a) scroll_pane_cp03

0x31a1,	// (0x00077edb) scroll_pane_cp04

0x331a,	// (0x00078054) scroll_pane_cp05_ParamLimits

0x331a,	// (0x00078054) scroll_pane_cp05

0x3326,	// (0x00078060) mce_header_field_pane_ParamLimits

0x3326,	// (0x00078060) mce_header_field_pane

0x333d,	// (0x00078077) mce_header_field_pane_2_ParamLimits

0x333d,	// (0x00078077) mce_header_field_pane_2

0x3353,	// (0x0007808d) mce_header_field_pane_3

0x335b,	// (0x00078095) list_single_mce_message_pane_ParamLimits

0x335b,	// (0x00078095) list_single_mce_message_pane

0x3373,	// (0x000780ad) list_single_mce_smart_pane_ParamLimits

0x3373,	// (0x000780ad) list_single_mce_smart_pane

0x3396,	// (0x000780d0) input_focus_pane_cp03

0x339f,	// (0x000780d9) list_header_data_pane

0x33a7,	// (0x000780e1) mce_header_field_pane_t1

0x33b7,	// (0x000780f1) list_single_mce_header_pane_ParamLimits

0x33b7,	// (0x000780f1) list_single_mce_header_pane

0x33cb,	// (0x00078105) list_single_mce_header_pane_t1

0x33da,	// (0x00078114) list_single_mce_message_pane_g1

0x33e2,	// (0x0007811c) list_single_mce_message_pane_t1

0x340e,	// (0x00078148) bg_cale_heading_pane_cp01_ParamLimits

0x340e,	// (0x00078148) bg_cale_heading_pane_cp01

0x3431,	// (0x0007816b) bg_cale_pane_cp02_ParamLimits

0x3431,	// (0x0007816b) bg_cale_pane_cp02

0x3454,	// (0x0007818e) cale_month_corner_pane

0x346a,	// (0x000781a4) cale_month_day_heading_pane_ParamLimits

0x346a,	// (0x000781a4) cale_month_day_heading_pane

0x349d,	// (0x000781d7) cale_month_pane_g1_ParamLimits

0x349d,	// (0x000781d7) cale_month_pane_g1

0x34b9,	// (0x000781f3) cale_month_pane_g2_ParamLimits

0x34b9,	// (0x000781f3) cale_month_pane_g2

0x34d4,	// (0x0007820e) cale_month_pane_g3_ParamLimits

0x34d4,	// (0x0007820e) cale_month_pane_g3

0x3500,	// (0x0007823a) cale_month_pane_g4_ParamLimits

0x3500,	// (0x0007823a) cale_month_pane_g4

0x352c,	// (0x00078266) cale_month_pane_g5_ParamLimits

0x352c,	// (0x00078266) cale_month_pane_g5

0x3560,	// (0x0007829a) cale_month_pane_g6_ParamLimits

0x3560,	// (0x0007829a) cale_month_pane_g6

0x359c,	// (0x000782d6) cale_month_pane_g7_ParamLimits

0x359c,	// (0x000782d6) cale_month_pane_g7

0x35d8,	// (0x00078312) cale_month_pane_g8_ParamLimits

0x35d8,	// (0x00078312) cale_month_pane_g8

0x3614,	// (0x0007834e) cale_month_pane_g9_ParamLimits

0x3614,	// (0x0007834e) cale_month_pane_g9

0x364e,	// (0x00078388) cale_month_pane_g10_ParamLimits

0x364e,	// (0x00078388) cale_month_pane_g10

0x3688,	// (0x000783c2) cale_month_pane_g11_ParamLimits

0x3688,	// (0x000783c2) cale_month_pane_g11

0x36c2,	// (0x000783fc) cale_month_pane_g12_ParamLimits

0x36c2,	// (0x000783fc) cale_month_pane_g12

0x36fc,	// (0x00078436) cale_month_pane_g13_ParamLimits

0x36fc,	// (0x00078436) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x00083fe4) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x00083fe4) cale_month_pane_g

0x3748,	// (0x00078482) cale_month_week_pane

0x375b,	// (0x00078495) grid_cale_month_pane_ParamLimits

0x375b,	// (0x00078495) grid_cale_month_pane

0x3789,	// (0x000784c3) cale_month_day_heading_pane_t1

0x37e7,	// (0x00078521) cale_month_day_heading_pane_t2

0x384c,	// (0x00078586) cale_month_day_heading_pane_t3

0x38b1,	// (0x000785eb) cale_month_day_heading_pane_t4

0x3916,	// (0x00078650) cale_month_day_heading_pane_t5

0x398b,	// (0x000786c5) cale_month_day_heading_pane_t6

0x3a00,	// (0x0007873a) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x00083fff) cale_month_day_heading_pane_t

0x275f,	// (0x00077499) bg_cale_side_pane_cp01

0x3a75,	// (0x000787af) cale_month_week_pane_t1

0x3a8c,	// (0x000787c6) cale_month_week_pane_t2

0x3aa3,	// (0x000787dd) cale_month_week_pane_t3

0x3aba,	// (0x000787f4) cale_month_week_pane_t4

0x3ad1,	// (0x0007880b) cale_month_week_pane_t5

0x3ae8,	// (0x00078822) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x0008400e) cale_month_week_pane_t

0x3aff,	// (0x00078839) cell_cale_month_pane_ParamLimits

0x3aff,	// (0x00078839) cell_cale_month_pane

0xaaec,	// (0x0007f826) cell_cale_month_pane_g1

0x3bd5,	// (0x0007890f) cell_cale_month_pane_t1_ParamLimits

0x3bd5,	// (0x0007890f) cell_cale_month_pane_t1

0x285e,	// (0x00077598) grid_highlight_pane_cp08

0x2307,	// (0x00077041) main_smil_g1

0x3bf1,	// (0x0007892b) smil_status_pane

0x3bfc,	// (0x00078936) smil_text_pane

0xbadd,	// (0x00080817) bg_popup_call3_rect_pane_g8

0xbae5,	// (0x0008081f) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x000842c7) bg_popup_call3_rect_pane_g

0xbd67,	// (0x00080aa1) smil_status_volume_pane_g1

0x3c10,	// (0x0007894a) smil_status_pane_t1

0xbd9a,	// (0x00080ad4) volume_smil_pane

0x3c27,	// (0x00078961) list_smil_text_pane

0x3c31,	// (0x0007896b) scroll_pane_cp011

0x3c3c,	// (0x00078976) smil_text_list_pane_t1_ParamLimits

0x3c3c,	// (0x00078976) smil_text_list_pane_t1

0xaaf8,	// (0x0007f832) aid_volume_smil_ParamLimits

0xaaf8,	// (0x0007f832) aid_volume_smil

0x2307,	// (0x00077041) smil_volume_pane_g1

0x2307,	// (0x00077041) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x0008402e) smil_volume_pane_g

0x21dd,	// (0x00076f17) listscroll_cale_day_pane

0x3c90,	// (0x000789ca) bg_cale_pane

0x3ca8,	// (0x000789e2) list_cale_pane

0x3cb9,	// (0x000789f3) scroll_pane_cp09

0x3cca,	// (0x00078a04) cale_bg_pane_g1

0x3cd2,	// (0x00078a0c) cale_bg_pane_g2

0x3cda,	// (0x00078a14) cale_bg_pane_g3

0x3ce2,	// (0x00078a1c) cale_bg_pane_g4

0x3cea,	// (0x00078a24) cale_bg_pane_g5

0x3cf2,	// (0x00078a2c) cale_bg_pane_g6

0x3cfa,	// (0x00078a34) cale_bg_pane_g7

0x3d02,	// (0x00078a3c) cale_bg_pane_g8

0x3d0a,	// (0x00078a44) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x00084033) cale_bg_pane_g

0x3d12,	// (0x00078a4c) list_cale_time_pane_ParamLimits

0x3d12,	// (0x00078a4c) list_cale_time_pane

0x3d27,	// (0x00078a61) list_cale_time_pane_g1_ParamLimits

0x3d27,	// (0x00078a61) list_cale_time_pane_g1

0x3d33,	// (0x00078a6d) list_cale_time_pane_g2_ParamLimits

0x3d33,	// (0x00078a6d) list_cale_time_pane_g2

0x3d40,	// (0x00078a7a) list_cale_time_pane_g3_ParamLimits

0x3d40,	// (0x00078a7a) list_cale_time_pane_g3

0x3d5c,	// (0x00078a96) list_cale_time_pane_g4_ParamLimits

0x3d5c,	// (0x00078a96) list_cale_time_pane_g4

0x3d6a,	// (0x00078aa4) list_cale_time_pane_g5_ParamLimits

0x3d6a,	// (0x00078aa4) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x00084046) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x00084046) list_cale_time_pane_g

0x3d85,	// (0x00078abf) list_cale_time_pane_t1_ParamLimits

0x3d85,	// (0x00078abf) list_cale_time_pane_t1

0x3dad,	// (0x00078ae7) list_cale_time_pane_t2_ParamLimits

0x3dad,	// (0x00078ae7) list_cale_time_pane_t2

0x4483,	// (0x000791bd) aid_blid_cardinal_pane

0x44cd,	// (0x00079207) compass_pane_t4

0x3dd5,	// (0x00078b0f) list_cale_time_pane_t4_ParamLimits

0x3dd5,	// (0x00078b0f) list_cale_time_pane_t4

0x44db,	// (0x00079215) compass_pane_t5

0x44e9,	// (0x00079223) compass_pane_t6

0x44f7,	// (0x00079231) compass_pane_t7

0x458d,	// (0x000792c7) navi_pane_cc_t1

0x47aa,	// (0x000794e4) aid_phob_thumbnail_center_pane

0x4dec,	// (0x00079b26) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x00084053) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x00084053) list_cale_time_pane_t

0x1832,	// (0x0007656c) bg_popup_window_pane_cp02_ParamLimits

0x1832,	// (0x0007656c) bg_popup_window_pane_cp02

0x3dfd,	// (0x00078b37) heading_pane_cp01_ParamLimits

0x3dfd,	// (0x00078b37) heading_pane_cp01

0x3e09,	// (0x00078b43) loc_req_pane_ParamLimits

0x3e09,	// (0x00078b43) loc_req_pane

0x3e19,	// (0x00078b53) loc_type_pane_ParamLimits

0x3e19,	// (0x00078b53) loc_type_pane

0x3e2b,	// (0x00078b65) loc_type_pane_t1_ParamLimits

0x3e2b,	// (0x00078b65) loc_type_pane_t1

0x3e3d,	// (0x00078b77) loc_type_pane_t2_ParamLimits

0x3e3d,	// (0x00078b77) loc_type_pane_t2

0x3e4f,	// (0x00078b89) loc_type_pane_t3_ParamLimits

0x3e4f,	// (0x00078b89) loc_type_pane_t3

0x0002,

0xf320,	// (0x0008405a) loc_type_pane_t_ParamLimits

0xf320,	// (0x0008405a) loc_type_pane_t

0x3e61,	// (0x00078b9b) list_loc_req_pane

0x3e6b,	// (0x00078ba5) scroll_pane_cp012

0x3e76,	// (0x00078bb0) list_single_loc_request_popup_menu_pane_ParamLimits

0x3e76,	// (0x00078bb0) list_single_loc_request_popup_menu_pane

0x3e83,	// (0x00078bbd) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3e83,	// (0x00078bbd) list_single_loc_request_popup_menu_pane_g1

0x3e8f,	// (0x00078bc9) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3e8f,	// (0x00078bc9) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x00084061) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x00084061) list_single_loc_request_popup_menu_pane_g

0x3e9b,	// (0x00078bd5) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3e9b,	// (0x00078bd5) list_single_loc_request_popup_menu_pane_t1

0x1e58,	// (0x00076b92) bg_popup_window_pane_cp03_ParamLimits

0x1e58,	// (0x00076b92) bg_popup_window_pane_cp03

0x3eb1,	// (0x00078beb) heading_loc_req_pane_ParamLimits

0x3eb1,	// (0x00078beb) heading_loc_req_pane

0x3ebd,	// (0x00078bf7) popup_dyc_status_message_window_g1_ParamLimits

0x3ebd,	// (0x00078bf7) popup_dyc_status_message_window_g1

0x3ed1,	// (0x00078c0b) popup_dyc_status_message_window_t1_ParamLimits

0x3ed1,	// (0x00078c0b) popup_dyc_status_message_window_t1

0x3ee6,	// (0x00078c20) popup_dyc_status_message_window_t2_ParamLimits

0x3ee6,	// (0x00078c20) popup_dyc_status_message_window_t2

0x3efb,	// (0x00078c35) popup_dyc_status_message_window_t3_ParamLimits

0x3efb,	// (0x00078c35) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x00084066) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x00084066) popup_dyc_status_message_window_t

0x1bfd,	// (0x00076937) bg_heading_pane_cp01

0x3f17,	// (0x00078c51) heading_loc_req_pane_g1

0x3f1f,	// (0x00078c59) heading_loc_req_pane_g2

0x3f27,	// (0x00078c61) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x0008406d) heading_loc_req_pane_g

0x3f2f,	// (0x00078c69) heading_loc_req_pane_t1

0x3f56,	// (0x00078c90) bg_popup_sub_pane_cp01_ParamLimits

0x3f56,	// (0x00078c90) bg_popup_sub_pane_cp01

0x3f64,	// (0x00078c9e) popup_cale_events_window_g1_ParamLimits

0x3f64,	// (0x00078c9e) popup_cale_events_window_g1

0x3f84,	// (0x00078cbe) popup_cale_events_window_g2_ParamLimits

0x3f84,	// (0x00078cbe) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x000840a1) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x000840a1) popup_cale_events_window_g

0x3fa4,	// (0x00078cde) popup_cale_events_window_t1_ParamLimits

0x3fa4,	// (0x00078cde) popup_cale_events_window_t1

0x3fb6,	// (0x00078cf0) popup_cale_events_window_t2_ParamLimits

0x3fb6,	// (0x00078cf0) popup_cale_events_window_t2

0x3ff4,	// (0x00078d2e) popup_cale_events_window_t3_ParamLimits

0x3ff4,	// (0x00078d2e) popup_cale_events_window_t3

0x402e,	// (0x00078d68) popup_cale_events_window_t4_ParamLimits

0x402e,	// (0x00078d68) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x000840a6) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x000840a6) popup_cale_events_window_t

0x4064,	// (0x00078d9e) call_type_pane

0x4074,	// (0x00078dae) popup_call_status_window_g1

0x4088,	// (0x00078dc2) popup_call_status_window_g2

0x409c,	// (0x00078dd6) popup_call_status_window_g3

0x0002,

0xf375,	// (0x000840af) popup_call_status_window_g

0x40ac,	// (0x00078de6) call_type_pane_g1

0x40b5,	// (0x00078def) call_type_pane_g2

0x0001,

0xf37c,	// (0x000840b6) call_type_pane_g

0x1bfd,	// (0x00076937) bg_popup_sub_pane_cp02

0x40be,	// (0x00078df8) listscroll_popup_wml_pane

0x40c6,	// (0x00078e00) list_wml_pane

0x40d0,	// (0x00078e0a) scroll_pane_cp013

0x40db,	// (0x00078e15) list_single_graphic_popup_wml_pane_ParamLimits

0x40db,	// (0x00078e15) list_single_graphic_popup_wml_pane

0x2307,	// (0x00077041) list_single_graphic_popup_wml_pane_g1

0x40ef,	// (0x00078e29) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x000840bb) list_single_graphic_popup_wml_pane_g

0x40f7,	// (0x00078e31) list_single_graphic_popup_wml_pane_t1

0x410d,	// (0x00078e47) aid_call_pane

0x1e50,	// (0x00076b8a) popup_clock_analogue_window_g1

0x1e50,	// (0x00076b8a) popup_clock_analogue_window_g2

0xab91,	// (0x0007f8cb) popup_clock_analogue_window_g3

0xab91,	// (0x0007f8cb) popup_clock_analogue_window_g4

0x2307,	// (0x00077041) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x000840c0) popup_clock_analogue_window_g

0xab99,	// (0x0007f8d3) popup_clock_analogue_window_t1

0xaba7,	// (0x0007f8e1) clock_digital_number_pane_ParamLimits

0xaba7,	// (0x0007f8e1) clock_digital_number_pane

0xabb3,	// (0x0007f8ed) clock_digital_number_pane_cp02_ParamLimits

0xabb3,	// (0x0007f8ed) clock_digital_number_pane_cp02

0xabbf,	// (0x0007f8f9) clock_digital_number_pane_cp03_ParamLimits

0xabbf,	// (0x0007f8f9) clock_digital_number_pane_cp03

0xabcb,	// (0x0007f905) clock_digital_number_pane_cp04_ParamLimits

0xabcb,	// (0x0007f905) clock_digital_number_pane_cp04

0xabd7,	// (0x0007f911) clock_digital_separator_pane_ParamLimits

0xabd7,	// (0x0007f911) clock_digital_separator_pane

0xabe3,	// (0x0007f91d) popup_clock_digital_window_t1

0x2307,	// (0x00077041) clock_digital_number_pane_g1

0x2307,	// (0x00077041) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x0008402e) clock_digital_number_pane_g

0x2307,	// (0x00077041) clock_digital_separator_pane_g1

0x2307,	// (0x00077041) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x0008402e) clock_digital_separator_pane_g

0x1bfd,	// (0x00076937) bg_popup_window_pane_cp04

0x4115,	// (0x00078e4f) heading_pane_cp03

0x411d,	// (0x00078e57) listscroll_popup_gms_pane

0x4125,	// (0x00078e5f) grid_large_graphic_popup_pane

0x412f,	// (0x00078e69) listscroll_popup_gms_pane_g1

0x4137,	// (0x00078e71) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x000840cb) listscroll_popup_gms_pane_g

0x31a1,	// (0x00077edb) scroll_pane_cp014

0x413f,	// (0x00078e79) cell_large_graphic_popup_pane_ParamLimits

0x413f,	// (0x00078e79) cell_large_graphic_popup_pane

0x4157,	// (0x00078e91) cell_large_graphic_popup_pane_g1_ParamLimits

0x4157,	// (0x00078e91) cell_large_graphic_popup_pane_g1

0x4163,	// (0x00078e9d) cell_large_graphic_popup_pane_g2_ParamLimits

0x4163,	// (0x00078e9d) cell_large_graphic_popup_pane_g2

0x416f,	// (0x00078ea9) cell_large_graphic_popup_pane_g3_ParamLimits

0x416f,	// (0x00078ea9) cell_large_graphic_popup_pane_g3

0x417c,	// (0x00078eb6) cell_large_graphic_popup_pane_g4_ParamLimits

0x417c,	// (0x00078eb6) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x000840d0) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x000840d0) cell_large_graphic_popup_pane_g

0x418c,	// (0x00078ec6) grid_highlight_pane_cp010

0x2307,	// (0x00077041) bg_popup_call_pane_g1

0x4196,	// (0x00078ed0) list_single_graphic_popup_conf_pane_ParamLimits

0x4196,	// (0x00078ed0) list_single_graphic_popup_conf_pane

0x41a8,	// (0x00078ee2) list_highlight_pane_cp01

0x41b1,	// (0x00078eeb) list_single_graphic_popup_conf_pane_g1

0x41b9,	// (0x00078ef3) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x000840d9) list_single_graphic_popup_conf_pane_g

0x41c1,	// (0x00078efb) list_single_graphic_popup_conf_pane_t1

0x41cf,	// (0x00078f09) linegrid_cams_pane_g1

0x41d8,	// (0x00078f12) linegrid_cams_pane_g2

0x249d,	// (0x000771d7) linegrid_cams_pane_g3

0x41e1,	// (0x00078f1b) linegrid_cams_pane_g4

0x41ea,	// (0x00078f24) linegrid_cams_pane_g5

0x41f3,	// (0x00078f2d) linegrid_cams_pane_g6

0x28b6,	// (0x000775f0) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x000840de) linegrid_cams_pane_g

0x41fe,	// (0x00078f38) popup_clock_analogue_window

0x41fe,	// (0x00078f38) popup_clock_digital_window

0x1bfd,	// (0x00076937) popup_phob_thumbnail_window

0x2307,	// (0x00077041) call_video_uplink_pane_g1

0x4207,	// (0x00078f41) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x000840ed) call_video_uplink_pane_g

0x285e,	// (0x00077598) video_uplink_pane

0x420f,	// (0x00078f49) mce_image_pane_g1

0x4219,	// (0x00078f53) mce_image_pane_g2

0x4221,	// (0x00078f5b) mce_image_pane_g3

0x4229,	// (0x00078f63) mce_image_pane_g4

0x4231,	// (0x00078f6b) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x000840f2) mce_image_pane_g

0x4239,	// (0x00078f73) control_top_pane_stacon_cp01_ParamLimits

0x4239,	// (0x00078f73) control_top_pane_stacon_cp01

0x424d,	// (0x00078f87) uni_indicator_pane_stacon_cp01_ParamLimits

0x424d,	// (0x00078f87) uni_indicator_pane_stacon_cp01

0x425e,	// (0x00078f98) bg_popup_sub_pane_cp03

0x4268,	// (0x00078fa2) chi_dic_find_pane

0x4270,	// (0x00078faa) listscroll_chi_dic_pane

0x4279,	// (0x00078fb3) main_pane_chidic_g1

0x428c,	// (0x00078fc6) chi_dic_find_pane_t1

0x429a,	// (0x00078fd4) find_chidic_pane

0x42a3,	// (0x00078fdd) chi_dic_list_pane_ParamLimits

0x42a3,	// (0x00078fdd) chi_dic_list_pane

0x42b4,	// (0x00078fee) scroll_pane_cp020

0x42bc,	// (0x00078ff6) find_chidic_pane_t1

0x1bfd,	// (0x00076937) input_focus_pane_cp06

0x42cb,	// (0x00079005) list_chi_dic_pane_ParamLimits

0x42cb,	// (0x00079005) list_chi_dic_pane

0x42df,	// (0x00079019) list_chi_dic_pane_t1_ParamLimits

0x42df,	// (0x00079019) list_chi_dic_pane_t1

0x1bfd,	// (0x00076937) list_highlight_pane_cp020

0x42f2,	// (0x0007902c) bg_cale_heading_pane_g1

0x42fa,	// (0x00079034) bg_cale_heading_pane_g2

0x4302,	// (0x0007903c) bg_cale_heading_pane_g3

0x430a,	// (0x00079044) bg_cale_heading_pane_g4

0x4314,	// (0x0007904e) bg_cale_heading_pane_g5

0x431e,	// (0x00079058) bg_cale_heading_pane_g6

0x4326,	// (0x00079060) bg_cale_heading_pane_g7

0x432e,	// (0x00079068) bg_cale_heading_pane_g8

0x4338,	// (0x00079072) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x000840fd) bg_cale_heading_pane_g

0x42f2,	// (0x0007902c) bg_cale_side_pane_g1

0x4342,	// (0x0007907c) bg_cale_side_pane_g2

0x434a,	// (0x00079084) bg_cale_side_pane_g3

0x4352,	// (0x0007908c) bg_cale_side_pane_g4

0x435a,	// (0x00079094) bg_cale_side_pane_g5

0x4362,	// (0x0007909c) bg_cale_side_pane_g6

0x436a,	// (0x000790a4) bg_cale_side_pane_g7

0x4372,	// (0x000790ac) bg_cale_side_pane_g8

0x437a,	// (0x000790b4) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x00084110) bg_cale_side_pane_g

0x4382,	// (0x000790bc) popup_call_status_window_ParamLimits

0x4382,	// (0x000790bc) popup_call_status_window

0x43c9,	// (0x00079103) stacon_top_pane

0x43d1,	// (0x0007910b) status_pane_ParamLimits

0x43d1,	// (0x0007910b) status_pane

0x43e6,	// (0x00079120) status_small_pane

0x43ee,	// (0x00079128) control_pane

0x1bfd,	// (0x00076937) stacon_bottom_pane

0x43f6,	// (0x00079130) list_single_mce_smart_pane_t1_ParamLimits

0x43f6,	// (0x00079130) list_single_mce_smart_pane_t1

0x4409,	// (0x00079143) list_single_mce_smart_pane_t2_ParamLimits

0x4409,	// (0x00079143) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x00084123) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x00084123) list_single_mce_smart_pane_t

0x4428,	// (0x00079162) compass_pane

0x4431,	// (0x0007916b) main_location2_pane_t1

0x4445,	// (0x0007917f) main_location2_pane_t2

0x4459,	// (0x00079193) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x00084128) main_location2_pane_t

0x44a3,	// (0x000791dd) compass_pane_g1_ParamLimits

0x44a3,	// (0x000791dd) compass_pane_g1

0x44af,	// (0x000791e9) compass_pane_t1

0x44be,	// (0x000791f8) compass_pane_t2

0x0005,

0xf3f7,	// (0x00084131) compass_pane_t

0x4505,	// (0x0007923f) text_secondary_cp61

0x4584,	// (0x000792be) navi_pane_cams_g5

0x45fe,	// (0x00079338) navi_pane_im_t1

0x460c,	// (0x00079346) navi_pane_mp_g1_ParamLimits

0x460c,	// (0x00079346) navi_pane_mp_g1

0x4620,	// (0x0007935a) navi_pane_mp_g2_ParamLimits

0x4620,	// (0x0007935a) navi_pane_mp_g2

0x462c,	// (0x00079366) navi_pane_mp_g3_ParamLimits

0x462c,	// (0x00079366) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x00084145) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x00084145) navi_pane_mp_g

0x4638,	// (0x00079372) navi_pane_mp_t1

0x4646,	// (0x00079380) navi_pane_mp_t2

0x0002,

0xf412,	// (0x0008414c) navi_pane_mp_t

0x46f3,	// (0x0007942d) navi_pane_vt_g1

0x4638,	// (0x00079372) navi_pane_vt_t1

0x46fb,	// (0x00079435) navi_slider_pane

0x4703,	// (0x0007943d) zooming_pane

0x470b,	// (0x00079445) navi_slider_pane_g1

0xac00,	// (0x0007f93a) navi_slider_pane_g2

0x0006,

0xf419,	// (0x00084153) navi_slider_pane_g

0x472f,	// (0x00079469) aid_levels_zoom

0x4737,	// (0x00079471) zooming_pane_g1

0x473f,	// (0x00079479) zooming_pane_g2

0x473f,	// (0x00079479) zooming_pane_g3

0x0002,

0xf428,	// (0x00084162) zooming_pane_g

0x4747,	// (0x00079481) level_10_zoom

0x4750,	// (0x0007948a) level_11_zoom

0x4759,	// (0x00079493) level_1_zoom

0x4762,	// (0x0007949c) level_2_zoom

0x476b,	// (0x000794a5) level_3_zoom

0x4774,	// (0x000794ae) level_4_zoom

0x477d,	// (0x000794b7) level_5_zoom

0x4786,	// (0x000794c0) level_6_zoom

0x478f,	// (0x000794c9) level_7_zoom

0x4798,	// (0x000794d2) level_8_zoom

0x47a1,	// (0x000794db) level_9_zoom

0x47b2,	// (0x000794ec) popup_phob_thumbnail_window_g1

0x47ba,	// (0x000794f4) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x00084169) popup_phob_thumbnail_window_g

0xbc47,	// (0x00080981) level_1_location

0xbc4f,	// (0x00080989) level_2_location

0xbc57,	// (0x00080991) level_3_location

0xbc5f,	// (0x00080999) level_4_location

0x4703,	// (0x0007943d) level_5_location

0x47c2,	// (0x000794fc) mce_icon_pane_g1

0x47ca,	// (0x00079504) mce_icon_pane_g2

0x0001,

0xf434,	// (0x0008416e) mce_icon_pane_g

0x47d2,	// (0x0007950c) main_mup_pane_g1_ParamLimits

0x47d2,	// (0x0007950c) main_mup_pane_g1

0x47e8,	// (0x00079522) main_mup_pane_g2_ParamLimits

0x47e8,	// (0x00079522) main_mup_pane_g2

0x4800,	// (0x0007953a) main_mup_pane_g3_ParamLimits

0x4800,	// (0x0007953a) main_mup_pane_g3

0x4818,	// (0x00079552) main_mup_pane_g4_ParamLimits

0x4818,	// (0x00079552) main_mup_pane_g4

0x4830,	// (0x0007956a) main_mup_pane_g5_ParamLimits

0x4830,	// (0x0007956a) main_mup_pane_g5

0x484c,	// (0x00079586) main_mup_pane_g6_ParamLimits

0x484c,	// (0x00079586) main_mup_pane_g6

0x4864,	// (0x0007959e) main_mup_pane_g7_ParamLimits

0x4864,	// (0x0007959e) main_mup_pane_g7

0x487c,	// (0x000795b6) main_mup_pane_g8_ParamLimits

0x487c,	// (0x000795b6) main_mup_pane_g8

0x4894,	// (0x000795ce) main_mup_pane_g9_ParamLimits

0x4894,	// (0x000795ce) main_mup_pane_g9

0x48ae,	// (0x000795e8) main_mup_pane_g10_ParamLimits

0x48ae,	// (0x000795e8) main_mup_pane_g10

0x48c8,	// (0x00079602) main_mup_pane_g11_ParamLimits

0x48c8,	// (0x00079602) main_mup_pane_g11

0x48dc,	// (0x00079616) main_mup_pane_g12_ParamLimits

0x48dc,	// (0x00079616) main_mup_pane_g12

0x48f2,	// (0x0007962c) main_mup_pane_g13_ParamLimits

0x48f2,	// (0x0007962c) main_mup_pane_g13

0x000c,

0xf439,	// (0x00084173) main_mup_pane_g_ParamLimits

0xf439,	// (0x00084173) main_mup_pane_g

0x4906,	// (0x00079640) main_mup_pane_t1_ParamLimits

0x4906,	// (0x00079640) main_mup_pane_t1

0x4920,	// (0x0007965a) main_mup_pane_t2_ParamLimits

0x4920,	// (0x0007965a) main_mup_pane_t2

0x4938,	// (0x00079672) main_mup_pane_t3_ParamLimits

0x4938,	// (0x00079672) main_mup_pane_t3

0x4950,	// (0x0007968a) main_mup_pane_t4_ParamLimits

0x4950,	// (0x0007968a) main_mup_pane_t4

0x496e,	// (0x000796a8) main_mup_pane_t5_ParamLimits

0x496e,	// (0x000796a8) main_mup_pane_t5

0x4983,	// (0x000796bd) main_mup_pane_t6_ParamLimits

0x4983,	// (0x000796bd) main_mup_pane_t6

0x0005,

0xf454,	// (0x0008418e) main_mup_pane_t_ParamLimits

0xf454,	// (0x0008418e) main_mup_pane_t

0x4995,	// (0x000796cf) mup_progress_pane_ParamLimits

0x4995,	// (0x000796cf) mup_progress_pane

0x49a1,	// (0x000796db) mup_visualizer_pane_ParamLimits

0x49a1,	// (0x000796db) mup_visualizer_pane

0x49d5,	// (0x0007970f) mup_volume_pane_ParamLimits

0x49d5,	// (0x0007970f) mup_volume_pane

0x49f3,	// (0x0007972d) mup_visualizer_pane_g1_ParamLimits

0x49f3,	// (0x0007972d) mup_visualizer_pane_g1

0x49f3,	// (0x0007972d) mup_visualizer_pane_g2_ParamLimits

0x49f3,	// (0x0007972d) mup_visualizer_pane_g2

0x44a3,	// (0x000791dd) mup_visualizer_pane_g3_ParamLimits

0x44a3,	// (0x000791dd) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x0008419b) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x0008419b) mup_visualizer_pane_g

0x2307,	// (0x00077041) mup_volume_pane_g1

0x4a09,	// (0x00079743) mup_volume_pane_g2

0x0001,

0xf468,	// (0x000841a2) mup_volume_pane_g

0x2307,	// (0x00077041) mup_progress_pane_g1

0x4a12,	// (0x0007974c) mup_progress_pane_g2

0x4a1b,	// (0x00079755) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x000841a7) mup_progress_pane_g

0x1bfd,	// (0x00076937) bg_popup_window_pane_cp05

0x4a24,	// (0x0007975e) heading_pane_cp02_ParamLimits

0x4a24,	// (0x0007975e) heading_pane_cp02

0x4a3e,	// (0x00079778) list_popup_blid_pane

0x4a46,	// (0x00079780) list_blid_sat_info_pane_ParamLimits

0x4a46,	// (0x00079780) list_blid_sat_info_pane

0x4a59,	// (0x00079793) list_blid_sat_info_pane_g1

0x4a61,	// (0x0007979b) list_blid_sat_info_pane_t1

0x4b77,	// (0x000798b1) mup_equalizer_pane_ParamLimits

0x4b77,	// (0x000798b1) mup_equalizer_pane

0x4b90,	// (0x000798ca) mup_equalizer_pane_cp1_ParamLimits

0x4b90,	// (0x000798ca) mup_equalizer_pane_cp1

0x4bad,	// (0x000798e7) mup_equalizer_pane_cp2_ParamLimits

0x4bad,	// (0x000798e7) mup_equalizer_pane_cp2

0x4bca,	// (0x00079904) mup_equalizer_pane_cp3_ParamLimits

0x4bca,	// (0x00079904) mup_equalizer_pane_cp3

0x4beb,	// (0x00079925) mup_equalizer_pane_cp4_ParamLimits

0x4beb,	// (0x00079925) mup_equalizer_pane_cp4

0x4c0c,	// (0x00079946) mup_equalizer_pane_cp5

0x4c20,	// (0x0007995a) mup_equalizer_pane_cp6

0x4c34,	// (0x0007996e) mup_equalizer_pane_cp7

0xbb65,	// (0x0008089f) bg_popup_call_poc_act_pane_g9

0xbb6d,	// (0x000808a7) bg_popup_call_poc_act_pane_g10

0xbb75,	// (0x000808af) bg_popup_call_poc_act_pane_g11

0x000a,

0x1e58,	// (0x00076b92) mup_scale_pane

0x2307,	// (0x00077041) mup_scale_pane_g1

0x4c48,	// (0x00079982) mup_scale_pane_g2

0x0006,

0xf489,	// (0x000841c3) mup_scale_pane_g

0x4c7e,	// (0x000799b8) msg_data_pane

0x4c86,	// (0x000799c0) scroll_pane_cp017

0x0bf1,	// (0x0007592b) bg_list_pane_cp04_ParamLimits

0x0bf1,	// (0x0007592b) bg_list_pane_cp04

0x4c8e,	// (0x000799c8) msg_data_pane_g1

0x4c96,	// (0x000799d0) msg_data_pane_g2

0x4221,	// (0x00078f5b) msg_data_pane_g3

0x4c9e,	// (0x000799d8) msg_data_pane_g4

0x4ca6,	// (0x000799e0) msg_data_pane_g5

0x4cae,	// (0x000799e8) msg_data_pane_g6

0x4cb6,	// (0x000799f0) msg_data_pane_g7

0x0006,

0xf498,	// (0x000841d2) msg_data_pane_g

0x0c11,	// (0x0007594b) msg_text_pane_ParamLimits

0x0c11,	// (0x0007594b) msg_text_pane

0x4cbe,	// (0x000799f8) qrid_highlight_pane_cp011_ParamLimits

0x4cbe,	// (0x000799f8) qrid_highlight_pane_cp011

0x1bfd,	// (0x00076937) msg_body_pane

0x1bfd,	// (0x00076937) msg_header_pane

0x4cdd,	// (0x00079a17) input_focus_pane_cp07

0x0c46,	// (0x00075980) msg_header_pane_t1_ParamLimits

0x0c46,	// (0x00075980) msg_header_pane_t1

0xac12,	// (0x0007f94c) msg_header_pane_t2_ParamLimits

0xac12,	// (0x0007f94c) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x000841e6) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x000841e6) msg_header_pane_t

0x4cf2,	// (0x00079a2c) msg_body_pane_g1

0x0c5a,	// (0x00075994) msg_body_pane_t1_ParamLimits

0x0c5a,	// (0x00075994) msg_body_pane_t1

0xac24,	// (0x0007f95e) msg_body_pane_t2_ParamLimits

0xac24,	// (0x0007f95e) msg_body_pane_t2

0xac36,	// (0x0007f970) msg_body_pane_t3_ParamLimits

0xac36,	// (0x0007f970) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x000841eb) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x000841eb) msg_body_pane_t

0x4d34,	// (0x00079a6e) main_viewer_pane_g1_ParamLimits

0x4d34,	// (0x00079a6e) main_viewer_pane_g1

0x4d42,	// (0x00079a7c) main_viewer_pane_g2_ParamLimits

0x4d42,	// (0x00079a7c) main_viewer_pane_g2

0x4d50,	// (0x00079a8a) main_viewer_pane_g3_ParamLimits

0x4d50,	// (0x00079a8a) main_viewer_pane_g3

0x4d5f,	// (0x00079a99) main_viewer_pane_g4_ParamLimits

0x4d5f,	// (0x00079a99) main_viewer_pane_g4

0xac60,	// (0x0007f99a) main_viewer_pane_g5_ParamLimits

0xac60,	// (0x0007f99a) main_viewer_pane_g5

0xac60,	// (0x0007f99a) main_viewer_pane_g7_ParamLimits

0xac60,	// (0x0007f99a) main_viewer_pane_g7

0xac72,	// (0x0007f9ac) main_viewer_pane_g8_ParamLimits

0xac72,	// (0x0007f9ac) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x000841fb) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x000841fb) main_viewer_pane_g

0x4d6e,	// (0x00079aa8) viewer_content_pane_ParamLimits

0x4d6e,	// (0x00079aa8) viewer_content_pane

0x4da9,	// (0x00079ae3) main_postcard_pane_g1_ParamLimits

0x4da9,	// (0x00079ae3) main_postcard_pane_g1

0x4dbf,	// (0x00079af9) main_postcard_pane_g2_ParamLimits

0x4dbf,	// (0x00079af9) main_postcard_pane_g2

0x4dd5,	// (0x00079b0f) main_postcard_pane_g3_ParamLimits

0x4dd5,	// (0x00079b0f) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x0008420c) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x0008420c) main_postcard_pane_g

0x4dec,	// (0x00079b26) main_postcard_pane_g4

0xbd7a,	// (0x00080ab4) smil_status_volume_pane_g2

0x4e2f,	// (0x00079b69) postcard_pane_ParamLimits

0x4e2f,	// (0x00079b69) postcard_pane

0x4e71,	// (0x00079bab) postcard_pane_g1_ParamLimits

0x4e71,	// (0x00079bab) postcard_pane_g1

0x4e7f,	// (0x00079bb9) postcard_pane_g2_ParamLimits

0x4e7f,	// (0x00079bb9) postcard_pane_g2

0x4e8b,	// (0x00079bc5) postcard_pane_g3_ParamLimits

0x4e8b,	// (0x00079bc5) postcard_pane_g3

0x4e97,	// (0x00079bd1) postcard_pane_g4_ParamLimits

0x4e97,	// (0x00079bd1) postcard_pane_g4

0x4ea5,	// (0x00079bdf) postcard_pane_g5_ParamLimits

0x4ea5,	// (0x00079bdf) postcard_pane_g5

0x4eba,	// (0x00079bf4) postcard_pane_g6_ParamLimits

0x4eba,	// (0x00079bf4) postcard_pane_g6

0x4e71,	// (0x00079bab) postcard_pane_g7_ParamLimits

0x4e71,	// (0x00079bab) postcard_pane_g7

0x0006,

0xf4df,	// (0x00084219) postcard_pane_g_ParamLimits

0xf4df,	// (0x00084219) postcard_pane_g

0x4ece,	// (0x00079c08) main_mp2_pane_g1_ParamLimits

0x4ece,	// (0x00079c08) main_mp2_pane_g1

0x4eda,	// (0x00079c14) main_mp2_pane_g2_ParamLimits

0x4eda,	// (0x00079c14) main_mp2_pane_g2

0x4ee6,	// (0x00079c20) main_mp2_pane_g3_ParamLimits

0x4ee6,	// (0x00079c20) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x00084228) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x00084228) main_mp2_pane_g

0x4ef2,	// (0x00079c2c) main_mp2_pane_t1_ParamLimits

0x4ef2,	// (0x00079c2c) main_mp2_pane_t1

0x4f07,	// (0x00079c41) main_mp2_pane_t2_ParamLimits

0x4f07,	// (0x00079c41) main_mp2_pane_t2

0x4f19,	// (0x00079c53) main_mp2_pane_t3_ParamLimits

0x4f19,	// (0x00079c53) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0008422f) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0008422f) main_mp2_pane_t

0x4f2b,	// (0x00079c65) pec_content_pane_ParamLimits

0x4f2b,	// (0x00079c65) pec_content_pane

0x31a1,	// (0x00077edb) scroll_pane_cp015

0x4f3d,	// (0x00079c77) pec_attribute_pane_ParamLimits

0x4f3d,	// (0x00079c77) pec_attribute_pane

0x4f4d,	// (0x00079c87) pec_content_pane_g1_ParamLimits

0x4f4d,	// (0x00079c87) pec_content_pane_g1

0x4f5b,	// (0x00079c95) pec_content_pane_t1_ParamLimits

0x4f5b,	// (0x00079c95) pec_content_pane_t1

0x4f6d,	// (0x00079ca7) pec_content_pane_t2_ParamLimits

0x4f6d,	// (0x00079ca7) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x00084236) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x00084236) pec_content_pane_t

0x4f7f,	// (0x00079cb9) list_single_graphic_pane_cp01_ParamLimits

0x4f7f,	// (0x00079cb9) list_single_graphic_pane_cp01

0x1e58,	// (0x00076b92) bg_popup_sub_pane_cp04

0x4f97,	// (0x00079cd1) popup_mup_playback_window_g1

0x4fa3,	// (0x00079cdd) popup_mup_playback_window_t1

0x4fb8,	// (0x00079cf2) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x0008423b) popup_mup_playback_window_t

0x500d,	// (0x00079d47) main_image_pane_g1_ParamLimits

0x500d,	// (0x00079d47) main_image_pane_g1

0x50ea,	// (0x00079e24) scroll_pane_cp018_ParamLimits

0x50ea,	// (0x00079e24) scroll_pane_cp018

0x5102,	// (0x00079e3c) scroll_pane_cp016_ParamLimits

0x5102,	// (0x00079e3c) scroll_pane_cp016

0x5136,	// (0x00079e70) smil2_image_pane_ParamLimits

0x5136,	// (0x00079e70) smil2_image_pane

0x516a,	// (0x00079ea4) smil2_root_pane_ParamLimits

0x516a,	// (0x00079ea4) smil2_root_pane

0x51a2,	// (0x00079edc) smil2_text_pane_ParamLimits

0x51a2,	// (0x00079edc) smil2_text_pane

0x1bfd,	// (0x00076937) bg_list_pane_cp06

0x522a,	// (0x00079f64) grid_radio_pane

0x1bfd,	// (0x00076937) bg_popup_window_pane_cp06

0x5232,	// (0x00079f6c) main_fmradio_pane_t1

0x4115,	// (0x00078e4f) heading_pane_cp04

0x5240,	// (0x00079f7a) main_fmradio_pane_t2

0xbb7d,	// (0x000808b7) popup_cale_lunar_info_window_g1

0x524e,	// (0x00079f88) main_fmradio_pane_t3

0xbb85,	// (0x000808bf) popup_cale_lunar_info_window_g2

0x525c,	// (0x00079f96) main_fmradio_pane_t4

0x0001,

0x526a,	// (0x00079fa4) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x00084316) popup_cale_lunar_info_window_g

0xf516,	// (0x00084250) main_fmradio_pane_t

0x5278,	// (0x00079fb2) wait_bar_pane_cp03

0x5280,	// (0x00079fba) cell_fmradio_pane_ParamLimits

0x5280,	// (0x00079fba) cell_fmradio_pane

0x4e71,	// (0x00079bab) cell_fmradio_pane_g1_ParamLimits

0x4e71,	// (0x00079bab) cell_fmradio_pane_g1

0x1bfd,	// (0x00076937) grid_highlight_pane_cp011

0x5293,	// (0x00079fcd) poc_content_pane_ParamLimits

0x5293,	// (0x00079fcd) poc_content_pane

0x52a5,	// (0x00079fdf) scroll_pane_cp019

0x52ad,	// (0x00079fe7) popup_call_poc_act_window_ParamLimits

0x52ad,	// (0x00079fe7) popup_call_poc_act_window

0x52d1,	// (0x0007a00b) popup_call_poc_inact_window_ParamLimits

0x52d1,	// (0x0007a00b) popup_call_poc_inact_window

0xf5b3,	// (0x000842ed) bg_popup_call_poc_act_pane_g

0xbaed,	// (0x00080827) bg_popup_call_poc_inact_pane_g1

0xbaf5,	// (0x0008082f) bg_popup_call_poc_inact_pane_g2

0x52ea,	// (0x0007a024) popup_call_poc_act_window_g2

0xbafd,	// (0x00080837) bg_popup_call_poc_inact_pane_g3

0xbb05,	// (0x0008083f) bg_popup_call_poc_inact_pane_g4

0xbb0d,	// (0x00080847) bg_popup_call_poc_inact_pane_g5

0x52f2,	// (0x0007a02c) popup_call_poc_act_window_t1_ParamLimits

0x52f2,	// (0x0007a02c) popup_call_poc_act_window_t1

0x531a,	// (0x0007a054) popup_call_poc_act_window_t2_ParamLimits

0x531a,	// (0x0007a054) popup_call_poc_act_window_t2

0x5342,	// (0x0007a07c) popup_call_poc_act_window_t3_ParamLimits

0x5342,	// (0x0007a07c) popup_call_poc_act_window_t3

0xac8a,	// (0x0007f9c4) popup_call_poc_act_window_t4_ParamLimits

0xac8a,	// (0x0007f9c4) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x0008425b) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x0008425b) popup_call_poc_act_window_t

0xbb15,	// (0x0008084f) bg_popup_call_poc_inact_pane_g6

0xbb1d,	// (0x00080857) bg_popup_call_poc_inact_pane_g7

0xbb25,	// (0x0008085f) bg_popup_call_poc_inact_pane_g8

0xac9c,	// (0x0007f9d6) popup_call_poc_inact_window_g2

0xbb2d,	// (0x00080867) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x000842da) bg_popup_call_poc_inact_pane_g

0xaca4,	// (0x0007f9de) popup_call_poc_inact_window_t1_ParamLimits

0xaca4,	// (0x0007f9de) popup_call_poc_inact_window_t1

0xacb9,	// (0x0007f9f3) popup_call_poc_inact_window_t2_ParamLimits

0xacb9,	// (0x0007f9f3) popup_call_poc_inact_window_t2

0xacce,	// (0x0007fa08) popup_call_poc_inact_window_t3_ParamLimits

0xacce,	// (0x0007fa08) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x00084264) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x00084264) popup_call_poc_inact_window_t

0xbced,	// (0x00080a27) context_pane_ParamLimits

0x5b73,	// (0x0007a8ad) signal_pane_ParamLimits

0x4703,	// (0x0007943d) main_call2_pane

0xbcdb,	// (0x00080a15) popup_phob_thumbnail2_window_ParamLimits

0xbcdb,	// (0x00080a15) popup_phob_thumbnail2_window

0xac48,	// (0x0007f982) aid_hotspot_pointer_arrow_pane

0xac50,	// (0x0007f98a) aid_hotspot_pointer_hand_pane

0x5697,	// (0x0007a3d1) phob_pre_status_pane_g5

0x28fc,	// (0x00077636) cams_zoom_pane_ParamLimits

0x290b,	// (0x00077645) image_vga_pane_ParamLimits

0x2925,	// (0x0007765f) main_camera_pane_g1_ParamLimits

0x2937,	// (0x00077671) main_camera_pane_g2_ParamLimits

0x2949,	// (0x00077683) main_camera_pane_g3_ParamLimits

0x295b,	// (0x00077695) main_camera_pane_g4_ParamLimits

0x296d,	// (0x000776a7) main_camera_pane_g5_ParamLimits

0x297f,	// (0x000776b9) main_camera_pane_g6_ParamLimits

0x2991,	// (0x000776cb) main_camera_pane_g7_ParamLimits

0xf229,	// (0x00083f63) main_camera_pane_g_ParamLimits

0x29af,	// (0x000776e9) main_camera_pane_t1_ParamLimits

0x29c5,	// (0x000776ff) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x00083f74) main_camera_pane_t_ParamLimits

0x1e58,	// (0x00076b92) bg_popup_preview_window_pane_cp01_ParamLimits

0x1e58,	// (0x00076b92) bg_popup_preview_window_pane_cp01

0xace3,	// (0x0007fa1d) popup_phob_thumbnail2_window_g1_ParamLimits

0xace3,	// (0x0007fa1d) popup_phob_thumbnail2_window_g1

0x1bfd,	// (0x00076937) call2_cli_visual_pane

0x5385,	// (0x0007a0bf) popup_call2_audio_conf_window_ParamLimits

0x5385,	// (0x0007a0bf) popup_call2_audio_conf_window

0x53a5,	// (0x0007a0df) popup_call2_audio_first_window_ParamLimits

0x53a5,	// (0x0007a0df) popup_call2_audio_first_window

0x543b,	// (0x0007a175) popup_call2_audio_in_window_ParamLimits

0x543b,	// (0x0007a175) popup_call2_audio_in_window

0x5483,	// (0x0007a1bd) popup_call2_audio_out_window_ParamLimits

0x5483,	// (0x0007a1bd) popup_call2_audio_out_window

0x54ed,	// (0x0007a227) popup_call2_audio_second_window_ParamLimits

0x54ed,	// (0x0007a227) popup_call2_audio_second_window

0x5553,	// (0x0007a28d) popup_call2_audio_wait_window_ParamLimits

0x5553,	// (0x0007a28d) popup_call2_audio_wait_window

0x1bfd,	// (0x00076937) bg_popup_call2_act_pane_cp03

0x1e3a,	// (0x00076b74) list_conf_pane_cp

0xacef,	// (0x0007fa29) popup_call2_audio_conf_window_t1

0xacfd,	// (0x0007fa37) list_single_graphic_popup_conf2_pane_ParamLimits

0xacfd,	// (0x0007fa37) list_single_graphic_popup_conf2_pane

0x41a8,	// (0x00078ee2) list_highlight_pane_cp04

0xad10,	// (0x0007fa4a) list_single_graphic_popup_conf2_pane_g1

0x41b9,	// (0x00078ef3) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x0008426b) list_single_graphic_popup_conf2_pane_g

0xad1a,	// (0x0007fa54) list_single_graphic_popup_conf2_pane_t1

0xad28,	// (0x0007fa62) bg_popup_call2_act_pane_cp01_ParamLimits

0xad28,	// (0x0007fa62) bg_popup_call2_act_pane_cp01

0xadb2,	// (0x0007faec) call_type_pane_cp05_ParamLimits

0xadb2,	// (0x0007faec) call_type_pane_cp05

0xae06,	// (0x0007fb40) popup_call2_audio_second_window_g1_ParamLimits

0xae06,	// (0x0007fb40) popup_call2_audio_second_window_g1

0xae5a,	// (0x0007fb94) popup_call2_audio_second_window_g2_ParamLimits

0xae5a,	// (0x0007fb94) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x00084270) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x00084270) popup_call2_audio_second_window_g

0xaebf,	// (0x0007fbf9) popup_call2_audio_second_window_t1_ParamLimits

0xaebf,	// (0x0007fbf9) popup_call2_audio_second_window_t1

0xaf7a,	// (0x0007fcb4) popup_call2_audio_second_window_t2_ParamLimits

0xaf7a,	// (0x0007fcb4) popup_call2_audio_second_window_t2

0xafcd,	// (0x0007fd07) popup_call2_audio_second_window_t3_ParamLimits

0xafcd,	// (0x0007fd07) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x00084277) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x00084277) popup_call2_audio_second_window_t

0x1bfd,	// (0x00076937) bg_popup_call2_in_pane_cp02

0x1c07,	// (0x00076941) call_type_pane_cp04

0x1c0f,	// (0x00076949) popup_call2_audio_wait_window_g1

0x1c17,	// (0x00076951) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x00083e50) popup_call2_audio_wait_window_g

0x1c1f,	// (0x00076959) popup_call2_audio_wait_window_t3

0xb0c0,	// (0x0007fdfa) bg_popup_call2_act_pane_ParamLimits

0xb0c0,	// (0x0007fdfa) bg_popup_call2_act_pane

0xb180,	// (0x0007feba) call_type_pane_cp03_ParamLimits

0xb180,	// (0x0007feba) call_type_pane_cp03

0xb1e4,	// (0x0007ff1e) popup_call2_audio_first_window_g1_ParamLimits

0xb1e4,	// (0x0007ff1e) popup_call2_audio_first_window_g1

0xb254,	// (0x0007ff8e) popup_call2_audio_first_window_g2_ParamLimits

0xb254,	// (0x0007ff8e) popup_call2_audio_first_window_g2

0x49f3,	// (0x0007972d) popup_call2_audio_first_window_g3_ParamLimits

0x49f3,	// (0x0007972d) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x00084280) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x00084280) popup_call2_audio_first_window_g

0xb332,	// (0x0008006c) popup_call2_audio_first_window_t1_ParamLimits

0xb332,	// (0x0008006c) popup_call2_audio_first_window_t1

0xb435,	// (0x0008016f) popup_call2_audio_first_window_t4_ParamLimits

0xb435,	// (0x0008016f) popup_call2_audio_first_window_t4

0xb518,	// (0x00080252) popup_call2_audio_first_window_t5_ParamLimits

0xb518,	// (0x00080252) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x0008428b) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x0008428b) popup_call2_audio_first_window_t

0x1e50,	// (0x00076b8a) bg_popup_call2_act_pane_g1

0xbb8d,	// (0x000808c7) popup_cale_lunar_info_window_t1

0xbb9b,	// (0x000808d5) popup_cale_lunar_info_window_t2

0xbba9,	// (0x000808e3) popup_cale_lunar_info_window_t3

0x1bfd,	// (0x00076937) bg_popup_call2_bubble_pane

0xb619,	// (0x00080353) bg_popup_call2_in_pane_cp01_ParamLimits

0xb619,	// (0x00080353) bg_popup_call2_in_pane_cp01

0x18b5,	// (0x000765ef) call_type_pane_cp02

0xb661,	// (0x0008039b) popup_call2_audio_out_window_g1_ParamLimits

0xb661,	// (0x0008039b) popup_call2_audio_out_window_g1

0xb68d,	// (0x000803c7) popup_call2_audio_out_window_g2_ParamLimits

0xb68d,	// (0x000803c7) popup_call2_audio_out_window_g2

0xb6b5,	// (0x000803ef) popup_call2_audio_out_window_g3_ParamLimits

0xb6b5,	// (0x000803ef) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x00084294) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x00084294) popup_call2_audio_out_window_g

0xb6f0,	// (0x0008042a) popup_call2_audio_out_window_t1_ParamLimits

0xb6f0,	// (0x0008042a) popup_call2_audio_out_window_t1

0xb74f,	// (0x00080489) popup_call2_audio_out_window_t2_ParamLimits

0xb74f,	// (0x00080489) popup_call2_audio_out_window_t2

0xb7a3,	// (0x000804dd) popup_call2_audio_out_window_t3_ParamLimits

0xb7a3,	// (0x000804dd) popup_call2_audio_out_window_t3

0xb7b9,	// (0x000804f3) popup_call2_audio_out_window_t4_ParamLimits

0xb7b9,	// (0x000804f3) popup_call2_audio_out_window_t4

0xb7cf,	// (0x00080509) popup_call2_audio_out_window_t5_ParamLimits

0xb7cf,	// (0x00080509) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x0008429d) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x0008429d) popup_call2_audio_out_window_t

0xb833,	// (0x0008056d) bg_popup_call2_in_pane_ParamLimits

0xb833,	// (0x0008056d) bg_popup_call2_in_pane

0xb88f,	// (0x000805c9) popup_call2_audio_in_window_g1_ParamLimits

0xb88f,	// (0x000805c9) popup_call2_audio_in_window_g1

0xb8c7,	// (0x00080601) popup_call2_audio_in_window_g2_ParamLimits

0xb8c7,	// (0x00080601) popup_call2_audio_in_window_g2

0xb8ff,	// (0x00080639) popup_call2_audio_in_window_g3_ParamLimits

0xb8ff,	// (0x00080639) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x000842aa) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x000842aa) popup_call2_audio_in_window_g

0xb957,	// (0x00080691) popup_call2_audio_in_window_t1_ParamLimits

0xb957,	// (0x00080691) popup_call2_audio_in_window_t1

0xb9d7,	// (0x00080711) popup_call2_audio_in_window_t2_ParamLimits

0xb9d7,	// (0x00080711) popup_call2_audio_in_window_t2

0xba57,	// (0x00080791) popup_call2_audio_in_window_t3_ParamLimits

0xba57,	// (0x00080791) popup_call2_audio_in_window_t3

0xba71,	// (0x000807ab) popup_call2_audio_in_window_t4_ParamLimits

0xba71,	// (0x000807ab) popup_call2_audio_in_window_t4

0xba83,	// (0x000807bd) popup_call2_audio_in_window_t5_ParamLimits

0xba83,	// (0x000807bd) popup_call2_audio_in_window_t5

0xba98,	// (0x000807d2) popup_call2_audio_in_window_t6_ParamLimits

0xba98,	// (0x000807d2) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x000842b3) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x000842b3) popup_call2_audio_in_window_t

0x1e50,	// (0x00076b8a) bg_popup_call2_in_pane_g1

0xbbb7,	// (0x000808f1) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x0008431b) popup_cale_lunar_info_window_t

0x1e58,	// (0x00076b92) bg_popup_call2_rect_pane_ParamLimits

0x1e58,	// (0x00076b92) bg_popup_call2_rect_pane

0x1bfd,	// (0x00076937) call2_cli_visual_graphic_pane

0x1bfd,	// (0x00076937) call2_cli_visual_text_pane

0xbd8d,	// (0x00080ac7) smil_status_volume_pane_g3

0x0002,

0x2307,	// (0x00077041) call2_cli_visual_graphic_pane_g1

0x2307,	// (0x00077041) call2_cli_visual_graphic_pane_g2

0x2307,	// (0x00077041) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x000842c0) call2_cli_visual_graphic_pane_g

0xbaad,	// (0x000807e7) bg_popup_call2_rect_pane_g1

0x244c,	// (0x00077186) bg_popup_call2_rect_pane_g2

0xbab5,	// (0x000807ef) bg_popup_call2_rect_pane_g3

0xbabd,	// (0x000807f7) bg_popup_call2_rect_pane_g4

0xbac5,	// (0x000807ff) bg_popup_call2_rect_pane_g5

0xbacd,	// (0x00080807) bg_popup_call2_rect_pane_g6

0xbad5,	// (0x0008080f) bg_popup_call2_rect_pane_g7

0xbadd,	// (0x00080817) bg_popup_call2_rect_pane_g8

0xbae5,	// (0x0008081f) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x000842c7) bg_popup_call2_rect_pane_g

0xbaed,	// (0x00080827) bg_popup_call2_bubble_pane_g1

0xbaf5,	// (0x0008082f) bg_popup_call2_bubble_pane_g2

0xbafd,	// (0x00080837) bg_popup_call2_bubble_pane_g3

0xbb05,	// (0x0008083f) bg_popup_call2_bubble_pane_g4

0xbb0d,	// (0x00080847) bg_popup_call2_bubble_pane_g5

0xbb15,	// (0x0008084f) bg_popup_call2_bubble_pane_g6

0xbb1d,	// (0x00080857) bg_popup_call2_bubble_pane_g7

0xbb25,	// (0x0008085f) bg_popup_call2_bubble_pane_g8

0xbb2d,	// (0x00080867) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x000842da) bg_popup_call2_bubble_pane_g

0x24c1,	// (0x000771fb) aid_cale_week_size_cell_pane

0x29dd,	// (0x00077717) aid_cams_cif_uncrop_pane_ParamLimits

0x29dd,	// (0x00077717) aid_cams_cif_uncrop_pane

0x2bd8,	// (0x00077912) aid_cams_size_cell_ParamLimits

0x2bd8,	// (0x00077912) aid_cams_size_cell

0x2bec,	// (0x00077926) grid_cams_pane_ParamLimits

0x2c06,	// (0x00077940) linegrid_cams_pane_ParamLimits

0x2d3b,	// (0x00077a75) call_video_pane_t1

0x2d59,	// (0x00077a93) call_video_pane_t2

0x0001,

0xf28d,	// (0x00083fc7) call_video_pane_t

0x33f0,	// (0x0007812a) aid_cale_month_size_cell_pane_ParamLimits

0x33f0,	// (0x0007812a) aid_cale_month_size_cell_pane

0xf62a,	// (0x00084364) smil_status_volume_pane_g

0xbd9a,	// (0x00080ad4) volume_smil_pane_ParamLimits

0xa87e,	// (0x0007f5b8) aid_popup2_width_pane

0x23a4,	// (0x000770de) cell_qdial_pane_g4_ParamLimits

0x23a4,	// (0x000770de) cell_qdial_pane_g4

0x4483,	// (0x000791bd) aid_blid_cardinal_pane_ParamLimits

0x448f,	// (0x000791c9) aid_blid_destination_pane_ParamLimits

0x448f,	// (0x000791c9) aid_blid_destination_pane

0x1e58,	// (0x00076b92) bg_popup_call_poc_act_pane_ParamLimits

0x1e58,	// (0x00076b92) bg_popup_call_poc_act_pane

0x1e58,	// (0x00076b92) bg_popup_call_poc_inact_pane_ParamLimits

0x1e58,	// (0x00076b92) bg_popup_call_poc_inact_pane

0xbb3d,	// (0x00080877) bg_popup_call_poc_act_pane_g1

0xbb45,	// (0x0008087f) bg_popup_call_poc_act_pane_g2

0xbb4d,	// (0x00080887) bg_popup_call_poc_act_pane_g3

0xbb05,	// (0x0008083f) bg_popup_call_poc_act_pane_g4

0xbb0d,	// (0x00080847) bg_popup_call_poc_act_pane_g5

0xbb55,	// (0x0008088f) bg_popup_call_poc_act_pane_g6

0xbb1d,	// (0x00080857) bg_popup_call_poc_act_pane_g7

0xbb5d,	// (0x00080897) bg_popup_call_poc_act_pane_g8

0x1bfd,	// (0x00076937) main_usb_pane

0xbcb6,	// (0x000809f0) popup_cale_lunar_info_window

0x3083,	// (0x00077dbd) im_reading_pane_t1_ParamLimits

0x30bf,	// (0x00077df9) list_im_pane_ParamLimits

0x30d0,	// (0x00077e0a) scroll_pane_cp07_ParamLimits

0x1bfd,	// (0x00076937) grid_highlight_pane_cp012

0x1e58,	// (0x00076b92) mup_scale_pane_ParamLimits

0x4e71,	// (0x00079bab) main_usb_pane_g1_ParamLimits

0x4e71,	// (0x00079bab) main_usb_pane_g1

0x55aa,	// (0x0007a2e4) main_usb_pane_g2_ParamLimits

0x55aa,	// (0x0007a2e4) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x00084304) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x00084304) main_usb_pane_g

0x55c0,	// (0x0007a2fa) main_usb_pane_t1_ParamLimits

0x55c0,	// (0x0007a2fa) main_usb_pane_t1

0x55d2,	// (0x0007a30c) main_usb_pane_t2_ParamLimits

0x55d2,	// (0x0007a30c) main_usb_pane_t2

0x55e4,	// (0x0007a31e) main_usb_pane_t3_ParamLimits

0x55e4,	// (0x0007a31e) main_usb_pane_t3

0x55f6,	// (0x0007a330) main_usb_pane_t4_ParamLimits

0x55f6,	// (0x0007a330) main_usb_pane_t4

0x5608,	// (0x0007a342) main_usb_pane_t5_ParamLimits

0x5608,	// (0x0007a342) main_usb_pane_t5

0x561a,	// (0x0007a354) main_usb_pane_t6_ParamLimits

0x561a,	// (0x0007a354) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x00084309) main_usb_pane_t_ParamLimits

0x4428,	// (0x00079162) aid_text_placing

0x4431,	// (0x0007916b) main_location2_pane_t1_ParamLimits

0x4445,	// (0x0007917f) main_location2_pane_t2_ParamLimits

0x4459,	// (0x00079193) main_location2_pane_t3_ParamLimits

0x446f,	// (0x000791a9) main_location2_pane_t4_ParamLimits

0x446f,	// (0x000791a9) main_location2_pane_t4

0xf3ee,	// (0x00084128) main_location2_pane_t_ParamLimits

0x1f30,	// (0x00076c6a) find_pinb_pane_g2_ParamLimits

0x1f30,	// (0x00076c6a) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x00083e76) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x00083e76) find_pinb_pane_g

0x1f3c,	// (0x00076c76) find_pinb_pane_t1_ParamLimits

0x1f4e,	// (0x00076c88) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x00083e7b) find_pinb_pane_t_ParamLimits

0x1bfd,	// (0x00076937) main_call3_pane

0x3789,	// (0x000784c3) cale_month_day_heading_pane_t1_ParamLimits

0x37e7,	// (0x00078521) cale_month_day_heading_pane_t2_ParamLimits

0x384c,	// (0x00078586) cale_month_day_heading_pane_t3_ParamLimits

0x38b1,	// (0x000785eb) cale_month_day_heading_pane_t4_ParamLimits

0x3916,	// (0x00078650) cale_month_day_heading_pane_t5_ParamLimits

0x398b,	// (0x000786c5) cale_month_day_heading_pane_t6_ParamLimits

0x3a00,	// (0x0007873a) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x00083fff) cale_month_day_heading_pane_t_ParamLimits

0x3c1e,	// (0x00078958) smil_status_volume_pane

0x4e4d,	// (0x00079b87) postcard_address_pane_ParamLimits

0x4e4d,	// (0x00079b87) postcard_address_pane

0x4e5f,	// (0x00079b99) postcard_message_pane_ParamLimits

0x4e5f,	// (0x00079b99) postcard_message_pane

0x558d,	// (0x0007a2c7) call2_cli_visual_pane_t1_ParamLimits

0x558d,	// (0x0007a2c7) call2_cli_visual_pane_t1

0x5da1,	// (0x0007aadb) postcard_message_pane_t1_ParamLimits

0x5da1,	// (0x0007aadb) postcard_message_pane_t1

0x5d8a,	// (0x0007aac4) postcard_address_pane_t1_ParamLimits

0x5d8a,	// (0x0007aac4) postcard_address_pane_t1

0x5d76,	// (0x0007aab0) popup_call3_audio_in_window_ParamLimits

0x5d76,	// (0x0007aab0) popup_call3_audio_in_window

0x5c05,	// (0x0007a93f) bg_popup_call3_in_pane_ParamLimits

0x5c05,	// (0x0007a93f) bg_popup_call3_in_pane

0x5c77,	// (0x0007a9b1) popup_call3_audio_in_window_g1_ParamLimits

0x5c77,	// (0x0007a9b1) popup_call3_audio_in_window_g1

0x5c97,	// (0x0007a9d1) popup_call3_audio_in_window_g2_ParamLimits

0x5c97,	// (0x0007a9d1) popup_call3_audio_in_window_g2

0x5cb7,	// (0x0007a9f1) popup_call3_audio_in_window_g3_ParamLimits

0x5cb7,	// (0x0007a9f1) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x0008436b) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x0008436b) popup_call3_audio_in_window_g

0x5ce8,	// (0x0007aa22) popup_call3_audio_in_window_t1_ParamLimits

0x5ce8,	// (0x0007aa22) popup_call3_audio_in_window_t1

0x5d26,	// (0x0007aa60) popup_call3_audio_in_window_t2_ParamLimits

0x5d26,	// (0x0007aa60) popup_call3_audio_in_window_t2

0x5d64,	// (0x0007aa9e) popup_call3_audio_in_window_t3_ParamLimits

0x5d64,	// (0x0007aa9e) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x00084374) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x00084374) popup_call3_audio_in_window_t

0x4703,	// (0x0007943d) bg_popup_call3_rect_pane

0xbaad,	// (0x000807e7) bg_popup_call3_rect_pane_g1

0x244c,	// (0x00077186) bg_popup_call3_rect_pane_g2

0xbab5,	// (0x000807ef) bg_popup_call3_rect_pane_g3

0xbabd,	// (0x000807f7) bg_popup_call3_rect_pane_g4

0xbac5,	// (0x000807ff) bg_popup_call3_rect_pane_g5

0xbacd,	// (0x00080807) bg_popup_call3_rect_pane_g6

0xbad5,	// (0x0008080f) bg_popup_call3_rect_pane_g7

0x49eb,	// (0x00079725) mup_visualizer_osc_pane

0x4a01,	// (0x0007973b) mup_visualizer_spec_pane

0x5c35,	// (0x0007a96f) call3_video_qcif_pane_ParamLimits

0x5c35,	// (0x0007a96f) call3_video_qcif_pane

0x5c46,	// (0x0007a980) call3_video_qcif_uncrop_pane_ParamLimits

0x5c46,	// (0x0007a980) call3_video_qcif_uncrop_pane

0x5c52,	// (0x0007a98c) call3_video_subqcif_pane_ParamLimits

0x5c52,	// (0x0007a98c) call3_video_subqcif_pane

0x5c66,	// (0x0007a9a0) call3_video_subqcif_uncrop_pane_ParamLimits

0x5c66,	// (0x0007a9a0) call3_video_subqcif_uncrop_pane

0x5cd7,	// (0x0007aa11) popup_call3_audio_in_window_g4_ParamLimits

0x5cd7,	// (0x0007aa11) popup_call3_audio_in_window_g4

0x5bf4,	// (0x0007a92e) mup_spec_half_pane

0x5bfd,	// (0x0007a937) mup_spec_half_pane_cp

0xbd4d,	// (0x00080a87) mup_osc_middle_pane

0xbd56,	// (0x00080a90) mup_visualizer_osc_pane_g1

0x5bd4,	// (0x0007a90e) mup_spec_bar_pane_ParamLimits

0x5bd4,	// (0x0007a90e) mup_spec_bar_pane

0xbd3a,	// (0x00080a74) mup_spec_bar_pane_g1

0xbd44,	// (0x00080a7e) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0008435f) mup_spec_bar_pane_g

0x24c1,	// (0x000771fb) aid_cale_week_size_cell_pane_ParamLimits

0x24d4,	// (0x0007720e) bg_cale_heading_pane_ParamLimits

0x24ec,	// (0x00077226) bg_cale_pane_cp01_ParamLimits

0x2505,	// (0x0007723f) cale_week_corner_pane_ParamLimits

0x2516,	// (0x00077250) cale_week_day_heading_pane_ParamLimits

0x252e,	// (0x00077268) cale_week_scroll_pane_g1_ParamLimits

0x2543,	// (0x0007727d) cale_week_scroll_pane_g2_ParamLimits

0x2554,	// (0x0007728e) cale_week_scroll_pane_g3_ParamLimits

0x2565,	// (0x0007729f) cale_week_scroll_pane_g4_ParamLimits

0x2576,	// (0x000772b0) cale_week_scroll_pane_g5_ParamLimits

0x2589,	// (0x000772c3) cale_week_scroll_pane_g6_ParamLimits

0x259c,	// (0x000772d6) cale_week_scroll_pane_g7_ParamLimits

0x25af,	// (0x000772e9) cale_week_scroll_pane_g8_ParamLimits

0x25c2,	// (0x000772fc) cale_week_scroll_pane_g9_ParamLimits

0x25d3,	// (0x0007730d) cale_week_scroll_pane_g10_ParamLimits

0x25e4,	// (0x0007731e) cale_week_scroll_pane_g11_ParamLimits

0x25f5,	// (0x0007732f) cale_week_scroll_pane_g12_ParamLimits

0x2606,	// (0x00077340) cale_week_scroll_pane_g13_ParamLimits

0x2617,	// (0x00077351) cale_week_scroll_pane_g14_ParamLimits

0x2628,	// (0x00077362) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x00083f07) cale_week_scroll_pane_g_ParamLimits

0x263d,	// (0x00077377) cale_week_time_pane_ParamLimits

0x2650,	// (0x0007738a) grid_cale_week_pane_ParamLimits

0x2665,	// (0x0007739f) listscroll_cale_week_pane_t1

0x2677,	// (0x000773b1) scroll_pane_cp08_ParamLimits

0x3454,	// (0x0007818e) cale_month_corner_pane_ParamLimits

0x3736,	// (0x00078470) cale_month_pane_t1

0x3748,	// (0x00078482) cale_month_week_pane_ParamLimits

0x4074,	// (0x00078dae) popup_call_status_window_g1_ParamLimits

0x4088,	// (0x00078dc2) popup_call_status_window_g2_ParamLimits

0x409c,	// (0x00078dd6) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x000840af) popup_call_status_window_g_ParamLimits

0x4105,	// (0x00078e3f) aid_call2_pane

0x0c38,	// (0x00075972) msg_header_pane_g1

0x4e4d,	// (0x00079b87) postcard_address2_pane_ParamLimits

0x4e4d,	// (0x00079b87) postcard_address2_pane

0x4e5f,	// (0x00079b99) postcard_message2_pane_ParamLimits

0x4e5f,	// (0x00079b99) postcard_message2_pane

0x5b81,	// (0x0007a8bb) message2_row_pane_ParamLimits

0x5b81,	// (0x0007a8bb) message2_row_pane

0x5ba0,	// (0x0007a8da) address2_row_pane_ParamLimits

0x5ba0,	// (0x0007a8da) address2_row_pane

0xbd08,	// (0x00080a42) postcard_message2_row_pane_g1

0xbd10,	// (0x00080a4a) postcard_message2_row_pane_t1

0xbd08,	// (0x00080a42) address2_row_pane_g1

0xbd10,	// (0x00080a4a) address2_row_pane_t1

0xa98a,	// (0x0007f6c4) aid_size_cell_vorec

0x1bfd,	// (0x00076937) main_rss_pane

0x5bb3,	// (0x0007a8ed) rss_list_single_pane_ParamLimits

0x5bb3,	// (0x0007a8ed) rss_list_single_pane

0xbd1e,	// (0x00080a58) rss_list_single_pane_t1

0xbd2c,	// (0x00080a66) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x0008435a) rss_list_single_pane_t

0x1bfd,	// (0x00076937) main_camera2_pane

0x1bfd,	// (0x00076937) main_video2_pane

0x5e1a,	// (0x0007ab54) cams_zoom_pane_cp2_ParamLimits

0x5e1a,	// (0x0007ab54) cams_zoom_pane_cp2

0x5e3a,	// (0x0007ab74) image2_vga_pane_ParamLimits

0x5e3a,	// (0x0007ab74) image2_vga_pane

0x5e8b,	// (0x0007abc5) main_camera2_pane_g1_ParamLimits

0x5e8b,	// (0x0007abc5) main_camera2_pane_g1

0x5eab,	// (0x0007abe5) main_camera2_pane_g2_ParamLimits

0x5eab,	// (0x0007abe5) main_camera2_pane_g2

0x5ecb,	// (0x0007ac05) main_camera2_pane_g3_ParamLimits

0x5ecb,	// (0x0007ac05) main_camera2_pane_g3

0x5eeb,	// (0x0007ac25) main_camera2_pane_g4_ParamLimits

0x5eeb,	// (0x0007ac25) main_camera2_pane_g4

0x5f0b,	// (0x0007ac45) main_camera2_pane_g5_ParamLimits

0x5f0b,	// (0x0007ac45) main_camera2_pane_g5

0x5f2b,	// (0x0007ac65) main_camera2_pane_g6_ParamLimits

0x5f2b,	// (0x0007ac65) main_camera2_pane_g6

0x5f4b,	// (0x0007ac85) main_camera2_pane_g7_ParamLimits

0x5f4b,	// (0x0007ac85) main_camera2_pane_g7

0x5f6b,	// (0x0007aca5) main_camera2_pane_g8_ParamLimits

0x5f6b,	// (0x0007aca5) main_camera2_pane_g8

0x0008,

0xf641,	// (0x0008437b) main_camera2_pane_g_ParamLimits

0xf641,	// (0x0008437b) main_camera2_pane_g

0x5fab,	// (0x0007ace5) main_camera2_pane_t1_ParamLimits

0x5fab,	// (0x0007ace5) main_camera2_pane_t1

0x5fe0,	// (0x0007ad1a) main_camera2_pane_t2_ParamLimits

0x5fe0,	// (0x0007ad1a) main_camera2_pane_t2

0x6006,	// (0x0007ad40) main_camera2_pane_t3_ParamLimits

0x6006,	// (0x0007ad40) main_camera2_pane_t3

0x6064,	// (0x0007ad9e) main_camera2_pane_t4_ParamLimits

0x6064,	// (0x0007ad9e) main_camera2_pane_t4

0x0006,

0xf654,	// (0x0008438e) main_camera2_pane_t_ParamLimits

0xf654,	// (0x0008438e) main_camera2_pane_t

0x60f6,	// (0x0007ae30) cams_zoom_pane_cp4_ParamLimits

0x60f6,	// (0x0007ae30) cams_zoom_pane_cp4

0x610c,	// (0x0007ae46) image2_cif_pane_ParamLimits

0x610c,	// (0x0007ae46) image2_cif_pane

0x6137,	// (0x0007ae71) image2_subqcif_pane_ParamLimits

0x6137,	// (0x0007ae71) image2_subqcif_pane

0x6151,	// (0x0007ae8b) main_video2_pane_g1_ParamLimits

0x6151,	// (0x0007ae8b) main_video2_pane_g1

0x616b,	// (0x0007aea5) main_video2_pane_g2_ParamLimits

0x616b,	// (0x0007aea5) main_video2_pane_g2

0x6181,	// (0x0007aebb) main_video2_pane_g3_ParamLimits

0x6181,	// (0x0007aebb) main_video2_pane_g3

0x6197,	// (0x0007aed1) main_video2_pane_g4_ParamLimits

0x6197,	// (0x0007aed1) main_video2_pane_g4

0x61ad,	// (0x0007aee7) main_video2_pane_g5_ParamLimits

0x61ad,	// (0x0007aee7) main_video2_pane_g5

0x61c3,	// (0x0007aefd) main_video2_pane_g6_ParamLimits

0x61c3,	// (0x0007aefd) main_video2_pane_g6

0x0005,

0xf663,	// (0x0008439d) main_video2_pane_g_ParamLimits

0xf663,	// (0x0008439d) main_video2_pane_g

0x61dd,	// (0x0007af17) main_video2_pane_t1_ParamLimits

0x61dd,	// (0x0007af17) main_video2_pane_t1

0x6201,	// (0x0007af3b) main_video2_pane_t2_ParamLimits

0x6201,	// (0x0007af3b) main_video2_pane_t2

0x624f,	// (0x0007af89) main_video2_pane_t3_ParamLimits

0x624f,	// (0x0007af89) main_video2_pane_t3

0x0002,

0xf670,	// (0x000843aa) main_video2_pane_t_ParamLimits

0xf670,	// (0x000843aa) main_video2_pane_t

0x56d7,	// (0x0007a411) call_muted_g2

0x0001,

0xf612,	// (0x0008434c) call_muted_g

0x1bfd,	// (0x00076937) main_mup2_pane

0x6297,	// (0x0007afd1) main_mup2_pane_g1_ParamLimits

0x6297,	// (0x0007afd1) main_mup2_pane_g1

0x62a3,	// (0x0007afdd) main_mup2_pane_g2_ParamLimits

0x62a3,	// (0x0007afdd) main_mup2_pane_g2

0xec2b,	// (0x00083965) main_mup_pane_g13_cp1

0xec33,	// (0x0008396d) mup_volume_pane_cp1

0x62bf,	// (0x0007aff9) main_mup2_pane_g4_ParamLimits

0x62bf,	// (0x0007aff9) main_mup2_pane_g4

0x62d1,	// (0x0007b00b) main_mup2_pane_g5_ParamLimits

0x62d1,	// (0x0007b00b) main_mup2_pane_g5

0x62e3,	// (0x0007b01d) main_mup2_pane_g6_ParamLimits

0x62e3,	// (0x0007b01d) main_mup2_pane_g6

0x62f5,	// (0x0007b02f) main_mup2_pane_g7_ParamLimits

0x62f5,	// (0x0007b02f) main_mup2_pane_g7

0x0006,

0xf677,	// (0x000843b1) main_mup2_pane_g_ParamLimits

0xf677,	// (0x000843b1) main_mup2_pane_g

0x630d,	// (0x0007b047) main_mup2_pane_t1_ParamLimits

0x630d,	// (0x0007b047) main_mup2_pane_t1

0x6323,	// (0x0007b05d) main_mup2_pane_t2_ParamLimits

0x6323,	// (0x0007b05d) main_mup2_pane_t2

0x6339,	// (0x0007b073) main_mup2_pane_t3_ParamLimits

0x6339,	// (0x0007b073) main_mup2_pane_t3

0x634f,	// (0x0007b089) main_mup2_pane_t4_ParamLimits

0x634f,	// (0x0007b089) main_mup2_pane_t4

0x6367,	// (0x0007b0a1) main_mup2_pane_t5_ParamLimits

0x6367,	// (0x0007b0a1) main_mup2_pane_t5

0x637f,	// (0x0007b0b9) main_mup2_pane_t6_ParamLimits

0x637f,	// (0x0007b0b9) main_mup2_pane_t6

0x0005,

0xf686,	// (0x000843c0) main_mup2_pane_t_ParamLimits

0xf686,	// (0x000843c0) main_mup2_pane_t

0x63af,	// (0x0007b0e9) mup2_visualizer_pane_ParamLimits

0x63af,	// (0x0007b0e9) mup2_visualizer_pane

0x63dd,	// (0x0007b117) mup_progress_pane_cp_ParamLimits

0x63dd,	// (0x0007b117) mup_progress_pane_cp

0xec16,	// (0x00083950) mup_volume_pane_cp_ParamLimits

0xec16,	// (0x00083950) mup_volume_pane_cp

0x63f1,	// (0x0007b12b) mup2_visualizer_pane_g1_ParamLimits

0x63f1,	// (0x0007b12b) mup2_visualizer_pane_g1

0xbddf,	// (0x00080b19) mup2_visualizer_pane_g2_ParamLimits

0xbddf,	// (0x00080b19) mup2_visualizer_pane_g2

0x6408,	// (0x0007b142) mup2_visualizer_pane_g3_ParamLimits

0x6408,	// (0x0007b142) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x000843cd) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x000843cd) mup2_visualizer_pane_g

0x5222,	// (0x00079f5c) aid_size_cell_fmradio

0x5889,	// (0x0007a5c3) aid_height_parent_landcape

0x3188,	// (0x00077ec2) wml_content_pane_cp

0x3190,	// (0x00077eca) wml_tabs_pane

0x3199,	// (0x00077ed3) popup_wml_miniature_window

0x31a1,	// (0x00077edb) scroll_pane_cp021

0x31b5,	// (0x00077eef) wml_content_pane_comp8

0x1bfd,	// (0x00076937) bg_popup_sub_pane_cp05

0xbdfd,	// (0x00080b37) popup_wml_miniature_window_g1

0xbe05,	// (0x00080b3f) wml_miniature_view_pane

0x6414,	// (0x0007b14e) aid_size_wml_view

0x641c,	// (0x0007b156) wml_miniature_view_pane_g1

0x6425,	// (0x0007b15f) wml_miniature_view_pane_g2

0x642e,	// (0x0007b168) wml_miniature_view_pane_g3

0x6436,	// (0x0007b170) wml_miniature_view_pane_g4

0x643e,	// (0x0007b178) wml_miniature_view_pane_g5

0x6446,	// (0x0007b180) wml_miniature_view_pane_g6

0x644e,	// (0x0007b188) wml_miniature_view_pane_g7

0x6456,	// (0x0007b190) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x000843d4) wml_miniature_view_pane_g

0xbe0d,	// (0x00080b47) background_graphic_ParamLimits

0xbe0d,	// (0x00080b47) background_graphic

0xbe19,	// (0x00080b53) wml_tabs_2_pane

0xbe22,	// (0x00080b5c) wml_tabs_3_pane_ParamLimits

0xbe22,	// (0x00080b5c) wml_tabs_3_pane

0xbe34,	// (0x00080b6e) wml_tabs_4_pane_ParamLimits

0xbe34,	// (0x00080b6e) wml_tabs_4_pane

0xbe4a,	// (0x00080b84) wml_tabs_5_pane_ParamLimits

0xbe4a,	// (0x00080b84) wml_tabs_5_pane

0xbe64,	// (0x00080b9e) wml_tabs_pane_g2_ParamLimits

0xbe64,	// (0x00080b9e) wml_tabs_pane_g2

0xbe78,	// (0x00080bb2) wml_tabs_pane_g3_ParamLimits

0xbe78,	// (0x00080bb2) wml_tabs_pane_g3

0x645e,	// (0x0007b198) wml_tabs_2_active_pane_ParamLimits

0x645e,	// (0x0007b198) wml_tabs_2_active_pane

0x6472,	// (0x0007b1ac) wml_tabs_2_passive_pane_ParamLimits

0x6472,	// (0x0007b1ac) wml_tabs_2_passive_pane

0x6486,	// (0x0007b1c0) wml_tabs_3_active_pane_cp_ParamLimits

0x6486,	// (0x0007b1c0) wml_tabs_3_active_pane_cp

0x649b,	// (0x0007b1d5) wml_tabs_3_passive_pane_ParamLimits

0x649b,	// (0x0007b1d5) wml_tabs_3_passive_pane

0x64ae,	// (0x0007b1e8) wml_tabs_3_passive_pane_cp_ParamLimits

0x64ae,	// (0x0007b1e8) wml_tabs_3_passive_pane_cp

0x64c5,	// (0x0007b1ff) tabs_4_active_pane

0x64cd,	// (0x0007b207) tabs_4_passive_pane

0x64d7,	// (0x0007b211) tabs_4_passive_pane_cp

0x64df,	// (0x0007b219) tabs_4_passive_pane_cp2

0xbb35,	// (0x0008086f) aid_height_text

0x49bd,	// (0x000796f7) mup_volume_cont_pane_ParamLimits

0x49bd,	// (0x000796f7) mup_volume_cont_pane

0x1eee,	// (0x00076c28) aid_size_cell_pinb

0x1ef8,	// (0x00076c32) aid_size_list_pinb

0x63c9,	// (0x0007b103) mup2_volume_cont_pane_ParamLimits

0x63c9,	// (0x0007b103) mup2_volume_cont_pane

0xec02,	// (0x0008393c) mup2_volume_cont_pane_g1_ParamLimits

0xec02,	// (0x0008393c) mup2_volume_cont_pane_g1

0x1532,	// (0x0007626c) aid_size_cell_touch_ParamLimits

0x1532,	// (0x0007626c) aid_size_cell_touch

0x1740,	// (0x0007647a) touch_pane_ParamLimits

0x1740,	// (0x0007647a) touch_pane

0xa86c,	// (0x0007f5a6) main_rss2_pane

0xbe95,	// (0x00080bcf) listscroll_rss2_pane

0xbe9e,	// (0x00080bd8) rss2_navigation_pane

0xbea6,	// (0x00080be0) list_rss2_pane

0x42b4,	// (0x00078fee) scroll_pane_cp22

0xbeae,	// (0x00080be8) rss2_navigation_pane_g1

0xbeb7,	// (0x00080bf1) rss2_navigation_pane_g2

0xbebf,	// (0x00080bf9) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x000843e5) rss2_navigation_pane_g

0xbec7,	// (0x00080c01) rss2_navigation_pane_t1

0x64e9,	// (0x0007b223) rss2_list_single_pane_ParamLimits

0x64e9,	// (0x0007b223) rss2_list_single_pane

0xbed5,	// (0x00080c0f) rss2_list_single_pane_t2

0xbee3,	// (0x00080c1d) rss2_list_single_pane_t3_ParamLimits

0xbee3,	// (0x00080c1d) rss2_list_single_pane_t3

0xbf00,	// (0x00080c3a) rss2_list_single_pane_t4

0x3c06,	// (0x00078940) smil_status_pane_g1

0xa8e4,	// (0x0007f61e) main_image2_pane_ParamLimits

0xa8e4,	// (0x0007f61e) main_image2_pane

0x5f8b,	// (0x0007acc5) main_camera2_pane_g9_ParamLimits

0x5f8b,	// (0x0007acc5) main_camera2_pane_g9

0x60b9,	// (0x0007adf3) main_camera2_pane_t5_ParamLimits

0x60b9,	// (0x0007adf3) main_camera2_pane_t5

0xbdaf,	// (0x00080ae9) main_camera2_pane_t6_ParamLimits

0xbdaf,	// (0x00080ae9) main_camera2_pane_t6

0x6501,	// (0x0007b23b) main_image2_pane_g1_ParamLimits

0x6501,	// (0x0007b23b) main_image2_pane_g1

0x51d8,	// (0x00079f12) smil2_video_pane_ParamLimits

0x51d8,	// (0x00079f12) smil2_video_pane

0xa89a,	// (0x0007f5d4) aid_zoom_text_primary_cp

0xa8da,	// (0x0007f614) popup_preview_fixed_window

0x307b,	// (0x00077db5) im_reading_pane_g1

0x5e02,	// (0x0007ab3c) cams2_bc_adjust_pane_cp_ParamLimits

0x5e02,	// (0x0007ab3c) cams2_bc_adjust_pane_cp

0x60e8,	// (0x0007ae22) cams2_bc_adjust_pane_ParamLimits

0x60e8,	// (0x0007ae22) cams2_bc_adjust_pane

0xec3b,	// (0x00083975) cams2_bc_adjust_pane_g1

0xec43,	// (0x0008397d) cams2_slider_pane

0xec4c,	// (0x00083986) cams2_slider_pane_g1

0xec55,	// (0x0008398f) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x000843ec) cams2_slider_pane_g

0x2048,	// (0x00076d82) calc_display_pane_ParamLimits

0x2070,	// (0x00076daa) calc_paper_pane_ParamLimits

0x2093,	// (0x00076dcd) grid_calc_pane_ParamLimits

0xabe3,	// (0x0007f91d) popup_clock_digital_window_t1_ParamLimits

0x505b,	// (0x00079d95) main_image_pane_t1

0x202a,	// (0x00076d64) aid_size_cell_calc_ParamLimits

0x202a,	// (0x00076d64) aid_size_cell_calc

0x58cf,	// (0x0007a609) popup_blid_sat_info2_window_ParamLimits

0x58cf,	// (0x0007a609) popup_blid_sat_info2_window

0xbf16,	// (0x00080c50) aid_size_cell_blid

0xbf1e,	// (0x00080c58) bg_popup_window_pane_cp07

0xbf41,	// (0x00080c7b) grid_popup_blid_pane

0xbf4b,	// (0x00080c85) heading_pane_cp05_ParamLimits

0xbf4b,	// (0x00080c85) heading_pane_cp05

0xc015,	// (0x00080d4f) cell_popup_blid_pane_ParamLimits

0xc015,	// (0x00080d4f) cell_popup_blid_pane

0xc03b,	// (0x00080d75) cell_popup_blid_pane_g1

0xc043,	// (0x00080d7d) cell_popup_blid_pane_t1

0x6399,	// (0x0007b0d3) mup2_indicator_pane_ParamLimits

0x6399,	// (0x0007b0d3) mup2_indicator_pane

0x4703,	// (0x0007943d) mup2_visualizer_osc_pane

0xbdeb,	// (0x00080b25) mup2_visualizer_spec_pane_ParamLimits

0xbdeb,	// (0x00080b25) mup2_visualizer_spec_pane

0x6517,	// (0x0007b251) mup2_spec_half_pane

0x6520,	// (0x0007b25a) mup2_spec_half_pane_cp

0x6528,	// (0x0007b262) mup2_spec_bar_pane_ParamLimits

0x6528,	// (0x0007b262) mup2_spec_bar_pane

0xbd3a,	// (0x00080a74) mup2_spec_bar_pane_g1

0xbd44,	// (0x00080a7e) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0008435f) mup2_spec_bar_pane_g

0x6548,	// (0x0007b282) mup2_osc_middle_pane

0xbd56,	// (0x00080a90) mup2_visualizer_osc_pane_g1

0x17b2,	// (0x000764ec) popup_number_entry_window_t1_ParamLimits

0x17c5,	// (0x000764ff) popup_number_entry_window_t2_ParamLimits

0x17d7,	// (0x00076511) popup_number_entry_window_t3_ParamLimits

0x17e9,	// (0x00076523) popup_number_entry_window_t5_ParamLimits

0x17e9,	// (0x00076523) popup_number_entry_window_t5

0xf0e7,	// (0x00083e21) popup_number_entry_window_t_ParamLimits

0x181f,	// (0x00076559) text_title_cp2_ParamLimits

0xac58,	// (0x0007f992) aid_hotspot_pointer_text2_pane

0xac7e,	// (0x0007f9b8) main_viewer_pane_g9_ParamLimits

0xac7e,	// (0x0007f9b8) main_viewer_pane_g9

0x3736,	// (0x00078470) cale_month_pane_t1_ParamLimits

0x3c90,	// (0x000789ca) bg_cale_pane_ParamLimits

0x3ca8,	// (0x000789e2) list_cale_pane_ParamLimits

0x2665,	// (0x0007739f) listscroll_cale_day_pane_t1

0x3cb9,	// (0x000789f3) scroll_pane_cp09_ParamLimits

0x4a6f,	// (0x000797a9) main_mup_eq_pane_t1_ParamLimits

0x4a6f,	// (0x000797a9) main_mup_eq_pane_t1

0x4a8b,	// (0x000797c5) main_mup_eq_pane_t2_ParamLimits

0x4a8b,	// (0x000797c5) main_mup_eq_pane_t2

0x4aa7,	// (0x000797e1) main_mup_eq_pane_t3_ParamLimits

0x4aa7,	// (0x000797e1) main_mup_eq_pane_t3

0x4ac5,	// (0x000797ff) main_mup_eq_pane_t4_ParamLimits

0x4ac5,	// (0x000797ff) main_mup_eq_pane_t4

0x4ae3,	// (0x0007981d) main_mup_eq_pane_t5_ParamLimits

0x4ae3,	// (0x0007981d) main_mup_eq_pane_t5

0x4b01,	// (0x0007983b) main_mup_eq_pane_t6_ParamLimits

0x4b01,	// (0x0007983b) main_mup_eq_pane_t6

0x4b17,	// (0x00079851) main_mup_eq_pane_t7_ParamLimits

0x4b17,	// (0x00079851) main_mup_eq_pane_t7

0x4b2d,	// (0x00079867) main_mup_eq_pane_t8_ParamLimits

0x4b2d,	// (0x00079867) main_mup_eq_pane_t8

0x4b43,	// (0x0007987d) main_mup_eq_pane_t9_ParamLimits

0x4b43,	// (0x0007987d) main_mup_eq_pane_t9

0x4b5d,	// (0x00079897) main_mup_eq_pane_t10_ParamLimits

0x4b5d,	// (0x00079897) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x000841ae) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x000841ae) main_mup_eq_pane_t

0x4c0c,	// (0x00079946) mup_equalizer_pane_cp5_ParamLimits

0x4c20,	// (0x0007995a) mup_equalizer_pane_cp6_ParamLimits

0x4c34,	// (0x0007996e) mup_equalizer_pane_cp7_ParamLimits

0xa86c,	// (0x0007f5a6) main_gallery_pane

0xbd5f,	// (0x00080a99) smil2_volume_pane

0xbd67,	// (0x00080aa1) smil_status_volume_pane_g1_ParamLimits

0xbd7a,	// (0x00080ab4) smil_status_volume_pane_g2_ParamLimits

0xbd8d,	// (0x00080ac7) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x00084364) smil_status_volume_pane_g_ParamLimits

0xbf1e,	// (0x00080c58) bg_popup_window_pane_cp07_ParamLimits

0xbf2c,	// (0x00080c66) blid_firmament_pane

0x6551,	// (0x0007b28b) aid_size_cell_gallery_ParamLimits

0x6551,	// (0x0007b28b) aid_size_cell_gallery

0x6567,	// (0x0007b2a1) grid_gallery_pane_ParamLimits

0x6567,	// (0x0007b2a1) grid_gallery_pane

0x6580,	// (0x0007b2ba) cell_gallery_pane_ParamLimits

0x6580,	// (0x0007b2ba) cell_gallery_pane

0xc051,	// (0x00080d8b) bg_cell_gallery_focus_pane_ParamLimits

0xc051,	// (0x00080d8b) bg_cell_gallery_focus_pane

0xc063,	// (0x00080d9d) cell_gallery_pane_g1_ParamLimits

0xc063,	// (0x00080d9d) cell_gallery_pane_g1

0x65c9,	// (0x0007b303) cell_gallery_pane_g2_ParamLimits

0x65c9,	// (0x0007b303) cell_gallery_pane_g2

0x65d6,	// (0x0007b310) cell_gallery_pane_g3_ParamLimits

0x65d6,	// (0x0007b310) cell_gallery_pane_g3

0xc06f,	// (0x00080da9) cell_gallery_pane_g4_ParamLimits

0xc06f,	// (0x00080da9) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x00084412) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x00084412) cell_gallery_pane_g

0xc07b,	// (0x00080db5) bg_cell_gallery_focus_pane_g1

0xc083,	// (0x00080dbd) bg_cell_gallery_focus_pane_g2

0xc08b,	// (0x00080dc5) bg_cell_gallery_focus_pane_g3

0xc093,	// (0x00080dcd) bg_cell_gallery_focus_pane_g4

0xc09b,	// (0x00080dd5) bg_cell_gallery_focus_pane_g5

0xc0a3,	// (0x00080ddd) bg_cell_gallery_focus_pane_g6

0xc0ab,	// (0x00080de5) bg_cell_gallery_focus_pane_g7

0xc0b3,	// (0x00080ded) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x0008441b) bg_cell_gallery_focus_pane_g

0xc0bb,	// (0x00080df5) aid_firma_cardinal

0xc0cf,	// (0x00080e09) blid_firmament_pane_t1

0xc0e6,	// (0x00080e20) blid_firmament_pane_t2

0xc0fd,	// (0x00080e37) blid_firmament_pane_t3

0xc114,	// (0x00080e4e) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x0008442c) blid_firmament_pane_t

0xc12b,	// (0x00080e65) blid_sat_info_pane

0xc13b,	// (0x00080e75) blid_sat_info_pane_g1

0xc13b,	// (0x00080e75) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x00084435) blid_sat_info_pane_g

0xc145,	// (0x00080e7f) blid_sat_info_pane_t1

0xc153,	// (0x00080e8d) smil2_volume_content_pane

0xc15c,	// (0x00080e96) smil2_volume_pane_g1

0xc164,	// (0x00080e9e) smil2_volume_content_pane_g1

0xc16d,	// (0x00080ea7) smil2_volume_content_pane_g2

0xc176,	// (0x00080eb0) smil2_volume_content_pane_g3

0xc17f,	// (0x00080eb9) smil2_volume_content_pane_g4

0xc188,	// (0x00080ec2) smil2_volume_content_pane_g5

0xc191,	// (0x00080ecb) smil2_volume_content_pane_g6

0xc19a,	// (0x00080ed4) smil2_volume_content_pane_g7

0xc1a3,	// (0x00080edd) smil2_volume_content_pane_g8

0xc1ac,	// (0x00080ee6) smil2_volume_content_pane_g9

0xc1b5,	// (0x00080eef) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x0008443a) smil2_volume_content_pane_g

0x26d1,	// (0x0007740b) cale_week_day_heading_pane_t1_ParamLimits

0x26e5,	// (0x0007741f) cale_week_day_heading_pane_t2_ParamLimits

0x26f9,	// (0x00077433) cale_week_day_heading_pane_t3_ParamLimits

0x270d,	// (0x00077447) cale_week_day_heading_pane_t4_ParamLimits

0x2721,	// (0x0007745b) cale_week_day_heading_pane_t5_ParamLimits

0x2735,	// (0x0007746f) cale_week_day_heading_pane_t6_ParamLimits

0x274b,	// (0x00077485) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x00083f26) cale_week_day_heading_pane_t_ParamLimits

0x275f,	// (0x00077499) bg_cale_side_pane_ParamLimits

0x276d,	// (0x000774a7) cale_week_time_pane_t1_ParamLimits

0x2785,	// (0x000774bf) cale_week_time_pane_t2_ParamLimits

0x279d,	// (0x000774d7) cale_week_time_pane_t3_ParamLimits

0x27b5,	// (0x000774ef) cale_week_time_pane_t4_ParamLimits

0x27cd,	// (0x00077507) cale_week_time_pane_t5_ParamLimits

0x27e5,	// (0x0007751f) cale_week_time_pane_t6_ParamLimits

0x27fd,	// (0x00077537) cale_week_time_pane_t7_ParamLimits

0x2815,	// (0x0007754f) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x00083f35) cale_week_time_pane_t_ParamLimits

0x282d,	// (0x00077567) cell_cale_week_pane_g2_ParamLimits

0x275f,	// (0x00077499) bg_cale_side_pane_cp01_ParamLimits

0x3a75,	// (0x000787af) cale_month_week_pane_t1_ParamLimits

0x3a8c,	// (0x000787c6) cale_month_week_pane_t2_ParamLimits

0x3aa3,	// (0x000787dd) cale_month_week_pane_t3_ParamLimits

0x3aba,	// (0x000787f4) cale_month_week_pane_t4_ParamLimits

0x3ad1,	// (0x0007880b) cale_month_week_pane_t5_ParamLimits

0x3ae8,	// (0x00078822) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x0008400e) cale_month_week_pane_t_ParamLimits

0xaaec,	// (0x0007f826) cell_cale_month_pane_g1_ParamLimits

0xa86c,	// (0x0007f5a6) main_cale_event_viewer_pane

0xa86c,	// (0x0007f5a6) listscroll_cale_event_viewer_pane

0xc1be,	// (0x00080ef8) list_cale_ev_pane

0xc1c6,	// (0x00080f00) scroll_pane_cp023

0xc1d2,	// (0x00080f0c) field_cale_ev_pane_ParamLimits

0xc1d2,	// (0x00080f0c) field_cale_ev_pane

0xc1ec,	// (0x00080f26) field_cale_ev_content_pane_ParamLimits

0xc1ec,	// (0x00080f26) field_cale_ev_content_pane

0xc1f8,	// (0x00080f32) field_cale_ev_pane_g1_ParamLimits

0xc1f8,	// (0x00080f32) field_cale_ev_pane_g1

0xc204,	// (0x00080f3e) field_cale_ev_pane_g2_ParamLimits

0xc204,	// (0x00080f3e) field_cale_ev_pane_g2

0xc21c,	// (0x00080f56) field_cale_ev_pane_g3_ParamLimits

0xc21c,	// (0x00080f56) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x0008444f) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x0008444f) field_cale_ev_pane_g

0xc234,	// (0x00080f6e) field_cale_ev_pane_t1_ParamLimits

0xc234,	// (0x00080f6e) field_cale_ev_pane_t1

0xc24b,	// (0x00080f85) field_cale_ev_content_pane_t1_ParamLimits

0xc24b,	// (0x00080f85) field_cale_ev_content_pane_t1

0x4cd4,	// (0x00079a0e) bg_button_pane_cp01

0x21dd,	// (0x00076f17) listscroll_cale_week_pane_ParamLimits

0x24b7,	// (0x000771f1) popup_toolbar_window_cp01

0x2665,	// (0x0007739f) listscroll_cale_week_pane_t1_ParamLimits

0x21dd,	// (0x00076f17) listscroll_cale_day_pane_ParamLimits

0x3c86,	// (0x000789c0) popup_toolbar_window_cp02

0x2665,	// (0x0007739f) listscroll_cale_day_pane_t1_ParamLimits

0x21dd,	// (0x00076f17) main_cale_month_pane_ParamLimits

0x5af5,	// (0x0007a82f) popup_toolbar_window_cp03_ParamLimits

0x5af5,	// (0x0007a82f) popup_toolbar_window_cp03

0x5039,	// (0x00079d73) main_image_pane_g2_ParamLimits

0x5039,	// (0x00079d73) main_image_pane_g2

0x504a,	// (0x00079d84) main_image_pane_g3_ParamLimits

0x504a,	// (0x00079d84) main_image_pane_g3

0x0002,

0xf506,	// (0x00084240) main_image_pane_g_ParamLimits

0xf506,	// (0x00084240) main_image_pane_g

0x505b,	// (0x00079d95) main_image_pane_t1_ParamLimits

0x5072,	// (0x00079dac) main_image_pane_t2_ParamLimits

0x5072,	// (0x00079dac) main_image_pane_t2

0x5084,	// (0x00079dbe) main_image_pane_t3_ParamLimits

0x5084,	// (0x00079dbe) main_image_pane_t3

0x50ac,	// (0x00079de6) main_image_pane_t4_ParamLimits

0x50ac,	// (0x00079de6) main_image_pane_t4

0x0003,

0xf50d,	// (0x00084247) main_image_pane_t_ParamLimits

0xf50d,	// (0x00084247) main_image_pane_t

0x50cc,	// (0x00079e06) popup_image_details_window_cp01

0x50d6,	// (0x00079e10) popup_toobar_trans_pane_cp01_ParamLimits

0x50d6,	// (0x00079e10) popup_toobar_trans_pane_cp01

0x59a6,	// (0x0007a6e0) popup_image_details_window_ParamLimits

0x59a6,	// (0x0007a6e0) popup_image_details_window

0xbcc0,	// (0x000809fa) popup_image_focus_window

0x5dbc,	// (0x0007aaf6) camera2_autofocus_pane_ParamLimits

0x5dbc,	// (0x0007aaf6) camera2_autofocus_pane

0xa86c,	// (0x0007f5a6) bg_popup_sub_pane_cp06

0xc268,	// (0x00080fa2) popup_image_focus_window_g1

0xc270,	// (0x00080faa) popup_image_focus_window_g2

0xc278,	// (0x00080fb2) popup_image_focus_window_g3

0xc280,	// (0x00080fba) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x00084456) popup_image_focus_window_g

0xc288,	// (0x00080fc2) popup_image_focus_window_t1

0xc296,	// (0x00080fd0) popup_image_focus_window_t2

0xc2a6,	// (0x00080fe0) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x0008445f) popup_image_focus_window_t

0xc2b4,	// (0x00080fee) camera2_autofocus_pane_g1

0xa8e4,	// (0x0007f61e) bg_tb_trans_pane_cp01

0xc2c2,	// (0x00080ffc) popup_image_details_window_g1

0xc2d5,	// (0x0008100f) popup_image_details_window_g2

0x0002,

0xf737,	// (0x00084471) popup_image_details_window_g

0xc2fe,	// (0x00081038) popup_image_details_window_t1

0xc310,	// (0x0008104a) popup_image_details_window_t2

0xc329,	// (0x00081063) popup_image_details_window_t3

0xc33d,	// (0x00081077) popup_image_details_window_t4

0xc358,	// (0x00081092) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x00084478) popup_image_details_window_t

0x21c9,	// (0x00076f03) bg_calc_paper_pane_ParamLimits

0xa86c,	// (0x0007f5a6) grid_highlight_pane_cp013

0xa8fa,	// (0x0007f634) list_calc_pane_ParamLimits

0xa90c,	// (0x0007f646) scroll_pane_cp024

0x21dd,	// (0x00076f17) bg_calc_display_pane_ParamLimits

0x21e9,	// (0x00076f23) calc_display_pane_t1_ParamLimits

0x21fb,	// (0x00076f35) calc_display_pane_t2_ParamLimits

0xa914,	// (0x0007f64e) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x00083ea8) calc_display_pane_t_ParamLimits

0x2311,	// (0x0007704b) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x00083ec5) cell_calc_pane_g

0x231a,	// (0x00077054) cell_calc_pane_t1

0x2329,	// (0x00077063) grid_highlight_pane_cp02_ParamLimits

0x233f,	// (0x00077079) toolbar_button_pane_cp01_ParamLimits

0x233f,	// (0x00077079) toolbar_button_pane_cp01

0x5118,	// (0x00079e52) temp_image_control_pane_ParamLimits

0x5118,	// (0x00079e52) temp_image_control_pane

0xa8e4,	// (0x0007f61e) main_mp3_pane

0xc372,	// (0x000810ac) temp_image_control_pane_g1_ParamLimits

0xc372,	// (0x000810ac) temp_image_control_pane_g1

0xc380,	// (0x000810ba) temp_image_control_pane_g2_ParamLimits

0xc380,	// (0x000810ba) temp_image_control_pane_g2

0xc392,	// (0x000810cc) temp_image_control_pane_g3_ParamLimits

0xc392,	// (0x000810cc) temp_image_control_pane_g3

0x6613,	// (0x0007b34d) temp_image_control_pane_g4_ParamLimits

0x6613,	// (0x0007b34d) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x00084483) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x00084483) temp_image_control_pane_g

0xc372,	// (0x000810ac) main_mp3_pane_g1

0x6626,	// (0x0007b360) main_mp3_pane_g2

0x0007,

0xf752,	// (0x0008448c) main_mp3_pane_g

0xc3d5,	// (0x0008110f) main_mp3_pane_t1

0x29a3,	// (0x000776dd) main_camera_pane_g8_ParamLimits

0x29a3,	// (0x000776dd) main_camera_pane_g8

0x2b5a,	// (0x00077894) main_video_pane_g7_ParamLimits

0x2b5a,	// (0x00077894) main_video_pane_g7

0xbdcd,	// (0x00080b07) main_camera2_pane_t7_ParamLimits

0xbdcd,	// (0x00080b07) main_camera2_pane_t7

0x3148,	// (0x00077e82) scroll_pane_cp025_ParamLimits

0x3148,	// (0x00077e82) scroll_pane_cp025

0x315c,	// (0x00077e96) scroll_pane_cp026_ParamLimits

0x315c,	// (0x00077e96) scroll_pane_cp026

0x316b,	// (0x00077ea5) wml_content_pane_ParamLimits

0xa86c,	// (0x0007f5a6) main_touch_calib_pane

0x66f2,	// (0x0007b42c) main_touch_calib_pane_g1

0x66fe,	// (0x0007b438) main_touch_calib_pane_g2

0x670a,	// (0x0007b444) main_touch_calib_pane_g3

0x6716,	// (0x0007b450) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x000844aa) main_touch_calib_pane_g

0x6722,	// (0x0007b45c) main_touch_calib_pane_t1

0x673c,	// (0x0007b476) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x000844b3) main_touch_calib_pane_t

0x4566,	// (0x000792a0) mup_progress_pane_cp02

0x459b,	// (0x000792d5) navi_pane_g1

0x4654,	// (0x0007938e) navi_pane_mp_t3

0xa8e4,	// (0x0007f61e) main_mp3_pane_ParamLimits

0x5b33,	// (0x0007a86d) navi_pane_ParamLimits

0xc372,	// (0x000810ac) main_mp3_pane_g1_ParamLimits

0x6626,	// (0x0007b360) main_mp3_pane_g2_ParamLimits

0x6634,	// (0x0007b36e) main_mp3_pane_g3_ParamLimits

0x6634,	// (0x0007b36e) main_mp3_pane_g3

0x6642,	// (0x0007b37c) main_mp3_pane_g4_ParamLimits

0x6642,	// (0x0007b37c) main_mp3_pane_g4

0xc3a2,	// (0x000810dc) main_mp3_pane_g5_ParamLimits

0xc3a2,	// (0x000810dc) main_mp3_pane_g5

0xc3b0,	// (0x000810ea) main_mp3_pane_g6_ParamLimits

0xc3b0,	// (0x000810ea) main_mp3_pane_g6

0xc3bd,	// (0x000810f7) main_mp3_pane_g7_ParamLimits

0xc3bd,	// (0x000810f7) main_mp3_pane_g7

0xc3c9,	// (0x00081103) main_mp3_pane_g8_ParamLimits

0xc3c9,	// (0x00081103) main_mp3_pane_g8

0xf752,	// (0x0008448c) main_mp3_pane_g_ParamLimits

0x6650,	// (0x0007b38a) main_mp3_pane_t2

0x665e,	// (0x0007b398) main_mp3_pane_t3

0xc3e3,	// (0x0008111d) main_mp3_pane_t4

0xc3f1,	// (0x0008112b) main_mp3_pane_t5

0x0005,

0xf763,	// (0x0008449d) main_mp3_pane_t

0xc3ff,	// (0x00081139) mup_progress_pane_cp01

0xa89a,	// (0x0007f5d4) aid_zoom_text_secondary2

0xc1be,	// (0x00080ef8) list_cale_ev2_pane

0xc1c6,	// (0x00080f00) scroll_pane_cp023_ParamLimits

0x6792,	// (0x0007b4cc) field_cale_ev2_pane_ParamLimits

0x6792,	// (0x0007b4cc) field_cale_ev2_pane

0x67b8,	// (0x0007b4f2) field_cale_ev2_pane_g1_ParamLimits

0x67b8,	// (0x0007b4f2) field_cale_ev2_pane_g1

0x67c4,	// (0x0007b4fe) field_cale_ev2_pane_g2_ParamLimits

0x67c4,	// (0x0007b4fe) field_cale_ev2_pane_g2

0x67dc,	// (0x0007b516) field_cale_ev2_pane_g3_ParamLimits

0x67dc,	// (0x0007b516) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x000844be) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x000844be) field_cale_ev2_pane_g

0xc407,	// (0x00081141) field_cale_ev2_pane_t1_ParamLimits

0xc407,	// (0x00081141) field_cale_ev2_pane_t1

0xc41e,	// (0x00081158) field_cale_ev2_pane_t2_ParamLimits

0xc41e,	// (0x00081158) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x000844c7) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x000844c7) field_cale_ev2_pane_t

0x4e03,	// (0x00079b3d) main_postcard_pane_g5_ParamLimits

0x4e03,	// (0x00079b3d) main_postcard_pane_g5

0x4e19,	// (0x00079b53) main_postcard_pane_g6_ParamLimits

0x4e19,	// (0x00079b53) main_postcard_pane_g6

0x28e4,	// (0x0007761e) camera2_autofocus_pane_cp_ParamLimits

0x28e4,	// (0x0007761e) camera2_autofocus_pane_cp

0xa8e4,	// (0x0007f61e) main_mup3_pane

0x6814,	// (0x0007b54e) main_mup3_pane_g1_ParamLimits

0x6814,	// (0x0007b54e) main_mup3_pane_g1

0x6836,	// (0x0007b570) main_mup3_pane_g2_ParamLimits

0x6836,	// (0x0007b570) main_mup3_pane_g2

0x68bb,	// (0x0007b5f5) main_mup3_pane_g3_ParamLimits

0x68bb,	// (0x0007b5f5) main_mup3_pane_g3

0x6901,	// (0x0007b63b) main_mup3_pane_g4_ParamLimits

0x6901,	// (0x0007b63b) main_mup3_pane_g4

0x6947,	// (0x0007b681) main_mup3_pane_g5_ParamLimits

0x6947,	// (0x0007b681) main_mup3_pane_g5

0x698f,	// (0x0007b6c9) main_mup3_pane_g6_ParamLimits

0x698f,	// (0x0007b6c9) main_mup3_pane_g6

0xc433,	// (0x0008116d) main_mup3_pane_g7_ParamLimits

0xc433,	// (0x0008116d) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x000844d7) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x000844d7) main_mup3_pane_g

0x6a0f,	// (0x0007b749) main_mup3_pane_t1_ParamLimits

0x6a0f,	// (0x0007b749) main_mup3_pane_t1

0x6a83,	// (0x0007b7bd) main_mup3_pane_t2_ParamLimits

0x6a83,	// (0x0007b7bd) main_mup3_pane_t2

0x6b57,	// (0x0007b891) main_mup3_pane_t4_ParamLimits

0x6b57,	// (0x0007b891) main_mup3_pane_t4

0x6bb5,	// (0x0007b8ef) main_mup3_pane_t5_ParamLimits

0x6bb5,	// (0x0007b8ef) main_mup3_pane_t5

0x6c71,	// (0x0007b9ab) main_mup3_pane_t6_ParamLimits

0x6c71,	// (0x0007b9ab) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x000844e8) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x000844e8) main_mup3_pane_t

0x6d29,	// (0x0007ba63) mup3_progress_pane_ParamLimits

0x6d29,	// (0x0007ba63) mup3_progress_pane

0x6db5,	// (0x0007baef) popup_mup3_control_window_ParamLimits

0x6db5,	// (0x0007baef) popup_mup3_control_window

0xc441,	// (0x0008117b) popup_mup3_text_window

0x6de7,	// (0x0007bb21) mup3_progress_pane_t1

0x6e06,	// (0x0007bb40) mup3_progress_pane_t2

0xc449,	// (0x00081183) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x000844f5) mup3_progress_pane_t

0xc466,	// (0x000811a0) mup_progress_pane_cp03

0xa86c,	// (0x0007f5a6) bg_tb_trans_pane_cp04

0x6e25,	// (0x0007bb5f) mup3_volume_pane

0x6e2d,	// (0x0007bb67) popup_mup3_control_window_g1

0x6e36,	// (0x0007bb70) mup3_volume_pane_g1

0x6e3f,	// (0x0007bb79) mup3_volume_pane_g2

0x6e48,	// (0x0007bb82) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x000844fc) mup3_volume_pane_g

0xa86c,	// (0x0007f5a6) bg_tb_trans_pane_cp03

0xc476,	// (0x000811b0) popup_mup3_text_window_g1

0xc47e,	// (0x000811b8) popup_mup3_text_window_t1

0x22e0,	// (0x0007701a) list_calc_item_pane_g1_ParamLimits

0xbe8c,	// (0x00080bc6) mup_volume_pane_cp_g1

0x6756,	// (0x0007b490) main_touch_calib_pane_t3

0x676a,	// (0x0007b4a4) main_touch_calib_pane_t4

0x677e,	// (0x0007b4b8) main_touch_calib_pane_t5

0xa876,	// (0x0007f5b0) aid_cell_size_toolbar2

0xa87e,	// (0x0007f5b8) aid_popup3_width_pane

0xa88a,	// (0x0007f5c4) aid_zoom_text_msg_primary

0xa9ee,	// (0x0007f728) vorec_t7

0x2244,	// (0x00076f7e) bg_calc_paper_pane_g1_ParamLimits

0x2250,	// (0x00076f8a) bg_calc_paper_pane_g2_ParamLimits

0x225c,	// (0x00076f96) bg_calc_paper_pane_g3_ParamLimits

0x2268,	// (0x00076fa2) bg_calc_paper_pane_g4_ParamLimits

0x2274,	// (0x00076fae) bg_calc_paper_pane_g5_ParamLimits

0x2280,	// (0x00076fba) bg_calc_paper_pane_g6_ParamLimits

0x2291,	// (0x00076fcb) bg_calc_paper_pane_g7_ParamLimits

0x22a2,	// (0x00076fdc) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x00083eaf) bg_calc_paper_pane_g_ParamLimits

0x22b5,	// (0x00076fef) calc_bg_paper_pane_g9_ParamLimits

0x2a4a,	// (0x00077784) image_qvga_pane_ParamLimits

0x2a4a,	// (0x00077784) image_qvga_pane

0x1e58,	// (0x00076b92) bg_popup_sub_pane_cp04_ParamLimits

0x4f97,	// (0x00079cd1) popup_mup_playback_window_g1_ParamLimits

0x4fa3,	// (0x00079cdd) popup_mup_playback_window_t1_ParamLimits

0x4fb8,	// (0x00079cf2) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x0008423b) popup_mup_playback_window_t_ParamLimits

0x62b3,	// (0x0007afed) main_mup2_pane_g3_ParamLimits

0x62b3,	// (0x0007afed) main_mup2_pane_g3

0x2de4,	// (0x00077b1e) popup_toolbar_window_cp04

0xaeae,	// (0x0007fbe8) popup_call2_audio_second_window_g3_ParamLimits

0xaeae,	// (0x0007fbe8) popup_call2_audio_second_window_g3

0xb2b8,	// (0x0007fff2) popup_call2_audio_first_window_g4_ParamLimits

0xb2b8,	// (0x0007fff2) popup_call2_audio_first_window_g4

0xb937,	// (0x00080671) popup_call2_audio_in_window_g4_ParamLimits

0xb937,	// (0x00080671) popup_call2_audio_in_window_g4

0x4fcd,	// (0x00079d07) aid_area_sk_bg_cut_ParamLimits

0x4fcd,	// (0x00079d07) aid_area_sk_bg_cut

0x4feb,	// (0x00079d25) aid_area_sk_bg_cut_2_ParamLimits

0x4feb,	// (0x00079d25) aid_area_sk_bg_cut_2

0x65b9,	// (0x0007b2f3) aid_placing_details_win

0x65c1,	// (0x0007b2fb) aid_placing_details_win_2

0xc2b4,	// (0x00080fee) camera2_autofocus_pane_g1_ParamLimits

0x16df,	// (0x00076419) popup_fixed_preview_cale_window_ParamLimits

0x16df,	// (0x00076419) popup_fixed_preview_cale_window

0x4714,	// (0x0007944e) navi_slider_pane_g3

0x471d,	// (0x00079457) navi_slider_pane_g4

0x4726,	// (0x00079460) navi_slider_pane_g5

0x4714,	// (0x0007944e) navi_slider_pane_g6

0xac09,	// (0x0007f943) navi_slider_pane_g7

0x4c51,	// (0x0007998b) mup_scale_pane_g3

0x4c5a,	// (0x00079994) mup_scale_pane_g4

0x4c63,	// (0x0007999d) mup_scale_pane_g5

0x4c6c,	// (0x000799a6) mup_scale_pane_g6

0x4c75,	// (0x000799af) mup_scale_pane_g7

0x4714,	// (0x0007944e) cams2_slider_pane_g3

0xbf0e,	// (0x00080c48) cams2_slider_pane_g4

0xec5e,	// (0x00083998) cams2_slider_pane_g5

0x4714,	// (0x0007944e) cams2_slider_pane_g6

0xec66,	// (0x000839a0) cams2_slider_pane_g7

0xc13b,	// (0x00080e75) camera2_autofocus_pane_cp_g1

0xc48c,	// (0x000811c6) bg_popup_preview_window_pane_cp02_ParamLimits

0xc48c,	// (0x000811c6) bg_popup_preview_window_pane_cp02

0xc498,	// (0x000811d2) list_fp_cale_pane_ParamLimits

0xc498,	// (0x000811d2) list_fp_cale_pane

0xc4a4,	// (0x000811de) popup_fixed_preview_cale_window_t1_ParamLimits

0xc4a4,	// (0x000811de) popup_fixed_preview_cale_window_t1

0x6e51,	// (0x0007bb8b) popup_fixed_preview_cale_window_t2_ParamLimits

0x6e51,	// (0x0007bb8b) popup_fixed_preview_cale_window_t2

0x6e66,	// (0x0007bba0) popup_fixed_preview_cale_window_t3_ParamLimits

0x6e66,	// (0x0007bba0) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x00084503) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x00084503) popup_fixed_preview_cale_window_t

0x6e7b,	// (0x0007bbb5) list_single_fp_cale_pane_ParamLimits

0x6e7b,	// (0x0007bbb5) list_single_fp_cale_pane

0xc4c2,	// (0x000811fc) list_single_fp_cale_pane_g1_ParamLimits

0xc4c2,	// (0x000811fc) list_single_fp_cale_pane_g1

0xc4ce,	// (0x00081208) list_single_fp_cale_pane_g2_ParamLimits

0xc4ce,	// (0x00081208) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x0008450a) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x0008450a) list_single_fp_cale_pane_g

0xc4e7,	// (0x00081221) list_single_fp_cale_pane_t1_ParamLimits

0xc4e7,	// (0x00081221) list_single_fp_cale_pane_t1

0xc4f9,	// (0x00081233) list_single_fp_cale_pane_t2_ParamLimits

0xc4f9,	// (0x00081233) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x00084511) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x00084511) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa86c,	// (0x0007f5a6) main_dialer_pane

0x6e93,	// (0x0007bbcd) aid_cell_size_keypad

0x6e9d,	// (0x0007bbd7) dialer_ne_pane

0x6ea5,	// (0x0007bbdf) grid_dialer_command_1_pane

0x6ead,	// (0x0007bbe7) grid_dialer_command_2_pane

0x6eb5,	// (0x0007bbef) grid_dialer_keypad_pane

0x6ec7,	// (0x0007bc01) bg_popup_call_pane_cp06_ParamLimits

0x6ec7,	// (0x0007bc01) bg_popup_call_pane_cp06

0x6ed3,	// (0x0007bc0d) dialer_ne_clear_pane_ParamLimits

0x6ed3,	// (0x0007bc0d) dialer_ne_clear_pane

0xc52c,	// (0x00081266) dialer_ne_pane_g1

0xc534,	// (0x0008126e) dialer_ne_pane_t1_ParamLimits

0xc534,	// (0x0008126e) dialer_ne_pane_t1

0x6edf,	// (0x0007bc19) dialer_ne_pane_t2_ParamLimits

0x6edf,	// (0x0007bc19) dialer_ne_pane_t2

0x6f09,	// (0x0007bc43) dialer_ne_pane_t3_ParamLimits

0x6f09,	// (0x0007bc43) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x00084516) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x00084516) dialer_ne_pane_t

0x6f39,	// (0x0007bc73) dialer_ne_pane_t3_copy1_ParamLimits

0x6f39,	// (0x0007bc73) dialer_ne_pane_t3_copy1

0x6f68,	// (0x0007bca2) cell_dialer_keypad_pane_ParamLimits

0x6f68,	// (0x0007bca2) cell_dialer_keypad_pane

0x6f7f,	// (0x0007bcb9) cell_dialer_command_1_pane_ParamLimits

0x6f7f,	// (0x0007bcb9) cell_dialer_command_1_pane

0x6f95,	// (0x0007bccf) cell_dialer_command_2_pane_ParamLimits

0x6f95,	// (0x0007bccf) cell_dialer_command_2_pane

0xc546,	// (0x00081280) bg_button_pane_cp02_ParamLimits

0xc546,	// (0x00081280) bg_button_pane_cp02

0x6fa4,	// (0x0007bcde) cell_dialer_keypad_pane_g1_ParamLimits

0x6fa4,	// (0x0007bcde) cell_dialer_keypad_pane_g1

0xc546,	// (0x00081280) bg_button_pane_cp03_ParamLimits

0xc546,	// (0x00081280) bg_button_pane_cp03

0x6fb9,	// (0x0007bcf3) cell_dialer_command_1_pane_g1_ParamLimits

0x6fb9,	// (0x0007bcf3) cell_dialer_command_1_pane_g1

0xc552,	// (0x0008128c) bg_button_pane_cp04

0x6fcd,	// (0x0007bd07) cell_dialer_command_2_pane_g1

0x4703,	// (0x0007943d) bg_button_pane_cp06

0xc55a,	// (0x00081294) dialer_ne_clear_pane_g1

0x45a7,	// (0x000792e1) navi_pane_g2

0x45d5,	// (0x0007930f) navi_pane_g3

0x0002,

0xf404,	// (0x0008413e) navi_pane_g

0x4662,	// (0x0007939c) navi_pane_mv_g2

0x4689,	// (0x000793c3) navi_pane_mv_g5

0x4691,	// (0x000793cb) navi_pane_mv_t1

0x21dd,	// (0x00076f17) main_clock2_pane

0x7007,	// (0x0007bd41) main_clock2_list_pane_ParamLimits

0x7007,	// (0x0007bd41) main_clock2_list_pane

0x7041,	// (0x0007bd7b) main_clock2_pane_t1_ParamLimits

0x7041,	// (0x0007bd7b) main_clock2_pane_t1

0x707f,	// (0x0007bdb9) main_clock2_pane_t2_ParamLimits

0x707f,	// (0x0007bdb9) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x0008451d) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x0008451d) main_clock2_pane_t

0x711c,	// (0x0007be56) popup_clock_analogue_window_cp03_ParamLimits

0x711c,	// (0x0007be56) popup_clock_analogue_window_cp03

0x7143,	// (0x0007be7d) popup_clock_digital_window_cp02_ParamLimits

0x7143,	// (0x0007be7d) popup_clock_digital_window_cp02

0x71b8,	// (0x0007bef2) main_clock2_list_single_pane_ParamLimits

0x71b8,	// (0x0007bef2) main_clock2_list_single_pane

0x4703,	// (0x0007943d) list_highlight_pane_cp05

0xc562,	// (0x0008129c) main_clock2_list_single_pane_t1

0x2de4,	// (0x00077b1e) popup_toolbar_window_cp04_ParamLimits

0x65e3,	// (0x0007b31d) camera2_autofocus_pane_g2_ParamLimits

0x65e3,	// (0x0007b31d) camera2_autofocus_pane_g2

0x65ef,	// (0x0007b329) camera2_autofocus_pane_g3_ParamLimits

0x65ef,	// (0x0007b329) camera2_autofocus_pane_g3

0x65fb,	// (0x0007b335) camera2_autofocus_pane_g4_ParamLimits

0x65fb,	// (0x0007b335) camera2_autofocus_pane_g4

0x6607,	// (0x0007b341) camera2_autofocus_pane_g5_ParamLimits

0x6607,	// (0x0007b341) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x00084466) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x00084466) camera2_autofocus_pane_g

0x67f4,	// (0x0007b52e) camera2_autofocus_pane_cp_g2

0x67fc,	// (0x0007b536) camera2_autofocus_pane_cp_g3

0x6804,	// (0x0007b53e) camera2_autofocus_pane_cp_g4

0x680c,	// (0x0007b546) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x000844cc) camera2_autofocus_pane_cp_g

0x6ebf,	// (0x0007bbf9) popup_dialer_spcha_window

0xa86c,	// (0x0007f5a6) bg_popup_sub_pane_cp07

0xc570,	// (0x000812aa) list_spcha_pane

0xc578,	// (0x000812b2) list_single_spcha_pane_ParamLimits

0xc578,	// (0x000812b2) list_single_spcha_pane

0xa86c,	// (0x0007f5a6) list_highlight_pane_cp06

0xc589,	// (0x000812c3) list_single_spcha_pane_t1

0xb6e1,	// (0x0008041b) popup_call2_audio_out_window_g4_ParamLimits

0xb6e1,	// (0x0008041b) popup_call2_audio_out_window_g4

0xa86c,	// (0x0007f5a6) main_imed2_pane

0xbcc8,	// (0x00080a02) popup_imed_adjust2_window

0x59be,	// (0x0007a6f8) popup_imed_trans_window_ParamLimits

0x59be,	// (0x0007a6f8) popup_imed_trans_window

0xbf77,	// (0x00080cb1) popup_blid_sat_info2_window_t1

0xbf85,	// (0x00080cbf) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x000843fb) popup_blid_sat_info2_window_t

0x7260,	// (0x0007bf9a) aid_size_cell_colour_35

0x7280,	// (0x0007bfba) aid_size_cell_colour_112

0x72a0,	// (0x0007bfda) aid_size_cell_effect

0xbca0,	// (0x000809da) bg_tb_trans_pane_cp02

0x3dfd,	// (0x00078b37) heading_imed_pane

0x72c0,	// (0x0007bffa) listscroll_imed_pane

0xc597,	// (0x000812d1) heading_imed_pane_g1

0xc59f,	// (0x000812d9) heading_imed_pane_t1

0xc5ad,	// (0x000812e7) grid_imed_colour_35_pane_ParamLimits

0xc5ad,	// (0x000812e7) grid_imed_colour_35_pane

0x72cc,	// (0x0007c006) grid_imed_effect_pane

0xc5c8,	// (0x00081302) list_imed_aspect_pane

0x72e1,	// (0x0007c01b) scroll_pane_cp027_ParamLimits

0x72e1,	// (0x0007c01b) scroll_pane_cp027

0x72f2,	// (0x0007c02c) cell_imed_effect_pane_ParamLimits

0x72f2,	// (0x0007c02c) cell_imed_effect_pane

0xc5d0,	// (0x0008130a) cell_imed_colour_pane_ParamLimits

0xc5d0,	// (0x0008130a) cell_imed_colour_pane

0xc612,	// (0x0008134c) cell_imed_colour_pane_g1_ParamLimits

0xc612,	// (0x0008134c) cell_imed_colour_pane_g1

0xc623,	// (0x0008135d) hgihlgiht_grid_pane_cp016_ParamLimits

0xc623,	// (0x0008135d) hgihlgiht_grid_pane_cp016

0x7319,	// (0x0007c053) cell_imed_effect_pane_g1

0x7321,	// (0x0007c05b) grid_highlight_pane_cp017

0xc634,	// (0x0008136e) list_imed_single_pane_ParamLimits

0xc634,	// (0x0008136e) list_imed_single_pane

0xa86c,	// (0x0007f5a6) list_highlight_pane_cp07

0xc64b,	// (0x00081385) list_imed_aspect_pane_comp1_t1

0xbca0,	// (0x000809da) bg_tb_trans_pane_cp05

0xc66d,	// (0x000813a7) popup_imed_adjust2_window_g1

0xc694,	// (0x000813ce) popup_imed_adjust2_window_t1

0xc6ac,	// (0x000813e6) slider_imed_adjust_pane

0xc6c0,	// (0x000813fa) slider_imed_adjust_pane_g1

0xc6d0,	// (0x0008140a) slider_imed_adjust_pane_g2

0xc6e0,	// (0x0008141a) slider_imed_adjust_pane_g3

0xc6f1,	// (0x0008142b) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x0008453a) slider_imed_adjust_pane_g

0x732a,	// (0x0007c064) aid_size_cell_clipart2

0x7336,	// (0x0007c070) grid_imed_clipart_pane

0xc702,	// (0x0008143c) scroll_pane_cp031

0x7340,	// (0x0007c07a) cell_imed_clipart_pane_ParamLimits

0x7340,	// (0x0007c07a) cell_imed_clipart_pane

0x7367,	// (0x0007c0a1) cell_imed_clipart_pane_g1

0xa86c,	// (0x0007f5a6) grid_highlight_pane_cp014

0x701c,	// (0x0007bd56) main_clock2_pane_g1_ParamLimits

0x701c,	// (0x0007bd56) main_clock2_pane_g1

0x7163,	// (0x0007be9d) aid_call2_pane_cp10

0x7175,	// (0x0007beaf) aid_call_pane_cp10

0x44a3,	// (0x000791dd) popup_clock_analogue_window_cp10_g1

0x44a3,	// (0x000791dd) popup_clock_analogue_window_cp10_g2

0x7187,	// (0x0007bec1) popup_clock_analogue_window_cp10_g3

0x7187,	// (0x0007bec1) popup_clock_analogue_window_cp10_g4

0x44a3,	// (0x000791dd) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x00084528) popup_clock_analogue_window_cp10_g

0x7199,	// (0x0007bed3) popup_clock_analogue_window_cp10_t1

0x71ca,	// (0x0007bf04) clock_digital_number_pane_cp10_ParamLimits

0x71ca,	// (0x0007bf04) clock_digital_number_pane_cp10

0x71e2,	// (0x0007bf1c) clock_digital_number_pane_cp11_ParamLimits

0x71e2,	// (0x0007bf1c) clock_digital_number_pane_cp11

0x71fa,	// (0x0007bf34) clock_digital_number_pane_cp12_ParamLimits

0x71fa,	// (0x0007bf34) clock_digital_number_pane_cp12

0x7212,	// (0x0007bf4c) clock_digital_number_pane_cp13_ParamLimits

0x7212,	// (0x0007bf4c) clock_digital_number_pane_cp13

0x722a,	// (0x0007bf64) clock_digital_separator_pane_cp10_ParamLimits

0x722a,	// (0x0007bf64) clock_digital_separator_pane_cp10

0x7242,	// (0x0007bf7c) popup_clock_digital_window_cp02_t1_ParamLimits

0x7242,	// (0x0007bf7c) popup_clock_digital_window_cp02_t1

0x1e50,	// (0x00076b8a) clock_digital_number_pane_cp10_g1

0x1e50,	// (0x00076b8a) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x00084543) clock_digital_number_pane_cp10_g

0x1e50,	// (0x00076b8a) clock_digital_separator_pane_cp10_g1

0x1e50,	// (0x00076b8a) clock_digital_separator_pane_g2_cp10

0x46d3,	// (0x0007940d) navi_pane_vded_g4

0x46dc,	// (0x00079416) navi_pane_vded_g5

0x46e5,	// (0x0007941f) navi_pane_vded_t1

0xa86c,	// (0x0007f5a6) main_vded_pane

0x7370,	// (0x0007c0aa) main_vded_pane_g1

0x737c,	// (0x0007c0b6) main_vded_pane_g2

0x7386,	// (0x0007c0c0) main_vded_pane_g3

0x0002,

0xf80e,	// (0x00084548) main_vded_pane_g

0x7390,	// (0x0007c0ca) main_vded_pane_t1

0x739e,	// (0x0007c0d8) main_vded_pane_t2

0x0001,

0xf815,	// (0x0008454f) main_vded_pane_t

0x73ac,	// (0x0007c0e6) vded_slider_pane

0x73b6,	// (0x0007c0f0) vded_video_pane

0xc70a,	// (0x00081444) vded_video_pane_g1

0x73c0,	// (0x0007c0fa) vded_video_pane_g2

0xc13b,	// (0x00080e75) vded_video_pane_g3

0x0002,

0xf81a,	// (0x00084554) vded_video_pane_g

0xc714,	// (0x0008144e) vded_slider_pane_g1

0xbe8c,	// (0x00080bc6) vded_slider_pane_g2

0xc71d,	// (0x00081457) vded_slider_pane_g3

0xc726,	// (0x00081460) vded_slider_pane_g4

0xc72f,	// (0x00081469) vded_slider_pane_g5

0x0004,

0xf821,	// (0x0008455b) vded_slider_pane_g

0x6d9d,	// (0x0007bad7) mup3_rocker_pane_ParamLimits

0x6d9d,	// (0x0007bad7) mup3_rocker_pane

0x73c9,	// (0x0007c103) mup3_control_keys_pane_g1

0x73d1,	// (0x0007c10b) mup3_control_keys_pane_g2

0x73d9,	// (0x0007c113) mup3_control_keys_pane_g3

0x73e1,	// (0x0007c11b) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x00084566) mup3_control_keys_pane_g

0x1716,	// (0x00076450) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1716,	// (0x00076450) popup_toolbar2_fixed_window_cp01

0x6dd1,	// (0x0007bb0b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6dd1,	// (0x0007bb0b) popup_toolbar2_fixed_window_cp02

0xb020,	// (0x0007fd5a) popup_call2_audio_second_window_t4_ParamLimits

0xb020,	// (0x0007fd5a) popup_call2_audio_second_window_t4

0xb54e,	// (0x00080288) popup_call2_audio_first_window_t6_ParamLimits

0xb54e,	// (0x00080288) popup_call2_audio_first_window_t6

0xb7e4,	// (0x0008051e) popup_call2_audio_out_window_t6_ParamLimits

0xb7e4,	// (0x0008051e) popup_call2_audio_out_window_t6

0xa86c,	// (0x0007f5a6) main_vitu_pane

0x73f1,	// (0x0007c12b) aid_size_cell_itu_ParamLimits

0x73f1,	// (0x0007c12b) aid_size_cell_itu

0xa8e4,	// (0x0007f61e) bg_popup_window_pane_cp08_ParamLimits

0xa8e4,	// (0x0007f61e) bg_popup_window_pane_cp08

0x7407,	// (0x0007c141) field_vitu_entry_pane_ParamLimits

0x7407,	// (0x0007c141) field_vitu_entry_pane

0x741e,	// (0x0007c158) grid_vitu_function_pane_ParamLimits

0x741e,	// (0x0007c158) grid_vitu_function_pane

0x7439,	// (0x0007c173) grid_vitu_itu_pane_ParamLimits

0x7439,	// (0x0007c173) grid_vitu_itu_pane

0x7457,	// (0x0007c191) cell_vitu_itu_pane_ParamLimits

0x7457,	// (0x0007c191) cell_vitu_itu_pane

0x747b,	// (0x0007c1b5) cell_vitu_function_pane_ParamLimits

0x747b,	// (0x0007c1b5) cell_vitu_function_pane

0xa8e4,	// (0x0007f61e) bg_popup_sub_pane_cp08_ParamLimits

0xa8e4,	// (0x0007f61e) bg_popup_sub_pane_cp08

0x7496,	// (0x0007c1d0) field_vitu_entry_pane_t1_ParamLimits

0x7496,	// (0x0007c1d0) field_vitu_entry_pane_t1

0xc750,	// (0x0008148a) field_vitu_entry_pane_t2_ParamLimits

0xc750,	// (0x0008148a) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x00084574) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x00084574) field_vitu_entry_pane_t

0xc76d,	// (0x000814a7) bg_button_pane_cp05_ParamLimits

0xc76d,	// (0x000814a7) bg_button_pane_cp05

0x74b6,	// (0x0007c1f0) cell_vitu_itu_pane_g1

0x74ce,	// (0x0007c208) cell_vitu_itu_pane_t1_ParamLimits

0x74ce,	// (0x0007c208) cell_vitu_itu_pane_t1

0x74e0,	// (0x0007c21a) cell_vitu_itu_pane_t2_ParamLimits

0x74e0,	// (0x0007c21a) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x00084579) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x00084579) cell_vitu_itu_pane_t

0xc77b,	// (0x000814b5) bg_button_pane_cp07

0x7515,	// (0x0007c24f) cell_vitu_function_pane_g1

0xa8f2,	// (0x0007f62c) main_calc_pane_g1

0x1556,	// (0x00076290) aid_visual_content_pane

0xa86c,	// (0x0007f5a6) main_vradio_pane

0x751e,	// (0x0007c258) main_vradio_pane_g1_ParamLimits

0x751e,	// (0x0007c258) main_vradio_pane_g1

0xc785,	// (0x000814bf) main_vradio_pane_g2_ParamLimits

0xc785,	// (0x000814bf) main_vradio_pane_g2

0x0001,

0xf846,	// (0x00084580) main_vradio_pane_g_ParamLimits

0xf846,	// (0x00084580) main_vradio_pane_g

0x7537,	// (0x0007c271) main_vradio_pane_t1_ParamLimits

0x7537,	// (0x0007c271) main_vradio_pane_t1

0x754c,	// (0x0007c286) main_vradio_pane_t2_ParamLimits

0x754c,	// (0x0007c286) main_vradio_pane_t2

0xc792,	// (0x000814cc) main_vradio_pane_t3_ParamLimits

0xc792,	// (0x000814cc) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x00084585) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x00084585) main_vradio_pane_t

0x7561,	// (0x0007c29b) vradio_rocker_control_pane_ParamLimits

0x7561,	// (0x0007c29b) vradio_rocker_control_pane

0x7573,	// (0x0007c2ad) vradio_station_info_pane_ParamLimits

0x7573,	// (0x0007c2ad) vradio_station_info_pane

0xc7a6,	// (0x000814e0) vradio_frequency_info_pane_ParamLimits

0xc7a6,	// (0x000814e0) vradio_frequency_info_pane

0xc13b,	// (0x00080e75) vradio_station_info_pane_g1

0xc7b5,	// (0x000814ef) vradio_station_info_pane_t1_ParamLimits

0xc7b5,	// (0x000814ef) vradio_station_info_pane_t1

0xc7d7,	// (0x00081511) vradio_station_info_pane_t2_ParamLimits

0xc7d7,	// (0x00081511) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x0008458c) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x0008458c) vradio_station_info_pane_t

0xc7e9,	// (0x00081523) vradio_tuning_pane

0xc7f1,	// (0x0008152b) vradio_rocker_control_pane_g1

0xc7f9,	// (0x00081533) vradio_rocker_control_pane_g2

0xc801,	// (0x0008153b) vradio_rocker_control_pane_g3

0xc809,	// (0x00081543) vradio_rocker_control_pane_g4

0xc811,	// (0x0008154b) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x00084591) vradio_rocker_control_pane_g

0x7585,	// (0x0007c2bf) vradio_frequency_info_pane_g1

0xc819,	// (0x00081553) vradio_frequency_info_pane_t1_ParamLimits

0xc819,	// (0x00081553) vradio_frequency_info_pane_t1

0x758f,	// (0x0007c2c9) vradio_tuning_pane_g1

0x759a,	// (0x0007c2d4) vradio_tuning_pane_t1

0xa8a2,	// (0x0007f5dc) area_side_right_pane_ParamLimits

0xa8a2,	// (0x0007f5dc) area_side_right_pane

0xbc67,	// (0x000809a1) status_small_pane_g1

0xbc6f,	// (0x000809a9) status_small_pane_g2

0xbc78,	// (0x000809b2) status_small_pane_g3

0xbc81,	// (0x000809bb) status_small_pane_g4

0x0003,

0xf617,	// (0x00084351) status_small_pane_g

0xbc8a,	// (0x000809c4) status_small_pane_t1

0xa86c,	// (0x0007f5a6) main_video3_pane

0xc82d,	// (0x00081567) cams_zoom_vslider_pane

0xc835,	// (0x0008156f) image3_wide_pane_ParamLimits

0xc835,	// (0x0008156f) image3_wide_pane

0xc84f,	// (0x00081589) image3_wide_small_pane

0xc85b,	// (0x00081595) main_video3_pane_g1_ParamLimits

0xc85b,	// (0x00081595) main_video3_pane_g1

0xc877,	// (0x000815b1) main_video3_pane_g2_ParamLimits

0xc877,	// (0x000815b1) main_video3_pane_g2

0x0001,

0xf862,	// (0x0008459c) main_video3_pane_g_ParamLimits

0xf862,	// (0x0008459c) main_video3_pane_g

0xc893,	// (0x000815cd) main_video3_pane_t1_ParamLimits

0xc893,	// (0x000815cd) main_video3_pane_t1

0xc8be,	// (0x000815f8) main_video3_pane_t2_ParamLimits

0xc8be,	// (0x000815f8) main_video3_pane_t2

0xc8e9,	// (0x00081623) main_video3_pane_t3_ParamLimits

0xc8e9,	// (0x00081623) main_video3_pane_t3

0x0002,

0xf867,	// (0x000845a1) main_video3_pane_t_ParamLimits

0xf867,	// (0x000845a1) main_video3_pane_t

0xc916,	// (0x00081650) cams_zoom_vslider_pane_g1

0xc91f,	// (0x00081659) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x000845a8) cams_zoom_vslider_pane_g

0xc927,	// (0x00081661) small_slider_vertical_pane

0xc13b,	// (0x00080e75) small_slider_vertical_pane_g1

0xc13b,	// (0x00080e75) small_slider_vertical_pane_g2

0xc92f,	// (0x00081669) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x000845ad) small_slider_vertical_pane_g

0xa86c,	// (0x0007f5a6) main_hwr_training_pane

0xc938,	// (0x00081672) hwr_training_instruct_pane_ParamLimits

0xc938,	// (0x00081672) hwr_training_instruct_pane

0x75a9,	// (0x0007c2e3) hwr_training_navi_pane_ParamLimits

0x75a9,	// (0x0007c2e3) hwr_training_navi_pane

0x75c8,	// (0x0007c302) hwr_training_write_pane_ParamLimits

0x75c8,	// (0x0007c302) hwr_training_write_pane

0xa86c,	// (0x0007f5a6) bg_frame_shadow_pane

0xc96f,	// (0x000816a9) hwr_training_write_pane_g1

0xc977,	// (0x000816b1) hwr_training_write_pane_g2

0xc97f,	// (0x000816b9) hwr_training_write_pane_g3

0xc987,	// (0x000816c1) hwr_training_write_pane_g4

0xc98f,	// (0x000816c9) hwr_training_write_pane_g5

0xc997,	// (0x000816d1) hwr_training_write_pane_g6

0xc99f,	// (0x000816d9) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x000845b4) hwr_training_write_pane_g

0xec7b,	// (0x000839b5) hwr_training_navi_pane_g1_ParamLimits

0xec7b,	// (0x000839b5) hwr_training_navi_pane_g1

0xec8d,	// (0x000839c7) hwr_training_navi_pane_g2_ParamLimits

0xec8d,	// (0x000839c7) hwr_training_navi_pane_g2

0xec9f,	// (0x000839d9) hwr_training_navi_pane_g3_ParamLimits

0xec9f,	// (0x000839d9) hwr_training_navi_pane_g3

0xecaf,	// (0x000839e9) hwr_training_navi_pane_g4_ParamLimits

0xecaf,	// (0x000839e9) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x000845c3) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x000845c3) hwr_training_navi_pane_g

0xecbc,	// (0x000839f6) hwr_training_navi_pane_t1

0x7612,	// (0x0007c34c) list_single_hwr_training_instruct_pane_ParamLimits

0x7612,	// (0x0007c34c) list_single_hwr_training_instruct_pane

0xc9a7,	// (0x000816e1) list_single_hwr_training_instruct_pane_t1

0xc07b,	// (0x00080db5) bg_frame_shadow_pane_g1

0xc9b6,	// (0x000816f0) bg_frame_shadow_pane_g2

0xc9be,	// (0x000816f8) bg_frame_shadow_pane_g3

0xc9c6,	// (0x00081700) bg_frame_shadow_pane_g4

0xc9ce,	// (0x00081708) bg_frame_shadow_pane_g5

0xc9d6,	// (0x00081710) bg_frame_shadow_pane_g6

0xc9de,	// (0x00081718) bg_frame_shadow_pane_g7

0x2424,	// (0x0007715e) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x000845ce) bg_frame_shadow_pane_g

0xa86c,	// (0x0007f5a6) main_video_tele_dialer_pane

0x762f,	// (0x0007c369) aid_size_cell_video_keypad_ParamLimits

0x762f,	// (0x0007c369) aid_size_cell_video_keypad

0x7649,	// (0x0007c383) grid_video_dialer_keypad_pane_ParamLimits

0x7649,	// (0x0007c383) grid_video_dialer_keypad_pane

0x7695,	// (0x0007c3cf) video_down_pane_cp_ParamLimits

0x7695,	// (0x0007c3cf) video_down_pane_cp

0x76c5,	// (0x0007c3ff) cell_video_dialer_keypad_pane_ParamLimits

0x76c5,	// (0x0007c3ff) cell_video_dialer_keypad_pane

0xc9e6,	// (0x00081720) bg_button_pane_cp08_ParamLimits

0xc9e6,	// (0x00081720) bg_button_pane_cp08

0x76e7,	// (0x0007c421) cell_video_dialer_keypad_pane_g1_ParamLimits

0x76e7,	// (0x0007c421) cell_video_dialer_keypad_pane_g1

0x6d87,	// (0x0007bac1) mup3_rocker2_pane_ParamLimits

0x6d87,	// (0x0007bac1) mup3_rocker2_pane

0xc13b,	// (0x00080e75) mup3_rocker2_pane_g1

0x58a7,	// (0x0007a5e1) main_dialer2_pane

0xa86c,	// (0x0007f5a6) main_mp4_pane

0xecd2,	// (0x00083a0c) main_mp4_pane_g1_ParamLimits

0xecd2,	// (0x00083a0c) main_mp4_pane_g1

0xecd2,	// (0x00083a0c) main_mp4_pane_g2_ParamLimits

0xecd2,	// (0x00083a0c) main_mp4_pane_g2

0x7722,	// (0x0007c45c) main_mp4_pane_g3_ParamLimits

0x7722,	// (0x0007c45c) main_mp4_pane_g3

0xece0,	// (0x00083a1a) main_mp4_pane_g4_ParamLimits

0xece0,	// (0x00083a1a) main_mp4_pane_g4

0xed08,	// (0x00083a42) main_mp4_pane_g5_ParamLimits

0xed08,	// (0x00083a42) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x000845ee) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x000845ee) main_mp4_pane_g

0xed58,	// (0x00083a92) main_mp4_pane_t1_ParamLimits

0xed58,	// (0x00083a92) main_mp4_pane_t1

0xedb4,	// (0x00083aee) main_mp4_pane_t2_ParamLimits

0xedb4,	// (0x00083aee) main_mp4_pane_t2

0xc9f2,	// (0x0008172c) main_mp4_pane_t3_ParamLimits

0xc9f2,	// (0x0008172c) main_mp4_pane_t3

0xee06,	// (0x00083b40) main_mp4_pane_t4_ParamLimits

0xee06,	// (0x00083b40) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x000845fb) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x000845fb) main_mp4_pane_t

0xee4a,	// (0x00083b84) mp4_progress_pane_ParamLimits

0xee4a,	// (0x00083b84) mp4_progress_pane

0xee94,	// (0x00083bce) mp4_rocker_pane_ParamLimits

0xee94,	// (0x00083bce) mp4_rocker_pane

0xca1a,	// (0x00081754) mp4_progress_pane_t1

0xca33,	// (0x0008176d) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x00084604) mp4_progress_pane_t

0xca4c,	// (0x00081786) mup_progress_pane_cp04

0xc13b,	// (0x00080e75) mp4_rocker_pane_g1

0x775e,	// (0x0007c498) aid_cell_size_keypad2_ParamLimits

0x775e,	// (0x0007c498) aid_cell_size_keypad2

0x7774,	// (0x0007c4ae) dialer2_ne_pane_ParamLimits

0x7774,	// (0x0007c4ae) dialer2_ne_pane

0x778e,	// (0x0007c4c8) grid_dialer2_keypad_pane_ParamLimits

0x778e,	// (0x0007c4c8) grid_dialer2_keypad_pane

0xbf1e,	// (0x00080c58) bg_popup_call_pane_cp07_ParamLimits

0xbf1e,	// (0x00080c58) bg_popup_call_pane_cp07

0x77ac,	// (0x0007c4e6) dialer2_ne_pane_t1_ParamLimits

0x77ac,	// (0x0007c4e6) dialer2_ne_pane_t1

0x77eb,	// (0x0007c525) cell_dialer2_keypad_pane_ParamLimits

0x77eb,	// (0x0007c525) cell_dialer2_keypad_pane

0xca6a,	// (0x000817a4) bg_button_pane_pane_cp04_ParamLimits

0xca6a,	// (0x000817a4) bg_button_pane_pane_cp04

0x780f,	// (0x0007c549) cell_dialer2_keypad_pane_g1_ParamLimits

0x780f,	// (0x0007c549) cell_dialer2_keypad_pane_g1

0x2ca6,	// (0x000779e0) aid_placing_vt_set_content_ParamLimits

0x2ca6,	// (0x000779e0) aid_placing_vt_set_content

0x2cce,	// (0x00077a08) aid_placing_vt_set_title_ParamLimits

0x2cce,	// (0x00077a08) aid_placing_vt_set_title

0xa86c,	// (0x0007f5a6) main_image3_pane

0x78d5,	// (0x0007c60f) area_side_right_pane_cp01_ParamLimits

0x78d5,	// (0x0007c60f) area_side_right_pane_cp01

0xecd2,	// (0x00083a0c) main_image3_pane_g1_ParamLimits

0xecd2,	// (0x00083a0c) main_image3_pane_g1

0x78ec,	// (0x0007c626) main_image3_pane_g2_ParamLimits

0x78ec,	// (0x0007c626) main_image3_pane_g2

0x7914,	// (0x0007c64e) main_image3_pane_g3_ParamLimits

0x7914,	// (0x0007c64e) main_image3_pane_g3

0x793e,	// (0x0007c678) main_image3_pane_g4_ParamLimits

0x793e,	// (0x0007c678) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x00084613) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x00084613) main_image3_pane_g

0x7968,	// (0x0007c6a2) main_image3_pane_t1_ParamLimits

0x7968,	// (0x0007c6a2) main_image3_pane_t1

0x79c0,	// (0x0007c6fa) main_image3_pane_t2_ParamLimits

0x79c0,	// (0x0007c6fa) main_image3_pane_t2

0x7a12,	// (0x0007c74c) main_image3_pane_t3_ParamLimits

0x7a12,	// (0x0007c74c) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x0008461c) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x0008461c) main_image3_pane_t

0xa8e4,	// (0x0007f61e) grid_sctrl_middle_pane_cp01_ParamLimits

0xa8e4,	// (0x0007f61e) grid_sctrl_middle_pane_cp01

0x7a9a,	// (0x0007c7d4) cell_sctrl_middle_pane_cp01_ParamLimits

0x7a9a,	// (0x0007c7d4) cell_sctrl_middle_pane_cp01

0x7ab7,	// (0x0007c7f1) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7ab7,	// (0x0007c7f1) cell_sctrl_middle_pane_cp01_g1

0xa86c,	// (0x0007f5a6) main_call4_pane

0x7acd,	// (0x0007c807) aid_size_button_call4_ParamLimits

0x7acd,	// (0x0007c807) aid_size_button_call4

0x7afe,	// (0x0007c838) call4_windows_pane_ParamLimits

0x7afe,	// (0x0007c838) call4_windows_pane

0x7b1e,	// (0x0007c858) grid_call4_button_pane_ParamLimits

0x7b1e,	// (0x0007c858) grid_call4_button_pane

0xca76,	// (0x000817b0) call4_windows_conf_pane

0xca8b,	// (0x000817c5) popup_call4_audio_first_window_ParamLimits

0xca8b,	// (0x000817c5) popup_call4_audio_first_window

0xcad7,	// (0x00081811) popup_call4_audio_second_window_ParamLimits

0xcad7,	// (0x00081811) popup_call4_audio_second_window

0xcaeb,	// (0x00081825) popup_call4_audio_wait_window_ParamLimits

0xcaeb,	// (0x00081825) popup_call4_audio_wait_window

0x7b4b,	// (0x0007c885) cell_call4_button_pane_ParamLimits

0x7b4b,	// (0x0007c885) cell_call4_button_pane

0x7b74,	// (0x0007c8ae) bg_button_pane_cp09_ParamLimits

0x7b74,	// (0x0007c8ae) bg_button_pane_cp09

0x7b80,	// (0x0007c8ba) cell_call4_button_pane_g1_ParamLimits

0x7b80,	// (0x0007c8ba) cell_call4_button_pane_g1

0x7ba6,	// (0x0007c8e0) cell_call4_button_pane_t1_ParamLimits

0x7ba6,	// (0x0007c8e0) cell_call4_button_pane_t1

0xcb33,	// (0x0008186d) popup_call4_audio_conf_window_ParamLimits

0xcb33,	// (0x0008186d) popup_call4_audio_conf_window

0x6de7,	// (0x0007bb21) mup3_progress_pane_t1_ParamLimits

0x6e06,	// (0x0007bb40) mup3_progress_pane_t2_ParamLimits

0xc449,	// (0x00081183) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x000844f5) mup3_progress_pane_t_ParamLimits

0xc466,	// (0x000811a0) mup_progress_pane_cp03_ParamLimits

0x73e9,	// (0x0007c123) mup3_control_keys_pane_g4_copy1

0xee78,	// (0x00083bb2) mp4_rocker2_pane_ParamLimits

0xee78,	// (0x00083bb2) mp4_rocker2_pane

0xcb47,	// (0x00081881) mp4_rocker2_pane_g1

0xcb4f,	// (0x00081889) mp4_rocker2_pane_g2

0xeee6,	// (0x00083c20) mp4_rocker2_pane_g3

0xeeee,	// (0x00083c28) mp4_rocker2_pane_g4

0xeef6,	// (0x00083c30) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x00084625) mp4_rocker2_pane_g

0xa86c,	// (0x0007f5a6) main_camera4_pane

0xa86c,	// (0x0007f5a6) main_video4_pane

0x7663,	// (0x0007c39d) main_video_tele_dialer_pane_t1_ParamLimits

0x7663,	// (0x0007c39d) main_video_tele_dialer_pane_t1

0x767c,	// (0x0007c3b6) main_video_tele_dialer_pane_t2_ParamLimits

0x767c,	// (0x0007c3b6) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x000845df) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x000845df) main_video_tele_dialer_pane_t

0x7be8,	// (0x0007c922) cam4_autofocus_pane_ParamLimits

0x7be8,	// (0x0007c922) cam4_autofocus_pane

0x7bfe,	// (0x0007c938) cam4_image_uncrop_pane_ParamLimits

0x7bfe,	// (0x0007c938) cam4_image_uncrop_pane

0x7c18,	// (0x0007c952) cam4_indicators_pane_ParamLimits

0x7c18,	// (0x0007c952) cam4_indicators_pane

0x7c43,	// (0x0007c97d) main_camera4_pane_g1_ParamLimits

0x7c43,	// (0x0007c97d) main_camera4_pane_g1

0x7c56,	// (0x0007c990) main_camera4_pane_g2_ParamLimits

0x7c56,	// (0x0007c990) main_camera4_pane_g2

0x7c69,	// (0x0007c9a3) main_camera4_pane_g3_ParamLimits

0x7c69,	// (0x0007c9a3) main_camera4_pane_g3

0x7c7c,	// (0x0007c9b6) main_camera4_pane_g4_ParamLimits

0x7c7c,	// (0x0007c9b6) main_camera4_pane_g4

0x7c8f,	// (0x0007c9c9) main_camera4_pane_g5_ParamLimits

0x7c8f,	// (0x0007c9c9) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x00084630) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x00084630) main_camera4_pane_g

0x7cb3,	// (0x0007c9ed) main_camera4_pane_t1_ParamLimits

0x7cb3,	// (0x0007c9ed) main_camera4_pane_t1

0xc3a2,	// (0x000810dc) bg_tb_trans_pane_cp06

0xef22,	// (0x00083c5c) cam4_indicators_pane_g1

0xef33,	// (0x00083c6d) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x0008464b) cam4_indicators_pane_g

0xef51,	// (0x00083c8b) cam4_indicators_pane_t1

0x7d17,	// (0x0007ca51) main_video4_pane_g1_ParamLimits

0x7d17,	// (0x0007ca51) main_video4_pane_g1

0x7d2a,	// (0x0007ca64) main_video4_pane_g2_ParamLimits

0x7d2a,	// (0x0007ca64) main_video4_pane_g2

0x7d3e,	// (0x0007ca78) main_video4_pane_g3_ParamLimits

0x7d3e,	// (0x0007ca78) main_video4_pane_g3

0x7d52,	// (0x0007ca8c) main_video4_pane_g4_ParamLimits

0x7d52,	// (0x0007ca8c) main_video4_pane_g4

0x0004,

0xf918,	// (0x00084652) main_video4_pane_g_ParamLimits

0xf918,	// (0x00084652) main_video4_pane_g

0x7d7a,	// (0x0007cab4) vid4_indicators_pane_ParamLimits

0x7d7a,	// (0x0007cab4) vid4_indicators_pane

0x7dac,	// (0x0007cae6) video4_image_uncrop_cif_pane_ParamLimits

0x7dac,	// (0x0007cae6) video4_image_uncrop_cif_pane

0x7dc6,	// (0x0007cb00) video4_image_uncrop_nhd_pane_ParamLimits

0x7dc6,	// (0x0007cb00) video4_image_uncrop_nhd_pane

0x7bfe,	// (0x0007c938) video4_image_uncrop_vga_pane_ParamLimits

0x7bfe,	// (0x0007c938) video4_image_uncrop_vga_pane

0xcb69,	// (0x000818a3) bg_tb_trans_pane_cp07

0x7dda,	// (0x0007cb14) vid4_indicators_pane_g1

0x7de7,	// (0x0007cb21) vid4_indicators_pane_g2

0x7df4,	// (0x0007cb2e) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x0008465d) vid4_indicators_pane_g

0x7e19,	// (0x0007cb53) vid4_indicators_pane_t1

0x7e2b,	// (0x0007cb65) cam4_autofocus_pane_g1

0x7e33,	// (0x0007cb6d) cam4_autofocus_pane_g2

0x7e3b,	// (0x0007cb75) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x00084668) cam4_autofocus_pane_g

0x7e43,	// (0x0007cb7d) cam4_autofocus_pane_g3_copy1

0x76a9,	// (0x0007c3e3) video_down_pane_cp_t1

0x76b7,	// (0x0007c3f1) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x000845e4) video_down_pane_cp_t

0xa8e4,	// (0x0007f61e) popup_vitu2_window_ParamLimits

0xa8e4,	// (0x0007f61e) popup_vitu2_window

0x7e4b,	// (0x0007cb85) aid_size_cell2_itu2_ParamLimits

0x7e4b,	// (0x0007cb85) aid_size_cell2_itu2

0x7e71,	// (0x0007cbab) aid_size_cell_itu2_ParamLimits

0x7e71,	// (0x0007cbab) aid_size_cell_itu2

0x7ecd,	// (0x0007cc07) bg_popup_window_pane_cp09_ParamLimits

0x7ecd,	// (0x0007cc07) bg_popup_window_pane_cp09

0x7edb,	// (0x0007cc15) field_vitu2_entry_pane_ParamLimits

0x7edb,	// (0x0007cc15) field_vitu2_entry_pane

0x7f01,	// (0x0007cc3b) grid_vitu2_function_pane_ParamLimits

0x7f01,	// (0x0007cc3b) grid_vitu2_function_pane

0x7f52,	// (0x0007cc8c) grid_vitu2_itu_pane_ParamLimits

0x7f52,	// (0x0007cc8c) grid_vitu2_itu_pane

0x7fe3,	// (0x0007cd1d) cell_vitu2_itu_pane_ParamLimits

0x7fe3,	// (0x0007cd1d) cell_vitu2_itu_pane

0x8007,	// (0x0007cd41) cell_vitu2_function_pane_ParamLimits

0x8007,	// (0x0007cd41) cell_vitu2_function_pane

0xcb77,	// (0x000818b1) bg_popup_call_pane_cp08_ParamLimits

0xcb77,	// (0x000818b1) bg_popup_call_pane_cp08

0xcb90,	// (0x000818ca) field_vitu2_entry_pane_g1

0xcb9c,	// (0x000818d6) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x0008466f) field_vitu2_entry_pane_g

0x0c8b,	// (0x000759c5) field_vitu2_entry_pane_t1_ParamLimits

0x0c8b,	// (0x000759c5) field_vitu2_entry_pane_t1

0xcbb6,	// (0x000818f0) field_vitu2_entry_pane_t2_ParamLimits

0xcbb6,	// (0x000818f0) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x00084676) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x00084676) field_vitu2_entry_pane_t

0x8046,	// (0x0007cd80) bg_button_pane_cp010_ParamLimits

0x8046,	// (0x0007cd80) bg_button_pane_cp010

0x8054,	// (0x0007cd8e) cell_vitu2_itu_pane_g1

0x8072,	// (0x0007cdac) cell_vitu2_itu_pane_t1_ParamLimits

0x8072,	// (0x0007cdac) cell_vitu2_itu_pane_t1

0x0cbc,	// (0x000759f6) cell_vitu2_itu_pane_t2_ParamLimits

0x0cbc,	// (0x000759f6) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x00084680) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x00084680) cell_vitu2_itu_pane_t

0xa8e4,	// (0x0007f61e) bg_button_pane_cp011

0x80d8,	// (0x0007ce12) cell_vitu2_function_pane_g1

0xa86c,	// (0x0007f5a6) main_myfav_hc_pane

0x7a62,	// (0x0007c79c) popup_image3_note_pane_ParamLimits

0x7a62,	// (0x0007c79c) popup_image3_note_pane

0x7a7e,	// (0x0007c7b8) popup_image3_tool_bar_pane_ParamLimits

0x7a7e,	// (0x0007c7b8) popup_image3_tool_bar_pane

0x0d40,	// (0x00075a7a) cell_vitu2_itu_pane_t3_ParamLimits

0x0d40,	// (0x00075a7a) cell_vitu2_itu_pane_t3

0xa86c,	// (0x0007f5a6) bg_popup_trans_pane

0xcbdb,	// (0x00081915) grid_image3_tool_bar_pane

0xcbe5,	// (0x0008191f) bg_popup_trans_pane_g1

0x329e,	// (0x00077fd8) bg_popup_trans_pane_g2

0xcbed,	// (0x00081927) bg_popup_trans_pane_g3

0xcbf5,	// (0x0008192f) bg_popup_trans_pane_g4

0xcbfd,	// (0x00081937) bg_popup_trans_pane_g5

0xcc05,	// (0x0008193f) bg_popup_trans_pane_g6

0xcc0d,	// (0x00081947) bg_popup_trans_pane_g7

0xcc15,	// (0x0008194f) bg_popup_trans_pane_g8

0x327e,	// (0x00077fb8) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x00084687) bg_popup_trans_pane_g

0xcc1d,	// (0x00081957) cell_image3_tool_bar_pane_ParamLimits

0xcc1d,	// (0x00081957) cell_image3_tool_bar_pane

0xc13b,	// (0x00080e75) cell_image3_tool_bar_pane_g1

0xa86c,	// (0x0007f5a6) bg_popup_trans_pane_cp1

0xcc31,	// (0x0008196b) popup_image3_note_pane_t1

0xcc3f,	// (0x00081979) popup_image3_note_pane_t2

0xcc4d,	// (0x00081987) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x0008469a) popup_image3_note_pane_t

0xcc5b,	// (0x00081995) popup_image3_note_pane_t3_copy1

0x80ec,	// (0x0007ce26) bg_myfav_hc_instruction_pane_ParamLimits

0x80ec,	// (0x0007ce26) bg_myfav_hc_instruction_pane

0x8102,	// (0x0007ce3c) cell_myfav_contact_pane_ParamLimits

0x8102,	// (0x0007ce3c) cell_myfav_contact_pane

0x811e,	// (0x0007ce58) cell_myfav_contact_pane_cp1_ParamLimits

0x811e,	// (0x0007ce58) cell_myfav_contact_pane_cp1

0x8136,	// (0x0007ce70) cell_myfav_contact_pane_cp2_ParamLimits

0x8136,	// (0x0007ce70) cell_myfav_contact_pane_cp2

0x814e,	// (0x0007ce88) cell_myfav_contact_pane_cp3_ParamLimits

0x814e,	// (0x0007ce88) cell_myfav_contact_pane_cp3

0x8165,	// (0x0007ce9f) cell_myfav_contact_pane_cp4_ParamLimits

0x8165,	// (0x0007ce9f) cell_myfav_contact_pane_cp4

0x817d,	// (0x0007ceb7) cell_myfav_contact_pane_cp5_ParamLimits

0x817d,	// (0x0007ceb7) cell_myfav_contact_pane_cp5

0x8191,	// (0x0007cecb) cell_myfav_contact_pane_cp6_ParamLimits

0x8191,	// (0x0007cecb) cell_myfav_contact_pane_cp6

0x81a7,	// (0x0007cee1) cell_myfav_contact_pane_cp7_ParamLimits

0x81a7,	// (0x0007cee1) cell_myfav_contact_pane_cp7

0xcc69,	// (0x000819a3) listscroll_gen_pane_cp05

0x81c1,	// (0x0007cefb) main_myfav_hc_pane_g1_ParamLimits

0x81c1,	// (0x0007cefb) main_myfav_hc_pane_g1

0x81db,	// (0x0007cf15) main_myfav_hc_pane_g2_ParamLimits

0x81db,	// (0x0007cf15) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x000846a1) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x000846a1) main_myfav_hc_pane_g

0x820d,	// (0x0007cf47) main_myfav_hc_pane_t1_ParamLimits

0x820d,	// (0x0007cf47) main_myfav_hc_pane_t1

0xcc72,	// (0x000819ac) main_myfav_hc_pane_t2_ParamLimits

0xcc72,	// (0x000819ac) main_myfav_hc_pane_t2

0xcc84,	// (0x000819be) main_myfav_hc_pane_t3_ParamLimits

0xcc84,	// (0x000819be) main_myfav_hc_pane_t3

0x8224,	// (0x0007cf5e) main_myfav_hc_pane_t4_ParamLimits

0x8224,	// (0x0007cf5e) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x000846a8) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x000846a8) main_myfav_hc_pane_t

0xc13b,	// (0x00080e75) bg_myfav_hc_instruction_pane_g1

0xcc96,	// (0x000819d0) cell_myfav_contact_pane_g1_ParamLimits

0xcc96,	// (0x000819d0) cell_myfav_contact_pane_g1

0xcc96,	// (0x000819d0) cell_myfav_contact_pane_g2_ParamLimits

0xcc96,	// (0x000819d0) cell_myfav_contact_pane_g2

0xcca2,	// (0x000819dc) cell_myfav_contact_pane_g3_ParamLimits

0xcca2,	// (0x000819dc) cell_myfav_contact_pane_g3

0xc433,	// (0x0008116d) cell_myfav_contact_pane_g4_ParamLimits

0xc433,	// (0x0008116d) cell_myfav_contact_pane_g4

0xccaf,	// (0x000819e9) cell_myfav_contact_pane_g5_ParamLimits

0xccaf,	// (0x000819e9) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x000846b3) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x000846b3) cell_myfav_contact_pane_g

0x81f5,	// (0x0007cf2f) main_myfav_hc_pane_g3_ParamLimits

0x81f5,	// (0x0007cf2f) main_myfav_hc_pane_g3

0x1678,	// (0x000763b2) popup_adpt_find_window

0x824c,	// (0x0007cf86) afind_page_pane_ParamLimits

0x824c,	// (0x0007cf86) afind_page_pane

0x8261,	// (0x0007cf9b) aid_size_cell_afind_ParamLimits

0x8261,	// (0x0007cf9b) aid_size_cell_afind

0x827f,	// (0x0007cfb9) bg_popup_sub_pane_cp09_ParamLimits

0x827f,	// (0x0007cfb9) bg_popup_sub_pane_cp09

0x828c,	// (0x0007cfc6) find_pane_cp01_ParamLimits

0x828c,	// (0x0007cfc6) find_pane_cp01

0xccbb,	// (0x000819f5) grid_afind_control_pane_ParamLimits

0xccbb,	// (0x000819f5) grid_afind_control_pane

0x8299,	// (0x0007cfd3) grid_afind_pane_ParamLimits

0x8299,	// (0x0007cfd3) grid_afind_pane

0x82bb,	// (0x0007cff5) cell_afind_pane_ParamLimits

0x82bb,	// (0x0007cff5) cell_afind_pane

0xc13b,	// (0x00080e75) afind_page_pane_g1

0x831c,	// (0x0007d056) afind_page_pane_g2

0x8325,	// (0x0007d05f) afind_page_pane_g3

0x0002,

0xf984,	// (0x000846be) afind_page_pane_g

0x832e,	// (0x0007d068) afind_page_pane_t1

0xcccf,	// (0x00081a09) cell_afind_grid_control_pane_ParamLimits

0xcccf,	// (0x00081a09) cell_afind_grid_control_pane

0xca6a,	// (0x000817a4) bg_button_pane_cp69_ParamLimits

0xca6a,	// (0x000817a4) bg_button_pane_cp69

0x834e,	// (0x0007d088) cell_afind_pane_g1_ParamLimits

0x834e,	// (0x0007d088) cell_afind_pane_g1

0x835b,	// (0x0007d095) cell_afind_pane_t1_ParamLimits

0x835b,	// (0x0007d095) cell_afind_pane_t1

0x2c39,	// (0x00077973) bg_button_pane_cp72

0xccde,	// (0x00081a18) cell_afind_grid_control_pane_g1

0x536a,	// (0x0007a0a4) aid_image_placing_area_ParamLimits

0x536a,	// (0x0007a0a4) aid_image_placing_area

0xc738,	// (0x00081472) field_vitu_entry_pane_g1_ParamLimits

0xc738,	// (0x00081472) field_vitu_entry_pane_g1

0xc744,	// (0x0008147e) field_vitu_entry_pane_g2_ParamLimits

0xc744,	// (0x0008147e) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x0008456f) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x0008456f) field_vitu_entry_pane_g

0x74b6,	// (0x0007c1f0) cell_vitu_itu_pane_g1_ParamLimits

0x74f8,	// (0x0007c232) cell_vitu_itu_pane_t3_ParamLimits

0x74f8,	// (0x0007c232) cell_vitu_itu_pane_t3

0xca1a,	// (0x00081754) mp4_progress_pane_t1_ParamLimits

0xca33,	// (0x0008176d) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x00084604) mp4_progress_pane_t_ParamLimits

0xca4c,	// (0x00081786) mup_progress_pane_cp04_ParamLimits

0x8238,	// (0x0007cf72) main_myfav_hc_pane_t5_ParamLimits

0x8238,	// (0x0007cf72) main_myfav_hc_pane_t5

0xa892,	// (0x0007f5cc) aid_zoom_text_primary

0x1678,	// (0x000763b2) popup_adpt_find_window_ParamLimits

0xa8e4,	// (0x0007f61e) main_cam_set_pane

0x7c2f,	// (0x0007c969) cam4_zoom_pane_ParamLimits

0x7c2f,	// (0x0007c969) cam4_zoom_pane

0x836d,	// (0x0007d0a7) main_cam_set_pane_g1_ParamLimits

0x836d,	// (0x0007d0a7) main_cam_set_pane_g1

0x837b,	// (0x0007d0b5) main_cam_set_pane_g2_ParamLimits

0x837b,	// (0x0007d0b5) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x000846c5) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x000846c5) main_cam_set_pane_g

0x839c,	// (0x0007d0d6) main_cam_set_pane_t1_ParamLimits

0x839c,	// (0x0007d0d6) main_cam_set_pane_t1

0x83b7,	// (0x0007d0f1) main_cset_listscroll_pane_ParamLimits

0x83b7,	// (0x0007d0f1) main_cset_listscroll_pane

0x83d7,	// (0x0007d111) main_cset_slider_pane_ParamLimits

0x83d7,	// (0x0007d111) main_cset_slider_pane

0xccef,	// (0x00081a29) main_cset_list_pane_ParamLimits

0xccef,	// (0x00081a29) main_cset_list_pane

0xccff,	// (0x00081a39) scroll_pane_cp028

0x83fd,	// (0x0007d137) aid_area_touch_slider

0x8419,	// (0x0007d153) cset_slider_pane

0x8443,	// (0x0007d17d) main_cset_slider_pane_g1

0x8458,	// (0x0007d192) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x000846ca) main_cset_slider_pane_g

0xcd38,	// (0x00081a72) main_cset_slider_pane_t1

0x8514,	// (0x0007d24e) main_cset_slider_pane_t2

0x852e,	// (0x0007d268) main_cset_slider_pane_t3

0x8548,	// (0x0007d282) main_cset_slider_pane_t4

0x8562,	// (0x0007d29c) main_cset_slider_pane_t5

0x857e,	// (0x0007d2b8) main_cset_slider_pane_t6

0x8593,	// (0x0007d2cd) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x000846ef) main_cset_slider_pane_t

0x8697,	// (0x0007d3d1) cset_list_set_pane_ParamLimits

0x8697,	// (0x0007d3d1) cset_list_set_pane

0x86ab,	// (0x0007d3e5) aid_position_infowindow_above

0x86b3,	// (0x0007d3ed) aid_position_infowindow_below

0x86bb,	// (0x0007d3f5) cset_list_set_pane_g1_ParamLimits

0x86bb,	// (0x0007d3f5) cset_list_set_pane_g1

0x0d98,	// (0x00075ad2) cset_list_set_pane_g3_ParamLimits

0x0d98,	// (0x00075ad2) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x0008470e) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x0008470e) cset_list_set_pane_g

0x0da7,	// (0x00075ae1) cset_list_set_pane_t1_ParamLimits

0x0da7,	// (0x00075ae1) cset_list_set_pane_t1

0xa8e4,	// (0x0007f61e) list_highlight_pane_cp021_ParamLimits

0xa8e4,	// (0x0007f61e) list_highlight_pane_cp021

0x4c51,	// (0x0007998b) cset_slider_pane_g1

0x4c63,	// (0x0007999d) cset_slider_pane_g2

0x4c5a,	// (0x00079994) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x00084713) cset_slider_pane_g

0xef7b,	// (0x00083cb5) aid_area_touch_cam4_zoom

0xef83,	// (0x00083cbd) cam4_zoom_cont_pane

0xef8b,	// (0x00083cc5) cam4_zoom_pane_g1

0xef93,	// (0x00083ccd) cam4_zoom_pane_g2

0x86c7,	// (0x0007d401) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x0008471a) cam4_zoom_pane_g

0xcdd8,	// (0x00081b12) cam4_zoom_cont_pane_g1

0xcde1,	// (0x00081b1b) cam4_zoom_cont_pane_g2

0xcdea,	// (0x00081b24) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x00084721) cam4_zoom_cont_pane_g

0x7aeb,	// (0x0007c825) call4_image_pane_ParamLimits

0x7aeb,	// (0x0007c825) call4_image_pane

0xca76,	// (0x000817b0) call4_windows_conf_pane_ParamLimits

0xcab5,	// (0x000817ef) popup_call4_audio_in_window_ParamLimits

0xcab5,	// (0x000817ef) popup_call4_audio_in_window

0xa86c,	// (0x0007f5a6) bg_popup_call2_act_pane_cp02

0xcb2b,	// (0x00081865) call4_list_conf_pane

0xc13b,	// (0x00080e75) call4_image_pane_g1

0xc13b,	// (0x00080e75) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x00084435) call4_image_pane_g

0xcdf3,	// (0x00081b2d) list_single_graphic_popup_conf4_pane_ParamLimits

0xcdf3,	// (0x00081b2d) list_single_graphic_popup_conf4_pane

0xa86c,	// (0x0007f5a6) list_highlight_pane_cp022

0xce06,	// (0x00081b40) list_single_graphic_popup_conf4_pane_g1

0x41b9,	// (0x00078ef3) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x00084728) list_single_graphic_popup_conf4_pane_g

0xce0e,	// (0x00081b48) list_single_graphic_popup_conf4_pane_t1

0x2e04,	// (0x00077b3e) popup_vtel_slider_window_ParamLimits

0x2e04,	// (0x00077b3e) popup_vtel_slider_window

0xca58,	// (0x00081792) dialer2_ne_pane_t2_ParamLimits

0xca58,	// (0x00081792) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x00084609) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x00084609) dialer2_ne_pane_t

0xbf1e,	// (0x00080c58) bg_popup_sub_pane_cp010_ParamLimits

0xbf1e,	// (0x00080c58) bg_popup_sub_pane_cp010

0x86cf,	// (0x0007d409) popup_vtel_slider_window_g1_ParamLimits

0x86cf,	// (0x0007d409) popup_vtel_slider_window_g1

0x86e2,	// (0x0007d41c) popup_vtel_slider_window_g2_ParamLimits

0x86e2,	// (0x0007d41c) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x0008472d) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x0008472d) popup_vtel_slider_window_g

0x8738,	// (0x0007d472) vtel_slider_pane_ParamLimits

0x8738,	// (0x0007d472) vtel_slider_pane

0x875a,	// (0x0007d494) vtel_slider_pane_g1_ParamLimits

0x875a,	// (0x0007d494) vtel_slider_pane_g1

0x876e,	// (0x0007d4a8) vtel_slider_pane_g2_ParamLimits

0x876e,	// (0x0007d4a8) vtel_slider_pane_g2

0x8786,	// (0x0007d4c0) vtel_slider_pane_g3_ParamLimits

0x8786,	// (0x0007d4c0) vtel_slider_pane_g3

0x875a,	// (0x0007d494) vtel_slider_pane_g4_ParamLimits

0x875a,	// (0x0007d494) vtel_slider_pane_g4

0x879c,	// (0x0007d4d6) vtel_slider_pane_g5_ParamLimits

0x879c,	// (0x0007d4d6) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x00084736) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x00084736) vtel_slider_pane_g

0xa86c,	// (0x0007f5a6) main_gallery2_pane

0x7e9d,	// (0x0007cbd7) aid_size_row_itut2_dropdow_list_ParamLimits

0x7e9d,	// (0x0007cbd7) aid_size_row_itut2_dropdow_list

0x7f29,	// (0x0007cc63) grid_vitu2_function_top_pane_ParamLimits

0x7f29,	// (0x0007cc63) grid_vitu2_function_top_pane

0x7f8e,	// (0x0007ccc8) popup_vitu2_dropdown_list_window_ParamLimits

0x7f8e,	// (0x0007ccc8) popup_vitu2_dropdown_list_window

0x7fb7,	// (0x0007ccf1) popup_vitu2_match_list_window

0x87b2,	// (0x0007d4ec) cell_vitu2_function_top_pane_ParamLimits

0x87b2,	// (0x0007d4ec) cell_vitu2_function_top_pane

0x87d0,	// (0x0007d50a) cell_vitu2_function_top_pane_cp01_ParamLimits

0x87d0,	// (0x0007d50a) cell_vitu2_function_top_pane_cp01

0x87ee,	// (0x0007d528) cell_vitu2_function_top_wide_pane_ParamLimits

0x87ee,	// (0x0007d528) cell_vitu2_function_top_wide_pane

0xa8e4,	// (0x0007f61e) bg_button_pane_cp012

0x880c,	// (0x0007d546) cell_vitu2_function_top_pane_g1

0xef9b,	// (0x00083cd5) bg_button_pane_cp013_ParamLimits

0xef9b,	// (0x00083cd5) bg_button_pane_cp013

0x8820,	// (0x0007d55a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8820,	// (0x0007d55a) cell_vitu2_function_top_wide_pane_g1

0xa8e4,	// (0x0007f61e) bg_popup_sub_pane_cp20

0x8838,	// (0x0007d572) list_vitu2_match_list_pane

0xcbe5,	// (0x0008191f) bg_popup_sub_pane_cp20_g1

0xcbed,	// (0x00081927) bg_popup_sub_pane_cp20_g2

0x329e,	// (0x00077fd8) bg_popup_sub_pane_cp20_g3

0xcbf5,	// (0x0008192f) bg_popup_sub_pane_cp20_g4

0x327e,	// (0x00077fb8) bg_popup_sub_pane_cp20_g5

0xce32,	// (0x00081b6c) bg_popup_sub_pane_cp20_g6

0xcc05,	// (0x0008193f) bg_popup_sub_pane_cp20_g7

0xcc0d,	// (0x00081947) bg_popup_sub_pane_cp20_g8

0xcc15,	// (0x0008194f) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x00084741) bg_popup_sub_pane_cp20_g

0xefb7,	// (0x00083cf1) list_vitu2_match_list_item_pane_ParamLimits

0xefb7,	// (0x00083cf1) list_vitu2_match_list_item_pane

0xefc9,	// (0x00083d03) list_vitu2_match_list_item_pane_t1

0xa86c,	// (0x0007f5a6) bg_popup_sub_pane_cp21

0x40be,	// (0x00078df8) grid_vitu2_dropdown_list_pane

0x8856,	// (0x0007d590) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8856,	// (0x0007d590) cell_vitu2_dropdown_list_char_pane

0x8877,	// (0x0007d5b1) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8877,	// (0x0007d5b1) cell_vitu2_dropdown_list_ctrl_pane

0xce52,	// (0x00081b8c) cell_vitu2_dropdown_list_char_pane_g1

0xce5b,	// (0x00081b95) cell_vitu2_dropdown_list_char_pane_g2

0xce64,	// (0x00081b9e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x0008475e) cell_vitu2_dropdown_list_char_pane_g

0x88a3,	// (0x0007d5dd) cell_vitu2_dropdown_list_char_pane_t1

0x88b1,	// (0x0007d5eb) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x88b1,	// (0x0007d5eb) cell_vitu2_dropdown_list_ctrl_pane_g1

0x88c1,	// (0x0007d5fb) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x88c1,	// (0x0007d5fb) cell_vitu2_dropdown_list_ctrl_pane_g2

0x88d2,	// (0x0007d60c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x88d2,	// (0x0007d60c) cell_vitu2_dropdown_list_ctrl_pane_g3

0x88e2,	// (0x0007d61c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x88e2,	// (0x0007d61c) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc3a2,	// (0x000810dc) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc3a2,	// (0x000810dc) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x00084765) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x00084765) cell_vitu2_dropdown_list_ctrl_pane_g

0x88fe,	// (0x0007d638) aid_size_cell_gallery2_ParamLimits

0x88fe,	// (0x0007d638) aid_size_cell_gallery2

0x8914,	// (0x0007d64e) grid_gallery2_pane_ParamLimits

0x8914,	// (0x0007d64e) grid_gallery2_pane

0x8928,	// (0x0007d662) scroll_pane_cp029_ParamLimits

0x8928,	// (0x0007d662) scroll_pane_cp029

0x8934,	// (0x0007d66e) cell_gallery2_pane_ParamLimits

0x8934,	// (0x0007d66e) cell_gallery2_pane

0xce6d,	// (0x00081ba7) cell_gallery2_pane_g2

0x896a,	// (0x0007d6a4) cell_gallery2_pane_g3

0xce77,	// (0x00081bb1) cell_gallery2_pane_g4

0xce7f,	// (0x00081bb9) cell_gallery2_pane_g5

0x4703,	// (0x0007943d) grid_highlight_pane_cp10

0x7fb7,	// (0x0007ccf1) popup_vitu2_match_list_window_ParamLimits

0x7fcc,	// (0x0007cd06) popup_vitu2_query_window_ParamLimits

0x7fcc,	// (0x0007cd06) popup_vitu2_query_window

0xa86c,	// (0x0007f5a6) bg_vitu2_candi_button_pane

0xce52,	// (0x00081b8c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xce5b,	// (0x00081b95) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xce64,	// (0x00081b9e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0df1,	// (0x00075b2b) bg_button_pane_cp015

0x8972,	// (0x0007d6ac) bg_button_pane_cp016

0x8985,	// (0x0007d6bf) bg_button_pane_cp017

0xbca0,	// (0x000809da) bg_popup_sub_pane_cp22

0xce87,	// (0x00081bc1) popup_vitu2_query_window_g1

0x89a9,	// (0x0007d6e3) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x00084770) popup_vitu2_query_window_g

0x0e32,	// (0x00075b6c) popup_vitu2_query_window_t1_ParamLimits

0x0e32,	// (0x00075b6c) popup_vitu2_query_window_t1

0x0e67,	// (0x00075ba1) popup_vitu2_query_window_t2_ParamLimits

0x0e67,	// (0x00075ba1) popup_vitu2_query_window_t2

0x0e79,	// (0x00075bb3) popup_vitu2_query_window_t3_ParamLimits

0x0e79,	// (0x00075bb3) popup_vitu2_query_window_t3

0x89bc,	// (0x0007d6f6) popup_vitu2_query_window_t4_ParamLimits

0x89bc,	// (0x0007d6f6) popup_vitu2_query_window_t4

0x89dd,	// (0x0007d717) popup_vitu2_query_window_t5_ParamLimits

0x89dd,	// (0x0007d717) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x00084777) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x00084777) popup_vitu2_query_window_t

0xcce7,	// (0x00081a21) main_cset_text_pane

0x83fd,	// (0x0007d137) aid_area_touch_slider_ParamLimits

0x8419,	// (0x0007d153) cset_slider_pane_ParamLimits

0x8443,	// (0x0007d17d) main_cset_slider_pane_g1_ParamLimits

0x8458,	// (0x0007d192) main_cset_slider_pane_g2_ParamLimits

0xcd08,	// (0x00081a42) main_cset_slider_pane_g3_ParamLimits

0xcd08,	// (0x00081a42) main_cset_slider_pane_g3

0x846d,	// (0x0007d1a7) main_cset_slider_pane_g4_ParamLimits

0x846d,	// (0x0007d1a7) main_cset_slider_pane_g4

0x847c,	// (0x0007d1b6) main_cset_slider_pane_g5_ParamLimits

0x847c,	// (0x0007d1b6) main_cset_slider_pane_g5

0x8488,	// (0x0007d1c2) main_cset_slider_pane_g6_ParamLimits

0x8488,	// (0x0007d1c2) main_cset_slider_pane_g6

0xf990,	// (0x000846ca) main_cset_slider_pane_g_ParamLimits

0xcd38,	// (0x00081a72) main_cset_slider_pane_t1_ParamLimits

0x8514,	// (0x0007d24e) main_cset_slider_pane_t2_ParamLimits

0x852e,	// (0x0007d268) main_cset_slider_pane_t3_ParamLimits

0x8548,	// (0x0007d282) main_cset_slider_pane_t4_ParamLimits

0x8562,	// (0x0007d29c) main_cset_slider_pane_t5_ParamLimits

0x857e,	// (0x0007d2b8) main_cset_slider_pane_t6_ParamLimits

0x8593,	// (0x0007d2cd) main_cset_slider_pane_t7_ParamLimits

0x85bd,	// (0x0007d2f7) main_cset_slider_pane_t8_ParamLimits

0x85bd,	// (0x0007d2f7) main_cset_slider_pane_t8

0x85e5,	// (0x0007d31f) main_cset_slider_pane_t9_ParamLimits

0x85e5,	// (0x0007d31f) main_cset_slider_pane_t9

0x860d,	// (0x0007d347) main_cset_slider_pane_t10_ParamLimits

0x860d,	// (0x0007d347) main_cset_slider_pane_t10

0x8635,	// (0x0007d36f) main_cset_slider_pane_t11_ParamLimits

0x8635,	// (0x0007d36f) main_cset_slider_pane_t11

0x865d,	// (0x0007d397) main_cset_slider_pane_t12_ParamLimits

0x865d,	// (0x0007d397) main_cset_slider_pane_t12

0x867a,	// (0x0007d3b4) main_cset_slider_pane_t13_ParamLimits

0x867a,	// (0x0007d3b4) main_cset_slider_pane_t13

0xf9b5,	// (0x000846ef) main_cset_slider_pane_t_ParamLimits

0xa86c,	// (0x0007f5a6) bg_popup_sub_pane_cp011

0xce93,	// (0x00081bcd) main_cset_text_pane_g1

0xce9b,	// (0x00081bd5) main_cset_text_pane_t1

0xcea9,	// (0x00081be3) main_cset_text_pane_t2

0xceb7,	// (0x00081bf1) main_cset_text_pane_t3

0xcec5,	// (0x00081bff) main_cset_text_pane_t4

0xced3,	// (0x00081c0d) main_cset_text_pane_t5

0xcee1,	// (0x00081c1b) main_cset_text_pane_t6

0xceef,	// (0x00081c29) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x00084786) main_cset_text_pane_t

0xa86c,	// (0x0007f5a6) main_cam4_burst_pane

0xa86c,	// (0x0007f5a6) main_cam5_pane

0x833c,	// (0x0007d076) bg_button_pane_cp019

0x8345,	// (0x0007d07f) bg_button_pane_cp020

0xcd14,	// (0x00081a4e) main_cset_slider_pane_g7_ParamLimits

0xcd14,	// (0x00081a4e) main_cset_slider_pane_g7

0xcd20,	// (0x00081a5a) main_cset_slider_pane_g8_ParamLimits

0xcd20,	// (0x00081a5a) main_cset_slider_pane_g8

0x849c,	// (0x0007d1d6) main_cset_slider_pane_g9_ParamLimits

0x849c,	// (0x0007d1d6) main_cset_slider_pane_g9

0x84a8,	// (0x0007d1e2) main_cset_slider_pane_g10_ParamLimits

0x84a8,	// (0x0007d1e2) main_cset_slider_pane_g10

0x84b4,	// (0x0007d1ee) main_cset_slider_pane_g11_ParamLimits

0x84b4,	// (0x0007d1ee) main_cset_slider_pane_g11

0x84c0,	// (0x0007d1fa) main_cset_slider_pane_g12_ParamLimits

0x84c0,	// (0x0007d1fa) main_cset_slider_pane_g12

0x84cc,	// (0x0007d206) main_cset_slider_pane_g13_ParamLimits

0x84cc,	// (0x0007d206) main_cset_slider_pane_g13

0x84d8,	// (0x0007d212) main_cset_slider_pane_g14_ParamLimits

0x84d8,	// (0x0007d212) main_cset_slider_pane_g14

0x84e4,	// (0x0007d21e) main_cset_slider_pane_g15_ParamLimits

0x84e4,	// (0x0007d21e) main_cset_slider_pane_g15

0xcd66,	// (0x00081aa0) main_cset_slider_pane_t14_ParamLimits

0xcd66,	// (0x00081aa0) main_cset_slider_pane_t14

0xcd9f,	// (0x00081ad9) main_cset_slider_pane_t15_ParamLimits

0xcd9f,	// (0x00081ad9) main_cset_slider_pane_t15

0x89fe,	// (0x0007d738) aid_cam4_burst_size_cell_ParamLimits

0x89fe,	// (0x0007d738) aid_cam4_burst_size_cell

0x8a1e,	// (0x0007d758) grid_cam4_burst_pane_ParamLimits

0x8a1e,	// (0x0007d758) grid_cam4_burst_pane

0x8a56,	// (0x0007d790) linegrid_cam4_burst_pane_ParamLimits

0x8a56,	// (0x0007d790) linegrid_cam4_burst_pane

0xcefd,	// (0x00081c37) scroll_pane_cp30_ParamLimits

0xcefd,	// (0x00081c37) scroll_pane_cp30

0x8a7c,	// (0x0007d7b6) cell_cam4_burst_pane_ParamLimits

0x8a7c,	// (0x0007d7b6) cell_cam4_burst_pane

0xcf09,	// (0x00081c43) linegrid_cam4_burst_pane_g1_ParamLimits

0xcf09,	// (0x00081c43) linegrid_cam4_burst_pane_g1

0x8ac9,	// (0x0007d803) linegrid_cam4_burst_pane_g2_ParamLimits

0x8ac9,	// (0x0007d803) linegrid_cam4_burst_pane_g2

0xcf16,	// (0x00081c50) linegrid_cam4_burst_pane_g3_ParamLimits

0xcf16,	// (0x00081c50) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x00084795) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x00084795) linegrid_cam4_burst_pane_g

0x8ada,	// (0x0007d814) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8ada,	// (0x0007d814) linegrid_cam4_burst_pane_g3_copy1

0xcf23,	// (0x00081c5d) linegrid_cam4_burst_pane_g4_ParamLimits

0xcf23,	// (0x00081c5d) linegrid_cam4_burst_pane_g4

0x8af4,	// (0x0007d82e) linegrid_cam4_burst_pane_g5_ParamLimits

0x8af4,	// (0x0007d82e) linegrid_cam4_burst_pane_g5

0x8b05,	// (0x0007d83f) linegrid_cam4_burst_pane_g6_ParamLimits

0x8b05,	// (0x0007d83f) linegrid_cam4_burst_pane_g6

0xcf30,	// (0x00081c6a) linegrid_cam4_burst_pane_g7_ParamLimits

0xcf30,	// (0x00081c6a) linegrid_cam4_burst_pane_g7

0x8b1c,	// (0x0007d856) cell_cam4_burst_pane_g1

0xcf49,	// (0x00081c83) main_cam5_pane_t1_ParamLimits

0xcf49,	// (0x00081c83) main_cam5_pane_t1

0xcf5b,	// (0x00081c95) main_cam5_pane_t2_ParamLimits

0xcf5b,	// (0x00081c95) main_cam5_pane_t2

0xcf6d,	// (0x00081ca7) main_cam5_pane_t3_ParamLimits

0xcf6d,	// (0x00081ca7) main_cam5_pane_t3

0xcf7f,	// (0x00081cb9) main_cam5_pane_t4_ParamLimits

0xcf7f,	// (0x00081cb9) main_cam5_pane_t4

0xcf95,	// (0x00081ccf) main_cam5_pane_t5_ParamLimits

0xcf95,	// (0x00081ccf) main_cam5_pane_t5

0xcfa7,	// (0x00081ce1) main_cam5_pane_t6_ParamLimits

0xcfa7,	// (0x00081ce1) main_cam5_pane_t6

0xcfbb,	// (0x00081cf5) main_cam5_pane_t7_ParamLimits

0xcfbb,	// (0x00081cf5) main_cam5_pane_t7

0xcfcd,	// (0x00081d07) main_cam5_pane_t8_ParamLimits

0xcfcd,	// (0x00081d07) main_cam5_pane_t8

0xcfe9,	// (0x00081d23) main_cam5_pane_t9_ParamLimits

0xcfe9,	// (0x00081d23) main_cam5_pane_t9

0xcffb,	// (0x00081d35) main_cam5_pane_t10_ParamLimits

0xcffb,	// (0x00081d35) main_cam5_pane_t10

0xd00d,	// (0x00081d47) main_cam5_pane_t11_ParamLimits

0xd00d,	// (0x00081d47) main_cam5_pane_t11

0xd01f,	// (0x00081d59) main_cam5_pane_t12_ParamLimits

0xd01f,	// (0x00081d59) main_cam5_pane_t12

0xd034,	// (0x00081d6e) main_cam5_pane_t13_ParamLimits

0xd034,	// (0x00081d6e) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x000847a1) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x000847a1) main_cam5_pane_t

0x16fa,	// (0x00076434) popup_scut_keymap_window_ParamLimits

0x16fa,	// (0x00076434) popup_scut_keymap_window

0x8b31,	// (0x0007d86b) aid_size_cell_brow_shortcut

0x4703,	// (0x0007943d) bg_popup_window_pane_cp010

0x8b3d,	// (0x0007d877) grid_scut_pane

0x8b49,	// (0x0007d883) cell_scut_pane_ParamLimits

0x8b49,	// (0x0007d883) cell_scut_pane

0x8b60,	// (0x0007d89a) cell_scut_pane_g1

0xd051,	// (0x00081d8b) cell_scut_pane_t1

0xd060,	// (0x00081d9a) cell_scut_pane_t2

0x8b69,	// (0x0007d8a3) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x000847bc) cell_scut_pane_t

0x69a2,	// (0x0007b6dc) main_mup3_pane_g8_ParamLimits

0x69a2,	// (0x0007b6dc) main_mup3_pane_g8

0x7eb5,	// (0x0007cbef) area_vitu2_query_pane_ParamLimits

0x7eb5,	// (0x0007cbef) area_vitu2_query_pane

0x0e05,	// (0x00075b3f) input_focus_pane_cp08

0xd06f,	// (0x00081da9) area_vitu2_query_pane_g1

0x0ef7,	// (0x00075c31) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x000847c3) area_vitu2_query_pane_g

0x8b77,	// (0x0007d8b1) area_vitu2_query_pane_t1_ParamLimits

0x8b77,	// (0x0007d8b1) area_vitu2_query_pane_t1

0x8b8b,	// (0x0007d8c5) area_vitu2_query_pane_t2_ParamLimits

0x8b8b,	// (0x0007d8c5) area_vitu2_query_pane_t2

0x0f08,	// (0x00075c42) area_vitu2_query_pane_t3_ParamLimits

0x0f08,	// (0x00075c42) area_vitu2_query_pane_t3

0xd07b,	// (0x00081db5) area_vitu2_query_pane_t4_ParamLimits

0xd07b,	// (0x00081db5) area_vitu2_query_pane_t4

0xd0a3,	// (0x00081ddd) area_vitu2_query_pane_t5_ParamLimits

0xd0a3,	// (0x00081ddd) area_vitu2_query_pane_t5

0xd0cb,	// (0x00081e05) area_vitu2_query_pane_t6_ParamLimits

0xd0cb,	// (0x00081e05) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x000847c8) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x000847c8) area_vitu2_query_pane_t

0x8b9f,	// (0x0007d8d9) bg_button_pane_cp018

0x8bad,	// (0x0007d8e7) bg_button_pane_cp021

0x0f30,	// (0x00075c6a) bg_button_pane_cp022

0x0f41,	// (0x00075c7b) input_focus_pane_cp09

0x4514,	// (0x0007924e) aid_size_touch_mv_arrow_left

0x453d,	// (0x00079277) aid_size_touch_mv_arrow_right

0x84fc,	// (0x0007d236) main_cset_slider_pane_g16_ParamLimits

0x84fc,	// (0x0007d236) main_cset_slider_pane_g16

0x8508,	// (0x0007d242) main_cset_slider_pane_g17_ParamLimits

0x8508,	// (0x0007d242) main_cset_slider_pane_g17

0x8b1c,	// (0x0007d856) cell_cam4_burst_pane_g1_ParamLimits

0xa86c,	// (0x0007f5a6) compa_mode_pane

0x86f2,	// (0x0007d42c) popup_vtel_slider_window_g3_ParamLimits

0x86f2,	// (0x0007d42c) popup_vtel_slider_window_g3

0x8709,	// (0x0007d443) popup_vtel_slider_window_g4_ParamLimits

0x8709,	// (0x0007d443) popup_vtel_slider_window_g4

0x8720,	// (0x0007d45a) popup_vtel_slider_window_t1_ParamLimits

0x8720,	// (0x0007d45a) popup_vtel_slider_window_t1

0xa86c,	// (0x0007f5a6) main_cl_pane

0xbcc8,	// (0x00080a02) popup_imed_adjust2_window_ParamLimits

0xbca0,	// (0x000809da) bg_tb_trans_pane_cp05_ParamLimits

0xc66d,	// (0x000813a7) popup_imed_adjust2_window_g1_ParamLimits

0xc67c,	// (0x000813b6) popup_imed_adjust2_window_g2_ParamLimits

0xc67c,	// (0x000813b6) popup_imed_adjust2_window_g2

0xc688,	// (0x000813c2) popup_imed_adjust2_window_g3_ParamLimits

0xc688,	// (0x000813c2) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x00084533) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x00084533) popup_imed_adjust2_window_g

0xc694,	// (0x000813ce) popup_imed_adjust2_window_t1_ParamLimits

0xc6ac,	// (0x000813e6) slider_imed_adjust_pane_ParamLimits

0xc6c0,	// (0x000813fa) slider_imed_adjust_pane_g1_ParamLimits

0xc6d0,	// (0x0008140a) slider_imed_adjust_pane_g2_ParamLimits

0xc6e0,	// (0x0008141a) slider_imed_adjust_pane_g3_ParamLimits

0xc6f1,	// (0x0008142b) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x0008453a) slider_imed_adjust_pane_g_ParamLimits

0x7bd0,	// (0x0007c90a) aid_touch_area_cam4_ParamLimits

0x7bd0,	// (0x0007c90a) aid_touch_area_cam4

0xeefe,	// (0x00083c38) battery_pane_cp01

0x7ca0,	// (0x0007c9da) main_camera4_pane_g6_ParamLimits

0x7ca0,	// (0x0007c9da) main_camera4_pane_g6

0x7cca,	// (0x0007ca04) main_camera4_pane_t2_ParamLimits

0x7cca,	// (0x0007ca04) main_camera4_pane_t2

0x0001,

0xf903,	// (0x0008463d) main_camera4_pane_t_ParamLimits

0xf903,	// (0x0008463d) main_camera4_pane_t

0x7cff,	// (0x0007ca39) aid_touch_area_vid4_ParamLimits

0x7cff,	// (0x0007ca39) aid_touch_area_vid4

0x7d66,	// (0x0007caa0) main_video4_pane_g5_ParamLimits

0x7d66,	// (0x0007caa0) main_video4_pane_g5

0x7d91,	// (0x0007cacb) vid4_progress_pane_ParamLimits

0x7d91,	// (0x0007cacb) vid4_progress_pane

0xcd2c,	// (0x00081a66) main_cset_slider_pane_g18_ParamLimits

0xcd2c,	// (0x00081a66) main_cset_slider_pane_g18

0xcf3d,	// (0x00081c77) cell_cam4_burst_pane_g2_ParamLimits

0xcf3d,	// (0x00081c77) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x0008479c) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x0008479c) cell_cam4_burst_pane_g

0x21dd,	// (0x00076f17) bg_cl_pane_ParamLimits

0x21dd,	// (0x00076f17) bg_cl_pane

0x8bb9,	// (0x0007d8f3) cl_header_pane_ParamLimits

0x8bb9,	// (0x0007d8f3) cl_header_pane

0x8bcd,	// (0x0007d907) cl_listscroll_pane_ParamLimits

0x8bcd,	// (0x0007d907) cl_listscroll_pane

0xd117,	// (0x00081e51) bg_cl_pane_g1

0xd11f,	// (0x00081e59) bg_cl_pane_g2

0xd127,	// (0x00081e61) bg_cl_pane_g3

0xd12f,	// (0x00081e69) bg_cl_pane_g4

0xd137,	// (0x00081e71) bg_cl_pane_g5

0xd13f,	// (0x00081e79) bg_cl_pane_g6

0xd147,	// (0x00081e81) bg_cl_pane_g7

0xd14f,	// (0x00081e89) bg_cl_pane_g8

0xd157,	// (0x00081e91) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x000847d7) bg_cl_pane_g

0x8bdd,	// (0x0007d917) aid_height_cl_leading_ParamLimits

0x8bdd,	// (0x0007d917) aid_height_cl_leading

0x8be9,	// (0x0007d923) aid_height_cl_text_ParamLimits

0x8be9,	// (0x0007d923) aid_height_cl_text

0xa8e4,	// (0x0007f61e) bg_cl_header_pane_ParamLimits

0xa8e4,	// (0x0007f61e) bg_cl_header_pane

0x8c08,	// (0x0007d942) cl_header_pane_g1_ParamLimits

0x8c08,	// (0x0007d942) cl_header_pane_g1

0x8c1e,	// (0x0007d958) cl_header_pane_t1_ParamLimits

0x8c1e,	// (0x0007d958) cl_header_pane_t1

0xd15f,	// (0x00081e99) cl_list_pane

0xccff,	// (0x00081a39) hc_scroll_pane_cp01

0x327e,	// (0x00077fb8) bg_cl_header_pane_g1

0xcbe5,	// (0x0008191f) bg_cl_header_pane_g2

0x329e,	// (0x00077fd8) bg_cl_header_pane_g3

0xcbf5,	// (0x0008192f) bg_cl_header_pane_g4

0xcbed,	// (0x00081927) bg_cl_header_pane_g5

0xce32,	// (0x00081b6c) bg_cl_header_pane_g6

0xcc0d,	// (0x00081947) bg_cl_header_pane_g7

0xcc15,	// (0x0008194f) bg_cl_header_pane_g8

0xcc05,	// (0x0008193f) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x000847ea) bg_cl_header_pane_g

0x8c37,	// (0x0007d971) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8c37,	// (0x0007d971) hc_cl_list_double_graphic_heading_pane

0x8c4b,	// (0x0007d985) hc_cl_list_single_graphic_pane_ParamLimits

0x8c4b,	// (0x0007d985) hc_cl_list_single_graphic_pane

0x8c65,	// (0x0007d99f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8c65,	// (0x0007d99f) hc_cl_list_single_graphic_pane_g1

0x8c71,	// (0x0007d9ab) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8c71,	// (0x0007d9ab) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x000847fd) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x000847fd) hc_cl_list_single_graphic_pane_g

0x8c85,	// (0x0007d9bf) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8c85,	// (0x0007d9bf) hc_cl_list_single_graphic_pane_t1

0x8c65,	// (0x0007d99f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8c65,	// (0x0007d99f) hc_cl_list_double_graphic_heading_pane_g1

0x8c9a,	// (0x0007d9d4) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8c9a,	// (0x0007d9d4) hc_cl_list_double_graphic_heading_pane_g2

0x8cae,	// (0x0007d9e8) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8cae,	// (0x0007d9e8) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x00084802) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x00084802) hc_cl_list_double_graphic_heading_pane_g

0x8cc2,	// (0x0007d9fc) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8cc2,	// (0x0007d9fc) hc_cl_list_double_graphic_heading_pane_t1

0x8cd7,	// (0x0007da11) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8cd7,	// (0x0007da11) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x00084809) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x00084809) hc_cl_list_double_graphic_heading_pane_t

0xefdf,	// (0x00083d19) vid4_progress_pane_g1

0xefef,	// (0x00083d29) vid4_progress_pane_g2

0xefff,	// (0x00083d39) vid4_progress_pane_g3

0xef33,	// (0x00083c6d) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x0008480e) vid4_progress_pane_g

0xf00b,	// (0x00083d45) vid4_progress_pane_t1

0xf020,	// (0x00083d5a) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x00084819) vid4_progress_pane_t

0xf04b,	// (0x00083d85) wait_bar_pane_cp07

0xbf2c,	// (0x00080c66) blid_firmament_pane_ParamLimits

0xbf6f,	// (0x00080ca9) popup_blid_sat_info2_window_g1

0xbf93,	// (0x00080ccd) popup_blid_sat_info2_window_t3

0xbfa1,	// (0x00080cdb) popup_blid_sat_info2_window_t4

0xbfaf,	// (0x00080ce9) popup_blid_sat_info2_window_t5

0xbfbd,	// (0x00080cf7) popup_blid_sat_info2_window_t6

0xbfcd,	// (0x00080d07) popup_blid_sat_info2_window_t7

0xbfdb,	// (0x00080d15) popup_blid_sat_info2_window_t8

0xbfe9,	// (0x00080d23) popup_blid_sat_info2_window_t9

0xbff7,	// (0x00080d31) popup_blid_sat_info2_window_t10

0xc0bb,	// (0x00080df5) aid_firma_cardinal_ParamLimits

0xc0cf,	// (0x00080e09) blid_firmament_pane_t1_ParamLimits

0xc0e6,	// (0x00080e20) blid_firmament_pane_t2_ParamLimits

0xc0fd,	// (0x00080e37) blid_firmament_pane_t3_ParamLimits

0xc114,	// (0x00080e4e) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x0008442c) blid_firmament_pane_t_ParamLimits

0xc12b,	// (0x00080e65) blid_sat_info_pane_ParamLimits

0xa8e4,	// (0x0007f61e) main_cam_set_pane_ParamLimits

0x7260,	// (0x0007bf9a) aid_size_cell_colour_35_ParamLimits

0x7280,	// (0x0007bfba) aid_size_cell_colour_112_ParamLimits

0x72a0,	// (0x0007bfda) aid_size_cell_effect_ParamLimits

0xbca0,	// (0x000809da) bg_tb_trans_pane_cp02_ParamLimits

0x3dfd,	// (0x00078b37) heading_imed_pane_ParamLimits

0x72c0,	// (0x0007bffa) listscroll_imed_pane_ParamLimits

0xb2ca,	// (0x00080004) popup_call2_audio_first_window_g5_ParamLimits

0xb2ca,	// (0x00080004) popup_call2_audio_first_window_g5

0x7877,	// (0x0007c5b1) aid_size_touch_image3_arrow_left_ParamLimits

0x7877,	// (0x0007c5b1) aid_size_touch_image3_arrow_left

0x78a3,	// (0x0007c5dd) aid_size_touch_image3_arrow_right_ParamLimits

0x78a3,	// (0x0007c5dd) aid_size_touch_image3_arrow_right

0xf036,	// (0x00083d70) vid4_progress_pane_t3

0x75e3,	// (0x0007c31d) main_hwr_training_symbol_option_pane_ParamLimits

0x75e3,	// (0x0007c31d) main_hwr_training_symbol_option_pane

0xc95a,	// (0x00081694) popup_hwr_training_preview_window_ParamLimits

0xc95a,	// (0x00081694) popup_hwr_training_preview_window

0x7603,	// (0x0007c33d) hwr_training_navi_pane_g5_ParamLimits

0x7603,	// (0x0007c33d) hwr_training_navi_pane_g5

0xcbd3,	// (0x0008190d) popup_char_count_window

0xa8e4,	// (0x0007f61e) bg_popup_sub_pane_cp20_ParamLimits

0x8838,	// (0x0007d572) list_vitu2_match_list_pane_ParamLimits

0x8847,	// (0x0007d581) vitu2_page_scroll_pane_ParamLimits

0x8847,	// (0x0007d581) vitu2_page_scroll_pane

0xd1b1,	// (0x00081eeb) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd1b1,	// (0x00081eeb) list_single_hwr_training_symbol_option_pane

0xd1c4,	// (0x00081efe) list_single_hwr_training_symbol_option_pane_g1

0xd1cc,	// (0x00081f06) list_single_hwr_training_symbol_option_pane_t1

0xd1da,	// (0x00081f14) bg_button_pane_cp023

0xd1e3,	// (0x00081f1d) bg_button_pane_cp024

0x8cec,	// (0x0007da26) vitu2_page_scroll_pane_g1

0x8cf4,	// (0x0007da2e) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x00084820) vitu2_page_scroll_pane_g

0x8cfc,	// (0x0007da36) vitu2_page_scroll_pane_t1

0xbe8c,	// (0x00080bc6) popup_char_count_window_g1

0xd216,	// (0x00081f50) popup_char_count_window_g2

0xd21f,	// (0x00081f59) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x00084825) popup_char_count_window_g

0xd228,	// (0x00081f62) popup_char_count_window_t1

0xa86c,	// (0x0007f5a6) main_vded2_pane

0xc659,	// (0x00081393) aid_size_cell_imed_line

0xc663,	// (0x0008139d) grid_imed_line_width_pane

0x7e01,	// (0x0007cb3b) vid4_indicators_pane_g4

0xd236,	// (0x00081f70) cell_imed_line_width_pane_ParamLimits

0xd236,	// (0x00081f70) cell_imed_line_width_pane

0xd24a,	// (0x00081f84) cell_imed_line_width_pane_g1

0xd253,	// (0x00081f8d) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x0008482c) cell_imed_line_width_pane_g

0x8d0b,	// (0x0007da45) main_vded2_pane_g1_ParamLimits

0x8d0b,	// (0x0007da45) main_vded2_pane_g1

0x8d23,	// (0x0007da5d) main_vded2_pane_g2_ParamLimits

0x8d23,	// (0x0007da5d) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x00084831) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x00084831) main_vded2_pane_g

0x8d35,	// (0x0007da6f) vded2_slider_pane_ParamLimits

0x8d35,	// (0x0007da6f) vded2_slider_pane

0x8d45,	// (0x0007da7f) aid_size_touch_vded2_end

0x8d4f,	// (0x0007da89) aid_size_touch_vded2_playhead

0xd25b,	// (0x00081f95) aid_size_touch_vded2_start

0xd263,	// (0x00081f9d) vded2_slider_bg_pane

0xd26c,	// (0x00081fa6) vded2_slider_pane_g1

0xd275,	// (0x00081faf) vded2_slider_pane_g2

0x8d59,	// (0x0007da93) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x00084836) vded2_slider_pane_g

0xd27d,	// (0x00081fb7) vded2_slider_bg_pane_g1

0xd286,	// (0x00081fc0) vded2_slider_bg_pane_g2

0xd28f,	// (0x00081fc9) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x0008483d) vded2_slider_bg_pane_g

0x4d7c,	// (0x00079ab6) aid_postcard_touch_down_pane_ParamLimits

0x4d7c,	// (0x00079ab6) aid_postcard_touch_down_pane

0x4d92,	// (0x00079acc) aid_postcard_touch_up_pane_ParamLimits

0x4d92,	// (0x00079acc) aid_postcard_touch_up_pane

0xa86c,	// (0x0007f5a6) main_blid2_pane

0xbcae,	// (0x000809e8) popup_blid2_search_window

0xa86c,	// (0x0007f5a6) blid2_gps_pane

0xa86c,	// (0x0007f5a6) blid2_navig_pane

0xa86c,	// (0x0007f5a6) blid2_search_pane

0xa86c,	// (0x0007f5a6) blid2_tripm_pane

0x8d64,	// (0x0007da9e) blid2_search_pane_g1_ParamLimits

0x8d64,	// (0x0007da9e) blid2_search_pane_g1

0x8d7c,	// (0x0007dab6) blid2_search_pane_t1_ParamLimits

0x8d7c,	// (0x0007dab6) blid2_search_pane_t1

0x8d8e,	// (0x0007dac8) aid_size_cell_blid2_gps_ParamLimits

0x8d8e,	// (0x0007dac8) aid_size_cell_blid2_gps

0x8da6,	// (0x0007dae0) blid2_gps_pane_g1_ParamLimits

0x8da6,	// (0x0007dae0) blid2_gps_pane_g1

0x8dba,	// (0x0007daf4) grid_blid2_satellite_pane_ParamLimits

0x8dba,	// (0x0007daf4) grid_blid2_satellite_pane

0x8dd4,	// (0x0007db0e) blid2_navig_pane_g1_ParamLimits

0x8dd4,	// (0x0007db0e) blid2_navig_pane_g1

0x8de0,	// (0x0007db1a) blid2_navig_pane_t1_ParamLimits

0x8de0,	// (0x0007db1a) blid2_navig_pane_t1

0x8dfb,	// (0x0007db35) blid2_navig_pane_t2_ParamLimits

0x8dfb,	// (0x0007db35) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x00084844) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x00084844) blid2_navig_pane_t

0x8e16,	// (0x0007db50) blid2_navig_ring_pane_ParamLimits

0x8e16,	// (0x0007db50) blid2_navig_ring_pane

0x8e2f,	// (0x0007db69) blid2_speed_pane_ParamLimits

0x8e2f,	// (0x0007db69) blid2_speed_pane

0x8e3b,	// (0x0007db75) blid2_tripm_pane_g1_ParamLimits

0x8e3b,	// (0x0007db75) blid2_tripm_pane_g1

0x8e56,	// (0x0007db90) blid2_tripm_pane_g2_ParamLimits

0x8e56,	// (0x0007db90) blid2_tripm_pane_g2

0x8e6a,	// (0x0007dba4) blid2_tripm_pane_g3_ParamLimits

0x8e6a,	// (0x0007dba4) blid2_tripm_pane_g3

0x8e7e,	// (0x0007dbb8) blid2_tripm_pane_g4_ParamLimits

0x8e7e,	// (0x0007dbb8) blid2_tripm_pane_g4

0x8e92,	// (0x0007dbcc) blid2_tripm_pane_g5_ParamLimits

0x8e92,	// (0x0007dbcc) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x00084849) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x00084849) blid2_tripm_pane_g

0x8eb8,	// (0x0007dbf2) blid2_tripm_pane_t1_ParamLimits

0x8eb8,	// (0x0007dbf2) blid2_tripm_pane_t1

0x8ed3,	// (0x0007dc0d) blid2_tripm_pane_t2_ParamLimits

0x8ed3,	// (0x0007dc0d) blid2_tripm_pane_t2

0x8eee,	// (0x0007dc28) blid2_tripm_pane_t3_ParamLimits

0x8eee,	// (0x0007dc28) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x00084856) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x00084856) blid2_tripm_pane_t

0x8f35,	// (0x0007dc6f) cell_blid2_satellite_pane_ParamLimits

0x8f35,	// (0x0007dc6f) cell_blid2_satellite_pane

0x8f53,	// (0x0007dc8d) cell_blid2_satellite_pane_g1

0xd298,	// (0x00081fd2) cell_blid2_satellite_pane_t1

0xc13b,	// (0x00080e75) blid2_speed_pane_g1

0xd2a6,	// (0x00081fe0) blid2_speed_pane_t1

0xd2b4,	// (0x00081fee) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x0008485f) blid2_speed_pane_t

0xc13b,	// (0x00080e75) blid2_navig_ring_pane_g1

0x8f5c,	// (0x0007dc96) blid2_navig_ring_pane_g2

0x8f64,	// (0x0007dc9e) blid2_navig_ring_pane_g3

0x8f6c,	// (0x0007dca6) blid2_navig_ring_pane_g4

0x8f74,	// (0x0007dcae) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x00084864) blid2_navig_ring_pane_g

0xa86c,	// (0x0007f5a6) bg_popup_window_pane_cp011

0xd2c2,	// (0x00081ffc) popup_blid2_search_window_g1

0xd2ca,	// (0x00082004) popup_blid2_search_window_t1

0xd2d8,	// (0x00082012) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x0008486f) popup_blid2_search_window_t

0x3140,	// (0x00077e7a) main_browser_pane_g1

0x21dd,	// (0x00076f17) main_browser_pane_ParamLimits

0xa8e4,	// (0x0007f61e) bg_button_pane_cp011_ParamLimits

0x80d8,	// (0x0007ce12) cell_vitu2_function_pane_g1_ParamLimits

0xbca0,	// (0x000809da) bg_popup_sub_pane_cp22_ParamLimits

0x0e05,	// (0x00075b3f) input_focus_pane_cp08_ParamLimits

0x8998,	// (0x0007d6d2) popup_vitu2_query_button_pane_ParamLimits

0x8998,	// (0x0007d6d2) popup_vitu2_query_button_pane

0x0e1c,	// (0x00075b56) popup_vitu2_query_input_button_pane

0xce87,	// (0x00081bc1) popup_vitu2_query_window_g1_ParamLimits

0x89a9,	// (0x0007d6e3) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x00084770) popup_vitu2_query_window_g_ParamLimits

0xa86c,	// (0x0007f5a6) bg_button_pane_cp026

0x8f7c,	// (0x0007dcb6) popup_vitu2_query_input_button_pane_g1

0xa86c,	// (0x0007f5a6) bg_button_pane_cp025

0xd2e6,	// (0x00082020) popup_vitu2_query_button_pane_t1

0x666c,	// (0x0007b3a6) main_mp3_pane_t6

0x667a,	// (0x0007b3b4) popup_slider_window_cp01

0xef1a,	// (0x00083c54) cam4_battery_pane

0xef73,	// (0x00083cad) cam4_battery_pane_cp02

0xefd7,	// (0x00083d11) cam4_battery_pane_cp01

0xefd7,	// (0x00083d11) cam4_battery_pane_cp03

0xc13b,	// (0x00080e75) cam4_battery_pane_g1

0xd2f4,	// (0x0008202e) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x00084874) cam4_battery_pane_g

0xc005,	// (0x00080d3f) popup_blid_sat_info2_window_t11

0x4514,	// (0x0007924e) aid_size_touch_mv_arrow_left_ParamLimits

0x453d,	// (0x00079277) aid_size_touch_mv_arrow_right_ParamLimits

0x459b,	// (0x000792d5) navi_pane_g1_ParamLimits

0x45a7,	// (0x000792e1) navi_pane_g2_ParamLimits

0x45d5,	// (0x0007930f) navi_pane_g3_ParamLimits

0xf404,	// (0x0008413e) navi_pane_g_ParamLimits

0x4691,	// (0x000793cb) navi_pane_mv_t1_ParamLimits

0x72cc,	// (0x0007c006) grid_imed_effect_pane_ParamLimits

0x2cef,	// (0x00077a29) aid_placing_vt_slider_lsc

0x2cff,	// (0x00077a39) aid_placing_vt_slider_prt

0xa8e4,	// (0x0007f61e) bg_tb_trans_pane_cp01_ParamLimits

0xc2c2,	// (0x00080ffc) popup_image_details_window_g1_ParamLimits

0xc2d5,	// (0x0008100f) popup_image_details_window_g2_ParamLimits

0xc2ea,	// (0x00081024) popup_image_details_window_g3_ParamLimits

0xc2ea,	// (0x00081024) popup_image_details_window_g3

0xf737,	// (0x00084471) popup_image_details_window_g_ParamLimits

0xc2fe,	// (0x00081038) popup_image_details_window_t1_ParamLimits

0xc310,	// (0x0008104a) popup_image_details_window_t2_ParamLimits

0xc329,	// (0x00081063) popup_image_details_window_t3_ParamLimits

0xc33d,	// (0x00081077) popup_image_details_window_t4_ParamLimits

0xc358,	// (0x00081092) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x00084478) popup_image_details_window_t_ParamLimits

0x8bf5,	// (0x0007d92f) cl_header_name_pane_ParamLimits

0x8bf5,	// (0x0007d92f) cl_header_name_pane

0x8f84,	// (0x0007dcbe) cl_header_name_pane_t1_ParamLimits

0x8f84,	// (0x0007dcbe) cl_header_name_pane_t1

0x8fa5,	// (0x0007dcdf) cl_header_name_pane_t2_ParamLimits

0x8fa5,	// (0x0007dcdf) cl_header_name_pane_t2

0x8fe7,	// (0x0007dd21) cl_header_name_pane_t3_ParamLimits

0x8fe7,	// (0x0007dd21) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x00084879) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x00084879) cl_header_name_pane_t

0x4662,	// (0x0007939c) navi_pane_mv_g2_ParamLimits

0xcb90,	// (0x000818ca) field_vitu2_entry_pane_g1_ParamLimits

0xcb9c,	// (0x000818d6) field_vitu2_entry_pane_g2_ParamLimits

0xcba8,	// (0x000818e2) field_vitu2_entry_pane_g3_ParamLimits

0xcba8,	// (0x000818e2) field_vitu2_entry_pane_g3

0xf935,	// (0x0008466f) field_vitu2_entry_pane_g_ParamLimits

0x8054,	// (0x0007cd8e) cell_vitu2_itu_pane_g1_ParamLimits

0x8064,	// (0x0007cd9e) cell_vitu2_itu_pane_g2_ParamLimits

0x8064,	// (0x0007cd9e) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x0008467b) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x0008467b) cell_vitu2_itu_pane_g

0xa8e4,	// (0x0007f61e) bg_vkb2_func_pane_cp05_ParamLimits

0xa8e4,	// (0x0007f61e) bg_vkb2_func_pane_cp05

0xa8e4,	// (0x0007f61e) bg_vkb2_func_pane_cp03

0xa8e4,	// (0x0007f61e) bg_vkb2_func_pane_cp04

0xa8e4,	// (0x0007f61e) bg_vkb2_func_pane_cp10_ParamLimits

0xa8e4,	// (0x0007f61e) bg_vkb2_func_pane_cp10

0x0f30,	// (0x00075c6a) bg_vkb2_func_pane_cp08

0x8b9f,	// (0x0007d8d9) bg_vkb2_func_pane_cp06

0x8bad,	// (0x0007d8e7) bg_vkb2_func_pane_cp07

0xd1ec,	// (0x00081f26) bg_vkb2_func_pane_cp11_ParamLimits

0xd1ec,	// (0x00081f26) bg_vkb2_func_pane_cp11

0xd201,	// (0x00081f3b) bg_vkb2_func_pane_cp12_ParamLimits

0xd201,	// (0x00081f3b) bg_vkb2_func_pane_cp12

0xa86c,	// (0x0007f5a6) bg_vkb2_func_pane_cp09

0xcbe5,	// (0x0008191f) bg_vkb2_func_pane_g1

0x329e,	// (0x00077fd8) bg_vkb2_func_pane_g2

0xcbed,	// (0x00081927) bg_vkb2_func_pane_g3

0xcbf5,	// (0x0008192f) bg_vkb2_func_pane_g4

0xce32,	// (0x00081b6c) bg_vkb2_func_pane_g5

0xcc0d,	// (0x00081947) bg_vkb2_func_pane_g6

0xcc15,	// (0x0008194f) bg_vkb2_func_pane_g7

0xcc05,	// (0x0008193f) bg_vkb2_func_pane_g8

0x327e,	// (0x00077fb8) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x00084880) bg_vkb2_func_pane_g

0x8ea6,	// (0x0007dbe0) blid2_tripm_pane_g6_ParamLimits

0x8ea6,	// (0x0007dbe0) blid2_tripm_pane_g6

0xca12,	// (0x0008174c) mp4_progress_pane_g1

0x8f21,	// (0x0007dc5b) blid2_tripm_values_pane_ParamLimits

0x8f21,	// (0x0007dc5b) blid2_tripm_values_pane

0x9018,	// (0x0007dd52) blid2_tripm_values_pane_t1

0x9026,	// (0x0007dd60) blid2_tripm_values_pane_t2

0x9034,	// (0x0007dd6e) blid2_tripm_values_pane_t3

0x9042,	// (0x0007dd7c) blid2_tripm_values_pane_t4

0x9050,	// (0x0007dd8a) blid2_tripm_values_pane_t5

0x905e,	// (0x0007dd98) blid2_tripm_values_pane_t6

0x906c,	// (0x0007dda6) blid2_tripm_values_pane_t7

0x907a,	// (0x0007ddb4) blid2_tripm_values_pane_t8

0x9088,	// (0x0007ddc2) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x00084893) blid2_tripm_values_pane_t

0x2d3b,	// (0x00077a75) call_video_pane_t1_ParamLimits

0x2d59,	// (0x00077a93) call_video_pane_t2_ParamLimits

0xf28d,	// (0x00083fc7) call_video_pane_t_ParamLimits

0x0c38,	// (0x00075972) msg_header_pane_g1_ParamLimits

0x4ce6,	// (0x00079a20) msg_header_pane_g2_ParamLimits

0x4ce6,	// (0x00079a20) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x000841e1) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x000841e1) msg_header_pane_g

0x21dd,	// (0x00076f17) main_clock2_pane_ParamLimits

0x6fd5,	// (0x0007bd0f) grid_clock2_toolbar_pane_ParamLimits

0x6fd5,	// (0x0007bd0f) grid_clock2_toolbar_pane

0x6fd5,	// (0x0007bd0f) listscroll_clock2_pane_ParamLimits

0x6fd5,	// (0x0007bd0f) listscroll_clock2_pane

0x70bd,	// (0x0007bdf7) main_clock2_pane_t3_ParamLimits

0x70bd,	// (0x0007bdf7) main_clock2_pane_t3

0x70e0,	// (0x0007be1a) main_clock2_pane_t4_ParamLimits

0x70e0,	// (0x0007be1a) main_clock2_pane_t4

0xd2fe,	// (0x00082038) cell_clock2_toolbar_pane

0xd306,	// (0x00082040) cell_clock2_toolbar_pane_cp01

0xd306,	// (0x00082040) cell_clock2_toolbar_pane_cp02

0xd30e,	// (0x00082048) cell_clock2_toolbar_pane_cp03

0xd316,	// (0x00082050) list_clock2_pane

0x42b4,	// (0x00078fee) scroll_pane_cp10

0xd31e,	// (0x00082058) list_single_clock2_pane_ParamLimits

0xd31e,	// (0x00082058) list_single_clock2_pane

0x4703,	// (0x0007943d) list_highlight_pane_cp08

0xd32b,	// (0x00082065) list_single_clock2_pane_t1

0xd339,	// (0x00082073) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x000848a6) list_single_clock2_pane_t

0xa86c,	// (0x0007f5a6) bg_button_pane_cp10

0xd347,	// (0x00082081) cell_clock2_toolbar_pane_g1

0x4cfa,	// (0x00079a34) aid_main_viewer_pane_g1_ParamLimits

0x4cfa,	// (0x00079a34) aid_main_viewer_pane_g1

0x4d08,	// (0x00079a42) aid_main_viewer_pane_g2_ParamLimits

0x4d08,	// (0x00079a42) aid_main_viewer_pane_g2

0x4d16,	// (0x00079a50) aid_main_viewer_pane_g3_ParamLimits

0x4d16,	// (0x00079a50) aid_main_viewer_pane_g3

0x4d25,	// (0x00079a5f) aid_main_viewer_pane_g4_ParamLimits

0x4d25,	// (0x00079a5f) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x000841f2) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x000841f2) aid_main_viewer_pane_g

0x5893,	// (0x0007a5cd) main_calc_pane_ParamLimits

0x58a7,	// (0x0007a5e1) main_dialer2_pane_ParamLimits

0xa86c,	// (0x0007f5a6) main_cam6_pane

0xa86c,	// (0x0007f5a6) main_vid6_pane

0x6fe1,	// (0x0007bd1b) listscroll_gen_pane_cp06_ParamLimits

0x6fe1,	// (0x0007bd1b) listscroll_gen_pane_cp06

0x7103,	// (0x0007be3d) main_clock2_pane_t5_ParamLimits

0x7103,	// (0x0007be3d) main_clock2_pane_t5

0x7163,	// (0x0007be9d) aid_call2_pane_cp10_ParamLimits

0x7175,	// (0x0007beaf) aid_call_pane_cp10_ParamLimits

0x44a3,	// (0x000791dd) popup_clock_analogue_window_cp10_g1_ParamLimits

0x44a3,	// (0x000791dd) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7187,	// (0x0007bec1) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7187,	// (0x0007bec1) popup_clock_analogue_window_cp10_g4_ParamLimits

0x44a3,	// (0x000791dd) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x00084528) popup_clock_analogue_window_cp10_g_ParamLimits

0x7199,	// (0x0007bed3) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7824,	// (0x0007c55e) cell_dialer2_keypad_pane_g2_ParamLimits

0x7824,	// (0x0007c55e) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x0008460e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x0008460e) cell_dialer2_keypad_pane_g

0x7840,	// (0x0007c57a) cell_dialer2_keypad_pane_t1

0x83ef,	// (0x0007d129) main_cset_text2_pane_ParamLimits

0x83ef,	// (0x0007d129) main_cset_text2_pane

0xd06f,	// (0x00081da9) area_vitu2_query_pane_g1_ParamLimits

0x0ef7,	// (0x00075c31) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x000847c3) area_vitu2_query_pane_g_ParamLimits

0xd0f3,	// (0x00081e2d) area_vitu2_query_pane_t7_ParamLimits

0xd0f3,	// (0x00081e2d) area_vitu2_query_pane_t7

0x8b9f,	// (0x0007d8d9) bg_button_pane_cp018_ParamLimits

0x8bad,	// (0x0007d8e7) bg_button_pane_cp021_ParamLimits

0x0f30,	// (0x00075c6a) bg_button_pane_cp022_ParamLimits

0x0f30,	// (0x00075c6a) bg_vkb2_func_pane_cp08_ParamLimits

0x8b9f,	// (0x0007d8d9) bg_vkb2_func_pane_cp06_ParamLimits

0x8bad,	// (0x0007d8e7) bg_vkb2_func_pane_cp07_ParamLimits

0x0f41,	// (0x00075c7b) input_focus_pane_cp09_ParamLimits

0xf06c,	// (0x00083da6) cam6_autofocus_pane_ParamLimits

0xf06c,	// (0x00083da6) cam6_autofocus_pane

0x9096,	// (0x0007ddd0) cam6_image_uncrop_pane_ParamLimits

0x9096,	// (0x0007ddd0) cam6_image_uncrop_pane

0x90a5,	// (0x0007dddf) cam6_indi_pane_ParamLimits

0x90a5,	// (0x0007dddf) cam6_indi_pane

0x90bb,	// (0x0007ddf5) cam6_mode_pane_ParamLimits

0x90bb,	// (0x0007ddf5) cam6_mode_pane

0x90cd,	// (0x0007de07) cam6_timer_pane_ParamLimits

0x90cd,	// (0x0007de07) cam6_timer_pane

0x90d9,	// (0x0007de13) cam6_zoom_pane_ParamLimits

0x90d9,	// (0x0007de13) cam6_zoom_pane

0x90e5,	// (0x0007de1f) cam6_mode_pane_g1_ParamLimits

0x90e5,	// (0x0007de1f) cam6_mode_pane_g1

0x90f5,	// (0x0007de2f) cam6_mode_pane_g2_ParamLimits

0x90f5,	// (0x0007de2f) cam6_mode_pane_g2

0x9105,	// (0x0007de3f) cam6_mode_pane_g3_ParamLimits

0x9105,	// (0x0007de3f) cam6_mode_pane_g3

0x9115,	// (0x0007de4f) cam6_mode_pane_g4_ParamLimits

0x9115,	// (0x0007de4f) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x000848ab) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x000848ab) cam6_mode_pane_g

0xd34f,	// (0x00082089) bg_tb_trans_pane_cp08_ParamLimits

0xd34f,	// (0x00082089) bg_tb_trans_pane_cp08

0xd35d,	// (0x00082097) cam6_battery_pane_ParamLimits

0xd35d,	// (0x00082097) cam6_battery_pane

0xd373,	// (0x000820ad) cam6_indi_pane_g1_ParamLimits

0xd373,	// (0x000820ad) cam6_indi_pane_g1

0xd385,	// (0x000820bf) cam6_indi_pane_g2_ParamLimits

0xd385,	// (0x000820bf) cam6_indi_pane_g2

0xd397,	// (0x000820d1) cam6_indi_pane_g3_ParamLimits

0xd397,	// (0x000820d1) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x000848b4) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x000848b4) cam6_indi_pane_g

0xd3a9,	// (0x000820e3) cam6_indi_pane_t1_ParamLimits

0xd3a9,	// (0x000820e3) cam6_indi_pane_t1

0x9125,	// (0x0007de5f) cam6_autofocus_pane_g1

0x912d,	// (0x0007de67) cam6_autofocus_pane_g2

0x9135,	// (0x0007de6f) cam6_autofocus_pane_g3

0x913d,	// (0x0007de77) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x000848bb) cam6_autofocus_pane_g

0xd3cf,	// (0x00082109) cam6_timer_pane_g1

0xd3d7,	// (0x00082111) cam6_timer_pane_t1

0xd3e5,	// (0x0008211f) cam6_zoom_cont_pane

0xd3ed,	// (0x00082127) cam6_zoom_pane_g1

0xd3f5,	// (0x0008212f) cam6_zoom_pane_g2

0x9145,	// (0x0007de7f) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x000848c4) cam6_zoom_pane_g

0xc13b,	// (0x00080e75) cam6_battery_pane_g1

0xc13b,	// (0x00080e75) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x00084435) cam6_battery_pane_g

0xd3fd,	// (0x00082137) cam6_zoom_cont_pane_g1

0xd406,	// (0x00082140) cam6_zoom_cont_pane_g2

0xd40f,	// (0x00082149) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x000848cb) cam6_zoom_cont_pane_g

0x9162,	// (0x0007de9c) cam6_mode_pane_cp_ParamLimits

0x9162,	// (0x0007de9c) cam6_mode_pane_cp

0x90d9,	// (0x0007de13) cam6_zoom_pane_cp_ParamLimits

0x90d9,	// (0x0007de13) cam6_zoom_pane_cp

0x9174,	// (0x0007deae) vid6_image_uncrop_cif_pane_ParamLimits

0x9174,	// (0x0007deae) vid6_image_uncrop_cif_pane

0x9184,	// (0x0007debe) vid6_image_uncrop_nhd_pane_ParamLimits

0x9184,	// (0x0007debe) vid6_image_uncrop_nhd_pane

0x9096,	// (0x0007ddd0) vid6_image_uncrop_vga_pane_ParamLimits

0x9096,	// (0x0007ddd0) vid6_image_uncrop_vga_pane

0x9193,	// (0x0007decd) vid6_image_uncrop_wvga_pane_ParamLimits

0x9193,	// (0x0007decd) vid6_image_uncrop_wvga_pane

0x91a2,	// (0x0007dedc) vid6_indi_pane_ParamLimits

0x91a2,	// (0x0007dedc) vid6_indi_pane

0xd34f,	// (0x00082089) bg_tb_trans_pane_cp09_ParamLimits

0xd34f,	// (0x00082089) bg_tb_trans_pane_cp09

0xd427,	// (0x00082161) cam6_battery_pane_cp_ParamLimits

0xd427,	// (0x00082161) cam6_battery_pane_cp

0xd433,	// (0x0008216d) vid6_indi_pane_g1_ParamLimits

0xd433,	// (0x0008216d) vid6_indi_pane_g1

0xd445,	// (0x0008217f) vid6_indi_pane_g2_ParamLimits

0xd445,	// (0x0008217f) vid6_indi_pane_g2

0xd457,	// (0x00082191) vid6_indi_pane_g3_ParamLimits

0xd457,	// (0x00082191) vid6_indi_pane_g3

0xd46c,	// (0x000821a6) vid6_indi_pane_g4_ParamLimits

0xd46c,	// (0x000821a6) vid6_indi_pane_g4

0xd481,	// (0x000821bb) vid6_indi_pane_g5_ParamLimits

0xd481,	// (0x000821bb) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x000848d2) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x000848d2) vid6_indi_pane_g

0xd49b,	// (0x000821d5) vid6_indi_pane_t1_ParamLimits

0xd49b,	// (0x000821d5) vid6_indi_pane_t1

0xd4b1,	// (0x000821eb) vid6_indi_pane_t2_ParamLimits

0xd4b1,	// (0x000821eb) vid6_indi_pane_t2

0xd4d9,	// (0x00082213) vid6_indi_pane_t3_ParamLimits

0xd4d9,	// (0x00082213) vid6_indi_pane_t3

0xd501,	// (0x0008223b) vid6_indi_pane_t4_ParamLimits

0xd501,	// (0x0008223b) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x000848dd) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x000848dd) vid6_indi_pane_t

0xd525,	// (0x0008225f) wait_bar_pane_cp08

0x91ba,	// (0x0007def4) main_cset_text2_pane_t1_ParamLimits

0x91ba,	// (0x0007def4) main_cset_text2_pane_t1

0x914d,	// (0x0007de87) listscroll_gen_pane_cp06_t1_ParamLimits

0x914d,	// (0x0007de87) listscroll_gen_pane_cp06_t1

0xa86c,	// (0x0007f5a6) main_cam6_set_pane

0xc3a2,	// (0x000810dc) bg_tb_trans_pane_cp06_ParamLimits

0xef22,	// (0x00083c5c) cam4_indicators_pane_g1_ParamLimits

0xef33,	// (0x00083c6d) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x0008464b) cam4_indicators_pane_g_ParamLimits

0xef51,	// (0x00083c8b) cam4_indicators_pane_t1_ParamLimits

0xcb69,	// (0x000818a3) bg_tb_trans_pane_cp07_ParamLimits

0x7dda,	// (0x0007cb14) vid4_indicators_pane_g1_ParamLimits

0x7de7,	// (0x0007cb21) vid4_indicators_pane_g2_ParamLimits

0x7df4,	// (0x0007cb2e) vid4_indicators_pane_g3_ParamLimits

0x7e01,	// (0x0007cb3b) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x0008465d) vid4_indicators_pane_g_ParamLimits

0x7e19,	// (0x0007cb53) vid4_indicators_pane_t1_ParamLimits

0xefdf,	// (0x00083d19) vid4_progress_pane_g1_ParamLimits

0xefef,	// (0x00083d29) vid4_progress_pane_g2_ParamLimits

0xefff,	// (0x00083d39) vid4_progress_pane_g3_ParamLimits

0xef33,	// (0x00083c6d) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x0008480e) vid4_progress_pane_g_ParamLimits

0xf00b,	// (0x00083d45) vid4_progress_pane_t1_ParamLimits

0xf020,	// (0x00083d5a) vid4_progress_pane_t2_ParamLimits

0xf036,	// (0x00083d70) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x00084819) vid4_progress_pane_t_ParamLimits

0xf04b,	// (0x00083d85) wait_bar_pane_cp07_ParamLimits

0x91da,	// (0x0007df14) main_cam6_set_pane_g2_ParamLimits

0x91da,	// (0x0007df14) main_cam6_set_pane_g2

0x91fe,	// (0x0007df38) main_cset6_listscroll_pane_ParamLimits

0x91fe,	// (0x0007df38) main_cset6_listscroll_pane

0x921a,	// (0x0007df54) main_cset6_slider_pane_ParamLimits

0x921a,	// (0x0007df54) main_cset6_slider_pane

0x9230,	// (0x0007df6a) main_cset6_text2_pane_ParamLimits

0x9230,	// (0x0007df6a) main_cset6_text2_pane

0xd534,	// (0x0008226e) main_cset6_text_pane

0xd53c,	// (0x00082276) main_cset_list_pane_copy1_ParamLimits

0xd53c,	// (0x00082276) main_cset_list_pane_copy1

0xd54c,	// (0x00082286) scroll_pane_cp028_copy1

0x923e,	// (0x0007df78) cset_list_set_pane_copy1

0x9251,	// (0x0007df8b) aid_position_infowindow_above_copy1

0x9259,	// (0x0007df93) aid_position_infowindow_below_copy1

0xf07a,	// (0x00083db4) cset_list_set_pane_g1_copy1

0xd555,	// (0x0008228f) cset_list_set_pane_g3_copy1_ParamLimits

0xd555,	// (0x0008228f) cset_list_set_pane_g3_copy1

0xd564,	// (0x0008229e) cset_list_set_pane_t1_copy1_ParamLimits

0xd564,	// (0x0008229e) cset_list_set_pane_t1_copy1

0xa8e4,	// (0x0007f61e) list_highlight_pane_cp021_copy1_ParamLimits

0xa8e4,	// (0x0007f61e) list_highlight_pane_cp021_copy1

0xd579,	// (0x000822b3) cset6_slider_pane_ParamLimits

0xd579,	// (0x000822b3) cset6_slider_pane

0xd5a5,	// (0x000822df) main_cset6_slider_pane_g1_ParamLimits

0xd5a5,	// (0x000822df) main_cset6_slider_pane_g1

0x9261,	// (0x0007df9b) main_cset6_slider_pane_g2_ParamLimits

0x9261,	// (0x0007df9b) main_cset6_slider_pane_g2

0xcd14,	// (0x00081a4e) main_cset6_slider_pane_g3_ParamLimits

0xcd14,	// (0x00081a4e) main_cset6_slider_pane_g3

0x84b4,	// (0x0007d1ee) main_cset6_slider_pane_g4_ParamLimits

0x84b4,	// (0x0007d1ee) main_cset6_slider_pane_g4

0x84fc,	// (0x0007d236) main_cset6_slider_pane_g5_ParamLimits

0x84fc,	// (0x0007d236) main_cset6_slider_pane_g5

0xcd14,	// (0x00081a4e) main_cset6_slider_pane_g7_ParamLimits

0xcd14,	// (0x00081a4e) main_cset6_slider_pane_g7

0xcd20,	// (0x00081a5a) main_cset6_slider_pane_g8_ParamLimits

0xcd20,	// (0x00081a5a) main_cset6_slider_pane_g8

0x849c,	// (0x0007d1d6) main_cset6_slider_pane_g9_ParamLimits

0x849c,	// (0x0007d1d6) main_cset6_slider_pane_g9

0x84a8,	// (0x0007d1e2) main_cset6_slider_pane_g10_ParamLimits

0x84a8,	// (0x0007d1e2) main_cset6_slider_pane_g10

0x84b4,	// (0x0007d1ee) main_cset6_slider_pane_g11_ParamLimits

0x84b4,	// (0x0007d1ee) main_cset6_slider_pane_g11

0x84c0,	// (0x0007d1fa) main_cset6_slider_pane_g12_ParamLimits

0x84c0,	// (0x0007d1fa) main_cset6_slider_pane_g12

0x84cc,	// (0x0007d206) main_cset6_slider_pane_g13_ParamLimits

0x84cc,	// (0x0007d206) main_cset6_slider_pane_g13

0x84d8,	// (0x0007d212) main_cset6_slider_pane_g14_ParamLimits

0x84d8,	// (0x0007d212) main_cset6_slider_pane_g14

0x9289,	// (0x0007dfc3) main_cset6_slider_pane_g15_ParamLimits

0x9289,	// (0x0007dfc3) main_cset6_slider_pane_g15

0x84fc,	// (0x0007d236) main_cset6_slider_pane_g16_ParamLimits

0x84fc,	// (0x0007d236) main_cset6_slider_pane_g16

0x8508,	// (0x0007d242) main_cset6_slider_pane_g17_ParamLimits

0x8508,	// (0x0007d242) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x000848e6) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x000848e6) main_cset6_slider_pane_g

0xd5cd,	// (0x00082307) main_cset6_slider_pane_t1_ParamLimits

0xd5cd,	// (0x00082307) main_cset6_slider_pane_t1

0x92a1,	// (0x0007dfdb) main_cset6_slider_pane_t2_ParamLimits

0x92a1,	// (0x0007dfdb) main_cset6_slider_pane_t2

0x92cc,	// (0x0007e006) main_cset6_slider_pane_t3_ParamLimits

0x92cc,	// (0x0007e006) main_cset6_slider_pane_t3

0x92f7,	// (0x0007e031) main_cset6_slider_pane_t4_ParamLimits

0x92f7,	// (0x0007e031) main_cset6_slider_pane_t4

0x9322,	// (0x0007e05c) main_cset6_slider_pane_t5_ParamLimits

0x9322,	// (0x0007e05c) main_cset6_slider_pane_t5

0xd60e,	// (0x00082348) main_cset6_slider_pane_t7_ParamLimits

0xd60e,	// (0x00082348) main_cset6_slider_pane_t7

0x934d,	// (0x0007e087) main_cset6_slider_pane_t8_ParamLimits

0x934d,	// (0x0007e087) main_cset6_slider_pane_t8

0x9371,	// (0x0007e0ab) main_cset6_slider_pane_t9_ParamLimits

0x9371,	// (0x0007e0ab) main_cset6_slider_pane_t9

0x9395,	// (0x0007e0cf) main_cset6_slider_pane_t10_ParamLimits

0x9395,	// (0x0007e0cf) main_cset6_slider_pane_t10

0x93b9,	// (0x0007e0f3) main_cset6_slider_pane_t11_ParamLimits

0x93b9,	// (0x0007e0f3) main_cset6_slider_pane_t11

0xd644,	// (0x0008237e) main_cset6_slider_pane_t14_ParamLimits

0xd644,	// (0x0008237e) main_cset6_slider_pane_t14

0xd67d,	// (0x000823b7) main_cset6_slider_pane_t15_ParamLimits

0xd67d,	// (0x000823b7) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x0008490b) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x0008490b) main_cset6_slider_pane_t

0xcdd8,	// (0x00081b12) cset_slider_pane_g1_copy1

0xcde1,	// (0x00081b1b) cset_slider_pane_g2_copy1

0xcdea,	// (0x00081b24) cset_slider_pane_g3_copy1

0xa86c,	// (0x0007f5a6) bg_popup_sub_pane_cp011_copy1

0xce93,	// (0x00081bcd) main_cset_text_pane_g1_copy1

0xce9b,	// (0x00081bd5) main_cset_text_pane_t1_copy1

0xcea9,	// (0x00081be3) main_cset_text_pane_t2_copy1

0xceb7,	// (0x00081bf1) main_cset_text_pane_t3_copy1

0xcec5,	// (0x00081bff) main_cset_text_pane_t4_copy1

0xced3,	// (0x00081c0d) main_cset_text_pane_t5_copy1

0xcee1,	// (0x00081c1b) main_cset_text_pane_t6_copy1

0xceef,	// (0x00081c29) main_cset_text_pane_t7_copy1

0x91ba,	// (0x0007def4) main_cset_text2_pane_t1_copy1

0xa86c,	// (0x0007f5a6) main_ncimui_pane

0x5add,	// (0x0007a817) popup_query_ncimui_window_ParamLimits

0x5add,	// (0x0007a817) popup_query_ncimui_window

0xec6f,	// (0x000839a9) field_cale_ev2_pane_g4_ParamLimits

0xec6f,	// (0x000839a9) field_cale_ev2_pane_g4

0x76fc,	// (0x0007c436) cell_video_dialer_keypad_pane_g2_ParamLimits

0x76fc,	// (0x0007c436) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x000845e9) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x000845e9) cell_video_dialer_keypad_pane_g

0x7714,	// (0x0007c44e) cell_video_dialer_keypad_pane_t1

0xa86c,	// (0x0007f5a6) bg_popup_window_pane_cp012

0x4115,	// (0x00078e4f) heading_pane_cp06

0xd7a5,	// (0x000824df) ncim_query_content_pane

0xa86c,	// (0x0007f5a6) bg_popup_heading_pane_cp01

0xd7ad,	// (0x000824e7) ncim_heading_pane_t1

0xd7bb,	// (0x000824f5) ncim_indicator_popup_pane

0xd7cd,	// (0x00082507) ncim_query_button_pane

0xd7e1,	// (0x0008251b) ncim_query_content_pane_t1

0xd7f3,	// (0x0008252d) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x0008494a) ncim_query_content_pane_t

0xd82d,	// (0x00082567) ncim_query_list_pane

0xd83f,	// (0x00082579) ncim_query_popup_pane

0xd7bb,	// (0x000824f5) ncim_indicator_popup_pane_ParamLimits

0x94d6,	// (0x0007e210) ncim_query_content_pane_g1_ParamLimits

0x94d6,	// (0x0007e210) ncim_query_content_pane_g1

0xd7e1,	// (0x0008251b) ncim_query_content_pane_t1_ParamLimits

0xd7f3,	// (0x0008252d) ncim_query_content_pane_t2_ParamLimits

0x94e2,	// (0x0007e21c) ncim_query_content_pane_t3_ParamLimits

0x94e2,	// (0x0007e21c) ncim_query_content_pane_t3

0x950a,	// (0x0007e244) ncim_query_content_pane_t4_ParamLimits

0x950a,	// (0x0007e244) ncim_query_content_pane_t4

0x9532,	// (0x0007e26c) ncim_query_content_pane_t5_ParamLimits

0x9532,	// (0x0007e26c) ncim_query_content_pane_t5

0xd805,	// (0x0008253f) ncim_query_content_pane_t6_ParamLimits

0xd805,	// (0x0008253f) ncim_query_content_pane_t6

0xfc10,	// (0x0008494a) ncim_query_content_pane_t_ParamLimits

0xd82d,	// (0x00082567) ncim_query_list_pane_ParamLimits

0xd83f,	// (0x00082579) ncim_query_popup_pane_ParamLimits

0xd853,	// (0x0008258d) wait_bar_pane_cp04

0xa86c,	// (0x0007f5a6) input_focus_pane_cp011

0xd85b,	// (0x00082595) ncim_query_popup_pane_t1

0xd869,	// (0x000825a3) ncim_list_query_list_pane_ParamLimits

0xd869,	// (0x000825a3) ncim_list_query_list_pane

0xa86c,	// (0x0007f5a6) bg_button_pane_cp027

0xd87c,	// (0x000825b6) ncim_query_button_pane_g1

0xa86c,	// (0x0007f5a6) list_highlight_pane_cp012

0xd886,	// (0x000825c0) ncim_list_query_list_pane_g1

0xd88e,	// (0x000825c8) ncim_list_query_list_pane_t1

0xef42,	// (0x00083c7c) cam4_indicators_pane_g3_ParamLimits

0xef42,	// (0x00083c7c) cam4_indicators_pane_g3

0x7e0d,	// (0x0007cb47) vid4_indicators_pane_g5_ParamLimits

0x7e0d,	// (0x0007cb47) vid4_indicators_pane_g5

0xef42,	// (0x00083c7c) vid4_progress_pane_g5_ParamLimits

0xef42,	// (0x00083c7c) vid4_progress_pane_g5

0x93ef,	// (0x0007e129) main_ncimui_pane_g1

0x9445,	// (0x0007e17f) ncimui_group_query_pane_ParamLimits

0x9445,	// (0x0007e17f) ncimui_group_query_pane

0x9481,	// (0x0007e1bb) ncimui_list_pane_ParamLimits

0x9481,	// (0x0007e1bb) ncimui_list_pane

0x94a2,	// (0x0007e1dc) ncimui_text_pane_ParamLimits

0x94a2,	// (0x0007e1dc) ncimui_text_pane

0x955a,	// (0x0007e294) ncimui_text_pane_t1_ParamLimits

0x955a,	// (0x0007e294) ncimui_text_pane_t1

0xd89c,	// (0x000825d6) ncimui_list_single_graphic_pane_ParamLimits

0xd89c,	// (0x000825d6) ncimui_list_single_graphic_pane

0x9578,	// (0x0007e2b2) ncimui_query_pane_ParamLimits

0x9578,	// (0x0007e2b2) ncimui_query_pane

0xa86c,	// (0x0007f5a6) list_highlight_pane_cp013

0xd8ac,	// (0x000825e6) ncim_list_query_list_pane_t1_copy1

0xd886,	// (0x000825c0) ncim_list_single_graphic_pane_g1

0xd8ba,	// (0x000825f4) ncim_query_button_pane_cp01

0xd8c6,	// (0x00082600) ncim_query_entry_pane_ParamLimits

0xd8c6,	// (0x00082600) ncim_query_entry_pane

0xd8d9,	// (0x00082613) ncimui_query_pane_g1

0xd8e5,	// (0x0008261f) ncimui_query_pane_t1_ParamLimits

0xd8e5,	// (0x0008261f) ncimui_query_pane_t1

0xa8e4,	// (0x0007f61e) input_focus_pane_cp012

0xd8fe,	// (0x00082638) ncim_query_entry_pane_t1

0x21dd,	// (0x00076f17) main_im_pane_ParamLimits

0xa8e4,	// (0x0007f61e) main_mobtv_pane_ParamLimits

0xa8e4,	// (0x0007f61e) main_mobtv_pane

0x849c,	// (0x0007d1d6) main_cset6_slider_pane_g18_ParamLimits

0x849c,	// (0x0007d1d6) main_cset6_slider_pane_g18

0x84cc,	// (0x0007d206) main_cset6_slider_pane_g19_ParamLimits

0x84cc,	// (0x0007d206) main_cset6_slider_pane_g19

0xf0bb,	// (0x00083df5) bg_main_mobtv_pane_ParamLimits

0xf0bb,	// (0x00083df5) bg_main_mobtv_pane

0x958b,	// (0x0007e2c5) main_mobtv_info_pane

0x9594,	// (0x0007e2ce) main_mobtv_loading_pane_ParamLimits

0x9594,	// (0x0007e2ce) main_mobtv_loading_pane

0xd910,	// (0x0008264a) main_mobtv_pg_channel_list_pane

0xd91a,	// (0x00082654) main_mobtv_pg_hdr_pane

0x95a1,	// (0x0007e2db) main_mobtv_programe_curr_pane_ParamLimits

0x95a1,	// (0x0007e2db) main_mobtv_programe_curr_pane

0x95ae,	// (0x0007e2e8) main_mobtv_programe_next_pane_ParamLimits

0x95ae,	// (0x0007e2e8) main_mobtv_programe_next_pane

0xd923,	// (0x0008265d) popup_mobtv_noti_window

0xc13b,	// (0x00080e75) main_tv_pg_hdr_pane_g1

0xd92b,	// (0x00082665) main_tv_pg_hdr_pane_g2

0xd933,	// (0x0008266d) main_tv_pg_hdr_pane_g3

0xd93b,	// (0x00082675) main_tv_pg_hdr_pane_g4

0xd943,	// (0x0008267d) main_tv_pg_hdr_pane_g5

0xd94d,	// (0x00082687) main_tv_pg_hdr_pane_g6

0xd957,	// (0x00082691) main_tv_pg_hdr_pane_g7

0xd961,	// (0x0008269b) main_tv_pg_hdr_pane_g8

0xd96b,	// (0x000826a5) main_tv_pg_hdr_pane_g9

0xd975,	// (0x000826af) main_tv_pg_hdr_pane_g10

0xd97f,	// (0x000826b9) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x00084957) main_tv_pg_hdr_pane_g

0xd989,	// (0x000826c3) main_tv_pg_hdr_pane_t1

0xd997,	// (0x000826d1) main_tv_pg_hdr_pane_t2

0xd9a5,	// (0x000826df) main_tv_pg_hdr_pane_t3

0xd9b5,	// (0x000826ef) main_tv_pg_hdr_pane_t4

0xd9c5,	// (0x000826ff) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x0008496e) main_tv_pg_hdr_pane_t

0xd9d5,	// (0x0008270f) single_mobtv_pg_channel_pane_ParamLimits

0xd9d5,	// (0x0008270f) single_mobtv_pg_channel_pane

0xd9e7,	// (0x00082721) single_mobtv_pg_channel_table_pane

0xd9f0,	// (0x0008272a) single_mobtv_pg_channel_thumb_pane

0xd9f9,	// (0x00082733) single_tv_pg_channel_pane_g1

0xda02,	// (0x0008273c) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x00084979) single_tv_pg_channel_pane_g

0xc3a2,	// (0x000810dc) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc3a2,	// (0x000810dc) bg_single_mobtv_pg_channel_thumb_pane

0xda0b,	// (0x00082745) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xda0b,	// (0x00082745) single_mobtv_pg_channel_thumb_pane_g1

0xda19,	// (0x00082753) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xda19,	// (0x00082753) single_mobtv_pg_channel_thumb_pane_g2

0xda25,	// (0x0008275f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xda25,	// (0x0008275f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x0008497e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x0008497e) single_mobtv_pg_channel_thumb_pane_g

0xda31,	// (0x0008276b) single_mobtv_pg_channel_thumb_pane_t1

0xda3f,	// (0x00082779) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x00084985) single_mobtv_pg_channel_thumb_pane_t

0xc13b,	// (0x00080e75) bg_single_mobtv_pg_channel_table_pane_g1

0xc13b,	// (0x00080e75) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x00084435) bg_single_mobtv_pg_channel_table_pane_g

0xda4d,	// (0x00082787) single_mobtv_pg_channel_table_pane_t1

0xda5b,	// (0x00082795) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x0008498a) single_mobtv_pg_channel_table_pane_t

0x95c3,	// (0x0007e2fd) main_mobtv_info_pane_g1_ParamLimits

0x95c3,	// (0x0007e2fd) main_mobtv_info_pane_g1

0x95e1,	// (0x0007e31b) main_mobtv_info_pane_t1_ParamLimits

0x95e1,	// (0x0007e31b) main_mobtv_info_pane_t1

0x9659,	// (0x0007e393) main_mobtv_info_pane_t2_ParamLimits

0x9659,	// (0x0007e393) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x00084994) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x00084994) main_mobtv_info_pane_t

0x96e8,	// (0x0007e422) wait_bar_pane_cp05

0x96fa,	// (0x0007e434) main_mobtv_loading_pane_g1_ParamLimits

0x96fa,	// (0x0007e434) main_mobtv_loading_pane_g1

0x970d,	// (0x0007e447) main_mobtv_loading_pane_g2_ParamLimits

0x970d,	// (0x0007e447) main_mobtv_loading_pane_g2

0x9719,	// (0x0007e453) main_mobtv_loading_pane_g3_ParamLimits

0x9719,	// (0x0007e453) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x0008499b) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x0008499b) main_mobtv_loading_pane_g

0xda69,	// (0x000827a3) main_mobtv_loading_pane_t1_ParamLimits

0xda69,	// (0x000827a3) main_mobtv_loading_pane_t1

0xda81,	// (0x000827bb) main_mobtv_loading_pane_t2_ParamLimits

0xda81,	// (0x000827bb) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x000849a2) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x000849a2) main_mobtv_loading_pane_t

0x972c,	// (0x0007e466) wait_bar_pane_cp06_ParamLimits

0x972c,	// (0x0007e466) wait_bar_pane_cp06

0xdaa5,	// (0x000827df) main_mobtv_programe_curr_pane_t1

0xdab3,	// (0x000827ed) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x000849a7) main_mobtv_programe_curr_pane_t

0xdac1,	// (0x000827fb) main_mobtv_programe_next_pane_t1

0xdacf,	// (0x00082809) main_mobtv_programe_next_pane_t2

0xdadd,	// (0x00082817) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x000849ac) main_mobtv_programe_next_pane_t

0xa86c,	// (0x0007f5a6) bg_popup_mobtv_noti_window_pane

0xdaeb,	// (0x00082825) popup_mobtv_noti_window_g1

0xdaf3,	// (0x0008282d) popup_mobtv_noti_window_t1

0xdb01,	// (0x0008283b) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x000849b3) popup_mobtv_noti_window_t

0xc13b,	// (0x00080e75) bg_popup_mobtv_noti_window_pane_g1

0xa86c,	// (0x0007f5a6) sc_clock_pane

0xa86c,	// (0x0007f5a6) main_fs_bigclock_pane

0x8f0b,	// (0x0007dc45) blid2_tripm_pane_t4_ParamLimits

0x8f0b,	// (0x0007dc45) blid2_tripm_pane_t4

0x973b,	// (0x0007e475) sc_clock_pane_g1_ParamLimits

0x973b,	// (0x0007e475) sc_clock_pane_g1

0x974d,	// (0x0007e487) sc_clock_pane_t1_ParamLimits

0x974d,	// (0x0007e487) sc_clock_pane_t1

0x976f,	// (0x0007e4a9) sc_clock_pane_t2_ParamLimits

0x976f,	// (0x0007e4a9) sc_clock_pane_t2

0x9787,	// (0x0007e4c1) sc_clock_pane_t3_ParamLimits

0x9787,	// (0x0007e4c1) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x000849b8) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x000849b8) sc_clock_pane_t

0xa047,	// (0x0007ed81) main_fs_bigclock_indicator_pane_ParamLimits

0xa047,	// (0x0007ed81) main_fs_bigclock_indicator_pane

0xc372,	// (0x000810ac) main_fs_bigclock_pane_g1_ParamLimits

0xc372,	// (0x000810ac) main_fs_bigclock_pane_g1

0xa053,	// (0x0007ed8d) main_fs_bigclock_pane_t1_ParamLimits

0xa053,	// (0x0007ed8d) main_fs_bigclock_pane_t1

0xa065,	// (0x0007ed9f) main_fs_bigclock_pane_t2_ParamLimits

0xa065,	// (0x0007ed9f) main_fs_bigclock_pane_t2

0xa077,	// (0x0007edb1) main_fs_bigclock_pane_t3_ParamLimits

0xa077,	// (0x0007edb1) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x00084bbc) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x00084bbc) main_fs_bigclock_pane_t

0xe7b2,	// (0x000834ec) main_fs_bigclock_indicator_pane_g1

0xd7d5,	// (0x0008250f) ncim_query_content_pane_g2_ParamLimits

0xd7d5,	// (0x0008250f) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x00084945) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x00084945) ncim_query_content_pane_g

0x97a0,	// (0x0007e4da) sc_clock_pane_t4_ParamLimits

0x97a0,	// (0x0007e4da) sc_clock_pane_t4

0xa8e4,	// (0x0007f61e) main_radioblah_pane

0xcaf9,	// (0x00081833) cell_call4_button_pane_t1_copy1_ParamLimits

0xcaf9,	// (0x00081833) cell_call4_button_pane_t1_copy1

0x93f7,	// (0x0007e131) main_ncimui_pane_t1_ParamLimits

0x93f7,	// (0x0007e131) main_ncimui_pane_t1

0x9411,	// (0x0007e14b) main_ncimui_pane_t2_ParamLimits

0x9411,	// (0x0007e14b) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x0008493e) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x0008493e) main_ncimui_pane_t

0xdc4a,	// (0x00082984) main_radioblah_anim_pane_ParamLimits

0xdc4a,	// (0x00082984) main_radioblah_anim_pane

0xdc5b,	// (0x00082995) main_radioblah_info_pane_ParamLimits

0xdc5b,	// (0x00082995) main_radioblah_info_pane

0xdc6f,	// (0x000829a9) main_radioblah_pane_t1_ParamLimits

0xdc6f,	// (0x000829a9) main_radioblah_pane_t1

0xdc8b,	// (0x000829c5) main_radioblah_pane_t2_ParamLimits

0xdc8b,	// (0x000829c5) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x000849d9) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x000849d9) main_radioblah_pane_t

0x984f,	// (0x0007e589) main_radioblah_rocker_ctrl_pane_ParamLimits

0x984f,	// (0x0007e589) main_radioblah_rocker_ctrl_pane

0xdcd3,	// (0x00082a0d) main_radioblah_info_pane_t1_ParamLimits

0xdcd3,	// (0x00082a0d) main_radioblah_info_pane_t1

0x98a7,	// (0x0007e5e1) main_radioblah_info_pane_t2_ParamLimits

0x98a7,	// (0x0007e5e1) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x000849e2) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x000849e2) main_radioblah_info_pane_t

0xc13b,	// (0x00080e75) main_radioblah_rocker_ctrl_pane_g1

0x9959,	// (0x0007e693) main_radioblah_rocker_ctrl_pane_g2

0x9961,	// (0x0007e69b) main_radioblah_rocker_ctrl_pane_g3

0x9969,	// (0x0007e6a3) main_radioblah_rocker_ctrl_pane_g4

0x9971,	// (0x0007e6ab) main_radioblah_rocker_ctrl_pane_g5

0x9979,	// (0x0007e6b3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x000849eb) main_radioblah_rocker_ctrl_pane_g

0x91ba,	// (0x0007def4) main_cset_text2_pane_t1_copy1_ParamLimits

0xef12,	// (0x00083c4c) cam4_image_uncrop_qvga_pane

0xef6b,	// (0x00083ca5) vid4_image_uncrop_qcif_pane

0xf06c,	// (0x00083da6) cam6_image_uncrop_qvga_pane_ParamLimits

0xf06c,	// (0x00083da6) cam6_image_uncrop_qvga_pane

0xd417,	// (0x00082151) vid6_image_uncrop_qcif_pane_ParamLimits

0xd417,	// (0x00082151) vid6_image_uncrop_qcif_pane

0xa86c,	// (0x0007f5a6) bg_popup_preview_window_pane_cp03

0xd787,	// (0x000824c1) list_cset_text2_pane

0xd78f,	// (0x000824c9) main_cset6_text2_pane_g1

0xd797,	// (0x000824d1) main_cset6_text2_pane_t1

0x9981,	// (0x0007e6bb) list_cset_text2_pane_t1_ParamLimits

0x9981,	// (0x0007e6bb) list_cset_text2_pane_t1

0xa8e4,	// (0x0007f61e) main_radioblah_pane_ParamLimits

0x96d4,	// (0x0007e40e) main_mobtv_info_pane_t3_ParamLimits

0x96d4,	// (0x0007e40e) main_mobtv_info_pane_t3

0x983d,	// (0x0007e577) main_radioblah_pane_g1

0x9877,	// (0x0007e5b1) main_radioblah_info_pane_g1

0x98fe,	// (0x0007e638) main_radioblah_info_pane_t3_ParamLimits

0x98fe,	// (0x0007e638) main_radioblah_info_pane_t3

0x3bb7,	// (0x000788f1) highlight_cell_cale_month_pane_ParamLimits

0x3bb7,	// (0x000788f1) highlight_cell_cale_month_pane

0xa86c,	// (0x0007f5a6) main_phob_fisheye_pane

0xc4b6,	// (0x000811f0) scroll_pane_cp0031_ParamLimits

0xc4b6,	// (0x000811f0) scroll_pane_cp0031

0xd525,	// (0x0008225f) wait_bar_pane_cp08_ParamLimits

0x923e,	// (0x0007df78) cset_list_set_pane_copy1_ParamLimits

0xdd0d,	// (0x00082a47) highlight_cell_cale_month_pane_g1

0x999e,	// (0x0007e6d8) highlight_cell_cale_month_pane_t1

0xd15f,	// (0x00081e99) list_gen_pane_cp01

0xccff,	// (0x00081a39) scroll_pane_01

0xf0c9,	// (0x00083e03) list_single_double_fisheye_pane

0xdd15,	// (0x00082a4f) list_double_fisheye_pane_g1_ParamLimits

0xdd15,	// (0x00082a4f) list_double_fisheye_pane_g1

0xf082,	// (0x00083dbc) list_double_fisheye_pane_g2_ParamLimits

0xf082,	// (0x00083dbc) list_double_fisheye_pane_g2

0xf0d2,	// (0x00083e0c) list_double_fisheye_pane_g3_ParamLimits

0xf0d2,	// (0x00083e0c) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x000849f8) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x000849f8) list_double_fisheye_pane_g

0xdd2d,	// (0x00082a67) list_double_fisheye_pane_t1_ParamLimits

0xdd2d,	// (0x00082a67) list_double_fisheye_pane_t1

0xdd48,	// (0x00082a82) list_double_fisheye_pane_t2_ParamLimits

0xdd48,	// (0x00082a82) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x00084a03) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x00084a03) list_double_fisheye_pane_t

0xa86c,	// (0x0007f5a6) main_call5_pane

0x97cb,	// (0x0007e505) sc_swipe_pane_ParamLimits

0x97cb,	// (0x0007e505) sc_swipe_pane

0x99bf,	// (0x0007e6f9) call5_image_pane_ParamLimits

0x99bf,	// (0x0007e6f9) call5_image_pane

0x99dc,	// (0x0007e716) call5_swipe_1_pane_ParamLimits

0x99dc,	// (0x0007e716) call5_swipe_1_pane

0x99ef,	// (0x0007e729) call5_swipe_2_pane_ParamLimits

0x99ef,	// (0x0007e729) call5_swipe_2_pane

0x9a1a,	// (0x0007e754) popup_call5_audio_first_window_ParamLimits

0x9a1a,	// (0x0007e754) popup_call5_audio_first_window

0xc3a2,	// (0x000810dc) call5_swipe_1_pane_g1_ParamLimits

0xc3a2,	// (0x000810dc) call5_swipe_1_pane_g1

0xdd6a,	// (0x00082aa4) call5_swipe_1_pane_g2_ParamLimits

0xdd6a,	// (0x00082aa4) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x00084a08) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x00084a08) call5_swipe_1_pane_g

0xdd76,	// (0x00082ab0) call5_swipe_1_pane_t1_ParamLimits

0xdd76,	// (0x00082ab0) call5_swipe_1_pane_t1

0xc3a2,	// (0x000810dc) call5_swipe_2_pane_g1_ParamLimits

0xc3a2,	// (0x000810dc) call5_swipe_2_pane_g1

0xdd8b,	// (0x00082ac5) call5_swipe_2_pane_g2_ParamLimits

0xdd8b,	// (0x00082ac5) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x00084a0d) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x00084a0d) call5_swipe_2_pane_g

0xdd97,	// (0x00082ad1) call5_swipe_2_pane_t1_ParamLimits

0xdd97,	// (0x00082ad1) call5_swipe_2_pane_t1

0xddac,	// (0x00082ae6) sc_swipe_pane_g1_ParamLimits

0xddac,	// (0x00082ae6) sc_swipe_pane_g1

0xddb9,	// (0x00082af3) sc_swipe_pane_g2_ParamLimits

0xddb9,	// (0x00082af3) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x00084a12) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x00084a12) sc_swipe_pane_g

0xddc5,	// (0x00082aff) sc_swipe_pane_t1_ParamLimits

0xddc5,	// (0x00082aff) sc_swipe_pane_t1

0xa86c,	// (0x0007f5a6) main_cmail_launcher_pane

0x9a2b,	// (0x0007e765) aid_size_cell_cmail_l_ParamLimits

0x9a2b,	// (0x0007e765) aid_size_cell_cmail_l

0x9a45,	// (0x0007e77f) grid_cmail_l_pane_ParamLimits

0x9a45,	// (0x0007e77f) grid_cmail_l_pane

0x9a60,	// (0x0007e79a) cell_cmail_l_pane_ParamLimits

0x9a60,	// (0x0007e79a) cell_cmail_l_pane

0x9a86,	// (0x0007e7c0) cell_cmail_l_pane_g1_ParamLimits

0x9a86,	// (0x0007e7c0) cell_cmail_l_pane_g1

0x9a92,	// (0x0007e7cc) cell_cmail_l_pane_t1_ParamLimits

0x9a92,	// (0x0007e7cc) cell_cmail_l_pane_t1

0xddda,	// (0x00082b14) cell_cmail_l_pane_t2_ParamLimits

0xddda,	// (0x00082b14) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x00084a17) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x00084a17) cell_cmail_l_pane_t

0xa8e4,	// (0x0007f61e) grid_highlight_pane_cp018_ParamLimits

0xa8e4,	// (0x0007f61e) grid_highlight_pane_cp018

0x15f8,	// (0x00076332) main2_pane_ParamLimits

0x15f8,	// (0x00076332) main2_pane

0x2404,	// (0x0007713e) popup_sp_fs_action_menu_bg_pane_g1

0x240c,	// (0x00077146) popup_sp_fs_action_menu_bg_pane_g2

0x2414,	// (0x0007714e) popup_sp_fs_action_menu_bg_pane_g3

0x241c,	// (0x00077156) popup_sp_fs_action_menu_bg_pane_g4

0x2424,	// (0x0007715e) popup_sp_fs_action_menu_bg_pane_g5

0x242c,	// (0x00077166) popup_sp_fs_action_menu_bg_pane_g6

0x2434,	// (0x0007716e) popup_sp_fs_action_menu_bg_pane_g7

0x243c,	// (0x00077176) popup_sp_fs_action_menu_bg_pane_g8

0x2444,	// (0x0007717e) popup_sp_fs_action_menu_bg_pane_g9

0x244c,	// (0x00077186) popup_sp_fs_action_menu_bg_pane_g10

0x244c,	// (0x00077186) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x00083ee1) popup_sp_fs_action_menu_bg_pane_g

0xaa04,	// (0x0007f73e) list_medium_line_x2_t3_g3_g1_ParamLimits

0xaa04,	// (0x0007f73e) list_medium_line_x2_t3_g3_g1

0xaa10,	// (0x0007f74a) list_medium_line_x2_t3_g3_g2_ParamLimits

0xaa10,	// (0x0007f74a) list_medium_line_x2_t3_g3_g2

0xaa1c,	// (0x0007f756) list_medium_line_x2_t3_g3_g3_ParamLimits

0xaa1c,	// (0x0007f756) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x00083f91) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x00083f91) list_medium_line_x2_t3_g3_g

0xaa28,	// (0x0007f762) list_medium_line_x2_t3_g3_t1_ParamLimits

0xaa28,	// (0x0007f762) list_medium_line_x2_t3_g3_t1

0x0b45,	// (0x0007587f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0b45,	// (0x0007587f) list_medium_line_x2_t3_g3_t2

0xaa3d,	// (0x0007f777) list_medium_line_x2_t3_g3_t3_ParamLimits

0xaa3d,	// (0x0007f777) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x00083f98) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x00083f98) list_medium_line_x2_t3_g3_t

0xaa04,	// (0x0007f73e) list_medium_line_x2_t3_g2_g1_ParamLimits

0xaa04,	// (0x0007f73e) list_medium_line_x2_t3_g2_g1

0xaa1c,	// (0x0007f756) list_medium_line_x2_t3_g2_g2_ParamLimits

0xaa1c,	// (0x0007f756) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x00083f9f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x00083f9f) list_medium_line_x2_t3_g2_g

0xaa52,	// (0x0007f78c) list_medium_line_x2_t3_g2_t1_ParamLimits

0xaa52,	// (0x0007f78c) list_medium_line_x2_t3_g2_t1

0xaa68,	// (0x0007f7a2) list_medium_line_x2_t3_g2_t2_ParamLimits

0xaa68,	// (0x0007f7a2) list_medium_line_x2_t3_g2_t2

0xaa7a,	// (0x0007f7b4) list_medium_line_x2_t3_g2_t3_ParamLimits

0xaa7a,	// (0x0007f7b4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x00083fa4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x00083fa4) list_medium_line_x2_t3_g2_t

0xaa04,	// (0x0007f73e) list_medium_line_x2_t4_g4_g1_ParamLimits

0xaa04,	// (0x0007f73e) list_medium_line_x2_t4_g4_g1

0xaa98,	// (0x0007f7d2) list_medium_line_x2_t4_g4_g2_ParamLimits

0xaa98,	// (0x0007f7d2) list_medium_line_x2_t4_g4_g2

0xaa10,	// (0x0007f74a) list_medium_line_x2_t4_g4_g3_ParamLimits

0xaa10,	// (0x0007f74a) list_medium_line_x2_t4_g4_g3

0xaaa4,	// (0x0007f7de) list_medium_line_x2_t4_g4_g4_ParamLimits

0xaaa4,	// (0x0007f7de) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x00083fab) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x00083fab) list_medium_line_x2_t4_g4_g

0x0b59,	// (0x00075893) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0b59,	// (0x00075893) list_medium_line_x2_t4_g4_t1

0x0b70,	// (0x000758aa) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0b70,	// (0x000758aa) list_medium_line_x2_t4_g4_t2

0x0b85,	// (0x000758bf) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0b85,	// (0x000758bf) list_medium_line_x2_t4_g4_t3

0xaab0,	// (0x0007f7ea) list_medium_line_x2_t4_g4_t4_ParamLimits

0xaab0,	// (0x0007f7ea) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x00083fb4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x00083fb4) list_medium_line_x2_t4_g4_t

0xaa04,	// (0x0007f73e) list_medium_line_x2_t2_g4_g1_ParamLimits

0xaa04,	// (0x0007f73e) list_medium_line_x2_t2_g4_g1

0xaa98,	// (0x0007f7d2) list_medium_line_x2_t2_g4_g2_ParamLimits

0xaa98,	// (0x0007f7d2) list_medium_line_x2_t2_g4_g2

0xaa10,	// (0x0007f74a) list_medium_line_x2_t2_g4_g3_ParamLimits

0xaa10,	// (0x0007f74a) list_medium_line_x2_t2_g4_g3

0xaa1c,	// (0x0007f756) list_medium_line_x2_t2_g4_g4_ParamLimits

0xaa1c,	// (0x0007f756) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x0008401b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x0008401b) list_medium_line_x2_t2_g4_g

0xaac2,	// (0x0007f7fc) list_medium_line_x2_t2_g4_t1_ParamLimits

0xaac2,	// (0x0007f7fc) list_medium_line_x2_t2_g4_t1

0xaa3d,	// (0x0007f777) list_medium_line_x2_t2_g4_t2_ParamLimits

0xaa3d,	// (0x0007f777) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x00084024) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x00084024) list_medium_line_x2_t2_g4_t

0xaa04,	// (0x0007f73e) list_medium_line_x2_t2_g3_g1_ParamLimits

0xaa04,	// (0x0007f73e) list_medium_line_x2_t2_g3_g1

0xaa10,	// (0x0007f74a) list_medium_line_x2_t2_g3_g2_ParamLimits

0xaa10,	// (0x0007f74a) list_medium_line_x2_t2_g3_g2

0xaa1c,	// (0x0007f756) list_medium_line_x2_t2_g3_g3_ParamLimits

0xaa1c,	// (0x0007f756) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x00083f91) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x00083f91) list_medium_line_x2_t2_g3_g

0xaad7,	// (0x0007f811) list_medium_line_x2_t2_g3_t1_ParamLimits

0xaad7,	// (0x0007f811) list_medium_line_x2_t2_g3_t1

0xaa3d,	// (0x0007f777) list_medium_line_x2_t2_g3_t2_ParamLimits

0xaa3d,	// (0x0007f777) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x00084029) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x00084029) list_medium_line_x2_t2_g3_t

0x3f3e,	// (0x00078c78) main_sp_fs_list_pane_ParamLimits

0x3f3e,	// (0x00078c78) main_sp_fs_list_pane

0x3f4a,	// (0x00078c84) sp_fs_scroll_pane_ParamLimits

0x3f4a,	// (0x00078c84) sp_fs_scroll_pane

0x0b97,	// (0x000758d1) list_medium_line_x2_t3_t1

0x0ba7,	// (0x000758e1) list_medium_line_x2_t3_t2

0xab1a,	// (0x0007f854) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x00084074) list_medium_line_x2_t3_t

0x0bb5,	// (0x000758ef) list_medium_line_x3_t4_t1

0x0bc5,	// (0x000758ff) list_medium_line_x3_t4_t2

0xab28,	// (0x0007f862) list_medium_line_x3_t4_t3

0xab1a,	// (0x0007f854) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x0008407b) list_medium_line_x3_t4_t

0x0bd3,	// (0x0007590d) list_medium_line_x4_t5_t1

0x0be3,	// (0x0007591d) list_medium_line_x4_t5_t2

0xab28,	// (0x0007f862) list_medium_line_x4_t5_t3

0xab36,	// (0x0007f870) list_medium_line_x4_t5_t4

0xab1a,	// (0x0007f854) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x00084084) list_medium_line_x4_t5_t

0xaa04,	// (0x0007f73e) list_medium_line_t4_g4_g1_ParamLimits

0xaa04,	// (0x0007f73e) list_medium_line_t4_g4_g1

0xaaa4,	// (0x0007f7de) list_medium_line_t4_g4_g2_ParamLimits

0xaaa4,	// (0x0007f7de) list_medium_line_t4_g4_g2

0xab44,	// (0x0007f87e) list_medium_line_t4_g4_g3_ParamLimits

0xab44,	// (0x0007f87e) list_medium_line_t4_g4_g3

0xaa1c,	// (0x0007f756) list_medium_line_t4_g4_g4_ParamLimits

0xaa1c,	// (0x0007f756) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x0008408f) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x0008408f) list_medium_line_t4_g4_g

0xab50,	// (0x0007f88a) list_medium_line_t4_g4_t1_ParamLimits

0xab50,	// (0x0007f88a) list_medium_line_t4_g4_t1

0xab65,	// (0x0007f89f) list_medium_line_t4_g4_t2_ParamLimits

0xab65,	// (0x0007f89f) list_medium_line_t4_g4_t2

0xab7b,	// (0x0007f8b5) list_medium_line_t4_g4_t3_ParamLimits

0xab7b,	// (0x0007f8b5) list_medium_line_t4_g4_t3

0xaa3d,	// (0x0007f777) list_medium_line_t4_g4_t4_ParamLimits

0xaa3d,	// (0x0007f777) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x00084098) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x00084098) list_medium_line_t4_g4_t

0x4281,	// (0x00078fbb) chi_dic_find_pane_g1

0x58bb,	// (0x0007a5f5) main_tport_pane

0xce24,	// (0x00081b5e) list_medium_line_plain_t1

0xce3a,	// (0x00081b74) list_medium_line_t2_g2_g1_ParamLimits

0xce3a,	// (0x00081b74) list_medium_line_t2_g2_g1

0xce46,	// (0x00081b80) list_medium_line_t2_g2_g2_ParamLimits

0xce46,	// (0x00081b80) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x00084754) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x00084754) list_medium_line_t2_g2_g

0x0dbc,	// (0x00075af6) list_medium_line_t2_g2_t1_ParamLimits

0x0dbc,	// (0x00075af6) list_medium_line_t2_g2_t1

0x0dd6,	// (0x00075b10) list_medium_line_t2_g2_t2_ParamLimits

0x0dd6,	// (0x00075b10) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x00084759) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x00084759) list_medium_line_t2_g2_t

0xd168,	// (0x00081ea2) aid_sp_fs_list_icon_a_sm

0xf05b,	// (0x00083d95) aid_sp_fs_list_icon_d

0xd170,	// (0x00081eaa) aid_sp_fs_text_primary

0xd179,	// (0x00081eb3) aid_sp_fs_text_secondary

0xd182,	// (0x00081ebc) list_medium_line

0xd182,	// (0x00081ebc) list_medium_line_g2

0xd182,	// (0x00081ebc) list_medium_line_g3

0xd182,	// (0x00081ebc) list_medium_line_plain

0xd182,	// (0x00081ebc) list_medium_line_plain_t2

0xd182,	// (0x00081ebc) list_medium_line_plain_t3

0xd182,	// (0x00081ebc) list_medium_line_right_icon

0xd182,	// (0x00081ebc) list_medium_line_right_iconx2

0xd182,	// (0x00081ebc) list_medium_line_t2

0xd182,	// (0x00081ebc) list_medium_line_t2_g2

0xd182,	// (0x00081ebc) list_medium_line_t2_g3

0xd182,	// (0x00081ebc) list_medium_line_t2_right_icon

0xd182,	// (0x00081ebc) list_medium_line_t2_right_iconx2

0xd182,	// (0x00081ebc) list_medium_line_t3

0xd182,	// (0x00081ebc) list_medium_line_t3_g2

0xd182,	// (0x00081ebc) list_medium_line_t3_g3

0xd182,	// (0x00081ebc) list_medium_line_t3_right_iconx2

0xd18b,	// (0x00081ec5) list_medium_line_t4_g4

0xf063,	// (0x00083d9d) list_medium_line_x2

0xf063,	// (0x00083d9d) list_medium_line_x2_t2_g2

0xf063,	// (0x00083d9d) list_medium_line_x2_t2_g3

0xf063,	// (0x00083d9d) list_medium_line_x2_t2_g4

0xf063,	// (0x00083d9d) list_medium_line_x2_t3

0xf063,	// (0x00083d9d) list_medium_line_x2_t3_g2

0xf063,	// (0x00083d9d) list_medium_line_x2_t3_g3

0xf063,	// (0x00083d9d) list_medium_line_x2_t3_g4

0xf063,	// (0x00083d9d) list_medium_line_x2_t4_g2

0xf063,	// (0x00083d9d) list_medium_line_x2_t4_g4

0xd194,	// (0x00081ece) list_medium_line_x3

0xd194,	// (0x00081ece) list_medium_line_x3_t4

0xd194,	// (0x00081ece) list_medium_line_x3_t4_g4

0xd18b,	// (0x00081ec5) list_medium_line_x4_t4

0xd18b,	// (0x00081ec5) list_medium_line_x4_t4_g7

0xd18b,	// (0x00081ec5) list_medium_line_x4_t5

0xd19d,	// (0x00081ed7) list_single_fs_dyc_pane_ParamLimits

0xd19d,	// (0x00081ed7) list_single_fs_dyc_pane

0xaa04,	// (0x0007f73e) list_medium_line_x4_t4_g7_g1_ParamLimits

0xaa04,	// (0x0007f73e) list_medium_line_x4_t4_g7_g1

0xd6b6,	// (0x000823f0) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd6b6,	// (0x000823f0) list_medium_line_x4_t4_g7_g2

0xd6c2,	// (0x000823fc) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd6c2,	// (0x000823fc) list_medium_line_x4_t4_g7_g3

0xd6d1,	// (0x0008240b) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd6d1,	// (0x0008240b) list_medium_line_x4_t4_g7_g4

0xd6dd,	// (0x00082417) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd6dd,	// (0x00082417) list_medium_line_x4_t4_g7_g5

0xd6ec,	// (0x00082426) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd6ec,	// (0x00082426) list_medium_line_x4_t4_g7_g6

0xd6fb,	// (0x00082435) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd6fb,	// (0x00082435) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x00084924) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x00084924) list_medium_line_x4_t4_g7_g

0xd707,	// (0x00082441) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd707,	// (0x00082441) list_medium_line_x4_t4_g7_t1

0xd71c,	// (0x00082456) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd71c,	// (0x00082456) list_medium_line_x4_t4_g7_t2

0xd731,	// (0x0008246b) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd731,	// (0x0008246b) list_medium_line_x4_t4_g7_t3

0xd746,	// (0x00082480) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd746,	// (0x00082480) list_medium_line_x4_t4_g7_t4

0xd758,	// (0x00082492) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd758,	// (0x00082492) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x00084933) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x00084933) list_medium_line_x4_t4_g7_t

0xd76a,	// (0x000824a4) list_single_dyc_row_pane_ParamLimits

0xd76a,	// (0x000824a4) list_single_dyc_row_pane

0x99ac,	// (0x0007e6e6) call5_gesture_pane_ParamLimits

0x99ac,	// (0x0007e6e6) call5_gesture_pane

0x9a02,	// (0x0007e73c) call5_windows_pane_ParamLimits

0x9a02,	// (0x0007e73c) call5_windows_pane

0x9aa8,	// (0x0007e7e2) call5_swipe_1_pane_cp_ParamLimits

0x9aa8,	// (0x0007e7e2) call5_swipe_1_pane_cp

0x9ab4,	// (0x0007e7ee) call5_swipe_2_pane_cp_ParamLimits

0x9ab4,	// (0x0007e7ee) call5_swipe_2_pane_cp

0x4703,	// (0x0007943d) call5_image_pane_cp

0x9ac0,	// (0x0007e7fa) popup_call5_audio_first_window_cp_ParamLimits

0x9ac0,	// (0x0007e7fa) popup_call5_audio_first_window_cp

0xddac,	// (0x00082ae6) call5_swipe_1_pane_g1_cp_ParamLimits

0xddac,	// (0x00082ae6) call5_swipe_1_pane_g1_cp

0xddec,	// (0x00082b26) call5_swipe_1_pane_g2_cp

0xddc5,	// (0x00082aff) call5_swipe_1_pane_t1_cp_ParamLimits

0xddc5,	// (0x00082aff) call5_swipe_1_pane_t1_cp

0xddac,	// (0x00082ae6) call5_swipe_2_pane_g1_cp_ParamLimits

0xddac,	// (0x00082ae6) call5_swipe_2_pane_g1_cp

0xddf4,	// (0x00082b2e) call5_swipe_2_pane_g2_cp

0xddfc,	// (0x00082b36) call5_swipe_2_pane_t1_cp_ParamLimits

0xddfc,	// (0x00082b36) call5_swipe_2_pane_t1_cp

0xa8e4,	// (0x0007f61e) main_sp_fs_email_pane

0xde11,	// (0x00082b4b) main_sp_fs_listscroll_pane_te

0xde1a,	// (0x00082b54) popup_sp_fs_action_menu_pane_ParamLimits

0xde1a,	// (0x00082b54) popup_sp_fs_action_menu_pane

0xc13b,	// (0x00080e75) bg_sp_fs_ctrlbar_pane_g1

0xde5c,	// (0x00082b96) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xde65,	// (0x00082b9f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xde6e,	// (0x00082ba8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc13b,	// (0x00080e75) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x00084a1c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbf1e,	// (0x00080c58) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbf1e,	// (0x00080c58) bg_sp_fs_ctrlbar_ddmenu_pane

0xde77,	// (0x00082bb1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xde77,	// (0x00082bb1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xde83,	// (0x00082bbd) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xde83,	// (0x00082bbd) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x00084a25) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x00084a25) main_sp_fs_ctrlbar_ddmenu_pane_g

0xde8f,	// (0x00082bc9) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xde8f,	// (0x00082bc9) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xdea9,	// (0x00082be3) list_medium_line_t2_right_icon_g1

0x0f52,	// (0x00075c8c) list_medium_line_t2_right_icon_t1

0x0f62,	// (0x00075c9c) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x00084a2a) list_medium_line_t2_right_icon_t

0xbca0,	// (0x000809da) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbca0,	// (0x000809da) bg_sp_fs_ctrlbar_pane

0x9b17,	// (0x0007e851) main_sp_fs_ctrlbar_button_pane_cp01

0x9b21,	// (0x0007e85b) main_sp_fs_ctrlbar_ddmenu_pane

0xdee9,	// (0x00082c23) main_sp_fs_ctrlbar_pane_g1

0xdef5,	// (0x00082c2f) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x00084a2f) main_sp_fs_ctrlbar_pane_g

0xdf01,	// (0x00082c3b) main_sp_fs_ctrlbar_pane_t1

0x0f74,	// (0x00075cae) main_sp_fs_ctrlbar_pane

0x0f98,	// (0x00075cd2) main_sp_fs_listscroll_pane_te_cp01

0x0fb8,	// (0x00075cf2) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0fb8,	// (0x00075cf2) popup_sp_fs_action_menu_pane_cp01

0xa8e4,	// (0x0007f61e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa8e4,	// (0x0007f61e) bg_sp_fs_highlight_list_pane_cp01

0xdf26,	// (0x00082c60) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdf26,	// (0x00082c60) sp_fs_action_menu_list_gene_pane_g1

0xdf35,	// (0x00082c6f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdf35,	// (0x00082c6f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00084a39) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00084a39) sp_fs_action_menu_list_gene_pane_g

0xdf42,	// (0x00082c7c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdf42,	// (0x00082c7c) sp_fs_action_menu_list_gene_pane_t1

0xdf5a,	// (0x00082c94) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdf5a,	// (0x00082c94) sp_fs_action_menu_list_gene_pane

0xdf79,	// (0x00082cb3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdf79,	// (0x00082cb3) popup_sp_fs_action_menu_bg_pane

0xdf87,	// (0x00082cc1) sp_fs_action_menu_list_pane_ParamLimits

0xdf87,	// (0x00082cc1) sp_fs_action_menu_list_pane

0xdfa7,	// (0x00082ce1) sp_fs_scroll_pane_cp01_ParamLimits

0xdfa7,	// (0x00082ce1) sp_fs_scroll_pane_cp01

0x0fd2,	// (0x00075d0c) list_medium_line_plain_t2_t1

0x0fe2,	// (0x00075d1c) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x00084a3e) list_medium_line_plain_t2_t

0x0ff2,	// (0x00075d2c) list_medium_line_plain_t3_t1

0x1002,	// (0x00075d3c) list_medium_line_plain_t3_t2

0x1010,	// (0x00075d4a) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x00084a43) list_medium_line_plain_t3_t

0xaa04,	// (0x0007f73e) list_medium_line_x2_t2_g2_g1_ParamLimits

0xaa04,	// (0x0007f73e) list_medium_line_x2_t2_g2_g1

0xaa1c,	// (0x0007f756) list_medium_line_x2_t2_g2_g2_ParamLimits

0xaa1c,	// (0x0007f756) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x00083f9f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x00083f9f) list_medium_line_x2_t2_g2_g

0xab50,	// (0x0007f88a) list_medium_line_x2_t2_g2_t1_ParamLimits

0xab50,	// (0x0007f88a) list_medium_line_x2_t2_g2_t1

0xaa3d,	// (0x0007f777) list_medium_line_x2_t2_g2_t2_ParamLimits

0xaa3d,	// (0x0007f777) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00084a4a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00084a4a) list_medium_line_x2_t2_g2_t

0xaa04,	// (0x0007f73e) list_medium_line_x2_t4_g2_g1_ParamLimits

0xaa04,	// (0x0007f73e) list_medium_line_x2_t4_g2_g1

0xdfcd,	// (0x00082d07) list_medium_line_x2_t4_g2_g2_ParamLimits

0xdfcd,	// (0x00082d07) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x00084a4f) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x00084a4f) list_medium_line_x2_t4_g2_g

0x101e,	// (0x00075d58) list_medium_line_x2_t4_g2_t1_ParamLimits

0x101e,	// (0x00075d58) list_medium_line_x2_t4_g2_t1

0x1035,	// (0x00075d6f) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1035,	// (0x00075d6f) list_medium_line_x2_t4_g2_t2

0x104a,	// (0x00075d84) list_medium_line_x2_t4_g2_t3_ParamLimits

0x104a,	// (0x00075d84) list_medium_line_x2_t4_g2_t3

0xaa3d,	// (0x0007f777) list_medium_line_x2_t4_g2_t4_ParamLimits

0xaa3d,	// (0x0007f777) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x00084a54) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x00084a54) list_medium_line_x2_t4_g2_t

0xdfdf,	// (0x00082d19) list_medium_line_t3_right_iconx2_g1

0xdea9,	// (0x00082be3) list_medium_line_t3_right_iconx2_g2

0x105c,	// (0x00075d96) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x00084a5d) list_medium_line_t3_right_iconx2_g

0x1066,	// (0x00075da0) list_medium_line_t3_right_iconx2_t1

0x1076,	// (0x00075db0) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x00084a64) list_medium_line_t3_right_iconx2_t

0xaa04,	// (0x0007f73e) list_medium_line_x3_t4_g4_g1_ParamLimits

0xaa04,	// (0x0007f73e) list_medium_line_x3_t4_g4_g1

0xaa10,	// (0x0007f74a) list_medium_line_x3_t4_g4_g2_ParamLimits

0xaa10,	// (0x0007f74a) list_medium_line_x3_t4_g4_g2

0xaaa4,	// (0x0007f7de) list_medium_line_x3_t4_g4_g3_ParamLimits

0xaaa4,	// (0x0007f7de) list_medium_line_x3_t4_g4_g3

0xdfe7,	// (0x00082d21) list_medium_line_x3_t4_g4_g4_ParamLimits

0xdfe7,	// (0x00082d21) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x00084a69) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x00084a69) list_medium_line_x3_t4_g4_g

0x1084,	// (0x00075dbe) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1084,	// (0x00075dbe) list_medium_line_x3_t4_g4_t1

0x109b,	// (0x00075dd5) list_medium_line_x3_t4_g4_t2_ParamLimits

0x109b,	// (0x00075dd5) list_medium_line_x3_t4_g4_t2

0xdff3,	// (0x00082d2d) list_medium_line_x3_t4_g4_t3_ParamLimits

0xdff3,	// (0x00082d2d) list_medium_line_x3_t4_g4_t3

0xe008,	// (0x00082d42) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe008,	// (0x00082d42) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x00084a72) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x00084a72) list_medium_line_x3_t4_g4_t

0x10b6,	// (0x00075df0) list_single_dyc_row_text_pane_t1_ParamLimits

0x10b6,	// (0x00075df0) list_single_dyc_row_text_pane_t1

0x10ff,	// (0x00075e39) list_single_dyc_row_text_pane_t2_ParamLimits

0x10ff,	// (0x00075e39) list_single_dyc_row_text_pane_t2

0xe025,	// (0x00082d5f) list_single_dyc_row_text_pane_t3_ParamLimits

0xe025,	// (0x00082d5f) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x00084a7b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x00084a7b) list_single_dyc_row_text_pane_t

0xe037,	// (0x00082d71) list_single_dyc_row_pane_g1_ParamLimits

0xe037,	// (0x00082d71) list_single_dyc_row_pane_g1

0xe043,	// (0x00082d7d) list_single_dyc_row_pane_g2_ParamLimits

0xe043,	// (0x00082d7d) list_single_dyc_row_pane_g2

0xe04f,	// (0x00082d89) list_single_dyc_row_pane_g3_ParamLimits

0xe04f,	// (0x00082d89) list_single_dyc_row_pane_g3

0xe05b,	// (0x00082d95) list_single_dyc_row_pane_g4_ParamLimits

0xe05b,	// (0x00082d95) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x00084a82) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x00084a82) list_single_dyc_row_pane_g

0xe067,	// (0x00082da1) list_single_dyc_row_text_pane_ParamLimits

0xe067,	// (0x00082da1) list_single_dyc_row_text_pane

0xa86c,	// (0x0007f5a6) bg_sp_fs_scroll_pane

0xe086,	// (0x00082dc0) thumb_sp_fs_scroll_pane

0xce3a,	// (0x00081b74) list_medium_line_g1_ParamLimits

0xce3a,	// (0x00081b74) list_medium_line_g1

0xe08f,	// (0x00082dc9) list_medium_line_t1_ParamLimits

0xe08f,	// (0x00082dc9) list_medium_line_t1

0xaa04,	// (0x0007f73e) list_medium_line_x2_g1_ParamLimits

0xaa04,	// (0x0007f73e) list_medium_line_x2_g1

0xaa10,	// (0x0007f74a) list_medium_line_x2_g2_ParamLimits

0xaa10,	// (0x0007f74a) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x00084a8b) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x00084a8b) list_medium_line_x2_g

0xe0a4,	// (0x00082dde) list_medium_line_x2_t1_ParamLimits

0xe0a4,	// (0x00082dde) list_medium_line_x2_t1

0xaa04,	// (0x0007f73e) list_medium_line_x3_g1_ParamLimits

0xaa04,	// (0x0007f73e) list_medium_line_x3_g1

0xaa10,	// (0x0007f74a) list_medium_line_x3_g2_ParamLimits

0xaa10,	// (0x0007f74a) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x00084a8b) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x00084a8b) list_medium_line_x3_g

0xe0a4,	// (0x00082dde) list_medium_line_x3_t1_ParamLimits

0xe0a4,	// (0x00082dde) list_medium_line_x3_t1

0xe0ba,	// (0x00082df4) thumb_sp_fs_scroll_pane_g1

0xe0c3,	// (0x00082dfd) thumb_sp_fs_scroll_pane_g2

0xe0cc,	// (0x00082e06) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x00084a90) thumb_sp_fs_scroll_pane_g

0xe0ba,	// (0x00082df4) bg_sp_fs_scroll_pane_g1

0xe0c3,	// (0x00082dfd) bg_sp_fs_scroll_pane_g2

0xe0cc,	// (0x00082e06) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x00084a90) bg_sp_fs_scroll_pane_g

0xaa04,	// (0x0007f73e) list_medium_line_x2_t3_g4_g1_ParamLimits

0xaa04,	// (0x0007f73e) list_medium_line_x2_t3_g4_g1

0xaa98,	// (0x0007f7d2) list_medium_line_x2_t3_g4_g2_ParamLimits

0xaa98,	// (0x0007f7d2) list_medium_line_x2_t3_g4_g2

0xaa10,	// (0x0007f74a) list_medium_line_x2_t3_g4_g3_ParamLimits

0xaa10,	// (0x0007f74a) list_medium_line_x2_t3_g4_g3

0xaa1c,	// (0x0007f756) list_medium_line_x2_t3_g4_g4_ParamLimits

0xaa1c,	// (0x0007f756) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x0008401b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x0008401b) list_medium_line_x2_t3_g4_g

0x1159,	// (0x00075e93) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1159,	// (0x00075e93) list_medium_line_x2_t3_g4_t1

0x1173,	// (0x00075ead) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1173,	// (0x00075ead) list_medium_line_x2_t3_g4_t2

0xaa3d,	// (0x0007f777) list_medium_line_x2_t3_g4_t3_ParamLimits

0xaa3d,	// (0x0007f777) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x00084a97) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x00084a97) list_medium_line_x2_t3_g4_t

0xce3a,	// (0x00081b74) list_medium_line_g2_g1_ParamLimits

0xce3a,	// (0x00081b74) list_medium_line_g2_g1

0xce46,	// (0x00081b80) list_medium_line_g2_g2_ParamLimits

0xce46,	// (0x00081b80) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x00084754) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x00084754) list_medium_line_g2_g

0xe0d5,	// (0x00082e0f) list_medium_line_g2_t1_ParamLimits

0xe0d5,	// (0x00082e0f) list_medium_line_g2_t1

0xce3a,	// (0x00081b74) list_medium_line_t3_g2_g1_ParamLimits

0xce3a,	// (0x00081b74) list_medium_line_t3_g2_g1

0xce46,	// (0x00081b80) list_medium_line_t3_g2_g2_ParamLimits

0xce46,	// (0x00081b80) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x00084754) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x00084754) list_medium_line_t3_g2_g

0x118c,	// (0x00075ec6) list_medium_line_t3_g2_t1_ParamLimits

0x118c,	// (0x00075ec6) list_medium_line_t3_g2_t1

0x11a3,	// (0x00075edd) list_medium_line_t3_g2_t2_ParamLimits

0x11a3,	// (0x00075edd) list_medium_line_t3_g2_t2

0x11b8,	// (0x00075ef2) list_medium_line_t3_g2_t3_ParamLimits

0x11b8,	// (0x00075ef2) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x00084a9e) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x00084a9e) list_medium_line_t3_g2_t

0xdea9,	// (0x00082be3) list_medium_line_right_icon_g1

0xe0ea,	// (0x00082e24) list_medium_line_right_icon_t1

0xce3a,	// (0x00081b74) list_medium_line_t2_g1_ParamLimits

0xce3a,	// (0x00081b74) list_medium_line_t2_g1

0x11d1,	// (0x00075f0b) list_medium_line_t2_t1_ParamLimits

0x11d1,	// (0x00075f0b) list_medium_line_t2_t1

0x11eb,	// (0x00075f25) list_medium_line_t2_t2_ParamLimits

0x11eb,	// (0x00075f25) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x00084aa5) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x00084aa5) list_medium_line_t2_t

0xce3a,	// (0x00081b74) list_medium_line_t3_g1_ParamLimits

0xce3a,	// (0x00081b74) list_medium_line_t3_g1

0x1204,	// (0x00075f3e) list_medium_line_t3_t1_ParamLimits

0x1204,	// (0x00075f3e) list_medium_line_t3_t1

0x121e,	// (0x00075f58) list_medium_line_t3_t2_ParamLimits

0x121e,	// (0x00075f58) list_medium_line_t3_t2

0x1233,	// (0x00075f6d) list_medium_line_t3_t3_ParamLimits

0x1233,	// (0x00075f6d) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x00084aaa) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x00084aaa) list_medium_line_t3_t

0xce3a,	// (0x00081b74) list_medium_line_g3_g1_ParamLimits

0xce3a,	// (0x00081b74) list_medium_line_g3_g1

0xe0f8,	// (0x00082e32) list_medium_line_g3_g2_ParamLimits

0xe0f8,	// (0x00082e32) list_medium_line_g3_g2

0xce46,	// (0x00081b80) list_medium_line_g3_g3_ParamLimits

0xce46,	// (0x00081b80) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x00084ab1) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x00084ab1) list_medium_line_g3_g

0xe104,	// (0x00082e3e) list_medium_line_g3_t1_ParamLimits

0xe104,	// (0x00082e3e) list_medium_line_g3_t1

0xce3a,	// (0x00081b74) list_medium_line_t2_g3_g1_ParamLimits

0xce3a,	// (0x00081b74) list_medium_line_t2_g3_g1

0xe0f8,	// (0x00082e32) list_medium_line_t2_g3_g2_ParamLimits

0xe0f8,	// (0x00082e32) list_medium_line_t2_g3_g2

0xce46,	// (0x00081b80) list_medium_line_t2_g3_g3_ParamLimits

0xce46,	// (0x00081b80) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x00084ab1) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x00084ab1) list_medium_line_t2_g3_g

0x1248,	// (0x00075f82) list_medium_line_t2_g3_t1_ParamLimits

0x1248,	// (0x00075f82) list_medium_line_t2_g3_t1

0x125f,	// (0x00075f99) list_medium_line_t2_g3_t2_ParamLimits

0x125f,	// (0x00075f99) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x00084ab8) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x00084ab8) list_medium_line_t2_g3_t

0xce3a,	// (0x00081b74) list_medium_line_t3_g3_g1_ParamLimits

0xce3a,	// (0x00081b74) list_medium_line_t3_g3_g1

0xe0f8,	// (0x00082e32) list_medium_line_t3_g3_g2_ParamLimits

0xe0f8,	// (0x00082e32) list_medium_line_t3_g3_g2

0xce46,	// (0x00081b80) list_medium_line_t3_g3_g3_ParamLimits

0xce46,	// (0x00081b80) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x00084ab1) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x00084ab1) list_medium_line_t3_g3_g

0x127a,	// (0x00075fb4) list_medium_line_t3_g3_t1_ParamLimits

0x127a,	// (0x00075fb4) list_medium_line_t3_g3_t1

0x1293,	// (0x00075fcd) list_medium_line_t3_g3_t2_ParamLimits

0x1293,	// (0x00075fcd) list_medium_line_t3_g3_t2

0x12a9,	// (0x00075fe3) list_medium_line_t3_g3_t3_ParamLimits

0x12a9,	// (0x00075fe3) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x00084abd) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x00084abd) list_medium_line_t3_g3_t

0xdfdf,	// (0x00082d19) list_medium_line_right_iconx2_g1

0xdea9,	// (0x00082be3) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x00084ac4) list_medium_line_right_iconx2_g

0xe119,	// (0x00082e53) list_medium_line_right_iconx2_t1

0xdfdf,	// (0x00082d19) list_medium_line_t2_right_iconx2_g1

0xdea9,	// (0x00082be3) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x00084ac4) list_medium_line_t2_right_iconx2_g

0x12c3,	// (0x00075ffd) list_medium_line_t2_right_iconx2_t1

0x12d3,	// (0x0007600d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x00084ac9) list_medium_line_t2_right_iconx2_t

0xe127,	// (0x00082e61) list_medium_line_x4_t4_t1

0x12e5,	// (0x0007601f) list_medium_line_x4_t4_t2

0x12f5,	// (0x0007602f) list_medium_line_x4_t4_t3

0x1305,	// (0x0007603f) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x00084ace) list_medium_line_x4_t4_t

0x9b6e,	// (0x0007e8a8) tport_appsw_pane_ParamLimits

0x9b6e,	// (0x0007e8a8) tport_appsw_pane

0x9b7f,	// (0x0007e8b9) tport_contact_pane_ParamLimits

0x9b7f,	// (0x0007e8b9) tport_contact_pane

0x9b98,	// (0x0007e8d2) tport_listscroll_pane_ParamLimits

0x9b98,	// (0x0007e8d2) tport_listscroll_pane

0x9bb3,	// (0x0007e8ed) cell_tport_appsw_pane_ParamLimits

0x9bb3,	// (0x0007e8ed) cell_tport_appsw_pane

0xcba8,	// (0x000818e2) tport_appsw_pane_g1_ParamLimits

0xcba8,	// (0x000818e2) tport_appsw_pane_g1

0xe135,	// (0x00082e6f) tport_contact_pane_g1

0xe13e,	// (0x00082e78) tport_contact_pane_t1

0xe14c,	// (0x00082e86) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x00084ad7) tport_contact_pane_t

0xe15a,	// (0x00082e94) list_tport_pane

0xe163,	// (0x00082e9d) scroll_pane_cp_030

0xe174,	// (0x00082eae) cell_tport_appsw_pane_g1

0xe184,	// (0x00082ebe) cell_tport_appsw_pane_t1

0xa86c,	// (0x0007f5a6) grid_highlight_pane_cp019

0x9bf3,	// (0x0007e92d) list_tport_double_graphic_pane_ParamLimits

0x9bf3,	// (0x0007e92d) list_tport_double_graphic_pane

0xa8e4,	// (0x0007f61e) list_highlight_pane_cp023_ParamLimits

0xa8e4,	// (0x0007f61e) list_highlight_pane_cp023

0x9c00,	// (0x0007e93a) list_tport_double_graphic_pane_g1_ParamLimits

0x9c00,	// (0x0007e93a) list_tport_double_graphic_pane_g1

0x9c0d,	// (0x0007e947) list_tport_double_graphic_pane_t1_ParamLimits

0x9c0d,	// (0x0007e947) list_tport_double_graphic_pane_t1

0x9c22,	// (0x0007e95c) list_tport_double_graphic_pane_t2_ParamLimits

0x9c22,	// (0x0007e95c) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x00084ae3) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x00084ae3) list_tport_double_graphic_pane_t

0xa86c,	// (0x0007f5a6) main_cale_note_pane

0x802c,	// (0x0007cd66) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x802c,	// (0x0007cd66) cell_vitu2_function_top_wide_pane_cp01

0x96e8,	// (0x0007e422) wait_bar_pane_cp05_ParamLimits

0xa86c,	// (0x0007f5a6) listscroll_cmail_pane

0xe19a,	// (0x00082ed4) list_cmail_pane

0x9c3e,	// (0x0007e978) list_cmail_body_pane

0x9c53,	// (0x0007e98d) list_single_cmail_header_caption_pane

0x9c6c,	// (0x0007e9a6) list_single_cmail_header_detail_pane_ParamLimits

0x9c6c,	// (0x0007e9a6) list_single_cmail_header_detail_pane

0x9c95,	// (0x0007e9cf) list_single_cmail_header_caption_pane_t1

0x1315,	// (0x0007604f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1315,	// (0x0007604f) list_single_cmail_header_detail_pane_g1

0xf0a7,	// (0x00083de1) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf0a7,	// (0x00083de1) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x00084ae8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x00084ae8) list_single_cmail_header_detail_pane_g

0xe1c7,	// (0x00082f01) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe1c7,	// (0x00082f01) list_single_cmail_header_detail_pane_t1

0xe1f9,	// (0x00082f33) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe1f9,	// (0x00082f33) list_single_cmail_header_editor_pane_bg

0xe20b,	// (0x00082f45) list_cmail_body_pane_g1

0xe214,	// (0x00082f4e) list_cmail_body_pane_t1

0xcbe5,	// (0x0008191f) list_single_cmail_header_editor_pane_bg_g1

0x329e,	// (0x00077fd8) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcbf5,	// (0x0008192f) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcbed,	// (0x00081927) list_single_cmail_header_editor_pane_bg_g1_copy3

0xce32,	// (0x00081b6c) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcc15,	// (0x0008194f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcc05,	// (0x0008193f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcc0d,	// (0x00081947) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x327e,	// (0x00077fb8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9ca5,	// (0x0007e9df) calenote_gesture_pane_ParamLimits

0x9ca5,	// (0x0007e9df) calenote_gesture_pane

0x9cc5,	// (0x0007e9ff) calenote_window_pane_ParamLimits

0x9cc5,	// (0x0007e9ff) calenote_window_pane

0xe222,	// (0x00082f5c) popup_note_window_cp01

0x9ce1,	// (0x0007ea1b) calenote_swipe_1_pane_ParamLimits

0x9ce1,	// (0x0007ea1b) calenote_swipe_1_pane

0x9ab4,	// (0x0007e7ee) calenote_swipe_2_pane_ParamLimits

0x9ab4,	// (0x0007e7ee) calenote_swipe_2_pane

0xddac,	// (0x00082ae6) calenote_swipe_1_pane_g1_ParamLimits

0xddac,	// (0x00082ae6) calenote_swipe_1_pane_g1

0xddb9,	// (0x00082af3) calenote_swipe_1_pane_g2_ParamLimits

0xddb9,	// (0x00082af3) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x00084a12) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x00084a12) calenote_swipe_1_pane_g

0xe234,	// (0x00082f6e) calenote_swipe_1_pane_t1_ParamLimits

0xe234,	// (0x00082f6e) calenote_swipe_1_pane_t1

0xddac,	// (0x00082ae6) calenote_swipe_2_pane_g1_ParamLimits

0xddac,	// (0x00082ae6) calenote_swipe_2_pane_g1

0xe253,	// (0x00082f8d) calenote_swipe_2_pane_g2_ParamLimits

0xe253,	// (0x00082f8d) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x00084af4) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x00084af4) calenote_swipe_2_pane_g

0xe25f,	// (0x00082f99) calenote_swipe_2_pane_t1_ParamLimits

0xe25f,	// (0x00082f99) calenote_swipe_2_pane_t1

0xa86c,	// (0x0007f5a6) main_mup_navstr_pane

0x6c83,	// (0x0007b9bd) main_mup3_pane_t7_ParamLimits

0x6c83,	// (0x0007b9bd) main_mup3_pane_t7

0xed30,	// (0x00083a6a) main_mp4_pane_g6_ParamLimits

0xed30,	// (0x00083a6a) main_mp4_pane_g6

0xeed4,	// (0x00083c0e) main_image3_pane_t4_ParamLimits

0xeed4,	// (0x00083c0e) main_image3_pane_t4

0x9cf6,	// (0x0007ea30) popup_navstr_preview_pane_ParamLimits

0x9cf6,	// (0x0007ea30) popup_navstr_preview_pane

0x9d0a,	// (0x0007ea44) scroll_navstr_pane_ParamLimits

0x9d0a,	// (0x0007ea44) scroll_navstr_pane

0xa86c,	// (0x0007f5a6) bg_popup_preview_window_pane_cp04

0xe286,	// (0x00082fc0) popup_navstr_preview_pane_t1

0x9d1e,	// (0x0007ea58) scroll_navstr_pane_g1_ParamLimits

0x9d1e,	// (0x0007ea58) scroll_navstr_pane_g1

0x9d32,	// (0x0007ea6c) scroll_navstr_pane_t1_ParamLimits

0x9d32,	// (0x0007ea6c) scroll_navstr_pane_t1

0xe22b,	// (0x00082f65) bg_button_pane_cp014

0xe22b,	// (0x00082f65) bg_button_pane_cp030

0xdd21,	// (0x00082a5b) list_double_fisheye_pane_g4_ParamLimits

0xdd21,	// (0x00082a5b) list_double_fisheye_pane_g4

0xf096,	// (0x00083dd0) list_double_fisheye_pane_g5_ParamLimits

0xf096,	// (0x00083dd0) list_double_fisheye_pane_g5

0xe1a2,	// (0x00082edc) sp_fs_scroll_pane_cp03

0xdee9,	// (0x00082c23) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdef5,	// (0x00082c2f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x00084a2f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdf01,	// (0x00082c3b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9c34,	// (0x0007e96e) sp_fs_scroll_pane_cp02

0x24a6,	// (0x000771e0) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x24a6,	// (0x000771e0) popup_sp_fs_calendar_preview_list_single_pane

0xa86c,	// (0x0007f5a6) main_cam6_pano_pane

0xa8e4,	// (0x0007f61e) main_mup3_pane_ParamLimits

0xa86c,	// (0x0007f5a6) main_phacti_pane

0x95bb,	// (0x0007e2f5) bg_button_pane_cp11

0x95d5,	// (0x0007e30f) main_mobtv_info_pane_g2_ParamLimits

0x95d5,	// (0x0007e30f) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x0008498f) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x0008498f) main_mobtv_info_pane_g

0x97b2,	// (0x0007e4ec) sc_clock_pane_t5_ParamLimits

0x97b2,	// (0x0007e4ec) sc_clock_pane_t5

0x983d,	// (0x0007e577) main_radioblah_pane_g1_ParamLimits

0xdca3,	// (0x000829dd) main_radioblah_pane_t3_ParamLimits

0xdca3,	// (0x000829dd) main_radioblah_pane_t3

0xdcbb,	// (0x000829f5) main_radioblah_pane_t4_ParamLimits

0xdcbb,	// (0x000829f5) main_radioblah_pane_t4

0x9865,	// (0x0007e59f) main_radioblah_text_pane_ParamLimits

0x9865,	// (0x0007e59f) main_radioblah_text_pane

0x9877,	// (0x0007e5b1) main_radioblah_info_pane_g1_ParamLimits

0x9912,	// (0x0007e64c) main_radioblah_info_pane_t4_ParamLimits

0x9912,	// (0x0007e64c) main_radioblah_info_pane_t4

0xa8e4,	// (0x0007f61e) main_sp_fs_calendar_pane

0x9d48,	// (0x0007ea82) main_phacti_pane_g1

0x9d50,	// (0x0007ea8a) phacti_note_pane_ParamLimits

0x9d50,	// (0x0007ea8a) phacti_note_pane

0xe29d,	// (0x00082fd7) phacti_term_pane_ParamLimits

0xe29d,	// (0x00082fd7) phacti_term_pane

0xe2b2,	// (0x00082fec) phacti_note_pane_t1_ParamLimits

0xe2b2,	// (0x00082fec) phacti_note_pane_t1

0xe2c9,	// (0x00083003) phacti_term_pane_g1

0xe2d1,	// (0x0008300b) phacti_term_pane_t1_ParamLimits

0xe2d1,	// (0x0008300b) phacti_term_pane_t1

0xe2fb,	// (0x00083035) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe303,	// (0x0008303d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x00084afe) popup_sp_fs_calendar_preview_list_single_pane_g

0xe30b,	// (0x00083045) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe30b,	// (0x00083045) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe321,	// (0x0008305b) aid_popup_sp_fs_bg_corner_pane

0xc13b,	// (0x00080e75) popup_sp_fs_calendar_preview_bg_pane_g1

0xa86c,	// (0x0007f5a6) popup_sp_fs_calendar_preview_bg_pane

0xe329,	// (0x00083063) popup_sp_fs_calendar_preview_list_pane

0xa8e4,	// (0x0007f61e) bg_main_sp_fs_cale_pane_ParamLimits

0xa8e4,	// (0x0007f61e) bg_main_sp_fs_cale_pane

0xe33a,	// (0x00083074) listscroll_cale_mrui_pane_ParamLimits

0xe33a,	// (0x00083074) listscroll_cale_mrui_pane

0xe34e,	// (0x00083088) listscroll_sp_fs_schedule_track_pane

0xe357,	// (0x00083091) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe357,	// (0x00083091) main_sp_fs_ctrlbar_pane_cp01

0xe368,	// (0x000830a2) main_sp_fs_ribbon_pane

0xe370,	// (0x000830aa) popup_sp_fs_cale_preview_window

0x9dab,	// (0x0007eae5) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9dab,	// (0x0007eae5) list_single_sp_fs_schedule_track_pane

0xa8e4,	// (0x0007f61e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa8e4,	// (0x0007f61e) bg_sp_fs_highlight_list_pane_cp03

0x9dc0,	// (0x0007eafa) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9dc0,	// (0x0007eafa) list_single_sp_fs_schedule_track_pane_g1

0x9dcc,	// (0x0007eb06) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9dcc,	// (0x0007eb06) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x00084b03) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x00084b03) list_single_sp_fs_schedule_track_pane_g

0x9dd8,	// (0x0007eb12) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9dd8,	// (0x0007eb12) list_single_sp_fs_schedule_track_pane_t1

0x9df2,	// (0x0007eb2c) sp_fs_schedule_track_pane_ParamLimits

0x9df2,	// (0x0007eb2c) sp_fs_schedule_track_pane

0xe382,	// (0x000830bc) sp_fs_schedule_track_pane_g1

0xe38a,	// (0x000830c4) sp_fs_schedule_track_pane_g2

0xe392,	// (0x000830cc) sp_fs_schedule_track_pane_g3

0xe39a,	// (0x000830d4) sp_fs_schedule_track_pane_g4

0xe3a2,	// (0x000830dc) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x00084b08) sp_fs_schedule_track_pane_g

0xcbe5,	// (0x0008191f) bg_sp_fs_schedule_viewer_highlight_g1

0x329e,	// (0x00077fd8) bg_sp_fs_schedule_viewer_highlight_g2

0xcbed,	// (0x00081927) bg_sp_fs_schedule_viewer_highlight_g3

0xcbf5,	// (0x0008192f) bg_sp_fs_schedule_viewer_highlight_g4

0xce32,	// (0x00081b6c) bg_sp_fs_schedule_viewer_highlight_g5

0xcc05,	// (0x0008193f) bg_sp_fs_schedule_viewer_highlight_g6

0xcc0d,	// (0x00081947) bg_sp_fs_schedule_viewer_highlight_g7

0xcc15,	// (0x0008194f) bg_sp_fs_schedule_viewer_highlight_g8

0x327e,	// (0x00077fb8) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x00084b13) bg_sp_fs_schedule_viewer_highlight_g

0xa86c,	// (0x0007f5a6) bg_main_sp_fs_ribbon_pane

0x9e03,	// (0x0007eb3d) main_sp_fs_ribbon_pane_g1

0xe3aa,	// (0x000830e4) main_sp_fs_ribbon_pane_t1

0x9e0c,	// (0x0007eb46) main_sp_fs_ribbon_pane_t2

0xe3b9,	// (0x000830f3) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x00084b26) main_sp_fs_ribbon_pane_t

0xe3c8,	// (0x00083102) main_sp_fs_ribbon_scheduler_pane

0xe3d0,	// (0x0008310a) bg_main_sp_fs_ribbon_pane_g1

0xe3d9,	// (0x00083113) bg_main_sp_fs_ribbon_pane_g2

0xe3e2,	// (0x0008311c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x00084b2d) bg_main_sp_fs_ribbon_pane_g

0xe3ea,	// (0x00083124) main_sp_fs_ribbon_scheduler_pane_g1

0xe3f3,	// (0x0008312d) main_sp_fs_ribbon_scheduler_pane_g2

0xe3fc,	// (0x00083136) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x00084b34) main_sp_fs_ribbon_scheduler_pane_g

0xe405,	// (0x0008313f) list_cale_mrui_pane

0x9e1b,	// (0x0007eb55) sp_fs_scroll_pane_cp07_ParamLimits

0x9e1b,	// (0x0007eb55) sp_fs_scroll_pane_cp07

0x9e2f,	// (0x0007eb69) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9e2f,	// (0x0007eb69) bg_sp_fs_schedule_viewer_highlight

0xe40e,	// (0x00083148) list_single_sp_fs_schedule_track_pane_cp01

0xe416,	// (0x00083150) list_sp_fs_schedule_track_pane

0xe41e,	// (0x00083158) sp_fs_scroll_pane_cp06_ParamLimits

0xe41e,	// (0x00083158) sp_fs_scroll_pane_cp06

0xc13b,	// (0x00080e75) bgmain_sp_fs_calendar_pane_g1

0x1353,	// (0x0007608d) list_single_cale_mrui_pane_ParamLimits

0x1353,	// (0x0007608d) list_single_cale_mrui_pane

0xe430,	// (0x0008316a) list_single_cale_mrui_row_pane_ParamLimits

0xe430,	// (0x0008316a) list_single_cale_mrui_row_pane

0xe43d,	// (0x00083177) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe43d,	// (0x00083177) list_single_cale_mrui_row_pane_g1

0xe482,	// (0x000831bc) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe482,	// (0x000831bc) list_single_cale_mrui_row_pane_t1

0x1375,	// (0x000760af) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1375,	// (0x000760af) list_single_cale_mrui_row_pane_t2

0xe494,	// (0x000831ce) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe494,	// (0x000831ce) list_single_cale_mrui_row_pane_t3

0xe4c3,	// (0x000831fd) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe4c3,	// (0x000831fd) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe08,	// (0x00084b42) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe08,	// (0x00084b42) list_single_cale_mrui_row_pane_t

0x13dd,	// (0x00076117) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x13dd,	// (0x00076117) list_single_cmail_header_editor_pane_bg_cp01

0x1403,	// (0x0007613d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1403,	// (0x0007613d) list_single_cmail_header_editor_pane_bg_cp02

0x9e3f,	// (0x0007eb79) main_radioblah_text_pane_t1_ParamLimits

0x9e3f,	// (0x0007eb79) main_radioblah_text_pane_t1

0xe4f2,	// (0x0008322c) cam6_indi_pane_cp01

0xe4fa,	// (0x00083234) cam6_mode_pane_cp01

0xe502,	// (0x0008323c) cam6_pano_pane

0xe50b,	// (0x00083245) cam6_zoom_pane_cp01

0xe513,	// (0x0008324d) cam6_pano_image_pane

0xe51e,	// (0x00083258) cam6_pano_pane_g1

0xda02,	// (0x0008273c) cam6_pano_pane_g2

0xe527,	// (0x00083261) cam6_pano_pane_g3

0xe530,	// (0x0008326a) cam6_pano_pane_g4

0xc70a,	// (0x00081444) cam6_pano_pane_g5

0xe539,	// (0x00083273) cam6_pano_pane_g6

0xe543,	// (0x0008327d) cam6_pano_pane_g7

0xe54b,	// (0x00083285) cam6_pano_pane_g8

0xe554,	// (0x0008328e) cam6_pano_pane_g9

0x0008,

0xfe11,	// (0x00084b4b) cam6_pano_pane_g

0xa86c,	// (0x0007f5a6) main_browser_tag_pane

0xe27e,	// (0x00082fb8) grid_navstr_albumart_pane

0xe55f,	// (0x00083299) cell_navstr_albumart_pane_ParamLimits

0xe55f,	// (0x00083299) cell_navstr_albumart_pane

0x4c8e,	// (0x000799c8) cell_navstr_albumart_pane_g1

0xbab5,	// (0x000807ef) cell_navstr_albumart_pane_g2

0xbac5,	// (0x000807ff) cell_navstr_albumart_pane_g3

0xbabd,	// (0x000807f7) cell_navstr_albumart_pane_g4

0x0003,

0xfe24,	// (0x00084b5e) cell_navstr_albumart_pane_g

0x9e5a,	// (0x0007eb94) bt_list_pane_ParamLimits

0x9e5a,	// (0x0007eb94) bt_list_pane

0x9e6f,	// (0x0007eba9) bt_list_pane_t1

0x9e7e,	// (0x0007ebb8) bt_list_pane_t2

0x0001,

0xfe2d,	// (0x00084b67) bt_list_pane_t

0xa86c,	// (0x0007f5a6) main_cale_prevew_pane

0x9e8d,	// (0x0007ebc7) popup_cale_preview_window_ParamLimits

0x9e8d,	// (0x0007ebc7) popup_cale_preview_window

0xa8e4,	// (0x0007f61e) bg_popup_preview_window_pane_cp05_ParamLimits

0xa8e4,	// (0x0007f61e) bg_popup_preview_window_pane_cp05

0xe581,	// (0x000832bb) list_cale_preview_pane_ParamLimits

0xe581,	// (0x000832bb) list_cale_preview_pane

0x9ea4,	// (0x0007ebde) list_double_cale_preview_pane_ParamLimits

0x9ea4,	// (0x0007ebde) list_double_cale_preview_pane

0x9eb6,	// (0x0007ebf0) list_single_cale_preview_pane_ParamLimits

0x9eb6,	// (0x0007ebf0) list_single_cale_preview_pane

0x9eca,	// (0x0007ec04) list_single_cale_preview_pane_g1

0x9ed2,	// (0x0007ec0c) list_single_cale_preview_pane_t1_ParamLimits

0x9ed2,	// (0x0007ec0c) list_single_cale_preview_pane_t1

0x9ee7,	// (0x0007ec21) list_double_cale_preview_pane_g1

0x9eef,	// (0x0007ec29) list_double_cale_preview_pane_t1_ParamLimits

0x9eef,	// (0x0007ec29) list_double_cale_preview_pane_t1

0x9f04,	// (0x0007ec3e) list_double_cale_preview_pane_t2_ParamLimits

0x9f04,	// (0x0007ec3e) list_double_cale_preview_pane_t2

0x0001,

0xfe32,	// (0x00084b6c) list_double_cale_preview_pane_t_ParamLimits

0xfe32,	// (0x00084b6c) list_double_cale_preview_pane_t

0xa86c,	// (0x0007f5a6) main_ezdial_pane

0xa8e4,	// (0x0007f61e) main_sp_fs_email_pane_ParamLimits

0x9acc,	// (0x0007e806) cmail_ddmenu_btn01_pane_ParamLimits

0x9acc,	// (0x0007e806) cmail_ddmenu_btn01_pane

0x9adf,	// (0x0007e819) cmail_ddmenu_btn02_pane_ParamLimits

0x9adf,	// (0x0007e819) cmail_ddmenu_btn02_pane

0x9b02,	// (0x0007e83c) cmail_ddmenu_btn03_pane_ParamLimits

0x9b02,	// (0x0007e83c) cmail_ddmenu_btn03_pane

0x0f74,	// (0x00075cae) main_sp_fs_ctrlbar_pane_ParamLimits

0x0f98,	// (0x00075cd2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9c3e,	// (0x0007e978) list_cmail_body_pane_ParamLimits

0xe1b1,	// (0x00082eeb) bg_button_pane_cp12

0xe1ba,	// (0x00082ef4) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe1ba,	// (0x00082ef4) list_single_cmail_header_detail_pane_g3

0x132d,	// (0x00076067) list_single_cmail_header_detail_pane_t2_ParamLimits

0x132d,	// (0x00076067) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x00084aef) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x00084aef) list_single_cmail_header_detail_pane_t

0xe2e6,	// (0x00083020) phacti_term_pane_t2_ParamLimits

0xe2e6,	// (0x00083020) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x00084af9) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x00084af9) phacti_term_pane_t

0xe58d,	// (0x000832c7) aid_size_list_single_double

0x9f1c,	// (0x0007ec56) popup_ezdial_listscroll_window

0x9f38,	// (0x0007ec72) popup_number_entry_window_cp01

0x4703,	// (0x0007943d) bg_popup_call_pane_cp09

0xe599,	// (0x000832d3) ezdial_list_pane

0xe5a1,	// (0x000832db) scroll_pane_cp23

0xbca0,	// (0x000809da) bg_button_pane_cp028_ParamLimits

0xbca0,	// (0x000809da) bg_button_pane_cp028

0x9f46,	// (0x0007ec80) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9f46,	// (0x0007ec80) cmail_ddmenu_btn01_pane_g1

0x9f55,	// (0x0007ec8f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9f55,	// (0x0007ec8f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe37,	// (0x00084b71) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe37,	// (0x00084b71) cmail_ddmenu_btn01_pane_g

0xe5a9,	// (0x000832e3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe5a9,	// (0x000832e3) cmail_ddmenu_btn01_pane_t1

0xbca0,	// (0x000809da) bg_button_pane_cp029_ParamLimits

0xbca0,	// (0x000809da) bg_button_pane_cp029

0x9f65,	// (0x0007ec9f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9f65,	// (0x0007ec9f) cmail_ddmenu_btn02_pane_g1

0x9f80,	// (0x0007ecba) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9f80,	// (0x0007ecba) cmail_ddmenu_btn02_pane_t1

0xa8e4,	// (0x0007f61e) bg_button_pane_cp031_ParamLimits

0xa8e4,	// (0x0007f61e) bg_button_pane_cp031

0x9f65,	// (0x0007ec9f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9f65,	// (0x0007ec9f) cmail_ddmenu_btn03_pane_g1

0x9f80,	// (0x0007ecba) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9f80,	// (0x0007ecba) cmail_ddmenu_btn03_pane_t1

0x7840,	// (0x0007c57a) cell_dialer2_keypad_pane_t1_ParamLimits

0x785a,	// (0x0007c594) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x785a,	// (0x0007c594) cell_dialer2_keypad_pane_t1_copy1

0x943d,	// (0x0007e177) ncimui_group_button_pane

0xa8e4,	// (0x0007f61e) main_sp_fs_calendar_pane_ParamLimits

0x9c53,	// (0x0007e98d) list_single_cmail_header_caption_pane_ParamLimits

0xe331,	// (0x0008306b) aid_recal_txt_sm_pane

0xa86c,	// (0x0007f5a6) mian_recal_day_pane

0xe370,	// (0x000830aa) popup_sp_fs_cale_preview_window_ParamLimits

0xa86c,	// (0x0007f5a6) list_recal_day_pane

0xe5d8,	// (0x00083312) list_single_recal_day_pane_ParamLimits

0xe5d8,	// (0x00083312) list_single_recal_day_pane

0xe5ea,	// (0x00083324) list_single_recal_day_pane_g1_ParamLimits

0xe5ea,	// (0x00083324) list_single_recal_day_pane_g1

0xe5f6,	// (0x00083330) list_single_recal_day_pane_g2_ParamLimits

0xe5f6,	// (0x00083330) list_single_recal_day_pane_g2

0xe606,	// (0x00083340) list_single_recal_day_pane_g3_ParamLimits

0xe606,	// (0x00083340) list_single_recal_day_pane_g3

0x9fa7,	// (0x0007ece1) list_single_recal_day_pane_g4_ParamLimits

0x9fa7,	// (0x0007ece1) list_single_recal_day_pane_g4

0xe612,	// (0x0008334c) list_single_recal_day_pane_g5_ParamLimits

0xe612,	// (0x0008334c) list_single_recal_day_pane_g5

0xe622,	// (0x0008335c) list_single_recal_day_pane_g6_ParamLimits

0xe622,	// (0x0008335c) list_single_recal_day_pane_g6

0x0004,

0xfe46,	// (0x00084b80) list_single_recal_day_pane_g_ParamLimits

0xfe46,	// (0x00084b80) list_single_recal_day_pane_g

0xe639,	// (0x00083373) list_single_recal_day_pane_t1

0xe64b,	// (0x00083385) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x00084b8b) list_single_recal_day_pane_t

0x9fc7,	// (0x0007ed01) ncimui_query_button_pane_ParamLimits

0x9fc7,	// (0x0007ed01) ncimui_query_button_pane

0x9fd7,	// (0x0007ed11) ncimui_query_button_pane_t1_ParamLimits

0x9fd7,	// (0x0007ed11) ncimui_query_button_pane_t1

0xe660,	// (0x0008339a) ncimui_query_button_pane_t2_ParamLimits

0xe660,	// (0x0008339a) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x00084b90) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x00084b90) ncimui_query_button_pane_t

0x9fea,	// (0x0007ed24) query_button_pane_ParamLimits

0x9fea,	// (0x0007ed24) query_button_pane

0xa86c,	// (0x0007f5a6) bg_button_pane_cp0028

0xe673,	// (0x000833ad) query_button_pane_t1

0x58bb,	// (0x0007a5f5) main_tport_pane_ParamLimits

0x9b2b,	// (0x0007e865) bg_popup_window_pane_cp01_ParamLimits

0x9b2b,	// (0x0007e865) bg_popup_window_pane_cp01

0x9b45,	// (0x0007e87f) heading_pane_cp08_ParamLimits

0x9b45,	// (0x0007e87f) heading_pane_cp08

0x9b59,	// (0x0007e893) heading_pane_cp07_ParamLimits

0x9b59,	// (0x0007e893) heading_pane_cp07

0xe174,	// (0x00082eae) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x00084adc) cell_tport_appsw_pane_g

0x0c09,	// (0x00075943) input_candi_list_open_g1

0x3d78,	// (0x00078ab2) list_cale_time_pane_g6_ParamLimits

0x3d78,	// (0x00078ab2) list_cale_time_pane_g6

0x6684,	// (0x0007b3be) aid_size_touch_calib_1_ParamLimits

0x6684,	// (0x0007b3be) aid_size_touch_calib_1

0x6690,	// (0x0007b3ca) aid_size_touch_calib_2_ParamLimits

0x6690,	// (0x0007b3ca) aid_size_touch_calib_2

0x66a6,	// (0x0007b3e0) aid_size_touch_calib_3_ParamLimits

0x66a6,	// (0x0007b3e0) aid_size_touch_calib_3

0x66c4,	// (0x0007b3fe) aid_size_touch_calib_4_ParamLimits

0x66c4,	// (0x0007b3fe) aid_size_touch_calib_4

0x66da,	// (0x0007b414) main_touch_calib_button_group_pane_ParamLimits

0x66da,	// (0x0007b414) main_touch_calib_button_group_pane

0x66f2,	// (0x0007b42c) main_touch_calib_pane_g1_ParamLimits

0x66fe,	// (0x0007b438) main_touch_calib_pane_g2_ParamLimits

0x670a,	// (0x0007b444) main_touch_calib_pane_g3_ParamLimits

0x6716,	// (0x0007b450) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x000844aa) main_touch_calib_pane_g_ParamLimits

0x6722,	// (0x0007b45c) main_touch_calib_pane_t1_ParamLimits

0x673c,	// (0x0007b476) main_touch_calib_pane_t2_ParamLimits

0x6756,	// (0x0007b490) main_touch_calib_pane_t3_ParamLimits

0x676a,	// (0x0007b4a4) main_touch_calib_pane_t4_ParamLimits

0x677e,	// (0x0007b4b8) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x000844b3) main_touch_calib_pane_t_ParamLimits

0xc4da,	// (0x00081214) list_single_fp_cale_pane_g3_ParamLimits

0xc4da,	// (0x00081214) list_single_fp_cale_pane_g3

0xa8e4,	// (0x0007f61e) bg_button_pane_cp012_ParamLimits

0xa8e4,	// (0x0007f61e) bg_vkb2_func_pane_cp03_ParamLimits

0x880c,	// (0x0007d546) cell_vitu2_function_top_pane_g1_ParamLimits

0xa8e4,	// (0x0007f61e) bg_vkb2_func_pane_cp04_ParamLimits

0x93dd,	// (0x0007e117) main_ncimui_button_group_pane_ParamLimits

0x93dd,	// (0x0007e117) main_ncimui_button_group_pane

0x942b,	// (0x0007e165) main_ncimui_pane_t3_ParamLimits

0x942b,	// (0x0007e165) main_ncimui_pane_t3

0xe294,	// (0x00082fce) phacti_button_group_pane

0xe58d,	// (0x000832c7) aid_size_list_single_double_ParamLimits

0x9f1c,	// (0x0007ec56) popup_ezdial_listscroll_window_ParamLimits

0x9f38,	// (0x0007ec72) popup_number_entry_window_cp01_ParamLimits

0x9ffd,	// (0x0007ed37) phacti_button_pane_ParamLimits

0x9ffd,	// (0x0007ed37) phacti_button_pane

0xa86c,	// (0x0007f5a6) bg_button_pane_cp14

0xe681,	// (0x000833bb) phacti_button_pane_t1

0xa00e,	// (0x0007ed48) main_touch_calib_button_pane_ParamLimits

0xa00e,	// (0x0007ed48) main_touch_calib_button_pane

0x21dd,	// (0x00076f17) bg_button_pane_cp18_ParamLimits

0x21dd,	// (0x00076f17) bg_button_pane_cp18

0xe68f,	// (0x000833c9) main_touch_calib_button_pane_t1_ParamLimits

0xe68f,	// (0x000833c9) main_touch_calib_button_pane_t1

0xe6a5,	// (0x000833df) main_touch_calib_button_pane_t2_ParamLimits

0xe6a5,	// (0x000833df) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x00084b95) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x00084b95) main_touch_calib_button_pane_t

0xa86c,	// (0x0007f5a6) cell_ncimui_button_pane

0xa86c,	// (0x0007f5a6) bg_button_pane_cp032

0xe6c3,	// (0x000833fd) cell_ncimui_button_pane_t1

0xeeb4,	// (0x00083bee) image3_infobar_pane_ParamLimits

0xeeb4,	// (0x00083bee) image3_infobar_pane

0x97de,	// (0x0007e518) fs_bigclock_status_pane_ParamLimits

0x97de,	// (0x0007e518) fs_bigclock_status_pane

0x97eb,	// (0x0007e525) main_fs_bigclock_clock_pane_ParamLimits

0x97eb,	// (0x0007e525) main_fs_bigclock_clock_pane

0x97ff,	// (0x0007e539) main_fs_bigclock_indi_pane_ParamLimits

0x97ff,	// (0x0007e539) main_fs_bigclock_indi_pane

0x9817,	// (0x0007e551) main_fs_bigclock_swipe_pane_ParamLimits

0x9817,	// (0x0007e551) main_fs_bigclock_swipe_pane

0xa86c,	// (0x0007f5a6) main_fs_clock_dumped_data

0xdb0f,	// (0x00082849) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdb0f,	// (0x00082849) list_single_fs_bigclock_indicator_pane_g1

0xdb38,	// (0x00082872) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdb38,	// (0x00082872) list_single_fs_bigclock_indicator_pane_g2

0xdb52,	// (0x0008288c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdb52,	// (0x0008288c) list_single_fs_bigclock_indicator_pane_g3

0xdb6c,	// (0x000828a6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdb6c,	// (0x000828a6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x000849c3) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x000849c3) list_single_fs_bigclock_indicator_pane_g

0xdb95,	// (0x000828cf) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdb95,	// (0x000828cf) list_single_fs_bigclock_indicator_pane_t1

0xdbbd,	// (0x000828f7) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdbbd,	// (0x000828f7) list_single_fs_bigclock_indicator_pane_t2

0xdbe5,	// (0x0008291f) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdbe5,	// (0x0008291f) list_single_fs_bigclock_indicator_pane_t3

0xdc0d,	// (0x00082947) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdc0d,	// (0x00082947) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x000849ce) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x000849ce) list_single_fs_bigclock_indicator_pane_t

0xe6d1,	// (0x0008340b) image3_infobar_fav_pane_ParamLimits

0xe6d1,	// (0x0008340b) image3_infobar_fav_pane

0xe6e1,	// (0x0008341b) image3_infobar_loc_pane_ParamLimits

0xe6e1,	// (0x0008341b) image3_infobar_loc_pane

0xe6f5,	// (0x0008342f) image3_infobar_time_pane_ParamLimits

0xe6f5,	// (0x0008342f) image3_infobar_time_pane

0xc13b,	// (0x00080e75) image3_infobar_time_pane_g1

0xe705,	// (0x0008343f) image3_infobar_time_pane_t1

0xc13b,	// (0x00080e75) image3_infobar_loc_pane_g1

0xe713,	// (0x0008344d) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x00084b9a) image3_infobar_loc_pane_g

0xe71b,	// (0x00083455) image3_infobar_loc_pane_t1

0xc13b,	// (0x00080e75) image3_infobar_fav_pane_g1

0xe729,	// (0x00083463) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x00084b9f) image3_infobar_fav_pane_g

0xe731,	// (0x0008346b) fs_bigclock_status_battery_pane

0xe73a,	// (0x00083474) fs_bigclock_status_signal_pane

0xe743,	// (0x0008347d) fs_bigclock_status_title_pane

0xe74c,	// (0x00083486) fs_bigclock_status_signal_pane_g1

0xe755,	// (0x0008348f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x00084ba4) fs_bigclock_status_signal_pane_g

0xe75d,	// (0x00083497) fs_bigclock_status_battery_pane_g1

0xe766,	// (0x000834a0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x00084ba9) fs_bigclock_status_battery_pane_g

0xe76e,	// (0x000834a8) fs_bigclock_status_title_pane_t1

0xc13b,	// (0x00080e75) main_fs_bigclock_clock_pane_g1

0xe77c,	// (0x000834b6) main_fs_bigclock_clock_pane_g2

0xe77c,	// (0x000834b6) main_fs_bigclock_clock_pane_g3

0xe77c,	// (0x000834b6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x00084bae) main_fs_bigclock_clock_pane_g

0xe784,	// (0x000834be) main_fs_bigclock_clock_pane_t1

0xe792,	// (0x000834cc) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x00084bb7) main_fs_bigclock_clock_pane_t

0xe7a1,	// (0x000834db) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe7a1,	// (0x000834db) list_single_fs_bigclock_indicator_pane

0xa023,	// (0x0007ed5d) list_single_fs_bigclock_pane_ParamLimits

0xa023,	// (0x0007ed5d) list_single_fs_bigclock_pane

0xe7bb,	// (0x000834f5) main_fs_bigclock_indicator_pane_t1

0xe7ca,	// (0x00083504) list_single_fs_bigclock_pane_g1

0xe7d2,	// (0x0008350c) list_single_fs_bigclock_pane_t1

0xc13b,	// (0x00080e75) main_fs_bigclock_swipe_pane_g1

0xe815,	// (0x0008354f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x00084bc8) main_fs_bigclock_swipe_pane_g

0xe81d,	// (0x00083557) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe81d,	// (0x00083557) main_fs_bigclock_swipe_pane_t1

0x4064,	// (0x00078d9e) call_type_pane_ParamLimits

0xa86c,	// (0x0007f5a6) main_btmg_pane

0xe469,	// (0x000831a3) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe469,	// (0x000831a3) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe01,	// (0x00084b3b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x00084b3b) list_single_cale_mrui_row_pane_g

0xe5c8,	// (0x00083302) list_recal_vselct_arw_lo_pane

0xe5d0,	// (0x0008330a) list_recal_vselct_arw_up_pane

0xf0de,	// (0x00083e18) list_recal_vselct_pane

0xe83a,	// (0x00083574) btmg_button_pane

0xa089,	// (0x0007edc3) main_btmg_pane_g1

0xa86c,	// (0x0007f5a6) bg_button_pane_cp044

0xe844,	// (0x0008357e) btmg_button_pane_t1

0xbc98,	// (0x000809d2) aid_listscroll_gen

0xa8e4,	// (0x0007f61e) main_cntbar_detail_pane

0xe192,	// (0x00082ecc) list_cmail_folder_pane

0xe1a2,	// (0x00082edc) sp_fs_scroll_pane_cp03_ParamLimits

0x1423,	// (0x0007615d) list_single_fs_dyc_pane_cp01_ParamLimits

0x1423,	// (0x0007615d) list_single_fs_dyc_pane_cp01

0xe852,	// (0x0008358c) aid_size_cmail_indent

0xe85b,	// (0x00083595) list_single_dyc_row_pane_cp01

0xa0bf,	// (0x0007edf9) cntbar_detail_list_pane_ParamLimits

0xa0bf,	// (0x0007edf9) cntbar_detail_list_pane

0xa10b,	// (0x0007ee45) main_cntbar_detail_cont_pane_ParamLimits

0xa10b,	// (0x0007ee45) main_cntbar_detail_cont_pane

0x3f4a,	// (0x00078c84) scroll_pane_cp032_ParamLimits

0x3f4a,	// (0x00078c84) scroll_pane_cp032

0xa11f,	// (0x0007ee59) cntbar_detail_list_event_pane_ParamLimits

0xa11f,	// (0x0007ee59) cntbar_detail_list_event_pane

0xa0cf,	// (0x0007ee09) cntbar_detail_list_shct_pane

0x32f4,	// (0x0007802e) aid_list_gen

0xe864,	// (0x0008359e) aid_scroll

0xe86d,	// (0x000835a7) aid_size_touch_scroll_bar

0xe876,	// (0x000835b0) aid_list_double

0xe87f,	// (0x000835b9) aid_list_single

0xe888,	// (0x000835c2) aid_list_single_lg

0xe891,	// (0x000835cb) aid_list_z_g_a_sm

0xf0b3,	// (0x00083ded) aid_list_z_g_d

0xe899,	// (0x000835d3) aid_txt_z_prm

0x143d,	// (0x00076177) aid_txt_z_prm_cp01

0x144b,	// (0x00076185) aid_txt_z_sec

0xa12f,	// (0x0007ee69) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa12f,	// (0x0007ee69) main_cntbar_detail_cont_pane_g1

0xa143,	// (0x0007ee7d) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa143,	// (0x0007ee7d) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x00084bcd) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x00084bcd) main_cntbar_detail_cont_pane_g

0xe8a7,	// (0x000835e1) main_cntbar_detail_cont_pane_t1

0xe8b5,	// (0x000835ef) main_cntbar_detail_cont_pane_t2

0xe8c3,	// (0x000835fd) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x00084bd2) main_cntbar_detail_cont_pane_t

0xa153,	// (0x0007ee8d) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa153,	// (0x0007ee8d) cell_cntbar_detail_list_shct_pane

0xe8d1,	// (0x0008360b) cntbar_detail_list_shct_pane_g1

0xe8da,	// (0x00083614) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x00084bd9) cntbar_detail_list_shct_pane_g

0xa167,	// (0x0007eea1) cntbar_detail_list_event_pane_g1_ParamLimits

0xa167,	// (0x0007eea1) cntbar_detail_list_event_pane_g1

0xa173,	// (0x0007eead) cntbar_detail_list_event_pane_g2_ParamLimits

0xa173,	// (0x0007eead) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x00084bde) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x00084bde) cntbar_detail_list_event_pane_g

0xa1df,	// (0x0007ef19) cntbar_detail_list_event_pane_t1_ParamLimits

0xa1df,	// (0x0007ef19) cntbar_detail_list_event_pane_t1

0xa1f4,	// (0x0007ef2e) cntbar_detail_list_event_pane_t2_ParamLimits

0xa1f4,	// (0x0007ef2e) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x00084beb) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x00084beb) cntbar_detail_list_event_pane_t

0xc13b,	// (0x00080e75) cell_cntbar_detail_list_shct_pane_g1

0x4681,	// (0x000793bb) navi_pane_mv_g3

0xa8e4,	// (0x0007f61e) main_cntbar_detail_pane_ParamLimits

0xa86c,	// (0x0007f5a6) main_notif_wgt_pane

0xecca,	// (0x00083a04) aid_tch_main_mp4_pane_g4

0xeeac,	// (0x00083be6) popup_slider_window_cp02

0xe5be,	// (0x000832f8) list_recal_day_event_pane

0xa093,	// (0x0007edcd) cntbar_detail_btn_pane_ParamLimits

0xa093,	// (0x0007edcd) cntbar_detail_btn_pane

0xa0a9,	// (0x0007ede3) cntbar_detail_btn_pane_cp01_ParamLimits

0xa0a9,	// (0x0007ede3) cntbar_detail_btn_pane_cp01

0xa0cf,	// (0x0007ee09) cntbar_detail_list_shct_pane_ParamLimits

0xa0df,	// (0x0007ee19) cntbar_detail_pane_g1_ParamLimits

0xa0df,	// (0x0007ee19) cntbar_detail_pane_g1

0xa0ef,	// (0x0007ee29) cntbar_detail_pane_t1_ParamLimits

0xa0ef,	// (0x0007ee29) cntbar_detail_pane_t1

0xa17f,	// (0x0007eeb9) cntbar_detail_list_event_pane_g3_ParamLimits

0xa17f,	// (0x0007eeb9) cntbar_detail_list_event_pane_g3

0xa197,	// (0x0007eed1) cntbar_detail_list_event_pane_g4_ParamLimits

0xa197,	// (0x0007eed1) cntbar_detail_list_event_pane_g4

0xa1af,	// (0x0007eee9) cntbar_detail_list_event_pane_g5_ParamLimits

0xa1af,	// (0x0007eee9) cntbar_detail_list_event_pane_g5

0xa1c7,	// (0x0007ef01) cntbar_detail_list_event_pane_g6_ParamLimits

0xa1c7,	// (0x0007ef01) cntbar_detail_list_event_pane_g6

0xa209,	// (0x0007ef43) cntbar_detail_list_event_pane_t3_ParamLimits

0xa209,	// (0x0007ef43) cntbar_detail_list_event_pane_t3

0xa21b,	// (0x0007ef55) popup_notif_wgt_window_ParamLimits

0xa21b,	// (0x0007ef55) popup_notif_wgt_window

0xa234,	// (0x0007ef6e) popup_submenu_window_cp01_ParamLimits

0xa234,	// (0x0007ef6e) popup_submenu_window_cp01

0x4703,	// (0x0007943d) bg_popup_window_pane_cp10

0xe8e3,	// (0x0008361d) listscroll_notif_wgt_pane

0xe8ed,	// (0x00083627) list_notif_wgt_window

0xe8f6,	// (0x00083630) scroll_pane_cp033

0xe8ff,	// (0x00083639) list_notif_wgt_row_pane_ParamLimits

0xe8ff,	// (0x00083639) list_notif_wgt_row_pane

0xe913,	// (0x0008364d) aid_size_list_notif_wgt_del

0xe91c,	// (0x00083656) list_notif_wgt_row_pane_g1

0xe924,	// (0x0008365e) list_notif_wgt_row_pane_g2

0xe92c,	// (0x00083666) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x00084bf2) list_notif_wgt_row_pane_g

0xe935,	// (0x0008366f) list_notif_wgt_row_pane_t1

0xe943,	// (0x0008367d) list_notif_wgt_row_pane_t2

0xe951,	// (0x0008368b) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x00084bf9) list_notif_wgt_row_pane_t

0xce52,	// (0x00081b8c) list_recal_day_event_pane_g1

0xe95f,	// (0x00083699) list_recal_day_event_pane_t1

0xa86c,	// (0x0007f5a6) bg_button_pane_cp045

0xe96e,	// (0x000836a8) cntbar_detail_btn_pane_t1

0xbca0,	// (0x000809da) main_callh_pane_ParamLimits

0xbca0,	// (0x000809da) main_callh_pane

0xa86c,	// (0x0007f5a6) main_coverflow0_pane

0xa86c,	// (0x0007f5a6) main_wgtman_pane

0x9825,	// (0x0007e55f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9825,	// (0x0007e55f) main_fs_bigclock_unlock_btn_pane

0xe16c,	// (0x00082ea6) bg_button_pane_cp16

0xe17c,	// (0x00082eb6) cell_tport_appsw_pane_g3

0xa246,	// (0x0007ef80) cf0_flow_pane_ParamLimits

0xa246,	// (0x0007ef80) cf0_flow_pane

0xe97c,	// (0x000836b6) listscroll_cf0_pane

0xe985,	// (0x000836bf) main_cf0_pane_g1

0xa25b,	// (0x0007ef95) main_cf0_pane_t1_ParamLimits

0xa25b,	// (0x0007ef95) main_cf0_pane_t1

0xa272,	// (0x0007efac) main_cf0_pane_t2_ParamLimits

0xa272,	// (0x0007efac) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x00084c00) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x00084c00) main_cf0_pane_t

0xe98f,	// (0x000836c9) scroll_pane_cp11

0xa289,	// (0x0007efc3) cf0_flow_pane_g1

0xa291,	// (0x0007efcb) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x00084c05) cf0_flow_pane_g

0xa299,	// (0x0007efd3) cf0_flow_pane_t1

0xa86c,	// (0x0007f5a6) main_call6_pane

0xa86c,	// (0x0007f5a6) main_calllock_pane

0xa2a7,	// (0x0007efe1) call6_btn_grp_pane_ParamLimits

0xa2a7,	// (0x0007efe1) call6_btn_grp_pane

0xa2c1,	// (0x0007effb) call6_pane_g1_ParamLimits

0xa2c1,	// (0x0007effb) call6_pane_g1

0xa2d6,	// (0x0007f010) popup_call6_1st_window_ParamLimits

0xa2d6,	// (0x0007f010) popup_call6_1st_window

0xa2e7,	// (0x0007f021) popup_call6_2nd_window_ParamLimits

0xa2e7,	// (0x0007f021) popup_call6_2nd_window

0xa2f8,	// (0x0007f032) cell_call6_btn_pane_ParamLimits

0xa2f8,	// (0x0007f032) cell_call6_btn_pane

0x4703,	// (0x0007943d) bg_popup_call2_in_pane_cp03

0xe99a,	// (0x000836d4) popup_call6_1st_window_g1

0xe9a2,	// (0x000836dc) popup_call6_1st_window_g2

0xe9aa,	// (0x000836e4) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x00084c0a) popup_call6_1st_window_g

0xe9b2,	// (0x000836ec) popup_call6_1st_window_t1

0xe9c1,	// (0x000836fb) popup_call6_1st_window_t2

0xe9d1,	// (0x0008370b) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x00084c11) popup_call6_1st_window_t

0x4703,	// (0x0007943d) bg_popup_call2_in_pane_cp04

0xe99a,	// (0x000836d4) popup_call6_2nd_window_g1

0xe9a2,	// (0x000836dc) popup_call6_2nd_window_g2

0xe9aa,	// (0x000836e4) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x00084c0a) popup_call6_2nd_window_g

0xe9b2,	// (0x000836ec) popup_call6_2nd_window_t1

0xa86c,	// (0x0007f5a6) bg_button_pane_cp15

0xe9e1,	// (0x0008371b) cell_call6_btn_pane_g1

0xe9ea,	// (0x00083724) cell_call6_btn_pane_t1

0xa30c,	// (0x0007f046) listscroll_wgtman_pane_ParamLimits

0xa30c,	// (0x0007f046) listscroll_wgtman_pane

0xa32f,	// (0x0007f069) wgtman_btn_pane_ParamLimits

0xa32f,	// (0x0007f069) wgtman_btn_pane

0x42b4,	// (0x00078fee) aid_scroll_copy1

0xe9f9,	// (0x00083733) list_wgtman_pane

0xa372,	// (0x0007f0ac) wgtman_btn_pane_g1_ParamLimits

0xa372,	// (0x0007f0ac) wgtman_btn_pane_g1

0xa39e,	// (0x0007f0d8) wgtman_btn_pane_t1_ParamLimits

0xa39e,	// (0x0007f0d8) wgtman_btn_pane_t1

0xea03,	// (0x0008373d) wgtman_btn_pane_t2_ParamLimits

0xea03,	// (0x0008373d) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x00084c18) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x00084c18) wgtman_btn_pane_t

0xa3db,	// (0x0007f115) listrow_wgtman_pane_ParamLimits

0xa3db,	// (0x0007f115) listrow_wgtman_pane

0xa3ee,	// (0x0007f128) listrow_wgtman_pane_g1

0xa3f7,	// (0x0007f131) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x00084c1d) listrow_wgtman_pane_g

0x1459,	// (0x00076193) listrow_wgtman_pane_t1

0x1467,	// (0x000761a1) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x00084c22) listrow_wgtman_pane_t

0x1475,	// (0x000761af) wait_bar_pane_cp09

0xea1a,	// (0x00083754) main_calllock_btn_pane

0xea24,	// (0x0008375e) main_calllock_pane_g1

0xa86c,	// (0x0007f5a6) bg_button_pane_cp17

0xea2f,	// (0x00083769) main_calllock_btn_pane_g1

0xea38,	// (0x00083772) main_calllock_btn_pane_t1

0xa86c,	// (0x0007f5a6) main_dialer3_pane

0xa86c,	// (0x0007f5a6) main_fmrd2_pane

0xc13b,	// (0x00080e75) main_fs_bigclock_unlock_btn_pane_g1

0xea4f,	// (0x00083789) main_fs_bigclock_unlock_btn_pane_t1

0xa401,	// (0x0007f13b) area_fmrd2_info_pane_ParamLimits

0xa401,	// (0x0007f13b) area_fmrd2_info_pane

0xa412,	// (0x0007f14c) area_fmrd2_visual_pane_ParamLimits

0xa412,	// (0x0007f14c) area_fmrd2_visual_pane

0xa420,	// (0x0007f15a) fmrd2_indi_pane_ParamLimits

0xa420,	// (0x0007f15a) fmrd2_indi_pane

0xa42d,	// (0x0007f167) area_fmrd2_visual_pane_g1

0xa435,	// (0x0007f16f) area_fmrd2_visual_pane_t1

0xa445,	// (0x0007f17f) area_fmrd2_visual_pane_t2

0xa455,	// (0x0007f18f) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x00084c2c) area_fmrd2_visual_pane_t

0xa465,	// (0x0007f19f) area_fmrd2_info_pane_g1

0xa46d,	// (0x0007f1a7) area_fmrd2_info_pane_t1

0xa47d,	// (0x0007f1b7) area_fmrd2_info_pane_t2

0xa48d,	// (0x0007f1c7) area_fmrd2_info_pane_t3

0xa49d,	// (0x0007f1d7) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x00084c33) area_fmrd2_info_pane_t

0xa4ab,	// (0x0007f1e5) fmrd2_indi_pane_t1

0xa4bb,	// (0x0007f1f5) fmrd2_indi_pane_t2

0xa4cb,	// (0x0007f205) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x00084c3c) fmrd2_indi_pane_t

0xdb7b,	// (0x000828b5) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdb7b,	// (0x000828b5) list_single_fs_bigclock_indicator_pane_g5

0xdc22,	// (0x0008295c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdc22,	// (0x0008295c) list_single_fs_bigclock_indicator_pane_t5

0x9d64,	// (0x0007ea9e) aid_cell_bcale_month_pane_ParamLimits

0x9d64,	// (0x0007ea9e) aid_cell_bcale_month_pane

0x9d76,	// (0x0007eab0) bcale_month_pane_ParamLimits

0x9d76,	// (0x0007eab0) bcale_month_pane

0x9d90,	// (0x0007eaca) bcale_preview_pane_ParamLimits

0x9d90,	// (0x0007eaca) bcale_preview_pane

0xe7d2,	// (0x0008350c) list_single_fs_bigclock_pane_t1_ParamLimits

0xe7f1,	// (0x0008352b) list_single_fs_bigclock_pane_t2_ParamLimits

0xe7f1,	// (0x0008352b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x00084bc3) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x00084bc3) list_single_fs_bigclock_pane_t

0xea47,	// (0x00083781) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x00084c27) main_fs_bigclock_unlock_btn_pane_g

0xa4db,	// (0x0007f215) aid_dia3_key_size_ParamLimits

0xa4db,	// (0x0007f215) aid_dia3_key_size

0xa4ea,	// (0x0007f224) aid_dia3_listrow_size_ParamLimits

0xa4ea,	// (0x0007f224) aid_dia3_listrow_size

0xa4ff,	// (0x0007f239) dia3_keypad_fun_pane_ParamLimits

0xa4ff,	// (0x0007f239) dia3_keypad_fun_pane

0xa51b,	// (0x0007f255) dia3_keypad_num_pane_ParamLimits

0xa51b,	// (0x0007f255) dia3_keypad_num_pane

0xa536,	// (0x0007f270) dia3_listscroll_pane_ParamLimits

0xa536,	// (0x0007f270) dia3_listscroll_pane

0xa549,	// (0x0007f283) dia3_numentry_pane_ParamLimits

0xa549,	// (0x0007f283) dia3_numentry_pane

0xea5d,	// (0x00083797) dia3_list_pane

0xea68,	// (0x000837a2) scroll_pane_cp12

0xa86c,	// (0x0007f5a6) bg_dia3_numentry_pane

0xa55d,	// (0x0007f297) dia3_numentry_pane_t1

0xa56c,	// (0x0007f2a6) cell_dia3_key_num_pane

0xa574,	// (0x0007f2ae) cell_dia3_key0_fun_pane_ParamLimits

0xa574,	// (0x0007f2ae) cell_dia3_key0_fun_pane

0xa588,	// (0x0007f2c2) cell_dia3_key1_fun_pane_ParamLimits

0xa588,	// (0x0007f2c2) cell_dia3_key1_fun_pane

0xa5a0,	// (0x0007f2da) dia3_listrow_pane

0xd87c,	// (0x000825b6) bg_dia3_numentry_pane_g1

0xa86c,	// (0x0007f5a6) bg_button_pane_cp21

0xea73,	// (0x000837ad) cell_dia3_key_num_pane_t1

0xea81,	// (0x000837bb) cell_dia3_key_num_pane_t2

0xea90,	// (0x000837ca) cell_dia3_key_num_pane_t3

0xea9f,	// (0x000837d9) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x00084c43) cell_dia3_key_num_pane_t

0xa86c,	// (0x0007f5a6) bg_button_pane_cp19

0xa5b2,	// (0x0007f2ec) cell_dia3_key0_fun_pane_g1

0xa86c,	// (0x0007f5a6) bg_button_pane_cp20

0xa5ba,	// (0x0007f2f4) cell_dia3_key1_fun_pane_g1

0xa5c2,	// (0x0007f2fc) area_left_week_number_pane

0xeaae,	// (0x000837e8) area_top_day_name_pane

0xa5cb,	// (0x0007f305) frame_month_view_pane

0xa5d3,	// (0x0007f30d) grid_month_view_pane

0xa5dd,	// (0x0007f317) cell_top_day_name_pane_ParamLimits

0xa5dd,	// (0x0007f317) cell_top_day_name_pane

0x9eb6,	// (0x0007ebf0) cell_area_left_week_number_pane_ParamLimits

0x9eb6,	// (0x0007ebf0) cell_area_left_week_number_pane

0xa5f3,	// (0x0007f32d) cell_month_view_pane_ParamLimits

0xa5f3,	// (0x0007f32d) cell_month_view_pane

0xeab7,	// (0x000837f1) frm_month_g1

0xa60e,	// (0x0007f348) frm_month_g2

0xa616,	// (0x0007f350) frm_month_g3

0xa61e,	// (0x0007f358) frm_month_g4

0xa626,	// (0x0007f360) frm_month_g5

0xa62e,	// (0x0007f368) frm_month_g6

0xa636,	// (0x0007f370) frm_month_g7

0xeac0,	// (0x000837fa) frm_month_g8

0xa63e,	// (0x0007f378) frm_month_g9

0xa647,	// (0x0007f381) frm_month_g10

0xa650,	// (0x0007f38a) frm_month_g11

0xa659,	// (0x0007f393) frm_month_g12

0xa662,	// (0x0007f39c) frm_month_g13

0xa66b,	// (0x0007f3a5) frm_month_g14

0xa674,	// (0x0007f3ae) frm_month_g15

0xa67d,	// (0x0007f3b7) frm_month_g16

0x000f,

0xff12,	// (0x00084c4c) frm_month_g

0xa686,	// (0x0007f3c0) cell_top_day_name_pane_t1

0xa695,	// (0x0007f3cf) cell_area_left_week_number_pane_g1

0xa686,	// (0x0007f3c0) cell_area_left_week_number_pane_t1

0xc13b,	// (0x00080e75) cell_month_view_pane_g1

0xa69d,	// (0x0007f3d7) cell_month_view_pane_t1

0xa86c,	// (0x0007f5a6) main_fps_pane

0xdeb1,	// (0x00082beb) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdeb1,	// (0x00082beb) cmail_ddmenu_btn02_pane_cp1

0xdecd,	// (0x00082c07) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdecd,	// (0x00082c07) cmail_ddmenu_btn02_pane_cp2

0x9f74,	// (0x0007ecae) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9f74,	// (0x0007ecae) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3c,	// (0x00084b76) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3c,	// (0x00084b76) cmail_ddmenu_btn02_pane_g

0x9f95,	// (0x0007eccf) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9f95,	// (0x0007eccf) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe41,	// (0x00084b7b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe41,	// (0x00084b7b) cmail_ddmenu_btn02_pane_t

0xa6ac,	// (0x0007f3e6) fps_text_pane_ParamLimits

0xa6ac,	// (0x0007f3e6) fps_text_pane

0xa6c3,	// (0x0007f3fd) main_fps_pane_g1_ParamLimits

0xa6c3,	// (0x0007f3fd) main_fps_pane_g1

0xa6dd,	// (0x0007f417) wait_bar_pane_cp010_ParamLimits

0xa6dd,	// (0x0007f417) wait_bar_pane_cp010

0xa6ee,	// (0x0007f428) fps_text_pane_t1_ParamLimits

0xa6ee,	// (0x0007f428) fps_text_pane_t1

0xcb57,	// (0x00081891) cam4_image_uncrop_pane_g1

0xcb60,	// (0x0008189a) cam4_image_uncrop_pane_g2

0x7ceb,	// (0x0007ca25) cam4_image_uncrop_pane_g3

0x7cf4,	// (0x0007ca2e) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x00084642) cam4_image_uncrop_pane_g

0xa5a0,	// (0x0007f2da) dia3_listrow_pane_ParamLimits

0xa86c,	// (0x0007f5a6) main_phob2_pane

0x9bc4,	// (0x0007e8fe) cell_tport_appsw_pane_cp02_ParamLimits

0x9bc4,	// (0x0007e8fe) cell_tport_appsw_pane_cp02

0x9bd8,	// (0x0007e912) cell_tport_appsw_pane_cp03_ParamLimits

0x9bd8,	// (0x0007e912) cell_tport_appsw_pane_cp03

0xa86c,	// (0x0007f5a6) phob2_contact_card_pane

0xa86c,	// (0x0007f5a6) phob2_listscroll_pane

0xeac9,	// (0x00083803) phob2_list_pane

0xead1,	// (0x0008380b) scroll_pane_cp034

0xa706,	// (0x0007f440) phob2_cc_data_pane_ParamLimits

0xa706,	// (0x0007f440) phob2_cc_data_pane

0xa725,	// (0x0007f45f) phob2_cc_listscroll_pane_ParamLimits

0xa725,	// (0x0007f45f) phob2_cc_listscroll_pane

0xcc1d,	// (0x00081957) list_double_large_graphic_phob2_pane_ParamLimits

0xcc1d,	// (0x00081957) list_double_large_graphic_phob2_pane

0xa743,	// (0x0007f47d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa743,	// (0x0007f47d) list_double_large_graphic_phob2_pane_g1

0x147d,	// (0x000761b7) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x147d,	// (0x000761b7) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x00084c6d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x00084c6d) list_double_large_graphic_phob2_pane_g

0x1489,	// (0x000761c3) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1489,	// (0x000761c3) list_double_large_graphic_phob2_pane_t1

0x149e,	// (0x000761d8) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x149e,	// (0x000761d8) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x00084c72) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x00084c72) list_double_large_graphic_phob2_pane_t

0xa86c,	// (0x0007f5a6) list_highlight_pane_cp024

0xead9,	// (0x00083813) phob2_cc_button_pane

0xa750,	// (0x0007f48a) phob2_cc_data_pane_g1_ParamLimits

0xa750,	// (0x0007f48a) phob2_cc_data_pane_g1

0xa765,	// (0x0007f49f) phob2_cc_data_pane_g2_ParamLimits

0xa765,	// (0x0007f49f) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x00084c77) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x00084c77) phob2_cc_data_pane_g

0xa777,	// (0x0007f4b1) phob2_cc_data_pane_t1_ParamLimits

0xa777,	// (0x0007f4b1) phob2_cc_data_pane_t1

0xa78f,	// (0x0007f4c9) phob2_cc_data_pane_t2_ParamLimits

0xa78f,	// (0x0007f4c9) phob2_cc_data_pane_t2

0xa7a7,	// (0x0007f4e1) phob2_cc_data_pane_t3_ParamLimits

0xa7a7,	// (0x0007f4e1) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x00084c7c) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x00084c7c) phob2_cc_data_pane_t

0xeae1,	// (0x0008381b) phob2_cc_list_pane_ParamLimits

0xeae1,	// (0x0008381b) phob2_cc_list_pane

0xcefd,	// (0x00081c37) scroll_pane_cp035_ParamLimits

0xcefd,	// (0x00081c37) scroll_pane_cp035

0xa8e4,	// (0x0007f61e) bg_button_pane_cp033

0xeaed,	// (0x00083827) phob2_cc_button_pane_g1

0xeaf9,	// (0x00083833) phob2_cc_button_pane_t1

0xeb0e,	// (0x00083848) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x00084c83) phob2_cc_button_pane_t

0xa7c1,	// (0x0007f4fb) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa7c1,	// (0x0007f4fb) list_double_large_graphic_phob2_cc_pane

0xa7d5,	// (0x0007f50f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa7d5,	// (0x0007f50f) list_double_large_graphic_phob2_cc_pane_g1

0xa7e1,	// (0x0007f51b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa7e1,	// (0x0007f51b) list_double_large_graphic_phob2_cc_pane_g2

0xa7ed,	// (0x0007f527) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa7ed,	// (0x0007f527) list_double_large_graphic_phob2_cc_pane_g3

0x14b0,	// (0x000761ea) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x14b0,	// (0x000761ea) list_double_large_graphic_phob2_cc_pane_g4

0x14bc,	// (0x000761f6) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x14bc,	// (0x000761f6) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x00084c88) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x00084c88) list_double_large_graphic_phob2_cc_pane_g

0x14c8,	// (0x00076202) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x14c8,	// (0x00076202) list_double_large_graphic_phob2_cc_pane_t1

0x14f1,	// (0x0007622b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x14f1,	// (0x0007622b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x00084c93) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x00084c93) list_double_large_graphic_phob2_cc_pane_t

0xeb20,	// (0x0008385a) list_highlight_pane_cp025_ParamLimits

0xeb20,	// (0x0008385a) list_highlight_pane_cp025

0xa8e4,	// (0x0007f61e) bg_button_pane_cp033_ParamLimits

0xeaed,	// (0x00083827) phob2_cc_button_pane_g1_ParamLimits

0xeaf9,	// (0x00083833) phob2_cc_button_pane_t1_ParamLimits

0xeb0e,	// (0x00083848) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x00084c83) phob2_cc_button_pane_t_ParamLimits

0x1734,	// (0x0007646e) popup_wgtman_window

0xccff,	// (0x00081a39) scroll_pane_cp038

0xa354,	// (0x0007f08e) wgtman_btn_pane_cp_01_ParamLimits

0xa354,	// (0x0007f08e) wgtman_btn_pane_cp_01

0xeb2e,	// (0x00083868) wgtman_content_pane

0xe876,	// (0x000835b0) wgtman_heading_pane

0xa86c,	// (0x0007f5a6) bg_heading_pane_cp02

0xeb37,	// (0x00083871) wgtman_heading_pane_g1

0xeb3f,	// (0x00083879) wgtman_heading_pane_t1

0xeb4d,	// (0x00083887) scroll_pane_cp036

0xeb55,	// (0x0008388f) wgtman_list_pane

0xeb5d,	// (0x00083897) wgtman_list_pane_t1_ParamLimits

0xeb5d,	// (0x00083897) wgtman_list_pane_t1

0xef06,	// (0x00083c40) cam4_grid_pane

0x0df1,	// (0x00075b2b) bg_button_pane_cp015_ParamLimits

0x8972,	// (0x0007d6ac) bg_button_pane_cp016_ParamLimits

0x8985,	// (0x0007d6bf) bg_button_pane_cp017_ParamLimits

0x0e26,	// (0x00075b60) popup_vitu2_query_window_g3_ParamLimits

0x0e26,	// (0x00075b60) popup_vitu2_query_window_g3

0x0ea1,	// (0x00075bdb) popup_vitu2_query_window_t6_ParamLimits

0x0ea1,	// (0x00075bdb) popup_vitu2_query_window_t6

0x0ecc,	// (0x00075c06) popup_vitu2_query_window_t7_ParamLimits

0x0ecc,	// (0x00075c06) popup_vitu2_query_window_t7

0xcb57,	// (0x00081891) cam4_grid_pane_g1

0xcb60,	// (0x0008189a) cam4_grid_pane_g2

0xeb7f,	// (0x000838b9) cam4_grid_pane_g3

0xeb88,	// (0x000838c2) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x00084c98) cam4_grid_pane_g

0x2cef,	// (0x00077a29) aid_placing_vt_slider_lsc_ParamLimits

0x303c,	// (0x00077d76) vidtel_button_pane_ParamLimits

0x303c,	// (0x00077d76) vidtel_button_pane

0xeb93,	// (0x000838cd) bg_button_pane_cp034

0xa7f9,	// (0x0007f533) vidtel_button_pane_g1

0xeb9d,	// (0x000838d7) vidtel_button_pane_t1

0xce1c,	// (0x00081b56) aid_size_vtel_slider_touch

0xcefd,	// (0x00081c37) scroll_pane_cp039

0xd8ba,	// (0x000825f4) ncim_query_button_pane_cp01_ParamLimits

0xd8d9,	// (0x00082613) ncimui_query_pane_g1_ParamLimits

0xa8e4,	// (0x0007f61e) input_focus_pane_cp012_ParamLimits

0xd8fe,	// (0x00082638) ncim_query_entry_pane_t1_ParamLimits

0xcefd,	// (0x00081c37) scroll_pane_cp039_ParamLimits

0x456e,	// (0x000792a8) navi_pane_bcale_mc_g1

0x4576,	// (0x000792b0) navi_pane_bcale_mc_t1

0xdf16,	// (0x00082c50) main_sp_fs_email_pane_g1

0xdf1e,	// (0x00082c58) main_sp_fs_email_pane_g2

0x0001,

0xfcfa,	// (0x00084a34) main_sp_fs_email_pane_g

0xe475,	// (0x000831af) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe475,	// (0x000831af) list_single_cale_mrui_row_pane_g3

0x9fbd,	// (0x0007ecf7) list_single_recal_day_pane_g5_event_pane

0xe631,	// (0x0008336b) list_single_recal_day_pane_g7

0xebab,	// (0x000838e5) list_recal_day_event_pane_cp01

0xebb4,	// (0x000838ee) list_recal_vselct_arw_lo_pane_cp01

0xebbc,	// (0x000838f6) list_recal_vselct_arw_up_pane_cp01

0xebc4,	// (0x000838fe) list_recal_vselct_pane_cp01

0xce52,	// (0x00081b8c) list_recal_day_event_pane_cp01_g1

0xebce,	// (0x00083908) list_recal_day_event_pane_cp01_t1

0xe639,	// (0x00083373) list_single_recal_day_pane_t1_ParamLimits

0xe64b,	// (0x00083385) list_single_recal_day_pane_t2_ParamLimits

0xfe51,	// (0x00084b8b) list_single_recal_day_pane_t_ParamLimits

0x2199,	// (0x00076ed3) bg_notes_pane_ParamLimits

0x21a7,	// (0x00076ee1) list_notes_pane_ParamLimits

0x21b5,	// (0x00076eef) scroll_pane_cp06_ParamLimits

0x21dd,	// (0x00076f17) main_notes_pane_ParamLimits

0xa86c,	// (0x0007f5a6) main_welc_pane

0xa801,	// (0x0007f53b) main_welc_body_pane_ParamLimits

0xa801,	// (0x0007f53b) main_welc_body_pane

0xa815,	// (0x0007f54f) main_welc_opti_pane_ParamLimits

0xa815,	// (0x0007f54f) main_welc_opti_pane

0xa82c,	// (0x0007f566) main_welc_pane_t1_ParamLimits

0xa82c,	// (0x0007f566) main_welc_pane_t1

0xa845,	// (0x0007f57f) main_welc_body_row_pane_ParamLimits

0xa845,	// (0x0007f57f) main_welc_body_row_pane

0xa85c,	// (0x0007f596) main_welc_opti_row_pane_ParamLimits

0xa85c,	// (0x0007f596) main_welc_opti_row_pane

0xebdc,	// (0x00083916) main_welc_opti_row_pane_g1

0xebe4,	// (0x0008391e) main_welc_opti_row_pane_t1

0xebf3,	// (0x0008392d) main_welc_body_row_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
