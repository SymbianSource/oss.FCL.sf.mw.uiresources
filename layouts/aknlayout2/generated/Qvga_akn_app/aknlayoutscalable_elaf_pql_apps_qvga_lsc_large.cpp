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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0006724c };

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
0x2c63,	// (0x00069eaf) Screen

0x2c6d,	// (0x00069eb9) application_window

0x2c9c,	// (0x00069ee8) area_bottom_pane_ParamLimits

0x2c9c,	// (0x00069ee8) area_bottom_pane

0x2ccf,	// (0x00069f1b) area_top_pane_ParamLimits

0x2ccf,	// (0x00069f1b) area_top_pane

0xa918,	// (0x00071b64) call_video_uplink_pane_ParamLimits

0xa918,	// (0x00071b64) call_video_uplink_pane

0x2d40,	// (0x00069f8c) main_pane_ParamLimits

0x2d40,	// (0x00069f8c) main_pane

0xc2a0,	// (0x000734ec) context_pane

0x64d1,	// (0x0006d71d) navi_pane

0x64fa,	// (0x0006d746) popup_cale_events_window_ParamLimits

0x64fa,	// (0x0006d746) popup_cale_events_window

0xc2b3,	// (0x000734ff) popup_mup_playback_window

0x6512,	// (0x0006d75e) signal_pane

0xb091,	// (0x000722dd) main_browser_pane

0x4af2,	// (0x0006bd3e) main_burst_pane

0x1080,	// (0x000682cc) main_calc_pane

0x4af2,	// (0x0006bd3e) main_cale_day_pane

0xb259,	// (0x000724a5) main_cale_month_pane

0x4af2,	// (0x0006bd3e) main_cale_week_pane

0x4af2,	// (0x0006bd3e) main_call_pane

0xad45,	// (0x00071f91) main_call_poc_pane

0x4af2,	// (0x0006bd3e) main_camera_pane

0x4af2,	// (0x0006bd3e) main_chi_dic_pane

0x0ffd,	// (0x00068249) main_clock_pane

0xad45,	// (0x00071f91) main_fmradio_pane

0x4af2,	// (0x0006bd3e) main_graph_messa_pane

0xad45,	// (0x00071f91) main_help_pane

0xb091,	// (0x000722dd) main_im_pane

0xafa0,	// (0x000721ec) main_image_pane_ParamLimits

0xafa0,	// (0x000721ec) main_image_pane

0xad45,	// (0x00071f91) main_location2_pane

0x4af2,	// (0x0006bd3e) main_location_pane

0xad45,	// (0x00071f91) main_messa_pane

0xad45,	// (0x00071f91) main_mp2_pane

0x4af2,	// (0x0006bd3e) main_mp_pane

0xad45,	// (0x00071f91) main_msg_pane

0xad45,	// (0x00071f91) main_mup_eq_pane

0xad45,	// (0x00071f91) main_mup_pane

0x4af2,	// (0x0006bd3e) main_notes_pane

0xad45,	// (0x00071f91) main_pec_pane

0xad45,	// (0x00071f91) main_phob_pane

0xad45,	// (0x00071f91) main_pinb_pane

0xad45,	// (0x00071f91) main_postcard_pane

0xad45,	// (0x00071f91) main_qdial_pane

0x4af2,	// (0x0006bd3e) main_skin_pane

0xad45,	// (0x00071f91) main_smil2_pane

0x4af2,	// (0x0006bd3e) main_smil_pane

0x4af2,	// (0x0006bd3e) main_video_pane

0x4af2,	// (0x0006bd3e) main_video_tele_pane

0xafa0,	// (0x000721ec) main_viewer_pane_ParamLimits

0xafa0,	// (0x000721ec) main_viewer_pane

0x4af2,	// (0x0006bd3e) main_vorec_pane

0x62b1,	// (0x0006d4fd) popup_blid_sat_info_window_ParamLimits

0x62b1,	// (0x0006d4fd) popup_blid_sat_info_window

0x6307,	// (0x0006d553) popup_dyc_status_message_window_ParamLimits

0x6307,	// (0x0006d553) popup_dyc_status_message_window

0x631d,	// (0x0006d569) popup_grid_large_graphic_window_ParamLimits

0x631d,	// (0x0006d569) popup_grid_large_graphic_window

0x63b3,	// (0x0006d5ff) popup_loc_request_window_ParamLimits

0x63b3,	// (0x0006d5ff) popup_loc_request_window

0x64ab,	// (0x0006d6f7) popup_wml_address_window_ParamLimits

0x64ab,	// (0x0006d6f7) popup_wml_address_window

0x6107,	// (0x0006d353) call_muted_g1

0x56fb,	// (0x0006c947) popup_call_audio_conf_window_ParamLimits

0x56fb,	// (0x0006c947) popup_call_audio_conf_window

0x6117,	// (0x0006d363) popup_call_audio_first_window_ParamLimits

0x6117,	// (0x0006d363) popup_call_audio_first_window

0x6175,	// (0x0006d3c1) popup_call_audio_in_window_ParamLimits

0x6175,	// (0x0006d3c1) popup_call_audio_in_window

0x61a1,	// (0x0006d3ed) popup_call_audio_out_window_ParamLimits

0x61a1,	// (0x0006d3ed) popup_call_audio_out_window

0x61cf,	// (0x0006d41b) popup_call_audio_second_window_ParamLimits

0x61cf,	// (0x0006d41b) popup_call_audio_second_window

0x6215,	// (0x0006d461) popup_call_audio_wait_window_ParamLimits

0x6215,	// (0x0006d461) popup_call_audio_wait_window

0x6248,	// (0x0006d494) popup_number_entry_window_ParamLimits

0x6248,	// (0x0006d494) popup_number_entry_window

0xa934,	// (0x00071b80) bg_popup_call_pane_cp05_ParamLimits

0xa934,	// (0x00071b80) bg_popup_call_pane_cp05

0xa954,	// (0x00071ba0) popup_number_entry_window_t1

0xa967,	// (0x00071bb3) popup_number_entry_window_t2

0xa979,	// (0x00071bc5) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x00076347) popup_number_entry_window_t

0xa98b,	// (0x00071bd7) text_title_cp2

0xa99e,	// (0x00071bea) bg_popup_call_pane_cp_ParamLimits

0xa99e,	// (0x00071bea) bg_popup_call_pane_cp

0xa9ac,	// (0x00071bf8) call_thumbnail_pane

0xa9b4,	// (0x00071c00) popup_call_audio_in_window_g1_ParamLimits

0xa9b4,	// (0x00071c00) popup_call_audio_in_window_g1

0xa9c0,	// (0x00071c0c) popup_call_audio_in_window_g2_ParamLimits

0xa9c0,	// (0x00071c0c) popup_call_audio_in_window_g2

0xa9cc,	// (0x00071c18) popup_call_audio_in_window_g3_ParamLimits

0xa9cc,	// (0x00071c18) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x00076350) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x00076350) popup_call_audio_in_window_g

0xa9d8,	// (0x00071c24) popup_call_audio_in_window_t1_ParamLimits

0xa9d8,	// (0x00071c24) popup_call_audio_in_window_t1

0xa9f3,	// (0x00071c3f) popup_call_audio_in_window_t2_ParamLimits

0xa9f3,	// (0x00071c3f) popup_call_audio_in_window_t2

0xaa0e,	// (0x00071c5a) popup_call_audio_in_window_t3_ParamLimits

0xaa0e,	// (0x00071c5a) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x00076357) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x00076357) popup_call_audio_in_window_t

0xa99e,	// (0x00071bea) bg_popup_call_pane_cp01_ParamLimits

0xa99e,	// (0x00071bea) bg_popup_call_pane_cp01

0xa9ac,	// (0x00071bf8) call_thumbnail_pane_cp02

0xaa21,	// (0x00071c6d) call_type_pane_cp022

0xaa29,	// (0x00071c75) popup_call_audio_out_window_g1_ParamLimits

0xaa29,	// (0x00071c75) popup_call_audio_out_window_g1

0xaa3b,	// (0x00071c87) popup_call_audio_out_window_g2_ParamLimits

0xaa3b,	// (0x00071c87) popup_call_audio_out_window_g2

0xaa47,	// (0x00071c93) popup_call_audio_out_window_g3_ParamLimits

0xaa47,	// (0x00071c93) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0007635e) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0007635e) popup_call_audio_out_window_g

0xaa59,	// (0x00071ca5) popup_call_audio_out_window_t1_ParamLimits

0xaa59,	// (0x00071ca5) popup_call_audio_out_window_t1

0xaa71,	// (0x00071cbd) popup_call_audio_out_window_t2_ParamLimits

0xaa71,	// (0x00071cbd) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x00076365) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x00076365) popup_call_audio_out_window_t

0xaa86,	// (0x00071cd2) bg_popup_call_pane_ParamLimits

0xaa86,	// (0x00071cd2) bg_popup_call_pane

0x2ed2,	// (0x0006a11e) call_thumbnail_pane_cp_ParamLimits

0x2ed2,	// (0x0006a11e) call_thumbnail_pane_cp

0xab0a,	// (0x00071d56) call_type_pane_cp01_ParamLimits

0xab0a,	// (0x00071d56) call_type_pane_cp01

0xab4e,	// (0x00071d9a) popup_call_audio_first_window_g1_ParamLimits

0xab4e,	// (0x00071d9a) popup_call_audio_first_window_g1

0xab9a,	// (0x00071de6) popup_call_audio_first_window_g2_ParamLimits

0xab9a,	// (0x00071de6) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0007636a) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0007636a) popup_call_audio_first_window_g

0xabde,	// (0x00071e2a) popup_call_audio_first_window_t1_ParamLimits

0xabde,	// (0x00071e2a) popup_call_audio_first_window_t1

0xac8a,	// (0x00071ed6) popup_call_audio_first_window_t4_ParamLimits

0xac8a,	// (0x00071ed6) popup_call_audio_first_window_t4

0xad16,	// (0x00071f62) popup_call_audio_first_window_t5_ParamLimits

0xad16,	// (0x00071f62) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0007636f) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0007636f) popup_call_audio_first_window_t

0xad45,	// (0x00071f91) bg_popup_call_pane_cp02

0xad4f,	// (0x00071f9b) call_type_pane_cp023

0xad57,	// (0x00071fa3) popup_call_audio_wait_window_g1

0xad5f,	// (0x00071fab) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00076376) popup_call_audio_wait_window_g

0xad67,	// (0x00071fb3) popup_call_audio_wait_window_t3

0xad75,	// (0x00071fc1) bg_popup_call_pane_cp03_ParamLimits

0xad75,	// (0x00071fc1) bg_popup_call_pane_cp03

0xadd5,	// (0x00072021) call_thumbnail_pane_cp011_ParamLimits

0xadd5,	// (0x00072021) call_thumbnail_pane_cp011

0xade1,	// (0x0007202d) call_type_pane_cp034_ParamLimits

0xade1,	// (0x0007202d) call_type_pane_cp034

0xae1d,	// (0x00072069) popup_call_audio_second_window_g1_ParamLimits

0xae1d,	// (0x00072069) popup_call_audio_second_window_g1

0xae59,	// (0x000720a5) popup_call_audio_second_window_g2_ParamLimits

0xae59,	// (0x000720a5) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0007637b) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0007637b) popup_call_audio_second_window_g

0xae95,	// (0x000720e1) popup_call_audio_second_window_t1_ParamLimits

0xae95,	// (0x000720e1) popup_call_audio_second_window_t1

0xaf16,	// (0x00072162) popup_call_audio_second_window_t2_ParamLimits

0xaf16,	// (0x00072162) popup_call_audio_second_window_t2

0xaf4c,	// (0x00072198) popup_call_audio_second_window_t3_ParamLimits

0xaf4c,	// (0x00072198) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x00076380) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x00076380) popup_call_audio_second_window_t

0xad45,	// (0x00071f91) bg_popup_call_pane_cp04

0xaf82,	// (0x000721ce) list_conf_pane

0xaf8a,	// (0x000721d6) popup_call_audio_conf_window_t1

0xaf98,	// (0x000721e4) call_thumbnail_pane_g1

0xafa0,	// (0x000721ec) bg_pinb_pane_ParamLimits

0xafa0,	// (0x000721ec) bg_pinb_pane

0xafae,	// (0x000721fa) find_pinb_pane

0xafb7,	// (0x00072203) listscroll_pinb_pane_ParamLimits

0xafb7,	// (0x00072203) listscroll_pinb_pane

0xafc6,	// (0x00072212) pinb_bg_pane_g1

0x2ef6,	// (0x0006a142) pinb_bg_pane_g2

0x2f00,	// (0x0006a14c) pinb_bg_pane_g3

0x2f0a,	// (0x0006a156) pinb_bg_pane_g4

0x2f14,	// (0x0006a160) pinb_bg_pane_g5

0x2f1e,	// (0x0006a16a) pinb_bg_pane_g6

0x2f27,	// (0x0006a173) pinb_bg_pane_g7

0x2f30,	// (0x0006a17c) pinb_bg_pane_g8

0x2f3b,	// (0x0006a187) pinb_bg_pane_g9

0x2f45,	// (0x0006a191) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x00076387) pinb_bg_pane_g

0x2f60,	// (0x0006a1ac) grid_pinb_pane

0x2f69,	// (0x0006a1b5) list_pinb_pane

0x2f72,	// (0x0006a1be) scroll_pane_cp01_ParamLimits

0x2f72,	// (0x0006a1be) scroll_pane_cp01

0xafd0,	// (0x0007221c) find_pinb_pane_g1_ParamLimits

0xafd0,	// (0x0007221c) find_pinb_pane_g1

0xafe8,	// (0x00072234) find_pinb_pane_t1

0xaffa,	// (0x00072246) find_pinb_pane_t2

0x0001,

0xf155,	// (0x000763a1) find_pinb_pane_t

0xb00f,	// (0x0007225b) input_focus_pane_cp01_ParamLimits

0xb00f,	// (0x0007225b) input_focus_pane_cp01

0x2f84,	// (0x0006a1d0) cell_pinb_pane_ParamLimits

0x2f84,	// (0x0006a1d0) cell_pinb_pane

0x2f9f,	// (0x0006a1eb) cell_pinb_pane_g1_ParamLimits

0x2f9f,	// (0x0006a1eb) cell_pinb_pane_g1

0x2faf,	// (0x0006a1fb) cell_pinb_pane_g2_ParamLimits

0x2faf,	// (0x0006a1fb) cell_pinb_pane_g2

0xb01b,	// (0x00072267) cell_pinb_pane_g3_ParamLimits

0xb01b,	// (0x00072267) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x000763a6) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x000763a6) cell_pinb_pane_g

0xad45,	// (0x00071f91) grid_highlight_pane_cp01

0x2fbb,	// (0x0006a207) list_pinb_item_pane_ParamLimits

0x2fbb,	// (0x0006a207) list_pinb_item_pane

0xad45,	// (0x00071f91) list_highlight_pane_cp02

0x2fcd,	// (0x0006a219) list_pinb_item_pane_g1_ParamLimits

0x2fcd,	// (0x0006a219) list_pinb_item_pane_g1

0x2fda,	// (0x0006a226) list_pinb_item_pane_g2_ParamLimits

0x2fda,	// (0x0006a226) list_pinb_item_pane_g2

0x2fe6,	// (0x0006a232) list_pinb_item_pane_g3_ParamLimits

0x2fe6,	// (0x0006a232) list_pinb_item_pane_g3

0x2ff7,	// (0x0006a243) list_pinb_item_pane_g4_ParamLimits

0x2ff7,	// (0x0006a243) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x000763ad) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x000763ad) list_pinb_item_pane_g

0x3003,	// (0x0006a24f) list_pinb_item_pane_t1_ParamLimits

0x3003,	// (0x0006a24f) list_pinb_item_pane_t1

0x3038,	// (0x0006a284) calc_display_pane

0x3054,	// (0x0006a2a0) calc_paper_pane

0x3075,	// (0x0006a2c1) grid_calc_pane

0xad45,	// (0x00071f91) bg_list_pane_cp01

0x3091,	// (0x0006a2dd) clock_g1

0x3099,	// (0x0006a2e5) clock_g2

0x0001,

0xf16a,	// (0x000763b6) clock_g

0x30a1,	// (0x0006a2ed) clock_t1_ParamLimits

0x30a1,	// (0x0006a2ed) clock_t1

0x30b6,	// (0x0006a302) clock_t2_ParamLimits

0x30b6,	// (0x0006a302) clock_t2

0x30c8,	// (0x0006a314) clock_t3_ParamLimits

0x30c8,	// (0x0006a314) clock_t3

0x30da,	// (0x0006a326) clock_t4_ParamLimits

0x30da,	// (0x0006a326) clock_t4

0x30ec,	// (0x0006a338) clock_t5_ParamLimits

0x30ec,	// (0x0006a338) clock_t5

0x3101,	// (0x0006a34d) clock_t6_ParamLimits

0x3101,	// (0x0006a34d) clock_t6

0x3113,	// (0x0006a35f) clock_t7_ParamLimits

0x3113,	// (0x0006a35f) clock_t7

0x3125,	// (0x0006a371) clock_t8_ParamLimits

0x3125,	// (0x0006a371) clock_t8

0x3137,	// (0x0006a383) clock_t9_ParamLimits

0x3137,	// (0x0006a383) clock_t9

0x0008,

0xf16f,	// (0x000763bb) clock_t_ParamLimits

0xf16f,	// (0x000763bb) clock_t

0xb02f,	// (0x0007227b) popup_clock_analogue_window_cp02

0xb02f,	// (0x0007227b) popup_clock_digital_window_cp01

0xb037,	// (0x00072283) listscroll_help_pane

0xad45,	// (0x00071f91) phob_pre_status_pane

0xb041,	// (0x0007228d) grid_qdial_pane

0xad45,	// (0x00071f91) listscroll_mce_pane

0xb04b,	// (0x00072297) bg_notes_pane

0xb055,	// (0x000722a1) list_notes_pane

0x3149,	// (0x0006a395) scroll_pane_cp06

0xb05f,	// (0x000722ab) bg_calc_paper_pane

0xb077,	// (0x000722c3) list_calc_pane

0xb091,	// (0x000722dd) bg_calc_display_pane

0xb09d,	// (0x000722e9) calc_display_pane_t1

0xb0b2,	// (0x000722fe) calc_display_pane_t2

0xb0c7,	// (0x00072313) calc_display_pane_t3

0x0002,

0xf182,	// (0x000763ce) calc_display_pane_t

0x3154,	// (0x0006a3a0) cell_calc_pane_ParamLimits

0x3154,	// (0x0006a3a0) cell_calc_pane

0xb0d9,	// (0x00072325) bg_calc_paper_pane_g1

0xb0e5,	// (0x00072331) bg_calc_paper_pane_g2

0xb0f1,	// (0x0007233d) bg_calc_paper_pane_g3

0xb0fd,	// (0x00072349) bg_calc_paper_pane_g4

0xb109,	// (0x00072355) bg_calc_paper_pane_g5

0x3187,	// (0x0006a3d3) bg_calc_paper_pane_g6

0x3196,	// (0x0006a3e2) bg_calc_paper_pane_g7

0x31a5,	// (0x0006a3f1) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x000763d5) bg_calc_paper_pane_g

0x31b4,	// (0x0006a400) calc_bg_paper_pane_g9

0x31c3,	// (0x0006a40f) list_calc_item_pane_ParamLimits

0x31c3,	// (0x0006a40f) list_calc_item_pane

0xb115,	// (0x00072361) list_calc_item_pane_g1

0xb122,	// (0x0007236e) list_calc_item_pane_t1_ParamLimits

0xb122,	// (0x0007236e) list_calc_item_pane_t1

0x31d7,	// (0x0006a423) list_calc_item_pane_t2_ParamLimits

0x31d7,	// (0x0006a423) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x000763e6) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x000763e6) list_calc_item_pane_t

0xb134,	// (0x00072380) cell_calc_pane_g1

0xb13e,	// (0x0007238a) grid_highlight_pane_cp02

0xb160,	// (0x000723ac) bg_calc_display_pane_g1

0xb169,	// (0x000723b5) bg_calc_display_pane_g2

0xb173,	// (0x000723bf) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x000763f0) bg_calc_display_pane_g

0x3205,	// (0x0006a451) cell_qdial_pane_ParamLimits

0x3205,	// (0x0006a451) cell_qdial_pane

0x3217,	// (0x0006a463) cell_qdial_pane_g1_ParamLimits

0x3217,	// (0x0006a463) cell_qdial_pane_g1

0x322d,	// (0x0006a479) cell_qdial_pane_g2_ParamLimits

0x322d,	// (0x0006a479) cell_qdial_pane_g2

0xb17c,	// (0x000723c8) cell_qdial_pane_g3_ParamLimits

0xb17c,	// (0x000723c8) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x000763f7) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x000763f7) cell_qdial_pane_g

0x3254,	// (0x0006a4a0) cell_qdial_pane_t1_ParamLimits

0x3254,	// (0x0006a4a0) cell_qdial_pane_t1

0x326c,	// (0x0006a4b8) cell_qdial_pane_t2_ParamLimits

0x326c,	// (0x0006a4b8) cell_qdial_pane_t2

0x327f,	// (0x0006a4cb) cell_qdial_pane_t3_ParamLimits

0x327f,	// (0x0006a4cb) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x00076400) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x00076400) cell_qdial_pane_t

0xad45,	// (0x00071f91) grid_highlight_pane_cp04

0xb188,	// (0x000723d4) thumbnail_qdial_pane_ParamLimits

0xb188,	// (0x000723d4) thumbnail_qdial_pane

0xb1e4,	// (0x00072430) list_help_pane

0xb1ee,	// (0x0007243a) scroll_pane_cp02

0x3292,	// (0x0006a4de) help_list_pane_t1_ParamLimits

0x3292,	// (0x0006a4de) help_list_pane_t1

0xb1f7,	// (0x00072443) bg_notes_pane_g2

0xb1ff,	// (0x0007244b) bg_notes_pane_g3

0xb207,	// (0x00072453) notes_bg_pane_g1

0xb20f,	// (0x0007245b) notes_bg_pane_g4

0xb217,	// (0x00072463) notes_bg_pane_g5

0xb21f,	// (0x0007246b) notes_bg_pane_g6

0xb227,	// (0x00072473) notes_bg_pane_g7

0xb22f,	// (0x0007247b) notes_bg_pane_g8

0xb237,	// (0x00072483) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0007641e) notes_bg_pane_g

0x109a,	// (0x000682e6) list_notes_text_pane_ParamLimits

0x109a,	// (0x000682e6) list_notes_text_pane

0xb23f,	// (0x0007248b) list_notes_text_pane_g1

0x22e6,	// (0x00069532) list_notes_text_pane_t1

0xb259,	// (0x000724a5) listscroll_cale_week_pane

0x32c9,	// (0x0006a515) bg_cale_heading_pane

0xb268,	// (0x000724b4) bg_cale_pane_cp01

0x32dd,	// (0x0006a529) cale_week_corner_pane

0x32f3,	// (0x0006a53f) cale_week_day_heading_pane

0x3307,	// (0x0006a553) cale_week_scroll_pane_g1

0x3318,	// (0x0006a564) cale_week_scroll_pane_g2

0x3329,	// (0x0006a575) cale_week_scroll_pane_g3

0x333a,	// (0x0006a586) cale_week_scroll_pane_g4

0x334b,	// (0x0006a597) cale_week_scroll_pane_g5

0x335c,	// (0x0006a5a8) cale_week_scroll_pane_g6

0x336d,	// (0x0006a5b9) cale_week_scroll_pane_g7

0x337e,	// (0x0006a5ca) cale_week_scroll_pane_g8

0x3391,	// (0x0006a5dd) cale_week_scroll_pane_g9

0x33a2,	// (0x0006a5ee) cale_week_scroll_pane_g10

0x33b3,	// (0x0006a5ff) cale_week_scroll_pane_g11

0x33c4,	// (0x0006a610) cale_week_scroll_pane_g12

0x33d5,	// (0x0006a621) cale_week_scroll_pane_g13

0x33e6,	// (0x0006a632) cale_week_scroll_pane_g14

0x33f7,	// (0x0006a643) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0007642d) cale_week_scroll_pane_g

0x3408,	// (0x0006a654) cale_week_time_pane

0x341b,	// (0x0006a667) grid_cale_week_pane

0x342e,	// (0x0006a67a) scroll_pane_cp08

0x3448,	// (0x0006a694) cell_cale_week_pane_ParamLimits

0x3448,	// (0x0006a694) cell_cale_week_pane

0x3484,	// (0x0006a6d0) cale_week_day_heading_pane_t1

0x34ae,	// (0x0006a6fa) cale_week_day_heading_pane_t2

0x34d8,	// (0x0006a724) cale_week_day_heading_pane_t3

0x3502,	// (0x0006a74e) cale_week_day_heading_pane_t4

0x352c,	// (0x0006a778) cale_week_day_heading_pane_t5

0x3556,	// (0x0006a7a2) cale_week_day_heading_pane_t6

0x3580,	// (0x0006a7cc) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0007644c) cale_week_day_heading_pane_t

0xb293,	// (0x000724df) bg_cale_side_pane

0x35aa,	// (0x0006a7f6) cale_week_time_pane_t1

0x35d6,	// (0x0006a822) cale_week_time_pane_t2

0x3602,	// (0x0006a84e) cale_week_time_pane_t3

0x362e,	// (0x0006a87a) cale_week_time_pane_t4

0x365a,	// (0x0006a8a6) cale_week_time_pane_t5

0x3686,	// (0x0006a8d2) cale_week_time_pane_t6

0x36b2,	// (0x0006a8fe) cale_week_time_pane_t7

0x36de,	// (0x0006a92a) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0007645b) cale_week_time_pane_t

0x370a,	// (0x0006a956) cell_cale_week_pane_g2

0x3723,	// (0x0006a96f) cell_cale_week_pane_g3_ParamLimits

0x3723,	// (0x0006a96f) cell_cale_week_pane_g3

0xb2a1,	// (0x000724ed) grid_highlight_pane_cp07

0xb2a9,	// (0x000724f5) listscroll_gms_pane

0xb2b3,	// (0x000724ff) grid_gms_pane

0xb2bc,	// (0x00072508) listscroll_gms_pane_g1

0xb2c4,	// (0x00072510) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0007646c) listscroll_gms_pane_g

0x373b,	// (0x0006a987) scroll_pane_cp010

0x3746,	// (0x0006a992) cell_gms_pane_ParamLimits

0x3746,	// (0x0006a992) cell_gms_pane

0x3756,	// (0x0006a9a2) cell_gms_pane_g1

0xb2cc,	// (0x00072518) cell_gms_pane_g2

0xb23f,	// (0x0007248b) cell_gms_pane_g3

0xb2d4,	// (0x00072520) cell_gms_pane_g4

0x0003,

0xf225,	// (0x00076471) cell_gms_pane_g

0xb2dd,	// (0x00072529) grid_highlight_pane_cp09

0x60b5,	// (0x0006d301) phob_pre_status_pane_g1

0x60bd,	// (0x0006d309) phob_pre_status_pane_g2

0x60c5,	// (0x0006d311) phob_pre_status_pane_g3

0x60cd,	// (0x0006d319) phob_pre_status_pane_g4

0x0004,

0xf627,	// (0x00076873) phob_pre_status_pane_g

0x60dd,	// (0x0006d329) phob_pre_status_pane_t1

0x60eb,	// (0x0006d337) phob_pre_status_pane_t2

0x60f9,	// (0x0006d345) phob_pre_status_pane_t3

0x0002,

0xf632,	// (0x0007687e) phob_pre_status_pane_t

0xad45,	// (0x00071f91) bg_list_pane_cp05

0x3766,	// (0x0006a9b2) grid_vorec_pane

0xb2e5,	// (0x00072531) vorec_t1

0xb2f3,	// (0x0007253f) vorec_t2

0xb301,	// (0x0007254d) vorec_t3

0xb30f,	// (0x0007255b) vorec_t4

0xb31d,	// (0x00072569) vorec_t5

0xb32b,	// (0x00072577) vorec_t6

0x0006,

0xf22e,	// (0x0007647a) vorec_t

0xb347,	// (0x00072593) wait_bar_pane_cp01

0x376e,	// (0x0006a9ba) cell_vorec_pane_ParamLimits

0x376e,	// (0x0006a9ba) cell_vorec_pane

0xb34f,	// (0x0007259b) cell_vorec_pane_g1

0xad45,	// (0x00071f91) grid_highlight_pane_cp05

0x3793,	// (0x0006a9df) cams_zoom_pane

0x37a2,	// (0x0006a9ee) image_vga_pane

0x37ba,	// (0x0006aa06) main_camera_pane_g1

0x37ca,	// (0x0006aa16) main_camera_pane_g2

0x37da,	// (0x0006aa26) main_camera_pane_g3

0x37ea,	// (0x0006aa36) main_camera_pane_g4

0x37fa,	// (0x0006aa46) main_camera_pane_g5

0x380a,	// (0x0006aa56) main_camera_pane_g6

0x381a,	// (0x0006aa66) main_camera_pane_g7

0x0007,

0xf23d,	// (0x00076489) main_camera_pane_g

0x382a,	// (0x0006aa76) main_camera_pane_t1

0x3840,	// (0x0006aa8c) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0007649a) main_camera_pane_t

0x3872,	// (0x0006aabe) cams_zoom_pane_cp_ParamLimits

0x3872,	// (0x0006aabe) cams_zoom_pane_cp

0x389a,	// (0x0006aae6) image_cif_pane_ParamLimits

0x389a,	// (0x0006aae6) image_cif_pane

0x38cb,	// (0x0006ab17) image_subqcif_pane

0x38d3,	// (0x0006ab1f) main_video_pane_g1_ParamLimits

0x38d3,	// (0x0006ab1f) main_video_pane_g1

0x38f7,	// (0x0006ab43) main_video_pane_g2_ParamLimits

0x38f7,	// (0x0006ab43) main_video_pane_g2

0x392b,	// (0x0006ab77) main_video_pane_g3_ParamLimits

0x392b,	// (0x0006ab77) main_video_pane_g3

0x3959,	// (0x0006aba5) main_video_pane_g4_ParamLimits

0x3959,	// (0x0006aba5) main_video_pane_g4

0x3987,	// (0x0006abd3) main_video_pane_g5_ParamLimits

0x3987,	// (0x0006abd3) main_video_pane_g5

0xb365,	// (0x000725b1) main_video_pane_g6_ParamLimits

0xb365,	// (0x000725b1) main_video_pane_g6

0x0006,

0xf253,	// (0x0007649f) main_video_pane_g_ParamLimits

0xf253,	// (0x0007649f) main_video_pane_g

0x39ae,	// (0x0006abfa) main_video_pane_t1_ParamLimits

0x39ae,	// (0x0006abfa) main_video_pane_t1

0xb37f,	// (0x000725cb) cams_zoom_pane_g1

0xb388,	// (0x000725d4) cams_zoom_pane_g2

0xb391,	// (0x000725dd) cams_zoom_pane_g3

0xb39a,	// (0x000725e6) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x000764ae) cams_zoom_pane_g

0x3a0b,	// (0x0006ac57) grid_cams_pane

0x3a20,	// (0x0006ac6c) linegrid_cams_pane

0x3a31,	// (0x0006ac7d) cell_cams_pane_ParamLimits

0x3a31,	// (0x0006ac7d) cell_cams_pane

0xb3a3,	// (0x000725ef) cams_burst_image_pane

0xb3ab,	// (0x000725f7) cell_cams_pane_g1

0xad45,	// (0x00071f91) grid_highlight_pane_cp03

0xb134,	// (0x00072380) mp_bg_pane_g1

0xad45,	// (0x00071f91) bg_list_pane_cp03

0xc17c,	// (0x000733c8) bg_mp_pane

0xc184,	// (0x000733d0) grid_mp_pane

0xc18c,	// (0x000733d8) media_player_g1

0xc194,	// (0x000733e0) media_player_t1

0xc1a2,	// (0x000733ee) media_player_t2

0xc1b0,	// (0x000733fc) media_player_t3

0xc1be,	// (0x0007340a) media_player_t4

0xc1cc,	// (0x00073418) media_player_t5

0xc1da,	// (0x00073426) media_player_t6

0xc1e8,	// (0x00073434) media_player_t7

0x0006,

0xf611,	// (0x0007685d) media_player_t

0xc1f6,	// (0x00073442) wait_bar_pane_cp02

0xf5f6,	// (0x00076842) main_usb_pane_t

0x60ac,	// (0x0006d2f8) cell_mp_pane

0xb134,	// (0x00072380) cell_mp_pane_g1

0xad45,	// (0x00071f91) grid_highlight_pane_cp06

0xb453,	// (0x0007269f) grid_skin_colour_pane

0xb45b,	// (0x000726a7) list_highlight_pane_cp03

0x3a4f,	// (0x0006ac9b) skin_g1

0xb463,	// (0x000726af) skin_t1

0xb472,	// (0x000726be) skin_t2

0x0001,

0xf297,	// (0x000764e3) skin_t

0x3a57,	// (0x0006aca3) cell_skin_colour_pane_ParamLimits

0x3a57,	// (0x0006aca3) cell_skin_colour_pane

0xb480,	// (0x000726cc) cell_skin_colour_pane_g1

0x3aa9,	// (0x0006acf5) call_video_g1_ParamLimits

0x3aa9,	// (0x0006acf5) call_video_g1

0x3abf,	// (0x0006ad0b) call_video_g2_ParamLimits

0x3abf,	// (0x0006ad0b) call_video_g2

0x0001,

0xf29c,	// (0x000764e8) call_video_g_ParamLimits

0xf29c,	// (0x000764e8) call_video_g

0x3af5,	// (0x0006ad41) call_video_uplink_pane_cp1_ParamLimits

0x3af5,	// (0x0006ad41) call_video_uplink_pane_cp1

0xb49a,	// (0x000726e6) call_video_uplink_pane_cp2

0x3b5c,	// (0x0006ada8) video_down_crop_pane_ParamLimits

0x3b5c,	// (0x0006ada8) video_down_crop_pane

0x3c04,	// (0x0006ae50) video_down_pane_ParamLimits

0x3c04,	// (0x0006ae50) video_down_pane

0xb4a2,	// (0x000726ee) video_down_subqcif_pane_ParamLimits

0xb4a2,	// (0x000726ee) video_down_subqcif_pane

0xb4ba,	// (0x00072706) video_down_subqcif_pane_cp_ParamLimits

0xb4ba,	// (0x00072706) video_down_subqcif_pane_cp

0xb4de,	// (0x0007272a) im_reading_pane_ParamLimits

0xb4de,	// (0x0007272a) im_reading_pane

0x3c94,	// (0x0006aee0) im_writing_pane_ParamLimits

0x3c94,	// (0x0006aee0) im_writing_pane

0x3caa,	// (0x0006aef6) im_reading_pane_t1

0xb4f8,	// (0x00072744) list_im_pane

0xb509,	// (0x00072755) scroll_pane_cp07

0x3ce0,	// (0x0006af2c) im_writing_pane_t1_ParamLimits

0x3ce0,	// (0x0006af2c) im_writing_pane_t1

0xb522,	// (0x0007276e) im_writing_pane_t2_ParamLimits

0xb522,	// (0x0007276e) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x000764f2) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x000764f2) im_writing_pane_t

0xad45,	// (0x00071f91) input_focus_pane_cp04

0xad45,	// (0x00071f91) input_focus_pane_cp05

0x3cf5,	// (0x0006af41) list_im_single_pane_ParamLimits

0x3cf5,	// (0x0006af41) list_im_single_pane

0xb53f,	// (0x0007278b) list_single_im_pane_t1

0x6072,	// (0x0006d2be) blid_accuracy_pane

0x607a,	// (0x0006d2c6) blid_compass_pane

0x6082,	// (0x0006d2ce) main_location_t1

0x6090,	// (0x0006d2dc) main_location_t2

0x609e,	// (0x0006d2ea) main_location_t3

0x0002,

0xf620,	// (0x0007686c) main_location_t

0xad45,	// (0x00071f91) aid_levels_location

0xb134,	// (0x00072380) blid_accuracy_pane_g1

0xb134,	// (0x00072380) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x00076554) blid_accuracy_pane_g

0xb579,	// (0x000727c5) wml_content_pane

0xb5b7,	// (0x00072803) wml_button_pane_ParamLimits

0xb5b7,	// (0x00072803) wml_button_pane

0x3d0b,	// (0x0006af57) wml_list_single_large_pane_ParamLimits

0x3d0b,	// (0x0006af57) wml_list_single_large_pane

0x3d1f,	// (0x0006af6b) wml_list_single_medium_pane_ParamLimits

0x3d1f,	// (0x0006af6b) wml_list_single_medium_pane

0x3d34,	// (0x0006af80) wml_list_single_small_pane_ParamLimits

0x3d34,	// (0x0006af80) wml_list_single_small_pane

0xb5cb,	// (0x00072817) wml_selection_box_pane_ParamLimits

0xb5cb,	// (0x00072817) wml_selection_box_pane

0xb5de,	// (0x0007282a) wml_list_single_pane_t1

0xb5ed,	// (0x00072839) wml_list_single_medium_pane_t1

0xb5fc,	// (0x00072848) wml_list_single_large_pane_t1

0xb60b,	// (0x00072857) input_focus_pane_cp02_ParamLimits

0xb60b,	// (0x00072857) input_focus_pane_cp02

0xb61e,	// (0x0007286a) wml_selection_box_pane_g1

0xb627,	// (0x00072873) wml_selection_box_pane_t1_ParamLimits

0xb627,	// (0x00072873) wml_selection_box_pane_t1

0xafa0,	// (0x000721ec) bg_wml_button_pane_ParamLimits

0xafa0,	// (0x000721ec) bg_wml_button_pane

0xb63f,	// (0x0007288b) wml_button_pane_g1

0xb647,	// (0x00072893) wml_button_pane_t1

0xb63f,	// (0x0007288b) wml_button_bg_pane_g1

0xb657,	// (0x000728a3) wml_button_bg_pane_g2

0xb65f,	// (0x000728ab) wml_button_bg_pane_g3

0xb667,	// (0x000728b3) wml_button_bg_pane_g4

0xb66f,	// (0x000728bb) wml_button_bg_pane_g5

0xb677,	// (0x000728c3) wml_button_bg_pane_g6

0xb67f,	// (0x000728cb) wml_button_bg_pane_g7

0xb687,	// (0x000728d3) wml_button_bg_pane_g8

0xb68f,	// (0x000728db) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x000764f7) wml_button_bg_pane_g

0x3d4b,	// (0x0006af97) bg_list_pane_cp02

0xb697,	// (0x000728e3) mce_header_pane_ParamLimits

0xb697,	// (0x000728e3) mce_header_pane

0xb6ab,	// (0x000728f7) mce_icon_pane

0xb6ab,	// (0x000728f7) mce_image_pane

0xb6b4,	// (0x00072900) mce_text_pane_ParamLimits

0xb6b4,	// (0x00072900) mce_text_pane

0x3d54,	// (0x0006afa0) scroll_pane_cp03

0x3d54,	// (0x0006afa0) scroll_pane_cp04

0xb6c8,	// (0x00072914) scroll_pane_cp05_ParamLimits

0xb6c8,	// (0x00072914) scroll_pane_cp05

0x3d5e,	// (0x0006afaa) mce_header_field_pane_ParamLimits

0x3d5e,	// (0x0006afaa) mce_header_field_pane

0x3d75,	// (0x0006afc1) mce_header_field_pane_2_ParamLimits

0x3d75,	// (0x0006afc1) mce_header_field_pane_2

0x3d8b,	// (0x0006afd7) mce_header_field_pane_3

0x3d93,	// (0x0006afdf) list_single_mce_message_pane_ParamLimits

0x3d93,	// (0x0006afdf) list_single_mce_message_pane

0x3da8,	// (0x0006aff4) list_single_mce_smart_pane_ParamLimits

0x3da8,	// (0x0006aff4) list_single_mce_smart_pane

0xb6d4,	// (0x00072920) input_focus_pane_cp03

0xb6dd,	// (0x00072929) list_header_data_pane

0x3dc8,	// (0x0006b014) mce_header_field_pane_t1

0x3dd6,	// (0x0006b022) list_single_mce_header_pane_ParamLimits

0x3dd6,	// (0x0006b022) list_single_mce_header_pane

0xb6e5,	// (0x00072931) list_single_mce_header_pane_t1

0xb6f4,	// (0x00072940) list_single_mce_message_pane_g1

0xb6fd,	// (0x00072949) list_single_mce_message_pane_t1

0x3e08,	// (0x0006b054) bg_cale_heading_pane_cp01_ParamLimits

0x3e08,	// (0x0006b054) bg_cale_heading_pane_cp01

0xb70c,	// (0x00072958) bg_cale_pane_cp02_ParamLimits

0xb70c,	// (0x00072958) bg_cale_pane_cp02

0x3e2b,	// (0x0006b077) cale_month_corner_pane

0x3e41,	// (0x0006b08d) cale_month_day_heading_pane_ParamLimits

0x3e41,	// (0x0006b08d) cale_month_day_heading_pane

0x3e74,	// (0x0006b0c0) cale_month_pane_g1_ParamLimits

0x3e74,	// (0x0006b0c0) cale_month_pane_g1

0x3e90,	// (0x0006b0dc) cale_month_pane_g2_ParamLimits

0x3e90,	// (0x0006b0dc) cale_month_pane_g2

0x3eab,	// (0x0006b0f7) cale_month_pane_g3_ParamLimits

0x3eab,	// (0x0006b0f7) cale_month_pane_g3

0x3ed7,	// (0x0006b123) cale_month_pane_g4_ParamLimits

0x3ed7,	// (0x0006b123) cale_month_pane_g4

0x3f03,	// (0x0006b14f) cale_month_pane_g5_ParamLimits

0x3f03,	// (0x0006b14f) cale_month_pane_g5

0x3f2f,	// (0x0006b17b) cale_month_pane_g6_ParamLimits

0x3f2f,	// (0x0006b17b) cale_month_pane_g6

0x3f5b,	// (0x0006b1a7) cale_month_pane_g7_ParamLimits

0x3f5b,	// (0x0006b1a7) cale_month_pane_g7

0x3f87,	// (0x0006b1d3) cale_month_pane_g8_ParamLimits

0x3f87,	// (0x0006b1d3) cale_month_pane_g8

0x3fc3,	// (0x0006b20f) cale_month_pane_g9_ParamLimits

0x3fc3,	// (0x0006b20f) cale_month_pane_g9

0x3ffd,	// (0x0006b249) cale_month_pane_g10_ParamLimits

0x3ffd,	// (0x0006b249) cale_month_pane_g10

0x4037,	// (0x0006b283) cale_month_pane_g11_ParamLimits

0x4037,	// (0x0006b283) cale_month_pane_g11

0x4071,	// (0x0006b2bd) cale_month_pane_g12_ParamLimits

0x4071,	// (0x0006b2bd) cale_month_pane_g12

0x40ab,	// (0x0006b2f7) cale_month_pane_g13_ParamLimits

0x40ab,	// (0x0006b2f7) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0007650a) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0007650a) cale_month_pane_g

0x40e5,	// (0x0006b331) cale_month_week_pane

0x40f8,	// (0x0006b344) grid_cale_month_pane_ParamLimits

0x40f8,	// (0x0006b344) grid_cale_month_pane

0x4126,	// (0x0006b372) cale_month_day_heading_pane_t1

0x4184,	// (0x0006b3d0) cale_month_day_heading_pane_t2

0x41e9,	// (0x0006b435) cale_month_day_heading_pane_t3

0x424e,	// (0x0006b49a) cale_month_day_heading_pane_t4

0x42b3,	// (0x0006b4ff) cale_month_day_heading_pane_t5

0x4318,	// (0x0006b564) cale_month_day_heading_pane_t6

0x437d,	// (0x0006b5c9) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x00076525) cale_month_day_heading_pane_t

0xb293,	// (0x000724df) bg_cale_side_pane_cp01

0x43ea,	// (0x0006b636) cale_month_week_pane_t1

0x4401,	// (0x0006b64d) cale_month_week_pane_t2

0x4418,	// (0x0006b664) cale_month_week_pane_t3

0x442f,	// (0x0006b67b) cale_month_week_pane_t4

0x4446,	// (0x0006b692) cale_month_week_pane_t5

0x445d,	// (0x0006b6a9) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x00076534) cale_month_week_pane_t

0x4474,	// (0x0006b6c0) cell_cale_month_pane_ParamLimits

0x4474,	// (0x0006b6c0) cell_cale_month_pane

0xb76b,	// (0x000729b7) cell_cale_month_pane_g1

0x4522,	// (0x0006b76e) cell_cale_month_pane_t1_ParamLimits

0x4522,	// (0x0006b76e) cell_cale_month_pane_t1

0xb2a1,	// (0x000724ed) grid_highlight_pane_cp08

0xb134,	// (0x00072380) main_smil_g1

0x453e,	// (0x0006b78a) smil_status_pane

0xb777,	// (0x000729c3) smil_text_pane

0xc05c,	// (0x000732a8) bg_popup_call3_rect_pane_g8

0xc064,	// (0x000732b0) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x000767ed) bg_popup_call3_rect_pane_g

0xc31a,	// (0x00073566) smil_status_volume_pane_g1

0xb781,	// (0x000729cd) smil_status_pane_t1

0xec0c,	// (0x00075e58) volume_smil_pane

0xb798,	// (0x000729e4) list_smil_text_pane

0x454f,	// (0x0006b79b) scroll_pane_cp011

0x455a,	// (0x0006b7a6) smil_text_list_pane_t1_ParamLimits

0x455a,	// (0x0006b7a6) smil_text_list_pane_t1

0xb7a2,	// (0x000729ee) aid_volume_smil_ParamLimits

0xb7a2,	// (0x000729ee) aid_volume_smil

0xb134,	// (0x00072380) smil_volume_pane_g1

0xb134,	// (0x00072380) smil_volume_pane_g2

0x0001,

0xf308,	// (0x00076554) smil_volume_pane_g

0xb091,	// (0x000722dd) listscroll_cale_day_pane

0xb7c4,	// (0x00072a10) bg_cale_pane

0xb7dc,	// (0x00072a28) list_cale_pane

0xb7ed,	// (0x00072a39) scroll_pane_cp09

0xb7fe,	// (0x00072a4a) cale_bg_pane_g1

0xb806,	// (0x00072a52) cale_bg_pane_g2

0xb80e,	// (0x00072a5a) cale_bg_pane_g3

0xb816,	// (0x00072a62) cale_bg_pane_g4

0xb81e,	// (0x00072a6a) cale_bg_pane_g5

0xb826,	// (0x00072a72) cale_bg_pane_g6

0xb82e,	// (0x00072a7a) cale_bg_pane_g7

0xb836,	// (0x00072a82) cale_bg_pane_g8

0xb83e,	// (0x00072a8a) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x00076559) cale_bg_pane_g

0x4598,	// (0x0006b7e4) list_cale_time_pane_ParamLimits

0x4598,	// (0x0006b7e4) list_cale_time_pane

0xb846,	// (0x00072a92) list_cale_time_pane_g1_ParamLimits

0xb846,	// (0x00072a92) list_cale_time_pane_g1

0xb852,	// (0x00072a9e) list_cale_time_pane_g2_ParamLimits

0xb852,	// (0x00072a9e) list_cale_time_pane_g2

0x45ad,	// (0x0006b7f9) list_cale_time_pane_g3_ParamLimits

0x45ad,	// (0x0006b7f9) list_cale_time_pane_g3

0x45bb,	// (0x0006b807) list_cale_time_pane_g4_ParamLimits

0x45bb,	// (0x0006b807) list_cale_time_pane_g4

0x45c9,	// (0x0006b815) list_cale_time_pane_g5_ParamLimits

0x45c9,	// (0x0006b815) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0007656c) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0007656c) list_cale_time_pane_g

0xb86c,	// (0x00072ab8) list_cale_time_pane_t1_ParamLimits

0xb86c,	// (0x00072ab8) list_cale_time_pane_t1

0xb894,	// (0x00072ae0) list_cale_time_pane_t2_ParamLimits

0xb894,	// (0x00072ae0) list_cale_time_pane_t2

0x48be,	// (0x0006bb0a) aid_blid_cardinal_pane

0x4908,	// (0x0006bb54) compass_pane_t4

0xb8bc,	// (0x00072b08) list_cale_time_pane_t4_ParamLimits

0xb8bc,	// (0x00072b08) list_cale_time_pane_t4

0x4916,	// (0x0006bb62) compass_pane_t5

0x4924,	// (0x0006bb70) compass_pane_t6

0x4932,	// (0x0006bb7e) compass_pane_t7

0x4992,	// (0x0006bbde) navi_pane_cc_t1

0x4b99,	// (0x0006bde5) aid_phob_thumbnail_center_pane

0x5139,	// (0x0006c385) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x00076579) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x00076579) list_cale_time_pane_t

0xa99e,	// (0x00071bea) bg_popup_window_pane_cp02_ParamLimits

0xa99e,	// (0x00071bea) bg_popup_window_pane_cp02

0xb8e4,	// (0x00072b30) heading_pane_cp01_ParamLimits

0xb8e4,	// (0x00072b30) heading_pane_cp01

0xb8f0,	// (0x00072b3c) loc_req_pane_ParamLimits

0xb8f0,	// (0x00072b3c) loc_req_pane

0xb900,	// (0x00072b4c) loc_type_pane_ParamLimits

0xb900,	// (0x00072b4c) loc_type_pane

0xe990,	// (0x00075bdc) loc_type_pane_t1_ParamLimits

0xe990,	// (0x00075bdc) loc_type_pane_t1

0xe9a2,	// (0x00075bee) loc_type_pane_t2_ParamLimits

0xe9a2,	// (0x00075bee) loc_type_pane_t2

0xe9b4,	// (0x00075c00) loc_type_pane_t3_ParamLimits

0xe9b4,	// (0x00075c00) loc_type_pane_t3

0x0002,

0xf334,	// (0x00076580) loc_type_pane_t_ParamLimits

0xf334,	// (0x00076580) loc_type_pane_t

0xe9c6,	// (0x00075c12) list_loc_req_pane

0xe9d0,	// (0x00075c1c) scroll_pane_cp012

0x45d5,	// (0x0006b821) list_single_loc_request_popup_menu_pane_ParamLimits

0x45d5,	// (0x0006b821) list_single_loc_request_popup_menu_pane

0xe9d9,	// (0x00075c25) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe9d9,	// (0x00075c25) list_single_loc_request_popup_menu_pane_g1

0xe9e5,	// (0x00075c31) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe9e5,	// (0x00075c31) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x00076587) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x00076587) list_single_loc_request_popup_menu_pane_g

0xe9f1,	// (0x00075c3d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe9f1,	// (0x00075c3d) list_single_loc_request_popup_menu_pane_t1

0xafa0,	// (0x000721ec) bg_popup_window_pane_cp03_ParamLimits

0xafa0,	// (0x000721ec) bg_popup_window_pane_cp03

0x108e,	// (0x000682da) heading_loc_req_pane_ParamLimits

0x108e,	// (0x000682da) heading_loc_req_pane

0x45e2,	// (0x0006b82e) popup_dyc_status_message_window_g1_ParamLimits

0x45e2,	// (0x0006b82e) popup_dyc_status_message_window_g1

0x45f6,	// (0x0006b842) popup_dyc_status_message_window_t1_ParamLimits

0x45f6,	// (0x0006b842) popup_dyc_status_message_window_t1

0x460b,	// (0x0006b857) popup_dyc_status_message_window_t2_ParamLimits

0x460b,	// (0x0006b857) popup_dyc_status_message_window_t2

0x4620,	// (0x0006b86c) popup_dyc_status_message_window_t3_ParamLimits

0x4620,	// (0x0006b86c) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x0007658c) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x0007658c) popup_dyc_status_message_window_t

0xad45,	// (0x00071f91) bg_heading_pane_cp01

0xea07,	// (0x00075c53) heading_loc_req_pane_g1

0xea0f,	// (0x00075c5b) heading_loc_req_pane_g2

0xea17,	// (0x00075c63) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x00076593) heading_loc_req_pane_g

0xea1f,	// (0x00075c6b) heading_loc_req_pane_t1

0xea2e,	// (0x00075c7a) bg_popup_sub_pane_cp01_ParamLimits

0xea2e,	// (0x00075c7a) bg_popup_sub_pane_cp01

0xea3c,	// (0x00075c88) popup_cale_events_window_g1_ParamLimits

0xea3c,	// (0x00075c88) popup_cale_events_window_g1

0xea5c,	// (0x00075ca8) popup_cale_events_window_g2_ParamLimits

0xea5c,	// (0x00075ca8) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x000765c7) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x000765c7) popup_cale_events_window_g

0xea7c,	// (0x00075cc8) popup_cale_events_window_t1_ParamLimits

0xea7c,	// (0x00075cc8) popup_cale_events_window_t1

0xea8e,	// (0x00075cda) popup_cale_events_window_t2_ParamLimits

0xea8e,	// (0x00075cda) popup_cale_events_window_t2

0xeacc,	// (0x00075d18) popup_cale_events_window_t3_ParamLimits

0xeacc,	// (0x00075d18) popup_cale_events_window_t3

0xeb06,	// (0x00075d52) popup_cale_events_window_t4_ParamLimits

0xeb06,	// (0x00075d52) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x000765cc) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x000765cc) popup_cale_events_window_t

0x4656,	// (0x0006b8a2) call_type_pane

0x4666,	// (0x0006b8b2) popup_call_status_window_g1

0x467a,	// (0x0006b8c6) popup_call_status_window_g2

0x468e,	// (0x0006b8da) popup_call_status_window_g3

0x0002,

0xf389,	// (0x000765d5) popup_call_status_window_g

0x0ec5,	// (0x00068111) call_type_pane_g1

0x0ece,	// (0x0006811a) call_type_pane_g2

0x0001,

0xf390,	// (0x000765dc) call_type_pane_g

0xad45,	// (0x00071f91) bg_popup_sub_pane_cp02

0x0ed7,	// (0x00068123) listscroll_popup_wml_pane

0x0edf,	// (0x0006812b) list_wml_pane

0x0ee9,	// (0x00068135) scroll_pane_cp013

0x469e,	// (0x0006b8ea) list_single_graphic_popup_wml_pane_ParamLimits

0x469e,	// (0x0006b8ea) list_single_graphic_popup_wml_pane

0xb134,	// (0x00072380) list_single_graphic_popup_wml_pane_g1

0x0ef2,	// (0x0006813e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x000765e1) list_single_graphic_popup_wml_pane_g

0x0efa,	// (0x00068146) list_single_graphic_popup_wml_pane_t1

0x0f10,	// (0x0006815c) aid_call_pane

0xaf98,	// (0x000721e4) popup_clock_analogue_window_g1

0xaf98,	// (0x000721e4) popup_clock_analogue_window_g2

0xeb3c,	// (0x00075d88) popup_clock_analogue_window_g3

0xeb3c,	// (0x00075d88) popup_clock_analogue_window_g4

0xb134,	// (0x00072380) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x000765e6) popup_clock_analogue_window_g

0xeb44,	// (0x00075d90) popup_clock_analogue_window_t1

0xeb52,	// (0x00075d9e) clock_digital_number_pane_ParamLimits

0xeb52,	// (0x00075d9e) clock_digital_number_pane

0xeb5e,	// (0x00075daa) clock_digital_number_pane_cp02_ParamLimits

0xeb5e,	// (0x00075daa) clock_digital_number_pane_cp02

0xeb6a,	// (0x00075db6) clock_digital_number_pane_cp03_ParamLimits

0xeb6a,	// (0x00075db6) clock_digital_number_pane_cp03

0xeb76,	// (0x00075dc2) clock_digital_number_pane_cp04_ParamLimits

0xeb76,	// (0x00075dc2) clock_digital_number_pane_cp04

0xeb82,	// (0x00075dce) clock_digital_separator_pane_ParamLimits

0xeb82,	// (0x00075dce) clock_digital_separator_pane

0xeb8e,	// (0x00075dda) popup_clock_digital_window_t1

0xb134,	// (0x00072380) clock_digital_number_pane_g1

0xb134,	// (0x00072380) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x00076554) clock_digital_number_pane_g

0xb134,	// (0x00072380) clock_digital_separator_pane_g1

0xb134,	// (0x00072380) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x00076554) clock_digital_separator_pane_g

0xad45,	// (0x00071f91) bg_popup_window_pane_cp04

0x0f18,	// (0x00068164) heading_pane_cp03

0x0f20,	// (0x0006816c) listscroll_popup_gms_pane

0x0f28,	// (0x00068174) grid_large_graphic_popup_pane

0x0f32,	// (0x0006817e) listscroll_popup_gms_pane_g1

0x0f3a,	// (0x00068186) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x000765f1) listscroll_popup_gms_pane_g

0xb5af,	// (0x000727fb) scroll_pane_cp014

0x46b1,	// (0x0006b8fd) cell_large_graphic_popup_pane_ParamLimits

0x46b1,	// (0x0006b8fd) cell_large_graphic_popup_pane

0x46c7,	// (0x0006b913) cell_large_graphic_popup_pane_g1_ParamLimits

0x46c7,	// (0x0006b913) cell_large_graphic_popup_pane_g1

0x0f42,	// (0x0006818e) cell_large_graphic_popup_pane_g2_ParamLimits

0x0f42,	// (0x0006818e) cell_large_graphic_popup_pane_g2

0x0f4e,	// (0x0006819a) cell_large_graphic_popup_pane_g3_ParamLimits

0x0f4e,	// (0x0006819a) cell_large_graphic_popup_pane_g3

0x0f5b,	// (0x000681a7) cell_large_graphic_popup_pane_g4_ParamLimits

0x0f5b,	// (0x000681a7) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x000765f6) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x000765f6) cell_large_graphic_popup_pane_g

0x0f6b,	// (0x000681b7) grid_highlight_pane_cp010

0xb134,	// (0x00072380) bg_popup_call_pane_g1

0x0f75,	// (0x000681c1) list_single_graphic_popup_conf_pane_ParamLimits

0x0f75,	// (0x000681c1) list_single_graphic_popup_conf_pane

0x0f88,	// (0x000681d4) list_highlight_pane_cp01

0x0f91,	// (0x000681dd) list_single_graphic_popup_conf_pane_g1

0x0f99,	// (0x000681e5) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x000765ff) list_single_graphic_popup_conf_pane_g

0x0fa1,	// (0x000681ed) list_single_graphic_popup_conf_pane_t1

0x0faf,	// (0x000681fb) linegrid_cams_pane_g1

0x46d3,	// (0x0006b91f) linegrid_cams_pane_g2

0xb23f,	// (0x0007248b) linegrid_cams_pane_g3

0x0fb8,	// (0x00068204) linegrid_cams_pane_g4

0x46dc,	// (0x0006b928) linegrid_cams_pane_g5

0x46e5,	// (0x0006b931) linegrid_cams_pane_g6

0xb2d4,	// (0x00072520) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x00076604) linegrid_cams_pane_g

0x0fc1,	// (0x0006820d) popup_clock_analogue_window

0x0fc1,	// (0x0006820d) popup_clock_digital_window

0xad45,	// (0x00071f91) popup_phob_thumbnail_window

0xb134,	// (0x00072380) call_video_uplink_pane_g1

0x0fca,	// (0x00068216) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x00076613) call_video_uplink_pane_g

0xb2a1,	// (0x000724ed) video_uplink_pane

0x0fd2,	// (0x0006821e) mce_image_pane_g1

0x46ee,	// (0x0006b93a) mce_image_pane_g2

0x46f6,	// (0x0006b942) mce_image_pane_g3

0x46fe,	// (0x0006b94a) mce_image_pane_g4

0x4706,	// (0x0006b952) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x00076618) mce_image_pane_g

0x0fdc,	// (0x00068228) control_top_pane_stacon_cp01_ParamLimits

0x0fdc,	// (0x00068228) control_top_pane_stacon_cp01

0x0fec,	// (0x00068238) uni_indicator_pane_stacon_cp01_ParamLimits

0x0fec,	// (0x00068238) uni_indicator_pane_stacon_cp01

0x0ffd,	// (0x00068249) bg_popup_sub_pane_cp03

0x1007,	// (0x00068253) chi_dic_find_pane

0x470e,	// (0x0006b95a) listscroll_chi_dic_pane

0x100f,	// (0x0006825b) main_pane_chidic_g1

0x1017,	// (0x00068263) chi_dic_find_pane_t1

0x1025,	// (0x00068271) find_chidic_pane

0x102e,	// (0x0006827a) chi_dic_list_pane_ParamLimits

0x102e,	// (0x0006827a) chi_dic_list_pane

0x103f,	// (0x0006828b) scroll_pane_cp020

0x1047,	// (0x00068293) find_chidic_pane_t1

0xad45,	// (0x00071f91) input_focus_pane_cp06

0x4722,	// (0x0006b96e) list_chi_dic_pane_ParamLimits

0x4722,	// (0x0006b96e) list_chi_dic_pane

0x4734,	// (0x0006b980) list_chi_dic_pane_t1_ParamLimits

0x4734,	// (0x0006b980) list_chi_dic_pane_t1

0xad45,	// (0x00071f91) list_highlight_pane_cp020

0x1056,	// (0x000682a2) bg_cale_heading_pane_g1

0x4747,	// (0x0006b993) bg_cale_heading_pane_g2

0x474f,	// (0x0006b99b) bg_cale_heading_pane_g3

0x4757,	// (0x0006b9a3) bg_cale_heading_pane_g4

0x4761,	// (0x0006b9ad) bg_cale_heading_pane_g5

0x476b,	// (0x0006b9b7) bg_cale_heading_pane_g6

0x4773,	// (0x0006b9bf) bg_cale_heading_pane_g7

0x477b,	// (0x0006b9c7) bg_cale_heading_pane_g8

0x4785,	// (0x0006b9d1) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x00076623) bg_cale_heading_pane_g

0x1056,	// (0x000682a2) bg_cale_side_pane_g1

0x478f,	// (0x0006b9db) bg_cale_side_pane_g2

0x4797,	// (0x0006b9e3) bg_cale_side_pane_g3

0x479f,	// (0x0006b9eb) bg_cale_side_pane_g4

0x47a7,	// (0x0006b9f3) bg_cale_side_pane_g5

0x47af,	// (0x0006b9fb) bg_cale_side_pane_g6

0x47b7,	// (0x0006ba03) bg_cale_side_pane_g7

0x47bf,	// (0x0006ba0b) bg_cale_side_pane_g8

0x47c7,	// (0x0006ba13) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x00076636) bg_cale_side_pane_g

0x47cf,	// (0x0006ba1b) popup_call_status_window_ParamLimits

0x47cf,	// (0x0006ba1b) popup_call_status_window

0x105e,	// (0x000682aa) stacon_top_pane

0x1066,	// (0x000682b2) status_pane_ParamLimits

0x1066,	// (0x000682b2) status_pane

0x4816,	// (0x0006ba62) status_small_pane

0x481e,	// (0x0006ba6a) control_pane

0xad45,	// (0x00071f91) stacon_bottom_pane

0x4826,	// (0x0006ba72) list_single_mce_smart_pane_t1_ParamLimits

0x4826,	// (0x0006ba72) list_single_mce_smart_pane_t1

0x4839,	// (0x0006ba85) list_single_mce_smart_pane_t2_ParamLimits

0x4839,	// (0x0006ba85) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x00076649) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x00076649) list_single_mce_smart_pane_t

0x4861,	// (0x0006baad) compass_pane

0x486a,	// (0x0006bab6) main_location2_pane_t1

0x4880,	// (0x0006bacc) main_location2_pane_t2

0x4896,	// (0x0006bae2) main_location2_pane_t3

0x0003,

0xf402,	// (0x0007664e) main_location2_pane_t

0x48de,	// (0x0006bb2a) compass_pane_g1_ParamLimits

0x48de,	// (0x0006bb2a) compass_pane_g1

0x48ea,	// (0x0006bb36) compass_pane_t1

0x48f9,	// (0x0006bb45) compass_pane_t2

0x0005,

0xf40b,	// (0x00076657) compass_pane_t

0x4940,	// (0x0006bb8c) text_secondary_cp61

0x4989,	// (0x0006bbd5) navi_pane_cams_g5

0x49ef,	// (0x0006bc3b) navi_pane_im_t1

0x49fd,	// (0x0006bc49) navi_pane_mp_g1_ParamLimits

0x49fd,	// (0x0006bc49) navi_pane_mp_g1

0x4a11,	// (0x0006bc5d) navi_pane_mp_g2_ParamLimits

0x4a11,	// (0x0006bc5d) navi_pane_mp_g2

0x4a1d,	// (0x0006bc69) navi_pane_mp_g3_ParamLimits

0x4a1d,	// (0x0006bc69) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0007666b) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0007666b) navi_pane_mp_g

0x4a29,	// (0x0006bc75) navi_pane_mp_t1

0x4a37,	// (0x0006bc83) navi_pane_mp_t2

0x0002,

0xf426,	// (0x00076672) navi_pane_mp_t

0x4ae2,	// (0x0006bd2e) navi_pane_vt_g1

0x4a29,	// (0x0006bc75) navi_pane_vt_t1

0x4aea,	// (0x0006bd36) navi_slider_pane

0x4af2,	// (0x0006bd3e) zooming_pane

0x4afa,	// (0x0006bd46) navi_slider_pane_g1

0xebab,	// (0x00075df7) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x00076679) navi_slider_pane_g

0x4b1e,	// (0x0006bd6a) aid_levels_zoom

0x4b26,	// (0x0006bd72) zooming_pane_g1

0x4b2e,	// (0x0006bd7a) zooming_pane_g2

0x4b2e,	// (0x0006bd7a) zooming_pane_g3

0x0002,

0xf43c,	// (0x00076688) zooming_pane_g

0x4b36,	// (0x0006bd82) level_10_zoom

0x4b3f,	// (0x0006bd8b) level_11_zoom

0x4b48,	// (0x0006bd94) level_1_zoom

0x4b51,	// (0x0006bd9d) level_2_zoom

0x4b5a,	// (0x0006bda6) level_3_zoom

0x4b63,	// (0x0006bdaf) level_4_zoom

0x4b6c,	// (0x0006bdb8) level_5_zoom

0x4b75,	// (0x0006bdc1) level_6_zoom

0x4b7e,	// (0x0006bdca) level_7_zoom

0x4b87,	// (0x0006bdd3) level_8_zoom

0x4b90,	// (0x0006bddc) level_9_zoom

0x4ba1,	// (0x0006bded) popup_phob_thumbnail_window_g1

0x4ba9,	// (0x0006bdf5) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0007668f) popup_phob_thumbnail_window_g

0xc1fe,	// (0x0007344a) level_1_location

0xc206,	// (0x00073452) level_2_location

0xc20e,	// (0x0007345a) level_3_location

0xc216,	// (0x00073462) level_4_location

0x4af2,	// (0x0006bd3e) level_5_location

0x4bb1,	// (0x0006bdfd) mce_icon_pane_g1

0x4bb9,	// (0x0006be05) mce_icon_pane_g2

0x0001,

0xf448,	// (0x00076694) mce_icon_pane_g

0x4bc1,	// (0x0006be0d) main_mup_pane_g1_ParamLimits

0x4bc1,	// (0x0006be0d) main_mup_pane_g1

0x4bd7,	// (0x0006be23) main_mup_pane_g2_ParamLimits

0x4bd7,	// (0x0006be23) main_mup_pane_g2

0x4bef,	// (0x0006be3b) main_mup_pane_g3_ParamLimits

0x4bef,	// (0x0006be3b) main_mup_pane_g3

0x4c07,	// (0x0006be53) main_mup_pane_g4_ParamLimits

0x4c07,	// (0x0006be53) main_mup_pane_g4

0x4c1f,	// (0x0006be6b) main_mup_pane_g5_ParamLimits

0x4c1f,	// (0x0006be6b) main_mup_pane_g5

0x4c39,	// (0x0006be85) main_mup_pane_g6_ParamLimits

0x4c39,	// (0x0006be85) main_mup_pane_g6

0x4c51,	// (0x0006be9d) main_mup_pane_g7_ParamLimits

0x4c51,	// (0x0006be9d) main_mup_pane_g7

0x4c69,	// (0x0006beb5) main_mup_pane_g8_ParamLimits

0x4c69,	// (0x0006beb5) main_mup_pane_g8

0x4c81,	// (0x0006becd) main_mup_pane_g9_ParamLimits

0x4c81,	// (0x0006becd) main_mup_pane_g9

0x4c95,	// (0x0006bee1) main_mup_pane_g10_ParamLimits

0x4c95,	// (0x0006bee1) main_mup_pane_g10

0x4ca9,	// (0x0006bef5) main_mup_pane_g11_ParamLimits

0x4ca9,	// (0x0006bef5) main_mup_pane_g11

0x4cbb,	// (0x0006bf07) main_mup_pane_g12_ParamLimits

0x4cbb,	// (0x0006bf07) main_mup_pane_g12

0x4ccf,	// (0x0006bf1b) main_mup_pane_g13_ParamLimits

0x4ccf,	// (0x0006bf1b) main_mup_pane_g13

0x000c,

0xf44d,	// (0x00076699) main_mup_pane_g_ParamLimits

0xf44d,	// (0x00076699) main_mup_pane_g

0x4ce1,	// (0x0006bf2d) main_mup_pane_t1_ParamLimits

0x4ce1,	// (0x0006bf2d) main_mup_pane_t1

0x4cfb,	// (0x0006bf47) main_mup_pane_t2_ParamLimits

0x4cfb,	// (0x0006bf47) main_mup_pane_t2

0x4d13,	// (0x0006bf5f) main_mup_pane_t3_ParamLimits

0x4d13,	// (0x0006bf5f) main_mup_pane_t3

0x4d2b,	// (0x0006bf77) main_mup_pane_t4_ParamLimits

0x4d2b,	// (0x0006bf77) main_mup_pane_t4

0x4d49,	// (0x0006bf95) main_mup_pane_t5_ParamLimits

0x4d49,	// (0x0006bf95) main_mup_pane_t5

0x4d5e,	// (0x0006bfaa) main_mup_pane_t6_ParamLimits

0x4d5e,	// (0x0006bfaa) main_mup_pane_t6

0x0005,

0xf468,	// (0x000766b4) main_mup_pane_t_ParamLimits

0xf468,	// (0x000766b4) main_mup_pane_t

0x4d70,	// (0x0006bfbc) mup_progress_pane_ParamLimits

0x4d70,	// (0x0006bfbc) mup_progress_pane

0x4d7c,	// (0x0006bfc8) mup_visualizer_pane_ParamLimits

0x4d7c,	// (0x0006bfc8) mup_visualizer_pane

0x4da4,	// (0x0006bff0) mup_volume_pane_ParamLimits

0x4da4,	// (0x0006bff0) mup_volume_pane

0x4dc2,	// (0x0006c00e) mup_visualizer_pane_g1_ParamLimits

0x4dc2,	// (0x0006c00e) mup_visualizer_pane_g1

0x4dc2,	// (0x0006c00e) mup_visualizer_pane_g2_ParamLimits

0x4dc2,	// (0x0006c00e) mup_visualizer_pane_g2

0x48de,	// (0x0006bb2a) mup_visualizer_pane_g3_ParamLimits

0x48de,	// (0x0006bb2a) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x000766c1) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x000766c1) mup_visualizer_pane_g

0xb134,	// (0x00072380) mup_volume_pane_g1

0x4dd8,	// (0x0006c024) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x000766c8) mup_volume_pane_g

0xb134,	// (0x00072380) mup_progress_pane_g1

0x4de1,	// (0x0006c02d) mup_progress_pane_g2

0x4dea,	// (0x0006c036) mup_progress_pane_g3

0x0002,

0xf481,	// (0x000766cd) mup_progress_pane_g

0xad45,	// (0x00071f91) bg_popup_window_pane_cp05

0x4df3,	// (0x0006c03f) heading_pane_cp02_ParamLimits

0x4df3,	// (0x0006c03f) heading_pane_cp02

0x4e0d,	// (0x0006c059) list_popup_blid_pane

0x4e15,	// (0x0006c061) list_blid_sat_info_pane_ParamLimits

0x4e15,	// (0x0006c061) list_blid_sat_info_pane

0x4e28,	// (0x0006c074) list_blid_sat_info_pane_g1

0x4e30,	// (0x0006c07c) list_blid_sat_info_pane_t1

0x4f10,	// (0x0006c15c) mup_equalizer_pane_ParamLimits

0x4f10,	// (0x0006c15c) mup_equalizer_pane

0x4f29,	// (0x0006c175) mup_equalizer_pane_cp1_ParamLimits

0x4f29,	// (0x0006c175) mup_equalizer_pane_cp1

0x4f42,	// (0x0006c18e) mup_equalizer_pane_cp2_ParamLimits

0x4f42,	// (0x0006c18e) mup_equalizer_pane_cp2

0x4f5b,	// (0x0006c1a7) mup_equalizer_pane_cp3_ParamLimits

0x4f5b,	// (0x0006c1a7) mup_equalizer_pane_cp3

0x4f74,	// (0x0006c1c0) mup_equalizer_pane_cp4_ParamLimits

0x4f74,	// (0x0006c1c0) mup_equalizer_pane_cp4

0x4f8d,	// (0x0006c1d9) mup_equalizer_pane_cp5

0x4f9f,	// (0x0006c1eb) mup_equalizer_pane_cp6

0x4fb1,	// (0x0006c1fd) mup_equalizer_pane_cp7

0xc0dc,	// (0x00073328) bg_popup_call_poc_act_pane_g9

0xc0e4,	// (0x00073330) bg_popup_call_poc_act_pane_g10

0xc0ec,	// (0x00073338) bg_popup_call_poc_act_pane_g11

0x000a,

0xafa0,	// (0x000721ec) mup_scale_pane

0xb134,	// (0x00072380) mup_scale_pane_g1

0x4fc5,	// (0x0006c211) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x000766e9) mup_scale_pane_g

0x4ffb,	// (0x0006c247) msg_data_pane

0x5003,	// (0x0006c24f) scroll_pane_cp017

0x23a4,	// (0x000695f0) bg_list_pane_cp04_ParamLimits

0x23a4,	// (0x000695f0) bg_list_pane_cp04

0x500b,	// (0x0006c257) msg_data_pane_g1

0x46ee,	// (0x0006b93a) msg_data_pane_g2

0x46f6,	// (0x0006b942) msg_data_pane_g3

0x5013,	// (0x0006c25f) msg_data_pane_g4

0x4706,	// (0x0006b952) msg_data_pane_g5

0x4bb1,	// (0x0006bdfd) msg_data_pane_g6

0x501b,	// (0x0006c267) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x000766f8) msg_data_pane_g

0x23bc,	// (0x00069608) msg_text_pane_ParamLimits

0x23bc,	// (0x00069608) msg_text_pane

0x5023,	// (0x0006c26f) qrid_highlight_pane_cp011_ParamLimits

0x5023,	// (0x0006c26f) qrid_highlight_pane_cp011

0xad45,	// (0x00071f91) msg_body_pane

0xad45,	// (0x00071f91) msg_header_pane

0x5042,	// (0x0006c28e) input_focus_pane_cp07

0x23ea,	// (0x00069636) msg_header_pane_t1_ParamLimits

0x23ea,	// (0x00069636) msg_header_pane_t1

0x23fc,	// (0x00069648) msg_header_pane_t2_ParamLimits

0x23fc,	// (0x00069648) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0007670c) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0007670c) msg_header_pane_t

0x5057,	// (0x0006c2a3) msg_body_pane_g1

0x240e,	// (0x0006965a) msg_body_pane_t1_ParamLimits

0x240e,	// (0x0006965a) msg_body_pane_t1

0x2439,	// (0x00069685) msg_body_pane_t2_ParamLimits

0x2439,	// (0x00069685) msg_body_pane_t2

0x244b,	// (0x00069697) msg_body_pane_t3_ParamLimits

0x244b,	// (0x00069697) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x00076711) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x00076711) msg_body_pane_t

0x5095,	// (0x0006c2e1) main_viewer_pane_g1_ParamLimits

0x5095,	// (0x0006c2e1) main_viewer_pane_g1

0x50a1,	// (0x0006c2ed) main_viewer_pane_g2_ParamLimits

0x50a1,	// (0x0006c2ed) main_viewer_pane_g2

0x50ad,	// (0x0006c2f9) main_viewer_pane_g3_ParamLimits

0x50ad,	// (0x0006c2f9) main_viewer_pane_g3

0x50bc,	// (0x0006c308) main_viewer_pane_g4_ParamLimits

0x50bc,	// (0x0006c308) main_viewer_pane_g4

0xebd5,	// (0x00075e21) main_viewer_pane_g5_ParamLimits

0xebd5,	// (0x00075e21) main_viewer_pane_g5

0xebd5,	// (0x00075e21) main_viewer_pane_g7_ParamLimits

0xebd5,	// (0x00075e21) main_viewer_pane_g7

0xebe7,	// (0x00075e33) main_viewer_pane_g8_ParamLimits

0xebe7,	// (0x00075e33) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x00076721) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x00076721) main_viewer_pane_g

0x50cb,	// (0x0006c317) viewer_content_pane_ParamLimits

0x50cb,	// (0x0006c317) viewer_content_pane

0x50fe,	// (0x0006c34a) main_postcard_pane_g1_ParamLimits

0x50fe,	// (0x0006c34a) main_postcard_pane_g1

0x5112,	// (0x0006c35e) main_postcard_pane_g2_ParamLimits

0x5112,	// (0x0006c35e) main_postcard_pane_g2

0x5126,	// (0x0006c372) main_postcard_pane_g3_ParamLimits

0x5126,	// (0x0006c372) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x00076732) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x00076732) main_postcard_pane_g

0x5139,	// (0x0006c385) main_postcard_pane_g4

0xc32d,	// (0x00073579) smil_status_volume_pane_g2

0x5174,	// (0x0006c3c0) postcard_pane_ParamLimits

0x5174,	// (0x0006c3c0) postcard_pane

0x51b4,	// (0x0006c400) postcard_pane_g1_ParamLimits

0x51b4,	// (0x0006c400) postcard_pane_g1

0x51c2,	// (0x0006c40e) postcard_pane_g2_ParamLimits

0x51c2,	// (0x0006c40e) postcard_pane_g2

0x51ce,	// (0x0006c41a) postcard_pane_g3_ParamLimits

0x51ce,	// (0x0006c41a) postcard_pane_g3

0x51da,	// (0x0006c426) postcard_pane_g4_ParamLimits

0x51da,	// (0x0006c426) postcard_pane_g4

0x51e8,	// (0x0006c434) postcard_pane_g5_ParamLimits

0x51e8,	// (0x0006c434) postcard_pane_g5

0x51fd,	// (0x0006c449) postcard_pane_g6_ParamLimits

0x51fd,	// (0x0006c449) postcard_pane_g6

0x51b4,	// (0x0006c400) postcard_pane_g7_ParamLimits

0x51b4,	// (0x0006c400) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0007673f) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0007673f) postcard_pane_g

0x5211,	// (0x0006c45d) main_mp2_pane_g1_ParamLimits

0x5211,	// (0x0006c45d) main_mp2_pane_g1

0x521d,	// (0x0006c469) main_mp2_pane_g2_ParamLimits

0x521d,	// (0x0006c469) main_mp2_pane_g2

0x5229,	// (0x0006c475) main_mp2_pane_g3_ParamLimits

0x5229,	// (0x0006c475) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0007674e) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0007674e) main_mp2_pane_g

0x5235,	// (0x0006c481) main_mp2_pane_t1_ParamLimits

0x5235,	// (0x0006c481) main_mp2_pane_t1

0x524a,	// (0x0006c496) main_mp2_pane_t2_ParamLimits

0x524a,	// (0x0006c496) main_mp2_pane_t2

0x525c,	// (0x0006c4a8) main_mp2_pane_t3_ParamLimits

0x525c,	// (0x0006c4a8) main_mp2_pane_t3

0x0002,

0xf509,	// (0x00076755) main_mp2_pane_t_ParamLimits

0xf509,	// (0x00076755) main_mp2_pane_t

0x526e,	// (0x0006c4ba) pec_content_pane_ParamLimits

0x526e,	// (0x0006c4ba) pec_content_pane

0xb5af,	// (0x000727fb) scroll_pane_cp015

0x5280,	// (0x0006c4cc) pec_attribute_pane_ParamLimits

0x5280,	// (0x0006c4cc) pec_attribute_pane

0x5290,	// (0x0006c4dc) pec_content_pane_g1_ParamLimits

0x5290,	// (0x0006c4dc) pec_content_pane_g1

0x529c,	// (0x0006c4e8) pec_content_pane_t1_ParamLimits

0x529c,	// (0x0006c4e8) pec_content_pane_t1

0x52ae,	// (0x0006c4fa) pec_content_pane_t2_ParamLimits

0x52ae,	// (0x0006c4fa) pec_content_pane_t2

0x0001,

0xf510,	// (0x0007675c) pec_content_pane_t_ParamLimits

0xf510,	// (0x0007675c) pec_content_pane_t

0x52c0,	// (0x0006c50c) list_single_graphic_pane_cp01_ParamLimits

0x52c0,	// (0x0006c50c) list_single_graphic_pane_cp01

0xafa0,	// (0x000721ec) bg_popup_sub_pane_cp04

0x52d5,	// (0x0006c521) popup_mup_playback_window_g1

0x52e1,	// (0x0006c52d) popup_mup_playback_window_t1

0x52f6,	// (0x0006c542) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x00076761) popup_mup_playback_window_t

0x534b,	// (0x0006c597) main_image_pane_g1_ParamLimits

0x534b,	// (0x0006c597) main_image_pane_g1

0x5426,	// (0x0006c672) scroll_pane_cp018_ParamLimits

0x5426,	// (0x0006c672) scroll_pane_cp018

0x543e,	// (0x0006c68a) scroll_pane_cp016_ParamLimits

0x543e,	// (0x0006c68a) scroll_pane_cp016

0x5472,	// (0x0006c6be) smil2_image_pane_ParamLimits

0x5472,	// (0x0006c6be) smil2_image_pane

0x549a,	// (0x0006c6e6) smil2_root_pane_ParamLimits

0x549a,	// (0x0006c6e6) smil2_root_pane

0x54d2,	// (0x0006c71e) smil2_text_pane_ParamLimits

0x54d2,	// (0x0006c71e) smil2_text_pane

0xad45,	// (0x00071f91) bg_list_pane_cp06

0x5546,	// (0x0006c792) grid_radio_pane

0xad45,	// (0x00071f91) bg_popup_window_pane_cp06

0x554e,	// (0x0006c79a) main_fmradio_pane_t1

0x0f18,	// (0x00068164) heading_pane_cp04

0x555c,	// (0x0006c7a8) main_fmradio_pane_t2

0xc134,	// (0x00073380) popup_cale_lunar_info_window_g1

0x556a,	// (0x0006c7b6) main_fmradio_pane_t3

0xc13c,	// (0x00073388) popup_cale_lunar_info_window_g2

0x5578,	// (0x0006c7c4) main_fmradio_pane_t4

0x0001,

0x5586,	// (0x0006c7d2) main_fmradio_pane_t5

0x0004,

0xf603,	// (0x0007684f) popup_cale_lunar_info_window_g

0xf52a,	// (0x00076776) main_fmradio_pane_t

0x5594,	// (0x0006c7e0) wait_bar_pane_cp03

0x559c,	// (0x0006c7e8) cell_fmradio_pane_ParamLimits

0x559c,	// (0x0006c7e8) cell_fmradio_pane

0x51b4,	// (0x0006c400) cell_fmradio_pane_g1_ParamLimits

0x51b4,	// (0x0006c400) cell_fmradio_pane_g1

0xad45,	// (0x00071f91) grid_highlight_pane_cp011

0x55af,	// (0x0006c7fb) poc_content_pane_ParamLimits

0x55af,	// (0x0006c7fb) poc_content_pane

0x55c2,	// (0x0006c80e) scroll_pane_cp019

0x55ca,	// (0x0006c816) popup_call_poc_act_window_ParamLimits

0x55ca,	// (0x0006c816) popup_call_poc_act_window

0x55ea,	// (0x0006c836) popup_call_poc_inact_window_ParamLimits

0x55ea,	// (0x0006c836) popup_call_poc_inact_window

0xf5c7,	// (0x00076813) bg_popup_call_poc_act_pane_g

0xc0f4,	// (0x00073340) bg_popup_call_poc_inact_pane_g1

0xc0fc,	// (0x00073348) bg_popup_call_poc_inact_pane_g2

0x55ff,	// (0x0006c84b) popup_call_poc_act_window_g2

0xc104,	// (0x00073350) bg_popup_call_poc_inact_pane_g3

0xc084,	// (0x000732d0) bg_popup_call_poc_inact_pane_g4

0xc10c,	// (0x00073358) bg_popup_call_poc_inact_pane_g5

0x5607,	// (0x0006c853) popup_call_poc_act_window_t1_ParamLimits

0x5607,	// (0x0006c853) popup_call_poc_act_window_t1

0x562f,	// (0x0006c87b) popup_call_poc_act_window_t2_ParamLimits

0x562f,	// (0x0006c87b) popup_call_poc_act_window_t2

0x5657,	// (0x0006c8a3) popup_call_poc_act_window_t3_ParamLimits

0x5657,	// (0x0006c8a3) popup_call_poc_act_window_t3

0x567f,	// (0x0006c8cb) popup_call_poc_act_window_t4_ParamLimits

0x567f,	// (0x0006c8cb) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x00076781) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x00076781) popup_call_poc_act_window_t

0xc114,	// (0x00073360) bg_popup_call_poc_inact_pane_g6

0xc11c,	// (0x00073368) bg_popup_call_poc_inact_pane_g7

0xc124,	// (0x00073370) bg_popup_call_poc_inact_pane_g8

0x5691,	// (0x0006c8dd) popup_call_poc_inact_window_g2

0xc12c,	// (0x00073378) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5de,	// (0x0007682a) bg_popup_call_poc_inact_pane_g

0x5699,	// (0x0006c8e5) popup_call_poc_inact_window_t1_ParamLimits

0x5699,	// (0x0006c8e5) popup_call_poc_inact_window_t1

0x56ae,	// (0x0006c8fa) popup_call_poc_inact_window_t2_ParamLimits

0x56ae,	// (0x0006c8fa) popup_call_poc_inact_window_t2

0x56c3,	// (0x0006c90f) popup_call_poc_inact_window_t3_ParamLimits

0x56c3,	// (0x0006c90f) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0007678a) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0007678a) popup_call_poc_inact_window_t

0xc2a0,	// (0x000734ec) context_pane_ParamLimits

0x6512,	// (0x0006d75e) signal_pane_ParamLimits

0x4af2,	// (0x0006bd3e) main_call2_pane

0xc28e,	// (0x000734da) popup_phob_thumbnail2_window_ParamLimits

0xc28e,	// (0x000734da) popup_phob_thumbnail2_window

0xebbd,	// (0x00075e09) aid_hotspot_pointer_arrow_pane

0xebc5,	// (0x00075e11) aid_hotspot_pointer_hand_pane

0x60d5,	// (0x0006d321) phob_pre_status_pane_g5

0x3793,	// (0x0006a9df) cams_zoom_pane_ParamLimits

0x37a2,	// (0x0006a9ee) image_vga_pane_ParamLimits

0x37ba,	// (0x0006aa06) main_camera_pane_g1_ParamLimits

0x37ca,	// (0x0006aa16) main_camera_pane_g2_ParamLimits

0x37da,	// (0x0006aa26) main_camera_pane_g3_ParamLimits

0x37ea,	// (0x0006aa36) main_camera_pane_g4_ParamLimits

0x37fa,	// (0x0006aa46) main_camera_pane_g5_ParamLimits

0x380a,	// (0x0006aa56) main_camera_pane_g6_ParamLimits

0x381a,	// (0x0006aa66) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x00076489) main_camera_pane_g_ParamLimits

0x382a,	// (0x0006aa76) main_camera_pane_t1_ParamLimits

0x3840,	// (0x0006aa8c) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0007649a) main_camera_pane_t_ParamLimits

0xafa0,	// (0x000721ec) bg_popup_preview_window_pane_cp01_ParamLimits

0xafa0,	// (0x000721ec) bg_popup_preview_window_pane_cp01

0x56d8,	// (0x0006c924) popup_phob_thumbnail2_window_g1_ParamLimits

0x56d8,	// (0x0006c924) popup_phob_thumbnail2_window_g1

0xad45,	// (0x00071f91) call2_cli_visual_pane

0x56fb,	// (0x0006c947) popup_call2_audio_conf_window_ParamLimits

0x56fb,	// (0x0006c947) popup_call2_audio_conf_window

0x5719,	// (0x0006c965) popup_call2_audio_first_window_ParamLimits

0x5719,	// (0x0006c965) popup_call2_audio_first_window

0x578f,	// (0x0006c9db) popup_call2_audio_in_window_ParamLimits

0x578f,	// (0x0006c9db) popup_call2_audio_in_window

0x57c3,	// (0x0006ca0f) popup_call2_audio_out_window_ParamLimits

0x57c3,	// (0x0006ca0f) popup_call2_audio_out_window

0x5815,	// (0x0006ca61) popup_call2_audio_second_window_ParamLimits

0x5815,	// (0x0006ca61) popup_call2_audio_second_window

0x5867,	// (0x0006cab3) popup_call2_audio_wait_window_ParamLimits

0x5867,	// (0x0006cab3) popup_call2_audio_wait_window

0xad45,	// (0x00071f91) bg_popup_call2_act_pane_cp03

0xaf82,	// (0x000721ce) list_conf_pane_cp

0x589f,	// (0x0006caeb) popup_call2_audio_conf_window_t1

0x0f75,	// (0x000681c1) list_single_graphic_popup_conf2_pane_ParamLimits

0x0f75,	// (0x000681c1) list_single_graphic_popup_conf2_pane

0x0f88,	// (0x000681d4) list_highlight_pane_cp04

0x58ad,	// (0x0006caf9) list_single_graphic_popup_conf2_pane_g1

0x0f99,	// (0x000681e5) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x00076791) list_single_graphic_popup_conf2_pane_g

0x58b5,	// (0x0006cb01) list_single_graphic_popup_conf2_pane_t1

0x58c3,	// (0x0006cb0f) bg_popup_call2_act_pane_cp01_ParamLimits

0x58c3,	// (0x0006cb0f) bg_popup_call2_act_pane_cp01

0x594d,	// (0x0006cb99) call_type_pane_cp05_ParamLimits

0x594d,	// (0x0006cb99) call_type_pane_cp05

0x59a1,	// (0x0006cbed) popup_call2_audio_second_window_g1_ParamLimits

0x59a1,	// (0x0006cbed) popup_call2_audio_second_window_g1

0x59f5,	// (0x0006cc41) popup_call2_audio_second_window_g2_ParamLimits

0x59f5,	// (0x0006cc41) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x00076796) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x00076796) popup_call2_audio_second_window_g

0x5a5a,	// (0x0006cca6) popup_call2_audio_second_window_t1_ParamLimits

0x5a5a,	// (0x0006cca6) popup_call2_audio_second_window_t1

0x5b15,	// (0x0006cd61) popup_call2_audio_second_window_t2_ParamLimits

0x5b15,	// (0x0006cd61) popup_call2_audio_second_window_t2

0x5b68,	// (0x0006cdb4) popup_call2_audio_second_window_t3_ParamLimits

0x5b68,	// (0x0006cdb4) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0007679d) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0007679d) popup_call2_audio_second_window_t

0xad45,	// (0x00071f91) bg_popup_call2_in_pane_cp02

0xad4f,	// (0x00071f9b) call_type_pane_cp04

0xad57,	// (0x00071fa3) popup_call2_audio_wait_window_g1

0xad5f,	// (0x00071fab) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00076376) popup_call2_audio_wait_window_g

0xad67,	// (0x00071fb3) popup_call2_audio_wait_window_t3

0x5c5b,	// (0x0006cea7) bg_popup_call2_act_pane_ParamLimits

0x5c5b,	// (0x0006cea7) bg_popup_call2_act_pane

0x5d1b,	// (0x0006cf67) call_type_pane_cp03_ParamLimits

0x5d1b,	// (0x0006cf67) call_type_pane_cp03

0x5d7f,	// (0x0006cfcb) popup_call2_audio_first_window_g1_ParamLimits

0x5d7f,	// (0x0006cfcb) popup_call2_audio_first_window_g1

0x5def,	// (0x0006d03b) popup_call2_audio_first_window_g2_ParamLimits

0x5def,	// (0x0006d03b) popup_call2_audio_first_window_g2

0x4dc2,	// (0x0006c00e) popup_call2_audio_first_window_g3_ParamLimits

0x4dc2,	// (0x0006c00e) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x000767a6) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x000767a6) popup_call2_audio_first_window_g

0x5ecd,	// (0x0006d119) popup_call2_audio_first_window_t1_ParamLimits

0x5ecd,	// (0x0006d119) popup_call2_audio_first_window_t1

0xb9b4,	// (0x00072c00) popup_call2_audio_first_window_t4_ParamLimits

0xb9b4,	// (0x00072c00) popup_call2_audio_first_window_t4

0xba97,	// (0x00072ce3) popup_call2_audio_first_window_t5_ParamLimits

0xba97,	// (0x00072ce3) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x000767b1) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x000767b1) popup_call2_audio_first_window_t

0xaf98,	// (0x000721e4) bg_popup_call2_act_pane_g1

0xc144,	// (0x00073390) popup_cale_lunar_info_window_t1

0xc152,	// (0x0007339e) popup_cale_lunar_info_window_t2

0xc160,	// (0x000733ac) popup_cale_lunar_info_window_t3

0xad45,	// (0x00071f91) bg_popup_call2_bubble_pane

0xbb98,	// (0x00072de4) bg_popup_call2_in_pane_cp01_ParamLimits

0xbb98,	// (0x00072de4) bg_popup_call2_in_pane_cp01

0xaa21,	// (0x00071c6d) call_type_pane_cp02

0xbbe0,	// (0x00072e2c) popup_call2_audio_out_window_g1_ParamLimits

0xbbe0,	// (0x00072e2c) popup_call2_audio_out_window_g1

0xbc0c,	// (0x00072e58) popup_call2_audio_out_window_g2_ParamLimits

0xbc0c,	// (0x00072e58) popup_call2_audio_out_window_g2

0xbc34,	// (0x00072e80) popup_call2_audio_out_window_g3_ParamLimits

0xbc34,	// (0x00072e80) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x000767ba) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x000767ba) popup_call2_audio_out_window_g

0xbc6f,	// (0x00072ebb) popup_call2_audio_out_window_t1_ParamLimits

0xbc6f,	// (0x00072ebb) popup_call2_audio_out_window_t1

0xbcce,	// (0x00072f1a) popup_call2_audio_out_window_t2_ParamLimits

0xbcce,	// (0x00072f1a) popup_call2_audio_out_window_t2

0xbd22,	// (0x00072f6e) popup_call2_audio_out_window_t3_ParamLimits

0xbd22,	// (0x00072f6e) popup_call2_audio_out_window_t3

0xbd38,	// (0x00072f84) popup_call2_audio_out_window_t4_ParamLimits

0xbd38,	// (0x00072f84) popup_call2_audio_out_window_t4

0xbd4e,	// (0x00072f9a) popup_call2_audio_out_window_t5_ParamLimits

0xbd4e,	// (0x00072f9a) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x000767c3) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x000767c3) popup_call2_audio_out_window_t

0xbdb2,	// (0x00072ffe) bg_popup_call2_in_pane_ParamLimits

0xbdb2,	// (0x00072ffe) bg_popup_call2_in_pane

0xbe0e,	// (0x0007305a) popup_call2_audio_in_window_g1_ParamLimits

0xbe0e,	// (0x0007305a) popup_call2_audio_in_window_g1

0xbe46,	// (0x00073092) popup_call2_audio_in_window_g2_ParamLimits

0xbe46,	// (0x00073092) popup_call2_audio_in_window_g2

0xbe7e,	// (0x000730ca) popup_call2_audio_in_window_g3_ParamLimits

0xbe7e,	// (0x000730ca) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x000767d0) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x000767d0) popup_call2_audio_in_window_g

0xbed6,	// (0x00073122) popup_call2_audio_in_window_t1_ParamLimits

0xbed6,	// (0x00073122) popup_call2_audio_in_window_t1

0xbf56,	// (0x000731a2) popup_call2_audio_in_window_t2_ParamLimits

0xbf56,	// (0x000731a2) popup_call2_audio_in_window_t2

0xbfd6,	// (0x00073222) popup_call2_audio_in_window_t3_ParamLimits

0xbfd6,	// (0x00073222) popup_call2_audio_in_window_t3

0xbff0,	// (0x0007323c) popup_call2_audio_in_window_t4_ParamLimits

0xbff0,	// (0x0007323c) popup_call2_audio_in_window_t4

0xc002,	// (0x0007324e) popup_call2_audio_in_window_t5_ParamLimits

0xc002,	// (0x0007324e) popup_call2_audio_in_window_t5

0xc017,	// (0x00073263) popup_call2_audio_in_window_t6_ParamLimits

0xc017,	// (0x00073263) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x000767d9) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x000767d9) popup_call2_audio_in_window_t

0xaf98,	// (0x000721e4) bg_popup_call2_in_pane_g1

0xc16e,	// (0x000733ba) popup_cale_lunar_info_window_t4

0x0003,

0xf608,	// (0x00076854) popup_cale_lunar_info_window_t

0xafa0,	// (0x000721ec) bg_popup_call2_rect_pane_ParamLimits

0xafa0,	// (0x000721ec) bg_popup_call2_rect_pane

0xad45,	// (0x00071f91) call2_cli_visual_graphic_pane

0xad45,	// (0x00071f91) call2_cli_visual_text_pane

0xebff,	// (0x00075e4b) smil_status_volume_pane_g3

0x0002,

0xb134,	// (0x00072380) call2_cli_visual_graphic_pane_g1

0xb134,	// (0x00072380) call2_cli_visual_graphic_pane_g2

0xb134,	// (0x00072380) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x000767e6) call2_cli_visual_graphic_pane_g

0xc02c,	// (0x00073278) bg_popup_call2_rect_pane_g1

0xb1dc,	// (0x00072428) bg_popup_call2_rect_pane_g2

0xc034,	// (0x00073280) bg_popup_call2_rect_pane_g3

0xc03c,	// (0x00073288) bg_popup_call2_rect_pane_g4

0xc044,	// (0x00073290) bg_popup_call2_rect_pane_g5

0xc04c,	// (0x00073298) bg_popup_call2_rect_pane_g6

0xc054,	// (0x000732a0) bg_popup_call2_rect_pane_g7

0xc05c,	// (0x000732a8) bg_popup_call2_rect_pane_g8

0xc064,	// (0x000732b0) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x000767ed) bg_popup_call2_rect_pane_g

0xc06c,	// (0x000732b8) bg_popup_call2_bubble_pane_g1

0xc074,	// (0x000732c0) bg_popup_call2_bubble_pane_g2

0xc07c,	// (0x000732c8) bg_popup_call2_bubble_pane_g3

0xc084,	// (0x000732d0) bg_popup_call2_bubble_pane_g4

0xc08c,	// (0x000732d8) bg_popup_call2_bubble_pane_g5

0xc094,	// (0x000732e0) bg_popup_call2_bubble_pane_g6

0xc09c,	// (0x000732e8) bg_popup_call2_bubble_pane_g7

0xc0a4,	// (0x000732f0) bg_popup_call2_bubble_pane_g8

0xc0ac,	// (0x000732f8) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x00076800) bg_popup_call2_bubble_pane_g

0x32b6,	// (0x0006a502) aid_cale_week_size_cell_pane

0x3856,	// (0x0006aaa2) aid_cams_cif_uncrop_pane_ParamLimits

0x3856,	// (0x0006aaa2) aid_cams_cif_uncrop_pane

0x39f7,	// (0x0006ac43) aid_cams_size_cell_ParamLimits

0x39f7,	// (0x0006ac43) aid_cams_size_cell

0x3a0b,	// (0x0006ac57) grid_cams_pane_ParamLimits

0x3a20,	// (0x0006ac6c) linegrid_cams_pane_ParamLimits

0x3ad1,	// (0x0006ad1d) call_video_pane_t1

0x3ae3,	// (0x0006ad2f) call_video_pane_t2

0x0001,

0xf2a1,	// (0x000764ed) call_video_pane_t

0x3dea,	// (0x0006b036) aid_cale_month_size_cell_pane_ParamLimits

0x3dea,	// (0x0006b036) aid_cale_month_size_cell_pane

0xf651,	// (0x0007689d) smil_status_volume_pane_g

0xec0c,	// (0x00075e58) volume_smil_pane_ParamLimits

0xa8eb,	// (0x00071b37) aid_popup2_width_pane

0x323e,	// (0x0006a48a) cell_qdial_pane_g4_ParamLimits

0x323e,	// (0x0006a48a) cell_qdial_pane_g4

0x48be,	// (0x0006bb0a) aid_blid_cardinal_pane_ParamLimits

0x48ca,	// (0x0006bb16) aid_blid_destination_pane_ParamLimits

0x48ca,	// (0x0006bb16) aid_blid_destination_pane

0xafa0,	// (0x000721ec) bg_popup_call_poc_act_pane_ParamLimits

0xafa0,	// (0x000721ec) bg_popup_call_poc_act_pane

0xafa0,	// (0x000721ec) bg_popup_call_poc_inact_pane_ParamLimits

0xafa0,	// (0x000721ec) bg_popup_call_poc_inact_pane

0xc0b4,	// (0x00073300) bg_popup_call_poc_act_pane_g1

0xc0bc,	// (0x00073308) bg_popup_call_poc_act_pane_g2

0xc0c4,	// (0x00073310) bg_popup_call_poc_act_pane_g3

0xc084,	// (0x000732d0) bg_popup_call_poc_act_pane_g4

0xc08c,	// (0x000732d8) bg_popup_call_poc_act_pane_g5

0xc0cc,	// (0x00073318) bg_popup_call_poc_act_pane_g6

0xc09c,	// (0x000732e8) bg_popup_call_poc_act_pane_g7

0xc0d4,	// (0x00073320) bg_popup_call_poc_act_pane_g8

0xad45,	// (0x00071f91) main_usb_pane

0xc26d,	// (0x000734b9) popup_cale_lunar_info_window

0x3caa,	// (0x0006aef6) im_reading_pane_t1_ParamLimits

0xb4f8,	// (0x00072744) list_im_pane_ParamLimits

0xb509,	// (0x00072755) scroll_pane_cp07_ParamLimits

0xad45,	// (0x00071f91) grid_highlight_pane_cp012

0xafa0,	// (0x000721ec) mup_scale_pane_ParamLimits

0x51b4,	// (0x0006c400) main_usb_pane_g1_ParamLimits

0x51b4,	// (0x0006c400) main_usb_pane_g1

0x5ff2,	// (0x0006d23e) main_usb_pane_g2_ParamLimits

0x5ff2,	// (0x0006d23e) main_usb_pane_g2

0x0001,

0xf5f1,	// (0x0007683d) main_usb_pane_g_ParamLimits

0xf5f1,	// (0x0007683d) main_usb_pane_g

0x6006,	// (0x0006d252) main_usb_pane_t1_ParamLimits

0x6006,	// (0x0006d252) main_usb_pane_t1

0x6018,	// (0x0006d264) main_usb_pane_t2_ParamLimits

0x6018,	// (0x0006d264) main_usb_pane_t2

0x602a,	// (0x0006d276) main_usb_pane_t3_ParamLimits

0x602a,	// (0x0006d276) main_usb_pane_t3

0x603c,	// (0x0006d288) main_usb_pane_t4_ParamLimits

0x603c,	// (0x0006d288) main_usb_pane_t4

0x604e,	// (0x0006d29a) main_usb_pane_t5_ParamLimits

0x604e,	// (0x0006d29a) main_usb_pane_t5

0x6060,	// (0x0006d2ac) main_usb_pane_t6_ParamLimits

0x6060,	// (0x0006d2ac) main_usb_pane_t6

0x0005,

0xf5f6,	// (0x00076842) main_usb_pane_t_ParamLimits

0x4858,	// (0x0006baa4) aid_text_placing

0x486a,	// (0x0006bab6) main_location2_pane_t1_ParamLimits

0x4880,	// (0x0006bacc) main_location2_pane_t2_ParamLimits

0x4896,	// (0x0006bae2) main_location2_pane_t3_ParamLimits

0x48ac,	// (0x0006baf8) main_location2_pane_t4_ParamLimits

0x48ac,	// (0x0006baf8) main_location2_pane_t4

0xf402,	// (0x0007664e) main_location2_pane_t_ParamLimits

0xafdc,	// (0x00072228) find_pinb_pane_g2_ParamLimits

0xafdc,	// (0x00072228) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0007639c) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0007639c) find_pinb_pane_g

0xafe8,	// (0x00072234) find_pinb_pane_t1_ParamLimits

0xaffa,	// (0x00072246) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x000763a1) find_pinb_pane_t_ParamLimits

0xad45,	// (0x00071f91) main_call3_pane

0x4126,	// (0x0006b372) cale_month_day_heading_pane_t1_ParamLimits

0x4184,	// (0x0006b3d0) cale_month_day_heading_pane_t2_ParamLimits

0x41e9,	// (0x0006b435) cale_month_day_heading_pane_t3_ParamLimits

0x424e,	// (0x0006b49a) cale_month_day_heading_pane_t4_ParamLimits

0x42b3,	// (0x0006b4ff) cale_month_day_heading_pane_t5_ParamLimits

0x4318,	// (0x0006b564) cale_month_day_heading_pane_t6_ParamLimits

0x437d,	// (0x0006b5c9) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x00076525) cale_month_day_heading_pane_t_ParamLimits

0xb78f,	// (0x000729db) smil_status_volume_pane

0x5190,	// (0x0006c3dc) postcard_address_pane_ParamLimits

0x5190,	// (0x0006c3dc) postcard_address_pane

0x51a2,	// (0x0006c3ee) postcard_message_pane_ParamLimits

0x51a2,	// (0x0006c3ee) postcard_message_pane

0x5fd0,	// (0x0006d21c) call2_cli_visual_pane_t1_ParamLimits

0x5fd0,	// (0x0006d21c) call2_cli_visual_pane_t1

0x672e,	// (0x0006d97a) postcard_message_pane_t1_ParamLimits

0x672e,	// (0x0006d97a) postcard_message_pane_t1

0x6717,	// (0x0006d963) postcard_address_pane_t1_ParamLimits

0x6717,	// (0x0006d963) postcard_address_pane_t1

0x6705,	// (0x0006d951) popup_call3_audio_in_window_ParamLimits

0x6705,	// (0x0006d951) popup_call3_audio_in_window

0x6594,	// (0x0006d7e0) bg_popup_call3_in_pane_ParamLimits

0x6594,	// (0x0006d7e0) bg_popup_call3_in_pane

0x6606,	// (0x0006d852) popup_call3_audio_in_window_g1_ParamLimits

0x6606,	// (0x0006d852) popup_call3_audio_in_window_g1

0x6626,	// (0x0006d872) popup_call3_audio_in_window_g2_ParamLimits

0x6626,	// (0x0006d872) popup_call3_audio_in_window_g2

0x6646,	// (0x0006d892) popup_call3_audio_in_window_g3_ParamLimits

0x6646,	// (0x0006d892) popup_call3_audio_in_window_g3

0x0003,

0xf658,	// (0x000768a4) popup_call3_audio_in_window_g_ParamLimits

0xf658,	// (0x000768a4) popup_call3_audio_in_window_g

0x6677,	// (0x0006d8c3) popup_call3_audio_in_window_t1_ParamLimits

0x6677,	// (0x0006d8c3) popup_call3_audio_in_window_t1

0x66b5,	// (0x0006d901) popup_call3_audio_in_window_t2_ParamLimits

0x66b5,	// (0x0006d901) popup_call3_audio_in_window_t2

0x66f3,	// (0x0006d93f) popup_call3_audio_in_window_t3_ParamLimits

0x66f3,	// (0x0006d93f) popup_call3_audio_in_window_t3

0x0002,

0xf661,	// (0x000768ad) popup_call3_audio_in_window_t_ParamLimits

0xf661,	// (0x000768ad) popup_call3_audio_in_window_t

0x4af2,	// (0x0006bd3e) bg_popup_call3_rect_pane

0xc02c,	// (0x00073278) bg_popup_call3_rect_pane_g1

0xb1dc,	// (0x00072428) bg_popup_call3_rect_pane_g2

0xc034,	// (0x00073280) bg_popup_call3_rect_pane_g3

0xc03c,	// (0x00073288) bg_popup_call3_rect_pane_g4

0xc044,	// (0x00073290) bg_popup_call3_rect_pane_g5

0xc04c,	// (0x00073298) bg_popup_call3_rect_pane_g6

0xc054,	// (0x000732a0) bg_popup_call3_rect_pane_g7

0x4dba,	// (0x0006c006) mup_visualizer_osc_pane

0x4dd0,	// (0x0006c01c) mup_visualizer_spec_pane

0x65c4,	// (0x0006d810) call3_video_qcif_pane_ParamLimits

0x65c4,	// (0x0006d810) call3_video_qcif_pane

0x65d5,	// (0x0006d821) call3_video_qcif_uncrop_pane_ParamLimits

0x65d5,	// (0x0006d821) call3_video_qcif_uncrop_pane

0x65e1,	// (0x0006d82d) call3_video_subqcif_pane_ParamLimits

0x65e1,	// (0x0006d82d) call3_video_subqcif_pane

0x65f5,	// (0x0006d841) call3_video_subqcif_uncrop_pane_ParamLimits

0x65f5,	// (0x0006d841) call3_video_subqcif_uncrop_pane

0x6666,	// (0x0006d8b2) popup_call3_audio_in_window_g4_ParamLimits

0x6666,	// (0x0006d8b2) popup_call3_audio_in_window_g4

0x6583,	// (0x0006d7cf) mup_spec_half_pane

0x658c,	// (0x0006d7d8) mup_spec_half_pane_cp

0xc300,	// (0x0007354c) mup_osc_middle_pane

0xc309,	// (0x00073555) mup_visualizer_osc_pane_g1

0x6564,	// (0x0006d7b0) mup_spec_bar_pane_ParamLimits

0x6564,	// (0x0006d7b0) mup_spec_bar_pane

0xc2ed,	// (0x00073539) mup_spec_bar_pane_g1

0xc2f7,	// (0x00073543) mup_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x00076898) mup_spec_bar_pane_g

0x32b6,	// (0x0006a502) aid_cale_week_size_cell_pane_ParamLimits

0x32c9,	// (0x0006a515) bg_cale_heading_pane_ParamLimits

0xb268,	// (0x000724b4) bg_cale_pane_cp01_ParamLimits

0x32dd,	// (0x0006a529) cale_week_corner_pane_ParamLimits

0x32f3,	// (0x0006a53f) cale_week_day_heading_pane_ParamLimits

0x3307,	// (0x0006a553) cale_week_scroll_pane_g1_ParamLimits

0x3318,	// (0x0006a564) cale_week_scroll_pane_g2_ParamLimits

0x3329,	// (0x0006a575) cale_week_scroll_pane_g3_ParamLimits

0x333a,	// (0x0006a586) cale_week_scroll_pane_g4_ParamLimits

0x334b,	// (0x0006a597) cale_week_scroll_pane_g5_ParamLimits

0x335c,	// (0x0006a5a8) cale_week_scroll_pane_g6_ParamLimits

0x336d,	// (0x0006a5b9) cale_week_scroll_pane_g7_ParamLimits

0x337e,	// (0x0006a5ca) cale_week_scroll_pane_g8_ParamLimits

0x3391,	// (0x0006a5dd) cale_week_scroll_pane_g9_ParamLimits

0x33a2,	// (0x0006a5ee) cale_week_scroll_pane_g10_ParamLimits

0x33b3,	// (0x0006a5ff) cale_week_scroll_pane_g11_ParamLimits

0x33c4,	// (0x0006a610) cale_week_scroll_pane_g12_ParamLimits

0x33d5,	// (0x0006a621) cale_week_scroll_pane_g13_ParamLimits

0x33e6,	// (0x0006a632) cale_week_scroll_pane_g14_ParamLimits

0x33f7,	// (0x0006a643) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0007642d) cale_week_scroll_pane_g_ParamLimits

0x3408,	// (0x0006a654) cale_week_time_pane_ParamLimits

0x341b,	// (0x0006a667) grid_cale_week_pane_ParamLimits

0xb281,	// (0x000724cd) listscroll_cale_week_pane_t1

0x342e,	// (0x0006a67a) scroll_pane_cp08_ParamLimits

0x3e2b,	// (0x0006b077) cale_month_corner_pane_ParamLimits

0xb72f,	// (0x0007297b) cale_month_pane_t1

0x40e5,	// (0x0006b331) cale_month_week_pane_ParamLimits

0x4666,	// (0x0006b8b2) popup_call_status_window_g1_ParamLimits

0x467a,	// (0x0006b8c6) popup_call_status_window_g2_ParamLimits

0x468e,	// (0x0006b8da) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x000765d5) popup_call_status_window_g_ParamLimits

0x0f08,	// (0x00068154) aid_call2_pane

0x23de,	// (0x0006962a) msg_header_pane_g1

0x5190,	// (0x0006c3dc) postcard_address2_pane_ParamLimits

0x5190,	// (0x0006c3dc) postcard_address2_pane

0x51a2,	// (0x0006c3ee) postcard_message2_pane_ParamLimits

0x51a2,	// (0x0006c3ee) postcard_message2_pane

0x6520,	// (0x0006d76c) message2_row_pane_ParamLimits

0x6520,	// (0x0006d76c) message2_row_pane

0x653a,	// (0x0006d786) address2_row_pane_ParamLimits

0x653a,	// (0x0006d786) address2_row_pane

0xc2bb,	// (0x00073507) postcard_message2_row_pane_g1

0xc2c3,	// (0x0007350f) postcard_message2_row_pane_t1

0xc2bb,	// (0x00073507) address2_row_pane_g1

0xc2c3,	// (0x0007350f) address2_row_pane_t1

0x375e,	// (0x0006a9aa) aid_size_cell_vorec

0xad45,	// (0x00071f91) main_rss_pane

0x654d,	// (0x0006d799) rss_list_single_pane_ParamLimits

0x654d,	// (0x0006d799) rss_list_single_pane

0xc2d1,	// (0x0007351d) rss_list_single_pane_t1

0xc2df,	// (0x0007352b) rss_list_single_pane_t2

0x0001,

0xf647,	// (0x00076893) rss_list_single_pane_t

0xad45,	// (0x00071f91) main_camera2_pane

0xad45,	// (0x00071f91) main_video2_pane

0x6787,	// (0x0006d9d3) cams_zoom_pane_cp2_ParamLimits

0x6787,	// (0x0006d9d3) cams_zoom_pane_cp2

0x679e,	// (0x0006d9ea) image2_vga_pane_ParamLimits

0x679e,	// (0x0006d9ea) image2_vga_pane

0x67d4,	// (0x0006da20) main_camera2_pane_g1_ParamLimits

0x67d4,	// (0x0006da20) main_camera2_pane_g1

0x67f4,	// (0x0006da40) main_camera2_pane_g2_ParamLimits

0x67f4,	// (0x0006da40) main_camera2_pane_g2

0x680b,	// (0x0006da57) main_camera2_pane_g3_ParamLimits

0x680b,	// (0x0006da57) main_camera2_pane_g3

0x6822,	// (0x0006da6e) main_camera2_pane_g4_ParamLimits

0x6822,	// (0x0006da6e) main_camera2_pane_g4

0x6839,	// (0x0006da85) main_camera2_pane_g5_ParamLimits

0x6839,	// (0x0006da85) main_camera2_pane_g5

0x6850,	// (0x0006da9c) main_camera2_pane_g6_ParamLimits

0x6850,	// (0x0006da9c) main_camera2_pane_g6

0x6867,	// (0x0006dab3) main_camera2_pane_g7_ParamLimits

0x6867,	// (0x0006dab3) main_camera2_pane_g7

0x687e,	// (0x0006daca) main_camera2_pane_g8_ParamLimits

0x687e,	// (0x0006daca) main_camera2_pane_g8

0x0008,

0xf668,	// (0x000768b4) main_camera2_pane_g_ParamLimits

0xf668,	// (0x000768b4) main_camera2_pane_g

0x68ac,	// (0x0006daf8) main_camera2_pane_t1_ParamLimits

0x68ac,	// (0x0006daf8) main_camera2_pane_t1

0x68db,	// (0x0006db27) main_camera2_pane_t2_ParamLimits

0x68db,	// (0x0006db27) main_camera2_pane_t2

0x68f8,	// (0x0006db44) main_camera2_pane_t3_ParamLimits

0x68f8,	// (0x0006db44) main_camera2_pane_t3

0x6944,	// (0x0006db90) main_camera2_pane_t4_ParamLimits

0x6944,	// (0x0006db90) main_camera2_pane_t4

0x0006,

0xf67b,	// (0x000768c7) main_camera2_pane_t_ParamLimits

0xf67b,	// (0x000768c7) main_camera2_pane_t

0x69b9,	// (0x0006dc05) cams_zoom_pane_cp4_ParamLimits

0x69b9,	// (0x0006dc05) cams_zoom_pane_cp4

0x69cf,	// (0x0006dc1b) image2_cif_pane_ParamLimits

0x69cf,	// (0x0006dc1b) image2_cif_pane

0x69f2,	// (0x0006dc3e) image2_subqcif_pane_ParamLimits

0x69f2,	// (0x0006dc3e) image2_subqcif_pane

0x6a08,	// (0x0006dc54) main_video2_pane_g1_ParamLimits

0x6a08,	// (0x0006dc54) main_video2_pane_g1

0x6a22,	// (0x0006dc6e) main_video2_pane_g2_ParamLimits

0x6a22,	// (0x0006dc6e) main_video2_pane_g2

0x6a38,	// (0x0006dc84) main_video2_pane_g3_ParamLimits

0x6a38,	// (0x0006dc84) main_video2_pane_g3

0x6a4e,	// (0x0006dc9a) main_video2_pane_g4_ParamLimits

0x6a4e,	// (0x0006dc9a) main_video2_pane_g4

0x6a64,	// (0x0006dcb0) main_video2_pane_g5_ParamLimits

0x6a64,	// (0x0006dcb0) main_video2_pane_g5

0x6a7a,	// (0x0006dcc6) main_video2_pane_g6_ParamLimits

0x6a7a,	// (0x0006dcc6) main_video2_pane_g6

0x0005,

0xf68a,	// (0x000768d6) main_video2_pane_g_ParamLimits

0xf68a,	// (0x000768d6) main_video2_pane_g

0x6a94,	// (0x0006dce0) main_video2_pane_t1_ParamLimits

0x6a94,	// (0x0006dce0) main_video2_pane_t1

0x6ab8,	// (0x0006dd04) main_video2_pane_t2_ParamLimits

0x6ab8,	// (0x0006dd04) main_video2_pane_t2

0x6b02,	// (0x0006dd4e) main_video2_pane_t3_ParamLimits

0x6b02,	// (0x0006dd4e) main_video2_pane_t3

0x0002,

0xf697,	// (0x000768e3) main_video2_pane_t_ParamLimits

0xf697,	// (0x000768e3) main_video2_pane_t

0x610f,	// (0x0006d35b) call_muted_g2

0x0001,

0xf639,	// (0x00076885) call_muted_g

0xad45,	// (0x00071f91) main_mup2_pane

0x6b44,	// (0x0006dd90) main_mup2_pane_g1_ParamLimits

0x6b44,	// (0x0006dd90) main_mup2_pane_g1

0x6b50,	// (0x0006dd9c) main_mup2_pane_g2_ParamLimits

0x6b50,	// (0x0006dd9c) main_mup2_pane_g2

0xec75,	// (0x00075ec1) main_mup_pane_g13_cp1

0xec7d,	// (0x00075ec9) mup_volume_pane_cp1

0x6b6c,	// (0x0006ddb8) main_mup2_pane_g4_ParamLimits

0x6b6c,	// (0x0006ddb8) main_mup2_pane_g4

0x6b7c,	// (0x0006ddc8) main_mup2_pane_g5_ParamLimits

0x6b7c,	// (0x0006ddc8) main_mup2_pane_g5

0x6b8c,	// (0x0006ddd8) main_mup2_pane_g6_ParamLimits

0x6b8c,	// (0x0006ddd8) main_mup2_pane_g6

0x6b9c,	// (0x0006dde8) main_mup2_pane_g7_ParamLimits

0x6b9c,	// (0x0006dde8) main_mup2_pane_g7

0x0006,

0xf69e,	// (0x000768ea) main_mup2_pane_g_ParamLimits

0xf69e,	// (0x000768ea) main_mup2_pane_g

0x6bb4,	// (0x0006de00) main_mup2_pane_t1_ParamLimits

0x6bb4,	// (0x0006de00) main_mup2_pane_t1

0x6bca,	// (0x0006de16) main_mup2_pane_t2_ParamLimits

0x6bca,	// (0x0006de16) main_mup2_pane_t2

0x6be0,	// (0x0006de2c) main_mup2_pane_t3_ParamLimits

0x6be0,	// (0x0006de2c) main_mup2_pane_t3

0x6bf6,	// (0x0006de42) main_mup2_pane_t4_ParamLimits

0x6bf6,	// (0x0006de42) main_mup2_pane_t4

0x6c0e,	// (0x0006de5a) main_mup2_pane_t5_ParamLimits

0x6c0e,	// (0x0006de5a) main_mup2_pane_t5

0x6c26,	// (0x0006de72) main_mup2_pane_t6_ParamLimits

0x6c26,	// (0x0006de72) main_mup2_pane_t6

0x0005,

0xf6ad,	// (0x000768f9) main_mup2_pane_t_ParamLimits

0xf6ad,	// (0x000768f9) main_mup2_pane_t

0x6c56,	// (0x0006dea2) mup2_visualizer_pane_ParamLimits

0x6c56,	// (0x0006dea2) mup2_visualizer_pane

0x6c81,	// (0x0006decd) mup_progress_pane_cp_ParamLimits

0x6c81,	// (0x0006decd) mup_progress_pane_cp

0xec60,	// (0x00075eac) mup_volume_pane_cp_ParamLimits

0xec60,	// (0x00075eac) mup_volume_pane_cp

0x6c95,	// (0x0006dee1) mup2_visualizer_pane_g1_ParamLimits

0x6c95,	// (0x0006dee1) mup2_visualizer_pane_g1

0xc340,	// (0x0007358c) mup2_visualizer_pane_g2_ParamLimits

0xc340,	// (0x0007358c) mup2_visualizer_pane_g2

0x6caa,	// (0x0006def6) mup2_visualizer_pane_g3_ParamLimits

0x6caa,	// (0x0006def6) mup2_visualizer_pane_g3

0x0002,

0xf6ba,	// (0x00076906) mup2_visualizer_pane_g_ParamLimits

0xf6ba,	// (0x00076906) mup2_visualizer_pane_g

0x553e,	// (0x0006c78a) aid_size_cell_fmradio

0x626b,	// (0x0006d4b7) aid_height_parent_landcape

0xb596,	// (0x000727e2) wml_content_pane_cp

0xb59e,	// (0x000727ea) wml_tabs_pane

0xb5a7,	// (0x000727f3) popup_wml_miniature_window

0xb5af,	// (0x000727fb) scroll_pane_cp021

0xb5c3,	// (0x0007280f) wml_content_pane_comp8

0xad45,	// (0x00071f91) bg_popup_sub_pane_cp05

0xc35e,	// (0x000735aa) popup_wml_miniature_window_g1

0xc366,	// (0x000735b2) wml_miniature_view_pane

0x6cb6,	// (0x0006df02) aid_size_wml_view

0x6cbe,	// (0x0006df0a) wml_miniature_view_pane_g1

0x6cc7,	// (0x0006df13) wml_miniature_view_pane_g2

0x6cd0,	// (0x0006df1c) wml_miniature_view_pane_g3

0x6cd8,	// (0x0006df24) wml_miniature_view_pane_g4

0x6ce0,	// (0x0006df2c) wml_miniature_view_pane_g5

0x6ce8,	// (0x0006df34) wml_miniature_view_pane_g6

0x6cf0,	// (0x0006df3c) wml_miniature_view_pane_g7

0x6cf8,	// (0x0006df44) wml_miniature_view_pane_g8

0x0007,

0xf6c1,	// (0x0007690d) wml_miniature_view_pane_g

0xc36e,	// (0x000735ba) background_graphic_ParamLimits

0xc36e,	// (0x000735ba) background_graphic

0xc37a,	// (0x000735c6) wml_tabs_2_pane

0xc383,	// (0x000735cf) wml_tabs_3_pane_ParamLimits

0xc383,	// (0x000735cf) wml_tabs_3_pane

0xc395,	// (0x000735e1) wml_tabs_4_pane_ParamLimits

0xc395,	// (0x000735e1) wml_tabs_4_pane

0xc3ab,	// (0x000735f7) wml_tabs_5_pane_ParamLimits

0xc3ab,	// (0x000735f7) wml_tabs_5_pane

0xc3c5,	// (0x00073611) wml_tabs_pane_g2_ParamLimits

0xc3c5,	// (0x00073611) wml_tabs_pane_g2

0xc3d9,	// (0x00073625) wml_tabs_pane_g3_ParamLimits

0xc3d9,	// (0x00073625) wml_tabs_pane_g3

0x6d00,	// (0x0006df4c) wml_tabs_2_active_pane_ParamLimits

0x6d00,	// (0x0006df4c) wml_tabs_2_active_pane

0x6d10,	// (0x0006df5c) wml_tabs_2_passive_pane_ParamLimits

0x6d10,	// (0x0006df5c) wml_tabs_2_passive_pane

0x6d20,	// (0x0006df6c) wml_tabs_3_active_pane_cp_ParamLimits

0x6d20,	// (0x0006df6c) wml_tabs_3_active_pane_cp

0x6d31,	// (0x0006df7d) wml_tabs_3_passive_pane_ParamLimits

0x6d31,	// (0x0006df7d) wml_tabs_3_passive_pane

0x6d42,	// (0x0006df8e) wml_tabs_3_passive_pane_cp_ParamLimits

0x6d42,	// (0x0006df8e) wml_tabs_3_passive_pane_cp

0x6d53,	// (0x0006df9f) tabs_4_active_pane

0x6d5b,	// (0x0006dfa7) tabs_4_passive_pane

0x6d63,	// (0x0006dfaf) tabs_4_passive_pane_cp

0x6d6b,	// (0x0006dfb7) tabs_4_passive_pane_cp2

0x5fea,	// (0x0006d236) aid_height_text

0x4d90,	// (0x0006bfdc) mup_volume_cont_pane_ParamLimits

0x4d90,	// (0x0006bfdc) mup_volume_cont_pane

0x2f4e,	// (0x0006a19a) aid_size_cell_pinb

0x2f58,	// (0x0006a1a4) aid_size_list_pinb

0x6c6d,	// (0x0006deb9) mup2_volume_cont_pane_ParamLimits

0x6c6d,	// (0x0006deb9) mup2_volume_cont_pane

0xec4c,	// (0x00075e98) mup2_volume_cont_pane_g1_ParamLimits

0xec4c,	// (0x00075e98) mup2_volume_cont_pane_g1

0x2c77,	// (0x00069ec3) aid_size_cell_touch_ParamLimits

0x2c77,	// (0x00069ec3) aid_size_cell_touch

0x2e56,	// (0x0006a0a2) touch_pane_ParamLimits

0x2e56,	// (0x0006a0a2) touch_pane

0xa8d9,	// (0x00071b25) main_rss2_pane

0xc3f6,	// (0x00073642) listscroll_rss2_pane

0xc3ff,	// (0x0007364b) rss2_navigation_pane

0xc407,	// (0x00073653) list_rss2_pane

0x103f,	// (0x0006828b) scroll_pane_cp22

0xc40f,	// (0x0007365b) rss2_navigation_pane_g1

0xc418,	// (0x00073664) rss2_navigation_pane_g2

0xc420,	// (0x0007366c) rss2_navigation_pane_g3

0x0002,

0xf6d2,	// (0x0007691e) rss2_navigation_pane_g

0xc428,	// (0x00073674) rss2_navigation_pane_t1

0x6d73,	// (0x0006dfbf) rss2_list_single_pane_ParamLimits

0x6d73,	// (0x0006dfbf) rss2_list_single_pane

0xc436,	// (0x00073682) rss2_list_single_pane_t2

0xc444,	// (0x00073690) rss2_list_single_pane_t3_ParamLimits

0xc444,	// (0x00073690) rss2_list_single_pane_t3

0xc461,	// (0x000736ad) rss2_list_single_pane_t4

0x4547,	// (0x0006b793) smil_status_pane_g1

0x1080,	// (0x000682cc) main_image2_pane_ParamLimits

0x1080,	// (0x000682cc) main_image2_pane

0x6895,	// (0x0006dae1) main_camera2_pane_g9_ParamLimits

0x6895,	// (0x0006dae1) main_camera2_pane_g9

0x6987,	// (0x0006dbd3) main_camera2_pane_t5_ParamLimits

0x6987,	// (0x0006dbd3) main_camera2_pane_t5

0xec21,	// (0x00075e6d) main_camera2_pane_t6_ParamLimits

0xec21,	// (0x00075e6d) main_camera2_pane_t6

0x6d87,	// (0x0006dfd3) main_image2_pane_g1_ParamLimits

0x6d87,	// (0x0006dfd3) main_image2_pane_g1

0x5500,	// (0x0006c74c) smil2_video_pane_ParamLimits

0x5500,	// (0x0006c74c) smil2_video_pane

0xa903,	// (0x00071b4f) aid_zoom_text_primary_cp

0xa92c,	// (0x00071b78) popup_preview_fixed_window

0xb4f0,	// (0x0007273c) im_reading_pane_g1

0x677b,	// (0x0006d9c7) cams2_bc_adjust_pane_cp_ParamLimits

0x677b,	// (0x0006d9c7) cams2_bc_adjust_pane_cp

0x69ad,	// (0x0006dbf9) cams2_bc_adjust_pane_ParamLimits

0x69ad,	// (0x0006dbf9) cams2_bc_adjust_pane

0xec85,	// (0x00075ed1) cams2_bc_adjust_pane_g1

0xec8d,	// (0x00075ed9) cams2_slider_pane

0xec96,	// (0x00075ee2) cams2_slider_pane_g1

0xec9f,	// (0x00075eeb) cams2_slider_pane_g2

0x0006,

0xf6d9,	// (0x00076925) cams2_slider_pane_g

0x3038,	// (0x0006a284) calc_display_pane_ParamLimits

0x3054,	// (0x0006a2a0) calc_paper_pane_ParamLimits

0x3075,	// (0x0006a2c1) grid_calc_pane_ParamLimits

0xeb8e,	// (0x00075dda) popup_clock_digital_window_t1_ParamLimits

0x5399,	// (0x0006c5e5) main_image_pane_t1

0x301a,	// (0x0006a266) aid_size_cell_calc_ParamLimits

0x301a,	// (0x0006a266) aid_size_cell_calc

0x629b,	// (0x0006d4e7) popup_blid_sat_info2_window_ParamLimits

0x629b,	// (0x0006d4e7) popup_blid_sat_info2_window

0xc477,	// (0x000736c3) aid_size_cell_blid

0xc47f,	// (0x000736cb) bg_popup_window_pane_cp07

0xc4a2,	// (0x000736ee) grid_popup_blid_pane

0xc4aa,	// (0x000736f6) heading_pane_cp05_ParamLimits

0xc4aa,	// (0x000736f6) heading_pane_cp05

0xc572,	// (0x000737be) cell_popup_blid_pane_ParamLimits

0xc572,	// (0x000737be) cell_popup_blid_pane

0xc592,	// (0x000737de) cell_popup_blid_pane_g1

0xc59a,	// (0x000737e6) cell_popup_blid_pane_t1

0x6c40,	// (0x0006de8c) mup2_indicator_pane_ParamLimits

0x6c40,	// (0x0006de8c) mup2_indicator_pane

0x4af2,	// (0x0006bd3e) mup2_visualizer_osc_pane

0xc34c,	// (0x00073598) mup2_visualizer_spec_pane_ParamLimits

0xc34c,	// (0x00073598) mup2_visualizer_spec_pane

0x6d9b,	// (0x0006dfe7) mup2_spec_half_pane

0x6da4,	// (0x0006dff0) mup2_spec_half_pane_cp

0x6dac,	// (0x0006dff8) mup2_spec_bar_pane_ParamLimits

0x6dac,	// (0x0006dff8) mup2_spec_bar_pane

0xc2ed,	// (0x00073539) mup2_spec_bar_pane_g1

0xc2f7,	// (0x00073543) mup2_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x00076898) mup2_spec_bar_pane_g

0x6dcb,	// (0x0006e017) mup2_osc_middle_pane

0xc309,	// (0x00073555) mup2_visualizer_osc_pane_g1

0xa954,	// (0x00071ba0) popup_number_entry_window_t1_ParamLimits

0xa967,	// (0x00071bb3) popup_number_entry_window_t2_ParamLimits

0xa979,	// (0x00071bc5) popup_number_entry_window_t3_ParamLimits

0x2e9e,	// (0x0006a0ea) popup_number_entry_window_t5_ParamLimits

0x2e9e,	// (0x0006a0ea) popup_number_entry_window_t5

0xf0fb,	// (0x00076347) popup_number_entry_window_t_ParamLimits

0xa98b,	// (0x00071bd7) text_title_cp2_ParamLimits

0xebcd,	// (0x00075e19) aid_hotspot_pointer_text2_pane

0xebf3,	// (0x00075e3f) main_viewer_pane_g9_ParamLimits

0xebf3,	// (0x00075e3f) main_viewer_pane_g9

0xb72f,	// (0x0007297b) cale_month_pane_t1_ParamLimits

0xb7c4,	// (0x00072a10) bg_cale_pane_ParamLimits

0xb7dc,	// (0x00072a28) list_cale_pane_ParamLimits

0xb281,	// (0x000724cd) listscroll_cale_day_pane_t1

0xb7ed,	// (0x00072a39) scroll_pane_cp09_ParamLimits

0x4e3e,	// (0x0006c08a) main_mup_eq_pane_t1_ParamLimits

0x4e3e,	// (0x0006c08a) main_mup_eq_pane_t1

0x4e56,	// (0x0006c0a2) main_mup_eq_pane_t2_ParamLimits

0x4e56,	// (0x0006c0a2) main_mup_eq_pane_t2

0x4e6c,	// (0x0006c0b8) main_mup_eq_pane_t3_ParamLimits

0x4e6c,	// (0x0006c0b8) main_mup_eq_pane_t3

0x4e82,	// (0x0006c0ce) main_mup_eq_pane_t4_ParamLimits

0x4e82,	// (0x0006c0ce) main_mup_eq_pane_t4

0x4e98,	// (0x0006c0e4) main_mup_eq_pane_t5_ParamLimits

0x4e98,	// (0x0006c0e4) main_mup_eq_pane_t5

0x4eae,	// (0x0006c0fa) main_mup_eq_pane_t6_ParamLimits

0x4eae,	// (0x0006c0fa) main_mup_eq_pane_t6

0x4ec0,	// (0x0006c10c) main_mup_eq_pane_t7_ParamLimits

0x4ec0,	// (0x0006c10c) main_mup_eq_pane_t7

0x4ed2,	// (0x0006c11e) main_mup_eq_pane_t8_ParamLimits

0x4ed2,	// (0x0006c11e) main_mup_eq_pane_t8

0x4ee4,	// (0x0006c130) main_mup_eq_pane_t9_ParamLimits

0x4ee4,	// (0x0006c130) main_mup_eq_pane_t9

0x4efa,	// (0x0006c146) main_mup_eq_pane_t10_ParamLimits

0x4efa,	// (0x0006c146) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x000766d4) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x000766d4) main_mup_eq_pane_t

0x4f8d,	// (0x0006c1d9) mup_equalizer_pane_cp5_ParamLimits

0x4f9f,	// (0x0006c1eb) mup_equalizer_pane_cp6_ParamLimits

0x4fb1,	// (0x0006c1fd) mup_equalizer_pane_cp7_ParamLimits

0xa8d9,	// (0x00071b25) main_gallery_pane

0xc312,	// (0x0007355e) smil2_volume_pane

0xc31a,	// (0x00073566) smil_status_volume_pane_g1_ParamLimits

0xc32d,	// (0x00073579) smil_status_volume_pane_g2_ParamLimits

0xebff,	// (0x00075e4b) smil_status_volume_pane_g3_ParamLimits

0xf651,	// (0x0007689d) smil_status_volume_pane_g_ParamLimits

0xc47f,	// (0x000736cb) bg_popup_window_pane_cp07_ParamLimits

0xc48d,	// (0x000736d9) blid_firmament_pane

0x6dd4,	// (0x0006e020) aid_size_cell_gallery_ParamLimits

0x6dd4,	// (0x0006e020) aid_size_cell_gallery

0x6dea,	// (0x0006e036) grid_gallery_pane_ParamLimits

0x6dea,	// (0x0006e036) grid_gallery_pane

0x6dfe,	// (0x0006e04a) cell_gallery_pane_ParamLimits

0x6dfe,	// (0x0006e04a) cell_gallery_pane

0xc5a8,	// (0x000737f4) bg_cell_gallery_focus_pane_ParamLimits

0xc5a8,	// (0x000737f4) bg_cell_gallery_focus_pane

0xc5ba,	// (0x00073806) cell_gallery_pane_g1_ParamLimits

0xc5ba,	// (0x00073806) cell_gallery_pane_g1

0x6e45,	// (0x0006e091) cell_gallery_pane_g2_ParamLimits

0x6e45,	// (0x0006e091) cell_gallery_pane_g2

0x6e52,	// (0x0006e09e) cell_gallery_pane_g3_ParamLimits

0x6e52,	// (0x0006e09e) cell_gallery_pane_g3

0xc5c6,	// (0x00073812) cell_gallery_pane_g4_ParamLimits

0xc5c6,	// (0x00073812) cell_gallery_pane_g4

0x0003,

0xf6ff,	// (0x0007694b) cell_gallery_pane_g_ParamLimits

0xf6ff,	// (0x0007694b) cell_gallery_pane_g

0xc5d2,	// (0x0007381e) bg_cell_gallery_focus_pane_g1

0xc5da,	// (0x00073826) bg_cell_gallery_focus_pane_g2

0xc5e2,	// (0x0007382e) bg_cell_gallery_focus_pane_g3

0xc5ea,	// (0x00073836) bg_cell_gallery_focus_pane_g4

0xc5f2,	// (0x0007383e) bg_cell_gallery_focus_pane_g5

0xc5fa,	// (0x00073846) bg_cell_gallery_focus_pane_g6

0xc602,	// (0x0007384e) bg_cell_gallery_focus_pane_g7

0xc60a,	// (0x00073856) bg_cell_gallery_focus_pane_g8

0x0007,

0xf708,	// (0x00076954) bg_cell_gallery_focus_pane_g

0xc612,	// (0x0007385e) aid_firma_cardinal

0xc626,	// (0x00073872) blid_firmament_pane_t1

0xc63d,	// (0x00073889) blid_firmament_pane_t2

0xc654,	// (0x000738a0) blid_firmament_pane_t3

0xc66b,	// (0x000738b7) blid_firmament_pane_t4

0x0003,

0xf719,	// (0x00076965) blid_firmament_pane_t

0xc682,	// (0x000738ce) blid_sat_info_pane

0xc692,	// (0x000738de) blid_sat_info_pane_g1

0xc692,	// (0x000738de) blid_sat_info_pane_g2

0x0001,

0xf722,	// (0x0007696e) blid_sat_info_pane_g

0xc69c,	// (0x000738e8) blid_sat_info_pane_t1

0xc6aa,	// (0x000738f6) smil2_volume_content_pane

0xc6b3,	// (0x000738ff) smil2_volume_pane_g1

0xc6bb,	// (0x00073907) smil2_volume_content_pane_g1

0xc6c4,	// (0x00073910) smil2_volume_content_pane_g2

0xc6cd,	// (0x00073919) smil2_volume_content_pane_g3

0xc6d6,	// (0x00073922) smil2_volume_content_pane_g4

0xc6df,	// (0x0007392b) smil2_volume_content_pane_g5

0xc6e8,	// (0x00073934) smil2_volume_content_pane_g6

0xc6f1,	// (0x0007393d) smil2_volume_content_pane_g7

0xc6fa,	// (0x00073946) smil2_volume_content_pane_g8

0xc703,	// (0x0007394f) smil2_volume_content_pane_g9

0xc70c,	// (0x00073958) smil2_volume_content_pane_g10

0x0009,

0xf727,	// (0x00076973) smil2_volume_content_pane_g

0x3484,	// (0x0006a6d0) cale_week_day_heading_pane_t1_ParamLimits

0x34ae,	// (0x0006a6fa) cale_week_day_heading_pane_t2_ParamLimits

0x34d8,	// (0x0006a724) cale_week_day_heading_pane_t3_ParamLimits

0x3502,	// (0x0006a74e) cale_week_day_heading_pane_t4_ParamLimits

0x352c,	// (0x0006a778) cale_week_day_heading_pane_t5_ParamLimits

0x3556,	// (0x0006a7a2) cale_week_day_heading_pane_t6_ParamLimits

0x3580,	// (0x0006a7cc) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0007644c) cale_week_day_heading_pane_t_ParamLimits

0xb293,	// (0x000724df) bg_cale_side_pane_ParamLimits

0x35aa,	// (0x0006a7f6) cale_week_time_pane_t1_ParamLimits

0x35d6,	// (0x0006a822) cale_week_time_pane_t2_ParamLimits

0x3602,	// (0x0006a84e) cale_week_time_pane_t3_ParamLimits

0x362e,	// (0x0006a87a) cale_week_time_pane_t4_ParamLimits

0x365a,	// (0x0006a8a6) cale_week_time_pane_t5_ParamLimits

0x3686,	// (0x0006a8d2) cale_week_time_pane_t6_ParamLimits

0x36b2,	// (0x0006a8fe) cale_week_time_pane_t7_ParamLimits

0x36de,	// (0x0006a92a) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0007645b) cale_week_time_pane_t_ParamLimits

0x370a,	// (0x0006a956) cell_cale_week_pane_g2_ParamLimits

0xb293,	// (0x000724df) bg_cale_side_pane_cp01_ParamLimits

0x43ea,	// (0x0006b636) cale_month_week_pane_t1_ParamLimits

0x4401,	// (0x0006b64d) cale_month_week_pane_t2_ParamLimits

0x4418,	// (0x0006b664) cale_month_week_pane_t3_ParamLimits

0x442f,	// (0x0006b67b) cale_month_week_pane_t4_ParamLimits

0x4446,	// (0x0006b692) cale_month_week_pane_t5_ParamLimits

0x445d,	// (0x0006b6a9) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x00076534) cale_month_week_pane_t_ParamLimits

0xb76b,	// (0x000729b7) cell_cale_month_pane_g1_ParamLimits

0xa8d9,	// (0x00071b25) main_cale_event_viewer_pane

0xa8d9,	// (0x00071b25) listscroll_cale_event_viewer_pane

0xc715,	// (0x00073961) list_cale_ev_pane

0xc71d,	// (0x00073969) scroll_pane_cp023

0x6e5f,	// (0x0006e0ab) field_cale_ev_pane_ParamLimits

0x6e5f,	// (0x0006e0ab) field_cale_ev_pane

0xc729,	// (0x00073975) field_cale_ev_content_pane_ParamLimits

0xc729,	// (0x00073975) field_cale_ev_content_pane

0xc735,	// (0x00073981) field_cale_ev_pane_g1_ParamLimits

0xc735,	// (0x00073981) field_cale_ev_pane_g1

0xc741,	// (0x0007398d) field_cale_ev_pane_g2_ParamLimits

0xc741,	// (0x0007398d) field_cale_ev_pane_g2

0xc759,	// (0x000739a5) field_cale_ev_pane_g3_ParamLimits

0xc759,	// (0x000739a5) field_cale_ev_pane_g3

0x0002,

0xf73c,	// (0x00076988) field_cale_ev_pane_g_ParamLimits

0xf73c,	// (0x00076988) field_cale_ev_pane_g

0xc771,	// (0x000739bd) field_cale_ev_pane_t1_ParamLimits

0xc771,	// (0x000739bd) field_cale_ev_pane_t1

0x6e79,	// (0x0006e0c5) field_cale_ev_content_pane_t1_ParamLimits

0x6e79,	// (0x0006e0c5) field_cale_ev_content_pane_t1

0x5039,	// (0x0006c285) bg_button_pane_cp01

0xb259,	// (0x000724a5) listscroll_cale_week_pane_ParamLimits

0x32ae,	// (0x0006a4fa) popup_toolbar_window_cp01

0xb281,	// (0x000724cd) listscroll_cale_week_pane_t1_ParamLimits

0xb091,	// (0x000722dd) listscroll_cale_day_pane_ParamLimits

0x32ae,	// (0x0006a4fa) popup_toolbar_window_cp02

0xb281,	// (0x000724cd) listscroll_cale_day_pane_t1_ParamLimits

0xb259,	// (0x000724a5) main_cale_month_pane_ParamLimits

0x6497,	// (0x0006d6e3) popup_toolbar_window_cp03_ParamLimits

0x6497,	// (0x0006d6e3) popup_toolbar_window_cp03

0x5377,	// (0x0006c5c3) main_image_pane_g2_ParamLimits

0x5377,	// (0x0006c5c3) main_image_pane_g2

0x5388,	// (0x0006c5d4) main_image_pane_g3_ParamLimits

0x5388,	// (0x0006c5d4) main_image_pane_g3

0x0002,

0xf51a,	// (0x00076766) main_image_pane_g_ParamLimits

0xf51a,	// (0x00076766) main_image_pane_g

0x5399,	// (0x0006c5e5) main_image_pane_t1_ParamLimits

0x53b0,	// (0x0006c5fc) main_image_pane_t2_ParamLimits

0x53b0,	// (0x0006c5fc) main_image_pane_t2

0x53c2,	// (0x0006c60e) main_image_pane_t3_ParamLimits

0x53c2,	// (0x0006c60e) main_image_pane_t3

0x53ea,	// (0x0006c636) main_image_pane_t4_ParamLimits

0x53ea,	// (0x0006c636) main_image_pane_t4

0x0003,

0xf521,	// (0x0007676d) main_image_pane_t_ParamLimits

0xf521,	// (0x0007676d) main_image_pane_t

0x540a,	// (0x0006c656) popup_image_details_window_cp01

0x5412,	// (0x0006c65e) popup_toobar_trans_pane_cp01_ParamLimits

0x5412,	// (0x0006c65e) popup_toobar_trans_pane_cp01

0x6364,	// (0x0006d5b0) popup_image_details_window_ParamLimits

0x6364,	// (0x0006d5b0) popup_image_details_window

0xc275,	// (0x000734c1) popup_image_focus_window

0x6749,	// (0x0006d995) camera2_autofocus_pane_ParamLimits

0x6749,	// (0x0006d995) camera2_autofocus_pane

0xa8d9,	// (0x00071b25) bg_popup_sub_pane_cp06

0xc788,	// (0x000739d4) popup_image_focus_window_g1

0xc790,	// (0x000739dc) popup_image_focus_window_g2

0xc798,	// (0x000739e4) popup_image_focus_window_g3

0xc7a0,	// (0x000739ec) popup_image_focus_window_g4

0x0003,

0xf743,	// (0x0007698f) popup_image_focus_window_g

0xc7a8,	// (0x000739f4) popup_image_focus_window_t1

0xc7b6,	// (0x00073a02) popup_image_focus_window_t2

0xc7c5,	// (0x00073a11) popup_image_focus_window_t3

0x0002,

0xf74c,	// (0x00076998) popup_image_focus_window_t

0xc7d3,	// (0x00073a1f) camera2_autofocus_pane_g1

0x1080,	// (0x000682cc) bg_tb_trans_pane_cp01

0xc7e1,	// (0x00073a2d) popup_image_details_window_g1

0xc7f4,	// (0x00073a40) popup_image_details_window_g2

0x0002,

0xf75e,	// (0x000769aa) popup_image_details_window_g

0xc81d,	// (0x00073a69) popup_image_details_window_t1

0xc82f,	// (0x00073a7b) popup_image_details_window_t2

0xc848,	// (0x00073a94) popup_image_details_window_t3

0xc85c,	// (0x00073aa8) popup_image_details_window_t4

0xc877,	// (0x00073ac3) popup_image_details_window_t5

0x0004,

0xf765,	// (0x000769b1) popup_image_details_window_t

0xb05f,	// (0x000722ab) bg_calc_paper_pane_ParamLimits

0xa8d9,	// (0x00071b25) grid_highlight_pane_cp013

0xb077,	// (0x000722c3) list_calc_pane_ParamLimits

0xb089,	// (0x000722d5) scroll_pane_cp024

0xb091,	// (0x000722dd) bg_calc_display_pane_ParamLimits

0xb09d,	// (0x000722e9) calc_display_pane_t1_ParamLimits

0xb0b2,	// (0x000722fe) calc_display_pane_t2_ParamLimits

0xb0c7,	// (0x00072313) calc_display_pane_t3_ParamLimits

0xf182,	// (0x000763ce) calc_display_pane_t_ParamLimits

0x31ed,	// (0x0006a439) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x000763eb) cell_calc_pane_g

0x31f6,	// (0x0006a442) cell_calc_pane_t1

0xb13e,	// (0x0007238a) grid_highlight_pane_cp02_ParamLimits

0xb154,	// (0x000723a0) toolbar_button_pane_cp01_ParamLimits

0xb154,	// (0x000723a0) toolbar_button_pane_cp01

0x5454,	// (0x0006c6a0) temp_image_control_pane_ParamLimits

0x5454,	// (0x0006c6a0) temp_image_control_pane

0x1080,	// (0x000682cc) main_mp3_pane

0xc891,	// (0x00073add) temp_image_control_pane_g1_ParamLimits

0xc891,	// (0x00073add) temp_image_control_pane_g1

0xc89f,	// (0x00073aeb) temp_image_control_pane_g2_ParamLimits

0xc89f,	// (0x00073aeb) temp_image_control_pane_g2

0xc8b1,	// (0x00073afd) temp_image_control_pane_g3_ParamLimits

0xc8b1,	// (0x00073afd) temp_image_control_pane_g3

0x6ec6,	// (0x0006e112) temp_image_control_pane_g4_ParamLimits

0x6ec6,	// (0x0006e112) temp_image_control_pane_g4

0x0003,

0xf770,	// (0x000769bc) temp_image_control_pane_g_ParamLimits

0xf770,	// (0x000769bc) temp_image_control_pane_g

0xc891,	// (0x00073add) main_mp3_pane_g1

0x6ed7,	// (0x0006e123) main_mp3_pane_g2

0x0007,

0xf779,	// (0x000769c5) main_mp3_pane_g

0xc8f4,	// (0x00073b40) main_mp3_pane_t1

0xb359,	// (0x000725a5) main_camera_pane_g8_ParamLimits

0xb359,	// (0x000725a5) main_camera_pane_g8

0x399f,	// (0x0006abeb) main_video_pane_g7_ParamLimits

0x399f,	// (0x0006abeb) main_video_pane_g7

0xec3a,	// (0x00075e86) main_camera2_pane_t7_ParamLimits

0xec3a,	// (0x00075e86) main_camera2_pane_t7

0xb556,	// (0x000727a2) scroll_pane_cp025_ParamLimits

0xb556,	// (0x000727a2) scroll_pane_cp025

0xb56a,	// (0x000727b6) scroll_pane_cp026_ParamLimits

0xb56a,	// (0x000727b6) scroll_pane_cp026

0xb579,	// (0x000727c5) wml_content_pane_ParamLimits

0xa8d9,	// (0x00071b25) main_touch_calib_pane

0x6f8d,	// (0x0006e1d9) main_touch_calib_pane_g1

0x6f99,	// (0x0006e1e5) main_touch_calib_pane_g2

0x6fa5,	// (0x0006e1f1) main_touch_calib_pane_g3

0x6fb1,	// (0x0006e1fd) main_touch_calib_pane_g4

0x0003,

0xf797,	// (0x000769e3) main_touch_calib_pane_g

0x6fbd,	// (0x0006e209) main_touch_calib_pane_t1

0x6fd5,	// (0x0006e221) main_touch_calib_pane_t2

0x0004,

0xf7a0,	// (0x000769ec) main_touch_calib_pane_t

0x4981,	// (0x0006bbcd) mup_progress_pane_cp02

0x49a0,	// (0x0006bbec) navi_pane_g1

0x4a45,	// (0x0006bc91) navi_pane_mp_t3

0x1080,	// (0x000682cc) main_mp3_pane_ParamLimits

0x64d1,	// (0x0006d71d) navi_pane_ParamLimits

0xc891,	// (0x00073add) main_mp3_pane_g1_ParamLimits

0x6ed7,	// (0x0006e123) main_mp3_pane_g2_ParamLimits

0x6ee3,	// (0x0006e12f) main_mp3_pane_g3_ParamLimits

0x6ee3,	// (0x0006e12f) main_mp3_pane_g3

0x6eef,	// (0x0006e13b) main_mp3_pane_g4_ParamLimits

0x6eef,	// (0x0006e13b) main_mp3_pane_g4

0xc8c1,	// (0x00073b0d) main_mp3_pane_g5_ParamLimits

0xc8c1,	// (0x00073b0d) main_mp3_pane_g5

0xc8cf,	// (0x00073b1b) main_mp3_pane_g6_ParamLimits

0xc8cf,	// (0x00073b1b) main_mp3_pane_g6

0xc8dc,	// (0x00073b28) main_mp3_pane_g7_ParamLimits

0xc8dc,	// (0x00073b28) main_mp3_pane_g7

0xc8e8,	// (0x00073b34) main_mp3_pane_g8_ParamLimits

0xc8e8,	// (0x00073b34) main_mp3_pane_g8

0xf779,	// (0x000769c5) main_mp3_pane_g_ParamLimits

0x6efb,	// (0x0006e147) main_mp3_pane_t2

0x6f09,	// (0x0006e155) main_mp3_pane_t3

0xc902,	// (0x00073b4e) main_mp3_pane_t4

0xc910,	// (0x00073b5c) main_mp3_pane_t5

0x0005,

0xf78a,	// (0x000769d6) main_mp3_pane_t

0xc91e,	// (0x00073b6a) mup_progress_pane_cp01

0xa903,	// (0x00071b4f) aid_zoom_text_secondary2

0xc715,	// (0x00073961) list_cale_ev2_pane

0xc71d,	// (0x00073969) scroll_pane_cp023_ParamLimits

0x7023,	// (0x0006e26f) field_cale_ev2_pane_ParamLimits

0x7023,	// (0x0006e26f) field_cale_ev2_pane

0xecb9,	// (0x00075f05) field_cale_ev2_pane_g1_ParamLimits

0xecb9,	// (0x00075f05) field_cale_ev2_pane_g1

0xecc5,	// (0x00075f11) field_cale_ev2_pane_g2_ParamLimits

0xecc5,	// (0x00075f11) field_cale_ev2_pane_g2

0xecdd,	// (0x00075f29) field_cale_ev2_pane_g3_ParamLimits

0xecdd,	// (0x00075f29) field_cale_ev2_pane_g3

0x0003,

0xf7ab,	// (0x000769f7) field_cale_ev2_pane_g_ParamLimits

0xf7ab,	// (0x000769f7) field_cale_ev2_pane_g

0xc926,	// (0x00073b72) field_cale_ev2_pane_t1_ParamLimits

0xc926,	// (0x00073b72) field_cale_ev2_pane_t1

0xc93d,	// (0x00073b89) field_cale_ev2_pane_t2_ParamLimits

0xc93d,	// (0x00073b89) field_cale_ev2_pane_t2

0x0001,

0xf7b4,	// (0x00076a00) field_cale_ev2_pane_t_ParamLimits

0xf7b4,	// (0x00076a00) field_cale_ev2_pane_t

0x514c,	// (0x0006c398) main_postcard_pane_g5_ParamLimits

0x514c,	// (0x0006c398) main_postcard_pane_g5

0x5160,	// (0x0006c3ac) main_postcard_pane_g6_ParamLimits

0x5160,	// (0x0006c3ac) main_postcard_pane_g6

0x3781,	// (0x0006a9cd) camera2_autofocus_pane_cp_ParamLimits

0x3781,	// (0x0006a9cd) camera2_autofocus_pane_cp

0x1080,	// (0x000682cc) main_mup3_pane

0x705b,	// (0x0006e2a7) main_mup3_pane_g1_ParamLimits

0x705b,	// (0x0006e2a7) main_mup3_pane_g1

0x707d,	// (0x0006e2c9) main_mup3_pane_g2_ParamLimits

0x707d,	// (0x0006e2c9) main_mup3_pane_g2

0x70e5,	// (0x0006e331) main_mup3_pane_g3_ParamLimits

0x70e5,	// (0x0006e331) main_mup3_pane_g3

0x7123,	// (0x0006e36f) main_mup3_pane_g4_ParamLimits

0x7123,	// (0x0006e36f) main_mup3_pane_g4

0x7161,	// (0x0006e3ad) main_mup3_pane_g5_ParamLimits

0x7161,	// (0x0006e3ad) main_mup3_pane_g5

0x719f,	// (0x0006e3eb) main_mup3_pane_g6_ParamLimits

0x719f,	// (0x0006e3eb) main_mup3_pane_g6

0xc952,	// (0x00073b9e) main_mup3_pane_g7_ParamLimits

0xc952,	// (0x00073b9e) main_mup3_pane_g7

0x0007,

0xf7c4,	// (0x00076a10) main_mup3_pane_g_ParamLimits

0xf7c4,	// (0x00076a10) main_mup3_pane_g

0x7215,	// (0x0006e461) main_mup3_pane_t1_ParamLimits

0x7215,	// (0x0006e461) main_mup3_pane_t1

0x727d,	// (0x0006e4c9) main_mup3_pane_t2_ParamLimits

0x727d,	// (0x0006e4c9) main_mup3_pane_t2

0x7345,	// (0x0006e591) main_mup3_pane_t4_ParamLimits

0x7345,	// (0x0006e591) main_mup3_pane_t4

0x7393,	// (0x0006e5df) main_mup3_pane_t5_ParamLimits

0x7393,	// (0x0006e5df) main_mup3_pane_t5

0x7441,	// (0x0006e68d) main_mup3_pane_t6_ParamLimits

0x7441,	// (0x0006e68d) main_mup3_pane_t6

0x0005,

0xf7d5,	// (0x00076a21) main_mup3_pane_t_ParamLimits

0xf7d5,	// (0x00076a21) main_mup3_pane_t

0x74f5,	// (0x0006e741) mup3_progress_pane_ParamLimits

0x74f5,	// (0x0006e741) mup3_progress_pane

0x7551,	// (0x0006e79d) popup_mup3_control_window_ParamLimits

0x7551,	// (0x0006e79d) popup_mup3_control_window

0xc960,	// (0x00073bac) popup_mup3_text_window

0x757f,	// (0x0006e7cb) mup3_progress_pane_t1

0x7595,	// (0x0006e7e1) mup3_progress_pane_t2

0xc968,	// (0x00073bb4) mup3_progress_pane_t3

0x0002,

0xf7e2,	// (0x00076a2e) mup3_progress_pane_t

0xc97f,	// (0x00073bcb) mup_progress_pane_cp03

0xa8d9,	// (0x00071b25) bg_tb_trans_pane_cp04

0x75ab,	// (0x0006e7f7) mup3_volume_pane

0x75b3,	// (0x0006e7ff) popup_mup3_control_window_g1

0x75bc,	// (0x0006e808) mup3_volume_pane_g1

0x75c5,	// (0x0006e811) mup3_volume_pane_g2

0x75ce,	// (0x0006e81a) mup3_volume_pane_g3

0x0002,

0xf7e9,	// (0x00076a35) mup3_volume_pane_g

0xa8d9,	// (0x00071b25) bg_tb_trans_pane_cp03

0xc98f,	// (0x00073bdb) popup_mup3_text_window_g1

0xc997,	// (0x00073be3) popup_mup3_text_window_t1

0xb115,	// (0x00072361) list_calc_item_pane_g1_ParamLimits

0xc3ed,	// (0x00073639) mup_volume_pane_cp_g1

0x6fed,	// (0x0006e239) main_touch_calib_pane_t3

0x6fff,	// (0x0006e24b) main_touch_calib_pane_t4

0x7011,	// (0x0006e25d) main_touch_calib_pane_t5

0xa8e3,	// (0x00071b2f) aid_cell_size_toolbar2

0xa8eb,	// (0x00071b37) aid_popup3_width_pane

0xa8f3,	// (0x00071b3f) aid_zoom_text_msg_primary

0xb339,	// (0x00072585) vorec_t7

0xb0d9,	// (0x00072325) bg_calc_paper_pane_g1_ParamLimits

0xb0e5,	// (0x00072331) bg_calc_paper_pane_g2_ParamLimits

0xb0f1,	// (0x0007233d) bg_calc_paper_pane_g3_ParamLimits

0xb0fd,	// (0x00072349) bg_calc_paper_pane_g4_ParamLimits

0xb109,	// (0x00072355) bg_calc_paper_pane_g5_ParamLimits

0x3187,	// (0x0006a3d3) bg_calc_paper_pane_g6_ParamLimits

0x3196,	// (0x0006a3e2) bg_calc_paper_pane_g7_ParamLimits

0x31a5,	// (0x0006a3f1) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x000763d5) bg_calc_paper_pane_g_ParamLimits

0x31b4,	// (0x0006a400) calc_bg_paper_pane_g9_ParamLimits

0x38b5,	// (0x0006ab01) image_qvga_pane_ParamLimits

0x38b5,	// (0x0006ab01) image_qvga_pane

0xafa0,	// (0x000721ec) bg_popup_sub_pane_cp04_ParamLimits

0x52d5,	// (0x0006c521) popup_mup_playback_window_g1_ParamLimits

0x52e1,	// (0x0006c52d) popup_mup_playback_window_t1_ParamLimits

0x52f6,	// (0x0006c542) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x00076761) popup_mup_playback_window_t_ParamLimits

0x6b60,	// (0x0006ddac) main_mup2_pane_g3_ParamLimits

0x6b60,	// (0x0006ddac) main_mup2_pane_g3

0x3b2c,	// (0x0006ad78) popup_toolbar_window_cp04

0x5a49,	// (0x0006cc95) popup_call2_audio_second_window_g3_ParamLimits

0x5a49,	// (0x0006cc95) popup_call2_audio_second_window_g3

0x5e53,	// (0x0006d09f) popup_call2_audio_first_window_g4_ParamLimits

0x5e53,	// (0x0006d09f) popup_call2_audio_first_window_g4

0xbeb6,	// (0x00073102) popup_call2_audio_in_window_g4_ParamLimits

0xbeb6,	// (0x00073102) popup_call2_audio_in_window_g4

0x530b,	// (0x0006c557) aid_area_sk_bg_cut_ParamLimits

0x530b,	// (0x0006c557) aid_area_sk_bg_cut

0x5329,	// (0x0006c575) aid_area_sk_bg_cut_2_ParamLimits

0x5329,	// (0x0006c575) aid_area_sk_bg_cut_2

0x6e35,	// (0x0006e081) aid_placing_details_win

0x6e3d,	// (0x0006e089) aid_placing_details_win_2

0xc7d3,	// (0x00073a1f) camera2_autofocus_pane_g1_ParamLimits

0x2dfd,	// (0x0006a049) popup_fixed_preview_cale_window_ParamLimits

0x2dfd,	// (0x0006a049) popup_fixed_preview_cale_window

0x4b03,	// (0x0006bd4f) navi_slider_pane_g3

0x4b0c,	// (0x0006bd58) navi_slider_pane_g4

0x4b15,	// (0x0006bd61) navi_slider_pane_g5

0x4b03,	// (0x0006bd4f) navi_slider_pane_g6

0xebb4,	// (0x00075e00) navi_slider_pane_g7

0x4fce,	// (0x0006c21a) mup_scale_pane_g3

0x4fd7,	// (0x0006c223) mup_scale_pane_g4

0x4fe0,	// (0x0006c22c) mup_scale_pane_g5

0x4fe9,	// (0x0006c235) mup_scale_pane_g6

0x4ff2,	// (0x0006c23e) mup_scale_pane_g7

0x4b03,	// (0x0006bd4f) cams2_slider_pane_g3

0xc46f,	// (0x000736bb) cams2_slider_pane_g4

0xeca8,	// (0x00075ef4) cams2_slider_pane_g5

0x4b03,	// (0x0006bd4f) cams2_slider_pane_g6

0xecb0,	// (0x00075efc) cams2_slider_pane_g7

0xc692,	// (0x000738de) camera2_autofocus_pane_cp_g1

0xc9a5,	// (0x00073bf1) bg_popup_preview_window_pane_cp02_ParamLimits

0xc9a5,	// (0x00073bf1) bg_popup_preview_window_pane_cp02

0x75d7,	// (0x0006e823) list_fp_cale_pane_ParamLimits

0x75d7,	// (0x0006e823) list_fp_cale_pane

0xc9b1,	// (0x00073bfd) popup_fixed_preview_cale_window_t1_ParamLimits

0xc9b1,	// (0x00073bfd) popup_fixed_preview_cale_window_t1

0x75e3,	// (0x0006e82f) popup_fixed_preview_cale_window_t2_ParamLimits

0x75e3,	// (0x0006e82f) popup_fixed_preview_cale_window_t2

0x75f8,	// (0x0006e844) popup_fixed_preview_cale_window_t3_ParamLimits

0x75f8,	// (0x0006e844) popup_fixed_preview_cale_window_t3

0x0002,

0xf7f0,	// (0x00076a3c) popup_fixed_preview_cale_window_t_ParamLimits

0xf7f0,	// (0x00076a3c) popup_fixed_preview_cale_window_t

0x760d,	// (0x0006e859) list_single_fp_cale_pane_ParamLimits

0x760d,	// (0x0006e859) list_single_fp_cale_pane

0x7621,	// (0x0006e86d) list_single_fp_cale_pane_g1_ParamLimits

0x7621,	// (0x0006e86d) list_single_fp_cale_pane_g1

0xc9cf,	// (0x00073c1b) list_single_fp_cale_pane_g2_ParamLimits

0xc9cf,	// (0x00073c1b) list_single_fp_cale_pane_g2

0x0002,

0xf7f7,	// (0x00076a43) list_single_fp_cale_pane_g_ParamLimits

0xf7f7,	// (0x00076a43) list_single_fp_cale_pane_g

0x762d,	// (0x0006e879) list_single_fp_cale_pane_t1_ParamLimits

0x762d,	// (0x0006e879) list_single_fp_cale_pane_t1

0x763f,	// (0x0006e88b) list_single_fp_cale_pane_t2_ParamLimits

0x763f,	// (0x0006e88b) list_single_fp_cale_pane_t2

0x0001,

0xf7fe,	// (0x00076a4a) list_single_fp_cale_pane_t_ParamLimits

0xf7fe,	// (0x00076a4a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa8d9,	// (0x00071b25) main_dialer_pane

0x7672,	// (0x0006e8be) aid_cell_size_keypad

0x767c,	// (0x0006e8c8) dialer_ne_pane

0x7684,	// (0x0006e8d0) grid_dialer_command_1_pane

0x768c,	// (0x0006e8d8) grid_dialer_command_2_pane

0x7694,	// (0x0006e8e0) grid_dialer_keypad_pane

0x76a4,	// (0x0006e8f0) bg_popup_call_pane_cp06_ParamLimits

0x76a4,	// (0x0006e8f0) bg_popup_call_pane_cp06

0x76b0,	// (0x0006e8fc) dialer_ne_clear_pane_ParamLimits

0x76b0,	// (0x0006e8fc) dialer_ne_clear_pane

0xc9e8,	// (0x00073c34) dialer_ne_pane_g1

0xc9f0,	// (0x00073c3c) dialer_ne_pane_t1_ParamLimits

0xc9f0,	// (0x00073c3c) dialer_ne_pane_t1

0x76bc,	// (0x0006e908) dialer_ne_pane_t2_ParamLimits

0x76bc,	// (0x0006e908) dialer_ne_pane_t2

0x76e6,	// (0x0006e932) dialer_ne_pane_t3_ParamLimits

0x76e6,	// (0x0006e932) dialer_ne_pane_t3

0x0002,

0xf803,	// (0x00076a4f) dialer_ne_pane_t_ParamLimits

0xf803,	// (0x00076a4f) dialer_ne_pane_t

0x7716,	// (0x0006e962) dialer_ne_pane_t3_copy1_ParamLimits

0x7716,	// (0x0006e962) dialer_ne_pane_t3_copy1

0x7745,	// (0x0006e991) cell_dialer_keypad_pane_ParamLimits

0x7745,	// (0x0006e991) cell_dialer_keypad_pane

0x775a,	// (0x0006e9a6) cell_dialer_command_1_pane_ParamLimits

0x775a,	// (0x0006e9a6) cell_dialer_command_1_pane

0x7770,	// (0x0006e9bc) cell_dialer_command_2_pane_ParamLimits

0x7770,	// (0x0006e9bc) cell_dialer_command_2_pane

0xca02,	// (0x00073c4e) bg_button_pane_cp02_ParamLimits

0xca02,	// (0x00073c4e) bg_button_pane_cp02

0x777f,	// (0x0006e9cb) cell_dialer_keypad_pane_g1_ParamLimits

0x777f,	// (0x0006e9cb) cell_dialer_keypad_pane_g1

0xca02,	// (0x00073c4e) bg_button_pane_cp03_ParamLimits

0xca02,	// (0x00073c4e) bg_button_pane_cp03

0x7794,	// (0x0006e9e0) cell_dialer_command_1_pane_g1_ParamLimits

0x7794,	// (0x0006e9e0) cell_dialer_command_1_pane_g1

0xca0e,	// (0x00073c5a) bg_button_pane_cp04

0x77a8,	// (0x0006e9f4) cell_dialer_command_2_pane_g1

0x4af2,	// (0x0006bd3e) bg_button_pane_cp06

0xca16,	// (0x00073c62) dialer_ne_clear_pane_g1

0x49ac,	// (0x0006bbf8) navi_pane_g2

0x49ca,	// (0x0006bc16) navi_pane_g3

0x0002,

0xf418,	// (0x00076664) navi_pane_g

0x4a53,	// (0x0006bc9f) navi_pane_mv_g2

0x4a7b,	// (0x0006bcc7) navi_pane_mv_g5

0x4a84,	// (0x0006bcd0) navi_pane_mv_t1

0xb091,	// (0x000722dd) main_clock2_pane

0x77dc,	// (0x0006ea28) main_clock2_list_pane_ParamLimits

0x77dc,	// (0x0006ea28) main_clock2_list_pane

0x780e,	// (0x0006ea5a) main_clock2_pane_t1_ParamLimits

0x780e,	// (0x0006ea5a) main_clock2_pane_t1

0x7845,	// (0x0006ea91) main_clock2_pane_t2_ParamLimits

0x7845,	// (0x0006ea91) main_clock2_pane_t2

0x0004,

0xf80a,	// (0x00076a56) main_clock2_pane_t_ParamLimits

0xf80a,	// (0x00076a56) main_clock2_pane_t

0x78c7,	// (0x0006eb13) popup_clock_analogue_window_cp03_ParamLimits

0x78c7,	// (0x0006eb13) popup_clock_analogue_window_cp03

0x78ea,	// (0x0006eb36) popup_clock_digital_window_cp02_ParamLimits

0x78ea,	// (0x0006eb36) popup_clock_digital_window_cp02

0x795b,	// (0x0006eba7) main_clock2_list_single_pane_ParamLimits

0x795b,	// (0x0006eba7) main_clock2_list_single_pane

0x4af2,	// (0x0006bd3e) list_highlight_pane_cp05

0xca1e,	// (0x00073c6a) main_clock2_list_single_pane_t1

0x3b2c,	// (0x0006ad78) popup_toolbar_window_cp04_ParamLimits

0x6e96,	// (0x0006e0e2) camera2_autofocus_pane_g2_ParamLimits

0x6e96,	// (0x0006e0e2) camera2_autofocus_pane_g2

0x6ea2,	// (0x0006e0ee) camera2_autofocus_pane_g3_ParamLimits

0x6ea2,	// (0x0006e0ee) camera2_autofocus_pane_g3

0x6eae,	// (0x0006e0fa) camera2_autofocus_pane_g4_ParamLimits

0x6eae,	// (0x0006e0fa) camera2_autofocus_pane_g4

0x6eba,	// (0x0006e106) camera2_autofocus_pane_g5_ParamLimits

0x6eba,	// (0x0006e106) camera2_autofocus_pane_g5

0x0004,

0xf753,	// (0x0007699f) camera2_autofocus_pane_g_ParamLimits

0xf753,	// (0x0007699f) camera2_autofocus_pane_g

0x703b,	// (0x0006e287) camera2_autofocus_pane_cp_g2

0x7043,	// (0x0006e28f) camera2_autofocus_pane_cp_g3

0x704b,	// (0x0006e297) camera2_autofocus_pane_cp_g4

0x7053,	// (0x0006e29f) camera2_autofocus_pane_cp_g5

0x0004,

0xf7b9,	// (0x00076a05) camera2_autofocus_pane_cp_g

0x769c,	// (0x0006e8e8) popup_dialer_spcha_window

0xa8d9,	// (0x00071b25) bg_popup_sub_pane_cp07

0xca2c,	// (0x00073c78) list_spcha_pane

0xca34,	// (0x00073c80) list_single_spcha_pane_ParamLimits

0xca34,	// (0x00073c80) list_single_spcha_pane

0xa8d9,	// (0x00071b25) list_highlight_pane_cp06

0xca45,	// (0x00073c91) list_single_spcha_pane_t1

0xbc60,	// (0x00072eac) popup_call2_audio_out_window_g4_ParamLimits

0xbc60,	// (0x00072eac) popup_call2_audio_out_window_g4

0xa8d9,	// (0x00071b25) main_imed2_pane

0xc27d,	// (0x000734c9) popup_imed_adjust2_window

0x637a,	// (0x0006d5c6) popup_imed_trans_window_ParamLimits

0x637a,	// (0x0006d5c6) popup_imed_trans_window

0xc4d6,	// (0x00073722) popup_blid_sat_info2_window_t1

0xc4e4,	// (0x00073730) popup_blid_sat_info2_window_t2

0x000a,

0xf6e8,	// (0x00076934) popup_blid_sat_info2_window_t

0x7a05,	// (0x0006ec51) aid_size_cell_colour_35

0x7a25,	// (0x0006ec71) aid_size_cell_colour_112

0x7a45,	// (0x0006ec91) aid_size_cell_effect

0xc257,	// (0x000734a3) bg_tb_trans_pane_cp02

0xb8e4,	// (0x00072b30) heading_imed_pane

0x7a65,	// (0x0006ecb1) listscroll_imed_pane

0xca53,	// (0x00073c9f) heading_imed_pane_g1

0xca5b,	// (0x00073ca7) heading_imed_pane_t1

0xca69,	// (0x00073cb5) grid_imed_colour_35_pane_ParamLimits

0xca69,	// (0x00073cb5) grid_imed_colour_35_pane

0x7a71,	// (0x0006ecbd) grid_imed_effect_pane

0xca7c,	// (0x00073cc8) list_imed_aspect_pane

0x7a84,	// (0x0006ecd0) scroll_pane_cp027_ParamLimits

0x7a84,	// (0x0006ecd0) scroll_pane_cp027

0x7a90,	// (0x0006ecdc) cell_imed_effect_pane_ParamLimits

0x7a90,	// (0x0006ecdc) cell_imed_effect_pane

0xca84,	// (0x00073cd0) cell_imed_colour_pane_ParamLimits

0xca84,	// (0x00073cd0) cell_imed_colour_pane

0xcabe,	// (0x00073d0a) cell_imed_colour_pane_g1_ParamLimits

0xcabe,	// (0x00073d0a) cell_imed_colour_pane_g1

0xcacf,	// (0x00073d1b) hgihlgiht_grid_pane_cp016_ParamLimits

0xcacf,	// (0x00073d1b) hgihlgiht_grid_pane_cp016

0x7ab5,	// (0x0006ed01) cell_imed_effect_pane_g1

0x7abd,	// (0x0006ed09) grid_highlight_pane_cp017

0xcae0,	// (0x00073d2c) list_imed_single_pane_ParamLimits

0xcae0,	// (0x00073d2c) list_imed_single_pane

0xa8d9,	// (0x00071b25) list_highlight_pane_cp07

0xcaf3,	// (0x00073d3f) list_imed_aspect_pane_comp1_t1

0xc257,	// (0x000734a3) bg_tb_trans_pane_cp05

0xcb13,	// (0x00073d5f) popup_imed_adjust2_window_g1

0xcb3a,	// (0x00073d86) popup_imed_adjust2_window_t1

0xcb52,	// (0x00073d9e) slider_imed_adjust_pane

0xcb66,	// (0x00073db2) slider_imed_adjust_pane_g1

0xcb76,	// (0x00073dc2) slider_imed_adjust_pane_g2

0xcb86,	// (0x00073dd2) slider_imed_adjust_pane_g3

0xcb97,	// (0x00073de3) slider_imed_adjust_pane_g4

0x0003,

0xf827,	// (0x00076a73) slider_imed_adjust_pane_g

0x7ac6,	// (0x0006ed12) aid_size_cell_clipart2

0x7ad2,	// (0x0006ed1e) grid_imed_clipart_pane

0xcba8,	// (0x00073df4) scroll_pane_cp031

0x7adc,	// (0x0006ed28) cell_imed_clipart_pane_ParamLimits

0x7adc,	// (0x0006ed28) cell_imed_clipart_pane

0x7af4,	// (0x0006ed40) cell_imed_clipart_pane_g1

0xa8d9,	// (0x00071b25) grid_highlight_pane_cp014

0x77ef,	// (0x0006ea3b) main_clock2_pane_g1_ParamLimits

0x77ef,	// (0x0006ea3b) main_clock2_pane_g1

0x7906,	// (0x0006eb52) aid_call2_pane_cp10

0x7918,	// (0x0006eb64) aid_call_pane_cp10

0x48de,	// (0x0006bb2a) popup_clock_analogue_window_cp10_g1

0x48de,	// (0x0006bb2a) popup_clock_analogue_window_cp10_g2

0x792a,	// (0x0006eb76) popup_clock_analogue_window_cp10_g3

0x792a,	// (0x0006eb76) popup_clock_analogue_window_cp10_g4

0x48de,	// (0x0006bb2a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf815,	// (0x00076a61) popup_clock_analogue_window_cp10_g

0x793c,	// (0x0006eb88) popup_clock_analogue_window_cp10_t1

0x796d,	// (0x0006ebb9) clock_digital_number_pane_cp10_ParamLimits

0x796d,	// (0x0006ebb9) clock_digital_number_pane_cp10

0x7985,	// (0x0006ebd1) clock_digital_number_pane_cp11_ParamLimits

0x7985,	// (0x0006ebd1) clock_digital_number_pane_cp11

0x799d,	// (0x0006ebe9) clock_digital_number_pane_cp12_ParamLimits

0x799d,	// (0x0006ebe9) clock_digital_number_pane_cp12

0x79b5,	// (0x0006ec01) clock_digital_number_pane_cp13_ParamLimits

0x79b5,	// (0x0006ec01) clock_digital_number_pane_cp13

0x79cd,	// (0x0006ec19) clock_digital_separator_pane_cp10_ParamLimits

0x79cd,	// (0x0006ec19) clock_digital_separator_pane_cp10

0x79e5,	// (0x0006ec31) popup_clock_digital_window_cp02_t1_ParamLimits

0x79e5,	// (0x0006ec31) popup_clock_digital_window_cp02_t1

0xaf98,	// (0x000721e4) clock_digital_number_pane_cp10_g1

0xaf98,	// (0x000721e4) clock_digital_number_pane_cp10_g2

0x0001,

0xf830,	// (0x00076a7c) clock_digital_number_pane_cp10_g

0xaf98,	// (0x000721e4) clock_digital_separator_pane_cp10_g1

0xaf98,	// (0x000721e4) clock_digital_separator_pane_g2_cp10

0x4ac2,	// (0x0006bd0e) navi_pane_vded_g4

0x4acb,	// (0x0006bd17) navi_pane_vded_g5

0x4ad4,	// (0x0006bd20) navi_pane_vded_t1

0xa8d9,	// (0x00071b25) main_vded_pane

0x7afd,	// (0x0006ed49) main_vded_pane_g1

0x7b07,	// (0x0006ed53) main_vded_pane_g2

0x7b0f,	// (0x0006ed5b) main_vded_pane_g3

0x0002,

0xf835,	// (0x00076a81) main_vded_pane_g

0x7b17,	// (0x0006ed63) main_vded_pane_t1

0x7b25,	// (0x0006ed71) main_vded_pane_t2

0x0001,

0xf83c,	// (0x00076a88) main_vded_pane_t

0x7b33,	// (0x0006ed7f) vded_slider_pane

0x7b3b,	// (0x0006ed87) vded_video_pane

0xcbb0,	// (0x00073dfc) vded_video_pane_g1

0x7b43,	// (0x0006ed8f) vded_video_pane_g2

0xc692,	// (0x000738de) vded_video_pane_g3

0x0002,

0xf841,	// (0x00076a8d) vded_video_pane_g

0xcbba,	// (0x00073e06) vded_slider_pane_g1

0xc3ed,	// (0x00073639) vded_slider_pane_g2

0xcbc3,	// (0x00073e0f) vded_slider_pane_g3

0xcbcc,	// (0x00073e18) vded_slider_pane_g4

0xcbd5,	// (0x00073e21) vded_slider_pane_g5

0x0004,

0xf848,	// (0x00076a94) vded_slider_pane_g

0x753b,	// (0x0006e787) mup3_rocker_pane_ParamLimits

0x753b,	// (0x0006e787) mup3_rocker_pane

0x7b4c,	// (0x0006ed98) mup3_control_keys_pane_g1

0x7b54,	// (0x0006eda0) mup3_control_keys_pane_g2

0x7b5c,	// (0x0006eda8) mup3_control_keys_pane_g3

0x7b64,	// (0x0006edb0) mup3_control_keys_pane_g4

0x0003,

0xf853,	// (0x00076a9f) mup3_control_keys_pane_g

0x2e30,	// (0x0006a07c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2e30,	// (0x0006a07c) popup_toolbar2_fixed_window_cp01

0x7569,	// (0x0006e7b5) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7569,	// (0x0006e7b5) popup_toolbar2_fixed_window_cp02

0x5bbb,	// (0x0006ce07) popup_call2_audio_second_window_t4_ParamLimits

0x5bbb,	// (0x0006ce07) popup_call2_audio_second_window_t4

0xbacd,	// (0x00072d19) popup_call2_audio_first_window_t6_ParamLimits

0xbacd,	// (0x00072d19) popup_call2_audio_first_window_t6

0xbd63,	// (0x00072faf) popup_call2_audio_out_window_t6_ParamLimits

0xbd63,	// (0x00072faf) popup_call2_audio_out_window_t6

0xa8d9,	// (0x00071b25) main_vitu_pane

0x7b74,	// (0x0006edc0) aid_size_cell_itu_ParamLimits

0x7b74,	// (0x0006edc0) aid_size_cell_itu

0x1080,	// (0x000682cc) bg_popup_window_pane_cp08_ParamLimits

0x1080,	// (0x000682cc) bg_popup_window_pane_cp08

0x7b8a,	// (0x0006edd6) field_vitu_entry_pane_ParamLimits

0x7b8a,	// (0x0006edd6) field_vitu_entry_pane

0x7b9d,	// (0x0006ede9) grid_vitu_function_pane_ParamLimits

0x7b9d,	// (0x0006ede9) grid_vitu_function_pane

0x7bb2,	// (0x0006edfe) grid_vitu_itu_pane_ParamLimits

0x7bb2,	// (0x0006edfe) grid_vitu_itu_pane

0x7bc8,	// (0x0006ee14) cell_vitu_itu_pane_ParamLimits

0x7bc8,	// (0x0006ee14) cell_vitu_itu_pane

0x7bea,	// (0x0006ee36) cell_vitu_function_pane_ParamLimits

0x7bea,	// (0x0006ee36) cell_vitu_function_pane

0x1080,	// (0x000682cc) bg_popup_sub_pane_cp08_ParamLimits

0x1080,	// (0x000682cc) bg_popup_sub_pane_cp08

0x7c03,	// (0x0006ee4f) field_vitu_entry_pane_t1_ParamLimits

0x7c03,	// (0x0006ee4f) field_vitu_entry_pane_t1

0xcbf6,	// (0x00073e42) field_vitu_entry_pane_t2_ParamLimits

0xcbf6,	// (0x00073e42) field_vitu_entry_pane_t2

0x0001,

0xf861,	// (0x00076aad) field_vitu_entry_pane_t_ParamLimits

0xf861,	// (0x00076aad) field_vitu_entry_pane_t

0xcc13,	// (0x00073e5f) bg_button_pane_cp05_ParamLimits

0xcc13,	// (0x00073e5f) bg_button_pane_cp05

0x7c1f,	// (0x0006ee6b) cell_vitu_itu_pane_g1

0x7c37,	// (0x0006ee83) cell_vitu_itu_pane_t1_ParamLimits

0x7c37,	// (0x0006ee83) cell_vitu_itu_pane_t1

0x7c49,	// (0x0006ee95) cell_vitu_itu_pane_t2_ParamLimits

0x7c49,	// (0x0006ee95) cell_vitu_itu_pane_t2

0x0002,

0xf866,	// (0x00076ab2) cell_vitu_itu_pane_t_ParamLimits

0xf866,	// (0x00076ab2) cell_vitu_itu_pane_t

0xcc21,	// (0x00073e6d) bg_button_pane_cp07

0x7c7e,	// (0x0006eeca) cell_vitu_function_pane_g1

0xb027,	// (0x00072273) main_calc_pane_g1

0x2c94,	// (0x00069ee0) aid_visual_content_pane

0xa8d9,	// (0x00071b25) main_vradio_pane

0x7c87,	// (0x0006eed3) main_vradio_pane_g1_ParamLimits

0x7c87,	// (0x0006eed3) main_vradio_pane_g1

0xcc2b,	// (0x00073e77) main_vradio_pane_g2_ParamLimits

0xcc2b,	// (0x00073e77) main_vradio_pane_g2

0x0001,

0xf86d,	// (0x00076ab9) main_vradio_pane_g_ParamLimits

0xf86d,	// (0x00076ab9) main_vradio_pane_g

0x7c9d,	// (0x0006eee9) main_vradio_pane_t1_ParamLimits

0x7c9d,	// (0x0006eee9) main_vradio_pane_t1

0x7cb2,	// (0x0006eefe) main_vradio_pane_t2_ParamLimits

0x7cb2,	// (0x0006eefe) main_vradio_pane_t2

0xcc38,	// (0x00073e84) main_vradio_pane_t3_ParamLimits

0xcc38,	// (0x00073e84) main_vradio_pane_t3

0x0002,

0xf872,	// (0x00076abe) main_vradio_pane_t_ParamLimits

0xf872,	// (0x00076abe) main_vradio_pane_t

0x7cc7,	// (0x0006ef13) vradio_rocker_control_pane_ParamLimits

0x7cc7,	// (0x0006ef13) vradio_rocker_control_pane

0x7cd9,	// (0x0006ef25) vradio_station_info_pane_ParamLimits

0x7cd9,	// (0x0006ef25) vradio_station_info_pane

0xcc4a,	// (0x00073e96) vradio_frequency_info_pane_ParamLimits

0xcc4a,	// (0x00073e96) vradio_frequency_info_pane

0xc692,	// (0x000738de) vradio_station_info_pane_g1

0xcc59,	// (0x00073ea5) vradio_station_info_pane_t1_ParamLimits

0xcc59,	// (0x00073ea5) vradio_station_info_pane_t1

0xcc7b,	// (0x00073ec7) vradio_station_info_pane_t2_ParamLimits

0xcc7b,	// (0x00073ec7) vradio_station_info_pane_t2

0x0001,

0xf879,	// (0x00076ac5) vradio_station_info_pane_t_ParamLimits

0xf879,	// (0x00076ac5) vradio_station_info_pane_t

0xcc8d,	// (0x00073ed9) vradio_tuning_pane

0xcc95,	// (0x00073ee1) vradio_rocker_control_pane_g1

0xcc9d,	// (0x00073ee9) vradio_rocker_control_pane_g2

0xcca5,	// (0x00073ef1) vradio_rocker_control_pane_g3

0xccad,	// (0x00073ef9) vradio_rocker_control_pane_g4

0xccb5,	// (0x00073f01) vradio_rocker_control_pane_g5

0x0004,

0xf87e,	// (0x00076aca) vradio_rocker_control_pane_g

0x7ce9,	// (0x0006ef35) vradio_frequency_info_pane_g1

0xccbd,	// (0x00073f09) vradio_frequency_info_pane_t1_ParamLimits

0xccbd,	// (0x00073f09) vradio_frequency_info_pane_t1

0x7cf3,	// (0x0006ef3f) vradio_tuning_pane_g1

0x7cfc,	// (0x0006ef48) vradio_tuning_pane_t1

0xa90b,	// (0x00071b57) area_side_right_pane_ParamLimits

0xa90b,	// (0x00071b57) area_side_right_pane

0xc21e,	// (0x0007346a) status_small_pane_g1

0xc226,	// (0x00073472) status_small_pane_g2

0xc22f,	// (0x0007347b) status_small_pane_g3

0xc238,	// (0x00073484) status_small_pane_g4

0x0003,

0xf63e,	// (0x0007688a) status_small_pane_g

0xc241,	// (0x0007348d) status_small_pane_t1

0xa8d9,	// (0x00071b25) main_video3_pane

0xccd1,	// (0x00073f1d) cams_zoom_vslider_pane

0xccd9,	// (0x00073f25) image3_wide_pane_ParamLimits

0xccd9,	// (0x00073f25) image3_wide_pane

0xccf3,	// (0x00073f3f) image3_wide_small_pane

0xccfd,	// (0x00073f49) main_video3_pane_g1_ParamLimits

0xccfd,	// (0x00073f49) main_video3_pane_g1

0xcd19,	// (0x00073f65) main_video3_pane_g2_ParamLimits

0xcd19,	// (0x00073f65) main_video3_pane_g2

0x0001,

0xf889,	// (0x00076ad5) main_video3_pane_g_ParamLimits

0xf889,	// (0x00076ad5) main_video3_pane_g

0xcd35,	// (0x00073f81) main_video3_pane_t1_ParamLimits

0xcd35,	// (0x00073f81) main_video3_pane_t1

0xcd60,	// (0x00073fac) main_video3_pane_t2_ParamLimits

0xcd60,	// (0x00073fac) main_video3_pane_t2

0xcd8b,	// (0x00073fd7) main_video3_pane_t3_ParamLimits

0xcd8b,	// (0x00073fd7) main_video3_pane_t3

0x0002,

0xf88e,	// (0x00076ada) main_video3_pane_t_ParamLimits

0xf88e,	// (0x00076ada) main_video3_pane_t

0xcdb6,	// (0x00074002) cams_zoom_vslider_pane_g1

0xcdbf,	// (0x0007400b) cams_zoom_vslider_pane_g2

0x0001,

0xf895,	// (0x00076ae1) cams_zoom_vslider_pane_g

0xcdc7,	// (0x00074013) small_slider_vertical_pane

0xc692,	// (0x000738de) small_slider_vertical_pane_g1

0xc692,	// (0x000738de) small_slider_vertical_pane_g2

0xcdcf,	// (0x0007401b) small_slider_vertical_pane_g3

0x0002,

0xf89a,	// (0x00076ae6) small_slider_vertical_pane_g

0xa8d9,	// (0x00071b25) main_hwr_training_pane

0xcdd8,	// (0x00074024) hwr_training_instruct_pane_ParamLimits

0xcdd8,	// (0x00074024) hwr_training_instruct_pane

0x7d0b,	// (0x0006ef57) hwr_training_navi_pane_ParamLimits

0x7d0b,	// (0x0006ef57) hwr_training_navi_pane

0x7d22,	// (0x0006ef6e) hwr_training_write_pane_ParamLimits

0x7d22,	// (0x0006ef6e) hwr_training_write_pane

0xa8d9,	// (0x00071b25) bg_frame_shadow_pane

0xce07,	// (0x00074053) hwr_training_write_pane_g1

0xce0f,	// (0x0007405b) hwr_training_write_pane_g2

0xce17,	// (0x00074063) hwr_training_write_pane_g3

0xce1f,	// (0x0007406b) hwr_training_write_pane_g4

0xce27,	// (0x00074073) hwr_training_write_pane_g5

0xce2f,	// (0x0007407b) hwr_training_write_pane_g6

0xce37,	// (0x00074083) hwr_training_write_pane_g7

0x0006,

0xf8a1,	// (0x00076aed) hwr_training_write_pane_g

0xed01,	// (0x00075f4d) hwr_training_navi_pane_g1_ParamLimits

0xed01,	// (0x00075f4d) hwr_training_navi_pane_g1

0xed13,	// (0x00075f5f) hwr_training_navi_pane_g2_ParamLimits

0xed13,	// (0x00075f5f) hwr_training_navi_pane_g2

0xed25,	// (0x00075f71) hwr_training_navi_pane_g3_ParamLimits

0xed25,	// (0x00075f71) hwr_training_navi_pane_g3

0xed35,	// (0x00075f81) hwr_training_navi_pane_g4_ParamLimits

0xed35,	// (0x00075f81) hwr_training_navi_pane_g4

0x0004,

0xf8b0,	// (0x00076afc) hwr_training_navi_pane_g_ParamLimits

0xf8b0,	// (0x00076afc) hwr_training_navi_pane_g

0xed42,	// (0x00075f8e) hwr_training_navi_pane_t1

0x7d62,	// (0x0006efae) list_single_hwr_training_instruct_pane_ParamLimits

0x7d62,	// (0x0006efae) list_single_hwr_training_instruct_pane

0xce3f,	// (0x0007408b) list_single_hwr_training_instruct_pane_t1

0xc5d2,	// (0x0007381e) bg_frame_shadow_pane_g1

0xce4e,	// (0x0007409a) bg_frame_shadow_pane_g2

0xce56,	// (0x000740a2) bg_frame_shadow_pane_g3

0xce5e,	// (0x000740aa) bg_frame_shadow_pane_g4

0xce66,	// (0x000740b2) bg_frame_shadow_pane_g5

0xce6e,	// (0x000740ba) bg_frame_shadow_pane_g6

0xce76,	// (0x000740c2) bg_frame_shadow_pane_g7

0xb1b4,	// (0x00072400) bg_frame_shadow_pane_g8

0x0007,

0xf8bb,	// (0x00076b07) bg_frame_shadow_pane_g

0xa8d9,	// (0x00071b25) main_video_tele_dialer_pane

0x7d7a,	// (0x0006efc6) aid_size_cell_video_keypad_ParamLimits

0x7d7a,	// (0x0006efc6) aid_size_cell_video_keypad

0x7d94,	// (0x0006efe0) grid_video_dialer_keypad_pane_ParamLimits

0x7d94,	// (0x0006efe0) grid_video_dialer_keypad_pane

0x7dd6,	// (0x0006f022) video_down_pane_cp_ParamLimits

0x7dd6,	// (0x0006f022) video_down_pane_cp

0x7e06,	// (0x0006f052) cell_video_dialer_keypad_pane_ParamLimits

0x7e06,	// (0x0006f052) cell_video_dialer_keypad_pane

0xce7e,	// (0x000740ca) bg_button_pane_cp08_ParamLimits

0xce7e,	// (0x000740ca) bg_button_pane_cp08

0x7e28,	// (0x0006f074) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7e28,	// (0x0006f074) cell_video_dialer_keypad_pane_g1

0x7525,	// (0x0006e771) mup3_rocker2_pane_ParamLimits

0x7525,	// (0x0006e771) mup3_rocker2_pane

0xc692,	// (0x000738de) mup3_rocker2_pane_g1

0x6273,	// (0x0006d4bf) main_dialer2_pane

0xa8d9,	// (0x00071b25) main_mp4_pane

0xed58,	// (0x00075fa4) main_mp4_pane_g1_ParamLimits

0xed58,	// (0x00075fa4) main_mp4_pane_g1

0xed58,	// (0x00075fa4) main_mp4_pane_g2_ParamLimits

0xed58,	// (0x00075fa4) main_mp4_pane_g2

0x7e63,	// (0x0006f0af) main_mp4_pane_g3_ParamLimits

0x7e63,	// (0x0006f0af) main_mp4_pane_g3

0xed66,	// (0x00075fb2) main_mp4_pane_g4_ParamLimits

0xed66,	// (0x00075fb2) main_mp4_pane_g4

0xed94,	// (0x00075fe0) main_mp4_pane_g5_ParamLimits

0xed94,	// (0x00075fe0) main_mp4_pane_g5

0x0005,

0xf8db,	// (0x00076b27) main_mp4_pane_g_ParamLimits

0xf8db,	// (0x00076b27) main_mp4_pane_g

0xedf0,	// (0x0007603c) main_mp4_pane_t1_ParamLimits

0xedf0,	// (0x0007603c) main_mp4_pane_t1

0xee48,	// (0x00076094) main_mp4_pane_t2_ParamLimits

0xee48,	// (0x00076094) main_mp4_pane_t2

0xce8a,	// (0x000740d6) main_mp4_pane_t3_ParamLimits

0xce8a,	// (0x000740d6) main_mp4_pane_t3

0xee9a,	// (0x000760e6) main_mp4_pane_t4_ParamLimits

0xee9a,	// (0x000760e6) main_mp4_pane_t4

0x0003,

0xf8e8,	// (0x00076b34) main_mp4_pane_t_ParamLimits

0xf8e8,	// (0x00076b34) main_mp4_pane_t

0xeeda,	// (0x00076126) mp4_progress_pane_ParamLimits

0xeeda,	// (0x00076126) mp4_progress_pane

0xef1e,	// (0x0007616a) mp4_rocker_pane_ParamLimits

0xef1e,	// (0x0007616a) mp4_rocker_pane

0xceb8,	// (0x00074104) mp4_progress_pane_t1

0xcecf,	// (0x0007411b) mp4_progress_pane_t2

0x0001,

0xf8f1,	// (0x00076b3d) mp4_progress_pane_t

0xcee6,	// (0x00074132) mup_progress_pane_cp04

0xc692,	// (0x000738de) mp4_rocker_pane_g1

0x7e93,	// (0x0006f0df) aid_cell_size_keypad2_ParamLimits

0x7e93,	// (0x0006f0df) aid_cell_size_keypad2

0x7ead,	// (0x0006f0f9) dialer2_ne_pane_ParamLimits

0x7ead,	// (0x0006f0f9) dialer2_ne_pane

0x7ec2,	// (0x0006f10e) grid_dialer2_keypad_pane_ParamLimits

0x7ec2,	// (0x0006f10e) grid_dialer2_keypad_pane

0xc47f,	// (0x000736cb) bg_popup_call_pane_cp07_ParamLimits

0xc47f,	// (0x000736cb) bg_popup_call_pane_cp07

0x7ed8,	// (0x0006f124) dialer2_ne_pane_t1_ParamLimits

0x7ed8,	// (0x0006f124) dialer2_ne_pane_t1

0x7f15,	// (0x0006f161) cell_dialer2_keypad_pane_ParamLimits

0x7f15,	// (0x0006f161) cell_dialer2_keypad_pane

0xcf04,	// (0x00074150) bg_button_pane_pane_cp04_ParamLimits

0xcf04,	// (0x00074150) bg_button_pane_pane_cp04

0x7f37,	// (0x0006f183) cell_dialer2_keypad_pane_g1_ParamLimits

0x7f37,	// (0x0006f183) cell_dialer2_keypad_pane_g1

0x3a71,	// (0x0006acbd) aid_placing_vt_set_content_ParamLimits

0x3a71,	// (0x0006acbd) aid_placing_vt_set_content

0x3a8f,	// (0x0006acdb) aid_placing_vt_set_title_ParamLimits

0x3a8f,	// (0x0006acdb) aid_placing_vt_set_title

0xa8d9,	// (0x00071b25) main_image3_pane

0x7fc6,	// (0x0006f212) area_side_right_pane_cp01_ParamLimits

0x7fc6,	// (0x0006f212) area_side_right_pane_cp01

0xed58,	// (0x00075fa4) main_image3_pane_g1_ParamLimits

0xed58,	// (0x00075fa4) main_image3_pane_g1

0x7fdd,	// (0x0006f229) main_image3_pane_g2_ParamLimits

0x7fdd,	// (0x0006f229) main_image3_pane_g2

0x8003,	// (0x0006f24f) main_image3_pane_g3_ParamLimits

0x8003,	// (0x0006f24f) main_image3_pane_g3

0x8029,	// (0x0006f275) main_image3_pane_g4_ParamLimits

0x8029,	// (0x0006f275) main_image3_pane_g4

0x0003,

0xf900,	// (0x00076b4c) main_image3_pane_g_ParamLimits

0xf900,	// (0x00076b4c) main_image3_pane_g

0x804f,	// (0x0006f29b) main_image3_pane_t1_ParamLimits

0x804f,	// (0x0006f29b) main_image3_pane_t1

0x80a7,	// (0x0006f2f3) main_image3_pane_t2_ParamLimits

0x80a7,	// (0x0006f2f3) main_image3_pane_t2

0x80f9,	// (0x0006f345) main_image3_pane_t3_ParamLimits

0x80f9,	// (0x0006f345) main_image3_pane_t3

0x0003,

0xf909,	// (0x00076b55) main_image3_pane_t_ParamLimits

0xf909,	// (0x00076b55) main_image3_pane_t

0x1080,	// (0x000682cc) grid_sctrl_middle_pane_cp01_ParamLimits

0x1080,	// (0x000682cc) grid_sctrl_middle_pane_cp01

0x8179,	// (0x0006f3c5) cell_sctrl_middle_pane_cp01_ParamLimits

0x8179,	// (0x0006f3c5) cell_sctrl_middle_pane_cp01

0x8196,	// (0x0006f3e2) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8196,	// (0x0006f3e2) cell_sctrl_middle_pane_cp01_g1

0xa8d9,	// (0x00071b25) main_call4_pane

0x81ac,	// (0x0006f3f8) aid_size_button_call4_ParamLimits

0x81ac,	// (0x0006f3f8) aid_size_button_call4

0x81d9,	// (0x0006f425) call4_windows_pane_ParamLimits

0x81d9,	// (0x0006f425) call4_windows_pane

0x81ef,	// (0x0006f43b) grid_call4_button_pane_ParamLimits

0x81ef,	// (0x0006f43b) grid_call4_button_pane

0xcf28,	// (0x00074174) call4_windows_conf_pane

0x820e,	// (0x0006f45a) popup_call4_audio_first_window_ParamLimits

0x820e,	// (0x0006f45a) popup_call4_audio_first_window

0x822e,	// (0x0006f47a) popup_call4_audio_second_window_ParamLimits

0x822e,	// (0x0006f47a) popup_call4_audio_second_window

0xcf5b,	// (0x000741a7) popup_call4_audio_wait_window_ParamLimits

0xcf5b,	// (0x000741a7) popup_call4_audio_wait_window

0x8240,	// (0x0006f48c) cell_call4_button_pane_ParamLimits

0x8240,	// (0x0006f48c) cell_call4_button_pane

0x8265,	// (0x0006f4b1) bg_button_pane_cp09_ParamLimits

0x8265,	// (0x0006f4b1) bg_button_pane_cp09

0x8271,	// (0x0006f4bd) cell_call4_button_pane_g1_ParamLimits

0x8271,	// (0x0006f4bd) cell_call4_button_pane_g1

0x8297,	// (0x0006f4e3) cell_call4_button_pane_t1_ParamLimits

0x8297,	// (0x0006f4e3) cell_call4_button_pane_t1

0xcfa1,	// (0x000741ed) popup_call4_audio_conf_window_ParamLimits

0xcfa1,	// (0x000741ed) popup_call4_audio_conf_window

0x757f,	// (0x0006e7cb) mup3_progress_pane_t1_ParamLimits

0x7595,	// (0x0006e7e1) mup3_progress_pane_t2_ParamLimits

0xc968,	// (0x00073bb4) mup3_progress_pane_t3_ParamLimits

0xf7e2,	// (0x00076a2e) mup3_progress_pane_t_ParamLimits

0xc97f,	// (0x00073bcb) mup_progress_pane_cp03_ParamLimits

0x7b6c,	// (0x0006edb8) mup3_control_keys_pane_g4_copy1

0xef08,	// (0x00076154) mp4_rocker2_pane_ParamLimits

0xef08,	// (0x00076154) mp4_rocker2_pane

0xcfb5,	// (0x00074201) mp4_rocker2_pane_g1

0xcfbd,	// (0x00074209) mp4_rocker2_pane_g2

0xef6e,	// (0x000761ba) mp4_rocker2_pane_g3

0xef76,	// (0x000761c2) mp4_rocker2_pane_g4

0xef7e,	// (0x000761ca) mp4_rocker2_pane_g5

0x0004,

0xf912,	// (0x00076b5e) mp4_rocker2_pane_g

0xa8d9,	// (0x00071b25) main_camera4_pane

0xa8d9,	// (0x00071b25) main_video4_pane

0x7da8,	// (0x0006eff4) main_video_tele_dialer_pane_t1_ParamLimits

0x7da8,	// (0x0006eff4) main_video_tele_dialer_pane_t1

0x7dbf,	// (0x0006f00b) main_video_tele_dialer_pane_t2_ParamLimits

0x7dbf,	// (0x0006f00b) main_video_tele_dialer_pane_t2

0x0001,

0xf8cc,	// (0x00076b18) main_video_tele_dialer_pane_t_ParamLimits

0xf8cc,	// (0x00076b18) main_video_tele_dialer_pane_t

0x82d5,	// (0x0006f521) cam4_autofocus_pane_ParamLimits

0x82d5,	// (0x0006f521) cam4_autofocus_pane

0x82e9,	// (0x0006f535) cam4_image_uncrop_pane_ParamLimits

0x82e9,	// (0x0006f535) cam4_image_uncrop_pane

0x8300,	// (0x0006f54c) cam4_indicators_pane_ParamLimits

0x8300,	// (0x0006f54c) cam4_indicators_pane

0x8324,	// (0x0006f570) main_camera4_pane_g1_ParamLimits

0x8324,	// (0x0006f570) main_camera4_pane_g1

0x8330,	// (0x0006f57c) main_camera4_pane_g2_ParamLimits

0x8330,	// (0x0006f57c) main_camera4_pane_g2

0x8330,	// (0x0006f57c) main_camera4_pane_g3_ParamLimits

0x8330,	// (0x0006f57c) main_camera4_pane_g3

0x833c,	// (0x0006f588) main_camera4_pane_g4_ParamLimits

0x833c,	// (0x0006f588) main_camera4_pane_g4

0x8348,	// (0x0006f594) main_camera4_pane_g5_ParamLimits

0x8348,	// (0x0006f594) main_camera4_pane_g5

0x0005,

0xf91d,	// (0x00076b69) main_camera4_pane_g_ParamLimits

0xf91d,	// (0x00076b69) main_camera4_pane_g

0x8365,	// (0x0006f5b1) main_camera4_pane_t1_ParamLimits

0x8365,	// (0x0006f5b1) main_camera4_pane_t1

0xc8c1,	// (0x00073b0d) bg_tb_trans_pane_cp06

0xef9e,	// (0x000761ea) cam4_indicators_pane_g1

0xefae,	// (0x000761fa) cam4_indicators_pane_g2

0x0002,

0xf938,	// (0x00076b84) cam4_indicators_pane_g

0xefce,	// (0x0007621a) cam4_indicators_pane_t1

0x83cc,	// (0x0006f618) main_video4_pane_g1_ParamLimits

0x83cc,	// (0x0006f618) main_video4_pane_g1

0x83de,	// (0x0006f62a) main_video4_pane_g2_ParamLimits

0x83de,	// (0x0006f62a) main_video4_pane_g2

0x83de,	// (0x0006f62a) main_video4_pane_g3_ParamLimits

0x83de,	// (0x0006f62a) main_video4_pane_g3

0x83ed,	// (0x0006f639) main_video4_pane_g4_ParamLimits

0x83ed,	// (0x0006f639) main_video4_pane_g4

0x0004,

0xf93f,	// (0x00076b8b) main_video4_pane_g_ParamLimits

0xf93f,	// (0x00076b8b) main_video4_pane_g

0x840b,	// (0x0006f657) vid4_indicators_pane_ParamLimits

0x840b,	// (0x0006f657) vid4_indicators_pane

0x8433,	// (0x0006f67f) video4_image_uncrop_cif_pane_ParamLimits

0x8433,	// (0x0006f67f) video4_image_uncrop_cif_pane

0x844b,	// (0x0006f697) video4_image_uncrop_nhd_pane_ParamLimits

0x844b,	// (0x0006f697) video4_image_uncrop_nhd_pane

0x845f,	// (0x0006f6ab) video4_image_uncrop_vga_pane_ParamLimits

0x845f,	// (0x0006f6ab) video4_image_uncrop_vga_pane

0xcfc5,	// (0x00074211) bg_tb_trans_pane_cp07

0x8477,	// (0x0006f6c3) vid4_indicators_pane_g1

0x8484,	// (0x0006f6d0) vid4_indicators_pane_g2

0x8491,	// (0x0006f6dd) vid4_indicators_pane_g3

0x0004,

0xf94a,	// (0x00076b96) vid4_indicators_pane_g

0x84b6,	// (0x0006f702) vid4_indicators_pane_t1

0x84c8,	// (0x0006f714) cam4_autofocus_pane_g1

0x84d0,	// (0x0006f71c) cam4_autofocus_pane_g2

0x84d8,	// (0x0006f724) cam4_autofocus_pane_g3

0x0002,

0xf955,	// (0x00076ba1) cam4_autofocus_pane_g

0x84e0,	// (0x0006f72c) cam4_autofocus_pane_g3_copy1

0x7dea,	// (0x0006f036) video_down_pane_cp_t1

0x7df8,	// (0x0006f044) video_down_pane_cp_t2

0x0001,

0xf8d1,	// (0x00076b1d) video_down_pane_cp_t

0x1080,	// (0x000682cc) popup_vitu2_window_ParamLimits

0x1080,	// (0x000682cc) popup_vitu2_window

0x84e8,	// (0x0006f734) aid_size_cell2_itu2_ParamLimits

0x84e8,	// (0x0006f734) aid_size_cell2_itu2

0x850e,	// (0x0006f75a) aid_size_cell_itu2_ParamLimits

0x850e,	// (0x0006f75a) aid_size_cell_itu2

0x8560,	// (0x0006f7ac) bg_popup_window_pane_cp09_ParamLimits

0x8560,	// (0x0006f7ac) bg_popup_window_pane_cp09

0x856e,	// (0x0006f7ba) field_vitu2_entry_pane_ParamLimits

0x856e,	// (0x0006f7ba) field_vitu2_entry_pane

0x8588,	// (0x0006f7d4) grid_vitu2_function_pane_ParamLimits

0x8588,	// (0x0006f7d4) grid_vitu2_function_pane

0x85c3,	// (0x0006f80f) grid_vitu2_itu_pane_ParamLimits

0x85c3,	// (0x0006f80f) grid_vitu2_itu_pane

0x8628,	// (0x0006f874) cell_vitu2_itu_pane_ParamLimits

0x8628,	// (0x0006f874) cell_vitu2_itu_pane

0x864a,	// (0x0006f896) cell_vitu2_function_pane_ParamLimits

0x864a,	// (0x0006f896) cell_vitu2_function_pane

0xcfd3,	// (0x0007421f) bg_popup_call_pane_cp08_ParamLimits

0xcfd3,	// (0x0007421f) bg_popup_call_pane_cp08

0xcfec,	// (0x00074238) field_vitu2_entry_pane_g1

0xcff8,	// (0x00074244) field_vitu2_entry_pane_g2

0x0002,

0xf95c,	// (0x00076ba8) field_vitu2_entry_pane_g

0xd012,	// (0x0007425e) field_vitu2_entry_pane_t1_ParamLimits

0xd012,	// (0x0007425e) field_vitu2_entry_pane_t1

0xd02d,	// (0x00074279) field_vitu2_entry_pane_t2_ParamLimits

0xd02d,	// (0x00074279) field_vitu2_entry_pane_t2

0x0001,

0xf963,	// (0x00076baf) field_vitu2_entry_pane_t_ParamLimits

0xf963,	// (0x00076baf) field_vitu2_entry_pane_t

0x8689,	// (0x0006f8d5) bg_button_pane_cp010_ParamLimits

0x8689,	// (0x0006f8d5) bg_button_pane_cp010

0x8697,	// (0x0006f8e3) cell_vitu2_itu_pane_g1

0x86b5,	// (0x0006f901) cell_vitu2_itu_pane_t1_ParamLimits

0x86b5,	// (0x0006f901) cell_vitu2_itu_pane_t1

0x245d,	// (0x000696a9) cell_vitu2_itu_pane_t2_ParamLimits

0x245d,	// (0x000696a9) cell_vitu2_itu_pane_t2

0x0002,

0xf96d,	// (0x00076bb9) cell_vitu2_itu_pane_t_ParamLimits

0xf96d,	// (0x00076bb9) cell_vitu2_itu_pane_t

0x1080,	// (0x000682cc) bg_button_pane_cp011

0x871b,	// (0x0006f967) cell_vitu2_function_pane_g1

0xa8d9,	// (0x00071b25) main_myfav_hc_pane

0x8145,	// (0x0006f391) popup_image3_note_pane_ParamLimits

0x8145,	// (0x0006f391) popup_image3_note_pane

0x815f,	// (0x0006f3ab) popup_image3_tool_bar_pane_ParamLimits

0x815f,	// (0x0006f3ab) popup_image3_tool_bar_pane

0x24e1,	// (0x0006972d) cell_vitu2_itu_pane_t3_ParamLimits

0x24e1,	// (0x0006972d) cell_vitu2_itu_pane_t3

0xa8d9,	// (0x00071b25) bg_popup_trans_pane

0xd052,	// (0x0007429e) grid_image3_tool_bar_pane

0xd05c,	// (0x000742a8) bg_popup_trans_pane_g1

0xb65f,	// (0x000728ab) bg_popup_trans_pane_g2

0xd064,	// (0x000742b0) bg_popup_trans_pane_g3

0xd06c,	// (0x000742b8) bg_popup_trans_pane_g4

0xd074,	// (0x000742c0) bg_popup_trans_pane_g5

0xd07c,	// (0x000742c8) bg_popup_trans_pane_g6

0xd084,	// (0x000742d0) bg_popup_trans_pane_g7

0xd08c,	// (0x000742d8) bg_popup_trans_pane_g8

0xb63f,	// (0x0007288b) bg_popup_trans_pane_g9

0x0008,

0xf974,	// (0x00076bc0) bg_popup_trans_pane_g

0x109a,	// (0x000682e6) cell_image3_tool_bar_pane_ParamLimits

0x109a,	// (0x000682e6) cell_image3_tool_bar_pane

0xc692,	// (0x000738de) cell_image3_tool_bar_pane_g1

0xa8d9,	// (0x00071b25) bg_popup_trans_pane_cp1

0xd094,	// (0x000742e0) popup_image3_note_pane_t1

0xd0a2,	// (0x000742ee) popup_image3_note_pane_t2

0xd0b0,	// (0x000742fc) popup_image3_note_pane_t3

0x0002,

0xf987,	// (0x00076bd3) popup_image3_note_pane_t

0xd0be,	// (0x0007430a) popup_image3_note_pane_t3_copy1

0x872f,	// (0x0006f97b) bg_myfav_hc_instruction_pane_ParamLimits

0x872f,	// (0x0006f97b) bg_myfav_hc_instruction_pane

0x8741,	// (0x0006f98d) cell_myfav_contact_pane_ParamLimits

0x8741,	// (0x0006f98d) cell_myfav_contact_pane

0x875b,	// (0x0006f9a7) cell_myfav_contact_pane_cp1_ParamLimits

0x875b,	// (0x0006f9a7) cell_myfav_contact_pane_cp1

0x8771,	// (0x0006f9bd) cell_myfav_contact_pane_cp2_ParamLimits

0x8771,	// (0x0006f9bd) cell_myfav_contact_pane_cp2

0x8787,	// (0x0006f9d3) cell_myfav_contact_pane_cp3_ParamLimits

0x8787,	// (0x0006f9d3) cell_myfav_contact_pane_cp3

0x879c,	// (0x0006f9e8) cell_myfav_contact_pane_cp4_ParamLimits

0x879c,	// (0x0006f9e8) cell_myfav_contact_pane_cp4

0x87b0,	// (0x0006f9fc) cell_myfav_contact_pane_cp5_ParamLimits

0x87b0,	// (0x0006f9fc) cell_myfav_contact_pane_cp5

0x87c4,	// (0x0006fa10) cell_myfav_contact_pane_cp6_ParamLimits

0x87c4,	// (0x0006fa10) cell_myfav_contact_pane_cp6

0x87d8,	// (0x0006fa24) cell_myfav_contact_pane_cp7_ParamLimits

0x87d8,	// (0x0006fa24) cell_myfav_contact_pane_cp7

0xd0cc,	// (0x00074318) listscroll_gen_pane_cp05

0x87f0,	// (0x0006fa3c) main_myfav_hc_pane_g1_ParamLimits

0x87f0,	// (0x0006fa3c) main_myfav_hc_pane_g1

0x8806,	// (0x0006fa52) main_myfav_hc_pane_g2_ParamLimits

0x8806,	// (0x0006fa52) main_myfav_hc_pane_g2

0x0002,

0xf98e,	// (0x00076bda) main_myfav_hc_pane_g_ParamLimits

0xf98e,	// (0x00076bda) main_myfav_hc_pane_g

0x8830,	// (0x0006fa7c) main_myfav_hc_pane_t1_ParamLimits

0x8830,	// (0x0006fa7c) main_myfav_hc_pane_t1

0xd0d5,	// (0x00074321) main_myfav_hc_pane_t2_ParamLimits

0xd0d5,	// (0x00074321) main_myfav_hc_pane_t2

0xd0e7,	// (0x00074333) main_myfav_hc_pane_t3_ParamLimits

0xd0e7,	// (0x00074333) main_myfav_hc_pane_t3

0x8845,	// (0x0006fa91) main_myfav_hc_pane_t4_ParamLimits

0x8845,	// (0x0006fa91) main_myfav_hc_pane_t4

0x0004,

0xf995,	// (0x00076be1) main_myfav_hc_pane_t_ParamLimits

0xf995,	// (0x00076be1) main_myfav_hc_pane_t

0xc692,	// (0x000738de) bg_myfav_hc_instruction_pane_g1

0xd0f9,	// (0x00074345) cell_myfav_contact_pane_g1_ParamLimits

0xd0f9,	// (0x00074345) cell_myfav_contact_pane_g1

0xd0f9,	// (0x00074345) cell_myfav_contact_pane_g2_ParamLimits

0xd0f9,	// (0x00074345) cell_myfav_contact_pane_g2

0xd105,	// (0x00074351) cell_myfav_contact_pane_g3_ParamLimits

0xd105,	// (0x00074351) cell_myfav_contact_pane_g3

0xc952,	// (0x00073b9e) cell_myfav_contact_pane_g4_ParamLimits

0xc952,	// (0x00073b9e) cell_myfav_contact_pane_g4

0xd112,	// (0x0007435e) cell_myfav_contact_pane_g5_ParamLimits

0xd112,	// (0x0007435e) cell_myfav_contact_pane_g5

0x0004,

0xf9a0,	// (0x00076bec) cell_myfav_contact_pane_g_ParamLimits

0xf9a0,	// (0x00076bec) cell_myfav_contact_pane_g

0x881c,	// (0x0006fa68) main_myfav_hc_pane_g3_ParamLimits

0x881c,	// (0x0006fa68) main_myfav_hc_pane_g3

0x2db6,	// (0x0006a002) popup_adpt_find_window

0x8869,	// (0x0006fab5) afind_page_pane_ParamLimits

0x8869,	// (0x0006fab5) afind_page_pane

0x887e,	// (0x0006faca) aid_size_cell_afind_ParamLimits

0x887e,	// (0x0006faca) aid_size_cell_afind

0x889c,	// (0x0006fae8) bg_popup_sub_pane_cp09_ParamLimits

0x889c,	// (0x0006fae8) bg_popup_sub_pane_cp09

0x88a9,	// (0x0006faf5) find_pane_cp01_ParamLimits

0x88a9,	// (0x0006faf5) find_pane_cp01

0xd11e,	// (0x0007436a) grid_afind_control_pane_ParamLimits

0xd11e,	// (0x0007436a) grid_afind_control_pane

0x88b6,	// (0x0006fb02) grid_afind_pane_ParamLimits

0x88b6,	// (0x0006fb02) grid_afind_pane

0x88d4,	// (0x0006fb20) cell_afind_pane_ParamLimits

0x88d4,	// (0x0006fb20) cell_afind_pane

0xc692,	// (0x000738de) afind_page_pane_g1

0x8921,	// (0x0006fb6d) afind_page_pane_g2

0x892a,	// (0x0006fb76) afind_page_pane_g3

0x0002,

0xf9ab,	// (0x00076bf7) afind_page_pane_g

0x8933,	// (0x0006fb7f) afind_page_pane_t1

0xd132,	// (0x0007437e) cell_afind_grid_control_pane_ParamLimits

0xd132,	// (0x0007437e) cell_afind_grid_control_pane

0xcf04,	// (0x00074150) bg_button_pane_cp69_ParamLimits

0xcf04,	// (0x00074150) bg_button_pane_cp69

0x8953,	// (0x0006fb9f) cell_afind_pane_g1_ParamLimits

0x8953,	// (0x0006fb9f) cell_afind_pane_g1

0x8960,	// (0x0006fbac) cell_afind_pane_t1_ParamLimits

0x8960,	// (0x0006fbac) cell_afind_pane_t1

0xb3a3,	// (0x000725ef) bg_button_pane_cp72

0xd141,	// (0x0007438d) cell_afind_grid_control_pane_g1

0x56e4,	// (0x0006c930) aid_image_placing_area_ParamLimits

0x56e4,	// (0x0006c930) aid_image_placing_area

0xcbde,	// (0x00073e2a) field_vitu_entry_pane_g1_ParamLimits

0xcbde,	// (0x00073e2a) field_vitu_entry_pane_g1

0xcbea,	// (0x00073e36) field_vitu_entry_pane_g2_ParamLimits

0xcbea,	// (0x00073e36) field_vitu_entry_pane_g2

0x0001,

0xf85c,	// (0x00076aa8) field_vitu_entry_pane_g_ParamLimits

0xf85c,	// (0x00076aa8) field_vitu_entry_pane_g

0x7c1f,	// (0x0006ee6b) cell_vitu_itu_pane_g1_ParamLimits

0x7c61,	// (0x0006eead) cell_vitu_itu_pane_t3_ParamLimits

0x7c61,	// (0x0006eead) cell_vitu_itu_pane_t3

0xceb8,	// (0x00074104) mp4_progress_pane_t1_ParamLimits

0xcecf,	// (0x0007411b) mp4_progress_pane_t2_ParamLimits

0xf8f1,	// (0x00076b3d) mp4_progress_pane_t_ParamLimits

0xcee6,	// (0x00074132) mup_progress_pane_cp04_ParamLimits

0x8857,	// (0x0006faa3) main_myfav_hc_pane_t5_ParamLimits

0x8857,	// (0x0006faa3) main_myfav_hc_pane_t5

0xa8fb,	// (0x00071b47) aid_zoom_text_primary

0x2db6,	// (0x0006a002) popup_adpt_find_window_ParamLimits

0x1080,	// (0x000682cc) main_cam_set_pane

0x8312,	// (0x0006f55e) cam4_zoom_pane_ParamLimits

0x8312,	// (0x0006f55e) cam4_zoom_pane

0x8972,	// (0x0006fbbe) main_cam_set_pane_g1_ParamLimits

0x8972,	// (0x0006fbbe) main_cam_set_pane_g1

0x8980,	// (0x0006fbcc) main_cam_set_pane_g2_ParamLimits

0x8980,	// (0x0006fbcc) main_cam_set_pane_g2

0x0001,

0xf9b2,	// (0x00076bfe) main_cam_set_pane_g_ParamLimits

0xf9b2,	// (0x00076bfe) main_cam_set_pane_g

0x899f,	// (0x0006fbeb) main_cam_set_pane_t1_ParamLimits

0x899f,	// (0x0006fbeb) main_cam_set_pane_t1

0x89b1,	// (0x0006fbfd) main_cset_listscroll_pane_ParamLimits

0x89b1,	// (0x0006fbfd) main_cset_listscroll_pane

0x89cf,	// (0x0006fc1b) main_cset_slider_pane_ParamLimits

0x89cf,	// (0x0006fc1b) main_cset_slider_pane

0xd152,	// (0x0007439e) main_cset_list_pane_ParamLimits

0xd152,	// (0x0007439e) main_cset_list_pane

0xd162,	// (0x000743ae) scroll_pane_cp028

0x89f3,	// (0x0006fc3f) aid_area_touch_slider

0x8a0f,	// (0x0006fc5b) cset_slider_pane

0x8a39,	// (0x0006fc85) main_cset_slider_pane_g1

0x8a4e,	// (0x0006fc9a) main_cset_slider_pane_g2

0x0011,

0xf9b7,	// (0x00076c03) main_cset_slider_pane_g

0xd19b,	// (0x000743e7) main_cset_slider_pane_t1

0x8b0a,	// (0x0006fd56) main_cset_slider_pane_t2

0x8b24,	// (0x0006fd70) main_cset_slider_pane_t3

0x8b3e,	// (0x0006fd8a) main_cset_slider_pane_t4

0x8b58,	// (0x0006fda4) main_cset_slider_pane_t5

0x8b72,	// (0x0006fdbe) main_cset_slider_pane_t6

0x8b87,	// (0x0006fdd3) main_cset_slider_pane_t7

0x000e,

0xf9dc,	// (0x00076c28) main_cset_slider_pane_t

0x8c8b,	// (0x0006fed7) cset_list_set_pane_ParamLimits

0x8c8b,	// (0x0006fed7) cset_list_set_pane

0x8c9c,	// (0x0006fee8) aid_position_infowindow_above

0x8ca4,	// (0x0006fef0) aid_position_infowindow_below

0x8cac,	// (0x0006fef8) cset_list_set_pane_g1_ParamLimits

0x8cac,	// (0x0006fef8) cset_list_set_pane_g1

0xd23b,	// (0x00074487) cset_list_set_pane_g3_ParamLimits

0xd23b,	// (0x00074487) cset_list_set_pane_g3

0x0001,

0xf9fb,	// (0x00076c47) cset_list_set_pane_g_ParamLimits

0xf9fb,	// (0x00076c47) cset_list_set_pane_g

0xd24a,	// (0x00074496) cset_list_set_pane_t1_ParamLimits

0xd24a,	// (0x00074496) cset_list_set_pane_t1

0x1080,	// (0x000682cc) list_highlight_pane_cp021_ParamLimits

0x1080,	// (0x000682cc) list_highlight_pane_cp021

0x4fce,	// (0x0006c21a) cset_slider_pane_g1

0x4fe0,	// (0x0006c22c) cset_slider_pane_g2

0x4fd7,	// (0x0006c223) cset_slider_pane_g3

0x0002,

0xfa00,	// (0x00076c4c) cset_slider_pane_g

0xeff0,	// (0x0007623c) aid_area_touch_cam4_zoom

0xeff8,	// (0x00076244) cam4_zoom_cont_pane

0xf000,	// (0x0007624c) cam4_zoom_pane_g1

0xf008,	// (0x00076254) cam4_zoom_pane_g2

0x8cb8,	// (0x0006ff04) cam4_zoom_pane_g3

0x0002,

0xfa07,	// (0x00076c53) cam4_zoom_pane_g

0xd25f,	// (0x000744ab) cam4_zoom_cont_pane_g1

0xd268,	// (0x000744b4) cam4_zoom_cont_pane_g2

0xd271,	// (0x000744bd) cam4_zoom_cont_pane_g3

0x0002,

0xfa0e,	// (0x00076c5a) cam4_zoom_cont_pane_g

0x81ca,	// (0x0006f416) call4_image_pane_ParamLimits

0x81ca,	// (0x0006f416) call4_image_pane

0xcf28,	// (0x00074174) call4_windows_conf_pane_ParamLimits

0xcf3b,	// (0x00074187) popup_call4_audio_in_window_ParamLimits

0xcf3b,	// (0x00074187) popup_call4_audio_in_window

0xa8d9,	// (0x00071b25) bg_popup_call2_act_pane_cp02

0xcf99,	// (0x000741e5) call4_list_conf_pane

0xc692,	// (0x000738de) call4_image_pane_g1

0xc692,	// (0x000738de) call4_image_pane_g2

0x0001,

0xf722,	// (0x0007696e) call4_image_pane_g

0xd27a,	// (0x000744c6) list_single_graphic_popup_conf4_pane_ParamLimits

0xd27a,	// (0x000744c6) list_single_graphic_popup_conf4_pane

0xa8d9,	// (0x00071b25) list_highlight_pane_cp022

0xd28d,	// (0x000744d9) list_single_graphic_popup_conf4_pane_g1

0x0f99,	// (0x000681e5) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa15,	// (0x00076c61) list_single_graphic_popup_conf4_pane_g

0xd295,	// (0x000744e1) list_single_graphic_popup_conf4_pane_t1

0x3b46,	// (0x0006ad92) popup_vtel_slider_window_ParamLimits

0x3b46,	// (0x0006ad92) popup_vtel_slider_window

0xcef2,	// (0x0007413e) dialer2_ne_pane_t2_ParamLimits

0xcef2,	// (0x0007413e) dialer2_ne_pane_t2

0x0001,

0xf8f6,	// (0x00076b42) dialer2_ne_pane_t_ParamLimits

0xf8f6,	// (0x00076b42) dialer2_ne_pane_t

0xc47f,	// (0x000736cb) bg_popup_sub_pane_cp010_ParamLimits

0xc47f,	// (0x000736cb) bg_popup_sub_pane_cp010

0x8cc0,	// (0x0006ff0c) popup_vtel_slider_window_g1_ParamLimits

0x8cc0,	// (0x0006ff0c) popup_vtel_slider_window_g1

0x8cd3,	// (0x0006ff1f) popup_vtel_slider_window_g2_ParamLimits

0x8cd3,	// (0x0006ff1f) popup_vtel_slider_window_g2

0x0003,

0xfa1a,	// (0x00076c66) popup_vtel_slider_window_g_ParamLimits

0xfa1a,	// (0x00076c66) popup_vtel_slider_window_g

0x8d27,	// (0x0006ff73) vtel_slider_pane_ParamLimits

0x8d27,	// (0x0006ff73) vtel_slider_pane

0x8d49,	// (0x0006ff95) vtel_slider_pane_g1_ParamLimits

0x8d49,	// (0x0006ff95) vtel_slider_pane_g1

0x8d5d,	// (0x0006ffa9) vtel_slider_pane_g2_ParamLimits

0x8d5d,	// (0x0006ffa9) vtel_slider_pane_g2

0x8d75,	// (0x0006ffc1) vtel_slider_pane_g3_ParamLimits

0x8d75,	// (0x0006ffc1) vtel_slider_pane_g3

0x8d49,	// (0x0006ff95) vtel_slider_pane_g4_ParamLimits

0x8d49,	// (0x0006ff95) vtel_slider_pane_g4

0x8d8b,	// (0x0006ffd7) vtel_slider_pane_g5_ParamLimits

0x8d8b,	// (0x0006ffd7) vtel_slider_pane_g5

0x0004,

0xfa23,	// (0x00076c6f) vtel_slider_pane_g_ParamLimits

0xfa23,	// (0x00076c6f) vtel_slider_pane_g

0xa8d9,	// (0x00071b25) main_gallery2_pane

0x853a,	// (0x0006f786) aid_size_row_itut2_dropdow_list_ParamLimits

0x853a,	// (0x0006f786) aid_size_row_itut2_dropdow_list

0x85a4,	// (0x0006f7f0) grid_vitu2_function_top_pane_ParamLimits

0x85a4,	// (0x0006f7f0) grid_vitu2_function_top_pane

0x85e7,	// (0x0006f833) popup_vitu2_dropdown_list_window_ParamLimits

0x85e7,	// (0x0006f833) popup_vitu2_dropdown_list_window

0x8606,	// (0x0006f852) popup_vitu2_match_list_window

0x8da1,	// (0x0006ffed) cell_vitu2_function_top_pane_ParamLimits

0x8da1,	// (0x0006ffed) cell_vitu2_function_top_pane

0x8dc1,	// (0x0007000d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8dc1,	// (0x0007000d) cell_vitu2_function_top_pane_cp01

0x8de1,	// (0x0007002d) cell_vitu2_function_top_wide_pane_ParamLimits

0x8de1,	// (0x0007002d) cell_vitu2_function_top_wide_pane

0x1080,	// (0x000682cc) bg_button_pane_cp012

0x8dff,	// (0x0007004b) cell_vitu2_function_top_pane_g1

0xf010,	// (0x0007625c) bg_button_pane_cp013_ParamLimits

0xf010,	// (0x0007625c) bg_button_pane_cp013

0x8e13,	// (0x0007005f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8e13,	// (0x0007005f) cell_vitu2_function_top_wide_pane_g1

0x1080,	// (0x000682cc) bg_popup_sub_pane_cp20

0x8e2b,	// (0x00070077) list_vitu2_match_list_pane

0xd05c,	// (0x000742a8) bg_popup_sub_pane_cp20_g1

0xd064,	// (0x000742b0) bg_popup_sub_pane_cp20_g2

0xb65f,	// (0x000728ab) bg_popup_sub_pane_cp20_g3

0xd06c,	// (0x000742b8) bg_popup_sub_pane_cp20_g4

0xb63f,	// (0x0007288b) bg_popup_sub_pane_cp20_g5

0xd2b1,	// (0x000744fd) bg_popup_sub_pane_cp20_g6

0xd07c,	// (0x000742c8) bg_popup_sub_pane_cp20_g7

0xd084,	// (0x000742d0) bg_popup_sub_pane_cp20_g8

0xd08c,	// (0x000742d8) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa2e,	// (0x00076c7a) bg_popup_sub_pane_cp20_g

0xf02c,	// (0x00076278) list_vitu2_match_list_item_pane_ParamLimits

0xf02c,	// (0x00076278) list_vitu2_match_list_item_pane

0xf03e,	// (0x0007628a) list_vitu2_match_list_item_pane_t1

0xa8d9,	// (0x00071b25) bg_popup_sub_pane_cp21

0x0ed7,	// (0x00068123) grid_vitu2_dropdown_list_pane

0x8e49,	// (0x00070095) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8e49,	// (0x00070095) cell_vitu2_dropdown_list_char_pane

0x8e6a,	// (0x000700b6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8e6a,	// (0x000700b6) cell_vitu2_dropdown_list_ctrl_pane

0xd2b9,	// (0x00074505) cell_vitu2_dropdown_list_char_pane_g1

0xd2c2,	// (0x0007450e) cell_vitu2_dropdown_list_char_pane_g2

0xd2cb,	// (0x00074517) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa4b,	// (0x00076c97) cell_vitu2_dropdown_list_char_pane_g

0x8e96,	// (0x000700e2) cell_vitu2_dropdown_list_char_pane_t1

0x8ea4,	// (0x000700f0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8ea4,	// (0x000700f0) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8eb1,	// (0x000700fd) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8eb1,	// (0x000700fd) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8ebe,	// (0x0007010a) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8ebe,	// (0x0007010a) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8ecb,	// (0x00070117) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8ecb,	// (0x00070117) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc8c1,	// (0x00073b0d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc8c1,	// (0x00073b0d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa52,	// (0x00076c9e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa52,	// (0x00076c9e) cell_vitu2_dropdown_list_ctrl_pane_g

0x8ee7,	// (0x00070133) aid_size_cell_gallery2_ParamLimits

0x8ee7,	// (0x00070133) aid_size_cell_gallery2

0x8efd,	// (0x00070149) grid_gallery2_pane_ParamLimits

0x8efd,	// (0x00070149) grid_gallery2_pane

0x8f0f,	// (0x0007015b) scroll_pane_cp029_ParamLimits

0x8f0f,	// (0x0007015b) scroll_pane_cp029

0x8f1b,	// (0x00070167) cell_gallery2_pane_ParamLimits

0x8f1b,	// (0x00070167) cell_gallery2_pane

0xd2d4,	// (0x00074520) cell_gallery2_pane_g2

0x8f4d,	// (0x00070199) cell_gallery2_pane_g3

0xd2de,	// (0x0007452a) cell_gallery2_pane_g4

0xd2e6,	// (0x00074532) cell_gallery2_pane_g5

0x4af2,	// (0x0006bd3e) grid_highlight_pane_cp10

0x8606,	// (0x0006f852) popup_vitu2_match_list_window_ParamLimits

0x8617,	// (0x0006f863) popup_vitu2_query_window_ParamLimits

0x8617,	// (0x0006f863) popup_vitu2_query_window

0xa8d9,	// (0x00071b25) bg_vitu2_candi_button_pane

0xd2b9,	// (0x00074505) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd2c2,	// (0x0007450e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd2cb,	// (0x00074517) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x2565,	// (0x000697b1) bg_button_pane_cp015

0x8f55,	// (0x000701a1) bg_button_pane_cp016

0x8f5e,	// (0x000701aa) bg_button_pane_cp017

0x1080,	// (0x000682cc) bg_popup_sub_pane_cp22

0xd2ee,	// (0x0007453a) popup_vitu2_query_window_g1

0x257a,	// (0x000697c6) popup_vitu2_query_window_g2

0x0001,

0xfa5d,	// (0x00076ca9) popup_vitu2_query_window_g

0x2586,	// (0x000697d2) popup_vitu2_query_window_t1_ParamLimits

0x2586,	// (0x000697d2) popup_vitu2_query_window_t1

0x25ae,	// (0x000697fa) popup_vitu2_query_window_t2_ParamLimits

0x25ae,	// (0x000697fa) popup_vitu2_query_window_t2

0x25c0,	// (0x0006980c) popup_vitu2_query_window_t3_ParamLimits

0x25c0,	// (0x0006980c) popup_vitu2_query_window_t3

0x8f77,	// (0x000701c3) popup_vitu2_query_window_t4_ParamLimits

0x8f77,	// (0x000701c3) popup_vitu2_query_window_t4

0x8f89,	// (0x000701d5) popup_vitu2_query_window_t5_ParamLimits

0x8f89,	// (0x000701d5) popup_vitu2_query_window_t5

0x0004,

0xfa62,	// (0x00076cae) popup_vitu2_query_window_t_ParamLimits

0xfa62,	// (0x00076cae) popup_vitu2_query_window_t

0xd14a,	// (0x00074396) main_cset_text_pane

0x89f3,	// (0x0006fc3f) aid_area_touch_slider_ParamLimits

0x8a0f,	// (0x0006fc5b) cset_slider_pane_ParamLimits

0x8a39,	// (0x0006fc85) main_cset_slider_pane_g1_ParamLimits

0x8a4e,	// (0x0006fc9a) main_cset_slider_pane_g2_ParamLimits

0xd16b,	// (0x000743b7) main_cset_slider_pane_g3_ParamLimits

0xd16b,	// (0x000743b7) main_cset_slider_pane_g3

0x8a63,	// (0x0006fcaf) main_cset_slider_pane_g4_ParamLimits

0x8a63,	// (0x0006fcaf) main_cset_slider_pane_g4

0x8a72,	// (0x0006fcbe) main_cset_slider_pane_g5_ParamLimits

0x8a72,	// (0x0006fcbe) main_cset_slider_pane_g5

0x8a7e,	// (0x0006fcca) main_cset_slider_pane_g6_ParamLimits

0x8a7e,	// (0x0006fcca) main_cset_slider_pane_g6

0xf9b7,	// (0x00076c03) main_cset_slider_pane_g_ParamLimits

0xd19b,	// (0x000743e7) main_cset_slider_pane_t1_ParamLimits

0x8b0a,	// (0x0006fd56) main_cset_slider_pane_t2_ParamLimits

0x8b24,	// (0x0006fd70) main_cset_slider_pane_t3_ParamLimits

0x8b3e,	// (0x0006fd8a) main_cset_slider_pane_t4_ParamLimits

0x8b58,	// (0x0006fda4) main_cset_slider_pane_t5_ParamLimits

0x8b72,	// (0x0006fdbe) main_cset_slider_pane_t6_ParamLimits

0x8b87,	// (0x0006fdd3) main_cset_slider_pane_t7_ParamLimits

0x8bb1,	// (0x0006fdfd) main_cset_slider_pane_t8_ParamLimits

0x8bb1,	// (0x0006fdfd) main_cset_slider_pane_t8

0x8bd9,	// (0x0006fe25) main_cset_slider_pane_t9_ParamLimits

0x8bd9,	// (0x0006fe25) main_cset_slider_pane_t9

0x8c01,	// (0x0006fe4d) main_cset_slider_pane_t10_ParamLimits

0x8c01,	// (0x0006fe4d) main_cset_slider_pane_t10

0x8c29,	// (0x0006fe75) main_cset_slider_pane_t11_ParamLimits

0x8c29,	// (0x0006fe75) main_cset_slider_pane_t11

0x8c51,	// (0x0006fe9d) main_cset_slider_pane_t12_ParamLimits

0x8c51,	// (0x0006fe9d) main_cset_slider_pane_t12

0x8c6e,	// (0x0006feba) main_cset_slider_pane_t13_ParamLimits

0x8c6e,	// (0x0006feba) main_cset_slider_pane_t13

0xf9dc,	// (0x00076c28) main_cset_slider_pane_t_ParamLimits

0xa8d9,	// (0x00071b25) bg_popup_sub_pane_cp011

0xd2fa,	// (0x00074546) main_cset_text_pane_g1

0xd302,	// (0x0007454e) main_cset_text_pane_t1

0xd310,	// (0x0007455c) main_cset_text_pane_t2

0xd31e,	// (0x0007456a) main_cset_text_pane_t3

0xd32c,	// (0x00074578) main_cset_text_pane_t4

0xd33a,	// (0x00074586) main_cset_text_pane_t5

0xd348,	// (0x00074594) main_cset_text_pane_t6

0xd356,	// (0x000745a2) main_cset_text_pane_t7

0x0006,

0xfa6d,	// (0x00076cb9) main_cset_text_pane_t

0xa8d9,	// (0x00071b25) main_cam4_burst_pane

0xa8d9,	// (0x00071b25) main_cam5_pane

0x8941,	// (0x0006fb8d) bg_button_pane_cp019

0x894a,	// (0x0006fb96) bg_button_pane_cp020

0xd177,	// (0x000743c3) main_cset_slider_pane_g7_ParamLimits

0xd177,	// (0x000743c3) main_cset_slider_pane_g7

0xd183,	// (0x000743cf) main_cset_slider_pane_g8_ParamLimits

0xd183,	// (0x000743cf) main_cset_slider_pane_g8

0x8a92,	// (0x0006fcde) main_cset_slider_pane_g9_ParamLimits

0x8a92,	// (0x0006fcde) main_cset_slider_pane_g9

0x8a9e,	// (0x0006fcea) main_cset_slider_pane_g10_ParamLimits

0x8a9e,	// (0x0006fcea) main_cset_slider_pane_g10

0x8aaa,	// (0x0006fcf6) main_cset_slider_pane_g11_ParamLimits

0x8aaa,	// (0x0006fcf6) main_cset_slider_pane_g11

0x8ab6,	// (0x0006fd02) main_cset_slider_pane_g12_ParamLimits

0x8ab6,	// (0x0006fd02) main_cset_slider_pane_g12

0x8ac2,	// (0x0006fd0e) main_cset_slider_pane_g13_ParamLimits

0x8ac2,	// (0x0006fd0e) main_cset_slider_pane_g13

0x8ace,	// (0x0006fd1a) main_cset_slider_pane_g14_ParamLimits

0x8ace,	// (0x0006fd1a) main_cset_slider_pane_g14

0x8ada,	// (0x0006fd26) main_cset_slider_pane_g15_ParamLimits

0x8ada,	// (0x0006fd26) main_cset_slider_pane_g15

0xd1c9,	// (0x00074415) main_cset_slider_pane_t14_ParamLimits

0xd1c9,	// (0x00074415) main_cset_slider_pane_t14

0xd202,	// (0x0007444e) main_cset_slider_pane_t15_ParamLimits

0xd202,	// (0x0007444e) main_cset_slider_pane_t15

0x8f9b,	// (0x000701e7) aid_cam4_burst_size_cell_ParamLimits

0x8f9b,	// (0x000701e7) aid_cam4_burst_size_cell

0x8fbb,	// (0x00070207) grid_cam4_burst_pane_ParamLimits

0x8fbb,	// (0x00070207) grid_cam4_burst_pane

0x8fe1,	// (0x0007022d) linegrid_cam4_burst_pane_ParamLimits

0x8fe1,	// (0x0007022d) linegrid_cam4_burst_pane

0x9003,	// (0x0007024f) scroll_pane_cp30_ParamLimits

0x9003,	// (0x0007024f) scroll_pane_cp30

0x900f,	// (0x0007025b) cell_cam4_burst_pane_ParamLimits

0x900f,	// (0x0007025b) cell_cam4_burst_pane

0xd364,	// (0x000745b0) linegrid_cam4_burst_pane_g1_ParamLimits

0xd364,	// (0x000745b0) linegrid_cam4_burst_pane_g1

0x9056,	// (0x000702a2) linegrid_cam4_burst_pane_g2_ParamLimits

0x9056,	// (0x000702a2) linegrid_cam4_burst_pane_g2

0xd371,	// (0x000745bd) linegrid_cam4_burst_pane_g3_ParamLimits

0xd371,	// (0x000745bd) linegrid_cam4_burst_pane_g3

0x0002,

0xfa7c,	// (0x00076cc8) linegrid_cam4_burst_pane_g_ParamLimits

0xfa7c,	// (0x00076cc8) linegrid_cam4_burst_pane_g

0x9067,	// (0x000702b3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9067,	// (0x000702b3) linegrid_cam4_burst_pane_g3_copy1

0xd37e,	// (0x000745ca) linegrid_cam4_burst_pane_g4_ParamLimits

0xd37e,	// (0x000745ca) linegrid_cam4_burst_pane_g4

0x9081,	// (0x000702cd) linegrid_cam4_burst_pane_g5_ParamLimits

0x9081,	// (0x000702cd) linegrid_cam4_burst_pane_g5

0x9092,	// (0x000702de) linegrid_cam4_burst_pane_g6_ParamLimits

0x9092,	// (0x000702de) linegrid_cam4_burst_pane_g6

0xd38b,	// (0x000745d7) linegrid_cam4_burst_pane_g7_ParamLimits

0xd38b,	// (0x000745d7) linegrid_cam4_burst_pane_g7

0x90a3,	// (0x000702ef) cell_cam4_burst_pane_g1

0xd3a4,	// (0x000745f0) main_cam5_pane_t1_ParamLimits

0xd3a4,	// (0x000745f0) main_cam5_pane_t1

0xd3b6,	// (0x00074602) main_cam5_pane_t2_ParamLimits

0xd3b6,	// (0x00074602) main_cam5_pane_t2

0xd3c8,	// (0x00074614) main_cam5_pane_t3_ParamLimits

0xd3c8,	// (0x00074614) main_cam5_pane_t3

0xd3da,	// (0x00074626) main_cam5_pane_t4_ParamLimits

0xd3da,	// (0x00074626) main_cam5_pane_t4

0xd3f0,	// (0x0007463c) main_cam5_pane_t5_ParamLimits

0xd3f0,	// (0x0007463c) main_cam5_pane_t5

0xd402,	// (0x0007464e) main_cam5_pane_t6_ParamLimits

0xd402,	// (0x0007464e) main_cam5_pane_t6

0xd414,	// (0x00074660) main_cam5_pane_t7_ParamLimits

0xd414,	// (0x00074660) main_cam5_pane_t7

0xd426,	// (0x00074672) main_cam5_pane_t8_ParamLimits

0xd426,	// (0x00074672) main_cam5_pane_t8

0xd442,	// (0x0007468e) main_cam5_pane_t9_ParamLimits

0xd442,	// (0x0007468e) main_cam5_pane_t9

0xd454,	// (0x000746a0) main_cam5_pane_t10_ParamLimits

0xd454,	// (0x000746a0) main_cam5_pane_t10

0xd466,	// (0x000746b2) main_cam5_pane_t11_ParamLimits

0xd466,	// (0x000746b2) main_cam5_pane_t11

0xd478,	// (0x000746c4) main_cam5_pane_t12_ParamLimits

0xd478,	// (0x000746c4) main_cam5_pane_t12

0xd48d,	// (0x000746d9) main_cam5_pane_t13_ParamLimits

0xd48d,	// (0x000746d9) main_cam5_pane_t13

0x000c,

0xfa88,	// (0x00076cd4) main_cam5_pane_t_ParamLimits

0xfa88,	// (0x00076cd4) main_cam5_pane_t

0x2e14,	// (0x0006a060) popup_scut_keymap_window_ParamLimits

0x2e14,	// (0x0006a060) popup_scut_keymap_window

0x90b8,	// (0x00070304) aid_size_cell_brow_shortcut

0x4af2,	// (0x0006bd3e) bg_popup_window_pane_cp010

0x90c4,	// (0x00070310) grid_scut_pane

0x90ce,	// (0x0007031a) cell_scut_pane_ParamLimits

0x90ce,	// (0x0007031a) cell_scut_pane

0x90e3,	// (0x0007032f) cell_scut_pane_g1

0xd4aa,	// (0x000746f6) cell_scut_pane_t1

0xd4b9,	// (0x00074705) cell_scut_pane_t2

0x90ec,	// (0x00070338) cell_scut_pane_t3

0x0002,

0xfaa3,	// (0x00076cef) cell_scut_pane_t

0x71ae,	// (0x0006e3fa) main_mup3_pane_g8_ParamLimits

0x71ae,	// (0x0006e3fa) main_mup3_pane_g8

0x854e,	// (0x0006f79a) area_vitu2_query_pane_ParamLimits

0x854e,	// (0x0006f79a) area_vitu2_query_pane

0x256d,	// (0x000697b9) input_focus_pane_cp08

0xd4c8,	// (0x00074714) area_vitu2_query_pane_g1

0x25e8,	// (0x00069834) area_vitu2_query_pane_g2

0x0001,

0xfaaa,	// (0x00076cf6) area_vitu2_query_pane_g

0x90fa,	// (0x00070346) area_vitu2_query_pane_t1_ParamLimits

0x90fa,	// (0x00070346) area_vitu2_query_pane_t1

0x910c,	// (0x00070358) area_vitu2_query_pane_t2_ParamLimits

0x910c,	// (0x00070358) area_vitu2_query_pane_t2

0x25f7,	// (0x00069843) area_vitu2_query_pane_t3_ParamLimits

0x25f7,	// (0x00069843) area_vitu2_query_pane_t3

0xd4d4,	// (0x00074720) area_vitu2_query_pane_t4_ParamLimits

0xd4d4,	// (0x00074720) area_vitu2_query_pane_t4

0xd4fc,	// (0x00074748) area_vitu2_query_pane_t5_ParamLimits

0xd4fc,	// (0x00074748) area_vitu2_query_pane_t5

0xd524,	// (0x00074770) area_vitu2_query_pane_t6_ParamLimits

0xd524,	// (0x00074770) area_vitu2_query_pane_t6

0x0006,

0xfaaf,	// (0x00076cfb) area_vitu2_query_pane_t_ParamLimits

0xfaaf,	// (0x00076cfb) area_vitu2_query_pane_t

0x911e,	// (0x0007036a) bg_button_pane_cp018

0x912b,	// (0x00070377) bg_button_pane_cp021

0x261f,	// (0x0006986b) bg_button_pane_cp022

0x262e,	// (0x0006987a) input_focus_pane_cp09

0x494f,	// (0x0006bb9b) aid_size_touch_mv_arrow_left

0x4968,	// (0x0006bbb4) aid_size_touch_mv_arrow_right

0x8af2,	// (0x0006fd3e) main_cset_slider_pane_g16_ParamLimits

0x8af2,	// (0x0006fd3e) main_cset_slider_pane_g16

0x8afe,	// (0x0006fd4a) main_cset_slider_pane_g17_ParamLimits

0x8afe,	// (0x0006fd4a) main_cset_slider_pane_g17

0x90a3,	// (0x000702ef) cell_cam4_burst_pane_g1_ParamLimits

0xa8d9,	// (0x00071b25) compa_mode_pane

0x8ce3,	// (0x0006ff2f) popup_vtel_slider_window_g3_ParamLimits

0x8ce3,	// (0x0006ff2f) popup_vtel_slider_window_g3

0x8cfa,	// (0x0006ff46) popup_vtel_slider_window_g4_ParamLimits

0x8cfa,	// (0x0006ff46) popup_vtel_slider_window_g4

0x8d11,	// (0x0006ff5d) popup_vtel_slider_window_t1_ParamLimits

0x8d11,	// (0x0006ff5d) popup_vtel_slider_window_t1

0xa8d9,	// (0x00071b25) main_cl_pane

0xc27d,	// (0x000734c9) popup_imed_adjust2_window_ParamLimits

0xc257,	// (0x000734a3) bg_tb_trans_pane_cp05_ParamLimits

0xcb13,	// (0x00073d5f) popup_imed_adjust2_window_g1_ParamLimits

0xcb22,	// (0x00073d6e) popup_imed_adjust2_window_g2_ParamLimits

0xcb22,	// (0x00073d6e) popup_imed_adjust2_window_g2

0xcb2e,	// (0x00073d7a) popup_imed_adjust2_window_g3_ParamLimits

0xcb2e,	// (0x00073d7a) popup_imed_adjust2_window_g3

0x0002,

0xf820,	// (0x00076a6c) popup_imed_adjust2_window_g_ParamLimits

0xf820,	// (0x00076a6c) popup_imed_adjust2_window_g

0xcb3a,	// (0x00073d86) popup_imed_adjust2_window_t1_ParamLimits

0xcb52,	// (0x00073d9e) slider_imed_adjust_pane_ParamLimits

0xcb66,	// (0x00073db2) slider_imed_adjust_pane_g1_ParamLimits

0xcb76,	// (0x00073dc2) slider_imed_adjust_pane_g2_ParamLimits

0xcb86,	// (0x00073dd2) slider_imed_adjust_pane_g3_ParamLimits

0xcb97,	// (0x00073de3) slider_imed_adjust_pane_g4_ParamLimits

0xf827,	// (0x00076a73) slider_imed_adjust_pane_g_ParamLimits

0x82c1,	// (0x0006f50d) aid_touch_area_cam4_ParamLimits

0x82c1,	// (0x0006f50d) aid_touch_area_cam4

0xef86,	// (0x000761d2) battery_pane_cp01

0x8359,	// (0x0006f5a5) main_camera4_pane_g6_ParamLimits

0x8359,	// (0x0006f5a5) main_camera4_pane_g6

0x837a,	// (0x0006f5c6) main_camera4_pane_t2_ParamLimits

0x837a,	// (0x0006f5c6) main_camera4_pane_t2

0x0001,

0xf92a,	// (0x00076b76) main_camera4_pane_t_ParamLimits

0xf92a,	// (0x00076b76) main_camera4_pane_t

0x83ba,	// (0x0006f606) aid_touch_area_vid4_ParamLimits

0x83ba,	// (0x0006f606) aid_touch_area_vid4

0x83fc,	// (0x0006f648) main_video4_pane_g5_ParamLimits

0x83fc,	// (0x0006f648) main_video4_pane_g5

0x841d,	// (0x0006f669) vid4_progress_pane_ParamLimits

0x841d,	// (0x0006f669) vid4_progress_pane

0xd18f,	// (0x000743db) main_cset_slider_pane_g18_ParamLimits

0xd18f,	// (0x000743db) main_cset_slider_pane_g18

0xd398,	// (0x000745e4) cell_cam4_burst_pane_g2_ParamLimits

0xd398,	// (0x000745e4) cell_cam4_burst_pane_g2

0x0001,

0xfa83,	// (0x00076ccf) cell_cam4_burst_pane_g_ParamLimits

0xfa83,	// (0x00076ccf) cell_cam4_burst_pane_g

0xb091,	// (0x000722dd) bg_cl_pane_ParamLimits

0xb091,	// (0x000722dd) bg_cl_pane

0x9137,	// (0x00070383) cl_header_pane_ParamLimits

0x9137,	// (0x00070383) cl_header_pane

0x914b,	// (0x00070397) cl_listscroll_pane_ParamLimits

0x914b,	// (0x00070397) cl_listscroll_pane

0xd570,	// (0x000747bc) bg_cl_pane_g1

0xd578,	// (0x000747c4) bg_cl_pane_g2

0xd580,	// (0x000747cc) bg_cl_pane_g3

0xd588,	// (0x000747d4) bg_cl_pane_g4

0xd590,	// (0x000747dc) bg_cl_pane_g5

0xd598,	// (0x000747e4) bg_cl_pane_g6

0xd5a0,	// (0x000747ec) bg_cl_pane_g7

0xd5a8,	// (0x000747f4) bg_cl_pane_g8

0xd5b0,	// (0x000747fc) bg_cl_pane_g9

0x0008,

0xfabe,	// (0x00076d0a) bg_cl_pane_g

0x915b,	// (0x000703a7) aid_height_cl_leading_ParamLimits

0x915b,	// (0x000703a7) aid_height_cl_leading

0x9167,	// (0x000703b3) aid_height_cl_text_ParamLimits

0x9167,	// (0x000703b3) aid_height_cl_text

0x1080,	// (0x000682cc) bg_cl_header_pane_ParamLimits

0x1080,	// (0x000682cc) bg_cl_header_pane

0x9186,	// (0x000703d2) cl_header_pane_g1_ParamLimits

0x9186,	// (0x000703d2) cl_header_pane_g1

0x919c,	// (0x000703e8) cl_header_pane_t1_ParamLimits

0x919c,	// (0x000703e8) cl_header_pane_t1

0xd5b8,	// (0x00074804) cl_list_pane

0xd5c1,	// (0x0007480d) hc_scroll_pane_cp01

0xb63f,	// (0x0007288b) bg_cl_header_pane_g1

0xd05c,	// (0x000742a8) bg_cl_header_pane_g2

0xb65f,	// (0x000728ab) bg_cl_header_pane_g3

0xd06c,	// (0x000742b8) bg_cl_header_pane_g4

0xd064,	// (0x000742b0) bg_cl_header_pane_g5

0xd2b1,	// (0x000744fd) bg_cl_header_pane_g6

0xd084,	// (0x000742d0) bg_cl_header_pane_g7

0xd08c,	// (0x000742d8) bg_cl_header_pane_g8

0xd07c,	// (0x000742c8) bg_cl_header_pane_g9

0x0008,

0xfad1,	// (0x00076d1d) bg_cl_header_pane_g

0x91b5,	// (0x00070401) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x91b5,	// (0x00070401) hc_cl_list_double_graphic_heading_pane

0x91c5,	// (0x00070411) hc_cl_list_single_graphic_pane_ParamLimits

0x91c5,	// (0x00070411) hc_cl_list_single_graphic_pane

0x91d8,	// (0x00070424) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x91d8,	// (0x00070424) hc_cl_list_single_graphic_pane_g1

0x91e4,	// (0x00070430) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x91e4,	// (0x00070430) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfae4,	// (0x00076d30) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfae4,	// (0x00076d30) hc_cl_list_single_graphic_pane_g

0x91f8,	// (0x00070444) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x91f8,	// (0x00070444) hc_cl_list_single_graphic_pane_t1

0x91d8,	// (0x00070424) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x91d8,	// (0x00070424) hc_cl_list_double_graphic_heading_pane_g1

0x920d,	// (0x00070459) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x920d,	// (0x00070459) hc_cl_list_double_graphic_heading_pane_g2

0x9221,	// (0x0007046d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9221,	// (0x0007046d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae9,	// (0x00076d35) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae9,	// (0x00076d35) hc_cl_list_double_graphic_heading_pane_g

0x9235,	// (0x00070481) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9235,	// (0x00070481) hc_cl_list_double_graphic_heading_pane_t1

0x924a,	// (0x00070496) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x924a,	// (0x00070496) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaf0,	// (0x00076d3c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaf0,	// (0x00076d3c) hc_cl_list_double_graphic_heading_pane_t

0xf04c,	// (0x00076298) vid4_progress_pane_g1

0xf05b,	// (0x000762a7) vid4_progress_pane_g2

0xf06a,	// (0x000762b6) vid4_progress_pane_g3

0xf079,	// (0x000762c5) vid4_progress_pane_g4

0x0004,

0xfaf5,	// (0x00076d41) vid4_progress_pane_g

0xf085,	// (0x000762d1) vid4_progress_pane_t1

0xf09b,	// (0x000762e7) vid4_progress_pane_t2

0x0002,

0xfb00,	// (0x00076d4c) vid4_progress_pane_t

0xf0c5,	// (0x00076311) wait_bar_pane_cp07

0xc48d,	// (0x000736d9) blid_firmament_pane_ParamLimits

0xc4ce,	// (0x0007371a) popup_blid_sat_info2_window_g1

0xc4f2,	// (0x0007373e) popup_blid_sat_info2_window_t3

0xc500,	// (0x0007374c) popup_blid_sat_info2_window_t4

0xc50e,	// (0x0007375a) popup_blid_sat_info2_window_t5

0xc51c,	// (0x00073768) popup_blid_sat_info2_window_t6

0xc52c,	// (0x00073778) popup_blid_sat_info2_window_t7

0xc53a,	// (0x00073786) popup_blid_sat_info2_window_t8

0xc548,	// (0x00073794) popup_blid_sat_info2_window_t9

0xc556,	// (0x000737a2) popup_blid_sat_info2_window_t10

0xc612,	// (0x0007385e) aid_firma_cardinal_ParamLimits

0xc626,	// (0x00073872) blid_firmament_pane_t1_ParamLimits

0xc63d,	// (0x00073889) blid_firmament_pane_t2_ParamLimits

0xc654,	// (0x000738a0) blid_firmament_pane_t3_ParamLimits

0xc66b,	// (0x000738b7) blid_firmament_pane_t4_ParamLimits

0xf719,	// (0x00076965) blid_firmament_pane_t_ParamLimits

0xc682,	// (0x000738ce) blid_sat_info_pane_ParamLimits

0x1080,	// (0x000682cc) main_cam_set_pane_ParamLimits

0x7a05,	// (0x0006ec51) aid_size_cell_colour_35_ParamLimits

0x7a25,	// (0x0006ec71) aid_size_cell_colour_112_ParamLimits

0x7a45,	// (0x0006ec91) aid_size_cell_effect_ParamLimits

0xc257,	// (0x000734a3) bg_tb_trans_pane_cp02_ParamLimits

0xb8e4,	// (0x00072b30) heading_imed_pane_ParamLimits

0x7a65,	// (0x0006ecb1) listscroll_imed_pane_ParamLimits

0x5e65,	// (0x0006d0b1) popup_call2_audio_first_window_g5_ParamLimits

0x5e65,	// (0x0006d0b1) popup_call2_audio_first_window_g5

0x7f82,	// (0x0006f1ce) aid_size_touch_image3_arrow_left_ParamLimits

0x7f82,	// (0x0006f1ce) aid_size_touch_image3_arrow_left

0x7fa2,	// (0x0006f1ee) aid_size_touch_image3_arrow_right_ParamLimits

0x7fa2,	// (0x0006f1ee) aid_size_touch_image3_arrow_right

0xf0b0,	// (0x000762fc) vid4_progress_pane_t3

0x7d39,	// (0x0006ef85) main_hwr_training_symbol_option_pane_ParamLimits

0x7d39,	// (0x0006ef85) main_hwr_training_symbol_option_pane

0xcdf2,	// (0x0007403e) popup_hwr_training_preview_window_ParamLimits

0xcdf2,	// (0x0007403e) popup_hwr_training_preview_window

0x7d55,	// (0x0006efa1) hwr_training_navi_pane_g5_ParamLimits

0x7d55,	// (0x0006efa1) hwr_training_navi_pane_g5

0xd04a,	// (0x00074296) popup_char_count_window

0x1080,	// (0x000682cc) bg_popup_sub_pane_cp20_ParamLimits

0x8e2b,	// (0x00070077) list_vitu2_match_list_pane_ParamLimits

0x8e3a,	// (0x00070086) vitu2_page_scroll_pane_ParamLimits

0x8e3a,	// (0x00070086) vitu2_page_scroll_pane

0xd613,	// (0x0007485f) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd613,	// (0x0007485f) list_single_hwr_training_symbol_option_pane

0xd626,	// (0x00074872) list_single_hwr_training_symbol_option_pane_g1

0xd62e,	// (0x0007487a) list_single_hwr_training_symbol_option_pane_t1

0xd63c,	// (0x00074888) bg_button_pane_cp023

0xd645,	// (0x00074891) bg_button_pane_cp024

0x925f,	// (0x000704ab) vitu2_page_scroll_pane_g1

0x9267,	// (0x000704b3) vitu2_page_scroll_pane_g2

0x0001,

0xfb07,	// (0x00076d53) vitu2_page_scroll_pane_g

0x926f,	// (0x000704bb) vitu2_page_scroll_pane_t1

0xc3ed,	// (0x00073639) popup_char_count_window_g1

0xd678,	// (0x000748c4) popup_char_count_window_g2

0xd681,	// (0x000748cd) popup_char_count_window_g3

0x0002,

0xfb0c,	// (0x00076d58) popup_char_count_window_g

0xd68a,	// (0x000748d6) popup_char_count_window_t1

0xa8d9,	// (0x00071b25) main_vded2_pane

0xcb01,	// (0x00073d4d) aid_size_cell_imed_line

0xcb0b,	// (0x00073d57) grid_imed_line_width_pane

0x849e,	// (0x0006f6ea) vid4_indicators_pane_g4

0xd698,	// (0x000748e4) cell_imed_line_width_pane_ParamLimits

0xd698,	// (0x000748e4) cell_imed_line_width_pane

0xd6aa,	// (0x000748f6) cell_imed_line_width_pane_g1

0xd6b3,	// (0x000748ff) cell_imed_line_width_pane_g2

0x0001,

0xfb13,	// (0x00076d5f) cell_imed_line_width_pane_g

0x927e,	// (0x000704ca) main_vded2_pane_g1_ParamLimits

0x927e,	// (0x000704ca) main_vded2_pane_g1

0x9294,	// (0x000704e0) main_vded2_pane_g2_ParamLimits

0x9294,	// (0x000704e0) main_vded2_pane_g2

0x0001,

0xfb18,	// (0x00076d64) main_vded2_pane_g_ParamLimits

0xfb18,	// (0x00076d64) main_vded2_pane_g

0x92a4,	// (0x000704f0) vded2_slider_pane_ParamLimits

0x92a4,	// (0x000704f0) vded2_slider_pane

0x92b7,	// (0x00070503) aid_size_touch_vded2_end

0x92bf,	// (0x0007050b) aid_size_touch_vded2_playhead

0x92c7,	// (0x00070513) aid_size_touch_vded2_start

0x92cf,	// (0x0007051b) vded2_slider_bg_pane

0x92d8,	// (0x00070524) vded2_slider_pane_g1

0x92e1,	// (0x0007052d) vded2_slider_pane_g2

0x92e9,	// (0x00070535) vded2_slider_pane_g3

0x0002,

0xfb1d,	// (0x00076d69) vded2_slider_pane_g

0x92f2,	// (0x0007053e) vded2_slider_bg_pane_g1

0x92fb,	// (0x00070547) vded2_slider_bg_pane_g2

0x9304,	// (0x00070550) vded2_slider_bg_pane_g3

0x0002,

0xfb24,	// (0x00076d70) vded2_slider_bg_pane_g

0x50d9,	// (0x0006c325) aid_postcard_touch_down_pane_ParamLimits

0x50d9,	// (0x0006c325) aid_postcard_touch_down_pane

0x50eb,	// (0x0006c337) aid_postcard_touch_up_pane_ParamLimits

0x50eb,	// (0x0006c337) aid_postcard_touch_up_pane

0xa8d9,	// (0x00071b25) main_blid2_pane

0xc265,	// (0x000734b1) popup_blid2_search_window

0xa8d9,	// (0x00071b25) blid2_gps_pane

0xa8d9,	// (0x00071b25) blid2_navig_pane

0xa8d9,	// (0x00071b25) blid2_search_pane

0xa8d9,	// (0x00071b25) blid2_tripm_pane

0x930d,	// (0x00070559) blid2_search_pane_g1_ParamLimits

0x930d,	// (0x00070559) blid2_search_pane_g1

0x9321,	// (0x0007056d) blid2_search_pane_t1_ParamLimits

0x9321,	// (0x0007056d) blid2_search_pane_t1

0x9333,	// (0x0007057f) aid_size_cell_blid2_gps_ParamLimits

0x9333,	// (0x0007057f) aid_size_cell_blid2_gps

0x934b,	// (0x00070597) blid2_gps_pane_g1_ParamLimits

0x934b,	// (0x00070597) blid2_gps_pane_g1

0x935f,	// (0x000705ab) grid_blid2_satellite_pane_ParamLimits

0x935f,	// (0x000705ab) grid_blid2_satellite_pane

0x9373,	// (0x000705bf) blid2_navig_pane_g1_ParamLimits

0x9373,	// (0x000705bf) blid2_navig_pane_g1

0x937f,	// (0x000705cb) blid2_navig_pane_t1_ParamLimits

0x937f,	// (0x000705cb) blid2_navig_pane_t1

0x9398,	// (0x000705e4) blid2_navig_pane_t2_ParamLimits

0x9398,	// (0x000705e4) blid2_navig_pane_t2

0x0001,

0xfb2b,	// (0x00076d77) blid2_navig_pane_t_ParamLimits

0xfb2b,	// (0x00076d77) blid2_navig_pane_t

0x93b1,	// (0x000705fd) blid2_navig_ring_pane_ParamLimits

0x93b1,	// (0x000705fd) blid2_navig_ring_pane

0x93c6,	// (0x00070612) blid2_speed_pane_ParamLimits

0x93c6,	// (0x00070612) blid2_speed_pane

0x93d2,	// (0x0007061e) blid2_tripm_pane_g1_ParamLimits

0x93d2,	// (0x0007061e) blid2_tripm_pane_g1

0x93e7,	// (0x00070633) blid2_tripm_pane_g2_ParamLimits

0x93e7,	// (0x00070633) blid2_tripm_pane_g2

0x93fb,	// (0x00070647) blid2_tripm_pane_g3_ParamLimits

0x93fb,	// (0x00070647) blid2_tripm_pane_g3

0x940f,	// (0x0007065b) blid2_tripm_pane_g4_ParamLimits

0x940f,	// (0x0007065b) blid2_tripm_pane_g4

0x9423,	// (0x0007066f) blid2_tripm_pane_g5_ParamLimits

0x9423,	// (0x0007066f) blid2_tripm_pane_g5

0x0005,

0xfb30,	// (0x00076d7c) blid2_tripm_pane_g_ParamLimits

0xfb30,	// (0x00076d7c) blid2_tripm_pane_g

0x9445,	// (0x00070691) blid2_tripm_pane_t1_ParamLimits

0x9445,	// (0x00070691) blid2_tripm_pane_t1

0x945c,	// (0x000706a8) blid2_tripm_pane_t2_ParamLimits

0x945c,	// (0x000706a8) blid2_tripm_pane_t2

0x9473,	// (0x000706bf) blid2_tripm_pane_t3_ParamLimits

0x9473,	// (0x000706bf) blid2_tripm_pane_t3

0x0003,

0xfb3d,	// (0x00076d89) blid2_tripm_pane_t_ParamLimits

0xfb3d,	// (0x00076d89) blid2_tripm_pane_t

0x94b6,	// (0x00070702) cell_blid2_satellite_pane_ParamLimits

0x94b6,	// (0x00070702) cell_blid2_satellite_pane

0x94ce,	// (0x0007071a) cell_blid2_satellite_pane_g1

0xd6bb,	// (0x00074907) cell_blid2_satellite_pane_t1

0xc692,	// (0x000738de) blid2_speed_pane_g1

0xd6c9,	// (0x00074915) blid2_speed_pane_t1

0xd6d7,	// (0x00074923) blid2_speed_pane_t2

0x0001,

0xfb46,	// (0x00076d92) blid2_speed_pane_t

0xc692,	// (0x000738de) blid2_navig_ring_pane_g1

0x94d7,	// (0x00070723) blid2_navig_ring_pane_g2

0x94df,	// (0x0007072b) blid2_navig_ring_pane_g3

0x94e7,	// (0x00070733) blid2_navig_ring_pane_g4

0x94ef,	// (0x0007073b) blid2_navig_ring_pane_g5

0x0004,

0xfb4b,	// (0x00076d97) blid2_navig_ring_pane_g

0xa8d9,	// (0x00071b25) bg_popup_window_pane_cp011

0xd6e5,	// (0x00074931) popup_blid2_search_window_g1

0xd6ed,	// (0x00074939) popup_blid2_search_window_t1

0xd6fb,	// (0x00074947) popup_blid2_search_window_t2

0x0001,

0xfb56,	// (0x00076da2) popup_blid2_search_window_t

0xb54e,	// (0x0007279a) main_browser_pane_g1

0xb091,	// (0x000722dd) main_browser_pane_ParamLimits

0x1080,	// (0x000682cc) bg_button_pane_cp011_ParamLimits

0x871b,	// (0x0006f967) cell_vitu2_function_pane_g1_ParamLimits

0x1080,	// (0x000682cc) bg_popup_sub_pane_cp22_ParamLimits

0x256d,	// (0x000697b9) input_focus_pane_cp08_ParamLimits

0x8f67,	// (0x000701b3) popup_vitu2_query_button_pane_ParamLimits

0x8f67,	// (0x000701b3) popup_vitu2_query_button_pane

0x2565,	// (0x000697b1) popup_vitu2_query_input_button_pane

0xd2ee,	// (0x0007453a) popup_vitu2_query_window_g1_ParamLimits

0x257a,	// (0x000697c6) popup_vitu2_query_window_g2_ParamLimits

0xfa5d,	// (0x00076ca9) popup_vitu2_query_window_g_ParamLimits

0xa8d9,	// (0x00071b25) bg_button_pane_cp026

0x94f7,	// (0x00070743) popup_vitu2_query_input_button_pane_g1

0xa8d9,	// (0x00071b25) bg_button_pane_cp025

0xd709,	// (0x00074955) popup_vitu2_query_button_pane_t1

0x6f17,	// (0x0006e163) main_mp3_pane_t6

0x6f25,	// (0x0006e171) popup_slider_window_cp01

0xef96,	// (0x000761e2) cam4_battery_pane

0xef96,	// (0x000761e2) cam4_battery_pane_cp02

0xef96,	// (0x000761e2) cam4_battery_pane_cp01

0xef96,	// (0x000761e2) cam4_battery_pane_cp03

0xc692,	// (0x000738de) cam4_battery_pane_g1

0xd717,	// (0x00074963) cam4_battery_pane_g2

0x0001,

0xfb5b,	// (0x00076da7) cam4_battery_pane_g

0xc564,	// (0x000737b0) popup_blid_sat_info2_window_t11

0x494f,	// (0x0006bb9b) aid_size_touch_mv_arrow_left_ParamLimits

0x4968,	// (0x0006bbb4) aid_size_touch_mv_arrow_right_ParamLimits

0x49a0,	// (0x0006bbec) navi_pane_g1_ParamLimits

0x49ac,	// (0x0006bbf8) navi_pane_g2_ParamLimits

0x49ca,	// (0x0006bc16) navi_pane_g3_ParamLimits

0xf418,	// (0x00076664) navi_pane_g_ParamLimits

0x4a84,	// (0x0006bcd0) navi_pane_mv_t1_ParamLimits

0x7a71,	// (0x0006ecbd) grid_imed_effect_pane_ParamLimits

0xb488,	// (0x000726d4) aid_placing_vt_slider_lsc

0xb490,	// (0x000726dc) aid_placing_vt_slider_prt

0x1080,	// (0x000682cc) bg_tb_trans_pane_cp01_ParamLimits

0xc7e1,	// (0x00073a2d) popup_image_details_window_g1_ParamLimits

0xc7f4,	// (0x00073a40) popup_image_details_window_g2_ParamLimits

0xc809,	// (0x00073a55) popup_image_details_window_g3_ParamLimits

0xc809,	// (0x00073a55) popup_image_details_window_g3

0xf75e,	// (0x000769aa) popup_image_details_window_g_ParamLimits

0xc81d,	// (0x00073a69) popup_image_details_window_t1_ParamLimits

0xc82f,	// (0x00073a7b) popup_image_details_window_t2_ParamLimits

0xc848,	// (0x00073a94) popup_image_details_window_t3_ParamLimits

0xc85c,	// (0x00073aa8) popup_image_details_window_t4_ParamLimits

0xc877,	// (0x00073ac3) popup_image_details_window_t5_ParamLimits

0xf765,	// (0x000769b1) popup_image_details_window_t_ParamLimits

0x9173,	// (0x000703bf) cl_header_name_pane_ParamLimits

0x9173,	// (0x000703bf) cl_header_name_pane

0x94ff,	// (0x0007074b) cl_header_name_pane_t1_ParamLimits

0x94ff,	// (0x0007074b) cl_header_name_pane_t1

0x9520,	// (0x0007076c) cl_header_name_pane_t2_ParamLimits

0x9520,	// (0x0007076c) cl_header_name_pane_t2

0x9562,	// (0x000707ae) cl_header_name_pane_t3_ParamLimits

0x9562,	// (0x000707ae) cl_header_name_pane_t3

0x0002,

0xfb60,	// (0x00076dac) cl_header_name_pane_t_ParamLimits

0xfb60,	// (0x00076dac) cl_header_name_pane_t

0x4a53,	// (0x0006bc9f) navi_pane_mv_g2_ParamLimits

0xcfec,	// (0x00074238) field_vitu2_entry_pane_g1_ParamLimits

0xcff8,	// (0x00074244) field_vitu2_entry_pane_g2_ParamLimits

0xd004,	// (0x00074250) field_vitu2_entry_pane_g3_ParamLimits

0xd004,	// (0x00074250) field_vitu2_entry_pane_g3

0xf95c,	// (0x00076ba8) field_vitu2_entry_pane_g_ParamLimits

0x8697,	// (0x0006f8e3) cell_vitu2_itu_pane_g1_ParamLimits

0x86a7,	// (0x0006f8f3) cell_vitu2_itu_pane_g2_ParamLimits

0x86a7,	// (0x0006f8f3) cell_vitu2_itu_pane_g2

0x0001,

0xf968,	// (0x00076bb4) cell_vitu2_itu_pane_g_ParamLimits

0xf968,	// (0x00076bb4) cell_vitu2_itu_pane_g

0x1080,	// (0x000682cc) bg_vkb2_func_pane_cp05_ParamLimits

0x1080,	// (0x000682cc) bg_vkb2_func_pane_cp05

0x1080,	// (0x000682cc) bg_vkb2_func_pane_cp03

0x1080,	// (0x000682cc) bg_vkb2_func_pane_cp04

0x1080,	// (0x000682cc) bg_vkb2_func_pane_cp10_ParamLimits

0x1080,	// (0x000682cc) bg_vkb2_func_pane_cp10

0x261f,	// (0x0006986b) bg_vkb2_func_pane_cp08

0x911e,	// (0x0007036a) bg_vkb2_func_pane_cp06

0x912b,	// (0x00070377) bg_vkb2_func_pane_cp07

0xd64e,	// (0x0007489a) bg_vkb2_func_pane_cp11_ParamLimits

0xd64e,	// (0x0007489a) bg_vkb2_func_pane_cp11

0xd663,	// (0x000748af) bg_vkb2_func_pane_cp12_ParamLimits

0xd663,	// (0x000748af) bg_vkb2_func_pane_cp12

0xa8d9,	// (0x00071b25) bg_vkb2_func_pane_cp09

0xd05c,	// (0x000742a8) bg_vkb2_func_pane_g1

0xb65f,	// (0x000728ab) bg_vkb2_func_pane_g2

0xd064,	// (0x000742b0) bg_vkb2_func_pane_g3

0xd06c,	// (0x000742b8) bg_vkb2_func_pane_g4

0xd2b1,	// (0x000744fd) bg_vkb2_func_pane_g5

0xd084,	// (0x000742d0) bg_vkb2_func_pane_g6

0xd08c,	// (0x000742d8) bg_vkb2_func_pane_g7

0xd07c,	// (0x000742c8) bg_vkb2_func_pane_g8

0xb63f,	// (0x0007288b) bg_vkb2_func_pane_g9

0x0008,

0xfb67,	// (0x00076db3) bg_vkb2_func_pane_g

0x9435,	// (0x00070681) blid2_tripm_pane_g6_ParamLimits

0x9435,	// (0x00070681) blid2_tripm_pane_g6

0xceb0,	// (0x000740fc) mp4_progress_pane_g1

0x94a4,	// (0x000706f0) blid2_tripm_values_pane_ParamLimits

0x94a4,	// (0x000706f0) blid2_tripm_values_pane

0x9593,	// (0x000707df) blid2_tripm_values_pane_t1

0x95a1,	// (0x000707ed) blid2_tripm_values_pane_t2

0x95af,	// (0x000707fb) blid2_tripm_values_pane_t3

0x95bd,	// (0x00070809) blid2_tripm_values_pane_t4

0x95cb,	// (0x00070817) blid2_tripm_values_pane_t5

0x95d9,	// (0x00070825) blid2_tripm_values_pane_t6

0x95e7,	// (0x00070833) blid2_tripm_values_pane_t7

0x95f5,	// (0x00070841) blid2_tripm_values_pane_t8

0x9603,	// (0x0007084f) blid2_tripm_values_pane_t9

0x0008,

0xfb7a,	// (0x00076dc6) blid2_tripm_values_pane_t

0x3ad1,	// (0x0006ad1d) call_video_pane_t1_ParamLimits

0x3ae3,	// (0x0006ad2f) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x000764ed) call_video_pane_t_ParamLimits

0x23de,	// (0x0006962a) msg_header_pane_g1_ParamLimits

0x504b,	// (0x0006c297) msg_header_pane_g2_ParamLimits

0x504b,	// (0x0006c297) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x00076707) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x00076707) msg_header_pane_g

0xb091,	// (0x000722dd) main_clock2_pane_ParamLimits

0x77b0,	// (0x0006e9fc) grid_clock2_toolbar_pane_ParamLimits

0x77b0,	// (0x0006e9fc) grid_clock2_toolbar_pane

0x77b0,	// (0x0006e9fc) listscroll_clock2_pane_ParamLimits

0x77b0,	// (0x0006e9fc) listscroll_clock2_pane

0x787f,	// (0x0006eacb) main_clock2_pane_t3_ParamLimits

0x787f,	// (0x0006eacb) main_clock2_pane_t3

0x7898,	// (0x0006eae4) main_clock2_pane_t4_ParamLimits

0x7898,	// (0x0006eae4) main_clock2_pane_t4

0xd721,	// (0x0007496d) cell_clock2_toolbar_pane

0xd729,	// (0x00074975) cell_clock2_toolbar_pane_cp01

0xd729,	// (0x00074975) cell_clock2_toolbar_pane_cp02

0xd731,	// (0x0007497d) cell_clock2_toolbar_pane_cp03

0xd739,	// (0x00074985) list_clock2_pane

0x103f,	// (0x0006828b) scroll_pane_cp10

0xd741,	// (0x0007498d) list_single_clock2_pane_ParamLimits

0xd741,	// (0x0007498d) list_single_clock2_pane

0x4af2,	// (0x0006bd3e) list_highlight_pane_cp08

0xd74e,	// (0x0007499a) list_single_clock2_pane_t1

0xd75c,	// (0x000749a8) list_single_clock2_pane_t2

0x0001,

0xfb8d,	// (0x00076dd9) list_single_clock2_pane_t

0xa8d9,	// (0x00071b25) bg_button_pane_cp10

0xd76a,	// (0x000749b6) cell_clock2_toolbar_pane_g1

0x505f,	// (0x0006c2ab) aid_main_viewer_pane_g1_ParamLimits

0x505f,	// (0x0006c2ab) aid_main_viewer_pane_g1

0x506b,	// (0x0006c2b7) aid_main_viewer_pane_g2_ParamLimits

0x506b,	// (0x0006c2b7) aid_main_viewer_pane_g2

0x5077,	// (0x0006c2c3) aid_main_viewer_pane_g3_ParamLimits

0x5077,	// (0x0006c2c3) aid_main_viewer_pane_g3

0x5086,	// (0x0006c2d2) aid_main_viewer_pane_g4_ParamLimits

0x5086,	// (0x0006c2d2) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x00076718) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x00076718) aid_main_viewer_pane_g

0x1080,	// (0x000682cc) main_calc_pane_ParamLimits

0x6273,	// (0x0006d4bf) main_dialer2_pane_ParamLimits

0xa8d9,	// (0x00071b25) main_cam6_pane

0xa8d9,	// (0x00071b25) main_vid6_pane

0x77bc,	// (0x0006ea08) listscroll_gen_pane_cp06_ParamLimits

0x77bc,	// (0x0006ea08) listscroll_gen_pane_cp06

0x78b1,	// (0x0006eafd) main_clock2_pane_t5_ParamLimits

0x78b1,	// (0x0006eafd) main_clock2_pane_t5

0x7906,	// (0x0006eb52) aid_call2_pane_cp10_ParamLimits

0x7918,	// (0x0006eb64) aid_call_pane_cp10_ParamLimits

0x48de,	// (0x0006bb2a) popup_clock_analogue_window_cp10_g1_ParamLimits

0x48de,	// (0x0006bb2a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x792a,	// (0x0006eb76) popup_clock_analogue_window_cp10_g3_ParamLimits

0x792a,	// (0x0006eb76) popup_clock_analogue_window_cp10_g4_ParamLimits

0x48de,	// (0x0006bb2a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf815,	// (0x00076a61) popup_clock_analogue_window_cp10_g_ParamLimits

0x793c,	// (0x0006eb88) popup_clock_analogue_window_cp10_t1_ParamLimits

0xcf10,	// (0x0007415c) cell_dialer2_keypad_pane_g2_ParamLimits

0xcf10,	// (0x0007415c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8fb,	// (0x00076b47) cell_dialer2_keypad_pane_g_ParamLimits

0xf8fb,	// (0x00076b47) cell_dialer2_keypad_pane_g

0x7f4b,	// (0x0006f197) cell_dialer2_keypad_pane_t1

0x89e5,	// (0x0006fc31) main_cset_text2_pane_ParamLimits

0x89e5,	// (0x0006fc31) main_cset_text2_pane

0xd4c8,	// (0x00074714) area_vitu2_query_pane_g1_ParamLimits

0x25e8,	// (0x00069834) area_vitu2_query_pane_g2_ParamLimits

0xfaaa,	// (0x00076cf6) area_vitu2_query_pane_g_ParamLimits

0xd54c,	// (0x00074798) area_vitu2_query_pane_t7_ParamLimits

0xd54c,	// (0x00074798) area_vitu2_query_pane_t7

0x911e,	// (0x0007036a) bg_button_pane_cp018_ParamLimits

0x912b,	// (0x00070377) bg_button_pane_cp021_ParamLimits

0x261f,	// (0x0006986b) bg_button_pane_cp022_ParamLimits

0x261f,	// (0x0006986b) bg_vkb2_func_pane_cp08_ParamLimits

0x911e,	// (0x0007036a) bg_vkb2_func_pane_cp06_ParamLimits

0x912b,	// (0x00070377) bg_vkb2_func_pane_cp07_ParamLimits

0x262e,	// (0x0006987a) input_focus_pane_cp09_ParamLimits

0xf0e6,	// (0x00076332) cam6_autofocus_pane_ParamLimits

0xf0e6,	// (0x00076332) cam6_autofocus_pane

0x9611,	// (0x0007085d) cam6_image_uncrop_pane_ParamLimits

0x9611,	// (0x0007085d) cam6_image_uncrop_pane

0x961e,	// (0x0007086a) cam6_indi_pane_ParamLimits

0x961e,	// (0x0007086a) cam6_indi_pane

0x9634,	// (0x00070880) cam6_mode_pane_ParamLimits

0x9634,	// (0x00070880) cam6_mode_pane

0x9646,	// (0x00070892) cam6_timer_pane_ParamLimits

0x9646,	// (0x00070892) cam6_timer_pane

0x9652,	// (0x0007089e) cam6_zoom_pane_ParamLimits

0x9652,	// (0x0007089e) cam6_zoom_pane

0x965e,	// (0x000708aa) cam6_mode_pane_g1_ParamLimits

0x965e,	// (0x000708aa) cam6_mode_pane_g1

0x966e,	// (0x000708ba) cam6_mode_pane_g2_ParamLimits

0x966e,	// (0x000708ba) cam6_mode_pane_g2

0x967e,	// (0x000708ca) cam6_mode_pane_g3_ParamLimits

0x967e,	// (0x000708ca) cam6_mode_pane_g3

0x968e,	// (0x000708da) cam6_mode_pane_g4_ParamLimits

0x968e,	// (0x000708da) cam6_mode_pane_g4

0x0003,

0xfb92,	// (0x00076dde) cam6_mode_pane_g_ParamLimits

0xfb92,	// (0x00076dde) cam6_mode_pane_g

0xd772,	// (0x000749be) bg_tb_trans_pane_cp08_ParamLimits

0xd772,	// (0x000749be) bg_tb_trans_pane_cp08

0xd780,	// (0x000749cc) cam6_battery_pane_ParamLimits

0xd780,	// (0x000749cc) cam6_battery_pane

0xd796,	// (0x000749e2) cam6_indi_pane_g1_ParamLimits

0xd796,	// (0x000749e2) cam6_indi_pane_g1

0xd7a8,	// (0x000749f4) cam6_indi_pane_g2_ParamLimits

0xd7a8,	// (0x000749f4) cam6_indi_pane_g2

0xd7ba,	// (0x00074a06) cam6_indi_pane_g3_ParamLimits

0xd7ba,	// (0x00074a06) cam6_indi_pane_g3

0x0002,

0xfb9b,	// (0x00076de7) cam6_indi_pane_g_ParamLimits

0xfb9b,	// (0x00076de7) cam6_indi_pane_g

0xd7cc,	// (0x00074a18) cam6_indi_pane_t1_ParamLimits

0xd7cc,	// (0x00074a18) cam6_indi_pane_t1

0x84c8,	// (0x0006f714) cam6_autofocus_pane_g1

0x84d0,	// (0x0006f71c) cam6_autofocus_pane_g2

0x84d8,	// (0x0006f724) cam6_autofocus_pane_g3

0x84e0,	// (0x0006f72c) cam6_autofocus_pane_g4

0x0003,

0xfba2,	// (0x00076dee) cam6_autofocus_pane_g

0xd7f2,	// (0x00074a3e) cam6_timer_pane_g1

0xd7fa,	// (0x00074a46) cam6_timer_pane_t1

0xd808,	// (0x00074a54) cam6_zoom_cont_pane

0xd810,	// (0x00074a5c) cam6_zoom_pane_g1

0xd818,	// (0x00074a64) cam6_zoom_pane_g2

0x969e,	// (0x000708ea) cam6_zoom_pane_g3

0x0002,

0xfbab,	// (0x00076df7) cam6_zoom_pane_g

0xc692,	// (0x000738de) cam6_battery_pane_g1

0xc692,	// (0x000738de) cam6_battery_pane_g2

0x0001,

0xf722,	// (0x0007696e) cam6_battery_pane_g

0xd820,	// (0x00074a6c) cam6_zoom_cont_pane_g1

0xd829,	// (0x00074a75) cam6_zoom_cont_pane_g2

0xd832,	// (0x00074a7e) cam6_zoom_cont_pane_g3

0x0002,

0xfbb2,	// (0x00076dfe) cam6_zoom_cont_pane_g

0x96bb,	// (0x00070907) cam6_mode_pane_cp_ParamLimits

0x96bb,	// (0x00070907) cam6_mode_pane_cp

0x9652,	// (0x0007089e) cam6_zoom_pane_cp_ParamLimits

0x9652,	// (0x0007089e) cam6_zoom_pane_cp

0x96cd,	// (0x00070919) vid6_image_uncrop_cif_pane_ParamLimits

0x96cd,	// (0x00070919) vid6_image_uncrop_cif_pane

0x96db,	// (0x00070927) vid6_image_uncrop_nhd_pane_ParamLimits

0x96db,	// (0x00070927) vid6_image_uncrop_nhd_pane

0x9611,	// (0x0007085d) vid6_image_uncrop_vga_pane_ParamLimits

0x9611,	// (0x0007085d) vid6_image_uncrop_vga_pane

0x96e8,	// (0x00070934) vid6_image_uncrop_wvga_pane_ParamLimits

0x96e8,	// (0x00070934) vid6_image_uncrop_wvga_pane

0x96f5,	// (0x00070941) vid6_indi_pane_ParamLimits

0x96f5,	// (0x00070941) vid6_indi_pane

0xd772,	// (0x000749be) bg_tb_trans_pane_cp09_ParamLimits

0xd772,	// (0x000749be) bg_tb_trans_pane_cp09

0xd846,	// (0x00074a92) cam6_battery_pane_cp_ParamLimits

0xd846,	// (0x00074a92) cam6_battery_pane_cp

0xd852,	// (0x00074a9e) vid6_indi_pane_g1_ParamLimits

0xd852,	// (0x00074a9e) vid6_indi_pane_g1

0xd864,	// (0x00074ab0) vid6_indi_pane_g2_ParamLimits

0xd864,	// (0x00074ab0) vid6_indi_pane_g2

0xd876,	// (0x00074ac2) vid6_indi_pane_g3_ParamLimits

0xd876,	// (0x00074ac2) vid6_indi_pane_g3

0xd88b,	// (0x00074ad7) vid6_indi_pane_g4_ParamLimits

0xd88b,	// (0x00074ad7) vid6_indi_pane_g4

0xd8a0,	// (0x00074aec) vid6_indi_pane_g5_ParamLimits

0xd8a0,	// (0x00074aec) vid6_indi_pane_g5

0x0004,

0xfbb9,	// (0x00076e05) vid6_indi_pane_g_ParamLimits

0xfbb9,	// (0x00076e05) vid6_indi_pane_g

0xd8ba,	// (0x00074b06) vid6_indi_pane_t1_ParamLimits

0xd8ba,	// (0x00074b06) vid6_indi_pane_t1

0xd8d0,	// (0x00074b1c) vid6_indi_pane_t2_ParamLimits

0xd8d0,	// (0x00074b1c) vid6_indi_pane_t2

0xd8f8,	// (0x00074b44) vid6_indi_pane_t3_ParamLimits

0xd8f8,	// (0x00074b44) vid6_indi_pane_t3

0xd920,	// (0x00074b6c) vid6_indi_pane_t4_ParamLimits

0xd920,	// (0x00074b6c) vid6_indi_pane_t4

0x0003,

0xfbc4,	// (0x00076e10) vid6_indi_pane_t_ParamLimits

0xfbc4,	// (0x00076e10) vid6_indi_pane_t

0xd944,	// (0x00074b90) wait_bar_pane_cp08

0x970c,	// (0x00070958) main_cset_text2_pane_t1_ParamLimits

0x970c,	// (0x00070958) main_cset_text2_pane_t1

0x96a6,	// (0x000708f2) listscroll_gen_pane_cp06_t1_ParamLimits

0x96a6,	// (0x000708f2) listscroll_gen_pane_cp06_t1

0xa8d9,	// (0x00071b25) main_cam6_set_pane

0xc8c1,	// (0x00073b0d) bg_tb_trans_pane_cp06_ParamLimits

0xef9e,	// (0x000761ea) cam4_indicators_pane_g1_ParamLimits

0xefae,	// (0x000761fa) cam4_indicators_pane_g2_ParamLimits

0xf938,	// (0x00076b84) cam4_indicators_pane_g_ParamLimits

0xefce,	// (0x0007621a) cam4_indicators_pane_t1_ParamLimits

0xcfc5,	// (0x00074211) bg_tb_trans_pane_cp07_ParamLimits

0x8477,	// (0x0006f6c3) vid4_indicators_pane_g1_ParamLimits

0x8484,	// (0x0006f6d0) vid4_indicators_pane_g2_ParamLimits

0x8491,	// (0x0006f6dd) vid4_indicators_pane_g3_ParamLimits

0x849e,	// (0x0006f6ea) vid4_indicators_pane_g4_ParamLimits

0xf94a,	// (0x00076b96) vid4_indicators_pane_g_ParamLimits

0x84b6,	// (0x0006f702) vid4_indicators_pane_t1_ParamLimits

0xf04c,	// (0x00076298) vid4_progress_pane_g1_ParamLimits

0xf05b,	// (0x000762a7) vid4_progress_pane_g2_ParamLimits

0xf06a,	// (0x000762b6) vid4_progress_pane_g3_ParamLimits

0xf079,	// (0x000762c5) vid4_progress_pane_g4_ParamLimits

0xfaf5,	// (0x00076d41) vid4_progress_pane_g_ParamLimits

0xf085,	// (0x000762d1) vid4_progress_pane_t1_ParamLimits

0xf09b,	// (0x000762e7) vid4_progress_pane_t2_ParamLimits

0xf0b0,	// (0x000762fc) vid4_progress_pane_t3_ParamLimits

0xfb00,	// (0x00076d4c) vid4_progress_pane_t_ParamLimits

0xf0c5,	// (0x00076311) wait_bar_pane_cp07_ParamLimits

0x9726,	// (0x00070972) main_cam6_set_pane_g2_ParamLimits

0x9726,	// (0x00070972) main_cam6_set_pane_g2

0x9748,	// (0x00070994) main_cset6_listscroll_pane_ParamLimits

0x9748,	// (0x00070994) main_cset6_listscroll_pane

0x9762,	// (0x000709ae) main_cset6_slider_pane_ParamLimits

0x9762,	// (0x000709ae) main_cset6_slider_pane

0x9778,	// (0x000709c4) main_cset6_text2_pane_ParamLimits

0x9778,	// (0x000709c4) main_cset6_text2_pane

0xd954,	// (0x00074ba0) main_cset6_text_pane

0xd152,	// (0x0007439e) main_cset_list_pane_copy1_ParamLimits

0xd152,	// (0x0007439e) main_cset_list_pane_copy1

0xd162,	// (0x000743ae) scroll_pane_cp028_copy1

0x9786,	// (0x000709d2) cset_list_set_pane_copy1

0x9798,	// (0x000709e4) aid_position_infowindow_above_copy1

0x97a0,	// (0x000709ec) aid_position_infowindow_below_copy1

0x97a8,	// (0x000709f4) cset_list_set_pane_g1_copy1

0x263d,	// (0x00069889) cset_list_set_pane_g3_copy1_ParamLimits

0x263d,	// (0x00069889) cset_list_set_pane_g3_copy1

0x264c,	// (0x00069898) cset_list_set_pane_t1_copy1_ParamLimits

0x264c,	// (0x00069898) cset_list_set_pane_t1_copy1

0x1080,	// (0x000682cc) list_highlight_pane_cp021_copy1_ParamLimits

0x1080,	// (0x000682cc) list_highlight_pane_cp021_copy1

0xd95c,	// (0x00074ba8) cset6_slider_pane_ParamLimits

0xd95c,	// (0x00074ba8) cset6_slider_pane

0xd988,	// (0x00074bd4) main_cset6_slider_pane_g1_ParamLimits

0xd988,	// (0x00074bd4) main_cset6_slider_pane_g1

0x97b0,	// (0x000709fc) main_cset6_slider_pane_g2_ParamLimits

0x97b0,	// (0x000709fc) main_cset6_slider_pane_g2

0xd177,	// (0x000743c3) main_cset6_slider_pane_g3_ParamLimits

0xd177,	// (0x000743c3) main_cset6_slider_pane_g3

0x8aaa,	// (0x0006fcf6) main_cset6_slider_pane_g4_ParamLimits

0x8aaa,	// (0x0006fcf6) main_cset6_slider_pane_g4

0x8af2,	// (0x0006fd3e) main_cset6_slider_pane_g5_ParamLimits

0x8af2,	// (0x0006fd3e) main_cset6_slider_pane_g5

0xd177,	// (0x000743c3) main_cset6_slider_pane_g7_ParamLimits

0xd177,	// (0x000743c3) main_cset6_slider_pane_g7

0xd183,	// (0x000743cf) main_cset6_slider_pane_g8_ParamLimits

0xd183,	// (0x000743cf) main_cset6_slider_pane_g8

0x8a92,	// (0x0006fcde) main_cset6_slider_pane_g9_ParamLimits

0x8a92,	// (0x0006fcde) main_cset6_slider_pane_g9

0x8a9e,	// (0x0006fcea) main_cset6_slider_pane_g10_ParamLimits

0x8a9e,	// (0x0006fcea) main_cset6_slider_pane_g10

0x8aaa,	// (0x0006fcf6) main_cset6_slider_pane_g11_ParamLimits

0x8aaa,	// (0x0006fcf6) main_cset6_slider_pane_g11

0x8ab6,	// (0x0006fd02) main_cset6_slider_pane_g12_ParamLimits

0x8ab6,	// (0x0006fd02) main_cset6_slider_pane_g12

0x8ac2,	// (0x0006fd0e) main_cset6_slider_pane_g13_ParamLimits

0x8ac2,	// (0x0006fd0e) main_cset6_slider_pane_g13

0x8ace,	// (0x0006fd1a) main_cset6_slider_pane_g14_ParamLimits

0x8ace,	// (0x0006fd1a) main_cset6_slider_pane_g14

0x97d8,	// (0x00070a24) main_cset6_slider_pane_g15_ParamLimits

0x97d8,	// (0x00070a24) main_cset6_slider_pane_g15

0x8af2,	// (0x0006fd3e) main_cset6_slider_pane_g16_ParamLimits

0x8af2,	// (0x0006fd3e) main_cset6_slider_pane_g16

0x8afe,	// (0x0006fd4a) main_cset6_slider_pane_g17_ParamLimits

0x8afe,	// (0x0006fd4a) main_cset6_slider_pane_g17

0x0011,

0xfbcd,	// (0x00076e19) main_cset6_slider_pane_g_ParamLimits

0xfbcd,	// (0x00076e19) main_cset6_slider_pane_g

0xd9b0,	// (0x00074bfc) main_cset6_slider_pane_t1_ParamLimits

0xd9b0,	// (0x00074bfc) main_cset6_slider_pane_t1

0xd9f1,	// (0x00074c3d) main_cset6_slider_pane_t2_ParamLimits

0xd9f1,	// (0x00074c3d) main_cset6_slider_pane_t2

0xda1c,	// (0x00074c68) main_cset6_slider_pane_t3_ParamLimits

0xda1c,	// (0x00074c68) main_cset6_slider_pane_t3

0x97f0,	// (0x00070a3c) main_cset6_slider_pane_t4_ParamLimits

0x97f0,	// (0x00070a3c) main_cset6_slider_pane_t4

0x981b,	// (0x00070a67) main_cset6_slider_pane_t5_ParamLimits

0x981b,	// (0x00070a67) main_cset6_slider_pane_t5

0xda47,	// (0x00074c93) main_cset6_slider_pane_t7_ParamLimits

0xda47,	// (0x00074c93) main_cset6_slider_pane_t7

0x9846,	// (0x00070a92) main_cset6_slider_pane_t8_ParamLimits

0x9846,	// (0x00070a92) main_cset6_slider_pane_t8

0x986a,	// (0x00070ab6) main_cset6_slider_pane_t9_ParamLimits

0x986a,	// (0x00070ab6) main_cset6_slider_pane_t9

0x988e,	// (0x00070ada) main_cset6_slider_pane_t10_ParamLimits

0x988e,	// (0x00070ada) main_cset6_slider_pane_t10

0x98b2,	// (0x00070afe) main_cset6_slider_pane_t11_ParamLimits

0x98b2,	// (0x00070afe) main_cset6_slider_pane_t11

0xda7d,	// (0x00074cc9) main_cset6_slider_pane_t14_ParamLimits

0xda7d,	// (0x00074cc9) main_cset6_slider_pane_t14

0xdab6,	// (0x00074d02) main_cset6_slider_pane_t15_ParamLimits

0xdab6,	// (0x00074d02) main_cset6_slider_pane_t15

0x000b,

0xfbf2,	// (0x00076e3e) main_cset6_slider_pane_t_ParamLimits

0xfbf2,	// (0x00076e3e) main_cset6_slider_pane_t

0xd25f,	// (0x000744ab) cset_slider_pane_g1_copy1

0xd268,	// (0x000744b4) cset_slider_pane_g2_copy1

0xd271,	// (0x000744bd) cset_slider_pane_g3_copy1

0xa8d9,	// (0x00071b25) bg_popup_sub_pane_cp011_copy1

0xd2fa,	// (0x00074546) main_cset_text_pane_g1_copy1

0xd302,	// (0x0007454e) main_cset_text_pane_t1_copy1

0xd310,	// (0x0007455c) main_cset_text_pane_t2_copy1

0xd31e,	// (0x0007456a) main_cset_text_pane_t3_copy1

0xd32c,	// (0x00074578) main_cset_text_pane_t4_copy1

0xd33a,	// (0x00074586) main_cset_text_pane_t5_copy1

0xd348,	// (0x00074594) main_cset_text_pane_t6_copy1

0xd356,	// (0x000745a2) main_cset_text_pane_t7_copy1

0x98d6,	// (0x00070b22) main_cset_text2_pane_t1_copy1

0xa8d9,	// (0x00071b25) main_ncimui_pane

0x6481,	// (0x0006d6cd) popup_query_ncimui_window_ParamLimits

0x6481,	// (0x0006d6cd) popup_query_ncimui_window

0xecf5,	// (0x00075f41) field_cale_ev2_pane_g4_ParamLimits

0xecf5,	// (0x00075f41) field_cale_ev2_pane_g4

0x7e3d,	// (0x0006f089) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7e3d,	// (0x0006f089) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8d6,	// (0x00076b22) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8d6,	// (0x00076b22) cell_video_dialer_keypad_pane_g

0x7e55,	// (0x0006f0a1) cell_video_dialer_keypad_pane_t1

0xa8d9,	// (0x00071b25) bg_popup_window_pane_cp012

0x0f18,	// (0x00068164) heading_pane_cp06

0xdbd8,	// (0x00074e24) ncim_query_content_pane

0xa8d9,	// (0x00071b25) bg_popup_heading_pane_cp01

0xdbe0,	// (0x00074e2c) ncim_heading_pane_t1

0xdbee,	// (0x00074e3a) ncim_indicator_popup_pane

0xdc00,	// (0x00074e4c) ncim_query_button_pane

0xdc14,	// (0x00074e60) ncim_query_content_pane_t1

0xdc26,	// (0x00074e72) ncim_query_content_pane_t2

0x0005,

0xfc31,	// (0x00076e7d) ncim_query_content_pane_t

0xdc60,	// (0x00074eac) ncim_query_list_pane

0xdc72,	// (0x00074ebe) ncim_query_popup_pane

0xdbee,	// (0x00074e3a) ncim_indicator_popup_pane_ParamLimits

0x99b6,	// (0x00070c02) ncim_query_content_pane_g1_ParamLimits

0x99b6,	// (0x00070c02) ncim_query_content_pane_g1

0xdc14,	// (0x00074e60) ncim_query_content_pane_t1_ParamLimits

0xdc26,	// (0x00074e72) ncim_query_content_pane_t2_ParamLimits

0x99c2,	// (0x00070c0e) ncim_query_content_pane_t3_ParamLimits

0x99c2,	// (0x00070c0e) ncim_query_content_pane_t3

0x99ea,	// (0x00070c36) ncim_query_content_pane_t4_ParamLimits

0x99ea,	// (0x00070c36) ncim_query_content_pane_t4

0x9a12,	// (0x00070c5e) ncim_query_content_pane_t5_ParamLimits

0x9a12,	// (0x00070c5e) ncim_query_content_pane_t5

0xdc38,	// (0x00074e84) ncim_query_content_pane_t6_ParamLimits

0xdc38,	// (0x00074e84) ncim_query_content_pane_t6

0xfc31,	// (0x00076e7d) ncim_query_content_pane_t_ParamLimits

0xdc60,	// (0x00074eac) ncim_query_list_pane_ParamLimits

0xdc72,	// (0x00074ebe) ncim_query_popup_pane_ParamLimits

0xdc86,	// (0x00074ed2) wait_bar_pane_cp04

0xa8d9,	// (0x00071b25) input_focus_pane_cp011

0xdc8e,	// (0x00074eda) ncim_query_popup_pane_t1

0xdc9c,	// (0x00074ee8) ncim_list_query_list_pane_ParamLimits

0xdc9c,	// (0x00074ee8) ncim_list_query_list_pane

0xa8d9,	// (0x00071b25) bg_button_pane_cp027

0xdcaf,	// (0x00074efb) ncim_query_button_pane_g1

0xa8d9,	// (0x00071b25) list_highlight_pane_cp012

0xdcb9,	// (0x00074f05) ncim_list_query_list_pane_g1

0xdcc1,	// (0x00074f0d) ncim_list_query_list_pane_t1

0xefbe,	// (0x0007620a) cam4_indicators_pane_g3_ParamLimits

0xefbe,	// (0x0007620a) cam4_indicators_pane_g3

0x84aa,	// (0x0006f6f6) vid4_indicators_pane_g5_ParamLimits

0x84aa,	// (0x0006f6f6) vid4_indicators_pane_g5

0xe9d9,	// (0x00075c25) vid4_progress_pane_g5_ParamLimits

0xe9d9,	// (0x00075c25) vid4_progress_pane_g5

0x9900,	// (0x00070b4c) main_ncimui_pane_g1

0x9946,	// (0x00070b92) ncimui_group_query_pane_ParamLimits

0x9946,	// (0x00070b92) ncimui_group_query_pane

0x997a,	// (0x00070bc6) ncimui_list_pane_ParamLimits

0x997a,	// (0x00070bc6) ncimui_list_pane

0x9992,	// (0x00070bde) ncimui_text_pane_ParamLimits

0x9992,	// (0x00070bde) ncimui_text_pane

0x9a3a,	// (0x00070c86) ncimui_text_pane_t1_ParamLimits

0x9a3a,	// (0x00070c86) ncimui_text_pane_t1

0xdcd8,	// (0x00074f24) ncimui_list_single_graphic_pane_ParamLimits

0xdcd8,	// (0x00074f24) ncimui_list_single_graphic_pane

0x9a60,	// (0x00070cac) ncimui_query_pane_ParamLimits

0x9a60,	// (0x00070cac) ncimui_query_pane

0xa8d9,	// (0x00071b25) list_highlight_pane_cp013

0xdce5,	// (0x00074f31) ncim_list_query_list_pane_t1_copy1

0xdcf3,	// (0x00074f3f) ncim_list_single_graphic_pane_g1

0xdcfb,	// (0x00074f47) ncim_query_button_pane_cp01

0xdd03,	// (0x00074f4f) ncim_query_entry_pane_ParamLimits

0xdd03,	// (0x00074f4f) ncim_query_entry_pane

0xdd13,	// (0x00074f5f) ncimui_query_pane_g1

0xdd1b,	// (0x00074f67) ncimui_query_pane_t1_ParamLimits

0xdd1b,	// (0x00074f67) ncimui_query_pane_t1

0xa8d9,	// (0x00071b25) input_focus_pane_cp012

0xdc8e,	// (0x00074eda) ncim_query_entry_pane_t1

0xb091,	// (0x000722dd) main_im_pane_ParamLimits

0x1080,	// (0x000682cc) main_mobtv_pane_ParamLimits

0x1080,	// (0x000682cc) main_mobtv_pane

0x8a92,	// (0x0006fcde) main_cset6_slider_pane_g18_ParamLimits

0x8a92,	// (0x0006fcde) main_cset6_slider_pane_g18

0x8ac2,	// (0x0006fd0e) main_cset6_slider_pane_g19_ParamLimits

0x8ac2,	// (0x0006fd0e) main_cset6_slider_pane_g19

0xdd31,	// (0x00074f7d) bg_main_mobtv_pane_ParamLimits

0xdd31,	// (0x00074f7d) bg_main_mobtv_pane

0x9a70,	// (0x00070cbc) main_mobtv_info_pane

0x9a79,	// (0x00070cc5) main_mobtv_loading_pane_ParamLimits

0x9a79,	// (0x00070cc5) main_mobtv_loading_pane

0xdd3f,	// (0x00074f8b) main_mobtv_pg_channel_list_pane

0xdd49,	// (0x00074f95) main_mobtv_pg_hdr_pane

0x9a86,	// (0x00070cd2) main_mobtv_programe_curr_pane_ParamLimits

0x9a86,	// (0x00070cd2) main_mobtv_programe_curr_pane

0x9a93,	// (0x00070cdf) main_mobtv_programe_next_pane_ParamLimits

0x9a93,	// (0x00070cdf) main_mobtv_programe_next_pane

0xdd52,	// (0x00074f9e) popup_mobtv_noti_window

0xc692,	// (0x000738de) main_tv_pg_hdr_pane_g1

0xdd5a,	// (0x00074fa6) main_tv_pg_hdr_pane_g2

0xdd62,	// (0x00074fae) main_tv_pg_hdr_pane_g3

0xdd6a,	// (0x00074fb6) main_tv_pg_hdr_pane_g4

0xdd72,	// (0x00074fbe) main_tv_pg_hdr_pane_g5

0xdd7a,	// (0x00074fc6) main_tv_pg_hdr_pane_g6

0xdd82,	// (0x00074fce) main_tv_pg_hdr_pane_g7

0xdd8a,	// (0x00074fd6) main_tv_pg_hdr_pane_g8

0xdd92,	// (0x00074fde) main_tv_pg_hdr_pane_g9

0xdd9a,	// (0x00074fe6) main_tv_pg_hdr_pane_g10

0xdda4,	// (0x00074ff0) main_tv_pg_hdr_pane_g11

0x000a,

0xfc3e,	// (0x00076e8a) main_tv_pg_hdr_pane_g

0xddae,	// (0x00074ffa) main_tv_pg_hdr_pane_t1

0xddbc,	// (0x00075008) main_tv_pg_hdr_pane_t2

0xddca,	// (0x00075016) main_tv_pg_hdr_pane_t3

0xddd8,	// (0x00075024) main_tv_pg_hdr_pane_t4

0xdde6,	// (0x00075032) main_tv_pg_hdr_pane_t5

0x0004,

0xfc55,	// (0x00076ea1) main_tv_pg_hdr_pane_t

0xddf4,	// (0x00075040) single_mobtv_pg_channel_pane_ParamLimits

0xddf4,	// (0x00075040) single_mobtv_pg_channel_pane

0xde06,	// (0x00075052) single_mobtv_pg_channel_table_pane

0xde0f,	// (0x0007505b) single_mobtv_pg_channel_thumb_pane

0xde18,	// (0x00075064) single_tv_pg_channel_pane_g1

0xde21,	// (0x0007506d) single_tv_pg_channel_pane_g2

0x0001,

0xfc60,	// (0x00076eac) single_tv_pg_channel_pane_g

0xc8c1,	// (0x00073b0d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc8c1,	// (0x00073b0d) bg_single_mobtv_pg_channel_thumb_pane

0xde2a,	// (0x00075076) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xde2a,	// (0x00075076) single_mobtv_pg_channel_thumb_pane_g1

0xde38,	// (0x00075084) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xde38,	// (0x00075084) single_mobtv_pg_channel_thumb_pane_g2

0xde44,	// (0x00075090) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xde44,	// (0x00075090) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc65,	// (0x00076eb1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc65,	// (0x00076eb1) single_mobtv_pg_channel_thumb_pane_g

0xde50,	// (0x0007509c) single_mobtv_pg_channel_thumb_pane_t1

0xde5e,	// (0x000750aa) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc6c,	// (0x00076eb8) single_mobtv_pg_channel_thumb_pane_t

0xc692,	// (0x000738de) bg_single_mobtv_pg_channel_table_pane_g1

0xc692,	// (0x000738de) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf722,	// (0x0007696e) bg_single_mobtv_pg_channel_table_pane_g

0xde6c,	// (0x000750b8) single_mobtv_pg_channel_table_pane_t1

0xde7a,	// (0x000750c6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc71,	// (0x00076ebd) single_mobtv_pg_channel_table_pane_t

0x9aa8,	// (0x00070cf4) main_mobtv_info_pane_g1_ParamLimits

0x9aa8,	// (0x00070cf4) main_mobtv_info_pane_g1

0x9ac4,	// (0x00070d10) main_mobtv_info_pane_t1_ParamLimits

0x9ac4,	// (0x00070d10) main_mobtv_info_pane_t1

0x9b2a,	// (0x00070d76) main_mobtv_info_pane_t2_ParamLimits

0x9b2a,	// (0x00070d76) main_mobtv_info_pane_t2

0x0002,

0xfc7b,	// (0x00076ec7) main_mobtv_info_pane_t_ParamLimits

0xfc7b,	// (0x00076ec7) main_mobtv_info_pane_t

0x9bad,	// (0x00070df9) wait_bar_pane_cp05

0x9bbd,	// (0x00070e09) main_mobtv_loading_pane_g1_ParamLimits

0x9bbd,	// (0x00070e09) main_mobtv_loading_pane_g1

0x9bce,	// (0x00070e1a) main_mobtv_loading_pane_g2_ParamLimits

0x9bce,	// (0x00070e1a) main_mobtv_loading_pane_g2

0x9bda,	// (0x00070e26) main_mobtv_loading_pane_g3_ParamLimits

0x9bda,	// (0x00070e26) main_mobtv_loading_pane_g3

0x0002,

0xfc82,	// (0x00076ece) main_mobtv_loading_pane_g_ParamLimits

0xfc82,	// (0x00076ece) main_mobtv_loading_pane_g

0xde88,	// (0x000750d4) main_mobtv_loading_pane_t1_ParamLimits

0xde88,	// (0x000750d4) main_mobtv_loading_pane_t1

0xdea0,	// (0x000750ec) main_mobtv_loading_pane_t2_ParamLimits

0xdea0,	// (0x000750ec) main_mobtv_loading_pane_t2

0x0001,

0xfc89,	// (0x00076ed5) main_mobtv_loading_pane_t_ParamLimits

0xfc89,	// (0x00076ed5) main_mobtv_loading_pane_t

0x9beb,	// (0x00070e37) wait_bar_pane_cp06_ParamLimits

0x9beb,	// (0x00070e37) wait_bar_pane_cp06

0xdec4,	// (0x00075110) main_mobtv_programe_curr_pane_t1

0xded2,	// (0x0007511e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc8e,	// (0x00076eda) main_mobtv_programe_curr_pane_t

0xdee0,	// (0x0007512c) main_mobtv_programe_next_pane_t1

0xdeee,	// (0x0007513a) main_mobtv_programe_next_pane_t2

0xdefc,	// (0x00075148) main_mobtv_programe_next_pane_t3

0x0002,

0xfc93,	// (0x00076edf) main_mobtv_programe_next_pane_t

0xa8d9,	// (0x00071b25) bg_popup_mobtv_noti_window_pane

0xdf0a,	// (0x00075156) popup_mobtv_noti_window_g1

0xdf12,	// (0x0007515e) popup_mobtv_noti_window_t1

0xdf20,	// (0x0007516c) popup_mobtv_noti_window_t2

0x0001,

0xfc9a,	// (0x00076ee6) popup_mobtv_noti_window_t

0xc692,	// (0x000738de) bg_popup_mobtv_noti_window_pane_g1

0xa8d9,	// (0x00071b25) sc_clock_pane

0xa8d9,	// (0x00071b25) main_fs_bigclock_pane

0x948e,	// (0x000706da) blid2_tripm_pane_t4_ParamLimits

0x948e,	// (0x000706da) blid2_tripm_pane_t4

0x9bfa,	// (0x00070e46) sc_clock_pane_g1_ParamLimits

0x9bfa,	// (0x00070e46) sc_clock_pane_g1

0x9c0c,	// (0x00070e58) sc_clock_pane_t1_ParamLimits

0x9c0c,	// (0x00070e58) sc_clock_pane_t1

0x9c2e,	// (0x00070e7a) sc_clock_pane_t2_ParamLimits

0x9c2e,	// (0x00070e7a) sc_clock_pane_t2

0x9c44,	// (0x00070e90) sc_clock_pane_t3_ParamLimits

0x9c44,	// (0x00070e90) sc_clock_pane_t3

0x0004,

0xfc9f,	// (0x00076eeb) sc_clock_pane_t_ParamLimits

0xfc9f,	// (0x00076eeb) sc_clock_pane_t

0xa45a,	// (0x000716a6) main_fs_bigclock_indicator_pane_ParamLimits

0xa45a,	// (0x000716a6) main_fs_bigclock_indicator_pane

0xc891,	// (0x00073add) main_fs_bigclock_pane_g1_ParamLimits

0xc891,	// (0x00073add) main_fs_bigclock_pane_g1

0xa466,	// (0x000716b2) main_fs_bigclock_pane_t1_ParamLimits

0xa466,	// (0x000716b2) main_fs_bigclock_pane_t1

0xa478,	// (0x000716c4) main_fs_bigclock_pane_t2_ParamLimits

0xa478,	// (0x000716c4) main_fs_bigclock_pane_t2

0xa48a,	// (0x000716d6) main_fs_bigclock_pane_t3_ParamLimits

0xa48a,	// (0x000716d6) main_fs_bigclock_pane_t3

0x0002,

0xfe99,	// (0x000770e5) main_fs_bigclock_pane_t_ParamLimits

0xfe99,	// (0x000770e5) main_fs_bigclock_pane_t

0x08a6,	// (0x00067af2) main_fs_bigclock_indicator_pane_g1

0xdc08,	// (0x00074e54) ncim_query_content_pane_g2_ParamLimits

0xdc08,	// (0x00074e54) ncim_query_content_pane_g2

0x0001,

0xfc2c,	// (0x00076e78) ncim_query_content_pane_g_ParamLimits

0xfc2c,	// (0x00076e78) ncim_query_content_pane_g

0x9c59,	// (0x00070ea5) sc_clock_pane_t4_ParamLimits

0x9c59,	// (0x00070ea5) sc_clock_pane_t4

0x1080,	// (0x000682cc) main_radioblah_pane

0xcf67,	// (0x000741b3) cell_call4_button_pane_t1_copy1_ParamLimits

0xcf67,	// (0x000741b3) cell_call4_button_pane_t1_copy1

0x9908,	// (0x00070b54) main_ncimui_pane_t1_ParamLimits

0x9908,	// (0x00070b54) main_ncimui_pane_t1

0x991a,	// (0x00070b66) main_ncimui_pane_t2_ParamLimits

0x991a,	// (0x00070b66) main_ncimui_pane_t2

0x0002,

0xfc25,	// (0x00076e71) main_ncimui_pane_t_ParamLimits

0xfc25,	// (0x00076e71) main_ncimui_pane_t

0xe04a,	// (0x00075296) main_radioblah_anim_pane_ParamLimits

0xe04a,	// (0x00075296) main_radioblah_anim_pane

0xe05b,	// (0x000752a7) main_radioblah_info_pane_ParamLimits

0xe05b,	// (0x000752a7) main_radioblah_info_pane

0xe06f,	// (0x000752bb) main_radioblah_pane_t1_ParamLimits

0xe06f,	// (0x000752bb) main_radioblah_pane_t1

0xe08b,	// (0x000752d7) main_radioblah_pane_t2_ParamLimits

0xe08b,	// (0x000752d7) main_radioblah_pane_t2

0x0003,

0xfcc0,	// (0x00076f0c) main_radioblah_pane_t_ParamLimits

0xfcc0,	// (0x00076f0c) main_radioblah_pane_t

0x9cf0,	// (0x00070f3c) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9cf0,	// (0x00070f3c) main_radioblah_rocker_ctrl_pane

0xe0d3,	// (0x0007531f) main_radioblah_info_pane_t1_ParamLimits

0xe0d3,	// (0x0007531f) main_radioblah_info_pane_t1

0x9d44,	// (0x00070f90) main_radioblah_info_pane_t2_ParamLimits

0x9d44,	// (0x00070f90) main_radioblah_info_pane_t2

0x0003,

0xfcc9,	// (0x00076f15) main_radioblah_info_pane_t_ParamLimits

0xfcc9,	// (0x00076f15) main_radioblah_info_pane_t

0xc692,	// (0x000738de) main_radioblah_rocker_ctrl_pane_g1

0x9df2,	// (0x0007103e) main_radioblah_rocker_ctrl_pane_g2

0x9dfa,	// (0x00071046) main_radioblah_rocker_ctrl_pane_g3

0x9e02,	// (0x0007104e) main_radioblah_rocker_ctrl_pane_g4

0x9e0a,	// (0x00071056) main_radioblah_rocker_ctrl_pane_g5

0x9e12,	// (0x0007105e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcd2,	// (0x00076f1e) main_radioblah_rocker_ctrl_pane_g

0x98d6,	// (0x00070b22) main_cset_text2_pane_t1_copy1_ParamLimits

0xef8e,	// (0x000761da) cam4_image_uncrop_qvga_pane

0xefe8,	// (0x00076234) vid4_image_uncrop_qcif_pane

0xf0e6,	// (0x00076332) cam6_image_uncrop_qvga_pane_ParamLimits

0xf0e6,	// (0x00076332) cam6_image_uncrop_qvga_pane

0xd83a,	// (0x00074a86) vid6_image_uncrop_qcif_pane_ParamLimits

0xd83a,	// (0x00074a86) vid6_image_uncrop_qcif_pane

0xa8d9,	// (0x00071b25) bg_popup_preview_window_pane_cp03

0xdbba,	// (0x00074e06) list_cset_text2_pane

0xdbc2,	// (0x00074e0e) main_cset6_text2_pane_g1

0xdbca,	// (0x00074e16) main_cset6_text2_pane_t1

0x9e1a,	// (0x00071066) list_cset_text2_pane_t1_ParamLimits

0x9e1a,	// (0x00071066) list_cset_text2_pane_t1

0x1080,	// (0x000682cc) main_radioblah_pane_ParamLimits

0x9b9b,	// (0x00070de7) main_mobtv_info_pane_t3_ParamLimits

0x9b9b,	// (0x00070de7) main_mobtv_info_pane_t3

0x9cde,	// (0x00070f2a) main_radioblah_pane_g1

0x9d18,	// (0x00070f64) main_radioblah_info_pane_g1

0x9d97,	// (0x00070fe3) main_radioblah_info_pane_t3_ParamLimits

0x9d97,	// (0x00070fe3) main_radioblah_info_pane_t3

0x4504,	// (0x0006b750) highlight_cell_cale_month_pane_ParamLimits

0x4504,	// (0x0006b750) highlight_cell_cale_month_pane

0xa8d9,	// (0x00071b25) main_phob_fisheye_pane

0xc9c3,	// (0x00073c0f) scroll_pane_cp0031_ParamLimits

0xc9c3,	// (0x00073c0f) scroll_pane_cp0031

0xd944,	// (0x00074b90) wait_bar_pane_cp08_ParamLimits

0x9786,	// (0x000709d2) cset_list_set_pane_copy1_ParamLimits

0xe10d,	// (0x00075359) highlight_cell_cale_month_pane_g1

0x9e33,	// (0x0007107f) highlight_cell_cale_month_pane_t1

0xe115,	// (0x00075361) list_gen_pane_cp01

0xd162,	// (0x000743ae) scroll_pane_01

0xe11e,	// (0x0007536a) list_single_double_fisheye_pane

0x2661,	// (0x000698ad) list_double_fisheye_pane_g1_ParamLimits

0x2661,	// (0x000698ad) list_double_fisheye_pane_g1

0x266d,	// (0x000698b9) list_double_fisheye_pane_g2_ParamLimits

0x266d,	// (0x000698b9) list_double_fisheye_pane_g2

0x2681,	// (0x000698cd) list_double_fisheye_pane_g3_ParamLimits

0x2681,	// (0x000698cd) list_double_fisheye_pane_g3

0x0004,

0xfcdf,	// (0x00076f2b) list_double_fisheye_pane_g_ParamLimits

0xfcdf,	// (0x00076f2b) list_double_fisheye_pane_g

0x26aa,	// (0x000698f6) list_double_fisheye_pane_t1_ParamLimits

0x26aa,	// (0x000698f6) list_double_fisheye_pane_t1

0x26c5,	// (0x00069911) list_double_fisheye_pane_t2_ParamLimits

0x26c5,	// (0x00069911) list_double_fisheye_pane_t2

0x0001,

0xfcea,	// (0x00076f36) list_double_fisheye_pane_t_ParamLimits

0xfcea,	// (0x00076f36) list_double_fisheye_pane_t

0xa8d9,	// (0x00071b25) main_call5_pane

0x9c82,	// (0x00070ece) sc_swipe_pane_ParamLimits

0x9c82,	// (0x00070ece) sc_swipe_pane

0x9e52,	// (0x0007109e) call5_image_pane_ParamLimits

0x9e52,	// (0x0007109e) call5_image_pane

0x9e67,	// (0x000710b3) call5_swipe_1_pane_ParamLimits

0x9e67,	// (0x000710b3) call5_swipe_1_pane

0x9e78,	// (0x000710c4) call5_swipe_2_pane_ParamLimits

0x9e78,	// (0x000710c4) call5_swipe_2_pane

0x9e9d,	// (0x000710e9) popup_call5_audio_first_window_ParamLimits

0x9e9d,	// (0x000710e9) popup_call5_audio_first_window

0xc8c1,	// (0x00073b0d) call5_swipe_1_pane_g1_ParamLimits

0xc8c1,	// (0x00073b0d) call5_swipe_1_pane_g1

0xe127,	// (0x00075373) call5_swipe_1_pane_g2_ParamLimits

0xe127,	// (0x00075373) call5_swipe_1_pane_g2

0x0001,

0xfcef,	// (0x00076f3b) call5_swipe_1_pane_g_ParamLimits

0xfcef,	// (0x00076f3b) call5_swipe_1_pane_g

0xe133,	// (0x0007537f) call5_swipe_1_pane_t1_ParamLimits

0xe133,	// (0x0007537f) call5_swipe_1_pane_t1

0xc8c1,	// (0x00073b0d) call5_swipe_2_pane_g1_ParamLimits

0xc8c1,	// (0x00073b0d) call5_swipe_2_pane_g1

0xe148,	// (0x00075394) call5_swipe_2_pane_g2_ParamLimits

0xe148,	// (0x00075394) call5_swipe_2_pane_g2

0x0001,

0xfcf4,	// (0x00076f40) call5_swipe_2_pane_g_ParamLimits

0xfcf4,	// (0x00076f40) call5_swipe_2_pane_g

0xe154,	// (0x000753a0) call5_swipe_2_pane_t1_ParamLimits

0xe154,	// (0x000753a0) call5_swipe_2_pane_t1

0xe169,	// (0x000753b5) sc_swipe_pane_g1_ParamLimits

0xe169,	// (0x000753b5) sc_swipe_pane_g1

0xe176,	// (0x000753c2) sc_swipe_pane_g2_ParamLimits

0xe176,	// (0x000753c2) sc_swipe_pane_g2

0x0001,

0xfcf9,	// (0x00076f45) sc_swipe_pane_g_ParamLimits

0xfcf9,	// (0x00076f45) sc_swipe_pane_g

0xe182,	// (0x000753ce) sc_swipe_pane_t1_ParamLimits

0xe182,	// (0x000753ce) sc_swipe_pane_t1

0xa8d9,	// (0x00071b25) main_cmail_launcher_pane

0x9eac,	// (0x000710f8) aid_size_cell_cmail_l_ParamLimits

0x9eac,	// (0x000710f8) aid_size_cell_cmail_l

0x9ec5,	// (0x00071111) grid_cmail_l_pane_ParamLimits

0x9ec5,	// (0x00071111) grid_cmail_l_pane

0x9eda,	// (0x00071126) cell_cmail_l_pane_ParamLimits

0x9eda,	// (0x00071126) cell_cmail_l_pane

0x9efc,	// (0x00071148) cell_cmail_l_pane_g1_ParamLimits

0x9efc,	// (0x00071148) cell_cmail_l_pane_g1

0x9f0c,	// (0x00071158) cell_cmail_l_pane_t1_ParamLimits

0x9f0c,	// (0x00071158) cell_cmail_l_pane_t1

0xe197,	// (0x000753e3) cell_cmail_l_pane_t2_ParamLimits

0xe197,	// (0x000753e3) cell_cmail_l_pane_t2

0x0001,

0xfcfe,	// (0x00076f4a) cell_cmail_l_pane_t_ParamLimits

0xfcfe,	// (0x00076f4a) cell_cmail_l_pane_t

0x1080,	// (0x000682cc) grid_highlight_pane_cp018_ParamLimits

0x1080,	// (0x000682cc) grid_highlight_pane_cp018

0x2d24,	// (0x00069f70) main2_pane_ParamLimits

0x2d24,	// (0x00069f70) main2_pane

0xb194,	// (0x000723e0) popup_sp_fs_action_menu_bg_pane_g1

0xb19c,	// (0x000723e8) popup_sp_fs_action_menu_bg_pane_g2

0xb1a4,	// (0x000723f0) popup_sp_fs_action_menu_bg_pane_g3

0xb1ac,	// (0x000723f8) popup_sp_fs_action_menu_bg_pane_g4

0xb1b4,	// (0x00072400) popup_sp_fs_action_menu_bg_pane_g5

0xb1bc,	// (0x00072408) popup_sp_fs_action_menu_bg_pane_g6

0xb1c4,	// (0x00072410) popup_sp_fs_action_menu_bg_pane_g7

0xb1cc,	// (0x00072418) popup_sp_fs_action_menu_bg_pane_g8

0xb1d4,	// (0x00072420) popup_sp_fs_action_menu_bg_pane_g9

0xb1dc,	// (0x00072428) popup_sp_fs_action_menu_bg_pane_g10

0xb1dc,	// (0x00072428) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x00076407) popup_sp_fs_action_menu_bg_pane_g

0xb3b3,	// (0x000725ff) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_x2_t3_g3_g1

0xb3bf,	// (0x0007260b) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb3bf,	// (0x0007260b) list_medium_line_x2_t3_g3_g2

0xb3cb,	// (0x00072617) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb3cb,	// (0x00072617) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x000764b7) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x000764b7) list_medium_line_x2_t3_g3_g

0xb3d7,	// (0x00072623) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb3d7,	// (0x00072623) list_medium_line_x2_t3_g3_t1

0x22f4,	// (0x00069540) list_medium_line_x2_t3_g3_t2_ParamLimits

0x22f4,	// (0x00069540) list_medium_line_x2_t3_g3_t2

0xb3ec,	// (0x00072638) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb3ec,	// (0x00072638) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x000764be) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x000764be) list_medium_line_x2_t3_g3_t

0xb3b3,	// (0x000725ff) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_x2_t3_g2_g1

0xb3cb,	// (0x00072617) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb3cb,	// (0x00072617) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x000764c5) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x000764c5) list_medium_line_x2_t3_g2_g

0xb401,	// (0x0007264d) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb401,	// (0x0007264d) list_medium_line_x2_t3_g2_t1

0xb417,	// (0x00072663) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb417,	// (0x00072663) list_medium_line_x2_t3_g2_t2

0xb3ec,	// (0x00072638) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb3ec,	// (0x00072638) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x000764ca) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x000764ca) list_medium_line_x2_t3_g2_t

0xb3b3,	// (0x000725ff) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_x2_t4_g4_g1

0xb429,	// (0x00072675) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb429,	// (0x00072675) list_medium_line_x2_t4_g4_g2

0xb3bf,	// (0x0007260b) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb3bf,	// (0x0007260b) list_medium_line_x2_t4_g4_g3

0xb435,	// (0x00072681) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb435,	// (0x00072681) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x000764d1) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x000764d1) list_medium_line_x2_t4_g4_g

0x2306,	// (0x00069552) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2306,	// (0x00069552) list_medium_line_x2_t4_g4_t1

0x2320,	// (0x0006956c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2320,	// (0x0006956c) list_medium_line_x2_t4_g4_t2

0x2335,	// (0x00069581) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2335,	// (0x00069581) list_medium_line_x2_t4_g4_t3

0xb441,	// (0x0007268d) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb441,	// (0x0007268d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x000764da) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x000764da) list_medium_line_x2_t4_g4_t

0xb3b3,	// (0x000725ff) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_x2_t2_g4_g1

0xb429,	// (0x00072675) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb429,	// (0x00072675) list_medium_line_x2_t2_g4_g2

0xb3bf,	// (0x0007260b) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb3bf,	// (0x0007260b) list_medium_line_x2_t2_g4_g3

0xb3cb,	// (0x00072617) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb3cb,	// (0x00072617) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x00076541) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x00076541) list_medium_line_x2_t2_g4_g

0xb741,	// (0x0007298d) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb741,	// (0x0007298d) list_medium_line_x2_t2_g4_t1

0xb3ec,	// (0x00072638) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb3ec,	// (0x00072638) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0007654a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0007654a) list_medium_line_x2_t2_g4_t

0xb3b3,	// (0x000725ff) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_x2_t2_g3_g1

0xb3bf,	// (0x0007260b) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb3bf,	// (0x0007260b) list_medium_line_x2_t2_g3_g2

0xb3cb,	// (0x00072617) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb3cb,	// (0x00072617) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x000764b7) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x000764b7) list_medium_line_x2_t2_g3_g

0xb756,	// (0x000729a2) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb756,	// (0x000729a2) list_medium_line_x2_t2_g3_t1

0xb3ec,	// (0x00072638) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb3ec,	// (0x00072638) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0007654f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0007654f) list_medium_line_x2_t2_g3_t

0x463c,	// (0x0006b888) main_sp_fs_list_pane_ParamLimits

0x463c,	// (0x0006b888) main_sp_fs_list_pane

0x4649,	// (0x0006b895) sp_fs_scroll_pane_ParamLimits

0x4649,	// (0x0006b895) sp_fs_scroll_pane

0x234a,	// (0x00069596) list_medium_line_x2_t3_t1

0x235a,	// (0x000695a6) list_medium_line_x2_t3_t2

0xb912,	// (0x00072b5e) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0007659a) list_medium_line_x2_t3_t

0x2368,	// (0x000695b4) list_medium_line_x3_t4_t1

0x2378,	// (0x000695c4) list_medium_line_x3_t4_t2

0xb920,	// (0x00072b6c) list_medium_line_x3_t4_t3

0xb92e,	// (0x00072b7a) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x000765a1) list_medium_line_x3_t4_t

0x2386,	// (0x000695d2) list_medium_line_x4_t5_t1

0x2396,	// (0x000695e2) list_medium_line_x4_t5_t2

0xb920,	// (0x00072b6c) list_medium_line_x4_t5_t3

0xb93c,	// (0x00072b88) list_medium_line_x4_t5_t4

0xb92e,	// (0x00072b7a) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x000765aa) list_medium_line_x4_t5_t

0xb3b3,	// (0x000725ff) list_medium_line_t4_g4_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_t4_g4_g1

0xb435,	// (0x00072681) list_medium_line_t4_g4_g2_ParamLimits

0xb435,	// (0x00072681) list_medium_line_t4_g4_g2

0xb94a,	// (0x00072b96) list_medium_line_t4_g4_g3_ParamLimits

0xb94a,	// (0x00072b96) list_medium_line_t4_g4_g3

0xb3cb,	// (0x00072617) list_medium_line_t4_g4_g4_ParamLimits

0xb3cb,	// (0x00072617) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x000765b5) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x000765b5) list_medium_line_t4_g4_g

0xb956,	// (0x00072ba2) list_medium_line_t4_g4_t1_ParamLimits

0xb956,	// (0x00072ba2) list_medium_line_t4_g4_t1

0xb96b,	// (0x00072bb7) list_medium_line_t4_g4_t2_ParamLimits

0xb96b,	// (0x00072bb7) list_medium_line_t4_g4_t2

0xb981,	// (0x00072bcd) list_medium_line_t4_g4_t3_ParamLimits

0xb981,	// (0x00072bcd) list_medium_line_t4_g4_t3

0xb997,	// (0x00072be3) list_medium_line_t4_g4_t4_ParamLimits

0xb997,	// (0x00072be3) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x000765be) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x000765be) list_medium_line_t4_g4_t

0x4717,	// (0x0006b963) chi_dic_find_pane_g1

0x6287,	// (0x0006d4d3) main_tport_pane

0xd2a3,	// (0x000744ef) list_medium_line_plain_t1

0xb3b3,	// (0x000725ff) list_medium_line_t2_g2_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_t2_g2_g1

0xb3bf,	// (0x0007260b) list_medium_line_t2_g2_g2_ParamLimits

0xb3bf,	// (0x0007260b) list_medium_line_t2_g2_g2

0x0001,

0xfa41,	// (0x00076c8d) list_medium_line_t2_g2_g_ParamLimits

0xfa41,	// (0x00076c8d) list_medium_line_t2_g2_g

0x2539,	// (0x00069785) list_medium_line_t2_g2_t1_ParamLimits

0x2539,	// (0x00069785) list_medium_line_t2_g2_t1

0x2550,	// (0x0006979c) list_medium_line_t2_g2_t2_ParamLimits

0x2550,	// (0x0006979c) list_medium_line_t2_g2_t2

0x0001,

0xfa46,	// (0x00076c92) list_medium_line_t2_g2_t_ParamLimits

0xfa46,	// (0x00076c92) list_medium_line_t2_g2_t

0xd5ca,	// (0x00074816) aid_sp_fs_list_icon_a_sm

0xf0d5,	// (0x00076321) aid_sp_fs_list_icon_d

0xd5d2,	// (0x0007481e) aid_sp_fs_text_primary

0xd5db,	// (0x00074827) aid_sp_fs_text_secondary

0xf0dd,	// (0x00076329) list_medium_line

0xf0dd,	// (0x00076329) list_medium_line_g2

0xf0dd,	// (0x00076329) list_medium_line_g3

0xf0dd,	// (0x00076329) list_medium_line_plain

0xf0dd,	// (0x00076329) list_medium_line_plain_t2

0xf0dd,	// (0x00076329) list_medium_line_plain_t3

0xf0dd,	// (0x00076329) list_medium_line_right_icon

0xf0dd,	// (0x00076329) list_medium_line_right_iconx2

0xf0dd,	// (0x00076329) list_medium_line_t2

0xf0dd,	// (0x00076329) list_medium_line_t2_g2

0xf0dd,	// (0x00076329) list_medium_line_t2_g3

0xf0dd,	// (0x00076329) list_medium_line_t2_right_icon

0xf0dd,	// (0x00076329) list_medium_line_t2_right_iconx2

0xf0dd,	// (0x00076329) list_medium_line_t3

0xf0dd,	// (0x00076329) list_medium_line_t3_g2

0xf0dd,	// (0x00076329) list_medium_line_t3_g3

0xf0dd,	// (0x00076329) list_medium_line_t3_right_iconx2

0xd5e4,	// (0x00074830) list_medium_line_t4_g4

0xd5ed,	// (0x00074839) list_medium_line_x2

0xd5ed,	// (0x00074839) list_medium_line_x2_t2_g2

0xd5ed,	// (0x00074839) list_medium_line_x2_t2_g3

0xd5ed,	// (0x00074839) list_medium_line_x2_t2_g4

0xd5ed,	// (0x00074839) list_medium_line_x2_t3

0xd5ed,	// (0x00074839) list_medium_line_x2_t3_g2

0xd5ed,	// (0x00074839) list_medium_line_x2_t3_g3

0xd5ed,	// (0x00074839) list_medium_line_x2_t3_g4

0xd5ed,	// (0x00074839) list_medium_line_x2_t4_g2

0xd5ed,	// (0x00074839) list_medium_line_x2_t4_g4

0xd5f6,	// (0x00074842) list_medium_line_x3

0xd5f6,	// (0x00074842) list_medium_line_x3_t4

0xd5f6,	// (0x00074842) list_medium_line_x3_t4_g4

0xd5e4,	// (0x00074830) list_medium_line_x4_t4

0xd5e4,	// (0x00074830) list_medium_line_x4_t4_g7

0xd5e4,	// (0x00074830) list_medium_line_x4_t5

0xd5ff,	// (0x0007484b) list_single_fs_dyc_pane_ParamLimits

0xd5ff,	// (0x0007484b) list_single_fs_dyc_pane

0xb3b3,	// (0x000725ff) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_x4_t4_g7_g1

0xdaef,	// (0x00074d3b) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdaef,	// (0x00074d3b) list_medium_line_x4_t4_g7_g2

0xdafb,	// (0x00074d47) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdafb,	// (0x00074d47) list_medium_line_x4_t4_g7_g3

0xdb0a,	// (0x00074d56) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdb0a,	// (0x00074d56) list_medium_line_x4_t4_g7_g4

0xdb16,	// (0x00074d62) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdb16,	// (0x00074d62) list_medium_line_x4_t4_g7_g5

0xdb25,	// (0x00074d71) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdb25,	// (0x00074d71) list_medium_line_x4_t4_g7_g6

0xdb34,	// (0x00074d80) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdb34,	// (0x00074d80) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc0b,	// (0x00076e57) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc0b,	// (0x00076e57) list_medium_line_x4_t4_g7_g

0xdb40,	// (0x00074d8c) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdb40,	// (0x00074d8c) list_medium_line_x4_t4_g7_t1

0xdb55,	// (0x00074da1) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdb55,	// (0x00074da1) list_medium_line_x4_t4_g7_t2

0xdb6a,	// (0x00074db6) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdb6a,	// (0x00074db6) list_medium_line_x4_t4_g7_t3

0xdb7f,	// (0x00074dcb) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdb7f,	// (0x00074dcb) list_medium_line_x4_t4_g7_t4

0xdb91,	// (0x00074ddd) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdb91,	// (0x00074ddd) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc1a,	// (0x00076e66) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc1a,	// (0x00076e66) list_medium_line_x4_t4_g7_t

0xdba3,	// (0x00074def) list_single_dyc_row_pane_ParamLimits

0xdba3,	// (0x00074def) list_single_dyc_row_pane

0x9e41,	// (0x0007108d) call5_gesture_pane_ParamLimits

0x9e41,	// (0x0007108d) call5_gesture_pane

0x9e89,	// (0x000710d5) call5_windows_pane_ParamLimits

0x9e89,	// (0x000710d5) call5_windows_pane

0x9f22,	// (0x0007116e) call5_swipe_1_pane_cp_ParamLimits

0x9f22,	// (0x0007116e) call5_swipe_1_pane_cp

0x9f2e,	// (0x0007117a) call5_swipe_2_pane_cp_ParamLimits

0x9f2e,	// (0x0007117a) call5_swipe_2_pane_cp

0x4af2,	// (0x0006bd3e) call5_image_pane_cp

0x9f3a,	// (0x00071186) popup_call5_audio_first_window_cp_ParamLimits

0x9f3a,	// (0x00071186) popup_call5_audio_first_window_cp

0xe169,	// (0x000753b5) call5_swipe_1_pane_g1_cp_ParamLimits

0xe169,	// (0x000753b5) call5_swipe_1_pane_g1_cp

0xe1a9,	// (0x000753f5) call5_swipe_1_pane_g2_cp

0xe182,	// (0x000753ce) call5_swipe_1_pane_t1_cp_ParamLimits

0xe182,	// (0x000753ce) call5_swipe_1_pane_t1_cp

0xe169,	// (0x000753b5) call5_swipe_2_pane_g1_cp_ParamLimits

0xe169,	// (0x000753b5) call5_swipe_2_pane_g1_cp

0xe1b1,	// (0x000753fd) call5_swipe_2_pane_g2_cp

0xe1b9,	// (0x00075405) call5_swipe_2_pane_t1_cp_ParamLimits

0xe1b9,	// (0x00075405) call5_swipe_2_pane_t1_cp

0x1080,	// (0x000682cc) main_sp_fs_email_pane

0xe1ce,	// (0x0007541a) main_sp_fs_listscroll_pane_te

0x9f46,	// (0x00071192) popup_sp_fs_action_menu_pane_ParamLimits

0x9f46,	// (0x00071192) popup_sp_fs_action_menu_pane

0xc692,	// (0x000738de) bg_sp_fs_ctrlbar_pane_g1

0xe1d7,	// (0x00075423) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe1e0,	// (0x0007542c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe1e9,	// (0x00075435) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc692,	// (0x000738de) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd03,	// (0x00076f4f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc47f,	// (0x000736cb) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc47f,	// (0x000736cb) bg_sp_fs_ctrlbar_ddmenu_pane

0xe1f2,	// (0x0007543e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe1f2,	// (0x0007543e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x10ae,	// (0x000682fa) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x10ae,	// (0x000682fa) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd0c,	// (0x00076f58) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd0c,	// (0x00076f58) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe1fe,	// (0x0007544a) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe1fe,	// (0x0007544a) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe218,	// (0x00075464) list_medium_line_t2_right_icon_g1

0xe220,	// (0x0007546c) list_medium_line_t2_right_icon_t1

0x26e7,	// (0x00069933) list_medium_line_t2_right_icon_t2

0x0001,

0xfd11,	// (0x00076f5d) list_medium_line_t2_right_icon_t

0xc257,	// (0x000734a3) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc257,	// (0x000734a3) bg_sp_fs_ctrlbar_pane

0x9fbf,	// (0x0007120b) main_sp_fs_ctrlbar_button_pane_cp01

0x9fc7,	// (0x00071213) main_sp_fs_ctrlbar_ddmenu_pane

0xe268,	// (0x000754b4) main_sp_fs_ctrlbar_pane_g1

0xe274,	// (0x000754c0) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd16,	// (0x00076f62) main_sp_fs_ctrlbar_pane_g

0xe280,	// (0x000754cc) main_sp_fs_ctrlbar_pane_t1

0x26f5,	// (0x00069941) main_sp_fs_ctrlbar_pane

0x2716,	// (0x00069962) main_sp_fs_listscroll_pane_te_cp01

0x2736,	// (0x00069982) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x2736,	// (0x00069982) popup_sp_fs_action_menu_pane_cp01

0x1080,	// (0x000682cc) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1080,	// (0x000682cc) bg_sp_fs_highlight_list_pane_cp01

0x275b,	// (0x000699a7) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x275b,	// (0x000699a7) sp_fs_action_menu_list_gene_pane_g1

0xe295,	// (0x000754e1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe295,	// (0x000754e1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd1b,	// (0x00076f67) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd1b,	// (0x00076f67) sp_fs_action_menu_list_gene_pane_g

0x276a,	// (0x000699b6) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x276a,	// (0x000699b6) sp_fs_action_menu_list_gene_pane_t1

0x9fd1,	// (0x0007121d) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9fd1,	// (0x0007121d) sp_fs_action_menu_list_gene_pane

0xe2a2,	// (0x000754ee) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe2a2,	// (0x000754ee) popup_sp_fs_action_menu_bg_pane

0x9fee,	// (0x0007123a) sp_fs_action_menu_list_pane_ParamLimits

0x9fee,	// (0x0007123a) sp_fs_action_menu_list_pane

0xe2b0,	// (0x000754fc) sp_fs_scroll_pane_cp01_ParamLimits

0xe2b0,	// (0x000754fc) sp_fs_scroll_pane_cp01

0x2782,	// (0x000699ce) list_medium_line_plain_t2_t1

0x2792,	// (0x000699de) list_medium_line_plain_t2_t2

0x0001,

0xfd20,	// (0x00076f6c) list_medium_line_plain_t2_t

0x27a0,	// (0x000699ec) list_medium_line_plain_t3_t1

0x27b0,	// (0x000699fc) list_medium_line_plain_t3_t2

0x27be,	// (0x00069a0a) list_medium_line_plain_t3_t3

0x0002,

0xfd25,	// (0x00076f71) list_medium_line_plain_t3_t

0xb3b3,	// (0x000725ff) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_x2_t2_g2_g1

0xb3cb,	// (0x00072617) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb3cb,	// (0x00072617) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x000764c5) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x000764c5) list_medium_line_x2_t2_g2_g

0xb956,	// (0x00072ba2) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb956,	// (0x00072ba2) list_medium_line_x2_t2_g2_t1

0xb3ec,	// (0x00072638) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb3ec,	// (0x00072638) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd2c,	// (0x00076f78) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd2c,	// (0x00076f78) list_medium_line_x2_t2_g2_t

0xb3b3,	// (0x000725ff) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_x2_t4_g2_g1

0xe2d6,	// (0x00075522) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe2d6,	// (0x00075522) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd31,	// (0x00076f7d) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd31,	// (0x00076f7d) list_medium_line_x2_t4_g2_g

0x27cc,	// (0x00069a18) list_medium_line_x2_t4_g2_t1_ParamLimits

0x27cc,	// (0x00069a18) list_medium_line_x2_t4_g2_t1

0x27e6,	// (0x00069a32) list_medium_line_x2_t4_g2_t2_ParamLimits

0x27e6,	// (0x00069a32) list_medium_line_x2_t4_g2_t2

0x27fb,	// (0x00069a47) list_medium_line_x2_t4_g2_t3_ParamLimits

0x27fb,	// (0x00069a47) list_medium_line_x2_t4_g2_t3

0xb3ec,	// (0x00072638) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb3ec,	// (0x00072638) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd36,	// (0x00076f82) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd36,	// (0x00076f82) list_medium_line_x2_t4_g2_t

0xe2e8,	// (0x00075534) list_medium_line_t3_right_iconx2_g1

0xe218,	// (0x00075464) list_medium_line_t3_right_iconx2_g2

0x2810,	// (0x00069a5c) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd3f,	// (0x00076f8b) list_medium_line_t3_right_iconx2_g

0x2818,	// (0x00069a64) list_medium_line_t3_right_iconx2_t1

0x2828,	// (0x00069a74) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd46,	// (0x00076f92) list_medium_line_t3_right_iconx2_t

0xb3b3,	// (0x000725ff) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_x3_t4_g4_g1

0xb3bf,	// (0x0007260b) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb3bf,	// (0x0007260b) list_medium_line_x3_t4_g4_g2

0xb435,	// (0x00072681) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb435,	// (0x00072681) list_medium_line_x3_t4_g4_g3

0xe2f0,	// (0x0007553c) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe2f0,	// (0x0007553c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd4b,	// (0x00076f97) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd4b,	// (0x00076f97) list_medium_line_x3_t4_g4_g

0x2539,	// (0x00069785) list_medium_line_x3_t4_g4_t1_ParamLimits

0x2539,	// (0x00069785) list_medium_line_x3_t4_g4_t1

0x2550,	// (0x0006979c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x2550,	// (0x0006979c) list_medium_line_x3_t4_g4_t2

0xe2fc,	// (0x00075548) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe2fc,	// (0x00075548) list_medium_line_x3_t4_g4_t3

0xe311,	// (0x0007555d) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe311,	// (0x0007555d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd54,	// (0x00076fa0) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd54,	// (0x00076fa0) list_medium_line_x3_t4_g4_t

0x2836,	// (0x00069a82) list_single_dyc_row_text_pane_t1_ParamLimits

0x2836,	// (0x00069a82) list_single_dyc_row_text_pane_t1

0x286d,	// (0x00069ab9) list_single_dyc_row_text_pane_t2_ParamLimits

0x286d,	// (0x00069ab9) list_single_dyc_row_text_pane_t2

0xe32e,	// (0x0007557a) list_single_dyc_row_text_pane_t3_ParamLimits

0xe32e,	// (0x0007557a) list_single_dyc_row_text_pane_t3

0x0002,

0xfd5d,	// (0x00076fa9) list_single_dyc_row_text_pane_t_ParamLimits

0xfd5d,	// (0x00076fa9) list_single_dyc_row_text_pane_t

0xe340,	// (0x0007558c) list_single_dyc_row_pane_g1_ParamLimits

0xe340,	// (0x0007558c) list_single_dyc_row_pane_g1

0xe34c,	// (0x00075598) list_single_dyc_row_pane_g2_ParamLimits

0xe34c,	// (0x00075598) list_single_dyc_row_pane_g2

0xe358,	// (0x000755a4) list_single_dyc_row_pane_g3_ParamLimits

0xe358,	// (0x000755a4) list_single_dyc_row_pane_g3

0xe364,	// (0x000755b0) list_single_dyc_row_pane_g4_ParamLimits

0xe364,	// (0x000755b0) list_single_dyc_row_pane_g4

0x0003,

0xfd64,	// (0x00076fb0) list_single_dyc_row_pane_g_ParamLimits

0xfd64,	// (0x00076fb0) list_single_dyc_row_pane_g

0xe370,	// (0x000755bc) list_single_dyc_row_text_pane_ParamLimits

0xe370,	// (0x000755bc) list_single_dyc_row_text_pane

0xa8d9,	// (0x00071b25) bg_sp_fs_scroll_pane

0xe38f,	// (0x000755db) thumb_sp_fs_scroll_pane

0xb3b3,	// (0x000725ff) list_medium_line_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_g1

0xb956,	// (0x00072ba2) list_medium_line_t1_ParamLimits

0xb956,	// (0x00072ba2) list_medium_line_t1

0xb3b3,	// (0x000725ff) list_medium_line_x2_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_x2_g1

0xb3bf,	// (0x0007260b) list_medium_line_x2_g2_ParamLimits

0xb3bf,	// (0x0007260b) list_medium_line_x2_g2

0x0001,

0xfa41,	// (0x00076c8d) list_medium_line_x2_g_ParamLimits

0xfa41,	// (0x00076c8d) list_medium_line_x2_g

0xe398,	// (0x000755e4) list_medium_line_x2_t1_ParamLimits

0xe398,	// (0x000755e4) list_medium_line_x2_t1

0xb3b3,	// (0x000725ff) list_medium_line_x3_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_x3_g1

0xb3bf,	// (0x0007260b) list_medium_line_x3_g2_ParamLimits

0xb3bf,	// (0x0007260b) list_medium_line_x3_g2

0x0001,

0xfa41,	// (0x00076c8d) list_medium_line_x3_g_ParamLimits

0xfa41,	// (0x00076c8d) list_medium_line_x3_g

0xe398,	// (0x000755e4) list_medium_line_x3_t1_ParamLimits

0xe398,	// (0x000755e4) list_medium_line_x3_t1

0xe3ae,	// (0x000755fa) thumb_sp_fs_scroll_pane_g1

0xe3b7,	// (0x00075603) thumb_sp_fs_scroll_pane_g2

0xe3c0,	// (0x0007560c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd6d,	// (0x00076fb9) thumb_sp_fs_scroll_pane_g

0xe3ae,	// (0x000755fa) bg_sp_fs_scroll_pane_g1

0xe3b7,	// (0x00075603) bg_sp_fs_scroll_pane_g2

0xe3c0,	// (0x0007560c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd6d,	// (0x00076fb9) bg_sp_fs_scroll_pane_g

0xb3b3,	// (0x000725ff) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_x2_t3_g4_g1

0xb429,	// (0x00072675) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb429,	// (0x00072675) list_medium_line_x2_t3_g4_g2

0xb3bf,	// (0x0007260b) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb3bf,	// (0x0007260b) list_medium_line_x2_t3_g4_g3

0xb3cb,	// (0x00072617) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb3cb,	// (0x00072617) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x00076541) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x00076541) list_medium_line_x2_t3_g4_g

0x28c7,	// (0x00069b13) list_medium_line_x2_t3_g4_t1_ParamLimits

0x28c7,	// (0x00069b13) list_medium_line_x2_t3_g4_t1

0x28dd,	// (0x00069b29) list_medium_line_x2_t3_g4_t2_ParamLimits

0x28dd,	// (0x00069b29) list_medium_line_x2_t3_g4_t2

0xb3ec,	// (0x00072638) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb3ec,	// (0x00072638) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd74,	// (0x00076fc0) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd74,	// (0x00076fc0) list_medium_line_x2_t3_g4_t

0xb3b3,	// (0x000725ff) list_medium_line_g2_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_g2_g1

0xb3bf,	// (0x0007260b) list_medium_line_g2_g2_ParamLimits

0xb3bf,	// (0x0007260b) list_medium_line_g2_g2

0x0001,

0xfa41,	// (0x00076c8d) list_medium_line_g2_g_ParamLimits

0xfa41,	// (0x00076c8d) list_medium_line_g2_g

0xb756,	// (0x000729a2) list_medium_line_g2_t1_ParamLimits

0xb756,	// (0x000729a2) list_medium_line_g2_t1

0xb3b3,	// (0x000725ff) list_medium_line_t3_g2_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_t3_g2_g1

0xb3bf,	// (0x0007260b) list_medium_line_t3_g2_g2_ParamLimits

0xb3bf,	// (0x0007260b) list_medium_line_t3_g2_g2

0x0001,

0xfa41,	// (0x00076c8d) list_medium_line_t3_g2_g_ParamLimits

0xfa41,	// (0x00076c8d) list_medium_line_t3_g2_g

0x28f6,	// (0x00069b42) list_medium_line_t3_g2_t1_ParamLimits

0x28f6,	// (0x00069b42) list_medium_line_t3_g2_t1

0x290d,	// (0x00069b59) list_medium_line_t3_g2_t2_ParamLimits

0x290d,	// (0x00069b59) list_medium_line_t3_g2_t2

0x2922,	// (0x00069b6e) list_medium_line_t3_g2_t3_ParamLimits

0x2922,	// (0x00069b6e) list_medium_line_t3_g2_t3

0x0002,

0xfd7b,	// (0x00076fc7) list_medium_line_t3_g2_t_ParamLimits

0xfd7b,	// (0x00076fc7) list_medium_line_t3_g2_t

0xe218,	// (0x00075464) list_medium_line_right_icon_g1

0xe3c9,	// (0x00075615) list_medium_line_right_icon_t1

0xb3b3,	// (0x000725ff) list_medium_line_t2_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_t2_g1

0xe3d7,	// (0x00075623) list_medium_line_t2_t1_ParamLimits

0xe3d7,	// (0x00075623) list_medium_line_t2_t1

0x2937,	// (0x00069b83) list_medium_line_t2_t2_ParamLimits

0x2937,	// (0x00069b83) list_medium_line_t2_t2

0x0001,

0xfd82,	// (0x00076fce) list_medium_line_t2_t_ParamLimits

0xfd82,	// (0x00076fce) list_medium_line_t2_t

0xb3b3,	// (0x000725ff) list_medium_line_t3_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_t3_g1

0x294c,	// (0x00069b98) list_medium_line_t3_t1_ParamLimits

0x294c,	// (0x00069b98) list_medium_line_t3_t1

0x2963,	// (0x00069baf) list_medium_line_t3_t2_ParamLimits

0x2963,	// (0x00069baf) list_medium_line_t3_t2

0x2978,	// (0x00069bc4) list_medium_line_t3_t3_ParamLimits

0x2978,	// (0x00069bc4) list_medium_line_t3_t3

0x0002,

0xfd87,	// (0x00076fd3) list_medium_line_t3_t_ParamLimits

0xfd87,	// (0x00076fd3) list_medium_line_t3_t

0xb3b3,	// (0x000725ff) list_medium_line_g3_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_g3_g1

0xb429,	// (0x00072675) list_medium_line_g3_g2_ParamLimits

0xb429,	// (0x00072675) list_medium_line_g3_g2

0xb3bf,	// (0x0007260b) list_medium_line_g3_g3_ParamLimits

0xb3bf,	// (0x0007260b) list_medium_line_g3_g3

0x0002,

0xfd8e,	// (0x00076fda) list_medium_line_g3_g_ParamLimits

0xfd8e,	// (0x00076fda) list_medium_line_g3_g

0xb741,	// (0x0007298d) list_medium_line_g3_t1_ParamLimits

0xb741,	// (0x0007298d) list_medium_line_g3_t1

0xb3b3,	// (0x000725ff) list_medium_line_t2_g3_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_t2_g3_g1

0xb429,	// (0x00072675) list_medium_line_t2_g3_g2_ParamLimits

0xb429,	// (0x00072675) list_medium_line_t2_g3_g2

0xb3bf,	// (0x0007260b) list_medium_line_t2_g3_g3_ParamLimits

0xb3bf,	// (0x0007260b) list_medium_line_t2_g3_g3

0x0002,

0xfd8e,	// (0x00076fda) list_medium_line_t2_g3_g_ParamLimits

0xfd8e,	// (0x00076fda) list_medium_line_t2_g3_g

0x298a,	// (0x00069bd6) list_medium_line_t2_g3_t1_ParamLimits

0x298a,	// (0x00069bd6) list_medium_line_t2_g3_t1

0x29a1,	// (0x00069bed) list_medium_line_t2_g3_t2_ParamLimits

0x29a1,	// (0x00069bed) list_medium_line_t2_g3_t2

0x0001,

0xfd95,	// (0x00076fe1) list_medium_line_t2_g3_t_ParamLimits

0xfd95,	// (0x00076fe1) list_medium_line_t2_g3_t

0xb3b3,	// (0x000725ff) list_medium_line_t3_g3_g1_ParamLimits

0xb3b3,	// (0x000725ff) list_medium_line_t3_g3_g1

0xb429,	// (0x00072675) list_medium_line_t3_g3_g2_ParamLimits

0xb429,	// (0x00072675) list_medium_line_t3_g3_g2

0xb3bf,	// (0x0007260b) list_medium_line_t3_g3_g3_ParamLimits

0xb3bf,	// (0x0007260b) list_medium_line_t3_g3_g3

0x0002,

0xfd8e,	// (0x00076fda) list_medium_line_t3_g3_g_ParamLimits

0xfd8e,	// (0x00076fda) list_medium_line_t3_g3_g

0x29b6,	// (0x00069c02) list_medium_line_t3_g3_t1_ParamLimits

0x29b6,	// (0x00069c02) list_medium_line_t3_g3_t1

0x29ca,	// (0x00069c16) list_medium_line_t3_g3_t2_ParamLimits

0x29ca,	// (0x00069c16) list_medium_line_t3_g3_t2

0x29dc,	// (0x00069c28) list_medium_line_t3_g3_t3_ParamLimits

0x29dc,	// (0x00069c28) list_medium_line_t3_g3_t3

0x0002,

0xfd9a,	// (0x00076fe6) list_medium_line_t3_g3_t_ParamLimits

0xfd9a,	// (0x00076fe6) list_medium_line_t3_g3_t

0xe2e8,	// (0x00075534) list_medium_line_right_iconx2_g1

0xe218,	// (0x00075464) list_medium_line_right_iconx2_g2

0x0001,

0xfda1,	// (0x00076fed) list_medium_line_right_iconx2_g

0xe3f1,	// (0x0007563d) list_medium_line_right_iconx2_t1

0xe2e8,	// (0x00075534) list_medium_line_t2_right_iconx2_g1

0xe218,	// (0x00075464) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfda1,	// (0x00076fed) list_medium_line_t2_right_iconx2_g

0x29ee,	// (0x00069c3a) list_medium_line_t2_right_iconx2_t1

0x29fe,	// (0x00069c4a) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfda6,	// (0x00076ff2) list_medium_line_t2_right_iconx2_t

0xd2a3,	// (0x000744ef) list_medium_line_x4_t4_t1

0x2a0c,	// (0x00069c58) list_medium_line_x4_t4_t2

0x2a1c,	// (0x00069c68) list_medium_line_x4_t4_t3

0x2a2c,	// (0x00069c78) list_medium_line_x4_t4_t4

0x0003,

0xfdab,	// (0x00076ff7) list_medium_line_x4_t4_t

0xa045,	// (0x00071291) tport_appsw_pane_ParamLimits

0xa045,	// (0x00071291) tport_appsw_pane

0xa056,	// (0x000712a2) tport_contact_pane_ParamLimits

0xa056,	// (0x000712a2) tport_contact_pane

0xa06b,	// (0x000712b7) tport_listscroll_pane_ParamLimits

0xa06b,	// (0x000712b7) tport_listscroll_pane

0xa084,	// (0x000712d0) cell_tport_appsw_pane_ParamLimits

0xa084,	// (0x000712d0) cell_tport_appsw_pane

0xd004,	// (0x00074250) tport_appsw_pane_g1_ParamLimits

0xd004,	// (0x00074250) tport_appsw_pane_g1

0xe3ff,	// (0x0007564b) tport_contact_pane_g1

0xe408,	// (0x00075654) tport_contact_pane_t1

0xe416,	// (0x00075662) tport_contact_pane_t2

0x0001,

0xfdb4,	// (0x00077000) tport_contact_pane_t

0xe424,	// (0x00075670) list_tport_pane

0xb1ee,	// (0x0007243a) scroll_pane_cp_030

0xe435,	// (0x00075681) cell_tport_appsw_pane_g1

0xe445,	// (0x00075691) cell_tport_appsw_pane_t1

0xa8d9,	// (0x00071b25) grid_highlight_pane_cp019

0xa0ba,	// (0x00071306) list_tport_double_graphic_pane_ParamLimits

0xa0ba,	// (0x00071306) list_tport_double_graphic_pane

0x1080,	// (0x000682cc) list_highlight_pane_cp023_ParamLimits

0x1080,	// (0x000682cc) list_highlight_pane_cp023

0xa0c7,	// (0x00071313) list_tport_double_graphic_pane_g1_ParamLimits

0xa0c7,	// (0x00071313) list_tport_double_graphic_pane_g1

0xa0d4,	// (0x00071320) list_tport_double_graphic_pane_t1_ParamLimits

0xa0d4,	// (0x00071320) list_tport_double_graphic_pane_t1

0xa0e9,	// (0x00071335) list_tport_double_graphic_pane_t2_ParamLimits

0xa0e9,	// (0x00071335) list_tport_double_graphic_pane_t2

0x0001,

0xfdc0,	// (0x0007700c) list_tport_double_graphic_pane_t_ParamLimits

0xfdc0,	// (0x0007700c) list_tport_double_graphic_pane_t

0xa8d9,	// (0x00071b25) main_cale_note_pane

0x866f,	// (0x0006f8bb) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x866f,	// (0x0006f8bb) cell_vitu2_function_top_wide_pane_cp01

0x9bad,	// (0x00070df9) wait_bar_pane_cp05_ParamLimits

0xa8d9,	// (0x00071b25) listscroll_cmail_pane

0xe453,	// (0x0007569f) list_cmail_pane

0xa0fb,	// (0x00071347) list_cmail_body_pane

0xa0fb,	// (0x00071347) list_single_cmail_header_caption_pane

0xa111,	// (0x0007135d) list_single_cmail_header_detail_pane_ParamLimits

0xa111,	// (0x0007135d) list_single_cmail_header_detail_pane

0xe46f,	// (0x000756bb) list_single_cmail_header_caption_pane_t1

0x2a3c,	// (0x00069c88) list_single_cmail_header_detail_pane_g1_ParamLimits

0x2a3c,	// (0x00069c88) list_single_cmail_header_detail_pane_g1

0x01ac,	// (0x000673f8) list_single_cmail_header_detail_pane_g2_ParamLimits

0x01ac,	// (0x000673f8) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdc5,	// (0x00077011) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdc5,	// (0x00077011) list_single_cmail_header_detail_pane_g

0xe492,	// (0x000756de) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe492,	// (0x000756de) list_single_cmail_header_detail_pane_t1

0xe4c4,	// (0x00075710) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe4c4,	// (0x00075710) list_single_cmail_header_editor_pane_bg

0xe4d6,	// (0x00075722) list_cmail_body_pane_g1

0xe4df,	// (0x0007572b) list_cmail_body_pane_t1

0xd05c,	// (0x000742a8) list_single_cmail_header_editor_pane_bg_g1

0xb65f,	// (0x000728ab) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd06c,	// (0x000742b8) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd064,	// (0x000742b0) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd2b1,	// (0x000744fd) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd08c,	// (0x000742d8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd07c,	// (0x000742c8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd084,	// (0x000742d0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb63f,	// (0x0007288b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa139,	// (0x00071385) calenote_gesture_pane_ParamLimits

0xa139,	// (0x00071385) calenote_gesture_pane

0xa155,	// (0x000713a1) calenote_window_pane_ParamLimits

0xa155,	// (0x000713a1) calenote_window_pane

0x01e8,	// (0x00067434) popup_note_window_cp01

0xa171,	// (0x000713bd) calenote_swipe_1_pane_ParamLimits

0xa171,	// (0x000713bd) calenote_swipe_1_pane

0x9f2e,	// (0x0007117a) calenote_swipe_2_pane_ParamLimits

0x9f2e,	// (0x0007117a) calenote_swipe_2_pane

0xe169,	// (0x000753b5) calenote_swipe_1_pane_g1_ParamLimits

0xe169,	// (0x000753b5) calenote_swipe_1_pane_g1

0xe176,	// (0x000753c2) calenote_swipe_1_pane_g2_ParamLimits

0xe176,	// (0x000753c2) calenote_swipe_1_pane_g2

0x0001,

0xfcf9,	// (0x00076f45) calenote_swipe_1_pane_g_ParamLimits

0xfcf9,	// (0x00076f45) calenote_swipe_1_pane_g

0x020d,	// (0x00067459) calenote_swipe_1_pane_t1_ParamLimits

0x020d,	// (0x00067459) calenote_swipe_1_pane_t1

0xe169,	// (0x000753b5) calenote_swipe_2_pane_g1_ParamLimits

0xe169,	// (0x000753b5) calenote_swipe_2_pane_g1

0x022c,	// (0x00067478) calenote_swipe_2_pane_g2_ParamLimits

0x022c,	// (0x00067478) calenote_swipe_2_pane_g2

0x0001,

0xfdd1,	// (0x0007701d) calenote_swipe_2_pane_g_ParamLimits

0xfdd1,	// (0x0007701d) calenote_swipe_2_pane_g

0x0238,	// (0x00067484) calenote_swipe_2_pane_t1_ParamLimits

0x0238,	// (0x00067484) calenote_swipe_2_pane_t1

0xa8d9,	// (0x00071b25) main_mup_navstr_pane

0x7453,	// (0x0006e69f) main_mup3_pane_t7_ParamLimits

0x7453,	// (0x0006e69f) main_mup3_pane_t7

0xedc2,	// (0x0007600e) main_mp4_pane_g6_ParamLimits

0xedc2,	// (0x0007600e) main_mp4_pane_g6

0xef5c,	// (0x000761a8) main_image3_pane_t4_ParamLimits

0xef5c,	// (0x000761a8) main_image3_pane_t4

0xa186,	// (0x000713d2) popup_navstr_preview_pane_ParamLimits

0xa186,	// (0x000713d2) popup_navstr_preview_pane

0xa196,	// (0x000713e2) scroll_navstr_pane_ParamLimits

0xa196,	// (0x000713e2) scroll_navstr_pane

0xa8d9,	// (0x00071b25) bg_popup_preview_window_pane_cp04

0x0277,	// (0x000674c3) popup_navstr_preview_pane_t1

0xa1aa,	// (0x000713f6) scroll_navstr_pane_g1_ParamLimits

0xa1aa,	// (0x000713f6) scroll_navstr_pane_g1

0xa1be,	// (0x0007140a) scroll_navstr_pane_t1_ParamLimits

0xa1be,	// (0x0007140a) scroll_navstr_pane_t1

0x0204,	// (0x00067450) bg_button_pane_cp014

0x0204,	// (0x00067450) bg_button_pane_cp030

0x268d,	// (0x000698d9) list_double_fisheye_pane_g4_ParamLimits

0x268d,	// (0x000698d9) list_double_fisheye_pane_g4

0x2699,	// (0x000698e5) list_double_fisheye_pane_g5_ParamLimits

0x2699,	// (0x000698e5) list_double_fisheye_pane_g5

0xe463,	// (0x000756af) sp_fs_scroll_pane_cp03

0xe268,	// (0x000754b4) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe274,	// (0x000754c0) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd16,	// (0x00076f62) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe280,	// (0x000754cc) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe45b,	// (0x000756a7) sp_fs_scroll_pane_cp02

0xb248,	// (0x00072494) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xb248,	// (0x00072494) popup_sp_fs_calendar_preview_list_single_pane

0xa8d9,	// (0x00071b25) main_cam6_pano_pane

0x1080,	// (0x000682cc) main_mup3_pane_ParamLimits

0xa8d9,	// (0x00071b25) main_phacti_pane

0x9aa0,	// (0x00070cec) bg_button_pane_cp11

0x9ab8,	// (0x00070d04) main_mobtv_info_pane_g2_ParamLimits

0x9ab8,	// (0x00070d04) main_mobtv_info_pane_g2

0x0001,

0xfc76,	// (0x00076ec2) main_mobtv_info_pane_g_ParamLimits

0xfc76,	// (0x00076ec2) main_mobtv_info_pane_g

0x9c6b,	// (0x00070eb7) sc_clock_pane_t5_ParamLimits

0x9c6b,	// (0x00070eb7) sc_clock_pane_t5

0x9cde,	// (0x00070f2a) main_radioblah_pane_g1_ParamLimits

0xe0a3,	// (0x000752ef) main_radioblah_pane_t3_ParamLimits

0xe0a3,	// (0x000752ef) main_radioblah_pane_t3

0xe0bb,	// (0x00075307) main_radioblah_pane_t4_ParamLimits

0xe0bb,	// (0x00075307) main_radioblah_pane_t4

0x9d06,	// (0x00070f52) main_radioblah_text_pane_ParamLimits

0x9d06,	// (0x00070f52) main_radioblah_text_pane

0x9d18,	// (0x00070f64) main_radioblah_info_pane_g1_ParamLimits

0x9dab,	// (0x00070ff7) main_radioblah_info_pane_t4_ParamLimits

0x9dab,	// (0x00070ff7) main_radioblah_info_pane_t4

0x1080,	// (0x000682cc) main_sp_fs_calendar_pane

0xa1d4,	// (0x00071420) main_phacti_pane_g1

0xa1dc,	// (0x00071428) phacti_note_pane_ParamLimits

0xa1dc,	// (0x00071428) phacti_note_pane

0x02c9,	// (0x00067515) phacti_term_pane_ParamLimits

0x02c9,	// (0x00067515) phacti_term_pane

0x02de,	// (0x0006752a) phacti_note_pane_t1_ParamLimits

0x02de,	// (0x0006752a) phacti_note_pane_t1

0xe4ed,	// (0x00075739) phacti_term_pane_g1

0xe4f5,	// (0x00075741) phacti_term_pane_t1_ParamLimits

0xe4f5,	// (0x00075741) phacti_term_pane_t1

0x02f5,	// (0x00067541) popup_sp_fs_calendar_preview_list_single_pane_g1

0x02fd,	// (0x00067549) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfddb,	// (0x00077027) popup_sp_fs_calendar_preview_list_single_pane_g

0x0305,	// (0x00067551) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0305,	// (0x00067551) popup_sp_fs_calendar_preview_list_single_pane_t1

0x031b,	// (0x00067567) aid_popup_sp_fs_bg_corner_pane

0xc692,	// (0x000738de) popup_sp_fs_calendar_preview_bg_pane_g1

0xa8d9,	// (0x00071b25) popup_sp_fs_calendar_preview_bg_pane

0x0323,	// (0x0006756f) popup_sp_fs_calendar_preview_list_pane

0x1080,	// (0x000682cc) bg_main_sp_fs_cale_pane_ParamLimits

0x1080,	// (0x000682cc) bg_main_sp_fs_cale_pane

0xe51f,	// (0x0007576b) listscroll_cale_mrui_pane_ParamLimits

0xe51f,	// (0x0007576b) listscroll_cale_mrui_pane

0xd0cc,	// (0x00074318) listscroll_sp_fs_schedule_track_pane

0xe533,	// (0x0007577f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe533,	// (0x0007577f) main_sp_fs_ctrlbar_pane_cp01

0x0352,	// (0x0006759e) main_sp_fs_ribbon_pane

0xe544,	// (0x00075790) popup_sp_fs_cale_preview_window

0xa22b,	// (0x00071477) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa22b,	// (0x00071477) list_single_sp_fs_schedule_track_pane

0x1080,	// (0x000682cc) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1080,	// (0x000682cc) bg_sp_fs_highlight_list_pane_cp03

0xa23e,	// (0x0007148a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa23e,	// (0x0007148a) list_single_sp_fs_schedule_track_pane_g1

0xa24a,	// (0x00071496) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa24a,	// (0x00071496) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfde0,	// (0x0007702c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfde0,	// (0x0007702c) list_single_sp_fs_schedule_track_pane_g

0xa256,	// (0x000714a2) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa256,	// (0x000714a2) list_single_sp_fs_schedule_track_pane_t1

0xa270,	// (0x000714bc) sp_fs_schedule_track_pane_ParamLimits

0xa270,	// (0x000714bc) sp_fs_schedule_track_pane

0x03af,	// (0x000675fb) sp_fs_schedule_track_pane_g1

0x03b7,	// (0x00067603) sp_fs_schedule_track_pane_g2

0x03bf,	// (0x0006760b) sp_fs_schedule_track_pane_g3

0x03c7,	// (0x00067613) sp_fs_schedule_track_pane_g4

0x03cf,	// (0x0006761b) sp_fs_schedule_track_pane_g5

0x0004,

0xfde5,	// (0x00077031) sp_fs_schedule_track_pane_g

0xd05c,	// (0x000742a8) bg_sp_fs_schedule_viewer_highlight_g1

0xb65f,	// (0x000728ab) bg_sp_fs_schedule_viewer_highlight_g2

0xd064,	// (0x000742b0) bg_sp_fs_schedule_viewer_highlight_g3

0xd06c,	// (0x000742b8) bg_sp_fs_schedule_viewer_highlight_g4

0xd2b1,	// (0x000744fd) bg_sp_fs_schedule_viewer_highlight_g5

0xd07c,	// (0x000742c8) bg_sp_fs_schedule_viewer_highlight_g6

0xd084,	// (0x000742d0) bg_sp_fs_schedule_viewer_highlight_g7

0xd08c,	// (0x000742d8) bg_sp_fs_schedule_viewer_highlight_g8

0xb63f,	// (0x0007288b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdf0,	// (0x0007703c) bg_sp_fs_schedule_viewer_highlight_g

0xa8d9,	// (0x00071b25) bg_main_sp_fs_ribbon_pane

0xa281,	// (0x000714cd) main_sp_fs_ribbon_pane_g1

0x03d7,	// (0x00067623) main_sp_fs_ribbon_pane_t1

0xa28a,	// (0x000714d6) main_sp_fs_ribbon_pane_t2

0x03f5,	// (0x00067641) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe03,	// (0x0007704f) main_sp_fs_ribbon_pane_t

0x0404,	// (0x00067650) main_sp_fs_ribbon_scheduler_pane

0x040c,	// (0x00067658) bg_main_sp_fs_ribbon_pane_g1

0x0415,	// (0x00067661) bg_main_sp_fs_ribbon_pane_g2

0x041e,	// (0x0006766a) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe0a,	// (0x00077056) bg_main_sp_fs_ribbon_pane_g

0x0426,	// (0x00067672) main_sp_fs_ribbon_scheduler_pane_g1

0x042f,	// (0x0006767b) main_sp_fs_ribbon_scheduler_pane_g2

0x0438,	// (0x00067684) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe11,	// (0x0007705d) main_sp_fs_ribbon_scheduler_pane_g

0xe115,	// (0x00075361) list_cale_mrui_pane

0x0441,	// (0x0006768d) sp_fs_scroll_pane_cp07_ParamLimits

0x0441,	// (0x0006768d) sp_fs_scroll_pane_cp07

0xa299,	// (0x000714e5) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa299,	// (0x000714e5) bg_sp_fs_schedule_viewer_highlight

0x0463,	// (0x000676af) list_single_sp_fs_schedule_track_pane_cp01

0x046b,	// (0x000676b7) list_sp_fs_schedule_track_pane

0x0473,	// (0x000676bf) sp_fs_scroll_pane_cp06_ParamLimits

0x0473,	// (0x000676bf) sp_fs_scroll_pane_cp06

0xc692,	// (0x000738de) bgmain_sp_fs_calendar_pane_g1

0x2a76,	// (0x00069cc2) list_single_cale_mrui_pane_ParamLimits

0x2a76,	// (0x00069cc2) list_single_cale_mrui_pane

0xe556,	// (0x000757a2) list_single_cale_mrui_row_pane_ParamLimits

0xe556,	// (0x000757a2) list_single_cale_mrui_row_pane

0xe563,	// (0x000757af) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe563,	// (0x000757af) list_single_cale_mrui_row_pane_g1

0xe59b,	// (0x000757e7) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe59b,	// (0x000757e7) list_single_cale_mrui_row_pane_t1

0x2a99,	// (0x00069ce5) list_single_cale_mrui_row_pane_t2_ParamLimits

0x2a99,	// (0x00069ce5) list_single_cale_mrui_row_pane_t2

0xe5ad,	// (0x000757f9) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe5ad,	// (0x000757f9) list_single_cale_mrui_row_pane_t3

0xe5dc,	// (0x00075828) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe5dc,	// (0x00075828) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe1d,	// (0x00077069) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe1d,	// (0x00077069) list_single_cale_mrui_row_pane_t

0x2aff,	// (0x00069d4b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x2aff,	// (0x00069d4b) list_single_cmail_header_editor_pane_bg_cp01

0x2b23,	// (0x00069d6f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x2b23,	// (0x00069d6f) list_single_cmail_header_editor_pane_bg_cp02

0xa2a9,	// (0x000714f5) main_radioblah_text_pane_t1_ParamLimits

0xa2a9,	// (0x000714f5) main_radioblah_text_pane_t1

0x049e,	// (0x000676ea) cam6_indi_pane_cp01

0x04a6,	// (0x000676f2) cam6_mode_pane_cp01

0x04ae,	// (0x000676fa) cam6_pano_pane

0x04b7,	// (0x00067703) cam6_zoom_pane_cp01

0x04bf,	// (0x0006770b) cam6_pano_image_pane

0x04c8,	// (0x00067714) cam6_pano_pane_g1

0xde21,	// (0x0007506d) cam6_pano_pane_g2

0x04d1,	// (0x0006771d) cam6_pano_pane_g3

0x04da,	// (0x00067726) cam6_pano_pane_g4

0xcbb0,	// (0x00073dfc) cam6_pano_pane_g5

0x04e3,	// (0x0006772f) cam6_pano_pane_g6

0x04eb,	// (0x00067737) cam6_pano_pane_g7

0x04f3,	// (0x0006773f) cam6_pano_pane_g8

0x04fc,	// (0x00067748) cam6_pano_pane_g9

0x0008,

0xfe26,	// (0x00077072) cam6_pano_pane_g

0xa8d9,	// (0x00071b25) main_browser_tag_pane

0x0257,	// (0x000674a3) grid_navstr_albumart_pane

0x0505,	// (0x00067751) cell_navstr_albumart_pane_ParamLimits

0x0505,	// (0x00067751) cell_navstr_albumart_pane

0x500b,	// (0x0006c257) cell_navstr_albumart_pane_g1

0xc034,	// (0x00073280) cell_navstr_albumart_pane_g2

0xc044,	// (0x00073290) cell_navstr_albumart_pane_g3

0xc03c,	// (0x00073288) cell_navstr_albumart_pane_g4

0x0003,

0xfe39,	// (0x00077085) cell_navstr_albumart_pane_g

0xa2c2,	// (0x0007150e) bt_list_pane_ParamLimits

0xa2c2,	// (0x0007150e) bt_list_pane

0xa2d5,	// (0x00071521) bt_list_pane_t1

0xa2e4,	// (0x00071530) bt_list_pane_t2

0x0001,

0xfe42,	// (0x0007708e) bt_list_pane_t

0xa8d9,	// (0x00071b25) main_cale_prevew_pane

0xa2f3,	// (0x0007153f) popup_cale_preview_window_ParamLimits

0xa2f3,	// (0x0007153f) popup_cale_preview_window

0x1080,	// (0x000682cc) bg_popup_preview_window_pane_cp05_ParamLimits

0x1080,	// (0x000682cc) bg_popup_preview_window_pane_cp05

0x0564,	// (0x000677b0) list_cale_preview_pane_ParamLimits

0x0564,	// (0x000677b0) list_cale_preview_pane

0xa308,	// (0x00071554) list_double_cale_preview_pane_ParamLimits

0xa308,	// (0x00071554) list_double_cale_preview_pane

0xa319,	// (0x00071565) list_single_cale_preview_pane_ParamLimits

0xa319,	// (0x00071565) list_single_cale_preview_pane

0x05b2,	// (0x000677fe) list_single_cale_preview_pane_g1

0x05ba,	// (0x00067806) list_single_cale_preview_pane_t1_ParamLimits

0x05ba,	// (0x00067806) list_single_cale_preview_pane_t1

0xa32d,	// (0x00071579) list_double_cale_preview_pane_g1

0xa335,	// (0x00071581) list_double_cale_preview_pane_t1_ParamLimits

0xa335,	// (0x00071581) list_double_cale_preview_pane_t1

0xa34a,	// (0x00071596) list_double_cale_preview_pane_t2_ParamLimits

0xa34a,	// (0x00071596) list_double_cale_preview_pane_t2

0x0001,

0xfe47,	// (0x00077093) list_double_cale_preview_pane_t_ParamLimits

0xfe47,	// (0x00077093) list_double_cale_preview_pane_t

0xa8d9,	// (0x00071b25) main_ezdial_pane

0x1080,	// (0x000682cc) main_sp_fs_email_pane_ParamLimits

0x9f76,	// (0x000711c2) cmail_ddmenu_btn01_pane_ParamLimits

0x9f76,	// (0x000711c2) cmail_ddmenu_btn01_pane

0x9f89,	// (0x000711d5) cmail_ddmenu_btn02_pane_ParamLimits

0x9f89,	// (0x000711d5) cmail_ddmenu_btn02_pane

0x9fac,	// (0x000711f8) cmail_ddmenu_btn03_pane_ParamLimits

0x9fac,	// (0x000711f8) cmail_ddmenu_btn03_pane

0x26f5,	// (0x00069941) main_sp_fs_ctrlbar_pane_ParamLimits

0x2716,	// (0x00069962) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa0fb,	// (0x00071347) list_cmail_body_pane_ParamLimits

0xe47d,	// (0x000756c9) bg_button_pane_cp12

0xe485,	// (0x000756d1) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe485,	// (0x000756d1) list_single_cmail_header_detail_pane_g3

0x2a52,	// (0x00069c9e) list_single_cmail_header_detail_pane_t2_ParamLimits

0x2a52,	// (0x00069c9e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdcc,	// (0x00077018) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdcc,	// (0x00077018) list_single_cmail_header_detail_pane_t

0xe50a,	// (0x00075756) phacti_term_pane_t2_ParamLimits

0xe50a,	// (0x00075756) phacti_term_pane_t2

0x0001,

0xfdd6,	// (0x00077022) phacti_term_pane_t_ParamLimits

0xfdd6,	// (0x00077022) phacti_term_pane_t

0x05e7,	// (0x00067833) aid_size_list_single_double

0xa362,	// (0x000715ae) popup_ezdial_listscroll_window

0xa378,	// (0x000715c4) popup_number_entry_window_cp01

0x4af2,	// (0x0006bd3e) bg_popup_call_pane_cp09

0x0618,	// (0x00067864) ezdial_list_pane

0x0620,	// (0x0006786c) scroll_pane_cp23

0xc257,	// (0x000734a3) bg_button_pane_cp028_ParamLimits

0xc257,	// (0x000734a3) bg_button_pane_cp028

0xa384,	// (0x000715d0) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa384,	// (0x000715d0) cmail_ddmenu_btn01_pane_g1

0xa393,	// (0x000715df) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa393,	// (0x000715df) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe4c,	// (0x00077098) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe4c,	// (0x00077098) cmail_ddmenu_btn01_pane_g

0x0646,	// (0x00067892) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x0646,	// (0x00067892) cmail_ddmenu_btn01_pane_t1

0xc257,	// (0x000734a3) bg_button_pane_cp029_ParamLimits

0xc257,	// (0x000734a3) bg_button_pane_cp029

0xa3a3,	// (0x000715ef) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa3a3,	// (0x000715ef) cmail_ddmenu_btn02_pane_g1

0xa3be,	// (0x0007160a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa3be,	// (0x0007160a) cmail_ddmenu_btn02_pane_t1

0x1080,	// (0x000682cc) bg_button_pane_cp031_ParamLimits

0x1080,	// (0x000682cc) bg_button_pane_cp031

0xa3a3,	// (0x000715ef) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa3a3,	// (0x000715ef) cmail_ddmenu_btn03_pane_g1

0xa3be,	// (0x0007160a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa3be,	// (0x0007160a) cmail_ddmenu_btn03_pane_t1

0x7f4b,	// (0x0006f197) cell_dialer2_keypad_pane_t1_ParamLimits

0x7f65,	// (0x0006f1b1) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7f65,	// (0x0006f1b1) cell_dialer2_keypad_pane_t1_copy1

0x993e,	// (0x00070b8a) ncimui_group_button_pane

0x1080,	// (0x000682cc) main_sp_fs_calendar_pane_ParamLimits

0xa0fb,	// (0x00071347) list_single_cmail_header_caption_pane_ParamLimits

0xd5db,	// (0x00074827) aid_recal_txt_sm_pane

0xa8d9,	// (0x00071b25) mian_recal_day_pane

0xe544,	// (0x00075790) popup_sp_fs_cale_preview_window_ParamLimits

0xa8d9,	// (0x00071b25) list_recal_day_pane

0xe614,	// (0x00075860) list_single_recal_day_pane_ParamLimits

0xe614,	// (0x00075860) list_single_recal_day_pane

0x069b,	// (0x000678e7) list_single_recal_day_pane_g1_ParamLimits

0x069b,	// (0x000678e7) list_single_recal_day_pane_g1

0xe626,	// (0x00075872) list_single_recal_day_pane_g2_ParamLimits

0xe626,	// (0x00075872) list_single_recal_day_pane_g2

0xe632,	// (0x0007587e) list_single_recal_day_pane_g3_ParamLimits

0xe632,	// (0x0007587e) list_single_recal_day_pane_g3

0x2b41,	// (0x00069d8d) list_single_recal_day_pane_g4_ParamLimits

0x2b41,	// (0x00069d8d) list_single_recal_day_pane_g4

0xe63e,	// (0x0007588a) list_single_recal_day_pane_g5_ParamLimits

0xe63e,	// (0x0007588a) list_single_recal_day_pane_g5

0xe64a,	// (0x00075896) list_single_recal_day_pane_g6_ParamLimits

0xe64a,	// (0x00075896) list_single_recal_day_pane_g6

0x0005,

0xfe5b,	// (0x000770a7) list_single_recal_day_pane_g_ParamLimits

0xfe5b,	// (0x000770a7) list_single_recal_day_pane_g

0xe656,	// (0x000758a2) list_single_recal_day_pane_t1

0xe664,	// (0x000758b0) list_single_recal_day_pane_t2

0x0001,

0xfe68,	// (0x000770b4) list_single_recal_day_pane_t

0xa3e5,	// (0x00071631) ncimui_query_button_pane_ParamLimits

0xa3e5,	// (0x00071631) ncimui_query_button_pane

0xa3f5,	// (0x00071641) ncimui_query_button_pane_t1_ParamLimits

0xa3f5,	// (0x00071641) ncimui_query_button_pane_t1

0x06ca,	// (0x00067916) ncimui_query_button_pane_t2_ParamLimits

0x06ca,	// (0x00067916) ncimui_query_button_pane_t2

0x0001,

0xfe6d,	// (0x000770b9) ncimui_query_button_pane_t_ParamLimits

0xfe6d,	// (0x000770b9) ncimui_query_button_pane_t

0xa408,	// (0x00071654) query_button_pane_ParamLimits

0xa408,	// (0x00071654) query_button_pane

0xa8d9,	// (0x00071b25) bg_button_pane_cp0028

0x06ea,	// (0x00067936) query_button_pane_t1

0x6287,	// (0x0006d4d3) main_tport_pane_ParamLimits

0xa00a,	// (0x00071256) bg_popup_window_pane_cp01_ParamLimits

0xa00a,	// (0x00071256) bg_popup_window_pane_cp01

0xa022,	// (0x0007126e) heading_pane_cp08_ParamLimits

0xa022,	// (0x0007126e) heading_pane_cp08

0xa034,	// (0x00071280) heading_pane_cp07_ParamLimits

0xa034,	// (0x00071280) heading_pane_cp07

0xe435,	// (0x00075681) cell_tport_appsw_pane_g2

0x0002,

0xfdb9,	// (0x00077005) cell_tport_appsw_pane_g

0xb9ac,	// (0x00072bf8) input_candi_list_open_g1

0xb85f,	// (0x00072aab) list_cale_time_pane_g6_ParamLimits

0xb85f,	// (0x00072aab) list_cale_time_pane_g6

0x6f2d,	// (0x0006e179) aid_size_touch_calib_1_ParamLimits

0x6f2d,	// (0x0006e179) aid_size_touch_calib_1

0x6f39,	// (0x0006e185) aid_size_touch_calib_2_ParamLimits

0x6f39,	// (0x0006e185) aid_size_touch_calib_2

0x6f4d,	// (0x0006e199) aid_size_touch_calib_3_ParamLimits

0x6f4d,	// (0x0006e199) aid_size_touch_calib_3

0x6f65,	// (0x0006e1b1) aid_size_touch_calib_4_ParamLimits

0x6f65,	// (0x0006e1b1) aid_size_touch_calib_4

0x6f77,	// (0x0006e1c3) main_touch_calib_button_group_pane_ParamLimits

0x6f77,	// (0x0006e1c3) main_touch_calib_button_group_pane

0x6f8d,	// (0x0006e1d9) main_touch_calib_pane_g1_ParamLimits

0x6f99,	// (0x0006e1e5) main_touch_calib_pane_g2_ParamLimits

0x6fa5,	// (0x0006e1f1) main_touch_calib_pane_g3_ParamLimits

0x6fb1,	// (0x0006e1fd) main_touch_calib_pane_g4_ParamLimits

0xf797,	// (0x000769e3) main_touch_calib_pane_g_ParamLimits

0x6fbd,	// (0x0006e209) main_touch_calib_pane_t1_ParamLimits

0x6fd5,	// (0x0006e221) main_touch_calib_pane_t2_ParamLimits

0x6fed,	// (0x0006e239) main_touch_calib_pane_t3_ParamLimits

0x6fff,	// (0x0006e24b) main_touch_calib_pane_t4_ParamLimits

0x7011,	// (0x0006e25d) main_touch_calib_pane_t5_ParamLimits

0xf7a0,	// (0x000769ec) main_touch_calib_pane_t_ParamLimits

0xc9db,	// (0x00073c27) list_single_fp_cale_pane_g3_ParamLimits

0xc9db,	// (0x00073c27) list_single_fp_cale_pane_g3

0x1080,	// (0x000682cc) bg_button_pane_cp012_ParamLimits

0x1080,	// (0x000682cc) bg_vkb2_func_pane_cp03_ParamLimits

0x8dff,	// (0x0007004b) cell_vitu2_function_top_pane_g1_ParamLimits

0x1080,	// (0x000682cc) bg_vkb2_func_pane_cp04_ParamLimits

0x98f4,	// (0x00070b40) main_ncimui_button_group_pane_ParamLimits

0x98f4,	// (0x00070b40) main_ncimui_button_group_pane

0x992c,	// (0x00070b78) main_ncimui_pane_t3_ParamLimits

0x992c,	// (0x00070b78) main_ncimui_pane_t3

0x02ac,	// (0x000674f8) phacti_button_group_pane

0x05e7,	// (0x00067833) aid_size_list_single_double_ParamLimits

0xa362,	// (0x000715ae) popup_ezdial_listscroll_window_ParamLimits

0xa378,	// (0x000715c4) popup_number_entry_window_cp01_ParamLimits

0xa41a,	// (0x00071666) phacti_button_pane_ParamLimits

0xa41a,	// (0x00071666) phacti_button_pane

0xa8d9,	// (0x00071b25) bg_button_pane_cp14

0x0707,	// (0x00067953) phacti_button_pane_t1

0xa429,	// (0x00071675) main_touch_calib_button_pane_ParamLimits

0xa429,	// (0x00071675) main_touch_calib_button_pane

0xb091,	// (0x000722dd) bg_button_pane_cp18_ParamLimits

0xb091,	// (0x000722dd) bg_button_pane_cp18

0x0725,	// (0x00067971) main_touch_calib_button_pane_t1_ParamLimits

0x0725,	// (0x00067971) main_touch_calib_button_pane_t1

0x073b,	// (0x00067987) main_touch_calib_button_pane_t2_ParamLimits

0x073b,	// (0x00067987) main_touch_calib_button_pane_t2

0x0001,

0xfe72,	// (0x000770be) main_touch_calib_button_pane_t_ParamLimits

0xfe72,	// (0x000770be) main_touch_calib_button_pane_t

0xa8d9,	// (0x00071b25) cell_ncimui_button_pane

0xa8d9,	// (0x00071b25) bg_button_pane_cp032

0x0759,	// (0x000679a5) cell_ncimui_button_pane_t1

0xef3c,	// (0x00076188) image3_infobar_pane_ParamLimits

0xef3c,	// (0x00076188) image3_infobar_pane

0x9c93,	// (0x00070edf) fs_bigclock_status_pane_ParamLimits

0x9c93,	// (0x00070edf) fs_bigclock_status_pane

0x9ca0,	// (0x00070eec) main_fs_bigclock_clock_pane_ParamLimits

0x9ca0,	// (0x00070eec) main_fs_bigclock_clock_pane

0x9caf,	// (0x00070efb) main_fs_bigclock_indi_pane_ParamLimits

0x9caf,	// (0x00070efb) main_fs_bigclock_indi_pane

0x9cc3,	// (0x00070f0f) main_fs_bigclock_swipe_pane_ParamLimits

0x9cc3,	// (0x00070f0f) main_fs_bigclock_swipe_pane

0xa8d9,	// (0x00071b25) main_fs_clock_dumped_data

0xdf2e,	// (0x0007517a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdf2e,	// (0x0007517a) list_single_fs_bigclock_indicator_pane_g1

0xdf48,	// (0x00075194) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdf48,	// (0x00075194) list_single_fs_bigclock_indicator_pane_g2

0xdf62,	// (0x000751ae) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdf62,	// (0x000751ae) list_single_fs_bigclock_indicator_pane_g3

0xdf7c,	// (0x000751c8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdf7c,	// (0x000751c8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcaa,	// (0x00076ef6) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcaa,	// (0x00076ef6) list_single_fs_bigclock_indicator_pane_g

0xdfa0,	// (0x000751ec) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdfa0,	// (0x000751ec) list_single_fs_bigclock_indicator_pane_t1

0xdfc8,	// (0x00075214) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdfc8,	// (0x00075214) list_single_fs_bigclock_indicator_pane_t2

0xdff0,	// (0x0007523c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdff0,	// (0x0007523c) list_single_fs_bigclock_indicator_pane_t3

0xe018,	// (0x00075264) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe018,	// (0x00075264) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcb5,	// (0x00076f01) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcb5,	// (0x00076f01) list_single_fs_bigclock_indicator_pane_t

0x0767,	// (0x000679b3) image3_infobar_fav_pane_ParamLimits

0x0767,	// (0x000679b3) image3_infobar_fav_pane

0x0777,	// (0x000679c3) image3_infobar_loc_pane_ParamLimits

0x0777,	// (0x000679c3) image3_infobar_loc_pane

0x078b,	// (0x000679d7) image3_infobar_time_pane_ParamLimits

0x078b,	// (0x000679d7) image3_infobar_time_pane

0xc692,	// (0x000738de) image3_infobar_time_pane_g1

0x079b,	// (0x000679e7) image3_infobar_time_pane_t1

0xc692,	// (0x000738de) image3_infobar_loc_pane_g1

0x07a9,	// (0x000679f5) image3_infobar_loc_pane_g2

0x0001,

0xfe77,	// (0x000770c3) image3_infobar_loc_pane_g

0x07b1,	// (0x000679fd) image3_infobar_loc_pane_t1

0xc692,	// (0x000738de) image3_infobar_fav_pane_g1

0x07bf,	// (0x00067a0b) image3_infobar_fav_pane_g2

0x0001,

0xfe7c,	// (0x000770c8) image3_infobar_fav_pane_g

0x07c7,	// (0x00067a13) fs_bigclock_status_battery_pane

0x07d0,	// (0x00067a1c) fs_bigclock_status_signal_pane

0x07d9,	// (0x00067a25) fs_bigclock_status_title_pane

0x07e2,	// (0x00067a2e) fs_bigclock_status_signal_pane_g1

0x07eb,	// (0x00067a37) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe81,	// (0x000770cd) fs_bigclock_status_signal_pane_g

0x07f3,	// (0x00067a3f) fs_bigclock_status_battery_pane_g1

0x07fc,	// (0x00067a48) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe86,	// (0x000770d2) fs_bigclock_status_battery_pane_g

0x0804,	// (0x00067a50) fs_bigclock_status_title_pane_t1

0xc692,	// (0x000738de) main_fs_bigclock_clock_pane_g1

0x0812,	// (0x00067a5e) main_fs_bigclock_clock_pane_g2

0x0812,	// (0x00067a5e) main_fs_bigclock_clock_pane_g3

0x0812,	// (0x00067a5e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe8b,	// (0x000770d7) main_fs_bigclock_clock_pane_g

0x081a,	// (0x00067a66) main_fs_bigclock_clock_pane_t1

0x0828,	// (0x00067a74) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe94,	// (0x000770e0) main_fs_bigclock_clock_pane_t

0x0837,	// (0x00067a83) list_single_fs_bigclock_indicator_pane_ParamLimits

0x0837,	// (0x00067a83) list_single_fs_bigclock_indicator_pane

0xa43c,	// (0x00071688) list_single_fs_bigclock_pane_ParamLimits

0xa43c,	// (0x00071688) list_single_fs_bigclock_pane

0x08af,	// (0x00067afb) main_fs_bigclock_indicator_pane_t1

0x08be,	// (0x00067b0a) list_single_fs_bigclock_pane_g1

0x08c6,	// (0x00067b12) list_single_fs_bigclock_pane_t1

0xc692,	// (0x000738de) main_fs_bigclock_swipe_pane_g1

0x0904,	// (0x00067b50) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfea5,	// (0x000770f1) main_fs_bigclock_swipe_pane_g

0x090c,	// (0x00067b58) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x090c,	// (0x00067b58) main_fs_bigclock_swipe_pane_t1

0x4656,	// (0x0006b8a2) call_type_pane_ParamLimits

0xa8d9,	// (0x00071b25) main_btmg_pane

0xe58f,	// (0x000757db) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe58f,	// (0x000757db) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe18,	// (0x00077064) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe18,	// (0x00077064) list_single_cale_mrui_row_pane_g

0x068b,	// (0x000678d7) list_recal_vselct_arw_lo_pane

0x0693,	// (0x000678df) list_recal_vselct_arw_up_pane

0xe60b,	// (0x00075857) list_recal_vselct_pane

0x0929,	// (0x00067b75) btmg_button_pane

0xa49c,	// (0x000716e8) main_btmg_pane_g1

0xa8d9,	// (0x00071b25) bg_button_pane_cp044

0x0939,	// (0x00067b85) btmg_button_pane_t1

0xc24f,	// (0x0007349b) aid_listscroll_gen

0x1080,	// (0x000682cc) main_cntbar_detail_pane

0xe453,	// (0x0007569f) list_cmail_folder_pane

0xe463,	// (0x000756af) sp_fs_scroll_pane_cp03_ParamLimits

0x2b4f,	// (0x00069d9b) list_single_fs_dyc_pane_cp01_ParamLimits

0x2b4f,	// (0x00069d9b) list_single_fs_dyc_pane_cp01

0x0947,	// (0x00067b93) aid_size_cmail_indent

0xf0dd,	// (0x00076329) list_single_dyc_row_pane_cp01

0xa4cc,	// (0x00071718) cntbar_detail_list_pane_ParamLimits

0xa4cc,	// (0x00071718) cntbar_detail_list_pane

0xa512,	// (0x0007175e) main_cntbar_detail_cont_pane_ParamLimits

0xa512,	// (0x0007175e) main_cntbar_detail_cont_pane

0xa526,	// (0x00071772) scroll_pane_cp032_ParamLimits

0xa526,	// (0x00071772) scroll_pane_cp032

0xa532,	// (0x0007177e) cntbar_detail_list_event_pane_ParamLimits

0xa532,	// (0x0007177e) cntbar_detail_list_event_pane

0xa4dc,	// (0x00071728) cntbar_detail_list_shct_pane

0x09c8,	// (0x00067c14) aid_list_gen

0xb1ee,	// (0x0007243a) aid_scroll

0xd5c1,	// (0x0007480d) aid_size_touch_scroll_bar

0xf0f2,	// (0x0007633e) aid_list_double

0xa543,	// (0x0007178f) aid_list_single

0xe672,	// (0x000758be) aid_list_single_lg

0x2b64,	// (0x00069db0) aid_list_z_g_a_sm

0xa54c,	// (0x00071798) aid_list_z_g_d

0x2b6c,	// (0x00069db8) aid_txt_z_prm

0x2b7a,	// (0x00069dc6) aid_txt_z_prm_cp01

0x2b88,	// (0x00069dd4) aid_txt_z_sec

0xa554,	// (0x000717a0) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa554,	// (0x000717a0) main_cntbar_detail_cont_pane_g1

0xa568,	// (0x000717b4) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa568,	// (0x000717b4) main_cntbar_detail_cont_pane_g2

0x0001,

0xfeaa,	// (0x000770f6) main_cntbar_detail_cont_pane_g_ParamLimits

0xfeaa,	// (0x000770f6) main_cntbar_detail_cont_pane_g

0x09f3,	// (0x00067c3f) main_cntbar_detail_cont_pane_t1

0x0a01,	// (0x00067c4d) main_cntbar_detail_cont_pane_t2

0x0a0f,	// (0x00067c5b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfeaf,	// (0x000770fb) main_cntbar_detail_cont_pane_t

0xa578,	// (0x000717c4) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa578,	// (0x000717c4) cell_cntbar_detail_list_shct_pane

0x0a2f,	// (0x00067c7b) cntbar_detail_list_shct_pane_g1

0x0a38,	// (0x00067c84) cntbar_detail_list_shct_pane_g2

0x0001,

0xfeb6,	// (0x00077102) cntbar_detail_list_shct_pane_g

0xa58a,	// (0x000717d6) cntbar_detail_list_event_pane_g1_ParamLimits

0xa58a,	// (0x000717d6) cntbar_detail_list_event_pane_g1

0xa596,	// (0x000717e2) cntbar_detail_list_event_pane_g2_ParamLimits

0xa596,	// (0x000717e2) cntbar_detail_list_event_pane_g2

0x0005,

0xfebb,	// (0x00077107) cntbar_detail_list_event_pane_g_ParamLimits

0xfebb,	// (0x00077107) cntbar_detail_list_event_pane_g

0xa602,	// (0x0007184e) cntbar_detail_list_event_pane_t1_ParamLimits

0xa602,	// (0x0007184e) cntbar_detail_list_event_pane_t1

0xa617,	// (0x00071863) cntbar_detail_list_event_pane_t2_ParamLimits

0xa617,	// (0x00071863) cntbar_detail_list_event_pane_t2

0x0002,

0xfec8,	// (0x00077114) cntbar_detail_list_event_pane_t_ParamLimits

0xfec8,	// (0x00077114) cntbar_detail_list_event_pane_t

0xc692,	// (0x000738de) cell_cntbar_detail_list_shct_pane_g1

0x4a73,	// (0x0006bcbf) navi_pane_mv_g3

0x1080,	// (0x000682cc) main_cntbar_detail_pane_ParamLimits

0xa8d9,	// (0x00071b25) main_notif_wgt_pane

0xed50,	// (0x00075f9c) aid_tch_main_mp4_pane_g4

0xef34,	// (0x00076180) popup_slider_window_cp02

0xe60b,	// (0x00075857) list_recal_day_event_pane

0xa4a4,	// (0x000716f0) cntbar_detail_btn_pane_ParamLimits

0xa4a4,	// (0x000716f0) cntbar_detail_btn_pane

0xa4b7,	// (0x00071703) cntbar_detail_btn_pane_cp01_ParamLimits

0xa4b7,	// (0x00071703) cntbar_detail_btn_pane_cp01

0xa4dc,	// (0x00071728) cntbar_detail_list_shct_pane_ParamLimits

0xa4ec,	// (0x00071738) cntbar_detail_pane_g1_ParamLimits

0xa4ec,	// (0x00071738) cntbar_detail_pane_g1

0xa4fc,	// (0x00071748) cntbar_detail_pane_t1_ParamLimits

0xa4fc,	// (0x00071748) cntbar_detail_pane_t1

0xa5a2,	// (0x000717ee) cntbar_detail_list_event_pane_g3_ParamLimits

0xa5a2,	// (0x000717ee) cntbar_detail_list_event_pane_g3

0xa5ba,	// (0x00071806) cntbar_detail_list_event_pane_g4_ParamLimits

0xa5ba,	// (0x00071806) cntbar_detail_list_event_pane_g4

0xa5d2,	// (0x0007181e) cntbar_detail_list_event_pane_g5_ParamLimits

0xa5d2,	// (0x0007181e) cntbar_detail_list_event_pane_g5

0xa5ea,	// (0x00071836) cntbar_detail_list_event_pane_g6_ParamLimits

0xa5ea,	// (0x00071836) cntbar_detail_list_event_pane_g6

0xa62c,	// (0x00071878) cntbar_detail_list_event_pane_t3_ParamLimits

0xa62c,	// (0x00071878) cntbar_detail_list_event_pane_t3

0xa63e,	// (0x0007188a) popup_notif_wgt_window_ParamLimits

0xa63e,	// (0x0007188a) popup_notif_wgt_window

0xa653,	// (0x0007189f) popup_submenu_window_cp01_ParamLimits

0xa653,	// (0x0007189f) popup_submenu_window_cp01

0x4af2,	// (0x0006bd3e) bg_popup_window_pane_cp10

0x0b0f,	// (0x00067d5b) listscroll_notif_wgt_pane

0x0b17,	// (0x00067d63) list_notif_wgt_window

0x0b20,	// (0x00067d6c) scroll_pane_cp033

0x0b29,	// (0x00067d75) list_notif_wgt_row_pane_ParamLimits

0x0b29,	// (0x00067d75) list_notif_wgt_row_pane

0x0b3b,	// (0x00067d87) aid_size_list_notif_wgt_del

0x0b44,	// (0x00067d90) list_notif_wgt_row_pane_g1

0x0b4c,	// (0x00067d98) list_notif_wgt_row_pane_g2

0x0b54,	// (0x00067da0) list_notif_wgt_row_pane_g3

0x0002,

0xfecf,	// (0x0007711b) list_notif_wgt_row_pane_g

0x0b5d,	// (0x00067da9) list_notif_wgt_row_pane_t1

0x0b6b,	// (0x00067db7) list_notif_wgt_row_pane_t2

0x0b79,	// (0x00067dc5) list_notif_wgt_row_pane_t3

0x0002,

0xfed6,	// (0x00077122) list_notif_wgt_row_pane_t

0xd2b9,	// (0x00074505) list_recal_day_event_pane_g1

0x0b87,	// (0x00067dd3) list_recal_day_event_pane_t1

0xa8d9,	// (0x00071b25) bg_button_pane_cp045

0xa663,	// (0x000718af) cntbar_detail_btn_pane_t1

0xc257,	// (0x000734a3) main_callh_pane_ParamLimits

0xc257,	// (0x000734a3) main_callh_pane

0xa8d9,	// (0x00071b25) main_coverflow0_pane

0xa8d9,	// (0x00071b25) main_wgtman_pane

0x9ccf,	// (0x00070f1b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9ccf,	// (0x00070f1b) main_fs_bigclock_unlock_btn_pane

0xe42d,	// (0x00075679) bg_button_pane_cp16

0xe43d,	// (0x00075689) cell_tport_appsw_pane_g3

0xa671,	// (0x000718bd) cf0_flow_pane_ParamLimits

0xa671,	// (0x000718bd) cf0_flow_pane

0x0bb3,	// (0x00067dff) listscroll_cf0_pane

0x0bbc,	// (0x00067e08) main_cf0_pane_g1

0xa686,	// (0x000718d2) main_cf0_pane_t1_ParamLimits

0xa686,	// (0x000718d2) main_cf0_pane_t1

0xa69c,	// (0x000718e8) main_cf0_pane_t2_ParamLimits

0xa69c,	// (0x000718e8) main_cf0_pane_t2

0x0001,

0xfedd,	// (0x00077129) main_cf0_pane_t_ParamLimits

0xfedd,	// (0x00077129) main_cf0_pane_t

0x0bea,	// (0x00067e36) scroll_pane_cp11

0xa6b2,	// (0x000718fe) cf0_flow_pane_g1

0xa6ba,	// (0x00071906) cf0_flow_pane_g2

0x0001,

0xfee2,	// (0x0007712e) cf0_flow_pane_g

0xa6c2,	// (0x0007190e) cf0_flow_pane_t1

0xa8d9,	// (0x00071b25) main_call6_pane

0xa8d9,	// (0x00071b25) main_calllock_pane

0xa6d0,	// (0x0007191c) call6_btn_grp_pane_ParamLimits

0xa6d0,	// (0x0007191c) call6_btn_grp_pane

0xa6e6,	// (0x00071932) call6_pane_g1_ParamLimits

0xa6e6,	// (0x00071932) call6_pane_g1

0xa6f9,	// (0x00071945) popup_call6_1st_window_ParamLimits

0xa6f9,	// (0x00071945) popup_call6_1st_window

0xa708,	// (0x00071954) popup_call6_2nd_window_ParamLimits

0xa708,	// (0x00071954) popup_call6_2nd_window

0xa717,	// (0x00071963) cell_call6_btn_pane_ParamLimits

0xa717,	// (0x00071963) cell_call6_btn_pane

0x4af2,	// (0x0006bd3e) bg_popup_call2_in_pane_cp03

0x0c52,	// (0x00067e9e) popup_call6_1st_window_g1

0x0c5a,	// (0x00067ea6) popup_call6_1st_window_g2

0x0c62,	// (0x00067eae) popup_call6_1st_window_g3

0x0002,

0xfee7,	// (0x00077133) popup_call6_1st_window_g

0x0c6a,	// (0x00067eb6) popup_call6_1st_window_t1

0x0c79,	// (0x00067ec5) popup_call6_1st_window_t2

0x0c87,	// (0x00067ed3) popup_call6_1st_window_t3

0x0002,

0xfeee,	// (0x0007713a) popup_call6_1st_window_t

0x4af2,	// (0x0006bd3e) bg_popup_call2_in_pane_cp04

0x0c52,	// (0x00067e9e) popup_call6_2nd_window_g1

0x0c5a,	// (0x00067ea6) popup_call6_2nd_window_g2

0x0c62,	// (0x00067eae) popup_call6_2nd_window_g3

0x0002,

0xfee7,	// (0x00077133) popup_call6_2nd_window_g

0x0c6a,	// (0x00067eb6) popup_call6_2nd_window_t1

0xa8d9,	// (0x00071b25) bg_button_pane_cp15

0x0c95,	// (0x00067ee1) cell_call6_btn_pane_g1

0x0c9e,	// (0x00067eea) cell_call6_btn_pane_t1

0xa72b,	// (0x00071977) listscroll_wgtman_pane_ParamLimits

0xa72b,	// (0x00071977) listscroll_wgtman_pane

0xa74a,	// (0x00071996) wgtman_btn_pane_ParamLimits

0xa74a,	// (0x00071996) wgtman_btn_pane

0x103f,	// (0x0006828b) aid_scroll_copy1

0x0cfa,	// (0x00067f46) list_wgtman_pane

0xa78a,	// (0x000719d6) wgtman_btn_pane_g1_ParamLimits

0xa78a,	// (0x000719d6) wgtman_btn_pane_g1

0xa7b6,	// (0x00071a02) wgtman_btn_pane_t1_ParamLimits

0xa7b6,	// (0x00071a02) wgtman_btn_pane_t1

0x0d63,	// (0x00067faf) wgtman_btn_pane_t2_ParamLimits

0x0d63,	// (0x00067faf) wgtman_btn_pane_t2

0x0001,

0xfef5,	// (0x00077141) wgtman_btn_pane_t_ParamLimits

0xfef5,	// (0x00077141) wgtman_btn_pane_t

0xa7f3,	// (0x00071a3f) listrow_wgtman_pane_ParamLimits

0xa7f3,	// (0x00071a3f) listrow_wgtman_pane

0xa804,	// (0x00071a50) listrow_wgtman_pane_g1

0xa80d,	// (0x00071a59) listrow_wgtman_pane_g2

0x0001,

0xfefa,	// (0x00077146) listrow_wgtman_pane_g

0x2b96,	// (0x00069de2) listrow_wgtman_pane_t1

0x2ba4,	// (0x00069df0) listrow_wgtman_pane_t2

0x0001,

0xfeff,	// (0x0007714b) listrow_wgtman_pane_t

0x2bb2,	// (0x00069dfe) wait_bar_pane_cp09

0x0d9c,	// (0x00067fe8) main_calllock_btn_pane

0x0da4,	// (0x00067ff0) main_calllock_pane_g1

0xa8d9,	// (0x00071b25) bg_button_pane_cp17

0x0dad,	// (0x00067ff9) main_calllock_btn_pane_g1

0x0db6,	// (0x00068002) main_calllock_btn_pane_t1

0xa8d9,	// (0x00071b25) main_dialer3_pane

0xa8d9,	// (0x00071b25) main_fmrd2_pane

0xc692,	// (0x000738de) main_fs_bigclock_unlock_btn_pane_g1

0x0dcd,	// (0x00068019) main_fs_bigclock_unlock_btn_pane_t1

0xa815,	// (0x00071a61) area_fmrd2_info_pane_ParamLimits

0xa815,	// (0x00071a61) area_fmrd2_info_pane

0xa824,	// (0x00071a70) area_fmrd2_visual_pane_ParamLimits

0xa824,	// (0x00071a70) area_fmrd2_visual_pane

0xa832,	// (0x00071a7e) fmrd2_indi_pane_ParamLimits

0xa832,	// (0x00071a7e) fmrd2_indi_pane

0xa83f,	// (0x00071a8b) area_fmrd2_visual_pane_g1

0xa847,	// (0x00071a93) area_fmrd2_visual_pane_t1

0xa855,	// (0x00071aa1) area_fmrd2_visual_pane_t2

0xa863,	// (0x00071aaf) area_fmrd2_visual_pane_t3

0x0002,

0xff09,	// (0x00077155) area_fmrd2_visual_pane_t

0xa871,	// (0x00071abd) area_fmrd2_info_pane_g1

0xa879,	// (0x00071ac5) area_fmrd2_info_pane_t1

0xa887,	// (0x00071ad3) area_fmrd2_info_pane_t2

0xa895,	// (0x00071ae1) area_fmrd2_info_pane_t3

0xa8a3,	// (0x00071aef) area_fmrd2_info_pane_t4

0x0003,

0xff10,	// (0x0007715c) area_fmrd2_info_pane_t

0xa8b1,	// (0x00071afd) fmrd2_indi_pane_t1

0xa8bf,	// (0x00071b0b) fmrd2_indi_pane_t2

0xe67b,	// (0x000758c7) fmrd2_indi_pane_t3

0x0002,

0xff19,	// (0x00077165) fmrd2_indi_pane_t

0xdf8b,	// (0x000751d7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdf8b,	// (0x000751d7) list_single_fs_bigclock_indicator_pane_g5

0xe02d,	// (0x00075279) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe02d,	// (0x00075279) list_single_fs_bigclock_indicator_pane_t5

0xa1f0,	// (0x0007143c) aid_cell_bcale_month_pane_ParamLimits

0xa1f0,	// (0x0007143c) aid_cell_bcale_month_pane

0xa202,	// (0x0007144e) bcale_month_pane_ParamLimits

0xa202,	// (0x0007144e) bcale_month_pane

0xa214,	// (0x00071460) bcale_preview_pane_ParamLimits

0xa214,	// (0x00071460) bcale_preview_pane

0x08c6,	// (0x00067b12) list_single_fs_bigclock_pane_t1_ParamLimits

0x08e0,	// (0x00067b2c) list_single_fs_bigclock_pane_t2_ParamLimits

0x08e0,	// (0x00067b2c) list_single_fs_bigclock_pane_t2

0x0001,

0xfea0,	// (0x000770ec) list_single_fs_bigclock_pane_t_ParamLimits

0xfea0,	// (0x000770ec) list_single_fs_bigclock_pane_t

0x0dc5,	// (0x00068011) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff04,	// (0x00077150) main_fs_bigclock_unlock_btn_pane_g

0xe689,	// (0x000758d5) aid_dia3_key_size_ParamLimits

0xe689,	// (0x000758d5) aid_dia3_key_size

0xe698,	// (0x000758e4) aid_dia3_listrow_size_ParamLimits

0xe698,	// (0x000758e4) aid_dia3_listrow_size

0xe6ab,	// (0x000758f7) dia3_keypad_fun_pane_ParamLimits

0xe6ab,	// (0x000758f7) dia3_keypad_fun_pane

0xe6bf,	// (0x0007590b) dia3_keypad_num_pane_ParamLimits

0xe6bf,	// (0x0007590b) dia3_keypad_num_pane

0xe6d0,	// (0x0007591c) dia3_listscroll_pane_ParamLimits

0xe6d0,	// (0x0007591c) dia3_listscroll_pane

0xe6e1,	// (0x0007592d) dia3_numentry_pane_ParamLimits

0xe6e1,	// (0x0007592d) dia3_numentry_pane

0x10f8,	// (0x00068344) dia3_list_pane

0x1101,	// (0x0006834d) scroll_pane_cp12

0xa8d9,	// (0x00071b25) bg_dia3_numentry_pane

0xe6f3,	// (0x0007593f) dia3_numentry_pane_t1

0xe702,	// (0x0007594e) cell_dia3_key_num_pane

0xe70a,	// (0x00075956) cell_dia3_key0_fun_pane_ParamLimits

0xe70a,	// (0x00075956) cell_dia3_key0_fun_pane

0xe71e,	// (0x0007596a) cell_dia3_key1_fun_pane_ParamLimits

0xe71e,	// (0x0007596a) cell_dia3_key1_fun_pane

0xe735,	// (0x00075981) dia3_listrow_pane

0xdcaf,	// (0x00074efb) bg_dia3_numentry_pane_g1

0xa8d9,	// (0x00071b25) bg_button_pane_cp21

0x1148,	// (0x00068394) cell_dia3_key_num_pane_t1

0x1156,	// (0x000683a2) cell_dia3_key_num_pane_t2

0x1165,	// (0x000683b1) cell_dia3_key_num_pane_t3

0x1174,	// (0x000683c0) cell_dia3_key_num_pane_t4

0x0003,

0xff20,	// (0x0007716c) cell_dia3_key_num_pane_t

0xa8d9,	// (0x00071b25) bg_button_pane_cp19

0x1183,	// (0x000683cf) cell_dia3_key0_fun_pane_g1

0xa8d9,	// (0x00071b25) bg_button_pane_cp20

0xe747,	// (0x00075993) cell_dia3_key1_fun_pane_g1

0xe74f,	// (0x0007599b) area_left_week_number_pane

0xe758,	// (0x000759a4) area_top_day_name_pane

0xe761,	// (0x000759ad) frame_month_view_pane

0xe769,	// (0x000759b5) grid_month_view_pane

0xe773,	// (0x000759bf) cell_top_day_name_pane_ParamLimits

0xe773,	// (0x000759bf) cell_top_day_name_pane

0xe789,	// (0x000759d5) cell_area_left_week_number_pane_ParamLimits

0xe789,	// (0x000759d5) cell_area_left_week_number_pane

0xe79d,	// (0x000759e9) cell_month_view_pane_ParamLimits

0xe79d,	// (0x000759e9) cell_month_view_pane

0x11fc,	// (0x00068448) frm_month_g1

0xe7b8,	// (0x00075a04) frm_month_g2

0xe7c0,	// (0x00075a0c) frm_month_g3

0xe7c8,	// (0x00075a14) frm_month_g4

0xe7d0,	// (0x00075a1c) frm_month_g5

0xe7d8,	// (0x00075a24) frm_month_g6

0xe7e0,	// (0x00075a2c) frm_month_g7

0x1235,	// (0x00068481) frm_month_g8

0xe7e8,	// (0x00075a34) frm_month_g9

0xe7f1,	// (0x00075a3d) frm_month_g10

0xe7fa,	// (0x00075a46) frm_month_g11

0xe803,	// (0x00075a4f) frm_month_g12

0xe80c,	// (0x00075a58) frm_month_g13

0xe815,	// (0x00075a61) frm_month_g14

0xe81e,	// (0x00075a6a) frm_month_g15

0xe827,	// (0x00075a73) frm_month_g16

0x000f,

0xff29,	// (0x00077175) frm_month_g

0xe830,	// (0x00075a7c) cell_top_day_name_pane_t1

0xe83f,	// (0x00075a8b) cell_area_left_week_number_pane_g1

0xe830,	// (0x00075a7c) cell_area_left_week_number_pane_t1

0xc692,	// (0x000738de) cell_month_view_pane_g1

0xe847,	// (0x00075a93) cell_month_view_pane_t1

0xa8d9,	// (0x00071b25) main_fps_pane

0xe230,	// (0x0007547c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe230,	// (0x0007547c) cmail_ddmenu_btn02_pane_cp1

0xe24c,	// (0x00075498) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe24c,	// (0x00075498) cmail_ddmenu_btn02_pane_cp2

0xa3b2,	// (0x000715fe) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa3b2,	// (0x000715fe) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe51,	// (0x0007709d) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe51,	// (0x0007709d) cmail_ddmenu_btn02_pane_g

0xa3d3,	// (0x0007161f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa3d3,	// (0x0007161f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe56,	// (0x000770a2) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe56,	// (0x000770a2) cmail_ddmenu_btn02_pane_t

0xe856,	// (0x00075aa2) fps_text_pane_ParamLimits

0xe856,	// (0x00075aa2) fps_text_pane

0xe86c,	// (0x00075ab8) main_fps_pane_g1_ParamLimits

0xe86c,	// (0x00075ab8) main_fps_pane_g1

0xe882,	// (0x00075ace) wait_bar_pane_cp010_ParamLimits

0xe882,	// (0x00075ace) wait_bar_pane_cp010

0xe893,	// (0x00075adf) fps_text_pane_t1_ParamLimits

0xe893,	// (0x00075adf) fps_text_pane_t1

0x8396,	// (0x0006f5e2) cam4_image_uncrop_pane_g1

0x839f,	// (0x0006f5eb) cam4_image_uncrop_pane_g2

0x83a8,	// (0x0006f5f4) cam4_image_uncrop_pane_g3

0x83b1,	// (0x0006f5fd) cam4_image_uncrop_pane_g4

0x0003,

0xf92f,	// (0x00076b7b) cam4_image_uncrop_pane_g

0xe735,	// (0x00075981) dia3_listrow_pane_ParamLimits

0xa8d9,	// (0x00071b25) main_phob2_pane

0xa095,	// (0x000712e1) cell_tport_appsw_pane_cp02_ParamLimits

0xa095,	// (0x000712e1) cell_tport_appsw_pane_cp02

0xa0a5,	// (0x000712f1) cell_tport_appsw_pane_cp03_ParamLimits

0xa0a5,	// (0x000712f1) cell_tport_appsw_pane_cp03

0xa8d9,	// (0x00071b25) phob2_contact_card_pane

0xa8d9,	// (0x00071b25) phob2_listscroll_pane

0x12e1,	// (0x0006852d) phob2_list_pane

0x12e9,	// (0x00068535) scroll_pane_cp034

0xe8ab,	// (0x00075af7) phob2_cc_data_pane_ParamLimits

0xe8ab,	// (0x00075af7) phob2_cc_data_pane

0xe8c8,	// (0x00075b14) phob2_cc_listscroll_pane_ParamLimits

0xe8c8,	// (0x00075b14) phob2_cc_listscroll_pane

0xe8e4,	// (0x00075b30) list_double_large_graphic_phob2_pane_ParamLimits

0xe8e4,	// (0x00075b30) list_double_large_graphic_phob2_pane

0xe8f6,	// (0x00075b42) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe8f6,	// (0x00075b42) list_double_large_graphic_phob2_pane_g1

0x2bba,	// (0x00069e06) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x2bba,	// (0x00069e06) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff4a,	// (0x00077196) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff4a,	// (0x00077196) list_double_large_graphic_phob2_pane_g

0x2bc6,	// (0x00069e12) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x2bc6,	// (0x00069e12) list_double_large_graphic_phob2_pane_t1

0x2bdb,	// (0x00069e27) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x2bdb,	// (0x00069e27) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff4f,	// (0x0007719b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff4f,	// (0x0007719b) list_double_large_graphic_phob2_pane_t

0xa8d9,	// (0x00071b25) list_highlight_pane_cp024

0x1341,	// (0x0006858d) phob2_cc_button_pane

0xe903,	// (0x00075b4f) phob2_cc_data_pane_g1_ParamLimits

0xe903,	// (0x00075b4f) phob2_cc_data_pane_g1

0xe918,	// (0x00075b64) phob2_cc_data_pane_g2_ParamLimits

0xe918,	// (0x00075b64) phob2_cc_data_pane_g2

0x0001,

0xff54,	// (0x000771a0) phob2_cc_data_pane_g_ParamLimits

0xff54,	// (0x000771a0) phob2_cc_data_pane_g

0xe92a,	// (0x00075b76) phob2_cc_data_pane_t1_ParamLimits

0xe92a,	// (0x00075b76) phob2_cc_data_pane_t1

0xe942,	// (0x00075b8e) phob2_cc_data_pane_t2_ParamLimits

0xe942,	// (0x00075b8e) phob2_cc_data_pane_t2

0xe95a,	// (0x00075ba6) phob2_cc_data_pane_t3_ParamLimits

0xe95a,	// (0x00075ba6) phob2_cc_data_pane_t3

0x0002,

0xff59,	// (0x000771a5) phob2_cc_data_pane_t_ParamLimits

0xff59,	// (0x000771a5) phob2_cc_data_pane_t

0x1397,	// (0x000685e3) phob2_cc_list_pane_ParamLimits

0x1397,	// (0x000685e3) phob2_cc_list_pane

0x13a3,	// (0x000685ef) scroll_pane_cp035_ParamLimits

0x13a3,	// (0x000685ef) scroll_pane_cp035

0x1080,	// (0x000682cc) bg_button_pane_cp033

0x13af,	// (0x000685fb) phob2_cc_button_pane_g1

0x13bb,	// (0x00068607) phob2_cc_button_pane_t1

0x13d0,	// (0x0006861c) phob2_cc_button_pane_t2

0x0001,

0xff60,	// (0x000771ac) phob2_cc_button_pane_t

0xe972,	// (0x00075bbe) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe972,	// (0x00075bbe) list_double_large_graphic_phob2_cc_pane

0xe984,	// (0x00075bd0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe984,	// (0x00075bd0) list_double_large_graphic_phob2_cc_pane_g1

0xa8cd,	// (0x00071b19) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa8cd,	// (0x00071b19) list_double_large_graphic_phob2_cc_pane_g2

0x2bed,	// (0x00069e39) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x2bed,	// (0x00069e39) list_double_large_graphic_phob2_cc_pane_g3

0x2bf9,	// (0x00069e45) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x2bf9,	// (0x00069e45) list_double_large_graphic_phob2_cc_pane_g4

0x2c05,	// (0x00069e51) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x2c05,	// (0x00069e51) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff65,	// (0x000771b1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff65,	// (0x000771b1) list_double_large_graphic_phob2_cc_pane_g

0x2c11,	// (0x00069e5d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x2c11,	// (0x00069e5d) list_double_large_graphic_phob2_cc_pane_t1

0x2c3a,	// (0x00069e86) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x2c3a,	// (0x00069e86) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff70,	// (0x000771bc) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff70,	// (0x000771bc) list_double_large_graphic_phob2_cc_pane_t

0x140e,	// (0x0006865a) list_highlight_pane_cp025_ParamLimits

0x140e,	// (0x0006865a) list_highlight_pane_cp025

0x1080,	// (0x000682cc) bg_button_pane_cp033_ParamLimits

0x13af,	// (0x000685fb) phob2_cc_button_pane_g1_ParamLimits

0x13bb,	// (0x00068607) phob2_cc_button_pane_t1_ParamLimits

0x13d0,	// (0x0006861c) phob2_cc_button_pane_t2_ParamLimits

0xff60,	// (0x000771ac) phob2_cc_button_pane_t_ParamLimits

0x2e4e,	// (0x0006a09a) popup_wgtman_window

0xdccf,	// (0x00074f1b) scroll_pane_cp038

0xa76c,	// (0x000719b8) wgtman_btn_pane_cp_01_ParamLimits

0xa76c,	// (0x000719b8) wgtman_btn_pane_cp_01

0x141c,	// (0x00068668) wgtman_content_pane

0x1425,	// (0x00068671) wgtman_heading_pane

0xa8d9,	// (0x00071b25) bg_heading_pane_cp02

0x142e,	// (0x0006867a) wgtman_heading_pane_g1

0x1436,	// (0x00068682) wgtman_heading_pane_t1

0x1444,	// (0x00068690) scroll_pane_cp036

0x144c,	// (0x00068698) wgtman_list_pane

0x1454,	// (0x000686a0) wgtman_list_pane_t1_ParamLimits

0x1454,	// (0x000686a0) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Large
