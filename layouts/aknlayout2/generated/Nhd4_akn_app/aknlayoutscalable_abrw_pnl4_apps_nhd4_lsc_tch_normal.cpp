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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00025eae };

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
0x1f9d,	// (0x00027e4b) Screen

0x1fa9,	// (0x00027e57) application_window

0x2013,	// (0x00027ec1) area_bottom_pane_ParamLimits

0x2013,	// (0x00027ec1) area_bottom_pane

0x2070,	// (0x00027f1e) area_top_pane_ParamLimits

0x2070,	// (0x00027f1e) area_top_pane

0x20cd,	// (0x00027f7b) call_video_uplink_pane_ParamLimits

0x20cd,	// (0x00027f7b) call_video_uplink_pane

0x20f9,	// (0x00027fa7) main_pane_ParamLimits

0x20f9,	// (0x00027fa7) main_pane

0xbf30,	// (0x00031dde) context_pane

0x6b77,	// (0x0002ca25) navi_pane

0x6b9f,	// (0x0002ca4d) popup_cale_events_window_ParamLimits

0x6b9f,	// (0x0002ca4d) popup_cale_events_window

0xbf43,	// (0x00031df1) popup_mup_playback_window

0x6bb7,	// (0x0002ca65) signal_pane

0x2c29,	// (0x00028ad7) main_browser_pane

0x51c7,	// (0x0002b075) main_burst_pane

0x68d7,	// (0x0002c785) main_calc_pane

0x51c7,	// (0x0002b075) main_cale_day_pane

0x2c29,	// (0x00028ad7) main_cale_month_pane

0x51c7,	// (0x0002b075) main_cale_week_pane

0x51c7,	// (0x0002b075) main_call_pane

0x26f1,	// (0x0002859f) main_call_poc_pane

0x51c7,	// (0x0002b075) main_camera_pane

0x51c7,	// (0x0002b075) main_chi_dic_pane

0x4d38,	// (0x0002abe6) main_clock_pane

0x26f1,	// (0x0002859f) main_fmradio_pane

0x51c7,	// (0x0002b075) main_graph_messa_pane

0x26f1,	// (0x0002859f) main_help_pane

0x2c29,	// (0x00028ad7) main_im_pane

0x294c,	// (0x000287fa) main_image_pane_ParamLimits

0x294c,	// (0x000287fa) main_image_pane

0x26f1,	// (0x0002859f) main_location2_pane

0x51c7,	// (0x0002b075) main_location_pane

0x26f1,	// (0x0002859f) main_messa_pane

0x26f1,	// (0x0002859f) main_mp2_pane

0x51c7,	// (0x0002b075) main_mp_pane

0x26f1,	// (0x0002859f) main_msg_pane

0x26f1,	// (0x0002859f) main_mup_eq_pane

0x26f1,	// (0x0002859f) main_mup_pane

0x51c7,	// (0x0002b075) main_notes_pane

0x26f1,	// (0x0002859f) main_pec_pane

0x26f1,	// (0x0002859f) main_phob_pane

0x26f1,	// (0x0002859f) main_pinb_pane

0x26f1,	// (0x0002859f) main_postcard_pane

0x26f1,	// (0x0002859f) main_qdial_pane

0x51c7,	// (0x0002b075) main_skin_pane

0x26f1,	// (0x0002859f) main_smil2_pane

0x51c7,	// (0x0002b075) main_smil_pane

0x51c7,	// (0x0002b075) main_video_pane

0x51c7,	// (0x0002b075) main_video_tele_pane

0x294c,	// (0x000287fa) main_viewer_pane_ParamLimits

0x294c,	// (0x000287fa) main_viewer_pane

0x51c7,	// (0x0002b075) main_vorec_pane

0x692b,	// (0x0002c7d9) popup_blid_sat_info_window_ParamLimits

0x692b,	// (0x0002c7d9) popup_blid_sat_info_window

0x6983,	// (0x0002c831) popup_dyc_status_message_window_ParamLimits

0x6983,	// (0x0002c831) popup_dyc_status_message_window

0x699b,	// (0x0002c849) popup_grid_large_graphic_window_ParamLimits

0x699b,	// (0x0002c849) popup_grid_large_graphic_window

0x6a51,	// (0x0002c8ff) popup_loc_request_window_ParamLimits

0x6a51,	// (0x0002c8ff) popup_loc_request_window

0x6b4f,	// (0x0002c9fd) popup_wml_address_window_ParamLimits

0x6b4f,	// (0x0002c9fd) popup_wml_address_window

0x6711,	// (0x0002c5bf) call_muted_g1

0x5f38,	// (0x0002bde6) popup_call_audio_conf_window_ParamLimits

0x5f38,	// (0x0002bde6) popup_call_audio_conf_window

0x6725,	// (0x0002c5d3) popup_call_audio_first_window_ParamLimits

0x6725,	// (0x0002c5d3) popup_call_audio_first_window

0x679b,	// (0x0002c649) popup_call_audio_in_window_ParamLimits

0x679b,	// (0x0002c649) popup_call_audio_in_window

0x67d7,	// (0x0002c685) popup_call_audio_out_window_ParamLimits

0x67d7,	// (0x0002c685) popup_call_audio_out_window

0x6811,	// (0x0002c6bf) popup_call_audio_second_window_ParamLimits

0x6811,	// (0x0002c6bf) popup_call_audio_second_window

0x6867,	// (0x0002c715) popup_call_audio_wait_window_ParamLimits

0x6867,	// (0x0002c715) popup_call_audio_wait_window

0x689c,	// (0x0002c74a) popup_number_entry_window_ParamLimits

0x689c,	// (0x0002c74a) popup_number_entry_window

0x2287,	// (0x00028135) bg_popup_call_pane_cp05_ParamLimits

0x2287,	// (0x00028135) bg_popup_call_pane_cp05

0x22a7,	// (0x00028155) popup_number_entry_window_t1

0x22ba,	// (0x00028168) popup_number_entry_window_t2

0x22cc,	// (0x0002817a) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00034f9a) popup_number_entry_window_t

0x2313,	// (0x000281c1) text_title_cp2

0x2326,	// (0x000281d4) bg_popup_call_pane_cp_ParamLimits

0x2326,	// (0x000281d4) bg_popup_call_pane_cp

0x2334,	// (0x000281e2) call_thumbnail_pane

0x233c,	// (0x000281ea) popup_call_audio_in_window_g1_ParamLimits

0x233c,	// (0x000281ea) popup_call_audio_in_window_g1

0x2348,	// (0x000281f6) popup_call_audio_in_window_g2_ParamLimits

0x2348,	// (0x000281f6) popup_call_audio_in_window_g2

0x2354,	// (0x00028202) popup_call_audio_in_window_g3_ParamLimits

0x2354,	// (0x00028202) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00034fa3) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00034fa3) popup_call_audio_in_window_g

0x2360,	// (0x0002820e) popup_call_audio_in_window_t1_ParamLimits

0x2360,	// (0x0002820e) popup_call_audio_in_window_t1

0x237b,	// (0x00028229) popup_call_audio_in_window_t2_ParamLimits

0x237b,	// (0x00028229) popup_call_audio_in_window_t2

0x2396,	// (0x00028244) popup_call_audio_in_window_t3_ParamLimits

0x2396,	// (0x00028244) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00034faa) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00034faa) popup_call_audio_in_window_t

0x2326,	// (0x000281d4) bg_popup_call_pane_cp01_ParamLimits

0x2326,	// (0x000281d4) bg_popup_call_pane_cp01

0x2334,	// (0x000281e2) call_thumbnail_pane_cp02

0x23a9,	// (0x00028257) call_type_pane_cp022

0x23b1,	// (0x0002825f) popup_call_audio_out_window_g1_ParamLimits

0x23b1,	// (0x0002825f) popup_call_audio_out_window_g1

0x23c3,	// (0x00028271) popup_call_audio_out_window_g2_ParamLimits

0x23c3,	// (0x00028271) popup_call_audio_out_window_g2

0x23cf,	// (0x0002827d) popup_call_audio_out_window_g3_ParamLimits

0x23cf,	// (0x0002827d) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00034fb1) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00034fb1) popup_call_audio_out_window_g

0x23e1,	// (0x0002828f) popup_call_audio_out_window_t1_ParamLimits

0x23e1,	// (0x0002828f) popup_call_audio_out_window_t1

0x23f9,	// (0x000282a7) popup_call_audio_out_window_t2_ParamLimits

0x23f9,	// (0x000282a7) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00034fb8) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00034fb8) popup_call_audio_out_window_t

0x240e,	// (0x000282bc) bg_popup_call_pane_ParamLimits

0x240e,	// (0x000282bc) bg_popup_call_pane

0x2492,	// (0x00028340) call_thumbnail_pane_cp_ParamLimits

0x2492,	// (0x00028340) call_thumbnail_pane_cp

0x24b6,	// (0x00028364) call_type_pane_cp01_ParamLimits

0x24b6,	// (0x00028364) call_type_pane_cp01

0x24fa,	// (0x000283a8) popup_call_audio_first_window_g1_ParamLimits

0x24fa,	// (0x000283a8) popup_call_audio_first_window_g1

0x2546,	// (0x000283f4) popup_call_audio_first_window_g2_ParamLimits

0x2546,	// (0x000283f4) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00034fbd) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00034fbd) popup_call_audio_first_window_g

0x258a,	// (0x00028438) popup_call_audio_first_window_t1_ParamLimits

0x258a,	// (0x00028438) popup_call_audio_first_window_t1

0x2636,	// (0x000284e4) popup_call_audio_first_window_t4_ParamLimits

0x2636,	// (0x000284e4) popup_call_audio_first_window_t4

0x26c2,	// (0x00028570) popup_call_audio_first_window_t5_ParamLimits

0x26c2,	// (0x00028570) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00034fc2) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00034fc2) popup_call_audio_first_window_t

0x26f1,	// (0x0002859f) bg_popup_call_pane_cp02

0x26fb,	// (0x000285a9) call_type_pane_cp023

0x2703,	// (0x000285b1) popup_call_audio_wait_window_g1

0x270b,	// (0x000285b9) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00034fc9) popup_call_audio_wait_window_g

0x2713,	// (0x000285c1) popup_call_audio_wait_window_t3

0x2721,	// (0x000285cf) bg_popup_call_pane_cp03_ParamLimits

0x2721,	// (0x000285cf) bg_popup_call_pane_cp03

0x2781,	// (0x0002862f) call_thumbnail_pane_cp011_ParamLimits

0x2781,	// (0x0002862f) call_thumbnail_pane_cp011

0x278d,	// (0x0002863b) call_type_pane_cp034_ParamLimits

0x278d,	// (0x0002863b) call_type_pane_cp034

0x27c9,	// (0x00028677) popup_call_audio_second_window_g1_ParamLimits

0x27c9,	// (0x00028677) popup_call_audio_second_window_g1

0x2805,	// (0x000286b3) popup_call_audio_second_window_g2_ParamLimits

0x2805,	// (0x000286b3) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00034fce) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00034fce) popup_call_audio_second_window_g

0x2841,	// (0x000286ef) popup_call_audio_second_window_t1_ParamLimits

0x2841,	// (0x000286ef) popup_call_audio_second_window_t1

0x28c2,	// (0x00028770) popup_call_audio_second_window_t2_ParamLimits

0x28c2,	// (0x00028770) popup_call_audio_second_window_t2

0x28f8,	// (0x000287a6) popup_call_audio_second_window_t3_ParamLimits

0x28f8,	// (0x000287a6) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00034fd3) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00034fd3) popup_call_audio_second_window_t

0x26f1,	// (0x0002859f) bg_popup_call_pane_cp04

0x292e,	// (0x000287dc) list_conf_pane

0x2936,	// (0x000287e4) popup_call_audio_conf_window_t1

0x2944,	// (0x000287f2) call_thumbnail_pane_g1

0x294c,	// (0x000287fa) bg_pinb_pane_ParamLimits

0x294c,	// (0x000287fa) bg_pinb_pane

0x295a,	// (0x00028808) find_pinb_pane

0x2963,	// (0x00028811) listscroll_pinb_pane_ParamLimits

0x2963,	// (0x00028811) listscroll_pinb_pane

0x2972,	// (0x00028820) pinb_bg_pane_g1

0x297c,	// (0x0002882a) pinb_bg_pane_g2

0x2988,	// (0x00028836) pinb_bg_pane_g3

0x2994,	// (0x00028842) pinb_bg_pane_g4

0x29a0,	// (0x0002884e) pinb_bg_pane_g5

0x29ac,	// (0x0002885a) pinb_bg_pane_g6

0x29b7,	// (0x00028865) pinb_bg_pane_g7

0x29c2,	// (0x00028870) pinb_bg_pane_g8

0x29cd,	// (0x0002887b) pinb_bg_pane_g9

0x29d7,	// (0x00028885) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00034fda) pinb_bg_pane_g

0x29f4,	// (0x000288a2) grid_pinb_pane

0x29fd,	// (0x000288ab) list_pinb_pane

0x2a06,	// (0x000288b4) scroll_pane_cp01_ParamLimits

0x2a06,	// (0x000288b4) scroll_pane_cp01

0x2a18,	// (0x000288c6) find_pinb_pane_g1_ParamLimits

0x2a18,	// (0x000288c6) find_pinb_pane_g1

0x2a30,	// (0x000288de) find_pinb_pane_t1

0x2a42,	// (0x000288f0) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00034ff4) find_pinb_pane_t

0x2a57,	// (0x00028905) input_focus_pane_cp01_ParamLimits

0x2a57,	// (0x00028905) input_focus_pane_cp01

0x2a63,	// (0x00028911) cell_pinb_pane_ParamLimits

0x2a63,	// (0x00028911) cell_pinb_pane

0x2a95,	// (0x00028943) cell_pinb_pane_g1_ParamLimits

0x2a95,	// (0x00028943) cell_pinb_pane_g1

0x2aa5,	// (0x00028953) cell_pinb_pane_g2_ParamLimits

0x2aa5,	// (0x00028953) cell_pinb_pane_g2

0x2ab1,	// (0x0002895f) cell_pinb_pane_g3_ParamLimits

0x2ab1,	// (0x0002895f) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00034ff9) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00034ff9) cell_pinb_pane_g

0x26f1,	// (0x0002859f) grid_highlight_pane_cp01

0x2abd,	// (0x0002896b) list_pinb_item_pane_ParamLimits

0x2abd,	// (0x0002896b) list_pinb_item_pane

0x26f1,	// (0x0002859f) list_highlight_pane_cp02

0x2ad1,	// (0x0002897f) list_pinb_item_pane_g1_ParamLimits

0x2ad1,	// (0x0002897f) list_pinb_item_pane_g1

0x2ade,	// (0x0002898c) list_pinb_item_pane_g2_ParamLimits

0x2ade,	// (0x0002898c) list_pinb_item_pane_g2

0x2aea,	// (0x00028998) list_pinb_item_pane_g3_ParamLimits

0x2aea,	// (0x00028998) list_pinb_item_pane_g3

0x2afb,	// (0x000289a9) list_pinb_item_pane_g4_ParamLimits

0x2afb,	// (0x000289a9) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00035000) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00035000) list_pinb_item_pane_g

0x2b07,	// (0x000289b5) list_pinb_item_pane_t1_ParamLimits

0x2b07,	// (0x000289b5) list_pinb_item_pane_t1

0x0d84,	// (0x00026c32) calc_display_pane

0x0dac,	// (0x00026c5a) calc_paper_pane

0x0dcf,	// (0x00026c7d) grid_calc_pane

0x26f1,	// (0x0002859f) bg_list_pane_cp01

0x2b1e,	// (0x000289cc) clock_g1

0x2b26,	// (0x000289d4) clock_g2

0x0001,

0xf15b,	// (0x00035009) clock_g

0x2b2e,	// (0x000289dc) clock_t1_ParamLimits

0x2b2e,	// (0x000289dc) clock_t1

0x2b43,	// (0x000289f1) clock_t2_ParamLimits

0x2b43,	// (0x000289f1) clock_t2

0x2b55,	// (0x00028a03) clock_t3_ParamLimits

0x2b55,	// (0x00028a03) clock_t3

0x2b67,	// (0x00028a15) clock_t4_ParamLimits

0x2b67,	// (0x00028a15) clock_t4

0x2b79,	// (0x00028a27) clock_t5_ParamLimits

0x2b79,	// (0x00028a27) clock_t5

0x2b8e,	// (0x00028a3c) clock_t6_ParamLimits

0x2b8e,	// (0x00028a3c) clock_t6

0x2ba0,	// (0x00028a4e) clock_t7_ParamLimits

0x2ba0,	// (0x00028a4e) clock_t7

0x2bb2,	// (0x00028a60) clock_t8_ParamLimits

0x2bb2,	// (0x00028a60) clock_t8

0x2bc6,	// (0x00028a74) clock_t9_ParamLimits

0x2bc6,	// (0x00028a74) clock_t9

0x0008,

0xf160,	// (0x0003500e) clock_t_ParamLimits

0xf160,	// (0x0003500e) clock_t

0x2bda,	// (0x00028a88) popup_clock_analogue_window_cp02

0x2bda,	// (0x00028a88) popup_clock_digital_window_cp01

0x2be2,	// (0x00028a90) listscroll_help_pane

0x26f1,	// (0x0002859f) phob_pre_status_pane

0x2bec,	// (0x00028a9a) grid_qdial_pane

0x26f1,	// (0x0002859f) listscroll_mce_pane

0x2bf6,	// (0x00028aa4) bg_notes_pane

0x2c00,	// (0x00028aae) list_notes_pane

0x2c0a,	// (0x00028ab8) scroll_pane_cp06

0x2c15,	// (0x00028ac3) bg_calc_paper_pane

0xb1c8,	// (0x00031076) list_calc_pane

0x2c29,	// (0x00028ad7) bg_calc_display_pane

0x0dfd,	// (0x00026cab) calc_display_pane_t1

0x0e0f,	// (0x00026cbd) calc_display_pane_t2

0xb1e2,	// (0x00031090) calc_display_pane_t3

0x0002,

0xf173,	// (0x00035021) calc_display_pane_t

0x0e21,	// (0x00026ccf) cell_calc_pane_ParamLimits

0x0e21,	// (0x00026ccf) cell_calc_pane

0x2c35,	// (0x00028ae3) bg_calc_paper_pane_g1

0x2c41,	// (0x00028aef) bg_calc_paper_pane_g2

0x2c4d,	// (0x00028afb) bg_calc_paper_pane_g3

0x2c59,	// (0x00028b07) bg_calc_paper_pane_g4

0x2c65,	// (0x00028b13) bg_calc_paper_pane_g5

0x2c71,	// (0x00028b1f) bg_calc_paper_pane_g6

0x2c80,	// (0x00028b2e) bg_calc_paper_pane_g7

0x2c8f,	// (0x00028b3d) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00035028) bg_calc_paper_pane_g

0x2ca2,	// (0x00028b50) calc_bg_paper_pane_g9

0x2cb5,	// (0x00028b63) list_calc_item_pane_ParamLimits

0x2cb5,	// (0x00028b63) list_calc_item_pane

0x2ccb,	// (0x00028b79) list_calc_item_pane_g1

0xb1f4,	// (0x000310a2) list_calc_item_pane_t1_ParamLimits

0xb1f4,	// (0x000310a2) list_calc_item_pane_t1

0x0e56,	// (0x00026d04) list_calc_item_pane_t2_ParamLimits

0x0e56,	// (0x00026d04) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00035039) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00035039) list_calc_item_pane_t

0x2cd8,	// (0x00028b86) cell_calc_pane_g1

0x2ce2,	// (0x00028b90) grid_highlight_pane_cp02

0x2d04,	// (0x00028bb2) bg_calc_display_pane_g1

0xb206,	// (0x000310b4) bg_calc_display_pane_g2

0x2d0d,	// (0x00028bbb) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00035043) bg_calc_display_pane_g

0x0e88,	// (0x00026d36) cell_qdial_pane_ParamLimits

0x0e88,	// (0x00026d36) cell_qdial_pane

0x2d16,	// (0x00028bc4) cell_qdial_pane_g1_ParamLimits

0x2d16,	// (0x00028bc4) cell_qdial_pane_g1

0x2d2c,	// (0x00028bda) cell_qdial_pane_g2_ParamLimits

0x2d2c,	// (0x00028bda) cell_qdial_pane_g2

0x2d3d,	// (0x00028beb) cell_qdial_pane_g3_ParamLimits

0x2d3d,	// (0x00028beb) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0003504a) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0003504a) cell_qdial_pane_g

0x2d5f,	// (0x00028c0d) cell_qdial_pane_t1_ParamLimits

0x2d5f,	// (0x00028c0d) cell_qdial_pane_t1

0x2d77,	// (0x00028c25) cell_qdial_pane_t2_ParamLimits

0x2d77,	// (0x00028c25) cell_qdial_pane_t2

0x2d8a,	// (0x00028c38) cell_qdial_pane_t3_ParamLimits

0x2d8a,	// (0x00028c38) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00035053) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00035053) cell_qdial_pane_t

0x26f1,	// (0x0002859f) grid_highlight_pane_cp04

0x2d9d,	// (0x00028c4b) thumbnail_qdial_pane_ParamLimits

0x2d9d,	// (0x00028c4b) thumbnail_qdial_pane

0x2df9,	// (0x00028ca7) list_help_pane

0x2e02,	// (0x00028cb0) scroll_pane_cp02

0x2e0b,	// (0x00028cb9) help_list_pane_t1_ParamLimits

0x2e0b,	// (0x00028cb9) help_list_pane_t1

0xb210,	// (0x000310be) bg_notes_pane_g2

0xb218,	// (0x000310c6) bg_notes_pane_g3

0xb220,	// (0x000310ce) notes_bg_pane_g1

0xb228,	// (0x000310d6) notes_bg_pane_g4

0xb230,	// (0x000310de) notes_bg_pane_g5

0xb238,	// (0x000310e6) notes_bg_pane_g6

0xb240,	// (0x000310ee) notes_bg_pane_g7

0xb248,	// (0x000310f6) notes_bg_pane_g8

0xb250,	// (0x000310fe) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00035071) notes_bg_pane_g

0x2e2b,	// (0x00028cd9) list_notes_text_pane_ParamLimits

0x2e2b,	// (0x00028cd9) list_notes_text_pane

0x2e42,	// (0x00028cf0) list_notes_text_pane_g1

0x2e4b,	// (0x00028cf9) list_notes_text_pane_t1

0x2c29,	// (0x00028ad7) listscroll_cale_week_pane

0x2e87,	// (0x00028d35) bg_cale_heading_pane

0x2e9f,	// (0x00028d4d) bg_cale_pane_cp01

0x2eb8,	// (0x00028d66) cale_week_corner_pane

0x2ec9,	// (0x00028d77) cale_week_day_heading_pane

0x2ee1,	// (0x00028d8f) cale_week_scroll_pane_g1

0x2ef6,	// (0x00028da4) cale_week_scroll_pane_g2

0x2f07,	// (0x00028db5) cale_week_scroll_pane_g3

0x2f18,	// (0x00028dc6) cale_week_scroll_pane_g4

0x2f29,	// (0x00028dd7) cale_week_scroll_pane_g5

0x2f3c,	// (0x00028dea) cale_week_scroll_pane_g6

0x2f4f,	// (0x00028dfd) cale_week_scroll_pane_g7

0x2f62,	// (0x00028e10) cale_week_scroll_pane_g8

0x2f75,	// (0x00028e23) cale_week_scroll_pane_g9

0x2f86,	// (0x00028e34) cale_week_scroll_pane_g10

0x2f97,	// (0x00028e45) cale_week_scroll_pane_g11

0x2fa8,	// (0x00028e56) cale_week_scroll_pane_g12

0x2fb9,	// (0x00028e67) cale_week_scroll_pane_g13

0x2fca,	// (0x00028e78) cale_week_scroll_pane_g14

0x2fdb,	// (0x00028e89) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00035080) cale_week_scroll_pane_g

0x2fec,	// (0x00028e9a) cale_week_time_pane

0x2fff,	// (0x00028ead) grid_cale_week_pane

0x3026,	// (0x00028ed4) scroll_pane_cp08

0x3040,	// (0x00028eee) cell_cale_week_pane_ParamLimits

0x3040,	// (0x00028eee) cell_cale_week_pane

0x3080,	// (0x00028f2e) cale_week_day_heading_pane_t1

0x3094,	// (0x00028f42) cale_week_day_heading_pane_t2

0x30a8,	// (0x00028f56) cale_week_day_heading_pane_t3

0x30bc,	// (0x00028f6a) cale_week_day_heading_pane_t4

0x30d0,	// (0x00028f7e) cale_week_day_heading_pane_t5

0x30e4,	// (0x00028f92) cale_week_day_heading_pane_t6

0x30fa,	// (0x00028fa8) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0003509f) cale_week_day_heading_pane_t

0x310e,	// (0x00028fbc) bg_cale_side_pane

0x0e9c,	// (0x00026d4a) cale_week_time_pane_t1

0x0eb4,	// (0x00026d62) cale_week_time_pane_t2

0x0ecc,	// (0x00026d7a) cale_week_time_pane_t3

0x0ee4,	// (0x00026d92) cale_week_time_pane_t4

0x0efc,	// (0x00026daa) cale_week_time_pane_t5

0x0f14,	// (0x00026dc2) cale_week_time_pane_t6

0x0f2c,	// (0x00026dda) cale_week_time_pane_t7

0x0f44,	// (0x00026df2) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x000350ae) cale_week_time_pane_t

0x311c,	// (0x00028fca) cell_cale_week_pane_g2

0x3135,	// (0x00028fe3) cell_cale_week_pane_g3_ParamLimits

0x3135,	// (0x00028fe3) cell_cale_week_pane_g3

0x314d,	// (0x00028ffb) grid_highlight_pane_cp07

0x3155,	// (0x00029003) listscroll_gms_pane

0x315f,	// (0x0002900d) grid_gms_pane

0x3168,	// (0x00029016) listscroll_gms_pane_g1

0x3170,	// (0x0002901e) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x000350bf) listscroll_gms_pane_g

0x3178,	// (0x00029026) scroll_pane_cp010

0x3183,	// (0x00029031) cell_gms_pane_ParamLimits

0x3183,	// (0x00029031) cell_gms_pane

0x3196,	// (0x00029044) cell_gms_pane_g1

0x319e,	// (0x0002904c) cell_gms_pane_g2

0x2e42,	// (0x00028cf0) cell_gms_pane_g3

0x31a6,	// (0x00029054) cell_gms_pane_g4

0x0003,

0xf216,	// (0x000350c4) cell_gms_pane_g

0x31af,	// (0x0002905d) grid_highlight_pane_cp09

0x66b9,	// (0x0002c567) phob_pre_status_pane_g1

0x66c1,	// (0x0002c56f) phob_pre_status_pane_g2

0x66c9,	// (0x0002c577) phob_pre_status_pane_g3

0x66d1,	// (0x0002c57f) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x000354b3) phob_pre_status_pane_g

0x66e3,	// (0x0002c591) phob_pre_status_pane_t1

0x66f1,	// (0x0002c59f) phob_pre_status_pane_t2

0x6701,	// (0x0002c5af) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x000354be) phob_pre_status_pane_t

0x26f1,	// (0x0002859f) bg_list_pane_cp05

0xb260,	// (0x0003110e) grid_vorec_pane

0xb268,	// (0x00031116) vorec_t1

0xb276,	// (0x00031124) vorec_t2

0xb284,	// (0x00031132) vorec_t3

0xb292,	// (0x00031140) vorec_t4

0xb2a0,	// (0x0003114e) vorec_t5

0xb2ae,	// (0x0003115c) vorec_t6

0x0006,

0xf21f,	// (0x000350cd) vorec_t

0xb2ca,	// (0x00031178) wait_bar_pane_cp01

0x31b7,	// (0x00029065) cell_vorec_pane_ParamLimits

0x31b7,	// (0x00029065) cell_vorec_pane

0x31ca,	// (0x00029078) cell_vorec_pane_g1

0x26f1,	// (0x0002859f) grid_highlight_pane_cp05

0x31ec,	// (0x0002909a) cams_zoom_pane

0x31fb,	// (0x000290a9) image_vga_pane

0x3215,	// (0x000290c3) main_camera_pane_g1

0x3227,	// (0x000290d5) main_camera_pane_g2

0x3239,	// (0x000290e7) main_camera_pane_g3

0x324b,	// (0x000290f9) main_camera_pane_g4

0x325d,	// (0x0002910b) main_camera_pane_g5

0x326f,	// (0x0002911d) main_camera_pane_g6

0x3281,	// (0x0002912f) main_camera_pane_g7

0x0007,

0xf22e,	// (0x000350dc) main_camera_pane_g

0x329f,	// (0x0002914d) main_camera_pane_t1

0x32b5,	// (0x00029163) main_camera_pane_t2

0x0001,

0xf23f,	// (0x000350ed) main_camera_pane_t

0x32f1,	// (0x0002919f) cams_zoom_pane_cp_ParamLimits

0x32f1,	// (0x0002919f) cams_zoom_pane_cp

0x3319,	// (0x000291c7) image_cif_pane_ParamLimits

0x3319,	// (0x000291c7) image_cif_pane

0x3354,	// (0x00029202) image_subqcif_pane

0x335c,	// (0x0002920a) main_video_pane_g1_ParamLimits

0x335c,	// (0x0002920a) main_video_pane_g1

0x3380,	// (0x0002922e) main_video_pane_g2_ParamLimits

0x3380,	// (0x0002922e) main_video_pane_g2

0x33b6,	// (0x00029264) main_video_pane_g3_ParamLimits

0x33b6,	// (0x00029264) main_video_pane_g3

0x33e6,	// (0x00029294) main_video_pane_g4_ParamLimits

0x33e6,	// (0x00029294) main_video_pane_g4

0x3416,	// (0x000292c4) main_video_pane_g5_ParamLimits

0x3416,	// (0x000292c4) main_video_pane_g5

0x3430,	// (0x000292de) main_video_pane_g6_ParamLimits

0x3430,	// (0x000292de) main_video_pane_g6

0x0006,

0xf244,	// (0x000350f2) main_video_pane_g_ParamLimits

0xf244,	// (0x000350f2) main_video_pane_g

0x345b,	// (0x00029309) main_video_pane_t1_ParamLimits

0x345b,	// (0x00029309) main_video_pane_t1

0x34a4,	// (0x00029352) cams_zoom_pane_g1

0x34ad,	// (0x0002935b) cams_zoom_pane_g2

0x34b6,	// (0x00029364) cams_zoom_pane_g3

0x34bf,	// (0x0002936d) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00035101) cams_zoom_pane_g

0x34dc,	// (0x0002938a) grid_cams_pane

0x34f6,	// (0x000293a4) linegrid_cams_pane

0x3509,	// (0x000293b7) cell_cams_pane_ParamLimits

0x3509,	// (0x000293b7) cell_cams_pane

0x3529,	// (0x000293d7) cams_burst_image_pane

0x3531,	// (0x000293df) cell_cams_pane_g1

0x26f1,	// (0x0002859f) grid_highlight_pane_cp03

0x2cd8,	// (0x00028b86) mp_bg_pane_g1

0x26f1,	// (0x0002859f) bg_list_pane_cp03

0xbe08,	// (0x00031cb6) bg_mp_pane

0xbe10,	// (0x00031cbe) grid_mp_pane

0xbe18,	// (0x00031cc6) media_player_g1

0xbe20,	// (0x00031cce) media_player_t1

0xbe2e,	// (0x00031cdc) media_player_t2

0xbe3c,	// (0x00031cea) media_player_t3

0xbe4a,	// (0x00031cf8) media_player_t4

0xbe58,	// (0x00031d06) media_player_t5

0xbe66,	// (0x00031d14) media_player_t6

0xbe74,	// (0x00031d22) media_player_t7

0x0006,

0xf5ef,	// (0x0003549d) media_player_t

0xbe82,	// (0x00031d30) wait_bar_pane_cp02

0xf5d4,	// (0x00035482) main_usb_pane_t

0x66b0,	// (0x0002c55e) cell_mp_pane

0x2cd8,	// (0x00028b86) cell_mp_pane_g1

0x26f1,	// (0x0002859f) grid_highlight_pane_cp06

0x3648,	// (0x000294f6) grid_skin_colour_pane

0x3650,	// (0x000294fe) list_highlight_pane_cp03

0x3658,	// (0x00029506) skin_g1

0x3660,	// (0x0002950e) skin_t1

0x366f,	// (0x0002951d) skin_t2

0x0001,

0xf288,	// (0x00035136) skin_t

0x367d,	// (0x0002952b) cell_skin_colour_pane_ParamLimits

0x367d,	// (0x0002952b) cell_skin_colour_pane

0x369d,	// (0x0002954b) cell_skin_colour_pane_g1

0x3708,	// (0x000295b6) call_video_g1_ParamLimits

0x3708,	// (0x000295b6) call_video_g1

0x3724,	// (0x000295d2) call_video_g2_ParamLimits

0x3724,	// (0x000295d2) call_video_g2

0x0001,

0xf28d,	// (0x0003513b) call_video_g_ParamLimits

0xf28d,	// (0x0003513b) call_video_g

0x3776,	// (0x00029624) call_video_uplink_pane_cp1_ParamLimits

0x3776,	// (0x00029624) call_video_uplink_pane_cp1

0x37db,	// (0x00029689) call_video_uplink_pane_cp2

0x381d,	// (0x000296cb) video_down_crop_pane_ParamLimits

0x381d,	// (0x000296cb) video_down_crop_pane

0x3906,	// (0x000297b4) video_down_pane_ParamLimits

0x3906,	// (0x000297b4) video_down_pane

0x39fd,	// (0x000298ab) video_down_subqcif_pane_ParamLimits

0x39fd,	// (0x000298ab) video_down_subqcif_pane

0x3a15,	// (0x000298c3) video_down_subqcif_pane_cp_ParamLimits

0x3a15,	// (0x000298c3) video_down_subqcif_pane_cp

0x3a50,	// (0x000298fe) im_reading_pane_ParamLimits

0x3a50,	// (0x000298fe) im_reading_pane

0x3a62,	// (0x00029910) im_writing_pane_ParamLimits

0x3a62,	// (0x00029910) im_writing_pane

0x3a80,	// (0x0002992e) im_reading_pane_t1

0x3abc,	// (0x0002996a) list_im_pane

0x3acd,	// (0x0002997b) scroll_pane_cp07

0x3ae6,	// (0x00029994) im_writing_pane_t1_ParamLimits

0x3ae6,	// (0x00029994) im_writing_pane_t1

0x3afb,	// (0x000299a9) im_writing_pane_t2_ParamLimits

0x3afb,	// (0x000299a9) im_writing_pane_t2

0x0001,

0xf297,	// (0x00035145) im_writing_pane_t_ParamLimits

0xf297,	// (0x00035145) im_writing_pane_t

0x26f1,	// (0x0002859f) input_focus_pane_cp04

0x26f1,	// (0x0002859f) input_focus_pane_cp05

0x3b18,	// (0x000299c6) list_im_single_pane_ParamLimits

0x3b18,	// (0x000299c6) list_im_single_pane

0x3b2e,	// (0x000299dc) list_single_im_pane_t1

0x6670,	// (0x0002c51e) blid_accuracy_pane

0x6678,	// (0x0002c526) blid_compass_pane

0x6682,	// (0x0002c530) main_location_t1

0x6692,	// (0x0002c540) main_location_t2

0x66a2,	// (0x0002c550) main_location_t3

0x0002,

0xf5fe,	// (0x000354ac) main_location_t

0x26f1,	// (0x0002859f) aid_levels_location

0x2cd8,	// (0x00028b86) blid_accuracy_pane_g1

0x2cd8,	// (0x00028b86) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x000351a7) blid_accuracy_pane_g

0x3b68,	// (0x00029a16) wml_content_pane

0x3ba6,	// (0x00029a54) wml_button_pane_ParamLimits

0x3ba6,	// (0x00029a54) wml_button_pane

0x3bba,	// (0x00029a68) wml_list_single_large_pane_ParamLimits

0x3bba,	// (0x00029a68) wml_list_single_large_pane

0x3bd1,	// (0x00029a7f) wml_list_single_medium_pane_ParamLimits

0x3bd1,	// (0x00029a7f) wml_list_single_medium_pane

0x3be9,	// (0x00029a97) wml_list_single_small_pane_ParamLimits

0x3be9,	// (0x00029a97) wml_list_single_small_pane

0x3c07,	// (0x00029ab5) wml_selection_box_pane_ParamLimits

0x3c07,	// (0x00029ab5) wml_selection_box_pane

0x3c1a,	// (0x00029ac8) wml_list_single_pane_t1

0x3c29,	// (0x00029ad7) wml_list_single_medium_pane_t1

0x3c38,	// (0x00029ae6) wml_list_single_large_pane_t1

0x3c47,	// (0x00029af5) input_focus_pane_cp02_ParamLimits

0x3c47,	// (0x00029af5) input_focus_pane_cp02

0x3c5a,	// (0x00029b08) wml_selection_box_pane_g1

0x3c63,	// (0x00029b11) wml_selection_box_pane_t1_ParamLimits

0x3c63,	// (0x00029b11) wml_selection_box_pane_t1

0x294c,	// (0x000287fa) bg_wml_button_pane_ParamLimits

0x294c,	// (0x000287fa) bg_wml_button_pane

0x3c7b,	// (0x00029b29) wml_button_pane_g1

0x3c83,	// (0x00029b31) wml_button_pane_t1

0x3c7b,	// (0x00029b29) wml_button_bg_pane_g1

0x3c93,	// (0x00029b41) wml_button_bg_pane_g2

0x3c9b,	// (0x00029b49) wml_button_bg_pane_g3

0x3ca3,	// (0x00029b51) wml_button_bg_pane_g4

0x3cab,	// (0x00029b59) wml_button_bg_pane_g5

0x3cb3,	// (0x00029b61) wml_button_bg_pane_g6

0x3cbb,	// (0x00029b69) wml_button_bg_pane_g7

0x3cc3,	// (0x00029b71) wml_button_bg_pane_g8

0x3ccb,	// (0x00029b79) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0003514a) wml_button_bg_pane_g

0x3cd3,	// (0x00029b81) bg_list_pane_cp02

0x3cdb,	// (0x00029b89) mce_header_pane_ParamLimits

0x3cdb,	// (0x00029b89) mce_header_pane

0x3cf1,	// (0x00029b9f) mce_icon_pane

0x3cf1,	// (0x00029b9f) mce_image_pane

0x3cfa,	// (0x00029ba8) mce_text_pane_ParamLimits

0x3cfa,	// (0x00029ba8) mce_text_pane

0x3d0d,	// (0x00029bbb) scroll_pane_cp03

0x3b9e,	// (0x00029a4c) scroll_pane_cp04

0x3d17,	// (0x00029bc5) scroll_pane_cp05_ParamLimits

0x3d17,	// (0x00029bc5) scroll_pane_cp05

0x3d23,	// (0x00029bd1) mce_header_field_pane_ParamLimits

0x3d23,	// (0x00029bd1) mce_header_field_pane

0x3d3a,	// (0x00029be8) mce_header_field_pane_2_ParamLimits

0x3d3a,	// (0x00029be8) mce_header_field_pane_2

0x3d50,	// (0x00029bfe) mce_header_field_pane_3

0x3d58,	// (0x00029c06) list_single_mce_message_pane_ParamLimits

0x3d58,	// (0x00029c06) list_single_mce_message_pane

0x3d70,	// (0x00029c1e) list_single_mce_smart_pane_ParamLimits

0x3d70,	// (0x00029c1e) list_single_mce_smart_pane

0x3d93,	// (0x00029c41) input_focus_pane_cp03

0x3d9c,	// (0x00029c4a) list_header_data_pane

0x3da4,	// (0x00029c52) mce_header_field_pane_t1

0x3db4,	// (0x00029c62) list_single_mce_header_pane_ParamLimits

0x3db4,	// (0x00029c62) list_single_mce_header_pane

0x3dc8,	// (0x00029c76) list_single_mce_header_pane_t1

0x3dd7,	// (0x00029c85) list_single_mce_message_pane_g1

0x3ddf,	// (0x00029c8d) list_single_mce_message_pane_t1

0x3e0b,	// (0x00029cb9) bg_cale_heading_pane_cp01_ParamLimits

0x3e0b,	// (0x00029cb9) bg_cale_heading_pane_cp01

0x3e2e,	// (0x00029cdc) bg_cale_pane_cp02_ParamLimits

0x3e2e,	// (0x00029cdc) bg_cale_pane_cp02

0x3e51,	// (0x00029cff) cale_month_corner_pane

0x3e67,	// (0x00029d15) cale_month_day_heading_pane_ParamLimits

0x3e67,	// (0x00029d15) cale_month_day_heading_pane

0x3e9a,	// (0x00029d48) cale_month_pane_g1_ParamLimits

0x3e9a,	// (0x00029d48) cale_month_pane_g1

0x3eb6,	// (0x00029d64) cale_month_pane_g2_ParamLimits

0x3eb6,	// (0x00029d64) cale_month_pane_g2

0x3ed1,	// (0x00029d7f) cale_month_pane_g3_ParamLimits

0x3ed1,	// (0x00029d7f) cale_month_pane_g3

0x3efd,	// (0x00029dab) cale_month_pane_g4_ParamLimits

0x3efd,	// (0x00029dab) cale_month_pane_g4

0x3f29,	// (0x00029dd7) cale_month_pane_g5_ParamLimits

0x3f29,	// (0x00029dd7) cale_month_pane_g5

0x3f5d,	// (0x00029e0b) cale_month_pane_g6_ParamLimits

0x3f5d,	// (0x00029e0b) cale_month_pane_g6

0x3f99,	// (0x00029e47) cale_month_pane_g7_ParamLimits

0x3f99,	// (0x00029e47) cale_month_pane_g7

0x3fd5,	// (0x00029e83) cale_month_pane_g8_ParamLimits

0x3fd5,	// (0x00029e83) cale_month_pane_g8

0x4011,	// (0x00029ebf) cale_month_pane_g9_ParamLimits

0x4011,	// (0x00029ebf) cale_month_pane_g9

0x404b,	// (0x00029ef9) cale_month_pane_g10_ParamLimits

0x404b,	// (0x00029ef9) cale_month_pane_g10

0x4085,	// (0x00029f33) cale_month_pane_g11_ParamLimits

0x4085,	// (0x00029f33) cale_month_pane_g11

0x40bf,	// (0x00029f6d) cale_month_pane_g12_ParamLimits

0x40bf,	// (0x00029f6d) cale_month_pane_g12

0x40f9,	// (0x00029fa7) cale_month_pane_g13_ParamLimits

0x40f9,	// (0x00029fa7) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0003515d) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0003515d) cale_month_pane_g

0x4145,	// (0x00029ff3) cale_month_week_pane

0x4158,	// (0x0002a006) grid_cale_month_pane_ParamLimits

0x4158,	// (0x0002a006) grid_cale_month_pane

0x4186,	// (0x0002a034) cale_month_day_heading_pane_t1

0x41e4,	// (0x0002a092) cale_month_day_heading_pane_t2

0x4249,	// (0x0002a0f7) cale_month_day_heading_pane_t3

0x42ae,	// (0x0002a15c) cale_month_day_heading_pane_t4

0x4313,	// (0x0002a1c1) cale_month_day_heading_pane_t5

0x4388,	// (0x0002a236) cale_month_day_heading_pane_t6

0x43fd,	// (0x0002a2ab) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00035178) cale_month_day_heading_pane_t

0x310e,	// (0x00028fbc) bg_cale_side_pane_cp01

0x4472,	// (0x0002a320) cale_month_week_pane_t1

0x4489,	// (0x0002a337) cale_month_week_pane_t2

0x44a0,	// (0x0002a34e) cale_month_week_pane_t3

0x44b7,	// (0x0002a365) cale_month_week_pane_t4

0x44ce,	// (0x0002a37c) cale_month_week_pane_t5

0x44e5,	// (0x0002a393) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00035187) cale_month_week_pane_t

0x44fc,	// (0x0002a3aa) cell_cale_month_pane_ParamLimits

0x44fc,	// (0x0002a3aa) cell_cale_month_pane

0xb2d2,	// (0x00031180) cell_cale_month_pane_g1

0x0f5c,	// (0x00026e0a) cell_cale_month_pane_t1_ParamLimits

0x0f5c,	// (0x00026e0a) cell_cale_month_pane_t1

0x314d,	// (0x00028ffb) grid_highlight_pane_cp08

0x2cd8,	// (0x00028b86) main_smil_g1

0x45fc,	// (0x0002a4aa) smil_status_pane

0x4607,	// (0x0002a4b5) smil_text_pane

0xbd20,	// (0x00031bce) bg_popup_call3_rect_pane_g8

0xbd28,	// (0x00031bd6) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00035440) bg_popup_call3_rect_pane_g

0xbfaa,	// (0x00031e58) smil_status_volume_pane_g1

0x461b,	// (0x0002a4c9) smil_status_pane_t1

0xbfdd,	// (0x00031e8b) volume_smil_pane

0x4632,	// (0x0002a4e0) list_smil_text_pane

0x463c,	// (0x0002a4ea) scroll_pane_cp011

0x4647,	// (0x0002a4f5) smil_text_list_pane_t1_ParamLimits

0x4647,	// (0x0002a4f5) smil_text_list_pane_t1

0xb2de,	// (0x0003118c) aid_volume_smil_ParamLimits

0xb2de,	// (0x0003118c) aid_volume_smil

0x2cd8,	// (0x00028b86) smil_volume_pane_g1

0x2cd8,	// (0x00028b86) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x000351a7) smil_volume_pane_g

0x2c29,	// (0x00028ad7) listscroll_cale_day_pane

0x469b,	// (0x0002a549) bg_cale_pane

0x46b3,	// (0x0002a561) list_cale_pane

0x46c4,	// (0x0002a572) scroll_pane_cp09

0x46d5,	// (0x0002a583) cale_bg_pane_g1

0x46dd,	// (0x0002a58b) cale_bg_pane_g2

0x46e5,	// (0x0002a593) cale_bg_pane_g3

0x46ed,	// (0x0002a59b) cale_bg_pane_g4

0x46f5,	// (0x0002a5a3) cale_bg_pane_g5

0x46fd,	// (0x0002a5ab) cale_bg_pane_g6

0x4705,	// (0x0002a5b3) cale_bg_pane_g7

0x470d,	// (0x0002a5bb) cale_bg_pane_g8

0x4715,	// (0x0002a5c3) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x000351ac) cale_bg_pane_g

0x471d,	// (0x0002a5cb) list_cale_time_pane_ParamLimits

0x471d,	// (0x0002a5cb) list_cale_time_pane

0x4732,	// (0x0002a5e0) list_cale_time_pane_g1_ParamLimits

0x4732,	// (0x0002a5e0) list_cale_time_pane_g1

0x473e,	// (0x0002a5ec) list_cale_time_pane_g2_ParamLimits

0x473e,	// (0x0002a5ec) list_cale_time_pane_g2

0x474b,	// (0x0002a5f9) list_cale_time_pane_g3_ParamLimits

0x474b,	// (0x0002a5f9) list_cale_time_pane_g3

0x4767,	// (0x0002a615) list_cale_time_pane_g4_ParamLimits

0x4767,	// (0x0002a615) list_cale_time_pane_g4

0x4775,	// (0x0002a623) list_cale_time_pane_g5_ParamLimits

0x4775,	// (0x0002a623) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x000351bf) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x000351bf) list_cale_time_pane_g

0x4790,	// (0x0002a63e) list_cale_time_pane_t1_ParamLimits

0x4790,	// (0x0002a63e) list_cale_time_pane_t1

0x47b8,	// (0x0002a666) list_cale_time_pane_t2_ParamLimits

0x47b8,	// (0x0002a666) list_cale_time_pane_t2

0x4f5d,	// (0x0002ae0b) aid_blid_cardinal_pane

0x4fa7,	// (0x0002ae55) compass_pane_t4

0x47e0,	// (0x0002a68e) list_cale_time_pane_t4_ParamLimits

0x47e0,	// (0x0002a68e) list_cale_time_pane_t4

0x4fb5,	// (0x0002ae63) compass_pane_t5

0x4fc3,	// (0x0002ae71) compass_pane_t6

0x4fd1,	// (0x0002ae7f) compass_pane_t7

0x5051,	// (0x0002aeff) navi_pane_cc_t1

0x526e,	// (0x0002b11c) aid_phob_thumbnail_center_pane

0x593a,	// (0x0002b7e8) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x000351cc) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x000351cc) list_cale_time_pane_t

0x2326,	// (0x000281d4) bg_popup_window_pane_cp02_ParamLimits

0x2326,	// (0x000281d4) bg_popup_window_pane_cp02

0x4808,	// (0x0002a6b6) heading_pane_cp01_ParamLimits

0x4808,	// (0x0002a6b6) heading_pane_cp01

0x4814,	// (0x0002a6c2) loc_req_pane_ParamLimits

0x4814,	// (0x0002a6c2) loc_req_pane

0x4824,	// (0x0002a6d2) loc_type_pane_ParamLimits

0x4824,	// (0x0002a6d2) loc_type_pane

0x4836,	// (0x0002a6e4) loc_type_pane_t1_ParamLimits

0x4836,	// (0x0002a6e4) loc_type_pane_t1

0x4848,	// (0x0002a6f6) loc_type_pane_t2_ParamLimits

0x4848,	// (0x0002a6f6) loc_type_pane_t2

0x485a,	// (0x0002a708) loc_type_pane_t3_ParamLimits

0x485a,	// (0x0002a708) loc_type_pane_t3

0x0002,

0xf325,	// (0x000351d3) loc_type_pane_t_ParamLimits

0xf325,	// (0x000351d3) loc_type_pane_t

0x486c,	// (0x0002a71a) list_loc_req_pane

0x4876,	// (0x0002a724) scroll_pane_cp012

0x4881,	// (0x0002a72f) list_single_loc_request_popup_menu_pane_ParamLimits

0x4881,	// (0x0002a72f) list_single_loc_request_popup_menu_pane

0x488e,	// (0x0002a73c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x488e,	// (0x0002a73c) list_single_loc_request_popup_menu_pane_g1

0x489a,	// (0x0002a748) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x489a,	// (0x0002a748) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x000351da) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x000351da) list_single_loc_request_popup_menu_pane_g

0x48a6,	// (0x0002a754) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x48a6,	// (0x0002a754) list_single_loc_request_popup_menu_pane_t1

0x294c,	// (0x000287fa) bg_popup_window_pane_cp03_ParamLimits

0x294c,	// (0x000287fa) bg_popup_window_pane_cp03

0x48bc,	// (0x0002a76a) heading_loc_req_pane_ParamLimits

0x48bc,	// (0x0002a76a) heading_loc_req_pane

0x48c8,	// (0x0002a776) popup_dyc_status_message_window_g1_ParamLimits

0x48c8,	// (0x0002a776) popup_dyc_status_message_window_g1

0x48dc,	// (0x0002a78a) popup_dyc_status_message_window_t1_ParamLimits

0x48dc,	// (0x0002a78a) popup_dyc_status_message_window_t1

0x48f1,	// (0x0002a79f) popup_dyc_status_message_window_t2_ParamLimits

0x48f1,	// (0x0002a79f) popup_dyc_status_message_window_t2

0x4906,	// (0x0002a7b4) popup_dyc_status_message_window_t3_ParamLimits

0x4906,	// (0x0002a7b4) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x000351df) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x000351df) popup_dyc_status_message_window_t

0x26f1,	// (0x0002859f) bg_heading_pane_cp01

0x4922,	// (0x0002a7d0) heading_loc_req_pane_g1

0x492a,	// (0x0002a7d8) heading_loc_req_pane_g2

0x4932,	// (0x0002a7e0) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x000351e6) heading_loc_req_pane_g

0x493a,	// (0x0002a7e8) heading_loc_req_pane_t1

0x4a30,	// (0x0002a8de) bg_popup_sub_pane_cp01_ParamLimits

0x4a30,	// (0x0002a8de) bg_popup_sub_pane_cp01

0x4a3e,	// (0x0002a8ec) popup_cale_events_window_g1_ParamLimits

0x4a3e,	// (0x0002a8ec) popup_cale_events_window_g1

0x4a5e,	// (0x0002a90c) popup_cale_events_window_g2_ParamLimits

0x4a5e,	// (0x0002a90c) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0003521a) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0003521a) popup_cale_events_window_g

0x4a7e,	// (0x0002a92c) popup_cale_events_window_t1_ParamLimits

0x4a7e,	// (0x0002a92c) popup_cale_events_window_t1

0x4a90,	// (0x0002a93e) popup_cale_events_window_t2_ParamLimits

0x4a90,	// (0x0002a93e) popup_cale_events_window_t2

0x4ace,	// (0x0002a97c) popup_cale_events_window_t3_ParamLimits

0x4ace,	// (0x0002a97c) popup_cale_events_window_t3

0x4b08,	// (0x0002a9b6) popup_cale_events_window_t4_ParamLimits

0x4b08,	// (0x0002a9b6) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0003521f) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0003521f) popup_cale_events_window_t

0x4b3e,	// (0x0002a9ec) call_type_pane

0x4b4e,	// (0x0002a9fc) popup_call_status_window_g1

0x4b62,	// (0x0002aa10) popup_call_status_window_g2

0x4b76,	// (0x0002aa24) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00035228) popup_call_status_window_g

0x4b86,	// (0x0002aa34) call_type_pane_g1

0x4b8f,	// (0x0002aa3d) call_type_pane_g2

0x0001,

0xf381,	// (0x0003522f) call_type_pane_g

0x26f1,	// (0x0002859f) bg_popup_sub_pane_cp02

0x4b98,	// (0x0002aa46) listscroll_popup_wml_pane

0x4ba0,	// (0x0002aa4e) list_wml_pane

0x4baa,	// (0x0002aa58) scroll_pane_cp013

0x4bb5,	// (0x0002aa63) list_single_graphic_popup_wml_pane_ParamLimits

0x4bb5,	// (0x0002aa63) list_single_graphic_popup_wml_pane

0x2cd8,	// (0x00028b86) list_single_graphic_popup_wml_pane_g1

0x4bc9,	// (0x0002aa77) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00035234) list_single_graphic_popup_wml_pane_g

0x4bd1,	// (0x0002aa7f) list_single_graphic_popup_wml_pane_t1

0x4be7,	// (0x0002aa95) aid_call_pane

0x2944,	// (0x000287f2) popup_clock_analogue_window_g1

0x2944,	// (0x000287f2) popup_clock_analogue_window_g2

0xb300,	// (0x000311ae) popup_clock_analogue_window_g3

0xb300,	// (0x000311ae) popup_clock_analogue_window_g4

0x2cd8,	// (0x00028b86) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00035239) popup_clock_analogue_window_g

0xb308,	// (0x000311b6) popup_clock_analogue_window_t1

0xb316,	// (0x000311c4) clock_digital_number_pane_ParamLimits

0xb316,	// (0x000311c4) clock_digital_number_pane

0xb322,	// (0x000311d0) clock_digital_number_pane_cp02_ParamLimits

0xb322,	// (0x000311d0) clock_digital_number_pane_cp02

0xb32e,	// (0x000311dc) clock_digital_number_pane_cp03_ParamLimits

0xb32e,	// (0x000311dc) clock_digital_number_pane_cp03

0xb33a,	// (0x000311e8) clock_digital_number_pane_cp04_ParamLimits

0xb33a,	// (0x000311e8) clock_digital_number_pane_cp04

0xb346,	// (0x000311f4) clock_digital_separator_pane_ParamLimits

0xb346,	// (0x000311f4) clock_digital_separator_pane

0xb352,	// (0x00031200) popup_clock_digital_window_t1

0x2cd8,	// (0x00028b86) clock_digital_number_pane_g1

0x2cd8,	// (0x00028b86) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x000351a7) clock_digital_number_pane_g

0x2cd8,	// (0x00028b86) clock_digital_separator_pane_g1

0x2cd8,	// (0x00028b86) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x000351a7) clock_digital_separator_pane_g

0x26f1,	// (0x0002859f) bg_popup_window_pane_cp04

0x4bef,	// (0x0002aa9d) heading_pane_cp03

0x4bf7,	// (0x0002aaa5) listscroll_popup_gms_pane

0x4bff,	// (0x0002aaad) grid_large_graphic_popup_pane

0x4c09,	// (0x0002aab7) listscroll_popup_gms_pane_g1

0x4c11,	// (0x0002aabf) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00035244) listscroll_popup_gms_pane_g

0x3b9e,	// (0x00029a4c) scroll_pane_cp014

0x4c19,	// (0x0002aac7) cell_large_graphic_popup_pane_ParamLimits

0x4c19,	// (0x0002aac7) cell_large_graphic_popup_pane

0x4c31,	// (0x0002aadf) cell_large_graphic_popup_pane_g1_ParamLimits

0x4c31,	// (0x0002aadf) cell_large_graphic_popup_pane_g1

0x4c3d,	// (0x0002aaeb) cell_large_graphic_popup_pane_g2_ParamLimits

0x4c3d,	// (0x0002aaeb) cell_large_graphic_popup_pane_g2

0x4c49,	// (0x0002aaf7) cell_large_graphic_popup_pane_g3_ParamLimits

0x4c49,	// (0x0002aaf7) cell_large_graphic_popup_pane_g3

0x4c56,	// (0x0002ab04) cell_large_graphic_popup_pane_g4_ParamLimits

0x4c56,	// (0x0002ab04) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00035249) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00035249) cell_large_graphic_popup_pane_g

0x4c66,	// (0x0002ab14) grid_highlight_pane_cp010

0x2cd8,	// (0x00028b86) bg_popup_call_pane_g1

0x4c70,	// (0x0002ab1e) list_single_graphic_popup_conf_pane_ParamLimits

0x4c70,	// (0x0002ab1e) list_single_graphic_popup_conf_pane

0x4c82,	// (0x0002ab30) list_highlight_pane_cp01

0x4c8b,	// (0x0002ab39) list_single_graphic_popup_conf_pane_g1

0x4c93,	// (0x0002ab41) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00035252) list_single_graphic_popup_conf_pane_g

0x4c9b,	// (0x0002ab49) list_single_graphic_popup_conf_pane_t1

0x4ca9,	// (0x0002ab57) linegrid_cams_pane_g1

0x4cb2,	// (0x0002ab60) linegrid_cams_pane_g2

0x2e42,	// (0x00028cf0) linegrid_cams_pane_g3

0x4cbb,	// (0x0002ab69) linegrid_cams_pane_g4

0x4cc4,	// (0x0002ab72) linegrid_cams_pane_g5

0x4ccd,	// (0x0002ab7b) linegrid_cams_pane_g6

0x31a6,	// (0x00029054) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00035257) linegrid_cams_pane_g

0x4cd8,	// (0x0002ab86) popup_clock_analogue_window

0x4cd8,	// (0x0002ab86) popup_clock_digital_window

0x26f1,	// (0x0002859f) popup_phob_thumbnail_window

0x2cd8,	// (0x00028b86) call_video_uplink_pane_g1

0x4ce1,	// (0x0002ab8f) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00035266) call_video_uplink_pane_g

0x314d,	// (0x00028ffb) video_uplink_pane

0x4ce9,	// (0x0002ab97) mce_image_pane_g1

0x4cf3,	// (0x0002aba1) mce_image_pane_g2

0x4cfb,	// (0x0002aba9) mce_image_pane_g3

0x4d03,	// (0x0002abb1) mce_image_pane_g4

0x4d0b,	// (0x0002abb9) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0003526b) mce_image_pane_g

0x4d13,	// (0x0002abc1) control_top_pane_stacon_cp01_ParamLimits

0x4d13,	// (0x0002abc1) control_top_pane_stacon_cp01

0x4d27,	// (0x0002abd5) uni_indicator_pane_stacon_cp01_ParamLimits

0x4d27,	// (0x0002abd5) uni_indicator_pane_stacon_cp01

0x4d38,	// (0x0002abe6) bg_popup_sub_pane_cp03

0x4d42,	// (0x0002abf0) chi_dic_find_pane

0x4d4a,	// (0x0002abf8) listscroll_chi_dic_pane

0x4d53,	// (0x0002ac01) main_pane_chidic_g1

0x4d66,	// (0x0002ac14) chi_dic_find_pane_t1

0x4d74,	// (0x0002ac22) find_chidic_pane

0x4d7d,	// (0x0002ac2b) chi_dic_list_pane_ParamLimits

0x4d7d,	// (0x0002ac2b) chi_dic_list_pane

0x4d8e,	// (0x0002ac3c) scroll_pane_cp020

0x4d96,	// (0x0002ac44) find_chidic_pane_t1

0x26f1,	// (0x0002859f) input_focus_pane_cp06

0x4da5,	// (0x0002ac53) list_chi_dic_pane_ParamLimits

0x4da5,	// (0x0002ac53) list_chi_dic_pane

0x4db9,	// (0x0002ac67) list_chi_dic_pane_t1_ParamLimits

0x4db9,	// (0x0002ac67) list_chi_dic_pane_t1

0x26f1,	// (0x0002859f) list_highlight_pane_cp020

0x4dcc,	// (0x0002ac7a) bg_cale_heading_pane_g1

0x4dd4,	// (0x0002ac82) bg_cale_heading_pane_g2

0x4ddc,	// (0x0002ac8a) bg_cale_heading_pane_g3

0x4de4,	// (0x0002ac92) bg_cale_heading_pane_g4

0x4dee,	// (0x0002ac9c) bg_cale_heading_pane_g5

0x4df8,	// (0x0002aca6) bg_cale_heading_pane_g6

0x4e00,	// (0x0002acae) bg_cale_heading_pane_g7

0x4e08,	// (0x0002acb6) bg_cale_heading_pane_g8

0x4e12,	// (0x0002acc0) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00035276) bg_cale_heading_pane_g

0x4dcc,	// (0x0002ac7a) bg_cale_side_pane_g1

0x4e1c,	// (0x0002acca) bg_cale_side_pane_g2

0x4e24,	// (0x0002acd2) bg_cale_side_pane_g3

0x4e2c,	// (0x0002acda) bg_cale_side_pane_g4

0x4e34,	// (0x0002ace2) bg_cale_side_pane_g5

0x4e3c,	// (0x0002acea) bg_cale_side_pane_g6

0x4e44,	// (0x0002acf2) bg_cale_side_pane_g7

0x4e4c,	// (0x0002acfa) bg_cale_side_pane_g8

0x4e54,	// (0x0002ad02) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00035289) bg_cale_side_pane_g

0x4e5c,	// (0x0002ad0a) popup_call_status_window_ParamLimits

0x4e5c,	// (0x0002ad0a) popup_call_status_window

0x4ea3,	// (0x0002ad51) stacon_top_pane

0x4eab,	// (0x0002ad59) status_pane_ParamLimits

0x4eab,	// (0x0002ad59) status_pane

0x4ec0,	// (0x0002ad6e) status_small_pane

0x4ec8,	// (0x0002ad76) control_pane

0x26f1,	// (0x0002859f) stacon_bottom_pane

0x4ed0,	// (0x0002ad7e) list_single_mce_smart_pane_t1_ParamLimits

0x4ed0,	// (0x0002ad7e) list_single_mce_smart_pane_t1

0x4ee3,	// (0x0002ad91) list_single_mce_smart_pane_t2_ParamLimits

0x4ee3,	// (0x0002ad91) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0003529c) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0003529c) list_single_mce_smart_pane_t

0x4f02,	// (0x0002adb0) compass_pane

0x4f0b,	// (0x0002adb9) main_location2_pane_t1

0x4f1f,	// (0x0002adcd) main_location2_pane_t2

0x4f33,	// (0x0002ade1) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x000352a1) main_location2_pane_t

0x4f7d,	// (0x0002ae2b) compass_pane_g1_ParamLimits

0x4f7d,	// (0x0002ae2b) compass_pane_g1

0x4f89,	// (0x0002ae37) compass_pane_t1

0x4f98,	// (0x0002ae46) compass_pane_t2

0x0005,

0xf3fc,	// (0x000352aa) compass_pane_t

0x4fdf,	// (0x0002ae8d) text_secondary_cp61

0x5048,	// (0x0002aef6) navi_pane_cams_g5

0x50c2,	// (0x0002af70) navi_pane_im_t1

0x50d0,	// (0x0002af7e) navi_pane_mp_g1_ParamLimits

0x50d0,	// (0x0002af7e) navi_pane_mp_g1

0x50e4,	// (0x0002af92) navi_pane_mp_g2_ParamLimits

0x50e4,	// (0x0002af92) navi_pane_mp_g2

0x50f0,	// (0x0002af9e) navi_pane_mp_g3_ParamLimits

0x50f0,	// (0x0002af9e) navi_pane_mp_g3

0x0002,

0xf410,	// (0x000352be) navi_pane_mp_g_ParamLimits

0xf410,	// (0x000352be) navi_pane_mp_g

0x50fc,	// (0x0002afaa) navi_pane_mp_t1

0x510a,	// (0x0002afb8) navi_pane_mp_t2

0x0002,

0xf417,	// (0x000352c5) navi_pane_mp_t

0x51b7,	// (0x0002b065) navi_pane_vt_g1

0x50fc,	// (0x0002afaa) navi_pane_vt_t1

0x51bf,	// (0x0002b06d) navi_slider_pane

0x51c7,	// (0x0002b075) zooming_pane

0x51cf,	// (0x0002b07d) navi_slider_pane_g1

0xb36f,	// (0x0003121d) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x000352cc) navi_slider_pane_g

0x51f3,	// (0x0002b0a1) aid_levels_zoom

0x51fb,	// (0x0002b0a9) zooming_pane_g1

0x5203,	// (0x0002b0b1) zooming_pane_g2

0x5203,	// (0x0002b0b1) zooming_pane_g3

0x0002,

0xf42d,	// (0x000352db) zooming_pane_g

0x520b,	// (0x0002b0b9) level_10_zoom

0x5214,	// (0x0002b0c2) level_11_zoom

0x521d,	// (0x0002b0cb) level_1_zoom

0x5226,	// (0x0002b0d4) level_2_zoom

0x522f,	// (0x0002b0dd) level_3_zoom

0x5238,	// (0x0002b0e6) level_4_zoom

0x5241,	// (0x0002b0ef) level_5_zoom

0x524a,	// (0x0002b0f8) level_6_zoom

0x5253,	// (0x0002b101) level_7_zoom

0x525c,	// (0x0002b10a) level_8_zoom

0x5265,	// (0x0002b113) level_9_zoom

0x5276,	// (0x0002b124) popup_phob_thumbnail_window_g1

0x527e,	// (0x0002b12c) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x000352e2) popup_phob_thumbnail_window_g

0xbe8a,	// (0x00031d38) level_1_location

0xbe92,	// (0x00031d40) level_2_location

0xbe9a,	// (0x00031d48) level_3_location

0xbea2,	// (0x00031d50) level_4_location

0x51c7,	// (0x0002b075) level_5_location

0x5286,	// (0x0002b134) mce_icon_pane_g1

0x528e,	// (0x0002b13c) mce_icon_pane_g2

0x0001,

0xf439,	// (0x000352e7) mce_icon_pane_g

0x5296,	// (0x0002b144) main_mup_pane_g1_ParamLimits

0x5296,	// (0x0002b144) main_mup_pane_g1

0x52ac,	// (0x0002b15a) main_mup_pane_g2_ParamLimits

0x52ac,	// (0x0002b15a) main_mup_pane_g2

0x52c4,	// (0x0002b172) main_mup_pane_g3_ParamLimits

0x52c4,	// (0x0002b172) main_mup_pane_g3

0x52dc,	// (0x0002b18a) main_mup_pane_g4_ParamLimits

0x52dc,	// (0x0002b18a) main_mup_pane_g4

0x52f4,	// (0x0002b1a2) main_mup_pane_g5_ParamLimits

0x52f4,	// (0x0002b1a2) main_mup_pane_g5

0x5310,	// (0x0002b1be) main_mup_pane_g6_ParamLimits

0x5310,	// (0x0002b1be) main_mup_pane_g6

0x5328,	// (0x0002b1d6) main_mup_pane_g7_ParamLimits

0x5328,	// (0x0002b1d6) main_mup_pane_g7

0x5340,	// (0x0002b1ee) main_mup_pane_g8_ParamLimits

0x5340,	// (0x0002b1ee) main_mup_pane_g8

0x5358,	// (0x0002b206) main_mup_pane_g9_ParamLimits

0x5358,	// (0x0002b206) main_mup_pane_g9

0x5372,	// (0x0002b220) main_mup_pane_g10_ParamLimits

0x5372,	// (0x0002b220) main_mup_pane_g10

0x538c,	// (0x0002b23a) main_mup_pane_g11_ParamLimits

0x538c,	// (0x0002b23a) main_mup_pane_g11

0x53a0,	// (0x0002b24e) main_mup_pane_g12_ParamLimits

0x53a0,	// (0x0002b24e) main_mup_pane_g12

0x53b6,	// (0x0002b264) main_mup_pane_g13_ParamLimits

0x53b6,	// (0x0002b264) main_mup_pane_g13

0x000c,

0xf43e,	// (0x000352ec) main_mup_pane_g_ParamLimits

0xf43e,	// (0x000352ec) main_mup_pane_g

0x53ca,	// (0x0002b278) main_mup_pane_t1_ParamLimits

0x53ca,	// (0x0002b278) main_mup_pane_t1

0x53e4,	// (0x0002b292) main_mup_pane_t2_ParamLimits

0x53e4,	// (0x0002b292) main_mup_pane_t2

0x53fc,	// (0x0002b2aa) main_mup_pane_t3_ParamLimits

0x53fc,	// (0x0002b2aa) main_mup_pane_t3

0x5414,	// (0x0002b2c2) main_mup_pane_t4_ParamLimits

0x5414,	// (0x0002b2c2) main_mup_pane_t4

0x5432,	// (0x0002b2e0) main_mup_pane_t5_ParamLimits

0x5432,	// (0x0002b2e0) main_mup_pane_t5

0x5447,	// (0x0002b2f5) main_mup_pane_t6_ParamLimits

0x5447,	// (0x0002b2f5) main_mup_pane_t6

0x0005,

0xf459,	// (0x00035307) main_mup_pane_t_ParamLimits

0xf459,	// (0x00035307) main_mup_pane_t

0x5459,	// (0x0002b307) mup_progress_pane_ParamLimits

0x5459,	// (0x0002b307) mup_progress_pane

0x5465,	// (0x0002b313) mup_visualizer_pane_ParamLimits

0x5465,	// (0x0002b313) mup_visualizer_pane

0x5499,	// (0x0002b347) mup_volume_pane_ParamLimits

0x5499,	// (0x0002b347) mup_volume_pane

0x54b7,	// (0x0002b365) mup_visualizer_pane_g1_ParamLimits

0x54b7,	// (0x0002b365) mup_visualizer_pane_g1

0x54b7,	// (0x0002b365) mup_visualizer_pane_g2_ParamLimits

0x54b7,	// (0x0002b365) mup_visualizer_pane_g2

0x4f7d,	// (0x0002ae2b) mup_visualizer_pane_g3_ParamLimits

0x4f7d,	// (0x0002ae2b) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00035314) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00035314) mup_visualizer_pane_g

0x2cd8,	// (0x00028b86) mup_volume_pane_g1

0x54cd,	// (0x0002b37b) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0003531b) mup_volume_pane_g

0x2cd8,	// (0x00028b86) mup_progress_pane_g1

0x54d6,	// (0x0002b384) mup_progress_pane_g2

0x54df,	// (0x0002b38d) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00035320) mup_progress_pane_g

0x26f1,	// (0x0002859f) bg_popup_window_pane_cp05

0x54e8,	// (0x0002b396) heading_pane_cp02_ParamLimits

0x54e8,	// (0x0002b396) heading_pane_cp02

0x5502,	// (0x0002b3b0) list_popup_blid_pane

0x550a,	// (0x0002b3b8) list_blid_sat_info_pane_ParamLimits

0x550a,	// (0x0002b3b8) list_blid_sat_info_pane

0x551d,	// (0x0002b3cb) list_blid_sat_info_pane_g1

0x5525,	// (0x0002b3d3) list_blid_sat_info_pane_t1

0x562b,	// (0x0002b4d9) mup_equalizer_pane_ParamLimits

0x562b,	// (0x0002b4d9) mup_equalizer_pane

0x5644,	// (0x0002b4f2) mup_equalizer_pane_cp1_ParamLimits

0x5644,	// (0x0002b4f2) mup_equalizer_pane_cp1

0x5661,	// (0x0002b50f) mup_equalizer_pane_cp2_ParamLimits

0x5661,	// (0x0002b50f) mup_equalizer_pane_cp2

0x567e,	// (0x0002b52c) mup_equalizer_pane_cp3_ParamLimits

0x567e,	// (0x0002b52c) mup_equalizer_pane_cp3

0x569f,	// (0x0002b54d) mup_equalizer_pane_cp4_ParamLimits

0x569f,	// (0x0002b54d) mup_equalizer_pane_cp4

0x56c0,	// (0x0002b56e) mup_equalizer_pane_cp5

0x56d4,	// (0x0002b582) mup_equalizer_pane_cp6

0x56e8,	// (0x0002b596) mup_equalizer_pane_cp7

0xbda8,	// (0x00031c56) bg_popup_call_poc_act_pane_g9

0xbdb0,	// (0x00031c5e) bg_popup_call_poc_act_pane_g10

0xbdb8,	// (0x00031c66) bg_popup_call_poc_act_pane_g11

0x000a,

0x294c,	// (0x000287fa) mup_scale_pane

0x2cd8,	// (0x00028b86) mup_scale_pane_g1

0x56fc,	// (0x0002b5aa) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0003533c) mup_scale_pane_g

0x5732,	// (0x0002b5e0) msg_data_pane

0x573a,	// (0x0002b5e8) scroll_pane_cp017

0x5742,	// (0x0002b5f0) bg_list_pane_cp04_ParamLimits

0x5742,	// (0x0002b5f0) bg_list_pane_cp04

0x5762,	// (0x0002b610) msg_data_pane_g1

0x576a,	// (0x0002b618) msg_data_pane_g2

0x4cfb,	// (0x0002aba9) msg_data_pane_g3

0x5772,	// (0x0002b620) msg_data_pane_g4

0x577a,	// (0x0002b628) msg_data_pane_g5

0x5782,	// (0x0002b630) msg_data_pane_g6

0x578a,	// (0x0002b638) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0003534b) msg_data_pane_g

0x5792,	// (0x0002b640) msg_text_pane_ParamLimits

0x5792,	// (0x0002b640) msg_text_pane

0x57bb,	// (0x0002b669) qrid_highlight_pane_cp011_ParamLimits

0x57bb,	// (0x0002b669) qrid_highlight_pane_cp011

0x26f1,	// (0x0002859f) msg_body_pane

0x26f1,	// (0x0002859f) msg_header_pane

0x57da,	// (0x0002b688) input_focus_pane_cp07

0x57fd,	// (0x0002b6ab) msg_header_pane_t1_ParamLimits

0x57fd,	// (0x0002b6ab) msg_header_pane_t1

0x5811,	// (0x0002b6bf) msg_header_pane_t2_ParamLimits

0x5811,	// (0x0002b6bf) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0003535f) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0003535f) msg_header_pane_t

0x5823,	// (0x0002b6d1) msg_body_pane_g1

0x582b,	// (0x0002b6d9) msg_body_pane_t1_ParamLimits

0x582b,	// (0x0002b6d9) msg_body_pane_t1

0x585c,	// (0x0002b70a) msg_body_pane_t2_ParamLimits

0x585c,	// (0x0002b70a) msg_body_pane_t2

0x586e,	// (0x0002b71c) msg_body_pane_t3_ParamLimits

0x586e,	// (0x0002b71c) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00035364) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00035364) msg_body_pane_t

0x0f94,	// (0x00026e42) main_viewer_pane_g1_ParamLimits

0x0f94,	// (0x00026e42) main_viewer_pane_g1

0x0fa2,	// (0x00026e50) main_viewer_pane_g2_ParamLimits

0x0fa2,	// (0x00026e50) main_viewer_pane_g2

0x589e,	// (0x0002b74c) main_viewer_pane_g3_ParamLimits

0x589e,	// (0x0002b74c) main_viewer_pane_g3

0x58ad,	// (0x0002b75b) main_viewer_pane_g4_ParamLimits

0x58ad,	// (0x0002b75b) main_viewer_pane_g4

0xb399,	// (0x00031247) main_viewer_pane_g5_ParamLimits

0xb399,	// (0x00031247) main_viewer_pane_g5

0xb399,	// (0x00031247) main_viewer_pane_g7_ParamLimits

0xb399,	// (0x00031247) main_viewer_pane_g7

0xb3ab,	// (0x00031259) main_viewer_pane_g8_ParamLimits

0xb3ab,	// (0x00031259) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00035374) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00035374) main_viewer_pane_g

0x58bc,	// (0x0002b76a) viewer_content_pane_ParamLimits

0x58bc,	// (0x0002b76a) viewer_content_pane

0x58f7,	// (0x0002b7a5) main_postcard_pane_g1_ParamLimits

0x58f7,	// (0x0002b7a5) main_postcard_pane_g1

0x590d,	// (0x0002b7bb) main_postcard_pane_g2_ParamLimits

0x590d,	// (0x0002b7bb) main_postcard_pane_g2

0x5923,	// (0x0002b7d1) main_postcard_pane_g3_ParamLimits

0x5923,	// (0x0002b7d1) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00035385) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00035385) main_postcard_pane_g

0x593a,	// (0x0002b7e8) main_postcard_pane_g4

0xbfbd,	// (0x00031e6b) smil_status_volume_pane_g2

0x597d,	// (0x0002b82b) postcard_pane_ParamLimits

0x597d,	// (0x0002b82b) postcard_pane

0x59bf,	// (0x0002b86d) postcard_pane_g1_ParamLimits

0x59bf,	// (0x0002b86d) postcard_pane_g1

0x59cd,	// (0x0002b87b) postcard_pane_g2_ParamLimits

0x59cd,	// (0x0002b87b) postcard_pane_g2

0x59d9,	// (0x0002b887) postcard_pane_g3_ParamLimits

0x59d9,	// (0x0002b887) postcard_pane_g3

0x59e5,	// (0x0002b893) postcard_pane_g4_ParamLimits

0x59e5,	// (0x0002b893) postcard_pane_g4

0x59f3,	// (0x0002b8a1) postcard_pane_g5_ParamLimits

0x59f3,	// (0x0002b8a1) postcard_pane_g5

0x5a08,	// (0x0002b8b6) postcard_pane_g6_ParamLimits

0x5a08,	// (0x0002b8b6) postcard_pane_g6

0x59bf,	// (0x0002b86d) postcard_pane_g7_ParamLimits

0x59bf,	// (0x0002b86d) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00035392) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00035392) postcard_pane_g

0x5a1c,	// (0x0002b8ca) main_mp2_pane_g1_ParamLimits

0x5a1c,	// (0x0002b8ca) main_mp2_pane_g1

0x5a28,	// (0x0002b8d6) main_mp2_pane_g2_ParamLimits

0x5a28,	// (0x0002b8d6) main_mp2_pane_g2

0x5a34,	// (0x0002b8e2) main_mp2_pane_g3_ParamLimits

0x5a34,	// (0x0002b8e2) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x000353a1) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x000353a1) main_mp2_pane_g

0x5a40,	// (0x0002b8ee) main_mp2_pane_t1_ParamLimits

0x5a40,	// (0x0002b8ee) main_mp2_pane_t1

0x5a55,	// (0x0002b903) main_mp2_pane_t2_ParamLimits

0x5a55,	// (0x0002b903) main_mp2_pane_t2

0x5a67,	// (0x0002b915) main_mp2_pane_t3_ParamLimits

0x5a67,	// (0x0002b915) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x000353a8) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x000353a8) main_mp2_pane_t

0x5a79,	// (0x0002b927) pec_content_pane_ParamLimits

0x5a79,	// (0x0002b927) pec_content_pane

0x3b9e,	// (0x00029a4c) scroll_pane_cp015

0x5a8b,	// (0x0002b939) pec_attribute_pane_ParamLimits

0x5a8b,	// (0x0002b939) pec_attribute_pane

0x5a9b,	// (0x0002b949) pec_content_pane_g1_ParamLimits

0x5a9b,	// (0x0002b949) pec_content_pane_g1

0x5aa9,	// (0x0002b957) pec_content_pane_t1_ParamLimits

0x5aa9,	// (0x0002b957) pec_content_pane_t1

0x5abb,	// (0x0002b969) pec_content_pane_t2_ParamLimits

0x5abb,	// (0x0002b969) pec_content_pane_t2

0x0001,

0xf501,	// (0x000353af) pec_content_pane_t_ParamLimits

0xf501,	// (0x000353af) pec_content_pane_t

0x5acd,	// (0x0002b97b) list_single_graphic_pane_cp01_ParamLimits

0x5acd,	// (0x0002b97b) list_single_graphic_pane_cp01

0x294c,	// (0x000287fa) bg_popup_sub_pane_cp04

0x5ae5,	// (0x0002b993) popup_mup_playback_window_g1

0x5af1,	// (0x0002b99f) popup_mup_playback_window_t1

0x5b06,	// (0x0002b9b4) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x000353b4) popup_mup_playback_window_t

0x5b5b,	// (0x0002ba09) main_image_pane_g1_ParamLimits

0x5b5b,	// (0x0002ba09) main_image_pane_g1

0x5c38,	// (0x0002bae6) scroll_pane_cp018_ParamLimits

0x5c38,	// (0x0002bae6) scroll_pane_cp018

0x5c50,	// (0x0002bafe) scroll_pane_cp016_ParamLimits

0x5c50,	// (0x0002bafe) scroll_pane_cp016

0x5c84,	// (0x0002bb32) smil2_image_pane_ParamLimits

0x5c84,	// (0x0002bb32) smil2_image_pane

0x5cb8,	// (0x0002bb66) smil2_root_pane_ParamLimits

0x5cb8,	// (0x0002bb66) smil2_root_pane

0x5cf0,	// (0x0002bb9e) smil2_text_pane_ParamLimits

0x5cf0,	// (0x0002bb9e) smil2_text_pane

0x26f1,	// (0x0002859f) bg_list_pane_cp06

0x5d78,	// (0x0002bc26) grid_radio_pane

0x26f1,	// (0x0002859f) bg_popup_window_pane_cp06

0x5d80,	// (0x0002bc2e) main_fmradio_pane_t1

0x4bef,	// (0x0002aa9d) heading_pane_cp04

0x5d8e,	// (0x0002bc3c) main_fmradio_pane_t2

0xbdc0,	// (0x00031c6e) popup_cale_lunar_info_window_g1

0x5d9c,	// (0x0002bc4a) main_fmradio_pane_t3

0xbdc8,	// (0x00031c76) popup_cale_lunar_info_window_g2

0x5daa,	// (0x0002bc58) main_fmradio_pane_t4

0x0001,

0x5db8,	// (0x0002bc66) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0003548f) popup_cale_lunar_info_window_g

0xf51b,	// (0x000353c9) main_fmradio_pane_t

0x5dc6,	// (0x0002bc74) wait_bar_pane_cp03

0x5dce,	// (0x0002bc7c) cell_fmradio_pane_ParamLimits

0x5dce,	// (0x0002bc7c) cell_fmradio_pane

0x59bf,	// (0x0002b86d) cell_fmradio_pane_g1_ParamLimits

0x59bf,	// (0x0002b86d) cell_fmradio_pane_g1

0x26f1,	// (0x0002859f) grid_highlight_pane_cp011

0x5de1,	// (0x0002bc8f) poc_content_pane_ParamLimits

0x5de1,	// (0x0002bc8f) poc_content_pane

0x5df3,	// (0x0002bca1) scroll_pane_cp019

0x5dfb,	// (0x0002bca9) popup_call_poc_act_window_ParamLimits

0x5dfb,	// (0x0002bca9) popup_call_poc_act_window

0x5e1f,	// (0x0002bccd) popup_call_poc_inact_window_ParamLimits

0x5e1f,	// (0x0002bccd) popup_call_poc_inact_window

0xf5b8,	// (0x00035466) bg_popup_call_poc_act_pane_g

0xbd30,	// (0x00031bde) bg_popup_call_poc_inact_pane_g1

0xbd38,	// (0x00031be6) bg_popup_call_poc_inact_pane_g2

0x5e38,	// (0x0002bce6) popup_call_poc_act_window_g2

0xbd40,	// (0x00031bee) bg_popup_call_poc_inact_pane_g3

0xbd48,	// (0x00031bf6) bg_popup_call_poc_inact_pane_g4

0xbd50,	// (0x00031bfe) bg_popup_call_poc_inact_pane_g5

0x5e40,	// (0x0002bcee) popup_call_poc_act_window_t1_ParamLimits

0x5e40,	// (0x0002bcee) popup_call_poc_act_window_t1

0x5e68,	// (0x0002bd16) popup_call_poc_act_window_t2_ParamLimits

0x5e68,	// (0x0002bd16) popup_call_poc_act_window_t2

0x5e90,	// (0x0002bd3e) popup_call_poc_act_window_t3_ParamLimits

0x5e90,	// (0x0002bd3e) popup_call_poc_act_window_t3

0x5eb8,	// (0x0002bd66) popup_call_poc_act_window_t4_ParamLimits

0x5eb8,	// (0x0002bd66) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x000353d4) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x000353d4) popup_call_poc_act_window_t

0xbd58,	// (0x00031c06) bg_popup_call_poc_inact_pane_g6

0xbd60,	// (0x00031c0e) bg_popup_call_poc_inact_pane_g7

0xbd68,	// (0x00031c16) bg_popup_call_poc_inact_pane_g8

0x5eca,	// (0x0002bd78) popup_call_poc_inact_window_g2

0xbd70,	// (0x00031c1e) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x00035453) bg_popup_call_poc_inact_pane_g

0x5ed2,	// (0x0002bd80) popup_call_poc_inact_window_t1_ParamLimits

0x5ed2,	// (0x0002bd80) popup_call_poc_inact_window_t1

0x5ee7,	// (0x0002bd95) popup_call_poc_inact_window_t2_ParamLimits

0x5ee7,	// (0x0002bd95) popup_call_poc_inact_window_t2

0x5efc,	// (0x0002bdaa) popup_call_poc_inact_window_t3_ParamLimits

0x5efc,	// (0x0002bdaa) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x000353dd) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x000353dd) popup_call_poc_inact_window_t

0xbf30,	// (0x00031dde) context_pane_ParamLimits

0x6bb7,	// (0x0002ca65) signal_pane_ParamLimits

0x51c7,	// (0x0002b075) main_call2_pane

0xbf1e,	// (0x00031dcc) popup_phob_thumbnail2_window_ParamLimits

0xbf1e,	// (0x00031dcc) popup_phob_thumbnail2_window

0xb381,	// (0x0003122f) aid_hotspot_pointer_arrow_pane

0xb389,	// (0x00031237) aid_hotspot_pointer_hand_pane

0x66db,	// (0x0002c589) phob_pre_status_pane_g5

0x31ec,	// (0x0002909a) cams_zoom_pane_ParamLimits

0x31fb,	// (0x000290a9) image_vga_pane_ParamLimits

0x3215,	// (0x000290c3) main_camera_pane_g1_ParamLimits

0x3227,	// (0x000290d5) main_camera_pane_g2_ParamLimits

0x3239,	// (0x000290e7) main_camera_pane_g3_ParamLimits

0x324b,	// (0x000290f9) main_camera_pane_g4_ParamLimits

0x325d,	// (0x0002910b) main_camera_pane_g5_ParamLimits

0x326f,	// (0x0002911d) main_camera_pane_g6_ParamLimits

0x3281,	// (0x0002912f) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x000350dc) main_camera_pane_g_ParamLimits

0x329f,	// (0x0002914d) main_camera_pane_t1_ParamLimits

0x32b5,	// (0x00029163) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x000350ed) main_camera_pane_t_ParamLimits

0x294c,	// (0x000287fa) bg_popup_preview_window_pane_cp01_ParamLimits

0x294c,	// (0x000287fa) bg_popup_preview_window_pane_cp01

0x5f11,	// (0x0002bdbf) popup_phob_thumbnail2_window_g1_ParamLimits

0x5f11,	// (0x0002bdbf) popup_phob_thumbnail2_window_g1

0x26f1,	// (0x0002859f) call2_cli_visual_pane

0x5f38,	// (0x0002bde6) popup_call2_audio_conf_window_ParamLimits

0x5f38,	// (0x0002bde6) popup_call2_audio_conf_window

0x5f58,	// (0x0002be06) popup_call2_audio_first_window_ParamLimits

0x5f58,	// (0x0002be06) popup_call2_audio_first_window

0x5fee,	// (0x0002be9c) popup_call2_audio_in_window_ParamLimits

0x5fee,	// (0x0002be9c) popup_call2_audio_in_window

0x6036,	// (0x0002bee4) popup_call2_audio_out_window_ParamLimits

0x6036,	// (0x0002bee4) popup_call2_audio_out_window

0x60a0,	// (0x0002bf4e) popup_call2_audio_second_window_ParamLimits

0x60a0,	// (0x0002bf4e) popup_call2_audio_second_window

0x6106,	// (0x0002bfb4) popup_call2_audio_wait_window_ParamLimits

0x6106,	// (0x0002bfb4) popup_call2_audio_wait_window

0x26f1,	// (0x0002859f) bg_popup_call2_act_pane_cp03

0x292e,	// (0x000287dc) list_conf_pane_cp

0x6140,	// (0x0002bfee) popup_call2_audio_conf_window_t1

0x614e,	// (0x0002bffc) list_single_graphic_popup_conf2_pane_ParamLimits

0x614e,	// (0x0002bffc) list_single_graphic_popup_conf2_pane

0x4c82,	// (0x0002ab30) list_highlight_pane_cp04

0x6161,	// (0x0002c00f) list_single_graphic_popup_conf2_pane_g1

0x4c93,	// (0x0002ab41) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x000353e4) list_single_graphic_popup_conf2_pane_g

0x616b,	// (0x0002c019) list_single_graphic_popup_conf2_pane_t1

0x6179,	// (0x0002c027) bg_popup_call2_act_pane_cp01_ParamLimits

0x6179,	// (0x0002c027) bg_popup_call2_act_pane_cp01

0x6203,	// (0x0002c0b1) call_type_pane_cp05_ParamLimits

0x6203,	// (0x0002c0b1) call_type_pane_cp05

0x6257,	// (0x0002c105) popup_call2_audio_second_window_g1_ParamLimits

0x6257,	// (0x0002c105) popup_call2_audio_second_window_g1

0x62ab,	// (0x0002c159) popup_call2_audio_second_window_g2_ParamLimits

0x62ab,	// (0x0002c159) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x000353e9) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x000353e9) popup_call2_audio_second_window_g

0x6310,	// (0x0002c1be) popup_call2_audio_second_window_t1_ParamLimits

0x6310,	// (0x0002c1be) popup_call2_audio_second_window_t1

0x63cb,	// (0x0002c279) popup_call2_audio_second_window_t2_ParamLimits

0x63cb,	// (0x0002c279) popup_call2_audio_second_window_t2

0x641e,	// (0x0002c2cc) popup_call2_audio_second_window_t3_ParamLimits

0x641e,	// (0x0002c2cc) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x000353f0) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x000353f0) popup_call2_audio_second_window_t

0x26f1,	// (0x0002859f) bg_popup_call2_in_pane_cp02

0x26fb,	// (0x000285a9) call_type_pane_cp04

0x2703,	// (0x000285b1) popup_call2_audio_wait_window_g1

0x270b,	// (0x000285b9) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00034fc9) popup_call2_audio_wait_window_g

0x2713,	// (0x000285c1) popup_call2_audio_wait_window_t3

0x6511,	// (0x0002c3bf) bg_popup_call2_act_pane_ParamLimits

0x6511,	// (0x0002c3bf) bg_popup_call2_act_pane

0xb3c3,	// (0x00031271) call_type_pane_cp03_ParamLimits

0xb3c3,	// (0x00031271) call_type_pane_cp03

0xb427,	// (0x000312d5) popup_call2_audio_first_window_g1_ParamLimits

0xb427,	// (0x000312d5) popup_call2_audio_first_window_g1

0xb497,	// (0x00031345) popup_call2_audio_first_window_g2_ParamLimits

0xb497,	// (0x00031345) popup_call2_audio_first_window_g2

0x54b7,	// (0x0002b365) popup_call2_audio_first_window_g3_ParamLimits

0x54b7,	// (0x0002b365) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x000353f9) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x000353f9) popup_call2_audio_first_window_g

0xb575,	// (0x00031423) popup_call2_audio_first_window_t1_ParamLimits

0xb575,	// (0x00031423) popup_call2_audio_first_window_t1

0xb678,	// (0x00031526) popup_call2_audio_first_window_t4_ParamLimits

0xb678,	// (0x00031526) popup_call2_audio_first_window_t4

0xb75b,	// (0x00031609) popup_call2_audio_first_window_t5_ParamLimits

0xb75b,	// (0x00031609) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00035404) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00035404) popup_call2_audio_first_window_t

0x2944,	// (0x000287f2) bg_popup_call2_act_pane_g1

0xbdd0,	// (0x00031c7e) popup_cale_lunar_info_window_t1

0xbdde,	// (0x00031c8c) popup_cale_lunar_info_window_t2

0xbdec,	// (0x00031c9a) popup_cale_lunar_info_window_t3

0x26f1,	// (0x0002859f) bg_popup_call2_bubble_pane

0xb85c,	// (0x0003170a) bg_popup_call2_in_pane_cp01_ParamLimits

0xb85c,	// (0x0003170a) bg_popup_call2_in_pane_cp01

0x23a9,	// (0x00028257) call_type_pane_cp02

0xb8a4,	// (0x00031752) popup_call2_audio_out_window_g1_ParamLimits

0xb8a4,	// (0x00031752) popup_call2_audio_out_window_g1

0xb8d0,	// (0x0003177e) popup_call2_audio_out_window_g2_ParamLimits

0xb8d0,	// (0x0003177e) popup_call2_audio_out_window_g2

0xb8f8,	// (0x000317a6) popup_call2_audio_out_window_g3_ParamLimits

0xb8f8,	// (0x000317a6) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0003540d) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0003540d) popup_call2_audio_out_window_g

0xb933,	// (0x000317e1) popup_call2_audio_out_window_t1_ParamLimits

0xb933,	// (0x000317e1) popup_call2_audio_out_window_t1

0xb992,	// (0x00031840) popup_call2_audio_out_window_t2_ParamLimits

0xb992,	// (0x00031840) popup_call2_audio_out_window_t2

0xb9e6,	// (0x00031894) popup_call2_audio_out_window_t3_ParamLimits

0xb9e6,	// (0x00031894) popup_call2_audio_out_window_t3

0xb9fc,	// (0x000318aa) popup_call2_audio_out_window_t4_ParamLimits

0xb9fc,	// (0x000318aa) popup_call2_audio_out_window_t4

0xba12,	// (0x000318c0) popup_call2_audio_out_window_t5_ParamLimits

0xba12,	// (0x000318c0) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00035416) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00035416) popup_call2_audio_out_window_t

0xba76,	// (0x00031924) bg_popup_call2_in_pane_ParamLimits

0xba76,	// (0x00031924) bg_popup_call2_in_pane

0xbad2,	// (0x00031980) popup_call2_audio_in_window_g1_ParamLimits

0xbad2,	// (0x00031980) popup_call2_audio_in_window_g1

0xbb0a,	// (0x000319b8) popup_call2_audio_in_window_g2_ParamLimits

0xbb0a,	// (0x000319b8) popup_call2_audio_in_window_g2

0xbb42,	// (0x000319f0) popup_call2_audio_in_window_g3_ParamLimits

0xbb42,	// (0x000319f0) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00035423) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00035423) popup_call2_audio_in_window_g

0xbb9a,	// (0x00031a48) popup_call2_audio_in_window_t1_ParamLimits

0xbb9a,	// (0x00031a48) popup_call2_audio_in_window_t1

0xbc1a,	// (0x00031ac8) popup_call2_audio_in_window_t2_ParamLimits

0xbc1a,	// (0x00031ac8) popup_call2_audio_in_window_t2

0xbc9a,	// (0x00031b48) popup_call2_audio_in_window_t3_ParamLimits

0xbc9a,	// (0x00031b48) popup_call2_audio_in_window_t3

0xbcb4,	// (0x00031b62) popup_call2_audio_in_window_t4_ParamLimits

0xbcb4,	// (0x00031b62) popup_call2_audio_in_window_t4

0xbcc6,	// (0x00031b74) popup_call2_audio_in_window_t5_ParamLimits

0xbcc6,	// (0x00031b74) popup_call2_audio_in_window_t5

0xbcdb,	// (0x00031b89) popup_call2_audio_in_window_t6_ParamLimits

0xbcdb,	// (0x00031b89) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0003542c) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0003542c) popup_call2_audio_in_window_t

0x2944,	// (0x000287f2) bg_popup_call2_in_pane_g1

0xbdfa,	// (0x00031ca8) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x00035494) popup_cale_lunar_info_window_t

0x294c,	// (0x000287fa) bg_popup_call2_rect_pane_ParamLimits

0x294c,	// (0x000287fa) bg_popup_call2_rect_pane

0x26f1,	// (0x0002859f) call2_cli_visual_graphic_pane

0x26f1,	// (0x0002859f) call2_cli_visual_text_pane

0xbfd0,	// (0x00031e7e) smil_status_volume_pane_g3

0x0002,

0x2cd8,	// (0x00028b86) call2_cli_visual_graphic_pane_g1

0x2cd8,	// (0x00028b86) call2_cli_visual_graphic_pane_g2

0x2cd8,	// (0x00028b86) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00035439) call2_cli_visual_graphic_pane_g

0xbcf0,	// (0x00031b9e) bg_popup_call2_rect_pane_g1

0x2df1,	// (0x00028c9f) bg_popup_call2_rect_pane_g2

0xbcf8,	// (0x00031ba6) bg_popup_call2_rect_pane_g3

0xbd00,	// (0x00031bae) bg_popup_call2_rect_pane_g4

0xbd08,	// (0x00031bb6) bg_popup_call2_rect_pane_g5

0xbd10,	// (0x00031bbe) bg_popup_call2_rect_pane_g6

0xbd18,	// (0x00031bc6) bg_popup_call2_rect_pane_g7

0xbd20,	// (0x00031bce) bg_popup_call2_rect_pane_g8

0xbd28,	// (0x00031bd6) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00035440) bg_popup_call2_rect_pane_g

0xbd30,	// (0x00031bde) bg_popup_call2_bubble_pane_g1

0xbd38,	// (0x00031be6) bg_popup_call2_bubble_pane_g2

0xbd40,	// (0x00031bee) bg_popup_call2_bubble_pane_g3

0xbd48,	// (0x00031bf6) bg_popup_call2_bubble_pane_g4

0xbd50,	// (0x00031bfe) bg_popup_call2_bubble_pane_g5

0xbd58,	// (0x00031c06) bg_popup_call2_bubble_pane_g6

0xbd60,	// (0x00031c0e) bg_popup_call2_bubble_pane_g7

0xbd68,	// (0x00031c16) bg_popup_call2_bubble_pane_g8

0xbd70,	// (0x00031c1e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00035453) bg_popup_call2_bubble_pane_g

0x2e74,	// (0x00028d22) aid_cale_week_size_cell_pane

0x32cd,	// (0x0002917b) aid_cams_cif_uncrop_pane_ParamLimits

0x32cd,	// (0x0002917b) aid_cams_cif_uncrop_pane

0x34c8,	// (0x00029376) aid_cams_size_cell_ParamLimits

0x34c8,	// (0x00029376) aid_cams_size_cell

0x34dc,	// (0x0002938a) grid_cams_pane_ParamLimits

0x34f6,	// (0x000293a4) linegrid_cams_pane_ParamLimits

0x373a,	// (0x000295e8) call_video_pane_t1

0x3758,	// (0x00029606) call_video_pane_t2

0x0001,

0xf292,	// (0x00035140) call_video_pane_t

0x3ded,	// (0x00029c9b) aid_cale_month_size_cell_pane_ParamLimits

0x3ded,	// (0x00029c9b) aid_cale_month_size_cell_pane

0xf62f,	// (0x000354dd) smil_status_volume_pane_g

0xbfdd,	// (0x00031e8b) volume_smil_pane_ParamLimits

0x1fc7,	// (0x00027e75) aid_popup2_width_pane

0x2d49,	// (0x00028bf7) cell_qdial_pane_g4_ParamLimits

0x2d49,	// (0x00028bf7) cell_qdial_pane_g4

0x4f5d,	// (0x0002ae0b) aid_blid_cardinal_pane_ParamLimits

0x4f69,	// (0x0002ae17) aid_blid_destination_pane_ParamLimits

0x4f69,	// (0x0002ae17) aid_blid_destination_pane

0x294c,	// (0x000287fa) bg_popup_call_poc_act_pane_ParamLimits

0x294c,	// (0x000287fa) bg_popup_call_poc_act_pane

0x294c,	// (0x000287fa) bg_popup_call_poc_inact_pane_ParamLimits

0x294c,	// (0x000287fa) bg_popup_call_poc_inact_pane

0xbd80,	// (0x00031c2e) bg_popup_call_poc_act_pane_g1

0xbd88,	// (0x00031c36) bg_popup_call_poc_act_pane_g2

0xbd90,	// (0x00031c3e) bg_popup_call_poc_act_pane_g3

0xbd48,	// (0x00031bf6) bg_popup_call_poc_act_pane_g4

0xbd50,	// (0x00031bfe) bg_popup_call_poc_act_pane_g5

0xbd98,	// (0x00031c46) bg_popup_call_poc_act_pane_g6

0xbd60,	// (0x00031c0e) bg_popup_call_poc_act_pane_g7

0xbda0,	// (0x00031c4e) bg_popup_call_poc_act_pane_g8

0x26f1,	// (0x0002859f) main_usb_pane

0xbef9,	// (0x00031da7) popup_cale_lunar_info_window

0x3a80,	// (0x0002992e) im_reading_pane_t1_ParamLimits

0x3abc,	// (0x0002996a) list_im_pane_ParamLimits

0x3acd,	// (0x0002997b) scroll_pane_cp07_ParamLimits

0x26f1,	// (0x0002859f) grid_highlight_pane_cp012

0x294c,	// (0x000287fa) mup_scale_pane_ParamLimits

0x59bf,	// (0x0002b86d) main_usb_pane_g1_ParamLimits

0x59bf,	// (0x0002b86d) main_usb_pane_g1

0x65ee,	// (0x0002c49c) main_usb_pane_g2_ParamLimits

0x65ee,	// (0x0002c49c) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0003547d) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0003547d) main_usb_pane_g

0x6604,	// (0x0002c4b2) main_usb_pane_t1_ParamLimits

0x6604,	// (0x0002c4b2) main_usb_pane_t1

0x6616,	// (0x0002c4c4) main_usb_pane_t2_ParamLimits

0x6616,	// (0x0002c4c4) main_usb_pane_t2

0x6628,	// (0x0002c4d6) main_usb_pane_t3_ParamLimits

0x6628,	// (0x0002c4d6) main_usb_pane_t3

0x663a,	// (0x0002c4e8) main_usb_pane_t4_ParamLimits

0x663a,	// (0x0002c4e8) main_usb_pane_t4

0x664c,	// (0x0002c4fa) main_usb_pane_t5_ParamLimits

0x664c,	// (0x0002c4fa) main_usb_pane_t5

0x665e,	// (0x0002c50c) main_usb_pane_t6_ParamLimits

0x665e,	// (0x0002c50c) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x00035482) main_usb_pane_t_ParamLimits

0x4f02,	// (0x0002adb0) aid_text_placing

0x4f0b,	// (0x0002adb9) main_location2_pane_t1_ParamLimits

0x4f1f,	// (0x0002adcd) main_location2_pane_t2_ParamLimits

0x4f33,	// (0x0002ade1) main_location2_pane_t3_ParamLimits

0x4f49,	// (0x0002adf7) main_location2_pane_t4_ParamLimits

0x4f49,	// (0x0002adf7) main_location2_pane_t4

0xf3f3,	// (0x000352a1) main_location2_pane_t_ParamLimits

0x2a24,	// (0x000288d2) find_pinb_pane_g2_ParamLimits

0x2a24,	// (0x000288d2) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00034fef) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00034fef) find_pinb_pane_g

0x2a30,	// (0x000288de) find_pinb_pane_t1_ParamLimits

0x2a42,	// (0x000288f0) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00034ff4) find_pinb_pane_t_ParamLimits

0x26f1,	// (0x0002859f) main_call3_pane

0x4186,	// (0x0002a034) cale_month_day_heading_pane_t1_ParamLimits

0x41e4,	// (0x0002a092) cale_month_day_heading_pane_t2_ParamLimits

0x4249,	// (0x0002a0f7) cale_month_day_heading_pane_t3_ParamLimits

0x42ae,	// (0x0002a15c) cale_month_day_heading_pane_t4_ParamLimits

0x4313,	// (0x0002a1c1) cale_month_day_heading_pane_t5_ParamLimits

0x4388,	// (0x0002a236) cale_month_day_heading_pane_t6_ParamLimits

0x43fd,	// (0x0002a2ab) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00035178) cale_month_day_heading_pane_t_ParamLimits

0x4629,	// (0x0002a4d7) smil_status_volume_pane

0x599b,	// (0x0002b849) postcard_address_pane_ParamLimits

0x599b,	// (0x0002b849) postcard_address_pane

0x59ad,	// (0x0002b85b) postcard_message_pane_ParamLimits

0x59ad,	// (0x0002b85b) postcard_message_pane

0x65d1,	// (0x0002c47f) call2_cli_visual_pane_t1_ParamLimits

0x65d1,	// (0x0002c47f) call2_cli_visual_pane_t1

0x6de5,	// (0x0002cc93) postcard_message_pane_t1_ParamLimits

0x6de5,	// (0x0002cc93) postcard_message_pane_t1

0x6dce,	// (0x0002cc7c) postcard_address_pane_t1_ParamLimits

0x6dce,	// (0x0002cc7c) postcard_address_pane_t1

0x6dba,	// (0x0002cc68) popup_call3_audio_in_window_ParamLimits

0x6dba,	// (0x0002cc68) popup_call3_audio_in_window

0x6c49,	// (0x0002caf7) bg_popup_call3_in_pane_ParamLimits

0x6c49,	// (0x0002caf7) bg_popup_call3_in_pane

0x6cbb,	// (0x0002cb69) popup_call3_audio_in_window_g1_ParamLimits

0x6cbb,	// (0x0002cb69) popup_call3_audio_in_window_g1

0x6cdb,	// (0x0002cb89) popup_call3_audio_in_window_g2_ParamLimits

0x6cdb,	// (0x0002cb89) popup_call3_audio_in_window_g2

0x6cfb,	// (0x0002cba9) popup_call3_audio_in_window_g3_ParamLimits

0x6cfb,	// (0x0002cba9) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x000354e4) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x000354e4) popup_call3_audio_in_window_g

0x6d2c,	// (0x0002cbda) popup_call3_audio_in_window_t1_ParamLimits

0x6d2c,	// (0x0002cbda) popup_call3_audio_in_window_t1

0x6d6a,	// (0x0002cc18) popup_call3_audio_in_window_t2_ParamLimits

0x6d6a,	// (0x0002cc18) popup_call3_audio_in_window_t2

0x6da8,	// (0x0002cc56) popup_call3_audio_in_window_t3_ParamLimits

0x6da8,	// (0x0002cc56) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x000354ed) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x000354ed) popup_call3_audio_in_window_t

0x51c7,	// (0x0002b075) bg_popup_call3_rect_pane

0xbcf0,	// (0x00031b9e) bg_popup_call3_rect_pane_g1

0x2df1,	// (0x00028c9f) bg_popup_call3_rect_pane_g2

0xbcf8,	// (0x00031ba6) bg_popup_call3_rect_pane_g3

0xbd00,	// (0x00031bae) bg_popup_call3_rect_pane_g4

0xbd08,	// (0x00031bb6) bg_popup_call3_rect_pane_g5

0xbd10,	// (0x00031bbe) bg_popup_call3_rect_pane_g6

0xbd18,	// (0x00031bc6) bg_popup_call3_rect_pane_g7

0x54af,	// (0x0002b35d) mup_visualizer_osc_pane

0x54c5,	// (0x0002b373) mup_visualizer_spec_pane

0x6c79,	// (0x0002cb27) call3_video_qcif_pane_ParamLimits

0x6c79,	// (0x0002cb27) call3_video_qcif_pane

0x6c8a,	// (0x0002cb38) call3_video_qcif_uncrop_pane_ParamLimits

0x6c8a,	// (0x0002cb38) call3_video_qcif_uncrop_pane

0x6c96,	// (0x0002cb44) call3_video_subqcif_pane_ParamLimits

0x6c96,	// (0x0002cb44) call3_video_subqcif_pane

0x6caa,	// (0x0002cb58) call3_video_subqcif_uncrop_pane_ParamLimits

0x6caa,	// (0x0002cb58) call3_video_subqcif_uncrop_pane

0x6d1b,	// (0x0002cbc9) popup_call3_audio_in_window_g4_ParamLimits

0x6d1b,	// (0x0002cbc9) popup_call3_audio_in_window_g4

0x6c38,	// (0x0002cae6) mup_spec_half_pane

0x6c41,	// (0x0002caef) mup_spec_half_pane_cp

0xbf90,	// (0x00031e3e) mup_osc_middle_pane

0xbf99,	// (0x00031e47) mup_visualizer_osc_pane_g1

0x6c18,	// (0x0002cac6) mup_spec_bar_pane_ParamLimits

0x6c18,	// (0x0002cac6) mup_spec_bar_pane

0xbf7d,	// (0x00031e2b) mup_spec_bar_pane_g1

0xbf87,	// (0x00031e35) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x000354d8) mup_spec_bar_pane_g

0x2e74,	// (0x00028d22) aid_cale_week_size_cell_pane_ParamLimits

0x2e87,	// (0x00028d35) bg_cale_heading_pane_ParamLimits

0x2e9f,	// (0x00028d4d) bg_cale_pane_cp01_ParamLimits

0x2eb8,	// (0x00028d66) cale_week_corner_pane_ParamLimits

0x2ec9,	// (0x00028d77) cale_week_day_heading_pane_ParamLimits

0x2ee1,	// (0x00028d8f) cale_week_scroll_pane_g1_ParamLimits

0x2ef6,	// (0x00028da4) cale_week_scroll_pane_g2_ParamLimits

0x2f07,	// (0x00028db5) cale_week_scroll_pane_g3_ParamLimits

0x2f18,	// (0x00028dc6) cale_week_scroll_pane_g4_ParamLimits

0x2f29,	// (0x00028dd7) cale_week_scroll_pane_g5_ParamLimits

0x2f3c,	// (0x00028dea) cale_week_scroll_pane_g6_ParamLimits

0x2f4f,	// (0x00028dfd) cale_week_scroll_pane_g7_ParamLimits

0x2f62,	// (0x00028e10) cale_week_scroll_pane_g8_ParamLimits

0x2f75,	// (0x00028e23) cale_week_scroll_pane_g9_ParamLimits

0x2f86,	// (0x00028e34) cale_week_scroll_pane_g10_ParamLimits

0x2f97,	// (0x00028e45) cale_week_scroll_pane_g11_ParamLimits

0x2fa8,	// (0x00028e56) cale_week_scroll_pane_g12_ParamLimits

0x2fb9,	// (0x00028e67) cale_week_scroll_pane_g13_ParamLimits

0x2fca,	// (0x00028e78) cale_week_scroll_pane_g14_ParamLimits

0x2fdb,	// (0x00028e89) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00035080) cale_week_scroll_pane_g_ParamLimits

0x2fec,	// (0x00028e9a) cale_week_time_pane_ParamLimits

0x2fff,	// (0x00028ead) grid_cale_week_pane_ParamLimits

0x3014,	// (0x00028ec2) listscroll_cale_week_pane_t1

0x3026,	// (0x00028ed4) scroll_pane_cp08_ParamLimits

0x3e51,	// (0x00029cff) cale_month_corner_pane_ParamLimits

0x4133,	// (0x00029fe1) cale_month_pane_t1

0x4145,	// (0x00029ff3) cale_month_week_pane_ParamLimits

0x4b4e,	// (0x0002a9fc) popup_call_status_window_g1_ParamLimits

0x4b62,	// (0x0002aa10) popup_call_status_window_g2_ParamLimits

0x4b76,	// (0x0002aa24) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00035228) popup_call_status_window_g_ParamLimits

0x4bdf,	// (0x0002aa8d) aid_call2_pane

0x57e3,	// (0x0002b691) msg_header_pane_g1

0x599b,	// (0x0002b849) postcard_address2_pane_ParamLimits

0x599b,	// (0x0002b849) postcard_address2_pane

0x59ad,	// (0x0002b85b) postcard_message2_pane_ParamLimits

0x59ad,	// (0x0002b85b) postcard_message2_pane

0x6bc5,	// (0x0002ca73) message2_row_pane_ParamLimits

0x6bc5,	// (0x0002ca73) message2_row_pane

0x6be4,	// (0x0002ca92) address2_row_pane_ParamLimits

0x6be4,	// (0x0002ca92) address2_row_pane

0xbf4b,	// (0x00031df9) postcard_message2_row_pane_g1

0xbf53,	// (0x00031e01) postcard_message2_row_pane_t1

0xbf4b,	// (0x00031df9) address2_row_pane_g1

0xbf53,	// (0x00031e01) address2_row_pane_t1

0xb258,	// (0x00031106) aid_size_cell_vorec

0x26f1,	// (0x0002859f) main_rss_pane

0x6bf7,	// (0x0002caa5) rss_list_single_pane_ParamLimits

0x6bf7,	// (0x0002caa5) rss_list_single_pane

0xbf61,	// (0x00031e0f) rss_list_single_pane_t1

0xbf6f,	// (0x00031e1d) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x000354d3) rss_list_single_pane_t

0x26f1,	// (0x0002859f) main_camera2_pane

0x26f1,	// (0x0002859f) main_video2_pane

0x100e,	// (0x00026ebc) cams_zoom_pane_cp2_ParamLimits

0x100e,	// (0x00026ebc) cams_zoom_pane_cp2

0x102e,	// (0x00026edc) image2_vga_pane_ParamLimits

0x102e,	// (0x00026edc) image2_vga_pane

0x107f,	// (0x00026f2d) main_camera2_pane_g1_ParamLimits

0x107f,	// (0x00026f2d) main_camera2_pane_g1

0x109f,	// (0x00026f4d) main_camera2_pane_g2_ParamLimits

0x109f,	// (0x00026f4d) main_camera2_pane_g2

0x10bf,	// (0x00026f6d) main_camera2_pane_g3_ParamLimits

0x10bf,	// (0x00026f6d) main_camera2_pane_g3

0x10df,	// (0x00026f8d) main_camera2_pane_g4_ParamLimits

0x10df,	// (0x00026f8d) main_camera2_pane_g4

0x10ff,	// (0x00026fad) main_camera2_pane_g5_ParamLimits

0x10ff,	// (0x00026fad) main_camera2_pane_g5

0x111f,	// (0x00026fcd) main_camera2_pane_g6_ParamLimits

0x111f,	// (0x00026fcd) main_camera2_pane_g6

0x113f,	// (0x00026fed) main_camera2_pane_g7_ParamLimits

0x113f,	// (0x00026fed) main_camera2_pane_g7

0x115f,	// (0x0002700d) main_camera2_pane_g8_ParamLimits

0x115f,	// (0x0002700d) main_camera2_pane_g8

0x0008,

0xf646,	// (0x000354f4) main_camera2_pane_g_ParamLimits

0xf646,	// (0x000354f4) main_camera2_pane_g

0x119f,	// (0x0002704d) main_camera2_pane_t1_ParamLimits

0x119f,	// (0x0002704d) main_camera2_pane_t1

0x11d4,	// (0x00027082) main_camera2_pane_t2_ParamLimits

0x11d4,	// (0x00027082) main_camera2_pane_t2

0x11fa,	// (0x000270a8) main_camera2_pane_t3_ParamLimits

0x11fa,	// (0x000270a8) main_camera2_pane_t3

0x1258,	// (0x00027106) main_camera2_pane_t4_ParamLimits

0x1258,	// (0x00027106) main_camera2_pane_t4

0x0006,

0xf659,	// (0x00035507) main_camera2_pane_t_ParamLimits

0xf659,	// (0x00035507) main_camera2_pane_t

0x12ea,	// (0x00027198) cams_zoom_pane_cp4_ParamLimits

0x12ea,	// (0x00027198) cams_zoom_pane_cp4

0x1300,	// (0x000271ae) image2_cif_pane_ParamLimits

0x1300,	// (0x000271ae) image2_cif_pane

0x132b,	// (0x000271d9) image2_subqcif_pane_ParamLimits

0x132b,	// (0x000271d9) image2_subqcif_pane

0x1345,	// (0x000271f3) main_video2_pane_g1_ParamLimits

0x1345,	// (0x000271f3) main_video2_pane_g1

0x135f,	// (0x0002720d) main_video2_pane_g2_ParamLimits

0x135f,	// (0x0002720d) main_video2_pane_g2

0x1375,	// (0x00027223) main_video2_pane_g3_ParamLimits

0x1375,	// (0x00027223) main_video2_pane_g3

0x138b,	// (0x00027239) main_video2_pane_g4_ParamLimits

0x138b,	// (0x00027239) main_video2_pane_g4

0x13a1,	// (0x0002724f) main_video2_pane_g5_ParamLimits

0x13a1,	// (0x0002724f) main_video2_pane_g5

0x13b7,	// (0x00027265) main_video2_pane_g6_ParamLimits

0x13b7,	// (0x00027265) main_video2_pane_g6

0x0005,

0xf668,	// (0x00035516) main_video2_pane_g_ParamLimits

0xf668,	// (0x00035516) main_video2_pane_g

0x13d1,	// (0x0002727f) main_video2_pane_t1_ParamLimits

0x13d1,	// (0x0002727f) main_video2_pane_t1

0x13f5,	// (0x000272a3) main_video2_pane_t2_ParamLimits

0x13f5,	// (0x000272a3) main_video2_pane_t2

0x1443,	// (0x000272f1) main_video2_pane_t3_ParamLimits

0x1443,	// (0x000272f1) main_video2_pane_t3

0x0002,

0xf675,	// (0x00035523) main_video2_pane_t_ParamLimits

0xf675,	// (0x00035523) main_video2_pane_t

0x671b,	// (0x0002c5c9) call_muted_g2

0x0001,

0xf617,	// (0x000354c5) call_muted_g

0x26f1,	// (0x0002859f) main_mup2_pane

0x6e00,	// (0x0002ccae) main_mup2_pane_g1_ParamLimits

0x6e00,	// (0x0002ccae) main_mup2_pane_g1

0x6e0c,	// (0x0002ccba) main_mup2_pane_g2_ParamLimits

0x6e0c,	// (0x0002ccba) main_mup2_pane_g2

0xc101,	// (0x00031faf) main_mup_pane_g13_cp1

0xc109,	// (0x00031fb7) mup_volume_pane_cp1

0x6e28,	// (0x0002ccd6) main_mup2_pane_g4_ParamLimits

0x6e28,	// (0x0002ccd6) main_mup2_pane_g4

0x6e3a,	// (0x0002cce8) main_mup2_pane_g5_ParamLimits

0x6e3a,	// (0x0002cce8) main_mup2_pane_g5

0x6e4c,	// (0x0002ccfa) main_mup2_pane_g6_ParamLimits

0x6e4c,	// (0x0002ccfa) main_mup2_pane_g6

0x6e5e,	// (0x0002cd0c) main_mup2_pane_g7_ParamLimits

0x6e5e,	// (0x0002cd0c) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0003552a) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0003552a) main_mup2_pane_g

0x6e76,	// (0x0002cd24) main_mup2_pane_t1_ParamLimits

0x6e76,	// (0x0002cd24) main_mup2_pane_t1

0x6e8c,	// (0x0002cd3a) main_mup2_pane_t2_ParamLimits

0x6e8c,	// (0x0002cd3a) main_mup2_pane_t2

0x6ea2,	// (0x0002cd50) main_mup2_pane_t3_ParamLimits

0x6ea2,	// (0x0002cd50) main_mup2_pane_t3

0x6eb8,	// (0x0002cd66) main_mup2_pane_t4_ParamLimits

0x6eb8,	// (0x0002cd66) main_mup2_pane_t4

0x6ed0,	// (0x0002cd7e) main_mup2_pane_t5_ParamLimits

0x6ed0,	// (0x0002cd7e) main_mup2_pane_t5

0x6ee8,	// (0x0002cd96) main_mup2_pane_t6_ParamLimits

0x6ee8,	// (0x0002cd96) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00035539) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00035539) main_mup2_pane_t

0x6f18,	// (0x0002cdc6) mup2_visualizer_pane_ParamLimits

0x6f18,	// (0x0002cdc6) mup2_visualizer_pane

0x6f46,	// (0x0002cdf4) mup_progress_pane_cp_ParamLimits

0x6f46,	// (0x0002cdf4) mup_progress_pane_cp

0xc0e3,	// (0x00031f91) mup_volume_pane_cp_ParamLimits

0xc0e3,	// (0x00031f91) mup_volume_pane_cp

0x6f5a,	// (0x0002ce08) mup2_visualizer_pane_g1_ParamLimits

0x6f5a,	// (0x0002ce08) mup2_visualizer_pane_g1

0xc022,	// (0x00031ed0) mup2_visualizer_pane_g2_ParamLimits

0xc022,	// (0x00031ed0) mup2_visualizer_pane_g2

0x6f71,	// (0x0002ce1f) mup2_visualizer_pane_g3_ParamLimits

0x6f71,	// (0x0002ce1f) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00035546) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00035546) mup2_visualizer_pane_g

0x5d70,	// (0x0002bc1e) aid_size_cell_fmradio

0x68cd,	// (0x0002c77b) aid_height_parent_landcape

0x3b85,	// (0x00029a33) wml_content_pane_cp

0x3b8d,	// (0x00029a3b) wml_tabs_pane

0x3b96,	// (0x00029a44) popup_wml_miniature_window

0x3b9e,	// (0x00029a4c) scroll_pane_cp021

0x3bb2,	// (0x00029a60) wml_content_pane_comp8

0x26f1,	// (0x0002859f) bg_popup_sub_pane_cp05

0xc040,	// (0x00031eee) popup_wml_miniature_window_g1

0xc048,	// (0x00031ef6) wml_miniature_view_pane

0x6f7d,	// (0x0002ce2b) aid_size_wml_view

0x6f85,	// (0x0002ce33) wml_miniature_view_pane_g1

0x6f8e,	// (0x0002ce3c) wml_miniature_view_pane_g2

0x6f97,	// (0x0002ce45) wml_miniature_view_pane_g3

0x6f9f,	// (0x0002ce4d) wml_miniature_view_pane_g4

0x6fa7,	// (0x0002ce55) wml_miniature_view_pane_g5

0x6faf,	// (0x0002ce5d) wml_miniature_view_pane_g6

0x6fb7,	// (0x0002ce65) wml_miniature_view_pane_g7

0x6fbf,	// (0x0002ce6d) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0003554d) wml_miniature_view_pane_g

0xc050,	// (0x00031efe) background_graphic_ParamLimits

0xc050,	// (0x00031efe) background_graphic

0xc05c,	// (0x00031f0a) wml_tabs_2_pane

0xc065,	// (0x00031f13) wml_tabs_3_pane_ParamLimits

0xc065,	// (0x00031f13) wml_tabs_3_pane

0xc077,	// (0x00031f25) wml_tabs_4_pane_ParamLimits

0xc077,	// (0x00031f25) wml_tabs_4_pane

0xc08d,	// (0x00031f3b) wml_tabs_5_pane_ParamLimits

0xc08d,	// (0x00031f3b) wml_tabs_5_pane

0xc0a7,	// (0x00031f55) wml_tabs_pane_g2_ParamLimits

0xc0a7,	// (0x00031f55) wml_tabs_pane_g2

0xc0bb,	// (0x00031f69) wml_tabs_pane_g3_ParamLimits

0xc0bb,	// (0x00031f69) wml_tabs_pane_g3

0x6fc7,	// (0x0002ce75) wml_tabs_2_active_pane_ParamLimits

0x6fc7,	// (0x0002ce75) wml_tabs_2_active_pane

0x6fdb,	// (0x0002ce89) wml_tabs_2_passive_pane_ParamLimits

0x6fdb,	// (0x0002ce89) wml_tabs_2_passive_pane

0x6fef,	// (0x0002ce9d) wml_tabs_3_active_pane_cp_ParamLimits

0x6fef,	// (0x0002ce9d) wml_tabs_3_active_pane_cp

0x7004,	// (0x0002ceb2) wml_tabs_3_passive_pane_ParamLimits

0x7004,	// (0x0002ceb2) wml_tabs_3_passive_pane

0x7017,	// (0x0002cec5) wml_tabs_3_passive_pane_cp_ParamLimits

0x7017,	// (0x0002cec5) wml_tabs_3_passive_pane_cp

0x702e,	// (0x0002cedc) tabs_4_active_pane

0x7036,	// (0x0002cee4) tabs_4_passive_pane

0x7040,	// (0x0002ceee) tabs_4_passive_pane_cp

0x7048,	// (0x0002cef6) tabs_4_passive_pane_cp2

0xbd78,	// (0x00031c26) aid_height_text

0x5481,	// (0x0002b32f) mup_volume_cont_pane_ParamLimits

0x5481,	// (0x0002b32f) mup_volume_cont_pane

0x29e2,	// (0x00028890) aid_size_cell_pinb

0x29ec,	// (0x0002889a) aid_size_list_pinb

0x6f32,	// (0x0002cde0) mup2_volume_cont_pane_ParamLimits

0x6f32,	// (0x0002cde0) mup2_volume_cont_pane

0xc0cf,	// (0x00031f7d) mup2_volume_cont_pane_g1_ParamLimits

0xc0cf,	// (0x00031f7d) mup2_volume_cont_pane_g1

0x1fd3,	// (0x00027e81) aid_size_cell_touch_ParamLimits

0x1fd3,	// (0x00027e81) aid_size_cell_touch

0x2235,	// (0x000280e3) touch_pane_ParamLimits

0x2235,	// (0x000280e3) touch_pane

0x1fb5,	// (0x00027e63) main_rss2_pane

0xc111,	// (0x00031fbf) listscroll_rss2_pane

0xc11a,	// (0x00031fc8) rss2_navigation_pane

0xc122,	// (0x00031fd0) list_rss2_pane

0x4d8e,	// (0x0002ac3c) scroll_pane_cp22

0xc12a,	// (0x00031fd8) rss2_navigation_pane_g1

0xc133,	// (0x00031fe1) rss2_navigation_pane_g2

0xc13b,	// (0x00031fe9) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0003555e) rss2_navigation_pane_g

0xc143,	// (0x00031ff1) rss2_navigation_pane_t1

0x7052,	// (0x0002cf00) rss2_list_single_pane_ParamLimits

0x7052,	// (0x0002cf00) rss2_list_single_pane

0xc151,	// (0x00031fff) rss2_list_single_pane_t2

0xc15f,	// (0x0003200d) rss2_list_single_pane_t3_ParamLimits

0xc15f,	// (0x0003200d) rss2_list_single_pane_t3

0xc17c,	// (0x0003202a) rss2_list_single_pane_t4

0x4611,	// (0x0002a4bf) smil_status_pane_g1

0x2227,	// (0x000280d5) main_image2_pane_ParamLimits

0x2227,	// (0x000280d5) main_image2_pane

0x117f,	// (0x0002702d) main_camera2_pane_g9_ParamLimits

0x117f,	// (0x0002702d) main_camera2_pane_g9

0x12ad,	// (0x0002715b) main_camera2_pane_t5_ParamLimits

0x12ad,	// (0x0002715b) main_camera2_pane_t5

0xbff2,	// (0x00031ea0) main_camera2_pane_t6_ParamLimits

0xbff2,	// (0x00031ea0) main_camera2_pane_t6

0x706a,	// (0x0002cf18) main_image2_pane_g1_ParamLimits

0x706a,	// (0x0002cf18) main_image2_pane_g1

0x5d26,	// (0x0002bbd4) smil2_video_pane_ParamLimits

0x5d26,	// (0x0002bbd4) smil2_video_pane

0x2003,	// (0x00027eb1) aid_zoom_text_primary_cp

0x21e3,	// (0x00028091) popup_preview_fixed_window

0x3a78,	// (0x00029926) im_reading_pane_g1

0x0ff6,	// (0x00026ea4) cams2_bc_adjust_pane_cp_ParamLimits

0x0ff6,	// (0x00026ea4) cams2_bc_adjust_pane_cp

0x12dc,	// (0x0002718a) cams2_bc_adjust_pane_ParamLimits

0x12dc,	// (0x0002718a) cams2_bc_adjust_pane

0xc18a,	// (0x00032038) cams2_bc_adjust_pane_g1

0xc192,	// (0x00032040) cams2_slider_pane

0xc19b,	// (0x00032049) cams2_slider_pane_g1

0xc1a4,	// (0x00032052) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x00035565) cams2_slider_pane_g

0x0d84,	// (0x00026c32) calc_display_pane_ParamLimits

0x0dac,	// (0x00026c5a) calc_paper_pane_ParamLimits

0x0dcf,	// (0x00026c7d) grid_calc_pane_ParamLimits

0xb352,	// (0x00031200) popup_clock_digital_window_t1_ParamLimits

0x5ba9,	// (0x0002ba57) main_image_pane_t1

0x0d66,	// (0x00026c14) aid_size_cell_calc_ParamLimits

0x0d66,	// (0x00026c14) aid_size_cell_calc

0x6913,	// (0x0002c7c1) popup_blid_sat_info2_window_ParamLimits

0x6913,	// (0x0002c7c1) popup_blid_sat_info2_window

0xc1c6,	// (0x00032074) aid_size_cell_blid

0xc1ce,	// (0x0003207c) bg_popup_window_pane_cp07

0xc1f1,	// (0x0003209f) grid_popup_blid_pane

0xc1fb,	// (0x000320a9) heading_pane_cp05_ParamLimits

0xc1fb,	// (0x000320a9) heading_pane_cp05

0xc2c5,	// (0x00032173) cell_popup_blid_pane_ParamLimits

0xc2c5,	// (0x00032173) cell_popup_blid_pane

0xc2eb,	// (0x00032199) cell_popup_blid_pane_g1

0xc2f3,	// (0x000321a1) cell_popup_blid_pane_t1

0x6f02,	// (0x0002cdb0) mup2_indicator_pane_ParamLimits

0x6f02,	// (0x0002cdb0) mup2_indicator_pane

0x51c7,	// (0x0002b075) mup2_visualizer_osc_pane

0xc02e,	// (0x00031edc) mup2_visualizer_spec_pane_ParamLimits

0xc02e,	// (0x00031edc) mup2_visualizer_spec_pane

0x7080,	// (0x0002cf2e) mup2_spec_half_pane

0x7089,	// (0x0002cf37) mup2_spec_half_pane_cp

0x7091,	// (0x0002cf3f) mup2_spec_bar_pane_ParamLimits

0x7091,	// (0x0002cf3f) mup2_spec_bar_pane

0xbf7d,	// (0x00031e2b) mup2_spec_bar_pane_g1

0xbf87,	// (0x00031e35) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x000354d8) mup2_spec_bar_pane_g

0x70b1,	// (0x0002cf5f) mup2_osc_middle_pane

0xbf99,	// (0x00031e47) mup2_visualizer_osc_pane_g1

0x22a7,	// (0x00028155) popup_number_entry_window_t1_ParamLimits

0x22ba,	// (0x00028168) popup_number_entry_window_t2_ParamLimits

0x22cc,	// (0x0002817a) popup_number_entry_window_t3_ParamLimits

0x22de,	// (0x0002818c) popup_number_entry_window_t5_ParamLimits

0x22de,	// (0x0002818c) popup_number_entry_window_t5

0xf0ec,	// (0x00034f9a) popup_number_entry_window_t_ParamLimits

0x2313,	// (0x000281c1) text_title_cp2_ParamLimits

0xb391,	// (0x0003123f) aid_hotspot_pointer_text2_pane

0xb3b7,	// (0x00031265) main_viewer_pane_g9_ParamLimits

0xb3b7,	// (0x00031265) main_viewer_pane_g9

0x4133,	// (0x00029fe1) cale_month_pane_t1_ParamLimits

0x469b,	// (0x0002a549) bg_cale_pane_ParamLimits

0x46b3,	// (0x0002a561) list_cale_pane_ParamLimits

0x3014,	// (0x00028ec2) listscroll_cale_day_pane_t1

0x46c4,	// (0x0002a572) scroll_pane_cp09_ParamLimits

0x5533,	// (0x0002b3e1) main_mup_eq_pane_t1_ParamLimits

0x5533,	// (0x0002b3e1) main_mup_eq_pane_t1

0x554d,	// (0x0002b3fb) main_mup_eq_pane_t2_ParamLimits

0x554d,	// (0x0002b3fb) main_mup_eq_pane_t2

0x5567,	// (0x0002b415) main_mup_eq_pane_t3_ParamLimits

0x5567,	// (0x0002b415) main_mup_eq_pane_t3

0x5583,	// (0x0002b431) main_mup_eq_pane_t4_ParamLimits

0x5583,	// (0x0002b431) main_mup_eq_pane_t4

0x559f,	// (0x0002b44d) main_mup_eq_pane_t5_ParamLimits

0x559f,	// (0x0002b44d) main_mup_eq_pane_t5

0x55bb,	// (0x0002b469) main_mup_eq_pane_t6_ParamLimits

0x55bb,	// (0x0002b469) main_mup_eq_pane_t6

0x55cf,	// (0x0002b47d) main_mup_eq_pane_t7_ParamLimits

0x55cf,	// (0x0002b47d) main_mup_eq_pane_t7

0x55e3,	// (0x0002b491) main_mup_eq_pane_t8_ParamLimits

0x55e3,	// (0x0002b491) main_mup_eq_pane_t8

0x55f7,	// (0x0002b4a5) main_mup_eq_pane_t9_ParamLimits

0x55f7,	// (0x0002b4a5) main_mup_eq_pane_t9

0x5611,	// (0x0002b4bf) main_mup_eq_pane_t10_ParamLimits

0x5611,	// (0x0002b4bf) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00035327) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00035327) main_mup_eq_pane_t

0x56c0,	// (0x0002b56e) mup_equalizer_pane_cp5_ParamLimits

0x56d4,	// (0x0002b582) mup_equalizer_pane_cp6_ParamLimits

0x56e8,	// (0x0002b596) mup_equalizer_pane_cp7_ParamLimits

0x1fb5,	// (0x00027e63) main_gallery_pane

0xbfa2,	// (0x00031e50) smil2_volume_pane

0xbfaa,	// (0x00031e58) smil_status_volume_pane_g1_ParamLimits

0xbfbd,	// (0x00031e6b) smil_status_volume_pane_g2_ParamLimits

0xbfd0,	// (0x00031e7e) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x000354dd) smil_status_volume_pane_g_ParamLimits

0xc1ce,	// (0x0003207c) bg_popup_window_pane_cp07_ParamLimits

0xc1dc,	// (0x0003208a) blid_firmament_pane

0x70ba,	// (0x0002cf68) aid_size_cell_gallery_ParamLimits

0x70ba,	// (0x0002cf68) aid_size_cell_gallery

0x70d0,	// (0x0002cf7e) grid_gallery_pane_ParamLimits

0x70d0,	// (0x0002cf7e) grid_gallery_pane

0x70e9,	// (0x0002cf97) cell_gallery_pane_ParamLimits

0x70e9,	// (0x0002cf97) cell_gallery_pane

0xc301,	// (0x000321af) bg_cell_gallery_focus_pane_ParamLimits

0xc301,	// (0x000321af) bg_cell_gallery_focus_pane

0xc313,	// (0x000321c1) cell_gallery_pane_g1_ParamLimits

0xc313,	// (0x000321c1) cell_gallery_pane_g1

0x7132,	// (0x0002cfe0) cell_gallery_pane_g2_ParamLimits

0x7132,	// (0x0002cfe0) cell_gallery_pane_g2

0x713f,	// (0x0002cfed) cell_gallery_pane_g3_ParamLimits

0x713f,	// (0x0002cfed) cell_gallery_pane_g3

0xc31f,	// (0x000321cd) cell_gallery_pane_g4_ParamLimits

0xc31f,	// (0x000321cd) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0003558b) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0003558b) cell_gallery_pane_g

0xc32b,	// (0x000321d9) bg_cell_gallery_focus_pane_g1

0xc333,	// (0x000321e1) bg_cell_gallery_focus_pane_g2

0xc33b,	// (0x000321e9) bg_cell_gallery_focus_pane_g3

0xc343,	// (0x000321f1) bg_cell_gallery_focus_pane_g4

0xc34b,	// (0x000321f9) bg_cell_gallery_focus_pane_g5

0xc353,	// (0x00032201) bg_cell_gallery_focus_pane_g6

0xc35b,	// (0x00032209) bg_cell_gallery_focus_pane_g7

0xc363,	// (0x00032211) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x00035594) bg_cell_gallery_focus_pane_g

0xc36b,	// (0x00032219) aid_firma_cardinal

0xc37f,	// (0x0003222d) blid_firmament_pane_t1

0xc396,	// (0x00032244) blid_firmament_pane_t2

0xc3ad,	// (0x0003225b) blid_firmament_pane_t3

0xc3c4,	// (0x00032272) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x000355a5) blid_firmament_pane_t

0xc3db,	// (0x00032289) blid_sat_info_pane

0xc3eb,	// (0x00032299) blid_sat_info_pane_g1

0xc3eb,	// (0x00032299) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x000355ae) blid_sat_info_pane_g

0xc3f5,	// (0x000322a3) blid_sat_info_pane_t1

0xc403,	// (0x000322b1) smil2_volume_content_pane

0xc40c,	// (0x000322ba) smil2_volume_pane_g1

0xc414,	// (0x000322c2) smil2_volume_content_pane_g1

0xc41d,	// (0x000322cb) smil2_volume_content_pane_g2

0xc426,	// (0x000322d4) smil2_volume_content_pane_g3

0xc42f,	// (0x000322dd) smil2_volume_content_pane_g4

0xc438,	// (0x000322e6) smil2_volume_content_pane_g5

0xc441,	// (0x000322ef) smil2_volume_content_pane_g6

0xc44a,	// (0x000322f8) smil2_volume_content_pane_g7

0xc453,	// (0x00032301) smil2_volume_content_pane_g8

0xc45c,	// (0x0003230a) smil2_volume_content_pane_g9

0xc465,	// (0x00032313) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x000355b3) smil2_volume_content_pane_g

0x3080,	// (0x00028f2e) cale_week_day_heading_pane_t1_ParamLimits

0x3094,	// (0x00028f42) cale_week_day_heading_pane_t2_ParamLimits

0x30a8,	// (0x00028f56) cale_week_day_heading_pane_t3_ParamLimits

0x30bc,	// (0x00028f6a) cale_week_day_heading_pane_t4_ParamLimits

0x30d0,	// (0x00028f7e) cale_week_day_heading_pane_t5_ParamLimits

0x30e4,	// (0x00028f92) cale_week_day_heading_pane_t6_ParamLimits

0x30fa,	// (0x00028fa8) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0003509f) cale_week_day_heading_pane_t_ParamLimits

0x310e,	// (0x00028fbc) bg_cale_side_pane_ParamLimits

0x0e9c,	// (0x00026d4a) cale_week_time_pane_t1_ParamLimits

0x0eb4,	// (0x00026d62) cale_week_time_pane_t2_ParamLimits

0x0ecc,	// (0x00026d7a) cale_week_time_pane_t3_ParamLimits

0x0ee4,	// (0x00026d92) cale_week_time_pane_t4_ParamLimits

0x0efc,	// (0x00026daa) cale_week_time_pane_t5_ParamLimits

0x0f14,	// (0x00026dc2) cale_week_time_pane_t6_ParamLimits

0x0f2c,	// (0x00026dda) cale_week_time_pane_t7_ParamLimits

0x0f44,	// (0x00026df2) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x000350ae) cale_week_time_pane_t_ParamLimits

0x311c,	// (0x00028fca) cell_cale_week_pane_g2_ParamLimits

0x310e,	// (0x00028fbc) bg_cale_side_pane_cp01_ParamLimits

0x4472,	// (0x0002a320) cale_month_week_pane_t1_ParamLimits

0x4489,	// (0x0002a337) cale_month_week_pane_t2_ParamLimits

0x44a0,	// (0x0002a34e) cale_month_week_pane_t3_ParamLimits

0x44b7,	// (0x0002a365) cale_month_week_pane_t4_ParamLimits

0x44ce,	// (0x0002a37c) cale_month_week_pane_t5_ParamLimits

0x44e5,	// (0x0002a393) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00035187) cale_month_week_pane_t_ParamLimits

0xb2d2,	// (0x00031180) cell_cale_month_pane_g1_ParamLimits

0x1fb5,	// (0x00027e63) main_cale_event_viewer_pane

0x1fb5,	// (0x00027e63) listscroll_cale_event_viewer_pane

0xc46e,	// (0x0003231c) list_cale_ev_pane

0xc476,	// (0x00032324) scroll_pane_cp023

0xc482,	// (0x00032330) field_cale_ev_pane_ParamLimits

0xc482,	// (0x00032330) field_cale_ev_pane

0xc49c,	// (0x0003234a) field_cale_ev_content_pane_ParamLimits

0xc49c,	// (0x0003234a) field_cale_ev_content_pane

0xc4a8,	// (0x00032356) field_cale_ev_pane_g1_ParamLimits

0xc4a8,	// (0x00032356) field_cale_ev_pane_g1

0xc4b4,	// (0x00032362) field_cale_ev_pane_g2_ParamLimits

0xc4b4,	// (0x00032362) field_cale_ev_pane_g2

0xc4cc,	// (0x0003237a) field_cale_ev_pane_g3_ParamLimits

0xc4cc,	// (0x0003237a) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x000355c8) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x000355c8) field_cale_ev_pane_g

0xc4e4,	// (0x00032392) field_cale_ev_pane_t1_ParamLimits

0xc4e4,	// (0x00032392) field_cale_ev_pane_t1

0xc4fb,	// (0x000323a9) field_cale_ev_content_pane_t1_ParamLimits

0xc4fb,	// (0x000323a9) field_cale_ev_content_pane_t1

0x57d1,	// (0x0002b67f) bg_button_pane_cp01

0x2c29,	// (0x00028ad7) listscroll_cale_week_pane_ParamLimits

0x2e6a,	// (0x00028d18) popup_toolbar_window_cp01

0x3014,	// (0x00028ec2) listscroll_cale_week_pane_t1_ParamLimits

0x2c29,	// (0x00028ad7) listscroll_cale_day_pane_ParamLimits

0x4691,	// (0x0002a53f) popup_toolbar_window_cp02

0x3014,	// (0x00028ec2) listscroll_cale_day_pane_t1_ParamLimits

0x2c29,	// (0x00028ad7) main_cale_month_pane_ParamLimits

0x6b39,	// (0x0002c9e7) popup_toolbar_window_cp03_ParamLimits

0x6b39,	// (0x0002c9e7) popup_toolbar_window_cp03

0x5b87,	// (0x0002ba35) main_image_pane_g2_ParamLimits

0x5b87,	// (0x0002ba35) main_image_pane_g2

0x5b98,	// (0x0002ba46) main_image_pane_g3_ParamLimits

0x5b98,	// (0x0002ba46) main_image_pane_g3

0x0002,

0xf50b,	// (0x000353b9) main_image_pane_g_ParamLimits

0xf50b,	// (0x000353b9) main_image_pane_g

0x5ba9,	// (0x0002ba57) main_image_pane_t1_ParamLimits

0x5bc0,	// (0x0002ba6e) main_image_pane_t2_ParamLimits

0x5bc0,	// (0x0002ba6e) main_image_pane_t2

0x5bd2,	// (0x0002ba80) main_image_pane_t3_ParamLimits

0x5bd2,	// (0x0002ba80) main_image_pane_t3

0x5bfa,	// (0x0002baa8) main_image_pane_t4_ParamLimits

0x5bfa,	// (0x0002baa8) main_image_pane_t4

0x0003,

0xf512,	// (0x000353c0) main_image_pane_t_ParamLimits

0xf512,	// (0x000353c0) main_image_pane_t

0x5c1a,	// (0x0002bac8) popup_image_details_window_cp01

0x5c24,	// (0x0002bad2) popup_toobar_trans_pane_cp01_ParamLimits

0x5c24,	// (0x0002bad2) popup_toobar_trans_pane_cp01

0x69ea,	// (0x0002c898) popup_image_details_window_ParamLimits

0x69ea,	// (0x0002c898) popup_image_details_window

0xbf03,	// (0x00031db1) popup_image_focus_window

0x0fb0,	// (0x00026e5e) camera2_autofocus_pane_ParamLimits

0x0fb0,	// (0x00026e5e) camera2_autofocus_pane

0x1fb5,	// (0x00027e63) bg_popup_sub_pane_cp06

0xc518,	// (0x000323c6) popup_image_focus_window_g1

0xc520,	// (0x000323ce) popup_image_focus_window_g2

0xc528,	// (0x000323d6) popup_image_focus_window_g3

0xc530,	// (0x000323de) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x000355cf) popup_image_focus_window_g

0xc538,	// (0x000323e6) popup_image_focus_window_t1

0xc546,	// (0x000323f4) popup_image_focus_window_t2

0xc556,	// (0x00032404) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x000355d8) popup_image_focus_window_t

0xc564,	// (0x00032412) camera2_autofocus_pane_g1

0x2227,	// (0x000280d5) bg_tb_trans_pane_cp01

0xc572,	// (0x00032420) popup_image_details_window_g1

0xc585,	// (0x00032433) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x000355ea) popup_image_details_window_g

0xc5ae,	// (0x0003245c) popup_image_details_window_t1

0xc5c0,	// (0x0003246e) popup_image_details_window_t2

0xc5d9,	// (0x00032487) popup_image_details_window_t3

0xc5ed,	// (0x0003249b) popup_image_details_window_t4

0xc608,	// (0x000324b6) popup_image_details_window_t5

0x0004,

0xf743,	// (0x000355f1) popup_image_details_window_t

0x2c15,	// (0x00028ac3) bg_calc_paper_pane_ParamLimits

0xb1be,	// (0x0003106c) grid_highlight_pane_cp013

0xb1c8,	// (0x00031076) list_calc_pane_ParamLimits

0xb1da,	// (0x00031088) scroll_pane_cp024

0x2c29,	// (0x00028ad7) bg_calc_display_pane_ParamLimits

0x0dfd,	// (0x00026cab) calc_display_pane_t1_ParamLimits

0x0e0f,	// (0x00026cbd) calc_display_pane_t2_ParamLimits

0xb1e2,	// (0x00031090) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00035021) calc_display_pane_t_ParamLimits

0x0e70,	// (0x00026d1e) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0003503e) cell_calc_pane_g

0x0e79,	// (0x00026d27) cell_calc_pane_t1

0x2ce2,	// (0x00028b90) grid_highlight_pane_cp02_ParamLimits

0x2cf8,	// (0x00028ba6) toolbar_button_pane_cp01_ParamLimits

0x2cf8,	// (0x00028ba6) toolbar_button_pane_cp01

0x5c66,	// (0x0002bb14) temp_image_control_pane_ParamLimits

0x5c66,	// (0x0002bb14) temp_image_control_pane

0x2227,	// (0x000280d5) main_mp3_pane

0xc622,	// (0x000324d0) temp_image_control_pane_g1_ParamLimits

0xc622,	// (0x000324d0) temp_image_control_pane_g1

0xc630,	// (0x000324de) temp_image_control_pane_g2_ParamLimits

0xc630,	// (0x000324de) temp_image_control_pane_g2

0xc642,	// (0x000324f0) temp_image_control_pane_g3_ParamLimits

0xc642,	// (0x000324f0) temp_image_control_pane_g3

0x717c,	// (0x0002d02a) temp_image_control_pane_g4_ParamLimits

0x717c,	// (0x0002d02a) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x000355fc) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x000355fc) temp_image_control_pane_g

0xc622,	// (0x000324d0) main_mp3_pane_g1

0x718f,	// (0x0002d03d) main_mp3_pane_g2

0x0007,

0xf757,	// (0x00035605) main_mp3_pane_g

0xc685,	// (0x00032533) main_mp3_pane_t1

0x3293,	// (0x00029141) main_camera_pane_g8_ParamLimits

0x3293,	// (0x00029141) main_camera_pane_g8

0x344a,	// (0x000292f8) main_video_pane_g7_ParamLimits

0x344a,	// (0x000292f8) main_video_pane_g7

0xc010,	// (0x00031ebe) main_camera2_pane_t7_ParamLimits

0xc010,	// (0x00031ebe) main_camera2_pane_t7

0x3b45,	// (0x000299f3) scroll_pane_cp025_ParamLimits

0x3b45,	// (0x000299f3) scroll_pane_cp025

0x3b59,	// (0x00029a07) scroll_pane_cp026_ParamLimits

0x3b59,	// (0x00029a07) scroll_pane_cp026

0x3b68,	// (0x00029a16) wml_content_pane_ParamLimits

0x1fb5,	// (0x00027e63) main_touch_calib_pane

0x725b,	// (0x0002d109) main_touch_calib_pane_g1

0x7267,	// (0x0002d115) main_touch_calib_pane_g2

0x7273,	// (0x0002d121) main_touch_calib_pane_g3

0x727f,	// (0x0002d12d) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x00035623) main_touch_calib_pane_g

0x728b,	// (0x0002d139) main_touch_calib_pane_t1

0x72a5,	// (0x0002d153) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0003562c) main_touch_calib_pane_t

0x5040,	// (0x0002aeee) mup_progress_pane_cp02

0x505f,	// (0x0002af0d) navi_pane_g1

0x5118,	// (0x0002afc6) navi_pane_mp_t3

0x2227,	// (0x000280d5) main_mp3_pane_ParamLimits

0x6b77,	// (0x0002ca25) navi_pane_ParamLimits

0xc622,	// (0x000324d0) main_mp3_pane_g1_ParamLimits

0x718f,	// (0x0002d03d) main_mp3_pane_g2_ParamLimits

0x719d,	// (0x0002d04b) main_mp3_pane_g3_ParamLimits

0x719d,	// (0x0002d04b) main_mp3_pane_g3

0x71ab,	// (0x0002d059) main_mp3_pane_g4_ParamLimits

0x71ab,	// (0x0002d059) main_mp3_pane_g4

0xc652,	// (0x00032500) main_mp3_pane_g5_ParamLimits

0xc652,	// (0x00032500) main_mp3_pane_g5

0xc660,	// (0x0003250e) main_mp3_pane_g6_ParamLimits

0xc660,	// (0x0003250e) main_mp3_pane_g6

0xc66d,	// (0x0003251b) main_mp3_pane_g7_ParamLimits

0xc66d,	// (0x0003251b) main_mp3_pane_g7

0xc679,	// (0x00032527) main_mp3_pane_g8_ParamLimits

0xc679,	// (0x00032527) main_mp3_pane_g8

0xf757,	// (0x00035605) main_mp3_pane_g_ParamLimits

0x71b9,	// (0x0002d067) main_mp3_pane_t2

0x71c7,	// (0x0002d075) main_mp3_pane_t3

0xc693,	// (0x00032541) main_mp3_pane_t4

0xc6a1,	// (0x0003254f) main_mp3_pane_t5

0x0005,

0xf768,	// (0x00035616) main_mp3_pane_t

0xc6af,	// (0x0003255d) mup_progress_pane_cp01

0x2003,	// (0x00027eb1) aid_zoom_text_secondary2

0xc46e,	// (0x0003231c) list_cale_ev2_pane

0xc476,	// (0x00032324) scroll_pane_cp023_ParamLimits

0x72fb,	// (0x0002d1a9) field_cale_ev2_pane_ParamLimits

0x72fb,	// (0x0002d1a9) field_cale_ev2_pane

0x7321,	// (0x0002d1cf) field_cale_ev2_pane_g1_ParamLimits

0x7321,	// (0x0002d1cf) field_cale_ev2_pane_g1

0x732d,	// (0x0002d1db) field_cale_ev2_pane_g2_ParamLimits

0x732d,	// (0x0002d1db) field_cale_ev2_pane_g2

0x7345,	// (0x0002d1f3) field_cale_ev2_pane_g3_ParamLimits

0x7345,	// (0x0002d1f3) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x00035637) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x00035637) field_cale_ev2_pane_g

0xc6c3,	// (0x00032571) field_cale_ev2_pane_t1_ParamLimits

0xc6c3,	// (0x00032571) field_cale_ev2_pane_t1

0xc6da,	// (0x00032588) field_cale_ev2_pane_t2_ParamLimits

0xc6da,	// (0x00032588) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x00035640) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x00035640) field_cale_ev2_pane_t

0x5951,	// (0x0002b7ff) main_postcard_pane_g5_ParamLimits

0x5951,	// (0x0002b7ff) main_postcard_pane_g5

0x5967,	// (0x0002b815) main_postcard_pane_g6_ParamLimits

0x5967,	// (0x0002b815) main_postcard_pane_g6

0x31d4,	// (0x00029082) camera2_autofocus_pane_cp_ParamLimits

0x31d4,	// (0x00029082) camera2_autofocus_pane_cp

0x2227,	// (0x000280d5) main_mup3_pane

0x737d,	// (0x0002d22b) main_mup3_pane_g1_ParamLimits

0x737d,	// (0x0002d22b) main_mup3_pane_g1

0x739f,	// (0x0002d24d) main_mup3_pane_g2_ParamLimits

0x739f,	// (0x0002d24d) main_mup3_pane_g2

0x7420,	// (0x0002d2ce) main_mup3_pane_g3_ParamLimits

0x7420,	// (0x0002d2ce) main_mup3_pane_g3

0x7462,	// (0x0002d310) main_mup3_pane_g4_ParamLimits

0x7462,	// (0x0002d310) main_mup3_pane_g4

0x74a4,	// (0x0002d352) main_mup3_pane_g5_ParamLimits

0x74a4,	// (0x0002d352) main_mup3_pane_g5

0x74e8,	// (0x0002d396) main_mup3_pane_g6_ParamLimits

0x74e8,	// (0x0002d396) main_mup3_pane_g6

0xc6ef,	// (0x0003259d) main_mup3_pane_g7_ParamLimits

0xc6ef,	// (0x0003259d) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x00035650) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x00035650) main_mup3_pane_g

0x7564,	// (0x0002d412) main_mup3_pane_t1_ParamLimits

0x7564,	// (0x0002d412) main_mup3_pane_t1

0x75d8,	// (0x0002d486) main_mup3_pane_t2_ParamLimits

0x75d8,	// (0x0002d486) main_mup3_pane_t2

0x76ac,	// (0x0002d55a) main_mup3_pane_t4_ParamLimits

0x76ac,	// (0x0002d55a) main_mup3_pane_t4

0x7706,	// (0x0002d5b4) main_mup3_pane_t5_ParamLimits

0x7706,	// (0x0002d5b4) main_mup3_pane_t5

0x77ba,	// (0x0002d668) main_mup3_pane_t6_ParamLimits

0x77ba,	// (0x0002d668) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x00035661) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x00035661) main_mup3_pane_t

0x786e,	// (0x0002d71c) mup3_progress_pane_ParamLimits

0x786e,	// (0x0002d71c) mup3_progress_pane

0x78ea,	// (0x0002d798) popup_mup3_control_window_ParamLimits

0x78ea,	// (0x0002d798) popup_mup3_control_window

0xc6fd,	// (0x000325ab) popup_mup3_text_window

0x791c,	// (0x0002d7ca) mup3_progress_pane_t1

0x7933,	// (0x0002d7e1) mup3_progress_pane_t2

0xc705,	// (0x000325b3) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0003566e) mup3_progress_pane_t

0xc71c,	// (0x000325ca) mup_progress_pane_cp03

0x1fb5,	// (0x00027e63) bg_tb_trans_pane_cp04

0x794a,	// (0x0002d7f8) mup3_volume_pane

0x7952,	// (0x0002d800) popup_mup3_control_window_g1

0x795b,	// (0x0002d809) mup3_volume_pane_g1

0x7964,	// (0x0002d812) mup3_volume_pane_g2

0x796d,	// (0x0002d81b) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x00035675) mup3_volume_pane_g

0x1fb5,	// (0x00027e63) bg_tb_trans_pane_cp03

0xc72c,	// (0x000325da) popup_mup3_text_window_g1

0xc734,	// (0x000325e2) popup_mup3_text_window_t1

0x2ccb,	// (0x00028b79) list_calc_item_pane_g1_ParamLimits

0xc0f8,	// (0x00031fa6) mup_volume_pane_cp_g1

0x72bf,	// (0x0002d16d) main_touch_calib_pane_t3

0x72d3,	// (0x0002d181) main_touch_calib_pane_t4

0x72e7,	// (0x0002d195) main_touch_calib_pane_t5

0x1fbf,	// (0x00027e6d) aid_cell_size_toolbar2

0x1fc7,	// (0x00027e75) aid_popup3_width_pane

0x2003,	// (0x00027eb1) aid_zoom_text_msg_primary

0xb2bc,	// (0x0003116a) vorec_t7

0x2c35,	// (0x00028ae3) bg_calc_paper_pane_g1_ParamLimits

0x2c41,	// (0x00028aef) bg_calc_paper_pane_g2_ParamLimits

0x2c4d,	// (0x00028afb) bg_calc_paper_pane_g3_ParamLimits

0x2c59,	// (0x00028b07) bg_calc_paper_pane_g4_ParamLimits

0x2c65,	// (0x00028b13) bg_calc_paper_pane_g5_ParamLimits

0x2c71,	// (0x00028b1f) bg_calc_paper_pane_g6_ParamLimits

0x2c80,	// (0x00028b2e) bg_calc_paper_pane_g7_ParamLimits

0x2c8f,	// (0x00028b3d) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00035028) bg_calc_paper_pane_g_ParamLimits

0x2ca2,	// (0x00028b50) calc_bg_paper_pane_g9_ParamLimits

0x333a,	// (0x000291e8) image_qvga_pane_ParamLimits

0x333a,	// (0x000291e8) image_qvga_pane

0x294c,	// (0x000287fa) bg_popup_sub_pane_cp04_ParamLimits

0x5ae5,	// (0x0002b993) popup_mup_playback_window_g1_ParamLimits

0x5af1,	// (0x0002b99f) popup_mup_playback_window_t1_ParamLimits

0x5b06,	// (0x0002b9b4) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x000353b4) popup_mup_playback_window_t_ParamLimits

0x6e1c,	// (0x0002ccca) main_mup2_pane_g3_ParamLimits

0x6e1c,	// (0x0002ccca) main_mup2_pane_g3

0x37e3,	// (0x00029691) popup_toolbar_window_cp04

0x62ff,	// (0x0002c1ad) popup_call2_audio_second_window_g3_ParamLimits

0x62ff,	// (0x0002c1ad) popup_call2_audio_second_window_g3

0xb4fb,	// (0x000313a9) popup_call2_audio_first_window_g4_ParamLimits

0xb4fb,	// (0x000313a9) popup_call2_audio_first_window_g4

0xbb7a,	// (0x00031a28) popup_call2_audio_in_window_g4_ParamLimits

0xbb7a,	// (0x00031a28) popup_call2_audio_in_window_g4

0x5b1b,	// (0x0002b9c9) aid_area_sk_bg_cut_ParamLimits

0x5b1b,	// (0x0002b9c9) aid_area_sk_bg_cut

0x5b39,	// (0x0002b9e7) aid_area_sk_bg_cut_2_ParamLimits

0x5b39,	// (0x0002b9e7) aid_area_sk_bg_cut_2

0x7122,	// (0x0002cfd0) aid_placing_details_win

0x712a,	// (0x0002cfd8) aid_placing_details_win_2

0xc564,	// (0x00032412) camera2_autofocus_pane_g1_ParamLimits

0x21c8,	// (0x00028076) popup_fixed_preview_cale_window_ParamLimits

0x21c8,	// (0x00028076) popup_fixed_preview_cale_window

0x51d8,	// (0x0002b086) navi_slider_pane_g3

0x51e1,	// (0x0002b08f) navi_slider_pane_g4

0x51ea,	// (0x0002b098) navi_slider_pane_g5

0x51d8,	// (0x0002b086) navi_slider_pane_g6

0xb378,	// (0x00031226) navi_slider_pane_g7

0x5705,	// (0x0002b5b3) mup_scale_pane_g3

0x570e,	// (0x0002b5bc) mup_scale_pane_g4

0x5717,	// (0x0002b5c5) mup_scale_pane_g5

0x5720,	// (0x0002b5ce) mup_scale_pane_g6

0x5729,	// (0x0002b5d7) mup_scale_pane_g7

0x51d8,	// (0x0002b086) cams2_slider_pane_g3

0xc1ad,	// (0x0003205b) cams2_slider_pane_g4

0xc1b5,	// (0x00032063) cams2_slider_pane_g5

0x51d8,	// (0x0002b086) cams2_slider_pane_g6

0xc1bd,	// (0x0003206b) cams2_slider_pane_g7

0xc3eb,	// (0x00032299) camera2_autofocus_pane_cp_g1

0xc742,	// (0x000325f0) bg_popup_preview_window_pane_cp02_ParamLimits

0xc742,	// (0x000325f0) bg_popup_preview_window_pane_cp02

0xc74e,	// (0x000325fc) list_fp_cale_pane_ParamLimits

0xc74e,	// (0x000325fc) list_fp_cale_pane

0xc75a,	// (0x00032608) popup_fixed_preview_cale_window_t1_ParamLimits

0xc75a,	// (0x00032608) popup_fixed_preview_cale_window_t1

0x7976,	// (0x0002d824) popup_fixed_preview_cale_window_t2_ParamLimits

0x7976,	// (0x0002d824) popup_fixed_preview_cale_window_t2

0x798b,	// (0x0002d839) popup_fixed_preview_cale_window_t3_ParamLimits

0x798b,	// (0x0002d839) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0003567c) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0003567c) popup_fixed_preview_cale_window_t

0x79a0,	// (0x0002d84e) list_single_fp_cale_pane_ParamLimits

0x79a0,	// (0x0002d84e) list_single_fp_cale_pane

0xc778,	// (0x00032626) list_single_fp_cale_pane_g1_ParamLimits

0xc778,	// (0x00032626) list_single_fp_cale_pane_g1

0xc784,	// (0x00032632) list_single_fp_cale_pane_g2_ParamLimits

0xc784,	// (0x00032632) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x00035683) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x00035683) list_single_fp_cale_pane_g

0xc79d,	// (0x0003264b) list_single_fp_cale_pane_t1_ParamLimits

0xc79d,	// (0x0003264b) list_single_fp_cale_pane_t1

0xc7af,	// (0x0003265d) list_single_fp_cale_pane_t2_ParamLimits

0xc7af,	// (0x0003265d) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0003568a) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0003568a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1fb5,	// (0x00027e63) main_dialer_pane

0x79b8,	// (0x0002d866) aid_cell_size_keypad

0x79c2,	// (0x0002d870) dialer_ne_pane

0x79ca,	// (0x0002d878) grid_dialer_command_1_pane

0x79d2,	// (0x0002d880) grid_dialer_command_2_pane

0x79da,	// (0x0002d888) grid_dialer_keypad_pane

0x79ec,	// (0x0002d89a) bg_popup_call_pane_cp06_ParamLimits

0x79ec,	// (0x0002d89a) bg_popup_call_pane_cp06

0x79f8,	// (0x0002d8a6) dialer_ne_clear_pane_ParamLimits

0x79f8,	// (0x0002d8a6) dialer_ne_clear_pane

0xc7e2,	// (0x00032690) dialer_ne_pane_g1

0xc7ea,	// (0x00032698) dialer_ne_pane_t1_ParamLimits

0xc7ea,	// (0x00032698) dialer_ne_pane_t1

0x7a04,	// (0x0002d8b2) dialer_ne_pane_t2_ParamLimits

0x7a04,	// (0x0002d8b2) dialer_ne_pane_t2

0x7a2e,	// (0x0002d8dc) dialer_ne_pane_t3_ParamLimits

0x7a2e,	// (0x0002d8dc) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0003568f) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0003568f) dialer_ne_pane_t

0x7a5e,	// (0x0002d90c) dialer_ne_pane_t3_copy1_ParamLimits

0x7a5e,	// (0x0002d90c) dialer_ne_pane_t3_copy1

0x7a8d,	// (0x0002d93b) cell_dialer_keypad_pane_ParamLimits

0x7a8d,	// (0x0002d93b) cell_dialer_keypad_pane

0x7aa4,	// (0x0002d952) cell_dialer_command_1_pane_ParamLimits

0x7aa4,	// (0x0002d952) cell_dialer_command_1_pane

0x7aba,	// (0x0002d968) cell_dialer_command_2_pane_ParamLimits

0x7aba,	// (0x0002d968) cell_dialer_command_2_pane

0xc7fc,	// (0x000326aa) bg_button_pane_cp02_ParamLimits

0xc7fc,	// (0x000326aa) bg_button_pane_cp02

0x7ac9,	// (0x0002d977) cell_dialer_keypad_pane_g1_ParamLimits

0x7ac9,	// (0x0002d977) cell_dialer_keypad_pane_g1

0xc7fc,	// (0x000326aa) bg_button_pane_cp03_ParamLimits

0xc7fc,	// (0x000326aa) bg_button_pane_cp03

0x7ade,	// (0x0002d98c) cell_dialer_command_1_pane_g1_ParamLimits

0x7ade,	// (0x0002d98c) cell_dialer_command_1_pane_g1

0xc808,	// (0x000326b6) bg_button_pane_cp04

0x7af2,	// (0x0002d9a0) cell_dialer_command_2_pane_g1

0x51c7,	// (0x0002b075) bg_button_pane_cp06

0xc810,	// (0x000326be) dialer_ne_clear_pane_g1

0x506b,	// (0x0002af19) navi_pane_g2

0x5099,	// (0x0002af47) navi_pane_g3

0x0002,

0xf409,	// (0x000352b7) navi_pane_g

0x5126,	// (0x0002afd4) navi_pane_mv_g2

0x514d,	// (0x0002affb) navi_pane_mv_g5

0x5155,	// (0x0002b003) navi_pane_mv_t1

0x2c29,	// (0x00028ad7) main_clock2_pane

0x7b25,	// (0x0002d9d3) main_clock2_list_pane_ParamLimits

0x7b25,	// (0x0002d9d3) main_clock2_list_pane

0x7b5b,	// (0x0002da09) main_clock2_pane_t1_ParamLimits

0x7b5b,	// (0x0002da09) main_clock2_pane_t1

0x7b99,	// (0x0002da47) main_clock2_pane_t2_ParamLimits

0x7b99,	// (0x0002da47) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x00035696) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x00035696) main_clock2_pane_t

0x7c23,	// (0x0002dad1) popup_clock_analogue_window_cp03_ParamLimits

0x7c23,	// (0x0002dad1) popup_clock_analogue_window_cp03

0x7c4a,	// (0x0002daf8) popup_clock_digital_window_cp02_ParamLimits

0x7c4a,	// (0x0002daf8) popup_clock_digital_window_cp02

0x7cbf,	// (0x0002db6d) main_clock2_list_single_pane_ParamLimits

0x7cbf,	// (0x0002db6d) main_clock2_list_single_pane

0x51c7,	// (0x0002b075) list_highlight_pane_cp05

0xc818,	// (0x000326c6) main_clock2_list_single_pane_t1

0x37e3,	// (0x00029691) popup_toolbar_window_cp04_ParamLimits

0x714c,	// (0x0002cffa) camera2_autofocus_pane_g2_ParamLimits

0x714c,	// (0x0002cffa) camera2_autofocus_pane_g2

0x7158,	// (0x0002d006) camera2_autofocus_pane_g3_ParamLimits

0x7158,	// (0x0002d006) camera2_autofocus_pane_g3

0x7164,	// (0x0002d012) camera2_autofocus_pane_g4_ParamLimits

0x7164,	// (0x0002d012) camera2_autofocus_pane_g4

0x7170,	// (0x0002d01e) camera2_autofocus_pane_g5_ParamLimits

0x7170,	// (0x0002d01e) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x000355df) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x000355df) camera2_autofocus_pane_g

0x735d,	// (0x0002d20b) camera2_autofocus_pane_cp_g2

0x7365,	// (0x0002d213) camera2_autofocus_pane_cp_g3

0x736d,	// (0x0002d21b) camera2_autofocus_pane_cp_g4

0x7375,	// (0x0002d223) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x00035645) camera2_autofocus_pane_cp_g

0x79e4,	// (0x0002d892) popup_dialer_spcha_window

0x1fb5,	// (0x00027e63) bg_popup_sub_pane_cp07

0xc826,	// (0x000326d4) list_spcha_pane

0xc82e,	// (0x000326dc) list_single_spcha_pane_ParamLimits

0xc82e,	// (0x000326dc) list_single_spcha_pane

0x1fb5,	// (0x00027e63) list_highlight_pane_cp06

0xc83f,	// (0x000326ed) list_single_spcha_pane_t1

0xb924,	// (0x000317d2) popup_call2_audio_out_window_g4_ParamLimits

0xb924,	// (0x000317d2) popup_call2_audio_out_window_g4

0x1fb5,	// (0x00027e63) main_imed2_pane

0xbf0b,	// (0x00031db9) popup_imed_adjust2_window

0x6a02,	// (0x0002c8b0) popup_imed_trans_window_ParamLimits

0x6a02,	// (0x0002c8b0) popup_imed_trans_window

0xc227,	// (0x000320d5) popup_blid_sat_info2_window_t1

0xc235,	// (0x000320e3) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x00035574) popup_blid_sat_info2_window_t

0x7cf1,	// (0x0002db9f) aid_size_cell_colour_35

0x7d11,	// (0x0002dbbf) aid_size_cell_colour_112

0x7d31,	// (0x0002dbdf) aid_size_cell_effect

0xbee3,	// (0x00031d91) bg_tb_trans_pane_cp02

0x4808,	// (0x0002a6b6) heading_imed_pane

0x7d51,	// (0x0002dbff) listscroll_imed_pane

0xc84d,	// (0x000326fb) heading_imed_pane_g1

0xc855,	// (0x00032703) heading_imed_pane_t1

0xc863,	// (0x00032711) grid_imed_colour_35_pane_ParamLimits

0xc863,	// (0x00032711) grid_imed_colour_35_pane

0x7d5d,	// (0x0002dc0b) grid_imed_effect_pane

0xc87e,	// (0x0003272c) list_imed_aspect_pane

0x7d72,	// (0x0002dc20) scroll_pane_cp027_ParamLimits

0x7d72,	// (0x0002dc20) scroll_pane_cp027

0x7d83,	// (0x0002dc31) cell_imed_effect_pane_ParamLimits

0x7d83,	// (0x0002dc31) cell_imed_effect_pane

0xc886,	// (0x00032734) cell_imed_colour_pane_ParamLimits

0xc886,	// (0x00032734) cell_imed_colour_pane

0xc8c8,	// (0x00032776) cell_imed_colour_pane_g1_ParamLimits

0xc8c8,	// (0x00032776) cell_imed_colour_pane_g1

0xc8d9,	// (0x00032787) hgihlgiht_grid_pane_cp016_ParamLimits

0xc8d9,	// (0x00032787) hgihlgiht_grid_pane_cp016

0x7daa,	// (0x0002dc58) cell_imed_effect_pane_g1

0x7db2,	// (0x0002dc60) grid_highlight_pane_cp017

0x2e2b,	// (0x00028cd9) list_imed_single_pane_ParamLimits

0x2e2b,	// (0x00028cd9) list_imed_single_pane

0x1fb5,	// (0x00027e63) list_highlight_pane_cp07

0xc8ea,	// (0x00032798) list_imed_aspect_pane_comp1_t1

0xbee3,	// (0x00031d91) bg_tb_trans_pane_cp05

0xc90c,	// (0x000327ba) popup_imed_adjust2_window_g1

0xc933,	// (0x000327e1) popup_imed_adjust2_window_t1

0xc94b,	// (0x000327f9) slider_imed_adjust_pane

0xc95f,	// (0x0003280d) slider_imed_adjust_pane_g1

0xc96f,	// (0x0003281d) slider_imed_adjust_pane_g2

0xc97f,	// (0x0003282d) slider_imed_adjust_pane_g3

0xc990,	// (0x0003283e) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x000356b3) slider_imed_adjust_pane_g

0x7dbb,	// (0x0002dc69) aid_size_cell_clipart2

0x7dc7,	// (0x0002dc75) grid_imed_clipart_pane

0xc9a1,	// (0x0003284f) scroll_pane_cp031

0x7dd1,	// (0x0002dc7f) cell_imed_clipart_pane_ParamLimits

0x7dd1,	// (0x0002dc7f) cell_imed_clipart_pane

0x7df8,	// (0x0002dca6) cell_imed_clipart_pane_g1

0x1fb5,	// (0x00027e63) grid_highlight_pane_cp014

0x7b3a,	// (0x0002d9e8) main_clock2_pane_g1_ParamLimits

0x7b3a,	// (0x0002d9e8) main_clock2_pane_g1

0x7c6a,	// (0x0002db18) aid_call2_pane_cp10

0x7c7c,	// (0x0002db2a) aid_call_pane_cp10

0x4f7d,	// (0x0002ae2b) popup_clock_analogue_window_cp10_g1

0x4f7d,	// (0x0002ae2b) popup_clock_analogue_window_cp10_g2

0x7c8e,	// (0x0002db3c) popup_clock_analogue_window_cp10_g3

0x7c8e,	// (0x0002db3c) popup_clock_analogue_window_cp10_g4

0x4f7d,	// (0x0002ae2b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x000356a1) popup_clock_analogue_window_cp10_g

0x7ca0,	// (0x0002db4e) popup_clock_analogue_window_cp10_t1

0x148b,	// (0x00027339) clock_digital_number_pane_cp10_ParamLimits

0x148b,	// (0x00027339) clock_digital_number_pane_cp10

0x14a3,	// (0x00027351) clock_digital_number_pane_cp11_ParamLimits

0x14a3,	// (0x00027351) clock_digital_number_pane_cp11

0x14bb,	// (0x00027369) clock_digital_number_pane_cp12_ParamLimits

0x14bb,	// (0x00027369) clock_digital_number_pane_cp12

0x14d3,	// (0x00027381) clock_digital_number_pane_cp13_ParamLimits

0x14d3,	// (0x00027381) clock_digital_number_pane_cp13

0x14eb,	// (0x00027399) clock_digital_separator_pane_cp10_ParamLimits

0x14eb,	// (0x00027399) clock_digital_separator_pane_cp10

0x7cd1,	// (0x0002db7f) popup_clock_digital_window_cp02_t1_ParamLimits

0x7cd1,	// (0x0002db7f) popup_clock_digital_window_cp02_t1

0x2944,	// (0x000287f2) clock_digital_number_pane_cp10_g1

0x2944,	// (0x000287f2) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x000356bc) clock_digital_number_pane_cp10_g

0x2944,	// (0x000287f2) clock_digital_separator_pane_cp10_g1

0x2944,	// (0x000287f2) clock_digital_separator_pane_g2_cp10

0x5197,	// (0x0002b045) navi_pane_vded_g4

0x51a0,	// (0x0002b04e) navi_pane_vded_g5

0x51a9,	// (0x0002b057) navi_pane_vded_t1

0x1fb5,	// (0x00027e63) main_vded_pane

0x7e01,	// (0x0002dcaf) main_vded_pane_g1

0x7e0d,	// (0x0002dcbb) main_vded_pane_g2

0x7e17,	// (0x0002dcc5) main_vded_pane_g3

0x0002,

0xf813,	// (0x000356c1) main_vded_pane_g

0x7e21,	// (0x0002dccf) main_vded_pane_t1

0x7e2f,	// (0x0002dcdd) main_vded_pane_t2

0x0001,

0xf81a,	// (0x000356c8) main_vded_pane_t

0x7e3d,	// (0x0002dceb) vded_slider_pane

0x7e47,	// (0x0002dcf5) vded_video_pane

0xc9a9,	// (0x00032857) vded_video_pane_g1

0x7e51,	// (0x0002dcff) vded_video_pane_g2

0xc3eb,	// (0x00032299) vded_video_pane_g3

0x0002,

0xf81f,	// (0x000356cd) vded_video_pane_g

0xc9b3,	// (0x00032861) vded_slider_pane_g1

0xc0f8,	// (0x00031fa6) vded_slider_pane_g2

0xc9bc,	// (0x0003286a) vded_slider_pane_g3

0xc9c5,	// (0x00032873) vded_slider_pane_g4

0xc9ce,	// (0x0003287c) vded_slider_pane_g5

0x0004,

0xf826,	// (0x000356d4) vded_slider_pane_g

0x78d2,	// (0x0002d780) mup3_rocker_pane_ParamLimits

0x78d2,	// (0x0002d780) mup3_rocker_pane

0x7e5a,	// (0x0002dd08) mup3_control_keys_pane_g1

0x7e62,	// (0x0002dd10) mup3_control_keys_pane_g2

0x7e6a,	// (0x0002dd18) mup3_control_keys_pane_g3

0x7e72,	// (0x0002dd20) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x000356df) mup3_control_keys_pane_g

0x2209,	// (0x000280b7) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2209,	// (0x000280b7) popup_toolbar2_fixed_window_cp01

0x7906,	// (0x0002d7b4) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7906,	// (0x0002d7b4) popup_toolbar2_fixed_window_cp02

0x6471,	// (0x0002c31f) popup_call2_audio_second_window_t4_ParamLimits

0x6471,	// (0x0002c31f) popup_call2_audio_second_window_t4

0xb791,	// (0x0003163f) popup_call2_audio_first_window_t6_ParamLimits

0xb791,	// (0x0003163f) popup_call2_audio_first_window_t6

0xba27,	// (0x000318d5) popup_call2_audio_out_window_t6_ParamLimits

0xba27,	// (0x000318d5) popup_call2_audio_out_window_t6

0x1fb5,	// (0x00027e63) main_vitu_pane

0x7e82,	// (0x0002dd30) aid_size_cell_itu_ParamLimits

0x7e82,	// (0x0002dd30) aid_size_cell_itu

0x2227,	// (0x000280d5) bg_popup_window_pane_cp08_ParamLimits

0x2227,	// (0x000280d5) bg_popup_window_pane_cp08

0x7e98,	// (0x0002dd46) field_vitu_entry_pane_ParamLimits

0x7e98,	// (0x0002dd46) field_vitu_entry_pane

0x7eaf,	// (0x0002dd5d) grid_vitu_function_pane_ParamLimits

0x7eaf,	// (0x0002dd5d) grid_vitu_function_pane

0x7eca,	// (0x0002dd78) grid_vitu_itu_pane_ParamLimits

0x7eca,	// (0x0002dd78) grid_vitu_itu_pane

0x7ee8,	// (0x0002dd96) cell_vitu_itu_pane_ParamLimits

0x7ee8,	// (0x0002dd96) cell_vitu_itu_pane

0x7f0c,	// (0x0002ddba) cell_vitu_function_pane_ParamLimits

0x7f0c,	// (0x0002ddba) cell_vitu_function_pane

0x2227,	// (0x000280d5) bg_popup_sub_pane_cp08_ParamLimits

0x2227,	// (0x000280d5) bg_popup_sub_pane_cp08

0x7f27,	// (0x0002ddd5) field_vitu_entry_pane_t1_ParamLimits

0x7f27,	// (0x0002ddd5) field_vitu_entry_pane_t1

0xc9ef,	// (0x0003289d) field_vitu_entry_pane_t2_ParamLimits

0xc9ef,	// (0x0003289d) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x000356ed) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x000356ed) field_vitu_entry_pane_t

0xca0c,	// (0x000328ba) bg_button_pane_cp05_ParamLimits

0xca0c,	// (0x000328ba) bg_button_pane_cp05

0x7f47,	// (0x0002ddf5) cell_vitu_itu_pane_g1

0x7f5f,	// (0x0002de0d) cell_vitu_itu_pane_t1_ParamLimits

0x7f5f,	// (0x0002de0d) cell_vitu_itu_pane_t1

0x7f71,	// (0x0002de1f) cell_vitu_itu_pane_t2_ParamLimits

0x7f71,	// (0x0002de1f) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x000356f2) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x000356f2) cell_vitu_itu_pane_t

0xca1a,	// (0x000328c8) bg_button_pane_cp07

0x7fa6,	// (0x0002de54) cell_vitu_function_pane_g1

0xb1b6,	// (0x00031064) main_calc_pane_g1

0x1ff7,	// (0x00027ea5) aid_visual_content_pane

0x1fb5,	// (0x00027e63) main_vradio_pane

0x7faf,	// (0x0002de5d) main_vradio_pane_g1_ParamLimits

0x7faf,	// (0x0002de5d) main_vradio_pane_g1

0xca24,	// (0x000328d2) main_vradio_pane_g2_ParamLimits

0xca24,	// (0x000328d2) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x000356f9) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x000356f9) main_vradio_pane_g

0x7fc8,	// (0x0002de76) main_vradio_pane_t1_ParamLimits

0x7fc8,	// (0x0002de76) main_vradio_pane_t1

0x7fdd,	// (0x0002de8b) main_vradio_pane_t2_ParamLimits

0x7fdd,	// (0x0002de8b) main_vradio_pane_t2

0xca31,	// (0x000328df) main_vradio_pane_t3_ParamLimits

0xca31,	// (0x000328df) main_vradio_pane_t3

0x0002,

0xf850,	// (0x000356fe) main_vradio_pane_t_ParamLimits

0xf850,	// (0x000356fe) main_vradio_pane_t

0x7ff2,	// (0x0002dea0) vradio_rocker_control_pane_ParamLimits

0x7ff2,	// (0x0002dea0) vradio_rocker_control_pane

0x8004,	// (0x0002deb2) vradio_station_info_pane_ParamLimits

0x8004,	// (0x0002deb2) vradio_station_info_pane

0xca45,	// (0x000328f3) vradio_frequency_info_pane_ParamLimits

0xca45,	// (0x000328f3) vradio_frequency_info_pane

0xc3eb,	// (0x00032299) vradio_station_info_pane_g1

0xca54,	// (0x00032902) vradio_station_info_pane_t1_ParamLimits

0xca54,	// (0x00032902) vradio_station_info_pane_t1

0xca76,	// (0x00032924) vradio_station_info_pane_t2_ParamLimits

0xca76,	// (0x00032924) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x00035705) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x00035705) vradio_station_info_pane_t

0xca88,	// (0x00032936) vradio_tuning_pane

0xca90,	// (0x0003293e) vradio_rocker_control_pane_g1

0xca98,	// (0x00032946) vradio_rocker_control_pane_g2

0xcaa0,	// (0x0003294e) vradio_rocker_control_pane_g3

0xcaa8,	// (0x00032956) vradio_rocker_control_pane_g4

0xcab0,	// (0x0003295e) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0003570a) vradio_rocker_control_pane_g

0x8016,	// (0x0002dec4) vradio_frequency_info_pane_g1

0xcab8,	// (0x00032966) vradio_frequency_info_pane_t1_ParamLimits

0xcab8,	// (0x00032966) vradio_frequency_info_pane_t1

0x8020,	// (0x0002dece) vradio_tuning_pane_g1

0x802b,	// (0x0002ded9) vradio_tuning_pane_t1

0x204c,	// (0x00027efa) area_side_right_pane_ParamLimits

0x204c,	// (0x00027efa) area_side_right_pane

0xbeaa,	// (0x00031d58) status_small_pane_g1

0xbeb2,	// (0x00031d60) status_small_pane_g2

0xbebb,	// (0x00031d69) status_small_pane_g3

0xbec4,	// (0x00031d72) status_small_pane_g4

0x0003,

0xf61c,	// (0x000354ca) status_small_pane_g

0xbecd,	// (0x00031d7b) status_small_pane_t1

0x1fb5,	// (0x00027e63) main_video3_pane

0xcacc,	// (0x0003297a) cams_zoom_vslider_pane

0xcad4,	// (0x00032982) image3_wide_pane_ParamLimits

0xcad4,	// (0x00032982) image3_wide_pane

0xcaee,	// (0x0003299c) image3_wide_small_pane

0xcafa,	// (0x000329a8) main_video3_pane_g1_ParamLimits

0xcafa,	// (0x000329a8) main_video3_pane_g1

0xcb16,	// (0x000329c4) main_video3_pane_g2_ParamLimits

0xcb16,	// (0x000329c4) main_video3_pane_g2

0x0001,

0xf867,	// (0x00035715) main_video3_pane_g_ParamLimits

0xf867,	// (0x00035715) main_video3_pane_g

0xcb32,	// (0x000329e0) main_video3_pane_t1_ParamLimits

0xcb32,	// (0x000329e0) main_video3_pane_t1

0xcb5d,	// (0x00032a0b) main_video3_pane_t2_ParamLimits

0xcb5d,	// (0x00032a0b) main_video3_pane_t2

0xcb88,	// (0x00032a36) main_video3_pane_t3_ParamLimits

0xcb88,	// (0x00032a36) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0003571a) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0003571a) main_video3_pane_t

0xcbb5,	// (0x00032a63) cams_zoom_vslider_pane_g1

0xcbbe,	// (0x00032a6c) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x00035721) cams_zoom_vslider_pane_g

0xcbc6,	// (0x00032a74) small_slider_vertical_pane

0xc3eb,	// (0x00032299) small_slider_vertical_pane_g1

0xc3eb,	// (0x00032299) small_slider_vertical_pane_g2

0xcbce,	// (0x00032a7c) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x00035726) small_slider_vertical_pane_g

0x1fb5,	// (0x00027e63) main_hwr_training_pane

0xcbd7,	// (0x00032a85) hwr_training_instruct_pane_ParamLimits

0xcbd7,	// (0x00032a85) hwr_training_instruct_pane

0x803a,	// (0x0002dee8) hwr_training_navi_pane_ParamLimits

0x803a,	// (0x0002dee8) hwr_training_navi_pane

0x8059,	// (0x0002df07) hwr_training_write_pane_ParamLimits

0x8059,	// (0x0002df07) hwr_training_write_pane

0x1fb5,	// (0x00027e63) bg_frame_shadow_pane

0xcc0e,	// (0x00032abc) hwr_training_write_pane_g1

0xcc16,	// (0x00032ac4) hwr_training_write_pane_g2

0xcc1e,	// (0x00032acc) hwr_training_write_pane_g3

0xcc26,	// (0x00032ad4) hwr_training_write_pane_g4

0xcc2e,	// (0x00032adc) hwr_training_write_pane_g5

0xcc36,	// (0x00032ae4) hwr_training_write_pane_g6

0xcc3e,	// (0x00032aec) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0003572d) hwr_training_write_pane_g

0xcc46,	// (0x00032af4) hwr_training_navi_pane_g1_ParamLimits

0xcc46,	// (0x00032af4) hwr_training_navi_pane_g1

0xcc58,	// (0x00032b06) hwr_training_navi_pane_g2_ParamLimits

0xcc58,	// (0x00032b06) hwr_training_navi_pane_g2

0xcc6a,	// (0x00032b18) hwr_training_navi_pane_g3_ParamLimits

0xcc6a,	// (0x00032b18) hwr_training_navi_pane_g3

0xcc7a,	// (0x00032b28) hwr_training_navi_pane_g4_ParamLimits

0xcc7a,	// (0x00032b28) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0003573c) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0003573c) hwr_training_navi_pane_g

0xcc87,	// (0x00032b35) hwr_training_navi_pane_t1

0x8094,	// (0x0002df42) list_single_hwr_training_instruct_pane_ParamLimits

0x8094,	// (0x0002df42) list_single_hwr_training_instruct_pane

0xcc95,	// (0x00032b43) list_single_hwr_training_instruct_pane_t1

0xc32b,	// (0x000321d9) bg_frame_shadow_pane_g1

0xcca4,	// (0x00032b52) bg_frame_shadow_pane_g2

0xccac,	// (0x00032b5a) bg_frame_shadow_pane_g3

0xccb4,	// (0x00032b62) bg_frame_shadow_pane_g4

0xccbc,	// (0x00032b6a) bg_frame_shadow_pane_g5

0xccc4,	// (0x00032b72) bg_frame_shadow_pane_g6

0xcccc,	// (0x00032b7a) bg_frame_shadow_pane_g7

0x2dc9,	// (0x00028c77) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x00035747) bg_frame_shadow_pane_g

0x1fb5,	// (0x00027e63) main_video_tele_dialer_pane

0x1512,	// (0x000273c0) aid_size_cell_video_keypad_ParamLimits

0x1512,	// (0x000273c0) aid_size_cell_video_keypad

0x152c,	// (0x000273da) grid_video_dialer_keypad_pane_ParamLimits

0x152c,	// (0x000273da) grid_video_dialer_keypad_pane

0x1578,	// (0x00027426) video_down_pane_cp_ParamLimits

0x1578,	// (0x00027426) video_down_pane_cp

0x158c,	// (0x0002743a) cell_video_dialer_keypad_pane_ParamLimits

0x158c,	// (0x0002743a) cell_video_dialer_keypad_pane

0xccd4,	// (0x00032b82) bg_button_pane_cp08_ParamLimits

0xccd4,	// (0x00032b82) bg_button_pane_cp08

0x80cd,	// (0x0002df7b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x80cd,	// (0x0002df7b) cell_video_dialer_keypad_pane_g1

0x78bc,	// (0x0002d76a) mup3_rocker2_pane_ParamLimits

0x78bc,	// (0x0002d76a) mup3_rocker2_pane

0xc3eb,	// (0x00032299) mup3_rocker2_pane_g1

0x68eb,	// (0x0002c799) main_dialer2_pane

0x1fb5,	// (0x00027e63) main_mp4_pane

0xcce8,	// (0x00032b96) main_mp4_pane_g1_ParamLimits

0xcce8,	// (0x00032b96) main_mp4_pane_g1

0xcce8,	// (0x00032b96) main_mp4_pane_g2_ParamLimits

0xcce8,	// (0x00032b96) main_mp4_pane_g2

0x15ae,	// (0x0002745c) main_mp4_pane_g3_ParamLimits

0x15ae,	// (0x0002745c) main_mp4_pane_g3

0xccf6,	// (0x00032ba4) main_mp4_pane_g4_ParamLimits

0xccf6,	// (0x00032ba4) main_mp4_pane_g4

0xcd1e,	// (0x00032bcc) main_mp4_pane_g5_ParamLimits

0xcd1e,	// (0x00032bcc) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x00035767) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x00035767) main_mp4_pane_g

0xcd6e,	// (0x00032c1c) main_mp4_pane_t1_ParamLimits

0xcd6e,	// (0x00032c1c) main_mp4_pane_t1

0xcdca,	// (0x00032c78) main_mp4_pane_t2_ParamLimits

0xcdca,	// (0x00032c78) main_mp4_pane_t2

0xce1c,	// (0x00032cca) main_mp4_pane_t3_ParamLimits

0xce1c,	// (0x00032cca) main_mp4_pane_t3

0xce3c,	// (0x00032cea) main_mp4_pane_t4_ParamLimits

0xce3c,	// (0x00032cea) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x00035774) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x00035774) main_mp4_pane_t

0xce80,	// (0x00032d2e) mp4_progress_pane_ParamLimits

0xce80,	// (0x00032d2e) mp4_progress_pane

0xceca,	// (0x00032d78) mp4_rocker_pane_ParamLimits

0xceca,	// (0x00032d78) mp4_rocker_pane

0xcef2,	// (0x00032da0) mp4_progress_pane_t1

0xcf0b,	// (0x00032db9) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0003577d) mp4_progress_pane_t

0xcf24,	// (0x00032dd2) mup_progress_pane_cp04

0xcf30,	// (0x00032dde) mp4_rocker_pane_g1

0x15ea,	// (0x00027498) aid_cell_size_keypad2_ParamLimits

0x15ea,	// (0x00027498) aid_cell_size_keypad2

0x1600,	// (0x000274ae) dialer2_ne_pane_ParamLimits

0x1600,	// (0x000274ae) dialer2_ne_pane

0x161a,	// (0x000274c8) grid_dialer2_keypad_pane_ParamLimits

0x161a,	// (0x000274c8) grid_dialer2_keypad_pane

0xc1ce,	// (0x0003207c) bg_popup_call_pane_cp07_ParamLimits

0xc1ce,	// (0x0003207c) bg_popup_call_pane_cp07

0x8108,	// (0x0002dfb6) dialer2_ne_pane_t1_ParamLimits

0x8108,	// (0x0002dfb6) dialer2_ne_pane_t1

0x1638,	// (0x000274e6) cell_dialer2_keypad_pane_ParamLimits

0x1638,	// (0x000274e6) cell_dialer2_keypad_pane

0xcf4c,	// (0x00032dfa) bg_button_pane_pane_cp04_ParamLimits

0xcf4c,	// (0x00032dfa) bg_button_pane_pane_cp04

0x8147,	// (0x0002dff5) cell_dialer2_keypad_pane_g1_ParamLimits

0x8147,	// (0x0002dff5) cell_dialer2_keypad_pane_g1

0x36a5,	// (0x00029553) aid_placing_vt_set_content_ParamLimits

0x36a5,	// (0x00029553) aid_placing_vt_set_content

0x36cd,	// (0x0002957b) aid_placing_vt_set_title_ParamLimits

0x36cd,	// (0x0002957b) aid_placing_vt_set_title

0x1fb5,	// (0x00027e63) main_image3_pane

0x16ba,	// (0x00027568) area_side_right_pane_cp01_ParamLimits

0x16ba,	// (0x00027568) area_side_right_pane_cp01

0xcce8,	// (0x00032b96) main_image3_pane_g1_ParamLimits

0xcce8,	// (0x00032b96) main_image3_pane_g1

0x16d1,	// (0x0002757f) main_image3_pane_g2_ParamLimits

0x16d1,	// (0x0002757f) main_image3_pane_g2

0x16f9,	// (0x000275a7) main_image3_pane_g3_ParamLimits

0x16f9,	// (0x000275a7) main_image3_pane_g3

0x1723,	// (0x000275d1) main_image3_pane_g4_ParamLimits

0x1723,	// (0x000275d1) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0003578c) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0003578c) main_image3_pane_g

0x174d,	// (0x000275fb) main_image3_pane_t1_ParamLimits

0x174d,	// (0x000275fb) main_image3_pane_t1

0x17a5,	// (0x00027653) main_image3_pane_t2_ParamLimits

0x17a5,	// (0x00027653) main_image3_pane_t2

0x17f7,	// (0x000276a5) main_image3_pane_t3_ParamLimits

0x17f7,	// (0x000276a5) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x00035795) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x00035795) main_image3_pane_t

0x2227,	// (0x000280d5) grid_sctrl_middle_pane_cp01_ParamLimits

0x2227,	// (0x000280d5) grid_sctrl_middle_pane_cp01

0x81af,	// (0x0002e05d) cell_sctrl_middle_pane_cp01_ParamLimits

0x81af,	// (0x0002e05d) cell_sctrl_middle_pane_cp01

0x81cc,	// (0x0002e07a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x81cc,	// (0x0002e07a) cell_sctrl_middle_pane_cp01_g1

0x1fb5,	// (0x00027e63) main_call4_pane

0x81e2,	// (0x0002e090) aid_size_button_call4_ParamLimits

0x81e2,	// (0x0002e090) aid_size_button_call4

0x8213,	// (0x0002e0c1) call4_windows_pane_ParamLimits

0x8213,	// (0x0002e0c1) call4_windows_pane

0x8233,	// (0x0002e0e1) grid_call4_button_pane_ParamLimits

0x8233,	// (0x0002e0e1) grid_call4_button_pane

0xcf8a,	// (0x00032e38) call4_windows_conf_pane

0xcf9f,	// (0x00032e4d) popup_call4_audio_first_window_ParamLimits

0xcf9f,	// (0x00032e4d) popup_call4_audio_first_window

0xcfeb,	// (0x00032e99) popup_call4_audio_second_window_ParamLimits

0xcfeb,	// (0x00032e99) popup_call4_audio_second_window

0xcfff,	// (0x00032ead) popup_call4_audio_wait_window_ParamLimits

0xcfff,	// (0x00032ead) popup_call4_audio_wait_window

0x8260,	// (0x0002e10e) cell_call4_button_pane_ParamLimits

0x8260,	// (0x0002e10e) cell_call4_button_pane

0x8289,	// (0x0002e137) bg_button_pane_cp09_ParamLimits

0x8289,	// (0x0002e137) bg_button_pane_cp09

0x8295,	// (0x0002e143) cell_call4_button_pane_g1_ParamLimits

0x8295,	// (0x0002e143) cell_call4_button_pane_g1

0x82bb,	// (0x0002e169) cell_call4_button_pane_t1_ParamLimits

0x82bb,	// (0x0002e169) cell_call4_button_pane_t1

0xd047,	// (0x00032ef5) popup_call4_audio_conf_window_ParamLimits

0xd047,	// (0x00032ef5) popup_call4_audio_conf_window

0x791c,	// (0x0002d7ca) mup3_progress_pane_t1_ParamLimits

0x7933,	// (0x0002d7e1) mup3_progress_pane_t2_ParamLimits

0xc705,	// (0x000325b3) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0003566e) mup3_progress_pane_t_ParamLimits

0xc71c,	// (0x000325ca) mup_progress_pane_cp03_ParamLimits

0x7e7a,	// (0x0002dd28) mup3_control_keys_pane_g4_copy1

0xceae,	// (0x00032d5c) mp4_rocker2_pane_ParamLimits

0xceae,	// (0x00032d5c) mp4_rocker2_pane

0xd05b,	// (0x00032f09) mp4_rocker2_pane_g1

0xd063,	// (0x00032f11) mp4_rocker2_pane_g2

0xd06b,	// (0x00032f19) mp4_rocker2_pane_g3

0xd073,	// (0x00032f21) mp4_rocker2_pane_g4

0xd07b,	// (0x00032f29) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0003579e) mp4_rocker2_pane_g

0x1fb5,	// (0x00027e63) main_camera4_pane

0x1fb5,	// (0x00027e63) main_video4_pane

0x1546,	// (0x000273f4) main_video_tele_dialer_pane_t1_ParamLimits

0x1546,	// (0x000273f4) main_video_tele_dialer_pane_t1

0x155f,	// (0x0002740d) main_video_tele_dialer_pane_t2_ParamLimits

0x155f,	// (0x0002740d) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x00035758) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x00035758) main_video_tele_dialer_pane_t

0x1897,	// (0x00027745) cam4_autofocus_pane_ParamLimits

0x1897,	// (0x00027745) cam4_autofocus_pane

0x18ad,	// (0x0002775b) cam4_image_uncrop_pane_ParamLimits

0x18ad,	// (0x0002775b) cam4_image_uncrop_pane

0x18c7,	// (0x00027775) cam4_indicators_pane_ParamLimits

0x18c7,	// (0x00027775) cam4_indicators_pane

0x18f2,	// (0x000277a0) main_camera4_pane_g1_ParamLimits

0x18f2,	// (0x000277a0) main_camera4_pane_g1

0x1905,	// (0x000277b3) main_camera4_pane_g2_ParamLimits

0x1905,	// (0x000277b3) main_camera4_pane_g2

0x1918,	// (0x000277c6) main_camera4_pane_g3_ParamLimits

0x1918,	// (0x000277c6) main_camera4_pane_g3

0x192b,	// (0x000277d9) main_camera4_pane_g4_ParamLimits

0x192b,	// (0x000277d9) main_camera4_pane_g4

0x193e,	// (0x000277ec) main_camera4_pane_g5_ParamLimits

0x193e,	// (0x000277ec) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x000357a9) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x000357a9) main_camera4_pane_g

0x1962,	// (0x00027810) main_camera4_pane_t1_ParamLimits

0x1962,	// (0x00027810) main_camera4_pane_t1

0xd0b1,	// (0x00032f5f) bg_tb_trans_pane_cp06

0xd0c7,	// (0x00032f75) cam4_indicators_pane_g1

0xd0d8,	// (0x00032f86) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x000357c4) cam4_indicators_pane_g

0xd0f6,	// (0x00032fa4) cam4_indicators_pane_t1

0x19b2,	// (0x00027860) main_video4_pane_g1_ParamLimits

0x19b2,	// (0x00027860) main_video4_pane_g1

0x19c5,	// (0x00027873) main_video4_pane_g2_ParamLimits

0x19c5,	// (0x00027873) main_video4_pane_g2

0x19d9,	// (0x00027887) main_video4_pane_g3_ParamLimits

0x19d9,	// (0x00027887) main_video4_pane_g3

0x19ed,	// (0x0002789b) main_video4_pane_g4_ParamLimits

0x19ed,	// (0x0002789b) main_video4_pane_g4

0x0004,

0xf91d,	// (0x000357cb) main_video4_pane_g_ParamLimits

0xf91d,	// (0x000357cb) main_video4_pane_g

0x1a15,	// (0x000278c3) vid4_indicators_pane_ParamLimits

0x1a15,	// (0x000278c3) vid4_indicators_pane

0x1a47,	// (0x000278f5) video4_image_uncrop_cif_pane_ParamLimits

0x1a47,	// (0x000278f5) video4_image_uncrop_cif_pane

0x1a61,	// (0x0002790f) video4_image_uncrop_nhd_pane_ParamLimits

0x1a61,	// (0x0002790f) video4_image_uncrop_nhd_pane

0x18ad,	// (0x0002775b) video4_image_uncrop_vga_pane_ParamLimits

0x18ad,	// (0x0002775b) video4_image_uncrop_vga_pane

0xd118,	// (0x00032fc6) bg_tb_trans_pane_cp07

0x1a75,	// (0x00027923) vid4_indicators_pane_g1

0x1a82,	// (0x00027930) vid4_indicators_pane_g2

0x1a8f,	// (0x0002793d) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x000357d6) vid4_indicators_pane_g

0x1ab4,	// (0x00027962) vid4_indicators_pane_t1

0x82f9,	// (0x0002e1a7) cam4_autofocus_pane_g1

0x8301,	// (0x0002e1af) cam4_autofocus_pane_g2

0x8309,	// (0x0002e1b7) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x000357e1) cam4_autofocus_pane_g

0x8311,	// (0x0002e1bf) cam4_autofocus_pane_g3_copy1

0x80b1,	// (0x0002df5f) video_down_pane_cp_t1

0x80bf,	// (0x0002df6d) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0003575d) video_down_pane_cp_t

0x2227,	// (0x000280d5) popup_vitu2_window_ParamLimits

0x2227,	// (0x000280d5) popup_vitu2_window

0x1ac6,	// (0x00027974) aid_size_cell2_itu2_ParamLimits

0x1ac6,	// (0x00027974) aid_size_cell2_itu2

0x1aec,	// (0x0002799a) aid_size_cell_itu2_ParamLimits

0x1aec,	// (0x0002799a) aid_size_cell_itu2

0x1b48,	// (0x000279f6) bg_popup_window_pane_cp09_ParamLimits

0x1b48,	// (0x000279f6) bg_popup_window_pane_cp09

0x1b56,	// (0x00027a04) field_vitu2_entry_pane_ParamLimits

0x1b56,	// (0x00027a04) field_vitu2_entry_pane

0x1b7c,	// (0x00027a2a) grid_vitu2_function_pane_ParamLimits

0x1b7c,	// (0x00027a2a) grid_vitu2_function_pane

0x1bcd,	// (0x00027a7b) grid_vitu2_itu_pane_ParamLimits

0x1bcd,	// (0x00027a7b) grid_vitu2_itu_pane

0x1c5e,	// (0x00027b0c) cell_vitu2_itu_pane_ParamLimits

0x1c5e,	// (0x00027b0c) cell_vitu2_itu_pane

0x1c82,	// (0x00027b30) cell_vitu2_function_pane_ParamLimits

0x1c82,	// (0x00027b30) cell_vitu2_function_pane

0xd12e,	// (0x00032fdc) bg_popup_call_pane_cp08_ParamLimits

0xd12e,	// (0x00032fdc) bg_popup_call_pane_cp08

0xd147,	// (0x00032ff5) field_vitu2_entry_pane_g1

0xd153,	// (0x00033001) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x000357e8) field_vitu2_entry_pane_g

0xd16d,	// (0x0003301b) field_vitu2_entry_pane_t1_ParamLimits

0xd16d,	// (0x0003301b) field_vitu2_entry_pane_t1

0xd19e,	// (0x0003304c) field_vitu2_entry_pane_t2_ParamLimits

0xd19e,	// (0x0003304c) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x000357ef) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x000357ef) field_vitu2_entry_pane_t

0x1cc1,	// (0x00027b6f) bg_button_pane_cp010_ParamLimits

0x1cc1,	// (0x00027b6f) bg_button_pane_cp010

0x1ccf,	// (0x00027b7d) cell_vitu2_itu_pane_g1

0x1ced,	// (0x00027b9b) cell_vitu2_itu_pane_t1_ParamLimits

0x1ced,	// (0x00027b9b) cell_vitu2_itu_pane_t1

0x1d53,	// (0x00027c01) cell_vitu2_itu_pane_t2_ParamLimits

0x1d53,	// (0x00027c01) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x000357f9) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x000357f9) cell_vitu2_itu_pane_t

0xd1c3,	// (0x00033071) bg_button_pane_cp011

0x1e2f,	// (0x00027cdd) cell_vitu2_function_pane_g1

0x1fb5,	// (0x00027e63) main_myfav_hc_pane

0x1847,	// (0x000276f5) popup_image3_note_pane_ParamLimits

0x1847,	// (0x000276f5) popup_image3_note_pane

0x1863,	// (0x00027711) popup_image3_tool_bar_pane_ParamLimits

0x1863,	// (0x00027711) popup_image3_tool_bar_pane

0x1dd7,	// (0x00027c85) cell_vitu2_itu_pane_t3_ParamLimits

0x1dd7,	// (0x00027c85) cell_vitu2_itu_pane_t3

0x1fb5,	// (0x00027e63) bg_popup_trans_pane

0xd1d1,	// (0x0003307f) grid_image3_tool_bar_pane

0xd1db,	// (0x00033089) bg_popup_trans_pane_g1

0x3c9b,	// (0x00029b49) bg_popup_trans_pane_g2

0xd1e3,	// (0x00033091) bg_popup_trans_pane_g3

0xd1eb,	// (0x00033099) bg_popup_trans_pane_g4

0xd1f3,	// (0x000330a1) bg_popup_trans_pane_g5

0xd1fb,	// (0x000330a9) bg_popup_trans_pane_g6

0xd203,	// (0x000330b1) bg_popup_trans_pane_g7

0xd20b,	// (0x000330b9) bg_popup_trans_pane_g8

0x3c7b,	// (0x00029b29) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x00035800) bg_popup_trans_pane_g

0xd213,	// (0x000330c1) cell_image3_tool_bar_pane_ParamLimits

0xd213,	// (0x000330c1) cell_image3_tool_bar_pane

0xc3eb,	// (0x00032299) cell_image3_tool_bar_pane_g1

0x1fb5,	// (0x00027e63) bg_popup_trans_pane_cp1

0xd227,	// (0x000330d5) popup_image3_note_pane_t1

0xd235,	// (0x000330e3) popup_image3_note_pane_t2

0xd243,	// (0x000330f1) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x00035813) popup_image3_note_pane_t

0xd251,	// (0x000330ff) popup_image3_note_pane_t3_copy1

0x8319,	// (0x0002e1c7) bg_myfav_hc_instruction_pane_ParamLimits

0x8319,	// (0x0002e1c7) bg_myfav_hc_instruction_pane

0x832f,	// (0x0002e1dd) cell_myfav_contact_pane_ParamLimits

0x832f,	// (0x0002e1dd) cell_myfav_contact_pane

0x834b,	// (0x0002e1f9) cell_myfav_contact_pane_cp1_ParamLimits

0x834b,	// (0x0002e1f9) cell_myfav_contact_pane_cp1

0x8363,	// (0x0002e211) cell_myfav_contact_pane_cp2_ParamLimits

0x8363,	// (0x0002e211) cell_myfav_contact_pane_cp2

0x837b,	// (0x0002e229) cell_myfav_contact_pane_cp3_ParamLimits

0x837b,	// (0x0002e229) cell_myfav_contact_pane_cp3

0x8392,	// (0x0002e240) cell_myfav_contact_pane_cp4_ParamLimits

0x8392,	// (0x0002e240) cell_myfav_contact_pane_cp4

0x83aa,	// (0x0002e258) cell_myfav_contact_pane_cp5_ParamLimits

0x83aa,	// (0x0002e258) cell_myfav_contact_pane_cp5

0x83be,	// (0x0002e26c) cell_myfav_contact_pane_cp6_ParamLimits

0x83be,	// (0x0002e26c) cell_myfav_contact_pane_cp6

0x83d4,	// (0x0002e282) cell_myfav_contact_pane_cp7_ParamLimits

0x83d4,	// (0x0002e282) cell_myfav_contact_pane_cp7

0xd25f,	// (0x0003310d) listscroll_gen_pane_cp05

0x83ee,	// (0x0002e29c) main_myfav_hc_pane_g1_ParamLimits

0x83ee,	// (0x0002e29c) main_myfav_hc_pane_g1

0x8408,	// (0x0002e2b6) main_myfav_hc_pane_g2_ParamLimits

0x8408,	// (0x0002e2b6) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0003581a) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0003581a) main_myfav_hc_pane_g

0x843a,	// (0x0002e2e8) main_myfav_hc_pane_t1_ParamLimits

0x843a,	// (0x0002e2e8) main_myfav_hc_pane_t1

0xd268,	// (0x00033116) main_myfav_hc_pane_t2_ParamLimits

0xd268,	// (0x00033116) main_myfav_hc_pane_t2

0xd27a,	// (0x00033128) main_myfav_hc_pane_t3_ParamLimits

0xd27a,	// (0x00033128) main_myfav_hc_pane_t3

0x8451,	// (0x0002e2ff) main_myfav_hc_pane_t4_ParamLimits

0x8451,	// (0x0002e2ff) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x00035821) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x00035821) main_myfav_hc_pane_t

0xc3eb,	// (0x00032299) bg_myfav_hc_instruction_pane_g1

0xd28c,	// (0x0003313a) cell_myfav_contact_pane_g1_ParamLimits

0xd28c,	// (0x0003313a) cell_myfav_contact_pane_g1

0xd28c,	// (0x0003313a) cell_myfav_contact_pane_g2_ParamLimits

0xd28c,	// (0x0003313a) cell_myfav_contact_pane_g2

0xd298,	// (0x00033146) cell_myfav_contact_pane_g3_ParamLimits

0xd298,	// (0x00033146) cell_myfav_contact_pane_g3

0xc6ef,	// (0x0003259d) cell_myfav_contact_pane_g4_ParamLimits

0xc6ef,	// (0x0003259d) cell_myfav_contact_pane_g4

0xd2a5,	// (0x00033153) cell_myfav_contact_pane_g5_ParamLimits

0xd2a5,	// (0x00033153) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0003582c) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0003582c) cell_myfav_contact_pane_g

0x8422,	// (0x0002e2d0) main_myfav_hc_pane_g3_ParamLimits

0x8422,	// (0x0002e2d0) main_myfav_hc_pane_g3

0x2161,	// (0x0002800f) popup_adpt_find_window

0x8479,	// (0x0002e327) afind_page_pane_ParamLimits

0x8479,	// (0x0002e327) afind_page_pane

0x848e,	// (0x0002e33c) aid_size_cell_afind_ParamLimits

0x848e,	// (0x0002e33c) aid_size_cell_afind

0x84ac,	// (0x0002e35a) bg_popup_sub_pane_cp09_ParamLimits

0x84ac,	// (0x0002e35a) bg_popup_sub_pane_cp09

0x84b9,	// (0x0002e367) find_pane_cp01_ParamLimits

0x84b9,	// (0x0002e367) find_pane_cp01

0xd2b1,	// (0x0003315f) grid_afind_control_pane_ParamLimits

0xd2b1,	// (0x0003315f) grid_afind_control_pane

0x84c6,	// (0x0002e374) grid_afind_pane_ParamLimits

0x84c6,	// (0x0002e374) grid_afind_pane

0x84e8,	// (0x0002e396) cell_afind_pane_ParamLimits

0x84e8,	// (0x0002e396) cell_afind_pane

0xc3eb,	// (0x00032299) afind_page_pane_g1

0x8549,	// (0x0002e3f7) afind_page_pane_g2

0x8552,	// (0x0002e400) afind_page_pane_g3

0x0002,

0xf989,	// (0x00035837) afind_page_pane_g

0x855b,	// (0x0002e409) afind_page_pane_t1

0xd2c5,	// (0x00033173) cell_afind_grid_control_pane_ParamLimits

0xd2c5,	// (0x00033173) cell_afind_grid_control_pane

0xcf4c,	// (0x00032dfa) bg_button_pane_cp69_ParamLimits

0xcf4c,	// (0x00032dfa) bg_button_pane_cp69

0x857b,	// (0x0002e429) cell_afind_pane_g1_ParamLimits

0x857b,	// (0x0002e429) cell_afind_pane_g1

0x8588,	// (0x0002e436) cell_afind_pane_t1_ParamLimits

0x8588,	// (0x0002e436) cell_afind_pane_t1

0x3529,	// (0x000293d7) bg_button_pane_cp72

0xd2d4,	// (0x00033182) cell_afind_grid_control_pane_g1

0x5f1d,	// (0x0002bdcb) aid_image_placing_area_ParamLimits

0x5f1d,	// (0x0002bdcb) aid_image_placing_area

0xc9d7,	// (0x00032885) field_vitu_entry_pane_g1_ParamLimits

0xc9d7,	// (0x00032885) field_vitu_entry_pane_g1

0xc9e3,	// (0x00032891) field_vitu_entry_pane_g2_ParamLimits

0xc9e3,	// (0x00032891) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x000356e8) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x000356e8) field_vitu_entry_pane_g

0x7f47,	// (0x0002ddf5) cell_vitu_itu_pane_g1_ParamLimits

0x7f89,	// (0x0002de37) cell_vitu_itu_pane_t3_ParamLimits

0x7f89,	// (0x0002de37) cell_vitu_itu_pane_t3

0xcef2,	// (0x00032da0) mp4_progress_pane_t1_ParamLimits

0xcf0b,	// (0x00032db9) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0003577d) mp4_progress_pane_t_ParamLimits

0xcf24,	// (0x00032dd2) mup_progress_pane_cp04_ParamLimits

0x8465,	// (0x0002e313) main_myfav_hc_pane_t5_ParamLimits

0x8465,	// (0x0002e313) main_myfav_hc_pane_t5

0x200b,	// (0x00027eb9) aid_zoom_text_primary

0x2161,	// (0x0002800f) popup_adpt_find_window_ParamLimits

0x2227,	// (0x000280d5) main_cam_set_pane

0x18de,	// (0x0002778c) cam4_zoom_pane_ParamLimits

0x18de,	// (0x0002778c) cam4_zoom_pane

0x859a,	// (0x0002e448) main_cam_set_pane_g1_ParamLimits

0x859a,	// (0x0002e448) main_cam_set_pane_g1

0x85a8,	// (0x0002e456) main_cam_set_pane_g2_ParamLimits

0x85a8,	// (0x0002e456) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0003583e) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0003583e) main_cam_set_pane_g

0x85c9,	// (0x0002e477) main_cam_set_pane_t1_ParamLimits

0x85c9,	// (0x0002e477) main_cam_set_pane_t1

0x85e4,	// (0x0002e492) main_cset_listscroll_pane_ParamLimits

0x85e4,	// (0x0002e492) main_cset_listscroll_pane

0x8604,	// (0x0002e4b2) main_cset_slider_pane_ParamLimits

0x8604,	// (0x0002e4b2) main_cset_slider_pane

0xd2e5,	// (0x00033193) main_cset_list_pane_ParamLimits

0xd2e5,	// (0x00033193) main_cset_list_pane

0xd2f5,	// (0x000331a3) scroll_pane_cp028

0x862a,	// (0x0002e4d8) aid_area_touch_slider

0x8646,	// (0x0002e4f4) cset_slider_pane

0x8670,	// (0x0002e51e) main_cset_slider_pane_g1

0x8685,	// (0x0002e533) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x00035843) main_cset_slider_pane_g

0xd32e,	// (0x000331dc) main_cset_slider_pane_t1

0x8741,	// (0x0002e5ef) main_cset_slider_pane_t2

0x875b,	// (0x0002e609) main_cset_slider_pane_t3

0x8775,	// (0x0002e623) main_cset_slider_pane_t4

0x878f,	// (0x0002e63d) main_cset_slider_pane_t5

0x87ab,	// (0x0002e659) main_cset_slider_pane_t6

0x87c0,	// (0x0002e66e) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x00035868) main_cset_slider_pane_t

0x88c4,	// (0x0002e772) cset_list_set_pane_ParamLimits

0x88c4,	// (0x0002e772) cset_list_set_pane

0x88d8,	// (0x0002e786) aid_position_infowindow_above

0x88e0,	// (0x0002e78e) aid_position_infowindow_below

0x88e8,	// (0x0002e796) cset_list_set_pane_g1_ParamLimits

0x88e8,	// (0x0002e796) cset_list_set_pane_g1

0x88f4,	// (0x0002e7a2) cset_list_set_pane_g3_ParamLimits

0x88f4,	// (0x0002e7a2) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x00035887) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x00035887) cset_list_set_pane_g

0x8903,	// (0x0002e7b1) cset_list_set_pane_t1_ParamLimits

0x8903,	// (0x0002e7b1) cset_list_set_pane_t1

0x2227,	// (0x000280d5) list_highlight_pane_cp021_ParamLimits

0x2227,	// (0x000280d5) list_highlight_pane_cp021

0x5705,	// (0x0002b5b3) cset_slider_pane_g1

0x5717,	// (0x0002b5c5) cset_slider_pane_g2

0x570e,	// (0x0002b5bc) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0003588c) cset_slider_pane_g

0xd3ce,	// (0x0003327c) aid_area_touch_cam4_zoom

0xd3d6,	// (0x00033284) cam4_zoom_cont_pane

0xd3de,	// (0x0003328c) cam4_zoom_pane_g1

0xd3e6,	// (0x00033294) cam4_zoom_pane_g2

0x1e43,	// (0x00027cf1) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x00035893) cam4_zoom_pane_g

0xd3ee,	// (0x0003329c) cam4_zoom_cont_pane_g1

0xd3f7,	// (0x000332a5) cam4_zoom_cont_pane_g2

0xd400,	// (0x000332ae) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0003589a) cam4_zoom_cont_pane_g

0x8200,	// (0x0002e0ae) call4_image_pane_ParamLimits

0x8200,	// (0x0002e0ae) call4_image_pane

0xcf8a,	// (0x00032e38) call4_windows_conf_pane_ParamLimits

0xcfc9,	// (0x00032e77) popup_call4_audio_in_window_ParamLimits

0xcfc9,	// (0x00032e77) popup_call4_audio_in_window

0x1fb5,	// (0x00027e63) bg_popup_call2_act_pane_cp02

0xd03f,	// (0x00032eed) call4_list_conf_pane

0xc3eb,	// (0x00032299) call4_image_pane_g1

0xc3eb,	// (0x00032299) call4_image_pane_g2

0x0001,

0xf700,	// (0x000355ae) call4_image_pane_g

0xd409,	// (0x000332b7) list_single_graphic_popup_conf4_pane_ParamLimits

0xd409,	// (0x000332b7) list_single_graphic_popup_conf4_pane

0x1fb5,	// (0x00027e63) list_highlight_pane_cp022

0xd41c,	// (0x000332ca) list_single_graphic_popup_conf4_pane_g1

0x4c93,	// (0x0002ab41) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x000358a1) list_single_graphic_popup_conf4_pane_g

0xd424,	// (0x000332d2) list_single_graphic_popup_conf4_pane_t1

0x3803,	// (0x000296b1) popup_vtel_slider_window_ParamLimits

0x3803,	// (0x000296b1) popup_vtel_slider_window

0xcf3a,	// (0x00032de8) dialer2_ne_pane_t2_ParamLimits

0xcf3a,	// (0x00032de8) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x00035782) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x00035782) dialer2_ne_pane_t

0xc1ce,	// (0x0003207c) bg_popup_sub_pane_cp010_ParamLimits

0xc1ce,	// (0x0003207c) bg_popup_sub_pane_cp010

0x8918,	// (0x0002e7c6) popup_vtel_slider_window_g1_ParamLimits

0x8918,	// (0x0002e7c6) popup_vtel_slider_window_g1

0x892b,	// (0x0002e7d9) popup_vtel_slider_window_g2_ParamLimits

0x892b,	// (0x0002e7d9) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x000358a6) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x000358a6) popup_vtel_slider_window_g

0x8981,	// (0x0002e82f) vtel_slider_pane_ParamLimits

0x8981,	// (0x0002e82f) vtel_slider_pane

0x89a3,	// (0x0002e851) vtel_slider_pane_g1_ParamLimits

0x89a3,	// (0x0002e851) vtel_slider_pane_g1

0x89b7,	// (0x0002e865) vtel_slider_pane_g2_ParamLimits

0x89b7,	// (0x0002e865) vtel_slider_pane_g2

0x89cf,	// (0x0002e87d) vtel_slider_pane_g3_ParamLimits

0x89cf,	// (0x0002e87d) vtel_slider_pane_g3

0x89a3,	// (0x0002e851) vtel_slider_pane_g4_ParamLimits

0x89a3,	// (0x0002e851) vtel_slider_pane_g4

0x89e5,	// (0x0002e893) vtel_slider_pane_g5_ParamLimits

0x89e5,	// (0x0002e893) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x000358af) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x000358af) vtel_slider_pane_g

0x1fb5,	// (0x00027e63) main_gallery2_pane

0x1b18,	// (0x000279c6) aid_size_row_itut2_dropdow_list_ParamLimits

0x1b18,	// (0x000279c6) aid_size_row_itut2_dropdow_list

0x1ba4,	// (0x00027a52) grid_vitu2_function_top_pane_ParamLimits

0x1ba4,	// (0x00027a52) grid_vitu2_function_top_pane

0x1c09,	// (0x00027ab7) popup_vitu2_dropdown_list_window_ParamLimits

0x1c09,	// (0x00027ab7) popup_vitu2_dropdown_list_window

0x1c32,	// (0x00027ae0) popup_vitu2_match_list_window

0x1e4b,	// (0x00027cf9) cell_vitu2_function_top_pane_ParamLimits

0x1e4b,	// (0x00027cf9) cell_vitu2_function_top_pane

0x1e69,	// (0x00027d17) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1e69,	// (0x00027d17) cell_vitu2_function_top_pane_cp01

0x1e87,	// (0x00027d35) cell_vitu2_function_top_wide_pane_ParamLimits

0x1e87,	// (0x00027d35) cell_vitu2_function_top_wide_pane

0xd1c3,	// (0x00033071) bg_button_pane_cp012

0x1ea5,	// (0x00027d53) cell_vitu2_function_top_pane_g1

0xd448,	// (0x000332f6) bg_button_pane_cp013_ParamLimits

0xd448,	// (0x000332f6) bg_button_pane_cp013

0x89fb,	// (0x0002e8a9) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x89fb,	// (0x0002e8a9) cell_vitu2_function_top_wide_pane_g1

0xd1c3,	// (0x00033071) bg_popup_sub_pane_cp20

0x1eb9,	// (0x00027d67) list_vitu2_match_list_pane

0xd1db,	// (0x00033089) bg_popup_sub_pane_cp20_g1

0xd1e3,	// (0x00033091) bg_popup_sub_pane_cp20_g2

0x3c9b,	// (0x00029b49) bg_popup_sub_pane_cp20_g3

0xd1eb,	// (0x00033099) bg_popup_sub_pane_cp20_g4

0x3c7b,	// (0x00029b29) bg_popup_sub_pane_cp20_g5

0xd464,	// (0x00033312) bg_popup_sub_pane_cp20_g6

0xd1fb,	// (0x000330a9) bg_popup_sub_pane_cp20_g7

0xd203,	// (0x000330b1) bg_popup_sub_pane_cp20_g8

0xd20b,	// (0x000330b9) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x000358ba) bg_popup_sub_pane_cp20_g

0xd46c,	// (0x0003331a) list_vitu2_match_list_item_pane_ParamLimits

0xd46c,	// (0x0003331a) list_vitu2_match_list_item_pane

0xd47e,	// (0x0003332c) list_vitu2_match_list_item_pane_t1

0xb1be,	// (0x0003106c) bg_popup_sub_pane_cp21

0xd4a4,	// (0x00033352) grid_vitu2_dropdown_list_pane

0x1ed7,	// (0x00027d85) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1ed7,	// (0x00027d85) cell_vitu2_dropdown_list_char_pane

0x1ef8,	// (0x00027da6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1ef8,	// (0x00027da6) cell_vitu2_dropdown_list_ctrl_pane

0xd4ac,	// (0x0003335a) cell_vitu2_dropdown_list_char_pane_g1

0xd4b5,	// (0x00033363) cell_vitu2_dropdown_list_char_pane_g2

0xd4be,	// (0x0003336c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x000358d7) cell_vitu2_dropdown_list_char_pane_g

0x1f24,	// (0x00027dd2) cell_vitu2_dropdown_list_char_pane_t1

0x8a48,	// (0x0002e8f6) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8a48,	// (0x0002e8f6) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8a58,	// (0x0002e906) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8a58,	// (0x0002e906) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8a69,	// (0x0002e917) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8a69,	// (0x0002e917) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1f32,	// (0x00027de0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1f32,	// (0x00027de0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd0b1,	// (0x00032f5f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd0b1,	// (0x00032f5f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x000358de) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x000358de) cell_vitu2_dropdown_list_ctrl_pane_g

0x8a79,	// (0x0002e927) aid_size_cell_gallery2_ParamLimits

0x8a79,	// (0x0002e927) aid_size_cell_gallery2

0x8a8f,	// (0x0002e93d) grid_gallery2_pane_ParamLimits

0x8a8f,	// (0x0002e93d) grid_gallery2_pane

0x8aa3,	// (0x0002e951) scroll_pane_cp029_ParamLimits

0x8aa3,	// (0x0002e951) scroll_pane_cp029

0x8aaf,	// (0x0002e95d) cell_gallery2_pane_ParamLimits

0x8aaf,	// (0x0002e95d) cell_gallery2_pane

0xd4c7,	// (0x00033375) cell_gallery2_pane_g2

0x8ae5,	// (0x0002e993) cell_gallery2_pane_g3

0xd4d1,	// (0x0003337f) cell_gallery2_pane_g4

0xd4d9,	// (0x00033387) cell_gallery2_pane_g5

0x51c7,	// (0x0002b075) grid_highlight_pane_cp10

0x1c32,	// (0x00027ae0) popup_vitu2_match_list_window_ParamLimits

0x1c47,	// (0x00027af5) popup_vitu2_query_window_ParamLimits

0x1c47,	// (0x00027af5) popup_vitu2_query_window

0xb1be,	// (0x0003106c) bg_vitu2_candi_button_pane

0xd4ac,	// (0x0003335a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd4b5,	// (0x00033363) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd4be,	// (0x0003336c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8aed,	// (0x0002e99b) bg_button_pane_cp015

0x8b01,	// (0x0002e9af) bg_button_pane_cp016

0x8b14,	// (0x0002e9c2) bg_button_pane_cp017

0xbee3,	// (0x00031d91) bg_popup_sub_pane_cp22

0xd4e1,	// (0x0003338f) popup_vitu2_query_window_g1

0x8b59,	// (0x0002ea07) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x000358e9) popup_vitu2_query_window_g

0x8b78,	// (0x0002ea26) popup_vitu2_query_window_t1_ParamLimits

0x8b78,	// (0x0002ea26) popup_vitu2_query_window_t1

0x8bad,	// (0x0002ea5b) popup_vitu2_query_window_t2_ParamLimits

0x8bad,	// (0x0002ea5b) popup_vitu2_query_window_t2

0x8bbf,	// (0x0002ea6d) popup_vitu2_query_window_t3_ParamLimits

0x8bbf,	// (0x0002ea6d) popup_vitu2_query_window_t3

0x8be7,	// (0x0002ea95) popup_vitu2_query_window_t4_ParamLimits

0x8be7,	// (0x0002ea95) popup_vitu2_query_window_t4

0x8c08,	// (0x0002eab6) popup_vitu2_query_window_t5_ParamLimits

0x8c08,	// (0x0002eab6) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x000358f0) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x000358f0) popup_vitu2_query_window_t

0xd2dd,	// (0x0003318b) main_cset_text_pane

0x862a,	// (0x0002e4d8) aid_area_touch_slider_ParamLimits

0x8646,	// (0x0002e4f4) cset_slider_pane_ParamLimits

0x8670,	// (0x0002e51e) main_cset_slider_pane_g1_ParamLimits

0x8685,	// (0x0002e533) main_cset_slider_pane_g2_ParamLimits

0xd2fe,	// (0x000331ac) main_cset_slider_pane_g3_ParamLimits

0xd2fe,	// (0x000331ac) main_cset_slider_pane_g3

0x869a,	// (0x0002e548) main_cset_slider_pane_g4_ParamLimits

0x869a,	// (0x0002e548) main_cset_slider_pane_g4

0x86a9,	// (0x0002e557) main_cset_slider_pane_g5_ParamLimits

0x86a9,	// (0x0002e557) main_cset_slider_pane_g5

0x86b5,	// (0x0002e563) main_cset_slider_pane_g6_ParamLimits

0x86b5,	// (0x0002e563) main_cset_slider_pane_g6

0xf995,	// (0x00035843) main_cset_slider_pane_g_ParamLimits

0xd32e,	// (0x000331dc) main_cset_slider_pane_t1_ParamLimits

0x8741,	// (0x0002e5ef) main_cset_slider_pane_t2_ParamLimits

0x875b,	// (0x0002e609) main_cset_slider_pane_t3_ParamLimits

0x8775,	// (0x0002e623) main_cset_slider_pane_t4_ParamLimits

0x878f,	// (0x0002e63d) main_cset_slider_pane_t5_ParamLimits

0x87ab,	// (0x0002e659) main_cset_slider_pane_t6_ParamLimits

0x87c0,	// (0x0002e66e) main_cset_slider_pane_t7_ParamLimits

0x87ea,	// (0x0002e698) main_cset_slider_pane_t8_ParamLimits

0x87ea,	// (0x0002e698) main_cset_slider_pane_t8

0x8812,	// (0x0002e6c0) main_cset_slider_pane_t9_ParamLimits

0x8812,	// (0x0002e6c0) main_cset_slider_pane_t9

0x883a,	// (0x0002e6e8) main_cset_slider_pane_t10_ParamLimits

0x883a,	// (0x0002e6e8) main_cset_slider_pane_t10

0x8862,	// (0x0002e710) main_cset_slider_pane_t11_ParamLimits

0x8862,	// (0x0002e710) main_cset_slider_pane_t11

0x888a,	// (0x0002e738) main_cset_slider_pane_t12_ParamLimits

0x888a,	// (0x0002e738) main_cset_slider_pane_t12

0x88a7,	// (0x0002e755) main_cset_slider_pane_t13_ParamLimits

0x88a7,	// (0x0002e755) main_cset_slider_pane_t13

0xf9ba,	// (0x00035868) main_cset_slider_pane_t_ParamLimits

0x1fb5,	// (0x00027e63) bg_popup_sub_pane_cp011

0xd4ed,	// (0x0003339b) main_cset_text_pane_g1

0xd4f5,	// (0x000333a3) main_cset_text_pane_t1

0xd503,	// (0x000333b1) main_cset_text_pane_t2

0xd511,	// (0x000333bf) main_cset_text_pane_t3

0xd51f,	// (0x000333cd) main_cset_text_pane_t4

0xd52d,	// (0x000333db) main_cset_text_pane_t5

0xd53b,	// (0x000333e9) main_cset_text_pane_t6

0xd549,	// (0x000333f7) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x000358ff) main_cset_text_pane_t

0x1fb5,	// (0x00027e63) main_cam4_burst_pane

0x1fb5,	// (0x00027e63) main_cam5_pane

0x8569,	// (0x0002e417) bg_button_pane_cp019

0x8572,	// (0x0002e420) bg_button_pane_cp020

0xd30a,	// (0x000331b8) main_cset_slider_pane_g7_ParamLimits

0xd30a,	// (0x000331b8) main_cset_slider_pane_g7

0xd316,	// (0x000331c4) main_cset_slider_pane_g8_ParamLimits

0xd316,	// (0x000331c4) main_cset_slider_pane_g8

0x86c9,	// (0x0002e577) main_cset_slider_pane_g9_ParamLimits

0x86c9,	// (0x0002e577) main_cset_slider_pane_g9

0x86d5,	// (0x0002e583) main_cset_slider_pane_g10_ParamLimits

0x86d5,	// (0x0002e583) main_cset_slider_pane_g10

0x86e1,	// (0x0002e58f) main_cset_slider_pane_g11_ParamLimits

0x86e1,	// (0x0002e58f) main_cset_slider_pane_g11

0x86ed,	// (0x0002e59b) main_cset_slider_pane_g12_ParamLimits

0x86ed,	// (0x0002e59b) main_cset_slider_pane_g12

0x86f9,	// (0x0002e5a7) main_cset_slider_pane_g13_ParamLimits

0x86f9,	// (0x0002e5a7) main_cset_slider_pane_g13

0x8705,	// (0x0002e5b3) main_cset_slider_pane_g14_ParamLimits

0x8705,	// (0x0002e5b3) main_cset_slider_pane_g14

0x8711,	// (0x0002e5bf) main_cset_slider_pane_g15_ParamLimits

0x8711,	// (0x0002e5bf) main_cset_slider_pane_g15

0xd35c,	// (0x0003320a) main_cset_slider_pane_t14_ParamLimits

0xd35c,	// (0x0003320a) main_cset_slider_pane_t14

0xd395,	// (0x00033243) main_cset_slider_pane_t15_ParamLimits

0xd395,	// (0x00033243) main_cset_slider_pane_t15

0x8c7f,	// (0x0002eb2d) aid_cam4_burst_size_cell_ParamLimits

0x8c7f,	// (0x0002eb2d) aid_cam4_burst_size_cell

0x8c9f,	// (0x0002eb4d) grid_cam4_burst_pane_ParamLimits

0x8c9f,	// (0x0002eb4d) grid_cam4_burst_pane

0x8cd7,	// (0x0002eb85) linegrid_cam4_burst_pane_ParamLimits

0x8cd7,	// (0x0002eb85) linegrid_cam4_burst_pane

0xd557,	// (0x00033405) scroll_pane_cp30_ParamLimits

0xd557,	// (0x00033405) scroll_pane_cp30

0x8cfd,	// (0x0002ebab) cell_cam4_burst_pane_ParamLimits

0x8cfd,	// (0x0002ebab) cell_cam4_burst_pane

0xd563,	// (0x00033411) linegrid_cam4_burst_pane_g1_ParamLimits

0xd563,	// (0x00033411) linegrid_cam4_burst_pane_g1

0x8d4a,	// (0x0002ebf8) linegrid_cam4_burst_pane_g2_ParamLimits

0x8d4a,	// (0x0002ebf8) linegrid_cam4_burst_pane_g2

0xd570,	// (0x0003341e) linegrid_cam4_burst_pane_g3_ParamLimits

0xd570,	// (0x0003341e) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0003590e) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0003590e) linegrid_cam4_burst_pane_g

0x8d5b,	// (0x0002ec09) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8d5b,	// (0x0002ec09) linegrid_cam4_burst_pane_g3_copy1

0xd57d,	// (0x0003342b) linegrid_cam4_burst_pane_g4_ParamLimits

0xd57d,	// (0x0003342b) linegrid_cam4_burst_pane_g4

0x8d75,	// (0x0002ec23) linegrid_cam4_burst_pane_g5_ParamLimits

0x8d75,	// (0x0002ec23) linegrid_cam4_burst_pane_g5

0x8d86,	// (0x0002ec34) linegrid_cam4_burst_pane_g6_ParamLimits

0x8d86,	// (0x0002ec34) linegrid_cam4_burst_pane_g6

0xd58a,	// (0x00033438) linegrid_cam4_burst_pane_g7_ParamLimits

0xd58a,	// (0x00033438) linegrid_cam4_burst_pane_g7

0x8d9d,	// (0x0002ec4b) cell_cam4_burst_pane_g1

0xd5a3,	// (0x00033451) main_cam5_pane_t1_ParamLimits

0xd5a3,	// (0x00033451) main_cam5_pane_t1

0xd5b5,	// (0x00033463) main_cam5_pane_t2_ParamLimits

0xd5b5,	// (0x00033463) main_cam5_pane_t2

0xd5c7,	// (0x00033475) main_cam5_pane_t3_ParamLimits

0xd5c7,	// (0x00033475) main_cam5_pane_t3

0xd5d9,	// (0x00033487) main_cam5_pane_t4_ParamLimits

0xd5d9,	// (0x00033487) main_cam5_pane_t4

0xd5ef,	// (0x0003349d) main_cam5_pane_t5_ParamLimits

0xd5ef,	// (0x0003349d) main_cam5_pane_t5

0xd601,	// (0x000334af) main_cam5_pane_t6_ParamLimits

0xd601,	// (0x000334af) main_cam5_pane_t6

0xd615,	// (0x000334c3) main_cam5_pane_t7_ParamLimits

0xd615,	// (0x000334c3) main_cam5_pane_t7

0xd627,	// (0x000334d5) main_cam5_pane_t8_ParamLimits

0xd627,	// (0x000334d5) main_cam5_pane_t8

0xd643,	// (0x000334f1) main_cam5_pane_t9_ParamLimits

0xd643,	// (0x000334f1) main_cam5_pane_t9

0xd655,	// (0x00033503) main_cam5_pane_t10_ParamLimits

0xd655,	// (0x00033503) main_cam5_pane_t10

0xd667,	// (0x00033515) main_cam5_pane_t11_ParamLimits

0xd667,	// (0x00033515) main_cam5_pane_t11

0xd679,	// (0x00033527) main_cam5_pane_t12_ParamLimits

0xd679,	// (0x00033527) main_cam5_pane_t12

0xd68e,	// (0x0003353c) main_cam5_pane_t13_ParamLimits

0xd68e,	// (0x0003353c) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0003591a) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0003591a) main_cam5_pane_t

0x21ed,	// (0x0002809b) popup_scut_keymap_window_ParamLimits

0x21ed,	// (0x0002809b) popup_scut_keymap_window

0x8db0,	// (0x0002ec5e) aid_size_cell_brow_shortcut

0x51c7,	// (0x0002b075) bg_popup_window_pane_cp010

0x8dbc,	// (0x0002ec6a) grid_scut_pane

0x8dc8,	// (0x0002ec76) cell_scut_pane_ParamLimits

0x8dc8,	// (0x0002ec76) cell_scut_pane

0x8ddf,	// (0x0002ec8d) cell_scut_pane_g1

0xd6ab,	// (0x00033559) cell_scut_pane_t1

0xd6ba,	// (0x00033568) cell_scut_pane_t2

0x8de8,	// (0x0002ec96) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x00035935) cell_scut_pane_t

0x74fb,	// (0x0002d3a9) main_mup3_pane_g8_ParamLimits

0x74fb,	// (0x0002d3a9) main_mup3_pane_g8

0x1b30,	// (0x000279de) area_vitu2_query_pane_ParamLimits

0x1b30,	// (0x000279de) area_vitu2_query_pane

0x8b27,	// (0x0002e9d5) input_focus_pane_cp08

0xd6c9,	// (0x00033577) area_vitu2_query_pane_g1

0x8df6,	// (0x0002eca4) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0003593c) area_vitu2_query_pane_g

0x8e07,	// (0x0002ecb5) area_vitu2_query_pane_t1_ParamLimits

0x8e07,	// (0x0002ecb5) area_vitu2_query_pane_t1

0x8e1b,	// (0x0002ecc9) area_vitu2_query_pane_t2_ParamLimits

0x8e1b,	// (0x0002ecc9) area_vitu2_query_pane_t2

0x8e2f,	// (0x0002ecdd) area_vitu2_query_pane_t3_ParamLimits

0x8e2f,	// (0x0002ecdd) area_vitu2_query_pane_t3

0xd6d5,	// (0x00033583) area_vitu2_query_pane_t4_ParamLimits

0xd6d5,	// (0x00033583) area_vitu2_query_pane_t4

0xd6fd,	// (0x000335ab) area_vitu2_query_pane_t5_ParamLimits

0xd6fd,	// (0x000335ab) area_vitu2_query_pane_t5

0xd725,	// (0x000335d3) area_vitu2_query_pane_t6_ParamLimits

0xd725,	// (0x000335d3) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x00035941) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x00035941) area_vitu2_query_pane_t

0x8e57,	// (0x0002ed05) bg_button_pane_cp018

0x8e65,	// (0x0002ed13) bg_button_pane_cp021

0x8e71,	// (0x0002ed1f) bg_button_pane_cp022

0x8e82,	// (0x0002ed30) input_focus_pane_cp09

0x4fee,	// (0x0002ae9c) aid_size_touch_mv_arrow_left

0x5017,	// (0x0002aec5) aid_size_touch_mv_arrow_right

0x8729,	// (0x0002e5d7) main_cset_slider_pane_g16_ParamLimits

0x8729,	// (0x0002e5d7) main_cset_slider_pane_g16

0x8735,	// (0x0002e5e3) main_cset_slider_pane_g17_ParamLimits

0x8735,	// (0x0002e5e3) main_cset_slider_pane_g17

0x8d9d,	// (0x0002ec4b) cell_cam4_burst_pane_g1_ParamLimits

0x1fb5,	// (0x00027e63) compa_mode_pane

0x893b,	// (0x0002e7e9) popup_vtel_slider_window_g3_ParamLimits

0x893b,	// (0x0002e7e9) popup_vtel_slider_window_g3

0x8952,	// (0x0002e800) popup_vtel_slider_window_g4_ParamLimits

0x8952,	// (0x0002e800) popup_vtel_slider_window_g4

0x8969,	// (0x0002e817) popup_vtel_slider_window_t1_ParamLimits

0x8969,	// (0x0002e817) popup_vtel_slider_window_t1

0x1fb5,	// (0x00027e63) main_cl_pane

0xbf0b,	// (0x00031db9) popup_imed_adjust2_window_ParamLimits

0xbee3,	// (0x00031d91) bg_tb_trans_pane_cp05_ParamLimits

0xc90c,	// (0x000327ba) popup_imed_adjust2_window_g1_ParamLimits

0xc91b,	// (0x000327c9) popup_imed_adjust2_window_g2_ParamLimits

0xc91b,	// (0x000327c9) popup_imed_adjust2_window_g2

0xc927,	// (0x000327d5) popup_imed_adjust2_window_g3_ParamLimits

0xc927,	// (0x000327d5) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x000356ac) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x000356ac) popup_imed_adjust2_window_g

0xc933,	// (0x000327e1) popup_imed_adjust2_window_t1_ParamLimits

0xc94b,	// (0x000327f9) slider_imed_adjust_pane_ParamLimits

0xc95f,	// (0x0003280d) slider_imed_adjust_pane_g1_ParamLimits

0xc96f,	// (0x0003281d) slider_imed_adjust_pane_g2_ParamLimits

0xc97f,	// (0x0003282d) slider_imed_adjust_pane_g3_ParamLimits

0xc990,	// (0x0003283e) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x000356b3) slider_imed_adjust_pane_g_ParamLimits

0x187f,	// (0x0002772d) aid_touch_area_cam4_ParamLimits

0x187f,	// (0x0002772d) aid_touch_area_cam4

0xd083,	// (0x00032f31) battery_pane_cp01

0x194f,	// (0x000277fd) main_camera4_pane_g6_ParamLimits

0x194f,	// (0x000277fd) main_camera4_pane_g6

0x1979,	// (0x00027827) main_camera4_pane_t2_ParamLimits

0x1979,	// (0x00027827) main_camera4_pane_t2

0x0001,

0xf908,	// (0x000357b6) main_camera4_pane_t_ParamLimits

0xf908,	// (0x000357b6) main_camera4_pane_t

0x199a,	// (0x00027848) aid_touch_area_vid4_ParamLimits

0x199a,	// (0x00027848) aid_touch_area_vid4

0x1a01,	// (0x000278af) main_video4_pane_g5_ParamLimits

0x1a01,	// (0x000278af) main_video4_pane_g5

0x1a2c,	// (0x000278da) vid4_progress_pane_ParamLimits

0x1a2c,	// (0x000278da) vid4_progress_pane

0xd322,	// (0x000331d0) main_cset_slider_pane_g18_ParamLimits

0xd322,	// (0x000331d0) main_cset_slider_pane_g18

0xd597,	// (0x00033445) cell_cam4_burst_pane_g2_ParamLimits

0xd597,	// (0x00033445) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x00035915) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x00035915) cell_cam4_burst_pane_g

0x2c29,	// (0x00028ad7) bg_cl_pane_ParamLimits

0x2c29,	// (0x00028ad7) bg_cl_pane

0x8e93,	// (0x0002ed41) cl_header_pane_ParamLimits

0x8e93,	// (0x0002ed41) cl_header_pane

0x8ea7,	// (0x0002ed55) cl_listscroll_pane_ParamLimits

0x8ea7,	// (0x0002ed55) cl_listscroll_pane

0xd771,	// (0x0003361f) bg_cl_pane_g1

0xd779,	// (0x00033627) bg_cl_pane_g2

0xd781,	// (0x0003362f) bg_cl_pane_g3

0xd789,	// (0x00033637) bg_cl_pane_g4

0xd791,	// (0x0003363f) bg_cl_pane_g5

0xd799,	// (0x00033647) bg_cl_pane_g6

0xd7a1,	// (0x0003364f) bg_cl_pane_g7

0xd7a9,	// (0x00033657) bg_cl_pane_g8

0xd7b1,	// (0x0003365f) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x00035950) bg_cl_pane_g

0x8eb7,	// (0x0002ed65) aid_height_cl_leading_ParamLimits

0x8eb7,	// (0x0002ed65) aid_height_cl_leading

0x8ec3,	// (0x0002ed71) aid_height_cl_text_ParamLimits

0x8ec3,	// (0x0002ed71) aid_height_cl_text

0x2227,	// (0x000280d5) bg_cl_header_pane_ParamLimits

0x2227,	// (0x000280d5) bg_cl_header_pane

0x8ee2,	// (0x0002ed90) cl_header_pane_g1_ParamLimits

0x8ee2,	// (0x0002ed90) cl_header_pane_g1

0x8ef8,	// (0x0002eda6) cl_header_pane_t1_ParamLimits

0x8ef8,	// (0x0002eda6) cl_header_pane_t1

0xd7b9,	// (0x00033667) cl_list_pane

0xd2f5,	// (0x000331a3) hc_scroll_pane_cp01

0x3c7b,	// (0x00029b29) bg_cl_header_pane_g1

0xd1db,	// (0x00033089) bg_cl_header_pane_g2

0x3c9b,	// (0x00029b49) bg_cl_header_pane_g3

0xd1eb,	// (0x00033099) bg_cl_header_pane_g4

0xd1e3,	// (0x00033091) bg_cl_header_pane_g5

0xd464,	// (0x00033312) bg_cl_header_pane_g6

0xd203,	// (0x000330b1) bg_cl_header_pane_g7

0xd20b,	// (0x000330b9) bg_cl_header_pane_g8

0xd1fb,	// (0x000330a9) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x00035963) bg_cl_header_pane_g

0x8f11,	// (0x0002edbf) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8f11,	// (0x0002edbf) hc_cl_list_double_graphic_heading_pane

0x8f25,	// (0x0002edd3) hc_cl_list_single_graphic_pane_ParamLimits

0x8f25,	// (0x0002edd3) hc_cl_list_single_graphic_pane

0x8f3f,	// (0x0002eded) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8f3f,	// (0x0002eded) hc_cl_list_single_graphic_pane_g1

0x8f4b,	// (0x0002edf9) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8f4b,	// (0x0002edf9) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x00035976) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x00035976) hc_cl_list_single_graphic_pane_g

0x8f5f,	// (0x0002ee0d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8f5f,	// (0x0002ee0d) hc_cl_list_single_graphic_pane_t1

0x8f3f,	// (0x0002eded) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8f3f,	// (0x0002eded) hc_cl_list_double_graphic_heading_pane_g1

0x8f74,	// (0x0002ee22) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8f74,	// (0x0002ee22) hc_cl_list_double_graphic_heading_pane_g2

0x8f88,	// (0x0002ee36) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8f88,	// (0x0002ee36) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0003597b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0003597b) hc_cl_list_double_graphic_heading_pane_g

0x8f9c,	// (0x0002ee4a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8f9c,	// (0x0002ee4a) hc_cl_list_double_graphic_heading_pane_t1

0x8fb1,	// (0x0002ee5f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8fb1,	// (0x0002ee5f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x00035982) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x00035982) hc_cl_list_double_graphic_heading_pane_t

0xd7ca,	// (0x00033678) vid4_progress_pane_g1

0xd7da,	// (0x00033688) vid4_progress_pane_g2

0x488e,	// (0x0002a73c) vid4_progress_pane_g3

0xd0d8,	// (0x00032f86) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x00035987) vid4_progress_pane_g

0xd7ea,	// (0x00033698) vid4_progress_pane_t1

0xd7ff,	// (0x000336ad) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x00035992) vid4_progress_pane_t

0xd82a,	// (0x000336d8) wait_bar_pane_cp07

0xc1dc,	// (0x0003208a) blid_firmament_pane_ParamLimits

0xc21f,	// (0x000320cd) popup_blid_sat_info2_window_g1

0xc243,	// (0x000320f1) popup_blid_sat_info2_window_t3

0xc251,	// (0x000320ff) popup_blid_sat_info2_window_t4

0xc25f,	// (0x0003210d) popup_blid_sat_info2_window_t5

0xc26d,	// (0x0003211b) popup_blid_sat_info2_window_t6

0xc27d,	// (0x0003212b) popup_blid_sat_info2_window_t7

0xc28b,	// (0x00032139) popup_blid_sat_info2_window_t8

0xc299,	// (0x00032147) popup_blid_sat_info2_window_t9

0xc2a7,	// (0x00032155) popup_blid_sat_info2_window_t10

0xc36b,	// (0x00032219) aid_firma_cardinal_ParamLimits

0xc37f,	// (0x0003222d) blid_firmament_pane_t1_ParamLimits

0xc396,	// (0x00032244) blid_firmament_pane_t2_ParamLimits

0xc3ad,	// (0x0003225b) blid_firmament_pane_t3_ParamLimits

0xc3c4,	// (0x00032272) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x000355a5) blid_firmament_pane_t_ParamLimits

0xc3db,	// (0x00032289) blid_sat_info_pane_ParamLimits

0x2227,	// (0x000280d5) main_cam_set_pane_ParamLimits

0x7cf1,	// (0x0002db9f) aid_size_cell_colour_35_ParamLimits

0x7d11,	// (0x0002dbbf) aid_size_cell_colour_112_ParamLimits

0x7d31,	// (0x0002dbdf) aid_size_cell_effect_ParamLimits

0xbee3,	// (0x00031d91) bg_tb_trans_pane_cp02_ParamLimits

0x4808,	// (0x0002a6b6) heading_imed_pane_ParamLimits

0x7d51,	// (0x0002dbff) listscroll_imed_pane_ParamLimits

0xb50d,	// (0x000313bb) popup_call2_audio_first_window_g5_ParamLimits

0xb50d,	// (0x000313bb) popup_call2_audio_first_window_g5

0x165c,	// (0x0002750a) aid_size_touch_image3_arrow_left_ParamLimits

0x165c,	// (0x0002750a) aid_size_touch_image3_arrow_left

0x1688,	// (0x00027536) aid_size_touch_image3_arrow_right_ParamLimits

0x1688,	// (0x00027536) aid_size_touch_image3_arrow_right

0xd815,	// (0x000336c3) vid4_progress_pane_t3

0x8074,	// (0x0002df22) main_hwr_training_symbol_option_pane_ParamLimits

0x8074,	// (0x0002df22) main_hwr_training_symbol_option_pane

0xcbf9,	// (0x00032aa7) popup_hwr_training_preview_window_ParamLimits

0xcbf9,	// (0x00032aa7) popup_hwr_training_preview_window

0x1503,	// (0x000273b1) hwr_training_navi_pane_g5_ParamLimits

0x1503,	// (0x000273b1) hwr_training_navi_pane_g5

0xd1bb,	// (0x00033069) popup_char_count_window

0xd1c3,	// (0x00033071) bg_popup_sub_pane_cp20_ParamLimits

0x1eb9,	// (0x00027d67) list_vitu2_match_list_pane_ParamLimits

0x1ec8,	// (0x00027d76) vitu2_page_scroll_pane_ParamLimits

0x1ec8,	// (0x00027d76) vitu2_page_scroll_pane

0xd894,	// (0x00033742) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd894,	// (0x00033742) list_single_hwr_training_symbol_option_pane

0xd8a7,	// (0x00033755) list_single_hwr_training_symbol_option_pane_g1

0xd8af,	// (0x0003375d) list_single_hwr_training_symbol_option_pane_t1

0xd8bd,	// (0x0003376b) bg_button_pane_cp023

0xd8c6,	// (0x00033774) bg_button_pane_cp024

0x8fc6,	// (0x0002ee74) vitu2_page_scroll_pane_g1

0x8fce,	// (0x0002ee7c) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x00035999) vitu2_page_scroll_pane_g

0x8fd6,	// (0x0002ee84) vitu2_page_scroll_pane_t1

0xc0f8,	// (0x00031fa6) popup_char_count_window_g1

0xd8f9,	// (0x000337a7) popup_char_count_window_g2

0xd902,	// (0x000337b0) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0003599e) popup_char_count_window_g

0xd90b,	// (0x000337b9) popup_char_count_window_t1

0x1fb5,	// (0x00027e63) main_vded2_pane

0xc8f8,	// (0x000327a6) aid_size_cell_imed_line

0xc902,	// (0x000327b0) grid_imed_line_width_pane

0x1a9c,	// (0x0002794a) vid4_indicators_pane_g4

0xd919,	// (0x000337c7) cell_imed_line_width_pane_ParamLimits

0xd919,	// (0x000337c7) cell_imed_line_width_pane

0xd92d,	// (0x000337db) cell_imed_line_width_pane_g1

0xc18a,	// (0x00032038) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x000359a5) cell_imed_line_width_pane_g

0x8fe5,	// (0x0002ee93) main_vded2_pane_g1_ParamLimits

0x8fe5,	// (0x0002ee93) main_vded2_pane_g1

0x8ffb,	// (0x0002eea9) main_vded2_pane_g2_ParamLimits

0x8ffb,	// (0x0002eea9) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x000359aa) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x000359aa) main_vded2_pane_g

0x900d,	// (0x0002eebb) vded2_slider_pane_ParamLimits

0x900d,	// (0x0002eebb) vded2_slider_pane

0x901d,	// (0x0002eecb) aid_size_touch_vded2_end

0x9027,	// (0x0002eed5) aid_size_touch_vded2_playhead

0xd936,	// (0x000337e4) aid_size_touch_vded2_start

0xd93e,	// (0x000337ec) vded2_slider_bg_pane

0xd947,	// (0x000337f5) vded2_slider_pane_g1

0xd950,	// (0x000337fe) vded2_slider_pane_g2

0x9031,	// (0x0002eedf) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x000359af) vded2_slider_pane_g

0xd958,	// (0x00033806) vded2_slider_bg_pane_g1

0xd961,	// (0x0003380f) vded2_slider_bg_pane_g2

0xd96a,	// (0x00033818) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x000359b6) vded2_slider_bg_pane_g

0x58ca,	// (0x0002b778) aid_postcard_touch_down_pane_ParamLimits

0x58ca,	// (0x0002b778) aid_postcard_touch_down_pane

0x58e0,	// (0x0002b78e) aid_postcard_touch_up_pane_ParamLimits

0x58e0,	// (0x0002b78e) aid_postcard_touch_up_pane

0x1fb5,	// (0x00027e63) main_blid2_pane

0xbef1,	// (0x00031d9f) popup_blid2_search_window

0x1fb5,	// (0x00027e63) blid2_gps_pane

0x1fb5,	// (0x00027e63) blid2_navig_pane

0x1fb5,	// (0x00027e63) blid2_search_pane

0x1fb5,	// (0x00027e63) blid2_tripm_pane

0x903c,	// (0x0002eeea) blid2_search_pane_g1_ParamLimits

0x903c,	// (0x0002eeea) blid2_search_pane_g1

0x9054,	// (0x0002ef02) blid2_search_pane_t1_ParamLimits

0x9054,	// (0x0002ef02) blid2_search_pane_t1

0x9066,	// (0x0002ef14) aid_size_cell_blid2_gps_ParamLimits

0x9066,	// (0x0002ef14) aid_size_cell_blid2_gps

0x907e,	// (0x0002ef2c) blid2_gps_pane_g1_ParamLimits

0x907e,	// (0x0002ef2c) blid2_gps_pane_g1

0x9092,	// (0x0002ef40) grid_blid2_satellite_pane_ParamLimits

0x9092,	// (0x0002ef40) grid_blid2_satellite_pane

0x90ac,	// (0x0002ef5a) blid2_navig_pane_g1_ParamLimits

0x90ac,	// (0x0002ef5a) blid2_navig_pane_g1

0x90b8,	// (0x0002ef66) blid2_navig_pane_t1_ParamLimits

0x90b8,	// (0x0002ef66) blid2_navig_pane_t1

0x90d3,	// (0x0002ef81) blid2_navig_pane_t2_ParamLimits

0x90d3,	// (0x0002ef81) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x000359bd) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x000359bd) blid2_navig_pane_t

0x90ee,	// (0x0002ef9c) blid2_navig_ring_pane_ParamLimits

0x90ee,	// (0x0002ef9c) blid2_navig_ring_pane

0x9107,	// (0x0002efb5) blid2_speed_pane_ParamLimits

0x9107,	// (0x0002efb5) blid2_speed_pane

0x9113,	// (0x0002efc1) blid2_tripm_pane_g1_ParamLimits

0x9113,	// (0x0002efc1) blid2_tripm_pane_g1

0x912e,	// (0x0002efdc) blid2_tripm_pane_g2_ParamLimits

0x912e,	// (0x0002efdc) blid2_tripm_pane_g2

0x9142,	// (0x0002eff0) blid2_tripm_pane_g3_ParamLimits

0x9142,	// (0x0002eff0) blid2_tripm_pane_g3

0x9156,	// (0x0002f004) blid2_tripm_pane_g4_ParamLimits

0x9156,	// (0x0002f004) blid2_tripm_pane_g4

0x916a,	// (0x0002f018) blid2_tripm_pane_g5_ParamLimits

0x916a,	// (0x0002f018) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x000359c2) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x000359c2) blid2_tripm_pane_g

0x9190,	// (0x0002f03e) blid2_tripm_pane_t1_ParamLimits

0x9190,	// (0x0002f03e) blid2_tripm_pane_t1

0x91ab,	// (0x0002f059) blid2_tripm_pane_t2_ParamLimits

0x91ab,	// (0x0002f059) blid2_tripm_pane_t2

0x91c6,	// (0x0002f074) blid2_tripm_pane_t3_ParamLimits

0x91c6,	// (0x0002f074) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x000359cf) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x000359cf) blid2_tripm_pane_t

0x920d,	// (0x0002f0bb) cell_blid2_satellite_pane_ParamLimits

0x920d,	// (0x0002f0bb) cell_blid2_satellite_pane

0x922b,	// (0x0002f0d9) cell_blid2_satellite_pane_g1

0xd973,	// (0x00033821) cell_blid2_satellite_pane_t1

0xc3eb,	// (0x00032299) blid2_speed_pane_g1

0xd981,	// (0x0003382f) blid2_speed_pane_t1

0xd98f,	// (0x0003383d) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x000359d8) blid2_speed_pane_t

0xc3eb,	// (0x00032299) blid2_navig_ring_pane_g1

0x9234,	// (0x0002f0e2) blid2_navig_ring_pane_g2

0x923c,	// (0x0002f0ea) blid2_navig_ring_pane_g3

0x9244,	// (0x0002f0f2) blid2_navig_ring_pane_g4

0x924c,	// (0x0002f0fa) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x000359dd) blid2_navig_ring_pane_g

0x1fb5,	// (0x00027e63) bg_popup_window_pane_cp011

0xd99d,	// (0x0003384b) popup_blid2_search_window_g1

0xd9a5,	// (0x00033853) popup_blid2_search_window_t1

0xd9b3,	// (0x00033861) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x000359e8) popup_blid2_search_window_t

0x3b3d,	// (0x000299eb) main_browser_pane_g1

0x2c29,	// (0x00028ad7) main_browser_pane_ParamLimits

0xd1c3,	// (0x00033071) bg_button_pane_cp011_ParamLimits

0x1e2f,	// (0x00027cdd) cell_vitu2_function_pane_g1_ParamLimits

0xbee3,	// (0x00031d91) bg_popup_sub_pane_cp22_ParamLimits

0x8b27,	// (0x0002e9d5) input_focus_pane_cp08_ParamLimits

0x8b3e,	// (0x0002e9ec) popup_vitu2_query_button_pane_ParamLimits

0x8b3e,	// (0x0002e9ec) popup_vitu2_query_button_pane

0x8b4f,	// (0x0002e9fd) popup_vitu2_query_input_button_pane

0xd4e1,	// (0x0003338f) popup_vitu2_query_window_g1_ParamLimits

0x8b59,	// (0x0002ea07) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x000358e9) popup_vitu2_query_window_g_ParamLimits

0x1fb5,	// (0x00027e63) bg_button_pane_cp026

0x9254,	// (0x0002f102) popup_vitu2_query_input_button_pane_g1

0x1fb5,	// (0x00027e63) bg_button_pane_cp025

0xd9c1,	// (0x0003386f) popup_vitu2_query_button_pane_t1

0x71d5,	// (0x0002d083) main_mp3_pane_t6

0x71e3,	// (0x0002d091) popup_slider_window_cp01

0xd0bf,	// (0x00032f6d) cam4_battery_pane

0xd126,	// (0x00032fd4) cam4_battery_pane_cp02

0xd7c2,	// (0x00033670) cam4_battery_pane_cp01

0xd7c2,	// (0x00033670) cam4_battery_pane_cp03

0xcf30,	// (0x00032dde) cam4_battery_pane_g1

0xc3eb,	// (0x00032299) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x000359ed) cam4_battery_pane_g

0xc2b5,	// (0x00032163) popup_blid_sat_info2_window_t11

0x4fee,	// (0x0002ae9c) aid_size_touch_mv_arrow_left_ParamLimits

0x5017,	// (0x0002aec5) aid_size_touch_mv_arrow_right_ParamLimits

0x505f,	// (0x0002af0d) navi_pane_g1_ParamLimits

0x506b,	// (0x0002af19) navi_pane_g2_ParamLimits

0x5099,	// (0x0002af47) navi_pane_g3_ParamLimits

0xf409,	// (0x000352b7) navi_pane_g_ParamLimits

0x5155,	// (0x0002b003) navi_pane_mv_t1_ParamLimits

0x7d5d,	// (0x0002dc0b) grid_imed_effect_pane_ParamLimits

0x36ee,	// (0x0002959c) aid_placing_vt_slider_lsc

0x36fe,	// (0x000295ac) aid_placing_vt_slider_prt

0x2227,	// (0x000280d5) bg_tb_trans_pane_cp01_ParamLimits

0xc572,	// (0x00032420) popup_image_details_window_g1_ParamLimits

0xc585,	// (0x00032433) popup_image_details_window_g2_ParamLimits

0xc59a,	// (0x00032448) popup_image_details_window_g3_ParamLimits

0xc59a,	// (0x00032448) popup_image_details_window_g3

0xf73c,	// (0x000355ea) popup_image_details_window_g_ParamLimits

0xc5ae,	// (0x0003245c) popup_image_details_window_t1_ParamLimits

0xc5c0,	// (0x0003246e) popup_image_details_window_t2_ParamLimits

0xc5d9,	// (0x00032487) popup_image_details_window_t3_ParamLimits

0xc5ed,	// (0x0003249b) popup_image_details_window_t4_ParamLimits

0xc608,	// (0x000324b6) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x000355f1) popup_image_details_window_t_ParamLimits

0x8ecf,	// (0x0002ed7d) cl_header_name_pane_ParamLimits

0x8ecf,	// (0x0002ed7d) cl_header_name_pane

0x925c,	// (0x0002f10a) cl_header_name_pane_t1_ParamLimits

0x925c,	// (0x0002f10a) cl_header_name_pane_t1

0x927d,	// (0x0002f12b) cl_header_name_pane_t2_ParamLimits

0x927d,	// (0x0002f12b) cl_header_name_pane_t2

0x92bf,	// (0x0002f16d) cl_header_name_pane_t3_ParamLimits

0x92bf,	// (0x0002f16d) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x000359f2) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x000359f2) cl_header_name_pane_t

0x5126,	// (0x0002afd4) navi_pane_mv_g2_ParamLimits

0xd147,	// (0x00032ff5) field_vitu2_entry_pane_g1_ParamLimits

0xd153,	// (0x00033001) field_vitu2_entry_pane_g2_ParamLimits

0xd15f,	// (0x0003300d) field_vitu2_entry_pane_g3_ParamLimits

0xd15f,	// (0x0003300d) field_vitu2_entry_pane_g3

0xf93a,	// (0x000357e8) field_vitu2_entry_pane_g_ParamLimits

0x1ccf,	// (0x00027b7d) cell_vitu2_itu_pane_g1_ParamLimits

0x1cdf,	// (0x00027b8d) cell_vitu2_itu_pane_g2_ParamLimits

0x1cdf,	// (0x00027b8d) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x000357f4) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x000357f4) cell_vitu2_itu_pane_g

0xd1c3,	// (0x00033071) bg_vkb2_func_pane_cp05_ParamLimits

0xd1c3,	// (0x00033071) bg_vkb2_func_pane_cp05

0xd1c3,	// (0x00033071) bg_vkb2_func_pane_cp03

0xd1c3,	// (0x00033071) bg_vkb2_func_pane_cp04

0xd1c3,	// (0x00033071) bg_vkb2_func_pane_cp10_ParamLimits

0xd1c3,	// (0x00033071) bg_vkb2_func_pane_cp10

0x8e71,	// (0x0002ed1f) bg_vkb2_func_pane_cp08

0x8e57,	// (0x0002ed05) bg_vkb2_func_pane_cp06

0x8e65,	// (0x0002ed13) bg_vkb2_func_pane_cp07

0xd8cf,	// (0x0003377d) bg_vkb2_func_pane_cp11_ParamLimits

0xd8cf,	// (0x0003377d) bg_vkb2_func_pane_cp11

0xd8e4,	// (0x00033792) bg_vkb2_func_pane_cp12_ParamLimits

0xd8e4,	// (0x00033792) bg_vkb2_func_pane_cp12

0x1fb5,	// (0x00027e63) bg_vkb2_func_pane_cp09

0xd1db,	// (0x00033089) bg_vkb2_func_pane_g1

0x3c9b,	// (0x00029b49) bg_vkb2_func_pane_g2

0xd1e3,	// (0x00033091) bg_vkb2_func_pane_g3

0xd1eb,	// (0x00033099) bg_vkb2_func_pane_g4

0xd464,	// (0x00033312) bg_vkb2_func_pane_g5

0xd203,	// (0x000330b1) bg_vkb2_func_pane_g6

0xd20b,	// (0x000330b9) bg_vkb2_func_pane_g7

0xd1fb,	// (0x000330a9) bg_vkb2_func_pane_g8

0x3c7b,	// (0x00029b29) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x000359f9) bg_vkb2_func_pane_g

0x917e,	// (0x0002f02c) blid2_tripm_pane_g6_ParamLimits

0x917e,	// (0x0002f02c) blid2_tripm_pane_g6

0xceea,	// (0x00032d98) mp4_progress_pane_g1

0x91f9,	// (0x0002f0a7) blid2_tripm_values_pane_ParamLimits

0x91f9,	// (0x0002f0a7) blid2_tripm_values_pane

0x92f0,	// (0x0002f19e) blid2_tripm_values_pane_t1

0x92fe,	// (0x0002f1ac) blid2_tripm_values_pane_t2

0x930c,	// (0x0002f1ba) blid2_tripm_values_pane_t3

0x931a,	// (0x0002f1c8) blid2_tripm_values_pane_t4

0x9328,	// (0x0002f1d6) blid2_tripm_values_pane_t5

0x9336,	// (0x0002f1e4) blid2_tripm_values_pane_t6

0x9344,	// (0x0002f1f2) blid2_tripm_values_pane_t7

0x9352,	// (0x0002f200) blid2_tripm_values_pane_t8

0x9360,	// (0x0002f20e) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x00035a0c) blid2_tripm_values_pane_t

0x373a,	// (0x000295e8) call_video_pane_t1_ParamLimits

0x3758,	// (0x00029606) call_video_pane_t2_ParamLimits

0xf292,	// (0x00035140) call_video_pane_t_ParamLimits

0x57e3,	// (0x0002b691) msg_header_pane_g1_ParamLimits

0x57f1,	// (0x0002b69f) msg_header_pane_g2_ParamLimits

0x57f1,	// (0x0002b69f) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0003535a) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0003535a) msg_header_pane_g

0x2c29,	// (0x00028ad7) main_clock2_pane_ParamLimits

0x7afa,	// (0x0002d9a8) grid_clock2_toolbar_pane_ParamLimits

0x7afa,	// (0x0002d9a8) grid_clock2_toolbar_pane

0x7afa,	// (0x0002d9a8) listscroll_clock2_pane_ParamLimits

0x7afa,	// (0x0002d9a8) listscroll_clock2_pane

0x7bd7,	// (0x0002da85) main_clock2_pane_t3_ParamLimits

0x7bd7,	// (0x0002da85) main_clock2_pane_t3

0x7bf2,	// (0x0002daa0) main_clock2_pane_t4_ParamLimits

0x7bf2,	// (0x0002daa0) main_clock2_pane_t4

0xd9cf,	// (0x0003387d) cell_clock2_toolbar_pane

0xd9d7,	// (0x00033885) cell_clock2_toolbar_pane_cp01

0xd9d7,	// (0x00033885) cell_clock2_toolbar_pane_cp02

0xd9df,	// (0x0003388d) cell_clock2_toolbar_pane_cp03

0xd9e7,	// (0x00033895) list_clock2_pane

0x4d8e,	// (0x0002ac3c) scroll_pane_cp10

0xd9ef,	// (0x0003389d) list_single_clock2_pane_ParamLimits

0xd9ef,	// (0x0003389d) list_single_clock2_pane

0x51c7,	// (0x0002b075) list_highlight_pane_cp08

0xd9fc,	// (0x000338aa) list_single_clock2_pane_t1

0xda0a,	// (0x000338b8) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x00035a1f) list_single_clock2_pane_t

0x1fb5,	// (0x00027e63) bg_button_pane_cp10

0xda18,	// (0x000338c6) cell_clock2_toolbar_pane_g1

0x0f78,	// (0x00026e26) aid_main_viewer_pane_g1_ParamLimits

0x0f78,	// (0x00026e26) aid_main_viewer_pane_g1

0x0f86,	// (0x00026e34) aid_main_viewer_pane_g2_ParamLimits

0x0f86,	// (0x00026e34) aid_main_viewer_pane_g2

0x5880,	// (0x0002b72e) aid_main_viewer_pane_g3_ParamLimits

0x5880,	// (0x0002b72e) aid_main_viewer_pane_g3

0x588f,	// (0x0002b73d) aid_main_viewer_pane_g4_ParamLimits

0x588f,	// (0x0002b73d) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0003536b) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0003536b) aid_main_viewer_pane_g

0x68d7,	// (0x0002c785) main_calc_pane_ParamLimits

0x68eb,	// (0x0002c799) main_dialer2_pane_ParamLimits

0x1fb5,	// (0x00027e63) main_cam6_pane

0x1fb5,	// (0x00027e63) main_vid6_pane

0x7b06,	// (0x0002d9b4) listscroll_gen_pane_cp06_ParamLimits

0x7b06,	// (0x0002d9b4) listscroll_gen_pane_cp06

0x7c0d,	// (0x0002dabb) main_clock2_pane_t5_ParamLimits

0x7c0d,	// (0x0002dabb) main_clock2_pane_t5

0x7c6a,	// (0x0002db18) aid_call2_pane_cp10_ParamLimits

0x7c7c,	// (0x0002db2a) aid_call_pane_cp10_ParamLimits

0x4f7d,	// (0x0002ae2b) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4f7d,	// (0x0002ae2b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7c8e,	// (0x0002db3c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7c8e,	// (0x0002db3c) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4f7d,	// (0x0002ae2b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x000356a1) popup_clock_analogue_window_cp10_g_ParamLimits

0x7ca0,	// (0x0002db4e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x815c,	// (0x0002e00a) cell_dialer2_keypad_pane_g2_ParamLimits

0x815c,	// (0x0002e00a) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x00035787) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x00035787) cell_dialer2_keypad_pane_g

0x8178,	// (0x0002e026) cell_dialer2_keypad_pane_t1

0x861c,	// (0x0002e4ca) main_cset_text2_pane_ParamLimits

0x861c,	// (0x0002e4ca) main_cset_text2_pane

0xd6c9,	// (0x00033577) area_vitu2_query_pane_g1_ParamLimits

0x8df6,	// (0x0002eca4) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0003593c) area_vitu2_query_pane_g_ParamLimits

0xd74d,	// (0x000335fb) area_vitu2_query_pane_t7_ParamLimits

0xd74d,	// (0x000335fb) area_vitu2_query_pane_t7

0x8e57,	// (0x0002ed05) bg_button_pane_cp018_ParamLimits

0x8e65,	// (0x0002ed13) bg_button_pane_cp021_ParamLimits

0x8e71,	// (0x0002ed1f) bg_button_pane_cp022_ParamLimits

0x8e71,	// (0x0002ed1f) bg_vkb2_func_pane_cp08_ParamLimits

0x8e57,	// (0x0002ed05) bg_vkb2_func_pane_cp06_ParamLimits

0x8e65,	// (0x0002ed13) bg_vkb2_func_pane_cp07_ParamLimits

0x8e82,	// (0x0002ed30) input_focus_pane_cp09_ParamLimits

0xda20,	// (0x000338ce) cam6_autofocus_pane_ParamLimits

0xda20,	// (0x000338ce) cam6_autofocus_pane

0x1f4e,	// (0x00027dfc) cam6_image_uncrop_pane_ParamLimits

0x1f4e,	// (0x00027dfc) cam6_image_uncrop_pane

0x1f5d,	// (0x00027e0b) cam6_indi_pane_ParamLimits

0x1f5d,	// (0x00027e0b) cam6_indi_pane

0x1f73,	// (0x00027e21) cam6_mode_pane_ParamLimits

0x1f73,	// (0x00027e21) cam6_mode_pane

0x1f85,	// (0x00027e33) cam6_timer_pane_ParamLimits

0x1f85,	// (0x00027e33) cam6_timer_pane

0x1f91,	// (0x00027e3f) cam6_zoom_pane_ParamLimits

0x1f91,	// (0x00027e3f) cam6_zoom_pane

0x936e,	// (0x0002f21c) cam6_mode_pane_g1_ParamLimits

0x936e,	// (0x0002f21c) cam6_mode_pane_g1

0x937e,	// (0x0002f22c) cam6_mode_pane_g2_ParamLimits

0x937e,	// (0x0002f22c) cam6_mode_pane_g2

0x938e,	// (0x0002f23c) cam6_mode_pane_g3_ParamLimits

0x938e,	// (0x0002f23c) cam6_mode_pane_g3

0x939e,	// (0x0002f24c) cam6_mode_pane_g4_ParamLimits

0x939e,	// (0x0002f24c) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x00035a24) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x00035a24) cam6_mode_pane_g

0xda2e,	// (0x000338dc) bg_tb_trans_pane_cp08_ParamLimits

0xda2e,	// (0x000338dc) bg_tb_trans_pane_cp08

0xda3c,	// (0x000338ea) cam6_battery_pane_ParamLimits

0xda3c,	// (0x000338ea) cam6_battery_pane

0xda52,	// (0x00033900) cam6_indi_pane_g1_ParamLimits

0xda52,	// (0x00033900) cam6_indi_pane_g1

0xda64,	// (0x00033912) cam6_indi_pane_g2_ParamLimits

0xda64,	// (0x00033912) cam6_indi_pane_g2

0xda76,	// (0x00033924) cam6_indi_pane_g3_ParamLimits

0xda76,	// (0x00033924) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x00035a2d) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x00035a2d) cam6_indi_pane_g

0xda88,	// (0x00033936) cam6_indi_pane_t1_ParamLimits

0xda88,	// (0x00033936) cam6_indi_pane_t1

0x93ae,	// (0x0002f25c) cam6_autofocus_pane_g1

0x93b6,	// (0x0002f264) cam6_autofocus_pane_g2

0x93be,	// (0x0002f26c) cam6_autofocus_pane_g3

0x93c6,	// (0x0002f274) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x00035a34) cam6_autofocus_pane_g

0xdaae,	// (0x0003395c) cam6_timer_pane_g1

0xdab6,	// (0x00033964) cam6_timer_pane_t1

0xdac4,	// (0x00033972) cam6_zoom_cont_pane

0xdacc,	// (0x0003397a) cam6_zoom_pane_g1

0xdad4,	// (0x00033982) cam6_zoom_pane_g2

0x93ce,	// (0x0002f27c) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x00035a3d) cam6_zoom_pane_g

0xc3eb,	// (0x00032299) cam6_battery_pane_g1

0xc3eb,	// (0x00032299) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x000355ae) cam6_battery_pane_g

0xdadc,	// (0x0003398a) cam6_zoom_cont_pane_g1

0xdae5,	// (0x00033993) cam6_zoom_cont_pane_g2

0xdaee,	// (0x0003399c) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x00035a44) cam6_zoom_cont_pane_g

0x93eb,	// (0x0002f299) cam6_mode_pane_cp_ParamLimits

0x93eb,	// (0x0002f299) cam6_mode_pane_cp

0x93fd,	// (0x0002f2ab) cam6_zoom_pane_cp_ParamLimits

0x93fd,	// (0x0002f2ab) cam6_zoom_pane_cp

0x9409,	// (0x0002f2b7) vid6_image_uncrop_cif_pane_ParamLimits

0x9409,	// (0x0002f2b7) vid6_image_uncrop_cif_pane

0x9419,	// (0x0002f2c7) vid6_image_uncrop_nhd_pane_ParamLimits

0x9419,	// (0x0002f2c7) vid6_image_uncrop_nhd_pane

0x9428,	// (0x0002f2d6) vid6_image_uncrop_vga_pane_ParamLimits

0x9428,	// (0x0002f2d6) vid6_image_uncrop_vga_pane

0x9437,	// (0x0002f2e5) vid6_image_uncrop_wvga_pane_ParamLimits

0x9437,	// (0x0002f2e5) vid6_image_uncrop_wvga_pane

0x9446,	// (0x0002f2f4) vid6_indi_pane_ParamLimits

0x9446,	// (0x0002f2f4) vid6_indi_pane

0xda2e,	// (0x000338dc) bg_tb_trans_pane_cp09_ParamLimits

0xda2e,	// (0x000338dc) bg_tb_trans_pane_cp09

0xdb06,	// (0x000339b4) cam6_battery_pane_cp_ParamLimits

0xdb06,	// (0x000339b4) cam6_battery_pane_cp

0xdb12,	// (0x000339c0) vid6_indi_pane_g1_ParamLimits

0xdb12,	// (0x000339c0) vid6_indi_pane_g1

0xdb24,	// (0x000339d2) vid6_indi_pane_g2_ParamLimits

0xdb24,	// (0x000339d2) vid6_indi_pane_g2

0xdb36,	// (0x000339e4) vid6_indi_pane_g3_ParamLimits

0xdb36,	// (0x000339e4) vid6_indi_pane_g3

0xdb4b,	// (0x000339f9) vid6_indi_pane_g4_ParamLimits

0xdb4b,	// (0x000339f9) vid6_indi_pane_g4

0xdb60,	// (0x00033a0e) vid6_indi_pane_g5_ParamLimits

0xdb60,	// (0x00033a0e) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x00035a4b) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x00035a4b) vid6_indi_pane_g

0xdb7a,	// (0x00033a28) vid6_indi_pane_t1_ParamLimits

0xdb7a,	// (0x00033a28) vid6_indi_pane_t1

0xdb90,	// (0x00033a3e) vid6_indi_pane_t2_ParamLimits

0xdb90,	// (0x00033a3e) vid6_indi_pane_t2

0xdbb8,	// (0x00033a66) vid6_indi_pane_t3_ParamLimits

0xdbb8,	// (0x00033a66) vid6_indi_pane_t3

0xdbe0,	// (0x00033a8e) vid6_indi_pane_t4_ParamLimits

0xdbe0,	// (0x00033a8e) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x00035a56) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x00035a56) vid6_indi_pane_t

0xdc04,	// (0x00033ab2) wait_bar_pane_cp08

0x945e,	// (0x0002f30c) main_cset_text2_pane_t1_ParamLimits

0x945e,	// (0x0002f30c) main_cset_text2_pane_t1

0x93d6,	// (0x0002f284) listscroll_gen_pane_cp06_t1_ParamLimits

0x93d6,	// (0x0002f284) listscroll_gen_pane_cp06_t1

0x1fb5,	// (0x00027e63) main_cam6_set_pane

0xd0b1,	// (0x00032f5f) bg_tb_trans_pane_cp06_ParamLimits

0xd0c7,	// (0x00032f75) cam4_indicators_pane_g1_ParamLimits

0xd0d8,	// (0x00032f86) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x000357c4) cam4_indicators_pane_g_ParamLimits

0xd0f6,	// (0x00032fa4) cam4_indicators_pane_t1_ParamLimits

0xd118,	// (0x00032fc6) bg_tb_trans_pane_cp07_ParamLimits

0x1a75,	// (0x00027923) vid4_indicators_pane_g1_ParamLimits

0x1a82,	// (0x00027930) vid4_indicators_pane_g2_ParamLimits

0x1a8f,	// (0x0002793d) vid4_indicators_pane_g3_ParamLimits

0x1a9c,	// (0x0002794a) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x000357d6) vid4_indicators_pane_g_ParamLimits

0x1ab4,	// (0x00027962) vid4_indicators_pane_t1_ParamLimits

0xd7ca,	// (0x00033678) vid4_progress_pane_g1_ParamLimits

0xd7da,	// (0x00033688) vid4_progress_pane_g2_ParamLimits

0x488e,	// (0x0002a73c) vid4_progress_pane_g3_ParamLimits

0xd0d8,	// (0x00032f86) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x00035987) vid4_progress_pane_g_ParamLimits

0xd7ea,	// (0x00033698) vid4_progress_pane_t1_ParamLimits

0xd7ff,	// (0x000336ad) vid4_progress_pane_t2_ParamLimits

0xd815,	// (0x000336c3) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x00035992) vid4_progress_pane_t_ParamLimits

0xd82a,	// (0x000336d8) wait_bar_pane_cp07_ParamLimits

0x947e,	// (0x0002f32c) main_cam6_set_pane_g2_ParamLimits

0x947e,	// (0x0002f32c) main_cam6_set_pane_g2

0x94a2,	// (0x0002f350) main_cset6_listscroll_pane_ParamLimits

0x94a2,	// (0x0002f350) main_cset6_listscroll_pane

0x94be,	// (0x0002f36c) main_cset6_slider_pane_ParamLimits

0x94be,	// (0x0002f36c) main_cset6_slider_pane

0x94d4,	// (0x0002f382) main_cset6_text2_pane_ParamLimits

0x94d4,	// (0x0002f382) main_cset6_text2_pane

0xdc13,	// (0x00033ac1) main_cset6_text_pane

0xdc1b,	// (0x00033ac9) main_cset_list_pane_copy1_ParamLimits

0xdc1b,	// (0x00033ac9) main_cset_list_pane_copy1

0xdc2b,	// (0x00033ad9) scroll_pane_cp028_copy1

0x94e2,	// (0x0002f390) cset_list_set_pane_copy1

0x94f5,	// (0x0002f3a3) aid_position_infowindow_above_copy1

0x94fd,	// (0x0002f3ab) aid_position_infowindow_below_copy1

0xdc34,	// (0x00033ae2) cset_list_set_pane_g1_copy1

0xdc3c,	// (0x00033aea) cset_list_set_pane_g3_copy1_ParamLimits

0xdc3c,	// (0x00033aea) cset_list_set_pane_g3_copy1

0xdc4b,	// (0x00033af9) cset_list_set_pane_t1_copy1_ParamLimits

0xdc4b,	// (0x00033af9) cset_list_set_pane_t1_copy1

0x2227,	// (0x000280d5) list_highlight_pane_cp021_copy1_ParamLimits

0x2227,	// (0x000280d5) list_highlight_pane_cp021_copy1

0xdc60,	// (0x00033b0e) cset6_slider_pane_ParamLimits

0xdc60,	// (0x00033b0e) cset6_slider_pane

0xdc8c,	// (0x00033b3a) main_cset6_slider_pane_g1_ParamLimits

0xdc8c,	// (0x00033b3a) main_cset6_slider_pane_g1

0x9505,	// (0x0002f3b3) main_cset6_slider_pane_g2_ParamLimits

0x9505,	// (0x0002f3b3) main_cset6_slider_pane_g2

0xd30a,	// (0x000331b8) main_cset6_slider_pane_g3_ParamLimits

0xd30a,	// (0x000331b8) main_cset6_slider_pane_g3

0x86e1,	// (0x0002e58f) main_cset6_slider_pane_g4_ParamLimits

0x86e1,	// (0x0002e58f) main_cset6_slider_pane_g4

0x8729,	// (0x0002e5d7) main_cset6_slider_pane_g5_ParamLimits

0x8729,	// (0x0002e5d7) main_cset6_slider_pane_g5

0xd30a,	// (0x000331b8) main_cset6_slider_pane_g7_ParamLimits

0xd30a,	// (0x000331b8) main_cset6_slider_pane_g7

0xd316,	// (0x000331c4) main_cset6_slider_pane_g8_ParamLimits

0xd316,	// (0x000331c4) main_cset6_slider_pane_g8

0x86c9,	// (0x0002e577) main_cset6_slider_pane_g9_ParamLimits

0x86c9,	// (0x0002e577) main_cset6_slider_pane_g9

0x86d5,	// (0x0002e583) main_cset6_slider_pane_g10_ParamLimits

0x86d5,	// (0x0002e583) main_cset6_slider_pane_g10

0x86e1,	// (0x0002e58f) main_cset6_slider_pane_g11_ParamLimits

0x86e1,	// (0x0002e58f) main_cset6_slider_pane_g11

0x86ed,	// (0x0002e59b) main_cset6_slider_pane_g12_ParamLimits

0x86ed,	// (0x0002e59b) main_cset6_slider_pane_g12

0x86f9,	// (0x0002e5a7) main_cset6_slider_pane_g13_ParamLimits

0x86f9,	// (0x0002e5a7) main_cset6_slider_pane_g13

0x8705,	// (0x0002e5b3) main_cset6_slider_pane_g14_ParamLimits

0x8705,	// (0x0002e5b3) main_cset6_slider_pane_g14

0x952d,	// (0x0002f3db) main_cset6_slider_pane_g15_ParamLimits

0x952d,	// (0x0002f3db) main_cset6_slider_pane_g15

0x8729,	// (0x0002e5d7) main_cset6_slider_pane_g16_ParamLimits

0x8729,	// (0x0002e5d7) main_cset6_slider_pane_g16

0x8735,	// (0x0002e5e3) main_cset6_slider_pane_g17_ParamLimits

0x8735,	// (0x0002e5e3) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x00035a5f) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x00035a5f) main_cset6_slider_pane_g

0xdcb4,	// (0x00033b62) main_cset6_slider_pane_t1_ParamLimits

0xdcb4,	// (0x00033b62) main_cset6_slider_pane_t1

0x9545,	// (0x0002f3f3) main_cset6_slider_pane_t2_ParamLimits

0x9545,	// (0x0002f3f3) main_cset6_slider_pane_t2

0x9570,	// (0x0002f41e) main_cset6_slider_pane_t3_ParamLimits

0x9570,	// (0x0002f41e) main_cset6_slider_pane_t3

0x959b,	// (0x0002f449) main_cset6_slider_pane_t4_ParamLimits

0x959b,	// (0x0002f449) main_cset6_slider_pane_t4

0x95c6,	// (0x0002f474) main_cset6_slider_pane_t5_ParamLimits

0x95c6,	// (0x0002f474) main_cset6_slider_pane_t5

0xdcf5,	// (0x00033ba3) main_cset6_slider_pane_t7_ParamLimits

0xdcf5,	// (0x00033ba3) main_cset6_slider_pane_t7

0x95f1,	// (0x0002f49f) main_cset6_slider_pane_t8_ParamLimits

0x95f1,	// (0x0002f49f) main_cset6_slider_pane_t8

0x9615,	// (0x0002f4c3) main_cset6_slider_pane_t9_ParamLimits

0x9615,	// (0x0002f4c3) main_cset6_slider_pane_t9

0x9639,	// (0x0002f4e7) main_cset6_slider_pane_t10_ParamLimits

0x9639,	// (0x0002f4e7) main_cset6_slider_pane_t10

0x965d,	// (0x0002f50b) main_cset6_slider_pane_t11_ParamLimits

0x965d,	// (0x0002f50b) main_cset6_slider_pane_t11

0xdd2b,	// (0x00033bd9) main_cset6_slider_pane_t14_ParamLimits

0xdd2b,	// (0x00033bd9) main_cset6_slider_pane_t14

0xdd64,	// (0x00033c12) main_cset6_slider_pane_t15_ParamLimits

0xdd64,	// (0x00033c12) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x00035a84) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x00035a84) main_cset6_slider_pane_t

0xdd9d,	// (0x00033c4b) cset_slider_pane_g1_copy1

0xdda6,	// (0x00033c54) cset_slider_pane_g2_copy1

0xddaf,	// (0x00033c5d) cset_slider_pane_g3_copy1

0x1fb5,	// (0x00027e63) bg_popup_sub_pane_cp011_copy1

0xd4ed,	// (0x0003339b) main_cset_text_pane_g1_copy1

0xd4f5,	// (0x000333a3) main_cset_text_pane_t1_copy1

0xd503,	// (0x000333b1) main_cset_text_pane_t2_copy1

0xd511,	// (0x000333bf) main_cset_text_pane_t3_copy1

0xd51f,	// (0x000333cd) main_cset_text_pane_t4_copy1

0xd52d,	// (0x000333db) main_cset_text_pane_t5_copy1

0xd53b,	// (0x000333e9) main_cset_text_pane_t6_copy1

0xd549,	// (0x000333f7) main_cset_text_pane_t7_copy1

0x945e,	// (0x0002f30c) main_cset_text2_pane_t1_copy1

0x1fb5,	// (0x00027e63) main_ncimui_pane

0x6b21,	// (0x0002c9cf) popup_query_ncimui_window_ParamLimits

0x6b21,	// (0x0002c9cf) popup_query_ncimui_window

0xc6b7,	// (0x00032565) field_cale_ev2_pane_g4_ParamLimits

0xc6b7,	// (0x00032565) field_cale_ev2_pane_g4

0x80e2,	// (0x0002df90) cell_video_dialer_keypad_pane_g2_ParamLimits

0x80e2,	// (0x0002df90) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x00035762) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x00035762) cell_video_dialer_keypad_pane_g

0x80fa,	// (0x0002dfa8) cell_video_dialer_keypad_pane_t1

0x1fb5,	// (0x00027e63) bg_popup_window_pane_cp012

0x4bef,	// (0x0002aa9d) heading_pane_cp06

0xdea7,	// (0x00033d55) ncim_query_content_pane

0x1fb5,	// (0x00027e63) bg_popup_heading_pane_cp01

0xdeaf,	// (0x00033d5d) ncim_heading_pane_t1

0xdebd,	// (0x00033d6b) ncim_indicator_popup_pane

0xdecf,	// (0x00033d7d) ncim_query_button_pane

0xdee3,	// (0x00033d91) ncim_query_content_pane_t1

0xdef5,	// (0x00033da3) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x00035ac3) ncim_query_content_pane_t

0xdf2f,	// (0x00033ddd) ncim_query_list_pane

0xdf41,	// (0x00033def) ncim_query_popup_pane

0xdebd,	// (0x00033d6b) ncim_indicator_popup_pane_ParamLimits

0x977a,	// (0x0002f628) ncim_query_content_pane_g1_ParamLimits

0x977a,	// (0x0002f628) ncim_query_content_pane_g1

0xdee3,	// (0x00033d91) ncim_query_content_pane_t1_ParamLimits

0xdef5,	// (0x00033da3) ncim_query_content_pane_t2_ParamLimits

0x9786,	// (0x0002f634) ncim_query_content_pane_t3_ParamLimits

0x9786,	// (0x0002f634) ncim_query_content_pane_t3

0x97ae,	// (0x0002f65c) ncim_query_content_pane_t4_ParamLimits

0x97ae,	// (0x0002f65c) ncim_query_content_pane_t4

0x97d6,	// (0x0002f684) ncim_query_content_pane_t5_ParamLimits

0x97d6,	// (0x0002f684) ncim_query_content_pane_t5

0xdf07,	// (0x00033db5) ncim_query_content_pane_t6_ParamLimits

0xdf07,	// (0x00033db5) ncim_query_content_pane_t6

0xfc15,	// (0x00035ac3) ncim_query_content_pane_t_ParamLimits

0xdf2f,	// (0x00033ddd) ncim_query_list_pane_ParamLimits

0xdf41,	// (0x00033def) ncim_query_popup_pane_ParamLimits

0xdf55,	// (0x00033e03) wait_bar_pane_cp04

0x1fb5,	// (0x00027e63) input_focus_pane_cp011

0xdf5d,	// (0x00033e0b) ncim_query_popup_pane_t1

0xdf6b,	// (0x00033e19) ncim_list_query_list_pane_ParamLimits

0xdf6b,	// (0x00033e19) ncim_list_query_list_pane

0x1fb5,	// (0x00027e63) bg_button_pane_cp027

0xdf7e,	// (0x00033e2c) ncim_query_button_pane_g1

0x1fb5,	// (0x00027e63) list_highlight_pane_cp012

0xdf88,	// (0x00033e36) ncim_list_query_list_pane_g1

0xdf90,	// (0x00033e3e) ncim_list_query_list_pane_t1

0xd0e7,	// (0x00032f95) cam4_indicators_pane_g3_ParamLimits

0xd0e7,	// (0x00032f95) cam4_indicators_pane_g3

0x1aa8,	// (0x00027956) vid4_indicators_pane_g5_ParamLimits

0x1aa8,	// (0x00027956) vid4_indicators_pane_g5

0xd0e7,	// (0x00032f95) vid4_progress_pane_g5_ParamLimits

0xd0e7,	// (0x00032f95) vid4_progress_pane_g5

0x9693,	// (0x0002f541) main_ncimui_pane_g1

0x96e9,	// (0x0002f597) ncimui_group_query_pane_ParamLimits

0x96e9,	// (0x0002f597) ncimui_group_query_pane

0x9725,	// (0x0002f5d3) ncimui_list_pane_ParamLimits

0x9725,	// (0x0002f5d3) ncimui_list_pane

0x9746,	// (0x0002f5f4) ncimui_text_pane_ParamLimits

0x9746,	// (0x0002f5f4) ncimui_text_pane

0x97fe,	// (0x0002f6ac) ncimui_text_pane_t1_ParamLimits

0x97fe,	// (0x0002f6ac) ncimui_text_pane_t1

0xdf9e,	// (0x00033e4c) ncimui_list_single_graphic_pane_ParamLimits

0xdf9e,	// (0x00033e4c) ncimui_list_single_graphic_pane

0x981c,	// (0x0002f6ca) ncimui_query_pane_ParamLimits

0x981c,	// (0x0002f6ca) ncimui_query_pane

0x1fb5,	// (0x00027e63) list_highlight_pane_cp013

0xdfae,	// (0x00033e5c) ncim_list_query_list_pane_t1_copy1

0xdf88,	// (0x00033e36) ncim_list_single_graphic_pane_g1

0xdfbc,	// (0x00033e6a) ncim_query_button_pane_cp01

0xdfc8,	// (0x00033e76) ncim_query_entry_pane_ParamLimits

0xdfc8,	// (0x00033e76) ncim_query_entry_pane

0xdfdb,	// (0x00033e89) ncimui_query_pane_g1

0xdfe7,	// (0x00033e95) ncimui_query_pane_t1_ParamLimits

0xdfe7,	// (0x00033e95) ncimui_query_pane_t1

0x2227,	// (0x000280d5) input_focus_pane_cp012

0xe000,	// (0x00033eae) ncim_query_entry_pane_t1

0x2c29,	// (0x00028ad7) main_im_pane_ParamLimits

0x2227,	// (0x000280d5) main_mobtv_pane_ParamLimits

0x2227,	// (0x000280d5) main_mobtv_pane

0x86c9,	// (0x0002e577) main_cset6_slider_pane_g18_ParamLimits

0x86c9,	// (0x0002e577) main_cset6_slider_pane_g18

0x86f9,	// (0x0002e5a7) main_cset6_slider_pane_g19_ParamLimits

0x86f9,	// (0x0002e5a7) main_cset6_slider_pane_g19

0xe012,	// (0x00033ec0) bg_main_mobtv_pane_ParamLimits

0xe012,	// (0x00033ec0) bg_main_mobtv_pane

0x982f,	// (0x0002f6dd) main_mobtv_info_pane

0x9838,	// (0x0002f6e6) main_mobtv_loading_pane_ParamLimits

0x9838,	// (0x0002f6e6) main_mobtv_loading_pane

0xe020,	// (0x00033ece) main_mobtv_pg_channel_list_pane

0xe02a,	// (0x00033ed8) main_mobtv_pg_hdr_pane

0x9845,	// (0x0002f6f3) main_mobtv_programe_curr_pane_ParamLimits

0x9845,	// (0x0002f6f3) main_mobtv_programe_curr_pane

0x9852,	// (0x0002f700) main_mobtv_programe_next_pane_ParamLimits

0x9852,	// (0x0002f700) main_mobtv_programe_next_pane

0xe033,	// (0x00033ee1) popup_mobtv_noti_window

0xc3eb,	// (0x00032299) main_tv_pg_hdr_pane_g1

0xe03b,	// (0x00033ee9) main_tv_pg_hdr_pane_g2

0xe043,	// (0x00033ef1) main_tv_pg_hdr_pane_g3

0xe04b,	// (0x00033ef9) main_tv_pg_hdr_pane_g4

0xe053,	// (0x00033f01) main_tv_pg_hdr_pane_g5

0xe05d,	// (0x00033f0b) main_tv_pg_hdr_pane_g6

0xe067,	// (0x00033f15) main_tv_pg_hdr_pane_g7

0xe071,	// (0x00033f1f) main_tv_pg_hdr_pane_g8

0xe07b,	// (0x00033f29) main_tv_pg_hdr_pane_g9

0xe085,	// (0x00033f33) main_tv_pg_hdr_pane_g10

0xe08f,	// (0x00033f3d) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x00035ad0) main_tv_pg_hdr_pane_g

0xe099,	// (0x00033f47) main_tv_pg_hdr_pane_t1

0xe0a7,	// (0x00033f55) main_tv_pg_hdr_pane_t2

0xe0b5,	// (0x00033f63) main_tv_pg_hdr_pane_t3

0xe0c5,	// (0x00033f73) main_tv_pg_hdr_pane_t4

0xe0d5,	// (0x00033f83) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x00035ae7) main_tv_pg_hdr_pane_t

0xe0e5,	// (0x00033f93) single_mobtv_pg_channel_pane_ParamLimits

0xe0e5,	// (0x00033f93) single_mobtv_pg_channel_pane

0xe0f7,	// (0x00033fa5) single_mobtv_pg_channel_table_pane

0xe100,	// (0x00033fae) single_mobtv_pg_channel_thumb_pane

0xe109,	// (0x00033fb7) single_tv_pg_channel_pane_g1

0xe112,	// (0x00033fc0) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x00035af2) single_tv_pg_channel_pane_g

0xc652,	// (0x00032500) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc652,	// (0x00032500) bg_single_mobtv_pg_channel_thumb_pane

0xe11b,	// (0x00033fc9) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe11b,	// (0x00033fc9) single_mobtv_pg_channel_thumb_pane_g1

0xe129,	// (0x00033fd7) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe129,	// (0x00033fd7) single_mobtv_pg_channel_thumb_pane_g2

0xe135,	// (0x00033fe3) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe135,	// (0x00033fe3) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x00035af7) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x00035af7) single_mobtv_pg_channel_thumb_pane_g

0xe141,	// (0x00033fef) single_mobtv_pg_channel_thumb_pane_t1

0xe14f,	// (0x00033ffd) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x00035afe) single_mobtv_pg_channel_thumb_pane_t

0xc3eb,	// (0x00032299) bg_single_mobtv_pg_channel_table_pane_g1

0xc3eb,	// (0x00032299) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x000355ae) bg_single_mobtv_pg_channel_table_pane_g

0xe15d,	// (0x0003400b) single_mobtv_pg_channel_table_pane_t1

0xe16b,	// (0x00034019) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x00035b03) single_mobtv_pg_channel_table_pane_t

0x9867,	// (0x0002f715) main_mobtv_info_pane_g1_ParamLimits

0x9867,	// (0x0002f715) main_mobtv_info_pane_g1

0x9885,	// (0x0002f733) main_mobtv_info_pane_t1_ParamLimits

0x9885,	// (0x0002f733) main_mobtv_info_pane_t1

0x98fd,	// (0x0002f7ab) main_mobtv_info_pane_t2_ParamLimits

0x98fd,	// (0x0002f7ab) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x00035b0d) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x00035b0d) main_mobtv_info_pane_t

0x998c,	// (0x0002f83a) wait_bar_pane_cp05

0x999e,	// (0x0002f84c) main_mobtv_loading_pane_g1_ParamLimits

0x999e,	// (0x0002f84c) main_mobtv_loading_pane_g1

0x99b1,	// (0x0002f85f) main_mobtv_loading_pane_g2_ParamLimits

0x99b1,	// (0x0002f85f) main_mobtv_loading_pane_g2

0x99bd,	// (0x0002f86b) main_mobtv_loading_pane_g3_ParamLimits

0x99bd,	// (0x0002f86b) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x00035b14) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x00035b14) main_mobtv_loading_pane_g

0xe179,	// (0x00034027) main_mobtv_loading_pane_t1_ParamLimits

0xe179,	// (0x00034027) main_mobtv_loading_pane_t1

0xe191,	// (0x0003403f) main_mobtv_loading_pane_t2_ParamLimits

0xe191,	// (0x0003403f) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x00035b1b) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x00035b1b) main_mobtv_loading_pane_t

0x99d0,	// (0x0002f87e) wait_bar_pane_cp06_ParamLimits

0x99d0,	// (0x0002f87e) wait_bar_pane_cp06

0xe1b5,	// (0x00034063) main_mobtv_programe_curr_pane_t1

0xe1c3,	// (0x00034071) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x00035b20) main_mobtv_programe_curr_pane_t

0xe1d1,	// (0x0003407f) main_mobtv_programe_next_pane_t1

0xe1df,	// (0x0003408d) main_mobtv_programe_next_pane_t2

0xe1ed,	// (0x0003409b) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x00035b25) main_mobtv_programe_next_pane_t

0x1fb5,	// (0x00027e63) bg_popup_mobtv_noti_window_pane

0xe1fb,	// (0x000340a9) popup_mobtv_noti_window_g1

0xe203,	// (0x000340b1) popup_mobtv_noti_window_t1

0xe211,	// (0x000340bf) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x00035b2c) popup_mobtv_noti_window_t

0xc3eb,	// (0x00032299) bg_popup_mobtv_noti_window_pane_g1

0x1fb5,	// (0x00027e63) sc_clock_pane

0x1fb5,	// (0x00027e63) main_fs_bigclock_pane

0x91e3,	// (0x0002f091) blid2_tripm_pane_t4_ParamLimits

0x91e3,	// (0x0002f091) blid2_tripm_pane_t4

0x99df,	// (0x0002f88d) sc_clock_pane_g1_ParamLimits

0x99df,	// (0x0002f88d) sc_clock_pane_g1

0x99f1,	// (0x0002f89f) sc_clock_pane_t1_ParamLimits

0x99f1,	// (0x0002f89f) sc_clock_pane_t1

0x9a13,	// (0x0002f8c1) sc_clock_pane_t2_ParamLimits

0x9a13,	// (0x0002f8c1) sc_clock_pane_t2

0x9a2b,	// (0x0002f8d9) sc_clock_pane_t3_ParamLimits

0x9a2b,	// (0x0002f8d9) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x00035b31) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x00035b31) sc_clock_pane_t

0xa916,	// (0x000307c4) main_fs_bigclock_indicator_pane_ParamLimits

0xa916,	// (0x000307c4) main_fs_bigclock_indicator_pane

0xc622,	// (0x000324d0) main_fs_bigclock_pane_g1_ParamLimits

0xc622,	// (0x000324d0) main_fs_bigclock_pane_g1

0xa922,	// (0x000307d0) main_fs_bigclock_pane_t1_ParamLimits

0xa922,	// (0x000307d0) main_fs_bigclock_pane_t1

0xa934,	// (0x000307e2) main_fs_bigclock_pane_t2_ParamLimits

0xa934,	// (0x000307e2) main_fs_bigclock_pane_t2

0xa946,	// (0x000307f4) main_fs_bigclock_pane_t3_ParamLimits

0xa946,	// (0x000307f4) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x00035d2b) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x00035d2b) main_fs_bigclock_pane_t

0xed01,	// (0x00034baf) main_fs_bigclock_indicator_pane_g1

0xded7,	// (0x00033d85) ncim_query_content_pane_g2_ParamLimits

0xded7,	// (0x00033d85) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x00035abe) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x00035abe) ncim_query_content_pane_g

0x9a44,	// (0x0002f8f2) sc_clock_pane_t4_ParamLimits

0x9a44,	// (0x0002f8f2) sc_clock_pane_t4

0x2227,	// (0x000280d5) main_radioblah_pane

0xd00d,	// (0x00032ebb) cell_call4_button_pane_t1_copy1_ParamLimits

0xd00d,	// (0x00032ebb) cell_call4_button_pane_t1_copy1

0x969b,	// (0x0002f549) main_ncimui_pane_t1_ParamLimits

0x969b,	// (0x0002f549) main_ncimui_pane_t1

0x96b5,	// (0x0002f563) main_ncimui_pane_t2_ParamLimits

0x96b5,	// (0x0002f563) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x00035ab7) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x00035ab7) main_ncimui_pane_t

0xe21f,	// (0x000340cd) main_radioblah_anim_pane_ParamLimits

0xe21f,	// (0x000340cd) main_radioblah_anim_pane

0xe230,	// (0x000340de) main_radioblah_info_pane_ParamLimits

0xe230,	// (0x000340de) main_radioblah_info_pane

0xe244,	// (0x000340f2) main_radioblah_pane_t1_ParamLimits

0xe244,	// (0x000340f2) main_radioblah_pane_t1

0xe260,	// (0x0003410e) main_radioblah_pane_t2_ParamLimits

0xe260,	// (0x0003410e) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x00035b52) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x00035b52) main_radioblah_pane_t

0x9c14,	// (0x0002fac2) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9c14,	// (0x0002fac2) main_radioblah_rocker_ctrl_pane

0xe2a8,	// (0x00034156) main_radioblah_info_pane_t1_ParamLimits

0xe2a8,	// (0x00034156) main_radioblah_info_pane_t1

0x9c6c,	// (0x0002fb1a) main_radioblah_info_pane_t2_ParamLimits

0x9c6c,	// (0x0002fb1a) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x00035b5b) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x00035b5b) main_radioblah_info_pane_t

0xc3eb,	// (0x00032299) main_radioblah_rocker_ctrl_pane_g1

0x9d1e,	// (0x0002fbcc) main_radioblah_rocker_ctrl_pane_g2

0x9d26,	// (0x0002fbd4) main_radioblah_rocker_ctrl_pane_g3

0x9d2e,	// (0x0002fbdc) main_radioblah_rocker_ctrl_pane_g4

0x9d36,	// (0x0002fbe4) main_radioblah_rocker_ctrl_pane_g5

0x9d3e,	// (0x0002fbec) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x00035b64) main_radioblah_rocker_ctrl_pane_g

0x945e,	// (0x0002f30c) main_cset_text2_pane_t1_copy1_ParamLimits

0xd097,	// (0x00032f45) cam4_image_uncrop_qvga_pane

0xd110,	// (0x00032fbe) vid4_image_uncrop_qcif_pane

0xda20,	// (0x000338ce) cam6_image_uncrop_qvga_pane_ParamLimits

0xda20,	// (0x000338ce) cam6_image_uncrop_qvga_pane

0xdaf6,	// (0x000339a4) vid6_image_uncrop_qcif_pane_ParamLimits

0xdaf6,	// (0x000339a4) vid6_image_uncrop_qcif_pane

0x1fb5,	// (0x00027e63) bg_popup_preview_window_pane_cp03

0xde89,	// (0x00033d37) list_cset_text2_pane

0xde91,	// (0x00033d3f) main_cset6_text2_pane_g1

0xde99,	// (0x00033d47) main_cset6_text2_pane_t1

0x9d46,	// (0x0002fbf4) list_cset_text2_pane_t1_ParamLimits

0x9d46,	// (0x0002fbf4) list_cset_text2_pane_t1

0x2227,	// (0x000280d5) main_radioblah_pane_ParamLimits

0x9978,	// (0x0002f826) main_mobtv_info_pane_t3_ParamLimits

0x9978,	// (0x0002f826) main_mobtv_info_pane_t3

0x9c02,	// (0x0002fab0) main_radioblah_pane_g1

0x9c3c,	// (0x0002faea) main_radioblah_info_pane_g1

0x9cc3,	// (0x0002fb71) main_radioblah_info_pane_t3_ParamLimits

0x9cc3,	// (0x0002fb71) main_radioblah_info_pane_t3

0x45b4,	// (0x0002a462) highlight_cell_cale_month_pane_ParamLimits

0x45b4,	// (0x0002a462) highlight_cell_cale_month_pane

0x1fb5,	// (0x00027e63) main_phob_fisheye_pane

0xc76c,	// (0x0003261a) scroll_pane_cp0031_ParamLimits

0xc76c,	// (0x0003261a) scroll_pane_cp0031

0xdc04,	// (0x00033ab2) wait_bar_pane_cp08_ParamLimits

0x94e2,	// (0x0002f390) cset_list_set_pane_copy1_ParamLimits

0xe2e2,	// (0x00034190) highlight_cell_cale_month_pane_g1

0x9d63,	// (0x0002fc11) highlight_cell_cale_month_pane_t1

0xd7b9,	// (0x00033667) list_gen_pane_cp01

0xd2f5,	// (0x000331a3) scroll_pane_01

0xe2ea,	// (0x00034198) list_single_double_fisheye_pane

0xe2f3,	// (0x000341a1) list_double_fisheye_pane_g1_ParamLimits

0xe2f3,	// (0x000341a1) list_double_fisheye_pane_g1

0xe2ff,	// (0x000341ad) list_double_fisheye_pane_g2_ParamLimits

0xe2ff,	// (0x000341ad) list_double_fisheye_pane_g2

0x9d71,	// (0x0002fc1f) list_double_fisheye_pane_g3_ParamLimits

0x9d71,	// (0x0002fc1f) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x00035b71) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x00035b71) list_double_fisheye_pane_g

0x9d7d,	// (0x0002fc2b) list_double_fisheye_pane_t1_ParamLimits

0x9d7d,	// (0x0002fc2b) list_double_fisheye_pane_t1

0x9d98,	// (0x0002fc46) list_double_fisheye_pane_t2_ParamLimits

0x9d98,	// (0x0002fc46) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x00035b7c) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x00035b7c) list_double_fisheye_pane_t

0x1fb5,	// (0x00027e63) main_call5_pane

0x9a6f,	// (0x0002f91d) sc_swipe_pane_ParamLimits

0x9a6f,	// (0x0002f91d) sc_swipe_pane

0x9dcd,	// (0x0002fc7b) call5_image_pane_ParamLimits

0x9dcd,	// (0x0002fc7b) call5_image_pane

0x9dea,	// (0x0002fc98) call5_swipe_1_pane_ParamLimits

0x9dea,	// (0x0002fc98) call5_swipe_1_pane

0x9dfd,	// (0x0002fcab) call5_swipe_2_pane_ParamLimits

0x9dfd,	// (0x0002fcab) call5_swipe_2_pane

0x9e28,	// (0x0002fcd6) popup_call5_audio_first_window_ParamLimits

0x9e28,	// (0x0002fcd6) popup_call5_audio_first_window

0xc652,	// (0x00032500) call5_swipe_1_pane_g1_ParamLimits

0xc652,	// (0x00032500) call5_swipe_1_pane_g1

0xe330,	// (0x000341de) call5_swipe_1_pane_g2_ParamLimits

0xe330,	// (0x000341de) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x00035b81) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x00035b81) call5_swipe_1_pane_g

0xe33c,	// (0x000341ea) call5_swipe_1_pane_t1_ParamLimits

0xe33c,	// (0x000341ea) call5_swipe_1_pane_t1

0xc652,	// (0x00032500) call5_swipe_2_pane_g1_ParamLimits

0xc652,	// (0x00032500) call5_swipe_2_pane_g1

0xe351,	// (0x000341ff) call5_swipe_2_pane_g2_ParamLimits

0xe351,	// (0x000341ff) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x00035b86) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x00035b86) call5_swipe_2_pane_g

0xe35d,	// (0x0003420b) call5_swipe_2_pane_t1_ParamLimits

0xe35d,	// (0x0003420b) call5_swipe_2_pane_t1

0xe372,	// (0x00034220) sc_swipe_pane_g1_ParamLimits

0xe372,	// (0x00034220) sc_swipe_pane_g1

0xe37f,	// (0x0003422d) sc_swipe_pane_g2_ParamLimits

0xe37f,	// (0x0003422d) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x00035b8b) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x00035b8b) sc_swipe_pane_g

0xe38b,	// (0x00034239) sc_swipe_pane_t1_ParamLimits

0xe38b,	// (0x00034239) sc_swipe_pane_t1

0x1fb5,	// (0x00027e63) main_cmail_launcher_pane

0x9e39,	// (0x0002fce7) aid_size_cell_cmail_l_ParamLimits

0x9e39,	// (0x0002fce7) aid_size_cell_cmail_l

0x9e53,	// (0x0002fd01) grid_cmail_l_pane_ParamLimits

0x9e53,	// (0x0002fd01) grid_cmail_l_pane

0x9e6e,	// (0x0002fd1c) cell_cmail_l_pane_ParamLimits

0x9e6e,	// (0x0002fd1c) cell_cmail_l_pane

0x9e94,	// (0x0002fd42) cell_cmail_l_pane_g1_ParamLimits

0x9e94,	// (0x0002fd42) cell_cmail_l_pane_g1

0x9ea0,	// (0x0002fd4e) cell_cmail_l_pane_t1_ParamLimits

0x9ea0,	// (0x0002fd4e) cell_cmail_l_pane_t1

0xe3a0,	// (0x0003424e) cell_cmail_l_pane_t2_ParamLimits

0xe3a0,	// (0x0003424e) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x00035b90) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x00035b90) cell_cmail_l_pane_t

0x2227,	// (0x000280d5) grid_highlight_pane_cp018_ParamLimits

0x2227,	// (0x000280d5) grid_highlight_pane_cp018

0x20e1,	// (0x00027f8f) main2_pane_ParamLimits

0x20e1,	// (0x00027f8f) main2_pane

0x2da9,	// (0x00028c57) popup_sp_fs_action_menu_bg_pane_g1

0x2db1,	// (0x00028c5f) popup_sp_fs_action_menu_bg_pane_g2

0x2db9,	// (0x00028c67) popup_sp_fs_action_menu_bg_pane_g3

0x2dc1,	// (0x00028c6f) popup_sp_fs_action_menu_bg_pane_g4

0x2dc9,	// (0x00028c77) popup_sp_fs_action_menu_bg_pane_g5

0x2dd1,	// (0x00028c7f) popup_sp_fs_action_menu_bg_pane_g6

0x2dd9,	// (0x00028c87) popup_sp_fs_action_menu_bg_pane_g7

0x2de1,	// (0x00028c8f) popup_sp_fs_action_menu_bg_pane_g8

0x2de9,	// (0x00028c97) popup_sp_fs_action_menu_bg_pane_g9

0x2df1,	// (0x00028c9f) popup_sp_fs_action_menu_bg_pane_g10

0x2df1,	// (0x00028c9f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0003505a) popup_sp_fs_action_menu_bg_pane_g

0x3539,	// (0x000293e7) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3539,	// (0x000293e7) list_medium_line_x2_t3_g3_g1

0x3545,	// (0x000293f3) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3545,	// (0x000293f3) list_medium_line_x2_t3_g3_g2

0x3551,	// (0x000293ff) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3551,	// (0x000293ff) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0003510a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0003510a) list_medium_line_x2_t3_g3_g

0x355d,	// (0x0002940b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x355d,	// (0x0002940b) list_medium_line_x2_t3_g3_t1

0x3572,	// (0x00029420) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3572,	// (0x00029420) list_medium_line_x2_t3_g3_t2

0x3586,	// (0x00029434) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3586,	// (0x00029434) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00035111) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00035111) list_medium_line_x2_t3_g3_t

0x3539,	// (0x000293e7) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3539,	// (0x000293e7) list_medium_line_x2_t3_g2_g1

0x3551,	// (0x000293ff) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3551,	// (0x000293ff) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00035118) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00035118) list_medium_line_x2_t3_g2_g

0x359b,	// (0x00029449) list_medium_line_x2_t3_g2_t1_ParamLimits

0x359b,	// (0x00029449) list_medium_line_x2_t3_g2_t1

0x35b1,	// (0x0002945f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x35b1,	// (0x0002945f) list_medium_line_x2_t3_g2_t2

0x35c3,	// (0x00029471) list_medium_line_x2_t3_g2_t3_ParamLimits

0x35c3,	// (0x00029471) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0003511d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0003511d) list_medium_line_x2_t3_g2_t

0x3539,	// (0x000293e7) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3539,	// (0x000293e7) list_medium_line_x2_t4_g4_g1

0x35e0,	// (0x0002948e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x35e0,	// (0x0002948e) list_medium_line_x2_t4_g4_g2

0x3545,	// (0x000293f3) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3545,	// (0x000293f3) list_medium_line_x2_t4_g4_g3

0x35ec,	// (0x0002949a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x35ec,	// (0x0002949a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00035124) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00035124) list_medium_line_x2_t4_g4_g

0x35f8,	// (0x000294a6) list_medium_line_x2_t4_g4_t1_ParamLimits

0x35f8,	// (0x000294a6) list_medium_line_x2_t4_g4_t1

0x360f,	// (0x000294bd) list_medium_line_x2_t4_g4_t2_ParamLimits

0x360f,	// (0x000294bd) list_medium_line_x2_t4_g4_t2

0x3624,	// (0x000294d2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3624,	// (0x000294d2) list_medium_line_x2_t4_g4_t3

0x3636,	// (0x000294e4) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3636,	// (0x000294e4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0003512d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0003512d) list_medium_line_x2_t4_g4_t

0x3539,	// (0x000293e7) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3539,	// (0x000293e7) list_medium_line_x2_t2_g4_g1

0x35e0,	// (0x0002948e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x35e0,	// (0x0002948e) list_medium_line_x2_t2_g4_g2

0x3545,	// (0x000293f3) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3545,	// (0x000293f3) list_medium_line_x2_t2_g4_g3

0x3551,	// (0x000293ff) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3551,	// (0x000293ff) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00035194) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00035194) list_medium_line_x2_t2_g4_g

0x45d2,	// (0x0002a480) list_medium_line_x2_t2_g4_t1_ParamLimits

0x45d2,	// (0x0002a480) list_medium_line_x2_t2_g4_t1

0x3586,	// (0x00029434) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3586,	// (0x00029434) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0003519d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0003519d) list_medium_line_x2_t2_g4_t

0x3539,	// (0x000293e7) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3539,	// (0x000293e7) list_medium_line_x2_t2_g3_g1

0x3545,	// (0x000293f3) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3545,	// (0x000293f3) list_medium_line_x2_t2_g3_g2

0x3551,	// (0x000293ff) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3551,	// (0x000293ff) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0003510a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0003510a) list_medium_line_x2_t2_g3_g

0x45e7,	// (0x0002a495) list_medium_line_x2_t2_g3_t1_ParamLimits

0x45e7,	// (0x0002a495) list_medium_line_x2_t2_g3_t1

0x3586,	// (0x00029434) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3586,	// (0x00029434) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x000351a2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x000351a2) list_medium_line_x2_t2_g3_t

0x4949,	// (0x0002a7f7) main_sp_fs_list_pane_ParamLimits

0x4949,	// (0x0002a7f7) main_sp_fs_list_pane

0x4955,	// (0x0002a803) sp_fs_scroll_pane_ParamLimits

0x4955,	// (0x0002a803) sp_fs_scroll_pane

0x4961,	// (0x0002a80f) list_medium_line_x2_t3_t1

0x4971,	// (0x0002a81f) list_medium_line_x2_t3_t2

0x497f,	// (0x0002a82d) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x000351ed) list_medium_line_x2_t3_t

0x498d,	// (0x0002a83b) list_medium_line_x3_t4_t1

0x499d,	// (0x0002a84b) list_medium_line_x3_t4_t2

0x49ab,	// (0x0002a859) list_medium_line_x3_t4_t3

0x497f,	// (0x0002a82d) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x000351f4) list_medium_line_x3_t4_t

0x49b9,	// (0x0002a867) list_medium_line_x4_t5_t1

0x49c9,	// (0x0002a877) list_medium_line_x4_t5_t2

0x49ab,	// (0x0002a859) list_medium_line_x4_t5_t3

0x49d7,	// (0x0002a885) list_medium_line_x4_t5_t4

0x497f,	// (0x0002a82d) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x000351fd) list_medium_line_x4_t5_t

0x3539,	// (0x000293e7) list_medium_line_t4_g4_g1_ParamLimits

0x3539,	// (0x000293e7) list_medium_line_t4_g4_g1

0x35ec,	// (0x0002949a) list_medium_line_t4_g4_g2_ParamLimits

0x35ec,	// (0x0002949a) list_medium_line_t4_g4_g2

0x49e5,	// (0x0002a893) list_medium_line_t4_g4_g3_ParamLimits

0x49e5,	// (0x0002a893) list_medium_line_t4_g4_g3

0x3551,	// (0x000293ff) list_medium_line_t4_g4_g4_ParamLimits

0x3551,	// (0x000293ff) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00035208) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00035208) list_medium_line_t4_g4_g

0x49f1,	// (0x0002a89f) list_medium_line_t4_g4_t1_ParamLimits

0x49f1,	// (0x0002a89f) list_medium_line_t4_g4_t1

0x4a06,	// (0x0002a8b4) list_medium_line_t4_g4_t2_ParamLimits

0x4a06,	// (0x0002a8b4) list_medium_line_t4_g4_t2

0x4a1b,	// (0x0002a8c9) list_medium_line_t4_g4_t3_ParamLimits

0x4a1b,	// (0x0002a8c9) list_medium_line_t4_g4_t3

0x3586,	// (0x00029434) list_medium_line_t4_g4_t4_ParamLimits

0x3586,	// (0x00029434) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00035211) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00035211) list_medium_line_t4_g4_t

0x4d5b,	// (0x0002ac09) chi_dic_find_pane_g1

0x68ff,	// (0x0002c7ad) main_tport_pane

0xd43a,	// (0x000332e8) list_medium_line_plain_t1

0xd48c,	// (0x0003333a) list_medium_line_t2_g2_g1_ParamLimits

0xd48c,	// (0x0003333a) list_medium_line_t2_g2_g1

0xd498,	// (0x00033346) list_medium_line_t2_g2_g2_ParamLimits

0xd498,	// (0x00033346) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x000358cd) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x000358cd) list_medium_line_t2_g2_g

0x8a13,	// (0x0002e8c1) list_medium_line_t2_g2_t1_ParamLimits

0x8a13,	// (0x0002e8c1) list_medium_line_t2_g2_t1

0x8a2d,	// (0x0002e8db) list_medium_line_t2_g2_t2_ParamLimits

0x8a2d,	// (0x0002e8db) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x000358d2) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x000358d2) list_medium_line_t2_g2_t

0xd83a,	// (0x000336e8) aid_sp_fs_list_icon_a_sm

0xd842,	// (0x000336f0) aid_sp_fs_list_icon_d

0xd84a,	// (0x000336f8) aid_sp_fs_text_primary

0xd853,	// (0x00033701) aid_sp_fs_text_secondary

0xd85c,	// (0x0003370a) list_medium_line

0xd85c,	// (0x0003370a) list_medium_line_g2

0xd85c,	// (0x0003370a) list_medium_line_g3

0xd85c,	// (0x0003370a) list_medium_line_plain

0xd85c,	// (0x0003370a) list_medium_line_plain_t2

0xd85c,	// (0x0003370a) list_medium_line_plain_t3

0xd85c,	// (0x0003370a) list_medium_line_right_icon

0xd85c,	// (0x0003370a) list_medium_line_right_iconx2

0xd85c,	// (0x0003370a) list_medium_line_t2

0xd85c,	// (0x0003370a) list_medium_line_t2_g2

0xd85c,	// (0x0003370a) list_medium_line_t2_g3

0xd85c,	// (0x0003370a) list_medium_line_t2_right_icon

0xd85c,	// (0x0003370a) list_medium_line_t2_right_iconx2

0xd85c,	// (0x0003370a) list_medium_line_t3

0xd85c,	// (0x0003370a) list_medium_line_t3_g2

0xd85c,	// (0x0003370a) list_medium_line_t3_g3

0xd85c,	// (0x0003370a) list_medium_line_t3_right_iconx2

0xd865,	// (0x00033713) list_medium_line_t4_g4

0xd86e,	// (0x0003371c) list_medium_line_x2

0xd86e,	// (0x0003371c) list_medium_line_x2_t2_g2

0xd86e,	// (0x0003371c) list_medium_line_x2_t2_g3

0xd86e,	// (0x0003371c) list_medium_line_x2_t2_g4

0xd86e,	// (0x0003371c) list_medium_line_x2_t3

0xd86e,	// (0x0003371c) list_medium_line_x2_t3_g2

0xd86e,	// (0x0003371c) list_medium_line_x2_t3_g3

0xd86e,	// (0x0003371c) list_medium_line_x2_t3_g4

0xd86e,	// (0x0003371c) list_medium_line_x2_t4_g2

0xd86e,	// (0x0003371c) list_medium_line_x2_t4_g4

0xd877,	// (0x00033725) list_medium_line_x3

0xd877,	// (0x00033725) list_medium_line_x3_t4

0xd877,	// (0x00033725) list_medium_line_x3_t4_g4

0xd865,	// (0x00033713) list_medium_line_x4_t4

0xd865,	// (0x00033713) list_medium_line_x4_t4_g7

0xd865,	// (0x00033713) list_medium_line_x4_t5

0xd880,	// (0x0003372e) list_single_fs_dyc_pane_ParamLimits

0xd880,	// (0x0003372e) list_single_fs_dyc_pane

0x3539,	// (0x000293e7) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3539,	// (0x000293e7) list_medium_line_x4_t4_g7_g1

0xddb8,	// (0x00033c66) list_medium_line_x4_t4_g7_g2_ParamLimits

0xddb8,	// (0x00033c66) list_medium_line_x4_t4_g7_g2

0xddc4,	// (0x00033c72) list_medium_line_x4_t4_g7_g3_ParamLimits

0xddc4,	// (0x00033c72) list_medium_line_x4_t4_g7_g3

0xddd3,	// (0x00033c81) list_medium_line_x4_t4_g7_g4_ParamLimits

0xddd3,	// (0x00033c81) list_medium_line_x4_t4_g7_g4

0xdddf,	// (0x00033c8d) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdddf,	// (0x00033c8d) list_medium_line_x4_t4_g7_g5

0xddee,	// (0x00033c9c) list_medium_line_x4_t4_g7_g6_ParamLimits

0xddee,	// (0x00033c9c) list_medium_line_x4_t4_g7_g6

0xddfd,	// (0x00033cab) list_medium_line_x4_t4_g7_g7_ParamLimits

0xddfd,	// (0x00033cab) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x00035a9d) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x00035a9d) list_medium_line_x4_t4_g7_g

0xde09,	// (0x00033cb7) list_medium_line_x4_t4_g7_t1_ParamLimits

0xde09,	// (0x00033cb7) list_medium_line_x4_t4_g7_t1

0xde1e,	// (0x00033ccc) list_medium_line_x4_t4_g7_t2_ParamLimits

0xde1e,	// (0x00033ccc) list_medium_line_x4_t4_g7_t2

0xde33,	// (0x00033ce1) list_medium_line_x4_t4_g7_t3_ParamLimits

0xde33,	// (0x00033ce1) list_medium_line_x4_t4_g7_t3

0xde48,	// (0x00033cf6) list_medium_line_x4_t4_g7_t4_ParamLimits

0xde48,	// (0x00033cf6) list_medium_line_x4_t4_g7_t4

0xde5a,	// (0x00033d08) list_medium_line_x4_t4_g7_t5_ParamLimits

0xde5a,	// (0x00033d08) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x00035aac) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x00035aac) list_medium_line_x4_t4_g7_t

0xde6c,	// (0x00033d1a) list_single_dyc_row_pane_ParamLimits

0xde6c,	// (0x00033d1a) list_single_dyc_row_pane

0x9dba,	// (0x0002fc68) call5_gesture_pane_ParamLimits

0x9dba,	// (0x0002fc68) call5_gesture_pane

0x9e10,	// (0x0002fcbe) call5_windows_pane_ParamLimits

0x9e10,	// (0x0002fcbe) call5_windows_pane

0x9eb6,	// (0x0002fd64) call5_swipe_1_pane_cp_ParamLimits

0x9eb6,	// (0x0002fd64) call5_swipe_1_pane_cp

0x9ec2,	// (0x0002fd70) call5_swipe_2_pane_cp_ParamLimits

0x9ec2,	// (0x0002fd70) call5_swipe_2_pane_cp

0x51c7,	// (0x0002b075) call5_image_pane_cp

0x9ece,	// (0x0002fd7c) popup_call5_audio_first_window_cp_ParamLimits

0x9ece,	// (0x0002fd7c) popup_call5_audio_first_window_cp

0xe372,	// (0x00034220) call5_swipe_1_pane_g1_cp_ParamLimits

0xe372,	// (0x00034220) call5_swipe_1_pane_g1_cp

0xe3b2,	// (0x00034260) call5_swipe_1_pane_g2_cp

0xe38b,	// (0x00034239) call5_swipe_1_pane_t1_cp_ParamLimits

0xe38b,	// (0x00034239) call5_swipe_1_pane_t1_cp

0xe372,	// (0x00034220) call5_swipe_2_pane_g1_cp_ParamLimits

0xe372,	// (0x00034220) call5_swipe_2_pane_g1_cp

0xe3ba,	// (0x00034268) call5_swipe_2_pane_g2_cp

0xe3c2,	// (0x00034270) call5_swipe_2_pane_t1_cp_ParamLimits

0xe3c2,	// (0x00034270) call5_swipe_2_pane_t1_cp

0x2227,	// (0x000280d5) main_sp_fs_email_pane

0xe3d7,	// (0x00034285) main_sp_fs_listscroll_pane_te

0xe3e0,	// (0x0003428e) popup_sp_fs_action_menu_pane_ParamLimits

0xe3e0,	// (0x0003428e) popup_sp_fs_action_menu_pane

0xc3eb,	// (0x00032299) bg_sp_fs_ctrlbar_pane_g1

0xe420,	// (0x000342ce) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe429,	// (0x000342d7) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe432,	// (0x000342e0) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc3eb,	// (0x00032299) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x00035b95) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc1ce,	// (0x0003207c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc1ce,	// (0x0003207c) bg_sp_fs_ctrlbar_ddmenu_pane

0xe43b,	// (0x000342e9) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe43b,	// (0x000342e9) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe447,	// (0x000342f5) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe447,	// (0x000342f5) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x00035b9e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x00035b9e) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe453,	// (0x00034301) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe453,	// (0x00034301) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe46d,	// (0x0003431b) list_medium_line_t2_right_icon_g1

0x9eda,	// (0x0002fd88) list_medium_line_t2_right_icon_t1

0x9eea,	// (0x0002fd98) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x00035ba3) list_medium_line_t2_right_icon_t

0xbee3,	// (0x00031d91) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbee3,	// (0x00031d91) bg_sp_fs_ctrlbar_pane

0x9f44,	// (0x0002fdf2) main_sp_fs_ctrlbar_button_pane_cp01

0x9f4e,	// (0x0002fdfc) main_sp_fs_ctrlbar_ddmenu_pane

0x3539,	// (0x000293e7) main_sp_fs_ctrlbar_pane_g1

0xe4ad,	// (0x0003435b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x00035ba8) main_sp_fs_ctrlbar_pane_g

0xe4b9,	// (0x00034367) main_sp_fs_ctrlbar_pane_t1

0x9f58,	// (0x0002fe06) main_sp_fs_ctrlbar_pane

0x9f7c,	// (0x0002fe2a) main_sp_fs_listscroll_pane_te_cp01

0x9f9c,	// (0x0002fe4a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9f9c,	// (0x0002fe4a) popup_sp_fs_action_menu_pane_cp01

0x2227,	// (0x000280d5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x2227,	// (0x000280d5) bg_sp_fs_highlight_list_pane_cp01

0xe4ce,	// (0x0003437c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe4ce,	// (0x0003437c) sp_fs_action_menu_list_gene_pane_g1

0xe4dd,	// (0x0003438b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe4dd,	// (0x0003438b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00035bad) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00035bad) sp_fs_action_menu_list_gene_pane_g

0xe4ea,	// (0x00034398) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe4ea,	// (0x00034398) sp_fs_action_menu_list_gene_pane_t1

0xe502,	// (0x000343b0) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe502,	// (0x000343b0) sp_fs_action_menu_list_gene_pane

0xe51f,	// (0x000343cd) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe51f,	// (0x000343cd) popup_sp_fs_action_menu_bg_pane

0xe52d,	// (0x000343db) sp_fs_action_menu_list_pane_ParamLimits

0xe52d,	// (0x000343db) sp_fs_action_menu_list_pane

0xe54b,	// (0x000343f9) sp_fs_scroll_pane_cp01_ParamLimits

0xe54b,	// (0x000343f9) sp_fs_scroll_pane_cp01

0x9fb6,	// (0x0002fe64) list_medium_line_plain_t2_t1

0x9fc6,	// (0x0002fe74) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x00035bb2) list_medium_line_plain_t2_t

0x9fd6,	// (0x0002fe84) list_medium_line_plain_t3_t1

0x9fe6,	// (0x0002fe94) list_medium_line_plain_t3_t2

0x9ff4,	// (0x0002fea2) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x00035bb7) list_medium_line_plain_t3_t

0x3539,	// (0x000293e7) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3539,	// (0x000293e7) list_medium_line_x2_t2_g2_g1

0x3551,	// (0x000293ff) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3551,	// (0x000293ff) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00035118) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00035118) list_medium_line_x2_t2_g2_g

0x49f1,	// (0x0002a89f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x49f1,	// (0x0002a89f) list_medium_line_x2_t2_g2_t1

0x3586,	// (0x00029434) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3586,	// (0x00029434) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00035bbe) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00035bbe) list_medium_line_x2_t2_g2_t

0x3539,	// (0x000293e7) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3539,	// (0x000293e7) list_medium_line_x2_t4_g2_g1

0x3551,	// (0x000293ff) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3551,	// (0x000293ff) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x00035118) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x00035118) list_medium_line_x2_t4_g2_g

0xa002,	// (0x0002feb0) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa002,	// (0x0002feb0) list_medium_line_x2_t4_g2_t1

0xa019,	// (0x0002fec7) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa019,	// (0x0002fec7) list_medium_line_x2_t4_g2_t2

0xa02e,	// (0x0002fedc) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa02e,	// (0x0002fedc) list_medium_line_x2_t4_g2_t3

0x3586,	// (0x00029434) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3586,	// (0x00029434) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x00035bc3) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x00035bc3) list_medium_line_x2_t4_g2_t

0xe571,	// (0x0003441f) list_medium_line_t3_right_iconx2_g1

0xe46d,	// (0x0003431b) list_medium_line_t3_right_iconx2_g2

0xa040,	// (0x0002feee) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x00035bcc) list_medium_line_t3_right_iconx2_g

0xa04a,	// (0x0002fef8) list_medium_line_t3_right_iconx2_t1

0xa05a,	// (0x0002ff08) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x00035bd3) list_medium_line_t3_right_iconx2_t

0x3539,	// (0x000293e7) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3539,	// (0x000293e7) list_medium_line_x3_t4_g4_g1

0x3545,	// (0x000293f3) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3545,	// (0x000293f3) list_medium_line_x3_t4_g4_g2

0x35ec,	// (0x0002949a) list_medium_line_x3_t4_g4_g3_ParamLimits

0x35ec,	// (0x0002949a) list_medium_line_x3_t4_g4_g3

0xe579,	// (0x00034427) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe579,	// (0x00034427) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x00035bd8) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x00035bd8) list_medium_line_x3_t4_g4_g

0xa068,	// (0x0002ff16) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa068,	// (0x0002ff16) list_medium_line_x3_t4_g4_t1

0xa07f,	// (0x0002ff2d) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa07f,	// (0x0002ff2d) list_medium_line_x3_t4_g4_t2

0x4a06,	// (0x0002a8b4) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4a06,	// (0x0002a8b4) list_medium_line_x3_t4_g4_t3

0xe585,	// (0x00034433) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe585,	// (0x00034433) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x00035be1) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x00035be1) list_medium_line_x3_t4_g4_t

0xa09a,	// (0x0002ff48) list_single_dyc_row_text_pane_t1_ParamLimits

0xa09a,	// (0x0002ff48) list_single_dyc_row_text_pane_t1

0xa0e3,	// (0x0002ff91) list_single_dyc_row_text_pane_t2_ParamLimits

0xa0e3,	// (0x0002ff91) list_single_dyc_row_text_pane_t2

0xe5a2,	// (0x00034450) list_single_dyc_row_text_pane_t3_ParamLimits

0xe5a2,	// (0x00034450) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x00035bea) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x00035bea) list_single_dyc_row_text_pane_t

0xe5b4,	// (0x00034462) list_single_dyc_row_pane_g1_ParamLimits

0xe5b4,	// (0x00034462) list_single_dyc_row_pane_g1

0xe5c0,	// (0x0003446e) list_single_dyc_row_pane_g2_ParamLimits

0xe5c0,	// (0x0003446e) list_single_dyc_row_pane_g2

0xe5cc,	// (0x0003447a) list_single_dyc_row_pane_g3_ParamLimits

0xe5cc,	// (0x0003447a) list_single_dyc_row_pane_g3

0xe5d8,	// (0x00034486) list_single_dyc_row_pane_g4_ParamLimits

0xe5d8,	// (0x00034486) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x00035bf1) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x00035bf1) list_single_dyc_row_pane_g

0xe5e4,	// (0x00034492) list_single_dyc_row_text_pane_ParamLimits

0xe5e4,	// (0x00034492) list_single_dyc_row_text_pane

0x1fb5,	// (0x00027e63) bg_sp_fs_scroll_pane

0xe603,	// (0x000344b1) thumb_sp_fs_scroll_pane

0xd48c,	// (0x0003333a) list_medium_line_g1_ParamLimits

0xd48c,	// (0x0003333a) list_medium_line_g1

0xe60c,	// (0x000344ba) list_medium_line_t1_ParamLimits

0xe60c,	// (0x000344ba) list_medium_line_t1

0x3539,	// (0x000293e7) list_medium_line_x2_g1_ParamLimits

0x3539,	// (0x000293e7) list_medium_line_x2_g1

0x3545,	// (0x000293f3) list_medium_line_x2_g2_ParamLimits

0x3545,	// (0x000293f3) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x00035bfa) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x00035bfa) list_medium_line_x2_g

0xe621,	// (0x000344cf) list_medium_line_x2_t1_ParamLimits

0xe621,	// (0x000344cf) list_medium_line_x2_t1

0x3539,	// (0x000293e7) list_medium_line_x3_g1_ParamLimits

0x3539,	// (0x000293e7) list_medium_line_x3_g1

0x3545,	// (0x000293f3) list_medium_line_x3_g2_ParamLimits

0x3545,	// (0x000293f3) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x00035bfa) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x00035bfa) list_medium_line_x3_g

0xe621,	// (0x000344cf) list_medium_line_x3_t1_ParamLimits

0xe621,	// (0x000344cf) list_medium_line_x3_t1

0xe637,	// (0x000344e5) thumb_sp_fs_scroll_pane_g1

0xe640,	// (0x000344ee) thumb_sp_fs_scroll_pane_g2

0xe649,	// (0x000344f7) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00035bff) thumb_sp_fs_scroll_pane_g

0xe637,	// (0x000344e5) bg_sp_fs_scroll_pane_g1

0xe640,	// (0x000344ee) bg_sp_fs_scroll_pane_g2

0xe649,	// (0x000344f7) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00035bff) bg_sp_fs_scroll_pane_g

0x3539,	// (0x000293e7) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3539,	// (0x000293e7) list_medium_line_x2_t3_g4_g1

0x35e0,	// (0x0002948e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x35e0,	// (0x0002948e) list_medium_line_x2_t3_g4_g2

0x3545,	// (0x000293f3) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3545,	// (0x000293f3) list_medium_line_x2_t3_g4_g3

0x3551,	// (0x000293ff) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3551,	// (0x000293ff) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00035194) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00035194) list_medium_line_x2_t3_g4_g

0xa13d,	// (0x0002ffeb) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa13d,	// (0x0002ffeb) list_medium_line_x2_t3_g4_t1

0xa157,	// (0x00030005) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa157,	// (0x00030005) list_medium_line_x2_t3_g4_t2

0x3586,	// (0x00029434) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3586,	// (0x00029434) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x00035c06) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x00035c06) list_medium_line_x2_t3_g4_t

0xd48c,	// (0x0003333a) list_medium_line_g2_g1_ParamLimits

0xd48c,	// (0x0003333a) list_medium_line_g2_g1

0xd498,	// (0x00033346) list_medium_line_g2_g2_ParamLimits

0xd498,	// (0x00033346) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x000358cd) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x000358cd) list_medium_line_g2_g

0xe652,	// (0x00034500) list_medium_line_g2_t1_ParamLimits

0xe652,	// (0x00034500) list_medium_line_g2_t1

0xd48c,	// (0x0003333a) list_medium_line_t3_g2_g1_ParamLimits

0xd48c,	// (0x0003333a) list_medium_line_t3_g2_g1

0xd498,	// (0x00033346) list_medium_line_t3_g2_g2_ParamLimits

0xd498,	// (0x00033346) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x000358cd) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x000358cd) list_medium_line_t3_g2_g

0xa170,	// (0x0003001e) list_medium_line_t3_g2_t1_ParamLimits

0xa170,	// (0x0003001e) list_medium_line_t3_g2_t1

0xa18a,	// (0x00030038) list_medium_line_t3_g2_t2_ParamLimits

0xa18a,	// (0x00030038) list_medium_line_t3_g2_t2

0xa19f,	// (0x0003004d) list_medium_line_t3_g2_t3_ParamLimits

0xa19f,	// (0x0003004d) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x00035c0d) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x00035c0d) list_medium_line_t3_g2_t

0xe46d,	// (0x0003431b) list_medium_line_right_icon_g1

0xe667,	// (0x00034515) list_medium_line_right_icon_t1

0xd48c,	// (0x0003333a) list_medium_line_t2_g1_ParamLimits

0xd48c,	// (0x0003333a) list_medium_line_t2_g1

0xa1b9,	// (0x00030067) list_medium_line_t2_t1_ParamLimits

0xa1b9,	// (0x00030067) list_medium_line_t2_t1

0xa1d3,	// (0x00030081) list_medium_line_t2_t2_ParamLimits

0xa1d3,	// (0x00030081) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x00035c14) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x00035c14) list_medium_line_t2_t

0xd48c,	// (0x0003333a) list_medium_line_t3_g1_ParamLimits

0xd48c,	// (0x0003333a) list_medium_line_t3_g1

0xa1ec,	// (0x0003009a) list_medium_line_t3_t1_ParamLimits

0xa1ec,	// (0x0003009a) list_medium_line_t3_t1

0xa203,	// (0x000300b1) list_medium_line_t3_t2_ParamLimits

0xa203,	// (0x000300b1) list_medium_line_t3_t2

0xa218,	// (0x000300c6) list_medium_line_t3_t3_ParamLimits

0xa218,	// (0x000300c6) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x00035c19) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x00035c19) list_medium_line_t3_t

0xd48c,	// (0x0003333a) list_medium_line_g3_g1_ParamLimits

0xd48c,	// (0x0003333a) list_medium_line_g3_g1

0xe675,	// (0x00034523) list_medium_line_g3_g2_ParamLimits

0xe675,	// (0x00034523) list_medium_line_g3_g2

0xd498,	// (0x00033346) list_medium_line_g3_g3_ParamLimits

0xd498,	// (0x00033346) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x00035c20) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x00035c20) list_medium_line_g3_g

0xe681,	// (0x0003452f) list_medium_line_g3_t1_ParamLimits

0xe681,	// (0x0003452f) list_medium_line_g3_t1

0xd48c,	// (0x0003333a) list_medium_line_t2_g3_g1_ParamLimits

0xd48c,	// (0x0003333a) list_medium_line_t2_g3_g1

0xe675,	// (0x00034523) list_medium_line_t2_g3_g2_ParamLimits

0xe675,	// (0x00034523) list_medium_line_t2_g3_g2

0xd498,	// (0x00033346) list_medium_line_t2_g3_g3_ParamLimits

0xd498,	// (0x00033346) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x00035c20) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x00035c20) list_medium_line_t2_g3_g

0xa22a,	// (0x000300d8) list_medium_line_t2_g3_t1_ParamLimits

0xa22a,	// (0x000300d8) list_medium_line_t2_g3_t1

0xa241,	// (0x000300ef) list_medium_line_t2_g3_t2_ParamLimits

0xa241,	// (0x000300ef) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x00035c27) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x00035c27) list_medium_line_t2_g3_t

0xd48c,	// (0x0003333a) list_medium_line_t3_g3_g1_ParamLimits

0xd48c,	// (0x0003333a) list_medium_line_t3_g3_g1

0xe675,	// (0x00034523) list_medium_line_t3_g3_g2_ParamLimits

0xe675,	// (0x00034523) list_medium_line_t3_g3_g2

0xd498,	// (0x00033346) list_medium_line_t3_g3_g3_ParamLimits

0xd498,	// (0x00033346) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x00035c20) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x00035c20) list_medium_line_t3_g3_g

0xa25c,	// (0x0003010a) list_medium_line_t3_g3_t1_ParamLimits

0xa25c,	// (0x0003010a) list_medium_line_t3_g3_t1

0xa270,	// (0x0003011e) list_medium_line_t3_g3_t2_ParamLimits

0xa270,	// (0x0003011e) list_medium_line_t3_g3_t2

0xa282,	// (0x00030130) list_medium_line_t3_g3_t3_ParamLimits

0xa282,	// (0x00030130) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x00035c2c) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x00035c2c) list_medium_line_t3_g3_t

0xe571,	// (0x0003441f) list_medium_line_right_iconx2_g1

0xe46d,	// (0x0003431b) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x00035c33) list_medium_line_right_iconx2_g

0xe696,	// (0x00034544) list_medium_line_right_iconx2_t1

0xe571,	// (0x0003441f) list_medium_line_t2_right_iconx2_g1

0xe46d,	// (0x0003431b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x00035c33) list_medium_line_t2_right_iconx2_g

0xa296,	// (0x00030144) list_medium_line_t2_right_iconx2_t1

0xa2a6,	// (0x00030154) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x00035c38) list_medium_line_t2_right_iconx2_t

0xe6a4,	// (0x00034552) list_medium_line_x4_t4_t1

0xa2b8,	// (0x00030166) list_medium_line_x4_t4_t2

0xa2c8,	// (0x00030176) list_medium_line_x4_t4_t3

0xa2d8,	// (0x00030186) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x00035c3d) list_medium_line_x4_t4_t

0xa32b,	// (0x000301d9) tport_appsw_pane_ParamLimits

0xa32b,	// (0x000301d9) tport_appsw_pane

0xa33c,	// (0x000301ea) tport_contact_pane_ParamLimits

0xa33c,	// (0x000301ea) tport_contact_pane

0xa355,	// (0x00030203) tport_listscroll_pane_ParamLimits

0xa355,	// (0x00030203) tport_listscroll_pane

0xa370,	// (0x0003021e) cell_tport_appsw_pane_ParamLimits

0xa370,	// (0x0003021e) cell_tport_appsw_pane

0xd15f,	// (0x0003300d) tport_appsw_pane_g1_ParamLimits

0xd15f,	// (0x0003300d) tport_appsw_pane_g1

0xe6b2,	// (0x00034560) tport_contact_pane_g1

0xe6bb,	// (0x00034569) tport_contact_pane_t1

0xe6c9,	// (0x00034577) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x00035c46) tport_contact_pane_t

0xe6d7,	// (0x00034585) list_tport_pane

0xe6e0,	// (0x0003458e) scroll_pane_cp_030

0xe6f1,	// (0x0003459f) cell_tport_appsw_pane_g1

0xe701,	// (0x000345af) cell_tport_appsw_pane_t1

0x1fb5,	// (0x00027e63) grid_highlight_pane_cp019

0xa3b0,	// (0x0003025e) list_tport_double_graphic_pane_ParamLimits

0xa3b0,	// (0x0003025e) list_tport_double_graphic_pane

0x2227,	// (0x000280d5) list_highlight_pane_cp023_ParamLimits

0x2227,	// (0x000280d5) list_highlight_pane_cp023

0xa3bd,	// (0x0003026b) list_tport_double_graphic_pane_g1_ParamLimits

0xa3bd,	// (0x0003026b) list_tport_double_graphic_pane_g1

0xa3ca,	// (0x00030278) list_tport_double_graphic_pane_t1_ParamLimits

0xa3ca,	// (0x00030278) list_tport_double_graphic_pane_t1

0xa3df,	// (0x0003028d) list_tport_double_graphic_pane_t2_ParamLimits

0xa3df,	// (0x0003028d) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x00035c52) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x00035c52) list_tport_double_graphic_pane_t

0x1fb5,	// (0x00027e63) main_cale_note_pane

0x1ca7,	// (0x00027b55) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1ca7,	// (0x00027b55) cell_vitu2_function_top_wide_pane_cp01

0x998c,	// (0x0002f83a) wait_bar_pane_cp05_ParamLimits

0x1fb5,	// (0x00027e63) listscroll_cmail_pane

0xe717,	// (0x000345c5) list_cmail_pane

0xa3fb,	// (0x000302a9) list_cmail_body_pane

0xa410,	// (0x000302be) list_single_cmail_header_caption_pane

0xa429,	// (0x000302d7) list_single_cmail_header_detail_pane_ParamLimits

0xa429,	// (0x000302d7) list_single_cmail_header_detail_pane

0xa452,	// (0x00030300) list_single_cmail_header_caption_pane_t1

0xa462,	// (0x00030310) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa462,	// (0x00030310) list_single_cmail_header_detail_pane_g1

0xe737,	// (0x000345e5) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe737,	// (0x000345e5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x00035c57) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x00035c57) list_single_cmail_header_detail_pane_g

0xe750,	// (0x000345fe) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe750,	// (0x000345fe) list_single_cmail_header_detail_pane_t1

0xe782,	// (0x00034630) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe782,	// (0x00034630) list_single_cmail_header_editor_pane_bg

0xe794,	// (0x00034642) list_cmail_body_pane_g1

0xe79d,	// (0x0003464b) list_cmail_body_pane_t1

0xd1db,	// (0x00033089) list_single_cmail_header_editor_pane_bg_g1

0x3c9b,	// (0x00029b49) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1eb,	// (0x00033099) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1e3,	// (0x00033091) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd464,	// (0x00033312) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd20b,	// (0x000330b9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1fb,	// (0x000330a9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd203,	// (0x000330b1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3c7b,	// (0x00029b29) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa4a0,	// (0x0003034e) calenote_gesture_pane_ParamLimits

0xa4a0,	// (0x0003034e) calenote_gesture_pane

0xa4c0,	// (0x0003036e) calenote_window_pane_ParamLimits

0xa4c0,	// (0x0003036e) calenote_window_pane

0xe7ab,	// (0x00034659) popup_note_window_cp01

0xa4dc,	// (0x0003038a) calenote_swipe_1_pane_ParamLimits

0xa4dc,	// (0x0003038a) calenote_swipe_1_pane

0x9ec2,	// (0x0002fd70) calenote_swipe_2_pane_ParamLimits

0x9ec2,	// (0x0002fd70) calenote_swipe_2_pane

0xe372,	// (0x00034220) calenote_swipe_1_pane_g1_ParamLimits

0xe372,	// (0x00034220) calenote_swipe_1_pane_g1

0xe37f,	// (0x0003422d) calenote_swipe_1_pane_g2_ParamLimits

0xe37f,	// (0x0003422d) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x00035b8b) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x00035b8b) calenote_swipe_1_pane_g

0xe7bd,	// (0x0003466b) calenote_swipe_1_pane_t1_ParamLimits

0xe7bd,	// (0x0003466b) calenote_swipe_1_pane_t1

0xe372,	// (0x00034220) calenote_swipe_2_pane_g1_ParamLimits

0xe372,	// (0x00034220) calenote_swipe_2_pane_g1

0xe7dc,	// (0x0003468a) calenote_swipe_2_pane_g2_ParamLimits

0xe7dc,	// (0x0003468a) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x00035c63) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x00035c63) calenote_swipe_2_pane_g

0xe7e8,	// (0x00034696) calenote_swipe_2_pane_t1_ParamLimits

0xe7e8,	// (0x00034696) calenote_swipe_2_pane_t1

0x1fb5,	// (0x00027e63) main_mup_navstr_pane

0x77cc,	// (0x0002d67a) main_mup3_pane_t7_ParamLimits

0x77cc,	// (0x0002d67a) main_mup3_pane_t7

0xcd46,	// (0x00032bf4) main_mp4_pane_g6_ParamLimits

0xcd46,	// (0x00032bf4) main_mp4_pane_g6

0xcf78,	// (0x00032e26) main_image3_pane_t4_ParamLimits

0xcf78,	// (0x00032e26) main_image3_pane_t4

0xa4f1,	// (0x0003039f) popup_navstr_preview_pane_ParamLimits

0xa4f1,	// (0x0003039f) popup_navstr_preview_pane

0xa505,	// (0x000303b3) scroll_navstr_pane_ParamLimits

0xa505,	// (0x000303b3) scroll_navstr_pane

0x1fb5,	// (0x00027e63) bg_popup_preview_window_pane_cp04

0xe80f,	// (0x000346bd) popup_navstr_preview_pane_t1

0xa519,	// (0x000303c7) scroll_navstr_pane_g1_ParamLimits

0xa519,	// (0x000303c7) scroll_navstr_pane_g1

0xa52d,	// (0x000303db) scroll_navstr_pane_t1_ParamLimits

0xa52d,	// (0x000303db) scroll_navstr_pane_t1

0xe7b4,	// (0x00034662) bg_button_pane_cp014

0xe7b4,	// (0x00034662) bg_button_pane_cp030

0xe313,	// (0x000341c1) list_double_fisheye_pane_g4_ParamLimits

0xe313,	// (0x000341c1) list_double_fisheye_pane_g4

0xe31f,	// (0x000341cd) list_double_fisheye_pane_g5_ParamLimits

0xe31f,	// (0x000341cd) list_double_fisheye_pane_g5

0xe71f,	// (0x000345cd) sp_fs_scroll_pane_cp03

0x3539,	// (0x000293e7) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe4ad,	// (0x0003435b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x00035ba8) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe4b9,	// (0x00034367) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa3f1,	// (0x0003029f) sp_fs_scroll_pane_cp02

0x2e59,	// (0x00028d07) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2e59,	// (0x00028d07) popup_sp_fs_calendar_preview_list_single_pane

0x1fb5,	// (0x00027e63) main_cam6_pano_pane

0x2227,	// (0x000280d5) main_mup3_pane_ParamLimits

0x1fb5,	// (0x00027e63) main_phacti_pane

0x985f,	// (0x0002f70d) bg_button_pane_cp11

0x9879,	// (0x0002f727) main_mobtv_info_pane_g2_ParamLimits

0x9879,	// (0x0002f727) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x00035b08) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x00035b08) main_mobtv_info_pane_g

0x9a56,	// (0x0002f904) sc_clock_pane_t5_ParamLimits

0x9a56,	// (0x0002f904) sc_clock_pane_t5

0x9c02,	// (0x0002fab0) main_radioblah_pane_g1_ParamLimits

0xe278,	// (0x00034126) main_radioblah_pane_t3_ParamLimits

0xe278,	// (0x00034126) main_radioblah_pane_t3

0xe290,	// (0x0003413e) main_radioblah_pane_t4_ParamLimits

0xe290,	// (0x0003413e) main_radioblah_pane_t4

0x9c2a,	// (0x0002fad8) main_radioblah_text_pane_ParamLimits

0x9c2a,	// (0x0002fad8) main_radioblah_text_pane

0x9c3c,	// (0x0002faea) main_radioblah_info_pane_g1_ParamLimits

0x9cd7,	// (0x0002fb85) main_radioblah_info_pane_t4_ParamLimits

0x9cd7,	// (0x0002fb85) main_radioblah_info_pane_t4

0x2227,	// (0x000280d5) main_sp_fs_calendar_pane

0xa543,	// (0x000303f1) main_phacti_pane_g1

0xa54b,	// (0x000303f9) phacti_note_pane_ParamLimits

0xa54b,	// (0x000303f9) phacti_note_pane

0xe826,	// (0x000346d4) phacti_term_pane_ParamLimits

0xe826,	// (0x000346d4) phacti_term_pane

0xe83b,	// (0x000346e9) phacti_note_pane_t1_ParamLimits

0xe83b,	// (0x000346e9) phacti_note_pane_t1

0xe852,	// (0x00034700) phacti_term_pane_g1

0xe85a,	// (0x00034708) phacti_term_pane_t1_ParamLimits

0xe85a,	// (0x00034708) phacti_term_pane_t1

0xe884,	// (0x00034732) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe88c,	// (0x0003473a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x00035c6d) popup_sp_fs_calendar_preview_list_single_pane_g

0xe894,	// (0x00034742) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe894,	// (0x00034742) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8aa,	// (0x00034758) aid_popup_sp_fs_bg_corner_pane

0xc3eb,	// (0x00032299) popup_sp_fs_calendar_preview_bg_pane_g1

0x1fb5,	// (0x00027e63) popup_sp_fs_calendar_preview_bg_pane

0xe8b2,	// (0x00034760) popup_sp_fs_calendar_preview_list_pane

0x2227,	// (0x000280d5) bg_main_sp_fs_cale_pane_ParamLimits

0x2227,	// (0x000280d5) bg_main_sp_fs_cale_pane

0xe8c3,	// (0x00034771) listscroll_cale_mrui_pane_ParamLimits

0xe8c3,	// (0x00034771) listscroll_cale_mrui_pane

0xe8d7,	// (0x00034785) listscroll_sp_fs_schedule_track_pane

0xe8e0,	// (0x0003478e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe8e0,	// (0x0003478e) main_sp_fs_ctrlbar_pane_cp01

0xe8f1,	// (0x0003479f) main_sp_fs_ribbon_pane

0xe8f9,	// (0x000347a7) popup_sp_fs_cale_preview_window

0xa5a6,	// (0x00030454) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa5a6,	// (0x00030454) list_single_sp_fs_schedule_track_pane

0x2227,	// (0x000280d5) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2227,	// (0x000280d5) bg_sp_fs_highlight_list_pane_cp03

0xa5bb,	// (0x00030469) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa5bb,	// (0x00030469) list_single_sp_fs_schedule_track_pane_g1

0xa5c7,	// (0x00030475) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa5c7,	// (0x00030475) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x00035c72) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x00035c72) list_single_sp_fs_schedule_track_pane_g

0xa5d3,	// (0x00030481) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa5d3,	// (0x00030481) list_single_sp_fs_schedule_track_pane_t1

0xa5ed,	// (0x0003049b) sp_fs_schedule_track_pane_ParamLimits

0xa5ed,	// (0x0003049b) sp_fs_schedule_track_pane

0xe90b,	// (0x000347b9) sp_fs_schedule_track_pane_g1

0xe913,	// (0x000347c1) sp_fs_schedule_track_pane_g2

0xe91b,	// (0x000347c9) sp_fs_schedule_track_pane_g3

0xe923,	// (0x000347d1) sp_fs_schedule_track_pane_g4

0xe92b,	// (0x000347d9) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x00035c77) sp_fs_schedule_track_pane_g

0xd1db,	// (0x00033089) bg_sp_fs_schedule_viewer_highlight_g1

0x3c9b,	// (0x00029b49) bg_sp_fs_schedule_viewer_highlight_g2

0xd1e3,	// (0x00033091) bg_sp_fs_schedule_viewer_highlight_g3

0xd1eb,	// (0x00033099) bg_sp_fs_schedule_viewer_highlight_g4

0xd464,	// (0x00033312) bg_sp_fs_schedule_viewer_highlight_g5

0xd1fb,	// (0x000330a9) bg_sp_fs_schedule_viewer_highlight_g6

0xd203,	// (0x000330b1) bg_sp_fs_schedule_viewer_highlight_g7

0xd20b,	// (0x000330b9) bg_sp_fs_schedule_viewer_highlight_g8

0x3c7b,	// (0x00029b29) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x00035c82) bg_sp_fs_schedule_viewer_highlight_g

0x1fb5,	// (0x00027e63) bg_main_sp_fs_ribbon_pane

0xa5fe,	// (0x000304ac) main_sp_fs_ribbon_pane_g1

0xe933,	// (0x000347e1) main_sp_fs_ribbon_pane_t1

0xa607,	// (0x000304b5) main_sp_fs_ribbon_pane_t2

0xe942,	// (0x000347f0) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x00035c95) main_sp_fs_ribbon_pane_t

0xe951,	// (0x000347ff) main_sp_fs_ribbon_scheduler_pane

0xe959,	// (0x00034807) bg_main_sp_fs_ribbon_pane_g1

0xe962,	// (0x00034810) bg_main_sp_fs_ribbon_pane_g2

0xe96b,	// (0x00034819) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x00035c9c) bg_main_sp_fs_ribbon_pane_g

0xe973,	// (0x00034821) main_sp_fs_ribbon_scheduler_pane_g1

0xe97c,	// (0x0003482a) main_sp_fs_ribbon_scheduler_pane_g2

0xe985,	// (0x00034833) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x00035ca3) main_sp_fs_ribbon_scheduler_pane_g

0xe98e,	// (0x0003483c) list_cale_mrui_pane

0xa616,	// (0x000304c4) sp_fs_scroll_pane_cp07_ParamLimits

0xa616,	// (0x000304c4) sp_fs_scroll_pane_cp07

0xa62a,	// (0x000304d8) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa62a,	// (0x000304d8) bg_sp_fs_schedule_viewer_highlight

0xe997,	// (0x00034845) list_single_sp_fs_schedule_track_pane_cp01

0xe99f,	// (0x0003484d) list_sp_fs_schedule_track_pane

0xe9a7,	// (0x00034855) sp_fs_scroll_pane_cp06_ParamLimits

0xe9a7,	// (0x00034855) sp_fs_scroll_pane_cp06

0xc3eb,	// (0x00032299) bgmain_sp_fs_calendar_pane_g1

0xa63a,	// (0x000304e8) list_single_cale_mrui_pane_ParamLimits

0xa63a,	// (0x000304e8) list_single_cale_mrui_pane

0xe9b9,	// (0x00034867) list_single_cale_mrui_row_pane_ParamLimits

0xe9b9,	// (0x00034867) list_single_cale_mrui_row_pane

0xe9c6,	// (0x00034874) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe9c6,	// (0x00034874) list_single_cale_mrui_row_pane_g1

0xe9fe,	// (0x000348ac) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe9fe,	// (0x000348ac) list_single_cale_mrui_row_pane_t1

0xa65c,	// (0x0003050a) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa65c,	// (0x0003050a) list_single_cale_mrui_row_pane_t2

0xea10,	// (0x000348be) list_single_cale_mrui_row_pane_t3_ParamLimits

0xea10,	// (0x000348be) list_single_cale_mrui_row_pane_t3

0xea3f,	// (0x000348ed) list_single_cale_mrui_row_pane_t4_ParamLimits

0xea3f,	// (0x000348ed) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x00035caf) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x00035caf) list_single_cale_mrui_row_pane_t

0xa6c4,	// (0x00030572) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa6c4,	// (0x00030572) list_single_cmail_header_editor_pane_bg_cp01

0xa6ea,	// (0x00030598) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa6ea,	// (0x00030598) list_single_cmail_header_editor_pane_bg_cp02

0xa70a,	// (0x000305b8) main_radioblah_text_pane_t1_ParamLimits

0xa70a,	// (0x000305b8) main_radioblah_text_pane_t1

0xea6e,	// (0x0003491c) cam6_indi_pane_cp01

0xea76,	// (0x00034924) cam6_mode_pane_cp01

0xea7e,	// (0x0003492c) cam6_pano_pane

0xea87,	// (0x00034935) cam6_zoom_pane_cp01

0xea8f,	// (0x0003493d) cam6_pano_image_pane

0xea9a,	// (0x00034948) cam6_pano_pane_g1

0xe112,	// (0x00033fc0) cam6_pano_pane_g2

0xeaa3,	// (0x00034951) cam6_pano_pane_g3

0xeaac,	// (0x0003495a) cam6_pano_pane_g4

0xc9a9,	// (0x00032857) cam6_pano_pane_g5

0xeab5,	// (0x00034963) cam6_pano_pane_g6

0xeabf,	// (0x0003496d) cam6_pano_pane_g7

0xeac7,	// (0x00034975) cam6_pano_pane_g8

0xead0,	// (0x0003497e) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x00035cb8) cam6_pano_pane_g

0x1fb5,	// (0x00027e63) main_browser_tag_pane

0xe807,	// (0x000346b5) grid_navstr_albumart_pane

0xeadb,	// (0x00034989) cell_navstr_albumart_pane_ParamLimits

0xeadb,	// (0x00034989) cell_navstr_albumart_pane

0x5762,	// (0x0002b610) cell_navstr_albumart_pane_g1

0xbcf8,	// (0x00031ba6) cell_navstr_albumart_pane_g2

0xbd08,	// (0x00031bb6) cell_navstr_albumart_pane_g3

0xbd00,	// (0x00031bae) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x00035ccb) cell_navstr_albumart_pane_g

0xa725,	// (0x000305d3) bt_list_pane_ParamLimits

0xa725,	// (0x000305d3) bt_list_pane

0xa73a,	// (0x000305e8) bt_list_pane_t1

0xa749,	// (0x000305f7) bt_list_pane_t2

0x0001,

0xfe26,	// (0x00035cd4) bt_list_pane_t

0x1fb5,	// (0x00027e63) main_cale_prevew_pane

0xa758,	// (0x00030606) popup_cale_preview_window_ParamLimits

0xa758,	// (0x00030606) popup_cale_preview_window

0x2227,	// (0x000280d5) bg_popup_preview_window_pane_cp05_ParamLimits

0x2227,	// (0x000280d5) bg_popup_preview_window_pane_cp05

0xeafd,	// (0x000349ab) list_cale_preview_pane_ParamLimits

0xeafd,	// (0x000349ab) list_cale_preview_pane

0xa76f,	// (0x0003061d) list_double_cale_preview_pane_ParamLimits

0xa76f,	// (0x0003061d) list_double_cale_preview_pane

0xa781,	// (0x0003062f) list_single_cale_preview_pane_ParamLimits

0xa781,	// (0x0003062f) list_single_cale_preview_pane

0xa795,	// (0x00030643) list_single_cale_preview_pane_g1

0xa79d,	// (0x0003064b) list_single_cale_preview_pane_t1_ParamLimits

0xa79d,	// (0x0003064b) list_single_cale_preview_pane_t1

0xa7b2,	// (0x00030660) list_double_cale_preview_pane_g1

0xa7ba,	// (0x00030668) list_double_cale_preview_pane_t1_ParamLimits

0xa7ba,	// (0x00030668) list_double_cale_preview_pane_t1

0xa7cf,	// (0x0003067d) list_double_cale_preview_pane_t2_ParamLimits

0xa7cf,	// (0x0003067d) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x00035cd9) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x00035cd9) list_double_cale_preview_pane_t

0x1fb5,	// (0x00027e63) main_ezdial_pane

0x2227,	// (0x000280d5) main_sp_fs_email_pane_ParamLimits

0x9efc,	// (0x0002fdaa) cmail_ddmenu_btn01_pane_ParamLimits

0x9efc,	// (0x0002fdaa) cmail_ddmenu_btn01_pane

0x9f0f,	// (0x0002fdbd) cmail_ddmenu_btn02_pane_ParamLimits

0x9f0f,	// (0x0002fdbd) cmail_ddmenu_btn02_pane

0x9f32,	// (0x0002fde0) cmail_ddmenu_btn03_pane_ParamLimits

0x9f32,	// (0x0002fde0) cmail_ddmenu_btn03_pane

0x9f58,	// (0x0002fe06) main_sp_fs_ctrlbar_pane_ParamLimits

0x9f7c,	// (0x0002fe2a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa3fb,	// (0x000302a9) list_cmail_body_pane_ParamLimits

0xe72e,	// (0x000345dc) bg_button_pane_cp12

0xe743,	// (0x000345f1) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe743,	// (0x000345f1) list_single_cmail_header_detail_pane_g3

0xa47a,	// (0x00030328) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa47a,	// (0x00030328) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x00035c5e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x00035c5e) list_single_cmail_header_detail_pane_t

0xe86f,	// (0x0003471d) phacti_term_pane_t2_ParamLimits

0xe86f,	// (0x0003471d) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x00035c68) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x00035c68) phacti_term_pane_t

0xeb09,	// (0x000349b7) aid_size_list_single_double

0xa7e7,	// (0x00030695) popup_ezdial_listscroll_window

0xa803,	// (0x000306b1) popup_number_entry_window_cp01

0x51c7,	// (0x0002b075) bg_popup_call_pane_cp09

0xeb15,	// (0x000349c3) ezdial_list_pane

0xeb1d,	// (0x000349cb) scroll_pane_cp23

0xbee3,	// (0x00031d91) bg_button_pane_cp028_ParamLimits

0xbee3,	// (0x00031d91) bg_button_pane_cp028

0xa811,	// (0x000306bf) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa811,	// (0x000306bf) cmail_ddmenu_btn01_pane_g1

0xa81d,	// (0x000306cb) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa81d,	// (0x000306cb) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x00035cde) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x00035cde) cmail_ddmenu_btn01_pane_g

0xeb25,	// (0x000349d3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb25,	// (0x000349d3) cmail_ddmenu_btn01_pane_t1

0xbee3,	// (0x00031d91) bg_button_pane_cp029_ParamLimits

0xbee3,	// (0x00031d91) bg_button_pane_cp029

0xa829,	// (0x000306d7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa829,	// (0x000306d7) cmail_ddmenu_btn02_pane_g1

0xa841,	// (0x000306ef) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa841,	// (0x000306ef) cmail_ddmenu_btn02_pane_t1

0x2227,	// (0x000280d5) bg_button_pane_cp031_ParamLimits

0x2227,	// (0x000280d5) bg_button_pane_cp031

0xa829,	// (0x000306d7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa829,	// (0x000306d7) cmail_ddmenu_btn03_pane_g1

0xa841,	// (0x000306ef) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa841,	// (0x000306ef) cmail_ddmenu_btn03_pane_t1

0x8178,	// (0x0002e026) cell_dialer2_keypad_pane_t1_ParamLimits

0x8192,	// (0x0002e040) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8192,	// (0x0002e040) cell_dialer2_keypad_pane_t1_copy1

0x96e1,	// (0x0002f58f) ncimui_group_button_pane

0x2227,	// (0x000280d5) main_sp_fs_calendar_pane_ParamLimits

0xa410,	// (0x000302be) list_single_cmail_header_caption_pane_ParamLimits

0xe8ba,	// (0x00034768) aid_recal_txt_sm_pane

0x1fb5,	// (0x00027e63) mian_recal_day_pane

0xe8f9,	// (0x000347a7) popup_sp_fs_cale_preview_window_ParamLimits

0x1fb5,	// (0x00027e63) list_recal_day_pane

0xeb5c,	// (0x00034a0a) list_single_recal_day_pane_ParamLimits

0xeb5c,	// (0x00034a0a) list_single_recal_day_pane

0xeb6e,	// (0x00034a1c) list_single_recal_day_pane_g1_ParamLimits

0xeb6e,	// (0x00034a1c) list_single_recal_day_pane_g1

0xeb7a,	// (0x00034a28) list_single_recal_day_pane_g2_ParamLimits

0xeb7a,	// (0x00034a28) list_single_recal_day_pane_g2

0xeb89,	// (0x00034a37) list_single_recal_day_pane_g3_ParamLimits

0xeb89,	// (0x00034a37) list_single_recal_day_pane_g3

0xa865,	// (0x00030713) list_single_recal_day_pane_g4_ParamLimits

0xa865,	// (0x00030713) list_single_recal_day_pane_g4

0xeb95,	// (0x00034a43) list_single_recal_day_pane_g5_ParamLimits

0xeb95,	// (0x00034a43) list_single_recal_day_pane_g5

0xeba4,	// (0x00034a52) list_single_recal_day_pane_g6_ParamLimits

0xeba4,	// (0x00034a52) list_single_recal_day_pane_g6

0x0005,

0xfe3f,	// (0x00035ced) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x00035ced) list_single_recal_day_pane_g

0xebb0,	// (0x00034a5e) list_single_recal_day_pane_t1

0xebbe,	// (0x00034a6c) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x00035cfa) list_single_recal_day_pane_t

0xa878,	// (0x00030726) ncimui_query_button_pane_ParamLimits

0xa878,	// (0x00030726) ncimui_query_button_pane

0xa888,	// (0x00030736) ncimui_query_button_pane_t1_ParamLimits

0xa888,	// (0x00030736) ncimui_query_button_pane_t1

0xebcc,	// (0x00034a7a) ncimui_query_button_pane_t2_ParamLimits

0xebcc,	// (0x00034a7a) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x00035cff) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x00035cff) ncimui_query_button_pane_t

0xa89b,	// (0x00030749) query_button_pane_ParamLimits

0xa89b,	// (0x00030749) query_button_pane

0x1fb5,	// (0x00027e63) bg_button_pane_cp0028

0xebdf,	// (0x00034a8d) query_button_pane_t1

0x68ff,	// (0x0002c7ad) main_tport_pane_ParamLimits

0xa2e8,	// (0x00030196) bg_popup_window_pane_cp01_ParamLimits

0xa2e8,	// (0x00030196) bg_popup_window_pane_cp01

0xa302,	// (0x000301b0) heading_pane_cp08_ParamLimits

0xa302,	// (0x000301b0) heading_pane_cp08

0xa316,	// (0x000301c4) heading_pane_cp07_ParamLimits

0xa316,	// (0x000301c4) heading_pane_cp07

0xe6f1,	// (0x0003459f) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x00035c4b) cell_tport_appsw_pane_g

0x575a,	// (0x0002b608) input_candi_list_open_g1

0x4783,	// (0x0002a631) list_cale_time_pane_g6_ParamLimits

0x4783,	// (0x0002a631) list_cale_time_pane_g6

0x71ed,	// (0x0002d09b) aid_size_touch_calib_1_ParamLimits

0x71ed,	// (0x0002d09b) aid_size_touch_calib_1

0x71f9,	// (0x0002d0a7) aid_size_touch_calib_2_ParamLimits

0x71f9,	// (0x0002d0a7) aid_size_touch_calib_2

0x720f,	// (0x0002d0bd) aid_size_touch_calib_3_ParamLimits

0x720f,	// (0x0002d0bd) aid_size_touch_calib_3

0x722d,	// (0x0002d0db) aid_size_touch_calib_4_ParamLimits

0x722d,	// (0x0002d0db) aid_size_touch_calib_4

0x7243,	// (0x0002d0f1) main_touch_calib_button_group_pane_ParamLimits

0x7243,	// (0x0002d0f1) main_touch_calib_button_group_pane

0x725b,	// (0x0002d109) main_touch_calib_pane_g1_ParamLimits

0x7267,	// (0x0002d115) main_touch_calib_pane_g2_ParamLimits

0x7273,	// (0x0002d121) main_touch_calib_pane_g3_ParamLimits

0x727f,	// (0x0002d12d) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x00035623) main_touch_calib_pane_g_ParamLimits

0x728b,	// (0x0002d139) main_touch_calib_pane_t1_ParamLimits

0x72a5,	// (0x0002d153) main_touch_calib_pane_t2_ParamLimits

0x72bf,	// (0x0002d16d) main_touch_calib_pane_t3_ParamLimits

0x72d3,	// (0x0002d181) main_touch_calib_pane_t4_ParamLimits

0x72e7,	// (0x0002d195) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0003562c) main_touch_calib_pane_t_ParamLimits

0xc790,	// (0x0003263e) list_single_fp_cale_pane_g3_ParamLimits

0xc790,	// (0x0003263e) list_single_fp_cale_pane_g3

0xd1c3,	// (0x00033071) bg_button_pane_cp012_ParamLimits

0xd1c3,	// (0x00033071) bg_vkb2_func_pane_cp03_ParamLimits

0x1ea5,	// (0x00027d53) cell_vitu2_function_top_pane_g1_ParamLimits

0xd1c3,	// (0x00033071) bg_vkb2_func_pane_cp04_ParamLimits

0x9681,	// (0x0002f52f) main_ncimui_button_group_pane_ParamLimits

0x9681,	// (0x0002f52f) main_ncimui_button_group_pane

0x96cf,	// (0x0002f57d) main_ncimui_pane_t3_ParamLimits

0x96cf,	// (0x0002f57d) main_ncimui_pane_t3

0xe81d,	// (0x000346cb) phacti_button_group_pane

0xeb09,	// (0x000349b7) aid_size_list_single_double_ParamLimits

0xa7e7,	// (0x00030695) popup_ezdial_listscroll_window_ParamLimits

0xa803,	// (0x000306b1) popup_number_entry_window_cp01_ParamLimits

0xa8ae,	// (0x0003075c) phacti_button_pane_ParamLimits

0xa8ae,	// (0x0003075c) phacti_button_pane

0x1fb5,	// (0x00027e63) bg_button_pane_cp14

0xebed,	// (0x00034a9b) phacti_button_pane_t1

0xa8bf,	// (0x0003076d) main_touch_calib_button_pane_ParamLimits

0xa8bf,	// (0x0003076d) main_touch_calib_button_pane

0x2c29,	// (0x00028ad7) bg_button_pane_cp18_ParamLimits

0x2c29,	// (0x00028ad7) bg_button_pane_cp18

0xebfb,	// (0x00034aa9) main_touch_calib_button_pane_t1_ParamLimits

0xebfb,	// (0x00034aa9) main_touch_calib_button_pane_t1

0xec11,	// (0x00034abf) main_touch_calib_button_pane_t2_ParamLimits

0xec11,	// (0x00034abf) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x00035d04) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x00035d04) main_touch_calib_button_pane_t

0x1fb5,	// (0x00027e63) cell_ncimui_button_pane

0x1fb5,	// (0x00027e63) bg_button_pane_cp032

0xec2f,	// (0x00034add) cell_ncimui_button_pane_t1

0xcf58,	// (0x00032e06) image3_infobar_pane_ParamLimits

0xcf58,	// (0x00032e06) image3_infobar_pane

0x9a82,	// (0x0002f930) fs_bigclock_status_pane_ParamLimits

0x9a82,	// (0x0002f930) fs_bigclock_status_pane

0x9a8f,	// (0x0002f93d) main_fs_bigclock_clock_pane_ParamLimits

0x9a8f,	// (0x0002f93d) main_fs_bigclock_clock_pane

0x9aa2,	// (0x0002f950) main_fs_bigclock_indi_pane_ParamLimits

0x9aa2,	// (0x0002f950) main_fs_bigclock_indi_pane

0x9abd,	// (0x0002f96b) main_fs_bigclock_swipe_pane_ParamLimits

0x9abd,	// (0x0002f96b) main_fs_bigclock_swipe_pane

0x1fb5,	// (0x00027e63) main_fs_clock_dumped_data

0x9ae0,	// (0x0002f98e) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x9ae0,	// (0x0002f98e) list_single_fs_bigclock_indicator_pane_g1

0x9afe,	// (0x0002f9ac) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x9afe,	// (0x0002f9ac) list_single_fs_bigclock_indicator_pane_g2

0x9b18,	// (0x0002f9c6) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x9b18,	// (0x0002f9c6) list_single_fs_bigclock_indicator_pane_g3

0x9b32,	// (0x0002f9e0) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x9b32,	// (0x0002f9e0) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x00035b3c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x00035b3c) list_single_fs_bigclock_indicator_pane_g

0x9b58,	// (0x0002fa06) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x9b58,	// (0x0002fa06) list_single_fs_bigclock_indicator_pane_t1

0x9b80,	// (0x0002fa2e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x9b80,	// (0x0002fa2e) list_single_fs_bigclock_indicator_pane_t2

0x9ba8,	// (0x0002fa56) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9ba8,	// (0x0002fa56) list_single_fs_bigclock_indicator_pane_t3

0x9bd0,	// (0x0002fa7e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x9bd0,	// (0x0002fa7e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x00035b47) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x00035b47) list_single_fs_bigclock_indicator_pane_t

0xec3d,	// (0x00034aeb) image3_infobar_fav_pane_ParamLimits

0xec3d,	// (0x00034aeb) image3_infobar_fav_pane

0xec4d,	// (0x00034afb) image3_infobar_loc_pane_ParamLimits

0xec4d,	// (0x00034afb) image3_infobar_loc_pane

0xec61,	// (0x00034b0f) image3_infobar_time_pane_ParamLimits

0xec61,	// (0x00034b0f) image3_infobar_time_pane

0xc3eb,	// (0x00032299) image3_infobar_time_pane_g1

0xec71,	// (0x00034b1f) image3_infobar_time_pane_t1

0xc3eb,	// (0x00032299) image3_infobar_loc_pane_g1

0xec7f,	// (0x00034b2d) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x00035d09) image3_infobar_loc_pane_g

0xec87,	// (0x00034b35) image3_infobar_loc_pane_t1

0xc3eb,	// (0x00032299) image3_infobar_fav_pane_g1

0xec95,	// (0x00034b43) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x00035d0e) image3_infobar_fav_pane_g

0xec9d,	// (0x00034b4b) fs_bigclock_status_battery_pane

0xeca6,	// (0x00034b54) fs_bigclock_status_signal_pane

0xecaf,	// (0x00034b5d) fs_bigclock_status_title_pane

0xecb8,	// (0x00034b66) fs_bigclock_status_signal_pane_g1

0xecc1,	// (0x00034b6f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x00035d13) fs_bigclock_status_signal_pane_g

0xecc9,	// (0x00034b77) fs_bigclock_status_battery_pane_g1

0xecd2,	// (0x00034b80) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x00035d18) fs_bigclock_status_battery_pane_g

0xecda,	// (0x00034b88) fs_bigclock_status_title_pane_t1

0xc3eb,	// (0x00032299) main_fs_bigclock_clock_pane_g1

0xece8,	// (0x00034b96) main_fs_bigclock_clock_pane_g2

0xece8,	// (0x00034b96) main_fs_bigclock_clock_pane_g3

0xece8,	// (0x00034b96) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x00035d1d) main_fs_bigclock_clock_pane_g

0xa8d4,	// (0x00030782) main_fs_bigclock_clock_pane_t1

0xa8e2,	// (0x00030790) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x00035d26) main_fs_bigclock_clock_pane_t

0xecf0,	// (0x00034b9e) list_single_fs_bigclock_indicator_pane_ParamLimits

0xecf0,	// (0x00034b9e) list_single_fs_bigclock_indicator_pane

0xa8f1,	// (0x0003079f) list_single_fs_bigclock_pane_ParamLimits

0xa8f1,	// (0x0003079f) list_single_fs_bigclock_pane

0xed0a,	// (0x00034bb8) main_fs_bigclock_indicator_pane_t1

0xed19,	// (0x00034bc7) list_single_fs_bigclock_pane_g1

0xed21,	// (0x00034bcf) list_single_fs_bigclock_pane_t1

0xc3eb,	// (0x00032299) main_fs_bigclock_swipe_pane_g1

0xed61,	// (0x00034c0f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x00035d37) main_fs_bigclock_swipe_pane_g

0xed69,	// (0x00034c17) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed69,	// (0x00034c17) main_fs_bigclock_swipe_pane_t1

0x4b3e,	// (0x0002a9ec) call_type_pane_ParamLimits

0x1fb5,	// (0x00027e63) main_btmg_pane

0xe9f2,	// (0x000348a0) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe9f2,	// (0x000348a0) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfc,	// (0x00035caa) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x00035caa) list_single_cale_mrui_row_pane_g

0xeb43,	// (0x000349f1) list_recal_vselct_arw_lo_pane

0xeb4b,	// (0x000349f9) list_recal_vselct_arw_up_pane

0xeb53,	// (0x00034a01) list_recal_vselct_pane

0xed86,	// (0x00034c34) btmg_button_pane

0xa958,	// (0x00030806) main_btmg_pane_g1

0x1fb5,	// (0x00027e63) bg_button_pane_cp044

0xed90,	// (0x00034c3e) btmg_button_pane_t1

0xbedb,	// (0x00031d89) aid_listscroll_gen

0x2227,	// (0x000280d5) main_cntbar_detail_pane

0xe70f,	// (0x000345bd) list_cmail_folder_pane

0xe71f,	// (0x000345cd) sp_fs_scroll_pane_cp03_ParamLimits

0xa410,	// (0x000302be) list_single_fs_dyc_pane_cp01_ParamLimits

0xa410,	// (0x000302be) list_single_fs_dyc_pane_cp01

0xed9e,	// (0x00034c4c) aid_size_cmail_indent

0xeda7,	// (0x00034c55) list_single_dyc_row_pane_cp01

0xa98e,	// (0x0003083c) cntbar_detail_list_pane_ParamLimits

0xa98e,	// (0x0003083c) cntbar_detail_list_pane

0xa9da,	// (0x00030888) main_cntbar_detail_cont_pane_ParamLimits

0xa9da,	// (0x00030888) main_cntbar_detail_cont_pane

0x4955,	// (0x0002a803) scroll_pane_cp032_ParamLimits

0x4955,	// (0x0002a803) scroll_pane_cp032

0xa9ee,	// (0x0003089c) cntbar_detail_list_event_pane_ParamLimits

0xa9ee,	// (0x0003089c) cntbar_detail_list_event_pane

0xa99e,	// (0x0003084c) cntbar_detail_list_shct_pane

0x3cf1,	// (0x00029b9f) aid_list_gen

0xedb0,	// (0x00034c5e) aid_scroll

0xedb9,	// (0x00034c67) aid_size_touch_scroll_bar

0xedc2,	// (0x00034c70) aid_list_double

0xedcb,	// (0x00034c79) aid_list_single

0xedd4,	// (0x00034c82) aid_list_single_lg

0xeddd,	// (0x00034c8b) aid_list_z_g_a_sm

0xede5,	// (0x00034c93) aid_list_z_g_d

0xeded,	// (0x00034c9b) aid_txt_z_prm

0xa9fe,	// (0x000308ac) aid_txt_z_prm_cp01

0xaa0c,	// (0x000308ba) aid_txt_z_sec

0xaa1a,	// (0x000308c8) main_cntbar_detail_cont_pane_g1_ParamLimits

0xaa1a,	// (0x000308c8) main_cntbar_detail_cont_pane_g1

0xaa2e,	// (0x000308dc) main_cntbar_detail_cont_pane_g2_ParamLimits

0xaa2e,	// (0x000308dc) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x00035d3c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x00035d3c) main_cntbar_detail_cont_pane_g

0xedfb,	// (0x00034ca9) main_cntbar_detail_cont_pane_t1

0xee09,	// (0x00034cb7) main_cntbar_detail_cont_pane_t2

0xee17,	// (0x00034cc5) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x00035d41) main_cntbar_detail_cont_pane_t

0xaa3e,	// (0x000308ec) cell_cntbar_detail_list_shct_pane_ParamLimits

0xaa3e,	// (0x000308ec) cell_cntbar_detail_list_shct_pane

0xee25,	// (0x00034cd3) cntbar_detail_list_shct_pane_g1

0xee2e,	// (0x00034cdc) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x00035d48) cntbar_detail_list_shct_pane_g

0xaa52,	// (0x00030900) cntbar_detail_list_event_pane_g1_ParamLimits

0xaa52,	// (0x00030900) cntbar_detail_list_event_pane_g1

0xaa5e,	// (0x0003090c) cntbar_detail_list_event_pane_g2_ParamLimits

0xaa5e,	// (0x0003090c) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x00035d4d) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x00035d4d) cntbar_detail_list_event_pane_g

0xaaca,	// (0x00030978) cntbar_detail_list_event_pane_t1_ParamLimits

0xaaca,	// (0x00030978) cntbar_detail_list_event_pane_t1

0xaadf,	// (0x0003098d) cntbar_detail_list_event_pane_t2_ParamLimits

0xaadf,	// (0x0003098d) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x00035d5a) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x00035d5a) cntbar_detail_list_event_pane_t

0xc3eb,	// (0x00032299) cell_cntbar_detail_list_shct_pane_g1

0x5145,	// (0x0002aff3) navi_pane_mv_g3

0x2227,	// (0x000280d5) main_cntbar_detail_pane_ParamLimits

0x1fb5,	// (0x00027e63) main_notif_wgt_pane

0xcce0,	// (0x00032b8e) aid_tch_main_mp4_pane_g4

0xcee2,	// (0x00032d90) popup_slider_window_cp02

0xeb3a,	// (0x000349e8) list_recal_day_event_pane

0xa962,	// (0x00030810) cntbar_detail_btn_pane_ParamLimits

0xa962,	// (0x00030810) cntbar_detail_btn_pane

0xa978,	// (0x00030826) cntbar_detail_btn_pane_cp01_ParamLimits

0xa978,	// (0x00030826) cntbar_detail_btn_pane_cp01

0xa99e,	// (0x0003084c) cntbar_detail_list_shct_pane_ParamLimits

0xa9ae,	// (0x0003085c) cntbar_detail_pane_g1_ParamLimits

0xa9ae,	// (0x0003085c) cntbar_detail_pane_g1

0xa9be,	// (0x0003086c) cntbar_detail_pane_t1_ParamLimits

0xa9be,	// (0x0003086c) cntbar_detail_pane_t1

0xaa6a,	// (0x00030918) cntbar_detail_list_event_pane_g3_ParamLimits

0xaa6a,	// (0x00030918) cntbar_detail_list_event_pane_g3

0xaa82,	// (0x00030930) cntbar_detail_list_event_pane_g4_ParamLimits

0xaa82,	// (0x00030930) cntbar_detail_list_event_pane_g4

0xaa9a,	// (0x00030948) cntbar_detail_list_event_pane_g5_ParamLimits

0xaa9a,	// (0x00030948) cntbar_detail_list_event_pane_g5

0xaab2,	// (0x00030960) cntbar_detail_list_event_pane_g6_ParamLimits

0xaab2,	// (0x00030960) cntbar_detail_list_event_pane_g6

0xaaf4,	// (0x000309a2) cntbar_detail_list_event_pane_t3_ParamLimits

0xaaf4,	// (0x000309a2) cntbar_detail_list_event_pane_t3

0xab06,	// (0x000309b4) popup_notif_wgt_window_ParamLimits

0xab06,	// (0x000309b4) popup_notif_wgt_window

0xab1f,	// (0x000309cd) popup_submenu_window_cp01_ParamLimits

0xab1f,	// (0x000309cd) popup_submenu_window_cp01

0x51c7,	// (0x0002b075) bg_popup_window_pane_cp10

0xee37,	// (0x00034ce5) listscroll_notif_wgt_pane

0xee41,	// (0x00034cef) list_notif_wgt_window

0xee4a,	// (0x00034cf8) scroll_pane_cp033

0xee53,	// (0x00034d01) list_notif_wgt_row_pane_ParamLimits

0xee53,	// (0x00034d01) list_notif_wgt_row_pane

0xee67,	// (0x00034d15) aid_size_list_notif_wgt_del

0xee70,	// (0x00034d1e) list_notif_wgt_row_pane_g1

0xee78,	// (0x00034d26) list_notif_wgt_row_pane_g2

0xee80,	// (0x00034d2e) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x00035d61) list_notif_wgt_row_pane_g

0xee89,	// (0x00034d37) list_notif_wgt_row_pane_t1

0xee97,	// (0x00034d45) list_notif_wgt_row_pane_t2

0xeea5,	// (0x00034d53) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x00035d68) list_notif_wgt_row_pane_t

0xd4be,	// (0x0003336c) list_recal_day_event_pane_g1

0xeeb3,	// (0x00034d61) list_recal_day_event_pane_t1

0x1fb5,	// (0x00027e63) bg_button_pane_cp045

0xeec2,	// (0x00034d70) cntbar_detail_btn_pane_t1

0xbee3,	// (0x00031d91) main_callh_pane_ParamLimits

0xbee3,	// (0x00031d91) main_callh_pane

0x1fb5,	// (0x00027e63) main_coverflow0_pane

0x1fb5,	// (0x00027e63) main_wgtman_pane

0x9acb,	// (0x0002f979) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9acb,	// (0x0002f979) main_fs_bigclock_unlock_btn_pane

0xe6e9,	// (0x00034597) bg_button_pane_cp16

0xe6f9,	// (0x000345a7) cell_tport_appsw_pane_g3

0xab31,	// (0x000309df) cf0_flow_pane_ParamLimits

0xab31,	// (0x000309df) cf0_flow_pane

0xeed0,	// (0x00034d7e) listscroll_cf0_pane

0xeed9,	// (0x00034d87) main_cf0_pane_g1

0xab46,	// (0x000309f4) main_cf0_pane_t1_ParamLimits

0xab46,	// (0x000309f4) main_cf0_pane_t1

0xab5d,	// (0x00030a0b) main_cf0_pane_t2_ParamLimits

0xab5d,	// (0x00030a0b) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x00035d6f) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x00035d6f) main_cf0_pane_t

0xeee3,	// (0x00034d91) scroll_pane_cp11

0xab74,	// (0x00030a22) cf0_flow_pane_g1

0xab7c,	// (0x00030a2a) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x00035d74) cf0_flow_pane_g

0xab84,	// (0x00030a32) cf0_flow_pane_t1

0x1fb5,	// (0x00027e63) main_call6_pane

0x1fb5,	// (0x00027e63) main_calllock_pane

0xab92,	// (0x00030a40) call6_btn_grp_pane_ParamLimits

0xab92,	// (0x00030a40) call6_btn_grp_pane

0xabac,	// (0x00030a5a) call6_pane_g1_ParamLimits

0xabac,	// (0x00030a5a) call6_pane_g1

0xabc1,	// (0x00030a6f) popup_call6_1st_window_ParamLimits

0xabc1,	// (0x00030a6f) popup_call6_1st_window

0xabd2,	// (0x00030a80) popup_call6_2nd_window_ParamLimits

0xabd2,	// (0x00030a80) popup_call6_2nd_window

0xabe3,	// (0x00030a91) cell_call6_btn_pane_ParamLimits

0xabe3,	// (0x00030a91) cell_call6_btn_pane

0x51c7,	// (0x0002b075) bg_popup_call2_in_pane_cp03

0xeeee,	// (0x00034d9c) popup_call6_1st_window_g1

0xeef6,	// (0x00034da4) popup_call6_1st_window_g2

0xeefe,	// (0x00034dac) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x00035d79) popup_call6_1st_window_g

0xef06,	// (0x00034db4) popup_call6_1st_window_t1

0xef15,	// (0x00034dc3) popup_call6_1st_window_t2

0xef25,	// (0x00034dd3) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x00035d80) popup_call6_1st_window_t

0x51c7,	// (0x0002b075) bg_popup_call2_in_pane_cp04

0xeeee,	// (0x00034d9c) popup_call6_2nd_window_g1

0xeef6,	// (0x00034da4) popup_call6_2nd_window_g2

0xeefe,	// (0x00034dac) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x00035d79) popup_call6_2nd_window_g

0xef06,	// (0x00034db4) popup_call6_2nd_window_t1

0x1fb5,	// (0x00027e63) bg_button_pane_cp15

0xef35,	// (0x00034de3) cell_call6_btn_pane_g1

0xef3e,	// (0x00034dec) cell_call6_btn_pane_t1

0xabf7,	// (0x00030aa5) listscroll_wgtman_pane_ParamLimits

0xabf7,	// (0x00030aa5) listscroll_wgtman_pane

0xac1a,	// (0x00030ac8) wgtman_btn_pane_ParamLimits

0xac1a,	// (0x00030ac8) wgtman_btn_pane

0x4d8e,	// (0x0002ac3c) aid_scroll_copy1

0xef4d,	// (0x00034dfb) list_wgtman_pane

0xac5d,	// (0x00030b0b) wgtman_btn_pane_g1_ParamLimits

0xac5d,	// (0x00030b0b) wgtman_btn_pane_g1

0xac89,	// (0x00030b37) wgtman_btn_pane_t1_ParamLimits

0xac89,	// (0x00030b37) wgtman_btn_pane_t1

0xef57,	// (0x00034e05) wgtman_btn_pane_t2_ParamLimits

0xef57,	// (0x00034e05) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x00035d87) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x00035d87) wgtman_btn_pane_t

0xacc6,	// (0x00030b74) listrow_wgtman_pane_ParamLimits

0xacc6,	// (0x00030b74) listrow_wgtman_pane

0xacd9,	// (0x00030b87) listrow_wgtman_pane_g1

0xace2,	// (0x00030b90) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x00035d8c) listrow_wgtman_pane_g

0xacec,	// (0x00030b9a) listrow_wgtman_pane_t1

0xacfa,	// (0x00030ba8) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x00035d91) listrow_wgtman_pane_t

0xad08,	// (0x00030bb6) wait_bar_pane_cp09

0xef6e,	// (0x00034e1c) main_calllock_btn_pane

0xef78,	// (0x00034e26) main_calllock_pane_g1

0x1fb5,	// (0x00027e63) bg_button_pane_cp17

0xef83,	// (0x00034e31) main_calllock_btn_pane_g1

0xef8c,	// (0x00034e3a) main_calllock_btn_pane_t1

0x1fb5,	// (0x00027e63) main_dialer3_pane

0x1fb5,	// (0x00027e63) main_fmrd2_pane

0xc3eb,	// (0x00032299) main_fs_bigclock_unlock_btn_pane_g1

0xefa3,	// (0x00034e51) main_fs_bigclock_unlock_btn_pane_t1

0xad10,	// (0x00030bbe) area_fmrd2_info_pane_ParamLimits

0xad10,	// (0x00030bbe) area_fmrd2_info_pane

0xad21,	// (0x00030bcf) area_fmrd2_visual_pane_ParamLimits

0xad21,	// (0x00030bcf) area_fmrd2_visual_pane

0xad2f,	// (0x00030bdd) fmrd2_indi_pane_ParamLimits

0xad2f,	// (0x00030bdd) fmrd2_indi_pane

0xad3c,	// (0x00030bea) area_fmrd2_visual_pane_g1

0xad44,	// (0x00030bf2) area_fmrd2_visual_pane_t1

0xad54,	// (0x00030c02) area_fmrd2_visual_pane_t2

0xad64,	// (0x00030c12) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x00035d9b) area_fmrd2_visual_pane_t

0xad74,	// (0x00030c22) area_fmrd2_info_pane_g1

0xad7c,	// (0x00030c2a) area_fmrd2_info_pane_t1

0xad8c,	// (0x00030c3a) area_fmrd2_info_pane_t2

0xad9c,	// (0x00030c4a) area_fmrd2_info_pane_t3

0xadac,	// (0x00030c5a) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x00035da2) area_fmrd2_info_pane_t

0xadba,	// (0x00030c68) fmrd2_indi_pane_t1

0xadca,	// (0x00030c78) fmrd2_indi_pane_t2

0xadda,	// (0x00030c88) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x00035dab) fmrd2_indi_pane_t

0x9b41,	// (0x0002f9ef) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9b41,	// (0x0002f9ef) list_single_fs_bigclock_indicator_pane_g5

0x9be5,	// (0x0002fa93) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x9be5,	// (0x0002fa93) list_single_fs_bigclock_indicator_pane_t5

0xa55f,	// (0x0003040d) aid_cell_bcale_month_pane_ParamLimits

0xa55f,	// (0x0003040d) aid_cell_bcale_month_pane

0xa571,	// (0x0003041f) bcale_month_pane_ParamLimits

0xa571,	// (0x0003041f) bcale_month_pane

0xa58b,	// (0x00030439) bcale_preview_pane_ParamLimits

0xa58b,	// (0x00030439) bcale_preview_pane

0xed21,	// (0x00034bcf) list_single_fs_bigclock_pane_t1_ParamLimits

0xed3d,	// (0x00034beb) list_single_fs_bigclock_pane_t2_ParamLimits

0xed3d,	// (0x00034beb) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x00035d32) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x00035d32) list_single_fs_bigclock_pane_t

0xef9b,	// (0x00034e49) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x00035d96) main_fs_bigclock_unlock_btn_pane_g

0xadea,	// (0x00030c98) aid_dia3_key_size_ParamLimits

0xadea,	// (0x00030c98) aid_dia3_key_size

0xadf9,	// (0x00030ca7) aid_dia3_listrow_size_ParamLimits

0xadf9,	// (0x00030ca7) aid_dia3_listrow_size

0xae0e,	// (0x00030cbc) dia3_keypad_fun_pane_ParamLimits

0xae0e,	// (0x00030cbc) dia3_keypad_fun_pane

0xae2a,	// (0x00030cd8) dia3_keypad_num_pane_ParamLimits

0xae2a,	// (0x00030cd8) dia3_keypad_num_pane

0xae45,	// (0x00030cf3) dia3_listscroll_pane_ParamLimits

0xae45,	// (0x00030cf3) dia3_listscroll_pane

0xae58,	// (0x00030d06) dia3_numentry_pane_ParamLimits

0xae58,	// (0x00030d06) dia3_numentry_pane

0xefb1,	// (0x00034e5f) dia3_list_pane

0xefbc,	// (0x00034e6a) scroll_pane_cp12

0x1fb5,	// (0x00027e63) bg_dia3_numentry_pane

0xae6c,	// (0x00030d1a) dia3_numentry_pane_t1

0xae7b,	// (0x00030d29) cell_dia3_key_num_pane

0xae83,	// (0x00030d31) cell_dia3_key0_fun_pane_ParamLimits

0xae83,	// (0x00030d31) cell_dia3_key0_fun_pane

0xae97,	// (0x00030d45) cell_dia3_key1_fun_pane_ParamLimits

0xae97,	// (0x00030d45) cell_dia3_key1_fun_pane

0xaeaf,	// (0x00030d5d) dia3_listrow_pane

0xdf7e,	// (0x00033e2c) bg_dia3_numentry_pane_g1

0x1fb5,	// (0x00027e63) bg_button_pane_cp21

0xefc7,	// (0x00034e75) cell_dia3_key_num_pane_t1

0xefd5,	// (0x00034e83) cell_dia3_key_num_pane_t2

0xefe4,	// (0x00034e92) cell_dia3_key_num_pane_t3

0xeff3,	// (0x00034ea1) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x00035db2) cell_dia3_key_num_pane_t

0x1fb5,	// (0x00027e63) bg_button_pane_cp19

0xaec1,	// (0x00030d6f) cell_dia3_key0_fun_pane_g1

0x1fb5,	// (0x00027e63) bg_button_pane_cp20

0xaec9,	// (0x00030d77) cell_dia3_key1_fun_pane_g1

0xaed1,	// (0x00030d7f) area_left_week_number_pane

0xaeda,	// (0x00030d88) area_top_day_name_pane

0xaee3,	// (0x00030d91) frame_month_view_pane

0xaeeb,	// (0x00030d99) grid_month_view_pane

0xaef5,	// (0x00030da3) cell_top_day_name_pane_ParamLimits

0xaef5,	// (0x00030da3) cell_top_day_name_pane

0xa781,	// (0x0003062f) cell_area_left_week_number_pane_ParamLimits

0xa781,	// (0x0003062f) cell_area_left_week_number_pane

0xaf0b,	// (0x00030db9) cell_month_view_pane_ParamLimits

0xaf0b,	// (0x00030db9) cell_month_view_pane

0xf002,	// (0x00034eb0) frm_month_g1

0xaf26,	// (0x00030dd4) frm_month_g2

0xaf2e,	// (0x00030ddc) frm_month_g3

0xaf36,	// (0x00030de4) frm_month_g4

0xaf3e,	// (0x00030dec) frm_month_g5

0xaf46,	// (0x00030df4) frm_month_g6

0xaf4e,	// (0x00030dfc) frm_month_g7

0xf00b,	// (0x00034eb9) frm_month_g8

0xaf56,	// (0x00030e04) frm_month_g9

0xaf5f,	// (0x00030e0d) frm_month_g10

0xaf68,	// (0x00030e16) frm_month_g11

0xaf71,	// (0x00030e1f) frm_month_g12

0xaf7a,	// (0x00030e28) frm_month_g13

0xaf83,	// (0x00030e31) frm_month_g14

0xaf8c,	// (0x00030e3a) frm_month_g15

0xaf95,	// (0x00030e43) frm_month_g16

0x000f,

0xff0d,	// (0x00035dbb) frm_month_g

0xaf9e,	// (0x00030e4c) cell_top_day_name_pane_t1

0xafad,	// (0x00030e5b) cell_area_left_week_number_pane_g1

0xaf9e,	// (0x00030e4c) cell_area_left_week_number_pane_t1

0xc3eb,	// (0x00032299) cell_month_view_pane_g1

0xafb5,	// (0x00030e63) cell_month_view_pane_t1

0x1fb5,	// (0x00027e63) main_fps_pane

0xe475,	// (0x00034323) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe475,	// (0x00034323) cmail_ddmenu_btn02_pane_cp1

0xe491,	// (0x0003433f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe491,	// (0x0003433f) cmail_ddmenu_btn02_pane_cp2

0xa835,	// (0x000306e3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa835,	// (0x000306e3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x00035ce3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x00035ce3) cmail_ddmenu_btn02_pane_g

0xa853,	// (0x00030701) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa853,	// (0x00030701) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x00035ce8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x00035ce8) cmail_ddmenu_btn02_pane_t

0xafc4,	// (0x00030e72) fps_text_pane_ParamLimits

0xafc4,	// (0x00030e72) fps_text_pane

0xafdb,	// (0x00030e89) main_fps_pane_g1_ParamLimits

0xafdb,	// (0x00030e89) main_fps_pane_g1

0xaff5,	// (0x00030ea3) wait_bar_pane_cp010_ParamLimits

0xaff5,	// (0x00030ea3) wait_bar_pane_cp010

0xb006,	// (0x00030eb4) fps_text_pane_t1_ParamLimits

0xb006,	// (0x00030eb4) fps_text_pane_t1

0xd09f,	// (0x00032f4d) cam4_image_uncrop_pane_g1

0xd0a8,	// (0x00032f56) cam4_image_uncrop_pane_g2

0x82e5,	// (0x0002e193) cam4_image_uncrop_pane_g3

0x82ee,	// (0x0002e19c) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x000357bb) cam4_image_uncrop_pane_g

0xaeaf,	// (0x00030d5d) dia3_listrow_pane_ParamLimits

0x1fb5,	// (0x00027e63) main_phob2_pane

0xa381,	// (0x0003022f) cell_tport_appsw_pane_cp02_ParamLimits

0xa381,	// (0x0003022f) cell_tport_appsw_pane_cp02

0xa395,	// (0x00030243) cell_tport_appsw_pane_cp03_ParamLimits

0xa395,	// (0x00030243) cell_tport_appsw_pane_cp03

0x1fb5,	// (0x00027e63) phob2_contact_card_pane

0x1fb5,	// (0x00027e63) phob2_listscroll_pane

0xf014,	// (0x00034ec2) phob2_list_pane

0xf01c,	// (0x00034eca) scroll_pane_cp034

0xb01e,	// (0x00030ecc) phob2_cc_data_pane_ParamLimits

0xb01e,	// (0x00030ecc) phob2_cc_data_pane

0xb03d,	// (0x00030eeb) phob2_cc_listscroll_pane_ParamLimits

0xb03d,	// (0x00030eeb) phob2_cc_listscroll_pane

0xd213,	// (0x000330c1) list_double_large_graphic_phob2_pane_ParamLimits

0xd213,	// (0x000330c1) list_double_large_graphic_phob2_pane

0xb05b,	// (0x00030f09) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb05b,	// (0x00030f09) list_double_large_graphic_phob2_pane_g1

0xb068,	// (0x00030f16) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xb068,	// (0x00030f16) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x00035ddc) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x00035ddc) list_double_large_graphic_phob2_pane_g

0xb074,	// (0x00030f22) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xb074,	// (0x00030f22) list_double_large_graphic_phob2_pane_t1

0xb089,	// (0x00030f37) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xb089,	// (0x00030f37) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x00035de1) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x00035de1) list_double_large_graphic_phob2_pane_t

0x1fb5,	// (0x00027e63) list_highlight_pane_cp024

0xf024,	// (0x00034ed2) phob2_cc_button_pane

0xb09b,	// (0x00030f49) phob2_cc_data_pane_g1_ParamLimits

0xb09b,	// (0x00030f49) phob2_cc_data_pane_g1

0xb0b0,	// (0x00030f5e) phob2_cc_data_pane_g2_ParamLimits

0xb0b0,	// (0x00030f5e) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x00035de6) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x00035de6) phob2_cc_data_pane_g

0xb0c2,	// (0x00030f70) phob2_cc_data_pane_t1_ParamLimits

0xb0c2,	// (0x00030f70) phob2_cc_data_pane_t1

0xb0da,	// (0x00030f88) phob2_cc_data_pane_t2_ParamLimits

0xb0da,	// (0x00030f88) phob2_cc_data_pane_t2

0xb0f2,	// (0x00030fa0) phob2_cc_data_pane_t3_ParamLimits

0xb0f2,	// (0x00030fa0) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x00035deb) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x00035deb) phob2_cc_data_pane_t

0xf02c,	// (0x00034eda) phob2_cc_list_pane_ParamLimits

0xf02c,	// (0x00034eda) phob2_cc_list_pane

0xd557,	// (0x00033405) scroll_pane_cp035_ParamLimits

0xd557,	// (0x00033405) scroll_pane_cp035

0x2227,	// (0x000280d5) bg_button_pane_cp033

0xf038,	// (0x00034ee6) phob2_cc_button_pane_g1

0xf044,	// (0x00034ef2) phob2_cc_button_pane_t1

0xf059,	// (0x00034f07) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x00035df2) phob2_cc_button_pane_t

0xb10c,	// (0x00030fba) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb10c,	// (0x00030fba) list_double_large_graphic_phob2_cc_pane

0xb120,	// (0x00030fce) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb120,	// (0x00030fce) list_double_large_graphic_phob2_cc_pane_g1

0xb12c,	// (0x00030fda) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb12c,	// (0x00030fda) list_double_large_graphic_phob2_cc_pane_g2

0xb138,	// (0x00030fe6) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb138,	// (0x00030fe6) list_double_large_graphic_phob2_cc_pane_g3

0xb144,	// (0x00030ff2) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb144,	// (0x00030ff2) list_double_large_graphic_phob2_cc_pane_g4

0xb150,	// (0x00030ffe) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb150,	// (0x00030ffe) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x00035df7) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x00035df7) list_double_large_graphic_phob2_cc_pane_g

0xb15c,	// (0x0003100a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb15c,	// (0x0003100a) list_double_large_graphic_phob2_cc_pane_t1

0xb185,	// (0x00031033) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb185,	// (0x00031033) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x00035e02) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x00035e02) list_double_large_graphic_phob2_cc_pane_t

0xf06b,	// (0x00034f19) list_highlight_pane_cp025_ParamLimits

0xf06b,	// (0x00034f19) list_highlight_pane_cp025

0x2227,	// (0x000280d5) bg_button_pane_cp033_ParamLimits

0xf038,	// (0x00034ee6) phob2_cc_button_pane_g1_ParamLimits

0xf044,	// (0x00034ef2) phob2_cc_button_pane_t1_ParamLimits

0xf059,	// (0x00034f07) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x00035df2) phob2_cc_button_pane_t_ParamLimits

0x1ff7,	// (0x00027ea5) popup_wgtman_window

0xd2f5,	// (0x000331a3) scroll_pane_cp038

0xac3f,	// (0x00030aed) wgtman_btn_pane_cp_01_ParamLimits

0xac3f,	// (0x00030aed) wgtman_btn_pane_cp_01

0xf079,	// (0x00034f27) wgtman_content_pane

0xedc2,	// (0x00034c70) wgtman_heading_pane

0x1fb5,	// (0x00027e63) bg_heading_pane_cp02

0xf082,	// (0x00034f30) wgtman_heading_pane_g1

0xf08a,	// (0x00034f38) wgtman_heading_pane_t1

0xf098,	// (0x00034f46) scroll_pane_cp036

0xf0a0,	// (0x00034f4e) wgtman_list_pane

0xf0a8,	// (0x00034f56) wgtman_list_pane_t1_ParamLimits

0xf0a8,	// (0x00034f56) wgtman_list_pane_t1

0xd08b,	// (0x00032f39) cam4_grid_pane

0x8aed,	// (0x0002e99b) bg_button_pane_cp015_ParamLimits

0x8b01,	// (0x0002e9af) bg_button_pane_cp016_ParamLimits

0x8b14,	// (0x0002e9c2) bg_button_pane_cp017_ParamLimits

0x8b6c,	// (0x0002ea1a) popup_vitu2_query_window_g3_ParamLimits

0x8b6c,	// (0x0002ea1a) popup_vitu2_query_window_g3

0x8c29,	// (0x0002ead7) popup_vitu2_query_window_t6_ParamLimits

0x8c29,	// (0x0002ead7) popup_vitu2_query_window_t6

0x8c54,	// (0x0002eb02) popup_vitu2_query_window_t7_ParamLimits

0x8c54,	// (0x0002eb02) popup_vitu2_query_window_t7

0xd09f,	// (0x00032f4d) cam4_grid_pane_g1

0xd0a8,	// (0x00032f56) cam4_grid_pane_g2

0xf0ca,	// (0x00034f78) cam4_grid_pane_g3

0xf0d3,	// (0x00034f81) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x00035e07) cam4_grid_pane_g

0x36ee,	// (0x0002959c) aid_placing_vt_slider_lsc_ParamLimits

0x3a39,	// (0x000298e7) vidtel_button_pane_ParamLimits

0x3a39,	// (0x000298e7) vidtel_button_pane

0x1fb5,	// (0x00027e63) bg_button_pane_cp034

0xb1ae,	// (0x0003105c) vidtel_button_pane_g1

0xf0de,	// (0x00034f8c) vidtel_button_pane_t1

0xd432,	// (0x000332e0) aid_size_vtel_slider_touch

0xd557,	// (0x00033405) scroll_pane_cp039

0xdfbc,	// (0x00033e6a) ncim_query_button_pane_cp01_ParamLimits

0xdfdb,	// (0x00033e89) ncimui_query_pane_g1_ParamLimits

0x2227,	// (0x000280d5) input_focus_pane_cp012_ParamLimits

0xe000,	// (0x00033eae) ncim_query_entry_pane_t1_ParamLimits

0xd557,	// (0x00033405) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
