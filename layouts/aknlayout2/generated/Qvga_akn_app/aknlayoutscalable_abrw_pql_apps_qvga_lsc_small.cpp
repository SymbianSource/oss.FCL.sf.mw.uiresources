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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00053ee0 };

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
0x3309,	// (0x000571e9) Screen

0x3313,	// (0x000571f3) application_window

0x3349,	// (0x00057229) area_bottom_pane_ParamLimits

0x3349,	// (0x00057229) area_bottom_pane

0x337c,	// (0x0005725c) area_top_pane_ParamLimits

0x337c,	// (0x0005725c) area_top_pane

0xb786,	// (0x0005f666) call_video_uplink_pane_ParamLimits

0xb786,	// (0x0005f666) call_video_uplink_pane

0x33fc,	// (0x000572dc) main_pane_ParamLimits

0x33fc,	// (0x000572dc) main_pane

0x604b,	// (0x00059f2b) context_pane

0x605e,	// (0x00059f3e) navi_pane

0x6087,	// (0x00059f67) popup_cale_events_window_ParamLimits

0x6087,	// (0x00059f67) popup_cale_events_window

0x609f,	// (0x00059f7f) popup_mup_playback_window

0x60a7,	// (0x00059f87) signal_pane

0xbf46,	// (0x0005fe26) main_browser_pane

0x059a,	// (0x0005447a) main_burst_pane

0xb7a2,	// (0x0005f682) main_calc_pane

0x22e3,	// (0x000561c3) main_cale_day_pane

0x5df1,	// (0x00059cd1) main_cale_month_pane

0x22e3,	// (0x000561c3) main_cale_week_pane

0x059a,	// (0x0005447a) main_call_pane

0xbbcb,	// (0x0005faab) main_call_poc_pane

0x059a,	// (0x0005447a) main_camera_pane

0x059a,	// (0x0005447a) main_chi_dic_pane

0x0d7e,	// (0x00054c5e) main_clock_pane

0xbbcb,	// (0x0005faab) main_fmradio_pane

0x059a,	// (0x0005447a) main_graph_messa_pane

0xbbcb,	// (0x0005faab) main_help_pane

0xbf46,	// (0x0005fe26) main_im_pane

0xbe26,	// (0x0005fd06) main_image_pane_ParamLimits

0xbe26,	// (0x0005fd06) main_image_pane

0xbbcb,	// (0x0005faab) main_location2_pane

0x059a,	// (0x0005447a) main_location_pane

0xbe26,	// (0x0005fd06) main_messa_pane

0xbbcb,	// (0x0005faab) main_mp2_pane

0x059a,	// (0x0005447a) main_mp_pane

0xbbcb,	// (0x0005faab) main_msg_pane

0xbbcb,	// (0x0005faab) main_mup_eq_pane

0xbbcb,	// (0x0005faab) main_mup_pane

0xbf46,	// (0x0005fe26) main_notes_pane

0xbbcb,	// (0x0005faab) main_pec_pane

0xbbcb,	// (0x0005faab) main_phob_pane

0xbbcb,	// (0x0005faab) main_pinb_pane

0xbbcb,	// (0x0005faab) main_postcard_pane

0xbbcb,	// (0x0005faab) main_qdial_pane

0x059a,	// (0x0005447a) main_skin_pane

0xbbcb,	// (0x0005faab) main_smil2_pane

0x059a,	// (0x0005447a) main_smil_pane

0x059a,	// (0x0005447a) main_video_pane

0x059a,	// (0x0005447a) main_video_tele_pane

0xbe26,	// (0x0005fd06) main_viewer_pane_ParamLimits

0xbe26,	// (0x0005fd06) main_viewer_pane

0x059a,	// (0x0005447a) main_vorec_pane

0x5e3f,	// (0x00059d1f) popup_blid_sat_info_window_ParamLimits

0x5e3f,	// (0x00059d1f) popup_blid_sat_info_window

0x5e95,	// (0x00059d75) popup_dyc_status_message_window_ParamLimits

0x5e95,	// (0x00059d75) popup_dyc_status_message_window

0x5eab,	// (0x00059d8b) popup_grid_large_graphic_window_ParamLimits

0x5eab,	// (0x00059d8b) popup_grid_large_graphic_window

0x5f41,	// (0x00059e21) popup_loc_request_window_ParamLimits

0x5f41,	// (0x00059e21) popup_loc_request_window

0x6025,	// (0x00059f05) popup_wml_address_window_ParamLimits

0x6025,	// (0x00059f05) popup_wml_address_window

0x5c85,	// (0x00059b65) call_muted_g1

0x5965,	// (0x00059845) popup_call_audio_conf_window_ParamLimits

0x5965,	// (0x00059845) popup_call_audio_conf_window

0x5c95,	// (0x00059b75) popup_call_audio_first_window_ParamLimits

0x5c95,	// (0x00059b75) popup_call_audio_first_window

0x5cf3,	// (0x00059bd3) popup_call_audio_in_window_ParamLimits

0x5cf3,	// (0x00059bd3) popup_call_audio_in_window

0x5d1f,	// (0x00059bff) popup_call_audio_out_window_ParamLimits

0x5d1f,	// (0x00059bff) popup_call_audio_out_window

0x5d4d,	// (0x00059c2d) popup_call_audio_second_window_ParamLimits

0x5d4d,	// (0x00059c2d) popup_call_audio_second_window

0x5d93,	// (0x00059c73) popup_call_audio_wait_window_ParamLimits

0x5d93,	// (0x00059c73) popup_call_audio_wait_window

0x5dc6,	// (0x00059ca6) popup_number_entry_window_ParamLimits

0x5dc6,	// (0x00059ca6) popup_number_entry_window

0xb7ba,	// (0x0005f69a) bg_popup_call_pane_cp05_ParamLimits

0xb7ba,	// (0x0005f69a) bg_popup_call_pane_cp05

0xb7da,	// (0x0005f6ba) popup_number_entry_window_t1

0xb7ed,	// (0x0005f6cd) popup_number_entry_window_t2

0xb7ff,	// (0x0005f6df) popup_number_entry_window_t3

0x0003,

0xf05f,	// (0x00062f3f) popup_number_entry_window_t

0xb811,	// (0x0005f6f1) text_title_cp2

0xb824,	// (0x0005f704) bg_popup_call_pane_cp_ParamLimits

0xb824,	// (0x0005f704) bg_popup_call_pane_cp

0xb832,	// (0x0005f712) call_thumbnail_pane

0xb83a,	// (0x0005f71a) popup_call_audio_in_window_g1_ParamLimits

0xb83a,	// (0x0005f71a) popup_call_audio_in_window_g1

0xb846,	// (0x0005f726) popup_call_audio_in_window_g2_ParamLimits

0xb846,	// (0x0005f726) popup_call_audio_in_window_g2

0xb852,	// (0x0005f732) popup_call_audio_in_window_g3_ParamLimits

0xb852,	// (0x0005f732) popup_call_audio_in_window_g3

0x0002,

0xf068,	// (0x00062f48) popup_call_audio_in_window_g_ParamLimits

0xf068,	// (0x00062f48) popup_call_audio_in_window_g

0xb85e,	// (0x0005f73e) popup_call_audio_in_window_t1_ParamLimits

0xb85e,	// (0x0005f73e) popup_call_audio_in_window_t1

0xb879,	// (0x0005f759) popup_call_audio_in_window_t2_ParamLimits

0xb879,	// (0x0005f759) popup_call_audio_in_window_t2

0xb894,	// (0x0005f774) popup_call_audio_in_window_t3_ParamLimits

0xb894,	// (0x0005f774) popup_call_audio_in_window_t3

0x0002,

0xf06f,	// (0x00062f4f) popup_call_audio_in_window_t_ParamLimits

0xf06f,	// (0x00062f4f) popup_call_audio_in_window_t

0xb824,	// (0x0005f704) bg_popup_call_pane_cp01_ParamLimits

0xb824,	// (0x0005f704) bg_popup_call_pane_cp01

0xb832,	// (0x0005f712) call_thumbnail_pane_cp02

0xb8a7,	// (0x0005f787) call_type_pane_cp022

0xb8af,	// (0x0005f78f) popup_call_audio_out_window_g1_ParamLimits

0xb8af,	// (0x0005f78f) popup_call_audio_out_window_g1

0xb8c1,	// (0x0005f7a1) popup_call_audio_out_window_g2_ParamLimits

0xb8c1,	// (0x0005f7a1) popup_call_audio_out_window_g2

0xb8cd,	// (0x0005f7ad) popup_call_audio_out_window_g3_ParamLimits

0xb8cd,	// (0x0005f7ad) popup_call_audio_out_window_g3

0x0002,

0xf076,	// (0x00062f56) popup_call_audio_out_window_g_ParamLimits

0xf076,	// (0x00062f56) popup_call_audio_out_window_g

0xb8df,	// (0x0005f7bf) popup_call_audio_out_window_t1_ParamLimits

0xb8df,	// (0x0005f7bf) popup_call_audio_out_window_t1

0xb8f7,	// (0x0005f7d7) popup_call_audio_out_window_t2_ParamLimits

0xb8f7,	// (0x0005f7d7) popup_call_audio_out_window_t2

0x0001,

0xf07d,	// (0x00062f5d) popup_call_audio_out_window_t_ParamLimits

0xf07d,	// (0x00062f5d) popup_call_audio_out_window_t

0xb90c,	// (0x0005f7ec) bg_popup_call_pane_ParamLimits

0xb90c,	// (0x0005f7ec) bg_popup_call_pane

0x3584,	// (0x00057464) call_thumbnail_pane_cp_ParamLimits

0x3584,	// (0x00057464) call_thumbnail_pane_cp

0xb990,	// (0x0005f870) call_type_pane_cp01_ParamLimits

0xb990,	// (0x0005f870) call_type_pane_cp01

0xb9d4,	// (0x0005f8b4) popup_call_audio_first_window_g1_ParamLimits

0xb9d4,	// (0x0005f8b4) popup_call_audio_first_window_g1

0xba20,	// (0x0005f900) popup_call_audio_first_window_g2_ParamLimits

0xba20,	// (0x0005f900) popup_call_audio_first_window_g2

0x0001,

0xf082,	// (0x00062f62) popup_call_audio_first_window_g_ParamLimits

0xf082,	// (0x00062f62) popup_call_audio_first_window_g

0xba64,	// (0x0005f944) popup_call_audio_first_window_t1_ParamLimits

0xba64,	// (0x0005f944) popup_call_audio_first_window_t1

0xbb10,	// (0x0005f9f0) popup_call_audio_first_window_t4_ParamLimits

0xbb10,	// (0x0005f9f0) popup_call_audio_first_window_t4

0xbb9c,	// (0x0005fa7c) popup_call_audio_first_window_t5_ParamLimits

0xbb9c,	// (0x0005fa7c) popup_call_audio_first_window_t5

0x0002,

0xf087,	// (0x00062f67) popup_call_audio_first_window_t_ParamLimits

0xf087,	// (0x00062f67) popup_call_audio_first_window_t

0xbbcb,	// (0x0005faab) bg_popup_call_pane_cp02

0xbbd5,	// (0x0005fab5) call_type_pane_cp023

0xbbdd,	// (0x0005fabd) popup_call_audio_wait_window_g1

0xbbe5,	// (0x0005fac5) popup_call_audio_wait_window_g2

0x0001,

0xf08e,	// (0x00062f6e) popup_call_audio_wait_window_g

0xbbed,	// (0x0005facd) popup_call_audio_wait_window_t3

0xbbfb,	// (0x0005fadb) bg_popup_call_pane_cp03_ParamLimits

0xbbfb,	// (0x0005fadb) bg_popup_call_pane_cp03

0xbc5b,	// (0x0005fb3b) call_thumbnail_pane_cp011_ParamLimits

0xbc5b,	// (0x0005fb3b) call_thumbnail_pane_cp011

0xbc67,	// (0x0005fb47) call_type_pane_cp034_ParamLimits

0xbc67,	// (0x0005fb47) call_type_pane_cp034

0xbca3,	// (0x0005fb83) popup_call_audio_second_window_g1_ParamLimits

0xbca3,	// (0x0005fb83) popup_call_audio_second_window_g1

0xbcdf,	// (0x0005fbbf) popup_call_audio_second_window_g2_ParamLimits

0xbcdf,	// (0x0005fbbf) popup_call_audio_second_window_g2

0x0001,

0xf093,	// (0x00062f73) popup_call_audio_second_window_g_ParamLimits

0xf093,	// (0x00062f73) popup_call_audio_second_window_g

0xbd1b,	// (0x0005fbfb) popup_call_audio_second_window_t1_ParamLimits

0xbd1b,	// (0x0005fbfb) popup_call_audio_second_window_t1

0xbd9c,	// (0x0005fc7c) popup_call_audio_second_window_t2_ParamLimits

0xbd9c,	// (0x0005fc7c) popup_call_audio_second_window_t2

0xbdd2,	// (0x0005fcb2) popup_call_audio_second_window_t3_ParamLimits

0xbdd2,	// (0x0005fcb2) popup_call_audio_second_window_t3

0x0002,

0xf098,	// (0x00062f78) popup_call_audio_second_window_t_ParamLimits

0xf098,	// (0x00062f78) popup_call_audio_second_window_t

0xbbcb,	// (0x0005faab) bg_popup_call_pane_cp04

0xbe08,	// (0x0005fce8) list_conf_pane

0xbe10,	// (0x0005fcf0) popup_call_audio_conf_window_t1

0xbe1e,	// (0x0005fcfe) call_thumbnail_pane_g1

0xbe26,	// (0x0005fd06) bg_pinb_pane_ParamLimits

0xbe26,	// (0x0005fd06) bg_pinb_pane

0xbe34,	// (0x0005fd14) find_pinb_pane

0xbe26,	// (0x0005fd06) listscroll_pinb_pane_ParamLimits

0xbe26,	// (0x0005fd06) listscroll_pinb_pane

0xbe3e,	// (0x0005fd1e) pinb_bg_pane_g1

0xbe3e,	// (0x0005fd1e) pinb_bg_pane_g2

0xbe3e,	// (0x0005fd1e) pinb_bg_pane_g3

0xbe3e,	// (0x0005fd1e) pinb_bg_pane_g4

0xbe3e,	// (0x0005fd1e) pinb_bg_pane_g5

0xbe3e,	// (0x0005fd1e) pinb_bg_pane_g6

0xbe3e,	// (0x0005fd1e) pinb_bg_pane_g7

0xbe3e,	// (0x0005fd1e) pinb_bg_pane_g8

0xbe3e,	// (0x0005fd1e) pinb_bg_pane_g9

0xbe3e,	// (0x0005fd1e) pinb_bg_pane_g10

0x0009,

0xf09f,	// (0x00062f7f) pinb_bg_pane_g

0x35b3,	// (0x00057493) grid_pinb_pane

0xb747,	// (0x0005f627) list_pinb_pane

0xbe48,	// (0x0005fd28) scroll_pane_cp01_ParamLimits

0xbe48,	// (0x0005fd28) scroll_pane_cp01

0xbe55,	// (0x0005fd35) find_pinb_pane_g1_ParamLimits

0xbe55,	// (0x0005fd35) find_pinb_pane_g1

0xbe6d,	// (0x0005fd4d) find_pinb_pane_t1

0xbe7f,	// (0x0005fd5f) find_pinb_pane_t2

0x0001,

0xf0b9,	// (0x00062f99) find_pinb_pane_t

0xbe94,	// (0x0005fd74) input_focus_pane_cp01_ParamLimits

0xbe94,	// (0x0005fd74) input_focus_pane_cp01

0x35bd,	// (0x0005749d) cell_pinb_pane_ParamLimits

0x35bd,	// (0x0005749d) cell_pinb_pane

0xbea0,	// (0x0005fd80) cell_pinb_pane_g1_ParamLimits

0xbea0,	// (0x0005fd80) cell_pinb_pane_g1

0xbeae,	// (0x0005fd8e) cell_pinb_pane_g2_ParamLimits

0xbeae,	// (0x0005fd8e) cell_pinb_pane_g2

0xbeae,	// (0x0005fd8e) cell_pinb_pane_g3_ParamLimits

0xbeae,	// (0x0005fd8e) cell_pinb_pane_g3

0x0002,

0xf0be,	// (0x00062f9e) cell_pinb_pane_g_ParamLimits

0xf0be,	// (0x00062f9e) cell_pinb_pane_g

0xbbcb,	// (0x0005faab) grid_highlight_pane_cp01

0xbebc,	// (0x0005fd9c) list_pinb_item_pane_ParamLimits

0xbebc,	// (0x0005fd9c) list_pinb_item_pane

0xb747,	// (0x0005f627) list_highlight_pane_cp02

0xbeca,	// (0x0005fdaa) list_pinb_item_pane_g1_ParamLimits

0xbeca,	// (0x0005fdaa) list_pinb_item_pane_g1

0xbeae,	// (0x0005fd8e) list_pinb_item_pane_g2_ParamLimits

0xbeae,	// (0x0005fd8e) list_pinb_item_pane_g2

0xbea0,	// (0x0005fd80) list_pinb_item_pane_g3_ParamLimits

0xbea0,	// (0x0005fd80) list_pinb_item_pane_g3

0xbeae,	// (0x0005fd8e) list_pinb_item_pane_g4_ParamLimits

0xbeae,	// (0x0005fd8e) list_pinb_item_pane_g4

0x0003,

0xf0c5,	// (0x00062fa5) list_pinb_item_pane_g_ParamLimits

0xf0c5,	// (0x00062fa5) list_pinb_item_pane_g

0xbed8,	// (0x0005fdb8) list_pinb_item_pane_t1_ParamLimits

0xbed8,	// (0x0005fdb8) list_pinb_item_pane_t1

0x35f1,	// (0x000574d1) calc_display_pane

0x360d,	// (0x000574ed) calc_paper_pane

0x362e,	// (0x0005750e) grid_calc_pane

0xbbcb,	// (0x0005faab) bg_list_pane_cp01

0x364a,	// (0x0005752a) clock_g1

0x3652,	// (0x00057532) clock_g2

0x0001,

0xf0ce,	// (0x00062fae) clock_g

0x365a,	// (0x0005753a) clock_t1_ParamLimits

0x365a,	// (0x0005753a) clock_t1

0x366f,	// (0x0005754f) clock_t2_ParamLimits

0x366f,	// (0x0005754f) clock_t2

0x3681,	// (0x00057561) clock_t3_ParamLimits

0x3681,	// (0x00057561) clock_t3

0x3693,	// (0x00057573) clock_t4_ParamLimits

0x3693,	// (0x00057573) clock_t4

0x36a5,	// (0x00057585) clock_t5_ParamLimits

0x36a5,	// (0x00057585) clock_t5

0x36ba,	// (0x0005759a) clock_t6_ParamLimits

0x36ba,	// (0x0005759a) clock_t6

0x36cc,	// (0x000575ac) clock_t7_ParamLimits

0x36cc,	// (0x000575ac) clock_t7

0x36de,	// (0x000575be) clock_t8_ParamLimits

0x36de,	// (0x000575be) clock_t8

0x36f0,	// (0x000575d0) clock_t9_ParamLimits

0x36f0,	// (0x000575d0) clock_t9

0x0008,

0xf0d3,	// (0x00062fb3) clock_t_ParamLimits

0xf0d3,	// (0x00062fb3) clock_t

0xbef4,	// (0x0005fdd4) popup_clock_analogue_window_cp02

0xbef4,	// (0x0005fdd4) popup_clock_digital_window_cp01

0xbbcb,	// (0x0005faab) listscroll_help_pane

0xbbcb,	// (0x0005faab) phob_pre_status_pane

0xbefc,	// (0x0005fddc) grid_qdial_pane

0xbe26,	// (0x0005fd06) listscroll_mce_pane

0xbe26,	// (0x0005fd06) bg_notes_pane

0xbf06,	// (0x0005fde6) list_notes_pane

0x3702,	// (0x000575e2) scroll_pane_cp06

0xbf14,	// (0x0005fdf4) bg_calc_paper_pane

0xbf2c,	// (0x0005fe0c) list_calc_pane

0xbf46,	// (0x0005fe26) bg_calc_display_pane

0xbf52,	// (0x0005fe32) calc_display_pane_t1

0xbf67,	// (0x0005fe47) calc_display_pane_t2

0xbf7c,	// (0x0005fe5c) calc_display_pane_t3

0x0002,

0xf0e6,	// (0x00062fc6) calc_display_pane_t

0x3714,	// (0x000575f4) cell_calc_pane_ParamLimits

0x3714,	// (0x000575f4) cell_calc_pane

0xbf8e,	// (0x0005fe6e) bg_calc_paper_pane_g1

0xbf9a,	// (0x0005fe7a) bg_calc_paper_pane_g2

0xbfa6,	// (0x0005fe86) bg_calc_paper_pane_g3

0xbfb2,	// (0x0005fe92) bg_calc_paper_pane_g4

0xbfbe,	// (0x0005fe9e) bg_calc_paper_pane_g5

0x3747,	// (0x00057627) bg_calc_paper_pane_g6

0x3756,	// (0x00057636) bg_calc_paper_pane_g7

0x3765,	// (0x00057645) bg_calc_paper_pane_g8

0x0007,

0xf0ed,	// (0x00062fcd) bg_calc_paper_pane_g

0x3774,	// (0x00057654) calc_bg_paper_pane_g9

0x3783,	// (0x00057663) list_calc_item_pane_ParamLimits

0x3783,	// (0x00057663) list_calc_item_pane

0xbfca,	// (0x0005feaa) list_calc_item_pane_g1

0xbfd7,	// (0x0005feb7) list_calc_item_pane_t1_ParamLimits

0xbfd7,	// (0x0005feb7) list_calc_item_pane_t1

0x3797,	// (0x00057677) list_calc_item_pane_t2_ParamLimits

0x3797,	// (0x00057677) list_calc_item_pane_t2

0x0001,

0xf0fe,	// (0x00062fde) list_calc_item_pane_t_ParamLimits

0xf0fe,	// (0x00062fde) list_calc_item_pane_t

0xbe3e,	// (0x0005fd1e) cell_calc_pane_g1

0xbfe9,	// (0x0005fec9) grid_highlight_pane_cp02

0xc00b,	// (0x0005feeb) bg_calc_display_pane_g1

0xc014,	// (0x0005fef4) bg_calc_display_pane_g2

0xc01e,	// (0x0005fefe) bg_calc_display_pane_g3

0x0002,

0xf108,	// (0x00062fe8) bg_calc_display_pane_g

0x37c5,	// (0x000576a5) cell_qdial_pane_ParamLimits

0x37c5,	// (0x000576a5) cell_qdial_pane

0x37d7,	// (0x000576b7) cell_qdial_pane_g1_ParamLimits

0x37d7,	// (0x000576b7) cell_qdial_pane_g1

0x37ed,	// (0x000576cd) cell_qdial_pane_g2_ParamLimits

0x37ed,	// (0x000576cd) cell_qdial_pane_g2

0xc027,	// (0x0005ff07) cell_qdial_pane_g3_ParamLimits

0xc027,	// (0x0005ff07) cell_qdial_pane_g3

0x0003,

0xf10f,	// (0x00062fef) cell_qdial_pane_g_ParamLimits

0xf10f,	// (0x00062fef) cell_qdial_pane_g

0x3814,	// (0x000576f4) cell_qdial_pane_t1_ParamLimits

0x3814,	// (0x000576f4) cell_qdial_pane_t1

0x382c,	// (0x0005770c) cell_qdial_pane_t2_ParamLimits

0x382c,	// (0x0005770c) cell_qdial_pane_t2

0x383f,	// (0x0005771f) cell_qdial_pane_t3_ParamLimits

0x383f,	// (0x0005771f) cell_qdial_pane_t3

0x0002,

0xf118,	// (0x00062ff8) cell_qdial_pane_t_ParamLimits

0xf118,	// (0x00062ff8) cell_qdial_pane_t

0xbbcb,	// (0x0005faab) grid_highlight_pane_cp04

0xc033,	// (0x0005ff13) thumbnail_qdial_pane_ParamLimits

0xc033,	// (0x0005ff13) thumbnail_qdial_pane

0xc08f,	// (0x0005ff6f) list_help_pane

0xc099,	// (0x0005ff79) scroll_pane_cp02

0x3852,	// (0x00057732) help_list_pane_t1_ParamLimits

0x3852,	// (0x00057732) help_list_pane_t1

0xc0a2,	// (0x0005ff82) bg_notes_pane_g2

0xc0aa,	// (0x0005ff8a) bg_notes_pane_g3

0xc0b2,	// (0x0005ff92) notes_bg_pane_g1

0xc0ba,	// (0x0005ff9a) notes_bg_pane_g4

0xc0c2,	// (0x0005ffa2) notes_bg_pane_g5

0xc0ca,	// (0x0005ffaa) notes_bg_pane_g6

0xc0d2,	// (0x0005ffb2) notes_bg_pane_g7

0xc0da,	// (0x0005ffba) notes_bg_pane_g8

0xc0e2,	// (0x0005ffc2) notes_bg_pane_g9

0x0006,

0xf136,	// (0x00063016) notes_bg_pane_g

0x386f,	// (0x0005774f) list_notes_text_pane_ParamLimits

0x386f,	// (0x0005774f) list_notes_text_pane

0xc0ea,	// (0x0005ffca) list_notes_text_pane_g1

0x3892,	// (0x00057772) list_notes_text_pane_t1

0x38a0,	// (0x00057780) listscroll_cale_week_pane

0x38ca,	// (0x000577aa) bg_cale_heading_pane

0xc10d,	// (0x0005ffed) bg_cale_pane_cp01

0x38e2,	// (0x000577c2) cale_week_corner_pane

0x3901,	// (0x000577e1) cale_week_day_heading_pane

0x391e,	// (0x000577fe) cale_week_scroll_pane_g1

0x3931,	// (0x00057811) cale_week_scroll_pane_g2

0x3949,	// (0x00057829) cale_week_scroll_pane_g3

0x3961,	// (0x00057841) cale_week_scroll_pane_g4

0x3979,	// (0x00057859) cale_week_scroll_pane_g5

0x3991,	// (0x00057871) cale_week_scroll_pane_g6

0x39a9,	// (0x00057889) cale_week_scroll_pane_g7

0x39c1,	// (0x000578a1) cale_week_scroll_pane_g8

0x39dd,	// (0x000578bd) cale_week_scroll_pane_g9

0x39f5,	// (0x000578d5) cale_week_scroll_pane_g10

0x3a0d,	// (0x000578ed) cale_week_scroll_pane_g11

0x3a25,	// (0x00057905) cale_week_scroll_pane_g12

0x3a3d,	// (0x0005791d) cale_week_scroll_pane_g13

0x3a55,	// (0x00057935) cale_week_scroll_pane_g14

0x3a6d,	// (0x0005794d) cale_week_scroll_pane_g15

0x000f,

0xf145,	// (0x00063025) cale_week_scroll_pane_g

0x3aa1,	// (0x00057981) cale_week_time_pane

0x3abd,	// (0x0005799d) grid_cale_week_pane

0xc13c,	// (0x0006001c) scroll_pane_cp08

0x3adb,	// (0x000579bb) cell_cale_week_pane_ParamLimits

0x3adb,	// (0x000579bb) cell_cale_week_pane

0x3b51,	// (0x00057a31) cale_week_day_heading_pane_t1

0x3b7b,	// (0x00057a5b) cale_week_day_heading_pane_t2

0x3baa,	// (0x00057a8a) cale_week_day_heading_pane_t3

0x3bd9,	// (0x00057ab9) cale_week_day_heading_pane_t4

0x3c08,	// (0x00057ae8) cale_week_day_heading_pane_t5

0x3c37,	// (0x00057b17) cale_week_day_heading_pane_t6

0x3c66,	// (0x00057b46) cale_week_day_heading_pane_t7

0x0006,

0xf166,	// (0x00063046) cale_week_day_heading_pane_t

0xc159,	// (0x00060039) bg_cale_side_pane

0x3c90,	// (0x00057b70) cale_week_time_pane_t1

0x3cca,	// (0x00057baa) cale_week_time_pane_t2

0x3d04,	// (0x00057be4) cale_week_time_pane_t3

0x3d3e,	// (0x00057c1e) cale_week_time_pane_t4

0x3d78,	// (0x00057c58) cale_week_time_pane_t5

0x3db2,	// (0x00057c92) cale_week_time_pane_t6

0x3dec,	// (0x00057ccc) cale_week_time_pane_t7

0x3e26,	// (0x00057d06) cale_week_time_pane_t8

0x0007,

0xf175,	// (0x00063055) cale_week_time_pane_t

0x3e60,	// (0x00057d40) cell_cale_week_pane_g2

0x3e7f,	// (0x00057d5f) cell_cale_week_pane_g3_ParamLimits

0x3e7f,	// (0x00057d5f) cell_cale_week_pane_g3

0xc167,	// (0x00060047) grid_highlight_pane_cp07

0xc16f,	// (0x0006004f) listscroll_gms_pane

0xc179,	// (0x00060059) grid_gms_pane

0xc182,	// (0x00060062) listscroll_gms_pane_g1

0xc18a,	// (0x0006006a) listscroll_gms_pane_g2

0x0001,

0xf186,	// (0x00063066) listscroll_gms_pane_g

0x3e97,	// (0x00057d77) scroll_pane_cp010

0x3ea2,	// (0x00057d82) cell_gms_pane_ParamLimits

0x3ea2,	// (0x00057d82) cell_gms_pane

0x3eb2,	// (0x00057d92) cell_gms_pane_g1

0xc192,	// (0x00060072) cell_gms_pane_g2

0xc0ea,	// (0x0005ffca) cell_gms_pane_g3

0xc19a,	// (0x0006007a) cell_gms_pane_g4

0x0003,

0xf18b,	// (0x0006306b) cell_gms_pane_g

0xc1a3,	// (0x00060083) grid_highlight_pane_cp09

0x5c13,	// (0x00059af3) phob_pre_status_pane_g1

0x5c1b,	// (0x00059afb) phob_pre_status_pane_g2

0x5c23,	// (0x00059b03) phob_pre_status_pane_g3

0x5c2b,	// (0x00059b0b) phob_pre_status_pane_g4

0x0004,

0xf579,	// (0x00063459) phob_pre_status_pane_g

0x5c3b,	// (0x00059b1b) phob_pre_status_pane_t1

0x5c49,	// (0x00059b29) phob_pre_status_pane_t2

0x5c57,	// (0x00059b37) phob_pre_status_pane_t3

0x0002,

0xf584,	// (0x00063464) phob_pre_status_pane_t

0x059a,	// (0x0005447a) bg_list_pane_cp05

0x3ec2,	// (0x00057da2) grid_vorec_pane

0x05a2,	// (0x00054482) vorec_t1

0x05b0,	// (0x00054490) vorec_t2

0x05be,	// (0x0005449e) vorec_t3

0x3eca,	// (0x00057daa) vorec_t4

0xafc6,	// (0x0005eea6) vorec_t5

0xafd4,	// (0x0005eeb4) vorec_t6

0x0004,

0xf194,	// (0x00063074) vorec_t

0xafe2,	// (0x0005eec2) wait_bar_pane_cp01

0x3ed8,	// (0x00057db8) cell_vorec_pane_ParamLimits

0x3ed8,	// (0x00057db8) cell_vorec_pane

0xc1ab,	// (0x0006008b) cell_vorec_pane_g1

0xbbcb,	// (0x0005faab) grid_highlight_pane_cp05

0x106c,	// (0x00054f4c) cams_zoom_pane

0x106c,	// (0x00054f4c) image_vga_pane

0xbea0,	// (0x0005fd80) main_camera_pane_g1

0xbea0,	// (0x0005fd80) main_camera_pane_g2

0xbea0,	// (0x0005fd80) main_camera_pane_g3

0xbea0,	// (0x0005fd80) main_camera_pane_g4

0xbea0,	// (0x0005fd80) main_camera_pane_g5

0xbea0,	// (0x0005fd80) main_camera_pane_g6

0xbea0,	// (0x0005fd80) main_camera_pane_g7

0x0007,

0xf19f,	// (0x0006307f) main_camera_pane_g

0x1058,	// (0x00054f38) main_camera_pane_t1

0x1058,	// (0x00054f38) main_camera_pane_t2

0x0001,

0xf1b0,	// (0x00063090) main_camera_pane_t

0x3eff,	// (0x00057ddf) cams_zoom_pane_cp_ParamLimits

0x3eff,	// (0x00057ddf) cams_zoom_pane_cp

0x3f33,	// (0x00057e13) image_cif_pane_ParamLimits

0x3f33,	// (0x00057e13) image_cif_pane

0xb747,	// (0x0005f627) image_subqcif_pane

0x3f45,	// (0x00057e25) main_video_pane_g1_ParamLimits

0x3f45,	// (0x00057e25) main_video_pane_g1

0x3f73,	// (0x00057e53) main_video_pane_g2_ParamLimits

0x3f73,	// (0x00057e53) main_video_pane_g2

0x3fad,	// (0x00057e8d) main_video_pane_g3_ParamLimits

0x3fad,	// (0x00057e8d) main_video_pane_g3

0x3fad,	// (0x00057e8d) main_video_pane_g4_ParamLimits

0x3fad,	// (0x00057e8d) main_video_pane_g4

0x3fe1,	// (0x00057ec1) main_video_pane_g5_ParamLimits

0x3fe1,	// (0x00057ec1) main_video_pane_g5

0x0601,	// (0x000544e1) main_video_pane_g6_ParamLimits

0x0601,	// (0x000544e1) main_video_pane_g6

0x0006,

0xf1b5,	// (0x00063095) main_video_pane_g_ParamLimits

0xf1b5,	// (0x00063095) main_video_pane_g

0x3ffd,	// (0x00057edd) main_video_pane_t1_ParamLimits

0x3ffd,	// (0x00057edd) main_video_pane_t1

0x061b,	// (0x000544fb) cams_zoom_pane_g1

0x061b,	// (0x000544fb) cams_zoom_pane_g2

0x061b,	// (0x000544fb) cams_zoom_pane_g3

0x061b,	// (0x000544fb) cams_zoom_pane_g4

0x0003,

0xf1c4,	// (0x000630a4) cams_zoom_pane_g

0x4055,	// (0x00057f35) grid_cams_pane

0x406a,	// (0x00057f4a) linegrid_cams_pane

0x407b,	// (0x00057f5b) cell_cams_pane_ParamLimits

0x407b,	// (0x00057f5b) cell_cams_pane

0x0625,	// (0x00054505) cams_burst_image_pane

0x062d,	// (0x0005450d) cell_cams_pane_g1

0xbbcb,	// (0x0005faab) grid_highlight_pane_cp03

0xbe3e,	// (0x0005fd1e) mp_bg_pane_g1

0xb747,	// (0x0005f627) bg_list_pane_cp03

0xb747,	// (0x0005f627) bg_mp_pane

0xb747,	// (0x0005f627) grid_mp_pane

0x061b,	// (0x000544fb) media_player_g1

0x228b,	// (0x0005616b) media_player_t1

0x228b,	// (0x0005616b) media_player_t2

0x228b,	// (0x0005616b) media_player_t3

0x228b,	// (0x0005616b) media_player_t4

0x228b,	// (0x0005616b) media_player_t5

0x228b,	// (0x0005616b) media_player_t6

0x228b,	// (0x0005616b) media_player_t7

0x0006,

0xf563,	// (0x00063443) media_player_t

0xb747,	// (0x0005f627) wait_bar_pane_cp02

0xf548,	// (0x00063428) main_usb_pane_t

0x0d7e,	// (0x00054c5e) cell_mp_pane

0xbe3e,	// (0x0005fd1e) cell_mp_pane_g1

0xbbcb,	// (0x0005faab) grid_highlight_pane_cp06

0x0635,	// (0x00054515) grid_skin_colour_pane

0x063d,	// (0x0005451d) list_highlight_pane_cp03

0x40d7,	// (0x00057fb7) skin_g1

0x0645,	// (0x00054525) skin_t1

0x0654,	// (0x00054534) skin_t2

0x0001,

0xf1f2,	// (0x000630d2) skin_t

0x40df,	// (0x00057fbf) cell_skin_colour_pane_ParamLimits

0x40df,	// (0x00057fbf) cell_skin_colour_pane

0x0662,	// (0x00054542) cell_skin_colour_pane_g1

0x4148,	// (0x00058028) call_video_g1_ParamLimits

0x4148,	// (0x00058028) call_video_g1

0x415e,	// (0x0005803e) call_video_g2_ParamLimits

0x415e,	// (0x0005803e) call_video_g2

0x0001,

0xf1f7,	// (0x000630d7) call_video_g_ParamLimits

0xf1f7,	// (0x000630d7) call_video_g

0x41a6,	// (0x00058086) call_video_uplink_pane_cp1_ParamLimits

0x41a6,	// (0x00058086) call_video_uplink_pane_cp1

0x0674,	// (0x00054554) call_video_uplink_pane_cp2

0x423b,	// (0x0005811b) video_down_crop_pane_ParamLimits

0x423b,	// (0x0005811b) video_down_crop_pane

0x42fe,	// (0x000581de) video_down_pane_ParamLimits

0x42fe,	// (0x000581de) video_down_pane

0x067c,	// (0x0005455c) video_down_subqcif_pane_ParamLimits

0x067c,	// (0x0005455c) video_down_subqcif_pane

0x0694,	// (0x00054574) video_down_subqcif_pane_cp_ParamLimits

0x0694,	// (0x00054574) video_down_subqcif_pane_cp

0x06b8,	// (0x00054598) im_reading_pane_ParamLimits

0x06b8,	// (0x00054598) im_reading_pane

0x43bb,	// (0x0005829b) im_writing_pane_ParamLimits

0x43bb,	// (0x0005829b) im_writing_pane

0x43d1,	// (0x000582b1) im_reading_pane_t1

0x06d2,	// (0x000545b2) list_im_pane

0x06e3,	// (0x000545c3) scroll_pane_cp07

0x4407,	// (0x000582e7) im_writing_pane_t1_ParamLimits

0x4407,	// (0x000582e7) im_writing_pane_t1

0x06fc,	// (0x000545dc) im_writing_pane_t2_ParamLimits

0x06fc,	// (0x000545dc) im_writing_pane_t2

0x0001,

0xf201,	// (0x000630e1) im_writing_pane_t_ParamLimits

0xf201,	// (0x000630e1) im_writing_pane_t

0xbbcb,	// (0x0005faab) input_focus_pane_cp04

0xbbcb,	// (0x0005faab) input_focus_pane_cp05

0x441c,	// (0x000582fc) list_im_single_pane_ParamLimits

0x441c,	// (0x000582fc) list_im_single_pane

0x0719,	// (0x000545f9) list_single_im_pane_t1

0x059a,	// (0x0005447a) blid_accuracy_pane

0x059a,	// (0x0005447a) blid_compass_pane

0x229b,	// (0x0005617b) main_location_t1

0x229b,	// (0x0005617b) main_location_t2

0x229b,	// (0x0005617b) main_location_t3

0x0002,

0xf572,	// (0x00063452) main_location_t

0xbbcb,	// (0x0005faab) aid_levels_location

0xbe3e,	// (0x0005fd1e) blid_accuracy_pane_g1

0xbe3e,	// (0x0005fd1e) blid_accuracy_pane_g2

0x0001,

0xf255,	// (0x00063135) blid_accuracy_pane_g

0x0753,	// (0x00054633) wml_content_pane

0x0791,	// (0x00054671) wml_button_pane_ParamLimits

0x0791,	// (0x00054671) wml_button_pane

0x4432,	// (0x00058312) wml_list_single_large_pane_ParamLimits

0x4432,	// (0x00058312) wml_list_single_large_pane

0x4446,	// (0x00058326) wml_list_single_medium_pane_ParamLimits

0x4446,	// (0x00058326) wml_list_single_medium_pane

0x445b,	// (0x0005833b) wml_list_single_small_pane_ParamLimits

0x445b,	// (0x0005833b) wml_list_single_small_pane

0x07a5,	// (0x00054685) wml_selection_box_pane_ParamLimits

0x07a5,	// (0x00054685) wml_selection_box_pane

0x07b8,	// (0x00054698) wml_list_single_pane_t1

0x07c7,	// (0x000546a7) wml_list_single_medium_pane_t1

0x07d6,	// (0x000546b6) wml_list_single_large_pane_t1

0x07e5,	// (0x000546c5) input_focus_pane_cp02_ParamLimits

0x07e5,	// (0x000546c5) input_focus_pane_cp02

0x07f8,	// (0x000546d8) wml_selection_box_pane_g1

0x0801,	// (0x000546e1) wml_selection_box_pane_t1_ParamLimits

0x0801,	// (0x000546e1) wml_selection_box_pane_t1

0xbe26,	// (0x0005fd06) bg_wml_button_pane_ParamLimits

0xbe26,	// (0x0005fd06) bg_wml_button_pane

0x0819,	// (0x000546f9) wml_button_pane_g1

0x0821,	// (0x00054701) wml_button_pane_t1

0x0819,	// (0x000546f9) wml_button_bg_pane_g1

0x0831,	// (0x00054711) wml_button_bg_pane_g2

0x0839,	// (0x00054719) wml_button_bg_pane_g3

0x0841,	// (0x00054721) wml_button_bg_pane_g4

0x0849,	// (0x00054729) wml_button_bg_pane_g5

0x0851,	// (0x00054731) wml_button_bg_pane_g6

0x0859,	// (0x00054739) wml_button_bg_pane_g7

0x0861,	// (0x00054741) wml_button_bg_pane_g8

0x0869,	// (0x00054749) wml_button_bg_pane_g9

0x0008,

0xf206,	// (0x000630e6) wml_button_bg_pane_g

0x4472,	// (0x00058352) bg_list_pane_cp02

0x0871,	// (0x00054751) mce_header_pane_ParamLimits

0x0871,	// (0x00054751) mce_header_pane

0x0885,	// (0x00054765) mce_icon_pane

0x0885,	// (0x00054765) mce_image_pane

0x088e,	// (0x0005476e) mce_text_pane_ParamLimits

0x088e,	// (0x0005476e) mce_text_pane

0x447b,	// (0x0005835b) scroll_pane_cp03

0x447b,	// (0x0005835b) scroll_pane_cp04

0x08a2,	// (0x00054782) scroll_pane_cp05_ParamLimits

0x08a2,	// (0x00054782) scroll_pane_cp05

0x4485,	// (0x00058365) mce_header_field_pane_ParamLimits

0x4485,	// (0x00058365) mce_header_field_pane

0x449c,	// (0x0005837c) mce_header_field_pane_2_ParamLimits

0x449c,	// (0x0005837c) mce_header_field_pane_2

0x44b2,	// (0x00058392) mce_header_field_pane_3

0x44ba,	// (0x0005839a) list_single_mce_message_pane_ParamLimits

0x44ba,	// (0x0005839a) list_single_mce_message_pane

0x44cf,	// (0x000583af) list_single_mce_smart_pane_ParamLimits

0x44cf,	// (0x000583af) list_single_mce_smart_pane

0x08ae,	// (0x0005478e) input_focus_pane_cp03

0x08b7,	// (0x00054797) list_header_data_pane

0x44ef,	// (0x000583cf) mce_header_field_pane_t1

0x44fd,	// (0x000583dd) list_single_mce_header_pane_ParamLimits

0x44fd,	// (0x000583dd) list_single_mce_header_pane

0x08bf,	// (0x0005479f) list_single_mce_header_pane_t1

0x08ce,	// (0x000547ae) list_single_mce_message_pane_g1

0x08d7,	// (0x000547b7) list_single_mce_message_pane_t1

0x4537,	// (0x00058417) bg_cale_heading_pane_cp01_ParamLimits

0x4537,	// (0x00058417) bg_cale_heading_pane_cp01

0x08e6,	// (0x000547c6) bg_cale_pane_cp02_ParamLimits

0x08e6,	// (0x000547c6) bg_cale_pane_cp02

0x4566,	// (0x00058446) cale_month_corner_pane

0x4585,	// (0x00058465) cale_month_day_heading_pane_ParamLimits

0x4585,	// (0x00058465) cale_month_day_heading_pane

0x45bc,	// (0x0005849c) cale_month_pane_g1_ParamLimits

0x45bc,	// (0x0005849c) cale_month_pane_g1

0x45e0,	// (0x000584c0) cale_month_pane_g2_ParamLimits

0x45e0,	// (0x000584c0) cale_month_pane_g2

0x4608,	// (0x000584e8) cale_month_pane_g3_ParamLimits

0x4608,	// (0x000584e8) cale_month_pane_g3

0x4644,	// (0x00058524) cale_month_pane_g4_ParamLimits

0x4644,	// (0x00058524) cale_month_pane_g4

0x4680,	// (0x00058560) cale_month_pane_g5_ParamLimits

0x4680,	// (0x00058560) cale_month_pane_g5

0x46bc,	// (0x0005859c) cale_month_pane_g6_ParamLimits

0x46bc,	// (0x0005859c) cale_month_pane_g6

0x46f8,	// (0x000585d8) cale_month_pane_g7_ParamLimits

0x46f8,	// (0x000585d8) cale_month_pane_g7

0x4734,	// (0x00058614) cale_month_pane_g8_ParamLimits

0x4734,	// (0x00058614) cale_month_pane_g8

0x4778,	// (0x00058658) cale_month_pane_g9_ParamLimits

0x4778,	// (0x00058658) cale_month_pane_g9

0x47ba,	// (0x0005869a) cale_month_pane_g10_ParamLimits

0x47ba,	// (0x0005869a) cale_month_pane_g10

0x47fc,	// (0x000586dc) cale_month_pane_g11_ParamLimits

0x47fc,	// (0x000586dc) cale_month_pane_g11

0x483e,	// (0x0005871e) cale_month_pane_g12_ParamLimits

0x483e,	// (0x0005871e) cale_month_pane_g12

0x4880,	// (0x00058760) cale_month_pane_g13_ParamLimits

0x4880,	// (0x00058760) cale_month_pane_g13

0x000c,

0xf219,	// (0x000630f9) cale_month_pane_g_ParamLimits

0xf219,	// (0x000630f9) cale_month_pane_g

0x48c2,	// (0x000587a2) cale_month_week_pane

0x48de,	// (0x000587be) grid_cale_month_pane_ParamLimits

0x48de,	// (0x000587be) grid_cale_month_pane

0x490c,	// (0x000587ec) cale_month_day_heading_pane_t1

0x4992,	// (0x00058872) cale_month_day_heading_pane_t2

0x4a23,	// (0x00058903) cale_month_day_heading_pane_t3

0x4ab4,	// (0x00058994) cale_month_day_heading_pane_t4

0x4b45,	// (0x00058a25) cale_month_day_heading_pane_t5

0x4bd6,	// (0x00058ab6) cale_month_day_heading_pane_t6

0x4c67,	// (0x00058b47) cale_month_day_heading_pane_t7

0x0006,

0xf234,	// (0x00063114) cale_month_day_heading_pane_t

0xc159,	// (0x00060039) bg_cale_side_pane_cp01

0x4cfc,	// (0x00058bdc) cale_month_week_pane_t1

0x4d15,	// (0x00058bf5) cale_month_week_pane_t2

0x4d2e,	// (0x00058c0e) cale_month_week_pane_t3

0x4d47,	// (0x00058c27) cale_month_week_pane_t4

0x4d60,	// (0x00058c40) cale_month_week_pane_t5

0x4d79,	// (0x00058c59) cale_month_week_pane_t6

0x0005,

0xf243,	// (0x00063123) cale_month_week_pane_t

0x4d92,	// (0x00058c72) cell_cale_month_pane_ParamLimits

0x4d92,	// (0x00058c72) cell_cale_month_pane

0xc1b5,	// (0x00060095) cell_cale_month_pane_g1

0x4e84,	// (0x00058d64) cell_cale_month_pane_t1_ParamLimits

0x4e84,	// (0x00058d64) cell_cale_month_pane_t1

0xc167,	// (0x00060047) grid_highlight_pane_cp08

0xbe3e,	// (0x0005fd1e) main_smil_g1

0x4ea4,	// (0x00058d84) smil_status_pane

0x0925,	// (0x00054805) smil_text_pane

0x2163,	// (0x00056043) bg_popup_call3_rect_pane_g8

0x216b,	// (0x0005604b) bg_popup_call3_rect_pane_g9

0x0008,

0xf4f3,	// (0x000633d3) bg_popup_call3_rect_pane_g

0x613c,	// (0x0005a01c) smil_status_volume_pane_g1

0x4eb5,	// (0x00058d95) smil_status_pane_t1

0xc30b,	// (0x000601eb) volume_smil_pane

0x092f,	// (0x0005480f) list_smil_text_pane

0x4ecc,	// (0x00058dac) scroll_pane_cp011

0x4ed7,	// (0x00058db7) smil_text_list_pane_t1_ParamLimits

0x4ed7,	// (0x00058db7) smil_text_list_pane_t1

0xc1c1,	// (0x000600a1) aid_volume_smil_ParamLimits

0xc1c1,	// (0x000600a1) aid_volume_smil

0xbe3e,	// (0x0005fd1e) smil_volume_pane_g1

0xbe3e,	// (0x0005fd1e) smil_volume_pane_g2

0x0001,

0xf255,	// (0x00063135) smil_volume_pane_g

0x38a0,	// (0x00057780) listscroll_cale_day_pane

0x0939,	// (0x00054819) bg_cale_pane

0x0951,	// (0x00054831) list_cale_pane

0x0974,	// (0x00054854) scroll_pane_cp09

0x0985,	// (0x00054865) cale_bg_pane_g1

0x098d,	// (0x0005486d) cale_bg_pane_g2

0x0995,	// (0x00054875) cale_bg_pane_g3

0x099d,	// (0x0005487d) cale_bg_pane_g4

0x09a5,	// (0x00054885) cale_bg_pane_g5

0x09ad,	// (0x0005488d) cale_bg_pane_g6

0x09b5,	// (0x00054895) cale_bg_pane_g7

0x09bd,	// (0x0005489d) cale_bg_pane_g8

0x09c5,	// (0x000548a5) cale_bg_pane_g9

0x0008,

0xf25a,	// (0x0006313a) cale_bg_pane_g

0x4f1b,	// (0x00058dfb) list_cale_time_pane_ParamLimits

0x4f1b,	// (0x00058dfb) list_cale_time_pane

0x09cd,	// (0x000548ad) list_cale_time_pane_g1_ParamLimits

0x09cd,	// (0x000548ad) list_cale_time_pane_g1

0x09d9,	// (0x000548b9) list_cale_time_pane_g2_ParamLimits

0x09d9,	// (0x000548b9) list_cale_time_pane_g2

0x4f30,	// (0x00058e10) list_cale_time_pane_g3_ParamLimits

0x4f30,	// (0x00058e10) list_cale_time_pane_g3

0x4f3c,	// (0x00058e1c) list_cale_time_pane_g4_ParamLimits

0x4f3c,	// (0x00058e1c) list_cale_time_pane_g4

0x4f48,	// (0x00058e28) list_cale_time_pane_g5_ParamLimits

0x4f48,	// (0x00058e28) list_cale_time_pane_g5

0x0005,

0xf26d,	// (0x0006314d) list_cale_time_pane_g_ParamLimits

0xf26d,	// (0x0006314d) list_cale_time_pane_g

0x09f3,	// (0x000548d3) list_cale_time_pane_t1_ParamLimits

0x09f3,	// (0x000548d3) list_cale_time_pane_t1

0x0a1b,	// (0x000548fb) list_cale_time_pane_t2_ParamLimits

0x0a1b,	// (0x000548fb) list_cale_time_pane_t2

0x51e6,	// (0x000590c6) aid_blid_cardinal_pane

0x5224,	// (0x00059104) compass_pane_t4

0x0a43,	// (0x00054923) list_cale_time_pane_t4_ParamLimits

0x0a43,	// (0x00054923) list_cale_time_pane_t4

0x5232,	// (0x00059112) compass_pane_t5

0x5240,	// (0x00059120) compass_pane_t6

0x524e,	// (0x0005912e) compass_pane_t7

0x0e9b,	// (0x00054d7b) navi_pane_cc_t1

0x1040,	// (0x00054f20) aid_phob_thumbnail_center_pane

0x565d,	// (0x0005953d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf27a,	// (0x0006315a) list_cale_time_pane_t_ParamLimits

0xf27a,	// (0x0006315a) list_cale_time_pane_t

0xb824,	// (0x0005f704) bg_popup_window_pane_cp02_ParamLimits

0xb824,	// (0x0005f704) bg_popup_window_pane_cp02

0x0a6b,	// (0x0005494b) heading_pane_cp01_ParamLimits

0x0a6b,	// (0x0005494b) heading_pane_cp01

0x0a77,	// (0x00054957) loc_req_pane_ParamLimits

0x0a77,	// (0x00054957) loc_req_pane

0x0a87,	// (0x00054967) loc_type_pane_ParamLimits

0x0a87,	// (0x00054967) loc_type_pane

0x0a99,	// (0x00054979) loc_type_pane_t1_ParamLimits

0x0a99,	// (0x00054979) loc_type_pane_t1

0x0aab,	// (0x0005498b) loc_type_pane_t2_ParamLimits

0x0aab,	// (0x0005498b) loc_type_pane_t2

0x0abd,	// (0x0005499d) loc_type_pane_t3_ParamLimits

0x0abd,	// (0x0005499d) loc_type_pane_t3

0x0002,

0xf281,	// (0x00063161) loc_type_pane_t_ParamLimits

0xf281,	// (0x00063161) loc_type_pane_t

0x0acf,	// (0x000549af) list_loc_req_pane

0x0ad9,	// (0x000549b9) scroll_pane_cp012

0x4f54,	// (0x00058e34) list_single_loc_request_popup_menu_pane_ParamLimits

0x4f54,	// (0x00058e34) list_single_loc_request_popup_menu_pane

0x0ae2,	// (0x000549c2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0ae2,	// (0x000549c2) list_single_loc_request_popup_menu_pane_g1

0x0aee,	// (0x000549ce) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0aee,	// (0x000549ce) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf288,	// (0x00063168) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf288,	// (0x00063168) list_single_loc_request_popup_menu_pane_g

0x0afa,	// (0x000549da) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0afa,	// (0x000549da) list_single_loc_request_popup_menu_pane_t1

0xbe26,	// (0x0005fd06) bg_popup_window_pane_cp03_ParamLimits

0xbe26,	// (0x0005fd06) bg_popup_window_pane_cp03

0x2307,	// (0x000561e7) heading_loc_req_pane_ParamLimits

0x2307,	// (0x000561e7) heading_loc_req_pane

0x4f61,	// (0x00058e41) popup_dyc_status_message_window_g1_ParamLimits

0x4f61,	// (0x00058e41) popup_dyc_status_message_window_g1

0x4f75,	// (0x00058e55) popup_dyc_status_message_window_t1_ParamLimits

0x4f75,	// (0x00058e55) popup_dyc_status_message_window_t1

0x4f8a,	// (0x00058e6a) popup_dyc_status_message_window_t2_ParamLimits

0x4f8a,	// (0x00058e6a) popup_dyc_status_message_window_t2

0x4f9f,	// (0x00058e7f) popup_dyc_status_message_window_t3_ParamLimits

0x4f9f,	// (0x00058e7f) popup_dyc_status_message_window_t3

0x0002,

0xf28d,	// (0x0006316d) popup_dyc_status_message_window_t_ParamLimits

0xf28d,	// (0x0006316d) popup_dyc_status_message_window_t

0xbbcb,	// (0x0005faab) bg_heading_pane_cp01

0x0b10,	// (0x000549f0) heading_loc_req_pane_g1

0x0b18,	// (0x000549f8) heading_loc_req_pane_g2

0x0b20,	// (0x00054a00) heading_loc_req_pane_g3

0x0002,

0xf294,	// (0x00063174) heading_loc_req_pane_g

0x0b28,	// (0x00054a08) heading_loc_req_pane_t1

0x0b37,	// (0x00054a17) bg_popup_sub_pane_cp01_ParamLimits

0x0b37,	// (0x00054a17) bg_popup_sub_pane_cp01

0x0b45,	// (0x00054a25) popup_cale_events_window_g1_ParamLimits

0x0b45,	// (0x00054a25) popup_cale_events_window_g1

0x0b65,	// (0x00054a45) popup_cale_events_window_g2_ParamLimits

0x0b65,	// (0x00054a45) popup_cale_events_window_g2

0x0001,

0xf2c8,	// (0x000631a8) popup_cale_events_window_g_ParamLimits

0xf2c8,	// (0x000631a8) popup_cale_events_window_g

0x0b85,	// (0x00054a65) popup_cale_events_window_t1_ParamLimits

0x0b85,	// (0x00054a65) popup_cale_events_window_t1

0x0b97,	// (0x00054a77) popup_cale_events_window_t2_ParamLimits

0x0b97,	// (0x00054a77) popup_cale_events_window_t2

0x0bd5,	// (0x00054ab5) popup_cale_events_window_t3_ParamLimits

0x0bd5,	// (0x00054ab5) popup_cale_events_window_t3

0x0c0f,	// (0x00054aef) popup_cale_events_window_t4_ParamLimits

0x0c0f,	// (0x00054aef) popup_cale_events_window_t4

0x0003,

0xf2cd,	// (0x000631ad) popup_cale_events_window_t_ParamLimits

0xf2cd,	// (0x000631ad) popup_cale_events_window_t

0x4ff3,	// (0x00058ed3) call_type_pane

0x5003,	// (0x00058ee3) popup_call_status_window_g1

0x5017,	// (0x00058ef7) popup_call_status_window_g2

0x502b,	// (0x00058f0b) popup_call_status_window_g3

0x0002,

0xf2d6,	// (0x000631b6) popup_call_status_window_g

0x0c53,	// (0x00054b33) call_type_pane_g1

0x0c5c,	// (0x00054b3c) call_type_pane_g2

0x0001,

0xf2dd,	// (0x000631bd) call_type_pane_g

0xbbcb,	// (0x0005faab) bg_popup_sub_pane_cp02

0x0c65,	// (0x00054b45) listscroll_popup_wml_pane

0x0c6d,	// (0x00054b4d) list_wml_pane

0x0c77,	// (0x00054b57) scroll_pane_cp013

0x503b,	// (0x00058f1b) list_single_graphic_popup_wml_pane_ParamLimits

0x503b,	// (0x00058f1b) list_single_graphic_popup_wml_pane

0xbe3e,	// (0x0005fd1e) list_single_graphic_popup_wml_pane_g1

0x0c80,	// (0x00054b60) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2e2,	// (0x000631c2) list_single_graphic_popup_wml_pane_g

0x0c88,	// (0x00054b68) list_single_graphic_popup_wml_pane_t1

0x0c9e,	// (0x00054b7e) aid_call_pane

0xbe1e,	// (0x0005fcfe) popup_clock_analogue_window_g1

0xbe1e,	// (0x0005fcfe) popup_clock_analogue_window_g2

0xc1e3,	// (0x000600c3) popup_clock_analogue_window_g3

0xc1e3,	// (0x000600c3) popup_clock_analogue_window_g4

0xbe3e,	// (0x0005fd1e) popup_clock_analogue_window_g5

0x0004,

0xf2e7,	// (0x000631c7) popup_clock_analogue_window_g

0xc1eb,	// (0x000600cb) popup_clock_analogue_window_t1

0xc1f9,	// (0x000600d9) clock_digital_number_pane_ParamLimits

0xc1f9,	// (0x000600d9) clock_digital_number_pane

0xc205,	// (0x000600e5) clock_digital_number_pane_cp02_ParamLimits

0xc205,	// (0x000600e5) clock_digital_number_pane_cp02

0xc211,	// (0x000600f1) clock_digital_number_pane_cp03_ParamLimits

0xc211,	// (0x000600f1) clock_digital_number_pane_cp03

0xc21d,	// (0x000600fd) clock_digital_number_pane_cp04_ParamLimits

0xc21d,	// (0x000600fd) clock_digital_number_pane_cp04

0xc229,	// (0x00060109) clock_digital_separator_pane_ParamLimits

0xc229,	// (0x00060109) clock_digital_separator_pane

0xc235,	// (0x00060115) popup_clock_digital_window_t1

0xbe3e,	// (0x0005fd1e) clock_digital_number_pane_g1

0xbe3e,	// (0x0005fd1e) clock_digital_number_pane_g2

0x0001,

0xf255,	// (0x00063135) clock_digital_number_pane_g

0xbe3e,	// (0x0005fd1e) clock_digital_separator_pane_g1

0xbe3e,	// (0x0005fd1e) clock_digital_separator_pane_g2

0x0001,

0xf255,	// (0x00063135) clock_digital_separator_pane_g

0xbbcb,	// (0x0005faab) bg_popup_window_pane_cp04

0x0ca6,	// (0x00054b86) heading_pane_cp03

0x059a,	// (0x0005447a) listscroll_popup_gms_pane

0xbbcb,	// (0x0005faab) grid_large_graphic_popup_pane

0x0caf,	// (0x00054b8f) listscroll_popup_gms_pane_g1

0x0cb8,	// (0x00054b98) listscroll_popup_gms_pane_g2

0x0001,

0xf2f2,	// (0x000631d2) listscroll_popup_gms_pane_g

0x0cc1,	// (0x00054ba1) scroll_pane_cp014

0xbebc,	// (0x0005fd9c) cell_large_graphic_popup_pane_ParamLimits

0xbebc,	// (0x0005fd9c) cell_large_graphic_popup_pane

0xbea0,	// (0x0005fd80) cell_large_graphic_popup_pane_g1_ParamLimits

0xbea0,	// (0x0005fd80) cell_large_graphic_popup_pane_g1

0x0cc9,	// (0x00054ba9) cell_large_graphic_popup_pane_g2_ParamLimits

0x0cc9,	// (0x00054ba9) cell_large_graphic_popup_pane_g2

0x0cd7,	// (0x00054bb7) cell_large_graphic_popup_pane_g3_ParamLimits

0x0cd7,	// (0x00054bb7) cell_large_graphic_popup_pane_g3

0x0ce5,	// (0x00054bc5) cell_large_graphic_popup_pane_g4_ParamLimits

0x0ce5,	// (0x00054bc5) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f7,	// (0x000631d7) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f7,	// (0x000631d7) cell_large_graphic_popup_pane_g

0xbbcb,	// (0x0005faab) grid_highlight_pane_cp010

0xbe3e,	// (0x0005fd1e) bg_popup_call_pane_g1

0x0cf6,	// (0x00054bd6) list_single_graphic_popup_conf_pane_ParamLimits

0x0cf6,	// (0x00054bd6) list_single_graphic_popup_conf_pane

0x0d09,	// (0x00054be9) list_highlight_pane_cp01

0x0d12,	// (0x00054bf2) list_single_graphic_popup_conf_pane_g1

0x0d1a,	// (0x00054bfa) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf300,	// (0x000631e0) list_single_graphic_popup_conf_pane_g

0x0d22,	// (0x00054c02) list_single_graphic_popup_conf_pane_t1

0x0d30,	// (0x00054c10) linegrid_cams_pane_g1

0x504e,	// (0x00058f2e) linegrid_cams_pane_g2

0xc0ea,	// (0x0005ffca) linegrid_cams_pane_g3

0x0d39,	// (0x00054c19) linegrid_cams_pane_g4

0x5057,	// (0x00058f37) linegrid_cams_pane_g5

0x5060,	// (0x00058f40) linegrid_cams_pane_g6

0xc19a,	// (0x0006007a) linegrid_cams_pane_g7

0x0006,

0xf305,	// (0x000631e5) linegrid_cams_pane_g

0x0d42,	// (0x00054c22) popup_clock_analogue_window

0x0d42,	// (0x00054c22) popup_clock_digital_window

0xbbcb,	// (0x0005faab) popup_phob_thumbnail_window

0xbe3e,	// (0x0005fd1e) call_video_uplink_pane_g1

0x0d4b,	// (0x00054c2b) call_video_uplink_pane_g2

0x0001,

0xf314,	// (0x000631f4) call_video_uplink_pane_g

0xc167,	// (0x00060047) video_uplink_pane

0x0d53,	// (0x00054c33) mce_image_pane_g1

0x5069,	// (0x00058f49) mce_image_pane_g2

0x5071,	// (0x00058f51) mce_image_pane_g3

0x5079,	// (0x00058f59) mce_image_pane_g4

0x5081,	// (0x00058f61) mce_image_pane_g5

0x0004,

0xf319,	// (0x000631f9) mce_image_pane_g

0x0d5d,	// (0x00054c3d) control_top_pane_stacon_cp01_ParamLimits

0x0d5d,	// (0x00054c3d) control_top_pane_stacon_cp01

0x0d6d,	// (0x00054c4d) uni_indicator_pane_stacon_cp01_ParamLimits

0x0d6d,	// (0x00054c4d) uni_indicator_pane_stacon_cp01

0x0d7e,	// (0x00054c5e) bg_popup_sub_pane_cp03

0x0d88,	// (0x00054c68) chi_dic_find_pane

0x5089,	// (0x00058f69) listscroll_chi_dic_pane

0x0d90,	// (0x00054c70) main_pane_chidic_g1

0x0d98,	// (0x00054c78) chi_dic_find_pane_t1

0x0da6,	// (0x00054c86) find_chidic_pane

0x0daf,	// (0x00054c8f) chi_dic_list_pane_ParamLimits

0x0daf,	// (0x00054c8f) chi_dic_list_pane

0x0cc1,	// (0x00054ba1) scroll_pane_cp020

0x0dc0,	// (0x00054ca0) find_chidic_pane_t1

0xbbcb,	// (0x0005faab) input_focus_pane_cp06

0x509d,	// (0x00058f7d) list_chi_dic_pane_ParamLimits

0x509d,	// (0x00058f7d) list_chi_dic_pane

0x50af,	// (0x00058f8f) list_chi_dic_pane_t1_ParamLimits

0x50af,	// (0x00058f8f) list_chi_dic_pane_t1

0xbbcb,	// (0x0005faab) list_highlight_pane_cp020

0x0dcf,	// (0x00054caf) bg_cale_heading_pane_g1

0x50c2,	// (0x00058fa2) bg_cale_heading_pane_g2

0x50ca,	// (0x00058faa) bg_cale_heading_pane_g3

0x50d2,	// (0x00058fb2) bg_cale_heading_pane_g4

0x50da,	// (0x00058fba) bg_cale_heading_pane_g5

0x50e2,	// (0x00058fc2) bg_cale_heading_pane_g6

0x50ea,	// (0x00058fca) bg_cale_heading_pane_g7

0x50f2,	// (0x00058fd2) bg_cale_heading_pane_g8

0x50fa,	// (0x00058fda) bg_cale_heading_pane_g9

0x0008,

0xf324,	// (0x00063204) bg_cale_heading_pane_g

0x0dcf,	// (0x00054caf) bg_cale_side_pane_g1

0x5102,	// (0x00058fe2) bg_cale_side_pane_g2

0x510a,	// (0x00058fea) bg_cale_side_pane_g3

0x5112,	// (0x00058ff2) bg_cale_side_pane_g4

0x511a,	// (0x00058ffa) bg_cale_side_pane_g5

0x5122,	// (0x00059002) bg_cale_side_pane_g6

0x512a,	// (0x0005900a) bg_cale_side_pane_g7

0x5132,	// (0x00059012) bg_cale_side_pane_g8

0x513a,	// (0x0005901a) bg_cale_side_pane_g9

0x0008,

0xf337,	// (0x00063217) bg_cale_side_pane_g

0x5142,	// (0x00059022) popup_call_status_window_ParamLimits

0x5142,	// (0x00059022) popup_call_status_window

0x0dd7,	// (0x00054cb7) stacon_top_pane

0x0ddf,	// (0x00054cbf) status_pane_ParamLimits

0x0ddf,	// (0x00054cbf) status_pane

0x0df9,	// (0x00054cd9) status_small_pane

0x0e01,	// (0x00054ce1) control_pane

0xbbcb,	// (0x0005faab) stacon_bottom_pane

0x0e09,	// (0x00054ce9) list_single_mce_smart_pane_t1_ParamLimits

0x0e09,	// (0x00054ce9) list_single_mce_smart_pane_t1

0x0e1c,	// (0x00054cfc) list_single_mce_smart_pane_t2_ParamLimits

0x0e1c,	// (0x00054cfc) list_single_mce_smart_pane_t2

0x0001,

0xf34a,	// (0x0006322a) list_single_mce_smart_pane_t_ParamLimits

0xf34a,	// (0x0006322a) list_single_mce_smart_pane_t

0x5189,	// (0x00059069) compass_pane

0x5192,	// (0x00059072) main_location2_pane_t1

0x51a8,	// (0x00059088) main_location2_pane_t2

0x51be,	// (0x0005909e) main_location2_pane_t3

0x0003,

0xf34f,	// (0x0006322f) main_location2_pane_t

0x0e44,	// (0x00054d24) compass_pane_g1_ParamLimits

0x0e44,	// (0x00054d24) compass_pane_g1

0x5206,	// (0x000590e6) compass_pane_t1

0x5215,	// (0x000590f5) compass_pane_t2

0x0005,

0xf358,	// (0x00063238) compass_pane_t

0x525c,	// (0x0005913c) text_secondary_cp61

0x0e92,	// (0x00054d72) navi_pane_cams_g5

0x0ede,	// (0x00054dbe) navi_pane_im_t1

0x0eec,	// (0x00054dcc) navi_pane_mp_g1_ParamLimits

0x0eec,	// (0x00054dcc) navi_pane_mp_g1

0x0f00,	// (0x00054de0) navi_pane_mp_g2_ParamLimits

0x0f00,	// (0x00054de0) navi_pane_mp_g2

0x0f0c,	// (0x00054dec) navi_pane_mp_g3_ParamLimits

0x0f0c,	// (0x00054dec) navi_pane_mp_g3

0x0002,

0xf36c,	// (0x0006324c) navi_pane_mp_g_ParamLimits

0xf36c,	// (0x0006324c) navi_pane_mp_g

0x0f18,	// (0x00054df8) navi_pane_mp_t1

0x0f26,	// (0x00054e06) navi_pane_mp_t2

0x0002,

0xf373,	// (0x00063253) navi_pane_mp_t

0x0f91,	// (0x00054e71) navi_pane_vt_g1

0x0f18,	// (0x00054df8) navi_pane_vt_t1

0x0f99,	// (0x00054e79) navi_slider_pane

0x059a,	// (0x0005447a) zooming_pane

0x0fa1,	// (0x00054e81) navi_slider_pane_g1

0xc252,	// (0x00060132) navi_slider_pane_g2

0x0006,

0xf37a,	// (0x0006325a) navi_slider_pane_g

0x0fc5,	// (0x00054ea5) aid_levels_zoom

0x0fcd,	// (0x00054ead) zooming_pane_g1

0x0fd5,	// (0x00054eb5) zooming_pane_g2

0x0fd5,	// (0x00054eb5) zooming_pane_g3

0x0002,

0xf389,	// (0x00063269) zooming_pane_g

0x0fdd,	// (0x00054ebd) level_10_zoom

0x0fe6,	// (0x00054ec6) level_11_zoom

0x0fef,	// (0x00054ecf) level_1_zoom

0x0ff8,	// (0x00054ed8) level_2_zoom

0x1001,	// (0x00054ee1) level_3_zoom

0x100a,	// (0x00054eea) level_4_zoom

0x1013,	// (0x00054ef3) level_5_zoom

0x101c,	// (0x00054efc) level_6_zoom

0x1025,	// (0x00054f05) level_7_zoom

0x102e,	// (0x00054f0e) level_8_zoom

0x1037,	// (0x00054f17) level_9_zoom

0x1048,	// (0x00054f28) popup_phob_thumbnail_window_g1

0x1050,	// (0x00054f30) popup_phob_thumbnail_window_g2

0x0001,

0xf390,	// (0x00063270) popup_phob_thumbnail_window_g

0x5c65,	// (0x00059b45) level_1_location

0x5c6d,	// (0x00059b4d) level_2_location

0x5c75,	// (0x00059b55) level_3_location

0x5c7d,	// (0x00059b5d) level_4_location

0x059a,	// (0x0005447a) level_5_location

0x52f2,	// (0x000591d2) mce_icon_pane_g1

0x52fa,	// (0x000591da) mce_icon_pane_g2

0x0001,

0xf395,	// (0x00063275) mce_icon_pane_g

0x2327,	// (0x00056207) main_mup_pane_g1_ParamLimits

0x2327,	// (0x00056207) main_mup_pane_g1

0x2327,	// (0x00056207) main_mup_pane_g2_ParamLimits

0x2327,	// (0x00056207) main_mup_pane_g2

0x2327,	// (0x00056207) main_mup_pane_g3_ParamLimits

0x2327,	// (0x00056207) main_mup_pane_g3

0x2327,	// (0x00056207) main_mup_pane_g4_ParamLimits

0x2327,	// (0x00056207) main_mup_pane_g4

0x2327,	// (0x00056207) main_mup_pane_g5_ParamLimits

0x2327,	// (0x00056207) main_mup_pane_g5

0x2327,	// (0x00056207) main_mup_pane_g6_ParamLimits

0x2327,	// (0x00056207) main_mup_pane_g6

0x2327,	// (0x00056207) main_mup_pane_g7_ParamLimits

0x2327,	// (0x00056207) main_mup_pane_g7

0x2327,	// (0x00056207) main_mup_pane_g8_ParamLimits

0x2327,	// (0x00056207) main_mup_pane_g8

0x2327,	// (0x00056207) main_mup_pane_g9_ParamLimits

0x2327,	// (0x00056207) main_mup_pane_g9

0x2327,	// (0x00056207) main_mup_pane_g10_ParamLimits

0x2327,	// (0x00056207) main_mup_pane_g10

0x2327,	// (0x00056207) main_mup_pane_g11_ParamLimits

0x2327,	// (0x00056207) main_mup_pane_g11

0xbea0,	// (0x0005fd80) main_mup_pane_g12_ParamLimits

0xbea0,	// (0x0005fd80) main_mup_pane_g12

0x2327,	// (0x00056207) main_mup_pane_g13_ParamLimits

0x2327,	// (0x00056207) main_mup_pane_g13

0x000c,

0xf39a,	// (0x0006327a) main_mup_pane_g_ParamLimits

0xf39a,	// (0x0006327a) main_mup_pane_g

0x2313,	// (0x000561f3) main_mup_pane_t1_ParamLimits

0x2313,	// (0x000561f3) main_mup_pane_t1

0x2313,	// (0x000561f3) main_mup_pane_t2_ParamLimits

0x2313,	// (0x000561f3) main_mup_pane_t2

0x2313,	// (0x000561f3) main_mup_pane_t3_ParamLimits

0x2313,	// (0x000561f3) main_mup_pane_t3

0x1058,	// (0x00054f38) main_mup_pane_t4_ParamLimits

0x1058,	// (0x00054f38) main_mup_pane_t4

0x1058,	// (0x00054f38) main_mup_pane_t5_ParamLimits

0x1058,	// (0x00054f38) main_mup_pane_t5

0x05ed,	// (0x000544cd) main_mup_pane_t6_ParamLimits

0x05ed,	// (0x000544cd) main_mup_pane_t6

0x0005,

0xf3b5,	// (0x00063295) main_mup_pane_t_ParamLimits

0xf3b5,	// (0x00063295) main_mup_pane_t

0xbebc,	// (0x0005fd9c) mup_progress_pane_ParamLimits

0xbebc,	// (0x0005fd9c) mup_progress_pane

0x22ef,	// (0x000561cf) mup_visualizer_pane_ParamLimits

0x22ef,	// (0x000561cf) mup_visualizer_pane

0x22ef,	// (0x000561cf) mup_volume_pane_ParamLimits

0x22ef,	// (0x000561cf) mup_volume_pane

0xbeae,	// (0x0005fd8e) mup_visualizer_pane_g1_ParamLimits

0xbeae,	// (0x0005fd8e) mup_visualizer_pane_g1

0x107a,	// (0x00054f5a) mup_visualizer_pane_g2_ParamLimits

0x107a,	// (0x00054f5a) mup_visualizer_pane_g2

0xbea0,	// (0x0005fd80) mup_visualizer_pane_g3_ParamLimits

0xbea0,	// (0x0005fd80) mup_visualizer_pane_g3

0x0002,

0xf3c2,	// (0x000632a2) mup_visualizer_pane_g_ParamLimits

0xf3c2,	// (0x000632a2) mup_visualizer_pane_g

0x061b,	// (0x000544fb) mup_volume_pane_g1

0x061b,	// (0x000544fb) mup_volume_pane_g2

0x0001,

0xf3c9,	// (0x000632a9) mup_volume_pane_g

0x061b,	// (0x000544fb) mup_progress_pane_g1

0x061b,	// (0x000544fb) mup_progress_pane_g2

0x061b,	// (0x000544fb) mup_progress_pane_g3

0x0002,

0xf3ce,	// (0x000632ae) mup_progress_pane_g

0xbbcb,	// (0x0005faab) bg_popup_window_pane_cp05

0x1088,	// (0x00054f68) heading_pane_cp02_ParamLimits

0x1088,	// (0x00054f68) heading_pane_cp02

0x10a2,	// (0x00054f82) list_popup_blid_pane

0x10aa,	// (0x00054f8a) list_blid_sat_info_pane_ParamLimits

0x10aa,	// (0x00054f8a) list_blid_sat_info_pane

0x10bd,	// (0x00054f9d) list_blid_sat_info_pane_g1

0x10c5,	// (0x00054fa5) list_blid_sat_info_pane_t1

0x53d4,	// (0x000592b4) mup_equalizer_pane_ParamLimits

0x53d4,	// (0x000592b4) mup_equalizer_pane

0x53ed,	// (0x000592cd) mup_equalizer_pane_cp1_ParamLimits

0x53ed,	// (0x000592cd) mup_equalizer_pane_cp1

0x5406,	// (0x000592e6) mup_equalizer_pane_cp2_ParamLimits

0x5406,	// (0x000592e6) mup_equalizer_pane_cp2

0x541f,	// (0x000592ff) mup_equalizer_pane_cp3_ParamLimits

0x541f,	// (0x000592ff) mup_equalizer_pane_cp3

0x5438,	// (0x00059318) mup_equalizer_pane_cp4_ParamLimits

0x5438,	// (0x00059318) mup_equalizer_pane_cp4

0x5451,	// (0x00059331) mup_equalizer_pane_cp5

0x5463,	// (0x00059343) mup_equalizer_pane_cp6

0x5475,	// (0x00059355) mup_equalizer_pane_cp7

0x21e3,	// (0x000560c3) bg_popup_call_poc_act_pane_g9

0x21eb,	// (0x000560cb) bg_popup_call_poc_act_pane_g10

0x21f3,	// (0x000560d3) bg_popup_call_poc_act_pane_g11

0x000a,

0xbe26,	// (0x0005fd06) mup_scale_pane

0xbe3e,	// (0x0005fd1e) mup_scale_pane_g1

0x10d3,	// (0x00054fb3) mup_scale_pane_g2

0x0006,

0xf3ea,	// (0x000632ca) mup_scale_pane_g

0x10f7,	// (0x00054fd7) msg_data_pane

0x10ff,	// (0x00054fdf) scroll_pane_cp017

0x549b,	// (0x0005937b) bg_list_pane_cp04_ParamLimits

0x549b,	// (0x0005937b) bg_list_pane_cp04

0x1107,	// (0x00054fe7) msg_data_pane_g1

0x5069,	// (0x00058f49) msg_data_pane_g2

0x5071,	// (0x00058f51) msg_data_pane_g3

0x54bb,	// (0x0005939b) msg_data_pane_g4

0x5081,	// (0x00058f61) msg_data_pane_g5

0x52f2,	// (0x000591d2) msg_data_pane_g6

0x54c3,	// (0x000593a3) msg_data_pane_g7

0x0006,

0xf3f9,	// (0x000632d9) msg_data_pane_g

0x54cb,	// (0x000593ab) msg_text_pane_ParamLimits

0x54cb,	// (0x000593ab) msg_text_pane

0x54f3,	// (0x000593d3) qrid_highlight_pane_cp011_ParamLimits

0x54f3,	// (0x000593d3) qrid_highlight_pane_cp011

0xbbcb,	// (0x0005faab) msg_body_pane

0xbbcb,	// (0x0005faab) msg_header_pane

0x1118,	// (0x00054ff8) input_focus_pane_cp07

0x5515,	// (0x000593f5) msg_header_pane_t1_ParamLimits

0x5515,	// (0x000593f5) msg_header_pane_t1

0x552b,	// (0x0005940b) msg_header_pane_t2_ParamLimits

0x552b,	// (0x0005940b) msg_header_pane_t2

0x0001,

0xf40d,	// (0x000632ed) msg_header_pane_t_ParamLimits

0xf40d,	// (0x000632ed) msg_header_pane_t

0x112d,	// (0x0005500d) msg_body_pane_g1

0x5542,	// (0x00059422) msg_body_pane_t1_ParamLimits

0x5542,	// (0x00059422) msg_body_pane_t1

0x556d,	// (0x0005944d) msg_body_pane_t2_ParamLimits

0x556d,	// (0x0005944d) msg_body_pane_t2

0x557f,	// (0x0005945f) msg_body_pane_t3_ParamLimits

0x557f,	// (0x0005945f) msg_body_pane_t3

0x0002,

0xf412,	// (0x000632f2) msg_body_pane_t_ParamLimits

0xf412,	// (0x000632f2) msg_body_pane_t

0x55c7,	// (0x000594a7) main_viewer_pane_g1_ParamLimits

0x55c7,	// (0x000594a7) main_viewer_pane_g1

0x55d3,	// (0x000594b3) main_viewer_pane_g2_ParamLimits

0x55d3,	// (0x000594b3) main_viewer_pane_g2

0x55df,	// (0x000594bf) main_viewer_pane_g3_ParamLimits

0x55df,	// (0x000594bf) main_viewer_pane_g3

0x55ee,	// (0x000594ce) main_viewer_pane_g4_ParamLimits

0x55ee,	// (0x000594ce) main_viewer_pane_g4

0xc27c,	// (0x0006015c) main_viewer_pane_g5_ParamLimits

0xc27c,	// (0x0006015c) main_viewer_pane_g5

0xc27c,	// (0x0006015c) main_viewer_pane_g7_ParamLimits

0xc27c,	// (0x0006015c) main_viewer_pane_g7

0xc28e,	// (0x0006016e) main_viewer_pane_g8_ParamLimits

0xc28e,	// (0x0006016e) main_viewer_pane_g8

0x0007,

0xf422,	// (0x00063302) main_viewer_pane_g_ParamLimits

0xf422,	// (0x00063302) main_viewer_pane_g

0x1135,	// (0x00055015) viewer_content_pane_ParamLimits

0x1135,	// (0x00055015) viewer_content_pane

0x5622,	// (0x00059502) main_postcard_pane_g1_ParamLimits

0x5622,	// (0x00059502) main_postcard_pane_g1

0x5636,	// (0x00059516) main_postcard_pane_g2_ParamLimits

0x5636,	// (0x00059516) main_postcard_pane_g2

0x564a,	// (0x0005952a) main_postcard_pane_g3_ParamLimits

0x564a,	// (0x0005952a) main_postcard_pane_g3

0x0005,

0xf433,	// (0x00063313) main_postcard_pane_g_ParamLimits

0xf433,	// (0x00063313) main_postcard_pane_g

0x565d,	// (0x0005953d) main_postcard_pane_g4

0x614f,	// (0x0005a02f) smil_status_volume_pane_g2

0x5698,	// (0x00059578) postcard_pane_ParamLimits

0x5698,	// (0x00059578) postcard_pane

0x1151,	// (0x00055031) postcard_pane_g1_ParamLimits

0x1151,	// (0x00055031) postcard_pane_g1

0x56d8,	// (0x000595b8) postcard_pane_g2_ParamLimits

0x56d8,	// (0x000595b8) postcard_pane_g2

0x56e4,	// (0x000595c4) postcard_pane_g3_ParamLimits

0x56e4,	// (0x000595c4) postcard_pane_g3

0x1143,	// (0x00055023) postcard_pane_g4_ParamLimits

0x1143,	// (0x00055023) postcard_pane_g4

0x56f0,	// (0x000595d0) postcard_pane_g5_ParamLimits

0x56f0,	// (0x000595d0) postcard_pane_g5

0x5705,	// (0x000595e5) postcard_pane_g6_ParamLimits

0x5705,	// (0x000595e5) postcard_pane_g6

0x1151,	// (0x00055031) postcard_pane_g7_ParamLimits

0x1151,	// (0x00055031) postcard_pane_g7

0x0006,

0xf440,	// (0x00063320) postcard_pane_g_ParamLimits

0xf440,	// (0x00063320) postcard_pane_g

0x5719,	// (0x000595f9) main_mp2_pane_g1_ParamLimits

0x5719,	// (0x000595f9) main_mp2_pane_g1

0x5725,	// (0x00059605) main_mp2_pane_g2_ParamLimits

0x5725,	// (0x00059605) main_mp2_pane_g2

0x5731,	// (0x00059611) main_mp2_pane_g3_ParamLimits

0x5731,	// (0x00059611) main_mp2_pane_g3

0x0002,

0xf44f,	// (0x0006332f) main_mp2_pane_g_ParamLimits

0xf44f,	// (0x0006332f) main_mp2_pane_g

0x573d,	// (0x0005961d) main_mp2_pane_t1_ParamLimits

0x573d,	// (0x0005961d) main_mp2_pane_t1

0x5752,	// (0x00059632) main_mp2_pane_t2_ParamLimits

0x5752,	// (0x00059632) main_mp2_pane_t2

0x5764,	// (0x00059644) main_mp2_pane_t3_ParamLimits

0x5764,	// (0x00059644) main_mp2_pane_t3

0x0002,

0xf456,	// (0x00063336) main_mp2_pane_t_ParamLimits

0xf456,	// (0x00063336) main_mp2_pane_t

0x115f,	// (0x0005503f) pec_content_pane_ParamLimits

0x115f,	// (0x0005503f) pec_content_pane

0x0789,	// (0x00054669) scroll_pane_cp015

0x1171,	// (0x00055051) pec_attribute_pane_ParamLimits

0x1171,	// (0x00055051) pec_attribute_pane

0x5776,	// (0x00059656) pec_content_pane_g1_ParamLimits

0x5776,	// (0x00059656) pec_content_pane_g1

0x1181,	// (0x00055061) pec_content_pane_t1_ParamLimits

0x1181,	// (0x00055061) pec_content_pane_t1

0x1193,	// (0x00055073) pec_content_pane_t2_ParamLimits

0x1193,	// (0x00055073) pec_content_pane_t2

0x0001,

0xf45d,	// (0x0006333d) pec_content_pane_t_ParamLimits

0xf45d,	// (0x0006333d) pec_content_pane_t

0x5782,	// (0x00059662) list_single_graphic_pane_cp01_ParamLimits

0x5782,	// (0x00059662) list_single_graphic_pane_cp01

0xbe26,	// (0x0005fd06) bg_popup_sub_pane_cp04

0x11a5,	// (0x00055085) popup_mup_playback_window_g1

0x11b1,	// (0x00055091) popup_mup_playback_window_t1

0x11c6,	// (0x000550a6) popup_mup_playback_window_t2

0x0001,

0xf462,	// (0x00063342) popup_mup_playback_window_t

0x11fd,	// (0x000550dd) main_image_pane_g1_ParamLimits

0x11fd,	// (0x000550dd) main_image_pane_g1

0x1240,	// (0x00055120) scroll_pane_cp018_ParamLimits

0x1240,	// (0x00055120) scroll_pane_cp018

0x1258,	// (0x00055138) scroll_pane_cp016_ParamLimits

0x1258,	// (0x00055138) scroll_pane_cp016

0x584d,	// (0x0005972d) smil2_image_pane_ParamLimits

0x584d,	// (0x0005972d) smil2_image_pane

0x5875,	// (0x00059755) smil2_root_pane_ParamLimits

0x5875,	// (0x00059755) smil2_root_pane

0x58ad,	// (0x0005978d) smil2_text_pane_ParamLimits

0x58ad,	// (0x0005978d) smil2_text_pane

0xbbcb,	// (0x0005faab) bg_list_pane_cp06

0x128c,	// (0x0005516c) grid_radio_pane

0xbbcb,	// (0x0005faab) bg_popup_window_pane_cp06

0x1294,	// (0x00055174) main_fmradio_pane_t1

0x223b,	// (0x0005611b) heading_pane_cp04

0x12a2,	// (0x00055182) main_fmradio_pane_t2

0x2243,	// (0x00056123) popup_cale_lunar_info_window_g1

0x12b0,	// (0x00055190) main_fmradio_pane_t3

0x224b,	// (0x0005612b) popup_cale_lunar_info_window_g2

0x12be,	// (0x0005519e) main_fmradio_pane_t4

0x0001,

0x12cc,	// (0x000551ac) main_fmradio_pane_t5

0x0004,

0xf555,	// (0x00063435) popup_cale_lunar_info_window_g

0xf477,	// (0x00063357) main_fmradio_pane_t

0x12da,	// (0x000551ba) wait_bar_pane_cp03

0x05da,	// (0x000544ba) cell_fmradio_pane_ParamLimits

0x05da,	// (0x000544ba) cell_fmradio_pane

0x1151,	// (0x00055031) cell_fmradio_pane_g1_ParamLimits

0x1151,	// (0x00055031) cell_fmradio_pane_g1

0xbbcb,	// (0x0005faab) grid_highlight_pane_cp011

0x12e2,	// (0x000551c2) poc_content_pane_ParamLimits

0x12e2,	// (0x000551c2) poc_content_pane

0x12f5,	// (0x000551d5) scroll_pane_cp019

0x5919,	// (0x000597f9) popup_call_poc_act_window_ParamLimits

0x5919,	// (0x000597f9) popup_call_poc_act_window

0x5939,	// (0x00059819) popup_call_poc_inact_window_ParamLimits

0x5939,	// (0x00059819) popup_call_poc_inact_window

0xf519,	// (0x000633f9) bg_popup_call_poc_act_pane_g

0x21fb,	// (0x000560db) bg_popup_call_poc_inact_pane_g1

0x2203,	// (0x000560e3) bg_popup_call_poc_inact_pane_g2

0x12fd,	// (0x000551dd) popup_call_poc_act_window_g2

0x220b,	// (0x000560eb) bg_popup_call_poc_inact_pane_g3

0x218b,	// (0x0005606b) bg_popup_call_poc_inact_pane_g4

0x2213,	// (0x000560f3) bg_popup_call_poc_inact_pane_g5

0x1305,	// (0x000551e5) popup_call_poc_act_window_t1_ParamLimits

0x1305,	// (0x000551e5) popup_call_poc_act_window_t1

0x132d,	// (0x0005520d) popup_call_poc_act_window_t2_ParamLimits

0x132d,	// (0x0005520d) popup_call_poc_act_window_t2

0x1355,	// (0x00055235) popup_call_poc_act_window_t3_ParamLimits

0x1355,	// (0x00055235) popup_call_poc_act_window_t3

0x137d,	// (0x0005525d) popup_call_poc_act_window_t4_ParamLimits

0x137d,	// (0x0005525d) popup_call_poc_act_window_t4

0x0003,

0xf482,	// (0x00063362) popup_call_poc_act_window_t_ParamLimits

0xf482,	// (0x00063362) popup_call_poc_act_window_t

0x221b,	// (0x000560fb) bg_popup_call_poc_inact_pane_g6

0x2223,	// (0x00056103) bg_popup_call_poc_inact_pane_g7

0x222b,	// (0x0005610b) bg_popup_call_poc_inact_pane_g8

0x138f,	// (0x0005526f) popup_call_poc_inact_window_g2

0x2233,	// (0x00056113) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf530,	// (0x00063410) bg_popup_call_poc_inact_pane_g

0x1397,	// (0x00055277) popup_call_poc_inact_window_t1_ParamLimits

0x1397,	// (0x00055277) popup_call_poc_inact_window_t1

0x13ac,	// (0x0005528c) popup_call_poc_inact_window_t2_ParamLimits

0x13ac,	// (0x0005528c) popup_call_poc_inact_window_t2

0x13c1,	// (0x000552a1) popup_call_poc_inact_window_t3_ParamLimits

0x13c1,	// (0x000552a1) popup_call_poc_inact_window_t3

0x0002,

0xf48b,	// (0x0006336b) popup_call_poc_inact_window_t_ParamLimits

0xf48b,	// (0x0006336b) popup_call_poc_inact_window_t

0x604b,	// (0x00059f2b) context_pane_ParamLimits

0x60a7,	// (0x00059f87) signal_pane_ParamLimits

0x059a,	// (0x0005447a) main_call2_pane

0xc2d7,	// (0x000601b7) popup_phob_thumbnail2_window_ParamLimits

0xc2d7,	// (0x000601b7) popup_phob_thumbnail2_window

0xc264,	// (0x00060144) aid_hotspot_pointer_arrow_pane

0xc26c,	// (0x0006014c) aid_hotspot_pointer_hand_pane

0x5c33,	// (0x00059b13) phob_pre_status_pane_g5

0x106c,	// (0x00054f4c) cams_zoom_pane_ParamLimits

0x106c,	// (0x00054f4c) image_vga_pane_ParamLimits

0xbea0,	// (0x0005fd80) main_camera_pane_g1_ParamLimits

0xbea0,	// (0x0005fd80) main_camera_pane_g2_ParamLimits

0xbea0,	// (0x0005fd80) main_camera_pane_g3_ParamLimits

0xbea0,	// (0x0005fd80) main_camera_pane_g4_ParamLimits

0xbea0,	// (0x0005fd80) main_camera_pane_g5_ParamLimits

0xbea0,	// (0x0005fd80) main_camera_pane_g6_ParamLimits

0xbea0,	// (0x0005fd80) main_camera_pane_g7_ParamLimits

0xf19f,	// (0x0006307f) main_camera_pane_g_ParamLimits

0x1058,	// (0x00054f38) main_camera_pane_t1_ParamLimits

0x1058,	// (0x00054f38) main_camera_pane_t2_ParamLimits

0xf1b0,	// (0x00063090) main_camera_pane_t_ParamLimits

0xbe26,	// (0x0005fd06) bg_popup_preview_window_pane_cp01_ParamLimits

0xbe26,	// (0x0005fd06) bg_popup_preview_window_pane_cp01

0x13d6,	// (0x000552b6) popup_phob_thumbnail2_window_g1_ParamLimits

0x13d6,	// (0x000552b6) popup_phob_thumbnail2_window_g1

0xbbcb,	// (0x0005faab) call2_cli_visual_pane

0x5965,	// (0x00059845) popup_call2_audio_conf_window_ParamLimits

0x5965,	// (0x00059845) popup_call2_audio_conf_window

0x5983,	// (0x00059863) popup_call2_audio_first_window_ParamLimits

0x5983,	// (0x00059863) popup_call2_audio_first_window

0x59f9,	// (0x000598d9) popup_call2_audio_in_window_ParamLimits

0x59f9,	// (0x000598d9) popup_call2_audio_in_window

0x5a2d,	// (0x0005990d) popup_call2_audio_out_window_ParamLimits

0x5a2d,	// (0x0005990d) popup_call2_audio_out_window

0x5a7f,	// (0x0005995f) popup_call2_audio_second_window_ParamLimits

0x5a7f,	// (0x0005995f) popup_call2_audio_second_window

0x5ad1,	// (0x000599b1) popup_call2_audio_wait_window_ParamLimits

0x5ad1,	// (0x000599b1) popup_call2_audio_wait_window

0xbbcb,	// (0x0005faab) bg_popup_call2_act_pane_cp03

0xbe08,	// (0x0005fce8) list_conf_pane_cp

0x13e2,	// (0x000552c2) popup_call2_audio_conf_window_t1

0x0cf6,	// (0x00054bd6) list_single_graphic_popup_conf2_pane_ParamLimits

0x0cf6,	// (0x00054bd6) list_single_graphic_popup_conf2_pane

0x0d09,	// (0x00054be9) list_highlight_pane_cp04

0x13f0,	// (0x000552d0) list_single_graphic_popup_conf2_pane_g1

0x0d1a,	// (0x00054bfa) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf492,	// (0x00063372) list_single_graphic_popup_conf2_pane_g

0x13f8,	// (0x000552d8) list_single_graphic_popup_conf2_pane_t1

0x1406,	// (0x000552e6) bg_popup_call2_act_pane_cp01_ParamLimits

0x1406,	// (0x000552e6) bg_popup_call2_act_pane_cp01

0x1490,	// (0x00055370) call_type_pane_cp05_ParamLimits

0x1490,	// (0x00055370) call_type_pane_cp05

0x14e4,	// (0x000553c4) popup_call2_audio_second_window_g1_ParamLimits

0x14e4,	// (0x000553c4) popup_call2_audio_second_window_g1

0x1538,	// (0x00055418) popup_call2_audio_second_window_g2_ParamLimits

0x1538,	// (0x00055418) popup_call2_audio_second_window_g2

0x0002,

0xf497,	// (0x00063377) popup_call2_audio_second_window_g_ParamLimits

0xf497,	// (0x00063377) popup_call2_audio_second_window_g

0x159d,	// (0x0005547d) popup_call2_audio_second_window_t1_ParamLimits

0x159d,	// (0x0005547d) popup_call2_audio_second_window_t1

0x1658,	// (0x00055538) popup_call2_audio_second_window_t2_ParamLimits

0x1658,	// (0x00055538) popup_call2_audio_second_window_t2

0x16ab,	// (0x0005558b) popup_call2_audio_second_window_t3_ParamLimits

0x16ab,	// (0x0005558b) popup_call2_audio_second_window_t3

0x0003,

0xf49e,	// (0x0006337e) popup_call2_audio_second_window_t_ParamLimits

0xf49e,	// (0x0006337e) popup_call2_audio_second_window_t

0xbbcb,	// (0x0005faab) bg_popup_call2_in_pane_cp02

0xbbd5,	// (0x0005fab5) call_type_pane_cp04

0x5b09,	// (0x000599e9) popup_call2_audio_wait_window_g1

0x5b11,	// (0x000599f1) popup_call2_audio_wait_window_g2

0x0001,

0xf4a7,	// (0x00063387) popup_call2_audio_wait_window_g

0xbbed,	// (0x0005facd) popup_call2_audio_wait_window_t3

0x179e,	// (0x0005567e) bg_popup_call2_act_pane_ParamLimits

0x179e,	// (0x0005567e) bg_popup_call2_act_pane

0x185e,	// (0x0005573e) call_type_pane_cp03_ParamLimits

0x185e,	// (0x0005573e) call_type_pane_cp03

0x18c2,	// (0x000557a2) popup_call2_audio_first_window_g1_ParamLimits

0x18c2,	// (0x000557a2) popup_call2_audio_first_window_g1

0x1932,	// (0x00055812) popup_call2_audio_first_window_g2_ParamLimits

0x1932,	// (0x00055812) popup_call2_audio_first_window_g2

0x0c45,	// (0x00054b25) popup_call2_audio_first_window_g3_ParamLimits

0x0c45,	// (0x00054b25) popup_call2_audio_first_window_g3

0x0004,

0xf4ac,	// (0x0006338c) popup_call2_audio_first_window_g_ParamLimits

0xf4ac,	// (0x0006338c) popup_call2_audio_first_window_g

0x1a10,	// (0x000558f0) popup_call2_audio_first_window_t1_ParamLimits

0x1a10,	// (0x000558f0) popup_call2_audio_first_window_t1

0x1b13,	// (0x000559f3) popup_call2_audio_first_window_t4_ParamLimits

0x1b13,	// (0x000559f3) popup_call2_audio_first_window_t4

0x1bf6,	// (0x00055ad6) popup_call2_audio_first_window_t5_ParamLimits

0x1bf6,	// (0x00055ad6) popup_call2_audio_first_window_t5

0x0003,

0xf4b7,	// (0x00063397) popup_call2_audio_first_window_t_ParamLimits

0xf4b7,	// (0x00063397) popup_call2_audio_first_window_t

0xbe1e,	// (0x0005fcfe) bg_popup_call2_act_pane_g1

0x2253,	// (0x00056133) popup_cale_lunar_info_window_t1

0x2261,	// (0x00056141) popup_cale_lunar_info_window_t2

0x226f,	// (0x0005614f) popup_cale_lunar_info_window_t3

0xbbcb,	// (0x0005faab) bg_popup_call2_bubble_pane

0x1cf7,	// (0x00055bd7) bg_popup_call2_in_pane_cp01_ParamLimits

0x1cf7,	// (0x00055bd7) bg_popup_call2_in_pane_cp01

0xb8a7,	// (0x0005f787) call_type_pane_cp02

0x5b19,	// (0x000599f9) popup_call2_audio_out_window_g1_ParamLimits

0x5b19,	// (0x000599f9) popup_call2_audio_out_window_g1

0x1d3f,	// (0x00055c1f) popup_call2_audio_out_window_g2_ParamLimits

0x1d3f,	// (0x00055c1f) popup_call2_audio_out_window_g2

0x5b45,	// (0x00059a25) popup_call2_audio_out_window_g3_ParamLimits

0x5b45,	// (0x00059a25) popup_call2_audio_out_window_g3

0x0003,

0xf4c0,	// (0x000633a0) popup_call2_audio_out_window_g_ParamLimits

0xf4c0,	// (0x000633a0) popup_call2_audio_out_window_g

0x1d76,	// (0x00055c56) popup_call2_audio_out_window_t1_ParamLimits

0x1d76,	// (0x00055c56) popup_call2_audio_out_window_t1

0x1dd5,	// (0x00055cb5) popup_call2_audio_out_window_t2_ParamLimits

0x1dd5,	// (0x00055cb5) popup_call2_audio_out_window_t2

0x1e29,	// (0x00055d09) popup_call2_audio_out_window_t3_ParamLimits

0x1e29,	// (0x00055d09) popup_call2_audio_out_window_t3

0x1e3f,	// (0x00055d1f) popup_call2_audio_out_window_t4_ParamLimits

0x1e3f,	// (0x00055d1f) popup_call2_audio_out_window_t4

0x1e55,	// (0x00055d35) popup_call2_audio_out_window_t5_ParamLimits

0x1e55,	// (0x00055d35) popup_call2_audio_out_window_t5

0x0005,

0xf4c9,	// (0x000633a9) popup_call2_audio_out_window_t_ParamLimits

0xf4c9,	// (0x000633a9) popup_call2_audio_out_window_t

0x1eb9,	// (0x00055d99) bg_popup_call2_in_pane_ParamLimits

0x1eb9,	// (0x00055d99) bg_popup_call2_in_pane

0x1f15,	// (0x00055df5) popup_call2_audio_in_window_g1_ParamLimits

0x1f15,	// (0x00055df5) popup_call2_audio_in_window_g1

0x1f4d,	// (0x00055e2d) popup_call2_audio_in_window_g2_ParamLimits

0x1f4d,	// (0x00055e2d) popup_call2_audio_in_window_g2

0x1f85,	// (0x00055e65) popup_call2_audio_in_window_g3_ParamLimits

0x1f85,	// (0x00055e65) popup_call2_audio_in_window_g3

0x0003,

0xf4d6,	// (0x000633b6) popup_call2_audio_in_window_g_ParamLimits

0xf4d6,	// (0x000633b6) popup_call2_audio_in_window_g

0x1fdd,	// (0x00055ebd) popup_call2_audio_in_window_t1_ParamLimits

0x1fdd,	// (0x00055ebd) popup_call2_audio_in_window_t1

0x205d,	// (0x00055f3d) popup_call2_audio_in_window_t2_ParamLimits

0x205d,	// (0x00055f3d) popup_call2_audio_in_window_t2

0x20dd,	// (0x00055fbd) popup_call2_audio_in_window_t3_ParamLimits

0x20dd,	// (0x00055fbd) popup_call2_audio_in_window_t3

0x20f7,	// (0x00055fd7) popup_call2_audio_in_window_t4_ParamLimits

0x20f7,	// (0x00055fd7) popup_call2_audio_in_window_t4

0x2109,	// (0x00055fe9) popup_call2_audio_in_window_t5_ParamLimits

0x2109,	// (0x00055fe9) popup_call2_audio_in_window_t5

0x211e,	// (0x00055ffe) popup_call2_audio_in_window_t6_ParamLimits

0x211e,	// (0x00055ffe) popup_call2_audio_in_window_t6

0x0005,

0xf4df,	// (0x000633bf) popup_call2_audio_in_window_t_ParamLimits

0xf4df,	// (0x000633bf) popup_call2_audio_in_window_t

0xbe1e,	// (0x0005fcfe) bg_popup_call2_in_pane_g1

0x227d,	// (0x0005615d) popup_cale_lunar_info_window_t4

0x0003,

0xf55a,	// (0x0006343a) popup_cale_lunar_info_window_t

0xbe26,	// (0x0005fd06) bg_popup_call2_rect_pane_ParamLimits

0xbe26,	// (0x0005fd06) bg_popup_call2_rect_pane

0xbbcb,	// (0x0005faab) call2_cli_visual_graphic_pane

0xbbcb,	// (0x0005faab) call2_cli_visual_text_pane

0xc2fe,	// (0x000601de) smil_status_volume_pane_g3

0x0002,

0xbe3e,	// (0x0005fd1e) call2_cli_visual_graphic_pane_g1

0xbe3e,	// (0x0005fd1e) call2_cli_visual_graphic_pane_g2

0xbe3e,	// (0x0005fd1e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ec,	// (0x000633cc) call2_cli_visual_graphic_pane_g

0x2133,	// (0x00056013) bg_popup_call2_rect_pane_g1

0xc087,	// (0x0005ff67) bg_popup_call2_rect_pane_g2

0x213b,	// (0x0005601b) bg_popup_call2_rect_pane_g3

0x2143,	// (0x00056023) bg_popup_call2_rect_pane_g4

0x214b,	// (0x0005602b) bg_popup_call2_rect_pane_g5

0x2153,	// (0x00056033) bg_popup_call2_rect_pane_g6

0x215b,	// (0x0005603b) bg_popup_call2_rect_pane_g7

0x2163,	// (0x00056043) bg_popup_call2_rect_pane_g8

0x216b,	// (0x0005604b) bg_popup_call2_rect_pane_g9

0x0008,

0xf4f3,	// (0x000633d3) bg_popup_call2_rect_pane_g

0x2173,	// (0x00056053) bg_popup_call2_bubble_pane_g1

0x217b,	// (0x0005605b) bg_popup_call2_bubble_pane_g2

0x2183,	// (0x00056063) bg_popup_call2_bubble_pane_g3

0x218b,	// (0x0005606b) bg_popup_call2_bubble_pane_g4

0x2193,	// (0x00056073) bg_popup_call2_bubble_pane_g5

0x219b,	// (0x0005607b) bg_popup_call2_bubble_pane_g6

0x21a3,	// (0x00056083) bg_popup_call2_bubble_pane_g7

0x21ab,	// (0x0005608b) bg_popup_call2_bubble_pane_g8

0x21b3,	// (0x00056093) bg_popup_call2_bubble_pane_g9

0x0008,

0xf506,	// (0x000633e6) bg_popup_call2_bubble_pane_g

0x38b0,	// (0x00057790) aid_cale_week_size_cell_pane

0x3eeb,	// (0x00057dcb) aid_cams_cif_uncrop_pane_ParamLimits

0x3eeb,	// (0x00057dcb) aid_cams_cif_uncrop_pane

0x4041,	// (0x00057f21) aid_cams_size_cell_ParamLimits

0x4041,	// (0x00057f21) aid_cams_size_cell

0x4055,	// (0x00057f35) grid_cams_pane_ParamLimits

0x406a,	// (0x00057f4a) linegrid_cams_pane_ParamLimits

0x4172,	// (0x00058052) call_video_pane_t1

0x418c,	// (0x0005806c) call_video_pane_t2

0x0001,

0xf1fc,	// (0x000630dc) call_video_pane_t

0x4511,	// (0x000583f1) aid_cale_month_size_cell_pane_ParamLimits

0x4511,	// (0x000583f1) aid_cale_month_size_cell_pane

0xf59e,	// (0x0006347e) smil_status_volume_pane_g

0xc30b,	// (0x000601eb) volume_smil_pane_ParamLimits

0xb759,	// (0x0005f639) aid_popup2_width_pane

0x37fe,	// (0x000576de) cell_qdial_pane_g4_ParamLimits

0x37fe,	// (0x000576de) cell_qdial_pane_g4

0x51e6,	// (0x000590c6) aid_blid_cardinal_pane_ParamLimits

0x51f2,	// (0x000590d2) aid_blid_destination_pane_ParamLimits

0x51f2,	// (0x000590d2) aid_blid_destination_pane

0xbe26,	// (0x0005fd06) bg_popup_call_poc_act_pane_ParamLimits

0xbe26,	// (0x0005fd06) bg_popup_call_poc_act_pane

0xbe26,	// (0x0005fd06) bg_popup_call_poc_inact_pane_ParamLimits

0xbe26,	// (0x0005fd06) bg_popup_call_poc_inact_pane

0x21bb,	// (0x0005609b) bg_popup_call_poc_act_pane_g1

0x21c3,	// (0x000560a3) bg_popup_call_poc_act_pane_g2

0x21cb,	// (0x000560ab) bg_popup_call_poc_act_pane_g3

0x218b,	// (0x0005606b) bg_popup_call_poc_act_pane_g4

0x2193,	// (0x00056073) bg_popup_call_poc_act_pane_g5

0x21d3,	// (0x000560b3) bg_popup_call_poc_act_pane_g6

0x21a3,	// (0x00056083) bg_popup_call_poc_act_pane_g7

0x21db,	// (0x000560bb) bg_popup_call_poc_act_pane_g8

0xbbcb,	// (0x0005faab) main_usb_pane

0xc2b6,	// (0x00060196) popup_cale_lunar_info_window

0x43d1,	// (0x000582b1) im_reading_pane_t1_ParamLimits

0x06d2,	// (0x000545b2) list_im_pane_ParamLimits

0x06e3,	// (0x000545c3) scroll_pane_cp07_ParamLimits

0xbbcb,	// (0x0005faab) grid_highlight_pane_cp012

0xbe26,	// (0x0005fd06) mup_scale_pane_ParamLimits

0x1151,	// (0x00055031) main_usb_pane_g1_ParamLimits

0x1151,	// (0x00055031) main_usb_pane_g1

0x5b93,	// (0x00059a73) main_usb_pane_g2_ParamLimits

0x5b93,	// (0x00059a73) main_usb_pane_g2

0x0001,

0xf543,	// (0x00063423) main_usb_pane_g_ParamLimits

0xf543,	// (0x00063423) main_usb_pane_g

0x5ba7,	// (0x00059a87) main_usb_pane_t1_ParamLimits

0x5ba7,	// (0x00059a87) main_usb_pane_t1

0x5bb9,	// (0x00059a99) main_usb_pane_t2_ParamLimits

0x5bb9,	// (0x00059a99) main_usb_pane_t2

0x5bcb,	// (0x00059aab) main_usb_pane_t3_ParamLimits

0x5bcb,	// (0x00059aab) main_usb_pane_t3

0x5bdd,	// (0x00059abd) main_usb_pane_t4_ParamLimits

0x5bdd,	// (0x00059abd) main_usb_pane_t4

0x5bef,	// (0x00059acf) main_usb_pane_t5_ParamLimits

0x5bef,	// (0x00059acf) main_usb_pane_t5

0x5c01,	// (0x00059ae1) main_usb_pane_t6_ParamLimits

0x5c01,	// (0x00059ae1) main_usb_pane_t6

0x0005,

0xf548,	// (0x00063428) main_usb_pane_t_ParamLimits

0x0e3b,	// (0x00054d1b) aid_text_placing

0x5192,	// (0x00059072) main_location2_pane_t1_ParamLimits

0x51a8,	// (0x00059088) main_location2_pane_t2_ParamLimits

0x51be,	// (0x0005909e) main_location2_pane_t3_ParamLimits

0x51d4,	// (0x000590b4) main_location2_pane_t4_ParamLimits

0x51d4,	// (0x000590b4) main_location2_pane_t4

0xf34f,	// (0x0006322f) main_location2_pane_t_ParamLimits

0xbe61,	// (0x0005fd41) find_pinb_pane_g2_ParamLimits

0xbe61,	// (0x0005fd41) find_pinb_pane_g2

0x0001,

0xf0b4,	// (0x00062f94) find_pinb_pane_g_ParamLimits

0xf0b4,	// (0x00062f94) find_pinb_pane_g

0xbe6d,	// (0x0005fd4d) find_pinb_pane_t1_ParamLimits

0xbe7f,	// (0x0005fd5f) find_pinb_pane_t2_ParamLimits

0xf0b9,	// (0x00062f99) find_pinb_pane_t_ParamLimits

0xbbcb,	// (0x0005faab) main_call3_pane

0x490c,	// (0x000587ec) cale_month_day_heading_pane_t1_ParamLimits

0x4992,	// (0x00058872) cale_month_day_heading_pane_t2_ParamLimits

0x4a23,	// (0x00058903) cale_month_day_heading_pane_t3_ParamLimits

0x4ab4,	// (0x00058994) cale_month_day_heading_pane_t4_ParamLimits

0x4b45,	// (0x00058a25) cale_month_day_heading_pane_t5_ParamLimits

0x4bd6,	// (0x00058ab6) cale_month_day_heading_pane_t6_ParamLimits

0x4c67,	// (0x00058b47) cale_month_day_heading_pane_t7_ParamLimits

0xf234,	// (0x00063114) cale_month_day_heading_pane_t_ParamLimits

0x4ec3,	// (0x00058da3) smil_status_volume_pane

0x56b4,	// (0x00059594) postcard_address_pane_ParamLimits

0x56b4,	// (0x00059594) postcard_address_pane

0x56c6,	// (0x000595a6) postcard_message_pane_ParamLimits

0x56c6,	// (0x000595a6) postcard_message_pane

0x5b71,	// (0x00059a51) call2_cli_visual_pane_t1_ParamLimits

0x5b71,	// (0x00059a51) call2_cli_visual_pane_t1

0x62fd,	// (0x0005a1dd) postcard_message_pane_t1_ParamLimits

0x62fd,	// (0x0005a1dd) postcard_message_pane_t1

0x62e5,	// (0x0005a1c5) postcard_address_pane_t1_ParamLimits

0x62e5,	// (0x0005a1c5) postcard_address_pane_t1

0x62d3,	// (0x0005a1b3) popup_call3_audio_in_window_ParamLimits

0x62d3,	// (0x0005a1b3) popup_call3_audio_in_window

0x6162,	// (0x0005a042) bg_popup_call3_in_pane_ParamLimits

0x6162,	// (0x0005a042) bg_popup_call3_in_pane

0x61d4,	// (0x0005a0b4) popup_call3_audio_in_window_g1_ParamLimits

0x61d4,	// (0x0005a0b4) popup_call3_audio_in_window_g1

0x61f4,	// (0x0005a0d4) popup_call3_audio_in_window_g2_ParamLimits

0x61f4,	// (0x0005a0d4) popup_call3_audio_in_window_g2

0x6214,	// (0x0005a0f4) popup_call3_audio_in_window_g3_ParamLimits

0x6214,	// (0x0005a0f4) popup_call3_audio_in_window_g3

0x0003,

0xf5a5,	// (0x00063485) popup_call3_audio_in_window_g_ParamLimits

0xf5a5,	// (0x00063485) popup_call3_audio_in_window_g

0x6245,	// (0x0005a125) popup_call3_audio_in_window_t1_ParamLimits

0x6245,	// (0x0005a125) popup_call3_audio_in_window_t1

0x6283,	// (0x0005a163) popup_call3_audio_in_window_t2_ParamLimits

0x6283,	// (0x0005a163) popup_call3_audio_in_window_t2

0x62c1,	// (0x0005a1a1) popup_call3_audio_in_window_t3_ParamLimits

0x62c1,	// (0x0005a1a1) popup_call3_audio_in_window_t3

0x0002,

0xf5ae,	// (0x0006348e) popup_call3_audio_in_window_t_ParamLimits

0xf5ae,	// (0x0006348e) popup_call3_audio_in_window_t

0x059a,	// (0x0005447a) bg_popup_call3_rect_pane

0x2133,	// (0x00056013) bg_popup_call3_rect_pane_g1

0xc087,	// (0x0005ff67) bg_popup_call3_rect_pane_g2

0x213b,	// (0x0005601b) bg_popup_call3_rect_pane_g3

0x2143,	// (0x00056023) bg_popup_call3_rect_pane_g4

0x214b,	// (0x0005602b) bg_popup_call3_rect_pane_g5

0x2153,	// (0x00056033) bg_popup_call3_rect_pane_g6

0x215b,	// (0x0005603b) bg_popup_call3_rect_pane_g7

0xb747,	// (0x0005f627) mup_visualizer_osc_pane

0xb747,	// (0x0005f627) mup_visualizer_spec_pane

0x6192,	// (0x0005a072) call3_video_qcif_pane_ParamLimits

0x6192,	// (0x0005a072) call3_video_qcif_pane

0x61a3,	// (0x0005a083) call3_video_qcif_uncrop_pane_ParamLimits

0x61a3,	// (0x0005a083) call3_video_qcif_uncrop_pane

0x61af,	// (0x0005a08f) call3_video_subqcif_pane_ParamLimits

0x61af,	// (0x0005a08f) call3_video_subqcif_pane

0x61c3,	// (0x0005a0a3) call3_video_subqcif_uncrop_pane_ParamLimits

0x61c3,	// (0x0005a0a3) call3_video_subqcif_uncrop_pane

0x6234,	// (0x0005a114) popup_call3_audio_in_window_g4_ParamLimits

0x6234,	// (0x0005a114) popup_call3_audio_in_window_g4

0xb747,	// (0x0005f627) mup_spec_half_pane

0xb747,	// (0x0005f627) mup_spec_half_pane_cp

0xb747,	// (0x0005f627) mup_osc_middle_pane

0x061b,	// (0x000544fb) mup_visualizer_osc_pane_g1

0x6115,	// (0x00059ff5) mup_spec_bar_pane_ParamLimits

0x6115,	// (0x00059ff5) mup_spec_bar_pane

0x061b,	// (0x000544fb) mup_spec_bar_pane_g1

0x061b,	// (0x000544fb) mup_spec_bar_pane_g2

0x0001,

0xf3c9,	// (0x000632a9) mup_spec_bar_pane_g

0x38b0,	// (0x00057790) aid_cale_week_size_cell_pane_ParamLimits

0x38ca,	// (0x000577aa) bg_cale_heading_pane_ParamLimits

0xc10d,	// (0x0005ffed) bg_cale_pane_cp01_ParamLimits

0x38e2,	// (0x000577c2) cale_week_corner_pane_ParamLimits

0x3901,	// (0x000577e1) cale_week_day_heading_pane_ParamLimits

0x391e,	// (0x000577fe) cale_week_scroll_pane_g1_ParamLimits

0x3931,	// (0x00057811) cale_week_scroll_pane_g2_ParamLimits

0x3949,	// (0x00057829) cale_week_scroll_pane_g3_ParamLimits

0x3961,	// (0x00057841) cale_week_scroll_pane_g4_ParamLimits

0x3979,	// (0x00057859) cale_week_scroll_pane_g5_ParamLimits

0x3991,	// (0x00057871) cale_week_scroll_pane_g6_ParamLimits

0x39a9,	// (0x00057889) cale_week_scroll_pane_g7_ParamLimits

0x39c1,	// (0x000578a1) cale_week_scroll_pane_g8_ParamLimits

0x39dd,	// (0x000578bd) cale_week_scroll_pane_g9_ParamLimits

0x39f5,	// (0x000578d5) cale_week_scroll_pane_g10_ParamLimits

0x3a0d,	// (0x000578ed) cale_week_scroll_pane_g11_ParamLimits

0x3a25,	// (0x00057905) cale_week_scroll_pane_g12_ParamLimits

0x3a3d,	// (0x0005791d) cale_week_scroll_pane_g13_ParamLimits

0x3a55,	// (0x00057935) cale_week_scroll_pane_g14_ParamLimits

0x3a6d,	// (0x0005794d) cale_week_scroll_pane_g15_ParamLimits

0xf145,	// (0x00063025) cale_week_scroll_pane_g_ParamLimits

0x3aa1,	// (0x00057981) cale_week_time_pane_ParamLimits

0x3abd,	// (0x0005799d) grid_cale_week_pane_ParamLimits

0xc12a,	// (0x0006000a) listscroll_cale_week_pane_t1

0xc13c,	// (0x0006001c) scroll_pane_cp08_ParamLimits

0x4566,	// (0x00058446) cale_month_corner_pane_ParamLimits

0x0913,	// (0x000547f3) cale_month_pane_t1

0x48c2,	// (0x000587a2) cale_month_week_pane_ParamLimits

0x5003,	// (0x00058ee3) popup_call_status_window_g1_ParamLimits

0x5017,	// (0x00058ef7) popup_call_status_window_g2_ParamLimits

0x502b,	// (0x00058f0b) popup_call_status_window_g3_ParamLimits

0xf2d6,	// (0x000631b6) popup_call_status_window_g_ParamLimits

0x0c96,	// (0x00054b76) aid_call2_pane

0x5509,	// (0x000593e9) msg_header_pane_g1

0x56b4,	// (0x00059594) postcard_address2_pane_ParamLimits

0x56b4,	// (0x00059594) postcard_address2_pane

0x56c6,	// (0x000595a6) postcard_message2_pane_ParamLimits

0x56c6,	// (0x000595a6) postcard_message2_pane

0x60b5,	// (0x00059f95) message2_row_pane_ParamLimits

0x60b5,	// (0x00059f95) message2_row_pane

0x60cf,	// (0x00059faf) address2_row_pane_ParamLimits

0x60cf,	// (0x00059faf) address2_row_pane

0x60e2,	// (0x00059fc2) postcard_message2_row_pane_g1

0x60ea,	// (0x00059fca) postcard_message2_row_pane_t1

0x60e2,	// (0x00059fc2) address2_row_pane_g1

0x60ea,	// (0x00059fca) address2_row_pane_t1

0x3eba,	// (0x00057d9a) aid_size_cell_vorec

0xbbcb,	// (0x0005faab) main_rss_pane

0x60f8,	// (0x00059fd8) rss_list_single_pane_ParamLimits

0x60f8,	// (0x00059fd8) rss_list_single_pane

0x6106,	// (0x00059fe6) rss_list_single_pane_t1

0x6106,	// (0x00059fe6) rss_list_single_pane_t2

0x0001,

0xf599,	// (0x00063479) rss_list_single_pane_t

0xbbcb,	// (0x0005faab) main_camera2_pane

0xbbcb,	// (0x0005faab) main_video2_pane

0xedb0,	// (0x00062c90) cams_zoom_pane_cp2_ParamLimits

0xedb0,	// (0x00062c90) cams_zoom_pane_cp2

0xedb0,	// (0x00062c90) image2_vga_pane_ParamLimits

0xedb0,	// (0x00062c90) image2_vga_pane

0xedbe,	// (0x00062c9e) main_camera2_pane_g1_ParamLimits

0xedbe,	// (0x00062c9e) main_camera2_pane_g1

0xedbe,	// (0x00062c9e) main_camera2_pane_g2_ParamLimits

0xedbe,	// (0x00062c9e) main_camera2_pane_g2

0xedbe,	// (0x00062c9e) main_camera2_pane_g3_ParamLimits

0xedbe,	// (0x00062c9e) main_camera2_pane_g3

0xedbe,	// (0x00062c9e) main_camera2_pane_g4_ParamLimits

0xedbe,	// (0x00062c9e) main_camera2_pane_g4

0xedbe,	// (0x00062c9e) main_camera2_pane_g5_ParamLimits

0xedbe,	// (0x00062c9e) main_camera2_pane_g5

0xedbe,	// (0x00062c9e) main_camera2_pane_g6_ParamLimits

0xedbe,	// (0x00062c9e) main_camera2_pane_g6

0xedbe,	// (0x00062c9e) main_camera2_pane_g7_ParamLimits

0xedbe,	// (0x00062c9e) main_camera2_pane_g7

0xedbe,	// (0x00062c9e) main_camera2_pane_g8_ParamLimits

0xedbe,	// (0x00062c9e) main_camera2_pane_g8

0x0008,

0xf5b5,	// (0x00063495) main_camera2_pane_g_ParamLimits

0xf5b5,	// (0x00063495) main_camera2_pane_g

0x6327,	// (0x0005a207) main_camera2_pane_t1_ParamLimits

0x6327,	// (0x0005a207) main_camera2_pane_t1

0x6327,	// (0x0005a207) main_camera2_pane_t2_ParamLimits

0x6327,	// (0x0005a207) main_camera2_pane_t2

0x6327,	// (0x0005a207) main_camera2_pane_t3_ParamLimits

0x6327,	// (0x0005a207) main_camera2_pane_t3

0x6327,	// (0x0005a207) main_camera2_pane_t4_ParamLimits

0x6327,	// (0x0005a207) main_camera2_pane_t4

0x0006,

0xf5c8,	// (0x000634a8) main_camera2_pane_t_ParamLimits

0xf5c8,	// (0x000634a8) main_camera2_pane_t

0xedcc,	// (0x00062cac) cams_zoom_pane_cp4_ParamLimits

0xedcc,	// (0x00062cac) cams_zoom_pane_cp4

0x633b,	// (0x0005a21b) image2_cif_pane_ParamLimits

0x633b,	// (0x0005a21b) image2_cif_pane

0xb7a2,	// (0x0005f682) image2_subqcif_pane_ParamLimits

0xb7a2,	// (0x0005f682) image2_subqcif_pane

0x6349,	// (0x0005a229) main_video2_pane_g1_ParamLimits

0x6349,	// (0x0005a229) main_video2_pane_g1

0x6349,	// (0x0005a229) main_video2_pane_g2_ParamLimits

0x6349,	// (0x0005a229) main_video2_pane_g2

0x6349,	// (0x0005a229) main_video2_pane_g3_ParamLimits

0x6349,	// (0x0005a229) main_video2_pane_g3

0x6349,	// (0x0005a229) main_video2_pane_g4_ParamLimits

0x6349,	// (0x0005a229) main_video2_pane_g4

0x6349,	// (0x0005a229) main_video2_pane_g5_ParamLimits

0x6349,	// (0x0005a229) main_video2_pane_g5

0x6349,	// (0x0005a229) main_video2_pane_g6_ParamLimits

0x6349,	// (0x0005a229) main_video2_pane_g6

0x0005,

0xf5d7,	// (0x000634b7) main_video2_pane_g_ParamLimits

0xf5d7,	// (0x000634b7) main_video2_pane_g

0x6357,	// (0x0005a237) main_video2_pane_t1_ParamLimits

0x6357,	// (0x0005a237) main_video2_pane_t1

0x6357,	// (0x0005a237) main_video2_pane_t2_ParamLimits

0x6357,	// (0x0005a237) main_video2_pane_t2

0x6357,	// (0x0005a237) main_video2_pane_t3_ParamLimits

0x6357,	// (0x0005a237) main_video2_pane_t3

0x0002,

0xf5e4,	// (0x000634c4) main_video2_pane_t_ParamLimits

0xf5e4,	// (0x000634c4) main_video2_pane_t

0x5c8d,	// (0x00059b6d) call_muted_g2

0x0001,

0xf58b,	// (0x0006346b) call_muted_g

0xbbcb,	// (0x0005faab) main_mup2_pane

0x2327,	// (0x00056207) main_mup2_pane_g1_ParamLimits

0x2327,	// (0x00056207) main_mup2_pane_g1

0x2327,	// (0x00056207) main_mup2_pane_g2_ParamLimits

0x2327,	// (0x00056207) main_mup2_pane_g2

0xc382,	// (0x00060262) main_mup_pane_g13_cp1

0xb7b0,	// (0x0005f690) mup_volume_pane_cp1

0x2327,	// (0x00056207) main_mup2_pane_g4_ParamLimits

0x2327,	// (0x00056207) main_mup2_pane_g4

0x2327,	// (0x00056207) main_mup2_pane_g5_ParamLimits

0x2327,	// (0x00056207) main_mup2_pane_g5

0x2327,	// (0x00056207) main_mup2_pane_g6_ParamLimits

0x2327,	// (0x00056207) main_mup2_pane_g6

0x2327,	// (0x00056207) main_mup2_pane_g7_ParamLimits

0x2327,	// (0x00056207) main_mup2_pane_g7

0x0006,

0xf5eb,	// (0x000634cb) main_mup2_pane_g_ParamLimits

0xf5eb,	// (0x000634cb) main_mup2_pane_g

0x2313,	// (0x000561f3) main_mup2_pane_t1_ParamLimits

0x2313,	// (0x000561f3) main_mup2_pane_t1

0x2313,	// (0x000561f3) main_mup2_pane_t2_ParamLimits

0x2313,	// (0x000561f3) main_mup2_pane_t2

0x2313,	// (0x000561f3) main_mup2_pane_t3_ParamLimits

0x2313,	// (0x000561f3) main_mup2_pane_t3

0x2313,	// (0x000561f3) main_mup2_pane_t4_ParamLimits

0x2313,	// (0x000561f3) main_mup2_pane_t4

0x2313,	// (0x000561f3) main_mup2_pane_t5_ParamLimits

0x2313,	// (0x000561f3) main_mup2_pane_t5

0x2313,	// (0x000561f3) main_mup2_pane_t6_ParamLimits

0x2313,	// (0x000561f3) main_mup2_pane_t6

0x0005,

0xf5fa,	// (0x000634da) main_mup2_pane_t_ParamLimits

0xf5fa,	// (0x000634da) main_mup2_pane_t

0x22ef,	// (0x000561cf) mup2_visualizer_pane_ParamLimits

0x22ef,	// (0x000561cf) mup2_visualizer_pane

0x22ef,	// (0x000561cf) mup_progress_pane_cp_ParamLimits

0x22ef,	// (0x000561cf) mup_progress_pane_cp

0xc36c,	// (0x0006024c) mup_volume_pane_cp_ParamLimits

0xc36c,	// (0x0006024c) mup_volume_pane_cp

0xbea0,	// (0x0005fd80) mup2_visualizer_pane_g1_ParamLimits

0xbea0,	// (0x0005fd80) mup2_visualizer_pane_g1

0xbeae,	// (0x0005fd8e) mup2_visualizer_pane_g2_ParamLimits

0xbeae,	// (0x0005fd8e) mup2_visualizer_pane_g2

0xbeae,	// (0x0005fd8e) mup2_visualizer_pane_g3_ParamLimits

0xbeae,	// (0x0005fd8e) mup2_visualizer_pane_g3

0x0002,

0xf0be,	// (0x00062f9e) mup2_visualizer_pane_g_ParamLimits

0xf0be,	// (0x00062f9e) mup2_visualizer_pane_g

0xc2a6,	// (0x00060186) aid_size_cell_fmradio

0x5de9,	// (0x00059cc9) aid_height_parent_landcape

0x0770,	// (0x00054650) wml_content_pane_cp

0x0778,	// (0x00054658) wml_tabs_pane

0x0781,	// (0x00054661) popup_wml_miniature_window

0x0789,	// (0x00054669) scroll_pane_cp021

0x079d,	// (0x0005467d) wml_content_pane_comp8

0xbbcb,	// (0x0005faab) bg_popup_sub_pane_cp05

0x6381,	// (0x0005a261) popup_wml_miniature_window_g1

0x6389,	// (0x0005a269) wml_miniature_view_pane

0x6391,	// (0x0005a271) aid_size_wml_view

0x6399,	// (0x0005a279) wml_miniature_view_pane_g1

0x63a2,	// (0x0005a282) wml_miniature_view_pane_g2

0x63ab,	// (0x0005a28b) wml_miniature_view_pane_g3

0x63b3,	// (0x0005a293) wml_miniature_view_pane_g4

0x63bb,	// (0x0005a29b) wml_miniature_view_pane_g5

0x63c3,	// (0x0005a2a3) wml_miniature_view_pane_g6

0x63cb,	// (0x0005a2ab) wml_miniature_view_pane_g7

0x63d3,	// (0x0005a2b3) wml_miniature_view_pane_g8

0x0007,

0xf607,	// (0x000634e7) wml_miniature_view_pane_g

0x63db,	// (0x0005a2bb) background_graphic_ParamLimits

0x63db,	// (0x0005a2bb) background_graphic

0x63e7,	// (0x0005a2c7) wml_tabs_2_pane

0x63f0,	// (0x0005a2d0) wml_tabs_3_pane_ParamLimits

0x63f0,	// (0x0005a2d0) wml_tabs_3_pane

0x6402,	// (0x0005a2e2) wml_tabs_4_pane_ParamLimits

0x6402,	// (0x0005a2e2) wml_tabs_4_pane

0x6418,	// (0x0005a2f8) wml_tabs_5_pane_ParamLimits

0x6418,	// (0x0005a2f8) wml_tabs_5_pane

0x6432,	// (0x0005a312) wml_tabs_pane_g2_ParamLimits

0x6432,	// (0x0005a312) wml_tabs_pane_g2

0x6447,	// (0x0005a327) wml_tabs_pane_g3_ParamLimits

0x6447,	// (0x0005a327) wml_tabs_pane_g3

0x645c,	// (0x0005a33c) wml_tabs_2_active_pane_ParamLimits

0x645c,	// (0x0005a33c) wml_tabs_2_active_pane

0x645c,	// (0x0005a33c) wml_tabs_2_passive_pane_ParamLimits

0x645c,	// (0x0005a33c) wml_tabs_2_passive_pane

0x646a,	// (0x0005a34a) wml_tabs_3_active_pane_cp_ParamLimits

0x646a,	// (0x0005a34a) wml_tabs_3_active_pane_cp

0x647b,	// (0x0005a35b) wml_tabs_3_passive_pane_ParamLimits

0x647b,	// (0x0005a35b) wml_tabs_3_passive_pane

0x648c,	// (0x0005a36c) wml_tabs_3_passive_pane_cp_ParamLimits

0x648c,	// (0x0005a36c) wml_tabs_3_passive_pane_cp

0x649d,	// (0x0005a37d) tabs_4_active_pane

0x64a5,	// (0x0005a385) tabs_4_passive_pane

0x64ad,	// (0x0005a38d) tabs_4_passive_pane_cp

0x64b5,	// (0x0005a395) tabs_4_passive_pane_cp2

0x5b8b,	// (0x00059a6b) aid_height_text

0x22ef,	// (0x000561cf) mup_volume_cont_pane_ParamLimits

0x22ef,	// (0x000561cf) mup_volume_cont_pane

0x35a8,	// (0x00057488) aid_size_cell_pinb

0xb747,	// (0x0005f627) aid_size_list_pinb

0x22ef,	// (0x000561cf) mup2_volume_cont_pane_ParamLimits

0x22ef,	// (0x000561cf) mup2_volume_cont_pane

0xc356,	// (0x00060236) mup2_volume_cont_pane_g1_ParamLimits

0xc356,	// (0x00060236) mup2_volume_cont_pane_g1

0x331d,	// (0x000571fd) aid_size_cell_touch_ParamLimits

0x331d,	// (0x000571fd) aid_size_cell_touch

0x3508,	// (0x000573e8) touch_pane_ParamLimits

0x3508,	// (0x000573e8) touch_pane

0xb7b0,	// (0x0005f690) main_rss2_pane

0x64c6,	// (0x0005a3a6) listscroll_rss2_pane

0x64cf,	// (0x0005a3af) rss2_navigation_pane

0x64d7,	// (0x0005a3b7) list_rss2_pane

0x0cc1,	// (0x00054ba1) scroll_pane_cp22

0x64df,	// (0x0005a3bf) rss2_navigation_pane_g1

0x64e8,	// (0x0005a3c8) rss2_navigation_pane_g2

0x64f0,	// (0x0005a3d0) rss2_navigation_pane_g3

0x0002,

0xf618,	// (0x000634f8) rss2_navigation_pane_g

0x64f8,	// (0x0005a3d8) rss2_navigation_pane_t1

0x6506,	// (0x0005a3e6) rss2_list_single_pane_ParamLimits

0x6506,	// (0x0005a3e6) rss2_list_single_pane

0x651a,	// (0x0005a3fa) rss2_list_single_pane_t2

0x6528,	// (0x0005a408) rss2_list_single_pane_t3_ParamLimits

0x6528,	// (0x0005a408) rss2_list_single_pane_t3

0x6545,	// (0x0005a425) rss2_list_single_pane_t4

0x4ead,	// (0x00058d8d) smil_status_pane_g1

0xb7a2,	// (0x0005f682) main_image2_pane_ParamLimits

0xb7a2,	// (0x0005f682) main_image2_pane

0xedbe,	// (0x00062c9e) main_camera2_pane_g9_ParamLimits

0xedbe,	// (0x00062c9e) main_camera2_pane_g9

0x6327,	// (0x0005a207) main_camera2_pane_t5_ParamLimits

0x6327,	// (0x0005a207) main_camera2_pane_t5

0xc320,	// (0x00060200) main_camera2_pane_t6_ParamLimits

0xc320,	// (0x00060200) main_camera2_pane_t6

0x6553,	// (0x0005a433) main_image2_pane_g1_ParamLimits

0x6553,	// (0x0005a433) main_image2_pane_g1

0x58db,	// (0x000597bb) smil2_video_pane_ParamLimits

0x58db,	// (0x000597bb) smil2_video_pane

0xb771,	// (0x0005f651) aid_zoom_text_primary_cp

0xb79a,	// (0x0005f67a) popup_preview_fixed_window

0x06ca,	// (0x000545aa) im_reading_pane_g1

0x6319,	// (0x0005a1f9) cams2_bc_adjust_pane_cp_ParamLimits

0x6319,	// (0x0005a1f9) cams2_bc_adjust_pane_cp

0xc348,	// (0x00060228) cams2_bc_adjust_pane_ParamLimits

0xc348,	// (0x00060228) cams2_bc_adjust_pane

0xc382,	// (0x00060262) cams2_bc_adjust_pane_g1

0xb7b0,	// (0x0005f690) cams2_slider_pane

0xc382,	// (0x00060262) cams2_slider_pane_g1

0xc382,	// (0x00060262) cams2_slider_pane_g2

0x0006,

0xf61f,	// (0x000634ff) cams2_slider_pane_g

0x35f1,	// (0x000574d1) calc_display_pane_ParamLimits

0x360d,	// (0x000574ed) calc_paper_pane_ParamLimits

0x362e,	// (0x0005750e) grid_calc_pane_ParamLimits

0xc235,	// (0x00060115) popup_clock_digital_window_t1_ParamLimits

0x1229,	// (0x00055109) main_image_pane_t1

0x35d3,	// (0x000574b3) aid_size_cell_calc_ParamLimits

0x35d3,	// (0x000574b3) aid_size_cell_calc

0x5e29,	// (0x00059d09) popup_blid_sat_info2_window_ParamLimits

0x5e29,	// (0x00059d09) popup_blid_sat_info2_window

0x6567,	// (0x0005a447) aid_size_cell_blid

0x656f,	// (0x0005a44f) bg_popup_window_pane_cp07

0x6592,	// (0x0005a472) grid_popup_blid_pane

0x659a,	// (0x0005a47a) heading_pane_cp05_ParamLimits

0x659a,	// (0x0005a47a) heading_pane_cp05

0x6662,	// (0x0005a542) cell_popup_blid_pane_ParamLimits

0x6662,	// (0x0005a542) cell_popup_blid_pane

0x6682,	// (0x0005a562) cell_popup_blid_pane_g1

0x668a,	// (0x0005a56a) cell_popup_blid_pane_t1

0x22ef,	// (0x000561cf) mup2_indicator_pane_ParamLimits

0x22ef,	// (0x000561cf) mup2_indicator_pane

0xb747,	// (0x0005f627) mup2_visualizer_osc_pane

0x636b,	// (0x0005a24b) mup2_visualizer_spec_pane_ParamLimits

0x636b,	// (0x0005a24b) mup2_visualizer_spec_pane

0xb747,	// (0x0005f627) mup2_spec_half_pane

0xb747,	// (0x0005f627) mup2_spec_half_pane_cp

0x6698,	// (0x0005a578) mup2_spec_bar_pane_ParamLimits

0x6698,	// (0x0005a578) mup2_spec_bar_pane

0x061b,	// (0x000544fb) mup2_spec_bar_pane_g1

0x66b7,	// (0x0005a597) mup2_spec_bar_pane_g2

0x0001,

0xf645,	// (0x00063525) mup2_spec_bar_pane_g

0xb747,	// (0x0005f627) mup2_osc_middle_pane

0x061b,	// (0x000544fb) mup2_visualizer_osc_pane_g1

0xb7da,	// (0x0005f6ba) popup_number_entry_window_t1_ParamLimits

0xb7ed,	// (0x0005f6cd) popup_number_entry_window_t2_ParamLimits

0xb7ff,	// (0x0005f6df) popup_number_entry_window_t3_ParamLimits

0x3550,	// (0x00057430) popup_number_entry_window_t5_ParamLimits

0x3550,	// (0x00057430) popup_number_entry_window_t5

0xf05f,	// (0x00062f3f) popup_number_entry_window_t_ParamLimits

0xb811,	// (0x0005f6f1) text_title_cp2_ParamLimits

0xc274,	// (0x00060154) aid_hotspot_pointer_text2_pane

0xc29a,	// (0x0006017a) main_viewer_pane_g9_ParamLimits

0xc29a,	// (0x0006017a) main_viewer_pane_g9

0x0913,	// (0x000547f3) cale_month_pane_t1_ParamLimits

0x0939,	// (0x00054819) bg_cale_pane_ParamLimits

0x0951,	// (0x00054831) list_cale_pane_ParamLimits

0x0962,	// (0x00054842) listscroll_cale_day_pane_t1

0x0974,	// (0x00054854) scroll_pane_cp09_ParamLimits

0x5302,	// (0x000591e2) main_mup_eq_pane_t1_ParamLimits

0x5302,	// (0x000591e2) main_mup_eq_pane_t1

0x531a,	// (0x000591fa) main_mup_eq_pane_t2_ParamLimits

0x531a,	// (0x000591fa) main_mup_eq_pane_t2

0x5330,	// (0x00059210) main_mup_eq_pane_t3_ParamLimits

0x5330,	// (0x00059210) main_mup_eq_pane_t3

0x5346,	// (0x00059226) main_mup_eq_pane_t4_ParamLimits

0x5346,	// (0x00059226) main_mup_eq_pane_t4

0x535c,	// (0x0005923c) main_mup_eq_pane_t5_ParamLimits

0x535c,	// (0x0005923c) main_mup_eq_pane_t5

0x5372,	// (0x00059252) main_mup_eq_pane_t6_ParamLimits

0x5372,	// (0x00059252) main_mup_eq_pane_t6

0x5384,	// (0x00059264) main_mup_eq_pane_t7_ParamLimits

0x5384,	// (0x00059264) main_mup_eq_pane_t7

0x5396,	// (0x00059276) main_mup_eq_pane_t8_ParamLimits

0x5396,	// (0x00059276) main_mup_eq_pane_t8

0x53a8,	// (0x00059288) main_mup_eq_pane_t9_ParamLimits

0x53a8,	// (0x00059288) main_mup_eq_pane_t9

0x53be,	// (0x0005929e) main_mup_eq_pane_t10_ParamLimits

0x53be,	// (0x0005929e) main_mup_eq_pane_t10

0x0009,

0xf3d5,	// (0x000632b5) main_mup_eq_pane_t_ParamLimits

0xf3d5,	// (0x000632b5) main_mup_eq_pane_t

0x5451,	// (0x00059331) mup_equalizer_pane_cp5_ParamLimits

0x5463,	// (0x00059343) mup_equalizer_pane_cp6_ParamLimits

0x5475,	// (0x00059355) mup_equalizer_pane_cp7_ParamLimits

0xb7b0,	// (0x0005f690) main_gallery_pane

0x6134,	// (0x0005a014) smil2_volume_pane

0x613c,	// (0x0005a01c) smil_status_volume_pane_g1_ParamLimits

0x614f,	// (0x0005a02f) smil_status_volume_pane_g2_ParamLimits

0xc2fe,	// (0x000601de) smil_status_volume_pane_g3_ParamLimits

0xf59e,	// (0x0006347e) smil_status_volume_pane_g_ParamLimits

0x656f,	// (0x0005a44f) bg_popup_window_pane_cp07_ParamLimits

0x657d,	// (0x0005a45d) blid_firmament_pane

0x106c,	// (0x00054f4c) aid_size_cell_gallery_ParamLimits

0x106c,	// (0x00054f4c) aid_size_cell_gallery

0x66c1,	// (0x0005a5a1) grid_gallery_pane_ParamLimits

0x66c1,	// (0x0005a5a1) grid_gallery_pane

0x66d7,	// (0x0005a5b7) cell_gallery_pane_ParamLimits

0x66d7,	// (0x0005a5b7) cell_gallery_pane

0x106c,	// (0x00054f4c) bg_cell_gallery_focus_pane_ParamLimits

0x106c,	// (0x00054f4c) bg_cell_gallery_focus_pane

0xbea0,	// (0x0005fd80) cell_gallery_pane_g1_ParamLimits

0xbea0,	// (0x0005fd80) cell_gallery_pane_g1

0xbea0,	// (0x0005fd80) cell_gallery_pane_g2_ParamLimits

0xbea0,	// (0x0005fd80) cell_gallery_pane_g2

0xbea0,	// (0x0005fd80) cell_gallery_pane_g3_ParamLimits

0xbea0,	// (0x0005fd80) cell_gallery_pane_g3

0xbeae,	// (0x0005fd8e) cell_gallery_pane_g4_ParamLimits

0xbeae,	// (0x0005fd8e) cell_gallery_pane_g4

0x0003,

0xf64a,	// (0x0006352a) cell_gallery_pane_g_ParamLimits

0xf64a,	// (0x0006352a) cell_gallery_pane_g

0x66f7,	// (0x0005a5d7) bg_cell_gallery_focus_pane_g1

0x66ff,	// (0x0005a5df) bg_cell_gallery_focus_pane_g2

0x6707,	// (0x0005a5e7) bg_cell_gallery_focus_pane_g3

0x670f,	// (0x0005a5ef) bg_cell_gallery_focus_pane_g4

0x6717,	// (0x0005a5f7) bg_cell_gallery_focus_pane_g5

0x671f,	// (0x0005a5ff) bg_cell_gallery_focus_pane_g6

0x6727,	// (0x0005a607) bg_cell_gallery_focus_pane_g7

0x672f,	// (0x0005a60f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf653,	// (0x00063533) bg_cell_gallery_focus_pane_g

0x6737,	// (0x0005a617) aid_firma_cardinal

0x674b,	// (0x0005a62b) blid_firmament_pane_t1

0x6762,	// (0x0005a642) blid_firmament_pane_t2

0x6779,	// (0x0005a659) blid_firmament_pane_t3

0x6790,	// (0x0005a670) blid_firmament_pane_t4

0x0003,

0xf664,	// (0x00063544) blid_firmament_pane_t

0x67a7,	// (0x0005a687) blid_sat_info_pane

0x061b,	// (0x000544fb) blid_sat_info_pane_g1

0x061b,	// (0x000544fb) blid_sat_info_pane_g2

0x0001,

0xf3c9,	// (0x000632a9) blid_sat_info_pane_g

0x67b7,	// (0x0005a697) blid_sat_info_pane_t1

0x67c5,	// (0x0005a6a5) smil2_volume_content_pane

0xc38c,	// (0x0006026c) smil2_volume_pane_g1

0xc394,	// (0x00060274) smil2_volume_content_pane_g1

0xc39d,	// (0x0006027d) smil2_volume_content_pane_g2

0xc3a6,	// (0x00060286) smil2_volume_content_pane_g3

0xc3af,	// (0x0006028f) smil2_volume_content_pane_g4

0xc3b8,	// (0x00060298) smil2_volume_content_pane_g5

0xc3c1,	// (0x000602a1) smil2_volume_content_pane_g6

0xc3ca,	// (0x000602aa) smil2_volume_content_pane_g7

0xc3d3,	// (0x000602b3) smil2_volume_content_pane_g8

0xc3dc,	// (0x000602bc) smil2_volume_content_pane_g9

0xc3e5,	// (0x000602c5) smil2_volume_content_pane_g10

0x0009,

0xf66d,	// (0x0006354d) smil2_volume_content_pane_g

0x3b51,	// (0x00057a31) cale_week_day_heading_pane_t1_ParamLimits

0x3b7b,	// (0x00057a5b) cale_week_day_heading_pane_t2_ParamLimits

0x3baa,	// (0x00057a8a) cale_week_day_heading_pane_t3_ParamLimits

0x3bd9,	// (0x00057ab9) cale_week_day_heading_pane_t4_ParamLimits

0x3c08,	// (0x00057ae8) cale_week_day_heading_pane_t5_ParamLimits

0x3c37,	// (0x00057b17) cale_week_day_heading_pane_t6_ParamLimits

0x3c66,	// (0x00057b46) cale_week_day_heading_pane_t7_ParamLimits

0xf166,	// (0x00063046) cale_week_day_heading_pane_t_ParamLimits

0xc159,	// (0x00060039) bg_cale_side_pane_ParamLimits

0x3c90,	// (0x00057b70) cale_week_time_pane_t1_ParamLimits

0x3cca,	// (0x00057baa) cale_week_time_pane_t2_ParamLimits

0x3d04,	// (0x00057be4) cale_week_time_pane_t3_ParamLimits

0x3d3e,	// (0x00057c1e) cale_week_time_pane_t4_ParamLimits

0x3d78,	// (0x00057c58) cale_week_time_pane_t5_ParamLimits

0x3db2,	// (0x00057c92) cale_week_time_pane_t6_ParamLimits

0x3dec,	// (0x00057ccc) cale_week_time_pane_t7_ParamLimits

0x3e26,	// (0x00057d06) cale_week_time_pane_t8_ParamLimits

0xf175,	// (0x00063055) cale_week_time_pane_t_ParamLimits

0x3e60,	// (0x00057d40) cell_cale_week_pane_g2_ParamLimits

0xc159,	// (0x00060039) bg_cale_side_pane_cp01_ParamLimits

0x4cfc,	// (0x00058bdc) cale_month_week_pane_t1_ParamLimits

0x4d15,	// (0x00058bf5) cale_month_week_pane_t2_ParamLimits

0x4d2e,	// (0x00058c0e) cale_month_week_pane_t3_ParamLimits

0x4d47,	// (0x00058c27) cale_month_week_pane_t4_ParamLimits

0x4d60,	// (0x00058c40) cale_month_week_pane_t5_ParamLimits

0x4d79,	// (0x00058c59) cale_month_week_pane_t6_ParamLimits

0xf243,	// (0x00063123) cale_month_week_pane_t_ParamLimits

0xc1b5,	// (0x00060095) cell_cale_month_pane_g1_ParamLimits

0xb7b0,	// (0x0005f690) main_cale_event_viewer_pane

0xb747,	// (0x0005f627) listscroll_cale_event_viewer_pane

0xc3ee,	// (0x000602ce) list_cale_ev_pane

0xc3f6,	// (0x000602d6) scroll_pane_cp023

0x67ce,	// (0x0005a6ae) field_cale_ev_pane_ParamLimits

0x67ce,	// (0x0005a6ae) field_cale_ev_pane

0xc402,	// (0x000602e2) field_cale_ev_content_pane_ParamLimits

0xc402,	// (0x000602e2) field_cale_ev_content_pane

0xc40e,	// (0x000602ee) field_cale_ev_pane_g1_ParamLimits

0xc40e,	// (0x000602ee) field_cale_ev_pane_g1

0xc41a,	// (0x000602fa) field_cale_ev_pane_g2_ParamLimits

0xc41a,	// (0x000602fa) field_cale_ev_pane_g2

0xc432,	// (0x00060312) field_cale_ev_pane_g3_ParamLimits

0xc432,	// (0x00060312) field_cale_ev_pane_g3

0x0002,

0xf682,	// (0x00063562) field_cale_ev_pane_g_ParamLimits

0xf682,	// (0x00063562) field_cale_ev_pane_g

0xc44a,	// (0x0006032a) field_cale_ev_pane_t1_ParamLimits

0xc44a,	// (0x0006032a) field_cale_ev_pane_t1

0x3852,	// (0x00057732) field_cale_ev_content_pane_t1_ParamLimits

0x3852,	// (0x00057732) field_cale_ev_content_pane_t1

0x110f,	// (0x00054fef) bg_button_pane_cp01

0x38a0,	// (0x00057780) listscroll_cale_week_pane_ParamLimits

0xc104,	// (0x0005ffe4) popup_toolbar_window_cp01

0xc12a,	// (0x0006000a) listscroll_cale_week_pane_t1_ParamLimits

0x38a0,	// (0x00057780) listscroll_cale_day_pane_ParamLimits

0xc104,	// (0x0005ffe4) popup_toolbar_window_cp02

0x0962,	// (0x00054842) listscroll_cale_day_pane_t1_ParamLimits

0x5df1,	// (0x00059cd1) main_cale_month_pane_ParamLimits

0xc2e9,	// (0x000601c9) popup_toolbar_window_cp03_ParamLimits

0xc2e9,	// (0x000601c9) popup_toolbar_window_cp03

0x57b5,	// (0x00059695) main_image_pane_g2_ParamLimits

0x57b5,	// (0x00059695) main_image_pane_g2

0x57c6,	// (0x000596a6) main_image_pane_g3_ParamLimits

0x57c6,	// (0x000596a6) main_image_pane_g3

0x0002,

0xf467,	// (0x00063347) main_image_pane_g_ParamLimits

0xf467,	// (0x00063347) main_image_pane_g

0x1229,	// (0x00055109) main_image_pane_t1_ParamLimits

0x57d7,	// (0x000596b7) main_image_pane_t2_ParamLimits

0x57d7,	// (0x000596b7) main_image_pane_t2

0x57e9,	// (0x000596c9) main_image_pane_t3_ParamLimits

0x57e9,	// (0x000596c9) main_image_pane_t3

0x5811,	// (0x000596f1) main_image_pane_t4_ParamLimits

0x5811,	// (0x000596f1) main_image_pane_t4

0x0003,

0xf46e,	// (0x0006334e) main_image_pane_t_ParamLimits

0xf46e,	// (0x0006334e) main_image_pane_t

0x5831,	// (0x00059711) popup_image_details_window_cp01

0x5839,	// (0x00059719) popup_toobar_trans_pane_cp01_ParamLimits

0x5839,	// (0x00059719) popup_toobar_trans_pane_cp01

0x5ef2,	// (0x00059dd2) popup_image_details_window_ParamLimits

0x5ef2,	// (0x00059dd2) popup_image_details_window

0xc2be,	// (0x0006019e) popup_image_focus_window

0xedb0,	// (0x00062c90) camera2_autofocus_pane_ParamLimits

0xedb0,	// (0x00062c90) camera2_autofocus_pane

0xb747,	// (0x0005f627) bg_popup_sub_pane_cp06

0xc461,	// (0x00060341) popup_image_focus_window_g1

0xc469,	// (0x00060349) popup_image_focus_window_g2

0xc471,	// (0x00060351) popup_image_focus_window_g3

0xc479,	// (0x00060359) popup_image_focus_window_g4

0x0003,

0xf689,	// (0x00063569) popup_image_focus_window_g

0xc481,	// (0x00060361) popup_image_focus_window_t1

0xc48f,	// (0x0006036f) popup_image_focus_window_t2

0xc49e,	// (0x0006037e) popup_image_focus_window_t3

0x0002,

0xf692,	// (0x00063572) popup_image_focus_window_t

0xbea0,	// (0x0005fd80) camera2_autofocus_pane_g1

0x106c,	// (0x00054f4c) bg_tb_trans_pane_cp01

0xc4ac,	// (0x0006038c) popup_image_details_window_g1

0xc4bf,	// (0x0006039f) popup_image_details_window_g2

0x0002,

0xf6a4,	// (0x00063584) popup_image_details_window_g

0xc4e8,	// (0x000603c8) popup_image_details_window_t1

0xc4fa,	// (0x000603da) popup_image_details_window_t2

0xc513,	// (0x000603f3) popup_image_details_window_t3

0xc527,	// (0x00060407) popup_image_details_window_t4

0xc542,	// (0x00060422) popup_image_details_window_t5

0x0004,

0xf6ab,	// (0x0006358b) popup_image_details_window_t

0xbf14,	// (0x0005fdf4) bg_calc_paper_pane_ParamLimits

0xb7b0,	// (0x0005f690) grid_highlight_pane_cp013

0xbf2c,	// (0x0005fe0c) list_calc_pane_ParamLimits

0xbf3e,	// (0x0005fe1e) scroll_pane_cp024

0xbf46,	// (0x0005fe26) bg_calc_display_pane_ParamLimits

0xbf52,	// (0x0005fe32) calc_display_pane_t1_ParamLimits

0xbf67,	// (0x0005fe47) calc_display_pane_t2_ParamLimits

0xbf7c,	// (0x0005fe5c) calc_display_pane_t3_ParamLimits

0xf0e6,	// (0x00062fc6) calc_display_pane_t_ParamLimits

0x37ad,	// (0x0005768d) cell_calc_pane_g2

0x0001,

0xf103,	// (0x00062fe3) cell_calc_pane_g

0x37b6,	// (0x00057696) cell_calc_pane_t1

0xbfe9,	// (0x0005fec9) grid_highlight_pane_cp02_ParamLimits

0xbfff,	// (0x0005fedf) toolbar_button_pane_cp01_ParamLimits

0xbfff,	// (0x0005fedf) toolbar_button_pane_cp01

0x126e,	// (0x0005514e) temp_image_control_pane_ParamLimits

0x126e,	// (0x0005514e) temp_image_control_pane

0xb7a2,	// (0x0005f682) main_mp3_pane

0xc55c,	// (0x0006043c) temp_image_control_pane_g1_ParamLimits

0xc55c,	// (0x0006043c) temp_image_control_pane_g1

0xc56a,	// (0x0006044a) temp_image_control_pane_g2_ParamLimits

0xc56a,	// (0x0006044a) temp_image_control_pane_g2

0xc57c,	// (0x0006045c) temp_image_control_pane_g3_ParamLimits

0xc57c,	// (0x0006045c) temp_image_control_pane_g3

0x67e8,	// (0x0005a6c8) temp_image_control_pane_g4_ParamLimits

0x67e8,	// (0x0005a6c8) temp_image_control_pane_g4

0x0003,

0xf6b6,	// (0x00063596) temp_image_control_pane_g_ParamLimits

0xf6b6,	// (0x00063596) temp_image_control_pane_g

0xc55c,	// (0x0006043c) main_mp3_pane_g1

0x67f9,	// (0x0005a6d9) main_mp3_pane_g2

0x0007,

0xf6bf,	// (0x0006359f) main_mp3_pane_g

0xc5b1,	// (0x00060491) main_mp3_pane_t1

0xbeae,	// (0x0005fd8e) main_camera_pane_g8_ParamLimits

0xbeae,	// (0x0005fd8e) main_camera_pane_g8

0x3fef,	// (0x00057ecf) main_video_pane_g7_ParamLimits

0x3fef,	// (0x00057ecf) main_video_pane_g7

0xc334,	// (0x00060214) main_camera2_pane_t7_ParamLimits

0xc334,	// (0x00060214) main_camera2_pane_t7

0x0730,	// (0x00054610) scroll_pane_cp025_ParamLimits

0x0730,	// (0x00054610) scroll_pane_cp025

0x0744,	// (0x00054624) scroll_pane_cp026_ParamLimits

0x0744,	// (0x00054624) scroll_pane_cp026

0x0753,	// (0x00054633) wml_content_pane_ParamLimits

0xb7b0,	// (0x0005f690) main_touch_calib_pane

0x68bb,	// (0x0005a79b) main_touch_calib_pane_g1

0x68cd,	// (0x0005a7ad) main_touch_calib_pane_g2

0x68df,	// (0x0005a7bf) main_touch_calib_pane_g3

0x68f1,	// (0x0005a7d1) main_touch_calib_pane_g4

0x0003,

0xf6dd,	// (0x000635bd) main_touch_calib_pane_g

0x6903,	// (0x0005a7e3) main_touch_calib_pane_t1

0x691b,	// (0x0005a7fb) main_touch_calib_pane_t2

0x0004,

0xf6e6,	// (0x000635c6) main_touch_calib_pane_t

0x0e74,	// (0x00054d54) mup_progress_pane_cp02

0x0ea9,	// (0x00054d89) navi_pane_g1

0x0f34,	// (0x00054e14) navi_pane_mp_t3

0xb7a2,	// (0x0005f682) main_mp3_pane_ParamLimits

0x605e,	// (0x00059f3e) navi_pane_ParamLimits

0xc55c,	// (0x0006043c) main_mp3_pane_g1_ParamLimits

0x67f9,	// (0x0005a6d9) main_mp3_pane_g2_ParamLimits

0x6805,	// (0x0005a6e5) main_mp3_pane_g3_ParamLimits

0x6805,	// (0x0005a6e5) main_mp3_pane_g3

0x6811,	// (0x0005a6f1) main_mp3_pane_g4_ParamLimits

0x6811,	// (0x0005a6f1) main_mp3_pane_g4

0xbea0,	// (0x0005fd80) main_mp3_pane_g5_ParamLimits

0xbea0,	// (0x0005fd80) main_mp3_pane_g5

0xc58c,	// (0x0006046c) main_mp3_pane_g6_ParamLimits

0xc58c,	// (0x0006046c) main_mp3_pane_g6

0xc599,	// (0x00060479) main_mp3_pane_g7_ParamLimits

0xc599,	// (0x00060479) main_mp3_pane_g7

0xc5a5,	// (0x00060485) main_mp3_pane_g8_ParamLimits

0xc5a5,	// (0x00060485) main_mp3_pane_g8

0xf6bf,	// (0x0006359f) main_mp3_pane_g_ParamLimits

0x681d,	// (0x0005a6fd) main_mp3_pane_t2

0x682b,	// (0x0005a70b) main_mp3_pane_t3

0xc5bf,	// (0x0006049f) main_mp3_pane_t4

0xc5cd,	// (0x000604ad) main_mp3_pane_t5

0x0005,

0xf6d0,	// (0x000635b0) main_mp3_pane_t

0xc5db,	// (0x000604bb) mup_progress_pane_cp01

0xb771,	// (0x0005f651) aid_zoom_text_secondary2

0xc3ee,	// (0x000602ce) list_cale_ev2_pane

0xc3f6,	// (0x000602d6) scroll_pane_cp023_ParamLimits

0x6969,	// (0x0005a849) field_cale_ev2_pane_ParamLimits

0x6969,	// (0x0005a849) field_cale_ev2_pane

0xc5e3,	// (0x000604c3) field_cale_ev2_pane_g1_ParamLimits

0xc5e3,	// (0x000604c3) field_cale_ev2_pane_g1

0xc5ef,	// (0x000604cf) field_cale_ev2_pane_g2_ParamLimits

0xc5ef,	// (0x000604cf) field_cale_ev2_pane_g2

0xc607,	// (0x000604e7) field_cale_ev2_pane_g3_ParamLimits

0xc607,	// (0x000604e7) field_cale_ev2_pane_g3

0x0003,

0xf6f1,	// (0x000635d1) field_cale_ev2_pane_g_ParamLimits

0xf6f1,	// (0x000635d1) field_cale_ev2_pane_g

0xc62b,	// (0x0006050b) field_cale_ev2_pane_t1_ParamLimits

0xc62b,	// (0x0006050b) field_cale_ev2_pane_t1

0xc642,	// (0x00060522) field_cale_ev2_pane_t2_ParamLimits

0xc642,	// (0x00060522) field_cale_ev2_pane_t2

0x0001,

0xf6fa,	// (0x000635da) field_cale_ev2_pane_t_ParamLimits

0xf6fa,	// (0x000635da) field_cale_ev2_pane_t

0x5670,	// (0x00059550) main_postcard_pane_g5_ParamLimits

0x5670,	// (0x00059550) main_postcard_pane_g5

0x5684,	// (0x00059564) main_postcard_pane_g6_ParamLimits

0x5684,	// (0x00059564) main_postcard_pane_g6

0x106c,	// (0x00054f4c) camera2_autofocus_pane_cp_ParamLimits

0x106c,	// (0x00054f4c) camera2_autofocus_pane_cp

0xb7a2,	// (0x0005f682) main_mup3_pane

0x69bf,	// (0x0005a89f) main_mup3_pane_g1_ParamLimits

0x69bf,	// (0x0005a89f) main_mup3_pane_g1

0x69e1,	// (0x0005a8c1) main_mup3_pane_g2_ParamLimits

0x69e1,	// (0x0005a8c1) main_mup3_pane_g2

0x6a54,	// (0x0005a934) main_mup3_pane_g3_ParamLimits

0x6a54,	// (0x0005a934) main_mup3_pane_g3

0x6a92,	// (0x0005a972) main_mup3_pane_g4_ParamLimits

0x6a92,	// (0x0005a972) main_mup3_pane_g4

0x6ad0,	// (0x0005a9b0) main_mup3_pane_g5_ParamLimits

0x6ad0,	// (0x0005a9b0) main_mup3_pane_g5

0x6b0e,	// (0x0005a9ee) main_mup3_pane_g6_ParamLimits

0x6b0e,	// (0x0005a9ee) main_mup3_pane_g6

0xbeae,	// (0x0005fd8e) main_mup3_pane_g7_ParamLimits

0xbeae,	// (0x0005fd8e) main_mup3_pane_g7

0x0007,

0xf70a,	// (0x000635ea) main_mup3_pane_g_ParamLimits

0xf70a,	// (0x000635ea) main_mup3_pane_g

0x6b84,	// (0x0005aa64) main_mup3_pane_t1_ParamLimits

0x6b84,	// (0x0005aa64) main_mup3_pane_t1

0x6bea,	// (0x0005aaca) main_mup3_pane_t2_ParamLimits

0x6bea,	// (0x0005aaca) main_mup3_pane_t2

0x6cb0,	// (0x0005ab90) main_mup3_pane_t4_ParamLimits

0x6cb0,	// (0x0005ab90) main_mup3_pane_t4

0x6cfe,	// (0x0005abde) main_mup3_pane_t5_ParamLimits

0x6cfe,	// (0x0005abde) main_mup3_pane_t5

0x6dac,	// (0x0005ac8c) main_mup3_pane_t6_ParamLimits

0x6dac,	// (0x0005ac8c) main_mup3_pane_t6

0x0005,

0xf71b,	// (0x000635fb) main_mup3_pane_t_ParamLimits

0xf71b,	// (0x000635fb) main_mup3_pane_t

0x6e60,	// (0x0005ad40) mup3_progress_pane_ParamLimits

0x6e60,	// (0x0005ad40) mup3_progress_pane

0x6edc,	// (0x0005adbc) popup_mup3_control_window_ParamLimits

0x6edc,	// (0x0005adbc) popup_mup3_control_window

0xc657,	// (0x00060537) popup_mup3_text_window

0x6f0a,	// (0x0005adea) mup3_progress_pane_t1

0x6f28,	// (0x0005ae08) mup3_progress_pane_t2

0xc65f,	// (0x0006053f) mup3_progress_pane_t3

0x0002,

0xf728,	// (0x00063608) mup3_progress_pane_t

0xc67c,	// (0x0006055c) mup_progress_pane_cp03

0xb747,	// (0x0005f627) bg_tb_trans_pane_cp04

0x6f46,	// (0x0005ae26) mup3_volume_pane

0x6f4e,	// (0x0005ae2e) popup_mup3_control_window_g1

0x6f57,	// (0x0005ae37) mup3_volume_pane_g1

0x6f60,	// (0x0005ae40) mup3_volume_pane_g2

0x6f69,	// (0x0005ae49) mup3_volume_pane_g3

0x0002,

0xf72f,	// (0x0006360f) mup3_volume_pane_g

0xb747,	// (0x0005f627) bg_tb_trans_pane_cp03

0xc68c,	// (0x0006056c) popup_mup3_text_window_g1

0xc694,	// (0x00060574) popup_mup3_text_window_t1

0xbfca,	// (0x0005feaa) list_calc_item_pane_g1_ParamLimits

0x64bd,	// (0x0005a39d) mup_volume_pane_cp_g1

0x6933,	// (0x0005a813) main_touch_calib_pane_t3

0x6945,	// (0x0005a825) main_touch_calib_pane_t4

0x6957,	// (0x0005a837) main_touch_calib_pane_t5

0xb751,	// (0x0005f631) aid_cell_size_toolbar2

0xb759,	// (0x0005f639) aid_popup3_width_pane

0xb761,	// (0x0005f641) aid_zoom_text_msg_primary

0x05cc,	// (0x000544ac) vorec_t7

0xbf8e,	// (0x0005fe6e) bg_calc_paper_pane_g1_ParamLimits

0xbf9a,	// (0x0005fe7a) bg_calc_paper_pane_g2_ParamLimits

0xbfa6,	// (0x0005fe86) bg_calc_paper_pane_g3_ParamLimits

0xbfb2,	// (0x0005fe92) bg_calc_paper_pane_g4_ParamLimits

0xbfbe,	// (0x0005fe9e) bg_calc_paper_pane_g5_ParamLimits

0x3747,	// (0x00057627) bg_calc_paper_pane_g6_ParamLimits

0x3756,	// (0x00057636) bg_calc_paper_pane_g7_ParamLimits

0x3765,	// (0x00057645) bg_calc_paper_pane_g8_ParamLimits

0xf0ed,	// (0x00062fcd) bg_calc_paper_pane_g_ParamLimits

0x3774,	// (0x00057654) calc_bg_paper_pane_g9_ParamLimits

0x106c,	// (0x00054f4c) image_qvga_pane_ParamLimits

0x106c,	// (0x00054f4c) image_qvga_pane

0xbe26,	// (0x0005fd06) bg_popup_sub_pane_cp04_ParamLimits

0x11a5,	// (0x00055085) popup_mup_playback_window_g1_ParamLimits

0x11b1,	// (0x00055091) popup_mup_playback_window_t1_ParamLimits

0x11c6,	// (0x000550a6) popup_mup_playback_window_t2_ParamLimits

0xf462,	// (0x00063342) popup_mup_playback_window_t_ParamLimits

0xbeae,	// (0x0005fd8e) main_mup2_pane_g3_ParamLimits

0xbeae,	// (0x0005fd8e) main_mup2_pane_g3

0x420b,	// (0x000580eb) popup_toolbar_window_cp04

0x158c,	// (0x0005546c) popup_call2_audio_second_window_g3_ParamLimits

0x158c,	// (0x0005546c) popup_call2_audio_second_window_g3

0x1996,	// (0x00055876) popup_call2_audio_first_window_g4_ParamLimits

0x1996,	// (0x00055876) popup_call2_audio_first_window_g4

0x1fbd,	// (0x00055e9d) popup_call2_audio_in_window_g4_ParamLimits

0x1fbd,	// (0x00055e9d) popup_call2_audio_in_window_g4

0x5797,	// (0x00059677) aid_area_sk_bg_cut_ParamLimits

0x5797,	// (0x00059677) aid_area_sk_bg_cut

0x11db,	// (0x000550bb) aid_area_sk_bg_cut_2_ParamLimits

0x11db,	// (0x000550bb) aid_area_sk_bg_cut_2

0xb747,	// (0x0005f627) aid_placing_details_win

0xb747,	// (0x0005f627) aid_placing_details_win_2

0xbea0,	// (0x0005fd80) camera2_autofocus_pane_g1_ParamLimits

0x34a9,	// (0x00057389) popup_fixed_preview_cale_window_ParamLimits

0x34a9,	// (0x00057389) popup_fixed_preview_cale_window

0x0faa,	// (0x00054e8a) navi_slider_pane_g3

0x0fb3,	// (0x00054e93) navi_slider_pane_g4

0x0fbc,	// (0x00054e9c) navi_slider_pane_g5

0x0faa,	// (0x00054e8a) navi_slider_pane_g6

0xc25b,	// (0x0006013b) navi_slider_pane_g7

0x10dc,	// (0x00054fbc) mup_scale_pane_g3

0x10e5,	// (0x00054fc5) mup_scale_pane_g4

0x10ee,	// (0x00054fce) mup_scale_pane_g5

0x5489,	// (0x00059369) mup_scale_pane_g6

0x5492,	// (0x00059372) mup_scale_pane_g7

0xc382,	// (0x00060262) cams2_slider_pane_g3

0xc382,	// (0x00060262) cams2_slider_pane_g4

0xc382,	// (0x00060262) cams2_slider_pane_g5

0xc382,	// (0x00060262) cams2_slider_pane_g6

0xc382,	// (0x00060262) cams2_slider_pane_g7

0x061b,	// (0x000544fb) camera2_autofocus_pane_cp_g1

0x22e3,	// (0x000561c3) bg_popup_preview_window_pane_cp02_ParamLimits

0x22e3,	// (0x000561c3) bg_popup_preview_window_pane_cp02

0xc6a2,	// (0x00060582) list_fp_cale_pane_ParamLimits

0xc6a2,	// (0x00060582) list_fp_cale_pane

0xc6ae,	// (0x0006058e) popup_fixed_preview_cale_window_t1_ParamLimits

0xc6ae,	// (0x0006058e) popup_fixed_preview_cale_window_t1

0x6f72,	// (0x0005ae52) popup_fixed_preview_cale_window_t2_ParamLimits

0x6f72,	// (0x0005ae52) popup_fixed_preview_cale_window_t2

0x6f87,	// (0x0005ae67) popup_fixed_preview_cale_window_t3_ParamLimits

0x6f87,	// (0x0005ae67) popup_fixed_preview_cale_window_t3

0x0002,

0xf736,	// (0x00063616) popup_fixed_preview_cale_window_t_ParamLimits

0xf736,	// (0x00063616) popup_fixed_preview_cale_window_t

0x6f9c,	// (0x0005ae7c) list_single_fp_cale_pane_ParamLimits

0x6f9c,	// (0x0005ae7c) list_single_fp_cale_pane

0xc6cc,	// (0x000605ac) list_single_fp_cale_pane_g1_ParamLimits

0xc6cc,	// (0x000605ac) list_single_fp_cale_pane_g1

0xc6d8,	// (0x000605b8) list_single_fp_cale_pane_g2_ParamLimits

0xc6d8,	// (0x000605b8) list_single_fp_cale_pane_g2

0x0002,

0xf73d,	// (0x0006361d) list_single_fp_cale_pane_g_ParamLimits

0xf73d,	// (0x0006361d) list_single_fp_cale_pane_g

0xc6f1,	// (0x000605d1) list_single_fp_cale_pane_t1_ParamLimits

0xc6f1,	// (0x000605d1) list_single_fp_cale_pane_t1

0xc703,	// (0x000605e3) list_single_fp_cale_pane_t2_ParamLimits

0xc703,	// (0x000605e3) list_single_fp_cale_pane_t2

0x0001,

0xf744,	// (0x00063624) list_single_fp_cale_pane_t_ParamLimits

0xf744,	// (0x00063624) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb7b0,	// (0x0005f690) main_dialer_pane

0x6fb0,	// (0x0005ae90) aid_cell_size_keypad

0xb747,	// (0x0005f627) dialer_ne_pane

0xb747,	// (0x0005f627) grid_dialer_command_1_pane

0xb747,	// (0x0005f627) grid_dialer_command_2_pane

0xb747,	// (0x0005f627) grid_dialer_keypad_pane

0x6fba,	// (0x0005ae9a) bg_popup_call_pane_cp06_ParamLimits

0x6fba,	// (0x0005ae9a) bg_popup_call_pane_cp06

0x6fba,	// (0x0005ae9a) dialer_ne_clear_pane_ParamLimits

0x6fba,	// (0x0005ae9a) dialer_ne_clear_pane

0x061b,	// (0x000544fb) dialer_ne_pane_g1

0x05ed,	// (0x000544cd) dialer_ne_pane_t1_ParamLimits

0x05ed,	// (0x000544cd) dialer_ne_pane_t1

0x6fc8,	// (0x0005aea8) dialer_ne_pane_t2_ParamLimits

0x6fc8,	// (0x0005aea8) dialer_ne_pane_t2

0x6ff0,	// (0x0005aed0) dialer_ne_pane_t3_ParamLimits

0x6ff0,	// (0x0005aed0) dialer_ne_pane_t3

0x0002,

0xf749,	// (0x00063629) dialer_ne_pane_t_ParamLimits

0xf749,	// (0x00063629) dialer_ne_pane_t

0x6ff0,	// (0x0005aed0) dialer_ne_pane_t3_copy1_ParamLimits

0x6ff0,	// (0x0005aed0) dialer_ne_pane_t3_copy1

0x701d,	// (0x0005aefd) cell_dialer_keypad_pane_ParamLimits

0x701d,	// (0x0005aefd) cell_dialer_keypad_pane

0x7032,	// (0x0005af12) cell_dialer_command_1_pane_ParamLimits

0x7032,	// (0x0005af12) cell_dialer_command_1_pane

0x7043,	// (0x0005af23) cell_dialer_command_2_pane_ParamLimits

0x7043,	// (0x0005af23) cell_dialer_command_2_pane

0x106c,	// (0x00054f4c) bg_button_pane_cp02_ParamLimits

0x106c,	// (0x00054f4c) bg_button_pane_cp02

0xbea0,	// (0x0005fd80) cell_dialer_keypad_pane_g1_ParamLimits

0xbea0,	// (0x0005fd80) cell_dialer_keypad_pane_g1

0x106c,	// (0x00054f4c) bg_button_pane_cp03_ParamLimits

0x106c,	// (0x00054f4c) bg_button_pane_cp03

0xbea0,	// (0x0005fd80) cell_dialer_command_1_pane_g1_ParamLimits

0xbea0,	// (0x0005fd80) cell_dialer_command_1_pane_g1

0xb747,	// (0x0005f627) bg_button_pane_cp04

0x061b,	// (0x000544fb) cell_dialer_command_2_pane_g1

0xb747,	// (0x0005f627) bg_button_pane_cp06

0x061b,	// (0x000544fb) dialer_ne_clear_pane_g1

0x0eb5,	// (0x00054d95) navi_pane_g2

0x528f,	// (0x0005916f) navi_pane_g3

0x0002,

0xf365,	// (0x00063245) navi_pane_g

0x0f42,	// (0x00054e22) navi_pane_mv_g2

0x0f69,	// (0x00054e49) navi_pane_mv_g5

0x52ac,	// (0x0005918c) navi_pane_mv_t1

0xbf46,	// (0x0005fe26) main_clock2_pane

0x708f,	// (0x0005af6f) main_clock2_list_pane_ParamLimits

0x708f,	// (0x0005af6f) main_clock2_list_pane

0x70c1,	// (0x0005afa1) main_clock2_pane_t1_ParamLimits

0x70c1,	// (0x0005afa1) main_clock2_pane_t1

0x70fb,	// (0x0005afdb) main_clock2_pane_t2_ParamLimits

0x70fb,	// (0x0005afdb) main_clock2_pane_t2

0x0004,

0xf755,	// (0x00063635) main_clock2_pane_t_ParamLimits

0xf755,	// (0x00063635) main_clock2_pane_t

0x718f,	// (0x0005b06f) popup_clock_analogue_window_cp03_ParamLimits

0x718f,	// (0x0005b06f) popup_clock_analogue_window_cp03

0x71b4,	// (0x0005b094) popup_clock_digital_window_cp02_ParamLimits

0x71b4,	// (0x0005b094) popup_clock_digital_window_cp02

0x7225,	// (0x0005b105) main_clock2_list_single_pane_ParamLimits

0x7225,	// (0x0005b105) main_clock2_list_single_pane

0x059a,	// (0x0005447a) list_highlight_pane_cp05

0xc766,	// (0x00060646) main_clock2_list_single_pane_t1

0x420b,	// (0x000580eb) popup_toolbar_window_cp04_ParamLimits

0xbeae,	// (0x0005fd8e) camera2_autofocus_pane_g2_ParamLimits

0xbeae,	// (0x0005fd8e) camera2_autofocus_pane_g2

0xbeae,	// (0x0005fd8e) camera2_autofocus_pane_g3_ParamLimits

0xbeae,	// (0x0005fd8e) camera2_autofocus_pane_g3

0xbeae,	// (0x0005fd8e) camera2_autofocus_pane_g4_ParamLimits

0xbeae,	// (0x0005fd8e) camera2_autofocus_pane_g4

0xbeae,	// (0x0005fd8e) camera2_autofocus_pane_g5_ParamLimits

0xbeae,	// (0x0005fd8e) camera2_autofocus_pane_g5

0x0004,

0xf699,	// (0x00063579) camera2_autofocus_pane_g_ParamLimits

0xf699,	// (0x00063579) camera2_autofocus_pane_g

0x6981,	// (0x0005a861) camera2_autofocus_pane_cp_g2

0x6989,	// (0x0005a869) camera2_autofocus_pane_cp_g3

0x6991,	// (0x0005a871) camera2_autofocus_pane_cp_g4

0x6999,	// (0x0005a879) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ff,	// (0x000635df) camera2_autofocus_pane_cp_g

0xb747,	// (0x0005f627) popup_dialer_spcha_window

0xb747,	// (0x0005f627) bg_popup_sub_pane_cp07

0xb747,	// (0x0005f627) list_spcha_pane

0xc774,	// (0x00060654) list_single_spcha_pane_ParamLimits

0xc774,	// (0x00060654) list_single_spcha_pane

0xb747,	// (0x0005f627) list_highlight_pane_cp06

0x228b,	// (0x0005616b) list_single_spcha_pane_t1

0x1d67,	// (0x00055c47) popup_call2_audio_out_window_g4_ParamLimits

0x1d67,	// (0x00055c47) popup_call2_audio_out_window_g4

0xb7b0,	// (0x0005f690) main_imed2_pane

0xc2c6,	// (0x000601a6) popup_imed_adjust2_window

0x5f08,	// (0x00059de8) popup_imed_trans_window_ParamLimits

0x5f08,	// (0x00059de8) popup_imed_trans_window

0x65c6,	// (0x0005a4a6) popup_blid_sat_info2_window_t1

0x65d4,	// (0x0005a4b4) popup_blid_sat_info2_window_t2

0x000a,

0xf62e,	// (0x0006350e) popup_blid_sat_info2_window_t

0x72cf,	// (0x0005b1af) aid_size_cell_colour_35

0x72ef,	// (0x0005b1cf) aid_size_cell_colour_112

0x730f,	// (0x0005b1ef) aid_size_cell_effect

0x22ef,	// (0x000561cf) bg_tb_trans_pane_cp02

0x0a6b,	// (0x0005494b) heading_imed_pane

0x732f,	// (0x0005b20f) listscroll_imed_pane

0xc786,	// (0x00060666) heading_imed_pane_g1

0xc78e,	// (0x0006066e) heading_imed_pane_t1

0xc79c,	// (0x0006067c) grid_imed_colour_35_pane_ParamLimits

0xc79c,	// (0x0006067c) grid_imed_colour_35_pane

0x733b,	// (0x0005b21b) grid_imed_effect_pane

0xc7af,	// (0x0006068f) list_imed_aspect_pane

0x734e,	// (0x0005b22e) scroll_pane_cp027_ParamLimits

0x734e,	// (0x0005b22e) scroll_pane_cp027

0x735a,	// (0x0005b23a) cell_imed_effect_pane_ParamLimits

0x735a,	// (0x0005b23a) cell_imed_effect_pane

0xc7b7,	// (0x00060697) cell_imed_colour_pane_ParamLimits

0xc7b7,	// (0x00060697) cell_imed_colour_pane

0xc7f1,	// (0x000606d1) cell_imed_colour_pane_g1_ParamLimits

0xc7f1,	// (0x000606d1) cell_imed_colour_pane_g1

0xc802,	// (0x000606e2) hgihlgiht_grid_pane_cp016_ParamLimits

0xc802,	// (0x000606e2) hgihlgiht_grid_pane_cp016

0x737f,	// (0x0005b25f) cell_imed_effect_pane_g1

0x7387,	// (0x0005b267) grid_highlight_pane_cp017

0xc813,	// (0x000606f3) list_imed_single_pane_ParamLimits

0xc813,	// (0x000606f3) list_imed_single_pane

0xb747,	// (0x0005f627) list_highlight_pane_cp07

0xc826,	// (0x00060706) list_imed_aspect_pane_comp1_t1

0x22ef,	// (0x000561cf) bg_tb_trans_pane_cp05

0xc846,	// (0x00060726) popup_imed_adjust2_window_g1

0xc86d,	// (0x0006074d) popup_imed_adjust2_window_t1

0xc885,	// (0x00060765) slider_imed_adjust_pane

0xc899,	// (0x00060779) slider_imed_adjust_pane_g1

0xc8a9,	// (0x00060789) slider_imed_adjust_pane_g2

0xc8b9,	// (0x00060799) slider_imed_adjust_pane_g3

0xc8ca,	// (0x000607aa) slider_imed_adjust_pane_g4

0x0003,

0xf772,	// (0x00063652) slider_imed_adjust_pane_g

0x7390,	// (0x0005b270) aid_size_cell_clipart2

0x739c,	// (0x0005b27c) grid_imed_clipart_pane

0xc8db,	// (0x000607bb) scroll_pane_cp031

0x73a6,	// (0x0005b286) cell_imed_clipart_pane_ParamLimits

0x73a6,	// (0x0005b286) cell_imed_clipart_pane

0x73be,	// (0x0005b29e) cell_imed_clipart_pane_g1

0xb747,	// (0x0005f627) grid_highlight_pane_cp014

0x70a2,	// (0x0005af82) main_clock2_pane_g1_ParamLimits

0x70a2,	// (0x0005af82) main_clock2_pane_g1

0x71d0,	// (0x0005b0b0) aid_call2_pane_cp10

0x71e2,	// (0x0005b0c2) aid_call_pane_cp10

0x0e44,	// (0x00054d24) popup_clock_analogue_window_cp10_g1

0x0e44,	// (0x00054d24) popup_clock_analogue_window_cp10_g2

0x71f4,	// (0x0005b0d4) popup_clock_analogue_window_cp10_g3

0x71f4,	// (0x0005b0d4) popup_clock_analogue_window_cp10_g4

0x0e44,	// (0x00054d24) popup_clock_analogue_window_cp10_g5

0x0004,

0xf760,	// (0x00063640) popup_clock_analogue_window_cp10_g

0x7206,	// (0x0005b0e6) popup_clock_analogue_window_cp10_t1

0x7237,	// (0x0005b117) clock_digital_number_pane_cp10_ParamLimits

0x7237,	// (0x0005b117) clock_digital_number_pane_cp10

0x724f,	// (0x0005b12f) clock_digital_number_pane_cp11_ParamLimits

0x724f,	// (0x0005b12f) clock_digital_number_pane_cp11

0x7267,	// (0x0005b147) clock_digital_number_pane_cp12_ParamLimits

0x7267,	// (0x0005b147) clock_digital_number_pane_cp12

0x727f,	// (0x0005b15f) clock_digital_number_pane_cp13_ParamLimits

0x727f,	// (0x0005b15f) clock_digital_number_pane_cp13

0x7297,	// (0x0005b177) clock_digital_separator_pane_cp10_ParamLimits

0x7297,	// (0x0005b177) clock_digital_separator_pane_cp10

0x72af,	// (0x0005b18f) popup_clock_digital_window_cp02_t1_ParamLimits

0x72af,	// (0x0005b18f) popup_clock_digital_window_cp02_t1

0xbe1e,	// (0x0005fcfe) clock_digital_number_pane_cp10_g1

0xbe1e,	// (0x0005fcfe) clock_digital_number_pane_cp10_g2

0x0001,

0xf77b,	// (0x0006365b) clock_digital_number_pane_cp10_g

0xbe1e,	// (0x0005fcfe) clock_digital_separator_pane_cp10_g1

0xbe1e,	// (0x0005fcfe) clock_digital_separator_pane_g2_cp10

0x0f71,	// (0x00054e51) navi_pane_vded_g4

0x0f7a,	// (0x00054e5a) navi_pane_vded_g5

0x0f83,	// (0x00054e63) navi_pane_vded_t1

0xb7b0,	// (0x0005f690) main_vded_pane

0x73c7,	// (0x0005b2a7) main_vded_pane_g1

0x73d1,	// (0x0005b2b1) main_vded_pane_g2

0x73d9,	// (0x0005b2b9) main_vded_pane_g3

0x0002,

0xf780,	// (0x00063660) main_vded_pane_g

0x73e1,	// (0x0005b2c1) main_vded_pane_t1

0x73ef,	// (0x0005b2cf) main_vded_pane_t2

0x0001,

0xf787,	// (0x00063667) main_vded_pane_t

0x73fd,	// (0x0005b2dd) vded_slider_pane

0x7405,	// (0x0005b2e5) vded_video_pane

0xc8e3,	// (0x000607c3) vded_video_pane_g1

0x740d,	// (0x0005b2ed) vded_video_pane_g2

0x061b,	// (0x000544fb) vded_video_pane_g3

0x0002,

0xf78c,	// (0x0006366c) vded_video_pane_g

0xc8ed,	// (0x000607cd) vded_slider_pane_g1

0x64bd,	// (0x0005a39d) vded_slider_pane_g2

0xc8f6,	// (0x000607d6) vded_slider_pane_g3

0xc8ff,	// (0x000607df) vded_slider_pane_g4

0xc908,	// (0x000607e8) vded_slider_pane_g5

0x0004,

0xf793,	// (0x00063673) vded_slider_pane_g

0x6ec6,	// (0x0005ada6) mup3_rocker_pane_ParamLimits

0x6ec6,	// (0x0005ada6) mup3_rocker_pane

0x7416,	// (0x0005b2f6) mup3_control_keys_pane_g1

0x741e,	// (0x0005b2fe) mup3_control_keys_pane_g2

0x7426,	// (0x0005b306) mup3_control_keys_pane_g3

0x742e,	// (0x0005b30e) mup3_control_keys_pane_g4

0x0003,

0xf79e,	// (0x0006367e) mup3_control_keys_pane_g

0x34dc,	// (0x000573bc) popup_toolbar2_fixed_window_cp01_ParamLimits

0x34dc,	// (0x000573bc) popup_toolbar2_fixed_window_cp01

0x6ef4,	// (0x0005add4) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6ef4,	// (0x0005add4) popup_toolbar2_fixed_window_cp02

0x16fe,	// (0x000555de) popup_call2_audio_second_window_t4_ParamLimits

0x16fe,	// (0x000555de) popup_call2_audio_second_window_t4

0x1c2c,	// (0x00055b0c) popup_call2_audio_first_window_t6_ParamLimits

0x1c2c,	// (0x00055b0c) popup_call2_audio_first_window_t6

0x1e6a,	// (0x00055d4a) popup_call2_audio_out_window_t6_ParamLimits

0x1e6a,	// (0x00055d4a) popup_call2_audio_out_window_t6

0xb7b0,	// (0x0005f690) main_vitu_pane

0x106c,	// (0x00054f4c) aid_size_cell_itu_ParamLimits

0x106c,	// (0x00054f4c) aid_size_cell_itu

0x106c,	// (0x00054f4c) bg_popup_window_pane_cp08_ParamLimits

0x106c,	// (0x00054f4c) bg_popup_window_pane_cp08

0x106c,	// (0x00054f4c) field_vitu_entry_pane_ParamLimits

0x106c,	// (0x00054f4c) field_vitu_entry_pane

0x106c,	// (0x00054f4c) grid_vitu_function_pane_ParamLimits

0x106c,	// (0x00054f4c) grid_vitu_function_pane

0x106c,	// (0x00054f4c) grid_vitu_itu_pane_ParamLimits

0x106c,	// (0x00054f4c) grid_vitu_itu_pane

0x743e,	// (0x0005b31e) cell_vitu_itu_pane_ParamLimits

0x743e,	// (0x0005b31e) cell_vitu_itu_pane

0x106c,	// (0x00054f4c) cell_vitu_function_pane_ParamLimits

0x106c,	// (0x00054f4c) cell_vitu_function_pane

0x106c,	// (0x00054f4c) bg_popup_sub_pane_cp08_ParamLimits

0x106c,	// (0x00054f4c) bg_popup_sub_pane_cp08

0x1058,	// (0x00054f38) field_vitu_entry_pane_t1_ParamLimits

0x1058,	// (0x00054f38) field_vitu_entry_pane_t1

0xc911,	// (0x000607f1) field_vitu_entry_pane_t2_ParamLimits

0xc911,	// (0x000607f1) field_vitu_entry_pane_t2

0x0001,

0xf7ac,	// (0x0006368c) field_vitu_entry_pane_t_ParamLimits

0xf7ac,	// (0x0006368c) field_vitu_entry_pane_t

0x656f,	// (0x0005a44f) bg_button_pane_cp05_ParamLimits

0x656f,	// (0x0005a44f) bg_button_pane_cp05

0xc92e,	// (0x0006080e) cell_vitu_itu_pane_g1

0x2313,	// (0x000561f3) cell_vitu_itu_pane_t1_ParamLimits

0x2313,	// (0x000561f3) cell_vitu_itu_pane_t1

0x2313,	// (0x000561f3) cell_vitu_itu_pane_t2_ParamLimits

0x2313,	// (0x000561f3) cell_vitu_itu_pane_t2

0x0002,

0xf7b1,	// (0x00063691) cell_vitu_itu_pane_t_ParamLimits

0xf7b1,	// (0x00063691) cell_vitu_itu_pane_t

0xb747,	// (0x0005f627) bg_button_pane_cp07

0x061b,	// (0x000544fb) cell_vitu_function_pane_g1

0xbeec,	// (0x0005fdcc) main_calc_pane_g1

0x3341,	// (0x00057221) aid_visual_content_pane

0xb7b0,	// (0x0005f690) main_vradio_pane

0xbea0,	// (0x0005fd80) main_vradio_pane_g1_ParamLimits

0xbea0,	// (0x0005fd80) main_vradio_pane_g1

0xbeae,	// (0x0005fd8e) main_vradio_pane_g2_ParamLimits

0xbeae,	// (0x0005fd8e) main_vradio_pane_g2

0x0001,

0xf7b8,	// (0x00063698) main_vradio_pane_g_ParamLimits

0xf7b8,	// (0x00063698) main_vradio_pane_g

0x1058,	// (0x00054f38) main_vradio_pane_t1_ParamLimits

0x1058,	// (0x00054f38) main_vradio_pane_t1

0x1058,	// (0x00054f38) main_vradio_pane_t2_ParamLimits

0x1058,	// (0x00054f38) main_vradio_pane_t2

0x05ed,	// (0x000544cd) main_vradio_pane_t3_ParamLimits

0x05ed,	// (0x000544cd) main_vradio_pane_t3

0x0002,

0xf7bd,	// (0x0006369d) main_vradio_pane_t_ParamLimits

0xf7bd,	// (0x0006369d) main_vradio_pane_t

0x106c,	// (0x00054f4c) vradio_rocker_control_pane_ParamLimits

0x106c,	// (0x00054f4c) vradio_rocker_control_pane

0x106c,	// (0x00054f4c) vradio_station_info_pane_ParamLimits

0x106c,	// (0x00054f4c) vradio_station_info_pane

0x106c,	// (0x00054f4c) vradio_frequency_info_pane_ParamLimits

0x106c,	// (0x00054f4c) vradio_frequency_info_pane

0x061b,	// (0x000544fb) vradio_station_info_pane_g1

0x2313,	// (0x000561f3) vradio_station_info_pane_t1_ParamLimits

0x2313,	// (0x000561f3) vradio_station_info_pane_t1

0x05ed,	// (0x000544cd) vradio_station_info_pane_t2_ParamLimits

0x05ed,	// (0x000544cd) vradio_station_info_pane_t2

0x0001,

0xf7c4,	// (0x000636a4) vradio_station_info_pane_t_ParamLimits

0xf7c4,	// (0x000636a4) vradio_station_info_pane_t

0xb747,	// (0x0005f627) vradio_tuning_pane

0x7452,	// (0x0005b332) vradio_rocker_control_pane_g1

0xc94a,	// (0x0006082a) vradio_rocker_control_pane_g2

0x745a,	// (0x0005b33a) vradio_rocker_control_pane_g3

0x7462,	// (0x0005b342) vradio_rocker_control_pane_g4

0x746a,	// (0x0005b34a) vradio_rocker_control_pane_g5

0x0004,

0xf7c9,	// (0x000636a9) vradio_rocker_control_pane_g

0x061b,	// (0x000544fb) vradio_frequency_info_pane_g1

0x1058,	// (0x00054f38) vradio_frequency_info_pane_t1_ParamLimits

0x1058,	// (0x00054f38) vradio_frequency_info_pane_t1

0x7472,	// (0x0005b352) vradio_tuning_pane_g1

0x747b,	// (0x0005b35b) vradio_tuning_pane_t1

0xb779,	// (0x0005f659) area_side_right_pane_ParamLimits

0xb779,	// (0x0005f659) area_side_right_pane

0x22aa,	// (0x0005618a) status_small_pane_g1

0x22b2,	// (0x00056192) status_small_pane_g2

0x22bb,	// (0x0005619b) status_small_pane_g3

0x22c4,	// (0x000561a4) status_small_pane_g4

0x0003,

0xf590,	// (0x00063470) status_small_pane_g

0x22cd,	// (0x000561ad) status_small_pane_t1

0xb7b0,	// (0x0005f690) main_video3_pane

0xc952,	// (0x00060832) cams_zoom_vslider_pane

0xc95a,	// (0x0006083a) image3_wide_pane_ParamLimits

0xc95a,	// (0x0006083a) image3_wide_pane

0xc974,	// (0x00060854) image3_wide_small_pane

0xc97e,	// (0x0006085e) main_video3_pane_g1_ParamLimits

0xc97e,	// (0x0006085e) main_video3_pane_g1

0xc99a,	// (0x0006087a) main_video3_pane_g2_ParamLimits

0xc99a,	// (0x0006087a) main_video3_pane_g2

0x0001,

0xf7d4,	// (0x000636b4) main_video3_pane_g_ParamLimits

0xf7d4,	// (0x000636b4) main_video3_pane_g

0xc9b6,	// (0x00060896) main_video3_pane_t1_ParamLimits

0xc9b6,	// (0x00060896) main_video3_pane_t1

0xc9e1,	// (0x000608c1) main_video3_pane_t2_ParamLimits

0xc9e1,	// (0x000608c1) main_video3_pane_t2

0xca0c,	// (0x000608ec) main_video3_pane_t3_ParamLimits

0xca0c,	// (0x000608ec) main_video3_pane_t3

0x0002,

0xf7d9,	// (0x000636b9) main_video3_pane_t_ParamLimits

0xf7d9,	// (0x000636b9) main_video3_pane_t

0xca37,	// (0x00060917) cams_zoom_vslider_pane_g1

0xca40,	// (0x00060920) cams_zoom_vslider_pane_g2

0x0001,

0xf7e0,	// (0x000636c0) cams_zoom_vslider_pane_g

0xca48,	// (0x00060928) small_slider_vertical_pane

0x061b,	// (0x000544fb) small_slider_vertical_pane_g1

0x061b,	// (0x000544fb) small_slider_vertical_pane_g2

0xca50,	// (0x00060930) small_slider_vertical_pane_g3

0x0002,

0xf7e5,	// (0x000636c5) small_slider_vertical_pane_g

0xb7b0,	// (0x0005f690) main_hwr_training_pane

0xca59,	// (0x00060939) hwr_training_instruct_pane_ParamLimits

0xca59,	// (0x00060939) hwr_training_instruct_pane

0x748a,	// (0x0005b36a) hwr_training_navi_pane_ParamLimits

0x748a,	// (0x0005b36a) hwr_training_navi_pane

0x74a1,	// (0x0005b381) hwr_training_write_pane_ParamLimits

0x74a1,	// (0x0005b381) hwr_training_write_pane

0xb747,	// (0x0005f627) bg_frame_shadow_pane

0xca88,	// (0x00060968) hwr_training_write_pane_g1

0xca90,	// (0x00060970) hwr_training_write_pane_g2

0xca98,	// (0x00060978) hwr_training_write_pane_g3

0xcaa0,	// (0x00060980) hwr_training_write_pane_g4

0xcaa8,	// (0x00060988) hwr_training_write_pane_g5

0xcab0,	// (0x00060990) hwr_training_write_pane_g6

0xcab8,	// (0x00060998) hwr_training_write_pane_g7

0x0006,

0xf7ec,	// (0x000636cc) hwr_training_write_pane_g

0xcac0,	// (0x000609a0) hwr_training_navi_pane_g1_ParamLimits

0xcac0,	// (0x000609a0) hwr_training_navi_pane_g1

0xcad2,	// (0x000609b2) hwr_training_navi_pane_g2_ParamLimits

0xcad2,	// (0x000609b2) hwr_training_navi_pane_g2

0xcae4,	// (0x000609c4) hwr_training_navi_pane_g3_ParamLimits

0xcae4,	// (0x000609c4) hwr_training_navi_pane_g3

0xcaf4,	// (0x000609d4) hwr_training_navi_pane_g4_ParamLimits

0xcaf4,	// (0x000609d4) hwr_training_navi_pane_g4

0x0004,

0xf7fb,	// (0x000636db) hwr_training_navi_pane_g_ParamLimits

0xf7fb,	// (0x000636db) hwr_training_navi_pane_g

0xcb01,	// (0x000609e1) hwr_training_navi_pane_t1

0x74e1,	// (0x0005b3c1) list_single_hwr_training_instruct_pane_ParamLimits

0x74e1,	// (0x0005b3c1) list_single_hwr_training_instruct_pane

0xcb0f,	// (0x000609ef) list_single_hwr_training_instruct_pane_t1

0x66f7,	// (0x0005a5d7) bg_frame_shadow_pane_g1

0xcb1e,	// (0x000609fe) bg_frame_shadow_pane_g2

0xcb26,	// (0x00060a06) bg_frame_shadow_pane_g3

0xcb2e,	// (0x00060a0e) bg_frame_shadow_pane_g4

0xcb36,	// (0x00060a16) bg_frame_shadow_pane_g5

0xcb3e,	// (0x00060a1e) bg_frame_shadow_pane_g6

0xcb46,	// (0x00060a26) bg_frame_shadow_pane_g7

0xc05f,	// (0x0005ff3f) bg_frame_shadow_pane_g8

0x0007,

0xf806,	// (0x000636e6) bg_frame_shadow_pane_g

0xb7b0,	// (0x0005f690) main_video_tele_dialer_pane

0x74f9,	// (0x0005b3d9) aid_size_cell_video_keypad_ParamLimits

0x74f9,	// (0x0005b3d9) aid_size_cell_video_keypad

0x7513,	// (0x0005b3f3) grid_video_dialer_keypad_pane_ParamLimits

0x7513,	// (0x0005b3f3) grid_video_dialer_keypad_pane

0x7555,	// (0x0005b435) video_down_pane_cp_ParamLimits

0x7555,	// (0x0005b435) video_down_pane_cp

0x7585,	// (0x0005b465) cell_video_dialer_keypad_pane_ParamLimits

0x7585,	// (0x0005b465) cell_video_dialer_keypad_pane

0xcb4e,	// (0x00060a2e) bg_button_pane_cp08_ParamLimits

0xcb4e,	// (0x00060a2e) bg_button_pane_cp08

0x75a7,	// (0x0005b487) cell_video_dialer_keypad_pane_g1_ParamLimits

0x75a7,	// (0x0005b487) cell_video_dialer_keypad_pane_g1

0x6eb0,	// (0x0005ad90) mup3_rocker2_pane_ParamLimits

0x6eb0,	// (0x0005ad90) mup3_rocker2_pane

0x061b,	// (0x000544fb) mup3_rocker2_pane_g1

0x5e01,	// (0x00059ce1) main_dialer2_pane

0xb7b0,	// (0x0005f690) main_mp4_pane

0xcb76,	// (0x00060a56) main_mp4_pane_g1_ParamLimits

0xcb76,	// (0x00060a56) main_mp4_pane_g1

0xcb76,	// (0x00060a56) main_mp4_pane_g2_ParamLimits

0xcb76,	// (0x00060a56) main_mp4_pane_g2

0x75e2,	// (0x0005b4c2) main_mp4_pane_g3_ParamLimits

0x75e2,	// (0x0005b4c2) main_mp4_pane_g3

0xcb84,	// (0x00060a64) main_mp4_pane_g4_ParamLimits

0xcb84,	// (0x00060a64) main_mp4_pane_g4

0xcbb2,	// (0x00060a92) main_mp4_pane_g5_ParamLimits

0xcbb2,	// (0x00060a92) main_mp4_pane_g5

0x0007,

0xf826,	// (0x00063706) main_mp4_pane_g_ParamLimits

0xf826,	// (0x00063706) main_mp4_pane_g

0xcc26,	// (0x00060b06) main_mp4_pane_t1_ParamLimits

0xcc26,	// (0x00060b06) main_mp4_pane_t1

0xcc7e,	// (0x00060b5e) main_mp4_pane_t2_ParamLimits

0xcc7e,	// (0x00060b5e) main_mp4_pane_t2

0xccd0,	// (0x00060bb0) main_mp4_pane_t3_ParamLimits

0xccd0,	// (0x00060bb0) main_mp4_pane_t3

0xccf6,	// (0x00060bd6) main_mp4_pane_t4_ParamLimits

0xccf6,	// (0x00060bd6) main_mp4_pane_t4

0x0003,

0xf837,	// (0x00063717) main_mp4_pane_t_ParamLimits

0xf837,	// (0x00063717) main_mp4_pane_t

0xcd36,	// (0x00060c16) mp4_progress_pane_ParamLimits

0xcd36,	// (0x00060c16) mp4_progress_pane

0xcd7a,	// (0x00060c5a) mp4_rocker_pane_ParamLimits

0xcd7a,	// (0x00060c5a) mp4_rocker_pane

0xcda0,	// (0x00060c80) mp4_progress_pane_t1

0xcdb7,	// (0x00060c97) mp4_progress_pane_t2

0x0001,

0xf840,	// (0x00063720) mp4_progress_pane_t

0xcdce,	// (0x00060cae) mup_progress_pane_cp04

0xc382,	// (0x00060262) mp4_rocker_pane_g1

0x7612,	// (0x0005b4f2) aid_cell_size_keypad2_ParamLimits

0x7612,	// (0x0005b4f2) aid_cell_size_keypad2

0x762c,	// (0x0005b50c) dialer2_ne_pane_ParamLimits

0x762c,	// (0x0005b50c) dialer2_ne_pane

0x7641,	// (0x0005b521) grid_dialer2_keypad_pane_ParamLimits

0x7641,	// (0x0005b521) grid_dialer2_keypad_pane

0x656f,	// (0x0005a44f) bg_popup_call_pane_cp07_ParamLimits

0x656f,	// (0x0005a44f) bg_popup_call_pane_cp07

0x7657,	// (0x0005b537) dialer2_ne_pane_t1_ParamLimits

0x7657,	// (0x0005b537) dialer2_ne_pane_t1

0x7694,	// (0x0005b574) cell_dialer2_keypad_pane_ParamLimits

0x7694,	// (0x0005b574) cell_dialer2_keypad_pane

0xcdec,	// (0x00060ccc) bg_button_pane_pane_cp04_ParamLimits

0xcdec,	// (0x00060ccc) bg_button_pane_pane_cp04

0x76b6,	// (0x0005b596) cell_dialer2_keypad_pane_g1_ParamLimits

0x76b6,	// (0x0005b596) cell_dialer2_keypad_pane_g1

0x40f9,	// (0x00057fd9) aid_placing_vt_set_content_ParamLimits

0x40f9,	// (0x00057fd9) aid_placing_vt_set_content

0x411b,	// (0x00057ffb) aid_placing_vt_set_title_ParamLimits

0x411b,	// (0x00057ffb) aid_placing_vt_set_title

0xb7b0,	// (0x0005f690) main_image3_pane

0x7745,	// (0x0005b625) area_side_right_pane_cp01_ParamLimits

0x7745,	// (0x0005b625) area_side_right_pane_cp01

0xcb76,	// (0x00060a56) main_image3_pane_g1_ParamLimits

0xcb76,	// (0x00060a56) main_image3_pane_g1

0x775c,	// (0x0005b63c) main_image3_pane_g2_ParamLimits

0x775c,	// (0x0005b63c) main_image3_pane_g2

0x7782,	// (0x0005b662) main_image3_pane_g3_ParamLimits

0x7782,	// (0x0005b662) main_image3_pane_g3

0x77a8,	// (0x0005b688) main_image3_pane_g4_ParamLimits

0x77a8,	// (0x0005b688) main_image3_pane_g4

0x0003,

0xf84f,	// (0x0006372f) main_image3_pane_g_ParamLimits

0xf84f,	// (0x0006372f) main_image3_pane_g

0x77ce,	// (0x0005b6ae) main_image3_pane_t1_ParamLimits

0x77ce,	// (0x0005b6ae) main_image3_pane_t1

0x7826,	// (0x0005b706) main_image3_pane_t2_ParamLimits

0x7826,	// (0x0005b706) main_image3_pane_t2

0x7878,	// (0x0005b758) main_image3_pane_t3_ParamLimits

0x7878,	// (0x0005b758) main_image3_pane_t3

0x0003,

0xf858,	// (0x00063738) main_image3_pane_t_ParamLimits

0xf858,	// (0x00063738) main_image3_pane_t

0x106c,	// (0x00054f4c) grid_sctrl_middle_pane_cp01_ParamLimits

0x106c,	// (0x00054f4c) grid_sctrl_middle_pane_cp01

0x78f8,	// (0x0005b7d8) cell_sctrl_middle_pane_cp01_ParamLimits

0x78f8,	// (0x0005b7d8) cell_sctrl_middle_pane_cp01

0x7915,	// (0x0005b7f5) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7915,	// (0x0005b7f5) cell_sctrl_middle_pane_cp01_g1

0xb7b0,	// (0x0005f690) main_call4_pane

0x792b,	// (0x0005b80b) aid_size_button_call4_ParamLimits

0x792b,	// (0x0005b80b) aid_size_button_call4

0x7958,	// (0x0005b838) call4_windows_pane_ParamLimits

0x7958,	// (0x0005b838) call4_windows_pane

0x796e,	// (0x0005b84e) grid_call4_button_pane_ParamLimits

0x796e,	// (0x0005b84e) grid_call4_button_pane

0xce10,	// (0x00060cf0) call4_windows_conf_pane

0x7995,	// (0x0005b875) popup_call4_audio_first_window_ParamLimits

0x7995,	// (0x0005b875) popup_call4_audio_first_window

0xce43,	// (0x00060d23) popup_call4_audio_second_window_ParamLimits

0xce43,	// (0x00060d23) popup_call4_audio_second_window

0xce55,	// (0x00060d35) popup_call4_audio_wait_window_ParamLimits

0xce55,	// (0x00060d35) popup_call4_audio_wait_window

0x79b5,	// (0x0005b895) cell_call4_button_pane_ParamLimits

0x79b5,	// (0x0005b895) cell_call4_button_pane

0x79da,	// (0x0005b8ba) bg_button_pane_cp09_ParamLimits

0x79da,	// (0x0005b8ba) bg_button_pane_cp09

0x79e6,	// (0x0005b8c6) cell_call4_button_pane_g1_ParamLimits

0x79e6,	// (0x0005b8c6) cell_call4_button_pane_g1

0x7a0c,	// (0x0005b8ec) cell_call4_button_pane_t1_ParamLimits

0x7a0c,	// (0x0005b8ec) cell_call4_button_pane_t1

0xce69,	// (0x00060d49) popup_call4_audio_conf_window_ParamLimits

0xce69,	// (0x00060d49) popup_call4_audio_conf_window

0x6f0a,	// (0x0005adea) mup3_progress_pane_t1_ParamLimits

0x6f28,	// (0x0005ae08) mup3_progress_pane_t2_ParamLimits

0xc65f,	// (0x0006053f) mup3_progress_pane_t3_ParamLimits

0xf728,	// (0x00063608) mup3_progress_pane_t_ParamLimits

0xc67c,	// (0x0006055c) mup_progress_pane_cp03_ParamLimits

0x7436,	// (0x0005b316) mup3_control_keys_pane_g4_copy1

0xcd64,	// (0x00060c44) mp4_rocker2_pane_ParamLimits

0xcd64,	// (0x00060c44) mp4_rocker2_pane

0xce7d,	// (0x00060d5d) mp4_rocker2_pane_g1

0xce85,	// (0x00060d65) mp4_rocker2_pane_g2

0xee3e,	// (0x00062d1e) mp4_rocker2_pane_g3

0xee46,	// (0x00062d26) mp4_rocker2_pane_g4

0xee4e,	// (0x00062d2e) mp4_rocker2_pane_g5

0x0004,

0xf861,	// (0x00063741) mp4_rocker2_pane_g

0xb7b0,	// (0x0005f690) main_camera4_pane

0xb7b0,	// (0x0005f690) main_video4_pane

0x7527,	// (0x0005b407) main_video_tele_dialer_pane_t1_ParamLimits

0x7527,	// (0x0005b407) main_video_tele_dialer_pane_t1

0x753e,	// (0x0005b41e) main_video_tele_dialer_pane_t2_ParamLimits

0x753e,	// (0x0005b41e) main_video_tele_dialer_pane_t2

0x0001,

0xf817,	// (0x000636f7) main_video_tele_dialer_pane_t_ParamLimits

0xf817,	// (0x000636f7) main_video_tele_dialer_pane_t

0x7a4a,	// (0x0005b92a) cam4_autofocus_pane_ParamLimits

0x7a4a,	// (0x0005b92a) cam4_autofocus_pane

0x7a5e,	// (0x0005b93e) cam4_image_uncrop_pane_ParamLimits

0x7a5e,	// (0x0005b93e) cam4_image_uncrop_pane

0x7a75,	// (0x0005b955) cam4_indicators_pane_ParamLimits

0x7a75,	// (0x0005b955) cam4_indicators_pane

0x7a99,	// (0x0005b979) main_camera4_pane_g1_ParamLimits

0x7a99,	// (0x0005b979) main_camera4_pane_g1

0x7aa5,	// (0x0005b985) main_camera4_pane_g2_ParamLimits

0x7aa5,	// (0x0005b985) main_camera4_pane_g2

0x7aa5,	// (0x0005b985) main_camera4_pane_g3_ParamLimits

0x7aa5,	// (0x0005b985) main_camera4_pane_g3

0x7ab1,	// (0x0005b991) main_camera4_pane_g4_ParamLimits

0x7ab1,	// (0x0005b991) main_camera4_pane_g4

0x7abd,	// (0x0005b99d) main_camera4_pane_g5_ParamLimits

0x7abd,	// (0x0005b99d) main_camera4_pane_g5

0x0005,

0xf86c,	// (0x0006374c) main_camera4_pane_g_ParamLimits

0xf86c,	// (0x0006374c) main_camera4_pane_g

0x7ada,	// (0x0005b9ba) main_camera4_pane_t1_ParamLimits

0x7ada,	// (0x0005b9ba) main_camera4_pane_t1

0xee70,	// (0x00062d50) bg_tb_trans_pane_cp06

0xee86,	// (0x00062d66) cam4_indicators_pane_g1

0xee96,	// (0x00062d76) cam4_indicators_pane_g2

0x0002,

0xf887,	// (0x00063767) cam4_indicators_pane_g

0xeeb6,	// (0x00062d96) cam4_indicators_pane_t1

0x7b2f,	// (0x0005ba0f) main_video4_pane_g1_ParamLimits

0x7b2f,	// (0x0005ba0f) main_video4_pane_g1

0x7b41,	// (0x0005ba21) main_video4_pane_g2_ParamLimits

0x7b41,	// (0x0005ba21) main_video4_pane_g2

0x7b41,	// (0x0005ba21) main_video4_pane_g3_ParamLimits

0x7b41,	// (0x0005ba21) main_video4_pane_g3

0x7b50,	// (0x0005ba30) main_video4_pane_g4_ParamLimits

0x7b50,	// (0x0005ba30) main_video4_pane_g4

0x0004,

0xf88e,	// (0x0006376e) main_video4_pane_g_ParamLimits

0xf88e,	// (0x0006376e) main_video4_pane_g

0x7b6e,	// (0x0005ba4e) vid4_indicators_pane_ParamLimits

0x7b6e,	// (0x0005ba4e) vid4_indicators_pane

0x7b96,	// (0x0005ba76) video4_image_uncrop_cif_pane_ParamLimits

0x7b96,	// (0x0005ba76) video4_image_uncrop_cif_pane

0x7bae,	// (0x0005ba8e) video4_image_uncrop_nhd_pane_ParamLimits

0x7bae,	// (0x0005ba8e) video4_image_uncrop_nhd_pane

0x7bc2,	// (0x0005baa2) video4_image_uncrop_vga_pane_ParamLimits

0x7bc2,	// (0x0005baa2) video4_image_uncrop_vga_pane

0xb7a2,	// (0x0005f682) bg_tb_trans_pane_cp07

0xee86,	// (0x00062d66) vid4_indicators_pane_g1

0xeed8,	// (0x00062db8) vid4_indicators_pane_g2

0xeee8,	// (0x00062dc8) vid4_indicators_pane_g3

0x0004,

0xf899,	// (0x00063779) vid4_indicators_pane_g

0xef15,	// (0x00062df5) vid4_indicators_pane_t1

0x7bda,	// (0x0005baba) cam4_autofocus_pane_g1

0x7be2,	// (0x0005bac2) cam4_autofocus_pane_g2

0x7bea,	// (0x0005baca) cam4_autofocus_pane_g3

0x0002,

0xf8a4,	// (0x00063784) cam4_autofocus_pane_g

0x7bf2,	// (0x0005bad2) cam4_autofocus_pane_g3_copy1

0x7569,	// (0x0005b449) video_down_pane_cp_t1

0x7577,	// (0x0005b457) video_down_pane_cp_t2

0x0001,

0xf81c,	// (0x000636fc) video_down_pane_cp_t

0xb7a2,	// (0x0005f682) popup_vitu2_window_ParamLimits

0xb7a2,	// (0x0005f682) popup_vitu2_window

0x7bfa,	// (0x0005bada) aid_size_cell2_itu2_ParamLimits

0x7bfa,	// (0x0005bada) aid_size_cell2_itu2

0x7c20,	// (0x0005bb00) aid_size_cell_itu2_ParamLimits

0x7c20,	// (0x0005bb00) aid_size_cell_itu2

0x7c72,	// (0x0005bb52) bg_popup_window_pane_cp09_ParamLimits

0x7c72,	// (0x0005bb52) bg_popup_window_pane_cp09

0x7c80,	// (0x0005bb60) field_vitu2_entry_pane_ParamLimits

0x7c80,	// (0x0005bb60) field_vitu2_entry_pane

0x7c9a,	// (0x0005bb7a) grid_vitu2_function_pane_ParamLimits

0x7c9a,	// (0x0005bb7a) grid_vitu2_function_pane

0x7cd5,	// (0x0005bbb5) grid_vitu2_itu_pane_ParamLimits

0x7cd5,	// (0x0005bbb5) grid_vitu2_itu_pane

0x7d43,	// (0x0005bc23) cell_vitu2_itu_pane_ParamLimits

0x7d43,	// (0x0005bc23) cell_vitu2_itu_pane

0x7d6b,	// (0x0005bc4b) cell_vitu2_function_pane_ParamLimits

0x7d6b,	// (0x0005bc4b) cell_vitu2_function_pane

0xce9f,	// (0x00060d7f) bg_popup_call_pane_cp08_ParamLimits

0xce9f,	// (0x00060d7f) bg_popup_call_pane_cp08

0xceb6,	// (0x00060d96) field_vitu2_entry_pane_g1

0xcec2,	// (0x00060da2) field_vitu2_entry_pane_g2

0x0002,

0xf8ab,	// (0x0006378b) field_vitu2_entry_pane_g

0x7daa,	// (0x0005bc8a) field_vitu2_entry_pane_t1_ParamLimits

0x7daa,	// (0x0005bc8a) field_vitu2_entry_pane_t1

0xcece,	// (0x00060dae) field_vitu2_entry_pane_t2_ParamLimits

0xcece,	// (0x00060dae) field_vitu2_entry_pane_t2

0x0001,

0xf8b2,	// (0x00063792) field_vitu2_entry_pane_t_ParamLimits

0xf8b2,	// (0x00063792) field_vitu2_entry_pane_t

0x7dd9,	// (0x0005bcb9) bg_button_pane_cp010_ParamLimits

0x7dd9,	// (0x0005bcb9) bg_button_pane_cp010

0x7de7,	// (0x0005bcc7) cell_vitu2_itu_pane_g1

0x7e0d,	// (0x0005bced) cell_vitu2_itu_pane_t1_ParamLimits

0x7e0d,	// (0x0005bced) cell_vitu2_itu_pane_t1

0x321d,	// (0x000570fd) cell_vitu2_itu_pane_t2_ParamLimits

0x321d,	// (0x000570fd) cell_vitu2_itu_pane_t2

0x0002,

0xf8bc,	// (0x0006379c) cell_vitu2_itu_pane_t_ParamLimits

0xf8bc,	// (0x0006379c) cell_vitu2_itu_pane_t

0xb7a2,	// (0x0005f682) bg_button_pane_cp011

0x7e6b,	// (0x0005bd4b) cell_vitu2_function_pane_g1

0xb7b0,	// (0x0005f690) main_myfav_hc_pane

0x78c4,	// (0x0005b7a4) popup_image3_note_pane_ParamLimits

0x78c4,	// (0x0005b7a4) popup_image3_note_pane

0x78de,	// (0x0005b7be) popup_image3_tool_bar_pane_ParamLimits

0x78de,	// (0x0005b7be) popup_image3_tool_bar_pane

0x32ab,	// (0x0005718b) cell_vitu2_itu_pane_t3_ParamLimits

0x32ab,	// (0x0005718b) cell_vitu2_itu_pane_t3

0xb747,	// (0x0005f627) bg_popup_trans_pane

0xcef3,	// (0x00060dd3) grid_image3_tool_bar_pane

0xcefd,	// (0x00060ddd) bg_popup_trans_pane_g1

0x0839,	// (0x00054719) bg_popup_trans_pane_g2

0xcf05,	// (0x00060de5) bg_popup_trans_pane_g3

0xcf0d,	// (0x00060ded) bg_popup_trans_pane_g4

0xcf15,	// (0x00060df5) bg_popup_trans_pane_g5

0xcf1d,	// (0x00060dfd) bg_popup_trans_pane_g6

0xcf25,	// (0x00060e05) bg_popup_trans_pane_g7

0xcf2d,	// (0x00060e0d) bg_popup_trans_pane_g8

0x0819,	// (0x000546f9) bg_popup_trans_pane_g9

0x0008,

0xf8c3,	// (0x000637a3) bg_popup_trans_pane_g

0xcf35,	// (0x00060e15) cell_image3_tool_bar_pane_ParamLimits

0xcf35,	// (0x00060e15) cell_image3_tool_bar_pane

0x061b,	// (0x000544fb) cell_image3_tool_bar_pane_g1

0xb747,	// (0x0005f627) bg_popup_trans_pane_cp1

0xcf49,	// (0x00060e29) popup_image3_note_pane_t1

0xcf57,	// (0x00060e37) popup_image3_note_pane_t2

0xcf65,	// (0x00060e45) popup_image3_note_pane_t3

0x0002,

0xf8d6,	// (0x000637b6) popup_image3_note_pane_t

0xcf73,	// (0x00060e53) popup_image3_note_pane_t3_copy1

0x7e7f,	// (0x0005bd5f) bg_myfav_hc_instruction_pane_ParamLimits

0x7e7f,	// (0x0005bd5f) bg_myfav_hc_instruction_pane

0x7e91,	// (0x0005bd71) cell_myfav_contact_pane_ParamLimits

0x7e91,	// (0x0005bd71) cell_myfav_contact_pane

0x7eab,	// (0x0005bd8b) cell_myfav_contact_pane_cp1_ParamLimits

0x7eab,	// (0x0005bd8b) cell_myfav_contact_pane_cp1

0x7ec1,	// (0x0005bda1) cell_myfav_contact_pane_cp2_ParamLimits

0x7ec1,	// (0x0005bda1) cell_myfav_contact_pane_cp2

0x7ed7,	// (0x0005bdb7) cell_myfav_contact_pane_cp3_ParamLimits

0x7ed7,	// (0x0005bdb7) cell_myfav_contact_pane_cp3

0x7eec,	// (0x0005bdcc) cell_myfav_contact_pane_cp4_ParamLimits

0x7eec,	// (0x0005bdcc) cell_myfav_contact_pane_cp4

0x7f00,	// (0x0005bde0) cell_myfav_contact_pane_cp5_ParamLimits

0x7f00,	// (0x0005bde0) cell_myfav_contact_pane_cp5

0x7f14,	// (0x0005bdf4) cell_myfav_contact_pane_cp6_ParamLimits

0x7f14,	// (0x0005bdf4) cell_myfav_contact_pane_cp6

0x7f28,	// (0x0005be08) cell_myfav_contact_pane_cp7_ParamLimits

0x7f28,	// (0x0005be08) cell_myfav_contact_pane_cp7

0xcf81,	// (0x00060e61) listscroll_gen_pane_cp05

0x7f40,	// (0x0005be20) main_myfav_hc_pane_g1_ParamLimits

0x7f40,	// (0x0005be20) main_myfav_hc_pane_g1

0x7f56,	// (0x0005be36) main_myfav_hc_pane_g2_ParamLimits

0x7f56,	// (0x0005be36) main_myfav_hc_pane_g2

0x0002,

0xf8dd,	// (0x000637bd) main_myfav_hc_pane_g_ParamLimits

0xf8dd,	// (0x000637bd) main_myfav_hc_pane_g

0x7f80,	// (0x0005be60) main_myfav_hc_pane_t1_ParamLimits

0x7f80,	// (0x0005be60) main_myfav_hc_pane_t1

0xcf8a,	// (0x00060e6a) main_myfav_hc_pane_t2_ParamLimits

0xcf8a,	// (0x00060e6a) main_myfav_hc_pane_t2

0xcf9c,	// (0x00060e7c) main_myfav_hc_pane_t3_ParamLimits

0xcf9c,	// (0x00060e7c) main_myfav_hc_pane_t3

0x7f95,	// (0x0005be75) main_myfav_hc_pane_t4_ParamLimits

0x7f95,	// (0x0005be75) main_myfav_hc_pane_t4

0x0004,

0xf8e4,	// (0x000637c4) main_myfav_hc_pane_t_ParamLimits

0xf8e4,	// (0x000637c4) main_myfav_hc_pane_t

0x061b,	// (0x000544fb) bg_myfav_hc_instruction_pane_g1

0xcfae,	// (0x00060e8e) cell_myfav_contact_pane_g1_ParamLimits

0xcfae,	// (0x00060e8e) cell_myfav_contact_pane_g1

0xcfae,	// (0x00060e8e) cell_myfav_contact_pane_g2_ParamLimits

0xcfae,	// (0x00060e8e) cell_myfav_contact_pane_g2

0xcfba,	// (0x00060e9a) cell_myfav_contact_pane_g3_ParamLimits

0xcfba,	// (0x00060e9a) cell_myfav_contact_pane_g3

0xbeae,	// (0x0005fd8e) cell_myfav_contact_pane_g4_ParamLimits

0xbeae,	// (0x0005fd8e) cell_myfav_contact_pane_g4

0xcfc7,	// (0x00060ea7) cell_myfav_contact_pane_g5_ParamLimits

0xcfc7,	// (0x00060ea7) cell_myfav_contact_pane_g5

0x0004,

0xf8ef,	// (0x000637cf) cell_myfav_contact_pane_g_ParamLimits

0xf8ef,	// (0x000637cf) cell_myfav_contact_pane_g

0x7f6c,	// (0x0005be4c) main_myfav_hc_pane_g3_ParamLimits

0x7f6c,	// (0x0005be4c) main_myfav_hc_pane_g3

0x3463,	// (0x00057343) popup_adpt_find_window

0x7fb9,	// (0x0005be99) afind_page_pane_ParamLimits

0x7fb9,	// (0x0005be99) afind_page_pane

0x7fce,	// (0x0005beae) aid_size_cell_afind_ParamLimits

0x7fce,	// (0x0005beae) aid_size_cell_afind

0x7fec,	// (0x0005becc) bg_popup_sub_pane_cp09_ParamLimits

0x7fec,	// (0x0005becc) bg_popup_sub_pane_cp09

0x7ff9,	// (0x0005bed9) find_pane_cp01_ParamLimits

0x7ff9,	// (0x0005bed9) find_pane_cp01

0xcfd3,	// (0x00060eb3) grid_afind_control_pane_ParamLimits

0xcfd3,	// (0x00060eb3) grid_afind_control_pane

0x8006,	// (0x0005bee6) grid_afind_pane_ParamLimits

0x8006,	// (0x0005bee6) grid_afind_pane

0x8024,	// (0x0005bf04) cell_afind_pane_ParamLimits

0x8024,	// (0x0005bf04) cell_afind_pane

0x061b,	// (0x000544fb) afind_page_pane_g1

0x8073,	// (0x0005bf53) afind_page_pane_g2

0x807b,	// (0x0005bf5b) afind_page_pane_g3

0x0002,

0xf8fa,	// (0x000637da) afind_page_pane_g

0x8083,	// (0x0005bf63) afind_page_pane_t1

0xcff9,	// (0x00060ed9) cell_afind_grid_control_pane_ParamLimits

0xcff9,	// (0x00060ed9) cell_afind_grid_control_pane

0xcdec,	// (0x00060ccc) bg_button_pane_cp69_ParamLimits

0xcdec,	// (0x00060ccc) bg_button_pane_cp69

0x8091,	// (0x0005bf71) cell_afind_pane_g1_ParamLimits

0x8091,	// (0x0005bf71) cell_afind_pane_g1

0x809e,	// (0x0005bf7e) cell_afind_pane_t1_ParamLimits

0x809e,	// (0x0005bf7e) cell_afind_pane_t1

0x0625,	// (0x00054505) bg_button_pane_cp72

0xd008,	// (0x00060ee8) cell_afind_grid_control_pane_g1

0x594e,	// (0x0005982e) aid_image_placing_area_ParamLimits

0x594e,	// (0x0005982e) aid_image_placing_area

0xbea0,	// (0x0005fd80) field_vitu_entry_pane_g1_ParamLimits

0xbea0,	// (0x0005fd80) field_vitu_entry_pane_g1

0xbea0,	// (0x0005fd80) field_vitu_entry_pane_g2_ParamLimits

0xbea0,	// (0x0005fd80) field_vitu_entry_pane_g2

0x0001,

0xf7a7,	// (0x00063687) field_vitu_entry_pane_g_ParamLimits

0xf7a7,	// (0x00063687) field_vitu_entry_pane_g

0xc92e,	// (0x0006080e) cell_vitu_itu_pane_g1_ParamLimits

0xc911,	// (0x000607f1) cell_vitu_itu_pane_t3_ParamLimits

0xc911,	// (0x000607f1) cell_vitu_itu_pane_t3

0xcda0,	// (0x00060c80) mp4_progress_pane_t1_ParamLimits

0xcdb7,	// (0x00060c97) mp4_progress_pane_t2_ParamLimits

0xf840,	// (0x00063720) mp4_progress_pane_t_ParamLimits

0xcdce,	// (0x00060cae) mup_progress_pane_cp04_ParamLimits

0x7fa7,	// (0x0005be87) main_myfav_hc_pane_t5_ParamLimits

0x7fa7,	// (0x0005be87) main_myfav_hc_pane_t5

0xb769,	// (0x0005f649) aid_zoom_text_primary

0x3463,	// (0x00057343) popup_adpt_find_window_ParamLimits

0xb7a2,	// (0x0005f682) main_cam_set_pane

0x7a87,	// (0x0005b967) cam4_zoom_pane_ParamLimits

0x7a87,	// (0x0005b967) cam4_zoom_pane

0x80b0,	// (0x0005bf90) main_cam_set_pane_g1_ParamLimits

0x80b0,	// (0x0005bf90) main_cam_set_pane_g1

0x80be,	// (0x0005bf9e) main_cam_set_pane_g2_ParamLimits

0x80be,	// (0x0005bf9e) main_cam_set_pane_g2

0x0001,

0xf901,	// (0x000637e1) main_cam_set_pane_g_ParamLimits

0xf901,	// (0x000637e1) main_cam_set_pane_g

0x80dd,	// (0x0005bfbd) main_cam_set_pane_t1_ParamLimits

0x80dd,	// (0x0005bfbd) main_cam_set_pane_t1

0x80ef,	// (0x0005bfcf) main_cset_listscroll_pane_ParamLimits

0x80ef,	// (0x0005bfcf) main_cset_listscroll_pane

0x8111,	// (0x0005bff1) main_cset_slider_pane_ParamLimits

0x8111,	// (0x0005bff1) main_cset_slider_pane

0xd019,	// (0x00060ef9) main_cset_list_pane_ParamLimits

0xd019,	// (0x00060ef9) main_cset_list_pane

0xd029,	// (0x00060f09) scroll_pane_cp028

0x8135,	// (0x0005c015) aid_area_touch_slider

0x8151,	// (0x0005c031) cset_slider_pane

0x8174,	// (0x0005c054) main_cset_slider_pane_g1

0x8189,	// (0x0005c069) main_cset_slider_pane_g2

0x0011,

0xf906,	// (0x000637e6) main_cset_slider_pane_g

0xd062,	// (0x00060f42) main_cset_slider_pane_t1

0x8245,	// (0x0005c125) main_cset_slider_pane_t2

0x825f,	// (0x0005c13f) main_cset_slider_pane_t3

0x8279,	// (0x0005c159) main_cset_slider_pane_t4

0x8293,	// (0x0005c173) main_cset_slider_pane_t5

0x82ad,	// (0x0005c18d) main_cset_slider_pane_t6

0x82c2,	// (0x0005c1a2) main_cset_slider_pane_t7

0x000e,

0xf92b,	// (0x0006380b) main_cset_slider_pane_t

0x83c6,	// (0x0005c2a6) cset_list_set_pane_ParamLimits

0x83c6,	// (0x0005c2a6) cset_list_set_pane

0xd0fc,	// (0x00060fdc) aid_position_infowindow_above

0xd104,	// (0x00060fe4) aid_position_infowindow_below

0x83d7,	// (0x0005c2b7) cset_list_set_pane_g1_ParamLimits

0x83d7,	// (0x0005c2b7) cset_list_set_pane_g1

0x83e3,	// (0x0005c2c3) cset_list_set_pane_g3_ParamLimits

0x83e3,	// (0x0005c2c3) cset_list_set_pane_g3

0x0001,

0xf94a,	// (0x0006382a) cset_list_set_pane_g_ParamLimits

0xf94a,	// (0x0006382a) cset_list_set_pane_g

0x83f2,	// (0x0005c2d2) cset_list_set_pane_t1_ParamLimits

0x83f2,	// (0x0005c2d2) cset_list_set_pane_t1

0x106c,	// (0x00054f4c) list_highlight_pane_cp021_ParamLimits

0x106c,	// (0x00054f4c) list_highlight_pane_cp021

0x10dc,	// (0x00054fbc) cset_slider_pane_g1

0x10ee,	// (0x00054fce) cset_slider_pane_g2

0x10e5,	// (0x00054fc5) cset_slider_pane_g3

0x0002,

0xf94f,	// (0x0006382f) cset_slider_pane_g

0xef2f,	// (0x00062e0f) aid_area_touch_cam4_zoom

0xef37,	// (0x00062e17) cam4_zoom_cont_pane

0xef3f,	// (0x00062e1f) cam4_zoom_pane_g1

0xef47,	// (0x00062e27) cam4_zoom_pane_g2

0x8407,	// (0x0005c2e7) cam4_zoom_pane_g3

0x0002,

0xf956,	// (0x00063836) cam4_zoom_pane_g

0xef4f,	// (0x00062e2f) cam4_zoom_cont_pane_g1

0xef58,	// (0x00062e38) cam4_zoom_cont_pane_g2

0xef61,	// (0x00062e41) cam4_zoom_cont_pane_g3

0x0002,

0xf95d,	// (0x0006383d) cam4_zoom_cont_pane_g

0x7949,	// (0x0005b829) call4_image_pane_ParamLimits

0x7949,	// (0x0005b829) call4_image_pane

0xce10,	// (0x00060cf0) call4_windows_conf_pane_ParamLimits

0xce23,	// (0x00060d03) popup_call4_audio_in_window_ParamLimits

0xce23,	// (0x00060d03) popup_call4_audio_in_window

0xb747,	// (0x0005f627) bg_popup_call2_act_pane_cp02

0xce61,	// (0x00060d41) call4_list_conf_pane

0x061b,	// (0x000544fb) call4_image_pane_g1

0x061b,	// (0x000544fb) call4_image_pane_g2

0x0001,

0xf3c9,	// (0x000632a9) call4_image_pane_g

0xd10c,	// (0x00060fec) list_single_graphic_popup_conf4_pane_ParamLimits

0xd10c,	// (0x00060fec) list_single_graphic_popup_conf4_pane

0xb747,	// (0x0005f627) list_highlight_pane_cp022

0xd11f,	// (0x00060fff) list_single_graphic_popup_conf4_pane_g1

0x0d1a,	// (0x00054bfa) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf964,	// (0x00063844) list_single_graphic_popup_conf4_pane_g

0xd127,	// (0x00061007) list_single_graphic_popup_conf4_pane_t1

0x4225,	// (0x00058105) popup_vtel_slider_window_ParamLimits

0x4225,	// (0x00058105) popup_vtel_slider_window

0xcdda,	// (0x00060cba) dialer2_ne_pane_t2_ParamLimits

0xcdda,	// (0x00060cba) dialer2_ne_pane_t2

0x0001,

0xf845,	// (0x00063725) dialer2_ne_pane_t_ParamLimits

0xf845,	// (0x00063725) dialer2_ne_pane_t

0x656f,	// (0x0005a44f) bg_popup_sub_pane_cp010_ParamLimits

0x656f,	// (0x0005a44f) bg_popup_sub_pane_cp010

0x840f,	// (0x0005c2ef) popup_vtel_slider_window_g1_ParamLimits

0x840f,	// (0x0005c2ef) popup_vtel_slider_window_g1

0x8422,	// (0x0005c302) popup_vtel_slider_window_g2_ParamLimits

0x8422,	// (0x0005c302) popup_vtel_slider_window_g2

0x0003,

0xf969,	// (0x00063849) popup_vtel_slider_window_g_ParamLimits

0xf969,	// (0x00063849) popup_vtel_slider_window_g

0x8476,	// (0x0005c356) vtel_slider_pane_ParamLimits

0x8476,	// (0x0005c356) vtel_slider_pane

0x8498,	// (0x0005c378) vtel_slider_pane_g1_ParamLimits

0x8498,	// (0x0005c378) vtel_slider_pane_g1

0x84ac,	// (0x0005c38c) vtel_slider_pane_g2_ParamLimits

0x84ac,	// (0x0005c38c) vtel_slider_pane_g2

0x84c4,	// (0x0005c3a4) vtel_slider_pane_g3_ParamLimits

0x84c4,	// (0x0005c3a4) vtel_slider_pane_g3

0x8498,	// (0x0005c378) vtel_slider_pane_g4_ParamLimits

0x8498,	// (0x0005c378) vtel_slider_pane_g4

0x84da,	// (0x0005c3ba) vtel_slider_pane_g5_ParamLimits

0x84da,	// (0x0005c3ba) vtel_slider_pane_g5

0x0004,

0xf972,	// (0x00063852) vtel_slider_pane_g_ParamLimits

0xf972,	// (0x00063852) vtel_slider_pane_g

0xb7a2,	// (0x0005f682) main_gallery2_pane

0x7c4c,	// (0x0005bb2c) aid_size_row_itut2_dropdow_list_ParamLimits

0x7c4c,	// (0x0005bb2c) aid_size_row_itut2_dropdow_list

0x7cb6,	// (0x0005bb96) grid_vitu2_function_top_pane_ParamLimits

0x7cb6,	// (0x0005bb96) grid_vitu2_function_top_pane

0x7cfe,	// (0x0005bbde) popup_vitu2_dropdown_list_window_ParamLimits

0x7cfe,	// (0x0005bbde) popup_vitu2_dropdown_list_window

0x7d1f,	// (0x0005bbff) popup_vitu2_match_list_window

0x84f0,	// (0x0005c3d0) cell_vitu2_function_top_pane_ParamLimits

0x84f0,	// (0x0005c3d0) cell_vitu2_function_top_pane

0x8508,	// (0x0005c3e8) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8508,	// (0x0005c3e8) cell_vitu2_function_top_pane_cp01

0x8524,	// (0x0005c404) cell_vitu2_function_top_wide_pane_ParamLimits

0x8524,	// (0x0005c404) cell_vitu2_function_top_wide_pane

0xb7a2,	// (0x0005f682) bg_button_pane_cp012

0x8541,	// (0x0005c421) cell_vitu2_function_top_pane_g1

0xef6a,	// (0x00062e4a) bg_button_pane_cp013_ParamLimits

0xef6a,	// (0x00062e4a) bg_button_pane_cp013

0x8555,	// (0x0005c435) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8555,	// (0x0005c435) cell_vitu2_function_top_wide_pane_g1

0xb7a2,	// (0x0005f682) bg_popup_sub_pane_cp20

0x856d,	// (0x0005c44d) list_vitu2_match_list_pane

0xcefd,	// (0x00060ddd) bg_popup_sub_pane_cp20_g1

0xcf05,	// (0x00060de5) bg_popup_sub_pane_cp20_g2

0x0839,	// (0x00054719) bg_popup_sub_pane_cp20_g3

0xcf0d,	// (0x00060ded) bg_popup_sub_pane_cp20_g4

0x0819,	// (0x000546f9) bg_popup_sub_pane_cp20_g5

0xd13d,	// (0x0006101d) bg_popup_sub_pane_cp20_g6

0xcf1d,	// (0x00060dfd) bg_popup_sub_pane_cp20_g7

0xcf25,	// (0x00060e05) bg_popup_sub_pane_cp20_g8

0xcf2d,	// (0x00060e0d) bg_popup_sub_pane_cp20_g9

0x0008,

0xf97d,	// (0x0006385d) bg_popup_sub_pane_cp20_g

0xef86,	// (0x00062e66) list_vitu2_match_list_item_pane_ParamLimits

0xef86,	// (0x00062e66) list_vitu2_match_list_item_pane

0xef98,	// (0x00062e78) list_vitu2_match_list_item_pane_t1

0xb7b0,	// (0x0005f690) bg_popup_sub_pane_cp21

0x059a,	// (0x0005447a) grid_vitu2_dropdown_list_pane

0x858b,	// (0x0005c46b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x858b,	// (0x0005c46b) cell_vitu2_dropdown_list_char_pane

0x85a9,	// (0x0005c489) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x85a9,	// (0x0005c489) cell_vitu2_dropdown_list_ctrl_pane

0xd152,	// (0x00061032) cell_vitu2_dropdown_list_char_pane_g1

0xd15b,	// (0x0006103b) cell_vitu2_dropdown_list_char_pane_g2

0xd164,	// (0x00061044) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99a,	// (0x0006387a) cell_vitu2_dropdown_list_char_pane_g

0x85d1,	// (0x0005c4b1) cell_vitu2_dropdown_list_char_pane_t1

0x85df,	// (0x0005c4bf) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x85df,	// (0x0005c4bf) cell_vitu2_dropdown_list_ctrl_pane_g1

0x85ef,	// (0x0005c4cf) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x85ef,	// (0x0005c4cf) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8600,	// (0x0005c4e0) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8600,	// (0x0005c4e0) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8610,	// (0x0005c4f0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8610,	// (0x0005c4f0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xee70,	// (0x00062d50) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xee70,	// (0x00062d50) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a1,	// (0x00063881) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a1,	// (0x00063881) cell_vitu2_dropdown_list_ctrl_pane_g

0x862c,	// (0x0005c50c) aid_size_cell_gallery2_ParamLimits

0x862c,	// (0x0005c50c) aid_size_cell_gallery2

0x864a,	// (0x0005c52a) grid_gallery2_pane_ParamLimits

0x864a,	// (0x0005c52a) grid_gallery2_pane

0x734e,	// (0x0005b22e) scroll_pane_cp029_ParamLimits

0x734e,	// (0x0005b22e) scroll_pane_cp029

0x865e,	// (0x0005c53e) cell_gallery2_pane_ParamLimits

0x865e,	// (0x0005c53e) cell_gallery2_pane

0xd16d,	// (0x0006104d) cell_gallery2_pane_g2

0x86b7,	// (0x0005c597) cell_gallery2_pane_g3

0xd175,	// (0x00061055) cell_gallery2_pane_g4

0xd17d,	// (0x0006105d) cell_gallery2_pane_g5

0x059a,	// (0x0005447a) grid_highlight_pane_cp10

0x7d1f,	// (0x0005bbff) popup_vitu2_match_list_window_ParamLimits

0x7d30,	// (0x0005bc10) popup_vitu2_query_window_ParamLimits

0x7d30,	// (0x0005bc10) popup_vitu2_query_window

0xb7b0,	// (0x0005f690) bg_vitu2_candi_button_pane

0xd152,	// (0x00061032) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd15b,	// (0x0006103b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd164,	// (0x00061044) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x86bf,	// (0x0005c59f) bg_button_pane_cp015

0x86d0,	// (0x0005c5b0) bg_button_pane_cp016

0x86dc,	// (0x0005c5bc) bg_button_pane_cp017

0x22ef,	// (0x000561cf) bg_popup_sub_pane_cp22

0xd185,	// (0x00061065) popup_vitu2_query_window_g1

0x871a,	// (0x0005c5fa) popup_vitu2_query_window_g2

0x0002,

0xf9ac,	// (0x0006388c) popup_vitu2_query_window_g

0x873a,	// (0x0005c61a) popup_vitu2_query_window_t1_ParamLimits

0x873a,	// (0x0005c61a) popup_vitu2_query_window_t1

0x876d,	// (0x0005c64d) popup_vitu2_query_window_t2_ParamLimits

0x876d,	// (0x0005c64d) popup_vitu2_query_window_t2

0x877f,	// (0x0005c65f) popup_vitu2_query_window_t3_ParamLimits

0x877f,	// (0x0005c65f) popup_vitu2_query_window_t3

0x87a7,	// (0x0005c687) popup_vitu2_query_window_t4_ParamLimits

0x87a7,	// (0x0005c687) popup_vitu2_query_window_t4

0x87b9,	// (0x0005c699) popup_vitu2_query_window_t5_ParamLimits

0x87b9,	// (0x0005c699) popup_vitu2_query_window_t5

0x0006,

0xf9b3,	// (0x00063893) popup_vitu2_query_window_t_ParamLimits

0xf9b3,	// (0x00063893) popup_vitu2_query_window_t

0xd011,	// (0x00060ef1) main_cset_text_pane

0x8135,	// (0x0005c015) aid_area_touch_slider_ParamLimits

0x8151,	// (0x0005c031) cset_slider_pane_ParamLimits

0x8174,	// (0x0005c054) main_cset_slider_pane_g1_ParamLimits

0x8189,	// (0x0005c069) main_cset_slider_pane_g2_ParamLimits

0xd032,	// (0x00060f12) main_cset_slider_pane_g3_ParamLimits

0xd032,	// (0x00060f12) main_cset_slider_pane_g3

0x819e,	// (0x0005c07e) main_cset_slider_pane_g4_ParamLimits

0x819e,	// (0x0005c07e) main_cset_slider_pane_g4

0x81ad,	// (0x0005c08d) main_cset_slider_pane_g5_ParamLimits

0x81ad,	// (0x0005c08d) main_cset_slider_pane_g5

0x81b9,	// (0x0005c099) main_cset_slider_pane_g6_ParamLimits

0x81b9,	// (0x0005c099) main_cset_slider_pane_g6

0xf906,	// (0x000637e6) main_cset_slider_pane_g_ParamLimits

0xd062,	// (0x00060f42) main_cset_slider_pane_t1_ParamLimits

0x8245,	// (0x0005c125) main_cset_slider_pane_t2_ParamLimits

0x825f,	// (0x0005c13f) main_cset_slider_pane_t3_ParamLimits

0x8279,	// (0x0005c159) main_cset_slider_pane_t4_ParamLimits

0x8293,	// (0x0005c173) main_cset_slider_pane_t5_ParamLimits

0x82ad,	// (0x0005c18d) main_cset_slider_pane_t6_ParamLimits

0x82c2,	// (0x0005c1a2) main_cset_slider_pane_t7_ParamLimits

0x82ec,	// (0x0005c1cc) main_cset_slider_pane_t8_ParamLimits

0x82ec,	// (0x0005c1cc) main_cset_slider_pane_t8

0x8314,	// (0x0005c1f4) main_cset_slider_pane_t9_ParamLimits

0x8314,	// (0x0005c1f4) main_cset_slider_pane_t9

0x833c,	// (0x0005c21c) main_cset_slider_pane_t10_ParamLimits

0x833c,	// (0x0005c21c) main_cset_slider_pane_t10

0x8364,	// (0x0005c244) main_cset_slider_pane_t11_ParamLimits

0x8364,	// (0x0005c244) main_cset_slider_pane_t11

0x838c,	// (0x0005c26c) main_cset_slider_pane_t12_ParamLimits

0x838c,	// (0x0005c26c) main_cset_slider_pane_t12

0x83a9,	// (0x0005c289) main_cset_slider_pane_t13_ParamLimits

0x83a9,	// (0x0005c289) main_cset_slider_pane_t13

0xf92b,	// (0x0006380b) main_cset_slider_pane_t_ParamLimits

0xb747,	// (0x0005f627) bg_popup_sub_pane_cp011

0xd191,	// (0x00061071) main_cset_text_pane_g1

0xd199,	// (0x00061079) main_cset_text_pane_t1

0xd1a7,	// (0x00061087) main_cset_text_pane_t2

0xd1b5,	// (0x00061095) main_cset_text_pane_t3

0xd1c3,	// (0x000610a3) main_cset_text_pane_t4

0xd1d1,	// (0x000610b1) main_cset_text_pane_t5

0xd1df,	// (0x000610bf) main_cset_text_pane_t6

0xd1ed,	// (0x000610cd) main_cset_text_pane_t7

0x0006,

0xf9c2,	// (0x000638a2) main_cset_text_pane_t

0xb7b0,	// (0x0005f690) main_cam4_burst_pane

0xb7b0,	// (0x0005f690) main_cam5_pane

0xcfe7,	// (0x00060ec7) bg_button_pane_cp019

0xcff0,	// (0x00060ed0) bg_button_pane_cp020

0xd03e,	// (0x00060f1e) main_cset_slider_pane_g7_ParamLimits

0xd03e,	// (0x00060f1e) main_cset_slider_pane_g7

0xd04a,	// (0x00060f2a) main_cset_slider_pane_g8_ParamLimits

0xd04a,	// (0x00060f2a) main_cset_slider_pane_g8

0x81cd,	// (0x0005c0ad) main_cset_slider_pane_g9_ParamLimits

0x81cd,	// (0x0005c0ad) main_cset_slider_pane_g9

0x81d9,	// (0x0005c0b9) main_cset_slider_pane_g10_ParamLimits

0x81d9,	// (0x0005c0b9) main_cset_slider_pane_g10

0x81e5,	// (0x0005c0c5) main_cset_slider_pane_g11_ParamLimits

0x81e5,	// (0x0005c0c5) main_cset_slider_pane_g11

0x81f1,	// (0x0005c0d1) main_cset_slider_pane_g12_ParamLimits

0x81f1,	// (0x0005c0d1) main_cset_slider_pane_g12

0x81fd,	// (0x0005c0dd) main_cset_slider_pane_g13_ParamLimits

0x81fd,	// (0x0005c0dd) main_cset_slider_pane_g13

0x8209,	// (0x0005c0e9) main_cset_slider_pane_g14_ParamLimits

0x8209,	// (0x0005c0e9) main_cset_slider_pane_g14

0x8215,	// (0x0005c0f5) main_cset_slider_pane_g15_ParamLimits

0x8215,	// (0x0005c0f5) main_cset_slider_pane_g15

0xd08a,	// (0x00060f6a) main_cset_slider_pane_t14_ParamLimits

0xd08a,	// (0x00060f6a) main_cset_slider_pane_t14

0xd0c3,	// (0x00060fa3) main_cset_slider_pane_t15_ParamLimits

0xd0c3,	// (0x00060fa3) main_cset_slider_pane_t15

0x8821,	// (0x0005c701) aid_cam4_burst_size_cell_ParamLimits

0x8821,	// (0x0005c701) aid_cam4_burst_size_cell

0x8841,	// (0x0005c721) grid_cam4_burst_pane_ParamLimits

0x8841,	// (0x0005c721) grid_cam4_burst_pane

0x8867,	// (0x0005c747) linegrid_cam4_burst_pane_ParamLimits

0x8867,	// (0x0005c747) linegrid_cam4_burst_pane

0x8889,	// (0x0005c769) scroll_pane_cp30_ParamLimits

0x8889,	// (0x0005c769) scroll_pane_cp30

0x8895,	// (0x0005c775) cell_cam4_burst_pane_ParamLimits

0x8895,	// (0x0005c775) cell_cam4_burst_pane

0xd1fb,	// (0x000610db) linegrid_cam4_burst_pane_g1_ParamLimits

0xd1fb,	// (0x000610db) linegrid_cam4_burst_pane_g1

0x88dc,	// (0x0005c7bc) linegrid_cam4_burst_pane_g2_ParamLimits

0x88dc,	// (0x0005c7bc) linegrid_cam4_burst_pane_g2

0xd208,	// (0x000610e8) linegrid_cam4_burst_pane_g3_ParamLimits

0xd208,	// (0x000610e8) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d1,	// (0x000638b1) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d1,	// (0x000638b1) linegrid_cam4_burst_pane_g

0x88ed,	// (0x0005c7cd) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x88ed,	// (0x0005c7cd) linegrid_cam4_burst_pane_g3_copy1

0xd215,	// (0x000610f5) linegrid_cam4_burst_pane_g4_ParamLimits

0xd215,	// (0x000610f5) linegrid_cam4_burst_pane_g4

0x8907,	// (0x0005c7e7) linegrid_cam4_burst_pane_g5_ParamLimits

0x8907,	// (0x0005c7e7) linegrid_cam4_burst_pane_g5

0x8918,	// (0x0005c7f8) linegrid_cam4_burst_pane_g6_ParamLimits

0x8918,	// (0x0005c7f8) linegrid_cam4_burst_pane_g6

0xd222,	// (0x00061102) linegrid_cam4_burst_pane_g7_ParamLimits

0xd222,	// (0x00061102) linegrid_cam4_burst_pane_g7

0x8929,	// (0x0005c809) cell_cam4_burst_pane_g1

0xd23b,	// (0x0006111b) main_cam5_pane_t1_ParamLimits

0xd23b,	// (0x0006111b) main_cam5_pane_t1

0xd24d,	// (0x0006112d) main_cam5_pane_t2_ParamLimits

0xd24d,	// (0x0006112d) main_cam5_pane_t2

0xd25f,	// (0x0006113f) main_cam5_pane_t3_ParamLimits

0xd25f,	// (0x0006113f) main_cam5_pane_t3

0xd271,	// (0x00061151) main_cam5_pane_t4_ParamLimits

0xd271,	// (0x00061151) main_cam5_pane_t4

0xd287,	// (0x00061167) main_cam5_pane_t5_ParamLimits

0xd287,	// (0x00061167) main_cam5_pane_t5

0xd299,	// (0x00061179) main_cam5_pane_t6_ParamLimits

0xd299,	// (0x00061179) main_cam5_pane_t6

0xd2ab,	// (0x0006118b) main_cam5_pane_t7_ParamLimits

0xd2ab,	// (0x0006118b) main_cam5_pane_t7

0xd2bd,	// (0x0006119d) main_cam5_pane_t8_ParamLimits

0xd2bd,	// (0x0006119d) main_cam5_pane_t8

0xd2d9,	// (0x000611b9) main_cam5_pane_t9_ParamLimits

0xd2d9,	// (0x000611b9) main_cam5_pane_t9

0xd2eb,	// (0x000611cb) main_cam5_pane_t10_ParamLimits

0xd2eb,	// (0x000611cb) main_cam5_pane_t10

0xd2fd,	// (0x000611dd) main_cam5_pane_t11_ParamLimits

0xd2fd,	// (0x000611dd) main_cam5_pane_t11

0xd30f,	// (0x000611ef) main_cam5_pane_t12_ParamLimits

0xd30f,	// (0x000611ef) main_cam5_pane_t12

0xd324,	// (0x00061204) main_cam5_pane_t13_ParamLimits

0xd324,	// (0x00061204) main_cam5_pane_t13

0x000c,

0xf9dd,	// (0x000638bd) main_cam5_pane_t_ParamLimits

0xf9dd,	// (0x000638bd) main_cam5_pane_t

0x34c0,	// (0x000573a0) popup_scut_keymap_window_ParamLimits

0x34c0,	// (0x000573a0) popup_scut_keymap_window

0x893e,	// (0x0005c81e) aid_size_cell_brow_shortcut

0x059a,	// (0x0005447a) bg_popup_window_pane_cp010

0x894a,	// (0x0005c82a) grid_scut_pane

0x8954,	// (0x0005c834) cell_scut_pane_ParamLimits

0x8954,	// (0x0005c834) cell_scut_pane

0x8969,	// (0x0005c849) cell_scut_pane_g1

0xd341,	// (0x00061221) cell_scut_pane_t1

0xd350,	// (0x00061230) cell_scut_pane_t2

0x8972,	// (0x0005c852) cell_scut_pane_t3

0x0002,

0xf9f8,	// (0x000638d8) cell_scut_pane_t

0x6b1d,	// (0x0005a9fd) main_mup3_pane_g8_ParamLimits

0x6b1d,	// (0x0005a9fd) main_mup3_pane_g8

0x7c60,	// (0x0005bb40) area_vitu2_query_pane_ParamLimits

0x7c60,	// (0x0005bb40) area_vitu2_query_pane

0x86e8,	// (0x0005c5c8) input_focus_pane_cp08

0xd35f,	// (0x0006123f) area_vitu2_query_pane_g1

0x8980,	// (0x0005c860) area_vitu2_query_pane_g2

0x0001,

0xf9ff,	// (0x000638df) area_vitu2_query_pane_g

0x898f,	// (0x0005c86f) area_vitu2_query_pane_t1_ParamLimits

0x898f,	// (0x0005c86f) area_vitu2_query_pane_t1

0x89a1,	// (0x0005c881) area_vitu2_query_pane_t2_ParamLimits

0x89a1,	// (0x0005c881) area_vitu2_query_pane_t2

0x89b3,	// (0x0005c893) area_vitu2_query_pane_t3_ParamLimits

0x89b3,	// (0x0005c893) area_vitu2_query_pane_t3

0xd36b,	// (0x0006124b) area_vitu2_query_pane_t4_ParamLimits

0xd36b,	// (0x0006124b) area_vitu2_query_pane_t4

0xd393,	// (0x00061273) area_vitu2_query_pane_t5_ParamLimits

0xd393,	// (0x00061273) area_vitu2_query_pane_t5

0xd3bb,	// (0x0006129b) area_vitu2_query_pane_t6_ParamLimits

0xd3bb,	// (0x0006129b) area_vitu2_query_pane_t6

0x0006,

0xfa04,	// (0x000638e4) area_vitu2_query_pane_t_ParamLimits

0xfa04,	// (0x000638e4) area_vitu2_query_pane_t

0x89db,	// (0x0005c8bb) bg_button_pane_cp018

0x89e7,	// (0x0005c8c7) bg_button_pane_cp021

0x89f3,	// (0x0005c8d3) bg_button_pane_cp022

0x8a12,	// (0x0005c8f2) input_focus_pane_cp09

0x526b,	// (0x0005914b) aid_size_touch_mv_arrow_left

0x0e50,	// (0x00054d30) aid_size_touch_mv_arrow_right

0x822d,	// (0x0005c10d) main_cset_slider_pane_g16_ParamLimits

0x822d,	// (0x0005c10d) main_cset_slider_pane_g16

0x8239,	// (0x0005c119) main_cset_slider_pane_g17_ParamLimits

0x8239,	// (0x0005c119) main_cset_slider_pane_g17

0x8929,	// (0x0005c809) cell_cam4_burst_pane_g1_ParamLimits

0xb747,	// (0x0005f627) compa_mode_pane

0x8432,	// (0x0005c312) popup_vtel_slider_window_g3_ParamLimits

0x8432,	// (0x0005c312) popup_vtel_slider_window_g3

0x8449,	// (0x0005c329) popup_vtel_slider_window_g4_ParamLimits

0x8449,	// (0x0005c329) popup_vtel_slider_window_g4

0x8460,	// (0x0005c340) popup_vtel_slider_window_t1_ParamLimits

0x8460,	// (0x0005c340) popup_vtel_slider_window_t1

0xb7b0,	// (0x0005f690) main_cl_pane

0xc2c6,	// (0x000601a6) popup_imed_adjust2_window_ParamLimits

0x22ef,	// (0x000561cf) bg_tb_trans_pane_cp05_ParamLimits

0xc846,	// (0x00060726) popup_imed_adjust2_window_g1_ParamLimits

0xc855,	// (0x00060735) popup_imed_adjust2_window_g2_ParamLimits

0xc855,	// (0x00060735) popup_imed_adjust2_window_g2

0xc861,	// (0x00060741) popup_imed_adjust2_window_g3_ParamLimits

0xc861,	// (0x00060741) popup_imed_adjust2_window_g3

0x0002,

0xf76b,	// (0x0006364b) popup_imed_adjust2_window_g_ParamLimits

0xf76b,	// (0x0006364b) popup_imed_adjust2_window_g

0xc86d,	// (0x0006074d) popup_imed_adjust2_window_t1_ParamLimits

0xc885,	// (0x00060765) slider_imed_adjust_pane_ParamLimits

0xc899,	// (0x00060779) slider_imed_adjust_pane_g1_ParamLimits

0xc8a9,	// (0x00060789) slider_imed_adjust_pane_g2_ParamLimits

0xc8b9,	// (0x00060799) slider_imed_adjust_pane_g3_ParamLimits

0xc8ca,	// (0x000607aa) slider_imed_adjust_pane_g4_ParamLimits

0xf772,	// (0x00063652) slider_imed_adjust_pane_g_ParamLimits

0x7a36,	// (0x0005b916) aid_touch_area_cam4_ParamLimits

0x7a36,	// (0x0005b916) aid_touch_area_cam4

0xee56,	// (0x00062d36) battery_pane_cp01

0x7ace,	// (0x0005b9ae) main_camera4_pane_g6_ParamLimits

0x7ace,	// (0x0005b9ae) main_camera4_pane_g6

0x7aef,	// (0x0005b9cf) main_camera4_pane_t2_ParamLimits

0x7aef,	// (0x0005b9cf) main_camera4_pane_t2

0x0001,

0xf879,	// (0x00063759) main_camera4_pane_t_ParamLimits

0xf879,	// (0x00063759) main_camera4_pane_t

0x7b1d,	// (0x0005b9fd) aid_touch_area_vid4_ParamLimits

0x7b1d,	// (0x0005b9fd) aid_touch_area_vid4

0x7b5f,	// (0x0005ba3f) main_video4_pane_g5_ParamLimits

0x7b5f,	// (0x0005ba3f) main_video4_pane_g5

0x7b80,	// (0x0005ba60) vid4_progress_pane_ParamLimits

0x7b80,	// (0x0005ba60) vid4_progress_pane

0xd056,	// (0x00060f36) main_cset_slider_pane_g18_ParamLimits

0xd056,	// (0x00060f36) main_cset_slider_pane_g18

0xd22f,	// (0x0006110f) cell_cam4_burst_pane_g2_ParamLimits

0xd22f,	// (0x0006110f) cell_cam4_burst_pane_g2

0x0001,

0xf9d8,	// (0x000638b8) cell_cam4_burst_pane_g_ParamLimits

0xf9d8,	// (0x000638b8) cell_cam4_burst_pane_g

0xbf46,	// (0x0005fe26) bg_cl_pane_ParamLimits

0xbf46,	// (0x0005fe26) bg_cl_pane

0x8a22,	// (0x0005c902) cl_header_pane_ParamLimits

0x8a22,	// (0x0005c902) cl_header_pane

0x8a36,	// (0x0005c916) cl_listscroll_pane_ParamLimits

0x8a36,	// (0x0005c916) cl_listscroll_pane

0xd407,	// (0x000612e7) bg_cl_pane_g1

0xd40f,	// (0x000612ef) bg_cl_pane_g2

0xd417,	// (0x000612f7) bg_cl_pane_g3

0xd41f,	// (0x000612ff) bg_cl_pane_g4

0xd427,	// (0x00061307) bg_cl_pane_g5

0xd42f,	// (0x0006130f) bg_cl_pane_g6

0xd437,	// (0x00061317) bg_cl_pane_g7

0xd43f,	// (0x0006131f) bg_cl_pane_g8

0xd447,	// (0x00061327) bg_cl_pane_g9

0x0008,

0xfa13,	// (0x000638f3) bg_cl_pane_g

0x8a46,	// (0x0005c926) aid_height_cl_leading_ParamLimits

0x8a46,	// (0x0005c926) aid_height_cl_leading

0x8a52,	// (0x0005c932) aid_height_cl_text_ParamLimits

0x8a52,	// (0x0005c932) aid_height_cl_text

0x106c,	// (0x00054f4c) bg_cl_header_pane_ParamLimits

0x106c,	// (0x00054f4c) bg_cl_header_pane

0x8a71,	// (0x0005c951) cl_header_pane_g1_ParamLimits

0x8a71,	// (0x0005c951) cl_header_pane_g1

0x8a87,	// (0x0005c967) cl_header_pane_t1_ParamLimits

0x8a87,	// (0x0005c967) cl_header_pane_t1

0xd44f,	// (0x0006132f) cl_list_pane

0xd458,	// (0x00061338) hc_scroll_pane_cp01

0x0819,	// (0x000546f9) bg_cl_header_pane_g1

0xcefd,	// (0x00060ddd) bg_cl_header_pane_g2

0x0839,	// (0x00054719) bg_cl_header_pane_g3

0xcf0d,	// (0x00060ded) bg_cl_header_pane_g4

0xcf05,	// (0x00060de5) bg_cl_header_pane_g5

0xd13d,	// (0x0006101d) bg_cl_header_pane_g6

0xcf25,	// (0x00060e05) bg_cl_header_pane_g7

0xcf2d,	// (0x00060e0d) bg_cl_header_pane_g8

0xcf1d,	// (0x00060dfd) bg_cl_header_pane_g9

0x0008,

0xfa26,	// (0x00063906) bg_cl_header_pane_g

0x8aa0,	// (0x0005c980) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8aa0,	// (0x0005c980) hc_cl_list_double_graphic_heading_pane

0x8ab0,	// (0x0005c990) hc_cl_list_single_graphic_pane_ParamLimits

0x8ab0,	// (0x0005c990) hc_cl_list_single_graphic_pane

0x8ac3,	// (0x0005c9a3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8ac3,	// (0x0005c9a3) hc_cl_list_single_graphic_pane_g1

0x8acf,	// (0x0005c9af) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8acf,	// (0x0005c9af) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa39,	// (0x00063919) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa39,	// (0x00063919) hc_cl_list_single_graphic_pane_g

0x8ae3,	// (0x0005c9c3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8ae3,	// (0x0005c9c3) hc_cl_list_single_graphic_pane_t1

0x8ac3,	// (0x0005c9a3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8ac3,	// (0x0005c9a3) hc_cl_list_double_graphic_heading_pane_g1

0x8af8,	// (0x0005c9d8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8af8,	// (0x0005c9d8) hc_cl_list_double_graphic_heading_pane_g2

0x8b0c,	// (0x0005c9ec) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8b0c,	// (0x0005c9ec) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa3e,	// (0x0006391e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa3e,	// (0x0006391e) hc_cl_list_double_graphic_heading_pane_g

0x8b20,	// (0x0005ca00) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8b20,	// (0x0005ca00) hc_cl_list_double_graphic_heading_pane_t1

0x8b35,	// (0x0005ca15) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8b35,	// (0x0005ca15) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa45,	// (0x00063925) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa45,	// (0x00063925) hc_cl_list_double_graphic_heading_pane_t

0xefa6,	// (0x00062e86) vid4_progress_pane_g1

0xefb5,	// (0x00062e95) vid4_progress_pane_g2

0xefc4,	// (0x00062ea4) vid4_progress_pane_g3

0xefd3,	// (0x00062eb3) vid4_progress_pane_g4

0x0004,

0xfa4a,	// (0x0006392a) vid4_progress_pane_g

0xefeb,	// (0x00062ecb) vid4_progress_pane_t1

0xf001,	// (0x00062ee1) vid4_progress_pane_t2

0x0002,

0xfa55,	// (0x00063935) vid4_progress_pane_t

0xf02b,	// (0x00062f0b) wait_bar_pane_cp07

0x657d,	// (0x0005a45d) blid_firmament_pane_ParamLimits

0x65be,	// (0x0005a49e) popup_blid_sat_info2_window_g1

0x65e2,	// (0x0005a4c2) popup_blid_sat_info2_window_t3

0x65f0,	// (0x0005a4d0) popup_blid_sat_info2_window_t4

0x65fe,	// (0x0005a4de) popup_blid_sat_info2_window_t5

0x660c,	// (0x0005a4ec) popup_blid_sat_info2_window_t6

0x661c,	// (0x0005a4fc) popup_blid_sat_info2_window_t7

0x662a,	// (0x0005a50a) popup_blid_sat_info2_window_t8

0x6638,	// (0x0005a518) popup_blid_sat_info2_window_t9

0x6646,	// (0x0005a526) popup_blid_sat_info2_window_t10

0x6737,	// (0x0005a617) aid_firma_cardinal_ParamLimits

0x674b,	// (0x0005a62b) blid_firmament_pane_t1_ParamLimits

0x6762,	// (0x0005a642) blid_firmament_pane_t2_ParamLimits

0x6779,	// (0x0005a659) blid_firmament_pane_t3_ParamLimits

0x6790,	// (0x0005a670) blid_firmament_pane_t4_ParamLimits

0xf664,	// (0x00063544) blid_firmament_pane_t_ParamLimits

0x67a7,	// (0x0005a687) blid_sat_info_pane_ParamLimits

0xb7a2,	// (0x0005f682) main_cam_set_pane_ParamLimits

0x72cf,	// (0x0005b1af) aid_size_cell_colour_35_ParamLimits

0x72ef,	// (0x0005b1cf) aid_size_cell_colour_112_ParamLimits

0x730f,	// (0x0005b1ef) aid_size_cell_effect_ParamLimits

0x22ef,	// (0x000561cf) bg_tb_trans_pane_cp02_ParamLimits

0x0a6b,	// (0x0005494b) heading_imed_pane_ParamLimits

0x732f,	// (0x0005b20f) listscroll_imed_pane_ParamLimits

0x19a8,	// (0x00055888) popup_call2_audio_first_window_g5_ParamLimits

0x19a8,	// (0x00055888) popup_call2_audio_first_window_g5

0x7701,	// (0x0005b5e1) aid_size_touch_image3_arrow_left_ParamLimits

0x7701,	// (0x0005b5e1) aid_size_touch_image3_arrow_left

0x7721,	// (0x0005b601) aid_size_touch_image3_arrow_right_ParamLimits

0x7721,	// (0x0005b601) aid_size_touch_image3_arrow_right

0xf016,	// (0x00062ef6) vid4_progress_pane_t3

0x74b8,	// (0x0005b398) main_hwr_training_symbol_option_pane_ParamLimits

0x74b8,	// (0x0005b398) main_hwr_training_symbol_option_pane

0xca73,	// (0x00060953) popup_hwr_training_preview_window_ParamLimits

0xca73,	// (0x00060953) popup_hwr_training_preview_window

0x74d4,	// (0x0005b3b4) hwr_training_navi_pane_g5_ParamLimits

0x74d4,	// (0x0005b3b4) hwr_training_navi_pane_g5

0xceeb,	// (0x00060dcb) popup_char_count_window

0xb7a2,	// (0x0005f682) bg_popup_sub_pane_cp20_ParamLimits

0x856d,	// (0x0005c44d) list_vitu2_match_list_pane_ParamLimits

0x857c,	// (0x0005c45c) vitu2_page_scroll_pane_ParamLimits

0x857c,	// (0x0005c45c) vitu2_page_scroll_pane

0xd48c,	// (0x0006136c) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd48c,	// (0x0006136c) list_single_hwr_training_symbol_option_pane

0xd49f,	// (0x0006137f) list_single_hwr_training_symbol_option_pane_g1

0xd4a7,	// (0x00061387) list_single_hwr_training_symbol_option_pane_t1

0xd4b5,	// (0x00061395) bg_button_pane_cp023

0xd4be,	// (0x0006139e) bg_button_pane_cp024

0x8b67,	// (0x0005ca47) vitu2_page_scroll_pane_g1

0x8b6f,	// (0x0005ca4f) vitu2_page_scroll_pane_g2

0x0001,

0xfa5c,	// (0x0006393c) vitu2_page_scroll_pane_g

0x8b77,	// (0x0005ca57) vitu2_page_scroll_pane_t1

0xc394,	// (0x00060274) popup_char_count_window_g1

0xd4f1,	// (0x000613d1) popup_char_count_window_g2

0xd4fa,	// (0x000613da) popup_char_count_window_g3

0x0002,

0xfa61,	// (0x00063941) popup_char_count_window_g

0xd503,	// (0x000613e3) popup_char_count_window_t1

0xb7b0,	// (0x0005f690) main_vded2_pane

0xc834,	// (0x00060714) aid_size_cell_imed_line

0xc83e,	// (0x0006071e) grid_imed_line_width_pane

0xeef9,	// (0x00062dd9) vid4_indicators_pane_g4

0xd511,	// (0x000613f1) cell_imed_line_width_pane_ParamLimits

0xd511,	// (0x000613f1) cell_imed_line_width_pane

0xd523,	// (0x00061403) cell_imed_line_width_pane_g1

0xd52c,	// (0x0006140c) cell_imed_line_width_pane_g2

0x0001,

0xfa68,	// (0x00063948) cell_imed_line_width_pane_g

0x8b86,	// (0x0005ca66) main_vded2_pane_g1_ParamLimits

0x8b86,	// (0x0005ca66) main_vded2_pane_g1

0x8b9c,	// (0x0005ca7c) main_vded2_pane_g2_ParamLimits

0x8b9c,	// (0x0005ca7c) main_vded2_pane_g2

0x0001,

0xfa6d,	// (0x0006394d) main_vded2_pane_g_ParamLimits

0xfa6d,	// (0x0006394d) main_vded2_pane_g

0x8bac,	// (0x0005ca8c) vded2_slider_pane_ParamLimits

0x8bac,	// (0x0005ca8c) vded2_slider_pane

0x8bbf,	// (0x0005ca9f) aid_size_touch_vded2_end

0x8bc7,	// (0x0005caa7) aid_size_touch_vded2_playhead

0x8bcf,	// (0x0005caaf) aid_size_touch_vded2_start

0x8bd7,	// (0x0005cab7) vded2_slider_bg_pane

0x8be0,	// (0x0005cac0) vded2_slider_pane_g1

0x8be9,	// (0x0005cac9) vded2_slider_pane_g2

0x8bf1,	// (0x0005cad1) vded2_slider_pane_g3

0x0002,

0xfa72,	// (0x00063952) vded2_slider_pane_g

0x8bfa,	// (0x0005cada) vded2_slider_bg_pane_g1

0x8c03,	// (0x0005cae3) vded2_slider_bg_pane_g2

0x8c0c,	// (0x0005caec) vded2_slider_bg_pane_g3

0x0002,

0xfa79,	// (0x00063959) vded2_slider_bg_pane_g

0x55fd,	// (0x000594dd) aid_postcard_touch_down_pane_ParamLimits

0x55fd,	// (0x000594dd) aid_postcard_touch_down_pane

0x560f,	// (0x000594ef) aid_postcard_touch_up_pane_ParamLimits

0x560f,	// (0x000594ef) aid_postcard_touch_up_pane

0xb7b0,	// (0x0005f690) main_blid2_pane

0xc2ae,	// (0x0006018e) popup_blid2_search_window

0xb747,	// (0x0005f627) blid2_gps_pane

0xb747,	// (0x0005f627) blid2_navig_pane

0xb747,	// (0x0005f627) blid2_search_pane

0xb747,	// (0x0005f627) blid2_tripm_pane

0x8c15,	// (0x0005caf5) blid2_search_pane_g1_ParamLimits

0x8c15,	// (0x0005caf5) blid2_search_pane_g1

0x8c29,	// (0x0005cb09) blid2_search_pane_t1_ParamLimits

0x8c29,	// (0x0005cb09) blid2_search_pane_t1

0x8c3b,	// (0x0005cb1b) aid_size_cell_blid2_gps_ParamLimits

0x8c3b,	// (0x0005cb1b) aid_size_cell_blid2_gps

0x8c53,	// (0x0005cb33) blid2_gps_pane_g1_ParamLimits

0x8c53,	// (0x0005cb33) blid2_gps_pane_g1

0x8c67,	// (0x0005cb47) grid_blid2_satellite_pane_ParamLimits

0x8c67,	// (0x0005cb47) grid_blid2_satellite_pane

0x8c7b,	// (0x0005cb5b) blid2_navig_pane_g1_ParamLimits

0x8c7b,	// (0x0005cb5b) blid2_navig_pane_g1

0x8c87,	// (0x0005cb67) blid2_navig_pane_t1_ParamLimits

0x8c87,	// (0x0005cb67) blid2_navig_pane_t1

0x8ca0,	// (0x0005cb80) blid2_navig_pane_t2_ParamLimits

0x8ca0,	// (0x0005cb80) blid2_navig_pane_t2

0x0001,

0xfa80,	// (0x00063960) blid2_navig_pane_t_ParamLimits

0xfa80,	// (0x00063960) blid2_navig_pane_t

0x8cb9,	// (0x0005cb99) blid2_navig_ring_pane_ParamLimits

0x8cb9,	// (0x0005cb99) blid2_navig_ring_pane

0x8cce,	// (0x0005cbae) blid2_speed_pane_ParamLimits

0x8cce,	// (0x0005cbae) blid2_speed_pane

0x8cda,	// (0x0005cbba) blid2_tripm_pane_g1_ParamLimits

0x8cda,	// (0x0005cbba) blid2_tripm_pane_g1

0x8cef,	// (0x0005cbcf) blid2_tripm_pane_g2_ParamLimits

0x8cef,	// (0x0005cbcf) blid2_tripm_pane_g2

0x8d03,	// (0x0005cbe3) blid2_tripm_pane_g3_ParamLimits

0x8d03,	// (0x0005cbe3) blid2_tripm_pane_g3

0x8d17,	// (0x0005cbf7) blid2_tripm_pane_g4_ParamLimits

0x8d17,	// (0x0005cbf7) blid2_tripm_pane_g4

0x8d2b,	// (0x0005cc0b) blid2_tripm_pane_g5_ParamLimits

0x8d2b,	// (0x0005cc0b) blid2_tripm_pane_g5

0x0005,

0xfa85,	// (0x00063965) blid2_tripm_pane_g_ParamLimits

0xfa85,	// (0x00063965) blid2_tripm_pane_g

0x8d4d,	// (0x0005cc2d) blid2_tripm_pane_t1_ParamLimits

0x8d4d,	// (0x0005cc2d) blid2_tripm_pane_t1

0x8d64,	// (0x0005cc44) blid2_tripm_pane_t2_ParamLimits

0x8d64,	// (0x0005cc44) blid2_tripm_pane_t2

0x8d7b,	// (0x0005cc5b) blid2_tripm_pane_t3_ParamLimits

0x8d7b,	// (0x0005cc5b) blid2_tripm_pane_t3

0x0003,

0xfa92,	// (0x00063972) blid2_tripm_pane_t_ParamLimits

0xfa92,	// (0x00063972) blid2_tripm_pane_t

0x8dbe,	// (0x0005cc9e) cell_blid2_satellite_pane_ParamLimits

0x8dbe,	// (0x0005cc9e) cell_blid2_satellite_pane

0x8dd6,	// (0x0005ccb6) cell_blid2_satellite_pane_g1

0xd534,	// (0x00061414) cell_blid2_satellite_pane_t1

0x061b,	// (0x000544fb) blid2_speed_pane_g1

0xd542,	// (0x00061422) blid2_speed_pane_t1

0xd550,	// (0x00061430) blid2_speed_pane_t2

0x0001,

0xfa9b,	// (0x0006397b) blid2_speed_pane_t

0x061b,	// (0x000544fb) blid2_navig_ring_pane_g1

0x8ddf,	// (0x0005ccbf) blid2_navig_ring_pane_g2

0x8de7,	// (0x0005ccc7) blid2_navig_ring_pane_g3

0x8def,	// (0x0005cccf) blid2_navig_ring_pane_g4

0x8df7,	// (0x0005ccd7) blid2_navig_ring_pane_g5

0x0004,

0xfaa0,	// (0x00063980) blid2_navig_ring_pane_g

0xb747,	// (0x0005f627) bg_popup_window_pane_cp011

0xd55e,	// (0x0006143e) popup_blid2_search_window_g1

0xd566,	// (0x00061446) popup_blid2_search_window_t1

0xd574,	// (0x00061454) popup_blid2_search_window_t2

0x0001,

0xfaab,	// (0x0006398b) popup_blid2_search_window_t

0x0728,	// (0x00054608) main_browser_pane_g1

0xbf46,	// (0x0005fe26) main_browser_pane_ParamLimits

0xb7a2,	// (0x0005f682) bg_button_pane_cp011_ParamLimits

0x7e6b,	// (0x0005bd4b) cell_vitu2_function_pane_g1_ParamLimits

0x22ef,	// (0x000561cf) bg_popup_sub_pane_cp22_ParamLimits

0x86e8,	// (0x0005c5c8) input_focus_pane_cp08_ParamLimits

0x8703,	// (0x0005c5e3) popup_vitu2_query_button_pane_ParamLimits

0x8703,	// (0x0005c5e3) popup_vitu2_query_button_pane

0x8712,	// (0x0005c5f2) popup_vitu2_query_input_button_pane

0xd185,	// (0x00061065) popup_vitu2_query_window_g1_ParamLimits

0x871a,	// (0x0005c5fa) popup_vitu2_query_window_g2_ParamLimits

0xf9ac,	// (0x0006388c) popup_vitu2_query_window_g_ParamLimits

0xb747,	// (0x0005f627) bg_button_pane_cp026

0x8dff,	// (0x0005ccdf) popup_vitu2_query_input_button_pane_g1

0xb747,	// (0x0005f627) bg_button_pane_cp025

0xd582,	// (0x00061462) popup_vitu2_query_button_pane_t1

0x6839,	// (0x0005a719) main_mp3_pane_t6

0x6847,	// (0x0005a727) popup_slider_window_cp01

0xee7e,	// (0x00062d5e) cam4_battery_pane

0xee7e,	// (0x00062d5e) cam4_battery_pane_cp02

0xee7e,	// (0x00062d5e) cam4_battery_pane_cp01

0xee7e,	// (0x00062d5e) cam4_battery_pane_cp03

0xc382,	// (0x00060262) cam4_battery_pane_g1

0x061b,	// (0x000544fb) cam4_battery_pane_g2

0x0001,

0xfab0,	// (0x00063990) cam4_battery_pane_g

0x6654,	// (0x0005a534) popup_blid_sat_info2_window_t11

0x526b,	// (0x0005914b) aid_size_touch_mv_arrow_left_ParamLimits

0x0e50,	// (0x00054d30) aid_size_touch_mv_arrow_right_ParamLimits

0x0ea9,	// (0x00054d89) navi_pane_g1_ParamLimits

0x0eb5,	// (0x00054d95) navi_pane_g2_ParamLimits

0x528f,	// (0x0005916f) navi_pane_g3_ParamLimits

0xf365,	// (0x00063245) navi_pane_g_ParamLimits

0x52ac,	// (0x0005918c) navi_pane_mv_t1_ParamLimits

0x733b,	// (0x0005b21b) grid_imed_effect_pane_ParamLimits

0x4138,	// (0x00058018) aid_placing_vt_slider_lsc

0x066a,	// (0x0005454a) aid_placing_vt_slider_prt

0x106c,	// (0x00054f4c) bg_tb_trans_pane_cp01_ParamLimits

0xc4ac,	// (0x0006038c) popup_image_details_window_g1_ParamLimits

0xc4bf,	// (0x0006039f) popup_image_details_window_g2_ParamLimits

0xc4d4,	// (0x000603b4) popup_image_details_window_g3_ParamLimits

0xc4d4,	// (0x000603b4) popup_image_details_window_g3

0xf6a4,	// (0x00063584) popup_image_details_window_g_ParamLimits

0xc4e8,	// (0x000603c8) popup_image_details_window_t1_ParamLimits

0xc4fa,	// (0x000603da) popup_image_details_window_t2_ParamLimits

0xc513,	// (0x000603f3) popup_image_details_window_t3_ParamLimits

0xc527,	// (0x00060407) popup_image_details_window_t4_ParamLimits

0xc542,	// (0x00060422) popup_image_details_window_t5_ParamLimits

0xf6ab,	// (0x0006358b) popup_image_details_window_t_ParamLimits

0x8a5e,	// (0x0005c93e) cl_header_name_pane_ParamLimits

0x8a5e,	// (0x0005c93e) cl_header_name_pane

0x8e07,	// (0x0005cce7) cl_header_name_pane_t1_ParamLimits

0x8e07,	// (0x0005cce7) cl_header_name_pane_t1

0x8e28,	// (0x0005cd08) cl_header_name_pane_t2_ParamLimits

0x8e28,	// (0x0005cd08) cl_header_name_pane_t2

0x8e6a,	// (0x0005cd4a) cl_header_name_pane_t3_ParamLimits

0x8e6a,	// (0x0005cd4a) cl_header_name_pane_t3

0x0002,

0xfab5,	// (0x00063995) cl_header_name_pane_t_ParamLimits

0xfab5,	// (0x00063995) cl_header_name_pane_t

0x0f42,	// (0x00054e22) navi_pane_mv_g2_ParamLimits

0xceb6,	// (0x00060d96) field_vitu2_entry_pane_g1_ParamLimits

0xcec2,	// (0x00060da2) field_vitu2_entry_pane_g2_ParamLimits

0x2327,	// (0x00056207) field_vitu2_entry_pane_g3_ParamLimits

0x2327,	// (0x00056207) field_vitu2_entry_pane_g3

0xf8ab,	// (0x0006378b) field_vitu2_entry_pane_g_ParamLimits

0x7de7,	// (0x0005bcc7) cell_vitu2_itu_pane_g1_ParamLimits

0x7dff,	// (0x0005bcdf) cell_vitu2_itu_pane_g2_ParamLimits

0x7dff,	// (0x0005bcdf) cell_vitu2_itu_pane_g2

0x0001,

0xf8b7,	// (0x00063797) cell_vitu2_itu_pane_g_ParamLimits

0xf8b7,	// (0x00063797) cell_vitu2_itu_pane_g

0xb7a2,	// (0x0005f682) bg_vkb2_func_pane_cp05_ParamLimits

0xb7a2,	// (0x0005f682) bg_vkb2_func_pane_cp05

0xb7a2,	// (0x0005f682) bg_vkb2_func_pane_cp03

0xb7a2,	// (0x0005f682) bg_vkb2_func_pane_cp04

0xb7a2,	// (0x0005f682) bg_vkb2_func_pane_cp10_ParamLimits

0xb7a2,	// (0x0005f682) bg_vkb2_func_pane_cp10

0x8a02,	// (0x0005c8e2) bg_vkb2_func_pane_cp08

0x89db,	// (0x0005c8bb) bg_vkb2_func_pane_cp06

0x89e7,	// (0x0005c8c7) bg_vkb2_func_pane_cp07

0xd4c7,	// (0x000613a7) bg_vkb2_func_pane_cp11_ParamLimits

0xd4c7,	// (0x000613a7) bg_vkb2_func_pane_cp11

0xd4dc,	// (0x000613bc) bg_vkb2_func_pane_cp12_ParamLimits

0xd4dc,	// (0x000613bc) bg_vkb2_func_pane_cp12

0xb747,	// (0x0005f627) bg_vkb2_func_pane_cp09

0xcefd,	// (0x00060ddd) bg_vkb2_func_pane_g1

0x0839,	// (0x00054719) bg_vkb2_func_pane_g2

0xcf05,	// (0x00060de5) bg_vkb2_func_pane_g3

0xcf0d,	// (0x00060ded) bg_vkb2_func_pane_g4

0xd13d,	// (0x0006101d) bg_vkb2_func_pane_g5

0xcf25,	// (0x00060e05) bg_vkb2_func_pane_g6

0xcf2d,	// (0x00060e0d) bg_vkb2_func_pane_g7

0xcf1d,	// (0x00060dfd) bg_vkb2_func_pane_g8

0x0819,	// (0x000546f9) bg_vkb2_func_pane_g9

0x0008,

0xfabc,	// (0x0006399c) bg_vkb2_func_pane_g

0x8d3d,	// (0x0005cc1d) blid2_tripm_pane_g6_ParamLimits

0x8d3d,	// (0x0005cc1d) blid2_tripm_pane_g6

0xcd98,	// (0x00060c78) mp4_progress_pane_g1

0x8dac,	// (0x0005cc8c) blid2_tripm_values_pane_ParamLimits

0x8dac,	// (0x0005cc8c) blid2_tripm_values_pane

0x8e9b,	// (0x0005cd7b) blid2_tripm_values_pane_t1

0x8ea9,	// (0x0005cd89) blid2_tripm_values_pane_t2

0x8eb7,	// (0x0005cd97) blid2_tripm_values_pane_t3

0x8ec5,	// (0x0005cda5) blid2_tripm_values_pane_t4

0x8ed3,	// (0x0005cdb3) blid2_tripm_values_pane_t5

0x8ee1,	// (0x0005cdc1) blid2_tripm_values_pane_t6

0x8eef,	// (0x0005cdcf) blid2_tripm_values_pane_t7

0x8efd,	// (0x0005cddd) blid2_tripm_values_pane_t8

0x8f0b,	// (0x0005cdeb) blid2_tripm_values_pane_t9

0x0008,

0xfacf,	// (0x000639af) blid2_tripm_values_pane_t

0x4172,	// (0x00058052) call_video_pane_t1_ParamLimits

0x418c,	// (0x0005806c) call_video_pane_t2_ParamLimits

0xf1fc,	// (0x000630dc) call_video_pane_t_ParamLimits

0x5509,	// (0x000593e9) msg_header_pane_g1_ParamLimits

0x1121,	// (0x00055001) msg_header_pane_g2_ParamLimits

0x1121,	// (0x00055001) msg_header_pane_g2

0x0001,

0xf408,	// (0x000632e8) msg_header_pane_g_ParamLimits

0xf408,	// (0x000632e8) msg_header_pane_g

0xbf46,	// (0x0005fe26) main_clock2_pane_ParamLimits

0x7052,	// (0x0005af32) grid_clock2_toolbar_pane_ParamLimits

0x7052,	// (0x0005af32) grid_clock2_toolbar_pane

0x7052,	// (0x0005af32) listscroll_clock2_pane_ParamLimits

0x7052,	// (0x0005af32) listscroll_clock2_pane

0x7135,	// (0x0005b015) main_clock2_pane_t3_ParamLimits

0x7135,	// (0x0005b015) main_clock2_pane_t3

0x7157,	// (0x0005b037) main_clock2_pane_t4_ParamLimits

0x7157,	// (0x0005b037) main_clock2_pane_t4

0xd590,	// (0x00061470) cell_clock2_toolbar_pane

0xd598,	// (0x00061478) cell_clock2_toolbar_pane_cp01

0xd598,	// (0x00061478) cell_clock2_toolbar_pane_cp02

0xd5a0,	// (0x00061480) cell_clock2_toolbar_pane_cp03

0xd5a8,	// (0x00061488) list_clock2_pane

0xd5b0,	// (0x00061490) scroll_pane_cp10

0xd5b8,	// (0x00061498) list_single_clock2_pane_ParamLimits

0xd5b8,	// (0x00061498) list_single_clock2_pane

0x059a,	// (0x0005447a) list_highlight_pane_cp08

0xd5c5,	// (0x000614a5) list_single_clock2_pane_t1

0xd5d3,	// (0x000614b3) list_single_clock2_pane_t2

0x0001,

0xfae2,	// (0x000639c2) list_single_clock2_pane_t

0xb747,	// (0x0005f627) bg_button_pane_cp10

0xd5e1,	// (0x000614c1) cell_clock2_toolbar_pane_g1

0x5591,	// (0x00059471) aid_main_viewer_pane_g1_ParamLimits

0x5591,	// (0x00059471) aid_main_viewer_pane_g1

0x559d,	// (0x0005947d) aid_main_viewer_pane_g2_ParamLimits

0x559d,	// (0x0005947d) aid_main_viewer_pane_g2

0x55a9,	// (0x00059489) aid_main_viewer_pane_g3_ParamLimits

0x55a9,	// (0x00059489) aid_main_viewer_pane_g3

0x55b8,	// (0x00059498) aid_main_viewer_pane_g4_ParamLimits

0x55b8,	// (0x00059498) aid_main_viewer_pane_g4

0x0003,

0xf419,	// (0x000632f9) aid_main_viewer_pane_g_ParamLimits

0xf419,	// (0x000632f9) aid_main_viewer_pane_g

0xb7a2,	// (0x0005f682) main_calc_pane_ParamLimits

0x5e01,	// (0x00059ce1) main_dialer2_pane_ParamLimits

0xb7b0,	// (0x0005f690) main_cam6_pane

0xb7b0,	// (0x0005f690) main_vid6_pane

0x705e,	// (0x0005af3e) listscroll_gen_pane_cp06_ParamLimits

0x705e,	// (0x0005af3e) listscroll_gen_pane_cp06

0x7178,	// (0x0005b058) main_clock2_pane_t5_ParamLimits

0x7178,	// (0x0005b058) main_clock2_pane_t5

0x71d0,	// (0x0005b0b0) aid_call2_pane_cp10_ParamLimits

0x71e2,	// (0x0005b0c2) aid_call_pane_cp10_ParamLimits

0x0e44,	// (0x00054d24) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0e44,	// (0x00054d24) popup_clock_analogue_window_cp10_g2_ParamLimits

0x71f4,	// (0x0005b0d4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x71f4,	// (0x0005b0d4) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0e44,	// (0x00054d24) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf760,	// (0x00063640) popup_clock_analogue_window_cp10_g_ParamLimits

0x7206,	// (0x0005b0e6) popup_clock_analogue_window_cp10_t1_ParamLimits

0xcdf8,	// (0x00060cd8) cell_dialer2_keypad_pane_g2_ParamLimits

0xcdf8,	// (0x00060cd8) cell_dialer2_keypad_pane_g2

0x0001,

0xf84a,	// (0x0006372a) cell_dialer2_keypad_pane_g_ParamLimits

0xf84a,	// (0x0006372a) cell_dialer2_keypad_pane_g

0x76ca,	// (0x0005b5aa) cell_dialer2_keypad_pane_t1

0x8127,	// (0x0005c007) main_cset_text2_pane_ParamLimits

0x8127,	// (0x0005c007) main_cset_text2_pane

0xd35f,	// (0x0006123f) area_vitu2_query_pane_g1_ParamLimits

0x8980,	// (0x0005c860) area_vitu2_query_pane_g2_ParamLimits

0xf9ff,	// (0x000638df) area_vitu2_query_pane_g_ParamLimits

0xd3e3,	// (0x000612c3) area_vitu2_query_pane_t7_ParamLimits

0xd3e3,	// (0x000612c3) area_vitu2_query_pane_t7

0x89db,	// (0x0005c8bb) bg_button_pane_cp018_ParamLimits

0x89e7,	// (0x0005c8c7) bg_button_pane_cp021_ParamLimits

0x89f3,	// (0x0005c8d3) bg_button_pane_cp022_ParamLimits

0x8a02,	// (0x0005c8e2) bg_vkb2_func_pane_cp08_ParamLimits

0x89db,	// (0x0005c8bb) bg_vkb2_func_pane_cp06_ParamLimits

0x89e7,	// (0x0005c8c7) bg_vkb2_func_pane_cp07_ParamLimits

0x8a12,	// (0x0005c8f2) input_focus_pane_cp09_ParamLimits

0xf03b,	// (0x00062f1b) cam6_autofocus_pane_ParamLimits

0xf03b,	// (0x00062f1b) cam6_autofocus_pane

0x8f19,	// (0x0005cdf9) cam6_image_uncrop_pane_ParamLimits

0x8f19,	// (0x0005cdf9) cam6_image_uncrop_pane

0x8f27,	// (0x0005ce07) cam6_indi_pane_ParamLimits

0x8f27,	// (0x0005ce07) cam6_indi_pane

0x8f3d,	// (0x0005ce1d) cam6_mode_pane_ParamLimits

0x8f3d,	// (0x0005ce1d) cam6_mode_pane

0x8f4f,	// (0x0005ce2f) cam6_timer_pane_ParamLimits

0x8f4f,	// (0x0005ce2f) cam6_timer_pane

0x8f5b,	// (0x0005ce3b) cam6_zoom_pane_ParamLimits

0x8f5b,	// (0x0005ce3b) cam6_zoom_pane

0x8f68,	// (0x0005ce48) cam6_mode_pane_g1_ParamLimits

0x8f68,	// (0x0005ce48) cam6_mode_pane_g1

0x8f78,	// (0x0005ce58) cam6_mode_pane_g2_ParamLimits

0x8f78,	// (0x0005ce58) cam6_mode_pane_g2

0x8f88,	// (0x0005ce68) cam6_mode_pane_g3_ParamLimits

0x8f88,	// (0x0005ce68) cam6_mode_pane_g3

0x8f98,	// (0x0005ce78) cam6_mode_pane_g4_ParamLimits

0x8f98,	// (0x0005ce78) cam6_mode_pane_g4

0x0003,

0xfae7,	// (0x000639c7) cam6_mode_pane_g_ParamLimits

0xfae7,	// (0x000639c7) cam6_mode_pane_g

0x8fa8,	// (0x0005ce88) bg_tb_trans_pane_cp08_ParamLimits

0x8fa8,	// (0x0005ce88) bg_tb_trans_pane_cp08

0xd5e9,	// (0x000614c9) cam6_battery_pane_ParamLimits

0xd5e9,	// (0x000614c9) cam6_battery_pane

0xd5ff,	// (0x000614df) cam6_indi_pane_g1_ParamLimits

0xd5ff,	// (0x000614df) cam6_indi_pane_g1

0xd611,	// (0x000614f1) cam6_indi_pane_g2_ParamLimits

0xd611,	// (0x000614f1) cam6_indi_pane_g2

0xd623,	// (0x00061503) cam6_indi_pane_g3_ParamLimits

0xd623,	// (0x00061503) cam6_indi_pane_g3

0x0002,

0xfaf0,	// (0x000639d0) cam6_indi_pane_g_ParamLimits

0xfaf0,	// (0x000639d0) cam6_indi_pane_g

0xd635,	// (0x00061515) cam6_indi_pane_t1_ParamLimits

0xd635,	// (0x00061515) cam6_indi_pane_t1

0x7be2,	// (0x0005bac2) cam6_autofocus_pane_g1

0x7bda,	// (0x0005baba) cam6_autofocus_pane_g2

0x7bf2,	// (0x0005bad2) cam6_autofocus_pane_g3

0x7bea,	// (0x0005baca) cam6_autofocus_pane_g4

0x0003,

0xfaf7,	// (0x000639d7) cam6_autofocus_pane_g

0xd65b,	// (0x0006153b) cam6_timer_pane_g1

0xd663,	// (0x00061543) cam6_timer_pane_t1

0xd671,	// (0x00061551) cam6_zoom_cont_pane

0xd679,	// (0x00061559) cam6_zoom_pane_g1

0xd682,	// (0x00061562) cam6_zoom_pane_g2

0x8fb6,	// (0x0005ce96) cam6_zoom_pane_g3

0x0002,

0xfb00,	// (0x000639e0) cam6_zoom_pane_g

0x061b,	// (0x000544fb) cam6_battery_pane_g1

0x061b,	// (0x000544fb) cam6_battery_pane_g2

0x0001,

0xf3c9,	// (0x000632a9) cam6_battery_pane_g

0xd679,	// (0x00061559) cam6_zoom_cont_pane_g1

0xd682,	// (0x00061562) cam6_zoom_cont_pane_g2

0xd68b,	// (0x0006156b) cam6_zoom_cont_pane_g3

0x0002,

0xfb07,	// (0x000639e7) cam6_zoom_cont_pane_g

0x8fd4,	// (0x0005ceb4) cam6_mode_pane_cp_ParamLimits

0x8fd4,	// (0x0005ceb4) cam6_mode_pane_cp

0x8fe6,	// (0x0005cec6) cam6_zoom_pane_cp_ParamLimits

0x8fe6,	// (0x0005cec6) cam6_zoom_pane_cp

0x8ff2,	// (0x0005ced2) vid6_image_uncrop_cif_pane_ParamLimits

0x8ff2,	// (0x0005ced2) vid6_image_uncrop_cif_pane

0x9000,	// (0x0005cee0) vid6_image_uncrop_nhd_pane_ParamLimits

0x9000,	// (0x0005cee0) vid6_image_uncrop_nhd_pane

0x900d,	// (0x0005ceed) vid6_image_uncrop_vga_pane_ParamLimits

0x900d,	// (0x0005ceed) vid6_image_uncrop_vga_pane

0x901a,	// (0x0005cefa) vid6_image_uncrop_wvga_pane_ParamLimits

0x901a,	// (0x0005cefa) vid6_image_uncrop_wvga_pane

0x9027,	// (0x0005cf07) vid6_indi_pane_ParamLimits

0x9027,	// (0x0005cf07) vid6_indi_pane

0x8fa8,	// (0x0005ce88) bg_tb_trans_pane_cp09_ParamLimits

0x8fa8,	// (0x0005ce88) bg_tb_trans_pane_cp09

0xd69f,	// (0x0006157f) cam6_battery_pane_cp_ParamLimits

0xd69f,	// (0x0006157f) cam6_battery_pane_cp

0xd6ab,	// (0x0006158b) vid6_indi_pane_g1_ParamLimits

0xd6ab,	// (0x0006158b) vid6_indi_pane_g1

0xd6bd,	// (0x0006159d) vid6_indi_pane_g2_ParamLimits

0xd6bd,	// (0x0006159d) vid6_indi_pane_g2

0xd6cf,	// (0x000615af) vid6_indi_pane_g3_ParamLimits

0xd6cf,	// (0x000615af) vid6_indi_pane_g3

0xd6e4,	// (0x000615c4) vid6_indi_pane_g4_ParamLimits

0xd6e4,	// (0x000615c4) vid6_indi_pane_g4

0xd6f9,	// (0x000615d9) vid6_indi_pane_g5_ParamLimits

0xd6f9,	// (0x000615d9) vid6_indi_pane_g5

0x0004,

0xfb0e,	// (0x000639ee) vid6_indi_pane_g_ParamLimits

0xfb0e,	// (0x000639ee) vid6_indi_pane_g

0xd713,	// (0x000615f3) vid6_indi_pane_t1_ParamLimits

0xd713,	// (0x000615f3) vid6_indi_pane_t1

0xd729,	// (0x00061609) vid6_indi_pane_t2_ParamLimits

0xd729,	// (0x00061609) vid6_indi_pane_t2

0xd751,	// (0x00061631) vid6_indi_pane_t3_ParamLimits

0xd751,	// (0x00061631) vid6_indi_pane_t3

0xd779,	// (0x00061659) vid6_indi_pane_t4_ParamLimits

0xd779,	// (0x00061659) vid6_indi_pane_t4

0x0003,

0xfb19,	// (0x000639f9) vid6_indi_pane_t_ParamLimits

0xfb19,	// (0x000639f9) vid6_indi_pane_t

0xd79d,	// (0x0006167d) wait_bar_pane_cp08

0x903e,	// (0x0005cf1e) main_cset_text2_pane_t1_ParamLimits

0x903e,	// (0x0005cf1e) main_cset_text2_pane_t1

0x8fbf,	// (0x0005ce9f) listscroll_gen_pane_cp06_t1_ParamLimits

0x8fbf,	// (0x0005ce9f) listscroll_gen_pane_cp06_t1

0xb7b0,	// (0x0005f690) main_cam6_set_pane

0xee70,	// (0x00062d50) bg_tb_trans_pane_cp06_ParamLimits

0xee86,	// (0x00062d66) cam4_indicators_pane_g1_ParamLimits

0xee96,	// (0x00062d76) cam4_indicators_pane_g2_ParamLimits

0xf887,	// (0x00063767) cam4_indicators_pane_g_ParamLimits

0xeeb6,	// (0x00062d96) cam4_indicators_pane_t1_ParamLimits

0xb7a2,	// (0x0005f682) bg_tb_trans_pane_cp07_ParamLimits

0xee86,	// (0x00062d66) vid4_indicators_pane_g1_ParamLimits

0xeed8,	// (0x00062db8) vid4_indicators_pane_g2_ParamLimits

0xeee8,	// (0x00062dc8) vid4_indicators_pane_g3_ParamLimits

0xeef9,	// (0x00062dd9) vid4_indicators_pane_g4_ParamLimits

0xf899,	// (0x00063779) vid4_indicators_pane_g_ParamLimits

0xef15,	// (0x00062df5) vid4_indicators_pane_t1_ParamLimits

0xefa6,	// (0x00062e86) vid4_progress_pane_g1_ParamLimits

0xefb5,	// (0x00062e95) vid4_progress_pane_g2_ParamLimits

0xefc4,	// (0x00062ea4) vid4_progress_pane_g3_ParamLimits

0xefd3,	// (0x00062eb3) vid4_progress_pane_g4_ParamLimits

0xfa4a,	// (0x0006392a) vid4_progress_pane_g_ParamLimits

0xefeb,	// (0x00062ecb) vid4_progress_pane_t1_ParamLimits

0xf001,	// (0x00062ee1) vid4_progress_pane_t2_ParamLimits

0xf016,	// (0x00062ef6) vid4_progress_pane_t3_ParamLimits

0xfa55,	// (0x00063935) vid4_progress_pane_t_ParamLimits

0xf02b,	// (0x00062f0b) wait_bar_pane_cp07_ParamLimits

0x9059,	// (0x0005cf39) main_cam6_set_pane_g2_ParamLimits

0x9059,	// (0x0005cf39) main_cam6_set_pane_g2

0x907b,	// (0x0005cf5b) main_cset6_listscroll_pane_ParamLimits

0x907b,	// (0x0005cf5b) main_cset6_listscroll_pane

0x9095,	// (0x0005cf75) main_cset6_slider_pane_ParamLimits

0x9095,	// (0x0005cf75) main_cset6_slider_pane

0x90ab,	// (0x0005cf8b) main_cset6_text2_pane_ParamLimits

0x90ab,	// (0x0005cf8b) main_cset6_text2_pane

0xd7ad,	// (0x0006168d) main_cset6_text_pane

0xd019,	// (0x00060ef9) main_cset_list_pane_copy1_ParamLimits

0xd019,	// (0x00060ef9) main_cset_list_pane_copy1

0xd029,	// (0x00060f09) scroll_pane_cp028_copy1

0x90b9,	// (0x0005cf99) cset_list_set_pane_copy1

0x90cb,	// (0x0005cfab) aid_position_infowindow_above_copy1

0x90d3,	// (0x0005cfb3) aid_position_infowindow_below_copy1

0x90db,	// (0x0005cfbb) cset_list_set_pane_g1_copy1

0x90e3,	// (0x0005cfc3) cset_list_set_pane_g3_copy1_ParamLimits

0x90e3,	// (0x0005cfc3) cset_list_set_pane_g3_copy1

0x90f2,	// (0x0005cfd2) cset_list_set_pane_t1_copy1_ParamLimits

0x90f2,	// (0x0005cfd2) cset_list_set_pane_t1_copy1

0x106c,	// (0x00054f4c) list_highlight_pane_cp021_copy1_ParamLimits

0x106c,	// (0x00054f4c) list_highlight_pane_cp021_copy1

0xd7b5,	// (0x00061695) cset6_slider_pane_ParamLimits

0xd7b5,	// (0x00061695) cset6_slider_pane

0xd7e1,	// (0x000616c1) main_cset6_slider_pane_g1_ParamLimits

0xd7e1,	// (0x000616c1) main_cset6_slider_pane_g1

0x9107,	// (0x0005cfe7) main_cset6_slider_pane_g2_ParamLimits

0x9107,	// (0x0005cfe7) main_cset6_slider_pane_g2

0xd03e,	// (0x00060f1e) main_cset6_slider_pane_g3_ParamLimits

0xd03e,	// (0x00060f1e) main_cset6_slider_pane_g3

0x81e5,	// (0x0005c0c5) main_cset6_slider_pane_g4_ParamLimits

0x81e5,	// (0x0005c0c5) main_cset6_slider_pane_g4

0x822d,	// (0x0005c10d) main_cset6_slider_pane_g5_ParamLimits

0x822d,	// (0x0005c10d) main_cset6_slider_pane_g5

0xd03e,	// (0x00060f1e) main_cset6_slider_pane_g7_ParamLimits

0xd03e,	// (0x00060f1e) main_cset6_slider_pane_g7

0xd04a,	// (0x00060f2a) main_cset6_slider_pane_g8_ParamLimits

0xd04a,	// (0x00060f2a) main_cset6_slider_pane_g8

0x81cd,	// (0x0005c0ad) main_cset6_slider_pane_g9_ParamLimits

0x81cd,	// (0x0005c0ad) main_cset6_slider_pane_g9

0x81d9,	// (0x0005c0b9) main_cset6_slider_pane_g10_ParamLimits

0x81d9,	// (0x0005c0b9) main_cset6_slider_pane_g10

0x81e5,	// (0x0005c0c5) main_cset6_slider_pane_g11_ParamLimits

0x81e5,	// (0x0005c0c5) main_cset6_slider_pane_g11

0x81f1,	// (0x0005c0d1) main_cset6_slider_pane_g12_ParamLimits

0x81f1,	// (0x0005c0d1) main_cset6_slider_pane_g12

0x81fd,	// (0x0005c0dd) main_cset6_slider_pane_g13_ParamLimits

0x81fd,	// (0x0005c0dd) main_cset6_slider_pane_g13

0x8209,	// (0x0005c0e9) main_cset6_slider_pane_g14_ParamLimits

0x8209,	// (0x0005c0e9) main_cset6_slider_pane_g14

0x912f,	// (0x0005d00f) main_cset6_slider_pane_g15_ParamLimits

0x912f,	// (0x0005d00f) main_cset6_slider_pane_g15

0x822d,	// (0x0005c10d) main_cset6_slider_pane_g16_ParamLimits

0x822d,	// (0x0005c10d) main_cset6_slider_pane_g16

0x8239,	// (0x0005c119) main_cset6_slider_pane_g17_ParamLimits

0x8239,	// (0x0005c119) main_cset6_slider_pane_g17

0x0011,

0xfb22,	// (0x00063a02) main_cset6_slider_pane_g_ParamLimits

0xfb22,	// (0x00063a02) main_cset6_slider_pane_g

0xd809,	// (0x000616e9) main_cset6_slider_pane_t1_ParamLimits

0xd809,	// (0x000616e9) main_cset6_slider_pane_t1

0xd84a,	// (0x0006172a) main_cset6_slider_pane_t2_ParamLimits

0xd84a,	// (0x0006172a) main_cset6_slider_pane_t2

0xd875,	// (0x00061755) main_cset6_slider_pane_t3_ParamLimits

0xd875,	// (0x00061755) main_cset6_slider_pane_t3

0x9147,	// (0x0005d027) main_cset6_slider_pane_t4_ParamLimits

0x9147,	// (0x0005d027) main_cset6_slider_pane_t4

0x9172,	// (0x0005d052) main_cset6_slider_pane_t5_ParamLimits

0x9172,	// (0x0005d052) main_cset6_slider_pane_t5

0xd8a0,	// (0x00061780) main_cset6_slider_pane_t7_ParamLimits

0xd8a0,	// (0x00061780) main_cset6_slider_pane_t7

0x919d,	// (0x0005d07d) main_cset6_slider_pane_t8_ParamLimits

0x919d,	// (0x0005d07d) main_cset6_slider_pane_t8

0x91c1,	// (0x0005d0a1) main_cset6_slider_pane_t9_ParamLimits

0x91c1,	// (0x0005d0a1) main_cset6_slider_pane_t9

0x91e5,	// (0x0005d0c5) main_cset6_slider_pane_t10_ParamLimits

0x91e5,	// (0x0005d0c5) main_cset6_slider_pane_t10

0x9209,	// (0x0005d0e9) main_cset6_slider_pane_t11_ParamLimits

0x9209,	// (0x0005d0e9) main_cset6_slider_pane_t11

0xd8d6,	// (0x000617b6) main_cset6_slider_pane_t14_ParamLimits

0xd8d6,	// (0x000617b6) main_cset6_slider_pane_t14

0xd90f,	// (0x000617ef) main_cset6_slider_pane_t15_ParamLimits

0xd90f,	// (0x000617ef) main_cset6_slider_pane_t15

0x000b,

0xfb47,	// (0x00063a27) main_cset6_slider_pane_t_ParamLimits

0xfb47,	// (0x00063a27) main_cset6_slider_pane_t

0xd948,	// (0x00061828) cset_slider_pane_g1_copy1

0xd951,	// (0x00061831) cset_slider_pane_g2_copy1

0xd95a,	// (0x0006183a) cset_slider_pane_g3_copy1

0xb747,	// (0x0005f627) bg_popup_sub_pane_cp011_copy1

0xd191,	// (0x00061071) main_cset_text_pane_g1_copy1

0xd199,	// (0x00061079) main_cset_text_pane_t1_copy1

0xd1a7,	// (0x00061087) main_cset_text_pane_t2_copy1

0xd1b5,	// (0x00061095) main_cset_text_pane_t3_copy1

0xd1c3,	// (0x000610a3) main_cset_text_pane_t4_copy1

0xd1d1,	// (0x000610b1) main_cset_text_pane_t5_copy1

0xd1df,	// (0x000610bf) main_cset_text_pane_t6_copy1

0xd1ed,	// (0x000610cd) main_cset_text_pane_t7_copy1

0x924a,	// (0x0005d12a) main_cset_text2_pane_t1_copy1

0xb7a2,	// (0x0005f682) main_ncimui_pane

0x600f,	// (0x00059eef) popup_query_ncimui_window_ParamLimits

0x600f,	// (0x00059eef) popup_query_ncimui_window

0xc61f,	// (0x000604ff) field_cale_ev2_pane_g4_ParamLimits

0xc61f,	// (0x000604ff) field_cale_ev2_pane_g4

0x75bc,	// (0x0005b49c) cell_video_dialer_keypad_pane_g2_ParamLimits

0x75bc,	// (0x0005b49c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf821,	// (0x00063701) cell_video_dialer_keypad_pane_g_ParamLimits

0xf821,	// (0x00063701) cell_video_dialer_keypad_pane_g

0x75d4,	// (0x0005b4b4) cell_video_dialer_keypad_pane_t1

0xb747,	// (0x0005f627) bg_popup_window_pane_cp012

0x223b,	// (0x0005611b) heading_pane_cp06

0xd9b3,	// (0x00061893) ncim_query_content_pane

0xb747,	// (0x0005f627) bg_popup_heading_pane_cp01

0xd9bb,	// (0x0006189b) ncim_heading_pane_t1

0xd9c9,	// (0x000618a9) ncim_indicator_popup_pane

0xd9db,	// (0x000618bb) ncim_query_button_pane

0xd9ef,	// (0x000618cf) ncim_query_content_pane_t1

0xda01,	// (0x000618e1) ncim_query_content_pane_t2

0x0005,

0xfb8b,	// (0x00063a6b) ncim_query_content_pane_t

0xda3b,	// (0x0006191b) ncim_query_list_pane

0xda4d,	// (0x0006192d) ncim_query_popup_pane

0xd9c9,	// (0x000618a9) ncim_indicator_popup_pane_ParamLimits

0x9389,	// (0x0005d269) ncim_query_content_pane_g1_ParamLimits

0x9389,	// (0x0005d269) ncim_query_content_pane_g1

0xd9ef,	// (0x000618cf) ncim_query_content_pane_t1_ParamLimits

0xda01,	// (0x000618e1) ncim_query_content_pane_t2_ParamLimits

0x9395,	// (0x0005d275) ncim_query_content_pane_t3_ParamLimits

0x9395,	// (0x0005d275) ncim_query_content_pane_t3

0x93bd,	// (0x0005d29d) ncim_query_content_pane_t4_ParamLimits

0x93bd,	// (0x0005d29d) ncim_query_content_pane_t4

0x93e5,	// (0x0005d2c5) ncim_query_content_pane_t5_ParamLimits

0x93e5,	// (0x0005d2c5) ncim_query_content_pane_t5

0xda13,	// (0x000618f3) ncim_query_content_pane_t6_ParamLimits

0xda13,	// (0x000618f3) ncim_query_content_pane_t6

0xfb8b,	// (0x00063a6b) ncim_query_content_pane_t_ParamLimits

0xda3b,	// (0x0006191b) ncim_query_list_pane_ParamLimits

0xda4d,	// (0x0006192d) ncim_query_popup_pane_ParamLimits

0xda61,	// (0x00061941) wait_bar_pane_cp04

0xb747,	// (0x0005f627) input_focus_pane_cp011

0xda69,	// (0x00061949) ncim_query_popup_pane_t1

0xda77,	// (0x00061957) ncim_list_query_list_pane_ParamLimits

0xda77,	// (0x00061957) ncim_list_query_list_pane

0xb747,	// (0x0005f627) bg_button_pane_cp027

0xda8a,	// (0x0006196a) ncim_query_button_pane_g1

0xb747,	// (0x0005f627) list_highlight_pane_cp012

0xda94,	// (0x00061974) ncim_list_query_list_pane_g1

0xda9c,	// (0x0006197c) ncim_list_query_list_pane_t1

0xeea6,	// (0x00062d86) cam4_indicators_pane_g3_ParamLimits

0xeea6,	// (0x00062d86) cam4_indicators_pane_g3

0xef05,	// (0x00062de5) vid4_indicators_pane_g5_ParamLimits

0xef05,	// (0x00062de5) vid4_indicators_pane_g5

0xefdf,	// (0x00062ebf) vid4_progress_pane_g5_ParamLimits

0xefdf,	// (0x00062ebf) vid4_progress_pane_g5

0x9279,	// (0x0005d159) main_ncimui_pane_g1

0x92df,	// (0x0005d1bf) ncimui_group_query_pane_ParamLimits

0x92df,	// (0x0005d1bf) ncimui_group_query_pane

0x9327,	// (0x0005d207) ncimui_list_pane_ParamLimits

0x9327,	// (0x0005d207) ncimui_list_pane

0x934c,	// (0x0005d22c) ncimui_text_pane_ParamLimits

0x934c,	// (0x0005d22c) ncimui_text_pane

0x940d,	// (0x0005d2ed) ncimui_text_pane_t1_ParamLimits

0x940d,	// (0x0005d2ed) ncimui_text_pane_t1

0xdab3,	// (0x00061993) ncimui_list_single_graphic_pane_ParamLimits

0xdab3,	// (0x00061993) ncimui_list_single_graphic_pane

0x942b,	// (0x0005d30b) ncimui_query_pane_ParamLimits

0x942b,	// (0x0005d30b) ncimui_query_pane

0xb747,	// (0x0005f627) list_highlight_pane_cp013

0xdac3,	// (0x000619a3) ncim_list_query_list_pane_t1_copy1

0xdad1,	// (0x000619b1) ncim_list_single_graphic_pane_g1

0xdad9,	// (0x000619b9) ncim_query_button_pane_cp01

0xdae5,	// (0x000619c5) ncim_query_entry_pane_ParamLimits

0xdae5,	// (0x000619c5) ncim_query_entry_pane

0xdaf8,	// (0x000619d8) ncimui_query_pane_g1

0xdb04,	// (0x000619e4) ncimui_query_pane_t1_ParamLimits

0xdb04,	// (0x000619e4) ncimui_query_pane_t1

0x106c,	// (0x00054f4c) input_focus_pane_cp012

0xdb1d,	// (0x000619fd) ncim_query_entry_pane_t1

0xbf46,	// (0x0005fe26) main_im_pane_ParamLimits

0xb7a2,	// (0x0005f682) main_mobtv_pane_ParamLimits

0xb7a2,	// (0x0005f682) main_mobtv_pane

0x81cd,	// (0x0005c0ad) main_cset6_slider_pane_g18_ParamLimits

0x81cd,	// (0x0005c0ad) main_cset6_slider_pane_g18

0x81fd,	// (0x0005c0dd) main_cset6_slider_pane_g19_ParamLimits

0x81fd,	// (0x0005c0dd) main_cset6_slider_pane_g19

0xbeca,	// (0x0005fdaa) bg_main_mobtv_pane_ParamLimits

0xbeca,	// (0x0005fdaa) bg_main_mobtv_pane

0x943b,	// (0x0005d31b) main_mobtv_info_pane

0x9444,	// (0x0005d324) main_mobtv_loading_pane_ParamLimits

0x9444,	// (0x0005d324) main_mobtv_loading_pane

0xdb2f,	// (0x00061a0f) main_mobtv_pg_channel_list_pane

0xdb39,	// (0x00061a19) main_mobtv_pg_hdr_pane

0x9451,	// (0x0005d331) main_mobtv_programe_curr_pane_ParamLimits

0x9451,	// (0x0005d331) main_mobtv_programe_curr_pane

0x945e,	// (0x0005d33e) main_mobtv_programe_next_pane_ParamLimits

0x945e,	// (0x0005d33e) main_mobtv_programe_next_pane

0xdb42,	// (0x00061a22) popup_mobtv_noti_window

0x061b,	// (0x000544fb) main_tv_pg_hdr_pane_g1

0xdb4a,	// (0x00061a2a) main_tv_pg_hdr_pane_g2

0xdb52,	// (0x00061a32) main_tv_pg_hdr_pane_g3

0xdb5a,	// (0x00061a3a) main_tv_pg_hdr_pane_g4

0xdb62,	// (0x00061a42) main_tv_pg_hdr_pane_g5

0xdb6a,	// (0x00061a4a) main_tv_pg_hdr_pane_g6

0xdb72,	// (0x00061a52) main_tv_pg_hdr_pane_g7

0xdb7a,	// (0x00061a5a) main_tv_pg_hdr_pane_g8

0xdb82,	// (0x00061a62) main_tv_pg_hdr_pane_g9

0xdb8a,	// (0x00061a6a) main_tv_pg_hdr_pane_g10

0xdb94,	// (0x00061a74) main_tv_pg_hdr_pane_g11

0x000a,

0xfb98,	// (0x00063a78) main_tv_pg_hdr_pane_g

0xdb9e,	// (0x00061a7e) main_tv_pg_hdr_pane_t1

0xdbac,	// (0x00061a8c) main_tv_pg_hdr_pane_t2

0xdbba,	// (0x00061a9a) main_tv_pg_hdr_pane_t3

0xdbc8,	// (0x00061aa8) main_tv_pg_hdr_pane_t4

0xdbd6,	// (0x00061ab6) main_tv_pg_hdr_pane_t5

0x0004,

0xfbaf,	// (0x00063a8f) main_tv_pg_hdr_pane_t

0xdbe4,	// (0x00061ac4) single_mobtv_pg_channel_pane_ParamLimits

0xdbe4,	// (0x00061ac4) single_mobtv_pg_channel_pane

0xdbf6,	// (0x00061ad6) single_mobtv_pg_channel_table_pane

0xdbff,	// (0x00061adf) single_mobtv_pg_channel_thumb_pane

0xdc08,	// (0x00061ae8) single_tv_pg_channel_pane_g1

0xdc11,	// (0x00061af1) single_tv_pg_channel_pane_g2

0x0001,

0xfbba,	// (0x00063a9a) single_tv_pg_channel_pane_g

0xbea0,	// (0x0005fd80) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xbea0,	// (0x0005fd80) bg_single_mobtv_pg_channel_thumb_pane

0xdc1a,	// (0x00061afa) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdc1a,	// (0x00061afa) single_mobtv_pg_channel_thumb_pane_g1

0xdc28,	// (0x00061b08) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdc28,	// (0x00061b08) single_mobtv_pg_channel_thumb_pane_g2

0xdc34,	// (0x00061b14) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdc34,	// (0x00061b14) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbbf,	// (0x00063a9f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbbf,	// (0x00063a9f) single_mobtv_pg_channel_thumb_pane_g

0xdc40,	// (0x00061b20) single_mobtv_pg_channel_thumb_pane_t1

0xdc4e,	// (0x00061b2e) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbc6,	// (0x00063aa6) single_mobtv_pg_channel_thumb_pane_t

0x061b,	// (0x000544fb) bg_single_mobtv_pg_channel_table_pane_g1

0x061b,	// (0x000544fb) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c9,	// (0x000632a9) bg_single_mobtv_pg_channel_table_pane_g

0xdc5c,	// (0x00061b3c) single_mobtv_pg_channel_table_pane_t1

0xdc6a,	// (0x00061b4a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbcb,	// (0x00063aab) single_mobtv_pg_channel_table_pane_t

0x9473,	// (0x0005d353) main_mobtv_info_pane_g1_ParamLimits

0x9473,	// (0x0005d353) main_mobtv_info_pane_g1

0x948f,	// (0x0005d36f) main_mobtv_info_pane_t1_ParamLimits

0x948f,	// (0x0005d36f) main_mobtv_info_pane_t1

0x94f5,	// (0x0005d3d5) main_mobtv_info_pane_t2_ParamLimits

0x94f5,	// (0x0005d3d5) main_mobtv_info_pane_t2

0x0002,

0xfbd5,	// (0x00063ab5) main_mobtv_info_pane_t_ParamLimits

0xfbd5,	// (0x00063ab5) main_mobtv_info_pane_t

0x9578,	// (0x0005d458) wait_bar_pane_cp05

0x9588,	// (0x0005d468) main_mobtv_loading_pane_g1_ParamLimits

0x9588,	// (0x0005d468) main_mobtv_loading_pane_g1

0x9599,	// (0x0005d479) main_mobtv_loading_pane_g2_ParamLimits

0x9599,	// (0x0005d479) main_mobtv_loading_pane_g2

0x95a5,	// (0x0005d485) main_mobtv_loading_pane_g3_ParamLimits

0x95a5,	// (0x0005d485) main_mobtv_loading_pane_g3

0x0002,

0xfbdc,	// (0x00063abc) main_mobtv_loading_pane_g_ParamLimits

0xfbdc,	// (0x00063abc) main_mobtv_loading_pane_g

0xdc78,	// (0x00061b58) main_mobtv_loading_pane_t1_ParamLimits

0xdc78,	// (0x00061b58) main_mobtv_loading_pane_t1

0xdc90,	// (0x00061b70) main_mobtv_loading_pane_t2_ParamLimits

0xdc90,	// (0x00061b70) main_mobtv_loading_pane_t2

0x0001,

0xfbe3,	// (0x00063ac3) main_mobtv_loading_pane_t_ParamLimits

0xfbe3,	// (0x00063ac3) main_mobtv_loading_pane_t

0x95b6,	// (0x0005d496) wait_bar_pane_cp06_ParamLimits

0x95b6,	// (0x0005d496) wait_bar_pane_cp06

0xdcb4,	// (0x00061b94) main_mobtv_programe_curr_pane_t1

0xdcc2,	// (0x00061ba2) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbe8,	// (0x00063ac8) main_mobtv_programe_curr_pane_t

0xdcd0,	// (0x00061bb0) main_mobtv_programe_next_pane_t1

0xdcde,	// (0x00061bbe) main_mobtv_programe_next_pane_t2

0xdcec,	// (0x00061bcc) main_mobtv_programe_next_pane_t3

0x0002,

0xfbed,	// (0x00063acd) main_mobtv_programe_next_pane_t

0xb747,	// (0x0005f627) bg_popup_mobtv_noti_window_pane

0xdcfa,	// (0x00061bda) popup_mobtv_noti_window_g1

0xdd02,	// (0x00061be2) popup_mobtv_noti_window_t1

0xdd10,	// (0x00061bf0) popup_mobtv_noti_window_t2

0x0001,

0xfbf4,	// (0x00063ad4) popup_mobtv_noti_window_t

0x061b,	// (0x000544fb) bg_popup_mobtv_noti_window_pane_g1

0xb7b0,	// (0x0005f690) sc_clock_pane

0xb7b0,	// (0x0005f690) main_fs_bigclock_pane

0x8d96,	// (0x0005cc76) blid2_tripm_pane_t4_ParamLimits

0x8d96,	// (0x0005cc76) blid2_tripm_pane_t4

0x95c5,	// (0x0005d4a5) sc_clock_pane_g1_ParamLimits

0x95c5,	// (0x0005d4a5) sc_clock_pane_g1

0x95d7,	// (0x0005d4b7) sc_clock_pane_t1_ParamLimits

0x95d7,	// (0x0005d4b7) sc_clock_pane_t1

0x95f9,	// (0x0005d4d9) sc_clock_pane_t2_ParamLimits

0x95f9,	// (0x0005d4d9) sc_clock_pane_t2

0x960f,	// (0x0005d4ef) sc_clock_pane_t3_ParamLimits

0x960f,	// (0x0005d4ef) sc_clock_pane_t3

0x0004,

0xfbf9,	// (0x00063ad9) sc_clock_pane_t_ParamLimits

0xfbf9,	// (0x00063ad9) sc_clock_pane_t

0xa367,	// (0x0005e247) main_fs_bigclock_indicator_pane_ParamLimits

0xa367,	// (0x0005e247) main_fs_bigclock_indicator_pane

0x96ab,	// (0x0005d58b) main_fs_bigclock_pane_g1_ParamLimits

0x96ab,	// (0x0005d58b) main_fs_bigclock_pane_g1

0xa373,	// (0x0005e253) main_fs_bigclock_pane_t1_ParamLimits

0xa373,	// (0x0005e253) main_fs_bigclock_pane_t1

0xa385,	// (0x0005e265) main_fs_bigclock_pane_t2_ParamLimits

0xa385,	// (0x0005e265) main_fs_bigclock_pane_t2

0xa397,	// (0x0005e277) main_fs_bigclock_pane_t3_ParamLimits

0xa397,	// (0x0005e277) main_fs_bigclock_pane_t3

0x0002,

0xfdc2,	// (0x00063ca2) main_fs_bigclock_pane_t_ParamLimits

0xfdc2,	// (0x00063ca2) main_fs_bigclock_pane_t

0xe7fb,	// (0x000626db) main_fs_bigclock_indicator_pane_g1

0xd9e3,	// (0x000618c3) ncim_query_content_pane_g2_ParamLimits

0xd9e3,	// (0x000618c3) ncim_query_content_pane_g2

0x0001,

0xfb86,	// (0x00063a66) ncim_query_content_pane_g_ParamLimits

0xfb86,	// (0x00063a66) ncim_query_content_pane_g

0x9626,	// (0x0005d506) sc_clock_pane_t4_ParamLimits

0x9626,	// (0x0005d506) sc_clock_pane_t4

0xb7a2,	// (0x0005f682) main_radioblah_pane

0xee0c,	// (0x00062cec) cell_call4_button_pane_t1_copy1_ParamLimits

0xee0c,	// (0x00062cec) cell_call4_button_pane_t1_copy1

0x9291,	// (0x0005d171) main_ncimui_pane_t1_ParamLimits

0x9291,	// (0x0005d171) main_ncimui_pane_t1

0x92ab,	// (0x0005d18b) main_ncimui_pane_t2_ParamLimits

0x92ab,	// (0x0005d18b) main_ncimui_pane_t2

0x0002,

0xfb7f,	// (0x00063a5f) main_ncimui_pane_t_ParamLimits

0xfb7f,	// (0x00063a5f) main_ncimui_pane_t

0xde51,	// (0x00061d31) main_radioblah_anim_pane_ParamLimits

0xde51,	// (0x00061d31) main_radioblah_anim_pane

0xde62,	// (0x00061d42) main_radioblah_info_pane_ParamLimits

0xde62,	// (0x00061d42) main_radioblah_info_pane

0xde76,	// (0x00061d56) main_radioblah_pane_t1_ParamLimits

0xde76,	// (0x00061d56) main_radioblah_pane_t1

0xde92,	// (0x00061d72) main_radioblah_pane_t2_ParamLimits

0xde92,	// (0x00061d72) main_radioblah_pane_t2

0x0003,

0xfc1a,	// (0x00063afa) main_radioblah_pane_t_ParamLimits

0xfc1a,	// (0x00063afa) main_radioblah_pane_t

0x96f5,	// (0x0005d5d5) main_radioblah_rocker_ctrl_pane_ParamLimits

0x96f5,	// (0x0005d5d5) main_radioblah_rocker_ctrl_pane

0xdeda,	// (0x00061dba) main_radioblah_info_pane_t1_ParamLimits

0xdeda,	// (0x00061dba) main_radioblah_info_pane_t1

0x9749,	// (0x0005d629) main_radioblah_info_pane_t2_ParamLimits

0x9749,	// (0x0005d629) main_radioblah_info_pane_t2

0x0003,

0xfc23,	// (0x00063b03) main_radioblah_info_pane_t_ParamLimits

0xfc23,	// (0x00063b03) main_radioblah_info_pane_t

0x061b,	// (0x000544fb) main_radioblah_rocker_ctrl_pane_g1

0x97f7,	// (0x0005d6d7) main_radioblah_rocker_ctrl_pane_g2

0x97ff,	// (0x0005d6df) main_radioblah_rocker_ctrl_pane_g3

0x9807,	// (0x0005d6e7) main_radioblah_rocker_ctrl_pane_g4

0x980f,	// (0x0005d6ef) main_radioblah_rocker_ctrl_pane_g5

0x9817,	// (0x0005d6f7) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2c,	// (0x00063b0c) main_radioblah_rocker_ctrl_pane_g

0x924a,	// (0x0005d12a) main_cset_text2_pane_t1_copy1_ParamLimits

0xee68,	// (0x00062d48) cam4_image_uncrop_qvga_pane

0xeed0,	// (0x00062db0) vid4_image_uncrop_qcif_pane

0xf03b,	// (0x00062f1b) cam6_image_uncrop_qvga_pane_ParamLimits

0xf03b,	// (0x00062f1b) cam6_image_uncrop_qvga_pane

0xd693,	// (0x00061573) vid6_image_uncrop_qcif_pane_ParamLimits

0xd693,	// (0x00061573) vid6_image_uncrop_qcif_pane

0xb747,	// (0x0005f627) bg_popup_preview_window_pane_cp03

0xd989,	// (0x00061869) list_cset_text2_pane

0xd991,	// (0x00061871) main_cset6_text2_pane_g1

0xd999,	// (0x00061879) main_cset6_text2_pane_t1

0x981f,	// (0x0005d6ff) list_cset_text2_pane_t1_ParamLimits

0x981f,	// (0x0005d6ff) list_cset_text2_pane_t1

0xb7a2,	// (0x0005f682) main_radioblah_pane_ParamLimits

0x9566,	// (0x0005d446) main_mobtv_info_pane_t3_ParamLimits

0x9566,	// (0x0005d446) main_mobtv_info_pane_t3

0x96e3,	// (0x0005d5c3) main_radioblah_pane_g1

0x971d,	// (0x0005d5fd) main_radioblah_info_pane_g1

0x979c,	// (0x0005d67c) main_radioblah_info_pane_t3_ParamLimits

0x979c,	// (0x0005d67c) main_radioblah_info_pane_t3

0x4e5e,	// (0x00058d3e) highlight_cell_cale_month_pane_ParamLimits

0x4e5e,	// (0x00058d3e) highlight_cell_cale_month_pane

0xb7b0,	// (0x0005f690) main_phob_fisheye_pane

0xc6c0,	// (0x000605a0) scroll_pane_cp0031_ParamLimits

0xc6c0,	// (0x000605a0) scroll_pane_cp0031

0xd79d,	// (0x0006167d) wait_bar_pane_cp08_ParamLimits

0x90b9,	// (0x0005cf99) cset_list_set_pane_copy1_ParamLimits

0xdf14,	// (0x00061df4) highlight_cell_cale_month_pane_g1

0x9838,	// (0x0005d718) highlight_cell_cale_month_pane_t1

0xdf1c,	// (0x00061dfc) list_gen_pane_cp01

0xd029,	// (0x00060f09) scroll_pane_01

0x2347,	// (0x00056227) list_single_double_fisheye_pane

0xdf25,	// (0x00061e05) list_double_fisheye_pane_g1_ParamLimits

0xdf25,	// (0x00061e05) list_double_fisheye_pane_g1

0xdf31,	// (0x00061e11) list_double_fisheye_pane_g2_ParamLimits

0xdf31,	// (0x00061e11) list_double_fisheye_pane_g2

0x2350,	// (0x00056230) list_double_fisheye_pane_g3_ParamLimits

0x2350,	// (0x00056230) list_double_fisheye_pane_g3

0x0004,

0xfc39,	// (0x00063b19) list_double_fisheye_pane_g_ParamLimits

0xfc39,	// (0x00063b19) list_double_fisheye_pane_g

0xdf62,	// (0x00061e42) list_double_fisheye_pane_t1_ParamLimits

0xdf62,	// (0x00061e42) list_double_fisheye_pane_t1

0xdf7d,	// (0x00061e5d) list_double_fisheye_pane_t2_ParamLimits

0xdf7d,	// (0x00061e5d) list_double_fisheye_pane_t2

0x0001,

0xfc44,	// (0x00063b24) list_double_fisheye_pane_t_ParamLimits

0xfc44,	// (0x00063b24) list_double_fisheye_pane_t

0xb7b0,	// (0x0005f690) main_call5_pane

0x964f,	// (0x0005d52f) sc_swipe_pane_ParamLimits

0x964f,	// (0x0005d52f) sc_swipe_pane

0x9857,	// (0x0005d737) call5_image_pane_ParamLimits

0x9857,	// (0x0005d737) call5_image_pane

0x986c,	// (0x0005d74c) call5_swipe_1_pane_ParamLimits

0x986c,	// (0x0005d74c) call5_swipe_1_pane

0x987d,	// (0x0005d75d) call5_swipe_2_pane_ParamLimits

0x987d,	// (0x0005d75d) call5_swipe_2_pane

0x98a2,	// (0x0005d782) popup_call5_audio_first_window_ParamLimits

0x98a2,	// (0x0005d782) popup_call5_audio_first_window

0xbea0,	// (0x0005fd80) call5_swipe_1_pane_g1_ParamLimits

0xbea0,	// (0x0005fd80) call5_swipe_1_pane_g1

0xdf9f,	// (0x00061e7f) call5_swipe_1_pane_g2_ParamLimits

0xdf9f,	// (0x00061e7f) call5_swipe_1_pane_g2

0x0001,

0xfc49,	// (0x00063b29) call5_swipe_1_pane_g_ParamLimits

0xfc49,	// (0x00063b29) call5_swipe_1_pane_g

0xdfab,	// (0x00061e8b) call5_swipe_1_pane_t1_ParamLimits

0xdfab,	// (0x00061e8b) call5_swipe_1_pane_t1

0xbea0,	// (0x0005fd80) call5_swipe_2_pane_g1_ParamLimits

0xbea0,	// (0x0005fd80) call5_swipe_2_pane_g1

0xdfc0,	// (0x00061ea0) call5_swipe_2_pane_g2_ParamLimits

0xdfc0,	// (0x00061ea0) call5_swipe_2_pane_g2

0x0001,

0xfc4e,	// (0x00063b2e) call5_swipe_2_pane_g_ParamLimits

0xfc4e,	// (0x00063b2e) call5_swipe_2_pane_g

0xdfcc,	// (0x00061eac) call5_swipe_2_pane_t1_ParamLimits

0xdfcc,	// (0x00061eac) call5_swipe_2_pane_t1

0xdfe1,	// (0x00061ec1) sc_swipe_pane_g1_ParamLimits

0xdfe1,	// (0x00061ec1) sc_swipe_pane_g1

0xdfee,	// (0x00061ece) sc_swipe_pane_g2_ParamLimits

0xdfee,	// (0x00061ece) sc_swipe_pane_g2

0x0001,

0xfc53,	// (0x00063b33) sc_swipe_pane_g_ParamLimits

0xfc53,	// (0x00063b33) sc_swipe_pane_g

0xdffa,	// (0x00061eda) sc_swipe_pane_t1_ParamLimits

0xdffa,	// (0x00061eda) sc_swipe_pane_t1

0xb7b0,	// (0x0005f690) main_cmail_launcher_pane

0x98b1,	// (0x0005d791) aid_size_cell_cmail_l_ParamLimits

0x98b1,	// (0x0005d791) aid_size_cell_cmail_l

0x98ca,	// (0x0005d7aa) grid_cmail_l_pane_ParamLimits

0x98ca,	// (0x0005d7aa) grid_cmail_l_pane

0x98df,	// (0x0005d7bf) cell_cmail_l_pane_ParamLimits

0x98df,	// (0x0005d7bf) cell_cmail_l_pane

0x9901,	// (0x0005d7e1) cell_cmail_l_pane_g1_ParamLimits

0x9901,	// (0x0005d7e1) cell_cmail_l_pane_g1

0x9911,	// (0x0005d7f1) cell_cmail_l_pane_t1_ParamLimits

0x9911,	// (0x0005d7f1) cell_cmail_l_pane_t1

0xe00f,	// (0x00061eef) cell_cmail_l_pane_t2_ParamLimits

0xe00f,	// (0x00061eef) cell_cmail_l_pane_t2

0x0001,

0xfc58,	// (0x00063b38) cell_cmail_l_pane_t_ParamLimits

0xfc58,	// (0x00063b38) cell_cmail_l_pane_t

0x106c,	// (0x00054f4c) grid_highlight_pane_cp018_ParamLimits

0x106c,	// (0x00054f4c) grid_highlight_pane_cp018

0x33d1,	// (0x000572b1) main2_pane_ParamLimits

0x33d1,	// (0x000572b1) main2_pane

0xc03f,	// (0x0005ff1f) popup_sp_fs_action_menu_bg_pane_g1

0xc047,	// (0x0005ff27) popup_sp_fs_action_menu_bg_pane_g2

0xc04f,	// (0x0005ff2f) popup_sp_fs_action_menu_bg_pane_g3

0xc057,	// (0x0005ff37) popup_sp_fs_action_menu_bg_pane_g4

0xc05f,	// (0x0005ff3f) popup_sp_fs_action_menu_bg_pane_g5

0xc067,	// (0x0005ff47) popup_sp_fs_action_menu_bg_pane_g6

0xc06f,	// (0x0005ff4f) popup_sp_fs_action_menu_bg_pane_g7

0xc077,	// (0x0005ff57) popup_sp_fs_action_menu_bg_pane_g8

0xc07f,	// (0x0005ff5f) popup_sp_fs_action_menu_bg_pane_g9

0xc087,	// (0x0005ff67) popup_sp_fs_action_menu_bg_pane_g10

0xc087,	// (0x0005ff67) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf11f,	// (0x00062fff) popup_sp_fs_action_menu_bg_pane_g

0x4099,	// (0x00057f79) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x2_t3_g3_g1

0x40a5,	// (0x00057f85) list_medium_line_x2_t3_g3_g2_ParamLimits

0x40a5,	// (0x00057f85) list_medium_line_x2_t3_g3_g2

0x4099,	// (0x00057f79) list_medium_line_x2_t3_g3_g3_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1cd,	// (0x000630ad) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1cd,	// (0x000630ad) list_medium_line_x2_t3_g3_g

0x40b1,	// (0x00057f91) list_medium_line_x2_t3_g3_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x2_t3_g3_t1

0x40b1,	// (0x00057f91) list_medium_line_x2_t3_g3_t2_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x2_t3_g3_t2

0x40c4,	// (0x00057fa4) list_medium_line_x2_t3_g3_t3_ParamLimits

0x40c4,	// (0x00057fa4) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1d4,	// (0x000630b4) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1d4,	// (0x000630b4) list_medium_line_x2_t3_g3_t

0x4099,	// (0x00057f79) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x2_t3_g2_g1

0x4099,	// (0x00057f79) list_medium_line_x2_t3_g2_g2_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1db,	// (0x000630bb) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1db,	// (0x000630bb) list_medium_line_x2_t3_g2_g

0x40b1,	// (0x00057f91) list_medium_line_x2_t3_g2_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x2_t3_g2_t1

0x40b1,	// (0x00057f91) list_medium_line_x2_t3_g2_t2_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x2_t3_g2_t2

0x40c4,	// (0x00057fa4) list_medium_line_x2_t3_g2_t3_ParamLimits

0x40c4,	// (0x00057fa4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1d4,	// (0x000630b4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1d4,	// (0x000630b4) list_medium_line_x2_t3_g2_t

0x4099,	// (0x00057f79) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x2_t4_g4_g1

0x40a5,	// (0x00057f85) list_medium_line_x2_t4_g4_g2_ParamLimits

0x40a5,	// (0x00057f85) list_medium_line_x2_t4_g4_g2

0x40a5,	// (0x00057f85) list_medium_line_x2_t4_g4_g3_ParamLimits

0x40a5,	// (0x00057f85) list_medium_line_x2_t4_g4_g3

0x4099,	// (0x00057f79) list_medium_line_x2_t4_g4_g4_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1e0,	// (0x000630c0) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1e0,	// (0x000630c0) list_medium_line_x2_t4_g4_g

0x40b1,	// (0x00057f91) list_medium_line_x2_t4_g4_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x2_t4_g4_t1

0x40b1,	// (0x00057f91) list_medium_line_x2_t4_g4_t2_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x2_t4_g4_t2

0x40b1,	// (0x00057f91) list_medium_line_x2_t4_g4_t3_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x2_t4_g4_t3

0x40c4,	// (0x00057fa4) list_medium_line_x2_t4_g4_t4_ParamLimits

0x40c4,	// (0x00057fa4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1e9,	// (0x000630c9) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1e9,	// (0x000630c9) list_medium_line_x2_t4_g4_t

0x4099,	// (0x00057f79) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x2_t2_g4_g1

0x40a5,	// (0x00057f85) list_medium_line_x2_t2_g4_g2_ParamLimits

0x40a5,	// (0x00057f85) list_medium_line_x2_t2_g4_g2

0x40a5,	// (0x00057f85) list_medium_line_x2_t2_g4_g3_ParamLimits

0x40a5,	// (0x00057f85) list_medium_line_x2_t2_g4_g3

0x4099,	// (0x00057f79) list_medium_line_x2_t2_g4_g4_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1e0,	// (0x000630c0) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1e0,	// (0x000630c0) list_medium_line_x2_t2_g4_g

0x40b1,	// (0x00057f91) list_medium_line_x2_t2_g4_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x2_t2_g4_t1

0x40c4,	// (0x00057fa4) list_medium_line_x2_t2_g4_t2_ParamLimits

0x40c4,	// (0x00057fa4) list_medium_line_x2_t2_g4_t2

0x0001,

0xf250,	// (0x00063130) list_medium_line_x2_t2_g4_t_ParamLimits

0xf250,	// (0x00063130) list_medium_line_x2_t2_g4_t

0x4099,	// (0x00057f79) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x2_t2_g3_g1

0x40a5,	// (0x00057f85) list_medium_line_x2_t2_g3_g2_ParamLimits

0x40a5,	// (0x00057f85) list_medium_line_x2_t2_g3_g2

0x4099,	// (0x00057f79) list_medium_line_x2_t2_g3_g3_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1cd,	// (0x000630ad) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1cd,	// (0x000630ad) list_medium_line_x2_t2_g3_g

0x40b1,	// (0x00057f91) list_medium_line_x2_t2_g3_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x2_t2_g3_t1

0x40c4,	// (0x00057fa4) list_medium_line_x2_t2_g3_t2_ParamLimits

0x40c4,	// (0x00057fa4) list_medium_line_x2_t2_g3_t2

0x0001,

0xf250,	// (0x00063130) list_medium_line_x2_t2_g3_t_ParamLimits

0xf250,	// (0x00063130) list_medium_line_x2_t2_g3_t

0x4fbb,	// (0x00058e9b) main_sp_fs_list_pane_ParamLimits

0x4fbb,	// (0x00058e9b) main_sp_fs_list_pane

0x4fc8,	// (0x00058ea8) sp_fs_scroll_pane_ParamLimits

0x4fc8,	// (0x00058ea8) sp_fs_scroll_pane

0x4fd5,	// (0x00058eb5) list_medium_line_x2_t3_t1

0x4fd5,	// (0x00058eb5) list_medium_line_x2_t3_t2

0x4fe4,	// (0x00058ec4) list_medium_line_x2_t3_t3

0x0002,

0xf29b,	// (0x0006317b) list_medium_line_x2_t3_t

0x4fd5,	// (0x00058eb5) list_medium_line_x3_t4_t1

0x4fd5,	// (0x00058eb5) list_medium_line_x3_t4_t2

0x4fd5,	// (0x00058eb5) list_medium_line_x3_t4_t3

0x4fd5,	// (0x00058eb5) list_medium_line_x3_t4_t4

0x0003,

0xf2a2,	// (0x00063182) list_medium_line_x3_t4_t

0x4fd5,	// (0x00058eb5) list_medium_line_x4_t5_t1

0x4fd5,	// (0x00058eb5) list_medium_line_x4_t5_t2

0x4fd5,	// (0x00058eb5) list_medium_line_x4_t5_t3

0x4fd5,	// (0x00058eb5) list_medium_line_x4_t5_t4

0x4fd5,	// (0x00058eb5) list_medium_line_x4_t5_t5

0x0004,

0xf2ab,	// (0x0006318b) list_medium_line_x4_t5_t

0x4099,	// (0x00057f79) list_medium_line_t4_g4_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_t4_g4_g1

0x4099,	// (0x00057f79) list_medium_line_t4_g4_g2_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_t4_g4_g2

0x4099,	// (0x00057f79) list_medium_line_t4_g4_g3_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_t4_g4_g3

0x4099,	// (0x00057f79) list_medium_line_t4_g4_g4_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_t4_g4_g4

0x0003,

0xf2b6,	// (0x00063196) list_medium_line_t4_g4_g_ParamLimits

0xf2b6,	// (0x00063196) list_medium_line_t4_g4_g

0x40b1,	// (0x00057f91) list_medium_line_t4_g4_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t4_g4_t1

0x40b1,	// (0x00057f91) list_medium_line_t4_g4_t2_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t4_g4_t2

0x40b1,	// (0x00057f91) list_medium_line_t4_g4_t3_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t4_g4_t3

0x40b1,	// (0x00057f91) list_medium_line_t4_g4_t4_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t4_g4_t4

0x0003,

0xf2bf,	// (0x0006319f) list_medium_line_t4_g4_t_ParamLimits

0xf2bf,	// (0x0006319f) list_medium_line_t4_g4_t

0x5092,	// (0x00058f72) chi_dic_find_pane_g1

0x5e15,	// (0x00059cf5) main_tport_pane

0x4fd5,	// (0x00058eb5) list_medium_line_plain_t1

0x4099,	// (0x00057f79) list_medium_line_t2_g2_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_t2_g2_g1

0xd145,	// (0x00061025) list_medium_line_t2_g2_g2_ParamLimits

0xd145,	// (0x00061025) list_medium_line_t2_g2_g2

0x0001,

0xf990,	// (0x00063870) list_medium_line_t2_g2_g_ParamLimits

0xf990,	// (0x00063870) list_medium_line_t2_g2_g

0x40b1,	// (0x00057f91) list_medium_line_t2_g2_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t2_g2_t1

0x40b1,	// (0x00057f91) list_medium_line_t2_g2_t2_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t2_g2_t2

0x0001,

0xf995,	// (0x00063875) list_medium_line_t2_g2_t_ParamLimits

0xf995,	// (0x00063875) list_medium_line_t2_g2_t

0xd461,	// (0x00061341) aid_sp_fs_list_icon_a_sm

0xd469,	// (0x00061349) aid_sp_fs_list_icon_d

0xd471,	// (0x00061351) aid_sp_fs_text_primary

0xd47a,	// (0x0006135a) aid_sp_fs_text_secondary

0x8b4a,	// (0x0005ca2a) list_medium_line

0x8b4a,	// (0x0005ca2a) list_medium_line_g2

0x8b4a,	// (0x0005ca2a) list_medium_line_g3

0x8b4a,	// (0x0005ca2a) list_medium_line_plain

0x8b4a,	// (0x0005ca2a) list_medium_line_plain_t2

0x8b4a,	// (0x0005ca2a) list_medium_line_plain_t3

0x8b4a,	// (0x0005ca2a) list_medium_line_right_icon

0x8b4a,	// (0x0005ca2a) list_medium_line_right_iconx2

0x8b4a,	// (0x0005ca2a) list_medium_line_t2

0x8b4a,	// (0x0005ca2a) list_medium_line_t2_g2

0x8b4a,	// (0x0005ca2a) list_medium_line_t2_g3

0x8b4a,	// (0x0005ca2a) list_medium_line_t2_right_icon

0x8b4a,	// (0x0005ca2a) list_medium_line_t2_right_iconx2

0x8b4a,	// (0x0005ca2a) list_medium_line_t3

0x8b4a,	// (0x0005ca2a) list_medium_line_t3_g2

0x8b4a,	// (0x0005ca2a) list_medium_line_t3_g3

0x8b4a,	// (0x0005ca2a) list_medium_line_t3_right_iconx2

0x2335,	// (0x00056215) list_medium_line_t4_g4

0xd483,	// (0x00061363) list_medium_line_x2

0xd483,	// (0x00061363) list_medium_line_x2_t2_g2

0xd483,	// (0x00061363) list_medium_line_x2_t2_g3

0xd483,	// (0x00061363) list_medium_line_x2_t2_g4

0xd483,	// (0x00061363) list_medium_line_x2_t3

0xd483,	// (0x00061363) list_medium_line_x2_t3_g2

0xd483,	// (0x00061363) list_medium_line_x2_t3_g3

0xd483,	// (0x00061363) list_medium_line_x2_t3_g4

0xd483,	// (0x00061363) list_medium_line_x2_t4_g2

0xd483,	// (0x00061363) list_medium_line_x2_t4_g4

0x233e,	// (0x0005621e) list_medium_line_x3

0x233e,	// (0x0005621e) list_medium_line_x3_t4

0x233e,	// (0x0005621e) list_medium_line_x3_t4_g4

0x2335,	// (0x00056215) list_medium_line_x4_t4

0x2335,	// (0x00056215) list_medium_line_x4_t4_g7

0x2335,	// (0x00056215) list_medium_line_x4_t5

0x8b53,	// (0x0005ca33) list_single_fs_dyc_pane_ParamLimits

0x8b53,	// (0x0005ca33) list_single_fs_dyc_pane

0x4099,	// (0x00057f79) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x4_t4_g7_g1

0xbea0,	// (0x0005fd80) list_medium_line_x4_t4_g7_g2_ParamLimits

0xbea0,	// (0x0005fd80) list_medium_line_x4_t4_g7_g2

0x40a5,	// (0x00057f85) list_medium_line_x4_t4_g7_g3_ParamLimits

0x40a5,	// (0x00057f85) list_medium_line_x4_t4_g7_g3

0xbea0,	// (0x0005fd80) list_medium_line_x4_t4_g7_g4_ParamLimits

0xbea0,	// (0x0005fd80) list_medium_line_x4_t4_g7_g4

0xbea0,	// (0x0005fd80) list_medium_line_x4_t4_g7_g5_ParamLimits

0xbea0,	// (0x0005fd80) list_medium_line_x4_t4_g7_g5

0xbea0,	// (0x0005fd80) list_medium_line_x4_t4_g7_g6_ParamLimits

0xbea0,	// (0x0005fd80) list_medium_line_x4_t4_g7_g6

0xbeae,	// (0x0005fd8e) list_medium_line_x4_t4_g7_g7_ParamLimits

0xbeae,	// (0x0005fd8e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb60,	// (0x00063a40) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb60,	// (0x00063a40) list_medium_line_x4_t4_g7_g

0x40b1,	// (0x00057f91) list_medium_line_x4_t4_g7_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x4_t4_g7_t1

0x40b1,	// (0x00057f91) list_medium_line_x4_t4_g7_t2_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x4_t4_g7_t2

0x40b1,	// (0x00057f91) list_medium_line_x4_t4_g7_t3_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x4_t4_g7_t3

0xd963,	// (0x00061843) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd963,	// (0x00061843) list_medium_line_x4_t4_g7_t4

0xd976,	// (0x00061856) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd976,	// (0x00061856) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb6f,	// (0x00063a4f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb6f,	// (0x00063a4f) list_medium_line_x4_t4_g7_t

0x922d,	// (0x0005d10d) list_single_dyc_row_pane_ParamLimits

0x922d,	// (0x0005d10d) list_single_dyc_row_pane

0x9846,	// (0x0005d726) call5_gesture_pane_ParamLimits

0x9846,	// (0x0005d726) call5_gesture_pane

0x988e,	// (0x0005d76e) call5_windows_pane_ParamLimits

0x988e,	// (0x0005d76e) call5_windows_pane

0x9927,	// (0x0005d807) call5_swipe_1_pane_cp_ParamLimits

0x9927,	// (0x0005d807) call5_swipe_1_pane_cp

0x9933,	// (0x0005d813) call5_swipe_2_pane_cp_ParamLimits

0x9933,	// (0x0005d813) call5_swipe_2_pane_cp

0x059a,	// (0x0005447a) call5_image_pane_cp

0x993f,	// (0x0005d81f) popup_call5_audio_first_window_cp_ParamLimits

0x993f,	// (0x0005d81f) popup_call5_audio_first_window_cp

0xdfe1,	// (0x00061ec1) call5_swipe_1_pane_g1_cp_ParamLimits

0xdfe1,	// (0x00061ec1) call5_swipe_1_pane_g1_cp

0xe027,	// (0x00061f07) call5_swipe_1_pane_g2_cp

0xdffa,	// (0x00061eda) call5_swipe_1_pane_t1_cp_ParamLimits

0xdffa,	// (0x00061eda) call5_swipe_1_pane_t1_cp

0xdfe1,	// (0x00061ec1) call5_swipe_2_pane_g1_cp_ParamLimits

0xdfe1,	// (0x00061ec1) call5_swipe_2_pane_g1_cp

0xe02f,	// (0x00061f0f) call5_swipe_2_pane_g2_cp

0xe037,	// (0x00061f17) call5_swipe_2_pane_t1_cp_ParamLimits

0xe037,	// (0x00061f17) call5_swipe_2_pane_t1_cp

0x106c,	// (0x00054f4c) main_sp_fs_email_pane

0xe04c,	// (0x00061f2c) main_sp_fs_listscroll_pane_te

0x994b,	// (0x0005d82b) popup_sp_fs_action_menu_pane_ParamLimits

0x994b,	// (0x0005d82b) popup_sp_fs_action_menu_pane

0x061b,	// (0x000544fb) bg_sp_fs_ctrlbar_pane_g1

0xc8f6,	// (0x000607d6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc908,	// (0x000607e8) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc8ff,	// (0x000607df) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x061b,	// (0x000544fb) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc5d,	// (0x00063b3d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x656f,	// (0x0005a44f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x656f,	// (0x0005a44f) bg_sp_fs_ctrlbar_ddmenu_pane

0xe055,	// (0x00061f35) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe055,	// (0x00061f35) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe061,	// (0x00061f41) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe061,	// (0x00061f41) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc66,	// (0x00063b46) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc66,	// (0x00063b46) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe06d,	// (0x00061f4d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe06d,	// (0x00061f4d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc087,	// (0x0005ff67) list_medium_line_t2_right_icon_g1

0x4fd5,	// (0x00058eb5) list_medium_line_t2_right_icon_t1

0x4fd5,	// (0x00058eb5) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6b,	// (0x00063b4b) list_medium_line_t2_right_icon_t

0x22ef,	// (0x000561cf) bg_sp_fs_ctrlbar_pane_ParamLimits

0x22ef,	// (0x000561cf) bg_sp_fs_ctrlbar_pane

0x99c3,	// (0x0005d8a3) main_sp_fs_ctrlbar_button_pane_cp01

0x99cb,	// (0x0005d8ab) main_sp_fs_ctrlbar_ddmenu_pane

0xe0bf,	// (0x00061f9f) main_sp_fs_ctrlbar_pane_g1

0xe0cb,	// (0x00061fab) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc70,	// (0x00063b50) main_sp_fs_ctrlbar_pane_g

0x9a07,	// (0x0005d8e7) main_sp_fs_ctrlbar_pane_t1

0x9a50,	// (0x0005d930) main_sp_fs_ctrlbar_pane

0x9a71,	// (0x0005d951) main_sp_fs_listscroll_pane_te_cp01

0x9a91,	// (0x0005d971) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9a91,	// (0x0005d971) popup_sp_fs_action_menu_pane_cp01

0x106c,	// (0x00054f4c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x106c,	// (0x00054f4c) bg_sp_fs_highlight_list_pane_cp01

0x9ab5,	// (0x0005d995) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x9ab5,	// (0x0005d995) sp_fs_action_menu_list_gene_pane_g1

0xe0f2,	// (0x00061fd2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe0f2,	// (0x00061fd2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc7e,	// (0x00063b5e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc7e,	// (0x00063b5e) sp_fs_action_menu_list_gene_pane_g

0x9ac4,	// (0x0005d9a4) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x9ac4,	// (0x0005d9a4) sp_fs_action_menu_list_gene_pane_t1

0x9adc,	// (0x0005d9bc) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9adc,	// (0x0005d9bc) sp_fs_action_menu_list_gene_pane

0xe0ff,	// (0x00061fdf) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe0ff,	// (0x00061fdf) popup_sp_fs_action_menu_bg_pane

0x9af9,	// (0x0005d9d9) sp_fs_action_menu_list_pane_ParamLimits

0x9af9,	// (0x0005d9d9) sp_fs_action_menu_list_pane

0xe10d,	// (0x00061fed) sp_fs_scroll_pane_cp01_ParamLimits

0xe10d,	// (0x00061fed) sp_fs_scroll_pane_cp01

0x4fd5,	// (0x00058eb5) list_medium_line_plain_t2_t1

0x4fd5,	// (0x00058eb5) list_medium_line_plain_t2_t2

0x0001,

0xfc6b,	// (0x00063b4b) list_medium_line_plain_t2_t

0x4fd5,	// (0x00058eb5) list_medium_line_plain_t3_t1

0x4fd5,	// (0x00058eb5) list_medium_line_plain_t3_t2

0x4fd5,	// (0x00058eb5) list_medium_line_plain_t3_t3

0x0002,

0xfc83,	// (0x00063b63) list_medium_line_plain_t3_t

0x4099,	// (0x00057f79) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x2_t2_g2_g1

0x4099,	// (0x00057f79) list_medium_line_x2_t2_g2_g2_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1db,	// (0x000630bb) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1db,	// (0x000630bb) list_medium_line_x2_t2_g2_g

0x40b1,	// (0x00057f91) list_medium_line_x2_t2_g2_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x2_t2_g2_t1

0x40c4,	// (0x00057fa4) list_medium_line_x2_t2_g2_t2_ParamLimits

0x40c4,	// (0x00057fa4) list_medium_line_x2_t2_g2_t2

0x0001,

0xf250,	// (0x00063130) list_medium_line_x2_t2_g2_t_ParamLimits

0xf250,	// (0x00063130) list_medium_line_x2_t2_g2_t

0x4099,	// (0x00057f79) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x2_t4_g2_g1

0xe133,	// (0x00062013) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe133,	// (0x00062013) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc8a,	// (0x00063b6a) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc8a,	// (0x00063b6a) list_medium_line_x2_t4_g2_g

0x40b1,	// (0x00057f91) list_medium_line_x2_t4_g2_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x2_t4_g2_t1

0x40b1,	// (0x00057f91) list_medium_line_x2_t4_g2_t2_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x2_t4_g2_t2

0x40b1,	// (0x00057f91) list_medium_line_x2_t4_g2_t3_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x2_t4_g2_t3

0x40c4,	// (0x00057fa4) list_medium_line_x2_t4_g2_t4_ParamLimits

0x40c4,	// (0x00057fa4) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1e9,	// (0x000630c9) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1e9,	// (0x000630c9) list_medium_line_x2_t4_g2_t

0xc087,	// (0x0005ff67) list_medium_line_t3_right_iconx2_g1

0x061b,	// (0x000544fb) list_medium_line_t3_right_iconx2_g2

0xe144,	// (0x00062024) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc8f,	// (0x00063b6f) list_medium_line_t3_right_iconx2_g

0x4fd5,	// (0x00058eb5) list_medium_line_t3_right_iconx2_t1

0x4fd5,	// (0x00058eb5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc6b,	// (0x00063b4b) list_medium_line_t3_right_iconx2_t

0x4099,	// (0x00057f79) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x3_t4_g4_g1

0x40a5,	// (0x00057f85) list_medium_line_x3_t4_g4_g2_ParamLimits

0x40a5,	// (0x00057f85) list_medium_line_x3_t4_g4_g2

0x4099,	// (0x00057f79) list_medium_line_x3_t4_g4_g3_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x3_t4_g4_g3

0x40a5,	// (0x00057f85) list_medium_line_x3_t4_g4_g4_ParamLimits

0x40a5,	// (0x00057f85) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc96,	// (0x00063b76) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc96,	// (0x00063b76) list_medium_line_x3_t4_g4_g

0x40b1,	// (0x00057f91) list_medium_line_x3_t4_g4_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x3_t4_g4_t1

0x40b1,	// (0x00057f91) list_medium_line_x3_t4_g4_t2_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x3_t4_g4_t2

0x40b1,	// (0x00057f91) list_medium_line_x3_t4_g4_t3_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x3_t4_g4_t3

0xe14d,	// (0x0006202d) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe14d,	// (0x0006202d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc9f,	// (0x00063b7f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc9f,	// (0x00063b7f) list_medium_line_x3_t4_g4_t

0x9b17,	// (0x0005d9f7) list_single_dyc_row_text_pane_t1_ParamLimits

0x9b17,	// (0x0005d9f7) list_single_dyc_row_text_pane_t1

0x9b4e,	// (0x0005da2e) list_single_dyc_row_text_pane_t2_ParamLimits

0x9b4e,	// (0x0005da2e) list_single_dyc_row_text_pane_t2

0xe16a,	// (0x0006204a) list_single_dyc_row_text_pane_t3_ParamLimits

0xe16a,	// (0x0006204a) list_single_dyc_row_text_pane_t3

0x0005,

0xfca8,	// (0x00063b88) list_single_dyc_row_text_pane_t_ParamLimits

0xfca8,	// (0x00063b88) list_single_dyc_row_text_pane_t

0xe18e,	// (0x0006206e) list_single_dyc_row_pane_g1_ParamLimits

0xe18e,	// (0x0006206e) list_single_dyc_row_pane_g1

0xe19a,	// (0x0006207a) list_single_dyc_row_pane_g2_ParamLimits

0xe19a,	// (0x0006207a) list_single_dyc_row_pane_g2

0xe1a6,	// (0x00062086) list_single_dyc_row_pane_g3_ParamLimits

0xe1a6,	// (0x00062086) list_single_dyc_row_pane_g3

0xe1b2,	// (0x00062092) list_single_dyc_row_pane_g4_ParamLimits

0xe1b2,	// (0x00062092) list_single_dyc_row_pane_g4

0x0003,

0xfcb5,	// (0x00063b95) list_single_dyc_row_pane_g_ParamLimits

0xfcb5,	// (0x00063b95) list_single_dyc_row_pane_g

0xe1be,	// (0x0006209e) list_single_dyc_row_text_pane_ParamLimits

0xe1be,	// (0x0006209e) list_single_dyc_row_text_pane

0xb747,	// (0x0005f627) bg_sp_fs_scroll_pane

0xe1dd,	// (0x000620bd) thumb_sp_fs_scroll_pane

0x4099,	// (0x00057f79) list_medium_line_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_g1

0x40b1,	// (0x00057f91) list_medium_line_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t1

0x4099,	// (0x00057f79) list_medium_line_x2_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x2_g1

0xd145,	// (0x00061025) list_medium_line_x2_g2_ParamLimits

0xd145,	// (0x00061025) list_medium_line_x2_g2

0x0001,

0xf990,	// (0x00063870) list_medium_line_x2_g_ParamLimits

0xf990,	// (0x00063870) list_medium_line_x2_g

0x1058,	// (0x00054f38) list_medium_line_x2_t1_ParamLimits

0x1058,	// (0x00054f38) list_medium_line_x2_t1

0x4099,	// (0x00057f79) list_medium_line_x3_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x3_g1

0xe1e6,	// (0x000620c6) list_medium_line_x3_g2_ParamLimits

0xe1e6,	// (0x000620c6) list_medium_line_x3_g2

0x0001,

0xfcbe,	// (0x00063b9e) list_medium_line_x3_g_ParamLimits

0xfcbe,	// (0x00063b9e) list_medium_line_x3_g

0xe1f3,	// (0x000620d3) list_medium_line_x3_t1_ParamLimits

0xe1f3,	// (0x000620d3) list_medium_line_x3_t1

0xe207,	// (0x000620e7) thumb_sp_fs_scroll_pane_g1

0xe210,	// (0x000620f0) thumb_sp_fs_scroll_pane_g2

0xe219,	// (0x000620f9) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfcc3,	// (0x00063ba3) thumb_sp_fs_scroll_pane_g

0xe207,	// (0x000620e7) bg_sp_fs_scroll_pane_g1

0xe210,	// (0x000620f0) bg_sp_fs_scroll_pane_g2

0xe219,	// (0x000620f9) bg_sp_fs_scroll_pane_g3

0x0002,

0xfcc3,	// (0x00063ba3) bg_sp_fs_scroll_pane_g

0x4099,	// (0x00057f79) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x2_t3_g4_g1

0x40a5,	// (0x00057f85) list_medium_line_x2_t3_g4_g2_ParamLimits

0x40a5,	// (0x00057f85) list_medium_line_x2_t3_g4_g2

0x40a5,	// (0x00057f85) list_medium_line_x2_t3_g4_g3_ParamLimits

0x40a5,	// (0x00057f85) list_medium_line_x2_t3_g4_g3

0x4099,	// (0x00057f79) list_medium_line_x2_t3_g4_g4_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1e0,	// (0x000630c0) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1e0,	// (0x000630c0) list_medium_line_x2_t3_g4_g

0x40b1,	// (0x00057f91) list_medium_line_x2_t3_g4_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x2_t3_g4_t1

0x40b1,	// (0x00057f91) list_medium_line_x2_t3_g4_t2_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_x2_t3_g4_t2

0x40c4,	// (0x00057fa4) list_medium_line_x2_t3_g4_t3_ParamLimits

0x40c4,	// (0x00057fa4) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1d4,	// (0x000630b4) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1d4,	// (0x000630b4) list_medium_line_x2_t3_g4_t

0x4099,	// (0x00057f79) list_medium_line_g2_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_g2_g1

0xd145,	// (0x00061025) list_medium_line_g2_g2_ParamLimits

0xd145,	// (0x00061025) list_medium_line_g2_g2

0x0001,

0xf990,	// (0x00063870) list_medium_line_g2_g_ParamLimits

0xf990,	// (0x00063870) list_medium_line_g2_g

0x40b1,	// (0x00057f91) list_medium_line_g2_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_g2_t1

0x4099,	// (0x00057f79) list_medium_line_t3_g2_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_t3_g2_g1

0xd145,	// (0x00061025) list_medium_line_t3_g2_g2_ParamLimits

0xd145,	// (0x00061025) list_medium_line_t3_g2_g2

0x0001,

0xf990,	// (0x00063870) list_medium_line_t3_g2_g_ParamLimits

0xf990,	// (0x00063870) list_medium_line_t3_g2_g

0x40b1,	// (0x00057f91) list_medium_line_t3_g2_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t3_g2_t1

0x40b1,	// (0x00057f91) list_medium_line_t3_g2_t2_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t3_g2_t2

0x40b1,	// (0x00057f91) list_medium_line_t3_g2_t3_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t3_g2_t3

0x0002,

0xfcca,	// (0x00063baa) list_medium_line_t3_g2_t_ParamLimits

0xfcca,	// (0x00063baa) list_medium_line_t3_g2_t

0xd948,	// (0x00061828) list_medium_line_right_icon_g1

0x4fd5,	// (0x00058eb5) list_medium_line_right_icon_t1

0x4099,	// (0x00057f79) list_medium_line_t2_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_t2_g1

0x40b1,	// (0x00057f91) list_medium_line_t2_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t2_t1

0x40b1,	// (0x00057f91) list_medium_line_t2_t2_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t2_t2

0x0001,

0xf995,	// (0x00063875) list_medium_line_t2_t_ParamLimits

0xf995,	// (0x00063875) list_medium_line_t2_t

0x4099,	// (0x00057f79) list_medium_line_t3_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_t3_g1

0x40b1,	// (0x00057f91) list_medium_line_t3_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t3_t1

0x40b1,	// (0x00057f91) list_medium_line_t3_t2_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t3_t2

0x40b1,	// (0x00057f91) list_medium_line_t3_t3_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t3_t3

0x0002,

0xfcca,	// (0x00063baa) list_medium_line_t3_t_ParamLimits

0xfcca,	// (0x00063baa) list_medium_line_t3_t

0x4099,	// (0x00057f79) list_medium_line_g3_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_g3_g1

0x40a5,	// (0x00057f85) list_medium_line_g3_g2_ParamLimits

0x40a5,	// (0x00057f85) list_medium_line_g3_g2

0x40a5,	// (0x00057f85) list_medium_line_g3_g3_ParamLimits

0x40a5,	// (0x00057f85) list_medium_line_g3_g3

0x0002,

0xfcd1,	// (0x00063bb1) list_medium_line_g3_g_ParamLimits

0xfcd1,	// (0x00063bb1) list_medium_line_g3_g

0x40b1,	// (0x00057f91) list_medium_line_g3_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_g3_t1

0x4099,	// (0x00057f79) list_medium_line_t2_g3_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_t2_g3_g1

0x40a5,	// (0x00057f85) list_medium_line_t2_g3_g2_ParamLimits

0x40a5,	// (0x00057f85) list_medium_line_t2_g3_g2

0x40a5,	// (0x00057f85) list_medium_line_t2_g3_g3_ParamLimits

0x40a5,	// (0x00057f85) list_medium_line_t2_g3_g3

0x0002,

0xfcd1,	// (0x00063bb1) list_medium_line_t2_g3_g_ParamLimits

0xfcd1,	// (0x00063bb1) list_medium_line_t2_g3_g

0x40b1,	// (0x00057f91) list_medium_line_t2_g3_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t2_g3_t1

0x40b1,	// (0x00057f91) list_medium_line_t2_g3_t2_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t2_g3_t2

0x0001,

0xf995,	// (0x00063875) list_medium_line_t2_g3_t_ParamLimits

0xf995,	// (0x00063875) list_medium_line_t2_g3_t

0x4099,	// (0x00057f79) list_medium_line_t3_g3_g1_ParamLimits

0x4099,	// (0x00057f79) list_medium_line_t3_g3_g1

0x40a5,	// (0x00057f85) list_medium_line_t3_g3_g2_ParamLimits

0x40a5,	// (0x00057f85) list_medium_line_t3_g3_g2

0x40a5,	// (0x00057f85) list_medium_line_t3_g3_g3_ParamLimits

0x40a5,	// (0x00057f85) list_medium_line_t3_g3_g3

0x0002,

0xfcd1,	// (0x00063bb1) list_medium_line_t3_g3_g_ParamLimits

0xfcd1,	// (0x00063bb1) list_medium_line_t3_g3_g

0x40b1,	// (0x00057f91) list_medium_line_t3_g3_t1_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t3_g3_t1

0x40b1,	// (0x00057f91) list_medium_line_t3_g3_t2_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t3_g3_t2

0x40b1,	// (0x00057f91) list_medium_line_t3_g3_t3_ParamLimits

0x40b1,	// (0x00057f91) list_medium_line_t3_g3_t3

0x0002,

0xfcca,	// (0x00063baa) list_medium_line_t3_g3_t_ParamLimits

0xfcca,	// (0x00063baa) list_medium_line_t3_g3_t

0xc087,	// (0x0005ff67) list_medium_line_right_iconx2_g1

0xc087,	// (0x0005ff67) list_medium_line_right_iconx2_g2

0x0001,

0xfcd8,	// (0x00063bb8) list_medium_line_right_iconx2_g

0xe222,	// (0x00062102) list_medium_line_right_iconx2_t1

0xc087,	// (0x0005ff67) list_medium_line_t2_right_iconx2_g1

0xc087,	// (0x0005ff67) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcd8,	// (0x00063bb8) list_medium_line_t2_right_iconx2_g

0x4fd5,	// (0x00058eb5) list_medium_line_t2_right_iconx2_t1

0x4fd5,	// (0x00058eb5) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc6b,	// (0x00063b4b) list_medium_line_t2_right_iconx2_t

0x4fd5,	// (0x00058eb5) list_medium_line_x4_t4_t1

0x4fd5,	// (0x00058eb5) list_medium_line_x4_t4_t2

0x4fd5,	// (0x00058eb5) list_medium_line_x4_t4_t3

0x4fd5,	// (0x00058eb5) list_medium_line_x4_t4_t4

0x0003,

0xf2a2,	// (0x00063182) list_medium_line_x4_t4_t

0x9caa,	// (0x0005db8a) tport_appsw_pane_ParamLimits

0x9caa,	// (0x0005db8a) tport_appsw_pane

0x9cbb,	// (0x0005db9b) tport_contact_pane_ParamLimits

0x9cbb,	// (0x0005db9b) tport_contact_pane

0x9ccf,	// (0x0005dbaf) tport_listscroll_pane_ParamLimits

0x9ccf,	// (0x0005dbaf) tport_listscroll_pane

0x9ce7,	// (0x0005dbc7) cell_tport_appsw_pane_ParamLimits

0x9ce7,	// (0x0005dbc7) cell_tport_appsw_pane

0x2327,	// (0x00056207) tport_appsw_pane_g1_ParamLimits

0x2327,	// (0x00056207) tport_appsw_pane_g1

0xe231,	// (0x00062111) tport_contact_pane_g1

0xe23a,	// (0x0006211a) tport_contact_pane_t1

0xe248,	// (0x00062128) tport_contact_pane_t2

0x0001,

0xfcdd,	// (0x00063bbd) tport_contact_pane_t

0xe256,	// (0x00062136) list_tport_pane

0xc099,	// (0x0005ff79) scroll_pane_cp_030

0xe267,	// (0x00062147) cell_tport_appsw_pane_g1

0xe277,	// (0x00062157) cell_tport_appsw_pane_t1

0xe285,	// (0x00062165) grid_highlight_pane_cp019

0x9d1d,	// (0x0005dbfd) list_tport_double_graphic_pane_ParamLimits

0x9d1d,	// (0x0005dbfd) list_tport_double_graphic_pane

0x106c,	// (0x00054f4c) list_highlight_pane_cp023_ParamLimits

0x106c,	// (0x00054f4c) list_highlight_pane_cp023

0x9d2a,	// (0x0005dc0a) list_tport_double_graphic_pane_g1_ParamLimits

0x9d2a,	// (0x0005dc0a) list_tport_double_graphic_pane_g1

0x9d37,	// (0x0005dc17) list_tport_double_graphic_pane_t1_ParamLimits

0x9d37,	// (0x0005dc17) list_tport_double_graphic_pane_t1

0x9d4c,	// (0x0005dc2c) list_tport_double_graphic_pane_t2_ParamLimits

0x9d4c,	// (0x0005dc2c) list_tport_double_graphic_pane_t2

0x0001,

0xfce9,	// (0x00063bc9) list_tport_double_graphic_pane_t_ParamLimits

0xfce9,	// (0x00063bc9) list_tport_double_graphic_pane_t

0xb747,	// (0x0005f627) main_cale_note_pane

0x7d90,	// (0x0005bc70) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7d90,	// (0x0005bc70) cell_vitu2_function_top_wide_pane_cp01

0x9578,	// (0x0005d458) wait_bar_pane_cp05_ParamLimits

0x106c,	// (0x00054f4c) listscroll_cmail_pane

0xe295,	// (0x00062175) list_cmail_pane

0x9d5e,	// (0x0005dc3e) list_cmail_body_pane

0x9d5e,	// (0x0005dc3e) list_single_cmail_header_caption_pane

0x9d75,	// (0x0005dc55) list_single_cmail_header_detail_pane_ParamLimits

0x9d75,	// (0x0005dc55) list_single_cmail_header_detail_pane

0xe2b8,	// (0x00062198) list_single_cmail_header_caption_pane_t1

0x9da0,	// (0x0005dc80) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9da0,	// (0x0005dc80) list_single_cmail_header_detail_pane_g1

0xe2cf,	// (0x000621af) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe2cf,	// (0x000621af) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcee,	// (0x00063bce) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcee,	// (0x00063bce) list_single_cmail_header_detail_pane_g

0x9db6,	// (0x0005dc96) list_single_cmail_header_detail_pane_t1_ParamLimits

0x9db6,	// (0x0005dc96) list_single_cmail_header_detail_pane_t1

0xe30c,	// (0x000621ec) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe30c,	// (0x000621ec) list_single_cmail_header_editor_pane_bg

0xe323,	// (0x00062203) list_cmail_body_pane_g1

0xe32c,	// (0x0006220c) list_cmail_body_pane_t1

0xcefd,	// (0x00060ddd) list_single_cmail_header_editor_pane_bg_g1

0x0839,	// (0x00054719) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcf0d,	// (0x00060ded) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcf05,	// (0x00060de5) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd13d,	// (0x0006101d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcf2d,	// (0x00060e0d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcf1d,	// (0x00060dfd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcf25,	// (0x00060e05) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0819,	// (0x000546f9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9df2,	// (0x0005dcd2) calenote_gesture_pane_ParamLimits

0x9df2,	// (0x0005dcd2) calenote_gesture_pane

0x9e0e,	// (0x0005dcee) calenote_window_pane_ParamLimits

0x9e0e,	// (0x0005dcee) calenote_window_pane

0xe33a,	// (0x0006221a) popup_note_window_cp01

0x9e2a,	// (0x0005dd0a) calenote_swipe_1_pane_ParamLimits

0x9e2a,	// (0x0005dd0a) calenote_swipe_1_pane

0x9933,	// (0x0005d813) calenote_swipe_2_pane_ParamLimits

0x9933,	// (0x0005d813) calenote_swipe_2_pane

0xdfe1,	// (0x00061ec1) calenote_swipe_1_pane_g1_ParamLimits

0xdfe1,	// (0x00061ec1) calenote_swipe_1_pane_g1

0xdfee,	// (0x00061ece) calenote_swipe_1_pane_g2_ParamLimits

0xdfee,	// (0x00061ece) calenote_swipe_1_pane_g2

0x0001,

0xfc53,	// (0x00063b33) calenote_swipe_1_pane_g_ParamLimits

0xfc53,	// (0x00063b33) calenote_swipe_1_pane_g

0xe34c,	// (0x0006222c) calenote_swipe_1_pane_t1_ParamLimits

0xe34c,	// (0x0006222c) calenote_swipe_1_pane_t1

0xdfe1,	// (0x00061ec1) calenote_swipe_2_pane_g1_ParamLimits

0xdfe1,	// (0x00061ec1) calenote_swipe_2_pane_g1

0xe36b,	// (0x0006224b) calenote_swipe_2_pane_g2_ParamLimits

0xe36b,	// (0x0006224b) calenote_swipe_2_pane_g2

0x0001,

0xfcfa,	// (0x00063bda) calenote_swipe_2_pane_g_ParamLimits

0xfcfa,	// (0x00063bda) calenote_swipe_2_pane_g

0xe377,	// (0x00062257) calenote_swipe_2_pane_t1_ParamLimits

0xe377,	// (0x00062257) calenote_swipe_2_pane_t1

0xb747,	// (0x0005f627) main_mup_navstr_pane

0x6dbe,	// (0x0005ac9e) main_mup3_pane_t7_ParamLimits

0x6dbe,	// (0x0005ac9e) main_mup3_pane_t7

0xcbe0,	// (0x00060ac0) main_mp4_pane_g6_ParamLimits

0xcbe0,	// (0x00060ac0) main_mp4_pane_g6

0xedfa,	// (0x00062cda) main_image3_pane_t4_ParamLimits

0xedfa,	// (0x00062cda) main_image3_pane_t4

0x9e3f,	// (0x0005dd1f) popup_navstr_preview_pane_ParamLimits

0x9e3f,	// (0x0005dd1f) popup_navstr_preview_pane

0x9e4f,	// (0x0005dd2f) scroll_navstr_pane_ParamLimits

0x9e4f,	// (0x0005dd2f) scroll_navstr_pane

0xb747,	// (0x0005f627) bg_popup_preview_window_pane_cp04

0xe39e,	// (0x0006227e) popup_navstr_preview_pane_t1

0x9e63,	// (0x0005dd43) scroll_navstr_pane_g1_ParamLimits

0x9e63,	// (0x0005dd43) scroll_navstr_pane_g1

0x9e77,	// (0x0005dd57) scroll_navstr_pane_t1_ParamLimits

0x9e77,	// (0x0005dd57) scroll_navstr_pane_t1

0xe343,	// (0x00062223) bg_button_pane_cp014

0xe343,	// (0x00062223) bg_button_pane_cp030

0xdf45,	// (0x00061e25) list_double_fisheye_pane_g4_ParamLimits

0xdf45,	// (0x00061e25) list_double_fisheye_pane_g4

0xdf51,	// (0x00061e31) list_double_fisheye_pane_g5_ParamLimits

0xdf51,	// (0x00061e31) list_double_fisheye_pane_g5

0xe2ac,	// (0x0006218c) sp_fs_scroll_pane_cp03

0xe0bf,	// (0x00061f9f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe0cb,	// (0x00061fab) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc70,	// (0x00063b50) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9a07,	// (0x0005d8e7) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe2a4,	// (0x00062184) sp_fs_scroll_pane_cp02

0xc0f3,	// (0x0005ffd3) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc0f3,	// (0x0005ffd3) popup_sp_fs_calendar_preview_list_single_pane

0xb747,	// (0x0005f627) main_cam6_pano_pane

0xb7a2,	// (0x0005f682) main_mup3_pane_ParamLimits

0xb747,	// (0x0005f627) main_phacti_pane

0x946b,	// (0x0005d34b) bg_button_pane_cp11

0x9483,	// (0x0005d363) main_mobtv_info_pane_g2_ParamLimits

0x9483,	// (0x0005d363) main_mobtv_info_pane_g2

0x0001,

0xfbd0,	// (0x00063ab0) main_mobtv_info_pane_g_ParamLimits

0xfbd0,	// (0x00063ab0) main_mobtv_info_pane_g

0x9638,	// (0x0005d518) sc_clock_pane_t5_ParamLimits

0x9638,	// (0x0005d518) sc_clock_pane_t5

0x96e3,	// (0x0005d5c3) main_radioblah_pane_g1_ParamLimits

0xdeaa,	// (0x00061d8a) main_radioblah_pane_t3_ParamLimits

0xdeaa,	// (0x00061d8a) main_radioblah_pane_t3

0xdec2,	// (0x00061da2) main_radioblah_pane_t4_ParamLimits

0xdec2,	// (0x00061da2) main_radioblah_pane_t4

0x970b,	// (0x0005d5eb) main_radioblah_text_pane_ParamLimits

0x970b,	// (0x0005d5eb) main_radioblah_text_pane

0x971d,	// (0x0005d5fd) main_radioblah_info_pane_g1_ParamLimits

0x97b0,	// (0x0005d690) main_radioblah_info_pane_t4_ParamLimits

0x97b0,	// (0x0005d690) main_radioblah_info_pane_t4

0x106c,	// (0x00054f4c) main_sp_fs_calendar_pane

0x9e8d,	// (0x0005dd6d) main_phacti_pane_g1

0x9e95,	// (0x0005dd75) phacti_note_pane_ParamLimits

0x9e95,	// (0x0005dd75) phacti_note_pane

0xe3b5,	// (0x00062295) phacti_term_pane_ParamLimits

0xe3b5,	// (0x00062295) phacti_term_pane

0xe3ca,	// (0x000622aa) phacti_note_pane_t1_ParamLimits

0xe3ca,	// (0x000622aa) phacti_note_pane_t1

0xe3e1,	// (0x000622c1) phacti_term_pane_g1

0xe3e9,	// (0x000622c9) phacti_term_pane_t1_ParamLimits

0xe3e9,	// (0x000622c9) phacti_term_pane_t1

0xe413,	// (0x000622f3) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe41b,	// (0x000622fb) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd04,	// (0x00063be4) popup_sp_fs_calendar_preview_list_single_pane_g

0xe423,	// (0x00062303) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe423,	// (0x00062303) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe439,	// (0x00062319) aid_popup_sp_fs_bg_corner_pane

0x061b,	// (0x000544fb) popup_sp_fs_calendar_preview_bg_pane_g1

0xb747,	// (0x0005f627) popup_sp_fs_calendar_preview_bg_pane

0xe441,	// (0x00062321) popup_sp_fs_calendar_preview_list_pane

0x22ef,	// (0x000561cf) bg_main_sp_fs_cale_pane_ParamLimits

0x22ef,	// (0x000561cf) bg_main_sp_fs_cale_pane

0xe452,	// (0x00062332) listscroll_cale_mrui_pane_ParamLimits

0xe452,	// (0x00062332) listscroll_cale_mrui_pane

0xe467,	// (0x00062347) listscroll_sp_fs_schedule_track_pane

0xe470,	// (0x00062350) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe470,	// (0x00062350) main_sp_fs_ctrlbar_pane_cp01

0xe483,	// (0x00062363) main_sp_fs_ribbon_pane

0xe48b,	// (0x0006236b) popup_sp_fs_cale_preview_window

0x9ef8,	// (0x0005ddd8) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9ef8,	// (0x0005ddd8) list_single_sp_fs_schedule_track_pane

0x106c,	// (0x00054f4c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x106c,	// (0x00054f4c) bg_sp_fs_highlight_list_pane_cp03

0x9f0c,	// (0x0005ddec) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9f0c,	// (0x0005ddec) list_single_sp_fs_schedule_track_pane_g1

0x9f18,	// (0x0005ddf8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9f18,	// (0x0005ddf8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd09,	// (0x00063be9) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd09,	// (0x00063be9) list_single_sp_fs_schedule_track_pane_g

0x9f24,	// (0x0005de04) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9f24,	// (0x0005de04) list_single_sp_fs_schedule_track_pane_t1

0x9f3e,	// (0x0005de1e) sp_fs_schedule_track_pane_ParamLimits

0x9f3e,	// (0x0005de1e) sp_fs_schedule_track_pane

0xe49a,	// (0x0006237a) sp_fs_schedule_track_pane_g1

0xe4a2,	// (0x00062382) sp_fs_schedule_track_pane_g2

0xe4aa,	// (0x0006238a) sp_fs_schedule_track_pane_g3

0xe4b2,	// (0x00062392) sp_fs_schedule_track_pane_g4

0xe4ba,	// (0x0006239a) sp_fs_schedule_track_pane_g5

0x0004,

0xfd0e,	// (0x00063bee) sp_fs_schedule_track_pane_g

0xcefd,	// (0x00060ddd) bg_sp_fs_schedule_viewer_highlight_g1

0x0839,	// (0x00054719) bg_sp_fs_schedule_viewer_highlight_g2

0xcf05,	// (0x00060de5) bg_sp_fs_schedule_viewer_highlight_g3

0xcf0d,	// (0x00060ded) bg_sp_fs_schedule_viewer_highlight_g4

0xd13d,	// (0x0006101d) bg_sp_fs_schedule_viewer_highlight_g5

0xcf1d,	// (0x00060dfd) bg_sp_fs_schedule_viewer_highlight_g6

0xcf25,	// (0x00060e05) bg_sp_fs_schedule_viewer_highlight_g7

0xcf2d,	// (0x00060e0d) bg_sp_fs_schedule_viewer_highlight_g8

0x0819,	// (0x000546f9) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd19,	// (0x00063bf9) bg_sp_fs_schedule_viewer_highlight_g

0xb747,	// (0x0005f627) bg_main_sp_fs_ribbon_pane

0x9f4f,	// (0x0005de2f) main_sp_fs_ribbon_pane_g1

0xe4c2,	// (0x000623a2) main_sp_fs_ribbon_pane_t1

0x9f58,	// (0x0005de38) main_sp_fs_ribbon_pane_t2

0xe4d1,	// (0x000623b1) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd2c,	// (0x00063c0c) main_sp_fs_ribbon_pane_t

0xe4e0,	// (0x000623c0) main_sp_fs_ribbon_scheduler_pane

0xe4e8,	// (0x000623c8) bg_main_sp_fs_ribbon_pane_g1

0xe4f1,	// (0x000623d1) bg_main_sp_fs_ribbon_pane_g2

0xe4fa,	// (0x000623da) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd33,	// (0x00063c13) bg_main_sp_fs_ribbon_pane_g

0xe502,	// (0x000623e2) main_sp_fs_ribbon_scheduler_pane_g1

0xe50b,	// (0x000623eb) main_sp_fs_ribbon_scheduler_pane_g2

0xe514,	// (0x000623f4) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd3a,	// (0x00063c1a) main_sp_fs_ribbon_scheduler_pane_g

0xe51d,	// (0x000623fd) list_cale_mrui_pane

0x9f67,	// (0x0005de47) sp_fs_scroll_pane_cp07_ParamLimits

0x9f67,	// (0x0005de47) sp_fs_scroll_pane_cp07

0x9f7f,	// (0x0005de5f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9f7f,	// (0x0005de5f) bg_sp_fs_schedule_viewer_highlight

0xe52a,	// (0x0006240a) list_single_sp_fs_schedule_track_pane_cp01

0xe532,	// (0x00062412) list_sp_fs_schedule_track_pane

0xe53a,	// (0x0006241a) sp_fs_scroll_pane_cp06_ParamLimits

0xe53a,	// (0x0006241a) sp_fs_scroll_pane_cp06

0x061b,	// (0x000544fb) bgmain_sp_fs_calendar_pane_g1

0x9f8f,	// (0x0005de6f) list_single_cale_mrui_pane_ParamLimits

0x9f8f,	// (0x0005de6f) list_single_cale_mrui_pane

0xe54c,	// (0x0006242c) list_single_cale_mrui_row_pane_ParamLimits

0xe54c,	// (0x0006242c) list_single_cale_mrui_row_pane

0x9fb0,	// (0x0005de90) list_single_cale_mrui_row_pane_g1_ParamLimits

0x9fb0,	// (0x0005de90) list_single_cale_mrui_row_pane_g1

0x9fe8,	// (0x0005dec8) list_single_cale_mrui_row_pane_t1_ParamLimits

0x9fe8,	// (0x0005dec8) list_single_cale_mrui_row_pane_t1

0x9ffa,	// (0x0005deda) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9ffa,	// (0x0005deda) list_single_cale_mrui_row_pane_t2

0xa060,	// (0x0005df40) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa060,	// (0x0005df40) list_single_cale_mrui_row_pane_t3

0xa08f,	// (0x0005df6f) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa08f,	// (0x0005df6f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd48,	// (0x00063c28) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd48,	// (0x00063c28) list_single_cale_mrui_row_pane_t

0xa0be,	// (0x0005df9e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa0be,	// (0x0005df9e) list_single_cmail_header_editor_pane_bg_cp01

0xa0e2,	// (0x0005dfc2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa0e2,	// (0x0005dfc2) list_single_cmail_header_editor_pane_bg_cp02

0xa100,	// (0x0005dfe0) main_radioblah_text_pane_t1_ParamLimits

0xa100,	// (0x0005dfe0) main_radioblah_text_pane_t1

0xe56f,	// (0x0006244f) cam6_indi_pane_cp01

0xe577,	// (0x00062457) cam6_mode_pane_cp01

0xe57f,	// (0x0006245f) cam6_pano_pane

0xe588,	// (0x00062468) cam6_zoom_pane_cp01

0xe590,	// (0x00062470) cam6_pano_image_pane

0xe599,	// (0x00062479) cam6_pano_pane_g1

0xdc11,	// (0x00061af1) cam6_pano_pane_g2

0xe5a2,	// (0x00062482) cam6_pano_pane_g3

0xe5ab,	// (0x0006248b) cam6_pano_pane_g4

0xc8e3,	// (0x000607c3) cam6_pano_pane_g5

0xe5b4,	// (0x00062494) cam6_pano_pane_g6

0xe5bc,	// (0x0006249c) cam6_pano_pane_g7

0xe5c4,	// (0x000624a4) cam6_pano_pane_g8

0xe5cd,	// (0x000624ad) cam6_pano_pane_g9

0x0008,

0xfd51,	// (0x00063c31) cam6_pano_pane_g

0xb747,	// (0x0005f627) main_browser_tag_pane

0xe396,	// (0x00062276) grid_navstr_albumart_pane

0xe5d6,	// (0x000624b6) cell_navstr_albumart_pane_ParamLimits

0xe5d6,	// (0x000624b6) cell_navstr_albumart_pane

0x1107,	// (0x00054fe7) cell_navstr_albumart_pane_g1

0x213b,	// (0x0005601b) cell_navstr_albumart_pane_g2

0x214b,	// (0x0005602b) cell_navstr_albumart_pane_g3

0x2143,	// (0x00056023) cell_navstr_albumart_pane_g4

0x0003,

0xfd64,	// (0x00063c44) cell_navstr_albumart_pane_g

0xa119,	// (0x0005dff9) bt_list_pane_ParamLimits

0xa119,	// (0x0005dff9) bt_list_pane

0xa12c,	// (0x0005e00c) bt_list_pane_t1

0xa13b,	// (0x0005e01b) bt_list_pane_t2

0x0001,

0xfd6d,	// (0x00063c4d) bt_list_pane_t

0xb747,	// (0x0005f627) main_cale_prevew_pane

0xa14a,	// (0x0005e02a) popup_cale_preview_window_ParamLimits

0xa14a,	// (0x0005e02a) popup_cale_preview_window

0x106c,	// (0x00054f4c) bg_popup_preview_window_pane_cp05_ParamLimits

0x106c,	// (0x00054f4c) bg_popup_preview_window_pane_cp05

0xe5ed,	// (0x000624cd) list_cale_preview_pane_ParamLimits

0xe5ed,	// (0x000624cd) list_cale_preview_pane

0xa15f,	// (0x0005e03f) list_double_cale_preview_pane_ParamLimits

0xa15f,	// (0x0005e03f) list_double_cale_preview_pane

0xa170,	// (0x0005e050) list_single_cale_preview_pane_ParamLimits

0xa170,	// (0x0005e050) list_single_cale_preview_pane

0xe5f9,	// (0x000624d9) list_single_cale_preview_pane_g1

0xe601,	// (0x000624e1) list_single_cale_preview_pane_t1_ParamLimits

0xe601,	// (0x000624e1) list_single_cale_preview_pane_t1

0xa184,	// (0x0005e064) list_double_cale_preview_pane_g1

0xa18c,	// (0x0005e06c) list_double_cale_preview_pane_t1_ParamLimits

0xa18c,	// (0x0005e06c) list_double_cale_preview_pane_t1

0xa1a1,	// (0x0005e081) list_double_cale_preview_pane_t2_ParamLimits

0xa1a1,	// (0x0005e081) list_double_cale_preview_pane_t2

0x0001,

0xfd72,	// (0x00063c52) list_double_cale_preview_pane_t_ParamLimits

0xfd72,	// (0x00063c52) list_double_cale_preview_pane_t

0xb747,	// (0x0005f627) main_ezdial_pane

0x106c,	// (0x00054f4c) main_sp_fs_email_pane_ParamLimits

0x997d,	// (0x0005d85d) cmail_ddmenu_btn01_pane_ParamLimits

0x997d,	// (0x0005d85d) cmail_ddmenu_btn01_pane

0x9990,	// (0x0005d870) cmail_ddmenu_btn02_pane_ParamLimits

0x9990,	// (0x0005d870) cmail_ddmenu_btn02_pane

0x99b3,	// (0x0005d893) cmail_ddmenu_btn03_pane_ParamLimits

0x99b3,	// (0x0005d893) cmail_ddmenu_btn03_pane

0x9a50,	// (0x0005d930) main_sp_fs_ctrlbar_pane_ParamLimits

0x9a71,	// (0x0005d951) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9d5e,	// (0x0005dc3e) list_cmail_body_pane_ParamLimits

0xe2c6,	// (0x000621a6) bg_button_pane_cp12

0xe2db,	// (0x000621bb) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe2db,	// (0x000621bb) list_single_cmail_header_detail_pane_g3

0xe2e8,	// (0x000621c8) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe2e8,	// (0x000621c8) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcf5,	// (0x00063bd5) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcf5,	// (0x00063bd5) list_single_cmail_header_detail_pane_t

0xe3fe,	// (0x000622de) phacti_term_pane_t2_ParamLimits

0xe3fe,	// (0x000622de) phacti_term_pane_t2

0x0001,

0xfcff,	// (0x00063bdf) phacti_term_pane_t_ParamLimits

0xfcff,	// (0x00063bdf) phacti_term_pane_t

0xe616,	// (0x000624f6) aid_size_list_single_double

0xa1b9,	// (0x0005e099) popup_ezdial_listscroll_window

0xa1cf,	// (0x0005e0af) popup_number_entry_window_cp01

0x059a,	// (0x0005447a) bg_popup_call_pane_cp09

0xe622,	// (0x00062502) ezdial_list_pane

0xe62a,	// (0x0006250a) scroll_pane_cp23

0x22ef,	// (0x000561cf) bg_button_pane_cp028_ParamLimits

0x22ef,	// (0x000561cf) bg_button_pane_cp028

0xa1db,	// (0x0005e0bb) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa1db,	// (0x0005e0bb) cmail_ddmenu_btn01_pane_g1

0xa1e7,	// (0x0005e0c7) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa1e7,	// (0x0005e0c7) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd77,	// (0x00063c57) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd77,	// (0x00063c57) cmail_ddmenu_btn01_pane_g

0xe632,	// (0x00062512) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe632,	// (0x00062512) cmail_ddmenu_btn01_pane_t1

0x22ef,	// (0x000561cf) bg_button_pane_cp029_ParamLimits

0x22ef,	// (0x000561cf) bg_button_pane_cp029

0xa1f3,	// (0x0005e0d3) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa1f3,	// (0x0005e0d3) cmail_ddmenu_btn02_pane_g1

0xa20b,	// (0x0005e0eb) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa20b,	// (0x0005e0eb) cmail_ddmenu_btn02_pane_t1

0x106c,	// (0x00054f4c) bg_button_pane_cp031_ParamLimits

0x106c,	// (0x00054f4c) bg_button_pane_cp031

0xa1f3,	// (0x0005e0d3) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa1f3,	// (0x0005e0d3) cmail_ddmenu_btn03_pane_g1

0xa20b,	// (0x0005e0eb) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa20b,	// (0x0005e0eb) cmail_ddmenu_btn03_pane_t1

0x76ca,	// (0x0005b5aa) cell_dialer2_keypad_pane_t1_ParamLimits

0x76e4,	// (0x0005b5c4) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x76e4,	// (0x0005b5c4) cell_dialer2_keypad_pane_t1_copy1

0x92d7,	// (0x0005d1b7) ncimui_group_button_pane

0x106c,	// (0x00054f4c) main_sp_fs_calendar_pane_ParamLimits

0x9d5e,	// (0x0005dc3e) list_single_cmail_header_caption_pane_ParamLimits

0xe449,	// (0x00062329) aid_recal_txt_sm_pane

0xb747,	// (0x0005f627) mian_recal_day_pane

0xe48b,	// (0x0006236b) popup_sp_fs_cale_preview_window_ParamLimits

0xe647,	// (0x00062527) list_recal_day_pane

0xe689,	// (0x00062569) list_single_recal_day_pane_ParamLimits

0xe689,	// (0x00062569) list_single_recal_day_pane

0xe69b,	// (0x0006257b) list_single_recal_day_pane_g1_ParamLimits

0xe69b,	// (0x0006257b) list_single_recal_day_pane_g1

0xe6a7,	// (0x00062587) list_single_recal_day_pane_g2_ParamLimits

0xe6a7,	// (0x00062587) list_single_recal_day_pane_g2

0xe6b3,	// (0x00062593) list_single_recal_day_pane_g3_ParamLimits

0xe6b3,	// (0x00062593) list_single_recal_day_pane_g3

0xa22f,	// (0x0005e10f) list_single_recal_day_pane_g4_ParamLimits

0xa22f,	// (0x0005e10f) list_single_recal_day_pane_g4

0xe6bf,	// (0x0006259f) list_single_recal_day_pane_g5_ParamLimits

0xe6bf,	// (0x0006259f) list_single_recal_day_pane_g5

0xa247,	// (0x0005e127) list_single_recal_day_pane_g6_ParamLimits

0xa247,	// (0x0005e127) list_single_recal_day_pane_g6

0x0004,

0xfd86,	// (0x00063c66) list_single_recal_day_pane_g_ParamLimits

0xfd86,	// (0x00063c66) list_single_recal_day_pane_g

0xe6d3,	// (0x000625b3) list_single_recal_day_pane_t1

0xa253,	// (0x0005e133) list_single_recal_day_pane_t2

0x0001,

0xfd91,	// (0x00063c71) list_single_recal_day_pane_t

0xa265,	// (0x0005e145) ncimui_query_button_pane_ParamLimits

0xa265,	// (0x0005e145) ncimui_query_button_pane

0xa275,	// (0x0005e155) ncimui_query_button_pane_t1_ParamLimits

0xa275,	// (0x0005e155) ncimui_query_button_pane_t1

0xe6e5,	// (0x000625c5) ncimui_query_button_pane_t2_ParamLimits

0xe6e5,	// (0x000625c5) ncimui_query_button_pane_t2

0x0001,

0xfd96,	// (0x00063c76) ncimui_query_button_pane_t_ParamLimits

0xfd96,	// (0x00063c76) ncimui_query_button_pane_t

0xa288,	// (0x0005e168) query_button_pane_ParamLimits

0xa288,	// (0x0005e168) query_button_pane

0xb747,	// (0x0005f627) bg_button_pane_cp0028

0xe6f8,	// (0x000625d8) query_button_pane_t1

0x5e15,	// (0x00059cf5) main_tport_pane_ParamLimits

0x9c71,	// (0x0005db51) bg_popup_window_pane_cp01_ParamLimits

0x9c71,	// (0x0005db51) bg_popup_window_pane_cp01

0x9c88,	// (0x0005db68) heading_pane_cp08_ParamLimits

0x9c88,	// (0x0005db68) heading_pane_cp08

0x9c99,	// (0x0005db79) heading_pane_cp07_ParamLimits

0x9c99,	// (0x0005db79) heading_pane_cp07

0xe267,	// (0x00062147) cell_tport_appsw_pane_g2

0x0002,

0xfce2,	// (0x00063bc2) cell_tport_appsw_pane_g

0x54b3,	// (0x00059393) input_candi_list_open_g1

0x09e6,	// (0x000548c6) list_cale_time_pane_g6_ParamLimits

0x09e6,	// (0x000548c6) list_cale_time_pane_g6

0x684f,	// (0x0005a72f) aid_size_touch_calib_1_ParamLimits

0x684f,	// (0x0005a72f) aid_size_touch_calib_1

0x6861,	// (0x0005a741) aid_size_touch_calib_2_ParamLimits

0x6861,	// (0x0005a741) aid_size_touch_calib_2

0x6877,	// (0x0005a757) aid_size_touch_calib_3_ParamLimits

0x6877,	// (0x0005a757) aid_size_touch_calib_3

0x688f,	// (0x0005a76f) aid_size_touch_calib_4_ParamLimits

0x688f,	// (0x0005a76f) aid_size_touch_calib_4

0x68a3,	// (0x0005a783) main_touch_calib_button_group_pane_ParamLimits

0x68a3,	// (0x0005a783) main_touch_calib_button_group_pane

0x68bb,	// (0x0005a79b) main_touch_calib_pane_g1_ParamLimits

0x68cd,	// (0x0005a7ad) main_touch_calib_pane_g2_ParamLimits

0x68df,	// (0x0005a7bf) main_touch_calib_pane_g3_ParamLimits

0x68f1,	// (0x0005a7d1) main_touch_calib_pane_g4_ParamLimits

0xf6dd,	// (0x000635bd) main_touch_calib_pane_g_ParamLimits

0x6903,	// (0x0005a7e3) main_touch_calib_pane_t1_ParamLimits

0x691b,	// (0x0005a7fb) main_touch_calib_pane_t2_ParamLimits

0x6933,	// (0x0005a813) main_touch_calib_pane_t3_ParamLimits

0x6945,	// (0x0005a825) main_touch_calib_pane_t4_ParamLimits

0x6957,	// (0x0005a837) main_touch_calib_pane_t5_ParamLimits

0xf6e6,	// (0x000635c6) main_touch_calib_pane_t_ParamLimits

0xc6e4,	// (0x000605c4) list_single_fp_cale_pane_g3_ParamLimits

0xc6e4,	// (0x000605c4) list_single_fp_cale_pane_g3

0xb7a2,	// (0x0005f682) bg_button_pane_cp012_ParamLimits

0xb7a2,	// (0x0005f682) bg_vkb2_func_pane_cp03_ParamLimits

0x8541,	// (0x0005c421) cell_vitu2_function_top_pane_g1_ParamLimits

0xb7a2,	// (0x0005f682) bg_vkb2_func_pane_cp04_ParamLimits

0x9267,	// (0x0005d147) main_ncimui_button_group_pane_ParamLimits

0x9267,	// (0x0005d147) main_ncimui_button_group_pane

0x92c5,	// (0x0005d1a5) main_ncimui_pane_t3_ParamLimits

0x92c5,	// (0x0005d1a5) main_ncimui_pane_t3

0xe3ac,	// (0x0006228c) phacti_button_group_pane

0xe616,	// (0x000624f6) aid_size_list_single_double_ParamLimits

0xa1b9,	// (0x0005e099) popup_ezdial_listscroll_window_ParamLimits

0xa1cf,	// (0x0005e0af) popup_number_entry_window_cp01_ParamLimits

0xa29a,	// (0x0005e17a) phacti_button_pane_ParamLimits

0xa29a,	// (0x0005e17a) phacti_button_pane

0xb747,	// (0x0005f627) bg_button_pane_cp14

0xe706,	// (0x000625e6) phacti_button_pane_t1

0xa2a9,	// (0x0005e189) main_touch_calib_button_pane_ParamLimits

0xa2a9,	// (0x0005e189) main_touch_calib_button_pane

0xbf46,	// (0x0005fe26) bg_button_pane_cp18_ParamLimits

0xbf46,	// (0x0005fe26) bg_button_pane_cp18

0xa2c4,	// (0x0005e1a4) main_touch_calib_button_pane_t1_ParamLimits

0xa2c4,	// (0x0005e1a4) main_touch_calib_button_pane_t1

0xa2da,	// (0x0005e1ba) main_touch_calib_button_pane_t2_ParamLimits

0xa2da,	// (0x0005e1ba) main_touch_calib_button_pane_t2

0x0001,

0xfd9b,	// (0x00063c7b) main_touch_calib_button_pane_t_ParamLimits

0xfd9b,	// (0x00063c7b) main_touch_calib_button_pane_t

0xb747,	// (0x0005f627) cell_ncimui_button_pane

0xb747,	// (0x0005f627) bg_button_pane_cp032

0xe714,	// (0x000625f4) cell_ncimui_button_pane_t1

0xedda,	// (0x00062cba) image3_infobar_pane_ParamLimits

0xedda,	// (0x00062cba) image3_infobar_pane

0x9660,	// (0x0005d540) fs_bigclock_status_pane_ParamLimits

0x9660,	// (0x0005d540) fs_bigclock_status_pane

0x966d,	// (0x0005d54d) main_fs_bigclock_clock_pane_ParamLimits

0x966d,	// (0x0005d54d) main_fs_bigclock_clock_pane

0x968f,	// (0x0005d56f) main_fs_bigclock_indi_pane_ParamLimits

0x968f,	// (0x0005d56f) main_fs_bigclock_indi_pane

0x96b9,	// (0x0005d599) main_fs_bigclock_swipe_pane_ParamLimits

0x96b9,	// (0x0005d599) main_fs_bigclock_swipe_pane

0xb747,	// (0x0005f627) main_fs_clock_dumped_data

0xdd1e,	// (0x00061bfe) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdd1e,	// (0x00061bfe) list_single_fs_bigclock_indicator_pane_g1

0xdd38,	// (0x00061c18) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdd38,	// (0x00061c18) list_single_fs_bigclock_indicator_pane_g2

0xdd52,	// (0x00061c32) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdd52,	// (0x00061c32) list_single_fs_bigclock_indicator_pane_g3

0xdd6c,	// (0x00061c4c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdd6c,	// (0x00061c4c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc04,	// (0x00063ae4) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc04,	// (0x00063ae4) list_single_fs_bigclock_indicator_pane_g

0xdd95,	// (0x00061c75) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdd95,	// (0x00061c75) list_single_fs_bigclock_indicator_pane_t1

0xddbd,	// (0x00061c9d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xddbd,	// (0x00061c9d) list_single_fs_bigclock_indicator_pane_t2

0xdde5,	// (0x00061cc5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdde5,	// (0x00061cc5) list_single_fs_bigclock_indicator_pane_t3

0xde0d,	// (0x00061ced) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xde0d,	// (0x00061ced) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc0f,	// (0x00063aef) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc0f,	// (0x00063aef) list_single_fs_bigclock_indicator_pane_t

0xe722,	// (0x00062602) image3_infobar_fav_pane_ParamLimits

0xe722,	// (0x00062602) image3_infobar_fav_pane

0xe732,	// (0x00062612) image3_infobar_loc_pane_ParamLimits

0xe732,	// (0x00062612) image3_infobar_loc_pane

0xe746,	// (0x00062626) image3_infobar_time_pane_ParamLimits

0xe746,	// (0x00062626) image3_infobar_time_pane

0x061b,	// (0x000544fb) image3_infobar_time_pane_g1

0xe756,	// (0x00062636) image3_infobar_time_pane_t1

0x061b,	// (0x000544fb) image3_infobar_loc_pane_g1

0xe764,	// (0x00062644) image3_infobar_loc_pane_g2

0x0001,

0xfda0,	// (0x00063c80) image3_infobar_loc_pane_g

0xe76c,	// (0x0006264c) image3_infobar_loc_pane_t1

0x061b,	// (0x000544fb) image3_infobar_fav_pane_g1

0xe77a,	// (0x0006265a) image3_infobar_fav_pane_g2

0x0001,

0xfda5,	// (0x00063c85) image3_infobar_fav_pane_g

0xe782,	// (0x00062662) fs_bigclock_status_battery_pane

0xe78b,	// (0x0006266b) fs_bigclock_status_signal_pane

0xe794,	// (0x00062674) fs_bigclock_status_title_pane

0xe79d,	// (0x0006267d) fs_bigclock_status_signal_pane_g1

0xe7a6,	// (0x00062686) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdaa,	// (0x00063c8a) fs_bigclock_status_signal_pane_g

0xe7ae,	// (0x0006268e) fs_bigclock_status_battery_pane_g1

0xe7b7,	// (0x00062697) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdaf,	// (0x00063c8f) fs_bigclock_status_battery_pane_g

0xe7bf,	// (0x0006269f) fs_bigclock_status_title_pane_t1

0xa2f8,	// (0x0005e1d8) main_fs_bigclock_clock_pane_g1

0xa30a,	// (0x0005e1ea) main_fs_bigclock_clock_pane_g2

0xa31b,	// (0x0005e1fb) main_fs_bigclock_clock_pane_g3

0xa31b,	// (0x0005e1fb) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdb4,	// (0x00063c94) main_fs_bigclock_clock_pane_g

0xa32e,	// (0x0005e20e) main_fs_bigclock_clock_pane_t1

0xa349,	// (0x0005e229) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdbd,	// (0x00063c9d) main_fs_bigclock_clock_pane_t

0xe7cd,	// (0x000626ad) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe7cd,	// (0x000626ad) list_single_fs_bigclock_indicator_pane

0xe7de,	// (0x000626be) list_single_fs_bigclock_pane_ParamLimits

0xe7de,	// (0x000626be) list_single_fs_bigclock_pane

0xe804,	// (0x000626e4) main_fs_bigclock_indicator_pane_t1

0xe813,	// (0x000626f3) list_single_fs_bigclock_pane_g1

0xe81b,	// (0x000626fb) list_single_fs_bigclock_pane_t1

0x061b,	// (0x000544fb) main_fs_bigclock_swipe_pane_g1

0xe85b,	// (0x0006273b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdce,	// (0x00063cae) main_fs_bigclock_swipe_pane_g

0xe863,	// (0x00062743) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe863,	// (0x00062743) main_fs_bigclock_swipe_pane_t1

0x4ff3,	// (0x00058ed3) call_type_pane_ParamLimits

0xb747,	// (0x0005f627) main_btmg_pane

0x9fdc,	// (0x0005debc) list_single_cale_mrui_row_pane_g2_ParamLimits

0x9fdc,	// (0x0005debc) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd41,	// (0x00063c21) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd41,	// (0x00063c21) list_single_cale_mrui_row_pane_g

0xe670,	// (0x00062550) list_recal_vselct_arw_lo_pane

0xe678,	// (0x00062558) list_recal_vselct_arw_up_pane

0xe680,	// (0x00062560) list_recal_vselct_pane

0xe880,	// (0x00062760) btmg_button_pane

0xa3a9,	// (0x0005e289) main_btmg_pane_g1

0xb747,	// (0x0005f627) bg_button_pane_cp044

0xe888,	// (0x00062768) btmg_button_pane_t1

0x22db,	// (0x000561bb) aid_listscroll_gen

0x106c,	// (0x00054f4c) main_cntbar_detail_pane

0xe28d,	// (0x0006216d) list_cmail_folder_pane

0xe2ac,	// (0x0006218c) sp_fs_scroll_pane_cp03_ParamLimits

0x9d5e,	// (0x0005dc3e) list_single_fs_dyc_pane_cp01_ParamLimits

0x9d5e,	// (0x0005dc3e) list_single_fs_dyc_pane_cp01

0xe896,	// (0x00062776) aid_size_cmail_indent

0xe89f,	// (0x0006277f) list_single_dyc_row_pane_cp01

0xa3d9,	// (0x0005e2b9) cntbar_detail_list_pane_ParamLimits

0xa3d9,	// (0x0005e2b9) cntbar_detail_list_pane

0xa41f,	// (0x0005e2ff) main_cntbar_detail_cont_pane_ParamLimits

0xa41f,	// (0x0005e2ff) main_cntbar_detail_cont_pane

0xa433,	// (0x0005e313) scroll_pane_cp032_ParamLimits

0xa433,	// (0x0005e313) scroll_pane_cp032

0xa43f,	// (0x0005e31f) cntbar_detail_list_event_pane_ParamLimits

0xa43f,	// (0x0005e31f) cntbar_detail_list_event_pane

0xa3e9,	// (0x0005e2c9) cntbar_detail_list_shct_pane

0xe8a8,	// (0x00062788) aid_list_gen

0xc099,	// (0x0005ff79) aid_scroll

0xd458,	// (0x00061338) aid_size_touch_scroll_bar

0xd483,	// (0x00061363) aid_list_double

0x8b4a,	// (0x0005ca2a) aid_list_single

0x8b4a,	// (0x0005ca2a) aid_list_single_lg

0xa450,	// (0x0005e330) aid_list_z_g_a_sm

0xa458,	// (0x0005e338) aid_list_z_g_d

0xa460,	// (0x0005e340) aid_txt_z_prm

0xe8b1,	// (0x00062791) aid_txt_z_prm_cp01

0xe8bf,	// (0x0006279f) aid_txt_z_sec

0xa46e,	// (0x0005e34e) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa46e,	// (0x0005e34e) main_cntbar_detail_cont_pane_g1

0xa482,	// (0x0005e362) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa482,	// (0x0005e362) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdd3,	// (0x00063cb3) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdd3,	// (0x00063cb3) main_cntbar_detail_cont_pane_g

0xe8cd,	// (0x000627ad) main_cntbar_detail_cont_pane_t1

0xe8db,	// (0x000627bb) main_cntbar_detail_cont_pane_t2

0xe8e9,	// (0x000627c9) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdd8,	// (0x00063cb8) main_cntbar_detail_cont_pane_t

0xa492,	// (0x0005e372) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa492,	// (0x0005e372) cell_cntbar_detail_list_shct_pane

0xe8f7,	// (0x000627d7) cntbar_detail_list_shct_pane_g1

0xe900,	// (0x000627e0) cntbar_detail_list_shct_pane_g2

0x0001,

0xfddf,	// (0x00063cbf) cntbar_detail_list_shct_pane_g

0xa4a4,	// (0x0005e384) cntbar_detail_list_event_pane_g1_ParamLimits

0xa4a4,	// (0x0005e384) cntbar_detail_list_event_pane_g1

0xa4b0,	// (0x0005e390) cntbar_detail_list_event_pane_g2_ParamLimits

0xa4b0,	// (0x0005e390) cntbar_detail_list_event_pane_g2

0x0005,

0xfde4,	// (0x00063cc4) cntbar_detail_list_event_pane_g_ParamLimits

0xfde4,	// (0x00063cc4) cntbar_detail_list_event_pane_g

0xa51c,	// (0x0005e3fc) cntbar_detail_list_event_pane_t1_ParamLimits

0xa51c,	// (0x0005e3fc) cntbar_detail_list_event_pane_t1

0xa531,	// (0x0005e411) cntbar_detail_list_event_pane_t2_ParamLimits

0xa531,	// (0x0005e411) cntbar_detail_list_event_pane_t2

0x0002,

0xfdf1,	// (0x00063cd1) cntbar_detail_list_event_pane_t_ParamLimits

0xfdf1,	// (0x00063cd1) cntbar_detail_list_event_pane_t

0x061b,	// (0x000544fb) cell_cntbar_detail_list_shct_pane_g1

0x0f61,	// (0x00054e41) navi_pane_mv_g3

0x106c,	// (0x00054f4c) main_cntbar_detail_pane_ParamLimits

0xb747,	// (0x0005f627) main_notif_wgt_pane

0xcb6e,	// (0x00060a4e) aid_tch_main_mp4_pane_g4

0xcd90,	// (0x00060c70) popup_slider_window_cp02

0xe666,	// (0x00062546) list_recal_day_event_pane

0xa3b1,	// (0x0005e291) cntbar_detail_btn_pane_ParamLimits

0xa3b1,	// (0x0005e291) cntbar_detail_btn_pane

0xa3c4,	// (0x0005e2a4) cntbar_detail_btn_pane_cp01_ParamLimits

0xa3c4,	// (0x0005e2a4) cntbar_detail_btn_pane_cp01

0xa3e9,	// (0x0005e2c9) cntbar_detail_list_shct_pane_ParamLimits

0xa3f9,	// (0x0005e2d9) cntbar_detail_pane_g1_ParamLimits

0xa3f9,	// (0x0005e2d9) cntbar_detail_pane_g1

0xa409,	// (0x0005e2e9) cntbar_detail_pane_t1_ParamLimits

0xa409,	// (0x0005e2e9) cntbar_detail_pane_t1

0xa4bc,	// (0x0005e39c) cntbar_detail_list_event_pane_g3_ParamLimits

0xa4bc,	// (0x0005e39c) cntbar_detail_list_event_pane_g3

0xa4d4,	// (0x0005e3b4) cntbar_detail_list_event_pane_g4_ParamLimits

0xa4d4,	// (0x0005e3b4) cntbar_detail_list_event_pane_g4

0xa4ec,	// (0x0005e3cc) cntbar_detail_list_event_pane_g5_ParamLimits

0xa4ec,	// (0x0005e3cc) cntbar_detail_list_event_pane_g5

0xa504,	// (0x0005e3e4) cntbar_detail_list_event_pane_g6_ParamLimits

0xa504,	// (0x0005e3e4) cntbar_detail_list_event_pane_g6

0xa546,	// (0x0005e426) cntbar_detail_list_event_pane_t3_ParamLimits

0xa546,	// (0x0005e426) cntbar_detail_list_event_pane_t3

0xa558,	// (0x0005e438) popup_notif_wgt_window_ParamLimits

0xa558,	// (0x0005e438) popup_notif_wgt_window

0xa56d,	// (0x0005e44d) popup_submenu_window_cp01_ParamLimits

0xa56d,	// (0x0005e44d) popup_submenu_window_cp01

0x059a,	// (0x0005447a) bg_popup_window_pane_cp10

0xe909,	// (0x000627e9) listscroll_notif_wgt_pane

0xe91a,	// (0x000627fa) list_notif_wgt_window

0xe923,	// (0x00062803) scroll_pane_cp033

0xa57d,	// (0x0005e45d) list_notif_wgt_row_pane_ParamLimits

0xa57d,	// (0x0005e45d) list_notif_wgt_row_pane

0xe92c,	// (0x0006280c) aid_size_list_notif_wgt_del

0xe939,	// (0x00062819) list_notif_wgt_row_pane_g1

0xe945,	// (0x00062825) list_notif_wgt_row_pane_g2

0xe959,	// (0x00062839) list_notif_wgt_row_pane_g3

0x0002,

0xfdf8,	// (0x00063cd8) list_notif_wgt_row_pane_g

0xe966,	// (0x00062846) list_notif_wgt_row_pane_t1

0xe97c,	// (0x0006285c) list_notif_wgt_row_pane_t2

0xe98e,	// (0x0006286e) list_notif_wgt_row_pane_t3

0x0002,

0xfdff,	// (0x00063cdf) list_notif_wgt_row_pane_t

0xd164,	// (0x00061044) list_recal_day_event_pane_g1

0xe9a0,	// (0x00062880) list_recal_day_event_pane_t1

0xb747,	// (0x0005f627) bg_button_pane_cp045

0xa58d,	// (0x0005e46d) cntbar_detail_btn_pane_t1

0x22ef,	// (0x000561cf) main_callh_pane_ParamLimits

0x22ef,	// (0x000561cf) main_callh_pane

0xb747,	// (0x0005f627) main_coverflow0_pane

0xb747,	// (0x0005f627) main_wgtman_pane

0x96cd,	// (0x0005d5ad) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x96cd,	// (0x0005d5ad) main_fs_bigclock_unlock_btn_pane

0xe25f,	// (0x0006213f) bg_button_pane_cp16

0xe26f,	// (0x0006214f) cell_tport_appsw_pane_g3

0xa59b,	// (0x0005e47b) cf0_flow_pane_ParamLimits

0xa59b,	// (0x0005e47b) cf0_flow_pane

0xe9af,	// (0x0006288f) listscroll_cf0_pane

0xe9b8,	// (0x00062898) main_cf0_pane_g1

0xa5b0,	// (0x0005e490) main_cf0_pane_t1_ParamLimits

0xa5b0,	// (0x0005e490) main_cf0_pane_t1

0xa5c5,	// (0x0005e4a5) main_cf0_pane_t2_ParamLimits

0xa5c5,	// (0x0005e4a5) main_cf0_pane_t2

0x0001,

0xfe0b,	// (0x00063ceb) main_cf0_pane_t_ParamLimits

0xfe0b,	// (0x00063ceb) main_cf0_pane_t

0xe9ca,	// (0x000628aa) scroll_pane_cp11

0xa5da,	// (0x0005e4ba) cf0_flow_pane_g1

0xa5e2,	// (0x0005e4c2) cf0_flow_pane_g2

0x0001,

0xfe10,	// (0x00063cf0) cf0_flow_pane_g

0xa5ea,	// (0x0005e4ca) cf0_flow_pane_t1

0xb747,	// (0x0005f627) main_call6_pane

0xb747,	// (0x0005f627) main_calllock_pane

0xa5f8,	// (0x0005e4d8) call6_btn_grp_pane_ParamLimits

0xa5f8,	// (0x0005e4d8) call6_btn_grp_pane

0xa60e,	// (0x0005e4ee) call6_pane_g1_ParamLimits

0xa60e,	// (0x0005e4ee) call6_pane_g1

0xa621,	// (0x0005e501) popup_call6_1st_window_ParamLimits

0xa621,	// (0x0005e501) popup_call6_1st_window

0xa630,	// (0x0005e510) popup_call6_2nd_window_ParamLimits

0xa630,	// (0x0005e510) popup_call6_2nd_window

0xa63f,	// (0x0005e51f) cell_call6_btn_pane_ParamLimits

0xa63f,	// (0x0005e51f) cell_call6_btn_pane

0x059a,	// (0x0005447a) bg_popup_call2_in_pane_cp03

0xe9d3,	// (0x000628b3) popup_call6_1st_window_g1

0xe9db,	// (0x000628bb) popup_call6_1st_window_g2

0xe9e3,	// (0x000628c3) popup_call6_1st_window_g3

0x0002,

0xfe15,	// (0x00063cf5) popup_call6_1st_window_g

0xe9eb,	// (0x000628cb) popup_call6_1st_window_t1

0xe9fa,	// (0x000628da) popup_call6_1st_window_t2

0xea08,	// (0x000628e8) popup_call6_1st_window_t3

0x0002,

0xfe1c,	// (0x00063cfc) popup_call6_1st_window_t

0x059a,	// (0x0005447a) bg_popup_call2_in_pane_cp04

0xea16,	// (0x000628f6) popup_call6_2nd_window_g1

0xea1e,	// (0x000628fe) popup_call6_2nd_window_g2

0xea26,	// (0x00062906) popup_call6_2nd_window_g3

0x0002,

0xfe23,	// (0x00063d03) popup_call6_2nd_window_g

0xea2e,	// (0x0006290e) popup_call6_2nd_window_t1

0xb7b0,	// (0x0005f690) bg_button_pane_cp15

0xf047,	// (0x00062f27) cell_call6_btn_pane_g1

0xf050,	// (0x00062f30) cell_call6_btn_pane_t1

0xa653,	// (0x0005e533) listscroll_wgtman_pane_ParamLimits

0xa653,	// (0x0005e533) listscroll_wgtman_pane

0xa674,	// (0x0005e554) wgtman_btn_pane_ParamLimits

0xa674,	// (0x0005e554) wgtman_btn_pane

0x0cc1,	// (0x00054ba1) aid_scroll_copy1

0xea3d,	// (0x0006291d) list_wgtman_pane

0xa6b4,	// (0x0005e594) wgtman_btn_pane_g1_ParamLimits

0xa6b4,	// (0x0005e594) wgtman_btn_pane_g1

0xa6e0,	// (0x0005e5c0) wgtman_btn_pane_t1_ParamLimits

0xa6e0,	// (0x0005e5c0) wgtman_btn_pane_t1

0xea47,	// (0x00062927) wgtman_btn_pane_t2_ParamLimits

0xea47,	// (0x00062927) wgtman_btn_pane_t2

0x0001,

0xfe2a,	// (0x00063d0a) wgtman_btn_pane_t_ParamLimits

0xfe2a,	// (0x00063d0a) wgtman_btn_pane_t

0xa71d,	// (0x0005e5fd) listrow_wgtman_pane_ParamLimits

0xa71d,	// (0x0005e5fd) listrow_wgtman_pane

0xa72f,	// (0x0005e60f) listrow_wgtman_pane_g1

0xa73c,	// (0x0005e61c) listrow_wgtman_pane_g2

0x0001,

0xfe2f,	// (0x00063d0f) listrow_wgtman_pane_g

0xa754,	// (0x0005e634) listrow_wgtman_pane_t1

0xa76c,	// (0x0005e64c) listrow_wgtman_pane_t2

0x0001,

0xfe34,	// (0x00063d14) listrow_wgtman_pane_t

0xa792,	// (0x0005e672) wait_bar_pane_cp09

0xea5e,	// (0x0006293e) main_calllock_btn_pane

0xea66,	// (0x00062946) main_calllock_pane_g1

0xb747,	// (0x0005f627) bg_button_pane_cp17

0xea6f,	// (0x0006294f) main_calllock_btn_pane_g1

0xea78,	// (0x00062958) main_calllock_btn_pane_t1

0xb747,	// (0x0005f627) main_dialer3_pane

0xb747,	// (0x0005f627) main_fmrd2_pane

0x061b,	// (0x000544fb) main_fs_bigclock_unlock_btn_pane_g1

0xea8f,	// (0x0006296f) main_fs_bigclock_unlock_btn_pane_t1

0xa7a4,	// (0x0005e684) area_fmrd2_info_pane_ParamLimits

0xa7a4,	// (0x0005e684) area_fmrd2_info_pane

0xa7b3,	// (0x0005e693) area_fmrd2_visual_pane_ParamLimits

0xa7b3,	// (0x0005e693) area_fmrd2_visual_pane

0xa7c1,	// (0x0005e6a1) fmrd2_indi_pane_ParamLimits

0xa7c1,	// (0x0005e6a1) fmrd2_indi_pane

0xa7ce,	// (0x0005e6ae) area_fmrd2_visual_pane_g1

0xa7d6,	// (0x0005e6b6) area_fmrd2_visual_pane_t1

0xa7e4,	// (0x0005e6c4) area_fmrd2_visual_pane_t2

0xa7f2,	// (0x0005e6d2) area_fmrd2_visual_pane_t3

0x0002,

0xfe3e,	// (0x00063d1e) area_fmrd2_visual_pane_t

0xa800,	// (0x0005e6e0) area_fmrd2_info_pane_g1

0xa808,	// (0x0005e6e8) area_fmrd2_info_pane_t1

0xa816,	// (0x0005e6f6) area_fmrd2_info_pane_t2

0xa824,	// (0x0005e704) area_fmrd2_info_pane_t3

0xa832,	// (0x0005e712) area_fmrd2_info_pane_t4

0x0003,

0xfe45,	// (0x00063d25) area_fmrd2_info_pane_t

0xa840,	// (0x0005e720) fmrd2_indi_pane_t1

0xa84e,	// (0x0005e72e) fmrd2_indi_pane_t2

0xa85c,	// (0x0005e73c) fmrd2_indi_pane_t3

0x0002,

0xfe4e,	// (0x00063d2e) fmrd2_indi_pane_t

0xdd7b,	// (0x00061c5b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdd7b,	// (0x00061c5b) list_single_fs_bigclock_indicator_pane_g5

0xde29,	// (0x00061d09) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xde29,	// (0x00061d09) list_single_fs_bigclock_indicator_pane_t5

0x9ea9,	// (0x0005dd89) aid_cell_bcale_month_pane_ParamLimits

0x9ea9,	// (0x0005dd89) aid_cell_bcale_month_pane

0x9ec7,	// (0x0005dda7) bcale_month_pane_ParamLimits

0x9ec7,	// (0x0005dda7) bcale_month_pane

0x9edf,	// (0x0005ddbf) bcale_preview_pane_ParamLimits

0x9edf,	// (0x0005ddbf) bcale_preview_pane

0xe81b,	// (0x000626fb) list_single_fs_bigclock_pane_t1_ParamLimits

0xe837,	// (0x00062717) list_single_fs_bigclock_pane_t2_ParamLimits

0xe837,	// (0x00062717) list_single_fs_bigclock_pane_t2

0x0001,

0xfdc9,	// (0x00063ca9) list_single_fs_bigclock_pane_t_ParamLimits

0xfdc9,	// (0x00063ca9) list_single_fs_bigclock_pane_t

0xea87,	// (0x00062967) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe39,	// (0x00063d19) main_fs_bigclock_unlock_btn_pane_g

0xa86a,	// (0x0005e74a) aid_dia3_key_size_ParamLimits

0xa86a,	// (0x0005e74a) aid_dia3_key_size

0xa879,	// (0x0005e759) aid_dia3_listrow_size_ParamLimits

0xa879,	// (0x0005e759) aid_dia3_listrow_size

0xa88c,	// (0x0005e76c) dia3_keypad_fun_pane_ParamLimits

0xa88c,	// (0x0005e76c) dia3_keypad_fun_pane

0xa8a0,	// (0x0005e780) dia3_keypad_num_pane_ParamLimits

0xa8a0,	// (0x0005e780) dia3_keypad_num_pane

0xa8b1,	// (0x0005e791) dia3_listscroll_pane_ParamLimits

0xa8b1,	// (0x0005e791) dia3_listscroll_pane

0xa8c2,	// (0x0005e7a2) dia3_numentry_pane_ParamLimits

0xa8c2,	// (0x0005e7a2) dia3_numentry_pane

0xea9d,	// (0x0006297d) dia3_list_pane

0xeaa6,	// (0x00062986) scroll_pane_cp12

0xb747,	// (0x0005f627) bg_dia3_numentry_pane

0xa8d6,	// (0x0005e7b6) dia3_numentry_pane_t1

0xa8e5,	// (0x0005e7c5) cell_dia3_key_num_pane

0xa8ed,	// (0x0005e7cd) cell_dia3_key0_fun_pane_ParamLimits

0xa8ed,	// (0x0005e7cd) cell_dia3_key0_fun_pane

0xa901,	// (0x0005e7e1) cell_dia3_key1_fun_pane_ParamLimits

0xa901,	// (0x0005e7e1) cell_dia3_key1_fun_pane

0xa918,	// (0x0005e7f8) dia3_listrow_pane

0xda8a,	// (0x0006196a) bg_dia3_numentry_pane_g1

0xb747,	// (0x0005f627) bg_button_pane_cp21

0xeaaf,	// (0x0006298f) cell_dia3_key_num_pane_t1

0xeabd,	// (0x0006299d) cell_dia3_key_num_pane_t2

0xeacc,	// (0x000629ac) cell_dia3_key_num_pane_t3

0xeadb,	// (0x000629bb) cell_dia3_key_num_pane_t4

0x0003,

0xfe55,	// (0x00063d35) cell_dia3_key_num_pane_t

0xb747,	// (0x0005f627) bg_button_pane_cp19

0xeaea,	// (0x000629ca) cell_dia3_key0_fun_pane_g1

0xb747,	// (0x0005f627) bg_button_pane_cp20

0xa92a,	// (0x0005e80a) cell_dia3_key1_fun_pane_g1

0xa932,	// (0x0005e812) area_left_week_number_pane

0xa93e,	// (0x0005e81e) area_top_day_name_pane

0xa94f,	// (0x0005e82f) frame_month_view_pane

0xeaf2,	// (0x000629d2) grid_month_view_pane

0xa960,	// (0x0005e840) cell_top_day_name_pane_ParamLimits

0xa960,	// (0x0005e840) cell_top_day_name_pane

0xa983,	// (0x0005e863) cell_area_left_week_number_pane_ParamLimits

0xa983,	// (0x0005e863) cell_area_left_week_number_pane

0xa997,	// (0x0005e877) cell_month_view_pane_ParamLimits

0xa997,	// (0x0005e877) cell_month_view_pane

0xeb00,	// (0x000629e0) frm_month_g1

0xa9bc,	// (0x0005e89c) frm_month_g2

0xa9cd,	// (0x0005e8ad) frm_month_g3

0xa9de,	// (0x0005e8be) frm_month_g4

0xa9ef,	// (0x0005e8cf) frm_month_g5

0xaa00,	// (0x0005e8e0) frm_month_g6

0xaa11,	// (0x0005e8f1) frm_month_g7

0xeb0d,	// (0x000629ed) frm_month_g8

0xaa22,	// (0x0005e902) frm_month_g9

0xaa32,	// (0x0005e912) frm_month_g10

0xaa42,	// (0x0005e922) frm_month_g11

0xaa52,	// (0x0005e932) frm_month_g12

0xaa62,	// (0x0005e942) frm_month_g13

0xaa72,	// (0x0005e952) frm_month_g14

0xaa82,	// (0x0005e962) frm_month_g15

0xaa94,	// (0x0005e974) frm_month_g16

0x000f,

0xfe5e,	// (0x00063d3e) frm_month_g

0xeb1a,	// (0x000629fa) cell_top_day_name_pane_t1

0xaaa6,	// (0x0005e986) cell_area_left_week_number_pane_g1

0xaab2,	// (0x0005e992) cell_area_left_week_number_pane_t1

0xbea0,	// (0x0005fd80) cell_month_view_pane_g1

0xaac5,	// (0x0005e9a5) cell_month_view_pane_t1

0xb747,	// (0x0005f627) main_fps_pane

0xe087,	// (0x00061f67) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe087,	// (0x00061f67) cmail_ddmenu_btn02_pane_cp1

0xe0a3,	// (0x00061f83) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe0a3,	// (0x00061f83) cmail_ddmenu_btn02_pane_cp2

0xa1ff,	// (0x0005e0df) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa1ff,	// (0x0005e0df) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd7c,	// (0x00063c5c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd7c,	// (0x00063c5c) cmail_ddmenu_btn02_pane_g

0xa21d,	// (0x0005e0fd) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa21d,	// (0x0005e0fd) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd81,	// (0x00063c61) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd81,	// (0x00063c61) cmail_ddmenu_btn02_pane_t

0xaad8,	// (0x0005e9b8) fps_text_pane_ParamLimits

0xaad8,	// (0x0005e9b8) fps_text_pane

0xaaee,	// (0x0005e9ce) main_fps_pane_g1_ParamLimits

0xaaee,	// (0x0005e9ce) main_fps_pane_g1

0xab04,	// (0x0005e9e4) wait_bar_pane_cp010_ParamLimits

0xab04,	// (0x0005e9e4) wait_bar_pane_cp010

0xab15,	// (0x0005e9f5) fps_text_pane_t1_ParamLimits

0xab15,	// (0x0005e9f5) fps_text_pane_t1

0xce8d,	// (0x00060d6d) cam4_image_uncrop_pane_g1

0xce96,	// (0x00060d76) cam4_image_uncrop_pane_g2

0x7b0b,	// (0x0005b9eb) cam4_image_uncrop_pane_g3

0x7b14,	// (0x0005b9f4) cam4_image_uncrop_pane_g4

0x0003,

0xf87e,	// (0x0006375e) cam4_image_uncrop_pane_g

0xa918,	// (0x0005e7f8) dia3_listrow_pane_ParamLimits

0xb747,	// (0x0005f627) main_phob2_pane

0x9cf8,	// (0x0005dbd8) cell_tport_appsw_pane_cp02_ParamLimits

0x9cf8,	// (0x0005dbd8) cell_tport_appsw_pane_cp02

0x9d08,	// (0x0005dbe8) cell_tport_appsw_pane_cp03_ParamLimits

0x9d08,	// (0x0005dbe8) cell_tport_appsw_pane_cp03

0xb747,	// (0x0005f627) phob2_contact_card_pane

0xb747,	// (0x0005f627) phob2_listscroll_pane

0xeb2d,	// (0x00062a0d) phob2_list_pane

0xeb35,	// (0x00062a15) scroll_pane_cp034

0xab2d,	// (0x0005ea0d) phob2_cc_data_pane_ParamLimits

0xab2d,	// (0x0005ea0d) phob2_cc_data_pane

0xab4a,	// (0x0005ea2a) phob2_cc_listscroll_pane_ParamLimits

0xab4a,	// (0x0005ea2a) phob2_cc_listscroll_pane

0xa71d,	// (0x0005e5fd) list_double_large_graphic_phob2_pane_ParamLimits

0xa71d,	// (0x0005e5fd) list_double_large_graphic_phob2_pane

0xab66,	// (0x0005ea46) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xab66,	// (0x0005ea46) list_double_large_graphic_phob2_pane_g1

0xab73,	// (0x0005ea53) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xab73,	// (0x0005ea53) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe7f,	// (0x00063d5f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe7f,	// (0x00063d5f) list_double_large_graphic_phob2_pane_g

0xab97,	// (0x0005ea77) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xab97,	// (0x0005ea77) list_double_large_graphic_phob2_pane_t1

0xabac,	// (0x0005ea8c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xabac,	// (0x0005ea8c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe88,	// (0x00063d68) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe88,	// (0x00063d68) list_double_large_graphic_phob2_pane_t

0xb747,	// (0x0005f627) list_highlight_pane_cp024

0xeb3d,	// (0x00062a1d) phob2_cc_button_pane

0xabc1,	// (0x0005eaa1) phob2_cc_data_pane_g1_ParamLimits

0xabc1,	// (0x0005eaa1) phob2_cc_data_pane_g1

0xabd8,	// (0x0005eab8) phob2_cc_data_pane_g2_ParamLimits

0xabd8,	// (0x0005eab8) phob2_cc_data_pane_g2

0x0001,

0xfe8d,	// (0x00063d6d) phob2_cc_data_pane_g_ParamLimits

0xfe8d,	// (0x00063d6d) phob2_cc_data_pane_g

0xabea,	// (0x0005eaca) phob2_cc_data_pane_t1_ParamLimits

0xabea,	// (0x0005eaca) phob2_cc_data_pane_t1

0xac02,	// (0x0005eae2) phob2_cc_data_pane_t2_ParamLimits

0xac02,	// (0x0005eae2) phob2_cc_data_pane_t2

0xac1a,	// (0x0005eafa) phob2_cc_data_pane_t3_ParamLimits

0xac1a,	// (0x0005eafa) phob2_cc_data_pane_t3

0x0002,

0xfe92,	// (0x00063d72) phob2_cc_data_pane_t_ParamLimits

0xfe92,	// (0x00063d72) phob2_cc_data_pane_t

0xeb45,	// (0x00062a25) phob2_cc_list_pane_ParamLimits

0xeb45,	// (0x00062a25) phob2_cc_list_pane

0xd9a7,	// (0x00061887) scroll_pane_cp035_ParamLimits

0xd9a7,	// (0x00061887) scroll_pane_cp035

0x106c,	// (0x00054f4c) bg_button_pane_cp033

0xeb51,	// (0x00062a31) phob2_cc_button_pane_g1

0xeb5d,	// (0x00062a3d) phob2_cc_button_pane_t1

0xeb72,	// (0x00062a52) phob2_cc_button_pane_t2

0x0001,

0xfe99,	// (0x00063d79) phob2_cc_button_pane_t

0xac32,	// (0x0005eb12) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xac32,	// (0x0005eb12) list_double_large_graphic_phob2_cc_pane

0xac60,	// (0x0005eb40) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xac60,	// (0x0005eb40) list_double_large_graphic_phob2_cc_pane_g1

0xac6c,	// (0x0005eb4c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xac6c,	// (0x0005eb4c) list_double_large_graphic_phob2_cc_pane_g2

0xac78,	// (0x0005eb58) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xac78,	// (0x0005eb58) list_double_large_graphic_phob2_cc_pane_g3

0xac84,	// (0x0005eb64) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xac84,	// (0x0005eb64) list_double_large_graphic_phob2_cc_pane_g4

0xac90,	// (0x0005eb70) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xac90,	// (0x0005eb70) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe9e,	// (0x00063d7e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe9e,	// (0x00063d7e) list_double_large_graphic_phob2_cc_pane_g

0xac9c,	// (0x0005eb7c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xac9c,	// (0x0005eb7c) list_double_large_graphic_phob2_cc_pane_t1

0xacc5,	// (0x0005eba5) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xacc5,	// (0x0005eba5) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfea9,	// (0x00063d89) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfea9,	// (0x00063d89) list_double_large_graphic_phob2_cc_pane_t

0xeb84,	// (0x00062a64) list_highlight_pane_cp025_ParamLimits

0xeb84,	// (0x00062a64) list_highlight_pane_cp025

0x106c,	// (0x00054f4c) bg_button_pane_cp033_ParamLimits

0xeb51,	// (0x00062a31) phob2_cc_button_pane_g1_ParamLimits

0xeb5d,	// (0x00062a3d) phob2_cc_button_pane_t1_ParamLimits

0xeb72,	// (0x00062a52) phob2_cc_button_pane_t2_ParamLimits

0xfe99,	// (0x00063d79) phob2_cc_button_pane_t_ParamLimits

0x3500,	// (0x000573e0) popup_wgtman_window

0xdaaa,	// (0x0006198a) scroll_pane_cp038

0xa696,	// (0x0005e576) wgtman_btn_pane_cp_01_ParamLimits

0xa696,	// (0x0005e576) wgtman_btn_pane_cp_01

0xeb92,	// (0x00062a72) wgtman_content_pane

0xeb9b,	// (0x00062a7b) wgtman_heading_pane

0xb747,	// (0x0005f627) bg_heading_pane_cp02

0xeba4,	// (0x00062a84) wgtman_heading_pane_g1

0xebac,	// (0x00062a8c) wgtman_heading_pane_t1

0xebba,	// (0x00062a9a) scroll_pane_cp036

0xebc2,	// (0x00062aa2) wgtman_list_pane

0xebca,	// (0x00062aaa) wgtman_list_pane_t1_ParamLimits

0xebca,	// (0x00062aaa) wgtman_list_pane_t1

0xee5e,	// (0x00062d3e) cam4_grid_pane

0x86bf,	// (0x0005c59f) bg_button_pane_cp015_ParamLimits

0x86d0,	// (0x0005c5b0) bg_button_pane_cp016_ParamLimits

0x86dc,	// (0x0005c5bc) bg_button_pane_cp017_ParamLimits

0x872e,	// (0x0005c60e) popup_vitu2_query_window_g3_ParamLimits

0x872e,	// (0x0005c60e) popup_vitu2_query_window_g3

0x87cb,	// (0x0005c6ab) popup_vitu2_query_window_t6_ParamLimits

0x87cb,	// (0x0005c6ab) popup_vitu2_query_window_t6

0x87f6,	// (0x0005c6d6) popup_vitu2_query_window_t7_ParamLimits

0x87f6,	// (0x0005c6d6) popup_vitu2_query_window_t7

0xce8d,	// (0x00060d6d) cam4_grid_pane_g1

0xce96,	// (0x00060d76) cam4_grid_pane_g2

0xebe1,	// (0x00062ac1) cam4_grid_pane_g3

0xebea,	// (0x00062aca) cam4_grid_pane_g4

0x0003,

0xfeae,	// (0x00063d8e) cam4_grid_pane_g

0x4138,	// (0x00058018) aid_placing_vt_slider_lsc_ParamLimits

0x43a8,	// (0x00058288) vidtel_button_pane_ParamLimits

0x43a8,	// (0x00058288) vidtel_button_pane

0xb747,	// (0x0005f627) bg_button_pane_cp034

0xacee,	// (0x0005ebce) vidtel_button_pane_g1

0xacf6,	// (0x0005ebd6) vidtel_button_pane_t1

0xd135,	// (0x00061015) aid_size_vtel_slider_touch

0xd9a7,	// (0x00061887) scroll_pane_cp039

0xdad9,	// (0x000619b9) ncim_query_button_pane_cp01_ParamLimits

0xdaf8,	// (0x000619d8) ncimui_query_pane_g1_ParamLimits

0x106c,	// (0x00054f4c) input_focus_pane_cp012_ParamLimits

0xdb1d,	// (0x000619fd) ncim_query_entry_pane_t1_ParamLimits

0xd9a7,	// (0x00061887) scroll_pane_cp039_ParamLimits

0x0e7c,	// (0x00054d5c) navi_pane_bcale_mc_g1

0x0e84,	// (0x00054d64) navi_pane_bcale_mc_t1

0xe0d7,	// (0x00061fb7) main_sp_fs_email_pane_g1

0xe0e3,	// (0x00061fc3) main_sp_fs_email_pane_g2

0x0001,

0xfc79,	// (0x00063b59) main_sp_fs_email_pane_g

0xe562,	// (0x00062442) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe562,	// (0x00062442) list_single_cale_mrui_row_pane_g3

0xa23d,	// (0x0005e11d) list_single_recal_day_pane_g5_event_pane

0xe6cb,	// (0x000625ab) list_single_recal_day_pane_g7

0xebf3,	// (0x00062ad3) list_recal_day_event_pane_cp01

0xebfc,	// (0x00062adc) list_recal_vselct_arw_lo_pane_cp01

0xec04,	// (0x00062ae4) list_recal_vselct_arw_up_pane_cp01

0xec0c,	// (0x00062aec) list_recal_vselct_pane_cp01

0xd164,	// (0x00061044) list_recal_day_event_pane_cp01_g1

0xec16,	// (0x00062af6) list_recal_day_event_pane_cp01_t1

0xe6d3,	// (0x000625b3) list_single_recal_day_pane_t1_ParamLimits

0xa253,	// (0x0005e133) list_single_recal_day_pane_t2_ParamLimits

0xfd91,	// (0x00063c71) list_single_recal_day_pane_t_ParamLimits

0xbe26,	// (0x0005fd06) bg_notes_pane_ParamLimits

0xbf06,	// (0x0005fde6) list_notes_pane_ParamLimits

0x3702,	// (0x000575e2) scroll_pane_cp06_ParamLimits

0xbf46,	// (0x0005fe26) main_notes_pane_ParamLimits

0x106c,	// (0x00054f4c) main_welc_pane

0xad33,	// (0x0005ec13) main_welc_body_pane_ParamLimits

0xad33,	// (0x0005ec13) main_welc_body_pane

0xad4f,	// (0x0005ec2f) main_welc_opti_pane_ParamLimits

0xad4f,	// (0x0005ec2f) main_welc_opti_pane

0xadc3,	// (0x0005eca3) main_welc_pane_t1_ParamLimits

0xadc3,	// (0x0005eca3) main_welc_pane_t1

0xaf73,	// (0x0005ee53) main_welc_body_row_pane_ParamLimits

0xaf73,	// (0x0005ee53) main_welc_body_row_pane

0xbebc,	// (0x0005fd9c) main_welc_opti_row_pane_ParamLimits

0xbebc,	// (0x0005fd9c) main_welc_opti_row_pane

0xec34,	// (0x00062b14) main_welc_opti_row_pane_g1

0xaf86,	// (0x0005ee66) main_welc_opti_row_pane_t1

0xec3c,	// (0x00062b1c) main_welc_body_row_pane_t1

0xe912,	// (0x000627f2) popup_notif_wgt_heading_pane

0xe92c,	// (0x0006280c) aid_size_list_notif_wgt_del_ParamLimits

0xe939,	// (0x00062819) list_notif_wgt_row_pane_g1_ParamLimits

0xe945,	// (0x00062825) list_notif_wgt_row_pane_g2_ParamLimits

0xe959,	// (0x00062839) list_notif_wgt_row_pane_g3_ParamLimits

0xfdf8,	// (0x00063cd8) list_notif_wgt_row_pane_g_ParamLimits

0xe966,	// (0x00062846) list_notif_wgt_row_pane_t1_ParamLimits

0xe97c,	// (0x0006285c) list_notif_wgt_row_pane_t2_ParamLimits

0xe98e,	// (0x0006286e) list_notif_wgt_row_pane_t3_ParamLimits

0xfdff,	// (0x00063cdf) list_notif_wgt_row_pane_t_ParamLimits

0xa72f,	// (0x0005e60f) listrow_wgtman_pane_g1_ParamLimits

0xa73c,	// (0x0005e61c) listrow_wgtman_pane_g2_ParamLimits

0xfe2f,	// (0x00063d0f) listrow_wgtman_pane_g_ParamLimits

0xa754,	// (0x0005e634) listrow_wgtman_pane_t1_ParamLimits

0xa76c,	// (0x0005e64c) listrow_wgtman_pane_t2_ParamLimits

0xfe34,	// (0x00063d14) listrow_wgtman_pane_t_ParamLimits

0xa792,	// (0x0005e672) wait_bar_pane_cp09_ParamLimits

0xb747,	// (0x0005f627) bg_popup_heading_pane_cp02

0xec4b,	// (0x00062b2b) popup_notif_wgt_heading_pane_g1

0xec53,	// (0x00062b33) popup_notif_wgt_heading_pane_t1

0x22fd,	// (0x000561dd) main_vids_pane

0xb747,	// (0x0005f627) vids_listscroll_pane

0xaf95,	// (0x0005ee75) scroll_pane_cp040

0xb747,	// (0x0005f627) vids_list_pane

0xec61,	// (0x00062b41) vids_list_double_pane_ParamLimits

0xec61,	// (0x00062b41) vids_list_double_pane

0xafa0,	// (0x0005ee80) vids_list_double_pane_g1

0xafa9,	// (0x0005ee89) vids_list_double_pane_t1

0xafb8,	// (0x0005ee98) vids_list_double_pane_t2

0x0001,

0xfecd,	// (0x00063dad) vids_list_double_pane_t

0xb7a2,	// (0x0005f682) main_ncimui_pane_ParamLimits

0x9279,	// (0x0005d159) main_ncimui_pane_g1_ParamLimits

0x9285,	// (0x0005d165) main_ncimui_pane_g2_ParamLimits

0x9285,	// (0x0005d165) main_ncimui_pane_g2

0x0001,

0xfb7a,	// (0x00063a5a) main_ncimui_pane_g_ParamLimits

0xfb7a,	// (0x00063a5a) main_ncimui_pane_g

0xad66,	// (0x0005ec46) main_welc_pane_g1_ParamLimits

0xad66,	// (0x0005ec46) main_welc_pane_g1

0xad79,	// (0x0005ec59) main_welc_pane_g2_ParamLimits

0xad79,	// (0x0005ec59) main_welc_pane_g2

0x0003,

0xfeb7,	// (0x00063d97) main_welc_pane_g_ParamLimits

0xfeb7,	// (0x00063d97) main_welc_pane_g

0xbe26,	// (0x0005fd06) listscroll_mce_pane_ParamLimits

0x52ea,	// (0x000591ca) wait_bar_pane_cp10

0x22e3,	// (0x000561c3) main_cale_day_pane_ParamLimits

0x22e3,	// (0x000561c3) main_cale_week_pane_ParamLimits

0xbe26,	// (0x0005fd06) main_messa_pane_ParamLimits

0x707f,	// (0x0005af5f) main_clock2_btn_pane_ParamLimits

0x707f,	// (0x0005af5f) main_clock2_btn_pane

0xc736,	// (0x00060616) main_clock2_btn_pane_cp01_ParamLimits

0xc736,	// (0x00060616) main_clock2_btn_pane_cp01

0xe51d,	// (0x000623fd) list_cale_mrui_pane_ParamLimits

0xe9c2,	// (0x000628a2) main_cf0_pane_g2

0x0001,

0xfe06,	// (0x00063ce6) main_cf0_pane_g

0xa932,	// (0x0005e812) area_left_week_number_pane_ParamLimits

0xa93e,	// (0x0005e81e) area_top_day_name_pane_ParamLimits

0xa94f,	// (0x0005e82f) frame_month_view_pane_ParamLimits

0xeaf2,	// (0x000629d2) grid_month_view_pane_ParamLimits

0xeb00,	// (0x000629e0) frm_month_g1_ParamLimits

0xa9bc,	// (0x0005e89c) frm_month_g2_ParamLimits

0xa9cd,	// (0x0005e8ad) frm_month_g3_ParamLimits

0xa9de,	// (0x0005e8be) frm_month_g4_ParamLimits

0xa9ef,	// (0x0005e8cf) frm_month_g5_ParamLimits

0xaa00,	// (0x0005e8e0) frm_month_g6_ParamLimits

0xaa11,	// (0x0005e8f1) frm_month_g7_ParamLimits

0xeb0d,	// (0x000629ed) frm_month_g8_ParamLimits

0xaa22,	// (0x0005e902) frm_month_g9_ParamLimits

0xaa32,	// (0x0005e912) frm_month_g10_ParamLimits

0xaa42,	// (0x0005e922) frm_month_g11_ParamLimits

0xaa52,	// (0x0005e932) frm_month_g12_ParamLimits

0xaa62,	// (0x0005e942) frm_month_g13_ParamLimits

0xaa72,	// (0x0005e952) frm_month_g14_ParamLimits

0xaa82,	// (0x0005e962) frm_month_g15_ParamLimits

0xaa94,	// (0x0005e974) frm_month_g16_ParamLimits

0xfe5e,	// (0x00063d3e) frm_month_g_ParamLimits

0xeb1a,	// (0x000629fa) cell_top_day_name_pane_t1_ParamLimits

0xaaa6,	// (0x0005e986) cell_area_left_week_number_pane_g1_ParamLimits

0xaab2,	// (0x0005e992) cell_area_left_week_number_pane_t1_ParamLimits

0xbea0,	// (0x0005fd80) cell_month_view_pane_g1_ParamLimits

0xaac5,	// (0x0005e9a5) cell_month_view_pane_t1_ParamLimits

0xbe1e,	// (0x0005fcfe) main_clock2_btn_pane_g1

0xec71,	// (0x00062b51) main_clock2_btn_pane_t1

0x106c,	// (0x00054f4c) listscroll_cmail_pane_ParamLimits

0xe0d7,	// (0x00061fb7) main_sp_fs_email_pane_g1_ParamLimits

0xe0e3,	// (0x00061fc3) main_sp_fs_email_pane_g2_ParamLimits

0xfc79,	// (0x00063b59) main_sp_fs_email_pane_g_ParamLimits

0xe647,	// (0x00062527) list_recal_day_pane_ParamLimits

0xe658,	// (0x00062538) mian_recal_day_pane_t1

0x9bc4,	// (0x0005daa4) list_single_dyc_row_text_pane_t4_ParamLimits

0x9bc4,	// (0x0005daa4) list_single_dyc_row_text_pane_t4

0x9bfb,	// (0x0005dadb) list_single_dyc_row_text_pane_t5_ParamLimits

0x9bfb,	// (0x0005dadb) list_single_dyc_row_text_pane_t5

0xe17c,	// (0x0006205c) list_single_dyc_row_text_pane_t6_ParamLimits

0xe17c,	// (0x0006205c) list_single_dyc_row_text_pane_t6

0x4f13,	// (0x00058df3) aid_mgn_list_cale_time_pane

0xb7a2,	// (0x0005f682) main_gallery2_pane_ParamLimits

0xc74a,	// (0x0006062a) main_clock2_pane_cp01_t1

0xc758,	// (0x00060638) main_clock2_pane_cp01_t3

0x0001,

0xf750,	// (0x00063630) main_clock2_pane_cp01_t

0x3a85,	// (0x00057965) cale_week_scroll_pane_g16_ParamLimits

0x3a85,	// (0x00057965) cale_week_scroll_pane_g16

0x059a,	// (0x0005447a) vorec_slider_pane

0xacf6,	// (0x0005ebd6) vidtel_button_pane_t1_ParamLimits

0xa2f8,	// (0x0005e1d8) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa30a,	// (0x0005e1ea) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa31b,	// (0x0005e1fb) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa31b,	// (0x0005e1fb) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdb4,	// (0x00063c94) main_fs_bigclock_clock_pane_g_ParamLimits

0xa32e,	// (0x0005e20e) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa349,	// (0x0005e229) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfdbd,	// (0x00063c9d) main_fs_bigclock_clock_pane_t_ParamLimits

0x69a1,	// (0x0005a881) main_mup3_lyrics_pane_ParamLimits

0x69a1,	// (0x0005a881) main_mup3_lyrics_pane

0xafea,	// (0x0005eeca) main_mup3_lyrics_pane_t1_ParamLimits

0xafea,	// (0x0005eeca) main_mup3_lyrics_pane_t1

0xcb5a,	// (0x00060a3a) aid_main_mp4_pane_t1_area

0xcb64,	// (0x00060a44) aid_main_mp4_pane_t2_area

0xcc0e,	// (0x00060aee) main_mp4_pane_g7_ParamLimits

0xcc0e,	// (0x00060aee) main_mp4_pane_g7

0xcc1a,	// (0x00060afa) main_mp4_pane_g8_ParamLimits

0xcc1a,	// (0x00060afa) main_mp4_pane_g8

0x798d,	// (0x0005b86d) aid_call6_pane_g1_size

0xac4c,	// (0x0005eb2c) list_double_large_graphic_phob2_other_pane_ParamLimits

0xac4c,	// (0x0005eb2c) list_double_large_graphic_phob2_other_pane

0x0dcf,	// (0x00054caf) list_double_large_graphic_phob2_other_pane_g1

0xb747,	// (0x0005f627) list_highlight_pane_cp026

0x106c,	// (0x00054f4c) main_welc_pane_ParamLimits

0x99d5,	// (0x0005d8b5) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x99d5,	// (0x0005d8b5) main_sp_fs_ctrlbar_pane_g3

0x99ed,	// (0x0005d8cd) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x99ed,	// (0x0005d8cd) main_sp_fs_ctrlbar_pane_g4

0x9a2f,	// (0x0005d90f) toolbar2_fixed_button_pane_cp01

0x9a3a,	// (0x0005d91a) toolbar2_fixed_button_pane_cp02

0x9a45,	// (0x0005d925) toolbar2_fixed_button_pane_cp03

0xad1f,	// (0x0005ebff) list_welc_entry_pane_ParamLimits

0xad1f,	// (0x0005ebff) list_welc_entry_pane

0xad8c,	// (0x0005ec6c) main_welc_pane_g3_ParamLimits

0xad8c,	// (0x0005ec6c) main_welc_pane_g3

0xaddd,	// (0x0005ecbd) main_welc_pane_t2_ParamLimits

0xaddd,	// (0x0005ecbd) main_welc_pane_t2

0xadf4,	// (0x0005ecd4) main_welc_pane_t3_ParamLimits

0xadf4,	// (0x0005ecd4) main_welc_pane_t3

0x0005,

0xfec0,	// (0x00063da0) main_welc_pane_t_ParamLimits

0xfec0,	// (0x00063da0) main_welc_pane_t

0xaf04,	// (0x0005ede4) welc_button_pane_ParamLimits

0xaf04,	// (0x0005ede4) welc_button_pane

0xaf62,	// (0x0005ee42) welc_service_logo_pane_ParamLimits

0xaf62,	// (0x0005ee42) welc_service_logo_pane

0xb009,	// (0x0005eee9) list_single_welc_entry_pane_ParamLimits

0xb009,	// (0x0005eee9) list_single_welc_entry_pane

0xb01a,	// (0x0005eefa) list_single_welc_entry_pane_g1

0xb022,	// (0x0005ef02) list_single_welc_entry_pane_t1

0xb030,	// (0x0005ef10) list_single_welc_entry_pane_t2

0x0001,

0xfed2,	// (0x00063db2) list_single_welc_entry_pane_t

0xb747,	// (0x0005f627) bg_button_pane_cp035

0xb03e,	// (0x0005ef1e) welc_button_pane_t1

0xec7f,	// (0x00062b5f) welc_service_logo_pane_g1

0xec88,	// (0x00062b68) welc_service_logo_pane_g2

0x0001,

0xfed7,	// (0x00063db7) welc_service_logo_pane_g

0xb7b0,	// (0x0005f690) main_int_radio_pane

0xc01e,	// (0x0005fefe) list_single_fs_dyc_pane_g1

0xab7f,	// (0x0005ea5f) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xab7f,	// (0x0005ea5f) list_double_large_graphic_phob2_pane_g3

0xab8b,	// (0x0005ea6b) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xab8b,	// (0x0005ea6b) list_double_large_graphic_phob2_pane_g4

0xb04c,	// (0x0005ef2c) main_int_radio1_pane_ParamLimits

0xb04c,	// (0x0005ef2c) main_int_radio1_pane

0xec91,	// (0x00062b71) find_pane_cp02

0xb069,	// (0x0005ef49) input_focus_pane_cp12_ParamLimits

0xb069,	// (0x0005ef49) input_focus_pane_cp12

0xb079,	// (0x0005ef59) input_focus_pane_cp13_ParamLimits

0xb079,	// (0x0005ef59) input_focus_pane_cp13

0xb08d,	// (0x0005ef6d) input_focus_pane_cp14_ParamLimits

0xb08d,	// (0x0005ef6d) input_focus_pane_cp14

0xec9a,	// (0x00062b7a) int_radio1_listscroll_pane

0xb0a1,	// (0x0005ef81) main_int_radio1_pane_g1_ParamLimits

0xb0a1,	// (0x0005ef81) main_int_radio1_pane_g1

0xb0b5,	// (0x0005ef95) main_int_radio1_pane_t1_ParamLimits

0xb0b5,	// (0x0005ef95) main_int_radio1_pane_t1

0xb0cc,	// (0x0005efac) main_int_radio1_pane_t2_ParamLimits

0xb0cc,	// (0x0005efac) main_int_radio1_pane_t2

0xb0e3,	// (0x0005efc3) main_int_radio1_pane_t3_ParamLimits

0xb0e3,	// (0x0005efc3) main_int_radio1_pane_t3

0xb0fa,	// (0x0005efda) main_int_radio1_pane_t4_ParamLimits

0xb0fa,	// (0x0005efda) main_int_radio1_pane_t4

0xeca4,	// (0x00062b84) main_int_radio1_pane_t5_ParamLimits

0xeca4,	// (0x00062b84) main_int_radio1_pane_t5

0xb10c,	// (0x0005efec) main_int_radio1_pane_t6_ParamLimits

0xb10c,	// (0x0005efec) main_int_radio1_pane_t6

0xb121,	// (0x0005f001) main_int_radio1_pane_t7_ParamLimits

0xb121,	// (0x0005f001) main_int_radio1_pane_t7

0xb136,	// (0x0005f016) main_int_radio1_pane_t8_ParamLimits

0xb136,	// (0x0005f016) main_int_radio1_pane_t8

0xb153,	// (0x0005f033) main_int_radio1_pane_t9_ParamLimits

0xb153,	// (0x0005f033) main_int_radio1_pane_t9

0xb165,	// (0x0005f045) main_int_radio1_pane_t10_ParamLimits

0xb165,	// (0x0005f045) main_int_radio1_pane_t10

0xb189,	// (0x0005f069) main_int_radio1_pane_t11_ParamLimits

0xb189,	// (0x0005f069) main_int_radio1_pane_t11

0xb1ad,	// (0x0005f08d) main_int_radio1_pane_t12_ParamLimits

0xb1ad,	// (0x0005f08d) main_int_radio1_pane_t12

0x000b,

0xfedc,	// (0x00063dbc) main_int_radio1_pane_t_ParamLimits

0xfedc,	// (0x00063dbc) main_int_radio1_pane_t

0xecb6,	// (0x00062b96) int_radio_list_pane

0xeb35,	// (0x00062a15) scroll_pane_cp037

0xecbe,	// (0x00062b9e) list_double_large_graphic_int_radio_pane_ParamLimits

0xecbe,	// (0x00062b9e) list_double_large_graphic_int_radio_pane

0xeccf,	// (0x00062baf) list_double_large_graphic_int_radio_pane_g1

0xecd8,	// (0x00062bb8) list_double_large_graphic_int_radio_pane_t1

0xece6,	// (0x00062bc6) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfef5,	// (0x00063dd5) list_double_large_graphic_int_radio_pane_t

0xb747,	// (0x0005f627) list_highlight_pane_cp027

0xec24,	// (0x00062b04) main_button_pane_4

0xad9f,	// (0x0005ec7f) main_welc_pane_g4_ParamLimits

0xad9f,	// (0x0005ec7f) main_welc_pane_g4

0xae0b,	// (0x0005eceb) main_welc_pane_t4_ParamLimits

0xae0b,	// (0x0005eceb) main_welc_pane_t4

0xae22,	// (0x0005ed02) main_welc_pane_t5_ParamLimits

0xae22,	// (0x0005ed02) main_welc_pane_t5

0xae5d,	// (0x0005ed3d) main_welc_pane_t6_ParamLimits

0xae5d,	// (0x0005ed3d) main_welc_pane_t6

0xaf17,	// (0x0005edf7) welc_button_pane_2_ParamLimits

0xaf17,	// (0x0005edf7) welc_button_pane_2

0xaf2b,	// (0x0005ee0b) welc_button_pane_3_ParamLimits

0xaf2b,	// (0x0005ee0b) welc_button_pane_3

0xec2c,	// (0x00062b0c) welc_button_pane_4

0xaf42,	// (0x0005ee22) welc_button_pane_5_ParamLimits

0xaf42,	// (0x0005ee22) welc_button_pane_5

0x3341,	// (0x00057221) main_popup_welc_pane

0xed03,	// (0x00062be3) main_welc_sk_g3

0xed0d,	// (0x00062bed) main_welc_sk_g4

0xed17,	// (0x00062bf7) main_welc_sk_t3

0xed25,	// (0x00062c05) main_welc_sk_t4

0xed33,	// (0x00062c13) popup_welc_pane_t4

0xed41,	// (0x00062c21) popup_welc_pane_t5

0xed4f,	// (0x00062c2f) popup_welc_pane_t6

0xb7b0,	// (0x0005f690) main_acti_pane

0xb747,	// (0x0005f627) main_sso_pane

0xb1bf,	// (0x0005f09f) sso_body_pane_ParamLimits

0xb1bf,	// (0x0005f09f) sso_body_pane

0xb1d3,	// (0x0005f0b3) sso_logo_pane_ParamLimits

0xb1d3,	// (0x0005f0b3) sso_logo_pane

0xb1fb,	// (0x0005f0db) sso_sk_pane_ParamLimits

0xb1fb,	// (0x0005f0db) sso_sk_pane

0x061b,	// (0x000544fb) main_sso_logo_pane_g1

0xb20d,	// (0x0005f0ed) sso_sk_pane_t1_ParamLimits

0xb20d,	// (0x0005f0ed) sso_sk_pane_t1

0xb226,	// (0x0005f106) sso_sk_pane_t2_ParamLimits

0xb226,	// (0x0005f106) sso_sk_pane_t2

0x0001,

0xfefa,	// (0x00063dda) sso_sk_pane_t_ParamLimits

0xfefa,	// (0x00063dda) sso_sk_pane_t

0xed87,	// (0x00062c67) aid_sso_gap

0xed90,	// (0x00062c70) aid_sso_txt1

0xed98,	// (0x00062c78) aid_sso_txt2

0xeda0,	// (0x00062c80) aid_sso_txt3

0x0002,

0xfeff,	// (0x00063ddf) aid_sso_txt

0xeda8,	// (0x00062c88) aid_sso_widget

0xb286,	// (0x0005f166) sso_btn_pane_ParamLimits

0xb286,	// (0x0005f166) sso_btn_pane

0xb2f8,	// (0x0005f1d8) sso_option_pane_ParamLimits

0xb2f8,	// (0x0005f1d8) sso_option_pane

0xb356,	// (0x0005f236) sso_query_pane_ParamLimits

0xb356,	// (0x0005f236) sso_query_pane

0xb396,	// (0x0005f276) sso_query_pane_cp01_ParamLimits

0xb396,	// (0x0005f276) sso_query_pane_cp01

0xb3d8,	// (0x0005f2b8) sso_t_hdr_pane_ParamLimits

0xb3d8,	// (0x0005f2b8) sso_t_hdr_pane

0xb3fc,	// (0x0005f2dc) sso_t_nml_pane_ParamLimits

0xb3fc,	// (0x0005f2dc) sso_t_nml_pane

0xeda0,	// (0x00062c80) sso_t_sub_pane

0xb1e0,	// (0x0005f0c0) sso_popup_window_ParamLimits

0xb1e0,	// (0x0005f0c0) sso_popup_window

0xb23c,	// (0x0005f11c) sso_apps_pane_ParamLimits

0xb23c,	// (0x0005f11c) sso_apps_pane

0xb262,	// (0x0005f142) sso_body_pane_g1

0xb26a,	// (0x0005f14a) sso_body_pane_t1

0xb278,	// (0x0005f158) sso_body_pane_t2

0x0001,

0xff06,	// (0x00063de6) sso_body_pane_t

0xb2c8,	// (0x0005f1a8) sso_btn_pane_cp01_ParamLimits

0xb2c8,	// (0x0005f1a8) sso_btn_pane_cp01

0xb330,	// (0x0005f210) sso_prog_pane_ParamLimits

0xb330,	// (0x0005f210) sso_prog_pane

0xb446,	// (0x0005f326) sso_t_hdr_pane_t1_ParamLimits

0xb446,	// (0x0005f326) sso_t_hdr_pane_t1

0x0073,	// (0x00053f53) input_focus_pane_cp10_ParamLimits

0x0073,	// (0x00053f53) input_focus_pane_cp10

0x008b,	// (0x00053f6b) sso_query_pane_t1_ParamLimits

0x008b,	// (0x00053f6b) sso_query_pane_t1

0x009e,	// (0x00053f7e) sso_query_pane_t2_ParamLimits

0x009e,	// (0x00053f7e) sso_query_pane_t2

0x00b9,	// (0x00053f99) sso_query_pane_t3_ParamLimits

0x00b9,	// (0x00053f99) sso_query_pane_t3

0x00e3,	// (0x00053fc3) sso_query_pane_t4_ParamLimits

0x00e3,	// (0x00053fc3) sso_query_pane_t4

0x0003,

0xff0b,	// (0x00063deb) sso_query_pane_t_ParamLimits

0xff0b,	// (0x00063deb) sso_query_pane_t

0xb747,	// (0x0005f627) bg_button_pane_cp22

0xecf4,	// (0x00062bd4) sso_btn_pane_t1

0xb459,	// (0x0005f339) sso_t_nml_pane_t1_ParamLimits

0xb459,	// (0x0005f339) sso_t_nml_pane_t1

0x0124,	// (0x00054004) sso_option_row_pane_ParamLimits

0x0124,	// (0x00054004) sso_option_row_pane

0x0137,	// (0x00054017) sso_t_sub_pane_t1_ParamLimits

0x0137,	// (0x00054017) sso_t_sub_pane_t1

0x106c,	// (0x00054f4c) bg_popup_window_pane_cp11_ParamLimits

0x106c,	// (0x00054f4c) bg_popup_window_pane_cp11

0x014a,	// (0x0005402a) popup_sk_window_cp01_ParamLimits

0x014a,	// (0x0005402a) popup_sk_window_cp01

0x0157,	// (0x00054037) sso_popup_body_pane_ParamLimits

0x0157,	// (0x00054037) sso_popup_body_pane

0x0164,	// (0x00054044) scroll_pane_cp21_ParamLimits

0x0164,	// (0x00054044) scroll_pane_cp21

0x0171,	// (0x00054051) sso_popup_body_t_pane_ParamLimits

0x0171,	// (0x00054051) sso_popup_body_t_pane

0x017e,	// (0x0005405e) sso_popup_body_t_hdr_pane_ParamLimits

0x017e,	// (0x0005405e) sso_popup_body_t_hdr_pane

0x018a,	// (0x0005406a) sso_popup_body_t_nml_pane_ParamLimits

0x018a,	// (0x0005406a) sso_popup_body_t_nml_pane

0x01a3,	// (0x00054083) sso_popup_body_t_sub_pane_ParamLimits

0x01a3,	// (0x00054083) sso_popup_body_t_sub_pane

0x01c2,	// (0x000540a2) sso_popup_body_t_hdr_pane_t1

0xb474,	// (0x0005f354) sso_popup_body_t_nml_pane_t1_ParamLimits

0xb474,	// (0x0005f354) sso_popup_body_t_nml_pane_t1

0x020c,	// (0x000540ec) sso_popup_body_t_sub_pane_t1_ParamLimits

0x020c,	// (0x000540ec) sso_popup_body_t_sub_pane_t1

0x061b,	// (0x000544fb) sso_prog_pane_g1

0xb4ab,	// (0x0005f38b) sso_apps_pane_comp1_ParamLimits

0xb4ab,	// (0x0005f38b) sso_apps_pane_comp1

0x0243,	// (0x00054123) sso_apps_pane_comp1_g1

0x024b,	// (0x0005412b) sso_apps_pane_comp1_t1

0x0267,	// (0x00054147) sso_option_row_pane_g1

0x026f,	// (0x0005414f) sso_option_row_pane_t1

0xad0c,	// (0x0005ebec) bg_welc_area_ParamLimits

0xad0c,	// (0x0005ebec) bg_welc_area

0xae9b,	// (0x0005ed7b) sso_t_hdr_pane_a_t1_ParamLimits

0xae9b,	// (0x0005ed7b) sso_t_hdr_pane_a_t1

0xaeb4,	// (0x0005ed94) sso_t_nml_pane_a_t1_ParamLimits

0xaeb4,	// (0x0005ed94) sso_t_nml_pane_a_t1

0xaed9,	// (0x0005edb9) sso_t_sub_pane_a_t1_ParamLimits

0xaed9,	// (0x0005edb9) sso_t_sub_pane_a_t1

0xecf4,	// (0x00062bd4) sso_btn_pane_t1_copy1

0xb747,	// (0x0005f627) welc_button_pane_2_comp1

0xed5d,	// (0x00062c3d) sso_t_hdr_pane_p_t1

0xed6b,	// (0x00062c4b) sso_t_nml_pane_p_t1

0xed79,	// (0x00062c59) sso_t_sub_pane_p_t1

0xe295,	// (0x00062175) list_cmail_pane_ParamLimits

0xaf52,	// (0x0005ee32) welc_button_pane_cp01_ParamLimits

0xaf52,	// (0x0005ee32) welc_button_pane_cp01

0xb747,	// (0x0005f627) main_att_pane

0x0259,	// (0x00054139) input_focus_pane_cp10_t1

0x026f,	// (0x0005414f) sso_option_row_pane_t1_ParamLimits

0xb4be,	// (0x0005f39e) main_att_body_pane_ParamLimits

0xb4be,	// (0x0005f39e) main_att_body_pane

0xb4d4,	// (0x0005f3b4) att_btn_pane_ParamLimits

0xb4d4,	// (0x0005f3b4) att_btn_pane

0xb4f1,	// (0x0005f3d1) att_btn_pane_cp01_ParamLimits

0xb4f1,	// (0x0005f3d1) att_btn_pane_cp01

0xb50d,	// (0x0005f3ed) att_li_srv_pane_ParamLimits

0xb50d,	// (0x0005f3ed) att_li_srv_pane

0xb523,	// (0x0005f403) att_opt_pane_ParamLimits

0xb523,	// (0x0005f403) att_opt_pane

0xb569,	// (0x0005f449) att_query_pane_ParamLimits

0xb569,	// (0x0005f449) att_query_pane

0xb59d,	// (0x0005f47d) att_query_pane_cp01_ParamLimits

0xb59d,	// (0x0005f47d) att_query_pane_cp01

0xb5d7,	// (0x0005f4b7) att_t_hdr_pane_ParamLimits

0xb5d7,	// (0x0005f4b7) att_t_hdr_pane

0xb61b,	// (0x0005f4fb) att_t_nml_pane_ParamLimits

0xb61b,	// (0x0005f4fb) att_t_nml_pane

0xb64c,	// (0x0005f52c) att_t_nml_pane_cp01_ParamLimits

0xb64c,	// (0x0005f52c) att_t_nml_pane_cp01

0xb672,	// (0x0005f552) att_t_nmlb_pane_ParamLimits

0xb672,	// (0x0005f552) att_t_nmlb_pane

0xb68b,	// (0x0005f56b) att_term_pane_ParamLimits

0xb68b,	// (0x0005f56b) att_term_pane

0xb6cf,	// (0x0005f5af) main_att_body_pane_g1_ParamLimits

0xb6cf,	// (0x0005f5af) main_att_body_pane_g1

0x005a,	// (0x00053f3a) att_t_hdr_pane_t1_ParamLimits

0x005a,	// (0x00053f3a) att_t_hdr_pane_t1

0x04a6,	// (0x00054386) att_t_nml_pane_t1_ParamLimits

0x04a6,	// (0x00054386) att_t_nml_pane_t1

0x04cb,	// (0x000543ab) att_btn_pane_t1

0xb747,	// (0x0005f627) bg_button_pane_cp23

0xb713,	// (0x0005f5f3) att_li_srv_row_pane_ParamLimits

0xb713,	// (0x0005f5f3) att_li_srv_row_pane

0x04e9,	// (0x000543c9) att_t_nmlb_pane_t1_ParamLimits

0x04e9,	// (0x000543c9) att_t_nmlb_pane_t1

0x0502,	// (0x000543e2) att_query_pane_t1

0x0511,	// (0x000543f1) att_query_pane_t2

0x0520,	// (0x00054400) att_query_pane_t3

0x0002,

0xff14,	// (0x00063df4) att_query_pane_t

0x052f,	// (0x0005440f) input_focus_pane_cp11

0x0538,	// (0x00054418) att_term_pane_t1_ParamLimits

0x0538,	// (0x00054418) att_term_pane_t1

0xb747,	// (0x0005f627) att_opt_row_pane

0x0555,	// (0x00054435) att_opt_row_pane_g1

0x055d,	// (0x0005443d) att_opt_row_pane_t1_ParamLimits

0x055d,	// (0x0005443d) att_opt_row_pane_t1

0xb723,	// (0x0005f603) att_li_srv_row_pane_g1

0xb72b,	// (0x0005f60b) att_li_srv_row_pane_t1

0xb739,	// (0x0005f619) att_li_srv_row_pane_t2

0x0001,

0xff1b,	// (0x00063dfb) att_li_srv_row_pane_t
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
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Small
