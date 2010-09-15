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

#include "aknlayoutscalable_elaf_pqp_apps_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0005f1f6 };

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
0x58df,	// (0x00064ad5) Screen

0x58e9,	// (0x00064adf) application_window

0x593b,	// (0x00064b31) area_bottom_pane_ParamLimits

0x593b,	// (0x00064b31) area_bottom_pane

0x5977,	// (0x00064b6d) area_top_pane_ParamLimits

0x5977,	// (0x00064b6d) area_top_pane

0x59d3,	// (0x00064bc9) call_video_uplink_pane_ParamLimits

0x59d3,	// (0x00064bc9) call_video_uplink_pane

0x5a0e,	// (0x00064c04) main_pane_ParamLimits

0x5a0e,	// (0x00064c04) main_pane

0xebfa,	// (0x0006ddf0) context_pane

0x99da,	// (0x00068bd0) navi_pane

0x99f4,	// (0x00068bea) popup_cale_events_window_ParamLimits

0x99f4,	// (0x00068bea) popup_cale_events_window

0xec0d,	// (0x0006de03) popup_mup_playback_window

0x9a0b,	// (0x00068c01) signal_pane

0x0c30,	// (0x0005fe26) main_browser_pane

0x64dd,	// (0x000656d3) main_burst_pane

0x0ba6,	// (0x0005fd9c) main_calc_pane

0xebd6,	// (0x0006ddcc) main_cale_day_pane

0x5efd,	// (0x000650f3) main_cale_month_pane

0xebd6,	// (0x0006ddcc) main_cale_week_pane

0x64dd,	// (0x000656d3) main_call_pane

0x08b5,	// (0x0005faab) main_call_poc_pane

0x64dd,	// (0x000656d3) main_camera_pane

0x64dd,	// (0x000656d3) main_chi_dic_pane

0x7f1a,	// (0x00067110) main_clock_pane

0x08b5,	// (0x0005faab) main_fmradio_pane

0x64dd,	// (0x000656d3) main_graph_messa_pane

0x08b5,	// (0x0005faab) main_help_pane

0x0c30,	// (0x0005fe26) main_im_pane

0x0b10,	// (0x0005fd06) main_image_pane_ParamLimits

0x0b10,	// (0x0005fd06) main_image_pane

0x08b5,	// (0x0005faab) main_location2_pane

0x64dd,	// (0x000656d3) main_location_pane

0x0b10,	// (0x0005fd06) main_messa_pane

0x08b5,	// (0x0005faab) main_mp2_pane

0x64dd,	// (0x000656d3) main_mp_pane

0x08b5,	// (0x0005faab) main_msg_pane

0x08b5,	// (0x0005faab) main_mup_eq_pane

0x08b5,	// (0x0005faab) main_mup_pane

0x0c30,	// (0x0005fe26) main_notes_pane

0x08b5,	// (0x0005faab) main_pec_pane

0x08b5,	// (0x0005faab) main_phob_pane

0x08b5,	// (0x0005faab) main_pinb_pane

0x08b5,	// (0x0005faab) main_postcard_pane

0x08b5,	// (0x0005faab) main_qdial_pane

0x64dd,	// (0x000656d3) main_skin_pane

0x08b5,	// (0x0005faab) main_smil2_pane

0x64dd,	// (0x000656d3) main_smil_pane

0x64dd,	// (0x000656d3) main_video_pane

0x64dd,	// (0x000656d3) main_video_tele_pane

0x0b10,	// (0x0005fd06) main_viewer_pane_ParamLimits

0x0b10,	// (0x0005fd06) main_viewer_pane

0x64dd,	// (0x000656d3) main_vorec_pane

0x98d8,	// (0x00068ace) popup_blid_sat_info_window_ParamLimits

0x98d8,	// (0x00068ace) popup_blid_sat_info_window

0x98f4,	// (0x00068aea) popup_dyc_status_message_window_ParamLimits

0x98f4,	// (0x00068aea) popup_dyc_status_message_window

0x9900,	// (0x00068af6) popup_grid_large_graphic_window_ParamLimits

0x9900,	// (0x00068af6) popup_grid_large_graphic_window

0x9971,	// (0x00068b67) popup_loc_request_window_ParamLimits

0x9971,	// (0x00068b67) popup_loc_request_window

0x99b4,	// (0x00068baa) popup_wml_address_window_ParamLimits

0x99b4,	// (0x00068baa) popup_wml_address_window

0x97b5,	// (0x000689ab) call_muted_g1

0x8c97,	// (0x00067e8d) popup_call_audio_conf_window_ParamLimits

0x8c97,	// (0x00067e8d) popup_call_audio_conf_window

0x97c5,	// (0x000689bb) popup_call_audio_first_window_ParamLimits

0x97c5,	// (0x000689bb) popup_call_audio_first_window

0x97f9,	// (0x000689ef) popup_call_audio_in_window_ParamLimits

0x97f9,	// (0x000689ef) popup_call_audio_in_window

0x9815,	// (0x00068a0b) popup_call_audio_out_window_ParamLimits

0x9815,	// (0x00068a0b) popup_call_audio_out_window

0x9831,	// (0x00068a27) popup_call_audio_second_window_ParamLimits

0x9831,	// (0x00068a27) popup_call_audio_second_window

0x9859,	// (0x00068a4f) popup_call_audio_wait_window_ParamLimits

0x9859,	// (0x00068a4f) popup_call_audio_wait_window

0x9878,	// (0x00068a6e) popup_number_entry_window_ParamLimits

0x9878,	// (0x00068a6e) popup_number_entry_window

0x04a4,	// (0x0005f69a) bg_popup_call_pane_cp05_ParamLimits

0x04a4,	// (0x0005f69a) bg_popup_call_pane_cp05

0x04c4,	// (0x0005f6ba) popup_number_entry_window_t1

0x04d7,	// (0x0005f6cd) popup_number_entry_window_t2

0x04e9,	// (0x0005f6df) popup_number_entry_window_t3

0x0003,

0xf05f,	// (0x0006e255) popup_number_entry_window_t

0x04fb,	// (0x0005f6f1) text_title_cp2

0x050e,	// (0x0005f704) bg_popup_call_pane_cp_ParamLimits

0x050e,	// (0x0005f704) bg_popup_call_pane_cp

0x051c,	// (0x0005f712) call_thumbnail_pane

0x0524,	// (0x0005f71a) popup_call_audio_in_window_g1_ParamLimits

0x0524,	// (0x0005f71a) popup_call_audio_in_window_g1

0x0530,	// (0x0005f726) popup_call_audio_in_window_g2_ParamLimits

0x0530,	// (0x0005f726) popup_call_audio_in_window_g2

0x053c,	// (0x0005f732) popup_call_audio_in_window_g3_ParamLimits

0x053c,	// (0x0005f732) popup_call_audio_in_window_g3

0x0002,

0xf068,	// (0x0006e25e) popup_call_audio_in_window_g_ParamLimits

0xf068,	// (0x0006e25e) popup_call_audio_in_window_g

0x0548,	// (0x0005f73e) popup_call_audio_in_window_t1_ParamLimits

0x0548,	// (0x0005f73e) popup_call_audio_in_window_t1

0x0563,	// (0x0005f759) popup_call_audio_in_window_t2_ParamLimits

0x0563,	// (0x0005f759) popup_call_audio_in_window_t2

0x057e,	// (0x0005f774) popup_call_audio_in_window_t3_ParamLimits

0x057e,	// (0x0005f774) popup_call_audio_in_window_t3

0x0002,

0xf06f,	// (0x0006e265) popup_call_audio_in_window_t_ParamLimits

0xf06f,	// (0x0006e265) popup_call_audio_in_window_t

0x050e,	// (0x0005f704) bg_popup_call_pane_cp01_ParamLimits

0x050e,	// (0x0005f704) bg_popup_call_pane_cp01

0x051c,	// (0x0005f712) call_thumbnail_pane_cp02

0x0591,	// (0x0005f787) call_type_pane_cp022

0x0599,	// (0x0005f78f) popup_call_audio_out_window_g1_ParamLimits

0x0599,	// (0x0005f78f) popup_call_audio_out_window_g1

0x05ab,	// (0x0005f7a1) popup_call_audio_out_window_g2_ParamLimits

0x05ab,	// (0x0005f7a1) popup_call_audio_out_window_g2

0x05b7,	// (0x0005f7ad) popup_call_audio_out_window_g3_ParamLimits

0x05b7,	// (0x0005f7ad) popup_call_audio_out_window_g3

0x0002,

0xf076,	// (0x0006e26c) popup_call_audio_out_window_g_ParamLimits

0xf076,	// (0x0006e26c) popup_call_audio_out_window_g

0x05c9,	// (0x0005f7bf) popup_call_audio_out_window_t1_ParamLimits

0x05c9,	// (0x0005f7bf) popup_call_audio_out_window_t1

0x05e1,	// (0x0005f7d7) popup_call_audio_out_window_t2_ParamLimits

0x05e1,	// (0x0005f7d7) popup_call_audio_out_window_t2

0x0001,

0xf07d,	// (0x0006e273) popup_call_audio_out_window_t_ParamLimits

0xf07d,	// (0x0006e273) popup_call_audio_out_window_t

0x05f6,	// (0x0005f7ec) bg_popup_call_pane_ParamLimits

0x05f6,	// (0x0005f7ec) bg_popup_call_pane

0x5b5b,	// (0x00064d51) call_thumbnail_pane_cp_ParamLimits

0x5b5b,	// (0x00064d51) call_thumbnail_pane_cp

0x067a,	// (0x0005f870) call_type_pane_cp01_ParamLimits

0x067a,	// (0x0005f870) call_type_pane_cp01

0x06be,	// (0x0005f8b4) popup_call_audio_first_window_g1_ParamLimits

0x06be,	// (0x0005f8b4) popup_call_audio_first_window_g1

0x070a,	// (0x0005f900) popup_call_audio_first_window_g2_ParamLimits

0x070a,	// (0x0005f900) popup_call_audio_first_window_g2

0x0001,

0xf082,	// (0x0006e278) popup_call_audio_first_window_g_ParamLimits

0xf082,	// (0x0006e278) popup_call_audio_first_window_g

0x074e,	// (0x0005f944) popup_call_audio_first_window_t1_ParamLimits

0x074e,	// (0x0005f944) popup_call_audio_first_window_t1

0x07fa,	// (0x0005f9f0) popup_call_audio_first_window_t4_ParamLimits

0x07fa,	// (0x0005f9f0) popup_call_audio_first_window_t4

0x0886,	// (0x0005fa7c) popup_call_audio_first_window_t5_ParamLimits

0x0886,	// (0x0005fa7c) popup_call_audio_first_window_t5

0x0002,

0xf087,	// (0x0006e27d) popup_call_audio_first_window_t_ParamLimits

0xf087,	// (0x0006e27d) popup_call_audio_first_window_t

0x08b5,	// (0x0005faab) bg_popup_call_pane_cp02

0x08bf,	// (0x0005fab5) call_type_pane_cp023

0x08c7,	// (0x0005fabd) popup_call_audio_wait_window_g1

0x08cf,	// (0x0005fac5) popup_call_audio_wait_window_g2

0x0001,

0xf08e,	// (0x0006e284) popup_call_audio_wait_window_g

0x08d7,	// (0x0005facd) popup_call_audio_wait_window_t3

0x08e5,	// (0x0005fadb) bg_popup_call_pane_cp03_ParamLimits

0x08e5,	// (0x0005fadb) bg_popup_call_pane_cp03

0x0945,	// (0x0005fb3b) call_thumbnail_pane_cp011_ParamLimits

0x0945,	// (0x0005fb3b) call_thumbnail_pane_cp011

0x0951,	// (0x0005fb47) call_type_pane_cp034_ParamLimits

0x0951,	// (0x0005fb47) call_type_pane_cp034

0x098d,	// (0x0005fb83) popup_call_audio_second_window_g1_ParamLimits

0x098d,	// (0x0005fb83) popup_call_audio_second_window_g1

0x09c9,	// (0x0005fbbf) popup_call_audio_second_window_g2_ParamLimits

0x09c9,	// (0x0005fbbf) popup_call_audio_second_window_g2

0x0001,

0xf093,	// (0x0006e289) popup_call_audio_second_window_g_ParamLimits

0xf093,	// (0x0006e289) popup_call_audio_second_window_g

0x0a05,	// (0x0005fbfb) popup_call_audio_second_window_t1_ParamLimits

0x0a05,	// (0x0005fbfb) popup_call_audio_second_window_t1

0x0a86,	// (0x0005fc7c) popup_call_audio_second_window_t2_ParamLimits

0x0a86,	// (0x0005fc7c) popup_call_audio_second_window_t2

0x0abc,	// (0x0005fcb2) popup_call_audio_second_window_t3_ParamLimits

0x0abc,	// (0x0005fcb2) popup_call_audio_second_window_t3

0x0002,

0xf098,	// (0x0006e28e) popup_call_audio_second_window_t_ParamLimits

0xf098,	// (0x0006e28e) popup_call_audio_second_window_t

0x08b5,	// (0x0005faab) bg_popup_call_pane_cp04

0x0af2,	// (0x0005fce8) list_conf_pane

0x0afa,	// (0x0005fcf0) popup_call_audio_conf_window_t1

0x0b08,	// (0x0005fcfe) call_thumbnail_pane_g1

0x0b10,	// (0x0005fd06) bg_pinb_pane_ParamLimits

0x0b10,	// (0x0005fd06) bg_pinb_pane

0x0b1e,	// (0x0005fd14) find_pinb_pane

0x0b10,	// (0x0005fd06) listscroll_pinb_pane_ParamLimits

0x0b10,	// (0x0005fd06) listscroll_pinb_pane

0x0b28,	// (0x0005fd1e) pinb_bg_pane_g1

0x0b28,	// (0x0005fd1e) pinb_bg_pane_g2

0x0b28,	// (0x0005fd1e) pinb_bg_pane_g3

0x0b28,	// (0x0005fd1e) pinb_bg_pane_g4

0x0b28,	// (0x0005fd1e) pinb_bg_pane_g5

0x0b28,	// (0x0005fd1e) pinb_bg_pane_g6

0x0b28,	// (0x0005fd1e) pinb_bg_pane_g7

0x0b28,	// (0x0005fd1e) pinb_bg_pane_g8

0x0b28,	// (0x0005fd1e) pinb_bg_pane_g9

0x0b28,	// (0x0005fd1e) pinb_bg_pane_g10

0x0009,

0xf09f,	// (0x0006e295) pinb_bg_pane_g

0x5b8a,	// (0x00064d80) grid_pinb_pane

0x0431,	// (0x0005f627) list_pinb_pane

0x0b32,	// (0x0005fd28) scroll_pane_cp01_ParamLimits

0x0b32,	// (0x0005fd28) scroll_pane_cp01

0x0b3f,	// (0x0005fd35) find_pinb_pane_g1_ParamLimits

0x0b3f,	// (0x0005fd35) find_pinb_pane_g1

0x0b57,	// (0x0005fd4d) find_pinb_pane_t1

0x0b69,	// (0x0005fd5f) find_pinb_pane_t2

0x0001,

0xf0b9,	// (0x0006e2af) find_pinb_pane_t

0x0b7e,	// (0x0005fd74) input_focus_pane_cp01_ParamLimits

0x0b7e,	// (0x0005fd74) input_focus_pane_cp01

0x5b94,	// (0x00064d8a) cell_pinb_pane_ParamLimits

0x5b94,	// (0x00064d8a) cell_pinb_pane

0x0b8a,	// (0x0005fd80) cell_pinb_pane_g1_ParamLimits

0x0b8a,	// (0x0005fd80) cell_pinb_pane_g1

0x0b98,	// (0x0005fd8e) cell_pinb_pane_g2_ParamLimits

0x0b98,	// (0x0005fd8e) cell_pinb_pane_g2

0x0b98,	// (0x0005fd8e) cell_pinb_pane_g3_ParamLimits

0x0b98,	// (0x0005fd8e) cell_pinb_pane_g3

0x0002,

0xf0be,	// (0x0006e2b4) cell_pinb_pane_g_ParamLimits

0xf0be,	// (0x0006e2b4) cell_pinb_pane_g

0x08b5,	// (0x0005faab) grid_highlight_pane_cp01

0x0ba6,	// (0x0005fd9c) list_pinb_item_pane_ParamLimits

0x0ba6,	// (0x0005fd9c) list_pinb_item_pane

0x0431,	// (0x0005f627) list_highlight_pane_cp02

0x0bb4,	// (0x0005fdaa) list_pinb_item_pane_g1_ParamLimits

0x0bb4,	// (0x0005fdaa) list_pinb_item_pane_g1

0x0b98,	// (0x0005fd8e) list_pinb_item_pane_g2_ParamLimits

0x0b98,	// (0x0005fd8e) list_pinb_item_pane_g2

0x0b8a,	// (0x0005fd80) list_pinb_item_pane_g3_ParamLimits

0x0b8a,	// (0x0005fd80) list_pinb_item_pane_g3

0x0b98,	// (0x0005fd8e) list_pinb_item_pane_g4_ParamLimits

0x0b98,	// (0x0005fd8e) list_pinb_item_pane_g4

0x0003,

0xf0c5,	// (0x0006e2bb) list_pinb_item_pane_g_ParamLimits

0xf0c5,	// (0x0006e2bb) list_pinb_item_pane_g

0x0bc2,	// (0x0005fdb8) list_pinb_item_pane_t1_ParamLimits

0x0bc2,	// (0x0005fdb8) list_pinb_item_pane_t1

0x5bc2,	// (0x00064db8) calc_display_pane

0x5bda,	// (0x00064dd0) calc_paper_pane

0x5bf6,	// (0x00064dec) grid_calc_pane

0x08b5,	// (0x0005faab) bg_list_pane_cp01

0x5c16,	// (0x00064e0c) clock_g1

0x5c1e,	// (0x00064e14) clock_g2

0x0001,

0xf0ce,	// (0x0006e2c4) clock_g

0x5c26,	// (0x00064e1c) clock_t1_ParamLimits

0x5c26,	// (0x00064e1c) clock_t1

0x5c3b,	// (0x00064e31) clock_t2_ParamLimits

0x5c3b,	// (0x00064e31) clock_t2

0x5c4d,	// (0x00064e43) clock_t3_ParamLimits

0x5c4d,	// (0x00064e43) clock_t3

0x5c5f,	// (0x00064e55) clock_t4_ParamLimits

0x5c5f,	// (0x00064e55) clock_t4

0x5c71,	// (0x00064e67) clock_t5_ParamLimits

0x5c71,	// (0x00064e67) clock_t5

0x5c86,	// (0x00064e7c) clock_t6_ParamLimits

0x5c86,	// (0x00064e7c) clock_t6

0x5c98,	// (0x00064e8e) clock_t7_ParamLimits

0x5c98,	// (0x00064e8e) clock_t7

0x5caa,	// (0x00064ea0) clock_t8_ParamLimits

0x5caa,	// (0x00064ea0) clock_t8

0x5cbc,	// (0x00064eb2) clock_t9_ParamLimits

0x5cbc,	// (0x00064eb2) clock_t9

0x0008,

0xf0d3,	// (0x0006e2c9) clock_t_ParamLimits

0xf0d3,	// (0x0006e2c9) clock_t

0x0bde,	// (0x0005fdd4) popup_clock_analogue_window_cp02

0x0bde,	// (0x0005fdd4) popup_clock_digital_window_cp01

0x08b5,	// (0x0005faab) listscroll_help_pane

0x08b5,	// (0x0005faab) phob_pre_status_pane

0x0be6,	// (0x0005fddc) grid_qdial_pane

0x0b10,	// (0x0005fd06) listscroll_mce_pane

0x0b10,	// (0x0005fd06) bg_notes_pane

0x0bf0,	// (0x0005fde6) list_notes_pane

0x5cce,	// (0x00064ec4) scroll_pane_cp06

0x0bfe,	// (0x0005fdf4) bg_calc_paper_pane

0x5cdb,	// (0x00064ed1) list_calc_pane

0x0c30,	// (0x0005fe26) bg_calc_display_pane

0x5cf5,	// (0x00064eeb) calc_display_pane_t1

0x5d0a,	// (0x00064f00) calc_display_pane_t2

0x5d1f,	// (0x00064f15) calc_display_pane_t3

0x0002,

0xf0e6,	// (0x0006e2dc) calc_display_pane_t

0x5d31,	// (0x00064f27) cell_calc_pane_ParamLimits

0x5d31,	// (0x00064f27) cell_calc_pane

0x0c78,	// (0x0005fe6e) bg_calc_paper_pane_g1

0x0c90,	// (0x0005fe86) bg_calc_paper_pane_g2

0x0c84,	// (0x0005fe7a) bg_calc_paper_pane_g3

0x0ca8,	// (0x0005fe9e) bg_calc_paper_pane_g4

0x0c9c,	// (0x0005fe92) bg_calc_paper_pane_g5

0x5d58,	// (0x00064f4e) bg_calc_paper_pane_g6

0x5d67,	// (0x00064f5d) bg_calc_paper_pane_g7

0x5d76,	// (0x00064f6c) bg_calc_paper_pane_g8

0x0007,

0xf0ed,	// (0x0006e2e3) bg_calc_paper_pane_g

0x5d85,	// (0x00064f7b) calc_bg_paper_pane_g9

0x5d94,	// (0x00064f8a) list_calc_item_pane_ParamLimits

0x5d94,	// (0x00064f8a) list_calc_item_pane

0x0cb4,	// (0x0005feaa) list_calc_item_pane_g1

0x5dad,	// (0x00064fa3) list_calc_item_pane_t1_ParamLimits

0x5dad,	// (0x00064fa3) list_calc_item_pane_t1

0x5dbf,	// (0x00064fb5) list_calc_item_pane_t2_ParamLimits

0x5dbf,	// (0x00064fb5) list_calc_item_pane_t2

0x0001,

0xf0fe,	// (0x0006e2f4) list_calc_item_pane_t_ParamLimits

0xf0fe,	// (0x0006e2f4) list_calc_item_pane_t

0x0b28,	// (0x0005fd1e) cell_calc_pane_g1

0x0cd3,	// (0x0005fec9) grid_highlight_pane_cp02

0x0d08,	// (0x0005fefe) bg_calc_display_pane_g1

0x5ded,	// (0x00064fe3) bg_calc_display_pane_g2

0x0cf5,	// (0x0005feeb) bg_calc_display_pane_g3

0x0002,

0xf108,	// (0x0006e2fe) bg_calc_display_pane_g

0x5df7,	// (0x00064fed) cell_qdial_pane_ParamLimits

0x5df7,	// (0x00064fed) cell_qdial_pane

0x5e09,	// (0x00064fff) cell_qdial_pane_g1_ParamLimits

0x5e09,	// (0x00064fff) cell_qdial_pane_g1

0x5e16,	// (0x0006500c) cell_qdial_pane_g2_ParamLimits

0x5e16,	// (0x0006500c) cell_qdial_pane_g2

0x0d11,	// (0x0005ff07) cell_qdial_pane_g3_ParamLimits

0x0d11,	// (0x0005ff07) cell_qdial_pane_g3

0x0003,

0xf10f,	// (0x0006e305) cell_qdial_pane_g_ParamLimits

0xf10f,	// (0x0006e305) cell_qdial_pane_g

0x5e34,	// (0x0006502a) cell_qdial_pane_t1_ParamLimits

0x5e34,	// (0x0006502a) cell_qdial_pane_t1

0x5e4c,	// (0x00065042) cell_qdial_pane_t2_ParamLimits

0x5e4c,	// (0x00065042) cell_qdial_pane_t2

0x5e5f,	// (0x00065055) cell_qdial_pane_t3_ParamLimits

0x5e5f,	// (0x00065055) cell_qdial_pane_t3

0x0002,

0xf118,	// (0x0006e30e) cell_qdial_pane_t_ParamLimits

0xf118,	// (0x0006e30e) cell_qdial_pane_t

0x08b5,	// (0x0005faab) grid_highlight_pane_cp04

0x0d1d,	// (0x0005ff13) thumbnail_qdial_pane_ParamLimits

0x0d1d,	// (0x0005ff13) thumbnail_qdial_pane

0x0d79,	// (0x0005ff6f) list_help_pane

0x0d83,	// (0x0005ff79) scroll_pane_cp02

0x5e72,	// (0x00065068) help_list_pane_t1_ParamLimits

0x5e72,	// (0x00065068) help_list_pane_t1

0x5e91,	// (0x00065087) bg_notes_pane_g2

0x5e99,	// (0x0006508f) bg_notes_pane_g3

0x5ea1,	// (0x00065097) notes_bg_pane_g1

0x5ea9,	// (0x0006509f) notes_bg_pane_g4

0x5eb1,	// (0x000650a7) notes_bg_pane_g5

0x5eb9,	// (0x000650af) notes_bg_pane_g6

0x5ec1,	// (0x000650b7) notes_bg_pane_g7

0x5ec9,	// (0x000650bf) notes_bg_pane_g8

0x5ed1,	// (0x000650c7) notes_bg_pane_g9

0x0006,

0xf136,	// (0x0006e32c) notes_bg_pane_g

0x5ed9,	// (0x000650cf) list_notes_text_pane_ParamLimits

0x5ed9,	// (0x000650cf) list_notes_text_pane

0x0dd4,	// (0x0005ffca) list_notes_text_pane_g1

0x4c7d,	// (0x00063e73) list_notes_text_pane_t1

0x5efd,	// (0x000650f3) listscroll_cale_week_pane

0x5f22,	// (0x00065118) bg_cale_heading_pane

0x0df7,	// (0x0005ffed) bg_cale_pane_cp01

0x5f3a,	// (0x00065130) cale_week_corner_pane

0x5f54,	// (0x0006514a) cale_week_day_heading_pane

0x5f6c,	// (0x00065162) cale_week_scroll_pane_g1

0x5f7f,	// (0x00065175) cale_week_scroll_pane_g2

0x5f92,	// (0x00065188) cale_week_scroll_pane_g3

0x5fa5,	// (0x0006519b) cale_week_scroll_pane_g4

0x5fb8,	// (0x000651ae) cale_week_scroll_pane_g5

0x5fcb,	// (0x000651c1) cale_week_scroll_pane_g6

0x5fde,	// (0x000651d4) cale_week_scroll_pane_g7

0x5ff1,	// (0x000651e7) cale_week_scroll_pane_g8

0x6004,	// (0x000651fa) cale_week_scroll_pane_g9

0x6017,	// (0x0006520d) cale_week_scroll_pane_g10

0x602a,	// (0x00065220) cale_week_scroll_pane_g11

0x603d,	// (0x00065233) cale_week_scroll_pane_g12

0x6050,	// (0x00065246) cale_week_scroll_pane_g13

0x6063,	// (0x00065259) cale_week_scroll_pane_g14

0x6076,	// (0x0006526c) cale_week_scroll_pane_g15

0x000f,

0xf145,	// (0x0006e33b) cale_week_scroll_pane_g

0x609c,	// (0x00065292) cale_week_time_pane

0x60af,	// (0x000652a5) grid_cale_week_pane

0x0e26,	// (0x0006001c) scroll_pane_cp08

0x60c4,	// (0x000652ba) cell_cale_week_pane_ParamLimits

0x60c4,	// (0x000652ba) cell_cale_week_pane

0x6112,	// (0x00065308) cale_week_day_heading_pane_t1

0x614d,	// (0x00065343) cale_week_day_heading_pane_t2

0x6188,	// (0x0006537e) cale_week_day_heading_pane_t3

0x61c3,	// (0x000653b9) cale_week_day_heading_pane_t4

0x61fe,	// (0x000653f4) cale_week_day_heading_pane_t5

0x6239,	// (0x0006542f) cale_week_day_heading_pane_t6

0x6274,	// (0x0006546a) cale_week_day_heading_pane_t7

0x0006,

0xf166,	// (0x0006e35c) cale_week_day_heading_pane_t

0x0e43,	// (0x00060039) bg_cale_side_pane

0x62af,	// (0x000654a5) cale_week_time_pane_t1

0x62e9,	// (0x000654df) cale_week_time_pane_t2

0x6323,	// (0x00065519) cale_week_time_pane_t3

0x635d,	// (0x00065553) cale_week_time_pane_t4

0x6397,	// (0x0006558d) cale_week_time_pane_t5

0x63d1,	// (0x000655c7) cale_week_time_pane_t6

0x640b,	// (0x00065601) cale_week_time_pane_t7

0x6445,	// (0x0006563b) cale_week_time_pane_t8

0x0007,

0xf175,	// (0x0006e36b) cale_week_time_pane_t

0x647f,	// (0x00065675) cell_cale_week_pane_g2

0x64a3,	// (0x00065699) cell_cale_week_pane_g3_ParamLimits

0x64a3,	// (0x00065699) cell_cale_week_pane_g3

0x0e51,	// (0x00060047) grid_highlight_pane_cp07

0x0e59,	// (0x0006004f) listscroll_gms_pane

0x0e63,	// (0x00060059) grid_gms_pane

0x0e6c,	// (0x00060062) listscroll_gms_pane_g1

0x0e74,	// (0x0006006a) listscroll_gms_pane_g2

0x0001,

0xf186,	// (0x0006e37c) listscroll_gms_pane_g

0x64bb,	// (0x000656b1) scroll_pane_cp010

0x64c4,	// (0x000656ba) cell_gms_pane_ParamLimits

0x64c4,	// (0x000656ba) cell_gms_pane

0x64d5,	// (0x000656cb) cell_gms_pane_g1

0x0e7c,	// (0x00060072) cell_gms_pane_g2

0x0dd4,	// (0x0005ffca) cell_gms_pane_g3

0x0e84,	// (0x0006007a) cell_gms_pane_g4

0x0003,

0xf18b,	// (0x0006e381) cell_gms_pane_g

0x0e8d,	// (0x00060083) grid_highlight_pane_cp09

0x9743,	// (0x00068939) phob_pre_status_pane_g1

0x974b,	// (0x00068941) phob_pre_status_pane_g2

0x9753,	// (0x00068949) phob_pre_status_pane_g3

0x975b,	// (0x00068951) phob_pre_status_pane_g4

0x0004,

0xf579,	// (0x0006e76f) phob_pre_status_pane_g

0x976b,	// (0x00068961) phob_pre_status_pane_t1

0x9779,	// (0x0006896f) phob_pre_status_pane_t2

0x9787,	// (0x0006897d) phob_pre_status_pane_t3

0x0002,

0xf584,	// (0x0006e77a) phob_pre_status_pane_t

0x64dd,	// (0x000656d3) bg_list_pane_cp05

0x64e5,	// (0x000656db) grid_vorec_pane

0x64ed,	// (0x000656e3) vorec_t1

0x64fb,	// (0x000656f1) vorec_t2

0x6509,	// (0x000656ff) vorec_t3

0x6517,	// (0x0006570d) vorec_t4

0xdb69,	// (0x0006cd5f) vorec_t5

0xdb77,	// (0x0006cd6d) vorec_t6

0x0004,

0xf194,	// (0x0006e38a) vorec_t

0xdb85,	// (0x0006cd7b) wait_bar_pane_cp01

0x6533,	// (0x00065729) cell_vorec_pane_ParamLimits

0x6533,	// (0x00065729) cell_vorec_pane

0x6546,	// (0x0006573c) cell_vorec_pane_g1

0x08b5,	// (0x0005faab) grid_highlight_pane_cp05

0x0ba6,	// (0x0005fd9c) cams_zoom_pane

0x0ba6,	// (0x0005fd9c) image_vga_pane

0x0b98,	// (0x0005fd8e) main_camera_pane_g1

0x0b98,	// (0x0005fd8e) main_camera_pane_g2

0x0b98,	// (0x0005fd8e) main_camera_pane_g3

0x0b98,	// (0x0005fd8e) main_camera_pane_g4

0x0b98,	// (0x0005fd8e) main_camera_pane_g5

0x0b98,	// (0x0005fd8e) main_camera_pane_g6

0x0b98,	// (0x0005fd8e) main_camera_pane_g7

0x0007,

0xf19f,	// (0x0006e395) main_camera_pane_g

0x6550,	// (0x00065746) main_camera_pane_t1

0x6550,	// (0x00065746) main_camera_pane_t2

0x0001,

0xf1b0,	// (0x0006e3a6) main_camera_pane_t

0x6564,	// (0x0006575a) cams_zoom_pane_cp_ParamLimits

0x6564,	// (0x0006575a) cams_zoom_pane_cp

0x6592,	// (0x00065788) image_cif_pane_ParamLimits

0x6592,	// (0x00065788) image_cif_pane

0x0431,	// (0x0005f627) image_subqcif_pane

0x65a0,	// (0x00065796) main_video_pane_g1_ParamLimits

0x65a0,	// (0x00065796) main_video_pane_g1

0x65c8,	// (0x000657be) main_video_pane_g2_ParamLimits

0x65c8,	// (0x000657be) main_video_pane_g2

0x65fb,	// (0x000657f1) main_video_pane_g3_ParamLimits

0x65fb,	// (0x000657f1) main_video_pane_g3

0x65fb,	// (0x000657f1) main_video_pane_g4_ParamLimits

0x65fb,	// (0x000657f1) main_video_pane_g4

0x6629,	// (0x0006581f) main_video_pane_g5_ParamLimits

0x6629,	// (0x0006581f) main_video_pane_g5

0x6637,	// (0x0006582d) main_video_pane_g6_ParamLimits

0x6637,	// (0x0006582d) main_video_pane_g6

0x0006,

0xf1b5,	// (0x0006e3ab) main_video_pane_g_ParamLimits

0xf1b5,	// (0x0006e3ab) main_video_pane_g

0x665f,	// (0x00065855) main_video_pane_t1_ParamLimits

0x665f,	// (0x00065855) main_video_pane_t1

0x6699,	// (0x0006588f) cams_zoom_pane_g1

0x6699,	// (0x0006588f) cams_zoom_pane_g2

0x6699,	// (0x0006588f) cams_zoom_pane_g3

0x6699,	// (0x0006588f) cams_zoom_pane_g4

0x0003,

0xf1c4,	// (0x0006e3ba) cams_zoom_pane_g

0x66af,	// (0x000658a5) grid_cams_pane

0x66bb,	// (0x000658b1) linegrid_cams_pane

0x66c7,	// (0x000658bd) cell_cams_pane_ParamLimits

0x66c7,	// (0x000658bd) cell_cams_pane

0x66da,	// (0x000658d0) cams_burst_image_pane

0x66e2,	// (0x000658d8) cell_cams_pane_g1

0x08b5,	// (0x0005faab) grid_highlight_pane_cp03

0x0b28,	// (0x0005fd1e) mp_bg_pane_g1

0x0431,	// (0x0005f627) bg_list_pane_cp03

0x0431,	// (0x0005f627) bg_mp_pane

0x0431,	// (0x0005f627) grid_mp_pane

0x6699,	// (0x0006588f) media_player_g1

0xeb7e,	// (0x0006dd74) media_player_t1

0xeb7e,	// (0x0006dd74) media_player_t2

0xeb7e,	// (0x0006dd74) media_player_t3

0xeb7e,	// (0x0006dd74) media_player_t4

0xeb7e,	// (0x0006dd74) media_player_t5

0xeb7e,	// (0x0006dd74) media_player_t6

0xeb7e,	// (0x0006dd74) media_player_t7

0x0006,

0xf563,	// (0x0006e759) media_player_t

0x0431,	// (0x0005f627) wait_bar_pane_cp02

0xf548,	// (0x0006e73e) main_usb_pane_t

0x7f1a,	// (0x00067110) cell_mp_pane

0x0b28,	// (0x0005fd1e) cell_mp_pane_g1

0x08b5,	// (0x0005faab) grid_highlight_pane_cp06

0x66f6,	// (0x000658ec) grid_skin_colour_pane

0x66fe,	// (0x000658f4) list_highlight_pane_cp03

0x6706,	// (0x000658fc) skin_g1

0x670e,	// (0x00065904) skin_t1

0x671d,	// (0x00065913) skin_t2

0x0001,

0xf1f2,	// (0x0006e3e8) skin_t

0x672b,	// (0x00065921) cell_skin_colour_pane_ParamLimits

0x672b,	// (0x00065921) cell_skin_colour_pane

0x6743,	// (0x00065939) cell_skin_colour_pane_g1

0x67b3,	// (0x000659a9) call_video_g1_ParamLimits

0x67b3,	// (0x000659a9) call_video_g1

0x67bf,	// (0x000659b5) call_video_g2_ParamLimits

0x67bf,	// (0x000659b5) call_video_g2

0x0001,

0xf1f7,	// (0x0006e3ed) call_video_g_ParamLimits

0xf1f7,	// (0x0006e3ed) call_video_g

0x680f,	// (0x00065a05) call_video_uplink_pane_cp1_ParamLimits

0x680f,	// (0x00065a05) call_video_uplink_pane_cp1

0x6879,	// (0x00065a6f) call_video_uplink_pane_cp2

0x68d3,	// (0x00065ac9) video_down_crop_pane_ParamLimits

0x68d3,	// (0x00065ac9) video_down_crop_pane

0x699d,	// (0x00065b93) video_down_pane_ParamLimits

0x699d,	// (0x00065b93) video_down_pane

0x6a4d,	// (0x00065c43) video_down_subqcif_pane_ParamLimits

0x6a4d,	// (0x00065c43) video_down_subqcif_pane

0x6a65,	// (0x00065c5b) video_down_subqcif_pane_cp_ParamLimits

0x6a65,	// (0x00065c5b) video_down_subqcif_pane_cp

0x6aa5,	// (0x00065c9b) im_reading_pane_ParamLimits

0x6aa5,	// (0x00065c9b) im_reading_pane

0x6ab7,	// (0x00065cad) im_writing_pane_ParamLimits

0x6ab7,	// (0x00065cad) im_writing_pane

0x6ad5,	// (0x00065ccb) im_reading_pane_t1

0x6b0d,	// (0x00065d03) list_im_pane

0x6b1e,	// (0x00065d14) scroll_pane_cp07

0x6b37,	// (0x00065d2d) im_writing_pane_t1_ParamLimits

0x6b37,	// (0x00065d2d) im_writing_pane_t1

0x6b4c,	// (0x00065d42) im_writing_pane_t2_ParamLimits

0x6b4c,	// (0x00065d42) im_writing_pane_t2

0x0001,

0xf201,	// (0x0006e3f7) im_writing_pane_t_ParamLimits

0xf201,	// (0x0006e3f7) im_writing_pane_t

0x08b5,	// (0x0005faab) input_focus_pane_cp04

0x08b5,	// (0x0005faab) input_focus_pane_cp05

0x6b69,	// (0x00065d5f) list_im_single_pane_ParamLimits

0x6b69,	// (0x00065d5f) list_im_single_pane

0x6b81,	// (0x00065d77) list_single_im_pane_t1

0x64dd,	// (0x000656d3) blid_accuracy_pane

0x64dd,	// (0x000656d3) blid_compass_pane

0xeb8e,	// (0x0006dd84) main_location_t1

0xeb8e,	// (0x0006dd84) main_location_t2

0xeb8e,	// (0x0006dd84) main_location_t3

0x0002,

0xf572,	// (0x0006e768) main_location_t

0x08b5,	// (0x0005faab) aid_levels_location

0x0b28,	// (0x0005fd1e) blid_accuracy_pane_g1

0x0b28,	// (0x0005fd1e) blid_accuracy_pane_g2

0x0001,

0xf255,	// (0x0006e44b) blid_accuracy_pane_g

0x6bbb,	// (0x00065db1) wml_content_pane

0x6bf9,	// (0x00065def) wml_button_pane_ParamLimits

0x6bf9,	// (0x00065def) wml_button_pane

0x6c0d,	// (0x00065e03) wml_list_single_large_pane_ParamLimits

0x6c0d,	// (0x00065e03) wml_list_single_large_pane

0x6c24,	// (0x00065e1a) wml_list_single_medium_pane_ParamLimits

0x6c24,	// (0x00065e1a) wml_list_single_medium_pane

0x6c3c,	// (0x00065e32) wml_list_single_small_pane_ParamLimits

0x6c3c,	// (0x00065e32) wml_list_single_small_pane

0x6c57,	// (0x00065e4d) wml_selection_box_pane_ParamLimits

0x6c57,	// (0x00065e4d) wml_selection_box_pane

0x6c6a,	// (0x00065e60) wml_list_single_pane_t1

0x6c79,	// (0x00065e6f) wml_list_single_medium_pane_t1

0x6c88,	// (0x00065e7e) wml_list_single_large_pane_t1

0x6c97,	// (0x00065e8d) input_focus_pane_cp02_ParamLimits

0x6c97,	// (0x00065e8d) input_focus_pane_cp02

0x6caa,	// (0x00065ea0) wml_selection_box_pane_g1

0x6cb3,	// (0x00065ea9) wml_selection_box_pane_t1_ParamLimits

0x6cb3,	// (0x00065ea9) wml_selection_box_pane_t1

0x0b10,	// (0x0005fd06) bg_wml_button_pane_ParamLimits

0x0b10,	// (0x0005fd06) bg_wml_button_pane

0x6ccb,	// (0x00065ec1) wml_button_pane_g1

0x6cd3,	// (0x00065ec9) wml_button_pane_t1

0x6ccb,	// (0x00065ec1) wml_button_bg_pane_g1

0x6ce3,	// (0x00065ed9) wml_button_bg_pane_g2

0x6ceb,	// (0x00065ee1) wml_button_bg_pane_g3

0x6cf3,	// (0x00065ee9) wml_button_bg_pane_g4

0x6cfb,	// (0x00065ef1) wml_button_bg_pane_g5

0x6d03,	// (0x00065ef9) wml_button_bg_pane_g6

0x6d0b,	// (0x00065f01) wml_button_bg_pane_g7

0x6d13,	// (0x00065f09) wml_button_bg_pane_g8

0x6d1b,	// (0x00065f11) wml_button_bg_pane_g9

0x0008,

0xf206,	// (0x0006e3fc) wml_button_bg_pane_g

0x6d23,	// (0x00065f19) bg_list_pane_cp02

0x6d2c,	// (0x00065f22) mce_header_pane_ParamLimits

0x6d2c,	// (0x00065f22) mce_header_pane

0x6d40,	// (0x00065f36) mce_icon_pane

0x6d40,	// (0x00065f36) mce_image_pane

0x6d49,	// (0x00065f3f) mce_text_pane_ParamLimits

0x6d49,	// (0x00065f3f) mce_text_pane

0x6d5d,	// (0x00065f53) scroll_pane_cp03

0x6d5d,	// (0x00065f53) scroll_pane_cp04

0x6d65,	// (0x00065f5b) scroll_pane_cp05_ParamLimits

0x6d65,	// (0x00065f5b) scroll_pane_cp05

0x6d71,	// (0x00065f67) mce_header_field_pane_ParamLimits

0x6d71,	// (0x00065f67) mce_header_field_pane

0x6d91,	// (0x00065f87) mce_header_field_pane_2_ParamLimits

0x6d91,	// (0x00065f87) mce_header_field_pane_2

0x6da7,	// (0x00065f9d) mce_header_field_pane_3

0x6daf,	// (0x00065fa5) list_single_mce_message_pane_ParamLimits

0x6daf,	// (0x00065fa5) list_single_mce_message_pane

0x6dc6,	// (0x00065fbc) list_single_mce_smart_pane_ParamLimits

0x6dc6,	// (0x00065fbc) list_single_mce_smart_pane

0x6de8,	// (0x00065fde) input_focus_pane_cp03

0x6df1,	// (0x00065fe7) list_header_data_pane

0x6df9,	// (0x00065fef) mce_header_field_pane_t1

0x6e07,	// (0x00065ffd) list_single_mce_header_pane_ParamLimits

0x6e07,	// (0x00065ffd) list_single_mce_header_pane

0x6e1f,	// (0x00066015) list_single_mce_header_pane_t1

0x6e2e,	// (0x00066024) list_single_mce_message_pane_g1

0x6e37,	// (0x0006602d) list_single_mce_message_pane_t1

0x6e6c,	// (0x00066062) bg_cale_heading_pane_cp01_ParamLimits

0x6e6c,	// (0x00066062) bg_cale_heading_pane_cp01

0x6e9b,	// (0x00066091) bg_cale_pane_cp02_ParamLimits

0x6e9b,	// (0x00066091) bg_cale_pane_cp02

0x6ec8,	// (0x000660be) cale_month_corner_pane

0x6ee2,	// (0x000660d8) cale_month_day_heading_pane_ParamLimits

0x6ee2,	// (0x000660d8) cale_month_day_heading_pane

0x6f11,	// (0x00066107) cale_month_pane_g1_ParamLimits

0x6f11,	// (0x00066107) cale_month_pane_g1

0x6f35,	// (0x0006612b) cale_month_pane_g2_ParamLimits

0x6f35,	// (0x0006612b) cale_month_pane_g2

0x6f54,	// (0x0006614a) cale_month_pane_g3_ParamLimits

0x6f54,	// (0x0006614a) cale_month_pane_g3

0x6f90,	// (0x00066186) cale_month_pane_g4_ParamLimits

0x6f90,	// (0x00066186) cale_month_pane_g4

0x6fcc,	// (0x000661c2) cale_month_pane_g5_ParamLimits

0x6fcc,	// (0x000661c2) cale_month_pane_g5

0x7008,	// (0x000661fe) cale_month_pane_g6_ParamLimits

0x7008,	// (0x000661fe) cale_month_pane_g6

0x7044,	// (0x0006623a) cale_month_pane_g7_ParamLimits

0x7044,	// (0x0006623a) cale_month_pane_g7

0x7080,	// (0x00066276) cale_month_pane_g8_ParamLimits

0x7080,	// (0x00066276) cale_month_pane_g8

0x70bc,	// (0x000662b2) cale_month_pane_g9_ParamLimits

0x70bc,	// (0x000662b2) cale_month_pane_g9

0x70f6,	// (0x000662ec) cale_month_pane_g10_ParamLimits

0x70f6,	// (0x000662ec) cale_month_pane_g10

0x7130,	// (0x00066326) cale_month_pane_g11_ParamLimits

0x7130,	// (0x00066326) cale_month_pane_g11

0x716a,	// (0x00066360) cale_month_pane_g12_ParamLimits

0x716a,	// (0x00066360) cale_month_pane_g12

0x71a4,	// (0x0006639a) cale_month_pane_g13_ParamLimits

0x71a4,	// (0x0006639a) cale_month_pane_g13

0x000c,

0xf219,	// (0x0006e40f) cale_month_pane_g_ParamLimits

0xf219,	// (0x0006e40f) cale_month_pane_g

0x71f0,	// (0x000663e6) cale_month_week_pane

0x7203,	// (0x000663f9) grid_cale_month_pane_ParamLimits

0x7203,	// (0x000663f9) grid_cale_month_pane

0x7229,	// (0x0006641f) cale_month_day_heading_pane_t1

0x72af,	// (0x000664a5) cale_month_day_heading_pane_t2

0x7340,	// (0x00066536) cale_month_day_heading_pane_t3

0x73d1,	// (0x000665c7) cale_month_day_heading_pane_t4

0x7462,	// (0x00066658) cale_month_day_heading_pane_t5

0x74f3,	// (0x000666e9) cale_month_day_heading_pane_t6

0x7584,	// (0x0006677a) cale_month_day_heading_pane_t7

0x0006,

0xf234,	// (0x0006e42a) cale_month_day_heading_pane_t

0x0e43,	// (0x00060039) bg_cale_side_pane_cp01

0x7615,	// (0x0006680b) cale_month_week_pane_t1

0x764e,	// (0x00066844) cale_month_week_pane_t2

0x7687,	// (0x0006687d) cale_month_week_pane_t3

0x76c0,	// (0x000668b6) cale_month_week_pane_t4

0x76f9,	// (0x000668ef) cale_month_week_pane_t5

0x7732,	// (0x00066928) cale_month_week_pane_t6

0x0005,

0xf243,	// (0x0006e439) cale_month_week_pane_t

0x776b,	// (0x00066961) cell_cale_month_pane_ParamLimits

0x776b,	// (0x00066961) cell_cale_month_pane

0x7859,	// (0x00066a4f) cell_cale_month_pane_g1

0x7865,	// (0x00066a5b) cell_cale_month_pane_t1_ParamLimits

0x7865,	// (0x00066a5b) cell_cale_month_pane_t1

0x0e51,	// (0x00060047) grid_highlight_pane_cp08

0x0b28,	// (0x0005fd1e) main_smil_g1

0x7885,	// (0x00066a7b) smil_status_pane

0x788e,	// (0x00066a84) smil_text_pane

0xea56,	// (0x0006dc4c) bg_popup_call3_rect_pane_g8

0xea5e,	// (0x0006dc54) bg_popup_call3_rect_pane_g9

0x0008,

0xf4f3,	// (0x0006e6e9) bg_popup_call3_rect_pane_g

0xec6f,	// (0x0006de65) smil_status_volume_pane_g1

0x78a0,	// (0x00066a96) smil_status_pane_t1

0x9a4f,	// (0x00068c45) volume_smil_pane

0x78b7,	// (0x00066aad) list_smil_text_pane

0x78c1,	// (0x00066ab7) scroll_pane_cp011

0x78ca,	// (0x00066ac0) smil_text_list_pane_t1_ParamLimits

0x78ca,	// (0x00066ac0) smil_text_list_pane_t1

0x7909,	// (0x00066aff) aid_volume_smil_ParamLimits

0x7909,	// (0x00066aff) aid_volume_smil

0x0b28,	// (0x0005fd1e) smil_volume_pane_g1

0x0b28,	// (0x0005fd1e) smil_volume_pane_g2

0x0001,

0xf255,	// (0x0006e44b) smil_volume_pane_g

0x5efd,	// (0x000650f3) listscroll_cale_day_pane

0x792b,	// (0x00066b21) bg_cale_pane

0x7943,	// (0x00066b39) list_cale_pane

0x7966,	// (0x00066b5c) scroll_pane_cp09

0x7977,	// (0x00066b6d) cale_bg_pane_g1

0x797f,	// (0x00066b75) cale_bg_pane_g2

0x7987,	// (0x00066b7d) cale_bg_pane_g3

0x798f,	// (0x00066b85) cale_bg_pane_g4

0x7997,	// (0x00066b8d) cale_bg_pane_g5

0x799f,	// (0x00066b95) cale_bg_pane_g6

0x79a7,	// (0x00066b9d) cale_bg_pane_g7

0x79af,	// (0x00066ba5) cale_bg_pane_g8

0x79b7,	// (0x00066bad) cale_bg_pane_g9

0x0008,

0xf25a,	// (0x0006e450) cale_bg_pane_g

0x79c7,	// (0x00066bbd) list_cale_time_pane_ParamLimits

0x79c7,	// (0x00066bbd) list_cale_time_pane

0x79db,	// (0x00066bd1) list_cale_time_pane_g1_ParamLimits

0x79db,	// (0x00066bd1) list_cale_time_pane_g1

0x79e7,	// (0x00066bdd) list_cale_time_pane_g2_ParamLimits

0x79e7,	// (0x00066bdd) list_cale_time_pane_g2

0x79f4,	// (0x00066bea) list_cale_time_pane_g3_ParamLimits

0x79f4,	// (0x00066bea) list_cale_time_pane_g3

0x7a00,	// (0x00066bf6) list_cale_time_pane_g4_ParamLimits

0x7a00,	// (0x00066bf6) list_cale_time_pane_g4

0x7a0c,	// (0x00066c02) list_cale_time_pane_g5_ParamLimits

0x7a0c,	// (0x00066c02) list_cale_time_pane_g5

0x0005,

0xf26d,	// (0x0006e463) list_cale_time_pane_g_ParamLimits

0xf26d,	// (0x0006e463) list_cale_time_pane_g

0x7a25,	// (0x00066c1b) list_cale_time_pane_t1_ParamLimits

0x7a25,	// (0x00066c1b) list_cale_time_pane_t1

0x7a4d,	// (0x00066c43) list_cale_time_pane_t2_ParamLimits

0x7a4d,	// (0x00066c43) list_cale_time_pane_t2

0x8104,	// (0x000672fa) aid_blid_cardinal_pane

0x814e,	// (0x00067344) compass_pane_t4

0x7a75,	// (0x00066c6b) list_cale_time_pane_t4_ParamLimits

0x7a75,	// (0x00066c6b) list_cale_time_pane_t4

0x815c,	// (0x00067352) compass_pane_t5

0x816a,	// (0x00067360) compass_pane_t6

0x8178,	// (0x0006736e) compass_pane_t7

0x8204,	// (0x000673fa) navi_pane_cc_t1

0x840a,	// (0x00067600) aid_phob_thumbnail_center_pane

0x87d5,	// (0x000679cb) main_postcard_pane_g4_ParamLimits

0x0002,

0xf27a,	// (0x0006e470) list_cale_time_pane_t_ParamLimits

0xf27a,	// (0x0006e470) list_cale_time_pane_t

0x050e,	// (0x0005f704) bg_popup_window_pane_cp02_ParamLimits

0x050e,	// (0x0005f704) bg_popup_window_pane_cp02

0x7a9d,	// (0x00066c93) heading_pane_cp01_ParamLimits

0x7a9d,	// (0x00066c93) heading_pane_cp01

0x7aa9,	// (0x00066c9f) loc_req_pane_ParamLimits

0x7aa9,	// (0x00066c9f) loc_req_pane

0x7ab9,	// (0x00066caf) loc_type_pane_ParamLimits

0x7ab9,	// (0x00066caf) loc_type_pane

0x7acb,	// (0x00066cc1) loc_type_pane_t1_ParamLimits

0x7acb,	// (0x00066cc1) loc_type_pane_t1

0x7add,	// (0x00066cd3) loc_type_pane_t2_ParamLimits

0x7add,	// (0x00066cd3) loc_type_pane_t2

0x7aef,	// (0x00066ce5) loc_type_pane_t3_ParamLimits

0x7aef,	// (0x00066ce5) loc_type_pane_t3

0x0002,

0xf281,	// (0x0006e477) loc_type_pane_t_ParamLimits

0xf281,	// (0x0006e477) loc_type_pane_t

0x7b01,	// (0x00066cf7) list_loc_req_pane

0x7b0b,	// (0x00066d01) scroll_pane_cp012

0x7b14,	// (0x00066d0a) list_single_loc_request_popup_menu_pane_ParamLimits

0x7b14,	// (0x00066d0a) list_single_loc_request_popup_menu_pane

0x7b26,	// (0x00066d1c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x7b26,	// (0x00066d1c) list_single_loc_request_popup_menu_pane_g1

0x7b32,	// (0x00066d28) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x7b32,	// (0x00066d28) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf288,	// (0x0006e47e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf288,	// (0x0006e47e) list_single_loc_request_popup_menu_pane_g

0x7b3e,	// (0x00066d34) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x7b3e,	// (0x00066d34) list_single_loc_request_popup_menu_pane_t1

0x7b54,	// (0x00066d4a) bg_popup_window_pane_cp03_ParamLimits

0x7b54,	// (0x00066d4a) bg_popup_window_pane_cp03

0x7b62,	// (0x00066d58) heading_loc_req_pane_ParamLimits

0x7b62,	// (0x00066d58) heading_loc_req_pane

0x7b6e,	// (0x00066d64) popup_dyc_status_message_window_g1_ParamLimits

0x7b6e,	// (0x00066d64) popup_dyc_status_message_window_g1

0x7b7a,	// (0x00066d70) popup_dyc_status_message_window_t1_ParamLimits

0x7b7a,	// (0x00066d70) popup_dyc_status_message_window_t1

0x7b8c,	// (0x00066d82) popup_dyc_status_message_window_t2_ParamLimits

0x7b8c,	// (0x00066d82) popup_dyc_status_message_window_t2

0x7b9e,	// (0x00066d94) popup_dyc_status_message_window_t3_ParamLimits

0x7b9e,	// (0x00066d94) popup_dyc_status_message_window_t3

0x0002,

0xf28d,	// (0x0006e483) popup_dyc_status_message_window_t_ParamLimits

0xf28d,	// (0x0006e483) popup_dyc_status_message_window_t

0x08b5,	// (0x0005faab) bg_heading_pane_cp01

0x7bb0,	// (0x00066da6) heading_loc_req_pane_g1

0x7bb8,	// (0x00066dae) heading_loc_req_pane_g2

0x7bc0,	// (0x00066db6) heading_loc_req_pane_g3

0x0002,

0xf294,	// (0x0006e48a) heading_loc_req_pane_g

0x7bc8,	// (0x00066dbe) heading_loc_req_pane_t1

0x7bf1,	// (0x00066de7) bg_popup_sub_pane_cp01_ParamLimits

0x7bf1,	// (0x00066de7) bg_popup_sub_pane_cp01

0x7bff,	// (0x00066df5) popup_cale_events_window_g1_ParamLimits

0x7bff,	// (0x00066df5) popup_cale_events_window_g1

0x7c1f,	// (0x00066e15) popup_cale_events_window_g2_ParamLimits

0x7c1f,	// (0x00066e15) popup_cale_events_window_g2

0x0001,

0xf2c8,	// (0x0006e4be) popup_cale_events_window_g_ParamLimits

0xf2c8,	// (0x0006e4be) popup_cale_events_window_g

0x7c3f,	// (0x00066e35) popup_cale_events_window_t1_ParamLimits

0x7c3f,	// (0x00066e35) popup_cale_events_window_t1

0x7c51,	// (0x00066e47) popup_cale_events_window_t2_ParamLimits

0x7c51,	// (0x00066e47) popup_cale_events_window_t2

0x7c8f,	// (0x00066e85) popup_cale_events_window_t3_ParamLimits

0x7c8f,	// (0x00066e85) popup_cale_events_window_t3

0x7cc9,	// (0x00066ebf) popup_cale_events_window_t4_ParamLimits

0x7cc9,	// (0x00066ebf) popup_cale_events_window_t4

0x0003,

0xf2cd,	// (0x0006e4c3) popup_cale_events_window_t_ParamLimits

0xf2cd,	// (0x0006e4c3) popup_cale_events_window_t

0x7cff,	// (0x00066ef5) call_type_pane

0x7d0b,	// (0x00066f01) popup_call_status_window_g1

0x7d19,	// (0x00066f0f) popup_call_status_window_g2

0x7d25,	// (0x00066f1b) popup_call_status_window_g3

0x0002,

0xf2d6,	// (0x0006e4cc) popup_call_status_window_g

0x7d31,	// (0x00066f27) call_type_pane_g1

0x7d3a,	// (0x00066f30) call_type_pane_g2

0x0001,

0xf2dd,	// (0x0006e4d3) call_type_pane_g

0x08b5,	// (0x0005faab) bg_popup_sub_pane_cp02

0x7d43,	// (0x00066f39) listscroll_popup_wml_pane

0x7d4b,	// (0x00066f41) list_wml_pane

0x7d55,	// (0x00066f4b) scroll_pane_cp013

0x7d5e,	// (0x00066f54) list_single_graphic_popup_wml_pane_ParamLimits

0x7d5e,	// (0x00066f54) list_single_graphic_popup_wml_pane

0x0b28,	// (0x0005fd1e) list_single_graphic_popup_wml_pane_g1

0x7d72,	// (0x00066f68) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2e2,	// (0x0006e4d8) list_single_graphic_popup_wml_pane_g

0x7d7a,	// (0x00066f70) list_single_graphic_popup_wml_pane_t1

0x7d90,	// (0x00066f86) aid_call_pane

0x0b08,	// (0x0005fcfe) popup_clock_analogue_window_g1

0x0b08,	// (0x0005fcfe) popup_clock_analogue_window_g2

0x7d98,	// (0x00066f8e) popup_clock_analogue_window_g3

0x7d98,	// (0x00066f8e) popup_clock_analogue_window_g4

0x0b28,	// (0x0005fd1e) popup_clock_analogue_window_g5

0x0004,

0xf2e7,	// (0x0006e4dd) popup_clock_analogue_window_g

0x7da0,	// (0x00066f96) popup_clock_analogue_window_t1

0x7dae,	// (0x00066fa4) clock_digital_number_pane_ParamLimits

0x7dae,	// (0x00066fa4) clock_digital_number_pane

0x7dba,	// (0x00066fb0) clock_digital_number_pane_cp02_ParamLimits

0x7dba,	// (0x00066fb0) clock_digital_number_pane_cp02

0x7dc6,	// (0x00066fbc) clock_digital_number_pane_cp03_ParamLimits

0x7dc6,	// (0x00066fbc) clock_digital_number_pane_cp03

0x7dd2,	// (0x00066fc8) clock_digital_number_pane_cp04_ParamLimits

0x7dd2,	// (0x00066fc8) clock_digital_number_pane_cp04

0x7dde,	// (0x00066fd4) clock_digital_separator_pane_ParamLimits

0x7dde,	// (0x00066fd4) clock_digital_separator_pane

0x7dea,	// (0x00066fe0) popup_clock_digital_window_t1

0x0b28,	// (0x0005fd1e) clock_digital_number_pane_g1

0x0b28,	// (0x0005fd1e) clock_digital_number_pane_g2

0x0001,

0xf255,	// (0x0006e44b) clock_digital_number_pane_g

0x0b28,	// (0x0005fd1e) clock_digital_separator_pane_g1

0x0b28,	// (0x0005fd1e) clock_digital_separator_pane_g2

0x0001,

0xf255,	// (0x0006e44b) clock_digital_separator_pane_g

0x08b5,	// (0x0005faab) bg_popup_window_pane_cp04

0x7e07,	// (0x00066ffd) heading_pane_cp03

0x64dd,	// (0x000656d3) listscroll_popup_gms_pane

0x08b5,	// (0x0005faab) grid_large_graphic_popup_pane

0x7e10,	// (0x00067006) listscroll_popup_gms_pane_g1

0x7e19,	// (0x0006700f) listscroll_popup_gms_pane_g2

0x0001,

0xf2f2,	// (0x0006e4e8) listscroll_popup_gms_pane_g

0x7e22,	// (0x00067018) scroll_pane_cp014

0x0ba6,	// (0x0005fd9c) cell_large_graphic_popup_pane_ParamLimits

0x0ba6,	// (0x0005fd9c) cell_large_graphic_popup_pane

0x0b8a,	// (0x0005fd80) cell_large_graphic_popup_pane_g1_ParamLimits

0x0b8a,	// (0x0005fd80) cell_large_graphic_popup_pane_g1

0x7e2a,	// (0x00067020) cell_large_graphic_popup_pane_g2_ParamLimits

0x7e2a,	// (0x00067020) cell_large_graphic_popup_pane_g2

0x7e38,	// (0x0006702e) cell_large_graphic_popup_pane_g3_ParamLimits

0x7e38,	// (0x0006702e) cell_large_graphic_popup_pane_g3

0x7e46,	// (0x0006703c) cell_large_graphic_popup_pane_g4_ParamLimits

0x7e46,	// (0x0006703c) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f7,	// (0x0006e4ed) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f7,	// (0x0006e4ed) cell_large_graphic_popup_pane_g

0x08b5,	// (0x0005faab) grid_highlight_pane_cp010

0x0b28,	// (0x0005fd1e) bg_popup_call_pane_g1

0x7e57,	// (0x0006704d) list_single_graphic_popup_conf_pane_ParamLimits

0x7e57,	// (0x0006704d) list_single_graphic_popup_conf_pane

0x7e6a,	// (0x00067060) list_highlight_pane_cp01

0x7e73,	// (0x00067069) list_single_graphic_popup_conf_pane_g1

0x7e7b,	// (0x00067071) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf300,	// (0x0006e4f6) list_single_graphic_popup_conf_pane_g

0x7e83,	// (0x00067079) list_single_graphic_popup_conf_pane_t1

0x7e91,	// (0x00067087) linegrid_cams_pane_g1

0x7e9a,	// (0x00067090) linegrid_cams_pane_g2

0x0dd4,	// (0x0005ffca) linegrid_cams_pane_g3

0x7ea3,	// (0x00067099) linegrid_cams_pane_g4

0x7eac,	// (0x000670a2) linegrid_cams_pane_g5

0x7eb5,	// (0x000670ab) linegrid_cams_pane_g6

0x0e84,	// (0x0006007a) linegrid_cams_pane_g7

0x0006,

0xf305,	// (0x0006e4fb) linegrid_cams_pane_g

0x7ebe,	// (0x000670b4) popup_clock_analogue_window

0x7ebe,	// (0x000670b4) popup_clock_digital_window

0x08b5,	// (0x0005faab) popup_phob_thumbnail_window

0x0b28,	// (0x0005fd1e) call_video_uplink_pane_g1

0x7ec7,	// (0x000670bd) call_video_uplink_pane_g2

0x0001,

0xf314,	// (0x0006e50a) call_video_uplink_pane_g

0x0e51,	// (0x00060047) video_uplink_pane

0x7ecf,	// (0x000670c5) mce_image_pane_g1

0x7ed9,	// (0x000670cf) mce_image_pane_g2

0x7ee1,	// (0x000670d7) mce_image_pane_g3

0x7ee9,	// (0x000670df) mce_image_pane_g4

0x7ef1,	// (0x000670e7) mce_image_pane_g5

0x0004,

0xf319,	// (0x0006e50f) mce_image_pane_g

0x7ef9,	// (0x000670ef) control_top_pane_stacon_cp01_ParamLimits

0x7ef9,	// (0x000670ef) control_top_pane_stacon_cp01

0x7f09,	// (0x000670ff) uni_indicator_pane_stacon_cp01_ParamLimits

0x7f09,	// (0x000670ff) uni_indicator_pane_stacon_cp01

0x7f1a,	// (0x00067110) bg_popup_sub_pane_cp03

0x7f24,	// (0x0006711a) chi_dic_find_pane

0x7f2c,	// (0x00067122) listscroll_chi_dic_pane

0x7f35,	// (0x0006712b) main_pane_chidic_g1

0x7f46,	// (0x0006713c) chi_dic_find_pane_t1

0x7f54,	// (0x0006714a) find_chidic_pane

0x7f5d,	// (0x00067153) chi_dic_list_pane_ParamLimits

0x7f5d,	// (0x00067153) chi_dic_list_pane

0x7e22,	// (0x00067018) scroll_pane_cp020

0x7f6e,	// (0x00067164) find_chidic_pane_t1

0x08b5,	// (0x0005faab) input_focus_pane_cp06

0x7f7d,	// (0x00067173) list_chi_dic_pane_ParamLimits

0x7f7d,	// (0x00067173) list_chi_dic_pane

0x7f90,	// (0x00067186) list_chi_dic_pane_t1_ParamLimits

0x7f90,	// (0x00067186) list_chi_dic_pane_t1

0x08b5,	// (0x0005faab) list_highlight_pane_cp020

0x7fa3,	// (0x00067199) bg_cale_heading_pane_g1

0x7fab,	// (0x000671a1) bg_cale_heading_pane_g2

0x7fb3,	// (0x000671a9) bg_cale_heading_pane_g3

0x7fbb,	// (0x000671b1) bg_cale_heading_pane_g4

0x7fc3,	// (0x000671b9) bg_cale_heading_pane_g5

0x7fcb,	// (0x000671c1) bg_cale_heading_pane_g6

0x7fd3,	// (0x000671c9) bg_cale_heading_pane_g7

0x7fdb,	// (0x000671d1) bg_cale_heading_pane_g8

0x7fe3,	// (0x000671d9) bg_cale_heading_pane_g9

0x0008,

0xf324,	// (0x0006e51a) bg_cale_heading_pane_g

0x7fa3,	// (0x00067199) bg_cale_side_pane_g1

0x7feb,	// (0x000671e1) bg_cale_side_pane_g2

0x7ff3,	// (0x000671e9) bg_cale_side_pane_g3

0x7ffb,	// (0x000671f1) bg_cale_side_pane_g4

0x8003,	// (0x000671f9) bg_cale_side_pane_g5

0x800b,	// (0x00067201) bg_cale_side_pane_g6

0x8013,	// (0x00067209) bg_cale_side_pane_g7

0x801b,	// (0x00067211) bg_cale_side_pane_g8

0x8023,	// (0x00067219) bg_cale_side_pane_g9

0x0008,

0xf337,	// (0x0006e52d) bg_cale_side_pane_g

0x802b,	// (0x00067221) popup_call_status_window_ParamLimits

0x802b,	// (0x00067221) popup_call_status_window

0x803a,	// (0x00067230) stacon_top_pane

0x8042,	// (0x00067238) status_pane_ParamLimits

0x8042,	// (0x00067238) status_pane

0x805c,	// (0x00067252) status_small_pane

0x8064,	// (0x0006725a) control_pane

0x08b5,	// (0x0005faab) stacon_bottom_pane

0x806c,	// (0x00067262) list_single_mce_smart_pane_t1_ParamLimits

0x806c,	// (0x00067262) list_single_mce_smart_pane_t1

0x807f,	// (0x00067275) list_single_mce_smart_pane_t2_ParamLimits

0x807f,	// (0x00067275) list_single_mce_smart_pane_t2

0x0001,

0xf34a,	// (0x0006e540) list_single_mce_smart_pane_t_ParamLimits

0xf34a,	// (0x0006e540) list_single_mce_smart_pane_t

0x80a7,	// (0x0006729d) compass_pane

0x80b0,	// (0x000672a6) main_location2_pane_t1

0x80c6,	// (0x000672bc) main_location2_pane_t2

0x80dc,	// (0x000672d2) main_location2_pane_t3

0x0003,

0xf34f,	// (0x0006e545) main_location2_pane_t

0x8124,	// (0x0006731a) compass_pane_g1_ParamLimits

0x8124,	// (0x0006731a) compass_pane_g1

0x8130,	// (0x00067326) compass_pane_t1

0x813f,	// (0x00067335) compass_pane_t2

0x0005,

0xf358,	// (0x0006e54e) compass_pane_t

0x8186,	// (0x0006737c) text_secondary_cp61

0x81fb,	// (0x000673f1) navi_pane_cams_g5

0x8264,	// (0x0006745a) navi_pane_im_t1

0x8272,	// (0x00067468) navi_pane_mp_g1_ParamLimits

0x8272,	// (0x00067468) navi_pane_mp_g1

0x8286,	// (0x0006747c) navi_pane_mp_g2_ParamLimits

0x8286,	// (0x0006747c) navi_pane_mp_g2

0x8292,	// (0x00067488) navi_pane_mp_g3_ParamLimits

0x8292,	// (0x00067488) navi_pane_mp_g3

0x0002,

0xf36c,	// (0x0006e562) navi_pane_mp_g_ParamLimits

0xf36c,	// (0x0006e562) navi_pane_mp_g

0x829e,	// (0x00067494) navi_pane_mp_t1

0x82ac,	// (0x000674a2) navi_pane_mp_t2

0x0002,

0xf373,	// (0x0006e569) navi_pane_mp_t

0x8341,	// (0x00067537) navi_pane_vt_g1

0x829e,	// (0x00067494) navi_pane_vt_t1

0x8349,	// (0x0006753f) navi_slider_pane

0x64dd,	// (0x000656d3) zooming_pane

0x8359,	// (0x0006754f) navi_slider_pane_g1

0x8362,	// (0x00067558) navi_slider_pane_g2

0x0006,

0xf37a,	// (0x0006e570) navi_slider_pane_g

0x838f,	// (0x00067585) aid_levels_zoom

0x8397,	// (0x0006758d) zooming_pane_g1

0x839f,	// (0x00067595) zooming_pane_g2

0x839f,	// (0x00067595) zooming_pane_g3

0x0002,

0xf389,	// (0x0006e57f) zooming_pane_g

0x83a7,	// (0x0006759d) level_10_zoom

0x83b0,	// (0x000675a6) level_11_zoom

0x83b9,	// (0x000675af) level_1_zoom

0x83c2,	// (0x000675b8) level_2_zoom

0x83cb,	// (0x000675c1) level_3_zoom

0x83d4,	// (0x000675ca) level_4_zoom

0x83dd,	// (0x000675d3) level_5_zoom

0x83e6,	// (0x000675dc) level_6_zoom

0x83ef,	// (0x000675e5) level_7_zoom

0x83f8,	// (0x000675ee) level_8_zoom

0x8401,	// (0x000675f7) level_9_zoom

0x8412,	// (0x00067608) popup_phob_thumbnail_window_g1

0x841a,	// (0x00067610) popup_phob_thumbnail_window_g2

0x0001,

0xf390,	// (0x0006e586) popup_phob_thumbnail_window_g

0x9795,	// (0x0006898b) level_1_location

0x979d,	// (0x00068993) level_2_location

0x97a5,	// (0x0006899b) level_3_location

0x97ad,	// (0x000689a3) level_4_location

0x64dd,	// (0x000656d3) level_5_location

0x8422,	// (0x00067618) mce_icon_pane_g1

0x842a,	// (0x00067620) mce_icon_pane_g2

0x0001,

0xf395,	// (0x0006e58b) mce_icon_pane_g

0x8432,	// (0x00067628) main_mup_pane_g1_ParamLimits

0x8432,	// (0x00067628) main_mup_pane_g1

0x0bb4,	// (0x0005fdaa) main_mup_pane_g2_ParamLimits

0x0bb4,	// (0x0005fdaa) main_mup_pane_g2

0x0bb4,	// (0x0005fdaa) main_mup_pane_g3_ParamLimits

0x0bb4,	// (0x0005fdaa) main_mup_pane_g3

0x0bb4,	// (0x0005fdaa) main_mup_pane_g4_ParamLimits

0x0bb4,	// (0x0005fdaa) main_mup_pane_g4

0x0bb4,	// (0x0005fdaa) main_mup_pane_g5_ParamLimits

0x0bb4,	// (0x0005fdaa) main_mup_pane_g5

0x0bb4,	// (0x0005fdaa) main_mup_pane_g6_ParamLimits

0x0bb4,	// (0x0005fdaa) main_mup_pane_g6

0x0bb4,	// (0x0005fdaa) main_mup_pane_g7_ParamLimits

0x0bb4,	// (0x0005fdaa) main_mup_pane_g7

0x0bb4,	// (0x0005fdaa) main_mup_pane_g8_ParamLimits

0x0bb4,	// (0x0005fdaa) main_mup_pane_g8

0x0bb4,	// (0x0005fdaa) main_mup_pane_g9_ParamLimits

0x0bb4,	// (0x0005fdaa) main_mup_pane_g9

0x0bb4,	// (0x0005fdaa) main_mup_pane_g10_ParamLimits

0x0bb4,	// (0x0005fdaa) main_mup_pane_g10

0x0bb4,	// (0x0005fdaa) main_mup_pane_g11_ParamLimits

0x0bb4,	// (0x0005fdaa) main_mup_pane_g11

0x0b98,	// (0x0005fd8e) main_mup_pane_g12_ParamLimits

0x0b98,	// (0x0005fd8e) main_mup_pane_g12

0x0bb4,	// (0x0005fdaa) main_mup_pane_g13_ParamLimits

0x0bb4,	// (0x0005fdaa) main_mup_pane_g13

0x000c,

0xf39a,	// (0x0006e590) main_mup_pane_g_ParamLimits

0xf39a,	// (0x0006e590) main_mup_pane_g

0x0bc2,	// (0x0005fdb8) main_mup_pane_t1_ParamLimits

0x0bc2,	// (0x0005fdb8) main_mup_pane_t1

0x0bc2,	// (0x0005fdb8) main_mup_pane_t2_ParamLimits

0x0bc2,	// (0x0005fdb8) main_mup_pane_t2

0x0bc2,	// (0x0005fdb8) main_mup_pane_t3_ParamLimits

0x0bc2,	// (0x0005fdb8) main_mup_pane_t3

0x6550,	// (0x00065746) main_mup_pane_t4_ParamLimits

0x6550,	// (0x00065746) main_mup_pane_t4

0x6550,	// (0x00065746) main_mup_pane_t5_ParamLimits

0x6550,	// (0x00065746) main_mup_pane_t5

0x8445,	// (0x0006763b) main_mup_pane_t6_ParamLimits

0x8445,	// (0x0006763b) main_mup_pane_t6

0x0005,

0xf3b5,	// (0x0006e5ab) main_mup_pane_t_ParamLimits

0xf3b5,	// (0x0006e5ab) main_mup_pane_t

0x8459,	// (0x0006764f) mup_progress_pane_ParamLimits

0x8459,	// (0x0006764f) mup_progress_pane

0xe4db,	// (0x0006d6d1) mup_visualizer_pane_ParamLimits

0xe4db,	// (0x0006d6d1) mup_visualizer_pane

0xe4db,	// (0x0006d6d1) mup_volume_pane_ParamLimits

0xe4db,	// (0x0006d6d1) mup_volume_pane

0x0b98,	// (0x0005fd8e) mup_visualizer_pane_g1_ParamLimits

0x0b98,	// (0x0005fd8e) mup_visualizer_pane_g1

0x8467,	// (0x0006765d) mup_visualizer_pane_g2_ParamLimits

0x8467,	// (0x0006765d) mup_visualizer_pane_g2

0x0b8a,	// (0x0005fd80) mup_visualizer_pane_g3_ParamLimits

0x0b8a,	// (0x0005fd80) mup_visualizer_pane_g3

0x0002,

0xf3c2,	// (0x0006e5b8) mup_visualizer_pane_g_ParamLimits

0xf3c2,	// (0x0006e5b8) mup_visualizer_pane_g

0x6699,	// (0x0006588f) mup_volume_pane_g1

0x6699,	// (0x0006588f) mup_volume_pane_g2

0x0001,

0xf3c9,	// (0x0006e5bf) mup_volume_pane_g

0x6699,	// (0x0006588f) mup_progress_pane_g1

0x6699,	// (0x0006588f) mup_progress_pane_g2

0x6699,	// (0x0006588f) mup_progress_pane_g3

0x0002,

0xf3ce,	// (0x0006e5c4) mup_progress_pane_g

0x08b5,	// (0x0005faab) bg_popup_window_pane_cp05

0x8475,	// (0x0006766b) heading_pane_cp02_ParamLimits

0x8475,	// (0x0006766b) heading_pane_cp02

0x848f,	// (0x00067685) list_popup_blid_pane

0x8497,	// (0x0006768d) list_blid_sat_info_pane_ParamLimits

0x8497,	// (0x0006768d) list_blid_sat_info_pane

0x84aa,	// (0x000676a0) list_blid_sat_info_pane_g1

0x84b2,	// (0x000676a8) list_blid_sat_info_pane_t1

0x8590,	// (0x00067786) mup_equalizer_pane_ParamLimits

0x8590,	// (0x00067786) mup_equalizer_pane

0x85a9,	// (0x0006779f) mup_equalizer_pane_cp1_ParamLimits

0x85a9,	// (0x0006779f) mup_equalizer_pane_cp1

0x85c2,	// (0x000677b8) mup_equalizer_pane_cp2_ParamLimits

0x85c2,	// (0x000677b8) mup_equalizer_pane_cp2

0x85db,	// (0x000677d1) mup_equalizer_pane_cp3_ParamLimits

0x85db,	// (0x000677d1) mup_equalizer_pane_cp3

0x85f4,	// (0x000677ea) mup_equalizer_pane_cp4_ParamLimits

0x85f4,	// (0x000677ea) mup_equalizer_pane_cp4

0x860d,	// (0x00067803) mup_equalizer_pane_cp5

0x861f,	// (0x00067815) mup_equalizer_pane_cp6

0x8631,	// (0x00067827) mup_equalizer_pane_cp7

0xead6,	// (0x0006dccc) bg_popup_call_poc_act_pane_g9

0xeade,	// (0x0006dcd4) bg_popup_call_poc_act_pane_g10

0xeae6,	// (0x0006dcdc) bg_popup_call_poc_act_pane_g11

0x000a,

0x0b10,	// (0x0005fd06) mup_scale_pane

0x0b28,	// (0x0005fd1e) mup_scale_pane_g1

0x8643,	// (0x00067839) mup_scale_pane_g2

0x0006,

0xf3ea,	// (0x0006e5e0) mup_scale_pane_g

0x8679,	// (0x0006786f) msg_data_pane

0x8681,	// (0x00067877) scroll_pane_cp017

0x4ccc,	// (0x00063ec2) bg_list_pane_cp04_ParamLimits

0x4ccc,	// (0x00063ec2) bg_list_pane_cp04

0x8689,	// (0x0006787f) msg_data_pane_g1

0x7ed9,	// (0x000670cf) msg_data_pane_g2

0x7ee1,	// (0x000670d7) msg_data_pane_g3

0x8691,	// (0x00067887) msg_data_pane_g4

0x7ef1,	// (0x000670e7) msg_data_pane_g5

0x8422,	// (0x00067618) msg_data_pane_g6

0x8699,	// (0x0006788f) msg_data_pane_g7

0x0006,

0xf3f9,	// (0x0006e5ef) msg_data_pane_g

0x4cec,	// (0x00063ee2) msg_text_pane_ParamLimits

0x4cec,	// (0x00063ee2) msg_text_pane

0x86a1,	// (0x00067897) qrid_highlight_pane_cp011_ParamLimits

0x86a1,	// (0x00067897) qrid_highlight_pane_cp011

0x08b5,	// (0x0005faab) msg_body_pane

0x08b5,	// (0x0005faab) msg_header_pane

0x86c0,	// (0x000678b6) input_focus_pane_cp07

0x4d21,	// (0x00063f17) msg_header_pane_t1_ParamLimits

0x4d21,	// (0x00063f17) msg_header_pane_t1

0x4d37,	// (0x00063f2d) msg_header_pane_t2_ParamLimits

0x4d37,	// (0x00063f2d) msg_header_pane_t2

0x0001,

0xf40d,	// (0x0006e603) msg_header_pane_t_ParamLimits

0xf40d,	// (0x0006e603) msg_header_pane_t

0x86d5,	// (0x000678cb) msg_body_pane_g1

0x4d4e,	// (0x00063f44) msg_body_pane_t1_ParamLimits

0x4d4e,	// (0x00063f44) msg_body_pane_t1

0x4d79,	// (0x00063f6f) msg_body_pane_t2_ParamLimits

0x4d79,	// (0x00063f6f) msg_body_pane_t2

0x4d8b,	// (0x00063f81) msg_body_pane_t3_ParamLimits

0x4d8b,	// (0x00063f81) msg_body_pane_t3

0x0002,

0xf412,	// (0x0006e608) msg_body_pane_t_ParamLimits

0xf412,	// (0x0006e608) msg_body_pane_t

0x872b,	// (0x00067921) main_viewer_pane_g1_ParamLimits

0x872b,	// (0x00067921) main_viewer_pane_g1

0x8737,	// (0x0006792d) main_viewer_pane_g2_ParamLimits

0x8737,	// (0x0006792d) main_viewer_pane_g2

0x8743,	// (0x00067939) main_viewer_pane_g3_ParamLimits

0x8743,	// (0x00067939) main_viewer_pane_g3

0x8752,	// (0x00067948) main_viewer_pane_g4_ParamLimits

0x8752,	// (0x00067948) main_viewer_pane_g4

0x8761,	// (0x00067957) main_viewer_pane_g5_ParamLimits

0x8761,	// (0x00067957) main_viewer_pane_g5

0x8761,	// (0x00067957) main_viewer_pane_g7_ParamLimits

0x8761,	// (0x00067957) main_viewer_pane_g7

0x8773,	// (0x00067969) main_viewer_pane_g8_ParamLimits

0x8773,	// (0x00067969) main_viewer_pane_g8

0x0007,

0xf422,	// (0x0006e618) main_viewer_pane_g_ParamLimits

0xf422,	// (0x0006e618) main_viewer_pane_g

0x878b,	// (0x00067981) viewer_content_pane_ParamLimits

0x878b,	// (0x00067981) viewer_content_pane

0x87b1,	// (0x000679a7) main_postcard_pane_g1_ParamLimits

0x87b1,	// (0x000679a7) main_postcard_pane_g1

0x87bd,	// (0x000679b3) main_postcard_pane_g2_ParamLimits

0x87bd,	// (0x000679b3) main_postcard_pane_g2

0x87c9,	// (0x000679bf) main_postcard_pane_g3_ParamLimits

0x87c9,	// (0x000679bf) main_postcard_pane_g3

0x0005,

0xf433,	// (0x0006e629) main_postcard_pane_g_ParamLimits

0xf433,	// (0x0006e629) main_postcard_pane_g

0x87d5,	// (0x000679cb) main_postcard_pane_g4

0xec82,	// (0x0006de78) smil_status_volume_pane_g2

0x87f9,	// (0x000679ef) postcard_pane_ParamLimits

0x87f9,	// (0x000679ef) postcard_pane

0x7d0b,	// (0x00066f01) postcard_pane_g1_ParamLimits

0x7d0b,	// (0x00066f01) postcard_pane_g1

0x8829,	// (0x00067a1f) postcard_pane_g2_ParamLimits

0x8829,	// (0x00067a1f) postcard_pane_g2

0x8835,	// (0x00067a2b) postcard_pane_g3_ParamLimits

0x8835,	// (0x00067a2b) postcard_pane_g3

0x8841,	// (0x00067a37) postcard_pane_g4_ParamLimits

0x8841,	// (0x00067a37) postcard_pane_g4

0x884f,	// (0x00067a45) postcard_pane_g5_ParamLimits

0x884f,	// (0x00067a45) postcard_pane_g5

0x885b,	// (0x00067a51) postcard_pane_g6_ParamLimits

0x885b,	// (0x00067a51) postcard_pane_g6

0x8867,	// (0x00067a5d) postcard_pane_g7_ParamLimits

0x8867,	// (0x00067a5d) postcard_pane_g7

0x0006,

0xf440,	// (0x0006e636) postcard_pane_g_ParamLimits

0xf440,	// (0x0006e636) postcard_pane_g

0x8875,	// (0x00067a6b) main_mp2_pane_g1_ParamLimits

0x8875,	// (0x00067a6b) main_mp2_pane_g1

0x8881,	// (0x00067a77) main_mp2_pane_g2_ParamLimits

0x8881,	// (0x00067a77) main_mp2_pane_g2

0x888d,	// (0x00067a83) main_mp2_pane_g3_ParamLimits

0x888d,	// (0x00067a83) main_mp2_pane_g3

0x0002,

0xf44f,	// (0x0006e645) main_mp2_pane_g_ParamLimits

0xf44f,	// (0x0006e645) main_mp2_pane_g

0x8899,	// (0x00067a8f) main_mp2_pane_t1_ParamLimits

0x8899,	// (0x00067a8f) main_mp2_pane_t1

0x88ae,	// (0x00067aa4) main_mp2_pane_t2_ParamLimits

0x88ae,	// (0x00067aa4) main_mp2_pane_t2

0x88c0,	// (0x00067ab6) main_mp2_pane_t3_ParamLimits

0x88c0,	// (0x00067ab6) main_mp2_pane_t3

0x0002,

0xf456,	// (0x0006e64c) main_mp2_pane_t_ParamLimits

0xf456,	// (0x0006e64c) main_mp2_pane_t

0x88d2,	// (0x00067ac8) pec_content_pane_ParamLimits

0x88d2,	// (0x00067ac8) pec_content_pane

0x6bf1,	// (0x00065de7) scroll_pane_cp015

0x88e4,	// (0x00067ada) pec_attribute_pane_ParamLimits

0x88e4,	// (0x00067ada) pec_attribute_pane

0x88f4,	// (0x00067aea) pec_content_pane_g1_ParamLimits

0x88f4,	// (0x00067aea) pec_content_pane_g1

0x8900,	// (0x00067af6) pec_content_pane_t1_ParamLimits

0x8900,	// (0x00067af6) pec_content_pane_t1

0x8912,	// (0x00067b08) pec_content_pane_t2_ParamLimits

0x8912,	// (0x00067b08) pec_content_pane_t2

0x0001,

0xf45d,	// (0x0006e653) pec_content_pane_t_ParamLimits

0xf45d,	// (0x0006e653) pec_content_pane_t

0x8924,	// (0x00067b1a) list_single_graphic_pane_cp01_ParamLimits

0x8924,	// (0x00067b1a) list_single_graphic_pane_cp01

0x0b10,	// (0x0005fd06) bg_popup_sub_pane_cp04

0x893a,	// (0x00067b30) popup_mup_playback_window_g1

0x8946,	// (0x00067b3c) popup_mup_playback_window_t1

0x895b,	// (0x00067b51) popup_mup_playback_window_t2

0x0001,

0xf462,	// (0x0006e658) popup_mup_playback_window_t

0x899f,	// (0x00067b95) main_image_pane_g1_ParamLimits

0x899f,	// (0x00067b95) main_image_pane_g1

0x8a44,	// (0x00067c3a) scroll_pane_cp018_ParamLimits

0x8a44,	// (0x00067c3a) scroll_pane_cp018

0x8a5c,	// (0x00067c52) scroll_pane_cp016_ParamLimits

0x8a5c,	// (0x00067c52) scroll_pane_cp016

0x8a90,	// (0x00067c86) smil2_image_pane_ParamLimits

0x8a90,	// (0x00067c86) smil2_image_pane

0x8ab8,	// (0x00067cae) smil2_root_pane_ParamLimits

0x8ab8,	// (0x00067cae) smil2_root_pane

0x8ae4,	// (0x00067cda) smil2_text_pane_ParamLimits

0x8ae4,	// (0x00067cda) smil2_text_pane

0x08b5,	// (0x0005faab) bg_list_pane_cp06

0x8b18,	// (0x00067d0e) grid_radio_pane

0x08b5,	// (0x0005faab) bg_popup_window_pane_cp06

0x8b20,	// (0x00067d16) main_fmradio_pane_t1

0xeb2e,	// (0x0006dd24) heading_pane_cp04

0x8b2e,	// (0x00067d24) main_fmradio_pane_t2

0xeb36,	// (0x0006dd2c) popup_cale_lunar_info_window_g1

0x8b3c,	// (0x00067d32) main_fmradio_pane_t3

0xeb3e,	// (0x0006dd34) popup_cale_lunar_info_window_g2

0x8b4a,	// (0x00067d40) main_fmradio_pane_t4

0x0001,

0x8b58,	// (0x00067d4e) main_fmradio_pane_t5

0x0004,

0xf555,	// (0x0006e74b) popup_cale_lunar_info_window_g

0xf477,	// (0x0006e66d) main_fmradio_pane_t

0x8b66,	// (0x00067d5c) wait_bar_pane_cp03

0x6533,	// (0x00065729) cell_fmradio_pane_ParamLimits

0x6533,	// (0x00065729) cell_fmradio_pane

0x8867,	// (0x00067a5d) cell_fmradio_pane_g1_ParamLimits

0x8867,	// (0x00067a5d) cell_fmradio_pane_g1

0x08b5,	// (0x0005faab) grid_highlight_pane_cp011

0x8b6e,	// (0x00067d64) poc_content_pane_ParamLimits

0x8b6e,	// (0x00067d64) poc_content_pane

0x8b81,	// (0x00067d77) scroll_pane_cp019

0x8b89,	// (0x00067d7f) popup_call_poc_act_window_ParamLimits

0x8b89,	// (0x00067d7f) popup_call_poc_act_window

0x8b96,	// (0x00067d8c) popup_call_poc_inact_window_ParamLimits

0x8b96,	// (0x00067d8c) popup_call_poc_inact_window

0xf519,	// (0x0006e70f) bg_popup_call_poc_act_pane_g

0xeaee,	// (0x0006dce4) bg_popup_call_poc_inact_pane_g1

0xeaf6,	// (0x0006dcec) bg_popup_call_poc_inact_pane_g2

0x8ba3,	// (0x00067d99) popup_call_poc_act_window_g2

0xeafe,	// (0x0006dcf4) bg_popup_call_poc_inact_pane_g3

0xea7e,	// (0x0006dc74) bg_popup_call_poc_inact_pane_g4

0xeb06,	// (0x0006dcfc) bg_popup_call_poc_inact_pane_g5

0x8bab,	// (0x00067da1) popup_call_poc_act_window_t1_ParamLimits

0x8bab,	// (0x00067da1) popup_call_poc_act_window_t1

0x8bd3,	// (0x00067dc9) popup_call_poc_act_window_t2_ParamLimits

0x8bd3,	// (0x00067dc9) popup_call_poc_act_window_t2

0x8bfb,	// (0x00067df1) popup_call_poc_act_window_t3_ParamLimits

0x8bfb,	// (0x00067df1) popup_call_poc_act_window_t3

0x8c23,	// (0x00067e19) popup_call_poc_act_window_t4_ParamLimits

0x8c23,	// (0x00067e19) popup_call_poc_act_window_t4

0x0003,

0xf482,	// (0x0006e678) popup_call_poc_act_window_t_ParamLimits

0xf482,	// (0x0006e678) popup_call_poc_act_window_t

0xeb0e,	// (0x0006dd04) bg_popup_call_poc_inact_pane_g6

0xeb16,	// (0x0006dd0c) bg_popup_call_poc_inact_pane_g7

0xeb1e,	// (0x0006dd14) bg_popup_call_poc_inact_pane_g8

0x8c35,	// (0x00067e2b) popup_call_poc_inact_window_g2

0xeb26,	// (0x0006dd1c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf530,	// (0x0006e726) bg_popup_call_poc_inact_pane_g

0x8c3d,	// (0x00067e33) popup_call_poc_inact_window_t1_ParamLimits

0x8c3d,	// (0x00067e33) popup_call_poc_inact_window_t1

0x8c52,	// (0x00067e48) popup_call_poc_inact_window_t2_ParamLimits

0x8c52,	// (0x00067e48) popup_call_poc_inact_window_t2

0x8c67,	// (0x00067e5d) popup_call_poc_inact_window_t3_ParamLimits

0x8c67,	// (0x00067e5d) popup_call_poc_inact_window_t3

0x0002,

0xf48b,	// (0x0006e681) popup_call_poc_inact_window_t_ParamLimits

0xf48b,	// (0x0006e681) popup_call_poc_inact_window_t

0xebfa,	// (0x0006ddf0) context_pane_ParamLimits

0x9a0b,	// (0x00068c01) signal_pane_ParamLimits

0x64dd,	// (0x000656d3) main_call2_pane

0x998d,	// (0x00068b83) popup_phob_thumbnail2_window_ParamLimits

0x998d,	// (0x00068b83) popup_phob_thumbnail2_window

0x86dd,	// (0x000678d3) aid_hotspot_pointer_arrow_pane

0x86e5,	// (0x000678db) aid_hotspot_pointer_hand_pane

0x9763,	// (0x00068959) phob_pre_status_pane_g5

0x0ba6,	// (0x0005fd9c) cams_zoom_pane_ParamLimits

0x0ba6,	// (0x0005fd9c) image_vga_pane_ParamLimits

0x0b98,	// (0x0005fd8e) main_camera_pane_g1_ParamLimits

0x0b98,	// (0x0005fd8e) main_camera_pane_g2_ParamLimits

0x0b98,	// (0x0005fd8e) main_camera_pane_g3_ParamLimits

0x0b98,	// (0x0005fd8e) main_camera_pane_g4_ParamLimits

0x0b98,	// (0x0005fd8e) main_camera_pane_g5_ParamLimits

0x0b98,	// (0x0005fd8e) main_camera_pane_g6_ParamLimits

0x0b98,	// (0x0005fd8e) main_camera_pane_g7_ParamLimits

0xf19f,	// (0x0006e395) main_camera_pane_g_ParamLimits

0x6550,	// (0x00065746) main_camera_pane_t1_ParamLimits

0x6550,	// (0x00065746) main_camera_pane_t2_ParamLimits

0xf1b0,	// (0x0006e3a6) main_camera_pane_t_ParamLimits

0x0b10,	// (0x0005fd06) bg_popup_preview_window_pane_cp01_ParamLimits

0x0b10,	// (0x0005fd06) bg_popup_preview_window_pane_cp01

0x8c7c,	// (0x00067e72) popup_phob_thumbnail2_window_g1_ParamLimits

0x8c7c,	// (0x00067e72) popup_phob_thumbnail2_window_g1

0x08b5,	// (0x0005faab) call2_cli_visual_pane

0x8c97,	// (0x00067e8d) popup_call2_audio_conf_window_ParamLimits

0x8c97,	// (0x00067e8d) popup_call2_audio_conf_window

0x8caa,	// (0x00067ea0) popup_call2_audio_first_window_ParamLimits

0x8caa,	// (0x00067ea0) popup_call2_audio_first_window

0x8d26,	// (0x00067f1c) popup_call2_audio_in_window_ParamLimits

0x8d26,	// (0x00067f1c) popup_call2_audio_in_window

0x8d56,	// (0x00067f4c) popup_call2_audio_out_window_ParamLimits

0x8d56,	// (0x00067f4c) popup_call2_audio_out_window

0x8da2,	// (0x00067f98) popup_call2_audio_second_window_ParamLimits

0x8da2,	// (0x00067f98) popup_call2_audio_second_window

0x8dee,	// (0x00067fe4) popup_call2_audio_wait_window_ParamLimits

0x8dee,	// (0x00067fe4) popup_call2_audio_wait_window

0x08b5,	// (0x0005faab) bg_popup_call2_act_pane_cp03

0x0af2,	// (0x0005fce8) list_conf_pane_cp

0x8e2b,	// (0x00068021) popup_call2_audio_conf_window_t1

0x7e57,	// (0x0006704d) list_single_graphic_popup_conf2_pane_ParamLimits

0x7e57,	// (0x0006704d) list_single_graphic_popup_conf2_pane

0x7e6a,	// (0x00067060) list_highlight_pane_cp04

0x8e39,	// (0x0006802f) list_single_graphic_popup_conf2_pane_g1

0x7e7b,	// (0x00067071) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf492,	// (0x0006e688) list_single_graphic_popup_conf2_pane_g

0x8e41,	// (0x00068037) list_single_graphic_popup_conf2_pane_t1

0x8e4f,	// (0x00068045) bg_popup_call2_act_pane_cp01_ParamLimits

0x8e4f,	// (0x00068045) bg_popup_call2_act_pane_cp01

0x8ed9,	// (0x000680cf) call_type_pane_cp05_ParamLimits

0x8ed9,	// (0x000680cf) call_type_pane_cp05

0x8f2d,	// (0x00068123) popup_call2_audio_second_window_g1_ParamLimits

0x8f2d,	// (0x00068123) popup_call2_audio_second_window_g1

0x8f81,	// (0x00068177) popup_call2_audio_second_window_g2_ParamLimits

0x8f81,	// (0x00068177) popup_call2_audio_second_window_g2

0x0002,

0xf497,	// (0x0006e68d) popup_call2_audio_second_window_g_ParamLimits

0xf497,	// (0x0006e68d) popup_call2_audio_second_window_g

0x8fe6,	// (0x000681dc) popup_call2_audio_second_window_t1_ParamLimits

0x8fe6,	// (0x000681dc) popup_call2_audio_second_window_t1

0x90a1,	// (0x00068297) popup_call2_audio_second_window_t2_ParamLimits

0x90a1,	// (0x00068297) popup_call2_audio_second_window_t2

0x90f4,	// (0x000682ea) popup_call2_audio_second_window_t3_ParamLimits

0x90f4,	// (0x000682ea) popup_call2_audio_second_window_t3

0x0003,

0xf49e,	// (0x0006e694) popup_call2_audio_second_window_t_ParamLimits

0xf49e,	// (0x0006e694) popup_call2_audio_second_window_t

0x08b5,	// (0x0005faab) bg_popup_call2_in_pane_cp02

0x08bf,	// (0x0005fab5) call_type_pane_cp04

0x91e7,	// (0x000683dd) popup_call2_audio_wait_window_g1

0x91ef,	// (0x000683e5) popup_call2_audio_wait_window_g2

0x0001,

0xf4a7,	// (0x0006e69d) popup_call2_audio_wait_window_g

0x08d7,	// (0x0005facd) popup_call2_audio_wait_window_t3

0x91f7,	// (0x000683ed) bg_popup_call2_act_pane_ParamLimits

0x91f7,	// (0x000683ed) bg_popup_call2_act_pane

0x92b7,	// (0x000684ad) call_type_pane_cp03_ParamLimits

0x92b7,	// (0x000684ad) call_type_pane_cp03

0x931b,	// (0x00068511) popup_call2_audio_first_window_g1_ParamLimits

0x931b,	// (0x00068511) popup_call2_audio_first_window_g1

0x938b,	// (0x00068581) popup_call2_audio_first_window_g2_ParamLimits

0x938b,	// (0x00068581) popup_call2_audio_first_window_g2

0x7d0b,	// (0x00066f01) popup_call2_audio_first_window_g3_ParamLimits

0x7d0b,	// (0x00066f01) popup_call2_audio_first_window_g3

0x0004,

0xf4ac,	// (0x0006e6a2) popup_call2_audio_first_window_g_ParamLimits

0xf4ac,	// (0x0006e6a2) popup_call2_audio_first_window_g

0x9469,	// (0x0006865f) popup_call2_audio_first_window_t1_ParamLimits

0x9469,	// (0x0006865f) popup_call2_audio_first_window_t1

0x956c,	// (0x00068762) popup_call2_audio_first_window_t4_ParamLimits

0x956c,	// (0x00068762) popup_call2_audio_first_window_t4

0xe4e9,	// (0x0006d6df) popup_call2_audio_first_window_t5_ParamLimits

0xe4e9,	// (0x0006d6df) popup_call2_audio_first_window_t5

0x0003,

0xf4b7,	// (0x0006e6ad) popup_call2_audio_first_window_t_ParamLimits

0xf4b7,	// (0x0006e6ad) popup_call2_audio_first_window_t

0x0b08,	// (0x0005fcfe) bg_popup_call2_act_pane_g1

0xeb46,	// (0x0006dd3c) popup_cale_lunar_info_window_t1

0xeb54,	// (0x0006dd4a) popup_cale_lunar_info_window_t2

0xeb62,	// (0x0006dd58) popup_cale_lunar_info_window_t3

0x08b5,	// (0x0005faab) bg_popup_call2_bubble_pane

0xe5ea,	// (0x0006d7e0) bg_popup_call2_in_pane_cp01_ParamLimits

0xe5ea,	// (0x0006d7e0) bg_popup_call2_in_pane_cp01

0x0591,	// (0x0005f787) call_type_pane_cp02

0x964f,	// (0x00068845) popup_call2_audio_out_window_g1_ParamLimits

0x964f,	// (0x00068845) popup_call2_audio_out_window_g1

0xe632,	// (0x0006d828) popup_call2_audio_out_window_g2_ParamLimits

0xe632,	// (0x0006d828) popup_call2_audio_out_window_g2

0x967b,	// (0x00068871) popup_call2_audio_out_window_g3_ParamLimits

0x967b,	// (0x00068871) popup_call2_audio_out_window_g3

0x0003,

0xf4c0,	// (0x0006e6b6) popup_call2_audio_out_window_g_ParamLimits

0xf4c0,	// (0x0006e6b6) popup_call2_audio_out_window_g

0xe669,	// (0x0006d85f) popup_call2_audio_out_window_t1_ParamLimits

0xe669,	// (0x0006d85f) popup_call2_audio_out_window_t1

0xe6c8,	// (0x0006d8be) popup_call2_audio_out_window_t2_ParamLimits

0xe6c8,	// (0x0006d8be) popup_call2_audio_out_window_t2

0xe71c,	// (0x0006d912) popup_call2_audio_out_window_t3_ParamLimits

0xe71c,	// (0x0006d912) popup_call2_audio_out_window_t3

0xe732,	// (0x0006d928) popup_call2_audio_out_window_t4_ParamLimits

0xe732,	// (0x0006d928) popup_call2_audio_out_window_t4

0xe748,	// (0x0006d93e) popup_call2_audio_out_window_t5_ParamLimits

0xe748,	// (0x0006d93e) popup_call2_audio_out_window_t5

0x0005,

0xf4c9,	// (0x0006e6bf) popup_call2_audio_out_window_t_ParamLimits

0xf4c9,	// (0x0006e6bf) popup_call2_audio_out_window_t

0xe7ac,	// (0x0006d9a2) bg_popup_call2_in_pane_ParamLimits

0xe7ac,	// (0x0006d9a2) bg_popup_call2_in_pane

0xe808,	// (0x0006d9fe) popup_call2_audio_in_window_g1_ParamLimits

0xe808,	// (0x0006d9fe) popup_call2_audio_in_window_g1

0xe840,	// (0x0006da36) popup_call2_audio_in_window_g2_ParamLimits

0xe840,	// (0x0006da36) popup_call2_audio_in_window_g2

0xe878,	// (0x0006da6e) popup_call2_audio_in_window_g3_ParamLimits

0xe878,	// (0x0006da6e) popup_call2_audio_in_window_g3

0x0003,

0xf4d6,	// (0x0006e6cc) popup_call2_audio_in_window_g_ParamLimits

0xf4d6,	// (0x0006e6cc) popup_call2_audio_in_window_g

0xe8d0,	// (0x0006dac6) popup_call2_audio_in_window_t1_ParamLimits

0xe8d0,	// (0x0006dac6) popup_call2_audio_in_window_t1

0xe950,	// (0x0006db46) popup_call2_audio_in_window_t2_ParamLimits

0xe950,	// (0x0006db46) popup_call2_audio_in_window_t2

0xe9d0,	// (0x0006dbc6) popup_call2_audio_in_window_t3_ParamLimits

0xe9d0,	// (0x0006dbc6) popup_call2_audio_in_window_t3

0xe9ea,	// (0x0006dbe0) popup_call2_audio_in_window_t4_ParamLimits

0xe9ea,	// (0x0006dbe0) popup_call2_audio_in_window_t4

0xe9fc,	// (0x0006dbf2) popup_call2_audio_in_window_t5_ParamLimits

0xe9fc,	// (0x0006dbf2) popup_call2_audio_in_window_t5

0xea11,	// (0x0006dc07) popup_call2_audio_in_window_t6_ParamLimits

0xea11,	// (0x0006dc07) popup_call2_audio_in_window_t6

0x0005,

0xf4df,	// (0x0006e6d5) popup_call2_audio_in_window_t_ParamLimits

0xf4df,	// (0x0006e6d5) popup_call2_audio_in_window_t

0x0b08,	// (0x0005fcfe) bg_popup_call2_in_pane_g1

0xeb70,	// (0x0006dd66) popup_cale_lunar_info_window_t4

0x0003,

0xf55a,	// (0x0006e750) popup_cale_lunar_info_window_t

0x0b10,	// (0x0005fd06) bg_popup_call2_rect_pane_ParamLimits

0x0b10,	// (0x0005fd06) bg_popup_call2_rect_pane

0x08b5,	// (0x0005faab) call2_cli_visual_graphic_pane

0x08b5,	// (0x0005faab) call2_cli_visual_text_pane

0x9a42,	// (0x00068c38) smil_status_volume_pane_g3

0x0002,

0x0b28,	// (0x0005fd1e) call2_cli_visual_graphic_pane_g1

0x0b28,	// (0x0005fd1e) call2_cli_visual_graphic_pane_g2

0x0b28,	// (0x0005fd1e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ec,	// (0x0006e6e2) call2_cli_visual_graphic_pane_g

0xea26,	// (0x0006dc1c) bg_popup_call2_rect_pane_g1

0x0d71,	// (0x0005ff67) bg_popup_call2_rect_pane_g2

0xea2e,	// (0x0006dc24) bg_popup_call2_rect_pane_g3

0xea36,	// (0x0006dc2c) bg_popup_call2_rect_pane_g4

0xea3e,	// (0x0006dc34) bg_popup_call2_rect_pane_g5

0xea46,	// (0x0006dc3c) bg_popup_call2_rect_pane_g6

0xea4e,	// (0x0006dc44) bg_popup_call2_rect_pane_g7

0xea56,	// (0x0006dc4c) bg_popup_call2_rect_pane_g8

0xea5e,	// (0x0006dc54) bg_popup_call2_rect_pane_g9

0x0008,

0xf4f3,	// (0x0006e6e9) bg_popup_call2_rect_pane_g

0xea66,	// (0x0006dc5c) bg_popup_call2_bubble_pane_g1

0xea6e,	// (0x0006dc64) bg_popup_call2_bubble_pane_g2

0xea76,	// (0x0006dc6c) bg_popup_call2_bubble_pane_g3

0xea7e,	// (0x0006dc74) bg_popup_call2_bubble_pane_g4

0xea86,	// (0x0006dc7c) bg_popup_call2_bubble_pane_g5

0xea8e,	// (0x0006dc84) bg_popup_call2_bubble_pane_g6

0xea96,	// (0x0006dc8c) bg_popup_call2_bubble_pane_g7

0xea9e,	// (0x0006dc94) bg_popup_call2_bubble_pane_g8

0xeaa6,	// (0x0006dc9c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf506,	// (0x0006e6fc) bg_popup_call2_bubble_pane_g

0x5f0d,	// (0x00065103) aid_cale_week_size_cell_pane

0x0b10,	// (0x0005fd06) aid_cams_cif_uncrop_pane_ParamLimits

0x0b10,	// (0x0005fd06) aid_cams_cif_uncrop_pane

0x66a3,	// (0x00065899) aid_cams_size_cell_ParamLimits

0x66a3,	// (0x00065899) aid_cams_size_cell

0x66af,	// (0x000658a5) grid_cams_pane_ParamLimits

0x66bb,	// (0x000658b1) linegrid_cams_pane_ParamLimits

0x67d5,	// (0x000659cb) call_video_pane_t1

0x67f2,	// (0x000659e8) call_video_pane_t2

0x0001,

0xf1fc,	// (0x0006e3f2) call_video_pane_t

0x6e46,	// (0x0006603c) aid_cale_month_size_cell_pane_ParamLimits

0x6e46,	// (0x0006603c) aid_cale_month_size_cell_pane

0xf59e,	// (0x0006e794) smil_status_volume_pane_g

0x9a4f,	// (0x00068c45) volume_smil_pane_ParamLimits

0x58fb,	// (0x00064af1) aid_popup2_width_pane

0x5e27,	// (0x0006501d) cell_qdial_pane_g4_ParamLimits

0x5e27,	// (0x0006501d) cell_qdial_pane_g4

0x8104,	// (0x000672fa) aid_blid_cardinal_pane_ParamLimits

0x8110,	// (0x00067306) aid_blid_destination_pane_ParamLimits

0x8110,	// (0x00067306) aid_blid_destination_pane

0x0b10,	// (0x0005fd06) bg_popup_call_poc_act_pane_ParamLimits

0x0b10,	// (0x0005fd06) bg_popup_call_poc_act_pane

0x0b10,	// (0x0005fd06) bg_popup_call_poc_inact_pane_ParamLimits

0x0b10,	// (0x0005fd06) bg_popup_call_poc_inact_pane

0xeaae,	// (0x0006dca4) bg_popup_call_poc_act_pane_g1

0xeab6,	// (0x0006dcac) bg_popup_call_poc_act_pane_g2

0xeabe,	// (0x0006dcb4) bg_popup_call_poc_act_pane_g3

0xea7e,	// (0x0006dc74) bg_popup_call_poc_act_pane_g4

0xea86,	// (0x0006dc7c) bg_popup_call_poc_act_pane_g5

0xeac6,	// (0x0006dcbc) bg_popup_call_poc_act_pane_g6

0xea96,	// (0x0006dc8c) bg_popup_call_poc_act_pane_g7

0xeace,	// (0x0006dcc4) bg_popup_call_poc_act_pane_g8

0x08b5,	// (0x0005faab) main_usb_pane

0x98ec,	// (0x00068ae2) popup_cale_lunar_info_window

0x6ad5,	// (0x00065ccb) im_reading_pane_t1_ParamLimits

0x6b0d,	// (0x00065d03) list_im_pane_ParamLimits

0x6b1e,	// (0x00065d14) scroll_pane_cp07_ParamLimits

0x08b5,	// (0x0005faab) grid_highlight_pane_cp012

0x0b10,	// (0x0005fd06) mup_scale_pane_ParamLimits

0x7d0b,	// (0x00066f01) main_usb_pane_g1_ParamLimits

0x7d0b,	// (0x00066f01) main_usb_pane_g1

0x96cb,	// (0x000688c1) main_usb_pane_g2_ParamLimits

0x96cb,	// (0x000688c1) main_usb_pane_g2

0x0001,

0xf543,	// (0x0006e739) main_usb_pane_g_ParamLimits

0xf543,	// (0x0006e739) main_usb_pane_g

0x96d7,	// (0x000688cd) main_usb_pane_t1_ParamLimits

0x96d7,	// (0x000688cd) main_usb_pane_t1

0x96e9,	// (0x000688df) main_usb_pane_t2_ParamLimits

0x96e9,	// (0x000688df) main_usb_pane_t2

0x96fb,	// (0x000688f1) main_usb_pane_t3_ParamLimits

0x96fb,	// (0x000688f1) main_usb_pane_t3

0x970d,	// (0x00068903) main_usb_pane_t4_ParamLimits

0x970d,	// (0x00068903) main_usb_pane_t4

0x971f,	// (0x00068915) main_usb_pane_t5_ParamLimits

0x971f,	// (0x00068915) main_usb_pane_t5

0x9731,	// (0x00068927) main_usb_pane_t6_ParamLimits

0x9731,	// (0x00068927) main_usb_pane_t6

0x0005,

0xf548,	// (0x0006e73e) main_usb_pane_t_ParamLimits

0x809e,	// (0x00067294) aid_text_placing

0x80b0,	// (0x000672a6) main_location2_pane_t1_ParamLimits

0x80c6,	// (0x000672bc) main_location2_pane_t2_ParamLimits

0x80dc,	// (0x000672d2) main_location2_pane_t3_ParamLimits

0x80f2,	// (0x000672e8) main_location2_pane_t4_ParamLimits

0x80f2,	// (0x000672e8) main_location2_pane_t4

0xf34f,	// (0x0006e545) main_location2_pane_t_ParamLimits

0x0b4b,	// (0x0005fd41) find_pinb_pane_g2_ParamLimits

0x0b4b,	// (0x0005fd41) find_pinb_pane_g2

0x0001,

0xf0b4,	// (0x0006e2aa) find_pinb_pane_g_ParamLimits

0xf0b4,	// (0x0006e2aa) find_pinb_pane_g

0x0b57,	// (0x0005fd4d) find_pinb_pane_t1_ParamLimits

0x0b69,	// (0x0005fd5f) find_pinb_pane_t2_ParamLimits

0xf0b9,	// (0x0006e2af) find_pinb_pane_t_ParamLimits

0x08b5,	// (0x0005faab) main_call3_pane

0x7229,	// (0x0006641f) cale_month_day_heading_pane_t1_ParamLimits

0x72af,	// (0x000664a5) cale_month_day_heading_pane_t2_ParamLimits

0x7340,	// (0x00066536) cale_month_day_heading_pane_t3_ParamLimits

0x73d1,	// (0x000665c7) cale_month_day_heading_pane_t4_ParamLimits

0x7462,	// (0x00066658) cale_month_day_heading_pane_t5_ParamLimits

0x74f3,	// (0x000666e9) cale_month_day_heading_pane_t6_ParamLimits

0x7584,	// (0x0006677a) cale_month_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0006e42a) cale_month_day_heading_pane_t_ParamLimits

0x78ae,	// (0x00066aa4) smil_status_volume_pane

0x8811,	// (0x00067a07) postcard_address_pane_ParamLimits

0x8811,	// (0x00067a07) postcard_address_pane

0x881d,	// (0x00067a13) postcard_message_pane_ParamLimits

0x881d,	// (0x00067a13) postcard_message_pane

0x96a7,	// (0x0006889d) call2_cli_visual_pane_t1_ParamLimits

0x96a7,	// (0x0006889d) call2_cli_visual_pane_t1

0xecad,	// (0x0006dea3) postcard_message_pane_t1_ParamLimits

0xecad,	// (0x0006dea3) postcard_message_pane_t1

0xec95,	// (0x0006de8b) postcard_address_pane_t1_ParamLimits

0xec95,	// (0x0006de8b) postcard_address_pane_t1

0x9b7c,	// (0x00068d72) popup_call3_audio_in_window_ParamLimits

0x9b7c,	// (0x00068d72) popup_call3_audio_in_window

0x9a64,	// (0x00068c5a) bg_popup_call3_in_pane_ParamLimits

0x9a64,	// (0x00068c5a) bg_popup_call3_in_pane

0x9ac2,	// (0x00068cb8) popup_call3_audio_in_window_g1_ParamLimits

0x9ac2,	// (0x00068cb8) popup_call3_audio_in_window_g1

0x9ada,	// (0x00068cd0) popup_call3_audio_in_window_g2_ParamLimits

0x9ada,	// (0x00068cd0) popup_call3_audio_in_window_g2

0x9af2,	// (0x00068ce8) popup_call3_audio_in_window_g3_ParamLimits

0x9af2,	// (0x00068ce8) popup_call3_audio_in_window_g3

0x0003,

0xf5a5,	// (0x0006e79b) popup_call3_audio_in_window_g_ParamLimits

0xf5a5,	// (0x0006e79b) popup_call3_audio_in_window_g

0x9b1a,	// (0x00068d10) popup_call3_audio_in_window_t1_ParamLimits

0x9b1a,	// (0x00068d10) popup_call3_audio_in_window_t1

0x9b42,	// (0x00068d38) popup_call3_audio_in_window_t2_ParamLimits

0x9b42,	// (0x00068d38) popup_call3_audio_in_window_t2

0x9b6a,	// (0x00068d60) popup_call3_audio_in_window_t3_ParamLimits

0x9b6a,	// (0x00068d60) popup_call3_audio_in_window_t3

0x0002,

0xf5ae,	// (0x0006e7a4) popup_call3_audio_in_window_t_ParamLimits

0xf5ae,	// (0x0006e7a4) popup_call3_audio_in_window_t

0x64dd,	// (0x000656d3) bg_popup_call3_rect_pane

0xea26,	// (0x0006dc1c) bg_popup_call3_rect_pane_g1

0x0d71,	// (0x0005ff67) bg_popup_call3_rect_pane_g2

0xea2e,	// (0x0006dc24) bg_popup_call3_rect_pane_g3

0xea36,	// (0x0006dc2c) bg_popup_call3_rect_pane_g4

0xea3e,	// (0x0006dc34) bg_popup_call3_rect_pane_g5

0xea46,	// (0x0006dc3c) bg_popup_call3_rect_pane_g6

0xea4e,	// (0x0006dc44) bg_popup_call3_rect_pane_g7

0x0431,	// (0x0005f627) mup_visualizer_osc_pane

0x0431,	// (0x0005f627) mup_visualizer_spec_pane

0x9a84,	// (0x00068c7a) call3_video_qcif_pane_ParamLimits

0x9a84,	// (0x00068c7a) call3_video_qcif_pane

0x9a94,	// (0x00068c8a) call3_video_qcif_uncrop_pane_ParamLimits

0x9a94,	// (0x00068c8a) call3_video_qcif_uncrop_pane

0x9aa0,	// (0x00068c96) call3_video_subqcif_pane_ParamLimits

0x9aa0,	// (0x00068c96) call3_video_subqcif_pane

0x9ab2,	// (0x00068ca8) call3_video_subqcif_uncrop_pane_ParamLimits

0x9ab2,	// (0x00068ca8) call3_video_subqcif_uncrop_pane

0x9b0a,	// (0x00068d00) popup_call3_audio_in_window_g4_ParamLimits

0x9b0a,	// (0x00068d00) popup_call3_audio_in_window_g4

0x0431,	// (0x0005f627) mup_spec_half_pane

0x0431,	// (0x0005f627) mup_spec_half_pane_cp

0x0431,	// (0x0005f627) mup_osc_middle_pane

0x6699,	// (0x0006588f) mup_visualizer_osc_pane_g1

0xec48,	// (0x0006de3e) mup_spec_bar_pane_ParamLimits

0xec48,	// (0x0006de3e) mup_spec_bar_pane

0x6699,	// (0x0006588f) mup_spec_bar_pane_g1

0x6699,	// (0x0006588f) mup_spec_bar_pane_g2

0x0001,

0xf3c9,	// (0x0006e5bf) mup_spec_bar_pane_g

0x5f0d,	// (0x00065103) aid_cale_week_size_cell_pane_ParamLimits

0x5f22,	// (0x00065118) bg_cale_heading_pane_ParamLimits

0x0df7,	// (0x0005ffed) bg_cale_pane_cp01_ParamLimits

0x5f3a,	// (0x00065130) cale_week_corner_pane_ParamLimits

0x5f54,	// (0x0006514a) cale_week_day_heading_pane_ParamLimits

0x5f6c,	// (0x00065162) cale_week_scroll_pane_g1_ParamLimits

0x5f7f,	// (0x00065175) cale_week_scroll_pane_g2_ParamLimits

0x5f92,	// (0x00065188) cale_week_scroll_pane_g3_ParamLimits

0x5fa5,	// (0x0006519b) cale_week_scroll_pane_g4_ParamLimits

0x5fb8,	// (0x000651ae) cale_week_scroll_pane_g5_ParamLimits

0x5fcb,	// (0x000651c1) cale_week_scroll_pane_g6_ParamLimits

0x5fde,	// (0x000651d4) cale_week_scroll_pane_g7_ParamLimits

0x5ff1,	// (0x000651e7) cale_week_scroll_pane_g8_ParamLimits

0x6004,	// (0x000651fa) cale_week_scroll_pane_g9_ParamLimits

0x6017,	// (0x0006520d) cale_week_scroll_pane_g10_ParamLimits

0x602a,	// (0x00065220) cale_week_scroll_pane_g11_ParamLimits

0x603d,	// (0x00065233) cale_week_scroll_pane_g12_ParamLimits

0x6050,	// (0x00065246) cale_week_scroll_pane_g13_ParamLimits

0x6063,	// (0x00065259) cale_week_scroll_pane_g14_ParamLimits

0x6076,	// (0x0006526c) cale_week_scroll_pane_g15_ParamLimits

0xf145,	// (0x0006e33b) cale_week_scroll_pane_g_ParamLimits

0x609c,	// (0x00065292) cale_week_time_pane_ParamLimits

0x60af,	// (0x000652a5) grid_cale_week_pane_ParamLimits

0x0e14,	// (0x0006000a) listscroll_cale_week_pane_t1

0x0e26,	// (0x0006001c) scroll_pane_cp08_ParamLimits

0x6ec8,	// (0x000660be) cale_month_corner_pane_ParamLimits

0x71de,	// (0x000663d4) cale_month_pane_t1

0x71f0,	// (0x000663e6) cale_month_week_pane_ParamLimits

0x7d0b,	// (0x00066f01) popup_call_status_window_g1_ParamLimits

0x7d19,	// (0x00066f0f) popup_call_status_window_g2_ParamLimits

0x7d25,	// (0x00066f1b) popup_call_status_window_g3_ParamLimits

0xf2d6,	// (0x0006e4cc) popup_call_status_window_g_ParamLimits

0x7d88,	// (0x00066f7e) aid_call2_pane

0x4d15,	// (0x00063f0b) msg_header_pane_g1

0x8811,	// (0x00067a07) postcard_address2_pane_ParamLimits

0x8811,	// (0x00067a07) postcard_address2_pane

0x881d,	// (0x00067a13) postcard_message2_pane_ParamLimits

0x881d,	// (0x00067a13) postcard_message2_pane

0x9a17,	// (0x00068c0d) message2_row_pane_ParamLimits

0x9a17,	// (0x00068c0d) message2_row_pane

0x9a2f,	// (0x00068c25) address2_row_pane_ParamLimits

0x9a2f,	// (0x00068c25) address2_row_pane

0xec15,	// (0x0006de0b) postcard_message2_row_pane_g1

0xec1d,	// (0x0006de13) postcard_message2_row_pane_t1

0xec15,	// (0x0006de0b) address2_row_pane_g1

0xec1d,	// (0x0006de13) address2_row_pane_t1

0x0f90,	// (0x00060186) aid_size_cell_vorec

0x08b5,	// (0x0005faab) main_rss_pane

0xec2b,	// (0x0006de21) rss_list_single_pane_ParamLimits

0xec2b,	// (0x0006de21) rss_list_single_pane

0xec39,	// (0x0006de2f) rss_list_single_pane_t1

0xec39,	// (0x0006de2f) rss_list_single_pane_t2

0x0001,

0xf599,	// (0x0006e78f) rss_list_single_pane_t

0x08b5,	// (0x0005faab) main_camera2_pane

0x08b5,	// (0x0005faab) main_video2_pane

0x0ba6,	// (0x0005fd9c) cams_zoom_pane_cp2_ParamLimits

0x0ba6,	// (0x0005fd9c) cams_zoom_pane_cp2

0x0ba6,	// (0x0005fd9c) image2_vga_pane_ParamLimits

0x0ba6,	// (0x0005fd9c) image2_vga_pane

0x0b98,	// (0x0005fd8e) main_camera2_pane_g1_ParamLimits

0x0b98,	// (0x0005fd8e) main_camera2_pane_g1

0x0b98,	// (0x0005fd8e) main_camera2_pane_g2_ParamLimits

0x0b98,	// (0x0005fd8e) main_camera2_pane_g2

0x0b98,	// (0x0005fd8e) main_camera2_pane_g3_ParamLimits

0x0b98,	// (0x0005fd8e) main_camera2_pane_g3

0x0b98,	// (0x0005fd8e) main_camera2_pane_g4_ParamLimits

0x0b98,	// (0x0005fd8e) main_camera2_pane_g4

0x0b98,	// (0x0005fd8e) main_camera2_pane_g5_ParamLimits

0x0b98,	// (0x0005fd8e) main_camera2_pane_g5

0x0b98,	// (0x0005fd8e) main_camera2_pane_g6_ParamLimits

0x0b98,	// (0x0005fd8e) main_camera2_pane_g6

0x0b98,	// (0x0005fd8e) main_camera2_pane_g7_ParamLimits

0x0b98,	// (0x0005fd8e) main_camera2_pane_g7

0x0b98,	// (0x0005fd8e) main_camera2_pane_g8_ParamLimits

0x0b98,	// (0x0005fd8e) main_camera2_pane_g8

0x0008,

0xf5b5,	// (0x0006e7ab) main_camera2_pane_g_ParamLimits

0xf5b5,	// (0x0006e7ab) main_camera2_pane_g

0x6550,	// (0x00065746) main_camera2_pane_t1_ParamLimits

0x6550,	// (0x00065746) main_camera2_pane_t1

0x6550,	// (0x00065746) main_camera2_pane_t2_ParamLimits

0x6550,	// (0x00065746) main_camera2_pane_t2

0x6550,	// (0x00065746) main_camera2_pane_t3_ParamLimits

0x6550,	// (0x00065746) main_camera2_pane_t3

0x6550,	// (0x00065746) main_camera2_pane_t4_ParamLimits

0x6550,	// (0x00065746) main_camera2_pane_t4

0x0006,

0xf5c8,	// (0x0006e7be) main_camera2_pane_t_ParamLimits

0xf5c8,	// (0x0006e7be) main_camera2_pane_t

0xebe2,	// (0x0006ddd8) cams_zoom_pane_cp4_ParamLimits

0xebe2,	// (0x0006ddd8) cams_zoom_pane_cp4

0x8459,	// (0x0006764f) image2_cif_pane_ParamLimits

0x8459,	// (0x0006764f) image2_cif_pane

0x0ba6,	// (0x0005fd9c) image2_subqcif_pane_ParamLimits

0x0ba6,	// (0x0005fd9c) image2_subqcif_pane

0xecc9,	// (0x0006debf) main_video2_pane_g1_ParamLimits

0xecc9,	// (0x0006debf) main_video2_pane_g1

0xecc9,	// (0x0006debf) main_video2_pane_g2_ParamLimits

0xecc9,	// (0x0006debf) main_video2_pane_g2

0xecc9,	// (0x0006debf) main_video2_pane_g3_ParamLimits

0xecc9,	// (0x0006debf) main_video2_pane_g3

0xecc9,	// (0x0006debf) main_video2_pane_g4_ParamLimits

0xecc9,	// (0x0006debf) main_video2_pane_g4

0xecc9,	// (0x0006debf) main_video2_pane_g5_ParamLimits

0xecc9,	// (0x0006debf) main_video2_pane_g5

0xecc9,	// (0x0006debf) main_video2_pane_g6_ParamLimits

0xecc9,	// (0x0006debf) main_video2_pane_g6

0x0005,

0xf5d7,	// (0x0006e7cd) main_video2_pane_g_ParamLimits

0xf5d7,	// (0x0006e7cd) main_video2_pane_g

0xecd7,	// (0x0006decd) main_video2_pane_t1_ParamLimits

0xecd7,	// (0x0006decd) main_video2_pane_t1

0xecd7,	// (0x0006decd) main_video2_pane_t2_ParamLimits

0xecd7,	// (0x0006decd) main_video2_pane_t2

0xecd7,	// (0x0006decd) main_video2_pane_t3_ParamLimits

0xecd7,	// (0x0006decd) main_video2_pane_t3

0x0002,

0xf5e4,	// (0x0006e7da) main_video2_pane_t_ParamLimits

0xf5e4,	// (0x0006e7da) main_video2_pane_t

0x97bd,	// (0x000689b3) call_muted_g2

0x0001,

0xf58b,	// (0x0006e781) call_muted_g

0x08b5,	// (0x0005faab) main_mup2_pane

0x0bb4,	// (0x0005fdaa) main_mup2_pane_g1_ParamLimits

0x0bb4,	// (0x0005fdaa) main_mup2_pane_g1

0x0bb4,	// (0x0005fdaa) main_mup2_pane_g2_ParamLimits

0x0bb4,	// (0x0005fdaa) main_mup2_pane_g2

0x6699,	// (0x0006588f) main_mup_pane_g13_cp1

0x0431,	// (0x0005f627) mup_volume_pane_cp1

0x0bb4,	// (0x0005fdaa) main_mup2_pane_g4_ParamLimits

0x0bb4,	// (0x0005fdaa) main_mup2_pane_g4

0x0bb4,	// (0x0005fdaa) main_mup2_pane_g5_ParamLimits

0x0bb4,	// (0x0005fdaa) main_mup2_pane_g5

0x0bb4,	// (0x0005fdaa) main_mup2_pane_g6_ParamLimits

0x0bb4,	// (0x0005fdaa) main_mup2_pane_g6

0x0bb4,	// (0x0005fdaa) main_mup2_pane_g7_ParamLimits

0x0bb4,	// (0x0005fdaa) main_mup2_pane_g7

0x0006,

0xf5eb,	// (0x0006e7e1) main_mup2_pane_g_ParamLimits

0xf5eb,	// (0x0006e7e1) main_mup2_pane_g

0x0bc2,	// (0x0005fdb8) main_mup2_pane_t1_ParamLimits

0x0bc2,	// (0x0005fdb8) main_mup2_pane_t1

0x0bc2,	// (0x0005fdb8) main_mup2_pane_t2_ParamLimits

0x0bc2,	// (0x0005fdb8) main_mup2_pane_t2

0x0bc2,	// (0x0005fdb8) main_mup2_pane_t3_ParamLimits

0x0bc2,	// (0x0005fdb8) main_mup2_pane_t3

0x0bc2,	// (0x0005fdb8) main_mup2_pane_t4_ParamLimits

0x0bc2,	// (0x0005fdb8) main_mup2_pane_t4

0x0bc2,	// (0x0005fdb8) main_mup2_pane_t5_ParamLimits

0x0bc2,	// (0x0005fdb8) main_mup2_pane_t5

0x0bc2,	// (0x0005fdb8) main_mup2_pane_t6_ParamLimits

0x0bc2,	// (0x0005fdb8) main_mup2_pane_t6

0x0005,

0xf5fa,	// (0x0006e7f0) main_mup2_pane_t_ParamLimits

0xf5fa,	// (0x0006e7f0) main_mup2_pane_t

0xe4db,	// (0x0006d6d1) mup2_visualizer_pane_ParamLimits

0xe4db,	// (0x0006d6d1) mup2_visualizer_pane

0xe4db,	// (0x0006d6d1) mup_progress_pane_cp_ParamLimits

0xe4db,	// (0x0006d6d1) mup_progress_pane_cp

0xeceb,	// (0x0006dee1) mup_volume_pane_cp_ParamLimits

0xeceb,	// (0x0006dee1) mup_volume_pane_cp

0x0b8a,	// (0x0005fd80) mup2_visualizer_pane_g1_ParamLimits

0x0b8a,	// (0x0005fd80) mup2_visualizer_pane_g1

0x0b98,	// (0x0005fd8e) mup2_visualizer_pane_g2_ParamLimits

0x0b98,	// (0x0005fd8e) mup2_visualizer_pane_g2

0x0b98,	// (0x0005fd8e) mup2_visualizer_pane_g3_ParamLimits

0x0b98,	// (0x0005fd8e) mup2_visualizer_pane_g3

0x0002,

0xf0be,	// (0x0006e2b4) mup2_visualizer_pane_g_ParamLimits

0xf0be,	// (0x0006e2b4) mup2_visualizer_pane_g

0x0f90,	// (0x00060186) aid_size_cell_fmradio

0x989f,	// (0x00068a95) aid_height_parent_landcape

0x6bd8,	// (0x00065dce) wml_content_pane_cp

0x6be0,	// (0x00065dd6) wml_tabs_pane

0x6be9,	// (0x00065ddf) popup_wml_miniature_window

0x6bf1,	// (0x00065de7) scroll_pane_cp021

0x6c05,	// (0x00065dfb) wml_content_pane_comp8

0x08b5,	// (0x0005faab) bg_popup_sub_pane_cp05

0xed01,	// (0x0006def7) popup_wml_miniature_window_g1

0xed09,	// (0x0006deff) wml_miniature_view_pane

0x9bd3,	// (0x00068dc9) aid_size_wml_view

0x9bdb,	// (0x00068dd1) wml_miniature_view_pane_g1

0x9be4,	// (0x00068dda) wml_miniature_view_pane_g2

0x9bed,	// (0x00068de3) wml_miniature_view_pane_g3

0x9bf5,	// (0x00068deb) wml_miniature_view_pane_g4

0x9bfd,	// (0x00068df3) wml_miniature_view_pane_g5

0x9c05,	// (0x00068dfb) wml_miniature_view_pane_g6

0x9c0d,	// (0x00068e03) wml_miniature_view_pane_g7

0x9c15,	// (0x00068e0b) wml_miniature_view_pane_g8

0x0007,

0xf607,	// (0x0006e7fd) wml_miniature_view_pane_g

0xed11,	// (0x0006df07) background_graphic_ParamLimits

0xed11,	// (0x0006df07) background_graphic

0xed1d,	// (0x0006df13) wml_tabs_2_pane

0xed26,	// (0x0006df1c) wml_tabs_3_pane_ParamLimits

0xed26,	// (0x0006df1c) wml_tabs_3_pane

0xed38,	// (0x0006df2e) wml_tabs_4_pane_ParamLimits

0xed38,	// (0x0006df2e) wml_tabs_4_pane

0xed4e,	// (0x0006df44) wml_tabs_5_pane_ParamLimits

0xed4e,	// (0x0006df44) wml_tabs_5_pane

0xed68,	// (0x0006df5e) wml_tabs_pane_g2_ParamLimits

0xed68,	// (0x0006df5e) wml_tabs_pane_g2

0xed7d,	// (0x0006df73) wml_tabs_pane_g3_ParamLimits

0xed7d,	// (0x0006df73) wml_tabs_pane_g3

0xed92,	// (0x0006df88) wml_tabs_2_active_pane_ParamLimits

0xed92,	// (0x0006df88) wml_tabs_2_active_pane

0xed92,	// (0x0006df88) wml_tabs_2_passive_pane_ParamLimits

0xed92,	// (0x0006df88) wml_tabs_2_passive_pane

0x9c1d,	// (0x00068e13) wml_tabs_3_active_pane_cp_ParamLimits

0x9c1d,	// (0x00068e13) wml_tabs_3_active_pane_cp

0x9c2e,	// (0x00068e24) wml_tabs_3_passive_pane_ParamLimits

0x9c2e,	// (0x00068e24) wml_tabs_3_passive_pane

0x9c3f,	// (0x00068e35) wml_tabs_3_passive_pane_cp_ParamLimits

0x9c3f,	// (0x00068e35) wml_tabs_3_passive_pane_cp

0x9c50,	// (0x00068e46) tabs_4_active_pane

0x9c58,	// (0x00068e4e) tabs_4_passive_pane

0x9c60,	// (0x00068e56) tabs_4_passive_pane_cp

0x9c68,	// (0x00068e5e) tabs_4_passive_pane_cp2

0x96c3,	// (0x000688b9) aid_height_text

0xe4db,	// (0x0006d6d1) mup_volume_cont_pane_ParamLimits

0xe4db,	// (0x0006d6d1) mup_volume_cont_pane

0x5b7f,	// (0x00064d75) aid_size_cell_pinb

0x0431,	// (0x0005f627) aid_size_list_pinb

0xe4db,	// (0x0006d6d1) mup2_volume_cont_pane_ParamLimits

0xe4db,	// (0x0006d6d1) mup2_volume_cont_pane

0x9c70,	// (0x00068e66) mup2_volume_cont_pane_g1_ParamLimits

0x9c70,	// (0x00068e66) mup2_volume_cont_pane_g1

0x5903,	// (0x00064af9) aid_size_cell_touch_ParamLimits

0x5903,	// (0x00064af9) aid_size_cell_touch

0x5ad9,	// (0x00064ccf) touch_pane_ParamLimits

0x5ad9,	// (0x00064ccf) touch_pane

0x0431,	// (0x0005f627) main_rss2_pane

0xeda9,	// (0x0006df9f) listscroll_rss2_pane

0xedb2,	// (0x0006dfa8) rss2_navigation_pane

0xedba,	// (0x0006dfb0) list_rss2_pane

0x7e22,	// (0x00067018) scroll_pane_cp22

0xedc2,	// (0x0006dfb8) rss2_navigation_pane_g1

0xedcb,	// (0x0006dfc1) rss2_navigation_pane_g2

0xedd3,	// (0x0006dfc9) rss2_navigation_pane_g3

0x0002,

0xf618,	// (0x0006e80e) rss2_navigation_pane_g

0xeddb,	// (0x0006dfd1) rss2_navigation_pane_t1

0x9c86,	// (0x00068e7c) rss2_list_single_pane_ParamLimits

0x9c86,	// (0x00068e7c) rss2_list_single_pane

0xede9,	// (0x0006dfdf) rss2_list_single_pane_t2

0xedf7,	// (0x0006dfed) rss2_list_single_pane_t3_ParamLimits

0xedf7,	// (0x0006dfed) rss2_list_single_pane_t3

0xee14,	// (0x0006e00a) rss2_list_single_pane_t4

0x7898,	// (0x00066a8e) smil_status_pane_g1

0x8459,	// (0x0006764f) main_image2_pane_ParamLimits

0x8459,	// (0x0006764f) main_image2_pane

0x0b98,	// (0x0005fd8e) main_camera2_pane_g9_ParamLimits

0x0b98,	// (0x0005fd8e) main_camera2_pane_g9

0x6550,	// (0x00065746) main_camera2_pane_t5_ParamLimits

0x6550,	// (0x00065746) main_camera2_pane_t5

0x9bbf,	// (0x00068db5) main_camera2_pane_t6_ParamLimits

0x9bbf,	// (0x00068db5) main_camera2_pane_t6

0x9c9d,	// (0x00068e93) main_image2_pane_g1_ParamLimits

0x9c9d,	// (0x00068e93) main_image2_pane_g1

0x8b06,	// (0x00067cfc) smil2_video_pane_ParamLimits

0x8b06,	// (0x00067cfc) smil2_video_pane

0x5933,	// (0x00064b29) aid_zoom_text_primary_cp

0x5a88,	// (0x00064c7e) popup_preview_fixed_window

0x6acd,	// (0x00065cc3) im_reading_pane_g1

0x9b89,	// (0x00068d7f) cams2_bc_adjust_pane_cp_ParamLimits

0x9b89,	// (0x00068d7f) cams2_bc_adjust_pane_cp

0x0ba6,	// (0x0005fd9c) cams2_bc_adjust_pane_ParamLimits

0x0ba6,	// (0x0005fd9c) cams2_bc_adjust_pane

0x6699,	// (0x0006588f) cams2_bc_adjust_pane_g1

0x0431,	// (0x0005f627) cams2_slider_pane

0x6699,	// (0x0006588f) cams2_slider_pane_g1

0x6699,	// (0x0006588f) cams2_slider_pane_g2

0x0006,

0xf61f,	// (0x0006e815) cams2_slider_pane_g

0x5bc2,	// (0x00064db8) calc_display_pane_ParamLimits

0x5bda,	// (0x00064dd0) calc_paper_pane_ParamLimits

0x5bf6,	// (0x00064dec) grid_calc_pane_ParamLimits

0x7dea,	// (0x00066fe0) popup_clock_digital_window_t1_ParamLimits

0x89e3,	// (0x00067bd9) main_image_pane_t1

0x5ba8,	// (0x00064d9e) aid_size_cell_calc_ParamLimits

0x5ba8,	// (0x00064d9e) aid_size_cell_calc

0x98cc,	// (0x00068ac2) popup_blid_sat_info2_window_ParamLimits

0x98cc,	// (0x00068ac2) popup_blid_sat_info2_window

0xee22,	// (0x0006e018) aid_size_cell_blid

0xe4db,	// (0x0006d6d1) bg_popup_window_pane_cp07

0xee3f,	// (0x0006e035) grid_popup_blid_pane

0xee47,	// (0x0006e03d) heading_pane_cp05_ParamLimits

0xee47,	// (0x0006e03d) heading_pane_cp05

0xef0f,	// (0x0006e105) cell_popup_blid_pane_ParamLimits

0xef0f,	// (0x0006e105) cell_popup_blid_pane

0xef2f,	// (0x0006e125) cell_popup_blid_pane_g1

0xef37,	// (0x0006e12d) cell_popup_blid_pane_t1

0xe4db,	// (0x0006d6d1) mup2_indicator_pane_ParamLimits

0xe4db,	// (0x0006d6d1) mup2_indicator_pane

0x0431,	// (0x0005f627) mup2_visualizer_osc_pane

0xeceb,	// (0x0006dee1) mup2_visualizer_spec_pane_ParamLimits

0xeceb,	// (0x0006dee1) mup2_visualizer_spec_pane

0x0431,	// (0x0005f627) mup2_spec_half_pane

0x0431,	// (0x0005f627) mup2_spec_half_pane_cp

0xef45,	// (0x0006e13b) mup2_spec_bar_pane_ParamLimits

0xef45,	// (0x0006e13b) mup2_spec_bar_pane

0x6699,	// (0x0006588f) mup2_spec_bar_pane_g1

0xef64,	// (0x0006e15a) mup2_spec_bar_pane_g2

0x0001,

0xf645,	// (0x0006e83b) mup2_spec_bar_pane_g

0x0431,	// (0x0005f627) mup2_osc_middle_pane

0x6699,	// (0x0006588f) mup2_visualizer_osc_pane_g1

0x04c4,	// (0x0005f6ba) popup_number_entry_window_t1_ParamLimits

0x04d7,	// (0x0005f6cd) popup_number_entry_window_t2_ParamLimits

0x04e9,	// (0x0005f6df) popup_number_entry_window_t3_ParamLimits

0x5b26,	// (0x00064d1c) popup_number_entry_window_t5_ParamLimits

0x5b26,	// (0x00064d1c) popup_number_entry_window_t5

0xf05f,	// (0x0006e255) popup_number_entry_window_t_ParamLimits

0x04fb,	// (0x0005f6f1) text_title_cp2_ParamLimits

0x86ed,	// (0x000678e3) aid_hotspot_pointer_text2_pane

0x877f,	// (0x00067975) main_viewer_pane_g9_ParamLimits

0x877f,	// (0x00067975) main_viewer_pane_g9

0x71de,	// (0x000663d4) cale_month_pane_t1_ParamLimits

0x792b,	// (0x00066b21) bg_cale_pane_ParamLimits

0x7943,	// (0x00066b39) list_cale_pane_ParamLimits

0x7954,	// (0x00066b4a) listscroll_cale_day_pane_t1

0x7966,	// (0x00066b5c) scroll_pane_cp09_ParamLimits

0x84c0,	// (0x000676b6) main_mup_eq_pane_t1_ParamLimits

0x84c0,	// (0x000676b6) main_mup_eq_pane_t1

0x84d6,	// (0x000676cc) main_mup_eq_pane_t2_ParamLimits

0x84d6,	// (0x000676cc) main_mup_eq_pane_t2

0x84ec,	// (0x000676e2) main_mup_eq_pane_t3_ParamLimits

0x84ec,	// (0x000676e2) main_mup_eq_pane_t3

0x8502,	// (0x000676f8) main_mup_eq_pane_t4_ParamLimits

0x8502,	// (0x000676f8) main_mup_eq_pane_t4

0x8518,	// (0x0006770e) main_mup_eq_pane_t5_ParamLimits

0x8518,	// (0x0006770e) main_mup_eq_pane_t5

0x852e,	// (0x00067724) main_mup_eq_pane_t6_ParamLimits

0x852e,	// (0x00067724) main_mup_eq_pane_t6

0x8540,	// (0x00067736) main_mup_eq_pane_t7_ParamLimits

0x8540,	// (0x00067736) main_mup_eq_pane_t7

0x8552,	// (0x00067748) main_mup_eq_pane_t8_ParamLimits

0x8552,	// (0x00067748) main_mup_eq_pane_t8

0x8564,	// (0x0006775a) main_mup_eq_pane_t9_ParamLimits

0x8564,	// (0x0006775a) main_mup_eq_pane_t9

0x857a,	// (0x00067770) main_mup_eq_pane_t10_ParamLimits

0x857a,	// (0x00067770) main_mup_eq_pane_t10

0x0009,

0xf3d5,	// (0x0006e5cb) main_mup_eq_pane_t_ParamLimits

0xf3d5,	// (0x0006e5cb) main_mup_eq_pane_t

0x860d,	// (0x00067803) mup_equalizer_pane_cp5_ParamLimits

0x861f,	// (0x00067815) mup_equalizer_pane_cp6_ParamLimits

0x8631,	// (0x00067827) mup_equalizer_pane_cp7_ParamLimits

0x0431,	// (0x0005f627) main_gallery_pane

0xec67,	// (0x0006de5d) smil2_volume_pane

0xec6f,	// (0x0006de65) smil_status_volume_pane_g1_ParamLimits

0xec82,	// (0x0006de78) smil_status_volume_pane_g2_ParamLimits

0x9a42,	// (0x00068c38) smil_status_volume_pane_g3_ParamLimits

0xf59e,	// (0x0006e794) smil_status_volume_pane_g_ParamLimits

0xe4db,	// (0x0006d6d1) bg_popup_window_pane_cp07_ParamLimits

0xee2a,	// (0x0006e020) blid_firmament_pane

0x0ba6,	// (0x0005fd9c) aid_size_cell_gallery_ParamLimits

0x0ba6,	// (0x0005fd9c) aid_size_cell_gallery

0x9ca9,	// (0x00068e9f) grid_gallery_pane_ParamLimits

0x9ca9,	// (0x00068e9f) grid_gallery_pane

0x9cb8,	// (0x00068eae) cell_gallery_pane_ParamLimits

0x9cb8,	// (0x00068eae) cell_gallery_pane

0x8459,	// (0x0006764f) bg_cell_gallery_focus_pane_ParamLimits

0x8459,	// (0x0006764f) bg_cell_gallery_focus_pane

0x0b8a,	// (0x0005fd80) cell_gallery_pane_g1_ParamLimits

0x0b8a,	// (0x0005fd80) cell_gallery_pane_g1

0x0b8a,	// (0x0005fd80) cell_gallery_pane_g2_ParamLimits

0x0b8a,	// (0x0005fd80) cell_gallery_pane_g2

0x0b8a,	// (0x0005fd80) cell_gallery_pane_g3_ParamLimits

0x0b8a,	// (0x0005fd80) cell_gallery_pane_g3

0x0b98,	// (0x0005fd8e) cell_gallery_pane_g4_ParamLimits

0x0b98,	// (0x0005fd8e) cell_gallery_pane_g4

0x0003,

0xf64a,	// (0x0006e840) cell_gallery_pane_g_ParamLimits

0xf64a,	// (0x0006e840) cell_gallery_pane_g

0xef6e,	// (0x0006e164) bg_cell_gallery_focus_pane_g1

0xef76,	// (0x0006e16c) bg_cell_gallery_focus_pane_g2

0xef7e,	// (0x0006e174) bg_cell_gallery_focus_pane_g3

0xef86,	// (0x0006e17c) bg_cell_gallery_focus_pane_g4

0xef8e,	// (0x0006e184) bg_cell_gallery_focus_pane_g5

0xef96,	// (0x0006e18c) bg_cell_gallery_focus_pane_g6

0xef9e,	// (0x0006e194) bg_cell_gallery_focus_pane_g7

0xefa6,	// (0x0006e19c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf653,	// (0x0006e849) bg_cell_gallery_focus_pane_g

0xefae,	// (0x0006e1a4) aid_firma_cardinal

0xefc2,	// (0x0006e1b8) blid_firmament_pane_t1

0xefd9,	// (0x0006e1cf) blid_firmament_pane_t2

0xeff0,	// (0x0006e1e6) blid_firmament_pane_t3

0xf007,	// (0x0006e1fd) blid_firmament_pane_t4

0x0003,

0xf664,	// (0x0006e85a) blid_firmament_pane_t

0xf01e,	// (0x0006e214) blid_sat_info_pane

0x6699,	// (0x0006588f) blid_sat_info_pane_g1

0x6699,	// (0x0006588f) blid_sat_info_pane_g2

0x0001,

0xf3c9,	// (0x0006e5bf) blid_sat_info_pane_g

0xf02e,	// (0x0006e224) blid_sat_info_pane_t1

0xf03c,	// (0x0006e232) smil2_volume_content_pane

0x1076,	// (0x0006026c) smil2_volume_pane_g1

0x107e,	// (0x00060274) smil2_volume_content_pane_g1

0x1087,	// (0x0006027d) smil2_volume_content_pane_g2

0x1090,	// (0x00060286) smil2_volume_content_pane_g3

0x1099,	// (0x0006028f) smil2_volume_content_pane_g4

0x10a2,	// (0x00060298) smil2_volume_content_pane_g5

0x10ab,	// (0x000602a1) smil2_volume_content_pane_g6

0x10b4,	// (0x000602aa) smil2_volume_content_pane_g7

0x10bd,	// (0x000602b3) smil2_volume_content_pane_g8

0x10c6,	// (0x000602bc) smil2_volume_content_pane_g9

0x10cf,	// (0x000602c5) smil2_volume_content_pane_g10

0x0009,

0xf66d,	// (0x0006e863) smil2_volume_content_pane_g

0x6112,	// (0x00065308) cale_week_day_heading_pane_t1_ParamLimits

0x614d,	// (0x00065343) cale_week_day_heading_pane_t2_ParamLimits

0x6188,	// (0x0006537e) cale_week_day_heading_pane_t3_ParamLimits

0x61c3,	// (0x000653b9) cale_week_day_heading_pane_t4_ParamLimits

0x61fe,	// (0x000653f4) cale_week_day_heading_pane_t5_ParamLimits

0x6239,	// (0x0006542f) cale_week_day_heading_pane_t6_ParamLimits

0x6274,	// (0x0006546a) cale_week_day_heading_pane_t7_ParamLimits

0xf166,	// (0x0006e35c) cale_week_day_heading_pane_t_ParamLimits

0x0e43,	// (0x00060039) bg_cale_side_pane_ParamLimits

0x62af,	// (0x000654a5) cale_week_time_pane_t1_ParamLimits

0x62e9,	// (0x000654df) cale_week_time_pane_t2_ParamLimits

0x6323,	// (0x00065519) cale_week_time_pane_t3_ParamLimits

0x635d,	// (0x00065553) cale_week_time_pane_t4_ParamLimits

0x6397,	// (0x0006558d) cale_week_time_pane_t5_ParamLimits

0x63d1,	// (0x000655c7) cale_week_time_pane_t6_ParamLimits

0x640b,	// (0x00065601) cale_week_time_pane_t7_ParamLimits

0x6445,	// (0x0006563b) cale_week_time_pane_t8_ParamLimits

0xf175,	// (0x0006e36b) cale_week_time_pane_t_ParamLimits

0x647f,	// (0x00065675) cell_cale_week_pane_g2_ParamLimits

0x0e43,	// (0x00060039) bg_cale_side_pane_cp01_ParamLimits

0x7615,	// (0x0006680b) cale_month_week_pane_t1_ParamLimits

0x764e,	// (0x00066844) cale_month_week_pane_t2_ParamLimits

0x7687,	// (0x0006687d) cale_month_week_pane_t3_ParamLimits

0x76c0,	// (0x000668b6) cale_month_week_pane_t4_ParamLimits

0x76f9,	// (0x000668ef) cale_month_week_pane_t5_ParamLimits

0x7732,	// (0x00066928) cale_month_week_pane_t6_ParamLimits

0xf243,	// (0x0006e439) cale_month_week_pane_t_ParamLimits

0x7859,	// (0x00066a4f) cell_cale_month_pane_g1_ParamLimits

0x0431,	// (0x0005f627) main_cale_event_viewer_pane

0x0431,	// (0x0005f627) listscroll_cale_event_viewer_pane

0x10d8,	// (0x000602ce) list_cale_ev_pane

0x10e0,	// (0x000602d6) scroll_pane_cp023

0x9cd4,	// (0x00068eca) field_cale_ev_pane_ParamLimits

0x9cd4,	// (0x00068eca) field_cale_ev_pane

0x10ec,	// (0x000602e2) field_cale_ev_content_pane_ParamLimits

0x10ec,	// (0x000602e2) field_cale_ev_content_pane

0x10f8,	// (0x000602ee) field_cale_ev_pane_g1_ParamLimits

0x10f8,	// (0x000602ee) field_cale_ev_pane_g1

0x1104,	// (0x000602fa) field_cale_ev_pane_g2_ParamLimits

0x1104,	// (0x000602fa) field_cale_ev_pane_g2

0x111c,	// (0x00060312) field_cale_ev_pane_g3_ParamLimits

0x111c,	// (0x00060312) field_cale_ev_pane_g3

0x0002,

0xf682,	// (0x0006e878) field_cale_ev_pane_g_ParamLimits

0xf682,	// (0x0006e878) field_cale_ev_pane_g

0x1134,	// (0x0006032a) field_cale_ev_pane_t1_ParamLimits

0x1134,	// (0x0006032a) field_cale_ev_pane_t1

0x9cee,	// (0x00068ee4) field_cale_ev_content_pane_t1_ParamLimits

0x9cee,	// (0x00068ee4) field_cale_ev_content_pane_t1

0x86b7,	// (0x000678ad) bg_button_pane_cp01

0x5efd,	// (0x000650f3) listscroll_cale_week_pane_ParamLimits

0x0dee,	// (0x0005ffe4) popup_toolbar_window_cp01

0x0e14,	// (0x0006000a) listscroll_cale_week_pane_t1_ParamLimits

0x5efd,	// (0x000650f3) listscroll_cale_day_pane_ParamLimits

0x0dee,	// (0x0005ffe4) popup_toolbar_window_cp02

0x7954,	// (0x00066b4a) listscroll_cale_day_pane_t1_ParamLimits

0x5efd,	// (0x000650f3) main_cale_month_pane_ParamLimits

0x999f,	// (0x00068b95) popup_toolbar_window_cp03_ParamLimits

0x999f,	// (0x00068b95) popup_toolbar_window_cp03

0x89cb,	// (0x00067bc1) main_image_pane_g2_ParamLimits

0x89cb,	// (0x00067bc1) main_image_pane_g2

0x89d7,	// (0x00067bcd) main_image_pane_g3_ParamLimits

0x89d7,	// (0x00067bcd) main_image_pane_g3

0x0002,

0xf467,	// (0x0006e65d) main_image_pane_g_ParamLimits

0xf467,	// (0x0006e65d) main_image_pane_g

0x89e3,	// (0x00067bd9) main_image_pane_t1_ParamLimits

0x89fa,	// (0x00067bf0) main_image_pane_t2_ParamLimits

0x89fa,	// (0x00067bf0) main_image_pane_t2

0x8a0c,	// (0x00067c02) main_image_pane_t3_ParamLimits

0x8a0c,	// (0x00067c02) main_image_pane_t3

0x8a1e,	// (0x00067c14) main_image_pane_t4_ParamLimits

0x8a1e,	// (0x00067c14) main_image_pane_t4

0x0003,

0xf46e,	// (0x0006e664) main_image_pane_t_ParamLimits

0xf46e,	// (0x0006e664) main_image_pane_t

0x8a30,	// (0x00067c26) popup_image_details_window_cp01

0x8a38,	// (0x00067c2e) popup_toobar_trans_pane_cp01_ParamLimits

0x8a38,	// (0x00067c2e) popup_toobar_trans_pane_cp01

0x9913,	// (0x00068b09) popup_image_details_window_ParamLimits

0x9913,	// (0x00068b09) popup_image_details_window

0x991f,	// (0x00068b15) popup_image_focus_window

0x0ba6,	// (0x0005fd9c) camera2_autofocus_pane_ParamLimits

0x0ba6,	// (0x0005fd9c) camera2_autofocus_pane

0x0431,	// (0x0005f627) bg_popup_sub_pane_cp06

0x114b,	// (0x00060341) popup_image_focus_window_g1

0x1153,	// (0x00060349) popup_image_focus_window_g2

0x115b,	// (0x00060351) popup_image_focus_window_g3

0x1163,	// (0x00060359) popup_image_focus_window_g4

0x0003,

0xf689,	// (0x0006e87f) popup_image_focus_window_g

0x116b,	// (0x00060361) popup_image_focus_window_t1

0x1179,	// (0x0006036f) popup_image_focus_window_t2

0x1188,	// (0x0006037e) popup_image_focus_window_t3

0x0002,

0xf692,	// (0x0006e888) popup_image_focus_window_t

0x0b8a,	// (0x0005fd80) camera2_autofocus_pane_g1

0x8459,	// (0x0006764f) bg_tb_trans_pane_cp01

0x1196,	// (0x0006038c) popup_image_details_window_g1

0x11a9,	// (0x0006039f) popup_image_details_window_g2

0x0002,

0xf6a4,	// (0x0006e89a) popup_image_details_window_g

0x11d2,	// (0x000603c8) popup_image_details_window_t1

0x11e4,	// (0x000603da) popup_image_details_window_t2

0x11fd,	// (0x000603f3) popup_image_details_window_t3

0x1211,	// (0x00060407) popup_image_details_window_t4

0x122c,	// (0x00060422) popup_image_details_window_t5

0x0004,

0xf6ab,	// (0x0006e8a1) popup_image_details_window_t

0x0bfe,	// (0x0005fdf4) bg_calc_paper_pane_ParamLimits

0x0431,	// (0x0005f627) grid_highlight_pane_cp013

0x5cdb,	// (0x00064ed1) list_calc_pane_ParamLimits

0x5ced,	// (0x00064ee3) scroll_pane_cp024

0x0c30,	// (0x0005fe26) bg_calc_display_pane_ParamLimits

0x5cf5,	// (0x00064eeb) calc_display_pane_t1_ParamLimits

0x5d0a,	// (0x00064f00) calc_display_pane_t2_ParamLimits

0x5d1f,	// (0x00064f15) calc_display_pane_t3_ParamLimits

0xf0e6,	// (0x0006e2dc) calc_display_pane_t_ParamLimits

0x5dd5,	// (0x00064fcb) cell_calc_pane_g2

0x0001,

0xf103,	// (0x0006e2f9) cell_calc_pane_g

0x5dde,	// (0x00064fd4) cell_calc_pane_t1

0x0cd3,	// (0x0005fec9) grid_highlight_pane_cp02_ParamLimits

0x0ce9,	// (0x0005fedf) toolbar_button_pane_cp01_ParamLimits

0x0ce9,	// (0x0005fedf) toolbar_button_pane_cp01

0x8a72,	// (0x00067c68) temp_image_control_pane_ParamLimits

0x8a72,	// (0x00067c68) temp_image_control_pane

0x8459,	// (0x0006764f) main_mp3_pane

0x1246,	// (0x0006043c) temp_image_control_pane_g1_ParamLimits

0x1246,	// (0x0006043c) temp_image_control_pane_g1

0x1254,	// (0x0006044a) temp_image_control_pane_g2_ParamLimits

0x1254,	// (0x0006044a) temp_image_control_pane_g2

0x1266,	// (0x0006045c) temp_image_control_pane_g3_ParamLimits

0x1266,	// (0x0006045c) temp_image_control_pane_g3

0x9d08,	// (0x00068efe) temp_image_control_pane_g4_ParamLimits

0x9d08,	// (0x00068efe) temp_image_control_pane_g4

0x0003,

0xf6b6,	// (0x0006e8ac) temp_image_control_pane_g_ParamLimits

0xf6b6,	// (0x0006e8ac) temp_image_control_pane_g

0x1246,	// (0x0006043c) main_mp3_pane_g1

0x9d19,	// (0x00068f0f) main_mp3_pane_g2

0x0007,

0xf6bf,	// (0x0006e8b5) main_mp3_pane_g

0x129b,	// (0x00060491) main_mp3_pane_t1

0x0b98,	// (0x0005fd8e) main_camera_pane_g8_ParamLimits

0x0b98,	// (0x0005fd8e) main_camera_pane_g8

0x6651,	// (0x00065847) main_video_pane_g7_ParamLimits

0x6651,	// (0x00065847) main_video_pane_g7

0x6550,	// (0x00065746) main_camera2_pane_t7_ParamLimits

0x6550,	// (0x00065746) main_camera2_pane_t7

0x6b98,	// (0x00065d8e) scroll_pane_cp025_ParamLimits

0x6b98,	// (0x00065d8e) scroll_pane_cp025

0x6bac,	// (0x00065da2) scroll_pane_cp026_ParamLimits

0x6bac,	// (0x00065da2) scroll_pane_cp026

0x6bbb,	// (0x00065db1) wml_content_pane_ParamLimits

0x0431,	// (0x0005f627) main_touch_calib_pane

0x9db1,	// (0x00068fa7) main_touch_calib_pane_g1

0x9dbd,	// (0x00068fb3) main_touch_calib_pane_g2

0x9dc9,	// (0x00068fbf) main_touch_calib_pane_g3

0x9dd5,	// (0x00068fcb) main_touch_calib_pane_g4

0x0003,

0xf6dd,	// (0x0006e8d3) main_touch_calib_pane_g

0x9de1,	// (0x00068fd7) main_touch_calib_pane_t1

0x9df6,	// (0x00068fec) main_touch_calib_pane_t2

0x0004,

0xf6e6,	// (0x0006e8dc) main_touch_calib_pane_t

0x81dd,	// (0x000673d3) mup_progress_pane_cp02

0x8212,	// (0x00067408) navi_pane_g1

0x82ba,	// (0x000674b0) navi_pane_mp_t3

0x8459,	// (0x0006764f) main_mp3_pane_ParamLimits

0x99da,	// (0x00068bd0) navi_pane_ParamLimits

0x1246,	// (0x0006043c) main_mp3_pane_g1_ParamLimits

0x9d19,	// (0x00068f0f) main_mp3_pane_g2_ParamLimits

0x9d25,	// (0x00068f1b) main_mp3_pane_g3_ParamLimits

0x9d25,	// (0x00068f1b) main_mp3_pane_g3

0x9d31,	// (0x00068f27) main_mp3_pane_g4_ParamLimits

0x9d31,	// (0x00068f27) main_mp3_pane_g4

0x0b8a,	// (0x0005fd80) main_mp3_pane_g5_ParamLimits

0x0b8a,	// (0x0005fd80) main_mp3_pane_g5

0x1276,	// (0x0006046c) main_mp3_pane_g6_ParamLimits

0x1276,	// (0x0006046c) main_mp3_pane_g6

0x1283,	// (0x00060479) main_mp3_pane_g7_ParamLimits

0x1283,	// (0x00060479) main_mp3_pane_g7

0x128f,	// (0x00060485) main_mp3_pane_g8_ParamLimits

0x128f,	// (0x00060485) main_mp3_pane_g8

0xf6bf,	// (0x0006e8b5) main_mp3_pane_g_ParamLimits

0x9d3d,	// (0x00068f33) main_mp3_pane_t2

0x9d4b,	// (0x00068f41) main_mp3_pane_t3

0x12a9,	// (0x0006049f) main_mp3_pane_t4

0x12b7,	// (0x000604ad) main_mp3_pane_t5

0x0005,

0xf6d0,	// (0x0006e8c6) main_mp3_pane_t

0x12c5,	// (0x000604bb) mup_progress_pane_cp01

0x5933,	// (0x00064b29) aid_zoom_text_secondary2

0x10d8,	// (0x000602ce) list_cale_ev2_pane

0x10e0,	// (0x000602d6) scroll_pane_cp023_ParamLimits

0x9e41,	// (0x00069037) field_cale_ev2_pane_ParamLimits

0x9e41,	// (0x00069037) field_cale_ev2_pane

0x9e57,	// (0x0006904d) field_cale_ev2_pane_g1_ParamLimits

0x9e57,	// (0x0006904d) field_cale_ev2_pane_g1

0x9e63,	// (0x00069059) field_cale_ev2_pane_g2_ParamLimits

0x9e63,	// (0x00069059) field_cale_ev2_pane_g2

0x9e7b,	// (0x00069071) field_cale_ev2_pane_g3_ParamLimits

0x9e7b,	// (0x00069071) field_cale_ev2_pane_g3

0x0003,

0xf6f1,	// (0x0006e8e7) field_cale_ev2_pane_g_ParamLimits

0xf6f1,	// (0x0006e8e7) field_cale_ev2_pane_g

0x4d9d,	// (0x00063f93) field_cale_ev2_pane_t1_ParamLimits

0x4d9d,	// (0x00063f93) field_cale_ev2_pane_t1

0x4db4,	// (0x00063faa) field_cale_ev2_pane_t2_ParamLimits

0x4db4,	// (0x00063faa) field_cale_ev2_pane_t2

0x0001,

0xf6fa,	// (0x0006e8f0) field_cale_ev2_pane_t_ParamLimits

0xf6fa,	// (0x0006e8f0) field_cale_ev2_pane_t

0x87e1,	// (0x000679d7) main_postcard_pane_g5_ParamLimits

0x87e1,	// (0x000679d7) main_postcard_pane_g5

0x87ed,	// (0x000679e3) main_postcard_pane_g6_ParamLimits

0x87ed,	// (0x000679e3) main_postcard_pane_g6

0x0ba6,	// (0x0005fd9c) camera2_autofocus_pane_cp_ParamLimits

0x0ba6,	// (0x0005fd9c) camera2_autofocus_pane_cp

0x8459,	// (0x0006764f) main_mup3_pane

0x9ed8,	// (0x000690ce) main_mup3_pane_g1_ParamLimits

0x9ed8,	// (0x000690ce) main_mup3_pane_g1

0x9ef9,	// (0x000690ef) main_mup3_pane_g2_ParamLimits

0x9ef9,	// (0x000690ef) main_mup3_pane_g2

0x9f66,	// (0x0006915c) main_mup3_pane_g3_ParamLimits

0x9f66,	// (0x0006915c) main_mup3_pane_g3

0x9fa1,	// (0x00069197) main_mup3_pane_g4_ParamLimits

0x9fa1,	// (0x00069197) main_mup3_pane_g4

0x9fdc,	// (0x000691d2) main_mup3_pane_g5_ParamLimits

0x9fdc,	// (0x000691d2) main_mup3_pane_g5

0xa017,	// (0x0006920d) main_mup3_pane_g6_ParamLimits

0xa017,	// (0x0006920d) main_mup3_pane_g6

0x0b98,	// (0x0005fd8e) main_mup3_pane_g7_ParamLimits

0x0b98,	// (0x0005fd8e) main_mup3_pane_g7

0x0007,

0xf70a,	// (0x0006e900) main_mup3_pane_g_ParamLimits

0xf70a,	// (0x0006e900) main_mup3_pane_g

0xa085,	// (0x0006927b) main_mup3_pane_t1_ParamLimits

0xa085,	// (0x0006927b) main_mup3_pane_t1

0xa0e6,	// (0x000692dc) main_mup3_pane_t2_ParamLimits

0xa0e6,	// (0x000692dc) main_mup3_pane_t2

0xa1a1,	// (0x00069397) main_mup3_pane_t4_ParamLimits

0xa1a1,	// (0x00069397) main_mup3_pane_t4

0xa1e7,	// (0x000693dd) main_mup3_pane_t5_ParamLimits

0xa1e7,	// (0x000693dd) main_mup3_pane_t5

0xa28b,	// (0x00069481) main_mup3_pane_t6_ParamLimits

0xa28b,	// (0x00069481) main_mup3_pane_t6

0x0005,

0xf71b,	// (0x0006e911) main_mup3_pane_t_ParamLimits

0xf71b,	// (0x0006e911) main_mup3_pane_t

0xa333,	// (0x00069529) mup3_progress_pane_ParamLimits

0xa333,	// (0x00069529) mup3_progress_pane

0xa397,	// (0x0006958d) popup_mup3_control_window_ParamLimits

0xa397,	// (0x0006958d) popup_mup3_control_window

0x1341,	// (0x00060537) popup_mup3_text_window

0xa3b0,	// (0x000695a6) mup3_progress_pane_t1

0xa3ce,	// (0x000695c4) mup3_progress_pane_t2

0x1349,	// (0x0006053f) mup3_progress_pane_t3

0x0002,

0xf728,	// (0x0006e91e) mup3_progress_pane_t

0x1366,	// (0x0006055c) mup_progress_pane_cp03

0x0431,	// (0x0005f627) bg_tb_trans_pane_cp04

0xa3ec,	// (0x000695e2) mup3_volume_pane

0xa3f4,	// (0x000695ea) popup_mup3_control_window_g1

0xa3fd,	// (0x000695f3) mup3_volume_pane_g1

0xa406,	// (0x000695fc) mup3_volume_pane_g2

0xa40f,	// (0x00069605) mup3_volume_pane_g3

0x0002,

0xf72f,	// (0x0006e925) mup3_volume_pane_g

0x0431,	// (0x0005f627) bg_tb_trans_pane_cp03

0x1376,	// (0x0006056c) popup_mup3_text_window_g1

0x137e,	// (0x00060574) popup_mup3_text_window_t1

0x0cb4,	// (0x0005feaa) list_calc_item_pane_g1_ParamLimits

0xeda0,	// (0x0006df96) mup_volume_pane_cp_g1

0x9e0b,	// (0x00069001) main_touch_calib_pane_t3

0x9e1d,	// (0x00069013) main_touch_calib_pane_t4

0x9e2f,	// (0x00069025) main_touch_calib_pane_t5

0x58f3,	// (0x00064ae9) aid_cell_size_toolbar2

0x58fb,	// (0x00064af1) aid_popup3_width_pane

0x4c0a,	// (0x00063e00) aid_zoom_text_msg_primary

0x6525,	// (0x0006571b) vorec_t7

0x0c78,	// (0x0005fe6e) bg_calc_paper_pane_g1_ParamLimits

0x0c90,	// (0x0005fe86) bg_calc_paper_pane_g2_ParamLimits

0x0c84,	// (0x0005fe7a) bg_calc_paper_pane_g3_ParamLimits

0x0ca8,	// (0x0005fe9e) bg_calc_paper_pane_g4_ParamLimits

0x0c9c,	// (0x0005fe92) bg_calc_paper_pane_g5_ParamLimits

0x5d58,	// (0x00064f4e) bg_calc_paper_pane_g6_ParamLimits

0x5d67,	// (0x00064f5d) bg_calc_paper_pane_g7_ParamLimits

0x5d76,	// (0x00064f6c) bg_calc_paper_pane_g8_ParamLimits

0xf0ed,	// (0x0006e2e3) bg_calc_paper_pane_g_ParamLimits

0x5d85,	// (0x00064f7b) calc_bg_paper_pane_g9_ParamLimits

0x0ba6,	// (0x0005fd9c) image_qvga_pane_ParamLimits

0x0ba6,	// (0x0005fd9c) image_qvga_pane

0x0b10,	// (0x0005fd06) bg_popup_sub_pane_cp04_ParamLimits

0x893a,	// (0x00067b30) popup_mup_playback_window_g1_ParamLimits

0x8946,	// (0x00067b3c) popup_mup_playback_window_t1_ParamLimits

0x895b,	// (0x00067b51) popup_mup_playback_window_t2_ParamLimits

0xf462,	// (0x0006e658) popup_mup_playback_window_t_ParamLimits

0x0b8a,	// (0x0005fd80) main_mup2_pane_g3_ParamLimits

0x0b8a,	// (0x0005fd80) main_mup2_pane_g3

0x6881,	// (0x00065a77) popup_toolbar_window_cp04

0x8fd5,	// (0x000681cb) popup_call2_audio_second_window_g3_ParamLimits

0x8fd5,	// (0x000681cb) popup_call2_audio_second_window_g3

0x93ef,	// (0x000685e5) popup_call2_audio_first_window_g4_ParamLimits

0x93ef,	// (0x000685e5) popup_call2_audio_first_window_g4

0xe8b0,	// (0x0006daa6) popup_call2_audio_in_window_g4_ParamLimits

0xe8b0,	// (0x0006daa6) popup_call2_audio_in_window_g4

0x8970,	// (0x00067b66) aid_area_sk_bg_cut_ParamLimits

0x8970,	// (0x00067b66) aid_area_sk_bg_cut

0x897d,	// (0x00067b73) aid_area_sk_bg_cut_2_ParamLimits

0x897d,	// (0x00067b73) aid_area_sk_bg_cut_2

0x0431,	// (0x0005f627) aid_placing_details_win

0x0431,	// (0x0005f627) aid_placing_details_win_2

0x0b8a,	// (0x0005fd80) camera2_autofocus_pane_g1_ParamLimits

0x5a7b,	// (0x00064c71) popup_fixed_preview_cale_window_ParamLimits

0x5a7b,	// (0x00064c71) popup_fixed_preview_cale_window

0x836b,	// (0x00067561) navi_slider_pane_g3

0x8374,	// (0x0006756a) navi_slider_pane_g4

0x837d,	// (0x00067573) navi_slider_pane_g5

0x836b,	// (0x00067561) navi_slider_pane_g6

0x8386,	// (0x0006757c) navi_slider_pane_g7

0x864c,	// (0x00067842) mup_scale_pane_g3

0x8655,	// (0x0006784b) mup_scale_pane_g4

0x865e,	// (0x00067854) mup_scale_pane_g5

0x8667,	// (0x0006785d) mup_scale_pane_g6

0x8670,	// (0x00067866) mup_scale_pane_g7

0x6699,	// (0x0006588f) cams2_slider_pane_g3

0x6699,	// (0x0006588f) cams2_slider_pane_g4

0x6699,	// (0x0006588f) cams2_slider_pane_g5

0x6699,	// (0x0006588f) cams2_slider_pane_g6

0x6699,	// (0x0006588f) cams2_slider_pane_g7

0x6699,	// (0x0006588f) camera2_autofocus_pane_cp_g1

0xebd6,	// (0x0006ddcc) bg_popup_preview_window_pane_cp02_ParamLimits

0xebd6,	// (0x0006ddcc) bg_popup_preview_window_pane_cp02

0x138c,	// (0x00060582) list_fp_cale_pane_ParamLimits

0x138c,	// (0x00060582) list_fp_cale_pane

0x1398,	// (0x0006058e) popup_fixed_preview_cale_window_t1_ParamLimits

0x1398,	// (0x0006058e) popup_fixed_preview_cale_window_t1

0xa418,	// (0x0006960e) popup_fixed_preview_cale_window_t2_ParamLimits

0xa418,	// (0x0006960e) popup_fixed_preview_cale_window_t2

0xa42d,	// (0x00069623) popup_fixed_preview_cale_window_t3_ParamLimits

0xa42d,	// (0x00069623) popup_fixed_preview_cale_window_t3

0x0002,

0xf736,	// (0x0006e92c) popup_fixed_preview_cale_window_t_ParamLimits

0xf736,	// (0x0006e92c) popup_fixed_preview_cale_window_t

0xa442,	// (0x00069638) list_single_fp_cale_pane_ParamLimits

0xa442,	// (0x00069638) list_single_fp_cale_pane

0x13b6,	// (0x000605ac) list_single_fp_cale_pane_g1_ParamLimits

0x13b6,	// (0x000605ac) list_single_fp_cale_pane_g1

0x13c2,	// (0x000605b8) list_single_fp_cale_pane_g2_ParamLimits

0x13c2,	// (0x000605b8) list_single_fp_cale_pane_g2

0x0002,

0xf73d,	// (0x0006e933) list_single_fp_cale_pane_g_ParamLimits

0xf73d,	// (0x0006e933) list_single_fp_cale_pane_g

0x13db,	// (0x000605d1) list_single_fp_cale_pane_t1_ParamLimits

0x13db,	// (0x000605d1) list_single_fp_cale_pane_t1

0x13ed,	// (0x000605e3) list_single_fp_cale_pane_t2_ParamLimits

0x13ed,	// (0x000605e3) list_single_fp_cale_pane_t2

0x0001,

0xf744,	// (0x0006e93a) list_single_fp_cale_pane_t_ParamLimits

0xf744,	// (0x0006e93a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0431,	// (0x0005f627) main_dialer_pane

0xa452,	// (0x00069648) aid_cell_size_keypad

0x0431,	// (0x0005f627) dialer_ne_pane

0x0431,	// (0x0005f627) grid_dialer_command_1_pane

0x0431,	// (0x0005f627) grid_dialer_command_2_pane

0x0431,	// (0x0005f627) grid_dialer_keypad_pane

0xe4db,	// (0x0006d6d1) bg_popup_call_pane_cp06_ParamLimits

0xe4db,	// (0x0006d6d1) bg_popup_call_pane_cp06

0xe4db,	// (0x0006d6d1) dialer_ne_clear_pane_ParamLimits

0xe4db,	// (0x0006d6d1) dialer_ne_clear_pane

0x6699,	// (0x0006588f) dialer_ne_pane_g1

0x6550,	// (0x00065746) dialer_ne_pane_t1_ParamLimits

0x6550,	// (0x00065746) dialer_ne_pane_t1

0x15fb,	// (0x000607f1) dialer_ne_pane_t2_ParamLimits

0x15fb,	// (0x000607f1) dialer_ne_pane_t2

0xa45c,	// (0x00069652) dialer_ne_pane_t3_ParamLimits

0xa45c,	// (0x00069652) dialer_ne_pane_t3

0x0002,

0xf749,	// (0x0006e93f) dialer_ne_pane_t_ParamLimits

0xf749,	// (0x0006e93f) dialer_ne_pane_t

0xa45c,	// (0x00069652) dialer_ne_pane_t3_copy1_ParamLimits

0xa45c,	// (0x00069652) dialer_ne_pane_t3_copy1

0xa47e,	// (0x00069674) cell_dialer_keypad_pane_ParamLimits

0xa47e,	// (0x00069674) cell_dialer_keypad_pane

0xa493,	// (0x00069689) cell_dialer_command_1_pane_ParamLimits

0xa493,	// (0x00069689) cell_dialer_command_1_pane

0xa4a4,	// (0x0006969a) cell_dialer_command_2_pane_ParamLimits

0xa4a4,	// (0x0006969a) cell_dialer_command_2_pane

0x8459,	// (0x0006764f) bg_button_pane_cp02_ParamLimits

0x8459,	// (0x0006764f) bg_button_pane_cp02

0x0b8a,	// (0x0005fd80) cell_dialer_keypad_pane_g1_ParamLimits

0x0b8a,	// (0x0005fd80) cell_dialer_keypad_pane_g1

0x8459,	// (0x0006764f) bg_button_pane_cp03_ParamLimits

0x8459,	// (0x0006764f) bg_button_pane_cp03

0x0b8a,	// (0x0005fd80) cell_dialer_command_1_pane_g1_ParamLimits

0x0b8a,	// (0x0005fd80) cell_dialer_command_1_pane_g1

0x0431,	// (0x0005f627) bg_button_pane_cp04

0x6699,	// (0x0006588f) cell_dialer_command_2_pane_g1

0x0431,	// (0x0005f627) bg_button_pane_cp06

0x6699,	// (0x0006588f) dialer_ne_clear_pane_g1

0x821e,	// (0x00067414) navi_pane_g2

0x8247,	// (0x0006743d) navi_pane_g3

0x0002,

0xf365,	// (0x0006e55b) navi_pane_g

0x82c8,	// (0x000674be) navi_pane_mv_g2

0x82ef,	// (0x000674e5) navi_pane_mv_g5

0x82f7,	// (0x000674ed) navi_pane_mv_t1

0x0c30,	// (0x0005fe26) main_clock2_pane

0xa4e7,	// (0x000696dd) main_clock2_list_pane_ParamLimits

0xa4e7,	// (0x000696dd) main_clock2_list_pane

0xa50d,	// (0x00069703) main_clock2_pane_t1_ParamLimits

0xa50d,	// (0x00069703) main_clock2_pane_t1

0xa52d,	// (0x00069723) main_clock2_pane_t2_ParamLimits

0xa52d,	// (0x00069723) main_clock2_pane_t2

0x0004,

0xf755,	// (0x0006e94b) main_clock2_pane_t_ParamLimits

0xf755,	// (0x0006e94b) main_clock2_pane_t

0xa586,	// (0x0006977c) popup_clock_analogue_window_cp03_ParamLimits

0xa586,	// (0x0006977c) popup_clock_analogue_window_cp03

0xa5a4,	// (0x0006979a) popup_clock_digital_window_cp02_ParamLimits

0xa5a4,	// (0x0006979a) popup_clock_digital_window_cp02

0xa611,	// (0x00069807) main_clock2_list_single_pane_ParamLimits

0xa611,	// (0x00069807) main_clock2_list_single_pane

0x64dd,	// (0x000656d3) list_highlight_pane_cp05

0x1450,	// (0x00060646) main_clock2_list_single_pane_t1

0x6881,	// (0x00065a77) popup_toolbar_window_cp04_ParamLimits

0x0b98,	// (0x0005fd8e) camera2_autofocus_pane_g2_ParamLimits

0x0b98,	// (0x0005fd8e) camera2_autofocus_pane_g2

0x0b98,	// (0x0005fd8e) camera2_autofocus_pane_g3_ParamLimits

0x0b98,	// (0x0005fd8e) camera2_autofocus_pane_g3

0x0b98,	// (0x0005fd8e) camera2_autofocus_pane_g4_ParamLimits

0x0b98,	// (0x0005fd8e) camera2_autofocus_pane_g4

0x0b98,	// (0x0005fd8e) camera2_autofocus_pane_g5_ParamLimits

0x0b98,	// (0x0005fd8e) camera2_autofocus_pane_g5

0x0004,

0xf699,	// (0x0006e88f) camera2_autofocus_pane_g_ParamLimits

0xf699,	// (0x0006e88f) camera2_autofocus_pane_g

0x9e9f,	// (0x00069095) camera2_autofocus_pane_cp_g2

0x9ea7,	// (0x0006909d) camera2_autofocus_pane_cp_g3

0x9eaf,	// (0x000690a5) camera2_autofocus_pane_cp_g4

0x9eb7,	// (0x000690ad) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ff,	// (0x0006e8f5) camera2_autofocus_pane_cp_g

0x0431,	// (0x0005f627) popup_dialer_spcha_window

0x0431,	// (0x0005f627) bg_popup_sub_pane_cp07

0x0431,	// (0x0005f627) list_spcha_pane

0x145e,	// (0x00060654) list_single_spcha_pane_ParamLimits

0x145e,	// (0x00060654) list_single_spcha_pane

0x0431,	// (0x0005f627) list_highlight_pane_cp06

0xeb7e,	// (0x0006dd74) list_single_spcha_pane_t1

0xe65a,	// (0x0006d850) popup_call2_audio_out_window_g4_ParamLimits

0xe65a,	// (0x0006d850) popup_call2_audio_out_window_g4

0x0431,	// (0x0005f627) main_imed2_pane

0x9927,	// (0x00068b1d) popup_imed_adjust2_window

0x9938,	// (0x00068b2e) popup_imed_trans_window_ParamLimits

0x9938,	// (0x00068b2e) popup_imed_trans_window

0xee73,	// (0x0006e069) popup_blid_sat_info2_window_t1

0xee81,	// (0x0006e077) popup_blid_sat_info2_window_t2

0x000a,

0xf62e,	// (0x0006e824) popup_blid_sat_info2_window_t

0xa6bb,	// (0x000698b1) aid_size_cell_colour_35

0xa6d2,	// (0x000698c8) aid_size_cell_colour_112

0xa6e9,	// (0x000698df) aid_size_cell_effect

0x8459,	// (0x0006764f) bg_tb_trans_pane_cp02

0xf045,	// (0x0006e23b) heading_imed_pane

0xa703,	// (0x000698f9) listscroll_imed_pane

0x1470,	// (0x00060666) heading_imed_pane_g1

0x1478,	// (0x0006066e) heading_imed_pane_t1

0x1486,	// (0x0006067c) grid_imed_colour_35_pane_ParamLimits

0x1486,	// (0x0006067c) grid_imed_colour_35_pane

0xa70f,	// (0x00069905) grid_imed_effect_pane

0x1499,	// (0x0006068f) list_imed_aspect_pane

0xa71b,	// (0x00069911) scroll_pane_cp027_ParamLimits

0xa71b,	// (0x00069911) scroll_pane_cp027

0xa727,	// (0x0006991d) cell_imed_effect_pane_ParamLimits

0xa727,	// (0x0006991d) cell_imed_effect_pane

0x14a1,	// (0x00060697) cell_imed_colour_pane_ParamLimits

0x14a1,	// (0x00060697) cell_imed_colour_pane

0x14db,	// (0x000606d1) cell_imed_colour_pane_g1_ParamLimits

0x14db,	// (0x000606d1) cell_imed_colour_pane_g1

0x14ec,	// (0x000606e2) hgihlgiht_grid_pane_cp016_ParamLimits

0x14ec,	// (0x000606e2) hgihlgiht_grid_pane_cp016

0xa73d,	// (0x00069933) cell_imed_effect_pane_g1

0xa745,	// (0x0006993b) grid_highlight_pane_cp017

0x14fd,	// (0x000606f3) list_imed_single_pane_ParamLimits

0x14fd,	// (0x000606f3) list_imed_single_pane

0x0431,	// (0x0005f627) list_highlight_pane_cp07

0x1510,	// (0x00060706) list_imed_aspect_pane_comp1_t1

0xebe2,	// (0x0006ddd8) bg_tb_trans_pane_cp05

0x1530,	// (0x00060726) popup_imed_adjust2_window_g1

0x1557,	// (0x0006074d) popup_imed_adjust2_window_t1

0x156f,	// (0x00060765) slider_imed_adjust_pane

0x1583,	// (0x00060779) slider_imed_adjust_pane_g1

0x1593,	// (0x00060789) slider_imed_adjust_pane_g2

0x15a3,	// (0x00060799) slider_imed_adjust_pane_g3

0x15b4,	// (0x000607aa) slider_imed_adjust_pane_g4

0x0003,

0xf772,	// (0x0006e968) slider_imed_adjust_pane_g

0xa74e,	// (0x00069944) aid_size_cell_clipart2

0xa75a,	// (0x00069950) grid_imed_clipart_pane

0x15c5,	// (0x000607bb) scroll_pane_cp031

0xa764,	// (0x0006995a) cell_imed_clipart_pane_ParamLimits

0xa764,	// (0x0006995a) cell_imed_clipart_pane

0xa77b,	// (0x00069971) cell_imed_clipart_pane_g1

0x0431,	// (0x0005f627) grid_highlight_pane_cp014

0xa4f3,	// (0x000696e9) main_clock2_pane_g1_ParamLimits

0xa4f3,	// (0x000696e9) main_clock2_pane_g1

0xa5bc,	// (0x000697b2) aid_call2_pane_cp10

0xa5ce,	// (0x000697c4) aid_call_pane_cp10

0x8124,	// (0x0006731a) popup_clock_analogue_window_cp10_g1

0x8124,	// (0x0006731a) popup_clock_analogue_window_cp10_g2

0xa5e0,	// (0x000697d6) popup_clock_analogue_window_cp10_g3

0xa5e0,	// (0x000697d6) popup_clock_analogue_window_cp10_g4

0x8124,	// (0x0006731a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf760,	// (0x0006e956) popup_clock_analogue_window_cp10_g

0xa5f2,	// (0x000697e8) popup_clock_analogue_window_cp10_t1

0xa623,	// (0x00069819) clock_digital_number_pane_cp10_ParamLimits

0xa623,	// (0x00069819) clock_digital_number_pane_cp10

0xa63b,	// (0x00069831) clock_digital_number_pane_cp11_ParamLimits

0xa63b,	// (0x00069831) clock_digital_number_pane_cp11

0xa653,	// (0x00069849) clock_digital_number_pane_cp12_ParamLimits

0xa653,	// (0x00069849) clock_digital_number_pane_cp12

0xa66b,	// (0x00069861) clock_digital_number_pane_cp13_ParamLimits

0xa66b,	// (0x00069861) clock_digital_number_pane_cp13

0xa683,	// (0x00069879) clock_digital_separator_pane_cp10_ParamLimits

0xa683,	// (0x00069879) clock_digital_separator_pane_cp10

0xa69b,	// (0x00069891) popup_clock_digital_window_cp02_t1_ParamLimits

0xa69b,	// (0x00069891) popup_clock_digital_window_cp02_t1

0x0b08,	// (0x0005fcfe) clock_digital_number_pane_cp10_g1

0x0b08,	// (0x0005fcfe) clock_digital_number_pane_cp10_g2

0x0001,

0xf77b,	// (0x0006e971) clock_digital_number_pane_cp10_g

0x0b08,	// (0x0005fcfe) clock_digital_separator_pane_cp10_g1

0x0b08,	// (0x0005fcfe) clock_digital_separator_pane_g2_cp10

0x8321,	// (0x00067517) navi_pane_vded_g4

0x832a,	// (0x00067520) navi_pane_vded_g5

0x8333,	// (0x00067529) navi_pane_vded_t1

0x0431,	// (0x0005f627) main_vded_pane

0xa784,	// (0x0006997a) main_vded_pane_g1

0xa78c,	// (0x00069982) main_vded_pane_g2

0xa794,	// (0x0006998a) main_vded_pane_g3

0x0002,

0xf780,	// (0x0006e976) main_vded_pane_g

0xa79c,	// (0x00069992) main_vded_pane_t1

0xa7aa,	// (0x000699a0) main_vded_pane_t2

0x0001,

0xf787,	// (0x0006e97d) main_vded_pane_t

0xa7b8,	// (0x000699ae) vded_slider_pane

0xa7c0,	// (0x000699b6) vded_video_pane

0x15cd,	// (0x000607c3) vded_video_pane_g1

0xa7c8,	// (0x000699be) vded_video_pane_g2

0x6699,	// (0x0006588f) vded_video_pane_g3

0x0002,

0xf78c,	// (0x0006e982) vded_video_pane_g

0x15d7,	// (0x000607cd) vded_slider_pane_g1

0xeda0,	// (0x0006df96) vded_slider_pane_g2

0x15e0,	// (0x000607d6) vded_slider_pane_g3

0x15e9,	// (0x000607df) vded_slider_pane_g4

0x15f2,	// (0x000607e8) vded_slider_pane_g5

0x0004,

0xf793,	// (0x0006e989) vded_slider_pane_g

0xa38b,	// (0x00069581) mup3_rocker_pane_ParamLimits

0xa38b,	// (0x00069581) mup3_rocker_pane

0xa7d1,	// (0x000699c7) mup3_control_keys_pane_g1

0xa7d9,	// (0x000699cf) mup3_control_keys_pane_g2

0xa7e1,	// (0x000699d7) mup3_control_keys_pane_g3

0xa7e9,	// (0x000699df) mup3_control_keys_pane_g4

0x0003,

0xf79e,	// (0x0006e994) mup3_control_keys_pane_g

0x5a9f,	// (0x00064c95) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5a9f,	// (0x00064c95) popup_toolbar2_fixed_window_cp01

0xa3a3,	// (0x00069599) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa3a3,	// (0x00069599) popup_toolbar2_fixed_window_cp02

0x9147,	// (0x0006833d) popup_call2_audio_second_window_t4_ParamLimits

0x9147,	// (0x0006833d) popup_call2_audio_second_window_t4

0xe51f,	// (0x0006d715) popup_call2_audio_first_window_t6_ParamLimits

0xe51f,	// (0x0006d715) popup_call2_audio_first_window_t6

0xe75d,	// (0x0006d953) popup_call2_audio_out_window_t6_ParamLimits

0xe75d,	// (0x0006d953) popup_call2_audio_out_window_t6

0x0431,	// (0x0005f627) main_vitu_pane

0x0ba6,	// (0x0005fd9c) aid_size_cell_itu_ParamLimits

0x0ba6,	// (0x0005fd9c) aid_size_cell_itu

0x0ba6,	// (0x0005fd9c) bg_popup_window_pane_cp08_ParamLimits

0x0ba6,	// (0x0005fd9c) bg_popup_window_pane_cp08

0x0ba6,	// (0x0005fd9c) field_vitu_entry_pane_ParamLimits

0x0ba6,	// (0x0005fd9c) field_vitu_entry_pane

0x0ba6,	// (0x0005fd9c) grid_vitu_function_pane_ParamLimits

0x0ba6,	// (0x0005fd9c) grid_vitu_function_pane

0x0ba6,	// (0x0005fd9c) grid_vitu_itu_pane_ParamLimits

0x0ba6,	// (0x0005fd9c) grid_vitu_itu_pane

0xa7f9,	// (0x000699ef) cell_vitu_itu_pane_ParamLimits

0xa7f9,	// (0x000699ef) cell_vitu_itu_pane

0x0ba6,	// (0x0005fd9c) cell_vitu_function_pane_ParamLimits

0x0ba6,	// (0x0005fd9c) cell_vitu_function_pane

0x8459,	// (0x0006764f) bg_popup_sub_pane_cp08_ParamLimits

0x8459,	// (0x0006764f) bg_popup_sub_pane_cp08

0x8445,	// (0x0006763b) field_vitu_entry_pane_t1_ParamLimits

0x8445,	// (0x0006763b) field_vitu_entry_pane_t1

0x15fb,	// (0x000607f1) field_vitu_entry_pane_t2_ParamLimits

0x15fb,	// (0x000607f1) field_vitu_entry_pane_t2

0x0001,

0xf7ac,	// (0x0006e9a2) field_vitu_entry_pane_t_ParamLimits

0xf7ac,	// (0x0006e9a2) field_vitu_entry_pane_t

0xe4db,	// (0x0006d6d1) bg_button_pane_cp05_ParamLimits

0xe4db,	// (0x0006d6d1) bg_button_pane_cp05

0x1618,	// (0x0006080e) cell_vitu_itu_pane_g1

0xecd7,	// (0x0006decd) cell_vitu_itu_pane_t1_ParamLimits

0xecd7,	// (0x0006decd) cell_vitu_itu_pane_t1

0xecd7,	// (0x0006decd) cell_vitu_itu_pane_t2_ParamLimits

0xecd7,	// (0x0006decd) cell_vitu_itu_pane_t2

0x0002,

0xf7b1,	// (0x0006e9a7) cell_vitu_itu_pane_t_ParamLimits

0xf7b1,	// (0x0006e9a7) cell_vitu_itu_pane_t

0x0431,	// (0x0005f627) bg_button_pane_cp07

0x6699,	// (0x0006588f) cell_vitu_function_pane_g1

0x5c0e,	// (0x00064e04) main_calc_pane_g1

0x592b,	// (0x00064b21) aid_visual_content_pane

0x0431,	// (0x0005f627) main_vradio_pane

0x0b98,	// (0x0005fd8e) main_vradio_pane_g1_ParamLimits

0x0b98,	// (0x0005fd8e) main_vradio_pane_g1

0x0b98,	// (0x0005fd8e) main_vradio_pane_g2_ParamLimits

0x0b98,	// (0x0005fd8e) main_vradio_pane_g2

0x0001,

0xf7b8,	// (0x0006e9ae) main_vradio_pane_g_ParamLimits

0xf7b8,	// (0x0006e9ae) main_vradio_pane_g

0x6550,	// (0x00065746) main_vradio_pane_t1_ParamLimits

0x6550,	// (0x00065746) main_vradio_pane_t1

0x6550,	// (0x00065746) main_vradio_pane_t2_ParamLimits

0x6550,	// (0x00065746) main_vradio_pane_t2

0x6550,	// (0x00065746) main_vradio_pane_t3_ParamLimits

0x6550,	// (0x00065746) main_vradio_pane_t3

0x0002,

0xf7bd,	// (0x0006e9b3) main_vradio_pane_t_ParamLimits

0xf7bd,	// (0x0006e9b3) main_vradio_pane_t

0x0ba6,	// (0x0005fd9c) vradio_rocker_control_pane_ParamLimits

0x0ba6,	// (0x0005fd9c) vradio_rocker_control_pane

0x0ba6,	// (0x0005fd9c) vradio_station_info_pane_ParamLimits

0x0ba6,	// (0x0005fd9c) vradio_station_info_pane

0x8459,	// (0x0006764f) vradio_frequency_info_pane_ParamLimits

0x8459,	// (0x0006764f) vradio_frequency_info_pane

0x6699,	// (0x0006588f) vradio_station_info_pane_g1

0xecd7,	// (0x0006decd) vradio_station_info_pane_t1_ParamLimits

0xecd7,	// (0x0006decd) vradio_station_info_pane_t1

0x6550,	// (0x00065746) vradio_station_info_pane_t2_ParamLimits

0x6550,	// (0x00065746) vradio_station_info_pane_t2

0x0001,

0xf7c4,	// (0x0006e9ba) vradio_station_info_pane_t_ParamLimits

0xf7c4,	// (0x0006e9ba) vradio_station_info_pane_t

0x0431,	// (0x0005f627) vradio_tuning_pane

0xa807,	// (0x000699fd) vradio_rocker_control_pane_g1

0x1634,	// (0x0006082a) vradio_rocker_control_pane_g2

0xa80f,	// (0x00069a05) vradio_rocker_control_pane_g3

0xa817,	// (0x00069a0d) vradio_rocker_control_pane_g4

0xa81f,	// (0x00069a15) vradio_rocker_control_pane_g5

0x0004,

0xf7c9,	// (0x0006e9bf) vradio_rocker_control_pane_g

0x6699,	// (0x0006588f) vradio_frequency_info_pane_g1

0x8445,	// (0x0006763b) vradio_frequency_info_pane_t1_ParamLimits

0x8445,	// (0x0006763b) vradio_frequency_info_pane_t1

0xa827,	// (0x00069a1d) vradio_tuning_pane_g1

0xa830,	// (0x00069a26) vradio_tuning_pane_t1

0x596a,	// (0x00064b60) area_side_right_pane_ParamLimits

0x596a,	// (0x00064b60) area_side_right_pane

0xeb9d,	// (0x0006dd93) status_small_pane_g1

0xeba5,	// (0x0006dd9b) status_small_pane_g2

0xebae,	// (0x0006dda4) status_small_pane_g3

0xebb7,	// (0x0006ddad) status_small_pane_g4

0x0003,

0xf590,	// (0x0006e786) status_small_pane_g

0xebc0,	// (0x0006ddb6) status_small_pane_t1

0x0431,	// (0x0005f627) main_video3_pane

0x163c,	// (0x00060832) cams_zoom_vslider_pane

0x1644,	// (0x0006083a) image3_wide_pane_ParamLimits

0x1644,	// (0x0006083a) image3_wide_pane

0x165e,	// (0x00060854) image3_wide_small_pane

0x1668,	// (0x0006085e) main_video3_pane_g1_ParamLimits

0x1668,	// (0x0006085e) main_video3_pane_g1

0x1684,	// (0x0006087a) main_video3_pane_g2_ParamLimits

0x1684,	// (0x0006087a) main_video3_pane_g2

0x0001,

0xf7d4,	// (0x0006e9ca) main_video3_pane_g_ParamLimits

0xf7d4,	// (0x0006e9ca) main_video3_pane_g

0x16a0,	// (0x00060896) main_video3_pane_t1_ParamLimits

0x16a0,	// (0x00060896) main_video3_pane_t1

0x16cb,	// (0x000608c1) main_video3_pane_t2_ParamLimits

0x16cb,	// (0x000608c1) main_video3_pane_t2

0x16f6,	// (0x000608ec) main_video3_pane_t3_ParamLimits

0x16f6,	// (0x000608ec) main_video3_pane_t3

0x0002,

0xf7d9,	// (0x0006e9cf) main_video3_pane_t_ParamLimits

0xf7d9,	// (0x0006e9cf) main_video3_pane_t

0x1721,	// (0x00060917) cams_zoom_vslider_pane_g1

0x172a,	// (0x00060920) cams_zoom_vslider_pane_g2

0x0001,

0xf7e0,	// (0x0006e9d6) cams_zoom_vslider_pane_g

0x1732,	// (0x00060928) small_slider_vertical_pane

0x6699,	// (0x0006588f) small_slider_vertical_pane_g1

0x6699,	// (0x0006588f) small_slider_vertical_pane_g2

0x173a,	// (0x00060930) small_slider_vertical_pane_g3

0x0002,

0xf7e5,	// (0x0006e9db) small_slider_vertical_pane_g

0x0431,	// (0x0005f627) main_hwr_training_pane

0x1743,	// (0x00060939) hwr_training_instruct_pane_ParamLimits

0x1743,	// (0x00060939) hwr_training_instruct_pane

0xa83f,	// (0x00069a35) hwr_training_navi_pane_ParamLimits

0xa83f,	// (0x00069a35) hwr_training_navi_pane

0xa853,	// (0x00069a49) hwr_training_write_pane_ParamLimits

0xa853,	// (0x00069a49) hwr_training_write_pane

0x0431,	// (0x0005f627) bg_frame_shadow_pane

0x1772,	// (0x00060968) hwr_training_write_pane_g1

0x177a,	// (0x00060970) hwr_training_write_pane_g2

0x1782,	// (0x00060978) hwr_training_write_pane_g3

0x178a,	// (0x00060980) hwr_training_write_pane_g4

0x1792,	// (0x00060988) hwr_training_write_pane_g5

0x179a,	// (0x00060990) hwr_training_write_pane_g6

0x17a2,	// (0x00060998) hwr_training_write_pane_g7

0x0006,

0xf7ec,	// (0x0006e9e2) hwr_training_write_pane_g

0xa881,	// (0x00069a77) hwr_training_navi_pane_g1_ParamLimits

0xa881,	// (0x00069a77) hwr_training_navi_pane_g1

0xa893,	// (0x00069a89) hwr_training_navi_pane_g2_ParamLimits

0xa893,	// (0x00069a89) hwr_training_navi_pane_g2

0xa8a5,	// (0x00069a9b) hwr_training_navi_pane_g3_ParamLimits

0xa8a5,	// (0x00069a9b) hwr_training_navi_pane_g3

0xa8b5,	// (0x00069aab) hwr_training_navi_pane_g4_ParamLimits

0xa8b5,	// (0x00069aab) hwr_training_navi_pane_g4

0x0004,

0xf7fb,	// (0x0006e9f1) hwr_training_navi_pane_g_ParamLimits

0xf7fb,	// (0x0006e9f1) hwr_training_navi_pane_g

0xa8cf,	// (0x00069ac5) hwr_training_navi_pane_t1

0xa8dd,	// (0x00069ad3) list_single_hwr_training_instruct_pane_ParamLimits

0xa8dd,	// (0x00069ad3) list_single_hwr_training_instruct_pane

0x17f9,	// (0x000609ef) list_single_hwr_training_instruct_pane_t1

0xef6e,	// (0x0006e164) bg_frame_shadow_pane_g1

0x1808,	// (0x000609fe) bg_frame_shadow_pane_g2

0x1810,	// (0x00060a06) bg_frame_shadow_pane_g3

0x1818,	// (0x00060a0e) bg_frame_shadow_pane_g4

0x1820,	// (0x00060a16) bg_frame_shadow_pane_g5

0x1828,	// (0x00060a1e) bg_frame_shadow_pane_g6

0x1830,	// (0x00060a26) bg_frame_shadow_pane_g7

0x0d49,	// (0x0005ff3f) bg_frame_shadow_pane_g8

0x0007,

0xf806,	// (0x0006e9fc) bg_frame_shadow_pane_g

0x0431,	// (0x0005f627) main_video_tele_dialer_pane

0xa8f5,	// (0x00069aeb) aid_size_cell_video_keypad_ParamLimits

0xa8f5,	// (0x00069aeb) aid_size_cell_video_keypad

0xa905,	// (0x00069afb) grid_video_dialer_keypad_pane_ParamLimits

0xa905,	// (0x00069afb) grid_video_dialer_keypad_pane

0xa935,	// (0x00069b2b) video_down_pane_cp_ParamLimits

0xa935,	// (0x00069b2b) video_down_pane_cp

0xa95d,	// (0x00069b53) cell_video_dialer_keypad_pane_ParamLimits

0xa95d,	// (0x00069b53) cell_video_dialer_keypad_pane

0x1838,	// (0x00060a2e) bg_button_pane_cp08_ParamLimits

0x1838,	// (0x00060a2e) bg_button_pane_cp08

0xa972,	// (0x00069b68) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa972,	// (0x00069b68) cell_video_dialer_keypad_pane_g1

0xa37f,	// (0x00069575) mup3_rocker2_pane_ParamLimits

0xa37f,	// (0x00069575) mup3_rocker2_pane

0x6699,	// (0x0006588f) mup3_rocker2_pane_g1

0x98a9,	// (0x00068a9f) main_dialer2_pane

0x0431,	// (0x0005f627) main_mp4_pane

0xa9c5,	// (0x00069bbb) main_mp4_pane_g1_ParamLimits

0xa9c5,	// (0x00069bbb) main_mp4_pane_g1

0xa9d3,	// (0x00069bc9) main_mp4_pane_g2_ParamLimits

0xa9d3,	// (0x00069bc9) main_mp4_pane_g2

0xa9e1,	// (0x00069bd7) main_mp4_pane_g3_ParamLimits

0xa9e1,	// (0x00069bd7) main_mp4_pane_g3

0xaa16,	// (0x00069c0c) main_mp4_pane_g4_ParamLimits

0xaa16,	// (0x00069c0c) main_mp4_pane_g4

0xaa44,	// (0x00069c3a) main_mp4_pane_g5_ParamLimits

0xaa44,	// (0x00069c3a) main_mp4_pane_g5

0x0007,

0xf826,	// (0x0006ea1c) main_mp4_pane_g_ParamLimits

0xf826,	// (0x0006ea1c) main_mp4_pane_g

0xaab8,	// (0x00069cae) main_mp4_pane_t1_ParamLimits

0xaab8,	// (0x00069cae) main_mp4_pane_t1

0xab10,	// (0x00069d06) main_mp4_pane_t2_ParamLimits

0xab10,	// (0x00069d06) main_mp4_pane_t2

0x19ba,	// (0x00060bb0) main_mp4_pane_t3_ParamLimits

0x19ba,	// (0x00060bb0) main_mp4_pane_t3

0xab62,	// (0x00069d58) main_mp4_pane_t4_ParamLimits

0xab62,	// (0x00069d58) main_mp4_pane_t4

0x0003,

0xf837,	// (0x0006ea2d) main_mp4_pane_t_ParamLimits

0xf837,	// (0x0006ea2d) main_mp4_pane_t

0xaba2,	// (0x00069d98) mp4_progress_pane_ParamLimits

0xaba2,	// (0x00069d98) mp4_progress_pane

0xabe6,	// (0x00069ddc) mp4_rocker_pane_ParamLimits

0xabe6,	// (0x00069ddc) mp4_rocker_pane

0x1a8a,	// (0x00060c80) mp4_progress_pane_t1

0x1aa1,	// (0x00060c97) mp4_progress_pane_t2

0x0001,

0xf840,	// (0x0006ea36) mp4_progress_pane_t

0x1ab8,	// (0x00060cae) mup_progress_pane_cp04

0x6699,	// (0x0006588f) mp4_rocker_pane_g1

0xac04,	// (0x00069dfa) aid_cell_size_keypad2_ParamLimits

0xac04,	// (0x00069dfa) aid_cell_size_keypad2

0xac14,	// (0x00069e0a) dialer2_ne_pane_ParamLimits

0xac14,	// (0x00069e0a) dialer2_ne_pane

0xac20,	// (0x00069e16) grid_dialer2_keypad_pane_ParamLimits

0xac20,	// (0x00069e16) grid_dialer2_keypad_pane

0xf051,	// (0x0006e247) bg_popup_call_pane_cp07_ParamLimits

0xf051,	// (0x0006e247) bg_popup_call_pane_cp07

0xac2c,	// (0x00069e22) dialer2_ne_pane_t1_ParamLimits

0xac2c,	// (0x00069e22) dialer2_ne_pane_t1

0xac51,	// (0x00069e47) cell_dialer2_keypad_pane_ParamLimits

0xac51,	// (0x00069e47) cell_dialer2_keypad_pane

0x1ad6,	// (0x00060ccc) bg_button_pane_pane_cp04_ParamLimits

0x1ad6,	// (0x00060ccc) bg_button_pane_pane_cp04

0xac66,	// (0x00069e5c) cell_dialer2_keypad_pane_g1_ParamLimits

0xac66,	// (0x00069e5c) cell_dialer2_keypad_pane_g1

0x674b,	// (0x00065941) aid_placing_vt_set_content_ParamLimits

0x674b,	// (0x00065941) aid_placing_vt_set_content

0x6771,	// (0x00065967) aid_placing_vt_set_title_ParamLimits

0x6771,	// (0x00065967) aid_placing_vt_set_title

0x0431,	// (0x0005f627) main_image3_pane

0xacda,	// (0x00069ed0) area_side_right_pane_cp01_ParamLimits

0xacda,	// (0x00069ed0) area_side_right_pane_cp01

0x0bb4,	// (0x0005fdaa) main_image3_pane_g1_ParamLimits

0x0bb4,	// (0x0005fdaa) main_image3_pane_g1

0xad07,	// (0x00069efd) main_image3_pane_g2_ParamLimits

0xad07,	// (0x00069efd) main_image3_pane_g2

0xad1e,	// (0x00069f14) main_image3_pane_g3_ParamLimits

0xad1e,	// (0x00069f14) main_image3_pane_g3

0xad35,	// (0x00069f2b) main_image3_pane_g4_ParamLimits

0xad35,	// (0x00069f2b) main_image3_pane_g4

0x0003,

0xf84f,	// (0x0006ea45) main_image3_pane_g_ParamLimits

0xf84f,	// (0x0006ea45) main_image3_pane_g

0xad4c,	// (0x00069f42) main_image3_pane_t1_ParamLimits

0xad4c,	// (0x00069f42) main_image3_pane_t1

0xad71,	// (0x00069f67) main_image3_pane_t2_ParamLimits

0xad71,	// (0x00069f67) main_image3_pane_t2

0xad90,	// (0x00069f86) main_image3_pane_t3_ParamLimits

0xad90,	// (0x00069f86) main_image3_pane_t3

0x0003,

0xf858,	// (0x0006ea4e) main_image3_pane_t_ParamLimits

0xf858,	// (0x0006ea4e) main_image3_pane_t

0x0ba6,	// (0x0005fd9c) grid_sctrl_middle_pane_cp01_ParamLimits

0x0ba6,	// (0x0005fd9c) grid_sctrl_middle_pane_cp01

0xadeb,	// (0x00069fe1) cell_sctrl_middle_pane_cp01_ParamLimits

0xadeb,	// (0x00069fe1) cell_sctrl_middle_pane_cp01

0xadfc,	// (0x00069ff2) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xadfc,	// (0x00069ff2) cell_sctrl_middle_pane_cp01_g1

0x0431,	// (0x0005f627) main_call4_pane

0xae09,	// (0x00069fff) aid_size_button_call4_ParamLimits

0xae09,	// (0x00069fff) aid_size_button_call4

0xae33,	// (0x0006a029) call4_windows_pane_ParamLimits

0xae33,	// (0x0006a029) call4_windows_pane

0xae47,	// (0x0006a03d) grid_call4_button_pane_ParamLimits

0xae47,	// (0x0006a03d) grid_call4_button_pane

0x1afa,	// (0x00060cf0) call4_windows_conf_pane

0xae69,	// (0x0006a05f) popup_call4_audio_first_window_ParamLimits

0xae69,	// (0x0006a05f) popup_call4_audio_first_window

0x1b2d,	// (0x00060d23) popup_call4_audio_second_window_ParamLimits

0x1b2d,	// (0x00060d23) popup_call4_audio_second_window

0x1b3f,	// (0x00060d35) popup_call4_audio_wait_window_ParamLimits

0x1b3f,	// (0x00060d35) popup_call4_audio_wait_window

0xae89,	// (0x0006a07f) cell_call4_button_pane_ParamLimits

0xae89,	// (0x0006a07f) cell_call4_button_pane

0x0ce9,	// (0x0005fedf) bg_button_pane_cp09_ParamLimits

0x0ce9,	// (0x0005fedf) bg_button_pane_cp09

0xaeac,	// (0x0006a0a2) cell_call4_button_pane_g1_ParamLimits

0xaeac,	// (0x0006a0a2) cell_call4_button_pane_g1

0xaeb9,	// (0x0006a0af) cell_call4_button_pane_t1_ParamLimits

0xaeb9,	// (0x0006a0af) cell_call4_button_pane_t1

0x1b53,	// (0x00060d49) popup_call4_audio_conf_window_ParamLimits

0x1b53,	// (0x00060d49) popup_call4_audio_conf_window

0xa3b0,	// (0x000695a6) mup3_progress_pane_t1_ParamLimits

0xa3ce,	// (0x000695c4) mup3_progress_pane_t2_ParamLimits

0x1349,	// (0x0006053f) mup3_progress_pane_t3_ParamLimits

0xf728,	// (0x0006e91e) mup3_progress_pane_t_ParamLimits

0x1366,	// (0x0006055c) mup_progress_pane_cp03_ParamLimits

0xa7f1,	// (0x000699e7) mup3_control_keys_pane_g4_copy1

0xabd0,	// (0x00069dc6) mp4_rocker2_pane_ParamLimits

0xabd0,	// (0x00069dc6) mp4_rocker2_pane

0x1b6f,	// (0x00060d65) mp4_rocker2_pane_g1

0x1b67,	// (0x00060d5d) mp4_rocker2_pane_g2

0xaefd,	// (0x0006a0f3) mp4_rocker2_pane_g3

0xaf05,	// (0x0006a0fb) mp4_rocker2_pane_g4

0xaf0d,	// (0x0006a103) mp4_rocker2_pane_g5

0x0004,

0xf861,	// (0x0006ea57) mp4_rocker2_pane_g

0x0431,	// (0x0005f627) main_camera4_pane

0x0431,	// (0x0005f627) main_video4_pane

0xa911,	// (0x00069b07) main_video_tele_dialer_pane_t1_ParamLimits

0xa911,	// (0x00069b07) main_video_tele_dialer_pane_t1

0xa923,	// (0x00069b19) main_video_tele_dialer_pane_t2_ParamLimits

0xa923,	// (0x00069b19) main_video_tele_dialer_pane_t2

0x0001,

0xf817,	// (0x0006ea0d) main_video_tele_dialer_pane_t_ParamLimits

0xf817,	// (0x0006ea0d) main_video_tele_dialer_pane_t

0xaf2b,	// (0x0006a121) cam4_autofocus_pane_ParamLimits

0xaf2b,	// (0x0006a121) cam4_autofocus_pane

0xaf41,	// (0x0006a137) cam4_image_uncrop_pane_ParamLimits

0xaf41,	// (0x0006a137) cam4_image_uncrop_pane

0xaf56,	// (0x0006a14c) cam4_indicators_pane_ParamLimits

0xaf56,	// (0x0006a14c) cam4_indicators_pane

0xaf70,	// (0x0006a166) main_camera4_pane_g1_ParamLimits

0xaf70,	// (0x0006a166) main_camera4_pane_g1

0xaf7c,	// (0x0006a172) main_camera4_pane_g2_ParamLimits

0xaf7c,	// (0x0006a172) main_camera4_pane_g2

0xaf7c,	// (0x0006a172) main_camera4_pane_g3_ParamLimits

0xaf7c,	// (0x0006a172) main_camera4_pane_g3

0xaf88,	// (0x0006a17e) main_camera4_pane_g4_ParamLimits

0xaf88,	// (0x0006a17e) main_camera4_pane_g4

0xaf94,	// (0x0006a18a) main_camera4_pane_g5_ParamLimits

0xaf94,	// (0x0006a18a) main_camera4_pane_g5

0x0005,

0xf86c,	// (0x0006ea62) main_camera4_pane_g_ParamLimits

0xf86c,	// (0x0006ea62) main_camera4_pane_g

0xafae,	// (0x0006a1a4) main_camera4_pane_t1_ParamLimits

0xafae,	// (0x0006a1a4) main_camera4_pane_t1

0x0b8a,	// (0x0005fd80) bg_tb_trans_pane_cp06

0xaffe,	// (0x0006a1f4) cam4_indicators_pane_g1

0xb00e,	// (0x0006a204) cam4_indicators_pane_g2

0x0002,

0xf887,	// (0x0006ea7d) cam4_indicators_pane_g

0xb02e,	// (0x0006a224) cam4_indicators_pane_t1

0xb056,	// (0x0006a24c) main_video4_pane_g1_ParamLimits

0xb056,	// (0x0006a24c) main_video4_pane_g1

0xaf7c,	// (0x0006a172) main_video4_pane_g2_ParamLimits

0xaf7c,	// (0x0006a172) main_video4_pane_g2

0xaf7c,	// (0x0006a172) main_video4_pane_g3_ParamLimits

0xaf7c,	// (0x0006a172) main_video4_pane_g3

0xaf88,	// (0x0006a17e) main_video4_pane_g4_ParamLimits

0xaf88,	// (0x0006a17e) main_video4_pane_g4

0x0004,

0xf88e,	// (0x0006ea84) main_video4_pane_g_ParamLimits

0xf88e,	// (0x0006ea84) main_video4_pane_g

0xb06a,	// (0x0006a260) vid4_indicators_pane_ParamLimits

0xb06a,	// (0x0006a260) vid4_indicators_pane

0xb088,	// (0x0006a27e) video4_image_uncrop_cif_pane_ParamLimits

0xb088,	// (0x0006a27e) video4_image_uncrop_cif_pane

0xb095,	// (0x0006a28b) video4_image_uncrop_nhd_pane_ParamLimits

0xb095,	// (0x0006a28b) video4_image_uncrop_nhd_pane

0xaf41,	// (0x0006a137) video4_image_uncrop_vga_pane_ParamLimits

0xaf41,	// (0x0006a137) video4_image_uncrop_vga_pane

0x8459,	// (0x0006764f) bg_tb_trans_pane_cp07

0xaffe,	// (0x0006a1f4) vid4_indicators_pane_g1

0xb0a2,	// (0x0006a298) vid4_indicators_pane_g2

0xb0b2,	// (0x0006a2a8) vid4_indicators_pane_g3

0x0004,

0xf899,	// (0x0006ea8f) vid4_indicators_pane_g

0xb0df,	// (0x0006a2d5) vid4_indicators_pane_t1

0xb0f9,	// (0x0006a2ef) cam4_autofocus_pane_g1

0xb101,	// (0x0006a2f7) cam4_autofocus_pane_g2

0xb109,	// (0x0006a2ff) cam4_autofocus_pane_g3

0x0002,

0xf8a4,	// (0x0006ea9a) cam4_autofocus_pane_g

0xb111,	// (0x0006a307) cam4_autofocus_pane_g3_copy1

0xa941,	// (0x00069b37) video_down_pane_cp_t1

0xa94f,	// (0x00069b45) video_down_pane_cp_t2

0x0001,

0xf81c,	// (0x0006ea12) video_down_pane_cp_t

0x0ba6,	// (0x0005fd9c) popup_vitu2_window_ParamLimits

0x0ba6,	// (0x0005fd9c) popup_vitu2_window

0xb119,	// (0x0006a30f) aid_size_cell2_itu2_ParamLimits

0xb119,	// (0x0006a30f) aid_size_cell2_itu2

0xb13b,	// (0x0006a331) aid_size_cell_itu2_ParamLimits

0xb13b,	// (0x0006a331) aid_size_cell_itu2

0xf051,	// (0x0006e247) bg_popup_window_pane_cp09_ParamLimits

0xf051,	// (0x0006e247) bg_popup_window_pane_cp09

0xb179,	// (0x0006a36f) field_vitu2_entry_pane_ParamLimits

0xb179,	// (0x0006a36f) field_vitu2_entry_pane

0xb18f,	// (0x0006a385) grid_vitu2_function_pane_ParamLimits

0xb18f,	// (0x0006a385) grid_vitu2_function_pane

0xb1c1,	// (0x0006a3b7) grid_vitu2_itu_pane_ParamLimits

0xb1c1,	// (0x0006a3b7) grid_vitu2_itu_pane

0xb21d,	// (0x0006a413) cell_vitu2_itu_pane_ParamLimits

0xb21d,	// (0x0006a413) cell_vitu2_itu_pane

0xb235,	// (0x0006a42b) cell_vitu2_function_pane_ParamLimits

0xb235,	// (0x0006a42b) cell_vitu2_function_pane

0x1b89,	// (0x00060d7f) bg_popup_call_pane_cp08_ParamLimits

0x1b89,	// (0x00060d7f) bg_popup_call_pane_cp08

0x1ba0,	// (0x00060d96) field_vitu2_entry_pane_g1

0x1bac,	// (0x00060da2) field_vitu2_entry_pane_g2

0x0002,

0xf8ab,	// (0x0006eaa1) field_vitu2_entry_pane_g

0x4dc9,	// (0x00063fbf) field_vitu2_entry_pane_t1_ParamLimits

0x4dc9,	// (0x00063fbf) field_vitu2_entry_pane_t1

0x4df8,	// (0x00063fee) field_vitu2_entry_pane_t2_ParamLimits

0x4df8,	// (0x00063fee) field_vitu2_entry_pane_t2

0x0001,

0xf8b2,	// (0x0006eaa8) field_vitu2_entry_pane_t_ParamLimits

0xf8b2,	// (0x0006eaa8) field_vitu2_entry_pane_t

0xb274,	// (0x0006a46a) bg_button_pane_cp010_ParamLimits

0xb274,	// (0x0006a46a) bg_button_pane_cp010

0xb282,	// (0x0006a478) cell_vitu2_itu_pane_g1

0xb2a8,	// (0x0006a49e) cell_vitu2_itu_pane_t1_ParamLimits

0xb2a8,	// (0x0006a49e) cell_vitu2_itu_pane_t1

0x4e15,	// (0x0006400b) cell_vitu2_itu_pane_t2_ParamLimits

0x4e15,	// (0x0006400b) cell_vitu2_itu_pane_t2

0x0002,

0xf8bc,	// (0x0006eab2) cell_vitu2_itu_pane_t_ParamLimits

0xf8bc,	// (0x0006eab2) cell_vitu2_itu_pane_t

0x8459,	// (0x0006764f) bg_button_pane_cp011

0xb2f4,	// (0x0006a4ea) cell_vitu2_function_pane_g1

0x0431,	// (0x0005f627) main_myfav_hc_pane

0xadd0,	// (0x00069fc6) popup_image3_note_pane_ParamLimits

0xadd0,	// (0x00069fc6) popup_image3_note_pane

0xaddc,	// (0x00069fd2) popup_image3_tool_bar_pane_ParamLimits

0xaddc,	// (0x00069fd2) popup_image3_tool_bar_pane

0x4e8b,	// (0x00064081) cell_vitu2_itu_pane_t3_ParamLimits

0x4e8b,	// (0x00064081) cell_vitu2_itu_pane_t3

0x0431,	// (0x0005f627) bg_popup_trans_pane

0x1bdd,	// (0x00060dd3) grid_image3_tool_bar_pane

0x1be7,	// (0x00060ddd) bg_popup_trans_pane_g1

0x6ceb,	// (0x00065ee1) bg_popup_trans_pane_g2

0x1bef,	// (0x00060de5) bg_popup_trans_pane_g3

0x1bf7,	// (0x00060ded) bg_popup_trans_pane_g4

0x1bff,	// (0x00060df5) bg_popup_trans_pane_g5

0x1c07,	// (0x00060dfd) bg_popup_trans_pane_g6

0x1c0f,	// (0x00060e05) bg_popup_trans_pane_g7

0x1c17,	// (0x00060e0d) bg_popup_trans_pane_g8

0x6ccb,	// (0x00065ec1) bg_popup_trans_pane_g9

0x0008,

0xf8c3,	// (0x0006eab9) bg_popup_trans_pane_g

0x1c1f,	// (0x00060e15) cell_image3_tool_bar_pane_ParamLimits

0x1c1f,	// (0x00060e15) cell_image3_tool_bar_pane

0x6699,	// (0x0006588f) cell_image3_tool_bar_pane_g1

0x0431,	// (0x0005f627) bg_popup_trans_pane_cp1

0x1c33,	// (0x00060e29) popup_image3_note_pane_t1

0x1c41,	// (0x00060e37) popup_image3_note_pane_t2

0x1c4f,	// (0x00060e45) popup_image3_note_pane_t3

0x0002,

0xf8d6,	// (0x0006eacc) popup_image3_note_pane_t

0x1c5d,	// (0x00060e53) popup_image3_note_pane_t3_copy1

0xb308,	// (0x0006a4fe) bg_myfav_hc_instruction_pane_ParamLimits

0xb308,	// (0x0006a4fe) bg_myfav_hc_instruction_pane

0xb31a,	// (0x0006a510) cell_myfav_contact_pane_ParamLimits

0xb31a,	// (0x0006a510) cell_myfav_contact_pane

0xb334,	// (0x0006a52a) cell_myfav_contact_pane_cp1_ParamLimits

0xb334,	// (0x0006a52a) cell_myfav_contact_pane_cp1

0xb34a,	// (0x0006a540) cell_myfav_contact_pane_cp2_ParamLimits

0xb34a,	// (0x0006a540) cell_myfav_contact_pane_cp2

0xb360,	// (0x0006a556) cell_myfav_contact_pane_cp3_ParamLimits

0xb360,	// (0x0006a556) cell_myfav_contact_pane_cp3

0xb375,	// (0x0006a56b) cell_myfav_contact_pane_cp4_ParamLimits

0xb375,	// (0x0006a56b) cell_myfav_contact_pane_cp4

0xb389,	// (0x0006a57f) cell_myfav_contact_pane_cp5_ParamLimits

0xb389,	// (0x0006a57f) cell_myfav_contact_pane_cp5

0xb39d,	// (0x0006a593) cell_myfav_contact_pane_cp6_ParamLimits

0xb39d,	// (0x0006a593) cell_myfav_contact_pane_cp6

0xb3b1,	// (0x0006a5a7) cell_myfav_contact_pane_cp7_ParamLimits

0xb3b1,	// (0x0006a5a7) cell_myfav_contact_pane_cp7

0x1c6b,	// (0x00060e61) listscroll_gen_pane_cp05

0xb3c9,	// (0x0006a5bf) main_myfav_hc_pane_g1_ParamLimits

0xb3c9,	// (0x0006a5bf) main_myfav_hc_pane_g1

0xb3df,	// (0x0006a5d5) main_myfav_hc_pane_g2_ParamLimits

0xb3df,	// (0x0006a5d5) main_myfav_hc_pane_g2

0x0002,

0xf8dd,	// (0x0006ead3) main_myfav_hc_pane_g_ParamLimits

0xf8dd,	// (0x0006ead3) main_myfav_hc_pane_g

0xb409,	// (0x0006a5ff) main_myfav_hc_pane_t1_ParamLimits

0xb409,	// (0x0006a5ff) main_myfav_hc_pane_t1

0x1c74,	// (0x00060e6a) main_myfav_hc_pane_t2_ParamLimits

0x1c74,	// (0x00060e6a) main_myfav_hc_pane_t2

0x1c86,	// (0x00060e7c) main_myfav_hc_pane_t3_ParamLimits

0x1c86,	// (0x00060e7c) main_myfav_hc_pane_t3

0xb41e,	// (0x0006a614) main_myfav_hc_pane_t4_ParamLimits

0xb41e,	// (0x0006a614) main_myfav_hc_pane_t4

0x0004,

0xf8e4,	// (0x0006eada) main_myfav_hc_pane_t_ParamLimits

0xf8e4,	// (0x0006eada) main_myfav_hc_pane_t

0x6699,	// (0x0006588f) bg_myfav_hc_instruction_pane_g1

0x1c98,	// (0x00060e8e) cell_myfav_contact_pane_g1_ParamLimits

0x1c98,	// (0x00060e8e) cell_myfav_contact_pane_g1

0x1c98,	// (0x00060e8e) cell_myfav_contact_pane_g2_ParamLimits

0x1c98,	// (0x00060e8e) cell_myfav_contact_pane_g2

0x1ca4,	// (0x00060e9a) cell_myfav_contact_pane_g3_ParamLimits

0x1ca4,	// (0x00060e9a) cell_myfav_contact_pane_g3

0x0b98,	// (0x0005fd8e) cell_myfav_contact_pane_g4_ParamLimits

0x0b98,	// (0x0005fd8e) cell_myfav_contact_pane_g4

0x1cb1,	// (0x00060ea7) cell_myfav_contact_pane_g5_ParamLimits

0x1cb1,	// (0x00060ea7) cell_myfav_contact_pane_g5

0x0004,

0xf8ef,	// (0x0006eae5) cell_myfav_contact_pane_g_ParamLimits

0xf8ef,	// (0x0006eae5) cell_myfav_contact_pane_g

0xb3f5,	// (0x0006a5eb) main_myfav_hc_pane_g3_ParamLimits

0xb3f5,	// (0x0006a5eb) main_myfav_hc_pane_g3

0x4c1a,	// (0x00063e10) popup_adpt_find_window

0xb442,	// (0x0006a638) afind_page_pane_ParamLimits

0xb442,	// (0x0006a638) afind_page_pane

0xb44f,	// (0x0006a645) aid_size_cell_afind_ParamLimits

0xb44f,	// (0x0006a645) aid_size_cell_afind

0xb469,	// (0x0006a65f) bg_popup_sub_pane_cp09_ParamLimits

0xb469,	// (0x0006a65f) bg_popup_sub_pane_cp09

0xb476,	// (0x0006a66c) find_pane_cp01_ParamLimits

0xb476,	// (0x0006a66c) find_pane_cp01

0x1cbd,	// (0x00060eb3) grid_afind_control_pane_ParamLimits

0x1cbd,	// (0x00060eb3) grid_afind_control_pane

0xb483,	// (0x0006a679) grid_afind_pane_ParamLimits

0xb483,	// (0x0006a679) grid_afind_pane

0xb499,	// (0x0006a68f) cell_afind_pane_ParamLimits

0xb499,	// (0x0006a68f) cell_afind_pane

0x6699,	// (0x0006588f) afind_page_pane_g1

0xb4cf,	// (0x0006a6c5) afind_page_pane_g2

0xb4d7,	// (0x0006a6cd) afind_page_pane_g3

0x0002,

0xf8fa,	// (0x0006eaf0) afind_page_pane_g

0xb4df,	// (0x0006a6d5) afind_page_pane_t1

0x1ce3,	// (0x00060ed9) cell_afind_grid_control_pane_ParamLimits

0x1ce3,	// (0x00060ed9) cell_afind_grid_control_pane

0x1ad6,	// (0x00060ccc) bg_button_pane_cp69_ParamLimits

0x1ad6,	// (0x00060ccc) bg_button_pane_cp69

0xb4ed,	// (0x0006a6e3) cell_afind_pane_g1_ParamLimits

0xb4ed,	// (0x0006a6e3) cell_afind_pane_g1

0xb4fa,	// (0x0006a6f0) cell_afind_pane_t1_ParamLimits

0xb4fa,	// (0x0006a6f0) cell_afind_pane_t1

0x66da,	// (0x000658d0) bg_button_pane_cp72

0x1cf2,	// (0x00060ee8) cell_afind_grid_control_pane_g1

0x8c88,	// (0x00067e7e) aid_image_placing_area_ParamLimits

0x8c88,	// (0x00067e7e) aid_image_placing_area

0x0b8a,	// (0x0005fd80) field_vitu_entry_pane_g1_ParamLimits

0x0b8a,	// (0x0005fd80) field_vitu_entry_pane_g1

0x0b8a,	// (0x0005fd80) field_vitu_entry_pane_g2_ParamLimits

0x0b8a,	// (0x0005fd80) field_vitu_entry_pane_g2

0x0001,

0xf7a7,	// (0x0006e99d) field_vitu_entry_pane_g_ParamLimits

0xf7a7,	// (0x0006e99d) field_vitu_entry_pane_g

0x1618,	// (0x0006080e) cell_vitu_itu_pane_g1_ParamLimits

0x15fb,	// (0x000607f1) cell_vitu_itu_pane_t3_ParamLimits

0x15fb,	// (0x000607f1) cell_vitu_itu_pane_t3

0x1a8a,	// (0x00060c80) mp4_progress_pane_t1_ParamLimits

0x1aa1,	// (0x00060c97) mp4_progress_pane_t2_ParamLimits

0xf840,	// (0x0006ea36) mp4_progress_pane_t_ParamLimits

0x1ab8,	// (0x00060cae) mup_progress_pane_cp04_ParamLimits

0xb430,	// (0x0006a626) main_myfav_hc_pane_t5_ParamLimits

0xb430,	// (0x0006a626) main_myfav_hc_pane_t5

0x4c12,	// (0x00063e08) aid_zoom_text_primary

0x4c1a,	// (0x00063e10) popup_adpt_find_window_ParamLimits

0x8459,	// (0x0006764f) main_cam_set_pane

0xaf64,	// (0x0006a15a) cam4_zoom_pane_ParamLimits

0xaf64,	// (0x0006a15a) cam4_zoom_pane

0xb50c,	// (0x0006a702) main_cam_set_pane_g1_ParamLimits

0xb50c,	// (0x0006a702) main_cam_set_pane_g1

0xb51a,	// (0x0006a710) main_cam_set_pane_g2_ParamLimits

0xb51a,	// (0x0006a710) main_cam_set_pane_g2

0x0001,

0xf901,	// (0x0006eaf7) main_cam_set_pane_g_ParamLimits

0xf901,	// (0x0006eaf7) main_cam_set_pane_g

0xb526,	// (0x0006a71c) main_cam_set_pane_t1_ParamLimits

0xb526,	// (0x0006a71c) main_cam_set_pane_t1

0xb538,	// (0x0006a72e) main_cset_listscroll_pane_ParamLimits

0xb538,	// (0x0006a72e) main_cset_listscroll_pane

0xb566,	// (0x0006a75c) main_cset_slider_pane_ParamLimits

0xb566,	// (0x0006a75c) main_cset_slider_pane

0x1d03,	// (0x00060ef9) main_cset_list_pane_ParamLimits

0x1d03,	// (0x00060ef9) main_cset_list_pane

0x1d13,	// (0x00060f09) scroll_pane_cp028

0xb585,	// (0x0006a77b) aid_area_touch_slider

0xb5a1,	// (0x0006a797) cset_slider_pane

0xb5c4,	// (0x0006a7ba) main_cset_slider_pane_g1

0xb5d9,	// (0x0006a7cf) main_cset_slider_pane_g2

0x0011,

0xf906,	// (0x0006eafc) main_cset_slider_pane_g

0x1d4c,	// (0x00060f42) main_cset_slider_pane_t1

0xb695,	// (0x0006a88b) main_cset_slider_pane_t2

0xb6af,	// (0x0006a8a5) main_cset_slider_pane_t3

0xb6c9,	// (0x0006a8bf) main_cset_slider_pane_t4

0xb6e3,	// (0x0006a8d9) main_cset_slider_pane_t5

0xb6fd,	// (0x0006a8f3) main_cset_slider_pane_t6

0xb712,	// (0x0006a908) main_cset_slider_pane_t7

0x000e,

0xf92b,	// (0x0006eb21) main_cset_slider_pane_t

0xb816,	// (0x0006aa0c) cset_list_set_pane_ParamLimits

0xb816,	// (0x0006aa0c) cset_list_set_pane

0x1de6,	// (0x00060fdc) aid_position_infowindow_above

0x1dee,	// (0x00060fe4) aid_position_infowindow_below

0xb826,	// (0x0006aa1c) cset_list_set_pane_g1_ParamLimits

0xb826,	// (0x0006aa1c) cset_list_set_pane_g1

0x4edd,	// (0x000640d3) cset_list_set_pane_g3_ParamLimits

0x4edd,	// (0x000640d3) cset_list_set_pane_g3

0x0001,

0xf94a,	// (0x0006eb40) cset_list_set_pane_g_ParamLimits

0xf94a,	// (0x0006eb40) cset_list_set_pane_g

0x4eec,	// (0x000640e2) cset_list_set_pane_t1_ParamLimits

0x4eec,	// (0x000640e2) cset_list_set_pane_t1

0x8459,	// (0x0006764f) list_highlight_pane_cp021_ParamLimits

0x8459,	// (0x0006764f) list_highlight_pane_cp021

0x864c,	// (0x00067842) cset_slider_pane_g1

0x865e,	// (0x00067854) cset_slider_pane_g2

0x8655,	// (0x0006784b) cset_slider_pane_g3

0x0002,

0xf94f,	// (0x0006eb45) cset_slider_pane_g

0xb832,	// (0x0006aa28) aid_area_touch_cam4_zoom

0xb83a,	// (0x0006aa30) cam4_zoom_cont_pane

0xb842,	// (0x0006aa38) cam4_zoom_pane_g1

0xb84a,	// (0x0006aa40) cam4_zoom_pane_g2

0xb852,	// (0x0006aa48) cam4_zoom_pane_g3

0x0002,

0xf956,	// (0x0006eb4c) cam4_zoom_pane_g

0x2632,	// (0x00061828) cam4_zoom_cont_pane_g1

0x263b,	// (0x00061831) cam4_zoom_cont_pane_g2

0x2644,	// (0x0006183a) cam4_zoom_cont_pane_g3

0x0002,

0xf95d,	// (0x0006eb53) cam4_zoom_cont_pane_g

0xae23,	// (0x0006a019) call4_image_pane_ParamLimits

0xae23,	// (0x0006a019) call4_image_pane

0x1afa,	// (0x00060cf0) call4_windows_conf_pane_ParamLimits

0x1b0d,	// (0x00060d03) popup_call4_audio_in_window_ParamLimits

0x1b0d,	// (0x00060d03) popup_call4_audio_in_window

0x0431,	// (0x0005f627) bg_popup_call2_act_pane_cp02

0x1b4b,	// (0x00060d41) call4_list_conf_pane

0x6699,	// (0x0006588f) call4_image_pane_g1

0x6699,	// (0x0006588f) call4_image_pane_g2

0x0001,

0xf3c9,	// (0x0006e5bf) call4_image_pane_g

0x1df6,	// (0x00060fec) list_single_graphic_popup_conf4_pane_ParamLimits

0x1df6,	// (0x00060fec) list_single_graphic_popup_conf4_pane

0x0431,	// (0x0005f627) list_highlight_pane_cp022

0x1e09,	// (0x00060fff) list_single_graphic_popup_conf4_pane_g1

0x7e7b,	// (0x00067071) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf964,	// (0x0006eb5a) list_single_graphic_popup_conf4_pane_g

0x1e11,	// (0x00061007) list_single_graphic_popup_conf4_pane_t1

0x68c7,	// (0x00065abd) popup_vtel_slider_window_ParamLimits

0x68c7,	// (0x00065abd) popup_vtel_slider_window

0x1ac4,	// (0x00060cba) dialer2_ne_pane_t2_ParamLimits

0x1ac4,	// (0x00060cba) dialer2_ne_pane_t2

0x0001,

0xf845,	// (0x0006ea3b) dialer2_ne_pane_t_ParamLimits

0xf845,	// (0x0006ea3b) dialer2_ne_pane_t

0x8459,	// (0x0006764f) bg_popup_sub_pane_cp010_ParamLimits

0x8459,	// (0x0006764f) bg_popup_sub_pane_cp010

0xb85a,	// (0x0006aa50) popup_vtel_slider_window_g1_ParamLimits

0xb85a,	// (0x0006aa50) popup_vtel_slider_window_g1

0xb866,	// (0x0006aa5c) popup_vtel_slider_window_g2_ParamLimits

0xb866,	// (0x0006aa5c) popup_vtel_slider_window_g2

0x0003,

0xf969,	// (0x0006eb5f) popup_vtel_slider_window_g_ParamLimits

0xf969,	// (0x0006eb5f) popup_vtel_slider_window_g

0xb8ac,	// (0x0006aaa2) vtel_slider_pane_ParamLimits

0xb8ac,	// (0x0006aaa2) vtel_slider_pane

0xb8bb,	// (0x0006aab1) vtel_slider_pane_g1_ParamLimits

0xb8bb,	// (0x0006aab1) vtel_slider_pane_g1

0xb8c8,	// (0x0006aabe) vtel_slider_pane_g2_ParamLimits

0xb8c8,	// (0x0006aabe) vtel_slider_pane_g2

0xb8d5,	// (0x0006aacb) vtel_slider_pane_g3_ParamLimits

0xb8d5,	// (0x0006aacb) vtel_slider_pane_g3

0xb8bb,	// (0x0006aab1) vtel_slider_pane_g4_ParamLimits

0xb8bb,	// (0x0006aab1) vtel_slider_pane_g4

0xb8e2,	// (0x0006aad8) vtel_slider_pane_g5_ParamLimits

0xb8e2,	// (0x0006aad8) vtel_slider_pane_g5

0x0004,

0xf972,	// (0x0006eb68) vtel_slider_pane_g_ParamLimits

0xf972,	// (0x0006eb68) vtel_slider_pane_g

0x8459,	// (0x0006764f) main_gallery2_pane

0xb161,	// (0x0006a357) aid_size_row_itut2_dropdow_list_ParamLimits

0xb161,	// (0x0006a357) aid_size_row_itut2_dropdow_list

0xb1a7,	// (0x0006a39d) grid_vitu2_function_top_pane_ParamLimits

0xb1a7,	// (0x0006a39d) grid_vitu2_function_top_pane

0xb1e5,	// (0x0006a3db) popup_vitu2_dropdown_list_window_ParamLimits

0xb1e5,	// (0x0006a3db) popup_vitu2_dropdown_list_window

0xb201,	// (0x0006a3f7) popup_vitu2_match_list_window

0xb8ef,	// (0x0006aae5) cell_vitu2_function_top_pane_ParamLimits

0xb8ef,	// (0x0006aae5) cell_vitu2_function_top_pane

0xb907,	// (0x0006aafd) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb907,	// (0x0006aafd) cell_vitu2_function_top_pane_cp01

0xb923,	// (0x0006ab19) cell_vitu2_function_top_wide_pane_ParamLimits

0xb923,	// (0x0006ab19) cell_vitu2_function_top_wide_pane

0x8459,	// (0x0006764f) bg_button_pane_cp012

0xb940,	// (0x0006ab36) cell_vitu2_function_top_pane_g1

0xb954,	// (0x0006ab4a) bg_button_pane_cp013_ParamLimits

0xb954,	// (0x0006ab4a) bg_button_pane_cp013

0xb970,	// (0x0006ab66) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb970,	// (0x0006ab66) cell_vitu2_function_top_wide_pane_g1

0x0ba6,	// (0x0005fd9c) bg_popup_sub_pane_cp20

0xb988,	// (0x0006ab7e) list_vitu2_match_list_pane

0x1be7,	// (0x00060ddd) bg_popup_sub_pane_cp20_g1

0x1bef,	// (0x00060de5) bg_popup_sub_pane_cp20_g2

0x6ceb,	// (0x00065ee1) bg_popup_sub_pane_cp20_g3

0x1bf7,	// (0x00060ded) bg_popup_sub_pane_cp20_g4

0x6ccb,	// (0x00065ec1) bg_popup_sub_pane_cp20_g5

0x1e27,	// (0x0006101d) bg_popup_sub_pane_cp20_g6

0x1c07,	// (0x00060dfd) bg_popup_sub_pane_cp20_g7

0x1c0f,	// (0x00060e05) bg_popup_sub_pane_cp20_g8

0x1c17,	// (0x00060e0d) bg_popup_sub_pane_cp20_g9

0x0008,

0xf97d,	// (0x0006eb73) bg_popup_sub_pane_cp20_g

0xb9a0,	// (0x0006ab96) list_vitu2_match_list_item_pane_ParamLimits

0xb9a0,	// (0x0006ab96) list_vitu2_match_list_item_pane

0xb9b2,	// (0x0006aba8) list_vitu2_match_list_item_pane_t1

0x0431,	// (0x0005f627) bg_popup_sub_pane_cp21

0x64dd,	// (0x000656d3) grid_vitu2_dropdown_list_pane

0xb9cd,	// (0x0006abc3) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb9cd,	// (0x0006abc3) cell_vitu2_dropdown_list_char_pane

0xb9eb,	// (0x0006abe1) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb9eb,	// (0x0006abe1) cell_vitu2_dropdown_list_ctrl_pane

0x1e4e,	// (0x00061044) cell_vitu2_dropdown_list_char_pane_g1

0x1e45,	// (0x0006103b) cell_vitu2_dropdown_list_char_pane_g2

0x1e3c,	// (0x00061032) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99a,	// (0x0006eb90) cell_vitu2_dropdown_list_char_pane_g

0xba13,	// (0x0006ac09) cell_vitu2_dropdown_list_char_pane_t1

0xba21,	// (0x0006ac17) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xba21,	// (0x0006ac17) cell_vitu2_dropdown_list_ctrl_pane_g1

0xba31,	// (0x0006ac27) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xba31,	// (0x0006ac27) cell_vitu2_dropdown_list_ctrl_pane_g2

0xba42,	// (0x0006ac38) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xba42,	// (0x0006ac38) cell_vitu2_dropdown_list_ctrl_pane_g3

0xba52,	// (0x0006ac48) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xba52,	// (0x0006ac48) cell_vitu2_dropdown_list_ctrl_pane_g4

0x0b8a,	// (0x0005fd80) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x0b8a,	// (0x0005fd80) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a1,	// (0x0006eb97) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a1,	// (0x0006eb97) cell_vitu2_dropdown_list_ctrl_pane_g

0xba6b,	// (0x0006ac61) aid_size_cell_gallery2_ParamLimits

0xba6b,	// (0x0006ac61) aid_size_cell_gallery2

0xba85,	// (0x0006ac7b) grid_gallery2_pane_ParamLimits

0xba85,	// (0x0006ac7b) grid_gallery2_pane

0xa71b,	// (0x00069911) scroll_pane_cp029_ParamLimits

0xa71b,	// (0x00069911) scroll_pane_cp029

0xba96,	// (0x0006ac8c) cell_gallery2_pane_ParamLimits

0xba96,	// (0x0006ac8c) cell_gallery2_pane

0x1e57,	// (0x0006104d) cell_gallery2_pane_g2

0xbae3,	// (0x0006acd9) cell_gallery2_pane_g3

0x1e5f,	// (0x00061055) cell_gallery2_pane_g4

0x1e67,	// (0x0006105d) cell_gallery2_pane_g5

0x64dd,	// (0x000656d3) grid_highlight_pane_cp10

0xb201,	// (0x0006a3f7) popup_vitu2_match_list_window_ParamLimits

0xb211,	// (0x0006a407) popup_vitu2_query_window_ParamLimits

0xb211,	// (0x0006a407) popup_vitu2_query_window

0x0431,	// (0x0005f627) bg_vitu2_candi_button_pane

0x1e4e,	// (0x00061044) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1e45,	// (0x0006103b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1e3c,	// (0x00061032) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x4f01,	// (0x000640f7) bg_button_pane_cp015

0xbaeb,	// (0x0006ace1) bg_button_pane_cp016

0xbaf7,	// (0x0006aced) bg_button_pane_cp017

0xebe2,	// (0x0006ddd8) bg_popup_sub_pane_cp22

0x1e6f,	// (0x00061065) popup_vitu2_query_window_g1

0x4f35,	// (0x0006412b) popup_vitu2_query_window_g2

0x0002,

0xf9ac,	// (0x0006eba2) popup_vitu2_query_window_g

0x4f49,	// (0x0006413f) popup_vitu2_query_window_t1_ParamLimits

0x4f49,	// (0x0006413f) popup_vitu2_query_window_t1

0x4f7c,	// (0x00064172) popup_vitu2_query_window_t2_ParamLimits

0x4f7c,	// (0x00064172) popup_vitu2_query_window_t2

0x4f8e,	// (0x00064184) popup_vitu2_query_window_t3_ParamLimits

0x4f8e,	// (0x00064184) popup_vitu2_query_window_t3

0xbb1e,	// (0x0006ad14) popup_vitu2_query_window_t4_ParamLimits

0xbb1e,	// (0x0006ad14) popup_vitu2_query_window_t4

0xbb30,	// (0x0006ad26) popup_vitu2_query_window_t5_ParamLimits

0xbb30,	// (0x0006ad26) popup_vitu2_query_window_t5

0x0006,

0xf9b3,	// (0x0006eba9) popup_vitu2_query_window_t_ParamLimits

0xf9b3,	// (0x0006eba9) popup_vitu2_query_window_t

0x1cfb,	// (0x00060ef1) main_cset_text_pane

0xb585,	// (0x0006a77b) aid_area_touch_slider_ParamLimits

0xb5a1,	// (0x0006a797) cset_slider_pane_ParamLimits

0xb5c4,	// (0x0006a7ba) main_cset_slider_pane_g1_ParamLimits

0xb5d9,	// (0x0006a7cf) main_cset_slider_pane_g2_ParamLimits

0x1d1c,	// (0x00060f12) main_cset_slider_pane_g3_ParamLimits

0x1d1c,	// (0x00060f12) main_cset_slider_pane_g3

0xb5ee,	// (0x0006a7e4) main_cset_slider_pane_g4_ParamLimits

0xb5ee,	// (0x0006a7e4) main_cset_slider_pane_g4

0xb5fd,	// (0x0006a7f3) main_cset_slider_pane_g5_ParamLimits

0xb5fd,	// (0x0006a7f3) main_cset_slider_pane_g5

0xb609,	// (0x0006a7ff) main_cset_slider_pane_g6_ParamLimits

0xb609,	// (0x0006a7ff) main_cset_slider_pane_g6

0xf906,	// (0x0006eafc) main_cset_slider_pane_g_ParamLimits

0x1d4c,	// (0x00060f42) main_cset_slider_pane_t1_ParamLimits

0xb695,	// (0x0006a88b) main_cset_slider_pane_t2_ParamLimits

0xb6af,	// (0x0006a8a5) main_cset_slider_pane_t3_ParamLimits

0xb6c9,	// (0x0006a8bf) main_cset_slider_pane_t4_ParamLimits

0xb6e3,	// (0x0006a8d9) main_cset_slider_pane_t5_ParamLimits

0xb6fd,	// (0x0006a8f3) main_cset_slider_pane_t6_ParamLimits

0xb712,	// (0x0006a908) main_cset_slider_pane_t7_ParamLimits

0xb73c,	// (0x0006a932) main_cset_slider_pane_t8_ParamLimits

0xb73c,	// (0x0006a932) main_cset_slider_pane_t8

0xb764,	// (0x0006a95a) main_cset_slider_pane_t9_ParamLimits

0xb764,	// (0x0006a95a) main_cset_slider_pane_t9

0xb78c,	// (0x0006a982) main_cset_slider_pane_t10_ParamLimits

0xb78c,	// (0x0006a982) main_cset_slider_pane_t10

0xb7b4,	// (0x0006a9aa) main_cset_slider_pane_t11_ParamLimits

0xb7b4,	// (0x0006a9aa) main_cset_slider_pane_t11

0xb7dc,	// (0x0006a9d2) main_cset_slider_pane_t12_ParamLimits

0xb7dc,	// (0x0006a9d2) main_cset_slider_pane_t12

0xb7f9,	// (0x0006a9ef) main_cset_slider_pane_t13_ParamLimits

0xb7f9,	// (0x0006a9ef) main_cset_slider_pane_t13

0xf92b,	// (0x0006eb21) main_cset_slider_pane_t_ParamLimits

0x0431,	// (0x0005f627) bg_popup_sub_pane_cp011

0x1e7b,	// (0x00061071) main_cset_text_pane_g1

0x1e83,	// (0x00061079) main_cset_text_pane_t1

0x1e91,	// (0x00061087) main_cset_text_pane_t2

0x1e9f,	// (0x00061095) main_cset_text_pane_t3

0x1ead,	// (0x000610a3) main_cset_text_pane_t4

0x1ebb,	// (0x000610b1) main_cset_text_pane_t5

0x1ec9,	// (0x000610bf) main_cset_text_pane_t6

0x1ed7,	// (0x000610cd) main_cset_text_pane_t7

0x0006,

0xf9c2,	// (0x0006ebb8) main_cset_text_pane_t

0x0431,	// (0x0005f627) main_cam4_burst_pane

0x0431,	// (0x0005f627) main_cam5_pane

0x1cd1,	// (0x00060ec7) bg_button_pane_cp019

0x1cda,	// (0x00060ed0) bg_button_pane_cp020

0x1d28,	// (0x00060f1e) main_cset_slider_pane_g7_ParamLimits

0x1d28,	// (0x00060f1e) main_cset_slider_pane_g7

0x1d34,	// (0x00060f2a) main_cset_slider_pane_g8_ParamLimits

0x1d34,	// (0x00060f2a) main_cset_slider_pane_g8

0xb61d,	// (0x0006a813) main_cset_slider_pane_g9_ParamLimits

0xb61d,	// (0x0006a813) main_cset_slider_pane_g9

0xb629,	// (0x0006a81f) main_cset_slider_pane_g10_ParamLimits

0xb629,	// (0x0006a81f) main_cset_slider_pane_g10

0xb635,	// (0x0006a82b) main_cset_slider_pane_g11_ParamLimits

0xb635,	// (0x0006a82b) main_cset_slider_pane_g11

0xb641,	// (0x0006a837) main_cset_slider_pane_g12_ParamLimits

0xb641,	// (0x0006a837) main_cset_slider_pane_g12

0xb64d,	// (0x0006a843) main_cset_slider_pane_g13_ParamLimits

0xb64d,	// (0x0006a843) main_cset_slider_pane_g13

0xb659,	// (0x0006a84f) main_cset_slider_pane_g14_ParamLimits

0xb659,	// (0x0006a84f) main_cset_slider_pane_g14

0xb665,	// (0x0006a85b) main_cset_slider_pane_g15_ParamLimits

0xb665,	// (0x0006a85b) main_cset_slider_pane_g15

0x1d74,	// (0x00060f6a) main_cset_slider_pane_t14_ParamLimits

0x1d74,	// (0x00060f6a) main_cset_slider_pane_t14

0x1dad,	// (0x00060fa3) main_cset_slider_pane_t15_ParamLimits

0x1dad,	// (0x00060fa3) main_cset_slider_pane_t15

0xbb42,	// (0x0006ad38) aid_cam4_burst_size_cell_ParamLimits

0xbb42,	// (0x0006ad38) aid_cam4_burst_size_cell

0xbb5e,	// (0x0006ad54) grid_cam4_burst_pane_ParamLimits

0xbb5e,	// (0x0006ad54) grid_cam4_burst_pane

0xbb80,	// (0x0006ad76) linegrid_cam4_burst_pane_ParamLimits

0xbb80,	// (0x0006ad76) linegrid_cam4_burst_pane

0xbb9e,	// (0x0006ad94) scroll_pane_cp30_ParamLimits

0xbb9e,	// (0x0006ad94) scroll_pane_cp30

0xbbaa,	// (0x0006ada0) cell_cam4_burst_pane_ParamLimits

0xbbaa,	// (0x0006ada0) cell_cam4_burst_pane

0x1ee5,	// (0x000610db) linegrid_cam4_burst_pane_g1_ParamLimits

0x1ee5,	// (0x000610db) linegrid_cam4_burst_pane_g1

0xbbe2,	// (0x0006add8) linegrid_cam4_burst_pane_g2_ParamLimits

0xbbe2,	// (0x0006add8) linegrid_cam4_burst_pane_g2

0x1ef2,	// (0x000610e8) linegrid_cam4_burst_pane_g3_ParamLimits

0x1ef2,	// (0x000610e8) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d1,	// (0x0006ebc7) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d1,	// (0x0006ebc7) linegrid_cam4_burst_pane_g

0xbbf3,	// (0x0006ade9) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbbf3,	// (0x0006ade9) linegrid_cam4_burst_pane_g3_copy1

0x1eff,	// (0x000610f5) linegrid_cam4_burst_pane_g4_ParamLimits

0x1eff,	// (0x000610f5) linegrid_cam4_burst_pane_g4

0xbc0d,	// (0x0006ae03) linegrid_cam4_burst_pane_g5_ParamLimits

0xbc0d,	// (0x0006ae03) linegrid_cam4_burst_pane_g5

0xbc1e,	// (0x0006ae14) linegrid_cam4_burst_pane_g6_ParamLimits

0xbc1e,	// (0x0006ae14) linegrid_cam4_burst_pane_g6

0x1f0c,	// (0x00061102) linegrid_cam4_burst_pane_g7_ParamLimits

0x1f0c,	// (0x00061102) linegrid_cam4_burst_pane_g7

0xbc2f,	// (0x0006ae25) cell_cam4_burst_pane_g1

0x1f25,	// (0x0006111b) main_cam5_pane_t1_ParamLimits

0x1f25,	// (0x0006111b) main_cam5_pane_t1

0x1f37,	// (0x0006112d) main_cam5_pane_t2_ParamLimits

0x1f37,	// (0x0006112d) main_cam5_pane_t2

0x1f49,	// (0x0006113f) main_cam5_pane_t3_ParamLimits

0x1f49,	// (0x0006113f) main_cam5_pane_t3

0x1f5b,	// (0x00061151) main_cam5_pane_t4_ParamLimits

0x1f5b,	// (0x00061151) main_cam5_pane_t4

0x1f71,	// (0x00061167) main_cam5_pane_t5_ParamLimits

0x1f71,	// (0x00061167) main_cam5_pane_t5

0x1f83,	// (0x00061179) main_cam5_pane_t6_ParamLimits

0x1f83,	// (0x00061179) main_cam5_pane_t6

0x1f95,	// (0x0006118b) main_cam5_pane_t7_ParamLimits

0x1f95,	// (0x0006118b) main_cam5_pane_t7

0x1fa7,	// (0x0006119d) main_cam5_pane_t8_ParamLimits

0x1fa7,	// (0x0006119d) main_cam5_pane_t8

0x1fc3,	// (0x000611b9) main_cam5_pane_t9_ParamLimits

0x1fc3,	// (0x000611b9) main_cam5_pane_t9

0x1fd5,	// (0x000611cb) main_cam5_pane_t10_ParamLimits

0x1fd5,	// (0x000611cb) main_cam5_pane_t10

0x1fe7,	// (0x000611dd) main_cam5_pane_t11_ParamLimits

0x1fe7,	// (0x000611dd) main_cam5_pane_t11

0x1ff9,	// (0x000611ef) main_cam5_pane_t12_ParamLimits

0x1ff9,	// (0x000611ef) main_cam5_pane_t12

0x200e,	// (0x00061204) main_cam5_pane_t13_ParamLimits

0x200e,	// (0x00061204) main_cam5_pane_t13

0x000c,

0xf9dd,	// (0x0006ebd3) main_cam5_pane_t_ParamLimits

0xf9dd,	// (0x0006ebd3) main_cam5_pane_t

0x5a90,	// (0x00064c86) popup_scut_keymap_window_ParamLimits

0x5a90,	// (0x00064c86) popup_scut_keymap_window

0xbc42,	// (0x0006ae38) aid_size_cell_brow_shortcut

0x64dd,	// (0x000656d3) bg_popup_window_pane_cp010

0xbc4e,	// (0x0006ae44) grid_scut_pane

0xbc58,	// (0x0006ae4e) cell_scut_pane_ParamLimits

0xbc58,	// (0x0006ae4e) cell_scut_pane

0xbc6d,	// (0x0006ae63) cell_scut_pane_g1

0x202b,	// (0x00061221) cell_scut_pane_t1

0x203a,	// (0x00061230) cell_scut_pane_t2

0xbc76,	// (0x0006ae6c) cell_scut_pane_t3

0x0002,

0xf9f8,	// (0x0006ebee) cell_scut_pane_t

0xa023,	// (0x00069219) main_mup3_pane_g8_ParamLimits

0xa023,	// (0x00069219) main_mup3_pane_g8

0xb16d,	// (0x0006a363) area_vitu2_query_pane_ParamLimits

0xb16d,	// (0x0006a363) area_vitu2_query_pane

0x4f12,	// (0x00064108) input_focus_pane_cp08

0x2049,	// (0x0006123f) area_vitu2_query_pane_g1

0x500c,	// (0x00064202) area_vitu2_query_pane_g2

0x0001,

0xf9ff,	// (0x0006ebf5) area_vitu2_query_pane_g

0xbc84,	// (0x0006ae7a) area_vitu2_query_pane_t1_ParamLimits

0xbc84,	// (0x0006ae7a) area_vitu2_query_pane_t1

0xbc96,	// (0x0006ae8c) area_vitu2_query_pane_t2_ParamLimits

0xbc96,	// (0x0006ae8c) area_vitu2_query_pane_t2

0x501b,	// (0x00064211) area_vitu2_query_pane_t3_ParamLimits

0x501b,	// (0x00064211) area_vitu2_query_pane_t3

0x5043,	// (0x00064239) area_vitu2_query_pane_t4_ParamLimits

0x5043,	// (0x00064239) area_vitu2_query_pane_t4

0x506b,	// (0x00064261) area_vitu2_query_pane_t5_ParamLimits

0x506b,	// (0x00064261) area_vitu2_query_pane_t5

0x5093,	// (0x00064289) area_vitu2_query_pane_t6_ParamLimits

0x5093,	// (0x00064289) area_vitu2_query_pane_t6

0x0006,

0xfa04,	// (0x0006ebfa) area_vitu2_query_pane_t_ParamLimits

0xfa04,	// (0x0006ebfa) area_vitu2_query_pane_t

0xbaeb,	// (0x0006ace1) bg_button_pane_cp018

0xbca8,	// (0x0006ae9e) bg_button_pane_cp021

0x50df,	// (0x000642d5) bg_button_pane_cp022

0x50fe,	// (0x000642f4) input_focus_pane_cp09

0x8195,	// (0x0006738b) aid_size_touch_mv_arrow_left

0x81b9,	// (0x000673af) aid_size_touch_mv_arrow_right

0xb67d,	// (0x0006a873) main_cset_slider_pane_g16_ParamLimits

0xb67d,	// (0x0006a873) main_cset_slider_pane_g16

0xb689,	// (0x0006a87f) main_cset_slider_pane_g17_ParamLimits

0xb689,	// (0x0006a87f) main_cset_slider_pane_g17

0xbc2f,	// (0x0006ae25) cell_cam4_burst_pane_g1_ParamLimits

0x0431,	// (0x0005f627) compa_mode_pane

0xb872,	// (0x0006aa68) popup_vtel_slider_window_g3_ParamLimits

0xb872,	// (0x0006aa68) popup_vtel_slider_window_g3

0xb886,	// (0x0006aa7c) popup_vtel_slider_window_g4_ParamLimits

0xb886,	// (0x0006aa7c) popup_vtel_slider_window_g4

0xb89a,	// (0x0006aa90) popup_vtel_slider_window_t1_ParamLimits

0xb89a,	// (0x0006aa90) popup_vtel_slider_window_t1

0x0431,	// (0x0005f627) main_cl_pane

0x9927,	// (0x00068b1d) popup_imed_adjust2_window_ParamLimits

0xebe2,	// (0x0006ddd8) bg_tb_trans_pane_cp05_ParamLimits

0x1530,	// (0x00060726) popup_imed_adjust2_window_g1_ParamLimits

0x153f,	// (0x00060735) popup_imed_adjust2_window_g2_ParamLimits

0x153f,	// (0x00060735) popup_imed_adjust2_window_g2

0x154b,	// (0x00060741) popup_imed_adjust2_window_g3_ParamLimits

0x154b,	// (0x00060741) popup_imed_adjust2_window_g3

0x0002,

0xf76b,	// (0x0006e961) popup_imed_adjust2_window_g_ParamLimits

0xf76b,	// (0x0006e961) popup_imed_adjust2_window_g

0x1557,	// (0x0006074d) popup_imed_adjust2_window_t1_ParamLimits

0x156f,	// (0x00060765) slider_imed_adjust_pane_ParamLimits

0x1583,	// (0x00060779) slider_imed_adjust_pane_g1_ParamLimits

0x1593,	// (0x00060789) slider_imed_adjust_pane_g2_ParamLimits

0x15a3,	// (0x00060799) slider_imed_adjust_pane_g3_ParamLimits

0x15b4,	// (0x000607aa) slider_imed_adjust_pane_g4_ParamLimits

0xf772,	// (0x0006e968) slider_imed_adjust_pane_g_ParamLimits

0xaf15,	// (0x0006a10b) aid_touch_area_cam4_ParamLimits

0xaf15,	// (0x0006a10b) aid_touch_area_cam4

0xaf23,	// (0x0006a119) battery_pane_cp01

0xafa2,	// (0x0006a198) main_camera4_pane_g6_ParamLimits

0xafa2,	// (0x0006a198) main_camera4_pane_g6

0xafc0,	// (0x0006a1b6) main_camera4_pane_t2_ParamLimits

0xafc0,	// (0x0006a1b6) main_camera4_pane_t2

0x0001,

0xf879,	// (0x0006ea6f) main_camera4_pane_t_ParamLimits

0xf879,	// (0x0006ea6f) main_camera4_pane_t

0xb048,	// (0x0006a23e) aid_touch_area_vid4_ParamLimits

0xb048,	// (0x0006a23e) aid_touch_area_vid4

0xafa2,	// (0x0006a198) main_video4_pane_g5_ParamLimits

0xafa2,	// (0x0006a198) main_video4_pane_g5

0xb078,	// (0x0006a26e) vid4_progress_pane_ParamLimits

0xb078,	// (0x0006a26e) vid4_progress_pane

0x1d40,	// (0x00060f36) main_cset_slider_pane_g18_ParamLimits

0x1d40,	// (0x00060f36) main_cset_slider_pane_g18

0x1f19,	// (0x0006110f) cell_cam4_burst_pane_g2_ParamLimits

0x1f19,	// (0x0006110f) cell_cam4_burst_pane_g2

0x0001,

0xf9d8,	// (0x0006ebce) cell_cam4_burst_pane_g_ParamLimits

0xf9d8,	// (0x0006ebce) cell_cam4_burst_pane_g

0xbcb4,	// (0x0006aeaa) bg_cl_pane_ParamLimits

0xbcb4,	// (0x0006aeaa) bg_cl_pane

0xbcc0,	// (0x0006aeb6) cl_header_pane_ParamLimits

0xbcc0,	// (0x0006aeb6) cl_header_pane

0xbccc,	// (0x0006aec2) cl_listscroll_pane_ParamLimits

0xbccc,	// (0x0006aec2) cl_listscroll_pane

0x20f1,	// (0x000612e7) bg_cl_pane_g1

0x20f9,	// (0x000612ef) bg_cl_pane_g2

0x2101,	// (0x000612f7) bg_cl_pane_g3

0x2109,	// (0x000612ff) bg_cl_pane_g4

0x2111,	// (0x00061307) bg_cl_pane_g5

0x2119,	// (0x0006130f) bg_cl_pane_g6

0x2121,	// (0x00061317) bg_cl_pane_g7

0x2129,	// (0x0006131f) bg_cl_pane_g8

0x2131,	// (0x00061327) bg_cl_pane_g9

0x0008,

0xfa13,	// (0x0006ec09) bg_cl_pane_g

0xbcd8,	// (0x0006aece) aid_height_cl_leading_ParamLimits

0xbcd8,	// (0x0006aece) aid_height_cl_leading

0xbce4,	// (0x0006aeda) aid_height_cl_text_ParamLimits

0xbce4,	// (0x0006aeda) aid_height_cl_text

0x0ba6,	// (0x0005fd9c) bg_cl_header_pane_ParamLimits

0x0ba6,	// (0x0005fd9c) bg_cl_header_pane

0xbcfc,	// (0x0006aef2) cl_header_pane_g1_ParamLimits

0xbcfc,	// (0x0006aef2) cl_header_pane_g1

0xbd09,	// (0x0006aeff) cl_header_pane_t1_ParamLimits

0xbd09,	// (0x0006aeff) cl_header_pane_t1

0x2139,	// (0x0006132f) cl_list_pane

0x2142,	// (0x00061338) hc_scroll_pane_cp01

0x6ccb,	// (0x00065ec1) bg_cl_header_pane_g1

0x1be7,	// (0x00060ddd) bg_cl_header_pane_g2

0x6ceb,	// (0x00065ee1) bg_cl_header_pane_g3

0x1bf7,	// (0x00060ded) bg_cl_header_pane_g4

0x1bef,	// (0x00060de5) bg_cl_header_pane_g5

0x1e27,	// (0x0006101d) bg_cl_header_pane_g6

0x1c0f,	// (0x00060e05) bg_cl_header_pane_g7

0x1c17,	// (0x00060e0d) bg_cl_header_pane_g8

0x1c07,	// (0x00060dfd) bg_cl_header_pane_g9

0x0008,

0xfa26,	// (0x0006ec1c) bg_cl_header_pane_g

0xbd1b,	// (0x0006af11) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbd1b,	// (0x0006af11) hc_cl_list_double_graphic_heading_pane

0xbd2b,	// (0x0006af21) hc_cl_list_single_graphic_pane_ParamLimits

0xbd2b,	// (0x0006af21) hc_cl_list_single_graphic_pane

0xbd3d,	// (0x0006af33) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbd3d,	// (0x0006af33) hc_cl_list_single_graphic_pane_g1

0xbd49,	// (0x0006af3f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbd49,	// (0x0006af3f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa39,	// (0x0006ec2f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa39,	// (0x0006ec2f) hc_cl_list_single_graphic_pane_g

0xbd5d,	// (0x0006af53) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbd5d,	// (0x0006af53) hc_cl_list_single_graphic_pane_t1

0xbd3d,	// (0x0006af33) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbd3d,	// (0x0006af33) hc_cl_list_double_graphic_heading_pane_g1

0xbd72,	// (0x0006af68) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbd72,	// (0x0006af68) hc_cl_list_double_graphic_heading_pane_g2

0xbd86,	// (0x0006af7c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbd86,	// (0x0006af7c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa3e,	// (0x0006ec34) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa3e,	// (0x0006ec34) hc_cl_list_double_graphic_heading_pane_g

0xbd9a,	// (0x0006af90) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbd9a,	// (0x0006af90) hc_cl_list_double_graphic_heading_pane_t1

0xbdaf,	// (0x0006afa5) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbdaf,	// (0x0006afa5) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa45,	// (0x0006ec3b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa45,	// (0x0006ec3b) hc_cl_list_double_graphic_heading_pane_t

0xbdc4,	// (0x0006afba) vid4_progress_pane_g1

0xbdd3,	// (0x0006afc9) vid4_progress_pane_g2

0xbde2,	// (0x0006afd8) vid4_progress_pane_g3

0xbdf1,	// (0x0006afe7) vid4_progress_pane_g4

0x0004,

0xfa4a,	// (0x0006ec40) vid4_progress_pane_g

0xbdfd,	// (0x0006aff3) vid4_progress_pane_t1

0xbe13,	// (0x0006b009) vid4_progress_pane_t2

0x0002,

0xfa55,	// (0x0006ec4b) vid4_progress_pane_t

0xbe3d,	// (0x0006b033) wait_bar_pane_cp07

0xee2a,	// (0x0006e020) blid_firmament_pane_ParamLimits

0xee6b,	// (0x0006e061) popup_blid_sat_info2_window_g1

0xee8f,	// (0x0006e085) popup_blid_sat_info2_window_t3

0xee9d,	// (0x0006e093) popup_blid_sat_info2_window_t4

0xeeab,	// (0x0006e0a1) popup_blid_sat_info2_window_t5

0xeeb9,	// (0x0006e0af) popup_blid_sat_info2_window_t6

0xeec9,	// (0x0006e0bf) popup_blid_sat_info2_window_t7

0xeed7,	// (0x0006e0cd) popup_blid_sat_info2_window_t8

0xeee5,	// (0x0006e0db) popup_blid_sat_info2_window_t9

0xeef3,	// (0x0006e0e9) popup_blid_sat_info2_window_t10

0xefae,	// (0x0006e1a4) aid_firma_cardinal_ParamLimits

0xefc2,	// (0x0006e1b8) blid_firmament_pane_t1_ParamLimits

0xefd9,	// (0x0006e1cf) blid_firmament_pane_t2_ParamLimits

0xeff0,	// (0x0006e1e6) blid_firmament_pane_t3_ParamLimits

0xf007,	// (0x0006e1fd) blid_firmament_pane_t4_ParamLimits

0xf664,	// (0x0006e85a) blid_firmament_pane_t_ParamLimits

0xf01e,	// (0x0006e214) blid_sat_info_pane_ParamLimits

0x8459,	// (0x0006764f) main_cam_set_pane_ParamLimits

0xa6bb,	// (0x000698b1) aid_size_cell_colour_35_ParamLimits

0xa6d2,	// (0x000698c8) aid_size_cell_colour_112_ParamLimits

0xa6e9,	// (0x000698df) aid_size_cell_effect_ParamLimits

0x8459,	// (0x0006764f) bg_tb_trans_pane_cp02_ParamLimits

0xf045,	// (0x0006e23b) heading_imed_pane_ParamLimits

0xa703,	// (0x000698f9) listscroll_imed_pane_ParamLimits

0x9401,	// (0x000685f7) popup_call2_audio_first_window_g5_ParamLimits

0x9401,	// (0x000685f7) popup_call2_audio_first_window_g5

0xacb2,	// (0x00069ea8) aid_size_touch_image3_arrow_left_ParamLimits

0xacb2,	// (0x00069ea8) aid_size_touch_image3_arrow_left

0xacc6,	// (0x00069ebc) aid_size_touch_image3_arrow_right_ParamLimits

0xacc6,	// (0x00069ebc) aid_size_touch_image3_arrow_right

0xbe28,	// (0x0006b01e) vid4_progress_pane_t3

0xa867,	// (0x00069a5d) main_hwr_training_symbol_option_pane_ParamLimits

0xa867,	// (0x00069a5d) main_hwr_training_symbol_option_pane

0x175d,	// (0x00060953) popup_hwr_training_preview_window_ParamLimits

0x175d,	// (0x00060953) popup_hwr_training_preview_window

0xa8c2,	// (0x00069ab8) hwr_training_navi_pane_g5_ParamLimits

0xa8c2,	// (0x00069ab8) hwr_training_navi_pane_g5

0x1bd5,	// (0x00060dcb) popup_char_count_window

0x0ba6,	// (0x0005fd9c) bg_popup_sub_pane_cp20_ParamLimits

0xb988,	// (0x0006ab7e) list_vitu2_match_list_pane_ParamLimits

0xb994,	// (0x0006ab8a) vitu2_page_scroll_pane_ParamLimits

0xb994,	// (0x0006ab8a) vitu2_page_scroll_pane

0x2176,	// (0x0006136c) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2176,	// (0x0006136c) list_single_hwr_training_symbol_option_pane

0x2189,	// (0x0006137f) list_single_hwr_training_symbol_option_pane_g1

0x2191,	// (0x00061387) list_single_hwr_training_symbol_option_pane_t1

0x219f,	// (0x00061395) bg_button_pane_cp023

0x21a8,	// (0x0006139e) bg_button_pane_cp024

0xbe79,	// (0x0006b06f) vitu2_page_scroll_pane_g1

0xbe81,	// (0x0006b077) vitu2_page_scroll_pane_g2

0x0001,

0xfa5c,	// (0x0006ec52) vitu2_page_scroll_pane_g

0xbe89,	// (0x0006b07f) vitu2_page_scroll_pane_t1

0x107e,	// (0x00060274) popup_char_count_window_g1

0x21db,	// (0x000613d1) popup_char_count_window_g2

0x21e4,	// (0x000613da) popup_char_count_window_g3

0x0002,

0xfa61,	// (0x0006ec57) popup_char_count_window_g

0x21ed,	// (0x000613e3) popup_char_count_window_t1

0x0431,	// (0x0005f627) main_vded2_pane

0x151e,	// (0x00060714) aid_size_cell_imed_line

0x1528,	// (0x0006071e) grid_imed_line_width_pane

0xb0c3,	// (0x0006a2b9) vid4_indicators_pane_g4

0x21fb,	// (0x000613f1) cell_imed_line_width_pane_ParamLimits

0x21fb,	// (0x000613f1) cell_imed_line_width_pane

0x220d,	// (0x00061403) cell_imed_line_width_pane_g1

0x2216,	// (0x0006140c) cell_imed_line_width_pane_g2

0x0001,

0xfa68,	// (0x0006ec5e) cell_imed_line_width_pane_g

0xbe98,	// (0x0006b08e) main_vded2_pane_g1_ParamLimits

0xbe98,	// (0x0006b08e) main_vded2_pane_g1

0xbea5,	// (0x0006b09b) main_vded2_pane_g2_ParamLimits

0xbea5,	// (0x0006b09b) main_vded2_pane_g2

0x0001,

0xfa6d,	// (0x0006ec63) main_vded2_pane_g_ParamLimits

0xfa6d,	// (0x0006ec63) main_vded2_pane_g

0xbeb1,	// (0x0006b0a7) vded2_slider_pane_ParamLimits

0xbeb1,	// (0x0006b0a7) vded2_slider_pane

0xbebe,	// (0x0006b0b4) aid_size_touch_vded2_end

0xbec6,	// (0x0006b0bc) aid_size_touch_vded2_playhead

0xbece,	// (0x0006b0c4) aid_size_touch_vded2_start

0xbed6,	// (0x0006b0cc) vded2_slider_bg_pane

0xbedf,	// (0x0006b0d5) vded2_slider_pane_g1

0xbee8,	// (0x0006b0de) vded2_slider_pane_g2

0xbef0,	// (0x0006b0e6) vded2_slider_pane_g3

0x0002,

0xfa72,	// (0x0006ec68) vded2_slider_pane_g

0xbef9,	// (0x0006b0ef) vded2_slider_bg_pane_g1

0xbf02,	// (0x0006b0f8) vded2_slider_bg_pane_g2

0xbf0b,	// (0x0006b101) vded2_slider_bg_pane_g3

0x0002,

0xfa79,	// (0x0006ec6f) vded2_slider_bg_pane_g

0x8799,	// (0x0006798f) aid_postcard_touch_down_pane_ParamLimits

0x8799,	// (0x0006798f) aid_postcard_touch_down_pane

0x87a5,	// (0x0006799b) aid_postcard_touch_up_pane_ParamLimits

0x87a5,	// (0x0006799b) aid_postcard_touch_up_pane

0x0431,	// (0x0005f627) main_blid2_pane

0x98c4,	// (0x00068aba) popup_blid2_search_window

0x0431,	// (0x0005f627) blid2_gps_pane

0x0431,	// (0x0005f627) blid2_navig_pane

0x0431,	// (0x0005f627) blid2_search_pane

0x0431,	// (0x0005f627) blid2_tripm_pane

0xbf14,	// (0x0006b10a) blid2_search_pane_g1_ParamLimits

0xbf14,	// (0x0006b10a) blid2_search_pane_g1

0xbf20,	// (0x0006b116) blid2_search_pane_t1_ParamLimits

0xbf20,	// (0x0006b116) blid2_search_pane_t1

0xbf32,	// (0x0006b128) aid_size_cell_blid2_gps_ParamLimits

0xbf32,	// (0x0006b128) aid_size_cell_blid2_gps

0xbf42,	// (0x0006b138) blid2_gps_pane_g1_ParamLimits

0xbf42,	// (0x0006b138) blid2_gps_pane_g1

0xbf4e,	// (0x0006b144) grid_blid2_satellite_pane_ParamLimits

0xbf4e,	// (0x0006b144) grid_blid2_satellite_pane

0xbf5a,	// (0x0006b150) blid2_navig_pane_g1_ParamLimits

0xbf5a,	// (0x0006b150) blid2_navig_pane_g1

0xbf66,	// (0x0006b15c) blid2_navig_pane_t1_ParamLimits

0xbf66,	// (0x0006b15c) blid2_navig_pane_t1

0xbf78,	// (0x0006b16e) blid2_navig_pane_t2_ParamLimits

0xbf78,	// (0x0006b16e) blid2_navig_pane_t2

0x0001,

0xfa80,	// (0x0006ec76) blid2_navig_pane_t_ParamLimits

0xfa80,	// (0x0006ec76) blid2_navig_pane_t

0xbf8a,	// (0x0006b180) blid2_navig_ring_pane_ParamLimits

0xbf8a,	// (0x0006b180) blid2_navig_ring_pane

0xbf96,	// (0x0006b18c) blid2_speed_pane_ParamLimits

0xbf96,	// (0x0006b18c) blid2_speed_pane

0xbfa2,	// (0x0006b198) blid2_tripm_pane_g1_ParamLimits

0xbfa2,	// (0x0006b198) blid2_tripm_pane_g1

0xbfae,	// (0x0006b1a4) blid2_tripm_pane_g2_ParamLimits

0xbfae,	// (0x0006b1a4) blid2_tripm_pane_g2

0xbfba,	// (0x0006b1b0) blid2_tripm_pane_g3_ParamLimits

0xbfba,	// (0x0006b1b0) blid2_tripm_pane_g3

0xbfc6,	// (0x0006b1bc) blid2_tripm_pane_g4_ParamLimits

0xbfc6,	// (0x0006b1bc) blid2_tripm_pane_g4

0xbfd2,	// (0x0006b1c8) blid2_tripm_pane_g5_ParamLimits

0xbfd2,	// (0x0006b1c8) blid2_tripm_pane_g5

0x0005,

0xfa85,	// (0x0006ec7b) blid2_tripm_pane_g_ParamLimits

0xfa85,	// (0x0006ec7b) blid2_tripm_pane_g

0xbfea,	// (0x0006b1e0) blid2_tripm_pane_t1_ParamLimits

0xbfea,	// (0x0006b1e0) blid2_tripm_pane_t1

0xbffc,	// (0x0006b1f2) blid2_tripm_pane_t2_ParamLimits

0xbffc,	// (0x0006b1f2) blid2_tripm_pane_t2

0xc00e,	// (0x0006b204) blid2_tripm_pane_t3_ParamLimits

0xc00e,	// (0x0006b204) blid2_tripm_pane_t3

0x0003,

0xfa92,	// (0x0006ec88) blid2_tripm_pane_t_ParamLimits

0xfa92,	// (0x0006ec88) blid2_tripm_pane_t

0xc03e,	// (0x0006b234) cell_blid2_satellite_pane_ParamLimits

0xc03e,	// (0x0006b234) cell_blid2_satellite_pane

0xc056,	// (0x0006b24c) cell_blid2_satellite_pane_g1

0x221e,	// (0x00061414) cell_blid2_satellite_pane_t1

0x6699,	// (0x0006588f) blid2_speed_pane_g1

0x222c,	// (0x00061422) blid2_speed_pane_t1

0x223a,	// (0x00061430) blid2_speed_pane_t2

0x0001,

0xfa9b,	// (0x0006ec91) blid2_speed_pane_t

0x6699,	// (0x0006588f) blid2_navig_ring_pane_g1

0xc05f,	// (0x0006b255) blid2_navig_ring_pane_g2

0xc067,	// (0x0006b25d) blid2_navig_ring_pane_g3

0xc06f,	// (0x0006b265) blid2_navig_ring_pane_g4

0xc077,	// (0x0006b26d) blid2_navig_ring_pane_g5

0x0004,

0xfaa0,	// (0x0006ec96) blid2_navig_ring_pane_g

0x0431,	// (0x0005f627) bg_popup_window_pane_cp011

0x2248,	// (0x0006143e) popup_blid2_search_window_g1

0x2250,	// (0x00061446) popup_blid2_search_window_t1

0x225e,	// (0x00061454) popup_blid2_search_window_t2

0x0001,

0xfaab,	// (0x0006eca1) popup_blid2_search_window_t

0x6b90,	// (0x00065d86) main_browser_pane_g1

0x0c30,	// (0x0005fe26) main_browser_pane_ParamLimits

0x8459,	// (0x0006764f) bg_button_pane_cp011_ParamLimits

0xb2f4,	// (0x0006a4ea) cell_vitu2_function_pane_g1_ParamLimits

0xebe2,	// (0x0006ddd8) bg_popup_sub_pane_cp22_ParamLimits

0x4f12,	// (0x00064108) input_focus_pane_cp08_ParamLimits

0xbb03,	// (0x0006acf9) popup_vitu2_query_button_pane_ParamLimits

0xbb03,	// (0x0006acf9) popup_vitu2_query_button_pane

0x4f2d,	// (0x00064123) popup_vitu2_query_input_button_pane

0x1e6f,	// (0x00061065) popup_vitu2_query_window_g1_ParamLimits

0x4f35,	// (0x0006412b) popup_vitu2_query_window_g2_ParamLimits

0xf9ac,	// (0x0006eba2) popup_vitu2_query_window_g_ParamLimits

0x0431,	// (0x0005f627) bg_button_pane_cp026

0xc07f,	// (0x0006b275) popup_vitu2_query_input_button_pane_g1

0x0431,	// (0x0005f627) bg_button_pane_cp025

0x226c,	// (0x00061462) popup_vitu2_query_button_pane_t1

0x9d59,	// (0x00068f4f) main_mp3_pane_t6

0x9d67,	// (0x00068f5d) popup_slider_window_cp01

0xaff6,	// (0x0006a1ec) cam4_battery_pane

0xaff6,	// (0x0006a1ec) cam4_battery_pane_cp02

0xaff6,	// (0x0006a1ec) cam4_battery_pane_cp01

0xaff6,	// (0x0006a1ec) cam4_battery_pane_cp03

0x6699,	// (0x0006588f) cam4_battery_pane_g1

0x106c,	// (0x00060262) cam4_battery_pane_g2

0x0001,

0xfab0,	// (0x0006eca6) cam4_battery_pane_g

0xef01,	// (0x0006e0f7) popup_blid_sat_info2_window_t11

0x8195,	// (0x0006738b) aid_size_touch_mv_arrow_left_ParamLimits

0x81b9,	// (0x000673af) aid_size_touch_mv_arrow_right_ParamLimits

0x8212,	// (0x00067408) navi_pane_g1_ParamLimits

0x821e,	// (0x00067414) navi_pane_g2_ParamLimits

0x8247,	// (0x0006743d) navi_pane_g3_ParamLimits

0xf365,	// (0x0006e55b) navi_pane_g_ParamLimits

0x82f7,	// (0x000674ed) navi_pane_mv_t1_ParamLimits

0xa70f,	// (0x00069905) grid_imed_effect_pane_ParamLimits

0x6791,	// (0x00065987) aid_placing_vt_slider_lsc

0x67a9,	// (0x0006599f) aid_placing_vt_slider_prt

0x8459,	// (0x0006764f) bg_tb_trans_pane_cp01_ParamLimits

0x1196,	// (0x0006038c) popup_image_details_window_g1_ParamLimits

0x11a9,	// (0x0006039f) popup_image_details_window_g2_ParamLimits

0x11be,	// (0x000603b4) popup_image_details_window_g3_ParamLimits

0x11be,	// (0x000603b4) popup_image_details_window_g3

0xf6a4,	// (0x0006e89a) popup_image_details_window_g_ParamLimits

0x11d2,	// (0x000603c8) popup_image_details_window_t1_ParamLimits

0x11e4,	// (0x000603da) popup_image_details_window_t2_ParamLimits

0x11fd,	// (0x000603f3) popup_image_details_window_t3_ParamLimits

0x1211,	// (0x00060407) popup_image_details_window_t4_ParamLimits

0x122c,	// (0x00060422) popup_image_details_window_t5_ParamLimits

0xf6ab,	// (0x0006e8a1) popup_image_details_window_t_ParamLimits

0xbcf0,	// (0x0006aee6) cl_header_name_pane_ParamLimits

0xbcf0,	// (0x0006aee6) cl_header_name_pane

0xc087,	// (0x0006b27d) cl_header_name_pane_t1_ParamLimits

0xc087,	// (0x0006b27d) cl_header_name_pane_t1

0xc09e,	// (0x0006b294) cl_header_name_pane_t2_ParamLimits

0xc09e,	// (0x0006b294) cl_header_name_pane_t2

0xc0c8,	// (0x0006b2be) cl_header_name_pane_t3_ParamLimits

0xc0c8,	// (0x0006b2be) cl_header_name_pane_t3

0x0002,

0xfab5,	// (0x0006ecab) cl_header_name_pane_t_ParamLimits

0xfab5,	// (0x0006ecab) cl_header_name_pane_t

0x82c8,	// (0x000674be) navi_pane_mv_g2_ParamLimits

0x1ba0,	// (0x00060d96) field_vitu2_entry_pane_g1_ParamLimits

0x1bac,	// (0x00060da2) field_vitu2_entry_pane_g2_ParamLimits

0xecc9,	// (0x0006debf) field_vitu2_entry_pane_g3_ParamLimits

0xecc9,	// (0x0006debf) field_vitu2_entry_pane_g3

0xf8ab,	// (0x0006eaa1) field_vitu2_entry_pane_g_ParamLimits

0xb282,	// (0x0006a478) cell_vitu2_itu_pane_g1_ParamLimits

0xb29a,	// (0x0006a490) cell_vitu2_itu_pane_g2_ParamLimits

0xb29a,	// (0x0006a490) cell_vitu2_itu_pane_g2

0x0001,

0xf8b7,	// (0x0006eaad) cell_vitu2_itu_pane_g_ParamLimits

0xf8b7,	// (0x0006eaad) cell_vitu2_itu_pane_g

0x8459,	// (0x0006764f) bg_vkb2_func_pane_cp05_ParamLimits

0x8459,	// (0x0006764f) bg_vkb2_func_pane_cp05

0x8459,	// (0x0006764f) bg_vkb2_func_pane_cp03

0x8459,	// (0x0006764f) bg_vkb2_func_pane_cp04

0x8459,	// (0x0006764f) bg_vkb2_func_pane_cp10_ParamLimits

0x8459,	// (0x0006764f) bg_vkb2_func_pane_cp10

0x50ee,	// (0x000642e4) bg_vkb2_func_pane_cp08

0xbaeb,	// (0x0006ace1) bg_vkb2_func_pane_cp06

0xbca8,	// (0x0006ae9e) bg_vkb2_func_pane_cp07

0x21b1,	// (0x000613a7) bg_vkb2_func_pane_cp11_ParamLimits

0x21b1,	// (0x000613a7) bg_vkb2_func_pane_cp11

0x21c6,	// (0x000613bc) bg_vkb2_func_pane_cp12_ParamLimits

0x21c6,	// (0x000613bc) bg_vkb2_func_pane_cp12

0x0431,	// (0x0005f627) bg_vkb2_func_pane_cp09

0x1be7,	// (0x00060ddd) bg_vkb2_func_pane_g1

0x6ceb,	// (0x00065ee1) bg_vkb2_func_pane_g2

0x1bef,	// (0x00060de5) bg_vkb2_func_pane_g3

0x1bf7,	// (0x00060ded) bg_vkb2_func_pane_g4

0x1e27,	// (0x0006101d) bg_vkb2_func_pane_g5

0x1c0f,	// (0x00060e05) bg_vkb2_func_pane_g6

0x1c17,	// (0x00060e0d) bg_vkb2_func_pane_g7

0x1c07,	// (0x00060dfd) bg_vkb2_func_pane_g8

0x6ccb,	// (0x00065ec1) bg_vkb2_func_pane_g9

0x0008,

0xfabc,	// (0x0006ecb2) bg_vkb2_func_pane_g

0xbfde,	// (0x0006b1d4) blid2_tripm_pane_g6_ParamLimits

0xbfde,	// (0x0006b1d4) blid2_tripm_pane_g6

0x1a82,	// (0x00060c78) mp4_progress_pane_g1

0xc032,	// (0x0006b228) blid2_tripm_values_pane_ParamLimits

0xc032,	// (0x0006b228) blid2_tripm_values_pane

0xc0ed,	// (0x0006b2e3) blid2_tripm_values_pane_t1

0xc0fb,	// (0x0006b2f1) blid2_tripm_values_pane_t2

0xc109,	// (0x0006b2ff) blid2_tripm_values_pane_t3

0xc117,	// (0x0006b30d) blid2_tripm_values_pane_t4

0xc125,	// (0x0006b31b) blid2_tripm_values_pane_t5

0xc133,	// (0x0006b329) blid2_tripm_values_pane_t6

0xc141,	// (0x0006b337) blid2_tripm_values_pane_t7

0xc14f,	// (0x0006b345) blid2_tripm_values_pane_t8

0xc15d,	// (0x0006b353) blid2_tripm_values_pane_t9

0x0008,

0xfacf,	// (0x0006ecc5) blid2_tripm_values_pane_t

0x67d5,	// (0x000659cb) call_video_pane_t1_ParamLimits

0x67f2,	// (0x000659e8) call_video_pane_t2_ParamLimits

0xf1fc,	// (0x0006e3f2) call_video_pane_t_ParamLimits

0x4d15,	// (0x00063f0b) msg_header_pane_g1_ParamLimits

0x86c9,	// (0x000678bf) msg_header_pane_g2_ParamLimits

0x86c9,	// (0x000678bf) msg_header_pane_g2

0x0001,

0xf408,	// (0x0006e5fe) msg_header_pane_g_ParamLimits

0xf408,	// (0x0006e5fe) msg_header_pane_g

0x0c30,	// (0x0005fe26) main_clock2_pane_ParamLimits

0xa4b3,	// (0x000696a9) grid_clock2_toolbar_pane_ParamLimits

0xa4b3,	// (0x000696a9) grid_clock2_toolbar_pane

0xa4b3,	// (0x000696a9) listscroll_clock2_pane_ParamLimits

0xa4b3,	// (0x000696a9) listscroll_clock2_pane

0xa54f,	// (0x00069745) main_clock2_pane_t3_ParamLimits

0xa54f,	// (0x00069745) main_clock2_pane_t3

0xa561,	// (0x00069757) main_clock2_pane_t4_ParamLimits

0xa561,	// (0x00069757) main_clock2_pane_t4

0x227a,	// (0x00061470) cell_clock2_toolbar_pane

0x2282,	// (0x00061478) cell_clock2_toolbar_pane_cp01

0x2282,	// (0x00061478) cell_clock2_toolbar_pane_cp02

0x228a,	// (0x00061480) cell_clock2_toolbar_pane_cp03

0x2292,	// (0x00061488) list_clock2_pane

0x229a,	// (0x00061490) scroll_pane_cp10

0x22a2,	// (0x00061498) list_single_clock2_pane_ParamLimits

0x22a2,	// (0x00061498) list_single_clock2_pane

0x64dd,	// (0x000656d3) list_highlight_pane_cp08

0x22af,	// (0x000614a5) list_single_clock2_pane_t1

0x22bd,	// (0x000614b3) list_single_clock2_pane_t2

0x0001,

0xfae2,	// (0x0006ecd8) list_single_clock2_pane_t

0x0431,	// (0x0005f627) bg_button_pane_cp10

0x22cb,	// (0x000614c1) cell_clock2_toolbar_pane_g1

0x86f5,	// (0x000678eb) aid_main_viewer_pane_g1_ParamLimits

0x86f5,	// (0x000678eb) aid_main_viewer_pane_g1

0x8701,	// (0x000678f7) aid_main_viewer_pane_g2_ParamLimits

0x8701,	// (0x000678f7) aid_main_viewer_pane_g2

0x870d,	// (0x00067903) aid_main_viewer_pane_g3_ParamLimits

0x870d,	// (0x00067903) aid_main_viewer_pane_g3

0x871c,	// (0x00067912) aid_main_viewer_pane_g4_ParamLimits

0x871c,	// (0x00067912) aid_main_viewer_pane_g4

0x0003,

0xf419,	// (0x0006e60f) aid_main_viewer_pane_g_ParamLimits

0xf419,	// (0x0006e60f) aid_main_viewer_pane_g

0x0ba6,	// (0x0005fd9c) main_calc_pane_ParamLimits

0x98a9,	// (0x00068a9f) main_dialer2_pane_ParamLimits

0x0431,	// (0x0005f627) main_cam6_pane

0x0431,	// (0x0005f627) main_vid6_pane

0xa4bf,	// (0x000696b5) listscroll_gen_pane_cp06_ParamLimits

0xa4bf,	// (0x000696b5) listscroll_gen_pane_cp06

0xa573,	// (0x00069769) main_clock2_pane_t5_ParamLimits

0xa573,	// (0x00069769) main_clock2_pane_t5

0xa5bc,	// (0x000697b2) aid_call2_pane_cp10_ParamLimits

0xa5ce,	// (0x000697c4) aid_call_pane_cp10_ParamLimits

0x8124,	// (0x0006731a) popup_clock_analogue_window_cp10_g1_ParamLimits

0x8124,	// (0x0006731a) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa5e0,	// (0x000697d6) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa5e0,	// (0x000697d6) popup_clock_analogue_window_cp10_g4_ParamLimits

0x8124,	// (0x0006731a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf760,	// (0x0006e956) popup_clock_analogue_window_cp10_g_ParamLimits

0xa5f2,	// (0x000697e8) popup_clock_analogue_window_cp10_t1_ParamLimits

0x1ae2,	// (0x00060cd8) cell_dialer2_keypad_pane_g2_ParamLimits

0x1ae2,	// (0x00060cd8) cell_dialer2_keypad_pane_g2

0x0001,

0xf84a,	// (0x0006ea40) cell_dialer2_keypad_pane_g_ParamLimits

0xf84a,	// (0x0006ea40) cell_dialer2_keypad_pane_g

0xac7b,	// (0x00069e71) cell_dialer2_keypad_pane_t1

0xb572,	// (0x0006a768) main_cset_text2_pane_ParamLimits

0xb572,	// (0x0006a768) main_cset_text2_pane

0x2049,	// (0x0006123f) area_vitu2_query_pane_g1_ParamLimits

0x500c,	// (0x00064202) area_vitu2_query_pane_g2_ParamLimits

0xf9ff,	// (0x0006ebf5) area_vitu2_query_pane_g_ParamLimits

0x50bb,	// (0x000642b1) area_vitu2_query_pane_t7_ParamLimits

0x50bb,	// (0x000642b1) area_vitu2_query_pane_t7

0xbaeb,	// (0x0006ace1) bg_button_pane_cp018_ParamLimits

0xbca8,	// (0x0006ae9e) bg_button_pane_cp021_ParamLimits

0x50df,	// (0x000642d5) bg_button_pane_cp022_ParamLimits

0x50ee,	// (0x000642e4) bg_vkb2_func_pane_cp08_ParamLimits

0xbaeb,	// (0x0006ace1) bg_vkb2_func_pane_cp06_ParamLimits

0xbca8,	// (0x0006ae9e) bg_vkb2_func_pane_cp07_ParamLimits

0x50fe,	// (0x000642f4) input_focus_pane_cp09_ParamLimits

0xc16b,	// (0x0006b361) cam6_autofocus_pane_ParamLimits

0xc16b,	// (0x0006b361) cam6_autofocus_pane

0xc187,	// (0x0006b37d) cam6_image_uncrop_pane_ParamLimits

0xc187,	// (0x0006b37d) cam6_image_uncrop_pane

0xc1b3,	// (0x0006b3a9) cam6_indi_pane_ParamLimits

0xc1b3,	// (0x0006b3a9) cam6_indi_pane

0xc1cd,	// (0x0006b3c3) cam6_mode_pane_ParamLimits

0xc1cd,	// (0x0006b3c3) cam6_mode_pane

0xc1e1,	// (0x0006b3d7) cam6_timer_pane_ParamLimits

0xc1e1,	// (0x0006b3d7) cam6_timer_pane

0xc1f5,	// (0x0006b3eb) cam6_zoom_pane_ParamLimits

0xc1f5,	// (0x0006b3eb) cam6_zoom_pane

0xb056,	// (0x0006a24c) cam6_mode_pane_g1_ParamLimits

0xb056,	// (0x0006a24c) cam6_mode_pane_g1

0xc20e,	// (0x0006b404) cam6_mode_pane_g2_ParamLimits

0xc20e,	// (0x0006b404) cam6_mode_pane_g2

0xc21a,	// (0x0006b410) cam6_mode_pane_g3_ParamLimits

0xc21a,	// (0x0006b410) cam6_mode_pane_g3

0xc226,	// (0x0006b41c) cam6_mode_pane_g4_ParamLimits

0xc226,	// (0x0006b41c) cam6_mode_pane_g4

0x0003,

0xfae7,	// (0x0006ecdd) cam6_mode_pane_g_ParamLimits

0xfae7,	// (0x0006ecdd) cam6_mode_pane_g

0xf051,	// (0x0006e247) bg_tb_trans_pane_cp08_ParamLimits

0xf051,	// (0x0006e247) bg_tb_trans_pane_cp08

0x22d3,	// (0x000614c9) cam6_battery_pane_ParamLimits

0x22d3,	// (0x000614c9) cam6_battery_pane

0x22e9,	// (0x000614df) cam6_indi_pane_g1_ParamLimits

0x22e9,	// (0x000614df) cam6_indi_pane_g1

0x22fb,	// (0x000614f1) cam6_indi_pane_g2_ParamLimits

0x22fb,	// (0x000614f1) cam6_indi_pane_g2

0x230d,	// (0x00061503) cam6_indi_pane_g3_ParamLimits

0x230d,	// (0x00061503) cam6_indi_pane_g3

0x0002,

0xfaf0,	// (0x0006ece6) cam6_indi_pane_g_ParamLimits

0xfaf0,	// (0x0006ece6) cam6_indi_pane_g

0x231f,	// (0x00061515) cam6_indi_pane_t1_ParamLimits

0x231f,	// (0x00061515) cam6_indi_pane_t1

0xb0f9,	// (0x0006a2ef) cam6_autofocus_pane_g1

0xb101,	// (0x0006a2f7) cam6_autofocus_pane_g2

0xb109,	// (0x0006a2ff) cam6_autofocus_pane_g3

0xb111,	// (0x0006a307) cam6_autofocus_pane_g4

0x0003,

0xfaf7,	// (0x0006eced) cam6_autofocus_pane_g

0x2345,	// (0x0006153b) cam6_timer_pane_g1

0x234d,	// (0x00061543) cam6_timer_pane_t1

0x235b,	// (0x00061551) cam6_zoom_cont_pane

0x2363,	// (0x00061559) cam6_zoom_pane_g1

0x236c,	// (0x00061562) cam6_zoom_pane_g2

0xc232,	// (0x0006b428) cam6_zoom_pane_g3

0x0002,

0xfb00,	// (0x0006ecf6) cam6_zoom_pane_g

0x6699,	// (0x0006588f) cam6_battery_pane_g1

0x6699,	// (0x0006588f) cam6_battery_pane_g2

0x0001,

0xf3c9,	// (0x0006e5bf) cam6_battery_pane_g

0x2363,	// (0x00061559) cam6_zoom_cont_pane_g1

0x236c,	// (0x00061562) cam6_zoom_cont_pane_g2

0x2375,	// (0x0006156b) cam6_zoom_cont_pane_g3

0x0002,

0xfb07,	// (0x0006ecfd) cam6_zoom_cont_pane_g

0xc250,	// (0x0006b446) cam6_mode_pane_cp_ParamLimits

0xc250,	// (0x0006b446) cam6_mode_pane_cp

0xc264,	// (0x0006b45a) cam6_zoom_pane_cp_ParamLimits

0xc264,	// (0x0006b45a) cam6_zoom_pane_cp

0xc27a,	// (0x0006b470) vid6_image_uncrop_cif_pane_ParamLimits

0xc27a,	// (0x0006b470) vid6_image_uncrop_cif_pane

0xc29c,	// (0x0006b492) vid6_image_uncrop_nhd_pane_ParamLimits

0xc29c,	// (0x0006b492) vid6_image_uncrop_nhd_pane

0xc2b3,	// (0x0006b4a9) vid6_image_uncrop_vga_pane_ParamLimits

0xc2b3,	// (0x0006b4a9) vid6_image_uncrop_vga_pane

0xc2ca,	// (0x0006b4c0) vid6_image_uncrop_wvga_pane_ParamLimits

0xc2ca,	// (0x0006b4c0) vid6_image_uncrop_wvga_pane

0xc2e1,	// (0x0006b4d7) vid6_indi_pane_ParamLimits

0xc2e1,	// (0x0006b4d7) vid6_indi_pane

0xf051,	// (0x0006e247) bg_tb_trans_pane_cp09_ParamLimits

0xf051,	// (0x0006e247) bg_tb_trans_pane_cp09

0x2389,	// (0x0006157f) cam6_battery_pane_cp_ParamLimits

0x2389,	// (0x0006157f) cam6_battery_pane_cp

0x2395,	// (0x0006158b) vid6_indi_pane_g1_ParamLimits

0x2395,	// (0x0006158b) vid6_indi_pane_g1

0x23a7,	// (0x0006159d) vid6_indi_pane_g2_ParamLimits

0x23a7,	// (0x0006159d) vid6_indi_pane_g2

0x23b9,	// (0x000615af) vid6_indi_pane_g3_ParamLimits

0x23b9,	// (0x000615af) vid6_indi_pane_g3

0x23ce,	// (0x000615c4) vid6_indi_pane_g4_ParamLimits

0x23ce,	// (0x000615c4) vid6_indi_pane_g4

0x23e3,	// (0x000615d9) vid6_indi_pane_g5_ParamLimits

0x23e3,	// (0x000615d9) vid6_indi_pane_g5

0x0004,

0xfb0e,	// (0x0006ed04) vid6_indi_pane_g_ParamLimits

0xfb0e,	// (0x0006ed04) vid6_indi_pane_g

0x23fd,	// (0x000615f3) vid6_indi_pane_t1_ParamLimits

0x23fd,	// (0x000615f3) vid6_indi_pane_t1

0x2413,	// (0x00061609) vid6_indi_pane_t2_ParamLimits

0x2413,	// (0x00061609) vid6_indi_pane_t2

0x243b,	// (0x00061631) vid6_indi_pane_t3_ParamLimits

0x243b,	// (0x00061631) vid6_indi_pane_t3

0x2463,	// (0x00061659) vid6_indi_pane_t4_ParamLimits

0x2463,	// (0x00061659) vid6_indi_pane_t4

0x0003,

0xfb19,	// (0x0006ed0f) vid6_indi_pane_t_ParamLimits

0xfb19,	// (0x0006ed0f) vid6_indi_pane_t

0x2487,	// (0x0006167d) wait_bar_pane_cp08

0xc301,	// (0x0006b4f7) main_cset_text2_pane_t1_ParamLimits

0xc301,	// (0x0006b4f7) main_cset_text2_pane_t1

0xc23b,	// (0x0006b431) listscroll_gen_pane_cp06_t1_ParamLimits

0xc23b,	// (0x0006b431) listscroll_gen_pane_cp06_t1

0x0431,	// (0x0005f627) main_cam6_set_pane

0x0b8a,	// (0x0005fd80) bg_tb_trans_pane_cp06_ParamLimits

0xaffe,	// (0x0006a1f4) cam4_indicators_pane_g1_ParamLimits

0xb00e,	// (0x0006a204) cam4_indicators_pane_g2_ParamLimits

0xf887,	// (0x0006ea7d) cam4_indicators_pane_g_ParamLimits

0xb02e,	// (0x0006a224) cam4_indicators_pane_t1_ParamLimits

0x8459,	// (0x0006764f) bg_tb_trans_pane_cp07_ParamLimits

0xaffe,	// (0x0006a1f4) vid4_indicators_pane_g1_ParamLimits

0xb0a2,	// (0x0006a298) vid4_indicators_pane_g2_ParamLimits

0xb0b2,	// (0x0006a2a8) vid4_indicators_pane_g3_ParamLimits

0xb0c3,	// (0x0006a2b9) vid4_indicators_pane_g4_ParamLimits

0xf899,	// (0x0006ea8f) vid4_indicators_pane_g_ParamLimits

0xb0df,	// (0x0006a2d5) vid4_indicators_pane_t1_ParamLimits

0xbdc4,	// (0x0006afba) vid4_progress_pane_g1_ParamLimits

0xbdd3,	// (0x0006afc9) vid4_progress_pane_g2_ParamLimits

0xbde2,	// (0x0006afd8) vid4_progress_pane_g3_ParamLimits

0xbdf1,	// (0x0006afe7) vid4_progress_pane_g4_ParamLimits

0xfa4a,	// (0x0006ec40) vid4_progress_pane_g_ParamLimits

0xbdfd,	// (0x0006aff3) vid4_progress_pane_t1_ParamLimits

0xbe13,	// (0x0006b009) vid4_progress_pane_t2_ParamLimits

0xbe28,	// (0x0006b01e) vid4_progress_pane_t3_ParamLimits

0xfa55,	// (0x0006ec4b) vid4_progress_pane_t_ParamLimits

0xbe3d,	// (0x0006b033) wait_bar_pane_cp07_ParamLimits

0xc31d,	// (0x0006b513) main_cam6_set_pane_g2_ParamLimits

0xc31d,	// (0x0006b513) main_cam6_set_pane_g2

0xc329,	// (0x0006b51f) main_cset6_listscroll_pane_ParamLimits

0xc329,	// (0x0006b51f) main_cset6_listscroll_pane

0xc352,	// (0x0006b548) main_cset6_slider_pane_ParamLimits

0xc352,	// (0x0006b548) main_cset6_slider_pane

0xc35e,	// (0x0006b554) main_cset6_text2_pane_ParamLimits

0xc35e,	// (0x0006b554) main_cset6_text2_pane

0x2497,	// (0x0006168d) main_cset6_text_pane

0x1d03,	// (0x00060ef9) main_cset_list_pane_copy1_ParamLimits

0x1d03,	// (0x00060ef9) main_cset_list_pane_copy1

0x1d13,	// (0x00060f09) scroll_pane_cp028_copy1

0xc371,	// (0x0006b567) cset_list_set_pane_copy1

0x1de6,	// (0x00060fdc) aid_position_infowindow_above_copy1

0x1dee,	// (0x00060fe4) aid_position_infowindow_below_copy1

0xc380,	// (0x0006b576) cset_list_set_pane_g1_copy1

0x5133,	// (0x00064329) cset_list_set_pane_g3_copy1_ParamLimits

0x5133,	// (0x00064329) cset_list_set_pane_g3_copy1

0x5142,	// (0x00064338) cset_list_set_pane_t1_copy1_ParamLimits

0x5142,	// (0x00064338) cset_list_set_pane_t1_copy1

0x8459,	// (0x0006764f) list_highlight_pane_cp021_copy1_ParamLimits

0x8459,	// (0x0006764f) list_highlight_pane_cp021_copy1

0x249f,	// (0x00061695) cset6_slider_pane_ParamLimits

0x249f,	// (0x00061695) cset6_slider_pane

0x24cb,	// (0x000616c1) main_cset6_slider_pane_g1_ParamLimits

0x24cb,	// (0x000616c1) main_cset6_slider_pane_g1

0xc388,	// (0x0006b57e) main_cset6_slider_pane_g2_ParamLimits

0xc388,	// (0x0006b57e) main_cset6_slider_pane_g2

0x1d28,	// (0x00060f1e) main_cset6_slider_pane_g3_ParamLimits

0x1d28,	// (0x00060f1e) main_cset6_slider_pane_g3

0xc3b0,	// (0x0006b5a6) main_cset6_slider_pane_g4_ParamLimits

0xc3b0,	// (0x0006b5a6) main_cset6_slider_pane_g4

0xc3bc,	// (0x0006b5b2) main_cset6_slider_pane_g5_ParamLimits

0xc3bc,	// (0x0006b5b2) main_cset6_slider_pane_g5

0x1d28,	// (0x00060f1e) main_cset6_slider_pane_g7_ParamLimits

0x1d28,	// (0x00060f1e) main_cset6_slider_pane_g7

0x1d34,	// (0x00060f2a) main_cset6_slider_pane_g8_ParamLimits

0x1d34,	// (0x00060f2a) main_cset6_slider_pane_g8

0xc3c8,	// (0x0006b5be) main_cset6_slider_pane_g9_ParamLimits

0xc3c8,	// (0x0006b5be) main_cset6_slider_pane_g9

0xc3d4,	// (0x0006b5ca) main_cset6_slider_pane_g10_ParamLimits

0xc3d4,	// (0x0006b5ca) main_cset6_slider_pane_g10

0xc3b0,	// (0x0006b5a6) main_cset6_slider_pane_g11_ParamLimits

0xc3b0,	// (0x0006b5a6) main_cset6_slider_pane_g11

0xc3e0,	// (0x0006b5d6) main_cset6_slider_pane_g12_ParamLimits

0xc3e0,	// (0x0006b5d6) main_cset6_slider_pane_g12

0xc3ec,	// (0x0006b5e2) main_cset6_slider_pane_g13_ParamLimits

0xc3ec,	// (0x0006b5e2) main_cset6_slider_pane_g13

0xc3f8,	// (0x0006b5ee) main_cset6_slider_pane_g14_ParamLimits

0xc3f8,	// (0x0006b5ee) main_cset6_slider_pane_g14

0xc404,	// (0x0006b5fa) main_cset6_slider_pane_g15_ParamLimits

0xc404,	// (0x0006b5fa) main_cset6_slider_pane_g15

0xc3bc,	// (0x0006b5b2) main_cset6_slider_pane_g16_ParamLimits

0xc3bc,	// (0x0006b5b2) main_cset6_slider_pane_g16

0xc41c,	// (0x0006b612) main_cset6_slider_pane_g17_ParamLimits

0xc41c,	// (0x0006b612) main_cset6_slider_pane_g17

0x0011,

0xfb22,	// (0x0006ed18) main_cset6_slider_pane_g_ParamLimits

0xfb22,	// (0x0006ed18) main_cset6_slider_pane_g

0x24f3,	// (0x000616e9) main_cset6_slider_pane_t1_ParamLimits

0x24f3,	// (0x000616e9) main_cset6_slider_pane_t1

0xc428,	// (0x0006b61e) main_cset6_slider_pane_t2_ParamLimits

0xc428,	// (0x0006b61e) main_cset6_slider_pane_t2

0x2534,	// (0x0006172a) main_cset6_slider_pane_t3_ParamLimits

0x2534,	// (0x0006172a) main_cset6_slider_pane_t3

0xc453,	// (0x0006b649) main_cset6_slider_pane_t4_ParamLimits

0xc453,	// (0x0006b649) main_cset6_slider_pane_t4

0x255f,	// (0x00061755) main_cset6_slider_pane_t5_ParamLimits

0x255f,	// (0x00061755) main_cset6_slider_pane_t5

0x258a,	// (0x00061780) main_cset6_slider_pane_t7_ParamLimits

0x258a,	// (0x00061780) main_cset6_slider_pane_t7

0xc47e,	// (0x0006b674) main_cset6_slider_pane_t8_ParamLimits

0xc47e,	// (0x0006b674) main_cset6_slider_pane_t8

0xc4a2,	// (0x0006b698) main_cset6_slider_pane_t9_ParamLimits

0xc4a2,	// (0x0006b698) main_cset6_slider_pane_t9

0xc4c6,	// (0x0006b6bc) main_cset6_slider_pane_t10_ParamLimits

0xc4c6,	// (0x0006b6bc) main_cset6_slider_pane_t10

0xc4ea,	// (0x0006b6e0) main_cset6_slider_pane_t11_ParamLimits

0xc4ea,	// (0x0006b6e0) main_cset6_slider_pane_t11

0x25c0,	// (0x000617b6) main_cset6_slider_pane_t14_ParamLimits

0x25c0,	// (0x000617b6) main_cset6_slider_pane_t14

0x25f9,	// (0x000617ef) main_cset6_slider_pane_t15_ParamLimits

0x25f9,	// (0x000617ef) main_cset6_slider_pane_t15

0x000b,

0xfb47,	// (0x0006ed3d) main_cset6_slider_pane_t_ParamLimits

0xfb47,	// (0x0006ed3d) main_cset6_slider_pane_t

0x2632,	// (0x00061828) cset_slider_pane_g1_copy1

0x263b,	// (0x00061831) cset_slider_pane_g2_copy1

0x2644,	// (0x0006183a) cset_slider_pane_g3_copy1

0x0431,	// (0x0005f627) bg_popup_sub_pane_cp011_copy1

0x1e7b,	// (0x00061071) main_cset_text_pane_g1_copy1

0x1e83,	// (0x00061079) main_cset_text_pane_t1_copy1

0x1e91,	// (0x00061087) main_cset_text_pane_t2_copy1

0x1e9f,	// (0x00061095) main_cset_text_pane_t3_copy1

0x1ead,	// (0x000610a3) main_cset_text_pane_t4_copy1

0x1ebb,	// (0x000610b1) main_cset_text_pane_t5_copy1

0x1ec9,	// (0x000610bf) main_cset_text_pane_t6_copy1

0x1ed7,	// (0x000610cd) main_cset_text_pane_t7_copy1

0xc50e,	// (0x0006b704) main_cset_text2_pane_t1_copy1

0x8459,	// (0x0006764f) main_ncimui_pane

0x98f4,	// (0x00068aea) popup_query_ncimui_window_ParamLimits

0x98f4,	// (0x00068aea) popup_query_ncimui_window

0x9e93,	// (0x00069089) field_cale_ev2_pane_g4_ParamLimits

0x9e93,	// (0x00069089) field_cale_ev2_pane_g4

0xa983,	// (0x00069b79) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa983,	// (0x00069b79) cell_video_dialer_keypad_pane_g2

0x0001,

0xf821,	// (0x0006ea17) cell_video_dialer_keypad_pane_g_ParamLimits

0xf821,	// (0x0006ea17) cell_video_dialer_keypad_pane_g

0xa99b,	// (0x00069b91) cell_video_dialer_keypad_pane_t1

0x0431,	// (0x0005f627) bg_popup_window_pane_cp012

0xeb2e,	// (0x0006dd24) heading_pane_cp06

0x269d,	// (0x00061893) ncim_query_content_pane

0x0431,	// (0x0005f627) bg_popup_heading_pane_cp01

0x26a5,	// (0x0006189b) ncim_heading_pane_t1

0x26b3,	// (0x000618a9) ncim_indicator_popup_pane

0x26c5,	// (0x000618bb) ncim_query_button_pane

0x26d9,	// (0x000618cf) ncim_query_content_pane_t1

0x26eb,	// (0x000618e1) ncim_query_content_pane_t2

0x0005,

0xfb8b,	// (0x0006ed81) ncim_query_content_pane_t

0x2725,	// (0x0006191b) ncim_query_list_pane

0x2737,	// (0x0006192d) ncim_query_popup_pane

0x26b3,	// (0x000618a9) ncim_indicator_popup_pane_ParamLimits

0xc64f,	// (0x0006b845) ncim_query_content_pane_g1_ParamLimits

0xc64f,	// (0x0006b845) ncim_query_content_pane_g1

0x26d9,	// (0x000618cf) ncim_query_content_pane_t1_ParamLimits

0x26eb,	// (0x000618e1) ncim_query_content_pane_t2_ParamLimits

0xc65b,	// (0x0006b851) ncim_query_content_pane_t3_ParamLimits

0xc65b,	// (0x0006b851) ncim_query_content_pane_t3

0xc678,	// (0x0006b86e) ncim_query_content_pane_t4_ParamLimits

0xc678,	// (0x0006b86e) ncim_query_content_pane_t4

0xc695,	// (0x0006b88b) ncim_query_content_pane_t5_ParamLimits

0xc695,	// (0x0006b88b) ncim_query_content_pane_t5

0x26fd,	// (0x000618f3) ncim_query_content_pane_t6_ParamLimits

0x26fd,	// (0x000618f3) ncim_query_content_pane_t6

0xfb8b,	// (0x0006ed81) ncim_query_content_pane_t_ParamLimits

0x2725,	// (0x0006191b) ncim_query_list_pane_ParamLimits

0x2737,	// (0x0006192d) ncim_query_popup_pane_ParamLimits

0x274b,	// (0x00061941) wait_bar_pane_cp04

0x0431,	// (0x0005f627) input_focus_pane_cp011

0x2753,	// (0x00061949) ncim_query_popup_pane_t1

0x2761,	// (0x00061957) ncim_list_query_list_pane_ParamLimits

0x2761,	// (0x00061957) ncim_list_query_list_pane

0x0431,	// (0x0005f627) bg_button_pane_cp027

0x2774,	// (0x0006196a) ncim_query_button_pane_g1

0x0431,	// (0x0005f627) list_highlight_pane_cp012

0x277e,	// (0x00061974) ncim_list_query_list_pane_g1

0x2786,	// (0x0006197c) ncim_list_query_list_pane_t1

0xb01e,	// (0x0006a214) cam4_indicators_pane_g3_ParamLimits

0xb01e,	// (0x0006a214) cam4_indicators_pane_g3

0xb0cf,	// (0x0006a2c5) vid4_indicators_pane_g5_ParamLimits

0xb0cf,	// (0x0006a2c5) vid4_indicators_pane_g5

0x7b26,	// (0x00066d1c) vid4_progress_pane_g5_ParamLimits

0x7b26,	// (0x00066d1c) vid4_progress_pane_g5

0xc53f,	// (0x0006b735) main_ncimui_pane_g1

0xc5a5,	// (0x0006b79b) ncimui_group_query_pane_ParamLimits

0xc5a5,	// (0x0006b79b) ncimui_group_query_pane

0xc5ed,	// (0x0006b7e3) ncimui_list_pane_ParamLimits

0xc5ed,	// (0x0006b7e3) ncimui_list_pane

0xc612,	// (0x0006b808) ncimui_text_pane_ParamLimits

0xc612,	// (0x0006b808) ncimui_text_pane

0xc6b2,	// (0x0006b8a8) ncimui_text_pane_t1_ParamLimits

0xc6b2,	// (0x0006b8a8) ncimui_text_pane_t1

0x279d,	// (0x00061993) ncimui_list_single_graphic_pane_ParamLimits

0x279d,	// (0x00061993) ncimui_list_single_graphic_pane

0xc6d0,	// (0x0006b8c6) ncimui_query_pane_ParamLimits

0xc6d0,	// (0x0006b8c6) ncimui_query_pane

0x0431,	// (0x0005f627) list_highlight_pane_cp013

0x27ad,	// (0x000619a3) ncim_list_query_list_pane_t1_copy1

0x27bb,	// (0x000619b1) ncim_list_single_graphic_pane_g1

0x27c3,	// (0x000619b9) ncim_query_button_pane_cp01

0x27cf,	// (0x000619c5) ncim_query_entry_pane_ParamLimits

0x27cf,	// (0x000619c5) ncim_query_entry_pane

0x27e2,	// (0x000619d8) ncimui_query_pane_g1

0x27ee,	// (0x000619e4) ncimui_query_pane_t1_ParamLimits

0x27ee,	// (0x000619e4) ncimui_query_pane_t1

0x8459,	// (0x0006764f) input_focus_pane_cp012

0x2807,	// (0x000619fd) ncim_query_entry_pane_t1

0x0c30,	// (0x0005fe26) main_im_pane_ParamLimits

0x8459,	// (0x0006764f) main_mobtv_pane_ParamLimits

0x8459,	// (0x0006764f) main_mobtv_pane

0xc3c8,	// (0x0006b5be) main_cset6_slider_pane_g18_ParamLimits

0xc3c8,	// (0x0006b5be) main_cset6_slider_pane_g18

0xc3ec,	// (0x0006b5e2) main_cset6_slider_pane_g19_ParamLimits

0xc3ec,	// (0x0006b5e2) main_cset6_slider_pane_g19

0xecc9,	// (0x0006debf) bg_main_mobtv_pane_ParamLimits

0xecc9,	// (0x0006debf) bg_main_mobtv_pane

0xc6e0,	// (0x0006b8d6) main_mobtv_info_pane

0xc6e9,	// (0x0006b8df) main_mobtv_loading_pane_ParamLimits

0xc6e9,	// (0x0006b8df) main_mobtv_loading_pane

0x2819,	// (0x00061a0f) main_mobtv_pg_channel_list_pane

0x2823,	// (0x00061a19) main_mobtv_pg_hdr_pane

0xc6f6,	// (0x0006b8ec) main_mobtv_programe_curr_pane_ParamLimits

0xc6f6,	// (0x0006b8ec) main_mobtv_programe_curr_pane

0xc703,	// (0x0006b8f9) main_mobtv_programe_next_pane_ParamLimits

0xc703,	// (0x0006b8f9) main_mobtv_programe_next_pane

0x282c,	// (0x00061a22) popup_mobtv_noti_window

0x6699,	// (0x0006588f) main_tv_pg_hdr_pane_g1

0x2834,	// (0x00061a2a) main_tv_pg_hdr_pane_g2

0x283c,	// (0x00061a32) main_tv_pg_hdr_pane_g3

0x2844,	// (0x00061a3a) main_tv_pg_hdr_pane_g4

0x284c,	// (0x00061a42) main_tv_pg_hdr_pane_g5

0x2854,	// (0x00061a4a) main_tv_pg_hdr_pane_g6

0x285c,	// (0x00061a52) main_tv_pg_hdr_pane_g7

0x2864,	// (0x00061a5a) main_tv_pg_hdr_pane_g8

0x286c,	// (0x00061a62) main_tv_pg_hdr_pane_g9

0x2874,	// (0x00061a6a) main_tv_pg_hdr_pane_g10

0x287e,	// (0x00061a74) main_tv_pg_hdr_pane_g11

0x000a,

0xfb98,	// (0x0006ed8e) main_tv_pg_hdr_pane_g

0x2888,	// (0x00061a7e) main_tv_pg_hdr_pane_t1

0x2896,	// (0x00061a8c) main_tv_pg_hdr_pane_t2

0x28a4,	// (0x00061a9a) main_tv_pg_hdr_pane_t3

0x28b2,	// (0x00061aa8) main_tv_pg_hdr_pane_t4

0x28c0,	// (0x00061ab6) main_tv_pg_hdr_pane_t5

0x0004,

0xfbaf,	// (0x0006eda5) main_tv_pg_hdr_pane_t

0x28ce,	// (0x00061ac4) single_mobtv_pg_channel_pane_ParamLimits

0x28ce,	// (0x00061ac4) single_mobtv_pg_channel_pane

0x28e0,	// (0x00061ad6) single_mobtv_pg_channel_table_pane

0x28e9,	// (0x00061adf) single_mobtv_pg_channel_thumb_pane

0x28f2,	// (0x00061ae8) single_tv_pg_channel_pane_g1

0x28fb,	// (0x00061af1) single_tv_pg_channel_pane_g2

0x0001,

0xfbba,	// (0x0006edb0) single_tv_pg_channel_pane_g

0x0b8a,	// (0x0005fd80) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0b8a,	// (0x0005fd80) bg_single_mobtv_pg_channel_thumb_pane

0x2904,	// (0x00061afa) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2904,	// (0x00061afa) single_mobtv_pg_channel_thumb_pane_g1

0x2912,	// (0x00061b08) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2912,	// (0x00061b08) single_mobtv_pg_channel_thumb_pane_g2

0x291e,	// (0x00061b14) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x291e,	// (0x00061b14) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbbf,	// (0x0006edb5) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbbf,	// (0x0006edb5) single_mobtv_pg_channel_thumb_pane_g

0x292a,	// (0x00061b20) single_mobtv_pg_channel_thumb_pane_t1

0x2938,	// (0x00061b2e) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbc6,	// (0x0006edbc) single_mobtv_pg_channel_thumb_pane_t

0x6699,	// (0x0006588f) bg_single_mobtv_pg_channel_table_pane_g1

0x6699,	// (0x0006588f) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c9,	// (0x0006e5bf) bg_single_mobtv_pg_channel_table_pane_g

0x2946,	// (0x00061b3c) single_mobtv_pg_channel_table_pane_t1

0x2954,	// (0x00061b4a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbcb,	// (0x0006edc1) single_mobtv_pg_channel_table_pane_t

0xc718,	// (0x0006b90e) main_mobtv_info_pane_g1_ParamLimits

0xc718,	// (0x0006b90e) main_mobtv_info_pane_g1

0xc734,	// (0x0006b92a) main_mobtv_info_pane_t1_ParamLimits

0xc734,	// (0x0006b92a) main_mobtv_info_pane_t1

0xc79a,	// (0x0006b990) main_mobtv_info_pane_t2_ParamLimits

0xc79a,	// (0x0006b990) main_mobtv_info_pane_t2

0x0002,

0xfbd5,	// (0x0006edcb) main_mobtv_info_pane_t_ParamLimits

0xfbd5,	// (0x0006edcb) main_mobtv_info_pane_t

0xc81d,	// (0x0006ba13) wait_bar_pane_cp05

0xc82d,	// (0x0006ba23) main_mobtv_loading_pane_g1_ParamLimits

0xc82d,	// (0x0006ba23) main_mobtv_loading_pane_g1

0xc839,	// (0x0006ba2f) main_mobtv_loading_pane_g2_ParamLimits

0xc839,	// (0x0006ba2f) main_mobtv_loading_pane_g2

0xc845,	// (0x0006ba3b) main_mobtv_loading_pane_g3_ParamLimits

0xc845,	// (0x0006ba3b) main_mobtv_loading_pane_g3

0x0002,

0xfbdc,	// (0x0006edd2) main_mobtv_loading_pane_g_ParamLimits

0xfbdc,	// (0x0006edd2) main_mobtv_loading_pane_g

0x2962,	// (0x00061b58) main_mobtv_loading_pane_t1_ParamLimits

0x2962,	// (0x00061b58) main_mobtv_loading_pane_t1

0x297a,	// (0x00061b70) main_mobtv_loading_pane_t2_ParamLimits

0x297a,	// (0x00061b70) main_mobtv_loading_pane_t2

0x0001,

0xfbe3,	// (0x0006edd9) main_mobtv_loading_pane_t_ParamLimits

0xfbe3,	// (0x0006edd9) main_mobtv_loading_pane_t

0xc851,	// (0x0006ba47) wait_bar_pane_cp06_ParamLimits

0xc851,	// (0x0006ba47) wait_bar_pane_cp06

0x299e,	// (0x00061b94) main_mobtv_programe_curr_pane_t1

0x29ac,	// (0x00061ba2) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbe8,	// (0x0006edde) main_mobtv_programe_curr_pane_t

0x29ba,	// (0x00061bb0) main_mobtv_programe_next_pane_t1

0x29c8,	// (0x00061bbe) main_mobtv_programe_next_pane_t2

0x29d6,	// (0x00061bcc) main_mobtv_programe_next_pane_t3

0x0002,

0xfbed,	// (0x0006ede3) main_mobtv_programe_next_pane_t

0x0431,	// (0x0005f627) bg_popup_mobtv_noti_window_pane

0x29e4,	// (0x00061bda) popup_mobtv_noti_window_g1

0x29ec,	// (0x00061be2) popup_mobtv_noti_window_t1

0x29fa,	// (0x00061bf0) popup_mobtv_noti_window_t2

0x0001,

0xfbf4,	// (0x0006edea) popup_mobtv_noti_window_t

0x6699,	// (0x0006588f) bg_popup_mobtv_noti_window_pane_g1

0x0431,	// (0x0005f627) sc_clock_pane

0x0431,	// (0x0005f627) main_fs_bigclock_pane

0xc020,	// (0x0006b216) blid2_tripm_pane_t4_ParamLimits

0xc020,	// (0x0006b216) blid2_tripm_pane_t4

0xc85d,	// (0x0006ba53) sc_clock_pane_g1_ParamLimits

0xc85d,	// (0x0006ba53) sc_clock_pane_g1

0xc86b,	// (0x0006ba61) sc_clock_pane_t1_ParamLimits

0xc86b,	// (0x0006ba61) sc_clock_pane_t1

0xc87e,	// (0x0006ba74) sc_clock_pane_t2_ParamLimits

0xc87e,	// (0x0006ba74) sc_clock_pane_t2

0xc890,	// (0x0006ba86) sc_clock_pane_t3_ParamLimits

0xc890,	// (0x0006ba86) sc_clock_pane_t3

0x0004,

0xfbf9,	// (0x0006edef) sc_clock_pane_t_ParamLimits

0xfbf9,	// (0x0006edef) sc_clock_pane_t

0xd162,	// (0x0006c358) main_fs_bigclock_indicator_pane_ParamLimits

0xd162,	// (0x0006c358) main_fs_bigclock_indicator_pane

0xc90b,	// (0x0006bb01) main_fs_bigclock_pane_g1_ParamLimits

0xc90b,	// (0x0006bb01) main_fs_bigclock_pane_g1

0xd16e,	// (0x0006c364) main_fs_bigclock_pane_t1_ParamLimits

0xd16e,	// (0x0006c364) main_fs_bigclock_pane_t1

0xd180,	// (0x0006c376) main_fs_bigclock_pane_t2_ParamLimits

0xd180,	// (0x0006c376) main_fs_bigclock_pane_t2

0xd192,	// (0x0006c388) main_fs_bigclock_pane_t3_ParamLimits

0xd192,	// (0x0006c388) main_fs_bigclock_pane_t3

0x0002,

0xfdc2,	// (0x0006efb8) main_fs_bigclock_pane_t_ParamLimits

0xfdc2,	// (0x0006efb8) main_fs_bigclock_pane_t

0x34e5,	// (0x000626db) main_fs_bigclock_indicator_pane_g1

0x26cd,	// (0x000618c3) ncim_query_content_pane_g2_ParamLimits

0x26cd,	// (0x000618c3) ncim_query_content_pane_g2

0x0001,

0xfb86,	// (0x0006ed7c) ncim_query_content_pane_g_ParamLimits

0xfb86,	// (0x0006ed7c) ncim_query_content_pane_g

0xc8a2,	// (0x0006ba98) sc_clock_pane_t4_ParamLimits

0xc8a2,	// (0x0006ba98) sc_clock_pane_t4

0x8459,	// (0x0006764f) main_radioblah_pane

0xaecb,	// (0x0006a0c1) cell_call4_button_pane_t1_copy1_ParamLimits

0xaecb,	// (0x0006a0c1) cell_call4_button_pane_t1_copy1

0xc557,	// (0x0006b74d) main_ncimui_pane_t1_ParamLimits

0xc557,	// (0x0006b74d) main_ncimui_pane_t1

0xc571,	// (0x0006b767) main_ncimui_pane_t2_ParamLimits

0xc571,	// (0x0006b767) main_ncimui_pane_t2

0x0002,

0xfb7f,	// (0x0006ed75) main_ncimui_pane_t_ParamLimits

0xfb7f,	// (0x0006ed75) main_ncimui_pane_t

0x2b3b,	// (0x00061d31) main_radioblah_anim_pane_ParamLimits

0x2b3b,	// (0x00061d31) main_radioblah_anim_pane

0x2b4c,	// (0x00061d42) main_radioblah_info_pane_ParamLimits

0x2b4c,	// (0x00061d42) main_radioblah_info_pane

0x2b60,	// (0x00061d56) main_radioblah_pane_t1_ParamLimits

0x2b60,	// (0x00061d56) main_radioblah_pane_t1

0x2b7c,	// (0x00061d72) main_radioblah_pane_t2_ParamLimits

0x2b7c,	// (0x00061d72) main_radioblah_pane_t2

0x0003,

0xfc1a,	// (0x0006ee10) main_radioblah_pane_t_ParamLimits

0xfc1a,	// (0x0006ee10) main_radioblah_pane_t

0xc953,	// (0x0006bb49) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc953,	// (0x0006bb49) main_radioblah_rocker_ctrl_pane

0x2bc4,	// (0x00061dba) main_radioblah_info_pane_t1_ParamLimits

0x2bc4,	// (0x00061dba) main_radioblah_info_pane_t1

0xc998,	// (0x0006bb8e) main_radioblah_info_pane_t2_ParamLimits

0xc998,	// (0x0006bb8e) main_radioblah_info_pane_t2

0x0003,

0xfc23,	// (0x0006ee19) main_radioblah_info_pane_t_ParamLimits

0xfc23,	// (0x0006ee19) main_radioblah_info_pane_t

0x6699,	// (0x0006588f) main_radioblah_rocker_ctrl_pane_g1

0xca40,	// (0x0006bc36) main_radioblah_rocker_ctrl_pane_g2

0xca48,	// (0x0006bc3e) main_radioblah_rocker_ctrl_pane_g3

0xca50,	// (0x0006bc46) main_radioblah_rocker_ctrl_pane_g4

0xca58,	// (0x0006bc4e) main_radioblah_rocker_ctrl_pane_g5

0xca60,	// (0x0006bc56) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2c,	// (0x0006ee22) main_radioblah_rocker_ctrl_pane_g

0xc50e,	// (0x0006b704) main_cset_text2_pane_t1_copy1_ParamLimits

0xaf4e,	// (0x0006a144) cam4_image_uncrop_qvga_pane

0xb062,	// (0x0006a258) vid4_image_uncrop_qcif_pane

0xc1a7,	// (0x0006b39d) cam6_image_uncrop_qvga_pane_ParamLimits

0xc1a7,	// (0x0006b39d) cam6_image_uncrop_qvga_pane

0x237d,	// (0x00061573) vid6_image_uncrop_qcif_pane_ParamLimits

0x237d,	// (0x00061573) vid6_image_uncrop_qcif_pane

0x0431,	// (0x0005f627) bg_popup_preview_window_pane_cp03

0x2673,	// (0x00061869) list_cset_text2_pane

0x267b,	// (0x00061871) main_cset6_text2_pane_g1

0x2683,	// (0x00061879) main_cset6_text2_pane_t1

0x38b4,	// (0x00062aaa) list_cset_text2_pane_t1_ParamLimits

0x38b4,	// (0x00062aaa) list_cset_text2_pane_t1

0x8459,	// (0x0006764f) main_radioblah_pane_ParamLimits

0xc80b,	// (0x0006ba01) main_mobtv_info_pane_t3_ParamLimits

0xc80b,	// (0x0006ba01) main_mobtv_info_pane_t3

0xc941,	// (0x0006bb37) main_radioblah_pane_g1

0xc96c,	// (0x0006bb62) main_radioblah_info_pane_g1

0xc9e7,	// (0x0006bbdd) main_radioblah_info_pane_t3_ParamLimits

0xc9e7,	// (0x0006bbdd) main_radioblah_info_pane_t3

0x7833,	// (0x00066a29) highlight_cell_cale_month_pane_ParamLimits

0x7833,	// (0x00066a29) highlight_cell_cale_month_pane

0x0431,	// (0x0005f627) main_phob_fisheye_pane

0x13aa,	// (0x000605a0) scroll_pane_cp0031_ParamLimits

0x13aa,	// (0x000605a0) scroll_pane_cp0031

0x2487,	// (0x0006167d) wait_bar_pane_cp08_ParamLimits

0xc371,	// (0x0006b567) cset_list_set_pane_copy1_ParamLimits

0x2bfe,	// (0x00061df4) highlight_cell_cale_month_pane_g1

0xca68,	// (0x0006bc5e) highlight_cell_cale_month_pane_t1

0x2c06,	// (0x00061dfc) list_gen_pane_cp01

0x1d13,	// (0x00060f09) scroll_pane_01

0xca76,	// (0x0006bc6c) list_single_double_fisheye_pane

0x5187,	// (0x0006437d) list_double_fisheye_pane_g1_ParamLimits

0x5187,	// (0x0006437d) list_double_fisheye_pane_g1

0xca7f,	// (0x0006bc75) list_double_fisheye_pane_g2_ParamLimits

0xca7f,	// (0x0006bc75) list_double_fisheye_pane_g2

0xca93,	// (0x0006bc89) list_double_fisheye_pane_g3_ParamLimits

0xca93,	// (0x0006bc89) list_double_fisheye_pane_g3

0x0004,

0xfc39,	// (0x0006ee2f) list_double_fisheye_pane_g_ParamLimits

0xfc39,	// (0x0006ee2f) list_double_fisheye_pane_g

0x519f,	// (0x00064395) list_double_fisheye_pane_t1_ParamLimits

0x519f,	// (0x00064395) list_double_fisheye_pane_t1

0x51ba,	// (0x000643b0) list_double_fisheye_pane_t2_ParamLimits

0x51ba,	// (0x000643b0) list_double_fisheye_pane_t2

0x0001,

0xfc44,	// (0x0006ee3a) list_double_fisheye_pane_t_ParamLimits

0xfc44,	// (0x0006ee3a) list_double_fisheye_pane_t

0x0431,	// (0x0005f627) main_call5_pane

0xc8c8,	// (0x0006babe) sc_swipe_pane_ParamLimits

0xc8c8,	// (0x0006babe) sc_swipe_pane

0xcabc,	// (0x0006bcb2) call5_image_pane_ParamLimits

0xcabc,	// (0x0006bcb2) call5_image_pane

0xcac8,	// (0x0006bcbe) call5_swipe_1_pane_ParamLimits

0xcac8,	// (0x0006bcbe) call5_swipe_1_pane

0xcad4,	// (0x0006bcca) call5_swipe_2_pane_ParamLimits

0xcad4,	// (0x0006bcca) call5_swipe_2_pane

0xcaec,	// (0x0006bce2) popup_call5_audio_first_window_ParamLimits

0xcaec,	// (0x0006bce2) popup_call5_audio_first_window

0x0b8a,	// (0x0005fd80) call5_swipe_1_pane_g1_ParamLimits

0x0b8a,	// (0x0005fd80) call5_swipe_1_pane_g1

0x2c89,	// (0x00061e7f) call5_swipe_1_pane_g2_ParamLimits

0x2c89,	// (0x00061e7f) call5_swipe_1_pane_g2

0x0001,

0xfc49,	// (0x0006ee3f) call5_swipe_1_pane_g_ParamLimits

0xfc49,	// (0x0006ee3f) call5_swipe_1_pane_g

0x2c95,	// (0x00061e8b) call5_swipe_1_pane_t1_ParamLimits

0x2c95,	// (0x00061e8b) call5_swipe_1_pane_t1

0x0b8a,	// (0x0005fd80) call5_swipe_2_pane_g1_ParamLimits

0x0b8a,	// (0x0005fd80) call5_swipe_2_pane_g1

0x2caa,	// (0x00061ea0) call5_swipe_2_pane_g2_ParamLimits

0x2caa,	// (0x00061ea0) call5_swipe_2_pane_g2

0x0001,

0xfc4e,	// (0x0006ee44) call5_swipe_2_pane_g_ParamLimits

0xfc4e,	// (0x0006ee44) call5_swipe_2_pane_g

0x2cb6,	// (0x00061eac) call5_swipe_2_pane_t1_ParamLimits

0x2cb6,	// (0x00061eac) call5_swipe_2_pane_t1

0x2ccb,	// (0x00061ec1) sc_swipe_pane_g1_ParamLimits

0x2ccb,	// (0x00061ec1) sc_swipe_pane_g1

0x2cd8,	// (0x00061ece) sc_swipe_pane_g2_ParamLimits

0x2cd8,	// (0x00061ece) sc_swipe_pane_g2

0x0001,

0xfc53,	// (0x0006ee49) sc_swipe_pane_g_ParamLimits

0xfc53,	// (0x0006ee49) sc_swipe_pane_g

0x2ce4,	// (0x00061eda) sc_swipe_pane_t1_ParamLimits

0x2ce4,	// (0x00061eda) sc_swipe_pane_t1

0x0431,	// (0x0005f627) main_cmail_launcher_pane

0xcaf8,	// (0x0006bcee) aid_size_cell_cmail_l_ParamLimits

0xcaf8,	// (0x0006bcee) aid_size_cell_cmail_l

0xcb08,	// (0x0006bcfe) grid_cmail_l_pane_ParamLimits

0xcb08,	// (0x0006bcfe) grid_cmail_l_pane

0xcb14,	// (0x0006bd0a) cell_cmail_l_pane_ParamLimits

0xcb14,	// (0x0006bd0a) cell_cmail_l_pane

0xcb26,	// (0x0006bd1c) cell_cmail_l_pane_g1_ParamLimits

0xcb26,	// (0x0006bd1c) cell_cmail_l_pane_g1

0xcb36,	// (0x0006bd2c) cell_cmail_l_pane_t1_ParamLimits

0xcb36,	// (0x0006bd2c) cell_cmail_l_pane_t1

0x2cf9,	// (0x00061eef) cell_cmail_l_pane_t2_ParamLimits

0x2cf9,	// (0x00061eef) cell_cmail_l_pane_t2

0x0001,

0xfc58,	// (0x0006ee4e) cell_cmail_l_pane_t_ParamLimits

0xfc58,	// (0x0006ee4e) cell_cmail_l_pane_t

0x8459,	// (0x0006764f) grid_highlight_pane_cp018_ParamLimits

0x8459,	// (0x0006764f) grid_highlight_pane_cp018

0x59e7,	// (0x00064bdd) main2_pane_ParamLimits

0x59e7,	// (0x00064bdd) main2_pane

0x0d29,	// (0x0005ff1f) popup_sp_fs_action_menu_bg_pane_g1

0x0d31,	// (0x0005ff27) popup_sp_fs_action_menu_bg_pane_g2

0x0d39,	// (0x0005ff2f) popup_sp_fs_action_menu_bg_pane_g3

0x0d41,	// (0x0005ff37) popup_sp_fs_action_menu_bg_pane_g4

0x0d49,	// (0x0005ff3f) popup_sp_fs_action_menu_bg_pane_g5

0x0d51,	// (0x0005ff47) popup_sp_fs_action_menu_bg_pane_g6

0x0d59,	// (0x0005ff4f) popup_sp_fs_action_menu_bg_pane_g7

0x0d61,	// (0x0005ff57) popup_sp_fs_action_menu_bg_pane_g8

0x0d69,	// (0x0005ff5f) popup_sp_fs_action_menu_bg_pane_g9

0x0d71,	// (0x0005ff67) popup_sp_fs_action_menu_bg_pane_g10

0x0d71,	// (0x0005ff67) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf11f,	// (0x0006e315) popup_sp_fs_action_menu_bg_pane_g

0x4c8b,	// (0x00063e81) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x2_t3_g3_g1

0x66ea,	// (0x000658e0) list_medium_line_x2_t3_g3_g2_ParamLimits

0x66ea,	// (0x000658e0) list_medium_line_x2_t3_g3_g2

0x4c8b,	// (0x00063e81) list_medium_line_x2_t3_g3_g3_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1cd,	// (0x0006e3c3) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1cd,	// (0x0006e3c3) list_medium_line_x2_t3_g3_g

0x4c97,	// (0x00063e8d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x2_t3_g3_t1

0x4c97,	// (0x00063e8d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x2_t3_g3_t2

0x4caa,	// (0x00063ea0) list_medium_line_x2_t3_g3_t3_ParamLimits

0x4caa,	// (0x00063ea0) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1d4,	// (0x0006e3ca) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1d4,	// (0x0006e3ca) list_medium_line_x2_t3_g3_t

0x4c8b,	// (0x00063e81) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x2_t3_g2_g1

0x4c8b,	// (0x00063e81) list_medium_line_x2_t3_g2_g2_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1db,	// (0x0006e3d1) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1db,	// (0x0006e3d1) list_medium_line_x2_t3_g2_g

0x4c97,	// (0x00063e8d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x2_t3_g2_t1

0x4c97,	// (0x00063e8d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x2_t3_g2_t2

0x4caa,	// (0x00063ea0) list_medium_line_x2_t3_g2_t3_ParamLimits

0x4caa,	// (0x00063ea0) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1d4,	// (0x0006e3ca) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1d4,	// (0x0006e3ca) list_medium_line_x2_t3_g2_t

0x4c8b,	// (0x00063e81) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x2_t4_g4_g1

0x66ea,	// (0x000658e0) list_medium_line_x2_t4_g4_g2_ParamLimits

0x66ea,	// (0x000658e0) list_medium_line_x2_t4_g4_g2

0x66ea,	// (0x000658e0) list_medium_line_x2_t4_g4_g3_ParamLimits

0x66ea,	// (0x000658e0) list_medium_line_x2_t4_g4_g3

0x4c8b,	// (0x00063e81) list_medium_line_x2_t4_g4_g4_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1e0,	// (0x0006e3d6) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1e0,	// (0x0006e3d6) list_medium_line_x2_t4_g4_g

0x4c97,	// (0x00063e8d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x2_t4_g4_t1

0x4c97,	// (0x00063e8d) list_medium_line_x2_t4_g4_t2_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x2_t4_g4_t2

0x4c97,	// (0x00063e8d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x2_t4_g4_t3

0x4caa,	// (0x00063ea0) list_medium_line_x2_t4_g4_t4_ParamLimits

0x4caa,	// (0x00063ea0) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1e9,	// (0x0006e3df) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1e9,	// (0x0006e3df) list_medium_line_x2_t4_g4_t

0x4c8b,	// (0x00063e81) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x2_t2_g4_g1

0x66ea,	// (0x000658e0) list_medium_line_x2_t2_g4_g2_ParamLimits

0x66ea,	// (0x000658e0) list_medium_line_x2_t2_g4_g2

0x66ea,	// (0x000658e0) list_medium_line_x2_t2_g4_g3_ParamLimits

0x66ea,	// (0x000658e0) list_medium_line_x2_t2_g4_g3

0x4c8b,	// (0x00063e81) list_medium_line_x2_t2_g4_g4_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1e0,	// (0x0006e3d6) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1e0,	// (0x0006e3d6) list_medium_line_x2_t2_g4_g

0x4c97,	// (0x00063e8d) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x2_t2_g4_t1

0x4caa,	// (0x00063ea0) list_medium_line_x2_t2_g4_t2_ParamLimits

0x4caa,	// (0x00063ea0) list_medium_line_x2_t2_g4_t2

0x0001,

0xf250,	// (0x0006e446) list_medium_line_x2_t2_g4_t_ParamLimits

0xf250,	// (0x0006e446) list_medium_line_x2_t2_g4_t

0x4c8b,	// (0x00063e81) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x2_t2_g3_g1

0x66ea,	// (0x000658e0) list_medium_line_x2_t2_g3_g2_ParamLimits

0x66ea,	// (0x000658e0) list_medium_line_x2_t2_g3_g2

0x4c8b,	// (0x00063e81) list_medium_line_x2_t2_g3_g3_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1cd,	// (0x0006e3c3) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1cd,	// (0x0006e3c3) list_medium_line_x2_t2_g3_g

0x4c97,	// (0x00063e8d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x2_t2_g3_t1

0x4caa,	// (0x00063ea0) list_medium_line_x2_t2_g3_t2_ParamLimits

0x4caa,	// (0x00063ea0) list_medium_line_x2_t2_g3_t2

0x0001,

0xf250,	// (0x0006e446) list_medium_line_x2_t2_g3_t_ParamLimits

0xf250,	// (0x0006e446) list_medium_line_x2_t2_g3_t

0x7bd7,	// (0x00066dcd) main_sp_fs_list_pane_ParamLimits

0x7bd7,	// (0x00066dcd) main_sp_fs_list_pane

0x7be4,	// (0x00066dda) sp_fs_scroll_pane_ParamLimits

0x7be4,	// (0x00066dda) sp_fs_scroll_pane

0x4cbd,	// (0x00063eb3) list_medium_line_x2_t3_t1

0x4cbd,	// (0x00063eb3) list_medium_line_x2_t3_t2

0x2f0c,	// (0x00062102) list_medium_line_x2_t3_t3

0x0002,

0xf29b,	// (0x0006e491) list_medium_line_x2_t3_t

0x4cbd,	// (0x00063eb3) list_medium_line_x3_t4_t1

0x4cbd,	// (0x00063eb3) list_medium_line_x3_t4_t2

0x4cbd,	// (0x00063eb3) list_medium_line_x3_t4_t3

0x4cbd,	// (0x00063eb3) list_medium_line_x3_t4_t4

0x0003,

0xf2a2,	// (0x0006e498) list_medium_line_x3_t4_t

0x4cbd,	// (0x00063eb3) list_medium_line_x4_t5_t1

0x4cbd,	// (0x00063eb3) list_medium_line_x4_t5_t2

0x4cbd,	// (0x00063eb3) list_medium_line_x4_t5_t3

0x4cbd,	// (0x00063eb3) list_medium_line_x4_t5_t4

0x4cbd,	// (0x00063eb3) list_medium_line_x4_t5_t5

0x0004,

0xf2ab,	// (0x0006e4a1) list_medium_line_x4_t5_t

0x4c8b,	// (0x00063e81) list_medium_line_t4_g4_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_t4_g4_g1

0x4c8b,	// (0x00063e81) list_medium_line_t4_g4_g2_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_t4_g4_g2

0x4c8b,	// (0x00063e81) list_medium_line_t4_g4_g3_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_t4_g4_g3

0x4c8b,	// (0x00063e81) list_medium_line_t4_g4_g4_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_t4_g4_g4

0x0003,

0xf2b6,	// (0x0006e4ac) list_medium_line_t4_g4_g_ParamLimits

0xf2b6,	// (0x0006e4ac) list_medium_line_t4_g4_g

0x4c97,	// (0x00063e8d) list_medium_line_t4_g4_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t4_g4_t1

0x4c97,	// (0x00063e8d) list_medium_line_t4_g4_t2_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t4_g4_t2

0x4c97,	// (0x00063e8d) list_medium_line_t4_g4_t3_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t4_g4_t3

0x4c97,	// (0x00063e8d) list_medium_line_t4_g4_t4_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t4_g4_t4

0x0003,

0xf2bf,	// (0x0006e4b5) list_medium_line_t4_g4_t_ParamLimits

0xf2bf,	// (0x0006e4b5) list_medium_line_t4_g4_t

0x7f3d,	// (0x00067133) chi_dic_find_pane_g1

0x98b7,	// (0x00068aad) main_tport_pane

0x4cbd,	// (0x00063eb3) list_medium_line_plain_t1

0x4c8b,	// (0x00063e81) list_medium_line_t2_g2_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_t2_g2_g1

0xb9c0,	// (0x0006abb6) list_medium_line_t2_g2_g2_ParamLimits

0xb9c0,	// (0x0006abb6) list_medium_line_t2_g2_g2

0x0001,

0xf990,	// (0x0006eb86) list_medium_line_t2_g2_g_ParamLimits

0xf990,	// (0x0006eb86) list_medium_line_t2_g2_g

0x4c97,	// (0x00063e8d) list_medium_line_t2_g2_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t2_g2_t1

0x4c97,	// (0x00063e8d) list_medium_line_t2_g2_t2_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t2_g2_t2

0x0001,

0xf995,	// (0x0006eb8b) list_medium_line_t2_g2_t_ParamLimits

0xf995,	// (0x0006eb8b) list_medium_line_t2_g2_t

0x510e,	// (0x00064304) aid_sp_fs_list_icon_a_sm

0xbe4d,	// (0x0006b043) aid_sp_fs_list_icon_d

0x5116,	// (0x0006430c) aid_sp_fs_text_primary

0xbe55,	// (0x0006b04b) aid_sp_fs_text_secondary

0x216d,	// (0x00061363) list_medium_line

0x216d,	// (0x00061363) list_medium_line_g2

0x216d,	// (0x00061363) list_medium_line_g3

0x216d,	// (0x00061363) list_medium_line_plain

0x216d,	// (0x00061363) list_medium_line_plain_t2

0x216d,	// (0x00061363) list_medium_line_plain_t3

0x216d,	// (0x00061363) list_medium_line_right_icon

0x216d,	// (0x00061363) list_medium_line_right_iconx2

0x216d,	// (0x00061363) list_medium_line_t2

0x216d,	// (0x00061363) list_medium_line_t2_g2

0x216d,	// (0x00061363) list_medium_line_t2_g3

0x216d,	// (0x00061363) list_medium_line_t2_right_icon

0x216d,	// (0x00061363) list_medium_line_t2_right_iconx2

0x216d,	// (0x00061363) list_medium_line_t3

0x216d,	// (0x00061363) list_medium_line_t3_g2

0x216d,	// (0x00061363) list_medium_line_t3_g3

0x216d,	// (0x00061363) list_medium_line_t3_right_iconx2

0xbe5e,	// (0x0006b054) list_medium_line_t4_g4

0xbe67,	// (0x0006b05d) list_medium_line_x2

0xbe67,	// (0x0006b05d) list_medium_line_x2_t2_g2

0xbe67,	// (0x0006b05d) list_medium_line_x2_t2_g3

0xbe67,	// (0x0006b05d) list_medium_line_x2_t2_g4

0xbe67,	// (0x0006b05d) list_medium_line_x2_t3

0xbe67,	// (0x0006b05d) list_medium_line_x2_t3_g2

0xbe67,	// (0x0006b05d) list_medium_line_x2_t3_g3

0xbe67,	// (0x0006b05d) list_medium_line_x2_t3_g4

0xbe67,	// (0x0006b05d) list_medium_line_x2_t4_g2

0xbe67,	// (0x0006b05d) list_medium_line_x2_t4_g4

0xbe70,	// (0x0006b066) list_medium_line_x3

0xbe70,	// (0x0006b066) list_medium_line_x3_t4

0xbe70,	// (0x0006b066) list_medium_line_x3_t4_g4

0xbe5e,	// (0x0006b054) list_medium_line_x4_t4

0xbe5e,	// (0x0006b054) list_medium_line_x4_t4_g7

0xbe5e,	// (0x0006b054) list_medium_line_x4_t5

0x511f,	// (0x00064315) list_single_fs_dyc_pane_ParamLimits

0x511f,	// (0x00064315) list_single_fs_dyc_pane

0x4c8b,	// (0x00063e81) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x4_t4_g7_g1

0x0b8a,	// (0x0005fd80) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0b8a,	// (0x0005fd80) list_medium_line_x4_t4_g7_g2

0x66ea,	// (0x000658e0) list_medium_line_x4_t4_g7_g3_ParamLimits

0x66ea,	// (0x000658e0) list_medium_line_x4_t4_g7_g3

0x0b8a,	// (0x0005fd80) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0b8a,	// (0x0005fd80) list_medium_line_x4_t4_g7_g4

0x0b8a,	// (0x0005fd80) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0b8a,	// (0x0005fd80) list_medium_line_x4_t4_g7_g5

0x0b8a,	// (0x0005fd80) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0b8a,	// (0x0005fd80) list_medium_line_x4_t4_g7_g6

0x0b98,	// (0x0005fd8e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0b98,	// (0x0005fd8e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb60,	// (0x0006ed56) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb60,	// (0x0006ed56) list_medium_line_x4_t4_g7_g

0x4c97,	// (0x00063e8d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x4_t4_g7_t1

0x4c97,	// (0x00063e8d) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x4_t4_g7_t2

0x4c97,	// (0x00063e8d) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x4_t4_g7_t3

0x264d,	// (0x00061843) list_medium_line_x4_t4_g7_t4_ParamLimits

0x264d,	// (0x00061843) list_medium_line_x4_t4_g7_t4

0x5157,	// (0x0006434d) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5157,	// (0x0006434d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb6f,	// (0x0006ed65) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb6f,	// (0x0006ed65) list_medium_line_x4_t4_g7_t

0x516a,	// (0x00064360) list_single_dyc_row_pane_ParamLimits

0x516a,	// (0x00064360) list_single_dyc_row_pane

0xcab0,	// (0x0006bca6) call5_gesture_pane_ParamLimits

0xcab0,	// (0x0006bca6) call5_gesture_pane

0xcae0,	// (0x0006bcd6) call5_windows_pane_ParamLimits

0xcae0,	// (0x0006bcd6) call5_windows_pane

0xcb4c,	// (0x0006bd42) call5_swipe_1_pane_cp_ParamLimits

0xcb4c,	// (0x0006bd42) call5_swipe_1_pane_cp

0xcb58,	// (0x0006bd4e) call5_swipe_2_pane_cp_ParamLimits

0xcb58,	// (0x0006bd4e) call5_swipe_2_pane_cp

0x64dd,	// (0x000656d3) call5_image_pane_cp

0xcb64,	// (0x0006bd5a) popup_call5_audio_first_window_cp_ParamLimits

0xcb64,	// (0x0006bd5a) popup_call5_audio_first_window_cp

0x2ccb,	// (0x00061ec1) call5_swipe_1_pane_g1_cp_ParamLimits

0x2ccb,	// (0x00061ec1) call5_swipe_1_pane_g1_cp

0x2d11,	// (0x00061f07) call5_swipe_1_pane_g2_cp

0x2ce4,	// (0x00061eda) call5_swipe_1_pane_t1_cp_ParamLimits

0x2ce4,	// (0x00061eda) call5_swipe_1_pane_t1_cp

0x2ccb,	// (0x00061ec1) call5_swipe_2_pane_g1_cp_ParamLimits

0x2ccb,	// (0x00061ec1) call5_swipe_2_pane_g1_cp

0x2d19,	// (0x00061f0f) call5_swipe_2_pane_g2_cp

0x2d21,	// (0x00061f17) call5_swipe_2_pane_t1_cp_ParamLimits

0x2d21,	// (0x00061f17) call5_swipe_2_pane_t1_cp

0x8459,	// (0x0006764f) main_sp_fs_email_pane

0x2d36,	// (0x00061f2c) main_sp_fs_listscroll_pane_te

0xcb70,	// (0x0006bd66) popup_sp_fs_action_menu_pane_ParamLimits

0xcb70,	// (0x0006bd66) popup_sp_fs_action_menu_pane

0x6699,	// (0x0006588f) bg_sp_fs_ctrlbar_pane_g1

0x15e0,	// (0x000607d6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x15f2,	// (0x000607e8) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x15e9,	// (0x000607df) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x6699,	// (0x0006588f) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc5d,	// (0x0006ee53) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe4db,	// (0x0006d6d1) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe4db,	// (0x0006d6d1) bg_sp_fs_ctrlbar_ddmenu_pane

0x2d3f,	// (0x00061f35) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2d3f,	// (0x00061f35) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2d4b,	// (0x00061f41) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2d4b,	// (0x00061f41) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc66,	// (0x0006ee5c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc66,	// (0x0006ee5c) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2d57,	// (0x00061f4d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2d57,	// (0x00061f4d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xcba2,	// (0x0006bd98) list_medium_line_t2_right_icon_g1

0x4cbd,	// (0x00063eb3) list_medium_line_t2_right_icon_t1

0x4cbd,	// (0x00063eb3) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6b,	// (0x0006ee61) list_medium_line_t2_right_icon_t

0xebe2,	// (0x0006ddd8) bg_sp_fs_ctrlbar_pane_ParamLimits

0xebe2,	// (0x0006ddd8) bg_sp_fs_ctrlbar_pane

0xcbff,	// (0x0006bdf5) main_sp_fs_ctrlbar_button_pane_cp01

0xcc07,	// (0x0006bdfd) main_sp_fs_ctrlbar_ddmenu_pane

0x2da9,	// (0x00061f9f) main_sp_fs_ctrlbar_pane_g1

0x2db5,	// (0x00061fab) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc70,	// (0x0006ee66) main_sp_fs_ctrlbar_pane_g

0xcc41,	// (0x0006be37) main_sp_fs_ctrlbar_pane_t1

0xcc89,	// (0x0006be7f) main_sp_fs_ctrlbar_pane

0xcc9d,	// (0x0006be93) main_sp_fs_listscroll_pane_te_cp01

0x51dc,	// (0x000643d2) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x51dc,	// (0x000643d2) popup_sp_fs_action_menu_pane_cp01

0x8459,	// (0x0006764f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x8459,	// (0x0006764f) bg_sp_fs_highlight_list_pane_cp01

0x5206,	// (0x000643fc) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5206,	// (0x000643fc) sp_fs_action_menu_list_gene_pane_g1

0x2ddc,	// (0x00061fd2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2ddc,	// (0x00061fd2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc7e,	// (0x0006ee74) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc7e,	// (0x0006ee74) sp_fs_action_menu_list_gene_pane_g

0x5215,	// (0x0006440b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5215,	// (0x0006440b) sp_fs_action_menu_list_gene_pane_t1

0xccae,	// (0x0006bea4) sp_fs_action_menu_list_gene_pane_ParamLimits

0xccae,	// (0x0006bea4) sp_fs_action_menu_list_gene_pane

0x2de9,	// (0x00061fdf) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2de9,	// (0x00061fdf) popup_sp_fs_action_menu_bg_pane

0xcccb,	// (0x0006bec1) sp_fs_action_menu_list_pane_ParamLimits

0xcccb,	// (0x0006bec1) sp_fs_action_menu_list_pane

0x2df7,	// (0x00061fed) sp_fs_scroll_pane_cp01_ParamLimits

0x2df7,	// (0x00061fed) sp_fs_scroll_pane_cp01

0x4cbd,	// (0x00063eb3) list_medium_line_plain_t2_t1

0x4cbd,	// (0x00063eb3) list_medium_line_plain_t2_t2

0x0001,

0xfc6b,	// (0x0006ee61) list_medium_line_plain_t2_t

0x4cbd,	// (0x00063eb3) list_medium_line_plain_t3_t1

0x4cbd,	// (0x00063eb3) list_medium_line_plain_t3_t2

0x4cbd,	// (0x00063eb3) list_medium_line_plain_t3_t3

0x0002,

0xfc83,	// (0x0006ee79) list_medium_line_plain_t3_t

0x4c8b,	// (0x00063e81) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x2_t2_g2_g1

0x4c8b,	// (0x00063e81) list_medium_line_x2_t2_g2_g2_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1db,	// (0x0006e3d1) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1db,	// (0x0006e3d1) list_medium_line_x2_t2_g2_g

0x4c97,	// (0x00063e8d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x2_t2_g2_t1

0x4caa,	// (0x00063ea0) list_medium_line_x2_t2_g2_t2_ParamLimits

0x4caa,	// (0x00063ea0) list_medium_line_x2_t2_g2_t2

0x0001,

0xf250,	// (0x0006e446) list_medium_line_x2_t2_g2_t_ParamLimits

0xf250,	// (0x0006e446) list_medium_line_x2_t2_g2_t

0x4c8b,	// (0x00063e81) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x2_t4_g2_g1

0x522d,	// (0x00064423) list_medium_line_x2_t4_g2_g2_ParamLimits

0x522d,	// (0x00064423) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc8a,	// (0x0006ee80) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc8a,	// (0x0006ee80) list_medium_line_x2_t4_g2_g

0x4c97,	// (0x00063e8d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x2_t4_g2_t1

0x4c97,	// (0x00063e8d) list_medium_line_x2_t4_g2_t2_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x2_t4_g2_t2

0x4c97,	// (0x00063e8d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x2_t4_g2_t3

0x4caa,	// (0x00063ea0) list_medium_line_x2_t4_g2_t4_ParamLimits

0x4caa,	// (0x00063ea0) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1e9,	// (0x0006e3df) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1e9,	// (0x0006e3df) list_medium_line_x2_t4_g2_t

0xcba2,	// (0x0006bd98) list_medium_line_t3_right_iconx2_g1

0x6699,	// (0x0006588f) list_medium_line_t3_right_iconx2_g2

0x523e,	// (0x00064434) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc8f,	// (0x0006ee85) list_medium_line_t3_right_iconx2_g

0x4cbd,	// (0x00063eb3) list_medium_line_t3_right_iconx2_t1

0x4cbd,	// (0x00063eb3) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc6b,	// (0x0006ee61) list_medium_line_t3_right_iconx2_t

0x4c8b,	// (0x00063e81) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x3_t4_g4_g1

0x66ea,	// (0x000658e0) list_medium_line_x3_t4_g4_g2_ParamLimits

0x66ea,	// (0x000658e0) list_medium_line_x3_t4_g4_g2

0x4c8b,	// (0x00063e81) list_medium_line_x3_t4_g4_g3_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x3_t4_g4_g3

0x66ea,	// (0x000658e0) list_medium_line_x3_t4_g4_g4_ParamLimits

0x66ea,	// (0x000658e0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc96,	// (0x0006ee8c) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc96,	// (0x0006ee8c) list_medium_line_x3_t4_g4_g

0x4c97,	// (0x00063e8d) list_medium_line_x3_t4_g4_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x3_t4_g4_t1

0x4c97,	// (0x00063e8d) list_medium_line_x3_t4_g4_t2_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x3_t4_g4_t2

0x4c97,	// (0x00063e8d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x3_t4_g4_t3

0x5247,	// (0x0006443d) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5247,	// (0x0006443d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc9f,	// (0x0006ee95) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc9f,	// (0x0006ee95) list_medium_line_x3_t4_g4_t

0x5264,	// (0x0006445a) list_single_dyc_row_text_pane_t1_ParamLimits

0x5264,	// (0x0006445a) list_single_dyc_row_text_pane_t1

0x529b,	// (0x00064491) list_single_dyc_row_text_pane_t2_ParamLimits

0x529b,	// (0x00064491) list_single_dyc_row_text_pane_t2

0x530f,	// (0x00064505) list_single_dyc_row_text_pane_t3_ParamLimits

0x530f,	// (0x00064505) list_single_dyc_row_text_pane_t3

0x0005,

0xfca8,	// (0x0006ee9e) list_single_dyc_row_text_pane_t_ParamLimits

0xfca8,	// (0x0006ee9e) list_single_dyc_row_text_pane_t

0x53df,	// (0x000645d5) list_single_dyc_row_pane_g1_ParamLimits

0x53df,	// (0x000645d5) list_single_dyc_row_pane_g1

0x53eb,	// (0x000645e1) list_single_dyc_row_pane_g2_ParamLimits

0x53eb,	// (0x000645e1) list_single_dyc_row_pane_g2

0x53f7,	// (0x000645ed) list_single_dyc_row_pane_g3_ParamLimits

0x53f7,	// (0x000645ed) list_single_dyc_row_pane_g3

0x5403,	// (0x000645f9) list_single_dyc_row_pane_g4_ParamLimits

0x5403,	// (0x000645f9) list_single_dyc_row_pane_g4

0x0003,

0xfcb5,	// (0x0006eeab) list_single_dyc_row_pane_g_ParamLimits

0xfcb5,	// (0x0006eeab) list_single_dyc_row_pane_g

0x540f,	// (0x00064605) list_single_dyc_row_text_pane_ParamLimits

0x540f,	// (0x00064605) list_single_dyc_row_text_pane

0x0431,	// (0x0005f627) bg_sp_fs_scroll_pane

0x2ec7,	// (0x000620bd) thumb_sp_fs_scroll_pane

0x4c8b,	// (0x00063e81) list_medium_line_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_g1

0x4c97,	// (0x00063e8d) list_medium_line_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t1

0x4c8b,	// (0x00063e81) list_medium_line_x2_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x2_g1

0xb9c0,	// (0x0006abb6) list_medium_line_x2_g2_ParamLimits

0xb9c0,	// (0x0006abb6) list_medium_line_x2_g2

0x0001,

0xf990,	// (0x0006eb86) list_medium_line_x2_g_ParamLimits

0xf990,	// (0x0006eb86) list_medium_line_x2_g

0x8445,	// (0x0006763b) list_medium_line_x2_t1_ParamLimits

0x8445,	// (0x0006763b) list_medium_line_x2_t1

0x4c8b,	// (0x00063e81) list_medium_line_x3_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x3_g1

0xcce9,	// (0x0006bedf) list_medium_line_x3_g2_ParamLimits

0xcce9,	// (0x0006bedf) list_medium_line_x3_g2

0x0001,

0xfcbe,	// (0x0006eeb4) list_medium_line_x3_g_ParamLimits

0xfcbe,	// (0x0006eeb4) list_medium_line_x3_g

0x2edd,	// (0x000620d3) list_medium_line_x3_t1_ParamLimits

0x2edd,	// (0x000620d3) list_medium_line_x3_t1

0x2ef1,	// (0x000620e7) thumb_sp_fs_scroll_pane_g1

0x2efa,	// (0x000620f0) thumb_sp_fs_scroll_pane_g2

0x2f03,	// (0x000620f9) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfcc3,	// (0x0006eeb9) thumb_sp_fs_scroll_pane_g

0x2ef1,	// (0x000620e7) bg_sp_fs_scroll_pane_g1

0x2efa,	// (0x000620f0) bg_sp_fs_scroll_pane_g2

0x2f03,	// (0x000620f9) bg_sp_fs_scroll_pane_g3

0x0002,

0xfcc3,	// (0x0006eeb9) bg_sp_fs_scroll_pane_g

0x4c8b,	// (0x00063e81) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x2_t3_g4_g1

0x66ea,	// (0x000658e0) list_medium_line_x2_t3_g4_g2_ParamLimits

0x66ea,	// (0x000658e0) list_medium_line_x2_t3_g4_g2

0x66ea,	// (0x000658e0) list_medium_line_x2_t3_g4_g3_ParamLimits

0x66ea,	// (0x000658e0) list_medium_line_x2_t3_g4_g3

0x4c8b,	// (0x00063e81) list_medium_line_x2_t3_g4_g4_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1e0,	// (0x0006e3d6) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1e0,	// (0x0006e3d6) list_medium_line_x2_t3_g4_g

0x4c97,	// (0x00063e8d) list_medium_line_x2_t3_g4_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x2_t3_g4_t1

0x4c97,	// (0x00063e8d) list_medium_line_x2_t3_g4_t2_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_x2_t3_g4_t2

0x4caa,	// (0x00063ea0) list_medium_line_x2_t3_g4_t3_ParamLimits

0x4caa,	// (0x00063ea0) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1d4,	// (0x0006e3ca) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1d4,	// (0x0006e3ca) list_medium_line_x2_t3_g4_t

0x4c8b,	// (0x00063e81) list_medium_line_g2_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_g2_g1

0xb9c0,	// (0x0006abb6) list_medium_line_g2_g2_ParamLimits

0xb9c0,	// (0x0006abb6) list_medium_line_g2_g2

0x0001,

0xf990,	// (0x0006eb86) list_medium_line_g2_g_ParamLimits

0xf990,	// (0x0006eb86) list_medium_line_g2_g

0x4c97,	// (0x00063e8d) list_medium_line_g2_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_g2_t1

0x4c8b,	// (0x00063e81) list_medium_line_t3_g2_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_t3_g2_g1

0xb9c0,	// (0x0006abb6) list_medium_line_t3_g2_g2_ParamLimits

0xb9c0,	// (0x0006abb6) list_medium_line_t3_g2_g2

0x0001,

0xf990,	// (0x0006eb86) list_medium_line_t3_g2_g_ParamLimits

0xf990,	// (0x0006eb86) list_medium_line_t3_g2_g

0x4c97,	// (0x00063e8d) list_medium_line_t3_g2_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t3_g2_t1

0x4c97,	// (0x00063e8d) list_medium_line_t3_g2_t2_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t3_g2_t2

0x4c97,	// (0x00063e8d) list_medium_line_t3_g2_t3_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t3_g2_t3

0x0002,

0xfcca,	// (0x0006eec0) list_medium_line_t3_g2_t_ParamLimits

0xfcca,	// (0x0006eec0) list_medium_line_t3_g2_t

0x2e2e,	// (0x00062024) list_medium_line_right_icon_g1

0x4cbd,	// (0x00063eb3) list_medium_line_right_icon_t1

0x4c8b,	// (0x00063e81) list_medium_line_t2_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_t2_g1

0x4c97,	// (0x00063e8d) list_medium_line_t2_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t2_t1

0x4c97,	// (0x00063e8d) list_medium_line_t2_t2_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t2_t2

0x0001,

0xf995,	// (0x0006eb8b) list_medium_line_t2_t_ParamLimits

0xf995,	// (0x0006eb8b) list_medium_line_t2_t

0x4c8b,	// (0x00063e81) list_medium_line_t3_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_t3_g1

0x4c97,	// (0x00063e8d) list_medium_line_t3_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t3_t1

0x4c97,	// (0x00063e8d) list_medium_line_t3_t2_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t3_t2

0x4c97,	// (0x00063e8d) list_medium_line_t3_t3_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t3_t3

0x0002,

0xfcca,	// (0x0006eec0) list_medium_line_t3_t_ParamLimits

0xfcca,	// (0x0006eec0) list_medium_line_t3_t

0x4c8b,	// (0x00063e81) list_medium_line_g3_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_g3_g1

0x66ea,	// (0x000658e0) list_medium_line_g3_g2_ParamLimits

0x66ea,	// (0x000658e0) list_medium_line_g3_g2

0x66ea,	// (0x000658e0) list_medium_line_g3_g3_ParamLimits

0x66ea,	// (0x000658e0) list_medium_line_g3_g3

0x0002,

0xfcd1,	// (0x0006eec7) list_medium_line_g3_g_ParamLimits

0xfcd1,	// (0x0006eec7) list_medium_line_g3_g

0x4c97,	// (0x00063e8d) list_medium_line_g3_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_g3_t1

0x4c8b,	// (0x00063e81) list_medium_line_t2_g3_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_t2_g3_g1

0x66ea,	// (0x000658e0) list_medium_line_t2_g3_g2_ParamLimits

0x66ea,	// (0x000658e0) list_medium_line_t2_g3_g2

0x66ea,	// (0x000658e0) list_medium_line_t2_g3_g3_ParamLimits

0x66ea,	// (0x000658e0) list_medium_line_t2_g3_g3

0x0002,

0xfcd1,	// (0x0006eec7) list_medium_line_t2_g3_g_ParamLimits

0xfcd1,	// (0x0006eec7) list_medium_line_t2_g3_g

0x4c97,	// (0x00063e8d) list_medium_line_t2_g3_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t2_g3_t1

0x4c97,	// (0x00063e8d) list_medium_line_t2_g3_t2_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t2_g3_t2

0x0001,

0xf995,	// (0x0006eb8b) list_medium_line_t2_g3_t_ParamLimits

0xf995,	// (0x0006eb8b) list_medium_line_t2_g3_t

0x4c8b,	// (0x00063e81) list_medium_line_t3_g3_g1_ParamLimits

0x4c8b,	// (0x00063e81) list_medium_line_t3_g3_g1

0x66ea,	// (0x000658e0) list_medium_line_t3_g3_g2_ParamLimits

0x66ea,	// (0x000658e0) list_medium_line_t3_g3_g2

0x66ea,	// (0x000658e0) list_medium_line_t3_g3_g3_ParamLimits

0x66ea,	// (0x000658e0) list_medium_line_t3_g3_g3

0x0002,

0xfcd1,	// (0x0006eec7) list_medium_line_t3_g3_g_ParamLimits

0xfcd1,	// (0x0006eec7) list_medium_line_t3_g3_g

0x4c97,	// (0x00063e8d) list_medium_line_t3_g3_t1_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t3_g3_t1

0x4c97,	// (0x00063e8d) list_medium_line_t3_g3_t2_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t3_g3_t2

0x4c97,	// (0x00063e8d) list_medium_line_t3_g3_t3_ParamLimits

0x4c97,	// (0x00063e8d) list_medium_line_t3_g3_t3

0x0002,

0xfcca,	// (0x0006eec0) list_medium_line_t3_g3_t_ParamLimits

0xfcca,	// (0x0006eec0) list_medium_line_t3_g3_t

0xcba2,	// (0x0006bd98) list_medium_line_right_iconx2_g1

0xcba2,	// (0x0006bd98) list_medium_line_right_iconx2_g2

0x0001,

0xfcd8,	// (0x0006eece) list_medium_line_right_iconx2_g

0x2f0c,	// (0x00062102) list_medium_line_right_iconx2_t1

0xcba2,	// (0x0006bd98) list_medium_line_t2_right_iconx2_g1

0xcba2,	// (0x0006bd98) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcd8,	// (0x0006eece) list_medium_line_t2_right_iconx2_g

0x4cbd,	// (0x00063eb3) list_medium_line_t2_right_iconx2_t1

0x4cbd,	// (0x00063eb3) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc6b,	// (0x0006ee61) list_medium_line_t2_right_iconx2_t

0x4cbd,	// (0x00063eb3) list_medium_line_x4_t4_t1

0x4cbd,	// (0x00063eb3) list_medium_line_x4_t4_t2

0x4cbd,	// (0x00063eb3) list_medium_line_x4_t4_t3

0x4cbd,	// (0x00063eb3) list_medium_line_x4_t4_t4

0x0003,

0xf2a2,	// (0x0006e498) list_medium_line_x4_t4_t

0xcd1a,	// (0x0006bf10) tport_appsw_pane_ParamLimits

0xcd1a,	// (0x0006bf10) tport_appsw_pane

0xcd26,	// (0x0006bf1c) tport_contact_pane_ParamLimits

0xcd26,	// (0x0006bf1c) tport_contact_pane

0xcd34,	// (0x0006bf2a) tport_listscroll_pane_ParamLimits

0xcd34,	// (0x0006bf2a) tport_listscroll_pane

0xcd42,	// (0x0006bf38) cell_tport_appsw_pane_ParamLimits

0xcd42,	// (0x0006bf38) cell_tport_appsw_pane

0x0b98,	// (0x0005fd8e) tport_appsw_pane_g1_ParamLimits

0x0b98,	// (0x0005fd8e) tport_appsw_pane_g1

0x2f1b,	// (0x00062111) tport_contact_pane_g1

0x2f24,	// (0x0006211a) tport_contact_pane_t1

0x2f32,	// (0x00062128) tport_contact_pane_t2

0x0001,

0xfcdd,	// (0x0006eed3) tport_contact_pane_t

0x2f40,	// (0x00062136) list_tport_pane

0x0d83,	// (0x0005ff79) scroll_pane_cp_030

0x2f51,	// (0x00062147) cell_tport_appsw_pane_g1

0x2f61,	// (0x00062157) cell_tport_appsw_pane_t1

0x2f6f,	// (0x00062165) grid_highlight_pane_cp019

0xcd69,	// (0x0006bf5f) list_tport_double_graphic_pane_ParamLimits

0xcd69,	// (0x0006bf5f) list_tport_double_graphic_pane

0x8459,	// (0x0006764f) list_highlight_pane_cp023_ParamLimits

0x8459,	// (0x0006764f) list_highlight_pane_cp023

0xcd76,	// (0x0006bf6c) list_tport_double_graphic_pane_g1_ParamLimits

0xcd76,	// (0x0006bf6c) list_tport_double_graphic_pane_g1

0xcd83,	// (0x0006bf79) list_tport_double_graphic_pane_t1_ParamLimits

0xcd83,	// (0x0006bf79) list_tport_double_graphic_pane_t1

0xcd98,	// (0x0006bf8e) list_tport_double_graphic_pane_t2_ParamLimits

0xcd98,	// (0x0006bf8e) list_tport_double_graphic_pane_t2

0x0001,

0xfce9,	// (0x0006eedf) list_tport_double_graphic_pane_t_ParamLimits

0xfce9,	// (0x0006eedf) list_tport_double_graphic_pane_t

0x0431,	// (0x0005f627) main_cale_note_pane

0xb25a,	// (0x0006a450) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb25a,	// (0x0006a450) cell_vitu2_function_top_wide_pane_cp01

0xc81d,	// (0x0006ba13) wait_bar_pane_cp05_ParamLimits

0x8459,	// (0x0006764f) listscroll_cmail_pane

0x2f7f,	// (0x00062175) list_cmail_pane

0xcdaa,	// (0x0006bfa0) list_cmail_body_pane

0xcdaa,	// (0x0006bfa0) list_single_cmail_header_caption_pane

0xcdc3,	// (0x0006bfb9) list_single_cmail_header_detail_pane_ParamLimits

0xcdc3,	// (0x0006bfb9) list_single_cmail_header_detail_pane

0x2fa2,	// (0x00062198) list_single_cmail_header_caption_pane_t1

0x542e,	// (0x00064624) list_single_cmail_header_detail_pane_g1_ParamLimits

0x542e,	// (0x00064624) list_single_cmail_header_detail_pane_g1

0xcdf0,	// (0x0006bfe6) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcdf0,	// (0x0006bfe6) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcee,	// (0x0006eee4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcee,	// (0x0006eee4) list_single_cmail_header_detail_pane_g

0x5444,	// (0x0006463a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5444,	// (0x0006463a) list_single_cmail_header_detail_pane_t1

0x54a4,	// (0x0006469a) list_single_cmail_header_editor_pane_bg_ParamLimits

0x54a4,	// (0x0006469a) list_single_cmail_header_editor_pane_bg

0x300d,	// (0x00062203) list_cmail_body_pane_g1

0x3016,	// (0x0006220c) list_cmail_body_pane_t1

0x1be7,	// (0x00060ddd) list_single_cmail_header_editor_pane_bg_g1

0x6ceb,	// (0x00065ee1) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1bf7,	// (0x00060ded) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1bef,	// (0x00060de5) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1e27,	// (0x0006101d) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1c17,	// (0x00060e0d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1c07,	// (0x00060dfd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1c0f,	// (0x00060e05) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x6ccb,	// (0x00065ec1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcdfc,	// (0x0006bff2) calenote_gesture_pane_ParamLimits

0xcdfc,	// (0x0006bff2) calenote_gesture_pane

0xce14,	// (0x0006c00a) calenote_window_pane_ParamLimits

0xce14,	// (0x0006c00a) calenote_window_pane

0x3024,	// (0x0006221a) popup_note_window_cp01

0xce2c,	// (0x0006c022) calenote_swipe_1_pane_ParamLimits

0xce2c,	// (0x0006c022) calenote_swipe_1_pane

0xcb58,	// (0x0006bd4e) calenote_swipe_2_pane_ParamLimits

0xcb58,	// (0x0006bd4e) calenote_swipe_2_pane

0x2ccb,	// (0x00061ec1) calenote_swipe_1_pane_g1_ParamLimits

0x2ccb,	// (0x00061ec1) calenote_swipe_1_pane_g1

0x2cd8,	// (0x00061ece) calenote_swipe_1_pane_g2_ParamLimits

0x2cd8,	// (0x00061ece) calenote_swipe_1_pane_g2

0x0001,

0xfc53,	// (0x0006ee49) calenote_swipe_1_pane_g_ParamLimits

0xfc53,	// (0x0006ee49) calenote_swipe_1_pane_g

0x3036,	// (0x0006222c) calenote_swipe_1_pane_t1_ParamLimits

0x3036,	// (0x0006222c) calenote_swipe_1_pane_t1

0x2ccb,	// (0x00061ec1) calenote_swipe_2_pane_g1_ParamLimits

0x2ccb,	// (0x00061ec1) calenote_swipe_2_pane_g1

0x3055,	// (0x0006224b) calenote_swipe_2_pane_g2_ParamLimits

0x3055,	// (0x0006224b) calenote_swipe_2_pane_g2

0x0001,

0xfcfa,	// (0x0006eef0) calenote_swipe_2_pane_g_ParamLimits

0xfcfa,	// (0x0006eef0) calenote_swipe_2_pane_g

0x3061,	// (0x00062257) calenote_swipe_2_pane_t1_ParamLimits

0x3061,	// (0x00062257) calenote_swipe_2_pane_t1

0x0431,	// (0x0005f627) main_mup_navstr_pane

0xa29d,	// (0x00069493) main_mup3_pane_t7_ParamLimits

0xa29d,	// (0x00069493) main_mup3_pane_t7

0xaa72,	// (0x00069c68) main_mp4_pane_g6_ParamLimits

0xaa72,	// (0x00069c68) main_mp4_pane_g6

0xadbe,	// (0x00069fb4) main_image3_pane_t4_ParamLimits

0xadbe,	// (0x00069fb4) main_image3_pane_t4

0xce3f,	// (0x0006c035) popup_navstr_preview_pane_ParamLimits

0xce3f,	// (0x0006c035) popup_navstr_preview_pane

0xce4b,	// (0x0006c041) scroll_navstr_pane_ParamLimits

0xce4b,	// (0x0006c041) scroll_navstr_pane

0x0431,	// (0x0005f627) bg_popup_preview_window_pane_cp04

0x3088,	// (0x0006227e) popup_navstr_preview_pane_t1

0xce57,	// (0x0006c04d) scroll_navstr_pane_g1_ParamLimits

0xce57,	// (0x0006c04d) scroll_navstr_pane_g1

0xce64,	// (0x0006c05a) scroll_navstr_pane_t1_ParamLimits

0xce64,	// (0x0006c05a) scroll_navstr_pane_t1

0x302d,	// (0x00062223) bg_button_pane_cp014

0x302d,	// (0x00062223) bg_button_pane_cp030

0x5193,	// (0x00064389) list_double_fisheye_pane_g4_ParamLimits

0x5193,	// (0x00064389) list_double_fisheye_pane_g4

0xca9f,	// (0x0006bc95) list_double_fisheye_pane_g5_ParamLimits

0xca9f,	// (0x0006bc95) list_double_fisheye_pane_g5

0x2f96,	// (0x0006218c) sp_fs_scroll_pane_cp03

0x2da9,	// (0x00061f9f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2db5,	// (0x00061fab) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc70,	// (0x0006ee66) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xcc41,	// (0x0006be37) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x2f8e,	// (0x00062184) sp_fs_scroll_pane_cp02

0x0ddd,	// (0x0005ffd3) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0ddd,	// (0x0005ffd3) popup_sp_fs_calendar_preview_list_single_pane

0x0431,	// (0x0005f627) main_cam6_pano_pane

0x8459,	// (0x0006764f) main_mup3_pane_ParamLimits

0x0431,	// (0x0005f627) main_phacti_pane

0xc710,	// (0x0006b906) bg_button_pane_cp11

0xc728,	// (0x0006b91e) main_mobtv_info_pane_g2_ParamLimits

0xc728,	// (0x0006b91e) main_mobtv_info_pane_g2

0x0001,

0xfbd0,	// (0x0006edc6) main_mobtv_info_pane_g_ParamLimits

0xfbd0,	// (0x0006edc6) main_mobtv_info_pane_g

0xc8b4,	// (0x0006baaa) sc_clock_pane_t5_ParamLimits

0xc8b4,	// (0x0006baaa) sc_clock_pane_t5

0xc941,	// (0x0006bb37) main_radioblah_pane_g1_ParamLimits

0x2b94,	// (0x00061d8a) main_radioblah_pane_t3_ParamLimits

0x2b94,	// (0x00061d8a) main_radioblah_pane_t3

0x2bac,	// (0x00061da2) main_radioblah_pane_t4_ParamLimits

0x2bac,	// (0x00061da2) main_radioblah_pane_t4

0xc95f,	// (0x0006bb55) main_radioblah_text_pane_ParamLimits

0xc95f,	// (0x0006bb55) main_radioblah_text_pane

0xc96c,	// (0x0006bb62) main_radioblah_info_pane_g1_ParamLimits

0xc9f9,	// (0x0006bbef) main_radioblah_info_pane_t4_ParamLimits

0xc9f9,	// (0x0006bbef) main_radioblah_info_pane_t4

0x8459,	// (0x0006764f) main_sp_fs_calendar_pane

0xce76,	// (0x0006c06c) main_phacti_pane_g1

0xce7e,	// (0x0006c074) phacti_note_pane_ParamLimits

0xce7e,	// (0x0006c074) phacti_note_pane

0x309f,	// (0x00062295) phacti_term_pane_ParamLimits

0x309f,	// (0x00062295) phacti_term_pane

0x30b4,	// (0x000622aa) phacti_note_pane_t1_ParamLimits

0x30b4,	// (0x000622aa) phacti_note_pane_t1

0x54bb,	// (0x000646b1) phacti_term_pane_g1

0x54c3,	// (0x000646b9) phacti_term_pane_t1_ParamLimits

0x54c3,	// (0x000646b9) phacti_term_pane_t1

0x30fd,	// (0x000622f3) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3105,	// (0x000622fb) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd04,	// (0x0006eefa) popup_sp_fs_calendar_preview_list_single_pane_g

0x310d,	// (0x00062303) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x310d,	// (0x00062303) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3123,	// (0x00062319) aid_popup_sp_fs_bg_corner_pane

0x6699,	// (0x0006588f) popup_sp_fs_calendar_preview_bg_pane_g1

0x0431,	// (0x0005f627) popup_sp_fs_calendar_preview_bg_pane

0x312b,	// (0x00062321) popup_sp_fs_calendar_preview_list_pane

0xebe2,	// (0x0006ddd8) bg_main_sp_fs_cale_pane_ParamLimits

0xebe2,	// (0x0006ddd8) bg_main_sp_fs_cale_pane

0x54ed,	// (0x000646e3) listscroll_cale_mrui_pane_ParamLimits

0x54ed,	// (0x000646e3) listscroll_cale_mrui_pane

0x5502,	// (0x000646f8) listscroll_sp_fs_schedule_track_pane

0x550b,	// (0x00064701) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x550b,	// (0x00064701) main_sp_fs_ctrlbar_pane_cp01

0x316d,	// (0x00062363) main_sp_fs_ribbon_pane

0x551e,	// (0x00064714) popup_sp_fs_cale_preview_window

0xcede,	// (0x0006c0d4) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcede,	// (0x0006c0d4) list_single_sp_fs_schedule_track_pane

0x0ba6,	// (0x0005fd9c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0ba6,	// (0x0005fd9c) bg_sp_fs_highlight_list_pane_cp03

0xcef4,	// (0x0006c0ea) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcef4,	// (0x0006c0ea) list_single_sp_fs_schedule_track_pane_g1

0xcf00,	// (0x0006c0f6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcf00,	// (0x0006c0f6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd09,	// (0x0006eeff) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd09,	// (0x0006eeff) list_single_sp_fs_schedule_track_pane_g

0xcf0c,	// (0x0006c102) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcf0c,	// (0x0006c102) list_single_sp_fs_schedule_track_pane_t1

0xcf24,	// (0x0006c11a) sp_fs_schedule_track_pane_ParamLimits

0xcf24,	// (0x0006c11a) sp_fs_schedule_track_pane

0x3184,	// (0x0006237a) sp_fs_schedule_track_pane_g1

0x318c,	// (0x00062382) sp_fs_schedule_track_pane_g2

0x3194,	// (0x0006238a) sp_fs_schedule_track_pane_g3

0x319c,	// (0x00062392) sp_fs_schedule_track_pane_g4

0x31a4,	// (0x0006239a) sp_fs_schedule_track_pane_g5

0x0004,

0xfd0e,	// (0x0006ef04) sp_fs_schedule_track_pane_g

0x1be7,	// (0x00060ddd) bg_sp_fs_schedule_viewer_highlight_g1

0x6ceb,	// (0x00065ee1) bg_sp_fs_schedule_viewer_highlight_g2

0x1bef,	// (0x00060de5) bg_sp_fs_schedule_viewer_highlight_g3

0x1bf7,	// (0x00060ded) bg_sp_fs_schedule_viewer_highlight_g4

0x1e27,	// (0x0006101d) bg_sp_fs_schedule_viewer_highlight_g5

0x1c07,	// (0x00060dfd) bg_sp_fs_schedule_viewer_highlight_g6

0x1c0f,	// (0x00060e05) bg_sp_fs_schedule_viewer_highlight_g7

0x1c17,	// (0x00060e0d) bg_sp_fs_schedule_viewer_highlight_g8

0x6ccb,	// (0x00065ec1) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd19,	// (0x0006ef0f) bg_sp_fs_schedule_viewer_highlight_g

0x0431,	// (0x0005f627) bg_main_sp_fs_ribbon_pane

0xafdb,	// (0x0006a1d1) main_sp_fs_ribbon_pane_g1

0x31ac,	// (0x000623a2) main_sp_fs_ribbon_pane_t1

0xcf34,	// (0x0006c12a) main_sp_fs_ribbon_pane_t2

0x31bb,	// (0x000623b1) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd2c,	// (0x0006ef22) main_sp_fs_ribbon_pane_t

0x31ca,	// (0x000623c0) main_sp_fs_ribbon_scheduler_pane

0x31d2,	// (0x000623c8) bg_main_sp_fs_ribbon_pane_g1

0x31db,	// (0x000623d1) bg_main_sp_fs_ribbon_pane_g2

0x31e4,	// (0x000623da) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd33,	// (0x0006ef29) bg_main_sp_fs_ribbon_pane_g

0x31ec,	// (0x000623e2) main_sp_fs_ribbon_scheduler_pane_g1

0x31f5,	// (0x000623eb) main_sp_fs_ribbon_scheduler_pane_g2

0x31fe,	// (0x000623f4) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd3a,	// (0x0006ef30) main_sp_fs_ribbon_scheduler_pane_g

0x3207,	// (0x000623fd) list_cale_mrui_pane

0xcf43,	// (0x0006c139) sp_fs_scroll_pane_cp07_ParamLimits

0xcf43,	// (0x0006c139) sp_fs_scroll_pane_cp07

0xcf5b,	// (0x0006c151) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcf5b,	// (0x0006c151) bg_sp_fs_schedule_viewer_highlight

0x3214,	// (0x0006240a) list_single_sp_fs_schedule_track_pane_cp01

0x321c,	// (0x00062412) list_sp_fs_schedule_track_pane

0x3224,	// (0x0006241a) sp_fs_scroll_pane_cp06_ParamLimits

0x3224,	// (0x0006241a) sp_fs_scroll_pane_cp06

0x6699,	// (0x0006588f) bgmain_sp_fs_calendar_pane_g1

0x5530,	// (0x00064726) list_single_cale_mrui_pane_ParamLimits

0x5530,	// (0x00064726) list_single_cale_mrui_pane

0x5552,	// (0x00064748) list_single_cale_mrui_row_pane_ParamLimits

0x5552,	// (0x00064748) list_single_cale_mrui_row_pane

0x5568,	// (0x0006475e) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5568,	// (0x0006475e) list_single_cale_mrui_row_pane_g1

0x5594,	// (0x0006478a) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5594,	// (0x0006478a) list_single_cale_mrui_row_pane_t1

0x55a6,	// (0x0006479c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x55a6,	// (0x0006479c) list_single_cale_mrui_row_pane_t2

0x560c,	// (0x00064802) list_single_cale_mrui_row_pane_t3_ParamLimits

0x560c,	// (0x00064802) list_single_cale_mrui_row_pane_t3

0x563b,	// (0x00064831) list_single_cale_mrui_row_pane_t4_ParamLimits

0x563b,	// (0x00064831) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd48,	// (0x0006ef3e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd48,	// (0x0006ef3e) list_single_cale_mrui_row_pane_t

0x566a,	// (0x00064860) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x566a,	// (0x00064860) list_single_cmail_header_editor_pane_bg_cp01

0x568e,	// (0x00064884) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x568e,	// (0x00064884) list_single_cmail_header_editor_pane_bg_cp02

0xcf74,	// (0x0006c16a) main_radioblah_text_pane_t1_ParamLimits

0xcf74,	// (0x0006c16a) main_radioblah_text_pane_t1

0x3259,	// (0x0006244f) cam6_indi_pane_cp01

0x3261,	// (0x00062457) cam6_mode_pane_cp01

0x3269,	// (0x0006245f) cam6_pano_pane

0x3272,	// (0x00062468) cam6_zoom_pane_cp01

0x327a,	// (0x00062470) cam6_pano_image_pane

0x3283,	// (0x00062479) cam6_pano_pane_g1

0x28fb,	// (0x00061af1) cam6_pano_pane_g2

0x328c,	// (0x00062482) cam6_pano_pane_g3

0x3295,	// (0x0006248b) cam6_pano_pane_g4

0x15cd,	// (0x000607c3) cam6_pano_pane_g5

0x329e,	// (0x00062494) cam6_pano_pane_g6

0x32a6,	// (0x0006249c) cam6_pano_pane_g7

0x32ae,	// (0x000624a4) cam6_pano_pane_g8

0x32b7,	// (0x000624ad) cam6_pano_pane_g9

0x0008,

0xfd51,	// (0x0006ef47) cam6_pano_pane_g

0x0431,	// (0x0005f627) main_browser_tag_pane

0x3080,	// (0x00062276) grid_navstr_albumart_pane

0x32c0,	// (0x000624b6) cell_navstr_albumart_pane_ParamLimits

0x32c0,	// (0x000624b6) cell_navstr_albumart_pane

0x8689,	// (0x0006787f) cell_navstr_albumart_pane_g1

0xea2e,	// (0x0006dc24) cell_navstr_albumart_pane_g2

0xea3e,	// (0x0006dc34) cell_navstr_albumart_pane_g3

0xea36,	// (0x0006dc2c) cell_navstr_albumart_pane_g4

0x0003,

0xfd64,	// (0x0006ef5a) cell_navstr_albumart_pane_g

0xcf8d,	// (0x0006c183) bt_list_pane_ParamLimits

0xcf8d,	// (0x0006c183) bt_list_pane

0xcfa2,	// (0x0006c198) bt_list_pane_t1

0xcfb1,	// (0x0006c1a7) bt_list_pane_t2

0x0001,

0xfd6d,	// (0x0006ef63) bt_list_pane_t

0x0431,	// (0x0005f627) main_cale_prevew_pane

0xcfc0,	// (0x0006c1b6) popup_cale_preview_window_ParamLimits

0xcfc0,	// (0x0006c1b6) popup_cale_preview_window

0x8459,	// (0x0006764f) bg_popup_preview_window_pane_cp05_ParamLimits

0x8459,	// (0x0006764f) bg_popup_preview_window_pane_cp05

0x32d7,	// (0x000624cd) list_cale_preview_pane_ParamLimits

0x32d7,	// (0x000624cd) list_cale_preview_pane

0xcfd5,	// (0x0006c1cb) list_double_cale_preview_pane_ParamLimits

0xcfd5,	// (0x0006c1cb) list_double_cale_preview_pane

0xcfe6,	// (0x0006c1dc) list_single_cale_preview_pane_ParamLimits

0xcfe6,	// (0x0006c1dc) list_single_cale_preview_pane

0xcffa,	// (0x0006c1f0) list_single_cale_preview_pane_g1

0xd002,	// (0x0006c1f8) list_single_cale_preview_pane_t1_ParamLimits

0xd002,	// (0x0006c1f8) list_single_cale_preview_pane_t1

0x32e3,	// (0x000624d9) list_double_cale_preview_pane_g1

0x32eb,	// (0x000624e1) list_double_cale_preview_pane_t1_ParamLimits

0x32eb,	// (0x000624e1) list_double_cale_preview_pane_t1

0xd017,	// (0x0006c20d) list_double_cale_preview_pane_t2_ParamLimits

0xd017,	// (0x0006c20d) list_double_cale_preview_pane_t2

0x0001,

0xfd72,	// (0x0006ef68) list_double_cale_preview_pane_t_ParamLimits

0xfd72,	// (0x0006ef68) list_double_cale_preview_pane_t

0x0431,	// (0x0005f627) main_ezdial_pane

0x8459,	// (0x0006764f) main_sp_fs_email_pane_ParamLimits

0xcbaa,	// (0x0006bda0) cmail_ddmenu_btn01_pane_ParamLimits

0xcbaa,	// (0x0006bda0) cmail_ddmenu_btn01_pane

0xcbc7,	// (0x0006bdbd) cmail_ddmenu_btn02_pane_ParamLimits

0xcbc7,	// (0x0006bdbd) cmail_ddmenu_btn02_pane

0xcbe5,	// (0x0006bddb) cmail_ddmenu_btn03_pane_ParamLimits

0xcbe5,	// (0x0006bddb) cmail_ddmenu_btn03_pane

0xcc89,	// (0x0006be7f) main_sp_fs_ctrlbar_pane_ParamLimits

0xcc9d,	// (0x0006be93) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcdaa,	// (0x0006bfa0) list_cmail_body_pane_ParamLimits

0x2fb0,	// (0x000621a6) bg_button_pane_cp12

0x2fc5,	// (0x000621bb) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2fc5,	// (0x000621bb) list_single_cmail_header_detail_pane_g3

0x5480,	// (0x00064676) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5480,	// (0x00064676) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcf5,	// (0x0006eeeb) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcf5,	// (0x0006eeeb) list_single_cmail_header_detail_pane_t

0x54d8,	// (0x000646ce) phacti_term_pane_t2_ParamLimits

0x54d8,	// (0x000646ce) phacti_term_pane_t2

0x0001,

0xfcff,	// (0x0006eef5) phacti_term_pane_t_ParamLimits

0xfcff,	// (0x0006eef5) phacti_term_pane_t

0x3300,	// (0x000624f6) aid_size_list_single_double

0xd02f,	// (0x0006c225) popup_ezdial_listscroll_window

0xd048,	// (0x0006c23e) popup_number_entry_window_cp01

0x64dd,	// (0x000656d3) bg_popup_call_pane_cp09

0x330c,	// (0x00062502) ezdial_list_pane

0x3314,	// (0x0006250a) scroll_pane_cp23

0xe4db,	// (0x0006d6d1) bg_button_pane_cp028_ParamLimits

0xe4db,	// (0x0006d6d1) bg_button_pane_cp028

0xd054,	// (0x0006c24a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd054,	// (0x0006c24a) cmail_ddmenu_btn01_pane_g1

0xd064,	// (0x0006c25a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd064,	// (0x0006c25a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd77,	// (0x0006ef6d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd77,	// (0x0006ef6d) cmail_ddmenu_btn01_pane_g

0x331c,	// (0x00062512) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x331c,	// (0x00062512) cmail_ddmenu_btn01_pane_t1

0xebe2,	// (0x0006ddd8) bg_button_pane_cp029_ParamLimits

0xebe2,	// (0x0006ddd8) bg_button_pane_cp029

0xd064,	// (0x0006c25a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd064,	// (0x0006c25a) cmail_ddmenu_btn02_pane_g1

0xd07c,	// (0x0006c272) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd07c,	// (0x0006c272) cmail_ddmenu_btn02_pane_t1

0x0ba6,	// (0x0005fd9c) bg_button_pane_cp031_ParamLimits

0x0ba6,	// (0x0005fd9c) bg_button_pane_cp031

0xd064,	// (0x0006c25a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd064,	// (0x0006c25a) cmail_ddmenu_btn03_pane_g1

0xd07c,	// (0x0006c272) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd07c,	// (0x0006c272) cmail_ddmenu_btn03_pane_t1

0xac7b,	// (0x00069e71) cell_dialer2_keypad_pane_t1_ParamLimits

0xac95,	// (0x00069e8b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xac95,	// (0x00069e8b) cell_dialer2_keypad_pane_t1_copy1

0xc59d,	// (0x0006b793) ncimui_group_button_pane

0x8459,	// (0x0006764f) main_sp_fs_calendar_pane_ParamLimits

0xcdaa,	// (0x0006bfa0) list_single_cmail_header_caption_pane_ParamLimits

0xceb0,	// (0x0006c0a6) aid_recal_txt_sm_pane

0x0431,	// (0x0005f627) mian_recal_day_pane

0x551e,	// (0x00064714) popup_sp_fs_cale_preview_window_ParamLimits

0x3331,	// (0x00062527) list_recal_day_pane

0x56c7,	// (0x000648bd) list_single_recal_day_pane_ParamLimits

0x56c7,	// (0x000648bd) list_single_recal_day_pane

0x3385,	// (0x0006257b) list_single_recal_day_pane_g1_ParamLimits

0x3385,	// (0x0006257b) list_single_recal_day_pane_g1

0x56d9,	// (0x000648cf) list_single_recal_day_pane_g2_ParamLimits

0x56d9,	// (0x000648cf) list_single_recal_day_pane_g2

0x56e5,	// (0x000648db) list_single_recal_day_pane_g3_ParamLimits

0x56e5,	// (0x000648db) list_single_recal_day_pane_g3

0x56f1,	// (0x000648e7) list_single_recal_day_pane_g4_ParamLimits

0x56f1,	// (0x000648e7) list_single_recal_day_pane_g4

0x56fd,	// (0x000648f3) list_single_recal_day_pane_g5_ParamLimits

0x56fd,	// (0x000648f3) list_single_recal_day_pane_g5

0x5711,	// (0x00064907) list_single_recal_day_pane_g6_ParamLimits

0x5711,	// (0x00064907) list_single_recal_day_pane_g6

0x0004,

0xfd86,	// (0x0006ef7c) list_single_recal_day_pane_g_ParamLimits

0xfd86,	// (0x0006ef7c) list_single_recal_day_pane_g

0x5728,	// (0x0006491e) list_single_recal_day_pane_t1

0x573a,	// (0x00064930) list_single_recal_day_pane_t2

0x0001,

0xfd91,	// (0x0006ef87) list_single_recal_day_pane_t

0xd0a0,	// (0x0006c296) ncimui_query_button_pane_ParamLimits

0xd0a0,	// (0x0006c296) ncimui_query_button_pane

0xd0b0,	// (0x0006c2a6) ncimui_query_button_pane_t1_ParamLimits

0xd0b0,	// (0x0006c2a6) ncimui_query_button_pane_t1

0x33cf,	// (0x000625c5) ncimui_query_button_pane_t2_ParamLimits

0x33cf,	// (0x000625c5) ncimui_query_button_pane_t2

0x0001,

0xfd96,	// (0x0006ef8c) ncimui_query_button_pane_t_ParamLimits

0xfd96,	// (0x0006ef8c) ncimui_query_button_pane_t

0xd0c3,	// (0x0006c2b9) query_button_pane_ParamLimits

0xd0c3,	// (0x0006c2b9) query_button_pane

0x0431,	// (0x0005f627) bg_button_pane_cp0028

0x33e2,	// (0x000625d8) query_button_pane_t1

0x98b7,	// (0x00068aad) main_tport_pane_ParamLimits

0xccf6,	// (0x0006beec) bg_popup_window_pane_cp01_ParamLimits

0xccf6,	// (0x0006beec) bg_popup_window_pane_cp01

0xcd02,	// (0x0006bef8) heading_pane_cp08_ParamLimits

0xcd02,	// (0x0006bef8) heading_pane_cp08

0xcd0e,	// (0x0006bf04) heading_pane_cp07_ParamLimits

0xcd0e,	// (0x0006bf04) heading_pane_cp07

0x2f51,	// (0x00062147) cell_tport_appsw_pane_g2

0x0002,

0xfce2,	// (0x0006eed8) cell_tport_appsw_pane_g

0x4ce4,	// (0x00063eda) input_candi_list_open_g1

0x7a18,	// (0x00066c0e) list_cale_time_pane_g6_ParamLimits

0x7a18,	// (0x00066c0e) list_cale_time_pane_g6

0x9d6f,	// (0x00068f65) aid_size_touch_calib_1_ParamLimits

0x9d6f,	// (0x00068f65) aid_size_touch_calib_1

0x9d7b,	// (0x00068f71) aid_size_touch_calib_2_ParamLimits

0x9d7b,	// (0x00068f71) aid_size_touch_calib_2

0x9d87,	// (0x00068f7d) aid_size_touch_calib_3_ParamLimits

0x9d87,	// (0x00068f7d) aid_size_touch_calib_3

0x9d95,	// (0x00068f8b) aid_size_touch_calib_4_ParamLimits

0x9d95,	// (0x00068f8b) aid_size_touch_calib_4

0x9da3,	// (0x00068f99) main_touch_calib_button_group_pane_ParamLimits

0x9da3,	// (0x00068f99) main_touch_calib_button_group_pane

0x9db1,	// (0x00068fa7) main_touch_calib_pane_g1_ParamLimits

0x9dbd,	// (0x00068fb3) main_touch_calib_pane_g2_ParamLimits

0x9dc9,	// (0x00068fbf) main_touch_calib_pane_g3_ParamLimits

0x9dd5,	// (0x00068fcb) main_touch_calib_pane_g4_ParamLimits

0xf6dd,	// (0x0006e8d3) main_touch_calib_pane_g_ParamLimits

0x9de1,	// (0x00068fd7) main_touch_calib_pane_t1_ParamLimits

0x9df6,	// (0x00068fec) main_touch_calib_pane_t2_ParamLimits

0x9e0b,	// (0x00069001) main_touch_calib_pane_t3_ParamLimits

0x9e1d,	// (0x00069013) main_touch_calib_pane_t4_ParamLimits

0x9e2f,	// (0x00069025) main_touch_calib_pane_t5_ParamLimits

0xf6e6,	// (0x0006e8dc) main_touch_calib_pane_t_ParamLimits

0x13ce,	// (0x000605c4) list_single_fp_cale_pane_g3_ParamLimits

0x13ce,	// (0x000605c4) list_single_fp_cale_pane_g3

0x8459,	// (0x0006764f) bg_button_pane_cp012_ParamLimits

0x8459,	// (0x0006764f) bg_vkb2_func_pane_cp03_ParamLimits

0xb940,	// (0x0006ab36) cell_vitu2_function_top_pane_g1_ParamLimits

0x8459,	// (0x0006764f) bg_vkb2_func_pane_cp04_ParamLimits

0xc529,	// (0x0006b71f) main_ncimui_button_group_pane_ParamLimits

0xc529,	// (0x0006b71f) main_ncimui_button_group_pane

0xc58b,	// (0x0006b781) main_ncimui_pane_t3_ParamLimits

0xc58b,	// (0x0006b781) main_ncimui_pane_t3

0x3096,	// (0x0006228c) phacti_button_group_pane

0x3300,	// (0x000624f6) aid_size_list_single_double_ParamLimits

0xd02f,	// (0x0006c225) popup_ezdial_listscroll_window_ParamLimits

0xd048,	// (0x0006c23e) popup_number_entry_window_cp01_ParamLimits

0xd0d0,	// (0x0006c2c6) phacti_button_pane_ParamLimits

0xd0d0,	// (0x0006c2c6) phacti_button_pane

0x0431,	// (0x0005f627) bg_button_pane_cp14

0x33f0,	// (0x000625e6) phacti_button_pane_t1

0xd0df,	// (0x0006c2d5) main_touch_calib_button_pane_ParamLimits

0xd0df,	// (0x0006c2d5) main_touch_calib_button_pane

0x0c30,	// (0x0005fe26) bg_button_pane_cp18_ParamLimits

0x0c30,	// (0x0005fe26) bg_button_pane_cp18

0xd0f0,	// (0x0006c2e6) main_touch_calib_button_pane_t1_ParamLimits

0xd0f0,	// (0x0006c2e6) main_touch_calib_button_pane_t1

0xd106,	// (0x0006c2fc) main_touch_calib_button_pane_t2_ParamLimits

0xd106,	// (0x0006c2fc) main_touch_calib_button_pane_t2

0x0001,

0xfd9b,	// (0x0006ef91) main_touch_calib_button_pane_t_ParamLimits

0xfd9b,	// (0x0006ef91) main_touch_calib_button_pane_t

0x0431,	// (0x0005f627) cell_ncimui_button_pane

0x0431,	// (0x0005f627) bg_button_pane_cp032

0x33fe,	// (0x000625f4) cell_ncimui_button_pane_t1

0xace7,	// (0x00069edd) image3_infobar_pane_ParamLimits

0xace7,	// (0x00069edd) image3_infobar_pane

0xc8d4,	// (0x0006baca) fs_bigclock_status_pane_ParamLimits

0xc8d4,	// (0x0006baca) fs_bigclock_status_pane

0xc8e1,	// (0x0006bad7) main_fs_bigclock_clock_pane_ParamLimits

0xc8e1,	// (0x0006bad7) main_fs_bigclock_clock_pane

0xc8f9,	// (0x0006baef) main_fs_bigclock_indi_pane_ParamLimits

0xc8f9,	// (0x0006baef) main_fs_bigclock_indi_pane

0xc919,	// (0x0006bb0f) main_fs_bigclock_swipe_pane_ParamLimits

0xc919,	// (0x0006bb0f) main_fs_bigclock_swipe_pane

0x0431,	// (0x0005f627) main_fs_clock_dumped_data

0x2a08,	// (0x00061bfe) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2a08,	// (0x00061bfe) list_single_fs_bigclock_indicator_pane_g1

0x2a22,	// (0x00061c18) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x2a22,	// (0x00061c18) list_single_fs_bigclock_indicator_pane_g2

0x2a3c,	// (0x00061c32) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2a3c,	// (0x00061c32) list_single_fs_bigclock_indicator_pane_g3

0x2a56,	// (0x00061c4c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2a56,	// (0x00061c4c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc04,	// (0x0006edfa) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc04,	// (0x0006edfa) list_single_fs_bigclock_indicator_pane_g

0x2a7f,	// (0x00061c75) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2a7f,	// (0x00061c75) list_single_fs_bigclock_indicator_pane_t1

0x2aa7,	// (0x00061c9d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2aa7,	// (0x00061c9d) list_single_fs_bigclock_indicator_pane_t2

0x2acf,	// (0x00061cc5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2acf,	// (0x00061cc5) list_single_fs_bigclock_indicator_pane_t3

0x2af7,	// (0x00061ced) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2af7,	// (0x00061ced) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc0f,	// (0x0006ee05) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc0f,	// (0x0006ee05) list_single_fs_bigclock_indicator_pane_t

0x340c,	// (0x00062602) image3_infobar_fav_pane_ParamLimits

0x340c,	// (0x00062602) image3_infobar_fav_pane

0x341c,	// (0x00062612) image3_infobar_loc_pane_ParamLimits

0x341c,	// (0x00062612) image3_infobar_loc_pane

0x3430,	// (0x00062626) image3_infobar_time_pane_ParamLimits

0x3430,	// (0x00062626) image3_infobar_time_pane

0x6699,	// (0x0006588f) image3_infobar_time_pane_g1

0x3440,	// (0x00062636) image3_infobar_time_pane_t1

0x6699,	// (0x0006588f) image3_infobar_loc_pane_g1

0x344e,	// (0x00062644) image3_infobar_loc_pane_g2

0x0001,

0xfda0,	// (0x0006ef96) image3_infobar_loc_pane_g

0x3456,	// (0x0006264c) image3_infobar_loc_pane_t1

0x6699,	// (0x0006588f) image3_infobar_fav_pane_g1

0x3464,	// (0x0006265a) image3_infobar_fav_pane_g2

0x0001,

0xfda5,	// (0x0006ef9b) image3_infobar_fav_pane_g

0x346c,	// (0x00062662) fs_bigclock_status_battery_pane

0x3475,	// (0x0006266b) fs_bigclock_status_signal_pane

0x347e,	// (0x00062674) fs_bigclock_status_title_pane

0x3487,	// (0x0006267d) fs_bigclock_status_signal_pane_g1

0x3490,	// (0x00062686) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdaa,	// (0x0006efa0) fs_bigclock_status_signal_pane_g

0x3498,	// (0x0006268e) fs_bigclock_status_battery_pane_g1

0x34a1,	// (0x00062697) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdaf,	// (0x0006efa5) fs_bigclock_status_battery_pane_g

0x34a9,	// (0x0006269f) fs_bigclock_status_title_pane_t1

0x0b98,	// (0x0005fd8e) main_fs_bigclock_clock_pane_g1

0xd124,	// (0x0006c31a) main_fs_bigclock_clock_pane_g2

0xd131,	// (0x0006c327) main_fs_bigclock_clock_pane_g3

0xd131,	// (0x0006c327) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdb4,	// (0x0006efaa) main_fs_bigclock_clock_pane_g

0xd13d,	// (0x0006c333) main_fs_bigclock_clock_pane_t1

0xd14f,	// (0x0006c345) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdbd,	// (0x0006efb3) main_fs_bigclock_clock_pane_t

0x34b7,	// (0x000626ad) list_single_fs_bigclock_indicator_pane_ParamLimits

0x34b7,	// (0x000626ad) list_single_fs_bigclock_indicator_pane

0x34c8,	// (0x000626be) list_single_fs_bigclock_pane_ParamLimits

0x34c8,	// (0x000626be) list_single_fs_bigclock_pane

0x34ee,	// (0x000626e4) main_fs_bigclock_indicator_pane_t1

0x34fd,	// (0x000626f3) list_single_fs_bigclock_pane_g1

0x3505,	// (0x000626fb) list_single_fs_bigclock_pane_t1

0x6699,	// (0x0006588f) main_fs_bigclock_swipe_pane_g1

0x3545,	// (0x0006273b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdce,	// (0x0006efc4) main_fs_bigclock_swipe_pane_g

0x354d,	// (0x00062743) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x354d,	// (0x00062743) main_fs_bigclock_swipe_pane_t1

0x7cff,	// (0x00066ef5) call_type_pane_ParamLimits

0x0431,	// (0x0005f627) main_btmg_pane

0xcf68,	// (0x0006c15e) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcf68,	// (0x0006c15e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd41,	// (0x0006ef37) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd41,	// (0x0006ef37) list_single_cale_mrui_row_pane_g

0x56b6,	// (0x000648ac) list_recal_vselct_arw_lo_pane

0x3362,	// (0x00062558) list_recal_vselct_arw_up_pane

0x56be,	// (0x000648b4) list_recal_vselct_pane

0x356a,	// (0x00062760) btmg_button_pane

0xd1a4,	// (0x0006c39a) main_btmg_pane_g1

0x0431,	// (0x0005f627) bg_button_pane_cp044

0x3572,	// (0x00062768) btmg_button_pane_t1

0xebce,	// (0x0006ddc4) aid_listscroll_gen

0x8459,	// (0x0006764f) main_cntbar_detail_pane

0x2f77,	// (0x0006216d) list_cmail_folder_pane

0x2f96,	// (0x0006218c) sp_fs_scroll_pane_cp03_ParamLimits

0x574f,	// (0x00064945) list_single_fs_dyc_pane_cp01_ParamLimits

0x574f,	// (0x00064945) list_single_fs_dyc_pane_cp01

0x3580,	// (0x00062776) aid_size_cmail_indent

0x5767,	// (0x0006495d) list_single_dyc_row_pane_cp01

0xd1c6,	// (0x0006c3bc) cntbar_detail_list_pane_ParamLimits

0xd1c6,	// (0x0006c3bc) cntbar_detail_list_pane

0xd1fc,	// (0x0006c3f2) main_cntbar_detail_cont_pane_ParamLimits

0xd1fc,	// (0x0006c3f2) main_cntbar_detail_cont_pane

0xd208,	// (0x0006c3fe) scroll_pane_cp032_ParamLimits

0xd208,	// (0x0006c3fe) scroll_pane_cp032

0x394b,	// (0x00062b41) cntbar_detail_list_event_pane_ParamLimits

0x394b,	// (0x00062b41) cntbar_detail_list_event_pane

0xd1d2,	// (0x0006c3c8) cntbar_detail_list_shct_pane

0x3592,	// (0x00062788) aid_list_gen

0x0d83,	// (0x0005ff79) aid_scroll

0x2142,	// (0x00061338) aid_size_touch_scroll_bar

0xbe67,	// (0x0006b05d) aid_list_double

0xd214,	// (0x0006c40a) aid_list_single

0x216d,	// (0x00061363) aid_list_single_lg

0x5770,	// (0x00064966) aid_list_z_g_a_sm

0xd21d,	// (0x0006c413) aid_list_z_g_d

0x5778,	// (0x0006496e) aid_txt_z_prm

0x5786,	// (0x0006497c) aid_txt_z_prm_cp01

0x5794,	// (0x0006498a) aid_txt_z_sec

0xd225,	// (0x0006c41b) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd225,	// (0x0006c41b) main_cntbar_detail_cont_pane_g1

0xd232,	// (0x0006c428) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd232,	// (0x0006c428) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdd3,	// (0x0006efc9) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdd3,	// (0x0006efc9) main_cntbar_detail_cont_pane_g

0x35b7,	// (0x000627ad) main_cntbar_detail_cont_pane_t1

0x35c5,	// (0x000627bb) main_cntbar_detail_cont_pane_t2

0x35d3,	// (0x000627c9) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdd8,	// (0x0006efce) main_cntbar_detail_cont_pane_t

0xd23e,	// (0x0006c434) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd23e,	// (0x0006c434) cell_cntbar_detail_list_shct_pane

0x35e1,	// (0x000627d7) cntbar_detail_list_shct_pane_g1

0x35ea,	// (0x000627e0) cntbar_detail_list_shct_pane_g2

0x0001,

0xfddf,	// (0x0006efd5) cntbar_detail_list_shct_pane_g

0xd250,	// (0x0006c446) cntbar_detail_list_event_pane_g1_ParamLimits

0xd250,	// (0x0006c446) cntbar_detail_list_event_pane_g1

0xd25c,	// (0x0006c452) cntbar_detail_list_event_pane_g2_ParamLimits

0xd25c,	// (0x0006c452) cntbar_detail_list_event_pane_g2

0x0005,

0xfde4,	// (0x0006efda) cntbar_detail_list_event_pane_g_ParamLimits

0xfde4,	// (0x0006efda) cntbar_detail_list_event_pane_g

0xd2c8,	// (0x0006c4be) cntbar_detail_list_event_pane_t1_ParamLimits

0xd2c8,	// (0x0006c4be) cntbar_detail_list_event_pane_t1

0xd2dd,	// (0x0006c4d3) cntbar_detail_list_event_pane_t2_ParamLimits

0xd2dd,	// (0x0006c4d3) cntbar_detail_list_event_pane_t2

0x0002,

0xfdf1,	// (0x0006efe7) cntbar_detail_list_event_pane_t_ParamLimits

0xfdf1,	// (0x0006efe7) cntbar_detail_list_event_pane_t

0x6699,	// (0x0006588f) cell_cntbar_detail_list_shct_pane_g1

0x82e7,	// (0x000674dd) navi_pane_mv_g3

0x8459,	// (0x0006764f) main_cntbar_detail_pane_ParamLimits

0x0431,	// (0x0005f627) main_notif_wgt_pane

0xa9bd,	// (0x00069bb3) aid_tch_main_mp4_pane_g4

0xabfc,	// (0x00069df2) popup_slider_window_cp02

0x56ac,	// (0x000648a2) list_recal_day_event_pane

0xd1ac,	// (0x0006c3a2) cntbar_detail_btn_pane_ParamLimits

0xd1ac,	// (0x0006c3a2) cntbar_detail_btn_pane

0xd1b8,	// (0x0006c3ae) cntbar_detail_btn_pane_cp01_ParamLimits

0xd1b8,	// (0x0006c3ae) cntbar_detail_btn_pane_cp01

0xd1d2,	// (0x0006c3c8) cntbar_detail_list_shct_pane_ParamLimits

0xd1de,	// (0x0006c3d4) cntbar_detail_pane_g1_ParamLimits

0xd1de,	// (0x0006c3d4) cntbar_detail_pane_g1

0xd1ea,	// (0x0006c3e0) cntbar_detail_pane_t1_ParamLimits

0xd1ea,	// (0x0006c3e0) cntbar_detail_pane_t1

0xd268,	// (0x0006c45e) cntbar_detail_list_event_pane_g3_ParamLimits

0xd268,	// (0x0006c45e) cntbar_detail_list_event_pane_g3

0xd280,	// (0x0006c476) cntbar_detail_list_event_pane_g4_ParamLimits

0xd280,	// (0x0006c476) cntbar_detail_list_event_pane_g4

0xd298,	// (0x0006c48e) cntbar_detail_list_event_pane_g5_ParamLimits

0xd298,	// (0x0006c48e) cntbar_detail_list_event_pane_g5

0xd2b0,	// (0x0006c4a6) cntbar_detail_list_event_pane_g6_ParamLimits

0xd2b0,	// (0x0006c4a6) cntbar_detail_list_event_pane_g6

0xd2f2,	// (0x0006c4e8) cntbar_detail_list_event_pane_t3_ParamLimits

0xd2f2,	// (0x0006c4e8) cntbar_detail_list_event_pane_t3

0xd304,	// (0x0006c4fa) popup_notif_wgt_window_ParamLimits

0xd304,	// (0x0006c4fa) popup_notif_wgt_window

0xd312,	// (0x0006c508) popup_submenu_window_cp01_ParamLimits

0xd312,	// (0x0006c508) popup_submenu_window_cp01

0x64dd,	// (0x000656d3) bg_popup_window_pane_cp10

0x35f3,	// (0x000627e9) listscroll_notif_wgt_pane

0x3604,	// (0x000627fa) list_notif_wgt_window

0x360d,	// (0x00062803) scroll_pane_cp033

0xd31e,	// (0x0006c514) list_notif_wgt_row_pane_ParamLimits

0xd31e,	// (0x0006c514) list_notif_wgt_row_pane

0x3616,	// (0x0006280c) aid_size_list_notif_wgt_del

0x3623,	// (0x00062819) list_notif_wgt_row_pane_g1

0x362f,	// (0x00062825) list_notif_wgt_row_pane_g2

0x3643,	// (0x00062839) list_notif_wgt_row_pane_g3

0x0002,

0xfdf8,	// (0x0006efee) list_notif_wgt_row_pane_g

0x3650,	// (0x00062846) list_notif_wgt_row_pane_t1

0x3666,	// (0x0006285c) list_notif_wgt_row_pane_t2

0x3678,	// (0x0006286e) list_notif_wgt_row_pane_t3

0x0002,

0xfdff,	// (0x0006eff5) list_notif_wgt_row_pane_t

0x1e4e,	// (0x00061044) list_recal_day_event_pane_g1

0x368a,	// (0x00062880) list_recal_day_event_pane_t1

0x0431,	// (0x0005f627) bg_button_pane_cp045

0xd330,	// (0x0006c526) cntbar_detail_btn_pane_t1

0xebe2,	// (0x0006ddd8) main_callh_pane_ParamLimits

0xebe2,	// (0x0006ddd8) main_callh_pane

0x0431,	// (0x0005f627) main_coverflow0_pane

0x0431,	// (0x0005f627) main_wgtman_pane

0xc92b,	// (0x0006bb21) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc92b,	// (0x0006bb21) main_fs_bigclock_unlock_btn_pane

0x2f49,	// (0x0006213f) bg_button_pane_cp16

0x2f59,	// (0x0006214f) cell_tport_appsw_pane_g3

0xd33e,	// (0x0006c534) cf0_flow_pane_ParamLimits

0xd33e,	// (0x0006c534) cf0_flow_pane

0x3699,	// (0x0006288f) listscroll_cf0_pane

0x36a2,	// (0x00062898) main_cf0_pane_g1

0xd34d,	// (0x0006c543) main_cf0_pane_t1_ParamLimits

0xd34d,	// (0x0006c543) main_cf0_pane_t1

0xd35f,	// (0x0006c555) main_cf0_pane_t2_ParamLimits

0xd35f,	// (0x0006c555) main_cf0_pane_t2

0x0001,

0xfe0b,	// (0x0006f001) main_cf0_pane_t_ParamLimits

0xfe0b,	// (0x0006f001) main_cf0_pane_t

0x36b4,	// (0x000628aa) scroll_pane_cp11

0xd371,	// (0x0006c567) cf0_flow_pane_g1

0xd379,	// (0x0006c56f) cf0_flow_pane_g2

0x0001,

0xfe10,	// (0x0006f006) cf0_flow_pane_g

0xd381,	// (0x0006c577) cf0_flow_pane_t1

0x0431,	// (0x0005f627) main_call6_pane

0x0431,	// (0x0005f627) main_calllock_pane

0xd38f,	// (0x0006c585) call6_btn_grp_pane_ParamLimits

0xd38f,	// (0x0006c585) call6_btn_grp_pane

0xd39c,	// (0x0006c592) call6_pane_g1_ParamLimits

0xd39c,	// (0x0006c592) call6_pane_g1

0xd3a9,	// (0x0006c59f) popup_call6_1st_window_ParamLimits

0xd3a9,	// (0x0006c59f) popup_call6_1st_window

0xd3b5,	// (0x0006c5ab) popup_call6_2nd_window_ParamLimits

0xd3b5,	// (0x0006c5ab) popup_call6_2nd_window

0xd3c1,	// (0x0006c5b7) cell_call6_btn_pane_ParamLimits

0xd3c1,	// (0x0006c5b7) cell_call6_btn_pane

0x64dd,	// (0x000656d3) bg_popup_call2_in_pane_cp03

0x36bd,	// (0x000628b3) popup_call6_1st_window_g1

0x36c5,	// (0x000628bb) popup_call6_1st_window_g2

0x36cd,	// (0x000628c3) popup_call6_1st_window_g3

0x0002,

0xfe15,	// (0x0006f00b) popup_call6_1st_window_g

0x36d5,	// (0x000628cb) popup_call6_1st_window_t1

0x36e4,	// (0x000628da) popup_call6_1st_window_t2

0x36f2,	// (0x000628e8) popup_call6_1st_window_t3

0x0002,

0xfe1c,	// (0x0006f012) popup_call6_1st_window_t

0x64dd,	// (0x000656d3) bg_popup_call2_in_pane_cp04

0x3700,	// (0x000628f6) popup_call6_2nd_window_g1

0x3708,	// (0x000628fe) popup_call6_2nd_window_g2

0x3710,	// (0x00062906) popup_call6_2nd_window_g3

0x0002,

0xfe23,	// (0x0006f019) popup_call6_2nd_window_g

0x3718,	// (0x0006290e) popup_call6_2nd_window_t1

0x0431,	// (0x0005f627) bg_button_pane_cp15

0xd3d0,	// (0x0006c5c6) cell_call6_btn_pane_g1

0xd3d9,	// (0x0006c5cf) cell_call6_btn_pane_t1

0xd3e8,	// (0x0006c5de) listscroll_wgtman_pane_ParamLimits

0xd3e8,	// (0x0006c5de) listscroll_wgtman_pane

0xd404,	// (0x0006c5fa) wgtman_btn_pane_ParamLimits

0xd404,	// (0x0006c5fa) wgtman_btn_pane

0x7e22,	// (0x00067018) aid_scroll_copy1

0x3727,	// (0x0006291d) list_wgtman_pane

0xd437,	// (0x0006c62d) wgtman_btn_pane_g1_ParamLimits

0xd437,	// (0x0006c62d) wgtman_btn_pane_g1

0xd45f,	// (0x0006c655) wgtman_btn_pane_t1_ParamLimits

0xd45f,	// (0x0006c655) wgtman_btn_pane_t1

0x3731,	// (0x00062927) wgtman_btn_pane_t2_ParamLimits

0x3731,	// (0x00062927) wgtman_btn_pane_t2

0x0001,

0xfe2a,	// (0x0006f020) wgtman_btn_pane_t_ParamLimits

0xfe2a,	// (0x0006f020) wgtman_btn_pane_t

0x39a8,	// (0x00062b9e) listrow_wgtman_pane_ParamLimits

0x39a8,	// (0x00062b9e) listrow_wgtman_pane

0xd496,	// (0x0006c68c) listrow_wgtman_pane_g1

0xd4a3,	// (0x0006c699) listrow_wgtman_pane_g2

0x0001,

0xfe2f,	// (0x0006f025) listrow_wgtman_pane_g

0x57a2,	// (0x00064998) listrow_wgtman_pane_t1

0x57ba,	// (0x000649b0) listrow_wgtman_pane_t2

0x0001,

0xfe34,	// (0x0006f02a) listrow_wgtman_pane_t

0x57e0,	// (0x000649d6) wait_bar_pane_cp09

0x3748,	// (0x0006293e) main_calllock_btn_pane

0x3750,	// (0x00062946) main_calllock_pane_g1

0x0431,	// (0x0005f627) bg_button_pane_cp17

0x3759,	// (0x0006294f) main_calllock_btn_pane_g1

0x3762,	// (0x00062958) main_calllock_btn_pane_t1

0x0431,	// (0x0005f627) main_dialer3_pane

0x0431,	// (0x0005f627) main_fmrd2_pane

0x6699,	// (0x0006588f) main_fs_bigclock_unlock_btn_pane_g1

0x3779,	// (0x0006296f) main_fs_bigclock_unlock_btn_pane_t1

0xd4bb,	// (0x0006c6b1) area_fmrd2_info_pane_ParamLimits

0xd4bb,	// (0x0006c6b1) area_fmrd2_info_pane

0xd4c7,	// (0x0006c6bd) area_fmrd2_visual_pane_ParamLimits

0xd4c7,	// (0x0006c6bd) area_fmrd2_visual_pane

0xd4d5,	// (0x0006c6cb) fmrd2_indi_pane_ParamLimits

0xd4d5,	// (0x0006c6cb) fmrd2_indi_pane

0xd4e2,	// (0x0006c6d8) area_fmrd2_visual_pane_g1

0xd4ea,	// (0x0006c6e0) area_fmrd2_visual_pane_t1

0xd4f8,	// (0x0006c6ee) area_fmrd2_visual_pane_t2

0xd506,	// (0x0006c6fc) area_fmrd2_visual_pane_t3

0x0002,

0xfe3e,	// (0x0006f034) area_fmrd2_visual_pane_t

0xd514,	// (0x0006c70a) area_fmrd2_info_pane_g1

0xd51c,	// (0x0006c712) area_fmrd2_info_pane_t1

0xd52a,	// (0x0006c720) area_fmrd2_info_pane_t2

0xd538,	// (0x0006c72e) area_fmrd2_info_pane_t3

0xd546,	// (0x0006c73c) area_fmrd2_info_pane_t4

0x0003,

0xfe45,	// (0x0006f03b) area_fmrd2_info_pane_t

0xd554,	// (0x0006c74a) fmrd2_indi_pane_t1

0xd562,	// (0x0006c758) fmrd2_indi_pane_t2

0xd570,	// (0x0006c766) fmrd2_indi_pane_t3

0x0002,

0xfe4e,	// (0x0006f044) fmrd2_indi_pane_t

0x2a65,	// (0x00061c5b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2a65,	// (0x00061c5b) list_single_fs_bigclock_indicator_pane_g5

0x2b13,	// (0x00061d09) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2b13,	// (0x00061d09) list_single_fs_bigclock_indicator_pane_t5

0xce92,	// (0x0006c088) aid_cell_bcale_month_pane_ParamLimits

0xce92,	// (0x0006c088) aid_cell_bcale_month_pane

0xceb9,	// (0x0006c0af) bcale_month_pane_ParamLimits

0xceb9,	// (0x0006c0af) bcale_month_pane

0xcecf,	// (0x0006c0c5) bcale_preview_pane_ParamLimits

0xcecf,	// (0x0006c0c5) bcale_preview_pane

0x3505,	// (0x000626fb) list_single_fs_bigclock_pane_t1_ParamLimits

0x3521,	// (0x00062717) list_single_fs_bigclock_pane_t2_ParamLimits

0x3521,	// (0x00062717) list_single_fs_bigclock_pane_t2

0x0001,

0xfdc9,	// (0x0006efbf) list_single_fs_bigclock_pane_t_ParamLimits

0xfdc9,	// (0x0006efbf) list_single_fs_bigclock_pane_t

0x3771,	// (0x00062967) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe39,	// (0x0006f02f) main_fs_bigclock_unlock_btn_pane_g

0xd57e,	// (0x0006c774) aid_dia3_key_size_ParamLimits

0xd57e,	// (0x0006c774) aid_dia3_key_size

0xd58a,	// (0x0006c780) aid_dia3_listrow_size_ParamLimits

0xd58a,	// (0x0006c780) aid_dia3_listrow_size

0xd598,	// (0x0006c78e) dia3_keypad_fun_pane_ParamLimits

0xd598,	// (0x0006c78e) dia3_keypad_fun_pane

0xd5a4,	// (0x0006c79a) dia3_keypad_num_pane_ParamLimits

0xd5a4,	// (0x0006c79a) dia3_keypad_num_pane

0xd5b0,	// (0x0006c7a6) dia3_listscroll_pane_ParamLimits

0xd5b0,	// (0x0006c7a6) dia3_listscroll_pane

0xd5bc,	// (0x0006c7b2) dia3_numentry_pane_ParamLimits

0xd5bc,	// (0x0006c7b2) dia3_numentry_pane

0x3787,	// (0x0006297d) dia3_list_pane

0x3790,	// (0x00062986) scroll_pane_cp12

0x0431,	// (0x0005f627) bg_dia3_numentry_pane

0xd5c8,	// (0x0006c7be) dia3_numentry_pane_t1

0xd5d7,	// (0x0006c7cd) cell_dia3_key_num_pane

0xd5df,	// (0x0006c7d5) cell_dia3_key0_fun_pane_ParamLimits

0xd5df,	// (0x0006c7d5) cell_dia3_key0_fun_pane

0xd5ec,	// (0x0006c7e2) cell_dia3_key1_fun_pane_ParamLimits

0xd5ec,	// (0x0006c7e2) cell_dia3_key1_fun_pane

0xd5f9,	// (0x0006c7ef) dia3_listrow_pane

0x2774,	// (0x0006196a) bg_dia3_numentry_pane_g1

0x0431,	// (0x0005f627) bg_button_pane_cp21

0x3799,	// (0x0006298f) cell_dia3_key_num_pane_t1

0x37a7,	// (0x0006299d) cell_dia3_key_num_pane_t2

0x37b6,	// (0x000629ac) cell_dia3_key_num_pane_t3

0x37c5,	// (0x000629bb) cell_dia3_key_num_pane_t4

0x0003,

0xfe55,	// (0x0006f04b) cell_dia3_key_num_pane_t

0x0431,	// (0x0005f627) bg_button_pane_cp19

0x37d4,	// (0x000629ca) cell_dia3_key0_fun_pane_g1

0x0431,	// (0x0005f627) bg_button_pane_cp20

0xd606,	// (0x0006c7fc) cell_dia3_key1_fun_pane_g1

0xd60e,	// (0x0006c804) area_left_week_number_pane

0xd61f,	// (0x0006c815) area_top_day_name_pane

0xd62b,	// (0x0006c821) frame_month_view_pane

0x37dc,	// (0x000629d2) grid_month_view_pane

0xd63c,	// (0x0006c832) cell_top_day_name_pane_ParamLimits

0xd63c,	// (0x0006c832) cell_top_day_name_pane

0xd652,	// (0x0006c848) cell_area_left_week_number_pane_ParamLimits

0xd652,	// (0x0006c848) cell_area_left_week_number_pane

0xd671,	// (0x0006c867) cell_month_view_pane_ParamLimits

0xd671,	// (0x0006c867) cell_month_view_pane

0x37ea,	// (0x000629e0) frm_month_g1

0xd697,	// (0x0006c88d) frm_month_g2

0xd6a6,	// (0x0006c89c) frm_month_g3

0xd6b5,	// (0x0006c8ab) frm_month_g4

0xd6c4,	// (0x0006c8ba) frm_month_g5

0xd6d3,	// (0x0006c8c9) frm_month_g6

0xd6e2,	// (0x0006c8d8) frm_month_g7

0x37f7,	// (0x000629ed) frm_month_g8

0xd6f1,	// (0x0006c8e7) frm_month_g9

0xd6fe,	// (0x0006c8f4) frm_month_g10

0xd70b,	// (0x0006c901) frm_month_g11

0xd718,	// (0x0006c90e) frm_month_g12

0xd725,	// (0x0006c91b) frm_month_g13

0xd732,	// (0x0006c928) frm_month_g14

0xd73f,	// (0x0006c935) frm_month_g15

0xd74c,	// (0x0006c942) frm_month_g16

0x000f,

0xfe5e,	// (0x0006f054) frm_month_g

0x3804,	// (0x000629fa) cell_top_day_name_pane_t1

0xd759,	// (0x0006c94f) cell_area_left_week_number_pane_g1

0xd768,	// (0x0006c95e) cell_area_left_week_number_pane_t1

0x0b8a,	// (0x0005fd80) cell_month_view_pane_g1

0xd77e,	// (0x0006c974) cell_month_view_pane_t1

0x0431,	// (0x0005f627) main_fps_pane

0x2d71,	// (0x00061f67) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2d71,	// (0x00061f67) cmail_ddmenu_btn02_pane_cp1

0x2d8d,	// (0x00061f83) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x2d8d,	// (0x00061f83) cmail_ddmenu_btn02_pane_cp2

0xd070,	// (0x0006c266) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd070,	// (0x0006c266) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd7c,	// (0x0006ef72) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd7c,	// (0x0006ef72) cmail_ddmenu_btn02_pane_g

0xd08e,	// (0x0006c284) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd08e,	// (0x0006c284) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd81,	// (0x0006ef77) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd81,	// (0x0006ef77) cmail_ddmenu_btn02_pane_t

0xd794,	// (0x0006c98a) fps_text_pane_ParamLimits

0xd794,	// (0x0006c98a) fps_text_pane

0xd7a1,	// (0x0006c997) main_fps_pane_g1_ParamLimits

0xd7a1,	// (0x0006c997) main_fps_pane_g1

0xd7ad,	// (0x0006c9a3) wait_bar_pane_cp010_ParamLimits

0xd7ad,	// (0x0006c9a3) wait_bar_pane_cp010

0xd7b9,	// (0x0006c9af) fps_text_pane_t1_ParamLimits

0xd7b9,	// (0x0006c9af) fps_text_pane_t1

0xafd2,	// (0x0006a1c8) cam4_image_uncrop_pane_g1

0xafdb,	// (0x0006a1d1) cam4_image_uncrop_pane_g2

0xafe4,	// (0x0006a1da) cam4_image_uncrop_pane_g3

0xafed,	// (0x0006a1e3) cam4_image_uncrop_pane_g4

0x0003,

0xf87e,	// (0x0006ea74) cam4_image_uncrop_pane_g

0xd5f9,	// (0x0006c7ef) dia3_listrow_pane_ParamLimits

0x0431,	// (0x0005f627) main_phob2_pane

0xcd4f,	// (0x0006bf45) cell_tport_appsw_pane_cp02_ParamLimits

0xcd4f,	// (0x0006bf45) cell_tport_appsw_pane_cp02

0xcd5c,	// (0x0006bf52) cell_tport_appsw_pane_cp03_ParamLimits

0xcd5c,	// (0x0006bf52) cell_tport_appsw_pane_cp03

0x0431,	// (0x0005f627) phob2_contact_card_pane

0x0431,	// (0x0005f627) phob2_listscroll_pane

0x3817,	// (0x00062a0d) phob2_list_pane

0x381f,	// (0x00062a15) scroll_pane_cp034

0xd7d2,	// (0x0006c9c8) phob2_cc_data_pane_ParamLimits

0xd7d2,	// (0x0006c9c8) phob2_cc_data_pane

0xd7ea,	// (0x0006c9e0) phob2_cc_listscroll_pane_ParamLimits

0xd7ea,	// (0x0006c9e0) phob2_cc_listscroll_pane

0xd802,	// (0x0006c9f8) list_double_large_graphic_phob2_pane_ParamLimits

0xd802,	// (0x0006c9f8) list_double_large_graphic_phob2_pane

0xd814,	// (0x0006ca0a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd814,	// (0x0006ca0a) list_double_large_graphic_phob2_pane_g1

0x57f2,	// (0x000649e8) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x57f2,	// (0x000649e8) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe7f,	// (0x0006f075) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe7f,	// (0x0006f075) list_double_large_graphic_phob2_pane_g

0x580a,	// (0x00064a00) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x580a,	// (0x00064a00) list_double_large_graphic_phob2_pane_t1

0x581f,	// (0x00064a15) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x581f,	// (0x00064a15) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe88,	// (0x0006f07e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe88,	// (0x0006f07e) list_double_large_graphic_phob2_pane_t

0x0431,	// (0x0005f627) list_highlight_pane_cp024

0x3827,	// (0x00062a1d) phob2_cc_button_pane

0xd82d,	// (0x0006ca23) phob2_cc_data_pane_g1_ParamLimits

0xd82d,	// (0x0006ca23) phob2_cc_data_pane_g1

0xd83c,	// (0x0006ca32) phob2_cc_data_pane_g2_ParamLimits

0xd83c,	// (0x0006ca32) phob2_cc_data_pane_g2

0x0001,

0xfe8d,	// (0x0006f083) phob2_cc_data_pane_g_ParamLimits

0xfe8d,	// (0x0006f083) phob2_cc_data_pane_g

0xd84b,	// (0x0006ca41) phob2_cc_data_pane_t1_ParamLimits

0xd84b,	// (0x0006ca41) phob2_cc_data_pane_t1

0xd860,	// (0x0006ca56) phob2_cc_data_pane_t2_ParamLimits

0xd860,	// (0x0006ca56) phob2_cc_data_pane_t2

0xd875,	// (0x0006ca6b) phob2_cc_data_pane_t3_ParamLimits

0xd875,	// (0x0006ca6b) phob2_cc_data_pane_t3

0x0002,

0xfe92,	// (0x0006f088) phob2_cc_data_pane_t_ParamLimits

0xfe92,	// (0x0006f088) phob2_cc_data_pane_t

0x382f,	// (0x00062a25) phob2_cc_list_pane_ParamLimits

0x382f,	// (0x00062a25) phob2_cc_list_pane

0x2691,	// (0x00061887) scroll_pane_cp035_ParamLimits

0x2691,	// (0x00061887) scroll_pane_cp035

0x8459,	// (0x0006764f) bg_button_pane_cp033

0x383b,	// (0x00062a31) phob2_cc_button_pane_g1

0x3847,	// (0x00062a3d) phob2_cc_button_pane_t1

0x385c,	// (0x00062a52) phob2_cc_button_pane_t2

0x0001,

0xfe99,	// (0x0006f08f) phob2_cc_button_pane_t

0xd88a,	// (0x0006ca80) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd88a,	// (0x0006ca80) list_double_large_graphic_phob2_cc_pane

0xd8d0,	// (0x0006cac6) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd8d0,	// (0x0006cac6) list_double_large_graphic_phob2_cc_pane_g1

0xd8e1,	// (0x0006cad7) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd8e1,	// (0x0006cad7) list_double_large_graphic_phob2_cc_pane_g2

0x5834,	// (0x00064a2a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x5834,	// (0x00064a2a) list_double_large_graphic_phob2_cc_pane_g3

0x5843,	// (0x00064a39) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x5843,	// (0x00064a39) list_double_large_graphic_phob2_cc_pane_g4

0x5854,	// (0x00064a4a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x5854,	// (0x00064a4a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe9e,	// (0x0006f094) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe9e,	// (0x0006f094) list_double_large_graphic_phob2_cc_pane_g

0x5863,	// (0x00064a59) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x5863,	// (0x00064a59) list_double_large_graphic_phob2_cc_pane_t1

0x588c,	// (0x00064a82) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x588c,	// (0x00064a82) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfea9,	// (0x0006f09f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfea9,	// (0x0006f09f) list_double_large_graphic_phob2_cc_pane_t

0x386e,	// (0x00062a64) list_highlight_pane_cp025_ParamLimits

0x386e,	// (0x00062a64) list_highlight_pane_cp025

0x8459,	// (0x0006764f) bg_button_pane_cp033_ParamLimits

0x383b,	// (0x00062a31) phob2_cc_button_pane_g1_ParamLimits

0x3847,	// (0x00062a3d) phob2_cc_button_pane_t1_ParamLimits

0x385c,	// (0x00062a52) phob2_cc_button_pane_t2_ParamLimits

0xfe99,	// (0x0006f08f) phob2_cc_button_pane_t_ParamLimits

0x5ad1,	// (0x00064cc7) popup_wgtman_window

0x2794,	// (0x0006198a) scroll_pane_cp038

0xd41f,	// (0x0006c615) wgtman_btn_pane_cp_01_ParamLimits

0xd41f,	// (0x0006c615) wgtman_btn_pane_cp_01

0x387c,	// (0x00062a72) wgtman_content_pane

0x3885,	// (0x00062a7b) wgtman_heading_pane

0x0431,	// (0x0005f627) bg_heading_pane_cp02

0x388e,	// (0x00062a84) wgtman_heading_pane_g1

0x3896,	// (0x00062a8c) wgtman_heading_pane_t1

0x38a4,	// (0x00062a9a) scroll_pane_cp036

0x38ac,	// (0x00062aa2) wgtman_list_pane

0x38b4,	// (0x00062aaa) wgtman_list_pane_t1_ParamLimits

0x38b4,	// (0x00062aaa) wgtman_list_pane_t1

0xaf37,	// (0x0006a12d) cam4_grid_pane

0x4f01,	// (0x000640f7) bg_button_pane_cp015_ParamLimits

0xbaeb,	// (0x0006ace1) bg_button_pane_cp016_ParamLimits

0xbaf7,	// (0x0006aced) bg_button_pane_cp017_ParamLimits

0xbb12,	// (0x0006ad08) popup_vitu2_query_window_g3_ParamLimits

0xbb12,	// (0x0006ad08) popup_vitu2_query_window_g3

0x4fb6,	// (0x000641ac) popup_vitu2_query_window_t6_ParamLimits

0x4fb6,	// (0x000641ac) popup_vitu2_query_window_t6

0x4fe1,	// (0x000641d7) popup_vitu2_query_window_t7_ParamLimits

0x4fe1,	// (0x000641d7) popup_vitu2_query_window_t7

0x1b77,	// (0x00060d6d) cam4_grid_pane_g1

0x1b80,	// (0x00060d76) cam4_grid_pane_g2

0x38cb,	// (0x00062ac1) cam4_grid_pane_g3

0x38d4,	// (0x00062aca) cam4_grid_pane_g4

0x0003,

0xfeae,	// (0x0006f0a4) cam4_grid_pane_g

0x6791,	// (0x00065987) aid_placing_vt_slider_lsc_ParamLimits

0x6a89,	// (0x00065c7f) vidtel_button_pane_ParamLimits

0x6a89,	// (0x00065c7f) vidtel_button_pane

0x0431,	// (0x0005f627) bg_button_pane_cp034

0xd8f0,	// (0x0006cae6) vidtel_button_pane_g1

0xd8f8,	// (0x0006caee) vidtel_button_pane_t1

0x1e1f,	// (0x00061015) aid_size_vtel_slider_touch

0x2691,	// (0x00061887) scroll_pane_cp039

0x27c3,	// (0x000619b9) ncim_query_button_pane_cp01_ParamLimits

0x27e2,	// (0x000619d8) ncimui_query_pane_g1_ParamLimits

0x8459,	// (0x0006764f) input_focus_pane_cp012_ParamLimits

0x2807,	// (0x000619fd) ncim_query_entry_pane_t1_ParamLimits

0x2691,	// (0x00061887) scroll_pane_cp039_ParamLimits

0x81e5,	// (0x000673db) navi_pane_bcale_mc_g1

0x81ed,	// (0x000673e3) navi_pane_bcale_mc_t1

0x2dc1,	// (0x00061fb7) main_sp_fs_email_pane_g1

0x2dcd,	// (0x00061fc3) main_sp_fs_email_pane_g2

0x0001,

0xfc79,	// (0x0006ee6f) main_sp_fs_email_pane_g

0x324c,	// (0x00062442) list_single_cale_mrui_row_pane_g3_ParamLimits

0x324c,	// (0x00062442) list_single_cale_mrui_row_pane_g3

0x5709,	// (0x000648ff) list_single_recal_day_pane_g5_event_pane

0x5720,	// (0x00064916) list_single_recal_day_pane_g7

0x38dd,	// (0x00062ad3) list_recal_day_event_pane_cp01

0x38e6,	// (0x00062adc) list_recal_vselct_arw_lo_pane_cp01

0x38ee,	// (0x00062ae4) list_recal_vselct_arw_up_pane_cp01

0x38f6,	// (0x00062aec) list_recal_vselct_pane_cp01

0x1e4e,	// (0x00061044) list_recal_day_event_pane_cp01_g1

0x58b5,	// (0x00064aab) list_recal_day_event_pane_cp01_t1

0x5728,	// (0x0006491e) list_single_recal_day_pane_t1_ParamLimits

0x573a,	// (0x00064930) list_single_recal_day_pane_t2_ParamLimits

0xfd91,	// (0x0006ef87) list_single_recal_day_pane_t_ParamLimits

0x0b10,	// (0x0005fd06) bg_notes_pane_ParamLimits

0x0bf0,	// (0x0005fde6) list_notes_pane_ParamLimits

0x5cce,	// (0x00064ec4) scroll_pane_cp06_ParamLimits

0x0c30,	// (0x0005fe26) main_notes_pane_ParamLimits

0x8459,	// (0x0006764f) main_welc_pane

0xd92c,	// (0x0006cb22) main_welc_body_pane_ParamLimits

0xd92c,	// (0x0006cb22) main_welc_body_pane

0xd945,	// (0x0006cb3b) main_welc_opti_pane_ParamLimits

0xd945,	// (0x0006cb3b) main_welc_opti_pane

0xd99e,	// (0x0006cb94) main_welc_pane_t1_ParamLimits

0xd99e,	// (0x0006cb94) main_welc_pane_t1

0xdb04,	// (0x0006ccfa) main_welc_body_row_pane_ParamLimits

0xdb04,	// (0x0006ccfa) main_welc_body_row_pane

0x0ba6,	// (0x0005fd9c) main_welc_opti_row_pane_ParamLimits

0x0ba6,	// (0x0005fd9c) main_welc_opti_row_pane

0x391e,	// (0x00062b14) main_welc_opti_row_pane_g1

0xdb19,	// (0x0006cd0f) main_welc_opti_row_pane_t1

0x3926,	// (0x00062b1c) main_welc_body_row_pane_t1

0x35fc,	// (0x000627f2) popup_notif_wgt_heading_pane

0x3616,	// (0x0006280c) aid_size_list_notif_wgt_del_ParamLimits

0x3623,	// (0x00062819) list_notif_wgt_row_pane_g1_ParamLimits

0x362f,	// (0x00062825) list_notif_wgt_row_pane_g2_ParamLimits

0x3643,	// (0x00062839) list_notif_wgt_row_pane_g3_ParamLimits

0xfdf8,	// (0x0006efee) list_notif_wgt_row_pane_g_ParamLimits

0x3650,	// (0x00062846) list_notif_wgt_row_pane_t1_ParamLimits

0x3666,	// (0x0006285c) list_notif_wgt_row_pane_t2_ParamLimits

0x3678,	// (0x0006286e) list_notif_wgt_row_pane_t3_ParamLimits

0xfdff,	// (0x0006eff5) list_notif_wgt_row_pane_t_ParamLimits

0xd496,	// (0x0006c68c) listrow_wgtman_pane_g1_ParamLimits

0xd4a3,	// (0x0006c699) listrow_wgtman_pane_g2_ParamLimits

0xfe2f,	// (0x0006f025) listrow_wgtman_pane_g_ParamLimits

0x57a2,	// (0x00064998) listrow_wgtman_pane_t1_ParamLimits

0x57ba,	// (0x000649b0) listrow_wgtman_pane_t2_ParamLimits

0xfe34,	// (0x0006f02a) listrow_wgtman_pane_t_ParamLimits

0x57e0,	// (0x000649d6) wait_bar_pane_cp09_ParamLimits

0x0431,	// (0x0005f627) bg_popup_heading_pane_cp02

0x3935,	// (0x00062b2b) popup_notif_wgt_heading_pane_g1

0x393d,	// (0x00062b33) popup_notif_wgt_heading_pane_t1

0xebf0,	// (0x0006dde6) main_vids_pane

0x0431,	// (0x0005f627) vids_listscroll_pane

0xdb28,	// (0x0006cd1e) scroll_pane_cp040

0x0431,	// (0x0005f627) vids_list_pane

0xdb31,	// (0x0006cd27) vids_list_double_pane_ParamLimits

0xdb31,	// (0x0006cd27) vids_list_double_pane

0xdb42,	// (0x0006cd38) vids_list_double_pane_g1

0xdb4b,	// (0x0006cd41) vids_list_double_pane_t1

0xdb5b,	// (0x0006cd51) vids_list_double_pane_t2

0x0001,

0xfecd,	// (0x0006f0c3) vids_list_double_pane_t

0x8459,	// (0x0006764f) main_ncimui_pane_ParamLimits

0xc53f,	// (0x0006b735) main_ncimui_pane_g1_ParamLimits

0xc54b,	// (0x0006b741) main_ncimui_pane_g2_ParamLimits

0xc54b,	// (0x0006b741) main_ncimui_pane_g2

0x0001,

0xfb7a,	// (0x0006ed70) main_ncimui_pane_g_ParamLimits

0xfb7a,	// (0x0006ed70) main_ncimui_pane_g

0xd95a,	// (0x0006cb50) main_welc_pane_g1_ParamLimits

0xd95a,	// (0x0006cb50) main_welc_pane_g1

0xd966,	// (0x0006cb5c) main_welc_pane_g2_ParamLimits

0xd966,	// (0x0006cb5c) main_welc_pane_g2

0x0003,

0xfeb7,	// (0x0006f0ad) main_welc_pane_g_ParamLimits

0xfeb7,	// (0x0006f0ad) main_welc_pane_g

0x0b10,	// (0x0005fd06) listscroll_mce_pane_ParamLimits

0x8351,	// (0x00067547) wait_bar_pane_cp10

0xebd6,	// (0x0006ddcc) main_cale_day_pane_ParamLimits

0xebd6,	// (0x0006ddcc) main_cale_week_pane_ParamLimits

0x0b10,	// (0x0005fd06) main_messa_pane_ParamLimits

0xa4db,	// (0x000696d1) main_clock2_btn_pane_ParamLimits

0xa4db,	// (0x000696d1) main_clock2_btn_pane

0x1420,	// (0x00060616) main_clock2_btn_pane_cp01_ParamLimits

0x1420,	// (0x00060616) main_clock2_btn_pane_cp01

0x3207,	// (0x000623fd) list_cale_mrui_pane_ParamLimits

0x36ac,	// (0x000628a2) main_cf0_pane_g2

0x0001,

0xfe06,	// (0x0006effc) main_cf0_pane_g

0xd60e,	// (0x0006c804) area_left_week_number_pane_ParamLimits

0xd61f,	// (0x0006c815) area_top_day_name_pane_ParamLimits

0xd62b,	// (0x0006c821) frame_month_view_pane_ParamLimits

0x37dc,	// (0x000629d2) grid_month_view_pane_ParamLimits

0x37ea,	// (0x000629e0) frm_month_g1_ParamLimits

0xd697,	// (0x0006c88d) frm_month_g2_ParamLimits

0xd6a6,	// (0x0006c89c) frm_month_g3_ParamLimits

0xd6b5,	// (0x0006c8ab) frm_month_g4_ParamLimits

0xd6c4,	// (0x0006c8ba) frm_month_g5_ParamLimits

0xd6d3,	// (0x0006c8c9) frm_month_g6_ParamLimits

0xd6e2,	// (0x0006c8d8) frm_month_g7_ParamLimits

0x37f7,	// (0x000629ed) frm_month_g8_ParamLimits

0xd6f1,	// (0x0006c8e7) frm_month_g9_ParamLimits

0xd6fe,	// (0x0006c8f4) frm_month_g10_ParamLimits

0xd70b,	// (0x0006c901) frm_month_g11_ParamLimits

0xd718,	// (0x0006c90e) frm_month_g12_ParamLimits

0xd725,	// (0x0006c91b) frm_month_g13_ParamLimits

0xd732,	// (0x0006c928) frm_month_g14_ParamLimits

0xd73f,	// (0x0006c935) frm_month_g15_ParamLimits

0xd74c,	// (0x0006c942) frm_month_g16_ParamLimits

0xfe5e,	// (0x0006f054) frm_month_g_ParamLimits

0x3804,	// (0x000629fa) cell_top_day_name_pane_t1_ParamLimits

0xd759,	// (0x0006c94f) cell_area_left_week_number_pane_g1_ParamLimits

0xd768,	// (0x0006c95e) cell_area_left_week_number_pane_t1_ParamLimits

0x0b8a,	// (0x0005fd80) cell_month_view_pane_g1_ParamLimits

0xd77e,	// (0x0006c974) cell_month_view_pane_t1_ParamLimits

0x0b08,	// (0x0005fcfe) main_clock2_btn_pane_g1

0x395b,	// (0x00062b51) main_clock2_btn_pane_t1

0x8459,	// (0x0006764f) listscroll_cmail_pane_ParamLimits

0x2dc1,	// (0x00061fb7) main_sp_fs_email_pane_g1_ParamLimits

0x2dcd,	// (0x00061fc3) main_sp_fs_email_pane_g2_ParamLimits

0xfc79,	// (0x0006ee6f) main_sp_fs_email_pane_g_ParamLimits

0x3331,	// (0x00062527) list_recal_day_pane_ParamLimits

0x3342,	// (0x00062538) mian_recal_day_pane_t1

0x5321,	// (0x00064517) list_single_dyc_row_text_pane_t4_ParamLimits

0x5321,	// (0x00064517) list_single_dyc_row_text_pane_t4

0x5358,	// (0x0006454e) list_single_dyc_row_text_pane_t5_ParamLimits

0x5358,	// (0x0006454e) list_single_dyc_row_text_pane_t5

0x53cd,	// (0x000645c3) list_single_dyc_row_text_pane_t6_ParamLimits

0x53cd,	// (0x000645c3) list_single_dyc_row_text_pane_t6

0x79bf,	// (0x00066bb5) aid_mgn_list_cale_time_pane

0x8459,	// (0x0006764f) main_gallery2_pane_ParamLimits

0x1434,	// (0x0006062a) main_clock2_pane_cp01_t1

0x1442,	// (0x00060638) main_clock2_pane_cp01_t3

0x0001,

0xf750,	// (0x0006e946) main_clock2_pane_cp01_t

0x6089,	// (0x0006527f) cale_week_scroll_pane_g16_ParamLimits

0x6089,	// (0x0006527f) cale_week_scroll_pane_g16

0x64dd,	// (0x000656d3) vorec_slider_pane

0xd8f8,	// (0x0006caee) vidtel_button_pane_t1_ParamLimits

0x0b98,	// (0x0005fd8e) main_fs_bigclock_clock_pane_g1_ParamLimits

0xd124,	// (0x0006c31a) main_fs_bigclock_clock_pane_g2_ParamLimits

0xd131,	// (0x0006c327) main_fs_bigclock_clock_pane_g3_ParamLimits

0xd131,	// (0x0006c327) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdb4,	// (0x0006efaa) main_fs_bigclock_clock_pane_g_ParamLimits

0xd13d,	// (0x0006c333) main_fs_bigclock_clock_pane_t1_ParamLimits

0xd14f,	// (0x0006c345) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfdbd,	// (0x0006efb3) main_fs_bigclock_clock_pane_t_ParamLimits

0x9ebf,	// (0x000690b5) main_mup3_lyrics_pane_ParamLimits

0x9ebf,	// (0x000690b5) main_mup3_lyrics_pane

0xdb8d,	// (0x0006cd83) main_mup3_lyrics_pane_t1_ParamLimits

0xdb8d,	// (0x0006cd83) main_mup3_lyrics_pane_t1

0xa9a9,	// (0x00069b9f) aid_main_mp4_pane_t1_area

0xa9b3,	// (0x00069ba9) aid_main_mp4_pane_t2_area

0xaaa0,	// (0x00069c96) main_mp4_pane_g7_ParamLimits

0xaaa0,	// (0x00069c96) main_mp4_pane_g7

0xaaac,	// (0x00069ca2) main_mp4_pane_g8_ParamLimits

0xaaac,	// (0x00069ca2) main_mp4_pane_g8

0xae61,	// (0x0006a057) aid_call6_pane_g1_size

0xd8b4,	// (0x0006caaa) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd8b4,	// (0x0006caaa) list_double_large_graphic_phob2_other_pane

0x7fa3,	// (0x00067199) list_double_large_graphic_phob2_other_pane_g1

0x0431,	// (0x0005f627) list_highlight_pane_cp026

0x8459,	// (0x0006764f) main_welc_pane_ParamLimits

0xcc11,	// (0x0006be07) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xcc11,	// (0x0006be07) main_sp_fs_ctrlbar_pane_g3

0xcc29,	// (0x0006be1f) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xcc29,	// (0x0006be1f) main_sp_fs_ctrlbar_pane_g4

0xcc69,	// (0x0006be5f) toolbar2_fixed_button_pane_cp01

0xcc73,	// (0x0006be69) toolbar2_fixed_button_pane_cp02

0xcc7e,	// (0x0006be74) toolbar2_fixed_button_pane_cp03

0xd920,	// (0x0006cb16) list_welc_entry_pane_ParamLimits

0xd920,	// (0x0006cb16) list_welc_entry_pane

0xd972,	// (0x0006cb68) main_welc_pane_g3_ParamLimits

0xd972,	// (0x0006cb68) main_welc_pane_g3

0xd9b6,	// (0x0006cbac) main_welc_pane_t2_ParamLimits

0xd9b6,	// (0x0006cbac) main_welc_pane_t2

0xd9c8,	// (0x0006cbbe) main_welc_pane_t3_ParamLimits

0xd9c8,	// (0x0006cbbe) main_welc_pane_t3

0x0005,

0xfec0,	// (0x0006f0b6) main_welc_pane_t_ParamLimits

0xfec0,	// (0x0006f0b6) main_welc_pane_t

0xdaae,	// (0x0006cca4) welc_button_pane_ParamLimits

0xdaae,	// (0x0006cca4) welc_button_pane

0xdaf8,	// (0x0006ccee) welc_service_logo_pane_ParamLimits

0xdaf8,	// (0x0006ccee) welc_service_logo_pane

0xdbab,	// (0x0006cda1) list_single_welc_entry_pane_ParamLimits

0xdbab,	// (0x0006cda1) list_single_welc_entry_pane

0xdbbc,	// (0x0006cdb2) list_single_welc_entry_pane_g1

0xdbc4,	// (0x0006cdba) list_single_welc_entry_pane_t1

0xdbd2,	// (0x0006cdc8) list_single_welc_entry_pane_t2

0x0001,

0xfed2,	// (0x0006f0c8) list_single_welc_entry_pane_t

0x0431,	// (0x0005f627) bg_button_pane_cp035

0xdbe0,	// (0x0006cdd6) welc_button_pane_t1

0x3969,	// (0x00062b5f) welc_service_logo_pane_g1

0x3972,	// (0x00062b68) welc_service_logo_pane_g2

0x0001,

0xfed7,	// (0x0006f0cd) welc_service_logo_pane_g

0x0431,	// (0x0005f627) main_int_radio_pane

0x0d08,	// (0x0005fefe) list_single_fs_dyc_pane_g1

0x57fe,	// (0x000649f4) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x57fe,	// (0x000649f4) list_double_large_graphic_phob2_pane_g3

0xd821,	// (0x0006ca17) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xd821,	// (0x0006ca17) list_double_large_graphic_phob2_pane_g4

0xdbee,	// (0x0006cde4) main_int_radio1_pane_ParamLimits

0xdbee,	// (0x0006cde4) main_int_radio1_pane

0x397b,	// (0x00062b71) find_pane_cp02

0xdc04,	// (0x0006cdfa) input_focus_pane_cp12_ParamLimits

0xdc04,	// (0x0006cdfa) input_focus_pane_cp12

0xdc10,	// (0x0006ce06) input_focus_pane_cp13_ParamLimits

0xdc10,	// (0x0006ce06) input_focus_pane_cp13

0xdc28,	// (0x0006ce1e) input_focus_pane_cp14_ParamLimits

0xdc28,	// (0x0006ce1e) input_focus_pane_cp14

0x3984,	// (0x00062b7a) int_radio1_listscroll_pane

0xdc40,	// (0x0006ce36) main_int_radio1_pane_g1_ParamLimits

0xdc40,	// (0x0006ce36) main_int_radio1_pane_g1

0xdc4c,	// (0x0006ce42) main_int_radio1_pane_t1_ParamLimits

0xdc4c,	// (0x0006ce42) main_int_radio1_pane_t1

0xdc5e,	// (0x0006ce54) main_int_radio1_pane_t2_ParamLimits

0xdc5e,	// (0x0006ce54) main_int_radio1_pane_t2

0xdc70,	// (0x0006ce66) main_int_radio1_pane_t3_ParamLimits

0xdc70,	// (0x0006ce66) main_int_radio1_pane_t3

0xdc82,	// (0x0006ce78) main_int_radio1_pane_t4_ParamLimits

0xdc82,	// (0x0006ce78) main_int_radio1_pane_t4

0x398e,	// (0x00062b84) main_int_radio1_pane_t5_ParamLimits

0x398e,	// (0x00062b84) main_int_radio1_pane_t5

0xdc99,	// (0x0006ce8f) main_int_radio1_pane_t6_ParamLimits

0xdc99,	// (0x0006ce8f) main_int_radio1_pane_t6

0xdcab,	// (0x0006cea1) main_int_radio1_pane_t7_ParamLimits

0xdcab,	// (0x0006cea1) main_int_radio1_pane_t7

0xdcbd,	// (0x0006ceb3) main_int_radio1_pane_t8_ParamLimits

0xdcbd,	// (0x0006ceb3) main_int_radio1_pane_t8

0xdccf,	// (0x0006cec5) main_int_radio1_pane_t9_ParamLimits

0xdccf,	// (0x0006cec5) main_int_radio1_pane_t9

0xdce1,	// (0x0006ced7) main_int_radio1_pane_t10_ParamLimits

0xdce1,	// (0x0006ced7) main_int_radio1_pane_t10

0xdd10,	// (0x0006cf06) main_int_radio1_pane_t11_ParamLimits

0xdd10,	// (0x0006cf06) main_int_radio1_pane_t11

0xdd3f,	// (0x0006cf35) main_int_radio1_pane_t12_ParamLimits

0xdd3f,	// (0x0006cf35) main_int_radio1_pane_t12

0x000b,

0xfedc,	// (0x0006f0d2) main_int_radio1_pane_t_ParamLimits

0xfedc,	// (0x0006f0d2) main_int_radio1_pane_t

0x39a0,	// (0x00062b96) int_radio_list_pane

0x381f,	// (0x00062a15) scroll_pane_cp037

0x39a8,	// (0x00062b9e) list_double_large_graphic_int_radio_pane_ParamLimits

0x39a8,	// (0x00062b9e) list_double_large_graphic_int_radio_pane

0x39b9,	// (0x00062baf) list_double_large_graphic_int_radio_pane_g1

0x58c3,	// (0x00064ab9) list_double_large_graphic_int_radio_pane_t1

0x58d1,	// (0x00064ac7) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfef5,	// (0x0006f0eb) list_double_large_graphic_int_radio_pane_t

0x0431,	// (0x0005f627) list_highlight_pane_cp027

0x390e,	// (0x00062b04) main_button_pane_4

0xd97e,	// (0x0006cb74) main_welc_pane_g4_ParamLimits

0xd97e,	// (0x0006cb74) main_welc_pane_g4

0xd9da,	// (0x0006cbd0) main_welc_pane_t4_ParamLimits

0xd9da,	// (0x0006cbd0) main_welc_pane_t4

0xd9ec,	// (0x0006cbe2) main_welc_pane_t5_ParamLimits

0xd9ec,	// (0x0006cbe2) main_welc_pane_t5

0xda1c,	// (0x0006cc12) main_welc_pane_t6_ParamLimits

0xda1c,	// (0x0006cc12) main_welc_pane_t6

0xdaba,	// (0x0006ccb0) welc_button_pane_2_ParamLimits

0xdaba,	// (0x0006ccb0) welc_button_pane_2

0xdacc,	// (0x0006ccc2) welc_button_pane_3_ParamLimits

0xdacc,	// (0x0006ccc2) welc_button_pane_3

0x3916,	// (0x00062b0c) welc_button_pane_4

0xdae0,	// (0x0006ccd6) welc_button_pane_5_ParamLimits

0xdae0,	// (0x0006ccd6) welc_button_pane_5

0x592b,	// (0x00064b21) main_popup_welc_pane

0x39ed,	// (0x00062be3) main_welc_sk_g3

0x39f7,	// (0x00062bed) main_welc_sk_g4

0x3a01,	// (0x00062bf7) main_welc_sk_t3

0x3a0f,	// (0x00062c05) main_welc_sk_t4

0x3a1d,	// (0x00062c13) popup_welc_pane_t4

0x3a2b,	// (0x00062c21) popup_welc_pane_t5

0x3a39,	// (0x00062c2f) popup_welc_pane_t6

0x0431,	// (0x0005f627) main_acti_pane

0x0431,	// (0x0005f627) main_sso_pane

0xdd56,	// (0x0006cf4c) sso_body_pane_ParamLimits

0xdd56,	// (0x0006cf4c) sso_body_pane

0xdd64,	// (0x0006cf5a) sso_logo_pane_ParamLimits

0xdd64,	// (0x0006cf5a) sso_logo_pane

0xdd87,	// (0x0006cf7d) sso_sk_pane_ParamLimits

0xdd87,	// (0x0006cf7d) sso_sk_pane

0x6699,	// (0x0006588f) main_sso_logo_pane_g1

0xdd94,	// (0x0006cf8a) sso_sk_pane_t1_ParamLimits

0xdd94,	// (0x0006cf8a) sso_sk_pane_t1

0xdda7,	// (0x0006cf9d) sso_sk_pane_t2_ParamLimits

0xdda7,	// (0x0006cf9d) sso_sk_pane_t2

0x0001,

0xfefa,	// (0x0006f0f0) sso_sk_pane_t_ParamLimits

0xfefa,	// (0x0006f0f0) sso_sk_pane_t

0x3a71,	// (0x00062c67) aid_sso_gap

0x3a7a,	// (0x00062c70) aid_sso_txt1

0x3a82,	// (0x00062c78) aid_sso_txt2

0x3a8a,	// (0x00062c80) aid_sso_txt3

0x0002,

0xfeff,	// (0x0006f0f5) aid_sso_txt

0x3a92,	// (0x00062c88) aid_sso_widget

0xddfc,	// (0x0006cff2) sso_btn_pane_ParamLimits

0xddfc,	// (0x0006cff2) sso_btn_pane

0xde65,	// (0x0006d05b) sso_option_pane_ParamLimits

0xde65,	// (0x0006d05b) sso_option_pane

0xdebf,	// (0x0006d0b5) sso_query_pane_ParamLimits

0xdebf,	// (0x0006d0b5) sso_query_pane

0xdefb,	// (0x0006d0f1) sso_query_pane_cp01_ParamLimits

0xdefb,	// (0x0006d0f1) sso_query_pane_cp01

0xdf39,	// (0x0006d12f) sso_t_hdr_pane_ParamLimits

0xdf39,	// (0x0006d12f) sso_t_hdr_pane

0xdf57,	// (0x0006d14d) sso_t_nml_pane_ParamLimits

0xdf57,	// (0x0006d14d) sso_t_nml_pane

0x3a8a,	// (0x00062c80) sso_t_sub_pane

0xdd71,	// (0x0006cf67) sso_popup_window_ParamLimits

0xdd71,	// (0x0006cf67) sso_popup_window

0xddb9,	// (0x0006cfaf) sso_apps_pane_ParamLimits

0xddb9,	// (0x0006cfaf) sso_apps_pane

0xddd8,	// (0x0006cfce) sso_body_pane_g1

0xdde0,	// (0x0006cfd6) sso_body_pane_t1

0xddee,	// (0x0006cfe4) sso_body_pane_t2

0x0001,

0xff06,	// (0x0006f0fc) sso_body_pane_t

0xde39,	// (0x0006d02f) sso_btn_pane_cp01_ParamLimits

0xde39,	// (0x0006d02f) sso_btn_pane_cp01

0xde99,	// (0x0006d08f) sso_prog_pane_ParamLimits

0xde99,	// (0x0006d08f) sso_prog_pane

0xdf9b,	// (0x0006d191) sso_t_hdr_pane_t1_ParamLimits

0xdf9b,	// (0x0006d191) sso_t_hdr_pane_t1

0xdfb4,	// (0x0006d1aa) input_focus_pane_cp10_ParamLimits

0xdfb4,	// (0x0006d1aa) input_focus_pane_cp10

0xdfcc,	// (0x0006d1c2) sso_query_pane_t1_ParamLimits

0xdfcc,	// (0x0006d1c2) sso_query_pane_t1

0xdfdf,	// (0x0006d1d5) sso_query_pane_t2_ParamLimits

0xdfdf,	// (0x0006d1d5) sso_query_pane_t2

0xdffa,	// (0x0006d1f0) sso_query_pane_t3_ParamLimits

0xdffa,	// (0x0006d1f0) sso_query_pane_t3

0xe024,	// (0x0006d21a) sso_query_pane_t4_ParamLimits

0xe024,	// (0x0006d21a) sso_query_pane_t4

0x0003,

0xff0b,	// (0x0006f101) sso_query_pane_t_ParamLimits

0xff0b,	// (0x0006f101) sso_query_pane_t

0x0431,	// (0x0005f627) bg_button_pane_cp22

0x39de,	// (0x00062bd4) sso_btn_pane_t1

0xe048,	// (0x0006d23e) sso_t_nml_pane_t1_ParamLimits

0xe048,	// (0x0006d23e) sso_t_nml_pane_t1

0xe065,	// (0x0006d25b) sso_option_row_pane_ParamLimits

0xe065,	// (0x0006d25b) sso_option_row_pane

0xe078,	// (0x0006d26e) sso_t_sub_pane_t1_ParamLimits

0xe078,	// (0x0006d26e) sso_t_sub_pane_t1

0x8459,	// (0x0006764f) bg_popup_window_pane_cp11_ParamLimits

0x8459,	// (0x0006764f) bg_popup_window_pane_cp11

0xe08b,	// (0x0006d281) popup_sk_window_cp01_ParamLimits

0xe08b,	// (0x0006d281) popup_sk_window_cp01

0xe098,	// (0x0006d28e) sso_popup_body_pane_ParamLimits

0xe098,	// (0x0006d28e) sso_popup_body_pane

0xe0a5,	// (0x0006d29b) scroll_pane_cp21_ParamLimits

0xe0a5,	// (0x0006d29b) scroll_pane_cp21

0xe0b2,	// (0x0006d2a8) sso_popup_body_t_pane_ParamLimits

0xe0b2,	// (0x0006d2a8) sso_popup_body_t_pane

0xe0bf,	// (0x0006d2b5) sso_popup_body_t_hdr_pane_ParamLimits

0xe0bf,	// (0x0006d2b5) sso_popup_body_t_hdr_pane

0xe0cb,	// (0x0006d2c1) sso_popup_body_t_nml_pane_ParamLimits

0xe0cb,	// (0x0006d2c1) sso_popup_body_t_nml_pane

0xe0e4,	// (0x0006d2da) sso_popup_body_t_sub_pane_ParamLimits

0xe0e4,	// (0x0006d2da) sso_popup_body_t_sub_pane

0xe103,	// (0x0006d2f9) sso_popup_body_t_hdr_pane_t1

0xe113,	// (0x0006d309) sso_popup_body_t_nml_pane_t1_ParamLimits

0xe113,	// (0x0006d309) sso_popup_body_t_nml_pane_t1

0xe14d,	// (0x0006d343) sso_popup_body_t_sub_pane_t1_ParamLimits

0xe14d,	// (0x0006d343) sso_popup_body_t_sub_pane_t1

0x6699,	// (0x0006588f) sso_prog_pane_g1

0xe172,	// (0x0006d368) sso_apps_pane_comp1_ParamLimits

0xe172,	// (0x0006d368) sso_apps_pane_comp1

0xe184,	// (0x0006d37a) sso_apps_pane_comp1_g1

0xe18c,	// (0x0006d382) sso_apps_pane_comp1_t1

0xe1a8,	// (0x0006d39e) sso_option_row_pane_g1

0xe1b0,	// (0x0006d3a6) sso_option_row_pane_t1

0xd90e,	// (0x0006cb04) bg_welc_area_ParamLimits

0xd90e,	// (0x0006cb04) bg_welc_area

0xda52,	// (0x0006cc48) sso_t_hdr_pane_a_t1_ParamLimits

0xda52,	// (0x0006cc48) sso_t_hdr_pane_a_t1

0xda64,	// (0x0006cc5a) sso_t_nml_pane_a_t1_ParamLimits

0xda64,	// (0x0006cc5a) sso_t_nml_pane_a_t1

0xda86,	// (0x0006cc7c) sso_t_sub_pane_a_t1_ParamLimits

0xda86,	// (0x0006cc7c) sso_t_sub_pane_a_t1

0x39de,	// (0x00062bd4) sso_btn_pane_t1_copy1

0x0431,	// (0x0005f627) welc_button_pane_2_comp1

0x3a47,	// (0x00062c3d) sso_t_hdr_pane_p_t1

0x3a55,	// (0x00062c4b) sso_t_nml_pane_p_t1

0x3a63,	// (0x00062c59) sso_t_sub_pane_p_t1

0x2f7f,	// (0x00062175) list_cmail_pane_ParamLimits

0xdaec,	// (0x0006cce2) welc_button_pane_cp01_ParamLimits

0xdaec,	// (0x0006cce2) welc_button_pane_cp01

0x0431,	// (0x0005f627) main_att_pane

0xe19a,	// (0x0006d390) input_focus_pane_cp10_t1

0xe1b0,	// (0x0006d3a6) sso_option_row_pane_t1_ParamLimits

0xe1c5,	// (0x0006d3bb) main_att_body_pane_ParamLimits

0xe1c5,	// (0x0006d3bb) main_att_body_pane

0xe1d9,	// (0x0006d3cf) att_btn_pane_ParamLimits

0xe1d9,	// (0x0006d3cf) att_btn_pane

0xe1f3,	// (0x0006d3e9) att_btn_pane_cp01_ParamLimits

0xe1f3,	// (0x0006d3e9) att_btn_pane_cp01

0xe20b,	// (0x0006d401) att_li_srv_pane_ParamLimits

0xe20b,	// (0x0006d401) att_li_srv_pane

0xe219,	// (0x0006d40f) att_opt_pane_ParamLimits

0xe219,	// (0x0006d40f) att_opt_pane

0xe25b,	// (0x0006d451) att_query_pane_ParamLimits

0xe25b,	// (0x0006d451) att_query_pane

0xe28b,	// (0x0006d481) att_query_pane_cp01_ParamLimits

0xe28b,	// (0x0006d481) att_query_pane_cp01

0xe2c1,	// (0x0006d4b7) att_t_hdr_pane_ParamLimits

0xe2c1,	// (0x0006d4b7) att_t_hdr_pane

0xe301,	// (0x0006d4f7) att_t_nml_pane_ParamLimits

0xe301,	// (0x0006d4f7) att_t_nml_pane

0xe32f,	// (0x0006d525) att_t_nml_pane_cp01_ParamLimits

0xe32f,	// (0x0006d525) att_t_nml_pane_cp01

0xe351,	// (0x0006d547) att_t_nmlb_pane_ParamLimits

0xe351,	// (0x0006d547) att_t_nmlb_pane

0xe367,	// (0x0006d55d) att_term_pane_ParamLimits

0xe367,	// (0x0006d55d) att_term_pane

0xe3a7,	// (0x0006d59d) main_att_body_pane_g1_ParamLimits

0xe3a7,	// (0x0006d59d) main_att_body_pane_g1

0xdf9b,	// (0x0006d191) att_t_hdr_pane_t1_ParamLimits

0xdf9b,	// (0x0006d191) att_t_hdr_pane_t1

0xe3e7,	// (0x0006d5dd) att_t_nml_pane_t1_ParamLimits

0xe3e7,	// (0x0006d5dd) att_t_nml_pane_t1

0xe40c,	// (0x0006d602) att_btn_pane_t1

0x0431,	// (0x0005f627) bg_button_pane_cp23

0xe41a,	// (0x0006d610) att_li_srv_row_pane_ParamLimits

0xe41a,	// (0x0006d610) att_li_srv_row_pane

0xe42a,	// (0x0006d620) att_t_nmlb_pane_t1_ParamLimits

0xe42a,	// (0x0006d620) att_t_nmlb_pane_t1

0xe443,	// (0x0006d639) att_query_pane_t1

0xe452,	// (0x0006d648) att_query_pane_t2

0xe461,	// (0x0006d657) att_query_pane_t3

0x0002,

0xff14,	// (0x0006f10a) att_query_pane_t

0xe470,	// (0x0006d666) input_focus_pane_cp11

0xe479,	// (0x0006d66f) att_term_pane_t1_ParamLimits

0xe479,	// (0x0006d66f) att_term_pane_t1

0x0431,	// (0x0005f627) att_opt_row_pane

0xe496,	// (0x0006d68c) att_opt_row_pane_g1

0xe49e,	// (0x0006d694) att_opt_row_pane_t1_ParamLimits

0xe49e,	// (0x0006d694) att_opt_row_pane_t1

0xe4b7,	// (0x0006d6ad) att_li_srv_row_pane_g1

0xe4bf,	// (0x0006d6b5) att_li_srv_row_pane_t1

0xe4cd,	// (0x0006d6c3) att_li_srv_row_pane_t2

0x0001,

0xff1b,	// (0x0006f111) att_li_srv_row_pane_t
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

} // end of namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Large
