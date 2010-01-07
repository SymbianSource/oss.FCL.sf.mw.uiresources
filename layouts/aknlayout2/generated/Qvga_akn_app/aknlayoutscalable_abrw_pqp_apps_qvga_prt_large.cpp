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

#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00070bb9 };

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
0x66c3,	// (0x0007727c) Screen

0x66cd,	// (0x00077286) application_window

0x66ff,	// (0x000772b8) area_bottom_pane_ParamLimits

0x66ff,	// (0x000772b8) area_bottom_pane

0x672e,	// (0x000772e7) area_top_pane_ParamLimits

0x672e,	// (0x000772e7) area_top_pane

0x0fab,	// (0x00071b64) call_video_uplink_pane_ParamLimits

0x0fab,	// (0x00071b64) call_video_uplink_pane

0x67b1,	// (0x0007736a) main_pane_ParamLimits

0x67b1,	// (0x0007736a) main_pane

0x2933,	// (0x000734ec) context_pane

0x9190,	// (0x00079d49) navi_pane

0x91aa,	// (0x00079d63) popup_cale_events_window_ParamLimits

0x91aa,	// (0x00079d63) popup_cale_events_window

0x2946,	// (0x000734ff) popup_mup_playback_window

0x91c1,	// (0x00079d7a) signal_pane

0x1724,	// (0x000722dd) main_browser_pane

0xe19a,	// (0x0007ed53) main_burst_pane

0x3658,	// (0x00074211) main_calc_pane

0xe19a,	// (0x0007ed53) main_cale_day_pane

0x18ec,	// (0x000724a5) main_cale_month_pane

0xe19a,	// (0x0007ed53) main_cale_week_pane

0xe19a,	// (0x0007ed53) main_call_pane

0x13d8,	// (0x00071f91) main_call_poc_pane

0xe19a,	// (0x0007ed53) main_camera_pane

0xe19a,	// (0x0007ed53) main_chi_dic_pane

0xdf99,	// (0x0007eb52) main_clock_pane

0x13d8,	// (0x00071f91) main_fmradio_pane

0xe19a,	// (0x0007ed53) main_graph_messa_pane

0x13d8,	// (0x00071f91) main_help_pane

0x1724,	// (0x000722dd) main_im_pane

0x1633,	// (0x000721ec) main_image_pane_ParamLimits

0x1633,	// (0x000721ec) main_image_pane

0x13d8,	// (0x00071f91) main_location2_pane

0xe19a,	// (0x0007ed53) main_location_pane

0x13d8,	// (0x00071f91) main_messa_pane

0x13d8,	// (0x00071f91) main_mp2_pane

0xe19a,	// (0x0007ed53) main_mp_pane

0x13d8,	// (0x00071f91) main_msg_pane

0x13d8,	// (0x00071f91) main_mup_eq_pane

0x13d8,	// (0x00071f91) main_mup_pane

0xe19a,	// (0x0007ed53) main_notes_pane

0x13d8,	// (0x00071f91) main_pec_pane

0x13d8,	// (0x00071f91) main_phob_pane

0x13d8,	// (0x00071f91) main_pinb_pane

0x13d8,	// (0x00071f91) main_postcard_pane

0x13d8,	// (0x00071f91) main_qdial_pane

0xe19a,	// (0x0007ed53) main_skin_pane

0x13d8,	// (0x00071f91) main_smil2_pane

0xe19a,	// (0x0007ed53) main_smil_pane

0xe19a,	// (0x0007ed53) main_video_pane

0xe19a,	// (0x0007ed53) main_video_tele_pane

0x1633,	// (0x000721ec) main_viewer_pane_ParamLimits

0x1633,	// (0x000721ec) main_viewer_pane

0xe19a,	// (0x0007ed53) main_vorec_pane

0x90c2,	// (0x00079c7b) popup_blid_sat_info_window_ParamLimits

0x90c2,	// (0x00079c7b) popup_blid_sat_info_window

0x90d6,	// (0x00079c8f) popup_dyc_status_message_window_ParamLimits

0x90d6,	// (0x00079c8f) popup_dyc_status_message_window

0x90e2,	// (0x00079c9b) popup_grid_large_graphic_window_ParamLimits

0x90e2,	// (0x00079c9b) popup_grid_large_graphic_window

0x913a,	// (0x00079cf3) popup_loc_request_window_ParamLimits

0x913a,	// (0x00079cf3) popup_loc_request_window

0x916a,	// (0x00079d23) popup_wml_address_window_ParamLimits

0x916a,	// (0x00079d23) popup_wml_address_window

0x8fa7,	// (0x00079b60) call_muted_g1

0x8ce2,	// (0x0007989b) popup_call_audio_conf_window_ParamLimits

0x8ce2,	// (0x0007989b) popup_call_audio_conf_window

0x8fb7,	// (0x00079b70) popup_call_audio_first_window_ParamLimits

0x8fb7,	// (0x00079b70) popup_call_audio_first_window

0x8feb,	// (0x00079ba4) popup_call_audio_in_window_ParamLimits

0x8feb,	// (0x00079ba4) popup_call_audio_in_window

0x9007,	// (0x00079bc0) popup_call_audio_out_window_ParamLimits

0x9007,	// (0x00079bc0) popup_call_audio_out_window

0x9023,	// (0x00079bdc) popup_call_audio_second_window_ParamLimits

0x9023,	// (0x00079bdc) popup_call_audio_second_window

0x904b,	// (0x00079c04) popup_call_audio_wait_window_ParamLimits

0x904b,	// (0x00079c04) popup_call_audio_wait_window

0x906a,	// (0x00079c23) popup_number_entry_window_ParamLimits

0x906a,	// (0x00079c23) popup_number_entry_window

0x0fc7,	// (0x00071b80) bg_popup_call_pane_cp05_ParamLimits

0x0fc7,	// (0x00071b80) bg_popup_call_pane_cp05

0x0fe7,	// (0x00071ba0) popup_number_entry_window_t1

0x0ffa,	// (0x00071bb3) popup_number_entry_window_t2

0x100c,	// (0x00071bc5) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x0007fcb4) popup_number_entry_window_t

0x101e,	// (0x00071bd7) text_title_cp2

0x1031,	// (0x00071bea) bg_popup_call_pane_cp_ParamLimits

0x1031,	// (0x00071bea) bg_popup_call_pane_cp

0x103f,	// (0x00071bf8) call_thumbnail_pane

0x1047,	// (0x00071c00) popup_call_audio_in_window_g1_ParamLimits

0x1047,	// (0x00071c00) popup_call_audio_in_window_g1

0x1053,	// (0x00071c0c) popup_call_audio_in_window_g2_ParamLimits

0x1053,	// (0x00071c0c) popup_call_audio_in_window_g2

0x105f,	// (0x00071c18) popup_call_audio_in_window_g3_ParamLimits

0x105f,	// (0x00071c18) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0007fcbd) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0007fcbd) popup_call_audio_in_window_g

0x106b,	// (0x00071c24) popup_call_audio_in_window_t1_ParamLimits

0x106b,	// (0x00071c24) popup_call_audio_in_window_t1

0x1086,	// (0x00071c3f) popup_call_audio_in_window_t2_ParamLimits

0x1086,	// (0x00071c3f) popup_call_audio_in_window_t2

0x10a1,	// (0x00071c5a) popup_call_audio_in_window_t3_ParamLimits

0x10a1,	// (0x00071c5a) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x0007fcc4) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x0007fcc4) popup_call_audio_in_window_t

0x1031,	// (0x00071bea) bg_popup_call_pane_cp01_ParamLimits

0x1031,	// (0x00071bea) bg_popup_call_pane_cp01

0x103f,	// (0x00071bf8) call_thumbnail_pane_cp02

0x10b4,	// (0x00071c6d) call_type_pane_cp022

0x10bc,	// (0x00071c75) popup_call_audio_out_window_g1_ParamLimits

0x10bc,	// (0x00071c75) popup_call_audio_out_window_g1

0x10ce,	// (0x00071c87) popup_call_audio_out_window_g2_ParamLimits

0x10ce,	// (0x00071c87) popup_call_audio_out_window_g2

0x10da,	// (0x00071c93) popup_call_audio_out_window_g3_ParamLimits

0x10da,	// (0x00071c93) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0007fccb) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0007fccb) popup_call_audio_out_window_g

0x10ec,	// (0x00071ca5) popup_call_audio_out_window_t1_ParamLimits

0x10ec,	// (0x00071ca5) popup_call_audio_out_window_t1

0x1104,	// (0x00071cbd) popup_call_audio_out_window_t2_ParamLimits

0x1104,	// (0x00071cbd) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x0007fcd2) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x0007fcd2) popup_call_audio_out_window_t

0x1119,	// (0x00071cd2) bg_popup_call_pane_ParamLimits

0x1119,	// (0x00071cd2) bg_popup_call_pane

0x6962,	// (0x0007751b) call_thumbnail_pane_cp_ParamLimits

0x6962,	// (0x0007751b) call_thumbnail_pane_cp

0x119d,	// (0x00071d56) call_type_pane_cp01_ParamLimits

0x119d,	// (0x00071d56) call_type_pane_cp01

0x11e1,	// (0x00071d9a) popup_call_audio_first_window_g1_ParamLimits

0x11e1,	// (0x00071d9a) popup_call_audio_first_window_g1

0x122d,	// (0x00071de6) popup_call_audio_first_window_g2_ParamLimits

0x122d,	// (0x00071de6) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0007fcd7) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0007fcd7) popup_call_audio_first_window_g

0x1271,	// (0x00071e2a) popup_call_audio_first_window_t1_ParamLimits

0x1271,	// (0x00071e2a) popup_call_audio_first_window_t1

0x131d,	// (0x00071ed6) popup_call_audio_first_window_t4_ParamLimits

0x131d,	// (0x00071ed6) popup_call_audio_first_window_t4

0x13a9,	// (0x00071f62) popup_call_audio_first_window_t5_ParamLimits

0x13a9,	// (0x00071f62) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0007fcdc) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0007fcdc) popup_call_audio_first_window_t

0x13d8,	// (0x00071f91) bg_popup_call_pane_cp02

0x13e2,	// (0x00071f9b) call_type_pane_cp023

0x13ea,	// (0x00071fa3) popup_call_audio_wait_window_g1

0x13f2,	// (0x00071fab) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0007fce3) popup_call_audio_wait_window_g

0x13fa,	// (0x00071fb3) popup_call_audio_wait_window_t3

0x1408,	// (0x00071fc1) bg_popup_call_pane_cp03_ParamLimits

0x1408,	// (0x00071fc1) bg_popup_call_pane_cp03

0x1468,	// (0x00072021) call_thumbnail_pane_cp011_ParamLimits

0x1468,	// (0x00072021) call_thumbnail_pane_cp011

0x1474,	// (0x0007202d) call_type_pane_cp034_ParamLimits

0x1474,	// (0x0007202d) call_type_pane_cp034

0x14b0,	// (0x00072069) popup_call_audio_second_window_g1_ParamLimits

0x14b0,	// (0x00072069) popup_call_audio_second_window_g1

0x14ec,	// (0x000720a5) popup_call_audio_second_window_g2_ParamLimits

0x14ec,	// (0x000720a5) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0007fce8) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0007fce8) popup_call_audio_second_window_g

0x1528,	// (0x000720e1) popup_call_audio_second_window_t1_ParamLimits

0x1528,	// (0x000720e1) popup_call_audio_second_window_t1

0x15a9,	// (0x00072162) popup_call_audio_second_window_t2_ParamLimits

0x15a9,	// (0x00072162) popup_call_audio_second_window_t2

0x15df,	// (0x00072198) popup_call_audio_second_window_t3_ParamLimits

0x15df,	// (0x00072198) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0007fced) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0007fced) popup_call_audio_second_window_t

0x13d8,	// (0x00071f91) bg_popup_call_pane_cp04

0x1615,	// (0x000721ce) list_conf_pane

0x161d,	// (0x000721d6) popup_call_audio_conf_window_t1

0x162b,	// (0x000721e4) call_thumbnail_pane_g1

0x1633,	// (0x000721ec) bg_pinb_pane_ParamLimits

0x1633,	// (0x000721ec) bg_pinb_pane

0x1641,	// (0x000721fa) find_pinb_pane

0x164a,	// (0x00072203) listscroll_pinb_pane_ParamLimits

0x164a,	// (0x00072203) listscroll_pinb_pane

0x1659,	// (0x00072212) pinb_bg_pane_g1

0x6986,	// (0x0007753f) pinb_bg_pane_g2

0x6990,	// (0x00077549) pinb_bg_pane_g3

0x699a,	// (0x00077553) pinb_bg_pane_g4

0x69a4,	// (0x0007755d) pinb_bg_pane_g5

0x69ae,	// (0x00077567) pinb_bg_pane_g6

0x69b9,	// (0x00077572) pinb_bg_pane_g7

0x69c4,	// (0x0007757d) pinb_bg_pane_g8

0x69cd,	// (0x00077586) pinb_bg_pane_g9

0x69d5,	// (0x0007758e) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x0007fcf4) pinb_bg_pane_g

0x69f2,	// (0x000775ab) grid_pinb_pane

0x69fb,	// (0x000775b4) list_pinb_pane

0x6a06,	// (0x000775bf) scroll_pane_cp01_ParamLimits

0x6a06,	// (0x000775bf) scroll_pane_cp01

0x1663,	// (0x0007221c) find_pinb_pane_g1_ParamLimits

0x1663,	// (0x0007221c) find_pinb_pane_g1

0x167b,	// (0x00072234) find_pinb_pane_t1

0x168d,	// (0x00072246) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0007fd0e) find_pinb_pane_t

0x16a2,	// (0x0007225b) input_focus_pane_cp01_ParamLimits

0x16a2,	// (0x0007225b) input_focus_pane_cp01

0x6a16,	// (0x000775cf) cell_pinb_pane_ParamLimits

0x6a16,	// (0x000775cf) cell_pinb_pane

0x6a2f,	// (0x000775e8) cell_pinb_pane_g1_ParamLimits

0x6a2f,	// (0x000775e8) cell_pinb_pane_g1

0x6a43,	// (0x000775fc) cell_pinb_pane_g2_ParamLimits

0x6a43,	// (0x000775fc) cell_pinb_pane_g2

0x16ae,	// (0x00072267) cell_pinb_pane_g3_ParamLimits

0x16ae,	// (0x00072267) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0007fd13) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0007fd13) cell_pinb_pane_g

0x13d8,	// (0x00071f91) grid_highlight_pane_cp01

0x6a4f,	// (0x00077608) list_pinb_item_pane_ParamLimits

0x6a4f,	// (0x00077608) list_pinb_item_pane

0x13d8,	// (0x00071f91) list_highlight_pane_cp02

0x6a64,	// (0x0007761d) list_pinb_item_pane_g1_ParamLimits

0x6a64,	// (0x0007761d) list_pinb_item_pane_g1

0x6a71,	// (0x0007762a) list_pinb_item_pane_g2_ParamLimits

0x6a71,	// (0x0007762a) list_pinb_item_pane_g2

0x6a7d,	// (0x00077636) list_pinb_item_pane_g3_ParamLimits

0x6a7d,	// (0x00077636) list_pinb_item_pane_g3

0x6a8c,	// (0x00077645) list_pinb_item_pane_g4_ParamLimits

0x6a8c,	// (0x00077645) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0007fd1a) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0007fd1a) list_pinb_item_pane_g

0x6a98,	// (0x00077651) list_pinb_item_pane_t1_ParamLimits

0x6a98,	// (0x00077651) list_pinb_item_pane_t1

0x6ac9,	// (0x00077682) calc_display_pane

0x6ae1,	// (0x0007769a) calc_paper_pane

0x6afd,	// (0x000776b6) grid_calc_pane

0x13d8,	// (0x00071f91) bg_list_pane_cp01

0x6b1d,	// (0x000776d6) clock_g1

0x6b25,	// (0x000776de) clock_g2

0x0001,

0xf16a,	// (0x0007fd23) clock_g

0x6b2d,	// (0x000776e6) clock_t1_ParamLimits

0x6b2d,	// (0x000776e6) clock_t1

0x6b42,	// (0x000776fb) clock_t2_ParamLimits

0x6b42,	// (0x000776fb) clock_t2

0x6b54,	// (0x0007770d) clock_t3_ParamLimits

0x6b54,	// (0x0007770d) clock_t3

0x6b66,	// (0x0007771f) clock_t4_ParamLimits

0x6b66,	// (0x0007771f) clock_t4

0x6b78,	// (0x00077731) clock_t5_ParamLimits

0x6b78,	// (0x00077731) clock_t5

0x6b8d,	// (0x00077746) clock_t6_ParamLimits

0x6b8d,	// (0x00077746) clock_t6

0x6b9f,	// (0x00077758) clock_t7_ParamLimits

0x6b9f,	// (0x00077758) clock_t7

0x6bb1,	// (0x0007776a) clock_t8_ParamLimits

0x6bb1,	// (0x0007776a) clock_t8

0x6bc3,	// (0x0007777c) clock_t9_ParamLimits

0x6bc3,	// (0x0007777c) clock_t9

0x0008,

0xf16f,	// (0x0007fd28) clock_t_ParamLimits

0xf16f,	// (0x0007fd28) clock_t

0x16c2,	// (0x0007227b) popup_clock_analogue_window_cp02

0x16c2,	// (0x0007227b) popup_clock_digital_window_cp01

0x16ca,	// (0x00072283) listscroll_help_pane

0x13d8,	// (0x00071f91) phob_pre_status_pane

0x16d4,	// (0x0007228d) grid_qdial_pane

0x13d8,	// (0x00071f91) listscroll_mce_pane

0x16de,	// (0x00072297) bg_notes_pane

0x16e8,	// (0x000722a1) list_notes_pane

0x6bd5,	// (0x0007778e) scroll_pane_cp06

0x16f2,	// (0x000722ab) bg_calc_paper_pane

0x6be8,	// (0x000777a1) list_calc_pane

0x1724,	// (0x000722dd) bg_calc_display_pane

0x6c02,	// (0x000777bb) calc_display_pane_t1

0x6c17,	// (0x000777d0) calc_display_pane_t2

0x6c2c,	// (0x000777e5) calc_display_pane_t3

0x0002,

0xf182,	// (0x0007fd3b) calc_display_pane_t

0x6c3e,	// (0x000777f7) cell_calc_pane_ParamLimits

0x6c3e,	// (0x000777f7) cell_calc_pane

0x176c,	// (0x00072325) bg_calc_paper_pane_g1

0x1784,	// (0x0007233d) bg_calc_paper_pane_g2

0x1778,	// (0x00072331) bg_calc_paper_pane_g3

0x179c,	// (0x00072355) bg_calc_paper_pane_g4

0x1790,	// (0x00072349) bg_calc_paper_pane_g5

0x6c65,	// (0x0007781e) bg_calc_paper_pane_g6

0x6c74,	// (0x0007782d) bg_calc_paper_pane_g7

0x6c83,	// (0x0007783c) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0007fd42) bg_calc_paper_pane_g

0x6c92,	// (0x0007784b) calc_bg_paper_pane_g9

0x6ca1,	// (0x0007785a) list_calc_item_pane_ParamLimits

0x6ca1,	// (0x0007785a) list_calc_item_pane

0x17a8,	// (0x00072361) list_calc_item_pane_g1

0x6cba,	// (0x00077873) list_calc_item_pane_t1_ParamLimits

0x6cba,	// (0x00077873) list_calc_item_pane_t1

0x6ccc,	// (0x00077885) list_calc_item_pane_t2_ParamLimits

0x6ccc,	// (0x00077885) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0007fd53) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0007fd53) list_calc_item_pane_t

0x17c7,	// (0x00072380) cell_calc_pane_g1

0x17d1,	// (0x0007238a) grid_highlight_pane_cp02

0x1806,	// (0x000723bf) bg_calc_display_pane_g1

0x6cfa,	// (0x000778b3) bg_calc_display_pane_g2

0x17f3,	// (0x000723ac) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0007fd5d) bg_calc_display_pane_g

0x6d04,	// (0x000778bd) cell_qdial_pane_ParamLimits

0x6d04,	// (0x000778bd) cell_qdial_pane

0x6d16,	// (0x000778cf) cell_qdial_pane_g1_ParamLimits

0x6d16,	// (0x000778cf) cell_qdial_pane_g1

0x6d23,	// (0x000778dc) cell_qdial_pane_g2_ParamLimits

0x6d23,	// (0x000778dc) cell_qdial_pane_g2

0x180f,	// (0x000723c8) cell_qdial_pane_g3_ParamLimits

0x180f,	// (0x000723c8) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0007fd64) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0007fd64) cell_qdial_pane_g

0x6d41,	// (0x000778fa) cell_qdial_pane_t1_ParamLimits

0x6d41,	// (0x000778fa) cell_qdial_pane_t1

0x6d59,	// (0x00077912) cell_qdial_pane_t2_ParamLimits

0x6d59,	// (0x00077912) cell_qdial_pane_t2

0x6d6c,	// (0x00077925) cell_qdial_pane_t3_ParamLimits

0x6d6c,	// (0x00077925) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0007fd6d) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0007fd6d) cell_qdial_pane_t

0x13d8,	// (0x00071f91) grid_highlight_pane_cp04

0x181b,	// (0x000723d4) thumbnail_qdial_pane_ParamLimits

0x181b,	// (0x000723d4) thumbnail_qdial_pane

0x1877,	// (0x00072430) list_help_pane

0x1881,	// (0x0007243a) scroll_pane_cp02

0x6d7f,	// (0x00077938) help_list_pane_t1_ParamLimits

0x6d7f,	// (0x00077938) help_list_pane_t1

0x6d9d,	// (0x00077956) bg_notes_pane_g2

0x6da5,	// (0x0007795e) bg_notes_pane_g3

0x6dad,	// (0x00077966) notes_bg_pane_g1

0x6db5,	// (0x0007796e) notes_bg_pane_g4

0x6dbd,	// (0x00077976) notes_bg_pane_g5

0x6dc5,	// (0x0007797e) notes_bg_pane_g6

0x6dcd,	// (0x00077986) notes_bg_pane_g7

0x6dd5,	// (0x0007798e) notes_bg_pane_g8

0x6ddd,	// (0x00077996) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0007fd8b) notes_bg_pane_g

0x6de5,	// (0x0007799e) list_notes_text_pane_ParamLimits

0x6de5,	// (0x0007799e) list_notes_text_pane

0x18d2,	// (0x0007248b) list_notes_text_pane_g1

0x6dfb,	// (0x000779b4) list_notes_text_pane_t1

0x18ec,	// (0x000724a5) listscroll_cale_week_pane

0x6e24,	// (0x000779dd) bg_cale_heading_pane

0x18fb,	// (0x000724b4) bg_cale_pane_cp01

0x6e38,	// (0x000779f1) cale_week_corner_pane

0x6e4e,	// (0x00077a07) cale_week_day_heading_pane

0x6e62,	// (0x00077a1b) cale_week_scroll_pane_g1

0x6e73,	// (0x00077a2c) cale_week_scroll_pane_g2

0x6e84,	// (0x00077a3d) cale_week_scroll_pane_g3

0x6e95,	// (0x00077a4e) cale_week_scroll_pane_g4

0x6ea6,	// (0x00077a5f) cale_week_scroll_pane_g5

0x6eb7,	// (0x00077a70) cale_week_scroll_pane_g6

0x6ec8,	// (0x00077a81) cale_week_scroll_pane_g7

0x6ed9,	// (0x00077a92) cale_week_scroll_pane_g8

0x6eea,	// (0x00077aa3) cale_week_scroll_pane_g9

0x6efb,	// (0x00077ab4) cale_week_scroll_pane_g10

0x6f0c,	// (0x00077ac5) cale_week_scroll_pane_g11

0x6f1d,	// (0x00077ad6) cale_week_scroll_pane_g12

0x6f2e,	// (0x00077ae7) cale_week_scroll_pane_g13

0x6f3f,	// (0x00077af8) cale_week_scroll_pane_g14

0x6f50,	// (0x00077b09) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0007fd9a) cale_week_scroll_pane_g

0x6f61,	// (0x00077b1a) cale_week_time_pane

0x6f72,	// (0x00077b2b) grid_cale_week_pane

0x6f85,	// (0x00077b3e) scroll_pane_cp08

0x6f9d,	// (0x00077b56) cell_cale_week_pane_ParamLimits

0x6f9d,	// (0x00077b56) cell_cale_week_pane

0x6fd9,	// (0x00077b92) cale_week_day_heading_pane_t1

0x6ff2,	// (0x00077bab) cale_week_day_heading_pane_t2

0x700b,	// (0x00077bc4) cale_week_day_heading_pane_t3

0x7024,	// (0x00077bdd) cale_week_day_heading_pane_t4

0x703d,	// (0x00077bf6) cale_week_day_heading_pane_t5

0x7056,	// (0x00077c0f) cale_week_day_heading_pane_t6

0x706f,	// (0x00077c28) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0007fdb9) cale_week_day_heading_pane_t

0x1926,	// (0x000724df) bg_cale_side_pane

0x7088,	// (0x00077c41) cale_week_time_pane_t1

0x70b4,	// (0x00077c6d) cale_week_time_pane_t2

0x70e0,	// (0x00077c99) cale_week_time_pane_t3

0x710c,	// (0x00077cc5) cale_week_time_pane_t4

0x7138,	// (0x00077cf1) cale_week_time_pane_t5

0x7164,	// (0x00077d1d) cale_week_time_pane_t6

0x7190,	// (0x00077d49) cale_week_time_pane_t7

0x71bc,	// (0x00077d75) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0007fdc8) cale_week_time_pane_t

0x71e8,	// (0x00077da1) cell_cale_week_pane_g2

0x7204,	// (0x00077dbd) cell_cale_week_pane_g3_ParamLimits

0x7204,	// (0x00077dbd) cell_cale_week_pane_g3

0x1934,	// (0x000724ed) grid_highlight_pane_cp07

0x193c,	// (0x000724f5) listscroll_gms_pane

0x1946,	// (0x000724ff) grid_gms_pane

0x194f,	// (0x00072508) listscroll_gms_pane_g1

0x1957,	// (0x00072510) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0007fdd9) listscroll_gms_pane_g

0x721c,	// (0x00077dd5) scroll_pane_cp010

0x7225,	// (0x00077dde) cell_gms_pane_ParamLimits

0x7225,	// (0x00077dde) cell_gms_pane

0x7236,	// (0x00077def) cell_gms_pane_g1

0x195f,	// (0x00072518) cell_gms_pane_g2

0x18d2,	// (0x0007248b) cell_gms_pane_g3

0x1967,	// (0x00072520) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0007fdde) cell_gms_pane_g

0x1970,	// (0x00072529) grid_highlight_pane_cp09

0x8f55,	// (0x00079b0e) phob_pre_status_pane_g1

0x8f5d,	// (0x00079b16) phob_pre_status_pane_g2

0x8f65,	// (0x00079b1e) phob_pre_status_pane_g3

0x8f6d,	// (0x00079b26) phob_pre_status_pane_g4

0x0004,

0xf627,	// (0x000801e0) phob_pre_status_pane_g

0x8f7d,	// (0x00079b36) phob_pre_status_pane_t1

0x8f8b,	// (0x00079b44) phob_pre_status_pane_t2

0x8f99,	// (0x00079b52) phob_pre_status_pane_t3

0x0002,

0xf632,	// (0x000801eb) phob_pre_status_pane_t

0x13d8,	// (0x00071f91) bg_list_pane_cp05

0x7246,	// (0x00077dff) grid_vorec_pane

0x724e,	// (0x00077e07) vorec_t1

0x725c,	// (0x00077e15) vorec_t2

0x726a,	// (0x00077e23) vorec_t3

0x7278,	// (0x00077e31) vorec_t4

0x7286,	// (0x00077e3f) vorec_t5

0x7294,	// (0x00077e4d) vorec_t6

0x0006,

0xf22e,	// (0x0007fde7) vorec_t

0x72b0,	// (0x00077e69) wait_bar_pane_cp01

0xdeb5,	// (0x0007ea6e) cell_vorec_pane_ParamLimits

0xdeb5,	// (0x0007ea6e) cell_vorec_pane

0x19e2,	// (0x0007259b) cell_vorec_pane_g1

0x13d8,	// (0x00071f91) grid_highlight_pane_cp05

0x72c4,	// (0x00077e7d) cams_zoom_pane

0x72d0,	// (0x00077e89) image_vga_pane

0x72dd,	// (0x00077e96) main_camera_pane_g1

0x72e9,	// (0x00077ea2) main_camera_pane_g2

0x72f5,	// (0x00077eae) main_camera_pane_g3

0x7301,	// (0x00077eba) main_camera_pane_g4

0x730d,	// (0x00077ec6) main_camera_pane_g5

0x7319,	// (0x00077ed2) main_camera_pane_g6

0x7325,	// (0x00077ede) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0007fdf6) main_camera_pane_g

0x7331,	// (0x00077eea) main_camera_pane_t1

0x7343,	// (0x00077efc) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0007fe07) main_camera_pane_t

0x7367,	// (0x00077f20) cams_zoom_pane_cp_ParamLimits

0x7367,	// (0x00077f20) cams_zoom_pane_cp

0x738b,	// (0x00077f44) image_cif_pane_ParamLimits

0x738b,	// (0x00077f44) image_cif_pane

0x73a5,	// (0x00077f5e) image_subqcif_pane

0x73ad,	// (0x00077f66) main_video_pane_g1_ParamLimits

0x73ad,	// (0x00077f66) main_video_pane_g1

0x73cd,	// (0x00077f86) main_video_pane_g2_ParamLimits

0x73cd,	// (0x00077f86) main_video_pane_g2

0x73fb,	// (0x00077fb4) main_video_pane_g3_ParamLimits

0x73fb,	// (0x00077fb4) main_video_pane_g3

0x7424,	// (0x00077fdd) main_video_pane_g4_ParamLimits

0x7424,	// (0x00077fdd) main_video_pane_g4

0x744d,	// (0x00078006) main_video_pane_g5_ParamLimits

0x744d,	// (0x00078006) main_video_pane_g5

0x19f8,	// (0x000725b1) main_video_pane_g6_ParamLimits

0x19f8,	// (0x000725b1) main_video_pane_g6

0x0006,

0xf253,	// (0x0007fe0c) main_video_pane_g_ParamLimits

0xf253,	// (0x0007fe0c) main_video_pane_g

0x746f,	// (0x00078028) main_video_pane_t1_ParamLimits

0x746f,	// (0x00078028) main_video_pane_t1

0x1a12,	// (0x000725cb) cams_zoom_pane_g1

0x1a1b,	// (0x000725d4) cams_zoom_pane_g2

0x1a24,	// (0x000725dd) cams_zoom_pane_g3

0x1a2d,	// (0x000725e6) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0007fe1b) cams_zoom_pane_g

0x74b9,	// (0x00078072) grid_cams_pane

0x74c5,	// (0x0007807e) linegrid_cams_pane

0x74d1,	// (0x0007808a) cell_cams_pane_ParamLimits

0x74d1,	// (0x0007808a) cell_cams_pane

0x1a36,	// (0x000725ef) cams_burst_image_pane

0x1a3e,	// (0x000725f7) cell_cams_pane_g1

0x13d8,	// (0x00071f91) grid_highlight_pane_cp03

0x17c7,	// (0x00072380) mp_bg_pane_g1

0x13d8,	// (0x00071f91) bg_list_pane_cp03

0x280f,	// (0x000733c8) bg_mp_pane

0x2817,	// (0x000733d0) grid_mp_pane

0x281f,	// (0x000733d8) media_player_g1

0x2827,	// (0x000733e0) media_player_t1

0x2835,	// (0x000733ee) media_player_t2

0x2843,	// (0x000733fc) media_player_t3

0x2851,	// (0x0007340a) media_player_t4

0x285f,	// (0x00073418) media_player_t5

0x286d,	// (0x00073426) media_player_t6

0x287b,	// (0x00073434) media_player_t7

0x0006,

0xf611,	// (0x000801ca) media_player_t

0x2889,	// (0x00073442) wait_bar_pane_cp02

0xf5f6,	// (0x000801af) main_usb_pane_t

0x8f4c,	// (0x00079b05) cell_mp_pane

0x17c7,	// (0x00072380) cell_mp_pane_g1

0x13d8,	// (0x00071f91) grid_highlight_pane_cp06

0x1ae6,	// (0x0007269f) grid_skin_colour_pane

0x1aee,	// (0x000726a7) list_highlight_pane_cp03

0x7534,	// (0x000780ed) skin_g1

0x1af6,	// (0x000726af) skin_t1

0x1b05,	// (0x000726be) skin_t2

0x0001,

0xf297,	// (0x0007fe50) skin_t

0x753c,	// (0x000780f5) cell_skin_colour_pane_ParamLimits

0x753c,	// (0x000780f5) cell_skin_colour_pane

0x1b13,	// (0x000726cc) cell_skin_colour_pane_g1

0x7585,	// (0x0007813e) call_video_g1_ParamLimits

0x7585,	// (0x0007813e) call_video_g1

0x7591,	// (0x0007814a) call_video_g2_ParamLimits

0x7591,	// (0x0007814a) call_video_g2

0x0001,

0xf29c,	// (0x0007fe55) call_video_g_ParamLimits

0xf29c,	// (0x0007fe55) call_video_g

0x75c9,	// (0x00078182) call_video_uplink_pane_cp1_ParamLimits

0x75c9,	// (0x00078182) call_video_uplink_pane_cp1

0x1b2d,	// (0x000726e6) call_video_uplink_pane_cp2

0x7658,	// (0x00078211) video_down_crop_pane_ParamLimits

0x7658,	// (0x00078211) video_down_crop_pane

0x770e,	// (0x000782c7) video_down_pane_ParamLimits

0x770e,	// (0x000782c7) video_down_pane

0x1b35,	// (0x000726ee) video_down_subqcif_pane_ParamLimits

0x1b35,	// (0x000726ee) video_down_subqcif_pane

0x1b4d,	// (0x00072706) video_down_subqcif_pane_cp_ParamLimits

0x1b4d,	// (0x00072706) video_down_subqcif_pane_cp

0x1b71,	// (0x0007272a) im_reading_pane_ParamLimits

0x1b71,	// (0x0007272a) im_reading_pane

0x77ac,	// (0x00078365) im_writing_pane_ParamLimits

0x77ac,	// (0x00078365) im_writing_pane

0x77c2,	// (0x0007837b) im_reading_pane_t1

0x1b8b,	// (0x00072744) list_im_pane

0x1b9c,	// (0x00072755) scroll_pane_cp07

0x77fa,	// (0x000783b3) im_writing_pane_t1_ParamLimits

0x77fa,	// (0x000783b3) im_writing_pane_t1

0x1bb5,	// (0x0007276e) im_writing_pane_t2_ParamLimits

0x1bb5,	// (0x0007276e) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0007fe5f) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0007fe5f) im_writing_pane_t

0x13d8,	// (0x00071f91) input_focus_pane_cp04

0x13d8,	// (0x00071f91) input_focus_pane_cp05

0x780f,	// (0x000783c8) list_im_single_pane_ParamLimits

0x780f,	// (0x000783c8) list_im_single_pane

0x1bd2,	// (0x0007278b) list_single_im_pane_t1

0x8f12,	// (0x00079acb) blid_accuracy_pane

0x8f1a,	// (0x00079ad3) blid_compass_pane

0x8f22,	// (0x00079adb) main_location_t1

0x8f30,	// (0x00079ae9) main_location_t2

0x8f3e,	// (0x00079af7) main_location_t3

0x0002,

0xf620,	// (0x000801d9) main_location_t

0x13d8,	// (0x00071f91) aid_levels_location

0x17c7,	// (0x00072380) blid_accuracy_pane_g1

0x17c7,	// (0x00072380) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0007fec1) blid_accuracy_pane_g

0x1c0c,	// (0x000727c5) wml_content_pane

0x1c4a,	// (0x00072803) wml_button_pane_ParamLimits

0x1c4a,	// (0x00072803) wml_button_pane

0x7827,	// (0x000783e0) wml_list_single_large_pane_ParamLimits

0x7827,	// (0x000783e0) wml_list_single_large_pane

0x783e,	// (0x000783f7) wml_list_single_medium_pane_ParamLimits

0x783e,	// (0x000783f7) wml_list_single_medium_pane

0x7856,	// (0x0007840f) wml_list_single_small_pane_ParamLimits

0x7856,	// (0x0007840f) wml_list_single_small_pane

0x1c5e,	// (0x00072817) wml_selection_box_pane_ParamLimits

0x1c5e,	// (0x00072817) wml_selection_box_pane

0x1c71,	// (0x0007282a) wml_list_single_pane_t1

0x1c80,	// (0x00072839) wml_list_single_medium_pane_t1

0x1c8f,	// (0x00072848) wml_list_single_large_pane_t1

0x1c9e,	// (0x00072857) input_focus_pane_cp02_ParamLimits

0x1c9e,	// (0x00072857) input_focus_pane_cp02

0x1cb1,	// (0x0007286a) wml_selection_box_pane_g1

0x1cba,	// (0x00072873) wml_selection_box_pane_t1_ParamLimits

0x1cba,	// (0x00072873) wml_selection_box_pane_t1

0x1633,	// (0x000721ec) bg_wml_button_pane_ParamLimits

0x1633,	// (0x000721ec) bg_wml_button_pane

0x1cd2,	// (0x0007288b) wml_button_pane_g1

0x1cda,	// (0x00072893) wml_button_pane_t1

0x1cd2,	// (0x0007288b) wml_button_bg_pane_g1

0x1cea,	// (0x000728a3) wml_button_bg_pane_g2

0x1cf2,	// (0x000728ab) wml_button_bg_pane_g3

0x1cfa,	// (0x000728b3) wml_button_bg_pane_g4

0x1d02,	// (0x000728bb) wml_button_bg_pane_g5

0x1d0a,	// (0x000728c3) wml_button_bg_pane_g6

0x1d12,	// (0x000728cb) wml_button_bg_pane_g7

0x1d1a,	// (0x000728d3) wml_button_bg_pane_g8

0x1d22,	// (0x000728db) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0007fe64) wml_button_bg_pane_g

0x7871,	// (0x0007842a) bg_list_pane_cp02

0x1d2a,	// (0x000728e3) mce_header_pane_ParamLimits

0x1d2a,	// (0x000728e3) mce_header_pane

0x1d3e,	// (0x000728f7) mce_icon_pane

0x1d3e,	// (0x000728f7) mce_image_pane

0x1d47,	// (0x00072900) mce_text_pane_ParamLimits

0x1d47,	// (0x00072900) mce_text_pane

0x787a,	// (0x00078433) scroll_pane_cp03

0x787a,	// (0x00078433) scroll_pane_cp04

0x1d5b,	// (0x00072914) scroll_pane_cp05_ParamLimits

0x1d5b,	// (0x00072914) scroll_pane_cp05

0x7882,	// (0x0007843b) mce_header_field_pane_ParamLimits

0x7882,	// (0x0007843b) mce_header_field_pane

0x78a2,	// (0x0007845b) mce_header_field_pane_2_ParamLimits

0x78a2,	// (0x0007845b) mce_header_field_pane_2

0x78b8,	// (0x00078471) mce_header_field_pane_3

0x78c0,	// (0x00078479) list_single_mce_message_pane_ParamLimits

0x78c0,	// (0x00078479) list_single_mce_message_pane

0x78d7,	// (0x00078490) list_single_mce_smart_pane_ParamLimits

0x78d7,	// (0x00078490) list_single_mce_smart_pane

0x1d67,	// (0x00072920) input_focus_pane_cp03

0x1d70,	// (0x00072929) list_header_data_pane

0x78f9,	// (0x000784b2) mce_header_field_pane_t1

0x7907,	// (0x000784c0) list_single_mce_header_pane_ParamLimits

0x7907,	// (0x000784c0) list_single_mce_header_pane

0x1d78,	// (0x00072931) list_single_mce_header_pane_t1

0x1d87,	// (0x00072940) list_single_mce_message_pane_g1

0x1d90,	// (0x00072949) list_single_mce_message_pane_t1

0x793d,	// (0x000784f6) bg_cale_heading_pane_cp01_ParamLimits

0x793d,	// (0x000784f6) bg_cale_heading_pane_cp01

0x1d9f,	// (0x00072958) bg_cale_pane_cp02_ParamLimits

0x1d9f,	// (0x00072958) bg_cale_pane_cp02

0x7960,	// (0x00078519) cale_month_corner_pane

0x7976,	// (0x0007852f) cale_month_day_heading_pane_ParamLimits

0x7976,	// (0x0007852f) cale_month_day_heading_pane

0x7999,	// (0x00078552) cale_month_pane_g1_ParamLimits

0x7999,	// (0x00078552) cale_month_pane_g1

0x79b5,	// (0x0007856e) cale_month_pane_g2_ParamLimits

0x79b5,	// (0x0007856e) cale_month_pane_g2

0x79ce,	// (0x00078587) cale_month_pane_g3_ParamLimits

0x79ce,	// (0x00078587) cale_month_pane_g3

0x79fa,	// (0x000785b3) cale_month_pane_g4_ParamLimits

0x79fa,	// (0x000785b3) cale_month_pane_g4

0x7a26,	// (0x000785df) cale_month_pane_g5_ParamLimits

0x7a26,	// (0x000785df) cale_month_pane_g5

0x7a52,	// (0x0007860b) cale_month_pane_g6_ParamLimits

0x7a52,	// (0x0007860b) cale_month_pane_g6

0x7a7e,	// (0x00078637) cale_month_pane_g7_ParamLimits

0x7a7e,	// (0x00078637) cale_month_pane_g7

0x7aaa,	// (0x00078663) cale_month_pane_g8_ParamLimits

0x7aaa,	// (0x00078663) cale_month_pane_g8

0x7ad6,	// (0x0007868f) cale_month_pane_g9_ParamLimits

0x7ad6,	// (0x0007868f) cale_month_pane_g9

0x7b00,	// (0x000786b9) cale_month_pane_g10_ParamLimits

0x7b00,	// (0x000786b9) cale_month_pane_g10

0x7b2a,	// (0x000786e3) cale_month_pane_g11_ParamLimits

0x7b2a,	// (0x000786e3) cale_month_pane_g11

0x7b54,	// (0x0007870d) cale_month_pane_g12_ParamLimits

0x7b54,	// (0x0007870d) cale_month_pane_g12

0x7b7e,	// (0x00078737) cale_month_pane_g13_ParamLimits

0x7b7e,	// (0x00078737) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0007fe77) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0007fe77) cale_month_pane_g

0x7ba8,	// (0x00078761) cale_month_week_pane

0x7bb9,	// (0x00078772) grid_cale_month_pane_ParamLimits

0x7bb9,	// (0x00078772) grid_cale_month_pane

0x7bd7,	// (0x00078790) cale_month_day_heading_pane_t1

0x7c35,	// (0x000787ee) cale_month_day_heading_pane_t2

0x7c9a,	// (0x00078853) cale_month_day_heading_pane_t3

0x7cff,	// (0x000788b8) cale_month_day_heading_pane_t4

0x7d64,	// (0x0007891d) cale_month_day_heading_pane_t5

0x7dc9,	// (0x00078982) cale_month_day_heading_pane_t6

0x7e2e,	// (0x000789e7) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x0007fe92) cale_month_day_heading_pane_t

0x1926,	// (0x000724df) bg_cale_side_pane_cp01

0x7e93,	// (0x00078a4c) cale_month_week_pane_t1

0x7eaa,	// (0x00078a63) cale_month_week_pane_t2

0x7ec1,	// (0x00078a7a) cale_month_week_pane_t3

0x7ed8,	// (0x00078a91) cale_month_week_pane_t4

0x7eef,	// (0x00078aa8) cale_month_week_pane_t5

0x7f06,	// (0x00078abf) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x0007fea1) cale_month_week_pane_t

0x7f1d,	// (0x00078ad6) cell_cale_month_pane_ParamLimits

0x7f1d,	// (0x00078ad6) cell_cale_month_pane

0x7fc3,	// (0x00078b7c) cell_cale_month_pane_g1

0x7fcf,	// (0x00078b88) cell_cale_month_pane_t1_ParamLimits

0x7fcf,	// (0x00078b88) cell_cale_month_pane_t1

0x1934,	// (0x000724ed) grid_highlight_pane_cp08

0x17c7,	// (0x00072380) main_smil_g1

0x7feb,	// (0x00078ba4) smil_status_pane

0x1e0a,	// (0x000729c3) smil_text_pane

0x26ef,	// (0x000732a8) bg_popup_call3_rect_pane_g8

0x26f7,	// (0x000732b0) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0008015a) bg_popup_call3_rect_pane_g

0x29c0,	// (0x00073579) smil_status_volume_pane_g1

0x1e14,	// (0x000729cd) smil_status_pane_t1

0x9253,	// (0x00079e0c) volume_smil_pane

0x1e2b,	// (0x000729e4) list_smil_text_pane

0x7ffc,	// (0x00078bb5) scroll_pane_cp011

0x8005,	// (0x00078bbe) smil_text_list_pane_t1_ParamLimits

0x8005,	// (0x00078bbe) smil_text_list_pane_t1

0x804a,	// (0x00078c03) aid_volume_smil_ParamLimits

0x804a,	// (0x00078c03) aid_volume_smil

0x17c7,	// (0x00072380) smil_volume_pane_g1

0x17c7,	// (0x00072380) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0007fec1) smil_volume_pane_g

0x1724,	// (0x000722dd) listscroll_cale_day_pane

0x1e57,	// (0x00072a10) bg_cale_pane

0x1e6f,	// (0x00072a28) list_cale_pane

0x1e80,	// (0x00072a39) scroll_pane_cp09

0x1e91,	// (0x00072a4a) cale_bg_pane_g1

0x1e99,	// (0x00072a52) cale_bg_pane_g2

0x1ea1,	// (0x00072a5a) cale_bg_pane_g3

0x1ea9,	// (0x00072a62) cale_bg_pane_g4

0x1eb1,	// (0x00072a6a) cale_bg_pane_g5

0x1eb9,	// (0x00072a72) cale_bg_pane_g6

0x1ec1,	// (0x00072a7a) cale_bg_pane_g7

0x1ec9,	// (0x00072a82) cale_bg_pane_g8

0x1ed1,	// (0x00072a8a) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x0007fec6) cale_bg_pane_g

0x806c,	// (0x00078c25) list_cale_time_pane_ParamLimits

0x806c,	// (0x00078c25) list_cale_time_pane

0x1ed9,	// (0x00072a92) list_cale_time_pane_g1_ParamLimits

0x1ed9,	// (0x00072a92) list_cale_time_pane_g1

0x1ee5,	// (0x00072a9e) list_cale_time_pane_g2_ParamLimits

0x1ee5,	// (0x00072a9e) list_cale_time_pane_g2

0x8083,	// (0x00078c3c) list_cale_time_pane_g3_ParamLimits

0x8083,	// (0x00078c3c) list_cale_time_pane_g3

0x808f,	// (0x00078c48) list_cale_time_pane_g4_ParamLimits

0x808f,	// (0x00078c48) list_cale_time_pane_g4

0x809b,	// (0x00078c54) list_cale_time_pane_g5_ParamLimits

0x809b,	// (0x00078c54) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0007fed9) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0007fed9) list_cale_time_pane_g

0x1eff,	// (0x00072ab8) list_cale_time_pane_t1_ParamLimits

0x1eff,	// (0x00072ab8) list_cale_time_pane_t1

0x1f27,	// (0x00072ae0) list_cale_time_pane_t2_ParamLimits

0x1f27,	// (0x00072ae0) list_cale_time_pane_t2

0x8427,	// (0x00078fe0) aid_blid_cardinal_pane

0x8465,	// (0x0007901e) compass_pane_t4

0x1f4f,	// (0x00072b08) list_cale_time_pane_t4_ParamLimits

0x1f4f,	// (0x00072b08) list_cale_time_pane_t4

0x8473,	// (0x0007902c) compass_pane_t5

0x8481,	// (0x0007903a) compass_pane_t6

0x848f,	// (0x00079048) compass_pane_t7

0xe09d,	// (0x0007ec56) navi_pane_cc_t1

0xe241,	// (0x0007edfa) aid_phob_thumbnail_center_pane

0x8abf,	// (0x00079678) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0007fee6) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0007fee6) list_cale_time_pane_t

0x1031,	// (0x00071bea) bg_popup_window_pane_cp02_ParamLimits

0x1031,	// (0x00071bea) bg_popup_window_pane_cp02

0x1f77,	// (0x00072b30) heading_pane_cp01_ParamLimits

0x1f77,	// (0x00072b30) heading_pane_cp01

0x1f83,	// (0x00072b3c) loc_req_pane_ParamLimits

0x1f83,	// (0x00072b3c) loc_req_pane

0x1f93,	// (0x00072b4c) loc_type_pane_ParamLimits

0x1f93,	// (0x00072b4c) loc_type_pane

0x5023,	// (0x00075bdc) loc_type_pane_t1_ParamLimits

0x5023,	// (0x00075bdc) loc_type_pane_t1

0x5035,	// (0x00075bee) loc_type_pane_t2_ParamLimits

0x5035,	// (0x00075bee) loc_type_pane_t2

0x5047,	// (0x00075c00) loc_type_pane_t3_ParamLimits

0x5047,	// (0x00075c00) loc_type_pane_t3

0x0002,

0xf334,	// (0x0007feed) loc_type_pane_t_ParamLimits

0xf334,	// (0x0007feed) loc_type_pane_t

0x5059,	// (0x00075c12) list_loc_req_pane

0x5063,	// (0x00075c1c) scroll_pane_cp012

0x80a7,	// (0x00078c60) list_single_loc_request_popup_menu_pane_ParamLimits

0x80a7,	// (0x00078c60) list_single_loc_request_popup_menu_pane

0x506c,	// (0x00075c25) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x506c,	// (0x00075c25) list_single_loc_request_popup_menu_pane_g1

0x5078,	// (0x00075c31) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x5078,	// (0x00075c31) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0007fef4) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0007fef4) list_single_loc_request_popup_menu_pane_g

0x5084,	// (0x00075c3d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x5084,	// (0x00075c3d) list_single_loc_request_popup_menu_pane_t1

0x80b9,	// (0x00078c72) bg_popup_window_pane_cp03_ParamLimits

0x80b9,	// (0x00078c72) bg_popup_window_pane_cp03

0x80c7,	// (0x00078c80) heading_loc_req_pane_ParamLimits

0x80c7,	// (0x00078c80) heading_loc_req_pane

0x80d3,	// (0x00078c8c) popup_dyc_status_message_window_g1_ParamLimits

0x80d3,	// (0x00078c8c) popup_dyc_status_message_window_g1

0x80df,	// (0x00078c98) popup_dyc_status_message_window_t1_ParamLimits

0x80df,	// (0x00078c98) popup_dyc_status_message_window_t1

0x80f1,	// (0x00078caa) popup_dyc_status_message_window_t2_ParamLimits

0x80f1,	// (0x00078caa) popup_dyc_status_message_window_t2

0x8103,	// (0x00078cbc) popup_dyc_status_message_window_t3_ParamLimits

0x8103,	// (0x00078cbc) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x0007fef9) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x0007fef9) popup_dyc_status_message_window_t

0x13d8,	// (0x00071f91) bg_heading_pane_cp01

0x509a,	// (0x00075c53) heading_loc_req_pane_g1

0x50a2,	// (0x00075c5b) heading_loc_req_pane_g2

0x50aa,	// (0x00075c63) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0007ff00) heading_loc_req_pane_g

0x50b2,	// (0x00075c6b) heading_loc_req_pane_t1

0x50c1,	// (0x00075c7a) bg_popup_sub_pane_cp01_ParamLimits

0x50c1,	// (0x00075c7a) bg_popup_sub_pane_cp01

0x50cf,	// (0x00075c88) popup_cale_events_window_g1_ParamLimits

0x50cf,	// (0x00075c88) popup_cale_events_window_g1

0x50ef,	// (0x00075ca8) popup_cale_events_window_g2_ParamLimits

0x50ef,	// (0x00075ca8) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0007ff34) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0007ff34) popup_cale_events_window_g

0x510f,	// (0x00075cc8) popup_cale_events_window_t1_ParamLimits

0x510f,	// (0x00075cc8) popup_cale_events_window_t1

0x5121,	// (0x00075cda) popup_cale_events_window_t2_ParamLimits

0x5121,	// (0x00075cda) popup_cale_events_window_t2

0x515f,	// (0x00075d18) popup_cale_events_window_t3_ParamLimits

0x515f,	// (0x00075d18) popup_cale_events_window_t3

0x5199,	// (0x00075d52) popup_cale_events_window_t4_ParamLimits

0x5199,	// (0x00075d52) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0007ff39) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0007ff39) popup_cale_events_window_t

0x8189,	// (0x00078d42) call_type_pane

0xdec8,	// (0x0007ea81) popup_call_status_window_g1

0x8195,	// (0x00078d4e) popup_call_status_window_g2

0x81a1,	// (0x00078d5a) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0007ff42) popup_call_status_window_g

0x81ad,	// (0x00078d66) call_type_pane_g1

0x81b6,	// (0x00078d6f) call_type_pane_g2

0x0001,

0xf390,	// (0x0007ff49) call_type_pane_g

0x13d8,	// (0x00071f91) bg_popup_sub_pane_cp02

0x81bf,	// (0x00078d78) listscroll_popup_wml_pane

0x81c7,	// (0x00078d80) list_wml_pane

0x81d1,	// (0x00078d8a) scroll_pane_cp013

0x81da,	// (0x00078d93) list_single_graphic_popup_wml_pane_ParamLimits

0x81da,	// (0x00078d93) list_single_graphic_popup_wml_pane

0x17c7,	// (0x00072380) list_single_graphic_popup_wml_pane_g1

0x81ee,	// (0x00078da7) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0007ff4e) list_single_graphic_popup_wml_pane_g

0x81f6,	// (0x00078daf) list_single_graphic_popup_wml_pane_t1

0x820c,	// (0x00078dc5) aid_call_pane

0x162b,	// (0x000721e4) popup_clock_analogue_window_g1

0x162b,	// (0x000721e4) popup_clock_analogue_window_g2

0x8214,	// (0x00078dcd) popup_clock_analogue_window_g3

0x8214,	// (0x00078dcd) popup_clock_analogue_window_g4

0x17c7,	// (0x00072380) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0007ff53) popup_clock_analogue_window_g

0x821c,	// (0x00078dd5) popup_clock_analogue_window_t1

0x822a,	// (0x00078de3) clock_digital_number_pane_ParamLimits

0x822a,	// (0x00078de3) clock_digital_number_pane

0x8236,	// (0x00078def) clock_digital_number_pane_cp02_ParamLimits

0x8236,	// (0x00078def) clock_digital_number_pane_cp02

0x8242,	// (0x00078dfb) clock_digital_number_pane_cp03_ParamLimits

0x8242,	// (0x00078dfb) clock_digital_number_pane_cp03

0x824e,	// (0x00078e07) clock_digital_number_pane_cp04_ParamLimits

0x824e,	// (0x00078e07) clock_digital_number_pane_cp04

0x825a,	// (0x00078e13) clock_digital_separator_pane_ParamLimits

0x825a,	// (0x00078e13) clock_digital_separator_pane

0x8266,	// (0x00078e1f) popup_clock_digital_window_t1

0x17c7,	// (0x00072380) clock_digital_number_pane_g1

0x17c7,	// (0x00072380) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0007fec1) clock_digital_number_pane_g

0x17c7,	// (0x00072380) clock_digital_separator_pane_g1

0x17c7,	// (0x00072380) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0007fec1) clock_digital_separator_pane_g

0x13d8,	// (0x00071f91) bg_popup_window_pane_cp04

0x8283,	// (0x00078e3c) heading_pane_cp03

0x828b,	// (0x00078e44) listscroll_popup_gms_pane

0x8293,	// (0x00078e4c) grid_large_graphic_popup_pane

0x829d,	// (0x00078e56) listscroll_popup_gms_pane_g1

0xded6,	// (0x0007ea8f) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0007ff5e) listscroll_popup_gms_pane_g

0x1c42,	// (0x000727fb) scroll_pane_cp014

0x82a5,	// (0x00078e5e) cell_large_graphic_popup_pane_ParamLimits

0x82a5,	// (0x00078e5e) cell_large_graphic_popup_pane

0x82bc,	// (0x00078e75) cell_large_graphic_popup_pane_g1_ParamLimits

0x82bc,	// (0x00078e75) cell_large_graphic_popup_pane_g1

0xdede,	// (0x0007ea97) cell_large_graphic_popup_pane_g2_ParamLimits

0xdede,	// (0x0007ea97) cell_large_graphic_popup_pane_g2

0xdeea,	// (0x0007eaa3) cell_large_graphic_popup_pane_g3_ParamLimits

0xdeea,	// (0x0007eaa3) cell_large_graphic_popup_pane_g3

0xdef7,	// (0x0007eab0) cell_large_graphic_popup_pane_g4_ParamLimits

0xdef7,	// (0x0007eab0) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x0007ff63) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x0007ff63) cell_large_graphic_popup_pane_g

0xdf07,	// (0x0007eac0) grid_highlight_pane_cp010

0x17c7,	// (0x00072380) bg_popup_call_pane_g1

0xdf11,	// (0x0007eaca) list_single_graphic_popup_conf_pane_ParamLimits

0xdf11,	// (0x0007eaca) list_single_graphic_popup_conf_pane

0xdf24,	// (0x0007eadd) list_highlight_pane_cp01

0xdf2d,	// (0x0007eae6) list_single_graphic_popup_conf_pane_g1

0xdf35,	// (0x0007eaee) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0007ff6c) list_single_graphic_popup_conf_pane_g

0xdf3d,	// (0x0007eaf6) list_single_graphic_popup_conf_pane_t1

0xdf4b,	// (0x0007eb04) linegrid_cams_pane_g1

0x82c8,	// (0x00078e81) linegrid_cams_pane_g2

0x18d2,	// (0x0007248b) linegrid_cams_pane_g3

0xdf54,	// (0x0007eb0d) linegrid_cams_pane_g4

0x82d1,	// (0x00078e8a) linegrid_cams_pane_g5

0x82da,	// (0x00078e93) linegrid_cams_pane_g6

0x1967,	// (0x00072520) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0007ff71) linegrid_cams_pane_g

0xdf5d,	// (0x0007eb16) popup_clock_analogue_window

0xdf5d,	// (0x0007eb16) popup_clock_digital_window

0x13d8,	// (0x00071f91) popup_phob_thumbnail_window

0x17c7,	// (0x00072380) call_video_uplink_pane_g1

0xdf66,	// (0x0007eb1f) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x0007ff80) call_video_uplink_pane_g

0x1934,	// (0x000724ed) video_uplink_pane

0xdf6e,	// (0x0007eb27) mce_image_pane_g1

0x82e3,	// (0x00078e9c) mce_image_pane_g2

0x82eb,	// (0x00078ea4) mce_image_pane_g3

0x82f3,	// (0x00078eac) mce_image_pane_g4

0x82fb,	// (0x00078eb4) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0007ff85) mce_image_pane_g

0xdf78,	// (0x0007eb31) control_top_pane_stacon_cp01_ParamLimits

0xdf78,	// (0x0007eb31) control_top_pane_stacon_cp01

0xdf88,	// (0x0007eb41) uni_indicator_pane_stacon_cp01_ParamLimits

0xdf88,	// (0x0007eb41) uni_indicator_pane_stacon_cp01

0xdf99,	// (0x0007eb52) bg_popup_sub_pane_cp03

0xdfa3,	// (0x0007eb5c) chi_dic_find_pane

0x8303,	// (0x00078ebc) listscroll_chi_dic_pane

0xdfab,	// (0x0007eb64) main_pane_chidic_g1

0xdfb3,	// (0x0007eb6c) chi_dic_find_pane_t1

0xdfc1,	// (0x0007eb7a) find_chidic_pane

0xdfca,	// (0x0007eb83) chi_dic_list_pane_ParamLimits

0xdfca,	// (0x0007eb83) chi_dic_list_pane

0xdfdb,	// (0x0007eb94) scroll_pane_cp020

0xdfe3,	// (0x0007eb9c) find_chidic_pane_t1

0x13d8,	// (0x00071f91) input_focus_pane_cp06

0x8315,	// (0x00078ece) list_chi_dic_pane_ParamLimits

0x8315,	// (0x00078ece) list_chi_dic_pane

0x8328,	// (0x00078ee1) list_chi_dic_pane_t1_ParamLimits

0x8328,	// (0x00078ee1) list_chi_dic_pane_t1

0x13d8,	// (0x00071f91) list_highlight_pane_cp020

0xdff2,	// (0x0007ebab) bg_cale_heading_pane_g1

0x833b,	// (0x00078ef4) bg_cale_heading_pane_g2

0x8343,	// (0x00078efc) bg_cale_heading_pane_g3

0x834b,	// (0x00078f04) bg_cale_heading_pane_g4

0x8353,	// (0x00078f0c) bg_cale_heading_pane_g5

0x835b,	// (0x00078f14) bg_cale_heading_pane_g6

0x8363,	// (0x00078f1c) bg_cale_heading_pane_g7

0x836b,	// (0x00078f24) bg_cale_heading_pane_g8

0x8373,	// (0x00078f2c) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x0007ff90) bg_cale_heading_pane_g

0xdff2,	// (0x0007ebab) bg_cale_side_pane_g1

0x837b,	// (0x00078f34) bg_cale_side_pane_g2

0x8383,	// (0x00078f3c) bg_cale_side_pane_g3

0x838b,	// (0x00078f44) bg_cale_side_pane_g4

0x8393,	// (0x00078f4c) bg_cale_side_pane_g5

0x839b,	// (0x00078f54) bg_cale_side_pane_g6

0x83a3,	// (0x00078f5c) bg_cale_side_pane_g7

0x83ab,	// (0x00078f64) bg_cale_side_pane_g8

0x83b3,	// (0x00078f6c) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x0007ffa3) bg_cale_side_pane_g

0x83bb,	// (0x00078f74) popup_call_status_window_ParamLimits

0x83bb,	// (0x00078f74) popup_call_status_window

0xdffa,	// (0x0007ebb3) stacon_top_pane

0xe002,	// (0x0007ebbb) status_pane_ParamLimits

0xe002,	// (0x0007ebbb) status_pane

0xe01c,	// (0x0007ebd5) status_small_pane

0xe024,	// (0x0007ebdd) control_pane

0x13d8,	// (0x00071f91) stacon_bottom_pane

0xe02c,	// (0x0007ebe5) list_single_mce_smart_pane_t1_ParamLimits

0xe02c,	// (0x0007ebe5) list_single_mce_smart_pane_t1

0xe03f,	// (0x0007ebf8) list_single_mce_smart_pane_t2_ParamLimits

0xe03f,	// (0x0007ebf8) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x0007ffb6) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x0007ffb6) list_single_mce_smart_pane_t

0x83ca,	// (0x00078f83) compass_pane

0x83d3,	// (0x00078f8c) main_location2_pane_t1

0x83e9,	// (0x00078fa2) main_location2_pane_t2

0x83ff,	// (0x00078fb8) main_location2_pane_t3

0x0003,

0xf402,	// (0x0007ffbb) main_location2_pane_t

0xe067,	// (0x0007ec20) compass_pane_g1_ParamLimits

0xe067,	// (0x0007ec20) compass_pane_g1

0x8447,	// (0x00079000) compass_pane_t1

0x8456,	// (0x0007900f) compass_pane_t2

0x0005,

0xf40b,	// (0x0007ffc4) compass_pane_t

0x849d,	// (0x00079056) text_secondary_cp61

0xe094,	// (0x0007ec4d) navi_pane_cams_g5

0xe0d5,	// (0x0007ec8e) navi_pane_im_t1

0xe0e3,	// (0x0007ec9c) navi_pane_mp_g1_ParamLimits

0xe0e3,	// (0x0007ec9c) navi_pane_mp_g1

0xe0f7,	// (0x0007ecb0) navi_pane_mp_g2_ParamLimits

0xe0f7,	// (0x0007ecb0) navi_pane_mp_g2

0xe103,	// (0x0007ecbc) navi_pane_mp_g3_ParamLimits

0xe103,	// (0x0007ecbc) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0007ffd8) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0007ffd8) navi_pane_mp_g

0xe10f,	// (0x0007ecc8) navi_pane_mp_t1

0xe11d,	// (0x0007ecd6) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0007ffdf) navi_pane_mp_t

0xe18a,	// (0x0007ed43) navi_pane_vt_g1

0xe10f,	// (0x0007ecc8) navi_pane_vt_t1

0xe192,	// (0x0007ed4b) navi_slider_pane

0xe19a,	// (0x0007ed53) zooming_pane

0xe1a2,	// (0x0007ed5b) navi_slider_pane_g1

0x8514,	// (0x000790cd) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0007ffe6) navi_slider_pane_g

0xe1c6,	// (0x0007ed7f) aid_levels_zoom

0xe1ce,	// (0x0007ed87) zooming_pane_g1

0xe1d6,	// (0x0007ed8f) zooming_pane_g2

0xe1d6,	// (0x0007ed8f) zooming_pane_g3

0x0002,

0xf43c,	// (0x0007fff5) zooming_pane_g

0xe1de,	// (0x0007ed97) level_10_zoom

0xe1e7,	// (0x0007eda0) level_11_zoom

0xe1f0,	// (0x0007eda9) level_1_zoom

0xe1f9,	// (0x0007edb2) level_2_zoom

0xe202,	// (0x0007edbb) level_3_zoom

0xe20b,	// (0x0007edc4) level_4_zoom

0xe214,	// (0x0007edcd) level_5_zoom

0xe21d,	// (0x0007edd6) level_6_zoom

0xe226,	// (0x0007eddf) level_7_zoom

0xe22f,	// (0x0007ede8) level_8_zoom

0xe238,	// (0x0007edf1) level_9_zoom

0xe249,	// (0x0007ee02) popup_phob_thumbnail_window_g1

0xe251,	// (0x0007ee0a) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0007fffc) popup_phob_thumbnail_window_g

0x2891,	// (0x0007344a) level_1_location

0x2899,	// (0x00073452) level_2_location

0x28a1,	// (0x0007345a) level_3_location

0x28a9,	// (0x00073462) level_4_location

0xe19a,	// (0x0007ed53) level_5_location

0x8526,	// (0x000790df) mce_icon_pane_g1

0x852e,	// (0x000790e7) mce_icon_pane_g2

0x0001,

0xf448,	// (0x00080001) mce_icon_pane_g

0x8536,	// (0x000790ef) main_mup_pane_g1_ParamLimits

0x8536,	// (0x000790ef) main_mup_pane_g1

0x854e,	// (0x00079107) main_mup_pane_g2_ParamLimits

0x854e,	// (0x00079107) main_mup_pane_g2

0x856a,	// (0x00079123) main_mup_pane_g3_ParamLimits

0x856a,	// (0x00079123) main_mup_pane_g3

0x8586,	// (0x0007913f) main_mup_pane_g4_ParamLimits

0x8586,	// (0x0007913f) main_mup_pane_g4

0x85a2,	// (0x0007915b) main_mup_pane_g5_ParamLimits

0x85a2,	// (0x0007915b) main_mup_pane_g5

0x85bf,	// (0x00079178) main_mup_pane_g6_ParamLimits

0x85bf,	// (0x00079178) main_mup_pane_g6

0x85db,	// (0x00079194) main_mup_pane_g7_ParamLimits

0x85db,	// (0x00079194) main_mup_pane_g7

0x85f7,	// (0x000791b0) main_mup_pane_g8_ParamLimits

0x85f7,	// (0x000791b0) main_mup_pane_g8

0x8613,	// (0x000791cc) main_mup_pane_g9_ParamLimits

0x8613,	// (0x000791cc) main_mup_pane_g9

0x862a,	// (0x000791e3) main_mup_pane_g10_ParamLimits

0x862a,	// (0x000791e3) main_mup_pane_g10

0x8641,	// (0x000791fa) main_mup_pane_g11_ParamLimits

0x8641,	// (0x000791fa) main_mup_pane_g11

0x8655,	// (0x0007920e) main_mup_pane_g12_ParamLimits

0x8655,	// (0x0007920e) main_mup_pane_g12

0x8661,	// (0x0007921a) main_mup_pane_g13_ParamLimits

0x8661,	// (0x0007921a) main_mup_pane_g13

0x000c,

0xf44d,	// (0x00080006) main_mup_pane_g_ParamLimits

0xf44d,	// (0x00080006) main_mup_pane_g

0x8675,	// (0x0007922e) main_mup_pane_t1_ParamLimits

0x8675,	// (0x0007922e) main_mup_pane_t1

0x8692,	// (0x0007924b) main_mup_pane_t2_ParamLimits

0x8692,	// (0x0007924b) main_mup_pane_t2

0x86ac,	// (0x00079265) main_mup_pane_t3_ParamLimits

0x86ac,	// (0x00079265) main_mup_pane_t3

0x86c6,	// (0x0007927f) main_mup_pane_t4_ParamLimits

0x86c6,	// (0x0007927f) main_mup_pane_t4

0x86d8,	// (0x00079291) main_mup_pane_t5_ParamLimits

0x86d8,	// (0x00079291) main_mup_pane_t5

0x86ea,	// (0x000792a3) main_mup_pane_t6_ParamLimits

0x86ea,	// (0x000792a3) main_mup_pane_t6

0x0005,

0xf468,	// (0x00080021) main_mup_pane_t_ParamLimits

0xf468,	// (0x00080021) main_mup_pane_t

0x8700,	// (0x000792b9) mup_progress_pane_ParamLimits

0x8700,	// (0x000792b9) mup_progress_pane

0x870c,	// (0x000792c5) mup_visualizer_pane_ParamLimits

0x870c,	// (0x000792c5) mup_visualizer_pane

0x873a,	// (0x000792f3) mup_volume_pane_ParamLimits

0x873a,	// (0x000792f3) mup_volume_pane

0xdec8,	// (0x0007ea81) mup_visualizer_pane_g1_ParamLimits

0xdec8,	// (0x0007ea81) mup_visualizer_pane_g1

0xdec8,	// (0x0007ea81) mup_visualizer_pane_g2_ParamLimits

0xdec8,	// (0x0007ea81) mup_visualizer_pane_g2

0xe067,	// (0x0007ec20) mup_visualizer_pane_g3_ParamLimits

0xe067,	// (0x0007ec20) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0008002e) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0008002e) mup_visualizer_pane_g

0x17c7,	// (0x00072380) mup_volume_pane_g1

0xe261,	// (0x0007ee1a) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x00080035) mup_volume_pane_g

0x17c7,	// (0x00072380) mup_progress_pane_g1

0xe26a,	// (0x0007ee23) mup_progress_pane_g2

0xe273,	// (0x0007ee2c) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0008003a) mup_progress_pane_g

0x13d8,	// (0x00071f91) bg_popup_window_pane_cp05

0xe27c,	// (0x0007ee35) heading_pane_cp02_ParamLimits

0xe27c,	// (0x0007ee35) heading_pane_cp02

0xe296,	// (0x0007ee4f) list_popup_blid_pane

0xe29e,	// (0x0007ee57) list_blid_sat_info_pane_ParamLimits

0xe29e,	// (0x0007ee57) list_blid_sat_info_pane

0xe2b1,	// (0x0007ee6a) list_blid_sat_info_pane_g1

0xe2b9,	// (0x0007ee72) list_blid_sat_info_pane_t1

0x882d,	// (0x000793e6) mup_equalizer_pane_ParamLimits

0x882d,	// (0x000793e6) mup_equalizer_pane

0x8846,	// (0x000793ff) mup_equalizer_pane_cp1_ParamLimits

0x8846,	// (0x000793ff) mup_equalizer_pane_cp1

0x885f,	// (0x00079418) mup_equalizer_pane_cp2_ParamLimits

0x885f,	// (0x00079418) mup_equalizer_pane_cp2

0x8878,	// (0x00079431) mup_equalizer_pane_cp3_ParamLimits

0x8878,	// (0x00079431) mup_equalizer_pane_cp3

0x8891,	// (0x0007944a) mup_equalizer_pane_cp4_ParamLimits

0x8891,	// (0x0007944a) mup_equalizer_pane_cp4

0x88aa,	// (0x00079463) mup_equalizer_pane_cp5

0x88bc,	// (0x00079475) mup_equalizer_pane_cp6

0x88ce,	// (0x00079487) mup_equalizer_pane_cp7

0x276f,	// (0x00073328) bg_popup_call_poc_act_pane_g9

0x2777,	// (0x00073330) bg_popup_call_poc_act_pane_g10

0x277f,	// (0x00073338) bg_popup_call_poc_act_pane_g11

0x000a,

0x1633,	// (0x000721ec) mup_scale_pane

0x17c7,	// (0x00072380) mup_scale_pane_g1

0xe2c7,	// (0x0007ee80) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x00080056) mup_scale_pane_g

0xe2eb,	// (0x0007eea4) msg_data_pane

0xe2f3,	// (0x0007eeac) scroll_pane_cp017

0x88f2,	// (0x000794ab) bg_list_pane_cp04_ParamLimits

0x88f2,	// (0x000794ab) bg_list_pane_cp04

0xe2fb,	// (0x0007eeb4) msg_data_pane_g1

0x82e3,	// (0x00078e9c) msg_data_pane_g2

0x82eb,	// (0x00078ea4) msg_data_pane_g3

0x890a,	// (0x000794c3) msg_data_pane_g4

0x82fb,	// (0x00078eb4) msg_data_pane_g5

0x8526,	// (0x000790df) msg_data_pane_g6

0x8912,	// (0x000794cb) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x00080065) msg_data_pane_g

0x891a,	// (0x000794d3) msg_text_pane_ParamLimits

0x891a,	// (0x000794d3) msg_text_pane

0x8940,	// (0x000794f9) qrid_highlight_pane_cp011_ParamLimits

0x8940,	// (0x000794f9) qrid_highlight_pane_cp011

0x13d8,	// (0x00071f91) msg_body_pane

0x13d8,	// (0x00071f91) msg_header_pane

0xe30c,	// (0x0007eec5) input_focus_pane_cp07

0x8962,	// (0x0007951b) msg_header_pane_t1_ParamLimits

0x8962,	// (0x0007951b) msg_header_pane_t1

0x8974,	// (0x0007952d) msg_header_pane_t2_ParamLimits

0x8974,	// (0x0007952d) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x00080079) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x00080079) msg_header_pane_t

0xe321,	// (0x0007eeda) msg_body_pane_g1

0x8986,	// (0x0007953f) msg_body_pane_t1_ParamLimits

0x8986,	// (0x0007953f) msg_body_pane_t1

0x89b1,	// (0x0007956a) msg_body_pane_t2_ParamLimits

0x89b1,	// (0x0007956a) msg_body_pane_t2

0x89c3,	// (0x0007957c) msg_body_pane_t3_ParamLimits

0x89c3,	// (0x0007957c) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0008007e) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0008007e) msg_body_pane_t

0x8a23,	// (0x000795dc) main_viewer_pane_g1_ParamLimits

0x8a23,	// (0x000795dc) main_viewer_pane_g1

0x8a2f,	// (0x000795e8) main_viewer_pane_g2_ParamLimits

0x8a2f,	// (0x000795e8) main_viewer_pane_g2

0x8a3b,	// (0x000795f4) main_viewer_pane_g3_ParamLimits

0x8a3b,	// (0x000795f4) main_viewer_pane_g3

0x8a4a,	// (0x00079603) main_viewer_pane_g4_ParamLimits

0x8a4a,	// (0x00079603) main_viewer_pane_g4

0x8a59,	// (0x00079612) main_viewer_pane_g5_ParamLimits

0x8a59,	// (0x00079612) main_viewer_pane_g5

0x8a59,	// (0x00079612) main_viewer_pane_g7_ParamLimits

0x8a59,	// (0x00079612) main_viewer_pane_g7

0x8a6b,	// (0x00079624) main_viewer_pane_g8_ParamLimits

0x8a6b,	// (0x00079624) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0008008e) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0008008e) main_viewer_pane_g

0xe329,	// (0x0007eee2) viewer_content_pane_ParamLimits

0xe329,	// (0x0007eee2) viewer_content_pane

0x8a9b,	// (0x00079654) main_postcard_pane_g1_ParamLimits

0x8a9b,	// (0x00079654) main_postcard_pane_g1

0x8aa7,	// (0x00079660) main_postcard_pane_g2_ParamLimits

0x8aa7,	// (0x00079660) main_postcard_pane_g2

0x8ab3,	// (0x0007966c) main_postcard_pane_g3_ParamLimits

0x8ab3,	// (0x0007966c) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0008009f) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0008009f) main_postcard_pane_g

0x8abf,	// (0x00079678) main_postcard_pane_g4

0x29ad,	// (0x00073566) smil_status_volume_pane_g2

0x8ae3,	// (0x0007969c) postcard_pane_ParamLimits

0x8ae3,	// (0x0007969c) postcard_pane

0xdec8,	// (0x0007ea81) postcard_pane_g1_ParamLimits

0xdec8,	// (0x0007ea81) postcard_pane_g1

0x8b13,	// (0x000796cc) postcard_pane_g2_ParamLimits

0x8b13,	// (0x000796cc) postcard_pane_g2

0x8b1f,	// (0x000796d8) postcard_pane_g3_ParamLimits

0x8b1f,	// (0x000796d8) postcard_pane_g3

0xe337,	// (0x0007eef0) postcard_pane_g4_ParamLimits

0xe337,	// (0x0007eef0) postcard_pane_g4

0x8b2b,	// (0x000796e4) postcard_pane_g5_ParamLimits

0x8b2b,	// (0x000796e4) postcard_pane_g5

0x8b37,	// (0x000796f0) postcard_pane_g6_ParamLimits

0x8b37,	// (0x000796f0) postcard_pane_g6

0xe345,	// (0x0007eefe) postcard_pane_g7_ParamLimits

0xe345,	// (0x0007eefe) postcard_pane_g7

0x0006,

0xf4f3,	// (0x000800ac) postcard_pane_g_ParamLimits

0xf4f3,	// (0x000800ac) postcard_pane_g

0x8b43,	// (0x000796fc) main_mp2_pane_g1_ParamLimits

0x8b43,	// (0x000796fc) main_mp2_pane_g1

0x8b4f,	// (0x00079708) main_mp2_pane_g2_ParamLimits

0x8b4f,	// (0x00079708) main_mp2_pane_g2

0x8b5b,	// (0x00079714) main_mp2_pane_g3_ParamLimits

0x8b5b,	// (0x00079714) main_mp2_pane_g3

0x0002,

0xf502,	// (0x000800bb) main_mp2_pane_g_ParamLimits

0xf502,	// (0x000800bb) main_mp2_pane_g

0x8b67,	// (0x00079720) main_mp2_pane_t1_ParamLimits

0x8b67,	// (0x00079720) main_mp2_pane_t1

0x8b7c,	// (0x00079735) main_mp2_pane_t2_ParamLimits

0x8b7c,	// (0x00079735) main_mp2_pane_t2

0x8b8e,	// (0x00079747) main_mp2_pane_t3_ParamLimits

0x8b8e,	// (0x00079747) main_mp2_pane_t3

0x0002,

0xf509,	// (0x000800c2) main_mp2_pane_t_ParamLimits

0xf509,	// (0x000800c2) main_mp2_pane_t

0xe353,	// (0x0007ef0c) pec_content_pane_ParamLimits

0xe353,	// (0x0007ef0c) pec_content_pane

0x1c42,	// (0x000727fb) scroll_pane_cp015

0xe365,	// (0x0007ef1e) pec_attribute_pane_ParamLimits

0xe365,	// (0x0007ef1e) pec_attribute_pane

0x8ba0,	// (0x00079759) pec_content_pane_g1_ParamLimits

0x8ba0,	// (0x00079759) pec_content_pane_g1

0xe375,	// (0x0007ef2e) pec_content_pane_t1_ParamLimits

0xe375,	// (0x0007ef2e) pec_content_pane_t1

0xe387,	// (0x0007ef40) pec_content_pane_t2_ParamLimits

0xe387,	// (0x0007ef40) pec_content_pane_t2

0x0001,

0xf510,	// (0x000800c9) pec_content_pane_t_ParamLimits

0xf510,	// (0x000800c9) pec_content_pane_t

0x8bac,	// (0x00079765) list_single_graphic_pane_cp01_ParamLimits

0x8bac,	// (0x00079765) list_single_graphic_pane_cp01

0x1633,	// (0x000721ec) bg_popup_sub_pane_cp04

0xe399,	// (0x0007ef52) popup_mup_playback_window_g1

0xe3a5,	// (0x0007ef5e) popup_mup_playback_window_t1

0xe3ba,	// (0x0007ef73) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x000800ce) popup_mup_playback_window_t

0xe3f1,	// (0x0007efaa) main_image_pane_g1_ParamLimits

0xe3f1,	// (0x0007efaa) main_image_pane_g1

0xe434,	// (0x0007efed) scroll_pane_cp018_ParamLimits

0xe434,	// (0x0007efed) scroll_pane_cp018

0xe44c,	// (0x0007f005) scroll_pane_cp016_ParamLimits

0xe44c,	// (0x0007f005) scroll_pane_cp016

0x8c31,	// (0x000797ea) smil2_image_pane_ParamLimits

0x8c31,	// (0x000797ea) smil2_image_pane

0x8c59,	// (0x00079812) smil2_root_pane_ParamLimits

0x8c59,	// (0x00079812) smil2_root_pane

0x8c85,	// (0x0007983e) smil2_text_pane_ParamLimits

0x8c85,	// (0x0007983e) smil2_text_pane

0x13d8,	// (0x00071f91) bg_list_pane_cp06

0xe488,	// (0x0007f041) grid_radio_pane

0x13d8,	// (0x00071f91) bg_popup_window_pane_cp06

0xe490,	// (0x0007f049) main_fmradio_pane_t1

0x8283,	// (0x00078e3c) heading_pane_cp04

0xe49e,	// (0x0007f057) main_fmradio_pane_t2

0x27c7,	// (0x00073380) popup_cale_lunar_info_window_g1

0xe4ac,	// (0x0007f065) main_fmradio_pane_t3

0x27cf,	// (0x00073388) popup_cale_lunar_info_window_g2

0xe4ba,	// (0x0007f073) main_fmradio_pane_t4

0x0001,

0xe4c8,	// (0x0007f081) main_fmradio_pane_t5

0x0004,

0xf603,	// (0x000801bc) popup_cale_lunar_info_window_g

0xf52a,	// (0x000800e3) main_fmradio_pane_t

0xe4d6,	// (0x0007f08f) wait_bar_pane_cp03

0xdeb5,	// (0x0007ea6e) cell_fmradio_pane_ParamLimits

0xdeb5,	// (0x0007ea6e) cell_fmradio_pane

0xe345,	// (0x0007eefe) cell_fmradio_pane_g1_ParamLimits

0xe345,	// (0x0007eefe) cell_fmradio_pane_g1

0x13d8,	// (0x00071f91) grid_highlight_pane_cp011

0xe4de,	// (0x0007f097) poc_content_pane_ParamLimits

0xe4de,	// (0x0007f097) poc_content_pane

0xe4f1,	// (0x0007f0aa) scroll_pane_cp019

0x8cb9,	// (0x00079872) popup_call_poc_act_window_ParamLimits

0x8cb9,	// (0x00079872) popup_call_poc_act_window

0x8cc6,	// (0x0007987f) popup_call_poc_inact_window_ParamLimits

0x8cc6,	// (0x0007987f) popup_call_poc_inact_window

0xf5c7,	// (0x00080180) bg_popup_call_poc_act_pane_g

0x2787,	// (0x00073340) bg_popup_call_poc_inact_pane_g1

0x278f,	// (0x00073348) bg_popup_call_poc_inact_pane_g2

0xe4f9,	// (0x0007f0b2) popup_call_poc_act_window_g2

0x2797,	// (0x00073350) bg_popup_call_poc_inact_pane_g3

0x2717,	// (0x000732d0) bg_popup_call_poc_inact_pane_g4

0x279f,	// (0x00073358) bg_popup_call_poc_inact_pane_g5

0xe501,	// (0x0007f0ba) popup_call_poc_act_window_t1_ParamLimits

0xe501,	// (0x0007f0ba) popup_call_poc_act_window_t1

0xe529,	// (0x0007f0e2) popup_call_poc_act_window_t2_ParamLimits

0xe529,	// (0x0007f0e2) popup_call_poc_act_window_t2

0xe551,	// (0x0007f10a) popup_call_poc_act_window_t3_ParamLimits

0xe551,	// (0x0007f10a) popup_call_poc_act_window_t3

0xe579,	// (0x0007f132) popup_call_poc_act_window_t4_ParamLimits

0xe579,	// (0x0007f132) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x000800ee) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x000800ee) popup_call_poc_act_window_t

0x27a7,	// (0x00073360) bg_popup_call_poc_inact_pane_g6

0x27af,	// (0x00073368) bg_popup_call_poc_inact_pane_g7

0x27b7,	// (0x00073370) bg_popup_call_poc_inact_pane_g8

0xe58b,	// (0x0007f144) popup_call_poc_inact_window_g2

0x27bf,	// (0x00073378) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5de,	// (0x00080197) bg_popup_call_poc_inact_pane_g

0xe593,	// (0x0007f14c) popup_call_poc_inact_window_t1_ParamLimits

0xe593,	// (0x0007f14c) popup_call_poc_inact_window_t1

0xe5a8,	// (0x0007f161) popup_call_poc_inact_window_t2_ParamLimits

0xe5a8,	// (0x0007f161) popup_call_poc_inact_window_t2

0xe5bd,	// (0x0007f176) popup_call_poc_inact_window_t3_ParamLimits

0xe5bd,	// (0x0007f176) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x000800f7) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x000800f7) popup_call_poc_inact_window_t

0x2933,	// (0x000734ec) context_pane_ParamLimits

0x91c1,	// (0x00079d7a) signal_pane_ParamLimits

0xe19a,	// (0x0007ed53) main_call2_pane

0x2921,	// (0x000734da) popup_phob_thumbnail2_window_ParamLimits

0x2921,	// (0x000734da) popup_phob_thumbnail2_window

0x89d5,	// (0x0007958e) aid_hotspot_pointer_arrow_pane

0x89dd,	// (0x00079596) aid_hotspot_pointer_hand_pane

0x8f75,	// (0x00079b2e) phob_pre_status_pane_g5

0x72c4,	// (0x00077e7d) cams_zoom_pane_ParamLimits

0x72d0,	// (0x00077e89) image_vga_pane_ParamLimits

0x72dd,	// (0x00077e96) main_camera_pane_g1_ParamLimits

0x72e9,	// (0x00077ea2) main_camera_pane_g2_ParamLimits

0x72f5,	// (0x00077eae) main_camera_pane_g3_ParamLimits

0x7301,	// (0x00077eba) main_camera_pane_g4_ParamLimits

0x730d,	// (0x00077ec6) main_camera_pane_g5_ParamLimits

0x7319,	// (0x00077ed2) main_camera_pane_g6_ParamLimits

0x7325,	// (0x00077ede) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0007fdf6) main_camera_pane_g_ParamLimits

0x7331,	// (0x00077eea) main_camera_pane_t1_ParamLimits

0x7343,	// (0x00077efc) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0007fe07) main_camera_pane_t_ParamLimits

0x1633,	// (0x000721ec) bg_popup_preview_window_pane_cp01_ParamLimits

0x1633,	// (0x000721ec) bg_popup_preview_window_pane_cp01

0xe5d2,	// (0x0007f18b) popup_phob_thumbnail2_window_g1_ParamLimits

0xe5d2,	// (0x0007f18b) popup_phob_thumbnail2_window_g1

0x13d8,	// (0x00071f91) call2_cli_visual_pane

0x8ce2,	// (0x0007989b) popup_call2_audio_conf_window_ParamLimits

0x8ce2,	// (0x0007989b) popup_call2_audio_conf_window

0x8cf5,	// (0x000798ae) popup_call2_audio_first_window_ParamLimits

0x8cf5,	// (0x000798ae) popup_call2_audio_first_window

0x8d71,	// (0x0007992a) popup_call2_audio_in_window_ParamLimits

0x8d71,	// (0x0007992a) popup_call2_audio_in_window

0x8da1,	// (0x0007995a) popup_call2_audio_out_window_ParamLimits

0x8da1,	// (0x0007995a) popup_call2_audio_out_window

0x8ded,	// (0x000799a6) popup_call2_audio_second_window_ParamLimits

0x8ded,	// (0x000799a6) popup_call2_audio_second_window

0x8e39,	// (0x000799f2) popup_call2_audio_wait_window_ParamLimits

0x8e39,	// (0x000799f2) popup_call2_audio_wait_window

0x13d8,	// (0x00071f91) bg_popup_call2_act_pane_cp03

0x1615,	// (0x000721ce) list_conf_pane_cp

0xe5de,	// (0x0007f197) popup_call2_audio_conf_window_t1

0xdf11,	// (0x0007eaca) list_single_graphic_popup_conf2_pane_ParamLimits

0xdf11,	// (0x0007eaca) list_single_graphic_popup_conf2_pane

0xdf24,	// (0x0007eadd) list_highlight_pane_cp04

0xe5ec,	// (0x0007f1a5) list_single_graphic_popup_conf2_pane_g1

0xdf35,	// (0x0007eaee) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x000800fe) list_single_graphic_popup_conf2_pane_g

0xe5f4,	// (0x0007f1ad) list_single_graphic_popup_conf2_pane_t1

0xe602,	// (0x0007f1bb) bg_popup_call2_act_pane_cp01_ParamLimits

0xe602,	// (0x0007f1bb) bg_popup_call2_act_pane_cp01

0xe68c,	// (0x0007f245) call_type_pane_cp05_ParamLimits

0xe68c,	// (0x0007f245) call_type_pane_cp05

0xe6e0,	// (0x0007f299) popup_call2_audio_second_window_g1_ParamLimits

0xe6e0,	// (0x0007f299) popup_call2_audio_second_window_g1

0xe734,	// (0x0007f2ed) popup_call2_audio_second_window_g2_ParamLimits

0xe734,	// (0x0007f2ed) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x00080103) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x00080103) popup_call2_audio_second_window_g

0xe799,	// (0x0007f352) popup_call2_audio_second_window_t1_ParamLimits

0xe799,	// (0x0007f352) popup_call2_audio_second_window_t1

0xe854,	// (0x0007f40d) popup_call2_audio_second_window_t2_ParamLimits

0xe854,	// (0x0007f40d) popup_call2_audio_second_window_t2

0xe8a7,	// (0x0007f460) popup_call2_audio_second_window_t3_ParamLimits

0xe8a7,	// (0x0007f460) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0008010a) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0008010a) popup_call2_audio_second_window_t

0x13d8,	// (0x00071f91) bg_popup_call2_in_pane_cp02

0x13e2,	// (0x00071f9b) call_type_pane_cp04

0x13ea,	// (0x00071fa3) popup_call2_audio_wait_window_g1

0x13f2,	// (0x00071fab) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0007fce3) popup_call2_audio_wait_window_g

0x13fa,	// (0x00071fb3) popup_call2_audio_wait_window_t3

0xe99a,	// (0x0007f553) bg_popup_call2_act_pane_ParamLimits

0xe99a,	// (0x0007f553) bg_popup_call2_act_pane

0xea5a,	// (0x0007f613) call_type_pane_cp03_ParamLimits

0xea5a,	// (0x0007f613) call_type_pane_cp03

0xeabe,	// (0x0007f677) popup_call2_audio_first_window_g1_ParamLimits

0xeabe,	// (0x0007f677) popup_call2_audio_first_window_g1

0xeb2e,	// (0x0007f6e7) popup_call2_audio_first_window_g2_ParamLimits

0xeb2e,	// (0x0007f6e7) popup_call2_audio_first_window_g2

0xdec8,	// (0x0007ea81) popup_call2_audio_first_window_g3_ParamLimits

0xdec8,	// (0x0007ea81) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x00080113) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x00080113) popup_call2_audio_first_window_g

0xec0c,	// (0x0007f7c5) popup_call2_audio_first_window_t1_ParamLimits

0xec0c,	// (0x0007f7c5) popup_call2_audio_first_window_t1

0x2047,	// (0x00072c00) popup_call2_audio_first_window_t4_ParamLimits

0x2047,	// (0x00072c00) popup_call2_audio_first_window_t4

0x212a,	// (0x00072ce3) popup_call2_audio_first_window_t5_ParamLimits

0x212a,	// (0x00072ce3) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0008011e) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0008011e) popup_call2_audio_first_window_t

0x162b,	// (0x000721e4) bg_popup_call2_act_pane_g1

0x27d7,	// (0x00073390) popup_cale_lunar_info_window_t1

0x27e5,	// (0x0007339e) popup_cale_lunar_info_window_t2

0x27f3,	// (0x000733ac) popup_cale_lunar_info_window_t3

0x13d8,	// (0x00071f91) bg_popup_call2_bubble_pane

0x222b,	// (0x00072de4) bg_popup_call2_in_pane_cp01_ParamLimits

0x222b,	// (0x00072de4) bg_popup_call2_in_pane_cp01

0x10b4,	// (0x00071c6d) call_type_pane_cp02

0x2273,	// (0x00072e2c) popup_call2_audio_out_window_g1_ParamLimits

0x2273,	// (0x00072e2c) popup_call2_audio_out_window_g1

0x229f,	// (0x00072e58) popup_call2_audio_out_window_g2_ParamLimits

0x229f,	// (0x00072e58) popup_call2_audio_out_window_g2

0x22c7,	// (0x00072e80) popup_call2_audio_out_window_g3_ParamLimits

0x22c7,	// (0x00072e80) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x00080127) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x00080127) popup_call2_audio_out_window_g

0x2302,	// (0x00072ebb) popup_call2_audio_out_window_t1_ParamLimits

0x2302,	// (0x00072ebb) popup_call2_audio_out_window_t1

0x2361,	// (0x00072f1a) popup_call2_audio_out_window_t2_ParamLimits

0x2361,	// (0x00072f1a) popup_call2_audio_out_window_t2

0x23b5,	// (0x00072f6e) popup_call2_audio_out_window_t3_ParamLimits

0x23b5,	// (0x00072f6e) popup_call2_audio_out_window_t3

0x23cb,	// (0x00072f84) popup_call2_audio_out_window_t4_ParamLimits

0x23cb,	// (0x00072f84) popup_call2_audio_out_window_t4

0x23e1,	// (0x00072f9a) popup_call2_audio_out_window_t5_ParamLimits

0x23e1,	// (0x00072f9a) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x00080130) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x00080130) popup_call2_audio_out_window_t

0x2445,	// (0x00072ffe) bg_popup_call2_in_pane_ParamLimits

0x2445,	// (0x00072ffe) bg_popup_call2_in_pane

0x24a1,	// (0x0007305a) popup_call2_audio_in_window_g1_ParamLimits

0x24a1,	// (0x0007305a) popup_call2_audio_in_window_g1

0x24d9,	// (0x00073092) popup_call2_audio_in_window_g2_ParamLimits

0x24d9,	// (0x00073092) popup_call2_audio_in_window_g2

0x2511,	// (0x000730ca) popup_call2_audio_in_window_g3_ParamLimits

0x2511,	// (0x000730ca) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0008013d) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0008013d) popup_call2_audio_in_window_g

0x2569,	// (0x00073122) popup_call2_audio_in_window_t1_ParamLimits

0x2569,	// (0x00073122) popup_call2_audio_in_window_t1

0x25e9,	// (0x000731a2) popup_call2_audio_in_window_t2_ParamLimits

0x25e9,	// (0x000731a2) popup_call2_audio_in_window_t2

0x2669,	// (0x00073222) popup_call2_audio_in_window_t3_ParamLimits

0x2669,	// (0x00073222) popup_call2_audio_in_window_t3

0x2683,	// (0x0007323c) popup_call2_audio_in_window_t4_ParamLimits

0x2683,	// (0x0007323c) popup_call2_audio_in_window_t4

0x2695,	// (0x0007324e) popup_call2_audio_in_window_t5_ParamLimits

0x2695,	// (0x0007324e) popup_call2_audio_in_window_t5

0x26aa,	// (0x00073263) popup_call2_audio_in_window_t6_ParamLimits

0x26aa,	// (0x00073263) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x00080146) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x00080146) popup_call2_audio_in_window_t

0x162b,	// (0x000721e4) bg_popup_call2_in_pane_g1

0x2801,	// (0x000733ba) popup_cale_lunar_info_window_t4

0x0003,

0xf608,	// (0x000801c1) popup_cale_lunar_info_window_t

0x1633,	// (0x000721ec) bg_popup_call2_rect_pane_ParamLimits

0x1633,	// (0x000721ec) bg_popup_call2_rect_pane

0x13d8,	// (0x00071f91) call2_cli_visual_graphic_pane

0x13d8,	// (0x00071f91) call2_cli_visual_text_pane

0x9246,	// (0x00079dff) smil_status_volume_pane_g3

0x0002,

0x17c7,	// (0x00072380) call2_cli_visual_graphic_pane_g1

0x17c7,	// (0x00072380) call2_cli_visual_graphic_pane_g2

0x17c7,	// (0x00072380) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x00080153) call2_cli_visual_graphic_pane_g

0x26bf,	// (0x00073278) bg_popup_call2_rect_pane_g1

0x186f,	// (0x00072428) bg_popup_call2_rect_pane_g2

0x26c7,	// (0x00073280) bg_popup_call2_rect_pane_g3

0x26cf,	// (0x00073288) bg_popup_call2_rect_pane_g4

0x26d7,	// (0x00073290) bg_popup_call2_rect_pane_g5

0x26df,	// (0x00073298) bg_popup_call2_rect_pane_g6

0x26e7,	// (0x000732a0) bg_popup_call2_rect_pane_g7

0x26ef,	// (0x000732a8) bg_popup_call2_rect_pane_g8

0x26f7,	// (0x000732b0) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0008015a) bg_popup_call2_rect_pane_g

0x26ff,	// (0x000732b8) bg_popup_call2_bubble_pane_g1

0x2707,	// (0x000732c0) bg_popup_call2_bubble_pane_g2

0x270f,	// (0x000732c8) bg_popup_call2_bubble_pane_g3

0x2717,	// (0x000732d0) bg_popup_call2_bubble_pane_g4

0x271f,	// (0x000732d8) bg_popup_call2_bubble_pane_g5

0x2727,	// (0x000732e0) bg_popup_call2_bubble_pane_g6

0x272f,	// (0x000732e8) bg_popup_call2_bubble_pane_g7

0x2737,	// (0x000732f0) bg_popup_call2_bubble_pane_g8

0x273f,	// (0x000732f8) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0008016d) bg_popup_call2_bubble_pane_g

0x6e11,	// (0x000779ca) aid_cale_week_size_cell_pane

0x7355,	// (0x00077f0e) aid_cams_cif_uncrop_pane_ParamLimits

0x7355,	// (0x00077f0e) aid_cams_cif_uncrop_pane

0x74ad,	// (0x00078066) aid_cams_size_cell_ParamLimits

0x74ad,	// (0x00078066) aid_cams_size_cell

0x74b9,	// (0x00078072) grid_cams_pane_ParamLimits

0x74c5,	// (0x0007807e) linegrid_cams_pane_ParamLimits

0x759d,	// (0x00078156) call_video_pane_t1

0x75b3,	// (0x0007816c) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0007fe5a) call_video_pane_t

0x791f,	// (0x000784d8) aid_cale_month_size_cell_pane_ParamLimits

0x791f,	// (0x000784d8) aid_cale_month_size_cell_pane

0xf651,	// (0x0008020a) smil_status_volume_pane_g

0x9253,	// (0x00079e0c) volume_smil_pane_ParamLimits

0x0f7e,	// (0x00071b37) aid_popup2_width_pane

0x6d34,	// (0x000778ed) cell_qdial_pane_g4_ParamLimits

0x6d34,	// (0x000778ed) cell_qdial_pane_g4

0x8427,	// (0x00078fe0) aid_blid_cardinal_pane_ParamLimits

0x8433,	// (0x00078fec) aid_blid_destination_pane_ParamLimits

0x8433,	// (0x00078fec) aid_blid_destination_pane

0x1633,	// (0x000721ec) bg_popup_call_poc_act_pane_ParamLimits

0x1633,	// (0x000721ec) bg_popup_call_poc_act_pane

0x1633,	// (0x000721ec) bg_popup_call_poc_inact_pane_ParamLimits

0x1633,	// (0x000721ec) bg_popup_call_poc_inact_pane

0x2747,	// (0x00073300) bg_popup_call_poc_act_pane_g1

0x274f,	// (0x00073308) bg_popup_call_poc_act_pane_g2

0x2757,	// (0x00073310) bg_popup_call_poc_act_pane_g3

0x2717,	// (0x000732d0) bg_popup_call_poc_act_pane_g4

0x271f,	// (0x000732d8) bg_popup_call_poc_act_pane_g5

0x275f,	// (0x00073318) bg_popup_call_poc_act_pane_g6

0x272f,	// (0x000732e8) bg_popup_call_poc_act_pane_g7

0x2767,	// (0x00073320) bg_popup_call_poc_act_pane_g8

0x13d8,	// (0x00071f91) main_usb_pane

0x2900,	// (0x000734b9) popup_cale_lunar_info_window

0x77c2,	// (0x0007837b) im_reading_pane_t1_ParamLimits

0x1b8b,	// (0x00072744) list_im_pane_ParamLimits

0x1b9c,	// (0x00072755) scroll_pane_cp07_ParamLimits

0x13d8,	// (0x00071f91) grid_highlight_pane_cp012

0x1633,	// (0x000721ec) mup_scale_pane_ParamLimits

0xdec8,	// (0x0007ea81) main_usb_pane_g1_ParamLimits

0xdec8,	// (0x0007ea81) main_usb_pane_g1

0x8e9a,	// (0x00079a53) main_usb_pane_g2_ParamLimits

0x8e9a,	// (0x00079a53) main_usb_pane_g2

0x0001,

0xf5f1,	// (0x000801aa) main_usb_pane_g_ParamLimits

0xf5f1,	// (0x000801aa) main_usb_pane_g

0x8ea6,	// (0x00079a5f) main_usb_pane_t1_ParamLimits

0x8ea6,	// (0x00079a5f) main_usb_pane_t1

0x8eb8,	// (0x00079a71) main_usb_pane_t2_ParamLimits

0x8eb8,	// (0x00079a71) main_usb_pane_t2

0x8eca,	// (0x00079a83) main_usb_pane_t3_ParamLimits

0x8eca,	// (0x00079a83) main_usb_pane_t3

0x8edc,	// (0x00079a95) main_usb_pane_t4_ParamLimits

0x8edc,	// (0x00079a95) main_usb_pane_t4

0x8eee,	// (0x00079aa7) main_usb_pane_t5_ParamLimits

0x8eee,	// (0x00079aa7) main_usb_pane_t5

0x8f00,	// (0x00079ab9) main_usb_pane_t6_ParamLimits

0x8f00,	// (0x00079ab9) main_usb_pane_t6

0x0005,

0xf5f6,	// (0x000801af) main_usb_pane_t_ParamLimits

0xe05e,	// (0x0007ec17) aid_text_placing

0x83d3,	// (0x00078f8c) main_location2_pane_t1_ParamLimits

0x83e9,	// (0x00078fa2) main_location2_pane_t2_ParamLimits

0x83ff,	// (0x00078fb8) main_location2_pane_t3_ParamLimits

0x8415,	// (0x00078fce) main_location2_pane_t4_ParamLimits

0x8415,	// (0x00078fce) main_location2_pane_t4

0xf402,	// (0x0007ffbb) main_location2_pane_t_ParamLimits

0x166f,	// (0x00072228) find_pinb_pane_g2_ParamLimits

0x166f,	// (0x00072228) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0007fd09) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0007fd09) find_pinb_pane_g

0x167b,	// (0x00072234) find_pinb_pane_t1_ParamLimits

0x168d,	// (0x00072246) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0007fd0e) find_pinb_pane_t_ParamLimits

0x13d8,	// (0x00071f91) main_call3_pane

0x7bd7,	// (0x00078790) cale_month_day_heading_pane_t1_ParamLimits

0x7c35,	// (0x000787ee) cale_month_day_heading_pane_t2_ParamLimits

0x7c9a,	// (0x00078853) cale_month_day_heading_pane_t3_ParamLimits

0x7cff,	// (0x000788b8) cale_month_day_heading_pane_t4_ParamLimits

0x7d64,	// (0x0007891d) cale_month_day_heading_pane_t5_ParamLimits

0x7dc9,	// (0x00078982) cale_month_day_heading_pane_t6_ParamLimits

0x7e2e,	// (0x000789e7) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x0007fe92) cale_month_day_heading_pane_t_ParamLimits

0x1e22,	// (0x000729db) smil_status_volume_pane

0x8afb,	// (0x000796b4) postcard_address_pane_ParamLimits

0x8afb,	// (0x000796b4) postcard_address_pane

0x8b07,	// (0x000796c0) postcard_message_pane_ParamLimits

0x8b07,	// (0x000796c0) postcard_message_pane

0x8e76,	// (0x00079a2f) call2_cli_visual_pane_t1_ParamLimits

0x8e76,	// (0x00079a2f) call2_cli_visual_pane_t1

0x93a4,	// (0x00079f5d) postcard_message_pane_t1_ParamLimits

0x93a4,	// (0x00079f5d) postcard_message_pane_t1

0x938d,	// (0x00079f46) postcard_address_pane_t1_ParamLimits

0x938d,	// (0x00079f46) postcard_address_pane_t1

0x9380,	// (0x00079f39) popup_call3_audio_in_window_ParamLimits

0x9380,	// (0x00079f39) popup_call3_audio_in_window

0x9268,	// (0x00079e21) bg_popup_call3_in_pane_ParamLimits

0x9268,	// (0x00079e21) bg_popup_call3_in_pane

0x92c6,	// (0x00079e7f) popup_call3_audio_in_window_g1_ParamLimits

0x92c6,	// (0x00079e7f) popup_call3_audio_in_window_g1

0x92de,	// (0x00079e97) popup_call3_audio_in_window_g2_ParamLimits

0x92de,	// (0x00079e97) popup_call3_audio_in_window_g2

0x92f6,	// (0x00079eaf) popup_call3_audio_in_window_g3_ParamLimits

0x92f6,	// (0x00079eaf) popup_call3_audio_in_window_g3

0x0003,

0xf658,	// (0x00080211) popup_call3_audio_in_window_g_ParamLimits

0xf658,	// (0x00080211) popup_call3_audio_in_window_g

0x931e,	// (0x00079ed7) popup_call3_audio_in_window_t1_ParamLimits

0x931e,	// (0x00079ed7) popup_call3_audio_in_window_t1

0x9346,	// (0x00079eff) popup_call3_audio_in_window_t2_ParamLimits

0x9346,	// (0x00079eff) popup_call3_audio_in_window_t2

0x936e,	// (0x00079f27) popup_call3_audio_in_window_t3_ParamLimits

0x936e,	// (0x00079f27) popup_call3_audio_in_window_t3

0x0002,

0xf661,	// (0x0008021a) popup_call3_audio_in_window_t_ParamLimits

0xf661,	// (0x0008021a) popup_call3_audio_in_window_t

0xe19a,	// (0x0007ed53) bg_popup_call3_rect_pane

0x26bf,	// (0x00073278) bg_popup_call3_rect_pane_g1

0x186f,	// (0x00072428) bg_popup_call3_rect_pane_g2

0x26c7,	// (0x00073280) bg_popup_call3_rect_pane_g3

0x26cf,	// (0x00073288) bg_popup_call3_rect_pane_g4

0x26d7,	// (0x00073290) bg_popup_call3_rect_pane_g5

0x26df,	// (0x00073298) bg_popup_call3_rect_pane_g6

0x26e7,	// (0x000732a0) bg_popup_call3_rect_pane_g7

0x8755,	// (0x0007930e) mup_visualizer_osc_pane

0xe259,	// (0x0007ee12) mup_visualizer_spec_pane

0x9288,	// (0x00079e41) call3_video_qcif_pane_ParamLimits

0x9288,	// (0x00079e41) call3_video_qcif_pane

0x9298,	// (0x00079e51) call3_video_qcif_uncrop_pane_ParamLimits

0x9298,	// (0x00079e51) call3_video_qcif_uncrop_pane

0x92a4,	// (0x00079e5d) call3_video_subqcif_pane_ParamLimits

0x92a4,	// (0x00079e5d) call3_video_subqcif_pane

0x92b6,	// (0x00079e6f) call3_video_subqcif_uncrop_pane_ParamLimits

0x92b6,	// (0x00079e6f) call3_video_subqcif_uncrop_pane

0x930e,	// (0x00079ec7) popup_call3_audio_in_window_g4_ParamLimits

0x930e,	// (0x00079ec7) popup_call3_audio_in_window_g4

0x9235,	// (0x00079dee) mup_spec_half_pane

0x923e,	// (0x00079df7) mup_spec_half_pane_cp

0x2993,	// (0x0007354c) mup_osc_middle_pane

0x299c,	// (0x00073555) mup_visualizer_osc_pane_g1

0x9216,	// (0x00079dcf) mup_spec_bar_pane_ParamLimits

0x9216,	// (0x00079dcf) mup_spec_bar_pane

0x2980,	// (0x00073539) mup_spec_bar_pane_g1

0x298a,	// (0x00073543) mup_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x00080205) mup_spec_bar_pane_g

0x6e11,	// (0x000779ca) aid_cale_week_size_cell_pane_ParamLimits

0x6e24,	// (0x000779dd) bg_cale_heading_pane_ParamLimits

0x18fb,	// (0x000724b4) bg_cale_pane_cp01_ParamLimits

0x6e38,	// (0x000779f1) cale_week_corner_pane_ParamLimits

0x6e4e,	// (0x00077a07) cale_week_day_heading_pane_ParamLimits

0x6e62,	// (0x00077a1b) cale_week_scroll_pane_g1_ParamLimits

0x6e73,	// (0x00077a2c) cale_week_scroll_pane_g2_ParamLimits

0x6e84,	// (0x00077a3d) cale_week_scroll_pane_g3_ParamLimits

0x6e95,	// (0x00077a4e) cale_week_scroll_pane_g4_ParamLimits

0x6ea6,	// (0x00077a5f) cale_week_scroll_pane_g5_ParamLimits

0x6eb7,	// (0x00077a70) cale_week_scroll_pane_g6_ParamLimits

0x6ec8,	// (0x00077a81) cale_week_scroll_pane_g7_ParamLimits

0x6ed9,	// (0x00077a92) cale_week_scroll_pane_g8_ParamLimits

0x6eea,	// (0x00077aa3) cale_week_scroll_pane_g9_ParamLimits

0x6efb,	// (0x00077ab4) cale_week_scroll_pane_g10_ParamLimits

0x6f0c,	// (0x00077ac5) cale_week_scroll_pane_g11_ParamLimits

0x6f1d,	// (0x00077ad6) cale_week_scroll_pane_g12_ParamLimits

0x6f2e,	// (0x00077ae7) cale_week_scroll_pane_g13_ParamLimits

0x6f3f,	// (0x00077af8) cale_week_scroll_pane_g14_ParamLimits

0x6f50,	// (0x00077b09) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0007fd9a) cale_week_scroll_pane_g_ParamLimits

0x6f61,	// (0x00077b1a) cale_week_time_pane_ParamLimits

0x6f72,	// (0x00077b2b) grid_cale_week_pane_ParamLimits

0x1914,	// (0x000724cd) listscroll_cale_week_pane_t1

0x6f85,	// (0x00077b3e) scroll_pane_cp08_ParamLimits

0x7960,	// (0x00078519) cale_month_corner_pane_ParamLimits

0x1dc2,	// (0x0007297b) cale_month_pane_t1

0x7ba8,	// (0x00078761) cale_month_week_pane_ParamLimits

0xdec8,	// (0x0007ea81) popup_call_status_window_g1_ParamLimits

0x8195,	// (0x00078d4e) popup_call_status_window_g2_ParamLimits

0x81a1,	// (0x00078d5a) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0007ff42) popup_call_status_window_g_ParamLimits

0x8204,	// (0x00078dbd) aid_call2_pane

0x8956,	// (0x0007950f) msg_header_pane_g1

0x8afb,	// (0x000796b4) postcard_address2_pane_ParamLimits

0x8afb,	// (0x000796b4) postcard_address2_pane

0x8b07,	// (0x000796c0) postcard_message2_pane_ParamLimits

0x8b07,	// (0x000796c0) postcard_message2_pane

0x91cd,	// (0x00079d86) message2_row_pane_ParamLimits

0x91cd,	// (0x00079d86) message2_row_pane

0x91e5,	// (0x00079d9e) address2_row_pane_ParamLimits

0x91e5,	// (0x00079d9e) address2_row_pane

0x294e,	// (0x00073507) postcard_message2_row_pane_g1

0x2956,	// (0x0007350f) postcard_message2_row_pane_t1

0x294e,	// (0x00073507) address2_row_pane_g1

0x2956,	// (0x0007350f) address2_row_pane_t1

0x723e,	// (0x00077df7) aid_size_cell_vorec

0x13d8,	// (0x00071f91) main_rss_pane

0x91f8,	// (0x00079db1) rss_list_single_pane_ParamLimits

0x91f8,	// (0x00079db1) rss_list_single_pane

0x2964,	// (0x0007351d) rss_list_single_pane_t1

0x2972,	// (0x0007352b) rss_list_single_pane_t2

0x0001,

0xf647,	// (0x00080200) rss_list_single_pane_t

0x13d8,	// (0x00071f91) main_camera2_pane

0x13d8,	// (0x00071f91) main_video2_pane

0x93f4,	// (0x00079fad) cams_zoom_pane_cp2_ParamLimits

0x93f4,	// (0x00079fad) cams_zoom_pane_cp2

0x9400,	// (0x00079fb9) image2_vga_pane_ParamLimits

0x9400,	// (0x00079fb9) image2_vga_pane

0x940f,	// (0x00079fc8) main_camera2_pane_g1_ParamLimits

0x940f,	// (0x00079fc8) main_camera2_pane_g1

0x941b,	// (0x00079fd4) main_camera2_pane_g2_ParamLimits

0x941b,	// (0x00079fd4) main_camera2_pane_g2

0x9427,	// (0x00079fe0) main_camera2_pane_g3_ParamLimits

0x9427,	// (0x00079fe0) main_camera2_pane_g3

0x9433,	// (0x00079fec) main_camera2_pane_g4_ParamLimits

0x9433,	// (0x00079fec) main_camera2_pane_g4

0x943f,	// (0x00079ff8) main_camera2_pane_g5_ParamLimits

0x943f,	// (0x00079ff8) main_camera2_pane_g5

0x944b,	// (0x0007a004) main_camera2_pane_g6_ParamLimits

0x944b,	// (0x0007a004) main_camera2_pane_g6

0x9457,	// (0x0007a010) main_camera2_pane_g7_ParamLimits

0x9457,	// (0x0007a010) main_camera2_pane_g7

0x9463,	// (0x0007a01c) main_camera2_pane_g8_ParamLimits

0x9463,	// (0x0007a01c) main_camera2_pane_g8

0x0008,

0xf668,	// (0x00080221) main_camera2_pane_g_ParamLimits

0xf668,	// (0x00080221) main_camera2_pane_g

0x947b,	// (0x0007a034) main_camera2_pane_t1_ParamLimits

0x947b,	// (0x0007a034) main_camera2_pane_t1

0x948d,	// (0x0007a046) main_camera2_pane_t2_ParamLimits

0x948d,	// (0x0007a046) main_camera2_pane_t2

0x949f,	// (0x0007a058) main_camera2_pane_t3_ParamLimits

0x949f,	// (0x0007a058) main_camera2_pane_t3

0x94b1,	// (0x0007a06a) main_camera2_pane_t4_ParamLimits

0x94b1,	// (0x0007a06a) main_camera2_pane_t4

0x0006,

0xf67b,	// (0x00080234) main_camera2_pane_t_ParamLimits

0xf67b,	// (0x00080234) main_camera2_pane_t

0x950c,	// (0x0007a0c5) cams_zoom_pane_cp4_ParamLimits

0x950c,	// (0x0007a0c5) cams_zoom_pane_cp4

0x951c,	// (0x0007a0d5) image2_cif_pane_ParamLimits

0x951c,	// (0x0007a0d5) image2_cif_pane

0x952d,	// (0x0007a0e6) image2_subqcif_pane_ParamLimits

0x952d,	// (0x0007a0e6) image2_subqcif_pane

0x953a,	// (0x0007a0f3) main_video2_pane_g1_ParamLimits

0x953a,	// (0x0007a0f3) main_video2_pane_g1

0x954c,	// (0x0007a105) main_video2_pane_g2_ParamLimits

0x954c,	// (0x0007a105) main_video2_pane_g2

0x955c,	// (0x0007a115) main_video2_pane_g3_ParamLimits

0x955c,	// (0x0007a115) main_video2_pane_g3

0x956c,	// (0x0007a125) main_video2_pane_g4_ParamLimits

0x956c,	// (0x0007a125) main_video2_pane_g4

0x957c,	// (0x0007a135) main_video2_pane_g5_ParamLimits

0x957c,	// (0x0007a135) main_video2_pane_g5

0x958c,	// (0x0007a145) main_video2_pane_g6_ParamLimits

0x958c,	// (0x0007a145) main_video2_pane_g6

0x0005,

0xf68a,	// (0x00080243) main_video2_pane_g_ParamLimits

0xf68a,	// (0x00080243) main_video2_pane_g

0x959e,	// (0x0007a157) main_video2_pane_t1_ParamLimits

0x959e,	// (0x0007a157) main_video2_pane_t1

0x95b8,	// (0x0007a171) main_video2_pane_t2_ParamLimits

0x95b8,	// (0x0007a171) main_video2_pane_t2

0x95de,	// (0x0007a197) main_video2_pane_t3_ParamLimits

0x95de,	// (0x0007a197) main_video2_pane_t3

0x0002,

0xf697,	// (0x00080250) main_video2_pane_t_ParamLimits

0xf697,	// (0x00080250) main_video2_pane_t

0x8faf,	// (0x00079b68) call_muted_g2

0x0001,

0xf639,	// (0x000801f2) call_muted_g

0x13d8,	// (0x00071f91) main_mup2_pane

0x2a01,	// (0x000735ba) main_mup2_pane_g1_ParamLimits

0x2a01,	// (0x000735ba) main_mup2_pane_g1

0x9604,	// (0x0007a1bd) main_mup2_pane_g2_ParamLimits

0x9604,	// (0x0007a1bd) main_mup2_pane_g2

0x9874,	// (0x0007a42d) main_mup_pane_g13_cp1

0x987c,	// (0x0007a435) mup_volume_pane_cp1

0x9624,	// (0x0007a1dd) main_mup2_pane_g4_ParamLimits

0x9624,	// (0x0007a1dd) main_mup2_pane_g4

0x9635,	// (0x0007a1ee) main_mup2_pane_g5_ParamLimits

0x9635,	// (0x0007a1ee) main_mup2_pane_g5

0x9646,	// (0x0007a1ff) main_mup2_pane_g6_ParamLimits

0x9646,	// (0x0007a1ff) main_mup2_pane_g6

0x9657,	// (0x0007a210) main_mup2_pane_g7_ParamLimits

0x9657,	// (0x0007a210) main_mup2_pane_g7

0x0006,

0xf69e,	// (0x00080257) main_mup2_pane_g_ParamLimits

0xf69e,	// (0x00080257) main_mup2_pane_g

0x9673,	// (0x0007a22c) main_mup2_pane_t1_ParamLimits

0x9673,	// (0x0007a22c) main_mup2_pane_t1

0x968a,	// (0x0007a243) main_mup2_pane_t2_ParamLimits

0x968a,	// (0x0007a243) main_mup2_pane_t2

0x96a1,	// (0x0007a25a) main_mup2_pane_t3_ParamLimits

0x96a1,	// (0x0007a25a) main_mup2_pane_t3

0x96b8,	// (0x0007a271) main_mup2_pane_t4_ParamLimits

0x96b8,	// (0x0007a271) main_mup2_pane_t4

0x96d2,	// (0x0007a28b) main_mup2_pane_t5_ParamLimits

0x96d2,	// (0x0007a28b) main_mup2_pane_t5

0x96ec,	// (0x0007a2a5) main_mup2_pane_t6_ParamLimits

0x96ec,	// (0x0007a2a5) main_mup2_pane_t6

0x0005,

0xf6ad,	// (0x00080266) main_mup2_pane_t_ParamLimits

0xf6ad,	// (0x00080266) main_mup2_pane_t

0x9724,	// (0x0007a2dd) mup2_visualizer_pane_ParamLimits

0x9724,	// (0x0007a2dd) mup2_visualizer_pane

0x9756,	// (0x0007a30f) mup_progress_pane_cp_ParamLimits

0x9756,	// (0x0007a30f) mup_progress_pane_cp

0x985f,	// (0x0007a418) mup_volume_pane_cp_ParamLimits

0x985f,	// (0x0007a418) mup_volume_pane_cp

0x976d,	// (0x0007a326) mup2_visualizer_pane_g1_ParamLimits

0x976d,	// (0x0007a326) mup2_visualizer_pane_g1

0x29d3,	// (0x0007358c) mup2_visualizer_pane_g2_ParamLimits

0x29d3,	// (0x0007358c) mup2_visualizer_pane_g2

0x9782,	// (0x0007a33b) mup2_visualizer_pane_g3_ParamLimits

0x9782,	// (0x0007a33b) mup2_visualizer_pane_g3

0x0002,

0xf6ba,	// (0x00080273) mup2_visualizer_pane_g_ParamLimits

0xf6ba,	// (0x00080273) mup2_visualizer_pane_g

0xe480,	// (0x0007f039) aid_size_cell_fmradio

0x9091,	// (0x00079c4a) aid_height_parent_landcape

0x1c29,	// (0x000727e2) wml_content_pane_cp

0x1c31,	// (0x000727ea) wml_tabs_pane

0x1c3a,	// (0x000727f3) popup_wml_miniature_window

0x1c42,	// (0x000727fb) scroll_pane_cp021

0x1c56,	// (0x0007280f) wml_content_pane_comp8

0x13d8,	// (0x00071f91) bg_popup_sub_pane_cp05

0x29f1,	// (0x000735aa) popup_wml_miniature_window_g1

0x29f9,	// (0x000735b2) wml_miniature_view_pane

0x978e,	// (0x0007a347) aid_size_wml_view

0x9796,	// (0x0007a34f) wml_miniature_view_pane_g1

0x979f,	// (0x0007a358) wml_miniature_view_pane_g2

0x97a8,	// (0x0007a361) wml_miniature_view_pane_g3

0x97b0,	// (0x0007a369) wml_miniature_view_pane_g4

0x97b8,	// (0x0007a371) wml_miniature_view_pane_g5

0x97c0,	// (0x0007a379) wml_miniature_view_pane_g6

0x97c8,	// (0x0007a381) wml_miniature_view_pane_g7

0x97d0,	// (0x0007a389) wml_miniature_view_pane_g8

0x0007,

0xf6c1,	// (0x0008027a) wml_miniature_view_pane_g

0x2a01,	// (0x000735ba) background_graphic_ParamLimits

0x2a01,	// (0x000735ba) background_graphic

0x2a0d,	// (0x000735c6) wml_tabs_2_pane

0x2a16,	// (0x000735cf) wml_tabs_3_pane_ParamLimits

0x2a16,	// (0x000735cf) wml_tabs_3_pane

0x2a28,	// (0x000735e1) wml_tabs_4_pane_ParamLimits

0x2a28,	// (0x000735e1) wml_tabs_4_pane

0x2a3e,	// (0x000735f7) wml_tabs_5_pane_ParamLimits

0x2a3e,	// (0x000735f7) wml_tabs_5_pane

0x2a58,	// (0x00073611) wml_tabs_pane_g2_ParamLimits

0x2a58,	// (0x00073611) wml_tabs_pane_g2

0x2a6c,	// (0x00073625) wml_tabs_pane_g3_ParamLimits

0x2a6c,	// (0x00073625) wml_tabs_pane_g3

0x97d8,	// (0x0007a391) wml_tabs_2_active_pane_ParamLimits

0x97d8,	// (0x0007a391) wml_tabs_2_active_pane

0x97e8,	// (0x0007a3a1) wml_tabs_2_passive_pane_ParamLimits

0x97e8,	// (0x0007a3a1) wml_tabs_2_passive_pane

0x97f8,	// (0x0007a3b1) wml_tabs_3_active_pane_cp_ParamLimits

0x97f8,	// (0x0007a3b1) wml_tabs_3_active_pane_cp

0x9809,	// (0x0007a3c2) wml_tabs_3_passive_pane_ParamLimits

0x9809,	// (0x0007a3c2) wml_tabs_3_passive_pane

0x981a,	// (0x0007a3d3) wml_tabs_3_passive_pane_cp_ParamLimits

0x981a,	// (0x0007a3d3) wml_tabs_3_passive_pane_cp

0x982b,	// (0x0007a3e4) tabs_4_active_pane

0x9833,	// (0x0007a3ec) tabs_4_passive_pane

0x983b,	// (0x0007a3f4) tabs_4_passive_pane_cp

0x9843,	// (0x0007a3fc) tabs_4_passive_pane_cp2

0x8e92,	// (0x00079a4b) aid_height_text

0x8722,	// (0x000792db) mup_volume_cont_pane_ParamLimits

0x8722,	// (0x000792db) mup_volume_cont_pane

0x69e0,	// (0x00077599) aid_size_cell_pinb

0x69ea,	// (0x000775a3) aid_size_list_pinb

0x973f,	// (0x0007a2f8) mup2_volume_cont_pane_ParamLimits

0x973f,	// (0x0007a2f8) mup2_volume_cont_pane

0x984b,	// (0x0007a404) mup2_volume_cont_pane_g1_ParamLimits

0x984b,	// (0x0007a404) mup2_volume_cont_pane_g1

0x66d7,	// (0x00077290) aid_size_cell_touch_ParamLimits

0x66d7,	// (0x00077290) aid_size_cell_touch

0x68e0,	// (0x00077499) touch_pane_ParamLimits

0x68e0,	// (0x00077499) touch_pane

0x0f6c,	// (0x00071b25) main_rss2_pane

0x2a89,	// (0x00073642) listscroll_rss2_pane

0x2a92,	// (0x0007364b) rss2_navigation_pane

0x2a9a,	// (0x00073653) list_rss2_pane

0xdfdb,	// (0x0007eb94) scroll_pane_cp22

0x2aa2,	// (0x0007365b) rss2_navigation_pane_g1

0x2aab,	// (0x00073664) rss2_navigation_pane_g2

0x2ab3,	// (0x0007366c) rss2_navigation_pane_g3

0x0002,

0xf6d2,	// (0x0008028b) rss2_navigation_pane_g

0x2abb,	// (0x00073674) rss2_navigation_pane_t1

0x9884,	// (0x0007a43d) rss2_list_single_pane_ParamLimits

0x9884,	// (0x0007a43d) rss2_list_single_pane

0x2ac9,	// (0x00073682) rss2_list_single_pane_t2

0x2ad7,	// (0x00073690) rss2_list_single_pane_t3_ParamLimits

0x2ad7,	// (0x00073690) rss2_list_single_pane_t3

0x2af4,	// (0x000736ad) rss2_list_single_pane_t4

0x7ff4,	// (0x00078bad) smil_status_pane_g1

0xed0f,	// (0x0007f8c8) main_image2_pane_ParamLimits

0xed0f,	// (0x0007f8c8) main_image2_pane

0x946f,	// (0x0007a028) main_camera2_pane_g9_ParamLimits

0x946f,	// (0x0007a028) main_camera2_pane_g9

0x94c3,	// (0x0007a07c) main_camera2_pane_t5_ParamLimits

0x94c3,	// (0x0007a07c) main_camera2_pane_t5

0x94d5,	// (0x0007a08e) main_camera2_pane_t6_ParamLimits

0x94d5,	// (0x0007a08e) main_camera2_pane_t6

0x989b,	// (0x0007a454) main_image2_pane_g1_ParamLimits

0x989b,	// (0x0007a454) main_image2_pane_g1

0x8ca7,	// (0x00079860) smil2_video_pane_ParamLimits

0x8ca7,	// (0x00079860) smil2_video_pane

0x0f96,	// (0x00071b4f) aid_zoom_text_primary_cp

0x0fbf,	// (0x00071b78) popup_preview_fixed_window

0x1b83,	// (0x0007273c) im_reading_pane_g1

0x93cb,	// (0x00079f84) cams2_bc_adjust_pane_cp_ParamLimits

0x93cb,	// (0x00079f84) cams2_bc_adjust_pane_cp

0x9500,	// (0x0007a0b9) cams2_bc_adjust_pane_ParamLimits

0x9500,	// (0x0007a0b9) cams2_bc_adjust_pane

0x3d46,	// (0x000748ff) cams2_bc_adjust_pane_g1

0x98a7,	// (0x0007a460) cams2_slider_pane

0x98b0,	// (0x0007a469) cams2_slider_pane_g1

0x98b9,	// (0x0007a472) cams2_slider_pane_g2

0x0006,

0xf6d9,	// (0x00080292) cams2_slider_pane_g

0x6ac9,	// (0x00077682) calc_display_pane_ParamLimits

0x6ae1,	// (0x0007769a) calc_paper_pane_ParamLimits

0x6afd,	// (0x000776b6) grid_calc_pane_ParamLimits

0x8266,	// (0x00078e1f) popup_clock_digital_window_t1_ParamLimits

0xe41d,	// (0x0007efd6) main_image_pane_t1

0x6aaf,	// (0x00077668) aid_size_cell_calc_ParamLimits

0x6aaf,	// (0x00077668) aid_size_cell_calc

0x90b6,	// (0x00079c6f) popup_blid_sat_info2_window_ParamLimits

0x90b6,	// (0x00079c6f) popup_blid_sat_info2_window

0x2b0a,	// (0x000736c3) aid_size_cell_blid

0x2b12,	// (0x000736cb) bg_popup_window_pane_cp07

0x2b35,	// (0x000736ee) grid_popup_blid_pane

0x2b3d,	// (0x000736f6) heading_pane_cp05_ParamLimits

0x2b3d,	// (0x000736f6) heading_pane_cp05

0x2c05,	// (0x000737be) cell_popup_blid_pane_ParamLimits

0x2c05,	// (0x000737be) cell_popup_blid_pane

0x2c25,	// (0x000737de) cell_popup_blid_pane_g1

0x2c2d,	// (0x000737e6) cell_popup_blid_pane_t1

0x9709,	// (0x0007a2c2) mup2_indicator_pane_ParamLimits

0x9709,	// (0x0007a2c2) mup2_indicator_pane

0xe19a,	// (0x0007ed53) mup2_visualizer_osc_pane

0x29df,	// (0x00073598) mup2_visualizer_spec_pane_ParamLimits

0x29df,	// (0x00073598) mup2_visualizer_spec_pane

0x98d3,	// (0x0007a48c) mup2_spec_half_pane

0x98dc,	// (0x0007a495) mup2_spec_half_pane_cp

0x98e4,	// (0x0007a49d) mup2_spec_bar_pane_ParamLimits

0x98e4,	// (0x0007a49d) mup2_spec_bar_pane

0x2980,	// (0x00073539) mup2_spec_bar_pane_g1

0x298a,	// (0x00073543) mup2_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x00080205) mup2_spec_bar_pane_g

0x9903,	// (0x0007a4bc) mup2_osc_middle_pane

0x299c,	// (0x00073555) mup2_visualizer_osc_pane_g1

0x0fe7,	// (0x00071ba0) popup_number_entry_window_t1_ParamLimits

0x0ffa,	// (0x00071bb3) popup_number_entry_window_t2_ParamLimits

0x100c,	// (0x00071bc5) popup_number_entry_window_t3_ParamLimits

0x692d,	// (0x000774e6) popup_number_entry_window_t5_ParamLimits

0x692d,	// (0x000774e6) popup_number_entry_window_t5

0xf0fb,	// (0x0007fcb4) popup_number_entry_window_t_ParamLimits

0x101e,	// (0x00071bd7) text_title_cp2_ParamLimits

0x89e5,	// (0x0007959e) aid_hotspot_pointer_text2_pane

0x8a77,	// (0x00079630) main_viewer_pane_g9_ParamLimits

0x8a77,	// (0x00079630) main_viewer_pane_g9

0x1dc2,	// (0x0007297b) cale_month_pane_t1_ParamLimits

0x1e57,	// (0x00072a10) bg_cale_pane_ParamLimits

0x1e6f,	// (0x00072a28) list_cale_pane_ParamLimits

0x1914,	// (0x000724cd) listscroll_cale_day_pane_t1

0x1e80,	// (0x00072a39) scroll_pane_cp09_ParamLimits

0x875d,	// (0x00079316) main_mup_eq_pane_t1_ParamLimits

0x875d,	// (0x00079316) main_mup_eq_pane_t1

0x8773,	// (0x0007932c) main_mup_eq_pane_t2_ParamLimits

0x8773,	// (0x0007932c) main_mup_eq_pane_t2

0x8789,	// (0x00079342) main_mup_eq_pane_t3_ParamLimits

0x8789,	// (0x00079342) main_mup_eq_pane_t3

0x879f,	// (0x00079358) main_mup_eq_pane_t4_ParamLimits

0x879f,	// (0x00079358) main_mup_eq_pane_t4

0x87b5,	// (0x0007936e) main_mup_eq_pane_t5_ParamLimits

0x87b5,	// (0x0007936e) main_mup_eq_pane_t5

0x87cb,	// (0x00079384) main_mup_eq_pane_t6_ParamLimits

0x87cb,	// (0x00079384) main_mup_eq_pane_t6

0x87dd,	// (0x00079396) main_mup_eq_pane_t7_ParamLimits

0x87dd,	// (0x00079396) main_mup_eq_pane_t7

0x87ef,	// (0x000793a8) main_mup_eq_pane_t8_ParamLimits

0x87ef,	// (0x000793a8) main_mup_eq_pane_t8

0x8801,	// (0x000793ba) main_mup_eq_pane_t9_ParamLimits

0x8801,	// (0x000793ba) main_mup_eq_pane_t9

0x8817,	// (0x000793d0) main_mup_eq_pane_t10_ParamLimits

0x8817,	// (0x000793d0) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x00080041) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x00080041) main_mup_eq_pane_t

0x88aa,	// (0x00079463) mup_equalizer_pane_cp5_ParamLimits

0x88bc,	// (0x00079475) mup_equalizer_pane_cp6_ParamLimits

0x88ce,	// (0x00079487) mup_equalizer_pane_cp7_ParamLimits

0x0f6c,	// (0x00071b25) main_gallery_pane

0x29a5,	// (0x0007355e) smil2_volume_pane

0x29c0,	// (0x00073579) smil_status_volume_pane_g1_ParamLimits

0x29ad,	// (0x00073566) smil_status_volume_pane_g2_ParamLimits

0x9246,	// (0x00079dff) smil_status_volume_pane_g3_ParamLimits

0xf651,	// (0x0008020a) smil_status_volume_pane_g_ParamLimits

0x2b12,	// (0x000736cb) bg_popup_window_pane_cp07_ParamLimits

0x2b20,	// (0x000736d9) blid_firmament_pane

0x990c,	// (0x0007a4c5) aid_size_cell_gallery_ParamLimits

0x990c,	// (0x0007a4c5) aid_size_cell_gallery

0x991a,	// (0x0007a4d3) grid_gallery_pane_ParamLimits

0x991a,	// (0x0007a4d3) grid_gallery_pane

0x9926,	// (0x0007a4df) cell_gallery_pane_ParamLimits

0x9926,	// (0x0007a4df) cell_gallery_pane

0x2c3b,	// (0x000737f4) bg_cell_gallery_focus_pane_ParamLimits

0x2c3b,	// (0x000737f4) bg_cell_gallery_focus_pane

0x2c4d,	// (0x00073806) cell_gallery_pane_g1_ParamLimits

0x2c4d,	// (0x00073806) cell_gallery_pane_g1

0x9965,	// (0x0007a51e) cell_gallery_pane_g2_ParamLimits

0x9965,	// (0x0007a51e) cell_gallery_pane_g2

0x9972,	// (0x0007a52b) cell_gallery_pane_g3_ParamLimits

0x9972,	// (0x0007a52b) cell_gallery_pane_g3

0x2c59,	// (0x00073812) cell_gallery_pane_g4_ParamLimits

0x2c59,	// (0x00073812) cell_gallery_pane_g4

0x0003,

0xf6ff,	// (0x000802b8) cell_gallery_pane_g_ParamLimits

0xf6ff,	// (0x000802b8) cell_gallery_pane_g

0x2c65,	// (0x0007381e) bg_cell_gallery_focus_pane_g1

0x2c6d,	// (0x00073826) bg_cell_gallery_focus_pane_g2

0x2c75,	// (0x0007382e) bg_cell_gallery_focus_pane_g3

0x2c7d,	// (0x00073836) bg_cell_gallery_focus_pane_g4

0x2c85,	// (0x0007383e) bg_cell_gallery_focus_pane_g5

0x2c8d,	// (0x00073846) bg_cell_gallery_focus_pane_g6

0x2c95,	// (0x0007384e) bg_cell_gallery_focus_pane_g7

0x2c9d,	// (0x00073856) bg_cell_gallery_focus_pane_g8

0x0007,

0xf708,	// (0x000802c1) bg_cell_gallery_focus_pane_g

0x2ca5,	// (0x0007385e) aid_firma_cardinal

0x2cb9,	// (0x00073872) blid_firmament_pane_t1

0x2cd0,	// (0x00073889) blid_firmament_pane_t2

0x2ce7,	// (0x000738a0) blid_firmament_pane_t3

0x2cfe,	// (0x000738b7) blid_firmament_pane_t4

0x0003,

0xf719,	// (0x000802d2) blid_firmament_pane_t

0x2d15,	// (0x000738ce) blid_sat_info_pane

0x2d25,	// (0x000738de) blid_sat_info_pane_g1

0x2d25,	// (0x000738de) blid_sat_info_pane_g2

0x0001,

0xf722,	// (0x000802db) blid_sat_info_pane_g

0x2d2f,	// (0x000738e8) blid_sat_info_pane_t1

0x2d3d,	// (0x000738f6) smil2_volume_content_pane

0x2d46,	// (0x000738ff) smil2_volume_pane_g1

0x2d4e,	// (0x00073907) smil2_volume_content_pane_g1

0x2d57,	// (0x00073910) smil2_volume_content_pane_g2

0x2d60,	// (0x00073919) smil2_volume_content_pane_g3

0x2d69,	// (0x00073922) smil2_volume_content_pane_g4

0x2d72,	// (0x0007392b) smil2_volume_content_pane_g5

0x2d7b,	// (0x00073934) smil2_volume_content_pane_g6

0x2d84,	// (0x0007393d) smil2_volume_content_pane_g7

0x2d8d,	// (0x00073946) smil2_volume_content_pane_g8

0x2d96,	// (0x0007394f) smil2_volume_content_pane_g9

0x2d9f,	// (0x00073958) smil2_volume_content_pane_g10

0x0009,

0xf727,	// (0x000802e0) smil2_volume_content_pane_g

0x6fd9,	// (0x00077b92) cale_week_day_heading_pane_t1_ParamLimits

0x6ff2,	// (0x00077bab) cale_week_day_heading_pane_t2_ParamLimits

0x700b,	// (0x00077bc4) cale_week_day_heading_pane_t3_ParamLimits

0x7024,	// (0x00077bdd) cale_week_day_heading_pane_t4_ParamLimits

0x703d,	// (0x00077bf6) cale_week_day_heading_pane_t5_ParamLimits

0x7056,	// (0x00077c0f) cale_week_day_heading_pane_t6_ParamLimits

0x706f,	// (0x00077c28) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0007fdb9) cale_week_day_heading_pane_t_ParamLimits

0x1926,	// (0x000724df) bg_cale_side_pane_ParamLimits

0x7088,	// (0x00077c41) cale_week_time_pane_t1_ParamLimits

0x70b4,	// (0x00077c6d) cale_week_time_pane_t2_ParamLimits

0x70e0,	// (0x00077c99) cale_week_time_pane_t3_ParamLimits

0x710c,	// (0x00077cc5) cale_week_time_pane_t4_ParamLimits

0x7138,	// (0x00077cf1) cale_week_time_pane_t5_ParamLimits

0x7164,	// (0x00077d1d) cale_week_time_pane_t6_ParamLimits

0x7190,	// (0x00077d49) cale_week_time_pane_t7_ParamLimits

0x71bc,	// (0x00077d75) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0007fdc8) cale_week_time_pane_t_ParamLimits

0x71e8,	// (0x00077da1) cell_cale_week_pane_g2_ParamLimits

0x1926,	// (0x000724df) bg_cale_side_pane_cp01_ParamLimits

0x7e93,	// (0x00078a4c) cale_month_week_pane_t1_ParamLimits

0x7eaa,	// (0x00078a63) cale_month_week_pane_t2_ParamLimits

0x7ec1,	// (0x00078a7a) cale_month_week_pane_t3_ParamLimits

0x7ed8,	// (0x00078a91) cale_month_week_pane_t4_ParamLimits

0x7eef,	// (0x00078aa8) cale_month_week_pane_t5_ParamLimits

0x7f06,	// (0x00078abf) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x0007fea1) cale_month_week_pane_t_ParamLimits

0x7fc3,	// (0x00078b7c) cell_cale_month_pane_g1_ParamLimits

0x0f6c,	// (0x00071b25) main_cale_event_viewer_pane

0x0f6c,	// (0x00071b25) listscroll_cale_event_viewer_pane

0x2da8,	// (0x00073961) list_cale_ev_pane

0x2db0,	// (0x00073969) scroll_pane_cp023

0x997f,	// (0x0007a538) field_cale_ev_pane_ParamLimits

0x997f,	// (0x0007a538) field_cale_ev_pane

0x2dbc,	// (0x00073975) field_cale_ev_content_pane_ParamLimits

0x2dbc,	// (0x00073975) field_cale_ev_content_pane

0x2dc8,	// (0x00073981) field_cale_ev_pane_g1_ParamLimits

0x2dc8,	// (0x00073981) field_cale_ev_pane_g1

0x2dd4,	// (0x0007398d) field_cale_ev_pane_g2_ParamLimits

0x2dd4,	// (0x0007398d) field_cale_ev_pane_g2

0x2dec,	// (0x000739a5) field_cale_ev_pane_g3_ParamLimits

0x2dec,	// (0x000739a5) field_cale_ev_pane_g3

0x0002,

0xf73c,	// (0x000802f5) field_cale_ev_pane_g_ParamLimits

0xf73c,	// (0x000802f5) field_cale_ev_pane_g

0x2e04,	// (0x000739bd) field_cale_ev_pane_t1_ParamLimits

0x2e04,	// (0x000739bd) field_cale_ev_pane_t1

0x9999,	// (0x0007a552) field_cale_ev_content_pane_t1_ParamLimits

0x9999,	// (0x0007a552) field_cale_ev_content_pane_t1

0xe303,	// (0x0007eebc) bg_button_pane_cp01

0x18ec,	// (0x000724a5) listscroll_cale_week_pane_ParamLimits

0x6e09,	// (0x000779c2) popup_toolbar_window_cp01

0x1914,	// (0x000724cd) listscroll_cale_week_pane_t1_ParamLimits

0x1724,	// (0x000722dd) listscroll_cale_day_pane_ParamLimits

0x6e09,	// (0x000779c2) popup_toolbar_window_cp02

0x1914,	// (0x000724cd) listscroll_cale_day_pane_t1_ParamLimits

0x18ec,	// (0x000724a5) main_cale_month_pane_ParamLimits

0x9156,	// (0x00079d0f) popup_toolbar_window_cp03_ParamLimits

0x9156,	// (0x00079d0f) popup_toolbar_window_cp03

0x8bcf,	// (0x00079788) main_image_pane_g2_ParamLimits

0x8bcf,	// (0x00079788) main_image_pane_g2

0x8bdb,	// (0x00079794) main_image_pane_g3_ParamLimits

0x8bdb,	// (0x00079794) main_image_pane_g3

0x0002,

0xf51a,	// (0x000800d3) main_image_pane_g_ParamLimits

0xf51a,	// (0x000800d3) main_image_pane_g

0xe41d,	// (0x0007efd6) main_image_pane_t1_ParamLimits

0x8be7,	// (0x000797a0) main_image_pane_t2_ParamLimits

0x8be7,	// (0x000797a0) main_image_pane_t2

0x8bf9,	// (0x000797b2) main_image_pane_t3_ParamLimits

0x8bf9,	// (0x000797b2) main_image_pane_t3

0x8c0b,	// (0x000797c4) main_image_pane_t4_ParamLimits

0x8c0b,	// (0x000797c4) main_image_pane_t4

0x0003,

0xf521,	// (0x000800da) main_image_pane_t_ParamLimits

0xf521,	// (0x000800da) main_image_pane_t

0x8c1d,	// (0x000797d6) popup_image_details_window_cp01

0x8c25,	// (0x000797de) popup_toobar_trans_pane_cp01_ParamLimits

0x8c25,	// (0x000797de) popup_toobar_trans_pane_cp01

0x90f5,	// (0x00079cae) popup_image_details_window_ParamLimits

0x90f5,	// (0x00079cae) popup_image_details_window

0x2908,	// (0x000734c1) popup_image_focus_window

0x93bf,	// (0x00079f78) camera2_autofocus_pane_ParamLimits

0x93bf,	// (0x00079f78) camera2_autofocus_pane

0x0f6c,	// (0x00071b25) bg_popup_sub_pane_cp06

0x2e1b,	// (0x000739d4) popup_image_focus_window_g1

0x2e23,	// (0x000739dc) popup_image_focus_window_g2

0x2e2b,	// (0x000739e4) popup_image_focus_window_g3

0x2e33,	// (0x000739ec) popup_image_focus_window_g4

0x0003,

0xf743,	// (0x000802fc) popup_image_focus_window_g

0x2e3b,	// (0x000739f4) popup_image_focus_window_t1

0x2e49,	// (0x00073a02) popup_image_focus_window_t2

0x2e58,	// (0x00073a11) popup_image_focus_window_t3

0x0002,

0xf74c,	// (0x00080305) popup_image_focus_window_t

0x2e66,	// (0x00073a1f) camera2_autofocus_pane_g1

0xed0f,	// (0x0007f8c8) bg_tb_trans_pane_cp01

0x2e74,	// (0x00073a2d) popup_image_details_window_g1

0x2e87,	// (0x00073a40) popup_image_details_window_g2

0x0002,

0xf75e,	// (0x00080317) popup_image_details_window_g

0x2eb0,	// (0x00073a69) popup_image_details_window_t1

0x2ec2,	// (0x00073a7b) popup_image_details_window_t2

0x2edb,	// (0x00073a94) popup_image_details_window_t3

0x2eef,	// (0x00073aa8) popup_image_details_window_t4

0x2f0a,	// (0x00073ac3) popup_image_details_window_t5

0x0004,

0xf765,	// (0x0008031e) popup_image_details_window_t

0x16f2,	// (0x000722ab) bg_calc_paper_pane_ParamLimits

0x6bde,	// (0x00077797) grid_highlight_pane_cp013

0x6be8,	// (0x000777a1) list_calc_pane_ParamLimits

0x6bfa,	// (0x000777b3) scroll_pane_cp024

0x1724,	// (0x000722dd) bg_calc_display_pane_ParamLimits

0x6c02,	// (0x000777bb) calc_display_pane_t1_ParamLimits

0x6c17,	// (0x000777d0) calc_display_pane_t2_ParamLimits

0x6c2c,	// (0x000777e5) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0007fd3b) calc_display_pane_t_ParamLimits

0x6ce2,	// (0x0007789b) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0007fd58) cell_calc_pane_g

0x6ceb,	// (0x000778a4) cell_calc_pane_t1

0x17d1,	// (0x0007238a) grid_highlight_pane_cp02_ParamLimits

0x17e7,	// (0x000723a0) toolbar_button_pane_cp01_ParamLimits

0x17e7,	// (0x000723a0) toolbar_button_pane_cp01

0xe462,	// (0x0007f01b) temp_image_control_pane_ParamLimits

0xe462,	// (0x0007f01b) temp_image_control_pane

0xed0f,	// (0x0007f8c8) main_mp3_pane

0x2f24,	// (0x00073add) temp_image_control_pane_g1_ParamLimits

0x2f24,	// (0x00073add) temp_image_control_pane_g1

0x2f32,	// (0x00073aeb) temp_image_control_pane_g2_ParamLimits

0x2f32,	// (0x00073aeb) temp_image_control_pane_g2

0x2f44,	// (0x00073afd) temp_image_control_pane_g3_ParamLimits

0x2f44,	// (0x00073afd) temp_image_control_pane_g3

0x99e3,	// (0x0007a59c) temp_image_control_pane_g4_ParamLimits

0x99e3,	// (0x0007a59c) temp_image_control_pane_g4

0x0003,

0xf770,	// (0x00080329) temp_image_control_pane_g_ParamLimits

0xf770,	// (0x00080329) temp_image_control_pane_g

0x2f24,	// (0x00073add) main_mp3_pane_g1

0x99f4,	// (0x0007a5ad) main_mp3_pane_g2

0x0007,

0xf779,	// (0x00080332) main_mp3_pane_g

0x2f87,	// (0x00073b40) main_mp3_pane_t1

0x19ec,	// (0x000725a5) main_camera_pane_g8_ParamLimits

0x19ec,	// (0x000725a5) main_camera_pane_g8

0x7463,	// (0x0007801c) main_video_pane_g7_ParamLimits

0x7463,	// (0x0007801c) main_video_pane_g7

0x94ee,	// (0x0007a0a7) main_camera2_pane_t7_ParamLimits

0x94ee,	// (0x0007a0a7) main_camera2_pane_t7

0x1be9,	// (0x000727a2) scroll_pane_cp025_ParamLimits

0x1be9,	// (0x000727a2) scroll_pane_cp025

0x1bfd,	// (0x000727b6) scroll_pane_cp026_ParamLimits

0x1bfd,	// (0x000727b6) scroll_pane_cp026

0x1c0c,	// (0x000727c5) wml_content_pane_ParamLimits

0x0f6c,	// (0x00071b25) main_touch_calib_pane

0x9a8b,	// (0x0007a644) main_touch_calib_pane_g1

0x9a97,	// (0x0007a650) main_touch_calib_pane_g2

0x9aa3,	// (0x0007a65c) main_touch_calib_pane_g3

0x9aaf,	// (0x0007a668) main_touch_calib_pane_g4

0x0003,

0xf797,	// (0x00080350) main_touch_calib_pane_g

0x9abb,	// (0x0007a674) main_touch_calib_pane_t1

0x9ad0,	// (0x0007a689) main_touch_calib_pane_t2

0x0004,

0xf7a0,	// (0x00080359) main_touch_calib_pane_t

0xe08c,	// (0x0007ec45) mup_progress_pane_cp02

0xe0ab,	// (0x0007ec64) navi_pane_g1

0xe12b,	// (0x0007ece4) navi_pane_mp_t3

0xed0f,	// (0x0007f8c8) main_mp3_pane_ParamLimits

0x9190,	// (0x00079d49) navi_pane_ParamLimits

0x2f24,	// (0x00073add) main_mp3_pane_g1_ParamLimits

0x99f4,	// (0x0007a5ad) main_mp3_pane_g2_ParamLimits

0x9a00,	// (0x0007a5b9) main_mp3_pane_g3_ParamLimits

0x9a00,	// (0x0007a5b9) main_mp3_pane_g3

0x9a0c,	// (0x0007a5c5) main_mp3_pane_g4_ParamLimits

0x9a0c,	// (0x0007a5c5) main_mp3_pane_g4

0x2f54,	// (0x00073b0d) main_mp3_pane_g5_ParamLimits

0x2f54,	// (0x00073b0d) main_mp3_pane_g5

0x2f62,	// (0x00073b1b) main_mp3_pane_g6_ParamLimits

0x2f62,	// (0x00073b1b) main_mp3_pane_g6

0x2f6f,	// (0x00073b28) main_mp3_pane_g7_ParamLimits

0x2f6f,	// (0x00073b28) main_mp3_pane_g7

0x2f7b,	// (0x00073b34) main_mp3_pane_g8_ParamLimits

0x2f7b,	// (0x00073b34) main_mp3_pane_g8

0xf779,	// (0x00080332) main_mp3_pane_g_ParamLimits

0x9a18,	// (0x0007a5d1) main_mp3_pane_t2

0x9a26,	// (0x0007a5df) main_mp3_pane_t3

0x2f95,	// (0x00073b4e) main_mp3_pane_t4

0x2fa3,	// (0x00073b5c) main_mp3_pane_t5

0x0005,

0xf78a,	// (0x00080343) main_mp3_pane_t

0x2fb1,	// (0x00073b6a) mup_progress_pane_cp01

0x0f96,	// (0x00071b4f) aid_zoom_text_secondary2

0x2da8,	// (0x00073961) list_cale_ev2_pane

0x2db0,	// (0x00073969) scroll_pane_cp023_ParamLimits

0x9b1b,	// (0x0007a6d4) field_cale_ev2_pane_ParamLimits

0x9b1b,	// (0x0007a6d4) field_cale_ev2_pane

0x534c,	// (0x00075f05) field_cale_ev2_pane_g1_ParamLimits

0x534c,	// (0x00075f05) field_cale_ev2_pane_g1

0x5358,	// (0x00075f11) field_cale_ev2_pane_g2_ParamLimits

0x5358,	// (0x00075f11) field_cale_ev2_pane_g2

0x5370,	// (0x00075f29) field_cale_ev2_pane_g3_ParamLimits

0x5370,	// (0x00075f29) field_cale_ev2_pane_g3

0x0003,

0xf7ab,	// (0x00080364) field_cale_ev2_pane_g_ParamLimits

0xf7ab,	// (0x00080364) field_cale_ev2_pane_g

0x2fb9,	// (0x00073b72) field_cale_ev2_pane_t1_ParamLimits

0x2fb9,	// (0x00073b72) field_cale_ev2_pane_t1

0x2fd0,	// (0x00073b89) field_cale_ev2_pane_t2_ParamLimits

0x2fd0,	// (0x00073b89) field_cale_ev2_pane_t2

0x0001,

0xf7b4,	// (0x0008036d) field_cale_ev2_pane_t_ParamLimits

0xf7b4,	// (0x0008036d) field_cale_ev2_pane_t

0x8acb,	// (0x00079684) main_postcard_pane_g5_ParamLimits

0x8acb,	// (0x00079684) main_postcard_pane_g5

0x8ad7,	// (0x00079690) main_postcard_pane_g6_ParamLimits

0x8ad7,	// (0x00079690) main_postcard_pane_g6

0x72b8,	// (0x00077e71) camera2_autofocus_pane_cp_ParamLimits

0x72b8,	// (0x00077e71) camera2_autofocus_pane_cp

0xed0f,	// (0x0007f8c8) main_mup3_pane

0x9b51,	// (0x0007a70a) main_mup3_pane_g1_ParamLimits

0x9b51,	// (0x0007a70a) main_mup3_pane_g1

0x9b72,	// (0x0007a72b) main_mup3_pane_g2_ParamLimits

0x9b72,	// (0x0007a72b) main_mup3_pane_g2

0x9bd5,	// (0x0007a78e) main_mup3_pane_g3_ParamLimits

0x9bd5,	// (0x0007a78e) main_mup3_pane_g3

0x9c10,	// (0x0007a7c9) main_mup3_pane_g4_ParamLimits

0x9c10,	// (0x0007a7c9) main_mup3_pane_g4

0x9c4b,	// (0x0007a804) main_mup3_pane_g5_ParamLimits

0x9c4b,	// (0x0007a804) main_mup3_pane_g5

0x9c86,	// (0x0007a83f) main_mup3_pane_g6_ParamLimits

0x9c86,	// (0x0007a83f) main_mup3_pane_g6

0x2fe5,	// (0x00073b9e) main_mup3_pane_g7_ParamLimits

0x2fe5,	// (0x00073b9e) main_mup3_pane_g7

0x0007,

0xf7c4,	// (0x0008037d) main_mup3_pane_g_ParamLimits

0xf7c4,	// (0x0008037d) main_mup3_pane_g

0x9cf4,	// (0x0007a8ad) main_mup3_pane_t1_ParamLimits

0x9cf4,	// (0x0007a8ad) main_mup3_pane_t1

0x9d57,	// (0x0007a910) main_mup3_pane_t2_ParamLimits

0x9d57,	// (0x0007a910) main_mup3_pane_t2

0x9e14,	// (0x0007a9cd) main_mup3_pane_t4_ParamLimits

0x9e14,	// (0x0007a9cd) main_mup3_pane_t4

0x9e5a,	// (0x0007aa13) main_mup3_pane_t5_ParamLimits

0x9e5a,	// (0x0007aa13) main_mup3_pane_t5

0x9efe,	// (0x0007aab7) main_mup3_pane_t6_ParamLimits

0x9efe,	// (0x0007aab7) main_mup3_pane_t6

0x0005,

0xf7d5,	// (0x0008038e) main_mup3_pane_t_ParamLimits

0xf7d5,	// (0x0008038e) main_mup3_pane_t

0x9fa6,	// (0x0007ab5f) mup3_progress_pane_ParamLimits

0x9fa6,	// (0x0007ab5f) mup3_progress_pane

0x9fec,	// (0x0007aba5) popup_mup3_control_window_ParamLimits

0x9fec,	// (0x0007aba5) popup_mup3_control_window

0x2ff3,	// (0x00073bac) popup_mup3_text_window

0xa005,	// (0x0007abbe) mup3_progress_pane_t1

0xa01b,	// (0x0007abd4) mup3_progress_pane_t2

0x2ffb,	// (0x00073bb4) mup3_progress_pane_t3

0x0002,

0xf7e2,	// (0x0008039b) mup3_progress_pane_t

0x3012,	// (0x00073bcb) mup_progress_pane_cp03

0x0f6c,	// (0x00071b25) bg_tb_trans_pane_cp04

0xa031,	// (0x0007abea) mup3_volume_pane

0xa039,	// (0x0007abf2) popup_mup3_control_window_g1

0xa042,	// (0x0007abfb) mup3_volume_pane_g1

0xa04b,	// (0x0007ac04) mup3_volume_pane_g2

0xa054,	// (0x0007ac0d) mup3_volume_pane_g3

0x0002,

0xf7e9,	// (0x000803a2) mup3_volume_pane_g

0x0f6c,	// (0x00071b25) bg_tb_trans_pane_cp03

0x3022,	// (0x00073bdb) popup_mup3_text_window_g1

0x302a,	// (0x00073be3) popup_mup3_text_window_t1

0x17a8,	// (0x00072361) list_calc_item_pane_g1_ParamLimits

0x2a80,	// (0x00073639) mup_volume_pane_cp_g1

0x9ae5,	// (0x0007a69e) main_touch_calib_pane_t3

0x9af7,	// (0x0007a6b0) main_touch_calib_pane_t4

0x9b09,	// (0x0007a6c2) main_touch_calib_pane_t5

0x0f76,	// (0x00071b2f) aid_cell_size_toolbar2

0x0f7e,	// (0x00071b37) aid_popup3_width_pane

0x0f86,	// (0x00071b3f) aid_zoom_text_msg_primary

0x72a2,	// (0x00077e5b) vorec_t7

0x176c,	// (0x00072325) bg_calc_paper_pane_g1_ParamLimits

0x1784,	// (0x0007233d) bg_calc_paper_pane_g2_ParamLimits

0x1778,	// (0x00072331) bg_calc_paper_pane_g3_ParamLimits

0x179c,	// (0x00072355) bg_calc_paper_pane_g4_ParamLimits

0x1790,	// (0x00072349) bg_calc_paper_pane_g5_ParamLimits

0x6c65,	// (0x0007781e) bg_calc_paper_pane_g6_ParamLimits

0x6c74,	// (0x0007782d) bg_calc_paper_pane_g7_ParamLimits

0x6c83,	// (0x0007783c) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0007fd42) bg_calc_paper_pane_g_ParamLimits

0x6c92,	// (0x0007784b) calc_bg_paper_pane_g9_ParamLimits

0x7398,	// (0x00077f51) image_qvga_pane_ParamLimits

0x7398,	// (0x00077f51) image_qvga_pane

0x1633,	// (0x000721ec) bg_popup_sub_pane_cp04_ParamLimits

0xe399,	// (0x0007ef52) popup_mup_playback_window_g1_ParamLimits

0xe3a5,	// (0x0007ef5e) popup_mup_playback_window_t1_ParamLimits

0xe3ba,	// (0x0007ef73) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x000800ce) popup_mup_playback_window_t_ParamLimits

0x9615,	// (0x0007a1ce) main_mup2_pane_g3_ParamLimits

0x9615,	// (0x0007a1ce) main_mup2_pane_g3

0x7606,	// (0x000781bf) popup_toolbar_window_cp04

0xe788,	// (0x0007f341) popup_call2_audio_second_window_g3_ParamLimits

0xe788,	// (0x0007f341) popup_call2_audio_second_window_g3

0xeb92,	// (0x0007f74b) popup_call2_audio_first_window_g4_ParamLimits

0xeb92,	// (0x0007f74b) popup_call2_audio_first_window_g4

0x2549,	// (0x00073102) popup_call2_audio_in_window_g4_ParamLimits

0x2549,	// (0x00073102) popup_call2_audio_in_window_g4

0x8bc2,	// (0x0007977b) aid_area_sk_bg_cut_ParamLimits

0x8bc2,	// (0x0007977b) aid_area_sk_bg_cut

0xe3cf,	// (0x0007ef88) aid_area_sk_bg_cut_2_ParamLimits

0xe3cf,	// (0x0007ef88) aid_area_sk_bg_cut_2

0x9955,	// (0x0007a50e) aid_placing_details_win

0x995d,	// (0x0007a516) aid_placing_details_win_2

0x2e66,	// (0x00073a1f) camera2_autofocus_pane_g1_ParamLimits

0x6894,	// (0x0007744d) popup_fixed_preview_cale_window_ParamLimits

0x6894,	// (0x0007744d) popup_fixed_preview_cale_window

0xe1ab,	// (0x0007ed64) navi_slider_pane_g3

0xe1b4,	// (0x0007ed6d) navi_slider_pane_g4

0xe1bd,	// (0x0007ed76) navi_slider_pane_g5

0xe1ab,	// (0x0007ed64) navi_slider_pane_g6

0x851d,	// (0x000790d6) navi_slider_pane_g7

0xe2d0,	// (0x0007ee89) mup_scale_pane_g3

0xe2d9,	// (0x0007ee92) mup_scale_pane_g4

0xe2e2,	// (0x0007ee9b) mup_scale_pane_g5

0x88e0,	// (0x00079499) mup_scale_pane_g6

0x88e9,	// (0x000794a2) mup_scale_pane_g7

0xe1ab,	// (0x0007ed64) cams2_slider_pane_g3

0x2b02,	// (0x000736bb) cams2_slider_pane_g4

0x98c2,	// (0x0007a47b) cams2_slider_pane_g5

0xe1ab,	// (0x0007ed64) cams2_slider_pane_g6

0x98ca,	// (0x0007a483) cams2_slider_pane_g7

0x2d25,	// (0x000738de) camera2_autofocus_pane_cp_g1

0x3038,	// (0x00073bf1) bg_popup_preview_window_pane_cp02_ParamLimits

0x3038,	// (0x00073bf1) bg_popup_preview_window_pane_cp02

0xa05d,	// (0x0007ac16) list_fp_cale_pane_ParamLimits

0xa05d,	// (0x0007ac16) list_fp_cale_pane

0x3044,	// (0x00073bfd) popup_fixed_preview_cale_window_t1_ParamLimits

0x3044,	// (0x00073bfd) popup_fixed_preview_cale_window_t1

0xa06d,	// (0x0007ac26) popup_fixed_preview_cale_window_t2_ParamLimits

0xa06d,	// (0x0007ac26) popup_fixed_preview_cale_window_t2

0xa082,	// (0x0007ac3b) popup_fixed_preview_cale_window_t3_ParamLimits

0xa082,	// (0x0007ac3b) popup_fixed_preview_cale_window_t3

0x0002,

0xf7f0,	// (0x000803a9) popup_fixed_preview_cale_window_t_ParamLimits

0xf7f0,	// (0x000803a9) popup_fixed_preview_cale_window_t

0xa094,	// (0x0007ac4d) list_single_fp_cale_pane_ParamLimits

0xa094,	// (0x0007ac4d) list_single_fp_cale_pane

0xa0a1,	// (0x0007ac5a) list_single_fp_cale_pane_g1_ParamLimits

0xa0a1,	// (0x0007ac5a) list_single_fp_cale_pane_g1

0x3062,	// (0x00073c1b) list_single_fp_cale_pane_g2_ParamLimits

0x3062,	// (0x00073c1b) list_single_fp_cale_pane_g2

0x0002,

0xf7f7,	// (0x000803b0) list_single_fp_cale_pane_g_ParamLimits

0xf7f7,	// (0x000803b0) list_single_fp_cale_pane_g

0xa0ad,	// (0x0007ac66) list_single_fp_cale_pane_t1_ParamLimits

0xa0ad,	// (0x0007ac66) list_single_fp_cale_pane_t1

0xa0bf,	// (0x0007ac78) list_single_fp_cale_pane_t2_ParamLimits

0xa0bf,	// (0x0007ac78) list_single_fp_cale_pane_t2

0x0001,

0xf7fe,	// (0x000803b7) list_single_fp_cale_pane_t_ParamLimits

0xf7fe,	// (0x000803b7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0f6c,	// (0x00071b25) main_dialer_pane

0xa0f2,	// (0x0007acab) aid_cell_size_keypad

0xa0fc,	// (0x0007acb5) dialer_ne_pane

0xa104,	// (0x0007acbd) grid_dialer_command_1_pane

0xa10c,	// (0x0007acc5) grid_dialer_command_2_pane

0xa114,	// (0x0007accd) grid_dialer_keypad_pane

0xa124,	// (0x0007acdd) bg_popup_call_pane_cp06_ParamLimits

0xa124,	// (0x0007acdd) bg_popup_call_pane_cp06

0xa130,	// (0x0007ace9) dialer_ne_clear_pane_ParamLimits

0xa130,	// (0x0007ace9) dialer_ne_clear_pane

0x307b,	// (0x00073c34) dialer_ne_pane_g1

0x3083,	// (0x00073c3c) dialer_ne_pane_t1_ParamLimits

0x3083,	// (0x00073c3c) dialer_ne_pane_t1

0xa13c,	// (0x0007acf5) dialer_ne_pane_t2_ParamLimits

0xa13c,	// (0x0007acf5) dialer_ne_pane_t2

0xa159,	// (0x0007ad12) dialer_ne_pane_t3_ParamLimits

0xa159,	// (0x0007ad12) dialer_ne_pane_t3

0x0002,

0xf803,	// (0x000803bc) dialer_ne_pane_t_ParamLimits

0xf803,	// (0x000803bc) dialer_ne_pane_t

0xa17d,	// (0x0007ad36) dialer_ne_pane_t3_copy1_ParamLimits

0xa17d,	// (0x0007ad36) dialer_ne_pane_t3_copy1

0xa1a1,	// (0x0007ad5a) cell_dialer_keypad_pane_ParamLimits

0xa1a1,	// (0x0007ad5a) cell_dialer_keypad_pane

0xa1b6,	// (0x0007ad6f) cell_dialer_command_1_pane_ParamLimits

0xa1b6,	// (0x0007ad6f) cell_dialer_command_1_pane

0xa1cc,	// (0x0007ad85) cell_dialer_command_2_pane_ParamLimits

0xa1cc,	// (0x0007ad85) cell_dialer_command_2_pane

0x3095,	// (0x00073c4e) bg_button_pane_cp02_ParamLimits

0x3095,	// (0x00073c4e) bg_button_pane_cp02

0xa1db,	// (0x0007ad94) cell_dialer_keypad_pane_g1_ParamLimits

0xa1db,	// (0x0007ad94) cell_dialer_keypad_pane_g1

0x3095,	// (0x00073c4e) bg_button_pane_cp03_ParamLimits

0x3095,	// (0x00073c4e) bg_button_pane_cp03

0xa1f0,	// (0x0007ada9) cell_dialer_command_1_pane_g1_ParamLimits

0xa1f0,	// (0x0007ada9) cell_dialer_command_1_pane_g1

0x30a1,	// (0x00073c5a) bg_button_pane_cp04

0xa203,	// (0x0007adbc) cell_dialer_command_2_pane_g1

0xe19a,	// (0x0007ed53) bg_button_pane_cp06

0x30a9,	// (0x00073c62) dialer_ne_clear_pane_g1

0xe0b7,	// (0x0007ec70) navi_pane_g2

0x84c5,	// (0x0007907e) navi_pane_g3

0x0002,

0xf418,	// (0x0007ffd1) navi_pane_g

0xe139,	// (0x0007ecf2) navi_pane_mv_g2

0xe161,	// (0x0007ed1a) navi_pane_mv_g5

0x84ea,	// (0x000790a3) navi_pane_mv_t1

0x1724,	// (0x000722dd) main_clock2_pane

0xa232,	// (0x0007adeb) main_clock2_list_pane_ParamLimits

0xa232,	// (0x0007adeb) main_clock2_list_pane

0xa258,	// (0x0007ae11) main_clock2_pane_t1_ParamLimits

0xa258,	// (0x0007ae11) main_clock2_pane_t1

0xa282,	// (0x0007ae3b) main_clock2_pane_t2_ParamLimits

0xa282,	// (0x0007ae3b) main_clock2_pane_t2

0x0004,

0xf80a,	// (0x000803c3) main_clock2_pane_t_ParamLimits

0xf80a,	// (0x000803c3) main_clock2_pane_t

0xa2e5,	// (0x0007ae9e) popup_clock_analogue_window_cp03_ParamLimits

0xa2e5,	// (0x0007ae9e) popup_clock_analogue_window_cp03

0xa301,	// (0x0007aeba) popup_clock_digital_window_cp02_ParamLimits

0xa301,	// (0x0007aeba) popup_clock_digital_window_cp02

0xa34f,	// (0x0007af08) main_clock2_list_single_pane_ParamLimits

0xa34f,	// (0x0007af08) main_clock2_list_single_pane

0xe19a,	// (0x0007ed53) list_highlight_pane_cp05

0x30b1,	// (0x00073c6a) main_clock2_list_single_pane_t1

0x7606,	// (0x000781bf) popup_toolbar_window_cp04_ParamLimits

0x99b3,	// (0x0007a56c) camera2_autofocus_pane_g2_ParamLimits

0x99b3,	// (0x0007a56c) camera2_autofocus_pane_g2

0x99bf,	// (0x0007a578) camera2_autofocus_pane_g3_ParamLimits

0x99bf,	// (0x0007a578) camera2_autofocus_pane_g3

0x99cb,	// (0x0007a584) camera2_autofocus_pane_g4_ParamLimits

0x99cb,	// (0x0007a584) camera2_autofocus_pane_g4

0x99d7,	// (0x0007a590) camera2_autofocus_pane_g5_ParamLimits

0x99d7,	// (0x0007a590) camera2_autofocus_pane_g5

0x0004,

0xf753,	// (0x0008030c) camera2_autofocus_pane_g_ParamLimits

0xf753,	// (0x0008030c) camera2_autofocus_pane_g

0x9b31,	// (0x0007a6ea) camera2_autofocus_pane_cp_g2

0x9b39,	// (0x0007a6f2) camera2_autofocus_pane_cp_g3

0x9b41,	// (0x0007a6fa) camera2_autofocus_pane_cp_g4

0x9b49,	// (0x0007a702) camera2_autofocus_pane_cp_g5

0x0004,

0xf7b9,	// (0x00080372) camera2_autofocus_pane_cp_g

0xa11c,	// (0x0007acd5) popup_dialer_spcha_window

0x0f6c,	// (0x00071b25) bg_popup_sub_pane_cp07

0x30bf,	// (0x00073c78) list_spcha_pane

0x30c7,	// (0x00073c80) list_single_spcha_pane_ParamLimits

0x30c7,	// (0x00073c80) list_single_spcha_pane

0x0f6c,	// (0x00071b25) list_highlight_pane_cp06

0x30d8,	// (0x00073c91) list_single_spcha_pane_t1

0x22f3,	// (0x00072eac) popup_call2_audio_out_window_g4_ParamLimits

0x22f3,	// (0x00072eac) popup_call2_audio_out_window_g4

0x0f6c,	// (0x00071b25) main_imed2_pane

0x2910,	// (0x000734c9) popup_imed_adjust2_window

0x9101,	// (0x00079cba) popup_imed_trans_window_ParamLimits

0x9101,	// (0x00079cba) popup_imed_trans_window

0x2b69,	// (0x00073722) popup_blid_sat_info2_window_t1

0x2b77,	// (0x00073730) popup_blid_sat_info2_window_t2

0x000a,

0xf6e8,	// (0x000802a1) popup_blid_sat_info2_window_t

0xa3f7,	// (0x0007afb0) aid_size_cell_colour_35

0xa40e,	// (0x0007afc7) aid_size_cell_colour_112

0xa425,	// (0x0007afde) aid_size_cell_effect

0xed0f,	// (0x0007f8c8) bg_tb_trans_pane_cp02

0xed1d,	// (0x0007f8d6) heading_imed_pane

0xa43f,	// (0x0007aff8) listscroll_imed_pane

0x30e6,	// (0x00073c9f) heading_imed_pane_g1

0x30ee,	// (0x00073ca7) heading_imed_pane_t1

0x30fc,	// (0x00073cb5) grid_imed_colour_35_pane_ParamLimits

0x30fc,	// (0x00073cb5) grid_imed_colour_35_pane

0xa44b,	// (0x0007b004) grid_imed_effect_pane

0x310f,	// (0x00073cc8) list_imed_aspect_pane

0xa457,	// (0x0007b010) scroll_pane_cp027_ParamLimits

0xa457,	// (0x0007b010) scroll_pane_cp027

0xa463,	// (0x0007b01c) cell_imed_effect_pane_ParamLimits

0xa463,	// (0x0007b01c) cell_imed_effect_pane

0x3117,	// (0x00073cd0) cell_imed_colour_pane_ParamLimits

0x3117,	// (0x00073cd0) cell_imed_colour_pane

0x3151,	// (0x00073d0a) cell_imed_colour_pane_g1_ParamLimits

0x3151,	// (0x00073d0a) cell_imed_colour_pane_g1

0x3162,	// (0x00073d1b) hgihlgiht_grid_pane_cp016_ParamLimits

0x3162,	// (0x00073d1b) hgihlgiht_grid_pane_cp016

0xa479,	// (0x0007b032) cell_imed_effect_pane_g1

0xa481,	// (0x0007b03a) grid_highlight_pane_cp017

0x3173,	// (0x00073d2c) list_imed_single_pane_ParamLimits

0x3173,	// (0x00073d2c) list_imed_single_pane

0x0f6c,	// (0x00071b25) list_highlight_pane_cp07

0x3186,	// (0x00073d3f) list_imed_aspect_pane_comp1_t1

0x28ea,	// (0x000734a3) bg_tb_trans_pane_cp05

0x31a6,	// (0x00073d5f) popup_imed_adjust2_window_g1

0x31cd,	// (0x00073d86) popup_imed_adjust2_window_t1

0x31e5,	// (0x00073d9e) slider_imed_adjust_pane

0x31f9,	// (0x00073db2) slider_imed_adjust_pane_g1

0x3209,	// (0x00073dc2) slider_imed_adjust_pane_g2

0x3219,	// (0x00073dd2) slider_imed_adjust_pane_g3

0x322a,	// (0x00073de3) slider_imed_adjust_pane_g4

0x0003,

0xf827,	// (0x000803e0) slider_imed_adjust_pane_g

0xa48a,	// (0x0007b043) aid_size_cell_clipart2

0xa496,	// (0x0007b04f) grid_imed_clipart_pane

0x323b,	// (0x00073df4) scroll_pane_cp031

0xa4a0,	// (0x0007b059) cell_imed_clipart_pane_ParamLimits

0xa4a0,	// (0x0007b059) cell_imed_clipart_pane

0xa4b7,	// (0x0007b070) cell_imed_clipart_pane_g1

0x0f6c,	// (0x00071b25) grid_highlight_pane_cp014

0xa23e,	// (0x0007adf7) main_clock2_pane_g1_ParamLimits

0xa23e,	// (0x0007adf7) main_clock2_pane_g1

0xa319,	// (0x0007aed2) aid_call2_pane_cp10

0xa325,	// (0x0007aede) aid_call_pane_cp10

0xe067,	// (0x0007ec20) popup_clock_analogue_window_cp10_g1

0xe067,	// (0x0007ec20) popup_clock_analogue_window_cp10_g2

0xa331,	// (0x0007aeea) popup_clock_analogue_window_cp10_g3

0xa331,	// (0x0007aeea) popup_clock_analogue_window_cp10_g4

0xe067,	// (0x0007ec20) popup_clock_analogue_window_cp10_g5

0x0004,

0xf815,	// (0x000803ce) popup_clock_analogue_window_cp10_g

0xa33d,	// (0x0007aef6) popup_clock_analogue_window_cp10_t1

0xa361,	// (0x0007af1a) clock_digital_number_pane_cp10_ParamLimits

0xa361,	// (0x0007af1a) clock_digital_number_pane_cp10

0xa379,	// (0x0007af32) clock_digital_number_pane_cp11_ParamLimits

0xa379,	// (0x0007af32) clock_digital_number_pane_cp11

0xa391,	// (0x0007af4a) clock_digital_number_pane_cp12_ParamLimits

0xa391,	// (0x0007af4a) clock_digital_number_pane_cp12

0xa3a9,	// (0x0007af62) clock_digital_number_pane_cp13_ParamLimits

0xa3a9,	// (0x0007af62) clock_digital_number_pane_cp13

0xa3c1,	// (0x0007af7a) clock_digital_separator_pane_cp10_ParamLimits

0xa3c1,	// (0x0007af7a) clock_digital_separator_pane_cp10

0xa3d9,	// (0x0007af92) popup_clock_digital_window_cp02_t1_ParamLimits

0xa3d9,	// (0x0007af92) popup_clock_digital_window_cp02_t1

0x162b,	// (0x000721e4) clock_digital_number_pane_cp10_g1

0x162b,	// (0x000721e4) clock_digital_number_pane_cp10_g2

0x0001,

0xf830,	// (0x000803e9) clock_digital_number_pane_cp10_g

0x162b,	// (0x000721e4) clock_digital_separator_pane_cp10_g1

0x162b,	// (0x000721e4) clock_digital_separator_pane_g2_cp10

0xe16a,	// (0x0007ed23) navi_pane_vded_g4

0xe173,	// (0x0007ed2c) navi_pane_vded_g5

0xe17c,	// (0x0007ed35) navi_pane_vded_t1

0x0f6c,	// (0x00071b25) main_vded_pane

0xa4c0,	// (0x0007b079) main_vded_pane_g1

0xa4c8,	// (0x0007b081) main_vded_pane_g2

0xa4d0,	// (0x0007b089) main_vded_pane_g3

0x0002,

0xf835,	// (0x000803ee) main_vded_pane_g

0xa4d8,	// (0x0007b091) main_vded_pane_t1

0xa4e6,	// (0x0007b09f) main_vded_pane_t2

0x0001,

0xf83c,	// (0x000803f5) main_vded_pane_t

0xa4f4,	// (0x0007b0ad) vded_slider_pane

0xa4fc,	// (0x0007b0b5) vded_video_pane

0x3243,	// (0x00073dfc) vded_video_pane_g1

0xa504,	// (0x0007b0bd) vded_video_pane_g2

0x2d25,	// (0x000738de) vded_video_pane_g3

0x0002,

0xf841,	// (0x000803fa) vded_video_pane_g

0x324d,	// (0x00073e06) vded_slider_pane_g1

0x2a80,	// (0x00073639) vded_slider_pane_g2

0x3256,	// (0x00073e0f) vded_slider_pane_g3

0x325f,	// (0x00073e18) vded_slider_pane_g4

0x3268,	// (0x00073e21) vded_slider_pane_g5

0x0004,

0xf848,	// (0x00080401) vded_slider_pane_g

0x9fe0,	// (0x0007ab99) mup3_rocker_pane_ParamLimits

0x9fe0,	// (0x0007ab99) mup3_rocker_pane

0xa50d,	// (0x0007b0c6) mup3_control_keys_pane_g1

0xa515,	// (0x0007b0ce) mup3_control_keys_pane_g2

0xa51d,	// (0x0007b0d6) mup3_control_keys_pane_g3

0xa525,	// (0x0007b0de) mup3_control_keys_pane_g4

0x0003,

0xf853,	// (0x0008040c) mup3_control_keys_pane_g

0x68b0,	// (0x00077469) popup_toolbar2_fixed_window_cp01_ParamLimits

0x68b0,	// (0x00077469) popup_toolbar2_fixed_window_cp01

0x9ff8,	// (0x0007abb1) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9ff8,	// (0x0007abb1) popup_toolbar2_fixed_window_cp02

0xe8fa,	// (0x0007f4b3) popup_call2_audio_second_window_t4_ParamLimits

0xe8fa,	// (0x0007f4b3) popup_call2_audio_second_window_t4

0x2160,	// (0x00072d19) popup_call2_audio_first_window_t6_ParamLimits

0x2160,	// (0x00072d19) popup_call2_audio_first_window_t6

0x23f6,	// (0x00072faf) popup_call2_audio_out_window_t6_ParamLimits

0x23f6,	// (0x00072faf) popup_call2_audio_out_window_t6

0x0f6c,	// (0x00071b25) main_vitu_pane

0xa535,	// (0x0007b0ee) aid_size_cell_itu_ParamLimits

0xa535,	// (0x0007b0ee) aid_size_cell_itu

0x3658,	// (0x00074211) bg_popup_window_pane_cp08_ParamLimits

0x3658,	// (0x00074211) bg_popup_window_pane_cp08

0xa543,	// (0x0007b0fc) field_vitu_entry_pane_ParamLimits

0xa543,	// (0x0007b0fc) field_vitu_entry_pane

0xa550,	// (0x0007b109) grid_vitu_function_pane_ParamLimits

0xa550,	// (0x0007b109) grid_vitu_function_pane

0xa55c,	// (0x0007b115) grid_vitu_itu_pane_ParamLimits

0xa55c,	// (0x0007b115) grid_vitu_itu_pane

0xa568,	// (0x0007b121) cell_vitu_itu_pane_ParamLimits

0xa568,	// (0x0007b121) cell_vitu_itu_pane

0xa57d,	// (0x0007b136) cell_vitu_function_pane_ParamLimits

0xa57d,	// (0x0007b136) cell_vitu_function_pane

0xed0f,	// (0x0007f8c8) bg_popup_sub_pane_cp08_ParamLimits

0xed0f,	// (0x0007f8c8) bg_popup_sub_pane_cp08

0xa58f,	// (0x0007b148) field_vitu_entry_pane_t1_ParamLimits

0xa58f,	// (0x0007b148) field_vitu_entry_pane_t1

0x3289,	// (0x00073e42) field_vitu_entry_pane_t2_ParamLimits

0x3289,	// (0x00073e42) field_vitu_entry_pane_t2

0x0001,

0xf861,	// (0x0008041a) field_vitu_entry_pane_t_ParamLimits

0xf861,	// (0x0008041a) field_vitu_entry_pane_t

0x32a6,	// (0x00073e5f) bg_button_pane_cp05_ParamLimits

0x32a6,	// (0x00073e5f) bg_button_pane_cp05

0xa5a8,	// (0x0007b161) cell_vitu_itu_pane_g1

0xa5c0,	// (0x0007b179) cell_vitu_itu_pane_t1_ParamLimits

0xa5c0,	// (0x0007b179) cell_vitu_itu_pane_t1

0xa5d2,	// (0x0007b18b) cell_vitu_itu_pane_t2_ParamLimits

0xa5d2,	// (0x0007b18b) cell_vitu_itu_pane_t2

0x0002,

0xf866,	// (0x0008041f) cell_vitu_itu_pane_t_ParamLimits

0xf866,	// (0x0008041f) cell_vitu_itu_pane_t

0x32b4,	// (0x00073e6d) bg_button_pane_cp07

0xa607,	// (0x0007b1c0) cell_vitu_function_pane_g1

0x6b15,	// (0x000776ce) main_calc_pane_g1

0x66f7,	// (0x000772b0) aid_visual_content_pane

0x0f6c,	// (0x00071b25) main_vradio_pane

0xa610,	// (0x0007b1c9) main_vradio_pane_g1_ParamLimits

0xa610,	// (0x0007b1c9) main_vradio_pane_g1

0x32be,	// (0x00073e77) main_vradio_pane_g2_ParamLimits

0x32be,	// (0x00073e77) main_vradio_pane_g2

0x0001,

0xf86d,	// (0x00080426) main_vradio_pane_g_ParamLimits

0xf86d,	// (0x00080426) main_vradio_pane_g

0xa61e,	// (0x0007b1d7) main_vradio_pane_t1_ParamLimits

0xa61e,	// (0x0007b1d7) main_vradio_pane_t1

0xa630,	// (0x0007b1e9) main_vradio_pane_t2_ParamLimits

0xa630,	// (0x0007b1e9) main_vradio_pane_t2

0x32cb,	// (0x00073e84) main_vradio_pane_t3_ParamLimits

0x32cb,	// (0x00073e84) main_vradio_pane_t3

0x0002,

0xf872,	// (0x0008042b) main_vradio_pane_t_ParamLimits

0xf872,	// (0x0008042b) main_vradio_pane_t

0xa642,	// (0x0007b1fb) vradio_rocker_control_pane_ParamLimits

0xa642,	// (0x0007b1fb) vradio_rocker_control_pane

0xa64e,	// (0x0007b207) vradio_station_info_pane_ParamLimits

0xa64e,	// (0x0007b207) vradio_station_info_pane

0x32dd,	// (0x00073e96) vradio_frequency_info_pane_ParamLimits

0x32dd,	// (0x00073e96) vradio_frequency_info_pane

0x2d25,	// (0x000738de) vradio_station_info_pane_g1

0x32ec,	// (0x00073ea5) vradio_station_info_pane_t1_ParamLimits

0x32ec,	// (0x00073ea5) vradio_station_info_pane_t1

0x330e,	// (0x00073ec7) vradio_station_info_pane_t2_ParamLimits

0x330e,	// (0x00073ec7) vradio_station_info_pane_t2

0x0001,

0xf879,	// (0x00080432) vradio_station_info_pane_t_ParamLimits

0xf879,	// (0x00080432) vradio_station_info_pane_t

0x3320,	// (0x00073ed9) vradio_tuning_pane

0x3328,	// (0x00073ee1) vradio_rocker_control_pane_g1

0x3330,	// (0x00073ee9) vradio_rocker_control_pane_g2

0x3338,	// (0x00073ef1) vradio_rocker_control_pane_g3

0x3340,	// (0x00073ef9) vradio_rocker_control_pane_g4

0x3348,	// (0x00073f01) vradio_rocker_control_pane_g5

0x0004,

0xf87e,	// (0x00080437) vradio_rocker_control_pane_g

0xa65b,	// (0x0007b214) vradio_frequency_info_pane_g1

0x3350,	// (0x00073f09) vradio_frequency_info_pane_t1_ParamLimits

0x3350,	// (0x00073f09) vradio_frequency_info_pane_t1

0xa663,	// (0x0007b21c) vradio_tuning_pane_g1

0xa66c,	// (0x0007b225) vradio_tuning_pane_t1

0x0f9e,	// (0x00071b57) area_side_right_pane_ParamLimits

0x0f9e,	// (0x00071b57) area_side_right_pane

0x28b1,	// (0x0007346a) status_small_pane_g1

0x28b9,	// (0x00073472) status_small_pane_g2

0x28c2,	// (0x0007347b) status_small_pane_g3

0x28cb,	// (0x00073484) status_small_pane_g4

0x0003,

0xf63e,	// (0x000801f7) status_small_pane_g

0x28d4,	// (0x0007348d) status_small_pane_t1

0x0f6c,	// (0x00071b25) main_video3_pane

0x3364,	// (0x00073f1d) cams_zoom_vslider_pane

0x336c,	// (0x00073f25) image3_wide_pane_ParamLimits

0x336c,	// (0x00073f25) image3_wide_pane

0x3386,	// (0x00073f3f) image3_wide_small_pane

0x3390,	// (0x00073f49) main_video3_pane_g1_ParamLimits

0x3390,	// (0x00073f49) main_video3_pane_g1

0x33ac,	// (0x00073f65) main_video3_pane_g2_ParamLimits

0x33ac,	// (0x00073f65) main_video3_pane_g2

0x0001,

0xf889,	// (0x00080442) main_video3_pane_g_ParamLimits

0xf889,	// (0x00080442) main_video3_pane_g

0x33c8,	// (0x00073f81) main_video3_pane_t1_ParamLimits

0x33c8,	// (0x00073f81) main_video3_pane_t1

0x33f3,	// (0x00073fac) main_video3_pane_t2_ParamLimits

0x33f3,	// (0x00073fac) main_video3_pane_t2

0x341e,	// (0x00073fd7) main_video3_pane_t3_ParamLimits

0x341e,	// (0x00073fd7) main_video3_pane_t3

0x0002,

0xf88e,	// (0x00080447) main_video3_pane_t_ParamLimits

0xf88e,	// (0x00080447) main_video3_pane_t

0x3449,	// (0x00074002) cams_zoom_vslider_pane_g1

0x3452,	// (0x0007400b) cams_zoom_vslider_pane_g2

0x0001,

0xf895,	// (0x0008044e) cams_zoom_vslider_pane_g

0x345a,	// (0x00074013) small_slider_vertical_pane

0x2d25,	// (0x000738de) small_slider_vertical_pane_g1

0x2d25,	// (0x000738de) small_slider_vertical_pane_g2

0x3462,	// (0x0007401b) small_slider_vertical_pane_g3

0x0002,

0xf89a,	// (0x00080453) small_slider_vertical_pane_g

0x0f6c,	// (0x00071b25) main_hwr_training_pane

0x346b,	// (0x00074024) hwr_training_instruct_pane_ParamLimits

0x346b,	// (0x00074024) hwr_training_instruct_pane

0xa67b,	// (0x0007b234) hwr_training_navi_pane_ParamLimits

0xa67b,	// (0x0007b234) hwr_training_navi_pane

0xa68f,	// (0x0007b248) hwr_training_write_pane_ParamLimits

0xa68f,	// (0x0007b248) hwr_training_write_pane

0x0f6c,	// (0x00071b25) bg_frame_shadow_pane

0x349a,	// (0x00074053) hwr_training_write_pane_g1

0x34a2,	// (0x0007405b) hwr_training_write_pane_g2

0x34aa,	// (0x00074063) hwr_training_write_pane_g3

0x34b2,	// (0x0007406b) hwr_training_write_pane_g4

0x34ba,	// (0x00074073) hwr_training_write_pane_g5

0x34c2,	// (0x0007407b) hwr_training_write_pane_g6

0x34ca,	// (0x00074083) hwr_training_write_pane_g7

0x0006,

0xf8a1,	// (0x0008045a) hwr_training_write_pane_g

0xa6bd,	// (0x0007b276) hwr_training_navi_pane_g1_ParamLimits

0xa6bd,	// (0x0007b276) hwr_training_navi_pane_g1

0xa6cf,	// (0x0007b288) hwr_training_navi_pane_g2_ParamLimits

0xa6cf,	// (0x0007b288) hwr_training_navi_pane_g2

0xa6e1,	// (0x0007b29a) hwr_training_navi_pane_g3_ParamLimits

0xa6e1,	// (0x0007b29a) hwr_training_navi_pane_g3

0xa6f1,	// (0x0007b2aa) hwr_training_navi_pane_g4_ParamLimits

0xa6f1,	// (0x0007b2aa) hwr_training_navi_pane_g4

0x0004,

0xf8b0,	// (0x00080469) hwr_training_navi_pane_g_ParamLimits

0xf8b0,	// (0x00080469) hwr_training_navi_pane_g

0xa70b,	// (0x0007b2c4) hwr_training_navi_pane_t1

0xa719,	// (0x0007b2d2) list_single_hwr_training_instruct_pane_ParamLimits

0xa719,	// (0x0007b2d2) list_single_hwr_training_instruct_pane

0x34d2,	// (0x0007408b) list_single_hwr_training_instruct_pane_t1

0x2c65,	// (0x0007381e) bg_frame_shadow_pane_g1

0x34e1,	// (0x0007409a) bg_frame_shadow_pane_g2

0x34e9,	// (0x000740a2) bg_frame_shadow_pane_g3

0x34f1,	// (0x000740aa) bg_frame_shadow_pane_g4

0x34f9,	// (0x000740b2) bg_frame_shadow_pane_g5

0x3501,	// (0x000740ba) bg_frame_shadow_pane_g6

0x3509,	// (0x000740c2) bg_frame_shadow_pane_g7

0x1847,	// (0x00072400) bg_frame_shadow_pane_g8

0x0007,

0xf8bb,	// (0x00080474) bg_frame_shadow_pane_g

0x0f6c,	// (0x00071b25) main_video_tele_dialer_pane

0xa731,	// (0x0007b2ea) aid_size_cell_video_keypad_ParamLimits

0xa731,	// (0x0007b2ea) aid_size_cell_video_keypad

0xa741,	// (0x0007b2fa) grid_video_dialer_keypad_pane_ParamLimits

0xa741,	// (0x0007b2fa) grid_video_dialer_keypad_pane

0xa771,	// (0x0007b32a) video_down_pane_cp_ParamLimits

0xa771,	// (0x0007b32a) video_down_pane_cp

0xa799,	// (0x0007b352) cell_video_dialer_keypad_pane_ParamLimits

0xa799,	// (0x0007b352) cell_video_dialer_keypad_pane

0x3511,	// (0x000740ca) bg_button_pane_cp08_ParamLimits

0x3511,	// (0x000740ca) bg_button_pane_cp08

0xa7ae,	// (0x0007b367) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa7ae,	// (0x0007b367) cell_video_dialer_keypad_pane_g1

0x9fd4,	// (0x0007ab8d) mup3_rocker2_pane_ParamLimits

0x9fd4,	// (0x0007ab8d) mup3_rocker2_pane

0x2d25,	// (0x000738de) mup3_rocker2_pane_g1

0x909b,	// (0x00079c54) main_dialer2_pane

0x0f6c,	// (0x00071b25) main_mp4_pane

0xa7ed,	// (0x0007b3a6) main_mp4_pane_g1_ParamLimits

0xa7ed,	// (0x0007b3a6) main_mp4_pane_g1

0xa7fb,	// (0x0007b3b4) main_mp4_pane_g2_ParamLimits

0xa7fb,	// (0x0007b3b4) main_mp4_pane_g2

0xa809,	// (0x0007b3c2) main_mp4_pane_g3_ParamLimits

0xa809,	// (0x0007b3c2) main_mp4_pane_g3

0xa83e,	// (0x0007b3f7) main_mp4_pane_g4_ParamLimits

0xa83e,	// (0x0007b3f7) main_mp4_pane_g4

0xa86c,	// (0x0007b425) main_mp4_pane_g5_ParamLimits

0xa86c,	// (0x0007b425) main_mp4_pane_g5

0x0005,

0xf8db,	// (0x00080494) main_mp4_pane_g_ParamLimits

0xf8db,	// (0x00080494) main_mp4_pane_g

0xa8c8,	// (0x0007b481) main_mp4_pane_t1_ParamLimits

0xa8c8,	// (0x0007b481) main_mp4_pane_t1

0xa920,	// (0x0007b4d9) main_mp4_pane_t2_ParamLimits

0xa920,	// (0x0007b4d9) main_mp4_pane_t2

0x351d,	// (0x000740d6) main_mp4_pane_t3_ParamLimits

0x351d,	// (0x000740d6) main_mp4_pane_t3

0xa972,	// (0x0007b52b) main_mp4_pane_t4_ParamLimits

0xa972,	// (0x0007b52b) main_mp4_pane_t4

0x0003,

0xf8e8,	// (0x000804a1) main_mp4_pane_t_ParamLimits

0xf8e8,	// (0x000804a1) main_mp4_pane_t

0xa9b2,	// (0x0007b56b) mp4_progress_pane_ParamLimits

0xa9b2,	// (0x0007b56b) mp4_progress_pane

0xa9f6,	// (0x0007b5af) mp4_rocker_pane_ParamLimits

0xa9f6,	// (0x0007b5af) mp4_rocker_pane

0x354b,	// (0x00074104) mp4_progress_pane_t1

0x3562,	// (0x0007411b) mp4_progress_pane_t2

0x0001,

0xf8f1,	// (0x000804aa) mp4_progress_pane_t

0x3579,	// (0x00074132) mup_progress_pane_cp04

0x3daa,	// (0x00074963) mp4_rocker_pane_g1

0xaa14,	// (0x0007b5cd) aid_cell_size_keypad2_ParamLimits

0xaa14,	// (0x0007b5cd) aid_cell_size_keypad2

0xaa24,	// (0x0007b5dd) dialer2_ne_pane_ParamLimits

0xaa24,	// (0x0007b5dd) dialer2_ne_pane

0xaa30,	// (0x0007b5e9) grid_dialer2_keypad_pane_ParamLimits

0xaa30,	// (0x0007b5e9) grid_dialer2_keypad_pane

0x3e05,	// (0x000749be) bg_popup_call_pane_cp07_ParamLimits

0x3e05,	// (0x000749be) bg_popup_call_pane_cp07

0xaa3c,	// (0x0007b5f5) dialer2_ne_pane_t1_ParamLimits

0xaa3c,	// (0x0007b5f5) dialer2_ne_pane_t1

0xaa61,	// (0x0007b61a) cell_dialer2_keypad_pane_ParamLimits

0xaa61,	// (0x0007b61a) cell_dialer2_keypad_pane

0x3597,	// (0x00074150) bg_button_pane_pane_cp04_ParamLimits

0x3597,	// (0x00074150) bg_button_pane_pane_cp04

0xaa76,	// (0x0007b62f) cell_dialer2_keypad_pane_g1_ParamLimits

0xaa76,	// (0x0007b62f) cell_dialer2_keypad_pane_g1

0x7554,	// (0x0007810d) aid_placing_vt_set_content_ParamLimits

0x7554,	// (0x0007810d) aid_placing_vt_set_content

0x756e,	// (0x00078127) aid_placing_vt_set_title_ParamLimits

0x756e,	// (0x00078127) aid_placing_vt_set_title

0x0f6c,	// (0x00071b25) main_image3_pane

0xaaea,	// (0x0007b6a3) area_side_right_pane_cp01_ParamLimits

0xaaea,	// (0x0007b6a3) area_side_right_pane_cp01

0xab17,	// (0x0007b6d0) main_image3_pane_g1_ParamLimits

0xab17,	// (0x0007b6d0) main_image3_pane_g1

0xab25,	// (0x0007b6de) main_image3_pane_g2_ParamLimits

0xab25,	// (0x0007b6de) main_image3_pane_g2

0xab3c,	// (0x0007b6f5) main_image3_pane_g3_ParamLimits

0xab3c,	// (0x0007b6f5) main_image3_pane_g3

0xab53,	// (0x0007b70c) main_image3_pane_g4_ParamLimits

0xab53,	// (0x0007b70c) main_image3_pane_g4

0x0003,

0xf900,	// (0x000804b9) main_image3_pane_g_ParamLimits

0xf900,	// (0x000804b9) main_image3_pane_g

0xab6a,	// (0x0007b723) main_image3_pane_t1_ParamLimits

0xab6a,	// (0x0007b723) main_image3_pane_t1

0xab8f,	// (0x0007b748) main_image3_pane_t2_ParamLimits

0xab8f,	// (0x0007b748) main_image3_pane_t2

0xabae,	// (0x0007b767) main_image3_pane_t3_ParamLimits

0xabae,	// (0x0007b767) main_image3_pane_t3

0x0003,

0xf909,	// (0x000804c2) main_image3_pane_t_ParamLimits

0xf909,	// (0x000804c2) main_image3_pane_t

0x3658,	// (0x00074211) grid_sctrl_middle_pane_cp01_ParamLimits

0x3658,	// (0x00074211) grid_sctrl_middle_pane_cp01

0xac09,	// (0x0007b7c2) cell_sctrl_middle_pane_cp01_ParamLimits

0xac09,	// (0x0007b7c2) cell_sctrl_middle_pane_cp01

0xac1a,	// (0x0007b7d3) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xac1a,	// (0x0007b7d3) cell_sctrl_middle_pane_cp01_g1

0x0f6c,	// (0x00071b25) main_call4_pane

0xac27,	// (0x0007b7e0) aid_size_button_call4_ParamLimits

0xac27,	// (0x0007b7e0) aid_size_button_call4

0xac51,	// (0x0007b80a) call4_windows_pane_ParamLimits

0xac51,	// (0x0007b80a) call4_windows_pane

0xac65,	// (0x0007b81e) grid_call4_button_pane_ParamLimits

0xac65,	// (0x0007b81e) grid_call4_button_pane

0x35bb,	// (0x00074174) call4_windows_conf_pane

0xac7f,	// (0x0007b838) popup_call4_audio_first_window_ParamLimits

0xac7f,	// (0x0007b838) popup_call4_audio_first_window

0xac9f,	// (0x0007b858) popup_call4_audio_second_window_ParamLimits

0xac9f,	// (0x0007b858) popup_call4_audio_second_window

0x35ee,	// (0x000741a7) popup_call4_audio_wait_window_ParamLimits

0x35ee,	// (0x000741a7) popup_call4_audio_wait_window

0xacb1,	// (0x0007b86a) cell_call4_button_pane_ParamLimits

0xacb1,	// (0x0007b86a) cell_call4_button_pane

0x17e7,	// (0x000723a0) bg_button_pane_cp09_ParamLimits

0x17e7,	// (0x000723a0) bg_button_pane_cp09

0xacd4,	// (0x0007b88d) cell_call4_button_pane_g1_ParamLimits

0xacd4,	// (0x0007b88d) cell_call4_button_pane_g1

0xace1,	// (0x0007b89a) cell_call4_button_pane_t1_ParamLimits

0xace1,	// (0x0007b89a) cell_call4_button_pane_t1

0x3634,	// (0x000741ed) popup_call4_audio_conf_window_ParamLimits

0x3634,	// (0x000741ed) popup_call4_audio_conf_window

0xa005,	// (0x0007abbe) mup3_progress_pane_t1_ParamLimits

0xa01b,	// (0x0007abd4) mup3_progress_pane_t2_ParamLimits

0x2ffb,	// (0x00073bb4) mup3_progress_pane_t3_ParamLimits

0xf7e2,	// (0x0008039b) mup3_progress_pane_t_ParamLimits

0x3012,	// (0x00073bcb) mup_progress_pane_cp03_ParamLimits

0xa52d,	// (0x0007b0e6) mup3_control_keys_pane_g4_copy1

0xa9e0,	// (0x0007b599) mp4_rocker2_pane_ParamLimits

0xa9e0,	// (0x0007b599) mp4_rocker2_pane

0x3650,	// (0x00074209) mp4_rocker2_pane_g1

0x3648,	// (0x00074201) mp4_rocker2_pane_g2

0xacf3,	// (0x0007b8ac) mp4_rocker2_pane_g3

0xacfb,	// (0x0007b8b4) mp4_rocker2_pane_g4

0xad03,	// (0x0007b8bc) mp4_rocker2_pane_g5

0x0004,

0xf912,	// (0x000804cb) mp4_rocker2_pane_g

0x0f6c,	// (0x00071b25) main_camera4_pane

0x0f6c,	// (0x00071b25) main_video4_pane

0xa74d,	// (0x0007b306) main_video_tele_dialer_pane_t1_ParamLimits

0xa74d,	// (0x0007b306) main_video_tele_dialer_pane_t1

0xa75f,	// (0x0007b318) main_video_tele_dialer_pane_t2_ParamLimits

0xa75f,	// (0x0007b318) main_video_tele_dialer_pane_t2

0x0001,

0xf8cc,	// (0x00080485) main_video_tele_dialer_pane_t_ParamLimits

0xf8cc,	// (0x00080485) main_video_tele_dialer_pane_t

0xad21,	// (0x0007b8da) cam4_autofocus_pane_ParamLimits

0xad21,	// (0x0007b8da) cam4_autofocus_pane

0xad2d,	// (0x0007b8e6) cam4_image_uncrop_pane_ParamLimits

0xad2d,	// (0x0007b8e6) cam4_image_uncrop_pane

0xad42,	// (0x0007b8fb) cam4_indicators_pane_ParamLimits

0xad42,	// (0x0007b8fb) cam4_indicators_pane

0xad5c,	// (0x0007b915) main_camera4_pane_g1_ParamLimits

0xad5c,	// (0x0007b915) main_camera4_pane_g1

0xad68,	// (0x0007b921) main_camera4_pane_g2_ParamLimits

0xad68,	// (0x0007b921) main_camera4_pane_g2

0xad68,	// (0x0007b921) main_camera4_pane_g3_ParamLimits

0xad68,	// (0x0007b921) main_camera4_pane_g3

0xad74,	// (0x0007b92d) main_camera4_pane_g4_ParamLimits

0xad74,	// (0x0007b92d) main_camera4_pane_g4

0xad80,	// (0x0007b939) main_camera4_pane_g5_ParamLimits

0xad80,	// (0x0007b939) main_camera4_pane_g5

0x0005,

0xf91d,	// (0x000804d6) main_camera4_pane_g_ParamLimits

0xf91d,	// (0x000804d6) main_camera4_pane_g

0xad9a,	// (0x0007b953) main_camera4_pane_t1_ParamLimits

0xad9a,	// (0x0007b953) main_camera4_pane_t1

0xade2,	// (0x0007b99b) bg_tb_trans_pane_cp06

0xadf8,	// (0x0007b9b1) cam4_indicators_pane_g1

0xae08,	// (0x0007b9c1) cam4_indicators_pane_g2

0x0002,

0xf938,	// (0x000804f1) cam4_indicators_pane_g

0xae28,	// (0x0007b9e1) cam4_indicators_pane_t1

0xae50,	// (0x0007ba09) main_video4_pane_g1_ParamLimits

0xae50,	// (0x0007ba09) main_video4_pane_g1

0xad68,	// (0x0007b921) main_video4_pane_g2_ParamLimits

0xad68,	// (0x0007b921) main_video4_pane_g2

0xad68,	// (0x0007b921) main_video4_pane_g3_ParamLimits

0xad68,	// (0x0007b921) main_video4_pane_g3

0xad74,	// (0x0007b92d) main_video4_pane_g4_ParamLimits

0xad74,	// (0x0007b92d) main_video4_pane_g4

0x0004,

0xf93f,	// (0x000804f8) main_video4_pane_g_ParamLimits

0xf93f,	// (0x000804f8) main_video4_pane_g

0xae64,	// (0x0007ba1d) vid4_indicators_pane_ParamLimits

0xae64,	// (0x0007ba1d) vid4_indicators_pane

0xae82,	// (0x0007ba3b) video4_image_uncrop_cif_pane_ParamLimits

0xae82,	// (0x0007ba3b) video4_image_uncrop_cif_pane

0xae8f,	// (0x0007ba48) video4_image_uncrop_nhd_pane_ParamLimits

0xae8f,	// (0x0007ba48) video4_image_uncrop_nhd_pane

0xad2d,	// (0x0007b8e6) video4_image_uncrop_vga_pane_ParamLimits

0xad2d,	// (0x0007b8e6) video4_image_uncrop_vga_pane

0xae9c,	// (0x0007ba55) bg_tb_trans_pane_cp07

0xadf8,	// (0x0007b9b1) vid4_indicators_pane_g1

0xaeaa,	// (0x0007ba63) vid4_indicators_pane_g2

0xaeba,	// (0x0007ba73) vid4_indicators_pane_g3

0x0004,

0xf94a,	// (0x00080503) vid4_indicators_pane_g

0xaee7,	// (0x0007baa0) vid4_indicators_pane_t1

0xaf01,	// (0x0007baba) cam4_autofocus_pane_g1

0xaf09,	// (0x0007bac2) cam4_autofocus_pane_g2

0xaf11,	// (0x0007baca) cam4_autofocus_pane_g3

0x0002,

0xf955,	// (0x0008050e) cam4_autofocus_pane_g

0xaf19,	// (0x0007bad2) cam4_autofocus_pane_g3_copy1

0xa77d,	// (0x0007b336) video_down_pane_cp_t1

0xa78b,	// (0x0007b344) video_down_pane_cp_t2

0x0001,

0xf8d1,	// (0x0008048a) video_down_pane_cp_t

0x3658,	// (0x00074211) popup_vitu2_window_ParamLimits

0x3658,	// (0x00074211) popup_vitu2_window

0xaf21,	// (0x0007bada) aid_size_cell2_itu2_ParamLimits

0xaf21,	// (0x0007bada) aid_size_cell2_itu2

0xaf43,	// (0x0007bafc) aid_size_cell_itu2_ParamLimits

0xaf43,	// (0x0007bafc) aid_size_cell_itu2

0xaf81,	// (0x0007bb3a) bg_popup_window_pane_cp09_ParamLimits

0xaf81,	// (0x0007bb3a) bg_popup_window_pane_cp09

0xaf8f,	// (0x0007bb48) field_vitu2_entry_pane_ParamLimits

0xaf8f,	// (0x0007bb48) field_vitu2_entry_pane

0xafa5,	// (0x0007bb5e) grid_vitu2_function_pane_ParamLimits

0xafa5,	// (0x0007bb5e) grid_vitu2_function_pane

0xafd7,	// (0x0007bb90) grid_vitu2_itu_pane_ParamLimits

0xafd7,	// (0x0007bb90) grid_vitu2_itu_pane

0xb02d,	// (0x0007bbe6) cell_vitu2_itu_pane_ParamLimits

0xb02d,	// (0x0007bbe6) cell_vitu2_itu_pane

0xb042,	// (0x0007bbfb) cell_vitu2_function_pane_ParamLimits

0xb042,	// (0x0007bbfb) cell_vitu2_function_pane

0x3666,	// (0x0007421f) bg_popup_call_pane_cp08_ParamLimits

0x3666,	// (0x0007421f) bg_popup_call_pane_cp08

0x367f,	// (0x00074238) field_vitu2_entry_pane_g1

0x368b,	// (0x00074244) field_vitu2_entry_pane_g2

0x0002,

0xf95c,	// (0x00080515) field_vitu2_entry_pane_g

0x36a5,	// (0x0007425e) field_vitu2_entry_pane_t1_ParamLimits

0x36a5,	// (0x0007425e) field_vitu2_entry_pane_t1

0x36c0,	// (0x00074279) field_vitu2_entry_pane_t2_ParamLimits

0x36c0,	// (0x00074279) field_vitu2_entry_pane_t2

0x0001,

0xf963,	// (0x0008051c) field_vitu2_entry_pane_t_ParamLimits

0xf963,	// (0x0008051c) field_vitu2_entry_pane_t

0xb081,	// (0x0007bc3a) bg_button_pane_cp010_ParamLimits

0xb081,	// (0x0007bc3a) bg_button_pane_cp010

0xb08f,	// (0x0007bc48) cell_vitu2_itu_pane_g1

0xb0ad,	// (0x0007bc66) cell_vitu2_itu_pane_t1_ParamLimits

0xb0ad,	// (0x0007bc66) cell_vitu2_itu_pane_t1

0x6608,	// (0x000771c1) cell_vitu2_itu_pane_t2_ParamLimits

0x6608,	// (0x000771c1) cell_vitu2_itu_pane_t2

0x0002,

0xf96d,	// (0x00080526) cell_vitu2_itu_pane_t_ParamLimits

0xf96d,	// (0x00080526) cell_vitu2_itu_pane_t

0xae9c,	// (0x0007ba55) bg_button_pane_cp011

0xb0ff,	// (0x0007bcb8) cell_vitu2_function_pane_g1

0x0f6c,	// (0x00071b25) main_myfav_hc_pane

0xabee,	// (0x0007b7a7) popup_image3_note_pane_ParamLimits

0xabee,	// (0x0007b7a7) popup_image3_note_pane

0xabfa,	// (0x0007b7b3) popup_image3_tool_bar_pane_ParamLimits

0xabfa,	// (0x0007b7b3) popup_image3_tool_bar_pane

0x6676,	// (0x0007722f) cell_vitu2_itu_pane_t3_ParamLimits

0x6676,	// (0x0007722f) cell_vitu2_itu_pane_t3

0x0f6c,	// (0x00071b25) bg_popup_trans_pane

0x36e5,	// (0x0007429e) grid_image3_tool_bar_pane

0x36ef,	// (0x000742a8) bg_popup_trans_pane_g1

0x1cf2,	// (0x000728ab) bg_popup_trans_pane_g2

0x36f7,	// (0x000742b0) bg_popup_trans_pane_g3

0x36ff,	// (0x000742b8) bg_popup_trans_pane_g4

0x3707,	// (0x000742c0) bg_popup_trans_pane_g5

0x370f,	// (0x000742c8) bg_popup_trans_pane_g6

0x3717,	// (0x000742d0) bg_popup_trans_pane_g7

0x371f,	// (0x000742d8) bg_popup_trans_pane_g8

0x1cd2,	// (0x0007288b) bg_popup_trans_pane_g9

0x0008,

0xf974,	// (0x0008052d) bg_popup_trans_pane_g

0xed29,	// (0x0007f8e2) cell_image3_tool_bar_pane_ParamLimits

0xed29,	// (0x0007f8e2) cell_image3_tool_bar_pane

0x2d25,	// (0x000738de) cell_image3_tool_bar_pane_g1

0x0f6c,	// (0x00071b25) bg_popup_trans_pane_cp1

0x3727,	// (0x000742e0) popup_image3_note_pane_t1

0x3735,	// (0x000742ee) popup_image3_note_pane_t2

0x3743,	// (0x000742fc) popup_image3_note_pane_t3

0x0002,

0xf987,	// (0x00080540) popup_image3_note_pane_t

0x3751,	// (0x0007430a) popup_image3_note_pane_t3_copy1

0xb113,	// (0x0007bccc) bg_myfav_hc_instruction_pane_ParamLimits

0xb113,	// (0x0007bccc) bg_myfav_hc_instruction_pane

0xb125,	// (0x0007bcde) cell_myfav_contact_pane_ParamLimits

0xb125,	// (0x0007bcde) cell_myfav_contact_pane

0xb13f,	// (0x0007bcf8) cell_myfav_contact_pane_cp1_ParamLimits

0xb13f,	// (0x0007bcf8) cell_myfav_contact_pane_cp1

0xb155,	// (0x0007bd0e) cell_myfav_contact_pane_cp2_ParamLimits

0xb155,	// (0x0007bd0e) cell_myfav_contact_pane_cp2

0xb16b,	// (0x0007bd24) cell_myfav_contact_pane_cp3_ParamLimits

0xb16b,	// (0x0007bd24) cell_myfav_contact_pane_cp3

0xb180,	// (0x0007bd39) cell_myfav_contact_pane_cp4_ParamLimits

0xb180,	// (0x0007bd39) cell_myfav_contact_pane_cp4

0xb194,	// (0x0007bd4d) cell_myfav_contact_pane_cp5_ParamLimits

0xb194,	// (0x0007bd4d) cell_myfav_contact_pane_cp5

0xb1a8,	// (0x0007bd61) cell_myfav_contact_pane_cp6_ParamLimits

0xb1a8,	// (0x0007bd61) cell_myfav_contact_pane_cp6

0xb1bc,	// (0x0007bd75) cell_myfav_contact_pane_cp7_ParamLimits

0xb1bc,	// (0x0007bd75) cell_myfav_contact_pane_cp7

0x375f,	// (0x00074318) listscroll_gen_pane_cp05

0xb1d4,	// (0x0007bd8d) main_myfav_hc_pane_g1_ParamLimits

0xb1d4,	// (0x0007bd8d) main_myfav_hc_pane_g1

0xb1ea,	// (0x0007bda3) main_myfav_hc_pane_g2_ParamLimits

0xb1ea,	// (0x0007bda3) main_myfav_hc_pane_g2

0x0002,

0xf98e,	// (0x00080547) main_myfav_hc_pane_g_ParamLimits

0xf98e,	// (0x00080547) main_myfav_hc_pane_g

0xb214,	// (0x0007bdcd) main_myfav_hc_pane_t1_ParamLimits

0xb214,	// (0x0007bdcd) main_myfav_hc_pane_t1

0x3768,	// (0x00074321) main_myfav_hc_pane_t2_ParamLimits

0x3768,	// (0x00074321) main_myfav_hc_pane_t2

0x377a,	// (0x00074333) main_myfav_hc_pane_t3_ParamLimits

0x377a,	// (0x00074333) main_myfav_hc_pane_t3

0xb229,	// (0x0007bde2) main_myfav_hc_pane_t4_ParamLimits

0xb229,	// (0x0007bde2) main_myfav_hc_pane_t4

0x0004,

0xf995,	// (0x0008054e) main_myfav_hc_pane_t_ParamLimits

0xf995,	// (0x0008054e) main_myfav_hc_pane_t

0x2d25,	// (0x000738de) bg_myfav_hc_instruction_pane_g1

0x378c,	// (0x00074345) cell_myfav_contact_pane_g1_ParamLimits

0x378c,	// (0x00074345) cell_myfav_contact_pane_g1

0x378c,	// (0x00074345) cell_myfav_contact_pane_g2_ParamLimits

0x378c,	// (0x00074345) cell_myfav_contact_pane_g2

0x3798,	// (0x00074351) cell_myfav_contact_pane_g3_ParamLimits

0x3798,	// (0x00074351) cell_myfav_contact_pane_g3

0x2fe5,	// (0x00073b9e) cell_myfav_contact_pane_g4_ParamLimits

0x2fe5,	// (0x00073b9e) cell_myfav_contact_pane_g4

0x37a5,	// (0x0007435e) cell_myfav_contact_pane_g5_ParamLimits

0x37a5,	// (0x0007435e) cell_myfav_contact_pane_g5

0x0004,

0xf9a0,	// (0x00080559) cell_myfav_contact_pane_g_ParamLimits

0xf9a0,	// (0x00080559) cell_myfav_contact_pane_g

0xb200,	// (0x0007bdb9) main_myfav_hc_pane_g3_ParamLimits

0xb200,	// (0x0007bdb9) main_myfav_hc_pane_g3

0x682e,	// (0x000773e7) popup_adpt_find_window

0xb24d,	// (0x0007be06) afind_page_pane_ParamLimits

0xb24d,	// (0x0007be06) afind_page_pane

0xb25a,	// (0x0007be13) aid_size_cell_afind_ParamLimits

0xb25a,	// (0x0007be13) aid_size_cell_afind

0xb274,	// (0x0007be2d) bg_popup_sub_pane_cp09_ParamLimits

0xb274,	// (0x0007be2d) bg_popup_sub_pane_cp09

0xb281,	// (0x0007be3a) find_pane_cp01_ParamLimits

0xb281,	// (0x0007be3a) find_pane_cp01

0x37b1,	// (0x0007436a) grid_afind_control_pane_ParamLimits

0x37b1,	// (0x0007436a) grid_afind_control_pane

0xb28e,	// (0x0007be47) grid_afind_pane_ParamLimits

0xb28e,	// (0x0007be47) grid_afind_pane

0xb2a4,	// (0x0007be5d) cell_afind_pane_ParamLimits

0xb2a4,	// (0x0007be5d) cell_afind_pane

0x2d25,	// (0x000738de) afind_page_pane_g1

0xb2da,	// (0x0007be93) afind_page_pane_g2

0xb2e3,	// (0x0007be9c) afind_page_pane_g3

0x0002,

0xf9ab,	// (0x00080564) afind_page_pane_g

0xb2ec,	// (0x0007bea5) afind_page_pane_t1

0x37c5,	// (0x0007437e) cell_afind_grid_control_pane_ParamLimits

0x37c5,	// (0x0007437e) cell_afind_grid_control_pane

0x3597,	// (0x00074150) bg_button_pane_cp69_ParamLimits

0x3597,	// (0x00074150) bg_button_pane_cp69

0xb30c,	// (0x0007bec5) cell_afind_pane_g1_ParamLimits

0xb30c,	// (0x0007bec5) cell_afind_pane_g1

0xb319,	// (0x0007bed2) cell_afind_pane_t1_ParamLimits

0xb319,	// (0x0007bed2) cell_afind_pane_t1

0x1a36,	// (0x000725ef) bg_button_pane_cp72

0x37d4,	// (0x0007438d) cell_afind_grid_control_pane_g1

0x8cd3,	// (0x0007988c) aid_image_placing_area_ParamLimits

0x8cd3,	// (0x0007988c) aid_image_placing_area

0x3271,	// (0x00073e2a) field_vitu_entry_pane_g1_ParamLimits

0x3271,	// (0x00073e2a) field_vitu_entry_pane_g1

0x327d,	// (0x00073e36) field_vitu_entry_pane_g2_ParamLimits

0x327d,	// (0x00073e36) field_vitu_entry_pane_g2

0x0001,

0xf85c,	// (0x00080415) field_vitu_entry_pane_g_ParamLimits

0xf85c,	// (0x00080415) field_vitu_entry_pane_g

0xa5a8,	// (0x0007b161) cell_vitu_itu_pane_g1_ParamLimits

0xa5ea,	// (0x0007b1a3) cell_vitu_itu_pane_t3_ParamLimits

0xa5ea,	// (0x0007b1a3) cell_vitu_itu_pane_t3

0x354b,	// (0x00074104) mp4_progress_pane_t1_ParamLimits

0x3562,	// (0x0007411b) mp4_progress_pane_t2_ParamLimits

0xf8f1,	// (0x000804aa) mp4_progress_pane_t_ParamLimits

0x3579,	// (0x00074132) mup_progress_pane_cp04_ParamLimits

0xb23b,	// (0x0007bdf4) main_myfav_hc_pane_t5_ParamLimits

0xb23b,	// (0x0007bdf4) main_myfav_hc_pane_t5

0x0f8e,	// (0x00071b47) aid_zoom_text_primary

0x682e,	// (0x000773e7) popup_adpt_find_window_ParamLimits

0xed0f,	// (0x0007f8c8) main_cam_set_pane

0xad50,	// (0x0007b909) cam4_zoom_pane_ParamLimits

0xad50,	// (0x0007b909) cam4_zoom_pane

0xb32b,	// (0x0007bee4) main_cam_set_pane_g1_ParamLimits

0xb32b,	// (0x0007bee4) main_cam_set_pane_g1

0xb339,	// (0x0007bef2) main_cam_set_pane_g2_ParamLimits

0xb339,	// (0x0007bef2) main_cam_set_pane_g2

0x0001,

0xf9b2,	// (0x0008056b) main_cam_set_pane_g_ParamLimits

0xf9b2,	// (0x0008056b) main_cam_set_pane_g

0xb345,	// (0x0007befe) main_cam_set_pane_t1_ParamLimits

0xb345,	// (0x0007befe) main_cam_set_pane_t1

0xb357,	// (0x0007bf10) main_cset_listscroll_pane_ParamLimits

0xb357,	// (0x0007bf10) main_cset_listscroll_pane

0xb380,	// (0x0007bf39) main_cset_slider_pane_ParamLimits

0xb380,	// (0x0007bf39) main_cset_slider_pane

0x37e5,	// (0x0007439e) main_cset_list_pane_ParamLimits

0x37e5,	// (0x0007439e) main_cset_list_pane

0x37f5,	// (0x000743ae) scroll_pane_cp028

0xb39f,	// (0x0007bf58) aid_area_touch_slider

0xb3bb,	// (0x0007bf74) cset_slider_pane

0xb3e5,	// (0x0007bf9e) main_cset_slider_pane_g1

0xb3fa,	// (0x0007bfb3) main_cset_slider_pane_g2

0x0011,

0xf9b7,	// (0x00080570) main_cset_slider_pane_g

0x382e,	// (0x000743e7) main_cset_slider_pane_t1

0xb4b6,	// (0x0007c06f) main_cset_slider_pane_t2

0xb4d0,	// (0x0007c089) main_cset_slider_pane_t3

0xb4ea,	// (0x0007c0a3) main_cset_slider_pane_t4

0xb504,	// (0x0007c0bd) main_cset_slider_pane_t5

0xb51e,	// (0x0007c0d7) main_cset_slider_pane_t6

0xb533,	// (0x0007c0ec) main_cset_slider_pane_t7

0x000e,

0xf9dc,	// (0x00080595) main_cset_slider_pane_t

0xb637,	// (0x0007c1f0) cset_list_set_pane_ParamLimits

0xb637,	// (0x0007c1f0) cset_list_set_pane

0xb647,	// (0x0007c200) aid_position_infowindow_above

0xb64f,	// (0x0007c208) aid_position_infowindow_below

0xb657,	// (0x0007c210) cset_list_set_pane_g1_ParamLimits

0xb657,	// (0x0007c210) cset_list_set_pane_g1

0x38ce,	// (0x00074487) cset_list_set_pane_g3_ParamLimits

0x38ce,	// (0x00074487) cset_list_set_pane_g3

0x0001,

0xf9fb,	// (0x000805b4) cset_list_set_pane_g_ParamLimits

0xf9fb,	// (0x000805b4) cset_list_set_pane_g

0x38dd,	// (0x00074496) cset_list_set_pane_t1_ParamLimits

0x38dd,	// (0x00074496) cset_list_set_pane_t1

0xed0f,	// (0x0007f8c8) list_highlight_pane_cp021_ParamLimits

0xed0f,	// (0x0007f8c8) list_highlight_pane_cp021

0xe2d0,	// (0x0007ee89) cset_slider_pane_g1

0xe2e2,	// (0x0007ee9b) cset_slider_pane_g2

0xe2d9,	// (0x0007ee92) cset_slider_pane_g3

0x0002,

0xfa00,	// (0x000805b9) cset_slider_pane_g

0xb663,	// (0x0007c21c) aid_area_touch_cam4_zoom

0xb66b,	// (0x0007c224) cam4_zoom_cont_pane

0xb673,	// (0x0007c22c) cam4_zoom_pane_g1

0xb67b,	// (0x0007c234) cam4_zoom_pane_g2

0xb683,	// (0x0007c23c) cam4_zoom_pane_g3

0x0002,

0xfa07,	// (0x000805c0) cam4_zoom_pane_g

0xb68b,	// (0x0007c244) cam4_zoom_cont_pane_g1

0xb694,	// (0x0007c24d) cam4_zoom_cont_pane_g2

0xb69d,	// (0x0007c256) cam4_zoom_cont_pane_g3

0x0002,

0xfa0e,	// (0x000805c7) cam4_zoom_cont_pane_g

0xac41,	// (0x0007b7fa) call4_image_pane_ParamLimits

0xac41,	// (0x0007b7fa) call4_image_pane

0x35bb,	// (0x00074174) call4_windows_conf_pane_ParamLimits

0x35ce,	// (0x00074187) popup_call4_audio_in_window_ParamLimits

0x35ce,	// (0x00074187) popup_call4_audio_in_window

0x0f6c,	// (0x00071b25) bg_popup_call2_act_pane_cp02

0x362c,	// (0x000741e5) call4_list_conf_pane

0x2d25,	// (0x000738de) call4_image_pane_g1

0x2d25,	// (0x000738de) call4_image_pane_g2

0x0001,

0xf722,	// (0x000802db) call4_image_pane_g

0x390d,	// (0x000744c6) list_single_graphic_popup_conf4_pane_ParamLimits

0x390d,	// (0x000744c6) list_single_graphic_popup_conf4_pane

0x0f6c,	// (0x00071b25) list_highlight_pane_cp022

0x3920,	// (0x000744d9) list_single_graphic_popup_conf4_pane_g1

0xdf35,	// (0x0007eaee) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa15,	// (0x000805ce) list_single_graphic_popup_conf4_pane_g

0x3928,	// (0x000744e1) list_single_graphic_popup_conf4_pane_t1

0x764c,	// (0x00078205) popup_vtel_slider_window_ParamLimits

0x764c,	// (0x00078205) popup_vtel_slider_window

0x3585,	// (0x0007413e) dialer2_ne_pane_t2_ParamLimits

0x3585,	// (0x0007413e) dialer2_ne_pane_t2

0x0001,

0xf8f6,	// (0x000804af) dialer2_ne_pane_t_ParamLimits

0xf8f6,	// (0x000804af) dialer2_ne_pane_t

0xed0f,	// (0x0007f8c8) bg_popup_sub_pane_cp010_ParamLimits

0xed0f,	// (0x0007f8c8) bg_popup_sub_pane_cp010

0xb6a6,	// (0x0007c25f) popup_vtel_slider_window_g1_ParamLimits

0xb6a6,	// (0x0007c25f) popup_vtel_slider_window_g1

0xb6b2,	// (0x0007c26b) popup_vtel_slider_window_g2_ParamLimits

0xb6b2,	// (0x0007c26b) popup_vtel_slider_window_g2

0x0003,

0xfa1a,	// (0x000805d3) popup_vtel_slider_window_g_ParamLimits

0xfa1a,	// (0x000805d3) popup_vtel_slider_window_g

0xb6f8,	// (0x0007c2b1) vtel_slider_pane_ParamLimits

0xb6f8,	// (0x0007c2b1) vtel_slider_pane

0xb707,	// (0x0007c2c0) vtel_slider_pane_g1_ParamLimits

0xb707,	// (0x0007c2c0) vtel_slider_pane_g1

0xb714,	// (0x0007c2cd) vtel_slider_pane_g2_ParamLimits

0xb714,	// (0x0007c2cd) vtel_slider_pane_g2

0xb721,	// (0x0007c2da) vtel_slider_pane_g3_ParamLimits

0xb721,	// (0x0007c2da) vtel_slider_pane_g3

0xb707,	// (0x0007c2c0) vtel_slider_pane_g4_ParamLimits

0xb707,	// (0x0007c2c0) vtel_slider_pane_g4

0xb72e,	// (0x0007c2e7) vtel_slider_pane_g5_ParamLimits

0xb72e,	// (0x0007c2e7) vtel_slider_pane_g5

0x0004,

0xfa23,	// (0x000805dc) vtel_slider_pane_g_ParamLimits

0xfa23,	// (0x000805dc) vtel_slider_pane_g

0x0f6c,	// (0x00071b25) main_gallery2_pane

0xaf69,	// (0x0007bb22) aid_size_row_itut2_dropdow_list_ParamLimits

0xaf69,	// (0x0007bb22) aid_size_row_itut2_dropdow_list

0xafbd,	// (0x0007bb76) grid_vitu2_function_top_pane_ParamLimits

0xafbd,	// (0x0007bb76) grid_vitu2_function_top_pane

0xaff7,	// (0x0007bbb0) popup_vitu2_dropdown_list_window_ParamLimits

0xaff7,	// (0x0007bbb0) popup_vitu2_dropdown_list_window

0xb011,	// (0x0007bbca) popup_vitu2_match_list_window

0xb73b,	// (0x0007c2f4) cell_vitu2_function_top_pane_ParamLimits

0xb73b,	// (0x0007c2f4) cell_vitu2_function_top_pane

0xb75b,	// (0x0007c314) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb75b,	// (0x0007c314) cell_vitu2_function_top_pane_cp01

0xb77b,	// (0x0007c334) cell_vitu2_function_top_wide_pane_ParamLimits

0xb77b,	// (0x0007c334) cell_vitu2_function_top_wide_pane

0xae9c,	// (0x0007ba55) bg_button_pane_cp012

0xb799,	// (0x0007c352) cell_vitu2_function_top_pane_g1

0xb7a8,	// (0x0007c361) bg_button_pane_cp013_ParamLimits

0xb7a8,	// (0x0007c361) bg_button_pane_cp013

0xb7c4,	// (0x0007c37d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb7c4,	// (0x0007c37d) cell_vitu2_function_top_wide_pane_g1

0xb7dc,	// (0x0007c395) bg_popup_sub_pane_cp20

0xb7ea,	// (0x0007c3a3) list_vitu2_match_list_pane

0x36ef,	// (0x000742a8) bg_popup_sub_pane_cp20_g1

0x36f7,	// (0x000742b0) bg_popup_sub_pane_cp20_g2

0x1cf2,	// (0x000728ab) bg_popup_sub_pane_cp20_g3

0x36ff,	// (0x000742b8) bg_popup_sub_pane_cp20_g4

0x1cd2,	// (0x0007288b) bg_popup_sub_pane_cp20_g5

0x3944,	// (0x000744fd) bg_popup_sub_pane_cp20_g6

0x370f,	// (0x000742c8) bg_popup_sub_pane_cp20_g7

0x3717,	// (0x000742d0) bg_popup_sub_pane_cp20_g8

0x371f,	// (0x000742d8) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa2e,	// (0x000805e7) bg_popup_sub_pane_cp20_g

0xb802,	// (0x0007c3bb) list_vitu2_match_list_item_pane_ParamLimits

0xb802,	// (0x0007c3bb) list_vitu2_match_list_item_pane

0xb814,	// (0x0007c3cd) list_vitu2_match_list_item_pane_t1

0x6bde,	// (0x00077797) bg_popup_sub_pane_cp21

0xb84e,	// (0x0007c407) grid_vitu2_dropdown_list_pane

0xb856,	// (0x0007c40f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb856,	// (0x0007c40f) cell_vitu2_dropdown_list_char_pane

0xb877,	// (0x0007c430) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb877,	// (0x0007c430) cell_vitu2_dropdown_list_ctrl_pane

0x395e,	// (0x00074517) cell_vitu2_dropdown_list_char_pane_g1

0x3955,	// (0x0007450e) cell_vitu2_dropdown_list_char_pane_g2

0x394c,	// (0x00074505) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa4b,	// (0x00080604) cell_vitu2_dropdown_list_char_pane_g

0xb8a3,	// (0x0007c45c) cell_vitu2_dropdown_list_char_pane_t1

0xb8b1,	// (0x0007c46a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb8b1,	// (0x0007c46a) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb8c1,	// (0x0007c47a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb8c1,	// (0x0007c47a) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb8d2,	// (0x0007c48b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb8d2,	// (0x0007c48b) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb8e2,	// (0x0007c49b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb8e2,	// (0x0007c49b) cell_vitu2_dropdown_list_ctrl_pane_g4

0xade2,	// (0x0007b99b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xade2,	// (0x0007b99b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa52,	// (0x0008060b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa52,	// (0x0008060b) cell_vitu2_dropdown_list_ctrl_pane_g

0xb8fb,	// (0x0007c4b4) aid_size_cell_gallery2_ParamLimits

0xb8fb,	// (0x0007c4b4) aid_size_cell_gallery2

0xb909,	// (0x0007c4c2) grid_gallery2_pane_ParamLimits

0xb909,	// (0x0007c4c2) grid_gallery2_pane

0xb916,	// (0x0007c4cf) scroll_pane_cp029_ParamLimits

0xb916,	// (0x0007c4cf) scroll_pane_cp029

0xb922,	// (0x0007c4db) cell_gallery2_pane_ParamLimits

0xb922,	// (0x0007c4db) cell_gallery2_pane

0x3967,	// (0x00074520) cell_gallery2_pane_g2

0xb94e,	// (0x0007c507) cell_gallery2_pane_g3

0x3971,	// (0x0007452a) cell_gallery2_pane_g4

0x3979,	// (0x00074532) cell_gallery2_pane_g5

0xe19a,	// (0x0007ed53) grid_highlight_pane_cp10

0xb011,	// (0x0007bbca) popup_vitu2_match_list_window_ParamLimits

0xb021,	// (0x0007bbda) popup_vitu2_query_window_ParamLimits

0xb021,	// (0x0007bbda) popup_vitu2_query_window

0x6bde,	// (0x00077797) bg_vitu2_candi_button_pane

0x395e,	// (0x00074517) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3955,	// (0x0007450e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x394c,	// (0x00074505) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb956,	// (0x0007c50f) bg_button_pane_cp015

0xb95e,	// (0x0007c517) bg_button_pane_cp016

0xb968,	// (0x0007c521) bg_button_pane_cp017

0xed0f,	// (0x0007f8c8) bg_popup_sub_pane_cp22

0x3981,	// (0x0007453a) popup_vitu2_query_window_g1

0xb990,	// (0x0007c549) popup_vitu2_query_window_g2

0x0001,

0xfa5d,	// (0x00080616) popup_vitu2_query_window_g

0xb99c,	// (0x0007c555) popup_vitu2_query_window_t1_ParamLimits

0xb99c,	// (0x0007c555) popup_vitu2_query_window_t1

0xb9c4,	// (0x0007c57d) popup_vitu2_query_window_t2_ParamLimits

0xb9c4,	// (0x0007c57d) popup_vitu2_query_window_t2

0xb9d6,	// (0x0007c58f) popup_vitu2_query_window_t3_ParamLimits

0xb9d6,	// (0x0007c58f) popup_vitu2_query_window_t3

0xb9fe,	// (0x0007c5b7) popup_vitu2_query_window_t4_ParamLimits

0xb9fe,	// (0x0007c5b7) popup_vitu2_query_window_t4

0xba10,	// (0x0007c5c9) popup_vitu2_query_window_t5_ParamLimits

0xba10,	// (0x0007c5c9) popup_vitu2_query_window_t5

0x0004,

0xfa62,	// (0x0008061b) popup_vitu2_query_window_t_ParamLimits

0xfa62,	// (0x0008061b) popup_vitu2_query_window_t

0x37dd,	// (0x00074396) main_cset_text_pane

0xb39f,	// (0x0007bf58) aid_area_touch_slider_ParamLimits

0xb3bb,	// (0x0007bf74) cset_slider_pane_ParamLimits

0xb3e5,	// (0x0007bf9e) main_cset_slider_pane_g1_ParamLimits

0xb3fa,	// (0x0007bfb3) main_cset_slider_pane_g2_ParamLimits

0x37fe,	// (0x000743b7) main_cset_slider_pane_g3_ParamLimits

0x37fe,	// (0x000743b7) main_cset_slider_pane_g3

0xb40f,	// (0x0007bfc8) main_cset_slider_pane_g4_ParamLimits

0xb40f,	// (0x0007bfc8) main_cset_slider_pane_g4

0xb41e,	// (0x0007bfd7) main_cset_slider_pane_g5_ParamLimits

0xb41e,	// (0x0007bfd7) main_cset_slider_pane_g5

0xb42a,	// (0x0007bfe3) main_cset_slider_pane_g6_ParamLimits

0xb42a,	// (0x0007bfe3) main_cset_slider_pane_g6

0xf9b7,	// (0x00080570) main_cset_slider_pane_g_ParamLimits

0x382e,	// (0x000743e7) main_cset_slider_pane_t1_ParamLimits

0xb4b6,	// (0x0007c06f) main_cset_slider_pane_t2_ParamLimits

0xb4d0,	// (0x0007c089) main_cset_slider_pane_t3_ParamLimits

0xb4ea,	// (0x0007c0a3) main_cset_slider_pane_t4_ParamLimits

0xb504,	// (0x0007c0bd) main_cset_slider_pane_t5_ParamLimits

0xb51e,	// (0x0007c0d7) main_cset_slider_pane_t6_ParamLimits

0xb533,	// (0x0007c0ec) main_cset_slider_pane_t7_ParamLimits

0xb55d,	// (0x0007c116) main_cset_slider_pane_t8_ParamLimits

0xb55d,	// (0x0007c116) main_cset_slider_pane_t8

0xb585,	// (0x0007c13e) main_cset_slider_pane_t9_ParamLimits

0xb585,	// (0x0007c13e) main_cset_slider_pane_t9

0xb5ad,	// (0x0007c166) main_cset_slider_pane_t10_ParamLimits

0xb5ad,	// (0x0007c166) main_cset_slider_pane_t10

0xb5d5,	// (0x0007c18e) main_cset_slider_pane_t11_ParamLimits

0xb5d5,	// (0x0007c18e) main_cset_slider_pane_t11

0xb5fd,	// (0x0007c1b6) main_cset_slider_pane_t12_ParamLimits

0xb5fd,	// (0x0007c1b6) main_cset_slider_pane_t12

0xb61a,	// (0x0007c1d3) main_cset_slider_pane_t13_ParamLimits

0xb61a,	// (0x0007c1d3) main_cset_slider_pane_t13

0xf9dc,	// (0x00080595) main_cset_slider_pane_t_ParamLimits

0x0f6c,	// (0x00071b25) bg_popup_sub_pane_cp011

0x398d,	// (0x00074546) main_cset_text_pane_g1

0x3995,	// (0x0007454e) main_cset_text_pane_t1

0x39a3,	// (0x0007455c) main_cset_text_pane_t2

0x39b1,	// (0x0007456a) main_cset_text_pane_t3

0x39bf,	// (0x00074578) main_cset_text_pane_t4

0x39cd,	// (0x00074586) main_cset_text_pane_t5

0x39db,	// (0x00074594) main_cset_text_pane_t6

0x39e9,	// (0x000745a2) main_cset_text_pane_t7

0x0006,

0xfa6d,	// (0x00080626) main_cset_text_pane_t

0x0f6c,	// (0x00071b25) main_cam4_burst_pane

0x0f6c,	// (0x00071b25) main_cam5_pane

0xb2fa,	// (0x0007beb3) bg_button_pane_cp019

0xb303,	// (0x0007bebc) bg_button_pane_cp020

0x380a,	// (0x000743c3) main_cset_slider_pane_g7_ParamLimits

0x380a,	// (0x000743c3) main_cset_slider_pane_g7

0x3816,	// (0x000743cf) main_cset_slider_pane_g8_ParamLimits

0x3816,	// (0x000743cf) main_cset_slider_pane_g8

0xb43e,	// (0x0007bff7) main_cset_slider_pane_g9_ParamLimits

0xb43e,	// (0x0007bff7) main_cset_slider_pane_g9

0xb44a,	// (0x0007c003) main_cset_slider_pane_g10_ParamLimits

0xb44a,	// (0x0007c003) main_cset_slider_pane_g10

0xb456,	// (0x0007c00f) main_cset_slider_pane_g11_ParamLimits

0xb456,	// (0x0007c00f) main_cset_slider_pane_g11

0xb462,	// (0x0007c01b) main_cset_slider_pane_g12_ParamLimits

0xb462,	// (0x0007c01b) main_cset_slider_pane_g12

0xb46e,	// (0x0007c027) main_cset_slider_pane_g13_ParamLimits

0xb46e,	// (0x0007c027) main_cset_slider_pane_g13

0xb47a,	// (0x0007c033) main_cset_slider_pane_g14_ParamLimits

0xb47a,	// (0x0007c033) main_cset_slider_pane_g14

0xb486,	// (0x0007c03f) main_cset_slider_pane_g15_ParamLimits

0xb486,	// (0x0007c03f) main_cset_slider_pane_g15

0x385c,	// (0x00074415) main_cset_slider_pane_t14_ParamLimits

0x385c,	// (0x00074415) main_cset_slider_pane_t14

0x3895,	// (0x0007444e) main_cset_slider_pane_t15_ParamLimits

0x3895,	// (0x0007444e) main_cset_slider_pane_t15

0xba22,	// (0x0007c5db) aid_cam4_burst_size_cell_ParamLimits

0xba22,	// (0x0007c5db) aid_cam4_burst_size_cell

0xba3e,	// (0x0007c5f7) grid_cam4_burst_pane_ParamLimits

0xba3e,	// (0x0007c5f7) grid_cam4_burst_pane

0xba60,	// (0x0007c619) linegrid_cam4_burst_pane_ParamLimits

0xba60,	// (0x0007c619) linegrid_cam4_burst_pane

0xba7e,	// (0x0007c637) scroll_pane_cp30_ParamLimits

0xba7e,	// (0x0007c637) scroll_pane_cp30

0xba8a,	// (0x0007c643) cell_cam4_burst_pane_ParamLimits

0xba8a,	// (0x0007c643) cell_cam4_burst_pane

0x39f7,	// (0x000745b0) linegrid_cam4_burst_pane_g1_ParamLimits

0x39f7,	// (0x000745b0) linegrid_cam4_burst_pane_g1

0xbac2,	// (0x0007c67b) linegrid_cam4_burst_pane_g2_ParamLimits

0xbac2,	// (0x0007c67b) linegrid_cam4_burst_pane_g2

0x3a04,	// (0x000745bd) linegrid_cam4_burst_pane_g3_ParamLimits

0x3a04,	// (0x000745bd) linegrid_cam4_burst_pane_g3

0x0002,

0xfa7c,	// (0x00080635) linegrid_cam4_burst_pane_g_ParamLimits

0xfa7c,	// (0x00080635) linegrid_cam4_burst_pane_g

0xbad3,	// (0x0007c68c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbad3,	// (0x0007c68c) linegrid_cam4_burst_pane_g3_copy1

0x3a11,	// (0x000745ca) linegrid_cam4_burst_pane_g4_ParamLimits

0x3a11,	// (0x000745ca) linegrid_cam4_burst_pane_g4

0xbaed,	// (0x0007c6a6) linegrid_cam4_burst_pane_g5_ParamLimits

0xbaed,	// (0x0007c6a6) linegrid_cam4_burst_pane_g5

0xbafe,	// (0x0007c6b7) linegrid_cam4_burst_pane_g6_ParamLimits

0xbafe,	// (0x0007c6b7) linegrid_cam4_burst_pane_g6

0x3a1e,	// (0x000745d7) linegrid_cam4_burst_pane_g7_ParamLimits

0x3a1e,	// (0x000745d7) linegrid_cam4_burst_pane_g7

0xbb0f,	// (0x0007c6c8) cell_cam4_burst_pane_g1

0x3a37,	// (0x000745f0) main_cam5_pane_t1_ParamLimits

0x3a37,	// (0x000745f0) main_cam5_pane_t1

0x3a49,	// (0x00074602) main_cam5_pane_t2_ParamLimits

0x3a49,	// (0x00074602) main_cam5_pane_t2

0x3a5b,	// (0x00074614) main_cam5_pane_t3_ParamLimits

0x3a5b,	// (0x00074614) main_cam5_pane_t3

0x3a6d,	// (0x00074626) main_cam5_pane_t4_ParamLimits

0x3a6d,	// (0x00074626) main_cam5_pane_t4

0x3a83,	// (0x0007463c) main_cam5_pane_t5_ParamLimits

0x3a83,	// (0x0007463c) main_cam5_pane_t5

0x3a95,	// (0x0007464e) main_cam5_pane_t6_ParamLimits

0x3a95,	// (0x0007464e) main_cam5_pane_t6

0x3aa7,	// (0x00074660) main_cam5_pane_t7_ParamLimits

0x3aa7,	// (0x00074660) main_cam5_pane_t7

0x3ab9,	// (0x00074672) main_cam5_pane_t8_ParamLimits

0x3ab9,	// (0x00074672) main_cam5_pane_t8

0x3ad5,	// (0x0007468e) main_cam5_pane_t9_ParamLimits

0x3ad5,	// (0x0007468e) main_cam5_pane_t9

0x3ae7,	// (0x000746a0) main_cam5_pane_t10_ParamLimits

0x3ae7,	// (0x000746a0) main_cam5_pane_t10

0x3af9,	// (0x000746b2) main_cam5_pane_t11_ParamLimits

0x3af9,	// (0x000746b2) main_cam5_pane_t11

0x3b0b,	// (0x000746c4) main_cam5_pane_t12_ParamLimits

0x3b0b,	// (0x000746c4) main_cam5_pane_t12

0x3b20,	// (0x000746d9) main_cam5_pane_t13_ParamLimits

0x3b20,	// (0x000746d9) main_cam5_pane_t13

0x000c,

0xfa88,	// (0x00080641) main_cam5_pane_t_ParamLimits

0xfa88,	// (0x00080641) main_cam5_pane_t

0x68a1,	// (0x0007745a) popup_scut_keymap_window_ParamLimits

0x68a1,	// (0x0007745a) popup_scut_keymap_window

0xbb22,	// (0x0007c6db) aid_size_cell_brow_shortcut

0xe19a,	// (0x0007ed53) bg_popup_window_pane_cp010

0xbb2e,	// (0x0007c6e7) grid_scut_pane

0xbb38,	// (0x0007c6f1) cell_scut_pane_ParamLimits

0xbb38,	// (0x0007c6f1) cell_scut_pane

0xbb4d,	// (0x0007c706) cell_scut_pane_g1

0x3b3d,	// (0x000746f6) cell_scut_pane_t1

0x3b4c,	// (0x00074705) cell_scut_pane_t2

0xbb56,	// (0x0007c70f) cell_scut_pane_t3

0x0002,

0xfaa3,	// (0x0008065c) cell_scut_pane_t

0x9c92,	// (0x0007a84b) main_mup3_pane_g8_ParamLimits

0x9c92,	// (0x0007a84b) main_mup3_pane_g8

0xaf75,	// (0x0007bb2e) area_vitu2_query_pane_ParamLimits

0xaf75,	// (0x0007bb2e) area_vitu2_query_pane

0xb972,	// (0x0007c52b) input_focus_pane_cp08

0x3b5b,	// (0x00074714) area_vitu2_query_pane_g1

0xbb64,	// (0x0007c71d) area_vitu2_query_pane_g2

0x0001,

0xfaaa,	// (0x00080663) area_vitu2_query_pane_g

0xbb73,	// (0x0007c72c) area_vitu2_query_pane_t1_ParamLimits

0xbb73,	// (0x0007c72c) area_vitu2_query_pane_t1

0xbb85,	// (0x0007c73e) area_vitu2_query_pane_t2_ParamLimits

0xbb85,	// (0x0007c73e) area_vitu2_query_pane_t2

0xbb97,	// (0x0007c750) area_vitu2_query_pane_t3_ParamLimits

0xbb97,	// (0x0007c750) area_vitu2_query_pane_t3

0x3b67,	// (0x00074720) area_vitu2_query_pane_t4_ParamLimits

0x3b67,	// (0x00074720) area_vitu2_query_pane_t4

0x3b8f,	// (0x00074748) area_vitu2_query_pane_t5_ParamLimits

0x3b8f,	// (0x00074748) area_vitu2_query_pane_t5

0x3bb7,	// (0x00074770) area_vitu2_query_pane_t6_ParamLimits

0x3bb7,	// (0x00074770) area_vitu2_query_pane_t6

0x0006,

0xfaaf,	// (0x00080668) area_vitu2_query_pane_t_ParamLimits

0xfaaf,	// (0x00080668) area_vitu2_query_pane_t

0xbbbf,	// (0x0007c778) bg_button_pane_cp018

0xbbcc,	// (0x0007c785) bg_button_pane_cp021

0xbbd8,	// (0x0007c791) bg_button_pane_cp022

0xbbe7,	// (0x0007c7a0) input_focus_pane_cp09

0x84ac,	// (0x00079065) aid_size_touch_mv_arrow_left

0xe073,	// (0x0007ec2c) aid_size_touch_mv_arrow_right

0xb49e,	// (0x0007c057) main_cset_slider_pane_g16_ParamLimits

0xb49e,	// (0x0007c057) main_cset_slider_pane_g16

0xb4aa,	// (0x0007c063) main_cset_slider_pane_g17_ParamLimits

0xb4aa,	// (0x0007c063) main_cset_slider_pane_g17

0xbb0f,	// (0x0007c6c8) cell_cam4_burst_pane_g1_ParamLimits

0x0f6c,	// (0x00071b25) compa_mode_pane

0xb6be,	// (0x0007c277) popup_vtel_slider_window_g3_ParamLimits

0xb6be,	// (0x0007c277) popup_vtel_slider_window_g3

0xb6d2,	// (0x0007c28b) popup_vtel_slider_window_g4_ParamLimits

0xb6d2,	// (0x0007c28b) popup_vtel_slider_window_g4

0xb6e6,	// (0x0007c29f) popup_vtel_slider_window_t1_ParamLimits

0xb6e6,	// (0x0007c29f) popup_vtel_slider_window_t1

0x0f6c,	// (0x00071b25) main_cl_pane

0x2910,	// (0x000734c9) popup_imed_adjust2_window_ParamLimits

0x28ea,	// (0x000734a3) bg_tb_trans_pane_cp05_ParamLimits

0x31a6,	// (0x00073d5f) popup_imed_adjust2_window_g1_ParamLimits

0x31b5,	// (0x00073d6e) popup_imed_adjust2_window_g2_ParamLimits

0x31b5,	// (0x00073d6e) popup_imed_adjust2_window_g2

0x31c1,	// (0x00073d7a) popup_imed_adjust2_window_g3_ParamLimits

0x31c1,	// (0x00073d7a) popup_imed_adjust2_window_g3

0x0002,

0xf820,	// (0x000803d9) popup_imed_adjust2_window_g_ParamLimits

0xf820,	// (0x000803d9) popup_imed_adjust2_window_g

0x31cd,	// (0x00073d86) popup_imed_adjust2_window_t1_ParamLimits

0x31e5,	// (0x00073d9e) slider_imed_adjust_pane_ParamLimits

0x31f9,	// (0x00073db2) slider_imed_adjust_pane_g1_ParamLimits

0x3209,	// (0x00073dc2) slider_imed_adjust_pane_g2_ParamLimits

0x3219,	// (0x00073dd2) slider_imed_adjust_pane_g3_ParamLimits

0x322a,	// (0x00073de3) slider_imed_adjust_pane_g4_ParamLimits

0xf827,	// (0x000803e0) slider_imed_adjust_pane_g_ParamLimits

0xad0b,	// (0x0007b8c4) aid_touch_area_cam4_ParamLimits

0xad0b,	// (0x0007b8c4) aid_touch_area_cam4

0xad19,	// (0x0007b8d2) battery_pane_cp01

0xad8e,	// (0x0007b947) main_camera4_pane_g6_ParamLimits

0xad8e,	// (0x0007b947) main_camera4_pane_g6

0xadac,	// (0x0007b965) main_camera4_pane_t2_ParamLimits

0xadac,	// (0x0007b965) main_camera4_pane_t2

0x0001,

0xf92a,	// (0x000804e3) main_camera4_pane_t_ParamLimits

0xf92a,	// (0x000804e3) main_camera4_pane_t

0xae42,	// (0x0007b9fb) aid_touch_area_vid4_ParamLimits

0xae42,	// (0x0007b9fb) aid_touch_area_vid4

0xad8e,	// (0x0007b947) main_video4_pane_g5_ParamLimits

0xad8e,	// (0x0007b947) main_video4_pane_g5

0xae72,	// (0x0007ba2b) vid4_progress_pane_ParamLimits

0xae72,	// (0x0007ba2b) vid4_progress_pane

0x3822,	// (0x000743db) main_cset_slider_pane_g18_ParamLimits

0x3822,	// (0x000743db) main_cset_slider_pane_g18

0x3a2b,	// (0x000745e4) cell_cam4_burst_pane_g2_ParamLimits

0x3a2b,	// (0x000745e4) cell_cam4_burst_pane_g2

0x0001,

0xfa83,	// (0x0008063c) cell_cam4_burst_pane_g_ParamLimits

0xfa83,	// (0x0008063c) cell_cam4_burst_pane_g

0xbbf6,	// (0x0007c7af) bg_cl_pane_ParamLimits

0xbbf6,	// (0x0007c7af) bg_cl_pane

0xbc02,	// (0x0007c7bb) cl_header_pane_ParamLimits

0xbc02,	// (0x0007c7bb) cl_header_pane

0xbc0e,	// (0x0007c7c7) cl_listscroll_pane_ParamLimits

0xbc0e,	// (0x0007c7c7) cl_listscroll_pane

0x3c03,	// (0x000747bc) bg_cl_pane_g1

0x3c0b,	// (0x000747c4) bg_cl_pane_g2

0x3c13,	// (0x000747cc) bg_cl_pane_g3

0x3c1b,	// (0x000747d4) bg_cl_pane_g4

0x3c23,	// (0x000747dc) bg_cl_pane_g5

0x3c2b,	// (0x000747e4) bg_cl_pane_g6

0x3c33,	// (0x000747ec) bg_cl_pane_g7

0x3c3b,	// (0x000747f4) bg_cl_pane_g8

0x3c43,	// (0x000747fc) bg_cl_pane_g9

0x0008,

0xfabe,	// (0x00080677) bg_cl_pane_g

0xbc1a,	// (0x0007c7d3) aid_height_cl_leading_ParamLimits

0xbc1a,	// (0x0007c7d3) aid_height_cl_leading

0xbc26,	// (0x0007c7df) aid_height_cl_text_ParamLimits

0xbc26,	// (0x0007c7df) aid_height_cl_text

0x3658,	// (0x00074211) bg_cl_header_pane_ParamLimits

0x3658,	// (0x00074211) bg_cl_header_pane

0xbc3e,	// (0x0007c7f7) cl_header_pane_g1_ParamLimits

0xbc3e,	// (0x0007c7f7) cl_header_pane_g1

0xbc4b,	// (0x0007c804) cl_header_pane_t1_ParamLimits

0xbc4b,	// (0x0007c804) cl_header_pane_t1

0x3c4b,	// (0x00074804) cl_list_pane

0x3c54,	// (0x0007480d) hc_scroll_pane_cp01

0x1cd2,	// (0x0007288b) bg_cl_header_pane_g1

0x36ef,	// (0x000742a8) bg_cl_header_pane_g2

0x1cf2,	// (0x000728ab) bg_cl_header_pane_g3

0x36ff,	// (0x000742b8) bg_cl_header_pane_g4

0x36f7,	// (0x000742b0) bg_cl_header_pane_g5

0x3944,	// (0x000744fd) bg_cl_header_pane_g6

0x3717,	// (0x000742d0) bg_cl_header_pane_g7

0x371f,	// (0x000742d8) bg_cl_header_pane_g8

0x370f,	// (0x000742c8) bg_cl_header_pane_g9

0x0008,

0xfad1,	// (0x0008068a) bg_cl_header_pane_g

0xbc5d,	// (0x0007c816) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbc5d,	// (0x0007c816) hc_cl_list_double_graphic_heading_pane

0xbc6d,	// (0x0007c826) hc_cl_list_single_graphic_pane_ParamLimits

0xbc6d,	// (0x0007c826) hc_cl_list_single_graphic_pane

0xbc7f,	// (0x0007c838) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbc7f,	// (0x0007c838) hc_cl_list_single_graphic_pane_g1

0xbc8b,	// (0x0007c844) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbc8b,	// (0x0007c844) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfae4,	// (0x0008069d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfae4,	// (0x0008069d) hc_cl_list_single_graphic_pane_g

0xbc9f,	// (0x0007c858) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbc9f,	// (0x0007c858) hc_cl_list_single_graphic_pane_t1

0xbc7f,	// (0x0007c838) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbc7f,	// (0x0007c838) hc_cl_list_double_graphic_heading_pane_g1

0xbcb4,	// (0x0007c86d) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbcb4,	// (0x0007c86d) hc_cl_list_double_graphic_heading_pane_g2

0xbcc8,	// (0x0007c881) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbcc8,	// (0x0007c881) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae9,	// (0x000806a2) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae9,	// (0x000806a2) hc_cl_list_double_graphic_heading_pane_g

0xbcdc,	// (0x0007c895) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbcdc,	// (0x0007c895) hc_cl_list_double_graphic_heading_pane_t1

0xbcf1,	// (0x0007c8aa) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbcf1,	// (0x0007c8aa) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaf0,	// (0x000806a9) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaf0,	// (0x000806a9) hc_cl_list_double_graphic_heading_pane_t

0xbd06,	// (0x0007c8bf) vid4_progress_pane_g1

0xbd15,	// (0x0007c8ce) vid4_progress_pane_g2

0xbd24,	// (0x0007c8dd) vid4_progress_pane_g3

0xbd33,	// (0x0007c8ec) vid4_progress_pane_g4

0x0004,

0xfaf5,	// (0x000806ae) vid4_progress_pane_g

0xbd4b,	// (0x0007c904) vid4_progress_pane_t1

0xbd61,	// (0x0007c91a) vid4_progress_pane_t2

0x0002,

0xfb00,	// (0x000806b9) vid4_progress_pane_t

0xbd8b,	// (0x0007c944) wait_bar_pane_cp07

0x2b20,	// (0x000736d9) blid_firmament_pane_ParamLimits

0x2b61,	// (0x0007371a) popup_blid_sat_info2_window_g1

0x2b85,	// (0x0007373e) popup_blid_sat_info2_window_t3

0x2b93,	// (0x0007374c) popup_blid_sat_info2_window_t4

0x2ba1,	// (0x0007375a) popup_blid_sat_info2_window_t5

0x2baf,	// (0x00073768) popup_blid_sat_info2_window_t6

0x2bbf,	// (0x00073778) popup_blid_sat_info2_window_t7

0x2bcd,	// (0x00073786) popup_blid_sat_info2_window_t8

0x2bdb,	// (0x00073794) popup_blid_sat_info2_window_t9

0x2be9,	// (0x000737a2) popup_blid_sat_info2_window_t10

0x2ca5,	// (0x0007385e) aid_firma_cardinal_ParamLimits

0x2cb9,	// (0x00073872) blid_firmament_pane_t1_ParamLimits

0x2cd0,	// (0x00073889) blid_firmament_pane_t2_ParamLimits

0x2ce7,	// (0x000738a0) blid_firmament_pane_t3_ParamLimits

0x2cfe,	// (0x000738b7) blid_firmament_pane_t4_ParamLimits

0xf719,	// (0x000802d2) blid_firmament_pane_t_ParamLimits

0x2d15,	// (0x000738ce) blid_sat_info_pane_ParamLimits

0xed0f,	// (0x0007f8c8) main_cam_set_pane_ParamLimits

0xa3f7,	// (0x0007afb0) aid_size_cell_colour_35_ParamLimits

0xa40e,	// (0x0007afc7) aid_size_cell_colour_112_ParamLimits

0xa425,	// (0x0007afde) aid_size_cell_effect_ParamLimits

0xed0f,	// (0x0007f8c8) bg_tb_trans_pane_cp02_ParamLimits

0xed1d,	// (0x0007f8d6) heading_imed_pane_ParamLimits

0xa43f,	// (0x0007aff8) listscroll_imed_pane_ParamLimits

0xeba4,	// (0x0007f75d) popup_call2_audio_first_window_g5_ParamLimits

0xeba4,	// (0x0007f75d) popup_call2_audio_first_window_g5

0xaac2,	// (0x0007b67b) aid_size_touch_image3_arrow_left_ParamLimits

0xaac2,	// (0x0007b67b) aid_size_touch_image3_arrow_left

0xaad6,	// (0x0007b68f) aid_size_touch_image3_arrow_right_ParamLimits

0xaad6,	// (0x0007b68f) aid_size_touch_image3_arrow_right

0xbd76,	// (0x0007c92f) vid4_progress_pane_t3

0xa6a3,	// (0x0007b25c) main_hwr_training_symbol_option_pane_ParamLimits

0xa6a3,	// (0x0007b25c) main_hwr_training_symbol_option_pane

0x3485,	// (0x0007403e) popup_hwr_training_preview_window_ParamLimits

0x3485,	// (0x0007403e) popup_hwr_training_preview_window

0xa6fe,	// (0x0007b2b7) hwr_training_navi_pane_g5_ParamLimits

0xa6fe,	// (0x0007b2b7) hwr_training_navi_pane_g5

0x36dd,	// (0x00074296) popup_char_count_window

0xb7dc,	// (0x0007c395) bg_popup_sub_pane_cp20_ParamLimits

0xb7ea,	// (0x0007c3a3) list_vitu2_match_list_pane_ParamLimits

0xb7f6,	// (0x0007c3af) vitu2_page_scroll_pane_ParamLimits

0xb7f6,	// (0x0007c3af) vitu2_page_scroll_pane

0x3ca6,	// (0x0007485f) list_single_hwr_training_symbol_option_pane_ParamLimits

0x3ca6,	// (0x0007485f) list_single_hwr_training_symbol_option_pane

0x3cb9,	// (0x00074872) list_single_hwr_training_symbol_option_pane_g1

0x3cc1,	// (0x0007487a) list_single_hwr_training_symbol_option_pane_t1

0x3ccf,	// (0x00074888) bg_button_pane_cp023

0x3cd8,	// (0x00074891) bg_button_pane_cp024

0xbd9b,	// (0x0007c954) vitu2_page_scroll_pane_g1

0xbda3,	// (0x0007c95c) vitu2_page_scroll_pane_g2

0x0001,

0xfb07,	// (0x000806c0) vitu2_page_scroll_pane_g

0xbdab,	// (0x0007c964) vitu2_page_scroll_pane_t1

0x2a80,	// (0x00073639) popup_char_count_window_g1

0x3d0b,	// (0x000748c4) popup_char_count_window_g2

0x3d14,	// (0x000748cd) popup_char_count_window_g3

0x0002,

0xfb0c,	// (0x000806c5) popup_char_count_window_g

0x3d1d,	// (0x000748d6) popup_char_count_window_t1

0x0f6c,	// (0x00071b25) main_vded2_pane

0x3194,	// (0x00073d4d) aid_size_cell_imed_line

0x319e,	// (0x00073d57) grid_imed_line_width_pane

0xaecb,	// (0x0007ba84) vid4_indicators_pane_g4

0x3d2b,	// (0x000748e4) cell_imed_line_width_pane_ParamLimits

0x3d2b,	// (0x000748e4) cell_imed_line_width_pane

0x3d3d,	// (0x000748f6) cell_imed_line_width_pane_g1

0x3d46,	// (0x000748ff) cell_imed_line_width_pane_g2

0x0001,

0xfb13,	// (0x000806cc) cell_imed_line_width_pane_g

0xbdba,	// (0x0007c973) main_vded2_pane_g1_ParamLimits

0xbdba,	// (0x0007c973) main_vded2_pane_g1

0xbdc7,	// (0x0007c980) main_vded2_pane_g2_ParamLimits

0xbdc7,	// (0x0007c980) main_vded2_pane_g2

0x0001,

0xfb18,	// (0x000806d1) main_vded2_pane_g_ParamLimits

0xfb18,	// (0x000806d1) main_vded2_pane_g

0xbdd3,	// (0x0007c98c) vded2_slider_pane_ParamLimits

0xbdd3,	// (0x0007c98c) vded2_slider_pane

0xbde0,	// (0x0007c999) aid_size_touch_vded2_end

0xbde8,	// (0x0007c9a1) aid_size_touch_vded2_playhead

0xbdf0,	// (0x0007c9a9) aid_size_touch_vded2_start

0xbdf8,	// (0x0007c9b1) vded2_slider_bg_pane

0xbe01,	// (0x0007c9ba) vded2_slider_pane_g1

0xbe0a,	// (0x0007c9c3) vded2_slider_pane_g2

0xbe12,	// (0x0007c9cb) vded2_slider_pane_g3

0x0002,

0xfb1d,	// (0x000806d6) vded2_slider_pane_g

0xbe1b,	// (0x0007c9d4) vded2_slider_bg_pane_g1

0xbe24,	// (0x0007c9dd) vded2_slider_bg_pane_g2

0xbe2d,	// (0x0007c9e6) vded2_slider_bg_pane_g3

0x0002,

0xfb24,	// (0x000806dd) vded2_slider_bg_pane_g

0x8a83,	// (0x0007963c) aid_postcard_touch_down_pane_ParamLimits

0x8a83,	// (0x0007963c) aid_postcard_touch_down_pane

0x8a8f,	// (0x00079648) aid_postcard_touch_up_pane_ParamLimits

0x8a8f,	// (0x00079648) aid_postcard_touch_up_pane

0x0f6c,	// (0x00071b25) main_blid2_pane

0x28f8,	// (0x000734b1) popup_blid2_search_window

0x0f6c,	// (0x00071b25) blid2_gps_pane

0x0f6c,	// (0x00071b25) blid2_navig_pane

0x0f6c,	// (0x00071b25) blid2_search_pane

0x0f6c,	// (0x00071b25) blid2_tripm_pane

0xbe36,	// (0x0007c9ef) blid2_search_pane_g1_ParamLimits

0xbe36,	// (0x0007c9ef) blid2_search_pane_g1

0xbe42,	// (0x0007c9fb) blid2_search_pane_t1_ParamLimits

0xbe42,	// (0x0007c9fb) blid2_search_pane_t1

0xbe54,	// (0x0007ca0d) aid_size_cell_blid2_gps_ParamLimits

0xbe54,	// (0x0007ca0d) aid_size_cell_blid2_gps

0xbe64,	// (0x0007ca1d) blid2_gps_pane_g1_ParamLimits

0xbe64,	// (0x0007ca1d) blid2_gps_pane_g1

0xbe70,	// (0x0007ca29) grid_blid2_satellite_pane_ParamLimits

0xbe70,	// (0x0007ca29) grid_blid2_satellite_pane

0xbe7c,	// (0x0007ca35) blid2_navig_pane_g1_ParamLimits

0xbe7c,	// (0x0007ca35) blid2_navig_pane_g1

0xbe88,	// (0x0007ca41) blid2_navig_pane_t1_ParamLimits

0xbe88,	// (0x0007ca41) blid2_navig_pane_t1

0xbe9a,	// (0x0007ca53) blid2_navig_pane_t2_ParamLimits

0xbe9a,	// (0x0007ca53) blid2_navig_pane_t2

0x0001,

0xfb2b,	// (0x000806e4) blid2_navig_pane_t_ParamLimits

0xfb2b,	// (0x000806e4) blid2_navig_pane_t

0xbeac,	// (0x0007ca65) blid2_navig_ring_pane_ParamLimits

0xbeac,	// (0x0007ca65) blid2_navig_ring_pane

0xbeb8,	// (0x0007ca71) blid2_speed_pane_ParamLimits

0xbeb8,	// (0x0007ca71) blid2_speed_pane

0xbec4,	// (0x0007ca7d) blid2_tripm_pane_g1_ParamLimits

0xbec4,	// (0x0007ca7d) blid2_tripm_pane_g1

0xbed0,	// (0x0007ca89) blid2_tripm_pane_g2_ParamLimits

0xbed0,	// (0x0007ca89) blid2_tripm_pane_g2

0xbedc,	// (0x0007ca95) blid2_tripm_pane_g3_ParamLimits

0xbedc,	// (0x0007ca95) blid2_tripm_pane_g3

0xbee8,	// (0x0007caa1) blid2_tripm_pane_g4_ParamLimits

0xbee8,	// (0x0007caa1) blid2_tripm_pane_g4

0xbef4,	// (0x0007caad) blid2_tripm_pane_g5_ParamLimits

0xbef4,	// (0x0007caad) blid2_tripm_pane_g5

0x0005,

0xfb30,	// (0x000806e9) blid2_tripm_pane_g_ParamLimits

0xfb30,	// (0x000806e9) blid2_tripm_pane_g

0xbf0c,	// (0x0007cac5) blid2_tripm_pane_t1_ParamLimits

0xbf0c,	// (0x0007cac5) blid2_tripm_pane_t1

0xbf1e,	// (0x0007cad7) blid2_tripm_pane_t2_ParamLimits

0xbf1e,	// (0x0007cad7) blid2_tripm_pane_t2

0xbf30,	// (0x0007cae9) blid2_tripm_pane_t3_ParamLimits

0xbf30,	// (0x0007cae9) blid2_tripm_pane_t3

0x0003,

0xfb3d,	// (0x000806f6) blid2_tripm_pane_t_ParamLimits

0xfb3d,	// (0x000806f6) blid2_tripm_pane_t

0xbf60,	// (0x0007cb19) cell_blid2_satellite_pane_ParamLimits

0xbf60,	// (0x0007cb19) cell_blid2_satellite_pane

0xbf78,	// (0x0007cb31) cell_blid2_satellite_pane_g1

0x3d4e,	// (0x00074907) cell_blid2_satellite_pane_t1

0x2d25,	// (0x000738de) blid2_speed_pane_g1

0x3d5c,	// (0x00074915) blid2_speed_pane_t1

0x3d6a,	// (0x00074923) blid2_speed_pane_t2

0x0001,

0xfb46,	// (0x000806ff) blid2_speed_pane_t

0x2d25,	// (0x000738de) blid2_navig_ring_pane_g1

0xbf81,	// (0x0007cb3a) blid2_navig_ring_pane_g2

0xbf89,	// (0x0007cb42) blid2_navig_ring_pane_g3

0xbf91,	// (0x0007cb4a) blid2_navig_ring_pane_g4

0xbf99,	// (0x0007cb52) blid2_navig_ring_pane_g5

0x0004,

0xfb4b,	// (0x00080704) blid2_navig_ring_pane_g

0x0f6c,	// (0x00071b25) bg_popup_window_pane_cp011

0x3d78,	// (0x00074931) popup_blid2_search_window_g1

0x3d80,	// (0x00074939) popup_blid2_search_window_t1

0x3d8e,	// (0x00074947) popup_blid2_search_window_t2

0x0001,

0xfb56,	// (0x0008070f) popup_blid2_search_window_t

0x1be1,	// (0x0007279a) main_browser_pane_g1

0x1724,	// (0x000722dd) main_browser_pane_ParamLimits

0xae9c,	// (0x0007ba55) bg_button_pane_cp011_ParamLimits

0xb0ff,	// (0x0007bcb8) cell_vitu2_function_pane_g1_ParamLimits

0xed0f,	// (0x0007f8c8) bg_popup_sub_pane_cp22_ParamLimits

0xb972,	// (0x0007c52b) input_focus_pane_cp08_ParamLimits

0xb97f,	// (0x0007c538) popup_vitu2_query_button_pane_ParamLimits

0xb97f,	// (0x0007c538) popup_vitu2_query_button_pane

0xb956,	// (0x0007c50f) popup_vitu2_query_input_button_pane

0x3981,	// (0x0007453a) popup_vitu2_query_window_g1_ParamLimits

0xb990,	// (0x0007c549) popup_vitu2_query_window_g2_ParamLimits

0xfa5d,	// (0x00080616) popup_vitu2_query_window_g_ParamLimits

0x0f6c,	// (0x00071b25) bg_button_pane_cp026

0xbfa1,	// (0x0007cb5a) popup_vitu2_query_input_button_pane_g1

0x0f6c,	// (0x00071b25) bg_button_pane_cp025

0x3d9c,	// (0x00074955) popup_vitu2_query_button_pane_t1

0x9a34,	// (0x0007a5ed) main_mp3_pane_t6

0x9a42,	// (0x0007a5fb) popup_slider_window_cp01

0xadf0,	// (0x0007b9a9) cam4_battery_pane

0xadf0,	// (0x0007b9a9) cam4_battery_pane_cp02

0xadf0,	// (0x0007b9a9) cam4_battery_pane_cp01

0xadf0,	// (0x0007b9a9) cam4_battery_pane_cp03

0x3daa,	// (0x00074963) cam4_battery_pane_g1

0x2d25,	// (0x000738de) cam4_battery_pane_g2

0x0001,

0xfb5b,	// (0x00080714) cam4_battery_pane_g

0x2bf7,	// (0x000737b0) popup_blid_sat_info2_window_t11

0x84ac,	// (0x00079065) aid_size_touch_mv_arrow_left_ParamLimits

0xe073,	// (0x0007ec2c) aid_size_touch_mv_arrow_right_ParamLimits

0xe0ab,	// (0x0007ec64) navi_pane_g1_ParamLimits

0xe0b7,	// (0x0007ec70) navi_pane_g2_ParamLimits

0x84c5,	// (0x0007907e) navi_pane_g3_ParamLimits

0xf418,	// (0x0007ffd1) navi_pane_g_ParamLimits

0x84ea,	// (0x000790a3) navi_pane_mv_t1_ParamLimits

0xa44b,	// (0x0007b004) grid_imed_effect_pane_ParamLimits

0x1b1b,	// (0x000726d4) aid_placing_vt_slider_lsc

0x1b23,	// (0x000726dc) aid_placing_vt_slider_prt

0xed0f,	// (0x0007f8c8) bg_tb_trans_pane_cp01_ParamLimits

0x2e74,	// (0x00073a2d) popup_image_details_window_g1_ParamLimits

0x2e87,	// (0x00073a40) popup_image_details_window_g2_ParamLimits

0x2e9c,	// (0x00073a55) popup_image_details_window_g3_ParamLimits

0x2e9c,	// (0x00073a55) popup_image_details_window_g3

0xf75e,	// (0x00080317) popup_image_details_window_g_ParamLimits

0x2eb0,	// (0x00073a69) popup_image_details_window_t1_ParamLimits

0x2ec2,	// (0x00073a7b) popup_image_details_window_t2_ParamLimits

0x2edb,	// (0x00073a94) popup_image_details_window_t3_ParamLimits

0x2eef,	// (0x00073aa8) popup_image_details_window_t4_ParamLimits

0x2f0a,	// (0x00073ac3) popup_image_details_window_t5_ParamLimits

0xf765,	// (0x0008031e) popup_image_details_window_t_ParamLimits

0xbc32,	// (0x0007c7eb) cl_header_name_pane_ParamLimits

0xbc32,	// (0x0007c7eb) cl_header_name_pane

0xbfa9,	// (0x0007cb62) cl_header_name_pane_t1_ParamLimits

0xbfa9,	// (0x0007cb62) cl_header_name_pane_t1

0xbfc0,	// (0x0007cb79) cl_header_name_pane_t2_ParamLimits

0xbfc0,	// (0x0007cb79) cl_header_name_pane_t2

0xbfea,	// (0x0007cba3) cl_header_name_pane_t3_ParamLimits

0xbfea,	// (0x0007cba3) cl_header_name_pane_t3

0x0002,

0xfb60,	// (0x00080719) cl_header_name_pane_t_ParamLimits

0xfb60,	// (0x00080719) cl_header_name_pane_t

0xe139,	// (0x0007ecf2) navi_pane_mv_g2_ParamLimits

0x367f,	// (0x00074238) field_vitu2_entry_pane_g1_ParamLimits

0x368b,	// (0x00074244) field_vitu2_entry_pane_g2_ParamLimits

0x3697,	// (0x00074250) field_vitu2_entry_pane_g3_ParamLimits

0x3697,	// (0x00074250) field_vitu2_entry_pane_g3

0xf95c,	// (0x00080515) field_vitu2_entry_pane_g_ParamLimits

0xb08f,	// (0x0007bc48) cell_vitu2_itu_pane_g1_ParamLimits

0xb09f,	// (0x0007bc58) cell_vitu2_itu_pane_g2_ParamLimits

0xb09f,	// (0x0007bc58) cell_vitu2_itu_pane_g2

0x0001,

0xf968,	// (0x00080521) cell_vitu2_itu_pane_g_ParamLimits

0xf968,	// (0x00080521) cell_vitu2_itu_pane_g

0xae9c,	// (0x0007ba55) bg_vkb2_func_pane_cp05_ParamLimits

0xae9c,	// (0x0007ba55) bg_vkb2_func_pane_cp05

0xae9c,	// (0x0007ba55) bg_vkb2_func_pane_cp03

0xae9c,	// (0x0007ba55) bg_vkb2_func_pane_cp04

0xae9c,	// (0x0007ba55) bg_vkb2_func_pane_cp10_ParamLimits

0xae9c,	// (0x0007ba55) bg_vkb2_func_pane_cp10

0xbbd8,	// (0x0007c791) bg_vkb2_func_pane_cp08

0xbbbf,	// (0x0007c778) bg_vkb2_func_pane_cp06

0xbbcc,	// (0x0007c785) bg_vkb2_func_pane_cp07

0x3ce1,	// (0x0007489a) bg_vkb2_func_pane_cp11_ParamLimits

0x3ce1,	// (0x0007489a) bg_vkb2_func_pane_cp11

0x3cf6,	// (0x000748af) bg_vkb2_func_pane_cp12_ParamLimits

0x3cf6,	// (0x000748af) bg_vkb2_func_pane_cp12

0x0f6c,	// (0x00071b25) bg_vkb2_func_pane_cp09

0x36ef,	// (0x000742a8) bg_vkb2_func_pane_g1

0x1cf2,	// (0x000728ab) bg_vkb2_func_pane_g2

0x36f7,	// (0x000742b0) bg_vkb2_func_pane_g3

0x36ff,	// (0x000742b8) bg_vkb2_func_pane_g4

0x3944,	// (0x000744fd) bg_vkb2_func_pane_g5

0x3717,	// (0x000742d0) bg_vkb2_func_pane_g6

0x371f,	// (0x000742d8) bg_vkb2_func_pane_g7

0x370f,	// (0x000742c8) bg_vkb2_func_pane_g8

0x1cd2,	// (0x0007288b) bg_vkb2_func_pane_g9

0x0008,

0xfb67,	// (0x00080720) bg_vkb2_func_pane_g

0xbf00,	// (0x0007cab9) blid2_tripm_pane_g6_ParamLimits

0xbf00,	// (0x0007cab9) blid2_tripm_pane_g6

0x3543,	// (0x000740fc) mp4_progress_pane_g1

0xbf54,	// (0x0007cb0d) blid2_tripm_values_pane_ParamLimits

0xbf54,	// (0x0007cb0d) blid2_tripm_values_pane

0xc00f,	// (0x0007cbc8) blid2_tripm_values_pane_t1

0xc01d,	// (0x0007cbd6) blid2_tripm_values_pane_t2

0xc02b,	// (0x0007cbe4) blid2_tripm_values_pane_t3

0xc039,	// (0x0007cbf2) blid2_tripm_values_pane_t4

0xc047,	// (0x0007cc00) blid2_tripm_values_pane_t5

0xc055,	// (0x0007cc0e) blid2_tripm_values_pane_t6

0xc063,	// (0x0007cc1c) blid2_tripm_values_pane_t7

0xc071,	// (0x0007cc2a) blid2_tripm_values_pane_t8

0xc07f,	// (0x0007cc38) blid2_tripm_values_pane_t9

0x0008,

0xfb7a,	// (0x00080733) blid2_tripm_values_pane_t

0x759d,	// (0x00078156) call_video_pane_t1_ParamLimits

0x75b3,	// (0x0007816c) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0007fe5a) call_video_pane_t_ParamLimits

0x8956,	// (0x0007950f) msg_header_pane_g1_ParamLimits

0xe315,	// (0x0007eece) msg_header_pane_g2_ParamLimits

0xe315,	// (0x0007eece) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x00080074) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x00080074) msg_header_pane_g

0x1724,	// (0x000722dd) main_clock2_pane_ParamLimits

0xa20b,	// (0x0007adc4) grid_clock2_toolbar_pane_ParamLimits

0xa20b,	// (0x0007adc4) grid_clock2_toolbar_pane

0xa20b,	// (0x0007adc4) listscroll_clock2_pane_ParamLimits

0xa20b,	// (0x0007adc4) listscroll_clock2_pane

0xa2ae,	// (0x0007ae67) main_clock2_pane_t3_ParamLimits

0xa2ae,	// (0x0007ae67) main_clock2_pane_t3

0xa2c0,	// (0x0007ae79) main_clock2_pane_t4_ParamLimits

0xa2c0,	// (0x0007ae79) main_clock2_pane_t4

0x3db4,	// (0x0007496d) cell_clock2_toolbar_pane

0x3dbc,	// (0x00074975) cell_clock2_toolbar_pane_cp01

0x3dbc,	// (0x00074975) cell_clock2_toolbar_pane_cp02

0x3dc4,	// (0x0007497d) cell_clock2_toolbar_pane_cp03

0x3dcc,	// (0x00074985) list_clock2_pane

0xdfdb,	// (0x0007eb94) scroll_pane_cp10

0x3dd4,	// (0x0007498d) list_single_clock2_pane_ParamLimits

0x3dd4,	// (0x0007498d) list_single_clock2_pane

0xe19a,	// (0x0007ed53) list_highlight_pane_cp08

0x3de1,	// (0x0007499a) list_single_clock2_pane_t1

0x3def,	// (0x000749a8) list_single_clock2_pane_t2

0x0001,

0xfb8d,	// (0x00080746) list_single_clock2_pane_t

0x0f6c,	// (0x00071b25) bg_button_pane_cp10

0x3dfd,	// (0x000749b6) cell_clock2_toolbar_pane_g1

0x89ed,	// (0x000795a6) aid_main_viewer_pane_g1_ParamLimits

0x89ed,	// (0x000795a6) aid_main_viewer_pane_g1

0x89f9,	// (0x000795b2) aid_main_viewer_pane_g2_ParamLimits

0x89f9,	// (0x000795b2) aid_main_viewer_pane_g2

0x8a05,	// (0x000795be) aid_main_viewer_pane_g3_ParamLimits

0x8a05,	// (0x000795be) aid_main_viewer_pane_g3

0x8a14,	// (0x000795cd) aid_main_viewer_pane_g4_ParamLimits

0x8a14,	// (0x000795cd) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x00080085) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x00080085) aid_main_viewer_pane_g

0x3658,	// (0x00074211) main_calc_pane_ParamLimits

0x909b,	// (0x00079c54) main_dialer2_pane_ParamLimits

0x0f6c,	// (0x00071b25) main_cam6_pane

0x0f6c,	// (0x00071b25) main_vid6_pane

0xa217,	// (0x0007add0) listscroll_gen_pane_cp06_ParamLimits

0xa217,	// (0x0007add0) listscroll_gen_pane_cp06

0xa2d2,	// (0x0007ae8b) main_clock2_pane_t5_ParamLimits

0xa2d2,	// (0x0007ae8b) main_clock2_pane_t5

0xa319,	// (0x0007aed2) aid_call2_pane_cp10_ParamLimits

0xa325,	// (0x0007aede) aid_call_pane_cp10_ParamLimits

0xe067,	// (0x0007ec20) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe067,	// (0x0007ec20) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa331,	// (0x0007aeea) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa331,	// (0x0007aeea) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe067,	// (0x0007ec20) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf815,	// (0x000803ce) popup_clock_analogue_window_cp10_g_ParamLimits

0xa33d,	// (0x0007aef6) popup_clock_analogue_window_cp10_t1_ParamLimits

0x35a3,	// (0x0007415c) cell_dialer2_keypad_pane_g2_ParamLimits

0x35a3,	// (0x0007415c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8fb,	// (0x000804b4) cell_dialer2_keypad_pane_g_ParamLimits

0xf8fb,	// (0x000804b4) cell_dialer2_keypad_pane_g

0xaa8b,	// (0x0007b644) cell_dialer2_keypad_pane_t1

0xb38c,	// (0x0007bf45) main_cset_text2_pane_ParamLimits

0xb38c,	// (0x0007bf45) main_cset_text2_pane

0x3b5b,	// (0x00074714) area_vitu2_query_pane_g1_ParamLimits

0xbb64,	// (0x0007c71d) area_vitu2_query_pane_g2_ParamLimits

0xfaaa,	// (0x00080663) area_vitu2_query_pane_g_ParamLimits

0x3bdf,	// (0x00074798) area_vitu2_query_pane_t7_ParamLimits

0x3bdf,	// (0x00074798) area_vitu2_query_pane_t7

0xbbbf,	// (0x0007c778) bg_button_pane_cp018_ParamLimits

0xbbcc,	// (0x0007c785) bg_button_pane_cp021_ParamLimits

0xbbd8,	// (0x0007c791) bg_button_pane_cp022_ParamLimits

0xbbd8,	// (0x0007c791) bg_vkb2_func_pane_cp08_ParamLimits

0xbbbf,	// (0x0007c778) bg_vkb2_func_pane_cp06_ParamLimits

0xbbcc,	// (0x0007c785) bg_vkb2_func_pane_cp07_ParamLimits

0xbbe7,	// (0x0007c7a0) input_focus_pane_cp09_ParamLimits

0xc08d,	// (0x0007cc46) cam6_autofocus_pane_ParamLimits

0xc08d,	// (0x0007cc46) cam6_autofocus_pane

0xc0a9,	// (0x0007cc62) cam6_image_uncrop_pane_ParamLimits

0xc0a9,	// (0x0007cc62) cam6_image_uncrop_pane

0xc0cc,	// (0x0007cc85) cam6_indi_pane_ParamLimits

0xc0cc,	// (0x0007cc85) cam6_indi_pane

0xc0e6,	// (0x0007cc9f) cam6_mode_pane_ParamLimits

0xc0e6,	// (0x0007cc9f) cam6_mode_pane

0xc0fa,	// (0x0007ccb3) cam6_timer_pane_ParamLimits

0xc0fa,	// (0x0007ccb3) cam6_timer_pane

0xc106,	// (0x0007ccbf) cam6_zoom_pane_ParamLimits

0xc106,	// (0x0007ccbf) cam6_zoom_pane

0xc11c,	// (0x0007ccd5) cam6_mode_pane_g1_ParamLimits

0xc11c,	// (0x0007ccd5) cam6_mode_pane_g1

0xc128,	// (0x0007cce1) cam6_mode_pane_g2_ParamLimits

0xc128,	// (0x0007cce1) cam6_mode_pane_g2

0xc134,	// (0x0007cced) cam6_mode_pane_g3_ParamLimits

0xc134,	// (0x0007cced) cam6_mode_pane_g3

0xc140,	// (0x0007ccf9) cam6_mode_pane_g4_ParamLimits

0xc140,	// (0x0007ccf9) cam6_mode_pane_g4

0x0003,

0xfb92,	// (0x0008074b) cam6_mode_pane_g_ParamLimits

0xfb92,	// (0x0008074b) cam6_mode_pane_g

0x3e05,	// (0x000749be) bg_tb_trans_pane_cp08_ParamLimits

0x3e05,	// (0x000749be) bg_tb_trans_pane_cp08

0x3e13,	// (0x000749cc) cam6_battery_pane_ParamLimits

0x3e13,	// (0x000749cc) cam6_battery_pane

0x3e29,	// (0x000749e2) cam6_indi_pane_g1_ParamLimits

0x3e29,	// (0x000749e2) cam6_indi_pane_g1

0x3e3b,	// (0x000749f4) cam6_indi_pane_g2_ParamLimits

0x3e3b,	// (0x000749f4) cam6_indi_pane_g2

0x3e4d,	// (0x00074a06) cam6_indi_pane_g3_ParamLimits

0x3e4d,	// (0x00074a06) cam6_indi_pane_g3

0x0002,

0xfb9b,	// (0x00080754) cam6_indi_pane_g_ParamLimits

0xfb9b,	// (0x00080754) cam6_indi_pane_g

0x3e5f,	// (0x00074a18) cam6_indi_pane_t1_ParamLimits

0x3e5f,	// (0x00074a18) cam6_indi_pane_t1

0xaf09,	// (0x0007bac2) cam6_autofocus_pane_g1

0xaf01,	// (0x0007baba) cam6_autofocus_pane_g2

0xaf19,	// (0x0007bad2) cam6_autofocus_pane_g3

0xaf11,	// (0x0007baca) cam6_autofocus_pane_g4

0x0003,

0xfba2,	// (0x0008075b) cam6_autofocus_pane_g

0x3e85,	// (0x00074a3e) cam6_timer_pane_g1

0x3e8d,	// (0x00074a46) cam6_timer_pane_t1

0x3e9b,	// (0x00074a54) cam6_zoom_cont_pane

0x3ea3,	// (0x00074a5c) cam6_zoom_pane_g1

0x3eab,	// (0x00074a64) cam6_zoom_pane_g2

0xc14c,	// (0x0007cd05) cam6_zoom_pane_g3

0x0002,

0xfbab,	// (0x00080764) cam6_zoom_pane_g

0x2d25,	// (0x000738de) cam6_battery_pane_g1

0x2d25,	// (0x000738de) cam6_battery_pane_g2

0x0001,

0xf722,	// (0x000802db) cam6_battery_pane_g

0x3eb3,	// (0x00074a6c) cam6_zoom_cont_pane_g1

0x3ebc,	// (0x00074a75) cam6_zoom_cont_pane_g2

0x3ec5,	// (0x00074a7e) cam6_zoom_cont_pane_g3

0x0002,

0xfbb2,	// (0x0008076b) cam6_zoom_cont_pane_g

0xc169,	// (0x0007cd22) cam6_mode_pane_cp_ParamLimits

0xc169,	// (0x0007cd22) cam6_mode_pane_cp

0xc17d,	// (0x0007cd36) cam6_zoom_pane_cp_ParamLimits

0xc17d,	// (0x0007cd36) cam6_zoom_pane_cp

0xc193,	// (0x0007cd4c) vid6_image_uncrop_cif_pane_ParamLimits

0xc193,	// (0x0007cd4c) vid6_image_uncrop_cif_pane

0xc1b5,	// (0x0007cd6e) vid6_image_uncrop_nhd_pane_ParamLimits

0xc1b5,	// (0x0007cd6e) vid6_image_uncrop_nhd_pane

0xc1cc,	// (0x0007cd85) vid6_image_uncrop_vga_pane_ParamLimits

0xc1cc,	// (0x0007cd85) vid6_image_uncrop_vga_pane

0xc1e3,	// (0x0007cd9c) vid6_image_uncrop_wvga_pane_ParamLimits

0xc1e3,	// (0x0007cd9c) vid6_image_uncrop_wvga_pane

0xc1fa,	// (0x0007cdb3) vid6_indi_pane_ParamLimits

0xc1fa,	// (0x0007cdb3) vid6_indi_pane

0x3e05,	// (0x000749be) bg_tb_trans_pane_cp09_ParamLimits

0x3e05,	// (0x000749be) bg_tb_trans_pane_cp09

0x3ed9,	// (0x00074a92) cam6_battery_pane_cp_ParamLimits

0x3ed9,	// (0x00074a92) cam6_battery_pane_cp

0x3ee5,	// (0x00074a9e) vid6_indi_pane_g1_ParamLimits

0x3ee5,	// (0x00074a9e) vid6_indi_pane_g1

0x3ef7,	// (0x00074ab0) vid6_indi_pane_g2_ParamLimits

0x3ef7,	// (0x00074ab0) vid6_indi_pane_g2

0x3f09,	// (0x00074ac2) vid6_indi_pane_g3_ParamLimits

0x3f09,	// (0x00074ac2) vid6_indi_pane_g3

0x3f1e,	// (0x00074ad7) vid6_indi_pane_g4_ParamLimits

0x3f1e,	// (0x00074ad7) vid6_indi_pane_g4

0x3f33,	// (0x00074aec) vid6_indi_pane_g5_ParamLimits

0x3f33,	// (0x00074aec) vid6_indi_pane_g5

0x0004,

0xfbb9,	// (0x00080772) vid6_indi_pane_g_ParamLimits

0xfbb9,	// (0x00080772) vid6_indi_pane_g

0x3f4d,	// (0x00074b06) vid6_indi_pane_t1_ParamLimits

0x3f4d,	// (0x00074b06) vid6_indi_pane_t1

0x3f63,	// (0x00074b1c) vid6_indi_pane_t2_ParamLimits

0x3f63,	// (0x00074b1c) vid6_indi_pane_t2

0x3f8b,	// (0x00074b44) vid6_indi_pane_t3_ParamLimits

0x3f8b,	// (0x00074b44) vid6_indi_pane_t3

0x3fb3,	// (0x00074b6c) vid6_indi_pane_t4_ParamLimits

0x3fb3,	// (0x00074b6c) vid6_indi_pane_t4

0x0003,

0xfbc4,	// (0x0008077d) vid6_indi_pane_t_ParamLimits

0xfbc4,	// (0x0008077d) vid6_indi_pane_t

0x3fd7,	// (0x00074b90) wait_bar_pane_cp08

0xc21a,	// (0x0007cdd3) main_cset_text2_pane_t1_ParamLimits

0xc21a,	// (0x0007cdd3) main_cset_text2_pane_t1

0xc154,	// (0x0007cd0d) listscroll_gen_pane_cp06_t1_ParamLimits

0xc154,	// (0x0007cd0d) listscroll_gen_pane_cp06_t1

0x0f6c,	// (0x00071b25) main_cam6_set_pane

0xade2,	// (0x0007b99b) bg_tb_trans_pane_cp06_ParamLimits

0xadf8,	// (0x0007b9b1) cam4_indicators_pane_g1_ParamLimits

0xae08,	// (0x0007b9c1) cam4_indicators_pane_g2_ParamLimits

0xf938,	// (0x000804f1) cam4_indicators_pane_g_ParamLimits

0xae28,	// (0x0007b9e1) cam4_indicators_pane_t1_ParamLimits

0xae9c,	// (0x0007ba55) bg_tb_trans_pane_cp07_ParamLimits

0xadf8,	// (0x0007b9b1) vid4_indicators_pane_g1_ParamLimits

0xaeaa,	// (0x0007ba63) vid4_indicators_pane_g2_ParamLimits

0xaeba,	// (0x0007ba73) vid4_indicators_pane_g3_ParamLimits

0xaecb,	// (0x0007ba84) vid4_indicators_pane_g4_ParamLimits

0xf94a,	// (0x00080503) vid4_indicators_pane_g_ParamLimits

0xaee7,	// (0x0007baa0) vid4_indicators_pane_t1_ParamLimits

0xbd06,	// (0x0007c8bf) vid4_progress_pane_g1_ParamLimits

0xbd15,	// (0x0007c8ce) vid4_progress_pane_g2_ParamLimits

0xbd24,	// (0x0007c8dd) vid4_progress_pane_g3_ParamLimits

0xbd33,	// (0x0007c8ec) vid4_progress_pane_g4_ParamLimits

0xfaf5,	// (0x000806ae) vid4_progress_pane_g_ParamLimits

0xbd4b,	// (0x0007c904) vid4_progress_pane_t1_ParamLimits

0xbd61,	// (0x0007c91a) vid4_progress_pane_t2_ParamLimits

0xbd76,	// (0x0007c92f) vid4_progress_pane_t3_ParamLimits

0xfb00,	// (0x000806b9) vid4_progress_pane_t_ParamLimits

0xbd8b,	// (0x0007c944) wait_bar_pane_cp07_ParamLimits

0xc236,	// (0x0007cdef) main_cam6_set_pane_g2_ParamLimits

0xc236,	// (0x0007cdef) main_cam6_set_pane_g2

0xc242,	// (0x0007cdfb) main_cset6_listscroll_pane_ParamLimits

0xc242,	// (0x0007cdfb) main_cset6_listscroll_pane

0xc26b,	// (0x0007ce24) main_cset6_slider_pane_ParamLimits

0xc26b,	// (0x0007ce24) main_cset6_slider_pane

0xc277,	// (0x0007ce30) main_cset6_text2_pane_ParamLimits

0xc277,	// (0x0007ce30) main_cset6_text2_pane

0x3fe7,	// (0x00074ba0) main_cset6_text_pane

0x37e5,	// (0x0007439e) main_cset_list_pane_copy1_ParamLimits

0x37e5,	// (0x0007439e) main_cset_list_pane_copy1

0x37f5,	// (0x000743ae) scroll_pane_cp028_copy1

0xc28a,	// (0x0007ce43) cset_list_set_pane_copy1

0xb647,	// (0x0007c200) aid_position_infowindow_above_copy1

0xb64f,	// (0x0007c208) aid_position_infowindow_below_copy1

0xc299,	// (0x0007ce52) cset_list_set_pane_g1_copy1

0xc2a1,	// (0x0007ce5a) cset_list_set_pane_g3_copy1_ParamLimits

0xc2a1,	// (0x0007ce5a) cset_list_set_pane_g3_copy1

0xc2b0,	// (0x0007ce69) cset_list_set_pane_t1_copy1_ParamLimits

0xc2b0,	// (0x0007ce69) cset_list_set_pane_t1_copy1

0xed0f,	// (0x0007f8c8) list_highlight_pane_cp021_copy1_ParamLimits

0xed0f,	// (0x0007f8c8) list_highlight_pane_cp021_copy1

0x3fef,	// (0x00074ba8) cset6_slider_pane_ParamLimits

0x3fef,	// (0x00074ba8) cset6_slider_pane

0x401b,	// (0x00074bd4) main_cset6_slider_pane_g1_ParamLimits

0x401b,	// (0x00074bd4) main_cset6_slider_pane_g1

0xc2c5,	// (0x0007ce7e) main_cset6_slider_pane_g2_ParamLimits

0xc2c5,	// (0x0007ce7e) main_cset6_slider_pane_g2

0x380a,	// (0x000743c3) main_cset6_slider_pane_g3_ParamLimits

0x380a,	// (0x000743c3) main_cset6_slider_pane_g3

0xc2ed,	// (0x0007cea6) main_cset6_slider_pane_g4_ParamLimits

0xc2ed,	// (0x0007cea6) main_cset6_slider_pane_g4

0xc2f9,	// (0x0007ceb2) main_cset6_slider_pane_g5_ParamLimits

0xc2f9,	// (0x0007ceb2) main_cset6_slider_pane_g5

0x380a,	// (0x000743c3) main_cset6_slider_pane_g7_ParamLimits

0x380a,	// (0x000743c3) main_cset6_slider_pane_g7

0x3816,	// (0x000743cf) main_cset6_slider_pane_g8_ParamLimits

0x3816,	// (0x000743cf) main_cset6_slider_pane_g8

0xc305,	// (0x0007cebe) main_cset6_slider_pane_g9_ParamLimits

0xc305,	// (0x0007cebe) main_cset6_slider_pane_g9

0xc311,	// (0x0007ceca) main_cset6_slider_pane_g10_ParamLimits

0xc311,	// (0x0007ceca) main_cset6_slider_pane_g10

0xc2ed,	// (0x0007cea6) main_cset6_slider_pane_g11_ParamLimits

0xc2ed,	// (0x0007cea6) main_cset6_slider_pane_g11

0xc31d,	// (0x0007ced6) main_cset6_slider_pane_g12_ParamLimits

0xc31d,	// (0x0007ced6) main_cset6_slider_pane_g12

0xc329,	// (0x0007cee2) main_cset6_slider_pane_g13_ParamLimits

0xc329,	// (0x0007cee2) main_cset6_slider_pane_g13

0xc335,	// (0x0007ceee) main_cset6_slider_pane_g14_ParamLimits

0xc335,	// (0x0007ceee) main_cset6_slider_pane_g14

0xc341,	// (0x0007cefa) main_cset6_slider_pane_g15_ParamLimits

0xc341,	// (0x0007cefa) main_cset6_slider_pane_g15

0xc2f9,	// (0x0007ceb2) main_cset6_slider_pane_g16_ParamLimits

0xc2f9,	// (0x0007ceb2) main_cset6_slider_pane_g16

0xc359,	// (0x0007cf12) main_cset6_slider_pane_g17_ParamLimits

0xc359,	// (0x0007cf12) main_cset6_slider_pane_g17

0x0011,

0xfbcd,	// (0x00080786) main_cset6_slider_pane_g_ParamLimits

0xfbcd,	// (0x00080786) main_cset6_slider_pane_g

0x4043,	// (0x00074bfc) main_cset6_slider_pane_t1_ParamLimits

0x4043,	// (0x00074bfc) main_cset6_slider_pane_t1

0xc365,	// (0x0007cf1e) main_cset6_slider_pane_t2_ParamLimits

0xc365,	// (0x0007cf1e) main_cset6_slider_pane_t2

0x4084,	// (0x00074c3d) main_cset6_slider_pane_t3_ParamLimits

0x4084,	// (0x00074c3d) main_cset6_slider_pane_t3

0xc390,	// (0x0007cf49) main_cset6_slider_pane_t4_ParamLimits

0xc390,	// (0x0007cf49) main_cset6_slider_pane_t4

0x40af,	// (0x00074c68) main_cset6_slider_pane_t5_ParamLimits

0x40af,	// (0x00074c68) main_cset6_slider_pane_t5

0x40da,	// (0x00074c93) main_cset6_slider_pane_t7_ParamLimits

0x40da,	// (0x00074c93) main_cset6_slider_pane_t7

0xc3bb,	// (0x0007cf74) main_cset6_slider_pane_t8_ParamLimits

0xc3bb,	// (0x0007cf74) main_cset6_slider_pane_t8

0xc3df,	// (0x0007cf98) main_cset6_slider_pane_t9_ParamLimits

0xc3df,	// (0x0007cf98) main_cset6_slider_pane_t9

0xc403,	// (0x0007cfbc) main_cset6_slider_pane_t10_ParamLimits

0xc403,	// (0x0007cfbc) main_cset6_slider_pane_t10

0xc427,	// (0x0007cfe0) main_cset6_slider_pane_t11_ParamLimits

0xc427,	// (0x0007cfe0) main_cset6_slider_pane_t11

0x4110,	// (0x00074cc9) main_cset6_slider_pane_t14_ParamLimits

0x4110,	// (0x00074cc9) main_cset6_slider_pane_t14

0x4149,	// (0x00074d02) main_cset6_slider_pane_t15_ParamLimits

0x4149,	// (0x00074d02) main_cset6_slider_pane_t15

0x000b,

0xfbf2,	// (0x000807ab) main_cset6_slider_pane_t_ParamLimits

0xfbf2,	// (0x000807ab) main_cset6_slider_pane_t

0x38f2,	// (0x000744ab) cset_slider_pane_g1_copy1

0x38fb,	// (0x000744b4) cset_slider_pane_g2_copy1

0x3904,	// (0x000744bd) cset_slider_pane_g3_copy1

0x0f6c,	// (0x00071b25) bg_popup_sub_pane_cp011_copy1

0x398d,	// (0x00074546) main_cset_text_pane_g1_copy1

0x3995,	// (0x0007454e) main_cset_text_pane_t1_copy1

0x39a3,	// (0x0007455c) main_cset_text_pane_t2_copy1

0x39b1,	// (0x0007456a) main_cset_text_pane_t3_copy1

0x39bf,	// (0x00074578) main_cset_text_pane_t4_copy1

0x39cd,	// (0x00074586) main_cset_text_pane_t5_copy1

0x39db,	// (0x00074594) main_cset_text_pane_t6_copy1

0x39e9,	// (0x000745a2) main_cset_text_pane_t7_copy1

0xc44b,	// (0x0007d004) main_cset_text2_pane_t1_copy1

0x0f6c,	// (0x00071b25) main_ncimui_pane

0x90d6,	// (0x00079c8f) popup_query_ncimui_window_ParamLimits

0x90d6,	// (0x00079c8f) popup_query_ncimui_window

0x5388,	// (0x00075f41) field_cale_ev2_pane_g4_ParamLimits

0x5388,	// (0x00075f41) field_cale_ev2_pane_g4

0xa7bf,	// (0x0007b378) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa7bf,	// (0x0007b378) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8d6,	// (0x0008048f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8d6,	// (0x0008048f) cell_video_dialer_keypad_pane_g

0xa7d7,	// (0x0007b390) cell_video_dialer_keypad_pane_t1

0x0f6c,	// (0x00071b25) bg_popup_window_pane_cp012

0x8283,	// (0x00078e3c) heading_pane_cp06

0x426b,	// (0x00074e24) ncim_query_content_pane

0x0f6c,	// (0x00071b25) bg_popup_heading_pane_cp01

0x4273,	// (0x00074e2c) ncim_heading_pane_t1

0x4281,	// (0x00074e3a) ncim_indicator_popup_pane

0x4293,	// (0x00074e4c) ncim_query_button_pane

0x42a7,	// (0x00074e60) ncim_query_content_pane_t1

0x42b9,	// (0x00074e72) ncim_query_content_pane_t2

0x0005,

0xfc31,	// (0x000807ea) ncim_query_content_pane_t

0x42f3,	// (0x00074eac) ncim_query_list_pane

0x4305,	// (0x00074ebe) ncim_query_popup_pane

0x4281,	// (0x00074e3a) ncim_indicator_popup_pane_ParamLimits

0xc52c,	// (0x0007d0e5) ncim_query_content_pane_g1_ParamLimits

0xc52c,	// (0x0007d0e5) ncim_query_content_pane_g1

0x42a7,	// (0x00074e60) ncim_query_content_pane_t1_ParamLimits

0x42b9,	// (0x00074e72) ncim_query_content_pane_t2_ParamLimits

0xc538,	// (0x0007d0f1) ncim_query_content_pane_t3_ParamLimits

0xc538,	// (0x0007d0f1) ncim_query_content_pane_t3

0xc555,	// (0x0007d10e) ncim_query_content_pane_t4_ParamLimits

0xc555,	// (0x0007d10e) ncim_query_content_pane_t4

0xc572,	// (0x0007d12b) ncim_query_content_pane_t5_ParamLimits

0xc572,	// (0x0007d12b) ncim_query_content_pane_t5

0x42cb,	// (0x00074e84) ncim_query_content_pane_t6_ParamLimits

0x42cb,	// (0x00074e84) ncim_query_content_pane_t6

0xfc31,	// (0x000807ea) ncim_query_content_pane_t_ParamLimits

0x42f3,	// (0x00074eac) ncim_query_list_pane_ParamLimits

0x4305,	// (0x00074ebe) ncim_query_popup_pane_ParamLimits

0x4319,	// (0x00074ed2) wait_bar_pane_cp04

0x0f6c,	// (0x00071b25) input_focus_pane_cp011

0x4321,	// (0x00074eda) ncim_query_popup_pane_t1

0x432f,	// (0x00074ee8) ncim_list_query_list_pane_ParamLimits

0x432f,	// (0x00074ee8) ncim_list_query_list_pane

0x0f6c,	// (0x00071b25) bg_button_pane_cp027

0x4342,	// (0x00074efb) ncim_query_button_pane_g1

0x0f6c,	// (0x00071b25) list_highlight_pane_cp012

0x434c,	// (0x00074f05) ncim_list_query_list_pane_g1

0x4354,	// (0x00074f0d) ncim_list_query_list_pane_t1

0xae18,	// (0x0007b9d1) cam4_indicators_pane_g3_ParamLimits

0xae18,	// (0x0007b9d1) cam4_indicators_pane_g3

0xaed7,	// (0x0007ba90) vid4_indicators_pane_g5_ParamLimits

0xaed7,	// (0x0007ba90) vid4_indicators_pane_g5

0xbd3f,	// (0x0007c8f8) vid4_progress_pane_g5_ParamLimits

0xbd3f,	// (0x0007c8f8) vid4_progress_pane_g5

0xc476,	// (0x0007d02f) main_ncimui_pane_g1

0xc4bc,	// (0x0007d075) ncimui_group_query_pane_ParamLimits

0xc4bc,	// (0x0007d075) ncimui_group_query_pane

0xc4f0,	// (0x0007d0a9) ncimui_list_pane_ParamLimits

0xc4f0,	// (0x0007d0a9) ncimui_list_pane

0xc508,	// (0x0007d0c1) ncimui_text_pane_ParamLimits

0xc508,	// (0x0007d0c1) ncimui_text_pane

0xc58f,	// (0x0007d148) ncimui_text_pane_t1_ParamLimits

0xc58f,	// (0x0007d148) ncimui_text_pane_t1

0x436b,	// (0x00074f24) ncimui_list_single_graphic_pane_ParamLimits

0x436b,	// (0x00074f24) ncimui_list_single_graphic_pane

0xc5ad,	// (0x0007d166) ncimui_query_pane_ParamLimits

0xc5ad,	// (0x0007d166) ncimui_query_pane

0x0f6c,	// (0x00071b25) list_highlight_pane_cp013

0x4378,	// (0x00074f31) ncim_list_query_list_pane_t1_copy1

0x4386,	// (0x00074f3f) ncim_list_single_graphic_pane_g1

0x438e,	// (0x00074f47) ncim_query_button_pane_cp01

0x4396,	// (0x00074f4f) ncim_query_entry_pane_ParamLimits

0x4396,	// (0x00074f4f) ncim_query_entry_pane

0x43a6,	// (0x00074f5f) ncimui_query_pane_g1

0x43ae,	// (0x00074f67) ncimui_query_pane_t1_ParamLimits

0x43ae,	// (0x00074f67) ncimui_query_pane_t1

0x0f6c,	// (0x00071b25) input_focus_pane_cp012

0x4321,	// (0x00074eda) ncim_query_entry_pane_t1

0x1724,	// (0x000722dd) main_im_pane_ParamLimits

0xed0f,	// (0x0007f8c8) main_mobtv_pane_ParamLimits

0xed0f,	// (0x0007f8c8) main_mobtv_pane

0xc305,	// (0x0007cebe) main_cset6_slider_pane_g18_ParamLimits

0xc305,	// (0x0007cebe) main_cset6_slider_pane_g18

0xc329,	// (0x0007cee2) main_cset6_slider_pane_g19_ParamLimits

0xc329,	// (0x0007cee2) main_cset6_slider_pane_g19

0x3697,	// (0x00074250) bg_main_mobtv_pane_ParamLimits

0x3697,	// (0x00074250) bg_main_mobtv_pane

0xc5bd,	// (0x0007d176) main_mobtv_info_pane

0xc5c6,	// (0x0007d17f) main_mobtv_loading_pane_ParamLimits

0xc5c6,	// (0x0007d17f) main_mobtv_loading_pane

0x43d2,	// (0x00074f8b) main_mobtv_pg_channel_list_pane

0x43dc,	// (0x00074f95) main_mobtv_pg_hdr_pane

0xc5d3,	// (0x0007d18c) main_mobtv_programe_curr_pane_ParamLimits

0xc5d3,	// (0x0007d18c) main_mobtv_programe_curr_pane

0xc5e0,	// (0x0007d199) main_mobtv_programe_next_pane_ParamLimits

0xc5e0,	// (0x0007d199) main_mobtv_programe_next_pane

0x43e5,	// (0x00074f9e) popup_mobtv_noti_window

0x2d25,	// (0x000738de) main_tv_pg_hdr_pane_g1

0x43ed,	// (0x00074fa6) main_tv_pg_hdr_pane_g2

0x43f5,	// (0x00074fae) main_tv_pg_hdr_pane_g3

0x43fd,	// (0x00074fb6) main_tv_pg_hdr_pane_g4

0x4405,	// (0x00074fbe) main_tv_pg_hdr_pane_g5

0x440d,	// (0x00074fc6) main_tv_pg_hdr_pane_g6

0x4415,	// (0x00074fce) main_tv_pg_hdr_pane_g7

0x441d,	// (0x00074fd6) main_tv_pg_hdr_pane_g8

0x4425,	// (0x00074fde) main_tv_pg_hdr_pane_g9

0x442d,	// (0x00074fe6) main_tv_pg_hdr_pane_g10

0x4437,	// (0x00074ff0) main_tv_pg_hdr_pane_g11

0x000a,

0xfc3e,	// (0x000807f7) main_tv_pg_hdr_pane_g

0x4441,	// (0x00074ffa) main_tv_pg_hdr_pane_t1

0x444f,	// (0x00075008) main_tv_pg_hdr_pane_t2

0x445d,	// (0x00075016) main_tv_pg_hdr_pane_t3

0x446b,	// (0x00075024) main_tv_pg_hdr_pane_t4

0x4479,	// (0x00075032) main_tv_pg_hdr_pane_t5

0x0004,

0xfc55,	// (0x0008080e) main_tv_pg_hdr_pane_t

0x4487,	// (0x00075040) single_mobtv_pg_channel_pane_ParamLimits

0x4487,	// (0x00075040) single_mobtv_pg_channel_pane

0x4499,	// (0x00075052) single_mobtv_pg_channel_table_pane

0x44a2,	// (0x0007505b) single_mobtv_pg_channel_thumb_pane

0x44ab,	// (0x00075064) single_tv_pg_channel_pane_g1

0x44b4,	// (0x0007506d) single_tv_pg_channel_pane_g2

0x0001,

0xfc60,	// (0x00080819) single_tv_pg_channel_pane_g

0x2f54,	// (0x00073b0d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2f54,	// (0x00073b0d) bg_single_mobtv_pg_channel_thumb_pane

0x44bd,	// (0x00075076) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x44bd,	// (0x00075076) single_mobtv_pg_channel_thumb_pane_g1

0x44cb,	// (0x00075084) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x44cb,	// (0x00075084) single_mobtv_pg_channel_thumb_pane_g2

0x44d7,	// (0x00075090) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x44d7,	// (0x00075090) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc65,	// (0x0008081e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc65,	// (0x0008081e) single_mobtv_pg_channel_thumb_pane_g

0x44e3,	// (0x0007509c) single_mobtv_pg_channel_thumb_pane_t1

0x44f1,	// (0x000750aa) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc6c,	// (0x00080825) single_mobtv_pg_channel_thumb_pane_t

0x2d25,	// (0x000738de) bg_single_mobtv_pg_channel_table_pane_g1

0x2d25,	// (0x000738de) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf722,	// (0x000802db) bg_single_mobtv_pg_channel_table_pane_g

0x44ff,	// (0x000750b8) single_mobtv_pg_channel_table_pane_t1

0x450d,	// (0x000750c6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc71,	// (0x0008082a) single_mobtv_pg_channel_table_pane_t

0xc5f5,	// (0x0007d1ae) main_mobtv_info_pane_g1_ParamLimits

0xc5f5,	// (0x0007d1ae) main_mobtv_info_pane_g1

0xc611,	// (0x0007d1ca) main_mobtv_info_pane_t1_ParamLimits

0xc611,	// (0x0007d1ca) main_mobtv_info_pane_t1

0xc677,	// (0x0007d230) main_mobtv_info_pane_t2_ParamLimits

0xc677,	// (0x0007d230) main_mobtv_info_pane_t2

0x0002,

0xfc7b,	// (0x00080834) main_mobtv_info_pane_t_ParamLimits

0xfc7b,	// (0x00080834) main_mobtv_info_pane_t

0xc6fa,	// (0x0007d2b3) wait_bar_pane_cp05

0xc70a,	// (0x0007d2c3) main_mobtv_loading_pane_g1_ParamLimits

0xc70a,	// (0x0007d2c3) main_mobtv_loading_pane_g1

0xc716,	// (0x0007d2cf) main_mobtv_loading_pane_g2_ParamLimits

0xc716,	// (0x0007d2cf) main_mobtv_loading_pane_g2

0xc722,	// (0x0007d2db) main_mobtv_loading_pane_g3_ParamLimits

0xc722,	// (0x0007d2db) main_mobtv_loading_pane_g3

0x0002,

0xfc82,	// (0x0008083b) main_mobtv_loading_pane_g_ParamLimits

0xfc82,	// (0x0008083b) main_mobtv_loading_pane_g

0x451b,	// (0x000750d4) main_mobtv_loading_pane_t1_ParamLimits

0x451b,	// (0x000750d4) main_mobtv_loading_pane_t1

0x4533,	// (0x000750ec) main_mobtv_loading_pane_t2_ParamLimits

0x4533,	// (0x000750ec) main_mobtv_loading_pane_t2

0x0001,

0xfc89,	// (0x00080842) main_mobtv_loading_pane_t_ParamLimits

0xfc89,	// (0x00080842) main_mobtv_loading_pane_t

0xc72e,	// (0x0007d2e7) wait_bar_pane_cp06_ParamLimits

0xc72e,	// (0x0007d2e7) wait_bar_pane_cp06

0x4557,	// (0x00075110) main_mobtv_programe_curr_pane_t1

0x4565,	// (0x0007511e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc8e,	// (0x00080847) main_mobtv_programe_curr_pane_t

0x4573,	// (0x0007512c) main_mobtv_programe_next_pane_t1

0x4581,	// (0x0007513a) main_mobtv_programe_next_pane_t2

0x458f,	// (0x00075148) main_mobtv_programe_next_pane_t3

0x0002,

0xfc93,	// (0x0008084c) main_mobtv_programe_next_pane_t

0x0f6c,	// (0x00071b25) bg_popup_mobtv_noti_window_pane

0x459d,	// (0x00075156) popup_mobtv_noti_window_g1

0x45a5,	// (0x0007515e) popup_mobtv_noti_window_t1

0x45b3,	// (0x0007516c) popup_mobtv_noti_window_t2

0x0001,

0xfc9a,	// (0x00080853) popup_mobtv_noti_window_t

0x2d25,	// (0x000738de) bg_popup_mobtv_noti_window_pane_g1

0x0f6c,	// (0x00071b25) sc_clock_pane

0x0f6c,	// (0x00071b25) main_fs_bigclock_pane

0xbf42,	// (0x0007cafb) blid2_tripm_pane_t4_ParamLimits

0xbf42,	// (0x0007cafb) blid2_tripm_pane_t4

0xc73a,	// (0x0007d2f3) sc_clock_pane_g1_ParamLimits

0xc73a,	// (0x0007d2f3) sc_clock_pane_g1

0xc748,	// (0x0007d301) sc_clock_pane_t1_ParamLimits

0xc748,	// (0x0007d301) sc_clock_pane_t1

0xc75b,	// (0x0007d314) sc_clock_pane_t2_ParamLimits

0xc75b,	// (0x0007d314) sc_clock_pane_t2

0xc76d,	// (0x0007d326) sc_clock_pane_t3_ParamLimits

0xc76d,	// (0x0007d326) sc_clock_pane_t3

0x0004,

0xfc9f,	// (0x00080858) sc_clock_pane_t_ParamLimits

0xfc9f,	// (0x00080858) sc_clock_pane_t

0xd72e,	// (0x0007e2e7) main_fs_bigclock_indicator_pane_ParamLimits

0xd72e,	// (0x0007e2e7) main_fs_bigclock_indicator_pane

0xc7e5,	// (0x0007d39e) main_fs_bigclock_pane_g1_ParamLimits

0xc7e5,	// (0x0007d39e) main_fs_bigclock_pane_g1

0xd73a,	// (0x0007e2f3) main_fs_bigclock_pane_t1_ParamLimits

0xd73a,	// (0x0007e2f3) main_fs_bigclock_pane_t1

0xd74c,	// (0x0007e305) main_fs_bigclock_pane_t2_ParamLimits

0xd74c,	// (0x0007e305) main_fs_bigclock_pane_t2

0xd75e,	// (0x0007e317) main_fs_bigclock_pane_t3_ParamLimits

0xd75e,	// (0x0007e317) main_fs_bigclock_pane_t3

0x0002,

0xfe99,	// (0x00080a52) main_fs_bigclock_pane_t_ParamLimits

0xfe99,	// (0x00080a52) main_fs_bigclock_pane_t

0xd770,	// (0x0007e329) main_fs_bigclock_indicator_pane_g1

0x429b,	// (0x00074e54) ncim_query_content_pane_g2_ParamLimits

0x429b,	// (0x00074e54) ncim_query_content_pane_g2

0x0001,

0xfc2c,	// (0x000807e5) ncim_query_content_pane_g_ParamLimits

0xfc2c,	// (0x000807e5) ncim_query_content_pane_g

0xc77f,	// (0x0007d338) sc_clock_pane_t4_ParamLimits

0xc77f,	// (0x0007d338) sc_clock_pane_t4

0xed0f,	// (0x0007f8c8) main_radioblah_pane

0x35fa,	// (0x000741b3) cell_call4_button_pane_t1_copy1_ParamLimits

0x35fa,	// (0x000741b3) cell_call4_button_pane_t1_copy1

0xc47e,	// (0x0007d037) main_ncimui_pane_t1_ParamLimits

0xc47e,	// (0x0007d037) main_ncimui_pane_t1

0xc490,	// (0x0007d049) main_ncimui_pane_t2_ParamLimits

0xc490,	// (0x0007d049) main_ncimui_pane_t2

0x0002,

0xfc25,	// (0x000807de) main_ncimui_pane_t_ParamLimits

0xfc25,	// (0x000807de) main_ncimui_pane_t

0x46dd,	// (0x00075296) main_radioblah_anim_pane_ParamLimits

0x46dd,	// (0x00075296) main_radioblah_anim_pane

0x46ee,	// (0x000752a7) main_radioblah_info_pane_ParamLimits

0x46ee,	// (0x000752a7) main_radioblah_info_pane

0x4702,	// (0x000752bb) main_radioblah_pane_t1_ParamLimits

0x4702,	// (0x000752bb) main_radioblah_pane_t1

0x471e,	// (0x000752d7) main_radioblah_pane_t2_ParamLimits

0x471e,	// (0x000752d7) main_radioblah_pane_t2

0x0003,

0xfcc0,	// (0x00080879) main_radioblah_pane_t_ParamLimits

0xfcc0,	// (0x00080879) main_radioblah_pane_t

0xc82d,	// (0x0007d3e6) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc82d,	// (0x0007d3e6) main_radioblah_rocker_ctrl_pane

0x4766,	// (0x0007531f) main_radioblah_info_pane_t1_ParamLimits

0x4766,	// (0x0007531f) main_radioblah_info_pane_t1

0xc872,	// (0x0007d42b) main_radioblah_info_pane_t2_ParamLimits

0xc872,	// (0x0007d42b) main_radioblah_info_pane_t2

0x0003,

0xfcc9,	// (0x00080882) main_radioblah_info_pane_t_ParamLimits

0xfcc9,	// (0x00080882) main_radioblah_info_pane_t

0x2d25,	// (0x000738de) main_radioblah_rocker_ctrl_pane_g1

0xc91a,	// (0x0007d4d3) main_radioblah_rocker_ctrl_pane_g2

0xc922,	// (0x0007d4db) main_radioblah_rocker_ctrl_pane_g3

0xc92a,	// (0x0007d4e3) main_radioblah_rocker_ctrl_pane_g4

0xc932,	// (0x0007d4eb) main_radioblah_rocker_ctrl_pane_g5

0xc93a,	// (0x0007d4f3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcd2,	// (0x0008088b) main_radioblah_rocker_ctrl_pane_g

0xc44b,	// (0x0007d004) main_cset_text2_pane_t1_copy1_ParamLimits

0xad3a,	// (0x0007b8f3) cam4_image_uncrop_qvga_pane

0xae5c,	// (0x0007ba15) vid4_image_uncrop_qcif_pane

0xc0c0,	// (0x0007cc79) cam6_image_uncrop_qvga_pane_ParamLimits

0xc0c0,	// (0x0007cc79) cam6_image_uncrop_qvga_pane

0x3ecd,	// (0x00074a86) vid6_image_uncrop_qcif_pane_ParamLimits

0x3ecd,	// (0x00074a86) vid6_image_uncrop_qcif_pane

0x0f6c,	// (0x00071b25) bg_popup_preview_window_pane_cp03

0x424d,	// (0x00074e06) list_cset_text2_pane

0x4255,	// (0x00074e0e) main_cset6_text2_pane_g1

0x425d,	// (0x00074e16) main_cset6_text2_pane_t1

0xc942,	// (0x0007d4fb) list_cset_text2_pane_t1_ParamLimits

0xc942,	// (0x0007d4fb) list_cset_text2_pane_t1

0xed0f,	// (0x0007f8c8) main_radioblah_pane_ParamLimits

0xc6e8,	// (0x0007d2a1) main_mobtv_info_pane_t3_ParamLimits

0xc6e8,	// (0x0007d2a1) main_mobtv_info_pane_t3

0xc81b,	// (0x0007d3d4) main_radioblah_pane_g1

0xc846,	// (0x0007d3ff) main_radioblah_info_pane_g1

0xc8c1,	// (0x0007d47a) main_radioblah_info_pane_t3_ParamLimits

0xc8c1,	// (0x0007d47a) main_radioblah_info_pane_t3

0x7fa5,	// (0x00078b5e) highlight_cell_cale_month_pane_ParamLimits

0x7fa5,	// (0x00078b5e) highlight_cell_cale_month_pane

0x0f6c,	// (0x00071b25) main_phob_fisheye_pane

0x3056,	// (0x00073c0f) scroll_pane_cp0031_ParamLimits

0x3056,	// (0x00073c0f) scroll_pane_cp0031

0x3fd7,	// (0x00074b90) wait_bar_pane_cp08_ParamLimits

0xc28a,	// (0x0007ce43) cset_list_set_pane_copy1_ParamLimits

0x47a0,	// (0x00075359) highlight_cell_cale_month_pane_g1

0xc959,	// (0x0007d512) highlight_cell_cale_month_pane_t1

0x47a8,	// (0x00075361) list_gen_pane_cp01

0x37f5,	// (0x000743ae) scroll_pane_01

0x5785,	// (0x0007633e) list_single_double_fisheye_pane

0xc967,	// (0x0007d520) list_double_fisheye_pane_g1_ParamLimits

0xc967,	// (0x0007d520) list_double_fisheye_pane_g1

0xc973,	// (0x0007d52c) list_double_fisheye_pane_g2_ParamLimits

0xc973,	// (0x0007d52c) list_double_fisheye_pane_g2

0xc987,	// (0x0007d540) list_double_fisheye_pane_g3_ParamLimits

0xc987,	// (0x0007d540) list_double_fisheye_pane_g3

0x0004,

0xfcdf,	// (0x00080898) list_double_fisheye_pane_g_ParamLimits

0xfcdf,	// (0x00080898) list_double_fisheye_pane_g

0xc9b0,	// (0x0007d569) list_double_fisheye_pane_t1_ParamLimits

0xc9b0,	// (0x0007d569) list_double_fisheye_pane_t1

0xc9cb,	// (0x0007d584) list_double_fisheye_pane_t2_ParamLimits

0xc9cb,	// (0x0007d584) list_double_fisheye_pane_t2

0x0001,

0xfcea,	// (0x000808a3) list_double_fisheye_pane_t_ParamLimits

0xfcea,	// (0x000808a3) list_double_fisheye_pane_t

0x0f6c,	// (0x00071b25) main_call5_pane

0xc7a5,	// (0x0007d35e) sc_swipe_pane_ParamLimits

0xc7a5,	// (0x0007d35e) sc_swipe_pane

0xc9f9,	// (0x0007d5b2) call5_image_pane_ParamLimits

0xc9f9,	// (0x0007d5b2) call5_image_pane

0xca05,	// (0x0007d5be) call5_swipe_1_pane_ParamLimits

0xca05,	// (0x0007d5be) call5_swipe_1_pane

0xca11,	// (0x0007d5ca) call5_swipe_2_pane_ParamLimits

0xca11,	// (0x0007d5ca) call5_swipe_2_pane

0xca29,	// (0x0007d5e2) popup_call5_audio_first_window_ParamLimits

0xca29,	// (0x0007d5e2) popup_call5_audio_first_window

0x2f54,	// (0x00073b0d) call5_swipe_1_pane_g1_ParamLimits

0x2f54,	// (0x00073b0d) call5_swipe_1_pane_g1

0x47ba,	// (0x00075373) call5_swipe_1_pane_g2_ParamLimits

0x47ba,	// (0x00075373) call5_swipe_1_pane_g2

0x0001,

0xfcef,	// (0x000808a8) call5_swipe_1_pane_g_ParamLimits

0xfcef,	// (0x000808a8) call5_swipe_1_pane_g

0x47c6,	// (0x0007537f) call5_swipe_1_pane_t1_ParamLimits

0x47c6,	// (0x0007537f) call5_swipe_1_pane_t1

0x2f54,	// (0x00073b0d) call5_swipe_2_pane_g1_ParamLimits

0x2f54,	// (0x00073b0d) call5_swipe_2_pane_g1

0x47db,	// (0x00075394) call5_swipe_2_pane_g2_ParamLimits

0x47db,	// (0x00075394) call5_swipe_2_pane_g2

0x0001,

0xfcf4,	// (0x000808ad) call5_swipe_2_pane_g_ParamLimits

0xfcf4,	// (0x000808ad) call5_swipe_2_pane_g

0x47e7,	// (0x000753a0) call5_swipe_2_pane_t1_ParamLimits

0x47e7,	// (0x000753a0) call5_swipe_2_pane_t1

0x47fc,	// (0x000753b5) sc_swipe_pane_g1_ParamLimits

0x47fc,	// (0x000753b5) sc_swipe_pane_g1

0x4809,	// (0x000753c2) sc_swipe_pane_g2_ParamLimits

0x4809,	// (0x000753c2) sc_swipe_pane_g2

0x0001,

0xfcf9,	// (0x000808b2) sc_swipe_pane_g_ParamLimits

0xfcf9,	// (0x000808b2) sc_swipe_pane_g

0x4815,	// (0x000753ce) sc_swipe_pane_t1_ParamLimits

0x4815,	// (0x000753ce) sc_swipe_pane_t1

0x0f6c,	// (0x00071b25) main_cmail_launcher_pane

0xca35,	// (0x0007d5ee) aid_size_cell_cmail_l_ParamLimits

0xca35,	// (0x0007d5ee) aid_size_cell_cmail_l

0xca45,	// (0x0007d5fe) grid_cmail_l_pane_ParamLimits

0xca45,	// (0x0007d5fe) grid_cmail_l_pane

0xca51,	// (0x0007d60a) cell_cmail_l_pane_ParamLimits

0xca51,	// (0x0007d60a) cell_cmail_l_pane

0xca63,	// (0x0007d61c) cell_cmail_l_pane_g1_ParamLimits

0xca63,	// (0x0007d61c) cell_cmail_l_pane_g1

0xca73,	// (0x0007d62c) cell_cmail_l_pane_t1_ParamLimits

0xca73,	// (0x0007d62c) cell_cmail_l_pane_t1

0x482a,	// (0x000753e3) cell_cmail_l_pane_t2_ParamLimits

0x482a,	// (0x000753e3) cell_cmail_l_pane_t2

0x0001,

0xfcfe,	// (0x000808b7) cell_cmail_l_pane_t_ParamLimits

0xfcfe,	// (0x000808b7) cell_cmail_l_pane_t

0xed0f,	// (0x0007f8c8) grid_highlight_pane_cp018_ParamLimits

0xed0f,	// (0x0007f8c8) grid_highlight_pane_cp018

0x678a,	// (0x00077343) main2_pane_ParamLimits

0x678a,	// (0x00077343) main2_pane

0x1827,	// (0x000723e0) popup_sp_fs_action_menu_bg_pane_g1

0x182f,	// (0x000723e8) popup_sp_fs_action_menu_bg_pane_g2

0x1837,	// (0x000723f0) popup_sp_fs_action_menu_bg_pane_g3

0x183f,	// (0x000723f8) popup_sp_fs_action_menu_bg_pane_g4

0x1847,	// (0x00072400) popup_sp_fs_action_menu_bg_pane_g5

0x184f,	// (0x00072408) popup_sp_fs_action_menu_bg_pane_g6

0x1857,	// (0x00072410) popup_sp_fs_action_menu_bg_pane_g7

0x185f,	// (0x00072418) popup_sp_fs_action_menu_bg_pane_g8

0x1867,	// (0x00072420) popup_sp_fs_action_menu_bg_pane_g9

0x186f,	// (0x00072428) popup_sp_fs_action_menu_bg_pane_g10

0x186f,	// (0x00072428) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0007fd74) popup_sp_fs_action_menu_bg_pane_g

0x1a46,	// (0x000725ff) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_x2_t3_g3_g1

0x1a52,	// (0x0007260b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1a52,	// (0x0007260b) list_medium_line_x2_t3_g3_g2

0x1a5e,	// (0x00072617) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1a5e,	// (0x00072617) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0007fe24) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0007fe24) list_medium_line_x2_t3_g3_g

0x1a6a,	// (0x00072623) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1a6a,	// (0x00072623) list_medium_line_x2_t3_g3_t1

0x74e4,	// (0x0007809d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x74e4,	// (0x0007809d) list_medium_line_x2_t3_g3_t2

0x1a7f,	// (0x00072638) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1a7f,	// (0x00072638) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0007fe2b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0007fe2b) list_medium_line_x2_t3_g3_t

0x1a46,	// (0x000725ff) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_x2_t3_g2_g1

0x1a5e,	// (0x00072617) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1a5e,	// (0x00072617) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0007fe32) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0007fe32) list_medium_line_x2_t3_g2_g

0x1a94,	// (0x0007264d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1a94,	// (0x0007264d) list_medium_line_x2_t3_g2_t1

0x1aaa,	// (0x00072663) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1aaa,	// (0x00072663) list_medium_line_x2_t3_g2_t2

0x1a7f,	// (0x00072638) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1a7f,	// (0x00072638) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0007fe37) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0007fe37) list_medium_line_x2_t3_g2_t

0x1a46,	// (0x000725ff) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_x2_t4_g4_g1

0x1abc,	// (0x00072675) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1abc,	// (0x00072675) list_medium_line_x2_t4_g4_g2

0x1a52,	// (0x0007260b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1a52,	// (0x0007260b) list_medium_line_x2_t4_g4_g3

0x1ac8,	// (0x00072681) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1ac8,	// (0x00072681) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0007fe3e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0007fe3e) list_medium_line_x2_t4_g4_g

0x74f6,	// (0x000780af) list_medium_line_x2_t4_g4_t1_ParamLimits

0x74f6,	// (0x000780af) list_medium_line_x2_t4_g4_t1

0x750d,	// (0x000780c6) list_medium_line_x2_t4_g4_t2_ParamLimits

0x750d,	// (0x000780c6) list_medium_line_x2_t4_g4_t2

0x7522,	// (0x000780db) list_medium_line_x2_t4_g4_t3_ParamLimits

0x7522,	// (0x000780db) list_medium_line_x2_t4_g4_t3

0x1ad4,	// (0x0007268d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1ad4,	// (0x0007268d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0007fe47) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0007fe47) list_medium_line_x2_t4_g4_t

0x1a46,	// (0x000725ff) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_x2_t2_g4_g1

0x1abc,	// (0x00072675) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1abc,	// (0x00072675) list_medium_line_x2_t2_g4_g2

0x1a52,	// (0x0007260b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1a52,	// (0x0007260b) list_medium_line_x2_t2_g4_g3

0x1a5e,	// (0x00072617) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1a5e,	// (0x00072617) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0007feae) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0007feae) list_medium_line_x2_t2_g4_g

0x1dd4,	// (0x0007298d) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1dd4,	// (0x0007298d) list_medium_line_x2_t2_g4_t1

0x1a7f,	// (0x00072638) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1a7f,	// (0x00072638) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0007feb7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0007feb7) list_medium_line_x2_t2_g4_t

0x1a46,	// (0x000725ff) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_x2_t2_g3_g1

0x1a52,	// (0x0007260b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1a52,	// (0x0007260b) list_medium_line_x2_t2_g3_g2

0x1a5e,	// (0x00072617) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1a5e,	// (0x00072617) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0007fe24) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0007fe24) list_medium_line_x2_t2_g3_g

0x1de9,	// (0x000729a2) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1de9,	// (0x000729a2) list_medium_line_x2_t2_g3_t1

0x1a7f,	// (0x00072638) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1a7f,	// (0x00072638) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0007febc) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0007febc) list_medium_line_x2_t2_g3_t

0x8115,	// (0x00078cce) main_sp_fs_list_pane_ParamLimits

0x8115,	// (0x00078cce) main_sp_fs_list_pane

0x8122,	// (0x00078cdb) sp_fs_scroll_pane_ParamLimits

0x8122,	// (0x00078cdb) sp_fs_scroll_pane

0x812f,	// (0x00078ce8) list_medium_line_x2_t3_t1

0x813f,	// (0x00078cf8) list_medium_line_x2_t3_t2

0x1fa5,	// (0x00072b5e) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0007ff07) list_medium_line_x2_t3_t

0x814d,	// (0x00078d06) list_medium_line_x3_t4_t1

0x815d,	// (0x00078d16) list_medium_line_x3_t4_t2

0x1fb3,	// (0x00072b6c) list_medium_line_x3_t4_t3

0x1fc1,	// (0x00072b7a) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0007ff0e) list_medium_line_x3_t4_t

0x816b,	// (0x00078d24) list_medium_line_x4_t5_t1

0x817b,	// (0x00078d34) list_medium_line_x4_t5_t2

0x1fb3,	// (0x00072b6c) list_medium_line_x4_t5_t3

0x1fcf,	// (0x00072b88) list_medium_line_x4_t5_t4

0x1fc1,	// (0x00072b7a) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0007ff17) list_medium_line_x4_t5_t

0x1a46,	// (0x000725ff) list_medium_line_t4_g4_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_t4_g4_g1

0x1ac8,	// (0x00072681) list_medium_line_t4_g4_g2_ParamLimits

0x1ac8,	// (0x00072681) list_medium_line_t4_g4_g2

0x1fdd,	// (0x00072b96) list_medium_line_t4_g4_g3_ParamLimits

0x1fdd,	// (0x00072b96) list_medium_line_t4_g4_g3

0x1a5e,	// (0x00072617) list_medium_line_t4_g4_g4_ParamLimits

0x1a5e,	// (0x00072617) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0007ff22) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0007ff22) list_medium_line_t4_g4_g

0x1fe9,	// (0x00072ba2) list_medium_line_t4_g4_t1_ParamLimits

0x1fe9,	// (0x00072ba2) list_medium_line_t4_g4_t1

0x1ffe,	// (0x00072bb7) list_medium_line_t4_g4_t2_ParamLimits

0x1ffe,	// (0x00072bb7) list_medium_line_t4_g4_t2

0x2014,	// (0x00072bcd) list_medium_line_t4_g4_t3_ParamLimits

0x2014,	// (0x00072bcd) list_medium_line_t4_g4_t3

0x202a,	// (0x00072be3) list_medium_line_t4_g4_t4_ParamLimits

0x202a,	// (0x00072be3) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0007ff2b) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0007ff2b) list_medium_line_t4_g4_t

0x830c,	// (0x00078ec5) chi_dic_find_pane_g1

0x90a9,	// (0x00079c62) main_tport_pane

0x3936,	// (0x000744ef) list_medium_line_plain_t1

0x1a46,	// (0x000725ff) list_medium_line_t2_g2_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_t2_g2_g1

0x1a52,	// (0x0007260b) list_medium_line_t2_g2_g2_ParamLimits

0x1a52,	// (0x0007260b) list_medium_line_t2_g2_g2

0x0001,

0xfa41,	// (0x000805fa) list_medium_line_t2_g2_g_ParamLimits

0xfa41,	// (0x000805fa) list_medium_line_t2_g2_g

0xb822,	// (0x0007c3db) list_medium_line_t2_g2_t1_ParamLimits

0xb822,	// (0x0007c3db) list_medium_line_t2_g2_t1

0xb839,	// (0x0007c3f2) list_medium_line_t2_g2_t2_ParamLimits

0xb839,	// (0x0007c3f2) list_medium_line_t2_g2_t2

0x0001,

0xfa46,	// (0x000805ff) list_medium_line_t2_g2_t_ParamLimits

0xfa46,	// (0x000805ff) list_medium_line_t2_g2_t

0x3c5d,	// (0x00074816) aid_sp_fs_list_icon_a_sm

0x5768,	// (0x00076321) aid_sp_fs_list_icon_d

0x3c65,	// (0x0007481e) aid_sp_fs_text_primary

0x3c6e,	// (0x00074827) aid_sp_fs_text_secondary

0x5770,	// (0x00076329) list_medium_line

0x5770,	// (0x00076329) list_medium_line_g2

0x5770,	// (0x00076329) list_medium_line_g3

0x5770,	// (0x00076329) list_medium_line_plain

0x5770,	// (0x00076329) list_medium_line_plain_t2

0x5770,	// (0x00076329) list_medium_line_plain_t3

0x5770,	// (0x00076329) list_medium_line_right_icon

0x5770,	// (0x00076329) list_medium_line_right_iconx2

0x5770,	// (0x00076329) list_medium_line_t2

0x5770,	// (0x00076329) list_medium_line_t2_g2

0x5770,	// (0x00076329) list_medium_line_t2_g3

0x5770,	// (0x00076329) list_medium_line_t2_right_icon

0x5770,	// (0x00076329) list_medium_line_t2_right_iconx2

0x5770,	// (0x00076329) list_medium_line_t3

0x5770,	// (0x00076329) list_medium_line_t3_g2

0x5770,	// (0x00076329) list_medium_line_t3_g3

0x5770,	// (0x00076329) list_medium_line_t3_right_iconx2

0x3c77,	// (0x00074830) list_medium_line_t4_g4

0x3c80,	// (0x00074839) list_medium_line_x2

0x3c80,	// (0x00074839) list_medium_line_x2_t2_g2

0x3c80,	// (0x00074839) list_medium_line_x2_t2_g3

0x3c80,	// (0x00074839) list_medium_line_x2_t2_g4

0x3c80,	// (0x00074839) list_medium_line_x2_t3

0x3c80,	// (0x00074839) list_medium_line_x2_t3_g2

0x3c80,	// (0x00074839) list_medium_line_x2_t3_g3

0x3c80,	// (0x00074839) list_medium_line_x2_t3_g4

0x3c80,	// (0x00074839) list_medium_line_x2_t4_g2

0x3c80,	// (0x00074839) list_medium_line_x2_t4_g4

0x3c89,	// (0x00074842) list_medium_line_x3

0x3c89,	// (0x00074842) list_medium_line_x3_t4

0x3c89,	// (0x00074842) list_medium_line_x3_t4_g4

0x3c77,	// (0x00074830) list_medium_line_x4_t4

0x3c77,	// (0x00074830) list_medium_line_x4_t4_g7

0x3c77,	// (0x00074830) list_medium_line_x4_t5

0x3c92,	// (0x0007484b) list_single_fs_dyc_pane_ParamLimits

0x3c92,	// (0x0007484b) list_single_fs_dyc_pane

0x1a46,	// (0x000725ff) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_x4_t4_g7_g1

0x4182,	// (0x00074d3b) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4182,	// (0x00074d3b) list_medium_line_x4_t4_g7_g2

0x418e,	// (0x00074d47) list_medium_line_x4_t4_g7_g3_ParamLimits

0x418e,	// (0x00074d47) list_medium_line_x4_t4_g7_g3

0x419d,	// (0x00074d56) list_medium_line_x4_t4_g7_g4_ParamLimits

0x419d,	// (0x00074d56) list_medium_line_x4_t4_g7_g4

0x41a9,	// (0x00074d62) list_medium_line_x4_t4_g7_g5_ParamLimits

0x41a9,	// (0x00074d62) list_medium_line_x4_t4_g7_g5

0x41b8,	// (0x00074d71) list_medium_line_x4_t4_g7_g6_ParamLimits

0x41b8,	// (0x00074d71) list_medium_line_x4_t4_g7_g6

0x41c7,	// (0x00074d80) list_medium_line_x4_t4_g7_g7_ParamLimits

0x41c7,	// (0x00074d80) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc0b,	// (0x000807c4) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc0b,	// (0x000807c4) list_medium_line_x4_t4_g7_g

0x41d3,	// (0x00074d8c) list_medium_line_x4_t4_g7_t1_ParamLimits

0x41d3,	// (0x00074d8c) list_medium_line_x4_t4_g7_t1

0x41e8,	// (0x00074da1) list_medium_line_x4_t4_g7_t2_ParamLimits

0x41e8,	// (0x00074da1) list_medium_line_x4_t4_g7_t2

0x41fd,	// (0x00074db6) list_medium_line_x4_t4_g7_t3_ParamLimits

0x41fd,	// (0x00074db6) list_medium_line_x4_t4_g7_t3

0x4212,	// (0x00074dcb) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4212,	// (0x00074dcb) list_medium_line_x4_t4_g7_t4

0x4224,	// (0x00074ddd) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4224,	// (0x00074ddd) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc1a,	// (0x000807d3) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc1a,	// (0x000807d3) list_medium_line_x4_t4_g7_t

0x4236,	// (0x00074def) list_single_dyc_row_pane_ParamLimits

0x4236,	// (0x00074def) list_single_dyc_row_pane

0xc9ed,	// (0x0007d5a6) call5_gesture_pane_ParamLimits

0xc9ed,	// (0x0007d5a6) call5_gesture_pane

0xca1d,	// (0x0007d5d6) call5_windows_pane_ParamLimits

0xca1d,	// (0x0007d5d6) call5_windows_pane

0xca89,	// (0x0007d642) call5_swipe_1_pane_cp_ParamLimits

0xca89,	// (0x0007d642) call5_swipe_1_pane_cp

0xca95,	// (0x0007d64e) call5_swipe_2_pane_cp_ParamLimits

0xca95,	// (0x0007d64e) call5_swipe_2_pane_cp

0xe19a,	// (0x0007ed53) call5_image_pane_cp

0xcaa1,	// (0x0007d65a) popup_call5_audio_first_window_cp_ParamLimits

0xcaa1,	// (0x0007d65a) popup_call5_audio_first_window_cp

0x47fc,	// (0x000753b5) call5_swipe_1_pane_g1_cp_ParamLimits

0x47fc,	// (0x000753b5) call5_swipe_1_pane_g1_cp

0x483c,	// (0x000753f5) call5_swipe_1_pane_g2_cp

0x4815,	// (0x000753ce) call5_swipe_1_pane_t1_cp_ParamLimits

0x4815,	// (0x000753ce) call5_swipe_1_pane_t1_cp

0x47fc,	// (0x000753b5) call5_swipe_2_pane_g1_cp_ParamLimits

0x47fc,	// (0x000753b5) call5_swipe_2_pane_g1_cp

0x4844,	// (0x000753fd) call5_swipe_2_pane_g2_cp

0x484c,	// (0x00075405) call5_swipe_2_pane_t1_cp_ParamLimits

0x484c,	// (0x00075405) call5_swipe_2_pane_t1_cp

0xed0f,	// (0x0007f8c8) main_sp_fs_email_pane

0x4861,	// (0x0007541a) main_sp_fs_listscroll_pane_te

0xcaad,	// (0x0007d666) popup_sp_fs_action_menu_pane_ParamLimits

0xcaad,	// (0x0007d666) popup_sp_fs_action_menu_pane

0x2d25,	// (0x000738de) bg_sp_fs_ctrlbar_pane_g1

0x486a,	// (0x00075423) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x4873,	// (0x0007542c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x487c,	// (0x00075435) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2d25,	// (0x000738de) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd03,	// (0x000808bc) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2b12,	// (0x000736cb) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2b12,	// (0x000736cb) bg_sp_fs_ctrlbar_ddmenu_pane

0x4885,	// (0x0007543e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x4885,	// (0x0007543e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xed3d,	// (0x0007f8f6) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xed3d,	// (0x0007f8f6) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd0c,	// (0x000808c5) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd0c,	// (0x000808c5) main_sp_fs_ctrlbar_ddmenu_pane_g

0x4891,	// (0x0007544a) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x4891,	// (0x0007544a) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x48ab,	// (0x00075464) list_medium_line_t2_right_icon_g1

0xcadd,	// (0x0007d696) list_medium_line_t2_right_icon_t1

0xcaec,	// (0x0007d6a5) list_medium_line_t2_right_icon_t2

0x0001,

0xfd11,	// (0x000808ca) list_medium_line_t2_right_icon_t

0x28ea,	// (0x000734a3) bg_sp_fs_ctrlbar_pane_ParamLimits

0x28ea,	// (0x000734a3) bg_sp_fs_ctrlbar_pane

0xcb4f,	// (0x0007d708) main_sp_fs_ctrlbar_button_pane_cp01

0xcb57,	// (0x0007d710) main_sp_fs_ctrlbar_ddmenu_pane

0x48fb,	// (0x000754b4) main_sp_fs_ctrlbar_pane_g1

0x4907,	// (0x000754c0) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd16,	// (0x000808cf) main_sp_fs_ctrlbar_pane_g

0x4913,	// (0x000754cc) main_sp_fs_ctrlbar_pane_t1

0xcb61,	// (0x0007d71a) main_sp_fs_ctrlbar_pane

0xcb79,	// (0x0007d732) main_sp_fs_listscroll_pane_te_cp01

0xcb8a,	// (0x0007d743) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xcb8a,	// (0x0007d743) popup_sp_fs_action_menu_pane_cp01

0xed0f,	// (0x0007f8c8) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xed0f,	// (0x0007f8c8) bg_sp_fs_highlight_list_pane_cp01

0xcbac,	// (0x0007d765) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xcbac,	// (0x0007d765) sp_fs_action_menu_list_gene_pane_g1

0x4928,	// (0x000754e1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x4928,	// (0x000754e1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd1b,	// (0x000808d4) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd1b,	// (0x000808d4) sp_fs_action_menu_list_gene_pane_g

0xcbbb,	// (0x0007d774) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xcbbb,	// (0x0007d774) sp_fs_action_menu_list_gene_pane_t1

0xcbd3,	// (0x0007d78c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcbd3,	// (0x0007d78c) sp_fs_action_menu_list_gene_pane

0x4935,	// (0x000754ee) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x4935,	// (0x000754ee) popup_sp_fs_action_menu_bg_pane

0xcbf0,	// (0x0007d7a9) sp_fs_action_menu_list_pane_ParamLimits

0xcbf0,	// (0x0007d7a9) sp_fs_action_menu_list_pane

0x4943,	// (0x000754fc) sp_fs_scroll_pane_cp01_ParamLimits

0x4943,	// (0x000754fc) sp_fs_scroll_pane_cp01

0xcc0c,	// (0x0007d7c5) list_medium_line_plain_t2_t1

0xcc1b,	// (0x0007d7d4) list_medium_line_plain_t2_t2

0x0001,

0xfd20,	// (0x000808d9) list_medium_line_plain_t2_t

0xcc29,	// (0x0007d7e2) list_medium_line_plain_t3_t1

0xcc39,	// (0x0007d7f2) list_medium_line_plain_t3_t2

0xcc47,	// (0x0007d800) list_medium_line_plain_t3_t3

0x0002,

0xfd25,	// (0x000808de) list_medium_line_plain_t3_t

0x1a46,	// (0x000725ff) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_x2_t2_g2_g1

0x1a5e,	// (0x00072617) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1a5e,	// (0x00072617) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0007fe32) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0007fe32) list_medium_line_x2_t2_g2_g

0x1fe9,	// (0x00072ba2) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1fe9,	// (0x00072ba2) list_medium_line_x2_t2_g2_t1

0x1a7f,	// (0x00072638) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1a7f,	// (0x00072638) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd2c,	// (0x000808e5) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd2c,	// (0x000808e5) list_medium_line_x2_t2_g2_t

0x1a46,	// (0x000725ff) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_x2_t4_g2_g1

0x4969,	// (0x00075522) list_medium_line_x2_t4_g2_g2_ParamLimits

0x4969,	// (0x00075522) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd31,	// (0x000808ea) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd31,	// (0x000808ea) list_medium_line_x2_t4_g2_g

0xcc55,	// (0x0007d80e) list_medium_line_x2_t4_g2_t1_ParamLimits

0xcc55,	// (0x0007d80e) list_medium_line_x2_t4_g2_t1

0xcc6c,	// (0x0007d825) list_medium_line_x2_t4_g2_t2_ParamLimits

0xcc6c,	// (0x0007d825) list_medium_line_x2_t4_g2_t2

0xcc81,	// (0x0007d83a) list_medium_line_x2_t4_g2_t3_ParamLimits

0xcc81,	// (0x0007d83a) list_medium_line_x2_t4_g2_t3

0x1a7f,	// (0x00072638) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1a7f,	// (0x00072638) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd36,	// (0x000808ef) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd36,	// (0x000808ef) list_medium_line_x2_t4_g2_t

0x497b,	// (0x00075534) list_medium_line_t3_right_iconx2_g1

0x48ab,	// (0x00075464) list_medium_line_t3_right_iconx2_g2

0xcc93,	// (0x0007d84c) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd3f,	// (0x000808f8) list_medium_line_t3_right_iconx2_g

0x48b3,	// (0x0007546c) list_medium_line_t3_right_iconx2_t1

0xcc9b,	// (0x0007d854) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd46,	// (0x000808ff) list_medium_line_t3_right_iconx2_t

0x1a46,	// (0x000725ff) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_x3_t4_g4_g1

0x1a52,	// (0x0007260b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1a52,	// (0x0007260b) list_medium_line_x3_t4_g4_g2

0x1ac8,	// (0x00072681) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1ac8,	// (0x00072681) list_medium_line_x3_t4_g4_g3

0x4983,	// (0x0007553c) list_medium_line_x3_t4_g4_g4_ParamLimits

0x4983,	// (0x0007553c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd4b,	// (0x00080904) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd4b,	// (0x00080904) list_medium_line_x3_t4_g4_g

0xb822,	// (0x0007c3db) list_medium_line_x3_t4_g4_t1_ParamLimits

0xb822,	// (0x0007c3db) list_medium_line_x3_t4_g4_t1

0xb839,	// (0x0007c3f2) list_medium_line_x3_t4_g4_t2_ParamLimits

0xb839,	// (0x0007c3f2) list_medium_line_x3_t4_g4_t2

0x498f,	// (0x00075548) list_medium_line_x3_t4_g4_t3_ParamLimits

0x498f,	// (0x00075548) list_medium_line_x3_t4_g4_t3

0x49a4,	// (0x0007555d) list_medium_line_x3_t4_g4_t4_ParamLimits

0x49a4,	// (0x0007555d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd54,	// (0x0008090d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd54,	// (0x0008090d) list_medium_line_x3_t4_g4_t

0xcca9,	// (0x0007d862) list_single_dyc_row_text_pane_t1_ParamLimits

0xcca9,	// (0x0007d862) list_single_dyc_row_text_pane_t1

0xcce0,	// (0x0007d899) list_single_dyc_row_text_pane_t2_ParamLimits

0xcce0,	// (0x0007d899) list_single_dyc_row_text_pane_t2

0x49c1,	// (0x0007557a) list_single_dyc_row_text_pane_t3_ParamLimits

0x49c1,	// (0x0007557a) list_single_dyc_row_text_pane_t3

0x0002,

0xfd5d,	// (0x00080916) list_single_dyc_row_text_pane_t_ParamLimits

0xfd5d,	// (0x00080916) list_single_dyc_row_text_pane_t

0x49d3,	// (0x0007558c) list_single_dyc_row_pane_g1_ParamLimits

0x49d3,	// (0x0007558c) list_single_dyc_row_pane_g1

0x49df,	// (0x00075598) list_single_dyc_row_pane_g2_ParamLimits

0x49df,	// (0x00075598) list_single_dyc_row_pane_g2

0x49eb,	// (0x000755a4) list_single_dyc_row_pane_g3_ParamLimits

0x49eb,	// (0x000755a4) list_single_dyc_row_pane_g3

0x49f7,	// (0x000755b0) list_single_dyc_row_pane_g4_ParamLimits

0x49f7,	// (0x000755b0) list_single_dyc_row_pane_g4

0x0003,

0xfd64,	// (0x0008091d) list_single_dyc_row_pane_g_ParamLimits

0xfd64,	// (0x0008091d) list_single_dyc_row_pane_g

0x4a03,	// (0x000755bc) list_single_dyc_row_text_pane_ParamLimits

0x4a03,	// (0x000755bc) list_single_dyc_row_text_pane

0x0f6c,	// (0x00071b25) bg_sp_fs_scroll_pane

0x4a22,	// (0x000755db) thumb_sp_fs_scroll_pane

0x1a46,	// (0x000725ff) list_medium_line_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_g1

0x1fe9,	// (0x00072ba2) list_medium_line_t1_ParamLimits

0x1fe9,	// (0x00072ba2) list_medium_line_t1

0x1a46,	// (0x000725ff) list_medium_line_x2_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_x2_g1

0x1a52,	// (0x0007260b) list_medium_line_x2_g2_ParamLimits

0x1a52,	// (0x0007260b) list_medium_line_x2_g2

0x0001,

0xfa41,	// (0x000805fa) list_medium_line_x2_g_ParamLimits

0xfa41,	// (0x000805fa) list_medium_line_x2_g

0x4a2b,	// (0x000755e4) list_medium_line_x2_t1_ParamLimits

0x4a2b,	// (0x000755e4) list_medium_line_x2_t1

0x1a46,	// (0x000725ff) list_medium_line_x3_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_x3_g1

0x1a52,	// (0x0007260b) list_medium_line_x3_g2_ParamLimits

0x1a52,	// (0x0007260b) list_medium_line_x3_g2

0x0001,

0xfa41,	// (0x000805fa) list_medium_line_x3_g_ParamLimits

0xfa41,	// (0x000805fa) list_medium_line_x3_g

0x4a2b,	// (0x000755e4) list_medium_line_x3_t1_ParamLimits

0x4a2b,	// (0x000755e4) list_medium_line_x3_t1

0x4a41,	// (0x000755fa) thumb_sp_fs_scroll_pane_g1

0x4a4a,	// (0x00075603) thumb_sp_fs_scroll_pane_g2

0x4a53,	// (0x0007560c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd6d,	// (0x00080926) thumb_sp_fs_scroll_pane_g

0x4a41,	// (0x000755fa) bg_sp_fs_scroll_pane_g1

0x4a4a,	// (0x00075603) bg_sp_fs_scroll_pane_g2

0x4a53,	// (0x0007560c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd6d,	// (0x00080926) bg_sp_fs_scroll_pane_g

0x1a46,	// (0x000725ff) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_x2_t3_g4_g1

0x1abc,	// (0x00072675) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1abc,	// (0x00072675) list_medium_line_x2_t3_g4_g2

0x1a52,	// (0x0007260b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1a52,	// (0x0007260b) list_medium_line_x2_t3_g4_g3

0x1a5e,	// (0x00072617) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1a5e,	// (0x00072617) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0007feae) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0007feae) list_medium_line_x2_t3_g4_g

0xcd37,	// (0x0007d8f0) list_medium_line_x2_t3_g4_t1_ParamLimits

0xcd37,	// (0x0007d8f0) list_medium_line_x2_t3_g4_t1

0xcd4d,	// (0x0007d906) list_medium_line_x2_t3_g4_t2_ParamLimits

0xcd4d,	// (0x0007d906) list_medium_line_x2_t3_g4_t2

0x1a7f,	// (0x00072638) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1a7f,	// (0x00072638) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd74,	// (0x0008092d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd74,	// (0x0008092d) list_medium_line_x2_t3_g4_t

0x1a46,	// (0x000725ff) list_medium_line_g2_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_g2_g1

0x1a52,	// (0x0007260b) list_medium_line_g2_g2_ParamLimits

0x1a52,	// (0x0007260b) list_medium_line_g2_g2

0x0001,

0xfa41,	// (0x000805fa) list_medium_line_g2_g_ParamLimits

0xfa41,	// (0x000805fa) list_medium_line_g2_g

0x1de9,	// (0x000729a2) list_medium_line_g2_t1_ParamLimits

0x1de9,	// (0x000729a2) list_medium_line_g2_t1

0x1a46,	// (0x000725ff) list_medium_line_t3_g2_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_t3_g2_g1

0x1a52,	// (0x0007260b) list_medium_line_t3_g2_g2_ParamLimits

0x1a52,	// (0x0007260b) list_medium_line_t3_g2_g2

0x0001,

0xfa41,	// (0x000805fa) list_medium_line_t3_g2_g_ParamLimits

0xfa41,	// (0x000805fa) list_medium_line_t3_g2_g

0x4a6a,	// (0x00075623) list_medium_line_t3_g2_t1_ParamLimits

0x4a6a,	// (0x00075623) list_medium_line_t3_g2_t1

0xcd66,	// (0x0007d91f) list_medium_line_t3_g2_t2_ParamLimits

0xcd66,	// (0x0007d91f) list_medium_line_t3_g2_t2

0xcd7b,	// (0x0007d934) list_medium_line_t3_g2_t3_ParamLimits

0xcd7b,	// (0x0007d934) list_medium_line_t3_g2_t3

0x0002,

0xfd7b,	// (0x00080934) list_medium_line_t3_g2_t_ParamLimits

0xfd7b,	// (0x00080934) list_medium_line_t3_g2_t

0x48ab,	// (0x00075464) list_medium_line_right_icon_g1

0x4a5c,	// (0x00075615) list_medium_line_right_icon_t1

0x1a46,	// (0x000725ff) list_medium_line_t2_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_t2_g1

0xcd91,	// (0x0007d94a) list_medium_line_t2_t1_ParamLimits

0xcd91,	// (0x0007d94a) list_medium_line_t2_t1

0xcdab,	// (0x0007d964) list_medium_line_t2_t2_ParamLimits

0xcdab,	// (0x0007d964) list_medium_line_t2_t2

0x0001,

0xfd82,	// (0x0008093b) list_medium_line_t2_t_ParamLimits

0xfd82,	// (0x0008093b) list_medium_line_t2_t

0x1a46,	// (0x000725ff) list_medium_line_t3_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_t3_g1

0xcc55,	// (0x0007d80e) list_medium_line_t3_t1_ParamLimits

0xcc55,	// (0x0007d80e) list_medium_line_t3_t1

0xcc6c,	// (0x0007d825) list_medium_line_t3_t2_ParamLimits

0xcc6c,	// (0x0007d825) list_medium_line_t3_t2

0xcc81,	// (0x0007d83a) list_medium_line_t3_t3_ParamLimits

0xcc81,	// (0x0007d83a) list_medium_line_t3_t3

0x0002,

0xfd87,	// (0x00080940) list_medium_line_t3_t_ParamLimits

0xfd87,	// (0x00080940) list_medium_line_t3_t

0x1a46,	// (0x000725ff) list_medium_line_g3_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_g3_g1

0x1abc,	// (0x00072675) list_medium_line_g3_g2_ParamLimits

0x1abc,	// (0x00072675) list_medium_line_g3_g2

0x1a52,	// (0x0007260b) list_medium_line_g3_g3_ParamLimits

0x1a52,	// (0x0007260b) list_medium_line_g3_g3

0x0002,

0xfd8e,	// (0x00080947) list_medium_line_g3_g_ParamLimits

0xfd8e,	// (0x00080947) list_medium_line_g3_g

0x1dd4,	// (0x0007298d) list_medium_line_g3_t1_ParamLimits

0x1dd4,	// (0x0007298d) list_medium_line_g3_t1

0x1a46,	// (0x000725ff) list_medium_line_t2_g3_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_t2_g3_g1

0x1abc,	// (0x00072675) list_medium_line_t2_g3_g2_ParamLimits

0x1abc,	// (0x00072675) list_medium_line_t2_g3_g2

0x1a52,	// (0x0007260b) list_medium_line_t2_g3_g3_ParamLimits

0x1a52,	// (0x0007260b) list_medium_line_t2_g3_g3

0x0002,

0xfd8e,	// (0x00080947) list_medium_line_t2_g3_g_ParamLimits

0xfd8e,	// (0x00080947) list_medium_line_t2_g3_g

0xcdc0,	// (0x0007d979) list_medium_line_t2_g3_t1_ParamLimits

0xcdc0,	// (0x0007d979) list_medium_line_t2_g3_t1

0xcdd7,	// (0x0007d990) list_medium_line_t2_g3_t2_ParamLimits

0xcdd7,	// (0x0007d990) list_medium_line_t2_g3_t2

0x0001,

0xfd95,	// (0x0008094e) list_medium_line_t2_g3_t_ParamLimits

0xfd95,	// (0x0008094e) list_medium_line_t2_g3_t

0x1a46,	// (0x000725ff) list_medium_line_t3_g3_g1_ParamLimits

0x1a46,	// (0x000725ff) list_medium_line_t3_g3_g1

0x1abc,	// (0x00072675) list_medium_line_t3_g3_g2_ParamLimits

0x1abc,	// (0x00072675) list_medium_line_t3_g3_g2

0x1a52,	// (0x0007260b) list_medium_line_t3_g3_g3_ParamLimits

0x1a52,	// (0x0007260b) list_medium_line_t3_g3_g3

0x0002,

0xfd8e,	// (0x00080947) list_medium_line_t3_g3_g_ParamLimits

0xfd8e,	// (0x00080947) list_medium_line_t3_g3_g

0xcdec,	// (0x0007d9a5) list_medium_line_t3_g3_t1_ParamLimits

0xcdec,	// (0x0007d9a5) list_medium_line_t3_g3_t1

0xce00,	// (0x0007d9b9) list_medium_line_t3_g3_t2_ParamLimits

0xce00,	// (0x0007d9b9) list_medium_line_t3_g3_t2

0xce12,	// (0x0007d9cb) list_medium_line_t3_g3_t3_ParamLimits

0xce12,	// (0x0007d9cb) list_medium_line_t3_g3_t3

0x0002,

0xfd9a,	// (0x00080953) list_medium_line_t3_g3_t_ParamLimits

0xfd9a,	// (0x00080953) list_medium_line_t3_g3_t

0x497b,	// (0x00075534) list_medium_line_right_iconx2_g1

0x48ab,	// (0x00075464) list_medium_line_right_iconx2_g2

0x0001,

0xfda1,	// (0x0008095a) list_medium_line_right_iconx2_g

0x4a84,	// (0x0007563d) list_medium_line_right_iconx2_t1

0x497b,	// (0x00075534) list_medium_line_t2_right_iconx2_g1

0x48ab,	// (0x00075464) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfda1,	// (0x0008095a) list_medium_line_t2_right_iconx2_g

0xce24,	// (0x0007d9dd) list_medium_line_t2_right_iconx2_t1

0xce34,	// (0x0007d9ed) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfda6,	// (0x0008095f) list_medium_line_t2_right_iconx2_t

0x3936,	// (0x000744ef) list_medium_line_x4_t4_t1

0xce42,	// (0x0007d9fb) list_medium_line_x4_t4_t2

0xce50,	// (0x0007da09) list_medium_line_x4_t4_t3

0xce5e,	// (0x0007da17) list_medium_line_x4_t4_t4

0x0003,

0xfdab,	// (0x00080964) list_medium_line_x4_t4_t

0xce91,	// (0x0007da4a) tport_appsw_pane_ParamLimits

0xce91,	// (0x0007da4a) tport_appsw_pane

0xce9d,	// (0x0007da56) tport_contact_pane_ParamLimits

0xce9d,	// (0x0007da56) tport_contact_pane

0xceab,	// (0x0007da64) tport_listscroll_pane_ParamLimits

0xceab,	// (0x0007da64) tport_listscroll_pane

0xceb9,	// (0x0007da72) cell_tport_appsw_pane_ParamLimits

0xceb9,	// (0x0007da72) cell_tport_appsw_pane

0x2fe5,	// (0x00073b9e) tport_appsw_pane_g1_ParamLimits

0x2fe5,	// (0x00073b9e) tport_appsw_pane_g1

0x4a92,	// (0x0007564b) tport_contact_pane_g1

0x4a9b,	// (0x00075654) tport_contact_pane_t1

0x4aa9,	// (0x00075662) tport_contact_pane_t2

0x0001,

0xfdb4,	// (0x0008096d) tport_contact_pane_t

0x4ab7,	// (0x00075670) list_tport_pane

0x1881,	// (0x0007243a) scroll_pane_cp_030

0x4ac8,	// (0x00075681) cell_tport_appsw_pane_g1

0x4ad8,	// (0x00075691) cell_tport_appsw_pane_t1

0x0f6c,	// (0x00071b25) grid_highlight_pane_cp019

0xcee0,	// (0x0007da99) list_tport_double_graphic_pane_ParamLimits

0xcee0,	// (0x0007da99) list_tport_double_graphic_pane

0xed0f,	// (0x0007f8c8) list_highlight_pane_cp023_ParamLimits

0xed0f,	// (0x0007f8c8) list_highlight_pane_cp023

0xceed,	// (0x0007daa6) list_tport_double_graphic_pane_g1_ParamLimits

0xceed,	// (0x0007daa6) list_tport_double_graphic_pane_g1

0xcefa,	// (0x0007dab3) list_tport_double_graphic_pane_t1_ParamLimits

0xcefa,	// (0x0007dab3) list_tport_double_graphic_pane_t1

0xcf0f,	// (0x0007dac8) list_tport_double_graphic_pane_t2_ParamLimits

0xcf0f,	// (0x0007dac8) list_tport_double_graphic_pane_t2

0x0001,

0xfdc0,	// (0x00080979) list_tport_double_graphic_pane_t_ParamLimits

0xfdc0,	// (0x00080979) list_tport_double_graphic_pane_t

0x0f6c,	// (0x00071b25) main_cale_note_pane

0xb067,	// (0x0007bc20) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb067,	// (0x0007bc20) cell_vitu2_function_top_wide_pane_cp01

0xc6fa,	// (0x0007d2b3) wait_bar_pane_cp05_ParamLimits

0x0f6c,	// (0x00071b25) listscroll_cmail_pane

0x4ae6,	// (0x0007569f) list_cmail_pane

0xcf21,	// (0x0007dada) list_cmail_body_pane

0xcf21,	// (0x0007dada) list_single_cmail_header_caption_pane

0xcf39,	// (0x0007daf2) list_single_cmail_header_detail_pane_ParamLimits

0xcf39,	// (0x0007daf2) list_single_cmail_header_detail_pane

0x4b02,	// (0x000756bb) list_single_cmail_header_caption_pane_t1

0xcf63,	// (0x0007db1c) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcf63,	// (0x0007db1c) list_single_cmail_header_detail_pane_g1

0xcf79,	// (0x0007db32) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcf79,	// (0x0007db32) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdc5,	// (0x0008097e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdc5,	// (0x0008097e) list_single_cmail_header_detail_pane_g

0x4b25,	// (0x000756de) list_single_cmail_header_detail_pane_t1_ParamLimits

0x4b25,	// (0x000756de) list_single_cmail_header_detail_pane_t1

0x4b57,	// (0x00075710) list_single_cmail_header_editor_pane_bg_ParamLimits

0x4b57,	// (0x00075710) list_single_cmail_header_editor_pane_bg

0x4b69,	// (0x00075722) list_cmail_body_pane_g1

0x4b72,	// (0x0007572b) list_cmail_body_pane_t1

0x36ef,	// (0x000742a8) list_single_cmail_header_editor_pane_bg_g1

0x1cf2,	// (0x000728ab) list_single_cmail_header_editor_pane_bg_g1_copy1

0x36ff,	// (0x000742b8) list_single_cmail_header_editor_pane_bg_g1_copy2

0x36f7,	// (0x000742b0) list_single_cmail_header_editor_pane_bg_g1_copy3

0x3944,	// (0x000744fd) list_single_cmail_header_editor_pane_bg_g1_copy4

0x371f,	// (0x000742d8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x370f,	// (0x000742c8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3717,	// (0x000742d0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1cd2,	// (0x0007288b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcfa9,	// (0x0007db62) calenote_gesture_pane_ParamLimits

0xcfa9,	// (0x0007db62) calenote_gesture_pane

0xcfc1,	// (0x0007db7a) calenote_window_pane_ParamLimits

0xcfc1,	// (0x0007db7a) calenote_window_pane

0xcfd9,	// (0x0007db92) popup_note_window_cp01

0xcfe2,	// (0x0007db9b) calenote_swipe_1_pane_ParamLimits

0xcfe2,	// (0x0007db9b) calenote_swipe_1_pane

0xca95,	// (0x0007d64e) calenote_swipe_2_pane_ParamLimits

0xca95,	// (0x0007d64e) calenote_swipe_2_pane

0x47fc,	// (0x000753b5) calenote_swipe_1_pane_g1_ParamLimits

0x47fc,	// (0x000753b5) calenote_swipe_1_pane_g1

0x4809,	// (0x000753c2) calenote_swipe_1_pane_g2_ParamLimits

0x4809,	// (0x000753c2) calenote_swipe_1_pane_g2

0x0001,

0xfcf9,	// (0x000808b2) calenote_swipe_1_pane_g_ParamLimits

0xfcf9,	// (0x000808b2) calenote_swipe_1_pane_g

0xcffe,	// (0x0007dbb7) calenote_swipe_1_pane_t1_ParamLimits

0xcffe,	// (0x0007dbb7) calenote_swipe_1_pane_t1

0x47fc,	// (0x000753b5) calenote_swipe_2_pane_g1_ParamLimits

0x47fc,	// (0x000753b5) calenote_swipe_2_pane_g1

0xd01d,	// (0x0007dbd6) calenote_swipe_2_pane_g2_ParamLimits

0xd01d,	// (0x0007dbd6) calenote_swipe_2_pane_g2

0x0001,

0xfdd1,	// (0x0008098a) calenote_swipe_2_pane_g_ParamLimits

0xfdd1,	// (0x0008098a) calenote_swipe_2_pane_g

0xd029,	// (0x0007dbe2) calenote_swipe_2_pane_t1_ParamLimits

0xd029,	// (0x0007dbe2) calenote_swipe_2_pane_t1

0x0f6c,	// (0x00071b25) main_mup_navstr_pane

0x9f10,	// (0x0007aac9) main_mup3_pane_t7_ParamLimits

0x9f10,	// (0x0007aac9) main_mup3_pane_t7

0xa89a,	// (0x0007b453) main_mp4_pane_g6_ParamLimits

0xa89a,	// (0x0007b453) main_mp4_pane_g6

0xabdc,	// (0x0007b795) main_image3_pane_t4_ParamLimits

0xabdc,	// (0x0007b795) main_image3_pane_t4

0xd050,	// (0x0007dc09) popup_navstr_preview_pane_ParamLimits

0xd050,	// (0x0007dc09) popup_navstr_preview_pane

0xd05c,	// (0x0007dc15) scroll_navstr_pane_ParamLimits

0xd05c,	// (0x0007dc15) scroll_navstr_pane

0x0f6c,	// (0x00071b25) bg_popup_preview_window_pane_cp04

0xd068,	// (0x0007dc21) popup_navstr_preview_pane_t1

0xd076,	// (0x0007dc2f) scroll_navstr_pane_g1_ParamLimits

0xd076,	// (0x0007dc2f) scroll_navstr_pane_g1

0xd083,	// (0x0007dc3c) scroll_navstr_pane_t1_ParamLimits

0xd083,	// (0x0007dc3c) scroll_navstr_pane_t1

0xcff5,	// (0x0007dbae) bg_button_pane_cp014

0xcff5,	// (0x0007dbae) bg_button_pane_cp030

0xc993,	// (0x0007d54c) list_double_fisheye_pane_g4_ParamLimits

0xc993,	// (0x0007d54c) list_double_fisheye_pane_g4

0xc99f,	// (0x0007d558) list_double_fisheye_pane_g5_ParamLimits

0xc99f,	// (0x0007d558) list_double_fisheye_pane_g5

0x4af6,	// (0x000756af) sp_fs_scroll_pane_cp03

0x48fb,	// (0x000754b4) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x4907,	// (0x000754c0) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd16,	// (0x000808cf) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x4913,	// (0x000754cc) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x4aee,	// (0x000756a7) sp_fs_scroll_pane_cp02

0x18db,	// (0x00072494) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x18db,	// (0x00072494) popup_sp_fs_calendar_preview_list_single_pane

0x0f6c,	// (0x00071b25) main_cam6_pano_pane

0xed0f,	// (0x0007f8c8) main_mup3_pane_ParamLimits

0x0f6c,	// (0x00071b25) main_phacti_pane

0xc5ed,	// (0x0007d1a6) bg_button_pane_cp11

0xc605,	// (0x0007d1be) main_mobtv_info_pane_g2_ParamLimits

0xc605,	// (0x0007d1be) main_mobtv_info_pane_g2

0x0001,

0xfc76,	// (0x0008082f) main_mobtv_info_pane_g_ParamLimits

0xfc76,	// (0x0008082f) main_mobtv_info_pane_g

0xc791,	// (0x0007d34a) sc_clock_pane_t5_ParamLimits

0xc791,	// (0x0007d34a) sc_clock_pane_t5

0xc81b,	// (0x0007d3d4) main_radioblah_pane_g1_ParamLimits

0x4736,	// (0x000752ef) main_radioblah_pane_t3_ParamLimits

0x4736,	// (0x000752ef) main_radioblah_pane_t3

0x474e,	// (0x00075307) main_radioblah_pane_t4_ParamLimits

0x474e,	// (0x00075307) main_radioblah_pane_t4

0xc839,	// (0x0007d3f2) main_radioblah_text_pane_ParamLimits

0xc839,	// (0x0007d3f2) main_radioblah_text_pane

0xc846,	// (0x0007d3ff) main_radioblah_info_pane_g1_ParamLimits

0xc8d3,	// (0x0007d48c) main_radioblah_info_pane_t4_ParamLimits

0xc8d3,	// (0x0007d48c) main_radioblah_info_pane_t4

0xed0f,	// (0x0007f8c8) main_sp_fs_calendar_pane

0xd095,	// (0x0007dc4e) main_phacti_pane_g1

0xd0a6,	// (0x0007dc5f) phacti_note_pane_ParamLimits

0xd0a6,	// (0x0007dc5f) phacti_note_pane

0xd0ba,	// (0x0007dc73) phacti_term_pane_ParamLimits

0xd0ba,	// (0x0007dc73) phacti_term_pane

0xd0cf,	// (0x0007dc88) phacti_note_pane_t1_ParamLimits

0xd0cf,	// (0x0007dc88) phacti_note_pane_t1

0x4b80,	// (0x00075739) phacti_term_pane_g1

0x4b88,	// (0x00075741) phacti_term_pane_t1_ParamLimits

0x4b88,	// (0x00075741) phacti_term_pane_t1

0xd0e6,	// (0x0007dc9f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd0ee,	// (0x0007dca7) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfddb,	// (0x00080994) popup_sp_fs_calendar_preview_list_single_pane_g

0xd0f6,	// (0x0007dcaf) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd0f6,	// (0x0007dcaf) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd10c,	// (0x0007dcc5) aid_popup_sp_fs_bg_corner_pane

0x2d25,	// (0x000738de) popup_sp_fs_calendar_preview_bg_pane_g1

0x0f6c,	// (0x00071b25) popup_sp_fs_calendar_preview_bg_pane

0xd114,	// (0x0007dccd) popup_sp_fs_calendar_preview_list_pane

0xed0f,	// (0x0007f8c8) bg_main_sp_fs_cale_pane_ParamLimits

0xed0f,	// (0x0007f8c8) bg_main_sp_fs_cale_pane

0x4bb2,	// (0x0007576b) listscroll_cale_mrui_pane_ParamLimits

0x4bb2,	// (0x0007576b) listscroll_cale_mrui_pane

0x375f,	// (0x00074318) listscroll_sp_fs_schedule_track_pane

0x4bc6,	// (0x0007577f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x4bc6,	// (0x0007577f) main_sp_fs_ctrlbar_pane_cp01

0xd143,	// (0x0007dcfc) main_sp_fs_ribbon_pane

0x4bd7,	// (0x00075790) popup_sp_fs_cale_preview_window

0xd14b,	// (0x0007dd04) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd14b,	// (0x0007dd04) list_single_sp_fs_schedule_track_pane

0x3658,	// (0x00074211) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3658,	// (0x00074211) bg_sp_fs_highlight_list_pane_cp03

0xd160,	// (0x0007dd19) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd160,	// (0x0007dd19) list_single_sp_fs_schedule_track_pane_g1

0xd16c,	// (0x0007dd25) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd16c,	// (0x0007dd25) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfde0,	// (0x00080999) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfde0,	// (0x00080999) list_single_sp_fs_schedule_track_pane_g

0xd178,	// (0x0007dd31) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd178,	// (0x0007dd31) list_single_sp_fs_schedule_track_pane_t1

0xd190,	// (0x0007dd49) sp_fs_schedule_track_pane_ParamLimits

0xd190,	// (0x0007dd49) sp_fs_schedule_track_pane

0xd1a0,	// (0x0007dd59) sp_fs_schedule_track_pane_g1

0xd1a8,	// (0x0007dd61) sp_fs_schedule_track_pane_g2

0xd1b0,	// (0x0007dd69) sp_fs_schedule_track_pane_g3

0xd1b8,	// (0x0007dd71) sp_fs_schedule_track_pane_g4

0xd1c0,	// (0x0007dd79) sp_fs_schedule_track_pane_g5

0x0004,

0xfde5,	// (0x0008099e) sp_fs_schedule_track_pane_g

0x36ef,	// (0x000742a8) bg_sp_fs_schedule_viewer_highlight_g1

0x1cf2,	// (0x000728ab) bg_sp_fs_schedule_viewer_highlight_g2

0x36f7,	// (0x000742b0) bg_sp_fs_schedule_viewer_highlight_g3

0x36ff,	// (0x000742b8) bg_sp_fs_schedule_viewer_highlight_g4

0x3944,	// (0x000744fd) bg_sp_fs_schedule_viewer_highlight_g5

0x370f,	// (0x000742c8) bg_sp_fs_schedule_viewer_highlight_g6

0x3717,	// (0x000742d0) bg_sp_fs_schedule_viewer_highlight_g7

0x371f,	// (0x000742d8) bg_sp_fs_schedule_viewer_highlight_g8

0x1cd2,	// (0x0007288b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdf0,	// (0x000809a9) bg_sp_fs_schedule_viewer_highlight_g

0x0f6c,	// (0x00071b25) bg_main_sp_fs_ribbon_pane

0xadc7,	// (0x0007b980) main_sp_fs_ribbon_pane_g1

0xd1c8,	// (0x0007dd81) main_sp_fs_ribbon_pane_t1

0xd1d7,	// (0x0007dd90) main_sp_fs_ribbon_pane_t2

0xd1e6,	// (0x0007dd9f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe03,	// (0x000809bc) main_sp_fs_ribbon_pane_t

0xd1f5,	// (0x0007ddae) main_sp_fs_ribbon_scheduler_pane

0xd1fd,	// (0x0007ddb6) bg_main_sp_fs_ribbon_pane_g1

0xd206,	// (0x0007ddbf) bg_main_sp_fs_ribbon_pane_g2

0xd20f,	// (0x0007ddc8) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe0a,	// (0x000809c3) bg_main_sp_fs_ribbon_pane_g

0xd217,	// (0x0007ddd0) main_sp_fs_ribbon_scheduler_pane_g1

0xd220,	// (0x0007ddd9) main_sp_fs_ribbon_scheduler_pane_g2

0xd229,	// (0x0007dde2) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe11,	// (0x000809ca) main_sp_fs_ribbon_scheduler_pane_g

0x47a8,	// (0x00075361) list_cale_mrui_pane

0xd232,	// (0x0007ddeb) sp_fs_scroll_pane_cp07_ParamLimits

0xd232,	// (0x0007ddeb) sp_fs_scroll_pane_cp07

0xd247,	// (0x0007de00) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd247,	// (0x0007de00) bg_sp_fs_schedule_viewer_highlight

0xd254,	// (0x0007de0d) list_single_sp_fs_schedule_track_pane_cp01

0xd25c,	// (0x0007de15) list_sp_fs_schedule_track_pane

0xd264,	// (0x0007de1d) sp_fs_scroll_pane_cp06_ParamLimits

0xd264,	// (0x0007de1d) sp_fs_scroll_pane_cp06

0x2d25,	// (0x000738de) bgmain_sp_fs_calendar_pane_g1

0xd276,	// (0x0007de2f) list_single_cale_mrui_pane_ParamLimits

0xd276,	// (0x0007de2f) list_single_cale_mrui_pane

0x4be9,	// (0x000757a2) list_single_cale_mrui_row_pane_ParamLimits

0x4be9,	// (0x000757a2) list_single_cale_mrui_row_pane

0x4bf6,	// (0x000757af) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4bf6,	// (0x000757af) list_single_cale_mrui_row_pane_g1

0x4c2e,	// (0x000757e7) list_single_cale_mrui_row_pane_t1_ParamLimits

0x4c2e,	// (0x000757e7) list_single_cale_mrui_row_pane_t1

0xd29b,	// (0x0007de54) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd29b,	// (0x0007de54) list_single_cale_mrui_row_pane_t2

0x4c40,	// (0x000757f9) list_single_cale_mrui_row_pane_t3_ParamLimits

0x4c40,	// (0x000757f9) list_single_cale_mrui_row_pane_t3

0x4c6f,	// (0x00075828) list_single_cale_mrui_row_pane_t4_ParamLimits

0x4c6f,	// (0x00075828) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe1d,	// (0x000809d6) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe1d,	// (0x000809d6) list_single_cale_mrui_row_pane_t

0xd301,	// (0x0007deba) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd301,	// (0x0007deba) list_single_cmail_header_editor_pane_bg_cp01

0xd325,	// (0x0007dede) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd325,	// (0x0007dede) list_single_cmail_header_editor_pane_bg_cp02

0xd343,	// (0x0007defc) main_radioblah_text_pane_t1_ParamLimits

0xd343,	// (0x0007defc) main_radioblah_text_pane_t1

0xd35c,	// (0x0007df15) cam6_indi_pane_cp01

0xd364,	// (0x0007df1d) cam6_mode_pane_cp01

0xd36c,	// (0x0007df25) cam6_pano_pane

0xd375,	// (0x0007df2e) cam6_zoom_pane_cp01

0xd37d,	// (0x0007df36) cam6_pano_image_pane

0xd386,	// (0x0007df3f) cam6_pano_pane_g1

0x44b4,	// (0x0007506d) cam6_pano_pane_g2

0xd38f,	// (0x0007df48) cam6_pano_pane_g3

0xd398,	// (0x0007df51) cam6_pano_pane_g4

0x3243,	// (0x00073dfc) cam6_pano_pane_g5

0xd3a1,	// (0x0007df5a) cam6_pano_pane_g6

0xd3a9,	// (0x0007df62) cam6_pano_pane_g7

0xd3b1,	// (0x0007df6a) cam6_pano_pane_g8

0xd3ba,	// (0x0007df73) cam6_pano_pane_g9

0x0008,

0xfe26,	// (0x000809df) cam6_pano_pane_g

0x0f6c,	// (0x00071b25) main_browser_tag_pane

0xd048,	// (0x0007dc01) grid_navstr_albumart_pane

0xd3c3,	// (0x0007df7c) cell_navstr_albumart_pane_ParamLimits

0xd3c3,	// (0x0007df7c) cell_navstr_albumart_pane

0xe2fb,	// (0x0007eeb4) cell_navstr_albumart_pane_g1

0x26c7,	// (0x00073280) cell_navstr_albumart_pane_g2

0x26d7,	// (0x00073290) cell_navstr_albumart_pane_g3

0x26cf,	// (0x00073288) cell_navstr_albumart_pane_g4

0x0003,

0xfe39,	// (0x000809f2) cell_navstr_albumart_pane_g

0xd3da,	// (0x0007df93) bt_list_pane_ParamLimits

0xd3da,	// (0x0007df93) bt_list_pane

0xd3ef,	// (0x0007dfa8) bt_list_pane_t1

0xd3fe,	// (0x0007dfb7) bt_list_pane_t2

0x0001,

0xfe42,	// (0x000809fb) bt_list_pane_t

0x0f6c,	// (0x00071b25) main_cale_prevew_pane

0xd40d,	// (0x0007dfc6) popup_cale_preview_window_ParamLimits

0xd40d,	// (0x0007dfc6) popup_cale_preview_window

0xed0f,	// (0x0007f8c8) bg_popup_preview_window_pane_cp05_ParamLimits

0xed0f,	// (0x0007f8c8) bg_popup_preview_window_pane_cp05

0xd422,	// (0x0007dfdb) list_cale_preview_pane_ParamLimits

0xd422,	// (0x0007dfdb) list_cale_preview_pane

0xd42e,	// (0x0007dfe7) list_double_cale_preview_pane_ParamLimits

0xd42e,	// (0x0007dfe7) list_double_cale_preview_pane

0xd43f,	// (0x0007dff8) list_single_cale_preview_pane_ParamLimits

0xd43f,	// (0x0007dff8) list_single_cale_preview_pane

0xd453,	// (0x0007e00c) list_single_cale_preview_pane_g1

0xd45b,	// (0x0007e014) list_single_cale_preview_pane_t1_ParamLimits

0xd45b,	// (0x0007e014) list_single_cale_preview_pane_t1

0xd470,	// (0x0007e029) list_double_cale_preview_pane_g1

0xd478,	// (0x0007e031) list_double_cale_preview_pane_t1_ParamLimits

0xd478,	// (0x0007e031) list_double_cale_preview_pane_t1

0xd48d,	// (0x0007e046) list_double_cale_preview_pane_t2_ParamLimits

0xd48d,	// (0x0007e046) list_double_cale_preview_pane_t2

0x0001,

0xfe47,	// (0x00080a00) list_double_cale_preview_pane_t_ParamLimits

0xfe47,	// (0x00080a00) list_double_cale_preview_pane_t

0x0f6c,	// (0x00071b25) main_ezdial_pane

0xed0f,	// (0x0007f8c8) main_sp_fs_email_pane_ParamLimits

0xcafa,	// (0x0007d6b3) cmail_ddmenu_btn01_pane_ParamLimits

0xcafa,	// (0x0007d6b3) cmail_ddmenu_btn01_pane

0xcb17,	// (0x0007d6d0) cmail_ddmenu_btn02_pane_ParamLimits

0xcb17,	// (0x0007d6d0) cmail_ddmenu_btn02_pane

0xcb35,	// (0x0007d6ee) cmail_ddmenu_btn03_pane_ParamLimits

0xcb35,	// (0x0007d6ee) cmail_ddmenu_btn03_pane

0xcb61,	// (0x0007d71a) main_sp_fs_ctrlbar_pane_ParamLimits

0xcb79,	// (0x0007d732) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcf21,	// (0x0007dada) list_cmail_body_pane_ParamLimits

0x4b10,	// (0x000756c9) bg_button_pane_cp12

0x4b18,	// (0x000756d1) list_single_cmail_header_detail_pane_g3_ParamLimits

0x4b18,	// (0x000756d1) list_single_cmail_header_detail_pane_g3

0xcf85,	// (0x0007db3e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcf85,	// (0x0007db3e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdcc,	// (0x00080985) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdcc,	// (0x00080985) list_single_cmail_header_detail_pane_t

0x4b9d,	// (0x00075756) phacti_term_pane_t2_ParamLimits

0x4b9d,	// (0x00075756) phacti_term_pane_t2

0x0001,

0xfdd6,	// (0x0008098f) phacti_term_pane_t_ParamLimits

0xfdd6,	// (0x0008098f) phacti_term_pane_t

0xd4a5,	// (0x0007e05e) aid_size_list_single_double

0xd4b1,	// (0x0007e06a) popup_ezdial_listscroll_window

0xd4ca,	// (0x0007e083) popup_number_entry_window_cp01

0xe19a,	// (0x0007ed53) bg_popup_call_pane_cp09

0xd4d6,	// (0x0007e08f) ezdial_list_pane

0xd4de,	// (0x0007e097) scroll_pane_cp23

0x2b12,	// (0x000736cb) bg_button_pane_cp028_ParamLimits

0x2b12,	// (0x000736cb) bg_button_pane_cp028

0xd4e6,	// (0x0007e09f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd4e6,	// (0x0007e09f) cmail_ddmenu_btn01_pane_g1

0xd4f8,	// (0x0007e0b1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd4f8,	// (0x0007e0b1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe4c,	// (0x00080a05) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe4c,	// (0x00080a05) cmail_ddmenu_btn01_pane_g

0xd504,	// (0x0007e0bd) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd504,	// (0x0007e0bd) cmail_ddmenu_btn01_pane_t1

0x28ea,	// (0x000734a3) bg_button_pane_cp029_ParamLimits

0x28ea,	// (0x000734a3) bg_button_pane_cp029

0xd4f8,	// (0x0007e0b1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd4f8,	// (0x0007e0b1) cmail_ddmenu_btn02_pane_g1

0xd525,	// (0x0007e0de) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd525,	// (0x0007e0de) cmail_ddmenu_btn02_pane_t1

0x3658,	// (0x00074211) bg_button_pane_cp031_ParamLimits

0x3658,	// (0x00074211) bg_button_pane_cp031

0xd4f8,	// (0x0007e0b1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd4f8,	// (0x0007e0b1) cmail_ddmenu_btn03_pane_g1

0xd525,	// (0x0007e0de) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd525,	// (0x0007e0de) cmail_ddmenu_btn03_pane_t1

0xaa8b,	// (0x0007b644) cell_dialer2_keypad_pane_t1_ParamLimits

0xaaa5,	// (0x0007b65e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xaaa5,	// (0x0007b65e) cell_dialer2_keypad_pane_t1_copy1

0xc4b4,	// (0x0007d06d) ncimui_group_button_pane

0xed0f,	// (0x0007f8c8) main_sp_fs_calendar_pane_ParamLimits

0xcf21,	// (0x0007dada) list_single_cmail_header_caption_pane_ParamLimits

0x3c6e,	// (0x00074827) aid_recal_txt_sm_pane

0x0f6c,	// (0x00071b25) mian_recal_day_pane

0x4bd7,	// (0x00075790) popup_sp_fs_cale_preview_window_ParamLimits

0x0f6c,	// (0x00071b25) list_recal_day_pane

0x4ca7,	// (0x00075860) list_single_recal_day_pane_ParamLimits

0x4ca7,	// (0x00075860) list_single_recal_day_pane

0xd559,	// (0x0007e112) list_single_recal_day_pane_g1_ParamLimits

0xd559,	// (0x0007e112) list_single_recal_day_pane_g1

0x4cb9,	// (0x00075872) list_single_recal_day_pane_g2_ParamLimits

0x4cb9,	// (0x00075872) list_single_recal_day_pane_g2

0x4cc5,	// (0x0007587e) list_single_recal_day_pane_g3_ParamLimits

0x4cc5,	// (0x0007587e) list_single_recal_day_pane_g3

0xd565,	// (0x0007e11e) list_single_recal_day_pane_g4_ParamLimits

0xd565,	// (0x0007e11e) list_single_recal_day_pane_g4

0x4cd1,	// (0x0007588a) list_single_recal_day_pane_g5_ParamLimits

0x4cd1,	// (0x0007588a) list_single_recal_day_pane_g5

0x4cdd,	// (0x00075896) list_single_recal_day_pane_g6_ParamLimits

0x4cdd,	// (0x00075896) list_single_recal_day_pane_g6

0x0005,

0xfe5b,	// (0x00080a14) list_single_recal_day_pane_g_ParamLimits

0xfe5b,	// (0x00080a14) list_single_recal_day_pane_g

0x4ce9,	// (0x000758a2) list_single_recal_day_pane_t1

0x4cf7,	// (0x000758b0) list_single_recal_day_pane_t2

0x0001,

0xfe68,	// (0x00080a21) list_single_recal_day_pane_t

0xd571,	// (0x0007e12a) ncimui_query_button_pane_ParamLimits

0xd571,	// (0x0007e12a) ncimui_query_button_pane

0xd581,	// (0x0007e13a) ncimui_query_button_pane_t1_ParamLimits

0xd581,	// (0x0007e13a) ncimui_query_button_pane_t1

0xd594,	// (0x0007e14d) ncimui_query_button_pane_t2_ParamLimits

0xd594,	// (0x0007e14d) ncimui_query_button_pane_t2

0x0001,

0xfe6d,	// (0x00080a26) ncimui_query_button_pane_t_ParamLimits

0xfe6d,	// (0x00080a26) ncimui_query_button_pane_t

0xd5a7,	// (0x0007e160) query_button_pane_ParamLimits

0xd5a7,	// (0x0007e160) query_button_pane

0x0f6c,	// (0x00071b25) bg_button_pane_cp0028

0xd5b4,	// (0x0007e16d) query_button_pane_t1

0x90a9,	// (0x00079c62) main_tport_pane_ParamLimits

0xce6c,	// (0x0007da25) bg_popup_window_pane_cp01_ParamLimits

0xce6c,	// (0x0007da25) bg_popup_window_pane_cp01

0xce79,	// (0x0007da32) heading_pane_cp08_ParamLimits

0xce79,	// (0x0007da32) heading_pane_cp08

0xce85,	// (0x0007da3e) heading_pane_cp07_ParamLimits

0xce85,	// (0x0007da3e) heading_pane_cp07

0x4ac8,	// (0x00075681) cell_tport_appsw_pane_g2

0x0002,

0xfdb9,	// (0x00080972) cell_tport_appsw_pane_g

0x203f,	// (0x00072bf8) input_candi_list_open_g1

0x1ef2,	// (0x00072aab) list_cale_time_pane_g6_ParamLimits

0x1ef2,	// (0x00072aab) list_cale_time_pane_g6

0x9a4a,	// (0x0007a603) aid_size_touch_calib_1_ParamLimits

0x9a4a,	// (0x0007a603) aid_size_touch_calib_1

0x9a56,	// (0x0007a60f) aid_size_touch_calib_2_ParamLimits

0x9a56,	// (0x0007a60f) aid_size_touch_calib_2

0x9a62,	// (0x0007a61b) aid_size_touch_calib_3_ParamLimits

0x9a62,	// (0x0007a61b) aid_size_touch_calib_3

0x9a70,	// (0x0007a629) aid_size_touch_calib_4_ParamLimits

0x9a70,	// (0x0007a629) aid_size_touch_calib_4

0x9a7e,	// (0x0007a637) main_touch_calib_button_group_pane_ParamLimits

0x9a7e,	// (0x0007a637) main_touch_calib_button_group_pane

0x9a8b,	// (0x0007a644) main_touch_calib_pane_g1_ParamLimits

0x9a97,	// (0x0007a650) main_touch_calib_pane_g2_ParamLimits

0x9aa3,	// (0x0007a65c) main_touch_calib_pane_g3_ParamLimits

0x9aaf,	// (0x0007a668) main_touch_calib_pane_g4_ParamLimits

0xf797,	// (0x00080350) main_touch_calib_pane_g_ParamLimits

0x9abb,	// (0x0007a674) main_touch_calib_pane_t1_ParamLimits

0x9ad0,	// (0x0007a689) main_touch_calib_pane_t2_ParamLimits

0x9ae5,	// (0x0007a69e) main_touch_calib_pane_t3_ParamLimits

0x9af7,	// (0x0007a6b0) main_touch_calib_pane_t4_ParamLimits

0x9b09,	// (0x0007a6c2) main_touch_calib_pane_t5_ParamLimits

0xf7a0,	// (0x00080359) main_touch_calib_pane_t_ParamLimits

0x306e,	// (0x00073c27) list_single_fp_cale_pane_g3_ParamLimits

0x306e,	// (0x00073c27) list_single_fp_cale_pane_g3

0xae9c,	// (0x0007ba55) bg_button_pane_cp012_ParamLimits

0xae9c,	// (0x0007ba55) bg_vkb2_func_pane_cp03_ParamLimits

0xb799,	// (0x0007c352) cell_vitu2_function_top_pane_g1_ParamLimits

0xae9c,	// (0x0007ba55) bg_vkb2_func_pane_cp04_ParamLimits

0xc467,	// (0x0007d020) main_ncimui_button_group_pane_ParamLimits

0xc467,	// (0x0007d020) main_ncimui_button_group_pane

0xc4a2,	// (0x0007d05b) main_ncimui_pane_t3_ParamLimits

0xc4a2,	// (0x0007d05b) main_ncimui_pane_t3

0xd09d,	// (0x0007dc56) phacti_button_group_pane

0xd4a5,	// (0x0007e05e) aid_size_list_single_double_ParamLimits

0xd4b1,	// (0x0007e06a) popup_ezdial_listscroll_window_ParamLimits

0xd4ca,	// (0x0007e083) popup_number_entry_window_cp01_ParamLimits

0xd5c2,	// (0x0007e17b) phacti_button_pane_ParamLimits

0xd5c2,	// (0x0007e17b) phacti_button_pane

0x0f6c,	// (0x00071b25) bg_button_pane_cp14

0xd5d1,	// (0x0007e18a) phacti_button_pane_t1

0xd5df,	// (0x0007e198) main_touch_calib_button_pane_ParamLimits

0xd5df,	// (0x0007e198) main_touch_calib_button_pane

0x1724,	// (0x000722dd) bg_button_pane_cp18_ParamLimits

0x1724,	// (0x000722dd) bg_button_pane_cp18

0xd5ef,	// (0x0007e1a8) main_touch_calib_button_pane_t1_ParamLimits

0xd5ef,	// (0x0007e1a8) main_touch_calib_button_pane_t1

0xd605,	// (0x0007e1be) main_touch_calib_button_pane_t2_ParamLimits

0xd605,	// (0x0007e1be) main_touch_calib_button_pane_t2

0x0001,

0xfe72,	// (0x00080a2b) main_touch_calib_button_pane_t_ParamLimits

0xfe72,	// (0x00080a2b) main_touch_calib_button_pane_t

0x0f6c,	// (0x00071b25) cell_ncimui_button_pane

0x0f6c,	// (0x00071b25) bg_button_pane_cp032

0xd623,	// (0x0007e1dc) cell_ncimui_button_pane_t1

0xaaf7,	// (0x0007b6b0) image3_infobar_pane_ParamLimits

0xaaf7,	// (0x0007b6b0) image3_infobar_pane

0xc7b1,	// (0x0007d36a) fs_bigclock_status_pane_ParamLimits

0xc7b1,	// (0x0007d36a) fs_bigclock_status_pane

0xc7be,	// (0x0007d377) main_fs_bigclock_clock_pane_ParamLimits

0xc7be,	// (0x0007d377) main_fs_bigclock_clock_pane

0xc7ce,	// (0x0007d387) main_fs_bigclock_indi_pane_ParamLimits

0xc7ce,	// (0x0007d387) main_fs_bigclock_indi_pane

0xc7f3,	// (0x0007d3ac) main_fs_bigclock_swipe_pane_ParamLimits

0xc7f3,	// (0x0007d3ac) main_fs_bigclock_swipe_pane

0x0f6c,	// (0x00071b25) main_fs_clock_dumped_data

0x45c1,	// (0x0007517a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x45c1,	// (0x0007517a) list_single_fs_bigclock_indicator_pane_g1

0x45db,	// (0x00075194) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x45db,	// (0x00075194) list_single_fs_bigclock_indicator_pane_g2

0x45f5,	// (0x000751ae) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x45f5,	// (0x000751ae) list_single_fs_bigclock_indicator_pane_g3

0x460f,	// (0x000751c8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x460f,	// (0x000751c8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcaa,	// (0x00080863) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcaa,	// (0x00080863) list_single_fs_bigclock_indicator_pane_g

0x4633,	// (0x000751ec) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x4633,	// (0x000751ec) list_single_fs_bigclock_indicator_pane_t1

0x465b,	// (0x00075214) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x465b,	// (0x00075214) list_single_fs_bigclock_indicator_pane_t2

0x4683,	// (0x0007523c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x4683,	// (0x0007523c) list_single_fs_bigclock_indicator_pane_t3

0x46ab,	// (0x00075264) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x46ab,	// (0x00075264) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcb5,	// (0x0008086e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcb5,	// (0x0008086e) list_single_fs_bigclock_indicator_pane_t

0xd631,	// (0x0007e1ea) image3_infobar_fav_pane_ParamLimits

0xd631,	// (0x0007e1ea) image3_infobar_fav_pane

0xd641,	// (0x0007e1fa) image3_infobar_loc_pane_ParamLimits

0xd641,	// (0x0007e1fa) image3_infobar_loc_pane

0xd655,	// (0x0007e20e) image3_infobar_time_pane_ParamLimits

0xd655,	// (0x0007e20e) image3_infobar_time_pane

0x2d25,	// (0x000738de) image3_infobar_time_pane_g1

0xd665,	// (0x0007e21e) image3_infobar_time_pane_t1

0x2d25,	// (0x000738de) image3_infobar_loc_pane_g1

0xd673,	// (0x0007e22c) image3_infobar_loc_pane_g2

0x0001,

0xfe77,	// (0x00080a30) image3_infobar_loc_pane_g

0xd67b,	// (0x0007e234) image3_infobar_loc_pane_t1

0x2d25,	// (0x000738de) image3_infobar_fav_pane_g1

0xd689,	// (0x0007e242) image3_infobar_fav_pane_g2

0x0001,

0xfe7c,	// (0x00080a35) image3_infobar_fav_pane_g

0xd691,	// (0x0007e24a) fs_bigclock_status_battery_pane

0xd69a,	// (0x0007e253) fs_bigclock_status_signal_pane

0xd6a3,	// (0x0007e25c) fs_bigclock_status_title_pane

0xd6ac,	// (0x0007e265) fs_bigclock_status_signal_pane_g1

0xd6b5,	// (0x0007e26e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe81,	// (0x00080a3a) fs_bigclock_status_signal_pane_g

0xd6bd,	// (0x0007e276) fs_bigclock_status_battery_pane_g1

0xd6c6,	// (0x0007e27f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe86,	// (0x00080a3f) fs_bigclock_status_battery_pane_g

0xd6ce,	// (0x0007e287) fs_bigclock_status_title_pane_t1

0x2d25,	// (0x000738de) main_fs_bigclock_clock_pane_g1

0xd6dc,	// (0x0007e295) main_fs_bigclock_clock_pane_g2

0xd6dc,	// (0x0007e295) main_fs_bigclock_clock_pane_g3

0xd6dc,	// (0x0007e295) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe8b,	// (0x00080a44) main_fs_bigclock_clock_pane_g

0xd6e4,	// (0x0007e29d) main_fs_bigclock_clock_pane_t1

0xd6f2,	// (0x0007e2ab) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe94,	// (0x00080a4d) main_fs_bigclock_clock_pane_t

0xd701,	// (0x0007e2ba) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd701,	// (0x0007e2ba) list_single_fs_bigclock_indicator_pane

0xd712,	// (0x0007e2cb) list_single_fs_bigclock_pane_ParamLimits

0xd712,	// (0x0007e2cb) list_single_fs_bigclock_pane

0xd779,	// (0x0007e332) main_fs_bigclock_indicator_pane_t1

0xd788,	// (0x0007e341) list_single_fs_bigclock_pane_g1

0xd790,	// (0x0007e349) list_single_fs_bigclock_pane_t1

0x2d25,	// (0x000738de) main_fs_bigclock_swipe_pane_g1

0xd7ce,	// (0x0007e387) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfea5,	// (0x00080a5e) main_fs_bigclock_swipe_pane_g

0xd7d6,	// (0x0007e38f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd7d6,	// (0x0007e38f) main_fs_bigclock_swipe_pane_t1

0x8189,	// (0x00078d42) call_type_pane_ParamLimits

0x0f6c,	// (0x00071b25) main_btmg_pane

0x4c22,	// (0x000757db) list_single_cale_mrui_row_pane_g2_ParamLimits

0x4c22,	// (0x000757db) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe18,	// (0x000809d1) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe18,	// (0x000809d1) list_single_cale_mrui_row_pane_g

0xd549,	// (0x0007e102) list_recal_vselct_arw_lo_pane

0xd551,	// (0x0007e10a) list_recal_vselct_arw_up_pane

0x4c9e,	// (0x00075857) list_recal_vselct_pane

0xd7f3,	// (0x0007e3ac) btmg_button_pane

0xd7fb,	// (0x0007e3b4) main_btmg_pane_g1

0x0f6c,	// (0x00071b25) bg_button_pane_cp044

0xd803,	// (0x0007e3bc) btmg_button_pane_t1

0x28e2,	// (0x0007349b) aid_listscroll_gen

0xed0f,	// (0x0007f8c8) main_cntbar_detail_pane

0x4ae6,	// (0x0007569f) list_cmail_folder_pane

0x4af6,	// (0x000756af) sp_fs_scroll_pane_cp03_ParamLimits

0xd811,	// (0x0007e3ca) list_single_fs_dyc_pane_cp01_ParamLimits

0xd811,	// (0x0007e3ca) list_single_fs_dyc_pane_cp01

0xd828,	// (0x0007e3e1) aid_size_cmail_indent

0x5770,	// (0x00076329) list_single_dyc_row_pane_cp01

0xd84b,	// (0x0007e404) cntbar_detail_list_pane_ParamLimits

0xd84b,	// (0x0007e404) cntbar_detail_list_pane

0xd881,	// (0x0007e43a) main_cntbar_detail_cont_pane_ParamLimits

0xd881,	// (0x0007e43a) main_cntbar_detail_cont_pane

0xd88d,	// (0x0007e446) scroll_pane_cp032_ParamLimits

0xd88d,	// (0x0007e446) scroll_pane_cp032

0xd899,	// (0x0007e452) cntbar_detail_list_event_pane_ParamLimits

0xd899,	// (0x0007e452) cntbar_detail_list_event_pane

0xd857,	// (0x0007e410) cntbar_detail_list_shct_pane

0xd8a9,	// (0x0007e462) aid_list_gen

0x1881,	// (0x0007243a) aid_scroll

0x3c54,	// (0x0007480d) aid_size_touch_scroll_bar

0xd8b2,	// (0x0007e46b) aid_list_double

0xd8bb,	// (0x0007e474) aid_list_single

0x4d05,	// (0x000758be) aid_list_single_lg

0xd8c4,	// (0x0007e47d) aid_list_z_g_a_sm

0xd8cc,	// (0x0007e485) aid_list_z_g_d

0xd8d4,	// (0x0007e48d) aid_txt_z_prm

0xd8e2,	// (0x0007e49b) aid_txt_z_prm_cp01

0xd8f0,	// (0x0007e4a9) aid_txt_z_sec

0xd8fe,	// (0x0007e4b7) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd8fe,	// (0x0007e4b7) main_cntbar_detail_cont_pane_g1

0xd90b,	// (0x0007e4c4) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd90b,	// (0x0007e4c4) main_cntbar_detail_cont_pane_g2

0x0001,

0xfeaa,	// (0x00080a63) main_cntbar_detail_cont_pane_g_ParamLimits

0xfeaa,	// (0x00080a63) main_cntbar_detail_cont_pane_g

0xd917,	// (0x0007e4d0) main_cntbar_detail_cont_pane_t1

0xd925,	// (0x0007e4de) main_cntbar_detail_cont_pane_t2

0xd933,	// (0x0007e4ec) main_cntbar_detail_cont_pane_t3

0x0002,

0xfeaf,	// (0x00080a68) main_cntbar_detail_cont_pane_t

0xd941,	// (0x0007e4fa) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd941,	// (0x0007e4fa) cell_cntbar_detail_list_shct_pane

0xd953,	// (0x0007e50c) cntbar_detail_list_shct_pane_g1

0xd95c,	// (0x0007e515) cntbar_detail_list_shct_pane_g2

0x0001,

0xfeb6,	// (0x00080a6f) cntbar_detail_list_shct_pane_g

0xd965,	// (0x0007e51e) cntbar_detail_list_event_pane_g1_ParamLimits

0xd965,	// (0x0007e51e) cntbar_detail_list_event_pane_g1

0xd971,	// (0x0007e52a) cntbar_detail_list_event_pane_g2_ParamLimits

0xd971,	// (0x0007e52a) cntbar_detail_list_event_pane_g2

0x0005,

0xfebb,	// (0x00080a74) cntbar_detail_list_event_pane_g_ParamLimits

0xfebb,	// (0x00080a74) cntbar_detail_list_event_pane_g

0xd9dd,	// (0x0007e596) cntbar_detail_list_event_pane_t1_ParamLimits

0xd9dd,	// (0x0007e596) cntbar_detail_list_event_pane_t1

0xd9f2,	// (0x0007e5ab) cntbar_detail_list_event_pane_t2_ParamLimits

0xd9f2,	// (0x0007e5ab) cntbar_detail_list_event_pane_t2

0x0002,

0xfec8,	// (0x00080a81) cntbar_detail_list_event_pane_t_ParamLimits

0xfec8,	// (0x00080a81) cntbar_detail_list_event_pane_t

0x2d25,	// (0x000738de) cell_cntbar_detail_list_shct_pane_g1

0xe159,	// (0x0007ed12) navi_pane_mv_g3

0xed0f,	// (0x0007f8c8) main_cntbar_detail_pane_ParamLimits

0x0f6c,	// (0x00071b25) main_notif_wgt_pane

0xa7e5,	// (0x0007b39e) aid_tch_main_mp4_pane_g4

0xaa0c,	// (0x0007b5c5) popup_slider_window_cp02

0x4c9e,	// (0x00075857) list_recal_day_event_pane

0xd831,	// (0x0007e3ea) cntbar_detail_btn_pane_ParamLimits

0xd831,	// (0x0007e3ea) cntbar_detail_btn_pane

0xd83d,	// (0x0007e3f6) cntbar_detail_btn_pane_cp01_ParamLimits

0xd83d,	// (0x0007e3f6) cntbar_detail_btn_pane_cp01

0xd857,	// (0x0007e410) cntbar_detail_list_shct_pane_ParamLimits

0xd863,	// (0x0007e41c) cntbar_detail_pane_g1_ParamLimits

0xd863,	// (0x0007e41c) cntbar_detail_pane_g1

0xd86f,	// (0x0007e428) cntbar_detail_pane_t1_ParamLimits

0xd86f,	// (0x0007e428) cntbar_detail_pane_t1

0xd97d,	// (0x0007e536) cntbar_detail_list_event_pane_g3_ParamLimits

0xd97d,	// (0x0007e536) cntbar_detail_list_event_pane_g3

0xd995,	// (0x0007e54e) cntbar_detail_list_event_pane_g4_ParamLimits

0xd995,	// (0x0007e54e) cntbar_detail_list_event_pane_g4

0xd9ad,	// (0x0007e566) cntbar_detail_list_event_pane_g5_ParamLimits

0xd9ad,	// (0x0007e566) cntbar_detail_list_event_pane_g5

0xd9c5,	// (0x0007e57e) cntbar_detail_list_event_pane_g6_ParamLimits

0xd9c5,	// (0x0007e57e) cntbar_detail_list_event_pane_g6

0xda07,	// (0x0007e5c0) cntbar_detail_list_event_pane_t3_ParamLimits

0xda07,	// (0x0007e5c0) cntbar_detail_list_event_pane_t3

0xda19,	// (0x0007e5d2) popup_notif_wgt_window_ParamLimits

0xda19,	// (0x0007e5d2) popup_notif_wgt_window

0xda27,	// (0x0007e5e0) popup_submenu_window_cp01_ParamLimits

0xda27,	// (0x0007e5e0) popup_submenu_window_cp01

0xe19a,	// (0x0007ed53) bg_popup_window_pane_cp10

0xda33,	// (0x0007e5ec) listscroll_notif_wgt_pane

0xda3b,	// (0x0007e5f4) list_notif_wgt_window

0xda44,	// (0x0007e5fd) scroll_pane_cp033

0xda4d,	// (0x0007e606) list_notif_wgt_row_pane_ParamLimits

0xda4d,	// (0x0007e606) list_notif_wgt_row_pane

0xda5f,	// (0x0007e618) aid_size_list_notif_wgt_del

0xda68,	// (0x0007e621) list_notif_wgt_row_pane_g1

0xda70,	// (0x0007e629) list_notif_wgt_row_pane_g2

0xda78,	// (0x0007e631) list_notif_wgt_row_pane_g3

0x0002,

0xfecf,	// (0x00080a88) list_notif_wgt_row_pane_g

0xda81,	// (0x0007e63a) list_notif_wgt_row_pane_t1

0xda8f,	// (0x0007e648) list_notif_wgt_row_pane_t2

0xda9d,	// (0x0007e656) list_notif_wgt_row_pane_t3

0x0002,

0xfed6,	// (0x00080a8f) list_notif_wgt_row_pane_t

0x394c,	// (0x00074505) list_recal_day_event_pane_g1

0xdaab,	// (0x0007e664) list_recal_day_event_pane_t1

0x0f6c,	// (0x00071b25) bg_button_pane_cp045

0xdaba,	// (0x0007e673) cntbar_detail_btn_pane_t1

0x28ea,	// (0x000734a3) main_callh_pane_ParamLimits

0x28ea,	// (0x000734a3) main_callh_pane

0x0f6c,	// (0x00071b25) main_coverflow0_pane

0x0f6c,	// (0x00071b25) main_wgtman_pane

0xc805,	// (0x0007d3be) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc805,	// (0x0007d3be) main_fs_bigclock_unlock_btn_pane

0x4ac0,	// (0x00075679) bg_button_pane_cp16

0x4ad0,	// (0x00075689) cell_tport_appsw_pane_g3

0xdac8,	// (0x0007e681) cf0_flow_pane_ParamLimits

0xdac8,	// (0x0007e681) cf0_flow_pane

0xdad7,	// (0x0007e690) listscroll_cf0_pane

0xdae0,	// (0x0007e699) main_cf0_pane_g1

0xdaea,	// (0x0007e6a3) main_cf0_pane_t1_ParamLimits

0xdaea,	// (0x0007e6a3) main_cf0_pane_t1

0xdafc,	// (0x0007e6b5) main_cf0_pane_t2_ParamLimits

0xdafc,	// (0x0007e6b5) main_cf0_pane_t2

0x0001,

0xfedd,	// (0x00080a96) main_cf0_pane_t_ParamLimits

0xfedd,	// (0x00080a96) main_cf0_pane_t

0xdb0e,	// (0x0007e6c7) scroll_pane_cp11

0xdb17,	// (0x0007e6d0) cf0_flow_pane_g1

0xdb1f,	// (0x0007e6d8) cf0_flow_pane_g2

0x0001,

0xfee2,	// (0x00080a9b) cf0_flow_pane_g

0xdb27,	// (0x0007e6e0) cf0_flow_pane_t1

0x0f6c,	// (0x00071b25) main_call6_pane

0x0f6c,	// (0x00071b25) main_calllock_pane

0xdb35,	// (0x0007e6ee) call6_btn_grp_pane_ParamLimits

0xdb35,	// (0x0007e6ee) call6_btn_grp_pane

0xdb42,	// (0x0007e6fb) call6_pane_g1_ParamLimits

0xdb42,	// (0x0007e6fb) call6_pane_g1

0xdb4f,	// (0x0007e708) popup_call6_1st_window_ParamLimits

0xdb4f,	// (0x0007e708) popup_call6_1st_window

0xdb5b,	// (0x0007e714) popup_call6_2nd_window_ParamLimits

0xdb5b,	// (0x0007e714) popup_call6_2nd_window

0xdb67,	// (0x0007e720) cell_call6_btn_pane_ParamLimits

0xdb67,	// (0x0007e720) cell_call6_btn_pane

0xe19a,	// (0x0007ed53) bg_popup_call2_in_pane_cp03

0xdb76,	// (0x0007e72f) popup_call6_1st_window_g1

0xdb7e,	// (0x0007e737) popup_call6_1st_window_g2

0xdb86,	// (0x0007e73f) popup_call6_1st_window_g3

0x0002,

0xfee7,	// (0x00080aa0) popup_call6_1st_window_g

0xdb8e,	// (0x0007e747) popup_call6_1st_window_t1

0xdb9d,	// (0x0007e756) popup_call6_1st_window_t2

0xdbab,	// (0x0007e764) popup_call6_1st_window_t3

0x0002,

0xfeee,	// (0x00080aa7) popup_call6_1st_window_t

0xe19a,	// (0x0007ed53) bg_popup_call2_in_pane_cp04

0xdb76,	// (0x0007e72f) popup_call6_2nd_window_g1

0xdb7e,	// (0x0007e737) popup_call6_2nd_window_g2

0xdb86,	// (0x0007e73f) popup_call6_2nd_window_g3

0x0002,

0xfee7,	// (0x00080aa0) popup_call6_2nd_window_g

0xdb8e,	// (0x0007e747) popup_call6_2nd_window_t1

0x0f6c,	// (0x00071b25) bg_button_pane_cp15

0xdbb9,	// (0x0007e772) cell_call6_btn_pane_g1

0xdbc2,	// (0x0007e77b) cell_call6_btn_pane_t1

0xdbd1,	// (0x0007e78a) listscroll_wgtman_pane_ParamLimits

0xdbd1,	// (0x0007e78a) listscroll_wgtman_pane

0xdbeb,	// (0x0007e7a4) wgtman_btn_pane_ParamLimits

0xdbeb,	// (0x0007e7a4) wgtman_btn_pane

0xdfdb,	// (0x0007eb94) aid_scroll_copy1

0xdc1e,	// (0x0007e7d7) list_wgtman_pane

0xdc28,	// (0x0007e7e1) wgtman_btn_pane_g1_ParamLimits

0xdc28,	// (0x0007e7e1) wgtman_btn_pane_g1

0xdc50,	// (0x0007e809) wgtman_btn_pane_t1_ParamLimits

0xdc50,	// (0x0007e809) wgtman_btn_pane_t1

0xdc87,	// (0x0007e840) wgtman_btn_pane_t2_ParamLimits

0xdc87,	// (0x0007e840) wgtman_btn_pane_t2

0x0001,

0xfef5,	// (0x00080aae) wgtman_btn_pane_t_ParamLimits

0xfef5,	// (0x00080aae) wgtman_btn_pane_t

0xdc9e,	// (0x0007e857) listrow_wgtman_pane_ParamLimits

0xdc9e,	// (0x0007e857) listrow_wgtman_pane

0xdcaf,	// (0x0007e868) listrow_wgtman_pane_g1

0xdcb8,	// (0x0007e871) listrow_wgtman_pane_g2

0x0001,

0xfefa,	// (0x00080ab3) listrow_wgtman_pane_g

0xdcc0,	// (0x0007e879) listrow_wgtman_pane_t1

0xdcce,	// (0x0007e887) listrow_wgtman_pane_t2

0x0001,

0xfeff,	// (0x00080ab8) listrow_wgtman_pane_t

0xdcdc,	// (0x0007e895) wait_bar_pane_cp09

0xdce4,	// (0x0007e89d) main_calllock_btn_pane

0xdcec,	// (0x0007e8a5) main_calllock_pane_g1

0x0f6c,	// (0x00071b25) bg_button_pane_cp17

0xdcf5,	// (0x0007e8ae) main_calllock_btn_pane_g1

0xdcfe,	// (0x0007e8b7) main_calllock_btn_pane_t1

0x0f6c,	// (0x00071b25) main_dialer3_pane

0x0f6c,	// (0x00071b25) main_fmrd2_pane

0x2d25,	// (0x000738de) main_fs_bigclock_unlock_btn_pane_g1

0xdd15,	// (0x0007e8ce) main_fs_bigclock_unlock_btn_pane_t1

0xdd23,	// (0x0007e8dc) area_fmrd2_info_pane_ParamLimits

0xdd23,	// (0x0007e8dc) area_fmrd2_info_pane

0xdd2f,	// (0x0007e8e8) area_fmrd2_visual_pane_ParamLimits

0xdd2f,	// (0x0007e8e8) area_fmrd2_visual_pane

0xdd3d,	// (0x0007e8f6) fmrd2_indi_pane_ParamLimits

0xdd3d,	// (0x0007e8f6) fmrd2_indi_pane

0xdd4a,	// (0x0007e903) area_fmrd2_visual_pane_g1

0xdd52,	// (0x0007e90b) area_fmrd2_visual_pane_t1

0xdd60,	// (0x0007e919) area_fmrd2_visual_pane_t2

0xdd6e,	// (0x0007e927) area_fmrd2_visual_pane_t3

0x0002,

0xff09,	// (0x00080ac2) area_fmrd2_visual_pane_t

0xdd7c,	// (0x0007e935) area_fmrd2_info_pane_g1

0xdd84,	// (0x0007e93d) area_fmrd2_info_pane_t1

0xdd92,	// (0x0007e94b) area_fmrd2_info_pane_t2

0xdda0,	// (0x0007e959) area_fmrd2_info_pane_t3

0xddae,	// (0x0007e967) area_fmrd2_info_pane_t4

0x0003,

0xff10,	// (0x00080ac9) area_fmrd2_info_pane_t

0xddbc,	// (0x0007e975) fmrd2_indi_pane_t1

0xddca,	// (0x0007e983) fmrd2_indi_pane_t2

0xddd8,	// (0x0007e991) fmrd2_indi_pane_t3

0x0002,

0xff19,	// (0x00080ad2) fmrd2_indi_pane_t

0x461e,	// (0x000751d7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x461e,	// (0x000751d7) list_single_fs_bigclock_indicator_pane_g5

0x46c0,	// (0x00075279) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x46c0,	// (0x00075279) list_single_fs_bigclock_indicator_pane_t5

0xd11c,	// (0x0007dcd5) aid_cell_bcale_month_pane_ParamLimits

0xd11c,	// (0x0007dcd5) aid_cell_bcale_month_pane

0xd128,	// (0x0007dce1) bcale_month_pane_ParamLimits

0xd128,	// (0x0007dce1) bcale_month_pane

0xd134,	// (0x0007dced) bcale_preview_pane_ParamLimits

0xd134,	// (0x0007dced) bcale_preview_pane

0xd790,	// (0x0007e349) list_single_fs_bigclock_pane_t1_ParamLimits

0xd7aa,	// (0x0007e363) list_single_fs_bigclock_pane_t2_ParamLimits

0xd7aa,	// (0x0007e363) list_single_fs_bigclock_pane_t2

0x0001,

0xfea0,	// (0x00080a59) list_single_fs_bigclock_pane_t_ParamLimits

0xfea0,	// (0x00080a59) list_single_fs_bigclock_pane_t

0xdd0d,	// (0x0007e8c6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff04,	// (0x00080abd) main_fs_bigclock_unlock_btn_pane_g

0xdde6,	// (0x0007e99f) aid_dia3_key_size_ParamLimits

0xdde6,	// (0x0007e99f) aid_dia3_key_size

0xed49,	// (0x0007f902) aid_dia3_listrow_size_ParamLimits

0xed49,	// (0x0007f902) aid_dia3_listrow_size

0xed57,	// (0x0007f910) dia3_keypad_fun_pane_ParamLimits

0xed57,	// (0x0007f910) dia3_keypad_fun_pane

0xed63,	// (0x0007f91c) dia3_keypad_num_pane_ParamLimits

0xed63,	// (0x0007f91c) dia3_keypad_num_pane

0xed6f,	// (0x0007f928) dia3_listscroll_pane_ParamLimits

0xed6f,	// (0x0007f928) dia3_listscroll_pane

0xed7b,	// (0x0007f934) dia3_numentry_pane_ParamLimits

0xed7b,	// (0x0007f934) dia3_numentry_pane

0xed87,	// (0x0007f940) dia3_list_pane

0xed90,	// (0x0007f949) scroll_pane_cp12

0x0f6c,	// (0x00071b25) bg_dia3_numentry_pane

0xed99,	// (0x0007f952) dia3_numentry_pane_t1

0xeda8,	// (0x0007f961) cell_dia3_key_num_pane

0xedb0,	// (0x0007f969) cell_dia3_key0_fun_pane_ParamLimits

0xedb0,	// (0x0007f969) cell_dia3_key0_fun_pane

0xedbd,	// (0x0007f976) cell_dia3_key1_fun_pane_ParamLimits

0xedbd,	// (0x0007f976) cell_dia3_key1_fun_pane

0xedca,	// (0x0007f983) dia3_listrow_pane

0x4342,	// (0x00074efb) bg_dia3_numentry_pane_g1

0x0f6c,	// (0x00071b25) bg_button_pane_cp21

0xedd7,	// (0x0007f990) cell_dia3_key_num_pane_t1

0xede5,	// (0x0007f99e) cell_dia3_key_num_pane_t2

0xedf4,	// (0x0007f9ad) cell_dia3_key_num_pane_t3

0xee03,	// (0x0007f9bc) cell_dia3_key_num_pane_t4

0x0003,

0xff20,	// (0x00080ad9) cell_dia3_key_num_pane_t

0x0f6c,	// (0x00071b25) bg_button_pane_cp19

0xee12,	// (0x0007f9cb) cell_dia3_key0_fun_pane_g1

0x0f6c,	// (0x00071b25) bg_button_pane_cp20

0xee1a,	// (0x0007f9d3) cell_dia3_key1_fun_pane_g1

0xee22,	// (0x0007f9db) area_left_week_number_pane

0xee2b,	// (0x0007f9e4) area_top_day_name_pane

0xee34,	// (0x0007f9ed) frame_month_view_pane

0xee3c,	// (0x0007f9f5) grid_month_view_pane

0xee46,	// (0x0007f9ff) cell_top_day_name_pane_ParamLimits

0xee46,	// (0x0007f9ff) cell_top_day_name_pane

0xee5c,	// (0x0007fa15) cell_area_left_week_number_pane_ParamLimits

0xee5c,	// (0x0007fa15) cell_area_left_week_number_pane

0xee70,	// (0x0007fa29) cell_month_view_pane_ParamLimits

0xee70,	// (0x0007fa29) cell_month_view_pane

0xee8b,	// (0x0007fa44) frm_month_g1

0xee94,	// (0x0007fa4d) frm_month_g2

0xee9c,	// (0x0007fa55) frm_month_g3

0xeea4,	// (0x0007fa5d) frm_month_g4

0xeeac,	// (0x0007fa65) frm_month_g5

0xeeb4,	// (0x0007fa6d) frm_month_g6

0xeebc,	// (0x0007fa75) frm_month_g7

0xeec4,	// (0x0007fa7d) frm_month_g8

0xeecd,	// (0x0007fa86) frm_month_g9

0xeed6,	// (0x0007fa8f) frm_month_g10

0xadd0,	// (0x0007b989) frm_month_g11

0xeedf,	// (0x0007fa98) frm_month_g12

0xeee8,	// (0x0007faa1) frm_month_g13

0xeef1,	// (0x0007faaa) frm_month_g14

0xeefa,	// (0x0007fab3) frm_month_g15

0xef03,	// (0x0007fabc) frm_month_g16

0x000f,

0xff29,	// (0x00080ae2) frm_month_g

0xef0c,	// (0x0007fac5) cell_top_day_name_pane_t1

0xef1b,	// (0x0007fad4) cell_area_left_week_number_pane_g1

0xef0c,	// (0x0007fac5) cell_area_left_week_number_pane_t1

0x2d25,	// (0x000738de) cell_month_view_pane_g1

0xef23,	// (0x0007fadc) cell_month_view_pane_t1

0x0f6c,	// (0x00071b25) main_fps_pane

0x48c3,	// (0x0007547c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x48c3,	// (0x0007547c) cmail_ddmenu_btn02_pane_cp1

0x48df,	// (0x00075498) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x48df,	// (0x00075498) cmail_ddmenu_btn02_pane_cp2

0xd519,	// (0x0007e0d2) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd519,	// (0x0007e0d2) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe51,	// (0x00080a0a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe51,	// (0x00080a0a) cmail_ddmenu_btn02_pane_g

0xd537,	// (0x0007e0f0) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd537,	// (0x0007e0f0) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe56,	// (0x00080a0f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe56,	// (0x00080a0f) cmail_ddmenu_btn02_pane_t

0xef32,	// (0x0007faeb) fps_text_pane_ParamLimits

0xef32,	// (0x0007faeb) fps_text_pane

0xef3f,	// (0x0007faf8) main_fps_pane_g1_ParamLimits

0xef3f,	// (0x0007faf8) main_fps_pane_g1

0xef4b,	// (0x0007fb04) wait_bar_pane_cp010_ParamLimits

0xef4b,	// (0x0007fb04) wait_bar_pane_cp010

0xef57,	// (0x0007fb10) fps_text_pane_t1_ParamLimits

0xef57,	// (0x0007fb10) fps_text_pane_t1

0xadbe,	// (0x0007b977) cam4_image_uncrop_pane_g1

0xadc7,	// (0x0007b980) cam4_image_uncrop_pane_g2

0xadd0,	// (0x0007b989) cam4_image_uncrop_pane_g3

0xadd9,	// (0x0007b992) cam4_image_uncrop_pane_g4

0x0003,

0xf92f,	// (0x000804e8) cam4_image_uncrop_pane_g

0xedca,	// (0x0007f983) dia3_listrow_pane_ParamLimits

0x0f6c,	// (0x00071b25) main_phob2_pane

0xcec6,	// (0x0007da7f) cell_tport_appsw_pane_cp02_ParamLimits

0xcec6,	// (0x0007da7f) cell_tport_appsw_pane_cp02

0xced3,	// (0x0007da8c) cell_tport_appsw_pane_cp03_ParamLimits

0xced3,	// (0x0007da8c) cell_tport_appsw_pane_cp03

0x0f6c,	// (0x00071b25) phob2_contact_card_pane

0x0f6c,	// (0x00071b25) phob2_listscroll_pane

0xef70,	// (0x0007fb29) phob2_list_pane

0xef78,	// (0x0007fb31) scroll_pane_cp034

0xef80,	// (0x0007fb39) phob2_cc_data_pane_ParamLimits

0xef80,	// (0x0007fb39) phob2_cc_data_pane

0xef98,	// (0x0007fb51) phob2_cc_listscroll_pane_ParamLimits

0xef98,	// (0x0007fb51) phob2_cc_listscroll_pane

0xefb0,	// (0x0007fb69) list_double_large_graphic_phob2_pane_ParamLimits

0xefb0,	// (0x0007fb69) list_double_large_graphic_phob2_pane

0xefc3,	// (0x0007fb7c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xefc3,	// (0x0007fb7c) list_double_large_graphic_phob2_pane_g1

0xddf2,	// (0x0007e9ab) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xddf2,	// (0x0007e9ab) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff4a,	// (0x00080b03) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff4a,	// (0x00080b03) list_double_large_graphic_phob2_pane_g

0xddfe,	// (0x0007e9b7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xddfe,	// (0x0007e9b7) list_double_large_graphic_phob2_pane_t1

0xde13,	// (0x0007e9cc) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xde13,	// (0x0007e9cc) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff4f,	// (0x00080b08) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff4f,	// (0x00080b08) list_double_large_graphic_phob2_pane_t

0x0f6c,	// (0x00071b25) list_highlight_pane_cp024

0xefd0,	// (0x0007fb89) phob2_cc_button_pane

0xefd8,	// (0x0007fb91) phob2_cc_data_pane_g1_ParamLimits

0xefd8,	// (0x0007fb91) phob2_cc_data_pane_g1

0xefe4,	// (0x0007fb9d) phob2_cc_data_pane_g2_ParamLimits

0xefe4,	// (0x0007fb9d) phob2_cc_data_pane_g2

0x0001,

0xff54,	// (0x00080b0d) phob2_cc_data_pane_g_ParamLimits

0xff54,	// (0x00080b0d) phob2_cc_data_pane_g

0xeff0,	// (0x0007fba9) phob2_cc_data_pane_t1_ParamLimits

0xeff0,	// (0x0007fba9) phob2_cc_data_pane_t1

0xf002,	// (0x0007fbbb) phob2_cc_data_pane_t2_ParamLimits

0xf002,	// (0x0007fbbb) phob2_cc_data_pane_t2

0xf014,	// (0x0007fbcd) phob2_cc_data_pane_t3_ParamLimits

0xf014,	// (0x0007fbcd) phob2_cc_data_pane_t3

0x0002,

0xff59,	// (0x00080b12) phob2_cc_data_pane_t_ParamLimits

0xff59,	// (0x00080b12) phob2_cc_data_pane_t

0xf026,	// (0x0007fbdf) phob2_cc_list_pane_ParamLimits

0xf026,	// (0x0007fbdf) phob2_cc_list_pane

0xf032,	// (0x0007fbeb) scroll_pane_cp035_ParamLimits

0xf032,	// (0x0007fbeb) scroll_pane_cp035

0xed0f,	// (0x0007f8c8) bg_button_pane_cp033

0xf03e,	// (0x0007fbf7) phob2_cc_button_pane_g1

0xf04a,	// (0x0007fc03) phob2_cc_button_pane_t1

0xf05f,	// (0x0007fc18) phob2_cc_button_pane_t2

0x0001,

0xff60,	// (0x00080b19) phob2_cc_button_pane_t

0xf071,	// (0x0007fc2a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xf071,	// (0x0007fc2a) list_double_large_graphic_phob2_cc_pane

0xf08c,	// (0x0007fc45) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xf08c,	// (0x0007fc45) list_double_large_graphic_phob2_cc_pane_g1

0xde25,	// (0x0007e9de) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xde25,	// (0x0007e9de) list_double_large_graphic_phob2_cc_pane_g2

0xde34,	// (0x0007e9ed) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xde34,	// (0x0007e9ed) list_double_large_graphic_phob2_cc_pane_g3

0xde43,	// (0x0007e9fc) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xde43,	// (0x0007e9fc) list_double_large_graphic_phob2_cc_pane_g4

0xde54,	// (0x0007ea0d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xde54,	// (0x0007ea0d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff65,	// (0x00080b1e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff65,	// (0x00080b1e) list_double_large_graphic_phob2_cc_pane_g

0xde63,	// (0x0007ea1c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xde63,	// (0x0007ea1c) list_double_large_graphic_phob2_cc_pane_t1

0xde8c,	// (0x0007ea45) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xde8c,	// (0x0007ea45) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff70,	// (0x00080b29) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff70,	// (0x00080b29) list_double_large_graphic_phob2_cc_pane_t

0xf09d,	// (0x0007fc56) list_highlight_pane_cp025_ParamLimits

0xf09d,	// (0x0007fc56) list_highlight_pane_cp025

0xed0f,	// (0x0007f8c8) bg_button_pane_cp033_ParamLimits

0xf03e,	// (0x0007fbf7) phob2_cc_button_pane_g1_ParamLimits

0xf04a,	// (0x0007fc03) phob2_cc_button_pane_t1_ParamLimits

0xf05f,	// (0x0007fc18) phob2_cc_button_pane_t2_ParamLimits

0xff60,	// (0x00080b19) phob2_cc_button_pane_t_ParamLimits

0x68d8,	// (0x00077491) popup_wgtman_window

0x4362,	// (0x00074f1b) scroll_pane_cp038

0xdc06,	// (0x0007e7bf) wgtman_btn_pane_cp_01_ParamLimits

0xdc06,	// (0x0007e7bf) wgtman_btn_pane_cp_01

0xf0ab,	// (0x0007fc64) wgtman_content_pane

0xf0b4,	// (0x0007fc6d) wgtman_heading_pane

0x0f6c,	// (0x00071b25) bg_heading_pane_cp02

0xf0bd,	// (0x0007fc76) wgtman_heading_pane_g1

0xf0c5,	// (0x0007fc7e) wgtman_heading_pane_t1

0xf0d3,	// (0x0007fc8c) scroll_pane_cp036

0xf0db,	// (0x0007fc94) wgtman_list_pane

0xf0e3,	// (0x0007fc9c) wgtman_list_pane_t1_ParamLimits

0xf0e3,	// (0x0007fc9c) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Large
