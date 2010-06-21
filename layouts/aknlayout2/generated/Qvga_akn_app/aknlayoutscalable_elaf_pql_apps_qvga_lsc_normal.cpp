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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0000d87d };

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
0x0c84,	// (0x0000e501) Screen

0x0c8e,	// (0x0000e50b) application_window

0x0cc4,	// (0x0000e541) area_bottom_pane_ParamLimits

0x0cc4,	// (0x0000e541) area_bottom_pane

0x0cf7,	// (0x0000e574) area_top_pane_ParamLimits

0x0cf7,	// (0x0000e574) area_top_pane

0x95ed,	// (0x00016e6a) call_video_uplink_pane_ParamLimits

0x95ed,	// (0x00016e6a) call_video_uplink_pane

0x0d77,	// (0x0000e5f4) main_pane_ParamLimits

0x0d77,	// (0x0000e5f4) main_pane

0xc011,	// (0x0001988e) context_pane

0x3eda,	// (0x00011757) navi_pane

0x3f03,	// (0x00011780) popup_cale_events_window_ParamLimits

0x3f03,	// (0x00011780) popup_cale_events_window

0xc024,	// (0x000198a1) popup_mup_playback_window

0x3f1b,	// (0x00011798) signal_pane

0x9d6e,	// (0x000175eb) main_browser_pane

0x9fdd,	// (0x0001785a) main_burst_pane

0x9609,	// (0x00016e86) main_calc_pane

0xbf9d,	// (0x0001981a) main_cale_day_pane

0x1314,	// (0x0000eb91) main_cale_month_pane

0xbf9d,	// (0x0001981a) main_cale_week_pane

0x9fdd,	// (0x0001785a) main_call_pane

0x9a28,	// (0x000172a5) main_call_poc_pane

0x9fdd,	// (0x0001785a) main_camera_pane

0x9fdd,	// (0x0001785a) main_chi_dic_pane

0xa872,	// (0x000180ef) main_clock_pane

0x9a28,	// (0x000172a5) main_fmradio_pane

0x9fdd,	// (0x0001785a) main_graph_messa_pane

0x9a28,	// (0x000172a5) main_help_pane

0x9d6e,	// (0x000175eb) main_im_pane

0x9c83,	// (0x00017500) main_image_pane_ParamLimits

0x9c83,	// (0x00017500) main_image_pane

0x9a28,	// (0x000172a5) main_location2_pane

0x9fdd,	// (0x0001785a) main_location_pane

0x9c83,	// (0x00017500) main_messa_pane

0x9a28,	// (0x000172a5) main_mp2_pane

0x9fdd,	// (0x0001785a) main_mp_pane

0x9a28,	// (0x000172a5) main_msg_pane

0x9a28,	// (0x000172a5) main_mup_eq_pane

0x9a28,	// (0x000172a5) main_mup_pane

0x9d6e,	// (0x000175eb) main_notes_pane

0x9a28,	// (0x000172a5) main_pec_pane

0x9a28,	// (0x000172a5) main_phob_pane

0x9a28,	// (0x000172a5) main_pinb_pane

0x9a28,	// (0x000172a5) main_postcard_pane

0x9a28,	// (0x000172a5) main_qdial_pane

0x9fdd,	// (0x0001785a) main_skin_pane

0x9a28,	// (0x000172a5) main_smil2_pane

0x9fdd,	// (0x0001785a) main_smil_pane

0x9fdd,	// (0x0001785a) main_video_pane

0x9fdd,	// (0x0001785a) main_video_tele_pane

0x9c83,	// (0x00017500) main_viewer_pane_ParamLimits

0x9c83,	// (0x00017500) main_viewer_pane

0x9fdd,	// (0x0001785a) main_vorec_pane

0x3cce,	// (0x0001154b) popup_blid_sat_info_window_ParamLimits

0x3cce,	// (0x0001154b) popup_blid_sat_info_window

0x3d24,	// (0x000115a1) popup_dyc_status_message_window_ParamLimits

0x3d24,	// (0x000115a1) popup_dyc_status_message_window

0x3d3a,	// (0x000115b7) popup_grid_large_graphic_window_ParamLimits

0x3d3a,	// (0x000115b7) popup_grid_large_graphic_window

0x3dd0,	// (0x0001164d) popup_loc_request_window_ParamLimits

0x3dd0,	// (0x0001164d) popup_loc_request_window

0x3eb4,	// (0x00011731) popup_wml_address_window_ParamLimits

0x3eb4,	// (0x00011731) popup_wml_address_window

0x3b24,	// (0x000113a1) call_muted_g1

0x3849,	// (0x000110c6) popup_call_audio_conf_window_ParamLimits

0x3849,	// (0x000110c6) popup_call_audio_conf_window

0x3b34,	// (0x000113b1) popup_call_audio_first_window_ParamLimits

0x3b34,	// (0x000113b1) popup_call_audio_first_window

0x3b92,	// (0x0001140f) popup_call_audio_in_window_ParamLimits

0x3b92,	// (0x0001140f) popup_call_audio_in_window

0x3bbe,	// (0x0001143b) popup_call_audio_out_window_ParamLimits

0x3bbe,	// (0x0001143b) popup_call_audio_out_window

0x3bec,	// (0x00011469) popup_call_audio_second_window_ParamLimits

0x3bec,	// (0x00011469) popup_call_audio_second_window

0x3c32,	// (0x000114af) popup_call_audio_wait_window_ParamLimits

0x3c32,	// (0x000114af) popup_call_audio_wait_window

0x3c65,	// (0x000114e2) popup_number_entry_window_ParamLimits

0x3c65,	// (0x000114e2) popup_number_entry_window

0x9617,	// (0x00016e94) bg_popup_call_pane_cp05_ParamLimits

0x9617,	// (0x00016e94) bg_popup_call_pane_cp05

0x9637,	// (0x00016eb4) popup_number_entry_window_t1

0x964a,	// (0x00016ec7) popup_number_entry_window_t2

0x965c,	// (0x00016ed9) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0001c943) popup_number_entry_window_t

0x966e,	// (0x00016eeb) text_title_cp2

0x9681,	// (0x00016efe) bg_popup_call_pane_cp_ParamLimits

0x9681,	// (0x00016efe) bg_popup_call_pane_cp

0x968f,	// (0x00016f0c) call_thumbnail_pane

0x9697,	// (0x00016f14) popup_call_audio_in_window_g1_ParamLimits

0x9697,	// (0x00016f14) popup_call_audio_in_window_g1

0x96a3,	// (0x00016f20) popup_call_audio_in_window_g2_ParamLimits

0x96a3,	// (0x00016f20) popup_call_audio_in_window_g2

0x96af,	// (0x00016f2c) popup_call_audio_in_window_g3_ParamLimits

0x96af,	// (0x00016f2c) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0001c94c) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0001c94c) popup_call_audio_in_window_g

0x96bb,	// (0x00016f38) popup_call_audio_in_window_t1_ParamLimits

0x96bb,	// (0x00016f38) popup_call_audio_in_window_t1

0x96d6,	// (0x00016f53) popup_call_audio_in_window_t2_ParamLimits

0x96d6,	// (0x00016f53) popup_call_audio_in_window_t2

0x96f1,	// (0x00016f6e) popup_call_audio_in_window_t3_ParamLimits

0x96f1,	// (0x00016f6e) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0001c953) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0001c953) popup_call_audio_in_window_t

0x9681,	// (0x00016efe) bg_popup_call_pane_cp01_ParamLimits

0x9681,	// (0x00016efe) bg_popup_call_pane_cp01

0x968f,	// (0x00016f0c) call_thumbnail_pane_cp02

0x9704,	// (0x00016f81) call_type_pane_cp022

0x970c,	// (0x00016f89) popup_call_audio_out_window_g1_ParamLimits

0x970c,	// (0x00016f89) popup_call_audio_out_window_g1

0x971e,	// (0x00016f9b) popup_call_audio_out_window_g2_ParamLimits

0x971e,	// (0x00016f9b) popup_call_audio_out_window_g2

0x972a,	// (0x00016fa7) popup_call_audio_out_window_g3_ParamLimits

0x972a,	// (0x00016fa7) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0001c95a) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0001c95a) popup_call_audio_out_window_g

0x973c,	// (0x00016fb9) popup_call_audio_out_window_t1_ParamLimits

0x973c,	// (0x00016fb9) popup_call_audio_out_window_t1

0x9754,	// (0x00016fd1) popup_call_audio_out_window_t2_ParamLimits

0x9754,	// (0x00016fd1) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0001c961) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0001c961) popup_call_audio_out_window_t

0x9769,	// (0x00016fe6) bg_popup_call_pane_ParamLimits

0x9769,	// (0x00016fe6) bg_popup_call_pane

0x0f00,	// (0x0000e77d) call_thumbnail_pane_cp_ParamLimits

0x0f00,	// (0x0000e77d) call_thumbnail_pane_cp

0x97ed,	// (0x0001706a) call_type_pane_cp01_ParamLimits

0x97ed,	// (0x0001706a) call_type_pane_cp01

0x9831,	// (0x000170ae) popup_call_audio_first_window_g1_ParamLimits

0x9831,	// (0x000170ae) popup_call_audio_first_window_g1

0x987d,	// (0x000170fa) popup_call_audio_first_window_g2_ParamLimits

0x987d,	// (0x000170fa) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0001c966) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0001c966) popup_call_audio_first_window_g

0x98c1,	// (0x0001713e) popup_call_audio_first_window_t1_ParamLimits

0x98c1,	// (0x0001713e) popup_call_audio_first_window_t1

0x996d,	// (0x000171ea) popup_call_audio_first_window_t4_ParamLimits

0x996d,	// (0x000171ea) popup_call_audio_first_window_t4

0x99f9,	// (0x00017276) popup_call_audio_first_window_t5_ParamLimits

0x99f9,	// (0x00017276) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0001c96b) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0001c96b) popup_call_audio_first_window_t

0x9a28,	// (0x000172a5) bg_popup_call_pane_cp02

0x9a32,	// (0x000172af) call_type_pane_cp023

0x9a3a,	// (0x000172b7) popup_call_audio_wait_window_g1

0x9a42,	// (0x000172bf) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0001c972) popup_call_audio_wait_window_g

0x9a4a,	// (0x000172c7) popup_call_audio_wait_window_t3

0x9a58,	// (0x000172d5) bg_popup_call_pane_cp03_ParamLimits

0x9a58,	// (0x000172d5) bg_popup_call_pane_cp03

0x9ab8,	// (0x00017335) call_thumbnail_pane_cp011_ParamLimits

0x9ab8,	// (0x00017335) call_thumbnail_pane_cp011

0x9ac4,	// (0x00017341) call_type_pane_cp034_ParamLimits

0x9ac4,	// (0x00017341) call_type_pane_cp034

0x9b00,	// (0x0001737d) popup_call_audio_second_window_g1_ParamLimits

0x9b00,	// (0x0001737d) popup_call_audio_second_window_g1

0x9b3c,	// (0x000173b9) popup_call_audio_second_window_g2_ParamLimits

0x9b3c,	// (0x000173b9) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0001c977) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0001c977) popup_call_audio_second_window_g

0x9b78,	// (0x000173f5) popup_call_audio_second_window_t1_ParamLimits

0x9b78,	// (0x000173f5) popup_call_audio_second_window_t1

0x9bf9,	// (0x00017476) popup_call_audio_second_window_t2_ParamLimits

0x9bf9,	// (0x00017476) popup_call_audio_second_window_t2

0x9c2f,	// (0x000174ac) popup_call_audio_second_window_t3_ParamLimits

0x9c2f,	// (0x000174ac) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0001c97c) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0001c97c) popup_call_audio_second_window_t

0x9a28,	// (0x000172a5) bg_popup_call_pane_cp04

0x9c65,	// (0x000174e2) list_conf_pane

0x9c6d,	// (0x000174ea) popup_call_audio_conf_window_t1

0x9c7b,	// (0x000174f8) call_thumbnail_pane_g1

0x9c83,	// (0x00017500) bg_pinb_pane_ParamLimits

0x9c83,	// (0x00017500) bg_pinb_pane

0x9c91,	// (0x0001750e) find_pinb_pane

0x9c9a,	// (0x00017517) listscroll_pinb_pane_ParamLimits

0x9c9a,	// (0x00017517) listscroll_pinb_pane

0x9ca9,	// (0x00017526) pinb_bg_pane_g1

0x0f24,	// (0x0000e7a1) pinb_bg_pane_g2

0x0f2e,	// (0x0000e7ab) pinb_bg_pane_g3

0x0f38,	// (0x0000e7b5) pinb_bg_pane_g4

0x0f42,	// (0x0000e7bf) pinb_bg_pane_g5

0x0f4c,	// (0x0000e7c9) pinb_bg_pane_g6

0x0f55,	// (0x0000e7d2) pinb_bg_pane_g7

0x0f5e,	// (0x0000e7db) pinb_bg_pane_g8

0x0f69,	// (0x0000e7e6) pinb_bg_pane_g9

0x0f73,	// (0x0000e7f0) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0001c983) pinb_bg_pane_g

0x0f8e,	// (0x0000e80b) grid_pinb_pane

0x0f97,	// (0x0000e814) list_pinb_pane

0x0fa0,	// (0x0000e81d) scroll_pane_cp01_ParamLimits

0x0fa0,	// (0x0000e81d) scroll_pane_cp01

0x9cb3,	// (0x00017530) find_pinb_pane_g1_ParamLimits

0x9cb3,	// (0x00017530) find_pinb_pane_g1

0x9ccb,	// (0x00017548) find_pinb_pane_t1

0x9cdd,	// (0x0001755a) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0001c99d) find_pinb_pane_t

0x9cf2,	// (0x0001756f) input_focus_pane_cp01_ParamLimits

0x9cf2,	// (0x0001756f) input_focus_pane_cp01

0x0fb2,	// (0x0000e82f) cell_pinb_pane_ParamLimits

0x0fb2,	// (0x0000e82f) cell_pinb_pane

0x0fcd,	// (0x0000e84a) cell_pinb_pane_g1_ParamLimits

0x0fcd,	// (0x0000e84a) cell_pinb_pane_g1

0x0fdd,	// (0x0000e85a) cell_pinb_pane_g2_ParamLimits

0x0fdd,	// (0x0000e85a) cell_pinb_pane_g2

0x9cfe,	// (0x0001757b) cell_pinb_pane_g3_ParamLimits

0x9cfe,	// (0x0001757b) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0001c9a2) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0001c9a2) cell_pinb_pane_g

0x9a28,	// (0x000172a5) grid_highlight_pane_cp01

0x0fe9,	// (0x0000e866) list_pinb_item_pane_ParamLimits

0x0fe9,	// (0x0000e866) list_pinb_item_pane

0x9a28,	// (0x000172a5) list_highlight_pane_cp02

0x0ffb,	// (0x0000e878) list_pinb_item_pane_g1_ParamLimits

0x0ffb,	// (0x0000e878) list_pinb_item_pane_g1

0x1008,	// (0x0000e885) list_pinb_item_pane_g2_ParamLimits

0x1008,	// (0x0000e885) list_pinb_item_pane_g2

0x1014,	// (0x0000e891) list_pinb_item_pane_g3_ParamLimits

0x1014,	// (0x0000e891) list_pinb_item_pane_g3

0x1025,	// (0x0000e8a2) list_pinb_item_pane_g4_ParamLimits

0x1025,	// (0x0000e8a2) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0001c9a9) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0001c9a9) list_pinb_item_pane_g

0x1031,	// (0x0000e8ae) list_pinb_item_pane_t1_ParamLimits

0x1031,	// (0x0000e8ae) list_pinb_item_pane_t1

0x1066,	// (0x0000e8e3) calc_display_pane

0x1082,	// (0x0000e8ff) calc_paper_pane

0x10a3,	// (0x0000e920) grid_calc_pane

0x9a28,	// (0x000172a5) bg_list_pane_cp01

0x10bf,	// (0x0000e93c) clock_g1

0x10c7,	// (0x0000e944) clock_g2

0x0001,

0xf135,	// (0x0001c9b2) clock_g

0x10cf,	// (0x0000e94c) clock_t1_ParamLimits

0x10cf,	// (0x0000e94c) clock_t1

0x10e4,	// (0x0000e961) clock_t2_ParamLimits

0x10e4,	// (0x0000e961) clock_t2

0x10f6,	// (0x0000e973) clock_t3_ParamLimits

0x10f6,	// (0x0000e973) clock_t3

0x1108,	// (0x0000e985) clock_t4_ParamLimits

0x1108,	// (0x0000e985) clock_t4

0x111a,	// (0x0000e997) clock_t5_ParamLimits

0x111a,	// (0x0000e997) clock_t5

0x112f,	// (0x0000e9ac) clock_t6_ParamLimits

0x112f,	// (0x0000e9ac) clock_t6

0x1141,	// (0x0000e9be) clock_t7_ParamLimits

0x1141,	// (0x0000e9be) clock_t7

0x1153,	// (0x0000e9d0) clock_t8_ParamLimits

0x1153,	// (0x0000e9d0) clock_t8

0x1165,	// (0x0000e9e2) clock_t9_ParamLimits

0x1165,	// (0x0000e9e2) clock_t9

0x0008,

0xf13a,	// (0x0001c9b7) clock_t_ParamLimits

0xf13a,	// (0x0001c9b7) clock_t

0x9d12,	// (0x0001758f) popup_clock_analogue_window_cp02

0x9d12,	// (0x0001758f) popup_clock_digital_window_cp01

0x9d1a,	// (0x00017597) listscroll_help_pane

0x9a28,	// (0x000172a5) phob_pre_status_pane

0x9d24,	// (0x000175a1) grid_qdial_pane

0x9c83,	// (0x00017500) listscroll_mce_pane

0x9c83,	// (0x00017500) bg_notes_pane

0x9d2e,	// (0x000175ab) list_notes_pane

0x1177,	// (0x0000e9f4) scroll_pane_cp06

0x9d3c,	// (0x000175b9) bg_calc_paper_pane

0x9d54,	// (0x000175d1) list_calc_pane

0x9d6e,	// (0x000175eb) bg_calc_display_pane

0x9d7a,	// (0x000175f7) calc_display_pane_t1

0x9d8f,	// (0x0001760c) calc_display_pane_t2

0x9da4,	// (0x00017621) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0001c9ca) calc_display_pane_t

0x1189,	// (0x0000ea06) cell_calc_pane_ParamLimits

0x1189,	// (0x0000ea06) cell_calc_pane

0x9db6,	// (0x00017633) bg_calc_paper_pane_g1

0x9dc2,	// (0x0001763f) bg_calc_paper_pane_g2

0x9dce,	// (0x0001764b) bg_calc_paper_pane_g3

0x9dda,	// (0x00017657) bg_calc_paper_pane_g4

0x9de6,	// (0x00017663) bg_calc_paper_pane_g5

0x11bc,	// (0x0000ea39) bg_calc_paper_pane_g6

0x11cb,	// (0x0000ea48) bg_calc_paper_pane_g7

0x11da,	// (0x0000ea57) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0001c9d1) bg_calc_paper_pane_g

0x11e9,	// (0x0000ea66) calc_bg_paper_pane_g9

0x11f8,	// (0x0000ea75) list_calc_item_pane_ParamLimits

0x11f8,	// (0x0000ea75) list_calc_item_pane

0x9df2,	// (0x0001766f) list_calc_item_pane_g1

0x9dff,	// (0x0001767c) list_calc_item_pane_t1_ParamLimits

0x9dff,	// (0x0001767c) list_calc_item_pane_t1

0x120c,	// (0x0000ea89) list_calc_item_pane_t2_ParamLimits

0x120c,	// (0x0000ea89) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0001c9e2) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0001c9e2) list_calc_item_pane_t

0x9e11,	// (0x0001768e) cell_calc_pane_g1

0x9e1b,	// (0x00017698) grid_highlight_pane_cp02

0x9e3d,	// (0x000176ba) bg_calc_display_pane_g1

0x9e46,	// (0x000176c3) bg_calc_display_pane_g2

0x9e50,	// (0x000176cd) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0001c9ec) bg_calc_display_pane_g

0x123a,	// (0x0000eab7) cell_qdial_pane_ParamLimits

0x123a,	// (0x0000eab7) cell_qdial_pane

0x124c,	// (0x0000eac9) cell_qdial_pane_g1_ParamLimits

0x124c,	// (0x0000eac9) cell_qdial_pane_g1

0x1262,	// (0x0000eadf) cell_qdial_pane_g2_ParamLimits

0x1262,	// (0x0000eadf) cell_qdial_pane_g2

0x9e59,	// (0x000176d6) cell_qdial_pane_g3_ParamLimits

0x9e59,	// (0x000176d6) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0001c9f3) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0001c9f3) cell_qdial_pane_g

0x1289,	// (0x0000eb06) cell_qdial_pane_t1_ParamLimits

0x1289,	// (0x0000eb06) cell_qdial_pane_t1

0x12a1,	// (0x0000eb1e) cell_qdial_pane_t2_ParamLimits

0x12a1,	// (0x0000eb1e) cell_qdial_pane_t2

0x12b4,	// (0x0000eb31) cell_qdial_pane_t3_ParamLimits

0x12b4,	// (0x0000eb31) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0001c9fc) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0001c9fc) cell_qdial_pane_t

0x9a28,	// (0x000172a5) grid_highlight_pane_cp04

0x9e65,	// (0x000176e2) thumbnail_qdial_pane_ParamLimits

0x9e65,	// (0x000176e2) thumbnail_qdial_pane

0x9ec1,	// (0x0001773e) list_help_pane

0x9ecb,	// (0x00017748) scroll_pane_cp02

0x12c7,	// (0x0000eb44) help_list_pane_t1_ParamLimits

0x12c7,	// (0x0000eb44) help_list_pane_t1

0x9ed4,	// (0x00017751) bg_notes_pane_g2

0x9edc,	// (0x00017759) bg_notes_pane_g3

0x9ee4,	// (0x00017761) notes_bg_pane_g1

0x9eec,	// (0x00017769) notes_bg_pane_g4

0x9ef4,	// (0x00017771) notes_bg_pane_g5

0x9efc,	// (0x00017779) notes_bg_pane_g6

0x9f04,	// (0x00017781) notes_bg_pane_g7

0x9f0c,	// (0x00017789) notes_bg_pane_g8

0x9f14,	// (0x00017791) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0001ca1a) notes_bg_pane_g

0x12e3,	// (0x0000eb60) list_notes_text_pane_ParamLimits

0x12e3,	// (0x0000eb60) list_notes_text_pane

0x9f1c,	// (0x00017799) list_notes_text_pane_g1

0x1306,	// (0x0000eb83) list_notes_text_pane_t1

0x1314,	// (0x0000eb91) listscroll_cale_week_pane

0x133e,	// (0x0000ebbb) bg_cale_heading_pane

0x9f3f,	// (0x000177bc) bg_cale_pane_cp01

0x1356,	// (0x0000ebd3) cale_week_corner_pane

0x1375,	// (0x0000ebf2) cale_week_day_heading_pane

0x1392,	// (0x0000ec0f) cale_week_scroll_pane_g1

0x13a5,	// (0x0000ec22) cale_week_scroll_pane_g2

0x13bd,	// (0x0000ec3a) cale_week_scroll_pane_g3

0x13d5,	// (0x0000ec52) cale_week_scroll_pane_g4

0x13ed,	// (0x0000ec6a) cale_week_scroll_pane_g5

0x1405,	// (0x0000ec82) cale_week_scroll_pane_g6

0x141d,	// (0x0000ec9a) cale_week_scroll_pane_g7

0x1435,	// (0x0000ecb2) cale_week_scroll_pane_g8

0x1451,	// (0x0000ecce) cale_week_scroll_pane_g9

0x1469,	// (0x0000ece6) cale_week_scroll_pane_g10

0x1481,	// (0x0000ecfe) cale_week_scroll_pane_g11

0x1499,	// (0x0000ed16) cale_week_scroll_pane_g12

0x14b1,	// (0x0000ed2e) cale_week_scroll_pane_g13

0x14c9,	// (0x0000ed46) cale_week_scroll_pane_g14

0x14e1,	// (0x0000ed5e) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0001ca29) cale_week_scroll_pane_g

0x1515,	// (0x0000ed92) cale_week_time_pane

0x1531,	// (0x0000edae) grid_cale_week_pane

0x9f6e,	// (0x000177eb) scroll_pane_cp08

0x154f,	// (0x0000edcc) cell_cale_week_pane_ParamLimits

0x154f,	// (0x0000edcc) cell_cale_week_pane

0x15c5,	// (0x0000ee42) cale_week_day_heading_pane_t1

0x15ef,	// (0x0000ee6c) cale_week_day_heading_pane_t2

0x161e,	// (0x0000ee9b) cale_week_day_heading_pane_t3

0x164d,	// (0x0000eeca) cale_week_day_heading_pane_t4

0x167c,	// (0x0000eef9) cale_week_day_heading_pane_t5

0x16ab,	// (0x0000ef28) cale_week_day_heading_pane_t6

0x16da,	// (0x0000ef57) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0001ca4a) cale_week_day_heading_pane_t

0x9f8b,	// (0x00017808) bg_cale_side_pane

0x1704,	// (0x0000ef81) cale_week_time_pane_t1

0x173e,	// (0x0000efbb) cale_week_time_pane_t2

0x1778,	// (0x0000eff5) cale_week_time_pane_t3

0x17b2,	// (0x0000f02f) cale_week_time_pane_t4

0x17ec,	// (0x0000f069) cale_week_time_pane_t5

0x1826,	// (0x0000f0a3) cale_week_time_pane_t6

0x1860,	// (0x0000f0dd) cale_week_time_pane_t7

0x189a,	// (0x0000f117) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0001ca59) cale_week_time_pane_t

0x18d4,	// (0x0000f151) cell_cale_week_pane_g2

0x18f3,	// (0x0000f170) cell_cale_week_pane_g3_ParamLimits

0x18f3,	// (0x0000f170) cell_cale_week_pane_g3

0x9f99,	// (0x00017816) grid_highlight_pane_cp07

0x9fa1,	// (0x0001781e) listscroll_gms_pane

0x9fab,	// (0x00017828) grid_gms_pane

0x9fb4,	// (0x00017831) listscroll_gms_pane_g1

0x9fbc,	// (0x00017839) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0001ca6a) listscroll_gms_pane_g

0x190b,	// (0x0000f188) scroll_pane_cp010

0x1916,	// (0x0000f193) cell_gms_pane_ParamLimits

0x1916,	// (0x0000f193) cell_gms_pane

0x1926,	// (0x0000f1a3) cell_gms_pane_g1

0x9fc4,	// (0x00017841) cell_gms_pane_g2

0x9f1c,	// (0x00017799) cell_gms_pane_g3

0x9fcc,	// (0x00017849) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0001ca6f) cell_gms_pane_g

0x9fd5,	// (0x00017852) grid_highlight_pane_cp09

0x3ad2,	// (0x0001134f) phob_pre_status_pane_g1

0x3ada,	// (0x00011357) phob_pre_status_pane_g2

0x3ae2,	// (0x0001135f) phob_pre_status_pane_g3

0x3aea,	// (0x00011367) phob_pre_status_pane_g4

0x0004,

0xf5f0,	// (0x0001ce6d) phob_pre_status_pane_g

0x3afa,	// (0x00011377) phob_pre_status_pane_t1

0x3b08,	// (0x00011385) phob_pre_status_pane_t2

0x3b16,	// (0x00011393) phob_pre_status_pane_t3

0x0002,

0xf5fb,	// (0x0001ce78) phob_pre_status_pane_t

0x9fdd,	// (0x0001785a) bg_list_pane_cp05

0x1936,	// (0x0000f1b3) grid_vorec_pane

0x9fe5,	// (0x00017862) vorec_t1

0x9ff3,	// (0x00017870) vorec_t2

0xa001,	// (0x0001787e) vorec_t3

0x193e,	// (0x0000f1bb) vorec_t4

0x9573,	// (0x00016df0) vorec_t5

0x9581,	// (0x00016dfe) vorec_t6

0x0004,

0xf1fb,	// (0x0001ca78) vorec_t

0x958f,	// (0x00016e0c) wait_bar_pane_cp01

0x194c,	// (0x0000f1c9) cell_vorec_pane_ParamLimits

0x194c,	// (0x0000f1c9) cell_vorec_pane

0xa01d,	// (0x0001789a) cell_vorec_pane_g1

0x9a28,	// (0x000172a5) grid_highlight_pane_cp05

0x1971,	// (0x0000f1ee) cams_zoom_pane

0x1980,	// (0x0000f1fd) image_vga_pane

0x1998,	// (0x0000f215) main_camera_pane_g1

0x19a8,	// (0x0000f225) main_camera_pane_g2

0x19b8,	// (0x0000f235) main_camera_pane_g3

0x19c8,	// (0x0000f245) main_camera_pane_g4

0x19d8,	// (0x0000f255) main_camera_pane_g5

0x19e8,	// (0x0000f265) main_camera_pane_g6

0x19f8,	// (0x0000f275) main_camera_pane_g7

0x0007,

0xf206,	// (0x0001ca83) main_camera_pane_g

0x1a08,	// (0x0000f285) main_camera_pane_t1

0x1a1e,	// (0x0000f29b) main_camera_pane_t2

0x0001,

0xf217,	// (0x0001ca94) main_camera_pane_t

0x1a50,	// (0x0000f2cd) cams_zoom_pane_cp_ParamLimits

0x1a50,	// (0x0000f2cd) cams_zoom_pane_cp

0x1a78,	// (0x0000f2f5) image_cif_pane_ParamLimits

0x1a78,	// (0x0000f2f5) image_cif_pane

0x1aa9,	// (0x0000f326) image_subqcif_pane

0x1ab1,	// (0x0000f32e) main_video_pane_g1_ParamLimits

0x1ab1,	// (0x0000f32e) main_video_pane_g1

0x1ad5,	// (0x0000f352) main_video_pane_g2_ParamLimits

0x1ad5,	// (0x0000f352) main_video_pane_g2

0x1b09,	// (0x0000f386) main_video_pane_g3_ParamLimits

0x1b09,	// (0x0000f386) main_video_pane_g3

0x1b37,	// (0x0000f3b4) main_video_pane_g4_ParamLimits

0x1b37,	// (0x0000f3b4) main_video_pane_g4

0x1b65,	// (0x0000f3e2) main_video_pane_g5_ParamLimits

0x1b65,	// (0x0000f3e2) main_video_pane_g5

0xa033,	// (0x000178b0) main_video_pane_g6_ParamLimits

0xa033,	// (0x000178b0) main_video_pane_g6

0x0006,

0xf21c,	// (0x0001ca99) main_video_pane_g_ParamLimits

0xf21c,	// (0x0001ca99) main_video_pane_g

0x1b8c,	// (0x0000f409) main_video_pane_t1_ParamLimits

0x1b8c,	// (0x0000f409) main_video_pane_t1

0xa04d,	// (0x000178ca) cams_zoom_pane_g1

0xa056,	// (0x000178d3) cams_zoom_pane_g2

0xa05f,	// (0x000178dc) cams_zoom_pane_g3

0xa068,	// (0x000178e5) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0001caa8) cams_zoom_pane_g

0x1be9,	// (0x0000f466) grid_cams_pane

0x1bfe,	// (0x0000f47b) linegrid_cams_pane

0x1c0f,	// (0x0000f48c) cell_cams_pane_ParamLimits

0x1c0f,	// (0x0000f48c) cell_cams_pane

0xa071,	// (0x000178ee) cams_burst_image_pane

0xa079,	// (0x000178f6) cell_cams_pane_g1

0x9a28,	// (0x000172a5) grid_highlight_pane_cp03

0x9e11,	// (0x0001768e) mp_bg_pane_g1

0x9a28,	// (0x000172a5) bg_list_pane_cp03

0xbec2,	// (0x0001973f) bg_mp_pane

0xbeca,	// (0x00019747) grid_mp_pane

0xbed2,	// (0x0001974f) media_player_g1

0xbeda,	// (0x00019757) media_player_t1

0xbee8,	// (0x00019765) media_player_t2

0xbef6,	// (0x00019773) media_player_t3

0xbf04,	// (0x00019781) media_player_t4

0xbf12,	// (0x0001978f) media_player_t5

0xbf20,	// (0x0001979d) media_player_t6

0xbf2e,	// (0x000197ab) media_player_t7

0x0006,

0xf5da,	// (0x0001ce57) media_player_t

0xbf3c,	// (0x000197b9) wait_bar_pane_cp02

0xf5bf,	// (0x0001ce3c) main_usb_pane_t

0x3ac9,	// (0x00011346) cell_mp_pane

0x9e11,	// (0x0001768e) cell_mp_pane_g1

0x9a28,	// (0x000172a5) grid_highlight_pane_cp06

0xa081,	// (0x000178fe) grid_skin_colour_pane

0xa089,	// (0x00017906) list_highlight_pane_cp03

0x1d1d,	// (0x0000f59a) skin_g1

0xa091,	// (0x0001790e) skin_t1

0xa0a0,	// (0x0001791d) skin_t2

0x0001,

0xf260,	// (0x0001cadd) skin_t

0x1d25,	// (0x0000f5a2) cell_skin_colour_pane_ParamLimits

0x1d25,	// (0x0000f5a2) cell_skin_colour_pane

0xa0ae,	// (0x0001792b) cell_skin_colour_pane_g1

0x1d8e,	// (0x0000f60b) call_video_g1_ParamLimits

0x1d8e,	// (0x0000f60b) call_video_g1

0x1da4,	// (0x0000f621) call_video_g2_ParamLimits

0x1da4,	// (0x0000f621) call_video_g2

0x0001,

0xf265,	// (0x0001cae2) call_video_g_ParamLimits

0xf265,	// (0x0001cae2) call_video_g

0x1dec,	// (0x0000f669) call_video_uplink_pane_cp1_ParamLimits

0x1dec,	// (0x0000f669) call_video_uplink_pane_cp1

0xa0c0,	// (0x0001793d) call_video_uplink_pane_cp2

0x1e81,	// (0x0000f6fe) video_down_crop_pane_ParamLimits

0x1e81,	// (0x0000f6fe) video_down_crop_pane

0x1f44,	// (0x0000f7c1) video_down_pane_ParamLimits

0x1f44,	// (0x0000f7c1) video_down_pane

0xa0c8,	// (0x00017945) video_down_subqcif_pane_ParamLimits

0xa0c8,	// (0x00017945) video_down_subqcif_pane

0xa0e0,	// (0x0001795d) video_down_subqcif_pane_cp_ParamLimits

0xa0e0,	// (0x0001795d) video_down_subqcif_pane_cp

0xa104,	// (0x00017981) im_reading_pane_ParamLimits

0xa104,	// (0x00017981) im_reading_pane

0x2001,	// (0x0000f87e) im_writing_pane_ParamLimits

0x2001,	// (0x0000f87e) im_writing_pane

0x2017,	// (0x0000f894) im_reading_pane_t1

0xa11e,	// (0x0001799b) list_im_pane

0xa12f,	// (0x000179ac) scroll_pane_cp07

0x204d,	// (0x0000f8ca) im_writing_pane_t1_ParamLimits

0x204d,	// (0x0000f8ca) im_writing_pane_t1

0xa148,	// (0x000179c5) im_writing_pane_t2_ParamLimits

0xa148,	// (0x000179c5) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0001caec) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0001caec) im_writing_pane_t

0x9a28,	// (0x000172a5) input_focus_pane_cp04

0x9a28,	// (0x000172a5) input_focus_pane_cp05

0x2062,	// (0x0000f8df) list_im_single_pane_ParamLimits

0x2062,	// (0x0000f8df) list_im_single_pane

0xa165,	// (0x000179e2) list_single_im_pane_t1

0x3a8f,	// (0x0001130c) blid_accuracy_pane

0x3a97,	// (0x00011314) blid_compass_pane

0x3a9f,	// (0x0001131c) main_location_t1

0x3aad,	// (0x0001132a) main_location_t2

0x3abb,	// (0x00011338) main_location_t3

0x0002,

0xf5e9,	// (0x0001ce66) main_location_t

0x9a28,	// (0x000172a5) aid_levels_location

0x9e11,	// (0x0001768e) blid_accuracy_pane_g1

0x9e11,	// (0x0001768e) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0001cb4e) blid_accuracy_pane_g

0xa19f,	// (0x00017a1c) wml_content_pane

0xa1dd,	// (0x00017a5a) wml_button_pane_ParamLimits

0xa1dd,	// (0x00017a5a) wml_button_pane

0x2078,	// (0x0000f8f5) wml_list_single_large_pane_ParamLimits

0x2078,	// (0x0000f8f5) wml_list_single_large_pane

0x208c,	// (0x0000f909) wml_list_single_medium_pane_ParamLimits

0x208c,	// (0x0000f909) wml_list_single_medium_pane

0x20a1,	// (0x0000f91e) wml_list_single_small_pane_ParamLimits

0x20a1,	// (0x0000f91e) wml_list_single_small_pane

0xa1f1,	// (0x00017a6e) wml_selection_box_pane_ParamLimits

0xa1f1,	// (0x00017a6e) wml_selection_box_pane

0xa204,	// (0x00017a81) wml_list_single_pane_t1

0xa213,	// (0x00017a90) wml_list_single_medium_pane_t1

0xa222,	// (0x00017a9f) wml_list_single_large_pane_t1

0xa231,	// (0x00017aae) input_focus_pane_cp02_ParamLimits

0xa231,	// (0x00017aae) input_focus_pane_cp02

0xa244,	// (0x00017ac1) wml_selection_box_pane_g1

0xa24d,	// (0x00017aca) wml_selection_box_pane_t1_ParamLimits

0xa24d,	// (0x00017aca) wml_selection_box_pane_t1

0x9c83,	// (0x00017500) bg_wml_button_pane_ParamLimits

0x9c83,	// (0x00017500) bg_wml_button_pane

0xa265,	// (0x00017ae2) wml_button_pane_g1

0xa26d,	// (0x00017aea) wml_button_pane_t1

0xa265,	// (0x00017ae2) wml_button_bg_pane_g1

0xa27d,	// (0x00017afa) wml_button_bg_pane_g2

0xa285,	// (0x00017b02) wml_button_bg_pane_g3

0xa28d,	// (0x00017b0a) wml_button_bg_pane_g4

0xa295,	// (0x00017b12) wml_button_bg_pane_g5

0xa29d,	// (0x00017b1a) wml_button_bg_pane_g6

0xa2a5,	// (0x00017b22) wml_button_bg_pane_g7

0xa2ad,	// (0x00017b2a) wml_button_bg_pane_g8

0xa2b5,	// (0x00017b32) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0001caf1) wml_button_bg_pane_g

0x20b8,	// (0x0000f935) bg_list_pane_cp02

0xa2bd,	// (0x00017b3a) mce_header_pane_ParamLimits

0xa2bd,	// (0x00017b3a) mce_header_pane

0xa2d1,	// (0x00017b4e) mce_icon_pane

0xa2d1,	// (0x00017b4e) mce_image_pane

0xa2da,	// (0x00017b57) mce_text_pane_ParamLimits

0xa2da,	// (0x00017b57) mce_text_pane

0x20c1,	// (0x0000f93e) scroll_pane_cp03

0x20c1,	// (0x0000f93e) scroll_pane_cp04

0xa2ee,	// (0x00017b6b) scroll_pane_cp05_ParamLimits

0xa2ee,	// (0x00017b6b) scroll_pane_cp05

0x20cb,	// (0x0000f948) mce_header_field_pane_ParamLimits

0x20cb,	// (0x0000f948) mce_header_field_pane

0x20e2,	// (0x0000f95f) mce_header_field_pane_2_ParamLimits

0x20e2,	// (0x0000f95f) mce_header_field_pane_2

0x20f8,	// (0x0000f975) mce_header_field_pane_3

0x2100,	// (0x0000f97d) list_single_mce_message_pane_ParamLimits

0x2100,	// (0x0000f97d) list_single_mce_message_pane

0x2115,	// (0x0000f992) list_single_mce_smart_pane_ParamLimits

0x2115,	// (0x0000f992) list_single_mce_smart_pane

0xa2fa,	// (0x00017b77) input_focus_pane_cp03

0xa303,	// (0x00017b80) list_header_data_pane

0x2135,	// (0x0000f9b2) mce_header_field_pane_t1

0x2143,	// (0x0000f9c0) list_single_mce_header_pane_ParamLimits

0x2143,	// (0x0000f9c0) list_single_mce_header_pane

0xa30b,	// (0x00017b88) list_single_mce_header_pane_t1

0xa31a,	// (0x00017b97) list_single_mce_message_pane_g1

0xa323,	// (0x00017ba0) list_single_mce_message_pane_t1

0x217d,	// (0x0000f9fa) bg_cale_heading_pane_cp01_ParamLimits

0x217d,	// (0x0000f9fa) bg_cale_heading_pane_cp01

0xa332,	// (0x00017baf) bg_cale_pane_cp02_ParamLimits

0xa332,	// (0x00017baf) bg_cale_pane_cp02

0x21ac,	// (0x0000fa29) cale_month_corner_pane

0x21cb,	// (0x0000fa48) cale_month_day_heading_pane_ParamLimits

0x21cb,	// (0x0000fa48) cale_month_day_heading_pane

0x2202,	// (0x0000fa7f) cale_month_pane_g1_ParamLimits

0x2202,	// (0x0000fa7f) cale_month_pane_g1

0x2226,	// (0x0000faa3) cale_month_pane_g2_ParamLimits

0x2226,	// (0x0000faa3) cale_month_pane_g2

0x224e,	// (0x0000facb) cale_month_pane_g3_ParamLimits

0x224e,	// (0x0000facb) cale_month_pane_g3

0x228a,	// (0x0000fb07) cale_month_pane_g4_ParamLimits

0x228a,	// (0x0000fb07) cale_month_pane_g4

0x22c6,	// (0x0000fb43) cale_month_pane_g5_ParamLimits

0x22c6,	// (0x0000fb43) cale_month_pane_g5

0x2302,	// (0x0000fb7f) cale_month_pane_g6_ParamLimits

0x2302,	// (0x0000fb7f) cale_month_pane_g6

0x233e,	// (0x0000fbbb) cale_month_pane_g7_ParamLimits

0x233e,	// (0x0000fbbb) cale_month_pane_g7

0x237a,	// (0x0000fbf7) cale_month_pane_g8_ParamLimits

0x237a,	// (0x0000fbf7) cale_month_pane_g8

0x23be,	// (0x0000fc3b) cale_month_pane_g9_ParamLimits

0x23be,	// (0x0000fc3b) cale_month_pane_g9

0x2400,	// (0x0000fc7d) cale_month_pane_g10_ParamLimits

0x2400,	// (0x0000fc7d) cale_month_pane_g10

0x2442,	// (0x0000fcbf) cale_month_pane_g11_ParamLimits

0x2442,	// (0x0000fcbf) cale_month_pane_g11

0x2484,	// (0x0000fd01) cale_month_pane_g12_ParamLimits

0x2484,	// (0x0000fd01) cale_month_pane_g12

0x24c6,	// (0x0000fd43) cale_month_pane_g13_ParamLimits

0x24c6,	// (0x0000fd43) cale_month_pane_g13

0x000c,

0xf287,	// (0x0001cb04) cale_month_pane_g_ParamLimits

0xf287,	// (0x0001cb04) cale_month_pane_g

0x2508,	// (0x0000fd85) cale_month_week_pane

0x2524,	// (0x0000fda1) grid_cale_month_pane_ParamLimits

0x2524,	// (0x0000fda1) grid_cale_month_pane

0x2552,	// (0x0000fdcf) cale_month_day_heading_pane_t1

0x25d8,	// (0x0000fe55) cale_month_day_heading_pane_t2

0x2669,	// (0x0000fee6) cale_month_day_heading_pane_t3

0x26fa,	// (0x0000ff77) cale_month_day_heading_pane_t4

0x278b,	// (0x00010008) cale_month_day_heading_pane_t5

0x281c,	// (0x00010099) cale_month_day_heading_pane_t6

0x28ad,	// (0x0001012a) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0001cb1f) cale_month_day_heading_pane_t

0x9f8b,	// (0x00017808) bg_cale_side_pane_cp01

0x2942,	// (0x000101bf) cale_month_week_pane_t1

0x295b,	// (0x000101d8) cale_month_week_pane_t2

0x2974,	// (0x000101f1) cale_month_week_pane_t3

0x298d,	// (0x0001020a) cale_month_week_pane_t4

0x29a6,	// (0x00010223) cale_month_week_pane_t5

0x29bf,	// (0x0001023c) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0001cb2e) cale_month_week_pane_t

0x29d8,	// (0x00010255) cell_cale_month_pane_ParamLimits

0x29d8,	// (0x00010255) cell_cale_month_pane

0xa371,	// (0x00017bee) cell_cale_month_pane_g1

0x2af4,	// (0x00010371) cell_cale_month_pane_t1_ParamLimits

0x2af4,	// (0x00010371) cell_cale_month_pane_t1

0x9f99,	// (0x00017816) grid_highlight_pane_cp08

0x9e11,	// (0x0001768e) main_smil_g1

0x2b14,	// (0x00010391) smil_status_pane

0xa37d,	// (0x00017bfa) smil_text_pane

0xbda2,	// (0x0001961f) bg_popup_call3_rect_pane_g8

0xbdaa,	// (0x00019627) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0001cde7) bg_popup_call3_rect_pane_g

0xc08b,	// (0x00019908) smil_status_volume_pane_g1

0x2b25,	// (0x000103a2) smil_status_pane_t1

0xc0be,	// (0x0001993b) volume_smil_pane

0xa387,	// (0x00017c04) list_smil_text_pane

0x2b3c,	// (0x000103b9) scroll_pane_cp011

0x2b47,	// (0x000103c4) smil_text_list_pane_t1_ParamLimits

0x2b47,	// (0x000103c4) smil_text_list_pane_t1

0xa391,	// (0x00017c0e) aid_volume_smil_ParamLimits

0xa391,	// (0x00017c0e) aid_volume_smil

0x9e11,	// (0x0001768e) smil_volume_pane_g1

0x9e11,	// (0x0001768e) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0001cb4e) smil_volume_pane_g

0x1314,	// (0x0000eb91) listscroll_cale_day_pane

0xa3b3,	// (0x00017c30) bg_cale_pane

0xa3cb,	// (0x00017c48) list_cale_pane

0xa3ee,	// (0x00017c6b) scroll_pane_cp09

0xa3ff,	// (0x00017c7c) cale_bg_pane_g1

0xa407,	// (0x00017c84) cale_bg_pane_g2

0xa40f,	// (0x00017c8c) cale_bg_pane_g3

0xa417,	// (0x00017c94) cale_bg_pane_g4

0xa41f,	// (0x00017c9c) cale_bg_pane_g5

0xa427,	// (0x00017ca4) cale_bg_pane_g6

0xa42f,	// (0x00017cac) cale_bg_pane_g7

0xa437,	// (0x00017cb4) cale_bg_pane_g8

0xa43f,	// (0x00017cbc) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0001cb53) cale_bg_pane_g

0x2b8b,	// (0x00010408) list_cale_time_pane_ParamLimits

0x2b8b,	// (0x00010408) list_cale_time_pane

0xa447,	// (0x00017cc4) list_cale_time_pane_g1_ParamLimits

0xa447,	// (0x00017cc4) list_cale_time_pane_g1

0xa453,	// (0x00017cd0) list_cale_time_pane_g2_ParamLimits

0xa453,	// (0x00017cd0) list_cale_time_pane_g2

0x2ba0,	// (0x0001041d) list_cale_time_pane_g3_ParamLimits

0x2ba0,	// (0x0001041d) list_cale_time_pane_g3

0x2bac,	// (0x00010429) list_cale_time_pane_g4_ParamLimits

0x2bac,	// (0x00010429) list_cale_time_pane_g4

0x2bb8,	// (0x00010435) list_cale_time_pane_g5_ParamLimits

0x2bb8,	// (0x00010435) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0001cb66) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0001cb66) list_cale_time_pane_g

0xa46d,	// (0x00017cea) list_cale_time_pane_t1_ParamLimits

0xa46d,	// (0x00017cea) list_cale_time_pane_t1

0xa495,	// (0x00017d12) list_cale_time_pane_t2_ParamLimits

0xa495,	// (0x00017d12) list_cale_time_pane_t2

0x2f4e,	// (0x000107cb) aid_blid_cardinal_pane

0x2f8c,	// (0x00010809) compass_pane_t4

0xa4bd,	// (0x00017d3a) list_cale_time_pane_t4_ParamLimits

0xa4bd,	// (0x00017d3a) list_cale_time_pane_t4

0x2f9a,	// (0x00010817) compass_pane_t5

0x2fa8,	// (0x00010825) compass_pane_t6

0x2fb6,	// (0x00010833) compass_pane_t7

0xa997,	// (0x00018214) navi_pane_cc_t1

0xab4e,	// (0x000183cb) aid_phob_thumbnail_center_pane

0x3541,	// (0x00010dbe) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0001cb73) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0001cb73) list_cale_time_pane_t

0x9681,	// (0x00016efe) bg_popup_window_pane_cp02_ParamLimits

0x9681,	// (0x00016efe) bg_popup_window_pane_cp02

0xa4e5,	// (0x00017d62) heading_pane_cp01_ParamLimits

0xa4e5,	// (0x00017d62) heading_pane_cp01

0xa4f1,	// (0x00017d6e) loc_req_pane_ParamLimits

0xa4f1,	// (0x00017d6e) loc_req_pane

0xa501,	// (0x00017d7e) loc_type_pane_ParamLimits

0xa501,	// (0x00017d7e) loc_type_pane

0xa513,	// (0x00017d90) loc_type_pane_t1_ParamLimits

0xa513,	// (0x00017d90) loc_type_pane_t1

0xa525,	// (0x00017da2) loc_type_pane_t2_ParamLimits

0xa525,	// (0x00017da2) loc_type_pane_t2

0xa537,	// (0x00017db4) loc_type_pane_t3_ParamLimits

0xa537,	// (0x00017db4) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0001cb7a) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0001cb7a) loc_type_pane_t

0xa549,	// (0x00017dc6) list_loc_req_pane

0xa553,	// (0x00017dd0) scroll_pane_cp012

0x2bc4,	// (0x00010441) list_single_loc_request_popup_menu_pane_ParamLimits

0x2bc4,	// (0x00010441) list_single_loc_request_popup_menu_pane

0xa55c,	// (0x00017dd9) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa55c,	// (0x00017dd9) list_single_loc_request_popup_menu_pane_g1

0xa568,	// (0x00017de5) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa568,	// (0x00017de5) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0001cb81) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0001cb81) list_single_loc_request_popup_menu_pane_g

0xa574,	// (0x00017df1) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa574,	// (0x00017df1) list_single_loc_request_popup_menu_pane_t1

0x9c83,	// (0x00017500) bg_popup_window_pane_cp03_ParamLimits

0x9c83,	// (0x00017500) bg_popup_window_pane_cp03

0xa58a,	// (0x00017e07) heading_loc_req_pane_ParamLimits

0xa58a,	// (0x00017e07) heading_loc_req_pane

0x2bd1,	// (0x0001044e) popup_dyc_status_message_window_g1_ParamLimits

0x2bd1,	// (0x0001044e) popup_dyc_status_message_window_g1

0x2be5,	// (0x00010462) popup_dyc_status_message_window_t1_ParamLimits

0x2be5,	// (0x00010462) popup_dyc_status_message_window_t1

0x2bfa,	// (0x00010477) popup_dyc_status_message_window_t2_ParamLimits

0x2bfa,	// (0x00010477) popup_dyc_status_message_window_t2

0x2c0f,	// (0x0001048c) popup_dyc_status_message_window_t3_ParamLimits

0x2c0f,	// (0x0001048c) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0001cb86) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0001cb86) popup_dyc_status_message_window_t

0x9a28,	// (0x000172a5) bg_heading_pane_cp01

0xa596,	// (0x00017e13) heading_loc_req_pane_g1

0xa59e,	// (0x00017e1b) heading_loc_req_pane_g2

0xa5a6,	// (0x00017e23) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0001cb8d) heading_loc_req_pane_g

0xa5ae,	// (0x00017e2b) heading_loc_req_pane_t1

0xa5bd,	// (0x00017e3a) bg_popup_sub_pane_cp01_ParamLimits

0xa5bd,	// (0x00017e3a) bg_popup_sub_pane_cp01

0xa5cb,	// (0x00017e48) popup_cale_events_window_g1_ParamLimits

0xa5cb,	// (0x00017e48) popup_cale_events_window_g1

0xa5eb,	// (0x00017e68) popup_cale_events_window_g2_ParamLimits

0xa5eb,	// (0x00017e68) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0001cbc1) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0001cbc1) popup_cale_events_window_g

0xa60b,	// (0x00017e88) popup_cale_events_window_t1_ParamLimits

0xa60b,	// (0x00017e88) popup_cale_events_window_t1

0xa61d,	// (0x00017e9a) popup_cale_events_window_t2_ParamLimits

0xa61d,	// (0x00017e9a) popup_cale_events_window_t2

0xa65b,	// (0x00017ed8) popup_cale_events_window_t3_ParamLimits

0xa65b,	// (0x00017ed8) popup_cale_events_window_t3

0xa695,	// (0x00017f12) popup_cale_events_window_t4_ParamLimits

0xa695,	// (0x00017f12) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0001cbc6) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0001cbc6) popup_cale_events_window_t

0x2d39,	// (0x000105b6) call_type_pane

0x2d49,	// (0x000105c6) popup_call_status_window_g1

0x2d5d,	// (0x000105da) popup_call_status_window_g2

0x2d71,	// (0x000105ee) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0001cbcf) popup_call_status_window_g

0xa6cb,	// (0x00017f48) call_type_pane_g1

0xa6d4,	// (0x00017f51) call_type_pane_g2

0x0001,

0xf359,	// (0x0001cbd6) call_type_pane_g

0x9a28,	// (0x000172a5) bg_popup_sub_pane_cp02

0xa6dd,	// (0x00017f5a) listscroll_popup_wml_pane

0xa6e5,	// (0x00017f62) list_wml_pane

0xa6ef,	// (0x00017f6c) scroll_pane_cp013

0x2d81,	// (0x000105fe) list_single_graphic_popup_wml_pane_ParamLimits

0x2d81,	// (0x000105fe) list_single_graphic_popup_wml_pane

0x9e11,	// (0x0001768e) list_single_graphic_popup_wml_pane_g1

0xa6f8,	// (0x00017f75) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0001cbdb) list_single_graphic_popup_wml_pane_g

0xa700,	// (0x00017f7d) list_single_graphic_popup_wml_pane_t1

0xa716,	// (0x00017f93) aid_call_pane

0x9c7b,	// (0x000174f8) popup_clock_analogue_window_g1

0x9c7b,	// (0x000174f8) popup_clock_analogue_window_g2

0xa71e,	// (0x00017f9b) popup_clock_analogue_window_g3

0xa71e,	// (0x00017f9b) popup_clock_analogue_window_g4

0x9e11,	// (0x0001768e) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0001cbe0) popup_clock_analogue_window_g

0xa726,	// (0x00017fa3) popup_clock_analogue_window_t1

0xa734,	// (0x00017fb1) clock_digital_number_pane_ParamLimits

0xa734,	// (0x00017fb1) clock_digital_number_pane

0xa740,	// (0x00017fbd) clock_digital_number_pane_cp02_ParamLimits

0xa740,	// (0x00017fbd) clock_digital_number_pane_cp02

0xa74c,	// (0x00017fc9) clock_digital_number_pane_cp03_ParamLimits

0xa74c,	// (0x00017fc9) clock_digital_number_pane_cp03

0xa758,	// (0x00017fd5) clock_digital_number_pane_cp04_ParamLimits

0xa758,	// (0x00017fd5) clock_digital_number_pane_cp04

0xa764,	// (0x00017fe1) clock_digital_separator_pane_ParamLimits

0xa764,	// (0x00017fe1) clock_digital_separator_pane

0xa770,	// (0x00017fed) popup_clock_digital_window_t1

0x9e11,	// (0x0001768e) clock_digital_number_pane_g1

0x9e11,	// (0x0001768e) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0001cb4e) clock_digital_number_pane_g

0x9e11,	// (0x0001768e) clock_digital_separator_pane_g1

0x9e11,	// (0x0001768e) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0001cb4e) clock_digital_separator_pane_g

0x9a28,	// (0x000172a5) bg_popup_window_pane_cp04

0xa78d,	// (0x0001800a) heading_pane_cp03

0xa795,	// (0x00018012) listscroll_popup_gms_pane

0xa79d,	// (0x0001801a) grid_large_graphic_popup_pane

0xa7a7,	// (0x00018024) listscroll_popup_gms_pane_g1

0xa7af,	// (0x0001802c) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0001cbeb) listscroll_popup_gms_pane_g

0xa1d5,	// (0x00017a52) scroll_pane_cp014

0x2d94,	// (0x00010611) cell_large_graphic_popup_pane_ParamLimits

0x2d94,	// (0x00010611) cell_large_graphic_popup_pane

0x2daa,	// (0x00010627) cell_large_graphic_popup_pane_g1_ParamLimits

0x2daa,	// (0x00010627) cell_large_graphic_popup_pane_g1

0xa7b7,	// (0x00018034) cell_large_graphic_popup_pane_g2_ParamLimits

0xa7b7,	// (0x00018034) cell_large_graphic_popup_pane_g2

0xa7c3,	// (0x00018040) cell_large_graphic_popup_pane_g3_ParamLimits

0xa7c3,	// (0x00018040) cell_large_graphic_popup_pane_g3

0xa7d0,	// (0x0001804d) cell_large_graphic_popup_pane_g4_ParamLimits

0xa7d0,	// (0x0001804d) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0001cbf0) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0001cbf0) cell_large_graphic_popup_pane_g

0xa7e0,	// (0x0001805d) grid_highlight_pane_cp010

0x9e11,	// (0x0001768e) bg_popup_call_pane_g1

0xa7ea,	// (0x00018067) list_single_graphic_popup_conf_pane_ParamLimits

0xa7ea,	// (0x00018067) list_single_graphic_popup_conf_pane

0xa7fd,	// (0x0001807a) list_highlight_pane_cp01

0xa806,	// (0x00018083) list_single_graphic_popup_conf_pane_g1

0xa80e,	// (0x0001808b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0001cbf9) list_single_graphic_popup_conf_pane_g

0xa816,	// (0x00018093) list_single_graphic_popup_conf_pane_t1

0xa824,	// (0x000180a1) linegrid_cams_pane_g1

0x2db6,	// (0x00010633) linegrid_cams_pane_g2

0x9f1c,	// (0x00017799) linegrid_cams_pane_g3

0xa82d,	// (0x000180aa) linegrid_cams_pane_g4

0x2dbf,	// (0x0001063c) linegrid_cams_pane_g5

0x2dc8,	// (0x00010645) linegrid_cams_pane_g6

0x9fcc,	// (0x00017849) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0001cbfe) linegrid_cams_pane_g

0xa836,	// (0x000180b3) popup_clock_analogue_window

0xa836,	// (0x000180b3) popup_clock_digital_window

0x9a28,	// (0x000172a5) popup_phob_thumbnail_window

0x9e11,	// (0x0001768e) call_video_uplink_pane_g1

0xa83f,	// (0x000180bc) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0001cc0d) call_video_uplink_pane_g

0x9f99,	// (0x00017816) video_uplink_pane

0xa847,	// (0x000180c4) mce_image_pane_g1

0x2dd1,	// (0x0001064e) mce_image_pane_g2

0x2dd9,	// (0x00010656) mce_image_pane_g3

0x2de1,	// (0x0001065e) mce_image_pane_g4

0x2de9,	// (0x00010666) mce_image_pane_g5

0x0004,

0xf395,	// (0x0001cc12) mce_image_pane_g

0xa851,	// (0x000180ce) control_top_pane_stacon_cp01_ParamLimits

0xa851,	// (0x000180ce) control_top_pane_stacon_cp01

0xa861,	// (0x000180de) uni_indicator_pane_stacon_cp01_ParamLimits

0xa861,	// (0x000180de) uni_indicator_pane_stacon_cp01

0xa872,	// (0x000180ef) bg_popup_sub_pane_cp03

0xa87c,	// (0x000180f9) chi_dic_find_pane

0x2df1,	// (0x0001066e) listscroll_chi_dic_pane

0xa884,	// (0x00018101) main_pane_chidic_g1

0xa88c,	// (0x00018109) chi_dic_find_pane_t1

0xa89a,	// (0x00018117) find_chidic_pane

0xa8a3,	// (0x00018120) chi_dic_list_pane_ParamLimits

0xa8a3,	// (0x00018120) chi_dic_list_pane

0xa8b4,	// (0x00018131) scroll_pane_cp020

0xa8bc,	// (0x00018139) find_chidic_pane_t1

0x9a28,	// (0x000172a5) input_focus_pane_cp06

0x2e05,	// (0x00010682) list_chi_dic_pane_ParamLimits

0x2e05,	// (0x00010682) list_chi_dic_pane

0x2e17,	// (0x00010694) list_chi_dic_pane_t1_ParamLimits

0x2e17,	// (0x00010694) list_chi_dic_pane_t1

0x9a28,	// (0x000172a5) list_highlight_pane_cp020

0xa8cb,	// (0x00018148) bg_cale_heading_pane_g1

0x2e2a,	// (0x000106a7) bg_cale_heading_pane_g2

0x2e32,	// (0x000106af) bg_cale_heading_pane_g3

0x2e3a,	// (0x000106b7) bg_cale_heading_pane_g4

0x2e42,	// (0x000106bf) bg_cale_heading_pane_g5

0x2e4a,	// (0x000106c7) bg_cale_heading_pane_g6

0x2e52,	// (0x000106cf) bg_cale_heading_pane_g7

0x2e5a,	// (0x000106d7) bg_cale_heading_pane_g8

0x2e62,	// (0x000106df) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0001cc1d) bg_cale_heading_pane_g

0xa8cb,	// (0x00018148) bg_cale_side_pane_g1

0x2e6a,	// (0x000106e7) bg_cale_side_pane_g2

0x2e72,	// (0x000106ef) bg_cale_side_pane_g3

0x2e7a,	// (0x000106f7) bg_cale_side_pane_g4

0x2e82,	// (0x000106ff) bg_cale_side_pane_g5

0x2e8a,	// (0x00010707) bg_cale_side_pane_g6

0x2e92,	// (0x0001070f) bg_cale_side_pane_g7

0x2e9a,	// (0x00010717) bg_cale_side_pane_g8

0x2ea2,	// (0x0001071f) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0001cc30) bg_cale_side_pane_g

0x2eaa,	// (0x00010727) popup_call_status_window_ParamLimits

0x2eaa,	// (0x00010727) popup_call_status_window

0xa8d3,	// (0x00018150) stacon_top_pane

0xa8db,	// (0x00018158) status_pane_ParamLimits

0xa8db,	// (0x00018158) status_pane

0xa8f5,	// (0x00018172) status_small_pane

0xa8fd,	// (0x0001817a) control_pane

0x9a28,	// (0x000172a5) stacon_bottom_pane

0xa905,	// (0x00018182) list_single_mce_smart_pane_t1_ParamLimits

0xa905,	// (0x00018182) list_single_mce_smart_pane_t1

0xa918,	// (0x00018195) list_single_mce_smart_pane_t2_ParamLimits

0xa918,	// (0x00018195) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0001cc43) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0001cc43) list_single_mce_smart_pane_t

0x2ef1,	// (0x0001076e) compass_pane

0x2efa,	// (0x00010777) main_location2_pane_t1

0x2f10,	// (0x0001078d) main_location2_pane_t2

0x2f26,	// (0x000107a3) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0001cc48) main_location2_pane_t

0xa940,	// (0x000181bd) compass_pane_g1_ParamLimits

0xa940,	// (0x000181bd) compass_pane_g1

0x2f6e,	// (0x000107eb) compass_pane_t1

0x2f7d,	// (0x000107fa) compass_pane_t2

0x0005,

0xf3d4,	// (0x0001cc51) compass_pane_t

0x2fc4,	// (0x00010841) text_secondary_cp61

0xa98e,	// (0x0001820b) navi_pane_cams_g5

0xa9da,	// (0x00018257) navi_pane_im_t1

0xa9e8,	// (0x00018265) navi_pane_mp_g1_ParamLimits

0xa9e8,	// (0x00018265) navi_pane_mp_g1

0xa9fc,	// (0x00018279) navi_pane_mp_g2_ParamLimits

0xa9fc,	// (0x00018279) navi_pane_mp_g2

0xaa08,	// (0x00018285) navi_pane_mp_g3_ParamLimits

0xaa08,	// (0x00018285) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0001cc65) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0001cc65) navi_pane_mp_g

0xaa14,	// (0x00018291) navi_pane_mp_t1

0xaa22,	// (0x0001829f) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0001cc6c) navi_pane_mp_t

0xaa8d,	// (0x0001830a) navi_pane_vt_g1

0xaa14,	// (0x00018291) navi_pane_vt_t1

0xaa95,	// (0x00018312) navi_slider_pane

0x9fdd,	// (0x0001785a) zooming_pane

0xaa9d,	// (0x0001831a) navi_slider_pane_g1

0xaaa6,	// (0x00018323) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0001cc73) navi_slider_pane_g

0xaad3,	// (0x00018350) aid_levels_zoom

0xaadb,	// (0x00018358) zooming_pane_g1

0xaae3,	// (0x00018360) zooming_pane_g2

0xaae3,	// (0x00018360) zooming_pane_g3

0x0002,

0xf405,	// (0x0001cc82) zooming_pane_g

0xaaeb,	// (0x00018368) level_10_zoom

0xaaf4,	// (0x00018371) level_11_zoom

0xaafd,	// (0x0001837a) level_1_zoom

0xab06,	// (0x00018383) level_2_zoom

0xab0f,	// (0x0001838c) level_3_zoom

0xab18,	// (0x00018395) level_4_zoom

0xab21,	// (0x0001839e) level_5_zoom

0xab2a,	// (0x000183a7) level_6_zoom

0xab33,	// (0x000183b0) level_7_zoom

0xab3c,	// (0x000183b9) level_8_zoom

0xab45,	// (0x000183c2) level_9_zoom

0xab56,	// (0x000183d3) popup_phob_thumbnail_window_g1

0xab5e,	// (0x000183db) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0001cc89) popup_phob_thumbnail_window_g

0xbf44,	// (0x000197c1) level_1_location

0xbf4c,	// (0x000197c9) level_2_location

0xbf54,	// (0x000197d1) level_3_location

0xbf5c,	// (0x000197d9) level_4_location

0x9fdd,	// (0x0001785a) level_5_location

0x305a,	// (0x000108d7) mce_icon_pane_g1

0x3062,	// (0x000108df) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0001cc8e) mce_icon_pane_g

0x306a,	// (0x000108e7) main_mup_pane_g1_ParamLimits

0x306a,	// (0x000108e7) main_mup_pane_g1

0x3080,	// (0x000108fd) main_mup_pane_g2_ParamLimits

0x3080,	// (0x000108fd) main_mup_pane_g2

0x3098,	// (0x00010915) main_mup_pane_g3_ParamLimits

0x3098,	// (0x00010915) main_mup_pane_g3

0x30b0,	// (0x0001092d) main_mup_pane_g4_ParamLimits

0x30b0,	// (0x0001092d) main_mup_pane_g4

0x30c8,	// (0x00010945) main_mup_pane_g5_ParamLimits

0x30c8,	// (0x00010945) main_mup_pane_g5

0x30e2,	// (0x0001095f) main_mup_pane_g6_ParamLimits

0x30e2,	// (0x0001095f) main_mup_pane_g6

0x30fa,	// (0x00010977) main_mup_pane_g7_ParamLimits

0x30fa,	// (0x00010977) main_mup_pane_g7

0x3112,	// (0x0001098f) main_mup_pane_g8_ParamLimits

0x3112,	// (0x0001098f) main_mup_pane_g8

0x312a,	// (0x000109a7) main_mup_pane_g9_ParamLimits

0x312a,	// (0x000109a7) main_mup_pane_g9

0x313e,	// (0x000109bb) main_mup_pane_g10_ParamLimits

0x313e,	// (0x000109bb) main_mup_pane_g10

0x3152,	// (0x000109cf) main_mup_pane_g11_ParamLimits

0x3152,	// (0x000109cf) main_mup_pane_g11

0x3164,	// (0x000109e1) main_mup_pane_g12_ParamLimits

0x3164,	// (0x000109e1) main_mup_pane_g12

0x3178,	// (0x000109f5) main_mup_pane_g13_ParamLimits

0x3178,	// (0x000109f5) main_mup_pane_g13

0x000c,

0xf416,	// (0x0001cc93) main_mup_pane_g_ParamLimits

0xf416,	// (0x0001cc93) main_mup_pane_g

0x318a,	// (0x00010a07) main_mup_pane_t1_ParamLimits

0x318a,	// (0x00010a07) main_mup_pane_t1

0x31a4,	// (0x00010a21) main_mup_pane_t2_ParamLimits

0x31a4,	// (0x00010a21) main_mup_pane_t2

0x31bc,	// (0x00010a39) main_mup_pane_t3_ParamLimits

0x31bc,	// (0x00010a39) main_mup_pane_t3

0x31d4,	// (0x00010a51) main_mup_pane_t4_ParamLimits

0x31d4,	// (0x00010a51) main_mup_pane_t4

0x31f2,	// (0x00010a6f) main_mup_pane_t5_ParamLimits

0x31f2,	// (0x00010a6f) main_mup_pane_t5

0x3207,	// (0x00010a84) main_mup_pane_t6_ParamLimits

0x3207,	// (0x00010a84) main_mup_pane_t6

0x0005,

0xf431,	// (0x0001ccae) main_mup_pane_t_ParamLimits

0xf431,	// (0x0001ccae) main_mup_pane_t

0x3219,	// (0x00010a96) mup_progress_pane_ParamLimits

0x3219,	// (0x00010a96) mup_progress_pane

0x3225,	// (0x00010aa2) mup_visualizer_pane_ParamLimits

0x3225,	// (0x00010aa2) mup_visualizer_pane

0x324d,	// (0x00010aca) mup_volume_pane_ParamLimits

0x324d,	// (0x00010aca) mup_volume_pane

0xab66,	// (0x000183e3) mup_visualizer_pane_g1_ParamLimits

0xab66,	// (0x000183e3) mup_visualizer_pane_g1

0xab66,	// (0x000183e3) mup_visualizer_pane_g2_ParamLimits

0xab66,	// (0x000183e3) mup_visualizer_pane_g2

0xa940,	// (0x000181bd) mup_visualizer_pane_g3_ParamLimits

0xa940,	// (0x000181bd) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0001ccbb) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0001ccbb) mup_visualizer_pane_g

0x9e11,	// (0x0001768e) mup_volume_pane_g1

0xab7c,	// (0x000183f9) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0001ccc2) mup_volume_pane_g

0x9e11,	// (0x0001768e) mup_progress_pane_g1

0xab85,	// (0x00018402) mup_progress_pane_g2

0xab8e,	// (0x0001840b) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0001ccc7) mup_progress_pane_g

0x9a28,	// (0x000172a5) bg_popup_window_pane_cp05

0xab97,	// (0x00018414) heading_pane_cp02_ParamLimits

0xab97,	// (0x00018414) heading_pane_cp02

0xabb1,	// (0x0001842e) list_popup_blid_pane

0xabb9,	// (0x00018436) list_blid_sat_info_pane_ParamLimits

0xabb9,	// (0x00018436) list_blid_sat_info_pane

0xabcc,	// (0x00018449) list_blid_sat_info_pane_g1

0xabd4,	// (0x00018451) list_blid_sat_info_pane_t1

0x333d,	// (0x00010bba) mup_equalizer_pane_ParamLimits

0x333d,	// (0x00010bba) mup_equalizer_pane

0x3356,	// (0x00010bd3) mup_equalizer_pane_cp1_ParamLimits

0x3356,	// (0x00010bd3) mup_equalizer_pane_cp1

0x336f,	// (0x00010bec) mup_equalizer_pane_cp2_ParamLimits

0x336f,	// (0x00010bec) mup_equalizer_pane_cp2

0x3388,	// (0x00010c05) mup_equalizer_pane_cp3_ParamLimits

0x3388,	// (0x00010c05) mup_equalizer_pane_cp3

0x33a1,	// (0x00010c1e) mup_equalizer_pane_cp4_ParamLimits

0x33a1,	// (0x00010c1e) mup_equalizer_pane_cp4

0x33ba,	// (0x00010c37) mup_equalizer_pane_cp5

0x33cc,	// (0x00010c49) mup_equalizer_pane_cp6

0x33de,	// (0x00010c5b) mup_equalizer_pane_cp7

0xbe22,	// (0x0001969f) bg_popup_call_poc_act_pane_g9

0xbe2a,	// (0x000196a7) bg_popup_call_poc_act_pane_g10

0xbe32,	// (0x000196af) bg_popup_call_poc_act_pane_g11

0x000a,

0x9c83,	// (0x00017500) mup_scale_pane

0x9e11,	// (0x0001768e) mup_scale_pane_g1

0xabe2,	// (0x0001845f) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0001cce3) mup_scale_pane_g

0xac06,	// (0x00018483) msg_data_pane

0xac0e,	// (0x0001848b) scroll_pane_cp017

0x3404,	// (0x00010c81) bg_list_pane_cp04_ParamLimits

0x3404,	// (0x00010c81) bg_list_pane_cp04

0xac1e,	// (0x0001849b) msg_data_pane_g1

0x2dd1,	// (0x0001064e) msg_data_pane_g2

0x2dd9,	// (0x00010656) msg_data_pane_g3

0x341c,	// (0x00010c99) msg_data_pane_g4

0x2de9,	// (0x00010666) msg_data_pane_g5

0x305a,	// (0x000108d7) msg_data_pane_g6

0x3424,	// (0x00010ca1) msg_data_pane_g7

0x0006,

0xf475,	// (0x0001ccf2) msg_data_pane_g

0x342c,	// (0x00010ca9) msg_text_pane_ParamLimits

0x342c,	// (0x00010ca9) msg_text_pane

0x3453,	// (0x00010cd0) qrid_highlight_pane_cp011_ParamLimits

0x3453,	// (0x00010cd0) qrid_highlight_pane_cp011

0x9a28,	// (0x000172a5) msg_body_pane

0x9a28,	// (0x000172a5) msg_header_pane

0xac2f,	// (0x000184ac) input_focus_pane_cp07

0xac44,	// (0x000184c1) msg_header_pane_t1_ParamLimits

0xac44,	// (0x000184c1) msg_header_pane_t1

0xac56,	// (0x000184d3) msg_header_pane_t2_ParamLimits

0xac56,	// (0x000184d3) msg_header_pane_t2

0x0001,

0xf489,	// (0x0001cd06) msg_header_pane_t_ParamLimits

0xf489,	// (0x0001cd06) msg_header_pane_t

0xac68,	// (0x000184e5) msg_body_pane_g1

0xac70,	// (0x000184ed) msg_body_pane_t1_ParamLimits

0xac70,	// (0x000184ed) msg_body_pane_t1

0xac9b,	// (0x00018518) msg_body_pane_t2_ParamLimits

0xac9b,	// (0x00018518) msg_body_pane_t2

0xacad,	// (0x0001852a) msg_body_pane_t3_ParamLimits

0xacad,	// (0x0001852a) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0001cd0b) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0001cd0b) msg_body_pane_t

0x34ab,	// (0x00010d28) main_viewer_pane_g1_ParamLimits

0x34ab,	// (0x00010d28) main_viewer_pane_g1

0x34b7,	// (0x00010d34) main_viewer_pane_g2_ParamLimits

0x34b7,	// (0x00010d34) main_viewer_pane_g2

0x34c3,	// (0x00010d40) main_viewer_pane_g3_ParamLimits

0x34c3,	// (0x00010d40) main_viewer_pane_g3

0x34d2,	// (0x00010d4f) main_viewer_pane_g4_ParamLimits

0x34d2,	// (0x00010d4f) main_viewer_pane_g4

0xacd7,	// (0x00018554) main_viewer_pane_g5_ParamLimits

0xacd7,	// (0x00018554) main_viewer_pane_g5

0xacd7,	// (0x00018554) main_viewer_pane_g7_ParamLimits

0xacd7,	// (0x00018554) main_viewer_pane_g7

0xace9,	// (0x00018566) main_viewer_pane_g8_ParamLimits

0xace9,	// (0x00018566) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0001cd1b) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0001cd1b) main_viewer_pane_g

0xad01,	// (0x0001857e) viewer_content_pane_ParamLimits

0xad01,	// (0x0001857e) viewer_content_pane

0x3506,	// (0x00010d83) main_postcard_pane_g1_ParamLimits

0x3506,	// (0x00010d83) main_postcard_pane_g1

0x351a,	// (0x00010d97) main_postcard_pane_g2_ParamLimits

0x351a,	// (0x00010d97) main_postcard_pane_g2

0x352e,	// (0x00010dab) main_postcard_pane_g3_ParamLimits

0x352e,	// (0x00010dab) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0001cd2c) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0001cd2c) main_postcard_pane_g

0x3541,	// (0x00010dbe) main_postcard_pane_g4

0xc09e,	// (0x0001991b) smil_status_volume_pane_g2

0x357c,	// (0x00010df9) postcard_pane_ParamLimits

0x357c,	// (0x00010df9) postcard_pane

0xad0f,	// (0x0001858c) postcard_pane_g1_ParamLimits

0xad0f,	// (0x0001858c) postcard_pane_g1

0x35bc,	// (0x00010e39) postcard_pane_g2_ParamLimits

0x35bc,	// (0x00010e39) postcard_pane_g2

0x35c8,	// (0x00010e45) postcard_pane_g3_ParamLimits

0x35c8,	// (0x00010e45) postcard_pane_g3

0xad1d,	// (0x0001859a) postcard_pane_g4_ParamLimits

0xad1d,	// (0x0001859a) postcard_pane_g4

0x35d4,	// (0x00010e51) postcard_pane_g5_ParamLimits

0x35d4,	// (0x00010e51) postcard_pane_g5

0x35e9,	// (0x00010e66) postcard_pane_g6_ParamLimits

0x35e9,	// (0x00010e66) postcard_pane_g6

0xad0f,	// (0x0001858c) postcard_pane_g7_ParamLimits

0xad0f,	// (0x0001858c) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0001cd39) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0001cd39) postcard_pane_g

0x35fd,	// (0x00010e7a) main_mp2_pane_g1_ParamLimits

0x35fd,	// (0x00010e7a) main_mp2_pane_g1

0x3609,	// (0x00010e86) main_mp2_pane_g2_ParamLimits

0x3609,	// (0x00010e86) main_mp2_pane_g2

0x3615,	// (0x00010e92) main_mp2_pane_g3_ParamLimits

0x3615,	// (0x00010e92) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0001cd48) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0001cd48) main_mp2_pane_g

0x3621,	// (0x00010e9e) main_mp2_pane_t1_ParamLimits

0x3621,	// (0x00010e9e) main_mp2_pane_t1

0x3636,	// (0x00010eb3) main_mp2_pane_t2_ParamLimits

0x3636,	// (0x00010eb3) main_mp2_pane_t2

0x3648,	// (0x00010ec5) main_mp2_pane_t3_ParamLimits

0x3648,	// (0x00010ec5) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0001cd4f) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0001cd4f) main_mp2_pane_t

0xad2b,	// (0x000185a8) pec_content_pane_ParamLimits

0xad2b,	// (0x000185a8) pec_content_pane

0xa1d5,	// (0x00017a52) scroll_pane_cp015

0xad3d,	// (0x000185ba) pec_attribute_pane_ParamLimits

0xad3d,	// (0x000185ba) pec_attribute_pane

0x365a,	// (0x00010ed7) pec_content_pane_g1_ParamLimits

0x365a,	// (0x00010ed7) pec_content_pane_g1

0xad4d,	// (0x000185ca) pec_content_pane_t1_ParamLimits

0xad4d,	// (0x000185ca) pec_content_pane_t1

0xad5f,	// (0x000185dc) pec_content_pane_t2_ParamLimits

0xad5f,	// (0x000185dc) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0001cd56) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0001cd56) pec_content_pane_t

0x3666,	// (0x00010ee3) list_single_graphic_pane_cp01_ParamLimits

0x3666,	// (0x00010ee3) list_single_graphic_pane_cp01

0x9c83,	// (0x00017500) bg_popup_sub_pane_cp04

0xad71,	// (0x000185ee) popup_mup_playback_window_g1

0xad7d,	// (0x000185fa) popup_mup_playback_window_t1

0xad92,	// (0x0001860f) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0001cd5b) popup_mup_playback_window_t

0xadc9,	// (0x00018646) main_image_pane_g1_ParamLimits

0xadc9,	// (0x00018646) main_image_pane_g1

0xae0c,	// (0x00018689) scroll_pane_cp018_ParamLimits

0xae0c,	// (0x00018689) scroll_pane_cp018

0xae24,	// (0x000186a1) scroll_pane_cp016_ParamLimits

0xae24,	// (0x000186a1) scroll_pane_cp016

0x3731,	// (0x00010fae) smil2_image_pane_ParamLimits

0x3731,	// (0x00010fae) smil2_image_pane

0x3759,	// (0x00010fd6) smil2_root_pane_ParamLimits

0x3759,	// (0x00010fd6) smil2_root_pane

0x3791,	// (0x0001100e) smil2_text_pane_ParamLimits

0x3791,	// (0x0001100e) smil2_text_pane

0x9a28,	// (0x000172a5) bg_list_pane_cp06

0xae60,	// (0x000186dd) grid_radio_pane

0x9a28,	// (0x000172a5) bg_popup_window_pane_cp06

0xae68,	// (0x000186e5) main_fmradio_pane_t1

0xa78d,	// (0x0001800a) heading_pane_cp04

0xae76,	// (0x000186f3) main_fmradio_pane_t2

0xbe7a,	// (0x000196f7) popup_cale_lunar_info_window_g1

0xae84,	// (0x00018701) main_fmradio_pane_t3

0xbe82,	// (0x000196ff) popup_cale_lunar_info_window_g2

0xae92,	// (0x0001870f) main_fmradio_pane_t4

0x0001,

0xaea0,	// (0x0001871d) main_fmradio_pane_t5

0x0004,

0xf5cc,	// (0x0001ce49) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0001cd70) main_fmradio_pane_t

0xaeae,	// (0x0001872b) wait_bar_pane_cp03

0xaeb6,	// (0x00018733) cell_fmradio_pane_ParamLimits

0xaeb6,	// (0x00018733) cell_fmradio_pane

0xad0f,	// (0x0001858c) cell_fmradio_pane_g1_ParamLimits

0xad0f,	// (0x0001858c) cell_fmradio_pane_g1

0x9a28,	// (0x000172a5) grid_highlight_pane_cp011

0xaec9,	// (0x00018746) poc_content_pane_ParamLimits

0xaec9,	// (0x00018746) poc_content_pane

0xaedc,	// (0x00018759) scroll_pane_cp019

0x37fd,	// (0x0001107a) popup_call_poc_act_window_ParamLimits

0x37fd,	// (0x0001107a) popup_call_poc_act_window

0x381d,	// (0x0001109a) popup_call_poc_inact_window_ParamLimits

0x381d,	// (0x0001109a) popup_call_poc_inact_window

0xf590,	// (0x0001ce0d) bg_popup_call_poc_act_pane_g

0xbe3a,	// (0x000196b7) bg_popup_call_poc_inact_pane_g1

0xbe42,	// (0x000196bf) bg_popup_call_poc_inact_pane_g2

0xaee4,	// (0x00018761) popup_call_poc_act_window_g2

0xbe4a,	// (0x000196c7) bg_popup_call_poc_inact_pane_g3

0xbdca,	// (0x00019647) bg_popup_call_poc_inact_pane_g4

0xbe52,	// (0x000196cf) bg_popup_call_poc_inact_pane_g5

0xaeec,	// (0x00018769) popup_call_poc_act_window_t1_ParamLimits

0xaeec,	// (0x00018769) popup_call_poc_act_window_t1

0xaf14,	// (0x00018791) popup_call_poc_act_window_t2_ParamLimits

0xaf14,	// (0x00018791) popup_call_poc_act_window_t2

0xaf3c,	// (0x000187b9) popup_call_poc_act_window_t3_ParamLimits

0xaf3c,	// (0x000187b9) popup_call_poc_act_window_t3

0xaf64,	// (0x000187e1) popup_call_poc_act_window_t4_ParamLimits

0xaf64,	// (0x000187e1) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0001cd7b) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0001cd7b) popup_call_poc_act_window_t

0xbe5a,	// (0x000196d7) bg_popup_call_poc_inact_pane_g6

0xbe62,	// (0x000196df) bg_popup_call_poc_inact_pane_g7

0xbe6a,	// (0x000196e7) bg_popup_call_poc_inact_pane_g8

0xaf76,	// (0x000187f3) popup_call_poc_inact_window_g2

0xbe72,	// (0x000196ef) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a7,	// (0x0001ce24) bg_popup_call_poc_inact_pane_g

0xaf7e,	// (0x000187fb) popup_call_poc_inact_window_t1_ParamLimits

0xaf7e,	// (0x000187fb) popup_call_poc_inact_window_t1

0xaf93,	// (0x00018810) popup_call_poc_inact_window_t2_ParamLimits

0xaf93,	// (0x00018810) popup_call_poc_inact_window_t2

0xafa8,	// (0x00018825) popup_call_poc_inact_window_t3_ParamLimits

0xafa8,	// (0x00018825) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0001cd84) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0001cd84) popup_call_poc_inact_window_t

0xc011,	// (0x0001988e) context_pane_ParamLimits

0x3f1b,	// (0x00011798) signal_pane_ParamLimits

0x9fdd,	// (0x0001785a) main_call2_pane

0xbfea,	// (0x00019867) popup_phob_thumbnail2_window_ParamLimits

0xbfea,	// (0x00019867) popup_phob_thumbnail2_window

0xacbf,	// (0x0001853c) aid_hotspot_pointer_arrow_pane

0xacc7,	// (0x00018544) aid_hotspot_pointer_hand_pane

0x3af2,	// (0x0001136f) phob_pre_status_pane_g5

0x1971,	// (0x0000f1ee) cams_zoom_pane_ParamLimits

0x1980,	// (0x0000f1fd) image_vga_pane_ParamLimits

0x1998,	// (0x0000f215) main_camera_pane_g1_ParamLimits

0x19a8,	// (0x0000f225) main_camera_pane_g2_ParamLimits

0x19b8,	// (0x0000f235) main_camera_pane_g3_ParamLimits

0x19c8,	// (0x0000f245) main_camera_pane_g4_ParamLimits

0x19d8,	// (0x0000f255) main_camera_pane_g5_ParamLimits

0x19e8,	// (0x0000f265) main_camera_pane_g6_ParamLimits

0x19f8,	// (0x0000f275) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0001ca83) main_camera_pane_g_ParamLimits

0x1a08,	// (0x0000f285) main_camera_pane_t1_ParamLimits

0x1a1e,	// (0x0000f29b) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0001ca94) main_camera_pane_t_ParamLimits

0x9c83,	// (0x00017500) bg_popup_preview_window_pane_cp01_ParamLimits

0x9c83,	// (0x00017500) bg_popup_preview_window_pane_cp01

0xafbd,	// (0x0001883a) popup_phob_thumbnail2_window_g1_ParamLimits

0xafbd,	// (0x0001883a) popup_phob_thumbnail2_window_g1

0x9a28,	// (0x000172a5) call2_cli_visual_pane

0x3849,	// (0x000110c6) popup_call2_audio_conf_window_ParamLimits

0x3849,	// (0x000110c6) popup_call2_audio_conf_window

0x3867,	// (0x000110e4) popup_call2_audio_first_window_ParamLimits

0x3867,	// (0x000110e4) popup_call2_audio_first_window

0x38dd,	// (0x0001115a) popup_call2_audio_in_window_ParamLimits

0x38dd,	// (0x0001115a) popup_call2_audio_in_window

0x3911,	// (0x0001118e) popup_call2_audio_out_window_ParamLimits

0x3911,	// (0x0001118e) popup_call2_audio_out_window

0x3963,	// (0x000111e0) popup_call2_audio_second_window_ParamLimits

0x3963,	// (0x000111e0) popup_call2_audio_second_window

0x39b5,	// (0x00011232) popup_call2_audio_wait_window_ParamLimits

0x39b5,	// (0x00011232) popup_call2_audio_wait_window

0x9a28,	// (0x000172a5) bg_popup_call2_act_pane_cp03

0x9c65,	// (0x000174e2) list_conf_pane_cp

0xafc9,	// (0x00018846) popup_call2_audio_conf_window_t1

0xa7ea,	// (0x00018067) list_single_graphic_popup_conf2_pane_ParamLimits

0xa7ea,	// (0x00018067) list_single_graphic_popup_conf2_pane

0xa7fd,	// (0x0001807a) list_highlight_pane_cp04

0xafd7,	// (0x00018854) list_single_graphic_popup_conf2_pane_g1

0xa80e,	// (0x0001808b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0001cd8b) list_single_graphic_popup_conf2_pane_g

0xafdf,	// (0x0001885c) list_single_graphic_popup_conf2_pane_t1

0xafed,	// (0x0001886a) bg_popup_call2_act_pane_cp01_ParamLimits

0xafed,	// (0x0001886a) bg_popup_call2_act_pane_cp01

0xb077,	// (0x000188f4) call_type_pane_cp05_ParamLimits

0xb077,	// (0x000188f4) call_type_pane_cp05

0xb0cb,	// (0x00018948) popup_call2_audio_second_window_g1_ParamLimits

0xb0cb,	// (0x00018948) popup_call2_audio_second_window_g1

0xb11f,	// (0x0001899c) popup_call2_audio_second_window_g2_ParamLimits

0xb11f,	// (0x0001899c) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0001cd90) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0001cd90) popup_call2_audio_second_window_g

0xb184,	// (0x00018a01) popup_call2_audio_second_window_t1_ParamLimits

0xb184,	// (0x00018a01) popup_call2_audio_second_window_t1

0xb23f,	// (0x00018abc) popup_call2_audio_second_window_t2_ParamLimits

0xb23f,	// (0x00018abc) popup_call2_audio_second_window_t2

0xb292,	// (0x00018b0f) popup_call2_audio_second_window_t3_ParamLimits

0xb292,	// (0x00018b0f) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0001cd97) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0001cd97) popup_call2_audio_second_window_t

0x9a28,	// (0x000172a5) bg_popup_call2_in_pane_cp02

0x9a32,	// (0x000172af) call_type_pane_cp04

0x9a3a,	// (0x000172b7) popup_call2_audio_wait_window_g1

0x9a42,	// (0x000172bf) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0001c972) popup_call2_audio_wait_window_g

0x9a4a,	// (0x000172c7) popup_call2_audio_wait_window_t3

0xb385,	// (0x00018c02) bg_popup_call2_act_pane_ParamLimits

0xb385,	// (0x00018c02) bg_popup_call2_act_pane

0xb445,	// (0x00018cc2) call_type_pane_cp03_ParamLimits

0xb445,	// (0x00018cc2) call_type_pane_cp03

0xb4a9,	// (0x00018d26) popup_call2_audio_first_window_g1_ParamLimits

0xb4a9,	// (0x00018d26) popup_call2_audio_first_window_g1

0xb519,	// (0x00018d96) popup_call2_audio_first_window_g2_ParamLimits

0xb519,	// (0x00018d96) popup_call2_audio_first_window_g2

0xab66,	// (0x000183e3) popup_call2_audio_first_window_g3_ParamLimits

0xab66,	// (0x000183e3) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0001cda0) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0001cda0) popup_call2_audio_first_window_g

0xb5f7,	// (0x00018e74) popup_call2_audio_first_window_t1_ParamLimits

0xb5f7,	// (0x00018e74) popup_call2_audio_first_window_t1

0xb6fa,	// (0x00018f77) popup_call2_audio_first_window_t4_ParamLimits

0xb6fa,	// (0x00018f77) popup_call2_audio_first_window_t4

0xb7dd,	// (0x0001905a) popup_call2_audio_first_window_t5_ParamLimits

0xb7dd,	// (0x0001905a) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0001cdab) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0001cdab) popup_call2_audio_first_window_t

0x9c7b,	// (0x000174f8) bg_popup_call2_act_pane_g1

0xbe8a,	// (0x00019707) popup_cale_lunar_info_window_t1

0xbe98,	// (0x00019715) popup_cale_lunar_info_window_t2

0xbea6,	// (0x00019723) popup_cale_lunar_info_window_t3

0x9a28,	// (0x000172a5) bg_popup_call2_bubble_pane

0xb8de,	// (0x0001915b) bg_popup_call2_in_pane_cp01_ParamLimits

0xb8de,	// (0x0001915b) bg_popup_call2_in_pane_cp01

0x9704,	// (0x00016f81) call_type_pane_cp02

0xb926,	// (0x000191a3) popup_call2_audio_out_window_g1_ParamLimits

0xb926,	// (0x000191a3) popup_call2_audio_out_window_g1

0xb952,	// (0x000191cf) popup_call2_audio_out_window_g2_ParamLimits

0xb952,	// (0x000191cf) popup_call2_audio_out_window_g2

0xb97a,	// (0x000191f7) popup_call2_audio_out_window_g3_ParamLimits

0xb97a,	// (0x000191f7) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0001cdb4) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0001cdb4) popup_call2_audio_out_window_g

0xb9b5,	// (0x00019232) popup_call2_audio_out_window_t1_ParamLimits

0xb9b5,	// (0x00019232) popup_call2_audio_out_window_t1

0xba14,	// (0x00019291) popup_call2_audio_out_window_t2_ParamLimits

0xba14,	// (0x00019291) popup_call2_audio_out_window_t2

0xba68,	// (0x000192e5) popup_call2_audio_out_window_t3_ParamLimits

0xba68,	// (0x000192e5) popup_call2_audio_out_window_t3

0xba7e,	// (0x000192fb) popup_call2_audio_out_window_t4_ParamLimits

0xba7e,	// (0x000192fb) popup_call2_audio_out_window_t4

0xba94,	// (0x00019311) popup_call2_audio_out_window_t5_ParamLimits

0xba94,	// (0x00019311) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0001cdbd) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0001cdbd) popup_call2_audio_out_window_t

0xbaf8,	// (0x00019375) bg_popup_call2_in_pane_ParamLimits

0xbaf8,	// (0x00019375) bg_popup_call2_in_pane

0xbb54,	// (0x000193d1) popup_call2_audio_in_window_g1_ParamLimits

0xbb54,	// (0x000193d1) popup_call2_audio_in_window_g1

0xbb8c,	// (0x00019409) popup_call2_audio_in_window_g2_ParamLimits

0xbb8c,	// (0x00019409) popup_call2_audio_in_window_g2

0xbbc4,	// (0x00019441) popup_call2_audio_in_window_g3_ParamLimits

0xbbc4,	// (0x00019441) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0001cdca) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0001cdca) popup_call2_audio_in_window_g

0xbc1c,	// (0x00019499) popup_call2_audio_in_window_t1_ParamLimits

0xbc1c,	// (0x00019499) popup_call2_audio_in_window_t1

0xbc9c,	// (0x00019519) popup_call2_audio_in_window_t2_ParamLimits

0xbc9c,	// (0x00019519) popup_call2_audio_in_window_t2

0xbd1c,	// (0x00019599) popup_call2_audio_in_window_t3_ParamLimits

0xbd1c,	// (0x00019599) popup_call2_audio_in_window_t3

0xbd36,	// (0x000195b3) popup_call2_audio_in_window_t4_ParamLimits

0xbd36,	// (0x000195b3) popup_call2_audio_in_window_t4

0xbd48,	// (0x000195c5) popup_call2_audio_in_window_t5_ParamLimits

0xbd48,	// (0x000195c5) popup_call2_audio_in_window_t5

0xbd5d,	// (0x000195da) popup_call2_audio_in_window_t6_ParamLimits

0xbd5d,	// (0x000195da) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0001cdd3) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0001cdd3) popup_call2_audio_in_window_t

0x9c7b,	// (0x000174f8) bg_popup_call2_in_pane_g1

0xbeb4,	// (0x00019731) popup_cale_lunar_info_window_t4

0x0003,

0xf5d1,	// (0x0001ce4e) popup_cale_lunar_info_window_t

0x9c83,	// (0x00017500) bg_popup_call2_rect_pane_ParamLimits

0x9c83,	// (0x00017500) bg_popup_call2_rect_pane

0x9a28,	// (0x000172a5) call2_cli_visual_graphic_pane

0x9a28,	// (0x000172a5) call2_cli_visual_text_pane

0xc0b1,	// (0x0001992e) smil_status_volume_pane_g3

0x0002,

0x9e11,	// (0x0001768e) call2_cli_visual_graphic_pane_g1

0x9e11,	// (0x0001768e) call2_cli_visual_graphic_pane_g2

0x9e11,	// (0x0001768e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0001cde0) call2_cli_visual_graphic_pane_g

0xbd72,	// (0x000195ef) bg_popup_call2_rect_pane_g1

0x9eb9,	// (0x00017736) bg_popup_call2_rect_pane_g2

0xbd7a,	// (0x000195f7) bg_popup_call2_rect_pane_g3

0xbd82,	// (0x000195ff) bg_popup_call2_rect_pane_g4

0xbd8a,	// (0x00019607) bg_popup_call2_rect_pane_g5

0xbd92,	// (0x0001960f) bg_popup_call2_rect_pane_g6

0xbd9a,	// (0x00019617) bg_popup_call2_rect_pane_g7

0xbda2,	// (0x0001961f) bg_popup_call2_rect_pane_g8

0xbdaa,	// (0x00019627) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0001cde7) bg_popup_call2_rect_pane_g

0xbdb2,	// (0x0001962f) bg_popup_call2_bubble_pane_g1

0xbdba,	// (0x00019637) bg_popup_call2_bubble_pane_g2

0xbdc2,	// (0x0001963f) bg_popup_call2_bubble_pane_g3

0xbdca,	// (0x00019647) bg_popup_call2_bubble_pane_g4

0xbdd2,	// (0x0001964f) bg_popup_call2_bubble_pane_g5

0xbdda,	// (0x00019657) bg_popup_call2_bubble_pane_g6

0xbde2,	// (0x0001965f) bg_popup_call2_bubble_pane_g7

0xbdea,	// (0x00019667) bg_popup_call2_bubble_pane_g8

0xbdf2,	// (0x0001966f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0001cdfa) bg_popup_call2_bubble_pane_g

0x1324,	// (0x0000eba1) aid_cale_week_size_cell_pane

0x1a34,	// (0x0000f2b1) aid_cams_cif_uncrop_pane_ParamLimits

0x1a34,	// (0x0000f2b1) aid_cams_cif_uncrop_pane

0x1bd5,	// (0x0000f452) aid_cams_size_cell_ParamLimits

0x1bd5,	// (0x0000f452) aid_cams_size_cell

0x1be9,	// (0x0000f466) grid_cams_pane_ParamLimits

0x1bfe,	// (0x0000f47b) linegrid_cams_pane_ParamLimits

0x1db8,	// (0x0000f635) call_video_pane_t1

0x1dd2,	// (0x0000f64f) call_video_pane_t2

0x0001,

0xf26a,	// (0x0001cae7) call_video_pane_t

0x2157,	// (0x0000f9d4) aid_cale_month_size_cell_pane_ParamLimits

0x2157,	// (0x0000f9d4) aid_cale_month_size_cell_pane

0xf61a,	// (0x0001ce97) smil_status_volume_pane_g

0xc0be,	// (0x0001993b) volume_smil_pane_ParamLimits

0x95c8,	// (0x00016e45) aid_popup2_width_pane

0x1273,	// (0x0000eaf0) cell_qdial_pane_g4_ParamLimits

0x1273,	// (0x0000eaf0) cell_qdial_pane_g4

0x2f4e,	// (0x000107cb) aid_blid_cardinal_pane_ParamLimits

0x2f5a,	// (0x000107d7) aid_blid_destination_pane_ParamLimits

0x2f5a,	// (0x000107d7) aid_blid_destination_pane

0x9c83,	// (0x00017500) bg_popup_call_poc_act_pane_ParamLimits

0x9c83,	// (0x00017500) bg_popup_call_poc_act_pane

0x9c83,	// (0x00017500) bg_popup_call_poc_inact_pane_ParamLimits

0x9c83,	// (0x00017500) bg_popup_call_poc_inact_pane

0xbdfa,	// (0x00019677) bg_popup_call_poc_act_pane_g1

0xbe02,	// (0x0001967f) bg_popup_call_poc_act_pane_g2

0xbe0a,	// (0x00019687) bg_popup_call_poc_act_pane_g3

0xbdca,	// (0x00019647) bg_popup_call_poc_act_pane_g4

0xbdd2,	// (0x0001964f) bg_popup_call_poc_act_pane_g5

0xbe12,	// (0x0001968f) bg_popup_call_poc_act_pane_g6

0xbde2,	// (0x0001965f) bg_popup_call_poc_act_pane_g7

0xbe1a,	// (0x00019697) bg_popup_call_poc_act_pane_g8

0x9a28,	// (0x000172a5) main_usb_pane

0xbfc9,	// (0x00019846) popup_cale_lunar_info_window

0x2017,	// (0x0000f894) im_reading_pane_t1_ParamLimits

0xa11e,	// (0x0001799b) list_im_pane_ParamLimits

0xa12f,	// (0x000179ac) scroll_pane_cp07_ParamLimits

0x9a28,	// (0x000172a5) grid_highlight_pane_cp012

0x9c83,	// (0x00017500) mup_scale_pane_ParamLimits

0xad0f,	// (0x0001858c) main_usb_pane_g1_ParamLimits

0xad0f,	// (0x0001858c) main_usb_pane_g1

0x3a0f,	// (0x0001128c) main_usb_pane_g2_ParamLimits

0x3a0f,	// (0x0001128c) main_usb_pane_g2

0x0001,

0xf5ba,	// (0x0001ce37) main_usb_pane_g_ParamLimits

0xf5ba,	// (0x0001ce37) main_usb_pane_g

0x3a23,	// (0x000112a0) main_usb_pane_t1_ParamLimits

0x3a23,	// (0x000112a0) main_usb_pane_t1

0x3a35,	// (0x000112b2) main_usb_pane_t2_ParamLimits

0x3a35,	// (0x000112b2) main_usb_pane_t2

0x3a47,	// (0x000112c4) main_usb_pane_t3_ParamLimits

0x3a47,	// (0x000112c4) main_usb_pane_t3

0x3a59,	// (0x000112d6) main_usb_pane_t4_ParamLimits

0x3a59,	// (0x000112d6) main_usb_pane_t4

0x3a6b,	// (0x000112e8) main_usb_pane_t5_ParamLimits

0x3a6b,	// (0x000112e8) main_usb_pane_t5

0x3a7d,	// (0x000112fa) main_usb_pane_t6_ParamLimits

0x3a7d,	// (0x000112fa) main_usb_pane_t6

0x0005,

0xf5bf,	// (0x0001ce3c) main_usb_pane_t_ParamLimits

0xa937,	// (0x000181b4) aid_text_placing

0x2efa,	// (0x00010777) main_location2_pane_t1_ParamLimits

0x2f10,	// (0x0001078d) main_location2_pane_t2_ParamLimits

0x2f26,	// (0x000107a3) main_location2_pane_t3_ParamLimits

0x2f3c,	// (0x000107b9) main_location2_pane_t4_ParamLimits

0x2f3c,	// (0x000107b9) main_location2_pane_t4

0xf3cb,	// (0x0001cc48) main_location2_pane_t_ParamLimits

0x9cbf,	// (0x0001753c) find_pinb_pane_g2_ParamLimits

0x9cbf,	// (0x0001753c) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0001c998) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0001c998) find_pinb_pane_g

0x9ccb,	// (0x00017548) find_pinb_pane_t1_ParamLimits

0x9cdd,	// (0x0001755a) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0001c99d) find_pinb_pane_t_ParamLimits

0x9a28,	// (0x000172a5) main_call3_pane

0x2552,	// (0x0000fdcf) cale_month_day_heading_pane_t1_ParamLimits

0x25d8,	// (0x0000fe55) cale_month_day_heading_pane_t2_ParamLimits

0x2669,	// (0x0000fee6) cale_month_day_heading_pane_t3_ParamLimits

0x26fa,	// (0x0000ff77) cale_month_day_heading_pane_t4_ParamLimits

0x278b,	// (0x00010008) cale_month_day_heading_pane_t5_ParamLimits

0x281c,	// (0x00010099) cale_month_day_heading_pane_t6_ParamLimits

0x28ad,	// (0x0001012a) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0001cb1f) cale_month_day_heading_pane_t_ParamLimits

0x2b33,	// (0x000103b0) smil_status_volume_pane

0x3598,	// (0x00010e15) postcard_address_pane_ParamLimits

0x3598,	// (0x00010e15) postcard_address_pane

0x35aa,	// (0x00010e27) postcard_message_pane_ParamLimits

0x35aa,	// (0x00010e27) postcard_message_pane

0x39ed,	// (0x0001126a) call2_cli_visual_pane_t1_ParamLimits

0x39ed,	// (0x0001126a) call2_cli_visual_pane_t1

0x4137,	// (0x000119b4) postcard_message_pane_t1_ParamLimits

0x4137,	// (0x000119b4) postcard_message_pane_t1

0x4120,	// (0x0001199d) postcard_address_pane_t1_ParamLimits

0x4120,	// (0x0001199d) postcard_address_pane_t1

0x410e,	// (0x0001198b) popup_call3_audio_in_window_ParamLimits

0x410e,	// (0x0001198b) popup_call3_audio_in_window

0x3f9d,	// (0x0001181a) bg_popup_call3_in_pane_ParamLimits

0x3f9d,	// (0x0001181a) bg_popup_call3_in_pane

0x400f,	// (0x0001188c) popup_call3_audio_in_window_g1_ParamLimits

0x400f,	// (0x0001188c) popup_call3_audio_in_window_g1

0x402f,	// (0x000118ac) popup_call3_audio_in_window_g2_ParamLimits

0x402f,	// (0x000118ac) popup_call3_audio_in_window_g2

0x404f,	// (0x000118cc) popup_call3_audio_in_window_g3_ParamLimits

0x404f,	// (0x000118cc) popup_call3_audio_in_window_g3

0x0003,

0xf621,	// (0x0001ce9e) popup_call3_audio_in_window_g_ParamLimits

0xf621,	// (0x0001ce9e) popup_call3_audio_in_window_g

0x4080,	// (0x000118fd) popup_call3_audio_in_window_t1_ParamLimits

0x4080,	// (0x000118fd) popup_call3_audio_in_window_t1

0x40be,	// (0x0001193b) popup_call3_audio_in_window_t2_ParamLimits

0x40be,	// (0x0001193b) popup_call3_audio_in_window_t2

0x40fc,	// (0x00011979) popup_call3_audio_in_window_t3_ParamLimits

0x40fc,	// (0x00011979) popup_call3_audio_in_window_t3

0x0002,

0xf62a,	// (0x0001cea7) popup_call3_audio_in_window_t_ParamLimits

0xf62a,	// (0x0001cea7) popup_call3_audio_in_window_t

0x9fdd,	// (0x0001785a) bg_popup_call3_rect_pane

0xbd72,	// (0x000195ef) bg_popup_call3_rect_pane_g1

0x9eb9,	// (0x00017736) bg_popup_call3_rect_pane_g2

0xbd7a,	// (0x000195f7) bg_popup_call3_rect_pane_g3

0xbd82,	// (0x000195ff) bg_popup_call3_rect_pane_g4

0xbd8a,	// (0x00019607) bg_popup_call3_rect_pane_g5

0xbd92,	// (0x0001960f) bg_popup_call3_rect_pane_g6

0xbd9a,	// (0x00019617) bg_popup_call3_rect_pane_g7

0x3263,	// (0x00010ae0) mup_visualizer_osc_pane

0xab74,	// (0x000183f1) mup_visualizer_spec_pane

0x3fcd,	// (0x0001184a) call3_video_qcif_pane_ParamLimits

0x3fcd,	// (0x0001184a) call3_video_qcif_pane

0x3fde,	// (0x0001185b) call3_video_qcif_uncrop_pane_ParamLimits

0x3fde,	// (0x0001185b) call3_video_qcif_uncrop_pane

0x3fea,	// (0x00011867) call3_video_subqcif_pane_ParamLimits

0x3fea,	// (0x00011867) call3_video_subqcif_pane

0x3ffe,	// (0x0001187b) call3_video_subqcif_uncrop_pane_ParamLimits

0x3ffe,	// (0x0001187b) call3_video_subqcif_uncrop_pane

0x406f,	// (0x000118ec) popup_call3_audio_in_window_g4_ParamLimits

0x406f,	// (0x000118ec) popup_call3_audio_in_window_g4

0x3f8c,	// (0x00011809) mup_spec_half_pane

0x3f95,	// (0x00011812) mup_spec_half_pane_cp

0xc071,	// (0x000198ee) mup_osc_middle_pane

0xc07a,	// (0x000198f7) mup_visualizer_osc_pane_g1

0x3f6d,	// (0x000117ea) mup_spec_bar_pane_ParamLimits

0x3f6d,	// (0x000117ea) mup_spec_bar_pane

0xc05e,	// (0x000198db) mup_spec_bar_pane_g1

0xc068,	// (0x000198e5) mup_spec_bar_pane_g2

0x0001,

0xf615,	// (0x0001ce92) mup_spec_bar_pane_g

0x1324,	// (0x0000eba1) aid_cale_week_size_cell_pane_ParamLimits

0x133e,	// (0x0000ebbb) bg_cale_heading_pane_ParamLimits

0x9f3f,	// (0x000177bc) bg_cale_pane_cp01_ParamLimits

0x1356,	// (0x0000ebd3) cale_week_corner_pane_ParamLimits

0x1375,	// (0x0000ebf2) cale_week_day_heading_pane_ParamLimits

0x1392,	// (0x0000ec0f) cale_week_scroll_pane_g1_ParamLimits

0x13a5,	// (0x0000ec22) cale_week_scroll_pane_g2_ParamLimits

0x13bd,	// (0x0000ec3a) cale_week_scroll_pane_g3_ParamLimits

0x13d5,	// (0x0000ec52) cale_week_scroll_pane_g4_ParamLimits

0x13ed,	// (0x0000ec6a) cale_week_scroll_pane_g5_ParamLimits

0x1405,	// (0x0000ec82) cale_week_scroll_pane_g6_ParamLimits

0x141d,	// (0x0000ec9a) cale_week_scroll_pane_g7_ParamLimits

0x1435,	// (0x0000ecb2) cale_week_scroll_pane_g8_ParamLimits

0x1451,	// (0x0000ecce) cale_week_scroll_pane_g9_ParamLimits

0x1469,	// (0x0000ece6) cale_week_scroll_pane_g10_ParamLimits

0x1481,	// (0x0000ecfe) cale_week_scroll_pane_g11_ParamLimits

0x1499,	// (0x0000ed16) cale_week_scroll_pane_g12_ParamLimits

0x14b1,	// (0x0000ed2e) cale_week_scroll_pane_g13_ParamLimits

0x14c9,	// (0x0000ed46) cale_week_scroll_pane_g14_ParamLimits

0x14e1,	// (0x0000ed5e) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0001ca29) cale_week_scroll_pane_g_ParamLimits

0x1515,	// (0x0000ed92) cale_week_time_pane_ParamLimits

0x1531,	// (0x0000edae) grid_cale_week_pane_ParamLimits

0x9f5c,	// (0x000177d9) listscroll_cale_week_pane_t1

0x9f6e,	// (0x000177eb) scroll_pane_cp08_ParamLimits

0x21ac,	// (0x0000fa29) cale_month_corner_pane_ParamLimits

0xa35f,	// (0x00017bdc) cale_month_pane_t1

0x2508,	// (0x0000fd85) cale_month_week_pane_ParamLimits

0x2d49,	// (0x000105c6) popup_call_status_window_g1_ParamLimits

0x2d5d,	// (0x000105da) popup_call_status_window_g2_ParamLimits

0x2d71,	// (0x000105ee) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0001cbcf) popup_call_status_window_g_ParamLimits

0xa70e,	// (0x00017f8b) aid_call2_pane

0x3469,	// (0x00010ce6) msg_header_pane_g1

0x3598,	// (0x00010e15) postcard_address2_pane_ParamLimits

0x3598,	// (0x00010e15) postcard_address2_pane

0x35aa,	// (0x00010e27) postcard_message2_pane_ParamLimits

0x35aa,	// (0x00010e27) postcard_message2_pane

0x3f29,	// (0x000117a6) message2_row_pane_ParamLimits

0x3f29,	// (0x000117a6) message2_row_pane

0x3f43,	// (0x000117c0) address2_row_pane_ParamLimits

0x3f43,	// (0x000117c0) address2_row_pane

0xc02c,	// (0x000198a9) postcard_message2_row_pane_g1

0xc034,	// (0x000198b1) postcard_message2_row_pane_t1

0xc02c,	// (0x000198a9) address2_row_pane_g1

0xc034,	// (0x000198b1) address2_row_pane_t1

0x192e,	// (0x0000f1ab) aid_size_cell_vorec

0x9a28,	// (0x000172a5) main_rss_pane

0x3f56,	// (0x000117d3) rss_list_single_pane_ParamLimits

0x3f56,	// (0x000117d3) rss_list_single_pane

0xc042,	// (0x000198bf) rss_list_single_pane_t1

0xc050,	// (0x000198cd) rss_list_single_pane_t2

0x0001,

0xf610,	// (0x0001ce8d) rss_list_single_pane_t

0x9a28,	// (0x000172a5) main_camera2_pane

0x9a28,	// (0x000172a5) main_video2_pane

0x4190,	// (0x00011a0d) cams_zoom_pane_cp2_ParamLimits

0x4190,	// (0x00011a0d) cams_zoom_pane_cp2

0x41a7,	// (0x00011a24) image2_vga_pane_ParamLimits

0x41a7,	// (0x00011a24) image2_vga_pane

0x41dd,	// (0x00011a5a) main_camera2_pane_g1_ParamLimits

0x41dd,	// (0x00011a5a) main_camera2_pane_g1

0x41fd,	// (0x00011a7a) main_camera2_pane_g2_ParamLimits

0x41fd,	// (0x00011a7a) main_camera2_pane_g2

0x4214,	// (0x00011a91) main_camera2_pane_g3_ParamLimits

0x4214,	// (0x00011a91) main_camera2_pane_g3

0x422b,	// (0x00011aa8) main_camera2_pane_g4_ParamLimits

0x422b,	// (0x00011aa8) main_camera2_pane_g4

0x4242,	// (0x00011abf) main_camera2_pane_g5_ParamLimits

0x4242,	// (0x00011abf) main_camera2_pane_g5

0x4259,	// (0x00011ad6) main_camera2_pane_g6_ParamLimits

0x4259,	// (0x00011ad6) main_camera2_pane_g6

0x4270,	// (0x00011aed) main_camera2_pane_g7_ParamLimits

0x4270,	// (0x00011aed) main_camera2_pane_g7

0x4287,	// (0x00011b04) main_camera2_pane_g8_ParamLimits

0x4287,	// (0x00011b04) main_camera2_pane_g8

0x0008,

0xf631,	// (0x0001ceae) main_camera2_pane_g_ParamLimits

0xf631,	// (0x0001ceae) main_camera2_pane_g

0x42b5,	// (0x00011b32) main_camera2_pane_t1_ParamLimits

0x42b5,	// (0x00011b32) main_camera2_pane_t1

0x42e4,	// (0x00011b61) main_camera2_pane_t2_ParamLimits

0x42e4,	// (0x00011b61) main_camera2_pane_t2

0x4301,	// (0x00011b7e) main_camera2_pane_t3_ParamLimits

0x4301,	// (0x00011b7e) main_camera2_pane_t3

0x434d,	// (0x00011bca) main_camera2_pane_t4_ParamLimits

0x434d,	// (0x00011bca) main_camera2_pane_t4

0x0006,

0xf644,	// (0x0001cec1) main_camera2_pane_t_ParamLimits

0xf644,	// (0x0001cec1) main_camera2_pane_t

0x43c2,	// (0x00011c3f) cams_zoom_pane_cp4_ParamLimits

0x43c2,	// (0x00011c3f) cams_zoom_pane_cp4

0x43d8,	// (0x00011c55) image2_cif_pane_ParamLimits

0x43d8,	// (0x00011c55) image2_cif_pane

0x43fb,	// (0x00011c78) image2_subqcif_pane_ParamLimits

0x43fb,	// (0x00011c78) image2_subqcif_pane

0x4411,	// (0x00011c8e) main_video2_pane_g1_ParamLimits

0x4411,	// (0x00011c8e) main_video2_pane_g1

0x442b,	// (0x00011ca8) main_video2_pane_g2_ParamLimits

0x442b,	// (0x00011ca8) main_video2_pane_g2

0x4441,	// (0x00011cbe) main_video2_pane_g3_ParamLimits

0x4441,	// (0x00011cbe) main_video2_pane_g3

0x4457,	// (0x00011cd4) main_video2_pane_g4_ParamLimits

0x4457,	// (0x00011cd4) main_video2_pane_g4

0x446d,	// (0x00011cea) main_video2_pane_g5_ParamLimits

0x446d,	// (0x00011cea) main_video2_pane_g5

0x4483,	// (0x00011d00) main_video2_pane_g6_ParamLimits

0x4483,	// (0x00011d00) main_video2_pane_g6

0x0005,

0xf653,	// (0x0001ced0) main_video2_pane_g_ParamLimits

0xf653,	// (0x0001ced0) main_video2_pane_g

0x449d,	// (0x00011d1a) main_video2_pane_t1_ParamLimits

0x449d,	// (0x00011d1a) main_video2_pane_t1

0x44c1,	// (0x00011d3e) main_video2_pane_t2_ParamLimits

0x44c1,	// (0x00011d3e) main_video2_pane_t2

0x450b,	// (0x00011d88) main_video2_pane_t3_ParamLimits

0x450b,	// (0x00011d88) main_video2_pane_t3

0x0002,

0xf660,	// (0x0001cedd) main_video2_pane_t_ParamLimits

0xf660,	// (0x0001cedd) main_video2_pane_t

0x3b2c,	// (0x000113a9) call_muted_g2

0x0001,

0xf602,	// (0x0001ce7f) call_muted_g

0x9a28,	// (0x000172a5) main_mup2_pane

0x454d,	// (0x00011dca) main_mup2_pane_g1_ParamLimits

0x454d,	// (0x00011dca) main_mup2_pane_g1

0x4559,	// (0x00011dd6) main_mup2_pane_g2_ParamLimits

0x4559,	// (0x00011dd6) main_mup2_pane_g2

0xc1dd,	// (0x00019a5a) main_mup_pane_g13_cp1

0xc1e5,	// (0x00019a62) mup_volume_pane_cp1

0x4575,	// (0x00011df2) main_mup2_pane_g4_ParamLimits

0x4575,	// (0x00011df2) main_mup2_pane_g4

0x4585,	// (0x00011e02) main_mup2_pane_g5_ParamLimits

0x4585,	// (0x00011e02) main_mup2_pane_g5

0x4595,	// (0x00011e12) main_mup2_pane_g6_ParamLimits

0x4595,	// (0x00011e12) main_mup2_pane_g6

0x45a5,	// (0x00011e22) main_mup2_pane_g7_ParamLimits

0x45a5,	// (0x00011e22) main_mup2_pane_g7

0x0006,

0xf667,	// (0x0001cee4) main_mup2_pane_g_ParamLimits

0xf667,	// (0x0001cee4) main_mup2_pane_g

0x45bd,	// (0x00011e3a) main_mup2_pane_t1_ParamLimits

0x45bd,	// (0x00011e3a) main_mup2_pane_t1

0x45d3,	// (0x00011e50) main_mup2_pane_t2_ParamLimits

0x45d3,	// (0x00011e50) main_mup2_pane_t2

0x45e9,	// (0x00011e66) main_mup2_pane_t3_ParamLimits

0x45e9,	// (0x00011e66) main_mup2_pane_t3

0x45ff,	// (0x00011e7c) main_mup2_pane_t4_ParamLimits

0x45ff,	// (0x00011e7c) main_mup2_pane_t4

0x4617,	// (0x00011e94) main_mup2_pane_t5_ParamLimits

0x4617,	// (0x00011e94) main_mup2_pane_t5

0x462f,	// (0x00011eac) main_mup2_pane_t6_ParamLimits

0x462f,	// (0x00011eac) main_mup2_pane_t6

0x0005,

0xf676,	// (0x0001cef3) main_mup2_pane_t_ParamLimits

0xf676,	// (0x0001cef3) main_mup2_pane_t

0x465f,	// (0x00011edc) mup2_visualizer_pane_ParamLimits

0x465f,	// (0x00011edc) mup2_visualizer_pane

0x468a,	// (0x00011f07) mup_progress_pane_cp_ParamLimits

0x468a,	// (0x00011f07) mup_progress_pane_cp

0xc1bf,	// (0x00019a3c) mup_volume_pane_cp_ParamLimits

0xc1bf,	// (0x00019a3c) mup_volume_pane_cp

0x469e,	// (0x00011f1b) mup2_visualizer_pane_g1_ParamLimits

0x469e,	// (0x00011f1b) mup2_visualizer_pane_g1

0xc0fe,	// (0x0001997b) mup2_visualizer_pane_g2_ParamLimits

0xc0fe,	// (0x0001997b) mup2_visualizer_pane_g2

0x46b3,	// (0x00011f30) mup2_visualizer_pane_g3_ParamLimits

0x46b3,	// (0x00011f30) mup2_visualizer_pane_g3

0x0002,

0xf683,	// (0x0001cf00) mup2_visualizer_pane_g_ParamLimits

0xf683,	// (0x0001cf00) mup2_visualizer_pane_g

0xae58,	// (0x000186d5) aid_size_cell_fmradio

0x3c88,	// (0x00011505) aid_height_parent_landcape

0xa1bc,	// (0x00017a39) wml_content_pane_cp

0xa1c4,	// (0x00017a41) wml_tabs_pane

0xa1cd,	// (0x00017a4a) popup_wml_miniature_window

0xa1d5,	// (0x00017a52) scroll_pane_cp021

0xa1e9,	// (0x00017a66) wml_content_pane_comp8

0x9a28,	// (0x000172a5) bg_popup_sub_pane_cp05

0xc11c,	// (0x00019999) popup_wml_miniature_window_g1

0xc124,	// (0x000199a1) wml_miniature_view_pane

0x46bf,	// (0x00011f3c) aid_size_wml_view

0x46c7,	// (0x00011f44) wml_miniature_view_pane_g1

0x46d0,	// (0x00011f4d) wml_miniature_view_pane_g2

0x46d9,	// (0x00011f56) wml_miniature_view_pane_g3

0x46e1,	// (0x00011f5e) wml_miniature_view_pane_g4

0x46e9,	// (0x00011f66) wml_miniature_view_pane_g5

0x46f1,	// (0x00011f6e) wml_miniature_view_pane_g6

0x46f9,	// (0x00011f76) wml_miniature_view_pane_g7

0x4701,	// (0x00011f7e) wml_miniature_view_pane_g8

0x0007,

0xf68a,	// (0x0001cf07) wml_miniature_view_pane_g

0xc12c,	// (0x000199a9) background_graphic_ParamLimits

0xc12c,	// (0x000199a9) background_graphic

0xc138,	// (0x000199b5) wml_tabs_2_pane

0xc141,	// (0x000199be) wml_tabs_3_pane_ParamLimits

0xc141,	// (0x000199be) wml_tabs_3_pane

0xc153,	// (0x000199d0) wml_tabs_4_pane_ParamLimits

0xc153,	// (0x000199d0) wml_tabs_4_pane

0xc169,	// (0x000199e6) wml_tabs_5_pane_ParamLimits

0xc169,	// (0x000199e6) wml_tabs_5_pane

0xc183,	// (0x00019a00) wml_tabs_pane_g2_ParamLimits

0xc183,	// (0x00019a00) wml_tabs_pane_g2

0xc197,	// (0x00019a14) wml_tabs_pane_g3_ParamLimits

0xc197,	// (0x00019a14) wml_tabs_pane_g3

0x4709,	// (0x00011f86) wml_tabs_2_active_pane_ParamLimits

0x4709,	// (0x00011f86) wml_tabs_2_active_pane

0x4719,	// (0x00011f96) wml_tabs_2_passive_pane_ParamLimits

0x4719,	// (0x00011f96) wml_tabs_2_passive_pane

0x4729,	// (0x00011fa6) wml_tabs_3_active_pane_cp_ParamLimits

0x4729,	// (0x00011fa6) wml_tabs_3_active_pane_cp

0x473a,	// (0x00011fb7) wml_tabs_3_passive_pane_ParamLimits

0x473a,	// (0x00011fb7) wml_tabs_3_passive_pane

0x474b,	// (0x00011fc8) wml_tabs_3_passive_pane_cp_ParamLimits

0x474b,	// (0x00011fc8) wml_tabs_3_passive_pane_cp

0x475c,	// (0x00011fd9) tabs_4_active_pane

0x4764,	// (0x00011fe1) tabs_4_passive_pane

0x476c,	// (0x00011fe9) tabs_4_passive_pane_cp

0x4774,	// (0x00011ff1) tabs_4_passive_pane_cp2

0x3a07,	// (0x00011284) aid_height_text

0x3239,	// (0x00010ab6) mup_volume_cont_pane_ParamLimits

0x3239,	// (0x00010ab6) mup_volume_cont_pane

0x0f7c,	// (0x0000e7f9) aid_size_cell_pinb

0x0f86,	// (0x0000e803) aid_size_list_pinb

0x4676,	// (0x00011ef3) mup2_volume_cont_pane_ParamLimits

0x4676,	// (0x00011ef3) mup2_volume_cont_pane

0xc1ab,	// (0x00019a28) mup2_volume_cont_pane_g1_ParamLimits

0xc1ab,	// (0x00019a28) mup2_volume_cont_pane_g1

0x0c98,	// (0x0000e515) aid_size_cell_touch_ParamLimits

0x0c98,	// (0x0000e515) aid_size_cell_touch

0x0e84,	// (0x0000e701) touch_pane_ParamLimits

0x0e84,	// (0x0000e701) touch_pane

0x95b6,	// (0x00016e33) main_rss2_pane

0xc1ed,	// (0x00019a6a) listscroll_rss2_pane

0xc1f6,	// (0x00019a73) rss2_navigation_pane

0xc1fe,	// (0x00019a7b) list_rss2_pane

0xa8b4,	// (0x00018131) scroll_pane_cp22

0xc206,	// (0x00019a83) rss2_navigation_pane_g1

0xc20f,	// (0x00019a8c) rss2_navigation_pane_g2

0xc217,	// (0x00019a94) rss2_navigation_pane_g3

0x0002,

0xf69b,	// (0x0001cf18) rss2_navigation_pane_g

0xc21f,	// (0x00019a9c) rss2_navigation_pane_t1

0x477c,	// (0x00011ff9) rss2_list_single_pane_ParamLimits

0x477c,	// (0x00011ff9) rss2_list_single_pane

0xc22d,	// (0x00019aaa) rss2_list_single_pane_t2

0xc23b,	// (0x00019ab8) rss2_list_single_pane_t3_ParamLimits

0xc23b,	// (0x00019ab8) rss2_list_single_pane_t3

0xc258,	// (0x00019ad5) rss2_list_single_pane_t4

0x2b1d,	// (0x0001039a) smil_status_pane_g1

0x9609,	// (0x00016e86) main_image2_pane_ParamLimits

0x9609,	// (0x00016e86) main_image2_pane

0x429e,	// (0x00011b1b) main_camera2_pane_g9_ParamLimits

0x429e,	// (0x00011b1b) main_camera2_pane_g9

0x4390,	// (0x00011c0d) main_camera2_pane_t5_ParamLimits

0x4390,	// (0x00011c0d) main_camera2_pane_t5

0xc0d3,	// (0x00019950) main_camera2_pane_t6_ParamLimits

0xc0d3,	// (0x00019950) main_camera2_pane_t6

0x4790,	// (0x0001200d) main_image2_pane_g1_ParamLimits

0x4790,	// (0x0001200d) main_image2_pane_g1

0x37bf,	// (0x0001103c) smil2_video_pane_ParamLimits

0x37bf,	// (0x0001103c) smil2_video_pane

0x95d0,	// (0x00016e4d) aid_zoom_text_primary_cp

0x9601,	// (0x00016e7e) popup_preview_fixed_window

0xa116,	// (0x00017993) im_reading_pane_g1

0x4184,	// (0x00011a01) cams2_bc_adjust_pane_cp_ParamLimits

0x4184,	// (0x00011a01) cams2_bc_adjust_pane_cp

0x43b6,	// (0x00011c33) cams2_bc_adjust_pane_ParamLimits

0x43b6,	// (0x00011c33) cams2_bc_adjust_pane

0xc266,	// (0x00019ae3) cams2_bc_adjust_pane_g1

0xc26e,	// (0x00019aeb) cams2_slider_pane

0xc277,	// (0x00019af4) cams2_slider_pane_g1

0xc280,	// (0x00019afd) cams2_slider_pane_g2

0x0006,

0xf6a2,	// (0x0001cf1f) cams2_slider_pane_g

0x1066,	// (0x0000e8e3) calc_display_pane_ParamLimits

0x1082,	// (0x0000e8ff) calc_paper_pane_ParamLimits

0x10a3,	// (0x0000e920) grid_calc_pane_ParamLimits

0xa770,	// (0x00017fed) popup_clock_digital_window_t1_ParamLimits

0xadf5,	// (0x00018672) main_image_pane_t1

0x1048,	// (0x0000e8c5) aid_size_cell_calc_ParamLimits

0x1048,	// (0x0000e8c5) aid_size_cell_calc

0x3cb8,	// (0x00011535) popup_blid_sat_info2_window_ParamLimits

0x3cb8,	// (0x00011535) popup_blid_sat_info2_window

0xc2a2,	// (0x00019b1f) aid_size_cell_blid

0xc2aa,	// (0x00019b27) bg_popup_window_pane_cp07

0xc2cd,	// (0x00019b4a) grid_popup_blid_pane

0xc2d5,	// (0x00019b52) heading_pane_cp05_ParamLimits

0xc2d5,	// (0x00019b52) heading_pane_cp05

0xc39d,	// (0x00019c1a) cell_popup_blid_pane_ParamLimits

0xc39d,	// (0x00019c1a) cell_popup_blid_pane

0xc3bd,	// (0x00019c3a) cell_popup_blid_pane_g1

0xc3c5,	// (0x00019c42) cell_popup_blid_pane_t1

0x4649,	// (0x00011ec6) mup2_indicator_pane_ParamLimits

0x4649,	// (0x00011ec6) mup2_indicator_pane

0x9fdd,	// (0x0001785a) mup2_visualizer_osc_pane

0xc10a,	// (0x00019987) mup2_visualizer_spec_pane_ParamLimits

0xc10a,	// (0x00019987) mup2_visualizer_spec_pane

0x47a4,	// (0x00012021) mup2_spec_half_pane

0x47ad,	// (0x0001202a) mup2_spec_half_pane_cp

0x47b5,	// (0x00012032) mup2_spec_bar_pane_ParamLimits

0x47b5,	// (0x00012032) mup2_spec_bar_pane

0xc05e,	// (0x000198db) mup2_spec_bar_pane_g1

0xc068,	// (0x000198e5) mup2_spec_bar_pane_g2

0x0001,

0xf615,	// (0x0001ce92) mup2_spec_bar_pane_g

0x47d4,	// (0x00012051) mup2_osc_middle_pane

0xc07a,	// (0x000198f7) mup2_visualizer_osc_pane_g1

0x9637,	// (0x00016eb4) popup_number_entry_window_t1_ParamLimits

0x964a,	// (0x00016ec7) popup_number_entry_window_t2_ParamLimits

0x965c,	// (0x00016ed9) popup_number_entry_window_t3_ParamLimits

0x0ecc,	// (0x0000e749) popup_number_entry_window_t5_ParamLimits

0x0ecc,	// (0x0000e749) popup_number_entry_window_t5

0xf0c6,	// (0x0001c943) popup_number_entry_window_t_ParamLimits

0x966e,	// (0x00016eeb) text_title_cp2_ParamLimits

0xaccf,	// (0x0001854c) aid_hotspot_pointer_text2_pane

0xacf5,	// (0x00018572) main_viewer_pane_g9_ParamLimits

0xacf5,	// (0x00018572) main_viewer_pane_g9

0xa35f,	// (0x00017bdc) cale_month_pane_t1_ParamLimits

0xa3b3,	// (0x00017c30) bg_cale_pane_ParamLimits

0xa3cb,	// (0x00017c48) list_cale_pane_ParamLimits

0xa3dc,	// (0x00017c59) listscroll_cale_day_pane_t1

0xa3ee,	// (0x00017c6b) scroll_pane_cp09_ParamLimits

0x326b,	// (0x00010ae8) main_mup_eq_pane_t1_ParamLimits

0x326b,	// (0x00010ae8) main_mup_eq_pane_t1

0x3283,	// (0x00010b00) main_mup_eq_pane_t2_ParamLimits

0x3283,	// (0x00010b00) main_mup_eq_pane_t2

0x3299,	// (0x00010b16) main_mup_eq_pane_t3_ParamLimits

0x3299,	// (0x00010b16) main_mup_eq_pane_t3

0x32af,	// (0x00010b2c) main_mup_eq_pane_t4_ParamLimits

0x32af,	// (0x00010b2c) main_mup_eq_pane_t4

0x32c5,	// (0x00010b42) main_mup_eq_pane_t5_ParamLimits

0x32c5,	// (0x00010b42) main_mup_eq_pane_t5

0x32db,	// (0x00010b58) main_mup_eq_pane_t6_ParamLimits

0x32db,	// (0x00010b58) main_mup_eq_pane_t6

0x32ed,	// (0x00010b6a) main_mup_eq_pane_t7_ParamLimits

0x32ed,	// (0x00010b6a) main_mup_eq_pane_t7

0x32ff,	// (0x00010b7c) main_mup_eq_pane_t8_ParamLimits

0x32ff,	// (0x00010b7c) main_mup_eq_pane_t8

0x3311,	// (0x00010b8e) main_mup_eq_pane_t9_ParamLimits

0x3311,	// (0x00010b8e) main_mup_eq_pane_t9

0x3327,	// (0x00010ba4) main_mup_eq_pane_t10_ParamLimits

0x3327,	// (0x00010ba4) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0001ccce) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0001ccce) main_mup_eq_pane_t

0x33ba,	// (0x00010c37) mup_equalizer_pane_cp5_ParamLimits

0x33cc,	// (0x00010c49) mup_equalizer_pane_cp6_ParamLimits

0x33de,	// (0x00010c5b) mup_equalizer_pane_cp7_ParamLimits

0x95b6,	// (0x00016e33) main_gallery_pane

0xc083,	// (0x00019900) smil2_volume_pane

0xc08b,	// (0x00019908) smil_status_volume_pane_g1_ParamLimits

0xc09e,	// (0x0001991b) smil_status_volume_pane_g2_ParamLimits

0xc0b1,	// (0x0001992e) smil_status_volume_pane_g3_ParamLimits

0xf61a,	// (0x0001ce97) smil_status_volume_pane_g_ParamLimits

0xc2aa,	// (0x00019b27) bg_popup_window_pane_cp07_ParamLimits

0xc2b8,	// (0x00019b35) blid_firmament_pane

0x47dd,	// (0x0001205a) aid_size_cell_gallery_ParamLimits

0x47dd,	// (0x0001205a) aid_size_cell_gallery

0x47f3,	// (0x00012070) grid_gallery_pane_ParamLimits

0x47f3,	// (0x00012070) grid_gallery_pane

0x4807,	// (0x00012084) cell_gallery_pane_ParamLimits

0x4807,	// (0x00012084) cell_gallery_pane

0xc3d3,	// (0x00019c50) bg_cell_gallery_focus_pane_ParamLimits

0xc3d3,	// (0x00019c50) bg_cell_gallery_focus_pane

0xc3e5,	// (0x00019c62) cell_gallery_pane_g1_ParamLimits

0xc3e5,	// (0x00019c62) cell_gallery_pane_g1

0x484e,	// (0x000120cb) cell_gallery_pane_g2_ParamLimits

0x484e,	// (0x000120cb) cell_gallery_pane_g2

0x485b,	// (0x000120d8) cell_gallery_pane_g3_ParamLimits

0x485b,	// (0x000120d8) cell_gallery_pane_g3

0xc3f1,	// (0x00019c6e) cell_gallery_pane_g4_ParamLimits

0xc3f1,	// (0x00019c6e) cell_gallery_pane_g4

0x0003,

0xf6c8,	// (0x0001cf45) cell_gallery_pane_g_ParamLimits

0xf6c8,	// (0x0001cf45) cell_gallery_pane_g

0xc3fd,	// (0x00019c7a) bg_cell_gallery_focus_pane_g1

0xc405,	// (0x00019c82) bg_cell_gallery_focus_pane_g2

0xc40d,	// (0x00019c8a) bg_cell_gallery_focus_pane_g3

0xc415,	// (0x00019c92) bg_cell_gallery_focus_pane_g4

0xc41d,	// (0x00019c9a) bg_cell_gallery_focus_pane_g5

0xc425,	// (0x00019ca2) bg_cell_gallery_focus_pane_g6

0xc42d,	// (0x00019caa) bg_cell_gallery_focus_pane_g7

0xc435,	// (0x00019cb2) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d1,	// (0x0001cf4e) bg_cell_gallery_focus_pane_g

0xc43d,	// (0x00019cba) aid_firma_cardinal

0xc451,	// (0x00019cce) blid_firmament_pane_t1

0xc468,	// (0x00019ce5) blid_firmament_pane_t2

0xc47f,	// (0x00019cfc) blid_firmament_pane_t3

0xc496,	// (0x00019d13) blid_firmament_pane_t4

0x0003,

0xf6e2,	// (0x0001cf5f) blid_firmament_pane_t

0xc4ad,	// (0x00019d2a) blid_sat_info_pane

0xc4bd,	// (0x00019d3a) blid_sat_info_pane_g1

0xc4bd,	// (0x00019d3a) blid_sat_info_pane_g2

0x0001,

0xf6eb,	// (0x0001cf68) blid_sat_info_pane_g

0xc4c7,	// (0x00019d44) blid_sat_info_pane_t1

0xc4d5,	// (0x00019d52) smil2_volume_content_pane

0xc4de,	// (0x00019d5b) smil2_volume_pane_g1

0xc4e6,	// (0x00019d63) smil2_volume_content_pane_g1

0xc4ef,	// (0x00019d6c) smil2_volume_content_pane_g2

0xc4f8,	// (0x00019d75) smil2_volume_content_pane_g3

0xc501,	// (0x00019d7e) smil2_volume_content_pane_g4

0xc50a,	// (0x00019d87) smil2_volume_content_pane_g5

0xc513,	// (0x00019d90) smil2_volume_content_pane_g6

0xc51c,	// (0x00019d99) smil2_volume_content_pane_g7

0xc525,	// (0x00019da2) smil2_volume_content_pane_g8

0xc52e,	// (0x00019dab) smil2_volume_content_pane_g9

0xc537,	// (0x00019db4) smil2_volume_content_pane_g10

0x0009,

0xf6f0,	// (0x0001cf6d) smil2_volume_content_pane_g

0x15c5,	// (0x0000ee42) cale_week_day_heading_pane_t1_ParamLimits

0x15ef,	// (0x0000ee6c) cale_week_day_heading_pane_t2_ParamLimits

0x161e,	// (0x0000ee9b) cale_week_day_heading_pane_t3_ParamLimits

0x164d,	// (0x0000eeca) cale_week_day_heading_pane_t4_ParamLimits

0x167c,	// (0x0000eef9) cale_week_day_heading_pane_t5_ParamLimits

0x16ab,	// (0x0000ef28) cale_week_day_heading_pane_t6_ParamLimits

0x16da,	// (0x0000ef57) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0001ca4a) cale_week_day_heading_pane_t_ParamLimits

0x9f8b,	// (0x00017808) bg_cale_side_pane_ParamLimits

0x1704,	// (0x0000ef81) cale_week_time_pane_t1_ParamLimits

0x173e,	// (0x0000efbb) cale_week_time_pane_t2_ParamLimits

0x1778,	// (0x0000eff5) cale_week_time_pane_t3_ParamLimits

0x17b2,	// (0x0000f02f) cale_week_time_pane_t4_ParamLimits

0x17ec,	// (0x0000f069) cale_week_time_pane_t5_ParamLimits

0x1826,	// (0x0000f0a3) cale_week_time_pane_t6_ParamLimits

0x1860,	// (0x0000f0dd) cale_week_time_pane_t7_ParamLimits

0x189a,	// (0x0000f117) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0001ca59) cale_week_time_pane_t_ParamLimits

0x18d4,	// (0x0000f151) cell_cale_week_pane_g2_ParamLimits

0x9f8b,	// (0x00017808) bg_cale_side_pane_cp01_ParamLimits

0x2942,	// (0x000101bf) cale_month_week_pane_t1_ParamLimits

0x295b,	// (0x000101d8) cale_month_week_pane_t2_ParamLimits

0x2974,	// (0x000101f1) cale_month_week_pane_t3_ParamLimits

0x298d,	// (0x0001020a) cale_month_week_pane_t4_ParamLimits

0x29a6,	// (0x00010223) cale_month_week_pane_t5_ParamLimits

0x29bf,	// (0x0001023c) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0001cb2e) cale_month_week_pane_t_ParamLimits

0xa371,	// (0x00017bee) cell_cale_month_pane_g1_ParamLimits

0x95b6,	// (0x00016e33) main_cale_event_viewer_pane

0x95b6,	// (0x00016e33) listscroll_cale_event_viewer_pane

0xc540,	// (0x00019dbd) list_cale_ev_pane

0xc548,	// (0x00019dc5) scroll_pane_cp023

0x4868,	// (0x000120e5) field_cale_ev_pane_ParamLimits

0x4868,	// (0x000120e5) field_cale_ev_pane

0xc554,	// (0x00019dd1) field_cale_ev_content_pane_ParamLimits

0xc554,	// (0x00019dd1) field_cale_ev_content_pane

0xc560,	// (0x00019ddd) field_cale_ev_pane_g1_ParamLimits

0xc560,	// (0x00019ddd) field_cale_ev_pane_g1

0xc56c,	// (0x00019de9) field_cale_ev_pane_g2_ParamLimits

0xc56c,	// (0x00019de9) field_cale_ev_pane_g2

0xc584,	// (0x00019e01) field_cale_ev_pane_g3_ParamLimits

0xc584,	// (0x00019e01) field_cale_ev_pane_g3

0x0002,

0xf705,	// (0x0001cf82) field_cale_ev_pane_g_ParamLimits

0xf705,	// (0x0001cf82) field_cale_ev_pane_g

0xc59c,	// (0x00019e19) field_cale_ev_pane_t1_ParamLimits

0xc59c,	// (0x00019e19) field_cale_ev_pane_t1

0x4882,	// (0x000120ff) field_cale_ev_content_pane_t1_ParamLimits

0x4882,	// (0x000120ff) field_cale_ev_content_pane_t1

0xac26,	// (0x000184a3) bg_button_pane_cp01

0x1314,	// (0x0000eb91) listscroll_cale_week_pane_ParamLimits

0x9f36,	// (0x000177b3) popup_toolbar_window_cp01

0x9f5c,	// (0x000177d9) listscroll_cale_week_pane_t1_ParamLimits

0x1314,	// (0x0000eb91) listscroll_cale_day_pane_ParamLimits

0x9f36,	// (0x000177b3) popup_toolbar_window_cp02

0xa3dc,	// (0x00017c59) listscroll_cale_day_pane_t1_ParamLimits

0x1314,	// (0x0000eb91) main_cale_month_pane_ParamLimits

0xbffc,	// (0x00019879) popup_toolbar_window_cp03_ParamLimits

0xbffc,	// (0x00019879) popup_toolbar_window_cp03

0x3699,	// (0x00010f16) main_image_pane_g2_ParamLimits

0x3699,	// (0x00010f16) main_image_pane_g2

0x36aa,	// (0x00010f27) main_image_pane_g3_ParamLimits

0x36aa,	// (0x00010f27) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0001cd60) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0001cd60) main_image_pane_g

0xadf5,	// (0x00018672) main_image_pane_t1_ParamLimits

0x36bb,	// (0x00010f38) main_image_pane_t2_ParamLimits

0x36bb,	// (0x00010f38) main_image_pane_t2

0x36cd,	// (0x00010f4a) main_image_pane_t3_ParamLimits

0x36cd,	// (0x00010f4a) main_image_pane_t3

0x36f5,	// (0x00010f72) main_image_pane_t4_ParamLimits

0x36f5,	// (0x00010f72) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0001cd67) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0001cd67) main_image_pane_t

0x3715,	// (0x00010f92) popup_image_details_window_cp01

0x371d,	// (0x00010f9a) popup_toobar_trans_pane_cp01_ParamLimits

0x371d,	// (0x00010f9a) popup_toobar_trans_pane_cp01

0x3d81,	// (0x000115fe) popup_image_details_window_ParamLimits

0x3d81,	// (0x000115fe) popup_image_details_window

0xbfd1,	// (0x0001984e) popup_image_focus_window

0x4152,	// (0x000119cf) camera2_autofocus_pane_ParamLimits

0x4152,	// (0x000119cf) camera2_autofocus_pane

0x95b6,	// (0x00016e33) bg_popup_sub_pane_cp06

0xc5b3,	// (0x00019e30) popup_image_focus_window_g1

0xc5bb,	// (0x00019e38) popup_image_focus_window_g2

0xc5c3,	// (0x00019e40) popup_image_focus_window_g3

0xc5cb,	// (0x00019e48) popup_image_focus_window_g4

0x0003,

0xf70c,	// (0x0001cf89) popup_image_focus_window_g

0xc5d3,	// (0x00019e50) popup_image_focus_window_t1

0xc5e1,	// (0x00019e5e) popup_image_focus_window_t2

0xc5f0,	// (0x00019e6d) popup_image_focus_window_t3

0x0002,

0xf715,	// (0x0001cf92) popup_image_focus_window_t

0xc5fe,	// (0x00019e7b) camera2_autofocus_pane_g1

0x9609,	// (0x00016e86) bg_tb_trans_pane_cp01

0xc60c,	// (0x00019e89) popup_image_details_window_g1

0xc61f,	// (0x00019e9c) popup_image_details_window_g2

0x0002,

0xf727,	// (0x0001cfa4) popup_image_details_window_g

0xc648,	// (0x00019ec5) popup_image_details_window_t1

0xc65a,	// (0x00019ed7) popup_image_details_window_t2

0xc673,	// (0x00019ef0) popup_image_details_window_t3

0xc687,	// (0x00019f04) popup_image_details_window_t4

0xc6a2,	// (0x00019f1f) popup_image_details_window_t5

0x0004,

0xf72e,	// (0x0001cfab) popup_image_details_window_t

0x9d3c,	// (0x000175b9) bg_calc_paper_pane_ParamLimits

0x95b6,	// (0x00016e33) grid_highlight_pane_cp013

0x9d54,	// (0x000175d1) list_calc_pane_ParamLimits

0x9d66,	// (0x000175e3) scroll_pane_cp024

0x9d6e,	// (0x000175eb) bg_calc_display_pane_ParamLimits

0x9d7a,	// (0x000175f7) calc_display_pane_t1_ParamLimits

0x9d8f,	// (0x0001760c) calc_display_pane_t2_ParamLimits

0x9da4,	// (0x00017621) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0001c9ca) calc_display_pane_t_ParamLimits

0x1222,	// (0x0000ea9f) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0001c9e7) cell_calc_pane_g

0x122b,	// (0x0000eaa8) cell_calc_pane_t1

0x9e1b,	// (0x00017698) grid_highlight_pane_cp02_ParamLimits

0x9e31,	// (0x000176ae) toolbar_button_pane_cp01_ParamLimits

0x9e31,	// (0x000176ae) toolbar_button_pane_cp01

0xae3a,	// (0x000186b7) temp_image_control_pane_ParamLimits

0xae3a,	// (0x000186b7) temp_image_control_pane

0x9609,	// (0x00016e86) main_mp3_pane

0xc6bc,	// (0x00019f39) temp_image_control_pane_g1_ParamLimits

0xc6bc,	// (0x00019f39) temp_image_control_pane_g1

0xc6ca,	// (0x00019f47) temp_image_control_pane_g2_ParamLimits

0xc6ca,	// (0x00019f47) temp_image_control_pane_g2

0xc6dc,	// (0x00019f59) temp_image_control_pane_g3_ParamLimits

0xc6dc,	// (0x00019f59) temp_image_control_pane_g3

0x48cf,	// (0x0001214c) temp_image_control_pane_g4_ParamLimits

0x48cf,	// (0x0001214c) temp_image_control_pane_g4

0x0003,

0xf739,	// (0x0001cfb6) temp_image_control_pane_g_ParamLimits

0xf739,	// (0x0001cfb6) temp_image_control_pane_g

0xc6bc,	// (0x00019f39) main_mp3_pane_g1

0x48e0,	// (0x0001215d) main_mp3_pane_g2

0x0007,

0xf742,	// (0x0001cfbf) main_mp3_pane_g

0xc71f,	// (0x00019f9c) main_mp3_pane_t1

0xa027,	// (0x000178a4) main_camera_pane_g8_ParamLimits

0xa027,	// (0x000178a4) main_camera_pane_g8

0x1b7d,	// (0x0000f3fa) main_video_pane_g7_ParamLimits

0x1b7d,	// (0x0000f3fa) main_video_pane_g7

0xc0ec,	// (0x00019969) main_camera2_pane_t7_ParamLimits

0xc0ec,	// (0x00019969) main_camera2_pane_t7

0xa17c,	// (0x000179f9) scroll_pane_cp025_ParamLimits

0xa17c,	// (0x000179f9) scroll_pane_cp025

0xa190,	// (0x00017a0d) scroll_pane_cp026_ParamLimits

0xa190,	// (0x00017a0d) scroll_pane_cp026

0xa19f,	// (0x00017a1c) wml_content_pane_ParamLimits

0x95b6,	// (0x00016e33) main_touch_calib_pane

0x49a2,	// (0x0001221f) main_touch_calib_pane_g1

0x49b4,	// (0x00012231) main_touch_calib_pane_g2

0x49c6,	// (0x00012243) main_touch_calib_pane_g3

0x49d8,	// (0x00012255) main_touch_calib_pane_g4

0x0003,

0xf760,	// (0x0001cfdd) main_touch_calib_pane_g

0x49ea,	// (0x00012267) main_touch_calib_pane_t1

0x4a02,	// (0x0001227f) main_touch_calib_pane_t2

0x0004,

0xf769,	// (0x0001cfe6) main_touch_calib_pane_t

0xa970,	// (0x000181ed) mup_progress_pane_cp02

0xa9a5,	// (0x00018222) navi_pane_g1

0xaa30,	// (0x000182ad) navi_pane_mp_t3

0x9609,	// (0x00016e86) main_mp3_pane_ParamLimits

0x3eda,	// (0x00011757) navi_pane_ParamLimits

0xc6bc,	// (0x00019f39) main_mp3_pane_g1_ParamLimits

0x48e0,	// (0x0001215d) main_mp3_pane_g2_ParamLimits

0x48ec,	// (0x00012169) main_mp3_pane_g3_ParamLimits

0x48ec,	// (0x00012169) main_mp3_pane_g3

0x48f8,	// (0x00012175) main_mp3_pane_g4_ParamLimits

0x48f8,	// (0x00012175) main_mp3_pane_g4

0xc6ec,	// (0x00019f69) main_mp3_pane_g5_ParamLimits

0xc6ec,	// (0x00019f69) main_mp3_pane_g5

0xc6fa,	// (0x00019f77) main_mp3_pane_g6_ParamLimits

0xc6fa,	// (0x00019f77) main_mp3_pane_g6

0xc707,	// (0x00019f84) main_mp3_pane_g7_ParamLimits

0xc707,	// (0x00019f84) main_mp3_pane_g7

0xc713,	// (0x00019f90) main_mp3_pane_g8_ParamLimits

0xc713,	// (0x00019f90) main_mp3_pane_g8

0xf742,	// (0x0001cfbf) main_mp3_pane_g_ParamLimits

0x4904,	// (0x00012181) main_mp3_pane_t2

0x4912,	// (0x0001218f) main_mp3_pane_t3

0xc72d,	// (0x00019faa) main_mp3_pane_t4

0xc73b,	// (0x00019fb8) main_mp3_pane_t5

0x0005,

0xf753,	// (0x0001cfd0) main_mp3_pane_t

0xc749,	// (0x00019fc6) mup_progress_pane_cp01

0x95d0,	// (0x00016e4d) aid_zoom_text_secondary2

0xc540,	// (0x00019dbd) list_cale_ev2_pane

0xc548,	// (0x00019dc5) scroll_pane_cp023_ParamLimits

0x4a50,	// (0x000122cd) field_cale_ev2_pane_ParamLimits

0x4a50,	// (0x000122cd) field_cale_ev2_pane

0xc751,	// (0x00019fce) field_cale_ev2_pane_g1_ParamLimits

0xc751,	// (0x00019fce) field_cale_ev2_pane_g1

0xc75d,	// (0x00019fda) field_cale_ev2_pane_g2_ParamLimits

0xc75d,	// (0x00019fda) field_cale_ev2_pane_g2

0xc775,	// (0x00019ff2) field_cale_ev2_pane_g3_ParamLimits

0xc775,	// (0x00019ff2) field_cale_ev2_pane_g3

0x0003,

0xf774,	// (0x0001cff1) field_cale_ev2_pane_g_ParamLimits

0xf774,	// (0x0001cff1) field_cale_ev2_pane_g

0xc799,	// (0x0001a016) field_cale_ev2_pane_t1_ParamLimits

0xc799,	// (0x0001a016) field_cale_ev2_pane_t1

0xc7b0,	// (0x0001a02d) field_cale_ev2_pane_t2_ParamLimits

0xc7b0,	// (0x0001a02d) field_cale_ev2_pane_t2

0x0001,

0xf77d,	// (0x0001cffa) field_cale_ev2_pane_t_ParamLimits

0xf77d,	// (0x0001cffa) field_cale_ev2_pane_t

0x3554,	// (0x00010dd1) main_postcard_pane_g5_ParamLimits

0x3554,	// (0x00010dd1) main_postcard_pane_g5

0x3568,	// (0x00010de5) main_postcard_pane_g6_ParamLimits

0x3568,	// (0x00010de5) main_postcard_pane_g6

0x195f,	// (0x0000f1dc) camera2_autofocus_pane_cp_ParamLimits

0x195f,	// (0x0000f1dc) camera2_autofocus_pane_cp

0x9609,	// (0x00016e86) main_mup3_pane

0x4aa6,	// (0x00012323) main_mup3_pane_g1_ParamLimits

0x4aa6,	// (0x00012323) main_mup3_pane_g1

0x4ac8,	// (0x00012345) main_mup3_pane_g2_ParamLimits

0x4ac8,	// (0x00012345) main_mup3_pane_g2

0x4b3b,	// (0x000123b8) main_mup3_pane_g3_ParamLimits

0x4b3b,	// (0x000123b8) main_mup3_pane_g3

0x4b79,	// (0x000123f6) main_mup3_pane_g4_ParamLimits

0x4b79,	// (0x000123f6) main_mup3_pane_g4

0x4bb7,	// (0x00012434) main_mup3_pane_g5_ParamLimits

0x4bb7,	// (0x00012434) main_mup3_pane_g5

0x4bf5,	// (0x00012472) main_mup3_pane_g6_ParamLimits

0x4bf5,	// (0x00012472) main_mup3_pane_g6

0xc7c5,	// (0x0001a042) main_mup3_pane_g7_ParamLimits

0xc7c5,	// (0x0001a042) main_mup3_pane_g7

0x0007,

0xf78d,	// (0x0001d00a) main_mup3_pane_g_ParamLimits

0xf78d,	// (0x0001d00a) main_mup3_pane_g

0x4c6b,	// (0x000124e8) main_mup3_pane_t1_ParamLimits

0x4c6b,	// (0x000124e8) main_mup3_pane_t1

0x4cd1,	// (0x0001254e) main_mup3_pane_t2_ParamLimits

0x4cd1,	// (0x0001254e) main_mup3_pane_t2

0x4d97,	// (0x00012614) main_mup3_pane_t4_ParamLimits

0x4d97,	// (0x00012614) main_mup3_pane_t4

0x4de5,	// (0x00012662) main_mup3_pane_t5_ParamLimits

0x4de5,	// (0x00012662) main_mup3_pane_t5

0x4e93,	// (0x00012710) main_mup3_pane_t6_ParamLimits

0x4e93,	// (0x00012710) main_mup3_pane_t6

0x0005,

0xf79e,	// (0x0001d01b) main_mup3_pane_t_ParamLimits

0xf79e,	// (0x0001d01b) main_mup3_pane_t

0x4f47,	// (0x000127c4) mup3_progress_pane_ParamLimits

0x4f47,	// (0x000127c4) mup3_progress_pane

0x4fc3,	// (0x00012840) popup_mup3_control_window_ParamLimits

0x4fc3,	// (0x00012840) popup_mup3_control_window

0xc7d3,	// (0x0001a050) popup_mup3_text_window

0x4ff1,	// (0x0001286e) mup3_progress_pane_t1

0x500f,	// (0x0001288c) mup3_progress_pane_t2

0xc7db,	// (0x0001a058) mup3_progress_pane_t3

0x0002,

0xf7ab,	// (0x0001d028) mup3_progress_pane_t

0xc7f8,	// (0x0001a075) mup_progress_pane_cp03

0x95b6,	// (0x00016e33) bg_tb_trans_pane_cp04

0x502d,	// (0x000128aa) mup3_volume_pane

0x5035,	// (0x000128b2) popup_mup3_control_window_g1

0x503e,	// (0x000128bb) mup3_volume_pane_g1

0x5047,	// (0x000128c4) mup3_volume_pane_g2

0x5050,	// (0x000128cd) mup3_volume_pane_g3

0x0002,

0xf7b2,	// (0x0001d02f) mup3_volume_pane_g

0x95b6,	// (0x00016e33) bg_tb_trans_pane_cp03

0xc808,	// (0x0001a085) popup_mup3_text_window_g1

0xc810,	// (0x0001a08d) popup_mup3_text_window_t1

0x9df2,	// (0x0001766f) list_calc_item_pane_g1_ParamLimits

0xc1d4,	// (0x00019a51) mup_volume_pane_cp_g1

0x4a1a,	// (0x00012297) main_touch_calib_pane_t3

0x4a2c,	// (0x000122a9) main_touch_calib_pane_t4

0x4a3e,	// (0x000122bb) main_touch_calib_pane_t5

0x95c0,	// (0x00016e3d) aid_cell_size_toolbar2

0x95c8,	// (0x00016e45) aid_popup3_width_pane

0x95d0,	// (0x00016e4d) aid_zoom_text_msg_primary

0xa00f,	// (0x0001788c) vorec_t7

0x9db6,	// (0x00017633) bg_calc_paper_pane_g1_ParamLimits

0x9dc2,	// (0x0001763f) bg_calc_paper_pane_g2_ParamLimits

0x9dce,	// (0x0001764b) bg_calc_paper_pane_g3_ParamLimits

0x9dda,	// (0x00017657) bg_calc_paper_pane_g4_ParamLimits

0x9de6,	// (0x00017663) bg_calc_paper_pane_g5_ParamLimits

0x11bc,	// (0x0000ea39) bg_calc_paper_pane_g6_ParamLimits

0x11cb,	// (0x0000ea48) bg_calc_paper_pane_g7_ParamLimits

0x11da,	// (0x0000ea57) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0001c9d1) bg_calc_paper_pane_g_ParamLimits

0x11e9,	// (0x0000ea66) calc_bg_paper_pane_g9_ParamLimits

0x1a93,	// (0x0000f310) image_qvga_pane_ParamLimits

0x1a93,	// (0x0000f310) image_qvga_pane

0x9c83,	// (0x00017500) bg_popup_sub_pane_cp04_ParamLimits

0xad71,	// (0x000185ee) popup_mup_playback_window_g1_ParamLimits

0xad7d,	// (0x000185fa) popup_mup_playback_window_t1_ParamLimits

0xad92,	// (0x0001860f) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0001cd5b) popup_mup_playback_window_t_ParamLimits

0x4569,	// (0x00011de6) main_mup2_pane_g3_ParamLimits

0x4569,	// (0x00011de6) main_mup2_pane_g3

0x1e51,	// (0x0000f6ce) popup_toolbar_window_cp04

0xb173,	// (0x000189f0) popup_call2_audio_second_window_g3_ParamLimits

0xb173,	// (0x000189f0) popup_call2_audio_second_window_g3

0xb57d,	// (0x00018dfa) popup_call2_audio_first_window_g4_ParamLimits

0xb57d,	// (0x00018dfa) popup_call2_audio_first_window_g4

0xbbfc,	// (0x00019479) popup_call2_audio_in_window_g4_ParamLimits

0xbbfc,	// (0x00019479) popup_call2_audio_in_window_g4

0x367b,	// (0x00010ef8) aid_area_sk_bg_cut_ParamLimits

0x367b,	// (0x00010ef8) aid_area_sk_bg_cut

0xada7,	// (0x00018624) aid_area_sk_bg_cut_2_ParamLimits

0xada7,	// (0x00018624) aid_area_sk_bg_cut_2

0x483e,	// (0x000120bb) aid_placing_details_win

0x4846,	// (0x000120c3) aid_placing_details_win_2

0xc5fe,	// (0x00019e7b) camera2_autofocus_pane_g1_ParamLimits

0x0e25,	// (0x0000e6a2) popup_fixed_preview_cale_window_ParamLimits

0x0e25,	// (0x0000e6a2) popup_fixed_preview_cale_window

0xaaaf,	// (0x0001832c) navi_slider_pane_g3

0xaab8,	// (0x00018335) navi_slider_pane_g4

0xaac1,	// (0x0001833e) navi_slider_pane_g5

0xaaaf,	// (0x0001832c) navi_slider_pane_g6

0xaaca,	// (0x00018347) navi_slider_pane_g7

0xabeb,	// (0x00018468) mup_scale_pane_g3

0xabf4,	// (0x00018471) mup_scale_pane_g4

0xabfd,	// (0x0001847a) mup_scale_pane_g5

0x33f2,	// (0x00010c6f) mup_scale_pane_g6

0x33fb,	// (0x00010c78) mup_scale_pane_g7

0xaaaf,	// (0x0001832c) cams2_slider_pane_g3

0xc289,	// (0x00019b06) cams2_slider_pane_g4

0xc291,	// (0x00019b0e) cams2_slider_pane_g5

0xaaaf,	// (0x0001832c) cams2_slider_pane_g6

0xc299,	// (0x00019b16) cams2_slider_pane_g7

0xc4bd,	// (0x00019d3a) camera2_autofocus_pane_cp_g1

0xbf9d,	// (0x0001981a) bg_popup_preview_window_pane_cp02_ParamLimits

0xbf9d,	// (0x0001981a) bg_popup_preview_window_pane_cp02

0xc81e,	// (0x0001a09b) list_fp_cale_pane_ParamLimits

0xc81e,	// (0x0001a09b) list_fp_cale_pane

0xc82a,	// (0x0001a0a7) popup_fixed_preview_cale_window_t1_ParamLimits

0xc82a,	// (0x0001a0a7) popup_fixed_preview_cale_window_t1

0x5059,	// (0x000128d6) popup_fixed_preview_cale_window_t2_ParamLimits

0x5059,	// (0x000128d6) popup_fixed_preview_cale_window_t2

0x506e,	// (0x000128eb) popup_fixed_preview_cale_window_t3_ParamLimits

0x506e,	// (0x000128eb) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b9,	// (0x0001d036) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b9,	// (0x0001d036) popup_fixed_preview_cale_window_t

0x5083,	// (0x00012900) list_single_fp_cale_pane_ParamLimits

0x5083,	// (0x00012900) list_single_fp_cale_pane

0xc848,	// (0x0001a0c5) list_single_fp_cale_pane_g1_ParamLimits

0xc848,	// (0x0001a0c5) list_single_fp_cale_pane_g1

0xc854,	// (0x0001a0d1) list_single_fp_cale_pane_g2_ParamLimits

0xc854,	// (0x0001a0d1) list_single_fp_cale_pane_g2

0x0002,

0xf7c0,	// (0x0001d03d) list_single_fp_cale_pane_g_ParamLimits

0xf7c0,	// (0x0001d03d) list_single_fp_cale_pane_g

0xc86d,	// (0x0001a0ea) list_single_fp_cale_pane_t1_ParamLimits

0xc86d,	// (0x0001a0ea) list_single_fp_cale_pane_t1

0xc87f,	// (0x0001a0fc) list_single_fp_cale_pane_t2_ParamLimits

0xc87f,	// (0x0001a0fc) list_single_fp_cale_pane_t2

0x0001,

0xf7c7,	// (0x0001d044) list_single_fp_cale_pane_t_ParamLimits

0xf7c7,	// (0x0001d044) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x95b6,	// (0x00016e33) main_dialer_pane

0x5097,	// (0x00012914) aid_cell_size_keypad

0x50a1,	// (0x0001291e) dialer_ne_pane

0x50a9,	// (0x00012926) grid_dialer_command_1_pane

0x50b1,	// (0x0001292e) grid_dialer_command_2_pane

0x50b9,	// (0x00012936) grid_dialer_keypad_pane

0x50c9,	// (0x00012946) bg_popup_call_pane_cp06_ParamLimits

0x50c9,	// (0x00012946) bg_popup_call_pane_cp06

0x50d5,	// (0x00012952) dialer_ne_clear_pane_ParamLimits

0x50d5,	// (0x00012952) dialer_ne_clear_pane

0xc8b2,	// (0x0001a12f) dialer_ne_pane_g1

0xc8ba,	// (0x0001a137) dialer_ne_pane_t1_ParamLimits

0xc8ba,	// (0x0001a137) dialer_ne_pane_t1

0x50e1,	// (0x0001295e) dialer_ne_pane_t2_ParamLimits

0x50e1,	// (0x0001295e) dialer_ne_pane_t2

0x510b,	// (0x00012988) dialer_ne_pane_t3_ParamLimits

0x510b,	// (0x00012988) dialer_ne_pane_t3

0x0002,

0xf7cc,	// (0x0001d049) dialer_ne_pane_t_ParamLimits

0xf7cc,	// (0x0001d049) dialer_ne_pane_t

0x513b,	// (0x000129b8) dialer_ne_pane_t3_copy1_ParamLimits

0x513b,	// (0x000129b8) dialer_ne_pane_t3_copy1

0x516a,	// (0x000129e7) cell_dialer_keypad_pane_ParamLimits

0x516a,	// (0x000129e7) cell_dialer_keypad_pane

0x517f,	// (0x000129fc) cell_dialer_command_1_pane_ParamLimits

0x517f,	// (0x000129fc) cell_dialer_command_1_pane

0x5195,	// (0x00012a12) cell_dialer_command_2_pane_ParamLimits

0x5195,	// (0x00012a12) cell_dialer_command_2_pane

0xc8cc,	// (0x0001a149) bg_button_pane_cp02_ParamLimits

0xc8cc,	// (0x0001a149) bg_button_pane_cp02

0x51a4,	// (0x00012a21) cell_dialer_keypad_pane_g1_ParamLimits

0x51a4,	// (0x00012a21) cell_dialer_keypad_pane_g1

0xc8cc,	// (0x0001a149) bg_button_pane_cp03_ParamLimits

0xc8cc,	// (0x0001a149) bg_button_pane_cp03

0x51b9,	// (0x00012a36) cell_dialer_command_1_pane_g1_ParamLimits

0x51b9,	// (0x00012a36) cell_dialer_command_1_pane_g1

0xc8d8,	// (0x0001a155) bg_button_pane_cp04

0x51cd,	// (0x00012a4a) cell_dialer_command_2_pane_g1

0x9fdd,	// (0x0001785a) bg_button_pane_cp06

0xc8e0,	// (0x0001a15d) dialer_ne_clear_pane_g1

0xa9b1,	// (0x0001822e) navi_pane_g2

0x2ff7,	// (0x00010874) navi_pane_g3

0x0002,

0xf3e1,	// (0x0001cc5e) navi_pane_g

0xaa3e,	// (0x000182bb) navi_pane_mv_g2

0xaa65,	// (0x000182e2) navi_pane_mv_g5

0x3014,	// (0x00010891) navi_pane_mv_t1

0x9d6e,	// (0x000175eb) main_clock2_pane

0x5212,	// (0x00012a8f) main_clock2_list_pane_ParamLimits

0x5212,	// (0x00012a8f) main_clock2_list_pane

0x5244,	// (0x00012ac1) main_clock2_pane_t1_ParamLimits

0x5244,	// (0x00012ac1) main_clock2_pane_t1

0x527e,	// (0x00012afb) main_clock2_pane_t2_ParamLimits

0x527e,	// (0x00012afb) main_clock2_pane_t2

0x0004,

0xf7d8,	// (0x0001d055) main_clock2_pane_t_ParamLimits

0xf7d8,	// (0x0001d055) main_clock2_pane_t

0x5312,	// (0x00012b8f) popup_clock_analogue_window_cp03_ParamLimits

0x5312,	// (0x00012b8f) popup_clock_analogue_window_cp03

0x5337,	// (0x00012bb4) popup_clock_digital_window_cp02_ParamLimits

0x5337,	// (0x00012bb4) popup_clock_digital_window_cp02

0x53a8,	// (0x00012c25) main_clock2_list_single_pane_ParamLimits

0x53a8,	// (0x00012c25) main_clock2_list_single_pane

0x9fdd,	// (0x0001785a) list_highlight_pane_cp05

0xc918,	// (0x0001a195) main_clock2_list_single_pane_t1

0x1e51,	// (0x0000f6ce) popup_toolbar_window_cp04_ParamLimits

0x489f,	// (0x0001211c) camera2_autofocus_pane_g2_ParamLimits

0x489f,	// (0x0001211c) camera2_autofocus_pane_g2

0x48ab,	// (0x00012128) camera2_autofocus_pane_g3_ParamLimits

0x48ab,	// (0x00012128) camera2_autofocus_pane_g3

0x48b7,	// (0x00012134) camera2_autofocus_pane_g4_ParamLimits

0x48b7,	// (0x00012134) camera2_autofocus_pane_g4

0x48c3,	// (0x00012140) camera2_autofocus_pane_g5_ParamLimits

0x48c3,	// (0x00012140) camera2_autofocus_pane_g5

0x0004,

0xf71c,	// (0x0001cf99) camera2_autofocus_pane_g_ParamLimits

0xf71c,	// (0x0001cf99) camera2_autofocus_pane_g

0x4a68,	// (0x000122e5) camera2_autofocus_pane_cp_g2

0x4a70,	// (0x000122ed) camera2_autofocus_pane_cp_g3

0x4a78,	// (0x000122f5) camera2_autofocus_pane_cp_g4

0x4a80,	// (0x000122fd) camera2_autofocus_pane_cp_g5

0x0004,

0xf782,	// (0x0001cfff) camera2_autofocus_pane_cp_g

0x50c1,	// (0x0001293e) popup_dialer_spcha_window

0x95b6,	// (0x00016e33) bg_popup_sub_pane_cp07

0xc926,	// (0x0001a1a3) list_spcha_pane

0xc92e,	// (0x0001a1ab) list_single_spcha_pane_ParamLimits

0xc92e,	// (0x0001a1ab) list_single_spcha_pane

0x95b6,	// (0x00016e33) list_highlight_pane_cp06

0xc93f,	// (0x0001a1bc) list_single_spcha_pane_t1

0xb9a6,	// (0x00019223) popup_call2_audio_out_window_g4_ParamLimits

0xb9a6,	// (0x00019223) popup_call2_audio_out_window_g4

0x95b6,	// (0x00016e33) main_imed2_pane

0xbfd9,	// (0x00019856) popup_imed_adjust2_window

0x3d97,	// (0x00011614) popup_imed_trans_window_ParamLimits

0x3d97,	// (0x00011614) popup_imed_trans_window

0xc301,	// (0x00019b7e) popup_blid_sat_info2_window_t1

0xc30f,	// (0x00019b8c) popup_blid_sat_info2_window_t2

0x000a,

0xf6b1,	// (0x0001cf2e) popup_blid_sat_info2_window_t

0x5452,	// (0x00012ccf) aid_size_cell_colour_35

0x5472,	// (0x00012cef) aid_size_cell_colour_112

0x5492,	// (0x00012d0f) aid_size_cell_effect

0xbfa9,	// (0x00019826) bg_tb_trans_pane_cp02

0xa4e5,	// (0x00017d62) heading_imed_pane

0x54b2,	// (0x00012d2f) listscroll_imed_pane

0xc94d,	// (0x0001a1ca) heading_imed_pane_g1

0xc955,	// (0x0001a1d2) heading_imed_pane_t1

0xc963,	// (0x0001a1e0) grid_imed_colour_35_pane_ParamLimits

0xc963,	// (0x0001a1e0) grid_imed_colour_35_pane

0x54be,	// (0x00012d3b) grid_imed_effect_pane

0xc976,	// (0x0001a1f3) list_imed_aspect_pane

0x54d1,	// (0x00012d4e) scroll_pane_cp027_ParamLimits

0x54d1,	// (0x00012d4e) scroll_pane_cp027

0x54dd,	// (0x00012d5a) cell_imed_effect_pane_ParamLimits

0x54dd,	// (0x00012d5a) cell_imed_effect_pane

0xc97e,	// (0x0001a1fb) cell_imed_colour_pane_ParamLimits

0xc97e,	// (0x0001a1fb) cell_imed_colour_pane

0xc9b8,	// (0x0001a235) cell_imed_colour_pane_g1_ParamLimits

0xc9b8,	// (0x0001a235) cell_imed_colour_pane_g1

0xc9c9,	// (0x0001a246) hgihlgiht_grid_pane_cp016_ParamLimits

0xc9c9,	// (0x0001a246) hgihlgiht_grid_pane_cp016

0x5502,	// (0x00012d7f) cell_imed_effect_pane_g1

0x550a,	// (0x00012d87) grid_highlight_pane_cp017

0xc9da,	// (0x0001a257) list_imed_single_pane_ParamLimits

0xc9da,	// (0x0001a257) list_imed_single_pane

0x95b6,	// (0x00016e33) list_highlight_pane_cp07

0xc9ed,	// (0x0001a26a) list_imed_aspect_pane_comp1_t1

0xbfa9,	// (0x00019826) bg_tb_trans_pane_cp05

0xca0d,	// (0x0001a28a) popup_imed_adjust2_window_g1

0xca34,	// (0x0001a2b1) popup_imed_adjust2_window_t1

0xca4c,	// (0x0001a2c9) slider_imed_adjust_pane

0xca60,	// (0x0001a2dd) slider_imed_adjust_pane_g1

0xca70,	// (0x0001a2ed) slider_imed_adjust_pane_g2

0xca80,	// (0x0001a2fd) slider_imed_adjust_pane_g3

0xca91,	// (0x0001a30e) slider_imed_adjust_pane_g4

0x0003,

0xf7f5,	// (0x0001d072) slider_imed_adjust_pane_g

0x5513,	// (0x00012d90) aid_size_cell_clipart2

0x551f,	// (0x00012d9c) grid_imed_clipart_pane

0xcaa2,	// (0x0001a31f) scroll_pane_cp031

0x5529,	// (0x00012da6) cell_imed_clipart_pane_ParamLimits

0x5529,	// (0x00012da6) cell_imed_clipart_pane

0x5541,	// (0x00012dbe) cell_imed_clipart_pane_g1

0x95b6,	// (0x00016e33) grid_highlight_pane_cp014

0x5225,	// (0x00012aa2) main_clock2_pane_g1_ParamLimits

0x5225,	// (0x00012aa2) main_clock2_pane_g1

0x5353,	// (0x00012bd0) aid_call2_pane_cp10

0x5365,	// (0x00012be2) aid_call_pane_cp10

0xa940,	// (0x000181bd) popup_clock_analogue_window_cp10_g1

0xa940,	// (0x000181bd) popup_clock_analogue_window_cp10_g2

0x5377,	// (0x00012bf4) popup_clock_analogue_window_cp10_g3

0x5377,	// (0x00012bf4) popup_clock_analogue_window_cp10_g4

0xa940,	// (0x000181bd) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e3,	// (0x0001d060) popup_clock_analogue_window_cp10_g

0x5389,	// (0x00012c06) popup_clock_analogue_window_cp10_t1

0x53ba,	// (0x00012c37) clock_digital_number_pane_cp10_ParamLimits

0x53ba,	// (0x00012c37) clock_digital_number_pane_cp10

0x53d2,	// (0x00012c4f) clock_digital_number_pane_cp11_ParamLimits

0x53d2,	// (0x00012c4f) clock_digital_number_pane_cp11

0x53ea,	// (0x00012c67) clock_digital_number_pane_cp12_ParamLimits

0x53ea,	// (0x00012c67) clock_digital_number_pane_cp12

0x5402,	// (0x00012c7f) clock_digital_number_pane_cp13_ParamLimits

0x5402,	// (0x00012c7f) clock_digital_number_pane_cp13

0x541a,	// (0x00012c97) clock_digital_separator_pane_cp10_ParamLimits

0x541a,	// (0x00012c97) clock_digital_separator_pane_cp10

0x5432,	// (0x00012caf) popup_clock_digital_window_cp02_t1_ParamLimits

0x5432,	// (0x00012caf) popup_clock_digital_window_cp02_t1

0x9c7b,	// (0x000174f8) clock_digital_number_pane_cp10_g1

0x9c7b,	// (0x000174f8) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fe,	// (0x0001d07b) clock_digital_number_pane_cp10_g

0x9c7b,	// (0x000174f8) clock_digital_separator_pane_cp10_g1

0x9c7b,	// (0x000174f8) clock_digital_separator_pane_g2_cp10

0xaa6d,	// (0x000182ea) navi_pane_vded_g4

0xaa76,	// (0x000182f3) navi_pane_vded_g5

0xaa7f,	// (0x000182fc) navi_pane_vded_t1

0x95b6,	// (0x00016e33) main_vded_pane

0x554a,	// (0x00012dc7) main_vded_pane_g1

0x5554,	// (0x00012dd1) main_vded_pane_g2

0x555c,	// (0x00012dd9) main_vded_pane_g3

0x0002,

0xf803,	// (0x0001d080) main_vded_pane_g

0x5564,	// (0x00012de1) main_vded_pane_t1

0x5572,	// (0x00012def) main_vded_pane_t2

0x0001,

0xf80a,	// (0x0001d087) main_vded_pane_t

0x5580,	// (0x00012dfd) vded_slider_pane

0x5588,	// (0x00012e05) vded_video_pane

0xcaaa,	// (0x0001a327) vded_video_pane_g1

0x5590,	// (0x00012e0d) vded_video_pane_g2

0xc4bd,	// (0x00019d3a) vded_video_pane_g3

0x0002,

0xf80f,	// (0x0001d08c) vded_video_pane_g

0xcab4,	// (0x0001a331) vded_slider_pane_g1

0xc1d4,	// (0x00019a51) vded_slider_pane_g2

0xcabd,	// (0x0001a33a) vded_slider_pane_g3

0xcac6,	// (0x0001a343) vded_slider_pane_g4

0xcacf,	// (0x0001a34c) vded_slider_pane_g5

0x0004,

0xf816,	// (0x0001d093) vded_slider_pane_g

0x4fad,	// (0x0001282a) mup3_rocker_pane_ParamLimits

0x4fad,	// (0x0001282a) mup3_rocker_pane

0x5599,	// (0x00012e16) mup3_control_keys_pane_g1

0x55a1,	// (0x00012e1e) mup3_control_keys_pane_g2

0x55a9,	// (0x00012e26) mup3_control_keys_pane_g3

0x55b1,	// (0x00012e2e) mup3_control_keys_pane_g4

0x0003,

0xf821,	// (0x0001d09e) mup3_control_keys_pane_g

0x0e58,	// (0x0000e6d5) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0e58,	// (0x0000e6d5) popup_toolbar2_fixed_window_cp01

0x4fdb,	// (0x00012858) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4fdb,	// (0x00012858) popup_toolbar2_fixed_window_cp02

0xb2e5,	// (0x00018b62) popup_call2_audio_second_window_t4_ParamLimits

0xb2e5,	// (0x00018b62) popup_call2_audio_second_window_t4

0xb813,	// (0x00019090) popup_call2_audio_first_window_t6_ParamLimits

0xb813,	// (0x00019090) popup_call2_audio_first_window_t6

0xbaa9,	// (0x00019326) popup_call2_audio_out_window_t6_ParamLimits

0xbaa9,	// (0x00019326) popup_call2_audio_out_window_t6

0x95b6,	// (0x00016e33) main_vitu_pane

0x55c1,	// (0x00012e3e) aid_size_cell_itu_ParamLimits

0x55c1,	// (0x00012e3e) aid_size_cell_itu

0x9609,	// (0x00016e86) bg_popup_window_pane_cp08_ParamLimits

0x9609,	// (0x00016e86) bg_popup_window_pane_cp08

0x55d7,	// (0x00012e54) field_vitu_entry_pane_ParamLimits

0x55d7,	// (0x00012e54) field_vitu_entry_pane

0x55ea,	// (0x00012e67) grid_vitu_function_pane_ParamLimits

0x55ea,	// (0x00012e67) grid_vitu_function_pane

0x55ff,	// (0x00012e7c) grid_vitu_itu_pane_ParamLimits

0x55ff,	// (0x00012e7c) grid_vitu_itu_pane

0x5615,	// (0x00012e92) cell_vitu_itu_pane_ParamLimits

0x5615,	// (0x00012e92) cell_vitu_itu_pane

0x5637,	// (0x00012eb4) cell_vitu_function_pane_ParamLimits

0x5637,	// (0x00012eb4) cell_vitu_function_pane

0x9609,	// (0x00016e86) bg_popup_sub_pane_cp08_ParamLimits

0x9609,	// (0x00016e86) bg_popup_sub_pane_cp08

0x5650,	// (0x00012ecd) field_vitu_entry_pane_t1_ParamLimits

0x5650,	// (0x00012ecd) field_vitu_entry_pane_t1

0xcaf0,	// (0x0001a36d) field_vitu_entry_pane_t2_ParamLimits

0xcaf0,	// (0x0001a36d) field_vitu_entry_pane_t2

0x0001,

0xf82f,	// (0x0001d0ac) field_vitu_entry_pane_t_ParamLimits

0xf82f,	// (0x0001d0ac) field_vitu_entry_pane_t

0xcb0d,	// (0x0001a38a) bg_button_pane_cp05_ParamLimits

0xcb0d,	// (0x0001a38a) bg_button_pane_cp05

0x566c,	// (0x00012ee9) cell_vitu_itu_pane_g1

0x5684,	// (0x00012f01) cell_vitu_itu_pane_t1_ParamLimits

0x5684,	// (0x00012f01) cell_vitu_itu_pane_t1

0x5696,	// (0x00012f13) cell_vitu_itu_pane_t2_ParamLimits

0x5696,	// (0x00012f13) cell_vitu_itu_pane_t2

0x0002,

0xf834,	// (0x0001d0b1) cell_vitu_itu_pane_t_ParamLimits

0xf834,	// (0x0001d0b1) cell_vitu_itu_pane_t

0xcb1b,	// (0x0001a398) bg_button_pane_cp07

0x56cb,	// (0x00012f48) cell_vitu_function_pane_g1

0x9d0a,	// (0x00017587) main_calc_pane_g1

0x0cbc,	// (0x0000e539) aid_visual_content_pane

0x95b6,	// (0x00016e33) main_vradio_pane

0x56d4,	// (0x00012f51) main_vradio_pane_g1_ParamLimits

0x56d4,	// (0x00012f51) main_vradio_pane_g1

0xcb25,	// (0x0001a3a2) main_vradio_pane_g2_ParamLimits

0xcb25,	// (0x0001a3a2) main_vradio_pane_g2

0x0001,

0xf83b,	// (0x0001d0b8) main_vradio_pane_g_ParamLimits

0xf83b,	// (0x0001d0b8) main_vradio_pane_g

0x56ea,	// (0x00012f67) main_vradio_pane_t1_ParamLimits

0x56ea,	// (0x00012f67) main_vradio_pane_t1

0x56ff,	// (0x00012f7c) main_vradio_pane_t2_ParamLimits

0x56ff,	// (0x00012f7c) main_vradio_pane_t2

0xcb32,	// (0x0001a3af) main_vradio_pane_t3_ParamLimits

0xcb32,	// (0x0001a3af) main_vradio_pane_t3

0x0002,

0xf840,	// (0x0001d0bd) main_vradio_pane_t_ParamLimits

0xf840,	// (0x0001d0bd) main_vradio_pane_t

0x5714,	// (0x00012f91) vradio_rocker_control_pane_ParamLimits

0x5714,	// (0x00012f91) vradio_rocker_control_pane

0x5726,	// (0x00012fa3) vradio_station_info_pane_ParamLimits

0x5726,	// (0x00012fa3) vradio_station_info_pane

0xcb44,	// (0x0001a3c1) vradio_frequency_info_pane_ParamLimits

0xcb44,	// (0x0001a3c1) vradio_frequency_info_pane

0xc4bd,	// (0x00019d3a) vradio_station_info_pane_g1

0xcb53,	// (0x0001a3d0) vradio_station_info_pane_t1_ParamLimits

0xcb53,	// (0x0001a3d0) vradio_station_info_pane_t1

0xcb75,	// (0x0001a3f2) vradio_station_info_pane_t2_ParamLimits

0xcb75,	// (0x0001a3f2) vradio_station_info_pane_t2

0x0001,

0xf847,	// (0x0001d0c4) vradio_station_info_pane_t_ParamLimits

0xf847,	// (0x0001d0c4) vradio_station_info_pane_t

0xcb87,	// (0x0001a404) vradio_tuning_pane

0xcb8f,	// (0x0001a40c) vradio_rocker_control_pane_g1

0xcb97,	// (0x0001a414) vradio_rocker_control_pane_g2

0xcb9f,	// (0x0001a41c) vradio_rocker_control_pane_g3

0xcba7,	// (0x0001a424) vradio_rocker_control_pane_g4

0xcbaf,	// (0x0001a42c) vradio_rocker_control_pane_g5

0x0004,

0xf84c,	// (0x0001d0c9) vradio_rocker_control_pane_g

0x5736,	// (0x00012fb3) vradio_frequency_info_pane_g1

0xcbb7,	// (0x0001a434) vradio_frequency_info_pane_t1_ParamLimits

0xcbb7,	// (0x0001a434) vradio_frequency_info_pane_t1

0x5740,	// (0x00012fbd) vradio_tuning_pane_g1

0x5749,	// (0x00012fc6) vradio_tuning_pane_t1

0x95e0,	// (0x00016e5d) area_side_right_pane_ParamLimits

0x95e0,	// (0x00016e5d) area_side_right_pane

0xbf64,	// (0x000197e1) status_small_pane_g1

0xbf6c,	// (0x000197e9) status_small_pane_g2

0xbf75,	// (0x000197f2) status_small_pane_g3

0xbf7e,	// (0x000197fb) status_small_pane_g4

0x0003,

0xf607,	// (0x0001ce84) status_small_pane_g

0xbf87,	// (0x00019804) status_small_pane_t1

0x95b6,	// (0x00016e33) main_video3_pane

0xcbcb,	// (0x0001a448) cams_zoom_vslider_pane

0xcbd3,	// (0x0001a450) image3_wide_pane_ParamLimits

0xcbd3,	// (0x0001a450) image3_wide_pane

0xcbed,	// (0x0001a46a) image3_wide_small_pane

0xcbf7,	// (0x0001a474) main_video3_pane_g1_ParamLimits

0xcbf7,	// (0x0001a474) main_video3_pane_g1

0xcc13,	// (0x0001a490) main_video3_pane_g2_ParamLimits

0xcc13,	// (0x0001a490) main_video3_pane_g2

0x0001,

0xf857,	// (0x0001d0d4) main_video3_pane_g_ParamLimits

0xf857,	// (0x0001d0d4) main_video3_pane_g

0xcc2f,	// (0x0001a4ac) main_video3_pane_t1_ParamLimits

0xcc2f,	// (0x0001a4ac) main_video3_pane_t1

0xcc5a,	// (0x0001a4d7) main_video3_pane_t2_ParamLimits

0xcc5a,	// (0x0001a4d7) main_video3_pane_t2

0xcc85,	// (0x0001a502) main_video3_pane_t3_ParamLimits

0xcc85,	// (0x0001a502) main_video3_pane_t3

0x0002,

0xf85c,	// (0x0001d0d9) main_video3_pane_t_ParamLimits

0xf85c,	// (0x0001d0d9) main_video3_pane_t

0xccb0,	// (0x0001a52d) cams_zoom_vslider_pane_g1

0xccb9,	// (0x0001a536) cams_zoom_vslider_pane_g2

0x0001,

0xf863,	// (0x0001d0e0) cams_zoom_vslider_pane_g

0xccc1,	// (0x0001a53e) small_slider_vertical_pane

0xc4bd,	// (0x00019d3a) small_slider_vertical_pane_g1

0xc4bd,	// (0x00019d3a) small_slider_vertical_pane_g2

0xccc9,	// (0x0001a546) small_slider_vertical_pane_g3

0x0002,

0xf868,	// (0x0001d0e5) small_slider_vertical_pane_g

0x95b6,	// (0x00016e33) main_hwr_training_pane

0xccd2,	// (0x0001a54f) hwr_training_instruct_pane_ParamLimits

0xccd2,	// (0x0001a54f) hwr_training_instruct_pane

0x5758,	// (0x00012fd5) hwr_training_navi_pane_ParamLimits

0x5758,	// (0x00012fd5) hwr_training_navi_pane

0x576f,	// (0x00012fec) hwr_training_write_pane_ParamLimits

0x576f,	// (0x00012fec) hwr_training_write_pane

0x95b6,	// (0x00016e33) bg_frame_shadow_pane

0xcd01,	// (0x0001a57e) hwr_training_write_pane_g1

0xcd09,	// (0x0001a586) hwr_training_write_pane_g2

0xcd11,	// (0x0001a58e) hwr_training_write_pane_g3

0xcd19,	// (0x0001a596) hwr_training_write_pane_g4

0xcd21,	// (0x0001a59e) hwr_training_write_pane_g5

0xcd29,	// (0x0001a5a6) hwr_training_write_pane_g6

0xcd31,	// (0x0001a5ae) hwr_training_write_pane_g7

0x0006,

0xf86f,	// (0x0001d0ec) hwr_training_write_pane_g

0xcd39,	// (0x0001a5b6) hwr_training_navi_pane_g1_ParamLimits

0xcd39,	// (0x0001a5b6) hwr_training_navi_pane_g1

0xcd4b,	// (0x0001a5c8) hwr_training_navi_pane_g2_ParamLimits

0xcd4b,	// (0x0001a5c8) hwr_training_navi_pane_g2

0xcd5d,	// (0x0001a5da) hwr_training_navi_pane_g3_ParamLimits

0xcd5d,	// (0x0001a5da) hwr_training_navi_pane_g3

0xcd6d,	// (0x0001a5ea) hwr_training_navi_pane_g4_ParamLimits

0xcd6d,	// (0x0001a5ea) hwr_training_navi_pane_g4

0x0004,

0xf87e,	// (0x0001d0fb) hwr_training_navi_pane_g_ParamLimits

0xf87e,	// (0x0001d0fb) hwr_training_navi_pane_g

0xcd7a,	// (0x0001a5f7) hwr_training_navi_pane_t1

0x57af,	// (0x0001302c) list_single_hwr_training_instruct_pane_ParamLimits

0x57af,	// (0x0001302c) list_single_hwr_training_instruct_pane

0xcd88,	// (0x0001a605) list_single_hwr_training_instruct_pane_t1

0xc3fd,	// (0x00019c7a) bg_frame_shadow_pane_g1

0xcd97,	// (0x0001a614) bg_frame_shadow_pane_g2

0xcd9f,	// (0x0001a61c) bg_frame_shadow_pane_g3

0xcda7,	// (0x0001a624) bg_frame_shadow_pane_g4

0xcdaf,	// (0x0001a62c) bg_frame_shadow_pane_g5

0xcdb7,	// (0x0001a634) bg_frame_shadow_pane_g6

0xcdbf,	// (0x0001a63c) bg_frame_shadow_pane_g7

0x9e91,	// (0x0001770e) bg_frame_shadow_pane_g8

0x0007,

0xf889,	// (0x0001d106) bg_frame_shadow_pane_g

0x95b6,	// (0x00016e33) main_video_tele_dialer_pane

0x57c7,	// (0x00013044) aid_size_cell_video_keypad_ParamLimits

0x57c7,	// (0x00013044) aid_size_cell_video_keypad

0x57e1,	// (0x0001305e) grid_video_dialer_keypad_pane_ParamLimits

0x57e1,	// (0x0001305e) grid_video_dialer_keypad_pane

0x5823,	// (0x000130a0) video_down_pane_cp_ParamLimits

0x5823,	// (0x000130a0) video_down_pane_cp

0x5853,	// (0x000130d0) cell_video_dialer_keypad_pane_ParamLimits

0x5853,	// (0x000130d0) cell_video_dialer_keypad_pane

0xcdc7,	// (0x0001a644) bg_button_pane_cp08_ParamLimits

0xcdc7,	// (0x0001a644) bg_button_pane_cp08

0x5875,	// (0x000130f2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5875,	// (0x000130f2) cell_video_dialer_keypad_pane_g1

0x4f97,	// (0x00012814) mup3_rocker2_pane_ParamLimits

0x4f97,	// (0x00012814) mup3_rocker2_pane

0xc4bd,	// (0x00019d3a) mup3_rocker2_pane_g1

0x3c90,	// (0x0001150d) main_dialer2_pane

0x95b6,	// (0x00016e33) main_mp4_pane

0xcde3,	// (0x0001a660) main_mp4_pane_g1_ParamLimits

0xcde3,	// (0x0001a660) main_mp4_pane_g1

0xcde3,	// (0x0001a660) main_mp4_pane_g2_ParamLimits

0xcde3,	// (0x0001a660) main_mp4_pane_g2

0x58b0,	// (0x0001312d) main_mp4_pane_g3_ParamLimits

0x58b0,	// (0x0001312d) main_mp4_pane_g3

0xcdf1,	// (0x0001a66e) main_mp4_pane_g4_ParamLimits

0xcdf1,	// (0x0001a66e) main_mp4_pane_g4

0xce1f,	// (0x0001a69c) main_mp4_pane_g5_ParamLimits

0xce1f,	// (0x0001a69c) main_mp4_pane_g5

0x0007,

0xf8a9,	// (0x0001d126) main_mp4_pane_g_ParamLimits

0xf8a9,	// (0x0001d126) main_mp4_pane_g

0xcea1,	// (0x0001a71e) main_mp4_pane_t1_ParamLimits

0xcea1,	// (0x0001a71e) main_mp4_pane_t1

0xcef9,	// (0x0001a776) main_mp4_pane_t2_ParamLimits

0xcef9,	// (0x0001a776) main_mp4_pane_t2

0xcf4b,	// (0x0001a7c8) main_mp4_pane_t3_ParamLimits

0xcf4b,	// (0x0001a7c8) main_mp4_pane_t3

0xcf71,	// (0x0001a7ee) main_mp4_pane_t4_ParamLimits

0xcf71,	// (0x0001a7ee) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0001d137) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0001d137) main_mp4_pane_t

0xcfb1,	// (0x0001a82e) mp4_progress_pane_ParamLimits

0xcfb1,	// (0x0001a82e) mp4_progress_pane

0xcff5,	// (0x0001a872) mp4_rocker_pane_ParamLimits

0xcff5,	// (0x0001a872) mp4_rocker_pane

0xd01b,	// (0x0001a898) mp4_progress_pane_t1

0xd032,	// (0x0001a8af) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0001d140) mp4_progress_pane_t

0xd049,	// (0x0001a8c6) mup_progress_pane_cp04

0xc4bd,	// (0x00019d3a) mp4_rocker_pane_g1

0x58e0,	// (0x0001315d) aid_cell_size_keypad2_ParamLimits

0x58e0,	// (0x0001315d) aid_cell_size_keypad2

0x58fa,	// (0x00013177) dialer2_ne_pane_ParamLimits

0x58fa,	// (0x00013177) dialer2_ne_pane

0x590f,	// (0x0001318c) grid_dialer2_keypad_pane_ParamLimits

0x590f,	// (0x0001318c) grid_dialer2_keypad_pane

0xc2aa,	// (0x00019b27) bg_popup_call_pane_cp07_ParamLimits

0xc2aa,	// (0x00019b27) bg_popup_call_pane_cp07

0x5925,	// (0x000131a2) dialer2_ne_pane_t1_ParamLimits

0x5925,	// (0x000131a2) dialer2_ne_pane_t1

0x5962,	// (0x000131df) cell_dialer2_keypad_pane_ParamLimits

0x5962,	// (0x000131df) cell_dialer2_keypad_pane

0xd067,	// (0x0001a8e4) bg_button_pane_pane_cp04_ParamLimits

0xd067,	// (0x0001a8e4) bg_button_pane_pane_cp04

0x5984,	// (0x00013201) cell_dialer2_keypad_pane_g1_ParamLimits

0x5984,	// (0x00013201) cell_dialer2_keypad_pane_g1

0x1d3f,	// (0x0000f5bc) aid_placing_vt_set_content_ParamLimits

0x1d3f,	// (0x0000f5bc) aid_placing_vt_set_content

0x1d61,	// (0x0000f5de) aid_placing_vt_set_title_ParamLimits

0x1d61,	// (0x0000f5de) aid_placing_vt_set_title

0x95b6,	// (0x00016e33) main_image3_pane

0x5a13,	// (0x00013290) area_side_right_pane_cp01_ParamLimits

0x5a13,	// (0x00013290) area_side_right_pane_cp01

0xcde3,	// (0x0001a660) main_image3_pane_g1_ParamLimits

0xcde3,	// (0x0001a660) main_image3_pane_g1

0x5a2a,	// (0x000132a7) main_image3_pane_g2_ParamLimits

0x5a2a,	// (0x000132a7) main_image3_pane_g2

0x5a50,	// (0x000132cd) main_image3_pane_g3_ParamLimits

0x5a50,	// (0x000132cd) main_image3_pane_g3

0x5a76,	// (0x000132f3) main_image3_pane_g4_ParamLimits

0x5a76,	// (0x000132f3) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0001d14f) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0001d14f) main_image3_pane_g

0x5a9c,	// (0x00013319) main_image3_pane_t1_ParamLimits

0x5a9c,	// (0x00013319) main_image3_pane_t1

0x5af4,	// (0x00013371) main_image3_pane_t2_ParamLimits

0x5af4,	// (0x00013371) main_image3_pane_t2

0x5b46,	// (0x000133c3) main_image3_pane_t3_ParamLimits

0x5b46,	// (0x000133c3) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0001d158) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0001d158) main_image3_pane_t

0x9609,	// (0x00016e86) grid_sctrl_middle_pane_cp01_ParamLimits

0x9609,	// (0x00016e86) grid_sctrl_middle_pane_cp01

0x5bc6,	// (0x00013443) cell_sctrl_middle_pane_cp01_ParamLimits

0x5bc6,	// (0x00013443) cell_sctrl_middle_pane_cp01

0x5be3,	// (0x00013460) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5be3,	// (0x00013460) cell_sctrl_middle_pane_cp01_g1

0x95b6,	// (0x00016e33) main_call4_pane

0x5bf9,	// (0x00013476) aid_size_button_call4_ParamLimits

0x5bf9,	// (0x00013476) aid_size_button_call4

0x5c26,	// (0x000134a3) call4_windows_pane_ParamLimits

0x5c26,	// (0x000134a3) call4_windows_pane

0x5c3c,	// (0x000134b9) grid_call4_button_pane_ParamLimits

0x5c3c,	// (0x000134b9) grid_call4_button_pane

0xd0bd,	// (0x0001a93a) call4_windows_conf_pane

0x5c63,	// (0x000134e0) popup_call4_audio_first_window_ParamLimits

0x5c63,	// (0x000134e0) popup_call4_audio_first_window

0x5c83,	// (0x00013500) popup_call4_audio_second_window_ParamLimits

0x5c83,	// (0x00013500) popup_call4_audio_second_window

0xd0f0,	// (0x0001a96d) popup_call4_audio_wait_window_ParamLimits

0xd0f0,	// (0x0001a96d) popup_call4_audio_wait_window

0x5c95,	// (0x00013512) cell_call4_button_pane_ParamLimits

0x5c95,	// (0x00013512) cell_call4_button_pane

0x5cba,	// (0x00013537) bg_button_pane_cp09_ParamLimits

0x5cba,	// (0x00013537) bg_button_pane_cp09

0x5cc6,	// (0x00013543) cell_call4_button_pane_g1_ParamLimits

0x5cc6,	// (0x00013543) cell_call4_button_pane_g1

0x5cec,	// (0x00013569) cell_call4_button_pane_t1_ParamLimits

0x5cec,	// (0x00013569) cell_call4_button_pane_t1

0xd136,	// (0x0001a9b3) popup_call4_audio_conf_window_ParamLimits

0xd136,	// (0x0001a9b3) popup_call4_audio_conf_window

0x4ff1,	// (0x0001286e) mup3_progress_pane_t1_ParamLimits

0x500f,	// (0x0001288c) mup3_progress_pane_t2_ParamLimits

0xc7db,	// (0x0001a058) mup3_progress_pane_t3_ParamLimits

0xf7ab,	// (0x0001d028) mup3_progress_pane_t_ParamLimits

0xc7f8,	// (0x0001a075) mup_progress_pane_cp03_ParamLimits

0x55b9,	// (0x00012e36) mup3_control_keys_pane_g4_copy1

0xcfdf,	// (0x0001a85c) mp4_rocker2_pane_ParamLimits

0xcfdf,	// (0x0001a85c) mp4_rocker2_pane

0xd14a,	// (0x0001a9c7) mp4_rocker2_pane_g1

0xd152,	// (0x0001a9cf) mp4_rocker2_pane_g2

0xd15a,	// (0x0001a9d7) mp4_rocker2_pane_g3

0xd162,	// (0x0001a9df) mp4_rocker2_pane_g4

0xd16a,	// (0x0001a9e7) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0001d161) mp4_rocker2_pane_g

0x95b6,	// (0x00016e33) main_camera4_pane

0x95b6,	// (0x00016e33) main_video4_pane

0x57f5,	// (0x00013072) main_video_tele_dialer_pane_t1_ParamLimits

0x57f5,	// (0x00013072) main_video_tele_dialer_pane_t1

0x580c,	// (0x00013089) main_video_tele_dialer_pane_t2_ParamLimits

0x580c,	// (0x00013089) main_video_tele_dialer_pane_t2

0x0001,

0xf89a,	// (0x0001d117) main_video_tele_dialer_pane_t_ParamLimits

0xf89a,	// (0x0001d117) main_video_tele_dialer_pane_t

0x5d2a,	// (0x000135a7) cam4_autofocus_pane_ParamLimits

0x5d2a,	// (0x000135a7) cam4_autofocus_pane

0x5d3e,	// (0x000135bb) cam4_image_uncrop_pane_ParamLimits

0x5d3e,	// (0x000135bb) cam4_image_uncrop_pane

0x5d55,	// (0x000135d2) cam4_indicators_pane_ParamLimits

0x5d55,	// (0x000135d2) cam4_indicators_pane

0x5d79,	// (0x000135f6) main_camera4_pane_g1_ParamLimits

0x5d79,	// (0x000135f6) main_camera4_pane_g1

0x5d85,	// (0x00013602) main_camera4_pane_g2_ParamLimits

0x5d85,	// (0x00013602) main_camera4_pane_g2

0x5d85,	// (0x00013602) main_camera4_pane_g3_ParamLimits

0x5d85,	// (0x00013602) main_camera4_pane_g3

0x5d91,	// (0x0001360e) main_camera4_pane_g4_ParamLimits

0x5d91,	// (0x0001360e) main_camera4_pane_g4

0x5d9d,	// (0x0001361a) main_camera4_pane_g5_ParamLimits

0x5d9d,	// (0x0001361a) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0001d16c) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0001d16c) main_camera4_pane_g

0x5dba,	// (0x00013637) main_camera4_pane_t1_ParamLimits

0x5dba,	// (0x00013637) main_camera4_pane_t1

0xc6ec,	// (0x00019f69) bg_tb_trans_pane_cp06

0xd194,	// (0x0001aa11) cam4_indicators_pane_g1

0xd1a4,	// (0x0001aa21) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0001d187) cam4_indicators_pane_g

0xd1c4,	// (0x0001aa41) cam4_indicators_pane_t1

0x5e0f,	// (0x0001368c) main_video4_pane_g1_ParamLimits

0x5e0f,	// (0x0001368c) main_video4_pane_g1

0x5e21,	// (0x0001369e) main_video4_pane_g2_ParamLimits

0x5e21,	// (0x0001369e) main_video4_pane_g2

0x5e21,	// (0x0001369e) main_video4_pane_g3_ParamLimits

0x5e21,	// (0x0001369e) main_video4_pane_g3

0x5e30,	// (0x000136ad) main_video4_pane_g4_ParamLimits

0x5e30,	// (0x000136ad) main_video4_pane_g4

0x0004,

0xf911,	// (0x0001d18e) main_video4_pane_g_ParamLimits

0xf911,	// (0x0001d18e) main_video4_pane_g

0x5e4e,	// (0x000136cb) vid4_indicators_pane_ParamLimits

0x5e4e,	// (0x000136cb) vid4_indicators_pane

0x5e76,	// (0x000136f3) video4_image_uncrop_cif_pane_ParamLimits

0x5e76,	// (0x000136f3) video4_image_uncrop_cif_pane

0x5e8e,	// (0x0001370b) video4_image_uncrop_nhd_pane_ParamLimits

0x5e8e,	// (0x0001370b) video4_image_uncrop_nhd_pane

0x5ea2,	// (0x0001371f) video4_image_uncrop_vga_pane_ParamLimits

0x5ea2,	// (0x0001371f) video4_image_uncrop_vga_pane

0x9609,	// (0x00016e86) bg_tb_trans_pane_cp07

0xd194,	// (0x0001aa11) vid4_indicators_pane_g1

0xd1e6,	// (0x0001aa63) vid4_indicators_pane_g2

0xd1f6,	// (0x0001aa73) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0001d199) vid4_indicators_pane_g

0xd223,	// (0x0001aaa0) vid4_indicators_pane_t1

0x5eba,	// (0x00013737) cam4_autofocus_pane_g1

0x5ec2,	// (0x0001373f) cam4_autofocus_pane_g2

0x5eca,	// (0x00013747) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0001d1a4) cam4_autofocus_pane_g

0x5ed2,	// (0x0001374f) cam4_autofocus_pane_g3_copy1

0x5837,	// (0x000130b4) video_down_pane_cp_t1

0x5845,	// (0x000130c2) video_down_pane_cp_t2

0x0001,

0xf89f,	// (0x0001d11c) video_down_pane_cp_t

0x9609,	// (0x00016e86) popup_vitu2_window_ParamLimits

0x9609,	// (0x00016e86) popup_vitu2_window

0x5eda,	// (0x00013757) aid_size_cell2_itu2_ParamLimits

0x5eda,	// (0x00013757) aid_size_cell2_itu2

0x5f00,	// (0x0001377d) aid_size_cell_itu2_ParamLimits

0x5f00,	// (0x0001377d) aid_size_cell_itu2

0x5f51,	// (0x000137ce) bg_popup_window_pane_cp09_ParamLimits

0x5f51,	// (0x000137ce) bg_popup_window_pane_cp09

0x5f5f,	// (0x000137dc) field_vitu2_entry_pane_ParamLimits

0x5f5f,	// (0x000137dc) field_vitu2_entry_pane

0x5f76,	// (0x000137f3) grid_vitu2_function_pane_ParamLimits

0x5f76,	// (0x000137f3) grid_vitu2_function_pane

0x5fab,	// (0x00013828) grid_vitu2_itu_pane_ParamLimits

0x5fab,	// (0x00013828) grid_vitu2_itu_pane

0x6012,	// (0x0001388f) cell_vitu2_itu_pane_ParamLimits

0x6012,	// (0x0001388f) cell_vitu2_itu_pane

0x603a,	// (0x000138b7) cell_vitu2_function_pane_ParamLimits

0x603a,	// (0x000138b7) cell_vitu2_function_pane

0xd23d,	// (0x0001aaba) bg_popup_call_pane_cp08_ParamLimits

0xd23d,	// (0x0001aaba) bg_popup_call_pane_cp08

0xd254,	// (0x0001aad1) field_vitu2_entry_pane_g1

0xd260,	// (0x0001aadd) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0001d1ab) field_vitu2_entry_pane_g

0x6079,	// (0x000138f6) field_vitu2_entry_pane_t1_ParamLimits

0x6079,	// (0x000138f6) field_vitu2_entry_pane_t1

0xd27a,	// (0x0001aaf7) field_vitu2_entry_pane_t2_ParamLimits

0xd27a,	// (0x0001aaf7) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0001d1b2) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0001d1b2) field_vitu2_entry_pane_t

0x60a6,	// (0x00013923) bg_button_pane_cp010_ParamLimits

0x60a6,	// (0x00013923) bg_button_pane_cp010

0xd29f,	// (0x0001ab1c) cell_vitu2_itu_pane_g1

0x60c2,	// (0x0001393f) cell_vitu2_itu_pane_t1_ParamLimits

0x60c2,	// (0x0001393f) cell_vitu2_itu_pane_t1

0x6120,	// (0x0001399d) cell_vitu2_itu_pane_t2_ParamLimits

0x6120,	// (0x0001399d) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0001d1bc) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0001d1bc) cell_vitu2_itu_pane_t

0x9609,	// (0x00016e86) bg_button_pane_cp011

0x620c,	// (0x00013a89) cell_vitu2_function_pane_g1

0x95b6,	// (0x00016e33) main_myfav_hc_pane

0x5b92,	// (0x0001340f) popup_image3_note_pane_ParamLimits

0x5b92,	// (0x0001340f) popup_image3_note_pane

0x5bac,	// (0x00013429) popup_image3_tool_bar_pane_ParamLimits

0x5bac,	// (0x00013429) popup_image3_tool_bar_pane

0x61ae,	// (0x00013a2b) cell_vitu2_itu_pane_t3_ParamLimits

0x61ae,	// (0x00013a2b) cell_vitu2_itu_pane_t3

0x95b6,	// (0x00016e33) bg_popup_trans_pane

0xd2b1,	// (0x0001ab2e) grid_image3_tool_bar_pane

0xd2bb,	// (0x0001ab38) bg_popup_trans_pane_g1

0xa285,	// (0x00017b02) bg_popup_trans_pane_g2

0xd2c3,	// (0x0001ab40) bg_popup_trans_pane_g3

0xd2cb,	// (0x0001ab48) bg_popup_trans_pane_g4

0xd2d3,	// (0x0001ab50) bg_popup_trans_pane_g5

0xd2db,	// (0x0001ab58) bg_popup_trans_pane_g6

0xd2e3,	// (0x0001ab60) bg_popup_trans_pane_g7

0xd2eb,	// (0x0001ab68) bg_popup_trans_pane_g8

0xa265,	// (0x00017ae2) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0001d1c3) bg_popup_trans_pane_g

0xd2f3,	// (0x0001ab70) cell_image3_tool_bar_pane_ParamLimits

0xd2f3,	// (0x0001ab70) cell_image3_tool_bar_pane

0xc4bd,	// (0x00019d3a) cell_image3_tool_bar_pane_g1

0x95b6,	// (0x00016e33) bg_popup_trans_pane_cp1

0xd307,	// (0x0001ab84) popup_image3_note_pane_t1

0xd315,	// (0x0001ab92) popup_image3_note_pane_t2

0xd323,	// (0x0001aba0) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0001d1d6) popup_image3_note_pane_t

0xd331,	// (0x0001abae) popup_image3_note_pane_t3_copy1

0x621f,	// (0x00013a9c) bg_myfav_hc_instruction_pane_ParamLimits

0x621f,	// (0x00013a9c) bg_myfav_hc_instruction_pane

0x6231,	// (0x00013aae) cell_myfav_contact_pane_ParamLimits

0x6231,	// (0x00013aae) cell_myfav_contact_pane

0x624b,	// (0x00013ac8) cell_myfav_contact_pane_cp1_ParamLimits

0x624b,	// (0x00013ac8) cell_myfav_contact_pane_cp1

0x6261,	// (0x00013ade) cell_myfav_contact_pane_cp2_ParamLimits

0x6261,	// (0x00013ade) cell_myfav_contact_pane_cp2

0x6277,	// (0x00013af4) cell_myfav_contact_pane_cp3_ParamLimits

0x6277,	// (0x00013af4) cell_myfav_contact_pane_cp3

0x628c,	// (0x00013b09) cell_myfav_contact_pane_cp4_ParamLimits

0x628c,	// (0x00013b09) cell_myfav_contact_pane_cp4

0x62a0,	// (0x00013b1d) cell_myfav_contact_pane_cp5_ParamLimits

0x62a0,	// (0x00013b1d) cell_myfav_contact_pane_cp5

0x62b4,	// (0x00013b31) cell_myfav_contact_pane_cp6_ParamLimits

0x62b4,	// (0x00013b31) cell_myfav_contact_pane_cp6

0x62c8,	// (0x00013b45) cell_myfav_contact_pane_cp7_ParamLimits

0x62c8,	// (0x00013b45) cell_myfav_contact_pane_cp7

0xd33f,	// (0x0001abbc) listscroll_gen_pane_cp05

0x62e0,	// (0x00013b5d) main_myfav_hc_pane_g1_ParamLimits

0x62e0,	// (0x00013b5d) main_myfav_hc_pane_g1

0x62f6,	// (0x00013b73) main_myfav_hc_pane_g2_ParamLimits

0x62f6,	// (0x00013b73) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0001d1dd) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0001d1dd) main_myfav_hc_pane_g

0x6320,	// (0x00013b9d) main_myfav_hc_pane_t1_ParamLimits

0x6320,	// (0x00013b9d) main_myfav_hc_pane_t1

0xd348,	// (0x0001abc5) main_myfav_hc_pane_t2_ParamLimits

0xd348,	// (0x0001abc5) main_myfav_hc_pane_t2

0xd35a,	// (0x0001abd7) main_myfav_hc_pane_t3_ParamLimits

0xd35a,	// (0x0001abd7) main_myfav_hc_pane_t3

0x6335,	// (0x00013bb2) main_myfav_hc_pane_t4_ParamLimits

0x6335,	// (0x00013bb2) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0001d1e4) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0001d1e4) main_myfav_hc_pane_t

0xc4bd,	// (0x00019d3a) bg_myfav_hc_instruction_pane_g1

0xd36c,	// (0x0001abe9) cell_myfav_contact_pane_g1_ParamLimits

0xd36c,	// (0x0001abe9) cell_myfav_contact_pane_g1

0xd36c,	// (0x0001abe9) cell_myfav_contact_pane_g2_ParamLimits

0xd36c,	// (0x0001abe9) cell_myfav_contact_pane_g2

0xd378,	// (0x0001abf5) cell_myfav_contact_pane_g3_ParamLimits

0xd378,	// (0x0001abf5) cell_myfav_contact_pane_g3

0xc7c5,	// (0x0001a042) cell_myfav_contact_pane_g4_ParamLimits

0xc7c5,	// (0x0001a042) cell_myfav_contact_pane_g4

0xd385,	// (0x0001ac02) cell_myfav_contact_pane_g5_ParamLimits

0xd385,	// (0x0001ac02) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0001d1ef) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0001d1ef) cell_myfav_contact_pane_g

0x630c,	// (0x00013b89) main_myfav_hc_pane_g3_ParamLimits

0x630c,	// (0x00013b89) main_myfav_hc_pane_g3

0x0dde,	// (0x0000e65b) popup_adpt_find_window

0x6359,	// (0x00013bd6) afind_page_pane_ParamLimits

0x6359,	// (0x00013bd6) afind_page_pane

0x636e,	// (0x00013beb) aid_size_cell_afind_ParamLimits

0x636e,	// (0x00013beb) aid_size_cell_afind

0x638c,	// (0x00013c09) bg_popup_sub_pane_cp09_ParamLimits

0x638c,	// (0x00013c09) bg_popup_sub_pane_cp09

0x6399,	// (0x00013c16) find_pane_cp01_ParamLimits

0x6399,	// (0x00013c16) find_pane_cp01

0xd391,	// (0x0001ac0e) grid_afind_control_pane_ParamLimits

0xd391,	// (0x0001ac0e) grid_afind_control_pane

0x63a6,	// (0x00013c23) grid_afind_pane_ParamLimits

0x63a6,	// (0x00013c23) grid_afind_pane

0x63c4,	// (0x00013c41) cell_afind_pane_ParamLimits

0x63c4,	// (0x00013c41) cell_afind_pane

0xc4bd,	// (0x00019d3a) afind_page_pane_g1

0x6413,	// (0x00013c90) afind_page_pane_g2

0x641c,	// (0x00013c99) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0001d1fa) afind_page_pane_g

0x6425,	// (0x00013ca2) afind_page_pane_t1

0xd3a5,	// (0x0001ac22) cell_afind_grid_control_pane_ParamLimits

0xd3a5,	// (0x0001ac22) cell_afind_grid_control_pane

0xd067,	// (0x0001a8e4) bg_button_pane_cp69_ParamLimits

0xd067,	// (0x0001a8e4) bg_button_pane_cp69

0x6445,	// (0x00013cc2) cell_afind_pane_g1_ParamLimits

0x6445,	// (0x00013cc2) cell_afind_pane_g1

0x6452,	// (0x00013ccf) cell_afind_pane_t1_ParamLimits

0x6452,	// (0x00013ccf) cell_afind_pane_t1

0xa071,	// (0x000178ee) bg_button_pane_cp72

0xd3b4,	// (0x0001ac31) cell_afind_grid_control_pane_g1

0x3832,	// (0x000110af) aid_image_placing_area_ParamLimits

0x3832,	// (0x000110af) aid_image_placing_area

0xcad8,	// (0x0001a355) field_vitu_entry_pane_g1_ParamLimits

0xcad8,	// (0x0001a355) field_vitu_entry_pane_g1

0xcae4,	// (0x0001a361) field_vitu_entry_pane_g2_ParamLimits

0xcae4,	// (0x0001a361) field_vitu_entry_pane_g2

0x0001,

0xf82a,	// (0x0001d0a7) field_vitu_entry_pane_g_ParamLimits

0xf82a,	// (0x0001d0a7) field_vitu_entry_pane_g

0x566c,	// (0x00012ee9) cell_vitu_itu_pane_g1_ParamLimits

0x56ae,	// (0x00012f2b) cell_vitu_itu_pane_t3_ParamLimits

0x56ae,	// (0x00012f2b) cell_vitu_itu_pane_t3

0xd01b,	// (0x0001a898) mp4_progress_pane_t1_ParamLimits

0xd032,	// (0x0001a8af) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0001d140) mp4_progress_pane_t_ParamLimits

0xd049,	// (0x0001a8c6) mup_progress_pane_cp04_ParamLimits

0x6347,	// (0x00013bc4) main_myfav_hc_pane_t5_ParamLimits

0x6347,	// (0x00013bc4) main_myfav_hc_pane_t5

0x95d8,	// (0x00016e55) aid_zoom_text_primary

0x0dde,	// (0x0000e65b) popup_adpt_find_window_ParamLimits

0x9609,	// (0x00016e86) main_cam_set_pane

0x5d67,	// (0x000135e4) cam4_zoom_pane_ParamLimits

0x5d67,	// (0x000135e4) cam4_zoom_pane

0x6464,	// (0x00013ce1) main_cam_set_pane_g1_ParamLimits

0x6464,	// (0x00013ce1) main_cam_set_pane_g1

0x6472,	// (0x00013cef) main_cam_set_pane_g2_ParamLimits

0x6472,	// (0x00013cef) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0001d201) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0001d201) main_cam_set_pane_g

0x6491,	// (0x00013d0e) main_cam_set_pane_t1_ParamLimits

0x6491,	// (0x00013d0e) main_cam_set_pane_t1

0x64a3,	// (0x00013d20) main_cset_listscroll_pane_ParamLimits

0x64a3,	// (0x00013d20) main_cset_listscroll_pane

0x64c1,	// (0x00013d3e) main_cset_slider_pane_ParamLimits

0x64c1,	// (0x00013d3e) main_cset_slider_pane

0xd3c5,	// (0x0001ac42) main_cset_list_pane_ParamLimits

0xd3c5,	// (0x0001ac42) main_cset_list_pane

0xd3d5,	// (0x0001ac52) scroll_pane_cp028

0x64e5,	// (0x00013d62) aid_area_touch_slider

0x6501,	// (0x00013d7e) cset_slider_pane

0x652b,	// (0x00013da8) main_cset_slider_pane_g1

0x6540,	// (0x00013dbd) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0001d206) main_cset_slider_pane_g

0xd40e,	// (0x0001ac8b) main_cset_slider_pane_t1

0x65fc,	// (0x00013e79) main_cset_slider_pane_t2

0x6616,	// (0x00013e93) main_cset_slider_pane_t3

0x6630,	// (0x00013ead) main_cset_slider_pane_t4

0x664a,	// (0x00013ec7) main_cset_slider_pane_t5

0x6664,	// (0x00013ee1) main_cset_slider_pane_t6

0x6679,	// (0x00013ef6) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0001d22b) main_cset_slider_pane_t

0x677d,	// (0x00013ffa) cset_list_set_pane_ParamLimits

0x677d,	// (0x00013ffa) cset_list_set_pane

0x678e,	// (0x0001400b) aid_position_infowindow_above

0x6796,	// (0x00014013) aid_position_infowindow_below

0x679e,	// (0x0001401b) cset_list_set_pane_g1_ParamLimits

0x679e,	// (0x0001401b) cset_list_set_pane_g1

0x67aa,	// (0x00014027) cset_list_set_pane_g3_ParamLimits

0x67aa,	// (0x00014027) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0001d24a) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0001d24a) cset_list_set_pane_g

0x67b9,	// (0x00014036) cset_list_set_pane_t1_ParamLimits

0x67b9,	// (0x00014036) cset_list_set_pane_t1

0x9609,	// (0x00016e86) list_highlight_pane_cp021_ParamLimits

0x9609,	// (0x00016e86) list_highlight_pane_cp021

0xabeb,	// (0x00018468) cset_slider_pane_g1

0xabfd,	// (0x0001847a) cset_slider_pane_g2

0xabf4,	// (0x00018471) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0001d24f) cset_slider_pane_g

0xd4ae,	// (0x0001ad2b) aid_area_touch_cam4_zoom

0xd4b6,	// (0x0001ad33) cam4_zoom_cont_pane

0xd4be,	// (0x0001ad3b) cam4_zoom_pane_g1

0xd4c6,	// (0x0001ad43) cam4_zoom_pane_g2

0x67ce,	// (0x0001404b) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0001d256) cam4_zoom_pane_g

0xd4ce,	// (0x0001ad4b) cam4_zoom_cont_pane_g1

0xd4d7,	// (0x0001ad54) cam4_zoom_cont_pane_g2

0xd4e0,	// (0x0001ad5d) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0001d25d) cam4_zoom_cont_pane_g

0x5c17,	// (0x00013494) call4_image_pane_ParamLimits

0x5c17,	// (0x00013494) call4_image_pane

0xd0bd,	// (0x0001a93a) call4_windows_conf_pane_ParamLimits

0xd0d0,	// (0x0001a94d) popup_call4_audio_in_window_ParamLimits

0xd0d0,	// (0x0001a94d) popup_call4_audio_in_window

0x95b6,	// (0x00016e33) bg_popup_call2_act_pane_cp02

0xd12e,	// (0x0001a9ab) call4_list_conf_pane

0xc4bd,	// (0x00019d3a) call4_image_pane_g1

0xc4bd,	// (0x00019d3a) call4_image_pane_g2

0x0001,

0xf6eb,	// (0x0001cf68) call4_image_pane_g

0xd4e9,	// (0x0001ad66) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4e9,	// (0x0001ad66) list_single_graphic_popup_conf4_pane

0x95b6,	// (0x00016e33) list_highlight_pane_cp022

0xd4fc,	// (0x0001ad79) list_single_graphic_popup_conf4_pane_g1

0xa80e,	// (0x0001808b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0001d264) list_single_graphic_popup_conf4_pane_g

0xd504,	// (0x0001ad81) list_single_graphic_popup_conf4_pane_t1

0x1e6b,	// (0x0000f6e8) popup_vtel_slider_window_ParamLimits

0x1e6b,	// (0x0000f6e8) popup_vtel_slider_window

0xd055,	// (0x0001a8d2) dialer2_ne_pane_t2_ParamLimits

0xd055,	// (0x0001a8d2) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0001d145) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0001d145) dialer2_ne_pane_t

0xc2aa,	// (0x00019b27) bg_popup_sub_pane_cp010_ParamLimits

0xc2aa,	// (0x00019b27) bg_popup_sub_pane_cp010

0x67d6,	// (0x00014053) popup_vtel_slider_window_g1_ParamLimits

0x67d6,	// (0x00014053) popup_vtel_slider_window_g1

0x67e9,	// (0x00014066) popup_vtel_slider_window_g2_ParamLimits

0x67e9,	// (0x00014066) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0001d269) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0001d269) popup_vtel_slider_window_g

0x683d,	// (0x000140ba) vtel_slider_pane_ParamLimits

0x683d,	// (0x000140ba) vtel_slider_pane

0x685f,	// (0x000140dc) vtel_slider_pane_g1_ParamLimits

0x685f,	// (0x000140dc) vtel_slider_pane_g1

0x6873,	// (0x000140f0) vtel_slider_pane_g2_ParamLimits

0x6873,	// (0x000140f0) vtel_slider_pane_g2

0x688b,	// (0x00014108) vtel_slider_pane_g3_ParamLimits

0x688b,	// (0x00014108) vtel_slider_pane_g3

0x685f,	// (0x000140dc) vtel_slider_pane_g4_ParamLimits

0x685f,	// (0x000140dc) vtel_slider_pane_g4

0x68a1,	// (0x0001411e) vtel_slider_pane_g5_ParamLimits

0x68a1,	// (0x0001411e) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0001d272) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0001d272) vtel_slider_pane_g

0x9609,	// (0x00016e86) main_gallery2_pane

0x5f2c,	// (0x000137a9) aid_size_row_itut2_dropdow_list_ParamLimits

0x5f2c,	// (0x000137a9) aid_size_row_itut2_dropdow_list

0x5f8f,	// (0x0001380c) grid_vitu2_function_top_pane_ParamLimits

0x5f8f,	// (0x0001380c) grid_vitu2_function_top_pane

0x5fd4,	// (0x00013851) popup_vitu2_dropdown_list_window_ParamLimits

0x5fd4,	// (0x00013851) popup_vitu2_dropdown_list_window

0x5ff0,	// (0x0001386d) popup_vitu2_match_list_window

0x68b7,	// (0x00014134) cell_vitu2_function_top_pane_ParamLimits

0x68b7,	// (0x00014134) cell_vitu2_function_top_pane

0x68cf,	// (0x0001414c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x68cf,	// (0x0001414c) cell_vitu2_function_top_pane_cp01

0x68eb,	// (0x00014168) cell_vitu2_function_top_wide_pane_ParamLimits

0x68eb,	// (0x00014168) cell_vitu2_function_top_wide_pane

0x9609,	// (0x00016e86) bg_button_pane_cp012

0x6907,	// (0x00014184) cell_vitu2_function_top_pane_g1

0xd528,	// (0x0001ada5) bg_button_pane_cp013_ParamLimits

0xd528,	// (0x0001ada5) bg_button_pane_cp013

0x691b,	// (0x00014198) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x691b,	// (0x00014198) cell_vitu2_function_top_wide_pane_g1

0x9609,	// (0x00016e86) bg_popup_sub_pane_cp20

0x6933,	// (0x000141b0) list_vitu2_match_list_pane

0xd2bb,	// (0x0001ab38) bg_popup_sub_pane_cp20_g1

0xd2c3,	// (0x0001ab40) bg_popup_sub_pane_cp20_g2

0xa285,	// (0x00017b02) bg_popup_sub_pane_cp20_g3

0xd2cb,	// (0x0001ab48) bg_popup_sub_pane_cp20_g4

0xa265,	// (0x00017ae2) bg_popup_sub_pane_cp20_g5

0xd544,	// (0x0001adc1) bg_popup_sub_pane_cp20_g6

0xd2db,	// (0x0001ab58) bg_popup_sub_pane_cp20_g7

0xd2e3,	// (0x0001ab60) bg_popup_sub_pane_cp20_g8

0xd2eb,	// (0x0001ab68) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0001d27d) bg_popup_sub_pane_cp20_g

0xd54c,	// (0x0001adc9) list_vitu2_match_list_item_pane_ParamLimits

0xd54c,	// (0x0001adc9) list_vitu2_match_list_item_pane

0xd55e,	// (0x0001addb) list_vitu2_match_list_item_pane_t1

0x95b6,	// (0x00016e33) bg_popup_sub_pane_cp21

0xa6dd,	// (0x00017f5a) grid_vitu2_dropdown_list_pane

0x697d,	// (0x000141fa) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x697d,	// (0x000141fa) cell_vitu2_dropdown_list_char_pane

0x699e,	// (0x0001421b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x699e,	// (0x0001421b) cell_vitu2_dropdown_list_ctrl_pane

0xd584,	// (0x0001ae01) cell_vitu2_dropdown_list_char_pane_g1

0xd58d,	// (0x0001ae0a) cell_vitu2_dropdown_list_char_pane_g2

0xd596,	// (0x0001ae13) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0001d29a) cell_vitu2_dropdown_list_char_pane_g

0x69ca,	// (0x00014247) cell_vitu2_dropdown_list_char_pane_t1

0x69d8,	// (0x00014255) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x69d8,	// (0x00014255) cell_vitu2_dropdown_list_ctrl_pane_g1

0x69e5,	// (0x00014262) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x69e5,	// (0x00014262) cell_vitu2_dropdown_list_ctrl_pane_g2

0x69f2,	// (0x0001426f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x69f2,	// (0x0001426f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x69ff,	// (0x0001427c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x69ff,	// (0x0001427c) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc6ec,	// (0x00019f69) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc6ec,	// (0x00019f69) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0001d2a1) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0001d2a1) cell_vitu2_dropdown_list_ctrl_pane_g

0x6a1b,	// (0x00014298) aid_size_cell_gallery2_ParamLimits

0x6a1b,	// (0x00014298) aid_size_cell_gallery2

0x6a39,	// (0x000142b6) grid_gallery2_pane_ParamLimits

0x6a39,	// (0x000142b6) grid_gallery2_pane

0x54d1,	// (0x00012d4e) scroll_pane_cp029_ParamLimits

0x54d1,	// (0x00012d4e) scroll_pane_cp029

0x6a4d,	// (0x000142ca) cell_gallery2_pane_ParamLimits

0x6a4d,	// (0x000142ca) cell_gallery2_pane

0xd59f,	// (0x0001ae1c) cell_gallery2_pane_g2

0x6aa6,	// (0x00014323) cell_gallery2_pane_g3

0xd5a7,	// (0x0001ae24) cell_gallery2_pane_g4

0xd5af,	// (0x0001ae2c) cell_gallery2_pane_g5

0x9fdd,	// (0x0001785a) grid_highlight_pane_cp10

0x5ff0,	// (0x0001386d) popup_vitu2_match_list_window_ParamLimits

0x6001,	// (0x0001387e) popup_vitu2_query_window_ParamLimits

0x6001,	// (0x0001387e) popup_vitu2_query_window

0x95b6,	// (0x00016e33) bg_vitu2_candi_button_pane

0xd584,	// (0x0001ae01) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd58d,	// (0x0001ae0a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd596,	// (0x0001ae13) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6aae,	// (0x0001432b) bg_button_pane_cp015

0x6abe,	// (0x0001433b) bg_button_pane_cp016

0x6ad0,	// (0x0001434d) bg_button_pane_cp017

0xbfa9,	// (0x00019826) bg_popup_sub_pane_cp22

0xd5b7,	// (0x0001ae34) popup_vitu2_query_window_g1

0x6b11,	// (0x0001438e) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0001d2ac) popup_vitu2_query_window_g

0x6b2c,	// (0x000143a9) popup_vitu2_query_window_t1_ParamLimits

0x6b2c,	// (0x000143a9) popup_vitu2_query_window_t1

0x6b5f,	// (0x000143dc) popup_vitu2_query_window_t2_ParamLimits

0x6b5f,	// (0x000143dc) popup_vitu2_query_window_t2

0x6b71,	// (0x000143ee) popup_vitu2_query_window_t3_ParamLimits

0x6b71,	// (0x000143ee) popup_vitu2_query_window_t3

0x6b99,	// (0x00014416) popup_vitu2_query_window_t4_ParamLimits

0x6b99,	// (0x00014416) popup_vitu2_query_window_t4

0x6bb6,	// (0x00014433) popup_vitu2_query_window_t5_ParamLimits

0x6bb6,	// (0x00014433) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0001d2b3) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0001d2b3) popup_vitu2_query_window_t

0xd3bd,	// (0x0001ac3a) main_cset_text_pane

0x64e5,	// (0x00013d62) aid_area_touch_slider_ParamLimits

0x6501,	// (0x00013d7e) cset_slider_pane_ParamLimits

0x652b,	// (0x00013da8) main_cset_slider_pane_g1_ParamLimits

0x6540,	// (0x00013dbd) main_cset_slider_pane_g2_ParamLimits

0xd3de,	// (0x0001ac5b) main_cset_slider_pane_g3_ParamLimits

0xd3de,	// (0x0001ac5b) main_cset_slider_pane_g3

0x6555,	// (0x00013dd2) main_cset_slider_pane_g4_ParamLimits

0x6555,	// (0x00013dd2) main_cset_slider_pane_g4

0x6564,	// (0x00013de1) main_cset_slider_pane_g5_ParamLimits

0x6564,	// (0x00013de1) main_cset_slider_pane_g5

0x6570,	// (0x00013ded) main_cset_slider_pane_g6_ParamLimits

0x6570,	// (0x00013ded) main_cset_slider_pane_g6

0xf989,	// (0x0001d206) main_cset_slider_pane_g_ParamLimits

0xd40e,	// (0x0001ac8b) main_cset_slider_pane_t1_ParamLimits

0x65fc,	// (0x00013e79) main_cset_slider_pane_t2_ParamLimits

0x6616,	// (0x00013e93) main_cset_slider_pane_t3_ParamLimits

0x6630,	// (0x00013ead) main_cset_slider_pane_t4_ParamLimits

0x664a,	// (0x00013ec7) main_cset_slider_pane_t5_ParamLimits

0x6664,	// (0x00013ee1) main_cset_slider_pane_t6_ParamLimits

0x6679,	// (0x00013ef6) main_cset_slider_pane_t7_ParamLimits

0x66a3,	// (0x00013f20) main_cset_slider_pane_t8_ParamLimits

0x66a3,	// (0x00013f20) main_cset_slider_pane_t8

0x66cb,	// (0x00013f48) main_cset_slider_pane_t9_ParamLimits

0x66cb,	// (0x00013f48) main_cset_slider_pane_t9

0x66f3,	// (0x00013f70) main_cset_slider_pane_t10_ParamLimits

0x66f3,	// (0x00013f70) main_cset_slider_pane_t10

0x671b,	// (0x00013f98) main_cset_slider_pane_t11_ParamLimits

0x671b,	// (0x00013f98) main_cset_slider_pane_t11

0x6743,	// (0x00013fc0) main_cset_slider_pane_t12_ParamLimits

0x6743,	// (0x00013fc0) main_cset_slider_pane_t12

0x6760,	// (0x00013fdd) main_cset_slider_pane_t13_ParamLimits

0x6760,	// (0x00013fdd) main_cset_slider_pane_t13

0xf9ae,	// (0x0001d22b) main_cset_slider_pane_t_ParamLimits

0x95b6,	// (0x00016e33) bg_popup_sub_pane_cp011

0xd5c3,	// (0x0001ae40) main_cset_text_pane_g1

0xd5cb,	// (0x0001ae48) main_cset_text_pane_t1

0xd5d9,	// (0x0001ae56) main_cset_text_pane_t2

0xd5e7,	// (0x0001ae64) main_cset_text_pane_t3

0xd5f5,	// (0x0001ae72) main_cset_text_pane_t4

0xd603,	// (0x0001ae80) main_cset_text_pane_t5

0xd611,	// (0x0001ae8e) main_cset_text_pane_t6

0xd61f,	// (0x0001ae9c) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0001d2c2) main_cset_text_pane_t

0x95b6,	// (0x00016e33) main_cam4_burst_pane

0x95b6,	// (0x00016e33) main_cam5_pane

0x6433,	// (0x00013cb0) bg_button_pane_cp019

0x643c,	// (0x00013cb9) bg_button_pane_cp020

0xd3ea,	// (0x0001ac67) main_cset_slider_pane_g7_ParamLimits

0xd3ea,	// (0x0001ac67) main_cset_slider_pane_g7

0xd3f6,	// (0x0001ac73) main_cset_slider_pane_g8_ParamLimits

0xd3f6,	// (0x0001ac73) main_cset_slider_pane_g8

0x6584,	// (0x00013e01) main_cset_slider_pane_g9_ParamLimits

0x6584,	// (0x00013e01) main_cset_slider_pane_g9

0x6590,	// (0x00013e0d) main_cset_slider_pane_g10_ParamLimits

0x6590,	// (0x00013e0d) main_cset_slider_pane_g10

0x659c,	// (0x00013e19) main_cset_slider_pane_g11_ParamLimits

0x659c,	// (0x00013e19) main_cset_slider_pane_g11

0x65a8,	// (0x00013e25) main_cset_slider_pane_g12_ParamLimits

0x65a8,	// (0x00013e25) main_cset_slider_pane_g12

0x65b4,	// (0x00013e31) main_cset_slider_pane_g13_ParamLimits

0x65b4,	// (0x00013e31) main_cset_slider_pane_g13

0x65c0,	// (0x00013e3d) main_cset_slider_pane_g14_ParamLimits

0x65c0,	// (0x00013e3d) main_cset_slider_pane_g14

0x65cc,	// (0x00013e49) main_cset_slider_pane_g15_ParamLimits

0x65cc,	// (0x00013e49) main_cset_slider_pane_g15

0xd43c,	// (0x0001acb9) main_cset_slider_pane_t14_ParamLimits

0xd43c,	// (0x0001acb9) main_cset_slider_pane_t14

0xd475,	// (0x0001acf2) main_cset_slider_pane_t15_ParamLimits

0xd475,	// (0x0001acf2) main_cset_slider_pane_t15

0x6c29,	// (0x000144a6) aid_cam4_burst_size_cell_ParamLimits

0x6c29,	// (0x000144a6) aid_cam4_burst_size_cell

0x6c49,	// (0x000144c6) grid_cam4_burst_pane_ParamLimits

0x6c49,	// (0x000144c6) grid_cam4_burst_pane

0x6c6f,	// (0x000144ec) linegrid_cam4_burst_pane_ParamLimits

0x6c6f,	// (0x000144ec) linegrid_cam4_burst_pane

0x6c91,	// (0x0001450e) scroll_pane_cp30_ParamLimits

0x6c91,	// (0x0001450e) scroll_pane_cp30

0x6c9d,	// (0x0001451a) cell_cam4_burst_pane_ParamLimits

0x6c9d,	// (0x0001451a) cell_cam4_burst_pane

0xd62d,	// (0x0001aeaa) linegrid_cam4_burst_pane_g1_ParamLimits

0xd62d,	// (0x0001aeaa) linegrid_cam4_burst_pane_g1

0x6ce4,	// (0x00014561) linegrid_cam4_burst_pane_g2_ParamLimits

0x6ce4,	// (0x00014561) linegrid_cam4_burst_pane_g2

0xd63a,	// (0x0001aeb7) linegrid_cam4_burst_pane_g3_ParamLimits

0xd63a,	// (0x0001aeb7) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0001d2d1) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0001d2d1) linegrid_cam4_burst_pane_g

0x6cf5,	// (0x00014572) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6cf5,	// (0x00014572) linegrid_cam4_burst_pane_g3_copy1

0xd647,	// (0x0001aec4) linegrid_cam4_burst_pane_g4_ParamLimits

0xd647,	// (0x0001aec4) linegrid_cam4_burst_pane_g4

0x6d0f,	// (0x0001458c) linegrid_cam4_burst_pane_g5_ParamLimits

0x6d0f,	// (0x0001458c) linegrid_cam4_burst_pane_g5

0x6d20,	// (0x0001459d) linegrid_cam4_burst_pane_g6_ParamLimits

0x6d20,	// (0x0001459d) linegrid_cam4_burst_pane_g6

0xd654,	// (0x0001aed1) linegrid_cam4_burst_pane_g7_ParamLimits

0xd654,	// (0x0001aed1) linegrid_cam4_burst_pane_g7

0x6d31,	// (0x000145ae) cell_cam4_burst_pane_g1

0xd66d,	// (0x0001aeea) main_cam5_pane_t1_ParamLimits

0xd66d,	// (0x0001aeea) main_cam5_pane_t1

0xd67f,	// (0x0001aefc) main_cam5_pane_t2_ParamLimits

0xd67f,	// (0x0001aefc) main_cam5_pane_t2

0xd691,	// (0x0001af0e) main_cam5_pane_t3_ParamLimits

0xd691,	// (0x0001af0e) main_cam5_pane_t3

0xd6a3,	// (0x0001af20) main_cam5_pane_t4_ParamLimits

0xd6a3,	// (0x0001af20) main_cam5_pane_t4

0xd6b9,	// (0x0001af36) main_cam5_pane_t5_ParamLimits

0xd6b9,	// (0x0001af36) main_cam5_pane_t5

0xd6cb,	// (0x0001af48) main_cam5_pane_t6_ParamLimits

0xd6cb,	// (0x0001af48) main_cam5_pane_t6

0xd6dd,	// (0x0001af5a) main_cam5_pane_t7_ParamLimits

0xd6dd,	// (0x0001af5a) main_cam5_pane_t7

0xd6ef,	// (0x0001af6c) main_cam5_pane_t8_ParamLimits

0xd6ef,	// (0x0001af6c) main_cam5_pane_t8

0xd70b,	// (0x0001af88) main_cam5_pane_t9_ParamLimits

0xd70b,	// (0x0001af88) main_cam5_pane_t9

0xd71d,	// (0x0001af9a) main_cam5_pane_t10_ParamLimits

0xd71d,	// (0x0001af9a) main_cam5_pane_t10

0xd72f,	// (0x0001afac) main_cam5_pane_t11_ParamLimits

0xd72f,	// (0x0001afac) main_cam5_pane_t11

0xd741,	// (0x0001afbe) main_cam5_pane_t12_ParamLimits

0xd741,	// (0x0001afbe) main_cam5_pane_t12

0xd756,	// (0x0001afd3) main_cam5_pane_t13_ParamLimits

0xd756,	// (0x0001afd3) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0001d2dd) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0001d2dd) main_cam5_pane_t

0x0e3c,	// (0x0000e6b9) popup_scut_keymap_window_ParamLimits

0x0e3c,	// (0x0000e6b9) popup_scut_keymap_window

0x6d46,	// (0x000145c3) aid_size_cell_brow_shortcut

0x9fdd,	// (0x0001785a) bg_popup_window_pane_cp010

0x6d52,	// (0x000145cf) grid_scut_pane

0x6d5c,	// (0x000145d9) cell_scut_pane_ParamLimits

0x6d5c,	// (0x000145d9) cell_scut_pane

0x6d71,	// (0x000145ee) cell_scut_pane_g1

0xd773,	// (0x0001aff0) cell_scut_pane_t1

0xd782,	// (0x0001afff) cell_scut_pane_t2

0x6d7a,	// (0x000145f7) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0001d2f8) cell_scut_pane_t

0x4c04,	// (0x00012481) main_mup3_pane_g8_ParamLimits

0x4c04,	// (0x00012481) main_mup3_pane_g8

0x5f3f,	// (0x000137bc) area_vitu2_query_pane_ParamLimits

0x5f3f,	// (0x000137bc) area_vitu2_query_pane

0x6ae2,	// (0x0001435f) input_focus_pane_cp08

0xd791,	// (0x0001b00e) area_vitu2_query_pane_g1

0x6d88,	// (0x00014605) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0001d2ff) area_vitu2_query_pane_g

0x6d97,	// (0x00014614) area_vitu2_query_pane_t1_ParamLimits

0x6d97,	// (0x00014614) area_vitu2_query_pane_t1

0x6da9,	// (0x00014626) area_vitu2_query_pane_t2_ParamLimits

0x6da9,	// (0x00014626) area_vitu2_query_pane_t2

0x6dbb,	// (0x00014638) area_vitu2_query_pane_t3_ParamLimits

0x6dbb,	// (0x00014638) area_vitu2_query_pane_t3

0xd79d,	// (0x0001b01a) area_vitu2_query_pane_t4_ParamLimits

0xd79d,	// (0x0001b01a) area_vitu2_query_pane_t4

0xd7c5,	// (0x0001b042) area_vitu2_query_pane_t5_ParamLimits

0xd7c5,	// (0x0001b042) area_vitu2_query_pane_t5

0xd7ed,	// (0x0001b06a) area_vitu2_query_pane_t6_ParamLimits

0xd7ed,	// (0x0001b06a) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0001d304) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0001d304) area_vitu2_query_pane_t

0x6de3,	// (0x00014660) bg_button_pane_cp018

0x6df0,	// (0x0001466d) bg_button_pane_cp021

0x6dfc,	// (0x00014679) bg_button_pane_cp022

0x6e0b,	// (0x00014688) input_focus_pane_cp09

0x2fd3,	// (0x00010850) aid_size_touch_mv_arrow_left

0xa94c,	// (0x000181c9) aid_size_touch_mv_arrow_right

0x65e4,	// (0x00013e61) main_cset_slider_pane_g16_ParamLimits

0x65e4,	// (0x00013e61) main_cset_slider_pane_g16

0x65f0,	// (0x00013e6d) main_cset_slider_pane_g17_ParamLimits

0x65f0,	// (0x00013e6d) main_cset_slider_pane_g17

0x6d31,	// (0x000145ae) cell_cam4_burst_pane_g1_ParamLimits

0x95b6,	// (0x00016e33) compa_mode_pane

0x67f9,	// (0x00014076) popup_vtel_slider_window_g3_ParamLimits

0x67f9,	// (0x00014076) popup_vtel_slider_window_g3

0x6810,	// (0x0001408d) popup_vtel_slider_window_g4_ParamLimits

0x6810,	// (0x0001408d) popup_vtel_slider_window_g4

0x6827,	// (0x000140a4) popup_vtel_slider_window_t1_ParamLimits

0x6827,	// (0x000140a4) popup_vtel_slider_window_t1

0x95b6,	// (0x00016e33) main_cl_pane

0xbfd9,	// (0x00019856) popup_imed_adjust2_window_ParamLimits

0xbfa9,	// (0x00019826) bg_tb_trans_pane_cp05_ParamLimits

0xca0d,	// (0x0001a28a) popup_imed_adjust2_window_g1_ParamLimits

0xca1c,	// (0x0001a299) popup_imed_adjust2_window_g2_ParamLimits

0xca1c,	// (0x0001a299) popup_imed_adjust2_window_g2

0xca28,	// (0x0001a2a5) popup_imed_adjust2_window_g3_ParamLimits

0xca28,	// (0x0001a2a5) popup_imed_adjust2_window_g3

0x0002,

0xf7ee,	// (0x0001d06b) popup_imed_adjust2_window_g_ParamLimits

0xf7ee,	// (0x0001d06b) popup_imed_adjust2_window_g

0xca34,	// (0x0001a2b1) popup_imed_adjust2_window_t1_ParamLimits

0xca4c,	// (0x0001a2c9) slider_imed_adjust_pane_ParamLimits

0xca60,	// (0x0001a2dd) slider_imed_adjust_pane_g1_ParamLimits

0xca70,	// (0x0001a2ed) slider_imed_adjust_pane_g2_ParamLimits

0xca80,	// (0x0001a2fd) slider_imed_adjust_pane_g3_ParamLimits

0xca91,	// (0x0001a30e) slider_imed_adjust_pane_g4_ParamLimits

0xf7f5,	// (0x0001d072) slider_imed_adjust_pane_g_ParamLimits

0x5d16,	// (0x00013593) aid_touch_area_cam4_ParamLimits

0x5d16,	// (0x00013593) aid_touch_area_cam4

0xd172,	// (0x0001a9ef) battery_pane_cp01

0x5dae,	// (0x0001362b) main_camera4_pane_g6_ParamLimits

0x5dae,	// (0x0001362b) main_camera4_pane_g6

0x5dcf,	// (0x0001364c) main_camera4_pane_t2_ParamLimits

0x5dcf,	// (0x0001364c) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0001d179) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0001d179) main_camera4_pane_t

0x5dfd,	// (0x0001367a) aid_touch_area_vid4_ParamLimits

0x5dfd,	// (0x0001367a) aid_touch_area_vid4

0x5e3f,	// (0x000136bc) main_video4_pane_g5_ParamLimits

0x5e3f,	// (0x000136bc) main_video4_pane_g5

0x5e60,	// (0x000136dd) vid4_progress_pane_ParamLimits

0x5e60,	// (0x000136dd) vid4_progress_pane

0xd402,	// (0x0001ac7f) main_cset_slider_pane_g18_ParamLimits

0xd402,	// (0x0001ac7f) main_cset_slider_pane_g18

0xd661,	// (0x0001aede) cell_cam4_burst_pane_g2_ParamLimits

0xd661,	// (0x0001aede) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0001d2d8) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0001d2d8) cell_cam4_burst_pane_g

0x9d6e,	// (0x000175eb) bg_cl_pane_ParamLimits

0x9d6e,	// (0x000175eb) bg_cl_pane

0x6e1a,	// (0x00014697) cl_header_pane_ParamLimits

0x6e1a,	// (0x00014697) cl_header_pane

0x6e2e,	// (0x000146ab) cl_listscroll_pane_ParamLimits

0x6e2e,	// (0x000146ab) cl_listscroll_pane

0xd839,	// (0x0001b0b6) bg_cl_pane_g1

0xd841,	// (0x0001b0be) bg_cl_pane_g2

0xd849,	// (0x0001b0c6) bg_cl_pane_g3

0xd851,	// (0x0001b0ce) bg_cl_pane_g4

0xd859,	// (0x0001b0d6) bg_cl_pane_g5

0xd861,	// (0x0001b0de) bg_cl_pane_g6

0xd869,	// (0x0001b0e6) bg_cl_pane_g7

0xd871,	// (0x0001b0ee) bg_cl_pane_g8

0xd879,	// (0x0001b0f6) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0001d313) bg_cl_pane_g

0x6e3e,	// (0x000146bb) aid_height_cl_leading_ParamLimits

0x6e3e,	// (0x000146bb) aid_height_cl_leading

0x6e4a,	// (0x000146c7) aid_height_cl_text_ParamLimits

0x6e4a,	// (0x000146c7) aid_height_cl_text

0x9609,	// (0x00016e86) bg_cl_header_pane_ParamLimits

0x9609,	// (0x00016e86) bg_cl_header_pane

0x6e69,	// (0x000146e6) cl_header_pane_g1_ParamLimits

0x6e69,	// (0x000146e6) cl_header_pane_g1

0x6e7f,	// (0x000146fc) cl_header_pane_t1_ParamLimits

0x6e7f,	// (0x000146fc) cl_header_pane_t1

0xd881,	// (0x0001b0fe) cl_list_pane

0xd88a,	// (0x0001b107) hc_scroll_pane_cp01

0xa265,	// (0x00017ae2) bg_cl_header_pane_g1

0xd2bb,	// (0x0001ab38) bg_cl_header_pane_g2

0xa285,	// (0x00017b02) bg_cl_header_pane_g3

0xd2cb,	// (0x0001ab48) bg_cl_header_pane_g4

0xd2c3,	// (0x0001ab40) bg_cl_header_pane_g5

0xd544,	// (0x0001adc1) bg_cl_header_pane_g6

0xd2e3,	// (0x0001ab60) bg_cl_header_pane_g7

0xd2eb,	// (0x0001ab68) bg_cl_header_pane_g8

0xd2db,	// (0x0001ab58) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0001d326) bg_cl_header_pane_g

0x6e98,	// (0x00014715) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6e98,	// (0x00014715) hc_cl_list_double_graphic_heading_pane

0x6ea8,	// (0x00014725) hc_cl_list_single_graphic_pane_ParamLimits

0x6ea8,	// (0x00014725) hc_cl_list_single_graphic_pane

0x6ebb,	// (0x00014738) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6ebb,	// (0x00014738) hc_cl_list_single_graphic_pane_g1

0x6ec7,	// (0x00014744) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6ec7,	// (0x00014744) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0001d339) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0001d339) hc_cl_list_single_graphic_pane_g

0x6edb,	// (0x00014758) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6edb,	// (0x00014758) hc_cl_list_single_graphic_pane_t1

0x6ebb,	// (0x00014738) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6ebb,	// (0x00014738) hc_cl_list_double_graphic_heading_pane_g1

0x6ef0,	// (0x0001476d) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6ef0,	// (0x0001476d) hc_cl_list_double_graphic_heading_pane_g2

0x6f04,	// (0x00014781) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6f04,	// (0x00014781) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0001d33e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0001d33e) hc_cl_list_double_graphic_heading_pane_g

0x6f18,	// (0x00014795) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6f18,	// (0x00014795) hc_cl_list_double_graphic_heading_pane_t1

0x6f2d,	// (0x000147aa) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6f2d,	// (0x000147aa) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0001d345) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0001d345) hc_cl_list_double_graphic_heading_pane_t

0xd893,	// (0x0001b110) vid4_progress_pane_g1

0xd8a2,	// (0x0001b11f) vid4_progress_pane_g2

0xd8b1,	// (0x0001b12e) vid4_progress_pane_g3

0xd8c0,	// (0x0001b13d) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0001d34a) vid4_progress_pane_g

0xd8cc,	// (0x0001b149) vid4_progress_pane_t1

0xd8e2,	// (0x0001b15f) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0001d355) vid4_progress_pane_t

0xd90c,	// (0x0001b189) wait_bar_pane_cp07

0xc2b8,	// (0x00019b35) blid_firmament_pane_ParamLimits

0xc2f9,	// (0x00019b76) popup_blid_sat_info2_window_g1

0xc31d,	// (0x00019b9a) popup_blid_sat_info2_window_t3

0xc32b,	// (0x00019ba8) popup_blid_sat_info2_window_t4

0xc339,	// (0x00019bb6) popup_blid_sat_info2_window_t5

0xc347,	// (0x00019bc4) popup_blid_sat_info2_window_t6

0xc357,	// (0x00019bd4) popup_blid_sat_info2_window_t7

0xc365,	// (0x00019be2) popup_blid_sat_info2_window_t8

0xc373,	// (0x00019bf0) popup_blid_sat_info2_window_t9

0xc381,	// (0x00019bfe) popup_blid_sat_info2_window_t10

0xc43d,	// (0x00019cba) aid_firma_cardinal_ParamLimits

0xc451,	// (0x00019cce) blid_firmament_pane_t1_ParamLimits

0xc468,	// (0x00019ce5) blid_firmament_pane_t2_ParamLimits

0xc47f,	// (0x00019cfc) blid_firmament_pane_t3_ParamLimits

0xc496,	// (0x00019d13) blid_firmament_pane_t4_ParamLimits

0xf6e2,	// (0x0001cf5f) blid_firmament_pane_t_ParamLimits

0xc4ad,	// (0x00019d2a) blid_sat_info_pane_ParamLimits

0x9609,	// (0x00016e86) main_cam_set_pane_ParamLimits

0x5452,	// (0x00012ccf) aid_size_cell_colour_35_ParamLimits

0x5472,	// (0x00012cef) aid_size_cell_colour_112_ParamLimits

0x5492,	// (0x00012d0f) aid_size_cell_effect_ParamLimits

0xbfa9,	// (0x00019826) bg_tb_trans_pane_cp02_ParamLimits

0xa4e5,	// (0x00017d62) heading_imed_pane_ParamLimits

0x54b2,	// (0x00012d2f) listscroll_imed_pane_ParamLimits

0xb58f,	// (0x00018e0c) popup_call2_audio_first_window_g5_ParamLimits

0xb58f,	// (0x00018e0c) popup_call2_audio_first_window_g5

0x59cf,	// (0x0001324c) aid_size_touch_image3_arrow_left_ParamLimits

0x59cf,	// (0x0001324c) aid_size_touch_image3_arrow_left

0x59ef,	// (0x0001326c) aid_size_touch_image3_arrow_right_ParamLimits

0x59ef,	// (0x0001326c) aid_size_touch_image3_arrow_right

0xd8f7,	// (0x0001b174) vid4_progress_pane_t3

0x5786,	// (0x00013003) main_hwr_training_symbol_option_pane_ParamLimits

0x5786,	// (0x00013003) main_hwr_training_symbol_option_pane

0xccec,	// (0x0001a569) popup_hwr_training_preview_window_ParamLimits

0xccec,	// (0x0001a569) popup_hwr_training_preview_window

0x57a2,	// (0x0001301f) hwr_training_navi_pane_g5_ParamLimits

0x57a2,	// (0x0001301f) hwr_training_navi_pane_g5

0xd297,	// (0x0001ab14) popup_char_count_window

0x9609,	// (0x00016e86) bg_popup_sub_pane_cp20_ParamLimits

0x6933,	// (0x000141b0) list_vitu2_match_list_pane_ParamLimits

0x6942,	// (0x000141bf) vitu2_page_scroll_pane_ParamLimits

0x6942,	// (0x000141bf) vitu2_page_scroll_pane

0xd950,	// (0x0001b1cd) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd950,	// (0x0001b1cd) list_single_hwr_training_symbol_option_pane

0xd963,	// (0x0001b1e0) list_single_hwr_training_symbol_option_pane_g1

0xd96b,	// (0x0001b1e8) list_single_hwr_training_symbol_option_pane_t1

0xd979,	// (0x0001b1f6) bg_button_pane_cp023

0xd982,	// (0x0001b1ff) bg_button_pane_cp024

0x6f68,	// (0x000147e5) vitu2_page_scroll_pane_g1

0x6f70,	// (0x000147ed) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0001d35c) vitu2_page_scroll_pane_g

0x6f78,	// (0x000147f5) vitu2_page_scroll_pane_t1

0xc4e6,	// (0x00019d63) popup_char_count_window_g1

0xd9b5,	// (0x0001b232) popup_char_count_window_g2

0xd9be,	// (0x0001b23b) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0001d361) popup_char_count_window_g

0xd9c7,	// (0x0001b244) popup_char_count_window_t1

0x95b6,	// (0x00016e33) main_vded2_pane

0xc9fb,	// (0x0001a278) aid_size_cell_imed_line

0xca05,	// (0x0001a282) grid_imed_line_width_pane

0xd207,	// (0x0001aa84) vid4_indicators_pane_g4

0xd9d5,	// (0x0001b252) cell_imed_line_width_pane_ParamLimits

0xd9d5,	// (0x0001b252) cell_imed_line_width_pane

0xd9e7,	// (0x0001b264) cell_imed_line_width_pane_g1

0xd9f0,	// (0x0001b26d) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0001d368) cell_imed_line_width_pane_g

0x6f87,	// (0x00014804) main_vded2_pane_g1_ParamLimits

0x6f87,	// (0x00014804) main_vded2_pane_g1

0x6f9d,	// (0x0001481a) main_vded2_pane_g2_ParamLimits

0x6f9d,	// (0x0001481a) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0001d36d) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0001d36d) main_vded2_pane_g

0x6fad,	// (0x0001482a) vded2_slider_pane_ParamLimits

0x6fad,	// (0x0001482a) vded2_slider_pane

0x6fc0,	// (0x0001483d) aid_size_touch_vded2_end

0x6fc8,	// (0x00014845) aid_size_touch_vded2_playhead

0x6fd0,	// (0x0001484d) aid_size_touch_vded2_start

0x6fd8,	// (0x00014855) vded2_slider_bg_pane

0x6fe1,	// (0x0001485e) vded2_slider_pane_g1

0x6fea,	// (0x00014867) vded2_slider_pane_g2

0x6ff2,	// (0x0001486f) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0001d372) vded2_slider_pane_g

0x6ffb,	// (0x00014878) vded2_slider_bg_pane_g1

0x7004,	// (0x00014881) vded2_slider_bg_pane_g2

0x700d,	// (0x0001488a) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0001d379) vded2_slider_bg_pane_g

0x34e1,	// (0x00010d5e) aid_postcard_touch_down_pane_ParamLimits

0x34e1,	// (0x00010d5e) aid_postcard_touch_down_pane

0x34f3,	// (0x00010d70) aid_postcard_touch_up_pane_ParamLimits

0x34f3,	// (0x00010d70) aid_postcard_touch_up_pane

0x95b6,	// (0x00016e33) main_blid2_pane

0xbfc1,	// (0x0001983e) popup_blid2_search_window

0x95b6,	// (0x00016e33) blid2_gps_pane

0x95b6,	// (0x00016e33) blid2_navig_pane

0x95b6,	// (0x00016e33) blid2_search_pane

0x95b6,	// (0x00016e33) blid2_tripm_pane

0x7016,	// (0x00014893) blid2_search_pane_g1_ParamLimits

0x7016,	// (0x00014893) blid2_search_pane_g1

0x702a,	// (0x000148a7) blid2_search_pane_t1_ParamLimits

0x702a,	// (0x000148a7) blid2_search_pane_t1

0x703c,	// (0x000148b9) aid_size_cell_blid2_gps_ParamLimits

0x703c,	// (0x000148b9) aid_size_cell_blid2_gps

0x7054,	// (0x000148d1) blid2_gps_pane_g1_ParamLimits

0x7054,	// (0x000148d1) blid2_gps_pane_g1

0x7068,	// (0x000148e5) grid_blid2_satellite_pane_ParamLimits

0x7068,	// (0x000148e5) grid_blid2_satellite_pane

0x707c,	// (0x000148f9) blid2_navig_pane_g1_ParamLimits

0x707c,	// (0x000148f9) blid2_navig_pane_g1

0x7088,	// (0x00014905) blid2_navig_pane_t1_ParamLimits

0x7088,	// (0x00014905) blid2_navig_pane_t1

0x70a1,	// (0x0001491e) blid2_navig_pane_t2_ParamLimits

0x70a1,	// (0x0001491e) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0001d380) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0001d380) blid2_navig_pane_t

0x70ba,	// (0x00014937) blid2_navig_ring_pane_ParamLimits

0x70ba,	// (0x00014937) blid2_navig_ring_pane

0x70cf,	// (0x0001494c) blid2_speed_pane_ParamLimits

0x70cf,	// (0x0001494c) blid2_speed_pane

0x70db,	// (0x00014958) blid2_tripm_pane_g1_ParamLimits

0x70db,	// (0x00014958) blid2_tripm_pane_g1

0x70f0,	// (0x0001496d) blid2_tripm_pane_g2_ParamLimits

0x70f0,	// (0x0001496d) blid2_tripm_pane_g2

0x7104,	// (0x00014981) blid2_tripm_pane_g3_ParamLimits

0x7104,	// (0x00014981) blid2_tripm_pane_g3

0x7118,	// (0x00014995) blid2_tripm_pane_g4_ParamLimits

0x7118,	// (0x00014995) blid2_tripm_pane_g4

0x712c,	// (0x000149a9) blid2_tripm_pane_g5_ParamLimits

0x712c,	// (0x000149a9) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0001d385) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0001d385) blid2_tripm_pane_g

0x714e,	// (0x000149cb) blid2_tripm_pane_t1_ParamLimits

0x714e,	// (0x000149cb) blid2_tripm_pane_t1

0x7165,	// (0x000149e2) blid2_tripm_pane_t2_ParamLimits

0x7165,	// (0x000149e2) blid2_tripm_pane_t2

0x717c,	// (0x000149f9) blid2_tripm_pane_t3_ParamLimits

0x717c,	// (0x000149f9) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0001d392) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0001d392) blid2_tripm_pane_t

0x71bf,	// (0x00014a3c) cell_blid2_satellite_pane_ParamLimits

0x71bf,	// (0x00014a3c) cell_blid2_satellite_pane

0x71d7,	// (0x00014a54) cell_blid2_satellite_pane_g1

0xd9f8,	// (0x0001b275) cell_blid2_satellite_pane_t1

0xc4bd,	// (0x00019d3a) blid2_speed_pane_g1

0xda06,	// (0x0001b283) blid2_speed_pane_t1

0xda14,	// (0x0001b291) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0001d39b) blid2_speed_pane_t

0xc4bd,	// (0x00019d3a) blid2_navig_ring_pane_g1

0x71e0,	// (0x00014a5d) blid2_navig_ring_pane_g2

0x71e8,	// (0x00014a65) blid2_navig_ring_pane_g3

0x71f0,	// (0x00014a6d) blid2_navig_ring_pane_g4

0x71f8,	// (0x00014a75) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0001d3a0) blid2_navig_ring_pane_g

0x95b6,	// (0x00016e33) bg_popup_window_pane_cp011

0xda22,	// (0x0001b29f) popup_blid2_search_window_g1

0xda2a,	// (0x0001b2a7) popup_blid2_search_window_t1

0xda38,	// (0x0001b2b5) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0001d3ab) popup_blid2_search_window_t

0xa174,	// (0x000179f1) main_browser_pane_g1

0x9d6e,	// (0x000175eb) main_browser_pane_ParamLimits

0x9609,	// (0x00016e86) bg_button_pane_cp011_ParamLimits

0x620c,	// (0x00013a89) cell_vitu2_function_pane_g1_ParamLimits

0xbfa9,	// (0x00019826) bg_popup_sub_pane_cp22_ParamLimits

0x6ae2,	// (0x0001435f) input_focus_pane_cp08_ParamLimits

0x6af9,	// (0x00014376) popup_vitu2_query_button_pane_ParamLimits

0x6af9,	// (0x00014376) popup_vitu2_query_button_pane

0x6b09,	// (0x00014386) popup_vitu2_query_input_button_pane

0xd5b7,	// (0x0001ae34) popup_vitu2_query_window_g1_ParamLimits

0x6b11,	// (0x0001438e) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0001d2ac) popup_vitu2_query_window_g_ParamLimits

0x95b6,	// (0x00016e33) bg_button_pane_cp026

0x7200,	// (0x00014a7d) popup_vitu2_query_input_button_pane_g1

0x95b6,	// (0x00016e33) bg_button_pane_cp025

0xda46,	// (0x0001b2c3) popup_vitu2_query_button_pane_t1

0x4920,	// (0x0001219d) main_mp3_pane_t6

0x492e,	// (0x000121ab) popup_slider_window_cp01

0xd18c,	// (0x0001aa09) cam4_battery_pane

0xd18c,	// (0x0001aa09) cam4_battery_pane_cp02

0xd18c,	// (0x0001aa09) cam4_battery_pane_cp01

0xd18c,	// (0x0001aa09) cam4_battery_pane_cp03

0xc4bd,	// (0x00019d3a) cam4_battery_pane_g1

0xda54,	// (0x0001b2d1) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0001d3b0) cam4_battery_pane_g

0xc38f,	// (0x00019c0c) popup_blid_sat_info2_window_t11

0x2fd3,	// (0x00010850) aid_size_touch_mv_arrow_left_ParamLimits

0xa94c,	// (0x000181c9) aid_size_touch_mv_arrow_right_ParamLimits

0xa9a5,	// (0x00018222) navi_pane_g1_ParamLimits

0xa9b1,	// (0x0001822e) navi_pane_g2_ParamLimits

0x2ff7,	// (0x00010874) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0001cc5e) navi_pane_g_ParamLimits

0x3014,	// (0x00010891) navi_pane_mv_t1_ParamLimits

0x54be,	// (0x00012d3b) grid_imed_effect_pane_ParamLimits

0x1d7e,	// (0x0000f5fb) aid_placing_vt_slider_lsc

0xa0b6,	// (0x00017933) aid_placing_vt_slider_prt

0x9609,	// (0x00016e86) bg_tb_trans_pane_cp01_ParamLimits

0xc60c,	// (0x00019e89) popup_image_details_window_g1_ParamLimits

0xc61f,	// (0x00019e9c) popup_image_details_window_g2_ParamLimits

0xc634,	// (0x00019eb1) popup_image_details_window_g3_ParamLimits

0xc634,	// (0x00019eb1) popup_image_details_window_g3

0xf727,	// (0x0001cfa4) popup_image_details_window_g_ParamLimits

0xc648,	// (0x00019ec5) popup_image_details_window_t1_ParamLimits

0xc65a,	// (0x00019ed7) popup_image_details_window_t2_ParamLimits

0xc673,	// (0x00019ef0) popup_image_details_window_t3_ParamLimits

0xc687,	// (0x00019f04) popup_image_details_window_t4_ParamLimits

0xc6a2,	// (0x00019f1f) popup_image_details_window_t5_ParamLimits

0xf72e,	// (0x0001cfab) popup_image_details_window_t_ParamLimits

0x6e56,	// (0x000146d3) cl_header_name_pane_ParamLimits

0x6e56,	// (0x000146d3) cl_header_name_pane

0x7208,	// (0x00014a85) cl_header_name_pane_t1_ParamLimits

0x7208,	// (0x00014a85) cl_header_name_pane_t1

0x7229,	// (0x00014aa6) cl_header_name_pane_t2_ParamLimits

0x7229,	// (0x00014aa6) cl_header_name_pane_t2

0x726b,	// (0x00014ae8) cl_header_name_pane_t3_ParamLimits

0x726b,	// (0x00014ae8) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0001d3b5) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0001d3b5) cl_header_name_pane_t

0xaa3e,	// (0x000182bb) navi_pane_mv_g2_ParamLimits

0xd254,	// (0x0001aad1) field_vitu2_entry_pane_g1_ParamLimits

0xd260,	// (0x0001aadd) field_vitu2_entry_pane_g2_ParamLimits

0xd26c,	// (0x0001aae9) field_vitu2_entry_pane_g3_ParamLimits

0xd26c,	// (0x0001aae9) field_vitu2_entry_pane_g3

0xf92e,	// (0x0001d1ab) field_vitu2_entry_pane_g_ParamLimits

0xd29f,	// (0x0001ab1c) cell_vitu2_itu_pane_g1_ParamLimits

0x60b4,	// (0x00013931) cell_vitu2_itu_pane_g2_ParamLimits

0x60b4,	// (0x00013931) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0001d1b7) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0001d1b7) cell_vitu2_itu_pane_g

0x9609,	// (0x00016e86) bg_vkb2_func_pane_cp05_ParamLimits

0x9609,	// (0x00016e86) bg_vkb2_func_pane_cp05

0x9609,	// (0x00016e86) bg_vkb2_func_pane_cp03

0x9609,	// (0x00016e86) bg_vkb2_func_pane_cp04

0x9609,	// (0x00016e86) bg_vkb2_func_pane_cp10_ParamLimits

0x9609,	// (0x00016e86) bg_vkb2_func_pane_cp10

0x6dfc,	// (0x00014679) bg_vkb2_func_pane_cp08

0x6de3,	// (0x00014660) bg_vkb2_func_pane_cp06

0x6df0,	// (0x0001466d) bg_vkb2_func_pane_cp07

0xd98b,	// (0x0001b208) bg_vkb2_func_pane_cp11_ParamLimits

0xd98b,	// (0x0001b208) bg_vkb2_func_pane_cp11

0xd9a0,	// (0x0001b21d) bg_vkb2_func_pane_cp12_ParamLimits

0xd9a0,	// (0x0001b21d) bg_vkb2_func_pane_cp12

0x95b6,	// (0x00016e33) bg_vkb2_func_pane_cp09

0xd2bb,	// (0x0001ab38) bg_vkb2_func_pane_g1

0xa285,	// (0x00017b02) bg_vkb2_func_pane_g2

0xd2c3,	// (0x0001ab40) bg_vkb2_func_pane_g3

0xd2cb,	// (0x0001ab48) bg_vkb2_func_pane_g4

0xd544,	// (0x0001adc1) bg_vkb2_func_pane_g5

0xd2e3,	// (0x0001ab60) bg_vkb2_func_pane_g6

0xd2eb,	// (0x0001ab68) bg_vkb2_func_pane_g7

0xd2db,	// (0x0001ab58) bg_vkb2_func_pane_g8

0xa265,	// (0x00017ae2) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0001d3bc) bg_vkb2_func_pane_g

0x713e,	// (0x000149bb) blid2_tripm_pane_g6_ParamLimits

0x713e,	// (0x000149bb) blid2_tripm_pane_g6

0xd013,	// (0x0001a890) mp4_progress_pane_g1

0x71ad,	// (0x00014a2a) blid2_tripm_values_pane_ParamLimits

0x71ad,	// (0x00014a2a) blid2_tripm_values_pane

0x729c,	// (0x00014b19) blid2_tripm_values_pane_t1

0x72aa,	// (0x00014b27) blid2_tripm_values_pane_t2

0x72b8,	// (0x00014b35) blid2_tripm_values_pane_t3

0x72c6,	// (0x00014b43) blid2_tripm_values_pane_t4

0x72d4,	// (0x00014b51) blid2_tripm_values_pane_t5

0x72e2,	// (0x00014b5f) blid2_tripm_values_pane_t6

0x72f0,	// (0x00014b6d) blid2_tripm_values_pane_t7

0x72fe,	// (0x00014b7b) blid2_tripm_values_pane_t8

0x730c,	// (0x00014b89) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0001d3cf) blid2_tripm_values_pane_t

0x1db8,	// (0x0000f635) call_video_pane_t1_ParamLimits

0x1dd2,	// (0x0000f64f) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0001cae7) call_video_pane_t_ParamLimits

0x3469,	// (0x00010ce6) msg_header_pane_g1_ParamLimits

0xac38,	// (0x000184b5) msg_header_pane_g2_ParamLimits

0xac38,	// (0x000184b5) msg_header_pane_g2

0x0001,

0xf484,	// (0x0001cd01) msg_header_pane_g_ParamLimits

0xf484,	// (0x0001cd01) msg_header_pane_g

0x9d6e,	// (0x000175eb) main_clock2_pane_ParamLimits

0x51d5,	// (0x00012a52) grid_clock2_toolbar_pane_ParamLimits

0x51d5,	// (0x00012a52) grid_clock2_toolbar_pane

0x51d5,	// (0x00012a52) listscroll_clock2_pane_ParamLimits

0x51d5,	// (0x00012a52) listscroll_clock2_pane

0x52b8,	// (0x00012b35) main_clock2_pane_t3_ParamLimits

0x52b8,	// (0x00012b35) main_clock2_pane_t3

0x52da,	// (0x00012b57) main_clock2_pane_t4_ParamLimits

0x52da,	// (0x00012b57) main_clock2_pane_t4

0xda5e,	// (0x0001b2db) cell_clock2_toolbar_pane

0xda66,	// (0x0001b2e3) cell_clock2_toolbar_pane_cp01

0xda66,	// (0x0001b2e3) cell_clock2_toolbar_pane_cp02

0xda6e,	// (0x0001b2eb) cell_clock2_toolbar_pane_cp03

0xda76,	// (0x0001b2f3) list_clock2_pane

0xda7e,	// (0x0001b2fb) scroll_pane_cp10

0xda86,	// (0x0001b303) list_single_clock2_pane_ParamLimits

0xda86,	// (0x0001b303) list_single_clock2_pane

0x9fdd,	// (0x0001785a) list_highlight_pane_cp08

0xda93,	// (0x0001b310) list_single_clock2_pane_t1

0xdaa1,	// (0x0001b31e) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0001d3e2) list_single_clock2_pane_t

0x95b6,	// (0x00016e33) bg_button_pane_cp10

0xdaaf,	// (0x0001b32c) cell_clock2_toolbar_pane_g1

0x3475,	// (0x00010cf2) aid_main_viewer_pane_g1_ParamLimits

0x3475,	// (0x00010cf2) aid_main_viewer_pane_g1

0x3481,	// (0x00010cfe) aid_main_viewer_pane_g2_ParamLimits

0x3481,	// (0x00010cfe) aid_main_viewer_pane_g2

0x348d,	// (0x00010d0a) aid_main_viewer_pane_g3_ParamLimits

0x348d,	// (0x00010d0a) aid_main_viewer_pane_g3

0x349c,	// (0x00010d19) aid_main_viewer_pane_g4_ParamLimits

0x349c,	// (0x00010d19) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0001cd12) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0001cd12) aid_main_viewer_pane_g

0x9609,	// (0x00016e86) main_calc_pane_ParamLimits

0x3c90,	// (0x0001150d) main_dialer2_pane_ParamLimits

0x95b6,	// (0x00016e33) main_cam6_pane

0x95b6,	// (0x00016e33) main_vid6_pane

0x51e1,	// (0x00012a5e) listscroll_gen_pane_cp06_ParamLimits

0x51e1,	// (0x00012a5e) listscroll_gen_pane_cp06

0x52fb,	// (0x00012b78) main_clock2_pane_t5_ParamLimits

0x52fb,	// (0x00012b78) main_clock2_pane_t5

0x5353,	// (0x00012bd0) aid_call2_pane_cp10_ParamLimits

0x5365,	// (0x00012be2) aid_call_pane_cp10_ParamLimits

0xa940,	// (0x000181bd) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa940,	// (0x000181bd) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5377,	// (0x00012bf4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5377,	// (0x00012bf4) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa940,	// (0x000181bd) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e3,	// (0x0001d060) popup_clock_analogue_window_cp10_g_ParamLimits

0x5389,	// (0x00012c06) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd073,	// (0x0001a8f0) cell_dialer2_keypad_pane_g2_ParamLimits

0xd073,	// (0x0001a8f0) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0001d14a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0001d14a) cell_dialer2_keypad_pane_g

0x5998,	// (0x00013215) cell_dialer2_keypad_pane_t1

0x64d7,	// (0x00013d54) main_cset_text2_pane_ParamLimits

0x64d7,	// (0x00013d54) main_cset_text2_pane

0xd791,	// (0x0001b00e) area_vitu2_query_pane_g1_ParamLimits

0x6d88,	// (0x00014605) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0001d2ff) area_vitu2_query_pane_g_ParamLimits

0xd815,	// (0x0001b092) area_vitu2_query_pane_t7_ParamLimits

0xd815,	// (0x0001b092) area_vitu2_query_pane_t7

0x6de3,	// (0x00014660) bg_button_pane_cp018_ParamLimits

0x6df0,	// (0x0001466d) bg_button_pane_cp021_ParamLimits

0x6dfc,	// (0x00014679) bg_button_pane_cp022_ParamLimits

0x6dfc,	// (0x00014679) bg_vkb2_func_pane_cp08_ParamLimits

0x6de3,	// (0x00014660) bg_vkb2_func_pane_cp06_ParamLimits

0x6df0,	// (0x0001466d) bg_vkb2_func_pane_cp07_ParamLimits

0x6e0b,	// (0x00014688) input_focus_pane_cp09_ParamLimits

0xdab7,	// (0x0001b334) cam6_autofocus_pane_ParamLimits

0xdab7,	// (0x0001b334) cam6_autofocus_pane

0x731a,	// (0x00014b97) cam6_image_uncrop_pane_ParamLimits

0x731a,	// (0x00014b97) cam6_image_uncrop_pane

0x7327,	// (0x00014ba4) cam6_indi_pane_ParamLimits

0x7327,	// (0x00014ba4) cam6_indi_pane

0x733d,	// (0x00014bba) cam6_mode_pane_ParamLimits

0x733d,	// (0x00014bba) cam6_mode_pane

0x734f,	// (0x00014bcc) cam6_timer_pane_ParamLimits

0x734f,	// (0x00014bcc) cam6_timer_pane

0x735b,	// (0x00014bd8) cam6_zoom_pane_ParamLimits

0x735b,	// (0x00014bd8) cam6_zoom_pane

0x7367,	// (0x00014be4) cam6_mode_pane_g1_ParamLimits

0x7367,	// (0x00014be4) cam6_mode_pane_g1

0x7377,	// (0x00014bf4) cam6_mode_pane_g2_ParamLimits

0x7377,	// (0x00014bf4) cam6_mode_pane_g2

0x7387,	// (0x00014c04) cam6_mode_pane_g3_ParamLimits

0x7387,	// (0x00014c04) cam6_mode_pane_g3

0x7397,	// (0x00014c14) cam6_mode_pane_g4_ParamLimits

0x7397,	// (0x00014c14) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0001d3e7) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0001d3e7) cam6_mode_pane_g

0xdac3,	// (0x0001b340) bg_tb_trans_pane_cp08_ParamLimits

0xdac3,	// (0x0001b340) bg_tb_trans_pane_cp08

0xdad1,	// (0x0001b34e) cam6_battery_pane_ParamLimits

0xdad1,	// (0x0001b34e) cam6_battery_pane

0xdae7,	// (0x0001b364) cam6_indi_pane_g1_ParamLimits

0xdae7,	// (0x0001b364) cam6_indi_pane_g1

0xdaf9,	// (0x0001b376) cam6_indi_pane_g2_ParamLimits

0xdaf9,	// (0x0001b376) cam6_indi_pane_g2

0xdb0b,	// (0x0001b388) cam6_indi_pane_g3_ParamLimits

0xdb0b,	// (0x0001b388) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0001d3f0) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0001d3f0) cam6_indi_pane_g

0xdb1d,	// (0x0001b39a) cam6_indi_pane_t1_ParamLimits

0xdb1d,	// (0x0001b39a) cam6_indi_pane_t1

0x5eba,	// (0x00013737) cam6_autofocus_pane_g1

0x5ec2,	// (0x0001373f) cam6_autofocus_pane_g2

0x5eca,	// (0x00013747) cam6_autofocus_pane_g3

0x5ed2,	// (0x0001374f) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0001d3f7) cam6_autofocus_pane_g

0xdb43,	// (0x0001b3c0) cam6_timer_pane_g1

0xdb4b,	// (0x0001b3c8) cam6_timer_pane_t1

0xdb59,	// (0x0001b3d6) cam6_zoom_cont_pane

0xdb61,	// (0x0001b3de) cam6_zoom_pane_g1

0xdb69,	// (0x0001b3e6) cam6_zoom_pane_g2

0x73a7,	// (0x00014c24) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0001d400) cam6_zoom_pane_g

0xc4bd,	// (0x00019d3a) cam6_battery_pane_g1

0xc4bd,	// (0x00019d3a) cam6_battery_pane_g2

0x0001,

0xf6eb,	// (0x0001cf68) cam6_battery_pane_g

0xdb71,	// (0x0001b3ee) cam6_zoom_cont_pane_g1

0xdb7a,	// (0x0001b3f7) cam6_zoom_cont_pane_g2

0xdb83,	// (0x0001b400) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0001d407) cam6_zoom_cont_pane_g

0x73c4,	// (0x00014c41) cam6_mode_pane_cp_ParamLimits

0x73c4,	// (0x00014c41) cam6_mode_pane_cp

0x735b,	// (0x00014bd8) cam6_zoom_pane_cp_ParamLimits

0x735b,	// (0x00014bd8) cam6_zoom_pane_cp

0x73d6,	// (0x00014c53) vid6_image_uncrop_cif_pane_ParamLimits

0x73d6,	// (0x00014c53) vid6_image_uncrop_cif_pane

0x73e4,	// (0x00014c61) vid6_image_uncrop_nhd_pane_ParamLimits

0x73e4,	// (0x00014c61) vid6_image_uncrop_nhd_pane

0x731a,	// (0x00014b97) vid6_image_uncrop_vga_pane_ParamLimits

0x731a,	// (0x00014b97) vid6_image_uncrop_vga_pane

0x73f1,	// (0x00014c6e) vid6_image_uncrop_wvga_pane_ParamLimits

0x73f1,	// (0x00014c6e) vid6_image_uncrop_wvga_pane

0x73fe,	// (0x00014c7b) vid6_indi_pane_ParamLimits

0x73fe,	// (0x00014c7b) vid6_indi_pane

0xdac3,	// (0x0001b340) bg_tb_trans_pane_cp09_ParamLimits

0xdac3,	// (0x0001b340) bg_tb_trans_pane_cp09

0xdb97,	// (0x0001b414) cam6_battery_pane_cp_ParamLimits

0xdb97,	// (0x0001b414) cam6_battery_pane_cp

0xdba3,	// (0x0001b420) vid6_indi_pane_g1_ParamLimits

0xdba3,	// (0x0001b420) vid6_indi_pane_g1

0xdbb5,	// (0x0001b432) vid6_indi_pane_g2_ParamLimits

0xdbb5,	// (0x0001b432) vid6_indi_pane_g2

0xdbc7,	// (0x0001b444) vid6_indi_pane_g3_ParamLimits

0xdbc7,	// (0x0001b444) vid6_indi_pane_g3

0xdbdc,	// (0x0001b459) vid6_indi_pane_g4_ParamLimits

0xdbdc,	// (0x0001b459) vid6_indi_pane_g4

0xdbf1,	// (0x0001b46e) vid6_indi_pane_g5_ParamLimits

0xdbf1,	// (0x0001b46e) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0001d40e) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0001d40e) vid6_indi_pane_g

0xdc0b,	// (0x0001b488) vid6_indi_pane_t1_ParamLimits

0xdc0b,	// (0x0001b488) vid6_indi_pane_t1

0xdc21,	// (0x0001b49e) vid6_indi_pane_t2_ParamLimits

0xdc21,	// (0x0001b49e) vid6_indi_pane_t2

0xdc49,	// (0x0001b4c6) vid6_indi_pane_t3_ParamLimits

0xdc49,	// (0x0001b4c6) vid6_indi_pane_t3

0xdc71,	// (0x0001b4ee) vid6_indi_pane_t4_ParamLimits

0xdc71,	// (0x0001b4ee) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0001d419) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0001d419) vid6_indi_pane_t

0xdc95,	// (0x0001b512) wait_bar_pane_cp08

0x7415,	// (0x00014c92) main_cset_text2_pane_t1_ParamLimits

0x7415,	// (0x00014c92) main_cset_text2_pane_t1

0x73af,	// (0x00014c2c) listscroll_gen_pane_cp06_t1_ParamLimits

0x73af,	// (0x00014c2c) listscroll_gen_pane_cp06_t1

0x95b6,	// (0x00016e33) main_cam6_set_pane

0xc6ec,	// (0x00019f69) bg_tb_trans_pane_cp06_ParamLimits

0xd194,	// (0x0001aa11) cam4_indicators_pane_g1_ParamLimits

0xd1a4,	// (0x0001aa21) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0001d187) cam4_indicators_pane_g_ParamLimits

0xd1c4,	// (0x0001aa41) cam4_indicators_pane_t1_ParamLimits

0x9609,	// (0x00016e86) bg_tb_trans_pane_cp07_ParamLimits

0xd194,	// (0x0001aa11) vid4_indicators_pane_g1_ParamLimits

0xd1e6,	// (0x0001aa63) vid4_indicators_pane_g2_ParamLimits

0xd1f6,	// (0x0001aa73) vid4_indicators_pane_g3_ParamLimits

0xd207,	// (0x0001aa84) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0001d199) vid4_indicators_pane_g_ParamLimits

0xd223,	// (0x0001aaa0) vid4_indicators_pane_t1_ParamLimits

0xd893,	// (0x0001b110) vid4_progress_pane_g1_ParamLimits

0xd8a2,	// (0x0001b11f) vid4_progress_pane_g2_ParamLimits

0xd8b1,	// (0x0001b12e) vid4_progress_pane_g3_ParamLimits

0xd8c0,	// (0x0001b13d) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0001d34a) vid4_progress_pane_g_ParamLimits

0xd8cc,	// (0x0001b149) vid4_progress_pane_t1_ParamLimits

0xd8e2,	// (0x0001b15f) vid4_progress_pane_t2_ParamLimits

0xd8f7,	// (0x0001b174) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0001d355) vid4_progress_pane_t_ParamLimits

0xd90c,	// (0x0001b189) wait_bar_pane_cp07_ParamLimits

0x7430,	// (0x00014cad) main_cam6_set_pane_g2_ParamLimits

0x7430,	// (0x00014cad) main_cam6_set_pane_g2

0x7452,	// (0x00014ccf) main_cset6_listscroll_pane_ParamLimits

0x7452,	// (0x00014ccf) main_cset6_listscroll_pane

0x746c,	// (0x00014ce9) main_cset6_slider_pane_ParamLimits

0x746c,	// (0x00014ce9) main_cset6_slider_pane

0x7482,	// (0x00014cff) main_cset6_text2_pane_ParamLimits

0x7482,	// (0x00014cff) main_cset6_text2_pane

0xdca5,	// (0x0001b522) main_cset6_text_pane

0xd3c5,	// (0x0001ac42) main_cset_list_pane_copy1_ParamLimits

0xd3c5,	// (0x0001ac42) main_cset_list_pane_copy1

0xd3d5,	// (0x0001ac52) scroll_pane_cp028_copy1

0x7490,	// (0x00014d0d) cset_list_set_pane_copy1

0x74a2,	// (0x00014d1f) aid_position_infowindow_above_copy1

0x74aa,	// (0x00014d27) aid_position_infowindow_below_copy1

0x74b2,	// (0x00014d2f) cset_list_set_pane_g1_copy1

0x74ba,	// (0x00014d37) cset_list_set_pane_g3_copy1_ParamLimits

0x74ba,	// (0x00014d37) cset_list_set_pane_g3_copy1

0x74c9,	// (0x00014d46) cset_list_set_pane_t1_copy1_ParamLimits

0x74c9,	// (0x00014d46) cset_list_set_pane_t1_copy1

0x9609,	// (0x00016e86) list_highlight_pane_cp021_copy1_ParamLimits

0x9609,	// (0x00016e86) list_highlight_pane_cp021_copy1

0xdcad,	// (0x0001b52a) cset6_slider_pane_ParamLimits

0xdcad,	// (0x0001b52a) cset6_slider_pane

0xdcd9,	// (0x0001b556) main_cset6_slider_pane_g1_ParamLimits

0xdcd9,	// (0x0001b556) main_cset6_slider_pane_g1

0x74de,	// (0x00014d5b) main_cset6_slider_pane_g2_ParamLimits

0x74de,	// (0x00014d5b) main_cset6_slider_pane_g2

0xd3ea,	// (0x0001ac67) main_cset6_slider_pane_g3_ParamLimits

0xd3ea,	// (0x0001ac67) main_cset6_slider_pane_g3

0x659c,	// (0x00013e19) main_cset6_slider_pane_g4_ParamLimits

0x659c,	// (0x00013e19) main_cset6_slider_pane_g4

0x65e4,	// (0x00013e61) main_cset6_slider_pane_g5_ParamLimits

0x65e4,	// (0x00013e61) main_cset6_slider_pane_g5

0xd3ea,	// (0x0001ac67) main_cset6_slider_pane_g7_ParamLimits

0xd3ea,	// (0x0001ac67) main_cset6_slider_pane_g7

0xd3f6,	// (0x0001ac73) main_cset6_slider_pane_g8_ParamLimits

0xd3f6,	// (0x0001ac73) main_cset6_slider_pane_g8

0x6584,	// (0x00013e01) main_cset6_slider_pane_g9_ParamLimits

0x6584,	// (0x00013e01) main_cset6_slider_pane_g9

0x6590,	// (0x00013e0d) main_cset6_slider_pane_g10_ParamLimits

0x6590,	// (0x00013e0d) main_cset6_slider_pane_g10

0x659c,	// (0x00013e19) main_cset6_slider_pane_g11_ParamLimits

0x659c,	// (0x00013e19) main_cset6_slider_pane_g11

0x65a8,	// (0x00013e25) main_cset6_slider_pane_g12_ParamLimits

0x65a8,	// (0x00013e25) main_cset6_slider_pane_g12

0x65b4,	// (0x00013e31) main_cset6_slider_pane_g13_ParamLimits

0x65b4,	// (0x00013e31) main_cset6_slider_pane_g13

0x65c0,	// (0x00013e3d) main_cset6_slider_pane_g14_ParamLimits

0x65c0,	// (0x00013e3d) main_cset6_slider_pane_g14

0x7506,	// (0x00014d83) main_cset6_slider_pane_g15_ParamLimits

0x7506,	// (0x00014d83) main_cset6_slider_pane_g15

0x65e4,	// (0x00013e61) main_cset6_slider_pane_g16_ParamLimits

0x65e4,	// (0x00013e61) main_cset6_slider_pane_g16

0x65f0,	// (0x00013e6d) main_cset6_slider_pane_g17_ParamLimits

0x65f0,	// (0x00013e6d) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0001d422) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0001d422) main_cset6_slider_pane_g

0xdd01,	// (0x0001b57e) main_cset6_slider_pane_t1_ParamLimits

0xdd01,	// (0x0001b57e) main_cset6_slider_pane_t1

0xdd42,	// (0x0001b5bf) main_cset6_slider_pane_t2_ParamLimits

0xdd42,	// (0x0001b5bf) main_cset6_slider_pane_t2

0xdd6d,	// (0x0001b5ea) main_cset6_slider_pane_t3_ParamLimits

0xdd6d,	// (0x0001b5ea) main_cset6_slider_pane_t3

0x751e,	// (0x00014d9b) main_cset6_slider_pane_t4_ParamLimits

0x751e,	// (0x00014d9b) main_cset6_slider_pane_t4

0x7549,	// (0x00014dc6) main_cset6_slider_pane_t5_ParamLimits

0x7549,	// (0x00014dc6) main_cset6_slider_pane_t5

0xdd98,	// (0x0001b615) main_cset6_slider_pane_t7_ParamLimits

0xdd98,	// (0x0001b615) main_cset6_slider_pane_t7

0x7574,	// (0x00014df1) main_cset6_slider_pane_t8_ParamLimits

0x7574,	// (0x00014df1) main_cset6_slider_pane_t8

0x7598,	// (0x00014e15) main_cset6_slider_pane_t9_ParamLimits

0x7598,	// (0x00014e15) main_cset6_slider_pane_t9

0x75bc,	// (0x00014e39) main_cset6_slider_pane_t10_ParamLimits

0x75bc,	// (0x00014e39) main_cset6_slider_pane_t10

0x75e0,	// (0x00014e5d) main_cset6_slider_pane_t11_ParamLimits

0x75e0,	// (0x00014e5d) main_cset6_slider_pane_t11

0xddce,	// (0x0001b64b) main_cset6_slider_pane_t14_ParamLimits

0xddce,	// (0x0001b64b) main_cset6_slider_pane_t14

0xde07,	// (0x0001b684) main_cset6_slider_pane_t15_ParamLimits

0xde07,	// (0x0001b684) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0001d447) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0001d447) main_cset6_slider_pane_t

0xd4ce,	// (0x0001ad4b) cset_slider_pane_g1_copy1

0xd4d7,	// (0x0001ad54) cset_slider_pane_g2_copy1

0xd4e0,	// (0x0001ad5d) cset_slider_pane_g3_copy1

0x95b6,	// (0x00016e33) bg_popup_sub_pane_cp011_copy1

0xd5c3,	// (0x0001ae40) main_cset_text_pane_g1_copy1

0xd5cb,	// (0x0001ae48) main_cset_text_pane_t1_copy1

0xd5d9,	// (0x0001ae56) main_cset_text_pane_t2_copy1

0xd5e7,	// (0x0001ae64) main_cset_text_pane_t3_copy1

0xd5f5,	// (0x0001ae72) main_cset_text_pane_t4_copy1

0xd603,	// (0x0001ae80) main_cset_text_pane_t5_copy1

0xd611,	// (0x0001ae8e) main_cset_text_pane_t6_copy1

0xd61f,	// (0x0001ae9c) main_cset_text_pane_t7_copy1

0x76d5,	// (0x00014f52) main_cset_text2_pane_t1_copy1

0x9609,	// (0x00016e86) main_ncimui_pane

0x3e9e,	// (0x0001171b) popup_query_ncimui_window_ParamLimits

0x3e9e,	// (0x0001171b) popup_query_ncimui_window

0xc78d,	// (0x0001a00a) field_cale_ev2_pane_g4_ParamLimits

0xc78d,	// (0x0001a00a) field_cale_ev2_pane_g4

0x588a,	// (0x00013107) cell_video_dialer_keypad_pane_g2_ParamLimits

0x588a,	// (0x00013107) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a4,	// (0x0001d121) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a4,	// (0x0001d121) cell_video_dialer_keypad_pane_g

0x58a2,	// (0x0001311f) cell_video_dialer_keypad_pane_t1

0x95b6,	// (0x00016e33) bg_popup_window_pane_cp012

0xa78d,	// (0x0001800a) heading_pane_cp06

0xde6a,	// (0x0001b6e7) ncim_query_content_pane

0x95b6,	// (0x00016e33) bg_popup_heading_pane_cp01

0xde72,	// (0x0001b6ef) ncim_heading_pane_t1

0xde80,	// (0x0001b6fd) ncim_indicator_popup_pane

0xde92,	// (0x0001b70f) ncim_query_button_pane

0xdea6,	// (0x0001b723) ncim_query_content_pane_t1

0xdeb8,	// (0x0001b735) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0001d48b) ncim_query_content_pane_t

0xdef2,	// (0x0001b76f) ncim_query_list_pane

0xdf04,	// (0x0001b781) ncim_query_popup_pane

0xde80,	// (0x0001b6fd) ncim_indicator_popup_pane_ParamLimits

0x7814,	// (0x00015091) ncim_query_content_pane_g1_ParamLimits

0x7814,	// (0x00015091) ncim_query_content_pane_g1

0xdea6,	// (0x0001b723) ncim_query_content_pane_t1_ParamLimits

0xdeb8,	// (0x0001b735) ncim_query_content_pane_t2_ParamLimits

0x7820,	// (0x0001509d) ncim_query_content_pane_t3_ParamLimits

0x7820,	// (0x0001509d) ncim_query_content_pane_t3

0x7848,	// (0x000150c5) ncim_query_content_pane_t4_ParamLimits

0x7848,	// (0x000150c5) ncim_query_content_pane_t4

0x7870,	// (0x000150ed) ncim_query_content_pane_t5_ParamLimits

0x7870,	// (0x000150ed) ncim_query_content_pane_t5

0xdeca,	// (0x0001b747) ncim_query_content_pane_t6_ParamLimits

0xdeca,	// (0x0001b747) ncim_query_content_pane_t6

0xfc0e,	// (0x0001d48b) ncim_query_content_pane_t_ParamLimits

0xdef2,	// (0x0001b76f) ncim_query_list_pane_ParamLimits

0xdf04,	// (0x0001b781) ncim_query_popup_pane_ParamLimits

0xdf18,	// (0x0001b795) wait_bar_pane_cp04

0x95b6,	// (0x00016e33) input_focus_pane_cp011

0xdf20,	// (0x0001b79d) ncim_query_popup_pane_t1

0xdf2e,	// (0x0001b7ab) ncim_list_query_list_pane_ParamLimits

0xdf2e,	// (0x0001b7ab) ncim_list_query_list_pane

0x95b6,	// (0x00016e33) bg_button_pane_cp027

0xdf41,	// (0x0001b7be) ncim_query_button_pane_g1

0x95b6,	// (0x00016e33) list_highlight_pane_cp012

0xdf4b,	// (0x0001b7c8) ncim_list_query_list_pane_g1

0xdf53,	// (0x0001b7d0) ncim_list_query_list_pane_t1

0xd1b4,	// (0x0001aa31) cam4_indicators_pane_g3_ParamLimits

0xd1b4,	// (0x0001aa31) cam4_indicators_pane_g3

0xd213,	// (0x0001aa90) vid4_indicators_pane_g5_ParamLimits

0xd213,	// (0x0001aa90) vid4_indicators_pane_g5

0xa55c,	// (0x00017dd9) vid4_progress_pane_g5_ParamLimits

0xa55c,	// (0x00017dd9) vid4_progress_pane_g5

0x7704,	// (0x00014f81) main_ncimui_pane_g1

0x776a,	// (0x00014fe7) ncimui_group_query_pane_ParamLimits

0x776a,	// (0x00014fe7) ncimui_group_query_pane

0x77b2,	// (0x0001502f) ncimui_list_pane_ParamLimits

0x77b2,	// (0x0001502f) ncimui_list_pane

0x77d7,	// (0x00015054) ncimui_text_pane_ParamLimits

0x77d7,	// (0x00015054) ncimui_text_pane

0x7898,	// (0x00015115) ncimui_text_pane_t1_ParamLimits

0x7898,	// (0x00015115) ncimui_text_pane_t1

0xdf6a,	// (0x0001b7e7) ncimui_list_single_graphic_pane_ParamLimits

0xdf6a,	// (0x0001b7e7) ncimui_list_single_graphic_pane

0x78b6,	// (0x00015133) ncimui_query_pane_ParamLimits

0x78b6,	// (0x00015133) ncimui_query_pane

0x95b6,	// (0x00016e33) list_highlight_pane_cp013

0xdf7a,	// (0x0001b7f7) ncim_list_query_list_pane_t1_copy1

0xdf88,	// (0x0001b805) ncim_list_single_graphic_pane_g1

0xdf90,	// (0x0001b80d) ncim_query_button_pane_cp01

0xdf9c,	// (0x0001b819) ncim_query_entry_pane_ParamLimits

0xdf9c,	// (0x0001b819) ncim_query_entry_pane

0xdfaf,	// (0x0001b82c) ncimui_query_pane_g1

0xdfbb,	// (0x0001b838) ncimui_query_pane_t1_ParamLimits

0xdfbb,	// (0x0001b838) ncimui_query_pane_t1

0x9609,	// (0x00016e86) input_focus_pane_cp012

0xdfd4,	// (0x0001b851) ncim_query_entry_pane_t1

0x9d6e,	// (0x000175eb) main_im_pane_ParamLimits

0x9609,	// (0x00016e86) main_mobtv_pane_ParamLimits

0x9609,	// (0x00016e86) main_mobtv_pane

0x6584,	// (0x00013e01) main_cset6_slider_pane_g18_ParamLimits

0x6584,	// (0x00013e01) main_cset6_slider_pane_g18

0x65b4,	// (0x00013e31) main_cset6_slider_pane_g19_ParamLimits

0x65b4,	// (0x00013e31) main_cset6_slider_pane_g19

0xdfe6,	// (0x0001b863) bg_main_mobtv_pane_ParamLimits

0xdfe6,	// (0x0001b863) bg_main_mobtv_pane

0x78c6,	// (0x00015143) main_mobtv_info_pane

0x78cf,	// (0x0001514c) main_mobtv_loading_pane_ParamLimits

0x78cf,	// (0x0001514c) main_mobtv_loading_pane

0xdff4,	// (0x0001b871) main_mobtv_pg_channel_list_pane

0xdffe,	// (0x0001b87b) main_mobtv_pg_hdr_pane

0x78dc,	// (0x00015159) main_mobtv_programe_curr_pane_ParamLimits

0x78dc,	// (0x00015159) main_mobtv_programe_curr_pane

0x78e9,	// (0x00015166) main_mobtv_programe_next_pane_ParamLimits

0x78e9,	// (0x00015166) main_mobtv_programe_next_pane

0xe007,	// (0x0001b884) popup_mobtv_noti_window

0xc4bd,	// (0x00019d3a) main_tv_pg_hdr_pane_g1

0xe00f,	// (0x0001b88c) main_tv_pg_hdr_pane_g2

0xe017,	// (0x0001b894) main_tv_pg_hdr_pane_g3

0xe01f,	// (0x0001b89c) main_tv_pg_hdr_pane_g4

0xe027,	// (0x0001b8a4) main_tv_pg_hdr_pane_g5

0xe02f,	// (0x0001b8ac) main_tv_pg_hdr_pane_g6

0xe037,	// (0x0001b8b4) main_tv_pg_hdr_pane_g7

0xe03f,	// (0x0001b8bc) main_tv_pg_hdr_pane_g8

0xe047,	// (0x0001b8c4) main_tv_pg_hdr_pane_g9

0xe04f,	// (0x0001b8cc) main_tv_pg_hdr_pane_g10

0xe059,	// (0x0001b8d6) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0001d498) main_tv_pg_hdr_pane_g

0xe063,	// (0x0001b8e0) main_tv_pg_hdr_pane_t1

0xe071,	// (0x0001b8ee) main_tv_pg_hdr_pane_t2

0xe07f,	// (0x0001b8fc) main_tv_pg_hdr_pane_t3

0xe08d,	// (0x0001b90a) main_tv_pg_hdr_pane_t4

0xe09b,	// (0x0001b918) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0001d4af) main_tv_pg_hdr_pane_t

0xe0a9,	// (0x0001b926) single_mobtv_pg_channel_pane_ParamLimits

0xe0a9,	// (0x0001b926) single_mobtv_pg_channel_pane

0xe0bb,	// (0x0001b938) single_mobtv_pg_channel_table_pane

0xe0c4,	// (0x0001b941) single_mobtv_pg_channel_thumb_pane

0xe0cd,	// (0x0001b94a) single_tv_pg_channel_pane_g1

0xe0d6,	// (0x0001b953) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0001d4ba) single_tv_pg_channel_pane_g

0xc6ec,	// (0x00019f69) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc6ec,	// (0x00019f69) bg_single_mobtv_pg_channel_thumb_pane

0xe0df,	// (0x0001b95c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe0df,	// (0x0001b95c) single_mobtv_pg_channel_thumb_pane_g1

0xe0ed,	// (0x0001b96a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe0ed,	// (0x0001b96a) single_mobtv_pg_channel_thumb_pane_g2

0xe0f9,	// (0x0001b976) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe0f9,	// (0x0001b976) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0001d4bf) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0001d4bf) single_mobtv_pg_channel_thumb_pane_g

0xe105,	// (0x0001b982) single_mobtv_pg_channel_thumb_pane_t1

0xe113,	// (0x0001b990) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0001d4c6) single_mobtv_pg_channel_thumb_pane_t

0xc4bd,	// (0x00019d3a) bg_single_mobtv_pg_channel_table_pane_g1

0xc4bd,	// (0x00019d3a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6eb,	// (0x0001cf68) bg_single_mobtv_pg_channel_table_pane_g

0xe121,	// (0x0001b99e) single_mobtv_pg_channel_table_pane_t1

0xe12f,	// (0x0001b9ac) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0001d4cb) single_mobtv_pg_channel_table_pane_t

0x78fe,	// (0x0001517b) main_mobtv_info_pane_g1_ParamLimits

0x78fe,	// (0x0001517b) main_mobtv_info_pane_g1

0x791a,	// (0x00015197) main_mobtv_info_pane_t1_ParamLimits

0x791a,	// (0x00015197) main_mobtv_info_pane_t1

0x7980,	// (0x000151fd) main_mobtv_info_pane_t2_ParamLimits

0x7980,	// (0x000151fd) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0001d4d5) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0001d4d5) main_mobtv_info_pane_t

0x7a03,	// (0x00015280) wait_bar_pane_cp05

0x7a13,	// (0x00015290) main_mobtv_loading_pane_g1_ParamLimits

0x7a13,	// (0x00015290) main_mobtv_loading_pane_g1

0x7a24,	// (0x000152a1) main_mobtv_loading_pane_g2_ParamLimits

0x7a24,	// (0x000152a1) main_mobtv_loading_pane_g2

0x7a30,	// (0x000152ad) main_mobtv_loading_pane_g3_ParamLimits

0x7a30,	// (0x000152ad) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0001d4dc) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0001d4dc) main_mobtv_loading_pane_g

0xe13d,	// (0x0001b9ba) main_mobtv_loading_pane_t1_ParamLimits

0xe13d,	// (0x0001b9ba) main_mobtv_loading_pane_t1

0xe155,	// (0x0001b9d2) main_mobtv_loading_pane_t2_ParamLimits

0xe155,	// (0x0001b9d2) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0001d4e3) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0001d4e3) main_mobtv_loading_pane_t

0x7a41,	// (0x000152be) wait_bar_pane_cp06_ParamLimits

0x7a41,	// (0x000152be) wait_bar_pane_cp06

0xe179,	// (0x0001b9f6) main_mobtv_programe_curr_pane_t1

0xe187,	// (0x0001ba04) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0001d4e8) main_mobtv_programe_curr_pane_t

0xe195,	// (0x0001ba12) main_mobtv_programe_next_pane_t1

0xe1a3,	// (0x0001ba20) main_mobtv_programe_next_pane_t2

0xe1b1,	// (0x0001ba2e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0001d4ed) main_mobtv_programe_next_pane_t

0x95b6,	// (0x00016e33) bg_popup_mobtv_noti_window_pane

0xe1bf,	// (0x0001ba3c) popup_mobtv_noti_window_g1

0xe1c7,	// (0x0001ba44) popup_mobtv_noti_window_t1

0xe1d5,	// (0x0001ba52) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0001d4f4) popup_mobtv_noti_window_t

0xc4bd,	// (0x00019d3a) bg_popup_mobtv_noti_window_pane_g1

0x95b6,	// (0x00016e33) sc_clock_pane

0x95b6,	// (0x00016e33) main_fs_bigclock_pane

0x7197,	// (0x00014a14) blid2_tripm_pane_t4_ParamLimits

0x7197,	// (0x00014a14) blid2_tripm_pane_t4

0x7a50,	// (0x000152cd) sc_clock_pane_g1_ParamLimits

0x7a50,	// (0x000152cd) sc_clock_pane_g1

0x7a62,	// (0x000152df) sc_clock_pane_t1_ParamLimits

0x7a62,	// (0x000152df) sc_clock_pane_t1

0x7a84,	// (0x00015301) sc_clock_pane_t2_ParamLimits

0x7a84,	// (0x00015301) sc_clock_pane_t2

0x7a9a,	// (0x00015317) sc_clock_pane_t3_ParamLimits

0x7a9a,	// (0x00015317) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0001d4f9) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0001d4f9) sc_clock_pane_t

0x8ae2,	// (0x0001635f) main_fs_bigclock_indicator_pane_ParamLimits

0x8ae2,	// (0x0001635f) main_fs_bigclock_indicator_pane

0x7b36,	// (0x000153b3) main_fs_bigclock_pane_g1_ParamLimits

0x7b36,	// (0x000153b3) main_fs_bigclock_pane_g1

0x8aee,	// (0x0001636b) main_fs_bigclock_pane_t1_ParamLimits

0x8aee,	// (0x0001636b) main_fs_bigclock_pane_t1

0x8b00,	// (0x0001637d) main_fs_bigclock_pane_t2_ParamLimits

0x8b00,	// (0x0001637d) main_fs_bigclock_pane_t2

0x8b12,	// (0x0001638f) main_fs_bigclock_pane_t3_ParamLimits

0x8b12,	// (0x0001638f) main_fs_bigclock_pane_t3

0x0002,

0xfe81,	// (0x0001d6fe) main_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x0001d6fe) main_fs_bigclock_pane_t

0xec84,	// (0x0001c501) main_fs_bigclock_indicator_pane_g1

0xde9a,	// (0x0001b717) ncim_query_content_pane_g2_ParamLimits

0xde9a,	// (0x0001b717) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0001d486) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0001d486) ncim_query_content_pane_g

0x7ab1,	// (0x0001532e) sc_clock_pane_t4_ParamLimits

0x7ab1,	// (0x0001532e) sc_clock_pane_t4

0x9609,	// (0x00016e86) main_radioblah_pane

0xd0fc,	// (0x0001a979) cell_call4_button_pane_t1_copy1_ParamLimits

0xd0fc,	// (0x0001a979) cell_call4_button_pane_t1_copy1

0x771c,	// (0x00014f99) main_ncimui_pane_t1_ParamLimits

0x771c,	// (0x00014f99) main_ncimui_pane_t1

0x7736,	// (0x00014fb3) main_ncimui_pane_t2_ParamLimits

0x7736,	// (0x00014fb3) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0001d47f) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0001d47f) main_ncimui_pane_t

0xe316,	// (0x0001bb93) main_radioblah_anim_pane_ParamLimits

0xe316,	// (0x0001bb93) main_radioblah_anim_pane

0xe327,	// (0x0001bba4) main_radioblah_info_pane_ParamLimits

0xe327,	// (0x0001bba4) main_radioblah_info_pane

0xe33b,	// (0x0001bbb8) main_radioblah_pane_t1_ParamLimits

0xe33b,	// (0x0001bbb8) main_radioblah_pane_t1

0xe357,	// (0x0001bbd4) main_radioblah_pane_t2_ParamLimits

0xe357,	// (0x0001bbd4) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0001d51a) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0001d51a) main_radioblah_pane_t

0x7b80,	// (0x000153fd) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7b80,	// (0x000153fd) main_radioblah_rocker_ctrl_pane

0xe39f,	// (0x0001bc1c) main_radioblah_info_pane_t1_ParamLimits

0xe39f,	// (0x0001bc1c) main_radioblah_info_pane_t1

0x7bd4,	// (0x00015451) main_radioblah_info_pane_t2_ParamLimits

0x7bd4,	// (0x00015451) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0001d523) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0001d523) main_radioblah_info_pane_t

0xc4bd,	// (0x00019d3a) main_radioblah_rocker_ctrl_pane_g1

0x7c82,	// (0x000154ff) main_radioblah_rocker_ctrl_pane_g2

0x7c8a,	// (0x00015507) main_radioblah_rocker_ctrl_pane_g3

0x7c92,	// (0x0001550f) main_radioblah_rocker_ctrl_pane_g4

0x7c9a,	// (0x00015517) main_radioblah_rocker_ctrl_pane_g5

0x7ca2,	// (0x0001551f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0001d52c) main_radioblah_rocker_ctrl_pane_g

0x76d5,	// (0x00014f52) main_cset_text2_pane_t1_copy1_ParamLimits

0xd184,	// (0x0001aa01) cam4_image_uncrop_qvga_pane

0xd1de,	// (0x0001aa5b) vid4_image_uncrop_qcif_pane

0xdab7,	// (0x0001b334) cam6_image_uncrop_qvga_pane_ParamLimits

0xdab7,	// (0x0001b334) cam6_image_uncrop_qvga_pane

0xdb8b,	// (0x0001b408) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb8b,	// (0x0001b408) vid6_image_uncrop_qcif_pane

0x95b6,	// (0x00016e33) bg_popup_preview_window_pane_cp03

0xde40,	// (0x0001b6bd) list_cset_text2_pane

0xde48,	// (0x0001b6c5) main_cset6_text2_pane_g1

0xde50,	// (0x0001b6cd) main_cset6_text2_pane_t1

0x7caa,	// (0x00015527) list_cset_text2_pane_t1_ParamLimits

0x7caa,	// (0x00015527) list_cset_text2_pane_t1

0x9609,	// (0x00016e86) main_radioblah_pane_ParamLimits

0x79f1,	// (0x0001526e) main_mobtv_info_pane_t3_ParamLimits

0x79f1,	// (0x0001526e) main_mobtv_info_pane_t3

0x7b6e,	// (0x000153eb) main_radioblah_pane_g1

0x7ba8,	// (0x00015425) main_radioblah_info_pane_g1

0x7c27,	// (0x000154a4) main_radioblah_info_pane_t3_ParamLimits

0x7c27,	// (0x000154a4) main_radioblah_info_pane_t3

0x2aa4,	// (0x00010321) highlight_cell_cale_month_pane_ParamLimits

0x2aa4,	// (0x00010321) highlight_cell_cale_month_pane

0x95b6,	// (0x00016e33) main_phob_fisheye_pane

0xc83c,	// (0x0001a0b9) scroll_pane_cp0031_ParamLimits

0xc83c,	// (0x0001a0b9) scroll_pane_cp0031

0xdc95,	// (0x0001b512) wait_bar_pane_cp08_ParamLimits

0x7490,	// (0x00014d0d) cset_list_set_pane_copy1_ParamLimits

0xe3d9,	// (0x0001bc56) highlight_cell_cale_month_pane_g1

0x7cc3,	// (0x00015540) highlight_cell_cale_month_pane_t1

0xe3e1,	// (0x0001bc5e) list_gen_pane_cp01

0xd3d5,	// (0x0001ac52) scroll_pane_01

0x7cd1,	// (0x0001554e) list_single_double_fisheye_pane

0x7cda,	// (0x00015557) list_double_fisheye_pane_g1_ParamLimits

0x7cda,	// (0x00015557) list_double_fisheye_pane_g1

0x7ce6,	// (0x00015563) list_double_fisheye_pane_g2_ParamLimits

0x7ce6,	// (0x00015563) list_double_fisheye_pane_g2

0x7cf2,	// (0x0001556f) list_double_fisheye_pane_g3_ParamLimits

0x7cf2,	// (0x0001556f) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0001d539) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0001d539) list_double_fisheye_pane_g

0x7d16,	// (0x00015593) list_double_fisheye_pane_t1_ParamLimits

0x7d16,	// (0x00015593) list_double_fisheye_pane_t1

0x7d31,	// (0x000155ae) list_double_fisheye_pane_t2_ParamLimits

0x7d31,	// (0x000155ae) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0001d544) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0001d544) list_double_fisheye_pane_t

0x95b6,	// (0x00016e33) main_call5_pane

0x7ada,	// (0x00015357) sc_swipe_pane_ParamLimits

0x7ada,	// (0x00015357) sc_swipe_pane

0x7d64,	// (0x000155e1) call5_image_pane_ParamLimits

0x7d64,	// (0x000155e1) call5_image_pane

0x7d79,	// (0x000155f6) call5_swipe_1_pane_ParamLimits

0x7d79,	// (0x000155f6) call5_swipe_1_pane

0x7d8a,	// (0x00015607) call5_swipe_2_pane_ParamLimits

0x7d8a,	// (0x00015607) call5_swipe_2_pane

0x7daf,	// (0x0001562c) popup_call5_audio_first_window_ParamLimits

0x7daf,	// (0x0001562c) popup_call5_audio_first_window

0xc6ec,	// (0x00019f69) call5_swipe_1_pane_g1_ParamLimits

0xc6ec,	// (0x00019f69) call5_swipe_1_pane_g1

0xe3ea,	// (0x0001bc67) call5_swipe_1_pane_g2_ParamLimits

0xe3ea,	// (0x0001bc67) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0001d549) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0001d549) call5_swipe_1_pane_g

0xe3f6,	// (0x0001bc73) call5_swipe_1_pane_t1_ParamLimits

0xe3f6,	// (0x0001bc73) call5_swipe_1_pane_t1

0xc6ec,	// (0x00019f69) call5_swipe_2_pane_g1_ParamLimits

0xc6ec,	// (0x00019f69) call5_swipe_2_pane_g1

0xe40b,	// (0x0001bc88) call5_swipe_2_pane_g2_ParamLimits

0xe40b,	// (0x0001bc88) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0001d54e) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0001d54e) call5_swipe_2_pane_g

0xe417,	// (0x0001bc94) call5_swipe_2_pane_t1_ParamLimits

0xe417,	// (0x0001bc94) call5_swipe_2_pane_t1

0xe42c,	// (0x0001bca9) sc_swipe_pane_g1_ParamLimits

0xe42c,	// (0x0001bca9) sc_swipe_pane_g1

0xe439,	// (0x0001bcb6) sc_swipe_pane_g2_ParamLimits

0xe439,	// (0x0001bcb6) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0001d553) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0001d553) sc_swipe_pane_g

0xe445,	// (0x0001bcc2) sc_swipe_pane_t1_ParamLimits

0xe445,	// (0x0001bcc2) sc_swipe_pane_t1

0x95b6,	// (0x00016e33) main_cmail_launcher_pane

0x7dbe,	// (0x0001563b) aid_size_cell_cmail_l_ParamLimits

0x7dbe,	// (0x0001563b) aid_size_cell_cmail_l

0x7dd7,	// (0x00015654) grid_cmail_l_pane_ParamLimits

0x7dd7,	// (0x00015654) grid_cmail_l_pane

0x7dec,	// (0x00015669) cell_cmail_l_pane_ParamLimits

0x7dec,	// (0x00015669) cell_cmail_l_pane

0x7e0e,	// (0x0001568b) cell_cmail_l_pane_g1_ParamLimits

0x7e0e,	// (0x0001568b) cell_cmail_l_pane_g1

0x7e1e,	// (0x0001569b) cell_cmail_l_pane_t1_ParamLimits

0x7e1e,	// (0x0001569b) cell_cmail_l_pane_t1

0x7e34,	// (0x000156b1) cell_cmail_l_pane_t2_ParamLimits

0x7e34,	// (0x000156b1) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0001d558) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0001d558) cell_cmail_l_pane_t

0x9609,	// (0x00016e86) grid_highlight_pane_cp018_ParamLimits

0x9609,	// (0x00016e86) grid_highlight_pane_cp018

0x0d4c,	// (0x0000e5c9) main2_pane_ParamLimits

0x0d4c,	// (0x0000e5c9) main2_pane

0x9e71,	// (0x000176ee) popup_sp_fs_action_menu_bg_pane_g1

0x9e79,	// (0x000176f6) popup_sp_fs_action_menu_bg_pane_g2

0x9e81,	// (0x000176fe) popup_sp_fs_action_menu_bg_pane_g3

0x9e89,	// (0x00017706) popup_sp_fs_action_menu_bg_pane_g4

0x9e91,	// (0x0001770e) popup_sp_fs_action_menu_bg_pane_g5

0x9e99,	// (0x00017716) popup_sp_fs_action_menu_bg_pane_g6

0x9ea1,	// (0x0001771e) popup_sp_fs_action_menu_bg_pane_g7

0x9ea9,	// (0x00017726) popup_sp_fs_action_menu_bg_pane_g8

0x9eb1,	// (0x0001772e) popup_sp_fs_action_menu_bg_pane_g9

0x9eb9,	// (0x00017736) popup_sp_fs_action_menu_bg_pane_g10

0x9eb9,	// (0x00017736) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0001ca03) popup_sp_fs_action_menu_bg_pane_g

0x1c2d,	// (0x0000f4aa) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1c2d,	// (0x0000f4aa) list_medium_line_x2_t3_g3_g1

0x1c39,	// (0x0000f4b6) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1c39,	// (0x0000f4b6) list_medium_line_x2_t3_g3_g2

0x1c45,	// (0x0000f4c2) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1c45,	// (0x0000f4c2) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0001cab1) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0001cab1) list_medium_line_x2_t3_g3_g

0x1c51,	// (0x0000f4ce) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1c51,	// (0x0000f4ce) list_medium_line_x2_t3_g3_t1

0x1c66,	// (0x0000f4e3) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1c66,	// (0x0000f4e3) list_medium_line_x2_t3_g3_t2

0x1c78,	// (0x0000f4f5) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1c78,	// (0x0000f4f5) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0001cab8) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0001cab8) list_medium_line_x2_t3_g3_t

0x1c2d,	// (0x0000f4aa) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1c2d,	// (0x0000f4aa) list_medium_line_x2_t3_g2_g1

0x1c45,	// (0x0000f4c2) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1c45,	// (0x0000f4c2) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0001cabf) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0001cabf) list_medium_line_x2_t3_g2_g

0x1c8d,	// (0x0000f50a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1c8d,	// (0x0000f50a) list_medium_line_x2_t3_g2_t1

0x1ca3,	// (0x0000f520) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1ca3,	// (0x0000f520) list_medium_line_x2_t3_g2_t2

0x1c78,	// (0x0000f4f5) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1c78,	// (0x0000f4f5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0001cac4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0001cac4) list_medium_line_x2_t3_g2_t

0x1c2d,	// (0x0000f4aa) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1c2d,	// (0x0000f4aa) list_medium_line_x2_t4_g4_g1

0x1cb5,	// (0x0000f532) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1cb5,	// (0x0000f532) list_medium_line_x2_t4_g4_g2

0x1c39,	// (0x0000f4b6) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1c39,	// (0x0000f4b6) list_medium_line_x2_t4_g4_g3

0x1cc1,	// (0x0000f53e) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1cc1,	// (0x0000f53e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0001cacb) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0001cacb) list_medium_line_x2_t4_g4_g

0x1ccd,	// (0x0000f54a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1ccd,	// (0x0000f54a) list_medium_line_x2_t4_g4_t1

0x1ce4,	// (0x0000f561) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1ce4,	// (0x0000f561) list_medium_line_x2_t4_g4_t2

0x1cf9,	// (0x0000f576) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1cf9,	// (0x0000f576) list_medium_line_x2_t4_g4_t3

0x1d0b,	// (0x0000f588) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1d0b,	// (0x0000f588) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0001cad4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0001cad4) list_medium_line_x2_t4_g4_t

0x1c2d,	// (0x0000f4aa) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1c2d,	// (0x0000f4aa) list_medium_line_x2_t2_g4_g1

0x1cb5,	// (0x0000f532) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1cb5,	// (0x0000f532) list_medium_line_x2_t2_g4_g2

0x1c39,	// (0x0000f4b6) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1c39,	// (0x0000f4b6) list_medium_line_x2_t2_g4_g3

0x1c45,	// (0x0000f4c2) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1c45,	// (0x0000f4c2) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0001cb3b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0001cb3b) list_medium_line_x2_t2_g4_g

0x2aca,	// (0x00010347) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2aca,	// (0x00010347) list_medium_line_x2_t2_g4_t1

0x1c78,	// (0x0000f4f5) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1c78,	// (0x0000f4f5) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0001cb44) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0001cb44) list_medium_line_x2_t2_g4_t

0x1c2d,	// (0x0000f4aa) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1c2d,	// (0x0000f4aa) list_medium_line_x2_t2_g3_g1

0x1c39,	// (0x0000f4b6) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1c39,	// (0x0000f4b6) list_medium_line_x2_t2_g3_g2

0x1c45,	// (0x0000f4c2) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1c45,	// (0x0000f4c2) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0001cab1) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0001cab1) list_medium_line_x2_t2_g3_g

0x2adf,	// (0x0001035c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2adf,	// (0x0001035c) list_medium_line_x2_t2_g3_t1

0x1c78,	// (0x0000f4f5) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1c78,	// (0x0000f4f5) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0001cb49) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0001cb49) list_medium_line_x2_t2_g3_t

0x2c2b,	// (0x000104a8) main_sp_fs_list_pane_ParamLimits

0x2c2b,	// (0x000104a8) main_sp_fs_list_pane

0x2c38,	// (0x000104b5) sp_fs_scroll_pane_ParamLimits

0x2c38,	// (0x000104b5) sp_fs_scroll_pane

0x2c45,	// (0x000104c2) list_medium_line_x2_t3_t1

0x2c55,	// (0x000104d2) list_medium_line_x2_t3_t2

0x2c63,	// (0x000104e0) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0001cb94) list_medium_line_x2_t3_t

0x2c71,	// (0x000104ee) list_medium_line_x3_t4_t1

0x2c81,	// (0x000104fe) list_medium_line_x3_t4_t2

0x2c8f,	// (0x0001050c) list_medium_line_x3_t4_t3

0x2c9d,	// (0x0001051a) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0001cb9b) list_medium_line_x3_t4_t

0x2cab,	// (0x00010528) list_medium_line_x4_t5_t1

0x2cbb,	// (0x00010538) list_medium_line_x4_t5_t2

0x2c8f,	// (0x0001050c) list_medium_line_x4_t5_t3

0x2cc9,	// (0x00010546) list_medium_line_x4_t5_t4

0x2c9d,	// (0x0001051a) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0001cba4) list_medium_line_x4_t5_t

0x1c2d,	// (0x0000f4aa) list_medium_line_t4_g4_g1_ParamLimits

0x1c2d,	// (0x0000f4aa) list_medium_line_t4_g4_g1

0x1cc1,	// (0x0000f53e) list_medium_line_t4_g4_g2_ParamLimits

0x1cc1,	// (0x0000f53e) list_medium_line_t4_g4_g2

0x2cd7,	// (0x00010554) list_medium_line_t4_g4_g3_ParamLimits

0x2cd7,	// (0x00010554) list_medium_line_t4_g4_g3

0x1c45,	// (0x0000f4c2) list_medium_line_t4_g4_g4_ParamLimits

0x1c45,	// (0x0000f4c2) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0001cbaf) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0001cbaf) list_medium_line_t4_g4_g

0x2ce3,	// (0x00010560) list_medium_line_t4_g4_t1_ParamLimits

0x2ce3,	// (0x00010560) list_medium_line_t4_g4_t1

0x2cf8,	// (0x00010575) list_medium_line_t4_g4_t2_ParamLimits

0x2cf8,	// (0x00010575) list_medium_line_t4_g4_t2

0x2d0e,	// (0x0001058b) list_medium_line_t4_g4_t3_ParamLimits

0x2d0e,	// (0x0001058b) list_medium_line_t4_g4_t3

0x2d24,	// (0x000105a1) list_medium_line_t4_g4_t4_ParamLimits

0x2d24,	// (0x000105a1) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0001cbb8) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0001cbb8) list_medium_line_t4_g4_t

0x2dfa,	// (0x00010677) chi_dic_find_pane_g1

0x3ca4,	// (0x00011521) main_tport_pane

0xd51a,	// (0x0001ad97) list_medium_line_plain_t1

0xd56c,	// (0x0001ade9) list_medium_line_t2_g2_g1_ParamLimits

0xd56c,	// (0x0001ade9) list_medium_line_t2_g2_g1

0xd578,	// (0x0001adf5) list_medium_line_t2_g2_g2_ParamLimits

0xd578,	// (0x0001adf5) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0001d290) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0001d290) list_medium_line_t2_g2_g

0x6951,	// (0x000141ce) list_medium_line_t2_g2_t1_ParamLimits

0x6951,	// (0x000141ce) list_medium_line_t2_g2_t1

0x6968,	// (0x000141e5) list_medium_line_t2_g2_t2_ParamLimits

0x6968,	// (0x000141e5) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0001d295) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0001d295) list_medium_line_t2_g2_t

0xd91c,	// (0x0001b199) aid_sp_fs_list_icon_a_sm

0xd924,	// (0x0001b1a1) aid_sp_fs_list_icon_d

0xd92c,	// (0x0001b1a9) aid_sp_fs_text_primary

0xd935,	// (0x0001b1b2) aid_sp_fs_text_secondary

0xd93e,	// (0x0001b1bb) list_medium_line

0xd93e,	// (0x0001b1bb) list_medium_line_g2

0xd93e,	// (0x0001b1bb) list_medium_line_g3

0xd93e,	// (0x0001b1bb) list_medium_line_plain

0xd93e,	// (0x0001b1bb) list_medium_line_plain_t2

0xd93e,	// (0x0001b1bb) list_medium_line_plain_t3

0xd93e,	// (0x0001b1bb) list_medium_line_right_icon

0xd93e,	// (0x0001b1bb) list_medium_line_right_iconx2

0xd93e,	// (0x0001b1bb) list_medium_line_t2

0xd93e,	// (0x0001b1bb) list_medium_line_t2_g2

0xd93e,	// (0x0001b1bb) list_medium_line_t2_g3

0xd93e,	// (0x0001b1bb) list_medium_line_t2_right_icon

0xd93e,	// (0x0001b1bb) list_medium_line_t2_right_iconx2

0xd93e,	// (0x0001b1bb) list_medium_line_t3

0xd93e,	// (0x0001b1bb) list_medium_line_t3_g2

0xd93e,	// (0x0001b1bb) list_medium_line_t3_g3

0xd93e,	// (0x0001b1bb) list_medium_line_t3_right_iconx2

0x6f42,	// (0x000147bf) list_medium_line_t4_g4

0xd947,	// (0x0001b1c4) list_medium_line_x2

0xd947,	// (0x0001b1c4) list_medium_line_x2_t2_g2

0xd947,	// (0x0001b1c4) list_medium_line_x2_t2_g3

0xd947,	// (0x0001b1c4) list_medium_line_x2_t2_g4

0xd947,	// (0x0001b1c4) list_medium_line_x2_t3

0xd947,	// (0x0001b1c4) list_medium_line_x2_t3_g2

0xd947,	// (0x0001b1c4) list_medium_line_x2_t3_g3

0xd947,	// (0x0001b1c4) list_medium_line_x2_t3_g4

0xd947,	// (0x0001b1c4) list_medium_line_x2_t4_g2

0xd947,	// (0x0001b1c4) list_medium_line_x2_t4_g4

0x6f4b,	// (0x000147c8) list_medium_line_x3

0x6f4b,	// (0x000147c8) list_medium_line_x3_t4

0x6f4b,	// (0x000147c8) list_medium_line_x3_t4_g4

0x6f42,	// (0x000147bf) list_medium_line_x4_t4

0x6f42,	// (0x000147bf) list_medium_line_x4_t4_g7

0x6f42,	// (0x000147bf) list_medium_line_x4_t5

0x6f54,	// (0x000147d1) list_single_fs_dyc_pane_ParamLimits

0x6f54,	// (0x000147d1) list_single_fs_dyc_pane

0x1c2d,	// (0x0000f4aa) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1c2d,	// (0x0000f4aa) list_medium_line_x4_t4_g7_g1

0x7604,	// (0x00014e81) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7604,	// (0x00014e81) list_medium_line_x4_t4_g7_g2

0x7610,	// (0x00014e8d) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7610,	// (0x00014e8d) list_medium_line_x4_t4_g7_g3

0x761f,	// (0x00014e9c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x761f,	// (0x00014e9c) list_medium_line_x4_t4_g7_g4

0x762b,	// (0x00014ea8) list_medium_line_x4_t4_g7_g5_ParamLimits

0x762b,	// (0x00014ea8) list_medium_line_x4_t4_g7_g5

0x763a,	// (0x00014eb7) list_medium_line_x4_t4_g7_g6_ParamLimits

0x763a,	// (0x00014eb7) list_medium_line_x4_t4_g7_g6

0x7649,	// (0x00014ec6) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7649,	// (0x00014ec6) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0001d460) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0001d460) list_medium_line_x4_t4_g7_g

0x7655,	// (0x00014ed2) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7655,	// (0x00014ed2) list_medium_line_x4_t4_g7_t1

0x766a,	// (0x00014ee7) list_medium_line_x4_t4_g7_t2_ParamLimits

0x766a,	// (0x00014ee7) list_medium_line_x4_t4_g7_t2

0x767f,	// (0x00014efc) list_medium_line_x4_t4_g7_t3_ParamLimits

0x767f,	// (0x00014efc) list_medium_line_x4_t4_g7_t3

0x7694,	// (0x00014f11) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7694,	// (0x00014f11) list_medium_line_x4_t4_g7_t4

0x76a6,	// (0x00014f23) list_medium_line_x4_t4_g7_t5_ParamLimits

0x76a6,	// (0x00014f23) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0001d46f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0001d46f) list_medium_line_x4_t4_g7_t

0x76b8,	// (0x00014f35) list_single_dyc_row_pane_ParamLimits

0x76b8,	// (0x00014f35) list_single_dyc_row_pane

0x7d53,	// (0x000155d0) call5_gesture_pane_ParamLimits

0x7d53,	// (0x000155d0) call5_gesture_pane

0x7d9b,	// (0x00015618) call5_windows_pane_ParamLimits

0x7d9b,	// (0x00015618) call5_windows_pane

0x7e4c,	// (0x000156c9) call5_swipe_1_pane_cp_ParamLimits

0x7e4c,	// (0x000156c9) call5_swipe_1_pane_cp

0x7e58,	// (0x000156d5) call5_swipe_2_pane_cp_ParamLimits

0x7e58,	// (0x000156d5) call5_swipe_2_pane_cp

0x9fdd,	// (0x0001785a) call5_image_pane_cp

0x7e64,	// (0x000156e1) popup_call5_audio_first_window_cp_ParamLimits

0x7e64,	// (0x000156e1) popup_call5_audio_first_window_cp

0xe42c,	// (0x0001bca9) call5_swipe_1_pane_g1_cp_ParamLimits

0xe42c,	// (0x0001bca9) call5_swipe_1_pane_g1_cp

0xe45a,	// (0x0001bcd7) call5_swipe_1_pane_g2_cp

0xe445,	// (0x0001bcc2) call5_swipe_1_pane_t1_cp_ParamLimits

0xe445,	// (0x0001bcc2) call5_swipe_1_pane_t1_cp

0xe42c,	// (0x0001bca9) call5_swipe_2_pane_g1_cp_ParamLimits

0xe42c,	// (0x0001bca9) call5_swipe_2_pane_g1_cp

0xe462,	// (0x0001bcdf) call5_swipe_2_pane_g2_cp

0xe46a,	// (0x0001bce7) call5_swipe_2_pane_t1_cp_ParamLimits

0xe46a,	// (0x0001bce7) call5_swipe_2_pane_t1_cp

0x9609,	// (0x00016e86) main_sp_fs_email_pane

0xe47f,	// (0x0001bcfc) main_sp_fs_listscroll_pane_te

0x7e70,	// (0x000156ed) popup_sp_fs_action_menu_pane_ParamLimits

0x7e70,	// (0x000156ed) popup_sp_fs_action_menu_pane

0xc4bd,	// (0x00019d3a) bg_sp_fs_ctrlbar_pane_g1

0xcabd,	// (0x0001a33a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcacf,	// (0x0001a34c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcac6,	// (0x0001a343) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc4bd,	// (0x00019d3a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0001d55d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc2aa,	// (0x00019b27) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc2aa,	// (0x00019b27) bg_sp_fs_ctrlbar_ddmenu_pane

0xe488,	// (0x0001bd05) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe488,	// (0x0001bd05) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe494,	// (0x0001bd11) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe494,	// (0x0001bd11) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0001d566) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0001d566) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe4a0,	// (0x0001bd1d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe4a0,	// (0x0001bd1d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe4ba,	// (0x0001bd37) list_medium_line_t2_right_icon_g1

0xe559,	// (0x0001bdd6) list_medium_line_t2_right_icon_t1

0x7ea2,	// (0x0001571f) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0001d56b) list_medium_line_t2_right_icon_t

0xbfa9,	// (0x00019826) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbfa9,	// (0x00019826) bg_sp_fs_ctrlbar_pane

0x7ef6,	// (0x00015773) main_sp_fs_ctrlbar_button_pane_cp01

0x7efe,	// (0x0001577b) main_sp_fs_ctrlbar_ddmenu_pane

0xe4fa,	// (0x0001bd77) main_sp_fs_ctrlbar_pane_g1

0xe506,	// (0x0001bd83) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0001d570) main_sp_fs_ctrlbar_pane_g

0xe512,	// (0x0001bd8f) main_sp_fs_ctrlbar_pane_t1

0x7f08,	// (0x00015785) main_sp_fs_ctrlbar_pane

0x7f29,	// (0x000157a6) main_sp_fs_listscroll_pane_te_cp01

0x7f49,	// (0x000157c6) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7f49,	// (0x000157c6) popup_sp_fs_action_menu_pane_cp01

0x9609,	// (0x00016e86) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9609,	// (0x00016e86) bg_sp_fs_highlight_list_pane_cp01

0x7f73,	// (0x000157f0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x7f73,	// (0x000157f0) sp_fs_action_menu_list_gene_pane_g1

0xe569,	// (0x0001bde6) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe569,	// (0x0001bde6) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0001d57a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0001d57a) sp_fs_action_menu_list_gene_pane_g

0x7f82,	// (0x000157ff) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x7f82,	// (0x000157ff) sp_fs_action_menu_list_gene_pane_t1

0x7f9a,	// (0x00015817) sp_fs_action_menu_list_gene_pane_ParamLimits

0x7f9a,	// (0x00015817) sp_fs_action_menu_list_gene_pane

0xe576,	// (0x0001bdf3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe576,	// (0x0001bdf3) popup_sp_fs_action_menu_bg_pane

0x7fb7,	// (0x00015834) sp_fs_action_menu_list_pane_ParamLimits

0x7fb7,	// (0x00015834) sp_fs_action_menu_list_pane

0xe584,	// (0x0001be01) sp_fs_scroll_pane_cp01_ParamLimits

0xe584,	// (0x0001be01) sp_fs_scroll_pane_cp01

0x7fd5,	// (0x00015852) list_medium_line_plain_t2_t1

0x7fe5,	// (0x00015862) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0001d57f) list_medium_line_plain_t2_t

0x7ff3,	// (0x00015870) list_medium_line_plain_t3_t1

0x8003,	// (0x00015880) list_medium_line_plain_t3_t2

0x8011,	// (0x0001588e) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0001d584) list_medium_line_plain_t3_t

0x1c2d,	// (0x0000f4aa) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1c2d,	// (0x0000f4aa) list_medium_line_x2_t2_g2_g1

0x1c45,	// (0x0000f4c2) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1c45,	// (0x0000f4c2) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0001cabf) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0001cabf) list_medium_line_x2_t2_g2_g

0x2ce3,	// (0x00010560) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2ce3,	// (0x00010560) list_medium_line_x2_t2_g2_t1

0x1c78,	// (0x0000f4f5) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1c78,	// (0x0000f4f5) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0001d58b) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0001d58b) list_medium_line_x2_t2_g2_t

0x1c2d,	// (0x0000f4aa) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1c2d,	// (0x0000f4aa) list_medium_line_x2_t4_g2_g1

0x1c45,	// (0x0000f4c2) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1c45,	// (0x0000f4c2) list_medium_line_x2_t4_g2_g2

0x0001,

0xf242,	// (0x0001cabf) list_medium_line_x2_t4_g2_g_ParamLimits

0xf242,	// (0x0001cabf) list_medium_line_x2_t4_g2_g

0x801f,	// (0x0001589c) list_medium_line_x2_t4_g2_t1_ParamLimits

0x801f,	// (0x0001589c) list_medium_line_x2_t4_g2_t1

0x8036,	// (0x000158b3) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8036,	// (0x000158b3) list_medium_line_x2_t4_g2_t2

0x804b,	// (0x000158c8) list_medium_line_x2_t4_g2_t3_ParamLimits

0x804b,	// (0x000158c8) list_medium_line_x2_t4_g2_t3

0x1c78,	// (0x0000f4f5) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1c78,	// (0x0000f4f5) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x0001d590) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x0001d590) list_medium_line_x2_t4_g2_t

0xe5aa,	// (0x0001be27) list_medium_line_t3_right_iconx2_g1

0xe4ba,	// (0x0001bd37) list_medium_line_t3_right_iconx2_g2

0x805d,	// (0x000158da) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x0001d599) list_medium_line_t3_right_iconx2_g

0x8065,	// (0x000158e2) list_medium_line_t3_right_iconx2_t1

0x8075,	// (0x000158f2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x0001d5a0) list_medium_line_t3_right_iconx2_t

0x1c2d,	// (0x0000f4aa) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1c2d,	// (0x0000f4aa) list_medium_line_x3_t4_g4_g1

0x1c39,	// (0x0000f4b6) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1c39,	// (0x0000f4b6) list_medium_line_x3_t4_g4_g2

0x1cc1,	// (0x0000f53e) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1cc1,	// (0x0000f53e) list_medium_line_x3_t4_g4_g3

0x8083,	// (0x00015900) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8083,	// (0x00015900) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x0001d5a5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x0001d5a5) list_medium_line_x3_t4_g4_g

0x808f,	// (0x0001590c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x808f,	// (0x0001590c) list_medium_line_x3_t4_g4_t1

0x80a6,	// (0x00015923) list_medium_line_x3_t4_g4_t2_ParamLimits

0x80a6,	// (0x00015923) list_medium_line_x3_t4_g4_t2

0x80bb,	// (0x00015938) list_medium_line_x3_t4_g4_t3_ParamLimits

0x80bb,	// (0x00015938) list_medium_line_x3_t4_g4_t3

0x80d0,	// (0x0001594d) list_medium_line_x3_t4_g4_t4_ParamLimits

0x80d0,	// (0x0001594d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x0001d5ae) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x0001d5ae) list_medium_line_x3_t4_g4_t

0x80ed,	// (0x0001596a) list_single_dyc_row_text_pane_t1_ParamLimits

0x80ed,	// (0x0001596a) list_single_dyc_row_text_pane_t1

0x8124,	// (0x000159a1) list_single_dyc_row_text_pane_t2_ParamLimits

0x8124,	// (0x000159a1) list_single_dyc_row_text_pane_t2

0xe5b2,	// (0x0001be2f) list_single_dyc_row_text_pane_t3_ParamLimits

0xe5b2,	// (0x0001be2f) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3a,	// (0x0001d5b7) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x0001d5b7) list_single_dyc_row_text_pane_t

0xe5d6,	// (0x0001be53) list_single_dyc_row_pane_g1_ParamLimits

0xe5d6,	// (0x0001be53) list_single_dyc_row_pane_g1

0xe5e2,	// (0x0001be5f) list_single_dyc_row_pane_g2_ParamLimits

0xe5e2,	// (0x0001be5f) list_single_dyc_row_pane_g2

0xe5ee,	// (0x0001be6b) list_single_dyc_row_pane_g3_ParamLimits

0xe5ee,	// (0x0001be6b) list_single_dyc_row_pane_g3

0xe5fa,	// (0x0001be77) list_single_dyc_row_pane_g4_ParamLimits

0xe5fa,	// (0x0001be77) list_single_dyc_row_pane_g4

0x0003,

0xfd47,	// (0x0001d5c4) list_single_dyc_row_pane_g_ParamLimits

0xfd47,	// (0x0001d5c4) list_single_dyc_row_pane_g

0xe606,	// (0x0001be83) list_single_dyc_row_text_pane_ParamLimits

0xe606,	// (0x0001be83) list_single_dyc_row_text_pane

0x95b6,	// (0x00016e33) bg_sp_fs_scroll_pane

0xe625,	// (0x0001bea2) thumb_sp_fs_scroll_pane

0xd56c,	// (0x0001ade9) list_medium_line_g1_ParamLimits

0xd56c,	// (0x0001ade9) list_medium_line_g1

0xe62e,	// (0x0001beab) list_medium_line_t1_ParamLimits

0xe62e,	// (0x0001beab) list_medium_line_t1

0x1c2d,	// (0x0000f4aa) list_medium_line_x2_g1_ParamLimits

0x1c2d,	// (0x0000f4aa) list_medium_line_x2_g1

0x1c39,	// (0x0000f4b6) list_medium_line_x2_g2_ParamLimits

0x1c39,	// (0x0000f4b6) list_medium_line_x2_g2

0x0001,

0xfd50,	// (0x0001d5cd) list_medium_line_x2_g_ParamLimits

0xfd50,	// (0x0001d5cd) list_medium_line_x2_g

0xe643,	// (0x0001bec0) list_medium_line_x2_t1_ParamLimits

0xe643,	// (0x0001bec0) list_medium_line_x2_t1

0x1c2d,	// (0x0000f4aa) list_medium_line_x3_g1_ParamLimits

0x1c2d,	// (0x0000f4aa) list_medium_line_x3_g1

0x1c39,	// (0x0000f4b6) list_medium_line_x3_g2_ParamLimits

0x1c39,	// (0x0000f4b6) list_medium_line_x3_g2

0x0001,

0xfd50,	// (0x0001d5cd) list_medium_line_x3_g_ParamLimits

0xfd50,	// (0x0001d5cd) list_medium_line_x3_g

0xe643,	// (0x0001bec0) list_medium_line_x3_t1_ParamLimits

0xe643,	// (0x0001bec0) list_medium_line_x3_t1

0xe659,	// (0x0001bed6) thumb_sp_fs_scroll_pane_g1

0xe662,	// (0x0001bedf) thumb_sp_fs_scroll_pane_g2

0xe66b,	// (0x0001bee8) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x0001d5d2) thumb_sp_fs_scroll_pane_g

0xe659,	// (0x0001bed6) bg_sp_fs_scroll_pane_g1

0xe662,	// (0x0001bedf) bg_sp_fs_scroll_pane_g2

0xe66b,	// (0x0001bee8) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x0001d5d2) bg_sp_fs_scroll_pane_g

0x1c2d,	// (0x0000f4aa) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1c2d,	// (0x0000f4aa) list_medium_line_x2_t3_g4_g1

0x1cb5,	// (0x0000f532) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1cb5,	// (0x0000f532) list_medium_line_x2_t3_g4_g2

0x1c39,	// (0x0000f4b6) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1c39,	// (0x0000f4b6) list_medium_line_x2_t3_g4_g3

0x1c45,	// (0x0000f4c2) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1c45,	// (0x0000f4c2) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0001cb3b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0001cb3b) list_medium_line_x2_t3_g4_g

0x8247,	// (0x00015ac4) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8247,	// (0x00015ac4) list_medium_line_x2_t3_g4_t1

0x825d,	// (0x00015ada) list_medium_line_x2_t3_g4_t2_ParamLimits

0x825d,	// (0x00015ada) list_medium_line_x2_t3_g4_t2

0x1c78,	// (0x0000f4f5) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1c78,	// (0x0000f4f5) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5c,	// (0x0001d5d9) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5c,	// (0x0001d5d9) list_medium_line_x2_t3_g4_t

0xd56c,	// (0x0001ade9) list_medium_line_g2_g1_ParamLimits

0xd56c,	// (0x0001ade9) list_medium_line_g2_g1

0xd578,	// (0x0001adf5) list_medium_line_g2_g2_ParamLimits

0xd578,	// (0x0001adf5) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0001d290) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0001d290) list_medium_line_g2_g

0xe674,	// (0x0001bef1) list_medium_line_g2_t1_ParamLimits

0xe674,	// (0x0001bef1) list_medium_line_g2_t1

0xd56c,	// (0x0001ade9) list_medium_line_t3_g2_g1_ParamLimits

0xd56c,	// (0x0001ade9) list_medium_line_t3_g2_g1

0xd578,	// (0x0001adf5) list_medium_line_t3_g2_g2_ParamLimits

0xd578,	// (0x0001adf5) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0001d290) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0001d290) list_medium_line_t3_g2_g

0x8276,	// (0x00015af3) list_medium_line_t3_g2_t1_ParamLimits

0x8276,	// (0x00015af3) list_medium_line_t3_g2_t1

0x828d,	// (0x00015b0a) list_medium_line_t3_g2_t2_ParamLimits

0x828d,	// (0x00015b0a) list_medium_line_t3_g2_t2

0x82a2,	// (0x00015b1f) list_medium_line_t3_g2_t3_ParamLimits

0x82a2,	// (0x00015b1f) list_medium_line_t3_g2_t3

0x0002,

0xfd63,	// (0x0001d5e0) list_medium_line_t3_g2_t_ParamLimits

0xfd63,	// (0x0001d5e0) list_medium_line_t3_g2_t

0xe4ba,	// (0x0001bd37) list_medium_line_right_icon_g1

0xe689,	// (0x0001bf06) list_medium_line_right_icon_t1

0xd56c,	// (0x0001ade9) list_medium_line_t2_g1_ParamLimits

0xd56c,	// (0x0001ade9) list_medium_line_t2_g1

0x82b7,	// (0x00015b34) list_medium_line_t2_t1_ParamLimits

0x82b7,	// (0x00015b34) list_medium_line_t2_t1

0x82ce,	// (0x00015b4b) list_medium_line_t2_t2_ParamLimits

0x82ce,	// (0x00015b4b) list_medium_line_t2_t2

0x0001,

0xfd6a,	// (0x0001d5e7) list_medium_line_t2_t_ParamLimits

0xfd6a,	// (0x0001d5e7) list_medium_line_t2_t

0xd56c,	// (0x0001ade9) list_medium_line_t3_g1_ParamLimits

0xd56c,	// (0x0001ade9) list_medium_line_t3_g1

0x82e0,	// (0x00015b5d) list_medium_line_t3_t1_ParamLimits

0x82e0,	// (0x00015b5d) list_medium_line_t3_t1

0x82f7,	// (0x00015b74) list_medium_line_t3_t2_ParamLimits

0x82f7,	// (0x00015b74) list_medium_line_t3_t2

0x830c,	// (0x00015b89) list_medium_line_t3_t3_ParamLimits

0x830c,	// (0x00015b89) list_medium_line_t3_t3

0x0002,

0xfd6f,	// (0x0001d5ec) list_medium_line_t3_t_ParamLimits

0xfd6f,	// (0x0001d5ec) list_medium_line_t3_t

0xd56c,	// (0x0001ade9) list_medium_line_g3_g1_ParamLimits

0xd56c,	// (0x0001ade9) list_medium_line_g3_g1

0xe697,	// (0x0001bf14) list_medium_line_g3_g2_ParamLimits

0xe697,	// (0x0001bf14) list_medium_line_g3_g2

0xd578,	// (0x0001adf5) list_medium_line_g3_g3_ParamLimits

0xd578,	// (0x0001adf5) list_medium_line_g3_g3

0x0002,

0xfd76,	// (0x0001d5f3) list_medium_line_g3_g_ParamLimits

0xfd76,	// (0x0001d5f3) list_medium_line_g3_g

0xe6a3,	// (0x0001bf20) list_medium_line_g3_t1_ParamLimits

0xe6a3,	// (0x0001bf20) list_medium_line_g3_t1

0xd56c,	// (0x0001ade9) list_medium_line_t2_g3_g1_ParamLimits

0xd56c,	// (0x0001ade9) list_medium_line_t2_g3_g1

0xe697,	// (0x0001bf14) list_medium_line_t2_g3_g2_ParamLimits

0xe697,	// (0x0001bf14) list_medium_line_t2_g3_g2

0xd578,	// (0x0001adf5) list_medium_line_t2_g3_g3_ParamLimits

0xd578,	// (0x0001adf5) list_medium_line_t2_g3_g3

0x0002,

0xfd76,	// (0x0001d5f3) list_medium_line_t2_g3_g_ParamLimits

0xfd76,	// (0x0001d5f3) list_medium_line_t2_g3_g

0x831e,	// (0x00015b9b) list_medium_line_t2_g3_t1_ParamLimits

0x831e,	// (0x00015b9b) list_medium_line_t2_g3_t1

0x8338,	// (0x00015bb5) list_medium_line_t2_g3_t2_ParamLimits

0x8338,	// (0x00015bb5) list_medium_line_t2_g3_t2

0x0001,

0xfd7d,	// (0x0001d5fa) list_medium_line_t2_g3_t_ParamLimits

0xfd7d,	// (0x0001d5fa) list_medium_line_t2_g3_t

0xd56c,	// (0x0001ade9) list_medium_line_t3_g3_g1_ParamLimits

0xd56c,	// (0x0001ade9) list_medium_line_t3_g3_g1

0xe697,	// (0x0001bf14) list_medium_line_t3_g3_g2_ParamLimits

0xe697,	// (0x0001bf14) list_medium_line_t3_g3_g2

0xd578,	// (0x0001adf5) list_medium_line_t3_g3_g3_ParamLimits

0xd578,	// (0x0001adf5) list_medium_line_t3_g3_g3

0x0002,

0xfd76,	// (0x0001d5f3) list_medium_line_t3_g3_g_ParamLimits

0xfd76,	// (0x0001d5f3) list_medium_line_t3_g3_g

0x834d,	// (0x00015bca) list_medium_line_t3_g3_t1_ParamLimits

0x834d,	// (0x00015bca) list_medium_line_t3_g3_t1

0x8366,	// (0x00015be3) list_medium_line_t3_g3_t2_ParamLimits

0x8366,	// (0x00015be3) list_medium_line_t3_g3_t2

0x837c,	// (0x00015bf9) list_medium_line_t3_g3_t3_ParamLimits

0x837c,	// (0x00015bf9) list_medium_line_t3_g3_t3

0x0002,

0xfd82,	// (0x0001d5ff) list_medium_line_t3_g3_t_ParamLimits

0xfd82,	// (0x0001d5ff) list_medium_line_t3_g3_t

0xe5aa,	// (0x0001be27) list_medium_line_right_iconx2_g1

0xe4ba,	// (0x0001bd37) list_medium_line_right_iconx2_g2

0x0001,

0xfd89,	// (0x0001d606) list_medium_line_right_iconx2_g

0xe6b8,	// (0x0001bf35) list_medium_line_right_iconx2_t1

0xe5aa,	// (0x0001be27) list_medium_line_t2_right_iconx2_g1

0xe4ba,	// (0x0001bd37) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd89,	// (0x0001d606) list_medium_line_t2_right_iconx2_g

0x8392,	// (0x00015c0f) list_medium_line_t2_right_iconx2_t1

0x83a2,	// (0x00015c1f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8e,	// (0x0001d60b) list_medium_line_t2_right_iconx2_t

0x83b0,	// (0x00015c2d) list_medium_line_x4_t4_t1

0x83be,	// (0x00015c3b) list_medium_line_x4_t4_t2

0x83ce,	// (0x00015c4b) list_medium_line_x4_t4_t3

0x83de,	// (0x00015c5b) list_medium_line_x4_t4_t4

0x0003,

0xfd93,	// (0x0001d610) list_medium_line_x4_t4_t

0x8427,	// (0x00015ca4) tport_appsw_pane_ParamLimits

0x8427,	// (0x00015ca4) tport_appsw_pane

0x8438,	// (0x00015cb5) tport_contact_pane_ParamLimits

0x8438,	// (0x00015cb5) tport_contact_pane

0x844c,	// (0x00015cc9) tport_listscroll_pane_ParamLimits

0x844c,	// (0x00015cc9) tport_listscroll_pane

0x8464,	// (0x00015ce1) cell_tport_appsw_pane_ParamLimits

0x8464,	// (0x00015ce1) cell_tport_appsw_pane

0xd26c,	// (0x0001aae9) tport_appsw_pane_g1_ParamLimits

0xd26c,	// (0x0001aae9) tport_appsw_pane_g1

0xe6c6,	// (0x0001bf43) tport_contact_pane_g1

0xe6cf,	// (0x0001bf4c) tport_contact_pane_t1

0xe6dd,	// (0x0001bf5a) tport_contact_pane_t2

0x0001,

0xfd9c,	// (0x0001d619) tport_contact_pane_t

0xe6eb,	// (0x0001bf68) list_tport_pane

0x9ecb,	// (0x00017748) scroll_pane_cp_030

0xe6fc,	// (0x0001bf79) cell_tport_appsw_pane_g1

0xe70c,	// (0x0001bf89) cell_tport_appsw_pane_t1

0xe71a,	// (0x0001bf97) grid_highlight_pane_cp019

0x849a,	// (0x00015d17) list_tport_double_graphic_pane_ParamLimits

0x849a,	// (0x00015d17) list_tport_double_graphic_pane

0x9609,	// (0x00016e86) list_highlight_pane_cp023_ParamLimits

0x9609,	// (0x00016e86) list_highlight_pane_cp023

0x84a7,	// (0x00015d24) list_tport_double_graphic_pane_g1_ParamLimits

0x84a7,	// (0x00015d24) list_tport_double_graphic_pane_g1

0x84b4,	// (0x00015d31) list_tport_double_graphic_pane_t1_ParamLimits

0x84b4,	// (0x00015d31) list_tport_double_graphic_pane_t1

0x84c9,	// (0x00015d46) list_tport_double_graphic_pane_t2_ParamLimits

0x84c9,	// (0x00015d46) list_tport_double_graphic_pane_t2

0x0001,

0xfda8,	// (0x0001d625) list_tport_double_graphic_pane_t_ParamLimits

0xfda8,	// (0x0001d625) list_tport_double_graphic_pane_t

0x95b6,	// (0x00016e33) main_cale_note_pane

0x605f,	// (0x000138dc) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x605f,	// (0x000138dc) cell_vitu2_function_top_wide_pane_cp01

0x7a03,	// (0x00015280) wait_bar_pane_cp05_ParamLimits

0x9609,	// (0x00016e86) listscroll_cmail_pane

0xe722,	// (0x0001bf9f) list_cmail_pane

0x84db,	// (0x00015d58) list_cmail_body_pane

0x84db,	// (0x00015d58) list_single_cmail_header_caption_pane

0x84f2,	// (0x00015d6f) list_single_cmail_header_detail_pane_ParamLimits

0x84f2,	// (0x00015d6f) list_single_cmail_header_detail_pane

0xe73e,	// (0x0001bfbb) list_single_cmail_header_caption_pane_t1

0x851b,	// (0x00015d98) list_single_cmail_header_detail_pane_g1_ParamLimits

0x851b,	// (0x00015d98) list_single_cmail_header_detail_pane_g1

0xe755,	// (0x0001bfd2) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe755,	// (0x0001bfd2) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdad,	// (0x0001d62a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdad,	// (0x0001d62a) list_single_cmail_header_detail_pane_g

0x8531,	// (0x00015dae) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8531,	// (0x00015dae) list_single_cmail_header_detail_pane_t1

0xe792,	// (0x0001c00f) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe792,	// (0x0001c00f) list_single_cmail_header_editor_pane_bg

0xe7a9,	// (0x0001c026) list_cmail_body_pane_g1

0xe7b2,	// (0x0001c02f) list_cmail_body_pane_t1

0xd2bb,	// (0x0001ab38) list_single_cmail_header_editor_pane_bg_g1

0xa285,	// (0x00017b02) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd2cb,	// (0x0001ab48) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2c3,	// (0x0001ab40) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd544,	// (0x0001adc1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2eb,	// (0x0001ab68) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2db,	// (0x0001ab58) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2e3,	// (0x0001ab60) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa265,	// (0x00017ae2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x856d,	// (0x00015dea) calenote_gesture_pane_ParamLimits

0x856d,	// (0x00015dea) calenote_gesture_pane

0x8589,	// (0x00015e06) calenote_window_pane_ParamLimits

0x8589,	// (0x00015e06) calenote_window_pane

0xe7c0,	// (0x0001c03d) popup_note_window_cp01

0x85a5,	// (0x00015e22) calenote_swipe_1_pane_ParamLimits

0x85a5,	// (0x00015e22) calenote_swipe_1_pane

0x7e58,	// (0x000156d5) calenote_swipe_2_pane_ParamLimits

0x7e58,	// (0x000156d5) calenote_swipe_2_pane

0xe42c,	// (0x0001bca9) calenote_swipe_1_pane_g1_ParamLimits

0xe42c,	// (0x0001bca9) calenote_swipe_1_pane_g1

0xe439,	// (0x0001bcb6) calenote_swipe_1_pane_g2_ParamLimits

0xe439,	// (0x0001bcb6) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0001d553) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0001d553) calenote_swipe_1_pane_g

0xe7d2,	// (0x0001c04f) calenote_swipe_1_pane_t1_ParamLimits

0xe7d2,	// (0x0001c04f) calenote_swipe_1_pane_t1

0xe42c,	// (0x0001bca9) calenote_swipe_2_pane_g1_ParamLimits

0xe42c,	// (0x0001bca9) calenote_swipe_2_pane_g1

0xe7f1,	// (0x0001c06e) calenote_swipe_2_pane_g2_ParamLimits

0xe7f1,	// (0x0001c06e) calenote_swipe_2_pane_g2

0x0001,

0xfdb9,	// (0x0001d636) calenote_swipe_2_pane_g_ParamLimits

0xfdb9,	// (0x0001d636) calenote_swipe_2_pane_g

0xe7fd,	// (0x0001c07a) calenote_swipe_2_pane_t1_ParamLimits

0xe7fd,	// (0x0001c07a) calenote_swipe_2_pane_t1

0x95b6,	// (0x00016e33) main_mup_navstr_pane

0x4ea5,	// (0x00012722) main_mup3_pane_t7_ParamLimits

0x4ea5,	// (0x00012722) main_mup3_pane_t7

0xce4d,	// (0x0001a6ca) main_mp4_pane_g6_ParamLimits

0xce4d,	// (0x0001a6ca) main_mp4_pane_g6

0xd0ab,	// (0x0001a928) main_image3_pane_t4_ParamLimits

0xd0ab,	// (0x0001a928) main_image3_pane_t4

0x85ba,	// (0x00015e37) popup_navstr_preview_pane_ParamLimits

0x85ba,	// (0x00015e37) popup_navstr_preview_pane

0x85ca,	// (0x00015e47) scroll_navstr_pane_ParamLimits

0x85ca,	// (0x00015e47) scroll_navstr_pane

0x95b6,	// (0x00016e33) bg_popup_preview_window_pane_cp04

0xe824,	// (0x0001c0a1) popup_navstr_preview_pane_t1

0x85de,	// (0x00015e5b) scroll_navstr_pane_g1_ParamLimits

0x85de,	// (0x00015e5b) scroll_navstr_pane_g1

0x85f2,	// (0x00015e6f) scroll_navstr_pane_t1_ParamLimits

0x85f2,	// (0x00015e6f) scroll_navstr_pane_t1

0xe7c9,	// (0x0001c046) bg_button_pane_cp014

0xe7c9,	// (0x0001c046) bg_button_pane_cp030

0x7cfe,	// (0x0001557b) list_double_fisheye_pane_g4_ParamLimits

0x7cfe,	// (0x0001557b) list_double_fisheye_pane_g4

0x7d0a,	// (0x00015587) list_double_fisheye_pane_g5_ParamLimits

0x7d0a,	// (0x00015587) list_double_fisheye_pane_g5

0xe732,	// (0x0001bfaf) sp_fs_scroll_pane_cp03

0xe4fa,	// (0x0001bd77) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe506,	// (0x0001bd83) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0001d570) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe512,	// (0x0001bd8f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe72a,	// (0x0001bfa7) sp_fs_scroll_pane_cp02

0x9f25,	// (0x000177a2) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9f25,	// (0x000177a2) popup_sp_fs_calendar_preview_list_single_pane

0x95b6,	// (0x00016e33) main_cam6_pano_pane

0x9609,	// (0x00016e86) main_mup3_pane_ParamLimits

0x95b6,	// (0x00016e33) main_phacti_pane

0x78f6,	// (0x00015173) bg_button_pane_cp11

0x790e,	// (0x0001518b) main_mobtv_info_pane_g2_ParamLimits

0x790e,	// (0x0001518b) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0001d4d0) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0001d4d0) main_mobtv_info_pane_g

0x7ac3,	// (0x00015340) sc_clock_pane_t5_ParamLimits

0x7ac3,	// (0x00015340) sc_clock_pane_t5

0x7b6e,	// (0x000153eb) main_radioblah_pane_g1_ParamLimits

0xe36f,	// (0x0001bbec) main_radioblah_pane_t3_ParamLimits

0xe36f,	// (0x0001bbec) main_radioblah_pane_t3

0xe387,	// (0x0001bc04) main_radioblah_pane_t4_ParamLimits

0xe387,	// (0x0001bc04) main_radioblah_pane_t4

0x7b96,	// (0x00015413) main_radioblah_text_pane_ParamLimits

0x7b96,	// (0x00015413) main_radioblah_text_pane

0x7ba8,	// (0x00015425) main_radioblah_info_pane_g1_ParamLimits

0x7c3b,	// (0x000154b8) main_radioblah_info_pane_t4_ParamLimits

0x7c3b,	// (0x000154b8) main_radioblah_info_pane_t4

0x9609,	// (0x00016e86) main_sp_fs_calendar_pane

0x8608,	// (0x00015e85) main_phacti_pane_g1

0x8610,	// (0x00015e8d) phacti_note_pane_ParamLimits

0x8610,	// (0x00015e8d) phacti_note_pane

0xe83b,	// (0x0001c0b8) phacti_term_pane_ParamLimits

0xe83b,	// (0x0001c0b8) phacti_term_pane

0xe850,	// (0x0001c0cd) phacti_note_pane_t1_ParamLimits

0xe850,	// (0x0001c0cd) phacti_note_pane_t1

0xe867,	// (0x0001c0e4) phacti_term_pane_g1

0xe86f,	// (0x0001c0ec) phacti_term_pane_t1_ParamLimits

0xe86f,	// (0x0001c0ec) phacti_term_pane_t1

0xe899,	// (0x0001c116) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8a1,	// (0x0001c11e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc3,	// (0x0001d640) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8a9,	// (0x0001c126) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8a9,	// (0x0001c126) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8bf,	// (0x0001c13c) aid_popup_sp_fs_bg_corner_pane

0xc4bd,	// (0x00019d3a) popup_sp_fs_calendar_preview_bg_pane_g1

0x95b6,	// (0x00016e33) popup_sp_fs_calendar_preview_bg_pane

0xe8c7,	// (0x0001c144) popup_sp_fs_calendar_preview_list_pane

0xbfa9,	// (0x00019826) bg_main_sp_fs_cale_pane_ParamLimits

0xbfa9,	// (0x00019826) bg_main_sp_fs_cale_pane

0xe8d8,	// (0x0001c155) listscroll_cale_mrui_pane_ParamLimits

0xe8d8,	// (0x0001c155) listscroll_cale_mrui_pane

0xe8ed,	// (0x0001c16a) listscroll_sp_fs_schedule_track_pane

0xe8f6,	// (0x0001c173) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe8f6,	// (0x0001c173) main_sp_fs_ctrlbar_pane_cp01

0xe909,	// (0x0001c186) main_sp_fs_ribbon_pane

0xe911,	// (0x0001c18e) popup_sp_fs_cale_preview_window

0x8673,	// (0x00015ef0) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8673,	// (0x00015ef0) list_single_sp_fs_schedule_track_pane

0x9609,	// (0x00016e86) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9609,	// (0x00016e86) bg_sp_fs_highlight_list_pane_cp03

0x8687,	// (0x00015f04) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8687,	// (0x00015f04) list_single_sp_fs_schedule_track_pane_g1

0x8693,	// (0x00015f10) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8693,	// (0x00015f10) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc8,	// (0x0001d645) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc8,	// (0x0001d645) list_single_sp_fs_schedule_track_pane_g

0x869f,	// (0x00015f1c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x869f,	// (0x00015f1c) list_single_sp_fs_schedule_track_pane_t1

0x86b9,	// (0x00015f36) sp_fs_schedule_track_pane_ParamLimits

0x86b9,	// (0x00015f36) sp_fs_schedule_track_pane

0xe923,	// (0x0001c1a0) sp_fs_schedule_track_pane_g1

0xe92b,	// (0x0001c1a8) sp_fs_schedule_track_pane_g2

0xe933,	// (0x0001c1b0) sp_fs_schedule_track_pane_g3

0xe93b,	// (0x0001c1b8) sp_fs_schedule_track_pane_g4

0xe943,	// (0x0001c1c0) sp_fs_schedule_track_pane_g5

0x0004,

0xfdcd,	// (0x0001d64a) sp_fs_schedule_track_pane_g

0xd2bb,	// (0x0001ab38) bg_sp_fs_schedule_viewer_highlight_g1

0xa285,	// (0x00017b02) bg_sp_fs_schedule_viewer_highlight_g2

0xd2c3,	// (0x0001ab40) bg_sp_fs_schedule_viewer_highlight_g3

0xd2cb,	// (0x0001ab48) bg_sp_fs_schedule_viewer_highlight_g4

0xd544,	// (0x0001adc1) bg_sp_fs_schedule_viewer_highlight_g5

0xd2db,	// (0x0001ab58) bg_sp_fs_schedule_viewer_highlight_g6

0xd2e3,	// (0x0001ab60) bg_sp_fs_schedule_viewer_highlight_g7

0xd2eb,	// (0x0001ab68) bg_sp_fs_schedule_viewer_highlight_g8

0xa265,	// (0x00017ae2) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd8,	// (0x0001d655) bg_sp_fs_schedule_viewer_highlight_g

0x95b6,	// (0x00016e33) bg_main_sp_fs_ribbon_pane

0x86ca,	// (0x00015f47) main_sp_fs_ribbon_pane_g1

0xe94b,	// (0x0001c1c8) main_sp_fs_ribbon_pane_t1

0x86d3,	// (0x00015f50) main_sp_fs_ribbon_pane_t2

0xe95a,	// (0x0001c1d7) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdeb,	// (0x0001d668) main_sp_fs_ribbon_pane_t

0xe969,	// (0x0001c1e6) main_sp_fs_ribbon_scheduler_pane

0xe971,	// (0x0001c1ee) bg_main_sp_fs_ribbon_pane_g1

0xe97a,	// (0x0001c1f7) bg_main_sp_fs_ribbon_pane_g2

0xe983,	// (0x0001c200) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf2,	// (0x0001d66f) bg_main_sp_fs_ribbon_pane_g

0xe98b,	// (0x0001c208) main_sp_fs_ribbon_scheduler_pane_g1

0xe994,	// (0x0001c211) main_sp_fs_ribbon_scheduler_pane_g2

0xe99d,	// (0x0001c21a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf9,	// (0x0001d676) main_sp_fs_ribbon_scheduler_pane_g

0xe9a6,	// (0x0001c223) list_cale_mrui_pane

0x86e2,	// (0x00015f5f) sp_fs_scroll_pane_cp07_ParamLimits

0x86e2,	// (0x00015f5f) sp_fs_scroll_pane_cp07

0x86fa,	// (0x00015f77) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x86fa,	// (0x00015f77) bg_sp_fs_schedule_viewer_highlight

0xe9b3,	// (0x0001c230) list_single_sp_fs_schedule_track_pane_cp01

0xe9bb,	// (0x0001c238) list_sp_fs_schedule_track_pane

0xe9c3,	// (0x0001c240) sp_fs_scroll_pane_cp06_ParamLimits

0xe9c3,	// (0x0001c240) sp_fs_scroll_pane_cp06

0xc4bd,	// (0x00019d3a) bgmain_sp_fs_calendar_pane_g1

0x870a,	// (0x00015f87) list_single_cale_mrui_pane_ParamLimits

0x870a,	// (0x00015f87) list_single_cale_mrui_pane

0xe9d5,	// (0x0001c252) list_single_cale_mrui_row_pane_ParamLimits

0xe9d5,	// (0x0001c252) list_single_cale_mrui_row_pane

0x872b,	// (0x00015fa8) list_single_cale_mrui_row_pane_g1_ParamLimits

0x872b,	// (0x00015fa8) list_single_cale_mrui_row_pane_g1

0x8763,	// (0x00015fe0) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8763,	// (0x00015fe0) list_single_cale_mrui_row_pane_t1

0x8775,	// (0x00015ff2) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8775,	// (0x00015ff2) list_single_cale_mrui_row_pane_t2

0x87db,	// (0x00016058) list_single_cale_mrui_row_pane_t3_ParamLimits

0x87db,	// (0x00016058) list_single_cale_mrui_row_pane_t3

0x880a,	// (0x00016087) list_single_cale_mrui_row_pane_t4_ParamLimits

0x880a,	// (0x00016087) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe07,	// (0x0001d684) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe07,	// (0x0001d684) list_single_cale_mrui_row_pane_t

0x8839,	// (0x000160b6) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8839,	// (0x000160b6) list_single_cmail_header_editor_pane_bg_cp01

0x885d,	// (0x000160da) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x885d,	// (0x000160da) list_single_cmail_header_editor_pane_bg_cp02

0x887b,	// (0x000160f8) main_radioblah_text_pane_t1_ParamLimits

0x887b,	// (0x000160f8) main_radioblah_text_pane_t1

0xe9f8,	// (0x0001c275) cam6_indi_pane_cp01

0xea00,	// (0x0001c27d) cam6_mode_pane_cp01

0xea08,	// (0x0001c285) cam6_pano_pane

0xea11,	// (0x0001c28e) cam6_zoom_pane_cp01

0xea19,	// (0x0001c296) cam6_pano_image_pane

0xea22,	// (0x0001c29f) cam6_pano_pane_g1

0xe0d6,	// (0x0001b953) cam6_pano_pane_g2

0xea2b,	// (0x0001c2a8) cam6_pano_pane_g3

0xea34,	// (0x0001c2b1) cam6_pano_pane_g4

0xcaaa,	// (0x0001a327) cam6_pano_pane_g5

0xea3d,	// (0x0001c2ba) cam6_pano_pane_g6

0xea45,	// (0x0001c2c2) cam6_pano_pane_g7

0xea4d,	// (0x0001c2ca) cam6_pano_pane_g8

0xea56,	// (0x0001c2d3) cam6_pano_pane_g9

0x0008,

0xfe10,	// (0x0001d68d) cam6_pano_pane_g

0x95b6,	// (0x00016e33) main_browser_tag_pane

0xe81c,	// (0x0001c099) grid_navstr_albumart_pane

0xea5f,	// (0x0001c2dc) cell_navstr_albumart_pane_ParamLimits

0xea5f,	// (0x0001c2dc) cell_navstr_albumart_pane

0xac1e,	// (0x0001849b) cell_navstr_albumart_pane_g1

0xbd7a,	// (0x000195f7) cell_navstr_albumart_pane_g2

0xbd8a,	// (0x00019607) cell_navstr_albumart_pane_g3

0xbd82,	// (0x000195ff) cell_navstr_albumart_pane_g4

0x0003,

0xfe23,	// (0x0001d6a0) cell_navstr_albumart_pane_g

0x8894,	// (0x00016111) bt_list_pane_ParamLimits

0x8894,	// (0x00016111) bt_list_pane

0x88a7,	// (0x00016124) bt_list_pane_t1

0x88b6,	// (0x00016133) bt_list_pane_t2

0x0001,

0xfe2c,	// (0x0001d6a9) bt_list_pane_t

0x95b6,	// (0x00016e33) main_cale_prevew_pane

0x88c5,	// (0x00016142) popup_cale_preview_window_ParamLimits

0x88c5,	// (0x00016142) popup_cale_preview_window

0x9609,	// (0x00016e86) bg_popup_preview_window_pane_cp05_ParamLimits

0x9609,	// (0x00016e86) bg_popup_preview_window_pane_cp05

0xea76,	// (0x0001c2f3) list_cale_preview_pane_ParamLimits

0xea76,	// (0x0001c2f3) list_cale_preview_pane

0x88da,	// (0x00016157) list_double_cale_preview_pane_ParamLimits

0x88da,	// (0x00016157) list_double_cale_preview_pane

0x88eb,	// (0x00016168) list_single_cale_preview_pane_ParamLimits

0x88eb,	// (0x00016168) list_single_cale_preview_pane

0xea82,	// (0x0001c2ff) list_single_cale_preview_pane_g1

0xea8a,	// (0x0001c307) list_single_cale_preview_pane_t1_ParamLimits

0xea8a,	// (0x0001c307) list_single_cale_preview_pane_t1

0x88ff,	// (0x0001617c) list_double_cale_preview_pane_g1

0x8907,	// (0x00016184) list_double_cale_preview_pane_t1_ParamLimits

0x8907,	// (0x00016184) list_double_cale_preview_pane_t1

0x891c,	// (0x00016199) list_double_cale_preview_pane_t2_ParamLimits

0x891c,	// (0x00016199) list_double_cale_preview_pane_t2

0x0001,

0xfe31,	// (0x0001d6ae) list_double_cale_preview_pane_t_ParamLimits

0xfe31,	// (0x0001d6ae) list_double_cale_preview_pane_t

0x95b6,	// (0x00016e33) main_ezdial_pane

0x9609,	// (0x00016e86) main_sp_fs_email_pane_ParamLimits

0x7eb0,	// (0x0001572d) cmail_ddmenu_btn01_pane_ParamLimits

0x7eb0,	// (0x0001572d) cmail_ddmenu_btn01_pane

0x7ec3,	// (0x00015740) cmail_ddmenu_btn02_pane_ParamLimits

0x7ec3,	// (0x00015740) cmail_ddmenu_btn02_pane

0x7ee6,	// (0x00015763) cmail_ddmenu_btn03_pane_ParamLimits

0x7ee6,	// (0x00015763) cmail_ddmenu_btn03_pane

0x7f08,	// (0x00015785) main_sp_fs_ctrlbar_pane_ParamLimits

0x7f29,	// (0x000157a6) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x84db,	// (0x00015d58) list_cmail_body_pane_ParamLimits

0xe74c,	// (0x0001bfc9) bg_button_pane_cp12

0xe761,	// (0x0001bfde) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe761,	// (0x0001bfde) list_single_cmail_header_detail_pane_g3

0xe76e,	// (0x0001bfeb) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe76e,	// (0x0001bfeb) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb4,	// (0x0001d631) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb4,	// (0x0001d631) list_single_cmail_header_detail_pane_t

0xe884,	// (0x0001c101) phacti_term_pane_t2_ParamLimits

0xe884,	// (0x0001c101) phacti_term_pane_t2

0x0001,

0xfdbe,	// (0x0001d63b) phacti_term_pane_t_ParamLimits

0xfdbe,	// (0x0001d63b) phacti_term_pane_t

0xea9f,	// (0x0001c31c) aid_size_list_single_double

0x8934,	// (0x000161b1) popup_ezdial_listscroll_window

0x894a,	// (0x000161c7) popup_number_entry_window_cp01

0x9fdd,	// (0x0001785a) bg_popup_call_pane_cp09

0xeaab,	// (0x0001c328) ezdial_list_pane

0xeab3,	// (0x0001c330) scroll_pane_cp23

0xbfa9,	// (0x00019826) bg_button_pane_cp028_ParamLimits

0xbfa9,	// (0x00019826) bg_button_pane_cp028

0x8956,	// (0x000161d3) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8956,	// (0x000161d3) cmail_ddmenu_btn01_pane_g1

0x8962,	// (0x000161df) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8962,	// (0x000161df) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe36,	// (0x0001d6b3) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe36,	// (0x0001d6b3) cmail_ddmenu_btn01_pane_g

0xeabb,	// (0x0001c338) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeabb,	// (0x0001c338) cmail_ddmenu_btn01_pane_t1

0xbfa9,	// (0x00019826) bg_button_pane_cp029_ParamLimits

0xbfa9,	// (0x00019826) bg_button_pane_cp029

0x896e,	// (0x000161eb) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x896e,	// (0x000161eb) cmail_ddmenu_btn02_pane_g1

0x8986,	// (0x00016203) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8986,	// (0x00016203) cmail_ddmenu_btn02_pane_t1

0x9609,	// (0x00016e86) bg_button_pane_cp031_ParamLimits

0x9609,	// (0x00016e86) bg_button_pane_cp031

0x896e,	// (0x000161eb) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x896e,	// (0x000161eb) cmail_ddmenu_btn03_pane_g1

0x8986,	// (0x00016203) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8986,	// (0x00016203) cmail_ddmenu_btn03_pane_t1

0x5998,	// (0x00013215) cell_dialer2_keypad_pane_t1_ParamLimits

0x59b2,	// (0x0001322f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x59b2,	// (0x0001322f) cell_dialer2_keypad_pane_t1_copy1

0x7762,	// (0x00014fdf) ncimui_group_button_pane

0x9609,	// (0x00016e86) main_sp_fs_calendar_pane_ParamLimits

0x84db,	// (0x00015d58) list_single_cmail_header_caption_pane_ParamLimits

0xe8cf,	// (0x0001c14c) aid_recal_txt_sm_pane

0x95b6,	// (0x00016e33) mian_recal_day_pane

0xe911,	// (0x0001c18e) popup_sp_fs_cale_preview_window_ParamLimits

0xead0,	// (0x0001c34d) list_recal_day_pane

0xeb12,	// (0x0001c38f) list_single_recal_day_pane_ParamLimits

0xeb12,	// (0x0001c38f) list_single_recal_day_pane

0xeb24,	// (0x0001c3a1) list_single_recal_day_pane_g1_ParamLimits

0xeb24,	// (0x0001c3a1) list_single_recal_day_pane_g1

0xeb30,	// (0x0001c3ad) list_single_recal_day_pane_g2_ParamLimits

0xeb30,	// (0x0001c3ad) list_single_recal_day_pane_g2

0xeb3c,	// (0x0001c3b9) list_single_recal_day_pane_g3_ParamLimits

0xeb3c,	// (0x0001c3b9) list_single_recal_day_pane_g3

0x89aa,	// (0x00016227) list_single_recal_day_pane_g4_ParamLimits

0x89aa,	// (0x00016227) list_single_recal_day_pane_g4

0xeb48,	// (0x0001c3c5) list_single_recal_day_pane_g5_ParamLimits

0xeb48,	// (0x0001c3c5) list_single_recal_day_pane_g5

0x89c2,	// (0x0001623f) list_single_recal_day_pane_g6_ParamLimits

0x89c2,	// (0x0001623f) list_single_recal_day_pane_g6

0x0004,

0xfe45,	// (0x0001d6c2) list_single_recal_day_pane_g_ParamLimits

0xfe45,	// (0x0001d6c2) list_single_recal_day_pane_g

0xeb5c,	// (0x0001c3d9) list_single_recal_day_pane_t1

0x89ce,	// (0x0001624b) list_single_recal_day_pane_t2

0x0001,

0xfe50,	// (0x0001d6cd) list_single_recal_day_pane_t

0x89e0,	// (0x0001625d) ncimui_query_button_pane_ParamLimits

0x89e0,	// (0x0001625d) ncimui_query_button_pane

0x89f0,	// (0x0001626d) ncimui_query_button_pane_t1_ParamLimits

0x89f0,	// (0x0001626d) ncimui_query_button_pane_t1

0xeb6e,	// (0x0001c3eb) ncimui_query_button_pane_t2_ParamLimits

0xeb6e,	// (0x0001c3eb) ncimui_query_button_pane_t2

0x0001,

0xfe55,	// (0x0001d6d2) ncimui_query_button_pane_t_ParamLimits

0xfe55,	// (0x0001d6d2) ncimui_query_button_pane_t

0x8a03,	// (0x00016280) query_button_pane_ParamLimits

0x8a03,	// (0x00016280) query_button_pane

0x95b6,	// (0x00016e33) bg_button_pane_cp0028

0xeb81,	// (0x0001c3fe) query_button_pane_t1

0x3ca4,	// (0x00011521) main_tport_pane_ParamLimits

0x83ee,	// (0x00015c6b) bg_popup_window_pane_cp01_ParamLimits

0x83ee,	// (0x00015c6b) bg_popup_window_pane_cp01

0x8405,	// (0x00015c82) heading_pane_cp08_ParamLimits

0x8405,	// (0x00015c82) heading_pane_cp08

0x8416,	// (0x00015c93) heading_pane_cp07_ParamLimits

0x8416,	// (0x00015c93) heading_pane_cp07

0xe6fc,	// (0x0001bf79) cell_tport_appsw_pane_g2

0x0002,

0xfda1,	// (0x0001d61e) cell_tport_appsw_pane_g

0xac16,	// (0x00018493) input_candi_list_open_g1

0xa460,	// (0x00017cdd) list_cale_time_pane_g6_ParamLimits

0xa460,	// (0x00017cdd) list_cale_time_pane_g6

0x4936,	// (0x000121b3) aid_size_touch_calib_1_ParamLimits

0x4936,	// (0x000121b3) aid_size_touch_calib_1

0x4948,	// (0x000121c5) aid_size_touch_calib_2_ParamLimits

0x4948,	// (0x000121c5) aid_size_touch_calib_2

0x495e,	// (0x000121db) aid_size_touch_calib_3_ParamLimits

0x495e,	// (0x000121db) aid_size_touch_calib_3

0x4976,	// (0x000121f3) aid_size_touch_calib_4_ParamLimits

0x4976,	// (0x000121f3) aid_size_touch_calib_4

0x498a,	// (0x00012207) main_touch_calib_button_group_pane_ParamLimits

0x498a,	// (0x00012207) main_touch_calib_button_group_pane

0x49a2,	// (0x0001221f) main_touch_calib_pane_g1_ParamLimits

0x49b4,	// (0x00012231) main_touch_calib_pane_g2_ParamLimits

0x49c6,	// (0x00012243) main_touch_calib_pane_g3_ParamLimits

0x49d8,	// (0x00012255) main_touch_calib_pane_g4_ParamLimits

0xf760,	// (0x0001cfdd) main_touch_calib_pane_g_ParamLimits

0x49ea,	// (0x00012267) main_touch_calib_pane_t1_ParamLimits

0x4a02,	// (0x0001227f) main_touch_calib_pane_t2_ParamLimits

0x4a1a,	// (0x00012297) main_touch_calib_pane_t3_ParamLimits

0x4a2c,	// (0x000122a9) main_touch_calib_pane_t4_ParamLimits

0x4a3e,	// (0x000122bb) main_touch_calib_pane_t5_ParamLimits

0xf769,	// (0x0001cfe6) main_touch_calib_pane_t_ParamLimits

0xc860,	// (0x0001a0dd) list_single_fp_cale_pane_g3_ParamLimits

0xc860,	// (0x0001a0dd) list_single_fp_cale_pane_g3

0x9609,	// (0x00016e86) bg_button_pane_cp012_ParamLimits

0x9609,	// (0x00016e86) bg_vkb2_func_pane_cp03_ParamLimits

0x6907,	// (0x00014184) cell_vitu2_function_top_pane_g1_ParamLimits

0x9609,	// (0x00016e86) bg_vkb2_func_pane_cp04_ParamLimits

0x76f2,	// (0x00014f6f) main_ncimui_button_group_pane_ParamLimits

0x76f2,	// (0x00014f6f) main_ncimui_button_group_pane

0x7750,	// (0x00014fcd) main_ncimui_pane_t3_ParamLimits

0x7750,	// (0x00014fcd) main_ncimui_pane_t3

0xe832,	// (0x0001c0af) phacti_button_group_pane

0xea9f,	// (0x0001c31c) aid_size_list_single_double_ParamLimits

0x8934,	// (0x000161b1) popup_ezdial_listscroll_window_ParamLimits

0x894a,	// (0x000161c7) popup_number_entry_window_cp01_ParamLimits

0x8a15,	// (0x00016292) phacti_button_pane_ParamLimits

0x8a15,	// (0x00016292) phacti_button_pane

0x95b6,	// (0x00016e33) bg_button_pane_cp14

0xeb8f,	// (0x0001c40c) phacti_button_pane_t1

0x8a24,	// (0x000162a1) main_touch_calib_button_pane_ParamLimits

0x8a24,	// (0x000162a1) main_touch_calib_button_pane

0x9d6e,	// (0x000175eb) bg_button_pane_cp18_ParamLimits

0x9d6e,	// (0x000175eb) bg_button_pane_cp18

0x8a3f,	// (0x000162bc) main_touch_calib_button_pane_t1_ParamLimits

0x8a3f,	// (0x000162bc) main_touch_calib_button_pane_t1

0x8a55,	// (0x000162d2) main_touch_calib_button_pane_t2_ParamLimits

0x8a55,	// (0x000162d2) main_touch_calib_button_pane_t2

0x0001,

0xfe5a,	// (0x0001d6d7) main_touch_calib_button_pane_t_ParamLimits

0xfe5a,	// (0x0001d6d7) main_touch_calib_button_pane_t

0x95b6,	// (0x00016e33) cell_ncimui_button_pane

0x95b6,	// (0x00016e33) bg_button_pane_cp032

0xeb9d,	// (0x0001c41a) cell_ncimui_button_pane_t1

0xd08b,	// (0x0001a908) image3_infobar_pane_ParamLimits

0xd08b,	// (0x0001a908) image3_infobar_pane

0x7aeb,	// (0x00015368) fs_bigclock_status_pane_ParamLimits

0x7aeb,	// (0x00015368) fs_bigclock_status_pane

0x7af8,	// (0x00015375) main_fs_bigclock_clock_pane_ParamLimits

0x7af8,	// (0x00015375) main_fs_bigclock_clock_pane

0x7b1a,	// (0x00015397) main_fs_bigclock_indi_pane_ParamLimits

0x7b1a,	// (0x00015397) main_fs_bigclock_indi_pane

0x7b44,	// (0x000153c1) main_fs_bigclock_swipe_pane_ParamLimits

0x7b44,	// (0x000153c1) main_fs_bigclock_swipe_pane

0x95b6,	// (0x00016e33) main_fs_clock_dumped_data

0xe1e3,	// (0x0001ba60) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe1e3,	// (0x0001ba60) list_single_fs_bigclock_indicator_pane_g1

0xe1fd,	// (0x0001ba7a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe1fd,	// (0x0001ba7a) list_single_fs_bigclock_indicator_pane_g2

0xe217,	// (0x0001ba94) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe217,	// (0x0001ba94) list_single_fs_bigclock_indicator_pane_g3

0xe231,	// (0x0001baae) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe231,	// (0x0001baae) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0001d504) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0001d504) list_single_fs_bigclock_indicator_pane_g

0xe25a,	// (0x0001bad7) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe25a,	// (0x0001bad7) list_single_fs_bigclock_indicator_pane_t1

0xe282,	// (0x0001baff) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe282,	// (0x0001baff) list_single_fs_bigclock_indicator_pane_t2

0xe2aa,	// (0x0001bb27) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe2aa,	// (0x0001bb27) list_single_fs_bigclock_indicator_pane_t3

0xe2d2,	// (0x0001bb4f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe2d2,	// (0x0001bb4f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0001d50f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0001d50f) list_single_fs_bigclock_indicator_pane_t

0xebab,	// (0x0001c428) image3_infobar_fav_pane_ParamLimits

0xebab,	// (0x0001c428) image3_infobar_fav_pane

0xebbb,	// (0x0001c438) image3_infobar_loc_pane_ParamLimits

0xebbb,	// (0x0001c438) image3_infobar_loc_pane

0xebcf,	// (0x0001c44c) image3_infobar_time_pane_ParamLimits

0xebcf,	// (0x0001c44c) image3_infobar_time_pane

0xc4bd,	// (0x00019d3a) image3_infobar_time_pane_g1

0xebdf,	// (0x0001c45c) image3_infobar_time_pane_t1

0xc4bd,	// (0x00019d3a) image3_infobar_loc_pane_g1

0xebed,	// (0x0001c46a) image3_infobar_loc_pane_g2

0x0001,

0xfe5f,	// (0x0001d6dc) image3_infobar_loc_pane_g

0xebf5,	// (0x0001c472) image3_infobar_loc_pane_t1

0xc4bd,	// (0x00019d3a) image3_infobar_fav_pane_g1

0xec03,	// (0x0001c480) image3_infobar_fav_pane_g2

0x0001,

0xfe64,	// (0x0001d6e1) image3_infobar_fav_pane_g

0xec0b,	// (0x0001c488) fs_bigclock_status_battery_pane

0xec14,	// (0x0001c491) fs_bigclock_status_signal_pane

0xec1d,	// (0x0001c49a) fs_bigclock_status_title_pane

0xec26,	// (0x0001c4a3) fs_bigclock_status_signal_pane_g1

0xec2f,	// (0x0001c4ac) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe69,	// (0x0001d6e6) fs_bigclock_status_signal_pane_g

0xec37,	// (0x0001c4b4) fs_bigclock_status_battery_pane_g1

0xec40,	// (0x0001c4bd) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6e,	// (0x0001d6eb) fs_bigclock_status_battery_pane_g

0xec48,	// (0x0001c4c5) fs_bigclock_status_title_pane_t1

0x8a73,	// (0x000162f0) main_fs_bigclock_clock_pane_g1

0x8a85,	// (0x00016302) main_fs_bigclock_clock_pane_g2

0x8a96,	// (0x00016313) main_fs_bigclock_clock_pane_g3

0x8a96,	// (0x00016313) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe73,	// (0x0001d6f0) main_fs_bigclock_clock_pane_g

0x8aa9,	// (0x00016326) main_fs_bigclock_clock_pane_t1

0x8ac4,	// (0x00016341) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7c,	// (0x0001d6f9) main_fs_bigclock_clock_pane_t

0xec56,	// (0x0001c4d3) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec56,	// (0x0001c4d3) list_single_fs_bigclock_indicator_pane

0xec67,	// (0x0001c4e4) list_single_fs_bigclock_pane_ParamLimits

0xec67,	// (0x0001c4e4) list_single_fs_bigclock_pane

0xec8d,	// (0x0001c50a) main_fs_bigclock_indicator_pane_t1

0xec9c,	// (0x0001c519) list_single_fs_bigclock_pane_g1

0xeca4,	// (0x0001c521) list_single_fs_bigclock_pane_t1

0xc4bd,	// (0x00019d3a) main_fs_bigclock_swipe_pane_g1

0xece4,	// (0x0001c561) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8d,	// (0x0001d70a) main_fs_bigclock_swipe_pane_g

0xecec,	// (0x0001c569) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecec,	// (0x0001c569) main_fs_bigclock_swipe_pane_t1

0x2d39,	// (0x000105b6) call_type_pane_ParamLimits

0x95b6,	// (0x00016e33) main_btmg_pane

0x8757,	// (0x00015fd4) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8757,	// (0x00015fd4) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe00,	// (0x0001d67d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe00,	// (0x0001d67d) list_single_cale_mrui_row_pane_g

0xeaf9,	// (0x0001c376) list_recal_vselct_arw_lo_pane

0xeb01,	// (0x0001c37e) list_recal_vselct_arw_up_pane

0xeb09,	// (0x0001c386) list_recal_vselct_pane

0xed09,	// (0x0001c586) btmg_button_pane

0x8b24,	// (0x000163a1) main_btmg_pane_g1

0x95b6,	// (0x00016e33) bg_button_pane_cp044

0xed11,	// (0x0001c58e) btmg_button_pane_t1

0xbf95,	// (0x00019812) aid_listscroll_gen

0x9609,	// (0x00016e86) main_cntbar_detail_pane

0xe722,	// (0x0001bf9f) list_cmail_folder_pane

0xe732,	// (0x0001bfaf) sp_fs_scroll_pane_cp03_ParamLimits

0xed1f,	// (0x0001c59c) list_single_fs_dyc_pane_cp01_ParamLimits

0xed1f,	// (0x0001c59c) list_single_fs_dyc_pane_cp01

0xed35,	// (0x0001c5b2) aid_size_cmail_indent

0xed3e,	// (0x0001c5bb) list_single_dyc_row_pane_cp01

0x8b54,	// (0x000163d1) cntbar_detail_list_pane_ParamLimits

0x8b54,	// (0x000163d1) cntbar_detail_list_pane

0x8b9a,	// (0x00016417) main_cntbar_detail_cont_pane_ParamLimits

0x8b9a,	// (0x00016417) main_cntbar_detail_cont_pane

0x8bae,	// (0x0001642b) scroll_pane_cp032_ParamLimits

0x8bae,	// (0x0001642b) scroll_pane_cp032

0x8bba,	// (0x00016437) cntbar_detail_list_event_pane_ParamLimits

0x8bba,	// (0x00016437) cntbar_detail_list_event_pane

0x8b64,	// (0x000163e1) cntbar_detail_list_shct_pane

0xed47,	// (0x0001c5c4) aid_list_gen

0x9ecb,	// (0x00017748) aid_scroll

0xd88a,	// (0x0001b107) aid_size_touch_scroll_bar

0xd947,	// (0x0001b1c4) aid_list_double

0x8bcb,	// (0x00016448) aid_list_single

0xd93e,	// (0x0001b1bb) aid_list_single_lg

0x8bd4,	// (0x00016451) aid_list_z_g_a_sm

0x8bdc,	// (0x00016459) aid_list_z_g_d

0x8be4,	// (0x00016461) aid_txt_z_prm

0x8bf2,	// (0x0001646f) aid_txt_z_prm_cp01

0x8c00,	// (0x0001647d) aid_txt_z_sec

0x8c0e,	// (0x0001648b) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8c0e,	// (0x0001648b) main_cntbar_detail_cont_pane_g1

0x8c22,	// (0x0001649f) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8c22,	// (0x0001649f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe92,	// (0x0001d70f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe92,	// (0x0001d70f) main_cntbar_detail_cont_pane_g

0xed50,	// (0x0001c5cd) main_cntbar_detail_cont_pane_t1

0xed5e,	// (0x0001c5db) main_cntbar_detail_cont_pane_t2

0xed6c,	// (0x0001c5e9) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe97,	// (0x0001d714) main_cntbar_detail_cont_pane_t

0x8c32,	// (0x000164af) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8c32,	// (0x000164af) cell_cntbar_detail_list_shct_pane

0xed7a,	// (0x0001c5f7) cntbar_detail_list_shct_pane_g1

0xed83,	// (0x0001c600) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9e,	// (0x0001d71b) cntbar_detail_list_shct_pane_g

0x8c44,	// (0x000164c1) cntbar_detail_list_event_pane_g1_ParamLimits

0x8c44,	// (0x000164c1) cntbar_detail_list_event_pane_g1

0x8c50,	// (0x000164cd) cntbar_detail_list_event_pane_g2_ParamLimits

0x8c50,	// (0x000164cd) cntbar_detail_list_event_pane_g2

0x0005,

0xfea3,	// (0x0001d720) cntbar_detail_list_event_pane_g_ParamLimits

0xfea3,	// (0x0001d720) cntbar_detail_list_event_pane_g

0x8cbc,	// (0x00016539) cntbar_detail_list_event_pane_t1_ParamLimits

0x8cbc,	// (0x00016539) cntbar_detail_list_event_pane_t1

0x8cd1,	// (0x0001654e) cntbar_detail_list_event_pane_t2_ParamLimits

0x8cd1,	// (0x0001654e) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb0,	// (0x0001d72d) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb0,	// (0x0001d72d) cntbar_detail_list_event_pane_t

0xc4bd,	// (0x00019d3a) cell_cntbar_detail_list_shct_pane_g1

0xaa5d,	// (0x000182da) navi_pane_mv_g3

0x9609,	// (0x00016e86) main_cntbar_detail_pane_ParamLimits

0x95b6,	// (0x00016e33) main_notif_wgt_pane

0xcddb,	// (0x0001a658) aid_tch_main_mp4_pane_g4

0xd00b,	// (0x0001a888) popup_slider_window_cp02

0xeaef,	// (0x0001c36c) list_recal_day_event_pane

0x8b2c,	// (0x000163a9) cntbar_detail_btn_pane_ParamLimits

0x8b2c,	// (0x000163a9) cntbar_detail_btn_pane

0x8b3f,	// (0x000163bc) cntbar_detail_btn_pane_cp01_ParamLimits

0x8b3f,	// (0x000163bc) cntbar_detail_btn_pane_cp01

0x8b64,	// (0x000163e1) cntbar_detail_list_shct_pane_ParamLimits

0x8b74,	// (0x000163f1) cntbar_detail_pane_g1_ParamLimits

0x8b74,	// (0x000163f1) cntbar_detail_pane_g1

0x8b84,	// (0x00016401) cntbar_detail_pane_t1_ParamLimits

0x8b84,	// (0x00016401) cntbar_detail_pane_t1

0x8c5c,	// (0x000164d9) cntbar_detail_list_event_pane_g3_ParamLimits

0x8c5c,	// (0x000164d9) cntbar_detail_list_event_pane_g3

0x8c74,	// (0x000164f1) cntbar_detail_list_event_pane_g4_ParamLimits

0x8c74,	// (0x000164f1) cntbar_detail_list_event_pane_g4

0x8c8c,	// (0x00016509) cntbar_detail_list_event_pane_g5_ParamLimits

0x8c8c,	// (0x00016509) cntbar_detail_list_event_pane_g5

0x8ca4,	// (0x00016521) cntbar_detail_list_event_pane_g6_ParamLimits

0x8ca4,	// (0x00016521) cntbar_detail_list_event_pane_g6

0x8ce6,	// (0x00016563) cntbar_detail_list_event_pane_t3_ParamLimits

0x8ce6,	// (0x00016563) cntbar_detail_list_event_pane_t3

0x8cf8,	// (0x00016575) popup_notif_wgt_window_ParamLimits

0x8cf8,	// (0x00016575) popup_notif_wgt_window

0x8d0d,	// (0x0001658a) popup_submenu_window_cp01_ParamLimits

0x8d0d,	// (0x0001658a) popup_submenu_window_cp01

0x9fdd,	// (0x0001785a) bg_popup_window_pane_cp10

0xed8c,	// (0x0001c609) listscroll_notif_wgt_pane

0xed9d,	// (0x0001c61a) list_notif_wgt_window

0xeda6,	// (0x0001c623) scroll_pane_cp033

0x8d1d,	// (0x0001659a) list_notif_wgt_row_pane_ParamLimits

0x8d1d,	// (0x0001659a) list_notif_wgt_row_pane

0xedaf,	// (0x0001c62c) aid_size_list_notif_wgt_del

0xedbc,	// (0x0001c639) list_notif_wgt_row_pane_g1

0xedc8,	// (0x0001c645) list_notif_wgt_row_pane_g2

0xeddc,	// (0x0001c659) list_notif_wgt_row_pane_g3

0x0002,

0xfeb7,	// (0x0001d734) list_notif_wgt_row_pane_g

0xede9,	// (0x0001c666) list_notif_wgt_row_pane_t1

0xedff,	// (0x0001c67c) list_notif_wgt_row_pane_t2

0xee11,	// (0x0001c68e) list_notif_wgt_row_pane_t3

0x0002,

0xfebe,	// (0x0001d73b) list_notif_wgt_row_pane_t

0xd584,	// (0x0001ae01) list_recal_day_event_pane_g1

0xee23,	// (0x0001c6a0) list_recal_day_event_pane_t1

0x95b6,	// (0x00016e33) bg_button_pane_cp045

0x8d2d,	// (0x000165aa) cntbar_detail_btn_pane_t1

0xbfa9,	// (0x00019826) main_callh_pane_ParamLimits

0xbfa9,	// (0x00019826) main_callh_pane

0x95b6,	// (0x00016e33) main_coverflow0_pane

0x95b6,	// (0x00016e33) main_wgtman_pane

0x7b58,	// (0x000153d5) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7b58,	// (0x000153d5) main_fs_bigclock_unlock_btn_pane

0xe6f4,	// (0x0001bf71) bg_button_pane_cp16

0xe704,	// (0x0001bf81) cell_tport_appsw_pane_g3

0x8d3b,	// (0x000165b8) cf0_flow_pane_ParamLimits

0x8d3b,	// (0x000165b8) cf0_flow_pane

0xee32,	// (0x0001c6af) listscroll_cf0_pane

0xee3b,	// (0x0001c6b8) main_cf0_pane_g1

0x8d50,	// (0x000165cd) main_cf0_pane_t1_ParamLimits

0x8d50,	// (0x000165cd) main_cf0_pane_t1

0x8d65,	// (0x000165e2) main_cf0_pane_t2_ParamLimits

0x8d65,	// (0x000165e2) main_cf0_pane_t2

0x0001,

0xfeca,	// (0x0001d747) main_cf0_pane_t_ParamLimits

0xfeca,	// (0x0001d747) main_cf0_pane_t

0xee4d,	// (0x0001c6ca) scroll_pane_cp11

0x8d7a,	// (0x000165f7) cf0_flow_pane_g1

0x8d82,	// (0x000165ff) cf0_flow_pane_g2

0x0001,

0xfecf,	// (0x0001d74c) cf0_flow_pane_g

0x8d8a,	// (0x00016607) cf0_flow_pane_t1

0x95b6,	// (0x00016e33) main_call6_pane

0x95b6,	// (0x00016e33) main_calllock_pane

0x8d98,	// (0x00016615) call6_btn_grp_pane_ParamLimits

0x8d98,	// (0x00016615) call6_btn_grp_pane

0x8dae,	// (0x0001662b) call6_pane_g1_ParamLimits

0x8dae,	// (0x0001662b) call6_pane_g1

0x8dc1,	// (0x0001663e) popup_call6_1st_window_ParamLimits

0x8dc1,	// (0x0001663e) popup_call6_1st_window

0x8dd0,	// (0x0001664d) popup_call6_2nd_window_ParamLimits

0x8dd0,	// (0x0001664d) popup_call6_2nd_window

0x8ddf,	// (0x0001665c) cell_call6_btn_pane_ParamLimits

0x8ddf,	// (0x0001665c) cell_call6_btn_pane

0x9fdd,	// (0x0001785a) bg_popup_call2_in_pane_cp03

0xee56,	// (0x0001c6d3) popup_call6_1st_window_g1

0xee5e,	// (0x0001c6db) popup_call6_1st_window_g2

0xee66,	// (0x0001c6e3) popup_call6_1st_window_g3

0x0002,

0xfed4,	// (0x0001d751) popup_call6_1st_window_g

0xee6e,	// (0x0001c6eb) popup_call6_1st_window_t1

0xee7d,	// (0x0001c6fa) popup_call6_1st_window_t2

0xee8b,	// (0x0001c708) popup_call6_1st_window_t3

0x0002,

0xfedb,	// (0x0001d758) popup_call6_1st_window_t

0x9fdd,	// (0x0001785a) bg_popup_call2_in_pane_cp04

0xee56,	// (0x0001c6d3) popup_call6_2nd_window_g1

0xee5e,	// (0x0001c6db) popup_call6_2nd_window_g2

0xee66,	// (0x0001c6e3) popup_call6_2nd_window_g3

0x0002,

0xfed4,	// (0x0001d751) popup_call6_2nd_window_g

0xee6e,	// (0x0001c6eb) popup_call6_2nd_window_t1

0x95b6,	// (0x00016e33) bg_button_pane_cp15

0xee99,	// (0x0001c716) cell_call6_btn_pane_g1

0xeea2,	// (0x0001c71f) cell_call6_btn_pane_t1

0x8df3,	// (0x00016670) listscroll_wgtman_pane_ParamLimits

0x8df3,	// (0x00016670) listscroll_wgtman_pane

0x8e14,	// (0x00016691) wgtman_btn_pane_ParamLimits

0x8e14,	// (0x00016691) wgtman_btn_pane

0xa8b4,	// (0x00018131) aid_scroll_copy1

0xeec3,	// (0x0001c740) list_wgtman_pane

0x8e54,	// (0x000166d1) wgtman_btn_pane_g1_ParamLimits

0x8e54,	// (0x000166d1) wgtman_btn_pane_g1

0x8e80,	// (0x000166fd) wgtman_btn_pane_t1_ParamLimits

0x8e80,	// (0x000166fd) wgtman_btn_pane_t1

0xeecd,	// (0x0001c74a) wgtman_btn_pane_t2_ParamLimits

0xeecd,	// (0x0001c74a) wgtman_btn_pane_t2

0x0001,

0xfee2,	// (0x0001d75f) wgtman_btn_pane_t_ParamLimits

0xfee2,	// (0x0001d75f) wgtman_btn_pane_t

0x8ebd,	// (0x0001673a) listrow_wgtman_pane_ParamLimits

0x8ebd,	// (0x0001673a) listrow_wgtman_pane

0x8ece,	// (0x0001674b) listrow_wgtman_pane_g1

0x8edb,	// (0x00016758) listrow_wgtman_pane_g2

0x0001,

0xfee7,	// (0x0001d764) listrow_wgtman_pane_g

0x8ef3,	// (0x00016770) listrow_wgtman_pane_t1

0x8f0b,	// (0x00016788) listrow_wgtman_pane_t2

0x0001,

0xfeec,	// (0x0001d769) listrow_wgtman_pane_t

0x8f31,	// (0x000167ae) wait_bar_pane_cp09

0xeee4,	// (0x0001c761) main_calllock_btn_pane

0xeeec,	// (0x0001c769) main_calllock_pane_g1

0x95b6,	// (0x00016e33) bg_button_pane_cp17

0xeef5,	// (0x0001c772) main_calllock_btn_pane_g1

0xeefe,	// (0x0001c77b) main_calllock_btn_pane_t1

0x95b6,	// (0x00016e33) main_dialer3_pane

0x95b6,	// (0x00016e33) main_fmrd2_pane

0xc4bd,	// (0x00019d3a) main_fs_bigclock_unlock_btn_pane_g1

0xef15,	// (0x0001c792) main_fs_bigclock_unlock_btn_pane_t1

0x8f43,	// (0x000167c0) area_fmrd2_info_pane_ParamLimits

0x8f43,	// (0x000167c0) area_fmrd2_info_pane

0x8f52,	// (0x000167cf) area_fmrd2_visual_pane_ParamLimits

0x8f52,	// (0x000167cf) area_fmrd2_visual_pane

0x8f60,	// (0x000167dd) fmrd2_indi_pane_ParamLimits

0x8f60,	// (0x000167dd) fmrd2_indi_pane

0x8f6d,	// (0x000167ea) area_fmrd2_visual_pane_g1

0x8f75,	// (0x000167f2) area_fmrd2_visual_pane_t1

0x8f83,	// (0x00016800) area_fmrd2_visual_pane_t2

0x8f91,	// (0x0001680e) area_fmrd2_visual_pane_t3

0x0002,

0xfef6,	// (0x0001d773) area_fmrd2_visual_pane_t

0x8f9f,	// (0x0001681c) area_fmrd2_info_pane_g1

0x8fa7,	// (0x00016824) area_fmrd2_info_pane_t1

0x8fb5,	// (0x00016832) area_fmrd2_info_pane_t2

0x8fc3,	// (0x00016840) area_fmrd2_info_pane_t3

0x8fd1,	// (0x0001684e) area_fmrd2_info_pane_t4

0x0003,

0xfefd,	// (0x0001d77a) area_fmrd2_info_pane_t

0x8fdf,	// (0x0001685c) fmrd2_indi_pane_t1

0x8fed,	// (0x0001686a) fmrd2_indi_pane_t2

0x8ffb,	// (0x00016878) fmrd2_indi_pane_t3

0x0002,

0xff06,	// (0x0001d783) fmrd2_indi_pane_t

0xe240,	// (0x0001babd) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe240,	// (0x0001babd) list_single_fs_bigclock_indicator_pane_g5

0xe2ee,	// (0x0001bb6b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe2ee,	// (0x0001bb6b) list_single_fs_bigclock_indicator_pane_t5

0x8624,	// (0x00015ea1) aid_cell_bcale_month_pane_ParamLimits

0x8624,	// (0x00015ea1) aid_cell_bcale_month_pane

0x8642,	// (0x00015ebf) bcale_month_pane_ParamLimits

0x8642,	// (0x00015ebf) bcale_month_pane

0x865a,	// (0x00015ed7) bcale_preview_pane_ParamLimits

0x865a,	// (0x00015ed7) bcale_preview_pane

0xeca4,	// (0x0001c521) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc0,	// (0x0001c53d) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc0,	// (0x0001c53d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe88,	// (0x0001d705) list_single_fs_bigclock_pane_t_ParamLimits

0xfe88,	// (0x0001d705) list_single_fs_bigclock_pane_t

0xef0d,	// (0x0001c78a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef1,	// (0x0001d76e) main_fs_bigclock_unlock_btn_pane_g

0x9009,	// (0x00016886) aid_dia3_key_size_ParamLimits

0x9009,	// (0x00016886) aid_dia3_key_size

0x9018,	// (0x00016895) aid_dia3_listrow_size_ParamLimits

0x9018,	// (0x00016895) aid_dia3_listrow_size

0x902b,	// (0x000168a8) dia3_keypad_fun_pane_ParamLimits

0x902b,	// (0x000168a8) dia3_keypad_fun_pane

0x903f,	// (0x000168bc) dia3_keypad_num_pane_ParamLimits

0x903f,	// (0x000168bc) dia3_keypad_num_pane

0x9050,	// (0x000168cd) dia3_listscroll_pane_ParamLimits

0x9050,	// (0x000168cd) dia3_listscroll_pane

0x9061,	// (0x000168de) dia3_numentry_pane_ParamLimits

0x9061,	// (0x000168de) dia3_numentry_pane

0xef23,	// (0x0001c7a0) dia3_list_pane

0xef2c,	// (0x0001c7a9) scroll_pane_cp12

0x95b6,	// (0x00016e33) bg_dia3_numentry_pane

0x9073,	// (0x000168f0) dia3_numentry_pane_t1

0x9082,	// (0x000168ff) cell_dia3_key_num_pane

0x908a,	// (0x00016907) cell_dia3_key0_fun_pane_ParamLimits

0x908a,	// (0x00016907) cell_dia3_key0_fun_pane

0x909e,	// (0x0001691b) cell_dia3_key1_fun_pane_ParamLimits

0x909e,	// (0x0001691b) cell_dia3_key1_fun_pane

0x90b5,	// (0x00016932) dia3_listrow_pane

0xdf41,	// (0x0001b7be) bg_dia3_numentry_pane_g1

0x95b6,	// (0x00016e33) bg_button_pane_cp21

0xef35,	// (0x0001c7b2) cell_dia3_key_num_pane_t1

0xef43,	// (0x0001c7c0) cell_dia3_key_num_pane_t2

0xef52,	// (0x0001c7cf) cell_dia3_key_num_pane_t3

0xef61,	// (0x0001c7de) cell_dia3_key_num_pane_t4

0x0003,

0xff0d,	// (0x0001d78a) cell_dia3_key_num_pane_t

0x95b6,	// (0x00016e33) bg_button_pane_cp19

0xef70,	// (0x0001c7ed) cell_dia3_key0_fun_pane_g1

0x95b6,	// (0x00016e33) bg_button_pane_cp20

0x90c7,	// (0x00016944) cell_dia3_key1_fun_pane_g1

0x90cf,	// (0x0001694c) area_left_week_number_pane

0x90db,	// (0x00016958) area_top_day_name_pane

0x90ec,	// (0x00016969) frame_month_view_pane

0xef78,	// (0x0001c7f5) grid_month_view_pane

0x90fd,	// (0x0001697a) cell_top_day_name_pane_ParamLimits

0x90fd,	// (0x0001697a) cell_top_day_name_pane

0x9120,	// (0x0001699d) cell_area_left_week_number_pane_ParamLimits

0x9120,	// (0x0001699d) cell_area_left_week_number_pane

0x9134,	// (0x000169b1) cell_month_view_pane_ParamLimits

0x9134,	// (0x000169b1) cell_month_view_pane

0xef86,	// (0x0001c803) frm_month_g1

0x9159,	// (0x000169d6) frm_month_g2

0x916a,	// (0x000169e7) frm_month_g3

0x917b,	// (0x000169f8) frm_month_g4

0x918c,	// (0x00016a09) frm_month_g5

0x919d,	// (0x00016a1a) frm_month_g6

0x91ae,	// (0x00016a2b) frm_month_g7

0xef93,	// (0x0001c810) frm_month_g8

0x91bf,	// (0x00016a3c) frm_month_g9

0x91cf,	// (0x00016a4c) frm_month_g10

0x91df,	// (0x00016a5c) frm_month_g11

0x91ef,	// (0x00016a6c) frm_month_g12

0x91ff,	// (0x00016a7c) frm_month_g13

0x920f,	// (0x00016a8c) frm_month_g14

0x921f,	// (0x00016a9c) frm_month_g15

0x9231,	// (0x00016aae) frm_month_g16

0x000f,

0xff16,	// (0x0001d793) frm_month_g

0xefa0,	// (0x0001c81d) cell_top_day_name_pane_t1

0x9243,	// (0x00016ac0) cell_area_left_week_number_pane_g1

0x924f,	// (0x00016acc) cell_area_left_week_number_pane_t1

0xc6ec,	// (0x00019f69) cell_month_view_pane_g1

0x9262,	// (0x00016adf) cell_month_view_pane_t1

0x95b6,	// (0x00016e33) main_fps_pane

0xe4c2,	// (0x0001bd3f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe4c2,	// (0x0001bd3f) cmail_ddmenu_btn02_pane_cp1

0xe4de,	// (0x0001bd5b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe4de,	// (0x0001bd5b) cmail_ddmenu_btn02_pane_cp2

0x897a,	// (0x000161f7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x897a,	// (0x000161f7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3b,	// (0x0001d6b8) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3b,	// (0x0001d6b8) cmail_ddmenu_btn02_pane_g

0x8998,	// (0x00016215) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8998,	// (0x00016215) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe40,	// (0x0001d6bd) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe40,	// (0x0001d6bd) cmail_ddmenu_btn02_pane_t

0x9275,	// (0x00016af2) fps_text_pane_ParamLimits

0x9275,	// (0x00016af2) fps_text_pane

0x928b,	// (0x00016b08) main_fps_pane_g1_ParamLimits

0x928b,	// (0x00016b08) main_fps_pane_g1

0x92a1,	// (0x00016b1e) wait_bar_pane_cp010_ParamLimits

0x92a1,	// (0x00016b1e) wait_bar_pane_cp010

0x92b2,	// (0x00016b2f) fps_text_pane_t1_ParamLimits

0x92b2,	// (0x00016b2f) fps_text_pane_t1

0xeeb1,	// (0x0001c72e) cam4_image_uncrop_pane_g1

0xeeba,	// (0x0001c737) cam4_image_uncrop_pane_g2

0x5deb,	// (0x00013668) cam4_image_uncrop_pane_g3

0x5df4,	// (0x00013671) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0001d17e) cam4_image_uncrop_pane_g

0x90b5,	// (0x00016932) dia3_listrow_pane_ParamLimits

0x95b6,	// (0x00016e33) main_phob2_pane

0x8475,	// (0x00015cf2) cell_tport_appsw_pane_cp02_ParamLimits

0x8475,	// (0x00015cf2) cell_tport_appsw_pane_cp02

0x8485,	// (0x00015d02) cell_tport_appsw_pane_cp03_ParamLimits

0x8485,	// (0x00015d02) cell_tport_appsw_pane_cp03

0x95b6,	// (0x00016e33) phob2_contact_card_pane

0x95b6,	// (0x00016e33) phob2_listscroll_pane

0xefb3,	// (0x0001c830) phob2_list_pane

0xefbb,	// (0x0001c838) scroll_pane_cp034

0x92ca,	// (0x00016b47) phob2_cc_data_pane_ParamLimits

0x92ca,	// (0x00016b47) phob2_cc_data_pane

0x92e7,	// (0x00016b64) phob2_cc_listscroll_pane_ParamLimits

0x92e7,	// (0x00016b64) phob2_cc_listscroll_pane

0x8ebd,	// (0x0001673a) list_double_large_graphic_phob2_pane_ParamLimits

0x8ebd,	// (0x0001673a) list_double_large_graphic_phob2_pane

0x9303,	// (0x00016b80) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9303,	// (0x00016b80) list_double_large_graphic_phob2_pane_g1

0x9319,	// (0x00016b96) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9319,	// (0x00016b96) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff37,	// (0x0001d7b4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff37,	// (0x0001d7b4) list_double_large_graphic_phob2_pane_g

0x9325,	// (0x00016ba2) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9325,	// (0x00016ba2) list_double_large_graphic_phob2_pane_t1

0x933b,	// (0x00016bb8) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x933b,	// (0x00016bb8) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3c,	// (0x0001d7b9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3c,	// (0x0001d7b9) list_double_large_graphic_phob2_pane_t

0x95b6,	// (0x00016e33) list_highlight_pane_cp024

0x9350,	// (0x00016bcd) phob2_cc_button_pane

0x9358,	// (0x00016bd5) phob2_cc_data_pane_g1_ParamLimits

0x9358,	// (0x00016bd5) phob2_cc_data_pane_g1

0x936d,	// (0x00016bea) phob2_cc_data_pane_g2_ParamLimits

0x936d,	// (0x00016bea) phob2_cc_data_pane_g2

0x0001,

0xff41,	// (0x0001d7be) phob2_cc_data_pane_g_ParamLimits

0xff41,	// (0x0001d7be) phob2_cc_data_pane_g

0x937d,	// (0x00016bfa) phob2_cc_data_pane_t1_ParamLimits

0x937d,	// (0x00016bfa) phob2_cc_data_pane_t1

0x9395,	// (0x00016c12) phob2_cc_data_pane_t2_ParamLimits

0x9395,	// (0x00016c12) phob2_cc_data_pane_t2

0x93ad,	// (0x00016c2a) phob2_cc_data_pane_t3_ParamLimits

0x93ad,	// (0x00016c2a) phob2_cc_data_pane_t3

0x0002,

0xff46,	// (0x0001d7c3) phob2_cc_data_pane_t_ParamLimits

0xff46,	// (0x0001d7c3) phob2_cc_data_pane_t

0xefc3,	// (0x0001c840) phob2_cc_list_pane_ParamLimits

0xefc3,	// (0x0001c840) phob2_cc_list_pane

0xde5e,	// (0x0001b6db) scroll_pane_cp035_ParamLimits

0xde5e,	// (0x0001b6db) scroll_pane_cp035

0x9609,	// (0x00016e86) bg_button_pane_cp033

0xefcf,	// (0x0001c84c) phob2_cc_button_pane_g1

0xefdb,	// (0x0001c858) phob2_cc_button_pane_t1

0xeff0,	// (0x0001c86d) phob2_cc_button_pane_t2

0x0001,

0xff4d,	// (0x0001d7ca) phob2_cc_button_pane_t

0x93c5,	// (0x00016c42) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x93c5,	// (0x00016c42) list_double_large_graphic_phob2_cc_pane

0x93f3,	// (0x00016c70) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x93f3,	// (0x00016c70) list_double_large_graphic_phob2_cc_pane_g1

0x93ff,	// (0x00016c7c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x93ff,	// (0x00016c7c) list_double_large_graphic_phob2_cc_pane_g2

0x940b,	// (0x00016c88) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x940b,	// (0x00016c88) list_double_large_graphic_phob2_cc_pane_g3

0x9417,	// (0x00016c94) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9417,	// (0x00016c94) list_double_large_graphic_phob2_cc_pane_g4

0x9423,	// (0x00016ca0) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9423,	// (0x00016ca0) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff52,	// (0x0001d7cf) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff52,	// (0x0001d7cf) list_double_large_graphic_phob2_cc_pane_g

0x942f,	// (0x00016cac) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x942f,	// (0x00016cac) list_double_large_graphic_phob2_cc_pane_t1

0x9458,	// (0x00016cd5) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9458,	// (0x00016cd5) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5d,	// (0x0001d7da) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5d,	// (0x0001d7da) list_double_large_graphic_phob2_cc_pane_t

0xf002,	// (0x0001c87f) list_highlight_pane_cp025_ParamLimits

0xf002,	// (0x0001c87f) list_highlight_pane_cp025

0x9609,	// (0x00016e86) bg_button_pane_cp033_ParamLimits

0xefcf,	// (0x0001c84c) phob2_cc_button_pane_g1_ParamLimits

0xefdb,	// (0x0001c858) phob2_cc_button_pane_t1_ParamLimits

0xeff0,	// (0x0001c86d) phob2_cc_button_pane_t2_ParamLimits

0xff4d,	// (0x0001d7ca) phob2_cc_button_pane_t_ParamLimits

0x0e7c,	// (0x0000e6f9) popup_wgtman_window

0xdf61,	// (0x0001b7de) scroll_pane_cp038

0x8e36,	// (0x000166b3) wgtman_btn_pane_cp_01_ParamLimits

0x8e36,	// (0x000166b3) wgtman_btn_pane_cp_01

0xf010,	// (0x0001c88d) wgtman_content_pane

0xf019,	// (0x0001c896) wgtman_heading_pane

0x95b6,	// (0x00016e33) bg_heading_pane_cp02

0xf022,	// (0x0001c89f) wgtman_heading_pane_g1

0xf02a,	// (0x0001c8a7) wgtman_heading_pane_t1

0xf038,	// (0x0001c8b5) scroll_pane_cp036

0xf040,	// (0x0001c8bd) wgtman_list_pane

0xe542,	// (0x0001bdbf) wgtman_list_pane_t1_ParamLimits

0xe542,	// (0x0001bdbf) wgtman_list_pane_t1

0xd17a,	// (0x0001a9f7) cam4_grid_pane

0x6aae,	// (0x0001432b) bg_button_pane_cp015_ParamLimits

0x6abe,	// (0x0001433b) bg_button_pane_cp016_ParamLimits

0x6ad0,	// (0x0001434d) bg_button_pane_cp017_ParamLimits

0x6b20,	// (0x0001439d) popup_vitu2_query_window_g3_ParamLimits

0x6b20,	// (0x0001439d) popup_vitu2_query_window_g3

0x6bd3,	// (0x00014450) popup_vitu2_query_window_t6_ParamLimits

0x6bd3,	// (0x00014450) popup_vitu2_query_window_t6

0x6bfe,	// (0x0001447b) popup_vitu2_query_window_t7_ParamLimits

0x6bfe,	// (0x0001447b) popup_vitu2_query_window_t7

0xeeb1,	// (0x0001c72e) cam4_grid_pane_g1

0xeeba,	// (0x0001c737) cam4_grid_pane_g2

0xf048,	// (0x0001c8c5) cam4_grid_pane_g3

0xf051,	// (0x0001c8ce) cam4_grid_pane_g4

0x0003,

0xff62,	// (0x0001d7df) cam4_grid_pane_g

0x1d7e,	// (0x0000f5fb) aid_placing_vt_slider_lsc_ParamLimits

0x1fee,	// (0x0000f86b) vidtel_button_pane_ParamLimits

0x1fee,	// (0x0000f86b) vidtel_button_pane

0x95b6,	// (0x00016e33) bg_button_pane_cp034

0x9481,	// (0x00016cfe) vidtel_button_pane_g1

0x9489,	// (0x00016d06) vidtel_button_pane_t1

0xd512,	// (0x0001ad8f) aid_size_vtel_slider_touch

0xde5e,	// (0x0001b6db) scroll_pane_cp039

0xdf90,	// (0x0001b80d) ncim_query_button_pane_cp01_ParamLimits

0xdfaf,	// (0x0001b82c) ncimui_query_pane_g1_ParamLimits

0x9609,	// (0x00016e86) input_focus_pane_cp012_ParamLimits

0xdfd4,	// (0x0001b851) ncim_query_entry_pane_t1_ParamLimits

0xde5e,	// (0x0001b6db) scroll_pane_cp039_ParamLimits

0xa978,	// (0x000181f5) navi_pane_bcale_mc_g1

0xa980,	// (0x000181fd) navi_pane_bcale_mc_t1

0xe527,	// (0x0001bda4) main_sp_fs_email_pane_g1

0xe533,	// (0x0001bdb0) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0001d575) main_sp_fs_email_pane_g

0xe9eb,	// (0x0001c268) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9eb,	// (0x0001c268) list_single_cale_mrui_row_pane_g3

0x89b8,	// (0x00016235) list_single_recal_day_pane_g5_event_pane

0xeb54,	// (0x0001c3d1) list_single_recal_day_pane_g7

0xf05a,	// (0x0001c8d7) list_recal_day_event_pane_cp01

0xf063,	// (0x0001c8e0) list_recal_vselct_arw_lo_pane_cp01

0xf06b,	// (0x0001c8e8) list_recal_vselct_arw_up_pane_cp01

0xf073,	// (0x0001c8f0) list_recal_vselct_pane_cp01

0xd584,	// (0x0001ae01) list_recal_day_event_pane_cp01_g1

0xf07d,	// (0x0001c8fa) list_recal_day_event_pane_cp01_t1

0xeb5c,	// (0x0001c3d9) list_single_recal_day_pane_t1_ParamLimits

0x89ce,	// (0x0001624b) list_single_recal_day_pane_t2_ParamLimits

0xfe50,	// (0x0001d6cd) list_single_recal_day_pane_t_ParamLimits

0x9c83,	// (0x00017500) bg_notes_pane_ParamLimits

0x9d2e,	// (0x000175ab) list_notes_pane_ParamLimits

0x1177,	// (0x0000e9f4) scroll_pane_cp06_ParamLimits

0x9d6e,	// (0x000175eb) main_notes_pane_ParamLimits

0x95b6,	// (0x00016e33) main_welc_pane

0x949f,	// (0x00016d1c) main_welc_body_pane_ParamLimits

0x949f,	// (0x00016d1c) main_welc_body_pane

0x94bb,	// (0x00016d38) main_welc_opti_pane_ParamLimits

0x94bb,	// (0x00016d38) main_welc_opti_pane

0x94f8,	// (0x00016d75) main_welc_pane_t1_ParamLimits

0x94f8,	// (0x00016d75) main_welc_pane_t1

0x9512,	// (0x00016d8f) main_welc_body_row_pane_ParamLimits

0x9512,	// (0x00016d8f) main_welc_body_row_pane

0xce93,	// (0x0001a710) main_welc_opti_row_pane_ParamLimits

0xce93,	// (0x0001a710) main_welc_opti_row_pane

0xf08b,	// (0x0001c908) main_welc_opti_row_pane_g1

0x9525,	// (0x00016da2) main_welc_opti_row_pane_t1

0xf093,	// (0x0001c910) main_welc_body_row_pane_t1

0xed95,	// (0x0001c612) popup_notif_wgt_heading_pane

0xedaf,	// (0x0001c62c) aid_size_list_notif_wgt_del_ParamLimits

0xedbc,	// (0x0001c639) list_notif_wgt_row_pane_g1_ParamLimits

0xedc8,	// (0x0001c645) list_notif_wgt_row_pane_g2_ParamLimits

0xeddc,	// (0x0001c659) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb7,	// (0x0001d734) list_notif_wgt_row_pane_g_ParamLimits

0xede9,	// (0x0001c666) list_notif_wgt_row_pane_t1_ParamLimits

0xedff,	// (0x0001c67c) list_notif_wgt_row_pane_t2_ParamLimits

0xee11,	// (0x0001c68e) list_notif_wgt_row_pane_t3_ParamLimits

0xfebe,	// (0x0001d73b) list_notif_wgt_row_pane_t_ParamLimits

0x8ece,	// (0x0001674b) listrow_wgtman_pane_g1_ParamLimits

0x8edb,	// (0x00016758) listrow_wgtman_pane_g2_ParamLimits

0xfee7,	// (0x0001d764) listrow_wgtman_pane_g_ParamLimits

0x8ef3,	// (0x00016770) listrow_wgtman_pane_t1_ParamLimits

0x8f0b,	// (0x00016788) listrow_wgtman_pane_t2_ParamLimits

0xfeec,	// (0x0001d769) listrow_wgtman_pane_t_ParamLimits

0x8f31,	// (0x000167ae) wait_bar_pane_cp09_ParamLimits

0x95b6,	// (0x00016e33) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0001c91f) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0001c927) popup_notif_wgt_heading_pane_t1

0xbfb7,	// (0x00019834) main_vids_pane

0x95b6,	// (0x00016e33) vids_listscroll_pane

0x9534,	// (0x00016db1) scroll_pane_cp040

0x95b6,	// (0x00016e33) vids_list_pane

0x953f,	// (0x00016dbc) vids_list_double_pane_ParamLimits

0x953f,	// (0x00016dbc) vids_list_double_pane

0x954c,	// (0x00016dc9) vids_list_double_pane_g1

0x9555,	// (0x00016dd2) vids_list_double_pane_t1

0x9565,	// (0x00016de2) vids_list_double_pane_t2

0x0001,

0xff70,	// (0x0001d7ed) vids_list_double_pane_t

0x9609,	// (0x00016e86) main_ncimui_pane_ParamLimits

0x7704,	// (0x00014f81) main_ncimui_pane_g1_ParamLimits

0x7710,	// (0x00014f8d) main_ncimui_pane_g2_ParamLimits

0x7710,	// (0x00014f8d) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0001d47a) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0001d47a) main_ncimui_pane_g

0x94d2,	// (0x00016d4f) main_welc_pane_g1_ParamLimits

0x94d2,	// (0x00016d4f) main_welc_pane_g1

0x94e5,	// (0x00016d62) main_welc_pane_g2_ParamLimits

0x94e5,	// (0x00016d62) main_welc_pane_g2

0x0001,

0xff6b,	// (0x0001d7e8) main_welc_pane_g_ParamLimits

0xff6b,	// (0x0001d7e8) main_welc_pane_g

0x9c83,	// (0x00017500) listscroll_mce_pane_ParamLimits

0x3052,	// (0x000108cf) wait_bar_pane_cp10

0xbf9d,	// (0x0001981a) main_cale_day_pane_ParamLimits

0xbf9d,	// (0x0001981a) main_cale_week_pane_ParamLimits

0x9c83,	// (0x00017500) main_messa_pane_ParamLimits

0x5202,	// (0x00012a7f) main_clock2_btn_pane_ParamLimits

0x5202,	// (0x00012a7f) main_clock2_btn_pane

0xc8e8,	// (0x0001a165) main_clock2_btn_pane_cp01_ParamLimits

0xc8e8,	// (0x0001a165) main_clock2_btn_pane_cp01

0xe9a6,	// (0x0001c223) list_cale_mrui_pane_ParamLimits

0xee45,	// (0x0001c6c2) main_cf0_pane_g2

0x0001,

0xfec5,	// (0x0001d742) main_cf0_pane_g

0x90cf,	// (0x0001694c) area_left_week_number_pane_ParamLimits

0x90db,	// (0x00016958) area_top_day_name_pane_ParamLimits

0x90ec,	// (0x00016969) frame_month_view_pane_ParamLimits

0xef78,	// (0x0001c7f5) grid_month_view_pane_ParamLimits

0xef86,	// (0x0001c803) frm_month_g1_ParamLimits

0x9159,	// (0x000169d6) frm_month_g2_ParamLimits

0x916a,	// (0x000169e7) frm_month_g3_ParamLimits

0x917b,	// (0x000169f8) frm_month_g4_ParamLimits

0x918c,	// (0x00016a09) frm_month_g5_ParamLimits

0x919d,	// (0x00016a1a) frm_month_g6_ParamLimits

0x91ae,	// (0x00016a2b) frm_month_g7_ParamLimits

0xef93,	// (0x0001c810) frm_month_g8_ParamLimits

0x91bf,	// (0x00016a3c) frm_month_g9_ParamLimits

0x91cf,	// (0x00016a4c) frm_month_g10_ParamLimits

0x91df,	// (0x00016a5c) frm_month_g11_ParamLimits

0x91ef,	// (0x00016a6c) frm_month_g12_ParamLimits

0x91ff,	// (0x00016a7c) frm_month_g13_ParamLimits

0x920f,	// (0x00016a8c) frm_month_g14_ParamLimits

0x921f,	// (0x00016a9c) frm_month_g15_ParamLimits

0x9231,	// (0x00016aae) frm_month_g16_ParamLimits

0xff16,	// (0x0001d793) frm_month_g_ParamLimits

0xefa0,	// (0x0001c81d) cell_top_day_name_pane_t1_ParamLimits

0x9243,	// (0x00016ac0) cell_area_left_week_number_pane_g1_ParamLimits

0x924f,	// (0x00016acc) cell_area_left_week_number_pane_t1_ParamLimits

0xc6ec,	// (0x00019f69) cell_month_view_pane_g1_ParamLimits

0x9262,	// (0x00016adf) cell_month_view_pane_t1_ParamLimits

0x9c7b,	// (0x000174f8) main_clock2_btn_pane_g1

0xf0b8,	// (0x0001c935) main_clock2_btn_pane_t1

0x9609,	// (0x00016e86) listscroll_cmail_pane_ParamLimits

0xe527,	// (0x0001bda4) main_sp_fs_email_pane_g1_ParamLimits

0xe533,	// (0x0001bdb0) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0001d575) main_sp_fs_email_pane_g_ParamLimits

0xead0,	// (0x0001c34d) list_recal_day_pane_ParamLimits

0xeae1,	// (0x0001c35e) mian_recal_day_pane_t1

0x819a,	// (0x00015a17) list_single_dyc_row_text_pane_t4_ParamLimits

0x819a,	// (0x00015a17) list_single_dyc_row_text_pane_t4

0x81d1,	// (0x00015a4e) list_single_dyc_row_text_pane_t5_ParamLimits

0x81d1,	// (0x00015a4e) list_single_dyc_row_text_pane_t5

0xe5c4,	// (0x0001be41) list_single_dyc_row_text_pane_t6_ParamLimits

0xe5c4,	// (0x0001be41) list_single_dyc_row_text_pane_t6

0x2b83,	// (0x00010400) aid_mgn_list_cale_time_pane

0x9609,	// (0x00016e86) main_gallery2_pane_ParamLimits

0xc8fc,	// (0x0001a179) main_clock2_pane_cp01_t1

0xc90a,	// (0x0001a187) main_clock2_pane_cp01_t3

0x0001,

0xf7d3,	// (0x0001d050) main_clock2_pane_cp01_t

0x14f9,	// (0x0000ed76) cale_week_scroll_pane_g16_ParamLimits

0x14f9,	// (0x0000ed76) cale_week_scroll_pane_g16

0x9fdd,	// (0x0001785a) vorec_slider_pane

0x9489,	// (0x00016d06) vidtel_button_pane_t1_ParamLimits

0x8a73,	// (0x000162f0) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8a85,	// (0x00016302) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8a96,	// (0x00016313) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8a96,	// (0x00016313) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe73,	// (0x0001d6f0) main_fs_bigclock_clock_pane_g_ParamLimits

0x8aa9,	// (0x00016326) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8ac4,	// (0x00016341) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe7c,	// (0x0001d6f9) main_fs_bigclock_clock_pane_t_ParamLimits

0x4a88,	// (0x00012305) main_mup3_lyrics_pane_ParamLimits

0x4a88,	// (0x00012305) main_mup3_lyrics_pane

0x9597,	// (0x00016e14) main_mup3_lyrics_pane_t1_ParamLimits

0x9597,	// (0x00016e14) main_mup3_lyrics_pane_t1

0xcdd3,	// (0x0001a650) aid_main_mp4_pane_t1_area

0xcdd3,	// (0x0001a650) aid_main_mp4_pane_t2_area

0xce7b,	// (0x0001a6f8) main_mp4_pane_g7_ParamLimits

0xce7b,	// (0x0001a6f8) main_mp4_pane_g7

0xce87,	// (0x0001a704) main_mp4_pane_g8_ParamLimits

0xce87,	// (0x0001a704) main_mp4_pane_g8

0x5c5b,	// (0x000134d8) aid_call6_pane_g1_size

0x93df,	// (0x00016c5c) list_double_large_graphic_phob2_other_pane_ParamLimits

0x93df,	// (0x00016c5c) list_double_large_graphic_phob2_other_pane

0xa8cb,	// (0x00018148) list_double_large_graphic_phob2_other_pane_g1

0x95b6,	// (0x00016e33) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Normal
