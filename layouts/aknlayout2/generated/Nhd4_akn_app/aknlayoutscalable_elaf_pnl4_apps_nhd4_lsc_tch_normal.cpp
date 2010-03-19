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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000d9be };

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
0x0db8,	// (0x0000e776) Screen

0x0dc4,	// (0x0000e782) application_window

0x0e00,	// (0x0000e7be) area_bottom_pane_ParamLimits

0x0e00,	// (0x0000e7be) area_bottom_pane

0x0e39,	// (0x0000e7f7) area_top_pane_ParamLimits

0x0e39,	// (0x0000e7f7) area_top_pane

0x93d9,	// (0x00016d97) call_video_uplink_pane_ParamLimits

0x93d9,	// (0x00016d97) call_video_uplink_pane

0x0eae,	// (0x0000e86c) main_pane_ParamLimits

0x0eae,	// (0x0000e86c) main_pane

0xbe22,	// (0x000197e0) context_pane

0x3ebd,	// (0x0001187b) navi_pane

0x3ee5,	// (0x000118a3) popup_cale_events_window_ParamLimits

0x3ee5,	// (0x000118a3) popup_cale_events_window

0xbe35,	// (0x000197f3) popup_mup_playback_window

0x3efd,	// (0x000118bb) signal_pane

0x9ba2,	// (0x00017560) main_browser_pane

0xa936,	// (0x000182f4) main_burst_pane

0x3c1d,	// (0x000115db) main_calc_pane

0xa936,	// (0x000182f4) main_cale_day_pane

0x9ba2,	// (0x00017560) main_cale_month_pane

0xa936,	// (0x000182f4) main_cale_week_pane

0xa936,	// (0x000182f4) main_call_pane

0x9816,	// (0x000171d4) main_call_poc_pane

0xa936,	// (0x000182f4) main_camera_pane

0xa936,	// (0x000182f4) main_chi_dic_pane

0xa7c5,	// (0x00018183) main_clock_pane

0x9816,	// (0x000171d4) main_fmradio_pane

0xa936,	// (0x000182f4) main_graph_messa_pane

0x9816,	// (0x000171d4) main_help_pane

0x9ba2,	// (0x00017560) main_im_pane

0x9a71,	// (0x0001742f) main_image_pane_ParamLimits

0x9a71,	// (0x0001742f) main_image_pane

0x9816,	// (0x000171d4) main_location2_pane

0xa936,	// (0x000182f4) main_location_pane

0x9816,	// (0x000171d4) main_messa_pane

0x9816,	// (0x000171d4) main_mp2_pane

0xa936,	// (0x000182f4) main_mp_pane

0x9816,	// (0x000171d4) main_msg_pane

0x9816,	// (0x000171d4) main_mup_eq_pane

0x9816,	// (0x000171d4) main_mup_pane

0xa936,	// (0x000182f4) main_notes_pane

0x9816,	// (0x000171d4) main_pec_pane

0x9816,	// (0x000171d4) main_phob_pane

0x9816,	// (0x000171d4) main_pinb_pane

0x9816,	// (0x000171d4) main_postcard_pane

0x9816,	// (0x000171d4) main_qdial_pane

0xa936,	// (0x000182f4) main_skin_pane

0x9816,	// (0x000171d4) main_smil2_pane

0xa936,	// (0x000182f4) main_smil_pane

0xa936,	// (0x000182f4) main_video_pane

0xa936,	// (0x000182f4) main_video_tele_pane

0x9a71,	// (0x0001742f) main_viewer_pane_ParamLimits

0x9a71,	// (0x0001742f) main_viewer_pane

0xa936,	// (0x000182f4) main_vorec_pane

0x3c71,	// (0x0001162f) popup_blid_sat_info_window_ParamLimits

0x3c71,	// (0x0001162f) popup_blid_sat_info_window

0x3cc9,	// (0x00011687) popup_dyc_status_message_window_ParamLimits

0x3cc9,	// (0x00011687) popup_dyc_status_message_window

0x3ce1,	// (0x0001169f) popup_grid_large_graphic_window_ParamLimits

0x3ce1,	// (0x0001169f) popup_grid_large_graphic_window

0x3d97,	// (0x00011755) popup_loc_request_window_ParamLimits

0x3d97,	// (0x00011755) popup_loc_request_window

0x3e95,	// (0x00011853) popup_wml_address_window_ParamLimits

0x3e95,	// (0x00011853) popup_wml_address_window

0x3a57,	// (0x00011415) call_muted_g1

0x370f,	// (0x000110cd) popup_call_audio_conf_window_ParamLimits

0x370f,	// (0x000110cd) popup_call_audio_conf_window

0x3a6b,	// (0x00011429) popup_call_audio_first_window_ParamLimits

0x3a6b,	// (0x00011429) popup_call_audio_first_window

0x3ae1,	// (0x0001149f) popup_call_audio_in_window_ParamLimits

0x3ae1,	// (0x0001149f) popup_call_audio_in_window

0x3b1d,	// (0x000114db) popup_call_audio_out_window_ParamLimits

0x3b1d,	// (0x000114db) popup_call_audio_out_window

0x3b57,	// (0x00011515) popup_call_audio_second_window_ParamLimits

0x3b57,	// (0x00011515) popup_call_audio_second_window

0x3bad,	// (0x0001156b) popup_call_audio_wait_window_ParamLimits

0x3bad,	// (0x0001156b) popup_call_audio_wait_window

0x3be2,	// (0x000115a0) popup_number_entry_window_ParamLimits

0x3be2,	// (0x000115a0) popup_number_entry_window

0x9405,	// (0x00016dc3) bg_popup_call_pane_cp05_ParamLimits

0x9405,	// (0x00016dc3) bg_popup_call_pane_cp05

0x9425,	// (0x00016de3) popup_number_entry_window_t1

0x9438,	// (0x00016df6) popup_number_entry_window_t2

0x944a,	// (0x00016e08) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0001caaa) popup_number_entry_window_t

0x945c,	// (0x00016e1a) text_title_cp2

0x946f,	// (0x00016e2d) bg_popup_call_pane_cp_ParamLimits

0x946f,	// (0x00016e2d) bg_popup_call_pane_cp

0x947d,	// (0x00016e3b) call_thumbnail_pane

0x9485,	// (0x00016e43) popup_call_audio_in_window_g1_ParamLimits

0x9485,	// (0x00016e43) popup_call_audio_in_window_g1

0x9491,	// (0x00016e4f) popup_call_audio_in_window_g2_ParamLimits

0x9491,	// (0x00016e4f) popup_call_audio_in_window_g2

0x949d,	// (0x00016e5b) popup_call_audio_in_window_g3_ParamLimits

0x949d,	// (0x00016e5b) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0001cab3) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0001cab3) popup_call_audio_in_window_g

0x94a9,	// (0x00016e67) popup_call_audio_in_window_t1_ParamLimits

0x94a9,	// (0x00016e67) popup_call_audio_in_window_t1

0x94c4,	// (0x00016e82) popup_call_audio_in_window_t2_ParamLimits

0x94c4,	// (0x00016e82) popup_call_audio_in_window_t2

0x94df,	// (0x00016e9d) popup_call_audio_in_window_t3_ParamLimits

0x94df,	// (0x00016e9d) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0001caba) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0001caba) popup_call_audio_in_window_t

0x946f,	// (0x00016e2d) bg_popup_call_pane_cp01_ParamLimits

0x946f,	// (0x00016e2d) bg_popup_call_pane_cp01

0x947d,	// (0x00016e3b) call_thumbnail_pane_cp02

0x94f2,	// (0x00016eb0) call_type_pane_cp022

0x94fa,	// (0x00016eb8) popup_call_audio_out_window_g1_ParamLimits

0x94fa,	// (0x00016eb8) popup_call_audio_out_window_g1

0x950c,	// (0x00016eca) popup_call_audio_out_window_g2_ParamLimits

0x950c,	// (0x00016eca) popup_call_audio_out_window_g2

0x9518,	// (0x00016ed6) popup_call_audio_out_window_g3_ParamLimits

0x9518,	// (0x00016ed6) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0001cac1) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0001cac1) popup_call_audio_out_window_g

0x952a,	// (0x00016ee8) popup_call_audio_out_window_t1_ParamLimits

0x952a,	// (0x00016ee8) popup_call_audio_out_window_t1

0x9542,	// (0x00016f00) popup_call_audio_out_window_t2_ParamLimits

0x9542,	// (0x00016f00) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0001cac8) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0001cac8) popup_call_audio_out_window_t

0x9557,	// (0x00016f15) bg_popup_call_pane_ParamLimits

0x9557,	// (0x00016f15) bg_popup_call_pane

0x1065,	// (0x0000ea23) call_thumbnail_pane_cp_ParamLimits

0x1065,	// (0x0000ea23) call_thumbnail_pane_cp

0x95db,	// (0x00016f99) call_type_pane_cp01_ParamLimits

0x95db,	// (0x00016f99) call_type_pane_cp01

0x961f,	// (0x00016fdd) popup_call_audio_first_window_g1_ParamLimits

0x961f,	// (0x00016fdd) popup_call_audio_first_window_g1

0x966b,	// (0x00017029) popup_call_audio_first_window_g2_ParamLimits

0x966b,	// (0x00017029) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0001cacd) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0001cacd) popup_call_audio_first_window_g

0x96af,	// (0x0001706d) popup_call_audio_first_window_t1_ParamLimits

0x96af,	// (0x0001706d) popup_call_audio_first_window_t1

0x975b,	// (0x00017119) popup_call_audio_first_window_t4_ParamLimits

0x975b,	// (0x00017119) popup_call_audio_first_window_t4

0x97e7,	// (0x000171a5) popup_call_audio_first_window_t5_ParamLimits

0x97e7,	// (0x000171a5) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0001cad2) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0001cad2) popup_call_audio_first_window_t

0x9816,	// (0x000171d4) bg_popup_call_pane_cp02

0x9820,	// (0x000171de) call_type_pane_cp023

0x9828,	// (0x000171e6) popup_call_audio_wait_window_g1

0x9830,	// (0x000171ee) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0001cad9) popup_call_audio_wait_window_g

0x9838,	// (0x000171f6) popup_call_audio_wait_window_t3

0x9846,	// (0x00017204) bg_popup_call_pane_cp03_ParamLimits

0x9846,	// (0x00017204) bg_popup_call_pane_cp03

0x98a6,	// (0x00017264) call_thumbnail_pane_cp011_ParamLimits

0x98a6,	// (0x00017264) call_thumbnail_pane_cp011

0x98b2,	// (0x00017270) call_type_pane_cp034_ParamLimits

0x98b2,	// (0x00017270) call_type_pane_cp034

0x98ee,	// (0x000172ac) popup_call_audio_second_window_g1_ParamLimits

0x98ee,	// (0x000172ac) popup_call_audio_second_window_g1

0x992a,	// (0x000172e8) popup_call_audio_second_window_g2_ParamLimits

0x992a,	// (0x000172e8) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0001cade) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0001cade) popup_call_audio_second_window_g

0x9966,	// (0x00017324) popup_call_audio_second_window_t1_ParamLimits

0x9966,	// (0x00017324) popup_call_audio_second_window_t1

0x99e7,	// (0x000173a5) popup_call_audio_second_window_t2_ParamLimits

0x99e7,	// (0x000173a5) popup_call_audio_second_window_t2

0x9a1d,	// (0x000173db) popup_call_audio_second_window_t3_ParamLimits

0x9a1d,	// (0x000173db) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0001cae3) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0001cae3) popup_call_audio_second_window_t

0x9816,	// (0x000171d4) bg_popup_call_pane_cp04

0x9a53,	// (0x00017411) list_conf_pane

0x9a5b,	// (0x00017419) popup_call_audio_conf_window_t1

0x9a69,	// (0x00017427) call_thumbnail_pane_g1

0x9a71,	// (0x0001742f) bg_pinb_pane_ParamLimits

0x9a71,	// (0x0001742f) bg_pinb_pane

0x9a7f,	// (0x0001743d) find_pinb_pane

0x9a88,	// (0x00017446) listscroll_pinb_pane_ParamLimits

0x9a88,	// (0x00017446) listscroll_pinb_pane

0x9a97,	// (0x00017455) pinb_bg_pane_g1

0x1089,	// (0x0000ea47) pinb_bg_pane_g2

0x1095,	// (0x0000ea53) pinb_bg_pane_g3

0x10a1,	// (0x0000ea5f) pinb_bg_pane_g4

0x10ad,	// (0x0000ea6b) pinb_bg_pane_g5

0x10b9,	// (0x0000ea77) pinb_bg_pane_g6

0x10c4,	// (0x0000ea82) pinb_bg_pane_g7

0x10cf,	// (0x0000ea8d) pinb_bg_pane_g8

0x10da,	// (0x0000ea98) pinb_bg_pane_g9

0x10e4,	// (0x0000eaa2) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0001caea) pinb_bg_pane_g

0x10f9,	// (0x0000eab7) grid_pinb_pane

0x1102,	// (0x0000eac0) list_pinb_pane

0x110b,	// (0x0000eac9) scroll_pane_cp01_ParamLimits

0x110b,	// (0x0000eac9) scroll_pane_cp01

0x9aa9,	// (0x00017467) find_pinb_pane_g1_ParamLimits

0x9aa9,	// (0x00017467) find_pinb_pane_g1

0x9ac1,	// (0x0001747f) find_pinb_pane_t1

0x9ad3,	// (0x00017491) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0001cb04) find_pinb_pane_t

0x9ae8,	// (0x000174a6) input_focus_pane_cp01_ParamLimits

0x9ae8,	// (0x000174a6) input_focus_pane_cp01

0x111d,	// (0x0000eadb) cell_pinb_pane_ParamLimits

0x111d,	// (0x0000eadb) cell_pinb_pane

0x114f,	// (0x0000eb0d) cell_pinb_pane_g1_ParamLimits

0x114f,	// (0x0000eb0d) cell_pinb_pane_g1

0x115f,	// (0x0000eb1d) cell_pinb_pane_g2_ParamLimits

0x115f,	// (0x0000eb1d) cell_pinb_pane_g2

0x9af4,	// (0x000174b2) cell_pinb_pane_g3_ParamLimits

0x9af4,	// (0x000174b2) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0001cb09) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0001cb09) cell_pinb_pane_g

0x9816,	// (0x000171d4) grid_highlight_pane_cp01

0x116b,	// (0x0000eb29) list_pinb_item_pane_ParamLimits

0x116b,	// (0x0000eb29) list_pinb_item_pane

0x9816,	// (0x000171d4) list_highlight_pane_cp02

0x9b00,	// (0x000174be) list_pinb_item_pane_g1_ParamLimits

0x9b00,	// (0x000174be) list_pinb_item_pane_g1

0x9b0d,	// (0x000174cb) list_pinb_item_pane_g2_ParamLimits

0x9b0d,	// (0x000174cb) list_pinb_item_pane_g2

0x117f,	// (0x0000eb3d) list_pinb_item_pane_g3_ParamLimits

0x117f,	// (0x0000eb3d) list_pinb_item_pane_g3

0x9b19,	// (0x000174d7) list_pinb_item_pane_g4_ParamLimits

0x9b19,	// (0x000174d7) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0001cb10) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0001cb10) list_pinb_item_pane_g

0x9b25,	// (0x000174e3) list_pinb_item_pane_t1_ParamLimits

0x9b25,	// (0x000174e3) list_pinb_item_pane_t1

0x11ae,	// (0x0000eb6c) calc_display_pane

0x11d6,	// (0x0000eb94) calc_paper_pane

0x11f9,	// (0x0000ebb7) grid_calc_pane

0x9816,	// (0x000171d4) bg_list_pane_cp01

0x1227,	// (0x0000ebe5) clock_g1

0x122f,	// (0x0000ebed) clock_g2

0x0001,

0xf15b,	// (0x0001cb19) clock_g

0x1237,	// (0x0000ebf5) clock_t1_ParamLimits

0x1237,	// (0x0000ebf5) clock_t1

0x124c,	// (0x0000ec0a) clock_t2_ParamLimits

0x124c,	// (0x0000ec0a) clock_t2

0x125e,	// (0x0000ec1c) clock_t3_ParamLimits

0x125e,	// (0x0000ec1c) clock_t3

0x1270,	// (0x0000ec2e) clock_t4_ParamLimits

0x1270,	// (0x0000ec2e) clock_t4

0x1282,	// (0x0000ec40) clock_t5_ParamLimits

0x1282,	// (0x0000ec40) clock_t5

0x1297,	// (0x0000ec55) clock_t6_ParamLimits

0x1297,	// (0x0000ec55) clock_t6

0x12a9,	// (0x0000ec67) clock_t7_ParamLimits

0x12a9,	// (0x0000ec67) clock_t7

0x12bb,	// (0x0000ec79) clock_t8_ParamLimits

0x12bb,	// (0x0000ec79) clock_t8

0x12cf,	// (0x0000ec8d) clock_t9_ParamLimits

0x12cf,	// (0x0000ec8d) clock_t9

0x0008,

0xf160,	// (0x0001cb1e) clock_t_ParamLimits

0xf160,	// (0x0001cb1e) clock_t

0x9b44,	// (0x00017502) popup_clock_analogue_window_cp02

0x9b44,	// (0x00017502) popup_clock_digital_window_cp01

0x9b4c,	// (0x0001750a) listscroll_help_pane

0x9816,	// (0x000171d4) phob_pre_status_pane

0x9b56,	// (0x00017514) grid_qdial_pane

0x9816,	// (0x000171d4) listscroll_mce_pane

0x9b60,	// (0x0001751e) bg_notes_pane

0x9b6a,	// (0x00017528) list_notes_pane

0x12e3,	// (0x0000eca1) scroll_pane_cp06

0x9b74,	// (0x00017532) bg_calc_paper_pane

0x9b88,	// (0x00017546) list_calc_pane

0x9ba2,	// (0x00017560) bg_calc_display_pane

0x12ee,	// (0x0000ecac) calc_display_pane_t1

0x1300,	// (0x0000ecbe) calc_display_pane_t2

0x9bae,	// (0x0001756c) calc_display_pane_t3

0x0002,

0xf173,	// (0x0001cb31) calc_display_pane_t

0x1312,	// (0x0000ecd0) cell_calc_pane_ParamLimits

0x1312,	// (0x0000ecd0) cell_calc_pane

0x9bc0,	// (0x0001757e) bg_calc_paper_pane_g1

0x9bcc,	// (0x0001758a) bg_calc_paper_pane_g2

0x9bd8,	// (0x00017596) bg_calc_paper_pane_g3

0x9be4,	// (0x000175a2) bg_calc_paper_pane_g4

0x9bf0,	// (0x000175ae) bg_calc_paper_pane_g5

0x1347,	// (0x0000ed05) bg_calc_paper_pane_g6

0x1356,	// (0x0000ed14) bg_calc_paper_pane_g7

0x1365,	// (0x0000ed23) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0001cb38) bg_calc_paper_pane_g

0x1378,	// (0x0000ed36) calc_bg_paper_pane_g9

0x138b,	// (0x0000ed49) list_calc_item_pane_ParamLimits

0x138b,	// (0x0000ed49) list_calc_item_pane

0x9bfc,	// (0x000175ba) list_calc_item_pane_g1

0x9c09,	// (0x000175c7) list_calc_item_pane_t1_ParamLimits

0x9c09,	// (0x000175c7) list_calc_item_pane_t1

0x13a1,	// (0x0000ed5f) list_calc_item_pane_t2_ParamLimits

0x13a1,	// (0x0000ed5f) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0001cb49) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0001cb49) list_calc_item_pane_t

0x9c1b,	// (0x000175d9) cell_calc_pane_g1

0x9c25,	// (0x000175e3) grid_highlight_pane_cp02

0x9c47,	// (0x00017605) bg_calc_display_pane_g1

0x9c50,	// (0x0001760e) bg_calc_display_pane_g2

0x9c5a,	// (0x00017618) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0001cb53) bg_calc_display_pane_g

0x13d3,	// (0x0000ed91) cell_qdial_pane_ParamLimits

0x13d3,	// (0x0000ed91) cell_qdial_pane

0x13e7,	// (0x0000eda5) cell_qdial_pane_g1_ParamLimits

0x13e7,	// (0x0000eda5) cell_qdial_pane_g1

0x13fd,	// (0x0000edbb) cell_qdial_pane_g2_ParamLimits

0x13fd,	// (0x0000edbb) cell_qdial_pane_g2

0x9c63,	// (0x00017621) cell_qdial_pane_g3_ParamLimits

0x9c63,	// (0x00017621) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0001cb5a) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0001cb5a) cell_qdial_pane_g

0x1424,	// (0x0000ede2) cell_qdial_pane_t1_ParamLimits

0x1424,	// (0x0000ede2) cell_qdial_pane_t1

0x143c,	// (0x0000edfa) cell_qdial_pane_t2_ParamLimits

0x143c,	// (0x0000edfa) cell_qdial_pane_t2

0x144f,	// (0x0000ee0d) cell_qdial_pane_t3_ParamLimits

0x144f,	// (0x0000ee0d) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0001cb63) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0001cb63) cell_qdial_pane_t

0x9816,	// (0x000171d4) grid_highlight_pane_cp04

0x9c6f,	// (0x0001762d) thumbnail_qdial_pane_ParamLimits

0x9c6f,	// (0x0001762d) thumbnail_qdial_pane

0x9ccb,	// (0x00017689) list_help_pane

0x9cd4,	// (0x00017692) scroll_pane_cp02

0x1462,	// (0x0000ee20) help_list_pane_t1_ParamLimits

0x1462,	// (0x0000ee20) help_list_pane_t1

0x9cdd,	// (0x0001769b) bg_notes_pane_g2

0x9ce5,	// (0x000176a3) bg_notes_pane_g3

0x9ced,	// (0x000176ab) notes_bg_pane_g1

0x9cf5,	// (0x000176b3) notes_bg_pane_g4

0x9cfd,	// (0x000176bb) notes_bg_pane_g5

0x9d05,	// (0x000176c3) notes_bg_pane_g6

0x9d0d,	// (0x000176cb) notes_bg_pane_g7

0x9d15,	// (0x000176d3) notes_bg_pane_g8

0x9d1d,	// (0x000176db) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0001cb81) notes_bg_pane_g

0x9d25,	// (0x000176e3) list_notes_text_pane_ParamLimits

0x9d25,	// (0x000176e3) list_notes_text_pane

0x9d3c,	// (0x000176fa) list_notes_text_pane_g1

0x9d45,	// (0x00017703) list_notes_text_pane_t1

0x9ba2,	// (0x00017560) listscroll_cale_week_pane

0x149f,	// (0x0000ee5d) bg_cale_heading_pane

0x9d64,	// (0x00017722) bg_cale_pane_cp01

0x14b7,	// (0x0000ee75) cale_week_corner_pane

0x14c8,	// (0x0000ee86) cale_week_day_heading_pane

0x14e0,	// (0x0000ee9e) cale_week_scroll_pane_g1

0x14f5,	// (0x0000eeb3) cale_week_scroll_pane_g2

0x1506,	// (0x0000eec4) cale_week_scroll_pane_g3

0x1517,	// (0x0000eed5) cale_week_scroll_pane_g4

0x1528,	// (0x0000eee6) cale_week_scroll_pane_g5

0x153b,	// (0x0000eef9) cale_week_scroll_pane_g6

0x154e,	// (0x0000ef0c) cale_week_scroll_pane_g7

0x1561,	// (0x0000ef1f) cale_week_scroll_pane_g8

0x1574,	// (0x0000ef32) cale_week_scroll_pane_g9

0x1585,	// (0x0000ef43) cale_week_scroll_pane_g10

0x1596,	// (0x0000ef54) cale_week_scroll_pane_g11

0x15a7,	// (0x0000ef65) cale_week_scroll_pane_g12

0x15b8,	// (0x0000ef76) cale_week_scroll_pane_g13

0x15c9,	// (0x0000ef87) cale_week_scroll_pane_g14

0x15da,	// (0x0000ef98) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0001cb90) cale_week_scroll_pane_g

0x15eb,	// (0x0000efa9) cale_week_time_pane

0x15fe,	// (0x0000efbc) grid_cale_week_pane

0x1613,	// (0x0000efd1) scroll_pane_cp08

0x162d,	// (0x0000efeb) cell_cale_week_pane_ParamLimits

0x162d,	// (0x0000efeb) cell_cale_week_pane

0x166d,	// (0x0000f02b) cale_week_day_heading_pane_t1

0x1681,	// (0x0000f03f) cale_week_day_heading_pane_t2

0x1695,	// (0x0000f053) cale_week_day_heading_pane_t3

0x16a9,	// (0x0000f067) cale_week_day_heading_pane_t4

0x16bd,	// (0x0000f07b) cale_week_day_heading_pane_t5

0x16d1,	// (0x0000f08f) cale_week_day_heading_pane_t6

0x16e7,	// (0x0000f0a5) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0001cbaf) cale_week_day_heading_pane_t

0x9d8f,	// (0x0001774d) bg_cale_side_pane

0x16fb,	// (0x0000f0b9) cale_week_time_pane_t1

0x1713,	// (0x0000f0d1) cale_week_time_pane_t2

0x172b,	// (0x0000f0e9) cale_week_time_pane_t3

0x1743,	// (0x0000f101) cale_week_time_pane_t4

0x175b,	// (0x0000f119) cale_week_time_pane_t5

0x1773,	// (0x0000f131) cale_week_time_pane_t6

0x178b,	// (0x0000f149) cale_week_time_pane_t7

0x17a3,	// (0x0000f161) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0001cbbe) cale_week_time_pane_t

0x17bb,	// (0x0000f179) cell_cale_week_pane_g2

0x17d4,	// (0x0000f192) cell_cale_week_pane_g3_ParamLimits

0x17d4,	// (0x0000f192) cell_cale_week_pane_g3

0x9d9d,	// (0x0001775b) grid_highlight_pane_cp07

0x9da5,	// (0x00017763) listscroll_gms_pane

0x9daf,	// (0x0001776d) grid_gms_pane

0x9db8,	// (0x00017776) listscroll_gms_pane_g1

0x9dc0,	// (0x0001777e) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0001cbcf) listscroll_gms_pane_g

0x17ec,	// (0x0000f1aa) scroll_pane_cp010

0x17f7,	// (0x0000f1b5) cell_gms_pane_ParamLimits

0x17f7,	// (0x0000f1b5) cell_gms_pane

0x180a,	// (0x0000f1c8) cell_gms_pane_g1

0x9dc8,	// (0x00017786) cell_gms_pane_g2

0x9d3c,	// (0x000176fa) cell_gms_pane_g3

0x9dd0,	// (0x0001778e) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0001cbd4) cell_gms_pane_g

0x9dd9,	// (0x00017797) grid_highlight_pane_cp09

0x39ff,	// (0x000113bd) phob_pre_status_pane_g1

0x3a07,	// (0x000113c5) phob_pre_status_pane_g2

0x3a0f,	// (0x000113cd) phob_pre_status_pane_g3

0x3a17,	// (0x000113d5) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0001cfc3) phob_pre_status_pane_g

0x3a29,	// (0x000113e7) phob_pre_status_pane_t1

0x3a37,	// (0x000113f5) phob_pre_status_pane_t2

0x3a47,	// (0x00011405) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0001cfce) phob_pre_status_pane_t

0x9816,	// (0x000171d4) bg_list_pane_cp05

0x9de9,	// (0x000177a7) grid_vorec_pane

0x9df1,	// (0x000177af) vorec_t1

0x9dff,	// (0x000177bd) vorec_t2

0x9e0d,	// (0x000177cb) vorec_t3

0x9e1b,	// (0x000177d9) vorec_t4

0x9e29,	// (0x000177e7) vorec_t5

0x9e37,	// (0x000177f5) vorec_t6

0x0006,

0xf21f,	// (0x0001cbdd) vorec_t

0x9e53,	// (0x00017811) wait_bar_pane_cp01

0x9e5b,	// (0x00017819) cell_vorec_pane_ParamLimits

0x9e5b,	// (0x00017819) cell_vorec_pane

0x9e6e,	// (0x0001782c) cell_vorec_pane_g1

0x9816,	// (0x000171d4) grid_highlight_pane_cp05

0x182a,	// (0x0000f1e8) cams_zoom_pane

0x1839,	// (0x0000f1f7) image_vga_pane

0x1853,	// (0x0000f211) main_camera_pane_g1

0x1865,	// (0x0000f223) main_camera_pane_g2

0x1877,	// (0x0000f235) main_camera_pane_g3

0x1889,	// (0x0000f247) main_camera_pane_g4

0x189b,	// (0x0000f259) main_camera_pane_g5

0x18ad,	// (0x0000f26b) main_camera_pane_g6

0x18bf,	// (0x0000f27d) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0001cbec) main_camera_pane_g

0x18d1,	// (0x0000f28f) main_camera_pane_t1

0x18e7,	// (0x0000f2a5) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0001cbfd) main_camera_pane_t

0x1923,	// (0x0000f2e1) cams_zoom_pane_cp_ParamLimits

0x1923,	// (0x0000f2e1) cams_zoom_pane_cp

0x194b,	// (0x0000f309) image_cif_pane_ParamLimits

0x194b,	// (0x0000f309) image_cif_pane

0x1986,	// (0x0000f344) image_subqcif_pane

0x198e,	// (0x0000f34c) main_video_pane_g1_ParamLimits

0x198e,	// (0x0000f34c) main_video_pane_g1

0x19b2,	// (0x0000f370) main_video_pane_g2_ParamLimits

0x19b2,	// (0x0000f370) main_video_pane_g2

0x19e8,	// (0x0000f3a6) main_video_pane_g3_ParamLimits

0x19e8,	// (0x0000f3a6) main_video_pane_g3

0x1a18,	// (0x0000f3d6) main_video_pane_g4_ParamLimits

0x1a18,	// (0x0000f3d6) main_video_pane_g4

0x1a48,	// (0x0000f406) main_video_pane_g5_ParamLimits

0x1a48,	// (0x0000f406) main_video_pane_g5

0x9e84,	// (0x00017842) main_video_pane_g6_ParamLimits

0x9e84,	// (0x00017842) main_video_pane_g6

0x0006,

0xf244,	// (0x0001cc02) main_video_pane_g_ParamLimits

0xf244,	// (0x0001cc02) main_video_pane_g

0x1a73,	// (0x0000f431) main_video_pane_t1_ParamLimits

0x1a73,	// (0x0000f431) main_video_pane_t1

0x9e9e,	// (0x0001785c) cams_zoom_pane_g1

0x9ea7,	// (0x00017865) cams_zoom_pane_g2

0x9eb0,	// (0x0001786e) cams_zoom_pane_g3

0x9eb9,	// (0x00017877) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0001cc11) cams_zoom_pane_g

0x1ad0,	// (0x0000f48e) grid_cams_pane

0x1aea,	// (0x0000f4a8) linegrid_cams_pane

0x1afd,	// (0x0000f4bb) cell_cams_pane_ParamLimits

0x1afd,	// (0x0000f4bb) cell_cams_pane

0x9ec2,	// (0x00017880) cams_burst_image_pane

0x9eca,	// (0x00017888) cell_cams_pane_g1

0x9816,	// (0x000171d4) grid_highlight_pane_cp03

0x9c1b,	// (0x000175d9) mp_bg_pane_g1

0x9816,	// (0x000171d4) bg_list_pane_cp03

0xbcfa,	// (0x000196b8) bg_mp_pane

0xbd02,	// (0x000196c0) grid_mp_pane

0xbd0a,	// (0x000196c8) media_player_g1

0xbd12,	// (0x000196d0) media_player_t1

0xbd20,	// (0x000196de) media_player_t2

0xbd2e,	// (0x000196ec) media_player_t3

0xbd3c,	// (0x000196fa) media_player_t4

0xbd4a,	// (0x00019708) media_player_t5

0xbd58,	// (0x00019716) media_player_t6

0xbd66,	// (0x00019724) media_player_t7

0x0006,

0xf5ef,	// (0x0001cfad) media_player_t

0xbd74,	// (0x00019732) wait_bar_pane_cp02

0xf5d4,	// (0x0001cf92) main_usb_pane_t

0x39f6,	// (0x000113b4) cell_mp_pane

0x9c1b,	// (0x000175d9) cell_mp_pane_g1

0x9816,	// (0x000171d4) grid_highlight_pane_cp06

0x9f8f,	// (0x0001794d) grid_skin_colour_pane

0x9f97,	// (0x00017955) list_highlight_pane_cp03

0x1b6f,	// (0x0000f52d) skin_g1

0x9f9f,	// (0x0001795d) skin_t1

0x9fae,	// (0x0001796c) skin_t2

0x0001,

0xf288,	// (0x0001cc46) skin_t

0x1b77,	// (0x0000f535) cell_skin_colour_pane_ParamLimits

0x1b77,	// (0x0000f535) cell_skin_colour_pane

0x9fbc,	// (0x0001797a) cell_skin_colour_pane_g1

0x1bf0,	// (0x0000f5ae) call_video_g1_ParamLimits

0x1bf0,	// (0x0000f5ae) call_video_g1

0x1c0c,	// (0x0000f5ca) call_video_g2_ParamLimits

0x1c0c,	// (0x0000f5ca) call_video_g2

0x0001,

0xf28d,	// (0x0001cc4b) call_video_g_ParamLimits

0xf28d,	// (0x0001cc4b) call_video_g

0x1c5e,	// (0x0000f61c) call_video_uplink_pane_cp1_ParamLimits

0x1c5e,	// (0x0000f61c) call_video_uplink_pane_cp1

0x9fce,	// (0x0001798c) call_video_uplink_pane_cp2

0x1cfd,	// (0x0000f6bb) video_down_crop_pane_ParamLimits

0x1cfd,	// (0x0000f6bb) video_down_crop_pane

0x1de6,	// (0x0000f7a4) video_down_pane_ParamLimits

0x1de6,	// (0x0000f7a4) video_down_pane

0x9fd6,	// (0x00017994) video_down_subqcif_pane_ParamLimits

0x9fd6,	// (0x00017994) video_down_subqcif_pane

0x9fee,	// (0x000179ac) video_down_subqcif_pane_cp_ParamLimits

0x9fee,	// (0x000179ac) video_down_subqcif_pane_cp

0xa012,	// (0x000179d0) im_reading_pane_ParamLimits

0xa012,	// (0x000179d0) im_reading_pane

0x1ef4,	// (0x0000f8b2) im_writing_pane_ParamLimits

0x1ef4,	// (0x0000f8b2) im_writing_pane

0x1f0a,	// (0x0000f8c8) im_reading_pane_t1

0xa02c,	// (0x000179ea) list_im_pane

0xa03d,	// (0x000179fb) scroll_pane_cp07

0x1f46,	// (0x0000f904) im_writing_pane_t1_ParamLimits

0x1f46,	// (0x0000f904) im_writing_pane_t1

0xa056,	// (0x00017a14) im_writing_pane_t2_ParamLimits

0xa056,	// (0x00017a14) im_writing_pane_t2

0x0001,

0xf297,	// (0x0001cc55) im_writing_pane_t_ParamLimits

0xf297,	// (0x0001cc55) im_writing_pane_t

0x9816,	// (0x000171d4) input_focus_pane_cp04

0x9816,	// (0x000171d4) input_focus_pane_cp05

0x1f5b,	// (0x0000f919) list_im_single_pane_ParamLimits

0x1f5b,	// (0x0000f919) list_im_single_pane

0x1f71,	// (0x0000f92f) list_single_im_pane_t1

0x39b6,	// (0x00011374) blid_accuracy_pane

0x39be,	// (0x0001137c) blid_compass_pane

0x39c8,	// (0x00011386) main_location_t1

0x39d8,	// (0x00011396) main_location_t2

0x39e8,	// (0x000113a6) main_location_t3

0x0002,

0xf5fe,	// (0x0001cfbc) main_location_t

0x9816,	// (0x000171d4) aid_levels_location

0x9c1b,	// (0x000175d9) blid_accuracy_pane_g1

0x9c1b,	// (0x000175d9) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0001ccb7) blid_accuracy_pane_g

0xa09e,	// (0x00017a5c) wml_content_pane

0xa0dc,	// (0x00017a9a) wml_button_pane_ParamLimits

0xa0dc,	// (0x00017a9a) wml_button_pane

0x1f80,	// (0x0000f93e) wml_list_single_large_pane_ParamLimits

0x1f80,	// (0x0000f93e) wml_list_single_large_pane

0x1f97,	// (0x0000f955) wml_list_single_medium_pane_ParamLimits

0x1f97,	// (0x0000f955) wml_list_single_medium_pane

0x1faf,	// (0x0000f96d) wml_list_single_small_pane_ParamLimits

0x1faf,	// (0x0000f96d) wml_list_single_small_pane

0xa0f0,	// (0x00017aae) wml_selection_box_pane_ParamLimits

0xa0f0,	// (0x00017aae) wml_selection_box_pane

0xa103,	// (0x00017ac1) wml_list_single_pane_t1

0xa112,	// (0x00017ad0) wml_list_single_medium_pane_t1

0xa121,	// (0x00017adf) wml_list_single_large_pane_t1

0xa130,	// (0x00017aee) input_focus_pane_cp02_ParamLimits

0xa130,	// (0x00017aee) input_focus_pane_cp02

0xa143,	// (0x00017b01) wml_selection_box_pane_g1

0xa14c,	// (0x00017b0a) wml_selection_box_pane_t1_ParamLimits

0xa14c,	// (0x00017b0a) wml_selection_box_pane_t1

0x9a71,	// (0x0001742f) bg_wml_button_pane_ParamLimits

0x9a71,	// (0x0001742f) bg_wml_button_pane

0xa164,	// (0x00017b22) wml_button_pane_g1

0xa16c,	// (0x00017b2a) wml_button_pane_t1

0xa164,	// (0x00017b22) wml_button_bg_pane_g1

0xa17c,	// (0x00017b3a) wml_button_bg_pane_g2

0xa184,	// (0x00017b42) wml_button_bg_pane_g3

0xa18c,	// (0x00017b4a) wml_button_bg_pane_g4

0xa194,	// (0x00017b52) wml_button_bg_pane_g5

0xa19c,	// (0x00017b5a) wml_button_bg_pane_g6

0xa1a4,	// (0x00017b62) wml_button_bg_pane_g7

0xa1ac,	// (0x00017b6a) wml_button_bg_pane_g8

0xa1b4,	// (0x00017b72) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0001cc5a) wml_button_bg_pane_g

0x1fcd,	// (0x0000f98b) bg_list_pane_cp02

0xa1bc,	// (0x00017b7a) mce_header_pane_ParamLimits

0xa1bc,	// (0x00017b7a) mce_header_pane

0xa1d2,	// (0x00017b90) mce_icon_pane

0xa1d2,	// (0x00017b90) mce_image_pane

0xa1db,	// (0x00017b99) mce_text_pane_ParamLimits

0xa1db,	// (0x00017b99) mce_text_pane

0x1fd5,	// (0x0000f993) scroll_pane_cp03

0xa0d4,	// (0x00017a92) scroll_pane_cp04

0xa1ee,	// (0x00017bac) scroll_pane_cp05_ParamLimits

0xa1ee,	// (0x00017bac) scroll_pane_cp05

0x1fdf,	// (0x0000f99d) mce_header_field_pane_ParamLimits

0x1fdf,	// (0x0000f99d) mce_header_field_pane

0x1ff6,	// (0x0000f9b4) mce_header_field_pane_2_ParamLimits

0x1ff6,	// (0x0000f9b4) mce_header_field_pane_2

0x200c,	// (0x0000f9ca) mce_header_field_pane_3

0x2014,	// (0x0000f9d2) list_single_mce_message_pane_ParamLimits

0x2014,	// (0x0000f9d2) list_single_mce_message_pane

0x202c,	// (0x0000f9ea) list_single_mce_smart_pane_ParamLimits

0x202c,	// (0x0000f9ea) list_single_mce_smart_pane

0xa1fa,	// (0x00017bb8) input_focus_pane_cp03

0xa203,	// (0x00017bc1) list_header_data_pane

0x204f,	// (0x0000fa0d) mce_header_field_pane_t1

0x205f,	// (0x0000fa1d) list_single_mce_header_pane_ParamLimits

0x205f,	// (0x0000fa1d) list_single_mce_header_pane

0xa20b,	// (0x00017bc9) list_single_mce_header_pane_t1

0xa21a,	// (0x00017bd8) list_single_mce_message_pane_g1

0xa222,	// (0x00017be0) list_single_mce_message_pane_t1

0x2091,	// (0x0000fa4f) bg_cale_heading_pane_cp01_ParamLimits

0x2091,	// (0x0000fa4f) bg_cale_heading_pane_cp01

0xa230,	// (0x00017bee) bg_cale_pane_cp02_ParamLimits

0xa230,	// (0x00017bee) bg_cale_pane_cp02

0x20b4,	// (0x0000fa72) cale_month_corner_pane

0x20ca,	// (0x0000fa88) cale_month_day_heading_pane_ParamLimits

0x20ca,	// (0x0000fa88) cale_month_day_heading_pane

0x20fd,	// (0x0000fabb) cale_month_pane_g1_ParamLimits

0x20fd,	// (0x0000fabb) cale_month_pane_g1

0x2119,	// (0x0000fad7) cale_month_pane_g2_ParamLimits

0x2119,	// (0x0000fad7) cale_month_pane_g2

0x2134,	// (0x0000faf2) cale_month_pane_g3_ParamLimits

0x2134,	// (0x0000faf2) cale_month_pane_g3

0x2160,	// (0x0000fb1e) cale_month_pane_g4_ParamLimits

0x2160,	// (0x0000fb1e) cale_month_pane_g4

0x218c,	// (0x0000fb4a) cale_month_pane_g5_ParamLimits

0x218c,	// (0x0000fb4a) cale_month_pane_g5

0x21c0,	// (0x0000fb7e) cale_month_pane_g6_ParamLimits

0x21c0,	// (0x0000fb7e) cale_month_pane_g6

0x21fc,	// (0x0000fbba) cale_month_pane_g7_ParamLimits

0x21fc,	// (0x0000fbba) cale_month_pane_g7

0x2238,	// (0x0000fbf6) cale_month_pane_g8_ParamLimits

0x2238,	// (0x0000fbf6) cale_month_pane_g8

0x2274,	// (0x0000fc32) cale_month_pane_g9_ParamLimits

0x2274,	// (0x0000fc32) cale_month_pane_g9

0x22ae,	// (0x0000fc6c) cale_month_pane_g10_ParamLimits

0x22ae,	// (0x0000fc6c) cale_month_pane_g10

0x22e8,	// (0x0000fca6) cale_month_pane_g11_ParamLimits

0x22e8,	// (0x0000fca6) cale_month_pane_g11

0x2322,	// (0x0000fce0) cale_month_pane_g12_ParamLimits

0x2322,	// (0x0000fce0) cale_month_pane_g12

0x235c,	// (0x0000fd1a) cale_month_pane_g13_ParamLimits

0x235c,	// (0x0000fd1a) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0001cc6d) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0001cc6d) cale_month_pane_g

0x2396,	// (0x0000fd54) cale_month_week_pane

0x23a9,	// (0x0000fd67) grid_cale_month_pane_ParamLimits

0x23a9,	// (0x0000fd67) grid_cale_month_pane

0x23d7,	// (0x0000fd95) cale_month_day_heading_pane_t1

0x2435,	// (0x0000fdf3) cale_month_day_heading_pane_t2

0x249a,	// (0x0000fe58) cale_month_day_heading_pane_t3

0x24ff,	// (0x0000febd) cale_month_day_heading_pane_t4

0x2564,	// (0x0000ff22) cale_month_day_heading_pane_t5

0x25d9,	// (0x0000ff97) cale_month_day_heading_pane_t6

0x264e,	// (0x0001000c) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0001cc88) cale_month_day_heading_pane_t

0x9d8f,	// (0x0001774d) bg_cale_side_pane_cp01

0x26c3,	// (0x00010081) cale_month_week_pane_t1

0x26da,	// (0x00010098) cale_month_week_pane_t2

0x26f1,	// (0x000100af) cale_month_week_pane_t3

0x2708,	// (0x000100c6) cale_month_week_pane_t4

0x271f,	// (0x000100dd) cale_month_week_pane_t5

0x2736,	// (0x000100f4) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0001cc97) cale_month_week_pane_t

0x274d,	// (0x0001010b) cell_cale_month_pane_ParamLimits

0x274d,	// (0x0001010b) cell_cale_month_pane

0xa28f,	// (0x00017c4d) cell_cale_month_pane_g1

0x2823,	// (0x000101e1) cell_cale_month_pane_t1_ParamLimits

0x2823,	// (0x000101e1) cell_cale_month_pane_t1

0x9d9d,	// (0x0001775b) grid_highlight_pane_cp08

0x9c1b,	// (0x000175d9) main_smil_g1

0x283f,	// (0x000101fd) smil_status_pane

0xa29b,	// (0x00017c59) smil_text_pane

0xbc12,	// (0x000195d0) bg_popup_call3_rect_pane_g8

0xbc1a,	// (0x000195d8) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0001cf50) bg_popup_call3_rect_pane_g

0xbe9c,	// (0x0001985a) smil_status_volume_pane_g1

0xa2a5,	// (0x00017c63) smil_status_pane_t1

0xbecf,	// (0x0001988d) volume_smil_pane

0xa2bc,	// (0x00017c7a) list_smil_text_pane

0x2854,	// (0x00010212) scroll_pane_cp011

0x285f,	// (0x0001021d) smil_text_list_pane_t1_ParamLimits

0x285f,	// (0x0001021d) smil_text_list_pane_t1

0xa2c6,	// (0x00017c84) aid_volume_smil_ParamLimits

0xa2c6,	// (0x00017c84) aid_volume_smil

0x9c1b,	// (0x000175d9) smil_volume_pane_g1

0x9c1b,	// (0x000175d9) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0001ccb7) smil_volume_pane_g

0x9ba2,	// (0x00017560) listscroll_cale_day_pane

0xa2e8,	// (0x00017ca6) bg_cale_pane

0xa300,	// (0x00017cbe) list_cale_pane

0xa311,	// (0x00017ccf) scroll_pane_cp09

0xa322,	// (0x00017ce0) cale_bg_pane_g1

0xa32a,	// (0x00017ce8) cale_bg_pane_g2

0xa332,	// (0x00017cf0) cale_bg_pane_g3

0xa33a,	// (0x00017cf8) cale_bg_pane_g4

0xa342,	// (0x00017d00) cale_bg_pane_g5

0xa34a,	// (0x00017d08) cale_bg_pane_g6

0xa352,	// (0x00017d10) cale_bg_pane_g7

0xa35a,	// (0x00017d18) cale_bg_pane_g8

0xa362,	// (0x00017d20) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0001ccbc) cale_bg_pane_g

0x28b3,	// (0x00010271) list_cale_time_pane_ParamLimits

0x28b3,	// (0x00010271) list_cale_time_pane

0x28c8,	// (0x00010286) list_cale_time_pane_g1_ParamLimits

0x28c8,	// (0x00010286) list_cale_time_pane_g1

0xa36a,	// (0x00017d28) list_cale_time_pane_g2_ParamLimits

0xa36a,	// (0x00017d28) list_cale_time_pane_g2

0x28d4,	// (0x00010292) list_cale_time_pane_g3_ParamLimits

0x28d4,	// (0x00010292) list_cale_time_pane_g3

0x28f0,	// (0x000102ae) list_cale_time_pane_g4_ParamLimits

0x28f0,	// (0x000102ae) list_cale_time_pane_g4

0x28fe,	// (0x000102bc) list_cale_time_pane_g5_ParamLimits

0x28fe,	// (0x000102bc) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0001cccf) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0001cccf) list_cale_time_pane_g

0x290c,	// (0x000102ca) list_cale_time_pane_t1_ParamLimits

0x290c,	// (0x000102ca) list_cale_time_pane_t1

0x2934,	// (0x000102f2) list_cale_time_pane_t2_ParamLimits

0x2934,	// (0x000102f2) list_cale_time_pane_t2

0x2c61,	// (0x0001061f) aid_blid_cardinal_pane

0x2c9f,	// (0x0001065d) compass_pane_t4

0x295c,	// (0x0001031a) list_cale_time_pane_t4_ParamLimits

0x295c,	// (0x0001031a) list_cale_time_pane_t4

0x2cad,	// (0x0001066b) compass_pane_t5

0x2cbb,	// (0x00010679) compass_pane_t6

0x2cc9,	// (0x00010687) compass_pane_t7

0xa888,	// (0x00018246) navi_pane_cc_t1

0xa9ef,	// (0x000183ad) aid_phob_thumbnail_center_pane

0x33ca,	// (0x00010d88) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0001ccdc) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0001ccdc) list_cale_time_pane_t

0x946f,	// (0x00016e2d) bg_popup_window_pane_cp02_ParamLimits

0x946f,	// (0x00016e2d) bg_popup_window_pane_cp02

0xa384,	// (0x00017d42) heading_pane_cp01_ParamLimits

0xa384,	// (0x00017d42) heading_pane_cp01

0xa390,	// (0x00017d4e) loc_req_pane_ParamLimits

0xa390,	// (0x00017d4e) loc_req_pane

0xa3a0,	// (0x00017d5e) loc_type_pane_ParamLimits

0xa3a0,	// (0x00017d5e) loc_type_pane

0xa3b2,	// (0x00017d70) loc_type_pane_t1_ParamLimits

0xa3b2,	// (0x00017d70) loc_type_pane_t1

0xa3c4,	// (0x00017d82) loc_type_pane_t2_ParamLimits

0xa3c4,	// (0x00017d82) loc_type_pane_t2

0xa3d6,	// (0x00017d94) loc_type_pane_t3_ParamLimits

0xa3d6,	// (0x00017d94) loc_type_pane_t3

0x0002,

0xf325,	// (0x0001cce3) loc_type_pane_t_ParamLimits

0xf325,	// (0x0001cce3) loc_type_pane_t

0xa3e8,	// (0x00017da6) list_loc_req_pane

0xa3f2,	// (0x00017db0) scroll_pane_cp012

0x2984,	// (0x00010342) list_single_loc_request_popup_menu_pane_ParamLimits

0x2984,	// (0x00010342) list_single_loc_request_popup_menu_pane

0xa3fd,	// (0x00017dbb) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa3fd,	// (0x00017dbb) list_single_loc_request_popup_menu_pane_g1

0xa409,	// (0x00017dc7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa409,	// (0x00017dc7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0001ccea) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0001ccea) list_single_loc_request_popup_menu_pane_g

0xa415,	// (0x00017dd3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa415,	// (0x00017dd3) list_single_loc_request_popup_menu_pane_t1

0x9a71,	// (0x0001742f) bg_popup_window_pane_cp03_ParamLimits

0x9a71,	// (0x0001742f) bg_popup_window_pane_cp03

0xa42b,	// (0x00017de9) heading_loc_req_pane_ParamLimits

0xa42b,	// (0x00017de9) heading_loc_req_pane

0x2991,	// (0x0001034f) popup_dyc_status_message_window_g1_ParamLimits

0x2991,	// (0x0001034f) popup_dyc_status_message_window_g1

0x29a5,	// (0x00010363) popup_dyc_status_message_window_t1_ParamLimits

0x29a5,	// (0x00010363) popup_dyc_status_message_window_t1

0x29ba,	// (0x00010378) popup_dyc_status_message_window_t2_ParamLimits

0x29ba,	// (0x00010378) popup_dyc_status_message_window_t2

0x29cf,	// (0x0001038d) popup_dyc_status_message_window_t3_ParamLimits

0x29cf,	// (0x0001038d) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0001ccef) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0001ccef) popup_dyc_status_message_window_t

0x9816,	// (0x000171d4) bg_heading_pane_cp01

0xa437,	// (0x00017df5) heading_loc_req_pane_g1

0xa43f,	// (0x00017dfd) heading_loc_req_pane_g2

0xa447,	// (0x00017e05) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0001ccf6) heading_loc_req_pane_g

0xa44f,	// (0x00017e0d) heading_loc_req_pane_t1

0xa4d3,	// (0x00017e91) bg_popup_sub_pane_cp01_ParamLimits

0xa4d3,	// (0x00017e91) bg_popup_sub_pane_cp01

0xa4e1,	// (0x00017e9f) popup_cale_events_window_g1_ParamLimits

0xa4e1,	// (0x00017e9f) popup_cale_events_window_g1

0xa501,	// (0x00017ebf) popup_cale_events_window_g2_ParamLimits

0xa501,	// (0x00017ebf) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0001cd2a) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0001cd2a) popup_cale_events_window_g

0xa521,	// (0x00017edf) popup_cale_events_window_t1_ParamLimits

0xa521,	// (0x00017edf) popup_cale_events_window_t1

0xa533,	// (0x00017ef1) popup_cale_events_window_t2_ParamLimits

0xa533,	// (0x00017ef1) popup_cale_events_window_t2

0xa571,	// (0x00017f2f) popup_cale_events_window_t3_ParamLimits

0xa571,	// (0x00017f2f) popup_cale_events_window_t3

0xa5ab,	// (0x00017f69) popup_cale_events_window_t4_ParamLimits

0xa5ab,	// (0x00017f69) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0001cd2f) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0001cd2f) popup_cale_events_window_t

0x2a5d,	// (0x0001041b) call_type_pane

0x2a6d,	// (0x0001042b) popup_call_status_window_g1

0x2a81,	// (0x0001043f) popup_call_status_window_g2

0x2a95,	// (0x00010453) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0001cd38) popup_call_status_window_g

0xa5e1,	// (0x00017f9f) call_type_pane_g1

0xa5ea,	// (0x00017fa8) call_type_pane_g2

0x0001,

0xf381,	// (0x0001cd3f) call_type_pane_g

0x9816,	// (0x000171d4) bg_popup_sub_pane_cp02

0xa5f3,	// (0x00017fb1) listscroll_popup_wml_pane

0xa5fb,	// (0x00017fb9) list_wml_pane

0xa605,	// (0x00017fc3) scroll_pane_cp013

0xa610,	// (0x00017fce) list_single_graphic_popup_wml_pane_ParamLimits

0xa610,	// (0x00017fce) list_single_graphic_popup_wml_pane

0x9c1b,	// (0x000175d9) list_single_graphic_popup_wml_pane_g1

0xa624,	// (0x00017fe2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0001cd44) list_single_graphic_popup_wml_pane_g

0xa62c,	// (0x00017fea) list_single_graphic_popup_wml_pane_t1

0xa642,	// (0x00018000) aid_call_pane

0x9a69,	// (0x00017427) popup_clock_analogue_window_g1

0x9a69,	// (0x00017427) popup_clock_analogue_window_g2

0xa64a,	// (0x00018008) popup_clock_analogue_window_g3

0xa64a,	// (0x00018008) popup_clock_analogue_window_g4

0x9c1b,	// (0x000175d9) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0001cd49) popup_clock_analogue_window_g

0xa652,	// (0x00018010) popup_clock_analogue_window_t1

0xa660,	// (0x0001801e) clock_digital_number_pane_ParamLimits

0xa660,	// (0x0001801e) clock_digital_number_pane

0xa66c,	// (0x0001802a) clock_digital_number_pane_cp02_ParamLimits

0xa66c,	// (0x0001802a) clock_digital_number_pane_cp02

0xa678,	// (0x00018036) clock_digital_number_pane_cp03_ParamLimits

0xa678,	// (0x00018036) clock_digital_number_pane_cp03

0xa684,	// (0x00018042) clock_digital_number_pane_cp04_ParamLimits

0xa684,	// (0x00018042) clock_digital_number_pane_cp04

0xa690,	// (0x0001804e) clock_digital_separator_pane_ParamLimits

0xa690,	// (0x0001804e) clock_digital_separator_pane

0xa69c,	// (0x0001805a) popup_clock_digital_window_t1

0x9c1b,	// (0x000175d9) clock_digital_number_pane_g1

0x9c1b,	// (0x000175d9) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0001ccb7) clock_digital_number_pane_g

0x9c1b,	// (0x000175d9) clock_digital_separator_pane_g1

0x9c1b,	// (0x000175d9) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0001ccb7) clock_digital_separator_pane_g

0x9816,	// (0x000171d4) bg_popup_window_pane_cp04

0xa6b9,	// (0x00018077) heading_pane_cp03

0xa6c1,	// (0x0001807f) listscroll_popup_gms_pane

0xa6c9,	// (0x00018087) grid_large_graphic_popup_pane

0xa6d3,	// (0x00018091) listscroll_popup_gms_pane_g1

0xa6db,	// (0x00018099) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0001cd54) listscroll_popup_gms_pane_g

0xa0d4,	// (0x00017a92) scroll_pane_cp014

0xa6e3,	// (0x000180a1) cell_large_graphic_popup_pane_ParamLimits

0xa6e3,	// (0x000180a1) cell_large_graphic_popup_pane

0xa6fb,	// (0x000180b9) cell_large_graphic_popup_pane_g1_ParamLimits

0xa6fb,	// (0x000180b9) cell_large_graphic_popup_pane_g1

0xa707,	// (0x000180c5) cell_large_graphic_popup_pane_g2_ParamLimits

0xa707,	// (0x000180c5) cell_large_graphic_popup_pane_g2

0xa713,	// (0x000180d1) cell_large_graphic_popup_pane_g3_ParamLimits

0xa713,	// (0x000180d1) cell_large_graphic_popup_pane_g3

0xa720,	// (0x000180de) cell_large_graphic_popup_pane_g4_ParamLimits

0xa720,	// (0x000180de) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0001cd59) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0001cd59) cell_large_graphic_popup_pane_g

0xa730,	// (0x000180ee) grid_highlight_pane_cp010

0x9c1b,	// (0x000175d9) bg_popup_call_pane_g1

0xa73a,	// (0x000180f8) list_single_graphic_popup_conf_pane_ParamLimits

0xa73a,	// (0x000180f8) list_single_graphic_popup_conf_pane

0xa74c,	// (0x0001810a) list_highlight_pane_cp01

0xa755,	// (0x00018113) list_single_graphic_popup_conf_pane_g1

0xa75d,	// (0x0001811b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0001cd62) list_single_graphic_popup_conf_pane_g

0xa765,	// (0x00018123) list_single_graphic_popup_conf_pane_t1

0xa773,	// (0x00018131) linegrid_cams_pane_g1

0x2aa5,	// (0x00010463) linegrid_cams_pane_g2

0x9d3c,	// (0x000176fa) linegrid_cams_pane_g3

0xa77c,	// (0x0001813a) linegrid_cams_pane_g4

0x2aae,	// (0x0001046c) linegrid_cams_pane_g5

0x2ab7,	// (0x00010475) linegrid_cams_pane_g6

0x9dd0,	// (0x0001778e) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0001cd67) linegrid_cams_pane_g

0xa785,	// (0x00018143) popup_clock_analogue_window

0xa785,	// (0x00018143) popup_clock_digital_window

0x9816,	// (0x000171d4) popup_phob_thumbnail_window

0x9c1b,	// (0x000175d9) call_video_uplink_pane_g1

0xa78e,	// (0x0001814c) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0001cd76) call_video_uplink_pane_g

0x9d9d,	// (0x0001775b) video_uplink_pane

0xa796,	// (0x00018154) mce_image_pane_g1

0x2ac2,	// (0x00010480) mce_image_pane_g2

0x2aca,	// (0x00010488) mce_image_pane_g3

0x2ad2,	// (0x00010490) mce_image_pane_g4

0x2ada,	// (0x00010498) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0001cd7b) mce_image_pane_g

0xa7a0,	// (0x0001815e) control_top_pane_stacon_cp01_ParamLimits

0xa7a0,	// (0x0001815e) control_top_pane_stacon_cp01

0xa7b4,	// (0x00018172) uni_indicator_pane_stacon_cp01_ParamLimits

0xa7b4,	// (0x00018172) uni_indicator_pane_stacon_cp01

0xa7c5,	// (0x00018183) bg_popup_sub_pane_cp03

0x2ae2,	// (0x000104a0) chi_dic_find_pane

0x2aea,	// (0x000104a8) listscroll_chi_dic_pane

0x2af3,	// (0x000104b1) main_pane_chidic_g1

0x2b06,	// (0x000104c4) chi_dic_find_pane_t1

0xa7cf,	// (0x0001818d) find_chidic_pane

0xa7d8,	// (0x00018196) chi_dic_list_pane_ParamLimits

0xa7d8,	// (0x00018196) chi_dic_list_pane

0xa7e9,	// (0x000181a7) scroll_pane_cp020

0x2b14,	// (0x000104d2) find_chidic_pane_t1

0x9816,	// (0x000171d4) input_focus_pane_cp06

0x2b23,	// (0x000104e1) list_chi_dic_pane_ParamLimits

0x2b23,	// (0x000104e1) list_chi_dic_pane

0xa7f1,	// (0x000181af) list_chi_dic_pane_t1_ParamLimits

0xa7f1,	// (0x000181af) list_chi_dic_pane_t1

0x9816,	// (0x000171d4) list_highlight_pane_cp020

0xa804,	// (0x000181c2) bg_cale_heading_pane_g1

0x2b37,	// (0x000104f5) bg_cale_heading_pane_g2

0x2b3f,	// (0x000104fd) bg_cale_heading_pane_g3

0x2b47,	// (0x00010505) bg_cale_heading_pane_g4

0x2b51,	// (0x0001050f) bg_cale_heading_pane_g5

0x2b5b,	// (0x00010519) bg_cale_heading_pane_g6

0x2b63,	// (0x00010521) bg_cale_heading_pane_g7

0x2b6b,	// (0x00010529) bg_cale_heading_pane_g8

0x2b75,	// (0x00010533) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0001cd86) bg_cale_heading_pane_g

0xa804,	// (0x000181c2) bg_cale_side_pane_g1

0x2b7f,	// (0x0001053d) bg_cale_side_pane_g2

0x2b87,	// (0x00010545) bg_cale_side_pane_g3

0x2b8f,	// (0x0001054d) bg_cale_side_pane_g4

0x2b97,	// (0x00010555) bg_cale_side_pane_g5

0x2b9f,	// (0x0001055d) bg_cale_side_pane_g6

0x2ba7,	// (0x00010565) bg_cale_side_pane_g7

0x2baf,	// (0x0001056d) bg_cale_side_pane_g8

0x2bb7,	// (0x00010575) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0001cd99) bg_cale_side_pane_g

0x2bbf,	// (0x0001057d) popup_call_status_window_ParamLimits

0x2bbf,	// (0x0001057d) popup_call_status_window

0xa80c,	// (0x000181ca) stacon_top_pane

0xa814,	// (0x000181d2) status_pane_ParamLimits

0xa814,	// (0x000181d2) status_pane

0xa829,	// (0x000181e7) status_small_pane

0xa831,	// (0x000181ef) control_pane

0x9816,	// (0x000171d4) stacon_bottom_pane

0xa839,	// (0x000181f7) list_single_mce_smart_pane_t1_ParamLimits

0xa839,	// (0x000181f7) list_single_mce_smart_pane_t1

0xa84c,	// (0x0001820a) list_single_mce_smart_pane_t2_ParamLimits

0xa84c,	// (0x0001820a) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0001cdac) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0001cdac) list_single_mce_smart_pane_t

0x2c06,	// (0x000105c4) compass_pane

0x2c0f,	// (0x000105cd) main_location2_pane_t1

0x2c23,	// (0x000105e1) main_location2_pane_t2

0x2c37,	// (0x000105f5) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0001cdb1) main_location2_pane_t

0xa86b,	// (0x00018229) compass_pane_g1_ParamLimits

0xa86b,	// (0x00018229) compass_pane_g1

0x2c81,	// (0x0001063f) compass_pane_t1

0x2c90,	// (0x0001064e) compass_pane_t2

0x0005,

0xf3fc,	// (0x0001cdba) compass_pane_t

0x2cd7,	// (0x00010695) text_secondary_cp61

0xa87f,	// (0x0001823d) navi_pane_cams_g5

0xa8a2,	// (0x00018260) navi_pane_im_t1

0xa8b0,	// (0x0001826e) navi_pane_mp_g1_ParamLimits

0xa8b0,	// (0x0001826e) navi_pane_mp_g1

0xa8c4,	// (0x00018282) navi_pane_mp_g2_ParamLimits

0xa8c4,	// (0x00018282) navi_pane_mp_g2

0xa8d0,	// (0x0001828e) navi_pane_mp_g3_ParamLimits

0xa8d0,	// (0x0001828e) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0001cdce) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0001cdce) navi_pane_mp_g

0xa8dc,	// (0x0001829a) navi_pane_mp_t1

0xa8ea,	// (0x000182a8) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0001cdd5) navi_pane_mp_t

0xa926,	// (0x000182e4) navi_pane_vt_g1

0xa8dc,	// (0x0001829a) navi_pane_vt_t1

0xa92e,	// (0x000182ec) navi_slider_pane

0xa936,	// (0x000182f4) zooming_pane

0xa93e,	// (0x000182fc) navi_slider_pane_g1

0xa947,	// (0x00018305) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0001cddc) navi_slider_pane_g

0xa974,	// (0x00018332) aid_levels_zoom

0xa97c,	// (0x0001833a) zooming_pane_g1

0xa984,	// (0x00018342) zooming_pane_g2

0xa984,	// (0x00018342) zooming_pane_g3

0x0002,

0xf42d,	// (0x0001cdeb) zooming_pane_g

0xa98c,	// (0x0001834a) level_10_zoom

0xa995,	// (0x00018353) level_11_zoom

0xa99e,	// (0x0001835c) level_1_zoom

0xa9a7,	// (0x00018365) level_2_zoom

0xa9b0,	// (0x0001836e) level_3_zoom

0xa9b9,	// (0x00018377) level_4_zoom

0xa9c2,	// (0x00018380) level_5_zoom

0xa9cb,	// (0x00018389) level_6_zoom

0xa9d4,	// (0x00018392) level_7_zoom

0xa9dd,	// (0x0001839b) level_8_zoom

0xa9e6,	// (0x000183a4) level_9_zoom

0xa9f7,	// (0x000183b5) popup_phob_thumbnail_window_g1

0xa9ff,	// (0x000183bd) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0001cdf2) popup_phob_thumbnail_window_g

0xbd7c,	// (0x0001973a) level_1_location

0xbd84,	// (0x00019742) level_2_location

0xbd8c,	// (0x0001974a) level_3_location

0xbd94,	// (0x00019752) level_4_location

0xa936,	// (0x000182f4) level_5_location

0x2e00,	// (0x000107be) mce_icon_pane_g1

0x2e08,	// (0x000107c6) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0001cdf7) mce_icon_pane_g

0x2e10,	// (0x000107ce) main_mup_pane_g1_ParamLimits

0x2e10,	// (0x000107ce) main_mup_pane_g1

0x2e26,	// (0x000107e4) main_mup_pane_g2_ParamLimits

0x2e26,	// (0x000107e4) main_mup_pane_g2

0x2e3e,	// (0x000107fc) main_mup_pane_g3_ParamLimits

0x2e3e,	// (0x000107fc) main_mup_pane_g3

0x2e56,	// (0x00010814) main_mup_pane_g4_ParamLimits

0x2e56,	// (0x00010814) main_mup_pane_g4

0x2e6e,	// (0x0001082c) main_mup_pane_g5_ParamLimits

0x2e6e,	// (0x0001082c) main_mup_pane_g5

0x2e8a,	// (0x00010848) main_mup_pane_g6_ParamLimits

0x2e8a,	// (0x00010848) main_mup_pane_g6

0x2ea2,	// (0x00010860) main_mup_pane_g7_ParamLimits

0x2ea2,	// (0x00010860) main_mup_pane_g7

0x2eba,	// (0x00010878) main_mup_pane_g8_ParamLimits

0x2eba,	// (0x00010878) main_mup_pane_g8

0x2ed2,	// (0x00010890) main_mup_pane_g9_ParamLimits

0x2ed2,	// (0x00010890) main_mup_pane_g9

0x2eec,	// (0x000108aa) main_mup_pane_g10_ParamLimits

0x2eec,	// (0x000108aa) main_mup_pane_g10

0x2f06,	// (0x000108c4) main_mup_pane_g11_ParamLimits

0x2f06,	// (0x000108c4) main_mup_pane_g11

0x2f1a,	// (0x000108d8) main_mup_pane_g12_ParamLimits

0x2f1a,	// (0x000108d8) main_mup_pane_g12

0x2f30,	// (0x000108ee) main_mup_pane_g13_ParamLimits

0x2f30,	// (0x000108ee) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0001cdfc) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0001cdfc) main_mup_pane_g

0x2f44,	// (0x00010902) main_mup_pane_t1_ParamLimits

0x2f44,	// (0x00010902) main_mup_pane_t1

0x2f5e,	// (0x0001091c) main_mup_pane_t2_ParamLimits

0x2f5e,	// (0x0001091c) main_mup_pane_t2

0x2f76,	// (0x00010934) main_mup_pane_t3_ParamLimits

0x2f76,	// (0x00010934) main_mup_pane_t3

0x2f8e,	// (0x0001094c) main_mup_pane_t4_ParamLimits

0x2f8e,	// (0x0001094c) main_mup_pane_t4

0x2fac,	// (0x0001096a) main_mup_pane_t5_ParamLimits

0x2fac,	// (0x0001096a) main_mup_pane_t5

0x2fc1,	// (0x0001097f) main_mup_pane_t6_ParamLimits

0x2fc1,	// (0x0001097f) main_mup_pane_t6

0x0005,

0xf459,	// (0x0001ce17) main_mup_pane_t_ParamLimits

0xf459,	// (0x0001ce17) main_mup_pane_t

0x2fd3,	// (0x00010991) mup_progress_pane_ParamLimits

0x2fd3,	// (0x00010991) mup_progress_pane

0x2fdf,	// (0x0001099d) mup_visualizer_pane_ParamLimits

0x2fdf,	// (0x0001099d) mup_visualizer_pane

0x3013,	// (0x000109d1) mup_volume_pane_ParamLimits

0x3013,	// (0x000109d1) mup_volume_pane

0xaa07,	// (0x000183c5) mup_visualizer_pane_g1_ParamLimits

0xaa07,	// (0x000183c5) mup_visualizer_pane_g1

0xaa07,	// (0x000183c5) mup_visualizer_pane_g2_ParamLimits

0xaa07,	// (0x000183c5) mup_visualizer_pane_g2

0xa86b,	// (0x00018229) mup_visualizer_pane_g3_ParamLimits

0xa86b,	// (0x00018229) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0001ce24) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0001ce24) mup_visualizer_pane_g

0x9c1b,	// (0x000175d9) mup_volume_pane_g1

0xaa1d,	// (0x000183db) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0001ce2b) mup_volume_pane_g

0x9c1b,	// (0x000175d9) mup_progress_pane_g1

0xaa26,	// (0x000183e4) mup_progress_pane_g2

0xaa2f,	// (0x000183ed) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0001ce30) mup_progress_pane_g

0x9816,	// (0x000171d4) bg_popup_window_pane_cp05

0xaa38,	// (0x000183f6) heading_pane_cp02_ParamLimits

0xaa38,	// (0x000183f6) heading_pane_cp02

0xaa52,	// (0x00018410) list_popup_blid_pane

0xaa5a,	// (0x00018418) list_blid_sat_info_pane_ParamLimits

0xaa5a,	// (0x00018418) list_blid_sat_info_pane

0xaa6d,	// (0x0001842b) list_blid_sat_info_pane_g1

0xaa75,	// (0x00018433) list_blid_sat_info_pane_t1

0x3129,	// (0x00010ae7) mup_equalizer_pane_ParamLimits

0x3129,	// (0x00010ae7) mup_equalizer_pane

0x3142,	// (0x00010b00) mup_equalizer_pane_cp1_ParamLimits

0x3142,	// (0x00010b00) mup_equalizer_pane_cp1

0x315f,	// (0x00010b1d) mup_equalizer_pane_cp2_ParamLimits

0x315f,	// (0x00010b1d) mup_equalizer_pane_cp2

0x317c,	// (0x00010b3a) mup_equalizer_pane_cp3_ParamLimits

0x317c,	// (0x00010b3a) mup_equalizer_pane_cp3

0x319d,	// (0x00010b5b) mup_equalizer_pane_cp4_ParamLimits

0x319d,	// (0x00010b5b) mup_equalizer_pane_cp4

0x31be,	// (0x00010b7c) mup_equalizer_pane_cp5

0x31d2,	// (0x00010b90) mup_equalizer_pane_cp6

0x31e6,	// (0x00010ba4) mup_equalizer_pane_cp7

0xbc9a,	// (0x00019658) bg_popup_call_poc_act_pane_g9

0xbca2,	// (0x00019660) bg_popup_call_poc_act_pane_g10

0xbcaa,	// (0x00019668) bg_popup_call_poc_act_pane_g11

0x000a,

0x9a71,	// (0x0001742f) mup_scale_pane

0x9c1b,	// (0x000175d9) mup_scale_pane_g1

0xaa83,	// (0x00018441) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0001ce4c) mup_scale_pane_g

0xaaa7,	// (0x00018465) msg_data_pane

0xaaaf,	// (0x0001846d) scroll_pane_cp017

0x320c,	// (0x00010bca) bg_list_pane_cp04_ParamLimits

0x320c,	// (0x00010bca) bg_list_pane_cp04

0xaab7,	// (0x00018475) msg_data_pane_g1

0x322c,	// (0x00010bea) msg_data_pane_g2

0x2aca,	// (0x00010488) msg_data_pane_g3

0x3234,	// (0x00010bf2) msg_data_pane_g4

0x323c,	// (0x00010bfa) msg_data_pane_g5

0x3244,	// (0x00010c02) msg_data_pane_g6

0x324c,	// (0x00010c0a) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0001ce5b) msg_data_pane_g

0x3254,	// (0x00010c12) msg_text_pane_ParamLimits

0x3254,	// (0x00010c12) msg_text_pane

0x327d,	// (0x00010c3b) qrid_highlight_pane_cp011_ParamLimits

0x327d,	// (0x00010c3b) qrid_highlight_pane_cp011

0x9816,	// (0x000171d4) msg_body_pane

0x9816,	// (0x000171d4) msg_header_pane

0xaac8,	// (0x00018486) input_focus_pane_cp07

0x32a1,	// (0x00010c5f) msg_header_pane_t1_ParamLimits

0x32a1,	// (0x00010c5f) msg_header_pane_t1

0xaadd,	// (0x0001849b) msg_header_pane_t2_ParamLimits

0xaadd,	// (0x0001849b) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0001ce6f) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0001ce6f) msg_header_pane_t

0xaaef,	// (0x000184ad) msg_body_pane_g1

0x32b5,	// (0x00010c73) msg_body_pane_t1_ParamLimits

0x32b5,	// (0x00010c73) msg_body_pane_t1

0xaaf7,	// (0x000184b5) msg_body_pane_t2_ParamLimits

0xaaf7,	// (0x000184b5) msg_body_pane_t2

0xab09,	// (0x000184c7) msg_body_pane_t3_ParamLimits

0xab09,	// (0x000184c7) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0001ce74) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0001ce74) msg_body_pane_t

0x3320,	// (0x00010cde) main_viewer_pane_g1_ParamLimits

0x3320,	// (0x00010cde) main_viewer_pane_g1

0x332e,	// (0x00010cec) main_viewer_pane_g2_ParamLimits

0x332e,	// (0x00010cec) main_viewer_pane_g2

0x333c,	// (0x00010cfa) main_viewer_pane_g3_ParamLimits

0x333c,	// (0x00010cfa) main_viewer_pane_g3

0x334b,	// (0x00010d09) main_viewer_pane_g4_ParamLimits

0x334b,	// (0x00010d09) main_viewer_pane_g4

0xab33,	// (0x000184f1) main_viewer_pane_g5_ParamLimits

0xab33,	// (0x000184f1) main_viewer_pane_g5

0xab33,	// (0x000184f1) main_viewer_pane_g7_ParamLimits

0xab33,	// (0x000184f1) main_viewer_pane_g7

0xab45,	// (0x00018503) main_viewer_pane_g8_ParamLimits

0xab45,	// (0x00018503) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0001ce84) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0001ce84) main_viewer_pane_g

0xab5d,	// (0x0001851b) viewer_content_pane_ParamLimits

0xab5d,	// (0x0001851b) viewer_content_pane

0x3387,	// (0x00010d45) main_postcard_pane_g1_ParamLimits

0x3387,	// (0x00010d45) main_postcard_pane_g1

0x339d,	// (0x00010d5b) main_postcard_pane_g2_ParamLimits

0x339d,	// (0x00010d5b) main_postcard_pane_g2

0x33b3,	// (0x00010d71) main_postcard_pane_g3_ParamLimits

0x33b3,	// (0x00010d71) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0001ce95) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0001ce95) main_postcard_pane_g

0x33ca,	// (0x00010d88) main_postcard_pane_g4

0xbeaf,	// (0x0001986d) smil_status_volume_pane_g2

0x340d,	// (0x00010dcb) postcard_pane_ParamLimits

0x340d,	// (0x00010dcb) postcard_pane

0xab6b,	// (0x00018529) postcard_pane_g1_ParamLimits

0xab6b,	// (0x00018529) postcard_pane_g1

0x344f,	// (0x00010e0d) postcard_pane_g2_ParamLimits

0x344f,	// (0x00010e0d) postcard_pane_g2

0x345b,	// (0x00010e19) postcard_pane_g3_ParamLimits

0x345b,	// (0x00010e19) postcard_pane_g3

0xab79,	// (0x00018537) postcard_pane_g4_ParamLimits

0xab79,	// (0x00018537) postcard_pane_g4

0x3467,	// (0x00010e25) postcard_pane_g5_ParamLimits

0x3467,	// (0x00010e25) postcard_pane_g5

0x347c,	// (0x00010e3a) postcard_pane_g6_ParamLimits

0x347c,	// (0x00010e3a) postcard_pane_g6

0xab6b,	// (0x00018529) postcard_pane_g7_ParamLimits

0xab6b,	// (0x00018529) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0001cea2) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0001cea2) postcard_pane_g

0x3490,	// (0x00010e4e) main_mp2_pane_g1_ParamLimits

0x3490,	// (0x00010e4e) main_mp2_pane_g1

0x349c,	// (0x00010e5a) main_mp2_pane_g2_ParamLimits

0x349c,	// (0x00010e5a) main_mp2_pane_g2

0x34a8,	// (0x00010e66) main_mp2_pane_g3_ParamLimits

0x34a8,	// (0x00010e66) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0001ceb1) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0001ceb1) main_mp2_pane_g

0x34b4,	// (0x00010e72) main_mp2_pane_t1_ParamLimits

0x34b4,	// (0x00010e72) main_mp2_pane_t1

0x34c9,	// (0x00010e87) main_mp2_pane_t2_ParamLimits

0x34c9,	// (0x00010e87) main_mp2_pane_t2

0x34db,	// (0x00010e99) main_mp2_pane_t3_ParamLimits

0x34db,	// (0x00010e99) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0001ceb8) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0001ceb8) main_mp2_pane_t

0xab87,	// (0x00018545) pec_content_pane_ParamLimits

0xab87,	// (0x00018545) pec_content_pane

0xa0d4,	// (0x00017a92) scroll_pane_cp015

0xab99,	// (0x00018557) pec_attribute_pane_ParamLimits

0xab99,	// (0x00018557) pec_attribute_pane

0x34ed,	// (0x00010eab) pec_content_pane_g1_ParamLimits

0x34ed,	// (0x00010eab) pec_content_pane_g1

0xaba9,	// (0x00018567) pec_content_pane_t1_ParamLimits

0xaba9,	// (0x00018567) pec_content_pane_t1

0xabbb,	// (0x00018579) pec_content_pane_t2_ParamLimits

0xabbb,	// (0x00018579) pec_content_pane_t2

0x0001,

0xf501,	// (0x0001cebf) pec_content_pane_t_ParamLimits

0xf501,	// (0x0001cebf) pec_content_pane_t

0x34fb,	// (0x00010eb9) list_single_graphic_pane_cp01_ParamLimits

0x34fb,	// (0x00010eb9) list_single_graphic_pane_cp01

0x9a71,	// (0x0001742f) bg_popup_sub_pane_cp04

0xabcd,	// (0x0001858b) popup_mup_playback_window_g1

0xabd9,	// (0x00018597) popup_mup_playback_window_t1

0xabee,	// (0x000185ac) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0001cec4) popup_mup_playback_window_t

0xac25,	// (0x000185e3) main_image_pane_g1_ParamLimits

0xac25,	// (0x000185e3) main_image_pane_g1

0xac68,	// (0x00018626) scroll_pane_cp018_ParamLimits

0xac68,	// (0x00018626) scroll_pane_cp018

0xac80,	// (0x0001863e) scroll_pane_cp016_ParamLimits

0xac80,	// (0x0001863e) scroll_pane_cp016

0x35cb,	// (0x00010f89) smil2_image_pane_ParamLimits

0x35cb,	// (0x00010f89) smil2_image_pane

0x35ff,	// (0x00010fbd) smil2_root_pane_ParamLimits

0x35ff,	// (0x00010fbd) smil2_root_pane

0x3637,	// (0x00010ff5) smil2_text_pane_ParamLimits

0x3637,	// (0x00010ff5) smil2_text_pane

0x9816,	// (0x000171d4) bg_list_pane_cp06

0xacbc,	// (0x0001867a) grid_radio_pane

0x9816,	// (0x000171d4) bg_popup_window_pane_cp06

0xacc4,	// (0x00018682) main_fmradio_pane_t1

0xa6b9,	// (0x00018077) heading_pane_cp04

0xacd2,	// (0x00018690) main_fmradio_pane_t2

0xbcb2,	// (0x00019670) popup_cale_lunar_info_window_g1

0xace0,	// (0x0001869e) main_fmradio_pane_t3

0xbcba,	// (0x00019678) popup_cale_lunar_info_window_g2

0xacee,	// (0x000186ac) main_fmradio_pane_t4

0x0001,

0xacfc,	// (0x000186ba) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0001cf9f) popup_cale_lunar_info_window_g

0xf51b,	// (0x0001ced9) main_fmradio_pane_t

0xad0a,	// (0x000186c8) wait_bar_pane_cp03

0xad12,	// (0x000186d0) cell_fmradio_pane_ParamLimits

0xad12,	// (0x000186d0) cell_fmradio_pane

0xab6b,	// (0x00018529) cell_fmradio_pane_g1_ParamLimits

0xab6b,	// (0x00018529) cell_fmradio_pane_g1

0x9816,	// (0x000171d4) grid_highlight_pane_cp011

0xad25,	// (0x000186e3) poc_content_pane_ParamLimits

0xad25,	// (0x000186e3) poc_content_pane

0xad37,	// (0x000186f5) scroll_pane_cp019

0x36b7,	// (0x00011075) popup_call_poc_act_window_ParamLimits

0x36b7,	// (0x00011075) popup_call_poc_act_window

0x36db,	// (0x00011099) popup_call_poc_inact_window_ParamLimits

0x36db,	// (0x00011099) popup_call_poc_inact_window

0xf5b8,	// (0x0001cf76) bg_popup_call_poc_act_pane_g

0xbc22,	// (0x000195e0) bg_popup_call_poc_inact_pane_g1

0xbc2a,	// (0x000195e8) bg_popup_call_poc_inact_pane_g2

0xad3f,	// (0x000186fd) popup_call_poc_act_window_g2

0xbc32,	// (0x000195f0) bg_popup_call_poc_inact_pane_g3

0xbc3a,	// (0x000195f8) bg_popup_call_poc_inact_pane_g4

0xbc42,	// (0x00019600) bg_popup_call_poc_inact_pane_g5

0xad47,	// (0x00018705) popup_call_poc_act_window_t1_ParamLimits

0xad47,	// (0x00018705) popup_call_poc_act_window_t1

0xad6f,	// (0x0001872d) popup_call_poc_act_window_t2_ParamLimits

0xad6f,	// (0x0001872d) popup_call_poc_act_window_t2

0xad97,	// (0x00018755) popup_call_poc_act_window_t3_ParamLimits

0xad97,	// (0x00018755) popup_call_poc_act_window_t3

0xadbf,	// (0x0001877d) popup_call_poc_act_window_t4_ParamLimits

0xadbf,	// (0x0001877d) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0001cee4) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0001cee4) popup_call_poc_act_window_t

0xbc4a,	// (0x00019608) bg_popup_call_poc_inact_pane_g6

0xbc52,	// (0x00019610) bg_popup_call_poc_inact_pane_g7

0xbc5a,	// (0x00019618) bg_popup_call_poc_inact_pane_g8

0xadd1,	// (0x0001878f) popup_call_poc_inact_window_g2

0xbc62,	// (0x00019620) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0001cf63) bg_popup_call_poc_inact_pane_g

0xadd9,	// (0x00018797) popup_call_poc_inact_window_t1_ParamLimits

0xadd9,	// (0x00018797) popup_call_poc_inact_window_t1

0xadee,	// (0x000187ac) popup_call_poc_inact_window_t2_ParamLimits

0xadee,	// (0x000187ac) popup_call_poc_inact_window_t2

0xae03,	// (0x000187c1) popup_call_poc_inact_window_t3_ParamLimits

0xae03,	// (0x000187c1) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0001ceed) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0001ceed) popup_call_poc_inact_window_t

0xbe22,	// (0x000197e0) context_pane_ParamLimits

0x3efd,	// (0x000118bb) signal_pane_ParamLimits

0xa936,	// (0x000182f4) main_call2_pane

0xbe10,	// (0x000197ce) popup_phob_thumbnail2_window_ParamLimits

0xbe10,	// (0x000197ce) popup_phob_thumbnail2_window

0xab1b,	// (0x000184d9) aid_hotspot_pointer_arrow_pane

0xab23,	// (0x000184e1) aid_hotspot_pointer_hand_pane

0x3a21,	// (0x000113df) phob_pre_status_pane_g5

0x182a,	// (0x0000f1e8) cams_zoom_pane_ParamLimits

0x1839,	// (0x0000f1f7) image_vga_pane_ParamLimits

0x1853,	// (0x0000f211) main_camera_pane_g1_ParamLimits

0x1865,	// (0x0000f223) main_camera_pane_g2_ParamLimits

0x1877,	// (0x0000f235) main_camera_pane_g3_ParamLimits

0x1889,	// (0x0000f247) main_camera_pane_g4_ParamLimits

0x189b,	// (0x0000f259) main_camera_pane_g5_ParamLimits

0x18ad,	// (0x0000f26b) main_camera_pane_g6_ParamLimits

0x18bf,	// (0x0000f27d) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0001cbec) main_camera_pane_g_ParamLimits

0x18d1,	// (0x0000f28f) main_camera_pane_t1_ParamLimits

0x18e7,	// (0x0000f2a5) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0001cbfd) main_camera_pane_t_ParamLimits

0x9a71,	// (0x0001742f) bg_popup_preview_window_pane_cp01_ParamLimits

0x9a71,	// (0x0001742f) bg_popup_preview_window_pane_cp01

0xae18,	// (0x000187d6) popup_phob_thumbnail2_window_g1_ParamLimits

0xae18,	// (0x000187d6) popup_phob_thumbnail2_window_g1

0x9816,	// (0x000171d4) call2_cli_visual_pane

0x370f,	// (0x000110cd) popup_call2_audio_conf_window_ParamLimits

0x370f,	// (0x000110cd) popup_call2_audio_conf_window

0x372f,	// (0x000110ed) popup_call2_audio_first_window_ParamLimits

0x372f,	// (0x000110ed) popup_call2_audio_first_window

0x37c5,	// (0x00011183) popup_call2_audio_in_window_ParamLimits

0x37c5,	// (0x00011183) popup_call2_audio_in_window

0x380d,	// (0x000111cb) popup_call2_audio_out_window_ParamLimits

0x380d,	// (0x000111cb) popup_call2_audio_out_window

0x3877,	// (0x00011235) popup_call2_audio_second_window_ParamLimits

0x3877,	// (0x00011235) popup_call2_audio_second_window

0x38dd,	// (0x0001129b) popup_call2_audio_wait_window_ParamLimits

0x38dd,	// (0x0001129b) popup_call2_audio_wait_window

0x9816,	// (0x000171d4) bg_popup_call2_act_pane_cp03

0x9a53,	// (0x00017411) list_conf_pane_cp

0xae24,	// (0x000187e2) popup_call2_audio_conf_window_t1

0xae32,	// (0x000187f0) list_single_graphic_popup_conf2_pane_ParamLimits

0xae32,	// (0x000187f0) list_single_graphic_popup_conf2_pane

0xa74c,	// (0x0001810a) list_highlight_pane_cp04

0xae45,	// (0x00018803) list_single_graphic_popup_conf2_pane_g1

0xa75d,	// (0x0001811b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0001cef4) list_single_graphic_popup_conf2_pane_g

0xae4f,	// (0x0001880d) list_single_graphic_popup_conf2_pane_t1

0xae5d,	// (0x0001881b) bg_popup_call2_act_pane_cp01_ParamLimits

0xae5d,	// (0x0001881b) bg_popup_call2_act_pane_cp01

0xaee7,	// (0x000188a5) call_type_pane_cp05_ParamLimits

0xaee7,	// (0x000188a5) call_type_pane_cp05

0xaf3b,	// (0x000188f9) popup_call2_audio_second_window_g1_ParamLimits

0xaf3b,	// (0x000188f9) popup_call2_audio_second_window_g1

0xaf8f,	// (0x0001894d) popup_call2_audio_second_window_g2_ParamLimits

0xaf8f,	// (0x0001894d) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0001cef9) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0001cef9) popup_call2_audio_second_window_g

0xaff4,	// (0x000189b2) popup_call2_audio_second_window_t1_ParamLimits

0xaff4,	// (0x000189b2) popup_call2_audio_second_window_t1

0xb0af,	// (0x00018a6d) popup_call2_audio_second_window_t2_ParamLimits

0xb0af,	// (0x00018a6d) popup_call2_audio_second_window_t2

0xb102,	// (0x00018ac0) popup_call2_audio_second_window_t3_ParamLimits

0xb102,	// (0x00018ac0) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0001cf00) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0001cf00) popup_call2_audio_second_window_t

0x9816,	// (0x000171d4) bg_popup_call2_in_pane_cp02

0x9820,	// (0x000171de) call_type_pane_cp04

0x9828,	// (0x000171e6) popup_call2_audio_wait_window_g1

0x9830,	// (0x000171ee) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0001cad9) popup_call2_audio_wait_window_g

0x9838,	// (0x000171f6) popup_call2_audio_wait_window_t3

0xb1f5,	// (0x00018bb3) bg_popup_call2_act_pane_ParamLimits

0xb1f5,	// (0x00018bb3) bg_popup_call2_act_pane

0xb2b5,	// (0x00018c73) call_type_pane_cp03_ParamLimits

0xb2b5,	// (0x00018c73) call_type_pane_cp03

0xb319,	// (0x00018cd7) popup_call2_audio_first_window_g1_ParamLimits

0xb319,	// (0x00018cd7) popup_call2_audio_first_window_g1

0xb389,	// (0x00018d47) popup_call2_audio_first_window_g2_ParamLimits

0xb389,	// (0x00018d47) popup_call2_audio_first_window_g2

0xaa07,	// (0x000183c5) popup_call2_audio_first_window_g3_ParamLimits

0xaa07,	// (0x000183c5) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0001cf09) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0001cf09) popup_call2_audio_first_window_g

0xb467,	// (0x00018e25) popup_call2_audio_first_window_t1_ParamLimits

0xb467,	// (0x00018e25) popup_call2_audio_first_window_t1

0xb56a,	// (0x00018f28) popup_call2_audio_first_window_t4_ParamLimits

0xb56a,	// (0x00018f28) popup_call2_audio_first_window_t4

0xb64d,	// (0x0001900b) popup_call2_audio_first_window_t5_ParamLimits

0xb64d,	// (0x0001900b) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0001cf14) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0001cf14) popup_call2_audio_first_window_t

0x9a69,	// (0x00017427) bg_popup_call2_act_pane_g1

0xbcc2,	// (0x00019680) popup_cale_lunar_info_window_t1

0xbcd0,	// (0x0001968e) popup_cale_lunar_info_window_t2

0xbcde,	// (0x0001969c) popup_cale_lunar_info_window_t3

0x9816,	// (0x000171d4) bg_popup_call2_bubble_pane

0xb74e,	// (0x0001910c) bg_popup_call2_in_pane_cp01_ParamLimits

0xb74e,	// (0x0001910c) bg_popup_call2_in_pane_cp01

0x94f2,	// (0x00016eb0) call_type_pane_cp02

0xb796,	// (0x00019154) popup_call2_audio_out_window_g1_ParamLimits

0xb796,	// (0x00019154) popup_call2_audio_out_window_g1

0xb7c2,	// (0x00019180) popup_call2_audio_out_window_g2_ParamLimits

0xb7c2,	// (0x00019180) popup_call2_audio_out_window_g2

0xb7ea,	// (0x000191a8) popup_call2_audio_out_window_g3_ParamLimits

0xb7ea,	// (0x000191a8) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0001cf1d) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0001cf1d) popup_call2_audio_out_window_g

0xb825,	// (0x000191e3) popup_call2_audio_out_window_t1_ParamLimits

0xb825,	// (0x000191e3) popup_call2_audio_out_window_t1

0xb884,	// (0x00019242) popup_call2_audio_out_window_t2_ParamLimits

0xb884,	// (0x00019242) popup_call2_audio_out_window_t2

0xb8d8,	// (0x00019296) popup_call2_audio_out_window_t3_ParamLimits

0xb8d8,	// (0x00019296) popup_call2_audio_out_window_t3

0xb8ee,	// (0x000192ac) popup_call2_audio_out_window_t4_ParamLimits

0xb8ee,	// (0x000192ac) popup_call2_audio_out_window_t4

0xb904,	// (0x000192c2) popup_call2_audio_out_window_t5_ParamLimits

0xb904,	// (0x000192c2) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0001cf26) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0001cf26) popup_call2_audio_out_window_t

0xb968,	// (0x00019326) bg_popup_call2_in_pane_ParamLimits

0xb968,	// (0x00019326) bg_popup_call2_in_pane

0xb9c4,	// (0x00019382) popup_call2_audio_in_window_g1_ParamLimits

0xb9c4,	// (0x00019382) popup_call2_audio_in_window_g1

0xb9fc,	// (0x000193ba) popup_call2_audio_in_window_g2_ParamLimits

0xb9fc,	// (0x000193ba) popup_call2_audio_in_window_g2

0xba34,	// (0x000193f2) popup_call2_audio_in_window_g3_ParamLimits

0xba34,	// (0x000193f2) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0001cf33) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0001cf33) popup_call2_audio_in_window_g

0xba8c,	// (0x0001944a) popup_call2_audio_in_window_t1_ParamLimits

0xba8c,	// (0x0001944a) popup_call2_audio_in_window_t1

0xbb0c,	// (0x000194ca) popup_call2_audio_in_window_t2_ParamLimits

0xbb0c,	// (0x000194ca) popup_call2_audio_in_window_t2

0xbb8c,	// (0x0001954a) popup_call2_audio_in_window_t3_ParamLimits

0xbb8c,	// (0x0001954a) popup_call2_audio_in_window_t3

0xbba6,	// (0x00019564) popup_call2_audio_in_window_t4_ParamLimits

0xbba6,	// (0x00019564) popup_call2_audio_in_window_t4

0xbbb8,	// (0x00019576) popup_call2_audio_in_window_t5_ParamLimits

0xbbb8,	// (0x00019576) popup_call2_audio_in_window_t5

0xbbcd,	// (0x0001958b) popup_call2_audio_in_window_t6_ParamLimits

0xbbcd,	// (0x0001958b) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0001cf3c) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0001cf3c) popup_call2_audio_in_window_t

0x9a69,	// (0x00017427) bg_popup_call2_in_pane_g1

0xbcec,	// (0x000196aa) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0001cfa4) popup_cale_lunar_info_window_t

0x9a71,	// (0x0001742f) bg_popup_call2_rect_pane_ParamLimits

0x9a71,	// (0x0001742f) bg_popup_call2_rect_pane

0x9816,	// (0x000171d4) call2_cli_visual_graphic_pane

0x9816,	// (0x000171d4) call2_cli_visual_text_pane

0xbec2,	// (0x00019880) smil_status_volume_pane_g3

0x0002,

0x9c1b,	// (0x000175d9) call2_cli_visual_graphic_pane_g1

0x9c1b,	// (0x000175d9) call2_cli_visual_graphic_pane_g2

0x9c1b,	// (0x000175d9) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0001cf49) call2_cli_visual_graphic_pane_g

0xbbe2,	// (0x000195a0) bg_popup_call2_rect_pane_g1

0x9cc3,	// (0x00017681) bg_popup_call2_rect_pane_g2

0xbbea,	// (0x000195a8) bg_popup_call2_rect_pane_g3

0xbbf2,	// (0x000195b0) bg_popup_call2_rect_pane_g4

0xbbfa,	// (0x000195b8) bg_popup_call2_rect_pane_g5

0xbc02,	// (0x000195c0) bg_popup_call2_rect_pane_g6

0xbc0a,	// (0x000195c8) bg_popup_call2_rect_pane_g7

0xbc12,	// (0x000195d0) bg_popup_call2_rect_pane_g8

0xbc1a,	// (0x000195d8) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0001cf50) bg_popup_call2_rect_pane_g

0xbc22,	// (0x000195e0) bg_popup_call2_bubble_pane_g1

0xbc2a,	// (0x000195e8) bg_popup_call2_bubble_pane_g2

0xbc32,	// (0x000195f0) bg_popup_call2_bubble_pane_g3

0xbc3a,	// (0x000195f8) bg_popup_call2_bubble_pane_g4

0xbc42,	// (0x00019600) bg_popup_call2_bubble_pane_g5

0xbc4a,	// (0x00019608) bg_popup_call2_bubble_pane_g6

0xbc52,	// (0x00019610) bg_popup_call2_bubble_pane_g7

0xbc5a,	// (0x00019618) bg_popup_call2_bubble_pane_g8

0xbc62,	// (0x00019620) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0001cf63) bg_popup_call2_bubble_pane_g

0x148c,	// (0x0000ee4a) aid_cale_week_size_cell_pane

0x18ff,	// (0x0000f2bd) aid_cams_cif_uncrop_pane_ParamLimits

0x18ff,	// (0x0000f2bd) aid_cams_cif_uncrop_pane

0x1abc,	// (0x0000f47a) aid_cams_size_cell_ParamLimits

0x1abc,	// (0x0000f47a) aid_cams_size_cell

0x1ad0,	// (0x0000f48e) grid_cams_pane_ParamLimits

0x1aea,	// (0x0000f4a8) linegrid_cams_pane_ParamLimits

0x1c22,	// (0x0000f5e0) call_video_pane_t1

0x1c40,	// (0x0000f5fe) call_video_pane_t2

0x0001,

0xf292,	// (0x0001cc50) call_video_pane_t

0x2073,	// (0x0000fa31) aid_cale_month_size_cell_pane_ParamLimits

0x2073,	// (0x0000fa31) aid_cale_month_size_cell_pane

0xf62f,	// (0x0001cfed) smil_status_volume_pane_g

0xbecf,	// (0x0001988d) volume_smil_pane_ParamLimits

0x9399,	// (0x00016d57) aid_popup2_width_pane

0x140e,	// (0x0000edcc) cell_qdial_pane_g4_ParamLimits

0x140e,	// (0x0000edcc) cell_qdial_pane_g4

0x2c61,	// (0x0001061f) aid_blid_cardinal_pane_ParamLimits

0x2c6d,	// (0x0001062b) aid_blid_destination_pane_ParamLimits

0x2c6d,	// (0x0001062b) aid_blid_destination_pane

0x9a71,	// (0x0001742f) bg_popup_call_poc_act_pane_ParamLimits

0x9a71,	// (0x0001742f) bg_popup_call_poc_act_pane

0x9a71,	// (0x0001742f) bg_popup_call_poc_inact_pane_ParamLimits

0x9a71,	// (0x0001742f) bg_popup_call_poc_inact_pane

0xbc72,	// (0x00019630) bg_popup_call_poc_act_pane_g1

0xbc7a,	// (0x00019638) bg_popup_call_poc_act_pane_g2

0xbc82,	// (0x00019640) bg_popup_call_poc_act_pane_g3

0xbc3a,	// (0x000195f8) bg_popup_call_poc_act_pane_g4

0xbc42,	// (0x00019600) bg_popup_call_poc_act_pane_g5

0xbc8a,	// (0x00019648) bg_popup_call_poc_act_pane_g6

0xbc52,	// (0x00019610) bg_popup_call_poc_act_pane_g7

0xbc92,	// (0x00019650) bg_popup_call_poc_act_pane_g8

0x9816,	// (0x000171d4) main_usb_pane

0xbdeb,	// (0x000197a9) popup_cale_lunar_info_window

0x1f0a,	// (0x0000f8c8) im_reading_pane_t1_ParamLimits

0xa02c,	// (0x000179ea) list_im_pane_ParamLimits

0xa03d,	// (0x000179fb) scroll_pane_cp07_ParamLimits

0x9816,	// (0x000171d4) grid_highlight_pane_cp012

0x9a71,	// (0x0001742f) mup_scale_pane_ParamLimits

0xab6b,	// (0x00018529) main_usb_pane_g1_ParamLimits

0xab6b,	// (0x00018529) main_usb_pane_g1

0x3934,	// (0x000112f2) main_usb_pane_g2_ParamLimits

0x3934,	// (0x000112f2) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0001cf8d) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0001cf8d) main_usb_pane_g

0x394a,	// (0x00011308) main_usb_pane_t1_ParamLimits

0x394a,	// (0x00011308) main_usb_pane_t1

0x395c,	// (0x0001131a) main_usb_pane_t2_ParamLimits

0x395c,	// (0x0001131a) main_usb_pane_t2

0x396e,	// (0x0001132c) main_usb_pane_t3_ParamLimits

0x396e,	// (0x0001132c) main_usb_pane_t3

0x3980,	// (0x0001133e) main_usb_pane_t4_ParamLimits

0x3980,	// (0x0001133e) main_usb_pane_t4

0x3992,	// (0x00011350) main_usb_pane_t5_ParamLimits

0x3992,	// (0x00011350) main_usb_pane_t5

0x39a4,	// (0x00011362) main_usb_pane_t6_ParamLimits

0x39a4,	// (0x00011362) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0001cf92) main_usb_pane_t_ParamLimits

0x2c06,	// (0x000105c4) aid_text_placing

0x2c0f,	// (0x000105cd) main_location2_pane_t1_ParamLimits

0x2c23,	// (0x000105e1) main_location2_pane_t2_ParamLimits

0x2c37,	// (0x000105f5) main_location2_pane_t3_ParamLimits

0x2c4d,	// (0x0001060b) main_location2_pane_t4_ParamLimits

0x2c4d,	// (0x0001060b) main_location2_pane_t4

0xf3f3,	// (0x0001cdb1) main_location2_pane_t_ParamLimits

0x9ab5,	// (0x00017473) find_pinb_pane_g2_ParamLimits

0x9ab5,	// (0x00017473) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0001caff) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0001caff) find_pinb_pane_g

0x9ac1,	// (0x0001747f) find_pinb_pane_t1_ParamLimits

0x9ad3,	// (0x00017491) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0001cb04) find_pinb_pane_t_ParamLimits

0x9816,	// (0x000171d4) main_call3_pane

0x23d7,	// (0x0000fd95) cale_month_day_heading_pane_t1_ParamLimits

0x2435,	// (0x0000fdf3) cale_month_day_heading_pane_t2_ParamLimits

0x249a,	// (0x0000fe58) cale_month_day_heading_pane_t3_ParamLimits

0x24ff,	// (0x0000febd) cale_month_day_heading_pane_t4_ParamLimits

0x2564,	// (0x0000ff22) cale_month_day_heading_pane_t5_ParamLimits

0x25d9,	// (0x0000ff97) cale_month_day_heading_pane_t6_ParamLimits

0x264e,	// (0x0001000c) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0001cc88) cale_month_day_heading_pane_t_ParamLimits

0xa2b3,	// (0x00017c71) smil_status_volume_pane

0x342b,	// (0x00010de9) postcard_address_pane_ParamLimits

0x342b,	// (0x00010de9) postcard_address_pane

0x343d,	// (0x00010dfb) postcard_message_pane_ParamLimits

0x343d,	// (0x00010dfb) postcard_message_pane

0x3917,	// (0x000112d5) call2_cli_visual_pane_t1_ParamLimits

0x3917,	// (0x000112d5) call2_cli_visual_pane_t1

0x412b,	// (0x00011ae9) postcard_message_pane_t1_ParamLimits

0x412b,	// (0x00011ae9) postcard_message_pane_t1

0x4114,	// (0x00011ad2) postcard_address_pane_t1_ParamLimits

0x4114,	// (0x00011ad2) postcard_address_pane_t1

0x4100,	// (0x00011abe) popup_call3_audio_in_window_ParamLimits

0x4100,	// (0x00011abe) popup_call3_audio_in_window

0x3f8f,	// (0x0001194d) bg_popup_call3_in_pane_ParamLimits

0x3f8f,	// (0x0001194d) bg_popup_call3_in_pane

0x4001,	// (0x000119bf) popup_call3_audio_in_window_g1_ParamLimits

0x4001,	// (0x000119bf) popup_call3_audio_in_window_g1

0x4021,	// (0x000119df) popup_call3_audio_in_window_g2_ParamLimits

0x4021,	// (0x000119df) popup_call3_audio_in_window_g2

0x4041,	// (0x000119ff) popup_call3_audio_in_window_g3_ParamLimits

0x4041,	// (0x000119ff) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0001cff4) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0001cff4) popup_call3_audio_in_window_g

0x4072,	// (0x00011a30) popup_call3_audio_in_window_t1_ParamLimits

0x4072,	// (0x00011a30) popup_call3_audio_in_window_t1

0x40b0,	// (0x00011a6e) popup_call3_audio_in_window_t2_ParamLimits

0x40b0,	// (0x00011a6e) popup_call3_audio_in_window_t2

0x40ee,	// (0x00011aac) popup_call3_audio_in_window_t3_ParamLimits

0x40ee,	// (0x00011aac) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0001cffd) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0001cffd) popup_call3_audio_in_window_t

0xa936,	// (0x000182f4) bg_popup_call3_rect_pane

0xbbe2,	// (0x000195a0) bg_popup_call3_rect_pane_g1

0x9cc3,	// (0x00017681) bg_popup_call3_rect_pane_g2

0xbbea,	// (0x000195a8) bg_popup_call3_rect_pane_g3

0xbbf2,	// (0x000195b0) bg_popup_call3_rect_pane_g4

0xbbfa,	// (0x000195b8) bg_popup_call3_rect_pane_g5

0xbc02,	// (0x000195c0) bg_popup_call3_rect_pane_g6

0xbc0a,	// (0x000195c8) bg_popup_call3_rect_pane_g7

0x3029,	// (0x000109e7) mup_visualizer_osc_pane

0xaa15,	// (0x000183d3) mup_visualizer_spec_pane

0x3fbf,	// (0x0001197d) call3_video_qcif_pane_ParamLimits

0x3fbf,	// (0x0001197d) call3_video_qcif_pane

0x3fd0,	// (0x0001198e) call3_video_qcif_uncrop_pane_ParamLimits

0x3fd0,	// (0x0001198e) call3_video_qcif_uncrop_pane

0x3fdc,	// (0x0001199a) call3_video_subqcif_pane_ParamLimits

0x3fdc,	// (0x0001199a) call3_video_subqcif_pane

0x3ff0,	// (0x000119ae) call3_video_subqcif_uncrop_pane_ParamLimits

0x3ff0,	// (0x000119ae) call3_video_subqcif_uncrop_pane

0x4061,	// (0x00011a1f) popup_call3_audio_in_window_g4_ParamLimits

0x4061,	// (0x00011a1f) popup_call3_audio_in_window_g4

0x3f7e,	// (0x0001193c) mup_spec_half_pane

0x3f87,	// (0x00011945) mup_spec_half_pane_cp

0xbe82,	// (0x00019840) mup_osc_middle_pane

0xbe8b,	// (0x00019849) mup_visualizer_osc_pane_g1

0x3f5e,	// (0x0001191c) mup_spec_bar_pane_ParamLimits

0x3f5e,	// (0x0001191c) mup_spec_bar_pane

0xbe6f,	// (0x0001982d) mup_spec_bar_pane_g1

0xbe79,	// (0x00019837) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0001cfe8) mup_spec_bar_pane_g

0x148c,	// (0x0000ee4a) aid_cale_week_size_cell_pane_ParamLimits

0x149f,	// (0x0000ee5d) bg_cale_heading_pane_ParamLimits

0x9d64,	// (0x00017722) bg_cale_pane_cp01_ParamLimits

0x14b7,	// (0x0000ee75) cale_week_corner_pane_ParamLimits

0x14c8,	// (0x0000ee86) cale_week_day_heading_pane_ParamLimits

0x14e0,	// (0x0000ee9e) cale_week_scroll_pane_g1_ParamLimits

0x14f5,	// (0x0000eeb3) cale_week_scroll_pane_g2_ParamLimits

0x1506,	// (0x0000eec4) cale_week_scroll_pane_g3_ParamLimits

0x1517,	// (0x0000eed5) cale_week_scroll_pane_g4_ParamLimits

0x1528,	// (0x0000eee6) cale_week_scroll_pane_g5_ParamLimits

0x153b,	// (0x0000eef9) cale_week_scroll_pane_g6_ParamLimits

0x154e,	// (0x0000ef0c) cale_week_scroll_pane_g7_ParamLimits

0x1561,	// (0x0000ef1f) cale_week_scroll_pane_g8_ParamLimits

0x1574,	// (0x0000ef32) cale_week_scroll_pane_g9_ParamLimits

0x1585,	// (0x0000ef43) cale_week_scroll_pane_g10_ParamLimits

0x1596,	// (0x0000ef54) cale_week_scroll_pane_g11_ParamLimits

0x15a7,	// (0x0000ef65) cale_week_scroll_pane_g12_ParamLimits

0x15b8,	// (0x0000ef76) cale_week_scroll_pane_g13_ParamLimits

0x15c9,	// (0x0000ef87) cale_week_scroll_pane_g14_ParamLimits

0x15da,	// (0x0000ef98) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0001cb90) cale_week_scroll_pane_g_ParamLimits

0x15eb,	// (0x0000efa9) cale_week_time_pane_ParamLimits

0x15fe,	// (0x0000efbc) grid_cale_week_pane_ParamLimits

0x9d7d,	// (0x0001773b) listscroll_cale_week_pane_t1

0x1613,	// (0x0000efd1) scroll_pane_cp08_ParamLimits

0x20b4,	// (0x0000fa72) cale_month_corner_pane_ParamLimits

0xa253,	// (0x00017c11) cale_month_pane_t1

0x2396,	// (0x0000fd54) cale_month_week_pane_ParamLimits

0x2a6d,	// (0x0001042b) popup_call_status_window_g1_ParamLimits

0x2a81,	// (0x0001043f) popup_call_status_window_g2_ParamLimits

0x2a95,	// (0x00010453) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0001cd38) popup_call_status_window_g_ParamLimits

0xa63a,	// (0x00017ff8) aid_call2_pane

0x3293,	// (0x00010c51) msg_header_pane_g1

0x342b,	// (0x00010de9) postcard_address2_pane_ParamLimits

0x342b,	// (0x00010de9) postcard_address2_pane

0x343d,	// (0x00010dfb) postcard_message2_pane_ParamLimits

0x343d,	// (0x00010dfb) postcard_message2_pane

0x3f0b,	// (0x000118c9) message2_row_pane_ParamLimits

0x3f0b,	// (0x000118c9) message2_row_pane

0x3f2a,	// (0x000118e8) address2_row_pane_ParamLimits

0x3f2a,	// (0x000118e8) address2_row_pane

0xbe3d,	// (0x000197fb) postcard_message2_row_pane_g1

0xbe45,	// (0x00019803) postcard_message2_row_pane_t1

0xbe3d,	// (0x000197fb) address2_row_pane_g1

0xbe45,	// (0x00019803) address2_row_pane_t1

0x9de1,	// (0x0001779f) aid_size_cell_vorec

0x9816,	// (0x000171d4) main_rss_pane

0x3f3d,	// (0x000118fb) rss_list_single_pane_ParamLimits

0x3f3d,	// (0x000118fb) rss_list_single_pane

0xbe53,	// (0x00019811) rss_list_single_pane_t1

0xbe61,	// (0x0001981f) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0001cfe3) rss_list_single_pane_t

0x9816,	// (0x000171d4) main_camera2_pane

0x9816,	// (0x000171d4) main_video2_pane

0x41a4,	// (0x00011b62) cams_zoom_pane_cp2_ParamLimits

0x41a4,	// (0x00011b62) cams_zoom_pane_cp2

0x41c4,	// (0x00011b82) image2_vga_pane_ParamLimits

0x41c4,	// (0x00011b82) image2_vga_pane

0x4215,	// (0x00011bd3) main_camera2_pane_g1_ParamLimits

0x4215,	// (0x00011bd3) main_camera2_pane_g1

0x4235,	// (0x00011bf3) main_camera2_pane_g2_ParamLimits

0x4235,	// (0x00011bf3) main_camera2_pane_g2

0x4255,	// (0x00011c13) main_camera2_pane_g3_ParamLimits

0x4255,	// (0x00011c13) main_camera2_pane_g3

0x4275,	// (0x00011c33) main_camera2_pane_g4_ParamLimits

0x4275,	// (0x00011c33) main_camera2_pane_g4

0x4295,	// (0x00011c53) main_camera2_pane_g5_ParamLimits

0x4295,	// (0x00011c53) main_camera2_pane_g5

0x42b5,	// (0x00011c73) main_camera2_pane_g6_ParamLimits

0x42b5,	// (0x00011c73) main_camera2_pane_g6

0x42d5,	// (0x00011c93) main_camera2_pane_g7_ParamLimits

0x42d5,	// (0x00011c93) main_camera2_pane_g7

0x42f5,	// (0x00011cb3) main_camera2_pane_g8_ParamLimits

0x42f5,	// (0x00011cb3) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0001d004) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0001d004) main_camera2_pane_g

0x4335,	// (0x00011cf3) main_camera2_pane_t1_ParamLimits

0x4335,	// (0x00011cf3) main_camera2_pane_t1

0x436a,	// (0x00011d28) main_camera2_pane_t2_ParamLimits

0x436a,	// (0x00011d28) main_camera2_pane_t2

0x4390,	// (0x00011d4e) main_camera2_pane_t3_ParamLimits

0x4390,	// (0x00011d4e) main_camera2_pane_t3

0x43ee,	// (0x00011dac) main_camera2_pane_t4_ParamLimits

0x43ee,	// (0x00011dac) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0001d017) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0001d017) main_camera2_pane_t

0x4480,	// (0x00011e3e) cams_zoom_pane_cp4_ParamLimits

0x4480,	// (0x00011e3e) cams_zoom_pane_cp4

0x4496,	// (0x00011e54) image2_cif_pane_ParamLimits

0x4496,	// (0x00011e54) image2_cif_pane

0x44c1,	// (0x00011e7f) image2_subqcif_pane_ParamLimits

0x44c1,	// (0x00011e7f) image2_subqcif_pane

0x44db,	// (0x00011e99) main_video2_pane_g1_ParamLimits

0x44db,	// (0x00011e99) main_video2_pane_g1

0x44f5,	// (0x00011eb3) main_video2_pane_g2_ParamLimits

0x44f5,	// (0x00011eb3) main_video2_pane_g2

0x450b,	// (0x00011ec9) main_video2_pane_g3_ParamLimits

0x450b,	// (0x00011ec9) main_video2_pane_g3

0x4521,	// (0x00011edf) main_video2_pane_g4_ParamLimits

0x4521,	// (0x00011edf) main_video2_pane_g4

0x4537,	// (0x00011ef5) main_video2_pane_g5_ParamLimits

0x4537,	// (0x00011ef5) main_video2_pane_g5

0x454d,	// (0x00011f0b) main_video2_pane_g6_ParamLimits

0x454d,	// (0x00011f0b) main_video2_pane_g6

0x0005,

0xf668,	// (0x0001d026) main_video2_pane_g_ParamLimits

0xf668,	// (0x0001d026) main_video2_pane_g

0x4567,	// (0x00011f25) main_video2_pane_t1_ParamLimits

0x4567,	// (0x00011f25) main_video2_pane_t1

0x458b,	// (0x00011f49) main_video2_pane_t2_ParamLimits

0x458b,	// (0x00011f49) main_video2_pane_t2

0x45d9,	// (0x00011f97) main_video2_pane_t3_ParamLimits

0x45d9,	// (0x00011f97) main_video2_pane_t3

0x0002,

0xf675,	// (0x0001d033) main_video2_pane_t_ParamLimits

0xf675,	// (0x0001d033) main_video2_pane_t

0x3a61,	// (0x0001141f) call_muted_g2

0x0001,

0xf617,	// (0x0001cfd5) call_muted_g

0x9816,	// (0x000171d4) main_mup2_pane

0x4621,	// (0x00011fdf) main_mup2_pane_g1_ParamLimits

0x4621,	// (0x00011fdf) main_mup2_pane_g1

0x462d,	// (0x00011feb) main_mup2_pane_g2_ParamLimits

0x462d,	// (0x00011feb) main_mup2_pane_g2

0xbff3,	// (0x000199b1) main_mup_pane_g13_cp1

0xbffb,	// (0x000199b9) mup_volume_pane_cp1

0x4649,	// (0x00012007) main_mup2_pane_g4_ParamLimits

0x4649,	// (0x00012007) main_mup2_pane_g4

0x465b,	// (0x00012019) main_mup2_pane_g5_ParamLimits

0x465b,	// (0x00012019) main_mup2_pane_g5

0x466d,	// (0x0001202b) main_mup2_pane_g6_ParamLimits

0x466d,	// (0x0001202b) main_mup2_pane_g6

0x467f,	// (0x0001203d) main_mup2_pane_g7_ParamLimits

0x467f,	// (0x0001203d) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0001d03a) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0001d03a) main_mup2_pane_g

0x4697,	// (0x00012055) main_mup2_pane_t1_ParamLimits

0x4697,	// (0x00012055) main_mup2_pane_t1

0x46ad,	// (0x0001206b) main_mup2_pane_t2_ParamLimits

0x46ad,	// (0x0001206b) main_mup2_pane_t2

0x46c3,	// (0x00012081) main_mup2_pane_t3_ParamLimits

0x46c3,	// (0x00012081) main_mup2_pane_t3

0x46d9,	// (0x00012097) main_mup2_pane_t4_ParamLimits

0x46d9,	// (0x00012097) main_mup2_pane_t4

0x46f1,	// (0x000120af) main_mup2_pane_t5_ParamLimits

0x46f1,	// (0x000120af) main_mup2_pane_t5

0x4709,	// (0x000120c7) main_mup2_pane_t6_ParamLimits

0x4709,	// (0x000120c7) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0001d049) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0001d049) main_mup2_pane_t

0x4739,	// (0x000120f7) mup2_visualizer_pane_ParamLimits

0x4739,	// (0x000120f7) mup2_visualizer_pane

0x4767,	// (0x00012125) mup_progress_pane_cp_ParamLimits

0x4767,	// (0x00012125) mup_progress_pane_cp

0xbfd5,	// (0x00019993) mup_volume_pane_cp_ParamLimits

0xbfd5,	// (0x00019993) mup_volume_pane_cp

0x477b,	// (0x00012139) mup2_visualizer_pane_g1_ParamLimits

0x477b,	// (0x00012139) mup2_visualizer_pane_g1

0xbf14,	// (0x000198d2) mup2_visualizer_pane_g2_ParamLimits

0xbf14,	// (0x000198d2) mup2_visualizer_pane_g2

0x4792,	// (0x00012150) mup2_visualizer_pane_g3_ParamLimits

0x4792,	// (0x00012150) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0001d056) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0001d056) mup2_visualizer_pane_g

0xacb4,	// (0x00018672) aid_size_cell_fmradio

0x3c13,	// (0x000115d1) aid_height_parent_landcape

0xa0bb,	// (0x00017a79) wml_content_pane_cp

0xa0c3,	// (0x00017a81) wml_tabs_pane

0xa0cc,	// (0x00017a8a) popup_wml_miniature_window

0xa0d4,	// (0x00017a92) scroll_pane_cp021

0xa0e8,	// (0x00017aa6) wml_content_pane_comp8

0x9816,	// (0x000171d4) bg_popup_sub_pane_cp05

0xbf32,	// (0x000198f0) popup_wml_miniature_window_g1

0xbf3a,	// (0x000198f8) wml_miniature_view_pane

0x479e,	// (0x0001215c) aid_size_wml_view

0x47a6,	// (0x00012164) wml_miniature_view_pane_g1

0x47af,	// (0x0001216d) wml_miniature_view_pane_g2

0x47b8,	// (0x00012176) wml_miniature_view_pane_g3

0x47c0,	// (0x0001217e) wml_miniature_view_pane_g4

0x47c8,	// (0x00012186) wml_miniature_view_pane_g5

0x47d0,	// (0x0001218e) wml_miniature_view_pane_g6

0x47d8,	// (0x00012196) wml_miniature_view_pane_g7

0x47e0,	// (0x0001219e) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0001d05d) wml_miniature_view_pane_g

0xbf42,	// (0x00019900) background_graphic_ParamLimits

0xbf42,	// (0x00019900) background_graphic

0xbf4e,	// (0x0001990c) wml_tabs_2_pane

0xbf57,	// (0x00019915) wml_tabs_3_pane_ParamLimits

0xbf57,	// (0x00019915) wml_tabs_3_pane

0xbf69,	// (0x00019927) wml_tabs_4_pane_ParamLimits

0xbf69,	// (0x00019927) wml_tabs_4_pane

0xbf7f,	// (0x0001993d) wml_tabs_5_pane_ParamLimits

0xbf7f,	// (0x0001993d) wml_tabs_5_pane

0xbf99,	// (0x00019957) wml_tabs_pane_g2_ParamLimits

0xbf99,	// (0x00019957) wml_tabs_pane_g2

0xbfad,	// (0x0001996b) wml_tabs_pane_g3_ParamLimits

0xbfad,	// (0x0001996b) wml_tabs_pane_g3

0x47e8,	// (0x000121a6) wml_tabs_2_active_pane_ParamLimits

0x47e8,	// (0x000121a6) wml_tabs_2_active_pane

0x47fc,	// (0x000121ba) wml_tabs_2_passive_pane_ParamLimits

0x47fc,	// (0x000121ba) wml_tabs_2_passive_pane

0x4810,	// (0x000121ce) wml_tabs_3_active_pane_cp_ParamLimits

0x4810,	// (0x000121ce) wml_tabs_3_active_pane_cp

0x4825,	// (0x000121e3) wml_tabs_3_passive_pane_ParamLimits

0x4825,	// (0x000121e3) wml_tabs_3_passive_pane

0x4838,	// (0x000121f6) wml_tabs_3_passive_pane_cp_ParamLimits

0x4838,	// (0x000121f6) wml_tabs_3_passive_pane_cp

0x484f,	// (0x0001220d) tabs_4_active_pane

0x4857,	// (0x00012215) tabs_4_passive_pane

0x4861,	// (0x0001221f) tabs_4_passive_pane_cp

0x4869,	// (0x00012227) tabs_4_passive_pane_cp2

0xbc6a,	// (0x00019628) aid_height_text

0x2ffb,	// (0x000109b9) mup_volume_cont_pane_ParamLimits

0x2ffb,	// (0x000109b9) mup_volume_cont_pane

0x10ef,	// (0x0000eaad) aid_size_cell_pinb

0x9aa1,	// (0x0001745f) aid_size_list_pinb

0x4753,	// (0x00012111) mup2_volume_cont_pane_ParamLimits

0x4753,	// (0x00012111) mup2_volume_cont_pane

0xbfc1,	// (0x0001997f) mup2_volume_cont_pane_g1_ParamLimits

0xbfc1,	// (0x0001997f) mup2_volume_cont_pane_g1

0x0dd0,	// (0x0000e78e) aid_size_cell_touch_ParamLimits

0x0dd0,	// (0x0000e78e) aid_size_cell_touch

0x0fde,	// (0x0000e99c) touch_pane_ParamLimits

0x0fde,	// (0x0000e99c) touch_pane

0x9387,	// (0x00016d45) main_rss2_pane

0xc003,	// (0x000199c1) listscroll_rss2_pane

0xc00c,	// (0x000199ca) rss2_navigation_pane

0xc014,	// (0x000199d2) list_rss2_pane

0xa7e9,	// (0x000181a7) scroll_pane_cp22

0xc01c,	// (0x000199da) rss2_navigation_pane_g1

0xc025,	// (0x000199e3) rss2_navigation_pane_g2

0xc02d,	// (0x000199eb) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0001d06e) rss2_navigation_pane_g

0xc035,	// (0x000199f3) rss2_navigation_pane_t1

0x4873,	// (0x00012231) rss2_list_single_pane_ParamLimits

0x4873,	// (0x00012231) rss2_list_single_pane

0xc043,	// (0x00019a01) rss2_list_single_pane_t2

0xc051,	// (0x00019a0f) rss2_list_single_pane_t3_ParamLimits

0xc051,	// (0x00019a0f) rss2_list_single_pane_t3

0xc06e,	// (0x00019a2c) rss2_list_single_pane_t4

0x284a,	// (0x00010208) smil_status_pane_g1

0x93f7,	// (0x00016db5) main_image2_pane_ParamLimits

0x93f7,	// (0x00016db5) main_image2_pane

0x4315,	// (0x00011cd3) main_camera2_pane_g9_ParamLimits

0x4315,	// (0x00011cd3) main_camera2_pane_g9

0x4443,	// (0x00011e01) main_camera2_pane_t5_ParamLimits

0x4443,	// (0x00011e01) main_camera2_pane_t5

0xbee4,	// (0x000198a2) main_camera2_pane_t6_ParamLimits

0xbee4,	// (0x000198a2) main_camera2_pane_t6

0x488b,	// (0x00012249) main_image2_pane_g1_ParamLimits

0x488b,	// (0x00012249) main_image2_pane_g1

0x366d,	// (0x0001102b) smil2_video_pane_ParamLimits

0x366d,	// (0x0001102b) smil2_video_pane

0x93a5,	// (0x00016d63) aid_zoom_text_primary_cp

0x93ed,	// (0x00016dab) popup_preview_fixed_window

0xa024,	// (0x000179e2) im_reading_pane_g1

0x418c,	// (0x00011b4a) cams2_bc_adjust_pane_cp_ParamLimits

0x418c,	// (0x00011b4a) cams2_bc_adjust_pane_cp

0x4472,	// (0x00011e30) cams2_bc_adjust_pane_ParamLimits

0x4472,	// (0x00011e30) cams2_bc_adjust_pane

0xc07c,	// (0x00019a3a) cams2_bc_adjust_pane_g1

0xc084,	// (0x00019a42) cams2_slider_pane

0xc08d,	// (0x00019a4b) cams2_slider_pane_g1

0xc096,	// (0x00019a54) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0001d075) cams2_slider_pane_g

0x11ae,	// (0x0000eb6c) calc_display_pane_ParamLimits

0x11d6,	// (0x0000eb94) calc_paper_pane_ParamLimits

0x11f9,	// (0x0000ebb7) grid_calc_pane_ParamLimits

0xa69c,	// (0x0001805a) popup_clock_digital_window_t1_ParamLimits

0xac51,	// (0x0001860f) main_image_pane_t1

0x1190,	// (0x0000eb4e) aid_size_cell_calc_ParamLimits

0x1190,	// (0x0000eb4e) aid_size_cell_calc

0x3c59,	// (0x00011617) popup_blid_sat_info2_window_ParamLimits

0x3c59,	// (0x00011617) popup_blid_sat_info2_window

0xc0b8,	// (0x00019a76) aid_size_cell_blid

0xc0c0,	// (0x00019a7e) bg_popup_window_pane_cp07

0xc0e3,	// (0x00019aa1) grid_popup_blid_pane

0xc0ed,	// (0x00019aab) heading_pane_cp05_ParamLimits

0xc0ed,	// (0x00019aab) heading_pane_cp05

0xc1b7,	// (0x00019b75) cell_popup_blid_pane_ParamLimits

0xc1b7,	// (0x00019b75) cell_popup_blid_pane

0xc1dd,	// (0x00019b9b) cell_popup_blid_pane_g1

0xc1e5,	// (0x00019ba3) cell_popup_blid_pane_t1

0x4723,	// (0x000120e1) mup2_indicator_pane_ParamLimits

0x4723,	// (0x000120e1) mup2_indicator_pane

0xa936,	// (0x000182f4) mup2_visualizer_osc_pane

0xbf20,	// (0x000198de) mup2_visualizer_spec_pane_ParamLimits

0xbf20,	// (0x000198de) mup2_visualizer_spec_pane

0x48a1,	// (0x0001225f) mup2_spec_half_pane

0x48aa,	// (0x00012268) mup2_spec_half_pane_cp

0x48b2,	// (0x00012270) mup2_spec_bar_pane_ParamLimits

0x48b2,	// (0x00012270) mup2_spec_bar_pane

0xbe6f,	// (0x0001982d) mup2_spec_bar_pane_g1

0xbe79,	// (0x00019837) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0001cfe8) mup2_spec_bar_pane_g

0x48d2,	// (0x00012290) mup2_osc_middle_pane

0xbe8b,	// (0x00019849) mup2_visualizer_osc_pane_g1

0x9425,	// (0x00016de3) popup_number_entry_window_t1_ParamLimits

0x9438,	// (0x00016df6) popup_number_entry_window_t2_ParamLimits

0x944a,	// (0x00016e08) popup_number_entry_window_t3_ParamLimits

0x1030,	// (0x0000e9ee) popup_number_entry_window_t5_ParamLimits

0x1030,	// (0x0000e9ee) popup_number_entry_window_t5

0xf0ec,	// (0x0001caaa) popup_number_entry_window_t_ParamLimits

0x945c,	// (0x00016e1a) text_title_cp2_ParamLimits

0xab2b,	// (0x000184e9) aid_hotspot_pointer_text2_pane

0xab51,	// (0x0001850f) main_viewer_pane_g9_ParamLimits

0xab51,	// (0x0001850f) main_viewer_pane_g9

0xa253,	// (0x00017c11) cale_month_pane_t1_ParamLimits

0xa2e8,	// (0x00017ca6) bg_cale_pane_ParamLimits

0xa300,	// (0x00017cbe) list_cale_pane_ParamLimits

0x9d7d,	// (0x0001773b) listscroll_cale_day_pane_t1

0xa311,	// (0x00017ccf) scroll_pane_cp09_ParamLimits

0x3031,	// (0x000109ef) main_mup_eq_pane_t1_ParamLimits

0x3031,	// (0x000109ef) main_mup_eq_pane_t1

0x304b,	// (0x00010a09) main_mup_eq_pane_t2_ParamLimits

0x304b,	// (0x00010a09) main_mup_eq_pane_t2

0x3065,	// (0x00010a23) main_mup_eq_pane_t3_ParamLimits

0x3065,	// (0x00010a23) main_mup_eq_pane_t3

0x3081,	// (0x00010a3f) main_mup_eq_pane_t4_ParamLimits

0x3081,	// (0x00010a3f) main_mup_eq_pane_t4

0x309d,	// (0x00010a5b) main_mup_eq_pane_t5_ParamLimits

0x309d,	// (0x00010a5b) main_mup_eq_pane_t5

0x30b9,	// (0x00010a77) main_mup_eq_pane_t6_ParamLimits

0x30b9,	// (0x00010a77) main_mup_eq_pane_t6

0x30cd,	// (0x00010a8b) main_mup_eq_pane_t7_ParamLimits

0x30cd,	// (0x00010a8b) main_mup_eq_pane_t7

0x30e1,	// (0x00010a9f) main_mup_eq_pane_t8_ParamLimits

0x30e1,	// (0x00010a9f) main_mup_eq_pane_t8

0x30f5,	// (0x00010ab3) main_mup_eq_pane_t9_ParamLimits

0x30f5,	// (0x00010ab3) main_mup_eq_pane_t9

0x310f,	// (0x00010acd) main_mup_eq_pane_t10_ParamLimits

0x310f,	// (0x00010acd) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0001ce37) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0001ce37) main_mup_eq_pane_t

0x31be,	// (0x00010b7c) mup_equalizer_pane_cp5_ParamLimits

0x31d2,	// (0x00010b90) mup_equalizer_pane_cp6_ParamLimits

0x31e6,	// (0x00010ba4) mup_equalizer_pane_cp7_ParamLimits

0x9387,	// (0x00016d45) main_gallery_pane

0xbe94,	// (0x00019852) smil2_volume_pane

0xbe9c,	// (0x0001985a) smil_status_volume_pane_g1_ParamLimits

0xbeaf,	// (0x0001986d) smil_status_volume_pane_g2_ParamLimits

0xbec2,	// (0x00019880) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0001cfed) smil_status_volume_pane_g_ParamLimits

0xc0c0,	// (0x00019a7e) bg_popup_window_pane_cp07_ParamLimits

0xc0ce,	// (0x00019a8c) blid_firmament_pane

0x48db,	// (0x00012299) aid_size_cell_gallery_ParamLimits

0x48db,	// (0x00012299) aid_size_cell_gallery

0x48f1,	// (0x000122af) grid_gallery_pane_ParamLimits

0x48f1,	// (0x000122af) grid_gallery_pane

0x490a,	// (0x000122c8) cell_gallery_pane_ParamLimits

0x490a,	// (0x000122c8) cell_gallery_pane

0xc1f3,	// (0x00019bb1) bg_cell_gallery_focus_pane_ParamLimits

0xc1f3,	// (0x00019bb1) bg_cell_gallery_focus_pane

0xc205,	// (0x00019bc3) cell_gallery_pane_g1_ParamLimits

0xc205,	// (0x00019bc3) cell_gallery_pane_g1

0x4953,	// (0x00012311) cell_gallery_pane_g2_ParamLimits

0x4953,	// (0x00012311) cell_gallery_pane_g2

0x4960,	// (0x0001231e) cell_gallery_pane_g3_ParamLimits

0x4960,	// (0x0001231e) cell_gallery_pane_g3

0xc211,	// (0x00019bcf) cell_gallery_pane_g4_ParamLimits

0xc211,	// (0x00019bcf) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0001d09b) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0001d09b) cell_gallery_pane_g

0xc21d,	// (0x00019bdb) bg_cell_gallery_focus_pane_g1

0xc225,	// (0x00019be3) bg_cell_gallery_focus_pane_g2

0xc22d,	// (0x00019beb) bg_cell_gallery_focus_pane_g3

0xc235,	// (0x00019bf3) bg_cell_gallery_focus_pane_g4

0xc23d,	// (0x00019bfb) bg_cell_gallery_focus_pane_g5

0xc245,	// (0x00019c03) bg_cell_gallery_focus_pane_g6

0xc24d,	// (0x00019c0b) bg_cell_gallery_focus_pane_g7

0xc255,	// (0x00019c13) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0001d0a4) bg_cell_gallery_focus_pane_g

0xc25d,	// (0x00019c1b) aid_firma_cardinal

0xc271,	// (0x00019c2f) blid_firmament_pane_t1

0xc288,	// (0x00019c46) blid_firmament_pane_t2

0xc29f,	// (0x00019c5d) blid_firmament_pane_t3

0xc2b6,	// (0x00019c74) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0001d0b5) blid_firmament_pane_t

0xc2cd,	// (0x00019c8b) blid_sat_info_pane

0xc2dd,	// (0x00019c9b) blid_sat_info_pane_g1

0xc2dd,	// (0x00019c9b) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0001d0be) blid_sat_info_pane_g

0xc2e7,	// (0x00019ca5) blid_sat_info_pane_t1

0xc2f5,	// (0x00019cb3) smil2_volume_content_pane

0xc2fe,	// (0x00019cbc) smil2_volume_pane_g1

0xc306,	// (0x00019cc4) smil2_volume_content_pane_g1

0xc30f,	// (0x00019ccd) smil2_volume_content_pane_g2

0xc318,	// (0x00019cd6) smil2_volume_content_pane_g3

0xc321,	// (0x00019cdf) smil2_volume_content_pane_g4

0xc32a,	// (0x00019ce8) smil2_volume_content_pane_g5

0xc333,	// (0x00019cf1) smil2_volume_content_pane_g6

0xc33c,	// (0x00019cfa) smil2_volume_content_pane_g7

0xc345,	// (0x00019d03) smil2_volume_content_pane_g8

0xc34e,	// (0x00019d0c) smil2_volume_content_pane_g9

0xc357,	// (0x00019d15) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0001d0c3) smil2_volume_content_pane_g

0x166d,	// (0x0000f02b) cale_week_day_heading_pane_t1_ParamLimits

0x1681,	// (0x0000f03f) cale_week_day_heading_pane_t2_ParamLimits

0x1695,	// (0x0000f053) cale_week_day_heading_pane_t3_ParamLimits

0x16a9,	// (0x0000f067) cale_week_day_heading_pane_t4_ParamLimits

0x16bd,	// (0x0000f07b) cale_week_day_heading_pane_t5_ParamLimits

0x16d1,	// (0x0000f08f) cale_week_day_heading_pane_t6_ParamLimits

0x16e7,	// (0x0000f0a5) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0001cbaf) cale_week_day_heading_pane_t_ParamLimits

0x9d8f,	// (0x0001774d) bg_cale_side_pane_ParamLimits

0x16fb,	// (0x0000f0b9) cale_week_time_pane_t1_ParamLimits

0x1713,	// (0x0000f0d1) cale_week_time_pane_t2_ParamLimits

0x172b,	// (0x0000f0e9) cale_week_time_pane_t3_ParamLimits

0x1743,	// (0x0000f101) cale_week_time_pane_t4_ParamLimits

0x175b,	// (0x0000f119) cale_week_time_pane_t5_ParamLimits

0x1773,	// (0x0000f131) cale_week_time_pane_t6_ParamLimits

0x178b,	// (0x0000f149) cale_week_time_pane_t7_ParamLimits

0x17a3,	// (0x0000f161) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0001cbbe) cale_week_time_pane_t_ParamLimits

0x17bb,	// (0x0000f179) cell_cale_week_pane_g2_ParamLimits

0x9d8f,	// (0x0001774d) bg_cale_side_pane_cp01_ParamLimits

0x26c3,	// (0x00010081) cale_month_week_pane_t1_ParamLimits

0x26da,	// (0x00010098) cale_month_week_pane_t2_ParamLimits

0x26f1,	// (0x000100af) cale_month_week_pane_t3_ParamLimits

0x2708,	// (0x000100c6) cale_month_week_pane_t4_ParamLimits

0x271f,	// (0x000100dd) cale_month_week_pane_t5_ParamLimits

0x2736,	// (0x000100f4) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0001cc97) cale_month_week_pane_t_ParamLimits

0xa28f,	// (0x00017c4d) cell_cale_month_pane_g1_ParamLimits

0x9387,	// (0x00016d45) main_cale_event_viewer_pane

0x9387,	// (0x00016d45) listscroll_cale_event_viewer_pane

0xc360,	// (0x00019d1e) list_cale_ev_pane

0xc368,	// (0x00019d26) scroll_pane_cp023

0xc374,	// (0x00019d32) field_cale_ev_pane_ParamLimits

0xc374,	// (0x00019d32) field_cale_ev_pane

0xc38e,	// (0x00019d4c) field_cale_ev_content_pane_ParamLimits

0xc38e,	// (0x00019d4c) field_cale_ev_content_pane

0xc39a,	// (0x00019d58) field_cale_ev_pane_g1_ParamLimits

0xc39a,	// (0x00019d58) field_cale_ev_pane_g1

0xc3a6,	// (0x00019d64) field_cale_ev_pane_g2_ParamLimits

0xc3a6,	// (0x00019d64) field_cale_ev_pane_g2

0xc3be,	// (0x00019d7c) field_cale_ev_pane_g3_ParamLimits

0xc3be,	// (0x00019d7c) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0001d0d8) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0001d0d8) field_cale_ev_pane_g

0xc3d6,	// (0x00019d94) field_cale_ev_pane_t1_ParamLimits

0xc3d6,	// (0x00019d94) field_cale_ev_pane_t1

0xc3ed,	// (0x00019dab) field_cale_ev_content_pane_t1_ParamLimits

0xc3ed,	// (0x00019dab) field_cale_ev_content_pane_t1

0xaabf,	// (0x0001847d) bg_button_pane_cp01

0x9ba2,	// (0x00017560) listscroll_cale_week_pane_ParamLimits

0x1482,	// (0x0000ee40) popup_toolbar_window_cp01

0x9d7d,	// (0x0001773b) listscroll_cale_week_pane_t1_ParamLimits

0x9ba2,	// (0x00017560) listscroll_cale_day_pane_ParamLimits

0x28a9,	// (0x00010267) popup_toolbar_window_cp02

0x9d7d,	// (0x0001773b) listscroll_cale_day_pane_t1_ParamLimits

0x9ba2,	// (0x00017560) main_cale_month_pane_ParamLimits

0x3e7f,	// (0x0001183d) popup_toolbar_window_cp03_ParamLimits

0x3e7f,	// (0x0001183d) popup_toolbar_window_cp03

0x3531,	// (0x00010eef) main_image_pane_g2_ParamLimits

0x3531,	// (0x00010eef) main_image_pane_g2

0x3542,	// (0x00010f00) main_image_pane_g3_ParamLimits

0x3542,	// (0x00010f00) main_image_pane_g3

0x0002,

0xf50b,	// (0x0001cec9) main_image_pane_g_ParamLimits

0xf50b,	// (0x0001cec9) main_image_pane_g

0xac51,	// (0x0001860f) main_image_pane_t1_ParamLimits

0x3553,	// (0x00010f11) main_image_pane_t2_ParamLimits

0x3553,	// (0x00010f11) main_image_pane_t2

0x3565,	// (0x00010f23) main_image_pane_t3_ParamLimits

0x3565,	// (0x00010f23) main_image_pane_t3

0x358d,	// (0x00010f4b) main_image_pane_t4_ParamLimits

0x358d,	// (0x00010f4b) main_image_pane_t4

0x0003,

0xf512,	// (0x0001ced0) main_image_pane_t_ParamLimits

0xf512,	// (0x0001ced0) main_image_pane_t

0x35ad,	// (0x00010f6b) popup_image_details_window_cp01

0x35b7,	// (0x00010f75) popup_toobar_trans_pane_cp01_ParamLimits

0x35b7,	// (0x00010f75) popup_toobar_trans_pane_cp01

0x3d30,	// (0x000116ee) popup_image_details_window_ParamLimits

0x3d30,	// (0x000116ee) popup_image_details_window

0xbdf5,	// (0x000197b3) popup_image_focus_window

0x4146,	// (0x00011b04) camera2_autofocus_pane_ParamLimits

0x4146,	// (0x00011b04) camera2_autofocus_pane

0x9387,	// (0x00016d45) bg_popup_sub_pane_cp06

0xc40a,	// (0x00019dc8) popup_image_focus_window_g1

0xc412,	// (0x00019dd0) popup_image_focus_window_g2

0xc41a,	// (0x00019dd8) popup_image_focus_window_g3

0xc422,	// (0x00019de0) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0001d0df) popup_image_focus_window_g

0xc42a,	// (0x00019de8) popup_image_focus_window_t1

0xc438,	// (0x00019df6) popup_image_focus_window_t2

0xc448,	// (0x00019e06) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0001d0e8) popup_image_focus_window_t

0xc456,	// (0x00019e14) camera2_autofocus_pane_g1

0x93f7,	// (0x00016db5) bg_tb_trans_pane_cp01

0xc464,	// (0x00019e22) popup_image_details_window_g1

0xc477,	// (0x00019e35) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0001d0fa) popup_image_details_window_g

0xc4a0,	// (0x00019e5e) popup_image_details_window_t1

0xc4b2,	// (0x00019e70) popup_image_details_window_t2

0xc4cb,	// (0x00019e89) popup_image_details_window_t3

0xc4df,	// (0x00019e9d) popup_image_details_window_t4

0xc4fa,	// (0x00019eb8) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0001d101) popup_image_details_window_t

0x9b74,	// (0x00017532) bg_calc_paper_pane_ParamLimits

0x9387,	// (0x00016d45) grid_highlight_pane_cp013

0x9b88,	// (0x00017546) list_calc_pane_ParamLimits

0x9b9a,	// (0x00017558) scroll_pane_cp024

0x9ba2,	// (0x00017560) bg_calc_display_pane_ParamLimits

0x12ee,	// (0x0000ecac) calc_display_pane_t1_ParamLimits

0x1300,	// (0x0000ecbe) calc_display_pane_t2_ParamLimits

0x9bae,	// (0x0001756c) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0001cb31) calc_display_pane_t_ParamLimits

0x13bb,	// (0x0000ed79) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0001cb4e) cell_calc_pane_g

0x13c4,	// (0x0000ed82) cell_calc_pane_t1

0x9c25,	// (0x000175e3) grid_highlight_pane_cp02_ParamLimits

0x9c3b,	// (0x000175f9) toolbar_button_pane_cp01_ParamLimits

0x9c3b,	// (0x000175f9) toolbar_button_pane_cp01

0xac96,	// (0x00018654) temp_image_control_pane_ParamLimits

0xac96,	// (0x00018654) temp_image_control_pane

0x93f7,	// (0x00016db5) main_mp3_pane

0xc514,	// (0x00019ed2) temp_image_control_pane_g1_ParamLimits

0xc514,	// (0x00019ed2) temp_image_control_pane_g1

0xc522,	// (0x00019ee0) temp_image_control_pane_g2_ParamLimits

0xc522,	// (0x00019ee0) temp_image_control_pane_g2

0xc534,	// (0x00019ef2) temp_image_control_pane_g3_ParamLimits

0xc534,	// (0x00019ef2) temp_image_control_pane_g3

0x499d,	// (0x0001235b) temp_image_control_pane_g4_ParamLimits

0x499d,	// (0x0001235b) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0001d10c) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0001d10c) temp_image_control_pane_g

0xc514,	// (0x00019ed2) main_mp3_pane_g1

0x49b0,	// (0x0001236e) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0001d115) main_mp3_pane_g

0xc577,	// (0x00019f35) main_mp3_pane_t1

0x9e78,	// (0x00017836) main_camera_pane_g8_ParamLimits

0x9e78,	// (0x00017836) main_camera_pane_g8

0x1a62,	// (0x0000f420) main_video_pane_g7_ParamLimits

0x1a62,	// (0x0000f420) main_video_pane_g7

0xbf02,	// (0x000198c0) main_camera2_pane_t7_ParamLimits

0xbf02,	// (0x000198c0) main_camera2_pane_t7

0xa07b,	// (0x00017a39) scroll_pane_cp025_ParamLimits

0xa07b,	// (0x00017a39) scroll_pane_cp025

0xa08f,	// (0x00017a4d) scroll_pane_cp026_ParamLimits

0xa08f,	// (0x00017a4d) scroll_pane_cp026

0xa09e,	// (0x00017a5c) wml_content_pane_ParamLimits

0x9387,	// (0x00016d45) main_touch_calib_pane

0x4a7c,	// (0x0001243a) main_touch_calib_pane_g1

0x4a88,	// (0x00012446) main_touch_calib_pane_g2

0x4a94,	// (0x00012452) main_touch_calib_pane_g3

0x4aa0,	// (0x0001245e) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0001d133) main_touch_calib_pane_g

0x4aac,	// (0x0001246a) main_touch_calib_pane_t1

0x4ac6,	// (0x00012484) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0001d13c) main_touch_calib_pane_t

0xa877,	// (0x00018235) mup_progress_pane_cp02

0xa896,	// (0x00018254) navi_pane_g1

0xa8f8,	// (0x000182b6) navi_pane_mp_t3

0x93f7,	// (0x00016db5) main_mp3_pane_ParamLimits

0x3ebd,	// (0x0001187b) navi_pane_ParamLimits

0xc514,	// (0x00019ed2) main_mp3_pane_g1_ParamLimits

0x49b0,	// (0x0001236e) main_mp3_pane_g2_ParamLimits

0x49be,	// (0x0001237c) main_mp3_pane_g3_ParamLimits

0x49be,	// (0x0001237c) main_mp3_pane_g3

0x49cc,	// (0x0001238a) main_mp3_pane_g4_ParamLimits

0x49cc,	// (0x0001238a) main_mp3_pane_g4

0xc544,	// (0x00019f02) main_mp3_pane_g5_ParamLimits

0xc544,	// (0x00019f02) main_mp3_pane_g5

0xc552,	// (0x00019f10) main_mp3_pane_g6_ParamLimits

0xc552,	// (0x00019f10) main_mp3_pane_g6

0xc55f,	// (0x00019f1d) main_mp3_pane_g7_ParamLimits

0xc55f,	// (0x00019f1d) main_mp3_pane_g7

0xc56b,	// (0x00019f29) main_mp3_pane_g8_ParamLimits

0xc56b,	// (0x00019f29) main_mp3_pane_g8

0xf757,	// (0x0001d115) main_mp3_pane_g_ParamLimits

0x49da,	// (0x00012398) main_mp3_pane_t2

0x49e8,	// (0x000123a6) main_mp3_pane_t3

0xc585,	// (0x00019f43) main_mp3_pane_t4

0xc593,	// (0x00019f51) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0001d126) main_mp3_pane_t

0xc5a1,	// (0x00019f5f) mup_progress_pane_cp01

0x93a5,	// (0x00016d63) aid_zoom_text_secondary2

0xc360,	// (0x00019d1e) list_cale_ev2_pane

0xc368,	// (0x00019d26) scroll_pane_cp023_ParamLimits

0x4b1c,	// (0x000124da) field_cale_ev2_pane_ParamLimits

0x4b1c,	// (0x000124da) field_cale_ev2_pane

0x4b42,	// (0x00012500) field_cale_ev2_pane_g1_ParamLimits

0x4b42,	// (0x00012500) field_cale_ev2_pane_g1

0x4b4e,	// (0x0001250c) field_cale_ev2_pane_g2_ParamLimits

0x4b4e,	// (0x0001250c) field_cale_ev2_pane_g2

0x4b66,	// (0x00012524) field_cale_ev2_pane_g3_ParamLimits

0x4b66,	// (0x00012524) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0001d147) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0001d147) field_cale_ev2_pane_g

0xc5b5,	// (0x00019f73) field_cale_ev2_pane_t1_ParamLimits

0xc5b5,	// (0x00019f73) field_cale_ev2_pane_t1

0xc5cc,	// (0x00019f8a) field_cale_ev2_pane_t2_ParamLimits

0xc5cc,	// (0x00019f8a) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0001d150) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0001d150) field_cale_ev2_pane_t

0x33e1,	// (0x00010d9f) main_postcard_pane_g5_ParamLimits

0x33e1,	// (0x00010d9f) main_postcard_pane_g5

0x33f7,	// (0x00010db5) main_postcard_pane_g6_ParamLimits

0x33f7,	// (0x00010db5) main_postcard_pane_g6

0x1812,	// (0x0000f1d0) camera2_autofocus_pane_cp_ParamLimits

0x1812,	// (0x0000f1d0) camera2_autofocus_pane_cp

0x93f7,	// (0x00016db5) main_mup3_pane

0x4b9e,	// (0x0001255c) main_mup3_pane_g1_ParamLimits

0x4b9e,	// (0x0001255c) main_mup3_pane_g1

0x4bc0,	// (0x0001257e) main_mup3_pane_g2_ParamLimits

0x4bc0,	// (0x0001257e) main_mup3_pane_g2

0x4c41,	// (0x000125ff) main_mup3_pane_g3_ParamLimits

0x4c41,	// (0x000125ff) main_mup3_pane_g3

0x4c83,	// (0x00012641) main_mup3_pane_g4_ParamLimits

0x4c83,	// (0x00012641) main_mup3_pane_g4

0x4cc5,	// (0x00012683) main_mup3_pane_g5_ParamLimits

0x4cc5,	// (0x00012683) main_mup3_pane_g5

0x4d09,	// (0x000126c7) main_mup3_pane_g6_ParamLimits

0x4d09,	// (0x000126c7) main_mup3_pane_g6

0xc5e1,	// (0x00019f9f) main_mup3_pane_g7_ParamLimits

0xc5e1,	// (0x00019f9f) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0001d160) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0001d160) main_mup3_pane_g

0x4d85,	// (0x00012743) main_mup3_pane_t1_ParamLimits

0x4d85,	// (0x00012743) main_mup3_pane_t1

0x4df9,	// (0x000127b7) main_mup3_pane_t2_ParamLimits

0x4df9,	// (0x000127b7) main_mup3_pane_t2

0x4ecd,	// (0x0001288b) main_mup3_pane_t4_ParamLimits

0x4ecd,	// (0x0001288b) main_mup3_pane_t4

0x4f27,	// (0x000128e5) main_mup3_pane_t5_ParamLimits

0x4f27,	// (0x000128e5) main_mup3_pane_t5

0x4fdb,	// (0x00012999) main_mup3_pane_t6_ParamLimits

0x4fdb,	// (0x00012999) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0001d171) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0001d171) main_mup3_pane_t

0x508f,	// (0x00012a4d) mup3_progress_pane_ParamLimits

0x508f,	// (0x00012a4d) mup3_progress_pane

0x510b,	// (0x00012ac9) popup_mup3_control_window_ParamLimits

0x510b,	// (0x00012ac9) popup_mup3_control_window

0xc5ef,	// (0x00019fad) popup_mup3_text_window

0x513d,	// (0x00012afb) mup3_progress_pane_t1

0x5154,	// (0x00012b12) mup3_progress_pane_t2

0xc5f7,	// (0x00019fb5) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0001d17e) mup3_progress_pane_t

0xc60e,	// (0x00019fcc) mup_progress_pane_cp03

0x9387,	// (0x00016d45) bg_tb_trans_pane_cp04

0x516b,	// (0x00012b29) mup3_volume_pane

0x5173,	// (0x00012b31) popup_mup3_control_window_g1

0x517c,	// (0x00012b3a) mup3_volume_pane_g1

0x5185,	// (0x00012b43) mup3_volume_pane_g2

0x518e,	// (0x00012b4c) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0001d185) mup3_volume_pane_g

0x9387,	// (0x00016d45) bg_tb_trans_pane_cp03

0xc61e,	// (0x00019fdc) popup_mup3_text_window_g1

0xc626,	// (0x00019fe4) popup_mup3_text_window_t1

0x9bfc,	// (0x000175ba) list_calc_item_pane_g1_ParamLimits

0xbfea,	// (0x000199a8) mup_volume_pane_cp_g1

0x4ae0,	// (0x0001249e) main_touch_calib_pane_t3

0x4af4,	// (0x000124b2) main_touch_calib_pane_t4

0x4b08,	// (0x000124c6) main_touch_calib_pane_t5

0x9391,	// (0x00016d4f) aid_cell_size_toolbar2

0x9399,	// (0x00016d57) aid_popup3_width_pane

0x93a5,	// (0x00016d63) aid_zoom_text_msg_primary

0x9e45,	// (0x00017803) vorec_t7

0x9bc0,	// (0x0001757e) bg_calc_paper_pane_g1_ParamLimits

0x9bcc,	// (0x0001758a) bg_calc_paper_pane_g2_ParamLimits

0x9bd8,	// (0x00017596) bg_calc_paper_pane_g3_ParamLimits

0x9be4,	// (0x000175a2) bg_calc_paper_pane_g4_ParamLimits

0x9bf0,	// (0x000175ae) bg_calc_paper_pane_g5_ParamLimits

0x1347,	// (0x0000ed05) bg_calc_paper_pane_g6_ParamLimits

0x1356,	// (0x0000ed14) bg_calc_paper_pane_g7_ParamLimits

0x1365,	// (0x0000ed23) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0001cb38) bg_calc_paper_pane_g_ParamLimits

0x1378,	// (0x0000ed36) calc_bg_paper_pane_g9_ParamLimits

0x196c,	// (0x0000f32a) image_qvga_pane_ParamLimits

0x196c,	// (0x0000f32a) image_qvga_pane

0x9a71,	// (0x0001742f) bg_popup_sub_pane_cp04_ParamLimits

0xabcd,	// (0x0001858b) popup_mup_playback_window_g1_ParamLimits

0xabd9,	// (0x00018597) popup_mup_playback_window_t1_ParamLimits

0xabee,	// (0x000185ac) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0001cec4) popup_mup_playback_window_t_ParamLimits

0x463d,	// (0x00011ffb) main_mup2_pane_g3_ParamLimits

0x463d,	// (0x00011ffb) main_mup2_pane_g3

0x1cc3,	// (0x0000f681) popup_toolbar_window_cp04

0xafe3,	// (0x000189a1) popup_call2_audio_second_window_g3_ParamLimits

0xafe3,	// (0x000189a1) popup_call2_audio_second_window_g3

0xb3ed,	// (0x00018dab) popup_call2_audio_first_window_g4_ParamLimits

0xb3ed,	// (0x00018dab) popup_call2_audio_first_window_g4

0xba6c,	// (0x0001942a) popup_call2_audio_in_window_g4_ParamLimits

0xba6c,	// (0x0001942a) popup_call2_audio_in_window_g4

0x3513,	// (0x00010ed1) aid_area_sk_bg_cut_ParamLimits

0x3513,	// (0x00010ed1) aid_area_sk_bg_cut

0xac03,	// (0x000185c1) aid_area_sk_bg_cut_2_ParamLimits

0xac03,	// (0x000185c1) aid_area_sk_bg_cut_2

0x4943,	// (0x00012301) aid_placing_details_win

0x494b,	// (0x00012309) aid_placing_details_win_2

0xc456,	// (0x00019e14) camera2_autofocus_pane_g1_ParamLimits

0x0f7d,	// (0x0000e93b) popup_fixed_preview_cale_window_ParamLimits

0x0f7d,	// (0x0000e93b) popup_fixed_preview_cale_window

0xa950,	// (0x0001830e) navi_slider_pane_g3

0xa959,	// (0x00018317) navi_slider_pane_g4

0xa962,	// (0x00018320) navi_slider_pane_g5

0xa950,	// (0x0001830e) navi_slider_pane_g6

0xa96b,	// (0x00018329) navi_slider_pane_g7

0xaa8c,	// (0x0001844a) mup_scale_pane_g3

0xaa95,	// (0x00018453) mup_scale_pane_g4

0xaa9e,	// (0x0001845c) mup_scale_pane_g5

0x31fa,	// (0x00010bb8) mup_scale_pane_g6

0x3203,	// (0x00010bc1) mup_scale_pane_g7

0xa950,	// (0x0001830e) cams2_slider_pane_g3

0xc09f,	// (0x00019a5d) cams2_slider_pane_g4

0xc0a7,	// (0x00019a65) cams2_slider_pane_g5

0xa950,	// (0x0001830e) cams2_slider_pane_g6

0xc0af,	// (0x00019a6d) cams2_slider_pane_g7

0xc2dd,	// (0x00019c9b) camera2_autofocus_pane_cp_g1

0xc634,	// (0x00019ff2) bg_popup_preview_window_pane_cp02_ParamLimits

0xc634,	// (0x00019ff2) bg_popup_preview_window_pane_cp02

0xc640,	// (0x00019ffe) list_fp_cale_pane_ParamLimits

0xc640,	// (0x00019ffe) list_fp_cale_pane

0xc64c,	// (0x0001a00a) popup_fixed_preview_cale_window_t1_ParamLimits

0xc64c,	// (0x0001a00a) popup_fixed_preview_cale_window_t1

0x5197,	// (0x00012b55) popup_fixed_preview_cale_window_t2_ParamLimits

0x5197,	// (0x00012b55) popup_fixed_preview_cale_window_t2

0x51ac,	// (0x00012b6a) popup_fixed_preview_cale_window_t3_ParamLimits

0x51ac,	// (0x00012b6a) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0001d18c) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0001d18c) popup_fixed_preview_cale_window_t

0x51c1,	// (0x00012b7f) list_single_fp_cale_pane_ParamLimits

0x51c1,	// (0x00012b7f) list_single_fp_cale_pane

0xc66a,	// (0x0001a028) list_single_fp_cale_pane_g1_ParamLimits

0xc66a,	// (0x0001a028) list_single_fp_cale_pane_g1

0xc676,	// (0x0001a034) list_single_fp_cale_pane_g2_ParamLimits

0xc676,	// (0x0001a034) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0001d193) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0001d193) list_single_fp_cale_pane_g

0xc68f,	// (0x0001a04d) list_single_fp_cale_pane_t1_ParamLimits

0xc68f,	// (0x0001a04d) list_single_fp_cale_pane_t1

0xc6a1,	// (0x0001a05f) list_single_fp_cale_pane_t2_ParamLimits

0xc6a1,	// (0x0001a05f) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0001d19a) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0001d19a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9387,	// (0x00016d45) main_dialer_pane

0x51d9,	// (0x00012b97) aid_cell_size_keypad

0x51e3,	// (0x00012ba1) dialer_ne_pane

0x51eb,	// (0x00012ba9) grid_dialer_command_1_pane

0x51f3,	// (0x00012bb1) grid_dialer_command_2_pane

0x51fb,	// (0x00012bb9) grid_dialer_keypad_pane

0x520d,	// (0x00012bcb) bg_popup_call_pane_cp06_ParamLimits

0x520d,	// (0x00012bcb) bg_popup_call_pane_cp06

0x5219,	// (0x00012bd7) dialer_ne_clear_pane_ParamLimits

0x5219,	// (0x00012bd7) dialer_ne_clear_pane

0xc6d4,	// (0x0001a092) dialer_ne_pane_g1

0xc6dc,	// (0x0001a09a) dialer_ne_pane_t1_ParamLimits

0xc6dc,	// (0x0001a09a) dialer_ne_pane_t1

0x5225,	// (0x00012be3) dialer_ne_pane_t2_ParamLimits

0x5225,	// (0x00012be3) dialer_ne_pane_t2

0x524f,	// (0x00012c0d) dialer_ne_pane_t3_ParamLimits

0x524f,	// (0x00012c0d) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0001d19f) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0001d19f) dialer_ne_pane_t

0x527f,	// (0x00012c3d) dialer_ne_pane_t3_copy1_ParamLimits

0x527f,	// (0x00012c3d) dialer_ne_pane_t3_copy1

0x52ae,	// (0x00012c6c) cell_dialer_keypad_pane_ParamLimits

0x52ae,	// (0x00012c6c) cell_dialer_keypad_pane

0x52c5,	// (0x00012c83) cell_dialer_command_1_pane_ParamLimits

0x52c5,	// (0x00012c83) cell_dialer_command_1_pane

0x52db,	// (0x00012c99) cell_dialer_command_2_pane_ParamLimits

0x52db,	// (0x00012c99) cell_dialer_command_2_pane

0xc6ee,	// (0x0001a0ac) bg_button_pane_cp02_ParamLimits

0xc6ee,	// (0x0001a0ac) bg_button_pane_cp02

0x52ea,	// (0x00012ca8) cell_dialer_keypad_pane_g1_ParamLimits

0x52ea,	// (0x00012ca8) cell_dialer_keypad_pane_g1

0xc6ee,	// (0x0001a0ac) bg_button_pane_cp03_ParamLimits

0xc6ee,	// (0x0001a0ac) bg_button_pane_cp03

0x52ff,	// (0x00012cbd) cell_dialer_command_1_pane_g1_ParamLimits

0x52ff,	// (0x00012cbd) cell_dialer_command_1_pane_g1

0xc6fa,	// (0x0001a0b8) bg_button_pane_cp04

0x5313,	// (0x00012cd1) cell_dialer_command_2_pane_g1

0xa936,	// (0x000182f4) bg_button_pane_cp06

0xc702,	// (0x0001a0c0) dialer_ne_clear_pane_g1

0x2d38,	// (0x000106f6) navi_pane_g2

0x2d66,	// (0x00010724) navi_pane_g3

0x0002,

0xf409,	// (0x0001cdc7) navi_pane_g

0x2d8f,	// (0x0001074d) navi_pane_mv_g2

0x2db6,	// (0x00010774) navi_pane_mv_g5

0x2dbe,	// (0x0001077c) navi_pane_mv_t1

0x9ba2,	// (0x00017560) main_clock2_pane

0x5346,	// (0x00012d04) main_clock2_list_pane_ParamLimits

0x5346,	// (0x00012d04) main_clock2_list_pane

0x537c,	// (0x00012d3a) main_clock2_pane_t1_ParamLimits

0x537c,	// (0x00012d3a) main_clock2_pane_t1

0x53ba,	// (0x00012d78) main_clock2_pane_t2_ParamLimits

0x53ba,	// (0x00012d78) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0001d1a6) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0001d1a6) main_clock2_pane_t

0x5444,	// (0x00012e02) popup_clock_analogue_window_cp03_ParamLimits

0x5444,	// (0x00012e02) popup_clock_analogue_window_cp03

0x546b,	// (0x00012e29) popup_clock_digital_window_cp02_ParamLimits

0x546b,	// (0x00012e29) popup_clock_digital_window_cp02

0x54e0,	// (0x00012e9e) main_clock2_list_single_pane_ParamLimits

0x54e0,	// (0x00012e9e) main_clock2_list_single_pane

0xa936,	// (0x000182f4) list_highlight_pane_cp05

0xc70a,	// (0x0001a0c8) main_clock2_list_single_pane_t1

0x1cc3,	// (0x0000f681) popup_toolbar_window_cp04_ParamLimits

0x496d,	// (0x0001232b) camera2_autofocus_pane_g2_ParamLimits

0x496d,	// (0x0001232b) camera2_autofocus_pane_g2

0x4979,	// (0x00012337) camera2_autofocus_pane_g3_ParamLimits

0x4979,	// (0x00012337) camera2_autofocus_pane_g3

0x4985,	// (0x00012343) camera2_autofocus_pane_g4_ParamLimits

0x4985,	// (0x00012343) camera2_autofocus_pane_g4

0x4991,	// (0x0001234f) camera2_autofocus_pane_g5_ParamLimits

0x4991,	// (0x0001234f) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0001d0ef) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0001d0ef) camera2_autofocus_pane_g

0x4b7e,	// (0x0001253c) camera2_autofocus_pane_cp_g2

0x4b86,	// (0x00012544) camera2_autofocus_pane_cp_g3

0x4b8e,	// (0x0001254c) camera2_autofocus_pane_cp_g4

0x4b96,	// (0x00012554) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0001d155) camera2_autofocus_pane_cp_g

0x5205,	// (0x00012bc3) popup_dialer_spcha_window

0x9387,	// (0x00016d45) bg_popup_sub_pane_cp07

0xc718,	// (0x0001a0d6) list_spcha_pane

0xc720,	// (0x0001a0de) list_single_spcha_pane_ParamLimits

0xc720,	// (0x0001a0de) list_single_spcha_pane

0x9387,	// (0x00016d45) list_highlight_pane_cp06

0xc731,	// (0x0001a0ef) list_single_spcha_pane_t1

0xb816,	// (0x000191d4) popup_call2_audio_out_window_g4_ParamLimits

0xb816,	// (0x000191d4) popup_call2_audio_out_window_g4

0x9387,	// (0x00016d45) main_imed2_pane

0xbdfd,	// (0x000197bb) popup_imed_adjust2_window

0x3d48,	// (0x00011706) popup_imed_trans_window_ParamLimits

0x3d48,	// (0x00011706) popup_imed_trans_window

0xc119,	// (0x00019ad7) popup_blid_sat_info2_window_t1

0xc127,	// (0x00019ae5) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0001d084) popup_blid_sat_info2_window_t

0x558a,	// (0x00012f48) aid_size_cell_colour_35

0x55aa,	// (0x00012f68) aid_size_cell_colour_112

0x55ca,	// (0x00012f88) aid_size_cell_effect

0xbdd5,	// (0x00019793) bg_tb_trans_pane_cp02

0xa384,	// (0x00017d42) heading_imed_pane

0x55ea,	// (0x00012fa8) listscroll_imed_pane

0xc73f,	// (0x0001a0fd) heading_imed_pane_g1

0xc747,	// (0x0001a105) heading_imed_pane_t1

0xc755,	// (0x0001a113) grid_imed_colour_35_pane_ParamLimits

0xc755,	// (0x0001a113) grid_imed_colour_35_pane

0x55f6,	// (0x00012fb4) grid_imed_effect_pane

0xc770,	// (0x0001a12e) list_imed_aspect_pane

0x560b,	// (0x00012fc9) scroll_pane_cp027_ParamLimits

0x560b,	// (0x00012fc9) scroll_pane_cp027

0x561c,	// (0x00012fda) cell_imed_effect_pane_ParamLimits

0x561c,	// (0x00012fda) cell_imed_effect_pane

0xc778,	// (0x0001a136) cell_imed_colour_pane_ParamLimits

0xc778,	// (0x0001a136) cell_imed_colour_pane

0xc7ba,	// (0x0001a178) cell_imed_colour_pane_g1_ParamLimits

0xc7ba,	// (0x0001a178) cell_imed_colour_pane_g1

0xc7cb,	// (0x0001a189) hgihlgiht_grid_pane_cp016_ParamLimits

0xc7cb,	// (0x0001a189) hgihlgiht_grid_pane_cp016

0x5643,	// (0x00013001) cell_imed_effect_pane_g1

0x564b,	// (0x00013009) grid_highlight_pane_cp017

0x9d25,	// (0x000176e3) list_imed_single_pane_ParamLimits

0x9d25,	// (0x000176e3) list_imed_single_pane

0x9387,	// (0x00016d45) list_highlight_pane_cp07

0xc7dc,	// (0x0001a19a) list_imed_aspect_pane_comp1_t1

0xbdd5,	// (0x00019793) bg_tb_trans_pane_cp05

0xc7fe,	// (0x0001a1bc) popup_imed_adjust2_window_g1

0xc825,	// (0x0001a1e3) popup_imed_adjust2_window_t1

0xc83d,	// (0x0001a1fb) slider_imed_adjust_pane

0xc851,	// (0x0001a20f) slider_imed_adjust_pane_g1

0xc861,	// (0x0001a21f) slider_imed_adjust_pane_g2

0xc871,	// (0x0001a22f) slider_imed_adjust_pane_g3

0xc882,	// (0x0001a240) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0001d1c3) slider_imed_adjust_pane_g

0x5654,	// (0x00013012) aid_size_cell_clipart2

0x5660,	// (0x0001301e) grid_imed_clipart_pane

0xc893,	// (0x0001a251) scroll_pane_cp031

0x566a,	// (0x00013028) cell_imed_clipart_pane_ParamLimits

0x566a,	// (0x00013028) cell_imed_clipart_pane

0x5691,	// (0x0001304f) cell_imed_clipart_pane_g1

0x9387,	// (0x00016d45) grid_highlight_pane_cp014

0x535b,	// (0x00012d19) main_clock2_pane_g1_ParamLimits

0x535b,	// (0x00012d19) main_clock2_pane_g1

0x548b,	// (0x00012e49) aid_call2_pane_cp10

0x549d,	// (0x00012e5b) aid_call_pane_cp10

0xa86b,	// (0x00018229) popup_clock_analogue_window_cp10_g1

0xa86b,	// (0x00018229) popup_clock_analogue_window_cp10_g2

0x54af,	// (0x00012e6d) popup_clock_analogue_window_cp10_g3

0x54af,	// (0x00012e6d) popup_clock_analogue_window_cp10_g4

0xa86b,	// (0x00018229) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0001d1b1) popup_clock_analogue_window_cp10_g

0x54c1,	// (0x00012e7f) popup_clock_analogue_window_cp10_t1

0x54f2,	// (0x00012eb0) clock_digital_number_pane_cp10_ParamLimits

0x54f2,	// (0x00012eb0) clock_digital_number_pane_cp10

0x550a,	// (0x00012ec8) clock_digital_number_pane_cp11_ParamLimits

0x550a,	// (0x00012ec8) clock_digital_number_pane_cp11

0x5522,	// (0x00012ee0) clock_digital_number_pane_cp12_ParamLimits

0x5522,	// (0x00012ee0) clock_digital_number_pane_cp12

0x553a,	// (0x00012ef8) clock_digital_number_pane_cp13_ParamLimits

0x553a,	// (0x00012ef8) clock_digital_number_pane_cp13

0x5552,	// (0x00012f10) clock_digital_separator_pane_cp10_ParamLimits

0x5552,	// (0x00012f10) clock_digital_separator_pane_cp10

0x556a,	// (0x00012f28) popup_clock_digital_window_cp02_t1_ParamLimits

0x556a,	// (0x00012f28) popup_clock_digital_window_cp02_t1

0x9a69,	// (0x00017427) clock_digital_number_pane_cp10_g1

0x9a69,	// (0x00017427) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0001d1cc) clock_digital_number_pane_cp10_g

0x9a69,	// (0x00017427) clock_digital_separator_pane_cp10_g1

0x9a69,	// (0x00017427) clock_digital_separator_pane_g2_cp10

0xa906,	// (0x000182c4) navi_pane_vded_g4

0xa90f,	// (0x000182cd) navi_pane_vded_g5

0xa918,	// (0x000182d6) navi_pane_vded_t1

0x9387,	// (0x00016d45) main_vded_pane

0x569a,	// (0x00013058) main_vded_pane_g1

0x56a6,	// (0x00013064) main_vded_pane_g2

0x56b0,	// (0x0001306e) main_vded_pane_g3

0x0002,

0xf813,	// (0x0001d1d1) main_vded_pane_g

0x56ba,	// (0x00013078) main_vded_pane_t1

0x56c8,	// (0x00013086) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0001d1d8) main_vded_pane_t

0x56d6,	// (0x00013094) vded_slider_pane

0x56e0,	// (0x0001309e) vded_video_pane

0xc89b,	// (0x0001a259) vded_video_pane_g1

0x56ea,	// (0x000130a8) vded_video_pane_g2

0xc2dd,	// (0x00019c9b) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0001d1dd) vded_video_pane_g

0xc8a5,	// (0x0001a263) vded_slider_pane_g1

0xbfea,	// (0x000199a8) vded_slider_pane_g2

0xc8ae,	// (0x0001a26c) vded_slider_pane_g3

0xc8b7,	// (0x0001a275) vded_slider_pane_g4

0xc8c0,	// (0x0001a27e) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0001d1e4) vded_slider_pane_g

0x50f3,	// (0x00012ab1) mup3_rocker_pane_ParamLimits

0x50f3,	// (0x00012ab1) mup3_rocker_pane

0x56f3,	// (0x000130b1) mup3_control_keys_pane_g1

0x56fb,	// (0x000130b9) mup3_control_keys_pane_g2

0x5703,	// (0x000130c1) mup3_control_keys_pane_g3

0x570b,	// (0x000130c9) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0001d1ef) mup3_control_keys_pane_g

0x0fb4,	// (0x0000e972) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0fb4,	// (0x0000e972) popup_toolbar2_fixed_window_cp01

0x5127,	// (0x00012ae5) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5127,	// (0x00012ae5) popup_toolbar2_fixed_window_cp02

0xb155,	// (0x00018b13) popup_call2_audio_second_window_t4_ParamLimits

0xb155,	// (0x00018b13) popup_call2_audio_second_window_t4

0xb683,	// (0x00019041) popup_call2_audio_first_window_t6_ParamLimits

0xb683,	// (0x00019041) popup_call2_audio_first_window_t6

0xb919,	// (0x000192d7) popup_call2_audio_out_window_t6_ParamLimits

0xb919,	// (0x000192d7) popup_call2_audio_out_window_t6

0x9387,	// (0x00016d45) main_vitu_pane

0x571b,	// (0x000130d9) aid_size_cell_itu_ParamLimits

0x571b,	// (0x000130d9) aid_size_cell_itu

0x93f7,	// (0x00016db5) bg_popup_window_pane_cp08_ParamLimits

0x93f7,	// (0x00016db5) bg_popup_window_pane_cp08

0x5731,	// (0x000130ef) field_vitu_entry_pane_ParamLimits

0x5731,	// (0x000130ef) field_vitu_entry_pane

0x5748,	// (0x00013106) grid_vitu_function_pane_ParamLimits

0x5748,	// (0x00013106) grid_vitu_function_pane

0x5763,	// (0x00013121) grid_vitu_itu_pane_ParamLimits

0x5763,	// (0x00013121) grid_vitu_itu_pane

0x5781,	// (0x0001313f) cell_vitu_itu_pane_ParamLimits

0x5781,	// (0x0001313f) cell_vitu_itu_pane

0x57a5,	// (0x00013163) cell_vitu_function_pane_ParamLimits

0x57a5,	// (0x00013163) cell_vitu_function_pane

0x93f7,	// (0x00016db5) bg_popup_sub_pane_cp08_ParamLimits

0x93f7,	// (0x00016db5) bg_popup_sub_pane_cp08

0x57c0,	// (0x0001317e) field_vitu_entry_pane_t1_ParamLimits

0x57c0,	// (0x0001317e) field_vitu_entry_pane_t1

0xc8e1,	// (0x0001a29f) field_vitu_entry_pane_t2_ParamLimits

0xc8e1,	// (0x0001a29f) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0001d1fd) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0001d1fd) field_vitu_entry_pane_t

0xc8fe,	// (0x0001a2bc) bg_button_pane_cp05_ParamLimits

0xc8fe,	// (0x0001a2bc) bg_button_pane_cp05

0x57e0,	// (0x0001319e) cell_vitu_itu_pane_g1

0x57f8,	// (0x000131b6) cell_vitu_itu_pane_t1_ParamLimits

0x57f8,	// (0x000131b6) cell_vitu_itu_pane_t1

0x580a,	// (0x000131c8) cell_vitu_itu_pane_t2_ParamLimits

0x580a,	// (0x000131c8) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0001d202) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0001d202) cell_vitu_itu_pane_t

0xc90c,	// (0x0001a2ca) bg_button_pane_cp07

0x583f,	// (0x000131fd) cell_vitu_function_pane_g1

0x9b3c,	// (0x000174fa) main_calc_pane_g1

0x0df4,	// (0x0000e7b2) aid_visual_content_pane

0x9387,	// (0x00016d45) main_vradio_pane

0x5848,	// (0x00013206) main_vradio_pane_g1_ParamLimits

0x5848,	// (0x00013206) main_vradio_pane_g1

0xc916,	// (0x0001a2d4) main_vradio_pane_g2_ParamLimits

0xc916,	// (0x0001a2d4) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0001d209) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0001d209) main_vradio_pane_g

0x5861,	// (0x0001321f) main_vradio_pane_t1_ParamLimits

0x5861,	// (0x0001321f) main_vradio_pane_t1

0x5876,	// (0x00013234) main_vradio_pane_t2_ParamLimits

0x5876,	// (0x00013234) main_vradio_pane_t2

0xc923,	// (0x0001a2e1) main_vradio_pane_t3_ParamLimits

0xc923,	// (0x0001a2e1) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0001d20e) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0001d20e) main_vradio_pane_t

0x588b,	// (0x00013249) vradio_rocker_control_pane_ParamLimits

0x588b,	// (0x00013249) vradio_rocker_control_pane

0x589d,	// (0x0001325b) vradio_station_info_pane_ParamLimits

0x589d,	// (0x0001325b) vradio_station_info_pane

0xc937,	// (0x0001a2f5) vradio_frequency_info_pane_ParamLimits

0xc937,	// (0x0001a2f5) vradio_frequency_info_pane

0xc2dd,	// (0x00019c9b) vradio_station_info_pane_g1

0xc946,	// (0x0001a304) vradio_station_info_pane_t1_ParamLimits

0xc946,	// (0x0001a304) vradio_station_info_pane_t1

0xc968,	// (0x0001a326) vradio_station_info_pane_t2_ParamLimits

0xc968,	// (0x0001a326) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0001d215) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0001d215) vradio_station_info_pane_t

0xc97a,	// (0x0001a338) vradio_tuning_pane

0xc982,	// (0x0001a340) vradio_rocker_control_pane_g1

0xc98a,	// (0x0001a348) vradio_rocker_control_pane_g2

0xc992,	// (0x0001a350) vradio_rocker_control_pane_g3

0xc99a,	// (0x0001a358) vradio_rocker_control_pane_g4

0xc9a2,	// (0x0001a360) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0001d21a) vradio_rocker_control_pane_g

0x58af,	// (0x0001326d) vradio_frequency_info_pane_g1

0xc9b8,	// (0x0001a376) vradio_frequency_info_pane_t1_ParamLimits

0xc9b8,	// (0x0001a376) vradio_frequency_info_pane_t1

0x58b9,	// (0x00013277) vradio_tuning_pane_g1

0x58c4,	// (0x00013282) vradio_tuning_pane_t1

0x93b5,	// (0x00016d73) area_side_right_pane_ParamLimits

0x93b5,	// (0x00016d73) area_side_right_pane

0xbd9c,	// (0x0001975a) status_small_pane_g1

0xbda4,	// (0x00019762) status_small_pane_g2

0xbdad,	// (0x0001976b) status_small_pane_g3

0xbdb6,	// (0x00019774) status_small_pane_g4

0x0003,

0xf61c,	// (0x0001cfda) status_small_pane_g

0xbdbf,	// (0x0001977d) status_small_pane_t1

0x9387,	// (0x00016d45) main_video3_pane

0xc9cc,	// (0x0001a38a) cams_zoom_vslider_pane

0xc9d4,	// (0x0001a392) image3_wide_pane_ParamLimits

0xc9d4,	// (0x0001a392) image3_wide_pane

0xc9ee,	// (0x0001a3ac) image3_wide_small_pane

0xc9fa,	// (0x0001a3b8) main_video3_pane_g1_ParamLimits

0xc9fa,	// (0x0001a3b8) main_video3_pane_g1

0xca16,	// (0x0001a3d4) main_video3_pane_g2_ParamLimits

0xca16,	// (0x0001a3d4) main_video3_pane_g2

0x0001,

0xf867,	// (0x0001d225) main_video3_pane_g_ParamLimits

0xf867,	// (0x0001d225) main_video3_pane_g

0xca32,	// (0x0001a3f0) main_video3_pane_t1_ParamLimits

0xca32,	// (0x0001a3f0) main_video3_pane_t1

0xca5d,	// (0x0001a41b) main_video3_pane_t2_ParamLimits

0xca5d,	// (0x0001a41b) main_video3_pane_t2

0xca88,	// (0x0001a446) main_video3_pane_t3_ParamLimits

0xca88,	// (0x0001a446) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0001d22a) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0001d22a) main_video3_pane_t

0xcab5,	// (0x0001a473) cams_zoom_vslider_pane_g1

0xcabe,	// (0x0001a47c) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0001d231) cams_zoom_vslider_pane_g

0xcac6,	// (0x0001a484) small_slider_vertical_pane

0xc2dd,	// (0x00019c9b) small_slider_vertical_pane_g1

0xc2dd,	// (0x00019c9b) small_slider_vertical_pane_g2

0xcace,	// (0x0001a48c) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0001d236) small_slider_vertical_pane_g

0x9387,	// (0x00016d45) main_hwr_training_pane

0xcad7,	// (0x0001a495) hwr_training_instruct_pane_ParamLimits

0xcad7,	// (0x0001a495) hwr_training_instruct_pane

0x58d3,	// (0x00013291) hwr_training_navi_pane_ParamLimits

0x58d3,	// (0x00013291) hwr_training_navi_pane

0x58f2,	// (0x000132b0) hwr_training_write_pane_ParamLimits

0x58f2,	// (0x000132b0) hwr_training_write_pane

0x9387,	// (0x00016d45) bg_frame_shadow_pane

0xcb0e,	// (0x0001a4cc) hwr_training_write_pane_g1

0xcb16,	// (0x0001a4d4) hwr_training_write_pane_g2

0xcb1e,	// (0x0001a4dc) hwr_training_write_pane_g3

0xcb26,	// (0x0001a4e4) hwr_training_write_pane_g4

0xcb2e,	// (0x0001a4ec) hwr_training_write_pane_g5

0xcb36,	// (0x0001a4f4) hwr_training_write_pane_g6

0xcb3e,	// (0x0001a4fc) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0001d23d) hwr_training_write_pane_g

0xcb46,	// (0x0001a504) hwr_training_navi_pane_g1_ParamLimits

0xcb46,	// (0x0001a504) hwr_training_navi_pane_g1

0xcb58,	// (0x0001a516) hwr_training_navi_pane_g2_ParamLimits

0xcb58,	// (0x0001a516) hwr_training_navi_pane_g2

0xcb6a,	// (0x0001a528) hwr_training_navi_pane_g3_ParamLimits

0xcb6a,	// (0x0001a528) hwr_training_navi_pane_g3

0xcb7a,	// (0x0001a538) hwr_training_navi_pane_g4_ParamLimits

0xcb7a,	// (0x0001a538) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0001d24c) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0001d24c) hwr_training_navi_pane_g

0xcb87,	// (0x0001a545) hwr_training_navi_pane_t1

0x593c,	// (0x000132fa) list_single_hwr_training_instruct_pane_ParamLimits

0x593c,	// (0x000132fa) list_single_hwr_training_instruct_pane

0xcb95,	// (0x0001a553) list_single_hwr_training_instruct_pane_t1

0xc21d,	// (0x00019bdb) bg_frame_shadow_pane_g1

0xcba4,	// (0x0001a562) bg_frame_shadow_pane_g2

0xcbac,	// (0x0001a56a) bg_frame_shadow_pane_g3

0xcbb4,	// (0x0001a572) bg_frame_shadow_pane_g4

0xcbbc,	// (0x0001a57a) bg_frame_shadow_pane_g5

0xcbc4,	// (0x0001a582) bg_frame_shadow_pane_g6

0xcbcc,	// (0x0001a58a) bg_frame_shadow_pane_g7

0x9c9b,	// (0x00017659) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0001d257) bg_frame_shadow_pane_g

0x9387,	// (0x00016d45) main_video_tele_dialer_pane

0x5959,	// (0x00013317) aid_size_cell_video_keypad_ParamLimits

0x5959,	// (0x00013317) aid_size_cell_video_keypad

0x5973,	// (0x00013331) grid_video_dialer_keypad_pane_ParamLimits

0x5973,	// (0x00013331) grid_video_dialer_keypad_pane

0x59bf,	// (0x0001337d) video_down_pane_cp_ParamLimits

0x59bf,	// (0x0001337d) video_down_pane_cp

0x59ef,	// (0x000133ad) cell_video_dialer_keypad_pane_ParamLimits

0x59ef,	// (0x000133ad) cell_video_dialer_keypad_pane

0xcbd4,	// (0x0001a592) bg_button_pane_cp08_ParamLimits

0xcbd4,	// (0x0001a592) bg_button_pane_cp08

0x5a11,	// (0x000133cf) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5a11,	// (0x000133cf) cell_video_dialer_keypad_pane_g1

0x50dd,	// (0x00012a9b) mup3_rocker2_pane_ParamLimits

0x50dd,	// (0x00012a9b) mup3_rocker2_pane

0xc2dd,	// (0x00019c9b) mup3_rocker2_pane_g1

0x3c31,	// (0x000115ef) main_dialer2_pane

0x9387,	// (0x00016d45) main_mp4_pane

0xcbe8,	// (0x0001a5a6) main_mp4_pane_g1_ParamLimits

0xcbe8,	// (0x0001a5a6) main_mp4_pane_g1

0xcbe8,	// (0x0001a5a6) main_mp4_pane_g2_ParamLimits

0xcbe8,	// (0x0001a5a6) main_mp4_pane_g2

0x5a4c,	// (0x0001340a) main_mp4_pane_g3_ParamLimits

0x5a4c,	// (0x0001340a) main_mp4_pane_g3

0xcbf6,	// (0x0001a5b4) main_mp4_pane_g4_ParamLimits

0xcbf6,	// (0x0001a5b4) main_mp4_pane_g4

0xcc1e,	// (0x0001a5dc) main_mp4_pane_g5_ParamLimits

0xcc1e,	// (0x0001a5dc) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0001d277) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0001d277) main_mp4_pane_g

0xcc6e,	// (0x0001a62c) main_mp4_pane_t1_ParamLimits

0xcc6e,	// (0x0001a62c) main_mp4_pane_t1

0xccca,	// (0x0001a688) main_mp4_pane_t2_ParamLimits

0xccca,	// (0x0001a688) main_mp4_pane_t2

0xcd1c,	// (0x0001a6da) main_mp4_pane_t3_ParamLimits

0xcd1c,	// (0x0001a6da) main_mp4_pane_t3

0xcd3c,	// (0x0001a6fa) main_mp4_pane_t4_ParamLimits

0xcd3c,	// (0x0001a6fa) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0001d284) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0001d284) main_mp4_pane_t

0xcd80,	// (0x0001a73e) mp4_progress_pane_ParamLimits

0xcd80,	// (0x0001a73e) mp4_progress_pane

0xcdca,	// (0x0001a788) mp4_rocker_pane_ParamLimits

0xcdca,	// (0x0001a788) mp4_rocker_pane

0xcdf2,	// (0x0001a7b0) mp4_progress_pane_t1

0xce0b,	// (0x0001a7c9) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0001d28d) mp4_progress_pane_t

0xce24,	// (0x0001a7e2) mup_progress_pane_cp04

0xc2dd,	// (0x00019c9b) mp4_rocker_pane_g1

0x5a88,	// (0x00013446) aid_cell_size_keypad2_ParamLimits

0x5a88,	// (0x00013446) aid_cell_size_keypad2

0x5a9e,	// (0x0001345c) dialer2_ne_pane_ParamLimits

0x5a9e,	// (0x0001345c) dialer2_ne_pane

0x5ab8,	// (0x00013476) grid_dialer2_keypad_pane_ParamLimits

0x5ab8,	// (0x00013476) grid_dialer2_keypad_pane

0xc0c0,	// (0x00019a7e) bg_popup_call_pane_cp07_ParamLimits

0xc0c0,	// (0x00019a7e) bg_popup_call_pane_cp07

0x5ad6,	// (0x00013494) dialer2_ne_pane_t1_ParamLimits

0x5ad6,	// (0x00013494) dialer2_ne_pane_t1

0x5b15,	// (0x000134d3) cell_dialer2_keypad_pane_ParamLimits

0x5b15,	// (0x000134d3) cell_dialer2_keypad_pane

0xce42,	// (0x0001a800) bg_button_pane_pane_cp04_ParamLimits

0xce42,	// (0x0001a800) bg_button_pane_pane_cp04

0x5b39,	// (0x000134f7) cell_dialer2_keypad_pane_g1_ParamLimits

0x5b39,	// (0x000134f7) cell_dialer2_keypad_pane_g1

0x1b97,	// (0x0000f555) aid_placing_vt_set_content_ParamLimits

0x1b97,	// (0x0000f555) aid_placing_vt_set_content

0x1bbf,	// (0x0000f57d) aid_placing_vt_set_title_ParamLimits

0x1bbf,	// (0x0000f57d) aid_placing_vt_set_title

0x9387,	// (0x00016d45) main_image3_pane

0x5bff,	// (0x000135bd) area_side_right_pane_cp01_ParamLimits

0x5bff,	// (0x000135bd) area_side_right_pane_cp01

0xcbe8,	// (0x0001a5a6) main_image3_pane_g1_ParamLimits

0xcbe8,	// (0x0001a5a6) main_image3_pane_g1

0x5c16,	// (0x000135d4) main_image3_pane_g2_ParamLimits

0x5c16,	// (0x000135d4) main_image3_pane_g2

0x5c3e,	// (0x000135fc) main_image3_pane_g3_ParamLimits

0x5c3e,	// (0x000135fc) main_image3_pane_g3

0x5c68,	// (0x00013626) main_image3_pane_g4_ParamLimits

0x5c68,	// (0x00013626) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0001d29c) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0001d29c) main_image3_pane_g

0x5c92,	// (0x00013650) main_image3_pane_t1_ParamLimits

0x5c92,	// (0x00013650) main_image3_pane_t1

0x5cea,	// (0x000136a8) main_image3_pane_t2_ParamLimits

0x5cea,	// (0x000136a8) main_image3_pane_t2

0x5d3c,	// (0x000136fa) main_image3_pane_t3_ParamLimits

0x5d3c,	// (0x000136fa) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0001d2a5) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0001d2a5) main_image3_pane_t

0x93f7,	// (0x00016db5) grid_sctrl_middle_pane_cp01_ParamLimits

0x93f7,	// (0x00016db5) grid_sctrl_middle_pane_cp01

0x5dc4,	// (0x00013782) cell_sctrl_middle_pane_cp01_ParamLimits

0x5dc4,	// (0x00013782) cell_sctrl_middle_pane_cp01

0x5de1,	// (0x0001379f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5de1,	// (0x0001379f) cell_sctrl_middle_pane_cp01_g1

0x9387,	// (0x00016d45) main_call4_pane

0x5df7,	// (0x000137b5) aid_size_button_call4_ParamLimits

0x5df7,	// (0x000137b5) aid_size_button_call4

0x5e28,	// (0x000137e6) call4_windows_pane_ParamLimits

0x5e28,	// (0x000137e6) call4_windows_pane

0x5e48,	// (0x00013806) grid_call4_button_pane_ParamLimits

0x5e48,	// (0x00013806) grid_call4_button_pane

0xce80,	// (0x0001a83e) call4_windows_conf_pane

0xce95,	// (0x0001a853) popup_call4_audio_first_window_ParamLimits

0xce95,	// (0x0001a853) popup_call4_audio_first_window

0xcee1,	// (0x0001a89f) popup_call4_audio_second_window_ParamLimits

0xcee1,	// (0x0001a89f) popup_call4_audio_second_window

0xcef5,	// (0x0001a8b3) popup_call4_audio_wait_window_ParamLimits

0xcef5,	// (0x0001a8b3) popup_call4_audio_wait_window

0x5e75,	// (0x00013833) cell_call4_button_pane_ParamLimits

0x5e75,	// (0x00013833) cell_call4_button_pane

0x5e9e,	// (0x0001385c) bg_button_pane_cp09_ParamLimits

0x5e9e,	// (0x0001385c) bg_button_pane_cp09

0x5eaa,	// (0x00013868) cell_call4_button_pane_g1_ParamLimits

0x5eaa,	// (0x00013868) cell_call4_button_pane_g1

0x5ed0,	// (0x0001388e) cell_call4_button_pane_t1_ParamLimits

0x5ed0,	// (0x0001388e) cell_call4_button_pane_t1

0xcf3d,	// (0x0001a8fb) popup_call4_audio_conf_window_ParamLimits

0xcf3d,	// (0x0001a8fb) popup_call4_audio_conf_window

0x513d,	// (0x00012afb) mup3_progress_pane_t1_ParamLimits

0x5154,	// (0x00012b12) mup3_progress_pane_t2_ParamLimits

0xc5f7,	// (0x00019fb5) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0001d17e) mup3_progress_pane_t_ParamLimits

0xc60e,	// (0x00019fcc) mup_progress_pane_cp03_ParamLimits

0x5713,	// (0x000130d1) mup3_control_keys_pane_g4_copy1

0xcdae,	// (0x0001a76c) mp4_rocker2_pane_ParamLimits

0xcdae,	// (0x0001a76c) mp4_rocker2_pane

0xcf51,	// (0x0001a90f) mp4_rocker2_pane_g1

0xcf59,	// (0x0001a917) mp4_rocker2_pane_g2

0xcf61,	// (0x0001a91f) mp4_rocker2_pane_g3

0xcf69,	// (0x0001a927) mp4_rocker2_pane_g4

0xcf71,	// (0x0001a92f) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0001d2ae) mp4_rocker2_pane_g

0x9387,	// (0x00016d45) main_camera4_pane

0x9387,	// (0x00016d45) main_video4_pane

0x598d,	// (0x0001334b) main_video_tele_dialer_pane_t1_ParamLimits

0x598d,	// (0x0001334b) main_video_tele_dialer_pane_t1

0x59a6,	// (0x00013364) main_video_tele_dialer_pane_t2_ParamLimits

0x59a6,	// (0x00013364) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0001d268) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0001d268) main_video_tele_dialer_pane_t

0x5f12,	// (0x000138d0) cam4_autofocus_pane_ParamLimits

0x5f12,	// (0x000138d0) cam4_autofocus_pane

0x5f28,	// (0x000138e6) cam4_image_uncrop_pane_ParamLimits

0x5f28,	// (0x000138e6) cam4_image_uncrop_pane

0x5f42,	// (0x00013900) cam4_indicators_pane_ParamLimits

0x5f42,	// (0x00013900) cam4_indicators_pane

0x5f6d,	// (0x0001392b) main_camera4_pane_g1_ParamLimits

0x5f6d,	// (0x0001392b) main_camera4_pane_g1

0x5f80,	// (0x0001393e) main_camera4_pane_g2_ParamLimits

0x5f80,	// (0x0001393e) main_camera4_pane_g2

0x5f93,	// (0x00013951) main_camera4_pane_g3_ParamLimits

0x5f93,	// (0x00013951) main_camera4_pane_g3

0x5fa6,	// (0x00013964) main_camera4_pane_g4_ParamLimits

0x5fa6,	// (0x00013964) main_camera4_pane_g4

0x5fb9,	// (0x00013977) main_camera4_pane_g5_ParamLimits

0x5fb9,	// (0x00013977) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0001d2b9) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0001d2b9) main_camera4_pane_g

0x5fdd,	// (0x0001399b) main_camera4_pane_t1_ParamLimits

0x5fdd,	// (0x0001399b) main_camera4_pane_t1

0xc544,	// (0x00019f02) bg_tb_trans_pane_cp06

0xcf9d,	// (0x0001a95b) cam4_indicators_pane_g1

0xcfae,	// (0x0001a96c) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0001d2d4) cam4_indicators_pane_g

0xcfcc,	// (0x0001a98a) cam4_indicators_pane_t1

0x6041,	// (0x000139ff) main_video4_pane_g1_ParamLimits

0x6041,	// (0x000139ff) main_video4_pane_g1

0x6054,	// (0x00013a12) main_video4_pane_g2_ParamLimits

0x6054,	// (0x00013a12) main_video4_pane_g2

0x6068,	// (0x00013a26) main_video4_pane_g3_ParamLimits

0x6068,	// (0x00013a26) main_video4_pane_g3

0x607c,	// (0x00013a3a) main_video4_pane_g4_ParamLimits

0x607c,	// (0x00013a3a) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0001d2db) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0001d2db) main_video4_pane_g

0x60a4,	// (0x00013a62) vid4_indicators_pane_ParamLimits

0x60a4,	// (0x00013a62) vid4_indicators_pane

0x60d6,	// (0x00013a94) video4_image_uncrop_cif_pane_ParamLimits

0x60d6,	// (0x00013a94) video4_image_uncrop_cif_pane

0x60f0,	// (0x00013aae) video4_image_uncrop_nhd_pane_ParamLimits

0x60f0,	// (0x00013aae) video4_image_uncrop_nhd_pane

0x5f28,	// (0x000138e6) video4_image_uncrop_vga_pane_ParamLimits

0x5f28,	// (0x000138e6) video4_image_uncrop_vga_pane

0xc9aa,	// (0x0001a368) bg_tb_trans_pane_cp07

0x6104,	// (0x00013ac2) vid4_indicators_pane_g1

0x6111,	// (0x00013acf) vid4_indicators_pane_g2

0x611e,	// (0x00013adc) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0001d2e6) vid4_indicators_pane_g

0x6143,	// (0x00013b01) vid4_indicators_pane_t1

0x6155,	// (0x00013b13) cam4_autofocus_pane_g1

0x615d,	// (0x00013b1b) cam4_autofocus_pane_g2

0x6165,	// (0x00013b23) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0001d2f1) cam4_autofocus_pane_g

0x616d,	// (0x00013b2b) cam4_autofocus_pane_g3_copy1

0x59d3,	// (0x00013391) video_down_pane_cp_t1

0x59e1,	// (0x0001339f) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0001d26d) video_down_pane_cp_t

0x93f7,	// (0x00016db5) popup_vitu2_window_ParamLimits

0x93f7,	// (0x00016db5) popup_vitu2_window

0x6175,	// (0x00013b33) aid_size_cell2_itu2_ParamLimits

0x6175,	// (0x00013b33) aid_size_cell2_itu2

0x619b,	// (0x00013b59) aid_size_cell_itu2_ParamLimits

0x619b,	// (0x00013b59) aid_size_cell_itu2

0x61f7,	// (0x00013bb5) bg_popup_window_pane_cp09_ParamLimits

0x61f7,	// (0x00013bb5) bg_popup_window_pane_cp09

0x6205,	// (0x00013bc3) field_vitu2_entry_pane_ParamLimits

0x6205,	// (0x00013bc3) field_vitu2_entry_pane

0x622b,	// (0x00013be9) grid_vitu2_function_pane_ParamLimits

0x622b,	// (0x00013be9) grid_vitu2_function_pane

0x627c,	// (0x00013c3a) grid_vitu2_itu_pane_ParamLimits

0x627c,	// (0x00013c3a) grid_vitu2_itu_pane

0x630d,	// (0x00013ccb) cell_vitu2_itu_pane_ParamLimits

0x630d,	// (0x00013ccb) cell_vitu2_itu_pane

0x6331,	// (0x00013cef) cell_vitu2_function_pane_ParamLimits

0x6331,	// (0x00013cef) cell_vitu2_function_pane

0xcff6,	// (0x0001a9b4) bg_popup_call_pane_cp08_ParamLimits

0xcff6,	// (0x0001a9b4) bg_popup_call_pane_cp08

0xd00f,	// (0x0001a9cd) field_vitu2_entry_pane_g1

0xd01b,	// (0x0001a9d9) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0001d2f8) field_vitu2_entry_pane_g

0xd035,	// (0x0001a9f3) field_vitu2_entry_pane_t1_ParamLimits

0xd035,	// (0x0001a9f3) field_vitu2_entry_pane_t1

0xd066,	// (0x0001aa24) field_vitu2_entry_pane_t2_ParamLimits

0xd066,	// (0x0001aa24) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0001d2ff) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0001d2ff) field_vitu2_entry_pane_t

0x6370,	// (0x00013d2e) bg_button_pane_cp010_ParamLimits

0x6370,	// (0x00013d2e) bg_button_pane_cp010

0x637e,	// (0x00013d3c) cell_vitu2_itu_pane_g1

0x639c,	// (0x00013d5a) cell_vitu2_itu_pane_t1_ParamLimits

0x639c,	// (0x00013d5a) cell_vitu2_itu_pane_t1

0x6402,	// (0x00013dc0) cell_vitu2_itu_pane_t2_ParamLimits

0x6402,	// (0x00013dc0) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0001d309) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0001d309) cell_vitu2_itu_pane_t

0x93f7,	// (0x00016db5) bg_button_pane_cp011

0x64de,	// (0x00013e9c) cell_vitu2_function_pane_g1

0x9387,	// (0x00016d45) main_myfav_hc_pane

0x5d8c,	// (0x0001374a) popup_image3_note_pane_ParamLimits

0x5d8c,	// (0x0001374a) popup_image3_note_pane

0x5da8,	// (0x00013766) popup_image3_tool_bar_pane_ParamLimits

0x5da8,	// (0x00013766) popup_image3_tool_bar_pane

0x6486,	// (0x00013e44) cell_vitu2_itu_pane_t3_ParamLimits

0x6486,	// (0x00013e44) cell_vitu2_itu_pane_t3

0x9387,	// (0x00016d45) bg_popup_trans_pane

0xd08b,	// (0x0001aa49) grid_image3_tool_bar_pane

0xd095,	// (0x0001aa53) bg_popup_trans_pane_g1

0xa184,	// (0x00017b42) bg_popup_trans_pane_g2

0xd09d,	// (0x0001aa5b) bg_popup_trans_pane_g3

0xd0a5,	// (0x0001aa63) bg_popup_trans_pane_g4

0xd0ad,	// (0x0001aa6b) bg_popup_trans_pane_g5

0xd0b5,	// (0x0001aa73) bg_popup_trans_pane_g6

0xd0bd,	// (0x0001aa7b) bg_popup_trans_pane_g7

0xd0c5,	// (0x0001aa83) bg_popup_trans_pane_g8

0xa164,	// (0x00017b22) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0001d310) bg_popup_trans_pane_g

0xd0cd,	// (0x0001aa8b) cell_image3_tool_bar_pane_ParamLimits

0xd0cd,	// (0x0001aa8b) cell_image3_tool_bar_pane

0xc2dd,	// (0x00019c9b) cell_image3_tool_bar_pane_g1

0x9387,	// (0x00016d45) bg_popup_trans_pane_cp1

0xd0e1,	// (0x0001aa9f) popup_image3_note_pane_t1

0xd0ef,	// (0x0001aaad) popup_image3_note_pane_t2

0xd0fd,	// (0x0001aabb) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0001d323) popup_image3_note_pane_t

0xd10b,	// (0x0001aac9) popup_image3_note_pane_t3_copy1

0x64f2,	// (0x00013eb0) bg_myfav_hc_instruction_pane_ParamLimits

0x64f2,	// (0x00013eb0) bg_myfav_hc_instruction_pane

0x6508,	// (0x00013ec6) cell_myfav_contact_pane_ParamLimits

0x6508,	// (0x00013ec6) cell_myfav_contact_pane

0x6524,	// (0x00013ee2) cell_myfav_contact_pane_cp1_ParamLimits

0x6524,	// (0x00013ee2) cell_myfav_contact_pane_cp1

0x653c,	// (0x00013efa) cell_myfav_contact_pane_cp2_ParamLimits

0x653c,	// (0x00013efa) cell_myfav_contact_pane_cp2

0x6554,	// (0x00013f12) cell_myfav_contact_pane_cp3_ParamLimits

0x6554,	// (0x00013f12) cell_myfav_contact_pane_cp3

0x656b,	// (0x00013f29) cell_myfav_contact_pane_cp4_ParamLimits

0x656b,	// (0x00013f29) cell_myfav_contact_pane_cp4

0x6583,	// (0x00013f41) cell_myfav_contact_pane_cp5_ParamLimits

0x6583,	// (0x00013f41) cell_myfav_contact_pane_cp5

0x6597,	// (0x00013f55) cell_myfav_contact_pane_cp6_ParamLimits

0x6597,	// (0x00013f55) cell_myfav_contact_pane_cp6

0x65ad,	// (0x00013f6b) cell_myfav_contact_pane_cp7_ParamLimits

0x65ad,	// (0x00013f6b) cell_myfav_contact_pane_cp7

0xd119,	// (0x0001aad7) listscroll_gen_pane_cp05

0x65c7,	// (0x00013f85) main_myfav_hc_pane_g1_ParamLimits

0x65c7,	// (0x00013f85) main_myfav_hc_pane_g1

0x65e1,	// (0x00013f9f) main_myfav_hc_pane_g2_ParamLimits

0x65e1,	// (0x00013f9f) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0001d32a) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0001d32a) main_myfav_hc_pane_g

0x6613,	// (0x00013fd1) main_myfav_hc_pane_t1_ParamLimits

0x6613,	// (0x00013fd1) main_myfav_hc_pane_t1

0xd122,	// (0x0001aae0) main_myfav_hc_pane_t2_ParamLimits

0xd122,	// (0x0001aae0) main_myfav_hc_pane_t2

0xd134,	// (0x0001aaf2) main_myfav_hc_pane_t3_ParamLimits

0xd134,	// (0x0001aaf2) main_myfav_hc_pane_t3

0x662a,	// (0x00013fe8) main_myfav_hc_pane_t4_ParamLimits

0x662a,	// (0x00013fe8) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0001d331) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0001d331) main_myfav_hc_pane_t

0xc2dd,	// (0x00019c9b) bg_myfav_hc_instruction_pane_g1

0xd146,	// (0x0001ab04) cell_myfav_contact_pane_g1_ParamLimits

0xd146,	// (0x0001ab04) cell_myfav_contact_pane_g1

0xd146,	// (0x0001ab04) cell_myfav_contact_pane_g2_ParamLimits

0xd146,	// (0x0001ab04) cell_myfav_contact_pane_g2

0xd152,	// (0x0001ab10) cell_myfav_contact_pane_g3_ParamLimits

0xd152,	// (0x0001ab10) cell_myfav_contact_pane_g3

0xc5e1,	// (0x00019f9f) cell_myfav_contact_pane_g4_ParamLimits

0xc5e1,	// (0x00019f9f) cell_myfav_contact_pane_g4

0xd15f,	// (0x0001ab1d) cell_myfav_contact_pane_g5_ParamLimits

0xd15f,	// (0x0001ab1d) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0001d33c) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0001d33c) cell_myfav_contact_pane_g

0x65fb,	// (0x00013fb9) main_myfav_hc_pane_g3_ParamLimits

0x65fb,	// (0x00013fb9) main_myfav_hc_pane_g3

0x0f16,	// (0x0000e8d4) popup_adpt_find_window

0x6652,	// (0x00014010) afind_page_pane_ParamLimits

0x6652,	// (0x00014010) afind_page_pane

0x6667,	// (0x00014025) aid_size_cell_afind_ParamLimits

0x6667,	// (0x00014025) aid_size_cell_afind

0x6685,	// (0x00014043) bg_popup_sub_pane_cp09_ParamLimits

0x6685,	// (0x00014043) bg_popup_sub_pane_cp09

0x6692,	// (0x00014050) find_pane_cp01_ParamLimits

0x6692,	// (0x00014050) find_pane_cp01

0xd16b,	// (0x0001ab29) grid_afind_control_pane_ParamLimits

0xd16b,	// (0x0001ab29) grid_afind_control_pane

0x669f,	// (0x0001405d) grid_afind_pane_ParamLimits

0x669f,	// (0x0001405d) grid_afind_pane

0x66c1,	// (0x0001407f) cell_afind_pane_ParamLimits

0x66c1,	// (0x0001407f) cell_afind_pane

0xc2dd,	// (0x00019c9b) afind_page_pane_g1

0x6722,	// (0x000140e0) afind_page_pane_g2

0x672b,	// (0x000140e9) afind_page_pane_g3

0x0002,

0xf989,	// (0x0001d347) afind_page_pane_g

0x6734,	// (0x000140f2) afind_page_pane_t1

0xd17f,	// (0x0001ab3d) cell_afind_grid_control_pane_ParamLimits

0xd17f,	// (0x0001ab3d) cell_afind_grid_control_pane

0xce42,	// (0x0001a800) bg_button_pane_cp69_ParamLimits

0xce42,	// (0x0001a800) bg_button_pane_cp69

0x6754,	// (0x00014112) cell_afind_pane_g1_ParamLimits

0x6754,	// (0x00014112) cell_afind_pane_g1

0x6761,	// (0x0001411f) cell_afind_pane_t1_ParamLimits

0x6761,	// (0x0001411f) cell_afind_pane_t1

0x9ec2,	// (0x00017880) bg_button_pane_cp72

0xd18e,	// (0x0001ab4c) cell_afind_grid_control_pane_g1

0x36f4,	// (0x000110b2) aid_image_placing_area_ParamLimits

0x36f4,	// (0x000110b2) aid_image_placing_area

0xc8c9,	// (0x0001a287) field_vitu_entry_pane_g1_ParamLimits

0xc8c9,	// (0x0001a287) field_vitu_entry_pane_g1

0xc8d5,	// (0x0001a293) field_vitu_entry_pane_g2_ParamLimits

0xc8d5,	// (0x0001a293) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0001d1f8) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0001d1f8) field_vitu_entry_pane_g

0x57e0,	// (0x0001319e) cell_vitu_itu_pane_g1_ParamLimits

0x5822,	// (0x000131e0) cell_vitu_itu_pane_t3_ParamLimits

0x5822,	// (0x000131e0) cell_vitu_itu_pane_t3

0xcdf2,	// (0x0001a7b0) mp4_progress_pane_t1_ParamLimits

0xce0b,	// (0x0001a7c9) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0001d28d) mp4_progress_pane_t_ParamLimits

0xce24,	// (0x0001a7e2) mup_progress_pane_cp04_ParamLimits

0x663e,	// (0x00013ffc) main_myfav_hc_pane_t5_ParamLimits

0x663e,	// (0x00013ffc) main_myfav_hc_pane_t5

0x93ad,	// (0x00016d6b) aid_zoom_text_primary

0x0f16,	// (0x0000e8d4) popup_adpt_find_window_ParamLimits

0x93f7,	// (0x00016db5) main_cam_set_pane

0x5f59,	// (0x00013917) cam4_zoom_pane_ParamLimits

0x5f59,	// (0x00013917) cam4_zoom_pane

0x6773,	// (0x00014131) main_cam_set_pane_g1_ParamLimits

0x6773,	// (0x00014131) main_cam_set_pane_g1

0x6781,	// (0x0001413f) main_cam_set_pane_g2_ParamLimits

0x6781,	// (0x0001413f) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0001d34e) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0001d34e) main_cam_set_pane_g

0x67a2,	// (0x00014160) main_cam_set_pane_t1_ParamLimits

0x67a2,	// (0x00014160) main_cam_set_pane_t1

0x67bd,	// (0x0001417b) main_cset_listscroll_pane_ParamLimits

0x67bd,	// (0x0001417b) main_cset_listscroll_pane

0x67dd,	// (0x0001419b) main_cset_slider_pane_ParamLimits

0x67dd,	// (0x0001419b) main_cset_slider_pane

0xd19f,	// (0x0001ab5d) main_cset_list_pane_ParamLimits

0xd19f,	// (0x0001ab5d) main_cset_list_pane

0xd1af,	// (0x0001ab6d) scroll_pane_cp028

0x6803,	// (0x000141c1) aid_area_touch_slider

0x681f,	// (0x000141dd) cset_slider_pane

0x6849,	// (0x00014207) main_cset_slider_pane_g1

0x685e,	// (0x0001421c) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0001d353) main_cset_slider_pane_g

0xd1e8,	// (0x0001aba6) main_cset_slider_pane_t1

0x691a,	// (0x000142d8) main_cset_slider_pane_t2

0x6934,	// (0x000142f2) main_cset_slider_pane_t3

0x694e,	// (0x0001430c) main_cset_slider_pane_t4

0x6968,	// (0x00014326) main_cset_slider_pane_t5

0x6984,	// (0x00014342) main_cset_slider_pane_t6

0x6999,	// (0x00014357) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0001d378) main_cset_slider_pane_t

0x6a9d,	// (0x0001445b) cset_list_set_pane_ParamLimits

0x6a9d,	// (0x0001445b) cset_list_set_pane

0x6ab1,	// (0x0001446f) aid_position_infowindow_above

0x6ab9,	// (0x00014477) aid_position_infowindow_below

0x6ac1,	// (0x0001447f) cset_list_set_pane_g1_ParamLimits

0x6ac1,	// (0x0001447f) cset_list_set_pane_g1

0x6acd,	// (0x0001448b) cset_list_set_pane_g3_ParamLimits

0x6acd,	// (0x0001448b) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0001d397) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0001d397) cset_list_set_pane_g

0x6adc,	// (0x0001449a) cset_list_set_pane_t1_ParamLimits

0x6adc,	// (0x0001449a) cset_list_set_pane_t1

0x93f7,	// (0x00016db5) list_highlight_pane_cp021_ParamLimits

0x93f7,	// (0x00016db5) list_highlight_pane_cp021

0xaa8c,	// (0x0001844a) cset_slider_pane_g1

0xaa9e,	// (0x0001845c) cset_slider_pane_g2

0xaa95,	// (0x00018453) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0001d39c) cset_slider_pane_g

0xd288,	// (0x0001ac46) aid_area_touch_cam4_zoom

0xd290,	// (0x0001ac4e) cam4_zoom_cont_pane

0xd298,	// (0x0001ac56) cam4_zoom_pane_g1

0xd2a0,	// (0x0001ac5e) cam4_zoom_pane_g2

0x6af1,	// (0x000144af) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0001d3a3) cam4_zoom_pane_g

0xd2a8,	// (0x0001ac66) cam4_zoom_cont_pane_g1

0xd2b1,	// (0x0001ac6f) cam4_zoom_cont_pane_g2

0xd2ba,	// (0x0001ac78) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0001d3aa) cam4_zoom_cont_pane_g

0x5e15,	// (0x000137d3) call4_image_pane_ParamLimits

0x5e15,	// (0x000137d3) call4_image_pane

0xce80,	// (0x0001a83e) call4_windows_conf_pane_ParamLimits

0xcebf,	// (0x0001a87d) popup_call4_audio_in_window_ParamLimits

0xcebf,	// (0x0001a87d) popup_call4_audio_in_window

0x9387,	// (0x00016d45) bg_popup_call2_act_pane_cp02

0xcf35,	// (0x0001a8f3) call4_list_conf_pane

0xc2dd,	// (0x00019c9b) call4_image_pane_g1

0xc2dd,	// (0x00019c9b) call4_image_pane_g2

0x0001,

0xf700,	// (0x0001d0be) call4_image_pane_g

0xd2c3,	// (0x0001ac81) list_single_graphic_popup_conf4_pane_ParamLimits

0xd2c3,	// (0x0001ac81) list_single_graphic_popup_conf4_pane

0x9387,	// (0x00016d45) list_highlight_pane_cp022

0xd2d6,	// (0x0001ac94) list_single_graphic_popup_conf4_pane_g1

0xa75d,	// (0x0001811b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0001d3b1) list_single_graphic_popup_conf4_pane_g

0xd2de,	// (0x0001ac9c) list_single_graphic_popup_conf4_pane_t1

0x1ce3,	// (0x0000f6a1) popup_vtel_slider_window_ParamLimits

0x1ce3,	// (0x0000f6a1) popup_vtel_slider_window

0xce30,	// (0x0001a7ee) dialer2_ne_pane_t2_ParamLimits

0xce30,	// (0x0001a7ee) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0001d292) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0001d292) dialer2_ne_pane_t

0xc0c0,	// (0x00019a7e) bg_popup_sub_pane_cp010_ParamLimits

0xc0c0,	// (0x00019a7e) bg_popup_sub_pane_cp010

0x6af9,	// (0x000144b7) popup_vtel_slider_window_g1_ParamLimits

0x6af9,	// (0x000144b7) popup_vtel_slider_window_g1

0x6b0c,	// (0x000144ca) popup_vtel_slider_window_g2_ParamLimits

0x6b0c,	// (0x000144ca) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0001d3b6) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0001d3b6) popup_vtel_slider_window_g

0x6b62,	// (0x00014520) vtel_slider_pane_ParamLimits

0x6b62,	// (0x00014520) vtel_slider_pane

0x6b84,	// (0x00014542) vtel_slider_pane_g1_ParamLimits

0x6b84,	// (0x00014542) vtel_slider_pane_g1

0x6b98,	// (0x00014556) vtel_slider_pane_g2_ParamLimits

0x6b98,	// (0x00014556) vtel_slider_pane_g2

0x6bb0,	// (0x0001456e) vtel_slider_pane_g3_ParamLimits

0x6bb0,	// (0x0001456e) vtel_slider_pane_g3

0x6b84,	// (0x00014542) vtel_slider_pane_g4_ParamLimits

0x6b84,	// (0x00014542) vtel_slider_pane_g4

0x6bc6,	// (0x00014584) vtel_slider_pane_g5_ParamLimits

0x6bc6,	// (0x00014584) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0001d3bf) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0001d3bf) vtel_slider_pane_g

0x9387,	// (0x00016d45) main_gallery2_pane

0x61c7,	// (0x00013b85) aid_size_row_itut2_dropdow_list_ParamLimits

0x61c7,	// (0x00013b85) aid_size_row_itut2_dropdow_list

0x6253,	// (0x00013c11) grid_vitu2_function_top_pane_ParamLimits

0x6253,	// (0x00013c11) grid_vitu2_function_top_pane

0x62b8,	// (0x00013c76) popup_vitu2_dropdown_list_window_ParamLimits

0x62b8,	// (0x00013c76) popup_vitu2_dropdown_list_window

0x62e1,	// (0x00013c9f) popup_vitu2_match_list_window

0x6bdc,	// (0x0001459a) cell_vitu2_function_top_pane_ParamLimits

0x6bdc,	// (0x0001459a) cell_vitu2_function_top_pane

0x6bfa,	// (0x000145b8) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6bfa,	// (0x000145b8) cell_vitu2_function_top_pane_cp01

0x6c18,	// (0x000145d6) cell_vitu2_function_top_wide_pane_ParamLimits

0x6c18,	// (0x000145d6) cell_vitu2_function_top_wide_pane

0x93f7,	// (0x00016db5) bg_button_pane_cp012

0x6c36,	// (0x000145f4) cell_vitu2_function_top_pane_g1

0xd302,	// (0x0001acc0) bg_button_pane_cp013_ParamLimits

0xd302,	// (0x0001acc0) bg_button_pane_cp013

0x6c4a,	// (0x00014608) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6c4a,	// (0x00014608) cell_vitu2_function_top_wide_pane_g1

0x93f7,	// (0x00016db5) bg_popup_sub_pane_cp20

0x6c62,	// (0x00014620) list_vitu2_match_list_pane

0xd095,	// (0x0001aa53) bg_popup_sub_pane_cp20_g1

0xd09d,	// (0x0001aa5b) bg_popup_sub_pane_cp20_g2

0xa184,	// (0x00017b42) bg_popup_sub_pane_cp20_g3

0xd0a5,	// (0x0001aa63) bg_popup_sub_pane_cp20_g4

0xa164,	// (0x00017b22) bg_popup_sub_pane_cp20_g5

0xd31e,	// (0x0001acdc) bg_popup_sub_pane_cp20_g6

0xd0b5,	// (0x0001aa73) bg_popup_sub_pane_cp20_g7

0xd0bd,	// (0x0001aa7b) bg_popup_sub_pane_cp20_g8

0xd0c5,	// (0x0001aa83) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0001d3ca) bg_popup_sub_pane_cp20_g

0xd326,	// (0x0001ace4) list_vitu2_match_list_item_pane_ParamLimits

0xd326,	// (0x0001ace4) list_vitu2_match_list_item_pane

0xd338,	// (0x0001acf6) list_vitu2_match_list_item_pane_t1

0x9387,	// (0x00016d45) bg_popup_sub_pane_cp21

0xa5f3,	// (0x00017fb1) grid_vitu2_dropdown_list_pane

0x6cb5,	// (0x00014673) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6cb5,	// (0x00014673) cell_vitu2_dropdown_list_char_pane

0x6cd6,	// (0x00014694) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6cd6,	// (0x00014694) cell_vitu2_dropdown_list_ctrl_pane

0xd35e,	// (0x0001ad1c) cell_vitu2_dropdown_list_char_pane_g1

0xd367,	// (0x0001ad25) cell_vitu2_dropdown_list_char_pane_g2

0xd370,	// (0x0001ad2e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0001d3e7) cell_vitu2_dropdown_list_char_pane_g

0x6d02,	// (0x000146c0) cell_vitu2_dropdown_list_char_pane_t1

0x6d10,	// (0x000146ce) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6d10,	// (0x000146ce) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6d20,	// (0x000146de) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6d20,	// (0x000146de) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6d31,	// (0x000146ef) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6d31,	// (0x000146ef) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6d41,	// (0x000146ff) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6d41,	// (0x000146ff) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc544,	// (0x00019f02) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc544,	// (0x00019f02) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0001d3ee) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0001d3ee) cell_vitu2_dropdown_list_ctrl_pane_g

0x6d5d,	// (0x0001471b) aid_size_cell_gallery2_ParamLimits

0x6d5d,	// (0x0001471b) aid_size_cell_gallery2

0x6d73,	// (0x00014731) grid_gallery2_pane_ParamLimits

0x6d73,	// (0x00014731) grid_gallery2_pane

0x6d87,	// (0x00014745) scroll_pane_cp029_ParamLimits

0x6d87,	// (0x00014745) scroll_pane_cp029

0x6d93,	// (0x00014751) cell_gallery2_pane_ParamLimits

0x6d93,	// (0x00014751) cell_gallery2_pane

0xd379,	// (0x0001ad37) cell_gallery2_pane_g2

0x6dc9,	// (0x00014787) cell_gallery2_pane_g3

0xd383,	// (0x0001ad41) cell_gallery2_pane_g4

0xd38b,	// (0x0001ad49) cell_gallery2_pane_g5

0xa936,	// (0x000182f4) grid_highlight_pane_cp10

0x62e1,	// (0x00013c9f) popup_vitu2_match_list_window_ParamLimits

0x62f6,	// (0x00013cb4) popup_vitu2_query_window_ParamLimits

0x62f6,	// (0x00013cb4) popup_vitu2_query_window

0x9387,	// (0x00016d45) bg_vitu2_candi_button_pane

0xd35e,	// (0x0001ad1c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd367,	// (0x0001ad25) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd370,	// (0x0001ad2e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6dd1,	// (0x0001478f) bg_button_pane_cp015

0x6de5,	// (0x000147a3) bg_button_pane_cp016

0x6df8,	// (0x000147b6) bg_button_pane_cp017

0xbdd5,	// (0x00019793) bg_popup_sub_pane_cp22

0xd393,	// (0x0001ad51) popup_vitu2_query_window_g1

0x6e3d,	// (0x000147fb) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0001d3f9) popup_vitu2_query_window_g

0x6e5c,	// (0x0001481a) popup_vitu2_query_window_t1_ParamLimits

0x6e5c,	// (0x0001481a) popup_vitu2_query_window_t1

0x6e91,	// (0x0001484f) popup_vitu2_query_window_t2_ParamLimits

0x6e91,	// (0x0001484f) popup_vitu2_query_window_t2

0x6ea3,	// (0x00014861) popup_vitu2_query_window_t3_ParamLimits

0x6ea3,	// (0x00014861) popup_vitu2_query_window_t3

0x6ecb,	// (0x00014889) popup_vitu2_query_window_t4_ParamLimits

0x6ecb,	// (0x00014889) popup_vitu2_query_window_t4

0x6eec,	// (0x000148aa) popup_vitu2_query_window_t5_ParamLimits

0x6eec,	// (0x000148aa) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0001d400) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0001d400) popup_vitu2_query_window_t

0xd197,	// (0x0001ab55) main_cset_text_pane

0x6803,	// (0x000141c1) aid_area_touch_slider_ParamLimits

0x681f,	// (0x000141dd) cset_slider_pane_ParamLimits

0x6849,	// (0x00014207) main_cset_slider_pane_g1_ParamLimits

0x685e,	// (0x0001421c) main_cset_slider_pane_g2_ParamLimits

0xd1b8,	// (0x0001ab76) main_cset_slider_pane_g3_ParamLimits

0xd1b8,	// (0x0001ab76) main_cset_slider_pane_g3

0x6873,	// (0x00014231) main_cset_slider_pane_g4_ParamLimits

0x6873,	// (0x00014231) main_cset_slider_pane_g4

0x6882,	// (0x00014240) main_cset_slider_pane_g5_ParamLimits

0x6882,	// (0x00014240) main_cset_slider_pane_g5

0x688e,	// (0x0001424c) main_cset_slider_pane_g6_ParamLimits

0x688e,	// (0x0001424c) main_cset_slider_pane_g6

0xf995,	// (0x0001d353) main_cset_slider_pane_g_ParamLimits

0xd1e8,	// (0x0001aba6) main_cset_slider_pane_t1_ParamLimits

0x691a,	// (0x000142d8) main_cset_slider_pane_t2_ParamLimits

0x6934,	// (0x000142f2) main_cset_slider_pane_t3_ParamLimits

0x694e,	// (0x0001430c) main_cset_slider_pane_t4_ParamLimits

0x6968,	// (0x00014326) main_cset_slider_pane_t5_ParamLimits

0x6984,	// (0x00014342) main_cset_slider_pane_t6_ParamLimits

0x6999,	// (0x00014357) main_cset_slider_pane_t7_ParamLimits

0x69c3,	// (0x00014381) main_cset_slider_pane_t8_ParamLimits

0x69c3,	// (0x00014381) main_cset_slider_pane_t8

0x69eb,	// (0x000143a9) main_cset_slider_pane_t9_ParamLimits

0x69eb,	// (0x000143a9) main_cset_slider_pane_t9

0x6a13,	// (0x000143d1) main_cset_slider_pane_t10_ParamLimits

0x6a13,	// (0x000143d1) main_cset_slider_pane_t10

0x6a3b,	// (0x000143f9) main_cset_slider_pane_t11_ParamLimits

0x6a3b,	// (0x000143f9) main_cset_slider_pane_t11

0x6a63,	// (0x00014421) main_cset_slider_pane_t12_ParamLimits

0x6a63,	// (0x00014421) main_cset_slider_pane_t12

0x6a80,	// (0x0001443e) main_cset_slider_pane_t13_ParamLimits

0x6a80,	// (0x0001443e) main_cset_slider_pane_t13

0xf9ba,	// (0x0001d378) main_cset_slider_pane_t_ParamLimits

0x9387,	// (0x00016d45) bg_popup_sub_pane_cp011

0xd39f,	// (0x0001ad5d) main_cset_text_pane_g1

0xd3a7,	// (0x0001ad65) main_cset_text_pane_t1

0xd3b5,	// (0x0001ad73) main_cset_text_pane_t2

0xd3c3,	// (0x0001ad81) main_cset_text_pane_t3

0xd3d1,	// (0x0001ad8f) main_cset_text_pane_t4

0xd3df,	// (0x0001ad9d) main_cset_text_pane_t5

0xd3ed,	// (0x0001adab) main_cset_text_pane_t6

0xd3fb,	// (0x0001adb9) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x0001d40f) main_cset_text_pane_t

0x9387,	// (0x00016d45) main_cam4_burst_pane

0x9387,	// (0x00016d45) main_cam5_pane

0x6742,	// (0x00014100) bg_button_pane_cp019

0x674b,	// (0x00014109) bg_button_pane_cp020

0xd1c4,	// (0x0001ab82) main_cset_slider_pane_g7_ParamLimits

0xd1c4,	// (0x0001ab82) main_cset_slider_pane_g7

0xd1d0,	// (0x0001ab8e) main_cset_slider_pane_g8_ParamLimits

0xd1d0,	// (0x0001ab8e) main_cset_slider_pane_g8

0x68a2,	// (0x00014260) main_cset_slider_pane_g9_ParamLimits

0x68a2,	// (0x00014260) main_cset_slider_pane_g9

0x68ae,	// (0x0001426c) main_cset_slider_pane_g10_ParamLimits

0x68ae,	// (0x0001426c) main_cset_slider_pane_g10

0x68ba,	// (0x00014278) main_cset_slider_pane_g11_ParamLimits

0x68ba,	// (0x00014278) main_cset_slider_pane_g11

0x68c6,	// (0x00014284) main_cset_slider_pane_g12_ParamLimits

0x68c6,	// (0x00014284) main_cset_slider_pane_g12

0x68d2,	// (0x00014290) main_cset_slider_pane_g13_ParamLimits

0x68d2,	// (0x00014290) main_cset_slider_pane_g13

0x68de,	// (0x0001429c) main_cset_slider_pane_g14_ParamLimits

0x68de,	// (0x0001429c) main_cset_slider_pane_g14

0x68ea,	// (0x000142a8) main_cset_slider_pane_g15_ParamLimits

0x68ea,	// (0x000142a8) main_cset_slider_pane_g15

0xd216,	// (0x0001abd4) main_cset_slider_pane_t14_ParamLimits

0xd216,	// (0x0001abd4) main_cset_slider_pane_t14

0xd24f,	// (0x0001ac0d) main_cset_slider_pane_t15_ParamLimits

0xd24f,	// (0x0001ac0d) main_cset_slider_pane_t15

0x6f63,	// (0x00014921) aid_cam4_burst_size_cell_ParamLimits

0x6f63,	// (0x00014921) aid_cam4_burst_size_cell

0x6f83,	// (0x00014941) grid_cam4_burst_pane_ParamLimits

0x6f83,	// (0x00014941) grid_cam4_burst_pane

0x6fbb,	// (0x00014979) linegrid_cam4_burst_pane_ParamLimits

0x6fbb,	// (0x00014979) linegrid_cam4_burst_pane

0xd409,	// (0x0001adc7) scroll_pane_cp30_ParamLimits

0xd409,	// (0x0001adc7) scroll_pane_cp30

0x6fe1,	// (0x0001499f) cell_cam4_burst_pane_ParamLimits

0x6fe1,	// (0x0001499f) cell_cam4_burst_pane

0xd415,	// (0x0001add3) linegrid_cam4_burst_pane_g1_ParamLimits

0xd415,	// (0x0001add3) linegrid_cam4_burst_pane_g1

0x702e,	// (0x000149ec) linegrid_cam4_burst_pane_g2_ParamLimits

0x702e,	// (0x000149ec) linegrid_cam4_burst_pane_g2

0xd422,	// (0x0001ade0) linegrid_cam4_burst_pane_g3_ParamLimits

0xd422,	// (0x0001ade0) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0001d41e) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0001d41e) linegrid_cam4_burst_pane_g

0x703f,	// (0x000149fd) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x703f,	// (0x000149fd) linegrid_cam4_burst_pane_g3_copy1

0xd42f,	// (0x0001aded) linegrid_cam4_burst_pane_g4_ParamLimits

0xd42f,	// (0x0001aded) linegrid_cam4_burst_pane_g4

0x7059,	// (0x00014a17) linegrid_cam4_burst_pane_g5_ParamLimits

0x7059,	// (0x00014a17) linegrid_cam4_burst_pane_g5

0x706a,	// (0x00014a28) linegrid_cam4_burst_pane_g6_ParamLimits

0x706a,	// (0x00014a28) linegrid_cam4_burst_pane_g6

0xd43c,	// (0x0001adfa) linegrid_cam4_burst_pane_g7_ParamLimits

0xd43c,	// (0x0001adfa) linegrid_cam4_burst_pane_g7

0x7081,	// (0x00014a3f) cell_cam4_burst_pane_g1

0xd455,	// (0x0001ae13) main_cam5_pane_t1_ParamLimits

0xd455,	// (0x0001ae13) main_cam5_pane_t1

0xd467,	// (0x0001ae25) main_cam5_pane_t2_ParamLimits

0xd467,	// (0x0001ae25) main_cam5_pane_t2

0xd479,	// (0x0001ae37) main_cam5_pane_t3_ParamLimits

0xd479,	// (0x0001ae37) main_cam5_pane_t3

0xd48b,	// (0x0001ae49) main_cam5_pane_t4_ParamLimits

0xd48b,	// (0x0001ae49) main_cam5_pane_t4

0xd4a1,	// (0x0001ae5f) main_cam5_pane_t5_ParamLimits

0xd4a1,	// (0x0001ae5f) main_cam5_pane_t5

0xd4b3,	// (0x0001ae71) main_cam5_pane_t6_ParamLimits

0xd4b3,	// (0x0001ae71) main_cam5_pane_t6

0xd4c7,	// (0x0001ae85) main_cam5_pane_t7_ParamLimits

0xd4c7,	// (0x0001ae85) main_cam5_pane_t7

0xd4d9,	// (0x0001ae97) main_cam5_pane_t8_ParamLimits

0xd4d9,	// (0x0001ae97) main_cam5_pane_t8

0xd4f5,	// (0x0001aeb3) main_cam5_pane_t9_ParamLimits

0xd4f5,	// (0x0001aeb3) main_cam5_pane_t9

0xd507,	// (0x0001aec5) main_cam5_pane_t10_ParamLimits

0xd507,	// (0x0001aec5) main_cam5_pane_t10

0xd519,	// (0x0001aed7) main_cam5_pane_t11_ParamLimits

0xd519,	// (0x0001aed7) main_cam5_pane_t11

0xd52b,	// (0x0001aee9) main_cam5_pane_t12_ParamLimits

0xd52b,	// (0x0001aee9) main_cam5_pane_t12

0xd540,	// (0x0001aefe) main_cam5_pane_t13_ParamLimits

0xd540,	// (0x0001aefe) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0001d42a) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0001d42a) main_cam5_pane_t

0x0f98,	// (0x0000e956) popup_scut_keymap_window_ParamLimits

0x0f98,	// (0x0000e956) popup_scut_keymap_window

0x7094,	// (0x00014a52) aid_size_cell_brow_shortcut

0xa936,	// (0x000182f4) bg_popup_window_pane_cp010

0x70a0,	// (0x00014a5e) grid_scut_pane

0x70ac,	// (0x00014a6a) cell_scut_pane_ParamLimits

0x70ac,	// (0x00014a6a) cell_scut_pane

0x70c3,	// (0x00014a81) cell_scut_pane_g1

0xd55d,	// (0x0001af1b) cell_scut_pane_t1

0xd56c,	// (0x0001af2a) cell_scut_pane_t2

0x70cc,	// (0x00014a8a) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0001d445) cell_scut_pane_t

0x4d1c,	// (0x000126da) main_mup3_pane_g8_ParamLimits

0x4d1c,	// (0x000126da) main_mup3_pane_g8

0x61df,	// (0x00013b9d) area_vitu2_query_pane_ParamLimits

0x61df,	// (0x00013b9d) area_vitu2_query_pane

0x6e0b,	// (0x000147c9) input_focus_pane_cp08

0xd57b,	// (0x0001af39) area_vitu2_query_pane_g1

0x70da,	// (0x00014a98) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0001d44c) area_vitu2_query_pane_g

0x70eb,	// (0x00014aa9) area_vitu2_query_pane_t1_ParamLimits

0x70eb,	// (0x00014aa9) area_vitu2_query_pane_t1

0x70ff,	// (0x00014abd) area_vitu2_query_pane_t2_ParamLimits

0x70ff,	// (0x00014abd) area_vitu2_query_pane_t2

0x7113,	// (0x00014ad1) area_vitu2_query_pane_t3_ParamLimits

0x7113,	// (0x00014ad1) area_vitu2_query_pane_t3

0xd587,	// (0x0001af45) area_vitu2_query_pane_t4_ParamLimits

0xd587,	// (0x0001af45) area_vitu2_query_pane_t4

0xd5af,	// (0x0001af6d) area_vitu2_query_pane_t5_ParamLimits

0xd5af,	// (0x0001af6d) area_vitu2_query_pane_t5

0xd5d7,	// (0x0001af95) area_vitu2_query_pane_t6_ParamLimits

0xd5d7,	// (0x0001af95) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0001d451) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0001d451) area_vitu2_query_pane_t

0x713b,	// (0x00014af9) bg_button_pane_cp018

0x7149,	// (0x00014b07) bg_button_pane_cp021

0x7155,	// (0x00014b13) bg_button_pane_cp022

0x7166,	// (0x00014b24) input_focus_pane_cp09

0x2ce6,	// (0x000106a4) aid_size_touch_mv_arrow_left

0x2d0f,	// (0x000106cd) aid_size_touch_mv_arrow_right

0x6902,	// (0x000142c0) main_cset_slider_pane_g16_ParamLimits

0x6902,	// (0x000142c0) main_cset_slider_pane_g16

0x690e,	// (0x000142cc) main_cset_slider_pane_g17_ParamLimits

0x690e,	// (0x000142cc) main_cset_slider_pane_g17

0x7081,	// (0x00014a3f) cell_cam4_burst_pane_g1_ParamLimits

0x9387,	// (0x00016d45) compa_mode_pane

0x6b1c,	// (0x000144da) popup_vtel_slider_window_g3_ParamLimits

0x6b1c,	// (0x000144da) popup_vtel_slider_window_g3

0x6b33,	// (0x000144f1) popup_vtel_slider_window_g4_ParamLimits

0x6b33,	// (0x000144f1) popup_vtel_slider_window_g4

0x6b4a,	// (0x00014508) popup_vtel_slider_window_t1_ParamLimits

0x6b4a,	// (0x00014508) popup_vtel_slider_window_t1

0x9387,	// (0x00016d45) main_cl_pane

0xbdfd,	// (0x000197bb) popup_imed_adjust2_window_ParamLimits

0xbdd5,	// (0x00019793) bg_tb_trans_pane_cp05_ParamLimits

0xc7fe,	// (0x0001a1bc) popup_imed_adjust2_window_g1_ParamLimits

0xc80d,	// (0x0001a1cb) popup_imed_adjust2_window_g2_ParamLimits

0xc80d,	// (0x0001a1cb) popup_imed_adjust2_window_g2

0xc819,	// (0x0001a1d7) popup_imed_adjust2_window_g3_ParamLimits

0xc819,	// (0x0001a1d7) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0001d1bc) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0001d1bc) popup_imed_adjust2_window_g

0xc825,	// (0x0001a1e3) popup_imed_adjust2_window_t1_ParamLimits

0xc83d,	// (0x0001a1fb) slider_imed_adjust_pane_ParamLimits

0xc851,	// (0x0001a20f) slider_imed_adjust_pane_g1_ParamLimits

0xc861,	// (0x0001a21f) slider_imed_adjust_pane_g2_ParamLimits

0xc871,	// (0x0001a22f) slider_imed_adjust_pane_g3_ParamLimits

0xc882,	// (0x0001a240) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0001d1c3) slider_imed_adjust_pane_g_ParamLimits

0x5efa,	// (0x000138b8) aid_touch_area_cam4_ParamLimits

0x5efa,	// (0x000138b8) aid_touch_area_cam4

0xcf79,	// (0x0001a937) battery_pane_cp01

0x5fca,	// (0x00013988) main_camera4_pane_g6_ParamLimits

0x5fca,	// (0x00013988) main_camera4_pane_g6

0x5ff4,	// (0x000139b2) main_camera4_pane_t2_ParamLimits

0x5ff4,	// (0x000139b2) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0001d2c6) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0001d2c6) main_camera4_pane_t

0x6029,	// (0x000139e7) aid_touch_area_vid4_ParamLimits

0x6029,	// (0x000139e7) aid_touch_area_vid4

0x6090,	// (0x00013a4e) main_video4_pane_g5_ParamLimits

0x6090,	// (0x00013a4e) main_video4_pane_g5

0x60bb,	// (0x00013a79) vid4_progress_pane_ParamLimits

0x60bb,	// (0x00013a79) vid4_progress_pane

0xd1dc,	// (0x0001ab9a) main_cset_slider_pane_g18_ParamLimits

0xd1dc,	// (0x0001ab9a) main_cset_slider_pane_g18

0xd449,	// (0x0001ae07) cell_cam4_burst_pane_g2_ParamLimits

0xd449,	// (0x0001ae07) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0001d425) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0001d425) cell_cam4_burst_pane_g

0x9ba2,	// (0x00017560) bg_cl_pane_ParamLimits

0x9ba2,	// (0x00017560) bg_cl_pane

0x7177,	// (0x00014b35) cl_header_pane_ParamLimits

0x7177,	// (0x00014b35) cl_header_pane

0x718b,	// (0x00014b49) cl_listscroll_pane_ParamLimits

0x718b,	// (0x00014b49) cl_listscroll_pane

0xd623,	// (0x0001afe1) bg_cl_pane_g1

0xd62b,	// (0x0001afe9) bg_cl_pane_g2

0xd633,	// (0x0001aff1) bg_cl_pane_g3

0xd63b,	// (0x0001aff9) bg_cl_pane_g4

0xd643,	// (0x0001b001) bg_cl_pane_g5

0xd64b,	// (0x0001b009) bg_cl_pane_g6

0xd653,	// (0x0001b011) bg_cl_pane_g7

0xd65b,	// (0x0001b019) bg_cl_pane_g8

0xd663,	// (0x0001b021) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0001d460) bg_cl_pane_g

0x719b,	// (0x00014b59) aid_height_cl_leading_ParamLimits

0x719b,	// (0x00014b59) aid_height_cl_leading

0x71a7,	// (0x00014b65) aid_height_cl_text_ParamLimits

0x71a7,	// (0x00014b65) aid_height_cl_text

0x93f7,	// (0x00016db5) bg_cl_header_pane_ParamLimits

0x93f7,	// (0x00016db5) bg_cl_header_pane

0x71c6,	// (0x00014b84) cl_header_pane_g1_ParamLimits

0x71c6,	// (0x00014b84) cl_header_pane_g1

0x71dc,	// (0x00014b9a) cl_header_pane_t1_ParamLimits

0x71dc,	// (0x00014b9a) cl_header_pane_t1

0xd66b,	// (0x0001b029) cl_list_pane

0xd1af,	// (0x0001ab6d) hc_scroll_pane_cp01

0xa164,	// (0x00017b22) bg_cl_header_pane_g1

0xd095,	// (0x0001aa53) bg_cl_header_pane_g2

0xa184,	// (0x00017b42) bg_cl_header_pane_g3

0xd0a5,	// (0x0001aa63) bg_cl_header_pane_g4

0xd09d,	// (0x0001aa5b) bg_cl_header_pane_g5

0xd31e,	// (0x0001acdc) bg_cl_header_pane_g6

0xd0bd,	// (0x0001aa7b) bg_cl_header_pane_g7

0xd0c5,	// (0x0001aa83) bg_cl_header_pane_g8

0xd0b5,	// (0x0001aa73) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0001d473) bg_cl_header_pane_g

0x71f5,	// (0x00014bb3) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x71f5,	// (0x00014bb3) hc_cl_list_double_graphic_heading_pane

0x7209,	// (0x00014bc7) hc_cl_list_single_graphic_pane_ParamLimits

0x7209,	// (0x00014bc7) hc_cl_list_single_graphic_pane

0x7223,	// (0x00014be1) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7223,	// (0x00014be1) hc_cl_list_single_graphic_pane_g1

0x722f,	// (0x00014bed) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x722f,	// (0x00014bed) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0001d486) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0001d486) hc_cl_list_single_graphic_pane_g

0x7243,	// (0x00014c01) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7243,	// (0x00014c01) hc_cl_list_single_graphic_pane_t1

0x7223,	// (0x00014be1) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7223,	// (0x00014be1) hc_cl_list_double_graphic_heading_pane_g1

0x7258,	// (0x00014c16) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7258,	// (0x00014c16) hc_cl_list_double_graphic_heading_pane_g2

0x726c,	// (0x00014c2a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x726c,	// (0x00014c2a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0001d48b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0001d48b) hc_cl_list_double_graphic_heading_pane_g

0x7280,	// (0x00014c3e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7280,	// (0x00014c3e) hc_cl_list_double_graphic_heading_pane_t1

0x7295,	// (0x00014c53) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7295,	// (0x00014c53) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0001d492) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0001d492) hc_cl_list_double_graphic_heading_pane_t

0xd67c,	// (0x0001b03a) vid4_progress_pane_g1

0xd68c,	// (0x0001b04a) vid4_progress_pane_g2

0xd69c,	// (0x0001b05a) vid4_progress_pane_g3

0xcfae,	// (0x0001a96c) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0001d497) vid4_progress_pane_g

0xd6a8,	// (0x0001b066) vid4_progress_pane_t1

0xd6bd,	// (0x0001b07b) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0001d4a2) vid4_progress_pane_t

0xd6e8,	// (0x0001b0a6) wait_bar_pane_cp07

0xc0ce,	// (0x00019a8c) blid_firmament_pane_ParamLimits

0xc111,	// (0x00019acf) popup_blid_sat_info2_window_g1

0xc135,	// (0x00019af3) popup_blid_sat_info2_window_t3

0xc143,	// (0x00019b01) popup_blid_sat_info2_window_t4

0xc151,	// (0x00019b0f) popup_blid_sat_info2_window_t5

0xc15f,	// (0x00019b1d) popup_blid_sat_info2_window_t6

0xc16f,	// (0x00019b2d) popup_blid_sat_info2_window_t7

0xc17d,	// (0x00019b3b) popup_blid_sat_info2_window_t8

0xc18b,	// (0x00019b49) popup_blid_sat_info2_window_t9

0xc199,	// (0x00019b57) popup_blid_sat_info2_window_t10

0xc25d,	// (0x00019c1b) aid_firma_cardinal_ParamLimits

0xc271,	// (0x00019c2f) blid_firmament_pane_t1_ParamLimits

0xc288,	// (0x00019c46) blid_firmament_pane_t2_ParamLimits

0xc29f,	// (0x00019c5d) blid_firmament_pane_t3_ParamLimits

0xc2b6,	// (0x00019c74) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0001d0b5) blid_firmament_pane_t_ParamLimits

0xc2cd,	// (0x00019c8b) blid_sat_info_pane_ParamLimits

0x93f7,	// (0x00016db5) main_cam_set_pane_ParamLimits

0x558a,	// (0x00012f48) aid_size_cell_colour_35_ParamLimits

0x55aa,	// (0x00012f68) aid_size_cell_colour_112_ParamLimits

0x55ca,	// (0x00012f88) aid_size_cell_effect_ParamLimits

0xbdd5,	// (0x00019793) bg_tb_trans_pane_cp02_ParamLimits

0xa384,	// (0x00017d42) heading_imed_pane_ParamLimits

0x55ea,	// (0x00012fa8) listscroll_imed_pane_ParamLimits

0xb3ff,	// (0x00018dbd) popup_call2_audio_first_window_g5_ParamLimits

0xb3ff,	// (0x00018dbd) popup_call2_audio_first_window_g5

0x5ba1,	// (0x0001355f) aid_size_touch_image3_arrow_left_ParamLimits

0x5ba1,	// (0x0001355f) aid_size_touch_image3_arrow_left

0x5bcd,	// (0x0001358b) aid_size_touch_image3_arrow_right_ParamLimits

0x5bcd,	// (0x0001358b) aid_size_touch_image3_arrow_right

0xd6d3,	// (0x0001b091) vid4_progress_pane_t3

0x590d,	// (0x000132cb) main_hwr_training_symbol_option_pane_ParamLimits

0x590d,	// (0x000132cb) main_hwr_training_symbol_option_pane

0xcaf9,	// (0x0001a4b7) popup_hwr_training_preview_window_ParamLimits

0xcaf9,	// (0x0001a4b7) popup_hwr_training_preview_window

0x592d,	// (0x000132eb) hwr_training_navi_pane_g5_ParamLimits

0x592d,	// (0x000132eb) hwr_training_navi_pane_g5

0xd083,	// (0x0001aa41) popup_char_count_window

0x93f7,	// (0x00016db5) bg_popup_sub_pane_cp20_ParamLimits

0x6c62,	// (0x00014620) list_vitu2_match_list_pane_ParamLimits

0x6c71,	// (0x0001462f) vitu2_page_scroll_pane_ParamLimits

0x6c71,	// (0x0001462f) vitu2_page_scroll_pane

0xd752,	// (0x0001b110) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd752,	// (0x0001b110) list_single_hwr_training_symbol_option_pane

0xd765,	// (0x0001b123) list_single_hwr_training_symbol_option_pane_g1

0xd76d,	// (0x0001b12b) list_single_hwr_training_symbol_option_pane_t1

0xd77b,	// (0x0001b139) bg_button_pane_cp023

0xd784,	// (0x0001b142) bg_button_pane_cp024

0x72aa,	// (0x00014c68) vitu2_page_scroll_pane_g1

0x72b2,	// (0x00014c70) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0001d4a9) vitu2_page_scroll_pane_g

0x72ba,	// (0x00014c78) vitu2_page_scroll_pane_t1

0xbfea,	// (0x000199a8) popup_char_count_window_g1

0xd7b7,	// (0x0001b175) popup_char_count_window_g2

0xd7c0,	// (0x0001b17e) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0001d4ae) popup_char_count_window_g

0xd7c9,	// (0x0001b187) popup_char_count_window_t1

0x9387,	// (0x00016d45) main_vded2_pane

0xc7ea,	// (0x0001a1a8) aid_size_cell_imed_line

0xc7f4,	// (0x0001a1b2) grid_imed_line_width_pane

0x612b,	// (0x00013ae9) vid4_indicators_pane_g4

0xd7d7,	// (0x0001b195) cell_imed_line_width_pane_ParamLimits

0xd7d7,	// (0x0001b195) cell_imed_line_width_pane

0xd7eb,	// (0x0001b1a9) cell_imed_line_width_pane_g1

0xd7f4,	// (0x0001b1b2) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0001d4b5) cell_imed_line_width_pane_g

0x72c9,	// (0x00014c87) main_vded2_pane_g1_ParamLimits

0x72c9,	// (0x00014c87) main_vded2_pane_g1

0x72df,	// (0x00014c9d) main_vded2_pane_g2_ParamLimits

0x72df,	// (0x00014c9d) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0001d4ba) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0001d4ba) main_vded2_pane_g

0x72f1,	// (0x00014caf) vded2_slider_pane_ParamLimits

0x72f1,	// (0x00014caf) vded2_slider_pane

0x7301,	// (0x00014cbf) aid_size_touch_vded2_end

0x730b,	// (0x00014cc9) aid_size_touch_vded2_playhead

0xd7fc,	// (0x0001b1ba) aid_size_touch_vded2_start

0xd804,	// (0x0001b1c2) vded2_slider_bg_pane

0xd80d,	// (0x0001b1cb) vded2_slider_pane_g1

0xd816,	// (0x0001b1d4) vded2_slider_pane_g2

0x7315,	// (0x00014cd3) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x0001d4bf) vded2_slider_pane_g

0xd81e,	// (0x0001b1dc) vded2_slider_bg_pane_g1

0xd827,	// (0x0001b1e5) vded2_slider_bg_pane_g2

0xd830,	// (0x0001b1ee) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x0001d4c6) vded2_slider_bg_pane_g

0x335a,	// (0x00010d18) aid_postcard_touch_down_pane_ParamLimits

0x335a,	// (0x00010d18) aid_postcard_touch_down_pane

0x3370,	// (0x00010d2e) aid_postcard_touch_up_pane_ParamLimits

0x3370,	// (0x00010d2e) aid_postcard_touch_up_pane

0x9387,	// (0x00016d45) main_blid2_pane

0xbde3,	// (0x000197a1) popup_blid2_search_window

0x9387,	// (0x00016d45) blid2_gps_pane

0x9387,	// (0x00016d45) blid2_navig_pane

0x9387,	// (0x00016d45) blid2_search_pane

0x9387,	// (0x00016d45) blid2_tripm_pane

0x7320,	// (0x00014cde) blid2_search_pane_g1_ParamLimits

0x7320,	// (0x00014cde) blid2_search_pane_g1

0x7338,	// (0x00014cf6) blid2_search_pane_t1_ParamLimits

0x7338,	// (0x00014cf6) blid2_search_pane_t1

0x734a,	// (0x00014d08) aid_size_cell_blid2_gps_ParamLimits

0x734a,	// (0x00014d08) aid_size_cell_blid2_gps

0x7362,	// (0x00014d20) blid2_gps_pane_g1_ParamLimits

0x7362,	// (0x00014d20) blid2_gps_pane_g1

0x7376,	// (0x00014d34) grid_blid2_satellite_pane_ParamLimits

0x7376,	// (0x00014d34) grid_blid2_satellite_pane

0x7390,	// (0x00014d4e) blid2_navig_pane_g1_ParamLimits

0x7390,	// (0x00014d4e) blid2_navig_pane_g1

0x739c,	// (0x00014d5a) blid2_navig_pane_t1_ParamLimits

0x739c,	// (0x00014d5a) blid2_navig_pane_t1

0x73b7,	// (0x00014d75) blid2_navig_pane_t2_ParamLimits

0x73b7,	// (0x00014d75) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x0001d4cd) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x0001d4cd) blid2_navig_pane_t

0x73d2,	// (0x00014d90) blid2_navig_ring_pane_ParamLimits

0x73d2,	// (0x00014d90) blid2_navig_ring_pane

0x73eb,	// (0x00014da9) blid2_speed_pane_ParamLimits

0x73eb,	// (0x00014da9) blid2_speed_pane

0x73f7,	// (0x00014db5) blid2_tripm_pane_g1_ParamLimits

0x73f7,	// (0x00014db5) blid2_tripm_pane_g1

0x7412,	// (0x00014dd0) blid2_tripm_pane_g2_ParamLimits

0x7412,	// (0x00014dd0) blid2_tripm_pane_g2

0x7426,	// (0x00014de4) blid2_tripm_pane_g3_ParamLimits

0x7426,	// (0x00014de4) blid2_tripm_pane_g3

0x743a,	// (0x00014df8) blid2_tripm_pane_g4_ParamLimits

0x743a,	// (0x00014df8) blid2_tripm_pane_g4

0x744e,	// (0x00014e0c) blid2_tripm_pane_g5_ParamLimits

0x744e,	// (0x00014e0c) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x0001d4d2) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x0001d4d2) blid2_tripm_pane_g

0x7474,	// (0x00014e32) blid2_tripm_pane_t1_ParamLimits

0x7474,	// (0x00014e32) blid2_tripm_pane_t1

0x748f,	// (0x00014e4d) blid2_tripm_pane_t2_ParamLimits

0x748f,	// (0x00014e4d) blid2_tripm_pane_t2

0x74aa,	// (0x00014e68) blid2_tripm_pane_t3_ParamLimits

0x74aa,	// (0x00014e68) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x0001d4df) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x0001d4df) blid2_tripm_pane_t

0x74f1,	// (0x00014eaf) cell_blid2_satellite_pane_ParamLimits

0x74f1,	// (0x00014eaf) cell_blid2_satellite_pane

0x750f,	// (0x00014ecd) cell_blid2_satellite_pane_g1

0xd839,	// (0x0001b1f7) cell_blid2_satellite_pane_t1

0xc2dd,	// (0x00019c9b) blid2_speed_pane_g1

0xd847,	// (0x0001b205) blid2_speed_pane_t1

0xd855,	// (0x0001b213) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x0001d4e8) blid2_speed_pane_t

0xc2dd,	// (0x00019c9b) blid2_navig_ring_pane_g1

0x7518,	// (0x00014ed6) blid2_navig_ring_pane_g2

0x7520,	// (0x00014ede) blid2_navig_ring_pane_g3

0x7528,	// (0x00014ee6) blid2_navig_ring_pane_g4

0x7530,	// (0x00014eee) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x0001d4ed) blid2_navig_ring_pane_g

0x9387,	// (0x00016d45) bg_popup_window_pane_cp011

0xd863,	// (0x0001b221) popup_blid2_search_window_g1

0xd86b,	// (0x0001b229) popup_blid2_search_window_t1

0xd879,	// (0x0001b237) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x0001d4f8) popup_blid2_search_window_t

0xa073,	// (0x00017a31) main_browser_pane_g1

0x9ba2,	// (0x00017560) main_browser_pane_ParamLimits

0x93f7,	// (0x00016db5) bg_button_pane_cp011_ParamLimits

0x64de,	// (0x00013e9c) cell_vitu2_function_pane_g1_ParamLimits

0xbdd5,	// (0x00019793) bg_popup_sub_pane_cp22_ParamLimits

0x6e0b,	// (0x000147c9) input_focus_pane_cp08_ParamLimits

0x6e22,	// (0x000147e0) popup_vitu2_query_button_pane_ParamLimits

0x6e22,	// (0x000147e0) popup_vitu2_query_button_pane

0x6e33,	// (0x000147f1) popup_vitu2_query_input_button_pane

0xd393,	// (0x0001ad51) popup_vitu2_query_window_g1_ParamLimits

0x6e3d,	// (0x000147fb) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0001d3f9) popup_vitu2_query_window_g_ParamLimits

0x9387,	// (0x00016d45) bg_button_pane_cp026

0x7538,	// (0x00014ef6) popup_vitu2_query_input_button_pane_g1

0x9387,	// (0x00016d45) bg_button_pane_cp025

0xd887,	// (0x0001b245) popup_vitu2_query_button_pane_t1

0x49f6,	// (0x000123b4) main_mp3_pane_t6

0x4a04,	// (0x000123c2) popup_slider_window_cp01

0xcf95,	// (0x0001a953) cam4_battery_pane

0xcfee,	// (0x0001a9ac) cam4_battery_pane_cp02

0xd674,	// (0x0001b032) cam4_battery_pane_cp01

0xd674,	// (0x0001b032) cam4_battery_pane_cp03

0xc2dd,	// (0x00019c9b) cam4_battery_pane_g1

0xd895,	// (0x0001b253) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x0001d4fd) cam4_battery_pane_g

0xc1a7,	// (0x00019b65) popup_blid_sat_info2_window_t11

0x2ce6,	// (0x000106a4) aid_size_touch_mv_arrow_left_ParamLimits

0x2d0f,	// (0x000106cd) aid_size_touch_mv_arrow_right_ParamLimits

0xa896,	// (0x00018254) navi_pane_g1_ParamLimits

0x2d38,	// (0x000106f6) navi_pane_g2_ParamLimits

0x2d66,	// (0x00010724) navi_pane_g3_ParamLimits

0xf409,	// (0x0001cdc7) navi_pane_g_ParamLimits

0x2dbe,	// (0x0001077c) navi_pane_mv_t1_ParamLimits

0x55f6,	// (0x00012fb4) grid_imed_effect_pane_ParamLimits

0x1be0,	// (0x0000f59e) aid_placing_vt_slider_lsc

0x9fc4,	// (0x00017982) aid_placing_vt_slider_prt

0x93f7,	// (0x00016db5) bg_tb_trans_pane_cp01_ParamLimits

0xc464,	// (0x00019e22) popup_image_details_window_g1_ParamLimits

0xc477,	// (0x00019e35) popup_image_details_window_g2_ParamLimits

0xc48c,	// (0x00019e4a) popup_image_details_window_g3_ParamLimits

0xc48c,	// (0x00019e4a) popup_image_details_window_g3

0xf73c,	// (0x0001d0fa) popup_image_details_window_g_ParamLimits

0xc4a0,	// (0x00019e5e) popup_image_details_window_t1_ParamLimits

0xc4b2,	// (0x00019e70) popup_image_details_window_t2_ParamLimits

0xc4cb,	// (0x00019e89) popup_image_details_window_t3_ParamLimits

0xc4df,	// (0x00019e9d) popup_image_details_window_t4_ParamLimits

0xc4fa,	// (0x00019eb8) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0001d101) popup_image_details_window_t_ParamLimits

0x71b3,	// (0x00014b71) cl_header_name_pane_ParamLimits

0x71b3,	// (0x00014b71) cl_header_name_pane

0x7540,	// (0x00014efe) cl_header_name_pane_t1_ParamLimits

0x7540,	// (0x00014efe) cl_header_name_pane_t1

0x7561,	// (0x00014f1f) cl_header_name_pane_t2_ParamLimits

0x7561,	// (0x00014f1f) cl_header_name_pane_t2

0x75a3,	// (0x00014f61) cl_header_name_pane_t3_ParamLimits

0x75a3,	// (0x00014f61) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x0001d502) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x0001d502) cl_header_name_pane_t

0x2d8f,	// (0x0001074d) navi_pane_mv_g2_ParamLimits

0xd00f,	// (0x0001a9cd) field_vitu2_entry_pane_g1_ParamLimits

0xd01b,	// (0x0001a9d9) field_vitu2_entry_pane_g2_ParamLimits

0xd027,	// (0x0001a9e5) field_vitu2_entry_pane_g3_ParamLimits

0xd027,	// (0x0001a9e5) field_vitu2_entry_pane_g3

0xf93a,	// (0x0001d2f8) field_vitu2_entry_pane_g_ParamLimits

0x637e,	// (0x00013d3c) cell_vitu2_itu_pane_g1_ParamLimits

0x638e,	// (0x00013d4c) cell_vitu2_itu_pane_g2_ParamLimits

0x638e,	// (0x00013d4c) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0001d304) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0001d304) cell_vitu2_itu_pane_g

0x93f7,	// (0x00016db5) bg_vkb2_func_pane_cp05_ParamLimits

0x93f7,	// (0x00016db5) bg_vkb2_func_pane_cp05

0x93f7,	// (0x00016db5) bg_vkb2_func_pane_cp03

0x93f7,	// (0x00016db5) bg_vkb2_func_pane_cp04

0x93f7,	// (0x00016db5) bg_vkb2_func_pane_cp10_ParamLimits

0x93f7,	// (0x00016db5) bg_vkb2_func_pane_cp10

0x7155,	// (0x00014b13) bg_vkb2_func_pane_cp08

0x713b,	// (0x00014af9) bg_vkb2_func_pane_cp06

0x7149,	// (0x00014b07) bg_vkb2_func_pane_cp07

0xd78d,	// (0x0001b14b) bg_vkb2_func_pane_cp11_ParamLimits

0xd78d,	// (0x0001b14b) bg_vkb2_func_pane_cp11

0xd7a2,	// (0x0001b160) bg_vkb2_func_pane_cp12_ParamLimits

0xd7a2,	// (0x0001b160) bg_vkb2_func_pane_cp12

0x9387,	// (0x00016d45) bg_vkb2_func_pane_cp09

0xd095,	// (0x0001aa53) bg_vkb2_func_pane_g1

0xa184,	// (0x00017b42) bg_vkb2_func_pane_g2

0xd09d,	// (0x0001aa5b) bg_vkb2_func_pane_g3

0xd0a5,	// (0x0001aa63) bg_vkb2_func_pane_g4

0xd31e,	// (0x0001acdc) bg_vkb2_func_pane_g5

0xd0bd,	// (0x0001aa7b) bg_vkb2_func_pane_g6

0xd0c5,	// (0x0001aa83) bg_vkb2_func_pane_g7

0xd0b5,	// (0x0001aa73) bg_vkb2_func_pane_g8

0xa164,	// (0x00017b22) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x0001d509) bg_vkb2_func_pane_g

0x7462,	// (0x00014e20) blid2_tripm_pane_g6_ParamLimits

0x7462,	// (0x00014e20) blid2_tripm_pane_g6

0xcdea,	// (0x0001a7a8) mp4_progress_pane_g1

0x74dd,	// (0x00014e9b) blid2_tripm_values_pane_ParamLimits

0x74dd,	// (0x00014e9b) blid2_tripm_values_pane

0x75d4,	// (0x00014f92) blid2_tripm_values_pane_t1

0x75e2,	// (0x00014fa0) blid2_tripm_values_pane_t2

0x75f0,	// (0x00014fae) blid2_tripm_values_pane_t3

0x75fe,	// (0x00014fbc) blid2_tripm_values_pane_t4

0x760c,	// (0x00014fca) blid2_tripm_values_pane_t5

0x761a,	// (0x00014fd8) blid2_tripm_values_pane_t6

0x7628,	// (0x00014fe6) blid2_tripm_values_pane_t7

0x7636,	// (0x00014ff4) blid2_tripm_values_pane_t8

0x7644,	// (0x00015002) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x0001d51c) blid2_tripm_values_pane_t

0x1c22,	// (0x0000f5e0) call_video_pane_t1_ParamLimits

0x1c40,	// (0x0000f5fe) call_video_pane_t2_ParamLimits

0xf292,	// (0x0001cc50) call_video_pane_t_ParamLimits

0x3293,	// (0x00010c51) msg_header_pane_g1_ParamLimits

0xaad1,	// (0x0001848f) msg_header_pane_g2_ParamLimits

0xaad1,	// (0x0001848f) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0001ce6a) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0001ce6a) msg_header_pane_g

0x9ba2,	// (0x00017560) main_clock2_pane_ParamLimits

0x531b,	// (0x00012cd9) grid_clock2_toolbar_pane_ParamLimits

0x531b,	// (0x00012cd9) grid_clock2_toolbar_pane

0x531b,	// (0x00012cd9) listscroll_clock2_pane_ParamLimits

0x531b,	// (0x00012cd9) listscroll_clock2_pane

0x53f8,	// (0x00012db6) main_clock2_pane_t3_ParamLimits

0x53f8,	// (0x00012db6) main_clock2_pane_t3

0x5413,	// (0x00012dd1) main_clock2_pane_t4_ParamLimits

0x5413,	// (0x00012dd1) main_clock2_pane_t4

0xd89f,	// (0x0001b25d) cell_clock2_toolbar_pane

0xd8a7,	// (0x0001b265) cell_clock2_toolbar_pane_cp01

0xd8a7,	// (0x0001b265) cell_clock2_toolbar_pane_cp02

0xd8af,	// (0x0001b26d) cell_clock2_toolbar_pane_cp03

0xd8b7,	// (0x0001b275) list_clock2_pane

0xa7e9,	// (0x000181a7) scroll_pane_cp10

0xd8bf,	// (0x0001b27d) list_single_clock2_pane_ParamLimits

0xd8bf,	// (0x0001b27d) list_single_clock2_pane

0xa936,	// (0x000182f4) list_highlight_pane_cp08

0xd8cc,	// (0x0001b28a) list_single_clock2_pane_t1

0xd8da,	// (0x0001b298) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x0001d52f) list_single_clock2_pane_t

0x9387,	// (0x00016d45) bg_button_pane_cp10

0xd8e8,	// (0x0001b2a6) cell_clock2_toolbar_pane_g1

0x32e6,	// (0x00010ca4) aid_main_viewer_pane_g1_ParamLimits

0x32e6,	// (0x00010ca4) aid_main_viewer_pane_g1

0x32f4,	// (0x00010cb2) aid_main_viewer_pane_g2_ParamLimits

0x32f4,	// (0x00010cb2) aid_main_viewer_pane_g2

0x3302,	// (0x00010cc0) aid_main_viewer_pane_g3_ParamLimits

0x3302,	// (0x00010cc0) aid_main_viewer_pane_g3

0x3311,	// (0x00010ccf) aid_main_viewer_pane_g4_ParamLimits

0x3311,	// (0x00010ccf) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0001ce7b) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0001ce7b) aid_main_viewer_pane_g

0x3c1d,	// (0x000115db) main_calc_pane_ParamLimits

0x3c31,	// (0x000115ef) main_dialer2_pane_ParamLimits

0x9387,	// (0x00016d45) main_cam6_pane

0x9387,	// (0x00016d45) main_vid6_pane

0x5327,	// (0x00012ce5) listscroll_gen_pane_cp06_ParamLimits

0x5327,	// (0x00012ce5) listscroll_gen_pane_cp06

0x542e,	// (0x00012dec) main_clock2_pane_t5_ParamLimits

0x542e,	// (0x00012dec) main_clock2_pane_t5

0x548b,	// (0x00012e49) aid_call2_pane_cp10_ParamLimits

0x549d,	// (0x00012e5b) aid_call_pane_cp10_ParamLimits

0xa86b,	// (0x00018229) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa86b,	// (0x00018229) popup_clock_analogue_window_cp10_g2_ParamLimits

0x54af,	// (0x00012e6d) popup_clock_analogue_window_cp10_g3_ParamLimits

0x54af,	// (0x00012e6d) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa86b,	// (0x00018229) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0001d1b1) popup_clock_analogue_window_cp10_g_ParamLimits

0x54c1,	// (0x00012e7f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5b4e,	// (0x0001350c) cell_dialer2_keypad_pane_g2_ParamLimits

0x5b4e,	// (0x0001350c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0001d297) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0001d297) cell_dialer2_keypad_pane_g

0x5b6a,	// (0x00013528) cell_dialer2_keypad_pane_t1

0x67f5,	// (0x000141b3) main_cset_text2_pane_ParamLimits

0x67f5,	// (0x000141b3) main_cset_text2_pane

0xd57b,	// (0x0001af39) area_vitu2_query_pane_g1_ParamLimits

0x70da,	// (0x00014a98) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0001d44c) area_vitu2_query_pane_g_ParamLimits

0xd5ff,	// (0x0001afbd) area_vitu2_query_pane_t7_ParamLimits

0xd5ff,	// (0x0001afbd) area_vitu2_query_pane_t7

0x713b,	// (0x00014af9) bg_button_pane_cp018_ParamLimits

0x7149,	// (0x00014b07) bg_button_pane_cp021_ParamLimits

0x7155,	// (0x00014b13) bg_button_pane_cp022_ParamLimits

0x7155,	// (0x00014b13) bg_vkb2_func_pane_cp08_ParamLimits

0x713b,	// (0x00014af9) bg_vkb2_func_pane_cp06_ParamLimits

0x7149,	// (0x00014b07) bg_vkb2_func_pane_cp07_ParamLimits

0x7166,	// (0x00014b24) input_focus_pane_cp09_ParamLimits

0xd8f0,	// (0x0001b2ae) cam6_autofocus_pane_ParamLimits

0xd8f0,	// (0x0001b2ae) cam6_autofocus_pane

0x7652,	// (0x00015010) cam6_image_uncrop_pane_ParamLimits

0x7652,	// (0x00015010) cam6_image_uncrop_pane

0x7661,	// (0x0001501f) cam6_indi_pane_ParamLimits

0x7661,	// (0x0001501f) cam6_indi_pane

0x7677,	// (0x00015035) cam6_mode_pane_ParamLimits

0x7677,	// (0x00015035) cam6_mode_pane

0x7689,	// (0x00015047) cam6_timer_pane_ParamLimits

0x7689,	// (0x00015047) cam6_timer_pane

0x7695,	// (0x00015053) cam6_zoom_pane_ParamLimits

0x7695,	// (0x00015053) cam6_zoom_pane

0x76a1,	// (0x0001505f) cam6_mode_pane_g1_ParamLimits

0x76a1,	// (0x0001505f) cam6_mode_pane_g1

0x76b1,	// (0x0001506f) cam6_mode_pane_g2_ParamLimits

0x76b1,	// (0x0001506f) cam6_mode_pane_g2

0x76c1,	// (0x0001507f) cam6_mode_pane_g3_ParamLimits

0x76c1,	// (0x0001507f) cam6_mode_pane_g3

0x76d1,	// (0x0001508f) cam6_mode_pane_g4_ParamLimits

0x76d1,	// (0x0001508f) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x0001d534) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x0001d534) cam6_mode_pane_g

0xd8fe,	// (0x0001b2bc) bg_tb_trans_pane_cp08_ParamLimits

0xd8fe,	// (0x0001b2bc) bg_tb_trans_pane_cp08

0xd90c,	// (0x0001b2ca) cam6_battery_pane_ParamLimits

0xd90c,	// (0x0001b2ca) cam6_battery_pane

0xd922,	// (0x0001b2e0) cam6_indi_pane_g1_ParamLimits

0xd922,	// (0x0001b2e0) cam6_indi_pane_g1

0xd934,	// (0x0001b2f2) cam6_indi_pane_g2_ParamLimits

0xd934,	// (0x0001b2f2) cam6_indi_pane_g2

0xd946,	// (0x0001b304) cam6_indi_pane_g3_ParamLimits

0xd946,	// (0x0001b304) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x0001d53d) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x0001d53d) cam6_indi_pane_g

0xd958,	// (0x0001b316) cam6_indi_pane_t1_ParamLimits

0xd958,	// (0x0001b316) cam6_indi_pane_t1

0x76e1,	// (0x0001509f) cam6_autofocus_pane_g1

0x76e9,	// (0x000150a7) cam6_autofocus_pane_g2

0x76f1,	// (0x000150af) cam6_autofocus_pane_g3

0x76f9,	// (0x000150b7) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x0001d544) cam6_autofocus_pane_g

0xd97e,	// (0x0001b33c) cam6_timer_pane_g1

0xd986,	// (0x0001b344) cam6_timer_pane_t1

0xd994,	// (0x0001b352) cam6_zoom_cont_pane

0xd99c,	// (0x0001b35a) cam6_zoom_pane_g1

0xd9a4,	// (0x0001b362) cam6_zoom_pane_g2

0x7701,	// (0x000150bf) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x0001d54d) cam6_zoom_pane_g

0xc2dd,	// (0x00019c9b) cam6_battery_pane_g1

0xc2dd,	// (0x00019c9b) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0001d0be) cam6_battery_pane_g

0xd9ac,	// (0x0001b36a) cam6_zoom_cont_pane_g1

0xd9b5,	// (0x0001b373) cam6_zoom_cont_pane_g2

0xd9be,	// (0x0001b37c) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x0001d554) cam6_zoom_cont_pane_g

0x771e,	// (0x000150dc) cam6_mode_pane_cp_ParamLimits

0x771e,	// (0x000150dc) cam6_mode_pane_cp

0x7695,	// (0x00015053) cam6_zoom_pane_cp_ParamLimits

0x7695,	// (0x00015053) cam6_zoom_pane_cp

0x7730,	// (0x000150ee) vid6_image_uncrop_cif_pane_ParamLimits

0x7730,	// (0x000150ee) vid6_image_uncrop_cif_pane

0x7740,	// (0x000150fe) vid6_image_uncrop_nhd_pane_ParamLimits

0x7740,	// (0x000150fe) vid6_image_uncrop_nhd_pane

0x7652,	// (0x00015010) vid6_image_uncrop_vga_pane_ParamLimits

0x7652,	// (0x00015010) vid6_image_uncrop_vga_pane

0x774f,	// (0x0001510d) vid6_image_uncrop_wvga_pane_ParamLimits

0x774f,	// (0x0001510d) vid6_image_uncrop_wvga_pane

0x775e,	// (0x0001511c) vid6_indi_pane_ParamLimits

0x775e,	// (0x0001511c) vid6_indi_pane

0xd8fe,	// (0x0001b2bc) bg_tb_trans_pane_cp09_ParamLimits

0xd8fe,	// (0x0001b2bc) bg_tb_trans_pane_cp09

0xd9d6,	// (0x0001b394) cam6_battery_pane_cp_ParamLimits

0xd9d6,	// (0x0001b394) cam6_battery_pane_cp

0xd9e2,	// (0x0001b3a0) vid6_indi_pane_g1_ParamLimits

0xd9e2,	// (0x0001b3a0) vid6_indi_pane_g1

0xd9f4,	// (0x0001b3b2) vid6_indi_pane_g2_ParamLimits

0xd9f4,	// (0x0001b3b2) vid6_indi_pane_g2

0xda06,	// (0x0001b3c4) vid6_indi_pane_g3_ParamLimits

0xda06,	// (0x0001b3c4) vid6_indi_pane_g3

0xda1b,	// (0x0001b3d9) vid6_indi_pane_g4_ParamLimits

0xda1b,	// (0x0001b3d9) vid6_indi_pane_g4

0xda30,	// (0x0001b3ee) vid6_indi_pane_g5_ParamLimits

0xda30,	// (0x0001b3ee) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x0001d55b) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x0001d55b) vid6_indi_pane_g

0xda4a,	// (0x0001b408) vid6_indi_pane_t1_ParamLimits

0xda4a,	// (0x0001b408) vid6_indi_pane_t1

0xda60,	// (0x0001b41e) vid6_indi_pane_t2_ParamLimits

0xda60,	// (0x0001b41e) vid6_indi_pane_t2

0xda88,	// (0x0001b446) vid6_indi_pane_t3_ParamLimits

0xda88,	// (0x0001b446) vid6_indi_pane_t3

0xdab0,	// (0x0001b46e) vid6_indi_pane_t4_ParamLimits

0xdab0,	// (0x0001b46e) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x0001d566) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x0001d566) vid6_indi_pane_t

0xdad4,	// (0x0001b492) wait_bar_pane_cp08

0x7776,	// (0x00015134) main_cset_text2_pane_t1_ParamLimits

0x7776,	// (0x00015134) main_cset_text2_pane_t1

0x7709,	// (0x000150c7) listscroll_gen_pane_cp06_t1_ParamLimits

0x7709,	// (0x000150c7) listscroll_gen_pane_cp06_t1

0x9387,	// (0x00016d45) main_cam6_set_pane

0xc544,	// (0x00019f02) bg_tb_trans_pane_cp06_ParamLimits

0xcf9d,	// (0x0001a95b) cam4_indicators_pane_g1_ParamLimits

0xcfae,	// (0x0001a96c) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0001d2d4) cam4_indicators_pane_g_ParamLimits

0xcfcc,	// (0x0001a98a) cam4_indicators_pane_t1_ParamLimits

0xc9aa,	// (0x0001a368) bg_tb_trans_pane_cp07_ParamLimits

0x6104,	// (0x00013ac2) vid4_indicators_pane_g1_ParamLimits

0x6111,	// (0x00013acf) vid4_indicators_pane_g2_ParamLimits

0x611e,	// (0x00013adc) vid4_indicators_pane_g3_ParamLimits

0x612b,	// (0x00013ae9) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0001d2e6) vid4_indicators_pane_g_ParamLimits

0x6143,	// (0x00013b01) vid4_indicators_pane_t1_ParamLimits

0xd67c,	// (0x0001b03a) vid4_progress_pane_g1_ParamLimits

0xd68c,	// (0x0001b04a) vid4_progress_pane_g2_ParamLimits

0xd69c,	// (0x0001b05a) vid4_progress_pane_g3_ParamLimits

0xcfae,	// (0x0001a96c) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0001d497) vid4_progress_pane_g_ParamLimits

0xd6a8,	// (0x0001b066) vid4_progress_pane_t1_ParamLimits

0xd6bd,	// (0x0001b07b) vid4_progress_pane_t2_ParamLimits

0xd6d3,	// (0x0001b091) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0001d4a2) vid4_progress_pane_t_ParamLimits

0xd6e8,	// (0x0001b0a6) wait_bar_pane_cp07_ParamLimits

0x7796,	// (0x00015154) main_cam6_set_pane_g2_ParamLimits

0x7796,	// (0x00015154) main_cam6_set_pane_g2

0x77ba,	// (0x00015178) main_cset6_listscroll_pane_ParamLimits

0x77ba,	// (0x00015178) main_cset6_listscroll_pane

0x77d6,	// (0x00015194) main_cset6_slider_pane_ParamLimits

0x77d6,	// (0x00015194) main_cset6_slider_pane

0x77ec,	// (0x000151aa) main_cset6_text2_pane_ParamLimits

0x77ec,	// (0x000151aa) main_cset6_text2_pane

0xdae3,	// (0x0001b4a1) main_cset6_text_pane

0xdaeb,	// (0x0001b4a9) main_cset_list_pane_copy1_ParamLimits

0xdaeb,	// (0x0001b4a9) main_cset_list_pane_copy1

0xdafb,	// (0x0001b4b9) scroll_pane_cp028_copy1

0x77fa,	// (0x000151b8) cset_list_set_pane_copy1

0x780d,	// (0x000151cb) aid_position_infowindow_above_copy1

0x7815,	// (0x000151d3) aid_position_infowindow_below_copy1

0xdb04,	// (0x0001b4c2) cset_list_set_pane_g1_copy1

0xdb0c,	// (0x0001b4ca) cset_list_set_pane_g3_copy1_ParamLimits

0xdb0c,	// (0x0001b4ca) cset_list_set_pane_g3_copy1

0xdb1b,	// (0x0001b4d9) cset_list_set_pane_t1_copy1_ParamLimits

0xdb1b,	// (0x0001b4d9) cset_list_set_pane_t1_copy1

0x93f7,	// (0x00016db5) list_highlight_pane_cp021_copy1_ParamLimits

0x93f7,	// (0x00016db5) list_highlight_pane_cp021_copy1

0xdb30,	// (0x0001b4ee) cset6_slider_pane_ParamLimits

0xdb30,	// (0x0001b4ee) cset6_slider_pane

0xdb5c,	// (0x0001b51a) main_cset6_slider_pane_g1_ParamLimits

0xdb5c,	// (0x0001b51a) main_cset6_slider_pane_g1

0x781d,	// (0x000151db) main_cset6_slider_pane_g2_ParamLimits

0x781d,	// (0x000151db) main_cset6_slider_pane_g2

0xd1c4,	// (0x0001ab82) main_cset6_slider_pane_g3_ParamLimits

0xd1c4,	// (0x0001ab82) main_cset6_slider_pane_g3

0x68ba,	// (0x00014278) main_cset6_slider_pane_g4_ParamLimits

0x68ba,	// (0x00014278) main_cset6_slider_pane_g4

0x6902,	// (0x000142c0) main_cset6_slider_pane_g5_ParamLimits

0x6902,	// (0x000142c0) main_cset6_slider_pane_g5

0xd1c4,	// (0x0001ab82) main_cset6_slider_pane_g7_ParamLimits

0xd1c4,	// (0x0001ab82) main_cset6_slider_pane_g7

0xd1d0,	// (0x0001ab8e) main_cset6_slider_pane_g8_ParamLimits

0xd1d0,	// (0x0001ab8e) main_cset6_slider_pane_g8

0x68a2,	// (0x00014260) main_cset6_slider_pane_g9_ParamLimits

0x68a2,	// (0x00014260) main_cset6_slider_pane_g9

0x68ae,	// (0x0001426c) main_cset6_slider_pane_g10_ParamLimits

0x68ae,	// (0x0001426c) main_cset6_slider_pane_g10

0x68ba,	// (0x00014278) main_cset6_slider_pane_g11_ParamLimits

0x68ba,	// (0x00014278) main_cset6_slider_pane_g11

0x68c6,	// (0x00014284) main_cset6_slider_pane_g12_ParamLimits

0x68c6,	// (0x00014284) main_cset6_slider_pane_g12

0x68d2,	// (0x00014290) main_cset6_slider_pane_g13_ParamLimits

0x68d2,	// (0x00014290) main_cset6_slider_pane_g13

0x68de,	// (0x0001429c) main_cset6_slider_pane_g14_ParamLimits

0x68de,	// (0x0001429c) main_cset6_slider_pane_g14

0x7845,	// (0x00015203) main_cset6_slider_pane_g15_ParamLimits

0x7845,	// (0x00015203) main_cset6_slider_pane_g15

0x6902,	// (0x000142c0) main_cset6_slider_pane_g16_ParamLimits

0x6902,	// (0x000142c0) main_cset6_slider_pane_g16

0x690e,	// (0x000142cc) main_cset6_slider_pane_g17_ParamLimits

0x690e,	// (0x000142cc) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x0001d56f) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x0001d56f) main_cset6_slider_pane_g

0xdb84,	// (0x0001b542) main_cset6_slider_pane_t1_ParamLimits

0xdb84,	// (0x0001b542) main_cset6_slider_pane_t1

0x785d,	// (0x0001521b) main_cset6_slider_pane_t2_ParamLimits

0x785d,	// (0x0001521b) main_cset6_slider_pane_t2

0x7888,	// (0x00015246) main_cset6_slider_pane_t3_ParamLimits

0x7888,	// (0x00015246) main_cset6_slider_pane_t3

0x78b3,	// (0x00015271) main_cset6_slider_pane_t4_ParamLimits

0x78b3,	// (0x00015271) main_cset6_slider_pane_t4

0x78de,	// (0x0001529c) main_cset6_slider_pane_t5_ParamLimits

0x78de,	// (0x0001529c) main_cset6_slider_pane_t5

0xdbc5,	// (0x0001b583) main_cset6_slider_pane_t7_ParamLimits

0xdbc5,	// (0x0001b583) main_cset6_slider_pane_t7

0x7909,	// (0x000152c7) main_cset6_slider_pane_t8_ParamLimits

0x7909,	// (0x000152c7) main_cset6_slider_pane_t8

0x792d,	// (0x000152eb) main_cset6_slider_pane_t9_ParamLimits

0x792d,	// (0x000152eb) main_cset6_slider_pane_t9

0x7951,	// (0x0001530f) main_cset6_slider_pane_t10_ParamLimits

0x7951,	// (0x0001530f) main_cset6_slider_pane_t10

0x7975,	// (0x00015333) main_cset6_slider_pane_t11_ParamLimits

0x7975,	// (0x00015333) main_cset6_slider_pane_t11

0xdbfb,	// (0x0001b5b9) main_cset6_slider_pane_t14_ParamLimits

0xdbfb,	// (0x0001b5b9) main_cset6_slider_pane_t14

0xdc34,	// (0x0001b5f2) main_cset6_slider_pane_t15_ParamLimits

0xdc34,	// (0x0001b5f2) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x0001d594) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x0001d594) main_cset6_slider_pane_t

0xd2a8,	// (0x0001ac66) cset_slider_pane_g1_copy1

0xd2b1,	// (0x0001ac6f) cset_slider_pane_g2_copy1

0xd2ba,	// (0x0001ac78) cset_slider_pane_g3_copy1

0x9387,	// (0x00016d45) bg_popup_sub_pane_cp011_copy1

0xd39f,	// (0x0001ad5d) main_cset_text_pane_g1_copy1

0xd3a7,	// (0x0001ad65) main_cset_text_pane_t1_copy1

0xd3b5,	// (0x0001ad73) main_cset_text_pane_t2_copy1

0xd3c3,	// (0x0001ad81) main_cset_text_pane_t3_copy1

0xd3d1,	// (0x0001ad8f) main_cset_text_pane_t4_copy1

0xd3df,	// (0x0001ad9d) main_cset_text_pane_t5_copy1

0xd3ed,	// (0x0001adab) main_cset_text_pane_t6_copy1

0xd3fb,	// (0x0001adb9) main_cset_text_pane_t7_copy1

0x7776,	// (0x00015134) main_cset_text2_pane_t1_copy1

0x9387,	// (0x00016d45) main_ncimui_pane

0x3e67,	// (0x00011825) popup_query_ncimui_window_ParamLimits

0x3e67,	// (0x00011825) popup_query_ncimui_window

0xc5a9,	// (0x00019f67) field_cale_ev2_pane_g4_ParamLimits

0xc5a9,	// (0x00019f67) field_cale_ev2_pane_g4

0x5a26,	// (0x000133e4) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5a26,	// (0x000133e4) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0001d272) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0001d272) cell_video_dialer_keypad_pane_g

0x5a3e,	// (0x000133fc) cell_video_dialer_keypad_pane_t1

0x9387,	// (0x00016d45) bg_popup_window_pane_cp012

0xa6b9,	// (0x00018077) heading_pane_cp06

0xdd5c,	// (0x0001b71a) ncim_query_content_pane

0x9387,	// (0x00016d45) bg_popup_heading_pane_cp01

0xdd64,	// (0x0001b722) ncim_heading_pane_t1

0xdd72,	// (0x0001b730) ncim_indicator_popup_pane

0xdd84,	// (0x0001b742) ncim_query_button_pane

0xdd98,	// (0x0001b756) ncim_query_content_pane_t1

0xddaa,	// (0x0001b768) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x0001d5d3) ncim_query_content_pane_t

0xdde4,	// (0x0001b7a2) ncim_query_list_pane

0xddf6,	// (0x0001b7b4) ncim_query_popup_pane

0xdd72,	// (0x0001b730) ncim_indicator_popup_pane_ParamLimits

0x7a92,	// (0x00015450) ncim_query_content_pane_g1_ParamLimits

0x7a92,	// (0x00015450) ncim_query_content_pane_g1

0xdd98,	// (0x0001b756) ncim_query_content_pane_t1_ParamLimits

0xddaa,	// (0x0001b768) ncim_query_content_pane_t2_ParamLimits

0x7a9e,	// (0x0001545c) ncim_query_content_pane_t3_ParamLimits

0x7a9e,	// (0x0001545c) ncim_query_content_pane_t3

0x7ac6,	// (0x00015484) ncim_query_content_pane_t4_ParamLimits

0x7ac6,	// (0x00015484) ncim_query_content_pane_t4

0x7aee,	// (0x000154ac) ncim_query_content_pane_t5_ParamLimits

0x7aee,	// (0x000154ac) ncim_query_content_pane_t5

0xddbc,	// (0x0001b77a) ncim_query_content_pane_t6_ParamLimits

0xddbc,	// (0x0001b77a) ncim_query_content_pane_t6

0xfc15,	// (0x0001d5d3) ncim_query_content_pane_t_ParamLimits

0xdde4,	// (0x0001b7a2) ncim_query_list_pane_ParamLimits

0xddf6,	// (0x0001b7b4) ncim_query_popup_pane_ParamLimits

0xde0a,	// (0x0001b7c8) wait_bar_pane_cp04

0x9387,	// (0x00016d45) input_focus_pane_cp011

0xde12,	// (0x0001b7d0) ncim_query_popup_pane_t1

0xde20,	// (0x0001b7de) ncim_list_query_list_pane_ParamLimits

0xde20,	// (0x0001b7de) ncim_list_query_list_pane

0x9387,	// (0x00016d45) bg_button_pane_cp027

0xde33,	// (0x0001b7f1) ncim_query_button_pane_g1

0x9387,	// (0x00016d45) list_highlight_pane_cp012

0xde3d,	// (0x0001b7fb) ncim_list_query_list_pane_g1

0xde45,	// (0x0001b803) ncim_list_query_list_pane_t1

0xcfbd,	// (0x0001a97b) cam4_indicators_pane_g3_ParamLimits

0xcfbd,	// (0x0001a97b) cam4_indicators_pane_g3

0x6137,	// (0x00013af5) vid4_indicators_pane_g5_ParamLimits

0x6137,	// (0x00013af5) vid4_indicators_pane_g5

0xcfbd,	// (0x0001a97b) vid4_progress_pane_g5_ParamLimits

0xcfbd,	// (0x0001a97b) vid4_progress_pane_g5

0x79ab,	// (0x00015369) main_ncimui_pane_g1

0x7a01,	// (0x000153bf) ncimui_group_query_pane_ParamLimits

0x7a01,	// (0x000153bf) ncimui_group_query_pane

0x7a3d,	// (0x000153fb) ncimui_list_pane_ParamLimits

0x7a3d,	// (0x000153fb) ncimui_list_pane

0x7a5e,	// (0x0001541c) ncimui_text_pane_ParamLimits

0x7a5e,	// (0x0001541c) ncimui_text_pane

0x7b16,	// (0x000154d4) ncimui_text_pane_t1_ParamLimits

0x7b16,	// (0x000154d4) ncimui_text_pane_t1

0xde53,	// (0x0001b811) ncimui_list_single_graphic_pane_ParamLimits

0xde53,	// (0x0001b811) ncimui_list_single_graphic_pane

0x7b34,	// (0x000154f2) ncimui_query_pane_ParamLimits

0x7b34,	// (0x000154f2) ncimui_query_pane

0x9387,	// (0x00016d45) list_highlight_pane_cp013

0xde63,	// (0x0001b821) ncim_list_query_list_pane_t1_copy1

0xde3d,	// (0x0001b7fb) ncim_list_single_graphic_pane_g1

0xde71,	// (0x0001b82f) ncim_query_button_pane_cp01

0xde7d,	// (0x0001b83b) ncim_query_entry_pane_ParamLimits

0xde7d,	// (0x0001b83b) ncim_query_entry_pane

0xde90,	// (0x0001b84e) ncimui_query_pane_g1

0xde9c,	// (0x0001b85a) ncimui_query_pane_t1_ParamLimits

0xde9c,	// (0x0001b85a) ncimui_query_pane_t1

0x93f7,	// (0x00016db5) input_focus_pane_cp012

0xdeb5,	// (0x0001b873) ncim_query_entry_pane_t1

0x9ba2,	// (0x00017560) main_im_pane_ParamLimits

0x93f7,	// (0x00016db5) main_mobtv_pane_ParamLimits

0x93f7,	// (0x00016db5) main_mobtv_pane

0x68a2,	// (0x00014260) main_cset6_slider_pane_g18_ParamLimits

0x68a2,	// (0x00014260) main_cset6_slider_pane_g18

0x68d2,	// (0x00014290) main_cset6_slider_pane_g19_ParamLimits

0x68d2,	// (0x00014290) main_cset6_slider_pane_g19

0xdec7,	// (0x0001b885) bg_main_mobtv_pane_ParamLimits

0xdec7,	// (0x0001b885) bg_main_mobtv_pane

0x7b47,	// (0x00015505) main_mobtv_info_pane

0x7b50,	// (0x0001550e) main_mobtv_loading_pane_ParamLimits

0x7b50,	// (0x0001550e) main_mobtv_loading_pane

0xded5,	// (0x0001b893) main_mobtv_pg_channel_list_pane

0xdedf,	// (0x0001b89d) main_mobtv_pg_hdr_pane

0x7b5d,	// (0x0001551b) main_mobtv_programe_curr_pane_ParamLimits

0x7b5d,	// (0x0001551b) main_mobtv_programe_curr_pane

0x7b6a,	// (0x00015528) main_mobtv_programe_next_pane_ParamLimits

0x7b6a,	// (0x00015528) main_mobtv_programe_next_pane

0xdee8,	// (0x0001b8a6) popup_mobtv_noti_window

0xc2dd,	// (0x00019c9b) main_tv_pg_hdr_pane_g1

0xdef0,	// (0x0001b8ae) main_tv_pg_hdr_pane_g2

0xdef8,	// (0x0001b8b6) main_tv_pg_hdr_pane_g3

0xdf00,	// (0x0001b8be) main_tv_pg_hdr_pane_g4

0xdf08,	// (0x0001b8c6) main_tv_pg_hdr_pane_g5

0xdf12,	// (0x0001b8d0) main_tv_pg_hdr_pane_g6

0xdf1c,	// (0x0001b8da) main_tv_pg_hdr_pane_g7

0xdf26,	// (0x0001b8e4) main_tv_pg_hdr_pane_g8

0xdf30,	// (0x0001b8ee) main_tv_pg_hdr_pane_g9

0xdf3a,	// (0x0001b8f8) main_tv_pg_hdr_pane_g10

0xdf44,	// (0x0001b902) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x0001d5e0) main_tv_pg_hdr_pane_g

0xdf4e,	// (0x0001b90c) main_tv_pg_hdr_pane_t1

0xdf5c,	// (0x0001b91a) main_tv_pg_hdr_pane_t2

0xdf6a,	// (0x0001b928) main_tv_pg_hdr_pane_t3

0xdf7a,	// (0x0001b938) main_tv_pg_hdr_pane_t4

0xdf8a,	// (0x0001b948) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0001d5f7) main_tv_pg_hdr_pane_t

0xdf9a,	// (0x0001b958) single_mobtv_pg_channel_pane_ParamLimits

0xdf9a,	// (0x0001b958) single_mobtv_pg_channel_pane

0xdfac,	// (0x0001b96a) single_mobtv_pg_channel_table_pane

0xdfb5,	// (0x0001b973) single_mobtv_pg_channel_thumb_pane

0xdfbe,	// (0x0001b97c) single_tv_pg_channel_pane_g1

0xdfc7,	// (0x0001b985) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x0001d602) single_tv_pg_channel_pane_g

0xc544,	// (0x00019f02) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc544,	// (0x00019f02) bg_single_mobtv_pg_channel_thumb_pane

0xdfd0,	// (0x0001b98e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfd0,	// (0x0001b98e) single_mobtv_pg_channel_thumb_pane_g1

0xdfde,	// (0x0001b99c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfde,	// (0x0001b99c) single_mobtv_pg_channel_thumb_pane_g2

0xdfea,	// (0x0001b9a8) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfea,	// (0x0001b9a8) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x0001d607) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x0001d607) single_mobtv_pg_channel_thumb_pane_g

0xdff6,	// (0x0001b9b4) single_mobtv_pg_channel_thumb_pane_t1

0xe004,	// (0x0001b9c2) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x0001d60e) single_mobtv_pg_channel_thumb_pane_t

0xc2dd,	// (0x00019c9b) bg_single_mobtv_pg_channel_table_pane_g1

0xc2dd,	// (0x00019c9b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0001d0be) bg_single_mobtv_pg_channel_table_pane_g

0xe012,	// (0x0001b9d0) single_mobtv_pg_channel_table_pane_t1

0xe020,	// (0x0001b9de) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x0001d613) single_mobtv_pg_channel_table_pane_t

0x7b7f,	// (0x0001553d) main_mobtv_info_pane_g1_ParamLimits

0x7b7f,	// (0x0001553d) main_mobtv_info_pane_g1

0x7b9d,	// (0x0001555b) main_mobtv_info_pane_t1_ParamLimits

0x7b9d,	// (0x0001555b) main_mobtv_info_pane_t1

0x7c15,	// (0x000155d3) main_mobtv_info_pane_t2_ParamLimits

0x7c15,	// (0x000155d3) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x0001d61d) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x0001d61d) main_mobtv_info_pane_t

0x7ca4,	// (0x00015662) wait_bar_pane_cp05

0x7cb6,	// (0x00015674) main_mobtv_loading_pane_g1_ParamLimits

0x7cb6,	// (0x00015674) main_mobtv_loading_pane_g1

0x7cc9,	// (0x00015687) main_mobtv_loading_pane_g2_ParamLimits

0x7cc9,	// (0x00015687) main_mobtv_loading_pane_g2

0x7cd5,	// (0x00015693) main_mobtv_loading_pane_g3_ParamLimits

0x7cd5,	// (0x00015693) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x0001d624) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x0001d624) main_mobtv_loading_pane_g

0xe02e,	// (0x0001b9ec) main_mobtv_loading_pane_t1_ParamLimits

0xe02e,	// (0x0001b9ec) main_mobtv_loading_pane_t1

0xe046,	// (0x0001ba04) main_mobtv_loading_pane_t2_ParamLimits

0xe046,	// (0x0001ba04) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x0001d62b) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x0001d62b) main_mobtv_loading_pane_t

0x7ce8,	// (0x000156a6) wait_bar_pane_cp06_ParamLimits

0x7ce8,	// (0x000156a6) wait_bar_pane_cp06

0xe06a,	// (0x0001ba28) main_mobtv_programe_curr_pane_t1

0xe078,	// (0x0001ba36) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x0001d630) main_mobtv_programe_curr_pane_t

0xe086,	// (0x0001ba44) main_mobtv_programe_next_pane_t1

0xe094,	// (0x0001ba52) main_mobtv_programe_next_pane_t2

0xe0a2,	// (0x0001ba60) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x0001d635) main_mobtv_programe_next_pane_t

0x9387,	// (0x00016d45) bg_popup_mobtv_noti_window_pane

0xe0b0,	// (0x0001ba6e) popup_mobtv_noti_window_g1

0xe0b8,	// (0x0001ba76) popup_mobtv_noti_window_t1

0xe0c6,	// (0x0001ba84) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x0001d63c) popup_mobtv_noti_window_t

0xc2dd,	// (0x00019c9b) bg_popup_mobtv_noti_window_pane_g1

0x9387,	// (0x00016d45) sc_clock_pane

0x9387,	// (0x00016d45) main_fs_bigclock_pane

0x74c7,	// (0x00014e85) blid2_tripm_pane_t4_ParamLimits

0x74c7,	// (0x00014e85) blid2_tripm_pane_t4

0x7cf7,	// (0x000156b5) sc_clock_pane_g1_ParamLimits

0x7cf7,	// (0x000156b5) sc_clock_pane_g1

0x7d09,	// (0x000156c7) sc_clock_pane_t1_ParamLimits

0x7d09,	// (0x000156c7) sc_clock_pane_t1

0x7d2b,	// (0x000156e9) sc_clock_pane_t2_ParamLimits

0x7d2b,	// (0x000156e9) sc_clock_pane_t2

0x7d43,	// (0x00015701) sc_clock_pane_t3_ParamLimits

0x7d43,	// (0x00015701) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x0001d641) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x0001d641) sc_clock_pane_t

0x8ae7,	// (0x000164a5) main_fs_bigclock_indicator_pane_ParamLimits

0x8ae7,	// (0x000164a5) main_fs_bigclock_indicator_pane

0xc514,	// (0x00019ed2) main_fs_bigclock_pane_g1_ParamLimits

0xc514,	// (0x00019ed2) main_fs_bigclock_pane_g1

0x8af3,	// (0x000164b1) main_fs_bigclock_pane_t1_ParamLimits

0x8af3,	// (0x000164b1) main_fs_bigclock_pane_t1

0x8b05,	// (0x000164c3) main_fs_bigclock_pane_t2_ParamLimits

0x8b05,	// (0x000164c3) main_fs_bigclock_pane_t2

0x8b17,	// (0x000164d5) main_fs_bigclock_pane_t3_ParamLimits

0x8b17,	// (0x000164d5) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x0001d83b) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x0001d83b) main_fs_bigclock_pane_t

0xecf5,	// (0x0001c6b3) main_fs_bigclock_indicator_pane_g1

0xdd8c,	// (0x0001b74a) ncim_query_content_pane_g2_ParamLimits

0xdd8c,	// (0x0001b74a) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x0001d5ce) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x0001d5ce) ncim_query_content_pane_g

0x7d5a,	// (0x00015718) sc_clock_pane_t4_ParamLimits

0x7d5a,	// (0x00015718) sc_clock_pane_t4

0x93f7,	// (0x00016db5) main_radioblah_pane

0xcf03,	// (0x0001a8c1) cell_call4_button_pane_t1_copy1_ParamLimits

0xcf03,	// (0x0001a8c1) cell_call4_button_pane_t1_copy1

0x79b3,	// (0x00015371) main_ncimui_pane_t1_ParamLimits

0x79b3,	// (0x00015371) main_ncimui_pane_t1

0x79cd,	// (0x0001538b) main_ncimui_pane_t2_ParamLimits

0x79cd,	// (0x0001538b) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0001d5c7) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0001d5c7) main_ncimui_pane_t

0xe1f6,	// (0x0001bbb4) main_radioblah_anim_pane_ParamLimits

0xe1f6,	// (0x0001bbb4) main_radioblah_anim_pane

0xe207,	// (0x0001bbc5) main_radioblah_info_pane_ParamLimits

0xe207,	// (0x0001bbc5) main_radioblah_info_pane

0xe21b,	// (0x0001bbd9) main_radioblah_pane_t1_ParamLimits

0xe21b,	// (0x0001bbd9) main_radioblah_pane_t1

0xe237,	// (0x0001bbf5) main_radioblah_pane_t2_ParamLimits

0xe237,	// (0x0001bbf5) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x0001d662) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x0001d662) main_radioblah_pane_t

0x7e03,	// (0x000157c1) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7e03,	// (0x000157c1) main_radioblah_rocker_ctrl_pane

0xe27f,	// (0x0001bc3d) main_radioblah_info_pane_t1_ParamLimits

0xe27f,	// (0x0001bc3d) main_radioblah_info_pane_t1

0x7e5b,	// (0x00015819) main_radioblah_info_pane_t2_ParamLimits

0x7e5b,	// (0x00015819) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x0001d66b) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x0001d66b) main_radioblah_info_pane_t

0xc2dd,	// (0x00019c9b) main_radioblah_rocker_ctrl_pane_g1

0x7f0d,	// (0x000158cb) main_radioblah_rocker_ctrl_pane_g2

0x7f15,	// (0x000158d3) main_radioblah_rocker_ctrl_pane_g3

0x7f1d,	// (0x000158db) main_radioblah_rocker_ctrl_pane_g4

0x7f25,	// (0x000158e3) main_radioblah_rocker_ctrl_pane_g5

0x7f2d,	// (0x000158eb) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x0001d674) main_radioblah_rocker_ctrl_pane_g

0x7776,	// (0x00015134) main_cset_text2_pane_t1_copy1_ParamLimits

0xcf8d,	// (0x0001a94b) cam4_image_uncrop_qvga_pane

0xcfe6,	// (0x0001a9a4) vid4_image_uncrop_qcif_pane

0xd8f0,	// (0x0001b2ae) cam6_image_uncrop_qvga_pane_ParamLimits

0xd8f0,	// (0x0001b2ae) cam6_image_uncrop_qvga_pane

0xd9c6,	// (0x0001b384) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9c6,	// (0x0001b384) vid6_image_uncrop_qcif_pane

0x9387,	// (0x00016d45) bg_popup_preview_window_pane_cp03

0xdd3e,	// (0x0001b6fc) list_cset_text2_pane

0xdd46,	// (0x0001b704) main_cset6_text2_pane_g1

0xdd4e,	// (0x0001b70c) main_cset6_text2_pane_t1

0x7f35,	// (0x000158f3) list_cset_text2_pane_t1_ParamLimits

0x7f35,	// (0x000158f3) list_cset_text2_pane_t1

0x93f7,	// (0x00016db5) main_radioblah_pane_ParamLimits

0x7c90,	// (0x0001564e) main_mobtv_info_pane_t3_ParamLimits

0x7c90,	// (0x0001564e) main_mobtv_info_pane_t3

0x7df1,	// (0x000157af) main_radioblah_pane_g1

0x7e2b,	// (0x000157e9) main_radioblah_info_pane_g1

0x7eb2,	// (0x00015870) main_radioblah_info_pane_t3_ParamLimits

0x7eb2,	// (0x00015870) main_radioblah_info_pane_t3

0x2805,	// (0x000101c3) highlight_cell_cale_month_pane_ParamLimits

0x2805,	// (0x000101c3) highlight_cell_cale_month_pane

0x9387,	// (0x00016d45) main_phob_fisheye_pane

0xc65e,	// (0x0001a01c) scroll_pane_cp0031_ParamLimits

0xc65e,	// (0x0001a01c) scroll_pane_cp0031

0xdad4,	// (0x0001b492) wait_bar_pane_cp08_ParamLimits

0x77fa,	// (0x000151b8) cset_list_set_pane_copy1_ParamLimits

0xe2b9,	// (0x0001bc77) highlight_cell_cale_month_pane_g1

0x7f52,	// (0x00015910) highlight_cell_cale_month_pane_t1

0xd66b,	// (0x0001b029) list_gen_pane_cp01

0xd1af,	// (0x0001ab6d) scroll_pane_01

0xeacb,	// (0x0001c489) list_single_double_fisheye_pane

0xe2c1,	// (0x0001bc7f) list_double_fisheye_pane_g1_ParamLimits

0xe2c1,	// (0x0001bc7f) list_double_fisheye_pane_g1

0xe2cd,	// (0x0001bc8b) list_double_fisheye_pane_g2_ParamLimits

0xe2cd,	// (0x0001bc8b) list_double_fisheye_pane_g2

0x7f60,	// (0x0001591e) list_double_fisheye_pane_g3_ParamLimits

0x7f60,	// (0x0001591e) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x0001d681) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x0001d681) list_double_fisheye_pane_g

0x7f6c,	// (0x0001592a) list_double_fisheye_pane_t1_ParamLimits

0x7f6c,	// (0x0001592a) list_double_fisheye_pane_t1

0x7f87,	// (0x00015945) list_double_fisheye_pane_t2_ParamLimits

0x7f87,	// (0x00015945) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x0001d68c) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x0001d68c) list_double_fisheye_pane_t

0x9387,	// (0x00016d45) main_call5_pane

0x7d85,	// (0x00015743) sc_swipe_pane_ParamLimits

0x7d85,	// (0x00015743) sc_swipe_pane

0x7fbc,	// (0x0001597a) call5_image_pane_ParamLimits

0x7fbc,	// (0x0001597a) call5_image_pane

0x7fd9,	// (0x00015997) call5_swipe_1_pane_ParamLimits

0x7fd9,	// (0x00015997) call5_swipe_1_pane

0x7fec,	// (0x000159aa) call5_swipe_2_pane_ParamLimits

0x7fec,	// (0x000159aa) call5_swipe_2_pane

0x8017,	// (0x000159d5) popup_call5_audio_first_window_ParamLimits

0x8017,	// (0x000159d5) popup_call5_audio_first_window

0xc544,	// (0x00019f02) call5_swipe_1_pane_g1_ParamLimits

0xc544,	// (0x00019f02) call5_swipe_1_pane_g1

0xe2fe,	// (0x0001bcbc) call5_swipe_1_pane_g2_ParamLimits

0xe2fe,	// (0x0001bcbc) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x0001d691) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x0001d691) call5_swipe_1_pane_g

0xe30a,	// (0x0001bcc8) call5_swipe_1_pane_t1_ParamLimits

0xe30a,	// (0x0001bcc8) call5_swipe_1_pane_t1

0xc544,	// (0x00019f02) call5_swipe_2_pane_g1_ParamLimits

0xc544,	// (0x00019f02) call5_swipe_2_pane_g1

0xe31f,	// (0x0001bcdd) call5_swipe_2_pane_g2_ParamLimits

0xe31f,	// (0x0001bcdd) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x0001d696) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x0001d696) call5_swipe_2_pane_g

0xe32b,	// (0x0001bce9) call5_swipe_2_pane_t1_ParamLimits

0xe32b,	// (0x0001bce9) call5_swipe_2_pane_t1

0xe340,	// (0x0001bcfe) sc_swipe_pane_g1_ParamLimits

0xe340,	// (0x0001bcfe) sc_swipe_pane_g1

0xe34d,	// (0x0001bd0b) sc_swipe_pane_g2_ParamLimits

0xe34d,	// (0x0001bd0b) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x0001d69b) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x0001d69b) sc_swipe_pane_g

0xe359,	// (0x0001bd17) sc_swipe_pane_t1_ParamLimits

0xe359,	// (0x0001bd17) sc_swipe_pane_t1

0x9387,	// (0x00016d45) main_cmail_launcher_pane

0x8028,	// (0x000159e6) aid_size_cell_cmail_l_ParamLimits

0x8028,	// (0x000159e6) aid_size_cell_cmail_l

0x8042,	// (0x00015a00) grid_cmail_l_pane_ParamLimits

0x8042,	// (0x00015a00) grid_cmail_l_pane

0x805d,	// (0x00015a1b) cell_cmail_l_pane_ParamLimits

0x805d,	// (0x00015a1b) cell_cmail_l_pane

0x8083,	// (0x00015a41) cell_cmail_l_pane_g1_ParamLimits

0x8083,	// (0x00015a41) cell_cmail_l_pane_g1

0x808f,	// (0x00015a4d) cell_cmail_l_pane_t1_ParamLimits

0x808f,	// (0x00015a4d) cell_cmail_l_pane_t1

0xe36e,	// (0x0001bd2c) cell_cmail_l_pane_t2_ParamLimits

0xe36e,	// (0x0001bd2c) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x0001d6a0) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x0001d6a0) cell_cmail_l_pane_t

0x93f7,	// (0x00016db5) grid_highlight_pane_cp018_ParamLimits

0x93f7,	// (0x00016db5) grid_highlight_pane_cp018

0x0e96,	// (0x0000e854) main2_pane_ParamLimits

0x0e96,	// (0x0000e854) main2_pane

0x9c7b,	// (0x00017639) popup_sp_fs_action_menu_bg_pane_g1

0x9c83,	// (0x00017641) popup_sp_fs_action_menu_bg_pane_g2

0x9c8b,	// (0x00017649) popup_sp_fs_action_menu_bg_pane_g3

0x9c93,	// (0x00017651) popup_sp_fs_action_menu_bg_pane_g4

0x9c9b,	// (0x00017659) popup_sp_fs_action_menu_bg_pane_g5

0x9ca3,	// (0x00017661) popup_sp_fs_action_menu_bg_pane_g6

0x9cab,	// (0x00017669) popup_sp_fs_action_menu_bg_pane_g7

0x9cb3,	// (0x00017671) popup_sp_fs_action_menu_bg_pane_g8

0x9cbb,	// (0x00017679) popup_sp_fs_action_menu_bg_pane_g9

0x9cc3,	// (0x00017681) popup_sp_fs_action_menu_bg_pane_g10

0x9cc3,	// (0x00017681) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0001cb6a) popup_sp_fs_action_menu_bg_pane_g

0x9ed2,	// (0x00017890) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9ed2,	// (0x00017890) list_medium_line_x2_t3_g3_g1

0x9ede,	// (0x0001789c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9ede,	// (0x0001789c) list_medium_line_x2_t3_g3_g2

0x9eea,	// (0x000178a8) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9eea,	// (0x000178a8) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0001cc1a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0001cc1a) list_medium_line_x2_t3_g3_g

0x9ef6,	// (0x000178b4) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9ef6,	// (0x000178b4) list_medium_line_x2_t3_g3_t1

0x1b1d,	// (0x0000f4db) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1b1d,	// (0x0000f4db) list_medium_line_x2_t3_g3_t2

0x9f0b,	// (0x000178c9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9f0b,	// (0x000178c9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0001cc21) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0001cc21) list_medium_line_x2_t3_g3_t

0x9ed2,	// (0x00017890) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9ed2,	// (0x00017890) list_medium_line_x2_t3_g2_g1

0x9eea,	// (0x000178a8) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9eea,	// (0x000178a8) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0001cc28) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0001cc28) list_medium_line_x2_t3_g2_g

0x9f20,	// (0x000178de) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9f20,	// (0x000178de) list_medium_line_x2_t3_g2_t1

0x9f36,	// (0x000178f4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9f36,	// (0x000178f4) list_medium_line_x2_t3_g2_t2

0x9f48,	// (0x00017906) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9f48,	// (0x00017906) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0001cc2d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0001cc2d) list_medium_line_x2_t3_g2_t

0x9ed2,	// (0x00017890) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9ed2,	// (0x00017890) list_medium_line_x2_t4_g4_g1

0x9f65,	// (0x00017923) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9f65,	// (0x00017923) list_medium_line_x2_t4_g4_g2

0x9ede,	// (0x0001789c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9ede,	// (0x0001789c) list_medium_line_x2_t4_g4_g3

0x9f71,	// (0x0001792f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9f71,	// (0x0001792f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0001cc34) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0001cc34) list_medium_line_x2_t4_g4_g

0x1b31,	// (0x0000f4ef) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1b31,	// (0x0000f4ef) list_medium_line_x2_t4_g4_t1

0x1b48,	// (0x0000f506) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1b48,	// (0x0000f506) list_medium_line_x2_t4_g4_t2

0x1b5d,	// (0x0000f51b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1b5d,	// (0x0000f51b) list_medium_line_x2_t4_g4_t3

0x9f7d,	// (0x0001793b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9f7d,	// (0x0001793b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0001cc3d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0001cc3d) list_medium_line_x2_t4_g4_t

0x9ed2,	// (0x00017890) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9ed2,	// (0x00017890) list_medium_line_x2_t2_g4_g1

0x9f65,	// (0x00017923) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9f65,	// (0x00017923) list_medium_line_x2_t2_g4_g2

0x9ede,	// (0x0001789c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9ede,	// (0x0001789c) list_medium_line_x2_t2_g4_g3

0x9eea,	// (0x000178a8) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9eea,	// (0x000178a8) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0001cca4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0001cca4) list_medium_line_x2_t2_g4_g

0xa265,	// (0x00017c23) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa265,	// (0x00017c23) list_medium_line_x2_t2_g4_t1

0x9f0b,	// (0x000178c9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9f0b,	// (0x000178c9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0001ccad) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0001ccad) list_medium_line_x2_t2_g4_t

0x9ed2,	// (0x00017890) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9ed2,	// (0x00017890) list_medium_line_x2_t2_g3_g1

0x9ede,	// (0x0001789c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9ede,	// (0x0001789c) list_medium_line_x2_t2_g3_g2

0x9eea,	// (0x000178a8) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9eea,	// (0x000178a8) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0001cc1a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0001cc1a) list_medium_line_x2_t2_g3_g

0xa27a,	// (0x00017c38) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa27a,	// (0x00017c38) list_medium_line_x2_t2_g3_t1

0x9f0b,	// (0x000178c9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9f0b,	// (0x000178c9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0001ccb2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0001ccb2) list_medium_line_x2_t2_g3_t

0x29eb,	// (0x000103a9) main_sp_fs_list_pane_ParamLimits

0x29eb,	// (0x000103a9) main_sp_fs_list_pane

0x29f7,	// (0x000103b5) sp_fs_scroll_pane_ParamLimits

0x29f7,	// (0x000103b5) sp_fs_scroll_pane

0x2a03,	// (0x000103c1) list_medium_line_x2_t3_t1

0x2a13,	// (0x000103d1) list_medium_line_x2_t3_t2

0xa45e,	// (0x00017e1c) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0001ccfd) list_medium_line_x2_t3_t

0x2a21,	// (0x000103df) list_medium_line_x3_t4_t1

0x2a31,	// (0x000103ef) list_medium_line_x3_t4_t2

0xa46c,	// (0x00017e2a) list_medium_line_x3_t4_t3

0xa45e,	// (0x00017e1c) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0001cd04) list_medium_line_x3_t4_t

0x2a3f,	// (0x000103fd) list_medium_line_x4_t5_t1

0x2a4f,	// (0x0001040d) list_medium_line_x4_t5_t2

0xa46c,	// (0x00017e2a) list_medium_line_x4_t5_t3

0xa47a,	// (0x00017e38) list_medium_line_x4_t5_t4

0xa45e,	// (0x00017e1c) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0001cd0d) list_medium_line_x4_t5_t

0x9ed2,	// (0x00017890) list_medium_line_t4_g4_g1_ParamLimits

0x9ed2,	// (0x00017890) list_medium_line_t4_g4_g1

0x9f71,	// (0x0001792f) list_medium_line_t4_g4_g2_ParamLimits

0x9f71,	// (0x0001792f) list_medium_line_t4_g4_g2

0xa488,	// (0x00017e46) list_medium_line_t4_g4_g3_ParamLimits

0xa488,	// (0x00017e46) list_medium_line_t4_g4_g3

0x9eea,	// (0x000178a8) list_medium_line_t4_g4_g4_ParamLimits

0x9eea,	// (0x000178a8) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0001cd18) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0001cd18) list_medium_line_t4_g4_g

0xa494,	// (0x00017e52) list_medium_line_t4_g4_t1_ParamLimits

0xa494,	// (0x00017e52) list_medium_line_t4_g4_t1

0xa4a9,	// (0x00017e67) list_medium_line_t4_g4_t2_ParamLimits

0xa4a9,	// (0x00017e67) list_medium_line_t4_g4_t2

0xa4be,	// (0x00017e7c) list_medium_line_t4_g4_t3_ParamLimits

0xa4be,	// (0x00017e7c) list_medium_line_t4_g4_t3

0x9f0b,	// (0x000178c9) list_medium_line_t4_g4_t4_ParamLimits

0x9f0b,	// (0x000178c9) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0001cd21) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0001cd21) list_medium_line_t4_g4_t

0x2afb,	// (0x000104b9) chi_dic_find_pane_g1

0x3c45,	// (0x00011603) main_tport_pane

0xd2f4,	// (0x0001acb2) list_medium_line_plain_t1

0xd346,	// (0x0001ad04) list_medium_line_t2_g2_g1_ParamLimits

0xd346,	// (0x0001ad04) list_medium_line_t2_g2_g1

0xd352,	// (0x0001ad10) list_medium_line_t2_g2_g2_ParamLimits

0xd352,	// (0x0001ad10) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0001d3dd) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0001d3dd) list_medium_line_t2_g2_g

0x6c80,	// (0x0001463e) list_medium_line_t2_g2_t1_ParamLimits

0x6c80,	// (0x0001463e) list_medium_line_t2_g2_t1

0x6c9a,	// (0x00014658) list_medium_line_t2_g2_t2_ParamLimits

0x6c9a,	// (0x00014658) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0001d3e2) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0001d3e2) list_medium_line_t2_g2_t

0xd6f8,	// (0x0001b0b6) aid_sp_fs_list_icon_a_sm

0xd700,	// (0x0001b0be) aid_sp_fs_list_icon_d

0xd708,	// (0x0001b0c6) aid_sp_fs_text_primary

0xd711,	// (0x0001b0cf) aid_sp_fs_text_secondary

0xd71a,	// (0x0001b0d8) list_medium_line

0xd71a,	// (0x0001b0d8) list_medium_line_g2

0xd71a,	// (0x0001b0d8) list_medium_line_g3

0xd71a,	// (0x0001b0d8) list_medium_line_plain

0xd71a,	// (0x0001b0d8) list_medium_line_plain_t2

0xd71a,	// (0x0001b0d8) list_medium_line_plain_t3

0xd71a,	// (0x0001b0d8) list_medium_line_right_icon

0xd71a,	// (0x0001b0d8) list_medium_line_right_iconx2

0xd71a,	// (0x0001b0d8) list_medium_line_t2

0xd71a,	// (0x0001b0d8) list_medium_line_t2_g2

0xd71a,	// (0x0001b0d8) list_medium_line_t2_g3

0xd71a,	// (0x0001b0d8) list_medium_line_t2_right_icon

0xd71a,	// (0x0001b0d8) list_medium_line_t2_right_iconx2

0xd71a,	// (0x0001b0d8) list_medium_line_t3

0xd71a,	// (0x0001b0d8) list_medium_line_t3_g2

0xd71a,	// (0x0001b0d8) list_medium_line_t3_g3

0xd71a,	// (0x0001b0d8) list_medium_line_t3_right_iconx2

0xd723,	// (0x0001b0e1) list_medium_line_t4_g4

0xd72c,	// (0x0001b0ea) list_medium_line_x2

0xd72c,	// (0x0001b0ea) list_medium_line_x2_t2_g2

0xd72c,	// (0x0001b0ea) list_medium_line_x2_t2_g3

0xd72c,	// (0x0001b0ea) list_medium_line_x2_t2_g4

0xd72c,	// (0x0001b0ea) list_medium_line_x2_t3

0xd72c,	// (0x0001b0ea) list_medium_line_x2_t3_g2

0xd72c,	// (0x0001b0ea) list_medium_line_x2_t3_g3

0xd72c,	// (0x0001b0ea) list_medium_line_x2_t3_g4

0xd72c,	// (0x0001b0ea) list_medium_line_x2_t4_g2

0xd72c,	// (0x0001b0ea) list_medium_line_x2_t4_g4

0xd735,	// (0x0001b0f3) list_medium_line_x3

0xd735,	// (0x0001b0f3) list_medium_line_x3_t4

0xd735,	// (0x0001b0f3) list_medium_line_x3_t4_g4

0xd723,	// (0x0001b0e1) list_medium_line_x4_t4

0xd723,	// (0x0001b0e1) list_medium_line_x4_t4_g7

0xd723,	// (0x0001b0e1) list_medium_line_x4_t5

0xd73e,	// (0x0001b0fc) list_single_fs_dyc_pane_ParamLimits

0xd73e,	// (0x0001b0fc) list_single_fs_dyc_pane

0x9ed2,	// (0x00017890) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9ed2,	// (0x00017890) list_medium_line_x4_t4_g7_g1

0xdc6d,	// (0x0001b62b) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdc6d,	// (0x0001b62b) list_medium_line_x4_t4_g7_g2

0xdc79,	// (0x0001b637) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdc79,	// (0x0001b637) list_medium_line_x4_t4_g7_g3

0xdc88,	// (0x0001b646) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdc88,	// (0x0001b646) list_medium_line_x4_t4_g7_g4

0xdc94,	// (0x0001b652) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdc94,	// (0x0001b652) list_medium_line_x4_t4_g7_g5

0xdca3,	// (0x0001b661) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdca3,	// (0x0001b661) list_medium_line_x4_t4_g7_g6

0xdcb2,	// (0x0001b670) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdcb2,	// (0x0001b670) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x0001d5ad) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x0001d5ad) list_medium_line_x4_t4_g7_g

0xdcbe,	// (0x0001b67c) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdcbe,	// (0x0001b67c) list_medium_line_x4_t4_g7_t1

0xdcd3,	// (0x0001b691) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdcd3,	// (0x0001b691) list_medium_line_x4_t4_g7_t2

0xdce8,	// (0x0001b6a6) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdce8,	// (0x0001b6a6) list_medium_line_x4_t4_g7_t3

0xdcfd,	// (0x0001b6bb) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdcfd,	// (0x0001b6bb) list_medium_line_x4_t4_g7_t4

0xdd0f,	// (0x0001b6cd) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdd0f,	// (0x0001b6cd) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x0001d5bc) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x0001d5bc) list_medium_line_x4_t4_g7_t

0xdd21,	// (0x0001b6df) list_single_dyc_row_pane_ParamLimits

0xdd21,	// (0x0001b6df) list_single_dyc_row_pane

0x7fa9,	// (0x00015967) call5_gesture_pane_ParamLimits

0x7fa9,	// (0x00015967) call5_gesture_pane

0x7fff,	// (0x000159bd) call5_windows_pane_ParamLimits

0x7fff,	// (0x000159bd) call5_windows_pane

0x80a5,	// (0x00015a63) call5_swipe_1_pane_cp_ParamLimits

0x80a5,	// (0x00015a63) call5_swipe_1_pane_cp

0x80b1,	// (0x00015a6f) call5_swipe_2_pane_cp_ParamLimits

0x80b1,	// (0x00015a6f) call5_swipe_2_pane_cp

0xa936,	// (0x000182f4) call5_image_pane_cp

0x80bd,	// (0x00015a7b) popup_call5_audio_first_window_cp_ParamLimits

0x80bd,	// (0x00015a7b) popup_call5_audio_first_window_cp

0xe340,	// (0x0001bcfe) call5_swipe_1_pane_g1_cp_ParamLimits

0xe340,	// (0x0001bcfe) call5_swipe_1_pane_g1_cp

0xe380,	// (0x0001bd3e) call5_swipe_1_pane_g2_cp

0xe359,	// (0x0001bd17) call5_swipe_1_pane_t1_cp_ParamLimits

0xe359,	// (0x0001bd17) call5_swipe_1_pane_t1_cp

0xe340,	// (0x0001bcfe) call5_swipe_2_pane_g1_cp_ParamLimits

0xe340,	// (0x0001bcfe) call5_swipe_2_pane_g1_cp

0xe388,	// (0x0001bd46) call5_swipe_2_pane_g2_cp

0xe390,	// (0x0001bd4e) call5_swipe_2_pane_t1_cp_ParamLimits

0xe390,	// (0x0001bd4e) call5_swipe_2_pane_t1_cp

0x93f7,	// (0x00016db5) main_sp_fs_email_pane

0xe3a5,	// (0x0001bd63) main_sp_fs_listscroll_pane_te

0xe3ae,	// (0x0001bd6c) popup_sp_fs_action_menu_pane_ParamLimits

0xe3ae,	// (0x0001bd6c) popup_sp_fs_action_menu_pane

0xc2dd,	// (0x00019c9b) bg_sp_fs_ctrlbar_pane_g1

0xe3ee,	// (0x0001bdac) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3f7,	// (0x0001bdb5) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe400,	// (0x0001bdbe) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc2dd,	// (0x00019c9b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x0001d6a5) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc0c0,	// (0x00019a7e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc0c0,	// (0x00019a7e) bg_sp_fs_ctrlbar_ddmenu_pane

0xe409,	// (0x0001bdc7) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe409,	// (0x0001bdc7) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe415,	// (0x0001bdd3) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe415,	// (0x0001bdd3) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x0001d6ae) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x0001d6ae) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe421,	// (0x0001bddf) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe421,	// (0x0001bddf) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe43b,	// (0x0001bdf9) list_medium_line_t2_right_icon_g1

0x80c9,	// (0x00015a87) list_medium_line_t2_right_icon_t1

0x80d9,	// (0x00015a97) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x0001d6b3) list_medium_line_t2_right_icon_t

0xbdd5,	// (0x00019793) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbdd5,	// (0x00019793) bg_sp_fs_ctrlbar_pane

0x8133,	// (0x00015af1) main_sp_fs_ctrlbar_button_pane_cp01

0x813d,	// (0x00015afb) main_sp_fs_ctrlbar_ddmenu_pane

0x9ed2,	// (0x00017890) main_sp_fs_ctrlbar_pane_g1

0xe47b,	// (0x0001be39) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0001d6b8) main_sp_fs_ctrlbar_pane_g

0xe487,	// (0x0001be45) main_sp_fs_ctrlbar_pane_t1

0x8147,	// (0x00015b05) main_sp_fs_ctrlbar_pane

0x816b,	// (0x00015b29) main_sp_fs_listscroll_pane_te_cp01

0x818b,	// (0x00015b49) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x818b,	// (0x00015b49) popup_sp_fs_action_menu_pane_cp01

0x93f7,	// (0x00016db5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x93f7,	// (0x00016db5) bg_sp_fs_highlight_list_pane_cp01

0xe49c,	// (0x0001be5a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe49c,	// (0x0001be5a) sp_fs_action_menu_list_gene_pane_g1

0xe4ab,	// (0x0001be69) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe4ab,	// (0x0001be69) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0001d6bd) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0001d6bd) sp_fs_action_menu_list_gene_pane_g

0xe4b8,	// (0x0001be76) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe4b8,	// (0x0001be76) sp_fs_action_menu_list_gene_pane_t1

0xe4d0,	// (0x0001be8e) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4d0,	// (0x0001be8e) sp_fs_action_menu_list_gene_pane

0xe4ed,	// (0x0001beab) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4ed,	// (0x0001beab) popup_sp_fs_action_menu_bg_pane

0xe4fb,	// (0x0001beb9) sp_fs_action_menu_list_pane_ParamLimits

0xe4fb,	// (0x0001beb9) sp_fs_action_menu_list_pane

0xe519,	// (0x0001bed7) sp_fs_scroll_pane_cp01_ParamLimits

0xe519,	// (0x0001bed7) sp_fs_scroll_pane_cp01

0x81a5,	// (0x00015b63) list_medium_line_plain_t2_t1

0x81b5,	// (0x00015b73) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0001d6c2) list_medium_line_plain_t2_t

0x81c5,	// (0x00015b83) list_medium_line_plain_t3_t1

0x81d5,	// (0x00015b93) list_medium_line_plain_t3_t2

0x81e3,	// (0x00015ba1) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0001d6c7) list_medium_line_plain_t3_t

0x9ed2,	// (0x00017890) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9ed2,	// (0x00017890) list_medium_line_x2_t2_g2_g1

0x9eea,	// (0x000178a8) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9eea,	// (0x000178a8) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0001cc28) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0001cc28) list_medium_line_x2_t2_g2_g

0xa494,	// (0x00017e52) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa494,	// (0x00017e52) list_medium_line_x2_t2_g2_t1

0x9f0b,	// (0x000178c9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9f0b,	// (0x000178c9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0001d6ce) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0001d6ce) list_medium_line_x2_t2_g2_t

0x9ed2,	// (0x00017890) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9ed2,	// (0x00017890) list_medium_line_x2_t4_g2_g1

0x9eea,	// (0x000178a8) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9eea,	// (0x000178a8) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x0001cc28) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x0001cc28) list_medium_line_x2_t4_g2_g

0x81f1,	// (0x00015baf) list_medium_line_x2_t4_g2_t1_ParamLimits

0x81f1,	// (0x00015baf) list_medium_line_x2_t4_g2_t1

0x8208,	// (0x00015bc6) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8208,	// (0x00015bc6) list_medium_line_x2_t4_g2_t2

0x821d,	// (0x00015bdb) list_medium_line_x2_t4_g2_t3_ParamLimits

0x821d,	// (0x00015bdb) list_medium_line_x2_t4_g2_t3

0x9f0b,	// (0x000178c9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9f0b,	// (0x000178c9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x0001d6d3) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x0001d6d3) list_medium_line_x2_t4_g2_t

0xe53f,	// (0x0001befd) list_medium_line_t3_right_iconx2_g1

0xe43b,	// (0x0001bdf9) list_medium_line_t3_right_iconx2_g2

0x822f,	// (0x00015bed) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x0001d6dc) list_medium_line_t3_right_iconx2_g

0x8239,	// (0x00015bf7) list_medium_line_t3_right_iconx2_t1

0x8249,	// (0x00015c07) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x0001d6e3) list_medium_line_t3_right_iconx2_t

0x9ed2,	// (0x00017890) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9ed2,	// (0x00017890) list_medium_line_x3_t4_g4_g1

0x9ede,	// (0x0001789c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9ede,	// (0x0001789c) list_medium_line_x3_t4_g4_g2

0x9f71,	// (0x0001792f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9f71,	// (0x0001792f) list_medium_line_x3_t4_g4_g3

0xe547,	// (0x0001bf05) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe547,	// (0x0001bf05) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x0001d6e8) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x0001d6e8) list_medium_line_x3_t4_g4_g

0x8257,	// (0x00015c15) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8257,	// (0x00015c15) list_medium_line_x3_t4_g4_t1

0x826e,	// (0x00015c2c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x826e,	// (0x00015c2c) list_medium_line_x3_t4_g4_t2

0xa4a9,	// (0x00017e67) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa4a9,	// (0x00017e67) list_medium_line_x3_t4_g4_t3

0xe553,	// (0x0001bf11) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe553,	// (0x0001bf11) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x0001d6f1) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x0001d6f1) list_medium_line_x3_t4_g4_t

0x8289,	// (0x00015c47) list_single_dyc_row_text_pane_t1_ParamLimits

0x8289,	// (0x00015c47) list_single_dyc_row_text_pane_t1

0x82d2,	// (0x00015c90) list_single_dyc_row_text_pane_t2_ParamLimits

0x82d2,	// (0x00015c90) list_single_dyc_row_text_pane_t2

0xe570,	// (0x0001bf2e) list_single_dyc_row_text_pane_t3_ParamLimits

0xe570,	// (0x0001bf2e) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x0001d6fa) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x0001d6fa) list_single_dyc_row_text_pane_t

0xe582,	// (0x0001bf40) list_single_dyc_row_pane_g1_ParamLimits

0xe582,	// (0x0001bf40) list_single_dyc_row_pane_g1

0xe58e,	// (0x0001bf4c) list_single_dyc_row_pane_g2_ParamLimits

0xe58e,	// (0x0001bf4c) list_single_dyc_row_pane_g2

0xe59a,	// (0x0001bf58) list_single_dyc_row_pane_g3_ParamLimits

0xe59a,	// (0x0001bf58) list_single_dyc_row_pane_g3

0xe5a6,	// (0x0001bf64) list_single_dyc_row_pane_g4_ParamLimits

0xe5a6,	// (0x0001bf64) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x0001d701) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x0001d701) list_single_dyc_row_pane_g

0xe5b2,	// (0x0001bf70) list_single_dyc_row_text_pane_ParamLimits

0xe5b2,	// (0x0001bf70) list_single_dyc_row_text_pane

0x9387,	// (0x00016d45) bg_sp_fs_scroll_pane

0xe5d1,	// (0x0001bf8f) thumb_sp_fs_scroll_pane

0xd346,	// (0x0001ad04) list_medium_line_g1_ParamLimits

0xd346,	// (0x0001ad04) list_medium_line_g1

0xe5da,	// (0x0001bf98) list_medium_line_t1_ParamLimits

0xe5da,	// (0x0001bf98) list_medium_line_t1

0x9ed2,	// (0x00017890) list_medium_line_x2_g1_ParamLimits

0x9ed2,	// (0x00017890) list_medium_line_x2_g1

0x9ede,	// (0x0001789c) list_medium_line_x2_g2_ParamLimits

0x9ede,	// (0x0001789c) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x0001d70a) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x0001d70a) list_medium_line_x2_g

0xe5ef,	// (0x0001bfad) list_medium_line_x2_t1_ParamLimits

0xe5ef,	// (0x0001bfad) list_medium_line_x2_t1

0x9ed2,	// (0x00017890) list_medium_line_x3_g1_ParamLimits

0x9ed2,	// (0x00017890) list_medium_line_x3_g1

0x9ede,	// (0x0001789c) list_medium_line_x3_g2_ParamLimits

0x9ede,	// (0x0001789c) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x0001d70a) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x0001d70a) list_medium_line_x3_g

0xe5ef,	// (0x0001bfad) list_medium_line_x3_t1_ParamLimits

0xe5ef,	// (0x0001bfad) list_medium_line_x3_t1

0xe605,	// (0x0001bfc3) thumb_sp_fs_scroll_pane_g1

0xe60e,	// (0x0001bfcc) thumb_sp_fs_scroll_pane_g2

0xe617,	// (0x0001bfd5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0001d70f) thumb_sp_fs_scroll_pane_g

0xe605,	// (0x0001bfc3) bg_sp_fs_scroll_pane_g1

0xe60e,	// (0x0001bfcc) bg_sp_fs_scroll_pane_g2

0xe617,	// (0x0001bfd5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0001d70f) bg_sp_fs_scroll_pane_g

0x9ed2,	// (0x00017890) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9ed2,	// (0x00017890) list_medium_line_x2_t3_g4_g1

0x9f65,	// (0x00017923) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9f65,	// (0x00017923) list_medium_line_x2_t3_g4_g2

0x9ede,	// (0x0001789c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9ede,	// (0x0001789c) list_medium_line_x2_t3_g4_g3

0x9eea,	// (0x000178a8) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9eea,	// (0x000178a8) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0001cca4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0001cca4) list_medium_line_x2_t3_g4_g

0x832c,	// (0x00015cea) list_medium_line_x2_t3_g4_t1_ParamLimits

0x832c,	// (0x00015cea) list_medium_line_x2_t3_g4_t1

0x8346,	// (0x00015d04) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8346,	// (0x00015d04) list_medium_line_x2_t3_g4_t2

0x9f0b,	// (0x000178c9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9f0b,	// (0x000178c9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x0001d716) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x0001d716) list_medium_line_x2_t3_g4_t

0xd346,	// (0x0001ad04) list_medium_line_g2_g1_ParamLimits

0xd346,	// (0x0001ad04) list_medium_line_g2_g1

0xd352,	// (0x0001ad10) list_medium_line_g2_g2_ParamLimits

0xd352,	// (0x0001ad10) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0001d3dd) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0001d3dd) list_medium_line_g2_g

0xe620,	// (0x0001bfde) list_medium_line_g2_t1_ParamLimits

0xe620,	// (0x0001bfde) list_medium_line_g2_t1

0xd346,	// (0x0001ad04) list_medium_line_t3_g2_g1_ParamLimits

0xd346,	// (0x0001ad04) list_medium_line_t3_g2_g1

0xd352,	// (0x0001ad10) list_medium_line_t3_g2_g2_ParamLimits

0xd352,	// (0x0001ad10) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0001d3dd) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0001d3dd) list_medium_line_t3_g2_g

0x835f,	// (0x00015d1d) list_medium_line_t3_g2_t1_ParamLimits

0x835f,	// (0x00015d1d) list_medium_line_t3_g2_t1

0x8379,	// (0x00015d37) list_medium_line_t3_g2_t2_ParamLimits

0x8379,	// (0x00015d37) list_medium_line_t3_g2_t2

0x838e,	// (0x00015d4c) list_medium_line_t3_g2_t3_ParamLimits

0x838e,	// (0x00015d4c) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x0001d71d) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x0001d71d) list_medium_line_t3_g2_t

0xe43b,	// (0x0001bdf9) list_medium_line_right_icon_g1

0xe635,	// (0x0001bff3) list_medium_line_right_icon_t1

0xd346,	// (0x0001ad04) list_medium_line_t2_g1_ParamLimits

0xd346,	// (0x0001ad04) list_medium_line_t2_g1

0x83a8,	// (0x00015d66) list_medium_line_t2_t1_ParamLimits

0x83a8,	// (0x00015d66) list_medium_line_t2_t1

0x83c2,	// (0x00015d80) list_medium_line_t2_t2_ParamLimits

0x83c2,	// (0x00015d80) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x0001d724) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x0001d724) list_medium_line_t2_t

0xd346,	// (0x0001ad04) list_medium_line_t3_g1_ParamLimits

0xd346,	// (0x0001ad04) list_medium_line_t3_g1

0x83db,	// (0x00015d99) list_medium_line_t3_t1_ParamLimits

0x83db,	// (0x00015d99) list_medium_line_t3_t1

0x83f2,	// (0x00015db0) list_medium_line_t3_t2_ParamLimits

0x83f2,	// (0x00015db0) list_medium_line_t3_t2

0x8407,	// (0x00015dc5) list_medium_line_t3_t3_ParamLimits

0x8407,	// (0x00015dc5) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x0001d729) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x0001d729) list_medium_line_t3_t

0xd346,	// (0x0001ad04) list_medium_line_g3_g1_ParamLimits

0xd346,	// (0x0001ad04) list_medium_line_g3_g1

0xe643,	// (0x0001c001) list_medium_line_g3_g2_ParamLimits

0xe643,	// (0x0001c001) list_medium_line_g3_g2

0xd352,	// (0x0001ad10) list_medium_line_g3_g3_ParamLimits

0xd352,	// (0x0001ad10) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x0001d730) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x0001d730) list_medium_line_g3_g

0xe64f,	// (0x0001c00d) list_medium_line_g3_t1_ParamLimits

0xe64f,	// (0x0001c00d) list_medium_line_g3_t1

0xd346,	// (0x0001ad04) list_medium_line_t2_g3_g1_ParamLimits

0xd346,	// (0x0001ad04) list_medium_line_t2_g3_g1

0xe643,	// (0x0001c001) list_medium_line_t2_g3_g2_ParamLimits

0xe643,	// (0x0001c001) list_medium_line_t2_g3_g2

0xd352,	// (0x0001ad10) list_medium_line_t2_g3_g3_ParamLimits

0xd352,	// (0x0001ad10) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x0001d730) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x0001d730) list_medium_line_t2_g3_g

0x8419,	// (0x00015dd7) list_medium_line_t2_g3_t1_ParamLimits

0x8419,	// (0x00015dd7) list_medium_line_t2_g3_t1

0x8430,	// (0x00015dee) list_medium_line_t2_g3_t2_ParamLimits

0x8430,	// (0x00015dee) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x0001d737) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x0001d737) list_medium_line_t2_g3_t

0xd346,	// (0x0001ad04) list_medium_line_t3_g3_g1_ParamLimits

0xd346,	// (0x0001ad04) list_medium_line_t3_g3_g1

0xe643,	// (0x0001c001) list_medium_line_t3_g3_g2_ParamLimits

0xe643,	// (0x0001c001) list_medium_line_t3_g3_g2

0xd352,	// (0x0001ad10) list_medium_line_t3_g3_g3_ParamLimits

0xd352,	// (0x0001ad10) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x0001d730) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x0001d730) list_medium_line_t3_g3_g

0x844b,	// (0x00015e09) list_medium_line_t3_g3_t1_ParamLimits

0x844b,	// (0x00015e09) list_medium_line_t3_g3_t1

0x845f,	// (0x00015e1d) list_medium_line_t3_g3_t2_ParamLimits

0x845f,	// (0x00015e1d) list_medium_line_t3_g3_t2

0x8471,	// (0x00015e2f) list_medium_line_t3_g3_t3_ParamLimits

0x8471,	// (0x00015e2f) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x0001d73c) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x0001d73c) list_medium_line_t3_g3_t

0xe53f,	// (0x0001befd) list_medium_line_right_iconx2_g1

0xe43b,	// (0x0001bdf9) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x0001d743) list_medium_line_right_iconx2_g

0xe664,	// (0x0001c022) list_medium_line_right_iconx2_t1

0xe53f,	// (0x0001befd) list_medium_line_t2_right_iconx2_g1

0xe43b,	// (0x0001bdf9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x0001d743) list_medium_line_t2_right_iconx2_g

0x8485,	// (0x00015e43) list_medium_line_t2_right_iconx2_t1

0x8495,	// (0x00015e53) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x0001d748) list_medium_line_t2_right_iconx2_t

0xe672,	// (0x0001c030) list_medium_line_x4_t4_t1

0x84a7,	// (0x00015e65) list_medium_line_x4_t4_t2

0x84b7,	// (0x00015e75) list_medium_line_x4_t4_t3

0x84c7,	// (0x00015e85) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x0001d74d) list_medium_line_x4_t4_t

0x851a,	// (0x00015ed8) tport_appsw_pane_ParamLimits

0x851a,	// (0x00015ed8) tport_appsw_pane

0x852b,	// (0x00015ee9) tport_contact_pane_ParamLimits

0x852b,	// (0x00015ee9) tport_contact_pane

0x8544,	// (0x00015f02) tport_listscroll_pane_ParamLimits

0x8544,	// (0x00015f02) tport_listscroll_pane

0x855f,	// (0x00015f1d) cell_tport_appsw_pane_ParamLimits

0x855f,	// (0x00015f1d) cell_tport_appsw_pane

0xd027,	// (0x0001a9e5) tport_appsw_pane_g1_ParamLimits

0xd027,	// (0x0001a9e5) tport_appsw_pane_g1

0xe680,	// (0x0001c03e) tport_contact_pane_g1

0xe689,	// (0x0001c047) tport_contact_pane_t1

0xe697,	// (0x0001c055) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x0001d756) tport_contact_pane_t

0xe6a5,	// (0x0001c063) list_tport_pane

0xe6ae,	// (0x0001c06c) scroll_pane_cp_030

0xe6bf,	// (0x0001c07d) cell_tport_appsw_pane_g1

0xe6cf,	// (0x0001c08d) cell_tport_appsw_pane_t1

0x9387,	// (0x00016d45) grid_highlight_pane_cp019

0x859f,	// (0x00015f5d) list_tport_double_graphic_pane_ParamLimits

0x859f,	// (0x00015f5d) list_tport_double_graphic_pane

0x93f7,	// (0x00016db5) list_highlight_pane_cp023_ParamLimits

0x93f7,	// (0x00016db5) list_highlight_pane_cp023

0x85ac,	// (0x00015f6a) list_tport_double_graphic_pane_g1_ParamLimits

0x85ac,	// (0x00015f6a) list_tport_double_graphic_pane_g1

0x85b9,	// (0x00015f77) list_tport_double_graphic_pane_t1_ParamLimits

0x85b9,	// (0x00015f77) list_tport_double_graphic_pane_t1

0x85ce,	// (0x00015f8c) list_tport_double_graphic_pane_t2_ParamLimits

0x85ce,	// (0x00015f8c) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x0001d762) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x0001d762) list_tport_double_graphic_pane_t

0x9387,	// (0x00016d45) main_cale_note_pane

0x6356,	// (0x00013d14) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6356,	// (0x00013d14) cell_vitu2_function_top_wide_pane_cp01

0x7ca4,	// (0x00015662) wait_bar_pane_cp05_ParamLimits

0x9387,	// (0x00016d45) listscroll_cmail_pane

0xe6e5,	// (0x0001c0a3) list_cmail_pane

0x85ea,	// (0x00015fa8) list_cmail_body_pane

0x85ff,	// (0x00015fbd) list_single_cmail_header_caption_pane

0x8618,	// (0x00015fd6) list_single_cmail_header_detail_pane_ParamLimits

0x8618,	// (0x00015fd6) list_single_cmail_header_detail_pane

0x8641,	// (0x00015fff) list_single_cmail_header_caption_pane_t1

0x8651,	// (0x0001600f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8651,	// (0x0001600f) list_single_cmail_header_detail_pane_g1

0xe705,	// (0x0001c0c3) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe705,	// (0x0001c0c3) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x0001d767) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x0001d767) list_single_cmail_header_detail_pane_g

0xe71e,	// (0x0001c0dc) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe71e,	// (0x0001c0dc) list_single_cmail_header_detail_pane_t1

0xe750,	// (0x0001c10e) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe750,	// (0x0001c10e) list_single_cmail_header_editor_pane_bg

0xe762,	// (0x0001c120) list_cmail_body_pane_g1

0xe76b,	// (0x0001c129) list_cmail_body_pane_t1

0xd095,	// (0x0001aa53) list_single_cmail_header_editor_pane_bg_g1

0xa184,	// (0x00017b42) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd0a5,	// (0x0001aa63) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd09d,	// (0x0001aa5b) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd31e,	// (0x0001acdc) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd0c5,	// (0x0001aa83) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd0b5,	// (0x0001aa73) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd0bd,	// (0x0001aa7b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa164,	// (0x00017b22) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x868f,	// (0x0001604d) calenote_gesture_pane_ParamLimits

0x868f,	// (0x0001604d) calenote_gesture_pane

0x86af,	// (0x0001606d) calenote_window_pane_ParamLimits

0x86af,	// (0x0001606d) calenote_window_pane

0xe779,	// (0x0001c137) popup_note_window_cp01

0x86cb,	// (0x00016089) calenote_swipe_1_pane_ParamLimits

0x86cb,	// (0x00016089) calenote_swipe_1_pane

0x80b1,	// (0x00015a6f) calenote_swipe_2_pane_ParamLimits

0x80b1,	// (0x00015a6f) calenote_swipe_2_pane

0xe340,	// (0x0001bcfe) calenote_swipe_1_pane_g1_ParamLimits

0xe340,	// (0x0001bcfe) calenote_swipe_1_pane_g1

0xe34d,	// (0x0001bd0b) calenote_swipe_1_pane_g2_ParamLimits

0xe34d,	// (0x0001bd0b) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x0001d69b) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x0001d69b) calenote_swipe_1_pane_g

0xe78b,	// (0x0001c149) calenote_swipe_1_pane_t1_ParamLimits

0xe78b,	// (0x0001c149) calenote_swipe_1_pane_t1

0xe340,	// (0x0001bcfe) calenote_swipe_2_pane_g1_ParamLimits

0xe340,	// (0x0001bcfe) calenote_swipe_2_pane_g1

0xe7aa,	// (0x0001c168) calenote_swipe_2_pane_g2_ParamLimits

0xe7aa,	// (0x0001c168) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x0001d773) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x0001d773) calenote_swipe_2_pane_g

0xe7b6,	// (0x0001c174) calenote_swipe_2_pane_t1_ParamLimits

0xe7b6,	// (0x0001c174) calenote_swipe_2_pane_t1

0x9387,	// (0x00016d45) main_mup_navstr_pane

0x4fed,	// (0x000129ab) main_mup3_pane_t7_ParamLimits

0x4fed,	// (0x000129ab) main_mup3_pane_t7

0xcc46,	// (0x0001a604) main_mp4_pane_g6_ParamLimits

0xcc46,	// (0x0001a604) main_mp4_pane_g6

0xce6e,	// (0x0001a82c) main_image3_pane_t4_ParamLimits

0xce6e,	// (0x0001a82c) main_image3_pane_t4

0x86e0,	// (0x0001609e) popup_navstr_preview_pane_ParamLimits

0x86e0,	// (0x0001609e) popup_navstr_preview_pane

0x86f4,	// (0x000160b2) scroll_navstr_pane_ParamLimits

0x86f4,	// (0x000160b2) scroll_navstr_pane

0x9387,	// (0x00016d45) bg_popup_preview_window_pane_cp04

0xe7dd,	// (0x0001c19b) popup_navstr_preview_pane_t1

0x8708,	// (0x000160c6) scroll_navstr_pane_g1_ParamLimits

0x8708,	// (0x000160c6) scroll_navstr_pane_g1

0x871c,	// (0x000160da) scroll_navstr_pane_t1_ParamLimits

0x871c,	// (0x000160da) scroll_navstr_pane_t1

0xe782,	// (0x0001c140) bg_button_pane_cp014

0xe782,	// (0x0001c140) bg_button_pane_cp030

0xe2e1,	// (0x0001bc9f) list_double_fisheye_pane_g4_ParamLimits

0xe2e1,	// (0x0001bc9f) list_double_fisheye_pane_g4

0xe2ed,	// (0x0001bcab) list_double_fisheye_pane_g5_ParamLimits

0xe2ed,	// (0x0001bcab) list_double_fisheye_pane_g5

0xe6ed,	// (0x0001c0ab) sp_fs_scroll_pane_cp03

0x9ed2,	// (0x00017890) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe47b,	// (0x0001be39) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0001d6b8) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe487,	// (0x0001be45) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x85e0,	// (0x00015f9e) sp_fs_scroll_pane_cp02

0x9d53,	// (0x00017711) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9d53,	// (0x00017711) popup_sp_fs_calendar_preview_list_single_pane

0x9387,	// (0x00016d45) main_cam6_pano_pane

0x93f7,	// (0x00016db5) main_mup3_pane_ParamLimits

0x9387,	// (0x00016d45) main_phacti_pane

0x7b77,	// (0x00015535) bg_button_pane_cp11

0x7b91,	// (0x0001554f) main_mobtv_info_pane_g2_ParamLimits

0x7b91,	// (0x0001554f) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0001d618) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0001d618) main_mobtv_info_pane_g

0x7d6c,	// (0x0001572a) sc_clock_pane_t5_ParamLimits

0x7d6c,	// (0x0001572a) sc_clock_pane_t5

0x7df1,	// (0x000157af) main_radioblah_pane_g1_ParamLimits

0xe24f,	// (0x0001bc0d) main_radioblah_pane_t3_ParamLimits

0xe24f,	// (0x0001bc0d) main_radioblah_pane_t3

0xe267,	// (0x0001bc25) main_radioblah_pane_t4_ParamLimits

0xe267,	// (0x0001bc25) main_radioblah_pane_t4

0x7e19,	// (0x000157d7) main_radioblah_text_pane_ParamLimits

0x7e19,	// (0x000157d7) main_radioblah_text_pane

0x7e2b,	// (0x000157e9) main_radioblah_info_pane_g1_ParamLimits

0x7ec6,	// (0x00015884) main_radioblah_info_pane_t4_ParamLimits

0x7ec6,	// (0x00015884) main_radioblah_info_pane_t4

0x93f7,	// (0x00016db5) main_sp_fs_calendar_pane

0x8732,	// (0x000160f0) main_phacti_pane_g1

0x873a,	// (0x000160f8) phacti_note_pane_ParamLimits

0x873a,	// (0x000160f8) phacti_note_pane

0xe7f4,	// (0x0001c1b2) phacti_term_pane_ParamLimits

0xe7f4,	// (0x0001c1b2) phacti_term_pane

0xe809,	// (0x0001c1c7) phacti_note_pane_t1_ParamLimits

0xe809,	// (0x0001c1c7) phacti_note_pane_t1

0xe820,	// (0x0001c1de) phacti_term_pane_g1

0xe828,	// (0x0001c1e6) phacti_term_pane_t1_ParamLimits

0xe828,	// (0x0001c1e6) phacti_term_pane_t1

0xe852,	// (0x0001c210) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe85a,	// (0x0001c218) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x0001d77d) popup_sp_fs_calendar_preview_list_single_pane_g

0xe862,	// (0x0001c220) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe862,	// (0x0001c220) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe878,	// (0x0001c236) aid_popup_sp_fs_bg_corner_pane

0xc2dd,	// (0x00019c9b) popup_sp_fs_calendar_preview_bg_pane_g1

0x9387,	// (0x00016d45) popup_sp_fs_calendar_preview_bg_pane

0xe880,	// (0x0001c23e) popup_sp_fs_calendar_preview_list_pane

0x93f7,	// (0x00016db5) bg_main_sp_fs_cale_pane_ParamLimits

0x93f7,	// (0x00016db5) bg_main_sp_fs_cale_pane

0xe891,	// (0x0001c24f) listscroll_cale_mrui_pane_ParamLimits

0xe891,	// (0x0001c24f) listscroll_cale_mrui_pane

0xe8a5,	// (0x0001c263) listscroll_sp_fs_schedule_track_pane

0xe8ae,	// (0x0001c26c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe8ae,	// (0x0001c26c) main_sp_fs_ctrlbar_pane_cp01

0xe8bf,	// (0x0001c27d) main_sp_fs_ribbon_pane

0xe8c7,	// (0x0001c285) popup_sp_fs_cale_preview_window

0x8795,	// (0x00016153) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8795,	// (0x00016153) list_single_sp_fs_schedule_track_pane

0x93f7,	// (0x00016db5) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x93f7,	// (0x00016db5) bg_sp_fs_highlight_list_pane_cp03

0x87aa,	// (0x00016168) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x87aa,	// (0x00016168) list_single_sp_fs_schedule_track_pane_g1

0x87b6,	// (0x00016174) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x87b6,	// (0x00016174) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x0001d782) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x0001d782) list_single_sp_fs_schedule_track_pane_g

0x87c2,	// (0x00016180) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x87c2,	// (0x00016180) list_single_sp_fs_schedule_track_pane_t1

0x87dc,	// (0x0001619a) sp_fs_schedule_track_pane_ParamLimits

0x87dc,	// (0x0001619a) sp_fs_schedule_track_pane

0xe8d9,	// (0x0001c297) sp_fs_schedule_track_pane_g1

0xe8e1,	// (0x0001c29f) sp_fs_schedule_track_pane_g2

0xe8e9,	// (0x0001c2a7) sp_fs_schedule_track_pane_g3

0xe8f1,	// (0x0001c2af) sp_fs_schedule_track_pane_g4

0xe8f9,	// (0x0001c2b7) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x0001d787) sp_fs_schedule_track_pane_g

0xd095,	// (0x0001aa53) bg_sp_fs_schedule_viewer_highlight_g1

0xa184,	// (0x00017b42) bg_sp_fs_schedule_viewer_highlight_g2

0xd09d,	// (0x0001aa5b) bg_sp_fs_schedule_viewer_highlight_g3

0xd0a5,	// (0x0001aa63) bg_sp_fs_schedule_viewer_highlight_g4

0xd31e,	// (0x0001acdc) bg_sp_fs_schedule_viewer_highlight_g5

0xd0b5,	// (0x0001aa73) bg_sp_fs_schedule_viewer_highlight_g6

0xd0bd,	// (0x0001aa7b) bg_sp_fs_schedule_viewer_highlight_g7

0xd0c5,	// (0x0001aa83) bg_sp_fs_schedule_viewer_highlight_g8

0xa164,	// (0x00017b22) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x0001d792) bg_sp_fs_schedule_viewer_highlight_g

0x9387,	// (0x00016d45) bg_main_sp_fs_ribbon_pane

0x87ed,	// (0x000161ab) main_sp_fs_ribbon_pane_g1

0xe901,	// (0x0001c2bf) main_sp_fs_ribbon_pane_t1

0x87f6,	// (0x000161b4) main_sp_fs_ribbon_pane_t2

0xe910,	// (0x0001c2ce) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x0001d7a5) main_sp_fs_ribbon_pane_t

0xe91f,	// (0x0001c2dd) main_sp_fs_ribbon_scheduler_pane

0xe927,	// (0x0001c2e5) bg_main_sp_fs_ribbon_pane_g1

0xe930,	// (0x0001c2ee) bg_main_sp_fs_ribbon_pane_g2

0xe939,	// (0x0001c2f7) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x0001d7ac) bg_main_sp_fs_ribbon_pane_g

0xe941,	// (0x0001c2ff) main_sp_fs_ribbon_scheduler_pane_g1

0xe94a,	// (0x0001c308) main_sp_fs_ribbon_scheduler_pane_g2

0xe953,	// (0x0001c311) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x0001d7b3) main_sp_fs_ribbon_scheduler_pane_g

0xe95c,	// (0x0001c31a) list_cale_mrui_pane

0x8805,	// (0x000161c3) sp_fs_scroll_pane_cp07_ParamLimits

0x8805,	// (0x000161c3) sp_fs_scroll_pane_cp07

0x8819,	// (0x000161d7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8819,	// (0x000161d7) bg_sp_fs_schedule_viewer_highlight

0xe965,	// (0x0001c323) list_single_sp_fs_schedule_track_pane_cp01

0xe96d,	// (0x0001c32b) list_sp_fs_schedule_track_pane

0xe975,	// (0x0001c333) sp_fs_scroll_pane_cp06_ParamLimits

0xe975,	// (0x0001c333) sp_fs_scroll_pane_cp06

0xc2dd,	// (0x00019c9b) bgmain_sp_fs_calendar_pane_g1

0x8829,	// (0x000161e7) list_single_cale_mrui_pane_ParamLimits

0x8829,	// (0x000161e7) list_single_cale_mrui_pane

0xe987,	// (0x0001c345) list_single_cale_mrui_row_pane_ParamLimits

0xe987,	// (0x0001c345) list_single_cale_mrui_row_pane

0xe994,	// (0x0001c352) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe994,	// (0x0001c352) list_single_cale_mrui_row_pane_g1

0xe9cc,	// (0x0001c38a) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe9cc,	// (0x0001c38a) list_single_cale_mrui_row_pane_t1

0x884b,	// (0x00016209) list_single_cale_mrui_row_pane_t2_ParamLimits

0x884b,	// (0x00016209) list_single_cale_mrui_row_pane_t2

0xe9de,	// (0x0001c39c) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe9de,	// (0x0001c39c) list_single_cale_mrui_row_pane_t3

0xea0d,	// (0x0001c3cb) list_single_cale_mrui_row_pane_t4_ParamLimits

0xea0d,	// (0x0001c3cb) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x0001d7bf) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x0001d7bf) list_single_cale_mrui_row_pane_t

0x88b3,	// (0x00016271) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x88b3,	// (0x00016271) list_single_cmail_header_editor_pane_bg_cp01

0x88d9,	// (0x00016297) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x88d9,	// (0x00016297) list_single_cmail_header_editor_pane_bg_cp02

0x88f9,	// (0x000162b7) main_radioblah_text_pane_t1_ParamLimits

0x88f9,	// (0x000162b7) main_radioblah_text_pane_t1

0xea3c,	// (0x0001c3fa) cam6_indi_pane_cp01

0xea44,	// (0x0001c402) cam6_mode_pane_cp01

0xea4c,	// (0x0001c40a) cam6_pano_pane

0xea55,	// (0x0001c413) cam6_zoom_pane_cp01

0xea5d,	// (0x0001c41b) cam6_pano_image_pane

0xea68,	// (0x0001c426) cam6_pano_pane_g1

0xdfc7,	// (0x0001b985) cam6_pano_pane_g2

0xea71,	// (0x0001c42f) cam6_pano_pane_g3

0xea7a,	// (0x0001c438) cam6_pano_pane_g4

0xc89b,	// (0x0001a259) cam6_pano_pane_g5

0xea83,	// (0x0001c441) cam6_pano_pane_g6

0xea8d,	// (0x0001c44b) cam6_pano_pane_g7

0xea95,	// (0x0001c453) cam6_pano_pane_g8

0xea9e,	// (0x0001c45c) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x0001d7c8) cam6_pano_pane_g

0x9387,	// (0x00016d45) main_browser_tag_pane

0xe7d5,	// (0x0001c193) grid_navstr_albumart_pane

0xeaa9,	// (0x0001c467) cell_navstr_albumart_pane_ParamLimits

0xeaa9,	// (0x0001c467) cell_navstr_albumart_pane

0xaab7,	// (0x00018475) cell_navstr_albumart_pane_g1

0xbbea,	// (0x000195a8) cell_navstr_albumart_pane_g2

0xbbfa,	// (0x000195b8) cell_navstr_albumart_pane_g3

0xbbf2,	// (0x000195b0) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x0001d7db) cell_navstr_albumart_pane_g

0x8914,	// (0x000162d2) bt_list_pane_ParamLimits

0x8914,	// (0x000162d2) bt_list_pane

0x8929,	// (0x000162e7) bt_list_pane_t1

0x8938,	// (0x000162f6) bt_list_pane_t2

0x0001,

0xfe26,	// (0x0001d7e4) bt_list_pane_t

0x9387,	// (0x00016d45) main_cale_prevew_pane

0x8947,	// (0x00016305) popup_cale_preview_window_ParamLimits

0x8947,	// (0x00016305) popup_cale_preview_window

0x93f7,	// (0x00016db5) bg_popup_preview_window_pane_cp05_ParamLimits

0x93f7,	// (0x00016db5) bg_popup_preview_window_pane_cp05

0xead4,	// (0x0001c492) list_cale_preview_pane_ParamLimits

0xead4,	// (0x0001c492) list_cale_preview_pane

0x895e,	// (0x0001631c) list_double_cale_preview_pane_ParamLimits

0x895e,	// (0x0001631c) list_double_cale_preview_pane

0x8970,	// (0x0001632e) list_single_cale_preview_pane_ParamLimits

0x8970,	// (0x0001632e) list_single_cale_preview_pane

0x8984,	// (0x00016342) list_single_cale_preview_pane_g1

0x898c,	// (0x0001634a) list_single_cale_preview_pane_t1_ParamLimits

0x898c,	// (0x0001634a) list_single_cale_preview_pane_t1

0x89a1,	// (0x0001635f) list_double_cale_preview_pane_g1

0x89a9,	// (0x00016367) list_double_cale_preview_pane_t1_ParamLimits

0x89a9,	// (0x00016367) list_double_cale_preview_pane_t1

0x89be,	// (0x0001637c) list_double_cale_preview_pane_t2_ParamLimits

0x89be,	// (0x0001637c) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x0001d7e9) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x0001d7e9) list_double_cale_preview_pane_t

0x9387,	// (0x00016d45) main_ezdial_pane

0x93f7,	// (0x00016db5) main_sp_fs_email_pane_ParamLimits

0x80eb,	// (0x00015aa9) cmail_ddmenu_btn01_pane_ParamLimits

0x80eb,	// (0x00015aa9) cmail_ddmenu_btn01_pane

0x80fe,	// (0x00015abc) cmail_ddmenu_btn02_pane_ParamLimits

0x80fe,	// (0x00015abc) cmail_ddmenu_btn02_pane

0x8121,	// (0x00015adf) cmail_ddmenu_btn03_pane_ParamLimits

0x8121,	// (0x00015adf) cmail_ddmenu_btn03_pane

0x8147,	// (0x00015b05) main_sp_fs_ctrlbar_pane_ParamLimits

0x816b,	// (0x00015b29) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x85ea,	// (0x00015fa8) list_cmail_body_pane_ParamLimits

0xe6fc,	// (0x0001c0ba) bg_button_pane_cp12

0xe711,	// (0x0001c0cf) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe711,	// (0x0001c0cf) list_single_cmail_header_detail_pane_g3

0x8669,	// (0x00016027) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8669,	// (0x00016027) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x0001d76e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x0001d76e) list_single_cmail_header_detail_pane_t

0xe83d,	// (0x0001c1fb) phacti_term_pane_t2_ParamLimits

0xe83d,	// (0x0001c1fb) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x0001d778) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x0001d778) phacti_term_pane_t

0xeae0,	// (0x0001c49e) aid_size_list_single_double

0x89d6,	// (0x00016394) popup_ezdial_listscroll_window

0x89f2,	// (0x000163b0) popup_number_entry_window_cp01

0xa936,	// (0x000182f4) bg_popup_call_pane_cp09

0xeaec,	// (0x0001c4aa) ezdial_list_pane

0xeaf4,	// (0x0001c4b2) scroll_pane_cp23

0xbdd5,	// (0x00019793) bg_button_pane_cp028_ParamLimits

0xbdd5,	// (0x00019793) bg_button_pane_cp028

0x8a00,	// (0x000163be) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8a00,	// (0x000163be) cmail_ddmenu_btn01_pane_g1

0x8a0c,	// (0x000163ca) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8a0c,	// (0x000163ca) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x0001d7ee) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x0001d7ee) cmail_ddmenu_btn01_pane_g

0xeafc,	// (0x0001c4ba) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeafc,	// (0x0001c4ba) cmail_ddmenu_btn01_pane_t1

0xbdd5,	// (0x00019793) bg_button_pane_cp029_ParamLimits

0xbdd5,	// (0x00019793) bg_button_pane_cp029

0x8a18,	// (0x000163d6) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8a18,	// (0x000163d6) cmail_ddmenu_btn02_pane_g1

0x8a30,	// (0x000163ee) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8a30,	// (0x000163ee) cmail_ddmenu_btn02_pane_t1

0x93f7,	// (0x00016db5) bg_button_pane_cp031_ParamLimits

0x93f7,	// (0x00016db5) bg_button_pane_cp031

0x8a18,	// (0x000163d6) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8a18,	// (0x000163d6) cmail_ddmenu_btn03_pane_g1

0x8a30,	// (0x000163ee) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8a30,	// (0x000163ee) cmail_ddmenu_btn03_pane_t1

0x5b6a,	// (0x00013528) cell_dialer2_keypad_pane_t1_ParamLimits

0x5b84,	// (0x00013542) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5b84,	// (0x00013542) cell_dialer2_keypad_pane_t1_copy1

0x79f9,	// (0x000153b7) ncimui_group_button_pane

0x93f7,	// (0x00016db5) main_sp_fs_calendar_pane_ParamLimits

0x85ff,	// (0x00015fbd) list_single_cmail_header_caption_pane_ParamLimits

0xe888,	// (0x0001c246) aid_recal_txt_sm_pane

0x9387,	// (0x00016d45) mian_recal_day_pane

0xe8c7,	// (0x0001c285) popup_sp_fs_cale_preview_window_ParamLimits

0x9387,	// (0x00016d45) list_recal_day_pane

0xeb33,	// (0x0001c4f1) list_single_recal_day_pane_ParamLimits

0xeb33,	// (0x0001c4f1) list_single_recal_day_pane

0xeb45,	// (0x0001c503) list_single_recal_day_pane_g1_ParamLimits

0xeb45,	// (0x0001c503) list_single_recal_day_pane_g1

0xeb51,	// (0x0001c50f) list_single_recal_day_pane_g2_ParamLimits

0xeb51,	// (0x0001c50f) list_single_recal_day_pane_g2

0xeb60,	// (0x0001c51e) list_single_recal_day_pane_g3_ParamLimits

0xeb60,	// (0x0001c51e) list_single_recal_day_pane_g3

0x8a54,	// (0x00016412) list_single_recal_day_pane_g4_ParamLimits

0x8a54,	// (0x00016412) list_single_recal_day_pane_g4

0xeb6c,	// (0x0001c52a) list_single_recal_day_pane_g5_ParamLimits

0xeb6c,	// (0x0001c52a) list_single_recal_day_pane_g5

0xeb7b,	// (0x0001c539) list_single_recal_day_pane_g6_ParamLimits

0xeb7b,	// (0x0001c539) list_single_recal_day_pane_g6

0x0005,

0xfe3f,	// (0x0001d7fd) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x0001d7fd) list_single_recal_day_pane_g

0xeb87,	// (0x0001c545) list_single_recal_day_pane_t1

0xeb95,	// (0x0001c553) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x0001d80a) list_single_recal_day_pane_t

0x8a67,	// (0x00016425) ncimui_query_button_pane_ParamLimits

0x8a67,	// (0x00016425) ncimui_query_button_pane

0x8a77,	// (0x00016435) ncimui_query_button_pane_t1_ParamLimits

0x8a77,	// (0x00016435) ncimui_query_button_pane_t1

0xeba3,	// (0x0001c561) ncimui_query_button_pane_t2_ParamLimits

0xeba3,	// (0x0001c561) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x0001d80f) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x0001d80f) ncimui_query_button_pane_t

0x8a8a,	// (0x00016448) query_button_pane_ParamLimits

0x8a8a,	// (0x00016448) query_button_pane

0x9387,	// (0x00016d45) bg_button_pane_cp0028

0xebb6,	// (0x0001c574) query_button_pane_t1

0x3c45,	// (0x00011603) main_tport_pane_ParamLimits

0x84d7,	// (0x00015e95) bg_popup_window_pane_cp01_ParamLimits

0x84d7,	// (0x00015e95) bg_popup_window_pane_cp01

0x84f1,	// (0x00015eaf) heading_pane_cp08_ParamLimits

0x84f1,	// (0x00015eaf) heading_pane_cp08

0x8505,	// (0x00015ec3) heading_pane_cp07_ParamLimits

0x8505,	// (0x00015ec3) heading_pane_cp07

0xe6bf,	// (0x0001c07d) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x0001d75b) cell_tport_appsw_pane_g

0x3224,	// (0x00010be2) input_candi_list_open_g1

0xa377,	// (0x00017d35) list_cale_time_pane_g6_ParamLimits

0xa377,	// (0x00017d35) list_cale_time_pane_g6

0x4a0e,	// (0x000123cc) aid_size_touch_calib_1_ParamLimits

0x4a0e,	// (0x000123cc) aid_size_touch_calib_1

0x4a1a,	// (0x000123d8) aid_size_touch_calib_2_ParamLimits

0x4a1a,	// (0x000123d8) aid_size_touch_calib_2

0x4a30,	// (0x000123ee) aid_size_touch_calib_3_ParamLimits

0x4a30,	// (0x000123ee) aid_size_touch_calib_3

0x4a4e,	// (0x0001240c) aid_size_touch_calib_4_ParamLimits

0x4a4e,	// (0x0001240c) aid_size_touch_calib_4

0x4a64,	// (0x00012422) main_touch_calib_button_group_pane_ParamLimits

0x4a64,	// (0x00012422) main_touch_calib_button_group_pane

0x4a7c,	// (0x0001243a) main_touch_calib_pane_g1_ParamLimits

0x4a88,	// (0x00012446) main_touch_calib_pane_g2_ParamLimits

0x4a94,	// (0x00012452) main_touch_calib_pane_g3_ParamLimits

0x4aa0,	// (0x0001245e) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0001d133) main_touch_calib_pane_g_ParamLimits

0x4aac,	// (0x0001246a) main_touch_calib_pane_t1_ParamLimits

0x4ac6,	// (0x00012484) main_touch_calib_pane_t2_ParamLimits

0x4ae0,	// (0x0001249e) main_touch_calib_pane_t3_ParamLimits

0x4af4,	// (0x000124b2) main_touch_calib_pane_t4_ParamLimits

0x4b08,	// (0x000124c6) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0001d13c) main_touch_calib_pane_t_ParamLimits

0xc682,	// (0x0001a040) list_single_fp_cale_pane_g3_ParamLimits

0xc682,	// (0x0001a040) list_single_fp_cale_pane_g3

0x93f7,	// (0x00016db5) bg_button_pane_cp012_ParamLimits

0x93f7,	// (0x00016db5) bg_vkb2_func_pane_cp03_ParamLimits

0x6c36,	// (0x000145f4) cell_vitu2_function_top_pane_g1_ParamLimits

0x93f7,	// (0x00016db5) bg_vkb2_func_pane_cp04_ParamLimits

0x7999,	// (0x00015357) main_ncimui_button_group_pane_ParamLimits

0x7999,	// (0x00015357) main_ncimui_button_group_pane

0x79e7,	// (0x000153a5) main_ncimui_pane_t3_ParamLimits

0x79e7,	// (0x000153a5) main_ncimui_pane_t3

0xe7eb,	// (0x0001c1a9) phacti_button_group_pane

0xeae0,	// (0x0001c49e) aid_size_list_single_double_ParamLimits

0x89d6,	// (0x00016394) popup_ezdial_listscroll_window_ParamLimits

0x89f2,	// (0x000163b0) popup_number_entry_window_cp01_ParamLimits

0x8a9d,	// (0x0001645b) phacti_button_pane_ParamLimits

0x8a9d,	// (0x0001645b) phacti_button_pane

0x9387,	// (0x00016d45) bg_button_pane_cp14

0xebc4,	// (0x0001c582) phacti_button_pane_t1

0x8aae,	// (0x0001646c) main_touch_calib_button_pane_ParamLimits

0x8aae,	// (0x0001646c) main_touch_calib_button_pane

0x9ba2,	// (0x00017560) bg_button_pane_cp18_ParamLimits

0x9ba2,	// (0x00017560) bg_button_pane_cp18

0xebd2,	// (0x0001c590) main_touch_calib_button_pane_t1_ParamLimits

0xebd2,	// (0x0001c590) main_touch_calib_button_pane_t1

0xebe8,	// (0x0001c5a6) main_touch_calib_button_pane_t2_ParamLimits

0xebe8,	// (0x0001c5a6) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x0001d814) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x0001d814) main_touch_calib_button_pane_t

0x9387,	// (0x00016d45) cell_ncimui_button_pane

0x9387,	// (0x00016d45) bg_button_pane_cp032

0xec06,	// (0x0001c5c4) cell_ncimui_button_pane_t1

0xce4e,	// (0x0001a80c) image3_infobar_pane_ParamLimits

0xce4e,	// (0x0001a80c) image3_infobar_pane

0x7d98,	// (0x00015756) fs_bigclock_status_pane_ParamLimits

0x7d98,	// (0x00015756) fs_bigclock_status_pane

0x7da5,	// (0x00015763) main_fs_bigclock_clock_pane_ParamLimits

0x7da5,	// (0x00015763) main_fs_bigclock_clock_pane

0x7db8,	// (0x00015776) main_fs_bigclock_indi_pane_ParamLimits

0x7db8,	// (0x00015776) main_fs_bigclock_indi_pane

0x7dd0,	// (0x0001578e) main_fs_bigclock_swipe_pane_ParamLimits

0x7dd0,	// (0x0001578e) main_fs_bigclock_swipe_pane

0x9387,	// (0x00016d45) main_fs_clock_dumped_data

0xe0d4,	// (0x0001ba92) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0d4,	// (0x0001ba92) list_single_fs_bigclock_indicator_pane_g1

0xe0f2,	// (0x0001bab0) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0f2,	// (0x0001bab0) list_single_fs_bigclock_indicator_pane_g2

0xe10c,	// (0x0001baca) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe10c,	// (0x0001baca) list_single_fs_bigclock_indicator_pane_g3

0xe126,	// (0x0001bae4) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe126,	// (0x0001bae4) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x0001d64c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x0001d64c) list_single_fs_bigclock_indicator_pane_g

0xe14c,	// (0x0001bb0a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe14c,	// (0x0001bb0a) list_single_fs_bigclock_indicator_pane_t1

0xe174,	// (0x0001bb32) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe174,	// (0x0001bb32) list_single_fs_bigclock_indicator_pane_t2

0xe19c,	// (0x0001bb5a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe19c,	// (0x0001bb5a) list_single_fs_bigclock_indicator_pane_t3

0xe1c4,	// (0x0001bb82) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1c4,	// (0x0001bb82) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x0001d657) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x0001d657) list_single_fs_bigclock_indicator_pane_t

0xec14,	// (0x0001c5d2) image3_infobar_fav_pane_ParamLimits

0xec14,	// (0x0001c5d2) image3_infobar_fav_pane

0xec24,	// (0x0001c5e2) image3_infobar_loc_pane_ParamLimits

0xec24,	// (0x0001c5e2) image3_infobar_loc_pane

0xec38,	// (0x0001c5f6) image3_infobar_time_pane_ParamLimits

0xec38,	// (0x0001c5f6) image3_infobar_time_pane

0xc2dd,	// (0x00019c9b) image3_infobar_time_pane_g1

0xec48,	// (0x0001c606) image3_infobar_time_pane_t1

0xc2dd,	// (0x00019c9b) image3_infobar_loc_pane_g1

0xec56,	// (0x0001c614) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x0001d819) image3_infobar_loc_pane_g

0xec5e,	// (0x0001c61c) image3_infobar_loc_pane_t1

0xc2dd,	// (0x00019c9b) image3_infobar_fav_pane_g1

0xec6c,	// (0x0001c62a) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x0001d81e) image3_infobar_fav_pane_g

0xec74,	// (0x0001c632) fs_bigclock_status_battery_pane

0xec7d,	// (0x0001c63b) fs_bigclock_status_signal_pane

0xec86,	// (0x0001c644) fs_bigclock_status_title_pane

0xec8f,	// (0x0001c64d) fs_bigclock_status_signal_pane_g1

0xec98,	// (0x0001c656) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x0001d823) fs_bigclock_status_signal_pane_g

0xeca0,	// (0x0001c65e) fs_bigclock_status_battery_pane_g1

0xeca9,	// (0x0001c667) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x0001d828) fs_bigclock_status_battery_pane_g

0xecb1,	// (0x0001c66f) fs_bigclock_status_title_pane_t1

0xc2dd,	// (0x00019c9b) main_fs_bigclock_clock_pane_g1

0xecbf,	// (0x0001c67d) main_fs_bigclock_clock_pane_g2

0xecbf,	// (0x0001c67d) main_fs_bigclock_clock_pane_g3

0xecbf,	// (0x0001c67d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x0001d82d) main_fs_bigclock_clock_pane_g

0xecc7,	// (0x0001c685) main_fs_bigclock_clock_pane_t1

0xecd5,	// (0x0001c693) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x0001d836) main_fs_bigclock_clock_pane_t

0xece4,	// (0x0001c6a2) list_single_fs_bigclock_indicator_pane_ParamLimits

0xece4,	// (0x0001c6a2) list_single_fs_bigclock_indicator_pane

0x8ac3,	// (0x00016481) list_single_fs_bigclock_pane_ParamLimits

0x8ac3,	// (0x00016481) list_single_fs_bigclock_pane

0xecfe,	// (0x0001c6bc) main_fs_bigclock_indicator_pane_t1

0xed0d,	// (0x0001c6cb) list_single_fs_bigclock_pane_g1

0xed15,	// (0x0001c6d3) list_single_fs_bigclock_pane_t1

0xc2dd,	// (0x00019c9b) main_fs_bigclock_swipe_pane_g1

0xed53,	// (0x0001c711) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x0001d847) main_fs_bigclock_swipe_pane_g

0xed5b,	// (0x0001c719) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed5b,	// (0x0001c719) main_fs_bigclock_swipe_pane_t1

0x2a5d,	// (0x0001041b) call_type_pane_ParamLimits

0x9387,	// (0x00016d45) main_btmg_pane

0xe9c0,	// (0x0001c37e) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe9c0,	// (0x0001c37e) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfc,	// (0x0001d7ba) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x0001d7ba) list_single_cale_mrui_row_pane_g

0xeb1a,	// (0x0001c4d8) list_recal_vselct_arw_lo_pane

0xeb22,	// (0x0001c4e0) list_recal_vselct_arw_up_pane

0xeb2a,	// (0x0001c4e8) list_recal_vselct_pane

0xed78,	// (0x0001c736) btmg_button_pane

0x8b29,	// (0x000164e7) main_btmg_pane_g1

0x9387,	// (0x00016d45) bg_button_pane_cp044

0xed82,	// (0x0001c740) btmg_button_pane_t1

0xbdcd,	// (0x0001978b) aid_listscroll_gen

0x93f7,	// (0x00016db5) main_cntbar_detail_pane

0xe6dd,	// (0x0001c09b) list_cmail_folder_pane

0xe6ed,	// (0x0001c0ab) sp_fs_scroll_pane_cp03_ParamLimits

0x85ff,	// (0x00015fbd) list_single_fs_dyc_pane_cp01_ParamLimits

0x85ff,	// (0x00015fbd) list_single_fs_dyc_pane_cp01

0xed90,	// (0x0001c74e) aid_size_cmail_indent

0xed99,	// (0x0001c757) list_single_dyc_row_pane_cp01

0x8b5f,	// (0x0001651d) cntbar_detail_list_pane_ParamLimits

0x8b5f,	// (0x0001651d) cntbar_detail_list_pane

0x8bab,	// (0x00016569) main_cntbar_detail_cont_pane_ParamLimits

0x8bab,	// (0x00016569) main_cntbar_detail_cont_pane

0x29f7,	// (0x000103b5) scroll_pane_cp032_ParamLimits

0x29f7,	// (0x000103b5) scroll_pane_cp032

0x8bbf,	// (0x0001657d) cntbar_detail_list_event_pane_ParamLimits

0x8bbf,	// (0x0001657d) cntbar_detail_list_event_pane

0x8b6f,	// (0x0001652d) cntbar_detail_list_shct_pane

0xa1d2,	// (0x00017b90) aid_list_gen

0xeda2,	// (0x0001c760) aid_scroll

0xedab,	// (0x0001c769) aid_size_touch_scroll_bar

0xf074,	// (0x0001ca32) aid_list_double

0xedb4,	// (0x0001c772) aid_list_single

0xedbd,	// (0x0001c77b) aid_list_single_lg

0xedc6,	// (0x0001c784) aid_list_z_g_a_sm

0xedce,	// (0x0001c78c) aid_list_z_g_d

0xedd6,	// (0x0001c794) aid_txt_z_prm

0x8bcf,	// (0x0001658d) aid_txt_z_prm_cp01

0x8bdd,	// (0x0001659b) aid_txt_z_sec

0x8beb,	// (0x000165a9) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8beb,	// (0x000165a9) main_cntbar_detail_cont_pane_g1

0x8bff,	// (0x000165bd) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8bff,	// (0x000165bd) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x0001d84c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x0001d84c) main_cntbar_detail_cont_pane_g

0xede4,	// (0x0001c7a2) main_cntbar_detail_cont_pane_t1

0xedf2,	// (0x0001c7b0) main_cntbar_detail_cont_pane_t2

0xee00,	// (0x0001c7be) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x0001d851) main_cntbar_detail_cont_pane_t

0x8c0f,	// (0x000165cd) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8c0f,	// (0x000165cd) cell_cntbar_detail_list_shct_pane

0xee0e,	// (0x0001c7cc) cntbar_detail_list_shct_pane_g1

0xee17,	// (0x0001c7d5) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x0001d858) cntbar_detail_list_shct_pane_g

0x8c23,	// (0x000165e1) cntbar_detail_list_event_pane_g1_ParamLimits

0x8c23,	// (0x000165e1) cntbar_detail_list_event_pane_g1

0x8c2f,	// (0x000165ed) cntbar_detail_list_event_pane_g2_ParamLimits

0x8c2f,	// (0x000165ed) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x0001d85d) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x0001d85d) cntbar_detail_list_event_pane_g

0x8c9b,	// (0x00016659) cntbar_detail_list_event_pane_t1_ParamLimits

0x8c9b,	// (0x00016659) cntbar_detail_list_event_pane_t1

0x8cb0,	// (0x0001666e) cntbar_detail_list_event_pane_t2_ParamLimits

0x8cb0,	// (0x0001666e) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x0001d86a) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x0001d86a) cntbar_detail_list_event_pane_t

0xc2dd,	// (0x00019c9b) cell_cntbar_detail_list_shct_pane_g1

0x2dae,	// (0x0001076c) navi_pane_mv_g3

0x93f7,	// (0x00016db5) main_cntbar_detail_pane_ParamLimits

0x9387,	// (0x00016d45) main_notif_wgt_pane

0xcbe0,	// (0x0001a59e) aid_tch_main_mp4_pane_g4

0xcde2,	// (0x0001a7a0) popup_slider_window_cp02

0xeb11,	// (0x0001c4cf) list_recal_day_event_pane

0x8b33,	// (0x000164f1) cntbar_detail_btn_pane_ParamLimits

0x8b33,	// (0x000164f1) cntbar_detail_btn_pane

0x8b49,	// (0x00016507) cntbar_detail_btn_pane_cp01_ParamLimits

0x8b49,	// (0x00016507) cntbar_detail_btn_pane_cp01

0x8b6f,	// (0x0001652d) cntbar_detail_list_shct_pane_ParamLimits

0x8b7f,	// (0x0001653d) cntbar_detail_pane_g1_ParamLimits

0x8b7f,	// (0x0001653d) cntbar_detail_pane_g1

0x8b8f,	// (0x0001654d) cntbar_detail_pane_t1_ParamLimits

0x8b8f,	// (0x0001654d) cntbar_detail_pane_t1

0x8c3b,	// (0x000165f9) cntbar_detail_list_event_pane_g3_ParamLimits

0x8c3b,	// (0x000165f9) cntbar_detail_list_event_pane_g3

0x8c53,	// (0x00016611) cntbar_detail_list_event_pane_g4_ParamLimits

0x8c53,	// (0x00016611) cntbar_detail_list_event_pane_g4

0x8c6b,	// (0x00016629) cntbar_detail_list_event_pane_g5_ParamLimits

0x8c6b,	// (0x00016629) cntbar_detail_list_event_pane_g5

0x8c83,	// (0x00016641) cntbar_detail_list_event_pane_g6_ParamLimits

0x8c83,	// (0x00016641) cntbar_detail_list_event_pane_g6

0x8cc5,	// (0x00016683) cntbar_detail_list_event_pane_t3_ParamLimits

0x8cc5,	// (0x00016683) cntbar_detail_list_event_pane_t3

0x8cd7,	// (0x00016695) popup_notif_wgt_window_ParamLimits

0x8cd7,	// (0x00016695) popup_notif_wgt_window

0x8cf0,	// (0x000166ae) popup_submenu_window_cp01_ParamLimits

0x8cf0,	// (0x000166ae) popup_submenu_window_cp01

0xa936,	// (0x000182f4) bg_popup_window_pane_cp10

0xee20,	// (0x0001c7de) listscroll_notif_wgt_pane

0xee2a,	// (0x0001c7e8) list_notif_wgt_window

0xee33,	// (0x0001c7f1) scroll_pane_cp033

0xee3c,	// (0x0001c7fa) list_notif_wgt_row_pane_ParamLimits

0xee3c,	// (0x0001c7fa) list_notif_wgt_row_pane

0xee50,	// (0x0001c80e) aid_size_list_notif_wgt_del

0xee59,	// (0x0001c817) list_notif_wgt_row_pane_g1

0xee61,	// (0x0001c81f) list_notif_wgt_row_pane_g2

0xee69,	// (0x0001c827) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x0001d871) list_notif_wgt_row_pane_g

0xee72,	// (0x0001c830) list_notif_wgt_row_pane_t1

0xee80,	// (0x0001c83e) list_notif_wgt_row_pane_t2

0xee8e,	// (0x0001c84c) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x0001d878) list_notif_wgt_row_pane_t

0xd35e,	// (0x0001ad1c) list_recal_day_event_pane_g1

0xee9c,	// (0x0001c85a) list_recal_day_event_pane_t1

0x9387,	// (0x00016d45) bg_button_pane_cp045

0xeeab,	// (0x0001c869) cntbar_detail_btn_pane_t1

0xbdd5,	// (0x00019793) main_callh_pane_ParamLimits

0xbdd5,	// (0x00019793) main_callh_pane

0x9387,	// (0x00016d45) main_coverflow0_pane

0x9387,	// (0x00016d45) main_wgtman_pane

0x7dde,	// (0x0001579c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7dde,	// (0x0001579c) main_fs_bigclock_unlock_btn_pane

0xe6b7,	// (0x0001c075) bg_button_pane_cp16

0xe6c7,	// (0x0001c085) cell_tport_appsw_pane_g3

0x8d02,	// (0x000166c0) cf0_flow_pane_ParamLimits

0x8d02,	// (0x000166c0) cf0_flow_pane

0xeeb9,	// (0x0001c877) listscroll_cf0_pane

0xeec2,	// (0x0001c880) main_cf0_pane_g1

0x8d17,	// (0x000166d5) main_cf0_pane_t1_ParamLimits

0x8d17,	// (0x000166d5) main_cf0_pane_t1

0x8d2e,	// (0x000166ec) main_cf0_pane_t2_ParamLimits

0x8d2e,	// (0x000166ec) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x0001d87f) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x0001d87f) main_cf0_pane_t

0xeecc,	// (0x0001c88a) scroll_pane_cp11

0x8d45,	// (0x00016703) cf0_flow_pane_g1

0x8d4d,	// (0x0001670b) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x0001d884) cf0_flow_pane_g

0x8d55,	// (0x00016713) cf0_flow_pane_t1

0x9387,	// (0x00016d45) main_call6_pane

0x9387,	// (0x00016d45) main_calllock_pane

0x8d63,	// (0x00016721) call6_btn_grp_pane_ParamLimits

0x8d63,	// (0x00016721) call6_btn_grp_pane

0x8d7d,	// (0x0001673b) call6_pane_g1_ParamLimits

0x8d7d,	// (0x0001673b) call6_pane_g1

0x8d92,	// (0x00016750) popup_call6_1st_window_ParamLimits

0x8d92,	// (0x00016750) popup_call6_1st_window

0x8da3,	// (0x00016761) popup_call6_2nd_window_ParamLimits

0x8da3,	// (0x00016761) popup_call6_2nd_window

0x8db4,	// (0x00016772) cell_call6_btn_pane_ParamLimits

0x8db4,	// (0x00016772) cell_call6_btn_pane

0xa936,	// (0x000182f4) bg_popup_call2_in_pane_cp03

0xeed7,	// (0x0001c895) popup_call6_1st_window_g1

0xeedf,	// (0x0001c89d) popup_call6_1st_window_g2

0xeee7,	// (0x0001c8a5) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x0001d889) popup_call6_1st_window_g

0xeeef,	// (0x0001c8ad) popup_call6_1st_window_t1

0xeefe,	// (0x0001c8bc) popup_call6_1st_window_t2

0xef0e,	// (0x0001c8cc) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x0001d890) popup_call6_1st_window_t

0xa936,	// (0x000182f4) bg_popup_call2_in_pane_cp04

0xeed7,	// (0x0001c895) popup_call6_2nd_window_g1

0xeedf,	// (0x0001c89d) popup_call6_2nd_window_g2

0xeee7,	// (0x0001c8a5) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x0001d889) popup_call6_2nd_window_g

0xeeef,	// (0x0001c8ad) popup_call6_2nd_window_t1

0x9387,	// (0x00016d45) bg_button_pane_cp15

0xef1e,	// (0x0001c8dc) cell_call6_btn_pane_g1

0xef27,	// (0x0001c8e5) cell_call6_btn_pane_t1

0x8dc8,	// (0x00016786) listscroll_wgtman_pane_ParamLimits

0x8dc8,	// (0x00016786) listscroll_wgtman_pane

0x8deb,	// (0x000167a9) wgtman_btn_pane_ParamLimits

0x8deb,	// (0x000167a9) wgtman_btn_pane

0xa7e9,	// (0x000181a7) aid_scroll_copy1

0xef36,	// (0x0001c8f4) list_wgtman_pane

0x8e2e,	// (0x000167ec) wgtman_btn_pane_g1_ParamLimits

0x8e2e,	// (0x000167ec) wgtman_btn_pane_g1

0x8e5a,	// (0x00016818) wgtman_btn_pane_t1_ParamLimits

0x8e5a,	// (0x00016818) wgtman_btn_pane_t1

0xef40,	// (0x0001c8fe) wgtman_btn_pane_t2_ParamLimits

0xef40,	// (0x0001c8fe) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x0001d897) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x0001d897) wgtman_btn_pane_t

0x8e97,	// (0x00016855) listrow_wgtman_pane_ParamLimits

0x8e97,	// (0x00016855) listrow_wgtman_pane

0x8eaa,	// (0x00016868) listrow_wgtman_pane_g1

0x8eb3,	// (0x00016871) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x0001d89c) listrow_wgtman_pane_g

0x8ebd,	// (0x0001687b) listrow_wgtman_pane_t1

0x8ecb,	// (0x00016889) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x0001d8a1) listrow_wgtman_pane_t

0x8ed9,	// (0x00016897) wait_bar_pane_cp09

0xef57,	// (0x0001c915) main_calllock_btn_pane

0xef61,	// (0x0001c91f) main_calllock_pane_g1

0x9387,	// (0x00016d45) bg_button_pane_cp17

0xef6c,	// (0x0001c92a) main_calllock_btn_pane_g1

0xef75,	// (0x0001c933) main_calllock_btn_pane_t1

0x9387,	// (0x00016d45) main_dialer3_pane

0x9387,	// (0x00016d45) main_fmrd2_pane

0xc2dd,	// (0x00019c9b) main_fs_bigclock_unlock_btn_pane_g1

0xef8c,	// (0x0001c94a) main_fs_bigclock_unlock_btn_pane_t1

0x8ee1,	// (0x0001689f) area_fmrd2_info_pane_ParamLimits

0x8ee1,	// (0x0001689f) area_fmrd2_info_pane

0x8ef2,	// (0x000168b0) area_fmrd2_visual_pane_ParamLimits

0x8ef2,	// (0x000168b0) area_fmrd2_visual_pane

0x8f00,	// (0x000168be) fmrd2_indi_pane_ParamLimits

0x8f00,	// (0x000168be) fmrd2_indi_pane

0x8f0d,	// (0x000168cb) area_fmrd2_visual_pane_g1

0x8f15,	// (0x000168d3) area_fmrd2_visual_pane_t1

0x8f25,	// (0x000168e3) area_fmrd2_visual_pane_t2

0x8f35,	// (0x000168f3) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x0001d8ab) area_fmrd2_visual_pane_t

0x8f45,	// (0x00016903) area_fmrd2_info_pane_g1

0x8f4d,	// (0x0001690b) area_fmrd2_info_pane_t1

0x8f5d,	// (0x0001691b) area_fmrd2_info_pane_t2

0x8f6d,	// (0x0001692b) area_fmrd2_info_pane_t3

0x8f7d,	// (0x0001693b) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x0001d8b2) area_fmrd2_info_pane_t

0x8f8b,	// (0x00016949) fmrd2_indi_pane_t1

0x8f9b,	// (0x00016959) fmrd2_indi_pane_t2

0x8fab,	// (0x00016969) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x0001d8bb) fmrd2_indi_pane_t

0xe135,	// (0x0001baf3) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe135,	// (0x0001baf3) list_single_fs_bigclock_indicator_pane_g5

0xe1d9,	// (0x0001bb97) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1d9,	// (0x0001bb97) list_single_fs_bigclock_indicator_pane_t5

0x874e,	// (0x0001610c) aid_cell_bcale_month_pane_ParamLimits

0x874e,	// (0x0001610c) aid_cell_bcale_month_pane

0x8760,	// (0x0001611e) bcale_month_pane_ParamLimits

0x8760,	// (0x0001611e) bcale_month_pane

0x877a,	// (0x00016138) bcale_preview_pane_ParamLimits

0x877a,	// (0x00016138) bcale_preview_pane

0xed15,	// (0x0001c6d3) list_single_fs_bigclock_pane_t1_ParamLimits

0xed2f,	// (0x0001c6ed) list_single_fs_bigclock_pane_t2_ParamLimits

0xed2f,	// (0x0001c6ed) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x0001d842) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x0001d842) list_single_fs_bigclock_pane_t

0xef84,	// (0x0001c942) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x0001d8a6) main_fs_bigclock_unlock_btn_pane_g

0x8fbb,	// (0x00016979) aid_dia3_key_size_ParamLimits

0x8fbb,	// (0x00016979) aid_dia3_key_size

0x8fca,	// (0x00016988) aid_dia3_listrow_size_ParamLimits

0x8fca,	// (0x00016988) aid_dia3_listrow_size

0x8fdf,	// (0x0001699d) dia3_keypad_fun_pane_ParamLimits

0x8fdf,	// (0x0001699d) dia3_keypad_fun_pane

0x8ffb,	// (0x000169b9) dia3_keypad_num_pane_ParamLimits

0x8ffb,	// (0x000169b9) dia3_keypad_num_pane

0x9016,	// (0x000169d4) dia3_listscroll_pane_ParamLimits

0x9016,	// (0x000169d4) dia3_listscroll_pane

0x9029,	// (0x000169e7) dia3_numentry_pane_ParamLimits

0x9029,	// (0x000169e7) dia3_numentry_pane

0xef9a,	// (0x0001c958) dia3_list_pane

0xefa5,	// (0x0001c963) scroll_pane_cp12

0x9387,	// (0x00016d45) bg_dia3_numentry_pane

0x903d,	// (0x000169fb) dia3_numentry_pane_t1

0x904c,	// (0x00016a0a) cell_dia3_key_num_pane

0x9054,	// (0x00016a12) cell_dia3_key0_fun_pane_ParamLimits

0x9054,	// (0x00016a12) cell_dia3_key0_fun_pane

0x9068,	// (0x00016a26) cell_dia3_key1_fun_pane_ParamLimits

0x9068,	// (0x00016a26) cell_dia3_key1_fun_pane

0x9080,	// (0x00016a3e) dia3_listrow_pane

0xde33,	// (0x0001b7f1) bg_dia3_numentry_pane_g1

0x9387,	// (0x00016d45) bg_button_pane_cp21

0xefb0,	// (0x0001c96e) cell_dia3_key_num_pane_t1

0xefbe,	// (0x0001c97c) cell_dia3_key_num_pane_t2

0xefcd,	// (0x0001c98b) cell_dia3_key_num_pane_t3

0xefdc,	// (0x0001c99a) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x0001d8c2) cell_dia3_key_num_pane_t

0x9387,	// (0x00016d45) bg_button_pane_cp19

0x9092,	// (0x00016a50) cell_dia3_key0_fun_pane_g1

0x9387,	// (0x00016d45) bg_button_pane_cp20

0x909a,	// (0x00016a58) cell_dia3_key1_fun_pane_g1

0x90a2,	// (0x00016a60) area_left_week_number_pane

0x90ab,	// (0x00016a69) area_top_day_name_pane

0x90b4,	// (0x00016a72) frame_month_view_pane

0x90bc,	// (0x00016a7a) grid_month_view_pane

0x90c6,	// (0x00016a84) cell_top_day_name_pane_ParamLimits

0x90c6,	// (0x00016a84) cell_top_day_name_pane

0x8970,	// (0x0001632e) cell_area_left_week_number_pane_ParamLimits

0x8970,	// (0x0001632e) cell_area_left_week_number_pane

0x90dc,	// (0x00016a9a) cell_month_view_pane_ParamLimits

0x90dc,	// (0x00016a9a) cell_month_view_pane

0xefeb,	// (0x0001c9a9) frm_month_g1

0x90f7,	// (0x00016ab5) frm_month_g2

0x90ff,	// (0x00016abd) frm_month_g3

0x9107,	// (0x00016ac5) frm_month_g4

0x910f,	// (0x00016acd) frm_month_g5

0x9117,	// (0x00016ad5) frm_month_g6

0x911f,	// (0x00016add) frm_month_g7

0xeff4,	// (0x0001c9b2) frm_month_g8

0x9127,	// (0x00016ae5) frm_month_g9

0x9130,	// (0x00016aee) frm_month_g10

0x9139,	// (0x00016af7) frm_month_g11

0x9142,	// (0x00016b00) frm_month_g12

0x914b,	// (0x00016b09) frm_month_g13

0x9154,	// (0x00016b12) frm_month_g14

0x915d,	// (0x00016b1b) frm_month_g15

0x9166,	// (0x00016b24) frm_month_g16

0x000f,

0xff0d,	// (0x0001d8cb) frm_month_g

0x916f,	// (0x00016b2d) cell_top_day_name_pane_t1

0x917e,	// (0x00016b3c) cell_area_left_week_number_pane_g1

0x916f,	// (0x00016b2d) cell_area_left_week_number_pane_t1

0xc2dd,	// (0x00019c9b) cell_month_view_pane_g1

0x9186,	// (0x00016b44) cell_month_view_pane_t1

0x9387,	// (0x00016d45) main_fps_pane

0xe443,	// (0x0001be01) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe443,	// (0x0001be01) cmail_ddmenu_btn02_pane_cp1

0xe45f,	// (0x0001be1d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe45f,	// (0x0001be1d) cmail_ddmenu_btn02_pane_cp2

0x8a24,	// (0x000163e2) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8a24,	// (0x000163e2) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x0001d7f3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x0001d7f3) cmail_ddmenu_btn02_pane_g

0x8a42,	// (0x00016400) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8a42,	// (0x00016400) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x0001d7f8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x0001d7f8) cmail_ddmenu_btn02_pane_t

0x9195,	// (0x00016b53) fps_text_pane_ParamLimits

0x9195,	// (0x00016b53) fps_text_pane

0x91ac,	// (0x00016b6a) main_fps_pane_g1_ParamLimits

0x91ac,	// (0x00016b6a) main_fps_pane_g1

0x91c6,	// (0x00016b84) wait_bar_pane_cp010_ParamLimits

0x91c6,	// (0x00016b84) wait_bar_pane_cp010

0x91d7,	// (0x00016b95) fps_text_pane_t1_ParamLimits

0x91d7,	// (0x00016b95) fps_text_pane_t1

0xf062,	// (0x0001ca20) cam4_image_uncrop_pane_g1

0xf06b,	// (0x0001ca29) cam4_image_uncrop_pane_g2

0x6015,	// (0x000139d3) cam4_image_uncrop_pane_g3

0x601e,	// (0x000139dc) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0001d2cb) cam4_image_uncrop_pane_g

0x9080,	// (0x00016a3e) dia3_listrow_pane_ParamLimits

0x9387,	// (0x00016d45) main_phob2_pane

0x8570,	// (0x00015f2e) cell_tport_appsw_pane_cp02_ParamLimits

0x8570,	// (0x00015f2e) cell_tport_appsw_pane_cp02

0x8584,	// (0x00015f42) cell_tport_appsw_pane_cp03_ParamLimits

0x8584,	// (0x00015f42) cell_tport_appsw_pane_cp03

0x9387,	// (0x00016d45) phob2_contact_card_pane

0x9387,	// (0x00016d45) phob2_listscroll_pane

0xeffd,	// (0x0001c9bb) phob2_list_pane

0xf005,	// (0x0001c9c3) scroll_pane_cp034

0x91ef,	// (0x00016bad) phob2_cc_data_pane_ParamLimits

0x91ef,	// (0x00016bad) phob2_cc_data_pane

0x920e,	// (0x00016bcc) phob2_cc_listscroll_pane_ParamLimits

0x920e,	// (0x00016bcc) phob2_cc_listscroll_pane

0xd0cd,	// (0x0001aa8b) list_double_large_graphic_phob2_pane_ParamLimits

0xd0cd,	// (0x0001aa8b) list_double_large_graphic_phob2_pane

0x922c,	// (0x00016bea) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x922c,	// (0x00016bea) list_double_large_graphic_phob2_pane_g1

0x9239,	// (0x00016bf7) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9239,	// (0x00016bf7) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x0001d8ec) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x0001d8ec) list_double_large_graphic_phob2_pane_g

0x9245,	// (0x00016c03) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9245,	// (0x00016c03) list_double_large_graphic_phob2_pane_t1

0x925a,	// (0x00016c18) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x925a,	// (0x00016c18) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x0001d8f1) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x0001d8f1) list_double_large_graphic_phob2_pane_t

0x9387,	// (0x00016d45) list_highlight_pane_cp024

0xf00d,	// (0x0001c9cb) phob2_cc_button_pane

0x926c,	// (0x00016c2a) phob2_cc_data_pane_g1_ParamLimits

0x926c,	// (0x00016c2a) phob2_cc_data_pane_g1

0x9281,	// (0x00016c3f) phob2_cc_data_pane_g2_ParamLimits

0x9281,	// (0x00016c3f) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x0001d8f6) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x0001d8f6) phob2_cc_data_pane_g

0x9293,	// (0x00016c51) phob2_cc_data_pane_t1_ParamLimits

0x9293,	// (0x00016c51) phob2_cc_data_pane_t1

0x92ab,	// (0x00016c69) phob2_cc_data_pane_t2_ParamLimits

0x92ab,	// (0x00016c69) phob2_cc_data_pane_t2

0x92c3,	// (0x00016c81) phob2_cc_data_pane_t3_ParamLimits

0x92c3,	// (0x00016c81) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x0001d8fb) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x0001d8fb) phob2_cc_data_pane_t

0xf015,	// (0x0001c9d3) phob2_cc_list_pane_ParamLimits

0xf015,	// (0x0001c9d3) phob2_cc_list_pane

0xd409,	// (0x0001adc7) scroll_pane_cp035_ParamLimits

0xd409,	// (0x0001adc7) scroll_pane_cp035

0x93f7,	// (0x00016db5) bg_button_pane_cp033

0xf021,	// (0x0001c9df) phob2_cc_button_pane_g1

0xf02d,	// (0x0001c9eb) phob2_cc_button_pane_t1

0xf042,	// (0x0001ca00) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x0001d902) phob2_cc_button_pane_t

0x92dd,	// (0x00016c9b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x92dd,	// (0x00016c9b) list_double_large_graphic_phob2_cc_pane

0x92f1,	// (0x00016caf) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x92f1,	// (0x00016caf) list_double_large_graphic_phob2_cc_pane_g1

0x92fd,	// (0x00016cbb) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x92fd,	// (0x00016cbb) list_double_large_graphic_phob2_cc_pane_g2

0x9309,	// (0x00016cc7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9309,	// (0x00016cc7) list_double_large_graphic_phob2_cc_pane_g3

0x9315,	// (0x00016cd3) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9315,	// (0x00016cd3) list_double_large_graphic_phob2_cc_pane_g4

0x9321,	// (0x00016cdf) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9321,	// (0x00016cdf) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x0001d907) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x0001d907) list_double_large_graphic_phob2_cc_pane_g

0x932d,	// (0x00016ceb) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x932d,	// (0x00016ceb) list_double_large_graphic_phob2_cc_pane_t1

0x9356,	// (0x00016d14) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9356,	// (0x00016d14) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x0001d912) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x0001d912) list_double_large_graphic_phob2_cc_pane_t

0xf054,	// (0x0001ca12) list_highlight_pane_cp025_ParamLimits

0xf054,	// (0x0001ca12) list_highlight_pane_cp025

0x93f7,	// (0x00016db5) bg_button_pane_cp033_ParamLimits

0xf021,	// (0x0001c9df) phob2_cc_button_pane_g1_ParamLimits

0xf02d,	// (0x0001c9eb) phob2_cc_button_pane_t1_ParamLimits

0xf042,	// (0x0001ca00) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x0001d902) phob2_cc_button_pane_t_ParamLimits

0x0fd2,	// (0x0000e990) popup_wgtman_window

0xd1af,	// (0x0001ab6d) scroll_pane_cp038

0x8e10,	// (0x000167ce) wgtman_btn_pane_cp_01_ParamLimits

0x8e10,	// (0x000167ce) wgtman_btn_pane_cp_01

0xf07d,	// (0x0001ca3b) wgtman_content_pane

0xf074,	// (0x0001ca32) wgtman_heading_pane

0x9387,	// (0x00016d45) bg_heading_pane_cp02

0xf086,	// (0x0001ca44) wgtman_heading_pane_g1

0xf08e,	// (0x0001ca4c) wgtman_heading_pane_t1

0xf09c,	// (0x0001ca5a) scroll_pane_cp036

0xf0a4,	// (0x0001ca62) wgtman_list_pane

0xf0ac,	// (0x0001ca6a) wgtman_list_pane_t1_ParamLimits

0xf0ac,	// (0x0001ca6a) wgtman_list_pane_t1

0xcf81,	// (0x0001a93f) cam4_grid_pane

0x6dd1,	// (0x0001478f) bg_button_pane_cp015_ParamLimits

0x6de5,	// (0x000147a3) bg_button_pane_cp016_ParamLimits

0x6df8,	// (0x000147b6) bg_button_pane_cp017_ParamLimits

0x6e50,	// (0x0001480e) popup_vitu2_query_window_g3_ParamLimits

0x6e50,	// (0x0001480e) popup_vitu2_query_window_g3

0x6f0d,	// (0x000148cb) popup_vitu2_query_window_t6_ParamLimits

0x6f0d,	// (0x000148cb) popup_vitu2_query_window_t6

0x6f38,	// (0x000148f6) popup_vitu2_query_window_t7_ParamLimits

0x6f38,	// (0x000148f6) popup_vitu2_query_window_t7

0xf062,	// (0x0001ca20) cam4_grid_pane_g1

0xf06b,	// (0x0001ca29) cam4_grid_pane_g2

0xf0ca,	// (0x0001ca88) cam4_grid_pane_g3

0xf0d3,	// (0x0001ca91) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x0001d917) cam4_grid_pane_g

0x1be0,	// (0x0000f59e) aid_placing_vt_slider_lsc_ParamLimits

0x1edd,	// (0x0000f89b) vidtel_button_pane_ParamLimits

0x1edd,	// (0x0000f89b) vidtel_button_pane

0x9387,	// (0x00016d45) bg_button_pane_cp034

0x937f,	// (0x00016d3d) vidtel_button_pane_g1

0xf0de,	// (0x0001ca9c) vidtel_button_pane_t1

0xd2ec,	// (0x0001acaa) aid_size_vtel_slider_touch

0xd409,	// (0x0001adc7) scroll_pane_cp039

0xde71,	// (0x0001b82f) ncim_query_button_pane_cp01_ParamLimits

0xde90,	// (0x0001b84e) ncimui_query_pane_g1_ParamLimits

0x93f7,	// (0x00016db5) input_focus_pane_cp012_ParamLimits

0xdeb5,	// (0x0001b873) ncim_query_entry_pane_t1_ParamLimits

0xd409,	// (0x0001adc7) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
