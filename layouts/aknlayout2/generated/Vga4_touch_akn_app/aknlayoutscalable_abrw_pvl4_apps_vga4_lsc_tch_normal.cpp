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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000258a2 };

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
0x222c,	// (0x00027ace) Screen

0x2238,	// (0x00027ada) application_window

0x224e,	// (0x00027af0) area_bottom_pane_ParamLimits

0x224e,	// (0x00027af0) area_bottom_pane

0x0d9a,	// (0x0002663c) area_top_pane_ParamLimits

0x0d9a,	// (0x0002663c) area_top_pane

0xb3cd,	// (0x00030c6f) call_video_uplink_pane_ParamLimits

0xb3cd,	// (0x00030c6f) call_video_uplink_pane

0x0e28,	// (0x000266ca) main_pane_ParamLimits

0x0e28,	// (0x000266ca) main_pane

0xbfdd,	// (0x0003187f) context_pane

0x6a7a,	// (0x0002c31c) navi_pane

0x6ab1,	// (0x0002c353) popup_cale_events_window_ParamLimits

0x6ab1,	// (0x0002c353) popup_cale_events_window

0xbff0,	// (0x00031892) popup_mup_playback_window

0x6ac9,	// (0x0002c36b) signal_pane

0x2b27,	// (0x000283c9) main_browser_pane

0x32f6,	// (0x00028b98) main_burst_pane

0x1244,	// (0x00026ae6) main_calc_pane

0xbf79,	// (0x0003181b) main_cale_day_pane

0x1258,	// (0x00026afa) main_cale_month_pane

0xbf79,	// (0x0003181b) main_cale_week_pane

0x32f6,	// (0x00028b98) main_call_pane

0x26ff,	// (0x00027fa1) main_call_poc_pane

0x32f6,	// (0x00028b98) main_camera_pane

0x32f6,	// (0x00028b98) main_chi_dic_pane

0x4f45,	// (0x0002a7e7) main_clock_pane

0x26ff,	// (0x00027fa1) main_fmradio_pane

0x32f6,	// (0x00028b98) main_graph_messa_pane

0x26ff,	// (0x00027fa1) main_help_pane

0x2b27,	// (0x000283c9) main_im_pane

0x295a,	// (0x000281fc) main_image_pane_ParamLimits

0x295a,	// (0x000281fc) main_image_pane

0x26ff,	// (0x00027fa1) main_location2_pane

0x32f6,	// (0x00028b98) main_location_pane

0x295a,	// (0x000281fc) main_messa_pane

0x26ff,	// (0x00027fa1) main_mp2_pane

0x32f6,	// (0x00028b98) main_mp_pane

0x26ff,	// (0x00027fa1) main_msg_pane

0x26ff,	// (0x00027fa1) main_mup_eq_pane

0x26ff,	// (0x00027fa1) main_mup_pane

0x2b27,	// (0x000283c9) main_notes_pane

0x26ff,	// (0x00027fa1) main_pec_pane

0x26ff,	// (0x00027fa1) main_phob_pane

0x26ff,	// (0x00027fa1) main_pinb_pane

0x26ff,	// (0x00027fa1) main_postcard_pane

0x26ff,	// (0x00027fa1) main_qdial_pane

0x32f6,	// (0x00028b98) main_skin_pane

0x26ff,	// (0x00027fa1) main_smil2_pane

0x32f6,	// (0x00028b98) main_smil_pane

0x32f6,	// (0x00028b98) main_video_pane

0x32f6,	// (0x00028b98) main_video_tele_pane

0x295a,	// (0x000281fc) main_viewer_pane_ParamLimits

0x295a,	// (0x000281fc) main_viewer_pane

0x32f6,	// (0x00028b98) main_vorec_pane

0x12b6,	// (0x00026b58) popup_blid_sat_info_window_ParamLimits

0x12b6,	// (0x00026b58) popup_blid_sat_info_window

0x131a,	// (0x00026bbc) popup_dyc_status_message_window_ParamLimits

0x131a,	// (0x00026bbc) popup_dyc_status_message_window

0x1334,	// (0x00026bd6) popup_grid_large_graphic_window_ParamLimits

0x1334,	// (0x00026bd6) popup_grid_large_graphic_window

0x13f6,	// (0x00026c98) popup_loc_request_window_ParamLimits

0x13f6,	// (0x00026c98) popup_loc_request_window

0x151c,	// (0x00026dbe) popup_wml_address_window_ParamLimits

0x151c,	// (0x00026dbe) popup_wml_address_window

0x68c2,	// (0x0002c164) call_muted_g1

0x601b,	// (0x0002b8bd) popup_call_audio_conf_window_ParamLimits

0x601b,	// (0x0002b8bd) popup_call_audio_conf_window

0x68d2,	// (0x0002c174) popup_call_audio_first_window_ParamLimits

0x68d2,	// (0x0002c174) popup_call_audio_first_window

0x6948,	// (0x0002c1ea) popup_call_audio_in_window_ParamLimits

0x6948,	// (0x0002c1ea) popup_call_audio_in_window

0x6984,	// (0x0002c226) popup_call_audio_out_window_ParamLimits

0x6984,	// (0x0002c226) popup_call_audio_out_window

0x69be,	// (0x0002c260) popup_call_audio_second_window_ParamLimits

0x69be,	// (0x0002c260) popup_call_audio_second_window

0x6a14,	// (0x0002c2b6) popup_call_audio_wait_window_ParamLimits

0x6a14,	// (0x0002c2b6) popup_call_audio_wait_window

0x6a49,	// (0x0002c2eb) popup_number_entry_window_ParamLimits

0x6a49,	// (0x0002c2eb) popup_number_entry_window

0x2293,	// (0x00027b35) bg_popup_call_pane_cp05_ParamLimits

0x2293,	// (0x00027b35) bg_popup_call_pane_cp05

0x22b3,	// (0x00027b55) popup_number_entry_window_t1

0x22c6,	// (0x00027b68) popup_number_entry_window_t2

0x22d8,	// (0x00027b7a) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x00034927) popup_number_entry_window_t

0x231f,	// (0x00027bc1) text_title_cp2

0x2332,	// (0x00027bd4) bg_popup_call_pane_cp_ParamLimits

0x2332,	// (0x00027bd4) bg_popup_call_pane_cp

0x2340,	// (0x00027be2) call_thumbnail_pane

0x2348,	// (0x00027bea) popup_call_audio_in_window_g1_ParamLimits

0x2348,	// (0x00027bea) popup_call_audio_in_window_g1

0x2354,	// (0x00027bf6) popup_call_audio_in_window_g2_ParamLimits

0x2354,	// (0x00027bf6) popup_call_audio_in_window_g2

0x2360,	// (0x00027c02) popup_call_audio_in_window_g3_ParamLimits

0x2360,	// (0x00027c02) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x00034930) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x00034930) popup_call_audio_in_window_g

0x236c,	// (0x00027c0e) popup_call_audio_in_window_t1_ParamLimits

0x236c,	// (0x00027c0e) popup_call_audio_in_window_t1

0x2388,	// (0x00027c2a) popup_call_audio_in_window_t2_ParamLimits

0x2388,	// (0x00027c2a) popup_call_audio_in_window_t2

0x23a4,	// (0x00027c46) popup_call_audio_in_window_t3_ParamLimits

0x23a4,	// (0x00027c46) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x00034937) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x00034937) popup_call_audio_in_window_t

0x2332,	// (0x00027bd4) bg_popup_call_pane_cp01_ParamLimits

0x2332,	// (0x00027bd4) bg_popup_call_pane_cp01

0x2340,	// (0x00027be2) call_thumbnail_pane_cp02

0x23b7,	// (0x00027c59) call_type_pane_cp022

0x23bf,	// (0x00027c61) popup_call_audio_out_window_g1_ParamLimits

0x23bf,	// (0x00027c61) popup_call_audio_out_window_g1

0x23d1,	// (0x00027c73) popup_call_audio_out_window_g2_ParamLimits

0x23d1,	// (0x00027c73) popup_call_audio_out_window_g2

0x23dd,	// (0x00027c7f) popup_call_audio_out_window_g3_ParamLimits

0x23dd,	// (0x00027c7f) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0003493e) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0003493e) popup_call_audio_out_window_g

0x23ef,	// (0x00027c91) popup_call_audio_out_window_t1_ParamLimits

0x23ef,	// (0x00027c91) popup_call_audio_out_window_t1

0x2407,	// (0x00027ca9) popup_call_audio_out_window_t2_ParamLimits

0x2407,	// (0x00027ca9) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x00034945) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x00034945) popup_call_audio_out_window_t

0x241c,	// (0x00027cbe) bg_popup_call_pane_ParamLimits

0x241c,	// (0x00027cbe) bg_popup_call_pane

0x24a0,	// (0x00027d42) call_thumbnail_pane_cp_ParamLimits

0x24a0,	// (0x00027d42) call_thumbnail_pane_cp

0x24c4,	// (0x00027d66) call_type_pane_cp01_ParamLimits

0x24c4,	// (0x00027d66) call_type_pane_cp01

0x2508,	// (0x00027daa) popup_call_audio_first_window_g1_ParamLimits

0x2508,	// (0x00027daa) popup_call_audio_first_window_g1

0x2554,	// (0x00027df6) popup_call_audio_first_window_g2_ParamLimits

0x2554,	// (0x00027df6) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0003494a) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0003494a) popup_call_audio_first_window_g

0x2598,	// (0x00027e3a) popup_call_audio_first_window_t1_ParamLimits

0x2598,	// (0x00027e3a) popup_call_audio_first_window_t1

0x2644,	// (0x00027ee6) popup_call_audio_first_window_t4_ParamLimits

0x2644,	// (0x00027ee6) popup_call_audio_first_window_t4

0x26d0,	// (0x00027f72) popup_call_audio_first_window_t5_ParamLimits

0x26d0,	// (0x00027f72) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0003494f) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0003494f) popup_call_audio_first_window_t

0x26ff,	// (0x00027fa1) bg_popup_call_pane_cp02

0x2709,	// (0x00027fab) call_type_pane_cp023

0x2711,	// (0x00027fb3) popup_call_audio_wait_window_g1

0x2719,	// (0x00027fbb) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x00034956) popup_call_audio_wait_window_g

0x2721,	// (0x00027fc3) popup_call_audio_wait_window_t3

0x272f,	// (0x00027fd1) bg_popup_call_pane_cp03_ParamLimits

0x272f,	// (0x00027fd1) bg_popup_call_pane_cp03

0x278f,	// (0x00028031) call_thumbnail_pane_cp011_ParamLimits

0x278f,	// (0x00028031) call_thumbnail_pane_cp011

0x279b,	// (0x0002803d) call_type_pane_cp034_ParamLimits

0x279b,	// (0x0002803d) call_type_pane_cp034

0x27d7,	// (0x00028079) popup_call_audio_second_window_g1_ParamLimits

0x27d7,	// (0x00028079) popup_call_audio_second_window_g1

0x2813,	// (0x000280b5) popup_call_audio_second_window_g2_ParamLimits

0x2813,	// (0x000280b5) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0003495b) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0003495b) popup_call_audio_second_window_g

0x284f,	// (0x000280f1) popup_call_audio_second_window_t1_ParamLimits

0x284f,	// (0x000280f1) popup_call_audio_second_window_t1

0x28d0,	// (0x00028172) popup_call_audio_second_window_t2_ParamLimits

0x28d0,	// (0x00028172) popup_call_audio_second_window_t2

0x2906,	// (0x000281a8) popup_call_audio_second_window_t3_ParamLimits

0x2906,	// (0x000281a8) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x00034960) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x00034960) popup_call_audio_second_window_t

0x26ff,	// (0x00027fa1) bg_popup_call_pane_cp04

0x293c,	// (0x000281de) list_conf_pane

0x2944,	// (0x000281e6) popup_call_audio_conf_window_t1

0x2952,	// (0x000281f4) call_thumbnail_pane_g1

0x295a,	// (0x000281fc) bg_pinb_pane_ParamLimits

0x295a,	// (0x000281fc) bg_pinb_pane

0x2968,	// (0x0002820a) find_pinb_pane

0x295a,	// (0x000281fc) listscroll_pinb_pane_ParamLimits

0x295a,	// (0x000281fc) listscroll_pinb_pane

0x2972,	// (0x00028214) pinb_bg_pane_g1

0x2972,	// (0x00028214) pinb_bg_pane_g2

0x2972,	// (0x00028214) pinb_bg_pane_g3

0x2972,	// (0x00028214) pinb_bg_pane_g4

0x2972,	// (0x00028214) pinb_bg_pane_g5

0x2972,	// (0x00028214) pinb_bg_pane_g6

0x2972,	// (0x00028214) pinb_bg_pane_g7

0x2972,	// (0x00028214) pinb_bg_pane_g8

0x2972,	// (0x00028214) pinb_bg_pane_g9

0x2972,	// (0x00028214) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x00034967) pinb_bg_pane_g

0x2244,	// (0x00027ae6) grid_pinb_pane

0x2244,	// (0x00027ae6) list_pinb_pane

0x297c,	// (0x0002821e) scroll_pane_cp01_ParamLimits

0x297c,	// (0x0002821e) scroll_pane_cp01

0x298a,	// (0x0002822c) find_pinb_pane_g1_ParamLimits

0x298a,	// (0x0002822c) find_pinb_pane_g1

0x29a2,	// (0x00028244) find_pinb_pane_t1

0x29b4,	// (0x00028256) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x00034981) find_pinb_pane_t

0x29c9,	// (0x0002826b) input_focus_pane_cp01_ParamLimits

0x29c9,	// (0x0002826b) input_focus_pane_cp01

0x29d5,	// (0x00028277) cell_pinb_pane_ParamLimits

0x29d5,	// (0x00028277) cell_pinb_pane

0x29e3,	// (0x00028285) cell_pinb_pane_g1_ParamLimits

0x29e3,	// (0x00028285) cell_pinb_pane_g1

0x29f1,	// (0x00028293) cell_pinb_pane_g2_ParamLimits

0x29f1,	// (0x00028293) cell_pinb_pane_g2

0x29f1,	// (0x00028293) cell_pinb_pane_g3_ParamLimits

0x29f1,	// (0x00028293) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x00034986) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x00034986) cell_pinb_pane_g

0x26ff,	// (0x00027fa1) grid_highlight_pane_cp01

0x29d5,	// (0x00028277) list_pinb_item_pane_ParamLimits

0x29d5,	// (0x00028277) list_pinb_item_pane

0x2244,	// (0x00027ae6) list_highlight_pane_cp02

0x29ff,	// (0x000282a1) list_pinb_item_pane_g1_ParamLimits

0x29ff,	// (0x000282a1) list_pinb_item_pane_g1

0x29f1,	// (0x00028293) list_pinb_item_pane_g2_ParamLimits

0x29f1,	// (0x00028293) list_pinb_item_pane_g2

0x29e3,	// (0x00028285) list_pinb_item_pane_g3_ParamLimits

0x29e3,	// (0x00028285) list_pinb_item_pane_g3

0x29f1,	// (0x00028293) list_pinb_item_pane_g4_ParamLimits

0x29f1,	// (0x00028293) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0003498d) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0003498d) list_pinb_item_pane_g

0x2a0d,	// (0x000282af) list_pinb_item_pane_t1_ParamLimits

0x2a0d,	// (0x000282af) list_pinb_item_pane_t1

0x0fc3,	// (0x00026865) calc_display_pane

0x0fe8,	// (0x0002688a) calc_paper_pane

0x100b,	// (0x000268ad) grid_calc_pane

0x26ff,	// (0x00027fa1) bg_list_pane_cp01

0x2a21,	// (0x000282c3) clock_g1

0x2a29,	// (0x000282cb) clock_g2

0x0001,

0xf0f4,	// (0x00034996) clock_g

0x2a31,	// (0x000282d3) clock_t1_ParamLimits

0x2a31,	// (0x000282d3) clock_t1

0x2a46,	// (0x000282e8) clock_t2_ParamLimits

0x2a46,	// (0x000282e8) clock_t2

0x2a58,	// (0x000282fa) clock_t3_ParamLimits

0x2a58,	// (0x000282fa) clock_t3

0x2a6a,	// (0x0002830c) clock_t4_ParamLimits

0x2a6a,	// (0x0002830c) clock_t4

0x2a7c,	// (0x0002831e) clock_t5_ParamLimits

0x2a7c,	// (0x0002831e) clock_t5

0x2a91,	// (0x00028333) clock_t6_ParamLimits

0x2a91,	// (0x00028333) clock_t6

0x2aa3,	// (0x00028345) clock_t7_ParamLimits

0x2aa3,	// (0x00028345) clock_t7

0x2ab5,	// (0x00028357) clock_t8_ParamLimits

0x2ab5,	// (0x00028357) clock_t8

0x2ac9,	// (0x0002836b) clock_t9_ParamLimits

0x2ac9,	// (0x0002836b) clock_t9

0x0008,

0xf0f9,	// (0x0003499b) clock_t_ParamLimits

0xf0f9,	// (0x0003499b) clock_t

0x2adf,	// (0x00028381) popup_clock_analogue_window_cp02

0x2adf,	// (0x00028381) popup_clock_digital_window_cp01

0x26ff,	// (0x00027fa1) listscroll_help_pane

0x26ff,	// (0x00027fa1) phob_pre_status_pane

0x2ae7,	// (0x00028389) grid_qdial_pane

0x295a,	// (0x000281fc) listscroll_mce_pane

0x295a,	// (0x000281fc) bg_notes_pane

0x2af1,	// (0x00028393) list_notes_pane

0x2aff,	// (0x000283a1) scroll_pane_cp06

0x2b13,	// (0x000283b5) bg_calc_paper_pane

0xb40b,	// (0x00030cad) list_calc_pane

0x2b27,	// (0x000283c9) bg_calc_display_pane

0x1039,	// (0x000268db) calc_display_pane_t1

0x104b,	// (0x000268ed) calc_display_pane_t2

0xb425,	// (0x00030cc7) calc_display_pane_t3

0x0002,

0xf10c,	// (0x000349ae) calc_display_pane_t

0x105d,	// (0x000268ff) cell_calc_pane_ParamLimits

0x105d,	// (0x000268ff) cell_calc_pane

0x2b33,	// (0x000283d5) bg_calc_paper_pane_g1

0x2b3f,	// (0x000283e1) bg_calc_paper_pane_g2

0x2b4b,	// (0x000283ed) bg_calc_paper_pane_g3

0x2b57,	// (0x000283f9) bg_calc_paper_pane_g4

0x2b63,	// (0x00028405) bg_calc_paper_pane_g5

0x2b6f,	// (0x00028411) bg_calc_paper_pane_g6

0x2b7d,	// (0x0002841f) bg_calc_paper_pane_g7

0x2b8b,	// (0x0002842d) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x000349b5) bg_calc_paper_pane_g

0x2b9e,	// (0x00028440) calc_bg_paper_pane_g9

0x2bb1,	// (0x00028453) list_calc_item_pane_ParamLimits

0x2bb1,	// (0x00028453) list_calc_item_pane

0x2bc9,	// (0x0002846b) list_calc_item_pane_g1

0xb437,	// (0x00030cd9) list_calc_item_pane_t1_ParamLimits

0xb437,	// (0x00030cd9) list_calc_item_pane_t1

0x1098,	// (0x0002693a) list_calc_item_pane_t2_ParamLimits

0x1098,	// (0x0002693a) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x000349c6) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x000349c6) list_calc_item_pane_t

0x2972,	// (0x00028214) cell_calc_pane_g1

0x2bd6,	// (0x00028478) grid_highlight_pane_cp02

0x2bf8,	// (0x0002849a) bg_calc_display_pane_g1

0x10ca,	// (0x0002696c) bg_calc_display_pane_g2

0x2c01,	// (0x000284a3) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x000349d0) bg_calc_display_pane_g

0x10d4,	// (0x00026976) cell_qdial_pane_ParamLimits

0x10d4,	// (0x00026976) cell_qdial_pane

0x2c0a,	// (0x000284ac) cell_qdial_pane_g1_ParamLimits

0x2c0a,	// (0x000284ac) cell_qdial_pane_g1

0x2c20,	// (0x000284c2) cell_qdial_pane_g2_ParamLimits

0x2c20,	// (0x000284c2) cell_qdial_pane_g2

0x2c31,	// (0x000284d3) cell_qdial_pane_g3_ParamLimits

0x2c31,	// (0x000284d3) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x000349d7) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x000349d7) cell_qdial_pane_g

0x2c53,	// (0x000284f5) cell_qdial_pane_t1_ParamLimits

0x2c53,	// (0x000284f5) cell_qdial_pane_t1

0x2c6b,	// (0x0002850d) cell_qdial_pane_t2_ParamLimits

0x2c6b,	// (0x0002850d) cell_qdial_pane_t2

0x2c7e,	// (0x00028520) cell_qdial_pane_t3_ParamLimits

0x2c7e,	// (0x00028520) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x000349e0) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x000349e0) cell_qdial_pane_t

0x26ff,	// (0x00027fa1) grid_highlight_pane_cp04

0x2c91,	// (0x00028533) thumbnail_qdial_pane_ParamLimits

0x2c91,	// (0x00028533) thumbnail_qdial_pane

0x2ced,	// (0x0002858f) list_help_pane

0x2cf6,	// (0x00028598) scroll_pane_cp02

0x2cff,	// (0x000285a1) help_list_pane_t1_ParamLimits

0x2cff,	// (0x000285a1) help_list_pane_t1

0xb449,	// (0x00030ceb) bg_notes_pane_g2

0xb451,	// (0x00030cf3) bg_notes_pane_g3

0xb459,	// (0x00030cfb) notes_bg_pane_g1

0xb461,	// (0x00030d03) notes_bg_pane_g4

0xb469,	// (0x00030d0b) notes_bg_pane_g5

0xb471,	// (0x00030d13) notes_bg_pane_g6

0xb479,	// (0x00030d1b) notes_bg_pane_g7

0xb481,	// (0x00030d23) notes_bg_pane_g8

0xb489,	// (0x00030d2b) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x000349fe) notes_bg_pane_g

0x2d23,	// (0x000285c5) list_notes_text_pane_ParamLimits

0x2d23,	// (0x000285c5) list_notes_text_pane

0x2d3a,	// (0x000285dc) list_notes_text_pane_g1

0x2d43,	// (0x000285e5) list_notes_text_pane_t1

0x2d62,	// (0x00028604) listscroll_cale_week_pane

0x2d95,	// (0x00028637) bg_cale_heading_pane

0x2db9,	// (0x0002865b) bg_cale_pane_cp01

0x2dd6,	// (0x00028678) cale_week_corner_pane

0x2df5,	// (0x00028697) cale_week_day_heading_pane

0x2e1e,	// (0x000286c0) cale_week_scroll_pane_g1

0x2e3d,	// (0x000286df) cale_week_scroll_pane_g2

0x2e55,	// (0x000286f7) cale_week_scroll_pane_g3

0x2e6d,	// (0x0002870f) cale_week_scroll_pane_g4

0x2e85,	// (0x00028727) cale_week_scroll_pane_g5

0x2ea5,	// (0x00028747) cale_week_scroll_pane_g6

0x2ec5,	// (0x00028767) cale_week_scroll_pane_g7

0x2ee9,	// (0x0002878b) cale_week_scroll_pane_g8

0x2f0d,	// (0x000287af) cale_week_scroll_pane_g9

0x2f25,	// (0x000287c7) cale_week_scroll_pane_g10

0x2f3d,	// (0x000287df) cale_week_scroll_pane_g11

0x2f55,	// (0x000287f7) cale_week_scroll_pane_g12

0x2f79,	// (0x0002881b) cale_week_scroll_pane_g13

0x2f79,	// (0x0002881b) cale_week_scroll_pane_g14

0x2f79,	// (0x0002881b) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x00034a0d) cale_week_scroll_pane_g

0x2fc1,	// (0x00028863) cale_week_time_pane

0x2fe5,	// (0x00028887) grid_cale_week_pane

0x3029,	// (0x000288cb) scroll_pane_cp08

0x3046,	// (0x000288e8) cell_cale_week_pane_ParamLimits

0x3046,	// (0x000288e8) cell_cale_week_pane

0x30e2,	// (0x00028984) cale_week_day_heading_pane_t1

0x310c,	// (0x000289ae) cale_week_day_heading_pane_t2

0x313b,	// (0x000289dd) cale_week_day_heading_pane_t3

0x316a,	// (0x00028a0c) cale_week_day_heading_pane_t4

0x3199,	// (0x00028a3b) cale_week_day_heading_pane_t5

0x31cc,	// (0x00028a6e) cale_week_day_heading_pane_t6

0x3203,	// (0x00028aa5) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x00034a2e) cale_week_day_heading_pane_t

0x322d,	// (0x00028acf) bg_cale_side_pane

0x10e8,	// (0x0002698a) cale_week_time_pane_t1

0x1102,	// (0x000269a4) cale_week_time_pane_t2

0x111c,	// (0x000269be) cale_week_time_pane_t3

0x1136,	// (0x000269d8) cale_week_time_pane_t4

0x1150,	// (0x000269f2) cale_week_time_pane_t5

0x116a,	// (0x00026a0c) cale_week_time_pane_t6

0x118a,	// (0x00026a2c) cale_week_time_pane_t7

0x11b0,	// (0x00026a52) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x00034a3d) cale_week_time_pane_t

0x323b,	// (0x00028add) cell_cale_week_pane_g2

0x325f,	// (0x00028b01) cell_cale_week_pane_g3_ParamLimits

0x325f,	// (0x00028b01) cell_cale_week_pane_g3

0x3277,	// (0x00028b19) grid_highlight_pane_cp07

0x327f,	// (0x00028b21) listscroll_gms_pane

0x3289,	// (0x00028b2b) grid_gms_pane

0x3292,	// (0x00028b34) listscroll_gms_pane_g1

0x329a,	// (0x00028b3c) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x00034a4e) listscroll_gms_pane_g

0x32a2,	// (0x00028b44) scroll_pane_cp010

0x32ad,	// (0x00028b4f) cell_gms_pane_ParamLimits

0x32ad,	// (0x00028b4f) cell_gms_pane

0x32c4,	// (0x00028b66) cell_gms_pane_g1

0x32cc,	// (0x00028b6e) cell_gms_pane_g2

0x32d4,	// (0x00028b76) cell_gms_pane_g3

0x32dd,	// (0x00028b7f) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x00034a53) cell_gms_pane_g

0x32e6,	// (0x00028b88) grid_highlight_pane_cp09

0x6846,	// (0x0002c0e8) phob_pre_status_pane_g1

0x684e,	// (0x0002c0f0) phob_pre_status_pane_g2

0x6856,	// (0x0002c0f8) phob_pre_status_pane_g3

0x685e,	// (0x0002c100) phob_pre_status_pane_g4

0x0004,

0xf575,	// (0x00034e17) phob_pre_status_pane_g

0x686e,	// (0x0002c110) phob_pre_status_pane_t1

0x687e,	// (0x0002c120) phob_pre_status_pane_t2

0x688e,	// (0x0002c130) phob_pre_status_pane_t3

0x0002,

0xf580,	// (0x00034e22) phob_pre_status_pane_t

0x32f6,	// (0x00028b98) bg_list_pane_cp05

0x32fe,	// (0x00028ba0) grid_vorec_pane

0x3308,	// (0x00028baa) vorec_t1

0x3316,	// (0x00028bb8) vorec_t2

0x3324,	// (0x00028bc6) vorec_t3

0x3332,	// (0x00028bd4) vorec_t4

0x2206,	// (0x00027aa8) vorec_t5

0x2214,	// (0x00027ab6) vorec_t6

0x0004,

0xf1ba,	// (0x00034a5c) vorec_t

0x2222,	// (0x00027ac4) wait_bar_pane_cp01

0x334e,	// (0x00028bf0) cell_vorec_pane_ParamLimits

0x334e,	// (0x00028bf0) cell_vorec_pane

0xb491,	// (0x00030d33) cell_vorec_pane_g1

0x26ff,	// (0x00027fa1) grid_highlight_pane_cp05

0x297c,	// (0x0002821e) cams_zoom_pane

0x297c,	// (0x0002821e) image_vga_pane

0x29e3,	// (0x00028285) main_camera_pane_g1

0x29e3,	// (0x00028285) main_camera_pane_g2

0x29e3,	// (0x00028285) main_camera_pane_g3

0x29e3,	// (0x00028285) main_camera_pane_g4

0x29e3,	// (0x00028285) main_camera_pane_g5

0x29e3,	// (0x00028285) main_camera_pane_g6

0x29e3,	// (0x00028285) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x00034a67) main_camera_pane_g

0x3363,	// (0x00028c05) main_camera_pane_t1

0x3363,	// (0x00028c05) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x00034a78) main_camera_pane_t

0x338b,	// (0x00028c2d) cams_zoom_pane_cp_ParamLimits

0x338b,	// (0x00028c2d) cams_zoom_pane_cp

0x33bf,	// (0x00028c61) image_cif_pane_ParamLimits

0x33bf,	// (0x00028c61) image_cif_pane

0x2244,	// (0x00027ae6) image_subqcif_pane

0x33d1,	// (0x00028c73) main_video_pane_g1_ParamLimits

0x33d1,	// (0x00028c73) main_video_pane_g1

0x33ff,	// (0x00028ca1) main_video_pane_g2_ParamLimits

0x33ff,	// (0x00028ca1) main_video_pane_g2

0x3439,	// (0x00028cdb) main_video_pane_g3_ParamLimits

0x3439,	// (0x00028cdb) main_video_pane_g3

0x3439,	// (0x00028cdb) main_video_pane_g4_ParamLimits

0x3439,	// (0x00028cdb) main_video_pane_g4

0x346d,	// (0x00028d0f) main_video_pane_g5_ParamLimits

0x346d,	// (0x00028d0f) main_video_pane_g5

0x347b,	// (0x00028d1d) main_video_pane_g6_ParamLimits

0x347b,	// (0x00028d1d) main_video_pane_g6

0x0006,

0xf1db,	// (0x00034a7d) main_video_pane_g_ParamLimits

0xf1db,	// (0x00034a7d) main_video_pane_g

0x34a3,	// (0x00028d45) main_video_pane_t1_ParamLimits

0x34a3,	// (0x00028d45) main_video_pane_t1

0x34e7,	// (0x00028d89) cams_zoom_pane_g1

0x34e7,	// (0x00028d89) cams_zoom_pane_g2

0x34e7,	// (0x00028d89) cams_zoom_pane_g3

0x34e7,	// (0x00028d89) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x00034a8c) cams_zoom_pane_g

0x3505,	// (0x00028da7) grid_cams_pane

0x351f,	// (0x00028dc1) linegrid_cams_pane

0x3531,	// (0x00028dd3) cell_cams_pane_ParamLimits

0x3531,	// (0x00028dd3) cell_cams_pane

0x3553,	// (0x00028df5) cams_burst_image_pane

0x355b,	// (0x00028dfd) cell_cams_pane_g1

0x26ff,	// (0x00027fa1) grid_highlight_pane_cp03

0x2972,	// (0x00028214) mp_bg_pane_g1

0x2244,	// (0x00027ae6) bg_list_pane_cp03

0x2244,	// (0x00027ae6) bg_mp_pane

0x2244,	// (0x00027ae6) grid_mp_pane

0x34e7,	// (0x00028d89) media_player_g1

0x4c51,	// (0x0002a4f3) media_player_t1

0x4c51,	// (0x0002a4f3) media_player_t2

0x4c51,	// (0x0002a4f3) media_player_t3

0x4c51,	// (0x0002a4f3) media_player_t4

0x4c51,	// (0x0002a4f3) media_player_t5

0x4c51,	// (0x0002a4f3) media_player_t6

0x4c51,	// (0x0002a4f3) media_player_t7

0x0006,

0xf55f,	// (0x00034e01) media_player_t

0x2244,	// (0x00027ae6) wait_bar_pane_cp02

0xf544,	// (0x00034de6) main_usb_pane_t

0x4f45,	// (0x0002a7e7) cell_mp_pane

0x2972,	// (0x00028214) cell_mp_pane_g1

0x26ff,	// (0x00027fa1) grid_highlight_pane_cp06

0x3563,	// (0x00028e05) grid_skin_colour_pane

0x356b,	// (0x00028e0d) list_highlight_pane_cp03

0x3573,	// (0x00028e15) skin_g1

0x357d,	// (0x00028e1f) skin_t1

0x358c,	// (0x00028e2e) skin_t2

0x0001,

0xf218,	// (0x00034aba) skin_t

0x359a,	// (0x00028e3c) cell_skin_colour_pane_ParamLimits

0x359a,	// (0x00028e3c) cell_skin_colour_pane

0x35ba,	// (0x00028e5c) cell_skin_colour_pane_g1

0x361f,	// (0x00028ec1) call_video_g1_ParamLimits

0x361f,	// (0x00028ec1) call_video_g1

0x363b,	// (0x00028edd) call_video_g2_ParamLimits

0x363b,	// (0x00028edd) call_video_g2

0x0001,

0xf21d,	// (0x00034abf) call_video_g_ParamLimits

0xf21d,	// (0x00034abf) call_video_g

0x3680,	// (0x00028f22) call_video_uplink_pane_cp1_ParamLimits

0x3680,	// (0x00028f22) call_video_uplink_pane_cp1

0x36e5,	// (0x00028f87) call_video_uplink_pane_cp2

0x3729,	// (0x00028fcb) video_down_crop_pane_ParamLimits

0x3729,	// (0x00028fcb) video_down_crop_pane

0x3812,	// (0x000290b4) video_down_pane_ParamLimits

0x3812,	// (0x000290b4) video_down_pane

0x3904,	// (0x000291a6) video_down_subqcif_pane_ParamLimits

0x3904,	// (0x000291a6) video_down_subqcif_pane

0x391e,	// (0x000291c0) video_down_subqcif_pane_cp_ParamLimits

0x391e,	// (0x000291c0) video_down_subqcif_pane_cp

0x395f,	// (0x00029201) im_reading_pane_ParamLimits

0x395f,	// (0x00029201) im_reading_pane

0x3971,	// (0x00029213) im_writing_pane_ParamLimits

0x3971,	// (0x00029213) im_writing_pane

0x3997,	// (0x00029239) im_reading_pane_t1

0x39d6,	// (0x00029278) list_im_pane

0x39e7,	// (0x00029289) scroll_pane_cp07

0x3a00,	// (0x000292a2) im_writing_pane_t1_ParamLimits

0x3a00,	// (0x000292a2) im_writing_pane_t1

0x3a15,	// (0x000292b7) im_writing_pane_t2_ParamLimits

0x3a15,	// (0x000292b7) im_writing_pane_t2

0x0001,

0xf227,	// (0x00034ac9) im_writing_pane_t_ParamLimits

0xf227,	// (0x00034ac9) im_writing_pane_t

0x26ff,	// (0x00027fa1) input_focus_pane_cp04

0x26ff,	// (0x00027fa1) input_focus_pane_cp05

0x3a32,	// (0x000292d4) list_im_single_pane_ParamLimits

0x3a32,	// (0x000292d4) list_im_single_pane

0x3a4b,	// (0x000292ed) list_single_im_pane_t1

0x32f6,	// (0x00028b98) blid_accuracy_pane

0x32f6,	// (0x00028b98) blid_compass_pane

0xbf31,	// (0x000317d3) main_location_t1

0xbf31,	// (0x000317d3) main_location_t2

0xbf31,	// (0x000317d3) main_location_t3

0x0002,

0xf56e,	// (0x00034e10) main_location_t

0x26ff,	// (0x00027fa1) aid_levels_location

0x2972,	// (0x00028214) blid_accuracy_pane_g1

0x2972,	// (0x00028214) blid_accuracy_pane_g2

0x0001,

0xf276,	// (0x00034b18) blid_accuracy_pane_g

0x3a85,	// (0x00029327) wml_content_pane

0x3ac3,	// (0x00029365) wml_button_pane_ParamLimits

0x3ac3,	// (0x00029365) wml_button_pane

0x3ad7,	// (0x00029379) wml_list_single_large_pane_ParamLimits

0x3ad7,	// (0x00029379) wml_list_single_large_pane

0x3af0,	// (0x00029392) wml_list_single_medium_pane_ParamLimits

0x3af0,	// (0x00029392) wml_list_single_medium_pane

0x3b0a,	// (0x000293ac) wml_list_single_small_pane_ParamLimits

0x3b0a,	// (0x000293ac) wml_list_single_small_pane

0x3b29,	// (0x000293cb) wml_selection_box_pane_ParamLimits

0x3b29,	// (0x000293cb) wml_selection_box_pane

0x3b3c,	// (0x000293de) wml_list_single_pane_t1

0x3b4b,	// (0x000293ed) wml_list_single_medium_pane_t1

0x3b5a,	// (0x000293fc) wml_list_single_large_pane_t1

0x3b69,	// (0x0002940b) input_focus_pane_cp02_ParamLimits

0x3b69,	// (0x0002940b) input_focus_pane_cp02

0x3b7c,	// (0x0002941e) wml_selection_box_pane_g1

0x3b85,	// (0x00029427) wml_selection_box_pane_t1_ParamLimits

0x3b85,	// (0x00029427) wml_selection_box_pane_t1

0x295a,	// (0x000281fc) bg_wml_button_pane_ParamLimits

0x295a,	// (0x000281fc) bg_wml_button_pane

0x3b9d,	// (0x0002943f) wml_button_pane_g1

0x3ba5,	// (0x00029447) wml_button_pane_t1

0x3b9d,	// (0x0002943f) wml_button_bg_pane_g1

0x3bb5,	// (0x00029457) wml_button_bg_pane_g2

0x3bbd,	// (0x0002945f) wml_button_bg_pane_g3

0x3bc5,	// (0x00029467) wml_button_bg_pane_g4

0x3bcd,	// (0x0002946f) wml_button_bg_pane_g5

0x3bd5,	// (0x00029477) wml_button_bg_pane_g6

0x3bdd,	// (0x0002947f) wml_button_bg_pane_g7

0x3be5,	// (0x00029487) wml_button_bg_pane_g8

0x3bed,	// (0x0002948f) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x00034ace) wml_button_bg_pane_g

0x3bf5,	// (0x00029497) bg_list_pane_cp02

0x3bff,	// (0x000294a1) mce_header_pane_ParamLimits

0x3bff,	// (0x000294a1) mce_header_pane

0x3c15,	// (0x000294b7) mce_icon_pane

0x3c15,	// (0x000294b7) mce_image_pane

0x3c1e,	// (0x000294c0) mce_text_pane_ParamLimits

0x3c1e,	// (0x000294c0) mce_text_pane

0x3c31,	// (0x000294d3) scroll_pane_cp03

0x3abb,	// (0x0002935d) scroll_pane_cp04

0x3c3b,	// (0x000294dd) scroll_pane_cp05_ParamLimits

0x3c3b,	// (0x000294dd) scroll_pane_cp05

0x3c47,	// (0x000294e9) mce_header_field_pane_ParamLimits

0x3c47,	// (0x000294e9) mce_header_field_pane

0x3c60,	// (0x00029502) mce_header_field_pane_2_ParamLimits

0x3c60,	// (0x00029502) mce_header_field_pane_2

0x3c76,	// (0x00029518) mce_header_field_pane_3

0x3c7e,	// (0x00029520) list_single_mce_message_pane_ParamLimits

0x3c7e,	// (0x00029520) list_single_mce_message_pane

0x3c9a,	// (0x0002953c) list_single_mce_smart_pane_ParamLimits

0x3c9a,	// (0x0002953c) list_single_mce_smart_pane

0x3cc1,	// (0x00029563) input_focus_pane_cp03

0x3cca,	// (0x0002956c) list_header_data_pane

0x3cd2,	// (0x00029574) mce_header_field_pane_t1

0x3ce2,	// (0x00029584) list_single_mce_header_pane_ParamLimits

0x3ce2,	// (0x00029584) list_single_mce_header_pane

0x3cf6,	// (0x00029598) list_single_mce_header_pane_t1

0x3d05,	// (0x000295a7) list_single_mce_message_pane_g1

0x3d0d,	// (0x000295af) list_single_mce_message_pane_t1

0x3d41,	// (0x000295e3) bg_cale_heading_pane_cp01_ParamLimits

0x3d41,	// (0x000295e3) bg_cale_heading_pane_cp01

0x3d93,	// (0x00029635) bg_cale_pane_cp02_ParamLimits

0x3d93,	// (0x00029635) bg_cale_pane_cp02

0x3dc0,	// (0x00029662) cale_month_corner_pane

0x3ddf,	// (0x00029681) cale_month_day_heading_pane_ParamLimits

0x3ddf,	// (0x00029681) cale_month_day_heading_pane

0x3e49,	// (0x000296eb) cale_month_pane_g1_ParamLimits

0x3e49,	// (0x000296eb) cale_month_pane_g1

0x3e90,	// (0x00029732) cale_month_pane_g2_ParamLimits

0x3e90,	// (0x00029732) cale_month_pane_g2

0x3ecc,	// (0x0002976e) cale_month_pane_g3_ParamLimits

0x3ecc,	// (0x0002976e) cale_month_pane_g3

0x3f20,	// (0x000297c2) cale_month_pane_g4_ParamLimits

0x3f20,	// (0x000297c2) cale_month_pane_g4

0x3f74,	// (0x00029816) cale_month_pane_g5_ParamLimits

0x3f74,	// (0x00029816) cale_month_pane_g5

0x3fd0,	// (0x00029872) cale_month_pane_g6_ParamLimits

0x3fd0,	// (0x00029872) cale_month_pane_g6

0x4038,	// (0x000298da) cale_month_pane_g7_ParamLimits

0x4038,	// (0x000298da) cale_month_pane_g7

0x40a4,	// (0x00029946) cale_month_pane_g8_ParamLimits

0x40a4,	// (0x00029946) cale_month_pane_g8

0x4110,	// (0x000299b2) cale_month_pane_g9_ParamLimits

0x4110,	// (0x000299b2) cale_month_pane_g9

0x4174,	// (0x00029a16) cale_month_pane_g10_ParamLimits

0x4174,	// (0x00029a16) cale_month_pane_g10

0x41c6,	// (0x00029a68) cale_month_pane_g11_ParamLimits

0x41c6,	// (0x00029a68) cale_month_pane_g11

0x4218,	// (0x00029aba) cale_month_pane_g12_ParamLimits

0x4218,	// (0x00029aba) cale_month_pane_g12

0x4270,	// (0x00029b12) cale_month_pane_g13_ParamLimits

0x4270,	// (0x00029b12) cale_month_pane_g13

0x000c,

0xf23f,	// (0x00034ae1) cale_month_pane_g_ParamLimits

0xf23f,	// (0x00034ae1) cale_month_pane_g

0x42da,	// (0x00029b7c) cale_month_week_pane

0x42fe,	// (0x00029ba0) grid_cale_month_pane_ParamLimits

0x42fe,	// (0x00029ba0) grid_cale_month_pane

0x435f,	// (0x00029c01) cale_month_day_heading_pane_t1

0x43e5,	// (0x00029c87) cale_month_day_heading_pane_t2

0x445e,	// (0x00029d00) cale_month_day_heading_pane_t3

0x44d7,	// (0x00029d79) cale_month_day_heading_pane_t4

0x4558,	// (0x00029dfa) cale_month_day_heading_pane_t5

0x45e1,	// (0x00029e83) cale_month_day_heading_pane_t6

0x4672,	// (0x00029f14) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x00034afc) cale_month_day_heading_pane_t

0x322d,	// (0x00028acf) bg_cale_side_pane_cp01

0x4703,	// (0x00029fa5) cale_month_week_pane_t1

0x471c,	// (0x00029fbe) cale_month_week_pane_t2

0x4735,	// (0x00029fd7) cale_month_week_pane_t3

0x474e,	// (0x00029ff0) cale_month_week_pane_t4

0x4767,	// (0x0002a009) cale_month_week_pane_t5

0x4780,	// (0x0002a022) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x00034b0b) cale_month_week_pane_t

0x47a5,	// (0x0002a047) cell_cale_month_pane_ParamLimits

0x47a5,	// (0x0002a047) cell_cale_month_pane

0xb49b,	// (0x00030d3d) cell_cale_month_pane_g1

0x11d6,	// (0x00026a78) cell_cale_month_pane_t1_ParamLimits

0x11d6,	// (0x00026a78) cell_cale_month_pane_t1

0x3277,	// (0x00028b19) grid_highlight_pane_cp08

0x2972,	// (0x00028214) main_smil_g1

0x48ef,	// (0x0002a191) smil_status_pane

0x48fa,	// (0x0002a19c) smil_text_pane

0xbe47,	// (0x000316e9) bg_popup_call3_rect_pane_g8

0xbe4f,	// (0x000316f1) bg_popup_call3_rect_pane_g9

0x0008,

0xf502,	// (0x00034da4) bg_popup_call3_rect_pane_g

0xc065,	// (0x00031907) smil_status_volume_pane_g1

0x490e,	// (0x0002a1b0) smil_status_pane_t1

0xc098,	// (0x0003193a) volume_smil_pane

0x4925,	// (0x0002a1c7) list_smil_text_pane

0x492f,	// (0x0002a1d1) scroll_pane_cp011

0x493a,	// (0x0002a1dc) smil_text_list_pane_t1_ParamLimits

0x493a,	// (0x0002a1dc) smil_text_list_pane_t1

0xb4a7,	// (0x00030d49) aid_volume_smil_ParamLimits

0xb4a7,	// (0x00030d49) aid_volume_smil

0x2972,	// (0x00028214) smil_volume_pane_g1

0x2972,	// (0x00028214) smil_volume_pane_g2

0x0001,

0xf276,	// (0x00034b18) smil_volume_pane_g

0x2d62,	// (0x00028604) listscroll_cale_day_pane

0x4985,	// (0x0002a227) bg_cale_pane

0x499d,	// (0x0002a23f) list_cale_pane

0x49c0,	// (0x0002a262) scroll_pane_cp09

0x49d1,	// (0x0002a273) cale_bg_pane_g1

0x49d9,	// (0x0002a27b) cale_bg_pane_g2

0x49e1,	// (0x0002a283) cale_bg_pane_g3

0x49e9,	// (0x0002a28b) cale_bg_pane_g4

0x49f1,	// (0x0002a293) cale_bg_pane_g5

0x49f9,	// (0x0002a29b) cale_bg_pane_g6

0x4a01,	// (0x0002a2a3) cale_bg_pane_g7

0x4a09,	// (0x0002a2ab) cale_bg_pane_g8

0x4a11,	// (0x0002a2b3) cale_bg_pane_g9

0x0008,

0xf27b,	// (0x00034b1d) cale_bg_pane_g

0x4a21,	// (0x0002a2c3) list_cale_time_pane_ParamLimits

0x4a21,	// (0x0002a2c3) list_cale_time_pane

0x4a3b,	// (0x0002a2dd) list_cale_time_pane_g1_ParamLimits

0x4a3b,	// (0x0002a2dd) list_cale_time_pane_g1

0x4a47,	// (0x0002a2e9) list_cale_time_pane_g2_ParamLimits

0x4a47,	// (0x0002a2e9) list_cale_time_pane_g2

0x4a54,	// (0x0002a2f6) list_cale_time_pane_g3_ParamLimits

0x4a54,	// (0x0002a2f6) list_cale_time_pane_g3

0x4a62,	// (0x0002a304) list_cale_time_pane_g4_ParamLimits

0x4a62,	// (0x0002a304) list_cale_time_pane_g4

0x4a70,	// (0x0002a312) list_cale_time_pane_g5_ParamLimits

0x4a70,	// (0x0002a312) list_cale_time_pane_g5

0x0005,

0xf28e,	// (0x00034b30) list_cale_time_pane_g_ParamLimits

0xf28e,	// (0x00034b30) list_cale_time_pane_g

0x4a8b,	// (0x0002a32d) list_cale_time_pane_t1_ParamLimits

0x4a8b,	// (0x0002a32d) list_cale_time_pane_t1

0x4ab3,	// (0x0002a355) list_cale_time_pane_t2_ParamLimits

0x4ab3,	// (0x0002a355) list_cale_time_pane_t2

0x5180,	// (0x0002aa22) aid_blid_cardinal_pane

0x51ce,	// (0x0002aa70) compass_pane_t4

0x4adb,	// (0x0002a37d) list_cale_time_pane_t4_ParamLimits

0x4adb,	// (0x0002a37d) list_cale_time_pane_t4

0x51dc,	// (0x0002aa7e) compass_pane_t5

0x51ec,	// (0x0002aa8e) compass_pane_t6

0x51fa,	// (0x0002aa9c) compass_pane_t7

0x5292,	// (0x0002ab34) navi_pane_cc_t1

0x54b1,	// (0x0002ad53) aid_phob_thumbnail_center_pane

0x59ed,	// (0x0002b28f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf29b,	// (0x00034b3d) list_cale_time_pane_t_ParamLimits

0xf29b,	// (0x00034b3d) list_cale_time_pane_t

0x2332,	// (0x00027bd4) bg_popup_window_pane_cp02_ParamLimits

0x2332,	// (0x00027bd4) bg_popup_window_pane_cp02

0x4b03,	// (0x0002a3a5) heading_pane_cp01_ParamLimits

0x4b03,	// (0x0002a3a5) heading_pane_cp01

0x4b0f,	// (0x0002a3b1) loc_req_pane_ParamLimits

0x4b0f,	// (0x0002a3b1) loc_req_pane

0x4b1f,	// (0x0002a3c1) loc_type_pane_ParamLimits

0x4b1f,	// (0x0002a3c1) loc_type_pane

0x4b31,	// (0x0002a3d3) loc_type_pane_t1_ParamLimits

0x4b31,	// (0x0002a3d3) loc_type_pane_t1

0x4b43,	// (0x0002a3e5) loc_type_pane_t2_ParamLimits

0x4b43,	// (0x0002a3e5) loc_type_pane_t2

0x4b55,	// (0x0002a3f7) loc_type_pane_t3_ParamLimits

0x4b55,	// (0x0002a3f7) loc_type_pane_t3

0x0002,

0xf2a2,	// (0x00034b44) loc_type_pane_t_ParamLimits

0xf2a2,	// (0x00034b44) loc_type_pane_t

0x4b67,	// (0x0002a409) list_loc_req_pane

0x4b71,	// (0x0002a413) scroll_pane_cp012

0x4b7c,	// (0x0002a41e) list_single_loc_request_popup_menu_pane_ParamLimits

0x4b7c,	// (0x0002a41e) list_single_loc_request_popup_menu_pane

0x4b89,	// (0x0002a42b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x4b89,	// (0x0002a42b) list_single_loc_request_popup_menu_pane_g1

0x4b95,	// (0x0002a437) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x4b95,	// (0x0002a437) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2a9,	// (0x00034b4b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2a9,	// (0x00034b4b) list_single_loc_request_popup_menu_pane_g

0x4ba1,	// (0x0002a443) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x4ba1,	// (0x0002a443) list_single_loc_request_popup_menu_pane_t1

0x295a,	// (0x000281fc) bg_popup_window_pane_cp03_ParamLimits

0x295a,	// (0x000281fc) bg_popup_window_pane_cp03

0x4bb7,	// (0x0002a459) heading_loc_req_pane_ParamLimits

0x4bb7,	// (0x0002a459) heading_loc_req_pane

0x4bc3,	// (0x0002a465) popup_dyc_status_message_window_g1_ParamLimits

0x4bc3,	// (0x0002a465) popup_dyc_status_message_window_g1

0x4bd7,	// (0x0002a479) popup_dyc_status_message_window_t1_ParamLimits

0x4bd7,	// (0x0002a479) popup_dyc_status_message_window_t1

0x4bec,	// (0x0002a48e) popup_dyc_status_message_window_t2_ParamLimits

0x4bec,	// (0x0002a48e) popup_dyc_status_message_window_t2

0x4c01,	// (0x0002a4a3) popup_dyc_status_message_window_t3_ParamLimits

0x4c01,	// (0x0002a4a3) popup_dyc_status_message_window_t3

0x0002,

0xf2ae,	// (0x00034b50) popup_dyc_status_message_window_t_ParamLimits

0xf2ae,	// (0x00034b50) popup_dyc_status_message_window_t

0x26ff,	// (0x00027fa1) bg_heading_pane_cp01

0x4c1d,	// (0x0002a4bf) heading_loc_req_pane_g1

0x4c25,	// (0x0002a4c7) heading_loc_req_pane_g2

0x4c2d,	// (0x0002a4cf) heading_loc_req_pane_g3

0x0002,

0xf2b5,	// (0x00034b57) heading_loc_req_pane_g

0x4c35,	// (0x0002a4d7) heading_loc_req_pane_t1

0x4c61,	// (0x0002a503) bg_popup_sub_pane_cp01_ParamLimits

0x4c61,	// (0x0002a503) bg_popup_sub_pane_cp01

0x4c6f,	// (0x0002a511) popup_cale_events_window_g1_ParamLimits

0x4c6f,	// (0x0002a511) popup_cale_events_window_g1

0x4c8f,	// (0x0002a531) popup_cale_events_window_g2_ParamLimits

0x4c8f,	// (0x0002a531) popup_cale_events_window_g2

0x0001,

0xf2d7,	// (0x00034b79) popup_cale_events_window_g_ParamLimits

0xf2d7,	// (0x00034b79) popup_cale_events_window_g

0x4caf,	// (0x0002a551) popup_cale_events_window_t1_ParamLimits

0x4caf,	// (0x0002a551) popup_cale_events_window_t1

0x4cc1,	// (0x0002a563) popup_cale_events_window_t2_ParamLimits

0x4cc1,	// (0x0002a563) popup_cale_events_window_t2

0x4cff,	// (0x0002a5a1) popup_cale_events_window_t3_ParamLimits

0x4cff,	// (0x0002a5a1) popup_cale_events_window_t3

0x4d39,	// (0x0002a5db) popup_cale_events_window_t4_ParamLimits

0x4d39,	// (0x0002a5db) popup_cale_events_window_t4

0x0003,

0xf2dc,	// (0x00034b7e) popup_cale_events_window_t_ParamLimits

0xf2dc,	// (0x00034b7e) popup_cale_events_window_t

0x4d6f,	// (0x0002a611) call_type_pane

0x4d7f,	// (0x0002a621) popup_call_status_window_g1

0x4d93,	// (0x0002a635) popup_call_status_window_g2

0x4da7,	// (0x0002a649) popup_call_status_window_g3

0x0002,

0xf2e5,	// (0x00034b87) popup_call_status_window_g

0x4db7,	// (0x0002a659) call_type_pane_g1

0x4dc0,	// (0x0002a662) call_type_pane_g2

0x0001,

0xf2ec,	// (0x00034b8e) call_type_pane_g

0x26ff,	// (0x00027fa1) bg_popup_sub_pane_cp02

0x4dc9,	// (0x0002a66b) listscroll_popup_wml_pane

0x4dd1,	// (0x0002a673) list_wml_pane

0x4ddb,	// (0x0002a67d) scroll_pane_cp013

0x4de6,	// (0x0002a688) list_single_graphic_popup_wml_pane_ParamLimits

0x4de6,	// (0x0002a688) list_single_graphic_popup_wml_pane

0x2972,	// (0x00028214) list_single_graphic_popup_wml_pane_g1

0x4dfa,	// (0x0002a69c) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f1,	// (0x00034b93) list_single_graphic_popup_wml_pane_g

0x4e02,	// (0x0002a6a4) list_single_graphic_popup_wml_pane_t1

0x4e18,	// (0x0002a6ba) aid_call_pane

0x2952,	// (0x000281f4) popup_clock_analogue_window_g1

0x2952,	// (0x000281f4) popup_clock_analogue_window_g2

0xb4d5,	// (0x00030d77) popup_clock_analogue_window_g3

0xb4d5,	// (0x00030d77) popup_clock_analogue_window_g4

0x2972,	// (0x00028214) popup_clock_analogue_window_g5

0x0004,

0xf2f6,	// (0x00034b98) popup_clock_analogue_window_g

0xb4dd,	// (0x00030d7f) popup_clock_analogue_window_t1

0xb4eb,	// (0x00030d8d) clock_digital_number_pane_ParamLimits

0xb4eb,	// (0x00030d8d) clock_digital_number_pane

0xb4f7,	// (0x00030d99) clock_digital_number_pane_cp02_ParamLimits

0xb4f7,	// (0x00030d99) clock_digital_number_pane_cp02

0xb503,	// (0x00030da5) clock_digital_number_pane_cp03_ParamLimits

0xb503,	// (0x00030da5) clock_digital_number_pane_cp03

0xb50f,	// (0x00030db1) clock_digital_number_pane_cp04_ParamLimits

0xb50f,	// (0x00030db1) clock_digital_number_pane_cp04

0xb51b,	// (0x00030dbd) clock_digital_separator_pane_ParamLimits

0xb51b,	// (0x00030dbd) clock_digital_separator_pane

0xb527,	// (0x00030dc9) popup_clock_digital_window_t1

0x2972,	// (0x00028214) clock_digital_number_pane_g1

0x2972,	// (0x00028214) clock_digital_number_pane_g2

0x0001,

0xf276,	// (0x00034b18) clock_digital_number_pane_g

0x2972,	// (0x00028214) clock_digital_separator_pane_g1

0x2972,	// (0x00028214) clock_digital_separator_pane_g2

0x0001,

0xf276,	// (0x00034b18) clock_digital_separator_pane_g

0x26ff,	// (0x00027fa1) bg_popup_window_pane_cp04

0x4e20,	// (0x0002a6c2) heading_pane_cp03

0x32f6,	// (0x00028b98) listscroll_popup_gms_pane

0x26ff,	// (0x00027fa1) grid_large_graphic_popup_pane

0x4e29,	// (0x0002a6cb) listscroll_popup_gms_pane_g1

0x4e32,	// (0x0002a6d4) listscroll_popup_gms_pane_g2

0x0001,

0xf301,	// (0x00034ba3) listscroll_popup_gms_pane_g

0x4e3b,	// (0x0002a6dd) scroll_pane_cp014

0x29d5,	// (0x00028277) cell_large_graphic_popup_pane_ParamLimits

0x29d5,	// (0x00028277) cell_large_graphic_popup_pane

0x29e3,	// (0x00028285) cell_large_graphic_popup_pane_g1_ParamLimits

0x29e3,	// (0x00028285) cell_large_graphic_popup_pane_g1

0x4e44,	// (0x0002a6e6) cell_large_graphic_popup_pane_g2_ParamLimits

0x4e44,	// (0x0002a6e6) cell_large_graphic_popup_pane_g2

0x4e52,	// (0x0002a6f4) cell_large_graphic_popup_pane_g3_ParamLimits

0x4e52,	// (0x0002a6f4) cell_large_graphic_popup_pane_g3

0x4e60,	// (0x0002a702) cell_large_graphic_popup_pane_g4_ParamLimits

0x4e60,	// (0x0002a702) cell_large_graphic_popup_pane_g4

0x0003,

0xf306,	// (0x00034ba8) cell_large_graphic_popup_pane_g_ParamLimits

0xf306,	// (0x00034ba8) cell_large_graphic_popup_pane_g

0x26ff,	// (0x00027fa1) grid_highlight_pane_cp010

0x2972,	// (0x00028214) bg_popup_call_pane_g1

0x4e71,	// (0x0002a713) list_single_graphic_popup_conf_pane_ParamLimits

0x4e71,	// (0x0002a713) list_single_graphic_popup_conf_pane

0x4e83,	// (0x0002a725) list_highlight_pane_cp01

0x4e8c,	// (0x0002a72e) list_single_graphic_popup_conf_pane_g1

0x4e94,	// (0x0002a736) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf30f,	// (0x00034bb1) list_single_graphic_popup_conf_pane_g

0x4e9c,	// (0x0002a73e) list_single_graphic_popup_conf_pane_t1

0x4eaa,	// (0x0002a74c) linegrid_cams_pane_g1

0x4eb3,	// (0x0002a755) linegrid_cams_pane_g2

0x32d4,	// (0x00028b76) linegrid_cams_pane_g3

0x4ebc,	// (0x0002a75e) linegrid_cams_pane_g4

0x4ec5,	// (0x0002a767) linegrid_cams_pane_g5

0x4ece,	// (0x0002a770) linegrid_cams_pane_g6

0x32dd,	// (0x00028b7f) linegrid_cams_pane_g7

0x0006,

0xf314,	// (0x00034bb6) linegrid_cams_pane_g

0x4ed9,	// (0x0002a77b) popup_clock_analogue_window

0x4ed9,	// (0x0002a77b) popup_clock_digital_window

0x26ff,	// (0x00027fa1) popup_phob_thumbnail_window

0x2972,	// (0x00028214) call_video_uplink_pane_g1

0x4ee2,	// (0x0002a784) call_video_uplink_pane_g2

0x0001,

0xf323,	// (0x00034bc5) call_video_uplink_pane_g

0x4eea,	// (0x0002a78c) video_uplink_pane

0x4ef2,	// (0x0002a794) mce_image_pane_g1

0x4efc,	// (0x0002a79e) mce_image_pane_g2

0x4f06,	// (0x0002a7a8) mce_image_pane_g3

0x4f10,	// (0x0002a7b2) mce_image_pane_g4

0x4f18,	// (0x0002a7ba) mce_image_pane_g5

0x0004,

0xf328,	// (0x00034bca) mce_image_pane_g

0x4f20,	// (0x0002a7c2) control_top_pane_stacon_cp01_ParamLimits

0x4f20,	// (0x0002a7c2) control_top_pane_stacon_cp01

0x4f34,	// (0x0002a7d6) uni_indicator_pane_stacon_cp01_ParamLimits

0x4f34,	// (0x0002a7d6) uni_indicator_pane_stacon_cp01

0x4f45,	// (0x0002a7e7) bg_popup_sub_pane_cp03

0x4f4f,	// (0x0002a7f1) chi_dic_find_pane

0x4f57,	// (0x0002a7f9) listscroll_chi_dic_pane

0x4f60,	// (0x0002a802) main_pane_chidic_g1

0x4f73,	// (0x0002a815) chi_dic_find_pane_t1

0x4f81,	// (0x0002a823) find_chidic_pane

0x4f8a,	// (0x0002a82c) chi_dic_list_pane_ParamLimits

0x4f8a,	// (0x0002a82c) chi_dic_list_pane

0x4f9b,	// (0x0002a83d) scroll_pane_cp020

0x4fa3,	// (0x0002a845) find_chidic_pane_t1

0x26ff,	// (0x00027fa1) input_focus_pane_cp06

0x4fb2,	// (0x0002a854) list_chi_dic_pane_ParamLimits

0x4fb2,	// (0x0002a854) list_chi_dic_pane

0x4fc4,	// (0x0002a866) list_chi_dic_pane_t1_ParamLimits

0x4fc4,	// (0x0002a866) list_chi_dic_pane_t1

0x26ff,	// (0x00027fa1) list_highlight_pane_cp020

0x4fd7,	// (0x0002a879) bg_cale_heading_pane_g1

0x4fdf,	// (0x0002a881) bg_cale_heading_pane_g2

0x4fe7,	// (0x0002a889) bg_cale_heading_pane_g3

0x4fef,	// (0x0002a891) bg_cale_heading_pane_g4

0x4ff9,	// (0x0002a89b) bg_cale_heading_pane_g5

0x5003,	// (0x0002a8a5) bg_cale_heading_pane_g6

0x500b,	// (0x0002a8ad) bg_cale_heading_pane_g7

0x5013,	// (0x0002a8b5) bg_cale_heading_pane_g8

0x501d,	// (0x0002a8bf) bg_cale_heading_pane_g9

0x0008,

0xf333,	// (0x00034bd5) bg_cale_heading_pane_g

0x4fd7,	// (0x0002a879) bg_cale_side_pane_g1

0x5027,	// (0x0002a8c9) bg_cale_side_pane_g2

0x5031,	// (0x0002a8d3) bg_cale_side_pane_g3

0x503b,	// (0x0002a8dd) bg_cale_side_pane_g4

0x5045,	// (0x0002a8e7) bg_cale_side_pane_g5

0x504f,	// (0x0002a8f1) bg_cale_side_pane_g6

0x5059,	// (0x0002a8fb) bg_cale_side_pane_g7

0x5063,	// (0x0002a905) bg_cale_side_pane_g8

0x506b,	// (0x0002a90d) bg_cale_side_pane_g9

0x0008,

0xf346,	// (0x00034be8) bg_cale_side_pane_g

0x5073,	// (0x0002a915) popup_call_status_window_ParamLimits

0x5073,	// (0x0002a915) popup_call_status_window

0x50c0,	// (0x0002a962) stacon_top_pane

0x50c8,	// (0x0002a96a) status_pane_ParamLimits

0x50c8,	// (0x0002a96a) status_pane

0x50dd,	// (0x0002a97f) status_small_pane

0x50e5,	// (0x0002a987) control_pane

0x26ff,	// (0x00027fa1) stacon_bottom_pane

0x50ed,	// (0x0002a98f) list_single_mce_smart_pane_t1_ParamLimits

0x50ed,	// (0x0002a98f) list_single_mce_smart_pane_t1

0x5100,	// (0x0002a9a2) list_single_mce_smart_pane_t2_ParamLimits

0x5100,	// (0x0002a9a2) list_single_mce_smart_pane_t2

0x0001,

0xf359,	// (0x00034bfb) list_single_mce_smart_pane_t_ParamLimits

0xf359,	// (0x00034bfb) list_single_mce_smart_pane_t

0x511f,	// (0x0002a9c1) compass_pane

0x512a,	// (0x0002a9cc) main_location2_pane_t1

0x5140,	// (0x0002a9e2) main_location2_pane_t2

0x5156,	// (0x0002a9f8) main_location2_pane_t3

0x0003,

0xf35e,	// (0x00034c00) main_location2_pane_t

0x51a4,	// (0x0002aa46) compass_pane_g1_ParamLimits

0x51a4,	// (0x0002aa46) compass_pane_g1

0x51b0,	// (0x0002aa52) compass_pane_t1

0x51bf,	// (0x0002aa61) compass_pane_t2

0x0005,

0xf367,	// (0x00034c09) compass_pane_t

0x520a,	// (0x0002aaac) text_secondary_cp61

0x5289,	// (0x0002ab2b) navi_pane_cams_g5

0x5305,	// (0x0002aba7) navi_pane_im_t1

0x5313,	// (0x0002abb5) navi_pane_mp_g1_ParamLimits

0x5313,	// (0x0002abb5) navi_pane_mp_g1

0x5327,	// (0x0002abc9) navi_pane_mp_g2_ParamLimits

0x5327,	// (0x0002abc9) navi_pane_mp_g2

0x5333,	// (0x0002abd5) navi_pane_mp_g3_ParamLimits

0x5333,	// (0x0002abd5) navi_pane_mp_g3

0x0002,

0xf37b,	// (0x00034c1d) navi_pane_mp_g_ParamLimits

0xf37b,	// (0x00034c1d) navi_pane_mp_g

0x533f,	// (0x0002abe1) navi_pane_mp_t1

0x534d,	// (0x0002abef) navi_pane_mp_t2

0x0002,

0xf382,	// (0x00034c24) navi_pane_mp_t

0x53fa,	// (0x0002ac9c) navi_pane_vt_g1

0x533f,	// (0x0002abe1) navi_pane_vt_t1

0x5402,	// (0x0002aca4) navi_slider_pane

0x32f6,	// (0x00028b98) zooming_pane

0x5412,	// (0x0002acb4) navi_slider_pane_g1

0xb544,	// (0x00030de6) navi_slider_pane_g2

0x0006,

0xf389,	// (0x00034c2b) navi_slider_pane_g

0x5436,	// (0x0002acd8) aid_levels_zoom

0x543e,	// (0x0002ace0) zooming_pane_g1

0x5446,	// (0x0002ace8) zooming_pane_g2

0x5446,	// (0x0002ace8) zooming_pane_g3

0x0002,

0xf398,	// (0x00034c3a) zooming_pane_g

0x544e,	// (0x0002acf0) level_10_zoom

0x5457,	// (0x0002acf9) level_11_zoom

0x5460,	// (0x0002ad02) level_1_zoom

0x5469,	// (0x0002ad0b) level_2_zoom

0x5472,	// (0x0002ad14) level_3_zoom

0x547b,	// (0x0002ad1d) level_4_zoom

0x5484,	// (0x0002ad26) level_5_zoom

0x548d,	// (0x0002ad2f) level_6_zoom

0x5496,	// (0x0002ad38) level_7_zoom

0x549f,	// (0x0002ad41) level_8_zoom

0x54a8,	// (0x0002ad4a) level_9_zoom

0x54b9,	// (0x0002ad5b) popup_phob_thumbnail_window_g1

0x54c1,	// (0x0002ad63) popup_phob_thumbnail_window_g2

0x0001,

0xf39f,	// (0x00034c41) popup_phob_thumbnail_window_g

0x689e,	// (0x0002c140) level_1_location

0x68a6,	// (0x0002c148) level_2_location

0x68ae,	// (0x0002c150) level_3_location

0x68b8,	// (0x0002c15a) level_4_location

0x32f6,	// (0x00028b98) level_5_location

0x54c9,	// (0x0002ad6b) mce_icon_pane_g1

0x54d3,	// (0x0002ad75) mce_icon_pane_g2

0x0001,

0xf3a4,	// (0x00034c46) mce_icon_pane_g

0x54db,	// (0x0002ad7d) main_mup_pane_g1_ParamLimits

0x54db,	// (0x0002ad7d) main_mup_pane_g1

0x54db,	// (0x0002ad7d) main_mup_pane_g2_ParamLimits

0x54db,	// (0x0002ad7d) main_mup_pane_g2

0x54db,	// (0x0002ad7d) main_mup_pane_g3_ParamLimits

0x54db,	// (0x0002ad7d) main_mup_pane_g3

0x54db,	// (0x0002ad7d) main_mup_pane_g4_ParamLimits

0x54db,	// (0x0002ad7d) main_mup_pane_g4

0x54db,	// (0x0002ad7d) main_mup_pane_g5_ParamLimits

0x54db,	// (0x0002ad7d) main_mup_pane_g5

0x54db,	// (0x0002ad7d) main_mup_pane_g6_ParamLimits

0x54db,	// (0x0002ad7d) main_mup_pane_g6

0x54db,	// (0x0002ad7d) main_mup_pane_g7_ParamLimits

0x54db,	// (0x0002ad7d) main_mup_pane_g7

0x54db,	// (0x0002ad7d) main_mup_pane_g8_ParamLimits

0x54db,	// (0x0002ad7d) main_mup_pane_g8

0x54db,	// (0x0002ad7d) main_mup_pane_g9_ParamLimits

0x54db,	// (0x0002ad7d) main_mup_pane_g9

0x54db,	// (0x0002ad7d) main_mup_pane_g10_ParamLimits

0x54db,	// (0x0002ad7d) main_mup_pane_g10

0x54db,	// (0x0002ad7d) main_mup_pane_g11_ParamLimits

0x54db,	// (0x0002ad7d) main_mup_pane_g11

0x29e3,	// (0x00028285) main_mup_pane_g12_ParamLimits

0x29e3,	// (0x00028285) main_mup_pane_g12

0x54db,	// (0x0002ad7d) main_mup_pane_g13_ParamLimits

0x54db,	// (0x0002ad7d) main_mup_pane_g13

0x000c,

0xf3a9,	// (0x00034c4b) main_mup_pane_g_ParamLimits

0xf3a9,	// (0x00034c4b) main_mup_pane_g

0x54e9,	// (0x0002ad8b) main_mup_pane_t1_ParamLimits

0x54e9,	// (0x0002ad8b) main_mup_pane_t1

0x54e9,	// (0x0002ad8b) main_mup_pane_t2_ParamLimits

0x54e9,	// (0x0002ad8b) main_mup_pane_t2

0x54e9,	// (0x0002ad8b) main_mup_pane_t3_ParamLimits

0x54e9,	// (0x0002ad8b) main_mup_pane_t3

0x3363,	// (0x00028c05) main_mup_pane_t4_ParamLimits

0x3363,	// (0x00028c05) main_mup_pane_t4

0x3363,	// (0x00028c05) main_mup_pane_t5_ParamLimits

0x3363,	// (0x00028c05) main_mup_pane_t5

0x54fd,	// (0x0002ad9f) main_mup_pane_t6_ParamLimits

0x54fd,	// (0x0002ad9f) main_mup_pane_t6

0x0005,

0xf3c4,	// (0x00034c66) main_mup_pane_t_ParamLimits

0xf3c4,	// (0x00034c66) main_mup_pane_t

0x29d5,	// (0x00028277) mup_progress_pane_ParamLimits

0x29d5,	// (0x00028277) mup_progress_pane

0x5511,	// (0x0002adb3) mup_visualizer_pane_ParamLimits

0x5511,	// (0x0002adb3) mup_visualizer_pane

0x5511,	// (0x0002adb3) mup_volume_pane_ParamLimits

0x5511,	// (0x0002adb3) mup_volume_pane

0x29f1,	// (0x00028293) mup_visualizer_pane_g1_ParamLimits

0x29f1,	// (0x00028293) mup_visualizer_pane_g1

0x551f,	// (0x0002adc1) mup_visualizer_pane_g2_ParamLimits

0x551f,	// (0x0002adc1) mup_visualizer_pane_g2

0x29e3,	// (0x00028285) mup_visualizer_pane_g3_ParamLimits

0x29e3,	// (0x00028285) mup_visualizer_pane_g3

0x0002,

0xf3d1,	// (0x00034c73) mup_visualizer_pane_g_ParamLimits

0xf3d1,	// (0x00034c73) mup_visualizer_pane_g

0x34e7,	// (0x00028d89) mup_volume_pane_g1

0x34e7,	// (0x00028d89) mup_volume_pane_g2

0x0001,

0xf3d8,	// (0x00034c7a) mup_volume_pane_g

0x34e7,	// (0x00028d89) mup_progress_pane_g1

0x34e7,	// (0x00028d89) mup_progress_pane_g2

0x34e7,	// (0x00028d89) mup_progress_pane_g3

0x0002,

0xf3dd,	// (0x00034c7f) mup_progress_pane_g

0x26ff,	// (0x00027fa1) bg_popup_window_pane_cp05

0x552d,	// (0x0002adcf) heading_pane_cp02_ParamLimits

0x552d,	// (0x0002adcf) heading_pane_cp02

0x5549,	// (0x0002adeb) list_popup_blid_pane

0x5551,	// (0x0002adf3) list_blid_sat_info_pane_ParamLimits

0x5551,	// (0x0002adf3) list_blid_sat_info_pane

0x5564,	// (0x0002ae06) list_blid_sat_info_pane_g1

0x556c,	// (0x0002ae0e) list_blid_sat_info_pane_t1

0x5686,	// (0x0002af28) mup_equalizer_pane_ParamLimits

0x5686,	// (0x0002af28) mup_equalizer_pane

0x56a7,	// (0x0002af49) mup_equalizer_pane_cp1_ParamLimits

0x56a7,	// (0x0002af49) mup_equalizer_pane_cp1

0x56c8,	// (0x0002af6a) mup_equalizer_pane_cp2_ParamLimits

0x56c8,	// (0x0002af6a) mup_equalizer_pane_cp2

0x56ed,	// (0x0002af8f) mup_equalizer_pane_cp3_ParamLimits

0x56ed,	// (0x0002af8f) mup_equalizer_pane_cp3

0x5716,	// (0x0002afb8) mup_equalizer_pane_cp4_ParamLimits

0x5716,	// (0x0002afb8) mup_equalizer_pane_cp4

0x573f,	// (0x0002afe1) mup_equalizer_pane_cp5

0x5757,	// (0x0002aff9) mup_equalizer_pane_cp6

0x576f,	// (0x0002b011) mup_equalizer_pane_cp7

0xbec7,	// (0x00031769) bg_popup_call_poc_act_pane_g9

0xbecf,	// (0x00031771) bg_popup_call_poc_act_pane_g10

0xbed7,	// (0x00031779) bg_popup_call_poc_act_pane_g11

0x000a,

0x295a,	// (0x000281fc) mup_scale_pane

0x2972,	// (0x00028214) mup_scale_pane_g1

0x5787,	// (0x0002b029) mup_scale_pane_g2

0x0006,

0xf3f9,	// (0x00034c9b) mup_scale_pane_g

0x57bd,	// (0x0002b05f) msg_data_pane

0x57c5,	// (0x0002b067) scroll_pane_cp017

0x57cd,	// (0x0002b06f) bg_list_pane_cp04_ParamLimits

0x57cd,	// (0x0002b06f) bg_list_pane_cp04

0x57f5,	// (0x0002b097) msg_data_pane_g1

0x57fd,	// (0x0002b09f) msg_data_pane_g2

0x5807,	// (0x0002b0a9) msg_data_pane_g3

0x5811,	// (0x0002b0b3) msg_data_pane_g4

0x5819,	// (0x0002b0bb) msg_data_pane_g5

0x5821,	// (0x0002b0c3) msg_data_pane_g6

0x5829,	// (0x0002b0cb) msg_data_pane_g7

0x0006,

0xf408,	// (0x00034caa) msg_data_pane_g

0x5831,	// (0x0002b0d3) msg_text_pane_ParamLimits

0x5831,	// (0x0002b0d3) msg_text_pane

0x5865,	// (0x0002b107) qrid_highlight_pane_cp011_ParamLimits

0x5865,	// (0x0002b107) qrid_highlight_pane_cp011

0x26ff,	// (0x00027fa1) msg_body_pane

0x26ff,	// (0x00027fa1) msg_header_pane

0x5884,	// (0x0002b126) input_focus_pane_cp07

0x58a7,	// (0x0002b149) msg_header_pane_t1_ParamLimits

0x58a7,	// (0x0002b149) msg_header_pane_t1

0x58bd,	// (0x0002b15f) msg_header_pane_t2_ParamLimits

0x58bd,	// (0x0002b15f) msg_header_pane_t2

0x0001,

0xf41c,	// (0x00034cbe) msg_header_pane_t_ParamLimits

0xf41c,	// (0x00034cbe) msg_header_pane_t

0x58d4,	// (0x0002b176) msg_body_pane_g1

0x58dc,	// (0x0002b17e) msg_body_pane_t1_ParamLimits

0x58dc,	// (0x0002b17e) msg_body_pane_t1

0x590d,	// (0x0002b1af) msg_body_pane_t2_ParamLimits

0x590d,	// (0x0002b1af) msg_body_pane_t2

0x591f,	// (0x0002b1c1) msg_body_pane_t3_ParamLimits

0x591f,	// (0x0002b1c1) msg_body_pane_t3

0x0002,

0xf421,	// (0x00034cc3) msg_body_pane_t_ParamLimits

0xf421,	// (0x00034cc3) msg_body_pane_t

0x121e,	// (0x00026ac0) main_viewer_pane_g1_ParamLimits

0x121e,	// (0x00026ac0) main_viewer_pane_g1

0x122c,	// (0x00026ace) main_viewer_pane_g2_ParamLimits

0x122c,	// (0x00026ace) main_viewer_pane_g2

0x594f,	// (0x0002b1f1) main_viewer_pane_g3_ParamLimits

0x594f,	// (0x0002b1f1) main_viewer_pane_g3

0x595e,	// (0x0002b200) main_viewer_pane_g4_ParamLimits

0x595e,	// (0x0002b200) main_viewer_pane_g4

0xb56e,	// (0x00030e10) main_viewer_pane_g5_ParamLimits

0xb56e,	// (0x00030e10) main_viewer_pane_g5

0xb56e,	// (0x00030e10) main_viewer_pane_g7_ParamLimits

0xb56e,	// (0x00030e10) main_viewer_pane_g7

0xb580,	// (0x00030e22) main_viewer_pane_g8_ParamLimits

0xb580,	// (0x00030e22) main_viewer_pane_g8

0x0007,

0xf431,	// (0x00034cd3) main_viewer_pane_g_ParamLimits

0xf431,	// (0x00034cd3) main_viewer_pane_g

0x596d,	// (0x0002b20f) viewer_content_pane_ParamLimits

0x596d,	// (0x0002b20f) viewer_content_pane

0x59aa,	// (0x0002b24c) main_postcard_pane_g1_ParamLimits

0x59aa,	// (0x0002b24c) main_postcard_pane_g1

0x59c0,	// (0x0002b262) main_postcard_pane_g2_ParamLimits

0x59c0,	// (0x0002b262) main_postcard_pane_g2

0x59d6,	// (0x0002b278) main_postcard_pane_g3_ParamLimits

0x59d6,	// (0x0002b278) main_postcard_pane_g3

0x0005,

0xf442,	// (0x00034ce4) main_postcard_pane_g_ParamLimits

0xf442,	// (0x00034ce4) main_postcard_pane_g

0x59ed,	// (0x0002b28f) main_postcard_pane_g4

0xc078,	// (0x0003191a) smil_status_volume_pane_g2

0x5a30,	// (0x0002b2d2) postcard_pane_ParamLimits

0x5a30,	// (0x0002b2d2) postcard_pane

0x5a80,	// (0x0002b322) postcard_pane_g1_ParamLimits

0x5a80,	// (0x0002b322) postcard_pane_g1

0x5a8e,	// (0x0002b330) postcard_pane_g2_ParamLimits

0x5a8e,	// (0x0002b330) postcard_pane_g2

0x5a9a,	// (0x0002b33c) postcard_pane_g3_ParamLimits

0x5a9a,	// (0x0002b33c) postcard_pane_g3

0x5aa6,	// (0x0002b348) postcard_pane_g4_ParamLimits

0x5aa6,	// (0x0002b348) postcard_pane_g4

0x5ab4,	// (0x0002b356) postcard_pane_g5_ParamLimits

0x5ab4,	// (0x0002b356) postcard_pane_g5

0x5ac9,	// (0x0002b36b) postcard_pane_g6_ParamLimits

0x5ac9,	// (0x0002b36b) postcard_pane_g6

0x5a80,	// (0x0002b322) postcard_pane_g7_ParamLimits

0x5a80,	// (0x0002b322) postcard_pane_g7

0x0006,

0xf44f,	// (0x00034cf1) postcard_pane_g_ParamLimits

0xf44f,	// (0x00034cf1) postcard_pane_g

0x5ae1,	// (0x0002b383) main_mp2_pane_g1_ParamLimits

0x5ae1,	// (0x0002b383) main_mp2_pane_g1

0x5aef,	// (0x0002b391) main_mp2_pane_g2_ParamLimits

0x5aef,	// (0x0002b391) main_mp2_pane_g2

0x5afb,	// (0x0002b39d) main_mp2_pane_g3_ParamLimits

0x5afb,	// (0x0002b39d) main_mp2_pane_g3

0x0002,

0xf45e,	// (0x00034d00) main_mp2_pane_g_ParamLimits

0xf45e,	// (0x00034d00) main_mp2_pane_g

0x5b07,	// (0x0002b3a9) main_mp2_pane_t1_ParamLimits

0x5b07,	// (0x0002b3a9) main_mp2_pane_t1

0x5b1e,	// (0x0002b3c0) main_mp2_pane_t2_ParamLimits

0x5b1e,	// (0x0002b3c0) main_mp2_pane_t2

0x5b32,	// (0x0002b3d4) main_mp2_pane_t3_ParamLimits

0x5b32,	// (0x0002b3d4) main_mp2_pane_t3

0x0002,

0xf465,	// (0x00034d07) main_mp2_pane_t_ParamLimits

0xf465,	// (0x00034d07) main_mp2_pane_t

0x5b44,	// (0x0002b3e6) pec_content_pane_ParamLimits

0x5b44,	// (0x0002b3e6) pec_content_pane

0x3abb,	// (0x0002935d) scroll_pane_cp015

0x5b56,	// (0x0002b3f8) pec_attribute_pane_ParamLimits

0x5b56,	// (0x0002b3f8) pec_attribute_pane

0x5b66,	// (0x0002b408) pec_content_pane_g1_ParamLimits

0x5b66,	// (0x0002b408) pec_content_pane_g1

0x5b72,	// (0x0002b414) pec_content_pane_t1_ParamLimits

0x5b72,	// (0x0002b414) pec_content_pane_t1

0x5b84,	// (0x0002b426) pec_content_pane_t2_ParamLimits

0x5b84,	// (0x0002b426) pec_content_pane_t2

0x0001,

0xf46c,	// (0x00034d0e) pec_content_pane_t_ParamLimits

0xf46c,	// (0x00034d0e) pec_content_pane_t

0x5b96,	// (0x0002b438) list_single_graphic_pane_cp01_ParamLimits

0x5b96,	// (0x0002b438) list_single_graphic_pane_cp01

0x295a,	// (0x000281fc) bg_popup_sub_pane_cp04

0x5bb0,	// (0x0002b452) popup_mup_playback_window_g1

0x5bbc,	// (0x0002b45e) popup_mup_playback_window_t1

0x5bd1,	// (0x0002b473) popup_mup_playback_window_t2

0x0001,

0xf471,	// (0x00034d13) popup_mup_playback_window_t

0x5c26,	// (0x0002b4c8) main_image_pane_g1_ParamLimits

0x5c26,	// (0x0002b4c8) main_image_pane_g1

0x5d03,	// (0x0002b5a5) scroll_pane_cp018_ParamLimits

0x5d03,	// (0x0002b5a5) scroll_pane_cp018

0x5d1b,	// (0x0002b5bd) scroll_pane_cp016_ParamLimits

0x5d1b,	// (0x0002b5bd) scroll_pane_cp016

0x5d4f,	// (0x0002b5f1) smil2_image_pane_ParamLimits

0x5d4f,	// (0x0002b5f1) smil2_image_pane

0x5d85,	// (0x0002b627) smil2_root_pane_ParamLimits

0x5d85,	// (0x0002b627) smil2_root_pane

0x5dbd,	// (0x0002b65f) smil2_text_pane_ParamLimits

0x5dbd,	// (0x0002b65f) smil2_text_pane

0x26ff,	// (0x00027fa1) bg_list_pane_cp06

0x5e55,	// (0x0002b6f7) grid_radio_pane

0x26ff,	// (0x00027fa1) bg_popup_window_pane_cp06

0x5e5f,	// (0x0002b701) main_fmradio_pane_t1

0xbedf,	// (0x00031781) heading_pane_cp04

0x5e6d,	// (0x0002b70f) main_fmradio_pane_t2

0xbee7,	// (0x00031789) popup_cale_lunar_info_window_g1

0x5e7b,	// (0x0002b71d) main_fmradio_pane_t3

0xbeef,	// (0x00031791) popup_cale_lunar_info_window_g2

0x5e8b,	// (0x0002b72d) main_fmradio_pane_t4

0x0001,

0x5e99,	// (0x0002b73b) main_fmradio_pane_t5

0x0004,

0xf551,	// (0x00034df3) popup_cale_lunar_info_window_g

0xf486,	// (0x00034d28) main_fmradio_pane_t

0x5ea7,	// (0x0002b749) wait_bar_pane_cp03

0x5eaf,	// (0x0002b751) cell_fmradio_pane_ParamLimits

0x5eaf,	// (0x0002b751) cell_fmradio_pane

0x5a80,	// (0x0002b322) cell_fmradio_pane_g1_ParamLimits

0x5a80,	// (0x0002b322) cell_fmradio_pane_g1

0x26ff,	// (0x00027fa1) grid_highlight_pane_cp011

0x5ec4,	// (0x0002b766) poc_content_pane_ParamLimits

0x5ec4,	// (0x0002b766) poc_content_pane

0x5ed6,	// (0x0002b778) scroll_pane_cp019

0x5ede,	// (0x0002b780) popup_call_poc_act_window_ParamLimits

0x5ede,	// (0x0002b780) popup_call_poc_act_window

0x5f02,	// (0x0002b7a4) popup_call_poc_inact_window_ParamLimits

0x5f02,	// (0x0002b7a4) popup_call_poc_inact_window

0xf528,	// (0x00034dca) bg_popup_call_poc_act_pane_g

0xbe57,	// (0x000316f9) bg_popup_call_poc_inact_pane_g1

0xbe5f,	// (0x00031701) bg_popup_call_poc_inact_pane_g2

0x5f1b,	// (0x0002b7bd) popup_call_poc_act_window_g2

0xbe67,	// (0x00031709) bg_popup_call_poc_inact_pane_g3

0xbe6f,	// (0x00031711) bg_popup_call_poc_inact_pane_g4

0xbe77,	// (0x00031719) bg_popup_call_poc_inact_pane_g5

0x5f23,	// (0x0002b7c5) popup_call_poc_act_window_t1_ParamLimits

0x5f23,	// (0x0002b7c5) popup_call_poc_act_window_t1

0x5f4b,	// (0x0002b7ed) popup_call_poc_act_window_t2_ParamLimits

0x5f4b,	// (0x0002b7ed) popup_call_poc_act_window_t2

0x5f73,	// (0x0002b815) popup_call_poc_act_window_t3_ParamLimits

0x5f73,	// (0x0002b815) popup_call_poc_act_window_t3

0x5f9b,	// (0x0002b83d) popup_call_poc_act_window_t4_ParamLimits

0x5f9b,	// (0x0002b83d) popup_call_poc_act_window_t4

0x0003,

0xf491,	// (0x00034d33) popup_call_poc_act_window_t_ParamLimits

0xf491,	// (0x00034d33) popup_call_poc_act_window_t

0xbe7f,	// (0x00031721) bg_popup_call_poc_inact_pane_g6

0xbe87,	// (0x00031729) bg_popup_call_poc_inact_pane_g7

0xbe8f,	// (0x00031731) bg_popup_call_poc_inact_pane_g8

0x5fad,	// (0x0002b84f) popup_call_poc_inact_window_g2

0xbe97,	// (0x00031739) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf515,	// (0x00034db7) bg_popup_call_poc_inact_pane_g

0x5fb5,	// (0x0002b857) popup_call_poc_inact_window_t1_ParamLimits

0x5fb5,	// (0x0002b857) popup_call_poc_inact_window_t1

0x5fca,	// (0x0002b86c) popup_call_poc_inact_window_t2_ParamLimits

0x5fca,	// (0x0002b86c) popup_call_poc_inact_window_t2

0x5fdf,	// (0x0002b881) popup_call_poc_inact_window_t3_ParamLimits

0x5fdf,	// (0x0002b881) popup_call_poc_inact_window_t3

0x0002,

0xf49a,	// (0x00034d3c) popup_call_poc_inact_window_t_ParamLimits

0xf49a,	// (0x00034d3c) popup_call_poc_inact_window_t

0xbfdd,	// (0x0003187f) context_pane_ParamLimits

0x6ac9,	// (0x0002c36b) signal_pane_ParamLimits

0x32f6,	// (0x00028b98) main_call2_pane

0xbfb6,	// (0x00031858) popup_phob_thumbnail2_window_ParamLimits

0xbfb6,	// (0x00031858) popup_phob_thumbnail2_window

0xb556,	// (0x00030df8) aid_hotspot_pointer_arrow_pane

0xb55e,	// (0x00030e00) aid_hotspot_pointer_hand_pane

0x6866,	// (0x0002c108) phob_pre_status_pane_g5

0x297c,	// (0x0002821e) cams_zoom_pane_ParamLimits

0x297c,	// (0x0002821e) image_vga_pane_ParamLimits

0x29e3,	// (0x00028285) main_camera_pane_g1_ParamLimits

0x29e3,	// (0x00028285) main_camera_pane_g2_ParamLimits

0x29e3,	// (0x00028285) main_camera_pane_g3_ParamLimits

0x29e3,	// (0x00028285) main_camera_pane_g4_ParamLimits

0x29e3,	// (0x00028285) main_camera_pane_g5_ParamLimits

0x29e3,	// (0x00028285) main_camera_pane_g6_ParamLimits

0x29e3,	// (0x00028285) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x00034a67) main_camera_pane_g_ParamLimits

0x3363,	// (0x00028c05) main_camera_pane_t1_ParamLimits

0x3363,	// (0x00028c05) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x00034a78) main_camera_pane_t_ParamLimits

0x295a,	// (0x000281fc) bg_popup_preview_window_pane_cp01_ParamLimits

0x295a,	// (0x000281fc) bg_popup_preview_window_pane_cp01

0x5ff4,	// (0x0002b896) popup_phob_thumbnail2_window_g1_ParamLimits

0x5ff4,	// (0x0002b896) popup_phob_thumbnail2_window_g1

0x26ff,	// (0x00027fa1) call2_cli_visual_pane

0x601b,	// (0x0002b8bd) popup_call2_audio_conf_window_ParamLimits

0x601b,	// (0x0002b8bd) popup_call2_audio_conf_window

0x6043,	// (0x0002b8e5) popup_call2_audio_first_window_ParamLimits

0x6043,	// (0x0002b8e5) popup_call2_audio_first_window

0x60d9,	// (0x0002b97b) popup_call2_audio_in_window_ParamLimits

0x60d9,	// (0x0002b97b) popup_call2_audio_in_window

0x6125,	// (0x0002b9c7) popup_call2_audio_out_window_ParamLimits

0x6125,	// (0x0002b9c7) popup_call2_audio_out_window

0x6197,	// (0x0002ba39) popup_call2_audio_second_window_ParamLimits

0x6197,	// (0x0002ba39) popup_call2_audio_second_window

0x61fd,	// (0x0002ba9f) popup_call2_audio_wait_window_ParamLimits

0x61fd,	// (0x0002ba9f) popup_call2_audio_wait_window

0x26ff,	// (0x00027fa1) bg_popup_call2_act_pane_cp03

0x293c,	// (0x000281de) list_conf_pane_cp

0x6237,	// (0x0002bad9) popup_call2_audio_conf_window_t1

0x6245,	// (0x0002bae7) list_single_graphic_popup_conf2_pane_ParamLimits

0x6245,	// (0x0002bae7) list_single_graphic_popup_conf2_pane

0x4e83,	// (0x0002a725) list_highlight_pane_cp04

0x6258,	// (0x0002bafa) list_single_graphic_popup_conf2_pane_g1

0x4e94,	// (0x0002a736) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a1,	// (0x00034d43) list_single_graphic_popup_conf2_pane_g

0x6262,	// (0x0002bb04) list_single_graphic_popup_conf2_pane_t1

0x6270,	// (0x0002bb12) bg_popup_call2_act_pane_cp01_ParamLimits

0x6270,	// (0x0002bb12) bg_popup_call2_act_pane_cp01

0x62fa,	// (0x0002bb9c) call_type_pane_cp05_ParamLimits

0x62fa,	// (0x0002bb9c) call_type_pane_cp05

0x634e,	// (0x0002bbf0) popup_call2_audio_second_window_g1_ParamLimits

0x634e,	// (0x0002bbf0) popup_call2_audio_second_window_g1

0x63a2,	// (0x0002bc44) popup_call2_audio_second_window_g2_ParamLimits

0x63a2,	// (0x0002bc44) popup_call2_audio_second_window_g2

0x0002,

0xf4a6,	// (0x00034d48) popup_call2_audio_second_window_g_ParamLimits

0xf4a6,	// (0x00034d48) popup_call2_audio_second_window_g

0x6407,	// (0x0002bca9) popup_call2_audio_second_window_t1_ParamLimits

0x6407,	// (0x0002bca9) popup_call2_audio_second_window_t1

0x64c2,	// (0x0002bd64) popup_call2_audio_second_window_t2_ParamLimits

0x64c2,	// (0x0002bd64) popup_call2_audio_second_window_t2

0x6515,	// (0x0002bdb7) popup_call2_audio_second_window_t3_ParamLimits

0x6515,	// (0x0002bdb7) popup_call2_audio_second_window_t3

0x0003,

0xf4ad,	// (0x00034d4f) popup_call2_audio_second_window_t_ParamLimits

0xf4ad,	// (0x00034d4f) popup_call2_audio_second_window_t

0x26ff,	// (0x00027fa1) bg_popup_call2_in_pane_cp02

0x2709,	// (0x00027fab) call_type_pane_cp04

0x6608,	// (0x0002beaa) popup_call2_audio_wait_window_g1

0x6610,	// (0x0002beb2) popup_call2_audio_wait_window_g2

0x0001,

0xf4b6,	// (0x00034d58) popup_call2_audio_wait_window_g

0x2721,	// (0x00027fc3) popup_call2_audio_wait_window_t3

0x6618,	// (0x0002beba) bg_popup_call2_act_pane_ParamLimits

0x6618,	// (0x0002beba) bg_popup_call2_act_pane

0x66d8,	// (0x0002bf7a) call_type_pane_cp03_ParamLimits

0x66d8,	// (0x0002bf7a) call_type_pane_cp03

0xb598,	// (0x00030e3a) popup_call2_audio_first_window_g1_ParamLimits

0xb598,	// (0x00030e3a) popup_call2_audio_first_window_g1

0xb608,	// (0x00030eaa) popup_call2_audio_first_window_g2_ParamLimits

0xb608,	// (0x00030eaa) popup_call2_audio_first_window_g2

0xb66c,	// (0x00030f0e) popup_call2_audio_first_window_g3_ParamLimits

0xb66c,	// (0x00030f0e) popup_call2_audio_first_window_g3

0x0004,

0xf4bb,	// (0x00034d5d) popup_call2_audio_first_window_g_ParamLimits

0xf4bb,	// (0x00034d5d) popup_call2_audio_first_window_g

0xb6f4,	// (0x00030f96) popup_call2_audio_first_window_t1_ParamLimits

0xb6f4,	// (0x00030f96) popup_call2_audio_first_window_t1

0xb7f7,	// (0x00031099) popup_call2_audio_first_window_t4_ParamLimits

0xb7f7,	// (0x00031099) popup_call2_audio_first_window_t4

0xb8da,	// (0x0003117c) popup_call2_audio_first_window_t5_ParamLimits

0xb8da,	// (0x0003117c) popup_call2_audio_first_window_t5

0x0003,

0xf4c6,	// (0x00034d68) popup_call2_audio_first_window_t_ParamLimits

0xf4c6,	// (0x00034d68) popup_call2_audio_first_window_t

0x2952,	// (0x000281f4) bg_popup_call2_act_pane_g1

0xbef9,	// (0x0003179b) popup_cale_lunar_info_window_t1

0xbf07,	// (0x000317a9) popup_cale_lunar_info_window_t2

0xbf15,	// (0x000317b7) popup_cale_lunar_info_window_t3

0x26ff,	// (0x00027fa1) bg_popup_call2_bubble_pane

0xb9db,	// (0x0003127d) bg_popup_call2_in_pane_cp01_ParamLimits

0xb9db,	// (0x0003127d) bg_popup_call2_in_pane_cp01

0x23b7,	// (0x00027c59) call_type_pane_cp02

0x673c,	// (0x0002bfde) popup_call2_audio_out_window_g1_ParamLimits

0x673c,	// (0x0002bfde) popup_call2_audio_out_window_g1

0xba23,	// (0x000312c5) popup_call2_audio_out_window_g2_ParamLimits

0xba23,	// (0x000312c5) popup_call2_audio_out_window_g2

0x6768,	// (0x0002c00a) popup_call2_audio_out_window_g3_ParamLimits

0x6768,	// (0x0002c00a) popup_call2_audio_out_window_g3

0x0003,

0xf4cf,	// (0x00034d71) popup_call2_audio_out_window_g_ParamLimits

0xf4cf,	// (0x00034d71) popup_call2_audio_out_window_g

0xba5a,	// (0x000312fc) popup_call2_audio_out_window_t1_ParamLimits

0xba5a,	// (0x000312fc) popup_call2_audio_out_window_t1

0xbab9,	// (0x0003135b) popup_call2_audio_out_window_t2_ParamLimits

0xbab9,	// (0x0003135b) popup_call2_audio_out_window_t2

0xbb0d,	// (0x000313af) popup_call2_audio_out_window_t3_ParamLimits

0xbb0d,	// (0x000313af) popup_call2_audio_out_window_t3

0xbb23,	// (0x000313c5) popup_call2_audio_out_window_t4_ParamLimits

0xbb23,	// (0x000313c5) popup_call2_audio_out_window_t4

0xbb39,	// (0x000313db) popup_call2_audio_out_window_t5_ParamLimits

0xbb39,	// (0x000313db) popup_call2_audio_out_window_t5

0x0005,

0xf4d8,	// (0x00034d7a) popup_call2_audio_out_window_t_ParamLimits

0xf4d8,	// (0x00034d7a) popup_call2_audio_out_window_t

0xbb9d,	// (0x0003143f) bg_popup_call2_in_pane_ParamLimits

0xbb9d,	// (0x0003143f) bg_popup_call2_in_pane

0xbbf9,	// (0x0003149b) popup_call2_audio_in_window_g1_ParamLimits

0xbbf9,	// (0x0003149b) popup_call2_audio_in_window_g1

0xbc31,	// (0x000314d3) popup_call2_audio_in_window_g2_ParamLimits

0xbc31,	// (0x000314d3) popup_call2_audio_in_window_g2

0xbc69,	// (0x0003150b) popup_call2_audio_in_window_g3_ParamLimits

0xbc69,	// (0x0003150b) popup_call2_audio_in_window_g3

0x0003,

0xf4e5,	// (0x00034d87) popup_call2_audio_in_window_g_ParamLimits

0xf4e5,	// (0x00034d87) popup_call2_audio_in_window_g

0xbcc1,	// (0x00031563) popup_call2_audio_in_window_t1_ParamLimits

0xbcc1,	// (0x00031563) popup_call2_audio_in_window_t1

0xbd41,	// (0x000315e3) popup_call2_audio_in_window_t2_ParamLimits

0xbd41,	// (0x000315e3) popup_call2_audio_in_window_t2

0xbdc1,	// (0x00031663) popup_call2_audio_in_window_t3_ParamLimits

0xbdc1,	// (0x00031663) popup_call2_audio_in_window_t3

0xbddb,	// (0x0003167d) popup_call2_audio_in_window_t4_ParamLimits

0xbddb,	// (0x0003167d) popup_call2_audio_in_window_t4

0xbded,	// (0x0003168f) popup_call2_audio_in_window_t5_ParamLimits

0xbded,	// (0x0003168f) popup_call2_audio_in_window_t5

0xbe02,	// (0x000316a4) popup_call2_audio_in_window_t6_ParamLimits

0xbe02,	// (0x000316a4) popup_call2_audio_in_window_t6

0x0005,

0xf4ee,	// (0x00034d90) popup_call2_audio_in_window_t_ParamLimits

0xf4ee,	// (0x00034d90) popup_call2_audio_in_window_t

0x2952,	// (0x000281f4) bg_popup_call2_in_pane_g1

0xbf23,	// (0x000317c5) popup_cale_lunar_info_window_t4

0x0003,

0xf556,	// (0x00034df8) popup_cale_lunar_info_window_t

0x295a,	// (0x000281fc) bg_popup_call2_rect_pane_ParamLimits

0x295a,	// (0x000281fc) bg_popup_call2_rect_pane

0x26ff,	// (0x00027fa1) call2_cli_visual_graphic_pane

0x26ff,	// (0x00027fa1) call2_cli_visual_text_pane

0xc08b,	// (0x0003192d) smil_status_volume_pane_g3

0x0002,

0x2972,	// (0x00028214) call2_cli_visual_graphic_pane_g1

0x2972,	// (0x00028214) call2_cli_visual_graphic_pane_g2

0x2972,	// (0x00028214) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4fb,	// (0x00034d9d) call2_cli_visual_graphic_pane_g

0xbe17,	// (0x000316b9) bg_popup_call2_rect_pane_g1

0x2ce5,	// (0x00028587) bg_popup_call2_rect_pane_g2

0xbe1f,	// (0x000316c1) bg_popup_call2_rect_pane_g3

0xbe27,	// (0x000316c9) bg_popup_call2_rect_pane_g4

0xbe2f,	// (0x000316d1) bg_popup_call2_rect_pane_g5

0xbe37,	// (0x000316d9) bg_popup_call2_rect_pane_g6

0xbe3f,	// (0x000316e1) bg_popup_call2_rect_pane_g7

0xbe47,	// (0x000316e9) bg_popup_call2_rect_pane_g8

0xbe4f,	// (0x000316f1) bg_popup_call2_rect_pane_g9

0x0008,

0xf502,	// (0x00034da4) bg_popup_call2_rect_pane_g

0xbe57,	// (0x000316f9) bg_popup_call2_bubble_pane_g1

0xbe5f,	// (0x00031701) bg_popup_call2_bubble_pane_g2

0xbe67,	// (0x00031709) bg_popup_call2_bubble_pane_g3

0xbe6f,	// (0x00031711) bg_popup_call2_bubble_pane_g4

0xbe77,	// (0x00031719) bg_popup_call2_bubble_pane_g5

0xbe7f,	// (0x00031721) bg_popup_call2_bubble_pane_g6

0xbe87,	// (0x00031729) bg_popup_call2_bubble_pane_g7

0xbe8f,	// (0x00031731) bg_popup_call2_bubble_pane_g8

0xbe97,	// (0x00031739) bg_popup_call2_bubble_pane_g9

0x0008,

0xf515,	// (0x00034db7) bg_popup_call2_bubble_pane_g

0x2d7b,	// (0x0002861d) aid_cale_week_size_cell_pane

0x3377,	// (0x00028c19) aid_cams_cif_uncrop_pane_ParamLimits

0x3377,	// (0x00028c19) aid_cams_cif_uncrop_pane

0x34f1,	// (0x00028d93) aid_cams_size_cell_ParamLimits

0x34f1,	// (0x00028d93) aid_cams_size_cell

0x3505,	// (0x00028da7) grid_cams_pane_ParamLimits

0x351f,	// (0x00028dc1) linegrid_cams_pane_ParamLimits

0x364c,	// (0x00028eee) call_video_pane_t1

0x3666,	// (0x00028f08) call_video_pane_t2

0x0001,

0xf222,	// (0x00034ac4) call_video_pane_t

0x3d1b,	// (0x000295bd) aid_cale_month_size_cell_pane_ParamLimits

0x3d1b,	// (0x000295bd) aid_cale_month_size_cell_pane

0xf59a,	// (0x00034e3c) smil_status_volume_pane_g

0xc098,	// (0x0003193a) volume_smil_pane_ParamLimits

0xb388,	// (0x00030c2a) aid_popup2_width_pane

0x2c3d,	// (0x000284df) cell_qdial_pane_g4_ParamLimits

0x2c3d,	// (0x000284df) cell_qdial_pane_g4

0x5180,	// (0x0002aa22) aid_blid_cardinal_pane_ParamLimits

0x5190,	// (0x0002aa32) aid_blid_destination_pane_ParamLimits

0x5190,	// (0x0002aa32) aid_blid_destination_pane

0x295a,	// (0x000281fc) bg_popup_call_poc_act_pane_ParamLimits

0x295a,	// (0x000281fc) bg_popup_call_poc_act_pane

0x295a,	// (0x000281fc) bg_popup_call_poc_inact_pane_ParamLimits

0x295a,	// (0x000281fc) bg_popup_call_poc_inact_pane

0xbe9f,	// (0x00031741) bg_popup_call_poc_act_pane_g1

0xbea7,	// (0x00031749) bg_popup_call_poc_act_pane_g2

0xbeaf,	// (0x00031751) bg_popup_call_poc_act_pane_g3

0xbe6f,	// (0x00031711) bg_popup_call_poc_act_pane_g4

0xbe77,	// (0x00031719) bg_popup_call_poc_act_pane_g5

0xbeb7,	// (0x00031759) bg_popup_call_poc_act_pane_g6

0xbe87,	// (0x00031729) bg_popup_call_poc_act_pane_g7

0xbebf,	// (0x00031761) bg_popup_call_poc_act_pane_g8

0x26ff,	// (0x00027fa1) main_usb_pane

0xbf8d,	// (0x0003182f) popup_cale_lunar_info_window

0x3997,	// (0x00029239) im_reading_pane_t1_ParamLimits

0x39d6,	// (0x00029278) list_im_pane_ParamLimits

0x39e7,	// (0x00029289) scroll_pane_cp07_ParamLimits

0x26ff,	// (0x00027fa1) grid_highlight_pane_cp012

0x295a,	// (0x000281fc) mup_scale_pane_ParamLimits

0x5a80,	// (0x0002b322) main_usb_pane_g1_ParamLimits

0x5a80,	// (0x0002b322) main_usb_pane_g1

0x67bb,	// (0x0002c05d) main_usb_pane_g2_ParamLimits

0x67bb,	// (0x0002c05d) main_usb_pane_g2

0x0001,

0xf53f,	// (0x00034de1) main_usb_pane_g_ParamLimits

0xf53f,	// (0x00034de1) main_usb_pane_g

0x67d1,	// (0x0002c073) main_usb_pane_t1_ParamLimits

0x67d1,	// (0x0002c073) main_usb_pane_t1

0x67e3,	// (0x0002c085) main_usb_pane_t2_ParamLimits

0x67e3,	// (0x0002c085) main_usb_pane_t2

0x67f5,	// (0x0002c097) main_usb_pane_t3_ParamLimits

0x67f5,	// (0x0002c097) main_usb_pane_t3

0x6807,	// (0x0002c0a9) main_usb_pane_t4_ParamLimits

0x6807,	// (0x0002c0a9) main_usb_pane_t4

0x681c,	// (0x0002c0be) main_usb_pane_t5_ParamLimits

0x681c,	// (0x0002c0be) main_usb_pane_t5

0x6831,	// (0x0002c0d3) main_usb_pane_t6_ParamLimits

0x6831,	// (0x0002c0d3) main_usb_pane_t6

0x0005,

0xf544,	// (0x00034de6) main_usb_pane_t_ParamLimits

0x511f,	// (0x0002a9c1) aid_text_placing

0x512a,	// (0x0002a9cc) main_location2_pane_t1_ParamLimits

0x5140,	// (0x0002a9e2) main_location2_pane_t2_ParamLimits

0x5156,	// (0x0002a9f8) main_location2_pane_t3_ParamLimits

0x516c,	// (0x0002aa0e) main_location2_pane_t4_ParamLimits

0x516c,	// (0x0002aa0e) main_location2_pane_t4

0xf35e,	// (0x00034c00) main_location2_pane_t_ParamLimits

0x2996,	// (0x00028238) find_pinb_pane_g2_ParamLimits

0x2996,	// (0x00028238) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0003497c) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0003497c) find_pinb_pane_g

0x29a2,	// (0x00028244) find_pinb_pane_t1_ParamLimits

0x29b4,	// (0x00028256) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x00034981) find_pinb_pane_t_ParamLimits

0x26ff,	// (0x00027fa1) main_call3_pane

0x435f,	// (0x00029c01) cale_month_day_heading_pane_t1_ParamLimits

0x43e5,	// (0x00029c87) cale_month_day_heading_pane_t2_ParamLimits

0x445e,	// (0x00029d00) cale_month_day_heading_pane_t3_ParamLimits

0x44d7,	// (0x00029d79) cale_month_day_heading_pane_t4_ParamLimits

0x4558,	// (0x00029dfa) cale_month_day_heading_pane_t5_ParamLimits

0x45e1,	// (0x00029e83) cale_month_day_heading_pane_t6_ParamLimits

0x4672,	// (0x00029f14) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x00034afc) cale_month_day_heading_pane_t_ParamLimits

0x491c,	// (0x0002a1be) smil_status_volume_pane

0x5a54,	// (0x0002b2f6) postcard_address_pane_ParamLimits

0x5a54,	// (0x0002b2f6) postcard_address_pane

0x5a6a,	// (0x0002b30c) postcard_message_pane_ParamLimits

0x5a6a,	// (0x0002b30c) postcard_message_pane

0x6794,	// (0x0002c036) call2_cli_visual_pane_t1_ParamLimits

0x6794,	// (0x0002c036) call2_cli_visual_pane_t1

0xc0c5,	// (0x00031967) postcard_message_pane_t1_ParamLimits

0xc0c5,	// (0x00031967) postcard_message_pane_t1

0xc0ad,	// (0x0003194f) postcard_address_pane_t1_ParamLimits

0xc0ad,	// (0x0003194f) postcard_address_pane_t1

0x6c75,	// (0x0002c517) popup_call3_audio_in_window_ParamLimits

0x6c75,	// (0x0002c517) popup_call3_audio_in_window

0x6afa,	// (0x0002c39c) bg_popup_call3_in_pane_ParamLimits

0x6afa,	// (0x0002c39c) bg_popup_call3_in_pane

0x6b76,	// (0x0002c418) popup_call3_audio_in_window_g1_ParamLimits

0x6b76,	// (0x0002c418) popup_call3_audio_in_window_g1

0x6b96,	// (0x0002c438) popup_call3_audio_in_window_g2_ParamLimits

0x6b96,	// (0x0002c438) popup_call3_audio_in_window_g2

0x6bb6,	// (0x0002c458) popup_call3_audio_in_window_g3_ParamLimits

0x6bb6,	// (0x0002c458) popup_call3_audio_in_window_g3

0x0003,

0xf5a1,	// (0x00034e43) popup_call3_audio_in_window_g_ParamLimits

0xf5a1,	// (0x00034e43) popup_call3_audio_in_window_g

0x6be7,	// (0x0002c489) popup_call3_audio_in_window_t1_ParamLimits

0x6be7,	// (0x0002c489) popup_call3_audio_in_window_t1

0x6c25,	// (0x0002c4c7) popup_call3_audio_in_window_t2_ParamLimits

0x6c25,	// (0x0002c4c7) popup_call3_audio_in_window_t2

0x6c63,	// (0x0002c505) popup_call3_audio_in_window_t3_ParamLimits

0x6c63,	// (0x0002c505) popup_call3_audio_in_window_t3

0x0002,

0xf5aa,	// (0x00034e4c) popup_call3_audio_in_window_t_ParamLimits

0xf5aa,	// (0x00034e4c) popup_call3_audio_in_window_t

0x32f6,	// (0x00028b98) bg_popup_call3_rect_pane

0xbe17,	// (0x000316b9) bg_popup_call3_rect_pane_g1

0x2ce5,	// (0x00028587) bg_popup_call3_rect_pane_g2

0xbe1f,	// (0x000316c1) bg_popup_call3_rect_pane_g3

0xbe27,	// (0x000316c9) bg_popup_call3_rect_pane_g4

0xbe2f,	// (0x000316d1) bg_popup_call3_rect_pane_g5

0xbe37,	// (0x000316d9) bg_popup_call3_rect_pane_g6

0xbe3f,	// (0x000316e1) bg_popup_call3_rect_pane_g7

0x2244,	// (0x00027ae6) mup_visualizer_osc_pane

0x2244,	// (0x00027ae6) mup_visualizer_spec_pane

0x6b2a,	// (0x0002c3cc) call3_video_qcif_pane_ParamLimits

0x6b2a,	// (0x0002c3cc) call3_video_qcif_pane

0x6b3d,	// (0x0002c3df) call3_video_qcif_uncrop_pane_ParamLimits

0x6b3d,	// (0x0002c3df) call3_video_qcif_uncrop_pane

0x6b4d,	// (0x0002c3ef) call3_video_subqcif_pane_ParamLimits

0x6b4d,	// (0x0002c3ef) call3_video_subqcif_pane

0x6b63,	// (0x0002c405) call3_video_subqcif_uncrop_pane_ParamLimits

0x6b63,	// (0x0002c405) call3_video_subqcif_uncrop_pane

0x6bd6,	// (0x0002c478) popup_call3_audio_in_window_g4_ParamLimits

0x6bd6,	// (0x0002c478) popup_call3_audio_in_window_g4

0x2244,	// (0x00027ae6) mup_spec_half_pane

0x2244,	// (0x00027ae6) mup_spec_half_pane_cp

0x2244,	// (0x00027ae6) mup_osc_middle_pane

0x34e7,	// (0x00028d89) mup_visualizer_osc_pane_g1

0xc03e,	// (0x000318e0) mup_spec_bar_pane_ParamLimits

0xc03e,	// (0x000318e0) mup_spec_bar_pane

0x34e7,	// (0x00028d89) mup_spec_bar_pane_g1

0x34e7,	// (0x00028d89) mup_spec_bar_pane_g2

0x0001,

0xf3d8,	// (0x00034c7a) mup_spec_bar_pane_g

0x2d7b,	// (0x0002861d) aid_cale_week_size_cell_pane_ParamLimits

0x2d95,	// (0x00028637) bg_cale_heading_pane_ParamLimits

0x2db9,	// (0x0002865b) bg_cale_pane_cp01_ParamLimits

0x2dd6,	// (0x00028678) cale_week_corner_pane_ParamLimits

0x2df5,	// (0x00028697) cale_week_day_heading_pane_ParamLimits

0x2e1e,	// (0x000286c0) cale_week_scroll_pane_g1_ParamLimits

0x2e3d,	// (0x000286df) cale_week_scroll_pane_g2_ParamLimits

0x2e55,	// (0x000286f7) cale_week_scroll_pane_g3_ParamLimits

0x2e6d,	// (0x0002870f) cale_week_scroll_pane_g4_ParamLimits

0x2e85,	// (0x00028727) cale_week_scroll_pane_g5_ParamLimits

0x2ea5,	// (0x00028747) cale_week_scroll_pane_g6_ParamLimits

0x2ec5,	// (0x00028767) cale_week_scroll_pane_g7_ParamLimits

0x2ee9,	// (0x0002878b) cale_week_scroll_pane_g8_ParamLimits

0x2f0d,	// (0x000287af) cale_week_scroll_pane_g9_ParamLimits

0x2f25,	// (0x000287c7) cale_week_scroll_pane_g10_ParamLimits

0x2f3d,	// (0x000287df) cale_week_scroll_pane_g11_ParamLimits

0x2f55,	// (0x000287f7) cale_week_scroll_pane_g12_ParamLimits

0x2f79,	// (0x0002881b) cale_week_scroll_pane_g13_ParamLimits

0x2f79,	// (0x0002881b) cale_week_scroll_pane_g14_ParamLimits

0x2f79,	// (0x0002881b) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x00034a0d) cale_week_scroll_pane_g_ParamLimits

0x2fc1,	// (0x00028863) cale_week_time_pane_ParamLimits

0x2fe5,	// (0x00028887) grid_cale_week_pane_ParamLimits

0x3017,	// (0x000288b9) listscroll_cale_week_pane_t1

0x3029,	// (0x000288cb) scroll_pane_cp08_ParamLimits

0x3dc0,	// (0x00029662) cale_month_corner_pane_ParamLimits

0x42c8,	// (0x00029b6a) cale_month_pane_t1

0x42da,	// (0x00029b7c) cale_month_week_pane_ParamLimits

0x4d7f,	// (0x0002a621) popup_call_status_window_g1_ParamLimits

0x4d93,	// (0x0002a635) popup_call_status_window_g2_ParamLimits

0x4da7,	// (0x0002a649) popup_call_status_window_g3_ParamLimits

0xf2e5,	// (0x00034b87) popup_call_status_window_g_ParamLimits

0x4e10,	// (0x0002a6b2) aid_call2_pane

0x588d,	// (0x0002b12f) msg_header_pane_g1

0x5a54,	// (0x0002b2f6) postcard_address2_pane_ParamLimits

0x5a54,	// (0x0002b2f6) postcard_address2_pane

0x5a6a,	// (0x0002b30c) postcard_message2_pane_ParamLimits

0x5a6a,	// (0x0002b30c) postcard_message2_pane

0x6ad7,	// (0x0002c379) message2_row_pane_ParamLimits

0x6ad7,	// (0x0002c379) message2_row_pane

0xbff8,	// (0x0003189a) address2_row_pane_ParamLimits

0xbff8,	// (0x0003189a) address2_row_pane

0xc00b,	// (0x000318ad) postcard_message2_row_pane_g1

0xc013,	// (0x000318b5) postcard_message2_row_pane_t1

0xc00b,	// (0x000318ad) address2_row_pane_g1

0xc013,	// (0x000318b5) address2_row_pane_t1

0x32ee,	// (0x00028b90) aid_size_cell_vorec

0x26ff,	// (0x00027fa1) main_rss_pane

0xc021,	// (0x000318c3) rss_list_single_pane_ParamLimits

0xc021,	// (0x000318c3) rss_list_single_pane

0xc02f,	// (0x000318d1) rss_list_single_pane_t1

0xc02f,	// (0x000318d1) rss_list_single_pane_t2

0x0001,

0xf595,	// (0x00034e37) rss_list_single_pane_t

0x26ff,	// (0x00027fa1) main_camera2_pane

0x26ff,	// (0x00027fa1) main_video2_pane

0xc0e1,	// (0x00031983) cams_zoom_pane_cp2_ParamLimits

0xc0e1,	// (0x00031983) cams_zoom_pane_cp2

0xc0e1,	// (0x00031983) image2_vga_pane_ParamLimits

0xc0e1,	// (0x00031983) image2_vga_pane

0xc0ef,	// (0x00031991) main_camera2_pane_g1_ParamLimits

0xc0ef,	// (0x00031991) main_camera2_pane_g1

0xc0ef,	// (0x00031991) main_camera2_pane_g2_ParamLimits

0xc0ef,	// (0x00031991) main_camera2_pane_g2

0xc0ef,	// (0x00031991) main_camera2_pane_g3_ParamLimits

0xc0ef,	// (0x00031991) main_camera2_pane_g3

0xc0ef,	// (0x00031991) main_camera2_pane_g4_ParamLimits

0xc0ef,	// (0x00031991) main_camera2_pane_g4

0xc0ef,	// (0x00031991) main_camera2_pane_g5_ParamLimits

0xc0ef,	// (0x00031991) main_camera2_pane_g5

0xc0ef,	// (0x00031991) main_camera2_pane_g6_ParamLimits

0xc0ef,	// (0x00031991) main_camera2_pane_g6

0xc0ef,	// (0x00031991) main_camera2_pane_g7_ParamLimits

0xc0ef,	// (0x00031991) main_camera2_pane_g7

0xc0ef,	// (0x00031991) main_camera2_pane_g8_ParamLimits

0xc0ef,	// (0x00031991) main_camera2_pane_g8

0x0008,

0xf5b1,	// (0x00034e53) main_camera2_pane_g_ParamLimits

0xf5b1,	// (0x00034e53) main_camera2_pane_g

0x1556,	// (0x00026df8) main_camera2_pane_t1_ParamLimits

0x1556,	// (0x00026df8) main_camera2_pane_t1

0x1556,	// (0x00026df8) main_camera2_pane_t2_ParamLimits

0x1556,	// (0x00026df8) main_camera2_pane_t2

0x1556,	// (0x00026df8) main_camera2_pane_t3_ParamLimits

0x1556,	// (0x00026df8) main_camera2_pane_t3

0x1556,	// (0x00026df8) main_camera2_pane_t4_ParamLimits

0x1556,	// (0x00026df8) main_camera2_pane_t4

0x0006,

0xf5c4,	// (0x00034e66) main_camera2_pane_t_ParamLimits

0xf5c4,	// (0x00034e66) main_camera2_pane_t

0xc133,	// (0x000319d5) cams_zoom_pane_cp4_ParamLimits

0xc133,	// (0x000319d5) cams_zoom_pane_cp4

0x156a,	// (0x00026e0c) image2_cif_pane_ParamLimits

0x156a,	// (0x00026e0c) image2_cif_pane

0xb3eb,	// (0x00030c8d) image2_subqcif_pane_ParamLimits

0xb3eb,	// (0x00030c8d) image2_subqcif_pane

0x1578,	// (0x00026e1a) main_video2_pane_g1_ParamLimits

0x1578,	// (0x00026e1a) main_video2_pane_g1

0x1578,	// (0x00026e1a) main_video2_pane_g2_ParamLimits

0x1578,	// (0x00026e1a) main_video2_pane_g2

0x1578,	// (0x00026e1a) main_video2_pane_g3_ParamLimits

0x1578,	// (0x00026e1a) main_video2_pane_g3

0x1578,	// (0x00026e1a) main_video2_pane_g4_ParamLimits

0x1578,	// (0x00026e1a) main_video2_pane_g4

0x1578,	// (0x00026e1a) main_video2_pane_g5_ParamLimits

0x1578,	// (0x00026e1a) main_video2_pane_g5

0x1578,	// (0x00026e1a) main_video2_pane_g6_ParamLimits

0x1578,	// (0x00026e1a) main_video2_pane_g6

0x0005,

0xf5d3,	// (0x00034e75) main_video2_pane_g_ParamLimits

0xf5d3,	// (0x00034e75) main_video2_pane_g

0x1586,	// (0x00026e28) main_video2_pane_t1_ParamLimits

0x1586,	// (0x00026e28) main_video2_pane_t1

0x1586,	// (0x00026e28) main_video2_pane_t2_ParamLimits

0x1586,	// (0x00026e28) main_video2_pane_t2

0x1586,	// (0x00026e28) main_video2_pane_t3_ParamLimits

0x1586,	// (0x00026e28) main_video2_pane_t3

0x0002,

0xf5e0,	// (0x00034e82) main_video2_pane_t_ParamLimits

0xf5e0,	// (0x00034e82) main_video2_pane_t

0x68ca,	// (0x0002c16c) call_muted_g2

0x0001,

0xf587,	// (0x00034e29) call_muted_g

0x26ff,	// (0x00027fa1) main_mup2_pane

0x54db,	// (0x0002ad7d) main_mup2_pane_g1_ParamLimits

0x54db,	// (0x0002ad7d) main_mup2_pane_g1

0x54db,	// (0x0002ad7d) main_mup2_pane_g2_ParamLimits

0x54db,	// (0x0002ad7d) main_mup2_pane_g2

0xc22b,	// (0x00031acd) main_mup_pane_g13_cp1

0xb3f9,	// (0x00030c9b) mup_volume_pane_cp1

0x54db,	// (0x0002ad7d) main_mup2_pane_g4_ParamLimits

0x54db,	// (0x0002ad7d) main_mup2_pane_g4

0x54db,	// (0x0002ad7d) main_mup2_pane_g5_ParamLimits

0x54db,	// (0x0002ad7d) main_mup2_pane_g5

0x54db,	// (0x0002ad7d) main_mup2_pane_g6_ParamLimits

0x54db,	// (0x0002ad7d) main_mup2_pane_g6

0x54db,	// (0x0002ad7d) main_mup2_pane_g7_ParamLimits

0x54db,	// (0x0002ad7d) main_mup2_pane_g7

0x0006,

0xf5e7,	// (0x00034e89) main_mup2_pane_g_ParamLimits

0xf5e7,	// (0x00034e89) main_mup2_pane_g

0x54e9,	// (0x0002ad8b) main_mup2_pane_t1_ParamLimits

0x54e9,	// (0x0002ad8b) main_mup2_pane_t1

0x54e9,	// (0x0002ad8b) main_mup2_pane_t2_ParamLimits

0x54e9,	// (0x0002ad8b) main_mup2_pane_t2

0x54e9,	// (0x0002ad8b) main_mup2_pane_t3_ParamLimits

0x54e9,	// (0x0002ad8b) main_mup2_pane_t3

0x54e9,	// (0x0002ad8b) main_mup2_pane_t4_ParamLimits

0x54e9,	// (0x0002ad8b) main_mup2_pane_t4

0x54e9,	// (0x0002ad8b) main_mup2_pane_t5_ParamLimits

0x54e9,	// (0x0002ad8b) main_mup2_pane_t5

0x54e9,	// (0x0002ad8b) main_mup2_pane_t6_ParamLimits

0x54e9,	// (0x0002ad8b) main_mup2_pane_t6

0x0005,

0xf5f6,	// (0x00034e98) main_mup2_pane_t_ParamLimits

0xf5f6,	// (0x00034e98) main_mup2_pane_t

0x5511,	// (0x0002adb3) mup2_visualizer_pane_ParamLimits

0x5511,	// (0x0002adb3) mup2_visualizer_pane

0x5511,	// (0x0002adb3) mup_progress_pane_cp_ParamLimits

0x5511,	// (0x0002adb3) mup_progress_pane_cp

0xc20c,	// (0x00031aae) mup_volume_pane_cp_ParamLimits

0xc20c,	// (0x00031aae) mup_volume_pane_cp

0x29e3,	// (0x00028285) mup2_visualizer_pane_g1_ParamLimits

0x29e3,	// (0x00028285) mup2_visualizer_pane_g1

0x29f1,	// (0x00028293) mup2_visualizer_pane_g2_ParamLimits

0x29f1,	// (0x00028293) mup2_visualizer_pane_g2

0x29f1,	// (0x00028293) mup2_visualizer_pane_g3_ParamLimits

0x29f1,	// (0x00028293) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x00034986) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x00034986) mup2_visualizer_pane_g

0x5e4d,	// (0x0002b6ef) aid_size_cell_fmradio

0x123a,	// (0x00026adc) aid_height_parent_landcape

0x3aa2,	// (0x00029344) wml_content_pane_cp

0x3aaa,	// (0x0002934c) wml_tabs_pane

0x3ab3,	// (0x00029355) popup_wml_miniature_window

0x3abb,	// (0x0002935d) scroll_pane_cp021

0x3acf,	// (0x00029371) wml_content_pane_comp8

0x26ff,	// (0x00027fa1) bg_popup_sub_pane_cp05

0xc157,	// (0x000319f9) popup_wml_miniature_window_g1

0xc15f,	// (0x00031a01) wml_miniature_view_pane

0x6c89,	// (0x0002c52b) aid_size_wml_view

0x6c91,	// (0x0002c533) wml_miniature_view_pane_g1

0x6c9a,	// (0x0002c53c) wml_miniature_view_pane_g2

0x6ca3,	// (0x0002c545) wml_miniature_view_pane_g3

0x6cab,	// (0x0002c54d) wml_miniature_view_pane_g4

0x6cb3,	// (0x0002c555) wml_miniature_view_pane_g5

0x6cbb,	// (0x0002c55d) wml_miniature_view_pane_g6

0x6cc3,	// (0x0002c565) wml_miniature_view_pane_g7

0x6ccb,	// (0x0002c56d) wml_miniature_view_pane_g8

0x0007,

0xf603,	// (0x00034ea5) wml_miniature_view_pane_g

0xc167,	// (0x00031a09) background_graphic_ParamLimits

0xc167,	// (0x00031a09) background_graphic

0xc173,	// (0x00031a15) wml_tabs_2_pane

0xc17c,	// (0x00031a1e) wml_tabs_3_pane_ParamLimits

0xc17c,	// (0x00031a1e) wml_tabs_3_pane

0xc18e,	// (0x00031a30) wml_tabs_4_pane_ParamLimits

0xc18e,	// (0x00031a30) wml_tabs_4_pane

0xc1a4,	// (0x00031a46) wml_tabs_5_pane_ParamLimits

0xc1a4,	// (0x00031a46) wml_tabs_5_pane

0xc1be,	// (0x00031a60) wml_tabs_pane_g2_ParamLimits

0xc1be,	// (0x00031a60) wml_tabs_pane_g2

0xc1d3,	// (0x00031a75) wml_tabs_pane_g3_ParamLimits

0xc1d3,	// (0x00031a75) wml_tabs_pane_g3

0xc1e8,	// (0x00031a8a) wml_tabs_2_active_pane_ParamLimits

0xc1e8,	// (0x00031a8a) wml_tabs_2_active_pane

0xc1e8,	// (0x00031a8a) wml_tabs_2_passive_pane_ParamLimits

0xc1e8,	// (0x00031a8a) wml_tabs_2_passive_pane

0x6cd3,	// (0x0002c575) wml_tabs_3_active_pane_cp_ParamLimits

0x6cd3,	// (0x0002c575) wml_tabs_3_active_pane_cp

0x6ce8,	// (0x0002c58a) wml_tabs_3_passive_pane_ParamLimits

0x6ce8,	// (0x0002c58a) wml_tabs_3_passive_pane

0x6cfb,	// (0x0002c59d) wml_tabs_3_passive_pane_cp_ParamLimits

0x6cfb,	// (0x0002c59d) wml_tabs_3_passive_pane_cp

0x6d12,	// (0x0002c5b4) tabs_4_active_pane

0x6d1a,	// (0x0002c5bc) tabs_4_passive_pane

0x6d24,	// (0x0002c5c6) tabs_4_passive_pane_cp

0x6d2c,	// (0x0002c5ce) tabs_4_passive_pane_cp2

0x67b3,	// (0x0002c055) aid_height_text

0x5511,	// (0x0002adb3) mup_volume_cont_pane_ParamLimits

0x5511,	// (0x0002adb3) mup_volume_cont_pane

0x2244,	// (0x00027ae6) aid_size_cell_pinb

0x2244,	// (0x00027ae6) aid_size_list_pinb

0x5511,	// (0x0002adb3) mup2_volume_cont_pane_ParamLimits

0x5511,	// (0x0002adb3) mup2_volume_cont_pane

0xc1f6,	// (0x00031a98) mup2_volume_cont_pane_g1_ParamLimits

0xc1f6,	// (0x00031a98) mup2_volume_cont_pane_g1

0x0d6a,	// (0x0002660c) aid_size_cell_touch_ParamLimits

0x0d6a,	// (0x0002660c) aid_size_cell_touch

0x0f51,	// (0x000267f3) touch_pane_ParamLimits

0x0f51,	// (0x000267f3) touch_pane

0xb3f9,	// (0x00030c9b) main_rss2_pane

0xc235,	// (0x00031ad7) listscroll_rss2_pane

0xc23e,	// (0x00031ae0) rss2_navigation_pane

0xc246,	// (0x00031ae8) list_rss2_pane

0x4f9b,	// (0x0002a83d) scroll_pane_cp22

0xc24e,	// (0x00031af0) rss2_navigation_pane_g1

0xc257,	// (0x00031af9) rss2_navigation_pane_g2

0xc25f,	// (0x00031b01) rss2_navigation_pane_g3

0x0002,

0xf614,	// (0x00034eb6) rss2_navigation_pane_g

0xc267,	// (0x00031b09) rss2_navigation_pane_t1

0x6d36,	// (0x0002c5d8) rss2_list_single_pane_ParamLimits

0x6d36,	// (0x0002c5d8) rss2_list_single_pane

0xc275,	// (0x00031b17) rss2_list_single_pane_t2

0xc283,	// (0x00031b25) rss2_list_single_pane_t3_ParamLimits

0xc283,	// (0x00031b25) rss2_list_single_pane_t3

0xc2a0,	// (0x00031b42) rss2_list_single_pane_t4

0x4904,	// (0x0002a1a6) smil_status_pane_g1

0xb3eb,	// (0x00030c8d) main_image2_pane_ParamLimits

0xb3eb,	// (0x00030c8d) main_image2_pane

0xc0ef,	// (0x00031991) main_camera2_pane_g9_ParamLimits

0xc0ef,	// (0x00031991) main_camera2_pane_g9

0x1556,	// (0x00026df8) main_camera2_pane_t5_ParamLimits

0x1556,	// (0x00026df8) main_camera2_pane_t5

0xc0fd,	// (0x0003199f) main_camera2_pane_t6_ParamLimits

0xc0fd,	// (0x0003199f) main_camera2_pane_t6

0x6d50,	// (0x0002c5f2) main_image2_pane_g1_ParamLimits

0x6d50,	// (0x0002c5f2) main_image2_pane_g1

0x5df7,	// (0x0002b699) smil2_video_pane_ParamLimits

0x5df7,	// (0x0002b699) smil2_video_pane

0xb394,	// (0x00030c36) aid_zoom_text_primary_cp

0xb3e1,	// (0x00030c83) popup_preview_fixed_window

0x398f,	// (0x00029231) im_reading_pane_g1

0x1548,	// (0x00026dea) cams2_bc_adjust_pane_cp_ParamLimits

0x1548,	// (0x00026dea) cams2_bc_adjust_pane_cp

0xc125,	// (0x000319c7) cams2_bc_adjust_pane_ParamLimits

0xc125,	// (0x000319c7) cams2_bc_adjust_pane

0xc22b,	// (0x00031acd) cams2_bc_adjust_pane_g1

0xb3f9,	// (0x00030c9b) cams2_slider_pane

0xc22b,	// (0x00031acd) cams2_slider_pane_g1

0xc22b,	// (0x00031acd) cams2_slider_pane_g2

0x0006,

0xf61b,	// (0x00034ebd) cams2_slider_pane_g

0x0fc3,	// (0x00026865) calc_display_pane_ParamLimits

0x0fe8,	// (0x0002688a) calc_paper_pane_ParamLimits

0x100b,	// (0x000268ad) grid_calc_pane_ParamLimits

0xb527,	// (0x00030dc9) popup_clock_digital_window_t1_ParamLimits

0x5c74,	// (0x0002b516) main_image_pane_t1

0x0fa3,	// (0x00026845) aid_size_cell_calc_ParamLimits

0x0fa3,	// (0x00026845) aid_size_cell_calc

0x129c,	// (0x00026b3e) popup_blid_sat_info2_window_ParamLimits

0x129c,	// (0x00026b3e) popup_blid_sat_info2_window

0xc2ae,	// (0x00031b50) aid_size_cell_blid

0xc2b6,	// (0x00031b58) bg_popup_window_pane_cp07

0xc2d9,	// (0x00031b7b) grid_popup_blid_pane

0xc2e3,	// (0x00031b85) heading_pane_cp05_ParamLimits

0xc2e3,	// (0x00031b85) heading_pane_cp05

0xc3ad,	// (0x00031c4f) cell_popup_blid_pane_ParamLimits

0xc3ad,	// (0x00031c4f) cell_popup_blid_pane

0xc3d7,	// (0x00031c79) cell_popup_blid_pane_g1

0xc3df,	// (0x00031c81) cell_popup_blid_pane_t1

0x5511,	// (0x0002adb3) mup2_indicator_pane_ParamLimits

0x5511,	// (0x0002adb3) mup2_indicator_pane

0x2244,	// (0x00027ae6) mup2_visualizer_osc_pane

0xc141,	// (0x000319e3) mup2_visualizer_spec_pane_ParamLimits

0xc141,	// (0x000319e3) mup2_visualizer_spec_pane

0x2244,	// (0x00027ae6) mup2_spec_half_pane

0x2244,	// (0x00027ae6) mup2_spec_half_pane_cp

0xc3ed,	// (0x00031c8f) mup2_spec_bar_pane_ParamLimits

0xc3ed,	// (0x00031c8f) mup2_spec_bar_pane

0x34e7,	// (0x00028d89) mup2_spec_bar_pane_g1

0xc40c,	// (0x00031cae) mup2_spec_bar_pane_g2

0x0001,

0xf641,	// (0x00034ee3) mup2_spec_bar_pane_g

0x2244,	// (0x00027ae6) mup2_osc_middle_pane

0x34e7,	// (0x00028d89) mup2_visualizer_osc_pane_g1

0x22b3,	// (0x00027b55) popup_number_entry_window_t1_ParamLimits

0x22c6,	// (0x00027b68) popup_number_entry_window_t2_ParamLimits

0x22d8,	// (0x00027b7a) popup_number_entry_window_t3_ParamLimits

0x22ea,	// (0x00027b8c) popup_number_entry_window_t5_ParamLimits

0x22ea,	// (0x00027b8c) popup_number_entry_window_t5

0xf085,	// (0x00034927) popup_number_entry_window_t_ParamLimits

0x231f,	// (0x00027bc1) text_title_cp2_ParamLimits

0xb566,	// (0x00030e08) aid_hotspot_pointer_text2_pane

0xb58c,	// (0x00030e2e) main_viewer_pane_g9_ParamLimits

0xb58c,	// (0x00030e2e) main_viewer_pane_g9

0x42c8,	// (0x00029b6a) cale_month_pane_t1_ParamLimits

0x4985,	// (0x0002a227) bg_cale_pane_ParamLimits

0x499d,	// (0x0002a23f) list_cale_pane_ParamLimits

0x49ae,	// (0x0002a250) listscroll_cale_day_pane_t1

0x49c0,	// (0x0002a262) scroll_pane_cp09_ParamLimits

0x557a,	// (0x0002ae1c) main_mup_eq_pane_t1_ParamLimits

0x557a,	// (0x0002ae1c) main_mup_eq_pane_t1

0x5596,	// (0x0002ae38) main_mup_eq_pane_t2_ParamLimits

0x5596,	// (0x0002ae38) main_mup_eq_pane_t2

0x55b2,	// (0x0002ae54) main_mup_eq_pane_t3_ParamLimits

0x55b2,	// (0x0002ae54) main_mup_eq_pane_t3

0x55d0,	// (0x0002ae72) main_mup_eq_pane_t4_ParamLimits

0x55d0,	// (0x0002ae72) main_mup_eq_pane_t4

0x55ee,	// (0x0002ae90) main_mup_eq_pane_t5_ParamLimits

0x55ee,	// (0x0002ae90) main_mup_eq_pane_t5

0x560c,	// (0x0002aeae) main_mup_eq_pane_t6_ParamLimits

0x560c,	// (0x0002aeae) main_mup_eq_pane_t6

0x5622,	// (0x0002aec4) main_mup_eq_pane_t7_ParamLimits

0x5622,	// (0x0002aec4) main_mup_eq_pane_t7

0x5638,	// (0x0002aeda) main_mup_eq_pane_t8_ParamLimits

0x5638,	// (0x0002aeda) main_mup_eq_pane_t8

0x564e,	// (0x0002aef0) main_mup_eq_pane_t9_ParamLimits

0x564e,	// (0x0002aef0) main_mup_eq_pane_t9

0x566a,	// (0x0002af0c) main_mup_eq_pane_t10_ParamLimits

0x566a,	// (0x0002af0c) main_mup_eq_pane_t10

0x0009,

0xf3e4,	// (0x00034c86) main_mup_eq_pane_t_ParamLimits

0xf3e4,	// (0x00034c86) main_mup_eq_pane_t

0x573f,	// (0x0002afe1) mup_equalizer_pane_cp5_ParamLimits

0x5757,	// (0x0002aff9) mup_equalizer_pane_cp6_ParamLimits

0x576f,	// (0x0002b011) mup_equalizer_pane_cp7_ParamLimits

0xb3f9,	// (0x00030c9b) main_gallery_pane

0xc05d,	// (0x000318ff) smil2_volume_pane

0xc065,	// (0x00031907) smil_status_volume_pane_g1_ParamLimits

0xc078,	// (0x0003191a) smil_status_volume_pane_g2_ParamLimits

0xc08b,	// (0x0003192d) smil_status_volume_pane_g3_ParamLimits

0xf59a,	// (0x00034e3c) smil_status_volume_pane_g_ParamLimits

0xc2b6,	// (0x00031b58) bg_popup_window_pane_cp07_ParamLimits

0xc2c4,	// (0x00031b66) blid_firmament_pane

0x297c,	// (0x0002821e) aid_size_cell_gallery_ParamLimits

0x297c,	// (0x0002821e) aid_size_cell_gallery

0x297c,	// (0x0002821e) grid_gallery_pane_ParamLimits

0x297c,	// (0x0002821e) grid_gallery_pane

0xc2b6,	// (0x00031b58) cell_gallery_pane_ParamLimits

0xc2b6,	// (0x00031b58) cell_gallery_pane

0x297c,	// (0x0002821e) bg_cell_gallery_focus_pane_ParamLimits

0x297c,	// (0x0002821e) bg_cell_gallery_focus_pane

0x29e3,	// (0x00028285) cell_gallery_pane_g1_ParamLimits

0x29e3,	// (0x00028285) cell_gallery_pane_g1

0x29e3,	// (0x00028285) cell_gallery_pane_g2_ParamLimits

0x29e3,	// (0x00028285) cell_gallery_pane_g2

0x29e3,	// (0x00028285) cell_gallery_pane_g3_ParamLimits

0x29e3,	// (0x00028285) cell_gallery_pane_g3

0x29f1,	// (0x00028293) cell_gallery_pane_g4_ParamLimits

0x29f1,	// (0x00028293) cell_gallery_pane_g4

0x0003,

0xf646,	// (0x00034ee8) cell_gallery_pane_g_ParamLimits

0xf646,	// (0x00034ee8) cell_gallery_pane_g

0xc416,	// (0x00031cb8) bg_cell_gallery_focus_pane_g1

0xc41e,	// (0x00031cc0) bg_cell_gallery_focus_pane_g2

0xc426,	// (0x00031cc8) bg_cell_gallery_focus_pane_g3

0xc42e,	// (0x00031cd0) bg_cell_gallery_focus_pane_g4

0xc436,	// (0x00031cd8) bg_cell_gallery_focus_pane_g5

0xc43e,	// (0x00031ce0) bg_cell_gallery_focus_pane_g6

0xc446,	// (0x00031ce8) bg_cell_gallery_focus_pane_g7

0xc44e,	// (0x00031cf0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf64f,	// (0x00034ef1) bg_cell_gallery_focus_pane_g

0xc456,	// (0x00031cf8) aid_firma_cardinal

0xc46a,	// (0x00031d0c) blid_firmament_pane_t1

0xc481,	// (0x00031d23) blid_firmament_pane_t2

0xc498,	// (0x00031d3a) blid_firmament_pane_t3

0xc4af,	// (0x00031d51) blid_firmament_pane_t4

0x0003,

0xf660,	// (0x00034f02) blid_firmament_pane_t

0xc4c6,	// (0x00031d68) blid_sat_info_pane

0x34e7,	// (0x00028d89) blid_sat_info_pane_g1

0x34e7,	// (0x00028d89) blid_sat_info_pane_g2

0x0001,

0xf3d8,	// (0x00034c7a) blid_sat_info_pane_g

0xc4d6,	// (0x00031d78) blid_sat_info_pane_t1

0xc4e4,	// (0x00031d86) smil2_volume_content_pane

0xc4ed,	// (0x00031d8f) smil2_volume_pane_g1

0x2c01,	// (0x000284a3) smil2_volume_content_pane_g1

0xc4f5,	// (0x00031d97) smil2_volume_content_pane_g2

0xc4fe,	// (0x00031da0) smil2_volume_content_pane_g3

0xc507,	// (0x00031da9) smil2_volume_content_pane_g4

0xc510,	// (0x00031db2) smil2_volume_content_pane_g5

0xc519,	// (0x00031dbb) smil2_volume_content_pane_g6

0xc522,	// (0x00031dc4) smil2_volume_content_pane_g7

0xc52b,	// (0x00031dcd) smil2_volume_content_pane_g8

0xc534,	// (0x00031dd6) smil2_volume_content_pane_g9

0xc53d,	// (0x00031ddf) smil2_volume_content_pane_g10

0x0009,

0xf669,	// (0x00034f0b) smil2_volume_content_pane_g

0x30e2,	// (0x00028984) cale_week_day_heading_pane_t1_ParamLimits

0x310c,	// (0x000289ae) cale_week_day_heading_pane_t2_ParamLimits

0x313b,	// (0x000289dd) cale_week_day_heading_pane_t3_ParamLimits

0x316a,	// (0x00028a0c) cale_week_day_heading_pane_t4_ParamLimits

0x3199,	// (0x00028a3b) cale_week_day_heading_pane_t5_ParamLimits

0x31cc,	// (0x00028a6e) cale_week_day_heading_pane_t6_ParamLimits

0x3203,	// (0x00028aa5) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x00034a2e) cale_week_day_heading_pane_t_ParamLimits

0x322d,	// (0x00028acf) bg_cale_side_pane_ParamLimits

0x10e8,	// (0x0002698a) cale_week_time_pane_t1_ParamLimits

0x1102,	// (0x000269a4) cale_week_time_pane_t2_ParamLimits

0x111c,	// (0x000269be) cale_week_time_pane_t3_ParamLimits

0x1136,	// (0x000269d8) cale_week_time_pane_t4_ParamLimits

0x1150,	// (0x000269f2) cale_week_time_pane_t5_ParamLimits

0x116a,	// (0x00026a0c) cale_week_time_pane_t6_ParamLimits

0x118a,	// (0x00026a2c) cale_week_time_pane_t7_ParamLimits

0x11b0,	// (0x00026a52) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x00034a3d) cale_week_time_pane_t_ParamLimits

0x323b,	// (0x00028add) cell_cale_week_pane_g2_ParamLimits

0x322d,	// (0x00028acf) bg_cale_side_pane_cp01_ParamLimits

0x4703,	// (0x00029fa5) cale_month_week_pane_t1_ParamLimits

0x471c,	// (0x00029fbe) cale_month_week_pane_t2_ParamLimits

0x4735,	// (0x00029fd7) cale_month_week_pane_t3_ParamLimits

0x474e,	// (0x00029ff0) cale_month_week_pane_t4_ParamLimits

0x4767,	// (0x0002a009) cale_month_week_pane_t5_ParamLimits

0x4780,	// (0x0002a022) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x00034b0b) cale_month_week_pane_t_ParamLimits

0xb49b,	// (0x00030d3d) cell_cale_month_pane_g1_ParamLimits

0xb3f9,	// (0x00030c9b) main_cale_event_viewer_pane

0x2244,	// (0x00027ae6) listscroll_cale_event_viewer_pane

0xc546,	// (0x00031de8) list_cale_ev_pane

0xc54e,	// (0x00031df0) scroll_pane_cp023

0x6d66,	// (0x0002c608) field_cale_ev_pane_ParamLimits

0x6d66,	// (0x0002c608) field_cale_ev_pane

0xc55a,	// (0x00031dfc) field_cale_ev_content_pane_ParamLimits

0xc55a,	// (0x00031dfc) field_cale_ev_content_pane

0xc566,	// (0x00031e08) field_cale_ev_pane_g1_ParamLimits

0xc566,	// (0x00031e08) field_cale_ev_pane_g1

0xc572,	// (0x00031e14) field_cale_ev_pane_g2_ParamLimits

0xc572,	// (0x00031e14) field_cale_ev_pane_g2

0xc58a,	// (0x00031e2c) field_cale_ev_pane_g3_ParamLimits

0xc58a,	// (0x00031e2c) field_cale_ev_pane_g3

0x0002,

0xf67e,	// (0x00034f20) field_cale_ev_pane_g_ParamLimits

0xf67e,	// (0x00034f20) field_cale_ev_pane_g

0xc5a2,	// (0x00031e44) field_cale_ev_pane_t1_ParamLimits

0xc5a2,	// (0x00031e44) field_cale_ev_pane_t1

0x6d8a,	// (0x0002c62c) field_cale_ev_content_pane_t1_ParamLimits

0x6d8a,	// (0x0002c62c) field_cale_ev_content_pane_t1

0x587b,	// (0x0002b11d) bg_button_pane_cp01

0x2d62,	// (0x00028604) listscroll_cale_week_pane_ParamLimits

0x2d72,	// (0x00028614) popup_toolbar_window_cp01

0x3017,	// (0x000288b9) listscroll_cale_week_pane_t1_ParamLimits

0x2d62,	// (0x00028604) listscroll_cale_day_pane_ParamLimits

0x2d72,	// (0x00028614) popup_toolbar_window_cp02

0x49ae,	// (0x0002a250) listscroll_cale_day_pane_t1_ParamLimits

0x1258,	// (0x00026afa) main_cale_month_pane_ParamLimits

0xbfc8,	// (0x0003186a) popup_toolbar_window_cp03_ParamLimits

0xbfc8,	// (0x0003186a) popup_toolbar_window_cp03

0x5c52,	// (0x0002b4f4) main_image_pane_g2_ParamLimits

0x5c52,	// (0x0002b4f4) main_image_pane_g2

0x5c63,	// (0x0002b505) main_image_pane_g3_ParamLimits

0x5c63,	// (0x0002b505) main_image_pane_g3

0x0002,

0xf476,	// (0x00034d18) main_image_pane_g_ParamLimits

0xf476,	// (0x00034d18) main_image_pane_g

0x5c74,	// (0x0002b516) main_image_pane_t1_ParamLimits

0x5c8b,	// (0x0002b52d) main_image_pane_t2_ParamLimits

0x5c8b,	// (0x0002b52d) main_image_pane_t2

0x5c9d,	// (0x0002b53f) main_image_pane_t3_ParamLimits

0x5c9d,	// (0x0002b53f) main_image_pane_t3

0x5cc5,	// (0x0002b567) main_image_pane_t4_ParamLimits

0x5cc5,	// (0x0002b567) main_image_pane_t4

0x0003,

0xf47d,	// (0x00034d1f) main_image_pane_t_ParamLimits

0xf47d,	// (0x00034d1f) main_image_pane_t

0x5ce5,	// (0x0002b587) popup_image_details_window_cp01

0x5cef,	// (0x0002b591) popup_toobar_trans_pane_cp01_ParamLimits

0x5cef,	// (0x0002b591) popup_toobar_trans_pane_cp01

0x138f,	// (0x00026c31) popup_image_details_window_ParamLimits

0x138f,	// (0x00026c31) popup_image_details_window

0xbf99,	// (0x0003183b) popup_image_focus_window

0xc0e1,	// (0x00031983) camera2_autofocus_pane_ParamLimits

0xc0e1,	// (0x00031983) camera2_autofocus_pane

0x2244,	// (0x00027ae6) bg_popup_sub_pane_cp06

0xc5b9,	// (0x00031e5b) popup_image_focus_window_g1

0xc5c1,	// (0x00031e63) popup_image_focus_window_g2

0xc5c9,	// (0x00031e6b) popup_image_focus_window_g3

0xc5d1,	// (0x00031e73) popup_image_focus_window_g4

0x0003,

0xf685,	// (0x00034f27) popup_image_focus_window_g

0xc5d9,	// (0x00031e7b) popup_image_focus_window_t1

0xc5e7,	// (0x00031e89) popup_image_focus_window_t2

0xc5f7,	// (0x00031e99) popup_image_focus_window_t3

0x0002,

0xf68e,	// (0x00034f30) popup_image_focus_window_t

0x29e3,	// (0x00028285) camera2_autofocus_pane_g1

0x297c,	// (0x0002821e) bg_tb_trans_pane_cp01

0xc605,	// (0x00031ea7) popup_image_details_window_g1

0xc618,	// (0x00031eba) popup_image_details_window_g2

0x0002,

0xf6a0,	// (0x00034f42) popup_image_details_window_g

0xc641,	// (0x00031ee3) popup_image_details_window_t1

0xc653,	// (0x00031ef5) popup_image_details_window_t2

0xc66c,	// (0x00031f0e) popup_image_details_window_t3

0xc680,	// (0x00031f22) popup_image_details_window_t4

0xc69b,	// (0x00031f3d) popup_image_details_window_t5

0x0004,

0xf6a7,	// (0x00034f49) popup_image_details_window_t

0x2b13,	// (0x000283b5) bg_calc_paper_pane_ParamLimits

0xb3f9,	// (0x00030c9b) grid_highlight_pane_cp013

0xb40b,	// (0x00030cad) list_calc_pane_ParamLimits

0xb41d,	// (0x00030cbf) scroll_pane_cp024

0x2b27,	// (0x000283c9) bg_calc_display_pane_ParamLimits

0x1039,	// (0x000268db) calc_display_pane_t1_ParamLimits

0x104b,	// (0x000268ed) calc_display_pane_t2_ParamLimits

0xb425,	// (0x00030cc7) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x000349ae) calc_display_pane_t_ParamLimits

0x10b2,	// (0x00026954) cell_calc_pane_g2

0x0001,

0xf129,	// (0x000349cb) cell_calc_pane_g

0x10bb,	// (0x0002695d) cell_calc_pane_t1

0x2bd6,	// (0x00028478) grid_highlight_pane_cp02_ParamLimits

0x2bec,	// (0x0002848e) toolbar_button_pane_cp01_ParamLimits

0x2bec,	// (0x0002848e) toolbar_button_pane_cp01

0x5d31,	// (0x0002b5d3) temp_image_control_pane_ParamLimits

0x5d31,	// (0x0002b5d3) temp_image_control_pane

0xb3eb,	// (0x00030c8d) main_mp3_pane

0xc6b5,	// (0x00031f57) temp_image_control_pane_g1_ParamLimits

0xc6b5,	// (0x00031f57) temp_image_control_pane_g1

0xc6c3,	// (0x00031f65) temp_image_control_pane_g2_ParamLimits

0xc6c3,	// (0x00031f65) temp_image_control_pane_g2

0xc6d5,	// (0x00031f77) temp_image_control_pane_g3_ParamLimits

0xc6d5,	// (0x00031f77) temp_image_control_pane_g3

0x6dab,	// (0x0002c64d) temp_image_control_pane_g4_ParamLimits

0x6dab,	// (0x0002c64d) temp_image_control_pane_g4

0x0003,

0xf6b2,	// (0x00034f54) temp_image_control_pane_g_ParamLimits

0xf6b2,	// (0x00034f54) temp_image_control_pane_g

0xc6b5,	// (0x00031f57) main_mp3_pane_g1

0x6dbe,	// (0x0002c660) main_mp3_pane_g2

0x0007,

0xf6bb,	// (0x00034f5d) main_mp3_pane_g

0xc70a,	// (0x00031fac) main_mp3_pane_t1

0x29f1,	// (0x00028293) main_camera_pane_g8_ParamLimits

0x29f1,	// (0x00028293) main_camera_pane_g8

0x3495,	// (0x00028d37) main_video_pane_g7_ParamLimits

0x3495,	// (0x00028d37) main_video_pane_g7

0xc111,	// (0x000319b3) main_camera2_pane_t7_ParamLimits

0xc111,	// (0x000319b3) main_camera2_pane_t7

0x3a62,	// (0x00029304) scroll_pane_cp025_ParamLimits

0x3a62,	// (0x00029304) scroll_pane_cp025

0x3a76,	// (0x00029318) scroll_pane_cp026_ParamLimits

0x3a76,	// (0x00029318) scroll_pane_cp026

0x3a85,	// (0x00029327) wml_content_pane_ParamLimits

0xb3f9,	// (0x00030c9b) main_touch_calib_pane

0x6e90,	// (0x0002c732) main_touch_calib_pane_g1

0x6ea2,	// (0x0002c744) main_touch_calib_pane_g2

0x6eb4,	// (0x0002c756) main_touch_calib_pane_g3

0x6ec6,	// (0x0002c768) main_touch_calib_pane_g4

0x0003,

0xf6d9,	// (0x00034f7b) main_touch_calib_pane_g

0x6ed8,	// (0x0002c77a) main_touch_calib_pane_t1

0x6ef2,	// (0x0002c794) main_touch_calib_pane_t2

0x0004,

0xf6e2,	// (0x00034f84) main_touch_calib_pane_t

0x526b,	// (0x0002ab0d) mup_progress_pane_cp02

0x52a0,	// (0x0002ab42) navi_pane_g1

0x535b,	// (0x0002abfd) navi_pane_mp_t3

0xb3eb,	// (0x00030c8d) main_mp3_pane_ParamLimits

0x6a7a,	// (0x0002c31c) navi_pane_ParamLimits

0xc6b5,	// (0x00031f57) main_mp3_pane_g1_ParamLimits

0x6dbe,	// (0x0002c660) main_mp3_pane_g2_ParamLimits

0x6dca,	// (0x0002c66c) main_mp3_pane_g3_ParamLimits

0x6dca,	// (0x0002c66c) main_mp3_pane_g3

0x6dd8,	// (0x0002c67a) main_mp3_pane_g4_ParamLimits

0x6dd8,	// (0x0002c67a) main_mp3_pane_g4

0x29e3,	// (0x00028285) main_mp3_pane_g5_ParamLimits

0x29e3,	// (0x00028285) main_mp3_pane_g5

0xc6e5,	// (0x00031f87) main_mp3_pane_g6_ParamLimits

0xc6e5,	// (0x00031f87) main_mp3_pane_g6

0xc6f2,	// (0x00031f94) main_mp3_pane_g7_ParamLimits

0xc6f2,	// (0x00031f94) main_mp3_pane_g7

0xc6fe,	// (0x00031fa0) main_mp3_pane_g8_ParamLimits

0xc6fe,	// (0x00031fa0) main_mp3_pane_g8

0xf6bb,	// (0x00034f5d) main_mp3_pane_g_ParamLimits

0x6de4,	// (0x0002c686) main_mp3_pane_t2

0x6df2,	// (0x0002c694) main_mp3_pane_t3

0xc718,	// (0x00031fba) main_mp3_pane_t4

0xc726,	// (0x00031fc8) main_mp3_pane_t5

0x0005,

0xf6cc,	// (0x00034f6e) main_mp3_pane_t

0xc734,	// (0x00031fd6) mup_progress_pane_cp01

0xb394,	// (0x00030c36) aid_zoom_text_secondary2

0xc546,	// (0x00031de8) list_cale_ev2_pane

0xc54e,	// (0x00031df0) scroll_pane_cp023_ParamLimits

0x6f4c,	// (0x0002c7ee) field_cale_ev2_pane_ParamLimits

0x6f4c,	// (0x0002c7ee) field_cale_ev2_pane

0x6f70,	// (0x0002c812) field_cale_ev2_pane_g1_ParamLimits

0x6f70,	// (0x0002c812) field_cale_ev2_pane_g1

0x6f7c,	// (0x0002c81e) field_cale_ev2_pane_g2_ParamLimits

0x6f7c,	// (0x0002c81e) field_cale_ev2_pane_g2

0x6f94,	// (0x0002c836) field_cale_ev2_pane_g3_ParamLimits

0x6f94,	// (0x0002c836) field_cale_ev2_pane_g3

0x0003,

0xf6ed,	// (0x00034f8f) field_cale_ev2_pane_g_ParamLimits

0xf6ed,	// (0x00034f8f) field_cale_ev2_pane_g

0x6fac,	// (0x0002c84e) field_cale_ev2_pane_t1_ParamLimits

0x6fac,	// (0x0002c84e) field_cale_ev2_pane_t1

0x6fc3,	// (0x0002c865) field_cale_ev2_pane_t2_ParamLimits

0x6fc3,	// (0x0002c865) field_cale_ev2_pane_t2

0x0001,

0xf6f6,	// (0x00034f98) field_cale_ev2_pane_t_ParamLimits

0xf6f6,	// (0x00034f98) field_cale_ev2_pane_t

0x5a04,	// (0x0002b2a6) main_postcard_pane_g5_ParamLimits

0x5a04,	// (0x0002b2a6) main_postcard_pane_g5

0x5a1a,	// (0x0002b2bc) main_postcard_pane_g6_ParamLimits

0x5a1a,	// (0x0002b2bc) main_postcard_pane_g6

0x297c,	// (0x0002821e) camera2_autofocus_pane_cp_ParamLimits

0x297c,	// (0x0002821e) camera2_autofocus_pane_cp

0xb3eb,	// (0x00030c8d) main_mup3_pane

0x7022,	// (0x0002c8c4) main_mup3_pane_g1_ParamLimits

0x7022,	// (0x0002c8c4) main_mup3_pane_g1

0x7044,	// (0x0002c8e6) main_mup3_pane_g2_ParamLimits

0x7044,	// (0x0002c8e6) main_mup3_pane_g2

0x70bf,	// (0x0002c961) main_mup3_pane_g3_ParamLimits

0x70bf,	// (0x0002c961) main_mup3_pane_g3

0x7129,	// (0x0002c9cb) main_mup3_pane_g4_ParamLimits

0x7129,	// (0x0002c9cb) main_mup3_pane_g4

0x7193,	// (0x0002ca35) main_mup3_pane_g5_ParamLimits

0x7193,	// (0x0002ca35) main_mup3_pane_g5

0x71fd,	// (0x0002ca9f) main_mup3_pane_g6_ParamLimits

0x71fd,	// (0x0002ca9f) main_mup3_pane_g6

0x29f1,	// (0x00028293) main_mup3_pane_g7_ParamLimits

0x29f1,	// (0x00028293) main_mup3_pane_g7

0x0007,

0xf706,	// (0x00034fa8) main_mup3_pane_g_ParamLimits

0xf706,	// (0x00034fa8) main_mup3_pane_g

0x7281,	// (0x0002cb23) main_mup3_pane_t1_ParamLimits

0x7281,	// (0x0002cb23) main_mup3_pane_t1

0x72f3,	// (0x0002cb95) main_mup3_pane_t2_ParamLimits

0x72f3,	// (0x0002cb95) main_mup3_pane_t2

0x73c9,	// (0x0002cc6b) main_mup3_pane_t4_ParamLimits

0x73c9,	// (0x0002cc6b) main_mup3_pane_t4

0x7427,	// (0x0002ccc9) main_mup3_pane_t5_ParamLimits

0x7427,	// (0x0002ccc9) main_mup3_pane_t5

0x74eb,	// (0x0002cd8d) main_mup3_pane_t6_ParamLimits

0x74eb,	// (0x0002cd8d) main_mup3_pane_t6

0x0005,

0xf717,	// (0x00034fb9) main_mup3_pane_t_ParamLimits

0xf717,	// (0x00034fb9) main_mup3_pane_t

0x75a3,	// (0x0002ce45) mup3_progress_pane_ParamLimits

0x75a3,	// (0x0002ce45) mup3_progress_pane

0x763b,	// (0x0002cedd) popup_mup3_control_window_ParamLimits

0x763b,	// (0x0002cedd) popup_mup3_control_window

0xc748,	// (0x00031fea) popup_mup3_text_window

0x7671,	// (0x0002cf13) mup3_progress_pane_t1

0x7690,	// (0x0002cf32) mup3_progress_pane_t2

0xc750,	// (0x00031ff2) mup3_progress_pane_t3

0x0002,

0xf724,	// (0x00034fc6) mup3_progress_pane_t

0xc76d,	// (0x0003200f) mup_progress_pane_cp03

0x2244,	// (0x00027ae6) bg_tb_trans_pane_cp04

0x76af,	// (0x0002cf51) mup3_volume_pane

0x76b7,	// (0x0002cf59) popup_mup3_control_window_g1

0x76c0,	// (0x0002cf62) mup3_volume_pane_g1

0x76c9,	// (0x0002cf6b) mup3_volume_pane_g2

0x76d2,	// (0x0002cf74) mup3_volume_pane_g3

0x0002,

0xf72b,	// (0x00034fcd) mup3_volume_pane_g

0x2244,	// (0x00027ae6) bg_tb_trans_pane_cp03

0xc77d,	// (0x0003201f) popup_mup3_text_window_g1

0xc785,	// (0x00032027) popup_mup3_text_window_t1

0x2bc9,	// (0x0002846b) list_calc_item_pane_g1_ParamLimits

0xc222,	// (0x00031ac4) mup_volume_pane_cp_g1

0x6f0c,	// (0x0002c7ae) main_touch_calib_pane_t3

0x6f20,	// (0x0002c7c2) main_touch_calib_pane_t4

0x6f36,	// (0x0002c7d8) main_touch_calib_pane_t5

0xb380,	// (0x00030c22) aid_cell_size_toolbar2

0xb388,	// (0x00030c2a) aid_popup3_width_pane

0xb394,	// (0x00030c36) aid_zoom_text_msg_primary

0x3340,	// (0x00028be2) vorec_t7

0x2b33,	// (0x000283d5) bg_calc_paper_pane_g1_ParamLimits

0x2b3f,	// (0x000283e1) bg_calc_paper_pane_g2_ParamLimits

0x2b4b,	// (0x000283ed) bg_calc_paper_pane_g3_ParamLimits

0x2b57,	// (0x000283f9) bg_calc_paper_pane_g4_ParamLimits

0x2b63,	// (0x00028405) bg_calc_paper_pane_g5_ParamLimits

0x2b6f,	// (0x00028411) bg_calc_paper_pane_g6_ParamLimits

0x2b7d,	// (0x0002841f) bg_calc_paper_pane_g7_ParamLimits

0x2b8b,	// (0x0002842d) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x000349b5) bg_calc_paper_pane_g_ParamLimits

0x2b9e,	// (0x00028440) calc_bg_paper_pane_g9_ParamLimits

0x297c,	// (0x0002821e) image_qvga_pane_ParamLimits

0x297c,	// (0x0002821e) image_qvga_pane

0x295a,	// (0x000281fc) bg_popup_sub_pane_cp04_ParamLimits

0x5bb0,	// (0x0002b452) popup_mup_playback_window_g1_ParamLimits

0x5bbc,	// (0x0002b45e) popup_mup_playback_window_t1_ParamLimits

0x5bd1,	// (0x0002b473) popup_mup_playback_window_t2_ParamLimits

0xf471,	// (0x00034d13) popup_mup_playback_window_t_ParamLimits

0x29f1,	// (0x00028293) main_mup2_pane_g3_ParamLimits

0x29f1,	// (0x00028293) main_mup2_pane_g3

0x36ed,	// (0x00028f8f) popup_toolbar_window_cp04

0x63f6,	// (0x0002bc98) popup_call2_audio_second_window_g3_ParamLimits

0x63f6,	// (0x0002bc98) popup_call2_audio_second_window_g3

0xb67a,	// (0x00030f1c) popup_call2_audio_first_window_g4_ParamLimits

0xb67a,	// (0x00030f1c) popup_call2_audio_first_window_g4

0xbca1,	// (0x00031543) popup_call2_audio_in_window_g4_ParamLimits

0xbca1,	// (0x00031543) popup_call2_audio_in_window_g4

0x5be6,	// (0x0002b488) aid_area_sk_bg_cut_ParamLimits

0x5be6,	// (0x0002b488) aid_area_sk_bg_cut

0x5c04,	// (0x0002b4a6) aid_area_sk_bg_cut_2_ParamLimits

0x5c04,	// (0x0002b4a6) aid_area_sk_bg_cut_2

0x2244,	// (0x00027ae6) aid_placing_details_win

0x2244,	// (0x00027ae6) aid_placing_details_win_2

0x29e3,	// (0x00028285) camera2_autofocus_pane_g1_ParamLimits

0x0ef8,	// (0x0002679a) popup_fixed_preview_cale_window_ParamLimits

0x0ef8,	// (0x0002679a) popup_fixed_preview_cale_window

0x541b,	// (0x0002acbd) navi_slider_pane_g3

0x5424,	// (0x0002acc6) navi_slider_pane_g4

0x542d,	// (0x0002accf) navi_slider_pane_g5

0x541b,	// (0x0002acbd) navi_slider_pane_g6

0xb54d,	// (0x00030def) navi_slider_pane_g7

0x5790,	// (0x0002b032) mup_scale_pane_g3

0x5799,	// (0x0002b03b) mup_scale_pane_g4

0x57a2,	// (0x0002b044) mup_scale_pane_g5

0x57ab,	// (0x0002b04d) mup_scale_pane_g6

0x57b4,	// (0x0002b056) mup_scale_pane_g7

0xc22b,	// (0x00031acd) cams2_slider_pane_g3

0xc22b,	// (0x00031acd) cams2_slider_pane_g4

0xc22b,	// (0x00031acd) cams2_slider_pane_g5

0xc22b,	// (0x00031acd) cams2_slider_pane_g6

0xc22b,	// (0x00031acd) cams2_slider_pane_g7

0x34e7,	// (0x00028d89) camera2_autofocus_pane_cp_g1

0xbf79,	// (0x0003181b) bg_popup_preview_window_pane_cp02_ParamLimits

0xbf79,	// (0x0003181b) bg_popup_preview_window_pane_cp02

0xc793,	// (0x00032035) list_fp_cale_pane_ParamLimits

0xc793,	// (0x00032035) list_fp_cale_pane

0xc79f,	// (0x00032041) popup_fixed_preview_cale_window_t1_ParamLimits

0xc79f,	// (0x00032041) popup_fixed_preview_cale_window_t1

0x76db,	// (0x0002cf7d) popup_fixed_preview_cale_window_t2_ParamLimits

0x76db,	// (0x0002cf7d) popup_fixed_preview_cale_window_t2

0x76f0,	// (0x0002cf92) popup_fixed_preview_cale_window_t3_ParamLimits

0x76f0,	// (0x0002cf92) popup_fixed_preview_cale_window_t3

0x0002,

0xf732,	// (0x00034fd4) popup_fixed_preview_cale_window_t_ParamLimits

0xf732,	// (0x00034fd4) popup_fixed_preview_cale_window_t

0x7707,	// (0x0002cfa9) list_single_fp_cale_pane_ParamLimits

0x7707,	// (0x0002cfa9) list_single_fp_cale_pane

0xc7bd,	// (0x0003205f) list_single_fp_cale_pane_g1_ParamLimits

0xc7bd,	// (0x0003205f) list_single_fp_cale_pane_g1

0xc7c9,	// (0x0003206b) list_single_fp_cale_pane_g2_ParamLimits

0xc7c9,	// (0x0003206b) list_single_fp_cale_pane_g2

0x0002,

0xf739,	// (0x00034fdb) list_single_fp_cale_pane_g_ParamLimits

0xf739,	// (0x00034fdb) list_single_fp_cale_pane_g

0xc7e2,	// (0x00032084) list_single_fp_cale_pane_t1_ParamLimits

0xc7e2,	// (0x00032084) list_single_fp_cale_pane_t1

0xc7f4,	// (0x00032096) list_single_fp_cale_pane_t2_ParamLimits

0xc7f4,	// (0x00032096) list_single_fp_cale_pane_t2

0x0001,

0xf740,	// (0x00034fe2) list_single_fp_cale_pane_t_ParamLimits

0xf740,	// (0x00034fe2) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb3f9,	// (0x00030c9b) main_dialer_pane

0x2244,	// (0x00027ae6) aid_cell_size_keypad

0x2244,	// (0x00027ae6) dialer_ne_pane

0x2244,	// (0x00027ae6) grid_dialer_command_1_pane

0x2244,	// (0x00027ae6) grid_dialer_command_2_pane

0x2244,	// (0x00027ae6) grid_dialer_keypad_pane

0x771f,	// (0x0002cfc1) bg_popup_call_pane_cp06_ParamLimits

0x771f,	// (0x0002cfc1) bg_popup_call_pane_cp06

0x771f,	// (0x0002cfc1) dialer_ne_clear_pane_ParamLimits

0x771f,	// (0x0002cfc1) dialer_ne_clear_pane

0x34e7,	// (0x00028d89) dialer_ne_pane_g1

0x54fd,	// (0x0002ad9f) dialer_ne_pane_t1_ParamLimits

0x54fd,	// (0x0002ad9f) dialer_ne_pane_t1

0x772d,	// (0x0002cfcf) dialer_ne_pane_t2_ParamLimits

0x772d,	// (0x0002cfcf) dialer_ne_pane_t2

0x7755,	// (0x0002cff7) dialer_ne_pane_t3_ParamLimits

0x7755,	// (0x0002cff7) dialer_ne_pane_t3

0x0002,

0xf745,	// (0x00034fe7) dialer_ne_pane_t_ParamLimits

0xf745,	// (0x00034fe7) dialer_ne_pane_t

0x7755,	// (0x0002cff7) dialer_ne_pane_t3_copy1_ParamLimits

0x7755,	// (0x0002cff7) dialer_ne_pane_t3_copy1

0xc827,	// (0x000320c9) cell_dialer_keypad_pane_ParamLimits

0xc827,	// (0x000320c9) cell_dialer_keypad_pane

0x297c,	// (0x0002821e) cell_dialer_command_1_pane_ParamLimits

0x297c,	// (0x0002821e) cell_dialer_command_1_pane

0xc83e,	// (0x000320e0) cell_dialer_command_2_pane_ParamLimits

0xc83e,	// (0x000320e0) cell_dialer_command_2_pane

0x297c,	// (0x0002821e) bg_button_pane_cp02_ParamLimits

0x297c,	// (0x0002821e) bg_button_pane_cp02

0x29e3,	// (0x00028285) cell_dialer_keypad_pane_g1_ParamLimits

0x29e3,	// (0x00028285) cell_dialer_keypad_pane_g1

0x297c,	// (0x0002821e) bg_button_pane_cp03_ParamLimits

0x297c,	// (0x0002821e) bg_button_pane_cp03

0x29e3,	// (0x00028285) cell_dialer_command_1_pane_g1_ParamLimits

0x29e3,	// (0x00028285) cell_dialer_command_1_pane_g1

0x2244,	// (0x00027ae6) bg_button_pane_cp04

0x34e7,	// (0x00028d89) cell_dialer_command_2_pane_g1

0x2244,	// (0x00027ae6) bg_button_pane_cp06

0x34e7,	// (0x00028d89) dialer_ne_clear_pane_g1

0x52ac,	// (0x0002ab4e) navi_pane_g2

0x52da,	// (0x0002ab7c) navi_pane_g3

0x0002,

0xf374,	// (0x00034c16) navi_pane_g

0x5369,	// (0x0002ac0b) navi_pane_mv_g2

0x5390,	// (0x0002ac32) navi_pane_mv_g5

0x5398,	// (0x0002ac3a) navi_pane_mv_t1

0x2b27,	// (0x000283c9) main_clock2_pane

0x297c,	// (0x0002821e) main_clock2_list_pane_ParamLimits

0x297c,	// (0x0002821e) main_clock2_list_pane

0x77e6,	// (0x0002d088) main_clock2_pane_t1_ParamLimits

0x77e6,	// (0x0002d088) main_clock2_pane_t1

0x7821,	// (0x0002d0c3) main_clock2_pane_t2_ParamLimits

0x7821,	// (0x0002d0c3) main_clock2_pane_t2

0x0004,

0xf751,	// (0x00034ff3) main_clock2_pane_t_ParamLimits

0xf751,	// (0x00034ff3) main_clock2_pane_t

0x78c0,	// (0x0002d162) popup_clock_analogue_window_cp03_ParamLimits

0x78c0,	// (0x0002d162) popup_clock_analogue_window_cp03

0x78e5,	// (0x0002d187) popup_clock_digital_window_cp02_ParamLimits

0x78e5,	// (0x0002d187) popup_clock_digital_window_cp02

0x795e,	// (0x0002d200) main_clock2_list_single_pane_ParamLimits

0x795e,	// (0x0002d200) main_clock2_list_single_pane

0x32f6,	// (0x00028b98) list_highlight_pane_cp05

0xc87f,	// (0x00032121) main_clock2_list_single_pane_t1

0x36ed,	// (0x00028f8f) popup_toolbar_window_cp04_ParamLimits

0x29f1,	// (0x00028293) camera2_autofocus_pane_g2_ParamLimits

0x29f1,	// (0x00028293) camera2_autofocus_pane_g2

0x29f1,	// (0x00028293) camera2_autofocus_pane_g3_ParamLimits

0x29f1,	// (0x00028293) camera2_autofocus_pane_g3

0x29f1,	// (0x00028293) camera2_autofocus_pane_g4_ParamLimits

0x29f1,	// (0x00028293) camera2_autofocus_pane_g4

0x29f1,	// (0x00028293) camera2_autofocus_pane_g5_ParamLimits

0x29f1,	// (0x00028293) camera2_autofocus_pane_g5

0x0004,

0xf695,	// (0x00034f37) camera2_autofocus_pane_g_ParamLimits

0xf695,	// (0x00034f37) camera2_autofocus_pane_g

0x6fd8,	// (0x0002c87a) camera2_autofocus_pane_cp_g2

0x6fe0,	// (0x0002c882) camera2_autofocus_pane_cp_g3

0x6fe8,	// (0x0002c88a) camera2_autofocus_pane_cp_g4

0x6ff0,	// (0x0002c892) camera2_autofocus_pane_cp_g5

0x0004,

0xf6fb,	// (0x00034f9d) camera2_autofocus_pane_cp_g

0x2244,	// (0x00027ae6) popup_dialer_spcha_window

0x2244,	// (0x00027ae6) bg_popup_sub_pane_cp07

0x2244,	// (0x00027ae6) list_spcha_pane

0xc88d,	// (0x0003212f) list_single_spcha_pane_ParamLimits

0xc88d,	// (0x0003212f) list_single_spcha_pane

0x2244,	// (0x00027ae6) list_highlight_pane_cp06

0x4c51,	// (0x0002a4f3) list_single_spcha_pane_t1

0xba4b,	// (0x000312ed) popup_call2_audio_out_window_g4_ParamLimits

0xba4b,	// (0x000312ed) popup_call2_audio_out_window_g4

0xb3f9,	// (0x00030c9b) main_imed2_pane

0xbfa3,	// (0x00031845) popup_imed_adjust2_window

0x13a7,	// (0x00026c49) popup_imed_trans_window_ParamLimits

0x13a7,	// (0x00026c49) popup_imed_trans_window

0xc30f,	// (0x00031bb1) popup_blid_sat_info2_window_t1

0xc31d,	// (0x00031bbf) popup_blid_sat_info2_window_t2

0x000a,

0xf62a,	// (0x00034ecc) popup_blid_sat_info2_window_t

0x7970,	// (0x0002d212) aid_size_cell_colour_35

0x7990,	// (0x0002d232) aid_size_cell_colour_112

0x79b0,	// (0x0002d252) aid_size_cell_effect

0x5511,	// (0x0002adb3) bg_tb_trans_pane_cp02

0x4b03,	// (0x0002a3a5) heading_imed_pane

0x79d0,	// (0x0002d272) listscroll_imed_pane

0xc89f,	// (0x00032141) heading_imed_pane_g1

0xc8a7,	// (0x00032149) heading_imed_pane_t1

0xc8b5,	// (0x00032157) grid_imed_colour_35_pane_ParamLimits

0xc8b5,	// (0x00032157) grid_imed_colour_35_pane

0x79dc,	// (0x0002d27e) grid_imed_effect_pane

0xc8d1,	// (0x00032173) list_imed_aspect_pane

0x79f3,	// (0x0002d295) scroll_pane_cp027_ParamLimits

0x79f3,	// (0x0002d295) scroll_pane_cp027

0x7a04,	// (0x0002d2a6) cell_imed_effect_pane_ParamLimits

0x7a04,	// (0x0002d2a6) cell_imed_effect_pane

0xc8d9,	// (0x0003217b) cell_imed_colour_pane_ParamLimits

0xc8d9,	// (0x0003217b) cell_imed_colour_pane

0xc923,	// (0x000321c5) cell_imed_colour_pane_g1_ParamLimits

0xc923,	// (0x000321c5) cell_imed_colour_pane_g1

0xc934,	// (0x000321d6) hgihlgiht_grid_pane_cp016_ParamLimits

0xc934,	// (0x000321d6) hgihlgiht_grid_pane_cp016

0x7a2f,	// (0x0002d2d1) cell_imed_effect_pane_g1

0x7a37,	// (0x0002d2d9) grid_highlight_pane_cp017

0xc945,	// (0x000321e7) list_imed_single_pane_ParamLimits

0xc945,	// (0x000321e7) list_imed_single_pane

0x2244,	// (0x00027ae6) list_highlight_pane_cp07

0xc959,	// (0x000321fb) list_imed_aspect_pane_comp1_t1

0x5511,	// (0x0002adb3) bg_tb_trans_pane_cp05

0xc97b,	// (0x0003221d) popup_imed_adjust2_window_g1

0xc9a2,	// (0x00032244) popup_imed_adjust2_window_t1

0xc9ba,	// (0x0003225c) slider_imed_adjust_pane

0xc9ce,	// (0x00032270) slider_imed_adjust_pane_g1

0xc9de,	// (0x00032280) slider_imed_adjust_pane_g2

0xc9ee,	// (0x00032290) slider_imed_adjust_pane_g3

0xc9ff,	// (0x000322a1) slider_imed_adjust_pane_g4

0x0003,

0xf76e,	// (0x00035010) slider_imed_adjust_pane_g

0x7a40,	// (0x0002d2e2) aid_size_cell_clipart2

0xca10,	// (0x000322b2) grid_imed_clipart_pane

0xca1a,	// (0x000322bc) scroll_pane_cp031

0x7a4c,	// (0x0002d2ee) cell_imed_clipart_pane_ParamLimits

0x7a4c,	// (0x0002d2ee) cell_imed_clipart_pane

0x7a69,	// (0x0002d30b) cell_imed_clipart_pane_g1

0x2244,	// (0x00027ae6) grid_highlight_pane_cp014

0x77c4,	// (0x0002d066) main_clock2_pane_g1_ParamLimits

0x77c4,	// (0x0002d066) main_clock2_pane_g1

0x7905,	// (0x0002d1a7) aid_call2_pane_cp10

0x7917,	// (0x0002d1b9) aid_call_pane_cp10

0x51a4,	// (0x0002aa46) popup_clock_analogue_window_cp10_g1

0x51a4,	// (0x0002aa46) popup_clock_analogue_window_cp10_g2

0x7929,	// (0x0002d1cb) popup_clock_analogue_window_cp10_g3

0x7929,	// (0x0002d1cb) popup_clock_analogue_window_cp10_g4

0x51a4,	// (0x0002aa46) popup_clock_analogue_window_cp10_g5

0x0004,

0xf75c,	// (0x00034ffe) popup_clock_analogue_window_cp10_g

0x793f,	// (0x0002d1e1) popup_clock_analogue_window_cp10_t1

0x159a,	// (0x00026e3c) clock_digital_number_pane_cp10_ParamLimits

0x159a,	// (0x00026e3c) clock_digital_number_pane_cp10

0x15b4,	// (0x00026e56) clock_digital_number_pane_cp11_ParamLimits

0x15b4,	// (0x00026e56) clock_digital_number_pane_cp11

0x15ce,	// (0x00026e70) clock_digital_number_pane_cp12_ParamLimits

0x15ce,	// (0x00026e70) clock_digital_number_pane_cp12

0x15ea,	// (0x00026e8c) clock_digital_number_pane_cp13_ParamLimits

0x15ea,	// (0x00026e8c) clock_digital_number_pane_cp13

0x1606,	// (0x00026ea8) clock_digital_separator_pane_cp10_ParamLimits

0x1606,	// (0x00026ea8) clock_digital_separator_pane_cp10

0x1622,	// (0x00026ec4) popup_clock_digital_window_cp02_t1_ParamLimits

0x1622,	// (0x00026ec4) popup_clock_digital_window_cp02_t1

0x2952,	// (0x000281f4) clock_digital_number_pane_cp10_g1

0x2952,	// (0x000281f4) clock_digital_number_pane_cp10_g2

0x0001,

0xf777,	// (0x00035019) clock_digital_number_pane_cp10_g

0x2952,	// (0x000281f4) clock_digital_separator_pane_cp10_g1

0x2952,	// (0x000281f4) clock_digital_separator_pane_g2_cp10

0x53da,	// (0x0002ac7c) navi_pane_vded_g4

0x53e3,	// (0x0002ac85) navi_pane_vded_g5

0x53ec,	// (0x0002ac8e) navi_pane_vded_t1

0xb3f9,	// (0x00030c9b) main_vded_pane

0x7a72,	// (0x0002d314) main_vded_pane_g1

0x7a7e,	// (0x0002d320) main_vded_pane_g2

0x7a8a,	// (0x0002d32c) main_vded_pane_g3

0x0002,

0xf77c,	// (0x0003501e) main_vded_pane_g

0x7a96,	// (0x0002d338) main_vded_pane_t1

0x7aa4,	// (0x0002d346) main_vded_pane_t2

0x0001,

0xf783,	// (0x00035025) main_vded_pane_t

0x7ab2,	// (0x0002d354) vded_slider_pane

0x7abc,	// (0x0002d35e) vded_video_pane

0xca22,	// (0x000322c4) vded_video_pane_g1

0x7ac8,	// (0x0002d36a) vded_video_pane_g2

0x34e7,	// (0x00028d89) vded_video_pane_g3

0x0002,

0xf788,	// (0x0003502a) vded_video_pane_g

0xca2c,	// (0x000322ce) vded_slider_pane_g1

0xc222,	// (0x00031ac4) vded_slider_pane_g2

0xca35,	// (0x000322d7) vded_slider_pane_g3

0xca3e,	// (0x000322e0) vded_slider_pane_g4

0xca47,	// (0x000322e9) vded_slider_pane_g5

0x0004,

0xf78f,	// (0x00035031) vded_slider_pane_g

0x7625,	// (0x0002cec7) mup3_rocker_pane_ParamLimits

0x7625,	// (0x0002cec7) mup3_rocker_pane

0x7ad1,	// (0x0002d373) mup3_control_keys_pane_g1

0x7ad9,	// (0x0002d37b) mup3_control_keys_pane_g2

0x7ae1,	// (0x0002d383) mup3_control_keys_pane_g3

0x7ae9,	// (0x0002d38b) mup3_control_keys_pane_g4

0x0003,

0xf79a,	// (0x0003503c) mup3_control_keys_pane_g

0x0f2d,	// (0x000267cf) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0f2d,	// (0x000267cf) popup_toolbar2_fixed_window_cp01

0x765b,	// (0x0002cefd) popup_toolbar2_fixed_window_cp02_ParamLimits

0x765b,	// (0x0002cefd) popup_toolbar2_fixed_window_cp02

0x6568,	// (0x0002be0a) popup_call2_audio_second_window_t4_ParamLimits

0x6568,	// (0x0002be0a) popup_call2_audio_second_window_t4

0xb910,	// (0x000311b2) popup_call2_audio_first_window_t6_ParamLimits

0xb910,	// (0x000311b2) popup_call2_audio_first_window_t6

0xbb4e,	// (0x000313f0) popup_call2_audio_out_window_t6_ParamLimits

0xbb4e,	// (0x000313f0) popup_call2_audio_out_window_t6

0xb3f9,	// (0x00030c9b) main_vitu_pane

0x297c,	// (0x0002821e) aid_size_cell_itu_ParamLimits

0x297c,	// (0x0002821e) aid_size_cell_itu

0x297c,	// (0x0002821e) bg_popup_window_pane_cp08_ParamLimits

0x297c,	// (0x0002821e) bg_popup_window_pane_cp08

0x297c,	// (0x0002821e) field_vitu_entry_pane_ParamLimits

0x297c,	// (0x0002821e) field_vitu_entry_pane

0x297c,	// (0x0002821e) grid_vitu_function_pane_ParamLimits

0x297c,	// (0x0002821e) grid_vitu_function_pane

0x297c,	// (0x0002821e) grid_vitu_itu_pane_ParamLimits

0x297c,	// (0x0002821e) grid_vitu_itu_pane

0x297c,	// (0x0002821e) cell_vitu_itu_pane_ParamLimits

0x297c,	// (0x0002821e) cell_vitu_itu_pane

0x297c,	// (0x0002821e) cell_vitu_function_pane_ParamLimits

0x297c,	// (0x0002821e) cell_vitu_function_pane

0x297c,	// (0x0002821e) bg_popup_sub_pane_cp08_ParamLimits

0x297c,	// (0x0002821e) bg_popup_sub_pane_cp08

0x3363,	// (0x00028c05) field_vitu_entry_pane_t1_ParamLimits

0x3363,	// (0x00028c05) field_vitu_entry_pane_t1

0xca50,	// (0x000322f2) field_vitu_entry_pane_t2_ParamLimits

0xca50,	// (0x000322f2) field_vitu_entry_pane_t2

0x0001,

0xf7a3,	// (0x00035045) field_vitu_entry_pane_t_ParamLimits

0xf7a3,	// (0x00035045) field_vitu_entry_pane_t

0xc2b6,	// (0x00031b58) bg_button_pane_cp05_ParamLimits

0xc2b6,	// (0x00031b58) bg_button_pane_cp05

0xca6d,	// (0x0003230f) cell_vitu_itu_pane_g1

0x54e9,	// (0x0002ad8b) cell_vitu_itu_pane_t1_ParamLimits

0x54e9,	// (0x0002ad8b) cell_vitu_itu_pane_t1

0x54e9,	// (0x0002ad8b) cell_vitu_itu_pane_t2_ParamLimits

0x54e9,	// (0x0002ad8b) cell_vitu_itu_pane_t2

0x0002,

0xf7a8,	// (0x0003504a) cell_vitu_itu_pane_t_ParamLimits

0xf7a8,	// (0x0003504a) cell_vitu_itu_pane_t

0x2244,	// (0x00027ae6) bg_button_pane_cp07

0x34e7,	// (0x00028d89) cell_vitu_function_pane_g1

0xb403,	// (0x00030ca5) main_calc_pane_g1

0x0d8e,	// (0x00026630) aid_visual_content_pane

0xb3f9,	// (0x00030c9b) main_vradio_pane

0x29e3,	// (0x00028285) main_vradio_pane_g1_ParamLimits

0x29e3,	// (0x00028285) main_vradio_pane_g1

0x29f1,	// (0x00028293) main_vradio_pane_g2_ParamLimits

0x29f1,	// (0x00028293) main_vradio_pane_g2

0x0001,

0xf7af,	// (0x00035051) main_vradio_pane_g_ParamLimits

0xf7af,	// (0x00035051) main_vradio_pane_g

0x3363,	// (0x00028c05) main_vradio_pane_t1_ParamLimits

0x3363,	// (0x00028c05) main_vradio_pane_t1

0x3363,	// (0x00028c05) main_vradio_pane_t2_ParamLimits

0x3363,	// (0x00028c05) main_vradio_pane_t2

0x54fd,	// (0x0002ad9f) main_vradio_pane_t3_ParamLimits

0x54fd,	// (0x0002ad9f) main_vradio_pane_t3

0x0002,

0xf7b4,	// (0x00035056) main_vradio_pane_t_ParamLimits

0xf7b4,	// (0x00035056) main_vradio_pane_t

0x297c,	// (0x0002821e) vradio_rocker_control_pane_ParamLimits

0x297c,	// (0x0002821e) vradio_rocker_control_pane

0x297c,	// (0x0002821e) vradio_station_info_pane_ParamLimits

0x297c,	// (0x0002821e) vradio_station_info_pane

0x297c,	// (0x0002821e) vradio_frequency_info_pane_ParamLimits

0x297c,	// (0x0002821e) vradio_frequency_info_pane

0x34e7,	// (0x00028d89) vradio_station_info_pane_g1

0x54e9,	// (0x0002ad8b) vradio_station_info_pane_t1_ParamLimits

0x54e9,	// (0x0002ad8b) vradio_station_info_pane_t1

0x54fd,	// (0x0002ad9f) vradio_station_info_pane_t2_ParamLimits

0x54fd,	// (0x0002ad9f) vradio_station_info_pane_t2

0x0001,

0xf7bb,	// (0x0003505d) vradio_station_info_pane_t_ParamLimits

0xf7bb,	// (0x0003505d) vradio_station_info_pane_t

0x2244,	// (0x00027ae6) vradio_tuning_pane

0x7af9,	// (0x0002d39b) vradio_rocker_control_pane_g1

0xca89,	// (0x0003232b) vradio_rocker_control_pane_g2

0x7b03,	// (0x0002d3a5) vradio_rocker_control_pane_g3

0x7b0d,	// (0x0002d3af) vradio_rocker_control_pane_g4

0x7b17,	// (0x0002d3b9) vradio_rocker_control_pane_g5

0x0004,

0xf7c0,	// (0x00035062) vradio_rocker_control_pane_g

0x34e7,	// (0x00028d89) vradio_frequency_info_pane_g1

0x3363,	// (0x00028c05) vradio_frequency_info_pane_t1_ParamLimits

0x3363,	// (0x00028c05) vradio_frequency_info_pane_t1

0x7b21,	// (0x0002d3c3) vradio_tuning_pane_g1

0x7b2c,	// (0x0002d3ce) vradio_tuning_pane_t1

0xb3a4,	// (0x00030c46) area_side_right_pane_ParamLimits

0xb3a4,	// (0x00030c46) area_side_right_pane

0xbf40,	// (0x000317e2) status_small_pane_g1

0xbf48,	// (0x000317ea) status_small_pane_g2

0xbf51,	// (0x000317f3) status_small_pane_g3

0xbf5a,	// (0x000317fc) status_small_pane_g4

0x0003,

0xf58c,	// (0x00034e2e) status_small_pane_g

0xbf63,	// (0x00031805) status_small_pane_t1

0xb3f9,	// (0x00030c9b) main_video3_pane

0xca91,	// (0x00032333) cams_zoom_vslider_pane

0xca99,	// (0x0003233b) image3_wide_pane_ParamLimits

0xca99,	// (0x0003233b) image3_wide_pane

0xcab3,	// (0x00032355) image3_wide_small_pane

0xcabf,	// (0x00032361) main_video3_pane_g1_ParamLimits

0xcabf,	// (0x00032361) main_video3_pane_g1

0xcadb,	// (0x0003237d) main_video3_pane_g2_ParamLimits

0xcadb,	// (0x0003237d) main_video3_pane_g2

0x0001,

0xf7cb,	// (0x0003506d) main_video3_pane_g_ParamLimits

0xf7cb,	// (0x0003506d) main_video3_pane_g

0xcaf7,	// (0x00032399) main_video3_pane_t1_ParamLimits

0xcaf7,	// (0x00032399) main_video3_pane_t1

0xcb22,	// (0x000323c4) main_video3_pane_t2_ParamLimits

0xcb22,	// (0x000323c4) main_video3_pane_t2

0xcb4f,	// (0x000323f1) main_video3_pane_t3_ParamLimits

0xcb4f,	// (0x000323f1) main_video3_pane_t3

0x0002,

0xf7d0,	// (0x00035072) main_video3_pane_t_ParamLimits

0xf7d0,	// (0x00035072) main_video3_pane_t

0xcb7c,	// (0x0003241e) cams_zoom_vslider_pane_g1

0xcb85,	// (0x00032427) cams_zoom_vslider_pane_g2

0x0001,

0xf7d7,	// (0x00035079) cams_zoom_vslider_pane_g

0xcb8d,	// (0x0003242f) small_slider_vertical_pane

0x34e7,	// (0x00028d89) small_slider_vertical_pane_g1

0x34e7,	// (0x00028d89) small_slider_vertical_pane_g2

0xcb95,	// (0x00032437) small_slider_vertical_pane_g3

0x0002,

0xf7dc,	// (0x0003507e) small_slider_vertical_pane_g

0xb3f9,	// (0x00030c9b) main_hwr_training_pane

0xcb9e,	// (0x00032440) hwr_training_instruct_pane_ParamLimits

0xcb9e,	// (0x00032440) hwr_training_instruct_pane

0x7b3b,	// (0x0002d3dd) hwr_training_navi_pane_ParamLimits

0x7b3b,	// (0x0002d3dd) hwr_training_navi_pane

0x7b5a,	// (0x0002d3fc) hwr_training_write_pane_ParamLimits

0x7b5a,	// (0x0002d3fc) hwr_training_write_pane

0x2244,	// (0x00027ae6) bg_frame_shadow_pane

0xcbd5,	// (0x00032477) hwr_training_write_pane_g1

0xcbdd,	// (0x0003247f) hwr_training_write_pane_g2

0xcbe5,	// (0x00032487) hwr_training_write_pane_g3

0xcbed,	// (0x0003248f) hwr_training_write_pane_g4

0xcbf5,	// (0x00032497) hwr_training_write_pane_g5

0xcbfd,	// (0x0003249f) hwr_training_write_pane_g6

0xcc05,	// (0x000324a7) hwr_training_write_pane_g7

0x0006,

0xf7e3,	// (0x00035085) hwr_training_write_pane_g

0xcc0d,	// (0x000324af) hwr_training_navi_pane_g1_ParamLimits

0xcc0d,	// (0x000324af) hwr_training_navi_pane_g1

0xcc1f,	// (0x000324c1) hwr_training_navi_pane_g2_ParamLimits

0xcc1f,	// (0x000324c1) hwr_training_navi_pane_g2

0xcc31,	// (0x000324d3) hwr_training_navi_pane_g3_ParamLimits

0xcc31,	// (0x000324d3) hwr_training_navi_pane_g3

0xcc41,	// (0x000324e3) hwr_training_navi_pane_g4_ParamLimits

0xcc41,	// (0x000324e3) hwr_training_navi_pane_g4

0x0004,

0xf7f2,	// (0x00035094) hwr_training_navi_pane_g_ParamLimits

0xf7f2,	// (0x00035094) hwr_training_navi_pane_g

0xcc4e,	// (0x000324f0) hwr_training_navi_pane_t1

0x7b95,	// (0x0002d437) list_single_hwr_training_instruct_pane_ParamLimits

0x7b95,	// (0x0002d437) list_single_hwr_training_instruct_pane

0xcc5c,	// (0x000324fe) list_single_hwr_training_instruct_pane_t1

0xc416,	// (0x00031cb8) bg_frame_shadow_pane_g1

0xcc6b,	// (0x0003250d) bg_frame_shadow_pane_g2

0xcc73,	// (0x00032515) bg_frame_shadow_pane_g3

0xcc7b,	// (0x0003251d) bg_frame_shadow_pane_g4

0xcc83,	// (0x00032525) bg_frame_shadow_pane_g5

0xcc8b,	// (0x0003252d) bg_frame_shadow_pane_g6

0xcc93,	// (0x00032535) bg_frame_shadow_pane_g7

0x2cbd,	// (0x0002855f) bg_frame_shadow_pane_g8

0x0007,

0xf7fd,	// (0x0003509f) bg_frame_shadow_pane_g

0xb3f9,	// (0x00030c9b) main_video_tele_dialer_pane

0x1650,	// (0x00026ef2) aid_size_cell_video_keypad_ParamLimits

0x1650,	// (0x00026ef2) aid_size_cell_video_keypad

0x166a,	// (0x00026f0c) grid_video_dialer_keypad_pane_ParamLimits

0x166a,	// (0x00026f0c) grid_video_dialer_keypad_pane

0x16b6,	// (0x00026f58) video_down_pane_cp_ParamLimits

0x16b6,	// (0x00026f58) video_down_pane_cp

0x16cc,	// (0x00026f6e) cell_video_dialer_keypad_pane_ParamLimits

0x16cc,	// (0x00026f6e) cell_video_dialer_keypad_pane

0xcc9b,	// (0x0003253d) bg_button_pane_cp08_ParamLimits

0xcc9b,	// (0x0003253d) bg_button_pane_cp08

0x7bcd,	// (0x0002d46f) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7bcd,	// (0x0002d46f) cell_video_dialer_keypad_pane_g1

0x760f,	// (0x0002ceb1) mup3_rocker2_pane_ParamLimits

0x760f,	// (0x0002ceb1) mup3_rocker2_pane

0x34e7,	// (0x00028d89) mup3_rocker2_pane_g1

0x1268,	// (0x00026b0a) main_dialer2_pane

0xb3f9,	// (0x00030c9b) main_mp4_pane

0xccc5,	// (0x00032567) main_mp4_pane_g1_ParamLimits

0xccc5,	// (0x00032567) main_mp4_pane_g1

0xccc5,	// (0x00032567) main_mp4_pane_g2_ParamLimits

0xccc5,	// (0x00032567) main_mp4_pane_g2

0x16f2,	// (0x00026f94) main_mp4_pane_g3_ParamLimits

0x16f2,	// (0x00026f94) main_mp4_pane_g3

0xccd3,	// (0x00032575) main_mp4_pane_g4_ParamLimits

0xccd3,	// (0x00032575) main_mp4_pane_g4

0xcd01,	// (0x000325a3) main_mp4_pane_g5_ParamLimits

0xcd01,	// (0x000325a3) main_mp4_pane_g5

0x0007,

0xf81d,	// (0x000350bf) main_mp4_pane_g_ParamLimits

0xf81d,	// (0x000350bf) main_mp4_pane_g

0xcd75,	// (0x00032617) main_mp4_pane_t1_ParamLimits

0xcd75,	// (0x00032617) main_mp4_pane_t1

0xcdd1,	// (0x00032673) main_mp4_pane_t2_ParamLimits

0xcdd1,	// (0x00032673) main_mp4_pane_t2

0xce23,	// (0x000326c5) main_mp4_pane_t3_ParamLimits

0xce23,	// (0x000326c5) main_mp4_pane_t3

0xce49,	// (0x000326eb) main_mp4_pane_t4_ParamLimits

0xce49,	// (0x000326eb) main_mp4_pane_t4

0x0003,

0xf82e,	// (0x000350d0) main_mp4_pane_t_ParamLimits

0xf82e,	// (0x000350d0) main_mp4_pane_t

0xce89,	// (0x0003272b) mp4_progress_pane_ParamLimits

0xce89,	// (0x0003272b) mp4_progress_pane

0xced3,	// (0x00032775) mp4_rocker_pane_ParamLimits

0xced3,	// (0x00032775) mp4_rocker_pane

0xcefb,	// (0x0003279d) mp4_progress_pane_t1

0xcf14,	// (0x000327b6) mp4_progress_pane_t2

0x0001,

0xf837,	// (0x000350d9) mp4_progress_pane_t

0xcf2d,	// (0x000327cf) mup_progress_pane_cp04

0xc22b,	// (0x00031acd) mp4_rocker_pane_g1

0x173c,	// (0x00026fde) aid_cell_size_keypad2_ParamLimits

0x173c,	// (0x00026fde) aid_cell_size_keypad2

0x1752,	// (0x00026ff4) dialer2_ne_pane_ParamLimits

0x1752,	// (0x00026ff4) dialer2_ne_pane

0x176a,	// (0x0002700c) grid_dialer2_keypad_pane_ParamLimits

0x176a,	// (0x0002700c) grid_dialer2_keypad_pane

0xc2b6,	// (0x00031b58) bg_popup_call_pane_cp07_ParamLimits

0xc2b6,	// (0x00031b58) bg_popup_call_pane_cp07

0x7c08,	// (0x0002d4aa) dialer2_ne_pane_t1_ParamLimits

0x7c08,	// (0x0002d4aa) dialer2_ne_pane_t1

0x1786,	// (0x00027028) cell_dialer2_keypad_pane_ParamLimits

0x1786,	// (0x00027028) cell_dialer2_keypad_pane

0xcf52,	// (0x000327f4) bg_button_pane_pane_cp04_ParamLimits

0xcf52,	// (0x000327f4) bg_button_pane_pane_cp04

0x7c48,	// (0x0002d4ea) cell_dialer2_keypad_pane_g1_ParamLimits

0x7c48,	// (0x0002d4ea) cell_dialer2_keypad_pane_g1

0x35c2,	// (0x00028e64) aid_placing_vt_set_content_ParamLimits

0x35c2,	// (0x00028e64) aid_placing_vt_set_content

0x35e6,	// (0x00028e88) aid_placing_vt_set_title_ParamLimits

0x35e6,	// (0x00028e88) aid_placing_vt_set_title

0xb3f9,	// (0x00030c9b) main_image3_pane

0x180a,	// (0x000270ac) area_side_right_pane_cp01_ParamLimits

0x180a,	// (0x000270ac) area_side_right_pane_cp01

0xccc5,	// (0x00032567) main_image3_pane_g1_ParamLimits

0xccc5,	// (0x00032567) main_image3_pane_g1

0x1823,	// (0x000270c5) main_image3_pane_g2_ParamLimits

0x1823,	// (0x000270c5) main_image3_pane_g2

0x184b,	// (0x000270ed) main_image3_pane_g3_ParamLimits

0x184b,	// (0x000270ed) main_image3_pane_g3

0x1875,	// (0x00027117) main_image3_pane_g4_ParamLimits

0x1875,	// (0x00027117) main_image3_pane_g4

0x0003,

0xf846,	// (0x000350e8) main_image3_pane_g_ParamLimits

0xf846,	// (0x000350e8) main_image3_pane_g

0x189f,	// (0x00027141) main_image3_pane_t1_ParamLimits

0x189f,	// (0x00027141) main_image3_pane_t1

0x18f7,	// (0x00027199) main_image3_pane_t2_ParamLimits

0x18f7,	// (0x00027199) main_image3_pane_t2

0x1949,	// (0x000271eb) main_image3_pane_t3_ParamLimits

0x1949,	// (0x000271eb) main_image3_pane_t3

0x0003,

0xf84f,	// (0x000350f1) main_image3_pane_t_ParamLimits

0xf84f,	// (0x000350f1) main_image3_pane_t

0x297c,	// (0x0002821e) grid_sctrl_middle_pane_cp01_ParamLimits

0x297c,	// (0x0002821e) grid_sctrl_middle_pane_cp01

0x7cb0,	// (0x0002d552) cell_sctrl_middle_pane_cp01_ParamLimits

0x7cb0,	// (0x0002d552) cell_sctrl_middle_pane_cp01

0x7ccd,	// (0x0002d56f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7ccd,	// (0x0002d56f) cell_sctrl_middle_pane_cp01_g1

0xb3f9,	// (0x00030c9b) main_call4_pane

0x19d1,	// (0x00027273) aid_size_button_call4_ParamLimits

0x19d1,	// (0x00027273) aid_size_button_call4

0x1a04,	// (0x000272a6) call4_windows_pane_ParamLimits

0x1a04,	// (0x000272a6) call4_windows_pane

0x1a23,	// (0x000272c5) grid_call4_button_pane_ParamLimits

0x1a23,	// (0x000272c5) grid_call4_button_pane

0x7cee,	// (0x0002d590) call4_windows_conf_pane

0x7d07,	// (0x0002d5a9) popup_call4_audio_first_window_ParamLimits

0x7d07,	// (0x0002d5a9) popup_call4_audio_first_window

0x7d57,	// (0x0002d5f9) popup_call4_audio_second_window_ParamLimits

0x7d57,	// (0x0002d5f9) popup_call4_audio_second_window

0x7d70,	// (0x0002d612) popup_call4_audio_wait_window_ParamLimits

0x7d70,	// (0x0002d612) popup_call4_audio_wait_window

0x1a4e,	// (0x000272f0) cell_call4_button_pane_ParamLimits

0x1a4e,	// (0x000272f0) cell_call4_button_pane

0x7d7e,	// (0x0002d620) bg_button_pane_cp09_ParamLimits

0x7d7e,	// (0x0002d620) bg_button_pane_cp09

0x1a75,	// (0x00027317) cell_call4_button_pane_g1_ParamLimits

0x1a75,	// (0x00027317) cell_call4_button_pane_g1

0x1a9b,	// (0x0002733d) cell_call4_button_pane_t1_ParamLimits

0x1a9b,	// (0x0002733d) cell_call4_button_pane_t1

0xcfcc,	// (0x0003286e) popup_call4_audio_conf_window_ParamLimits

0xcfcc,	// (0x0003286e) popup_call4_audio_conf_window

0x7671,	// (0x0002cf13) mup3_progress_pane_t1_ParamLimits

0x7690,	// (0x0002cf32) mup3_progress_pane_t2_ParamLimits

0xc750,	// (0x00031ff2) mup3_progress_pane_t3_ParamLimits

0xf724,	// (0x00034fc6) mup3_progress_pane_t_ParamLimits

0xc76d,	// (0x0003200f) mup_progress_pane_cp03_ParamLimits

0x7af1,	// (0x0002d393) mup3_control_keys_pane_g4_copy1

0xceb7,	// (0x00032759) mp4_rocker2_pane_ParamLimits

0xceb7,	// (0x00032759) mp4_rocker2_pane

0xcfe6,	// (0x00032888) mp4_rocker2_pane_g1

0xcfee,	// (0x00032890) mp4_rocker2_pane_g2

0xcff6,	// (0x00032898) mp4_rocker2_pane_g3

0xcffe,	// (0x000328a0) mp4_rocker2_pane_g4

0xd006,	// (0x000328a8) mp4_rocker2_pane_g5

0x0004,

0xf858,	// (0x000350fa) mp4_rocker2_pane_g

0xb3f9,	// (0x00030c9b) main_camera4_pane

0xb3f9,	// (0x00030c9b) main_video4_pane

0x1684,	// (0x00026f26) main_video_tele_dialer_pane_t1_ParamLimits

0x1684,	// (0x00026f26) main_video_tele_dialer_pane_t1

0x169d,	// (0x00026f3f) main_video_tele_dialer_pane_t2_ParamLimits

0x169d,	// (0x00026f3f) main_video_tele_dialer_pane_t2

0x0001,

0xf80e,	// (0x000350b0) main_video_tele_dialer_pane_t_ParamLimits

0xf80e,	// (0x000350b0) main_video_tele_dialer_pane_t

0x1ad9,	// (0x0002737b) cam4_autofocus_pane_ParamLimits

0x1ad9,	// (0x0002737b) cam4_autofocus_pane

0x1aef,	// (0x00027391) cam4_image_uncrop_pane_ParamLimits

0x1aef,	// (0x00027391) cam4_image_uncrop_pane

0x1b08,	// (0x000273aa) cam4_indicators_pane_ParamLimits

0x1b08,	// (0x000273aa) cam4_indicators_pane

0x1b38,	// (0x000273da) main_camera4_pane_g1_ParamLimits

0x1b38,	// (0x000273da) main_camera4_pane_g1

0x1b4a,	// (0x000273ec) main_camera4_pane_g2_ParamLimits

0x1b4a,	// (0x000273ec) main_camera4_pane_g2

0x1b5d,	// (0x000273ff) main_camera4_pane_g3_ParamLimits

0x1b5d,	// (0x000273ff) main_camera4_pane_g3

0x1b70,	// (0x00027412) main_camera4_pane_g4_ParamLimits

0x1b70,	// (0x00027412) main_camera4_pane_g4

0x1b83,	// (0x00027425) main_camera4_pane_g5_ParamLimits

0x1b83,	// (0x00027425) main_camera4_pane_g5

0x0005,

0xf863,	// (0x00035105) main_camera4_pane_g_ParamLimits

0xf863,	// (0x00035105) main_camera4_pane_g

0x1ba7,	// (0x00027449) main_camera4_pane_t1_ParamLimits

0x1ba7,	// (0x00027449) main_camera4_pane_t1

0xd040,	// (0x000328e2) bg_tb_trans_pane_cp06

0xd056,	// (0x000328f8) cam4_indicators_pane_g1

0xd067,	// (0x00032909) cam4_indicators_pane_g2

0x0002,

0xf87e,	// (0x00035120) cam4_indicators_pane_g

0xd07f,	// (0x00032921) cam4_indicators_pane_t1

0x1bf7,	// (0x00027499) main_video4_pane_g1_ParamLimits

0x1bf7,	// (0x00027499) main_video4_pane_g1

0x1c06,	// (0x000274a8) main_video4_pane_g2_ParamLimits

0x1c06,	// (0x000274a8) main_video4_pane_g2

0x1c16,	// (0x000274b8) main_video4_pane_g3_ParamLimits

0x1c16,	// (0x000274b8) main_video4_pane_g3

0x1c26,	// (0x000274c8) main_video4_pane_g4_ParamLimits

0x1c26,	// (0x000274c8) main_video4_pane_g4

0x0004,

0xf885,	// (0x00035127) main_video4_pane_g_ParamLimits

0xf885,	// (0x00035127) main_video4_pane_g

0x1c46,	// (0x000274e8) vid4_indicators_pane_ParamLimits

0x1c46,	// (0x000274e8) vid4_indicators_pane

0x1c70,	// (0x00027512) video4_image_uncrop_cif_pane_ParamLimits

0x1c70,	// (0x00027512) video4_image_uncrop_cif_pane

0x1c8a,	// (0x0002752c) video4_image_uncrop_nhd_pane_ParamLimits

0x1c8a,	// (0x0002752c) video4_image_uncrop_nhd_pane

0x1aef,	// (0x00027391) video4_image_uncrop_vga_pane_ParamLimits

0x1aef,	// (0x00027391) video4_image_uncrop_vga_pane

0xb3eb,	// (0x00030c8d) bg_tb_trans_pane_cp07

0xd0ad,	// (0x0003294f) vid4_indicators_pane_g1

0xd0c3,	// (0x00032965) vid4_indicators_pane_g2

0xd0d7,	// (0x00032979) vid4_indicators_pane_g3

0x0004,

0xf890,	// (0x00035132) vid4_indicators_pane_g

0xd108,	// (0x000329aa) vid4_indicators_pane_t1

0x7d9e,	// (0x0002d640) cam4_autofocus_pane_g1

0x7da6,	// (0x0002d648) cam4_autofocus_pane_g2

0x7dae,	// (0x0002d650) cam4_autofocus_pane_g3

0x0002,

0xf89b,	// (0x0003513d) cam4_autofocus_pane_g

0x7db6,	// (0x0002d658) cam4_autofocus_pane_g3_copy1

0x7bb1,	// (0x0002d453) video_down_pane_cp_t1

0x7bbf,	// (0x0002d461) video_down_pane_cp_t2

0x0001,

0xf813,	// (0x000350b5) video_down_pane_cp_t

0xb3eb,	// (0x00030c8d) popup_vitu2_window_ParamLimits

0xb3eb,	// (0x00030c8d) popup_vitu2_window

0x1ca1,	// (0x00027543) aid_size_cell2_itu2_ParamLimits

0x1ca1,	// (0x00027543) aid_size_cell2_itu2

0x1cc1,	// (0x00027563) aid_size_cell_itu2_ParamLimits

0x1cc1,	// (0x00027563) aid_size_cell_itu2

0x1d10,	// (0x000275b2) bg_popup_window_pane_cp09_ParamLimits

0x1d10,	// (0x000275b2) bg_popup_window_pane_cp09

0x1d1e,	// (0x000275c0) field_vitu2_entry_pane_ParamLimits

0x1d1e,	// (0x000275c0) field_vitu2_entry_pane

0x1d43,	// (0x000275e5) grid_vitu2_function_pane_ParamLimits

0x1d43,	// (0x000275e5) grid_vitu2_function_pane

0x1d8e,	// (0x00027630) grid_vitu2_itu_pane_ParamLimits

0x1d8e,	// (0x00027630) grid_vitu2_itu_pane

0x1e16,	// (0x000276b8) cell_vitu2_itu_pane_ParamLimits

0x1e16,	// (0x000276b8) cell_vitu2_itu_pane

0x1e44,	// (0x000276e6) cell_vitu2_function_pane_ParamLimits

0x1e44,	// (0x000276e6) cell_vitu2_function_pane

0xd11f,	// (0x000329c1) bg_popup_call_pane_cp08_ParamLimits

0xd11f,	// (0x000329c1) bg_popup_call_pane_cp08

0xd136,	// (0x000329d8) field_vitu2_entry_pane_g1

0xd142,	// (0x000329e4) field_vitu2_entry_pane_g2

0x0002,

0xf8a2,	// (0x00035144) field_vitu2_entry_pane_g

0xd14e,	// (0x000329f0) field_vitu2_entry_pane_t1_ParamLimits

0xd14e,	// (0x000329f0) field_vitu2_entry_pane_t1

0xd17d,	// (0x00032a1f) field_vitu2_entry_pane_t2_ParamLimits

0xd17d,	// (0x00032a1f) field_vitu2_entry_pane_t2

0x0001,

0xf8a9,	// (0x0003514b) field_vitu2_entry_pane_t_ParamLimits

0xf8a9,	// (0x0003514b) field_vitu2_entry_pane_t

0x1e88,	// (0x0002772a) bg_button_pane_cp010_ParamLimits

0x1e88,	// (0x0002772a) bg_button_pane_cp010

0x1e96,	// (0x00027738) cell_vitu2_itu_pane_g1

0x1ebc,	// (0x0002775e) cell_vitu2_itu_pane_t1_ParamLimits

0x1ebc,	// (0x0002775e) cell_vitu2_itu_pane_t1

0x1f1a,	// (0x000277bc) cell_vitu2_itu_pane_t2_ParamLimits

0x1f1a,	// (0x000277bc) cell_vitu2_itu_pane_t2

0x0002,

0xf8b3,	// (0x00035155) cell_vitu2_itu_pane_t_ParamLimits

0xf8b3,	// (0x00035155) cell_vitu2_itu_pane_t

0xb3eb,	// (0x00030c8d) bg_button_pane_cp011

0x2006,	// (0x000278a8) cell_vitu2_function_pane_g1

0xb3f9,	// (0x00030c9b) main_myfav_hc_pane

0x1999,	// (0x0002723b) popup_image3_note_pane_ParamLimits

0x1999,	// (0x0002723b) popup_image3_note_pane

0x19b5,	// (0x00027257) popup_image3_tool_bar_pane_ParamLimits

0x19b5,	// (0x00027257) popup_image3_tool_bar_pane

0x1fa8,	// (0x0002784a) cell_vitu2_itu_pane_t3_ParamLimits

0x1fa8,	// (0x0002784a) cell_vitu2_itu_pane_t3

0x2244,	// (0x00027ae6) bg_popup_trans_pane

0xd1a2,	// (0x00032a44) grid_image3_tool_bar_pane

0xd1ac,	// (0x00032a4e) bg_popup_trans_pane_g1

0x3bbd,	// (0x0002945f) bg_popup_trans_pane_g2

0xd1b4,	// (0x00032a56) bg_popup_trans_pane_g3

0xd1bc,	// (0x00032a5e) bg_popup_trans_pane_g4

0xd1c4,	// (0x00032a66) bg_popup_trans_pane_g5

0xd1cc,	// (0x00032a6e) bg_popup_trans_pane_g6

0xd1d4,	// (0x00032a76) bg_popup_trans_pane_g7

0xd1dc,	// (0x00032a7e) bg_popup_trans_pane_g8

0x3b9d,	// (0x0002943f) bg_popup_trans_pane_g9

0x0008,

0xf8ba,	// (0x0003515c) bg_popup_trans_pane_g

0xd1e4,	// (0x00032a86) cell_image3_tool_bar_pane_ParamLimits

0xd1e4,	// (0x00032a86) cell_image3_tool_bar_pane

0x34e7,	// (0x00028d89) cell_image3_tool_bar_pane_g1

0x2244,	// (0x00027ae6) bg_popup_trans_pane_cp1

0xd1fa,	// (0x00032a9c) popup_image3_note_pane_t1

0xd208,	// (0x00032aaa) popup_image3_note_pane_t2

0xd216,	// (0x00032ab8) popup_image3_note_pane_t3

0x0002,

0xf8cd,	// (0x0003516f) popup_image3_note_pane_t

0xd226,	// (0x00032ac8) popup_image3_note_pane_t3_copy1

0x7dbe,	// (0x0002d660) bg_myfav_hc_instruction_pane_ParamLimits

0x7dbe,	// (0x0002d660) bg_myfav_hc_instruction_pane

0x7dd6,	// (0x0002d678) cell_myfav_contact_pane_ParamLimits

0x7dd6,	// (0x0002d678) cell_myfav_contact_pane

0x7df2,	// (0x0002d694) cell_myfav_contact_pane_cp1_ParamLimits

0x7df2,	// (0x0002d694) cell_myfav_contact_pane_cp1

0x7e0a,	// (0x0002d6ac) cell_myfav_contact_pane_cp2_ParamLimits

0x7e0a,	// (0x0002d6ac) cell_myfav_contact_pane_cp2

0x7e22,	// (0x0002d6c4) cell_myfav_contact_pane_cp3_ParamLimits

0x7e22,	// (0x0002d6c4) cell_myfav_contact_pane_cp3

0x7e39,	// (0x0002d6db) cell_myfav_contact_pane_cp4_ParamLimits

0x7e39,	// (0x0002d6db) cell_myfav_contact_pane_cp4

0x7e51,	// (0x0002d6f3) cell_myfav_contact_pane_cp5_ParamLimits

0x7e51,	// (0x0002d6f3) cell_myfav_contact_pane_cp5

0x7e65,	// (0x0002d707) cell_myfav_contact_pane_cp6_ParamLimits

0x7e65,	// (0x0002d707) cell_myfav_contact_pane_cp6

0x7e7b,	// (0x0002d71d) cell_myfav_contact_pane_cp7_ParamLimits

0x7e7b,	// (0x0002d71d) cell_myfav_contact_pane_cp7

0xd234,	// (0x00032ad6) listscroll_gen_pane_cp05

0x7e93,	// (0x0002d735) main_myfav_hc_pane_g1_ParamLimits

0x7e93,	// (0x0002d735) main_myfav_hc_pane_g1

0x7ead,	// (0x0002d74f) main_myfav_hc_pane_g2_ParamLimits

0x7ead,	// (0x0002d74f) main_myfav_hc_pane_g2

0x0002,

0xf8d4,	// (0x00035176) main_myfav_hc_pane_g_ParamLimits

0xf8d4,	// (0x00035176) main_myfav_hc_pane_g

0x7ee1,	// (0x0002d783) main_myfav_hc_pane_t1_ParamLimits

0x7ee1,	// (0x0002d783) main_myfav_hc_pane_t1

0xd23d,	// (0x00032adf) main_myfav_hc_pane_t2_ParamLimits

0xd23d,	// (0x00032adf) main_myfav_hc_pane_t2

0xd24f,	// (0x00032af1) main_myfav_hc_pane_t3_ParamLimits

0xd24f,	// (0x00032af1) main_myfav_hc_pane_t3

0x7ef8,	// (0x0002d79a) main_myfav_hc_pane_t4_ParamLimits

0x7ef8,	// (0x0002d79a) main_myfav_hc_pane_t4

0x0004,

0xf8db,	// (0x0003517d) main_myfav_hc_pane_t_ParamLimits

0xf8db,	// (0x0003517d) main_myfav_hc_pane_t

0x34e7,	// (0x00028d89) bg_myfav_hc_instruction_pane_g1

0xd261,	// (0x00032b03) cell_myfav_contact_pane_g1_ParamLimits

0xd261,	// (0x00032b03) cell_myfav_contact_pane_g1

0xd261,	// (0x00032b03) cell_myfav_contact_pane_g2_ParamLimits

0xd261,	// (0x00032b03) cell_myfav_contact_pane_g2

0xd26d,	// (0x00032b0f) cell_myfav_contact_pane_g3_ParamLimits

0xd26d,	// (0x00032b0f) cell_myfav_contact_pane_g3

0x29f1,	// (0x00028293) cell_myfav_contact_pane_g4_ParamLimits

0x29f1,	// (0x00028293) cell_myfav_contact_pane_g4

0xd27a,	// (0x00032b1c) cell_myfav_contact_pane_g5_ParamLimits

0xd27a,	// (0x00032b1c) cell_myfav_contact_pane_g5

0x0004,

0xf8e6,	// (0x00035188) cell_myfav_contact_pane_g_ParamLimits

0xf8e6,	// (0x00035188) cell_myfav_contact_pane_g

0x7ec7,	// (0x0002d769) main_myfav_hc_pane_g3_ParamLimits

0x7ec7,	// (0x0002d769) main_myfav_hc_pane_g3

0x0e90,	// (0x00026732) popup_adpt_find_window

0x7f22,	// (0x0002d7c4) afind_page_pane_ParamLimits

0x7f22,	// (0x0002d7c4) afind_page_pane

0x7f37,	// (0x0002d7d9) aid_size_cell_afind_ParamLimits

0x7f37,	// (0x0002d7d9) aid_size_cell_afind

0x7f55,	// (0x0002d7f7) bg_popup_sub_pane_cp09_ParamLimits

0x7f55,	// (0x0002d7f7) bg_popup_sub_pane_cp09

0x7f62,	// (0x0002d804) find_pane_cp01_ParamLimits

0x7f62,	// (0x0002d804) find_pane_cp01

0xd286,	// (0x00032b28) grid_afind_control_pane_ParamLimits

0xd286,	// (0x00032b28) grid_afind_control_pane

0x7f6f,	// (0x0002d811) grid_afind_pane_ParamLimits

0x7f6f,	// (0x0002d811) grid_afind_pane

0x7f91,	// (0x0002d833) cell_afind_pane_ParamLimits

0x7f91,	// (0x0002d833) cell_afind_pane

0x34e7,	// (0x00028d89) afind_page_pane_g1

0x7ffe,	// (0x0002d8a0) afind_page_pane_g2

0x8007,	// (0x0002d8a9) afind_page_pane_g3

0x0002,

0xf8f1,	// (0x00035193) afind_page_pane_g

0x8010,	// (0x0002d8b2) afind_page_pane_t1

0xd29a,	// (0x00032b3c) cell_afind_grid_control_pane_ParamLimits

0xd29a,	// (0x00032b3c) cell_afind_grid_control_pane

0xcf52,	// (0x000327f4) bg_button_pane_cp69_ParamLimits

0xcf52,	// (0x000327f4) bg_button_pane_cp69

0x8030,	// (0x0002d8d2) cell_afind_pane_g1_ParamLimits

0x8030,	// (0x0002d8d2) cell_afind_pane_g1

0x803d,	// (0x0002d8df) cell_afind_pane_t1_ParamLimits

0x803d,	// (0x0002d8df) cell_afind_pane_t1

0x3553,	// (0x00028df5) bg_button_pane_cp72

0xd2a9,	// (0x00032b4b) cell_afind_grid_control_pane_g1

0x6000,	// (0x0002b8a2) aid_image_placing_area_ParamLimits

0x6000,	// (0x0002b8a2) aid_image_placing_area

0x29e3,	// (0x00028285) field_vitu_entry_pane_g1_ParamLimits

0x29e3,	// (0x00028285) field_vitu_entry_pane_g1

0x29e3,	// (0x00028285) field_vitu_entry_pane_g2_ParamLimits

0x29e3,	// (0x00028285) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x00034aa3) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x00034aa3) field_vitu_entry_pane_g

0xca6d,	// (0x0003230f) cell_vitu_itu_pane_g1_ParamLimits

0xca50,	// (0x000322f2) cell_vitu_itu_pane_t3_ParamLimits

0xca50,	// (0x000322f2) cell_vitu_itu_pane_t3

0xcefb,	// (0x0003279d) mp4_progress_pane_t1_ParamLimits

0xcf14,	// (0x000327b6) mp4_progress_pane_t2_ParamLimits

0xf837,	// (0x000350d9) mp4_progress_pane_t_ParamLimits

0xcf2d,	// (0x000327cf) mup_progress_pane_cp04_ParamLimits

0x7f0c,	// (0x0002d7ae) main_myfav_hc_pane_t5_ParamLimits

0x7f0c,	// (0x0002d7ae) main_myfav_hc_pane_t5

0xb39c,	// (0x00030c3e) aid_zoom_text_primary

0x0e90,	// (0x00026732) popup_adpt_find_window_ParamLimits

0xb3eb,	// (0x00030c8d) main_cam_set_pane

0x1b21,	// (0x000273c3) cam4_zoom_pane_ParamLimits

0x1b21,	// (0x000273c3) cam4_zoom_pane

0x804f,	// (0x0002d8f1) main_cam_set_pane_g1_ParamLimits

0x804f,	// (0x0002d8f1) main_cam_set_pane_g1

0x805d,	// (0x0002d8ff) main_cam_set_pane_g2_ParamLimits

0x805d,	// (0x0002d8ff) main_cam_set_pane_g2

0x0001,

0xf8f8,	// (0x0003519a) main_cam_set_pane_g_ParamLimits

0xf8f8,	// (0x0003519a) main_cam_set_pane_g

0x807e,	// (0x0002d920) main_cam_set_pane_t1_ParamLimits

0x807e,	// (0x0002d920) main_cam_set_pane_t1

0x8099,	// (0x0002d93b) main_cset_listscroll_pane_ParamLimits

0x8099,	// (0x0002d93b) main_cset_listscroll_pane

0x80c1,	// (0x0002d963) main_cset_slider_pane_ParamLimits

0x80c1,	// (0x0002d963) main_cset_slider_pane

0xd2ba,	// (0x00032b5c) main_cset_list_pane_ParamLimits

0xd2ba,	// (0x00032b5c) main_cset_list_pane

0xd2ca,	// (0x00032b6c) scroll_pane_cp028

0x80eb,	// (0x0002d98d) aid_area_touch_slider

0x8107,	// (0x0002d9a9) cset_slider_pane

0x812a,	// (0x0002d9cc) main_cset_slider_pane_g1

0x813f,	// (0x0002d9e1) main_cset_slider_pane_g2

0x0011,

0xf8fd,	// (0x0003519f) main_cset_slider_pane_g

0xd303,	// (0x00032ba5) main_cset_slider_pane_t1

0x8201,	// (0x0002daa3) main_cset_slider_pane_t2

0x821b,	// (0x0002dabd) main_cset_slider_pane_t3

0x8235,	// (0x0002dad7) main_cset_slider_pane_t4

0x824f,	// (0x0002daf1) main_cset_slider_pane_t5

0x826d,	// (0x0002db0f) main_cset_slider_pane_t6

0x8284,	// (0x0002db26) main_cset_slider_pane_t7

0x000e,

0xf922,	// (0x000351c4) main_cset_slider_pane_t

0x8390,	// (0x0002dc32) cset_list_set_pane_ParamLimits

0x8390,	// (0x0002dc32) cset_list_set_pane

0xd39d,	// (0x00032c3f) aid_position_infowindow_above

0xd3a5,	// (0x00032c47) aid_position_infowindow_below

0x83a4,	// (0x0002dc46) cset_list_set_pane_g1_ParamLimits

0x83a4,	// (0x0002dc46) cset_list_set_pane_g1

0x83b0,	// (0x0002dc52) cset_list_set_pane_g3_ParamLimits

0x83b0,	// (0x0002dc52) cset_list_set_pane_g3

0x0001,

0xf941,	// (0x000351e3) cset_list_set_pane_g_ParamLimits

0xf941,	// (0x000351e3) cset_list_set_pane_g

0x83bf,	// (0x0002dc61) cset_list_set_pane_t1_ParamLimits

0x83bf,	// (0x0002dc61) cset_list_set_pane_t1

0x297c,	// (0x0002821e) list_highlight_pane_cp021_ParamLimits

0x297c,	// (0x0002821e) list_highlight_pane_cp021

0x5790,	// (0x0002b032) cset_slider_pane_g1

0x57a2,	// (0x0002b044) cset_slider_pane_g2

0x5799,	// (0x0002b03b) cset_slider_pane_g3

0x0002,

0xf946,	// (0x000351e8) cset_slider_pane_g

0x4e3b,	// (0x0002a6dd) aid_area_touch_cam4_zoom

0x201a,	// (0x000278bc) cam4_zoom_cont_pane

0x2022,	// (0x000278c4) cam4_zoom_pane_g1

0x202a,	// (0x000278cc) cam4_zoom_pane_g2

0x2032,	// (0x000278d4) cam4_zoom_pane_g3

0x0002,

0xf94d,	// (0x000351ef) cam4_zoom_pane_g

0xd3ad,	// (0x00032c4f) cam4_zoom_cont_pane_g1

0xd3b6,	// (0x00032c58) cam4_zoom_cont_pane_g2

0xd3bf,	// (0x00032c61) cam4_zoom_cont_pane_g3

0x0002,

0xf954,	// (0x000351f6) cam4_zoom_cont_pane_g

0x19ef,	// (0x00027291) call4_image_pane_ParamLimits

0x19ef,	// (0x00027291) call4_image_pane

0x7cee,	// (0x0002d590) call4_windows_conf_pane_ParamLimits

0x7d35,	// (0x0002d5d7) popup_call4_audio_in_window_ParamLimits

0x7d35,	// (0x0002d5d7) popup_call4_audio_in_window

0x2244,	// (0x00027ae6) bg_popup_call2_act_pane_cp02

0xcfc4,	// (0x00032866) call4_list_conf_pane

0x34e7,	// (0x00028d89) call4_image_pane_g1

0x34e7,	// (0x00028d89) call4_image_pane_g2

0x0001,

0xf3d8,	// (0x00034c7a) call4_image_pane_g

0xd3c8,	// (0x00032c6a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3c8,	// (0x00032c6a) list_single_graphic_popup_conf4_pane

0x2244,	// (0x00027ae6) list_highlight_pane_cp022

0xd3dd,	// (0x00032c7f) list_single_graphic_popup_conf4_pane_g1

0x4e94,	// (0x0002a736) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf95b,	// (0x000351fd) list_single_graphic_popup_conf4_pane_g

0xd3e5,	// (0x00032c87) list_single_graphic_popup_conf4_pane_t1

0x370f,	// (0x00028fb1) popup_vtel_slider_window_ParamLimits

0x370f,	// (0x00028fb1) popup_vtel_slider_window

0xcf40,	// (0x000327e2) dialer2_ne_pane_t2_ParamLimits

0xcf40,	// (0x000327e2) dialer2_ne_pane_t2

0x0001,

0xf83c,	// (0x000350de) dialer2_ne_pane_t_ParamLimits

0xf83c,	// (0x000350de) dialer2_ne_pane_t

0xc2b6,	// (0x00031b58) bg_popup_sub_pane_cp010_ParamLimits

0xc2b6,	// (0x00031b58) bg_popup_sub_pane_cp010

0x83d4,	// (0x0002dc76) popup_vtel_slider_window_g1_ParamLimits

0x83d4,	// (0x0002dc76) popup_vtel_slider_window_g1

0x83e7,	// (0x0002dc89) popup_vtel_slider_window_g2_ParamLimits

0x83e7,	// (0x0002dc89) popup_vtel_slider_window_g2

0x0003,

0xf960,	// (0x00035202) popup_vtel_slider_window_g_ParamLimits

0xf960,	// (0x00035202) popup_vtel_slider_window_g

0x843d,	// (0x0002dcdf) vtel_slider_pane_ParamLimits

0x843d,	// (0x0002dcdf) vtel_slider_pane

0x845f,	// (0x0002dd01) vtel_slider_pane_g1_ParamLimits

0x845f,	// (0x0002dd01) vtel_slider_pane_g1

0x8473,	// (0x0002dd15) vtel_slider_pane_g2_ParamLimits

0x8473,	// (0x0002dd15) vtel_slider_pane_g2

0x848b,	// (0x0002dd2d) vtel_slider_pane_g3_ParamLimits

0x848b,	// (0x0002dd2d) vtel_slider_pane_g3

0x845f,	// (0x0002dd01) vtel_slider_pane_g4_ParamLimits

0x845f,	// (0x0002dd01) vtel_slider_pane_g4

0x84a1,	// (0x0002dd43) vtel_slider_pane_g5_ParamLimits

0x84a1,	// (0x0002dd43) vtel_slider_pane_g5

0x0004,

0xf969,	// (0x0003520b) vtel_slider_pane_g_ParamLimits

0xf969,	// (0x0003520b) vtel_slider_pane_g

0xb3eb,	// (0x00030c8d) main_gallery2_pane

0x1ce1,	// (0x00027583) aid_size_row_itut2_dropdow_list_ParamLimits

0x1ce1,	// (0x00027583) aid_size_row_itut2_dropdow_list

0x1d68,	// (0x0002760a) grid_vitu2_function_top_pane_ParamLimits

0x1d68,	// (0x0002760a) grid_vitu2_function_top_pane

0x1dc4,	// (0x00027666) popup_vitu2_dropdown_list_window_ParamLimits

0x1dc4,	// (0x00027666) popup_vitu2_dropdown_list_window

0x1dea,	// (0x0002768c) popup_vitu2_match_list_window

0x203a,	// (0x000278dc) cell_vitu2_function_top_pane_ParamLimits

0x203a,	// (0x000278dc) cell_vitu2_function_top_pane

0x2054,	// (0x000278f6) cell_vitu2_function_top_pane_cp01_ParamLimits

0x2054,	// (0x000278f6) cell_vitu2_function_top_pane_cp01

0x2070,	// (0x00027912) cell_vitu2_function_top_wide_pane_ParamLimits

0x2070,	// (0x00027912) cell_vitu2_function_top_wide_pane

0xb3eb,	// (0x00030c8d) bg_button_pane_cp012

0x208e,	// (0x00027930) cell_vitu2_function_top_pane_g1

0xd3fb,	// (0x00032c9d) bg_button_pane_cp013_ParamLimits

0xd3fb,	// (0x00032c9d) bg_button_pane_cp013

0x84b7,	// (0x0002dd59) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x84b7,	// (0x0002dd59) cell_vitu2_function_top_wide_pane_g1

0xb3eb,	// (0x00030c8d) bg_popup_sub_pane_cp20

0x20a2,	// (0x00027944) list_vitu2_match_list_pane

0xd1ac,	// (0x00032a4e) bg_popup_sub_pane_cp20_g1

0xd1b4,	// (0x00032a56) bg_popup_sub_pane_cp20_g2

0x3bbd,	// (0x0002945f) bg_popup_sub_pane_cp20_g3

0xd1bc,	// (0x00032a5e) bg_popup_sub_pane_cp20_g4

0x3b9d,	// (0x0002943f) bg_popup_sub_pane_cp20_g5

0xd417,	// (0x00032cb9) bg_popup_sub_pane_cp20_g6

0xd1cc,	// (0x00032a6e) bg_popup_sub_pane_cp20_g7

0xd1d4,	// (0x00032a76) bg_popup_sub_pane_cp20_g8

0xd1dc,	// (0x00032a7e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf974,	// (0x00035216) bg_popup_sub_pane_cp20_g

0xd41f,	// (0x00032cc1) list_vitu2_match_list_item_pane_ParamLimits

0xd41f,	// (0x00032cc1) list_vitu2_match_list_item_pane

0xd431,	// (0x00032cd3) list_vitu2_match_list_item_pane_t1

0xb3f9,	// (0x00030c9b) bg_popup_sub_pane_cp21

0x32f6,	// (0x00028b98) grid_vitu2_dropdown_list_pane

0x20ba,	// (0x0002795c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x20ba,	// (0x0002795c) cell_vitu2_dropdown_list_char_pane

0x20dd,	// (0x0002797f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x20dd,	// (0x0002797f) cell_vitu2_dropdown_list_ctrl_pane

0xd43f,	// (0x00032ce1) cell_vitu2_dropdown_list_char_pane_g1

0xd448,	// (0x00032cea) cell_vitu2_dropdown_list_char_pane_g2

0xd451,	// (0x00032cf3) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf987,	// (0x00035229) cell_vitu2_dropdown_list_char_pane_g

0x2109,	// (0x000279ab) cell_vitu2_dropdown_list_char_pane_t1

0x84cf,	// (0x0002dd71) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x84cf,	// (0x0002dd71) cell_vitu2_dropdown_list_ctrl_pane_g1

0x84df,	// (0x0002dd81) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x84df,	// (0x0002dd81) cell_vitu2_dropdown_list_ctrl_pane_g2

0x84f0,	// (0x0002dd92) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x84f0,	// (0x0002dd92) cell_vitu2_dropdown_list_ctrl_pane_g3

0x2117,	// (0x000279b9) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x2117,	// (0x000279b9) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd040,	// (0x000328e2) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd040,	// (0x000328e2) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf98e,	// (0x00035230) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf98e,	// (0x00035230) cell_vitu2_dropdown_list_ctrl_pane_g

0x8500,	// (0x0002dda2) aid_size_cell_gallery2_ParamLimits

0x8500,	// (0x0002dda2) aid_size_cell_gallery2

0x851e,	// (0x0002ddc0) grid_gallery2_pane_ParamLimits

0x851e,	// (0x0002ddc0) grid_gallery2_pane

0x8538,	// (0x0002ddda) scroll_pane_cp029_ParamLimits

0x8538,	// (0x0002ddda) scroll_pane_cp029

0x8549,	// (0x0002ddeb) cell_gallery2_pane_ParamLimits

0x8549,	// (0x0002ddeb) cell_gallery2_pane

0xd45a,	// (0x00032cfc) cell_gallery2_pane_g2

0x85ad,	// (0x0002de4f) cell_gallery2_pane_g3

0xd462,	// (0x00032d04) cell_gallery2_pane_g4

0xd46a,	// (0x00032d0c) cell_gallery2_pane_g5

0x32f6,	// (0x00028b98) grid_highlight_pane_cp10

0x1dea,	// (0x0002768c) popup_vitu2_match_list_window_ParamLimits

0x1e01,	// (0x000276a3) popup_vitu2_query_window_ParamLimits

0x1e01,	// (0x000276a3) popup_vitu2_query_window

0xb3f9,	// (0x00030c9b) bg_vitu2_candi_button_pane

0xd43f,	// (0x00032ce1) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd448,	// (0x00032cea) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd451,	// (0x00032cf3) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x85b5,	// (0x0002de57) bg_button_pane_cp015

0x85c9,	// (0x0002de6b) bg_button_pane_cp016

0x85dc,	// (0x0002de7e) bg_button_pane_cp017

0x5511,	// (0x0002adb3) bg_popup_sub_pane_cp22

0xd472,	// (0x00032d14) popup_vitu2_query_window_g1

0x8621,	// (0x0002dec3) popup_vitu2_query_window_g2

0x0002,

0xf999,	// (0x0003523b) popup_vitu2_query_window_g

0x8640,	// (0x0002dee2) popup_vitu2_query_window_t1_ParamLimits

0x8640,	// (0x0002dee2) popup_vitu2_query_window_t1

0x8675,	// (0x0002df17) popup_vitu2_query_window_t2_ParamLimits

0x8675,	// (0x0002df17) popup_vitu2_query_window_t2

0x8687,	// (0x0002df29) popup_vitu2_query_window_t3_ParamLimits

0x8687,	// (0x0002df29) popup_vitu2_query_window_t3

0x86af,	// (0x0002df51) popup_vitu2_query_window_t4_ParamLimits

0x86af,	// (0x0002df51) popup_vitu2_query_window_t4

0x86d0,	// (0x0002df72) popup_vitu2_query_window_t5_ParamLimits

0x86d0,	// (0x0002df72) popup_vitu2_query_window_t5

0x0006,

0xf9a0,	// (0x00035242) popup_vitu2_query_window_t_ParamLimits

0xf9a0,	// (0x00035242) popup_vitu2_query_window_t

0xd2b2,	// (0x00032b54) main_cset_text_pane

0x80eb,	// (0x0002d98d) aid_area_touch_slider_ParamLimits

0x8107,	// (0x0002d9a9) cset_slider_pane_ParamLimits

0x812a,	// (0x0002d9cc) main_cset_slider_pane_g1_ParamLimits

0x813f,	// (0x0002d9e1) main_cset_slider_pane_g2_ParamLimits

0xd2d3,	// (0x00032b75) main_cset_slider_pane_g3_ParamLimits

0xd2d3,	// (0x00032b75) main_cset_slider_pane_g3

0x8154,	// (0x0002d9f6) main_cset_slider_pane_g4_ParamLimits

0x8154,	// (0x0002d9f6) main_cset_slider_pane_g4

0x8163,	// (0x0002da05) main_cset_slider_pane_g5_ParamLimits

0x8163,	// (0x0002da05) main_cset_slider_pane_g5

0x8171,	// (0x0002da13) main_cset_slider_pane_g6_ParamLimits

0x8171,	// (0x0002da13) main_cset_slider_pane_g6

0xf8fd,	// (0x0003519f) main_cset_slider_pane_g_ParamLimits

0xd303,	// (0x00032ba5) main_cset_slider_pane_t1_ParamLimits

0x8201,	// (0x0002daa3) main_cset_slider_pane_t2_ParamLimits

0x821b,	// (0x0002dabd) main_cset_slider_pane_t3_ParamLimits

0x8235,	// (0x0002dad7) main_cset_slider_pane_t4_ParamLimits

0x824f,	// (0x0002daf1) main_cset_slider_pane_t5_ParamLimits

0x826d,	// (0x0002db0f) main_cset_slider_pane_t6_ParamLimits

0x8284,	// (0x0002db26) main_cset_slider_pane_t7_ParamLimits

0x82b2,	// (0x0002db54) main_cset_slider_pane_t8_ParamLimits

0x82b2,	// (0x0002db54) main_cset_slider_pane_t8

0x82da,	// (0x0002db7c) main_cset_slider_pane_t9_ParamLimits

0x82da,	// (0x0002db7c) main_cset_slider_pane_t9

0x8302,	// (0x0002dba4) main_cset_slider_pane_t10_ParamLimits

0x8302,	// (0x0002dba4) main_cset_slider_pane_t10

0x832a,	// (0x0002dbcc) main_cset_slider_pane_t11_ParamLimits

0x832a,	// (0x0002dbcc) main_cset_slider_pane_t11

0x8354,	// (0x0002dbf6) main_cset_slider_pane_t12_ParamLimits

0x8354,	// (0x0002dbf6) main_cset_slider_pane_t12

0x8371,	// (0x0002dc13) main_cset_slider_pane_t13_ParamLimits

0x8371,	// (0x0002dc13) main_cset_slider_pane_t13

0xf922,	// (0x000351c4) main_cset_slider_pane_t_ParamLimits

0x2244,	// (0x00027ae6) bg_popup_sub_pane_cp011

0xd47e,	// (0x00032d20) main_cset_text_pane_g1

0xd486,	// (0x00032d28) main_cset_text_pane_t1

0xd494,	// (0x00032d36) main_cset_text_pane_t2

0xd4a2,	// (0x00032d44) main_cset_text_pane_t3

0xd4b0,	// (0x00032d52) main_cset_text_pane_t4

0xd4be,	// (0x00032d60) main_cset_text_pane_t5

0xd4cc,	// (0x00032d6e) main_cset_text_pane_t6

0xd4da,	// (0x00032d7c) main_cset_text_pane_t7

0x0006,

0xf9af,	// (0x00035251) main_cset_text_pane_t

0xb3f9,	// (0x00030c9b) main_cam4_burst_pane

0xb3f9,	// (0x00030c9b) main_cam5_pane

0x801e,	// (0x0002d8c0) bg_button_pane_cp019

0x8027,	// (0x0002d8c9) bg_button_pane_cp020

0xd2df,	// (0x00032b81) main_cset_slider_pane_g7_ParamLimits

0xd2df,	// (0x00032b81) main_cset_slider_pane_g7

0xd2eb,	// (0x00032b8d) main_cset_slider_pane_g8_ParamLimits

0xd2eb,	// (0x00032b8d) main_cset_slider_pane_g8

0x8185,	// (0x0002da27) main_cset_slider_pane_g9_ParamLimits

0x8185,	// (0x0002da27) main_cset_slider_pane_g9

0x8191,	// (0x0002da33) main_cset_slider_pane_g10_ParamLimits

0x8191,	// (0x0002da33) main_cset_slider_pane_g10

0x819d,	// (0x0002da3f) main_cset_slider_pane_g11_ParamLimits

0x819d,	// (0x0002da3f) main_cset_slider_pane_g11

0x81a9,	// (0x0002da4b) main_cset_slider_pane_g12_ParamLimits

0x81a9,	// (0x0002da4b) main_cset_slider_pane_g12

0x81b5,	// (0x0002da57) main_cset_slider_pane_g13_ParamLimits

0x81b5,	// (0x0002da57) main_cset_slider_pane_g13

0x81c1,	// (0x0002da63) main_cset_slider_pane_g14_ParamLimits

0x81c1,	// (0x0002da63) main_cset_slider_pane_g14

0x81cd,	// (0x0002da6f) main_cset_slider_pane_g15_ParamLimits

0x81cd,	// (0x0002da6f) main_cset_slider_pane_g15

0xd32b,	// (0x00032bcd) main_cset_slider_pane_t14_ParamLimits

0xd32b,	// (0x00032bcd) main_cset_slider_pane_t14

0xd364,	// (0x00032c06) main_cset_slider_pane_t15_ParamLimits

0xd364,	// (0x00032c06) main_cset_slider_pane_t15

0x8747,	// (0x0002dfe9) aid_cam4_burst_size_cell_ParamLimits

0x8747,	// (0x0002dfe9) aid_cam4_burst_size_cell

0x8767,	// (0x0002e009) grid_cam4_burst_pane_ParamLimits

0x8767,	// (0x0002e009) grid_cam4_burst_pane

0x87a1,	// (0x0002e043) linegrid_cam4_burst_pane_ParamLimits

0x87a1,	// (0x0002e043) linegrid_cam4_burst_pane

0xd4e8,	// (0x00032d8a) scroll_pane_cp30_ParamLimits

0xd4e8,	// (0x00032d8a) scroll_pane_cp30

0x87c3,	// (0x0002e065) cell_cam4_burst_pane_ParamLimits

0x87c3,	// (0x0002e065) cell_cam4_burst_pane

0xd4f4,	// (0x00032d96) linegrid_cam4_burst_pane_g1_ParamLimits

0xd4f4,	// (0x00032d96) linegrid_cam4_burst_pane_g1

0x8818,	// (0x0002e0ba) linegrid_cam4_burst_pane_g2_ParamLimits

0x8818,	// (0x0002e0ba) linegrid_cam4_burst_pane_g2

0xd501,	// (0x00032da3) linegrid_cam4_burst_pane_g3_ParamLimits

0xd501,	// (0x00032da3) linegrid_cam4_burst_pane_g3

0x0002,

0xf9be,	// (0x00035260) linegrid_cam4_burst_pane_g_ParamLimits

0xf9be,	// (0x00035260) linegrid_cam4_burst_pane_g

0x8829,	// (0x0002e0cb) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8829,	// (0x0002e0cb) linegrid_cam4_burst_pane_g3_copy1

0xd50e,	// (0x00032db0) linegrid_cam4_burst_pane_g4_ParamLimits

0xd50e,	// (0x00032db0) linegrid_cam4_burst_pane_g4

0x8847,	// (0x0002e0e9) linegrid_cam4_burst_pane_g5_ParamLimits

0x8847,	// (0x0002e0e9) linegrid_cam4_burst_pane_g5

0x8858,	// (0x0002e0fa) linegrid_cam4_burst_pane_g6_ParamLimits

0x8858,	// (0x0002e0fa) linegrid_cam4_burst_pane_g6

0xd51b,	// (0x00032dbd) linegrid_cam4_burst_pane_g7_ParamLimits

0xd51b,	// (0x00032dbd) linegrid_cam4_burst_pane_g7

0x886f,	// (0x0002e111) cell_cam4_burst_pane_g1

0xd534,	// (0x00032dd6) main_cam5_pane_t1_ParamLimits

0xd534,	// (0x00032dd6) main_cam5_pane_t1

0xd546,	// (0x00032de8) main_cam5_pane_t2_ParamLimits

0xd546,	// (0x00032de8) main_cam5_pane_t2

0xd558,	// (0x00032dfa) main_cam5_pane_t3_ParamLimits

0xd558,	// (0x00032dfa) main_cam5_pane_t3

0xd56a,	// (0x00032e0c) main_cam5_pane_t4_ParamLimits

0xd56a,	// (0x00032e0c) main_cam5_pane_t4

0xd582,	// (0x00032e24) main_cam5_pane_t5_ParamLimits

0xd582,	// (0x00032e24) main_cam5_pane_t5

0xd596,	// (0x00032e38) main_cam5_pane_t6_ParamLimits

0xd596,	// (0x00032e38) main_cam5_pane_t6

0xd5aa,	// (0x00032e4c) main_cam5_pane_t7_ParamLimits

0xd5aa,	// (0x00032e4c) main_cam5_pane_t7

0xd5bc,	// (0x00032e5e) main_cam5_pane_t8_ParamLimits

0xd5bc,	// (0x00032e5e) main_cam5_pane_t8

0xd5da,	// (0x00032e7c) main_cam5_pane_t9_ParamLimits

0xd5da,	// (0x00032e7c) main_cam5_pane_t9

0xd5ec,	// (0x00032e8e) main_cam5_pane_t10_ParamLimits

0xd5ec,	// (0x00032e8e) main_cam5_pane_t10

0xd5fe,	// (0x00032ea0) main_cam5_pane_t11_ParamLimits

0xd5fe,	// (0x00032ea0) main_cam5_pane_t11

0xd612,	// (0x00032eb4) main_cam5_pane_t12_ParamLimits

0xd612,	// (0x00032eb4) main_cam5_pane_t12

0xd629,	// (0x00032ecb) main_cam5_pane_t13_ParamLimits

0xd629,	// (0x00032ecb) main_cam5_pane_t13

0x000c,

0xf9ca,	// (0x0003526c) main_cam5_pane_t_ParamLimits

0xf9ca,	// (0x0003526c) main_cam5_pane_t

0x0f11,	// (0x000267b3) popup_scut_keymap_window_ParamLimits

0x0f11,	// (0x000267b3) popup_scut_keymap_window

0x8882,	// (0x0002e124) aid_size_cell_brow_shortcut

0x32f6,	// (0x00028b98) bg_popup_window_pane_cp010

0x888e,	// (0x0002e130) grid_scut_pane

0x889a,	// (0x0002e13c) cell_scut_pane_ParamLimits

0x889a,	// (0x0002e13c) cell_scut_pane

0x88b3,	// (0x0002e155) cell_scut_pane_g1

0xd64c,	// (0x00032eee) cell_scut_pane_t1

0xd65b,	// (0x00032efd) cell_scut_pane_t2

0x88bc,	// (0x0002e15e) cell_scut_pane_t3

0x0002,

0xf9e5,	// (0x00035287) cell_scut_pane_t

0x7210,	// (0x0002cab2) main_mup3_pane_g8_ParamLimits

0x7210,	// (0x0002cab2) main_mup3_pane_g8

0x1cfa,	// (0x0002759c) area_vitu2_query_pane_ParamLimits

0x1cfa,	// (0x0002759c) area_vitu2_query_pane

0x85ef,	// (0x0002de91) input_focus_pane_cp08

0xd66a,	// (0x00032f0c) area_vitu2_query_pane_g1

0x88ca,	// (0x0002e16c) area_vitu2_query_pane_g2

0x0001,

0xf9ec,	// (0x0003528e) area_vitu2_query_pane_g

0x88df,	// (0x0002e181) area_vitu2_query_pane_t1_ParamLimits

0x88df,	// (0x0002e181) area_vitu2_query_pane_t1

0x88f3,	// (0x0002e195) area_vitu2_query_pane_t2_ParamLimits

0x88f3,	// (0x0002e195) area_vitu2_query_pane_t2

0x8907,	// (0x0002e1a9) area_vitu2_query_pane_t3_ParamLimits

0x8907,	// (0x0002e1a9) area_vitu2_query_pane_t3

0xd676,	// (0x00032f18) area_vitu2_query_pane_t4_ParamLimits

0xd676,	// (0x00032f18) area_vitu2_query_pane_t4

0xd69e,	// (0x00032f40) area_vitu2_query_pane_t5_ParamLimits

0xd69e,	// (0x00032f40) area_vitu2_query_pane_t5

0xd6c6,	// (0x00032f68) area_vitu2_query_pane_t6_ParamLimits

0xd6c6,	// (0x00032f68) area_vitu2_query_pane_t6

0x0006,

0xf9f1,	// (0x00035293) area_vitu2_query_pane_t_ParamLimits

0xf9f1,	// (0x00035293) area_vitu2_query_pane_t

0x8933,	// (0x0002e1d5) bg_button_pane_cp018

0x8941,	// (0x0002e1e3) bg_button_pane_cp021

0x894d,	// (0x0002e1ef) bg_button_pane_cp022

0x8960,	// (0x0002e202) input_focus_pane_cp09

0x5219,	// (0x0002aabb) aid_size_touch_mv_arrow_left

0x5242,	// (0x0002aae4) aid_size_touch_mv_arrow_right

0x81e5,	// (0x0002da87) main_cset_slider_pane_g16_ParamLimits

0x81e5,	// (0x0002da87) main_cset_slider_pane_g16

0x81f3,	// (0x0002da95) main_cset_slider_pane_g17_ParamLimits

0x81f3,	// (0x0002da95) main_cset_slider_pane_g17

0x886f,	// (0x0002e111) cell_cam4_burst_pane_g1_ParamLimits

0x2244,	// (0x00027ae6) compa_mode_pane

0x83f7,	// (0x0002dc99) popup_vtel_slider_window_g3_ParamLimits

0x83f7,	// (0x0002dc99) popup_vtel_slider_window_g3

0x840e,	// (0x0002dcb0) popup_vtel_slider_window_g4_ParamLimits

0x840e,	// (0x0002dcb0) popup_vtel_slider_window_g4

0x8425,	// (0x0002dcc7) popup_vtel_slider_window_t1_ParamLimits

0x8425,	// (0x0002dcc7) popup_vtel_slider_window_t1

0xb3f9,	// (0x00030c9b) main_cl_pane

0xbfa3,	// (0x00031845) popup_imed_adjust2_window_ParamLimits

0x5511,	// (0x0002adb3) bg_tb_trans_pane_cp05_ParamLimits

0xc97b,	// (0x0003221d) popup_imed_adjust2_window_g1_ParamLimits

0xc98a,	// (0x0003222c) popup_imed_adjust2_window_g2_ParamLimits

0xc98a,	// (0x0003222c) popup_imed_adjust2_window_g2

0xc996,	// (0x00032238) popup_imed_adjust2_window_g3_ParamLimits

0xc996,	// (0x00032238) popup_imed_adjust2_window_g3

0x0002,

0xf767,	// (0x00035009) popup_imed_adjust2_window_g_ParamLimits

0xf767,	// (0x00035009) popup_imed_adjust2_window_g

0xc9a2,	// (0x00032244) popup_imed_adjust2_window_t1_ParamLimits

0xc9ba,	// (0x0003225c) slider_imed_adjust_pane_ParamLimits

0xc9ce,	// (0x00032270) slider_imed_adjust_pane_g1_ParamLimits

0xc9de,	// (0x00032280) slider_imed_adjust_pane_g2_ParamLimits

0xc9ee,	// (0x00032290) slider_imed_adjust_pane_g3_ParamLimits

0xc9ff,	// (0x000322a1) slider_imed_adjust_pane_g4_ParamLimits

0xf76e,	// (0x00035010) slider_imed_adjust_pane_g_ParamLimits

0x1ac1,	// (0x00027363) aid_touch_area_cam4_ParamLimits

0x1ac1,	// (0x00027363) aid_touch_area_cam4

0xd00e,	// (0x000328b0) battery_pane_cp01

0x1b94,	// (0x00027436) main_camera4_pane_g6_ParamLimits

0x1b94,	// (0x00027436) main_camera4_pane_g6

0x1bbe,	// (0x00027460) main_camera4_pane_t2_ParamLimits

0x1bbe,	// (0x00027460) main_camera4_pane_t2

0x0001,

0xf870,	// (0x00035112) main_camera4_pane_t_ParamLimits

0xf870,	// (0x00035112) main_camera4_pane_t

0x1bdf,	// (0x00027481) aid_touch_area_vid4_ParamLimits

0x1bdf,	// (0x00027481) aid_touch_area_vid4

0x1c36,	// (0x000274d8) main_video4_pane_g5_ParamLimits

0x1c36,	// (0x000274d8) main_video4_pane_g5

0x1c5c,	// (0x000274fe) vid4_progress_pane_ParamLimits

0x1c5c,	// (0x000274fe) vid4_progress_pane

0xd2f7,	// (0x00032b99) main_cset_slider_pane_g18_ParamLimits

0xd2f7,	// (0x00032b99) main_cset_slider_pane_g18

0xd528,	// (0x00032dca) cell_cam4_burst_pane_g2_ParamLimits

0xd528,	// (0x00032dca) cell_cam4_burst_pane_g2

0x0001,

0xf9c5,	// (0x00035267) cell_cam4_burst_pane_g_ParamLimits

0xf9c5,	// (0x00035267) cell_cam4_burst_pane_g

0x2b27,	// (0x000283c9) bg_cl_pane_ParamLimits

0x2b27,	// (0x000283c9) bg_cl_pane

0x8971,	// (0x0002e213) cl_header_pane_ParamLimits

0x8971,	// (0x0002e213) cl_header_pane

0x8985,	// (0x0002e227) cl_listscroll_pane_ParamLimits

0x8985,	// (0x0002e227) cl_listscroll_pane

0xd712,	// (0x00032fb4) bg_cl_pane_g1

0xd71a,	// (0x00032fbc) bg_cl_pane_g2

0xd722,	// (0x00032fc4) bg_cl_pane_g3

0xd72a,	// (0x00032fcc) bg_cl_pane_g4

0xd732,	// (0x00032fd4) bg_cl_pane_g5

0xd73a,	// (0x00032fdc) bg_cl_pane_g6

0xd742,	// (0x00032fe4) bg_cl_pane_g7

0xd74a,	// (0x00032fec) bg_cl_pane_g8

0xd752,	// (0x00032ff4) bg_cl_pane_g9

0x0008,

0xfa00,	// (0x000352a2) bg_cl_pane_g

0x8995,	// (0x0002e237) aid_height_cl_leading_ParamLimits

0x8995,	// (0x0002e237) aid_height_cl_leading

0x89a1,	// (0x0002e243) aid_height_cl_text_ParamLimits

0x89a1,	// (0x0002e243) aid_height_cl_text

0x297c,	// (0x0002821e) bg_cl_header_pane_ParamLimits

0x297c,	// (0x0002821e) bg_cl_header_pane

0x89c0,	// (0x0002e262) cl_header_pane_g1_ParamLimits

0x89c0,	// (0x0002e262) cl_header_pane_g1

0x89d6,	// (0x0002e278) cl_header_pane_t1_ParamLimits

0x89d6,	// (0x0002e278) cl_header_pane_t1

0xd75a,	// (0x00032ffc) cl_list_pane

0xd2ca,	// (0x00032b6c) hc_scroll_pane_cp01

0x3b9d,	// (0x0002943f) bg_cl_header_pane_g1

0xd1ac,	// (0x00032a4e) bg_cl_header_pane_g2

0x3bbd,	// (0x0002945f) bg_cl_header_pane_g3

0xd1bc,	// (0x00032a5e) bg_cl_header_pane_g4

0xd1b4,	// (0x00032a56) bg_cl_header_pane_g5

0xd417,	// (0x00032cb9) bg_cl_header_pane_g6

0xd1d4,	// (0x00032a76) bg_cl_header_pane_g7

0xd1dc,	// (0x00032a7e) bg_cl_header_pane_g8

0xd1cc,	// (0x00032a6e) bg_cl_header_pane_g9

0x0008,

0xfa13,	// (0x000352b5) bg_cl_header_pane_g

0x89ef,	// (0x0002e291) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x89ef,	// (0x0002e291) hc_cl_list_double_graphic_heading_pane

0x8a02,	// (0x0002e2a4) hc_cl_list_single_graphic_pane_ParamLimits

0x8a02,	// (0x0002e2a4) hc_cl_list_single_graphic_pane

0x8a1a,	// (0x0002e2bc) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8a1a,	// (0x0002e2bc) hc_cl_list_single_graphic_pane_g1

0x8a26,	// (0x0002e2c8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8a26,	// (0x0002e2c8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa26,	// (0x000352c8) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa26,	// (0x000352c8) hc_cl_list_single_graphic_pane_g

0x8a3a,	// (0x0002e2dc) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8a3a,	// (0x0002e2dc) hc_cl_list_single_graphic_pane_t1

0x8a1a,	// (0x0002e2bc) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8a1a,	// (0x0002e2bc) hc_cl_list_double_graphic_heading_pane_g1

0x8a4f,	// (0x0002e2f1) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8a4f,	// (0x0002e2f1) hc_cl_list_double_graphic_heading_pane_g2

0x8a63,	// (0x0002e305) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8a63,	// (0x0002e305) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa2b,	// (0x000352cd) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa2b,	// (0x000352cd) hc_cl_list_double_graphic_heading_pane_g

0x8a77,	// (0x0002e319) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8a77,	// (0x0002e319) hc_cl_list_double_graphic_heading_pane_t1

0x8a8c,	// (0x0002e32e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8a8c,	// (0x0002e32e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa32,	// (0x000352d4) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa32,	// (0x000352d4) hc_cl_list_double_graphic_heading_pane_t

0xd76b,	// (0x0003300d) vid4_progress_pane_g1

0xd77b,	// (0x0003301d) vid4_progress_pane_g2

0xd78b,	// (0x0003302d) vid4_progress_pane_g3

0xd79d,	// (0x0003303f) vid4_progress_pane_g4

0x0004,

0xfa37,	// (0x000352d9) vid4_progress_pane_g

0xd7bb,	// (0x0003305d) vid4_progress_pane_t1

0xd7d5,	// (0x00033077) vid4_progress_pane_t2

0x0002,

0xfa42,	// (0x000352e4) vid4_progress_pane_t

0x2133,	// (0x000279d5) wait_bar_pane_cp07

0xc2c4,	// (0x00031b66) blid_firmament_pane_ParamLimits

0xc307,	// (0x00031ba9) popup_blid_sat_info2_window_g1

0xc32b,	// (0x00031bcd) popup_blid_sat_info2_window_t3

0xc339,	// (0x00031bdb) popup_blid_sat_info2_window_t4

0xc347,	// (0x00031be9) popup_blid_sat_info2_window_t5

0xc355,	// (0x00031bf7) popup_blid_sat_info2_window_t6

0xc365,	// (0x00031c07) popup_blid_sat_info2_window_t7

0xc373,	// (0x00031c15) popup_blid_sat_info2_window_t8

0xc381,	// (0x00031c23) popup_blid_sat_info2_window_t9

0xc38f,	// (0x00031c31) popup_blid_sat_info2_window_t10

0xc456,	// (0x00031cf8) aid_firma_cardinal_ParamLimits

0xc46a,	// (0x00031d0c) blid_firmament_pane_t1_ParamLimits

0xc481,	// (0x00031d23) blid_firmament_pane_t2_ParamLimits

0xc498,	// (0x00031d3a) blid_firmament_pane_t3_ParamLimits

0xc4af,	// (0x00031d51) blid_firmament_pane_t4_ParamLimits

0xf660,	// (0x00034f02) blid_firmament_pane_t_ParamLimits

0xc4c6,	// (0x00031d68) blid_sat_info_pane_ParamLimits

0xb3eb,	// (0x00030c8d) main_cam_set_pane_ParamLimits

0x7970,	// (0x0002d212) aid_size_cell_colour_35_ParamLimits

0x7990,	// (0x0002d232) aid_size_cell_colour_112_ParamLimits

0x79b0,	// (0x0002d252) aid_size_cell_effect_ParamLimits

0x5511,	// (0x0002adb3) bg_tb_trans_pane_cp02_ParamLimits

0x4b03,	// (0x0002a3a5) heading_imed_pane_ParamLimits

0x79d0,	// (0x0002d272) listscroll_imed_pane_ParamLimits

0xb68c,	// (0x00030f2e) popup_call2_audio_first_window_g5_ParamLimits

0xb68c,	// (0x00030f2e) popup_call2_audio_first_window_g5

0x17ac,	// (0x0002704e) aid_size_touch_image3_arrow_left_ParamLimits

0x17ac,	// (0x0002704e) aid_size_touch_image3_arrow_left

0x17d8,	// (0x0002707a) aid_size_touch_image3_arrow_right_ParamLimits

0x17d8,	// (0x0002707a) aid_size_touch_image3_arrow_right

0xd7ea,	// (0x0003308c) vid4_progress_pane_t3

0x7b75,	// (0x0002d417) main_hwr_training_symbol_option_pane_ParamLimits

0x7b75,	// (0x0002d417) main_hwr_training_symbol_option_pane

0xcbc0,	// (0x00032462) popup_hwr_training_preview_window_ParamLimits

0xcbc0,	// (0x00032462) popup_hwr_training_preview_window

0x1643,	// (0x00026ee5) hwr_training_navi_pane_g5_ParamLimits

0x1643,	// (0x00026ee5) hwr_training_navi_pane_g5

0xd19a,	// (0x00032a3c) popup_char_count_window

0xb3eb,	// (0x00030c8d) bg_popup_sub_pane_cp20_ParamLimits

0x20a2,	// (0x00027944) list_vitu2_match_list_pane_ParamLimits

0x20ae,	// (0x00027950) vitu2_page_scroll_pane_ParamLimits

0x20ae,	// (0x00027950) vitu2_page_scroll_pane

0xd821,	// (0x000330c3) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd821,	// (0x000330c3) list_single_hwr_training_symbol_option_pane

0xd834,	// (0x000330d6) list_single_hwr_training_symbol_option_pane_g1

0xd83c,	// (0x000330de) list_single_hwr_training_symbol_option_pane_t1

0xd84a,	// (0x000330ec) bg_button_pane_cp023

0xd853,	// (0x000330f5) bg_button_pane_cp024

0xd886,	// (0x00033128) vitu2_page_scroll_pane_g1

0xd88e,	// (0x00033130) vitu2_page_scroll_pane_g2

0x0001,

0xfa49,	// (0x000352eb) vitu2_page_scroll_pane_g

0xd896,	// (0x00033138) vitu2_page_scroll_pane_t1

0xd8a5,	// (0x00033147) popup_char_count_window_g1

0xd8ae,	// (0x00033150) popup_char_count_window_g2

0xd8b7,	// (0x00033159) popup_char_count_window_g3

0x0002,

0xfa4e,	// (0x000352f0) popup_char_count_window_g

0xd8c0,	// (0x00033162) popup_char_count_window_t1

0xb3f9,	// (0x00030c9b) main_vded2_pane

0xc967,	// (0x00032209) aid_size_cell_imed_line

0xc971,	// (0x00032213) grid_imed_line_width_pane

0xd0ea,	// (0x0003298c) vid4_indicators_pane_g4

0xd8ce,	// (0x00033170) cell_imed_line_width_pane_ParamLimits

0xd8ce,	// (0x00033170) cell_imed_line_width_pane

0xd8e4,	// (0x00033186) cell_imed_line_width_pane_g1

0xd8ed,	// (0x0003318f) cell_imed_line_width_pane_g2

0x0001,

0xfa55,	// (0x000352f7) cell_imed_line_width_pane_g

0x8ab5,	// (0x0002e357) main_vded2_pane_g1_ParamLimits

0x8ab5,	// (0x0002e357) main_vded2_pane_g1

0x8ad0,	// (0x0002e372) main_vded2_pane_g2_ParamLimits

0x8ad0,	// (0x0002e372) main_vded2_pane_g2

0x0001,

0xfa5a,	// (0x000352fc) main_vded2_pane_g_ParamLimits

0xfa5a,	// (0x000352fc) main_vded2_pane_g

0x8ae2,	// (0x0002e384) vded2_slider_pane_ParamLimits

0x8ae2,	// (0x0002e384) vded2_slider_pane

0x8af2,	// (0x0002e394) aid_size_touch_vded2_end

0x8afc,	// (0x0002e39e) aid_size_touch_vded2_playhead

0xd8f5,	// (0x00033197) aid_size_touch_vded2_start

0xd8fd,	// (0x0003319f) vded2_slider_bg_pane

0xd906,	// (0x000331a8) vded2_slider_pane_g1

0xd90f,	// (0x000331b1) vded2_slider_pane_g2

0x8b06,	// (0x0002e3a8) vded2_slider_pane_g3

0x0002,

0xfa5f,	// (0x00035301) vded2_slider_pane_g

0xd917,	// (0x000331b9) vded2_slider_bg_pane_g1

0xd920,	// (0x000331c2) vded2_slider_bg_pane_g2

0xd929,	// (0x000331cb) vded2_slider_bg_pane_g3

0x0002,

0xfa66,	// (0x00035308) vded2_slider_bg_pane_g

0x597b,	// (0x0002b21d) aid_postcard_touch_down_pane_ParamLimits

0x597b,	// (0x0002b21d) aid_postcard_touch_down_pane

0x5993,	// (0x0002b235) aid_postcard_touch_up_pane_ParamLimits

0x5993,	// (0x0002b235) aid_postcard_touch_up_pane

0xb3f9,	// (0x00030c9b) main_blid2_pane

0xbf85,	// (0x00031827) popup_blid2_search_window

0x2244,	// (0x00027ae6) blid2_gps_pane

0x2244,	// (0x00027ae6) blid2_navig_pane

0x2244,	// (0x00027ae6) blid2_search_pane

0x2244,	// (0x00027ae6) blid2_tripm_pane

0x8b11,	// (0x0002e3b3) blid2_search_pane_g1_ParamLimits

0x8b11,	// (0x0002e3b3) blid2_search_pane_g1

0x8b24,	// (0x0002e3c6) blid2_search_pane_t1_ParamLimits

0x8b24,	// (0x0002e3c6) blid2_search_pane_t1

0x8b36,	// (0x0002e3d8) aid_size_cell_blid2_gps_ParamLimits

0x8b36,	// (0x0002e3d8) aid_size_cell_blid2_gps

0x8b4e,	// (0x0002e3f0) blid2_gps_pane_g1_ParamLimits

0x8b4e,	// (0x0002e3f0) blid2_gps_pane_g1

0x8b62,	// (0x0002e404) grid_blid2_satellite_pane_ParamLimits

0x8b62,	// (0x0002e404) grid_blid2_satellite_pane

0x8b7a,	// (0x0002e41c) blid2_navig_pane_g1_ParamLimits

0x8b7a,	// (0x0002e41c) blid2_navig_pane_g1

0x8b86,	// (0x0002e428) blid2_navig_pane_t1_ParamLimits

0x8b86,	// (0x0002e428) blid2_navig_pane_t1

0x8ba1,	// (0x0002e443) blid2_navig_pane_t2_ParamLimits

0x8ba1,	// (0x0002e443) blid2_navig_pane_t2

0x0001,

0xfa6d,	// (0x0003530f) blid2_navig_pane_t_ParamLimits

0xfa6d,	// (0x0003530f) blid2_navig_pane_t

0x8bbc,	// (0x0002e45e) blid2_navig_ring_pane_ParamLimits

0x8bbc,	// (0x0002e45e) blid2_navig_ring_pane

0x8bd7,	// (0x0002e479) blid2_speed_pane_ParamLimits

0x8bd7,	// (0x0002e479) blid2_speed_pane

0x8be3,	// (0x0002e485) blid2_tripm_pane_g1_ParamLimits

0x8be3,	// (0x0002e485) blid2_tripm_pane_g1

0x8bfe,	// (0x0002e4a0) blid2_tripm_pane_g2_ParamLimits

0x8bfe,	// (0x0002e4a0) blid2_tripm_pane_g2

0x8c12,	// (0x0002e4b4) blid2_tripm_pane_g3_ParamLimits

0x8c12,	// (0x0002e4b4) blid2_tripm_pane_g3

0x8c26,	// (0x0002e4c8) blid2_tripm_pane_g4_ParamLimits

0x8c26,	// (0x0002e4c8) blid2_tripm_pane_g4

0x8c3a,	// (0x0002e4dc) blid2_tripm_pane_g5_ParamLimits

0x8c3a,	// (0x0002e4dc) blid2_tripm_pane_g5

0x0005,

0xfa72,	// (0x00035314) blid2_tripm_pane_g_ParamLimits

0xfa72,	// (0x00035314) blid2_tripm_pane_g

0x8c60,	// (0x0002e502) blid2_tripm_pane_t1_ParamLimits

0x8c60,	// (0x0002e502) blid2_tripm_pane_t1

0x8c79,	// (0x0002e51b) blid2_tripm_pane_t2_ParamLimits

0x8c79,	// (0x0002e51b) blid2_tripm_pane_t2

0x8c92,	// (0x0002e534) blid2_tripm_pane_t3_ParamLimits

0x8c92,	// (0x0002e534) blid2_tripm_pane_t3

0x0003,

0xfa7f,	// (0x00035321) blid2_tripm_pane_t_ParamLimits

0xfa7f,	// (0x00035321) blid2_tripm_pane_t

0x8cd9,	// (0x0002e57b) cell_blid2_satellite_pane_ParamLimits

0x8cd9,	// (0x0002e57b) cell_blid2_satellite_pane

0x8cf5,	// (0x0002e597) cell_blid2_satellite_pane_g1

0xd932,	// (0x000331d4) cell_blid2_satellite_pane_t1

0x34e7,	// (0x00028d89) blid2_speed_pane_g1

0xd940,	// (0x000331e2) blid2_speed_pane_t1

0xd94e,	// (0x000331f0) blid2_speed_pane_t2

0x0001,

0xfa88,	// (0x0003532a) blid2_speed_pane_t

0x34e7,	// (0x00028d89) blid2_navig_ring_pane_g1

0x8cfe,	// (0x0002e5a0) blid2_navig_ring_pane_g2

0x8d06,	// (0x0002e5a8) blid2_navig_ring_pane_g3

0x8d0e,	// (0x0002e5b0) blid2_navig_ring_pane_g4

0x8d16,	// (0x0002e5b8) blid2_navig_ring_pane_g5

0x0004,

0xfa8d,	// (0x0003532f) blid2_navig_ring_pane_g

0x2244,	// (0x00027ae6) bg_popup_window_pane_cp011

0xd95c,	// (0x000331fe) popup_blid2_search_window_g1

0xd964,	// (0x00033206) popup_blid2_search_window_t1

0xd972,	// (0x00033214) popup_blid2_search_window_t2

0x0001,

0xfa98,	// (0x0003533a) popup_blid2_search_window_t

0x3a5a,	// (0x000292fc) main_browser_pane_g1

0x2b27,	// (0x000283c9) main_browser_pane_ParamLimits

0xb3eb,	// (0x00030c8d) bg_button_pane_cp011_ParamLimits

0x2006,	// (0x000278a8) cell_vitu2_function_pane_g1_ParamLimits

0x5511,	// (0x0002adb3) bg_popup_sub_pane_cp22_ParamLimits

0x85ef,	// (0x0002de91) input_focus_pane_cp08_ParamLimits

0x8606,	// (0x0002dea8) popup_vitu2_query_button_pane_ParamLimits

0x8606,	// (0x0002dea8) popup_vitu2_query_button_pane

0x8617,	// (0x0002deb9) popup_vitu2_query_input_button_pane

0xd472,	// (0x00032d14) popup_vitu2_query_window_g1_ParamLimits

0x8621,	// (0x0002dec3) popup_vitu2_query_window_g2_ParamLimits

0xf999,	// (0x0003523b) popup_vitu2_query_window_g_ParamLimits

0x2244,	// (0x00027ae6) bg_button_pane_cp026

0x8d1e,	// (0x0002e5c0) popup_vitu2_query_input_button_pane_g1

0x2244,	// (0x00027ae6) bg_button_pane_cp025

0xd980,	// (0x00033222) popup_vitu2_query_button_pane_t1

0x6e00,	// (0x0002c6a2) main_mp3_pane_t6

0x6e0e,	// (0x0002c6b0) popup_slider_window_cp01

0xd04e,	// (0x000328f0) cam4_battery_pane

0xd0a3,	// (0x00032945) cam4_battery_pane_cp02

0xd763,	// (0x00033005) cam4_battery_pane_cp01

0xd763,	// (0x00033005) cam4_battery_pane_cp03

0xc22b,	// (0x00031acd) cam4_battery_pane_g1

0x34e7,	// (0x00028d89) cam4_battery_pane_g2

0x0001,

0xfa9d,	// (0x0003533f) cam4_battery_pane_g

0xc39d,	// (0x00031c3f) popup_blid_sat_info2_window_t11

0x5219,	// (0x0002aabb) aid_size_touch_mv_arrow_left_ParamLimits

0x5242,	// (0x0002aae4) aid_size_touch_mv_arrow_right_ParamLimits

0x52a0,	// (0x0002ab42) navi_pane_g1_ParamLimits

0x52ac,	// (0x0002ab4e) navi_pane_g2_ParamLimits

0x52da,	// (0x0002ab7c) navi_pane_g3_ParamLimits

0xf374,	// (0x00034c16) navi_pane_g_ParamLimits

0x5398,	// (0x0002ac3a) navi_pane_mv_t1_ParamLimits

0x79dc,	// (0x0002d27e) grid_imed_effect_pane_ParamLimits

0x3605,	// (0x00028ea7) aid_placing_vt_slider_lsc

0x3615,	// (0x00028eb7) aid_placing_vt_slider_prt

0x297c,	// (0x0002821e) bg_tb_trans_pane_cp01_ParamLimits

0xc605,	// (0x00031ea7) popup_image_details_window_g1_ParamLimits

0xc618,	// (0x00031eba) popup_image_details_window_g2_ParamLimits

0xc62d,	// (0x00031ecf) popup_image_details_window_g3_ParamLimits

0xc62d,	// (0x00031ecf) popup_image_details_window_g3

0xf6a0,	// (0x00034f42) popup_image_details_window_g_ParamLimits

0xc641,	// (0x00031ee3) popup_image_details_window_t1_ParamLimits

0xc653,	// (0x00031ef5) popup_image_details_window_t2_ParamLimits

0xc66c,	// (0x00031f0e) popup_image_details_window_t3_ParamLimits

0xc680,	// (0x00031f22) popup_image_details_window_t4_ParamLimits

0xc69b,	// (0x00031f3d) popup_image_details_window_t5_ParamLimits

0xf6a7,	// (0x00034f49) popup_image_details_window_t_ParamLimits

0x89ad,	// (0x0002e24f) cl_header_name_pane_ParamLimits

0x89ad,	// (0x0002e24f) cl_header_name_pane

0x8d26,	// (0x0002e5c8) cl_header_name_pane_t1_ParamLimits

0x8d26,	// (0x0002e5c8) cl_header_name_pane_t1

0x8d47,	// (0x0002e5e9) cl_header_name_pane_t2_ParamLimits

0x8d47,	// (0x0002e5e9) cl_header_name_pane_t2

0x8d89,	// (0x0002e62b) cl_header_name_pane_t3_ParamLimits

0x8d89,	// (0x0002e62b) cl_header_name_pane_t3

0x0002,

0xfaa2,	// (0x00035344) cl_header_name_pane_t_ParamLimits

0xfaa2,	// (0x00035344) cl_header_name_pane_t

0x5369,	// (0x0002ac0b) navi_pane_mv_g2_ParamLimits

0xd136,	// (0x000329d8) field_vitu2_entry_pane_g1_ParamLimits

0xd142,	// (0x000329e4) field_vitu2_entry_pane_g2_ParamLimits

0x54db,	// (0x0002ad7d) field_vitu2_entry_pane_g3_ParamLimits

0x54db,	// (0x0002ad7d) field_vitu2_entry_pane_g3

0xf8a2,	// (0x00035144) field_vitu2_entry_pane_g_ParamLimits

0x1e96,	// (0x00027738) cell_vitu2_itu_pane_g1_ParamLimits

0x1eae,	// (0x00027750) cell_vitu2_itu_pane_g2_ParamLimits

0x1eae,	// (0x00027750) cell_vitu2_itu_pane_g2

0x0001,

0xf8ae,	// (0x00035150) cell_vitu2_itu_pane_g_ParamLimits

0xf8ae,	// (0x00035150) cell_vitu2_itu_pane_g

0xb3eb,	// (0x00030c8d) bg_vkb2_func_pane_cp05_ParamLimits

0xb3eb,	// (0x00030c8d) bg_vkb2_func_pane_cp05

0xb3eb,	// (0x00030c8d) bg_vkb2_func_pane_cp03

0xb3eb,	// (0x00030c8d) bg_vkb2_func_pane_cp04

0xb3eb,	// (0x00030c8d) bg_vkb2_func_pane_cp10_ParamLimits

0xb3eb,	// (0x00030c8d) bg_vkb2_func_pane_cp10

0x894d,	// (0x0002e1ef) bg_vkb2_func_pane_cp08

0x8933,	// (0x0002e1d5) bg_vkb2_func_pane_cp06

0x8941,	// (0x0002e1e3) bg_vkb2_func_pane_cp07

0xd85c,	// (0x000330fe) bg_vkb2_func_pane_cp11_ParamLimits

0xd85c,	// (0x000330fe) bg_vkb2_func_pane_cp11

0xd871,	// (0x00033113) bg_vkb2_func_pane_cp12_ParamLimits

0xd871,	// (0x00033113) bg_vkb2_func_pane_cp12

0x2244,	// (0x00027ae6) bg_vkb2_func_pane_cp09

0xd1ac,	// (0x00032a4e) bg_vkb2_func_pane_g1

0x3bbd,	// (0x0002945f) bg_vkb2_func_pane_g2

0xd1b4,	// (0x00032a56) bg_vkb2_func_pane_g3

0xd1bc,	// (0x00032a5e) bg_vkb2_func_pane_g4

0xd417,	// (0x00032cb9) bg_vkb2_func_pane_g5

0xd1d4,	// (0x00032a76) bg_vkb2_func_pane_g6

0xd1dc,	// (0x00032a7e) bg_vkb2_func_pane_g7

0xd1cc,	// (0x00032a6e) bg_vkb2_func_pane_g8

0x3b9d,	// (0x0002943f) bg_vkb2_func_pane_g9

0x0008,

0xfaa9,	// (0x0003534b) bg_vkb2_func_pane_g

0x8c4e,	// (0x0002e4f0) blid2_tripm_pane_g6_ParamLimits

0x8c4e,	// (0x0002e4f0) blid2_tripm_pane_g6

0xcef3,	// (0x00032795) mp4_progress_pane_g1

0x8cc5,	// (0x0002e567) blid2_tripm_values_pane_ParamLimits

0x8cc5,	// (0x0002e567) blid2_tripm_values_pane

0x8dba,	// (0x0002e65c) blid2_tripm_values_pane_t1

0x8dc8,	// (0x0002e66a) blid2_tripm_values_pane_t2

0x8dd6,	// (0x0002e678) blid2_tripm_values_pane_t3

0x8de4,	// (0x0002e686) blid2_tripm_values_pane_t4

0x8df2,	// (0x0002e694) blid2_tripm_values_pane_t5

0x8e00,	// (0x0002e6a2) blid2_tripm_values_pane_t6

0x8e0e,	// (0x0002e6b0) blid2_tripm_values_pane_t7

0x8e1c,	// (0x0002e6be) blid2_tripm_values_pane_t8

0x8e2a,	// (0x0002e6cc) blid2_tripm_values_pane_t9

0x0008,

0xfabc,	// (0x0003535e) blid2_tripm_values_pane_t

0x364c,	// (0x00028eee) call_video_pane_t1_ParamLimits

0x3666,	// (0x00028f08) call_video_pane_t2_ParamLimits

0xf222,	// (0x00034ac4) call_video_pane_t_ParamLimits

0x588d,	// (0x0002b12f) msg_header_pane_g1_ParamLimits

0x589b,	// (0x0002b13d) msg_header_pane_g2_ParamLimits

0x589b,	// (0x0002b13d) msg_header_pane_g2

0x0001,

0xf417,	// (0x00034cb9) msg_header_pane_g_ParamLimits

0xf417,	// (0x00034cb9) msg_header_pane_g

0x2b27,	// (0x000283c9) main_clock2_pane_ParamLimits

0x7782,	// (0x0002d024) grid_clock2_toolbar_pane_ParamLimits

0x7782,	// (0x0002d024) grid_clock2_toolbar_pane

0x7782,	// (0x0002d024) listscroll_clock2_pane_ParamLimits

0x7782,	// (0x0002d024) listscroll_clock2_pane

0x7861,	// (0x0002d103) main_clock2_pane_t3_ParamLimits

0x7861,	// (0x0002d103) main_clock2_pane_t3

0x7884,	// (0x0002d126) main_clock2_pane_t4_ParamLimits

0x7884,	// (0x0002d126) main_clock2_pane_t4

0xd98e,	// (0x00033230) cell_clock2_toolbar_pane

0xd996,	// (0x00033238) cell_clock2_toolbar_pane_cp01

0xd996,	// (0x00033238) cell_clock2_toolbar_pane_cp02

0xd99e,	// (0x00033240) cell_clock2_toolbar_pane_cp03

0xd9a6,	// (0x00033248) list_clock2_pane

0x4f9b,	// (0x0002a83d) scroll_pane_cp10

0xd9ae,	// (0x00033250) list_single_clock2_pane_ParamLimits

0xd9ae,	// (0x00033250) list_single_clock2_pane

0x32f6,	// (0x00028b98) list_highlight_pane_cp08

0xd9bb,	// (0x0003325d) list_single_clock2_pane_t1

0xd9c9,	// (0x0003326b) list_single_clock2_pane_t2

0x0001,

0xfacf,	// (0x00035371) list_single_clock2_pane_t

0x2244,	// (0x00027ae6) bg_button_pane_cp10

0xd9d7,	// (0x00033279) cell_clock2_toolbar_pane_g1

0x1202,	// (0x00026aa4) aid_main_viewer_pane_g1_ParamLimits

0x1202,	// (0x00026aa4) aid_main_viewer_pane_g1

0x1210,	// (0x00026ab2) aid_main_viewer_pane_g2_ParamLimits

0x1210,	// (0x00026ab2) aid_main_viewer_pane_g2

0x5931,	// (0x0002b1d3) aid_main_viewer_pane_g3_ParamLimits

0x5931,	// (0x0002b1d3) aid_main_viewer_pane_g3

0x5940,	// (0x0002b1e2) aid_main_viewer_pane_g4_ParamLimits

0x5940,	// (0x0002b1e2) aid_main_viewer_pane_g4

0x0003,

0xf428,	// (0x00034cca) aid_main_viewer_pane_g_ParamLimits

0xf428,	// (0x00034cca) aid_main_viewer_pane_g

0x1244,	// (0x00026ae6) main_calc_pane_ParamLimits

0x1268,	// (0x00026b0a) main_dialer2_pane_ParamLimits

0xb3f9,	// (0x00030c9b) main_cam6_pane

0xb3f9,	// (0x00030c9b) main_vid6_pane

0x778e,	// (0x0002d030) listscroll_gen_pane_cp06_ParamLimits

0x778e,	// (0x0002d030) listscroll_gen_pane_cp06

0x78a7,	// (0x0002d149) main_clock2_pane_t5_ParamLimits

0x78a7,	// (0x0002d149) main_clock2_pane_t5

0x7905,	// (0x0002d1a7) aid_call2_pane_cp10_ParamLimits

0x7917,	// (0x0002d1b9) aid_call_pane_cp10_ParamLimits

0x51a4,	// (0x0002aa46) popup_clock_analogue_window_cp10_g1_ParamLimits

0x51a4,	// (0x0002aa46) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7929,	// (0x0002d1cb) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7929,	// (0x0002d1cb) popup_clock_analogue_window_cp10_g4_ParamLimits

0x51a4,	// (0x0002aa46) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf75c,	// (0x00034ffe) popup_clock_analogue_window_cp10_g_ParamLimits

0x793f,	// (0x0002d1e1) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7c5d,	// (0x0002d4ff) cell_dialer2_keypad_pane_g2_ParamLimits

0x7c5d,	// (0x0002d4ff) cell_dialer2_keypad_pane_g2

0x0001,

0xf841,	// (0x000350e3) cell_dialer2_keypad_pane_g_ParamLimits

0xf841,	// (0x000350e3) cell_dialer2_keypad_pane_g

0x7c79,	// (0x0002d51b) cell_dialer2_keypad_pane_t1

0x80dd,	// (0x0002d97f) main_cset_text2_pane_ParamLimits

0x80dd,	// (0x0002d97f) main_cset_text2_pane

0xd66a,	// (0x00032f0c) area_vitu2_query_pane_g1_ParamLimits

0x88ca,	// (0x0002e16c) area_vitu2_query_pane_g2_ParamLimits

0xf9ec,	// (0x0003528e) area_vitu2_query_pane_g_ParamLimits

0xd6ee,	// (0x00032f90) area_vitu2_query_pane_t7_ParamLimits

0xd6ee,	// (0x00032f90) area_vitu2_query_pane_t7

0x8933,	// (0x0002e1d5) bg_button_pane_cp018_ParamLimits

0x8941,	// (0x0002e1e3) bg_button_pane_cp021_ParamLimits

0x894d,	// (0x0002e1ef) bg_button_pane_cp022_ParamLimits

0x894d,	// (0x0002e1ef) bg_vkb2_func_pane_cp08_ParamLimits

0x8933,	// (0x0002e1d5) bg_vkb2_func_pane_cp06_ParamLimits

0x8941,	// (0x0002e1e3) bg_vkb2_func_pane_cp07_ParamLimits

0x8960,	// (0x0002e202) input_focus_pane_cp09_ParamLimits

0xd9df,	// (0x00033281) cam6_autofocus_pane_ParamLimits

0xd9df,	// (0x00033281) cam6_autofocus_pane

0x2146,	// (0x000279e8) cam6_image_uncrop_pane_ParamLimits

0x2146,	// (0x000279e8) cam6_image_uncrop_pane

0x2155,	// (0x000279f7) cam6_indi_pane_ParamLimits

0x2155,	// (0x000279f7) cam6_indi_pane

0x216b,	// (0x00027a0d) cam6_mode_pane_ParamLimits

0x216b,	// (0x00027a0d) cam6_mode_pane

0x217d,	// (0x00027a1f) cam6_timer_pane_ParamLimits

0x217d,	// (0x00027a1f) cam6_timer_pane

0x2189,	// (0x00027a2b) cam6_zoom_pane_ParamLimits

0x2189,	// (0x00027a2b) cam6_zoom_pane

0x8e38,	// (0x0002e6da) cam6_mode_pane_g1_ParamLimits

0x8e38,	// (0x0002e6da) cam6_mode_pane_g1

0x8e48,	// (0x0002e6ea) cam6_mode_pane_g2_ParamLimits

0x8e48,	// (0x0002e6ea) cam6_mode_pane_g2

0x8e58,	// (0x0002e6fa) cam6_mode_pane_g3_ParamLimits

0x8e58,	// (0x0002e6fa) cam6_mode_pane_g3

0x8e68,	// (0x0002e70a) cam6_mode_pane_g4_ParamLimits

0x8e68,	// (0x0002e70a) cam6_mode_pane_g4

0x0003,

0xfad4,	// (0x00035376) cam6_mode_pane_g_ParamLimits

0xfad4,	// (0x00035376) cam6_mode_pane_g

0xd9ed,	// (0x0003328f) bg_tb_trans_pane_cp08_ParamLimits

0xd9ed,	// (0x0003328f) bg_tb_trans_pane_cp08

0xd9fb,	// (0x0003329d) cam6_battery_pane_ParamLimits

0xd9fb,	// (0x0003329d) cam6_battery_pane

0xda11,	// (0x000332b3) cam6_indi_pane_g1_ParamLimits

0xda11,	// (0x000332b3) cam6_indi_pane_g1

0xda23,	// (0x000332c5) cam6_indi_pane_g2_ParamLimits

0xda23,	// (0x000332c5) cam6_indi_pane_g2

0xda35,	// (0x000332d7) cam6_indi_pane_g3_ParamLimits

0xda35,	// (0x000332d7) cam6_indi_pane_g3

0x0002,

0xfadd,	// (0x0003537f) cam6_indi_pane_g_ParamLimits

0xfadd,	// (0x0003537f) cam6_indi_pane_g

0xda47,	// (0x000332e9) cam6_indi_pane_t1_ParamLimits

0xda47,	// (0x000332e9) cam6_indi_pane_t1

0x7da6,	// (0x0002d648) cam6_autofocus_pane_g1

0x7d9e,	// (0x0002d640) cam6_autofocus_pane_g2

0x7db6,	// (0x0002d658) cam6_autofocus_pane_g3

0x7dae,	// (0x0002d650) cam6_autofocus_pane_g4

0x0003,

0xfae4,	// (0x00035386) cam6_autofocus_pane_g

0xda6d,	// (0x0003330f) cam6_timer_pane_g1

0xda75,	// (0x00033317) cam6_timer_pane_t1

0xda83,	// (0x00033325) cam6_zoom_cont_pane

0xda8b,	// (0x0003332d) cam6_zoom_pane_g1

0xda93,	// (0x00033335) cam6_zoom_pane_g2

0x8e78,	// (0x0002e71a) cam6_zoom_pane_g3

0x0002,

0xfaed,	// (0x0003538f) cam6_zoom_pane_g

0x34e7,	// (0x00028d89) cam6_battery_pane_g1

0x34e7,	// (0x00028d89) cam6_battery_pane_g2

0x0001,

0xf3d8,	// (0x00034c7a) cam6_battery_pane_g

0xda9b,	// (0x0003333d) cam6_zoom_cont_pane_g1

0xdaa4,	// (0x00033346) cam6_zoom_cont_pane_g2

0xdaad,	// (0x0003334f) cam6_zoom_cont_pane_g3

0x0002,

0xfaf4,	// (0x00035396) cam6_zoom_cont_pane_g

0x8e95,	// (0x0002e737) cam6_mode_pane_cp_ParamLimits

0x8e95,	// (0x0002e737) cam6_mode_pane_cp

0x8ea7,	// (0x0002e749) cam6_zoom_pane_cp_ParamLimits

0x8ea7,	// (0x0002e749) cam6_zoom_pane_cp

0x8eb5,	// (0x0002e757) vid6_image_uncrop_cif_pane_ParamLimits

0x8eb5,	// (0x0002e757) vid6_image_uncrop_cif_pane

0x8ec5,	// (0x0002e767) vid6_image_uncrop_nhd_pane_ParamLimits

0x8ec5,	// (0x0002e767) vid6_image_uncrop_nhd_pane

0x8ed4,	// (0x0002e776) vid6_image_uncrop_vga_pane_ParamLimits

0x8ed4,	// (0x0002e776) vid6_image_uncrop_vga_pane

0x8ee3,	// (0x0002e785) vid6_image_uncrop_wvga_pane_ParamLimits

0x8ee3,	// (0x0002e785) vid6_image_uncrop_wvga_pane

0x8ef2,	// (0x0002e794) vid6_indi_pane_ParamLimits

0x8ef2,	// (0x0002e794) vid6_indi_pane

0xd9ed,	// (0x0003328f) bg_tb_trans_pane_cp09_ParamLimits

0xd9ed,	// (0x0003328f) bg_tb_trans_pane_cp09

0xdac5,	// (0x00033367) cam6_battery_pane_cp_ParamLimits

0xdac5,	// (0x00033367) cam6_battery_pane_cp

0xdad1,	// (0x00033373) vid6_indi_pane_g1_ParamLimits

0xdad1,	// (0x00033373) vid6_indi_pane_g1

0xdae3,	// (0x00033385) vid6_indi_pane_g2_ParamLimits

0xdae3,	// (0x00033385) vid6_indi_pane_g2

0xdaf5,	// (0x00033397) vid6_indi_pane_g3_ParamLimits

0xdaf5,	// (0x00033397) vid6_indi_pane_g3

0xdb0c,	// (0x000333ae) vid6_indi_pane_g4_ParamLimits

0xdb0c,	// (0x000333ae) vid6_indi_pane_g4

0xdb23,	// (0x000333c5) vid6_indi_pane_g5_ParamLimits

0xdb23,	// (0x000333c5) vid6_indi_pane_g5

0x0004,

0xfafb,	// (0x0003539d) vid6_indi_pane_g_ParamLimits

0xfafb,	// (0x0003539d) vid6_indi_pane_g

0xdb3d,	// (0x000333df) vid6_indi_pane_t1_ParamLimits

0xdb3d,	// (0x000333df) vid6_indi_pane_t1

0xdb53,	// (0x000333f5) vid6_indi_pane_t2_ParamLimits

0xdb53,	// (0x000333f5) vid6_indi_pane_t2

0xdb7b,	// (0x0003341d) vid6_indi_pane_t3_ParamLimits

0xdb7b,	// (0x0003341d) vid6_indi_pane_t3

0xdba3,	// (0x00033445) vid6_indi_pane_t4_ParamLimits

0xdba3,	// (0x00033445) vid6_indi_pane_t4

0x0003,

0xfb06,	// (0x000353a8) vid6_indi_pane_t_ParamLimits

0xfb06,	// (0x000353a8) vid6_indi_pane_t

0xdbc7,	// (0x00033469) wait_bar_pane_cp08

0x8f0a,	// (0x0002e7ac) main_cset_text2_pane_t1_ParamLimits

0x8f0a,	// (0x0002e7ac) main_cset_text2_pane_t1

0x8e80,	// (0x0002e722) listscroll_gen_pane_cp06_t1_ParamLimits

0x8e80,	// (0x0002e722) listscroll_gen_pane_cp06_t1

0xb3f9,	// (0x00030c9b) main_cam6_set_pane

0xd040,	// (0x000328e2) bg_tb_trans_pane_cp06_ParamLimits

0xd056,	// (0x000328f8) cam4_indicators_pane_g1_ParamLimits

0xd067,	// (0x00032909) cam4_indicators_pane_g2_ParamLimits

0xf87e,	// (0x00035120) cam4_indicators_pane_g_ParamLimits

0xd07f,	// (0x00032921) cam4_indicators_pane_t1_ParamLimits

0xb3eb,	// (0x00030c8d) bg_tb_trans_pane_cp07_ParamLimits

0xd0ad,	// (0x0003294f) vid4_indicators_pane_g1_ParamLimits

0xd0c3,	// (0x00032965) vid4_indicators_pane_g2_ParamLimits

0xd0d7,	// (0x00032979) vid4_indicators_pane_g3_ParamLimits

0xd0ea,	// (0x0003298c) vid4_indicators_pane_g4_ParamLimits

0xf890,	// (0x00035132) vid4_indicators_pane_g_ParamLimits

0xd108,	// (0x000329aa) vid4_indicators_pane_t1_ParamLimits

0xd76b,	// (0x0003300d) vid4_progress_pane_g1_ParamLimits

0xd77b,	// (0x0003301d) vid4_progress_pane_g2_ParamLimits

0xd78b,	// (0x0003302d) vid4_progress_pane_g3_ParamLimits

0xd79d,	// (0x0003303f) vid4_progress_pane_g4_ParamLimits

0xfa37,	// (0x000352d9) vid4_progress_pane_g_ParamLimits

0xd7bb,	// (0x0003305d) vid4_progress_pane_t1_ParamLimits

0xd7d5,	// (0x00033077) vid4_progress_pane_t2_ParamLimits

0xd7ea,	// (0x0003308c) vid4_progress_pane_t3_ParamLimits

0xfa42,	// (0x000352e4) vid4_progress_pane_t_ParamLimits

0x2133,	// (0x000279d5) wait_bar_pane_cp07_ParamLimits

0x8f2b,	// (0x0002e7cd) main_cam6_set_pane_g2_ParamLimits

0x8f2b,	// (0x0002e7cd) main_cam6_set_pane_g2

0x8f51,	// (0x0002e7f3) main_cset6_listscroll_pane_ParamLimits

0x8f51,	// (0x0002e7f3) main_cset6_listscroll_pane

0x8f6f,	// (0x0002e811) main_cset6_slider_pane_ParamLimits

0x8f6f,	// (0x0002e811) main_cset6_slider_pane

0x8f85,	// (0x0002e827) main_cset6_text2_pane_ParamLimits

0x8f85,	// (0x0002e827) main_cset6_text2_pane

0xdbd6,	// (0x00033478) main_cset6_text_pane

0xdbde,	// (0x00033480) main_cset_list_pane_copy1_ParamLimits

0xdbde,	// (0x00033480) main_cset_list_pane_copy1

0xdbee,	// (0x00033490) scroll_pane_cp028_copy1

0x8f93,	// (0x0002e835) cset_list_set_pane_copy1

0x8fa7,	// (0x0002e849) aid_position_infowindow_above_copy1

0x8faf,	// (0x0002e851) aid_position_infowindow_below_copy1

0x8fb7,	// (0x0002e859) cset_list_set_pane_g1_copy1

0x8fbf,	// (0x0002e861) cset_list_set_pane_g3_copy1_ParamLimits

0x8fbf,	// (0x0002e861) cset_list_set_pane_g3_copy1

0x8fce,	// (0x0002e870) cset_list_set_pane_t1_copy1_ParamLimits

0x8fce,	// (0x0002e870) cset_list_set_pane_t1_copy1

0x297c,	// (0x0002821e) list_highlight_pane_cp021_copy1_ParamLimits

0x297c,	// (0x0002821e) list_highlight_pane_cp021_copy1

0xdbf7,	// (0x00033499) cset6_slider_pane_ParamLimits

0xdbf7,	// (0x00033499) cset6_slider_pane

0xdc23,	// (0x000334c5) main_cset6_slider_pane_g1_ParamLimits

0xdc23,	// (0x000334c5) main_cset6_slider_pane_g1

0x8fe3,	// (0x0002e885) main_cset6_slider_pane_g2_ParamLimits

0x8fe3,	// (0x0002e885) main_cset6_slider_pane_g2

0xdc4b,	// (0x000334ed) main_cset6_slider_pane_g3_ParamLimits

0xdc4b,	// (0x000334ed) main_cset6_slider_pane_g3

0x900b,	// (0x0002e8ad) main_cset6_slider_pane_g4_ParamLimits

0x900b,	// (0x0002e8ad) main_cset6_slider_pane_g4

0x9017,	// (0x0002e8b9) main_cset6_slider_pane_g5_ParamLimits

0x9017,	// (0x0002e8b9) main_cset6_slider_pane_g5

0xd2df,	// (0x00032b81) main_cset6_slider_pane_g7_ParamLimits

0xd2df,	// (0x00032b81) main_cset6_slider_pane_g7

0xd2eb,	// (0x00032b8d) main_cset6_slider_pane_g8_ParamLimits

0xd2eb,	// (0x00032b8d) main_cset6_slider_pane_g8

0x8185,	// (0x0002da27) main_cset6_slider_pane_g9_ParamLimits

0x8185,	// (0x0002da27) main_cset6_slider_pane_g9

0x8191,	// (0x0002da33) main_cset6_slider_pane_g10_ParamLimits

0x8191,	// (0x0002da33) main_cset6_slider_pane_g10

0x819d,	// (0x0002da3f) main_cset6_slider_pane_g11_ParamLimits

0x819d,	// (0x0002da3f) main_cset6_slider_pane_g11

0x81a9,	// (0x0002da4b) main_cset6_slider_pane_g12_ParamLimits

0x81a9,	// (0x0002da4b) main_cset6_slider_pane_g12

0x81b5,	// (0x0002da57) main_cset6_slider_pane_g13_ParamLimits

0x81b5,	// (0x0002da57) main_cset6_slider_pane_g13

0x81c1,	// (0x0002da63) main_cset6_slider_pane_g14_ParamLimits

0x81c1,	// (0x0002da63) main_cset6_slider_pane_g14

0x9025,	// (0x0002e8c7) main_cset6_slider_pane_g15_ParamLimits

0x9025,	// (0x0002e8c7) main_cset6_slider_pane_g15

0x81e5,	// (0x0002da87) main_cset6_slider_pane_g16_ParamLimits

0x81e5,	// (0x0002da87) main_cset6_slider_pane_g16

0x81f3,	// (0x0002da95) main_cset6_slider_pane_g17_ParamLimits

0x81f3,	// (0x0002da95) main_cset6_slider_pane_g17

0x0011,

0xfb0f,	// (0x000353b1) main_cset6_slider_pane_g_ParamLimits

0xfb0f,	// (0x000353b1) main_cset6_slider_pane_g

0xdc57,	// (0x000334f9) main_cset6_slider_pane_t1_ParamLimits

0xdc57,	// (0x000334f9) main_cset6_slider_pane_t1

0x9055,	// (0x0002e8f7) main_cset6_slider_pane_t2_ParamLimits

0x9055,	// (0x0002e8f7) main_cset6_slider_pane_t2

0x9080,	// (0x0002e922) main_cset6_slider_pane_t3_ParamLimits

0x9080,	// (0x0002e922) main_cset6_slider_pane_t3

0x90ab,	// (0x0002e94d) main_cset6_slider_pane_t4_ParamLimits

0x90ab,	// (0x0002e94d) main_cset6_slider_pane_t4

0x90d8,	// (0x0002e97a) main_cset6_slider_pane_t5_ParamLimits

0x90d8,	// (0x0002e97a) main_cset6_slider_pane_t5

0xdc98,	// (0x0003353a) main_cset6_slider_pane_t7_ParamLimits

0xdc98,	// (0x0003353a) main_cset6_slider_pane_t7

0x9105,	// (0x0002e9a7) main_cset6_slider_pane_t8_ParamLimits

0x9105,	// (0x0002e9a7) main_cset6_slider_pane_t8

0x9129,	// (0x0002e9cb) main_cset6_slider_pane_t9_ParamLimits

0x9129,	// (0x0002e9cb) main_cset6_slider_pane_t9

0x914d,	// (0x0002e9ef) main_cset6_slider_pane_t10_ParamLimits

0x914d,	// (0x0002e9ef) main_cset6_slider_pane_t10

0x9171,	// (0x0002ea13) main_cset6_slider_pane_t11_ParamLimits

0x9171,	// (0x0002ea13) main_cset6_slider_pane_t11

0xdcce,	// (0x00033570) main_cset6_slider_pane_t14_ParamLimits

0xdcce,	// (0x00033570) main_cset6_slider_pane_t14

0xdd07,	// (0x000335a9) main_cset6_slider_pane_t15_ParamLimits

0xdd07,	// (0x000335a9) main_cset6_slider_pane_t15

0x000b,

0xfb34,	// (0x000353d6) main_cset6_slider_pane_t_ParamLimits

0xfb34,	// (0x000353d6) main_cset6_slider_pane_t

0xdd40,	// (0x000335e2) cset_slider_pane_g1_copy1

0xdd49,	// (0x000335eb) cset_slider_pane_g2_copy1

0xdd52,	// (0x000335f4) cset_slider_pane_g3_copy1

0x2244,	// (0x00027ae6) bg_popup_sub_pane_cp011_copy1

0xdd64,	// (0x00033606) main_cset_text_pane_g1_copy1

0xd486,	// (0x00032d28) main_cset_text_pane_t1_copy1

0xd494,	// (0x00032d36) main_cset_text_pane_t2_copy1

0xd4a2,	// (0x00032d44) main_cset_text_pane_t3_copy1

0xd4b0,	// (0x00032d52) main_cset_text_pane_t4_copy1

0xd4be,	// (0x00032d60) main_cset_text_pane_t5_copy1

0xdd6c,	// (0x0003360e) main_cset_text_pane_t6_copy1

0xdd7a,	// (0x0003361c) main_cset_text_pane_t7_copy1

0x8f0a,	// (0x0002e7ac) main_cset_text2_pane_t1_copy1

0xb3eb,	// (0x00030c8d) main_ncimui_pane

0x1502,	// (0x00026da4) popup_query_ncimui_window_ParamLimits

0x1502,	// (0x00026da4) popup_query_ncimui_window

0xc73c,	// (0x00031fde) field_cale_ev2_pane_g4_ParamLimits

0xc73c,	// (0x00031fde) field_cale_ev2_pane_g4

0x7be2,	// (0x0002d484) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7be2,	// (0x0002d484) cell_video_dialer_keypad_pane_g2

0x0001,

0xf818,	// (0x000350ba) cell_video_dialer_keypad_pane_g_ParamLimits

0xf818,	// (0x000350ba) cell_video_dialer_keypad_pane_g

0x7bfa,	// (0x0002d49c) cell_video_dialer_keypad_pane_t1

0x2244,	// (0x00027ae6) bg_popup_window_pane_cp012

0xbedf,	// (0x00031781) heading_pane_cp06

0xdda6,	// (0x00033648) ncim_query_content_pane

0x2244,	// (0x00027ae6) bg_popup_heading_pane_cp01

0xddae,	// (0x00033650) ncim_heading_pane_t1

0xddbc,	// (0x0003365e) ncim_indicator_popup_pane

0xddce,	// (0x00033670) ncim_query_button_pane

0xdde4,	// (0x00033686) ncim_query_content_pane_t1

0xddf6,	// (0x00033698) ncim_query_content_pane_t2

0x0005,

0xfb78,	// (0x0003541a) ncim_query_content_pane_t

0xde30,	// (0x000336d2) ncim_query_list_pane

0xde42,	// (0x000336e4) ncim_query_popup_pane

0xddbc,	// (0x0003365e) ncim_indicator_popup_pane_ParamLimits

0x92dd,	// (0x0002eb7f) ncim_query_content_pane_g1_ParamLimits

0x92dd,	// (0x0002eb7f) ncim_query_content_pane_g1

0xdde4,	// (0x00033686) ncim_query_content_pane_t1_ParamLimits

0xddf6,	// (0x00033698) ncim_query_content_pane_t2_ParamLimits

0x92e9,	// (0x0002eb8b) ncim_query_content_pane_t3_ParamLimits

0x92e9,	// (0x0002eb8b) ncim_query_content_pane_t3

0x9311,	// (0x0002ebb3) ncim_query_content_pane_t4_ParamLimits

0x9311,	// (0x0002ebb3) ncim_query_content_pane_t4

0x9339,	// (0x0002ebdb) ncim_query_content_pane_t5_ParamLimits

0x9339,	// (0x0002ebdb) ncim_query_content_pane_t5

0xde08,	// (0x000336aa) ncim_query_content_pane_t6_ParamLimits

0xde08,	// (0x000336aa) ncim_query_content_pane_t6

0xfb78,	// (0x0003541a) ncim_query_content_pane_t_ParamLimits

0xde30,	// (0x000336d2) ncim_query_list_pane_ParamLimits

0xde42,	// (0x000336e4) ncim_query_popup_pane_ParamLimits

0xde56,	// (0x000336f8) wait_bar_pane_cp04

0x2244,	// (0x00027ae6) input_focus_pane_cp011

0xde5e,	// (0x00033700) ncim_query_popup_pane_t1

0xde6c,	// (0x0003370e) ncim_list_query_list_pane_ParamLimits

0xde6c,	// (0x0003370e) ncim_list_query_list_pane

0x2244,	// (0x00027ae6) bg_button_pane_cp027

0xde7f,	// (0x00033721) ncim_query_button_pane_g1

0x2244,	// (0x00027ae6) list_highlight_pane_cp012

0xde89,	// (0x0003372b) ncim_list_query_list_pane_g1

0xde91,	// (0x00033733) ncim_list_query_list_pane_t1

0xd073,	// (0x00032915) cam4_indicators_pane_g3_ParamLimits

0xd073,	// (0x00032915) cam4_indicators_pane_g3

0xd0f6,	// (0x00032998) vid4_indicators_pane_g5_ParamLimits

0xd0f6,	// (0x00032998) vid4_indicators_pane_g5

0xd7ac,	// (0x0003304e) vid4_progress_pane_g5_ParamLimits

0xd7ac,	// (0x0003304e) vid4_progress_pane_g5

0x91c8,	// (0x0002ea6a) main_ncimui_pane_g1

0x9231,	// (0x0002ead3) ncimui_group_query_pane_ParamLimits

0x9231,	// (0x0002ead3) ncimui_group_query_pane

0x9279,	// (0x0002eb1b) ncimui_list_pane_ParamLimits

0x9279,	// (0x0002eb1b) ncimui_list_pane

0x92a0,	// (0x0002eb42) ncimui_text_pane_ParamLimits

0x92a0,	// (0x0002eb42) ncimui_text_pane

0x9361,	// (0x0002ec03) ncimui_text_pane_t1_ParamLimits

0x9361,	// (0x0002ec03) ncimui_text_pane_t1

0xde9f,	// (0x00033741) ncimui_list_single_graphic_pane_ParamLimits

0xde9f,	// (0x00033741) ncimui_list_single_graphic_pane

0x937f,	// (0x0002ec21) ncimui_query_pane_ParamLimits

0x937f,	// (0x0002ec21) ncimui_query_pane

0x2244,	// (0x00027ae6) list_highlight_pane_cp013

0xdeaf,	// (0x00033751) ncim_list_query_list_pane_t1_copy1

0xde89,	// (0x0003372b) ncim_list_single_graphic_pane_g1

0x9392,	// (0x0002ec34) ncim_query_button_pane_cp01

0x939e,	// (0x0002ec40) ncim_query_entry_pane_ParamLimits

0x939e,	// (0x0002ec40) ncim_query_entry_pane

0x93b1,	// (0x0002ec53) ncimui_query_pane_g1

0x93bd,	// (0x0002ec5f) ncimui_query_pane_t1_ParamLimits

0x93bd,	// (0x0002ec5f) ncimui_query_pane_t1

0x297c,	// (0x0002821e) input_focus_pane_cp012

0xdebd,	// (0x0003375f) ncim_query_entry_pane_t1

0x2b27,	// (0x000283c9) main_im_pane_ParamLimits

0xb3eb,	// (0x00030c8d) main_mobtv_pane_ParamLimits

0xb3eb,	// (0x00030c8d) main_mobtv_pane

0x903d,	// (0x0002e8df) main_cset6_slider_pane_g18_ParamLimits

0x903d,	// (0x0002e8df) main_cset6_slider_pane_g18

0x9049,	// (0x0002e8eb) main_cset6_slider_pane_g19_ParamLimits

0x9049,	// (0x0002e8eb) main_cset6_slider_pane_g19

0x29ff,	// (0x000282a1) bg_main_mobtv_pane_ParamLimits

0x29ff,	// (0x000282a1) bg_main_mobtv_pane

0x93d6,	// (0x0002ec78) main_mobtv_info_pane

0x93e1,	// (0x0002ec83) main_mobtv_loading_pane_ParamLimits

0x93e1,	// (0x0002ec83) main_mobtv_loading_pane

0xdecf,	// (0x00033771) main_mobtv_pg_channel_list_pane

0xded9,	// (0x0003377b) main_mobtv_pg_hdr_pane

0x93ee,	// (0x0002ec90) main_mobtv_programe_curr_pane_ParamLimits

0x93ee,	// (0x0002ec90) main_mobtv_programe_curr_pane

0x93fb,	// (0x0002ec9d) main_mobtv_programe_next_pane_ParamLimits

0x93fb,	// (0x0002ec9d) main_mobtv_programe_next_pane

0xdee2,	// (0x00033784) popup_mobtv_noti_window

0x34e7,	// (0x00028d89) main_tv_pg_hdr_pane_g1

0xdeec,	// (0x0003378e) main_tv_pg_hdr_pane_g2

0xdef4,	// (0x00033796) main_tv_pg_hdr_pane_g3

0xdefc,	// (0x0003379e) main_tv_pg_hdr_pane_g4

0xdf04,	// (0x000337a6) main_tv_pg_hdr_pane_g5

0xdf0e,	// (0x000337b0) main_tv_pg_hdr_pane_g6

0xdf18,	// (0x000337ba) main_tv_pg_hdr_pane_g7

0xdf22,	// (0x000337c4) main_tv_pg_hdr_pane_g8

0xdf2c,	// (0x000337ce) main_tv_pg_hdr_pane_g9

0xdf36,	// (0x000337d8) main_tv_pg_hdr_pane_g10

0xdf40,	// (0x000337e2) main_tv_pg_hdr_pane_g11

0x000a,

0xfb85,	// (0x00035427) main_tv_pg_hdr_pane_g

0xdf4a,	// (0x000337ec) main_tv_pg_hdr_pane_t1

0xdf58,	// (0x000337fa) main_tv_pg_hdr_pane_t2

0xdf66,	// (0x00033808) main_tv_pg_hdr_pane_t3

0xdf76,	// (0x00033818) main_tv_pg_hdr_pane_t4

0xdf86,	// (0x00033828) main_tv_pg_hdr_pane_t5

0x0004,

0xfb9c,	// (0x0003543e) main_tv_pg_hdr_pane_t

0xdf96,	// (0x00033838) single_mobtv_pg_channel_pane_ParamLimits

0xdf96,	// (0x00033838) single_mobtv_pg_channel_pane

0xdfa8,	// (0x0003384a) single_mobtv_pg_channel_table_pane

0xdfb1,	// (0x00033853) single_mobtv_pg_channel_thumb_pane

0xdfba,	// (0x0003385c) single_tv_pg_channel_pane_g1

0xdfc3,	// (0x00033865) single_tv_pg_channel_pane_g2

0x0001,

0xfba7,	// (0x00035449) single_tv_pg_channel_pane_g

0x29e3,	// (0x00028285) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x29e3,	// (0x00028285) bg_single_mobtv_pg_channel_thumb_pane

0xdfcc,	// (0x0003386e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfcc,	// (0x0003386e) single_mobtv_pg_channel_thumb_pane_g1

0xdfda,	// (0x0003387c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfda,	// (0x0003387c) single_mobtv_pg_channel_thumb_pane_g2

0xdfe6,	// (0x00033888) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfe6,	// (0x00033888) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbac,	// (0x0003544e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbac,	// (0x0003544e) single_mobtv_pg_channel_thumb_pane_g

0xdff2,	// (0x00033894) single_mobtv_pg_channel_thumb_pane_t1

0xe000,	// (0x000338a2) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb3,	// (0x00035455) single_mobtv_pg_channel_thumb_pane_t

0x34e7,	// (0x00028d89) bg_single_mobtv_pg_channel_table_pane_g1

0x34e7,	// (0x00028d89) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3d8,	// (0x00034c7a) bg_single_mobtv_pg_channel_table_pane_g

0xe00e,	// (0x000338b0) single_mobtv_pg_channel_table_pane_t1

0xe01c,	// (0x000338be) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb8,	// (0x0003545a) single_mobtv_pg_channel_table_pane_t

0x9410,	// (0x0002ecb2) main_mobtv_info_pane_g1_ParamLimits

0x9410,	// (0x0002ecb2) main_mobtv_info_pane_g1

0x942e,	// (0x0002ecd0) main_mobtv_info_pane_t1_ParamLimits

0x942e,	// (0x0002ecd0) main_mobtv_info_pane_t1

0x94a6,	// (0x0002ed48) main_mobtv_info_pane_t2_ParamLimits

0x94a6,	// (0x0002ed48) main_mobtv_info_pane_t2

0x0002,

0xfbc2,	// (0x00035464) main_mobtv_info_pane_t_ParamLimits

0xfbc2,	// (0x00035464) main_mobtv_info_pane_t

0x9537,	// (0x0002edd9) wait_bar_pane_cp05

0x9549,	// (0x0002edeb) main_mobtv_loading_pane_g1_ParamLimits

0x9549,	// (0x0002edeb) main_mobtv_loading_pane_g1

0x955a,	// (0x0002edfc) main_mobtv_loading_pane_g2_ParamLimits

0x955a,	// (0x0002edfc) main_mobtv_loading_pane_g2

0x9566,	// (0x0002ee08) main_mobtv_loading_pane_g3_ParamLimits

0x9566,	// (0x0002ee08) main_mobtv_loading_pane_g3

0x0002,

0xfbc9,	// (0x0003546b) main_mobtv_loading_pane_g_ParamLimits

0xfbc9,	// (0x0003546b) main_mobtv_loading_pane_g

0xe02a,	// (0x000338cc) main_mobtv_loading_pane_t1_ParamLimits

0xe02a,	// (0x000338cc) main_mobtv_loading_pane_t1

0xe042,	// (0x000338e4) main_mobtv_loading_pane_t2_ParamLimits

0xe042,	// (0x000338e4) main_mobtv_loading_pane_t2

0x0001,

0xfbd0,	// (0x00035472) main_mobtv_loading_pane_t_ParamLimits

0xfbd0,	// (0x00035472) main_mobtv_loading_pane_t

0x9579,	// (0x0002ee1b) wait_bar_pane_cp06_ParamLimits

0x9579,	// (0x0002ee1b) wait_bar_pane_cp06

0xe066,	// (0x00033908) main_mobtv_programe_curr_pane_t1

0xe074,	// (0x00033916) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbd5,	// (0x00035477) main_mobtv_programe_curr_pane_t

0xe082,	// (0x00033924) main_mobtv_programe_next_pane_t1

0xe090,	// (0x00033932) main_mobtv_programe_next_pane_t2

0xe09e,	// (0x00033940) main_mobtv_programe_next_pane_t3

0x0002,

0xfbda,	// (0x0003547c) main_mobtv_programe_next_pane_t

0x2244,	// (0x00027ae6) bg_popup_mobtv_noti_window_pane

0xe0ac,	// (0x0003394e) popup_mobtv_noti_window_g1

0xe0b4,	// (0x00033956) popup_mobtv_noti_window_t1

0xe0c2,	// (0x00033964) popup_mobtv_noti_window_t2

0x0001,

0xfbe1,	// (0x00035483) popup_mobtv_noti_window_t

0x34e7,	// (0x00028d89) bg_popup_mobtv_noti_window_pane_g1

0xb3f9,	// (0x00030c9b) sc_clock_pane

0xb3f9,	// (0x00030c9b) main_fs_bigclock_pane

0x8caf,	// (0x0002e551) blid2_tripm_pane_t4_ParamLimits

0x8caf,	// (0x0002e551) blid2_tripm_pane_t4

0x9588,	// (0x0002ee2a) sc_clock_pane_g1_ParamLimits

0x9588,	// (0x0002ee2a) sc_clock_pane_g1

0x959a,	// (0x0002ee3c) sc_clock_pane_t1_ParamLimits

0x959a,	// (0x0002ee3c) sc_clock_pane_t1

0x95be,	// (0x0002ee60) sc_clock_pane_t2_ParamLimits

0x95be,	// (0x0002ee60) sc_clock_pane_t2

0x95d6,	// (0x0002ee78) sc_clock_pane_t3_ParamLimits

0x95d6,	// (0x0002ee78) sc_clock_pane_t3

0x0004,

0xfbe6,	// (0x00035488) sc_clock_pane_t_ParamLimits

0xfbe6,	// (0x00035488) sc_clock_pane_t

0xa484,	// (0x0002fd26) main_fs_bigclock_indicator_pane_ParamLimits

0xa484,	// (0x0002fd26) main_fs_bigclock_indicator_pane

0x969c,	// (0x0002ef3e) main_fs_bigclock_pane_g1_ParamLimits

0x969c,	// (0x0002ef3e) main_fs_bigclock_pane_g1

0xa490,	// (0x0002fd32) main_fs_bigclock_pane_t1_ParamLimits

0xa490,	// (0x0002fd32) main_fs_bigclock_pane_t1

0xa4a2,	// (0x0002fd44) main_fs_bigclock_pane_t2_ParamLimits

0xa4a2,	// (0x0002fd44) main_fs_bigclock_pane_t2

0xa4b6,	// (0x0002fd58) main_fs_bigclock_pane_t3_ParamLimits

0xa4b6,	// (0x0002fd58) main_fs_bigclock_pane_t3

0x0002,

0xfd77,	// (0x00035619) main_fs_bigclock_pane_t_ParamLimits

0xfd77,	// (0x00035619) main_fs_bigclock_pane_t

0xeb5d,	// (0x000343ff) main_fs_bigclock_indicator_pane_g1

0xddd6,	// (0x00033678) ncim_query_content_pane_g2_ParamLimits

0xddd6,	// (0x00033678) ncim_query_content_pane_g2

0x0001,

0xfb73,	// (0x00035415) ncim_query_content_pane_g_ParamLimits

0xfb73,	// (0x00035415) ncim_query_content_pane_g

0x95ed,	// (0x0002ee8f) sc_clock_pane_t4_ParamLimits

0x95ed,	// (0x0002ee8f) sc_clock_pane_t4

0xb3eb,	// (0x00030c8d) main_radioblah_pane

0xcf92,	// (0x00032834) cell_call4_button_pane_t1_copy1_ParamLimits

0xcf92,	// (0x00032834) cell_call4_button_pane_t1_copy1

0x91e0,	// (0x0002ea82) main_ncimui_pane_t1_ParamLimits

0x91e0,	// (0x0002ea82) main_ncimui_pane_t1

0x91fa,	// (0x0002ea9c) main_ncimui_pane_t2_ParamLimits

0x91fa,	// (0x0002ea9c) main_ncimui_pane_t2

0x0002,

0xfb6c,	// (0x0003540e) main_ncimui_pane_t_ParamLimits

0xfb6c,	// (0x0003540e) main_ncimui_pane_t

0xe0d0,	// (0x00033972) main_radioblah_anim_pane_ParamLimits

0xe0d0,	// (0x00033972) main_radioblah_anim_pane

0xe0e1,	// (0x00033983) main_radioblah_info_pane_ParamLimits

0xe0e1,	// (0x00033983) main_radioblah_info_pane

0xe0f5,	// (0x00033997) main_radioblah_pane_t1_ParamLimits

0xe0f5,	// (0x00033997) main_radioblah_pane_t1

0xe111,	// (0x000339b3) main_radioblah_pane_t2_ParamLimits

0xe111,	// (0x000339b3) main_radioblah_pane_t2

0x0003,

0xfc07,	// (0x000354a9) main_radioblah_pane_t_ParamLimits

0xfc07,	// (0x000354a9) main_radioblah_pane_t

0x9845,	// (0x0002f0e7) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9845,	// (0x0002f0e7) main_radioblah_rocker_ctrl_pane

0xe159,	// (0x000339fb) main_radioblah_info_pane_t1_ParamLimits

0xe159,	// (0x000339fb) main_radioblah_info_pane_t1

0x989d,	// (0x0002f13f) main_radioblah_info_pane_t2_ParamLimits

0x989d,	// (0x0002f13f) main_radioblah_info_pane_t2

0x0003,

0xfc10,	// (0x000354b2) main_radioblah_info_pane_t_ParamLimits

0xfc10,	// (0x000354b2) main_radioblah_info_pane_t

0x34e7,	// (0x00028d89) main_radioblah_rocker_ctrl_pane_g1

0x994d,	// (0x0002f1ef) main_radioblah_rocker_ctrl_pane_g2

0x9955,	// (0x0002f1f7) main_radioblah_rocker_ctrl_pane_g3

0x995d,	// (0x0002f1ff) main_radioblah_rocker_ctrl_pane_g4

0x9965,	// (0x0002f207) main_radioblah_rocker_ctrl_pane_g5

0x996d,	// (0x0002f20f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc19,	// (0x000354bb) main_radioblah_rocker_ctrl_pane_g

0x8f0a,	// (0x0002e7ac) main_cset_text2_pane_t1_copy1_ParamLimits

0xd022,	// (0x000328c4) cam4_image_uncrop_qvga_pane

0xd099,	// (0x0003293b) vid4_image_uncrop_qcif_pane

0xd9df,	// (0x00033281) cam6_image_uncrop_qvga_pane_ParamLimits

0xd9df,	// (0x00033281) cam6_image_uncrop_qvga_pane

0xdab5,	// (0x00033357) vid6_image_uncrop_qcif_pane_ParamLimits

0xdab5,	// (0x00033357) vid6_image_uncrop_qcif_pane

0x2244,	// (0x00027ae6) bg_popup_preview_window_pane_cp03

0xdd88,	// (0x0003362a) list_cset_text2_pane

0xdd90,	// (0x00033632) main_cset6_text2_pane_g1

0xdd98,	// (0x0003363a) main_cset6_text2_pane_t1

0xe193,	// (0x00033a35) list_cset_text2_pane_t1_ParamLimits

0xe193,	// (0x00033a35) list_cset_text2_pane_t1

0xb3eb,	// (0x00030c8d) main_radioblah_pane_ParamLimits

0x9523,	// (0x0002edc5) main_mobtv_info_pane_t3_ParamLimits

0x9523,	// (0x0002edc5) main_mobtv_info_pane_t3

0x9833,	// (0x0002f0d5) main_radioblah_pane_g1

0x986d,	// (0x0002f10f) main_radioblah_info_pane_g1

0x98f2,	// (0x0002f194) main_radioblah_info_pane_t3_ParamLimits

0x98f2,	// (0x0002f194) main_radioblah_info_pane_t3

0x48c9,	// (0x0002a16b) highlight_cell_cale_month_pane_ParamLimits

0x48c9,	// (0x0002a16b) highlight_cell_cale_month_pane

0xb3f9,	// (0x00030c9b) main_phob_fisheye_pane

0xc7b1,	// (0x00032053) scroll_pane_cp0031_ParamLimits

0xc7b1,	// (0x00032053) scroll_pane_cp0031

0xdbc7,	// (0x00033469) wait_bar_pane_cp08_ParamLimits

0x8f93,	// (0x0002e835) cset_list_set_pane_copy1_ParamLimits

0xe1ad,	// (0x00033a4f) highlight_cell_cale_month_pane_g1

0x9975,	// (0x0002f217) highlight_cell_cale_month_pane_t1

0xd75a,	// (0x00032ffc) list_gen_pane_cp01

0xd2ca,	// (0x00032b6c) scroll_pane_01

0x9983,	// (0x0002f225) list_single_double_fisheye_pane

0x998c,	// (0x0002f22e) list_double_fisheye_pane_g1_ParamLimits

0x998c,	// (0x0002f22e) list_double_fisheye_pane_g1

0x9998,	// (0x0002f23a) list_double_fisheye_pane_g2_ParamLimits

0x9998,	// (0x0002f23a) list_double_fisheye_pane_g2

0x99ac,	// (0x0002f24e) list_double_fisheye_pane_g3_ParamLimits

0x99ac,	// (0x0002f24e) list_double_fisheye_pane_g3

0x0004,

0xfc26,	// (0x000354c8) list_double_fisheye_pane_g_ParamLimits

0xfc26,	// (0x000354c8) list_double_fisheye_pane_g

0x99d5,	// (0x0002f277) list_double_fisheye_pane_t1_ParamLimits

0x99d5,	// (0x0002f277) list_double_fisheye_pane_t1

0x99f0,	// (0x0002f292) list_double_fisheye_pane_t2_ParamLimits

0x99f0,	// (0x0002f292) list_double_fisheye_pane_t2

0x0001,

0xfc31,	// (0x000354d3) list_double_fisheye_pane_t_ParamLimits

0xfc31,	// (0x000354d3) list_double_fisheye_pane_t

0xb3f9,	// (0x00030c9b) main_call5_pane

0x9618,	// (0x0002eeba) sc_swipe_pane_ParamLimits

0x9618,	// (0x0002eeba) sc_swipe_pane

0x9a25,	// (0x0002f2c7) call5_image_pane_ParamLimits

0x9a25,	// (0x0002f2c7) call5_image_pane

0x9a42,	// (0x0002f2e4) call5_swipe_1_pane_ParamLimits

0x9a42,	// (0x0002f2e4) call5_swipe_1_pane

0x9a55,	// (0x0002f2f7) call5_swipe_2_pane_ParamLimits

0x9a55,	// (0x0002f2f7) call5_swipe_2_pane

0x9a80,	// (0x0002f322) popup_call5_audio_first_window_ParamLimits

0x9a80,	// (0x0002f322) popup_call5_audio_first_window

0x29e3,	// (0x00028285) call5_swipe_1_pane_g1_ParamLimits

0x29e3,	// (0x00028285) call5_swipe_1_pane_g1

0xe1b5,	// (0x00033a57) call5_swipe_1_pane_g2_ParamLimits

0xe1b5,	// (0x00033a57) call5_swipe_1_pane_g2

0x0001,

0xfc36,	// (0x000354d8) call5_swipe_1_pane_g_ParamLimits

0xfc36,	// (0x000354d8) call5_swipe_1_pane_g

0xe1c1,	// (0x00033a63) call5_swipe_1_pane_t1_ParamLimits

0xe1c1,	// (0x00033a63) call5_swipe_1_pane_t1

0x29e3,	// (0x00028285) call5_swipe_2_pane_g1_ParamLimits

0x29e3,	// (0x00028285) call5_swipe_2_pane_g1

0xe1d6,	// (0x00033a78) call5_swipe_2_pane_g2_ParamLimits

0xe1d6,	// (0x00033a78) call5_swipe_2_pane_g2

0x0001,

0xfc3b,	// (0x000354dd) call5_swipe_2_pane_g_ParamLimits

0xfc3b,	// (0x000354dd) call5_swipe_2_pane_g

0xe1e2,	// (0x00033a84) call5_swipe_2_pane_t1_ParamLimits

0xe1e2,	// (0x00033a84) call5_swipe_2_pane_t1

0xe1f7,	// (0x00033a99) sc_swipe_pane_g1_ParamLimits

0xe1f7,	// (0x00033a99) sc_swipe_pane_g1

0xe204,	// (0x00033aa6) sc_swipe_pane_g2_ParamLimits

0xe204,	// (0x00033aa6) sc_swipe_pane_g2

0x0001,

0xfc40,	// (0x000354e2) sc_swipe_pane_g_ParamLimits

0xfc40,	// (0x000354e2) sc_swipe_pane_g

0xe210,	// (0x00033ab2) sc_swipe_pane_t1_ParamLimits

0xe210,	// (0x00033ab2) sc_swipe_pane_t1

0xb3f9,	// (0x00030c9b) main_cmail_launcher_pane

0x9a95,	// (0x0002f337) aid_size_cell_cmail_l_ParamLimits

0x9a95,	// (0x0002f337) aid_size_cell_cmail_l

0x9aa3,	// (0x0002f345) grid_cmail_l_pane_ParamLimits

0x9aa3,	// (0x0002f345) grid_cmail_l_pane

0x9abc,	// (0x0002f35e) cell_cmail_l_pane_ParamLimits

0x9abc,	// (0x0002f35e) cell_cmail_l_pane

0xe225,	// (0x00033ac7) cell_cmail_l_pane_g1_ParamLimits

0xe225,	// (0x00033ac7) cell_cmail_l_pane_g1

0xe231,	// (0x00033ad3) cell_cmail_l_pane_t1_ParamLimits

0xe231,	// (0x00033ad3) cell_cmail_l_pane_t1

0xe247,	// (0x00033ae9) cell_cmail_l_pane_t2_ParamLimits

0xe247,	// (0x00033ae9) cell_cmail_l_pane_t2

0x0001,

0xfc45,	// (0x000354e7) cell_cmail_l_pane_t_ParamLimits

0xfc45,	// (0x000354e7) cell_cmail_l_pane_t

0x297c,	// (0x0002821e) grid_highlight_pane_cp018_ParamLimits

0x297c,	// (0x0002821e) grid_highlight_pane_cp018

0x0df7,	// (0x00026699) main2_pane_ParamLimits

0x0df7,	// (0x00026699) main2_pane

0x2c9d,	// (0x0002853f) popup_sp_fs_action_menu_bg_pane_g1

0x2ca5,	// (0x00028547) popup_sp_fs_action_menu_bg_pane_g2

0x2cad,	// (0x0002854f) popup_sp_fs_action_menu_bg_pane_g3

0x2cb5,	// (0x00028557) popup_sp_fs_action_menu_bg_pane_g4

0x2cbd,	// (0x0002855f) popup_sp_fs_action_menu_bg_pane_g5

0x2cc5,	// (0x00028567) popup_sp_fs_action_menu_bg_pane_g6

0x2ccd,	// (0x0002856f) popup_sp_fs_action_menu_bg_pane_g7

0x2cd5,	// (0x00028577) popup_sp_fs_action_menu_bg_pane_g8

0x2cdd,	// (0x0002857f) popup_sp_fs_action_menu_bg_pane_g9

0x2ce5,	// (0x00028587) popup_sp_fs_action_menu_bg_pane_g10

0x2ce5,	// (0x00028587) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x000349e7) popup_sp_fs_action_menu_bg_pane_g

0x29e3,	// (0x00028285) list_medium_line_x2_t3_g3_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t3_g3_g1

0x29e3,	// (0x00028285) list_medium_line_x2_t3_g3_g2_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t3_g3_g2

0x29e3,	// (0x00028285) list_medium_line_x2_t3_g3_g3_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x00034a95) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x00034a95) list_medium_line_x2_t3_g3_g

0x3363,	// (0x00028c05) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t3_g3_t1

0x3363,	// (0x00028c05) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t3_g3_t2

0x3363,	// (0x00028c05) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x00034a9c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x00034a9c) list_medium_line_x2_t3_g3_t

0x29e3,	// (0x00028285) list_medium_line_x2_t3_g2_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t3_g2_g1

0x29e3,	// (0x00028285) list_medium_line_x2_t3_g2_g2_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x00034aa3) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x00034aa3) list_medium_line_x2_t3_g2_g

0x3363,	// (0x00028c05) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t3_g2_t1

0x3363,	// (0x00028c05) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t3_g2_t2

0x3363,	// (0x00028c05) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x00034a9c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x00034a9c) list_medium_line_x2_t3_g2_t

0x29e3,	// (0x00028285) list_medium_line_x2_t4_g4_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t4_g4_g1

0x29e3,	// (0x00028285) list_medium_line_x2_t4_g4_g2_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t4_g4_g2

0x29e3,	// (0x00028285) list_medium_line_x2_t4_g4_g3_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t4_g4_g3

0x29e3,	// (0x00028285) list_medium_line_x2_t4_g4_g4_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x00034aa8) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x00034aa8) list_medium_line_x2_t4_g4_g

0x3363,	// (0x00028c05) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t4_g4_t1

0x3363,	// (0x00028c05) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t4_g4_t2

0x3363,	// (0x00028c05) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t4_g4_t3

0x3363,	// (0x00028c05) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x00034ab1) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x00034ab1) list_medium_line_x2_t4_g4_t

0x29e3,	// (0x00028285) list_medium_line_x2_t2_g4_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t2_g4_g1

0x29e3,	// (0x00028285) list_medium_line_x2_t2_g4_g2_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t2_g4_g2

0x29e3,	// (0x00028285) list_medium_line_x2_t2_g4_g3_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t2_g4_g3

0x29e3,	// (0x00028285) list_medium_line_x2_t2_g4_g4_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x00034aa8) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x00034aa8) list_medium_line_x2_t2_g4_g

0x3363,	// (0x00028c05) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t2_g4_t1

0x3363,	// (0x00028c05) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1d6,	// (0x00034a78) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1d6,	// (0x00034a78) list_medium_line_x2_t2_g4_t

0x29e3,	// (0x00028285) list_medium_line_x2_t2_g3_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t2_g3_g1

0x29e3,	// (0x00028285) list_medium_line_x2_t2_g3_g2_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t2_g3_g2

0x29e3,	// (0x00028285) list_medium_line_x2_t2_g3_g3_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x00034a95) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x00034a95) list_medium_line_x2_t2_g3_g

0x3363,	// (0x00028c05) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t2_g3_t1

0x3363,	// (0x00028c05) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1d6,	// (0x00034a78) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1d6,	// (0x00034a78) list_medium_line_x2_t2_g3_t

0x4c45,	// (0x0002a4e7) main_sp_fs_list_pane_ParamLimits

0x4c45,	// (0x0002a4e7) main_sp_fs_list_pane

0xb4c9,	// (0x00030d6b) sp_fs_scroll_pane_ParamLimits

0xb4c9,	// (0x00030d6b) sp_fs_scroll_pane

0x4c51,	// (0x0002a4f3) list_medium_line_x2_t3_t1

0x4c51,	// (0x0002a4f3) list_medium_line_x2_t3_t2

0x4c51,	// (0x0002a4f3) list_medium_line_x2_t3_t3

0x0002,

0xf2bc,	// (0x00034b5e) list_medium_line_x2_t3_t

0x4c51,	// (0x0002a4f3) list_medium_line_x3_t4_t1

0x4c51,	// (0x0002a4f3) list_medium_line_x3_t4_t2

0x4c51,	// (0x0002a4f3) list_medium_line_x3_t4_t3

0x4c51,	// (0x0002a4f3) list_medium_line_x3_t4_t4

0x0003,

0xf2c3,	// (0x00034b65) list_medium_line_x3_t4_t

0x4c51,	// (0x0002a4f3) list_medium_line_x4_t5_t1

0x4c51,	// (0x0002a4f3) list_medium_line_x4_t5_t2

0x4c51,	// (0x0002a4f3) list_medium_line_x4_t5_t3

0x4c51,	// (0x0002a4f3) list_medium_line_x4_t5_t4

0x4c51,	// (0x0002a4f3) list_medium_line_x4_t5_t5

0x0004,

0xf2cc,	// (0x00034b6e) list_medium_line_x4_t5_t

0x29e3,	// (0x00028285) list_medium_line_t4_g4_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_t4_g4_g1

0x29e3,	// (0x00028285) list_medium_line_t4_g4_g2_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_t4_g4_g2

0x29e3,	// (0x00028285) list_medium_line_t4_g4_g3_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_t4_g4_g3

0x29e3,	// (0x00028285) list_medium_line_t4_g4_g4_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x00034aa8) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x00034aa8) list_medium_line_t4_g4_g

0x3363,	// (0x00028c05) list_medium_line_t4_g4_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t4_g4_t1

0x3363,	// (0x00028c05) list_medium_line_t4_g4_t2_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t4_g4_t2

0x3363,	// (0x00028c05) list_medium_line_t4_g4_t3_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t4_g4_t3

0x3363,	// (0x00028c05) list_medium_line_t4_g4_t4_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x00034ab1) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x00034ab1) list_medium_line_t4_g4_t

0x4f68,	// (0x0002a80a) chi_dic_find_pane_g1

0x1288,	// (0x00026b2a) main_tport_pane

0x4c51,	// (0x0002a4f3) list_medium_line_plain_t1

0x29e3,	// (0x00028285) list_medium_line_t2_g2_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_t2_g2_g1

0x29e3,	// (0x00028285) list_medium_line_t2_g2_g2_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x00034aa3) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x00034aa3) list_medium_line_t2_g2_g

0x3363,	// (0x00028c05) list_medium_line_t2_g2_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t2_g2_t1

0x3363,	// (0x00028c05) list_medium_line_t2_g2_t2_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t2_g2_t2

0x0001,

0xf1d6,	// (0x00034a78) list_medium_line_t2_g2_t_ParamLimits

0xf1d6,	// (0x00034a78) list_medium_line_t2_g2_t

0xd7ff,	// (0x000330a1) aid_sp_fs_list_icon_a_sm

0xd807,	// (0x000330a9) aid_sp_fs_list_icon_d

0xd80f,	// (0x000330b1) aid_sp_fs_text_primary

0xd818,	// (0x000330ba) aid_sp_fs_text_secondary

0x2244,	// (0x00027ae6) list_medium_line

0x2244,	// (0x00027ae6) list_medium_line_g2

0x2244,	// (0x00027ae6) list_medium_line_g3

0x2244,	// (0x00027ae6) list_medium_line_plain

0x2244,	// (0x00027ae6) list_medium_line_plain_t2

0x2244,	// (0x00027ae6) list_medium_line_plain_t3

0x2244,	// (0x00027ae6) list_medium_line_right_icon

0x2244,	// (0x00027ae6) list_medium_line_right_iconx2

0x2244,	// (0x00027ae6) list_medium_line_t2

0x2244,	// (0x00027ae6) list_medium_line_t2_g2

0x2244,	// (0x00027ae6) list_medium_line_t2_g3

0x2244,	// (0x00027ae6) list_medium_line_t2_right_icon

0x2244,	// (0x00027ae6) list_medium_line_t2_right_iconx2

0x2244,	// (0x00027ae6) list_medium_line_t3

0x2244,	// (0x00027ae6) list_medium_line_t3_g2

0x2244,	// (0x00027ae6) list_medium_line_t3_g3

0x2244,	// (0x00027ae6) list_medium_line_t3_right_iconx2

0x2244,	// (0x00027ae6) list_medium_line_t4_g4

0x2244,	// (0x00027ae6) list_medium_line_x2

0x2244,	// (0x00027ae6) list_medium_line_x2_t2_g2

0x2244,	// (0x00027ae6) list_medium_line_x2_t2_g3

0x2244,	// (0x00027ae6) list_medium_line_x2_t2_g4

0x2244,	// (0x00027ae6) list_medium_line_x2_t3

0x2244,	// (0x00027ae6) list_medium_line_x2_t3_g2

0x2244,	// (0x00027ae6) list_medium_line_x2_t3_g3

0x2244,	// (0x00027ae6) list_medium_line_x2_t3_g4

0x2244,	// (0x00027ae6) list_medium_line_x2_t4_g2

0x2244,	// (0x00027ae6) list_medium_line_x2_t4_g4

0x2244,	// (0x00027ae6) list_medium_line_x3

0x2244,	// (0x00027ae6) list_medium_line_x3_t4

0x2244,	// (0x00027ae6) list_medium_line_x3_t4_g4

0x2244,	// (0x00027ae6) list_medium_line_x4_t4

0x2244,	// (0x00027ae6) list_medium_line_x4_t4_g7

0x2244,	// (0x00027ae6) list_medium_line_x4_t5

0x8aa1,	// (0x0002e343) list_single_fs_dyc_pane_ParamLimits

0x8aa1,	// (0x0002e343) list_single_fs_dyc_pane

0x29e3,	// (0x00028285) list_medium_line_x4_t4_g7_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x4_t4_g7_g1

0x29e3,	// (0x00028285) list_medium_line_x4_t4_g7_g2_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x4_t4_g7_g2

0x29e3,	// (0x00028285) list_medium_line_x4_t4_g7_g3_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x4_t4_g7_g3

0x29e3,	// (0x00028285) list_medium_line_x4_t4_g7_g4_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x4_t4_g7_g4

0x29e3,	// (0x00028285) list_medium_line_x4_t4_g7_g5_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x4_t4_g7_g5

0x29e3,	// (0x00028285) list_medium_line_x4_t4_g7_g6_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x4_t4_g7_g6

0x29f1,	// (0x00028293) list_medium_line_x4_t4_g7_g7_ParamLimits

0x29f1,	// (0x00028293) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb4d,	// (0x000353ef) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb4d,	// (0x000353ef) list_medium_line_x4_t4_g7_g

0x3363,	// (0x00028c05) list_medium_line_x4_t4_g7_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x4_t4_g7_t1

0x3363,	// (0x00028c05) list_medium_line_x4_t4_g7_t2_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x4_t4_g7_t2

0x3363,	// (0x00028c05) list_medium_line_x4_t4_g7_t3_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x4_t4_g7_t3

0x54fd,	// (0x0002ad9f) list_medium_line_x4_t4_g7_t4_ParamLimits

0x54fd,	// (0x0002ad9f) list_medium_line_x4_t4_g7_t4

0x54fd,	// (0x0002ad9f) list_medium_line_x4_t4_g7_t5_ParamLimits

0x54fd,	// (0x0002ad9f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb5c,	// (0x000353fe) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb5c,	// (0x000353fe) list_medium_line_x4_t4_g7_t

0x9197,	// (0x0002ea39) list_single_dyc_row_pane_ParamLimits

0x9197,	// (0x0002ea39) list_single_dyc_row_pane

0x9a12,	// (0x0002f2b4) call5_gesture_pane_ParamLimits

0x9a12,	// (0x0002f2b4) call5_gesture_pane

0x9a68,	// (0x0002f30a) call5_windows_pane_ParamLimits

0x9a68,	// (0x0002f30a) call5_windows_pane

0x9ace,	// (0x0002f370) call5_swipe_1_pane_cp_ParamLimits

0x9ace,	// (0x0002f370) call5_swipe_1_pane_cp

0x9ada,	// (0x0002f37c) call5_swipe_2_pane_cp_ParamLimits

0x9ada,	// (0x0002f37c) call5_swipe_2_pane_cp

0x32f6,	// (0x00028b98) call5_image_pane_cp

0x9ae6,	// (0x0002f388) popup_call5_audio_first_window_cp_ParamLimits

0x9ae6,	// (0x0002f388) popup_call5_audio_first_window_cp

0xe1f7,	// (0x00033a99) call5_swipe_1_pane_g1_cp_ParamLimits

0xe1f7,	// (0x00033a99) call5_swipe_1_pane_g1_cp

0xe264,	// (0x00033b06) call5_swipe_1_pane_g2_cp

0xe210,	// (0x00033ab2) call5_swipe_1_pane_t1_cp_ParamLimits

0xe210,	// (0x00033ab2) call5_swipe_1_pane_t1_cp

0xe1f7,	// (0x00033a99) call5_swipe_2_pane_g1_cp_ParamLimits

0xe1f7,	// (0x00033a99) call5_swipe_2_pane_g1_cp

0xe26c,	// (0x00033b0e) call5_swipe_2_pane_g2_cp

0xe274,	// (0x00033b16) call5_swipe_2_pane_t1_cp_ParamLimits

0xe274,	// (0x00033b16) call5_swipe_2_pane_t1_cp

0x297c,	// (0x0002821e) main_sp_fs_email_pane

0xe289,	// (0x00033b2b) main_sp_fs_listscroll_pane_te

0x9af4,	// (0x0002f396) popup_sp_fs_action_menu_pane_ParamLimits

0x9af4,	// (0x0002f396) popup_sp_fs_action_menu_pane

0x34e7,	// (0x00028d89) bg_sp_fs_ctrlbar_pane_g1

0xe292,	// (0x00033b34) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe29b,	// (0x00033b3d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe2a4,	// (0x00033b46) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x34e7,	// (0x00028d89) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc4a,	// (0x000354ec) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc2b6,	// (0x00031b58) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc2b6,	// (0x00031b58) bg_sp_fs_ctrlbar_ddmenu_pane

0xe2ad,	// (0x00033b4f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe2ad,	// (0x00033b4f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2b9,	// (0x00033b5b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe2b9,	// (0x00033b5b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc53,	// (0x000354f5) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc53,	// (0x000354f5) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe2c5,	// (0x00033b67) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe2c5,	// (0x00033b67) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x34e7,	// (0x00028d89) list_medium_line_t2_right_icon_g1

0x4c51,	// (0x0002a4f3) list_medium_line_t2_right_icon_t1

0x4c51,	// (0x0002a4f3) list_medium_line_t2_right_icon_t2

0x0001,

0xfc58,	// (0x000354fa) list_medium_line_t2_right_icon_t

0x5511,	// (0x0002adb3) bg_sp_fs_ctrlbar_pane_ParamLimits

0x5511,	// (0x0002adb3) bg_sp_fs_ctrlbar_pane

0x9b87,	// (0x0002f429) main_sp_fs_ctrlbar_button_pane_cp01

0x9b91,	// (0x0002f433) main_sp_fs_ctrlbar_ddmenu_pane

0xe319,	// (0x00033bbb) main_sp_fs_ctrlbar_pane_g1

0xe325,	// (0x00033bc7) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc5d,	// (0x000354ff) main_sp_fs_ctrlbar_pane_g

0x9bcf,	// (0x0002f471) main_sp_fs_ctrlbar_pane_t1

0x9c0e,	// (0x0002f4b0) main_sp_fs_ctrlbar_pane

0x9c32,	// (0x0002f4d4) main_sp_fs_listscroll_pane_te_cp01

0x9c52,	// (0x0002f4f4) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9c52,	// (0x0002f4f4) popup_sp_fs_action_menu_pane_cp01

0x297c,	// (0x0002821e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x297c,	// (0x0002821e) bg_sp_fs_highlight_list_pane_cp01

0xe34c,	// (0x00033bee) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe34c,	// (0x00033bee) sp_fs_action_menu_list_gene_pane_g1

0xe35b,	// (0x00033bfd) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe35b,	// (0x00033bfd) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc6b,	// (0x0003550d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc6b,	// (0x0003550d) sp_fs_action_menu_list_gene_pane_g

0xe368,	// (0x00033c0a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe368,	// (0x00033c0a) sp_fs_action_menu_list_gene_pane_t1

0xe380,	// (0x00033c22) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe380,	// (0x00033c22) sp_fs_action_menu_list_gene_pane

0xe3a3,	// (0x00033c45) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe3a3,	// (0x00033c45) popup_sp_fs_action_menu_bg_pane

0xe3b1,	// (0x00033c53) sp_fs_action_menu_list_pane_ParamLimits

0xe3b1,	// (0x00033c53) sp_fs_action_menu_list_pane

0x9c77,	// (0x0002f519) sp_fs_scroll_pane_cp01_ParamLimits

0x9c77,	// (0x0002f519) sp_fs_scroll_pane_cp01

0x4c51,	// (0x0002a4f3) list_medium_line_plain_t2_t1

0x4c51,	// (0x0002a4f3) list_medium_line_plain_t2_t2

0x0001,

0xfc58,	// (0x000354fa) list_medium_line_plain_t2_t

0x4c51,	// (0x0002a4f3) list_medium_line_plain_t3_t1

0x4c51,	// (0x0002a4f3) list_medium_line_plain_t3_t2

0x4c51,	// (0x0002a4f3) list_medium_line_plain_t3_t3

0x0002,

0xf2bc,	// (0x00034b5e) list_medium_line_plain_t3_t

0x29e3,	// (0x00028285) list_medium_line_x2_t2_g2_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t2_g2_g1

0x29e3,	// (0x00028285) list_medium_line_x2_t2_g2_g2_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x00034aa3) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x00034aa3) list_medium_line_x2_t2_g2_g

0x3363,	// (0x00028c05) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t2_g2_t1

0x3363,	// (0x00028c05) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1d6,	// (0x00034a78) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1d6,	// (0x00034a78) list_medium_line_x2_t2_g2_t

0x29e3,	// (0x00028285) list_medium_line_x2_t4_g2_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t4_g2_g1

0x29e3,	// (0x00028285) list_medium_line_x2_t4_g2_g2_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x00034aa3) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x00034aa3) list_medium_line_x2_t4_g2_g

0x3363,	// (0x00028c05) list_medium_line_x2_t4_g2_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t4_g2_t1

0x3363,	// (0x00028c05) list_medium_line_x2_t4_g2_t2_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t4_g2_t2

0x3363,	// (0x00028c05) list_medium_line_x2_t4_g2_t3_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t4_g2_t3

0x3363,	// (0x00028c05) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x00034ab1) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x00034ab1) list_medium_line_x2_t4_g2_t

0x34e7,	// (0x00028d89) list_medium_line_t3_right_iconx2_g1

0x34e7,	// (0x00028d89) list_medium_line_t3_right_iconx2_g2

0x34e7,	// (0x00028d89) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3dd,	// (0x00034c7f) list_medium_line_t3_right_iconx2_g

0x4c51,	// (0x0002a4f3) list_medium_line_t3_right_iconx2_t1

0x4c51,	// (0x0002a4f3) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc58,	// (0x000354fa) list_medium_line_t3_right_iconx2_t

0x29e3,	// (0x00028285) list_medium_line_x3_t4_g4_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x3_t4_g4_g1

0x29e3,	// (0x00028285) list_medium_line_x3_t4_g4_g2_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x3_t4_g4_g2

0x29e3,	// (0x00028285) list_medium_line_x3_t4_g4_g3_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x3_t4_g4_g3

0x29e3,	// (0x00028285) list_medium_line_x3_t4_g4_g4_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x00034aa8) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x00034aa8) list_medium_line_x3_t4_g4_g

0x3363,	// (0x00028c05) list_medium_line_x3_t4_g4_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x3_t4_g4_t1

0x3363,	// (0x00028c05) list_medium_line_x3_t4_g4_t2_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x3_t4_g4_t2

0x3363,	// (0x00028c05) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x3_t4_g4_t3

0x3363,	// (0x00028c05) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x00034ab1) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x00034ab1) list_medium_line_x3_t4_g4_t

0x9c9d,	// (0x0002f53f) list_single_dyc_row_text_pane_t1_ParamLimits

0x9c9d,	// (0x0002f53f) list_single_dyc_row_text_pane_t1

0x9ce6,	// (0x0002f588) list_single_dyc_row_text_pane_t2_ParamLimits

0x9ce6,	// (0x0002f588) list_single_dyc_row_text_pane_t2

0xe3d5,	// (0x00033c77) list_single_dyc_row_text_pane_t3_ParamLimits

0xe3d5,	// (0x00033c77) list_single_dyc_row_text_pane_t3

0x0005,

0xfc70,	// (0x00035512) list_single_dyc_row_text_pane_t_ParamLimits

0xfc70,	// (0x00035512) list_single_dyc_row_text_pane_t

0xe3f9,	// (0x00033c9b) list_single_dyc_row_pane_g1_ParamLimits

0xe3f9,	// (0x00033c9b) list_single_dyc_row_pane_g1

0xe405,	// (0x00033ca7) list_single_dyc_row_pane_g2_ParamLimits

0xe405,	// (0x00033ca7) list_single_dyc_row_pane_g2

0xe411,	// (0x00033cb3) list_single_dyc_row_pane_g3_ParamLimits

0xe411,	// (0x00033cb3) list_single_dyc_row_pane_g3

0xe41d,	// (0x00033cbf) list_single_dyc_row_pane_g4_ParamLimits

0xe41d,	// (0x00033cbf) list_single_dyc_row_pane_g4

0x0003,

0xfc7d,	// (0x0003551f) list_single_dyc_row_pane_g_ParamLimits

0xfc7d,	// (0x0003551f) list_single_dyc_row_pane_g

0xe429,	// (0x00033ccb) list_single_dyc_row_text_pane_ParamLimits

0xe429,	// (0x00033ccb) list_single_dyc_row_text_pane

0x2244,	// (0x00027ae6) bg_sp_fs_scroll_pane

0xe448,	// (0x00033cea) thumb_sp_fs_scroll_pane

0x29e3,	// (0x00028285) list_medium_line_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_g1

0x3363,	// (0x00028c05) list_medium_line_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t1

0x29e3,	// (0x00028285) list_medium_line_x2_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_g1

0x29e3,	// (0x00028285) list_medium_line_x2_g2_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x00034aa3) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x00034aa3) list_medium_line_x2_g

0x3363,	// (0x00028c05) list_medium_line_x2_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t1

0x29e3,	// (0x00028285) list_medium_line_x3_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x3_g1

0xd040,	// (0x000328e2) list_medium_line_x3_g2_ParamLimits

0xd040,	// (0x000328e2) list_medium_line_x3_g2

0x0001,

0xfc86,	// (0x00035528) list_medium_line_x3_g_ParamLimits

0xfc86,	// (0x00035528) list_medium_line_x3_g

0xe451,	// (0x00033cf3) list_medium_line_x3_t1_ParamLimits

0xe451,	// (0x00033cf3) list_medium_line_x3_t1

0xe465,	// (0x00033d07) thumb_sp_fs_scroll_pane_g1

0xe46e,	// (0x00033d10) thumb_sp_fs_scroll_pane_g2

0xe477,	// (0x00033d19) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc8b,	// (0x0003552d) thumb_sp_fs_scroll_pane_g

0xe465,	// (0x00033d07) bg_sp_fs_scroll_pane_g1

0xe46e,	// (0x00033d10) bg_sp_fs_scroll_pane_g2

0xe477,	// (0x00033d19) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc8b,	// (0x0003552d) bg_sp_fs_scroll_pane_g

0x29e3,	// (0x00028285) list_medium_line_x2_t3_g4_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t3_g4_g1

0x29e3,	// (0x00028285) list_medium_line_x2_t3_g4_g2_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t3_g4_g2

0x29e3,	// (0x00028285) list_medium_line_x2_t3_g4_g3_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t3_g4_g3

0x29e3,	// (0x00028285) list_medium_line_x2_t3_g4_g4_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x00034aa8) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x00034aa8) list_medium_line_x2_t3_g4_g

0x3363,	// (0x00028c05) list_medium_line_x2_t3_g4_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t3_g4_t1

0x3363,	// (0x00028c05) list_medium_line_x2_t3_g4_t2_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t3_g4_t2

0x3363,	// (0x00028c05) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x00034a9c) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x00034a9c) list_medium_line_x2_t3_g4_t

0x29e3,	// (0x00028285) list_medium_line_g2_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_g2_g1

0x29e3,	// (0x00028285) list_medium_line_g2_g2_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x00034aa3) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x00034aa3) list_medium_line_g2_g

0x3363,	// (0x00028c05) list_medium_line_g2_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_g2_t1

0x29e3,	// (0x00028285) list_medium_line_t3_g2_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_t3_g2_g1

0x29e3,	// (0x00028285) list_medium_line_t3_g2_g2_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x00034aa3) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x00034aa3) list_medium_line_t3_g2_g

0x3363,	// (0x00028c05) list_medium_line_t3_g2_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t3_g2_t1

0x3363,	// (0x00028c05) list_medium_line_t3_g2_t2_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t3_g2_t2

0x3363,	// (0x00028c05) list_medium_line_t3_g2_t3_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x00034a9c) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x00034a9c) list_medium_line_t3_g2_t

0x34e7,	// (0x00028d89) list_medium_line_right_icon_g1

0x4c51,	// (0x0002a4f3) list_medium_line_right_icon_t1

0x29e3,	// (0x00028285) list_medium_line_t2_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_t2_g1

0x3363,	// (0x00028c05) list_medium_line_t2_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t2_t1

0x3363,	// (0x00028c05) list_medium_line_t2_t2_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t2_t2

0x0001,

0xf1d6,	// (0x00034a78) list_medium_line_t2_t_ParamLimits

0xf1d6,	// (0x00034a78) list_medium_line_t2_t

0x29e3,	// (0x00028285) list_medium_line_t3_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_t3_g1

0x3363,	// (0x00028c05) list_medium_line_t3_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t3_t1

0x3363,	// (0x00028c05) list_medium_line_t3_t2_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t3_t2

0x3363,	// (0x00028c05) list_medium_line_t3_t3_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x00034a9c) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x00034a9c) list_medium_line_t3_t

0x29e3,	// (0x00028285) list_medium_line_g3_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_g3_g1

0x29e3,	// (0x00028285) list_medium_line_g3_g2_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_g3_g2

0x29e3,	// (0x00028285) list_medium_line_g3_g3_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x00034a95) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x00034a95) list_medium_line_g3_g

0x3363,	// (0x00028c05) list_medium_line_g3_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_g3_t1

0x29e3,	// (0x00028285) list_medium_line_t2_g3_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_t2_g3_g1

0x29e3,	// (0x00028285) list_medium_line_t2_g3_g2_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_t2_g3_g2

0x29e3,	// (0x00028285) list_medium_line_t2_g3_g3_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x00034a95) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x00034a95) list_medium_line_t2_g3_g

0x3363,	// (0x00028c05) list_medium_line_t2_g3_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t2_g3_t1

0x3363,	// (0x00028c05) list_medium_line_t2_g3_t2_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t2_g3_t2

0x0001,

0xf1d6,	// (0x00034a78) list_medium_line_t2_g3_t_ParamLimits

0xf1d6,	// (0x00034a78) list_medium_line_t2_g3_t

0x29e3,	// (0x00028285) list_medium_line_t3_g3_g1_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_t3_g3_g1

0x29e3,	// (0x00028285) list_medium_line_t3_g3_g2_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_t3_g3_g2

0x29e3,	// (0x00028285) list_medium_line_t3_g3_g3_ParamLimits

0x29e3,	// (0x00028285) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x00034a95) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x00034a95) list_medium_line_t3_g3_g

0x3363,	// (0x00028c05) list_medium_line_t3_g3_t1_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t3_g3_t1

0x3363,	// (0x00028c05) list_medium_line_t3_g3_t2_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t3_g3_t2

0x3363,	// (0x00028c05) list_medium_line_t3_g3_t3_ParamLimits

0x3363,	// (0x00028c05) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x00034a9c) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x00034a9c) list_medium_line_t3_g3_t

0x34e7,	// (0x00028d89) list_medium_line_right_iconx2_g1

0x34e7,	// (0x00028d89) list_medium_line_right_iconx2_g2

0x0001,

0xf3d8,	// (0x00034c7a) list_medium_line_right_iconx2_g

0x4c51,	// (0x0002a4f3) list_medium_line_right_iconx2_t1

0x34e7,	// (0x00028d89) list_medium_line_t2_right_iconx2_g1

0x34e7,	// (0x00028d89) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3d8,	// (0x00034c7a) list_medium_line_t2_right_iconx2_g

0x4c51,	// (0x0002a4f3) list_medium_line_t2_right_iconx2_t1

0x4c51,	// (0x0002a4f3) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc58,	// (0x000354fa) list_medium_line_t2_right_iconx2_t

0x4c51,	// (0x0002a4f3) list_medium_line_x4_t4_t1

0x4c51,	// (0x0002a4f3) list_medium_line_x4_t4_t2

0x4c51,	// (0x0002a4f3) list_medium_line_x4_t4_t3

0x4c51,	// (0x0002a4f3) list_medium_line_x4_t4_t4

0x0003,

0xf2c3,	// (0x00034b65) list_medium_line_x4_t4_t

0x9e5c,	// (0x0002f6fe) tport_appsw_pane_ParamLimits

0x9e5c,	// (0x0002f6fe) tport_appsw_pane

0x9e73,	// (0x0002f715) tport_contact_pane_ParamLimits

0x9e73,	// (0x0002f715) tport_contact_pane

0x9e8b,	// (0x0002f72d) tport_listscroll_pane_ParamLimits

0x9e8b,	// (0x0002f72d) tport_listscroll_pane

0x9e9f,	// (0x0002f741) cell_tport_appsw_pane_ParamLimits

0x9e9f,	// (0x0002f741) cell_tport_appsw_pane

0x54db,	// (0x0002ad7d) tport_appsw_pane_g1_ParamLimits

0x54db,	// (0x0002ad7d) tport_appsw_pane_g1

0xe480,	// (0x00033d22) tport_contact_pane_g1

0xe489,	// (0x00033d2b) tport_contact_pane_t1

0xe497,	// (0x00033d39) tport_contact_pane_t2

0x0001,

0xfc92,	// (0x00035534) tport_contact_pane_t

0xe4a5,	// (0x00033d47) list_tport_pane

0xe4ae,	// (0x00033d50) scroll_pane_cp_030

0x9ee9,	// (0x0002f78b) cell_tport_appsw_pane_g1

0x9ef9,	// (0x0002f79b) cell_tport_appsw_pane_t1

0x9f07,	// (0x0002f7a9) grid_highlight_pane_cp019

0x9f0f,	// (0x0002f7b1) list_tport_double_graphic_pane_ParamLimits

0x9f0f,	// (0x0002f7b1) list_tport_double_graphic_pane

0x297c,	// (0x0002821e) list_highlight_pane_cp023_ParamLimits

0x297c,	// (0x0002821e) list_highlight_pane_cp023

0x9f26,	// (0x0002f7c8) list_tport_double_graphic_pane_g1_ParamLimits

0x9f26,	// (0x0002f7c8) list_tport_double_graphic_pane_g1

0x9f33,	// (0x0002f7d5) list_tport_double_graphic_pane_t1_ParamLimits

0x9f33,	// (0x0002f7d5) list_tport_double_graphic_pane_t1

0x9f48,	// (0x0002f7ea) list_tport_double_graphic_pane_t2_ParamLimits

0x9f48,	// (0x0002f7ea) list_tport_double_graphic_pane_t2

0x0001,

0xfc9e,	// (0x00035540) list_tport_double_graphic_pane_t_ParamLimits

0xfc9e,	// (0x00035540) list_tport_double_graphic_pane_t

0x2244,	// (0x00027ae6) main_cale_note_pane

0x1e6d,	// (0x0002770f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1e6d,	// (0x0002770f) cell_vitu2_function_top_wide_pane_cp01

0x9537,	// (0x0002edd9) wait_bar_pane_cp05_ParamLimits

0x297c,	// (0x0002821e) listscroll_cmail_pane

0xe4b7,	// (0x00033d59) list_cmail_pane

0x9f5a,	// (0x0002f7fc) list_cmail_body_pane

0x9f71,	// (0x0002f813) list_single_cmail_header_caption_pane

0xe4c7,	// (0x00033d69) list_single_cmail_header_detail_pane_ParamLimits

0xe4c7,	// (0x00033d69) list_single_cmail_header_detail_pane

0xe4f9,	// (0x00033d9b) list_single_cmail_header_caption_pane_t1

0x9f8e,	// (0x0002f830) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9f8e,	// (0x0002f830) list_single_cmail_header_detail_pane_g1

0xe510,	// (0x00033db2) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe510,	// (0x00033db2) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca3,	// (0x00035545) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca3,	// (0x00035545) list_single_cmail_header_detail_pane_g

0xe529,	// (0x00033dcb) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe529,	// (0x00033dcb) list_single_cmail_header_detail_pane_t1

0xe589,	// (0x00033e2b) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe589,	// (0x00033e2b) list_single_cmail_header_editor_pane_bg

0xdfc3,	// (0x00033865) list_cmail_body_pane_g1

0xe5a0,	// (0x00033e42) list_cmail_body_pane_t1

0xd1ac,	// (0x00032a4e) list_single_cmail_header_editor_pane_bg_g1

0x3bbd,	// (0x0002945f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1bc,	// (0x00032a5e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1b4,	// (0x00032a56) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd417,	// (0x00032cb9) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1dc,	// (0x00032a7e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1cc,	// (0x00032a6e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1d4,	// (0x00032a76) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3b9d,	// (0x0002943f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9fa6,	// (0x0002f848) calenote_gesture_pane_ParamLimits

0x9fa6,	// (0x0002f848) calenote_gesture_pane

0x9fc6,	// (0x0002f868) calenote_window_pane_ParamLimits

0x9fc6,	// (0x0002f868) calenote_window_pane

0xe5ae,	// (0x00033e50) popup_note_window_cp01

0x9fe2,	// (0x0002f884) calenote_swipe_1_pane_ParamLimits

0x9fe2,	// (0x0002f884) calenote_swipe_1_pane

0x9ada,	// (0x0002f37c) calenote_swipe_2_pane_ParamLimits

0x9ada,	// (0x0002f37c) calenote_swipe_2_pane

0xe1f7,	// (0x00033a99) calenote_swipe_1_pane_g1_ParamLimits

0xe1f7,	// (0x00033a99) calenote_swipe_1_pane_g1

0xe204,	// (0x00033aa6) calenote_swipe_1_pane_g2_ParamLimits

0xe204,	// (0x00033aa6) calenote_swipe_1_pane_g2

0x0001,

0xfc40,	// (0x000354e2) calenote_swipe_1_pane_g_ParamLimits

0xfc40,	// (0x000354e2) calenote_swipe_1_pane_g

0xe5c0,	// (0x00033e62) calenote_swipe_1_pane_t1_ParamLimits

0xe5c0,	// (0x00033e62) calenote_swipe_1_pane_t1

0xe1f7,	// (0x00033a99) calenote_swipe_2_pane_g1_ParamLimits

0xe1f7,	// (0x00033a99) calenote_swipe_2_pane_g1

0xe5df,	// (0x00033e81) calenote_swipe_2_pane_g2_ParamLimits

0xe5df,	// (0x00033e81) calenote_swipe_2_pane_g2

0x0001,

0xfcaf,	// (0x00035551) calenote_swipe_2_pane_g_ParamLimits

0xfcaf,	// (0x00035551) calenote_swipe_2_pane_g

0xe5eb,	// (0x00033e8d) calenote_swipe_2_pane_t1_ParamLimits

0xe5eb,	// (0x00033e8d) calenote_swipe_2_pane_t1

0x2244,	// (0x00027ae6) main_mup_navstr_pane

0x74fd,	// (0x0002cd9f) main_mup3_pane_t7_ParamLimits

0x74fd,	// (0x0002cd9f) main_mup3_pane_t7

0xcd2f,	// (0x000325d1) main_mp4_pane_g6_ParamLimits

0xcd2f,	// (0x000325d1) main_mp4_pane_g6

0xcf80,	// (0x00032822) main_image3_pane_t4_ParamLimits

0xcf80,	// (0x00032822) main_image3_pane_t4

0x9ff7,	// (0x0002f899) popup_navstr_preview_pane_ParamLimits

0x9ff7,	// (0x0002f899) popup_navstr_preview_pane

0xa007,	// (0x0002f8a9) scroll_navstr_pane_ParamLimits

0xa007,	// (0x0002f8a9) scroll_navstr_pane

0x2244,	// (0x00027ae6) bg_popup_preview_window_pane_cp04

0xe612,	// (0x00033eb4) popup_navstr_preview_pane_t1

0xa01b,	// (0x0002f8bd) scroll_navstr_pane_g1_ParamLimits

0xa01b,	// (0x0002f8bd) scroll_navstr_pane_g1

0xa02f,	// (0x0002f8d1) scroll_navstr_pane_t1_ParamLimits

0xa02f,	// (0x0002f8d1) scroll_navstr_pane_t1

0xe5b7,	// (0x00033e59) bg_button_pane_cp014

0xe5b7,	// (0x00033e59) bg_button_pane_cp030

0x99b8,	// (0x0002f25a) list_double_fisheye_pane_g4_ParamLimits

0x99b8,	// (0x0002f25a) list_double_fisheye_pane_g4

0x99c4,	// (0x0002f266) list_double_fisheye_pane_g5_ParamLimits

0x99c4,	// (0x0002f266) list_double_fisheye_pane_g5

0xb4c9,	// (0x00030d6b) sp_fs_scroll_pane_cp03

0xe319,	// (0x00033bbb) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe325,	// (0x00033bc7) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc5d,	// (0x000354ff) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9bcf,	// (0x0002f471) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe4bf,	// (0x00033d61) sp_fs_scroll_pane_cp02

0x2d51,	// (0x000285f3) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2d51,	// (0x000285f3) popup_sp_fs_calendar_preview_list_single_pane

0x2244,	// (0x00027ae6) main_cam6_pano_pane

0xb3eb,	// (0x00030c8d) main_mup3_pane_ParamLimits

0x2244,	// (0x00027ae6) main_phacti_pane

0x9408,	// (0x0002ecaa) bg_button_pane_cp11

0x9422,	// (0x0002ecc4) main_mobtv_info_pane_g2_ParamLimits

0x9422,	// (0x0002ecc4) main_mobtv_info_pane_g2

0x0001,

0xfbbd,	// (0x0003545f) main_mobtv_info_pane_g_ParamLimits

0xfbbd,	// (0x0003545f) main_mobtv_info_pane_g

0x95ff,	// (0x0002eea1) sc_clock_pane_t5_ParamLimits

0x95ff,	// (0x0002eea1) sc_clock_pane_t5

0x9833,	// (0x0002f0d5) main_radioblah_pane_g1_ParamLimits

0xe129,	// (0x000339cb) main_radioblah_pane_t3_ParamLimits

0xe129,	// (0x000339cb) main_radioblah_pane_t3

0xe141,	// (0x000339e3) main_radioblah_pane_t4_ParamLimits

0xe141,	// (0x000339e3) main_radioblah_pane_t4

0x985b,	// (0x0002f0fd) main_radioblah_text_pane_ParamLimits

0x985b,	// (0x0002f0fd) main_radioblah_text_pane

0x986d,	// (0x0002f10f) main_radioblah_info_pane_g1_ParamLimits

0x9906,	// (0x0002f1a8) main_radioblah_info_pane_t4_ParamLimits

0x9906,	// (0x0002f1a8) main_radioblah_info_pane_t4

0x297c,	// (0x0002821e) main_sp_fs_calendar_pane

0xa046,	// (0x0002f8e8) main_phacti_pane_g1

0xa04e,	// (0x0002f8f0) phacti_note_pane_ParamLimits

0xa04e,	// (0x0002f8f0) phacti_note_pane

0xe629,	// (0x00033ecb) phacti_term_pane_ParamLimits

0xe629,	// (0x00033ecb) phacti_term_pane

0xe63e,	// (0x00033ee0) phacti_note_pane_t1_ParamLimits

0xe63e,	// (0x00033ee0) phacti_note_pane_t1

0xe655,	// (0x00033ef7) phacti_term_pane_g1

0xe65d,	// (0x00033eff) phacti_term_pane_t1_ParamLimits

0xe65d,	// (0x00033eff) phacti_term_pane_t1

0xe687,	// (0x00033f29) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe68f,	// (0x00033f31) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb9,	// (0x0003555b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe697,	// (0x00033f39) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe697,	// (0x00033f39) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe6ad,	// (0x00033f4f) aid_popup_sp_fs_bg_corner_pane

0x34e7,	// (0x00028d89) popup_sp_fs_calendar_preview_bg_pane_g1

0x2244,	// (0x00027ae6) popup_sp_fs_calendar_preview_bg_pane

0xe6b5,	// (0x00033f57) popup_sp_fs_calendar_preview_list_pane

0x5511,	// (0x0002adb3) bg_main_sp_fs_cale_pane_ParamLimits

0x5511,	// (0x0002adb3) bg_main_sp_fs_cale_pane

0xe6c6,	// (0x00033f68) listscroll_cale_mrui_pane_ParamLimits

0xe6c6,	// (0x00033f68) listscroll_cale_mrui_pane

0xe6db,	// (0x00033f7d) listscroll_sp_fs_schedule_track_pane

0xe6e4,	// (0x00033f86) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe6e4,	// (0x00033f86) main_sp_fs_ctrlbar_pane_cp01

0xe6f7,	// (0x00033f99) main_sp_fs_ribbon_pane

0xe6ff,	// (0x00033fa1) popup_sp_fs_cale_preview_window

0xa0c3,	// (0x0002f965) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa0c3,	// (0x0002f965) list_single_sp_fs_schedule_track_pane

0x297c,	// (0x0002821e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x297c,	// (0x0002821e) bg_sp_fs_highlight_list_pane_cp03

0xa0d7,	// (0x0002f979) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa0d7,	// (0x0002f979) list_single_sp_fs_schedule_track_pane_g1

0xa0e3,	// (0x0002f985) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa0e3,	// (0x0002f985) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbe,	// (0x00035560) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbe,	// (0x00035560) list_single_sp_fs_schedule_track_pane_g

0xa0ef,	// (0x0002f991) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa0ef,	// (0x0002f991) list_single_sp_fs_schedule_track_pane_t1

0xa111,	// (0x0002f9b3) sp_fs_schedule_track_pane_ParamLimits

0xa111,	// (0x0002f9b3) sp_fs_schedule_track_pane

0xe711,	// (0x00033fb3) sp_fs_schedule_track_pane_g1

0xe719,	// (0x00033fbb) sp_fs_schedule_track_pane_g2

0xe721,	// (0x00033fc3) sp_fs_schedule_track_pane_g3

0xe729,	// (0x00033fcb) sp_fs_schedule_track_pane_g4

0xe731,	// (0x00033fd3) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc3,	// (0x00035565) sp_fs_schedule_track_pane_g

0xd1ac,	// (0x00032a4e) bg_sp_fs_schedule_viewer_highlight_g1

0x3bbd,	// (0x0002945f) bg_sp_fs_schedule_viewer_highlight_g2

0xd1b4,	// (0x00032a56) bg_sp_fs_schedule_viewer_highlight_g3

0xd1bc,	// (0x00032a5e) bg_sp_fs_schedule_viewer_highlight_g4

0xd417,	// (0x00032cb9) bg_sp_fs_schedule_viewer_highlight_g5

0xd1cc,	// (0x00032a6e) bg_sp_fs_schedule_viewer_highlight_g6

0xd1d4,	// (0x00032a76) bg_sp_fs_schedule_viewer_highlight_g7

0xd1dc,	// (0x00032a7e) bg_sp_fs_schedule_viewer_highlight_g8

0x3b9d,	// (0x0002943f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcce,	// (0x00035570) bg_sp_fs_schedule_viewer_highlight_g

0x2244,	// (0x00027ae6) bg_main_sp_fs_ribbon_pane

0xa126,	// (0x0002f9c8) main_sp_fs_ribbon_pane_g1

0xe739,	// (0x00033fdb) main_sp_fs_ribbon_pane_t1

0xa12f,	// (0x0002f9d1) main_sp_fs_ribbon_pane_t2

0xe748,	// (0x00033fea) main_sp_fs_ribbon_pane_t3

0x0002,

0xfce1,	// (0x00035583) main_sp_fs_ribbon_pane_t

0xe757,	// (0x00033ff9) main_sp_fs_ribbon_scheduler_pane

0xe75f,	// (0x00034001) bg_main_sp_fs_ribbon_pane_g1

0xe768,	// (0x0003400a) bg_main_sp_fs_ribbon_pane_g2

0xe771,	// (0x00034013) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce8,	// (0x0003558a) bg_main_sp_fs_ribbon_pane_g

0xe779,	// (0x0003401b) main_sp_fs_ribbon_scheduler_pane_g1

0xe782,	// (0x00034024) main_sp_fs_ribbon_scheduler_pane_g2

0xe78b,	// (0x0003402d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcef,	// (0x00035591) main_sp_fs_ribbon_scheduler_pane_g

0xe794,	// (0x00034036) list_cale_mrui_pane

0xa13e,	// (0x0002f9e0) sp_fs_scroll_pane_cp07_ParamLimits

0xa13e,	// (0x0002f9e0) sp_fs_scroll_pane_cp07

0xa15a,	// (0x0002f9fc) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa15a,	// (0x0002f9fc) bg_sp_fs_schedule_viewer_highlight

0xe7a1,	// (0x00034043) list_single_sp_fs_schedule_track_pane_cp01

0xe7a9,	// (0x0003404b) list_sp_fs_schedule_track_pane

0xe7b1,	// (0x00034053) sp_fs_scroll_pane_cp06_ParamLimits

0xe7b1,	// (0x00034053) sp_fs_scroll_pane_cp06

0x34e7,	// (0x00028d89) bgmain_sp_fs_calendar_pane_g1

0xa16c,	// (0x0002fa0e) list_single_cale_mrui_pane_ParamLimits

0xa16c,	// (0x0002fa0e) list_single_cale_mrui_pane

0xe7c3,	// (0x00034065) list_single_cale_mrui_row_pane_ParamLimits

0xe7c3,	// (0x00034065) list_single_cale_mrui_row_pane

0xe7d0,	// (0x00034072) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe7d0,	// (0x00034072) list_single_cale_mrui_row_pane_g1

0xe815,	// (0x000340b7) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe815,	// (0x000340b7) list_single_cale_mrui_row_pane_t1

0xa18f,	// (0x0002fa31) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa18f,	// (0x0002fa31) list_single_cale_mrui_row_pane_t2

0xe827,	// (0x000340c9) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe827,	// (0x000340c9) list_single_cale_mrui_row_pane_t3

0xe856,	// (0x000340f8) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe856,	// (0x000340f8) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcfd,	// (0x0003559f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcfd,	// (0x0003559f) list_single_cale_mrui_row_pane_t

0xa1f5,	// (0x0002fa97) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa1f5,	// (0x0002fa97) list_single_cmail_header_editor_pane_bg_cp01

0xa219,	// (0x0002fabb) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa219,	// (0x0002fabb) list_single_cmail_header_editor_pane_bg_cp02

0xa237,	// (0x0002fad9) main_radioblah_text_pane_t1_ParamLimits

0xa237,	// (0x0002fad9) main_radioblah_text_pane_t1

0xe887,	// (0x00034129) cam6_indi_pane_cp01

0xe88f,	// (0x00034131) cam6_mode_pane_cp01

0xe897,	// (0x00034139) cam6_pano_pane

0xe8a0,	// (0x00034142) cam6_zoom_pane_cp01

0xe8aa,	// (0x0003414c) cam6_pano_image_pane

0xe8b3,	// (0x00034155) cam6_pano_pane_g1

0xdfc3,	// (0x00033865) cam6_pano_pane_g2

0xe8bc,	// (0x0003415e) cam6_pano_pane_g3

0xe8c5,	// (0x00034167) cam6_pano_pane_g4

0xca22,	// (0x000322c4) cam6_pano_pane_g5

0xe8ce,	// (0x00034170) cam6_pano_pane_g6

0xe8d6,	// (0x00034178) cam6_pano_pane_g7

0xe8de,	// (0x00034180) cam6_pano_pane_g8

0xe8e7,	// (0x00034189) cam6_pano_pane_g9

0x0008,

0xfd06,	// (0x000355a8) cam6_pano_pane_g

0x2244,	// (0x00027ae6) main_browser_tag_pane

0xe60a,	// (0x00033eac) grid_navstr_albumart_pane

0xe8f2,	// (0x00034194) cell_navstr_albumart_pane_ParamLimits

0xe8f2,	// (0x00034194) cell_navstr_albumart_pane

0xe90e,	// (0x000341b0) cell_navstr_albumart_pane_g1

0xbe1f,	// (0x000316c1) cell_navstr_albumart_pane_g2

0xbe2f,	// (0x000316d1) cell_navstr_albumart_pane_g3

0xbe27,	// (0x000316c9) cell_navstr_albumart_pane_g4

0x0003,

0xfd19,	// (0x000355bb) cell_navstr_albumart_pane_g

0xa252,	// (0x0002faf4) bt_list_pane_ParamLimits

0xa252,	// (0x0002faf4) bt_list_pane

0xa268,	// (0x0002fb0a) bt_list_pane_t1

0xa277,	// (0x0002fb19) bt_list_pane_t2

0x0001,

0xfd22,	// (0x000355c4) bt_list_pane_t

0x2244,	// (0x00027ae6) main_cale_prevew_pane

0xa286,	// (0x0002fb28) popup_cale_preview_window_ParamLimits

0xa286,	// (0x0002fb28) popup_cale_preview_window

0x297c,	// (0x0002821e) bg_popup_preview_window_pane_cp05_ParamLimits

0x297c,	// (0x0002821e) bg_popup_preview_window_pane_cp05

0xe916,	// (0x000341b8) list_cale_preview_pane_ParamLimits

0xe916,	// (0x000341b8) list_cale_preview_pane

0xa2a3,	// (0x0002fb45) list_double_cale_preview_pane_ParamLimits

0xa2a3,	// (0x0002fb45) list_double_cale_preview_pane

0xa2b7,	// (0x0002fb59) list_single_cale_preview_pane_ParamLimits

0xa2b7,	// (0x0002fb59) list_single_cale_preview_pane

0xa2cf,	// (0x0002fb71) list_single_cale_preview_pane_g1

0xa2d7,	// (0x0002fb79) list_single_cale_preview_pane_t1_ParamLimits

0xa2d7,	// (0x0002fb79) list_single_cale_preview_pane_t1

0xa2ec,	// (0x0002fb8e) list_double_cale_preview_pane_g1

0xa2f4,	// (0x0002fb96) list_double_cale_preview_pane_t1_ParamLimits

0xa2f4,	// (0x0002fb96) list_double_cale_preview_pane_t1

0xa309,	// (0x0002fbab) list_double_cale_preview_pane_t2_ParamLimits

0xa309,	// (0x0002fbab) list_double_cale_preview_pane_t2

0x0001,

0xfd27,	// (0x000355c9) list_double_cale_preview_pane_t_ParamLimits

0xfd27,	// (0x000355c9) list_double_cale_preview_pane_t

0x2244,	// (0x00027ae6) main_ezdial_pane

0x297c,	// (0x0002821e) main_sp_fs_email_pane_ParamLimits

0x9b3a,	// (0x0002f3dc) cmail_ddmenu_btn01_pane_ParamLimits

0x9b3a,	// (0x0002f3dc) cmail_ddmenu_btn01_pane

0x9b4d,	// (0x0002f3ef) cmail_ddmenu_btn02_pane_ParamLimits

0x9b4d,	// (0x0002f3ef) cmail_ddmenu_btn02_pane

0x9b70,	// (0x0002f412) cmail_ddmenu_btn03_pane_ParamLimits

0x9b70,	// (0x0002f412) cmail_ddmenu_btn03_pane

0x9c0e,	// (0x0002f4b0) main_sp_fs_ctrlbar_pane_ParamLimits

0x9c32,	// (0x0002f4d4) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9f5a,	// (0x0002f7fc) list_cmail_body_pane_ParamLimits

0xe507,	// (0x00033da9) bg_button_pane_cp12

0xe51c,	// (0x00033dbe) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe51c,	// (0x00033dbe) list_single_cmail_header_detail_pane_g3

0xe565,	// (0x00033e07) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe565,	// (0x00033e07) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcaa,	// (0x0003554c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcaa,	// (0x0003554c) list_single_cmail_header_detail_pane_t

0xe672,	// (0x00033f14) phacti_term_pane_t2_ParamLimits

0xe672,	// (0x00033f14) phacti_term_pane_t2

0x0001,

0xfcb4,	// (0x00035556) phacti_term_pane_t_ParamLimits

0xfcb4,	// (0x00035556) phacti_term_pane_t

0xe922,	// (0x000341c4) aid_size_list_single_double

0xa321,	// (0x0002fbc3) popup_ezdial_listscroll_window

0xa33d,	// (0x0002fbdf) popup_number_entry_window_cp01

0x32f6,	// (0x00028b98) bg_popup_call_pane_cp09

0xe92e,	// (0x000341d0) ezdial_list_pane

0xe936,	// (0x000341d8) scroll_pane_cp23

0x5511,	// (0x0002adb3) bg_button_pane_cp028_ParamLimits

0x5511,	// (0x0002adb3) bg_button_pane_cp028

0xa34b,	// (0x0002fbed) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa34b,	// (0x0002fbed) cmail_ddmenu_btn01_pane_g1

0xa35a,	// (0x0002fbfc) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa35a,	// (0x0002fbfc) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd2c,	// (0x000355ce) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd2c,	// (0x000355ce) cmail_ddmenu_btn01_pane_g

0xe93e,	// (0x000341e0) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe93e,	// (0x000341e0) cmail_ddmenu_btn01_pane_t1

0x5511,	// (0x0002adb3) bg_button_pane_cp029_ParamLimits

0x5511,	// (0x0002adb3) bg_button_pane_cp029

0xa370,	// (0x0002fc12) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa370,	// (0x0002fc12) cmail_ddmenu_btn02_pane_g1

0xa38b,	// (0x0002fc2d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa38b,	// (0x0002fc2d) cmail_ddmenu_btn02_pane_t1

0x297c,	// (0x0002821e) bg_button_pane_cp031_ParamLimits

0x297c,	// (0x0002821e) bg_button_pane_cp031

0xa370,	// (0x0002fc12) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa370,	// (0x0002fc12) cmail_ddmenu_btn03_pane_g1

0xa38b,	// (0x0002fc2d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa38b,	// (0x0002fc2d) cmail_ddmenu_btn03_pane_t1

0x7c79,	// (0x0002d51b) cell_dialer2_keypad_pane_t1_ParamLimits

0x7c93,	// (0x0002d535) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7c93,	// (0x0002d535) cell_dialer2_keypad_pane_t1_copy1

0x9229,	// (0x0002eacb) ncimui_group_button_pane

0x297c,	// (0x0002821e) main_sp_fs_calendar_pane_ParamLimits

0x9f71,	// (0x0002f813) list_single_cmail_header_caption_pane_ParamLimits

0xe6bd,	// (0x00033f5f) aid_recal_txt_sm_pane

0x2244,	// (0x00027ae6) mian_recal_day_pane

0xe6ff,	// (0x00033fa1) popup_sp_fs_cale_preview_window_ParamLimits

0xe954,	// (0x000341f6) list_recal_day_pane

0xe997,	// (0x00034239) list_single_recal_day_pane_ParamLimits

0xe997,	// (0x00034239) list_single_recal_day_pane

0xe9a9,	// (0x0003424b) list_single_recal_day_pane_g1_ParamLimits

0xe9a9,	// (0x0003424b) list_single_recal_day_pane_g1

0xe9b5,	// (0x00034257) list_single_recal_day_pane_g2_ParamLimits

0xe9b5,	// (0x00034257) list_single_recal_day_pane_g2

0xe9c1,	// (0x00034263) list_single_recal_day_pane_g3_ParamLimits

0xe9c1,	// (0x00034263) list_single_recal_day_pane_g3

0xa3b2,	// (0x0002fc54) list_single_recal_day_pane_g4_ParamLimits

0xa3b2,	// (0x0002fc54) list_single_recal_day_pane_g4

0xe9cd,	// (0x0003426f) list_single_recal_day_pane_g5_ParamLimits

0xe9cd,	// (0x0003426f) list_single_recal_day_pane_g5

0xe9d9,	// (0x0003427b) list_single_recal_day_pane_g6_ParamLimits

0xe9d9,	// (0x0003427b) list_single_recal_day_pane_g6

0x0004,

0xfd3b,	// (0x000355dd) list_single_recal_day_pane_g_ParamLimits

0xfd3b,	// (0x000355dd) list_single_recal_day_pane_g

0xe9ed,	// (0x0003428f) list_single_recal_day_pane_t1

0xe9ff,	// (0x000342a1) list_single_recal_day_pane_t2

0x0001,

0xfd46,	// (0x000355e8) list_single_recal_day_pane_t

0xa3ca,	// (0x0002fc6c) ncimui_query_button_pane_ParamLimits

0xa3ca,	// (0x0002fc6c) ncimui_query_button_pane

0xa3da,	// (0x0002fc7c) ncimui_query_button_pane_t1_ParamLimits

0xa3da,	// (0x0002fc7c) ncimui_query_button_pane_t1

0xea11,	// (0x000342b3) ncimui_query_button_pane_t2_ParamLimits

0xea11,	// (0x000342b3) ncimui_query_button_pane_t2

0x0001,

0xfd4b,	// (0x000355ed) ncimui_query_button_pane_t_ParamLimits

0xfd4b,	// (0x000355ed) ncimui_query_button_pane_t

0xa3ed,	// (0x0002fc8f) query_button_pane_ParamLimits

0xa3ed,	// (0x0002fc8f) query_button_pane

0x2244,	// (0x00027ae6) bg_button_pane_cp0028

0xea24,	// (0x000342c6) query_button_pane_t1

0x1288,	// (0x00026b2a) main_tport_pane_ParamLimits

0x9e1b,	// (0x0002f6bd) bg_popup_window_pane_cp01_ParamLimits

0x9e1b,	// (0x0002f6bd) bg_popup_window_pane_cp01

0x9e34,	// (0x0002f6d6) heading_pane_cp08_ParamLimits

0x9e34,	// (0x0002f6d6) heading_pane_cp08

0x9e47,	// (0x0002f6e9) heading_pane_cp07_ParamLimits

0x9e47,	// (0x0002f6e9) heading_pane_cp07

0x9ee9,	// (0x0002f78b) cell_tport_appsw_pane_g2

0x0002,

0xfc97,	// (0x00035539) cell_tport_appsw_pane_g

0x57ed,	// (0x0002b08f) input_candi_list_open_g1

0x4a7e,	// (0x0002a320) list_cale_time_pane_g6_ParamLimits

0x4a7e,	// (0x0002a320) list_cale_time_pane_g6

0x6e18,	// (0x0002c6ba) aid_size_touch_calib_1_ParamLimits

0x6e18,	// (0x0002c6ba) aid_size_touch_calib_1

0x6e2a,	// (0x0002c6cc) aid_size_touch_calib_2_ParamLimits

0x6e2a,	// (0x0002c6cc) aid_size_touch_calib_2

0x6e42,	// (0x0002c6e4) aid_size_touch_calib_3_ParamLimits

0x6e42,	// (0x0002c6e4) aid_size_touch_calib_3

0x6e60,	// (0x0002c702) aid_size_touch_calib_4_ParamLimits

0x6e60,	// (0x0002c702) aid_size_touch_calib_4

0x6e78,	// (0x0002c71a) main_touch_calib_button_group_pane_ParamLimits

0x6e78,	// (0x0002c71a) main_touch_calib_button_group_pane

0x6e90,	// (0x0002c732) main_touch_calib_pane_g1_ParamLimits

0x6ea2,	// (0x0002c744) main_touch_calib_pane_g2_ParamLimits

0x6eb4,	// (0x0002c756) main_touch_calib_pane_g3_ParamLimits

0x6ec6,	// (0x0002c768) main_touch_calib_pane_g4_ParamLimits

0xf6d9,	// (0x00034f7b) main_touch_calib_pane_g_ParamLimits

0x6ed8,	// (0x0002c77a) main_touch_calib_pane_t1_ParamLimits

0x6ef2,	// (0x0002c794) main_touch_calib_pane_t2_ParamLimits

0x6f0c,	// (0x0002c7ae) main_touch_calib_pane_t3_ParamLimits

0x6f20,	// (0x0002c7c2) main_touch_calib_pane_t4_ParamLimits

0x6f36,	// (0x0002c7d8) main_touch_calib_pane_t5_ParamLimits

0xf6e2,	// (0x00034f84) main_touch_calib_pane_t_ParamLimits

0xc7d5,	// (0x00032077) list_single_fp_cale_pane_g3_ParamLimits

0xc7d5,	// (0x00032077) list_single_fp_cale_pane_g3

0xb3eb,	// (0x00030c8d) bg_button_pane_cp012_ParamLimits

0xb3eb,	// (0x00030c8d) bg_vkb2_func_pane_cp03_ParamLimits

0x208e,	// (0x00027930) cell_vitu2_function_top_pane_g1_ParamLimits

0xb3eb,	// (0x00030c8d) bg_vkb2_func_pane_cp04_ParamLimits

0x91b4,	// (0x0002ea56) main_ncimui_button_group_pane_ParamLimits

0x91b4,	// (0x0002ea56) main_ncimui_button_group_pane

0x9214,	// (0x0002eab6) main_ncimui_pane_t3_ParamLimits

0x9214,	// (0x0002eab6) main_ncimui_pane_t3

0xe620,	// (0x00033ec2) phacti_button_group_pane

0xe922,	// (0x000341c4) aid_size_list_single_double_ParamLimits

0xa321,	// (0x0002fbc3) popup_ezdial_listscroll_window_ParamLimits

0xa33d,	// (0x0002fbdf) popup_number_entry_window_cp01_ParamLimits

0xa400,	// (0x0002fca2) phacti_button_pane_ParamLimits

0xa400,	// (0x0002fca2) phacti_button_pane

0x2244,	// (0x00027ae6) bg_button_pane_cp14

0xea32,	// (0x000342d4) phacti_button_pane_t1

0xa411,	// (0x0002fcb3) main_touch_calib_button_pane_ParamLimits

0xa411,	// (0x0002fcb3) main_touch_calib_button_pane

0x2b27,	// (0x000283c9) bg_button_pane_cp18_ParamLimits

0x2b27,	// (0x000283c9) bg_button_pane_cp18

0xea40,	// (0x000342e2) main_touch_calib_button_pane_t1_ParamLimits

0xea40,	// (0x000342e2) main_touch_calib_button_pane_t1

0xea56,	// (0x000342f8) main_touch_calib_button_pane_t2_ParamLimits

0xea56,	// (0x000342f8) main_touch_calib_button_pane_t2

0x0001,

0xfd50,	// (0x000355f2) main_touch_calib_button_pane_t_ParamLimits

0xfd50,	// (0x000355f2) main_touch_calib_button_pane_t

0x2244,	// (0x00027ae6) cell_ncimui_button_pane

0x2244,	// (0x00027ae6) bg_button_pane_cp032

0xea74,	// (0x00034316) cell_ncimui_button_pane_t1

0xcf5e,	// (0x00032800) image3_infobar_pane_ParamLimits

0xcf5e,	// (0x00032800) image3_infobar_pane

0x962b,	// (0x0002eecd) fs_bigclock_status_pane_ParamLimits

0x962b,	// (0x0002eecd) fs_bigclock_status_pane

0x9638,	// (0x0002eeda) main_fs_bigclock_clock_pane_ParamLimits

0x9638,	// (0x0002eeda) main_fs_bigclock_clock_pane

0x966a,	// (0x0002ef0c) main_fs_bigclock_indi_pane_ParamLimits

0x966a,	// (0x0002ef0c) main_fs_bigclock_indi_pane

0x96aa,	// (0x0002ef4c) main_fs_bigclock_swipe_pane_ParamLimits

0x96aa,	// (0x0002ef4c) main_fs_bigclock_swipe_pane

0x2244,	// (0x00027ae6) main_fs_clock_dumped_data

0x96f6,	// (0x0002ef98) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x96f6,	// (0x0002ef98) list_single_fs_bigclock_indicator_pane_g1

0x970f,	// (0x0002efb1) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x970f,	// (0x0002efb1) list_single_fs_bigclock_indicator_pane_g2

0x9729,	// (0x0002efcb) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x9729,	// (0x0002efcb) list_single_fs_bigclock_indicator_pane_g3

0x9743,	// (0x0002efe5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x9743,	// (0x0002efe5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbf1,	// (0x00035493) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbf1,	// (0x00035493) list_single_fs_bigclock_indicator_pane_g

0x9772,	// (0x0002f014) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x9772,	// (0x0002f014) list_single_fs_bigclock_indicator_pane_t1

0x979a,	// (0x0002f03c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x979a,	// (0x0002f03c) list_single_fs_bigclock_indicator_pane_t2

0x97c2,	// (0x0002f064) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x97c2,	// (0x0002f064) list_single_fs_bigclock_indicator_pane_t3

0x97ea,	// (0x0002f08c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x97ea,	// (0x0002f08c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbfc,	// (0x0003549e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbfc,	// (0x0003549e) list_single_fs_bigclock_indicator_pane_t

0xea82,	// (0x00034324) image3_infobar_fav_pane_ParamLimits

0xea82,	// (0x00034324) image3_infobar_fav_pane

0xea92,	// (0x00034334) image3_infobar_loc_pane_ParamLimits

0xea92,	// (0x00034334) image3_infobar_loc_pane

0xeaa8,	// (0x0003434a) image3_infobar_time_pane_ParamLimits

0xeaa8,	// (0x0003434a) image3_infobar_time_pane

0x34e7,	// (0x00028d89) image3_infobar_time_pane_g1

0xeab8,	// (0x0003435a) image3_infobar_time_pane_t1

0x34e7,	// (0x00028d89) image3_infobar_loc_pane_g1

0xeac6,	// (0x00034368) image3_infobar_loc_pane_g2

0x0001,

0xfd55,	// (0x000355f7) image3_infobar_loc_pane_g

0xeace,	// (0x00034370) image3_infobar_loc_pane_t1

0x34e7,	// (0x00028d89) image3_infobar_fav_pane_g1

0xeadc,	// (0x0003437e) image3_infobar_fav_pane_g2

0x0001,

0xfd5a,	// (0x000355fc) image3_infobar_fav_pane_g

0xeae4,	// (0x00034386) fs_bigclock_status_battery_pane

0xeaed,	// (0x0003438f) fs_bigclock_status_signal_pane

0xeaf6,	// (0x00034398) fs_bigclock_status_title_pane

0xeaff,	// (0x000343a1) fs_bigclock_status_signal_pane_g1

0xeb08,	// (0x000343aa) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5f,	// (0x00035601) fs_bigclock_status_signal_pane_g

0xeb10,	// (0x000343b2) fs_bigclock_status_battery_pane_g1

0xeb19,	// (0x000343bb) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd64,	// (0x00035606) fs_bigclock_status_battery_pane_g

0xeb21,	// (0x000343c3) fs_bigclock_status_title_pane_t1

0xa426,	// (0x0002fcc8) main_fs_bigclock_clock_pane_g1

0xa426,	// (0x0002fcc8) main_fs_bigclock_clock_pane_g2

0xa439,	// (0x0002fcdb) main_fs_bigclock_clock_pane_g3

0xa439,	// (0x0002fcdb) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd69,	// (0x0003560b) main_fs_bigclock_clock_pane_g

0xa450,	// (0x0002fcf2) main_fs_bigclock_clock_pane_t1

0xa466,	// (0x0002fd08) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd72,	// (0x00035614) main_fs_bigclock_clock_pane_t

0xeb2f,	// (0x000343d1) list_single_fs_bigclock_indicator_pane_ParamLimits

0xeb2f,	// (0x000343d1) list_single_fs_bigclock_indicator_pane

0xeb40,	// (0x000343e2) list_single_fs_bigclock_pane_ParamLimits

0xeb40,	// (0x000343e2) list_single_fs_bigclock_pane

0xeb66,	// (0x00034408) main_fs_bigclock_indicator_pane_t1

0xeb75,	// (0x00034417) list_single_fs_bigclock_pane_g1

0xeb7d,	// (0x0003441f) list_single_fs_bigclock_pane_t1

0x34e7,	// (0x00028d89) main_fs_bigclock_swipe_pane_g1

0xebc0,	// (0x00034462) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd83,	// (0x00035625) main_fs_bigclock_swipe_pane_g

0xebc8,	// (0x0003446a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xebc8,	// (0x0003446a) main_fs_bigclock_swipe_pane_t1

0x4d6f,	// (0x0002a611) call_type_pane_ParamLimits

0x2244,	// (0x00027ae6) main_btmg_pane

0xe7fc,	// (0x0003409e) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe7fc,	// (0x0003409e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcf6,	// (0x00035598) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf6,	// (0x00035598) list_single_cale_mrui_row_pane_g

0xe97d,	// (0x0003421f) list_recal_vselct_arw_lo_pane

0xe985,	// (0x00034227) list_recal_vselct_arw_up_pane

0xe98d,	// (0x0003422f) list_recal_vselct_pane

0xa4c8,	// (0x0002fd6a) btmg_button_pane

0xa4d2,	// (0x0002fd74) main_btmg_pane_g1

0x2244,	// (0x00027ae6) bg_button_pane_cp044

0xebe5,	// (0x00034487) btmg_button_pane_t1

0xbf71,	// (0x00031813) aid_listscroll_gen

0x297c,	// (0x0002821e) main_cntbar_detail_pane

0xe4b7,	// (0x00033d59) list_cmail_folder_pane

0xb4c9,	// (0x00030d6b) sp_fs_scroll_pane_cp03_ParamLimits

0xebf3,	// (0x00034495) list_single_fs_dyc_pane_cp01_ParamLimits

0xebf3,	// (0x00034495) list_single_fs_dyc_pane_cp01

0xec10,	// (0x000344b2) aid_size_cmail_indent

0xec19,	// (0x000344bb) list_single_dyc_row_pane_cp01

0xa510,	// (0x0002fdb2) cntbar_detail_list_pane_ParamLimits

0xa510,	// (0x0002fdb2) cntbar_detail_list_pane

0xa562,	// (0x0002fe04) main_cntbar_detail_cont_pane_ParamLimits

0xa562,	// (0x0002fe04) main_cntbar_detail_cont_pane

0xb4c9,	// (0x00030d6b) scroll_pane_cp032_ParamLimits

0xb4c9,	// (0x00030d6b) scroll_pane_cp032

0xa576,	// (0x0002fe18) cntbar_detail_list_event_pane_ParamLimits

0xa576,	// (0x0002fe18) cntbar_detail_list_event_pane

0xa522,	// (0x0002fdc4) cntbar_detail_list_shct_pane

0x3c15,	// (0x000294b7) aid_list_gen

0xec22,	// (0x000344c4) aid_scroll

0xec2b,	// (0x000344cd) aid_size_touch_scroll_bar

0x9983,	// (0x0002f225) aid_list_double

0xa586,	// (0x0002fe28) aid_list_single

0xa58f,	// (0x0002fe31) aid_list_single_lg

0xa598,	// (0x0002fe3a) aid_list_z_g_a_sm

0xa5a0,	// (0x0002fe42) aid_list_z_g_d

0xa5a8,	// (0x0002fe4a) aid_txt_z_prm

0xa5b6,	// (0x0002fe58) aid_txt_z_prm_cp01

0xa5c4,	// (0x0002fe66) aid_txt_z_sec

0xa5d2,	// (0x0002fe74) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa5d2,	// (0x0002fe74) main_cntbar_detail_cont_pane_g1

0xa5e6,	// (0x0002fe88) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa5e6,	// (0x0002fe88) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd88,	// (0x0003562a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd88,	// (0x0003562a) main_cntbar_detail_cont_pane_g

0xec34,	// (0x000344d6) main_cntbar_detail_cont_pane_t1

0xec42,	// (0x000344e4) main_cntbar_detail_cont_pane_t2

0xec50,	// (0x000344f2) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8d,	// (0x0003562f) main_cntbar_detail_cont_pane_t

0xa5f6,	// (0x0002fe98) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa5f6,	// (0x0002fe98) cell_cntbar_detail_list_shct_pane

0xec5e,	// (0x00034500) cntbar_detail_list_shct_pane_g1

0xec67,	// (0x00034509) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd94,	// (0x00035636) cntbar_detail_list_shct_pane_g

0xa608,	// (0x0002feaa) cntbar_detail_list_event_pane_g1_ParamLimits

0xa608,	// (0x0002feaa) cntbar_detail_list_event_pane_g1

0xa614,	// (0x0002feb6) cntbar_detail_list_event_pane_g2_ParamLimits

0xa614,	// (0x0002feb6) cntbar_detail_list_event_pane_g2

0x0005,

0xfd99,	// (0x0003563b) cntbar_detail_list_event_pane_g_ParamLimits

0xfd99,	// (0x0003563b) cntbar_detail_list_event_pane_g

0xa682,	// (0x0002ff24) cntbar_detail_list_event_pane_t1_ParamLimits

0xa682,	// (0x0002ff24) cntbar_detail_list_event_pane_t1

0xa697,	// (0x0002ff39) cntbar_detail_list_event_pane_t2_ParamLimits

0xa697,	// (0x0002ff39) cntbar_detail_list_event_pane_t2

0x0002,

0xfda6,	// (0x00035648) cntbar_detail_list_event_pane_t_ParamLimits

0xfda6,	// (0x00035648) cntbar_detail_list_event_pane_t

0x34e7,	// (0x00028d89) cell_cntbar_detail_list_shct_pane_g1

0x5388,	// (0x0002ac2a) navi_pane_mv_g3

0x297c,	// (0x0002821e) main_cntbar_detail_pane_ParamLimits

0x2244,	// (0x00027ae6) main_notif_wgt_pane

0xccbd,	// (0x0003255f) aid_tch_main_mp4_pane_g4

0xceeb,	// (0x0003278d) popup_slider_window_cp02

0xe973,	// (0x00034215) list_recal_day_event_pane

0xa4dc,	// (0x0002fd7e) cntbar_detail_btn_pane_ParamLimits

0xa4dc,	// (0x0002fd7e) cntbar_detail_btn_pane

0xa4f5,	// (0x0002fd97) cntbar_detail_btn_pane_cp01_ParamLimits

0xa4f5,	// (0x0002fd97) cntbar_detail_btn_pane_cp01

0xa522,	// (0x0002fdc4) cntbar_detail_list_shct_pane_ParamLimits

0xa532,	// (0x0002fdd4) cntbar_detail_pane_g1_ParamLimits

0xa532,	// (0x0002fdd4) cntbar_detail_pane_g1

0xa546,	// (0x0002fde8) cntbar_detail_pane_t1_ParamLimits

0xa546,	// (0x0002fde8) cntbar_detail_pane_t1

0xa620,	// (0x0002fec2) cntbar_detail_list_event_pane_g3_ParamLimits

0xa620,	// (0x0002fec2) cntbar_detail_list_event_pane_g3

0xa638,	// (0x0002feda) cntbar_detail_list_event_pane_g4_ParamLimits

0xa638,	// (0x0002feda) cntbar_detail_list_event_pane_g4

0xa650,	// (0x0002fef2) cntbar_detail_list_event_pane_g5_ParamLimits

0xa650,	// (0x0002fef2) cntbar_detail_list_event_pane_g5

0xa668,	// (0x0002ff0a) cntbar_detail_list_event_pane_g6_ParamLimits

0xa668,	// (0x0002ff0a) cntbar_detail_list_event_pane_g6

0xa6ac,	// (0x0002ff4e) cntbar_detail_list_event_pane_t3_ParamLimits

0xa6ac,	// (0x0002ff4e) cntbar_detail_list_event_pane_t3

0xa6be,	// (0x0002ff60) popup_notif_wgt_window_ParamLimits

0xa6be,	// (0x0002ff60) popup_notif_wgt_window

0xa6d7,	// (0x0002ff79) popup_submenu_window_cp01_ParamLimits

0xa6d7,	// (0x0002ff79) popup_submenu_window_cp01

0x32f6,	// (0x00028b98) bg_popup_window_pane_cp10

0xec70,	// (0x00034512) listscroll_notif_wgt_pane

0xec82,	// (0x00034524) list_notif_wgt_window

0xec8b,	// (0x0003452d) scroll_pane_cp033

0xa6eb,	// (0x0002ff8d) list_notif_wgt_row_pane_ParamLimits

0xa6eb,	// (0x0002ff8d) list_notif_wgt_row_pane

0xec94,	// (0x00034536) aid_size_list_notif_wgt_del

0xeca1,	// (0x00034543) list_notif_wgt_row_pane_g1

0xecad,	// (0x0003454f) list_notif_wgt_row_pane_g2

0xecbc,	// (0x0003455e) list_notif_wgt_row_pane_g3

0x0002,

0xfdad,	// (0x0003564f) list_notif_wgt_row_pane_g

0xecc9,	// (0x0003456b) list_notif_wgt_row_pane_t1

0xecdf,	// (0x00034581) list_notif_wgt_row_pane_t2

0xecf1,	// (0x00034593) list_notif_wgt_row_pane_t3

0x0002,

0xfdb4,	// (0x00035656) list_notif_wgt_row_pane_t

0xd451,	// (0x00032cf3) list_recal_day_event_pane_g1

0xed03,	// (0x000345a5) list_recal_day_event_pane_t1

0x2244,	// (0x00027ae6) bg_button_pane_cp045

0xa6fb,	// (0x0002ff9d) cntbar_detail_btn_pane_t1

0x5511,	// (0x0002adb3) main_callh_pane_ParamLimits

0x5511,	// (0x0002adb3) main_callh_pane

0x2244,	// (0x00027ae6) main_coverflow0_pane

0x2244,	// (0x00027ae6) main_wgtman_pane

0x96cb,	// (0x0002ef6d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x96cb,	// (0x0002ef6d) main_fs_bigclock_unlock_btn_pane

0x9ee1,	// (0x0002f783) bg_button_pane_cp16

0x9ef1,	// (0x0002f793) cell_tport_appsw_pane_g3

0xa709,	// (0x0002ffab) cf0_flow_pane_ParamLimits

0xa709,	// (0x0002ffab) cf0_flow_pane

0xed12,	// (0x000345b4) listscroll_cf0_pane

0xed1d,	// (0x000345bf) main_cf0_pane_g1

0xa71e,	// (0x0002ffc0) main_cf0_pane_t1_ParamLimits

0xa71e,	// (0x0002ffc0) main_cf0_pane_t1

0xa735,	// (0x0002ffd7) main_cf0_pane_t2_ParamLimits

0xa735,	// (0x0002ffd7) main_cf0_pane_t2

0x0001,

0xfdc0,	// (0x00035662) main_cf0_pane_t_ParamLimits

0xfdc0,	// (0x00035662) main_cf0_pane_t

0xed2f,	// (0x000345d1) scroll_pane_cp11

0xa74c,	// (0x0002ffee) cf0_flow_pane_g1

0xa758,	// (0x0002fffa) cf0_flow_pane_g2

0x0001,

0xfdc5,	// (0x00035667) cf0_flow_pane_g

0xa764,	// (0x00030006) cf0_flow_pane_t1

0x2244,	// (0x00027ae6) main_call6_pane

0x2244,	// (0x00027ae6) main_calllock_pane

0x2197,	// (0x00027a39) call6_btn_grp_pane_ParamLimits

0x2197,	// (0x00027a39) call6_btn_grp_pane

0x21b1,	// (0x00027a53) call6_pane_g1_ParamLimits

0x21b1,	// (0x00027a53) call6_pane_g1

0x21ca,	// (0x00027a6c) popup_call6_1st_window_ParamLimits

0x21ca,	// (0x00027a6c) popup_call6_1st_window

0x21de,	// (0x00027a80) popup_call6_2nd_window_ParamLimits

0x21de,	// (0x00027a80) popup_call6_2nd_window

0x21f2,	// (0x00027a94) cell_call6_btn_pane_ParamLimits

0x21f2,	// (0x00027a94) cell_call6_btn_pane

0x32f6,	// (0x00028b98) bg_popup_call2_in_pane_cp03

0xed3a,	// (0x000345dc) popup_call6_1st_window_g1

0xed42,	// (0x000345e4) popup_call6_1st_window_g2

0xed4a,	// (0x000345ec) popup_call6_1st_window_g3

0x0002,

0xfdca,	// (0x0003566c) popup_call6_1st_window_g

0xed52,	// (0x000345f4) popup_call6_1st_window_t1

0xed61,	// (0x00034603) popup_call6_1st_window_t2

0xed71,	// (0x00034613) popup_call6_1st_window_t3

0x0002,

0xfdd1,	// (0x00035673) popup_call6_1st_window_t

0x32f6,	// (0x00028b98) bg_popup_call2_in_pane_cp04

0xed81,	// (0x00034623) popup_call6_2nd_window_g1

0xed89,	// (0x0003462b) popup_call6_2nd_window_g2

0xed91,	// (0x00034633) popup_call6_2nd_window_g3

0x0002,

0xfdd8,	// (0x0003567a) popup_call6_2nd_window_g

0xed99,	// (0x0003463b) popup_call6_2nd_window_t1

0xb3f9,	// (0x00030c9b) bg_button_pane_cp15

0xeda8,	// (0x0003464a) cell_call6_btn_pane_g1

0xedb1,	// (0x00034653) cell_call6_btn_pane_t1

0xa776,	// (0x00030018) listscroll_wgtman_pane_ParamLimits

0xa776,	// (0x00030018) listscroll_wgtman_pane

0xa797,	// (0x00030039) wgtman_btn_pane_ParamLimits

0xa797,	// (0x00030039) wgtman_btn_pane

0x4f9b,	// (0x0002a83d) aid_scroll_copy1

0xedc0,	// (0x00034662) list_wgtman_pane

0xa7da,	// (0x0003007c) wgtman_btn_pane_g1_ParamLimits

0xa7da,	// (0x0003007c) wgtman_btn_pane_g1

0xa806,	// (0x000300a8) wgtman_btn_pane_t1_ParamLimits

0xa806,	// (0x000300a8) wgtman_btn_pane_t1

0xedca,	// (0x0003466c) wgtman_btn_pane_t2_ParamLimits

0xedca,	// (0x0003466c) wgtman_btn_pane_t2

0x0001,

0xfddf,	// (0x00035681) wgtman_btn_pane_t_ParamLimits

0xfddf,	// (0x00035681) wgtman_btn_pane_t

0xa843,	// (0x000300e5) listrow_wgtman_pane_ParamLimits

0xa843,	// (0x000300e5) listrow_wgtman_pane

0xa857,	// (0x000300f9) listrow_wgtman_pane_g1

0xa864,	// (0x00030106) listrow_wgtman_pane_g2

0x0001,

0xfde4,	// (0x00035686) listrow_wgtman_pane_g

0xa882,	// (0x00030124) listrow_wgtman_pane_t1

0xa89a,	// (0x0003013c) listrow_wgtman_pane_t2

0x0001,

0xfde9,	// (0x0003568b) listrow_wgtman_pane_t

0xa8c0,	// (0x00030162) wait_bar_pane_cp09

0xede1,	// (0x00034683) main_calllock_btn_pane

0xedeb,	// (0x0003468d) main_calllock_pane_g1

0x2244,	// (0x00027ae6) bg_button_pane_cp17

0xedf7,	// (0x00034699) main_calllock_btn_pane_g1

0xee00,	// (0x000346a2) main_calllock_btn_pane_t1

0x2244,	// (0x00027ae6) main_dialer3_pane

0x2244,	// (0x00027ae6) main_fmrd2_pane

0x34e7,	// (0x00028d89) main_fs_bigclock_unlock_btn_pane_g1

0xa8da,	// (0x0003017c) main_fs_bigclock_unlock_btn_pane_t1

0xa8e8,	// (0x0003018a) area_fmrd2_info_pane_ParamLimits

0xa8e8,	// (0x0003018a) area_fmrd2_info_pane

0xa8f9,	// (0x0003019b) area_fmrd2_visual_pane_ParamLimits

0xa8f9,	// (0x0003019b) area_fmrd2_visual_pane

0xa907,	// (0x000301a9) fmrd2_indi_pane_ParamLimits

0xa907,	// (0x000301a9) fmrd2_indi_pane

0xa914,	// (0x000301b6) area_fmrd2_visual_pane_g1

0xa91c,	// (0x000301be) area_fmrd2_visual_pane_t1

0xa92c,	// (0x000301ce) area_fmrd2_visual_pane_t2

0xa93c,	// (0x000301de) area_fmrd2_visual_pane_t3

0x0002,

0xfdf3,	// (0x00035695) area_fmrd2_visual_pane_t

0xa94c,	// (0x000301ee) area_fmrd2_info_pane_g1

0xa954,	// (0x000301f6) area_fmrd2_info_pane_t1

0xa964,	// (0x00030206) area_fmrd2_info_pane_t2

0xa974,	// (0x00030216) area_fmrd2_info_pane_t3

0xa984,	// (0x00030226) area_fmrd2_info_pane_t4

0x0003,

0xfdfa,	// (0x0003569c) area_fmrd2_info_pane_t

0xa994,	// (0x00030236) fmrd2_indi_pane_t1

0xa9a4,	// (0x00030246) fmrd2_indi_pane_t2

0xa9b4,	// (0x00030256) fmrd2_indi_pane_t3

0x0002,

0xfe03,	// (0x000356a5) fmrd2_indi_pane_t

0x9754,	// (0x0002eff6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9754,	// (0x0002eff6) list_single_fs_bigclock_indicator_pane_g5

0x9809,	// (0x0002f0ab) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x9809,	// (0x0002f0ab) list_single_fs_bigclock_indicator_pane_t5

0xa062,	// (0x0002f904) aid_cell_bcale_month_pane_ParamLimits

0xa062,	// (0x0002f904) aid_cell_bcale_month_pane

0xa080,	// (0x0002f922) bcale_month_pane_ParamLimits

0xa080,	// (0x0002f922) bcale_month_pane

0xa0a4,	// (0x0002f946) bcale_preview_pane_ParamLimits

0xa0a4,	// (0x0002f946) bcale_preview_pane

0xeb7d,	// (0x0003441f) list_single_fs_bigclock_pane_t1_ParamLimits

0xeb9c,	// (0x0003443e) list_single_fs_bigclock_pane_t2_ParamLimits

0xeb9c,	// (0x0003443e) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7e,	// (0x00035620) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7e,	// (0x00035620) list_single_fs_bigclock_pane_t

0xa8d2,	// (0x00030174) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdee,	// (0x00035690) main_fs_bigclock_unlock_btn_pane_g

0xa9c4,	// (0x00030266) aid_dia3_key_size_ParamLimits

0xa9c4,	// (0x00030266) aid_dia3_key_size

0xa9d8,	// (0x0003027a) aid_dia3_listrow_size_ParamLimits

0xa9d8,	// (0x0003027a) aid_dia3_listrow_size

0xa9f2,	// (0x00030294) dia3_keypad_fun_pane_ParamLimits

0xa9f2,	// (0x00030294) dia3_keypad_fun_pane

0xaa0c,	// (0x000302ae) dia3_keypad_num_pane_ParamLimits

0xaa0c,	// (0x000302ae) dia3_keypad_num_pane

0xaa26,	// (0x000302c8) dia3_listscroll_pane_ParamLimits

0xaa26,	// (0x000302c8) dia3_listscroll_pane

0xaa3c,	// (0x000302de) dia3_numentry_pane_ParamLimits

0xaa3c,	// (0x000302de) dia3_numentry_pane

0xee0f,	// (0x000346b1) dia3_list_pane

0xaa56,	// (0x000302f8) scroll_pane_cp12

0x2244,	// (0x00027ae6) bg_dia3_numentry_pane

0xaa61,	// (0x00030303) dia3_numentry_pane_t1

0xaa70,	// (0x00030312) cell_dia3_key_num_pane

0xaa78,	// (0x0003031a) cell_dia3_key0_fun_pane_ParamLimits

0xaa78,	// (0x0003031a) cell_dia3_key0_fun_pane

0xaa8c,	// (0x0003032e) cell_dia3_key1_fun_pane_ParamLimits

0xaa8c,	// (0x0003032e) cell_dia3_key1_fun_pane

0xaaa1,	// (0x00030343) dia3_listrow_pane

0xde7f,	// (0x00033721) bg_dia3_numentry_pane_g1

0x2244,	// (0x00027ae6) bg_button_pane_cp21

0xaab3,	// (0x00030355) cell_dia3_key_num_pane_t1

0xaac1,	// (0x00030363) cell_dia3_key_num_pane_t2

0xaac1,	// (0x00030363) cell_dia3_key_num_pane_t3

0xaac1,	// (0x00030363) cell_dia3_key_num_pane_t4

0x0003,

0xfe0a,	// (0x000356ac) cell_dia3_key_num_pane_t

0x2244,	// (0x00027ae6) bg_button_pane_cp19

0xaad0,	// (0x00030372) cell_dia3_key0_fun_pane_g1

0x2244,	// (0x00027ae6) bg_button_pane_cp20

0xaad8,	// (0x0003037a) cell_dia3_key1_fun_pane_g1

0xaae0,	// (0x00030382) area_left_week_number_pane

0xaaee,	// (0x00030390) area_top_day_name_pane

0xab01,	// (0x000303a3) frame_month_view_pane

0xee1a,	// (0x000346bc) grid_month_view_pane

0xab16,	// (0x000303b8) cell_top_day_name_pane_ParamLimits

0xab16,	// (0x000303b8) cell_top_day_name_pane

0xab45,	// (0x000303e7) cell_area_left_week_number_pane_ParamLimits

0xab45,	// (0x000303e7) cell_area_left_week_number_pane

0xab5b,	// (0x000303fd) cell_month_view_pane_ParamLimits

0xab5b,	// (0x000303fd) cell_month_view_pane

0xee28,	// (0x000346ca) frm_month_g1

0xab8c,	// (0x0003042e) frm_month_g2

0xab9f,	// (0x00030441) frm_month_g3

0xabb2,	// (0x00030454) frm_month_g4

0xabc5,	// (0x00030467) frm_month_g5

0xabd8,	// (0x0003047a) frm_month_g6

0xabed,	// (0x0003048f) frm_month_g7

0xee35,	// (0x000346d7) frm_month_g8

0xac02,	// (0x000304a4) frm_month_g9

0xac12,	// (0x000304b4) frm_month_g10

0xac22,	// (0x000304c4) frm_month_g11

0xac32,	// (0x000304d4) frm_month_g12

0xac44,	// (0x000304e6) frm_month_g13

0xac58,	// (0x000304fa) frm_month_g14

0xac6c,	// (0x0003050e) frm_month_g15

0xac80,	// (0x00030522) frm_month_g16

0x000f,

0xfe13,	// (0x000356b5) frm_month_g

0xee42,	// (0x000346e4) cell_top_day_name_pane_t1

0xac94,	// (0x00030536) cell_area_left_week_number_pane_g1

0xaca0,	// (0x00030542) cell_area_left_week_number_pane_t1

0x29e3,	// (0x00028285) cell_month_view_pane_g1

0xacb3,	// (0x00030555) cell_month_view_pane_t1

0x2244,	// (0x00027ae6) main_fps_pane

0xe2df,	// (0x00033b81) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe2df,	// (0x00033b81) cmail_ddmenu_btn02_pane_cp1

0xe2fb,	// (0x00033b9d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe2fb,	// (0x00033b9d) cmail_ddmenu_btn02_pane_cp2

0xa37f,	// (0x0002fc21) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa37f,	// (0x0002fc21) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd31,	// (0x000355d3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd31,	// (0x000355d3) cmail_ddmenu_btn02_pane_g

0xa3a0,	// (0x0002fc42) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa3a0,	// (0x0002fc42) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd36,	// (0x000355d8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd36,	// (0x000355d8) cmail_ddmenu_btn02_pane_t

0xacc6,	// (0x00030568) fps_text_pane_ParamLimits

0xacc6,	// (0x00030568) fps_text_pane

0xacdd,	// (0x0003057f) main_fps_pane_g1_ParamLimits

0xacdd,	// (0x0003057f) main_fps_pane_g1

0xacf5,	// (0x00030597) wait_bar_pane_cp010_ParamLimits

0xacf5,	// (0x00030597) wait_bar_pane_cp010

0xad08,	// (0x000305aa) fps_text_pane_t1_ParamLimits

0xad08,	// (0x000305aa) fps_text_pane_t1

0xd02c,	// (0x000328ce) cam4_image_uncrop_pane_g1

0xd035,	// (0x000328d7) cam4_image_uncrop_pane_g2

0x7d8a,	// (0x0002d62c) cam4_image_uncrop_pane_g3

0x7d93,	// (0x0002d635) cam4_image_uncrop_pane_g4

0x0003,

0xf875,	// (0x00035117) cam4_image_uncrop_pane_g

0xaaa1,	// (0x00030343) dia3_listrow_pane_ParamLimits

0x2244,	// (0x00027ae6) main_phob2_pane

0x9eb4,	// (0x0002f756) cell_tport_appsw_pane_cp02_ParamLimits

0x9eb4,	// (0x0002f756) cell_tport_appsw_pane_cp02

0x9ec8,	// (0x0002f76a) cell_tport_appsw_pane_cp03_ParamLimits

0x9ec8,	// (0x0002f76a) cell_tport_appsw_pane_cp03

0x2244,	// (0x00027ae6) phob2_contact_card_pane

0x2244,	// (0x00027ae6) phob2_listscroll_pane

0xee55,	// (0x000346f7) phob2_list_pane

0xee5d,	// (0x000346ff) scroll_pane_cp034

0xad20,	// (0x000305c2) phob2_cc_data_pane_ParamLimits

0xad20,	// (0x000305c2) phob2_cc_data_pane

0xad39,	// (0x000305db) phob2_cc_listscroll_pane_ParamLimits

0xad39,	// (0x000305db) phob2_cc_listscroll_pane

0xa843,	// (0x000300e5) list_double_large_graphic_phob2_pane_ParamLimits

0xa843,	// (0x000300e5) list_double_large_graphic_phob2_pane

0xad5b,	// (0x000305fd) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xad5b,	// (0x000305fd) list_double_large_graphic_phob2_pane_g1

0xad68,	// (0x0003060a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xad68,	// (0x0003060a) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe34,	// (0x000356d6) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe34,	// (0x000356d6) list_double_large_graphic_phob2_pane_g

0xad8e,	// (0x00030630) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xad8e,	// (0x00030630) list_double_large_graphic_phob2_pane_t1

0xada3,	// (0x00030645) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xada3,	// (0x00030645) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe3d,	// (0x000356df) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe3d,	// (0x000356df) list_double_large_graphic_phob2_pane_t

0x2244,	// (0x00027ae6) list_highlight_pane_cp024

0xadb8,	// (0x0003065a) phob2_cc_button_pane

0xadc2,	// (0x00030664) phob2_cc_data_pane_g1_ParamLimits

0xadc2,	// (0x00030664) phob2_cc_data_pane_g1

0xaddc,	// (0x0003067e) phob2_cc_data_pane_g2_ParamLimits

0xaddc,	// (0x0003067e) phob2_cc_data_pane_g2

0x0001,

0xfe42,	// (0x000356e4) phob2_cc_data_pane_g_ParamLimits

0xfe42,	// (0x000356e4) phob2_cc_data_pane_g

0xadee,	// (0x00030690) phob2_cc_data_pane_t1_ParamLimits

0xadee,	// (0x00030690) phob2_cc_data_pane_t1

0xae0e,	// (0x000306b0) phob2_cc_data_pane_t2_ParamLimits

0xae0e,	// (0x000306b0) phob2_cc_data_pane_t2

0xae2e,	// (0x000306d0) phob2_cc_data_pane_t3_ParamLimits

0xae2e,	// (0x000306d0) phob2_cc_data_pane_t3

0x0002,

0xfe47,	// (0x000356e9) phob2_cc_data_pane_t_ParamLimits

0xfe47,	// (0x000356e9) phob2_cc_data_pane_t

0xee65,	// (0x00034707) phob2_cc_list_pane_ParamLimits

0xee65,	// (0x00034707) phob2_cc_list_pane

0xd4e8,	// (0x00032d8a) scroll_pane_cp035_ParamLimits

0xd4e8,	// (0x00032d8a) scroll_pane_cp035

0x297c,	// (0x0002821e) bg_button_pane_cp033

0xee71,	// (0x00034713) phob2_cc_button_pane_g1

0xee7d,	// (0x0003471f) phob2_cc_button_pane_t1

0xee92,	// (0x00034734) phob2_cc_button_pane_t2

0x0001,

0xfe4e,	// (0x000356f0) phob2_cc_button_pane_t

0xae4e,	// (0x000306f0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xae4e,	// (0x000306f0) list_double_large_graphic_phob2_cc_pane

0xae8c,	// (0x0003072e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xae8c,	// (0x0003072e) list_double_large_graphic_phob2_cc_pane_g1

0xae98,	// (0x0003073a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xae98,	// (0x0003073a) list_double_large_graphic_phob2_cc_pane_g2

0xaea4,	// (0x00030746) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xaea4,	// (0x00030746) list_double_large_graphic_phob2_cc_pane_g3

0xaeb0,	// (0x00030752) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xaeb0,	// (0x00030752) list_double_large_graphic_phob2_cc_pane_g4

0xaebc,	// (0x0003075e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xaebc,	// (0x0003075e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe53,	// (0x000356f5) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe53,	// (0x000356f5) list_double_large_graphic_phob2_cc_pane_g

0xaec8,	// (0x0003076a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xaec8,	// (0x0003076a) list_double_large_graphic_phob2_cc_pane_t1

0xaef1,	// (0x00030793) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xaef1,	// (0x00030793) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe5e,	// (0x00035700) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe5e,	// (0x00035700) list_double_large_graphic_phob2_cc_pane_t

0xeea4,	// (0x00034746) list_highlight_pane_cp025_ParamLimits

0xeea4,	// (0x00034746) list_highlight_pane_cp025

0x297c,	// (0x0002821e) bg_button_pane_cp033_ParamLimits

0xee71,	// (0x00034713) phob2_cc_button_pane_g1_ParamLimits

0xee7d,	// (0x0003471f) phob2_cc_button_pane_t1_ParamLimits

0xee92,	// (0x00034734) phob2_cc_button_pane_t2_ParamLimits

0xfe4e,	// (0x000356f0) phob2_cc_button_pane_t_ParamLimits

0x2287,	// (0x00027b29) popup_wgtman_window

0xd2ca,	// (0x00032b6c) scroll_pane_cp038

0xa7bc,	// (0x0003005e) wgtman_btn_pane_cp_01_ParamLimits

0xa7bc,	// (0x0003005e) wgtman_btn_pane_cp_01

0xeeb2,	// (0x00034754) wgtman_content_pane

0xeebb,	// (0x0003475d) wgtman_heading_pane

0x2244,	// (0x00027ae6) bg_heading_pane_cp02

0xeec4,	// (0x00034766) wgtman_heading_pane_g1

0xeecc,	// (0x0003476e) wgtman_heading_pane_t1

0xeeda,	// (0x0003477c) scroll_pane_cp036

0xeee2,	// (0x00034784) wgtman_list_pane

0xe193,	// (0x00033a35) wgtman_list_pane_t1_ParamLimits

0xe193,	// (0x00033a35) wgtman_list_pane_t1

0xd016,	// (0x000328b8) cam4_grid_pane

0x85b5,	// (0x0002de57) bg_button_pane_cp015_ParamLimits

0x85c9,	// (0x0002de6b) bg_button_pane_cp016_ParamLimits

0x85dc,	// (0x0002de7e) bg_button_pane_cp017_ParamLimits

0x8634,	// (0x0002ded6) popup_vitu2_query_window_g3_ParamLimits

0x8634,	// (0x0002ded6) popup_vitu2_query_window_g3

0x86f1,	// (0x0002df93) popup_vitu2_query_window_t6_ParamLimits

0x86f1,	// (0x0002df93) popup_vitu2_query_window_t6

0x871c,	// (0x0002dfbe) popup_vitu2_query_window_t7_ParamLimits

0x871c,	// (0x0002dfbe) popup_vitu2_query_window_t7

0xd02c,	// (0x000328ce) cam4_grid_pane_g1

0xd035,	// (0x000328d7) cam4_grid_pane_g2

0xeeea,	// (0x0003478c) cam4_grid_pane_g3

0xeef3,	// (0x00034795) cam4_grid_pane_g4

0x0003,

0xfe63,	// (0x00035705) cam4_grid_pane_g

0x3605,	// (0x00028ea7) aid_placing_vt_slider_lsc_ParamLimits

0x3946,	// (0x000291e8) vidtel_button_pane_ParamLimits

0x3946,	// (0x000291e8) vidtel_button_pane

0x2244,	// (0x00027ae6) bg_button_pane_cp034

0xeefe,	// (0x000347a0) vidtel_button_pane_g1

0xef06,	// (0x000347a8) vidtel_button_pane_t1

0xd3f3,	// (0x00032c95) aid_size_vtel_slider_touch

0xd4e8,	// (0x00032d8a) scroll_pane_cp039

0x9392,	// (0x0002ec34) ncim_query_button_pane_cp01_ParamLimits

0x93b1,	// (0x0002ec53) ncimui_query_pane_g1_ParamLimits

0x297c,	// (0x0002821e) input_focus_pane_cp012_ParamLimits

0xdebd,	// (0x0003375f) ncim_query_entry_pane_t1_ParamLimits

0xd4e8,	// (0x00032d8a) scroll_pane_cp039_ParamLimits

0x5273,	// (0x0002ab15) navi_pane_bcale_mc_g1

0x527b,	// (0x0002ab1d) navi_pane_bcale_mc_t1

0xe331,	// (0x00033bd3) main_sp_fs_email_pane_g1

0xe33d,	// (0x00033bdf) main_sp_fs_email_pane_g2

0x0001,

0xfc66,	// (0x00035508) main_sp_fs_email_pane_g

0xe808,	// (0x000340aa) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe808,	// (0x000340aa) list_single_cale_mrui_row_pane_g3

0xa3c0,	// (0x0002fc62) list_single_recal_day_pane_g5_event_pane

0xe9e5,	// (0x00034287) list_single_recal_day_pane_g7

0xef1c,	// (0x000347be) list_recal_day_event_pane_cp01

0xef25,	// (0x000347c7) list_recal_vselct_arw_lo_pane_cp01

0xef2d,	// (0x000347cf) list_recal_vselct_arw_up_pane_cp01

0xef35,	// (0x000347d7) list_recal_vselct_pane_cp01

0xd451,	// (0x00032cf3) list_recal_day_event_pane_cp01_g1

0xef3f,	// (0x000347e1) list_recal_day_event_pane_cp01_t1

0xe9ed,	// (0x0003428f) list_single_recal_day_pane_t1_ParamLimits

0xe9ff,	// (0x000342a1) list_single_recal_day_pane_t2_ParamLimits

0xfd46,	// (0x000355e8) list_single_recal_day_pane_t_ParamLimits

0x295a,	// (0x000281fc) bg_notes_pane_ParamLimits

0x2af1,	// (0x00028393) list_notes_pane_ParamLimits

0x2aff,	// (0x000283a1) scroll_pane_cp06_ParamLimits

0x2b27,	// (0x000283c9) main_notes_pane_ParamLimits

0x297c,	// (0x0002821e) main_welc_pane

0xaf36,	// (0x000307d8) main_welc_body_pane_ParamLimits

0xaf36,	// (0x000307d8) main_welc_body_pane

0xaf55,	// (0x000307f7) main_welc_opti_pane_ParamLimits

0xaf55,	// (0x000307f7) main_welc_opti_pane

0xafd1,	// (0x00030873) main_welc_pane_t1_ParamLimits

0xafd1,	// (0x00030873) main_welc_pane_t1

0xef55,	// (0x000347f7) main_welc_body_row_pane_ParamLimits

0xef55,	// (0x000347f7) main_welc_body_row_pane

0x29d5,	// (0x00028277) main_welc_opti_row_pane_ParamLimits

0x29d5,	// (0x00028277) main_welc_opti_row_pane

0xef6c,	// (0x0003480e) main_welc_opti_row_pane_g1

0xb14d,	// (0x000309ef) main_welc_opti_row_pane_t1

0xef74,	// (0x00034816) main_welc_body_row_pane_t1

0xec7a,	// (0x0003451c) popup_notif_wgt_heading_pane

0xec94,	// (0x00034536) aid_size_list_notif_wgt_del_ParamLimits

0xeca1,	// (0x00034543) list_notif_wgt_row_pane_g1_ParamLimits

0xecad,	// (0x0003454f) list_notif_wgt_row_pane_g2_ParamLimits

0xecbc,	// (0x0003455e) list_notif_wgt_row_pane_g3_ParamLimits

0xfdad,	// (0x0003564f) list_notif_wgt_row_pane_g_ParamLimits

0xecc9,	// (0x0003456b) list_notif_wgt_row_pane_t1_ParamLimits

0xecdf,	// (0x00034581) list_notif_wgt_row_pane_t2_ParamLimits

0xecf1,	// (0x00034593) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb4,	// (0x00035656) list_notif_wgt_row_pane_t_ParamLimits

0xa857,	// (0x000300f9) listrow_wgtman_pane_g1_ParamLimits

0xa864,	// (0x00030106) listrow_wgtman_pane_g2_ParamLimits

0xfde4,	// (0x00035686) listrow_wgtman_pane_g_ParamLimits

0xa882,	// (0x00030124) listrow_wgtman_pane_t1_ParamLimits

0xa89a,	// (0x0003013c) listrow_wgtman_pane_t2_ParamLimits

0xfde9,	// (0x0003568b) listrow_wgtman_pane_t_ParamLimits

0xa8c0,	// (0x00030162) wait_bar_pane_cp09_ParamLimits

0x2244,	// (0x00027ae6) bg_popup_heading_pane_cp02

0xef83,	// (0x00034825) popup_notif_wgt_heading_pane_g1

0xef8b,	// (0x0003482d) popup_notif_wgt_heading_pane_t1

0x2244,	// (0x00027ae6) main_vids_pane

0x2244,	// (0x00027ae6) vids_listscroll_pane

0xb15c,	// (0x000309fe) scroll_pane_cp040

0x2244,	// (0x00027ae6) vids_list_pane

0xb167,	// (0x00030a09) vids_list_double_pane_ParamLimits

0xb167,	// (0x00030a09) vids_list_double_pane

0xb17a,	// (0x00030a1c) vids_list_double_pane_g1

0xb183,	// (0x00030a25) vids_list_double_pane_t1

0xb193,	// (0x00030a35) vids_list_double_pane_t2

0x0001,

0xfe82,	// (0x00035724) vids_list_double_pane_t

0xb3eb,	// (0x00030c8d) main_ncimui_pane_ParamLimits

0x91c8,	// (0x0002ea6a) main_ncimui_pane_g1_ParamLimits

0x91d4,	// (0x0002ea76) main_ncimui_pane_g2_ParamLimits

0x91d4,	// (0x0002ea76) main_ncimui_pane_g2

0x0001,

0xfb67,	// (0x00035409) main_ncimui_pane_g_ParamLimits

0xfb67,	// (0x00035409) main_ncimui_pane_g

0xaf74,	// (0x00030816) main_welc_pane_g1_ParamLimits

0xaf74,	// (0x00030816) main_welc_pane_g1

0xaf89,	// (0x0003082b) main_welc_pane_g2_ParamLimits

0xaf89,	// (0x0003082b) main_welc_pane_g2

0x0003,

0xfe6c,	// (0x0003570e) main_welc_pane_g_ParamLimits

0xfe6c,	// (0x0003570e) main_welc_pane_g

0x295a,	// (0x000281fc) listscroll_mce_pane_ParamLimits

0x540a,	// (0x0002acac) wait_bar_pane_cp10

0xbf79,	// (0x0003181b) main_cale_day_pane_ParamLimits

0xbf79,	// (0x0003181b) main_cale_week_pane_ParamLimits

0x295a,	// (0x000281fc) main_messa_pane_ParamLimits

0x77b2,	// (0x0002d054) main_clock2_btn_pane_ParamLimits

0x77b2,	// (0x0002d054) main_clock2_btn_pane

0xc84f,	// (0x000320f1) main_clock2_btn_pane_cp01_ParamLimits

0xc84f,	// (0x000320f1) main_clock2_btn_pane_cp01

0xe794,	// (0x00034036) list_cale_mrui_pane_ParamLimits

0xed27,	// (0x000345c9) main_cf0_pane_g2

0x0001,

0xfdbb,	// (0x0003565d) main_cf0_pane_g

0xaae0,	// (0x00030382) area_left_week_number_pane_ParamLimits

0xaaee,	// (0x00030390) area_top_day_name_pane_ParamLimits

0xab01,	// (0x000303a3) frame_month_view_pane_ParamLimits

0xee1a,	// (0x000346bc) grid_month_view_pane_ParamLimits

0xee28,	// (0x000346ca) frm_month_g1_ParamLimits

0xab8c,	// (0x0003042e) frm_month_g2_ParamLimits

0xab9f,	// (0x00030441) frm_month_g3_ParamLimits

0xabb2,	// (0x00030454) frm_month_g4_ParamLimits

0xabc5,	// (0x00030467) frm_month_g5_ParamLimits

0xabd8,	// (0x0003047a) frm_month_g6_ParamLimits

0xabed,	// (0x0003048f) frm_month_g7_ParamLimits

0xee35,	// (0x000346d7) frm_month_g8_ParamLimits

0xac02,	// (0x000304a4) frm_month_g9_ParamLimits

0xac12,	// (0x000304b4) frm_month_g10_ParamLimits

0xac22,	// (0x000304c4) frm_month_g11_ParamLimits

0xac32,	// (0x000304d4) frm_month_g12_ParamLimits

0xac44,	// (0x000304e6) frm_month_g13_ParamLimits

0xac58,	// (0x000304fa) frm_month_g14_ParamLimits

0xac6c,	// (0x0003050e) frm_month_g15_ParamLimits

0xac80,	// (0x00030522) frm_month_g16_ParamLimits

0xfe13,	// (0x000356b5) frm_month_g_ParamLimits

0xee42,	// (0x000346e4) cell_top_day_name_pane_t1_ParamLimits

0xac94,	// (0x00030536) cell_area_left_week_number_pane_g1_ParamLimits

0xaca0,	// (0x00030542) cell_area_left_week_number_pane_t1_ParamLimits

0x29e3,	// (0x00028285) cell_month_view_pane_g1_ParamLimits

0xacb3,	// (0x00030555) cell_month_view_pane_t1_ParamLimits

0x2952,	// (0x000281f4) main_clock2_btn_pane_g1

0xef99,	// (0x0003483b) main_clock2_btn_pane_t1

0x297c,	// (0x0002821e) listscroll_cmail_pane_ParamLimits

0xe331,	// (0x00033bd3) main_sp_fs_email_pane_g1_ParamLimits

0xe33d,	// (0x00033bdf) main_sp_fs_email_pane_g2_ParamLimits

0xfc66,	// (0x00035508) main_sp_fs_email_pane_g_ParamLimits

0xe954,	// (0x000341f6) list_recal_day_pane_ParamLimits

0xe965,	// (0x00034207) mian_recal_day_pane_t1

0x9d5c,	// (0x0002f5fe) list_single_dyc_row_text_pane_t4_ParamLimits

0x9d5c,	// (0x0002f5fe) list_single_dyc_row_text_pane_t4

0x9da5,	// (0x0002f647) list_single_dyc_row_text_pane_t5_ParamLimits

0x9da5,	// (0x0002f647) list_single_dyc_row_text_pane_t5

0xe3e7,	// (0x00033c89) list_single_dyc_row_text_pane_t6_ParamLimits

0xe3e7,	// (0x00033c89) list_single_dyc_row_text_pane_t6

0x4a19,	// (0x0002a2bb) aid_mgn_list_cale_time_pane

0xb3eb,	// (0x00030c8d) main_gallery2_pane_ParamLimits

0xc863,	// (0x00032105) main_clock2_pane_cp01_t1

0xc871,	// (0x00032113) main_clock2_pane_cp01_t3

0x0001,

0xf74c,	// (0x00034fee) main_clock2_pane_cp01_t

0x2f9d,	// (0x0002883f) cale_week_scroll_pane_g16_ParamLimits

0x2f9d,	// (0x0002883f) cale_week_scroll_pane_g16

0x32f6,	// (0x00028b98) vorec_slider_pane

0xef06,	// (0x000347a8) vidtel_button_pane_t1_ParamLimits

0xa426,	// (0x0002fcc8) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa426,	// (0x0002fcc8) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa439,	// (0x0002fcdb) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa439,	// (0x0002fcdb) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd69,	// (0x0003560b) main_fs_bigclock_clock_pane_g_ParamLimits

0xa450,	// (0x0002fcf2) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa466,	// (0x0002fd08) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd72,	// (0x00035614) main_fs_bigclock_clock_pane_t_ParamLimits

0x6ff8,	// (0x0002c89a) main_mup3_lyrics_pane_ParamLimits

0x6ff8,	// (0x0002c89a) main_mup3_lyrics_pane

0xb1a3,	// (0x00030a45) main_mup3_lyrics_pane_t1_ParamLimits

0xb1a3,	// (0x00030a45) main_mup3_lyrics_pane_t1

0xcca7,	// (0x00032549) aid_main_mp4_pane_t1_area

0xccb1,	// (0x00032553) aid_main_mp4_pane_t2_area

0xcd5d,	// (0x000325ff) main_mp4_pane_g7_ParamLimits

0xcd5d,	// (0x000325ff) main_mp4_pane_g7

0xcd69,	// (0x0003260b) main_mp4_pane_g8_ParamLimits

0xcd69,	// (0x0003260b) main_mp4_pane_g8

0x7ce2,	// (0x0002d584) aid_call6_pane_g1_size

0xae7c,	// (0x0003071e) list_double_large_graphic_phob2_other_pane_ParamLimits

0xae7c,	// (0x0003071e) list_double_large_graphic_phob2_other_pane

0xb1be,	// (0x00030a60) list_double_large_graphic_phob2_other_pane_g1

0x2244,	// (0x00027ae6) list_highlight_pane_cp026

0x297c,	// (0x0002821e) main_welc_pane_ParamLimits

0x9b9b,	// (0x0002f43d) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9b9b,	// (0x0002f43d) main_sp_fs_ctrlbar_pane_g3

0x9bb5,	// (0x0002f457) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9bb5,	// (0x0002f457) main_sp_fs_ctrlbar_pane_g4

0x9be9,	// (0x0002f48b) toolbar2_fixed_button_pane_cp01

0x9bf4,	// (0x0002f496) toolbar2_fixed_button_pane_cp02

0x9c01,	// (0x0002f4a3) toolbar2_fixed_button_pane_cp03

0xaf1a,	// (0x000307bc) list_welc_entry_pane_ParamLimits

0xaf1a,	// (0x000307bc) list_welc_entry_pane

0xaf9e,	// (0x00030840) main_welc_pane_g3_ParamLimits

0xaf9e,	// (0x00030840) main_welc_pane_g3

0xaff3,	// (0x00030895) main_welc_pane_t2_ParamLimits

0xaff3,	// (0x00030895) main_welc_pane_t2

0xb00e,	// (0x000308b0) main_welc_pane_t3_ParamLimits

0xb00e,	// (0x000308b0) main_welc_pane_t3

0x0005,

0xfe75,	// (0x00035717) main_welc_pane_t_ParamLimits

0xfe75,	// (0x00035717) main_welc_pane_t

0xb0cb,	// (0x0003096d) welc_button_pane_ParamLimits

0xb0cb,	// (0x0003096d) welc_button_pane

0xb139,	// (0x000309db) welc_service_logo_pane_ParamLimits

0xb139,	// (0x000309db) welc_service_logo_pane

0xb1c6,	// (0x00030a68) list_single_welc_entry_pane_ParamLimits

0xb1c6,	// (0x00030a68) list_single_welc_entry_pane

0xb1d9,	// (0x00030a7b) list_single_welc_entry_pane_g1

0xb1e1,	// (0x00030a83) list_single_welc_entry_pane_t1

0xb1ef,	// (0x00030a91) list_single_welc_entry_pane_t2

0x0001,

0xfe87,	// (0x00035729) list_single_welc_entry_pane_t

0x2244,	// (0x00027ae6) bg_button_pane_cp035

0xefa7,	// (0x00034849) welc_button_pane_t1

0xefb5,	// (0x00034857) welc_service_logo_pane_g1

0xefbe,	// (0x00034860) welc_service_logo_pane_g2

0x0001,

0xfe8c,	// (0x0003572e) welc_service_logo_pane_g

0xb3f9,	// (0x00030c9b) main_int_radio_pane

0xdd5b,	// (0x000335fd) list_single_fs_dyc_pane_g1

0xad74,	// (0x00030616) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xad74,	// (0x00030616) list_double_large_graphic_phob2_pane_g3

0xad80,	// (0x00030622) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xad80,	// (0x00030622) list_double_large_graphic_phob2_pane_g4

0xb1fd,	// (0x00030a9f) main_int_radio1_pane_ParamLimits

0xb1fd,	// (0x00030a9f) main_int_radio1_pane

0xefc7,	// (0x00034869) find_pane_cp02

0xb21a,	// (0x00030abc) input_focus_pane_cp12_ParamLimits

0xb21a,	// (0x00030abc) input_focus_pane_cp12

0xb22a,	// (0x00030acc) input_focus_pane_cp13_ParamLimits

0xb22a,	// (0x00030acc) input_focus_pane_cp13

0xb23e,	// (0x00030ae0) input_focus_pane_cp14_ParamLimits

0xb23e,	// (0x00030ae0) input_focus_pane_cp14

0xefd0,	// (0x00034872) int_radio1_listscroll_pane

0xb252,	// (0x00030af4) main_int_radio1_pane_g1_ParamLimits

0xb252,	// (0x00030af4) main_int_radio1_pane_g1

0xb268,	// (0x00030b0a) main_int_radio1_pane_t1_ParamLimits

0xb268,	// (0x00030b0a) main_int_radio1_pane_t1

0xb281,	// (0x00030b23) main_int_radio1_pane_t2_ParamLimits

0xb281,	// (0x00030b23) main_int_radio1_pane_t2

0xb29c,	// (0x00030b3e) main_int_radio1_pane_t3_ParamLimits

0xb29c,	// (0x00030b3e) main_int_radio1_pane_t3

0xb2b7,	// (0x00030b59) main_int_radio1_pane_t4_ParamLimits

0xb2b7,	// (0x00030b59) main_int_radio1_pane_t4

0xefda,	// (0x0003487c) main_int_radio1_pane_t5_ParamLimits

0xefda,	// (0x0003487c) main_int_radio1_pane_t5

0xb2c9,	// (0x00030b6b) main_int_radio1_pane_t6_ParamLimits

0xb2c9,	// (0x00030b6b) main_int_radio1_pane_t6

0xb2de,	// (0x00030b80) main_int_radio1_pane_t7_ParamLimits

0xb2de,	// (0x00030b80) main_int_radio1_pane_t7

0xb2f3,	// (0x00030b95) main_int_radio1_pane_t8_ParamLimits

0xb2f3,	// (0x00030b95) main_int_radio1_pane_t8

0xb310,	// (0x00030bb2) main_int_radio1_pane_t9_ParamLimits

0xb310,	// (0x00030bb2) main_int_radio1_pane_t9

0xb322,	// (0x00030bc4) main_int_radio1_pane_t10_ParamLimits

0xb322,	// (0x00030bc4) main_int_radio1_pane_t10

0xb348,	// (0x00030bea) main_int_radio1_pane_t11_ParamLimits

0xb348,	// (0x00030bea) main_int_radio1_pane_t11

0xb36e,	// (0x00030c10) main_int_radio1_pane_t12_ParamLimits

0xb36e,	// (0x00030c10) main_int_radio1_pane_t12

0x000b,

0xfe91,	// (0x00035733) main_int_radio1_pane_t_ParamLimits

0xfe91,	// (0x00035733) main_int_radio1_pane_t

0xee55,	// (0x000346f7) int_radio_list_pane

0xee5d,	// (0x000346ff) scroll_pane_cp037

0xefec,	// (0x0003488e) list_double_large_graphic_int_radio_pane_ParamLimits

0xefec,	// (0x0003488e) list_double_large_graphic_int_radio_pane

0xf000,	// (0x000348a2) list_double_large_graphic_int_radio_pane_g1

0xf009,	// (0x000348ab) list_double_large_graphic_int_radio_pane_t1

0xf017,	// (0x000348b9) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfeaa,	// (0x0003574c) list_double_large_graphic_int_radio_pane_t

0x2244,	// (0x00027ae6) list_highlight_pane_cp027

0xef4d,	// (0x000347ef) main_button_pane_4

0xafb2,	// (0x00030854) main_welc_pane_g4_ParamLimits

0xafb2,	// (0x00030854) main_welc_pane_g4

0xb02b,	// (0x000308cd) main_welc_pane_t4_ParamLimits

0xb02b,	// (0x000308cd) main_welc_pane_t4

0xb040,	// (0x000308e2) main_welc_pane_t5_ParamLimits

0xb040,	// (0x000308e2) main_welc_pane_t5

0xb090,	// (0x00030932) main_welc_pane_t6_ParamLimits

0xb090,	// (0x00030932) main_welc_pane_t6

0xb0e2,	// (0x00030984) welc_button_pane_2_ParamLimits

0xb0e2,	// (0x00030984) welc_button_pane_2

0xb100,	// (0x000309a2) welc_button_pane_3_ParamLimits

0xb100,	// (0x000309a2) welc_button_pane_3

0xef4d,	// (0x000347ef) welc_button_pane_4

0xb121,	// (0x000309c3) welc_button_pane_5_ParamLimits

0xb121,	// (0x000309c3) welc_button_pane_5

0x127c,	// (0x00026b1e) main_popup_welc_pane

0xf025,	// (0x000348c7) main_welc_sk_g3

0xf02f,	// (0x000348d1) main_welc_sk_g4

0xf039,	// (0x000348db) main_welc_sk_t3

0xf049,	// (0x000348eb) main_welc_sk_t4

0xf059,	// (0x000348fb) popup_welc_pane_t4

0xf067,	// (0x00034909) popup_welc_pane_t5

0xf075,	// (0x00034917) popup_welc_pane_t6
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
