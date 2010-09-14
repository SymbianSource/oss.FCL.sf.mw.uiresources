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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00059929 };

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
0x0e0b,	// (0x0005a734) Screen

0x0e17,	// (0x0005a740) application_window

0x0e53,	// (0x0005a77c) area_bottom_pane_ParamLimits

0x0e53,	// (0x0005a77c) area_bottom_pane

0x0e8c,	// (0x0005a7b5) area_top_pane_ParamLimits

0x0e8c,	// (0x0005a7b5) area_top_pane

0x9766,	// (0x0006308f) call_video_uplink_pane_ParamLimits

0x9766,	// (0x0006308f) call_video_uplink_pane

0x0f1a,	// (0x0005a843) main_pane_ParamLimits

0x0f1a,	// (0x0005a843) main_pane

0xdf38,	// (0x00067861) context_pane

0x3df1,	// (0x0005d71a) navi_pane

0x3e23,	// (0x0005d74c) popup_cale_events_window_ParamLimits

0x3e23,	// (0x0005d74c) popup_cale_events_window

0xdf4b,	// (0x00067874) popup_mup_playback_window

0x3e3b,	// (0x0005d764) signal_pane

0x9f27,	// (0x00063850) main_browser_pane

0xa16c,	// (0x00063a95) main_burst_pane

0x3b3f,	// (0x0005d468) main_calc_pane

0xbff6,	// (0x0006591f) main_cale_day_pane

0x3b53,	// (0x0005d47c) main_cale_month_pane

0xbff6,	// (0x0006591f) main_cale_week_pane

0xa16c,	// (0x00063a95) main_call_pane

0x9baf,	// (0x000634d8) main_call_poc_pane

0xa16c,	// (0x00063a95) main_camera_pane

0xa16c,	// (0x00063a95) main_chi_dic_pane

0xa9ed,	// (0x00064316) main_clock_pane

0x9baf,	// (0x000634d8) main_fmradio_pane

0xa16c,	// (0x00063a95) main_graph_messa_pane

0x9baf,	// (0x000634d8) main_help_pane

0x9f27,	// (0x00063850) main_im_pane

0x9e0a,	// (0x00063733) main_image_pane_ParamLimits

0x9e0a,	// (0x00063733) main_image_pane

0x9baf,	// (0x000634d8) main_location2_pane

0xa16c,	// (0x00063a95) main_location_pane

0x9e0a,	// (0x00063733) main_messa_pane

0x9baf,	// (0x000634d8) main_mp2_pane

0xa16c,	// (0x00063a95) main_mp_pane

0x9baf,	// (0x000634d8) main_msg_pane

0x9baf,	// (0x000634d8) main_mup_eq_pane

0x9baf,	// (0x000634d8) main_mup_pane

0x9f27,	// (0x00063850) main_notes_pane

0x9baf,	// (0x000634d8) main_pec_pane

0x9baf,	// (0x000634d8) main_phob_pane

0x9baf,	// (0x000634d8) main_pinb_pane

0x9baf,	// (0x000634d8) main_postcard_pane

0x9baf,	// (0x000634d8) main_qdial_pane

0xa16c,	// (0x00063a95) main_skin_pane

0x9baf,	// (0x000634d8) main_smil2_pane

0xa16c,	// (0x00063a95) main_smil_pane

0xa16c,	// (0x00063a95) main_video_pane

0xa16c,	// (0x00063a95) main_video_tele_pane

0x9e0a,	// (0x00063733) main_viewer_pane_ParamLimits

0x9e0a,	// (0x00063733) main_viewer_pane

0xa16c,	// (0x00063a95) main_vorec_pane

0x3ba5,	// (0x0005d4ce) popup_blid_sat_info_window_ParamLimits

0x3ba5,	// (0x0005d4ce) popup_blid_sat_info_window

0x3bfd,	// (0x0005d526) popup_dyc_status_message_window_ParamLimits

0x3bfd,	// (0x0005d526) popup_dyc_status_message_window

0x3c17,	// (0x0005d540) popup_grid_large_graphic_window_ParamLimits

0x3c17,	// (0x0005d540) popup_grid_large_graphic_window

0x3cd3,	// (0x0005d5fc) popup_loc_request_window_ParamLimits

0x3cd3,	// (0x0005d5fc) popup_loc_request_window

0x3dc9,	// (0x0005d6f2) popup_wml_address_window_ParamLimits

0x3dc9,	// (0x0005d6f2) popup_wml_address_window

0x3979,	// (0x0005d2a2) call_muted_g1

0x35ed,	// (0x0005cf16) popup_call_audio_conf_window_ParamLimits

0x35ed,	// (0x0005cf16) popup_call_audio_conf_window

0x398d,	// (0x0005d2b6) popup_call_audio_first_window_ParamLimits

0x398d,	// (0x0005d2b6) popup_call_audio_first_window

0x3a03,	// (0x0005d32c) popup_call_audio_in_window_ParamLimits

0x3a03,	// (0x0005d32c) popup_call_audio_in_window

0x3a3f,	// (0x0005d368) popup_call_audio_out_window_ParamLimits

0x3a3f,	// (0x0005d368) popup_call_audio_out_window

0x3a79,	// (0x0005d3a2) popup_call_audio_second_window_ParamLimits

0x3a79,	// (0x0005d3a2) popup_call_audio_second_window

0x3acf,	// (0x0005d3f8) popup_call_audio_wait_window_ParamLimits

0x3acf,	// (0x0005d3f8) popup_call_audio_wait_window

0x3b04,	// (0x0005d42d) popup_number_entry_window_ParamLimits

0x3b04,	// (0x0005d42d) popup_number_entry_window

0x979c,	// (0x000630c5) bg_popup_call_pane_cp05_ParamLimits

0x979c,	// (0x000630c5) bg_popup_call_pane_cp05

0x97bc,	// (0x000630e5) popup_number_entry_window_t1

0x97cf,	// (0x000630f8) popup_number_entry_window_t2

0x97e1,	// (0x0006310a) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x00068994) popup_number_entry_window_t

0x97f3,	// (0x0006311c) text_title_cp2

0x9806,	// (0x0006312f) bg_popup_call_pane_cp_ParamLimits

0x9806,	// (0x0006312f) bg_popup_call_pane_cp

0x9814,	// (0x0006313d) call_thumbnail_pane

0x981c,	// (0x00063145) popup_call_audio_in_window_g1_ParamLimits

0x981c,	// (0x00063145) popup_call_audio_in_window_g1

0x9828,	// (0x00063151) popup_call_audio_in_window_g2_ParamLimits

0x9828,	// (0x00063151) popup_call_audio_in_window_g2

0x9834,	// (0x0006315d) popup_call_audio_in_window_g3_ParamLimits

0x9834,	// (0x0006315d) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x0006899d) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x0006899d) popup_call_audio_in_window_g

0x9840,	// (0x00063169) popup_call_audio_in_window_t1_ParamLimits

0x9840,	// (0x00063169) popup_call_audio_in_window_t1

0x985c,	// (0x00063185) popup_call_audio_in_window_t2_ParamLimits

0x985c,	// (0x00063185) popup_call_audio_in_window_t2

0x9878,	// (0x000631a1) popup_call_audio_in_window_t3_ParamLimits

0x9878,	// (0x000631a1) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x000689a4) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x000689a4) popup_call_audio_in_window_t

0x9806,	// (0x0006312f) bg_popup_call_pane_cp01_ParamLimits

0x9806,	// (0x0006312f) bg_popup_call_pane_cp01

0x9814,	// (0x0006313d) call_thumbnail_pane_cp02

0x988b,	// (0x000631b4) call_type_pane_cp022

0x9893,	// (0x000631bc) popup_call_audio_out_window_g1_ParamLimits

0x9893,	// (0x000631bc) popup_call_audio_out_window_g1

0x98a5,	// (0x000631ce) popup_call_audio_out_window_g2_ParamLimits

0x98a5,	// (0x000631ce) popup_call_audio_out_window_g2

0x98b1,	// (0x000631da) popup_call_audio_out_window_g3_ParamLimits

0x98b1,	// (0x000631da) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x000689ab) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x000689ab) popup_call_audio_out_window_g

0x98c3,	// (0x000631ec) popup_call_audio_out_window_t1_ParamLimits

0x98c3,	// (0x000631ec) popup_call_audio_out_window_t1

0x98db,	// (0x00063204) popup_call_audio_out_window_t2_ParamLimits

0x98db,	// (0x00063204) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x000689b2) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x000689b2) popup_call_audio_out_window_t

0x98f0,	// (0x00063219) bg_popup_call_pane_ParamLimits

0x98f0,	// (0x00063219) bg_popup_call_pane

0x10d6,	// (0x0005a9ff) call_thumbnail_pane_cp_ParamLimits

0x10d6,	// (0x0005a9ff) call_thumbnail_pane_cp

0x9974,	// (0x0006329d) call_type_pane_cp01_ParamLimits

0x9974,	// (0x0006329d) call_type_pane_cp01

0x99b8,	// (0x000632e1) popup_call_audio_first_window_g1_ParamLimits

0x99b8,	// (0x000632e1) popup_call_audio_first_window_g1

0x9a04,	// (0x0006332d) popup_call_audio_first_window_g2_ParamLimits

0x9a04,	// (0x0006332d) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x000689b7) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x000689b7) popup_call_audio_first_window_g

0x9a48,	// (0x00063371) popup_call_audio_first_window_t1_ParamLimits

0x9a48,	// (0x00063371) popup_call_audio_first_window_t1

0x9af4,	// (0x0006341d) popup_call_audio_first_window_t4_ParamLimits

0x9af4,	// (0x0006341d) popup_call_audio_first_window_t4

0x9b80,	// (0x000634a9) popup_call_audio_first_window_t5_ParamLimits

0x9b80,	// (0x000634a9) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x000689bc) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x000689bc) popup_call_audio_first_window_t

0x9baf,	// (0x000634d8) bg_popup_call_pane_cp02

0x9bb9,	// (0x000634e2) call_type_pane_cp023

0x9bc1,	// (0x000634ea) popup_call_audio_wait_window_g1

0x9bc9,	// (0x000634f2) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x000689c3) popup_call_audio_wait_window_g

0x9bd1,	// (0x000634fa) popup_call_audio_wait_window_t3

0x9bdf,	// (0x00063508) bg_popup_call_pane_cp03_ParamLimits

0x9bdf,	// (0x00063508) bg_popup_call_pane_cp03

0x9c3f,	// (0x00063568) call_thumbnail_pane_cp011_ParamLimits

0x9c3f,	// (0x00063568) call_thumbnail_pane_cp011

0x9c4b,	// (0x00063574) call_type_pane_cp034_ParamLimits

0x9c4b,	// (0x00063574) call_type_pane_cp034

0x9c87,	// (0x000635b0) popup_call_audio_second_window_g1_ParamLimits

0x9c87,	// (0x000635b0) popup_call_audio_second_window_g1

0x9cc3,	// (0x000635ec) popup_call_audio_second_window_g2_ParamLimits

0x9cc3,	// (0x000635ec) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x000689c8) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x000689c8) popup_call_audio_second_window_g

0x9cff,	// (0x00063628) popup_call_audio_second_window_t1_ParamLimits

0x9cff,	// (0x00063628) popup_call_audio_second_window_t1

0x9d80,	// (0x000636a9) popup_call_audio_second_window_t2_ParamLimits

0x9d80,	// (0x000636a9) popup_call_audio_second_window_t2

0x9db6,	// (0x000636df) popup_call_audio_second_window_t3_ParamLimits

0x9db6,	// (0x000636df) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x000689cd) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x000689cd) popup_call_audio_second_window_t

0x9baf,	// (0x000634d8) bg_popup_call_pane_cp04

0x9dec,	// (0x00063715) list_conf_pane

0x9df4,	// (0x0006371d) popup_call_audio_conf_window_t1

0x9e02,	// (0x0006372b) call_thumbnail_pane_g1

0x9e0a,	// (0x00063733) bg_pinb_pane_ParamLimits

0x9e0a,	// (0x00063733) bg_pinb_pane

0x9e18,	// (0x00063741) find_pinb_pane

0x9e0a,	// (0x00063733) listscroll_pinb_pane_ParamLimits

0x9e0a,	// (0x00063733) listscroll_pinb_pane

0x9e22,	// (0x0006374b) pinb_bg_pane_g1

0x9e22,	// (0x0006374b) pinb_bg_pane_g2

0x9e22,	// (0x0006374b) pinb_bg_pane_g3

0x9e22,	// (0x0006374b) pinb_bg_pane_g4

0x9e22,	// (0x0006374b) pinb_bg_pane_g5

0x9e22,	// (0x0006374b) pinb_bg_pane_g6

0x9e22,	// (0x0006374b) pinb_bg_pane_g7

0x9e22,	// (0x0006374b) pinb_bg_pane_g8

0x9e22,	// (0x0006374b) pinb_bg_pane_g9

0x9e22,	// (0x0006374b) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x000689d4) pinb_bg_pane_g

0x970d,	// (0x00063036) grid_pinb_pane

0x970d,	// (0x00063036) list_pinb_pane

0x9e2c,	// (0x00063755) scroll_pane_cp01_ParamLimits

0x9e2c,	// (0x00063755) scroll_pane_cp01

0x9e3a,	// (0x00063763) find_pinb_pane_g1_ParamLimits

0x9e3a,	// (0x00063763) find_pinb_pane_g1

0x9e52,	// (0x0006377b) find_pinb_pane_t1

0x9e64,	// (0x0006378d) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x000689ee) find_pinb_pane_t

0x9e79,	// (0x000637a2) input_focus_pane_cp01_ParamLimits

0x9e79,	// (0x000637a2) input_focus_pane_cp01

0x9e85,	// (0x000637ae) cell_pinb_pane_ParamLimits

0x9e85,	// (0x000637ae) cell_pinb_pane

0x9e93,	// (0x000637bc) cell_pinb_pane_g1_ParamLimits

0x9e93,	// (0x000637bc) cell_pinb_pane_g1

0x9ea1,	// (0x000637ca) cell_pinb_pane_g2_ParamLimits

0x9ea1,	// (0x000637ca) cell_pinb_pane_g2

0x9ea1,	// (0x000637ca) cell_pinb_pane_g3_ParamLimits

0x9ea1,	// (0x000637ca) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x000689f3) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x000689f3) cell_pinb_pane_g

0x9baf,	// (0x000634d8) grid_highlight_pane_cp01

0x9e85,	// (0x000637ae) list_pinb_item_pane_ParamLimits

0x9e85,	// (0x000637ae) list_pinb_item_pane

0x970d,	// (0x00063036) list_highlight_pane_cp02

0x9eaf,	// (0x000637d8) list_pinb_item_pane_g1_ParamLimits

0x9eaf,	// (0x000637d8) list_pinb_item_pane_g1

0x9ea1,	// (0x000637ca) list_pinb_item_pane_g2_ParamLimits

0x9ea1,	// (0x000637ca) list_pinb_item_pane_g2

0x9e93,	// (0x000637bc) list_pinb_item_pane_g3_ParamLimits

0x9e93,	// (0x000637bc) list_pinb_item_pane_g3

0x9ea1,	// (0x000637ca) list_pinb_item_pane_g4_ParamLimits

0x9ea1,	// (0x000637ca) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x000689fa) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x000689fa) list_pinb_item_pane_g

0x9ebd,	// (0x000637e6) list_pinb_item_pane_t1_ParamLimits

0x9ebd,	// (0x000637e6) list_pinb_item_pane_t1

0x1118,	// (0x0005aa41) calc_display_pane

0x113d,	// (0x0005aa66) calc_paper_pane

0x1160,	// (0x0005aa89) grid_calc_pane

0x9baf,	// (0x000634d8) bg_list_pane_cp01

0x118e,	// (0x0005aab7) clock_g1

0x1196,	// (0x0005aabf) clock_g2

0x0001,

0xf0da,	// (0x00068a03) clock_g

0x119e,	// (0x0005aac7) clock_t1_ParamLimits

0x119e,	// (0x0005aac7) clock_t1

0x11b3,	// (0x0005aadc) clock_t2_ParamLimits

0x11b3,	// (0x0005aadc) clock_t2

0x11c5,	// (0x0005aaee) clock_t3_ParamLimits

0x11c5,	// (0x0005aaee) clock_t3

0x11d7,	// (0x0005ab00) clock_t4_ParamLimits

0x11d7,	// (0x0005ab00) clock_t4

0x11e9,	// (0x0005ab12) clock_t5_ParamLimits

0x11e9,	// (0x0005ab12) clock_t5

0x11fe,	// (0x0005ab27) clock_t6_ParamLimits

0x11fe,	// (0x0005ab27) clock_t6

0x1210,	// (0x0005ab39) clock_t7_ParamLimits

0x1210,	// (0x0005ab39) clock_t7

0x1222,	// (0x0005ab4b) clock_t8_ParamLimits

0x1222,	// (0x0005ab4b) clock_t8

0x1236,	// (0x0005ab5f) clock_t9_ParamLimits

0x1236,	// (0x0005ab5f) clock_t9

0x0008,

0xf0df,	// (0x00068a08) clock_t_ParamLimits

0xf0df,	// (0x00068a08) clock_t

0x9ed9,	// (0x00063802) popup_clock_analogue_window_cp02

0x9ed9,	// (0x00063802) popup_clock_digital_window_cp01

0x9baf,	// (0x000634d8) listscroll_help_pane

0x9baf,	// (0x000634d8) phob_pre_status_pane

0x9ee1,	// (0x0006380a) grid_qdial_pane

0x124a,	// (0x0005ab73) listscroll_mce_pane

0x9e0a,	// (0x00063733) bg_notes_pane

0x9eeb,	// (0x00063814) list_notes_pane

0x1264,	// (0x0005ab8d) scroll_pane_cp06

0x9ef9,	// (0x00063822) bg_calc_paper_pane

0x9f0d,	// (0x00063836) list_calc_pane

0x9f27,	// (0x00063850) bg_calc_display_pane

0x1278,	// (0x0005aba1) calc_display_pane_t1

0x128d,	// (0x0005abb6) calc_display_pane_t2

0x9f33,	// (0x0006385c) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x00068a1b) calc_display_pane_t

0x12a2,	// (0x0005abcb) cell_calc_pane_ParamLimits

0x12a2,	// (0x0005abcb) cell_calc_pane

0x9f45,	// (0x0006386e) bg_calc_paper_pane_g1

0x9f51,	// (0x0006387a) bg_calc_paper_pane_g2

0x9f5d,	// (0x00063886) bg_calc_paper_pane_g3

0x9f69,	// (0x00063892) bg_calc_paper_pane_g4

0x9f75,	// (0x0006389e) bg_calc_paper_pane_g5

0x12d7,	// (0x0005ac00) bg_calc_paper_pane_g6

0x12e6,	// (0x0005ac0f) bg_calc_paper_pane_g7

0x12f5,	// (0x0005ac1e) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x00068a22) bg_calc_paper_pane_g

0x1308,	// (0x0005ac31) calc_bg_paper_pane_g9

0x131b,	// (0x0005ac44) list_calc_item_pane_ParamLimits

0x131b,	// (0x0005ac44) list_calc_item_pane

0x9f81,	// (0x000638aa) list_calc_item_pane_g1

0x9f8e,	// (0x000638b7) list_calc_item_pane_t1_ParamLimits

0x9f8e,	// (0x000638b7) list_calc_item_pane_t1

0x1333,	// (0x0005ac5c) list_calc_item_pane_t2_ParamLimits

0x1333,	// (0x0005ac5c) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x00068a33) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x00068a33) list_calc_item_pane_t

0x9e22,	// (0x0006374b) cell_calc_pane_g1

0x9fa0,	// (0x000638c9) grid_highlight_pane_cp02

0x1365,	// (0x0005ac8e) bg_calc_display_pane_g1

0x136e,	// (0x0005ac97) bg_calc_display_pane_g2

0x9fc2,	// (0x000638eb) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x00068a3d) bg_calc_display_pane_g

0x1378,	// (0x0005aca1) cell_qdial_pane_ParamLimits

0x1378,	// (0x0005aca1) cell_qdial_pane

0x138c,	// (0x0005acb5) cell_qdial_pane_g1_ParamLimits

0x138c,	// (0x0005acb5) cell_qdial_pane_g1

0x13a2,	// (0x0005accb) cell_qdial_pane_g2_ParamLimits

0x13a2,	// (0x0005accb) cell_qdial_pane_g2

0x9fcb,	// (0x000638f4) cell_qdial_pane_g3_ParamLimits

0x9fcb,	// (0x000638f4) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x00068a44) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x00068a44) cell_qdial_pane_g

0x13c9,	// (0x0005acf2) cell_qdial_pane_t1_ParamLimits

0x13c9,	// (0x0005acf2) cell_qdial_pane_t1

0x13e1,	// (0x0005ad0a) cell_qdial_pane_t2_ParamLimits

0x13e1,	// (0x0005ad0a) cell_qdial_pane_t2

0x13f4,	// (0x0005ad1d) cell_qdial_pane_t3_ParamLimits

0x13f4,	// (0x0005ad1d) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x00068a4d) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x00068a4d) cell_qdial_pane_t

0x9baf,	// (0x000634d8) grid_highlight_pane_cp04

0x9fd7,	// (0x00063900) thumbnail_qdial_pane_ParamLimits

0x9fd7,	// (0x00063900) thumbnail_qdial_pane

0xa033,	// (0x0006395c) list_help_pane

0xa03c,	// (0x00063965) scroll_pane_cp02

0xa045,	// (0x0006396e) help_list_pane_t1_ParamLimits

0xa045,	// (0x0006396e) help_list_pane_t1

0xa063,	// (0x0006398c) bg_notes_pane_g2

0xa06b,	// (0x00063994) bg_notes_pane_g3

0xa073,	// (0x0006399c) notes_bg_pane_g1

0xa07b,	// (0x000639a4) notes_bg_pane_g4

0xa083,	// (0x000639ac) notes_bg_pane_g5

0xa08b,	// (0x000639b4) notes_bg_pane_g6

0xa093,	// (0x000639bc) notes_bg_pane_g7

0xa09b,	// (0x000639c4) notes_bg_pane_g8

0xa0a3,	// (0x000639cc) notes_bg_pane_g9

0x0006,

0xf142,	// (0x00068a6b) notes_bg_pane_g

0x1407,	// (0x0005ad30) list_notes_text_pane_ParamLimits

0x1407,	// (0x0005ad30) list_notes_text_pane

0xa0ab,	// (0x000639d4) list_notes_text_pane_g1

0x141c,	// (0x0005ad45) list_notes_text_pane_t1

0x142a,	// (0x0005ad53) listscroll_cale_week_pane

0x1456,	// (0x0005ad7f) bg_cale_heading_pane

0xa0ce,	// (0x000639f7) bg_cale_pane_cp01

0x146e,	// (0x0005ad97) cale_week_corner_pane

0x148d,	// (0x0005adb6) cale_week_day_heading_pane

0x14aa,	// (0x0005add3) cale_week_scroll_pane_g1

0x14bd,	// (0x0005ade6) cale_week_scroll_pane_g2

0x14d5,	// (0x0005adfe) cale_week_scroll_pane_g3

0x14ed,	// (0x0005ae16) cale_week_scroll_pane_g4

0x1505,	// (0x0005ae2e) cale_week_scroll_pane_g5

0x1525,	// (0x0005ae4e) cale_week_scroll_pane_g6

0x1545,	// (0x0005ae6e) cale_week_scroll_pane_g7

0x1565,	// (0x0005ae8e) cale_week_scroll_pane_g8

0x1589,	// (0x0005aeb2) cale_week_scroll_pane_g9

0x15a1,	// (0x0005aeca) cale_week_scroll_pane_g10

0x15b9,	// (0x0005aee2) cale_week_scroll_pane_g11

0x15d1,	// (0x0005aefa) cale_week_scroll_pane_g12

0x15e9,	// (0x0005af12) cale_week_scroll_pane_g13

0x15e9,	// (0x0005af12) cale_week_scroll_pane_g14

0x15e9,	// (0x0005af12) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x00068a7a) cale_week_scroll_pane_g

0x1625,	// (0x0005af4e) cale_week_time_pane

0x1649,	// (0x0005af72) grid_cale_week_pane

0xa0fd,	// (0x00063a26) scroll_pane_cp08

0x166f,	// (0x0005af98) cell_cale_week_pane_ParamLimits

0x166f,	// (0x0005af98) cell_cale_week_pane

0x16fd,	// (0x0005b026) cale_week_day_heading_pane_t1

0x1727,	// (0x0005b050) cale_week_day_heading_pane_t2

0x1756,	// (0x0005b07f) cale_week_day_heading_pane_t3

0x1785,	// (0x0005b0ae) cale_week_day_heading_pane_t4

0x17b4,	// (0x0005b0dd) cale_week_day_heading_pane_t5

0x17eb,	// (0x0005b114) cale_week_day_heading_pane_t6

0x1822,	// (0x0005b14b) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x00068a9b) cale_week_day_heading_pane_t

0xa11a,	// (0x00063a43) bg_cale_side_pane

0x184c,	// (0x0005b175) cale_week_time_pane_t1

0x1866,	// (0x0005b18f) cale_week_time_pane_t2

0x1880,	// (0x0005b1a9) cale_week_time_pane_t3

0x189a,	// (0x0005b1c3) cale_week_time_pane_t4

0x18b4,	// (0x0005b1dd) cale_week_time_pane_t5

0x18ce,	// (0x0005b1f7) cale_week_time_pane_t6

0x18e8,	// (0x0005b211) cale_week_time_pane_t7

0x1902,	// (0x0005b22b) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x00068aaa) cale_week_time_pane_t

0x191c,	// (0x0005b245) cell_cale_week_pane_g2

0x193b,	// (0x0005b264) cell_cale_week_pane_g3_ParamLimits

0x193b,	// (0x0005b264) cell_cale_week_pane_g3

0xa128,	// (0x00063a51) grid_highlight_pane_cp07

0xa130,	// (0x00063a59) listscroll_gms_pane

0xa13a,	// (0x00063a63) grid_gms_pane

0xa143,	// (0x00063a6c) listscroll_gms_pane_g1

0xa14b,	// (0x00063a74) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x00068abb) listscroll_gms_pane_g

0x1953,	// (0x0005b27c) scroll_pane_cp010

0x195e,	// (0x0005b287) cell_gms_pane_ParamLimits

0x195e,	// (0x0005b287) cell_gms_pane

0x1971,	// (0x0005b29a) cell_gms_pane_g1

0xa153,	// (0x00063a7c) cell_gms_pane_g2

0xa0ab,	// (0x000639d4) cell_gms_pane_g3

0xa15b,	// (0x00063a84) cell_gms_pane_g4

0x0003,

0xf197,	// (0x00068ac0) cell_gms_pane_g

0xa164,	// (0x00063a8d) grid_highlight_pane_cp09

0x3901,	// (0x0005d22a) phob_pre_status_pane_g1

0x3909,	// (0x0005d232) phob_pre_status_pane_g2

0x3911,	// (0x0005d23a) phob_pre_status_pane_g3

0x3919,	// (0x0005d242) phob_pre_status_pane_g4

0x0004,

0xf55b,	// (0x00068e84) phob_pre_status_pane_g

0x3929,	// (0x0005d252) phob_pre_status_pane_t1

0x3937,	// (0x0005d260) phob_pre_status_pane_t2

0x3947,	// (0x0005d270) phob_pre_status_pane_t3

0x0002,

0xf566,	// (0x00068e8f) phob_pre_status_pane_t

0xa16c,	// (0x00063a95) bg_list_pane_cp05

0x1981,	// (0x0005b2aa) grid_vorec_pane

0x1989,	// (0x0005b2b2) vorec_t1

0x1997,	// (0x0005b2c0) vorec_t2

0x19a5,	// (0x0005b2ce) vorec_t3

0x19b3,	// (0x0005b2dc) vorec_t4

0x9197,	// (0x00062ac0) vorec_t5

0x91a5,	// (0x00062ace) vorec_t6

0x0004,

0xf1a0,	// (0x00068ac9) vorec_t

0x91b3,	// (0x00062adc) wait_bar_pane_cp01

0x19cf,	// (0x0005b2f8) cell_vorec_pane_ParamLimits

0x19cf,	// (0x0005b2f8) cell_vorec_pane

0xa174,	// (0x00063a9d) cell_vorec_pane_g1

0x9baf,	// (0x000634d8) grid_highlight_pane_cp05

0x9e2c,	// (0x00063755) cams_zoom_pane

0x9e2c,	// (0x00063755) image_vga_pane

0x9e93,	// (0x000637bc) main_camera_pane_g1

0x9e93,	// (0x000637bc) main_camera_pane_g2

0x9e93,	// (0x000637bc) main_camera_pane_g3

0x9e93,	// (0x000637bc) main_camera_pane_g4

0x9e93,	// (0x000637bc) main_camera_pane_g5

0x9e93,	// (0x000637bc) main_camera_pane_g6

0x9e93,	// (0x000637bc) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x00068ad4) main_camera_pane_g

0xa17e,	// (0x00063aa7) main_camera_pane_t1

0xa17e,	// (0x00063aa7) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x00068ae5) main_camera_pane_t

0x19f6,	// (0x0005b31f) cams_zoom_pane_cp_ParamLimits

0x19f6,	// (0x0005b31f) cams_zoom_pane_cp

0x1a2a,	// (0x0005b353) image_cif_pane_ParamLimits

0x1a2a,	// (0x0005b353) image_cif_pane

0x970d,	// (0x00063036) image_subqcif_pane

0x1a3c,	// (0x0005b365) main_video_pane_g1_ParamLimits

0x1a3c,	// (0x0005b365) main_video_pane_g1

0x1a6a,	// (0x0005b393) main_video_pane_g2_ParamLimits

0x1a6a,	// (0x0005b393) main_video_pane_g2

0x1aa4,	// (0x0005b3cd) main_video_pane_g3_ParamLimits

0x1aa4,	// (0x0005b3cd) main_video_pane_g3

0x1aa4,	// (0x0005b3cd) main_video_pane_g4_ParamLimits

0x1aa4,	// (0x0005b3cd) main_video_pane_g4

0x1ad8,	// (0x0005b401) main_video_pane_g5_ParamLimits

0x1ad8,	// (0x0005b401) main_video_pane_g5

0xa192,	// (0x00063abb) main_video_pane_g6_ParamLimits

0xa192,	// (0x00063abb) main_video_pane_g6

0x0006,

0xf1c1,	// (0x00068aea) main_video_pane_g_ParamLimits

0xf1c1,	// (0x00068aea) main_video_pane_g

0x1af4,	// (0x0005b41d) main_video_pane_t1_ParamLimits

0x1af4,	// (0x0005b41d) main_video_pane_t1

0xa1ac,	// (0x00063ad5) cams_zoom_pane_g1

0xa1ac,	// (0x00063ad5) cams_zoom_pane_g2

0xa1ac,	// (0x00063ad5) cams_zoom_pane_g3

0xa1ac,	// (0x00063ad5) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x00068af9) cams_zoom_pane_g

0x1b4c,	// (0x0005b475) grid_cams_pane

0x1b66,	// (0x0005b48f) linegrid_cams_pane

0x1b7a,	// (0x0005b4a3) cell_cams_pane_ParamLimits

0x1b7a,	// (0x0005b4a3) cell_cams_pane

0xa1b6,	// (0x00063adf) cams_burst_image_pane

0xa1be,	// (0x00063ae7) cell_cams_pane_g1

0x9baf,	// (0x000634d8) grid_highlight_pane_cp03

0x9e22,	// (0x0006374b) mp_bg_pane_g1

0x970d,	// (0x00063036) bg_list_pane_cp03

0x970d,	// (0x00063036) bg_mp_pane

0x970d,	// (0x00063036) grid_mp_pane

0xa1ac,	// (0x00063ad5) media_player_g1

0xa70e,	// (0x00064037) media_player_t1

0xa70e,	// (0x00064037) media_player_t2

0xa70e,	// (0x00064037) media_player_t3

0xa70e,	// (0x00064037) media_player_t4

0xa70e,	// (0x00064037) media_player_t5

0xa70e,	// (0x00064037) media_player_t6

0xa70e,	// (0x00064037) media_player_t7

0x0006,

0xf545,	// (0x00068e6e) media_player_t

0x970d,	// (0x00063036) wait_bar_pane_cp02

0xf52a,	// (0x00068e53) main_usb_pane_t

0xa9ed,	// (0x00064316) cell_mp_pane

0x9e22,	// (0x0006374b) cell_mp_pane_g1

0x9baf,	// (0x000634d8) grid_highlight_pane_cp06

0xa1c6,	// (0x00063aef) grid_skin_colour_pane

0xa1ce,	// (0x00063af7) list_highlight_pane_cp03

0x1b9a,	// (0x0005b4c3) skin_g1

0xa1d6,	// (0x00063aff) skin_t1

0xa1e5,	// (0x00063b0e) skin_t2

0x0001,

0xf1fe,	// (0x00068b27) skin_t

0x1ba2,	// (0x0005b4cb) cell_skin_colour_pane_ParamLimits

0x1ba2,	// (0x0005b4cb) cell_skin_colour_pane

0xa1f3,	// (0x00063b1c) cell_skin_colour_pane_g1

0x1c1b,	// (0x0005b544) call_video_g1_ParamLimits

0x1c1b,	// (0x0005b544) call_video_g1

0x1c37,	// (0x0005b560) call_video_g2_ParamLimits

0x1c37,	// (0x0005b560) call_video_g2

0x0001,

0xf203,	// (0x00068b2c) call_video_g_ParamLimits

0xf203,	// (0x00068b2c) call_video_g

0x1c89,	// (0x0005b5b2) call_video_uplink_pane_cp1_ParamLimits

0x1c89,	// (0x0005b5b2) call_video_uplink_pane_cp1

0xa205,	// (0x00063b2e) call_video_uplink_pane_cp2

0x1d28,	// (0x0005b651) video_down_crop_pane_ParamLimits

0x1d28,	// (0x0005b651) video_down_crop_pane

0x1e1f,	// (0x0005b748) video_down_pane_ParamLimits

0x1e1f,	// (0x0005b748) video_down_pane

0xa20d,	// (0x00063b36) video_down_subqcif_pane_ParamLimits

0xa20d,	// (0x00063b36) video_down_subqcif_pane

0xa225,	// (0x00063b4e) video_down_subqcif_pane_cp_ParamLimits

0xa225,	// (0x00063b4e) video_down_subqcif_pane_cp

0xa24b,	// (0x00063b74) im_reading_pane_ParamLimits

0xa24b,	// (0x00063b74) im_reading_pane

0x1f2f,	// (0x0005b858) im_writing_pane_ParamLimits

0x1f2f,	// (0x0005b858) im_writing_pane

0x1f45,	// (0x0005b86e) im_reading_pane_t1

0xa265,	// (0x00063b8e) list_im_pane

0xa276,	// (0x00063b9f) scroll_pane_cp07

0x1f7e,	// (0x0005b8a7) im_writing_pane_t1_ParamLimits

0x1f7e,	// (0x0005b8a7) im_writing_pane_t1

0xa28f,	// (0x00063bb8) im_writing_pane_t2_ParamLimits

0xa28f,	// (0x00063bb8) im_writing_pane_t2

0x0001,

0xf20d,	// (0x00068b36) im_writing_pane_t_ParamLimits

0xf20d,	// (0x00068b36) im_writing_pane_t

0x9baf,	// (0x000634d8) input_focus_pane_cp04

0x9baf,	// (0x000634d8) input_focus_pane_cp05

0x1f93,	// (0x0005b8bc) list_im_single_pane_ParamLimits

0x1f93,	// (0x0005b8bc) list_im_single_pane

0x1fa7,	// (0x0005b8d0) list_single_im_pane_t1

0xa16c,	// (0x00063a95) blid_accuracy_pane

0xa16c,	// (0x00063a95) blid_compass_pane

0xbfae,	// (0x000658d7) main_location_t1

0xbfae,	// (0x000658d7) main_location_t2

0xbfae,	// (0x000658d7) main_location_t3

0x0002,

0xf554,	// (0x00068e7d) main_location_t

0x9baf,	// (0x000634d8) aid_levels_location

0x9e22,	// (0x0006374b) blid_accuracy_pane_g1

0x9e22,	// (0x0006374b) blid_accuracy_pane_g2

0x0001,

0xf25c,	// (0x00068b85) blid_accuracy_pane_g

0xa2d7,	// (0x00063c00) wml_content_pane

0xa315,	// (0x00063c3e) wml_button_pane_ParamLimits

0xa315,	// (0x00063c3e) wml_button_pane

0x1fb6,	// (0x0005b8df) wml_list_single_large_pane_ParamLimits

0x1fb6,	// (0x0005b8df) wml_list_single_large_pane

0x1fcb,	// (0x0005b8f4) wml_list_single_medium_pane_ParamLimits

0x1fcb,	// (0x0005b8f4) wml_list_single_medium_pane

0x1fe1,	// (0x0005b90a) wml_list_single_small_pane_ParamLimits

0x1fe1,	// (0x0005b90a) wml_list_single_small_pane

0xa329,	// (0x00063c52) wml_selection_box_pane_ParamLimits

0xa329,	// (0x00063c52) wml_selection_box_pane

0xa33c,	// (0x00063c65) wml_list_single_pane_t1

0xa34b,	// (0x00063c74) wml_list_single_medium_pane_t1

0xa35a,	// (0x00063c83) wml_list_single_large_pane_t1

0xa369,	// (0x00063c92) input_focus_pane_cp02_ParamLimits

0xa369,	// (0x00063c92) input_focus_pane_cp02

0xa37c,	// (0x00063ca5) wml_selection_box_pane_g1

0xa385,	// (0x00063cae) wml_selection_box_pane_t1_ParamLimits

0xa385,	// (0x00063cae) wml_selection_box_pane_t1

0x9e0a,	// (0x00063733) bg_wml_button_pane_ParamLimits

0x9e0a,	// (0x00063733) bg_wml_button_pane

0xa39d,	// (0x00063cc6) wml_button_pane_g1

0xa3a5,	// (0x00063cce) wml_button_pane_t1

0xa39d,	// (0x00063cc6) wml_button_bg_pane_g1

0xa3b5,	// (0x00063cde) wml_button_bg_pane_g2

0xa3bd,	// (0x00063ce6) wml_button_bg_pane_g3

0xa3c5,	// (0x00063cee) wml_button_bg_pane_g4

0xa3cd,	// (0x00063cf6) wml_button_bg_pane_g5

0xa3d5,	// (0x00063cfe) wml_button_bg_pane_g6

0xa3dd,	// (0x00063d06) wml_button_bg_pane_g7

0xa3e5,	// (0x00063d0e) wml_button_bg_pane_g8

0xa3ed,	// (0x00063d16) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x00068b3b) wml_button_bg_pane_g

0x1ff9,	// (0x0005b922) bg_list_pane_cp02

0xa3f5,	// (0x00063d1e) mce_header_pane_ParamLimits

0xa3f5,	// (0x00063d1e) mce_header_pane

0xa40b,	// (0x00063d34) mce_icon_pane

0xa40b,	// (0x00063d34) mce_image_pane

0x2001,	// (0x0005b92a) mce_text_pane_ParamLimits

0x2001,	// (0x0005b92a) mce_text_pane

0x2014,	// (0x0005b93d) scroll_pane_cp03

0xa30d,	// (0x00063c36) scroll_pane_cp04

0xa414,	// (0x00063d3d) scroll_pane_cp05_ParamLimits

0xa414,	// (0x00063d3d) scroll_pane_cp05

0x201c,	// (0x0005b945) mce_header_field_pane_ParamLimits

0x201c,	// (0x0005b945) mce_header_field_pane

0x2033,	// (0x0005b95c) mce_header_field_pane_2_ParamLimits

0x2033,	// (0x0005b95c) mce_header_field_pane_2

0x2049,	// (0x0005b972) mce_header_field_pane_3

0x2051,	// (0x0005b97a) list_single_mce_message_pane_ParamLimits

0x2051,	// (0x0005b97a) list_single_mce_message_pane

0x205d,	// (0x0005b986) list_single_mce_smart_pane_ParamLimits

0x205d,	// (0x0005b986) list_single_mce_smart_pane

0xa420,	// (0x00063d49) input_focus_pane_cp03

0xa429,	// (0x00063d52) list_header_data_pane

0x2071,	// (0x0005b99a) mce_header_field_pane_t1

0x207f,	// (0x0005b9a8) list_single_mce_header_pane_ParamLimits

0x207f,	// (0x0005b9a8) list_single_mce_header_pane

0xa431,	// (0x00063d5a) list_single_mce_header_pane_t1

0xa440,	// (0x00063d69) list_single_mce_message_pane_g1

0xa448,	// (0x00063d71) list_single_mce_message_pane_t1

0x20b9,	// (0x0005b9e2) bg_cale_heading_pane_cp01_ParamLimits

0x20b9,	// (0x0005b9e2) bg_cale_heading_pane_cp01

0xa456,	// (0x00063d7f) bg_cale_pane_cp02_ParamLimits

0xa456,	// (0x00063d7f) bg_cale_pane_cp02

0x20f3,	// (0x0005ba1c) cale_month_corner_pane

0x2112,	// (0x0005ba3b) cale_month_day_heading_pane_ParamLimits

0x2112,	// (0x0005ba3b) cale_month_day_heading_pane

0x2164,	// (0x0005ba8d) cale_month_pane_g1_ParamLimits

0x2164,	// (0x0005ba8d) cale_month_pane_g1

0x2193,	// (0x0005babc) cale_month_pane_g2_ParamLimits

0x2193,	// (0x0005babc) cale_month_pane_g2

0x21c3,	// (0x0005baec) cale_month_pane_g3_ParamLimits

0x21c3,	// (0x0005baec) cale_month_pane_g3

0x21ff,	// (0x0005bb28) cale_month_pane_g4_ParamLimits

0x21ff,	// (0x0005bb28) cale_month_pane_g4

0x223b,	// (0x0005bb64) cale_month_pane_g5_ParamLimits

0x223b,	// (0x0005bb64) cale_month_pane_g5

0x2283,	// (0x0005bbac) cale_month_pane_g6_ParamLimits

0x2283,	// (0x0005bbac) cale_month_pane_g6

0x22cf,	// (0x0005bbf8) cale_month_pane_g7_ParamLimits

0x22cf,	// (0x0005bbf8) cale_month_pane_g7

0x2323,	// (0x0005bc4c) cale_month_pane_g8_ParamLimits

0x2323,	// (0x0005bc4c) cale_month_pane_g8

0x2377,	// (0x0005bca0) cale_month_pane_g9_ParamLimits

0x2377,	// (0x0005bca0) cale_month_pane_g9

0x23c9,	// (0x0005bcf2) cale_month_pane_g10_ParamLimits

0x23c9,	// (0x0005bcf2) cale_month_pane_g10

0x241b,	// (0x0005bd44) cale_month_pane_g11_ParamLimits

0x241b,	// (0x0005bd44) cale_month_pane_g11

0x246d,	// (0x0005bd96) cale_month_pane_g12_ParamLimits

0x246d,	// (0x0005bd96) cale_month_pane_g12

0x24bf,	// (0x0005bde8) cale_month_pane_g13_ParamLimits

0x24bf,	// (0x0005bde8) cale_month_pane_g13

0x000c,

0xf225,	// (0x00068b4e) cale_month_pane_g_ParamLimits

0xf225,	// (0x00068b4e) cale_month_pane_g

0x2511,	// (0x0005be3a) cale_month_week_pane

0x2535,	// (0x0005be5e) grid_cale_month_pane_ParamLimits

0x2535,	// (0x0005be5e) grid_cale_month_pane

0x257e,	// (0x0005bea7) cale_month_day_heading_pane_t1

0x2604,	// (0x0005bf2d) cale_month_day_heading_pane_t2

0x267d,	// (0x0005bfa6) cale_month_day_heading_pane_t3

0x26f6,	// (0x0005c01f) cale_month_day_heading_pane_t4

0x2777,	// (0x0005c0a0) cale_month_day_heading_pane_t5

0x2800,	// (0x0005c129) cale_month_day_heading_pane_t6

0x2889,	// (0x0005c1b2) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x00068b69) cale_month_day_heading_pane_t

0xa11a,	// (0x00063a43) bg_cale_side_pane_cp01

0x291a,	// (0x0005c243) cale_month_week_pane_t1

0x2933,	// (0x0005c25c) cale_month_week_pane_t2

0x294c,	// (0x0005c275) cale_month_week_pane_t3

0x2965,	// (0x0005c28e) cale_month_week_pane_t4

0x297e,	// (0x0005c2a7) cale_month_week_pane_t5

0x2997,	// (0x0005c2c0) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x00068b78) cale_month_week_pane_t

0x29b0,	// (0x0005c2d9) cell_cale_month_pane_ParamLimits

0x29b0,	// (0x0005c2d9) cell_cale_month_pane

0xa495,	// (0x00063dbe) cell_cale_month_pane_g1

0x2ade,	// (0x0005c407) cell_cale_month_pane_t1_ParamLimits

0x2ade,	// (0x0005c407) cell_cale_month_pane_t1

0xa128,	// (0x00063a51) grid_highlight_pane_cp08

0x9e22,	// (0x0006374b) main_smil_g1

0x2b0a,	// (0x0005c433) smil_status_pane

0xa4a1,	// (0x00063dca) smil_text_pane

0xbec6,	// (0x000657ef) bg_popup_call3_rect_pane_g8

0xbece,	// (0x000657f7) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e8,	// (0x00068e11) bg_popup_call3_rect_pane_g

0xdfad,	// (0x000678d6) smil_status_volume_pane_g1

0xa4ab,	// (0x00063dd4) smil_status_pane_t1

0xc063,	// (0x0006598c) volume_smil_pane

0xa4c2,	// (0x00063deb) list_smil_text_pane

0x2b1d,	// (0x0005c446) scroll_pane_cp011

0x2b28,	// (0x0005c451) smil_text_list_pane_t1_ParamLimits

0x2b28,	// (0x0005c451) smil_text_list_pane_t1

0xa4cc,	// (0x00063df5) aid_volume_smil_ParamLimits

0xa4cc,	// (0x00063df5) aid_volume_smil

0x9e22,	// (0x0006374b) smil_volume_pane_g1

0x9e22,	// (0x0006374b) smil_volume_pane_g2

0x0001,

0xf25c,	// (0x00068b85) smil_volume_pane_g

0x142a,	// (0x0005ad53) listscroll_cale_day_pane

0xa4ee,	// (0x00063e17) bg_cale_pane

0xa506,	// (0x00063e2f) list_cale_pane

0xa529,	// (0x00063e52) scroll_pane_cp09

0xa53a,	// (0x00063e63) cale_bg_pane_g1

0xa542,	// (0x00063e6b) cale_bg_pane_g2

0xa54a,	// (0x00063e73) cale_bg_pane_g3

0xa552,	// (0x00063e7b) cale_bg_pane_g4

0xa55a,	// (0x00063e83) cale_bg_pane_g5

0xa562,	// (0x00063e8b) cale_bg_pane_g6

0xa56a,	// (0x00063e93) cale_bg_pane_g7

0xa572,	// (0x00063e9b) cale_bg_pane_g8

0xa57a,	// (0x00063ea3) cale_bg_pane_g9

0x0008,

0xf261,	// (0x00068b8a) cale_bg_pane_g

0x2b64,	// (0x0005c48d) list_cale_time_pane_ParamLimits

0x2b64,	// (0x0005c48d) list_cale_time_pane

0xa58a,	// (0x00063eb3) list_cale_time_pane_g1_ParamLimits

0xa58a,	// (0x00063eb3) list_cale_time_pane_g1

0xa596,	// (0x00063ebf) list_cale_time_pane_g2_ParamLimits

0xa596,	// (0x00063ebf) list_cale_time_pane_g2

0x2b79,	// (0x0005c4a2) list_cale_time_pane_g3_ParamLimits

0x2b79,	// (0x0005c4a2) list_cale_time_pane_g3

0x2b87,	// (0x0005c4b0) list_cale_time_pane_g4_ParamLimits

0x2b87,	// (0x0005c4b0) list_cale_time_pane_g4

0x2b95,	// (0x0005c4be) list_cale_time_pane_g5_ParamLimits

0x2b95,	// (0x0005c4be) list_cale_time_pane_g5

0x0005,

0xf274,	// (0x00068b9d) list_cale_time_pane_g_ParamLimits

0xf274,	// (0x00068b9d) list_cale_time_pane_g

0xa5b0,	// (0x00063ed9) list_cale_time_pane_t1_ParamLimits

0xa5b0,	// (0x00063ed9) list_cale_time_pane_t1

0xa5d8,	// (0x00063f01) list_cale_time_pane_t2_ParamLimits

0xa5d8,	// (0x00063f01) list_cale_time_pane_t2

0x2df7,	// (0x0005c720) aid_blid_cardinal_pane

0x2e35,	// (0x0005c75e) compass_pane_t4

0xa600,	// (0x00063f29) list_cale_time_pane_t4_ParamLimits

0xa600,	// (0x00063f29) list_cale_time_pane_t4

0x2e43,	// (0x0005c76c) compass_pane_t5

0x2e51,	// (0x0005c77a) compass_pane_t6

0x2e5f,	// (0x0005c788) compass_pane_t7

0xab32,	// (0x0006445b) navi_pane_cc_t1

0xad21,	// (0x0006464a) aid_phob_thumbnail_center_pane

0x32b1,	// (0x0005cbda) main_postcard_pane_g4_ParamLimits

0x0002,

0xf281,	// (0x00068baa) list_cale_time_pane_t_ParamLimits

0xf281,	// (0x00068baa) list_cale_time_pane_t

0x9806,	// (0x0006312f) bg_popup_window_pane_cp02_ParamLimits

0x9806,	// (0x0006312f) bg_popup_window_pane_cp02

0xa628,	// (0x00063f51) heading_pane_cp01_ParamLimits

0xa628,	// (0x00063f51) heading_pane_cp01

0xa634,	// (0x00063f5d) loc_req_pane_ParamLimits

0xa634,	// (0x00063f5d) loc_req_pane

0xa644,	// (0x00063f6d) loc_type_pane_ParamLimits

0xa644,	// (0x00063f6d) loc_type_pane

0xa656,	// (0x00063f7f) loc_type_pane_t1_ParamLimits

0xa656,	// (0x00063f7f) loc_type_pane_t1

0xa668,	// (0x00063f91) loc_type_pane_t2_ParamLimits

0xa668,	// (0x00063f91) loc_type_pane_t2

0xa67a,	// (0x00063fa3) loc_type_pane_t3_ParamLimits

0xa67a,	// (0x00063fa3) loc_type_pane_t3

0x0002,

0xf288,	// (0x00068bb1) loc_type_pane_t_ParamLimits

0xf288,	// (0x00068bb1) loc_type_pane_t

0xa68c,	// (0x00063fb5) list_loc_req_pane

0xa696,	// (0x00063fbf) scroll_pane_cp012

0x2ba3,	// (0x0005c4cc) list_single_loc_request_popup_menu_pane_ParamLimits

0x2ba3,	// (0x0005c4cc) list_single_loc_request_popup_menu_pane

0xa6a1,	// (0x00063fca) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa6a1,	// (0x00063fca) list_single_loc_request_popup_menu_pane_g1

0xa6ad,	// (0x00063fd6) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa6ad,	// (0x00063fd6) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf28f,	// (0x00068bb8) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf28f,	// (0x00068bb8) list_single_loc_request_popup_menu_pane_g

0xa6b9,	// (0x00063fe2) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa6b9,	// (0x00063fe2) list_single_loc_request_popup_menu_pane_t1

0x9e0a,	// (0x00063733) bg_popup_window_pane_cp03_ParamLimits

0x9e0a,	// (0x00063733) bg_popup_window_pane_cp03

0xa6cf,	// (0x00063ff8) heading_loc_req_pane_ParamLimits

0xa6cf,	// (0x00063ff8) heading_loc_req_pane

0x2bb0,	// (0x0005c4d9) popup_dyc_status_message_window_g1_ParamLimits

0x2bb0,	// (0x0005c4d9) popup_dyc_status_message_window_g1

0x2bc4,	// (0x0005c4ed) popup_dyc_status_message_window_t1_ParamLimits

0x2bc4,	// (0x0005c4ed) popup_dyc_status_message_window_t1

0x2bd9,	// (0x0005c502) popup_dyc_status_message_window_t2_ParamLimits

0x2bd9,	// (0x0005c502) popup_dyc_status_message_window_t2

0x2bee,	// (0x0005c517) popup_dyc_status_message_window_t3_ParamLimits

0x2bee,	// (0x0005c517) popup_dyc_status_message_window_t3

0x0002,

0xf294,	// (0x00068bbd) popup_dyc_status_message_window_t_ParamLimits

0xf294,	// (0x00068bbd) popup_dyc_status_message_window_t

0x9baf,	// (0x000634d8) bg_heading_pane_cp01

0xa6db,	// (0x00064004) heading_loc_req_pane_g1

0xa6e3,	// (0x0006400c) heading_loc_req_pane_g2

0xa6eb,	// (0x00064014) heading_loc_req_pane_g3

0x0002,

0xf29b,	// (0x00068bc4) heading_loc_req_pane_g

0xa6f3,	// (0x0006401c) heading_loc_req_pane_t1

0xa71e,	// (0x00064047) bg_popup_sub_pane_cp01_ParamLimits

0xa71e,	// (0x00064047) bg_popup_sub_pane_cp01

0xa72c,	// (0x00064055) popup_cale_events_window_g1_ParamLimits

0xa72c,	// (0x00064055) popup_cale_events_window_g1

0xa74c,	// (0x00064075) popup_cale_events_window_g2_ParamLimits

0xa74c,	// (0x00064075) popup_cale_events_window_g2

0x0001,

0xf2bd,	// (0x00068be6) popup_cale_events_window_g_ParamLimits

0xf2bd,	// (0x00068be6) popup_cale_events_window_g

0xa76c,	// (0x00064095) popup_cale_events_window_t1_ParamLimits

0xa76c,	// (0x00064095) popup_cale_events_window_t1

0xa77e,	// (0x000640a7) popup_cale_events_window_t2_ParamLimits

0xa77e,	// (0x000640a7) popup_cale_events_window_t2

0xa7bc,	// (0x000640e5) popup_cale_events_window_t3_ParamLimits

0xa7bc,	// (0x000640e5) popup_cale_events_window_t3

0xa7f6,	// (0x0006411f) popup_cale_events_window_t4_ParamLimits

0xa7f6,	// (0x0006411f) popup_cale_events_window_t4

0x0003,

0xf2c2,	// (0x00068beb) popup_cale_events_window_t_ParamLimits

0xf2c2,	// (0x00068beb) popup_cale_events_window_t

0x2c16,	// (0x0005c53f) call_type_pane

0x2c26,	// (0x0005c54f) popup_call_status_window_g1

0x2c3a,	// (0x0005c563) popup_call_status_window_g2

0x2c4e,	// (0x0005c577) popup_call_status_window_g3

0x0002,

0xf2cb,	// (0x00068bf4) popup_call_status_window_g

0xa82c,	// (0x00064155) call_type_pane_g1

0xa835,	// (0x0006415e) call_type_pane_g2

0x0001,

0xf2d2,	// (0x00068bfb) call_type_pane_g

0x9baf,	// (0x000634d8) bg_popup_sub_pane_cp02

0xa83e,	// (0x00064167) listscroll_popup_wml_pane

0xa846,	// (0x0006416f) list_wml_pane

0xa850,	// (0x00064179) scroll_pane_cp013

0xa85b,	// (0x00064184) list_single_graphic_popup_wml_pane_ParamLimits

0xa85b,	// (0x00064184) list_single_graphic_popup_wml_pane

0x9e22,	// (0x0006374b) list_single_graphic_popup_wml_pane_g1

0xa86f,	// (0x00064198) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2d7,	// (0x00068c00) list_single_graphic_popup_wml_pane_g

0xa877,	// (0x000641a0) list_single_graphic_popup_wml_pane_t1

0xa88d,	// (0x000641b6) aid_call_pane

0x9e02,	// (0x0006372b) popup_clock_analogue_window_g1

0x9e02,	// (0x0006372b) popup_clock_analogue_window_g2

0xa895,	// (0x000641be) popup_clock_analogue_window_g3

0xa895,	// (0x000641be) popup_clock_analogue_window_g4

0x9e22,	// (0x0006374b) popup_clock_analogue_window_g5

0x0004,

0xf2dc,	// (0x00068c05) popup_clock_analogue_window_g

0xa89d,	// (0x000641c6) popup_clock_analogue_window_t1

0xa8ab,	// (0x000641d4) clock_digital_number_pane_ParamLimits

0xa8ab,	// (0x000641d4) clock_digital_number_pane

0xa8b7,	// (0x000641e0) clock_digital_number_pane_cp02_ParamLimits

0xa8b7,	// (0x000641e0) clock_digital_number_pane_cp02

0xa8c3,	// (0x000641ec) clock_digital_number_pane_cp03_ParamLimits

0xa8c3,	// (0x000641ec) clock_digital_number_pane_cp03

0xa8cf,	// (0x000641f8) clock_digital_number_pane_cp04_ParamLimits

0xa8cf,	// (0x000641f8) clock_digital_number_pane_cp04

0xa8df,	// (0x00064208) clock_digital_separator_pane_ParamLimits

0xa8df,	// (0x00064208) clock_digital_separator_pane

0xa8eb,	// (0x00064214) popup_clock_digital_window_t1

0x9e22,	// (0x0006374b) clock_digital_number_pane_g1

0x9e22,	// (0x0006374b) clock_digital_number_pane_g2

0x0001,

0xf25c,	// (0x00068b85) clock_digital_number_pane_g

0x9e22,	// (0x0006374b) clock_digital_separator_pane_g1

0x9e22,	// (0x0006374b) clock_digital_separator_pane_g2

0x0001,

0xf25c,	// (0x00068b85) clock_digital_separator_pane_g

0x9baf,	// (0x000634d8) bg_popup_window_pane_cp04

0xa908,	// (0x00064231) heading_pane_cp03

0xa16c,	// (0x00063a95) listscroll_popup_gms_pane

0x9baf,	// (0x000634d8) grid_large_graphic_popup_pane

0xa911,	// (0x0006423a) listscroll_popup_gms_pane_g1

0xa91a,	// (0x00064243) listscroll_popup_gms_pane_g2

0x0001,

0xf2e7,	// (0x00068c10) listscroll_popup_gms_pane_g

0xa923,	// (0x0006424c) scroll_pane_cp014

0x9e85,	// (0x000637ae) cell_large_graphic_popup_pane_ParamLimits

0x9e85,	// (0x000637ae) cell_large_graphic_popup_pane

0x9e93,	// (0x000637bc) cell_large_graphic_popup_pane_g1_ParamLimits

0x9e93,	// (0x000637bc) cell_large_graphic_popup_pane_g1

0xa92c,	// (0x00064255) cell_large_graphic_popup_pane_g2_ParamLimits

0xa92c,	// (0x00064255) cell_large_graphic_popup_pane_g2

0xa93a,	// (0x00064263) cell_large_graphic_popup_pane_g3_ParamLimits

0xa93a,	// (0x00064263) cell_large_graphic_popup_pane_g3

0xa948,	// (0x00064271) cell_large_graphic_popup_pane_g4_ParamLimits

0xa948,	// (0x00064271) cell_large_graphic_popup_pane_g4

0x0003,

0xf2ec,	// (0x00068c15) cell_large_graphic_popup_pane_g_ParamLimits

0xf2ec,	// (0x00068c15) cell_large_graphic_popup_pane_g

0x9baf,	// (0x000634d8) grid_highlight_pane_cp010

0x9e22,	// (0x0006374b) bg_popup_call_pane_g1

0xa959,	// (0x00064282) list_single_graphic_popup_conf_pane_ParamLimits

0xa959,	// (0x00064282) list_single_graphic_popup_conf_pane

0xa96c,	// (0x00064295) list_highlight_pane_cp01

0xa975,	// (0x0006429e) list_single_graphic_popup_conf_pane_g1

0xa97d,	// (0x000642a6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2f5,	// (0x00068c1e) list_single_graphic_popup_conf_pane_g

0xa985,	// (0x000642ae) list_single_graphic_popup_conf_pane_t1

0xa993,	// (0x000642bc) linegrid_cams_pane_g1

0x2c5d,	// (0x0005c586) linegrid_cams_pane_g2

0xa0ab,	// (0x000639d4) linegrid_cams_pane_g3

0xa99c,	// (0x000642c5) linegrid_cams_pane_g4

0x2c66,	// (0x0005c58f) linegrid_cams_pane_g5

0x2c6f,	// (0x0005c598) linegrid_cams_pane_g6

0xa15b,	// (0x00063a84) linegrid_cams_pane_g7

0x0006,

0xf2fa,	// (0x00068c23) linegrid_cams_pane_g

0xa9a5,	// (0x000642ce) popup_clock_analogue_window

0xa9a5,	// (0x000642ce) popup_clock_digital_window

0x9baf,	// (0x000634d8) popup_phob_thumbnail_window

0x9e22,	// (0x0006374b) call_video_uplink_pane_g1

0xa9ae,	// (0x000642d7) call_video_uplink_pane_g2

0x0001,

0xf309,	// (0x00068c32) call_video_uplink_pane_g

0xa9b6,	// (0x000642df) video_uplink_pane

0xa9be,	// (0x000642e7) mce_image_pane_g1

0x2c7a,	// (0x0005c5a3) mce_image_pane_g2

0x2c84,	// (0x0005c5ad) mce_image_pane_g3

0x2c8c,	// (0x0005c5b5) mce_image_pane_g4

0x2c94,	// (0x0005c5bd) mce_image_pane_g5

0x0004,

0xf30e,	// (0x00068c37) mce_image_pane_g

0xa9c8,	// (0x000642f1) control_top_pane_stacon_cp01_ParamLimits

0xa9c8,	// (0x000642f1) control_top_pane_stacon_cp01

0xa9dc,	// (0x00064305) uni_indicator_pane_stacon_cp01_ParamLimits

0xa9dc,	// (0x00064305) uni_indicator_pane_stacon_cp01

0xa9ed,	// (0x00064316) bg_popup_sub_pane_cp03

0xa9f7,	// (0x00064320) chi_dic_find_pane

0x2c9c,	// (0x0005c5c5) listscroll_chi_dic_pane

0xa9ff,	// (0x00064328) main_pane_chidic_g1

0xaa07,	// (0x00064330) chi_dic_find_pane_t1

0xaa15,	// (0x0006433e) find_chidic_pane

0xaa1e,	// (0x00064347) chi_dic_list_pane_ParamLimits

0xaa1e,	// (0x00064347) chi_dic_list_pane

0xaa2f,	// (0x00064358) scroll_pane_cp020

0xaa37,	// (0x00064360) find_chidic_pane_t1

0x9baf,	// (0x000634d8) input_focus_pane_cp06

0x2cb0,	// (0x0005c5d9) list_chi_dic_pane_ParamLimits

0x2cb0,	// (0x0005c5d9) list_chi_dic_pane

0x2cc2,	// (0x0005c5eb) list_chi_dic_pane_t1_ParamLimits

0x2cc2,	// (0x0005c5eb) list_chi_dic_pane_t1

0x9baf,	// (0x000634d8) list_highlight_pane_cp020

0xaa46,	// (0x0006436f) bg_cale_heading_pane_g1

0x2cd5,	// (0x0005c5fe) bg_cale_heading_pane_g2

0x2cdd,	// (0x0005c606) bg_cale_heading_pane_g3

0x2ce5,	// (0x0005c60e) bg_cale_heading_pane_g4

0x2cef,	// (0x0005c618) bg_cale_heading_pane_g5

0x2cf9,	// (0x0005c622) bg_cale_heading_pane_g6

0x2d01,	// (0x0005c62a) bg_cale_heading_pane_g7

0x2d09,	// (0x0005c632) bg_cale_heading_pane_g8

0x2d13,	// (0x0005c63c) bg_cale_heading_pane_g9

0x0008,

0xf319,	// (0x00068c42) bg_cale_heading_pane_g

0xaa46,	// (0x0006436f) bg_cale_side_pane_g1

0x2d1d,	// (0x0005c646) bg_cale_side_pane_g2

0x2d25,	// (0x0005c64e) bg_cale_side_pane_g3

0x2d2d,	// (0x0005c656) bg_cale_side_pane_g4

0x2d35,	// (0x0005c65e) bg_cale_side_pane_g5

0x2d3d,	// (0x0005c666) bg_cale_side_pane_g6

0x2d45,	// (0x0005c66e) bg_cale_side_pane_g7

0x2d4d,	// (0x0005c676) bg_cale_side_pane_g8

0x2d55,	// (0x0005c67e) bg_cale_side_pane_g9

0x0008,

0xf32c,	// (0x00068c55) bg_cale_side_pane_g

0x2d5d,	// (0x0005c686) popup_call_status_window_ParamLimits

0x2d5d,	// (0x0005c686) popup_call_status_window

0xaa4e,	// (0x00064377) stacon_top_pane

0xaa56,	// (0x0006437f) status_pane_ParamLimits

0xaa56,	// (0x0006437f) status_pane

0xaa6b,	// (0x00064394) status_small_pane

0xaa73,	// (0x0006439c) control_pane

0x9baf,	// (0x000634d8) stacon_bottom_pane

0xaa7b,	// (0x000643a4) list_single_mce_smart_pane_t1_ParamLimits

0xaa7b,	// (0x000643a4) list_single_mce_smart_pane_t1

0xaa8e,	// (0x000643b7) list_single_mce_smart_pane_t2_ParamLimits

0xaa8e,	// (0x000643b7) list_single_mce_smart_pane_t2

0x0001,

0xf33f,	// (0x00068c68) list_single_mce_smart_pane_t_ParamLimits

0xf33f,	// (0x00068c68) list_single_mce_smart_pane_t

0x2da6,	// (0x0005c6cf) compass_pane

0x2daf,	// (0x0005c6d8) main_location2_pane_t1

0x2dc1,	// (0x0005c6ea) main_location2_pane_t2

0x2dd3,	// (0x0005c6fc) main_location2_pane_t3

0x0003,

0xf344,	// (0x00068c6d) main_location2_pane_t

0xaaad,	// (0x000643d6) compass_pane_g1_ParamLimits

0xaaad,	// (0x000643d6) compass_pane_g1

0x2e17,	// (0x0005c740) compass_pane_t1

0x2e26,	// (0x0005c74f) compass_pane_t2

0x0005,

0xf34d,	// (0x00068c76) compass_pane_t

0x2e6d,	// (0x0005c796) text_secondary_cp61

0xab29,	// (0x00064452) navi_pane_cams_g5

0xaba5,	// (0x000644ce) navi_pane_im_t1

0xabb3,	// (0x000644dc) navi_pane_mp_g1_ParamLimits

0xabb3,	// (0x000644dc) navi_pane_mp_g1

0xabc7,	// (0x000644f0) navi_pane_mp_g2_ParamLimits

0xabc7,	// (0x000644f0) navi_pane_mp_g2

0xabd3,	// (0x000644fc) navi_pane_mp_g3_ParamLimits

0xabd3,	// (0x000644fc) navi_pane_mp_g3

0x0002,

0xf361,	// (0x00068c8a) navi_pane_mp_g_ParamLimits

0xf361,	// (0x00068c8a) navi_pane_mp_g

0xabdf,	// (0x00064508) navi_pane_mp_t1

0xabed,	// (0x00064516) navi_pane_mp_t2

0x0002,

0xf368,	// (0x00068c91) navi_pane_mp_t

0xac58,	// (0x00064581) navi_pane_vt_g1

0xabdf,	// (0x00064508) navi_pane_vt_t1

0xac60,	// (0x00064589) navi_slider_pane

0xa16c,	// (0x00063a95) zooming_pane

0xac70,	// (0x00064599) navi_slider_pane_g1

0xac79,	// (0x000645a2) navi_slider_pane_g2

0x0006,

0xf36f,	// (0x00068c98) navi_slider_pane_g

0xaca6,	// (0x000645cf) aid_levels_zoom

0xacae,	// (0x000645d7) zooming_pane_g1

0xacb6,	// (0x000645df) zooming_pane_g2

0xacb6,	// (0x000645df) zooming_pane_g3

0x0002,

0xf37e,	// (0x00068ca7) zooming_pane_g

0xacbe,	// (0x000645e7) level_10_zoom

0xacc7,	// (0x000645f0) level_11_zoom

0xacd0,	// (0x000645f9) level_1_zoom

0xacd9,	// (0x00064602) level_2_zoom

0xace2,	// (0x0006460b) level_3_zoom

0xaceb,	// (0x00064614) level_4_zoom

0xacf4,	// (0x0006461d) level_5_zoom

0xacfd,	// (0x00064626) level_6_zoom

0xad06,	// (0x0006462f) level_7_zoom

0xad0f,	// (0x00064638) level_8_zoom

0xad18,	// (0x00064641) level_9_zoom

0xad29,	// (0x00064652) popup_phob_thumbnail_window_g1

0xad31,	// (0x0006465a) popup_phob_thumbnail_window_g2

0x0001,

0xf385,	// (0x00068cae) popup_phob_thumbnail_window_g

0x3957,	// (0x0005d280) level_1_location

0x395f,	// (0x0005d288) level_2_location

0x3967,	// (0x0005d290) level_3_location

0x396f,	// (0x0005d298) level_4_location

0xa16c,	// (0x00063a95) level_5_location

0x2ebe,	// (0x0005c7e7) mce_icon_pane_g1

0x2ec6,	// (0x0005c7ef) mce_icon_pane_g2

0x0001,

0xf38a,	// (0x00068cb3) mce_icon_pane_g

0xad39,	// (0x00064662) main_mup_pane_g1_ParamLimits

0xad39,	// (0x00064662) main_mup_pane_g1

0xad39,	// (0x00064662) main_mup_pane_g2_ParamLimits

0xad39,	// (0x00064662) main_mup_pane_g2

0xad39,	// (0x00064662) main_mup_pane_g3_ParamLimits

0xad39,	// (0x00064662) main_mup_pane_g3

0xad39,	// (0x00064662) main_mup_pane_g4_ParamLimits

0xad39,	// (0x00064662) main_mup_pane_g4

0xad39,	// (0x00064662) main_mup_pane_g5_ParamLimits

0xad39,	// (0x00064662) main_mup_pane_g5

0xad39,	// (0x00064662) main_mup_pane_g6_ParamLimits

0xad39,	// (0x00064662) main_mup_pane_g6

0xad39,	// (0x00064662) main_mup_pane_g7_ParamLimits

0xad39,	// (0x00064662) main_mup_pane_g7

0xad39,	// (0x00064662) main_mup_pane_g8_ParamLimits

0xad39,	// (0x00064662) main_mup_pane_g8

0xad39,	// (0x00064662) main_mup_pane_g9_ParamLimits

0xad39,	// (0x00064662) main_mup_pane_g9

0xad39,	// (0x00064662) main_mup_pane_g10_ParamLimits

0xad39,	// (0x00064662) main_mup_pane_g10

0xad39,	// (0x00064662) main_mup_pane_g11_ParamLimits

0xad39,	// (0x00064662) main_mup_pane_g11

0x9e93,	// (0x000637bc) main_mup_pane_g12_ParamLimits

0x9e93,	// (0x000637bc) main_mup_pane_g12

0xad39,	// (0x00064662) main_mup_pane_g13_ParamLimits

0xad39,	// (0x00064662) main_mup_pane_g13

0x000c,

0xf38f,	// (0x00068cb8) main_mup_pane_g_ParamLimits

0xf38f,	// (0x00068cb8) main_mup_pane_g

0xad47,	// (0x00064670) main_mup_pane_t1_ParamLimits

0xad47,	// (0x00064670) main_mup_pane_t1

0xad47,	// (0x00064670) main_mup_pane_t2_ParamLimits

0xad47,	// (0x00064670) main_mup_pane_t2

0xad47,	// (0x00064670) main_mup_pane_t3_ParamLimits

0xad47,	// (0x00064670) main_mup_pane_t3

0xa17e,	// (0x00063aa7) main_mup_pane_t4_ParamLimits

0xa17e,	// (0x00063aa7) main_mup_pane_t4

0xa17e,	// (0x00063aa7) main_mup_pane_t5_ParamLimits

0xa17e,	// (0x00063aa7) main_mup_pane_t5

0xad5b,	// (0x00064684) main_mup_pane_t6_ParamLimits

0xad5b,	// (0x00064684) main_mup_pane_t6

0x0005,

0xf3aa,	// (0x00068cd3) main_mup_pane_t_ParamLimits

0xf3aa,	// (0x00068cd3) main_mup_pane_t

0x9e85,	// (0x000637ae) mup_progress_pane_ParamLimits

0x9e85,	// (0x000637ae) mup_progress_pane

0xad6f,	// (0x00064698) mup_visualizer_pane_ParamLimits

0xad6f,	// (0x00064698) mup_visualizer_pane

0xad6f,	// (0x00064698) mup_volume_pane_ParamLimits

0xad6f,	// (0x00064698) mup_volume_pane

0x9ea1,	// (0x000637ca) mup_visualizer_pane_g1_ParamLimits

0x9ea1,	// (0x000637ca) mup_visualizer_pane_g1

0xad7d,	// (0x000646a6) mup_visualizer_pane_g2_ParamLimits

0xad7d,	// (0x000646a6) mup_visualizer_pane_g2

0x9e93,	// (0x000637bc) mup_visualizer_pane_g3_ParamLimits

0x9e93,	// (0x000637bc) mup_visualizer_pane_g3

0x0002,

0xf3b7,	// (0x00068ce0) mup_visualizer_pane_g_ParamLimits

0xf3b7,	// (0x00068ce0) mup_visualizer_pane_g

0xa1ac,	// (0x00063ad5) mup_volume_pane_g1

0xa1ac,	// (0x00063ad5) mup_volume_pane_g2

0x0001,

0xf3be,	// (0x00068ce7) mup_volume_pane_g

0xa1ac,	// (0x00063ad5) mup_progress_pane_g1

0xa1ac,	// (0x00063ad5) mup_progress_pane_g2

0xa1ac,	// (0x00063ad5) mup_progress_pane_g3

0x0002,

0xf3c3,	// (0x00068cec) mup_progress_pane_g

0x9baf,	// (0x000634d8) bg_popup_window_pane_cp05

0xad8b,	// (0x000646b4) heading_pane_cp02_ParamLimits

0xad8b,	// (0x000646b4) heading_pane_cp02

0xada5,	// (0x000646ce) list_popup_blid_pane

0xadad,	// (0x000646d6) list_blid_sat_info_pane_ParamLimits

0xadad,	// (0x000646d6) list_blid_sat_info_pane

0xadc0,	// (0x000646e9) list_blid_sat_info_pane_g1

0xadc8,	// (0x000646f1) list_blid_sat_info_pane_t1

0x2fc6,	// (0x0005c8ef) mup_equalizer_pane_ParamLimits

0x2fc6,	// (0x0005c8ef) mup_equalizer_pane

0x2fdf,	// (0x0005c908) mup_equalizer_pane_cp1_ParamLimits

0x2fdf,	// (0x0005c908) mup_equalizer_pane_cp1

0x2ffc,	// (0x0005c925) mup_equalizer_pane_cp2_ParamLimits

0x2ffc,	// (0x0005c925) mup_equalizer_pane_cp2

0x3019,	// (0x0005c942) mup_equalizer_pane_cp3_ParamLimits

0x3019,	// (0x0005c942) mup_equalizer_pane_cp3

0x303a,	// (0x0005c963) mup_equalizer_pane_cp4_ParamLimits

0x303a,	// (0x0005c963) mup_equalizer_pane_cp4

0x305b,	// (0x0005c984) mup_equalizer_pane_cp5

0x306f,	// (0x0005c998) mup_equalizer_pane_cp6

0x3083,	// (0x0005c9ac) mup_equalizer_pane_cp7

0xbf46,	// (0x0006586f) bg_popup_call_poc_act_pane_g9

0xbf4e,	// (0x00065877) bg_popup_call_poc_act_pane_g10

0xbf56,	// (0x0006587f) bg_popup_call_poc_act_pane_g11

0x000a,

0x9e0a,	// (0x00063733) mup_scale_pane

0x9e22,	// (0x0006374b) mup_scale_pane_g1

0xadd6,	// (0x000646ff) mup_scale_pane_g2

0x0006,

0xf3df,	// (0x00068d08) mup_scale_pane_g

0xadfa,	// (0x00064723) msg_data_pane

0xae02,	// (0x0006472b) scroll_pane_cp017

0x30a9,	// (0x0005c9d2) bg_list_pane_cp04_ParamLimits

0x30a9,	// (0x0005c9d2) bg_list_pane_cp04

0xae0a,	// (0x00064733) msg_data_pane_g1

0x30c9,	// (0x0005c9f2) msg_data_pane_g2

0x30d3,	// (0x0005c9fc) msg_data_pane_g3

0x30db,	// (0x0005ca04) msg_data_pane_g4

0x30e3,	// (0x0005ca0c) msg_data_pane_g5

0x30eb,	// (0x0005ca14) msg_data_pane_g6

0x30f3,	// (0x0005ca1c) msg_data_pane_g7

0x0006,

0xf3ee,	// (0x00068d17) msg_data_pane_g

0x30fb,	// (0x0005ca24) msg_text_pane_ParamLimits

0x30fb,	// (0x0005ca24) msg_text_pane

0x3127,	// (0x0005ca50) qrid_highlight_pane_cp011_ParamLimits

0x3127,	// (0x0005ca50) qrid_highlight_pane_cp011

0x9baf,	// (0x000634d8) msg_body_pane

0x9baf,	// (0x000634d8) msg_header_pane

0xae1b,	// (0x00064744) input_focus_pane_cp07

0x314b,	// (0x0005ca74) msg_header_pane_t1_ParamLimits

0x314b,	// (0x0005ca74) msg_header_pane_t1

0x3161,	// (0x0005ca8a) msg_header_pane_t2_ParamLimits

0x3161,	// (0x0005ca8a) msg_header_pane_t2

0x0001,

0xf402,	// (0x00068d2b) msg_header_pane_t_ParamLimits

0xf402,	// (0x00068d2b) msg_header_pane_t

0xae30,	// (0x00064759) msg_body_pane_g1

0x3178,	// (0x0005caa1) msg_body_pane_t1_ParamLimits

0x3178,	// (0x0005caa1) msg_body_pane_t1

0x31a9,	// (0x0005cad2) msg_body_pane_t2_ParamLimits

0x31a9,	// (0x0005cad2) msg_body_pane_t2

0x31bb,	// (0x0005cae4) msg_body_pane_t3_ParamLimits

0x31bb,	// (0x0005cae4) msg_body_pane_t3

0x0002,

0xf407,	// (0x00068d30) msg_body_pane_t_ParamLimits

0xf407,	// (0x00068d30) msg_body_pane_t

0x3207,	// (0x0005cb30) main_viewer_pane_g1_ParamLimits

0x3207,	// (0x0005cb30) main_viewer_pane_g1

0x3215,	// (0x0005cb3e) main_viewer_pane_g2_ParamLimits

0x3215,	// (0x0005cb3e) main_viewer_pane_g2

0x3223,	// (0x0005cb4c) main_viewer_pane_g3_ParamLimits

0x3223,	// (0x0005cb4c) main_viewer_pane_g3

0x3232,	// (0x0005cb5b) main_viewer_pane_g4_ParamLimits

0x3232,	// (0x0005cb5b) main_viewer_pane_g4

0xae50,	// (0x00064779) main_viewer_pane_g5_ParamLimits

0xae50,	// (0x00064779) main_viewer_pane_g5

0xae50,	// (0x00064779) main_viewer_pane_g7_ParamLimits

0xae50,	// (0x00064779) main_viewer_pane_g7

0xa6a1,	// (0x00063fca) main_viewer_pane_g8_ParamLimits

0xa6a1,	// (0x00063fca) main_viewer_pane_g8

0x0007,

0xf417,	// (0x00068d40) main_viewer_pane_g_ParamLimits

0xf417,	// (0x00068d40) main_viewer_pane_g

0xae6e,	// (0x00064797) viewer_content_pane_ParamLimits

0xae6e,	// (0x00064797) viewer_content_pane

0x326e,	// (0x0005cb97) main_postcard_pane_g1_ParamLimits

0x326e,	// (0x0005cb97) main_postcard_pane_g1

0x3284,	// (0x0005cbad) main_postcard_pane_g2_ParamLimits

0x3284,	// (0x0005cbad) main_postcard_pane_g2

0x329a,	// (0x0005cbc3) main_postcard_pane_g3_ParamLimits

0x329a,	// (0x0005cbc3) main_postcard_pane_g3

0x0005,

0xf428,	// (0x00068d51) main_postcard_pane_g_ParamLimits

0xf428,	// (0x00068d51) main_postcard_pane_g

0x32b1,	// (0x0005cbda) main_postcard_pane_g4

0xdfc0,	// (0x000678e9) smil_status_volume_pane_g2

0x32f4,	// (0x0005cc1d) postcard_pane_ParamLimits

0x32f4,	// (0x0005cc1d) postcard_pane

0xae7c,	// (0x000647a5) postcard_pane_g1_ParamLimits

0xae7c,	// (0x000647a5) postcard_pane_g1

0x3336,	// (0x0005cc5f) postcard_pane_g2_ParamLimits

0x3336,	// (0x0005cc5f) postcard_pane_g2

0x3342,	// (0x0005cc6b) postcard_pane_g3_ParamLimits

0x3342,	// (0x0005cc6b) postcard_pane_g3

0xae8a,	// (0x000647b3) postcard_pane_g4_ParamLimits

0xae8a,	// (0x000647b3) postcard_pane_g4

0x334e,	// (0x0005cc77) postcard_pane_g5_ParamLimits

0x334e,	// (0x0005cc77) postcard_pane_g5

0x3363,	// (0x0005cc8c) postcard_pane_g6_ParamLimits

0x3363,	// (0x0005cc8c) postcard_pane_g6

0xae7c,	// (0x000647a5) postcard_pane_g7_ParamLimits

0xae7c,	// (0x000647a5) postcard_pane_g7

0x0006,

0xf435,	// (0x00068d5e) postcard_pane_g_ParamLimits

0xf435,	// (0x00068d5e) postcard_pane_g

0x3377,	// (0x0005cca0) main_mp2_pane_g1_ParamLimits

0x3377,	// (0x0005cca0) main_mp2_pane_g1

0x3383,	// (0x0005ccac) main_mp2_pane_g2_ParamLimits

0x3383,	// (0x0005ccac) main_mp2_pane_g2

0x338f,	// (0x0005ccb8) main_mp2_pane_g3_ParamLimits

0x338f,	// (0x0005ccb8) main_mp2_pane_g3

0x0002,

0xf444,	// (0x00068d6d) main_mp2_pane_g_ParamLimits

0xf444,	// (0x00068d6d) main_mp2_pane_g

0x339b,	// (0x0005ccc4) main_mp2_pane_t1_ParamLimits

0x339b,	// (0x0005ccc4) main_mp2_pane_t1

0x33b0,	// (0x0005ccd9) main_mp2_pane_t2_ParamLimits

0x33b0,	// (0x0005ccd9) main_mp2_pane_t2

0x33c2,	// (0x0005cceb) main_mp2_pane_t3_ParamLimits

0x33c2,	// (0x0005cceb) main_mp2_pane_t3

0x0002,

0xf44b,	// (0x00068d74) main_mp2_pane_t_ParamLimits

0xf44b,	// (0x00068d74) main_mp2_pane_t

0xae98,	// (0x000647c1) pec_content_pane_ParamLimits

0xae98,	// (0x000647c1) pec_content_pane

0xa30d,	// (0x00063c36) scroll_pane_cp015

0xaeaa,	// (0x000647d3) pec_attribute_pane_ParamLimits

0xaeaa,	// (0x000647d3) pec_attribute_pane

0x33d4,	// (0x0005ccfd) pec_content_pane_g1_ParamLimits

0x33d4,	// (0x0005ccfd) pec_content_pane_g1

0xaeba,	// (0x000647e3) pec_content_pane_t1_ParamLimits

0xaeba,	// (0x000647e3) pec_content_pane_t1

0xaecc,	// (0x000647f5) pec_content_pane_t2_ParamLimits

0xaecc,	// (0x000647f5) pec_content_pane_t2

0x0001,

0xf452,	// (0x00068d7b) pec_content_pane_t_ParamLimits

0xf452,	// (0x00068d7b) pec_content_pane_t

0x33e0,	// (0x0005cd09) list_single_graphic_pane_cp01_ParamLimits

0x33e0,	// (0x0005cd09) list_single_graphic_pane_cp01

0x9e0a,	// (0x00063733) bg_popup_sub_pane_cp04

0xaede,	// (0x00064807) popup_mup_playback_window_g1

0xaeea,	// (0x00064813) popup_mup_playback_window_t1

0xaeff,	// (0x00064828) popup_mup_playback_window_t2

0x0001,

0xf457,	// (0x00068d80) popup_mup_playback_window_t

0xaf36,	// (0x0006485f) main_image_pane_g1_ParamLimits

0xaf36,	// (0x0006485f) main_image_pane_g1

0xaf79,	// (0x000648a2) scroll_pane_cp018_ParamLimits

0xaf79,	// (0x000648a2) scroll_pane_cp018

0xaf91,	// (0x000648ba) scroll_pane_cp016_ParamLimits

0xaf91,	// (0x000648ba) scroll_pane_cp016

0x34ad,	// (0x0005cdd6) smil2_image_pane_ParamLimits

0x34ad,	// (0x0005cdd6) smil2_image_pane

0x34dd,	// (0x0005ce06) smil2_root_pane_ParamLimits

0x34dd,	// (0x0005ce06) smil2_root_pane

0x3515,	// (0x0005ce3e) smil2_text_pane_ParamLimits

0x3515,	// (0x0005ce3e) smil2_text_pane

0x9baf,	// (0x000634d8) bg_list_pane_cp06

0xafcd,	// (0x000648f6) grid_radio_pane

0x9baf,	// (0x000634d8) bg_popup_window_pane_cp06

0xafd5,	// (0x000648fe) main_fmradio_pane_t1

0xbf5e,	// (0x00065887) heading_pane_cp04

0xafe3,	// (0x0006490c) main_fmradio_pane_t2

0xbf66,	// (0x0006588f) popup_cale_lunar_info_window_g1

0xaff1,	// (0x0006491a) main_fmradio_pane_t3

0xbf6e,	// (0x00065897) popup_cale_lunar_info_window_g2

0xafff,	// (0x00064928) main_fmradio_pane_t4

0x0001,

0xb00d,	// (0x00064936) main_fmradio_pane_t5

0x0004,

0xf537,	// (0x00068e60) popup_cale_lunar_info_window_g

0xf46c,	// (0x00068d95) main_fmradio_pane_t

0xb01b,	// (0x00064944) wait_bar_pane_cp03

0xb023,	// (0x0006494c) cell_fmradio_pane_ParamLimits

0xb023,	// (0x0006494c) cell_fmradio_pane

0xae7c,	// (0x000647a5) cell_fmradio_pane_g1_ParamLimits

0xae7c,	// (0x000647a5) cell_fmradio_pane_g1

0x9baf,	// (0x000634d8) grid_highlight_pane_cp011

0xb036,	// (0x0006495f) poc_content_pane_ParamLimits

0xb036,	// (0x0006495f) poc_content_pane

0xb048,	// (0x00064971) scroll_pane_cp019

0x3595,	// (0x0005cebe) popup_call_poc_act_window_ParamLimits

0x3595,	// (0x0005cebe) popup_call_poc_act_window

0x35b9,	// (0x0005cee2) popup_call_poc_inact_window_ParamLimits

0x35b9,	// (0x0005cee2) popup_call_poc_inact_window

0xf50e,	// (0x00068e37) bg_popup_call_poc_act_pane_g

0xbed6,	// (0x000657ff) bg_popup_call_poc_inact_pane_g1

0xbede,	// (0x00065807) bg_popup_call_poc_inact_pane_g2

0xb050,	// (0x00064979) popup_call_poc_act_window_g2

0xbee6,	// (0x0006580f) bg_popup_call_poc_inact_pane_g3

0xbeee,	// (0x00065817) bg_popup_call_poc_inact_pane_g4

0xbef6,	// (0x0006581f) bg_popup_call_poc_inact_pane_g5

0xb058,	// (0x00064981) popup_call_poc_act_window_t1_ParamLimits

0xb058,	// (0x00064981) popup_call_poc_act_window_t1

0xb080,	// (0x000649a9) popup_call_poc_act_window_t2_ParamLimits

0xb080,	// (0x000649a9) popup_call_poc_act_window_t2

0xb0a8,	// (0x000649d1) popup_call_poc_act_window_t3_ParamLimits

0xb0a8,	// (0x000649d1) popup_call_poc_act_window_t3

0xb0d0,	// (0x000649f9) popup_call_poc_act_window_t4_ParamLimits

0xb0d0,	// (0x000649f9) popup_call_poc_act_window_t4

0x0003,

0xf477,	// (0x00068da0) popup_call_poc_act_window_t_ParamLimits

0xf477,	// (0x00068da0) popup_call_poc_act_window_t

0xbefe,	// (0x00065827) bg_popup_call_poc_inact_pane_g6

0xbf06,	// (0x0006582f) bg_popup_call_poc_inact_pane_g7

0xbf0e,	// (0x00065837) bg_popup_call_poc_inact_pane_g8

0xb0e2,	// (0x00064a0b) popup_call_poc_inact_window_g2

0xbf16,	// (0x0006583f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4fb,	// (0x00068e24) bg_popup_call_poc_inact_pane_g

0xb0ea,	// (0x00064a13) popup_call_poc_inact_window_t1_ParamLimits

0xb0ea,	// (0x00064a13) popup_call_poc_inact_window_t1

0xb0ff,	// (0x00064a28) popup_call_poc_inact_window_t2_ParamLimits

0xb0ff,	// (0x00064a28) popup_call_poc_inact_window_t2

0xb114,	// (0x00064a3d) popup_call_poc_inact_window_t3_ParamLimits

0xb114,	// (0x00064a3d) popup_call_poc_inact_window_t3

0x0002,

0xf480,	// (0x00068da9) popup_call_poc_inact_window_t_ParamLimits

0xf480,	// (0x00068da9) popup_call_poc_inact_window_t

0xdf38,	// (0x00067861) context_pane_ParamLimits

0x3e3b,	// (0x0005d764) signal_pane_ParamLimits

0xa16c,	// (0x00063a95) main_call2_pane

0xc02f,	// (0x00065958) popup_phob_thumbnail2_window_ParamLimits

0xc02f,	// (0x00065958) popup_phob_thumbnail2_window

0xae38,	// (0x00064761) aid_hotspot_pointer_arrow_pane

0xae40,	// (0x00064769) aid_hotspot_pointer_hand_pane

0x3921,	// (0x0005d24a) phob_pre_status_pane_g5

0x9e2c,	// (0x00063755) cams_zoom_pane_ParamLimits

0x9e2c,	// (0x00063755) image_vga_pane_ParamLimits

0x9e93,	// (0x000637bc) main_camera_pane_g1_ParamLimits

0x9e93,	// (0x000637bc) main_camera_pane_g2_ParamLimits

0x9e93,	// (0x000637bc) main_camera_pane_g3_ParamLimits

0x9e93,	// (0x000637bc) main_camera_pane_g4_ParamLimits

0x9e93,	// (0x000637bc) main_camera_pane_g5_ParamLimits

0x9e93,	// (0x000637bc) main_camera_pane_g6_ParamLimits

0x9e93,	// (0x000637bc) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x00068ad4) main_camera_pane_g_ParamLimits

0xa17e,	// (0x00063aa7) main_camera_pane_t1_ParamLimits

0xa17e,	// (0x00063aa7) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x00068ae5) main_camera_pane_t_ParamLimits

0x9e0a,	// (0x00063733) bg_popup_preview_window_pane_cp01_ParamLimits

0x9e0a,	// (0x00063733) bg_popup_preview_window_pane_cp01

0xb129,	// (0x00064a52) popup_phob_thumbnail2_window_g1_ParamLimits

0xb129,	// (0x00064a52) popup_phob_thumbnail2_window_g1

0x9baf,	// (0x000634d8) call2_cli_visual_pane

0x35ed,	// (0x0005cf16) popup_call2_audio_conf_window_ParamLimits

0x35ed,	// (0x0005cf16) popup_call2_audio_conf_window

0x360d,	// (0x0005cf36) popup_call2_audio_first_window_ParamLimits

0x360d,	// (0x0005cf36) popup_call2_audio_first_window

0x36a3,	// (0x0005cfcc) popup_call2_audio_in_window_ParamLimits

0x36a3,	// (0x0005cfcc) popup_call2_audio_in_window

0x36eb,	// (0x0005d014) popup_call2_audio_out_window_ParamLimits

0x36eb,	// (0x0005d014) popup_call2_audio_out_window

0x3755,	// (0x0005d07e) popup_call2_audio_second_window_ParamLimits

0x3755,	// (0x0005d07e) popup_call2_audio_second_window

0x37bb,	// (0x0005d0e4) popup_call2_audio_wait_window_ParamLimits

0x37bb,	// (0x0005d0e4) popup_call2_audio_wait_window

0x9baf,	// (0x000634d8) bg_popup_call2_act_pane_cp03

0x9dec,	// (0x00063715) list_conf_pane_cp

0xb135,	// (0x00064a5e) popup_call2_audio_conf_window_t1

0xa959,	// (0x00064282) list_single_graphic_popup_conf2_pane_ParamLimits

0xa959,	// (0x00064282) list_single_graphic_popup_conf2_pane

0xa96c,	// (0x00064295) list_highlight_pane_cp04

0xb143,	// (0x00064a6c) list_single_graphic_popup_conf2_pane_g1

0xa97d,	// (0x000642a6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf487,	// (0x00068db0) list_single_graphic_popup_conf2_pane_g

0xb14d,	// (0x00064a76) list_single_graphic_popup_conf2_pane_t1

0xb15b,	// (0x00064a84) bg_popup_call2_act_pane_cp01_ParamLimits

0xb15b,	// (0x00064a84) bg_popup_call2_act_pane_cp01

0xb1e5,	// (0x00064b0e) call_type_pane_cp05_ParamLimits

0xb1e5,	// (0x00064b0e) call_type_pane_cp05

0xb239,	// (0x00064b62) popup_call2_audio_second_window_g1_ParamLimits

0xb239,	// (0x00064b62) popup_call2_audio_second_window_g1

0xb28d,	// (0x00064bb6) popup_call2_audio_second_window_g2_ParamLimits

0xb28d,	// (0x00064bb6) popup_call2_audio_second_window_g2

0x0002,

0xf48c,	// (0x00068db5) popup_call2_audio_second_window_g_ParamLimits

0xf48c,	// (0x00068db5) popup_call2_audio_second_window_g

0xb2f2,	// (0x00064c1b) popup_call2_audio_second_window_t1_ParamLimits

0xb2f2,	// (0x00064c1b) popup_call2_audio_second_window_t1

0xb3ad,	// (0x00064cd6) popup_call2_audio_second_window_t2_ParamLimits

0xb3ad,	// (0x00064cd6) popup_call2_audio_second_window_t2

0xb400,	// (0x00064d29) popup_call2_audio_second_window_t3_ParamLimits

0xb400,	// (0x00064d29) popup_call2_audio_second_window_t3

0x0003,

0xf493,	// (0x00068dbc) popup_call2_audio_second_window_t_ParamLimits

0xf493,	// (0x00068dbc) popup_call2_audio_second_window_t

0x9baf,	// (0x000634d8) bg_popup_call2_in_pane_cp02

0x9bb9,	// (0x000634e2) call_type_pane_cp04

0x37f5,	// (0x0005d11e) popup_call2_audio_wait_window_g1

0x37fd,	// (0x0005d126) popup_call2_audio_wait_window_g2

0x0001,

0xf49c,	// (0x00068dc5) popup_call2_audio_wait_window_g

0x9bd1,	// (0x000634fa) popup_call2_audio_wait_window_t3

0xb4f3,	// (0x00064e1c) bg_popup_call2_act_pane_ParamLimits

0xb4f3,	// (0x00064e1c) bg_popup_call2_act_pane

0xb5b3,	// (0x00064edc) call_type_pane_cp03_ParamLimits

0xb5b3,	// (0x00064edc) call_type_pane_cp03

0xb617,	// (0x00064f40) popup_call2_audio_first_window_g1_ParamLimits

0xb617,	// (0x00064f40) popup_call2_audio_first_window_g1

0xb687,	// (0x00064fb0) popup_call2_audio_first_window_g2_ParamLimits

0xb687,	// (0x00064fb0) popup_call2_audio_first_window_g2

0xb6eb,	// (0x00065014) popup_call2_audio_first_window_g3_ParamLimits

0xb6eb,	// (0x00065014) popup_call2_audio_first_window_g3

0x0004,

0xf4a1,	// (0x00068dca) popup_call2_audio_first_window_g_ParamLimits

0xf4a1,	// (0x00068dca) popup_call2_audio_first_window_g

0xb773,	// (0x0006509c) popup_call2_audio_first_window_t1_ParamLimits

0xb773,	// (0x0006509c) popup_call2_audio_first_window_t1

0xb876,	// (0x0006519f) popup_call2_audio_first_window_t4_ParamLimits

0xb876,	// (0x0006519f) popup_call2_audio_first_window_t4

0xb959,	// (0x00065282) popup_call2_audio_first_window_t5_ParamLimits

0xb959,	// (0x00065282) popup_call2_audio_first_window_t5

0x0003,

0xf4ac,	// (0x00068dd5) popup_call2_audio_first_window_t_ParamLimits

0xf4ac,	// (0x00068dd5) popup_call2_audio_first_window_t

0x9e02,	// (0x0006372b) bg_popup_call2_act_pane_g1

0xbf76,	// (0x0006589f) popup_cale_lunar_info_window_t1

0xbf84,	// (0x000658ad) popup_cale_lunar_info_window_t2

0xbf92,	// (0x000658bb) popup_cale_lunar_info_window_t3

0x9baf,	// (0x000634d8) bg_popup_call2_bubble_pane

0xba5a,	// (0x00065383) bg_popup_call2_in_pane_cp01_ParamLimits

0xba5a,	// (0x00065383) bg_popup_call2_in_pane_cp01

0x988b,	// (0x000631b4) call_type_pane_cp02

0x3805,	// (0x0005d12e) popup_call2_audio_out_window_g1_ParamLimits

0x3805,	// (0x0005d12e) popup_call2_audio_out_window_g1

0xbaa2,	// (0x000653cb) popup_call2_audio_out_window_g2_ParamLimits

0xbaa2,	// (0x000653cb) popup_call2_audio_out_window_g2

0x3831,	// (0x0005d15a) popup_call2_audio_out_window_g3_ParamLimits

0x3831,	// (0x0005d15a) popup_call2_audio_out_window_g3

0x0003,

0xf4b5,	// (0x00068dde) popup_call2_audio_out_window_g_ParamLimits

0xf4b5,	// (0x00068dde) popup_call2_audio_out_window_g

0xbad9,	// (0x00065402) popup_call2_audio_out_window_t1_ParamLimits

0xbad9,	// (0x00065402) popup_call2_audio_out_window_t1

0xbb38,	// (0x00065461) popup_call2_audio_out_window_t2_ParamLimits

0xbb38,	// (0x00065461) popup_call2_audio_out_window_t2

0xbb8c,	// (0x000654b5) popup_call2_audio_out_window_t3_ParamLimits

0xbb8c,	// (0x000654b5) popup_call2_audio_out_window_t3

0xbba2,	// (0x000654cb) popup_call2_audio_out_window_t4_ParamLimits

0xbba2,	// (0x000654cb) popup_call2_audio_out_window_t4

0xbbb8,	// (0x000654e1) popup_call2_audio_out_window_t5_ParamLimits

0xbbb8,	// (0x000654e1) popup_call2_audio_out_window_t5

0x0005,

0xf4be,	// (0x00068de7) popup_call2_audio_out_window_t_ParamLimits

0xf4be,	// (0x00068de7) popup_call2_audio_out_window_t

0xbc1c,	// (0x00065545) bg_popup_call2_in_pane_ParamLimits

0xbc1c,	// (0x00065545) bg_popup_call2_in_pane

0xbc78,	// (0x000655a1) popup_call2_audio_in_window_g1_ParamLimits

0xbc78,	// (0x000655a1) popup_call2_audio_in_window_g1

0xbcb0,	// (0x000655d9) popup_call2_audio_in_window_g2_ParamLimits

0xbcb0,	// (0x000655d9) popup_call2_audio_in_window_g2

0xbce8,	// (0x00065611) popup_call2_audio_in_window_g3_ParamLimits

0xbce8,	// (0x00065611) popup_call2_audio_in_window_g3

0x0003,

0xf4cb,	// (0x00068df4) popup_call2_audio_in_window_g_ParamLimits

0xf4cb,	// (0x00068df4) popup_call2_audio_in_window_g

0xbd40,	// (0x00065669) popup_call2_audio_in_window_t1_ParamLimits

0xbd40,	// (0x00065669) popup_call2_audio_in_window_t1

0xbdc0,	// (0x000656e9) popup_call2_audio_in_window_t2_ParamLimits

0xbdc0,	// (0x000656e9) popup_call2_audio_in_window_t2

0xbe40,	// (0x00065769) popup_call2_audio_in_window_t3_ParamLimits

0xbe40,	// (0x00065769) popup_call2_audio_in_window_t3

0xbe5a,	// (0x00065783) popup_call2_audio_in_window_t4_ParamLimits

0xbe5a,	// (0x00065783) popup_call2_audio_in_window_t4

0xbe6c,	// (0x00065795) popup_call2_audio_in_window_t5_ParamLimits

0xbe6c,	// (0x00065795) popup_call2_audio_in_window_t5

0xbe81,	// (0x000657aa) popup_call2_audio_in_window_t6_ParamLimits

0xbe81,	// (0x000657aa) popup_call2_audio_in_window_t6

0x0005,

0xf4d4,	// (0x00068dfd) popup_call2_audio_in_window_t_ParamLimits

0xf4d4,	// (0x00068dfd) popup_call2_audio_in_window_t

0x9e02,	// (0x0006372b) bg_popup_call2_in_pane_g1

0xbfa0,	// (0x000658c9) popup_cale_lunar_info_window_t4

0x0003,

0xf53c,	// (0x00068e65) popup_cale_lunar_info_window_t

0x9e0a,	// (0x00063733) bg_popup_call2_rect_pane_ParamLimits

0x9e0a,	// (0x00063733) bg_popup_call2_rect_pane

0x9baf,	// (0x000634d8) call2_cli_visual_graphic_pane

0x9baf,	// (0x000634d8) call2_cli_visual_text_pane

0xc056,	// (0x0006597f) smil_status_volume_pane_g3

0x0002,

0x9e22,	// (0x0006374b) call2_cli_visual_graphic_pane_g1

0x9e22,	// (0x0006374b) call2_cli_visual_graphic_pane_g2

0x9e22,	// (0x0006374b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e1,	// (0x00068e0a) call2_cli_visual_graphic_pane_g

0xbe96,	// (0x000657bf) bg_popup_call2_rect_pane_g1

0xa02b,	// (0x00063954) bg_popup_call2_rect_pane_g2

0xbe9e,	// (0x000657c7) bg_popup_call2_rect_pane_g3

0xbea6,	// (0x000657cf) bg_popup_call2_rect_pane_g4

0xbeae,	// (0x000657d7) bg_popup_call2_rect_pane_g5

0xbeb6,	// (0x000657df) bg_popup_call2_rect_pane_g6

0xbebe,	// (0x000657e7) bg_popup_call2_rect_pane_g7

0xbec6,	// (0x000657ef) bg_popup_call2_rect_pane_g8

0xbece,	// (0x000657f7) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e8,	// (0x00068e11) bg_popup_call2_rect_pane_g

0xbed6,	// (0x000657ff) bg_popup_call2_bubble_pane_g1

0xbede,	// (0x00065807) bg_popup_call2_bubble_pane_g2

0xbee6,	// (0x0006580f) bg_popup_call2_bubble_pane_g3

0xbeee,	// (0x00065817) bg_popup_call2_bubble_pane_g4

0xbef6,	// (0x0006581f) bg_popup_call2_bubble_pane_g5

0xbefe,	// (0x00065827) bg_popup_call2_bubble_pane_g6

0xbf06,	// (0x0006582f) bg_popup_call2_bubble_pane_g7

0xbf0e,	// (0x00065837) bg_popup_call2_bubble_pane_g8

0xbf16,	// (0x0006583f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4fb,	// (0x00068e24) bg_popup_call2_bubble_pane_g

0x143c,	// (0x0005ad65) aid_cale_week_size_cell_pane

0x19e2,	// (0x0005b30b) aid_cams_cif_uncrop_pane_ParamLimits

0x19e2,	// (0x0005b30b) aid_cams_cif_uncrop_pane

0x1b38,	// (0x0005b461) aid_cams_size_cell_ParamLimits

0x1b38,	// (0x0005b461) aid_cams_size_cell

0x1b4c,	// (0x0005b475) grid_cams_pane_ParamLimits

0x1b66,	// (0x0005b48f) linegrid_cams_pane_ParamLimits

0x1c4d,	// (0x0005b576) call_video_pane_t1

0x1c6b,	// (0x0005b594) call_video_pane_t2

0x0001,

0xf208,	// (0x00068b31) call_video_pane_t

0x2093,	// (0x0005b9bc) aid_cale_month_size_cell_pane_ParamLimits

0x2093,	// (0x0005b9bc) aid_cale_month_size_cell_pane

0xf580,	// (0x00068ea9) smil_status_volume_pane_g

0xc063,	// (0x0006598c) volume_smil_pane_ParamLimits

0x971f,	// (0x00063048) aid_popup2_width_pane

0x13b3,	// (0x0005acdc) cell_qdial_pane_g4_ParamLimits

0x13b3,	// (0x0005acdc) cell_qdial_pane_g4

0x2df7,	// (0x0005c720) aid_blid_cardinal_pane_ParamLimits

0x2e03,	// (0x0005c72c) aid_blid_destination_pane_ParamLimits

0x2e03,	// (0x0005c72c) aid_blid_destination_pane

0x9e0a,	// (0x00063733) bg_popup_call_poc_act_pane_ParamLimits

0x9e0a,	// (0x00063733) bg_popup_call_poc_act_pane

0x9e0a,	// (0x00063733) bg_popup_call_poc_inact_pane_ParamLimits

0x9e0a,	// (0x00063733) bg_popup_call_poc_inact_pane

0xbf1e,	// (0x00065847) bg_popup_call_poc_act_pane_g1

0xbf26,	// (0x0006584f) bg_popup_call_poc_act_pane_g2

0xbf2e,	// (0x00065857) bg_popup_call_poc_act_pane_g3

0xbeee,	// (0x00065817) bg_popup_call_poc_act_pane_g4

0xbef6,	// (0x0006581f) bg_popup_call_poc_act_pane_g5

0xbf36,	// (0x0006585f) bg_popup_call_poc_act_pane_g6

0xbf06,	// (0x0006582f) bg_popup_call_poc_act_pane_g7

0xbf3e,	// (0x00065867) bg_popup_call_poc_act_pane_g8

0x9baf,	// (0x000634d8) main_usb_pane

0xc00a,	// (0x00065933) popup_cale_lunar_info_window

0x1f45,	// (0x0005b86e) im_reading_pane_t1_ParamLimits

0xa265,	// (0x00063b8e) list_im_pane_ParamLimits

0xa276,	// (0x00063b9f) scroll_pane_cp07_ParamLimits

0x9baf,	// (0x000634d8) grid_highlight_pane_cp012

0x9e0a,	// (0x00063733) mup_scale_pane_ParamLimits

0xae7c,	// (0x000647a5) main_usb_pane_g1_ParamLimits

0xae7c,	// (0x000647a5) main_usb_pane_g1

0x387f,	// (0x0005d1a8) main_usb_pane_g2_ParamLimits

0x387f,	// (0x0005d1a8) main_usb_pane_g2

0x0001,

0xf525,	// (0x00068e4e) main_usb_pane_g_ParamLimits

0xf525,	// (0x00068e4e) main_usb_pane_g

0x3895,	// (0x0005d1be) main_usb_pane_t1_ParamLimits

0x3895,	// (0x0005d1be) main_usb_pane_t1

0x38a7,	// (0x0005d1d0) main_usb_pane_t2_ParamLimits

0x38a7,	// (0x0005d1d0) main_usb_pane_t2

0x38b9,	// (0x0005d1e2) main_usb_pane_t3_ParamLimits

0x38b9,	// (0x0005d1e2) main_usb_pane_t3

0x38cb,	// (0x0005d1f4) main_usb_pane_t4_ParamLimits

0x38cb,	// (0x0005d1f4) main_usb_pane_t4

0x38dd,	// (0x0005d206) main_usb_pane_t5_ParamLimits

0x38dd,	// (0x0005d206) main_usb_pane_t5

0x38ef,	// (0x0005d218) main_usb_pane_t6_ParamLimits

0x38ef,	// (0x0005d218) main_usb_pane_t6

0x0005,

0xf52a,	// (0x00068e53) main_usb_pane_t_ParamLimits

0x2da6,	// (0x0005c6cf) aid_text_placing

0x2daf,	// (0x0005c6d8) main_location2_pane_t1_ParamLimits

0x2dc1,	// (0x0005c6ea) main_location2_pane_t2_ParamLimits

0x2dd3,	// (0x0005c6fc) main_location2_pane_t3_ParamLimits

0x2de5,	// (0x0005c70e) main_location2_pane_t4_ParamLimits

0x2de5,	// (0x0005c70e) main_location2_pane_t4

0xf344,	// (0x00068c6d) main_location2_pane_t_ParamLimits

0x9e46,	// (0x0006376f) find_pinb_pane_g2_ParamLimits

0x9e46,	// (0x0006376f) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x000689e9) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x000689e9) find_pinb_pane_g

0x9e52,	// (0x0006377b) find_pinb_pane_t1_ParamLimits

0x9e64,	// (0x0006378d) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x000689ee) find_pinb_pane_t_ParamLimits

0x9baf,	// (0x000634d8) main_call3_pane

0x257e,	// (0x0005bea7) cale_month_day_heading_pane_t1_ParamLimits

0x2604,	// (0x0005bf2d) cale_month_day_heading_pane_t2_ParamLimits

0x267d,	// (0x0005bfa6) cale_month_day_heading_pane_t3_ParamLimits

0x26f6,	// (0x0005c01f) cale_month_day_heading_pane_t4_ParamLimits

0x2777,	// (0x0005c0a0) cale_month_day_heading_pane_t5_ParamLimits

0x2800,	// (0x0005c129) cale_month_day_heading_pane_t6_ParamLimits

0x2889,	// (0x0005c1b2) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x00068b69) cale_month_day_heading_pane_t_ParamLimits

0xa4b9,	// (0x00063de2) smil_status_volume_pane

0x3312,	// (0x0005cc3b) postcard_address_pane_ParamLimits

0x3312,	// (0x0005cc3b) postcard_address_pane

0x3324,	// (0x0005cc4d) postcard_message_pane_ParamLimits

0x3324,	// (0x0005cc4d) postcard_message_pane

0x385d,	// (0x0005d186) call2_cli_visual_pane_t1_ParamLimits

0x385d,	// (0x0005d186) call2_cli_visual_pane_t1

0xdfeb,	// (0x00067914) postcard_message_pane_t1_ParamLimits

0xdfeb,	// (0x00067914) postcard_message_pane_t1

0xdfd3,	// (0x000678fc) postcard_address_pane_t1_ParamLimits

0xdfd3,	// (0x000678fc) postcard_address_pane_t1

0x3fed,	// (0x0005d916) popup_call3_audio_in_window_ParamLimits

0x3fed,	// (0x0005d916) popup_call3_audio_in_window

0x3e78,	// (0x0005d7a1) bg_popup_call3_in_pane_ParamLimits

0x3e78,	// (0x0005d7a1) bg_popup_call3_in_pane

0x3eee,	// (0x0005d817) popup_call3_audio_in_window_g1_ParamLimits

0x3eee,	// (0x0005d817) popup_call3_audio_in_window_g1

0x3f0e,	// (0x0005d837) popup_call3_audio_in_window_g2_ParamLimits

0x3f0e,	// (0x0005d837) popup_call3_audio_in_window_g2

0x3f2e,	// (0x0005d857) popup_call3_audio_in_window_g3_ParamLimits

0x3f2e,	// (0x0005d857) popup_call3_audio_in_window_g3

0x0003,

0xf587,	// (0x00068eb0) popup_call3_audio_in_window_g_ParamLimits

0xf587,	// (0x00068eb0) popup_call3_audio_in_window_g

0x3f5f,	// (0x0005d888) popup_call3_audio_in_window_t1_ParamLimits

0x3f5f,	// (0x0005d888) popup_call3_audio_in_window_t1

0x3f9d,	// (0x0005d8c6) popup_call3_audio_in_window_t2_ParamLimits

0x3f9d,	// (0x0005d8c6) popup_call3_audio_in_window_t2

0x3fdb,	// (0x0005d904) popup_call3_audio_in_window_t3_ParamLimits

0x3fdb,	// (0x0005d904) popup_call3_audio_in_window_t3

0x0002,

0xf590,	// (0x00068eb9) popup_call3_audio_in_window_t_ParamLimits

0xf590,	// (0x00068eb9) popup_call3_audio_in_window_t

0xa16c,	// (0x00063a95) bg_popup_call3_rect_pane

0xbe96,	// (0x000657bf) bg_popup_call3_rect_pane_g1

0xa02b,	// (0x00063954) bg_popup_call3_rect_pane_g2

0xbe9e,	// (0x000657c7) bg_popup_call3_rect_pane_g3

0xbea6,	// (0x000657cf) bg_popup_call3_rect_pane_g4

0xbeae,	// (0x000657d7) bg_popup_call3_rect_pane_g5

0xbeb6,	// (0x000657df) bg_popup_call3_rect_pane_g6

0xbebe,	// (0x000657e7) bg_popup_call3_rect_pane_g7

0x970d,	// (0x00063036) mup_visualizer_osc_pane

0x970d,	// (0x00063036) mup_visualizer_spec_pane

0x3ea8,	// (0x0005d7d1) call3_video_qcif_pane_ParamLimits

0x3ea8,	// (0x0005d7d1) call3_video_qcif_pane

0x3ebb,	// (0x0005d7e4) call3_video_qcif_uncrop_pane_ParamLimits

0x3ebb,	// (0x0005d7e4) call3_video_qcif_uncrop_pane

0x3ec9,	// (0x0005d7f2) call3_video_subqcif_pane_ParamLimits

0x3ec9,	// (0x0005d7f2) call3_video_subqcif_pane

0x3edd,	// (0x0005d806) call3_video_subqcif_uncrop_pane_ParamLimits

0x3edd,	// (0x0005d806) call3_video_subqcif_uncrop_pane

0x3f4e,	// (0x0005d877) popup_call3_audio_in_window_g4_ParamLimits

0x3f4e,	// (0x0005d877) popup_call3_audio_in_window_g4

0x970d,	// (0x00063036) mup_spec_half_pane

0x970d,	// (0x00063036) mup_spec_half_pane_cp

0x970d,	// (0x00063036) mup_osc_middle_pane

0xa1ac,	// (0x00063ad5) mup_visualizer_osc_pane_g1

0xdf86,	// (0x000678af) mup_spec_bar_pane_ParamLimits

0xdf86,	// (0x000678af) mup_spec_bar_pane

0xa1ac,	// (0x00063ad5) mup_spec_bar_pane_g1

0xa1ac,	// (0x00063ad5) mup_spec_bar_pane_g2

0x0001,

0xf3be,	// (0x00068ce7) mup_spec_bar_pane_g

0x143c,	// (0x0005ad65) aid_cale_week_size_cell_pane_ParamLimits

0x1456,	// (0x0005ad7f) bg_cale_heading_pane_ParamLimits

0xa0ce,	// (0x000639f7) bg_cale_pane_cp01_ParamLimits

0x146e,	// (0x0005ad97) cale_week_corner_pane_ParamLimits

0x148d,	// (0x0005adb6) cale_week_day_heading_pane_ParamLimits

0x14aa,	// (0x0005add3) cale_week_scroll_pane_g1_ParamLimits

0x14bd,	// (0x0005ade6) cale_week_scroll_pane_g2_ParamLimits

0x14d5,	// (0x0005adfe) cale_week_scroll_pane_g3_ParamLimits

0x14ed,	// (0x0005ae16) cale_week_scroll_pane_g4_ParamLimits

0x1505,	// (0x0005ae2e) cale_week_scroll_pane_g5_ParamLimits

0x1525,	// (0x0005ae4e) cale_week_scroll_pane_g6_ParamLimits

0x1545,	// (0x0005ae6e) cale_week_scroll_pane_g7_ParamLimits

0x1565,	// (0x0005ae8e) cale_week_scroll_pane_g8_ParamLimits

0x1589,	// (0x0005aeb2) cale_week_scroll_pane_g9_ParamLimits

0x15a1,	// (0x0005aeca) cale_week_scroll_pane_g10_ParamLimits

0x15b9,	// (0x0005aee2) cale_week_scroll_pane_g11_ParamLimits

0x15d1,	// (0x0005aefa) cale_week_scroll_pane_g12_ParamLimits

0x15e9,	// (0x0005af12) cale_week_scroll_pane_g13_ParamLimits

0x15e9,	// (0x0005af12) cale_week_scroll_pane_g14_ParamLimits

0x15e9,	// (0x0005af12) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x00068a7a) cale_week_scroll_pane_g_ParamLimits

0x1625,	// (0x0005af4e) cale_week_time_pane_ParamLimits

0x1649,	// (0x0005af72) grid_cale_week_pane_ParamLimits

0xa0eb,	// (0x00063a14) listscroll_cale_week_pane_t1

0xa0fd,	// (0x00063a26) scroll_pane_cp08_ParamLimits

0x20f3,	// (0x0005ba1c) cale_month_corner_pane_ParamLimits

0xa483,	// (0x00063dac) cale_month_pane_t1

0x2511,	// (0x0005be3a) cale_month_week_pane_ParamLimits

0x2c26,	// (0x0005c54f) popup_call_status_window_g1_ParamLimits

0x2c3a,	// (0x0005c563) popup_call_status_window_g2_ParamLimits

0x2c4e,	// (0x0005c577) popup_call_status_window_g3_ParamLimits

0xf2cb,	// (0x00068bf4) popup_call_status_window_g_ParamLimits

0xa885,	// (0x000641ae) aid_call2_pane

0x313d,	// (0x0005ca66) msg_header_pane_g1

0x3312,	// (0x0005cc3b) postcard_address2_pane_ParamLimits

0x3312,	// (0x0005cc3b) postcard_address2_pane

0x3324,	// (0x0005cc4d) postcard_message2_pane_ParamLimits

0x3324,	// (0x0005cc4d) postcard_message2_pane

0x3e49,	// (0x0005d772) message2_row_pane_ParamLimits

0x3e49,	// (0x0005d772) message2_row_pane

0x3e65,	// (0x0005d78e) address2_row_pane_ParamLimits

0x3e65,	// (0x0005d78e) address2_row_pane

0xdf53,	// (0x0006787c) postcard_message2_row_pane_g1

0xdf5b,	// (0x00067884) postcard_message2_row_pane_t1

0xdf53,	// (0x0006787c) address2_row_pane_g1

0xdf5b,	// (0x00067884) address2_row_pane_t1

0x1979,	// (0x0005b2a2) aid_size_cell_vorec

0x9baf,	// (0x000634d8) main_rss_pane

0xdf69,	// (0x00067892) rss_list_single_pane_ParamLimits

0xdf69,	// (0x00067892) rss_list_single_pane

0xdf77,	// (0x000678a0) rss_list_single_pane_t1

0xdf77,	// (0x000678a0) rss_list_single_pane_t2

0x0001,

0xf57b,	// (0x00068ea4) rss_list_single_pane_t

0x9baf,	// (0x000634d8) main_camera2_pane

0x9baf,	// (0x000634d8) main_video2_pane

0xc078,	// (0x000659a1) cams_zoom_pane_cp2_ParamLimits

0xc078,	// (0x000659a1) cams_zoom_pane_cp2

0xc078,	// (0x000659a1) image2_vga_pane_ParamLimits

0xc078,	// (0x000659a1) image2_vga_pane

0xda33,	// (0x0006735c) main_camera2_pane_g1_ParamLimits

0xda33,	// (0x0006735c) main_camera2_pane_g1

0xda33,	// (0x0006735c) main_camera2_pane_g2_ParamLimits

0xda33,	// (0x0006735c) main_camera2_pane_g2

0xda33,	// (0x0006735c) main_camera2_pane_g3_ParamLimits

0xda33,	// (0x0006735c) main_camera2_pane_g3

0xda33,	// (0x0006735c) main_camera2_pane_g4_ParamLimits

0xda33,	// (0x0006735c) main_camera2_pane_g4

0xda33,	// (0x0006735c) main_camera2_pane_g5_ParamLimits

0xda33,	// (0x0006735c) main_camera2_pane_g5

0xda33,	// (0x0006735c) main_camera2_pane_g6_ParamLimits

0xda33,	// (0x0006735c) main_camera2_pane_g6

0xda33,	// (0x0006735c) main_camera2_pane_g7_ParamLimits

0xda33,	// (0x0006735c) main_camera2_pane_g7

0xda33,	// (0x0006735c) main_camera2_pane_g8_ParamLimits

0xda33,	// (0x0006735c) main_camera2_pane_g8

0x0008,

0xf597,	// (0x00068ec0) main_camera2_pane_g_ParamLimits

0xf597,	// (0x00068ec0) main_camera2_pane_g

0x400f,	// (0x0005d938) main_camera2_pane_t1_ParamLimits

0x400f,	// (0x0005d938) main_camera2_pane_t1

0x400f,	// (0x0005d938) main_camera2_pane_t2_ParamLimits

0x400f,	// (0x0005d938) main_camera2_pane_t2

0x400f,	// (0x0005d938) main_camera2_pane_t3_ParamLimits

0x400f,	// (0x0005d938) main_camera2_pane_t3

0x400f,	// (0x0005d938) main_camera2_pane_t4_ParamLimits

0x400f,	// (0x0005d938) main_camera2_pane_t4

0x0006,

0xf5aa,	// (0x00068ed3) main_camera2_pane_t_ParamLimits

0xf5aa,	// (0x00068ed3) main_camera2_pane_t

0xda41,	// (0x0006736a) cams_zoom_pane_cp4_ParamLimits

0xda41,	// (0x0006736a) cams_zoom_pane_cp4

0x4023,	// (0x0005d94c) image2_cif_pane_ParamLimits

0x4023,	// (0x0005d94c) image2_cif_pane

0x9784,	// (0x000630ad) image2_subqcif_pane_ParamLimits

0x9784,	// (0x000630ad) image2_subqcif_pane

0x4031,	// (0x0005d95a) main_video2_pane_g1_ParamLimits

0x4031,	// (0x0005d95a) main_video2_pane_g1

0x4031,	// (0x0005d95a) main_video2_pane_g2_ParamLimits

0x4031,	// (0x0005d95a) main_video2_pane_g2

0x4031,	// (0x0005d95a) main_video2_pane_g3_ParamLimits

0x4031,	// (0x0005d95a) main_video2_pane_g3

0x4031,	// (0x0005d95a) main_video2_pane_g4_ParamLimits

0x4031,	// (0x0005d95a) main_video2_pane_g4

0x4031,	// (0x0005d95a) main_video2_pane_g5_ParamLimits

0x4031,	// (0x0005d95a) main_video2_pane_g5

0x4031,	// (0x0005d95a) main_video2_pane_g6_ParamLimits

0x4031,	// (0x0005d95a) main_video2_pane_g6

0x0005,

0xf5b9,	// (0x00068ee2) main_video2_pane_g_ParamLimits

0xf5b9,	// (0x00068ee2) main_video2_pane_g

0x403f,	// (0x0005d968) main_video2_pane_t1_ParamLimits

0x403f,	// (0x0005d968) main_video2_pane_t1

0x403f,	// (0x0005d968) main_video2_pane_t2_ParamLimits

0x403f,	// (0x0005d968) main_video2_pane_t2

0x403f,	// (0x0005d968) main_video2_pane_t3_ParamLimits

0x403f,	// (0x0005d968) main_video2_pane_t3

0x0002,

0xf5c6,	// (0x00068eef) main_video2_pane_t_ParamLimits

0xf5c6,	// (0x00068eef) main_video2_pane_t

0x3983,	// (0x0005d2ac) call_muted_g2

0x0001,

0xf56d,	// (0x00068e96) call_muted_g

0x9baf,	// (0x000634d8) main_mup2_pane

0xad39,	// (0x00064662) main_mup2_pane_g1_ParamLimits

0xad39,	// (0x00064662) main_mup2_pane_g1

0xad39,	// (0x00064662) main_mup2_pane_g2_ParamLimits

0xad39,	// (0x00064662) main_mup2_pane_g2

0xe0d3,	// (0x000679fc) main_mup_pane_g13_cp1

0x9792,	// (0x000630bb) mup_volume_pane_cp1

0xad39,	// (0x00064662) main_mup2_pane_g4_ParamLimits

0xad39,	// (0x00064662) main_mup2_pane_g4

0xad39,	// (0x00064662) main_mup2_pane_g5_ParamLimits

0xad39,	// (0x00064662) main_mup2_pane_g5

0xad39,	// (0x00064662) main_mup2_pane_g6_ParamLimits

0xad39,	// (0x00064662) main_mup2_pane_g6

0xad39,	// (0x00064662) main_mup2_pane_g7_ParamLimits

0xad39,	// (0x00064662) main_mup2_pane_g7

0x0006,

0xf5cd,	// (0x00068ef6) main_mup2_pane_g_ParamLimits

0xf5cd,	// (0x00068ef6) main_mup2_pane_g

0xad47,	// (0x00064670) main_mup2_pane_t1_ParamLimits

0xad47,	// (0x00064670) main_mup2_pane_t1

0xad47,	// (0x00064670) main_mup2_pane_t2_ParamLimits

0xad47,	// (0x00064670) main_mup2_pane_t2

0xad47,	// (0x00064670) main_mup2_pane_t3_ParamLimits

0xad47,	// (0x00064670) main_mup2_pane_t3

0xad47,	// (0x00064670) main_mup2_pane_t4_ParamLimits

0xad47,	// (0x00064670) main_mup2_pane_t4

0xad47,	// (0x00064670) main_mup2_pane_t5_ParamLimits

0xad47,	// (0x00064670) main_mup2_pane_t5

0xad47,	// (0x00064670) main_mup2_pane_t6_ParamLimits

0xad47,	// (0x00064670) main_mup2_pane_t6

0x0005,

0xf5dc,	// (0x00068f05) main_mup2_pane_t_ParamLimits

0xf5dc,	// (0x00068f05) main_mup2_pane_t

0xad6f,	// (0x00064698) mup2_visualizer_pane_ParamLimits

0xad6f,	// (0x00064698) mup2_visualizer_pane

0xad6f,	// (0x00064698) mup_progress_pane_cp_ParamLimits

0xad6f,	// (0x00064698) mup_progress_pane_cp

0xc0d2,	// (0x000659fb) mup_volume_pane_cp_ParamLimits

0xc0d2,	// (0x000659fb) mup_volume_pane_cp

0x9e93,	// (0x000637bc) mup2_visualizer_pane_g1_ParamLimits

0x9e93,	// (0x000637bc) mup2_visualizer_pane_g1

0x9ea1,	// (0x000637ca) mup2_visualizer_pane_g2_ParamLimits

0x9ea1,	// (0x000637ca) mup2_visualizer_pane_g2

0x9ea1,	// (0x000637ca) mup2_visualizer_pane_g3_ParamLimits

0x9ea1,	// (0x000637ca) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x000689f3) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x000689f3) mup2_visualizer_pane_g

0xafc5,	// (0x000648ee) aid_size_cell_fmradio

0x3b35,	// (0x0005d45e) aid_height_parent_landcape

0xa2f4,	// (0x00063c1d) wml_content_pane_cp

0xa2fc,	// (0x00063c25) wml_tabs_pane

0xa305,	// (0x00063c2e) popup_wml_miniature_window

0xa30d,	// (0x00063c36) scroll_pane_cp021

0xa321,	// (0x00063c4a) wml_content_pane_comp8

0x9baf,	// (0x000634d8) bg_popup_sub_pane_cp05

0xe01d,	// (0x00067946) popup_wml_miniature_window_g1

0xe025,	// (0x0006794e) wml_miniature_view_pane

0x4053,	// (0x0005d97c) aid_size_wml_view

0x405b,	// (0x0005d984) wml_miniature_view_pane_g1

0x4064,	// (0x0005d98d) wml_miniature_view_pane_g2

0x406d,	// (0x0005d996) wml_miniature_view_pane_g3

0x4075,	// (0x0005d99e) wml_miniature_view_pane_g4

0x407d,	// (0x0005d9a6) wml_miniature_view_pane_g5

0x4085,	// (0x0005d9ae) wml_miniature_view_pane_g6

0x408d,	// (0x0005d9b6) wml_miniature_view_pane_g7

0x4095,	// (0x0005d9be) wml_miniature_view_pane_g8

0x0007,

0xf5e9,	// (0x00068f12) wml_miniature_view_pane_g

0xe02d,	// (0x00067956) background_graphic_ParamLimits

0xe02d,	// (0x00067956) background_graphic

0xe039,	// (0x00067962) wml_tabs_2_pane

0xe042,	// (0x0006796b) wml_tabs_3_pane_ParamLimits

0xe042,	// (0x0006796b) wml_tabs_3_pane

0xe062,	// (0x0006798b) wml_tabs_4_pane_ParamLimits

0xe062,	// (0x0006798b) wml_tabs_4_pane

0xe078,	// (0x000679a1) wml_tabs_5_pane_ParamLimits

0xe078,	// (0x000679a1) wml_tabs_5_pane

0xe092,	// (0x000679bb) wml_tabs_pane_g2_ParamLimits

0xe092,	// (0x000679bb) wml_tabs_pane_g2

0xe0a7,	// (0x000679d0) wml_tabs_pane_g3_ParamLimits

0xe0a7,	// (0x000679d0) wml_tabs_pane_g3

0xe0bc,	// (0x000679e5) wml_tabs_2_active_pane_ParamLimits

0xe0bc,	// (0x000679e5) wml_tabs_2_active_pane

0xe0bc,	// (0x000679e5) wml_tabs_2_passive_pane_ParamLimits

0xe0bc,	// (0x000679e5) wml_tabs_2_passive_pane

0x409d,	// (0x0005d9c6) wml_tabs_3_active_pane_cp_ParamLimits

0x409d,	// (0x0005d9c6) wml_tabs_3_active_pane_cp

0x40b2,	// (0x0005d9db) wml_tabs_3_passive_pane_ParamLimits

0x40b2,	// (0x0005d9db) wml_tabs_3_passive_pane

0x40c5,	// (0x0005d9ee) wml_tabs_3_passive_pane_cp_ParamLimits

0x40c5,	// (0x0005d9ee) wml_tabs_3_passive_pane_cp

0x40dc,	// (0x0005da05) tabs_4_active_pane

0x40e4,	// (0x0005da0d) tabs_4_passive_pane

0x40ee,	// (0x0005da17) tabs_4_passive_pane_cp

0x40f6,	// (0x0005da1f) tabs_4_passive_pane_cp2

0x3877,	// (0x0005d1a0) aid_height_text

0xad6f,	// (0x00064698) mup_volume_cont_pane_ParamLimits

0xad6f,	// (0x00064698) mup_volume_cont_pane

0x970d,	// (0x00063036) aid_size_cell_pinb

0x970d,	// (0x00063036) aid_size_list_pinb

0xad6f,	// (0x00064698) mup2_volume_cont_pane_ParamLimits

0xad6f,	// (0x00064698) mup2_volume_cont_pane

0xc0bc,	// (0x000659e5) mup2_volume_cont_pane_g1_ParamLimits

0xc0bc,	// (0x000659e5) mup2_volume_cont_pane_g1

0x0e23,	// (0x0005a74c) aid_size_cell_touch_ParamLimits

0x0e23,	// (0x0005a74c) aid_size_cell_touch

0x1050,	// (0x0005a979) touch_pane_ParamLimits

0x1050,	// (0x0005a979) touch_pane

0x9792,	// (0x000630bb) main_rss2_pane

0xe0dd,	// (0x00067a06) listscroll_rss2_pane

0xe0e6,	// (0x00067a0f) rss2_navigation_pane

0xe0ee,	// (0x00067a17) list_rss2_pane

0xaa2f,	// (0x00064358) scroll_pane_cp22

0xe0f6,	// (0x00067a1f) rss2_navigation_pane_g1

0xe0ff,	// (0x00067a28) rss2_navigation_pane_g2

0xe107,	// (0x00067a30) rss2_navigation_pane_g3

0x0002,

0x046a,	// (0x00059d93) rss2_navigation_pane_g

0xe10f,	// (0x00067a38) rss2_navigation_pane_t1

0x4100,	// (0x0005da29) rss2_list_single_pane_ParamLimits

0x4100,	// (0x0005da29) rss2_list_single_pane

0xe11d,	// (0x00067a46) rss2_list_single_pane_t2

0xe12b,	// (0x00067a54) rss2_list_single_pane_t3_ParamLimits

0xe12b,	// (0x00067a54) rss2_list_single_pane_t3

0xe148,	// (0x00067a71) rss2_list_single_pane_t4

0x2b13,	// (0x0005c43c) smil_status_pane_g1

0x9784,	// (0x000630ad) main_image2_pane_ParamLimits

0x9784,	// (0x000630ad) main_image2_pane

0xda33,	// (0x0006735c) main_camera2_pane_g9_ParamLimits

0xda33,	// (0x0006735c) main_camera2_pane_g9

0x400f,	// (0x0005d938) main_camera2_pane_t5_ParamLimits

0x400f,	// (0x0005d938) main_camera2_pane_t5

0xc086,	// (0x000659af) main_camera2_pane_t6_ParamLimits

0xc086,	// (0x000659af) main_camera2_pane_t6

0x4115,	// (0x0005da3e) main_image2_pane_g1_ParamLimits

0x4115,	// (0x0005da3e) main_image2_pane_g1

0x354b,	// (0x0005ce74) smil2_video_pane_ParamLimits

0x354b,	// (0x0005ce74) smil2_video_pane

0x973b,	// (0x00063064) aid_zoom_text_primary_cp

0x977a,	// (0x000630a3) popup_preview_fixed_window

0xa25d,	// (0x00063b86) im_reading_pane_g1

0x4001,	// (0x0005d92a) cams2_bc_adjust_pane_cp_ParamLimits

0x4001,	// (0x0005d92a) cams2_bc_adjust_pane_cp

0xc0ae,	// (0x000659d7) cams2_bc_adjust_pane_ParamLimits

0xc0ae,	// (0x000659d7) cams2_bc_adjust_pane

0xe0d3,	// (0x000679fc) cams2_bc_adjust_pane_g1

0x9792,	// (0x000630bb) cams2_slider_pane

0xe0d3,	// (0x000679fc) cams2_slider_pane_g1

0xe0d3,	// (0x000679fc) cams2_slider_pane_g2

0x0006,

0x0471,	// (0x00059d9a) cams2_slider_pane_g

0x1118,	// (0x0005aa41) calc_display_pane_ParamLimits

0x113d,	// (0x0005aa66) calc_paper_pane_ParamLimits

0x1160,	// (0x0005aa89) grid_calc_pane_ParamLimits

0xa8eb,	// (0x00064214) popup_clock_digital_window_t1_ParamLimits

0xaf62,	// (0x0006488b) main_image_pane_t1

0x10fa,	// (0x0005aa23) aid_size_cell_calc_ParamLimits

0x10fa,	// (0x0005aa23) aid_size_cell_calc

0x3b8d,	// (0x0005d4b6) popup_blid_sat_info2_window_ParamLimits

0x3b8d,	// (0x0005d4b6) popup_blid_sat_info2_window

0xe156,	// (0x00067a7f) aid_size_cell_blid

0xe054,	// (0x0006797d) bg_popup_window_pane_cp07

0xe173,	// (0x00067a9c) grid_popup_blid_pane

0xe17d,	// (0x00067aa6) heading_pane_cp05_ParamLimits

0xe17d,	// (0x00067aa6) heading_pane_cp05

0xe247,	// (0x00067b70) cell_popup_blid_pane_ParamLimits

0xe247,	// (0x00067b70) cell_popup_blid_pane

0xe26b,	// (0x00067b94) cell_popup_blid_pane_g1

0xe273,	// (0x00067b9c) cell_popup_blid_pane_t1

0xad6f,	// (0x00064698) mup2_indicator_pane_ParamLimits

0xad6f,	// (0x00064698) mup2_indicator_pane

0x970d,	// (0x00063036) mup2_visualizer_osc_pane

0xe007,	// (0x00067930) mup2_visualizer_spec_pane_ParamLimits

0xe007,	// (0x00067930) mup2_visualizer_spec_pane

0x970d,	// (0x00063036) mup2_spec_half_pane

0x970d,	// (0x00063036) mup2_spec_half_pane_cp

0xe281,	// (0x00067baa) mup2_spec_bar_pane_ParamLimits

0xe281,	// (0x00067baa) mup2_spec_bar_pane

0xa1ac,	// (0x00063ad5) mup2_spec_bar_pane_g1

0xe2a0,	// (0x00067bc9) mup2_spec_bar_pane_g2

0x0001,

0xf5fa,	// (0x00068f23) mup2_spec_bar_pane_g

0x970d,	// (0x00063036) mup2_osc_middle_pane

0xa1ac,	// (0x00063ad5) mup2_visualizer_osc_pane_g1

0x97bc,	// (0x000630e5) popup_number_entry_window_t1_ParamLimits

0x97cf,	// (0x000630f8) popup_number_entry_window_t2_ParamLimits

0x97e1,	// (0x0006310a) popup_number_entry_window_t3_ParamLimits

0x10a2,	// (0x0005a9cb) popup_number_entry_window_t5_ParamLimits

0x10a2,	// (0x0005a9cb) popup_number_entry_window_t5

0xf06b,	// (0x00068994) popup_number_entry_window_t_ParamLimits

0x97f3,	// (0x0006311c) text_title_cp2_ParamLimits

0xae48,	// (0x00064771) aid_hotspot_pointer_text2_pane

0xae62,	// (0x0006478b) main_viewer_pane_g9_ParamLimits

0xae62,	// (0x0006478b) main_viewer_pane_g9

0xa483,	// (0x00063dac) cale_month_pane_t1_ParamLimits

0xa4ee,	// (0x00063e17) bg_cale_pane_ParamLimits

0xa506,	// (0x00063e2f) list_cale_pane_ParamLimits

0xa517,	// (0x00063e40) listscroll_cale_day_pane_t1

0xa529,	// (0x00063e52) scroll_pane_cp09_ParamLimits

0x2ece,	// (0x0005c7f7) main_mup_eq_pane_t1_ParamLimits

0x2ece,	// (0x0005c7f7) main_mup_eq_pane_t1

0x2ee8,	// (0x0005c811) main_mup_eq_pane_t2_ParamLimits

0x2ee8,	// (0x0005c811) main_mup_eq_pane_t2

0x2f02,	// (0x0005c82b) main_mup_eq_pane_t3_ParamLimits

0x2f02,	// (0x0005c82b) main_mup_eq_pane_t3

0x2f1e,	// (0x0005c847) main_mup_eq_pane_t4_ParamLimits

0x2f1e,	// (0x0005c847) main_mup_eq_pane_t4

0x2f3a,	// (0x0005c863) main_mup_eq_pane_t5_ParamLimits

0x2f3a,	// (0x0005c863) main_mup_eq_pane_t5

0x2f56,	// (0x0005c87f) main_mup_eq_pane_t6_ParamLimits

0x2f56,	// (0x0005c87f) main_mup_eq_pane_t6

0x2f6a,	// (0x0005c893) main_mup_eq_pane_t7_ParamLimits

0x2f6a,	// (0x0005c893) main_mup_eq_pane_t7

0x2f7e,	// (0x0005c8a7) main_mup_eq_pane_t8_ParamLimits

0x2f7e,	// (0x0005c8a7) main_mup_eq_pane_t8

0x2f92,	// (0x0005c8bb) main_mup_eq_pane_t9_ParamLimits

0x2f92,	// (0x0005c8bb) main_mup_eq_pane_t9

0x2fac,	// (0x0005c8d5) main_mup_eq_pane_t10_ParamLimits

0x2fac,	// (0x0005c8d5) main_mup_eq_pane_t10

0x0009,

0xf3ca,	// (0x00068cf3) main_mup_eq_pane_t_ParamLimits

0xf3ca,	// (0x00068cf3) main_mup_eq_pane_t

0x305b,	// (0x0005c984) mup_equalizer_pane_cp5_ParamLimits

0x306f,	// (0x0005c998) mup_equalizer_pane_cp6_ParamLimits

0x3083,	// (0x0005c9ac) mup_equalizer_pane_cp7_ParamLimits

0x9792,	// (0x000630bb) main_gallery_pane

0xdfa5,	// (0x000678ce) smil2_volume_pane

0xdfad,	// (0x000678d6) smil_status_volume_pane_g1_ParamLimits

0xdfc0,	// (0x000678e9) smil_status_volume_pane_g2_ParamLimits

0xc056,	// (0x0006597f) smil_status_volume_pane_g3_ParamLimits

0xf580,	// (0x00068ea9) smil_status_volume_pane_g_ParamLimits

0xe054,	// (0x0006797d) bg_popup_window_pane_cp07_ParamLimits

0xe15e,	// (0x00067a87) blid_firmament_pane

0x9e2c,	// (0x00063755) aid_size_cell_gallery_ParamLimits

0x9e2c,	// (0x00063755) aid_size_cell_gallery

0x9e2c,	// (0x00063755) grid_gallery_pane_ParamLimits

0x9e2c,	// (0x00063755) grid_gallery_pane

0xe054,	// (0x0006797d) cell_gallery_pane_ParamLimits

0xe054,	// (0x0006797d) cell_gallery_pane

0x9e2c,	// (0x00063755) bg_cell_gallery_focus_pane_ParamLimits

0x9e2c,	// (0x00063755) bg_cell_gallery_focus_pane

0x9e93,	// (0x000637bc) cell_gallery_pane_g1_ParamLimits

0x9e93,	// (0x000637bc) cell_gallery_pane_g1

0x9e93,	// (0x000637bc) cell_gallery_pane_g2_ParamLimits

0x9e93,	// (0x000637bc) cell_gallery_pane_g2

0x9e93,	// (0x000637bc) cell_gallery_pane_g3_ParamLimits

0x9e93,	// (0x000637bc) cell_gallery_pane_g3

0x9ea1,	// (0x000637ca) cell_gallery_pane_g4_ParamLimits

0x9ea1,	// (0x000637ca) cell_gallery_pane_g4

0x0003,

0xf5ff,	// (0x00068f28) cell_gallery_pane_g_ParamLimits

0xf5ff,	// (0x00068f28) cell_gallery_pane_g

0xe2aa,	// (0x00067bd3) bg_cell_gallery_focus_pane_g1

0xe2b2,	// (0x00067bdb) bg_cell_gallery_focus_pane_g2

0xe2ba,	// (0x00067be3) bg_cell_gallery_focus_pane_g3

0xe2c2,	// (0x00067beb) bg_cell_gallery_focus_pane_g4

0xe2ca,	// (0x00067bf3) bg_cell_gallery_focus_pane_g5

0xe2d2,	// (0x00067bfb) bg_cell_gallery_focus_pane_g6

0xe2da,	// (0x00067c03) bg_cell_gallery_focus_pane_g7

0xe2e2,	// (0x00067c0b) bg_cell_gallery_focus_pane_g8

0x0007,

0x04a5,	// (0x00059dce) bg_cell_gallery_focus_pane_g

0xe2ea,	// (0x00067c13) aid_firma_cardinal

0xe2fe,	// (0x00067c27) blid_firmament_pane_t1

0xe315,	// (0x00067c3e) blid_firmament_pane_t2

0xe32c,	// (0x00067c55) blid_firmament_pane_t3

0xe343,	// (0x00067c6c) blid_firmament_pane_t4

0x0003,

0x04b6,	// (0x00059ddf) blid_firmament_pane_t

0xe35a,	// (0x00067c83) blid_sat_info_pane

0xa1ac,	// (0x00063ad5) blid_sat_info_pane_g1

0xa1ac,	// (0x00063ad5) blid_sat_info_pane_g2

0x0001,

0xf3be,	// (0x00068ce7) blid_sat_info_pane_g

0xe36a,	// (0x00067c93) blid_sat_info_pane_t1

0xe378,	// (0x00067ca1) smil2_volume_content_pane

0xe381,	// (0x00067caa) smil2_volume_pane_g1

0x9fc2,	// (0x000638eb) smil2_volume_content_pane_g1

0xe389,	// (0x00067cb2) smil2_volume_content_pane_g2

0xe392,	// (0x00067cbb) smil2_volume_content_pane_g3

0xe39b,	// (0x00067cc4) smil2_volume_content_pane_g4

0xe3a4,	// (0x00067ccd) smil2_volume_content_pane_g5

0xe3ad,	// (0x00067cd6) smil2_volume_content_pane_g6

0xe3b6,	// (0x00067cdf) smil2_volume_content_pane_g7

0xe3bf,	// (0x00067ce8) smil2_volume_content_pane_g8

0xe3c8,	// (0x00067cf1) smil2_volume_content_pane_g9

0xe3d1,	// (0x00067cfa) smil2_volume_content_pane_g10

0x0009,

0xf608,	// (0x00068f31) smil2_volume_content_pane_g

0x16fd,	// (0x0005b026) cale_week_day_heading_pane_t1_ParamLimits

0x1727,	// (0x0005b050) cale_week_day_heading_pane_t2_ParamLimits

0x1756,	// (0x0005b07f) cale_week_day_heading_pane_t3_ParamLimits

0x1785,	// (0x0005b0ae) cale_week_day_heading_pane_t4_ParamLimits

0x17b4,	// (0x0005b0dd) cale_week_day_heading_pane_t5_ParamLimits

0x17eb,	// (0x0005b114) cale_week_day_heading_pane_t6_ParamLimits

0x1822,	// (0x0005b14b) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x00068a9b) cale_week_day_heading_pane_t_ParamLimits

0xa11a,	// (0x00063a43) bg_cale_side_pane_ParamLimits

0x184c,	// (0x0005b175) cale_week_time_pane_t1_ParamLimits

0x1866,	// (0x0005b18f) cale_week_time_pane_t2_ParamLimits

0x1880,	// (0x0005b1a9) cale_week_time_pane_t3_ParamLimits

0x189a,	// (0x0005b1c3) cale_week_time_pane_t4_ParamLimits

0x18b4,	// (0x0005b1dd) cale_week_time_pane_t5_ParamLimits

0x18ce,	// (0x0005b1f7) cale_week_time_pane_t6_ParamLimits

0x18e8,	// (0x0005b211) cale_week_time_pane_t7_ParamLimits

0x1902,	// (0x0005b22b) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x00068aaa) cale_week_time_pane_t_ParamLimits

0x191c,	// (0x0005b245) cell_cale_week_pane_g2_ParamLimits

0xa11a,	// (0x00063a43) bg_cale_side_pane_cp01_ParamLimits

0x291a,	// (0x0005c243) cale_month_week_pane_t1_ParamLimits

0x2933,	// (0x0005c25c) cale_month_week_pane_t2_ParamLimits

0x294c,	// (0x0005c275) cale_month_week_pane_t3_ParamLimits

0x2965,	// (0x0005c28e) cale_month_week_pane_t4_ParamLimits

0x297e,	// (0x0005c2a7) cale_month_week_pane_t5_ParamLimits

0x2997,	// (0x0005c2c0) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x00068b78) cale_month_week_pane_t_ParamLimits

0xa495,	// (0x00063dbe) cell_cale_month_pane_g1_ParamLimits

0x9792,	// (0x000630bb) main_cale_event_viewer_pane

0x970d,	// (0x00063036) listscroll_cale_event_viewer_pane

0xe3da,	// (0x00067d03) list_cale_ev_pane

0xe3e2,	// (0x00067d0b) scroll_pane_cp023

0xe3ee,	// (0x00067d17) field_cale_ev_pane_ParamLimits

0xe3ee,	// (0x00067d17) field_cale_ev_pane

0xe40c,	// (0x00067d35) field_cale_ev_content_pane_ParamLimits

0xe40c,	// (0x00067d35) field_cale_ev_content_pane

0xe418,	// (0x00067d41) field_cale_ev_pane_g1_ParamLimits

0xe418,	// (0x00067d41) field_cale_ev_pane_g1

0xe424,	// (0x00067d4d) field_cale_ev_pane_g2_ParamLimits

0xe424,	// (0x00067d4d) field_cale_ev_pane_g2

0xe43c,	// (0x00067d65) field_cale_ev_pane_g3_ParamLimits

0xe43c,	// (0x00067d65) field_cale_ev_pane_g3

0x0002,

0x04d4,	// (0x00059dfd) field_cale_ev_pane_g_ParamLimits

0x04d4,	// (0x00059dfd) field_cale_ev_pane_g

0xe454,	// (0x00067d7d) field_cale_ev_pane_t1_ParamLimits

0xe454,	// (0x00067d7d) field_cale_ev_pane_t1

0xa045,	// (0x0006396e) field_cale_ev_content_pane_t1_ParamLimits

0xa045,	// (0x0006396e) field_cale_ev_content_pane_t1

0xae12,	// (0x0006473b) bg_button_pane_cp01

0x142a,	// (0x0005ad53) listscroll_cale_week_pane_ParamLimits

0xa0c5,	// (0x000639ee) popup_toolbar_window_cp01

0xa0eb,	// (0x00063a14) listscroll_cale_week_pane_t1_ParamLimits

0x142a,	// (0x0005ad53) listscroll_cale_day_pane_ParamLimits

0xa0c5,	// (0x000639ee) popup_toolbar_window_cp02

0xa517,	// (0x00063e40) listscroll_cale_day_pane_t1_ParamLimits

0x3b53,	// (0x0005d47c) main_cale_month_pane_ParamLimits

0xc041,	// (0x0006596a) popup_toolbar_window_cp03_ParamLimits

0xc041,	// (0x0006596a) popup_toolbar_window_cp03

0x3413,	// (0x0005cd3c) main_image_pane_g2_ParamLimits

0x3413,	// (0x0005cd3c) main_image_pane_g2

0x3424,	// (0x0005cd4d) main_image_pane_g3_ParamLimits

0x3424,	// (0x0005cd4d) main_image_pane_g3

0x0002,

0xf45c,	// (0x00068d85) main_image_pane_g_ParamLimits

0xf45c,	// (0x00068d85) main_image_pane_g

0xaf62,	// (0x0006488b) main_image_pane_t1_ParamLimits

0x3435,	// (0x0005cd5e) main_image_pane_t2_ParamLimits

0x3435,	// (0x0005cd5e) main_image_pane_t2

0x3447,	// (0x0005cd70) main_image_pane_t3_ParamLimits

0x3447,	// (0x0005cd70) main_image_pane_t3

0x346f,	// (0x0005cd98) main_image_pane_t4_ParamLimits

0x346f,	// (0x0005cd98) main_image_pane_t4

0x0003,

0xf463,	// (0x00068d8c) main_image_pane_t_ParamLimits

0xf463,	// (0x00068d8c) main_image_pane_t

0x348f,	// (0x0005cdb8) popup_image_details_window_cp01

0x3499,	// (0x0005cdc2) popup_toobar_trans_pane_cp01_ParamLimits

0x3499,	// (0x0005cdc2) popup_toobar_trans_pane_cp01

0x3c6c,	// (0x0005d595) popup_image_details_window_ParamLimits

0x3c6c,	// (0x0005d595) popup_image_details_window

0xc014,	// (0x0006593d) popup_image_focus_window

0xc078,	// (0x000659a1) camera2_autofocus_pane_ParamLimits

0xc078,	// (0x000659a1) camera2_autofocus_pane

0x970d,	// (0x00063036) bg_popup_sub_pane_cp06

0xe46b,	// (0x00067d94) popup_image_focus_window_g1

0xe473,	// (0x00067d9c) popup_image_focus_window_g2

0xe47b,	// (0x00067da4) popup_image_focus_window_g3

0xe483,	// (0x00067dac) popup_image_focus_window_g4

0x0003,

0x04db,	// (0x00059e04) popup_image_focus_window_g

0xe48b,	// (0x00067db4) popup_image_focus_window_t1

0xe499,	// (0x00067dc2) popup_image_focus_window_t2

0xe4a9,	// (0x00067dd2) popup_image_focus_window_t3

0x0002,

0x04e4,	// (0x00059e0d) popup_image_focus_window_t

0x9e93,	// (0x000637bc) camera2_autofocus_pane_g1

0x9e2c,	// (0x00063755) bg_tb_trans_pane_cp01

0xe4b7,	// (0x00067de0) popup_image_details_window_g1

0xe4ca,	// (0x00067df3) popup_image_details_window_g2

0x0002,

0x04f6,	// (0x00059e1f) popup_image_details_window_g

0xe4f3,	// (0x00067e1c) popup_image_details_window_t1

0xe505,	// (0x00067e2e) popup_image_details_window_t2

0xe51e,	// (0x00067e47) popup_image_details_window_t3

0xe532,	// (0x00067e5b) popup_image_details_window_t4

0xe54d,	// (0x00067e76) popup_image_details_window_t5

0x0004,

0x04fd,	// (0x00059e26) popup_image_details_window_t

0x9ef9,	// (0x00063822) bg_calc_paper_pane_ParamLimits

0x9792,	// (0x000630bb) grid_highlight_pane_cp013

0x9f0d,	// (0x00063836) list_calc_pane_ParamLimits

0x9f1f,	// (0x00063848) scroll_pane_cp024

0x9f27,	// (0x00063850) bg_calc_display_pane_ParamLimits

0x1278,	// (0x0005aba1) calc_display_pane_t1_ParamLimits

0x128d,	// (0x0005abb6) calc_display_pane_t2_ParamLimits

0x9f33,	// (0x0006385c) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x00068a1b) calc_display_pane_t_ParamLimits

0x134d,	// (0x0005ac76) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x00068a38) cell_calc_pane_g

0x1356,	// (0x0005ac7f) cell_calc_pane_t1

0x9fa0,	// (0x000638c9) grid_highlight_pane_cp02_ParamLimits

0x9fb6,	// (0x000638df) toolbar_button_pane_cp01_ParamLimits

0x9fb6,	// (0x000638df) toolbar_button_pane_cp01

0xafa7,	// (0x000648d0) temp_image_control_pane_ParamLimits

0xafa7,	// (0x000648d0) temp_image_control_pane

0x9784,	// (0x000630ad) main_mp3_pane

0xe567,	// (0x00067e90) temp_image_control_pane_g1_ParamLimits

0xe567,	// (0x00067e90) temp_image_control_pane_g1

0xe575,	// (0x00067e9e) temp_image_control_pane_g2_ParamLimits

0xe575,	// (0x00067e9e) temp_image_control_pane_g2

0xe587,	// (0x00067eb0) temp_image_control_pane_g3_ParamLimits

0xe587,	// (0x00067eb0) temp_image_control_pane_g3

0x412b,	// (0x0005da54) temp_image_control_pane_g4_ParamLimits

0x412b,	// (0x0005da54) temp_image_control_pane_g4

0x0003,

0xf628,	// (0x00068f51) temp_image_control_pane_g_ParamLimits

0xf628,	// (0x00068f51) temp_image_control_pane_g

0xe567,	// (0x00067e90) main_mp3_pane_g1

0x413e,	// (0x0005da67) main_mp3_pane_g2

0x0007,

0xf631,	// (0x00068f5a) main_mp3_pane_g

0xe5bc,	// (0x00067ee5) main_mp3_pane_t1

0x9ea1,	// (0x000637ca) main_camera_pane_g8_ParamLimits

0x9ea1,	// (0x000637ca) main_camera_pane_g8

0x1ae6,	// (0x0005b40f) main_video_pane_g7_ParamLimits

0x1ae6,	// (0x0005b40f) main_video_pane_g7

0xc09a,	// (0x000659c3) main_camera2_pane_t7_ParamLimits

0xc09a,	// (0x000659c3) main_camera2_pane_t7

0xa2b4,	// (0x00063bdd) scroll_pane_cp025_ParamLimits

0xa2b4,	// (0x00063bdd) scroll_pane_cp025

0xa2c8,	// (0x00063bf1) scroll_pane_cp026_ParamLimits

0xa2c8,	// (0x00063bf1) scroll_pane_cp026

0xa2d7,	// (0x00063c00) wml_content_pane_ParamLimits

0x9792,	// (0x000630bb) main_touch_calib_pane

0x4212,	// (0x0005db3b) main_touch_calib_pane_g1

0x4224,	// (0x0005db4d) main_touch_calib_pane_g2

0x4236,	// (0x0005db5f) main_touch_calib_pane_g3

0x4248,	// (0x0005db71) main_touch_calib_pane_g4

0x0003,

0xf64f,	// (0x00068f78) main_touch_calib_pane_g

0x425a,	// (0x0005db83) main_touch_calib_pane_t1

0x4274,	// (0x0005db9d) main_touch_calib_pane_t2

0x0004,

0xf658,	// (0x00068f81) main_touch_calib_pane_t

0xab0b,	// (0x00064434) mup_progress_pane_cp02

0xab40,	// (0x00064469) navi_pane_g1

0xabfb,	// (0x00064524) navi_pane_mp_t3

0x9784,	// (0x000630ad) main_mp3_pane_ParamLimits

0x3df1,	// (0x0005d71a) navi_pane_ParamLimits

0xe567,	// (0x00067e90) main_mp3_pane_g1_ParamLimits

0x413e,	// (0x0005da67) main_mp3_pane_g2_ParamLimits

0x414c,	// (0x0005da75) main_mp3_pane_g3_ParamLimits

0x414c,	// (0x0005da75) main_mp3_pane_g3

0x415a,	// (0x0005da83) main_mp3_pane_g4_ParamLimits

0x415a,	// (0x0005da83) main_mp3_pane_g4

0x9e93,	// (0x000637bc) main_mp3_pane_g5_ParamLimits

0x9e93,	// (0x000637bc) main_mp3_pane_g5

0xe597,	// (0x00067ec0) main_mp3_pane_g6_ParamLimits

0xe597,	// (0x00067ec0) main_mp3_pane_g6

0xe5a4,	// (0x00067ecd) main_mp3_pane_g7_ParamLimits

0xe5a4,	// (0x00067ecd) main_mp3_pane_g7

0xe5b0,	// (0x00067ed9) main_mp3_pane_g8_ParamLimits

0xe5b0,	// (0x00067ed9) main_mp3_pane_g8

0xf631,	// (0x00068f5a) main_mp3_pane_g_ParamLimits

0x4166,	// (0x0005da8f) main_mp3_pane_t2

0x4174,	// (0x0005da9d) main_mp3_pane_t3

0xe5ca,	// (0x00067ef3) main_mp3_pane_t4

0xe5d8,	// (0x00067f01) main_mp3_pane_t5

0x0005,

0xf642,	// (0x00068f6b) main_mp3_pane_t

0xe5e6,	// (0x00067f0f) mup_progress_pane_cp01

0x973b,	// (0x00063064) aid_zoom_text_secondary2

0xe3da,	// (0x00067d03) list_cale_ev2_pane

0xe3e2,	// (0x00067d0b) scroll_pane_cp023_ParamLimits

0x42ca,	// (0x0005dbf3) field_cale_ev2_pane_ParamLimits

0x42ca,	// (0x0005dbf3) field_cale_ev2_pane

0x42ea,	// (0x0005dc13) field_cale_ev2_pane_g1_ParamLimits

0x42ea,	// (0x0005dc13) field_cale_ev2_pane_g1

0x42f6,	// (0x0005dc1f) field_cale_ev2_pane_g2_ParamLimits

0x42f6,	// (0x0005dc1f) field_cale_ev2_pane_g2

0x430e,	// (0x0005dc37) field_cale_ev2_pane_g3_ParamLimits

0x430e,	// (0x0005dc37) field_cale_ev2_pane_g3

0x0003,

0xf663,	// (0x00068f8c) field_cale_ev2_pane_g_ParamLimits

0xf663,	// (0x00068f8c) field_cale_ev2_pane_g

0x4332,	// (0x0005dc5b) field_cale_ev2_pane_t1_ParamLimits

0x4332,	// (0x0005dc5b) field_cale_ev2_pane_t1

0x4349,	// (0x0005dc72) field_cale_ev2_pane_t2_ParamLimits

0x4349,	// (0x0005dc72) field_cale_ev2_pane_t2

0x0001,

0xf66c,	// (0x00068f95) field_cale_ev2_pane_t_ParamLimits

0xf66c,	// (0x00068f95) field_cale_ev2_pane_t

0x32c8,	// (0x0005cbf1) main_postcard_pane_g5_ParamLimits

0x32c8,	// (0x0005cbf1) main_postcard_pane_g5

0x32de,	// (0x0005cc07) main_postcard_pane_g6_ParamLimits

0x32de,	// (0x0005cc07) main_postcard_pane_g6

0x9e2c,	// (0x00063755) camera2_autofocus_pane_cp_ParamLimits

0x9e2c,	// (0x00063755) camera2_autofocus_pane_cp

0x9784,	// (0x000630ad) main_mup3_pane

0x43a2,	// (0x0005dccb) main_mup3_pane_g1_ParamLimits

0x43a2,	// (0x0005dccb) main_mup3_pane_g1

0x43c4,	// (0x0005dced) main_mup3_pane_g2_ParamLimits

0x43c4,	// (0x0005dced) main_mup3_pane_g2

0x4442,	// (0x0005dd6b) main_mup3_pane_g3_ParamLimits

0x4442,	// (0x0005dd6b) main_mup3_pane_g3

0x4488,	// (0x0005ddb1) main_mup3_pane_g4_ParamLimits

0x4488,	// (0x0005ddb1) main_mup3_pane_g4

0x44ce,	// (0x0005ddf7) main_mup3_pane_g5_ParamLimits

0x44ce,	// (0x0005ddf7) main_mup3_pane_g5

0x4514,	// (0x0005de3d) main_mup3_pane_g6_ParamLimits

0x4514,	// (0x0005de3d) main_mup3_pane_g6

0x9ea1,	// (0x000637ca) main_mup3_pane_g7_ParamLimits

0x9ea1,	// (0x000637ca) main_mup3_pane_g7

0x0007,

0xf67c,	// (0x00068fa5) main_mup3_pane_g_ParamLimits

0xf67c,	// (0x00068fa5) main_mup3_pane_g

0x4592,	// (0x0005debb) main_mup3_pane_t1_ParamLimits

0x4592,	// (0x0005debb) main_mup3_pane_t1

0x4606,	// (0x0005df2f) main_mup3_pane_t2_ParamLimits

0x4606,	// (0x0005df2f) main_mup3_pane_t2

0x46da,	// (0x0005e003) main_mup3_pane_t4_ParamLimits

0x46da,	// (0x0005e003) main_mup3_pane_t4

0x4730,	// (0x0005e059) main_mup3_pane_t5_ParamLimits

0x4730,	// (0x0005e059) main_mup3_pane_t5

0x47ec,	// (0x0005e115) main_mup3_pane_t6_ParamLimits

0x47ec,	// (0x0005e115) main_mup3_pane_t6

0x0005,

0xf68d,	// (0x00068fb6) main_mup3_pane_t_ParamLimits

0xf68d,	// (0x00068fb6) main_mup3_pane_t

0x48a4,	// (0x0005e1cd) mup3_progress_pane_ParamLimits

0x48a4,	// (0x0005e1cd) mup3_progress_pane

0x493a,	// (0x0005e263) popup_mup3_control_window_ParamLimits

0x493a,	// (0x0005e263) popup_mup3_control_window

0xe5ee,	// (0x00067f17) popup_mup3_text_window

0x496c,	// (0x0005e295) mup3_progress_pane_t1

0x498b,	// (0x0005e2b4) mup3_progress_pane_t2

0xe5f6,	// (0x00067f1f) mup3_progress_pane_t3

0x0002,

0xf69a,	// (0x00068fc3) mup3_progress_pane_t

0xe613,	// (0x00067f3c) mup_progress_pane_cp03

0x970d,	// (0x00063036) bg_tb_trans_pane_cp04

0x49aa,	// (0x0005e2d3) mup3_volume_pane

0x49b2,	// (0x0005e2db) popup_mup3_control_window_g1

0x49bb,	// (0x0005e2e4) mup3_volume_pane_g1

0x49c4,	// (0x0005e2ed) mup3_volume_pane_g2

0x49cd,	// (0x0005e2f6) mup3_volume_pane_g3

0x0002,

0xf6a1,	// (0x00068fca) mup3_volume_pane_g

0x970d,	// (0x00063036) bg_tb_trans_pane_cp03

0xe623,	// (0x00067f4c) popup_mup3_text_window_g1

0xe62b,	// (0x00067f54) popup_mup3_text_window_t1

0x9f81,	// (0x000638aa) list_calc_item_pane_g1_ParamLimits

0xe0ca,	// (0x000679f3) mup_volume_pane_cp_g1

0x428e,	// (0x0005dbb7) main_touch_calib_pane_t3

0x42a2,	// (0x0005dbcb) main_touch_calib_pane_t4

0x42b6,	// (0x0005dbdf) main_touch_calib_pane_t5

0x9717,	// (0x00063040) aid_cell_size_toolbar2

0x971f,	// (0x00063048) aid_popup3_width_pane

0x972b,	// (0x00063054) aid_zoom_text_msg_primary

0x19c1,	// (0x0005b2ea) vorec_t7

0x9f45,	// (0x0006386e) bg_calc_paper_pane_g1_ParamLimits

0x9f51,	// (0x0006387a) bg_calc_paper_pane_g2_ParamLimits

0x9f5d,	// (0x00063886) bg_calc_paper_pane_g3_ParamLimits

0x9f69,	// (0x00063892) bg_calc_paper_pane_g4_ParamLimits

0x9f75,	// (0x0006389e) bg_calc_paper_pane_g5_ParamLimits

0x12d7,	// (0x0005ac00) bg_calc_paper_pane_g6_ParamLimits

0x12e6,	// (0x0005ac0f) bg_calc_paper_pane_g7_ParamLimits

0x12f5,	// (0x0005ac1e) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x00068a22) bg_calc_paper_pane_g_ParamLimits

0x1308,	// (0x0005ac31) calc_bg_paper_pane_g9_ParamLimits

0x9e2c,	// (0x00063755) image_qvga_pane_ParamLimits

0x9e2c,	// (0x00063755) image_qvga_pane

0x9e0a,	// (0x00063733) bg_popup_sub_pane_cp04_ParamLimits

0xaede,	// (0x00064807) popup_mup_playback_window_g1_ParamLimits

0xaeea,	// (0x00064813) popup_mup_playback_window_t1_ParamLimits

0xaeff,	// (0x00064828) popup_mup_playback_window_t2_ParamLimits

0xf457,	// (0x00068d80) popup_mup_playback_window_t_ParamLimits

0x9ea1,	// (0x000637ca) main_mup2_pane_g3_ParamLimits

0x9ea1,	// (0x000637ca) main_mup2_pane_g3

0x1cee,	// (0x0005b617) popup_toolbar_window_cp04

0xb2e1,	// (0x00064c0a) popup_call2_audio_second_window_g3_ParamLimits

0xb2e1,	// (0x00064c0a) popup_call2_audio_second_window_g3

0xb6f9,	// (0x00065022) popup_call2_audio_first_window_g4_ParamLimits

0xb6f9,	// (0x00065022) popup_call2_audio_first_window_g4

0xbd20,	// (0x00065649) popup_call2_audio_in_window_g4_ParamLimits

0xbd20,	// (0x00065649) popup_call2_audio_in_window_g4

0x33f5,	// (0x0005cd1e) aid_area_sk_bg_cut_ParamLimits

0x33f5,	// (0x0005cd1e) aid_area_sk_bg_cut

0xaf14,	// (0x0006483d) aid_area_sk_bg_cut_2_ParamLimits

0xaf14,	// (0x0006483d) aid_area_sk_bg_cut_2

0x970d,	// (0x00063036) aid_placing_details_win

0x970d,	// (0x00063036) aid_placing_details_win_2

0x9e93,	// (0x000637bc) camera2_autofocus_pane_g1_ParamLimits

0x0fe9,	// (0x0005a912) popup_fixed_preview_cale_window_ParamLimits

0x0fe9,	// (0x0005a912) popup_fixed_preview_cale_window

0xac82,	// (0x000645ab) navi_slider_pane_g3

0xac8b,	// (0x000645b4) navi_slider_pane_g4

0xac94,	// (0x000645bd) navi_slider_pane_g5

0xac82,	// (0x000645ab) navi_slider_pane_g6

0xac9d,	// (0x000645c6) navi_slider_pane_g7

0xaddf,	// (0x00064708) mup_scale_pane_g3

0xade8,	// (0x00064711) mup_scale_pane_g4

0xadf1,	// (0x0006471a) mup_scale_pane_g5

0x3097,	// (0x0005c9c0) mup_scale_pane_g6

0x30a0,	// (0x0005c9c9) mup_scale_pane_g7

0xe0d3,	// (0x000679fc) cams2_slider_pane_g3

0xe0d3,	// (0x000679fc) cams2_slider_pane_g4

0xe0d3,	// (0x000679fc) cams2_slider_pane_g5

0xe0d3,	// (0x000679fc) cams2_slider_pane_g6

0xe0d3,	// (0x000679fc) cams2_slider_pane_g7

0xa1ac,	// (0x00063ad5) camera2_autofocus_pane_cp_g1

0xbff6,	// (0x0006591f) bg_popup_preview_window_pane_cp02_ParamLimits

0xbff6,	// (0x0006591f) bg_popup_preview_window_pane_cp02

0xe639,	// (0x00067f62) list_fp_cale_pane_ParamLimits

0xe639,	// (0x00067f62) list_fp_cale_pane

0xe645,	// (0x00067f6e) popup_fixed_preview_cale_window_t1_ParamLimits

0xe645,	// (0x00067f6e) popup_fixed_preview_cale_window_t1

0x49d6,	// (0x0005e2ff) popup_fixed_preview_cale_window_t2_ParamLimits

0x49d6,	// (0x0005e2ff) popup_fixed_preview_cale_window_t2

0x49eb,	// (0x0005e314) popup_fixed_preview_cale_window_t3_ParamLimits

0x49eb,	// (0x0005e314) popup_fixed_preview_cale_window_t3

0x0002,

0xf6a8,	// (0x00068fd1) popup_fixed_preview_cale_window_t_ParamLimits

0xf6a8,	// (0x00068fd1) popup_fixed_preview_cale_window_t

0x4a00,	// (0x0005e329) list_single_fp_cale_pane_ParamLimits

0x4a00,	// (0x0005e329) list_single_fp_cale_pane

0xe663,	// (0x00067f8c) list_single_fp_cale_pane_g1_ParamLimits

0xe663,	// (0x00067f8c) list_single_fp_cale_pane_g1

0xe66f,	// (0x00067f98) list_single_fp_cale_pane_g2_ParamLimits

0xe66f,	// (0x00067f98) list_single_fp_cale_pane_g2

0x0002,

0x058f,	// (0x00059eb8) list_single_fp_cale_pane_g_ParamLimits

0x058f,	// (0x00059eb8) list_single_fp_cale_pane_g

0xe688,	// (0x00067fb1) list_single_fp_cale_pane_t1_ParamLimits

0xe688,	// (0x00067fb1) list_single_fp_cale_pane_t1

0xe69a,	// (0x00067fc3) list_single_fp_cale_pane_t2_ParamLimits

0xe69a,	// (0x00067fc3) list_single_fp_cale_pane_t2

0x0001,

0x0596,	// (0x00059ebf) list_single_fp_cale_pane_t_ParamLimits

0x0596,	// (0x00059ebf) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9792,	// (0x000630bb) main_dialer_pane

0x970d,	// (0x00063036) aid_cell_size_keypad

0x970d,	// (0x00063036) dialer_ne_pane

0x970d,	// (0x00063036) grid_dialer_command_1_pane

0x970d,	// (0x00063036) grid_dialer_command_2_pane

0x970d,	// (0x00063036) grid_dialer_keypad_pane

0x4a15,	// (0x0005e33e) bg_popup_call_pane_cp06_ParamLimits

0x4a15,	// (0x0005e33e) bg_popup_call_pane_cp06

0x4a15,	// (0x0005e33e) dialer_ne_clear_pane_ParamLimits

0x4a15,	// (0x0005e33e) dialer_ne_clear_pane

0xa1ac,	// (0x00063ad5) dialer_ne_pane_g1

0xad5b,	// (0x00064684) dialer_ne_pane_t1_ParamLimits

0xad5b,	// (0x00064684) dialer_ne_pane_t1

0x4a23,	// (0x0005e34c) dialer_ne_pane_t2_ParamLimits

0x4a23,	// (0x0005e34c) dialer_ne_pane_t2

0x4a4b,	// (0x0005e374) dialer_ne_pane_t3_ParamLimits

0x4a4b,	// (0x0005e374) dialer_ne_pane_t3

0x0002,

0xf6af,	// (0x00068fd8) dialer_ne_pane_t_ParamLimits

0xf6af,	// (0x00068fd8) dialer_ne_pane_t

0x4a4b,	// (0x0005e374) dialer_ne_pane_t3_copy1_ParamLimits

0x4a4b,	// (0x0005e374) dialer_ne_pane_t3_copy1

0xe6cd,	// (0x00067ff6) cell_dialer_keypad_pane_ParamLimits

0xe6cd,	// (0x00067ff6) cell_dialer_keypad_pane

0x9e2c,	// (0x00063755) cell_dialer_command_1_pane_ParamLimits

0x9e2c,	// (0x00063755) cell_dialer_command_1_pane

0xe6e4,	// (0x0006800d) cell_dialer_command_2_pane_ParamLimits

0xe6e4,	// (0x0006800d) cell_dialer_command_2_pane

0x9e2c,	// (0x00063755) bg_button_pane_cp02_ParamLimits

0x9e2c,	// (0x00063755) bg_button_pane_cp02

0x9e93,	// (0x000637bc) cell_dialer_keypad_pane_g1_ParamLimits

0x9e93,	// (0x000637bc) cell_dialer_keypad_pane_g1

0x9e2c,	// (0x00063755) bg_button_pane_cp03_ParamLimits

0x9e2c,	// (0x00063755) bg_button_pane_cp03

0x9e93,	// (0x000637bc) cell_dialer_command_1_pane_g1_ParamLimits

0x9e93,	// (0x000637bc) cell_dialer_command_1_pane_g1

0x970d,	// (0x00063036) bg_button_pane_cp04

0xa1ac,	// (0x00063ad5) cell_dialer_command_2_pane_g1

0x970d,	// (0x00063036) bg_button_pane_cp06

0xa1ac,	// (0x00063ad5) dialer_ne_clear_pane_g1

0xab4c,	// (0x00064475) navi_pane_g2

0xab7a,	// (0x000644a3) navi_pane_g3

0x0002,

0xf35a,	// (0x00068c83) navi_pane_g

0xac09,	// (0x00064532) navi_pane_mv_g2

0xac30,	// (0x00064559) navi_pane_mv_g5

0x2e7c,	// (0x0005c7a5) navi_pane_mv_t1

0x9f27,	// (0x00063850) main_clock2_pane

0x9e2c,	// (0x00063755) main_clock2_list_pane_ParamLimits

0x9e2c,	// (0x00063755) main_clock2_list_pane

0x4ae1,	// (0x0005e40a) main_clock2_pane_t1_ParamLimits

0x4ae1,	// (0x0005e40a) main_clock2_pane_t1

0x4b1c,	// (0x0005e445) main_clock2_pane_t2_ParamLimits

0x4b1c,	// (0x0005e445) main_clock2_pane_t2

0x0004,

0xf6bb,	// (0x00068fe4) main_clock2_pane_t_ParamLimits

0xf6bb,	// (0x00068fe4) main_clock2_pane_t

0x4bbc,	// (0x0005e4e5) popup_clock_analogue_window_cp03_ParamLimits

0x4bbc,	// (0x0005e4e5) popup_clock_analogue_window_cp03

0x4be1,	// (0x0005e50a) popup_clock_digital_window_cp02_ParamLimits

0x4be1,	// (0x0005e50a) popup_clock_digital_window_cp02

0x4c5a,	// (0x0005e583) main_clock2_list_single_pane_ParamLimits

0x4c5a,	// (0x0005e583) main_clock2_list_single_pane

0xa16c,	// (0x00063a95) list_highlight_pane_cp05

0xe72b,	// (0x00068054) main_clock2_list_single_pane_t1

0x1cee,	// (0x0005b617) popup_toolbar_window_cp04_ParamLimits

0x9ea1,	// (0x000637ca) camera2_autofocus_pane_g2_ParamLimits

0x9ea1,	// (0x000637ca) camera2_autofocus_pane_g2

0x9ea1,	// (0x000637ca) camera2_autofocus_pane_g3_ParamLimits

0x9ea1,	// (0x000637ca) camera2_autofocus_pane_g3

0x9ea1,	// (0x000637ca) camera2_autofocus_pane_g4_ParamLimits

0x9ea1,	// (0x000637ca) camera2_autofocus_pane_g4

0x9ea1,	// (0x000637ca) camera2_autofocus_pane_g5_ParamLimits

0x9ea1,	// (0x000637ca) camera2_autofocus_pane_g5

0x0004,

0xf61d,	// (0x00068f46) camera2_autofocus_pane_g_ParamLimits

0xf61d,	// (0x00068f46) camera2_autofocus_pane_g

0x435e,	// (0x0005dc87) camera2_autofocus_pane_cp_g2

0x4366,	// (0x0005dc8f) camera2_autofocus_pane_cp_g3

0x436e,	// (0x0005dc97) camera2_autofocus_pane_cp_g4

0x4376,	// (0x0005dc9f) camera2_autofocus_pane_cp_g5

0x0004,

0xf671,	// (0x00068f9a) camera2_autofocus_pane_cp_g

0x970d,	// (0x00063036) popup_dialer_spcha_window

0x970d,	// (0x00063036) bg_popup_sub_pane_cp07

0x970d,	// (0x00063036) list_spcha_pane

0xe739,	// (0x00068062) list_single_spcha_pane_ParamLimits

0xe739,	// (0x00068062) list_single_spcha_pane

0x970d,	// (0x00063036) list_highlight_pane_cp06

0xa70e,	// (0x00064037) list_single_spcha_pane_t1

0xbaca,	// (0x000653f3) popup_call2_audio_out_window_g4_ParamLimits

0xbaca,	// (0x000653f3) popup_call2_audio_out_window_g4

0x9792,	// (0x000630bb) main_imed2_pane

0xc01c,	// (0x00065945) popup_imed_adjust2_window

0x3c84,	// (0x0005d5ad) popup_imed_trans_window_ParamLimits

0x3c84,	// (0x0005d5ad) popup_imed_trans_window

0xe1a9,	// (0x00067ad2) popup_blid_sat_info2_window_t1

0xe1b7,	// (0x00067ae0) popup_blid_sat_info2_window_t2

0x000a,

0x0480,	// (0x00059da9) popup_blid_sat_info2_window_t

0x4d0b,	// (0x0005e634) aid_size_cell_colour_35

0x4d2b,	// (0x0005e654) aid_size_cell_colour_112

0x4d4b,	// (0x0005e674) aid_size_cell_effect

0xad6f,	// (0x00064698) bg_tb_trans_pane_cp02

0xa628,	// (0x00063f51) heading_imed_pane

0x4d6b,	// (0x0005e694) listscroll_imed_pane

0xe74b,	// (0x00068074) heading_imed_pane_g1

0xe753,	// (0x0006807c) heading_imed_pane_t1

0xe761,	// (0x0006808a) grid_imed_colour_35_pane_ParamLimits

0xe761,	// (0x0006808a) grid_imed_colour_35_pane

0x4d77,	// (0x0005e6a0) grid_imed_effect_pane

0xe778,	// (0x000680a1) list_imed_aspect_pane

0x4d8d,	// (0x0005e6b6) scroll_pane_cp027_ParamLimits

0x4d8d,	// (0x0005e6b6) scroll_pane_cp027

0x4d9e,	// (0x0005e6c7) cell_imed_effect_pane_ParamLimits

0x4d9e,	// (0x0005e6c7) cell_imed_effect_pane

0xe780,	// (0x000680a9) cell_imed_colour_pane_ParamLimits

0xe780,	// (0x000680a9) cell_imed_colour_pane

0xe7df,	// (0x00068108) cell_imed_colour_pane_g1_ParamLimits

0xe7df,	// (0x00068108) cell_imed_colour_pane_g1

0xe7f0,	// (0x00068119) hgihlgiht_grid_pane_cp016_ParamLimits

0xe7f0,	// (0x00068119) hgihlgiht_grid_pane_cp016

0x4dc5,	// (0x0005e6ee) cell_imed_effect_pane_g1

0x4dcd,	// (0x0005e6f6) grid_highlight_pane_cp017

0xe801,	// (0x0006812a) list_imed_single_pane_ParamLimits

0xe801,	// (0x0006812a) list_imed_single_pane

0x970d,	// (0x00063036) list_highlight_pane_cp07

0xe816,	// (0x0006813f) list_imed_aspect_pane_comp1_t1

0xad6f,	// (0x00064698) bg_tb_trans_pane_cp05

0xe838,	// (0x00068161) popup_imed_adjust2_window_g1

0xe85f,	// (0x00068188) popup_imed_adjust2_window_t1

0xe877,	// (0x000681a0) slider_imed_adjust_pane

0xe88b,	// (0x000681b4) slider_imed_adjust_pane_g1

0xe89b,	// (0x000681c4) slider_imed_adjust_pane_g2

0xe8ab,	// (0x000681d4) slider_imed_adjust_pane_g3

0xe8bc,	// (0x000681e5) slider_imed_adjust_pane_g4

0x0003,

0x05c4,	// (0x00059eed) slider_imed_adjust_pane_g

0x4dd6,	// (0x0005e6ff) aid_size_cell_clipart2

0x4de2,	// (0x0005e70b) grid_imed_clipart_pane

0xe8cd,	// (0x000681f6) scroll_pane_cp031

0x4dec,	// (0x0005e715) cell_imed_clipart_pane_ParamLimits

0x4dec,	// (0x0005e715) cell_imed_clipart_pane

0x4e0e,	// (0x0005e737) cell_imed_clipart_pane_g1

0x970d,	// (0x00063036) grid_highlight_pane_cp014

0x4abd,	// (0x0005e3e6) main_clock2_pane_g1_ParamLimits

0x4abd,	// (0x0005e3e6) main_clock2_pane_g1

0x4c01,	// (0x0005e52a) aid_call2_pane_cp10

0x4c13,	// (0x0005e53c) aid_call_pane_cp10

0xaaad,	// (0x000643d6) popup_clock_analogue_window_cp10_g1

0xaaad,	// (0x000643d6) popup_clock_analogue_window_cp10_g2

0x4c25,	// (0x0005e54e) popup_clock_analogue_window_cp10_g3

0x4c25,	// (0x0005e54e) popup_clock_analogue_window_cp10_g4

0xaaad,	// (0x000643d6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6c6,	// (0x00068fef) popup_clock_analogue_window_cp10_g

0x4c3b,	// (0x0005e564) popup_clock_analogue_window_cp10_t1

0x4c6c,	// (0x0005e595) clock_digital_number_pane_cp10_ParamLimits

0x4c6c,	// (0x0005e595) clock_digital_number_pane_cp10

0x4c84,	// (0x0005e5ad) clock_digital_number_pane_cp11_ParamLimits

0x4c84,	// (0x0005e5ad) clock_digital_number_pane_cp11

0x4c9c,	// (0x0005e5c5) clock_digital_number_pane_cp12_ParamLimits

0x4c9c,	// (0x0005e5c5) clock_digital_number_pane_cp12

0x4cb6,	// (0x0005e5df) clock_digital_number_pane_cp13_ParamLimits

0x4cb6,	// (0x0005e5df) clock_digital_number_pane_cp13

0x4cd0,	// (0x0005e5f9) clock_digital_separator_pane_cp10_ParamLimits

0x4cd0,	// (0x0005e5f9) clock_digital_separator_pane_cp10

0x4cea,	// (0x0005e613) popup_clock_digital_window_cp02_t1_ParamLimits

0x4cea,	// (0x0005e613) popup_clock_digital_window_cp02_t1

0x9e02,	// (0x0006372b) clock_digital_number_pane_cp10_g1

0x9e02,	// (0x0006372b) clock_digital_number_pane_cp10_g2

0x0001,

0xf6d1,	// (0x00068ffa) clock_digital_number_pane_cp10_g

0x9e02,	// (0x0006372b) clock_digital_separator_pane_cp10_g1

0x9e02,	// (0x0006372b) clock_digital_separator_pane_g2_cp10

0xac38,	// (0x00064561) navi_pane_vded_g4

0xac41,	// (0x0006456a) navi_pane_vded_g5

0xac4a,	// (0x00064573) navi_pane_vded_t1

0x9792,	// (0x000630bb) main_vded_pane

0x4e17,	// (0x0005e740) main_vded_pane_g1

0x4e21,	// (0x0005e74a) main_vded_pane_g2

0x4e2b,	// (0x0005e754) main_vded_pane_g3

0x0002,

0xf6d6,	// (0x00068fff) main_vded_pane_g

0x4e35,	// (0x0005e75e) main_vded_pane_t1

0x4e43,	// (0x0005e76c) main_vded_pane_t2

0x0001,

0xf6dd,	// (0x00069006) main_vded_pane_t

0x4e51,	// (0x0005e77a) vded_slider_pane

0x4e59,	// (0x0005e782) vded_video_pane

0xe8d5,	// (0x000681fe) vded_video_pane_g1

0x4e61,	// (0x0005e78a) vded_video_pane_g2

0xa1ac,	// (0x00063ad5) vded_video_pane_g3

0x0002,

0xf6e2,	// (0x0006900b) vded_video_pane_g

0xe8df,	// (0x00068208) vded_slider_pane_g1

0xe0ca,	// (0x000679f3) vded_slider_pane_g2

0xe8e8,	// (0x00068211) vded_slider_pane_g3

0xe8f1,	// (0x0006821a) vded_slider_pane_g4

0xe8fa,	// (0x00068223) vded_slider_pane_g5

0x0004,

0x05e5,	// (0x00059f0e) vded_slider_pane_g

0x4922,	// (0x0005e24b) mup3_rocker_pane_ParamLimits

0x4922,	// (0x0005e24b) mup3_rocker_pane

0x4e6a,	// (0x0005e793) mup3_control_keys_pane_g1

0x4e72,	// (0x0005e79b) mup3_control_keys_pane_g2

0x4e7a,	// (0x0005e7a3) mup3_control_keys_pane_g3

0x4e82,	// (0x0005e7ab) mup3_control_keys_pane_g4

0x0003,

0xf6e9,	// (0x00069012) mup3_control_keys_pane_g

0x1020,	// (0x0005a949) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1020,	// (0x0005a949) popup_toolbar2_fixed_window_cp01

0x4956,	// (0x0005e27f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4956,	// (0x0005e27f) popup_toolbar2_fixed_window_cp02

0xb453,	// (0x00064d7c) popup_call2_audio_second_window_t4_ParamLimits

0xb453,	// (0x00064d7c) popup_call2_audio_second_window_t4

0xb98f,	// (0x000652b8) popup_call2_audio_first_window_t6_ParamLimits

0xb98f,	// (0x000652b8) popup_call2_audio_first_window_t6

0xbbcd,	// (0x000654f6) popup_call2_audio_out_window_t6_ParamLimits

0xbbcd,	// (0x000654f6) popup_call2_audio_out_window_t6

0x9792,	// (0x000630bb) main_vitu_pane

0x9e2c,	// (0x00063755) aid_size_cell_itu_ParamLimits

0x9e2c,	// (0x00063755) aid_size_cell_itu

0x9e2c,	// (0x00063755) bg_popup_window_pane_cp08_ParamLimits

0x9e2c,	// (0x00063755) bg_popup_window_pane_cp08

0x9e2c,	// (0x00063755) field_vitu_entry_pane_ParamLimits

0x9e2c,	// (0x00063755) field_vitu_entry_pane

0x9e2c,	// (0x00063755) grid_vitu_function_pane_ParamLimits

0x9e2c,	// (0x00063755) grid_vitu_function_pane

0x9e2c,	// (0x00063755) grid_vitu_itu_pane_ParamLimits

0x9e2c,	// (0x00063755) grid_vitu_itu_pane

0x9e2c,	// (0x00063755) cell_vitu_itu_pane_ParamLimits

0x9e2c,	// (0x00063755) cell_vitu_itu_pane

0x9e2c,	// (0x00063755) cell_vitu_function_pane_ParamLimits

0x9e2c,	// (0x00063755) cell_vitu_function_pane

0x9e2c,	// (0x00063755) bg_popup_sub_pane_cp08_ParamLimits

0x9e2c,	// (0x00063755) bg_popup_sub_pane_cp08

0xa17e,	// (0x00063aa7) field_vitu_entry_pane_t1_ParamLimits

0xa17e,	// (0x00063aa7) field_vitu_entry_pane_t1

0xe7c2,	// (0x000680eb) field_vitu_entry_pane_t2_ParamLimits

0xe7c2,	// (0x000680eb) field_vitu_entry_pane_t2

0x0001,

0xf6f2,	// (0x0006901b) field_vitu_entry_pane_t_ParamLimits

0xf6f2,	// (0x0006901b) field_vitu_entry_pane_t

0xe054,	// (0x0006797d) bg_button_pane_cp05_ParamLimits

0xe054,	// (0x0006797d) bg_button_pane_cp05

0xe903,	// (0x0006822c) cell_vitu_itu_pane_g1

0xad47,	// (0x00064670) cell_vitu_itu_pane_t1_ParamLimits

0xad47,	// (0x00064670) cell_vitu_itu_pane_t1

0xad47,	// (0x00064670) cell_vitu_itu_pane_t2_ParamLimits

0xad47,	// (0x00064670) cell_vitu_itu_pane_t2

0x0002,

0xf6f7,	// (0x00069020) cell_vitu_itu_pane_t_ParamLimits

0xf6f7,	// (0x00069020) cell_vitu_itu_pane_t

0x970d,	// (0x00063036) bg_button_pane_cp07

0xa1ac,	// (0x00063ad5) cell_vitu_function_pane_g1

0x9ed1,	// (0x000637fa) main_calc_pane_g1

0x0e47,	// (0x0005a770) aid_visual_content_pane

0x9792,	// (0x000630bb) main_vradio_pane

0x9e93,	// (0x000637bc) main_vradio_pane_g1_ParamLimits

0x9e93,	// (0x000637bc) main_vradio_pane_g1

0x9ea1,	// (0x000637ca) main_vradio_pane_g2_ParamLimits

0x9ea1,	// (0x000637ca) main_vradio_pane_g2

0x0001,

0xf6fe,	// (0x00069027) main_vradio_pane_g_ParamLimits

0xf6fe,	// (0x00069027) main_vradio_pane_g

0xa17e,	// (0x00063aa7) main_vradio_pane_t1_ParamLimits

0xa17e,	// (0x00063aa7) main_vradio_pane_t1

0xa17e,	// (0x00063aa7) main_vradio_pane_t2_ParamLimits

0xa17e,	// (0x00063aa7) main_vradio_pane_t2

0xad5b,	// (0x00064684) main_vradio_pane_t3_ParamLimits

0xad5b,	// (0x00064684) main_vradio_pane_t3

0x0002,

0xf703,	// (0x0006902c) main_vradio_pane_t_ParamLimits

0xf703,	// (0x0006902c) main_vradio_pane_t

0x9e2c,	// (0x00063755) vradio_rocker_control_pane_ParamLimits

0x9e2c,	// (0x00063755) vradio_rocker_control_pane

0x9e2c,	// (0x00063755) vradio_station_info_pane_ParamLimits

0x9e2c,	// (0x00063755) vradio_station_info_pane

0x9e2c,	// (0x00063755) vradio_frequency_info_pane_ParamLimits

0x9e2c,	// (0x00063755) vradio_frequency_info_pane

0xa1ac,	// (0x00063ad5) vradio_station_info_pane_g1

0xad47,	// (0x00064670) vradio_station_info_pane_t1_ParamLimits

0xad47,	// (0x00064670) vradio_station_info_pane_t1

0xad5b,	// (0x00064684) vradio_station_info_pane_t2_ParamLimits

0xad5b,	// (0x00064684) vradio_station_info_pane_t2

0x0001,

0xf70a,	// (0x00069033) vradio_station_info_pane_t_ParamLimits

0xf70a,	// (0x00069033) vradio_station_info_pane_t

0x970d,	// (0x00063036) vradio_tuning_pane

0x4e92,	// (0x0005e7bb) vradio_rocker_control_pane_g1

0xe91f,	// (0x00068248) vradio_rocker_control_pane_g2

0x4e9c,	// (0x0005e7c5) vradio_rocker_control_pane_g3

0x4ea6,	// (0x0005e7cf) vradio_rocker_control_pane_g4

0x4eb0,	// (0x0005e7d9) vradio_rocker_control_pane_g5

0x0004,

0xf70f,	// (0x00069038) vradio_rocker_control_pane_g

0xa1ac,	// (0x00063ad5) vradio_frequency_info_pane_g1

0xa17e,	// (0x00063aa7) vradio_frequency_info_pane_t1_ParamLimits

0xa17e,	// (0x00063aa7) vradio_frequency_info_pane_t1

0x4eba,	// (0x0005e7e3) vradio_tuning_pane_g1

0x4ec7,	// (0x0005e7f0) vradio_tuning_pane_t1

0x9743,	// (0x0006306c) area_side_right_pane_ParamLimits

0x9743,	// (0x0006306c) area_side_right_pane

0xbfbd,	// (0x000658e6) status_small_pane_g1

0xbfc5,	// (0x000658ee) status_small_pane_g2

0xbfce,	// (0x000658f7) status_small_pane_g3

0xbfd7,	// (0x00065900) status_small_pane_g4

0x0003,

0xf572,	// (0x00068e9b) status_small_pane_g

0xbfe0,	// (0x00065909) status_small_pane_t1

0x9792,	// (0x000630bb) main_video3_pane

0xe927,	// (0x00068250) cams_zoom_vslider_pane

0xe92f,	// (0x00068258) image3_wide_pane_ParamLimits

0xe92f,	// (0x00068258) image3_wide_pane

0xe949,	// (0x00068272) image3_wide_small_pane

0xe955,	// (0x0006827e) main_video3_pane_g1_ParamLimits

0xe955,	// (0x0006827e) main_video3_pane_g1

0xe971,	// (0x0006829a) main_video3_pane_g2_ParamLimits

0xe971,	// (0x0006829a) main_video3_pane_g2

0x0001,

0x0621,	// (0x00059f4a) main_video3_pane_g_ParamLimits

0x0621,	// (0x00059f4a) main_video3_pane_g

0xe98d,	// (0x000682b6) main_video3_pane_t1_ParamLimits

0xe98d,	// (0x000682b6) main_video3_pane_t1

0xe9b8,	// (0x000682e1) main_video3_pane_t2_ParamLimits

0xe9b8,	// (0x000682e1) main_video3_pane_t2

0xe9e3,	// (0x0006830c) main_video3_pane_t3_ParamLimits

0xe9e3,	// (0x0006830c) main_video3_pane_t3

0x0002,

0x0626,	// (0x00059f4f) main_video3_pane_t_ParamLimits

0x0626,	// (0x00059f4f) main_video3_pane_t

0xea10,	// (0x00068339) cams_zoom_vslider_pane_g1

0xea19,	// (0x00068342) cams_zoom_vslider_pane_g2

0x0001,

0x062d,	// (0x00059f56) cams_zoom_vslider_pane_g

0xea21,	// (0x0006834a) small_slider_vertical_pane

0xa1ac,	// (0x00063ad5) small_slider_vertical_pane_g1

0xa1ac,	// (0x00063ad5) small_slider_vertical_pane_g2

0xea29,	// (0x00068352) small_slider_vertical_pane_g3

0x0002,

0xf71a,	// (0x00069043) small_slider_vertical_pane_g

0x9792,	// (0x000630bb) main_hwr_training_pane

0xea32,	// (0x0006835b) hwr_training_instruct_pane_ParamLimits

0xea32,	// (0x0006835b) hwr_training_instruct_pane

0x4ed6,	// (0x0005e7ff) hwr_training_navi_pane_ParamLimits

0x4ed6,	// (0x0005e7ff) hwr_training_navi_pane

0x4ef5,	// (0x0005e81e) hwr_training_write_pane_ParamLimits

0x4ef5,	// (0x0005e81e) hwr_training_write_pane

0x970d,	// (0x00063036) bg_frame_shadow_pane

0xea69,	// (0x00068392) hwr_training_write_pane_g1

0xea71,	// (0x0006839a) hwr_training_write_pane_g2

0xea79,	// (0x000683a2) hwr_training_write_pane_g3

0xea81,	// (0x000683aa) hwr_training_write_pane_g4

0xea89,	// (0x000683b2) hwr_training_write_pane_g5

0xea91,	// (0x000683ba) hwr_training_write_pane_g6

0xea99,	// (0x000683c2) hwr_training_write_pane_g7

0x0006,

0x0639,	// (0x00059f62) hwr_training_write_pane_g

0xda4f,	// (0x00067378) hwr_training_navi_pane_g1_ParamLimits

0xda4f,	// (0x00067378) hwr_training_navi_pane_g1

0xda61,	// (0x0006738a) hwr_training_navi_pane_g2_ParamLimits

0xda61,	// (0x0006738a) hwr_training_navi_pane_g2

0xda73,	// (0x0006739c) hwr_training_navi_pane_g3_ParamLimits

0xda73,	// (0x0006739c) hwr_training_navi_pane_g3

0xda83,	// (0x000673ac) hwr_training_navi_pane_g4_ParamLimits

0xda83,	// (0x000673ac) hwr_training_navi_pane_g4

0x0004,

0xf721,	// (0x0006904a) hwr_training_navi_pane_g_ParamLimits

0xf721,	// (0x0006904a) hwr_training_navi_pane_g

0xda90,	// (0x000673b9) hwr_training_navi_pane_t1

0x4f3d,	// (0x0005e866) list_single_hwr_training_instruct_pane_ParamLimits

0x4f3d,	// (0x0005e866) list_single_hwr_training_instruct_pane

0xeaa1,	// (0x000683ca) list_single_hwr_training_instruct_pane_t1

0xe2aa,	// (0x00067bd3) bg_frame_shadow_pane_g1

0xeab0,	// (0x000683d9) bg_frame_shadow_pane_g2

0xeab8,	// (0x000683e1) bg_frame_shadow_pane_g3

0xeac0,	// (0x000683e9) bg_frame_shadow_pane_g4

0xeac8,	// (0x000683f1) bg_frame_shadow_pane_g5

0xead0,	// (0x000683f9) bg_frame_shadow_pane_g6

0xead8,	// (0x00068401) bg_frame_shadow_pane_g7

0xa003,	// (0x0006392c) bg_frame_shadow_pane_g8

0x0007,

0xf72c,	// (0x00069055) bg_frame_shadow_pane_g

0x9792,	// (0x000630bb) main_video_tele_dialer_pane

0x4f52,	// (0x0005e87b) aid_size_cell_video_keypad_ParamLimits

0x4f52,	// (0x0005e87b) aid_size_cell_video_keypad

0x4f6c,	// (0x0005e895) grid_video_dialer_keypad_pane_ParamLimits

0x4f6c,	// (0x0005e895) grid_video_dialer_keypad_pane

0x4fb8,	// (0x0005e8e1) video_down_pane_cp_ParamLimits

0x4fb8,	// (0x0005e8e1) video_down_pane_cp

0x4fea,	// (0x0005e913) cell_video_dialer_keypad_pane_ParamLimits

0x4fea,	// (0x0005e913) cell_video_dialer_keypad_pane

0xeae0,	// (0x00068409) bg_button_pane_cp08_ParamLimits

0xeae0,	// (0x00068409) bg_button_pane_cp08

0x500c,	// (0x0005e935) cell_video_dialer_keypad_pane_g1_ParamLimits

0x500c,	// (0x0005e935) cell_video_dialer_keypad_pane_g1

0x490c,	// (0x0005e235) mup3_rocker2_pane_ParamLimits

0x490c,	// (0x0005e235) mup3_rocker2_pane

0xa1ac,	// (0x00063ad5) mup3_rocker2_pane_g1

0x3b65,	// (0x0005d48e) main_dialer2_pane

0x9792,	// (0x000630bb) main_mp4_pane

0xdabc,	// (0x000673e5) main_mp4_pane_g1_ParamLimits

0xdabc,	// (0x000673e5) main_mp4_pane_g1

0xdabc,	// (0x000673e5) main_mp4_pane_g2_ParamLimits

0xdabc,	// (0x000673e5) main_mp4_pane_g2

0x5043,	// (0x0005e96c) main_mp4_pane_g3_ParamLimits

0x5043,	// (0x0005e96c) main_mp4_pane_g3

0xdaca,	// (0x000673f3) main_mp4_pane_g4_ParamLimits

0xdaca,	// (0x000673f3) main_mp4_pane_g4

0xdaf8,	// (0x00067421) main_mp4_pane_g5_ParamLimits

0xdaf8,	// (0x00067421) main_mp4_pane_g5

0x0007,

0xf74c,	// (0x00069075) main_mp4_pane_g_ParamLimits

0xf74c,	// (0x00069075) main_mp4_pane_g

0xdb6c,	// (0x00067495) main_mp4_pane_t1_ParamLimits

0xdb6c,	// (0x00067495) main_mp4_pane_t1

0xdbc8,	// (0x000674f1) main_mp4_pane_t2_ParamLimits

0xdbc8,	// (0x000674f1) main_mp4_pane_t2

0xeaec,	// (0x00068415) main_mp4_pane_t3_ParamLimits

0xeaec,	// (0x00068415) main_mp4_pane_t3

0xdc1a,	// (0x00067543) main_mp4_pane_t4_ParamLimits

0xdc1a,	// (0x00067543) main_mp4_pane_t4

0x0003,

0xf75d,	// (0x00069086) main_mp4_pane_t_ParamLimits

0xf75d,	// (0x00069086) main_mp4_pane_t

0xdc5e,	// (0x00067587) mp4_progress_pane_ParamLimits

0xdc5e,	// (0x00067587) mp4_progress_pane

0xdca8,	// (0x000675d1) mp4_rocker_pane_ParamLimits

0xdca8,	// (0x000675d1) mp4_rocker_pane

0xeb1a,	// (0x00068443) mp4_progress_pane_t1

0xeb33,	// (0x0006845c) mp4_progress_pane_t2

0x0001,

0x068d,	// (0x00059fb6) mp4_progress_pane_t

0xeb4c,	// (0x00068475) mup_progress_pane_cp04

0xe0d3,	// (0x000679fc) mp4_rocker_pane_g1

0x507f,	// (0x0005e9a8) aid_cell_size_keypad2_ParamLimits

0x507f,	// (0x0005e9a8) aid_cell_size_keypad2

0x5095,	// (0x0005e9be) dialer2_ne_pane_ParamLimits

0x5095,	// (0x0005e9be) dialer2_ne_pane

0x50af,	// (0x0005e9d8) grid_dialer2_keypad_pane_ParamLimits

0x50af,	// (0x0005e9d8) grid_dialer2_keypad_pane

0xe054,	// (0x0006797d) bg_popup_call_pane_cp07_ParamLimits

0xe054,	// (0x0006797d) bg_popup_call_pane_cp07

0x50cb,	// (0x0005e9f4) dialer2_ne_pane_t1_ParamLimits

0x50cb,	// (0x0005e9f4) dialer2_ne_pane_t1

0x5106,	// (0x0005ea2f) cell_dialer2_keypad_pane_ParamLimits

0x5106,	// (0x0005ea2f) cell_dialer2_keypad_pane

0xeb71,	// (0x0006849a) bg_button_pane_pane_cp04_ParamLimits

0xeb71,	// (0x0006849a) bg_button_pane_pane_cp04

0x5128,	// (0x0005ea51) cell_dialer2_keypad_pane_g1_ParamLimits

0x5128,	// (0x0005ea51) cell_dialer2_keypad_pane_g1

0x1bc2,	// (0x0005b4eb) aid_placing_vt_set_content_ParamLimits

0x1bc2,	// (0x0005b4eb) aid_placing_vt_set_content

0x1bea,	// (0x0005b513) aid_placing_vt_set_title_ParamLimits

0x1bea,	// (0x0005b513) aid_placing_vt_set_title

0x9792,	// (0x000630bb) main_image3_pane

0x51ee,	// (0x0005eb17) area_side_right_pane_cp01_ParamLimits

0x51ee,	// (0x0005eb17) area_side_right_pane_cp01

0xdabc,	// (0x000673e5) main_image3_pane_g1_ParamLimits

0xdabc,	// (0x000673e5) main_image3_pane_g1

0x5205,	// (0x0005eb2e) main_image3_pane_g2_ParamLimits

0x5205,	// (0x0005eb2e) main_image3_pane_g2

0x522d,	// (0x0005eb56) main_image3_pane_g3_ParamLimits

0x522d,	// (0x0005eb56) main_image3_pane_g3

0x5257,	// (0x0005eb80) main_image3_pane_g4_ParamLimits

0x5257,	// (0x0005eb80) main_image3_pane_g4

0x0003,

0xf770,	// (0x00069099) main_image3_pane_g_ParamLimits

0xf770,	// (0x00069099) main_image3_pane_g

0x5281,	// (0x0005ebaa) main_image3_pane_t1_ParamLimits

0x5281,	// (0x0005ebaa) main_image3_pane_t1

0x52d9,	// (0x0005ec02) main_image3_pane_t2_ParamLimits

0x52d9,	// (0x0005ec02) main_image3_pane_t2

0x532b,	// (0x0005ec54) main_image3_pane_t3_ParamLimits

0x532b,	// (0x0005ec54) main_image3_pane_t3

0x0003,

0xf779,	// (0x000690a2) main_image3_pane_t_ParamLimits

0xf779,	// (0x000690a2) main_image3_pane_t

0x9e2c,	// (0x00063755) grid_sctrl_middle_pane_cp01_ParamLimits

0x9e2c,	// (0x00063755) grid_sctrl_middle_pane_cp01

0x53b3,	// (0x0005ecdc) cell_sctrl_middle_pane_cp01_ParamLimits

0x53b3,	// (0x0005ecdc) cell_sctrl_middle_pane_cp01

0x53d0,	// (0x0005ecf9) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x53d0,	// (0x0005ecf9) cell_sctrl_middle_pane_cp01_g1

0x9792,	// (0x000630bb) main_call4_pane

0x53e6,	// (0x0005ed0f) aid_size_button_call4_ParamLimits

0x53e6,	// (0x0005ed0f) aid_size_button_call4

0x5419,	// (0x0005ed42) call4_windows_pane_ParamLimits

0x5419,	// (0x0005ed42) call4_windows_pane

0x5438,	// (0x0005ed61) grid_call4_button_pane_ParamLimits

0x5438,	// (0x0005ed61) grid_call4_button_pane

0x546b,	// (0x0005ed94) call4_windows_conf_pane

0x5482,	// (0x0005edab) popup_call4_audio_first_window_ParamLimits

0x5482,	// (0x0005edab) popup_call4_audio_first_window

0x54d2,	// (0x0005edfb) popup_call4_audio_second_window_ParamLimits

0x54d2,	// (0x0005edfb) popup_call4_audio_second_window

0x54e9,	// (0x0005ee12) popup_call4_audio_wait_window_ParamLimits

0x54e9,	// (0x0005ee12) popup_call4_audio_wait_window

0x54f7,	// (0x0005ee20) cell_call4_button_pane_ParamLimits

0x54f7,	// (0x0005ee20) cell_call4_button_pane

0x551c,	// (0x0005ee45) bg_button_pane_cp09_ParamLimits

0x551c,	// (0x0005ee45) bg_button_pane_cp09

0x5528,	// (0x0005ee51) cell_call4_button_pane_g1_ParamLimits

0x5528,	// (0x0005ee51) cell_call4_button_pane_g1

0x554e,	// (0x0005ee77) cell_call4_button_pane_t1_ParamLimits

0x554e,	// (0x0005ee77) cell_call4_button_pane_t1

0xeb85,	// (0x000684ae) popup_call4_audio_conf_window_ParamLimits

0xeb85,	// (0x000684ae) popup_call4_audio_conf_window

0x496c,	// (0x0005e295) mup3_progress_pane_t1_ParamLimits

0x498b,	// (0x0005e2b4) mup3_progress_pane_t2_ParamLimits

0xe5f6,	// (0x00067f1f) mup3_progress_pane_t3_ParamLimits

0xf69a,	// (0x00068fc3) mup3_progress_pane_t_ParamLimits

0xe613,	// (0x00067f3c) mup_progress_pane_cp03_ParamLimits

0x4e8a,	// (0x0005e7b3) mup3_control_keys_pane_g4_copy1

0xdc8c,	// (0x000675b5) mp4_rocker2_pane_ParamLimits

0xdc8c,	// (0x000675b5) mp4_rocker2_pane

0xeb99,	// (0x000684c2) mp4_rocker2_pane_g1

0xeba1,	// (0x000684ca) mp4_rocker2_pane_g2

0xdd2c,	// (0x00067655) mp4_rocker2_pane_g3

0xdd34,	// (0x0006765d) mp4_rocker2_pane_g4

0xdd3c,	// (0x00067665) mp4_rocker2_pane_g5

0x0004,

0xf782,	// (0x000690ab) mp4_rocker2_pane_g

0x9792,	// (0x000630bb) main_camera4_pane

0x9792,	// (0x000630bb) main_video4_pane

0x4f86,	// (0x0005e8af) main_video_tele_dialer_pane_t1_ParamLimits

0x4f86,	// (0x0005e8af) main_video_tele_dialer_pane_t1

0x4f9f,	// (0x0005e8c8) main_video_tele_dialer_pane_t2_ParamLimits

0x4f9f,	// (0x0005e8c8) main_video_tele_dialer_pane_t2

0x0001,

0xf73d,	// (0x00069066) main_video_tele_dialer_pane_t_ParamLimits

0xf73d,	// (0x00069066) main_video_tele_dialer_pane_t

0x558c,	// (0x0005eeb5) cam4_autofocus_pane_ParamLimits

0x558c,	// (0x0005eeb5) cam4_autofocus_pane

0x55a2,	// (0x0005eecb) cam4_image_uncrop_pane_ParamLimits

0x55a2,	// (0x0005eecb) cam4_image_uncrop_pane

0x55bc,	// (0x0005eee5) cam4_indicators_pane_ParamLimits

0x55bc,	// (0x0005eee5) cam4_indicators_pane

0x55e7,	// (0x0005ef10) main_camera4_pane_g1_ParamLimits

0x55e7,	// (0x0005ef10) main_camera4_pane_g1

0x55f9,	// (0x0005ef22) main_camera4_pane_g2_ParamLimits

0x55f9,	// (0x0005ef22) main_camera4_pane_g2

0x560c,	// (0x0005ef35) main_camera4_pane_g3_ParamLimits

0x560c,	// (0x0005ef35) main_camera4_pane_g3

0x561f,	// (0x0005ef48) main_camera4_pane_g4_ParamLimits

0x561f,	// (0x0005ef48) main_camera4_pane_g4

0x5632,	// (0x0005ef5b) main_camera4_pane_g5_ParamLimits

0x5632,	// (0x0005ef5b) main_camera4_pane_g5

0x0005,

0xf78d,	// (0x000690b6) main_camera4_pane_g_ParamLimits

0xf78d,	// (0x000690b6) main_camera4_pane_g

0x5656,	// (0x0005ef7f) main_camera4_pane_t1_ParamLimits

0x5656,	// (0x0005ef7f) main_camera4_pane_t1

0xeba9,	// (0x000684d2) bg_tb_trans_pane_cp06

0xdd68,	// (0x00067691) cam4_indicators_pane_g1

0xdd79,	// (0x000676a2) cam4_indicators_pane_g2

0x0002,

0xf7a8,	// (0x000690d1) cam4_indicators_pane_g

0xdd97,	// (0x000676c0) cam4_indicators_pane_t1

0x56ba,	// (0x0005efe3) main_video4_pane_g1_ParamLimits

0x56ba,	// (0x0005efe3) main_video4_pane_g1

0x56c9,	// (0x0005eff2) main_video4_pane_g2_ParamLimits

0x56c9,	// (0x0005eff2) main_video4_pane_g2

0x56d8,	// (0x0005f001) main_video4_pane_g3_ParamLimits

0x56d8,	// (0x0005f001) main_video4_pane_g3

0x56e7,	// (0x0005f010) main_video4_pane_g4_ParamLimits

0x56e7,	// (0x0005f010) main_video4_pane_g4

0x0004,

0xf7af,	// (0x000690d8) main_video4_pane_g_ParamLimits

0xf7af,	// (0x000690d8) main_video4_pane_g

0x5705,	// (0x0005f02e) vid4_indicators_pane_ParamLimits

0x5705,	// (0x0005f02e) vid4_indicators_pane

0x5733,	// (0x0005f05c) video4_image_uncrop_cif_pane_ParamLimits

0x5733,	// (0x0005f05c) video4_image_uncrop_cif_pane

0x574d,	// (0x0005f076) video4_image_uncrop_nhd_pane_ParamLimits

0x574d,	// (0x0005f076) video4_image_uncrop_nhd_pane

0x55a2,	// (0x0005eecb) video4_image_uncrop_vga_pane_ParamLimits

0x55a2,	// (0x0005eecb) video4_image_uncrop_vga_pane

0x9784,	// (0x000630ad) bg_tb_trans_pane_cp07

0xddc3,	// (0x000676ec) vid4_indicators_pane_g1

0xddd7,	// (0x00067700) vid4_indicators_pane_g2

0xddeb,	// (0x00067714) vid4_indicators_pane_g3

0x0004,

0xf7ba,	// (0x000690e3) vid4_indicators_pane_g

0xde1a,	// (0x00067743) vid4_indicators_pane_t1

0x5761,	// (0x0005f08a) cam4_autofocus_pane_g1

0x5769,	// (0x0005f092) cam4_autofocus_pane_g2

0x5771,	// (0x0005f09a) cam4_autofocus_pane_g3

0x0002,

0xf7c5,	// (0x000690ee) cam4_autofocus_pane_g

0x5779,	// (0x0005f0a2) cam4_autofocus_pane_g3_copy1

0x4fce,	// (0x0005e8f7) video_down_pane_cp_t1

0x4fdc,	// (0x0005e905) video_down_pane_cp_t2

0x0001,

0xf742,	// (0x0006906b) video_down_pane_cp_t

0x9784,	// (0x000630ad) popup_vitu2_window_ParamLimits

0x9784,	// (0x000630ad) popup_vitu2_window

0x5781,	// (0x0005f0aa) aid_size_cell2_itu2_ParamLimits

0x5781,	// (0x0005f0aa) aid_size_cell2_itu2

0x57a7,	// (0x0005f0d0) aid_size_cell_itu2_ParamLimits

0x57a7,	// (0x0005f0d0) aid_size_cell_itu2

0x5803,	// (0x0005f12c) bg_popup_window_pane_cp09_ParamLimits

0x5803,	// (0x0005f12c) bg_popup_window_pane_cp09

0x5811,	// (0x0005f13a) field_vitu2_entry_pane_ParamLimits

0x5811,	// (0x0005f13a) field_vitu2_entry_pane

0x5837,	// (0x0005f160) grid_vitu2_function_pane_ParamLimits

0x5837,	// (0x0005f160) grid_vitu2_function_pane

0x5888,	// (0x0005f1b1) grid_vitu2_itu_pane_ParamLimits

0x5888,	// (0x0005f1b1) grid_vitu2_itu_pane

0x591e,	// (0x0005f247) cell_vitu2_itu_pane_ParamLimits

0x591e,	// (0x0005f247) cell_vitu2_itu_pane

0x594a,	// (0x0005f273) cell_vitu2_function_pane_ParamLimits

0x594a,	// (0x0005f273) cell_vitu2_function_pane

0xebb7,	// (0x000684e0) bg_popup_call_pane_cp08_ParamLimits

0xebb7,	// (0x000684e0) bg_popup_call_pane_cp08

0xebce,	// (0x000684f7) field_vitu2_entry_pane_g1

0xebda,	// (0x00068503) field_vitu2_entry_pane_g2

0x0002,

0xf7cc,	// (0x000690f5) field_vitu2_entry_pane_g

0x5989,	// (0x0005f2b2) field_vitu2_entry_pane_t1_ParamLimits

0x5989,	// (0x0005f2b2) field_vitu2_entry_pane_t1

0x59b9,	// (0x0005f2e2) field_vitu2_entry_pane_t2_ParamLimits

0x59b9,	// (0x0005f2e2) field_vitu2_entry_pane_t2

0x0001,

0xf7d3,	// (0x000690fc) field_vitu2_entry_pane_t_ParamLimits

0xf7d3,	// (0x000690fc) field_vitu2_entry_pane_t

0x59d6,	// (0x0005f2ff) bg_button_pane_cp010_ParamLimits

0x59d6,	// (0x0005f2ff) bg_button_pane_cp010

0x59e4,	// (0x0005f30d) cell_vitu2_itu_pane_g1

0x5a0a,	// (0x0005f333) cell_vitu2_itu_pane_t1_ParamLimits

0x5a0a,	// (0x0005f333) cell_vitu2_itu_pane_t1

0x0d1f,	// (0x0005a648) cell_vitu2_itu_pane_t2_ParamLimits

0x0d1f,	// (0x0005a648) cell_vitu2_itu_pane_t2

0x0002,

0xf7dd,	// (0x00069106) cell_vitu2_itu_pane_t_ParamLimits

0xf7dd,	// (0x00069106) cell_vitu2_itu_pane_t

0x9784,	// (0x000630ad) bg_button_pane_cp011

0x5a68,	// (0x0005f391) cell_vitu2_function_pane_g1

0x9792,	// (0x000630bb) main_myfav_hc_pane

0x537b,	// (0x0005eca4) popup_image3_note_pane_ParamLimits

0x537b,	// (0x0005eca4) popup_image3_note_pane

0x5397,	// (0x0005ecc0) popup_image3_tool_bar_pane_ParamLimits

0x5397,	// (0x0005ecc0) popup_image3_tool_bar_pane

0x0dad,	// (0x0005a6d6) cell_vitu2_itu_pane_t3_ParamLimits

0x0dad,	// (0x0005a6d6) cell_vitu2_itu_pane_t3

0x970d,	// (0x00063036) bg_popup_trans_pane

0xebee,	// (0x00068517) grid_image3_tool_bar_pane

0xebf8,	// (0x00068521) bg_popup_trans_pane_g1

0xa3bd,	// (0x00063ce6) bg_popup_trans_pane_g2

0xec00,	// (0x00068529) bg_popup_trans_pane_g3

0xec08,	// (0x00068531) bg_popup_trans_pane_g4

0xec10,	// (0x00068539) bg_popup_trans_pane_g5

0xec18,	// (0x00068541) bg_popup_trans_pane_g6

0xec20,	// (0x00068549) bg_popup_trans_pane_g7

0xec28,	// (0x00068551) bg_popup_trans_pane_g8

0xa39d,	// (0x00063cc6) bg_popup_trans_pane_g9

0x0008,

0xf7e4,	// (0x0006910d) bg_popup_trans_pane_g

0xec30,	// (0x00068559) cell_image3_tool_bar_pane_ParamLimits

0xec30,	// (0x00068559) cell_image3_tool_bar_pane

0xa1ac,	// (0x00063ad5) cell_image3_tool_bar_pane_g1

0x970d,	// (0x00063036) bg_popup_trans_pane_cp1

0xec44,	// (0x0006856d) popup_image3_note_pane_t1

0xec52,	// (0x0006857b) popup_image3_note_pane_t2

0xec60,	// (0x00068589) popup_image3_note_pane_t3

0x0002,

0x0723,	// (0x0005a04c) popup_image3_note_pane_t

0xec6e,	// (0x00068597) popup_image3_note_pane_t3_copy1

0x5a7c,	// (0x0005f3a5) bg_myfav_hc_instruction_pane_ParamLimits

0x5a7c,	// (0x0005f3a5) bg_myfav_hc_instruction_pane

0x5a90,	// (0x0005f3b9) cell_myfav_contact_pane_ParamLimits

0x5a90,	// (0x0005f3b9) cell_myfav_contact_pane

0x5aae,	// (0x0005f3d7) cell_myfav_contact_pane_cp1_ParamLimits

0x5aae,	// (0x0005f3d7) cell_myfav_contact_pane_cp1

0x5ac6,	// (0x0005f3ef) cell_myfav_contact_pane_cp2_ParamLimits

0x5ac6,	// (0x0005f3ef) cell_myfav_contact_pane_cp2

0x5ade,	// (0x0005f407) cell_myfav_contact_pane_cp3_ParamLimits

0x5ade,	// (0x0005f407) cell_myfav_contact_pane_cp3

0x5af5,	// (0x0005f41e) cell_myfav_contact_pane_cp4_ParamLimits

0x5af5,	// (0x0005f41e) cell_myfav_contact_pane_cp4

0x5b0d,	// (0x0005f436) cell_myfav_contact_pane_cp5_ParamLimits

0x5b0d,	// (0x0005f436) cell_myfav_contact_pane_cp5

0x5b21,	// (0x0005f44a) cell_myfav_contact_pane_cp6_ParamLimits

0x5b21,	// (0x0005f44a) cell_myfav_contact_pane_cp6

0x5b37,	// (0x0005f460) cell_myfav_contact_pane_cp7_ParamLimits

0x5b37,	// (0x0005f460) cell_myfav_contact_pane_cp7

0xec7c,	// (0x000685a5) listscroll_gen_pane_cp05

0x5b51,	// (0x0005f47a) main_myfav_hc_pane_g1_ParamLimits

0x5b51,	// (0x0005f47a) main_myfav_hc_pane_g1

0x5b6b,	// (0x0005f494) main_myfav_hc_pane_g2_ParamLimits

0x5b6b,	// (0x0005f494) main_myfav_hc_pane_g2

0x0002,

0xf7f7,	// (0x00069120) main_myfav_hc_pane_g_ParamLimits

0xf7f7,	// (0x00069120) main_myfav_hc_pane_g

0x5b9d,	// (0x0005f4c6) main_myfav_hc_pane_t1_ParamLimits

0x5b9d,	// (0x0005f4c6) main_myfav_hc_pane_t1

0xec85,	// (0x000685ae) main_myfav_hc_pane_t2_ParamLimits

0xec85,	// (0x000685ae) main_myfav_hc_pane_t2

0xec97,	// (0x000685c0) main_myfav_hc_pane_t3_ParamLimits

0xec97,	// (0x000685c0) main_myfav_hc_pane_t3

0x5bb4,	// (0x0005f4dd) main_myfav_hc_pane_t4_ParamLimits

0x5bb4,	// (0x0005f4dd) main_myfav_hc_pane_t4

0x0004,

0xf7fe,	// (0x00069127) main_myfav_hc_pane_t_ParamLimits

0xf7fe,	// (0x00069127) main_myfav_hc_pane_t

0xa1ac,	// (0x00063ad5) bg_myfav_hc_instruction_pane_g1

0xeca9,	// (0x000685d2) cell_myfav_contact_pane_g1_ParamLimits

0xeca9,	// (0x000685d2) cell_myfav_contact_pane_g1

0xeca9,	// (0x000685d2) cell_myfav_contact_pane_g2_ParamLimits

0xeca9,	// (0x000685d2) cell_myfav_contact_pane_g2

0xecb5,	// (0x000685de) cell_myfav_contact_pane_g3_ParamLimits

0xecb5,	// (0x000685de) cell_myfav_contact_pane_g3

0x9ea1,	// (0x000637ca) cell_myfav_contact_pane_g4_ParamLimits

0x9ea1,	// (0x000637ca) cell_myfav_contact_pane_g4

0xecc2,	// (0x000685eb) cell_myfav_contact_pane_g5_ParamLimits

0xecc2,	// (0x000685eb) cell_myfav_contact_pane_g5

0x0004,

0xf809,	// (0x00069132) cell_myfav_contact_pane_g_ParamLimits

0xf809,	// (0x00069132) cell_myfav_contact_pane_g

0x5b85,	// (0x0005f4ae) main_myfav_hc_pane_g3_ParamLimits

0x5b85,	// (0x0005f4ae) main_myfav_hc_pane_g3

0x0f82,	// (0x0005a8ab) popup_adpt_find_window

0x5bdc,	// (0x0005f505) afind_page_pane_ParamLimits

0x5bdc,	// (0x0005f505) afind_page_pane

0x5bf1,	// (0x0005f51a) aid_size_cell_afind_ParamLimits

0x5bf1,	// (0x0005f51a) aid_size_cell_afind

0x5c0f,	// (0x0005f538) bg_popup_sub_pane_cp09_ParamLimits

0x5c0f,	// (0x0005f538) bg_popup_sub_pane_cp09

0x5c1c,	// (0x0005f545) find_pane_cp01_ParamLimits

0x5c1c,	// (0x0005f545) find_pane_cp01

0xecce,	// (0x000685f7) grid_afind_control_pane_ParamLimits

0xecce,	// (0x000685f7) grid_afind_control_pane

0x5c29,	// (0x0005f552) grid_afind_pane_ParamLimits

0x5c29,	// (0x0005f552) grid_afind_pane

0x5c4b,	// (0x0005f574) cell_afind_pane_ParamLimits

0x5c4b,	// (0x0005f574) cell_afind_pane

0xa1ac,	// (0x00063ad5) afind_page_pane_g1

0x5cb2,	// (0x0005f5db) afind_page_pane_g2

0x5cbb,	// (0x0005f5e4) afind_page_pane_g3

0x0002,

0xf814,	// (0x0006913d) afind_page_pane_g

0x5cc4,	// (0x0005f5ed) afind_page_pane_t1

0xece2,	// (0x0006860b) cell_afind_grid_control_pane_ParamLimits

0xece2,	// (0x0006860b) cell_afind_grid_control_pane

0xeb71,	// (0x0006849a) bg_button_pane_cp69_ParamLimits

0xeb71,	// (0x0006849a) bg_button_pane_cp69

0x5ce4,	// (0x0005f60d) cell_afind_pane_g1_ParamLimits

0x5ce4,	// (0x0005f60d) cell_afind_pane_g1

0x5cf1,	// (0x0005f61a) cell_afind_pane_t1_ParamLimits

0x5cf1,	// (0x0005f61a) cell_afind_pane_t1

0xa1b6,	// (0x00063adf) bg_button_pane_cp72

0xecf1,	// (0x0006861a) cell_afind_grid_control_pane_g1

0x35d2,	// (0x0005cefb) aid_image_placing_area_ParamLimits

0x35d2,	// (0x0005cefb) aid_image_placing_area

0x9e93,	// (0x000637bc) field_vitu_entry_pane_g1_ParamLimits

0x9e93,	// (0x000637bc) field_vitu_entry_pane_g1

0x9e93,	// (0x000637bc) field_vitu_entry_pane_g2_ParamLimits

0x9e93,	// (0x000637bc) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x00068b10) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x00068b10) field_vitu_entry_pane_g

0xe903,	// (0x0006822c) cell_vitu_itu_pane_g1_ParamLimits

0xe7c2,	// (0x000680eb) cell_vitu_itu_pane_t3_ParamLimits

0xe7c2,	// (0x000680eb) cell_vitu_itu_pane_t3

0xeb1a,	// (0x00068443) mp4_progress_pane_t1_ParamLimits

0xeb33,	// (0x0006845c) mp4_progress_pane_t2_ParamLimits

0x068d,	// (0x00059fb6) mp4_progress_pane_t_ParamLimits

0xeb4c,	// (0x00068475) mup_progress_pane_cp04_ParamLimits

0x5bc8,	// (0x0005f4f1) main_myfav_hc_pane_t5_ParamLimits

0x5bc8,	// (0x0005f4f1) main_myfav_hc_pane_t5

0x9733,	// (0x0006305c) aid_zoom_text_primary

0x0f82,	// (0x0005a8ab) popup_adpt_find_window_ParamLimits

0x9784,	// (0x000630ad) main_cam_set_pane

0x55d3,	// (0x0005eefc) cam4_zoom_pane_ParamLimits

0x55d3,	// (0x0005eefc) cam4_zoom_pane

0x5d03,	// (0x0005f62c) main_cam_set_pane_g1_ParamLimits

0x5d03,	// (0x0005f62c) main_cam_set_pane_g1

0x5d11,	// (0x0005f63a) main_cam_set_pane_g2_ParamLimits

0x5d11,	// (0x0005f63a) main_cam_set_pane_g2

0x0001,

0xf81b,	// (0x00069144) main_cam_set_pane_g_ParamLimits

0xf81b,	// (0x00069144) main_cam_set_pane_g

0x5d32,	// (0x0005f65b) main_cam_set_pane_t1_ParamLimits

0x5d32,	// (0x0005f65b) main_cam_set_pane_t1

0x5d4d,	// (0x0005f676) main_cset_listscroll_pane_ParamLimits

0x5d4d,	// (0x0005f676) main_cset_listscroll_pane

0x5d73,	// (0x0005f69c) main_cset_slider_pane_ParamLimits

0x5d73,	// (0x0005f69c) main_cset_slider_pane

0xed02,	// (0x0006862b) main_cset_list_pane_ParamLimits

0xed02,	// (0x0006862b) main_cset_list_pane

0xed12,	// (0x0006863b) scroll_pane_cp028

0x5d99,	// (0x0005f6c2) aid_area_touch_slider

0x5db5,	// (0x0005f6de) cset_slider_pane

0x5dd8,	// (0x0005f701) main_cset_slider_pane_g1

0x5ded,	// (0x0005f716) main_cset_slider_pane_g2

0x0011,

0xf820,	// (0x00069149) main_cset_slider_pane_g

0xed4b,	// (0x00068674) main_cset_slider_pane_t1

0x5ea9,	// (0x0005f7d2) main_cset_slider_pane_t2

0x5ec3,	// (0x0005f7ec) main_cset_slider_pane_t3

0x5edd,	// (0x0005f806) main_cset_slider_pane_t4

0x5ef7,	// (0x0005f820) main_cset_slider_pane_t5

0x5f11,	// (0x0005f83a) main_cset_slider_pane_t6

0x5f26,	// (0x0005f84f) main_cset_slider_pane_t7

0x000e,

0xf845,	// (0x0006916e) main_cset_slider_pane_t

0x602a,	// (0x0005f953) cset_list_set_pane_ParamLimits

0x602a,	// (0x0005f953) cset_list_set_pane

0xede5,	// (0x0006870e) aid_position_infowindow_above

0xeded,	// (0x00068716) aid_position_infowindow_below

0x603c,	// (0x0005f965) cset_list_set_pane_g1_ParamLimits

0x603c,	// (0x0005f965) cset_list_set_pane_g1

0x6048,	// (0x0005f971) cset_list_set_pane_g3_ParamLimits

0x6048,	// (0x0005f971) cset_list_set_pane_g3

0x0001,

0xf864,	// (0x0006918d) cset_list_set_pane_g_ParamLimits

0xf864,	// (0x0006918d) cset_list_set_pane_g

0x6057,	// (0x0005f980) cset_list_set_pane_t1_ParamLimits

0x6057,	// (0x0005f980) cset_list_set_pane_t1

0x9e2c,	// (0x00063755) list_highlight_pane_cp021_ParamLimits

0x9e2c,	// (0x00063755) list_highlight_pane_cp021

0xaddf,	// (0x00064708) cset_slider_pane_g1

0xadf1,	// (0x0006471a) cset_slider_pane_g2

0xade8,	// (0x00064711) cset_slider_pane_g3

0x0002,

0xf869,	// (0x00069192) cset_slider_pane_g

0xde31,	// (0x0006775a) aid_area_touch_cam4_zoom

0xde39,	// (0x00067762) cam4_zoom_cont_pane

0xde41,	// (0x0006776a) cam4_zoom_pane_g1

0xde49,	// (0x00067772) cam4_zoom_pane_g2

0x606c,	// (0x0005f995) cam4_zoom_pane_g3

0x0002,

0xf870,	// (0x00069199) cam4_zoom_pane_g

0xde51,	// (0x0006777a) cam4_zoom_cont_pane_g1

0xde5a,	// (0x00067783) cam4_zoom_cont_pane_g2

0xde63,	// (0x0006778c) cam4_zoom_cont_pane_g3

0x0002,

0xf877,	// (0x000691a0) cam4_zoom_cont_pane_g

0x5404,	// (0x0005ed2d) call4_image_pane_ParamLimits

0x5404,	// (0x0005ed2d) call4_image_pane

0x546b,	// (0x0005ed94) call4_windows_conf_pane_ParamLimits

0x54b0,	// (0x0005edd9) popup_call4_audio_in_window_ParamLimits

0x54b0,	// (0x0005edd9) popup_call4_audio_in_window

0x970d,	// (0x00063036) bg_popup_call2_act_pane_cp02

0xeb7d,	// (0x000684a6) call4_list_conf_pane

0xa1ac,	// (0x00063ad5) call4_image_pane_g1

0xa1ac,	// (0x00063ad5) call4_image_pane_g2

0x0001,

0xf3be,	// (0x00068ce7) call4_image_pane_g

0xedf5,	// (0x0006871e) list_single_graphic_popup_conf4_pane_ParamLimits

0xedf5,	// (0x0006871e) list_single_graphic_popup_conf4_pane

0x970d,	// (0x00063036) list_highlight_pane_cp022

0xee08,	// (0x00068731) list_single_graphic_popup_conf4_pane_g1

0xa97d,	// (0x000642a6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf87e,	// (0x000691a7) list_single_graphic_popup_conf4_pane_g

0xee10,	// (0x00068739) list_single_graphic_popup_conf4_pane_t1

0x1d0e,	// (0x0005b637) popup_vtel_slider_window_ParamLimits

0x1d0e,	// (0x0005b637) popup_vtel_slider_window

0xeb5f,	// (0x00068488) dialer2_ne_pane_t2_ParamLimits

0xeb5f,	// (0x00068488) dialer2_ne_pane_t2

0x0001,

0xf766,	// (0x0006908f) dialer2_ne_pane_t_ParamLimits

0xf766,	// (0x0006908f) dialer2_ne_pane_t

0xe054,	// (0x0006797d) bg_popup_sub_pane_cp010_ParamLimits

0xe054,	// (0x0006797d) bg_popup_sub_pane_cp010

0x6074,	// (0x0005f99d) popup_vtel_slider_window_g1_ParamLimits

0x6074,	// (0x0005f99d) popup_vtel_slider_window_g1

0x6087,	// (0x0005f9b0) popup_vtel_slider_window_g2_ParamLimits

0x6087,	// (0x0005f9b0) popup_vtel_slider_window_g2

0x0003,

0xf883,	// (0x000691ac) popup_vtel_slider_window_g_ParamLimits

0xf883,	// (0x000691ac) popup_vtel_slider_window_g

0x60dd,	// (0x0005fa06) vtel_slider_pane_ParamLimits

0x60dd,	// (0x0005fa06) vtel_slider_pane

0x60ff,	// (0x0005fa28) vtel_slider_pane_g1_ParamLimits

0x60ff,	// (0x0005fa28) vtel_slider_pane_g1

0x6113,	// (0x0005fa3c) vtel_slider_pane_g2_ParamLimits

0x6113,	// (0x0005fa3c) vtel_slider_pane_g2

0x612b,	// (0x0005fa54) vtel_slider_pane_g3_ParamLimits

0x612b,	// (0x0005fa54) vtel_slider_pane_g3

0x60ff,	// (0x0005fa28) vtel_slider_pane_g4_ParamLimits

0x60ff,	// (0x0005fa28) vtel_slider_pane_g4

0x6141,	// (0x0005fa6a) vtel_slider_pane_g5_ParamLimits

0x6141,	// (0x0005fa6a) vtel_slider_pane_g5

0x0004,

0xf88c,	// (0x000691b5) vtel_slider_pane_g_ParamLimits

0xf88c,	// (0x000691b5) vtel_slider_pane_g

0x9784,	// (0x000630ad) main_gallery2_pane

0x57d3,	// (0x0005f0fc) aid_size_row_itut2_dropdow_list_ParamLimits

0x57d3,	// (0x0005f0fc) aid_size_row_itut2_dropdow_list

0x585f,	// (0x0005f188) grid_vitu2_function_top_pane_ParamLimits

0x585f,	// (0x0005f188) grid_vitu2_function_top_pane

0x58c9,	// (0x0005f1f2) popup_vitu2_dropdown_list_window_ParamLimits

0x58c9,	// (0x0005f1f2) popup_vitu2_dropdown_list_window

0x58f0,	// (0x0005f219) popup_vitu2_match_list_window

0x6157,	// (0x0005fa80) cell_vitu2_function_top_pane_ParamLimits

0x6157,	// (0x0005fa80) cell_vitu2_function_top_pane

0x616f,	// (0x0005fa98) cell_vitu2_function_top_pane_cp01_ParamLimits

0x616f,	// (0x0005fa98) cell_vitu2_function_top_pane_cp01

0x618b,	// (0x0005fab4) cell_vitu2_function_top_wide_pane_ParamLimits

0x618b,	// (0x0005fab4) cell_vitu2_function_top_wide_pane

0x9784,	// (0x000630ad) bg_button_pane_cp012

0x61a9,	// (0x0005fad2) cell_vitu2_function_top_pane_g1

0xde6c,	// (0x00067795) bg_button_pane_cp013_ParamLimits

0xde6c,	// (0x00067795) bg_button_pane_cp013

0x61bd,	// (0x0005fae6) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x61bd,	// (0x0005fae6) cell_vitu2_function_top_wide_pane_g1

0x9784,	// (0x000630ad) bg_popup_sub_pane_cp20

0x61d5,	// (0x0005fafe) list_vitu2_match_list_pane

0xebf8,	// (0x00068521) bg_popup_sub_pane_cp20_g1

0xec00,	// (0x00068529) bg_popup_sub_pane_cp20_g2

0xa3bd,	// (0x00063ce6) bg_popup_sub_pane_cp20_g3

0xec08,	// (0x00068531) bg_popup_sub_pane_cp20_g4

0xa39d,	// (0x00063cc6) bg_popup_sub_pane_cp20_g5

0xee26,	// (0x0006874f) bg_popup_sub_pane_cp20_g6

0xec18,	// (0x00068541) bg_popup_sub_pane_cp20_g7

0xec20,	// (0x00068549) bg_popup_sub_pane_cp20_g8

0xec28,	// (0x00068551) bg_popup_sub_pane_cp20_g9

0x0008,

0xf897,	// (0x000691c0) bg_popup_sub_pane_cp20_g

0xde88,	// (0x000677b1) list_vitu2_match_list_item_pane_ParamLimits

0xde88,	// (0x000677b1) list_vitu2_match_list_item_pane

0xde9a,	// (0x000677c3) list_vitu2_match_list_item_pane_t1

0x9792,	// (0x000630bb) bg_popup_sub_pane_cp21

0xa16c,	// (0x00063a95) grid_vitu2_dropdown_list_pane

0x61ed,	// (0x0005fb16) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x61ed,	// (0x0005fb16) cell_vitu2_dropdown_list_char_pane

0x620d,	// (0x0005fb36) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x620d,	// (0x0005fb36) cell_vitu2_dropdown_list_ctrl_pane

0xee2e,	// (0x00068757) cell_vitu2_dropdown_list_char_pane_g1

0xee37,	// (0x00068760) cell_vitu2_dropdown_list_char_pane_g2

0xee40,	// (0x00068769) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x07dd,	// (0x0005a106) cell_vitu2_dropdown_list_char_pane_g

0x6235,	// (0x0005fb5e) cell_vitu2_dropdown_list_char_pane_t1

0x6243,	// (0x0005fb6c) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6243,	// (0x0005fb6c) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6250,	// (0x0005fb79) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6250,	// (0x0005fb79) cell_vitu2_dropdown_list_ctrl_pane_g2

0x625d,	// (0x0005fb86) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x625d,	// (0x0005fb86) cell_vitu2_dropdown_list_ctrl_pane_g3

0x626a,	// (0x0005fb93) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x626a,	// (0x0005fb93) cell_vitu2_dropdown_list_ctrl_pane_g4

0xeba9,	// (0x000684d2) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xeba9,	// (0x000684d2) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8aa,	// (0x000691d3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8aa,	// (0x000691d3) cell_vitu2_dropdown_list_ctrl_pane_g

0x6286,	// (0x0005fbaf) aid_size_cell_gallery2_ParamLimits

0x6286,	// (0x0005fbaf) aid_size_cell_gallery2

0x62a4,	// (0x0005fbcd) grid_gallery2_pane_ParamLimits

0x62a4,	// (0x0005fbcd) grid_gallery2_pane

0x62be,	// (0x0005fbe7) scroll_pane_cp029_ParamLimits

0x62be,	// (0x0005fbe7) scroll_pane_cp029

0x62cf,	// (0x0005fbf8) cell_gallery2_pane_ParamLimits

0x62cf,	// (0x0005fbf8) cell_gallery2_pane

0xee49,	// (0x00068772) cell_gallery2_pane_g2

0x632e,	// (0x0005fc57) cell_gallery2_pane_g3

0xee51,	// (0x0006877a) cell_gallery2_pane_g4

0xee59,	// (0x00068782) cell_gallery2_pane_g5

0xa16c,	// (0x00063a95) grid_highlight_pane_cp10

0x58f0,	// (0x0005f219) popup_vitu2_match_list_window_ParamLimits

0x5905,	// (0x0005f22e) popup_vitu2_query_window_ParamLimits

0x5905,	// (0x0005f22e) popup_vitu2_query_window

0x9792,	// (0x000630bb) bg_vitu2_candi_button_pane

0xee2e,	// (0x00068757) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xee37,	// (0x00068760) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xee40,	// (0x00068769) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6336,	// (0x0005fc5f) bg_button_pane_cp015

0x6347,	// (0x0005fc70) bg_button_pane_cp016

0x6353,	// (0x0005fc7c) bg_button_pane_cp017

0xad6f,	// (0x00064698) bg_popup_sub_pane_cp22

0xee61,	// (0x0006878a) popup_vitu2_query_window_g1

0x6391,	// (0x0005fcba) popup_vitu2_query_window_g2

0x0002,

0xf8b5,	// (0x000691de) popup_vitu2_query_window_g

0x63b3,	// (0x0005fcdc) popup_vitu2_query_window_t1_ParamLimits

0x63b3,	// (0x0005fcdc) popup_vitu2_query_window_t1

0x63e6,	// (0x0005fd0f) popup_vitu2_query_window_t2_ParamLimits

0x63e6,	// (0x0005fd0f) popup_vitu2_query_window_t2

0x63f8,	// (0x0005fd21) popup_vitu2_query_window_t3_ParamLimits

0x63f8,	// (0x0005fd21) popup_vitu2_query_window_t3

0x6420,	// (0x0005fd49) popup_vitu2_query_window_t4_ParamLimits

0x6420,	// (0x0005fd49) popup_vitu2_query_window_t4

0x6434,	// (0x0005fd5d) popup_vitu2_query_window_t5_ParamLimits

0x6434,	// (0x0005fd5d) popup_vitu2_query_window_t5

0x0006,

0xf8bc,	// (0x000691e5) popup_vitu2_query_window_t_ParamLimits

0xf8bc,	// (0x000691e5) popup_vitu2_query_window_t

0xecfa,	// (0x00068623) main_cset_text_pane

0x5d99,	// (0x0005f6c2) aid_area_touch_slider_ParamLimits

0x5db5,	// (0x0005f6de) cset_slider_pane_ParamLimits

0x5dd8,	// (0x0005f701) main_cset_slider_pane_g1_ParamLimits

0x5ded,	// (0x0005f716) main_cset_slider_pane_g2_ParamLimits

0xed1b,	// (0x00068644) main_cset_slider_pane_g3_ParamLimits

0xed1b,	// (0x00068644) main_cset_slider_pane_g3

0x5e02,	// (0x0005f72b) main_cset_slider_pane_g4_ParamLimits

0x5e02,	// (0x0005f72b) main_cset_slider_pane_g4

0x5e11,	// (0x0005f73a) main_cset_slider_pane_g5_ParamLimits

0x5e11,	// (0x0005f73a) main_cset_slider_pane_g5

0x5e1d,	// (0x0005f746) main_cset_slider_pane_g6_ParamLimits

0x5e1d,	// (0x0005f746) main_cset_slider_pane_g6

0xf820,	// (0x00069149) main_cset_slider_pane_g_ParamLimits

0xed4b,	// (0x00068674) main_cset_slider_pane_t1_ParamLimits

0x5ea9,	// (0x0005f7d2) main_cset_slider_pane_t2_ParamLimits

0x5ec3,	// (0x0005f7ec) main_cset_slider_pane_t3_ParamLimits

0x5edd,	// (0x0005f806) main_cset_slider_pane_t4_ParamLimits

0x5ef7,	// (0x0005f820) main_cset_slider_pane_t5_ParamLimits

0x5f11,	// (0x0005f83a) main_cset_slider_pane_t6_ParamLimits

0x5f26,	// (0x0005f84f) main_cset_slider_pane_t7_ParamLimits

0x5f50,	// (0x0005f879) main_cset_slider_pane_t8_ParamLimits

0x5f50,	// (0x0005f879) main_cset_slider_pane_t8

0x5f78,	// (0x0005f8a1) main_cset_slider_pane_t9_ParamLimits

0x5f78,	// (0x0005f8a1) main_cset_slider_pane_t9

0x5fa0,	// (0x0005f8c9) main_cset_slider_pane_t10_ParamLimits

0x5fa0,	// (0x0005f8c9) main_cset_slider_pane_t10

0x5fc8,	// (0x0005f8f1) main_cset_slider_pane_t11_ParamLimits

0x5fc8,	// (0x0005f8f1) main_cset_slider_pane_t11

0x5ff0,	// (0x0005f919) main_cset_slider_pane_t12_ParamLimits

0x5ff0,	// (0x0005f919) main_cset_slider_pane_t12

0x600d,	// (0x0005f936) main_cset_slider_pane_t13_ParamLimits

0x600d,	// (0x0005f936) main_cset_slider_pane_t13

0xf845,	// (0x0006916e) main_cset_slider_pane_t_ParamLimits

0x970d,	// (0x00063036) bg_popup_sub_pane_cp011

0xee6d,	// (0x00068796) main_cset_text_pane_g1

0xee75,	// (0x0006879e) main_cset_text_pane_t1

0xee83,	// (0x000687ac) main_cset_text_pane_t2

0xee91,	// (0x000687ba) main_cset_text_pane_t3

0xee9f,	// (0x000687c8) main_cset_text_pane_t4

0xeead,	// (0x000687d6) main_cset_text_pane_t5

0xeebb,	// (0x000687e4) main_cset_text_pane_t6

0xeec9,	// (0x000687f2) main_cset_text_pane_t7

0x0006,

0x0805,	// (0x0005a12e) main_cset_text_pane_t

0x9792,	// (0x000630bb) main_cam4_burst_pane

0x9792,	// (0x000630bb) main_cam5_pane

0x5cd2,	// (0x0005f5fb) bg_button_pane_cp019

0x5cdb,	// (0x0005f604) bg_button_pane_cp020

0xed27,	// (0x00068650) main_cset_slider_pane_g7_ParamLimits

0xed27,	// (0x00068650) main_cset_slider_pane_g7

0xed33,	// (0x0006865c) main_cset_slider_pane_g8_ParamLimits

0xed33,	// (0x0006865c) main_cset_slider_pane_g8

0x5e31,	// (0x0005f75a) main_cset_slider_pane_g9_ParamLimits

0x5e31,	// (0x0005f75a) main_cset_slider_pane_g9

0x5e3d,	// (0x0005f766) main_cset_slider_pane_g10_ParamLimits

0x5e3d,	// (0x0005f766) main_cset_slider_pane_g10

0x5e49,	// (0x0005f772) main_cset_slider_pane_g11_ParamLimits

0x5e49,	// (0x0005f772) main_cset_slider_pane_g11

0x5e55,	// (0x0005f77e) main_cset_slider_pane_g12_ParamLimits

0x5e55,	// (0x0005f77e) main_cset_slider_pane_g12

0x5e61,	// (0x0005f78a) main_cset_slider_pane_g13_ParamLimits

0x5e61,	// (0x0005f78a) main_cset_slider_pane_g13

0x5e6d,	// (0x0005f796) main_cset_slider_pane_g14_ParamLimits

0x5e6d,	// (0x0005f796) main_cset_slider_pane_g14

0x5e79,	// (0x0005f7a2) main_cset_slider_pane_g15_ParamLimits

0x5e79,	// (0x0005f7a2) main_cset_slider_pane_g15

0xed73,	// (0x0006869c) main_cset_slider_pane_t14_ParamLimits

0xed73,	// (0x0006869c) main_cset_slider_pane_t14

0xedac,	// (0x000686d5) main_cset_slider_pane_t15_ParamLimits

0xedac,	// (0x000686d5) main_cset_slider_pane_t15

0x649e,	// (0x0005fdc7) aid_cam4_burst_size_cell_ParamLimits

0x649e,	// (0x0005fdc7) aid_cam4_burst_size_cell

0x64be,	// (0x0005fde7) grid_cam4_burst_pane_ParamLimits

0x64be,	// (0x0005fde7) grid_cam4_burst_pane

0x64f6,	// (0x0005fe1f) linegrid_cam4_burst_pane_ParamLimits

0x64f6,	// (0x0005fe1f) linegrid_cam4_burst_pane

0xf053,	// (0x0006897c) scroll_pane_cp30_ParamLimits

0xf053,	// (0x0006897c) scroll_pane_cp30

0x651a,	// (0x0005fe43) cell_cam4_burst_pane_ParamLimits

0x651a,	// (0x0005fe43) cell_cam4_burst_pane

0xeed7,	// (0x00068800) linegrid_cam4_burst_pane_g1_ParamLimits

0xeed7,	// (0x00068800) linegrid_cam4_burst_pane_g1

0x6567,	// (0x0005fe90) linegrid_cam4_burst_pane_g2_ParamLimits

0x6567,	// (0x0005fe90) linegrid_cam4_burst_pane_g2

0xeee4,	// (0x0006880d) linegrid_cam4_burst_pane_g3_ParamLimits

0xeee4,	// (0x0006880d) linegrid_cam4_burst_pane_g3

0x0002,

0xf8cb,	// (0x000691f4) linegrid_cam4_burst_pane_g_ParamLimits

0xf8cb,	// (0x000691f4) linegrid_cam4_burst_pane_g

0x6578,	// (0x0005fea1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6578,	// (0x0005fea1) linegrid_cam4_burst_pane_g3_copy1

0xeef1,	// (0x0006881a) linegrid_cam4_burst_pane_g4_ParamLimits

0xeef1,	// (0x0006881a) linegrid_cam4_burst_pane_g4

0x6592,	// (0x0005febb) linegrid_cam4_burst_pane_g5_ParamLimits

0x6592,	// (0x0005febb) linegrid_cam4_burst_pane_g5

0x65a3,	// (0x0005fecc) linegrid_cam4_burst_pane_g6_ParamLimits

0x65a3,	// (0x0005fecc) linegrid_cam4_burst_pane_g6

0xeefe,	// (0x00068827) linegrid_cam4_burst_pane_g7_ParamLimits

0xeefe,	// (0x00068827) linegrid_cam4_burst_pane_g7

0x65ba,	// (0x0005fee3) cell_cam4_burst_pane_g1

0xef17,	// (0x00068840) main_cam5_pane_t1_ParamLimits

0xef17,	// (0x00068840) main_cam5_pane_t1

0xef29,	// (0x00068852) main_cam5_pane_t2_ParamLimits

0xef29,	// (0x00068852) main_cam5_pane_t2

0xef3b,	// (0x00068864) main_cam5_pane_t3_ParamLimits

0xef3b,	// (0x00068864) main_cam5_pane_t3

0xef4d,	// (0x00068876) main_cam5_pane_t4_ParamLimits

0xef4d,	// (0x00068876) main_cam5_pane_t4

0xef65,	// (0x0006888e) main_cam5_pane_t5_ParamLimits

0xef65,	// (0x0006888e) main_cam5_pane_t5

0xef79,	// (0x000688a2) main_cam5_pane_t6_ParamLimits

0xef79,	// (0x000688a2) main_cam5_pane_t6

0xef8d,	// (0x000688b6) main_cam5_pane_t7_ParamLimits

0xef8d,	// (0x000688b6) main_cam5_pane_t7

0xef9f,	// (0x000688c8) main_cam5_pane_t8_ParamLimits

0xef9f,	// (0x000688c8) main_cam5_pane_t8

0xefbb,	// (0x000688e4) main_cam5_pane_t9_ParamLimits

0xefbb,	// (0x000688e4) main_cam5_pane_t9

0xefcd,	// (0x000688f6) main_cam5_pane_t10_ParamLimits

0xefcd,	// (0x000688f6) main_cam5_pane_t10

0xefdf,	// (0x00068908) main_cam5_pane_t11_ParamLimits

0xefdf,	// (0x00068908) main_cam5_pane_t11

0xeff1,	// (0x0006891a) main_cam5_pane_t12_ParamLimits

0xeff1,	// (0x0006891a) main_cam5_pane_t12

0xf006,	// (0x0006892f) main_cam5_pane_t13_ParamLimits

0xf006,	// (0x0006892f) main_cam5_pane_t13

0x000c,

0x0820,	// (0x0005a149) main_cam5_pane_t_ParamLimits

0x0820,	// (0x0005a149) main_cam5_pane_t

0x1004,	// (0x0005a92d) popup_scut_keymap_window_ParamLimits

0x1004,	// (0x0005a92d) popup_scut_keymap_window

0x65cd,	// (0x0005fef6) aid_size_cell_brow_shortcut

0xa16c,	// (0x00063a95) bg_popup_window_pane_cp010

0x65d9,	// (0x0005ff02) grid_scut_pane

0x65e5,	// (0x0005ff0e) cell_scut_pane_ParamLimits

0x65e5,	// (0x0005ff0e) cell_scut_pane

0x65fc,	// (0x0005ff25) cell_scut_pane_g1

0xf023,	// (0x0006894c) cell_scut_pane_t1

0xf032,	// (0x0006895b) cell_scut_pane_t2

0x6605,	// (0x0005ff2e) cell_scut_pane_t3

0x0002,

0xf8d7,	// (0x00069200) cell_scut_pane_t

0x4525,	// (0x0005de4e) main_mup3_pane_g8_ParamLimits

0x4525,	// (0x0005de4e) main_mup3_pane_g8

0x57eb,	// (0x0005f114) area_vitu2_query_pane_ParamLimits

0x57eb,	// (0x0005f114) area_vitu2_query_pane

0x635f,	// (0x0005fc88) input_focus_pane_cp08

0xf05f,	// (0x00068988) area_vitu2_query_pane_g1

0x6613,	// (0x0005ff3c) area_vitu2_query_pane_g2

0x0001,

0xf8de,	// (0x00069207) area_vitu2_query_pane_g

0x6622,	// (0x0005ff4b) area_vitu2_query_pane_t1_ParamLimits

0x6622,	// (0x0005ff4b) area_vitu2_query_pane_t1

0x6636,	// (0x0005ff5f) area_vitu2_query_pane_t2_ParamLimits

0x6636,	// (0x0005ff5f) area_vitu2_query_pane_t2

0x664a,	// (0x0005ff73) area_vitu2_query_pane_t3_ParamLimits

0x664a,	// (0x0005ff73) area_vitu2_query_pane_t3

0x6672,	// (0x0005ff9b) area_vitu2_query_pane_t4_ParamLimits

0x6672,	// (0x0005ff9b) area_vitu2_query_pane_t4

0x669a,	// (0x0005ffc3) area_vitu2_query_pane_t5_ParamLimits

0x669a,	// (0x0005ffc3) area_vitu2_query_pane_t5

0x66c2,	// (0x0005ffeb) area_vitu2_query_pane_t6_ParamLimits

0x66c2,	// (0x0005ffeb) area_vitu2_query_pane_t6

0x0006,

0xf8e3,	// (0x0006920c) area_vitu2_query_pane_t_ParamLimits

0xf8e3,	// (0x0006920c) area_vitu2_query_pane_t

0x670e,	// (0x00060037) bg_button_pane_cp018

0x671a,	// (0x00060043) bg_button_pane_cp021

0x6726,	// (0x0006004f) bg_button_pane_cp022

0x6745,	// (0x0006006e) input_focus_pane_cp09

0xaab9,	// (0x000643e2) aid_size_touch_mv_arrow_left

0xaae2,	// (0x0006440b) aid_size_touch_mv_arrow_right

0x5e91,	// (0x0005f7ba) main_cset_slider_pane_g16_ParamLimits

0x5e91,	// (0x0005f7ba) main_cset_slider_pane_g16

0x5e9d,	// (0x0005f7c6) main_cset_slider_pane_g17_ParamLimits

0x5e9d,	// (0x0005f7c6) main_cset_slider_pane_g17

0x65ba,	// (0x0005fee3) cell_cam4_burst_pane_g1_ParamLimits

0x970d,	// (0x00063036) compa_mode_pane

0x6097,	// (0x0005f9c0) popup_vtel_slider_window_g3_ParamLimits

0x6097,	// (0x0005f9c0) popup_vtel_slider_window_g3

0x60ae,	// (0x0005f9d7) popup_vtel_slider_window_g4_ParamLimits

0x60ae,	// (0x0005f9d7) popup_vtel_slider_window_g4

0x60c5,	// (0x0005f9ee) popup_vtel_slider_window_t1_ParamLimits

0x60c5,	// (0x0005f9ee) popup_vtel_slider_window_t1

0x9792,	// (0x000630bb) main_cl_pane

0xc01c,	// (0x00065945) popup_imed_adjust2_window_ParamLimits

0xad6f,	// (0x00064698) bg_tb_trans_pane_cp05_ParamLimits

0xe838,	// (0x00068161) popup_imed_adjust2_window_g1_ParamLimits

0xe847,	// (0x00068170) popup_imed_adjust2_window_g2_ParamLimits

0xe847,	// (0x00068170) popup_imed_adjust2_window_g2

0xe853,	// (0x0006817c) popup_imed_adjust2_window_g3_ParamLimits

0xe853,	// (0x0006817c) popup_imed_adjust2_window_g3

0x0002,

0x05bd,	// (0x00059ee6) popup_imed_adjust2_window_g_ParamLimits

0x05bd,	// (0x00059ee6) popup_imed_adjust2_window_g

0xe85f,	// (0x00068188) popup_imed_adjust2_window_t1_ParamLimits

0xe877,	// (0x000681a0) slider_imed_adjust_pane_ParamLimits

0xe88b,	// (0x000681b4) slider_imed_adjust_pane_g1_ParamLimits

0xe89b,	// (0x000681c4) slider_imed_adjust_pane_g2_ParamLimits

0xe8ab,	// (0x000681d4) slider_imed_adjust_pane_g3_ParamLimits

0xe8bc,	// (0x000681e5) slider_imed_adjust_pane_g4_ParamLimits

0x05c4,	// (0x00059eed) slider_imed_adjust_pane_g_ParamLimits

0x5574,	// (0x0005ee9d) aid_touch_area_cam4_ParamLimits

0x5574,	// (0x0005ee9d) aid_touch_area_cam4

0xdd44,	// (0x0006766d) battery_pane_cp01

0x5643,	// (0x0005ef6c) main_camera4_pane_g6_ParamLimits

0x5643,	// (0x0005ef6c) main_camera4_pane_g6

0x566d,	// (0x0005ef96) main_camera4_pane_t2_ParamLimits

0x566d,	// (0x0005ef96) main_camera4_pane_t2

0x0001,

0xf79a,	// (0x000690c3) main_camera4_pane_t_ParamLimits

0xf79a,	// (0x000690c3) main_camera4_pane_t

0x56a2,	// (0x0005efcb) aid_touch_area_vid4_ParamLimits

0x56a2,	// (0x0005efcb) aid_touch_area_vid4

0x56f6,	// (0x0005f01f) main_video4_pane_g5_ParamLimits

0x56f6,	// (0x0005f01f) main_video4_pane_g5

0x571b,	// (0x0005f044) vid4_progress_pane_ParamLimits

0x571b,	// (0x0005f044) vid4_progress_pane

0xed3f,	// (0x00068668) main_cset_slider_pane_g18_ParamLimits

0xed3f,	// (0x00068668) main_cset_slider_pane_g18

0xef0b,	// (0x00068834) cell_cam4_burst_pane_g2_ParamLimits

0xef0b,	// (0x00068834) cell_cam4_burst_pane_g2

0x0001,

0xf8d2,	// (0x000691fb) cell_cam4_burst_pane_g_ParamLimits

0xf8d2,	// (0x000691fb) cell_cam4_burst_pane_g

0x9f27,	// (0x00063850) bg_cl_pane_ParamLimits

0x9f27,	// (0x00063850) bg_cl_pane

0x6755,	// (0x0006007e) cl_header_pane_ParamLimits

0x6755,	// (0x0006007e) cl_header_pane

0x6769,	// (0x00060092) cl_listscroll_pane_ParamLimits

0x6769,	// (0x00060092) cl_listscroll_pane

0x6779,	// (0x000600a2) bg_cl_pane_g1

0x6781,	// (0x000600aa) bg_cl_pane_g2

0x6789,	// (0x000600b2) bg_cl_pane_g3

0x6791,	// (0x000600ba) bg_cl_pane_g4

0x6799,	// (0x000600c2) bg_cl_pane_g5

0x67a1,	// (0x000600ca) bg_cl_pane_g6

0x67a9,	// (0x000600d2) bg_cl_pane_g7

0x67b1,	// (0x000600da) bg_cl_pane_g8

0x67b9,	// (0x000600e2) bg_cl_pane_g9

0x0008,

0xf8f2,	// (0x0006921b) bg_cl_pane_g

0x67c1,	// (0x000600ea) aid_height_cl_leading_ParamLimits

0x67c1,	// (0x000600ea) aid_height_cl_leading

0x67cd,	// (0x000600f6) aid_height_cl_text_ParamLimits

0x67cd,	// (0x000600f6) aid_height_cl_text

0x9e2c,	// (0x00063755) bg_cl_header_pane_ParamLimits

0x9e2c,	// (0x00063755) bg_cl_header_pane

0x67ec,	// (0x00060115) cl_header_pane_g1_ParamLimits

0x67ec,	// (0x00060115) cl_header_pane_g1

0x6802,	// (0x0006012b) cl_header_pane_t1_ParamLimits

0x6802,	// (0x0006012b) cl_header_pane_t1

0x681b,	// (0x00060144) cl_list_pane

0xed12,	// (0x0006863b) hc_scroll_pane_cp01

0xa39d,	// (0x00063cc6) bg_cl_header_pane_g1

0xebf8,	// (0x00068521) bg_cl_header_pane_g2

0xa3bd,	// (0x00063ce6) bg_cl_header_pane_g3

0xec08,	// (0x00068531) bg_cl_header_pane_g4

0xec00,	// (0x00068529) bg_cl_header_pane_g5

0xee26,	// (0x0006874f) bg_cl_header_pane_g6

0xec20,	// (0x00068549) bg_cl_header_pane_g7

0xec28,	// (0x00068551) bg_cl_header_pane_g8

0xec18,	// (0x00068541) bg_cl_header_pane_g9

0x0008,

0xf905,	// (0x0006922e) bg_cl_header_pane_g

0x6824,	// (0x0006014d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6824,	// (0x0006014d) hc_cl_list_double_graphic_heading_pane

0x6835,	// (0x0006015e) hc_cl_list_single_graphic_pane_ParamLimits

0x6835,	// (0x0006015e) hc_cl_list_single_graphic_pane

0x684b,	// (0x00060174) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x684b,	// (0x00060174) hc_cl_list_single_graphic_pane_g1

0x6857,	// (0x00060180) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6857,	// (0x00060180) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf918,	// (0x00069241) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf918,	// (0x00069241) hc_cl_list_single_graphic_pane_g

0x686b,	// (0x00060194) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x686b,	// (0x00060194) hc_cl_list_single_graphic_pane_t1

0x684b,	// (0x00060174) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x684b,	// (0x00060174) hc_cl_list_double_graphic_heading_pane_g1

0x6880,	// (0x000601a9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6880,	// (0x000601a9) hc_cl_list_double_graphic_heading_pane_g2

0x6894,	// (0x000601bd) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6894,	// (0x000601bd) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf91d,	// (0x00069246) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf91d,	// (0x00069246) hc_cl_list_double_graphic_heading_pane_g

0x68a8,	// (0x000601d1) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x68a8,	// (0x000601d1) hc_cl_list_double_graphic_heading_pane_t1

0x68bd,	// (0x000601e6) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x68bd,	// (0x000601e6) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf924,	// (0x0006924d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf924,	// (0x0006924d) hc_cl_list_double_graphic_heading_pane_t

0xdeb0,	// (0x000677d9) vid4_progress_pane_g1

0xdec0,	// (0x000677e9) vid4_progress_pane_g2

0x68d2,	// (0x000601fb) vid4_progress_pane_g3

0xded0,	// (0x000677f9) vid4_progress_pane_g4

0x0004,

0xf929,	// (0x00069252) vid4_progress_pane_g

0x68e4,	// (0x0006020d) vid4_progress_pane_t1

0xdee8,	// (0x00067811) vid4_progress_pane_t2

0x0002,

0xf934,	// (0x0006925d) vid4_progress_pane_t

0x68fc,	// (0x00060225) wait_bar_pane_cp07

0xe15e,	// (0x00067a87) blid_firmament_pane_ParamLimits

0xe1a1,	// (0x00067aca) popup_blid_sat_info2_window_g1

0xe1c5,	// (0x00067aee) popup_blid_sat_info2_window_t3

0xe1d3,	// (0x00067afc) popup_blid_sat_info2_window_t4

0xe1e1,	// (0x00067b0a) popup_blid_sat_info2_window_t5

0xe1ef,	// (0x00067b18) popup_blid_sat_info2_window_t6

0xe1ff,	// (0x00067b28) popup_blid_sat_info2_window_t7

0xe20d,	// (0x00067b36) popup_blid_sat_info2_window_t8

0xe21b,	// (0x00067b44) popup_blid_sat_info2_window_t9

0xe229,	// (0x00067b52) popup_blid_sat_info2_window_t10

0xe2ea,	// (0x00067c13) aid_firma_cardinal_ParamLimits

0xe2fe,	// (0x00067c27) blid_firmament_pane_t1_ParamLimits

0xe315,	// (0x00067c3e) blid_firmament_pane_t2_ParamLimits

0xe32c,	// (0x00067c55) blid_firmament_pane_t3_ParamLimits

0xe343,	// (0x00067c6c) blid_firmament_pane_t4_ParamLimits

0x04b6,	// (0x00059ddf) blid_firmament_pane_t_ParamLimits

0xe35a,	// (0x00067c83) blid_sat_info_pane_ParamLimits

0x9784,	// (0x000630ad) main_cam_set_pane_ParamLimits

0x4d0b,	// (0x0005e634) aid_size_cell_colour_35_ParamLimits

0x4d2b,	// (0x0005e654) aid_size_cell_colour_112_ParamLimits

0x4d4b,	// (0x0005e674) aid_size_cell_effect_ParamLimits

0xad6f,	// (0x00064698) bg_tb_trans_pane_cp02_ParamLimits

0xa628,	// (0x00063f51) heading_imed_pane_ParamLimits

0x4d6b,	// (0x0005e694) listscroll_imed_pane_ParamLimits

0xb70b,	// (0x00065034) popup_call2_audio_first_window_g5_ParamLimits

0xb70b,	// (0x00065034) popup_call2_audio_first_window_g5

0x5190,	// (0x0005eab9) aid_size_touch_image3_arrow_left_ParamLimits

0x5190,	// (0x0005eab9) aid_size_touch_image3_arrow_left

0x51bc,	// (0x0005eae5) aid_size_touch_image3_arrow_right_ParamLimits

0x51bc,	// (0x0005eae5) aid_size_touch_image3_arrow_right

0xdefd,	// (0x00067826) vid4_progress_pane_t3

0x4f10,	// (0x0005e839) main_hwr_training_symbol_option_pane_ParamLimits

0x4f10,	// (0x0005e839) main_hwr_training_symbol_option_pane

0xea54,	// (0x0006837d) popup_hwr_training_preview_window_ParamLimits

0xea54,	// (0x0006837d) popup_hwr_training_preview_window

0x4f30,	// (0x0005e859) hwr_training_navi_pane_g5_ParamLimits

0x4f30,	// (0x0005e859) hwr_training_navi_pane_g5

0xebe6,	// (0x0006850f) popup_char_count_window

0x9784,	// (0x000630ad) bg_popup_sub_pane_cp20_ParamLimits

0x61d5,	// (0x0005fafe) list_vitu2_match_list_pane_ParamLimits

0x61e1,	// (0x0005fb0a) vitu2_page_scroll_pane_ParamLimits

0x61e1,	// (0x0005fb0a) vitu2_page_scroll_pane

0x6945,	// (0x0006026e) list_single_hwr_training_symbol_option_pane_ParamLimits

0x6945,	// (0x0006026e) list_single_hwr_training_symbol_option_pane

0x6958,	// (0x00060281) list_single_hwr_training_symbol_option_pane_g1

0x6960,	// (0x00060289) list_single_hwr_training_symbol_option_pane_t1

0x696e,	// (0x00060297) bg_button_pane_cp023

0x6977,	// (0x000602a0) bg_button_pane_cp024

0x69aa,	// (0x000602d3) vitu2_page_scroll_pane_g1

0x69b2,	// (0x000602db) vitu2_page_scroll_pane_g2

0x0001,

0xf93b,	// (0x00069264) vitu2_page_scroll_pane_g

0x69ba,	// (0x000602e3) vitu2_page_scroll_pane_t1

0xe0ca,	// (0x000679f3) popup_char_count_window_g1

0x69c9,	// (0x000602f2) popup_char_count_window_g2

0x69d2,	// (0x000602fb) popup_char_count_window_g3

0x0002,

0xf940,	// (0x00069269) popup_char_count_window_g

0x69db,	// (0x00060304) popup_char_count_window_t1

0x9792,	// (0x000630bb) main_vded2_pane

0xe824,	// (0x0006814d) aid_size_cell_imed_line

0xe82e,	// (0x00068157) grid_imed_line_width_pane

0xddfc,	// (0x00067725) vid4_indicators_pane_g4

0x69e9,	// (0x00060312) cell_imed_line_width_pane_ParamLimits

0x69e9,	// (0x00060312) cell_imed_line_width_pane

0x69fd,	// (0x00060326) cell_imed_line_width_pane_g1

0x6a06,	// (0x0006032f) cell_imed_line_width_pane_g2

0x0001,

0xf947,	// (0x00069270) cell_imed_line_width_pane_g

0x6a0e,	// (0x00060337) main_vded2_pane_g1_ParamLimits

0x6a0e,	// (0x00060337) main_vded2_pane_g1

0x6a24,	// (0x0006034d) main_vded2_pane_g2_ParamLimits

0x6a24,	// (0x0006034d) main_vded2_pane_g2

0x0001,

0xf94c,	// (0x00069275) main_vded2_pane_g_ParamLimits

0xf94c,	// (0x00069275) main_vded2_pane_g

0x6a36,	// (0x0006035f) vded2_slider_pane_ParamLimits

0x6a36,	// (0x0006035f) vded2_slider_pane

0x6a46,	// (0x0006036f) aid_size_touch_vded2_end

0x6a50,	// (0x00060379) aid_size_touch_vded2_playhead

0x6a5a,	// (0x00060383) aid_size_touch_vded2_start

0x6a62,	// (0x0006038b) vded2_slider_bg_pane

0x6a6b,	// (0x00060394) vded2_slider_pane_g1

0x6a74,	// (0x0006039d) vded2_slider_pane_g2

0x6a7c,	// (0x000603a5) vded2_slider_pane_g3

0x0002,

0xf951,	// (0x0006927a) vded2_slider_pane_g

0x6a87,	// (0x000603b0) vded2_slider_bg_pane_g1

0x6a90,	// (0x000603b9) vded2_slider_bg_pane_g2

0x6a99,	// (0x000603c2) vded2_slider_bg_pane_g3

0x0002,

0xf958,	// (0x00069281) vded2_slider_bg_pane_g

0x3241,	// (0x0005cb6a) aid_postcard_touch_down_pane_ParamLimits

0x3241,	// (0x0005cb6a) aid_postcard_touch_down_pane

0x3257,	// (0x0005cb80) aid_postcard_touch_up_pane_ParamLimits

0x3257,	// (0x0005cb80) aid_postcard_touch_up_pane

0x9792,	// (0x000630bb) main_blid2_pane

0xc002,	// (0x0006592b) popup_blid2_search_window

0x970d,	// (0x00063036) blid2_gps_pane

0x970d,	// (0x00063036) blid2_navig_pane

0x970d,	// (0x00063036) blid2_search_pane

0x970d,	// (0x00063036) blid2_tripm_pane

0x6aa2,	// (0x000603cb) blid2_search_pane_g1_ParamLimits

0x6aa2,	// (0x000603cb) blid2_search_pane_g1

0x6abc,	// (0x000603e5) blid2_search_pane_t1_ParamLimits

0x6abc,	// (0x000603e5) blid2_search_pane_t1

0x6ace,	// (0x000603f7) aid_size_cell_blid2_gps_ParamLimits

0x6ace,	// (0x000603f7) aid_size_cell_blid2_gps

0x6ae6,	// (0x0006040f) blid2_gps_pane_g1_ParamLimits

0x6ae6,	// (0x0006040f) blid2_gps_pane_g1

0x6afa,	// (0x00060423) grid_blid2_satellite_pane_ParamLimits

0x6afa,	// (0x00060423) grid_blid2_satellite_pane

0x6b14,	// (0x0006043d) blid2_navig_pane_g1_ParamLimits

0x6b14,	// (0x0006043d) blid2_navig_pane_g1

0x6b20,	// (0x00060449) blid2_navig_pane_t1_ParamLimits

0x6b20,	// (0x00060449) blid2_navig_pane_t1

0x6b3b,	// (0x00060464) blid2_navig_pane_t2_ParamLimits

0x6b3b,	// (0x00060464) blid2_navig_pane_t2

0x0001,

0xf95f,	// (0x00069288) blid2_navig_pane_t_ParamLimits

0xf95f,	// (0x00069288) blid2_navig_pane_t

0x6b56,	// (0x0006047f) blid2_navig_ring_pane_ParamLimits

0x6b56,	// (0x0006047f) blid2_navig_ring_pane

0x6b6f,	// (0x00060498) blid2_speed_pane_ParamLimits

0x6b6f,	// (0x00060498) blid2_speed_pane

0x6b7b,	// (0x000604a4) blid2_tripm_pane_g1_ParamLimits

0x6b7b,	// (0x000604a4) blid2_tripm_pane_g1

0x6b94,	// (0x000604bd) blid2_tripm_pane_g2_ParamLimits

0x6b94,	// (0x000604bd) blid2_tripm_pane_g2

0x6ba8,	// (0x000604d1) blid2_tripm_pane_g3_ParamLimits

0x6ba8,	// (0x000604d1) blid2_tripm_pane_g3

0x6bbc,	// (0x000604e5) blid2_tripm_pane_g4_ParamLimits

0x6bbc,	// (0x000604e5) blid2_tripm_pane_g4

0x6bd0,	// (0x000604f9) blid2_tripm_pane_g5_ParamLimits

0x6bd0,	// (0x000604f9) blid2_tripm_pane_g5

0x0005,

0xf964,	// (0x0006928d) blid2_tripm_pane_g_ParamLimits

0xf964,	// (0x0006928d) blid2_tripm_pane_g

0x6bf6,	// (0x0006051f) blid2_tripm_pane_t1_ParamLimits

0x6bf6,	// (0x0006051f) blid2_tripm_pane_t1

0x6c11,	// (0x0006053a) blid2_tripm_pane_t2_ParamLimits

0x6c11,	// (0x0006053a) blid2_tripm_pane_t2

0x6c2a,	// (0x00060553) blid2_tripm_pane_t3_ParamLimits

0x6c2a,	// (0x00060553) blid2_tripm_pane_t3

0x0003,

0xf971,	// (0x0006929a) blid2_tripm_pane_t_ParamLimits

0xf971,	// (0x0006929a) blid2_tripm_pane_t

0x6c71,	// (0x0006059a) cell_blid2_satellite_pane_ParamLimits

0x6c71,	// (0x0006059a) cell_blid2_satellite_pane

0x6c8f,	// (0x000605b8) cell_blid2_satellite_pane_g1

0x6c98,	// (0x000605c1) cell_blid2_satellite_pane_t1

0xa1ac,	// (0x00063ad5) blid2_speed_pane_g1

0x6ca6,	// (0x000605cf) blid2_speed_pane_t1

0x6cb4,	// (0x000605dd) blid2_speed_pane_t2

0x0001,

0xf97a,	// (0x000692a3) blid2_speed_pane_t

0xa1ac,	// (0x00063ad5) blid2_navig_ring_pane_g1

0x6cc2,	// (0x000605eb) blid2_navig_ring_pane_g2

0x6cca,	// (0x000605f3) blid2_navig_ring_pane_g3

0x6cd2,	// (0x000605fb) blid2_navig_ring_pane_g4

0x6cda,	// (0x00060603) blid2_navig_ring_pane_g5

0x0004,

0xf97f,	// (0x000692a8) blid2_navig_ring_pane_g

0x970d,	// (0x00063036) bg_popup_window_pane_cp011

0x6ce2,	// (0x0006060b) popup_blid2_search_window_g1

0x6cea,	// (0x00060613) popup_blid2_search_window_t1

0x6cf8,	// (0x00060621) popup_blid2_search_window_t2

0x0001,

0xf98a,	// (0x000692b3) popup_blid2_search_window_t

0xa2ac,	// (0x00063bd5) main_browser_pane_g1

0x9f27,	// (0x00063850) main_browser_pane_ParamLimits

0x9784,	// (0x000630ad) bg_button_pane_cp011_ParamLimits

0x5a68,	// (0x0005f391) cell_vitu2_function_pane_g1_ParamLimits

0xad6f,	// (0x00064698) bg_popup_sub_pane_cp22_ParamLimits

0x635f,	// (0x0005fc88) input_focus_pane_cp08_ParamLimits

0x637a,	// (0x0005fca3) popup_vitu2_query_button_pane_ParamLimits

0x637a,	// (0x0005fca3) popup_vitu2_query_button_pane

0x6389,	// (0x0005fcb2) popup_vitu2_query_input_button_pane

0xee61,	// (0x0006878a) popup_vitu2_query_window_g1_ParamLimits

0x6391,	// (0x0005fcba) popup_vitu2_query_window_g2_ParamLimits

0xf8b5,	// (0x000691de) popup_vitu2_query_window_g_ParamLimits

0x970d,	// (0x00063036) bg_button_pane_cp026

0x6d06,	// (0x0006062f) popup_vitu2_query_input_button_pane_g1

0x970d,	// (0x00063036) bg_button_pane_cp025

0x6d0e,	// (0x00060637) popup_vitu2_query_button_pane_t1

0x4182,	// (0x0005daab) main_mp3_pane_t6

0x4190,	// (0x0005dab9) popup_slider_window_cp01

0xdd60,	// (0x00067689) cam4_battery_pane

0xddb9,	// (0x000676e2) cam4_battery_pane_cp02

0xdea8,	// (0x000677d1) cam4_battery_pane_cp01

0xdea8,	// (0x000677d1) cam4_battery_pane_cp03

0xe0d3,	// (0x000679fc) cam4_battery_pane_g1

0xa1ac,	// (0x00063ad5) cam4_battery_pane_g2

0x0001,

0xf98f,	// (0x000692b8) cam4_battery_pane_g

0xe237,	// (0x00067b60) popup_blid_sat_info2_window_t11

0xaab9,	// (0x000643e2) aid_size_touch_mv_arrow_left_ParamLimits

0xaae2,	// (0x0006440b) aid_size_touch_mv_arrow_right_ParamLimits

0xab40,	// (0x00064469) navi_pane_g1_ParamLimits

0xab4c,	// (0x00064475) navi_pane_g2_ParamLimits

0xab7a,	// (0x000644a3) navi_pane_g3_ParamLimits

0xf35a,	// (0x00068c83) navi_pane_g_ParamLimits

0x2e7c,	// (0x0005c7a5) navi_pane_mv_t1_ParamLimits

0x4d77,	// (0x0005e6a0) grid_imed_effect_pane_ParamLimits

0x1c0b,	// (0x0005b534) aid_placing_vt_slider_lsc

0xa1fb,	// (0x00063b24) aid_placing_vt_slider_prt

0x9e2c,	// (0x00063755) bg_tb_trans_pane_cp01_ParamLimits

0xe4b7,	// (0x00067de0) popup_image_details_window_g1_ParamLimits

0xe4ca,	// (0x00067df3) popup_image_details_window_g2_ParamLimits

0xe4df,	// (0x00067e08) popup_image_details_window_g3_ParamLimits

0xe4df,	// (0x00067e08) popup_image_details_window_g3

0x04f6,	// (0x00059e1f) popup_image_details_window_g_ParamLimits

0xe4f3,	// (0x00067e1c) popup_image_details_window_t1_ParamLimits

0xe505,	// (0x00067e2e) popup_image_details_window_t2_ParamLimits

0xe51e,	// (0x00067e47) popup_image_details_window_t3_ParamLimits

0xe532,	// (0x00067e5b) popup_image_details_window_t4_ParamLimits

0xe54d,	// (0x00067e76) popup_image_details_window_t5_ParamLimits

0x04fd,	// (0x00059e26) popup_image_details_window_t_ParamLimits

0x67d9,	// (0x00060102) cl_header_name_pane_ParamLimits

0x67d9,	// (0x00060102) cl_header_name_pane

0x6d1c,	// (0x00060645) cl_header_name_pane_t1_ParamLimits

0x6d1c,	// (0x00060645) cl_header_name_pane_t1

0x6d3d,	// (0x00060666) cl_header_name_pane_t2_ParamLimits

0x6d3d,	// (0x00060666) cl_header_name_pane_t2

0x6d7f,	// (0x000606a8) cl_header_name_pane_t3_ParamLimits

0x6d7f,	// (0x000606a8) cl_header_name_pane_t3

0x0002,

0xf994,	// (0x000692bd) cl_header_name_pane_t_ParamLimits

0xf994,	// (0x000692bd) cl_header_name_pane_t

0xac09,	// (0x00064532) navi_pane_mv_g2_ParamLimits

0xebce,	// (0x000684f7) field_vitu2_entry_pane_g1_ParamLimits

0xebda,	// (0x00068503) field_vitu2_entry_pane_g2_ParamLimits

0xad39,	// (0x00064662) field_vitu2_entry_pane_g3_ParamLimits

0xad39,	// (0x00064662) field_vitu2_entry_pane_g3

0xf7cc,	// (0x000690f5) field_vitu2_entry_pane_g_ParamLimits

0x59e4,	// (0x0005f30d) cell_vitu2_itu_pane_g1_ParamLimits

0x59fc,	// (0x0005f325) cell_vitu2_itu_pane_g2_ParamLimits

0x59fc,	// (0x0005f325) cell_vitu2_itu_pane_g2

0x0001,

0xf7d8,	// (0x00069101) cell_vitu2_itu_pane_g_ParamLimits

0xf7d8,	// (0x00069101) cell_vitu2_itu_pane_g

0x9784,	// (0x000630ad) bg_vkb2_func_pane_cp05_ParamLimits

0x9784,	// (0x000630ad) bg_vkb2_func_pane_cp05

0x9784,	// (0x000630ad) bg_vkb2_func_pane_cp03

0x9784,	// (0x000630ad) bg_vkb2_func_pane_cp04

0x9784,	// (0x000630ad) bg_vkb2_func_pane_cp10_ParamLimits

0x9784,	// (0x000630ad) bg_vkb2_func_pane_cp10

0x6735,	// (0x0006005e) bg_vkb2_func_pane_cp08

0x670e,	// (0x00060037) bg_vkb2_func_pane_cp06

0x671a,	// (0x00060043) bg_vkb2_func_pane_cp07

0x6980,	// (0x000602a9) bg_vkb2_func_pane_cp11_ParamLimits

0x6980,	// (0x000602a9) bg_vkb2_func_pane_cp11

0x6995,	// (0x000602be) bg_vkb2_func_pane_cp12_ParamLimits

0x6995,	// (0x000602be) bg_vkb2_func_pane_cp12

0x970d,	// (0x00063036) bg_vkb2_func_pane_cp09

0xebf8,	// (0x00068521) bg_vkb2_func_pane_g1

0xa3bd,	// (0x00063ce6) bg_vkb2_func_pane_g2

0xec00,	// (0x00068529) bg_vkb2_func_pane_g3

0xec08,	// (0x00068531) bg_vkb2_func_pane_g4

0xee26,	// (0x0006874f) bg_vkb2_func_pane_g5

0xec20,	// (0x00068549) bg_vkb2_func_pane_g6

0xec28,	// (0x00068551) bg_vkb2_func_pane_g7

0xec18,	// (0x00068541) bg_vkb2_func_pane_g8

0xa39d,	// (0x00063cc6) bg_vkb2_func_pane_g9

0x0008,

0xf99b,	// (0x000692c4) bg_vkb2_func_pane_g

0x6be4,	// (0x0006050d) blid2_tripm_pane_g6_ParamLimits

0x6be4,	// (0x0006050d) blid2_tripm_pane_g6

0xeb12,	// (0x0006843b) mp4_progress_pane_g1

0x6c5d,	// (0x00060586) blid2_tripm_values_pane_ParamLimits

0x6c5d,	// (0x00060586) blid2_tripm_values_pane

0x6db0,	// (0x000606d9) blid2_tripm_values_pane_t1

0x6dbe,	// (0x000606e7) blid2_tripm_values_pane_t2

0x6dcc,	// (0x000606f5) blid2_tripm_values_pane_t3

0x6dda,	// (0x00060703) blid2_tripm_values_pane_t4

0x6de8,	// (0x00060711) blid2_tripm_values_pane_t5

0x6df6,	// (0x0006071f) blid2_tripm_values_pane_t6

0x6e04,	// (0x0006072d) blid2_tripm_values_pane_t7

0x6e12,	// (0x0006073b) blid2_tripm_values_pane_t8

0x6e20,	// (0x00060749) blid2_tripm_values_pane_t9

0x0008,

0xf9ae,	// (0x000692d7) blid2_tripm_values_pane_t

0x1c4d,	// (0x0005b576) call_video_pane_t1_ParamLimits

0x1c6b,	// (0x0005b594) call_video_pane_t2_ParamLimits

0xf208,	// (0x00068b31) call_video_pane_t_ParamLimits

0x313d,	// (0x0005ca66) msg_header_pane_g1_ParamLimits

0xae24,	// (0x0006474d) msg_header_pane_g2_ParamLimits

0xae24,	// (0x0006474d) msg_header_pane_g2

0x0001,

0xf3fd,	// (0x00068d26) msg_header_pane_g_ParamLimits

0xf3fd,	// (0x00068d26) msg_header_pane_g

0x9f27,	// (0x00063850) main_clock2_pane_ParamLimits

0x4a78,	// (0x0005e3a1) grid_clock2_toolbar_pane_ParamLimits

0x4a78,	// (0x0005e3a1) grid_clock2_toolbar_pane

0x4a78,	// (0x0005e3a1) listscroll_clock2_pane_ParamLimits

0x4a78,	// (0x0005e3a1) listscroll_clock2_pane

0x4b5c,	// (0x0005e485) main_clock2_pane_t3_ParamLimits

0x4b5c,	// (0x0005e485) main_clock2_pane_t3

0x4b80,	// (0x0005e4a9) main_clock2_pane_t4_ParamLimits

0x4b80,	// (0x0005e4a9) main_clock2_pane_t4

0x6e2e,	// (0x00060757) cell_clock2_toolbar_pane

0x6e36,	// (0x0006075f) cell_clock2_toolbar_pane_cp01

0x6e36,	// (0x0006075f) cell_clock2_toolbar_pane_cp02

0x6e3e,	// (0x00060767) cell_clock2_toolbar_pane_cp03

0x6e46,	// (0x0006076f) list_clock2_pane

0xaa2f,	// (0x00064358) scroll_pane_cp10

0x6e4e,	// (0x00060777) list_single_clock2_pane_ParamLimits

0x6e4e,	// (0x00060777) list_single_clock2_pane

0xa16c,	// (0x00063a95) list_highlight_pane_cp08

0x6e5b,	// (0x00060784) list_single_clock2_pane_t1

0x6e69,	// (0x00060792) list_single_clock2_pane_t2

0x0001,

0xf9c1,	// (0x000692ea) list_single_clock2_pane_t

0x970d,	// (0x00063036) bg_button_pane_cp10

0x6e77,	// (0x000607a0) cell_clock2_toolbar_pane_g1

0x31cd,	// (0x0005caf6) aid_main_viewer_pane_g1_ParamLimits

0x31cd,	// (0x0005caf6) aid_main_viewer_pane_g1

0x31db,	// (0x0005cb04) aid_main_viewer_pane_g2_ParamLimits

0x31db,	// (0x0005cb04) aid_main_viewer_pane_g2

0x31e9,	// (0x0005cb12) aid_main_viewer_pane_g3_ParamLimits

0x31e9,	// (0x0005cb12) aid_main_viewer_pane_g3

0x31f8,	// (0x0005cb21) aid_main_viewer_pane_g4_ParamLimits

0x31f8,	// (0x0005cb21) aid_main_viewer_pane_g4

0x0003,

0xf40e,	// (0x00068d37) aid_main_viewer_pane_g_ParamLimits

0xf40e,	// (0x00068d37) aid_main_viewer_pane_g

0x3b3f,	// (0x0005d468) main_calc_pane_ParamLimits

0x3b65,	// (0x0005d48e) main_dialer2_pane_ParamLimits

0x9792,	// (0x000630bb) main_cam6_pane

0x9792,	// (0x000630bb) main_vid6_pane

0x4a84,	// (0x0005e3ad) listscroll_gen_pane_cp06_ParamLimits

0x4a84,	// (0x0005e3ad) listscroll_gen_pane_cp06

0x4ba3,	// (0x0005e4cc) main_clock2_pane_t5_ParamLimits

0x4ba3,	// (0x0005e4cc) main_clock2_pane_t5

0x4c01,	// (0x0005e52a) aid_call2_pane_cp10_ParamLimits

0x4c13,	// (0x0005e53c) aid_call_pane_cp10_ParamLimits

0xaaad,	// (0x000643d6) popup_clock_analogue_window_cp10_g1_ParamLimits

0xaaad,	// (0x000643d6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4c25,	// (0x0005e54e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4c25,	// (0x0005e54e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xaaad,	// (0x000643d6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6c6,	// (0x00068fef) popup_clock_analogue_window_cp10_g_ParamLimits

0x4c3b,	// (0x0005e564) popup_clock_analogue_window_cp10_t1_ParamLimits

0x513d,	// (0x0005ea66) cell_dialer2_keypad_pane_g2_ParamLimits

0x513d,	// (0x0005ea66) cell_dialer2_keypad_pane_g2

0x0001,

0xf76b,	// (0x00069094) cell_dialer2_keypad_pane_g_ParamLimits

0xf76b,	// (0x00069094) cell_dialer2_keypad_pane_g

0x5159,	// (0x0005ea82) cell_dialer2_keypad_pane_t1

0x5d8b,	// (0x0005f6b4) main_cset_text2_pane_ParamLimits

0x5d8b,	// (0x0005f6b4) main_cset_text2_pane

0xf05f,	// (0x00068988) area_vitu2_query_pane_g1_ParamLimits

0x6613,	// (0x0005ff3c) area_vitu2_query_pane_g2_ParamLimits

0xf8de,	// (0x00069207) area_vitu2_query_pane_g_ParamLimits

0x66ea,	// (0x00060013) area_vitu2_query_pane_t7_ParamLimits

0x66ea,	// (0x00060013) area_vitu2_query_pane_t7

0x670e,	// (0x00060037) bg_button_pane_cp018_ParamLimits

0x671a,	// (0x00060043) bg_button_pane_cp021_ParamLimits

0x6726,	// (0x0006004f) bg_button_pane_cp022_ParamLimits

0x6735,	// (0x0006005e) bg_vkb2_func_pane_cp08_ParamLimits

0x670e,	// (0x00060037) bg_vkb2_func_pane_cp06_ParamLimits

0x671a,	// (0x00060043) bg_vkb2_func_pane_cp07_ParamLimits

0x6745,	// (0x0006006e) input_focus_pane_cp09_ParamLimits

0xdf12,	// (0x0006783b) cam6_autofocus_pane_ParamLimits

0xdf12,	// (0x0006783b) cam6_autofocus_pane

0x6e7f,	// (0x000607a8) cam6_image_uncrop_pane_ParamLimits

0x6e7f,	// (0x000607a8) cam6_image_uncrop_pane

0x6e8e,	// (0x000607b7) cam6_indi_pane_ParamLimits

0x6e8e,	// (0x000607b7) cam6_indi_pane

0x6ea4,	// (0x000607cd) cam6_mode_pane_ParamLimits

0x6ea4,	// (0x000607cd) cam6_mode_pane

0x6eb6,	// (0x000607df) cam6_timer_pane_ParamLimits

0x6eb6,	// (0x000607df) cam6_timer_pane

0x6ec2,	// (0x000607eb) cam6_zoom_pane_ParamLimits

0x6ec2,	// (0x000607eb) cam6_zoom_pane

0x6ece,	// (0x000607f7) cam6_mode_pane_g1_ParamLimits

0x6ece,	// (0x000607f7) cam6_mode_pane_g1

0x6ede,	// (0x00060807) cam6_mode_pane_g2_ParamLimits

0x6ede,	// (0x00060807) cam6_mode_pane_g2

0x6eee,	// (0x00060817) cam6_mode_pane_g3_ParamLimits

0x6eee,	// (0x00060817) cam6_mode_pane_g3

0x6efe,	// (0x00060827) cam6_mode_pane_g4_ParamLimits

0x6efe,	// (0x00060827) cam6_mode_pane_g4

0x0003,

0xf9c6,	// (0x000692ef) cam6_mode_pane_g_ParamLimits

0xf9c6,	// (0x000692ef) cam6_mode_pane_g

0x6f0e,	// (0x00060837) bg_tb_trans_pane_cp08_ParamLimits

0x6f0e,	// (0x00060837) bg_tb_trans_pane_cp08

0x6f1c,	// (0x00060845) cam6_battery_pane_ParamLimits

0x6f1c,	// (0x00060845) cam6_battery_pane

0x6f32,	// (0x0006085b) cam6_indi_pane_g1_ParamLimits

0x6f32,	// (0x0006085b) cam6_indi_pane_g1

0x6f44,	// (0x0006086d) cam6_indi_pane_g2_ParamLimits

0x6f44,	// (0x0006086d) cam6_indi_pane_g2

0xc0e8,	// (0x00065a11) cam6_indi_pane_g3_ParamLimits

0xc0e8,	// (0x00065a11) cam6_indi_pane_g3

0x0002,

0xf9cf,	// (0x000692f8) cam6_indi_pane_g_ParamLimits

0xf9cf,	// (0x000692f8) cam6_indi_pane_g

0xc0fa,	// (0x00065a23) cam6_indi_pane_t1_ParamLimits

0xc0fa,	// (0x00065a23) cam6_indi_pane_t1

0x6f56,	// (0x0006087f) cam6_autofocus_pane_g1

0x6f5e,	// (0x00060887) cam6_autofocus_pane_g2

0x6f66,	// (0x0006088f) cam6_autofocus_pane_g3

0x6f6e,	// (0x00060897) cam6_autofocus_pane_g4

0x0003,

0xf9d6,	// (0x000692ff) cam6_autofocus_pane_g

0xc120,	// (0x00065a49) cam6_timer_pane_g1

0xc128,	// (0x00065a51) cam6_timer_pane_t1

0xc136,	// (0x00065a5f) cam6_zoom_cont_pane

0xc13e,	// (0x00065a67) cam6_zoom_pane_g1

0xc146,	// (0x00065a6f) cam6_zoom_pane_g2

0x6f76,	// (0x0006089f) cam6_zoom_pane_g3

0x0002,

0xf9df,	// (0x00069308) cam6_zoom_pane_g

0xa1ac,	// (0x00063ad5) cam6_battery_pane_g1

0xa1ac,	// (0x00063ad5) cam6_battery_pane_g2

0x0001,

0xf3be,	// (0x00068ce7) cam6_battery_pane_g

0xc14e,	// (0x00065a77) cam6_zoom_cont_pane_g1

0xc157,	// (0x00065a80) cam6_zoom_cont_pane_g2

0xc160,	// (0x00065a89) cam6_zoom_cont_pane_g3

0x0002,

0xf9e6,	// (0x0006930f) cam6_zoom_cont_pane_g

0x6f90,	// (0x000608b9) cam6_mode_pane_cp_ParamLimits

0x6f90,	// (0x000608b9) cam6_mode_pane_cp

0x6fa2,	// (0x000608cb) cam6_zoom_pane_cp_ParamLimits

0x6fa2,	// (0x000608cb) cam6_zoom_pane_cp

0x6fae,	// (0x000608d7) vid6_image_uncrop_cif_pane_ParamLimits

0x6fae,	// (0x000608d7) vid6_image_uncrop_cif_pane

0x6fbe,	// (0x000608e7) vid6_image_uncrop_nhd_pane_ParamLimits

0x6fbe,	// (0x000608e7) vid6_image_uncrop_nhd_pane

0x6fcd,	// (0x000608f6) vid6_image_uncrop_vga_pane_ParamLimits

0x6fcd,	// (0x000608f6) vid6_image_uncrop_vga_pane

0x6fdc,	// (0x00060905) vid6_image_uncrop_wvga_pane_ParamLimits

0x6fdc,	// (0x00060905) vid6_image_uncrop_wvga_pane

0x6feb,	// (0x00060914) vid6_indi_pane_ParamLimits

0x6feb,	// (0x00060914) vid6_indi_pane

0x6f0e,	// (0x00060837) bg_tb_trans_pane_cp09_ParamLimits

0x6f0e,	// (0x00060837) bg_tb_trans_pane_cp09

0xc178,	// (0x00065aa1) cam6_battery_pane_cp_ParamLimits

0xc178,	// (0x00065aa1) cam6_battery_pane_cp

0xc184,	// (0x00065aad) vid6_indi_pane_g1_ParamLimits

0xc184,	// (0x00065aad) vid6_indi_pane_g1

0xc196,	// (0x00065abf) vid6_indi_pane_g2_ParamLimits

0xc196,	// (0x00065abf) vid6_indi_pane_g2

0xc1a8,	// (0x00065ad1) vid6_indi_pane_g3_ParamLimits

0xc1a8,	// (0x00065ad1) vid6_indi_pane_g3

0xc1bd,	// (0x00065ae6) vid6_indi_pane_g4_ParamLimits

0xc1bd,	// (0x00065ae6) vid6_indi_pane_g4

0xc1d2,	// (0x00065afb) vid6_indi_pane_g5_ParamLimits

0xc1d2,	// (0x00065afb) vid6_indi_pane_g5

0x0004,

0xf9ed,	// (0x00069316) vid6_indi_pane_g_ParamLimits

0xf9ed,	// (0x00069316) vid6_indi_pane_g

0xc1ec,	// (0x00065b15) vid6_indi_pane_t1_ParamLimits

0xc1ec,	// (0x00065b15) vid6_indi_pane_t1

0xc202,	// (0x00065b2b) vid6_indi_pane_t2_ParamLimits

0xc202,	// (0x00065b2b) vid6_indi_pane_t2

0xc22a,	// (0x00065b53) vid6_indi_pane_t3_ParamLimits

0xc22a,	// (0x00065b53) vid6_indi_pane_t3

0xc252,	// (0x00065b7b) vid6_indi_pane_t4_ParamLimits

0xc252,	// (0x00065b7b) vid6_indi_pane_t4

0x0003,

0xf9f8,	// (0x00069321) vid6_indi_pane_t_ParamLimits

0xf9f8,	// (0x00069321) vid6_indi_pane_t

0xc276,	// (0x00065b9f) wait_bar_pane_cp08

0x7003,	// (0x0006092c) main_cset_text2_pane_t1_ParamLimits

0x7003,	// (0x0006092c) main_cset_text2_pane_t1

0x6f7e,	// (0x000608a7) listscroll_gen_pane_cp06_t1_ParamLimits

0x6f7e,	// (0x000608a7) listscroll_gen_pane_cp06_t1

0x9792,	// (0x000630bb) main_cam6_set_pane

0xeba9,	// (0x000684d2) bg_tb_trans_pane_cp06_ParamLimits

0xdd68,	// (0x00067691) cam4_indicators_pane_g1_ParamLimits

0xdd79,	// (0x000676a2) cam4_indicators_pane_g2_ParamLimits

0xf7a8,	// (0x000690d1) cam4_indicators_pane_g_ParamLimits

0xdd97,	// (0x000676c0) cam4_indicators_pane_t1_ParamLimits

0x9784,	// (0x000630ad) bg_tb_trans_pane_cp07_ParamLimits

0xddc3,	// (0x000676ec) vid4_indicators_pane_g1_ParamLimits

0xddd7,	// (0x00067700) vid4_indicators_pane_g2_ParamLimits

0xddeb,	// (0x00067714) vid4_indicators_pane_g3_ParamLimits

0xddfc,	// (0x00067725) vid4_indicators_pane_g4_ParamLimits

0xf7ba,	// (0x000690e3) vid4_indicators_pane_g_ParamLimits

0xde1a,	// (0x00067743) vid4_indicators_pane_t1_ParamLimits

0xdeb0,	// (0x000677d9) vid4_progress_pane_g1_ParamLimits

0xdec0,	// (0x000677e9) vid4_progress_pane_g2_ParamLimits

0x68d2,	// (0x000601fb) vid4_progress_pane_g3_ParamLimits

0xded0,	// (0x000677f9) vid4_progress_pane_g4_ParamLimits

0xf929,	// (0x00069252) vid4_progress_pane_g_ParamLimits

0x68e4,	// (0x0006020d) vid4_progress_pane_t1_ParamLimits

0xdee8,	// (0x00067811) vid4_progress_pane_t2_ParamLimits

0xdefd,	// (0x00067826) vid4_progress_pane_t3_ParamLimits

0xf934,	// (0x0006925d) vid4_progress_pane_t_ParamLimits

0x68fc,	// (0x00060225) wait_bar_pane_cp07_ParamLimits

0x7020,	// (0x00060949) main_cam6_set_pane_g2_ParamLimits

0x7020,	// (0x00060949) main_cam6_set_pane_g2

0x7044,	// (0x0006096d) main_cset6_listscroll_pane_ParamLimits

0x7044,	// (0x0006096d) main_cset6_listscroll_pane

0x7064,	// (0x0006098d) main_cset6_slider_pane_ParamLimits

0x7064,	// (0x0006098d) main_cset6_slider_pane

0x707a,	// (0x000609a3) main_cset6_text2_pane_ParamLimits

0x707a,	// (0x000609a3) main_cset6_text2_pane

0xc285,	// (0x00065bae) main_cset6_text_pane

0xc28d,	// (0x00065bb6) main_cset_list_pane_copy1_ParamLimits

0xc28d,	// (0x00065bb6) main_cset_list_pane_copy1

0xc29d,	// (0x00065bc6) scroll_pane_cp028_copy1

0x7088,	// (0x000609b1) cset_list_set_pane_copy1

0x7099,	// (0x000609c2) aid_position_infowindow_above_copy1

0x70a1,	// (0x000609ca) aid_position_infowindow_below_copy1

0x70a9,	// (0x000609d2) cset_list_set_pane_g1_copy1

0x70b1,	// (0x000609da) cset_list_set_pane_g3_copy1_ParamLimits

0x70b1,	// (0x000609da) cset_list_set_pane_g3_copy1

0x70c0,	// (0x000609e9) cset_list_set_pane_t1_copy1_ParamLimits

0x70c0,	// (0x000609e9) cset_list_set_pane_t1_copy1

0x9e2c,	// (0x00063755) list_highlight_pane_cp021_copy1_ParamLimits

0x9e2c,	// (0x00063755) list_highlight_pane_cp021_copy1

0xc2a6,	// (0x00065bcf) cset6_slider_pane_ParamLimits

0xc2a6,	// (0x00065bcf) cset6_slider_pane

0xc2d2,	// (0x00065bfb) main_cset6_slider_pane_g1_ParamLimits

0xc2d2,	// (0x00065bfb) main_cset6_slider_pane_g1

0x70d5,	// (0x000609fe) main_cset6_slider_pane_g2_ParamLimits

0x70d5,	// (0x000609fe) main_cset6_slider_pane_g2

0xc2fa,	// (0x00065c23) main_cset6_slider_pane_g3_ParamLimits

0xc2fa,	// (0x00065c23) main_cset6_slider_pane_g3

0x70fd,	// (0x00060a26) main_cset6_slider_pane_g4_ParamLimits

0x70fd,	// (0x00060a26) main_cset6_slider_pane_g4

0x7109,	// (0x00060a32) main_cset6_slider_pane_g5_ParamLimits

0x7109,	// (0x00060a32) main_cset6_slider_pane_g5

0xed27,	// (0x00068650) main_cset6_slider_pane_g7_ParamLimits

0xed27,	// (0x00068650) main_cset6_slider_pane_g7

0xed33,	// (0x0006865c) main_cset6_slider_pane_g8_ParamLimits

0xed33,	// (0x0006865c) main_cset6_slider_pane_g8

0x5e31,	// (0x0005f75a) main_cset6_slider_pane_g9_ParamLimits

0x5e31,	// (0x0005f75a) main_cset6_slider_pane_g9

0x5e3d,	// (0x0005f766) main_cset6_slider_pane_g10_ParamLimits

0x5e3d,	// (0x0005f766) main_cset6_slider_pane_g10

0x5e49,	// (0x0005f772) main_cset6_slider_pane_g11_ParamLimits

0x5e49,	// (0x0005f772) main_cset6_slider_pane_g11

0x5e55,	// (0x0005f77e) main_cset6_slider_pane_g12_ParamLimits

0x5e55,	// (0x0005f77e) main_cset6_slider_pane_g12

0x5e61,	// (0x0005f78a) main_cset6_slider_pane_g13_ParamLimits

0x5e61,	// (0x0005f78a) main_cset6_slider_pane_g13

0x5e6d,	// (0x0005f796) main_cset6_slider_pane_g14_ParamLimits

0x5e6d,	// (0x0005f796) main_cset6_slider_pane_g14

0x7115,	// (0x00060a3e) main_cset6_slider_pane_g15_ParamLimits

0x7115,	// (0x00060a3e) main_cset6_slider_pane_g15

0x5e91,	// (0x0005f7ba) main_cset6_slider_pane_g16_ParamLimits

0x5e91,	// (0x0005f7ba) main_cset6_slider_pane_g16

0x5e9d,	// (0x0005f7c6) main_cset6_slider_pane_g17_ParamLimits

0x5e9d,	// (0x0005f7c6) main_cset6_slider_pane_g17

0x0011,

0xfa01,	// (0x0006932a) main_cset6_slider_pane_g_ParamLimits

0xfa01,	// (0x0006932a) main_cset6_slider_pane_g

0xc306,	// (0x00065c2f) main_cset6_slider_pane_t1_ParamLimits

0xc306,	// (0x00065c2f) main_cset6_slider_pane_t1

0x7145,	// (0x00060a6e) main_cset6_slider_pane_t2_ParamLimits

0x7145,	// (0x00060a6e) main_cset6_slider_pane_t2

0x7170,	// (0x00060a99) main_cset6_slider_pane_t3_ParamLimits

0x7170,	// (0x00060a99) main_cset6_slider_pane_t3

0x719b,	// (0x00060ac4) main_cset6_slider_pane_t4_ParamLimits

0x719b,	// (0x00060ac4) main_cset6_slider_pane_t4

0x71c6,	// (0x00060aef) main_cset6_slider_pane_t5_ParamLimits

0x71c6,	// (0x00060aef) main_cset6_slider_pane_t5

0xc347,	// (0x00065c70) main_cset6_slider_pane_t7_ParamLimits

0xc347,	// (0x00065c70) main_cset6_slider_pane_t7

0x71f1,	// (0x00060b1a) main_cset6_slider_pane_t8_ParamLimits

0x71f1,	// (0x00060b1a) main_cset6_slider_pane_t8

0x7215,	// (0x00060b3e) main_cset6_slider_pane_t9_ParamLimits

0x7215,	// (0x00060b3e) main_cset6_slider_pane_t9

0x7239,	// (0x00060b62) main_cset6_slider_pane_t10_ParamLimits

0x7239,	// (0x00060b62) main_cset6_slider_pane_t10

0x725d,	// (0x00060b86) main_cset6_slider_pane_t11_ParamLimits

0x725d,	// (0x00060b86) main_cset6_slider_pane_t11

0xc37d,	// (0x00065ca6) main_cset6_slider_pane_t14_ParamLimits

0xc37d,	// (0x00065ca6) main_cset6_slider_pane_t14

0xc3b6,	// (0x00065cdf) main_cset6_slider_pane_t15_ParamLimits

0xc3b6,	// (0x00065cdf) main_cset6_slider_pane_t15

0x000b,

0xfa26,	// (0x0006934f) main_cset6_slider_pane_t_ParamLimits

0xfa26,	// (0x0006934f) main_cset6_slider_pane_t

0x7281,	// (0x00060baa) cset_slider_pane_g1_copy1

0x728a,	// (0x00060bb3) cset_slider_pane_g2_copy1

0x7293,	// (0x00060bbc) cset_slider_pane_g3_copy1

0x970d,	// (0x00063036) bg_popup_sub_pane_cp011_copy1

0xc3ef,	// (0x00065d18) main_cset_text_pane_g1_copy1

0xee75,	// (0x0006879e) main_cset_text_pane_t1_copy1

0xee83,	// (0x000687ac) main_cset_text_pane_t2_copy1

0xee91,	// (0x000687ba) main_cset_text_pane_t3_copy1

0xee9f,	// (0x000687c8) main_cset_text_pane_t4_copy1

0xeead,	// (0x000687d6) main_cset_text_pane_t5_copy1

0xc3f7,	// (0x00065d20) main_cset_text_pane_t6_copy1

0xc405,	// (0x00065d2e) main_cset_text_pane_t7_copy1

0x7003,	// (0x0006092c) main_cset_text2_pane_t1_copy1

0x9784,	// (0x000630ad) main_ncimui_pane

0x3daf,	// (0x0005d6d8) popup_query_ncimui_window_ParamLimits

0x3daf,	// (0x0005d6d8) popup_query_ncimui_window

0x4326,	// (0x0005dc4f) field_cale_ev2_pane_g4_ParamLimits

0x4326,	// (0x0005dc4f) field_cale_ev2_pane_g4

0x501d,	// (0x0005e946) cell_video_dialer_keypad_pane_g2_ParamLimits

0x501d,	// (0x0005e946) cell_video_dialer_keypad_pane_g2

0x0001,

0xf747,	// (0x00069070) cell_video_dialer_keypad_pane_g_ParamLimits

0xf747,	// (0x00069070) cell_video_dialer_keypad_pane_g

0x5035,	// (0x0005e95e) cell_video_dialer_keypad_pane_t1

0x970d,	// (0x00063036) bg_popup_window_pane_cp012

0xbf5e,	// (0x00065887) heading_pane_cp06

0xc431,	// (0x00065d5a) ncim_query_content_pane

0x970d,	// (0x00063036) bg_popup_heading_pane_cp01

0xc439,	// (0x00065d62) ncim_heading_pane_t1

0xc447,	// (0x00065d70) ncim_indicator_popup_pane

0xc459,	// (0x00065d82) ncim_query_button_pane

0xc46d,	// (0x00065d96) ncim_query_content_pane_t1

0xc47f,	// (0x00065da8) ncim_query_content_pane_t2

0x0005,

0xfa6a,	// (0x00069393) ncim_query_content_pane_t

0xc4b9,	// (0x00065de2) ncim_query_list_pane

0xc4cb,	// (0x00065df4) ncim_query_popup_pane

0xc447,	// (0x00065d70) ncim_indicator_popup_pane_ParamLimits

0x73e2,	// (0x00060d0b) ncim_query_content_pane_g1_ParamLimits

0x73e2,	// (0x00060d0b) ncim_query_content_pane_g1

0xc46d,	// (0x00065d96) ncim_query_content_pane_t1_ParamLimits

0xc47f,	// (0x00065da8) ncim_query_content_pane_t2_ParamLimits

0x73ee,	// (0x00060d17) ncim_query_content_pane_t3_ParamLimits

0x73ee,	// (0x00060d17) ncim_query_content_pane_t3

0x7416,	// (0x00060d3f) ncim_query_content_pane_t4_ParamLimits

0x7416,	// (0x00060d3f) ncim_query_content_pane_t4

0x743e,	// (0x00060d67) ncim_query_content_pane_t5_ParamLimits

0x743e,	// (0x00060d67) ncim_query_content_pane_t5

0xc491,	// (0x00065dba) ncim_query_content_pane_t6_ParamLimits

0xc491,	// (0x00065dba) ncim_query_content_pane_t6

0xfa6a,	// (0x00069393) ncim_query_content_pane_t_ParamLimits

0xc4b9,	// (0x00065de2) ncim_query_list_pane_ParamLimits

0xc4cb,	// (0x00065df4) ncim_query_popup_pane_ParamLimits

0xc4df,	// (0x00065e08) wait_bar_pane_cp04

0x970d,	// (0x00063036) input_focus_pane_cp011

0xc4e7,	// (0x00065e10) ncim_query_popup_pane_t1

0xc4f5,	// (0x00065e1e) ncim_list_query_list_pane_ParamLimits

0xc4f5,	// (0x00065e1e) ncim_list_query_list_pane

0x970d,	// (0x00063036) bg_button_pane_cp027

0xc502,	// (0x00065e2b) ncim_query_button_pane_g1

0x970d,	// (0x00063036) list_highlight_pane_cp012

0xc50c,	// (0x00065e35) ncim_list_query_list_pane_g1

0xc514,	// (0x00065e3d) ncim_list_query_list_pane_t1

0xdd88,	// (0x000676b1) cam4_indicators_pane_g3_ParamLimits

0xdd88,	// (0x000676b1) cam4_indicators_pane_g3

0xde08,	// (0x00067731) vid4_indicators_pane_g5_ParamLimits

0xde08,	// (0x00067731) vid4_indicators_pane_g5

0xdedc,	// (0x00067805) vid4_progress_pane_g5_ParamLimits

0xdedc,	// (0x00067805) vid4_progress_pane_g5

0x72cd,	// (0x00060bf6) main_ncimui_pane_g1

0x7336,	// (0x00060c5f) ncimui_group_query_pane_ParamLimits

0x7336,	// (0x00060c5f) ncimui_group_query_pane

0x737e,	// (0x00060ca7) ncimui_list_pane_ParamLimits

0x737e,	// (0x00060ca7) ncimui_list_pane

0x73a5,	// (0x00060cce) ncimui_text_pane_ParamLimits

0x73a5,	// (0x00060cce) ncimui_text_pane

0x7466,	// (0x00060d8f) ncimui_text_pane_t1_ParamLimits

0x7466,	// (0x00060d8f) ncimui_text_pane_t1

0xc522,	// (0x00065e4b) ncimui_list_single_graphic_pane_ParamLimits

0xc522,	// (0x00065e4b) ncimui_list_single_graphic_pane

0x7484,	// (0x00060dad) ncimui_query_pane_ParamLimits

0x7484,	// (0x00060dad) ncimui_query_pane

0x970d,	// (0x00063036) list_highlight_pane_cp013

0xc532,	// (0x00065e5b) ncim_list_query_list_pane_t1_copy1

0xc50c,	// (0x00065e35) ncim_list_single_graphic_pane_g1

0x7497,	// (0x00060dc0) ncim_query_button_pane_cp01

0x74a3,	// (0x00060dcc) ncim_query_entry_pane_ParamLimits

0x74a3,	// (0x00060dcc) ncim_query_entry_pane

0x74b6,	// (0x00060ddf) ncimui_query_pane_g1

0x74c2,	// (0x00060deb) ncimui_query_pane_t1_ParamLimits

0x74c2,	// (0x00060deb) ncimui_query_pane_t1

0x9e2c,	// (0x00063755) input_focus_pane_cp012

0xc540,	// (0x00065e69) ncim_query_entry_pane_t1

0x9f27,	// (0x00063850) main_im_pane_ParamLimits

0x9784,	// (0x000630ad) main_mobtv_pane_ParamLimits

0x9784,	// (0x000630ad) main_mobtv_pane

0x712d,	// (0x00060a56) main_cset6_slider_pane_g18_ParamLimits

0x712d,	// (0x00060a56) main_cset6_slider_pane_g18

0x7139,	// (0x00060a62) main_cset6_slider_pane_g19_ParamLimits

0x7139,	// (0x00060a62) main_cset6_slider_pane_g19

0x9eaf,	// (0x000637d8) bg_main_mobtv_pane_ParamLimits

0x9eaf,	// (0x000637d8) bg_main_mobtv_pane

0x74db,	// (0x00060e04) main_mobtv_info_pane

0x74e4,	// (0x00060e0d) main_mobtv_loading_pane_ParamLimits

0x74e4,	// (0x00060e0d) main_mobtv_loading_pane

0xc552,	// (0x00065e7b) main_mobtv_pg_channel_list_pane

0xc55c,	// (0x00065e85) main_mobtv_pg_hdr_pane

0x74f1,	// (0x00060e1a) main_mobtv_programe_curr_pane_ParamLimits

0x74f1,	// (0x00060e1a) main_mobtv_programe_curr_pane

0x74fe,	// (0x00060e27) main_mobtv_programe_next_pane_ParamLimits

0x74fe,	// (0x00060e27) main_mobtv_programe_next_pane

0xc565,	// (0x00065e8e) popup_mobtv_noti_window

0xa1ac,	// (0x00063ad5) main_tv_pg_hdr_pane_g1

0xc56d,	// (0x00065e96) main_tv_pg_hdr_pane_g2

0xc575,	// (0x00065e9e) main_tv_pg_hdr_pane_g3

0xc57d,	// (0x00065ea6) main_tv_pg_hdr_pane_g4

0xc585,	// (0x00065eae) main_tv_pg_hdr_pane_g5

0xc58f,	// (0x00065eb8) main_tv_pg_hdr_pane_g6

0xc599,	// (0x00065ec2) main_tv_pg_hdr_pane_g7

0xc5a3,	// (0x00065ecc) main_tv_pg_hdr_pane_g8

0xc5ad,	// (0x00065ed6) main_tv_pg_hdr_pane_g9

0xc5b7,	// (0x00065ee0) main_tv_pg_hdr_pane_g10

0xc5c1,	// (0x00065eea) main_tv_pg_hdr_pane_g11

0x000a,

0xfa77,	// (0x000693a0) main_tv_pg_hdr_pane_g

0xc5cb,	// (0x00065ef4) main_tv_pg_hdr_pane_t1

0xc5d9,	// (0x00065f02) main_tv_pg_hdr_pane_t2

0xc5e7,	// (0x00065f10) main_tv_pg_hdr_pane_t3

0xc5f7,	// (0x00065f20) main_tv_pg_hdr_pane_t4

0xc607,	// (0x00065f30) main_tv_pg_hdr_pane_t5

0x0004,

0xfa8e,	// (0x000693b7) main_tv_pg_hdr_pane_t

0xc617,	// (0x00065f40) single_mobtv_pg_channel_pane_ParamLimits

0xc617,	// (0x00065f40) single_mobtv_pg_channel_pane

0xc629,	// (0x00065f52) single_mobtv_pg_channel_table_pane

0xc632,	// (0x00065f5b) single_mobtv_pg_channel_thumb_pane

0xc63b,	// (0x00065f64) single_tv_pg_channel_pane_g1

0xc644,	// (0x00065f6d) single_tv_pg_channel_pane_g2

0x0001,

0xfa99,	// (0x000693c2) single_tv_pg_channel_pane_g

0x9e93,	// (0x000637bc) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9e93,	// (0x000637bc) bg_single_mobtv_pg_channel_thumb_pane

0xc64d,	// (0x00065f76) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc64d,	// (0x00065f76) single_mobtv_pg_channel_thumb_pane_g1

0xc65b,	// (0x00065f84) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc65b,	// (0x00065f84) single_mobtv_pg_channel_thumb_pane_g2

0xc667,	// (0x00065f90) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc667,	// (0x00065f90) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfa9e,	// (0x000693c7) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfa9e,	// (0x000693c7) single_mobtv_pg_channel_thumb_pane_g

0xc673,	// (0x00065f9c) single_mobtv_pg_channel_thumb_pane_t1

0xc681,	// (0x00065faa) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfaa5,	// (0x000693ce) single_mobtv_pg_channel_thumb_pane_t

0xa1ac,	// (0x00063ad5) bg_single_mobtv_pg_channel_table_pane_g1

0xa1ac,	// (0x00063ad5) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3be,	// (0x00068ce7) bg_single_mobtv_pg_channel_table_pane_g

0xc68f,	// (0x00065fb8) single_mobtv_pg_channel_table_pane_t1

0xc69d,	// (0x00065fc6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfaaa,	// (0x000693d3) single_mobtv_pg_channel_table_pane_t

0x7513,	// (0x00060e3c) main_mobtv_info_pane_g1_ParamLimits

0x7513,	// (0x00060e3c) main_mobtv_info_pane_g1

0x7531,	// (0x00060e5a) main_mobtv_info_pane_t1_ParamLimits

0x7531,	// (0x00060e5a) main_mobtv_info_pane_t1

0x75a9,	// (0x00060ed2) main_mobtv_info_pane_t2_ParamLimits

0x75a9,	// (0x00060ed2) main_mobtv_info_pane_t2

0x0002,

0xfab4,	// (0x000693dd) main_mobtv_info_pane_t_ParamLimits

0xfab4,	// (0x000693dd) main_mobtv_info_pane_t

0x7638,	// (0x00060f61) wait_bar_pane_cp05

0x764a,	// (0x00060f73) main_mobtv_loading_pane_g1_ParamLimits

0x764a,	// (0x00060f73) main_mobtv_loading_pane_g1

0x765d,	// (0x00060f86) main_mobtv_loading_pane_g2_ParamLimits

0x765d,	// (0x00060f86) main_mobtv_loading_pane_g2

0x7669,	// (0x00060f92) main_mobtv_loading_pane_g3_ParamLimits

0x7669,	// (0x00060f92) main_mobtv_loading_pane_g3

0x0002,

0xfabb,	// (0x000693e4) main_mobtv_loading_pane_g_ParamLimits

0xfabb,	// (0x000693e4) main_mobtv_loading_pane_g

0xc6ab,	// (0x00065fd4) main_mobtv_loading_pane_t1_ParamLimits

0xc6ab,	// (0x00065fd4) main_mobtv_loading_pane_t1

0xc6c3,	// (0x00065fec) main_mobtv_loading_pane_t2_ParamLimits

0xc6c3,	// (0x00065fec) main_mobtv_loading_pane_t2

0x0001,

0xfac2,	// (0x000693eb) main_mobtv_loading_pane_t_ParamLimits

0xfac2,	// (0x000693eb) main_mobtv_loading_pane_t

0x767c,	// (0x00060fa5) wait_bar_pane_cp06_ParamLimits

0x767c,	// (0x00060fa5) wait_bar_pane_cp06

0xc6e7,	// (0x00066010) main_mobtv_programe_curr_pane_t1

0xc6f5,	// (0x0006601e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfac7,	// (0x000693f0) main_mobtv_programe_curr_pane_t

0xc703,	// (0x0006602c) main_mobtv_programe_next_pane_t1

0xc711,	// (0x0006603a) main_mobtv_programe_next_pane_t2

0xc71f,	// (0x00066048) main_mobtv_programe_next_pane_t3

0x0002,

0xfacc,	// (0x000693f5) main_mobtv_programe_next_pane_t

0x970d,	// (0x00063036) bg_popup_mobtv_noti_window_pane

0xc72d,	// (0x00066056) popup_mobtv_noti_window_g1

0xc735,	// (0x0006605e) popup_mobtv_noti_window_t1

0xc743,	// (0x0006606c) popup_mobtv_noti_window_t2

0x0001,

0xfad3,	// (0x000693fc) popup_mobtv_noti_window_t

0xa1ac,	// (0x00063ad5) bg_popup_mobtv_noti_window_pane_g1

0x9792,	// (0x000630bb) sc_clock_pane

0x9792,	// (0x000630bb) main_fs_bigclock_pane

0x6c47,	// (0x00060570) blid2_tripm_pane_t4_ParamLimits

0x6c47,	// (0x00060570) blid2_tripm_pane_t4

0x768b,	// (0x00060fb4) sc_clock_pane_g1_ParamLimits

0x768b,	// (0x00060fb4) sc_clock_pane_g1

0x769d,	// (0x00060fc6) sc_clock_pane_t1_ParamLimits

0x769d,	// (0x00060fc6) sc_clock_pane_t1

0x76bf,	// (0x00060fe8) sc_clock_pane_t2_ParamLimits

0x76bf,	// (0x00060fe8) sc_clock_pane_t2

0x76d7,	// (0x00061000) sc_clock_pane_t3_ParamLimits

0x76d7,	// (0x00061000) sc_clock_pane_t3

0x0004,

0xfad8,	// (0x00069401) sc_clock_pane_t_ParamLimits

0xfad8,	// (0x00069401) sc_clock_pane_t

0x8424,	// (0x00061d4d) main_fs_bigclock_indicator_pane_ParamLimits

0x8424,	// (0x00061d4d) main_fs_bigclock_indicator_pane

0x777d,	// (0x000610a6) main_fs_bigclock_pane_g1_ParamLimits

0x777d,	// (0x000610a6) main_fs_bigclock_pane_g1

0x8430,	// (0x00061d59) main_fs_bigclock_pane_t1_ParamLimits

0x8430,	// (0x00061d59) main_fs_bigclock_pane_t1

0x8442,	// (0x00061d6b) main_fs_bigclock_pane_t2_ParamLimits

0x8442,	// (0x00061d6b) main_fs_bigclock_pane_t2

0x8456,	// (0x00061d7f) main_fs_bigclock_pane_t3_ParamLimits

0x8456,	// (0x00061d7f) main_fs_bigclock_pane_t3

0x0002,

0xfc69,	// (0x00069592) main_fs_bigclock_pane_t_ParamLimits

0xfc69,	// (0x00069592) main_fs_bigclock_pane_t

0xd2aa,	// (0x00066bd3) main_fs_bigclock_indicator_pane_g1

0xc461,	// (0x00065d8a) ncim_query_content_pane_g2_ParamLimits

0xc461,	// (0x00065d8a) ncim_query_content_pane_g2

0x0001,

0xfa65,	// (0x0006938e) ncim_query_content_pane_g_ParamLimits

0xfa65,	// (0x0006938e) ncim_query_content_pane_g

0x76f0,	// (0x00061019) sc_clock_pane_t4_ParamLimits

0x76f0,	// (0x00061019) sc_clock_pane_t4

0x9784,	// (0x000630ad) main_radioblah_pane

0xdcfa,	// (0x00067623) cell_call4_button_pane_t1_copy1_ParamLimits

0xdcfa,	// (0x00067623) cell_call4_button_pane_t1_copy1

0x72e5,	// (0x00060c0e) main_ncimui_pane_t1_ParamLimits

0x72e5,	// (0x00060c0e) main_ncimui_pane_t1

0x72ff,	// (0x00060c28) main_ncimui_pane_t2_ParamLimits

0x72ff,	// (0x00060c28) main_ncimui_pane_t2

0x0002,

0xfa5e,	// (0x00069387) main_ncimui_pane_t_ParamLimits

0xfa5e,	// (0x00069387) main_ncimui_pane_t

0xc888,	// (0x000661b1) main_radioblah_anim_pane_ParamLimits

0xc888,	// (0x000661b1) main_radioblah_anim_pane

0xc899,	// (0x000661c2) main_radioblah_info_pane_ParamLimits

0xc899,	// (0x000661c2) main_radioblah_info_pane

0xc8ad,	// (0x000661d6) main_radioblah_pane_t1_ParamLimits

0xc8ad,	// (0x000661d6) main_radioblah_pane_t1

0xc8c9,	// (0x000661f2) main_radioblah_pane_t2_ParamLimits

0xc8c9,	// (0x000661f2) main_radioblah_pane_t2

0x0003,

0xfaf9,	// (0x00069422) main_radioblah_pane_t_ParamLimits

0xfaf9,	// (0x00069422) main_radioblah_pane_t

0x77dc,	// (0x00061105) main_radioblah_rocker_ctrl_pane_ParamLimits

0x77dc,	// (0x00061105) main_radioblah_rocker_ctrl_pane

0xc911,	// (0x0006623a) main_radioblah_info_pane_t1_ParamLimits

0xc911,	// (0x0006623a) main_radioblah_info_pane_t1

0x7834,	// (0x0006115d) main_radioblah_info_pane_t2_ParamLimits

0x7834,	// (0x0006115d) main_radioblah_info_pane_t2

0x0003,

0xfb02,	// (0x0006942b) main_radioblah_info_pane_t_ParamLimits

0xfb02,	// (0x0006942b) main_radioblah_info_pane_t

0xa1ac,	// (0x00063ad5) main_radioblah_rocker_ctrl_pane_g1

0x78e4,	// (0x0006120d) main_radioblah_rocker_ctrl_pane_g2

0x78ec,	// (0x00061215) main_radioblah_rocker_ctrl_pane_g3

0x78f4,	// (0x0006121d) main_radioblah_rocker_ctrl_pane_g4

0x78fc,	// (0x00061225) main_radioblah_rocker_ctrl_pane_g5

0x7904,	// (0x0006122d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb0b,	// (0x00069434) main_radioblah_rocker_ctrl_pane_g

0x7003,	// (0x0006092c) main_cset_text2_pane_t1_copy1_ParamLimits

0xdd58,	// (0x00067681) cam4_image_uncrop_qvga_pane

0xddb1,	// (0x000676da) vid4_image_uncrop_qcif_pane

0xdf12,	// (0x0006783b) cam6_image_uncrop_qvga_pane_ParamLimits

0xdf12,	// (0x0006783b) cam6_image_uncrop_qvga_pane

0xc168,	// (0x00065a91) vid6_image_uncrop_qcif_pane_ParamLimits

0xc168,	// (0x00065a91) vid6_image_uncrop_qcif_pane

0x970d,	// (0x00063036) bg_popup_preview_window_pane_cp03

0xc413,	// (0x00065d3c) list_cset_text2_pane

0xc41b,	// (0x00065d44) main_cset6_text2_pane_g1

0xc423,	// (0x00065d4c) main_cset6_text2_pane_t1

0x790c,	// (0x00061235) list_cset_text2_pane_t1_ParamLimits

0x790c,	// (0x00061235) list_cset_text2_pane_t1

0x9784,	// (0x000630ad) main_radioblah_pane_ParamLimits

0x7624,	// (0x00060f4d) main_mobtv_info_pane_t3_ParamLimits

0x7624,	// (0x00060f4d) main_mobtv_info_pane_t3

0x77ca,	// (0x000610f3) main_radioblah_pane_g1

0x7804,	// (0x0006112d) main_radioblah_info_pane_g1

0x7889,	// (0x000611b2) main_radioblah_info_pane_t3_ParamLimits

0x7889,	// (0x000611b2) main_radioblah_info_pane_t3

0x2ab8,	// (0x0005c3e1) highlight_cell_cale_month_pane_ParamLimits

0x2ab8,	// (0x0005c3e1) highlight_cell_cale_month_pane

0x9792,	// (0x000630bb) main_phob_fisheye_pane

0xe657,	// (0x00067f80) scroll_pane_cp0031_ParamLimits

0xe657,	// (0x00067f80) scroll_pane_cp0031

0xc276,	// (0x00065b9f) wait_bar_pane_cp08_ParamLimits

0x7088,	// (0x000609b1) cset_list_set_pane_copy1_ParamLimits

0xc94b,	// (0x00066274) highlight_cell_cale_month_pane_g1

0x7925,	// (0x0006124e) highlight_cell_cale_month_pane_t1

0x681b,	// (0x00060144) list_gen_pane_cp01

0xed12,	// (0x0006863b) scroll_pane_01

0x7933,	// (0x0006125c) list_single_double_fisheye_pane

0x793c,	// (0x00061265) list_double_fisheye_pane_g1_ParamLimits

0x793c,	// (0x00061265) list_double_fisheye_pane_g1

0x7948,	// (0x00061271) list_double_fisheye_pane_g2_ParamLimits

0x7948,	// (0x00061271) list_double_fisheye_pane_g2

0x795c,	// (0x00061285) list_double_fisheye_pane_g3_ParamLimits

0x795c,	// (0x00061285) list_double_fisheye_pane_g3

0x0004,

0xfb18,	// (0x00069441) list_double_fisheye_pane_g_ParamLimits

0xfb18,	// (0x00069441) list_double_fisheye_pane_g

0x7985,	// (0x000612ae) list_double_fisheye_pane_t1_ParamLimits

0x7985,	// (0x000612ae) list_double_fisheye_pane_t1

0x79a0,	// (0x000612c9) list_double_fisheye_pane_t2_ParamLimits

0x79a0,	// (0x000612c9) list_double_fisheye_pane_t2

0x0001,

0xfb23,	// (0x0006944c) list_double_fisheye_pane_t_ParamLimits

0xfb23,	// (0x0006944c) list_double_fisheye_pane_t

0x9792,	// (0x000630bb) main_call5_pane

0x771b,	// (0x00061044) sc_swipe_pane_ParamLimits

0x771b,	// (0x00061044) sc_swipe_pane

0x79d5,	// (0x000612fe) call5_image_pane_ParamLimits

0x79d5,	// (0x000612fe) call5_image_pane

0x79f2,	// (0x0006131b) call5_swipe_1_pane_ParamLimits

0x79f2,	// (0x0006131b) call5_swipe_1_pane

0x7a05,	// (0x0006132e) call5_swipe_2_pane_ParamLimits

0x7a05,	// (0x0006132e) call5_swipe_2_pane

0x7a30,	// (0x00061359) popup_call5_audio_first_window_ParamLimits

0x7a30,	// (0x00061359) popup_call5_audio_first_window

0x9e93,	// (0x000637bc) call5_swipe_1_pane_g1_ParamLimits

0x9e93,	// (0x000637bc) call5_swipe_1_pane_g1

0xc953,	// (0x0006627c) call5_swipe_1_pane_g2_ParamLimits

0xc953,	// (0x0006627c) call5_swipe_1_pane_g2

0x0001,

0xfb28,	// (0x00069451) call5_swipe_1_pane_g_ParamLimits

0xfb28,	// (0x00069451) call5_swipe_1_pane_g

0xc95f,	// (0x00066288) call5_swipe_1_pane_t1_ParamLimits

0xc95f,	// (0x00066288) call5_swipe_1_pane_t1

0x9e93,	// (0x000637bc) call5_swipe_2_pane_g1_ParamLimits

0x9e93,	// (0x000637bc) call5_swipe_2_pane_g1

0xc974,	// (0x0006629d) call5_swipe_2_pane_g2_ParamLimits

0xc974,	// (0x0006629d) call5_swipe_2_pane_g2

0x0001,

0xfb2d,	// (0x00069456) call5_swipe_2_pane_g_ParamLimits

0xfb2d,	// (0x00069456) call5_swipe_2_pane_g

0xc980,	// (0x000662a9) call5_swipe_2_pane_t1_ParamLimits

0xc980,	// (0x000662a9) call5_swipe_2_pane_t1

0xc995,	// (0x000662be) sc_swipe_pane_g1_ParamLimits

0xc995,	// (0x000662be) sc_swipe_pane_g1

0xc9a2,	// (0x000662cb) sc_swipe_pane_g2_ParamLimits

0xc9a2,	// (0x000662cb) sc_swipe_pane_g2

0x0001,

0xfb32,	// (0x0006945b) sc_swipe_pane_g_ParamLimits

0xfb32,	// (0x0006945b) sc_swipe_pane_g

0xc9ae,	// (0x000662d7) sc_swipe_pane_t1_ParamLimits

0xc9ae,	// (0x000662d7) sc_swipe_pane_t1

0x9792,	// (0x000630bb) main_cmail_launcher_pane

0x7a41,	// (0x0006136a) aid_size_cell_cmail_l_ParamLimits

0x7a41,	// (0x0006136a) aid_size_cell_cmail_l

0x7a4f,	// (0x00061378) grid_cmail_l_pane_ParamLimits

0x7a4f,	// (0x00061378) grid_cmail_l_pane

0x7a69,	// (0x00061392) cell_cmail_l_pane_ParamLimits

0x7a69,	// (0x00061392) cell_cmail_l_pane

0xc9c3,	// (0x000662ec) cell_cmail_l_pane_g1_ParamLimits

0xc9c3,	// (0x000662ec) cell_cmail_l_pane_g1

0xc9cf,	// (0x000662f8) cell_cmail_l_pane_t1_ParamLimits

0xc9cf,	// (0x000662f8) cell_cmail_l_pane_t1

0xc9e5,	// (0x0006630e) cell_cmail_l_pane_t2_ParamLimits

0xc9e5,	// (0x0006630e) cell_cmail_l_pane_t2

0x0001,

0xfb37,	// (0x00069460) cell_cmail_l_pane_t_ParamLimits

0xfb37,	// (0x00069460) cell_cmail_l_pane_t

0x9e2c,	// (0x00063755) grid_highlight_pane_cp018_ParamLimits

0x9e2c,	// (0x00063755) grid_highlight_pane_cp018

0x0ee9,	// (0x0005a812) main2_pane_ParamLimits

0x0ee9,	// (0x0005a812) main2_pane

0x9fe3,	// (0x0006390c) popup_sp_fs_action_menu_bg_pane_g1

0x9feb,	// (0x00063914) popup_sp_fs_action_menu_bg_pane_g2

0x9ff3,	// (0x0006391c) popup_sp_fs_action_menu_bg_pane_g3

0x9ffb,	// (0x00063924) popup_sp_fs_action_menu_bg_pane_g4

0xa003,	// (0x0006392c) popup_sp_fs_action_menu_bg_pane_g5

0xa00b,	// (0x00063934) popup_sp_fs_action_menu_bg_pane_g6

0xa013,	// (0x0006393c) popup_sp_fs_action_menu_bg_pane_g7

0xa01b,	// (0x00063944) popup_sp_fs_action_menu_bg_pane_g8

0xa023,	// (0x0006394c) popup_sp_fs_action_menu_bg_pane_g9

0xa02b,	// (0x00063954) popup_sp_fs_action_menu_bg_pane_g10

0xa02b,	// (0x00063954) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x00068a54) popup_sp_fs_action_menu_bg_pane_g

0x9e93,	// (0x000637bc) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t3_g3_g1

0x9e93,	// (0x000637bc) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t3_g3_g2

0x9e93,	// (0x000637bc) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x00068b02) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x00068b02) list_medium_line_x2_t3_g3_g

0xa17e,	// (0x00063aa7) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t3_g3_t1

0xa17e,	// (0x00063aa7) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t3_g3_t2

0xa17e,	// (0x00063aa7) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x00068b09) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x00068b09) list_medium_line_x2_t3_g3_t

0x9e93,	// (0x000637bc) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t3_g2_g1

0x9e93,	// (0x000637bc) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x00068b10) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x00068b10) list_medium_line_x2_t3_g2_g

0xa17e,	// (0x00063aa7) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t3_g2_t1

0xa17e,	// (0x00063aa7) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t3_g2_t2

0xa17e,	// (0x00063aa7) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x00068b09) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x00068b09) list_medium_line_x2_t3_g2_t

0x9e93,	// (0x000637bc) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t4_g4_g1

0x9e93,	// (0x000637bc) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t4_g4_g2

0x9e93,	// (0x000637bc) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t4_g4_g3

0x9e93,	// (0x000637bc) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x00068b15) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x00068b15) list_medium_line_x2_t4_g4_g

0xa17e,	// (0x00063aa7) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t4_g4_t1

0xa17e,	// (0x00063aa7) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t4_g4_t2

0xa17e,	// (0x00063aa7) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t4_g4_t3

0xa17e,	// (0x00063aa7) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x00068b1e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x00068b1e) list_medium_line_x2_t4_g4_t

0x9e93,	// (0x000637bc) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t2_g4_g1

0x9e93,	// (0x000637bc) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t2_g4_g2

0x9e93,	// (0x000637bc) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t2_g4_g3

0x9e93,	// (0x000637bc) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x00068b15) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x00068b15) list_medium_line_x2_t2_g4_g

0xa17e,	// (0x00063aa7) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t2_g4_t1

0xa17e,	// (0x00063aa7) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1bc,	// (0x00068ae5) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1bc,	// (0x00068ae5) list_medium_line_x2_t2_g4_t

0x9e93,	// (0x000637bc) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t2_g3_g1

0x9e93,	// (0x000637bc) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t2_g3_g2

0x9e93,	// (0x000637bc) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x00068b02) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x00068b02) list_medium_line_x2_t2_g3_g

0xa17e,	// (0x00063aa7) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t2_g3_t1

0xa17e,	// (0x00063aa7) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1bc,	// (0x00068ae5) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1bc,	// (0x00068ae5) list_medium_line_x2_t2_g3_t

0x2c0a,	// (0x0005c533) main_sp_fs_list_pane_ParamLimits

0x2c0a,	// (0x0005c533) main_sp_fs_list_pane

0xa702,	// (0x0006402b) sp_fs_scroll_pane_ParamLimits

0xa702,	// (0x0006402b) sp_fs_scroll_pane

0xa70e,	// (0x00064037) list_medium_line_x2_t3_t1

0xa70e,	// (0x00064037) list_medium_line_x2_t3_t2

0xa70e,	// (0x00064037) list_medium_line_x2_t3_t3

0x0002,

0xf2a2,	// (0x00068bcb) list_medium_line_x2_t3_t

0xa70e,	// (0x00064037) list_medium_line_x3_t4_t1

0xa70e,	// (0x00064037) list_medium_line_x3_t4_t2

0xa70e,	// (0x00064037) list_medium_line_x3_t4_t3

0xa70e,	// (0x00064037) list_medium_line_x3_t4_t4

0x0003,

0xf2a9,	// (0x00068bd2) list_medium_line_x3_t4_t

0xa70e,	// (0x00064037) list_medium_line_x4_t5_t1

0xa70e,	// (0x00064037) list_medium_line_x4_t5_t2

0xa70e,	// (0x00064037) list_medium_line_x4_t5_t3

0xa70e,	// (0x00064037) list_medium_line_x4_t5_t4

0xa70e,	// (0x00064037) list_medium_line_x4_t5_t5

0x0004,

0xf2b2,	// (0x00068bdb) list_medium_line_x4_t5_t

0x9e93,	// (0x000637bc) list_medium_line_t4_g4_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_t4_g4_g1

0x9e93,	// (0x000637bc) list_medium_line_t4_g4_g2_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_t4_g4_g2

0x9e93,	// (0x000637bc) list_medium_line_t4_g4_g3_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_t4_g4_g3

0x9e93,	// (0x000637bc) list_medium_line_t4_g4_g4_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x00068b15) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x00068b15) list_medium_line_t4_g4_g

0xa17e,	// (0x00063aa7) list_medium_line_t4_g4_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t4_g4_t1

0xa17e,	// (0x00063aa7) list_medium_line_t4_g4_t2_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t4_g4_t2

0xa17e,	// (0x00063aa7) list_medium_line_t4_g4_t3_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t4_g4_t3

0xa17e,	// (0x00063aa7) list_medium_line_t4_g4_t4_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x00068b1e) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x00068b1e) list_medium_line_t4_g4_t

0x2ca5,	// (0x0005c5ce) chi_dic_find_pane_g1

0x3b79,	// (0x0005d4a2) main_tport_pane

0xa70e,	// (0x00064037) list_medium_line_plain_t1

0x9e93,	// (0x000637bc) list_medium_line_t2_g2_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_t2_g2_g1

0x9e93,	// (0x000637bc) list_medium_line_t2_g2_g2_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x00068b10) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x00068b10) list_medium_line_t2_g2_g

0xa17e,	// (0x00063aa7) list_medium_line_t2_g2_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t2_g2_t1

0xa17e,	// (0x00063aa7) list_medium_line_t2_g2_t2_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t2_g2_t2

0x0001,

0xf1bc,	// (0x00068ae5) list_medium_line_t2_g2_t_ParamLimits

0xf1bc,	// (0x00068ae5) list_medium_line_t2_g2_t

0x690f,	// (0x00060238) aid_sp_fs_list_icon_a_sm

0x6917,	// (0x00060240) aid_sp_fs_list_icon_d

0x691f,	// (0x00060248) aid_sp_fs_text_primary

0x6928,	// (0x00060251) aid_sp_fs_text_secondary

0x970d,	// (0x00063036) list_medium_line

0x970d,	// (0x00063036) list_medium_line_g2

0x970d,	// (0x00063036) list_medium_line_g3

0x970d,	// (0x00063036) list_medium_line_plain

0x970d,	// (0x00063036) list_medium_line_plain_t2

0x970d,	// (0x00063036) list_medium_line_plain_t3

0x970d,	// (0x00063036) list_medium_line_right_icon

0x970d,	// (0x00063036) list_medium_line_right_iconx2

0x970d,	// (0x00063036) list_medium_line_t2

0x970d,	// (0x00063036) list_medium_line_t2_g2

0x970d,	// (0x00063036) list_medium_line_t2_g3

0x970d,	// (0x00063036) list_medium_line_t2_right_icon

0x970d,	// (0x00063036) list_medium_line_t2_right_iconx2

0x970d,	// (0x00063036) list_medium_line_t3

0x970d,	// (0x00063036) list_medium_line_t3_g2

0x970d,	// (0x00063036) list_medium_line_t3_g3

0x970d,	// (0x00063036) list_medium_line_t3_right_iconx2

0x970d,	// (0x00063036) list_medium_line_t4_g4

0x970d,	// (0x00063036) list_medium_line_x2

0x970d,	// (0x00063036) list_medium_line_x2_t2_g2

0x970d,	// (0x00063036) list_medium_line_x2_t2_g3

0x970d,	// (0x00063036) list_medium_line_x2_t2_g4

0x970d,	// (0x00063036) list_medium_line_x2_t3

0x970d,	// (0x00063036) list_medium_line_x2_t3_g2

0x970d,	// (0x00063036) list_medium_line_x2_t3_g3

0x970d,	// (0x00063036) list_medium_line_x2_t3_g4

0x970d,	// (0x00063036) list_medium_line_x2_t4_g2

0x970d,	// (0x00063036) list_medium_line_x2_t4_g4

0x970d,	// (0x00063036) list_medium_line_x3

0x970d,	// (0x00063036) list_medium_line_x3_t4

0x970d,	// (0x00063036) list_medium_line_x3_t4_g4

0x970d,	// (0x00063036) list_medium_line_x4_t4

0x970d,	// (0x00063036) list_medium_line_x4_t4_g7

0x970d,	// (0x00063036) list_medium_line_x4_t5

0x6931,	// (0x0006025a) list_single_fs_dyc_pane_ParamLimits

0x6931,	// (0x0006025a) list_single_fs_dyc_pane

0x9e93,	// (0x000637bc) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x4_t4_g7_g1

0x9e93,	// (0x000637bc) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x4_t4_g7_g2

0x9e93,	// (0x000637bc) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x4_t4_g7_g3

0x9e93,	// (0x000637bc) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x4_t4_g7_g4

0x9e93,	// (0x000637bc) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x4_t4_g7_g5

0x9e93,	// (0x000637bc) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x4_t4_g7_g6

0x9ea1,	// (0x000637ca) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9ea1,	// (0x000637ca) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa3f,	// (0x00069368) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa3f,	// (0x00069368) list_medium_line_x4_t4_g7_g

0xa17e,	// (0x00063aa7) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x4_t4_g7_t1

0xa17e,	// (0x00063aa7) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x4_t4_g7_t2

0xa17e,	// (0x00063aa7) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x4_t4_g7_t3

0xad5b,	// (0x00064684) list_medium_line_x4_t4_g7_t4_ParamLimits

0xad5b,	// (0x00064684) list_medium_line_x4_t4_g7_t4

0xad5b,	// (0x00064684) list_medium_line_x4_t4_g7_t5_ParamLimits

0xad5b,	// (0x00064684) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa4e,	// (0x00069377) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa4e,	// (0x00069377) list_medium_line_x4_t4_g7_t

0x729c,	// (0x00060bc5) list_single_dyc_row_pane_ParamLimits

0x729c,	// (0x00060bc5) list_single_dyc_row_pane

0x79c2,	// (0x000612eb) call5_gesture_pane_ParamLimits

0x79c2,	// (0x000612eb) call5_gesture_pane

0x7a18,	// (0x00061341) call5_windows_pane_ParamLimits

0x7a18,	// (0x00061341) call5_windows_pane

0x7a83,	// (0x000613ac) call5_swipe_1_pane_cp_ParamLimits

0x7a83,	// (0x000613ac) call5_swipe_1_pane_cp

0x7a8f,	// (0x000613b8) call5_swipe_2_pane_cp_ParamLimits

0x7a8f,	// (0x000613b8) call5_swipe_2_pane_cp

0xa16c,	// (0x00063a95) call5_image_pane_cp

0x7a9b,	// (0x000613c4) popup_call5_audio_first_window_cp_ParamLimits

0x7a9b,	// (0x000613c4) popup_call5_audio_first_window_cp

0xc995,	// (0x000662be) call5_swipe_1_pane_g1_cp_ParamLimits

0xc995,	// (0x000662be) call5_swipe_1_pane_g1_cp

0xca02,	// (0x0006632b) call5_swipe_1_pane_g2_cp

0xc9ae,	// (0x000662d7) call5_swipe_1_pane_t1_cp_ParamLimits

0xc9ae,	// (0x000662d7) call5_swipe_1_pane_t1_cp

0xc995,	// (0x000662be) call5_swipe_2_pane_g1_cp_ParamLimits

0xc995,	// (0x000662be) call5_swipe_2_pane_g1_cp

0xca0a,	// (0x00066333) call5_swipe_2_pane_g2_cp

0xca12,	// (0x0006633b) call5_swipe_2_pane_t1_cp_ParamLimits

0xca12,	// (0x0006633b) call5_swipe_2_pane_t1_cp

0x9e2c,	// (0x00063755) main_sp_fs_email_pane

0xca27,	// (0x00066350) main_sp_fs_listscroll_pane_te

0x7aa9,	// (0x000613d2) popup_sp_fs_action_menu_pane_ParamLimits

0x7aa9,	// (0x000613d2) popup_sp_fs_action_menu_pane

0xa1ac,	// (0x00063ad5) bg_sp_fs_ctrlbar_pane_g1

0xca30,	// (0x00066359) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xca39,	// (0x00066362) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xca42,	// (0x0006636b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa1ac,	// (0x00063ad5) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb3c,	// (0x00069465) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe054,	// (0x0006797d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe054,	// (0x0006797d) bg_sp_fs_ctrlbar_ddmenu_pane

0xca4b,	// (0x00066374) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xca4b,	// (0x00066374) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xca57,	// (0x00066380) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xca57,	// (0x00066380) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb45,	// (0x0006946e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb45,	// (0x0006946e) main_sp_fs_ctrlbar_ddmenu_pane_g

0xca63,	// (0x0006638c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xca63,	// (0x0006638c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa1ac,	// (0x00063ad5) list_medium_line_t2_right_icon_g1

0xa70e,	// (0x00064037) list_medium_line_t2_right_icon_t1

0xa70e,	// (0x00064037) list_medium_line_t2_right_icon_t2

0x0001,

0xfb4a,	// (0x00069473) list_medium_line_t2_right_icon_t

0xad6f,	// (0x00064698) bg_sp_fs_ctrlbar_pane_ParamLimits

0xad6f,	// (0x00064698) bg_sp_fs_ctrlbar_pane

0x7b33,	// (0x0006145c) main_sp_fs_ctrlbar_button_pane_cp01

0x7b3d,	// (0x00061466) main_sp_fs_ctrlbar_ddmenu_pane

0xcab5,	// (0x000663de) main_sp_fs_ctrlbar_pane_g1

0xcac1,	// (0x000663ea) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfb4f,	// (0x00069478) main_sp_fs_ctrlbar_pane_g

0x7b7b,	// (0x000614a4) main_sp_fs_ctrlbar_pane_t1

0x7bba,	// (0x000614e3) main_sp_fs_ctrlbar_pane

0x7bde,	// (0x00061507) main_sp_fs_listscroll_pane_te_cp01

0x7bfe,	// (0x00061527) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7bfe,	// (0x00061527) popup_sp_fs_action_menu_pane_cp01

0x9e2c,	// (0x00063755) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9e2c,	// (0x00063755) bg_sp_fs_highlight_list_pane_cp01

0xcae8,	// (0x00066411) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xcae8,	// (0x00066411) sp_fs_action_menu_list_gene_pane_g1

0xcaf7,	// (0x00066420) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xcaf7,	// (0x00066420) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb5d,	// (0x00069486) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb5d,	// (0x00069486) sp_fs_action_menu_list_gene_pane_g

0xcb04,	// (0x0006642d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xcb04,	// (0x0006642d) sp_fs_action_menu_list_gene_pane_t1

0xcb1c,	// (0x00066445) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcb1c,	// (0x00066445) sp_fs_action_menu_list_gene_pane

0xcb3b,	// (0x00066464) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xcb3b,	// (0x00066464) popup_sp_fs_action_menu_bg_pane

0xcb49,	// (0x00066472) sp_fs_action_menu_list_pane_ParamLimits

0xcb49,	// (0x00066472) sp_fs_action_menu_list_pane

0x7c23,	// (0x0006154c) sp_fs_scroll_pane_cp01_ParamLimits

0x7c23,	// (0x0006154c) sp_fs_scroll_pane_cp01

0xa70e,	// (0x00064037) list_medium_line_plain_t2_t1

0xa70e,	// (0x00064037) list_medium_line_plain_t2_t2

0x0001,

0xfb4a,	// (0x00069473) list_medium_line_plain_t2_t

0xa70e,	// (0x00064037) list_medium_line_plain_t3_t1

0xa70e,	// (0x00064037) list_medium_line_plain_t3_t2

0xa70e,	// (0x00064037) list_medium_line_plain_t3_t3

0x0002,

0xf2a2,	// (0x00068bcb) list_medium_line_plain_t3_t

0x9e93,	// (0x000637bc) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t2_g2_g1

0x9e93,	// (0x000637bc) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x00068b10) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x00068b10) list_medium_line_x2_t2_g2_g

0xa17e,	// (0x00063aa7) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t2_g2_t1

0xa17e,	// (0x00063aa7) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1bc,	// (0x00068ae5) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1bc,	// (0x00068ae5) list_medium_line_x2_t2_g2_t

0x9e93,	// (0x000637bc) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t4_g2_g1

0x9e93,	// (0x000637bc) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x00068b10) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x00068b10) list_medium_line_x2_t4_g2_g

0xa17e,	// (0x00063aa7) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t4_g2_t1

0xa17e,	// (0x00063aa7) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t4_g2_t2

0xa17e,	// (0x00063aa7) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t4_g2_t3

0xa17e,	// (0x00063aa7) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x00068b1e) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x00068b1e) list_medium_line_x2_t4_g2_t

0xa1ac,	// (0x00063ad5) list_medium_line_t3_right_iconx2_g1

0xa1ac,	// (0x00063ad5) list_medium_line_t3_right_iconx2_g2

0xa1ac,	// (0x00063ad5) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c3,	// (0x00068cec) list_medium_line_t3_right_iconx2_g

0xa70e,	// (0x00064037) list_medium_line_t3_right_iconx2_t1

0xa70e,	// (0x00064037) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfb4a,	// (0x00069473) list_medium_line_t3_right_iconx2_t

0x9e93,	// (0x000637bc) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x3_t4_g4_g1

0x9e93,	// (0x000637bc) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x3_t4_g4_g2

0x9e93,	// (0x000637bc) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x3_t4_g4_g3

0x9e93,	// (0x000637bc) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x00068b15) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x00068b15) list_medium_line_x3_t4_g4_g

0xa17e,	// (0x00063aa7) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x3_t4_g4_t1

0xa17e,	// (0x00063aa7) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x3_t4_g4_t2

0xa17e,	// (0x00063aa7) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x3_t4_g4_t3

0xa17e,	// (0x00063aa7) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x00068b1e) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x00068b1e) list_medium_line_x3_t4_g4_t

0x7c49,	// (0x00061572) list_single_dyc_row_text_pane_t1_ParamLimits

0x7c49,	// (0x00061572) list_single_dyc_row_text_pane_t1

0x7c92,	// (0x000615bb) list_single_dyc_row_text_pane_t2_ParamLimits

0x7c92,	// (0x000615bb) list_single_dyc_row_text_pane_t2

0xcb69,	// (0x00066492) list_single_dyc_row_text_pane_t3_ParamLimits

0xcb69,	// (0x00066492) list_single_dyc_row_text_pane_t3

0x0005,

0xfb62,	// (0x0006948b) list_single_dyc_row_text_pane_t_ParamLimits

0xfb62,	// (0x0006948b) list_single_dyc_row_text_pane_t

0xcb8d,	// (0x000664b6) list_single_dyc_row_pane_g1_ParamLimits

0xcb8d,	// (0x000664b6) list_single_dyc_row_pane_g1

0xcb99,	// (0x000664c2) list_single_dyc_row_pane_g2_ParamLimits

0xcb99,	// (0x000664c2) list_single_dyc_row_pane_g2

0xcba5,	// (0x000664ce) list_single_dyc_row_pane_g3_ParamLimits

0xcba5,	// (0x000664ce) list_single_dyc_row_pane_g3

0xcbb1,	// (0x000664da) list_single_dyc_row_pane_g4_ParamLimits

0xcbb1,	// (0x000664da) list_single_dyc_row_pane_g4

0x0003,

0xfb6f,	// (0x00069498) list_single_dyc_row_pane_g_ParamLimits

0xfb6f,	// (0x00069498) list_single_dyc_row_pane_g

0xcbbd,	// (0x000664e6) list_single_dyc_row_text_pane_ParamLimits

0xcbbd,	// (0x000664e6) list_single_dyc_row_text_pane

0x970d,	// (0x00063036) bg_sp_fs_scroll_pane

0xcbdc,	// (0x00066505) thumb_sp_fs_scroll_pane

0x9e93,	// (0x000637bc) list_medium_line_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_g1

0xa17e,	// (0x00063aa7) list_medium_line_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t1

0x9e93,	// (0x000637bc) list_medium_line_x2_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_g1

0x9e93,	// (0x000637bc) list_medium_line_x2_g2_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x00068b10) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x00068b10) list_medium_line_x2_g

0xa17e,	// (0x00063aa7) list_medium_line_x2_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t1

0x9e93,	// (0x000637bc) list_medium_line_x3_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x3_g1

0xeba9,	// (0x000684d2) list_medium_line_x3_g2_ParamLimits

0xeba9,	// (0x000684d2) list_medium_line_x3_g2

0x0001,

0xfb78,	// (0x000694a1) list_medium_line_x3_g_ParamLimits

0xfb78,	// (0x000694a1) list_medium_line_x3_g

0xcbe5,	// (0x0006650e) list_medium_line_x3_t1_ParamLimits

0xcbe5,	// (0x0006650e) list_medium_line_x3_t1

0xcbf9,	// (0x00066522) thumb_sp_fs_scroll_pane_g1

0xcc02,	// (0x0006652b) thumb_sp_fs_scroll_pane_g2

0xcc0b,	// (0x00066534) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfb7d,	// (0x000694a6) thumb_sp_fs_scroll_pane_g

0xcbf9,	// (0x00066522) bg_sp_fs_scroll_pane_g1

0xcc02,	// (0x0006652b) bg_sp_fs_scroll_pane_g2

0xcc0b,	// (0x00066534) bg_sp_fs_scroll_pane_g3

0x0002,

0xfb7d,	// (0x000694a6) bg_sp_fs_scroll_pane_g

0x9e93,	// (0x000637bc) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t3_g4_g1

0x9e93,	// (0x000637bc) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t3_g4_g2

0x9e93,	// (0x000637bc) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t3_g4_g3

0x9e93,	// (0x000637bc) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x00068b15) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x00068b15) list_medium_line_x2_t3_g4_g

0xa17e,	// (0x00063aa7) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t3_g4_t1

0xa17e,	// (0x00063aa7) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t3_g4_t2

0xa17e,	// (0x00063aa7) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x00068b09) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x00068b09) list_medium_line_x2_t3_g4_t

0x9e93,	// (0x000637bc) list_medium_line_g2_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_g2_g1

0x9e93,	// (0x000637bc) list_medium_line_g2_g2_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x00068b10) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x00068b10) list_medium_line_g2_g

0xa17e,	// (0x00063aa7) list_medium_line_g2_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_g2_t1

0x9e93,	// (0x000637bc) list_medium_line_t3_g2_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_t3_g2_g1

0x9e93,	// (0x000637bc) list_medium_line_t3_g2_g2_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x00068b10) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x00068b10) list_medium_line_t3_g2_g

0xa17e,	// (0x00063aa7) list_medium_line_t3_g2_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t3_g2_t1

0xa17e,	// (0x00063aa7) list_medium_line_t3_g2_t2_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t3_g2_t2

0xa17e,	// (0x00063aa7) list_medium_line_t3_g2_t3_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x00068b09) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x00068b09) list_medium_line_t3_g2_t

0xa1ac,	// (0x00063ad5) list_medium_line_right_icon_g1

0xa70e,	// (0x00064037) list_medium_line_right_icon_t1

0x9e93,	// (0x000637bc) list_medium_line_t2_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_t2_g1

0xa17e,	// (0x00063aa7) list_medium_line_t2_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t2_t1

0xa17e,	// (0x00063aa7) list_medium_line_t2_t2_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t2_t2

0x0001,

0xf1bc,	// (0x00068ae5) list_medium_line_t2_t_ParamLimits

0xf1bc,	// (0x00068ae5) list_medium_line_t2_t

0x9e93,	// (0x000637bc) list_medium_line_t3_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_t3_g1

0xa17e,	// (0x00063aa7) list_medium_line_t3_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t3_t1

0xa17e,	// (0x00063aa7) list_medium_line_t3_t2_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t3_t2

0xa17e,	// (0x00063aa7) list_medium_line_t3_t3_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x00068b09) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x00068b09) list_medium_line_t3_t

0x9e93,	// (0x000637bc) list_medium_line_g3_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_g3_g1

0x9e93,	// (0x000637bc) list_medium_line_g3_g2_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_g3_g2

0x9e93,	// (0x000637bc) list_medium_line_g3_g3_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x00068b02) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x00068b02) list_medium_line_g3_g

0xa17e,	// (0x00063aa7) list_medium_line_g3_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_g3_t1

0x9e93,	// (0x000637bc) list_medium_line_t2_g3_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_t2_g3_g1

0x9e93,	// (0x000637bc) list_medium_line_t2_g3_g2_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_t2_g3_g2

0x9e93,	// (0x000637bc) list_medium_line_t2_g3_g3_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x00068b02) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x00068b02) list_medium_line_t2_g3_g

0xa17e,	// (0x00063aa7) list_medium_line_t2_g3_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t2_g3_t1

0xa17e,	// (0x00063aa7) list_medium_line_t2_g3_t2_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t2_g3_t2

0x0001,

0xf1bc,	// (0x00068ae5) list_medium_line_t2_g3_t_ParamLimits

0xf1bc,	// (0x00068ae5) list_medium_line_t2_g3_t

0x9e93,	// (0x000637bc) list_medium_line_t3_g3_g1_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_t3_g3_g1

0x9e93,	// (0x000637bc) list_medium_line_t3_g3_g2_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_t3_g3_g2

0x9e93,	// (0x000637bc) list_medium_line_t3_g3_g3_ParamLimits

0x9e93,	// (0x000637bc) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x00068b02) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x00068b02) list_medium_line_t3_g3_g

0xa17e,	// (0x00063aa7) list_medium_line_t3_g3_t1_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t3_g3_t1

0xa17e,	// (0x00063aa7) list_medium_line_t3_g3_t2_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t3_g3_t2

0xa17e,	// (0x00063aa7) list_medium_line_t3_g3_t3_ParamLimits

0xa17e,	// (0x00063aa7) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x00068b09) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x00068b09) list_medium_line_t3_g3_t

0xa1ac,	// (0x00063ad5) list_medium_line_right_iconx2_g1

0xa1ac,	// (0x00063ad5) list_medium_line_right_iconx2_g2

0x0001,

0xf3be,	// (0x00068ce7) list_medium_line_right_iconx2_g

0xa70e,	// (0x00064037) list_medium_line_right_iconx2_t1

0xa1ac,	// (0x00063ad5) list_medium_line_t2_right_iconx2_g1

0xa1ac,	// (0x00063ad5) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3be,	// (0x00068ce7) list_medium_line_t2_right_iconx2_g

0xa70e,	// (0x00064037) list_medium_line_t2_right_iconx2_t1

0xa70e,	// (0x00064037) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb4a,	// (0x00069473) list_medium_line_t2_right_iconx2_t

0xa70e,	// (0x00064037) list_medium_line_x4_t4_t1

0xa70e,	// (0x00064037) list_medium_line_x4_t4_t2

0xa70e,	// (0x00064037) list_medium_line_x4_t4_t3

0xa70e,	// (0x00064037) list_medium_line_x4_t4_t4

0x0003,

0xf2a9,	// (0x00068bd2) list_medium_line_x4_t4_t

0x7e0a,	// (0x00061733) tport_appsw_pane_ParamLimits

0x7e0a,	// (0x00061733) tport_appsw_pane

0x7e22,	// (0x0006174b) tport_contact_pane_ParamLimits

0x7e22,	// (0x0006174b) tport_contact_pane

0x7e3a,	// (0x00061763) tport_listscroll_pane_ParamLimits

0x7e3a,	// (0x00061763) tport_listscroll_pane

0x7e54,	// (0x0006177d) cell_tport_appsw_pane_ParamLimits

0x7e54,	// (0x0006177d) cell_tport_appsw_pane

0xad39,	// (0x00064662) tport_appsw_pane_g1_ParamLimits

0xad39,	// (0x00064662) tport_appsw_pane_g1

0xcc14,	// (0x0006653d) tport_contact_pane_g1

0xc4e7,	// (0x00065e10) tport_contact_pane_t1

0xcc1d,	// (0x00066546) tport_contact_pane_t2

0x0001,

0xfb84,	// (0x000694ad) tport_contact_pane_t

0xcc2b,	// (0x00066554) list_tport_pane

0xcc34,	// (0x0006655d) scroll_pane_cp_030

0x7e9c,	// (0x000617c5) cell_tport_appsw_pane_g1

0x7eac,	// (0x000617d5) cell_tport_appsw_pane_t1

0x7eba,	// (0x000617e3) grid_highlight_pane_cp019

0x7ec2,	// (0x000617eb) list_tport_double_graphic_pane_ParamLimits

0x7ec2,	// (0x000617eb) list_tport_double_graphic_pane

0x9e2c,	// (0x00063755) list_highlight_pane_cp023_ParamLimits

0x9e2c,	// (0x00063755) list_highlight_pane_cp023

0x7ecf,	// (0x000617f8) list_tport_double_graphic_pane_g1_ParamLimits

0x7ecf,	// (0x000617f8) list_tport_double_graphic_pane_g1

0x7edc,	// (0x00061805) list_tport_double_graphic_pane_t1_ParamLimits

0x7edc,	// (0x00061805) list_tport_double_graphic_pane_t1

0x7ef1,	// (0x0006181a) list_tport_double_graphic_pane_t2_ParamLimits

0x7ef1,	// (0x0006181a) list_tport_double_graphic_pane_t2

0x0001,

0xfb90,	// (0x000694b9) list_tport_double_graphic_pane_t_ParamLimits

0xfb90,	// (0x000694b9) list_tport_double_graphic_pane_t

0x970d,	// (0x00063036) main_cale_note_pane

0x596f,	// (0x0005f298) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x596f,	// (0x0005f298) cell_vitu2_function_top_wide_pane_cp01

0x7638,	// (0x00060f61) wait_bar_pane_cp05_ParamLimits

0x9e2c,	// (0x00063755) listscroll_cmail_pane

0xcc3d,	// (0x00066566) list_cmail_pane

0x7f03,	// (0x0006182c) list_cmail_body_pane

0x7f18,	// (0x00061841) list_single_cmail_header_caption_pane

0x7f2e,	// (0x00061857) list_single_cmail_header_detail_pane_ParamLimits

0x7f2e,	// (0x00061857) list_single_cmail_header_detail_pane

0xcc4d,	// (0x00066576) list_single_cmail_header_caption_pane_t1

0x7f57,	// (0x00061880) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7f57,	// (0x00061880) list_single_cmail_header_detail_pane_g1

0xcc64,	// (0x0006658d) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcc64,	// (0x0006658d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb95,	// (0x000694be) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb95,	// (0x000694be) list_single_cmail_header_detail_pane_g

0xcc7d,	// (0x000665a6) list_single_cmail_header_detail_pane_t1_ParamLimits

0xcc7d,	// (0x000665a6) list_single_cmail_header_detail_pane_t1

0xccdd,	// (0x00066606) list_single_cmail_header_editor_pane_bg_ParamLimits

0xccdd,	// (0x00066606) list_single_cmail_header_editor_pane_bg

0xc644,	// (0x00065f6d) list_cmail_body_pane_g1

0xccf4,	// (0x0006661d) list_cmail_body_pane_t1

0xebf8,	// (0x00068521) list_single_cmail_header_editor_pane_bg_g1

0xa3bd,	// (0x00063ce6) list_single_cmail_header_editor_pane_bg_g1_copy1

0xec08,	// (0x00068531) list_single_cmail_header_editor_pane_bg_g1_copy2

0xec00,	// (0x00068529) list_single_cmail_header_editor_pane_bg_g1_copy3

0xee26,	// (0x0006874f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xec28,	// (0x00068551) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xec18,	// (0x00068541) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xec20,	// (0x00068549) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa39d,	// (0x00063cc6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7f6f,	// (0x00061898) calenote_gesture_pane_ParamLimits

0x7f6f,	// (0x00061898) calenote_gesture_pane

0x7f8f,	// (0x000618b8) calenote_window_pane_ParamLimits

0x7f8f,	// (0x000618b8) calenote_window_pane

0xcd02,	// (0x0006662b) popup_note_window_cp01

0x7fab,	// (0x000618d4) calenote_swipe_1_pane_ParamLimits

0x7fab,	// (0x000618d4) calenote_swipe_1_pane

0x7a8f,	// (0x000613b8) calenote_swipe_2_pane_ParamLimits

0x7a8f,	// (0x000613b8) calenote_swipe_2_pane

0xc995,	// (0x000662be) calenote_swipe_1_pane_g1_ParamLimits

0xc995,	// (0x000662be) calenote_swipe_1_pane_g1

0xc9a2,	// (0x000662cb) calenote_swipe_1_pane_g2_ParamLimits

0xc9a2,	// (0x000662cb) calenote_swipe_1_pane_g2

0x0001,

0xfb32,	// (0x0006945b) calenote_swipe_1_pane_g_ParamLimits

0xfb32,	// (0x0006945b) calenote_swipe_1_pane_g

0xcd14,	// (0x0006663d) calenote_swipe_1_pane_t1_ParamLimits

0xcd14,	// (0x0006663d) calenote_swipe_1_pane_t1

0xc995,	// (0x000662be) calenote_swipe_2_pane_g1_ParamLimits

0xc995,	// (0x000662be) calenote_swipe_2_pane_g1

0xcd33,	// (0x0006665c) calenote_swipe_2_pane_g2_ParamLimits

0xcd33,	// (0x0006665c) calenote_swipe_2_pane_g2

0x0001,

0xfba1,	// (0x000694ca) calenote_swipe_2_pane_g_ParamLimits

0xfba1,	// (0x000694ca) calenote_swipe_2_pane_g

0xcd3f,	// (0x00066668) calenote_swipe_2_pane_t1_ParamLimits

0xcd3f,	// (0x00066668) calenote_swipe_2_pane_t1

0x970d,	// (0x00063036) main_mup_navstr_pane

0x47fe,	// (0x0005e127) main_mup3_pane_t7_ParamLimits

0x47fe,	// (0x0005e127) main_mup3_pane_t7

0xdb26,	// (0x0006744f) main_mp4_pane_g6_ParamLimits

0xdb26,	// (0x0006744f) main_mp4_pane_g6

0xdce8,	// (0x00067611) main_image3_pane_t4_ParamLimits

0xdce8,	// (0x00067611) main_image3_pane_t4

0x7fc0,	// (0x000618e9) popup_navstr_preview_pane_ParamLimits

0x7fc0,	// (0x000618e9) popup_navstr_preview_pane

0x7fd4,	// (0x000618fd) scroll_navstr_pane_ParamLimits

0x7fd4,	// (0x000618fd) scroll_navstr_pane

0x970d,	// (0x00063036) bg_popup_preview_window_pane_cp04

0xcd66,	// (0x0006668f) popup_navstr_preview_pane_t1

0x7fe8,	// (0x00061911) scroll_navstr_pane_g1_ParamLimits

0x7fe8,	// (0x00061911) scroll_navstr_pane_g1

0x7ffc,	// (0x00061925) scroll_navstr_pane_t1_ParamLimits

0x7ffc,	// (0x00061925) scroll_navstr_pane_t1

0xcd0b,	// (0x00066634) bg_button_pane_cp014

0xcd0b,	// (0x00066634) bg_button_pane_cp030

0x7968,	// (0x00061291) list_double_fisheye_pane_g4_ParamLimits

0x7968,	// (0x00061291) list_double_fisheye_pane_g4

0x7974,	// (0x0006129d) list_double_fisheye_pane_g5_ParamLimits

0x7974,	// (0x0006129d) list_double_fisheye_pane_g5

0xa702,	// (0x0006402b) sp_fs_scroll_pane_cp03

0xcab5,	// (0x000663de) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xcac1,	// (0x000663ea) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb4f,	// (0x00069478) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7b7b,	// (0x000614a4) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcc45,	// (0x0006656e) sp_fs_scroll_pane_cp02

0xa0b4,	// (0x000639dd) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa0b4,	// (0x000639dd) popup_sp_fs_calendar_preview_list_single_pane

0x970d,	// (0x00063036) main_cam6_pano_pane

0x9784,	// (0x000630ad) main_mup3_pane_ParamLimits

0x970d,	// (0x00063036) main_phacti_pane

0x750b,	// (0x00060e34) bg_button_pane_cp11

0x7525,	// (0x00060e4e) main_mobtv_info_pane_g2_ParamLimits

0x7525,	// (0x00060e4e) main_mobtv_info_pane_g2

0x0001,

0xfaaf,	// (0x000693d8) main_mobtv_info_pane_g_ParamLimits

0xfaaf,	// (0x000693d8) main_mobtv_info_pane_g

0x7702,	// (0x0006102b) sc_clock_pane_t5_ParamLimits

0x7702,	// (0x0006102b) sc_clock_pane_t5

0x77ca,	// (0x000610f3) main_radioblah_pane_g1_ParamLimits

0xc8e1,	// (0x0006620a) main_radioblah_pane_t3_ParamLimits

0xc8e1,	// (0x0006620a) main_radioblah_pane_t3

0xc8f9,	// (0x00066222) main_radioblah_pane_t4_ParamLimits

0xc8f9,	// (0x00066222) main_radioblah_pane_t4

0x77f2,	// (0x0006111b) main_radioblah_text_pane_ParamLimits

0x77f2,	// (0x0006111b) main_radioblah_text_pane

0x7804,	// (0x0006112d) main_radioblah_info_pane_g1_ParamLimits

0x789d,	// (0x000611c6) main_radioblah_info_pane_t4_ParamLimits

0x789d,	// (0x000611c6) main_radioblah_info_pane_t4

0x9e2c,	// (0x00063755) main_sp_fs_calendar_pane

0x8013,	// (0x0006193c) main_phacti_pane_g1

0x801b,	// (0x00061944) phacti_note_pane_ParamLimits

0x801b,	// (0x00061944) phacti_note_pane

0xcd7d,	// (0x000666a6) phacti_term_pane_ParamLimits

0xcd7d,	// (0x000666a6) phacti_term_pane

0xcd92,	// (0x000666bb) phacti_note_pane_t1_ParamLimits

0xcd92,	// (0x000666bb) phacti_note_pane_t1

0xcda9,	// (0x000666d2) phacti_term_pane_g1

0xcdb1,	// (0x000666da) phacti_term_pane_t1_ParamLimits

0xcdb1,	// (0x000666da) phacti_term_pane_t1

0xcddb,	// (0x00066704) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa153,	// (0x00063a7c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfbab,	// (0x000694d4) popup_sp_fs_calendar_preview_list_single_pane_g

0xcde3,	// (0x0006670c) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xcde3,	// (0x0006670c) popup_sp_fs_calendar_preview_list_single_pane_t1

0xcdf9,	// (0x00066722) aid_popup_sp_fs_bg_corner_pane

0xa1ac,	// (0x00063ad5) popup_sp_fs_calendar_preview_bg_pane_g1

0x970d,	// (0x00063036) popup_sp_fs_calendar_preview_bg_pane

0xce01,	// (0x0006672a) popup_sp_fs_calendar_preview_list_pane

0xad6f,	// (0x00064698) bg_main_sp_fs_cale_pane_ParamLimits

0xad6f,	// (0x00064698) bg_main_sp_fs_cale_pane

0xce12,	// (0x0006673b) listscroll_cale_mrui_pane_ParamLimits

0xce12,	// (0x0006673b) listscroll_cale_mrui_pane

0xce27,	// (0x00066750) listscroll_sp_fs_schedule_track_pane

0xce30,	// (0x00066759) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xce30,	// (0x00066759) main_sp_fs_ctrlbar_pane_cp01

0xce43,	// (0x0006676c) main_sp_fs_ribbon_pane

0xce4b,	// (0x00066774) popup_sp_fs_cale_preview_window

0x8090,	// (0x000619b9) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8090,	// (0x000619b9) list_single_sp_fs_schedule_track_pane

0x9e2c,	// (0x00063755) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9e2c,	// (0x00063755) bg_sp_fs_highlight_list_pane_cp03

0x80a3,	// (0x000619cc) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x80a3,	// (0x000619cc) list_single_sp_fs_schedule_track_pane_g1

0x80af,	// (0x000619d8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x80af,	// (0x000619d8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfbb0,	// (0x000694d9) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfbb0,	// (0x000694d9) list_single_sp_fs_schedule_track_pane_g

0x80bb,	// (0x000619e4) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x80bb,	// (0x000619e4) list_single_sp_fs_schedule_track_pane_t1

0x80d5,	// (0x000619fe) sp_fs_schedule_track_pane_ParamLimits

0x80d5,	// (0x000619fe) sp_fs_schedule_track_pane

0xce5d,	// (0x00066786) sp_fs_schedule_track_pane_g1

0xce65,	// (0x0006678e) sp_fs_schedule_track_pane_g2

0xce6d,	// (0x00066796) sp_fs_schedule_track_pane_g3

0xce75,	// (0x0006679e) sp_fs_schedule_track_pane_g4

0xce7d,	// (0x000667a6) sp_fs_schedule_track_pane_g5

0x0004,

0xfbb5,	// (0x000694de) sp_fs_schedule_track_pane_g

0xebf8,	// (0x00068521) bg_sp_fs_schedule_viewer_highlight_g1

0xa3bd,	// (0x00063ce6) bg_sp_fs_schedule_viewer_highlight_g2

0xec00,	// (0x00068529) bg_sp_fs_schedule_viewer_highlight_g3

0xec08,	// (0x00068531) bg_sp_fs_schedule_viewer_highlight_g4

0xee26,	// (0x0006874f) bg_sp_fs_schedule_viewer_highlight_g5

0xec18,	// (0x00068541) bg_sp_fs_schedule_viewer_highlight_g6

0xec20,	// (0x00068549) bg_sp_fs_schedule_viewer_highlight_g7

0xec28,	// (0x00068551) bg_sp_fs_schedule_viewer_highlight_g8

0xa39d,	// (0x00063cc6) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfbc0,	// (0x000694e9) bg_sp_fs_schedule_viewer_highlight_g

0x970d,	// (0x00063036) bg_main_sp_fs_ribbon_pane

0x80e6,	// (0x00061a0f) main_sp_fs_ribbon_pane_g1

0xce85,	// (0x000667ae) main_sp_fs_ribbon_pane_t1

0x80ef,	// (0x00061a18) main_sp_fs_ribbon_pane_t2

0xce94,	// (0x000667bd) main_sp_fs_ribbon_pane_t3

0x0002,

0xfbd3,	// (0x000694fc) main_sp_fs_ribbon_pane_t

0xcea3,	// (0x000667cc) main_sp_fs_ribbon_scheduler_pane

0xceab,	// (0x000667d4) bg_main_sp_fs_ribbon_pane_g1

0xceb4,	// (0x000667dd) bg_main_sp_fs_ribbon_pane_g2

0xcebd,	// (0x000667e6) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfbda,	// (0x00069503) bg_main_sp_fs_ribbon_pane_g

0xcec5,	// (0x000667ee) main_sp_fs_ribbon_scheduler_pane_g1

0xcece,	// (0x000667f7) main_sp_fs_ribbon_scheduler_pane_g2

0xced7,	// (0x00066800) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfbe1,	// (0x0006950a) main_sp_fs_ribbon_scheduler_pane_g

0xcee0,	// (0x00066809) list_cale_mrui_pane

0x80fe,	// (0x00061a27) sp_fs_scroll_pane_cp07_ParamLimits

0x80fe,	// (0x00061a27) sp_fs_scroll_pane_cp07

0x811a,	// (0x00061a43) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x811a,	// (0x00061a43) bg_sp_fs_schedule_viewer_highlight

0xceed,	// (0x00066816) list_single_sp_fs_schedule_track_pane_cp01

0xcef5,	// (0x0006681e) list_sp_fs_schedule_track_pane

0xcefd,	// (0x00066826) sp_fs_scroll_pane_cp06_ParamLimits

0xcefd,	// (0x00066826) sp_fs_scroll_pane_cp06

0xa1ac,	// (0x00063ad5) bgmain_sp_fs_calendar_pane_g1

0x812a,	// (0x00061a53) list_single_cale_mrui_pane_ParamLimits

0x812a,	// (0x00061a53) list_single_cale_mrui_pane

0xcf0f,	// (0x00066838) list_single_cale_mrui_row_pane_ParamLimits

0xcf0f,	// (0x00066838) list_single_cale_mrui_row_pane

0xcf1c,	// (0x00066845) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcf1c,	// (0x00066845) list_single_cale_mrui_row_pane_g1

0xcf61,	// (0x0006688a) list_single_cale_mrui_row_pane_t1_ParamLimits

0xcf61,	// (0x0006688a) list_single_cale_mrui_row_pane_t1

0x814b,	// (0x00061a74) list_single_cale_mrui_row_pane_t2_ParamLimits

0x814b,	// (0x00061a74) list_single_cale_mrui_row_pane_t2

0xcf73,	// (0x0006689c) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcf73,	// (0x0006689c) list_single_cale_mrui_row_pane_t3

0xcfa2,	// (0x000668cb) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcfa2,	// (0x000668cb) list_single_cale_mrui_row_pane_t4

0x0003,

0xfbef,	// (0x00069518) list_single_cale_mrui_row_pane_t_ParamLimits

0xfbef,	// (0x00069518) list_single_cale_mrui_row_pane_t

0x81b3,	// (0x00061adc) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x81b3,	// (0x00061adc) list_single_cmail_header_editor_pane_bg_cp01

0x81d9,	// (0x00061b02) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x81d9,	// (0x00061b02) list_single_cmail_header_editor_pane_bg_cp02

0x81f9,	// (0x00061b22) main_radioblah_text_pane_t1_ParamLimits

0x81f9,	// (0x00061b22) main_radioblah_text_pane_t1

0xcfd1,	// (0x000668fa) cam6_indi_pane_cp01

0xcfd9,	// (0x00066902) cam6_mode_pane_cp01

0xcfe1,	// (0x0006690a) cam6_pano_pane

0xcfea,	// (0x00066913) cam6_zoom_pane_cp01

0xcff2,	// (0x0006691b) cam6_pano_image_pane

0xcffd,	// (0x00066926) cam6_pano_pane_g1

0xc644,	// (0x00065f6d) cam6_pano_pane_g2

0xd006,	// (0x0006692f) cam6_pano_pane_g3

0xd00f,	// (0x00066938) cam6_pano_pane_g4

0xe8d5,	// (0x000681fe) cam6_pano_pane_g5

0xd018,	// (0x00066941) cam6_pano_pane_g6

0xd022,	// (0x0006694b) cam6_pano_pane_g7

0xd02a,	// (0x00066953) cam6_pano_pane_g8

0xd033,	// (0x0006695c) cam6_pano_pane_g9

0x0008,

0xfbf8,	// (0x00069521) cam6_pano_pane_g

0x970d,	// (0x00063036) main_browser_tag_pane

0xcd5e,	// (0x00066687) grid_navstr_albumart_pane

0xd03e,	// (0x00066967) cell_navstr_albumart_pane_ParamLimits

0xd03e,	// (0x00066967) cell_navstr_albumart_pane

0xd05e,	// (0x00066987) cell_navstr_albumart_pane_g1

0xbe9e,	// (0x000657c7) cell_navstr_albumart_pane_g2

0xbeae,	// (0x000657d7) cell_navstr_albumart_pane_g3

0xbea6,	// (0x000657cf) cell_navstr_albumart_pane_g4

0x0003,

0xfc0b,	// (0x00069534) cell_navstr_albumart_pane_g

0x8213,	// (0x00061b3c) bt_list_pane_ParamLimits

0x8213,	// (0x00061b3c) bt_list_pane

0x8227,	// (0x00061b50) bt_list_pane_t1

0x8236,	// (0x00061b5f) bt_list_pane_t2

0x0001,

0xfc14,	// (0x0006953d) bt_list_pane_t

0x970d,	// (0x00063036) main_cale_prevew_pane

0x8245,	// (0x00061b6e) popup_cale_preview_window_ParamLimits

0x8245,	// (0x00061b6e) popup_cale_preview_window

0x9e2c,	// (0x00063755) bg_popup_preview_window_pane_cp05_ParamLimits

0x9e2c,	// (0x00063755) bg_popup_preview_window_pane_cp05

0xd066,	// (0x0006698f) list_cale_preview_pane_ParamLimits

0xd066,	// (0x0006698f) list_cale_preview_pane

0x8260,	// (0x00061b89) list_double_cale_preview_pane_ParamLimits

0x8260,	// (0x00061b89) list_double_cale_preview_pane

0x8272,	// (0x00061b9b) list_single_cale_preview_pane_ParamLimits

0x8272,	// (0x00061b9b) list_single_cale_preview_pane

0x8288,	// (0x00061bb1) list_single_cale_preview_pane_g1

0x8290,	// (0x00061bb9) list_single_cale_preview_pane_t1_ParamLimits

0x8290,	// (0x00061bb9) list_single_cale_preview_pane_t1

0x82a5,	// (0x00061bce) list_double_cale_preview_pane_g1

0x82ad,	// (0x00061bd6) list_double_cale_preview_pane_t1_ParamLimits

0x82ad,	// (0x00061bd6) list_double_cale_preview_pane_t1

0x82c2,	// (0x00061beb) list_double_cale_preview_pane_t2_ParamLimits

0x82c2,	// (0x00061beb) list_double_cale_preview_pane_t2

0x0001,

0xfc19,	// (0x00069542) list_double_cale_preview_pane_t_ParamLimits

0xfc19,	// (0x00069542) list_double_cale_preview_pane_t

0x970d,	// (0x00063036) main_ezdial_pane

0x9e2c,	// (0x00063755) main_sp_fs_email_pane_ParamLimits

0x7aeb,	// (0x00061414) cmail_ddmenu_btn01_pane_ParamLimits

0x7aeb,	// (0x00061414) cmail_ddmenu_btn01_pane

0x7afe,	// (0x00061427) cmail_ddmenu_btn02_pane_ParamLimits

0x7afe,	// (0x00061427) cmail_ddmenu_btn02_pane

0x7b21,	// (0x0006144a) cmail_ddmenu_btn03_pane_ParamLimits

0x7b21,	// (0x0006144a) cmail_ddmenu_btn03_pane

0x7bba,	// (0x000614e3) main_sp_fs_ctrlbar_pane_ParamLimits

0x7bde,	// (0x00061507) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7f03,	// (0x0006182c) list_cmail_body_pane_ParamLimits

0xcc5b,	// (0x00066584) bg_button_pane_cp12

0xcc70,	// (0x00066599) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcc70,	// (0x00066599) list_single_cmail_header_detail_pane_g3

0xccb9,	// (0x000665e2) list_single_cmail_header_detail_pane_t2_ParamLimits

0xccb9,	// (0x000665e2) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb9c,	// (0x000694c5) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb9c,	// (0x000694c5) list_single_cmail_header_detail_pane_t

0xcdc6,	// (0x000666ef) phacti_term_pane_t2_ParamLimits

0xcdc6,	// (0x000666ef) phacti_term_pane_t2

0x0001,

0xfba6,	// (0x000694cf) phacti_term_pane_t_ParamLimits

0xfba6,	// (0x000694cf) phacti_term_pane_t

0xd072,	// (0x0006699b) aid_size_list_single_double

0x82da,	// (0x00061c03) popup_ezdial_listscroll_window

0x82f6,	// (0x00061c1f) popup_number_entry_window_cp01

0xa16c,	// (0x00063a95) bg_popup_call_pane_cp09

0xd07e,	// (0x000669a7) ezdial_list_pane

0xd086,	// (0x000669af) scroll_pane_cp23

0xad6f,	// (0x00064698) bg_button_pane_cp028_ParamLimits

0xad6f,	// (0x00064698) bg_button_pane_cp028

0x8304,	// (0x00061c2d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8304,	// (0x00061c2d) cmail_ddmenu_btn01_pane_g1

0x8310,	// (0x00061c39) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8310,	// (0x00061c39) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc1e,	// (0x00069547) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc1e,	// (0x00069547) cmail_ddmenu_btn01_pane_g

0xd08e,	// (0x000669b7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd08e,	// (0x000669b7) cmail_ddmenu_btn01_pane_t1

0xad6f,	// (0x00064698) bg_button_pane_cp029_ParamLimits

0xad6f,	// (0x00064698) bg_button_pane_cp029

0x8324,	// (0x00061c4d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8324,	// (0x00061c4d) cmail_ddmenu_btn02_pane_g1

0x833c,	// (0x00061c65) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x833c,	// (0x00061c65) cmail_ddmenu_btn02_pane_t1

0x9e2c,	// (0x00063755) bg_button_pane_cp031_ParamLimits

0x9e2c,	// (0x00063755) bg_button_pane_cp031

0x8324,	// (0x00061c4d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8324,	// (0x00061c4d) cmail_ddmenu_btn03_pane_g1

0x833c,	// (0x00061c65) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x833c,	// (0x00061c65) cmail_ddmenu_btn03_pane_t1

0x5159,	// (0x0005ea82) cell_dialer2_keypad_pane_t1_ParamLimits

0x5173,	// (0x0005ea9c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5173,	// (0x0005ea9c) cell_dialer2_keypad_pane_t1_copy1

0x732e,	// (0x00060c57) ncimui_group_button_pane

0x9e2c,	// (0x00063755) main_sp_fs_calendar_pane_ParamLimits

0x7f18,	// (0x00061841) list_single_cmail_header_caption_pane_ParamLimits

0xce09,	// (0x00066732) aid_recal_txt_sm_pane

0x970d,	// (0x00063036) mian_recal_day_pane

0xce4b,	// (0x00066774) popup_sp_fs_cale_preview_window_ParamLimits

0xd0a4,	// (0x000669cd) list_recal_day_pane

0xd0e6,	// (0x00066a0f) list_single_recal_day_pane_ParamLimits

0xd0e6,	// (0x00066a0f) list_single_recal_day_pane

0xd0f8,	// (0x00066a21) list_single_recal_day_pane_g1_ParamLimits

0xd0f8,	// (0x00066a21) list_single_recal_day_pane_g1

0xd104,	// (0x00066a2d) list_single_recal_day_pane_g2_ParamLimits

0xd104,	// (0x00066a2d) list_single_recal_day_pane_g2

0xd110,	// (0x00066a39) list_single_recal_day_pane_g3_ParamLimits

0xd110,	// (0x00066a39) list_single_recal_day_pane_g3

0x8360,	// (0x00061c89) list_single_recal_day_pane_g4_ParamLimits

0x8360,	// (0x00061c89) list_single_recal_day_pane_g4

0xd11c,	// (0x00066a45) list_single_recal_day_pane_g5_ParamLimits

0xd11c,	// (0x00066a45) list_single_recal_day_pane_g5

0xd128,	// (0x00066a51) list_single_recal_day_pane_g6_ParamLimits

0xd128,	// (0x00066a51) list_single_recal_day_pane_g6

0x0004,

0xfc2d,	// (0x00069556) list_single_recal_day_pane_g_ParamLimits

0xfc2d,	// (0x00069556) list_single_recal_day_pane_g

0xd13c,	// (0x00066a65) list_single_recal_day_pane_t1

0xd14e,	// (0x00066a77) list_single_recal_day_pane_t2

0x0001,

0xfc38,	// (0x00069561) list_single_recal_day_pane_t

0x8378,	// (0x00061ca1) ncimui_query_button_pane_ParamLimits

0x8378,	// (0x00061ca1) ncimui_query_button_pane

0x8388,	// (0x00061cb1) ncimui_query_button_pane_t1_ParamLimits

0x8388,	// (0x00061cb1) ncimui_query_button_pane_t1

0xd160,	// (0x00066a89) ncimui_query_button_pane_t2_ParamLimits

0xd160,	// (0x00066a89) ncimui_query_button_pane_t2

0x0001,

0xfc3d,	// (0x00069566) ncimui_query_button_pane_t_ParamLimits

0xfc3d,	// (0x00069566) ncimui_query_button_pane_t

0x839b,	// (0x00061cc4) query_button_pane_ParamLimits

0x839b,	// (0x00061cc4) query_button_pane

0x970d,	// (0x00063036) bg_button_pane_cp0028

0xd173,	// (0x00066a9c) query_button_pane_t1

0x3b79,	// (0x0005d4a2) main_tport_pane_ParamLimits

0x7dc7,	// (0x000616f0) bg_popup_window_pane_cp01_ParamLimits

0x7dc7,	// (0x000616f0) bg_popup_window_pane_cp01

0x7de2,	// (0x0006170b) heading_pane_cp08_ParamLimits

0x7de2,	// (0x0006170b) heading_pane_cp08

0x7df5,	// (0x0006171e) heading_pane_cp07_ParamLimits

0x7df5,	// (0x0006171e) heading_pane_cp07

0x7e9c,	// (0x000617c5) cell_tport_appsw_pane_g2

0x0002,

0xfb89,	// (0x000694b2) cell_tport_appsw_pane_g

0x30c1,	// (0x0005c9ea) input_candi_list_open_g1

0xa5a3,	// (0x00063ecc) list_cale_time_pane_g6_ParamLimits

0xa5a3,	// (0x00063ecc) list_cale_time_pane_g6

0x419a,	// (0x0005dac3) aid_size_touch_calib_1_ParamLimits

0x419a,	// (0x0005dac3) aid_size_touch_calib_1

0x41ac,	// (0x0005dad5) aid_size_touch_calib_2_ParamLimits

0x41ac,	// (0x0005dad5) aid_size_touch_calib_2

0x41c4,	// (0x0005daed) aid_size_touch_calib_3_ParamLimits

0x41c4,	// (0x0005daed) aid_size_touch_calib_3

0x41e2,	// (0x0005db0b) aid_size_touch_calib_4_ParamLimits

0x41e2,	// (0x0005db0b) aid_size_touch_calib_4

0x41fa,	// (0x0005db23) main_touch_calib_button_group_pane_ParamLimits

0x41fa,	// (0x0005db23) main_touch_calib_button_group_pane

0x4212,	// (0x0005db3b) main_touch_calib_pane_g1_ParamLimits

0x4224,	// (0x0005db4d) main_touch_calib_pane_g2_ParamLimits

0x4236,	// (0x0005db5f) main_touch_calib_pane_g3_ParamLimits

0x4248,	// (0x0005db71) main_touch_calib_pane_g4_ParamLimits

0xf64f,	// (0x00068f78) main_touch_calib_pane_g_ParamLimits

0x425a,	// (0x0005db83) main_touch_calib_pane_t1_ParamLimits

0x4274,	// (0x0005db9d) main_touch_calib_pane_t2_ParamLimits

0x428e,	// (0x0005dbb7) main_touch_calib_pane_t3_ParamLimits

0x42a2,	// (0x0005dbcb) main_touch_calib_pane_t4_ParamLimits

0x42b6,	// (0x0005dbdf) main_touch_calib_pane_t5_ParamLimits

0xf658,	// (0x00068f81) main_touch_calib_pane_t_ParamLimits

0xe67b,	// (0x00067fa4) list_single_fp_cale_pane_g3_ParamLimits

0xe67b,	// (0x00067fa4) list_single_fp_cale_pane_g3

0x9784,	// (0x000630ad) bg_button_pane_cp012_ParamLimits

0x9784,	// (0x000630ad) bg_vkb2_func_pane_cp03_ParamLimits

0x61a9,	// (0x0005fad2) cell_vitu2_function_top_pane_g1_ParamLimits

0x9784,	// (0x000630ad) bg_vkb2_func_pane_cp04_ParamLimits

0x72b9,	// (0x00060be2) main_ncimui_button_group_pane_ParamLimits

0x72b9,	// (0x00060be2) main_ncimui_button_group_pane

0x7319,	// (0x00060c42) main_ncimui_pane_t3_ParamLimits

0x7319,	// (0x00060c42) main_ncimui_pane_t3

0xcd74,	// (0x0006669d) phacti_button_group_pane

0xd072,	// (0x0006699b) aid_size_list_single_double_ParamLimits

0x82da,	// (0x00061c03) popup_ezdial_listscroll_window_ParamLimits

0x82f6,	// (0x00061c1f) popup_number_entry_window_cp01_ParamLimits

0x83ae,	// (0x00061cd7) phacti_button_pane_ParamLimits

0x83ae,	// (0x00061cd7) phacti_button_pane

0x970d,	// (0x00063036) bg_button_pane_cp14

0xd181,	// (0x00066aaa) phacti_button_pane_t1

0x83bf,	// (0x00061ce8) main_touch_calib_button_pane_ParamLimits

0x83bf,	// (0x00061ce8) main_touch_calib_button_pane

0x9f27,	// (0x00063850) bg_button_pane_cp18_ParamLimits

0x9f27,	// (0x00063850) bg_button_pane_cp18

0xd18f,	// (0x00066ab8) main_touch_calib_button_pane_t1_ParamLimits

0xd18f,	// (0x00066ab8) main_touch_calib_button_pane_t1

0xd1a5,	// (0x00066ace) main_touch_calib_button_pane_t2_ParamLimits

0xd1a5,	// (0x00066ace) main_touch_calib_button_pane_t2

0x0001,

0xfc42,	// (0x0006956b) main_touch_calib_button_pane_t_ParamLimits

0xfc42,	// (0x0006956b) main_touch_calib_button_pane_t

0x970d,	// (0x00063036) cell_ncimui_button_pane

0x970d,	// (0x00063036) bg_button_pane_cp032

0xd1c3,	// (0x00066aec) cell_ncimui_button_pane_t1

0xdcc8,	// (0x000675f1) image3_infobar_pane_ParamLimits

0xdcc8,	// (0x000675f1) image3_infobar_pane

0x772e,	// (0x00061057) fs_bigclock_status_pane_ParamLimits

0x772e,	// (0x00061057) fs_bigclock_status_pane

0x773b,	// (0x00061064) main_fs_bigclock_clock_pane_ParamLimits

0x773b,	// (0x00061064) main_fs_bigclock_clock_pane

0x7759,	// (0x00061082) main_fs_bigclock_indi_pane_ParamLimits

0x7759,	// (0x00061082) main_fs_bigclock_indi_pane

0x778b,	// (0x000610b4) main_fs_bigclock_swipe_pane_ParamLimits

0x778b,	// (0x000610b4) main_fs_bigclock_swipe_pane

0x970d,	// (0x00063036) main_fs_clock_dumped_data

0xc751,	// (0x0006607a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc751,	// (0x0006607a) list_single_fs_bigclock_indicator_pane_g1

0xc76c,	// (0x00066095) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc76c,	// (0x00066095) list_single_fs_bigclock_indicator_pane_g2

0xc786,	// (0x000660af) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc786,	// (0x000660af) list_single_fs_bigclock_indicator_pane_g3

0xc7a0,	// (0x000660c9) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc7a0,	// (0x000660c9) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfae3,	// (0x0006940c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfae3,	// (0x0006940c) list_single_fs_bigclock_indicator_pane_g

0xc7cb,	// (0x000660f4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc7cb,	// (0x000660f4) list_single_fs_bigclock_indicator_pane_t1

0xc7f3,	// (0x0006611c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc7f3,	// (0x0006611c) list_single_fs_bigclock_indicator_pane_t2

0xc81b,	// (0x00066144) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc81b,	// (0x00066144) list_single_fs_bigclock_indicator_pane_t3

0xc843,	// (0x0006616c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc843,	// (0x0006616c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfaee,	// (0x00069417) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfaee,	// (0x00069417) list_single_fs_bigclock_indicator_pane_t

0xd1d1,	// (0x00066afa) image3_infobar_fav_pane_ParamLimits

0xd1d1,	// (0x00066afa) image3_infobar_fav_pane

0xd1e1,	// (0x00066b0a) image3_infobar_loc_pane_ParamLimits

0xd1e1,	// (0x00066b0a) image3_infobar_loc_pane

0xd1f5,	// (0x00066b1e) image3_infobar_time_pane_ParamLimits

0xd1f5,	// (0x00066b1e) image3_infobar_time_pane

0xa1ac,	// (0x00063ad5) image3_infobar_time_pane_g1

0xd205,	// (0x00066b2e) image3_infobar_time_pane_t1

0xa1ac,	// (0x00063ad5) image3_infobar_loc_pane_g1

0xd213,	// (0x00066b3c) image3_infobar_loc_pane_g2

0x0001,

0xfc47,	// (0x00069570) image3_infobar_loc_pane_g

0xd21b,	// (0x00066b44) image3_infobar_loc_pane_t1

0xa1ac,	// (0x00063ad5) image3_infobar_fav_pane_g1

0xd229,	// (0x00066b52) image3_infobar_fav_pane_g2

0x0001,

0xfc4c,	// (0x00069575) image3_infobar_fav_pane_g

0xd231,	// (0x00066b5a) fs_bigclock_status_battery_pane

0xd23a,	// (0x00066b63) fs_bigclock_status_signal_pane

0xd243,	// (0x00066b6c) fs_bigclock_status_title_pane

0xd24c,	// (0x00066b75) fs_bigclock_status_signal_pane_g1

0xd255,	// (0x00066b7e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfc51,	// (0x0006957a) fs_bigclock_status_signal_pane_g

0xd25d,	// (0x00066b86) fs_bigclock_status_battery_pane_g1

0xd266,	// (0x00066b8f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfc56,	// (0x0006957f) fs_bigclock_status_battery_pane_g

0xd26e,	// (0x00066b97) fs_bigclock_status_title_pane_t1

0x83d4,	// (0x00061cfd) main_fs_bigclock_clock_pane_g1

0x83d4,	// (0x00061cfd) main_fs_bigclock_clock_pane_g2

0x83e5,	// (0x00061d0e) main_fs_bigclock_clock_pane_g3

0x83e5,	// (0x00061d0e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfc5b,	// (0x00069584) main_fs_bigclock_clock_pane_g

0x83f8,	// (0x00061d21) main_fs_bigclock_clock_pane_t1

0x840e,	// (0x00061d37) main_fs_bigclock_clock_pane_t2

0x0001,

0xfc64,	// (0x0006958d) main_fs_bigclock_clock_pane_t

0xd27c,	// (0x00066ba5) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd27c,	// (0x00066ba5) list_single_fs_bigclock_indicator_pane

0xd28d,	// (0x00066bb6) list_single_fs_bigclock_pane_ParamLimits

0xd28d,	// (0x00066bb6) list_single_fs_bigclock_pane

0xd2b3,	// (0x00066bdc) main_fs_bigclock_indicator_pane_t1

0xd2c2,	// (0x00066beb) list_single_fs_bigclock_pane_g1

0xd2ca,	// (0x00066bf3) list_single_fs_bigclock_pane_t1

0xa1ac,	// (0x00063ad5) main_fs_bigclock_swipe_pane_g1

0xd30d,	// (0x00066c36) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfc75,	// (0x0006959e) main_fs_bigclock_swipe_pane_g

0xd315,	// (0x00066c3e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd315,	// (0x00066c3e) main_fs_bigclock_swipe_pane_t1

0x2c16,	// (0x0005c53f) call_type_pane_ParamLimits

0x970d,	// (0x00063036) main_btmg_pane

0xcf48,	// (0x00066871) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcf48,	// (0x00066871) list_single_cale_mrui_row_pane_g2

0x0002,

0xfbe8,	// (0x00069511) list_single_cale_mrui_row_pane_g_ParamLimits

0xfbe8,	// (0x00069511) list_single_cale_mrui_row_pane_g

0xd0cd,	// (0x000669f6) list_recal_vselct_arw_lo_pane

0xd0d5,	// (0x000669fe) list_recal_vselct_arw_up_pane

0xd0dd,	// (0x00066a06) list_recal_vselct_pane

0x8468,	// (0x00061d91) btmg_button_pane

0x8472,	// (0x00061d9b) main_btmg_pane_g1

0x970d,	// (0x00063036) bg_button_pane_cp044

0xd332,	// (0x00066c5b) btmg_button_pane_t1

0xbfee,	// (0x00065917) aid_listscroll_gen

0x9e2c,	// (0x00063755) main_cntbar_detail_pane

0xcc3d,	// (0x00066566) list_cmail_folder_pane

0xa702,	// (0x0006402b) sp_fs_scroll_pane_cp03_ParamLimits

0x847c,	// (0x00061da5) list_single_fs_dyc_pane_cp01_ParamLimits

0x847c,	// (0x00061da5) list_single_fs_dyc_pane_cp01

0xd340,	// (0x00066c69) aid_size_cmail_indent

0xd349,	// (0x00066c72) list_single_dyc_row_pane_cp01

0x84bf,	// (0x00061de8) cntbar_detail_list_pane_ParamLimits

0x84bf,	// (0x00061de8) cntbar_detail_list_pane

0x850b,	// (0x00061e34) main_cntbar_detail_cont_pane_ParamLimits

0x850b,	// (0x00061e34) main_cntbar_detail_cont_pane

0xa702,	// (0x0006402b) scroll_pane_cp032_ParamLimits

0xa702,	// (0x0006402b) scroll_pane_cp032

0x851f,	// (0x00061e48) cntbar_detail_list_event_pane_ParamLimits

0x851f,	// (0x00061e48) cntbar_detail_list_event_pane

0x84cf,	// (0x00061df8) cntbar_detail_list_shct_pane

0xa40b,	// (0x00063d34) aid_list_gen

0xd352,	// (0x00066c7b) aid_scroll

0xd35b,	// (0x00066c84) aid_size_touch_scroll_bar

0x7933,	// (0x0006125c) aid_list_double

0x852f,	// (0x00061e58) aid_list_single

0xd364,	// (0x00066c8d) aid_list_single_lg

0x8538,	// (0x00061e61) aid_list_z_g_a_sm

0x8540,	// (0x00061e69) aid_list_z_g_d

0x8548,	// (0x00061e71) aid_txt_z_prm

0x8556,	// (0x00061e7f) aid_txt_z_prm_cp01

0x8564,	// (0x00061e8d) aid_txt_z_sec

0x8572,	// (0x00061e9b) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8572,	// (0x00061e9b) main_cntbar_detail_cont_pane_g1

0x8586,	// (0x00061eaf) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8586,	// (0x00061eaf) main_cntbar_detail_cont_pane_g2

0x0001,

0xfc7a,	// (0x000695a3) main_cntbar_detail_cont_pane_g_ParamLimits

0xfc7a,	// (0x000695a3) main_cntbar_detail_cont_pane_g

0xd36d,	// (0x00066c96) main_cntbar_detail_cont_pane_t1

0xd37b,	// (0x00066ca4) main_cntbar_detail_cont_pane_t2

0xd389,	// (0x00066cb2) main_cntbar_detail_cont_pane_t3

0x0002,

0xfc7f,	// (0x000695a8) main_cntbar_detail_cont_pane_t

0x8596,	// (0x00061ebf) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8596,	// (0x00061ebf) cell_cntbar_detail_list_shct_pane

0xd397,	// (0x00066cc0) cntbar_detail_list_shct_pane_g1

0xd3a0,	// (0x00066cc9) cntbar_detail_list_shct_pane_g2

0x0001,

0xfc86,	// (0x000695af) cntbar_detail_list_shct_pane_g

0x85aa,	// (0x00061ed3) cntbar_detail_list_event_pane_g1_ParamLimits

0x85aa,	// (0x00061ed3) cntbar_detail_list_event_pane_g1

0x85b6,	// (0x00061edf) cntbar_detail_list_event_pane_g2_ParamLimits

0x85b6,	// (0x00061edf) cntbar_detail_list_event_pane_g2

0x0005,

0xfc8b,	// (0x000695b4) cntbar_detail_list_event_pane_g_ParamLimits

0xfc8b,	// (0x000695b4) cntbar_detail_list_event_pane_g

0x8622,	// (0x00061f4b) cntbar_detail_list_event_pane_t1_ParamLimits

0x8622,	// (0x00061f4b) cntbar_detail_list_event_pane_t1

0x8637,	// (0x00061f60) cntbar_detail_list_event_pane_t2_ParamLimits

0x8637,	// (0x00061f60) cntbar_detail_list_event_pane_t2

0x0002,

0xfc98,	// (0x000695c1) cntbar_detail_list_event_pane_t_ParamLimits

0xfc98,	// (0x000695c1) cntbar_detail_list_event_pane_t

0xa1ac,	// (0x00063ad5) cell_cntbar_detail_list_shct_pane_g1

0xac28,	// (0x00064551) navi_pane_mv_g3

0x9e2c,	// (0x00063755) main_cntbar_detail_pane_ParamLimits

0x970d,	// (0x00063036) main_notif_wgt_pane

0xdab4,	// (0x000673dd) aid_tch_main_mp4_pane_g4

0xdcc0,	// (0x000675e9) popup_slider_window_cp02

0xd0c3,	// (0x000669ec) list_recal_day_event_pane

0x8493,	// (0x00061dbc) cntbar_detail_btn_pane_ParamLimits

0x8493,	// (0x00061dbc) cntbar_detail_btn_pane

0x84a9,	// (0x00061dd2) cntbar_detail_btn_pane_cp01_ParamLimits

0x84a9,	// (0x00061dd2) cntbar_detail_btn_pane_cp01

0x84cf,	// (0x00061df8) cntbar_detail_list_shct_pane_ParamLimits

0x84df,	// (0x00061e08) cntbar_detail_pane_g1_ParamLimits

0x84df,	// (0x00061e08) cntbar_detail_pane_g1

0x84ef,	// (0x00061e18) cntbar_detail_pane_t1_ParamLimits

0x84ef,	// (0x00061e18) cntbar_detail_pane_t1

0x85c2,	// (0x00061eeb) cntbar_detail_list_event_pane_g3_ParamLimits

0x85c2,	// (0x00061eeb) cntbar_detail_list_event_pane_g3

0x85da,	// (0x00061f03) cntbar_detail_list_event_pane_g4_ParamLimits

0x85da,	// (0x00061f03) cntbar_detail_list_event_pane_g4

0x85f2,	// (0x00061f1b) cntbar_detail_list_event_pane_g5_ParamLimits

0x85f2,	// (0x00061f1b) cntbar_detail_list_event_pane_g5

0x860a,	// (0x00061f33) cntbar_detail_list_event_pane_g6_ParamLimits

0x860a,	// (0x00061f33) cntbar_detail_list_event_pane_g6

0x864c,	// (0x00061f75) cntbar_detail_list_event_pane_t3_ParamLimits

0x864c,	// (0x00061f75) cntbar_detail_list_event_pane_t3

0x865e,	// (0x00061f87) popup_notif_wgt_window_ParamLimits

0x865e,	// (0x00061f87) popup_notif_wgt_window

0x8677,	// (0x00061fa0) popup_submenu_window_cp01_ParamLimits

0x8677,	// (0x00061fa0) popup_submenu_window_cp01

0xa16c,	// (0x00063a95) bg_popup_window_pane_cp10

0xd3a9,	// (0x00066cd2) listscroll_notif_wgt_pane

0xd3bb,	// (0x00066ce4) list_notif_wgt_window

0xd3c4,	// (0x00066ced) scroll_pane_cp033

0x868d,	// (0x00061fb6) list_notif_wgt_row_pane_ParamLimits

0x868d,	// (0x00061fb6) list_notif_wgt_row_pane

0xd3cd,	// (0x00066cf6) aid_size_list_notif_wgt_del

0xd3da,	// (0x00066d03) list_notif_wgt_row_pane_g1

0xd3e6,	// (0x00066d0f) list_notif_wgt_row_pane_g2

0xd3f5,	// (0x00066d1e) list_notif_wgt_row_pane_g3

0x0002,

0xfc9f,	// (0x000695c8) list_notif_wgt_row_pane_g

0xd402,	// (0x00066d2b) list_notif_wgt_row_pane_t1

0xd418,	// (0x00066d41) list_notif_wgt_row_pane_t2

0xd42a,	// (0x00066d53) list_notif_wgt_row_pane_t3

0x0002,

0xfca6,	// (0x000695cf) list_notif_wgt_row_pane_t

0xee40,	// (0x00068769) list_recal_day_event_pane_g1

0xd43c,	// (0x00066d65) list_recal_day_event_pane_t1

0x970d,	// (0x00063036) bg_button_pane_cp045

0xd44b,	// (0x00066d74) cntbar_detail_btn_pane_t1

0xad6f,	// (0x00064698) main_callh_pane_ParamLimits

0xad6f,	// (0x00064698) main_callh_pane

0x970d,	// (0x00063036) main_coverflow0_pane

0x970d,	// (0x00063036) main_wgtman_pane

0x77a3,	// (0x000610cc) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x77a3,	// (0x000610cc) main_fs_bigclock_unlock_btn_pane

0x7e94,	// (0x000617bd) bg_button_pane_cp16

0x7ea4,	// (0x000617cd) cell_tport_appsw_pane_g3

0x869d,	// (0x00061fc6) cf0_flow_pane_ParamLimits

0x869d,	// (0x00061fc6) cf0_flow_pane

0xd459,	// (0x00066d82) listscroll_cf0_pane

0xd464,	// (0x00066d8d) main_cf0_pane_g1

0x86b2,	// (0x00061fdb) main_cf0_pane_t1_ParamLimits

0x86b2,	// (0x00061fdb) main_cf0_pane_t1

0x86c9,	// (0x00061ff2) main_cf0_pane_t2_ParamLimits

0x86c9,	// (0x00061ff2) main_cf0_pane_t2

0x0001,

0xfcb2,	// (0x000695db) main_cf0_pane_t_ParamLimits

0xfcb2,	// (0x000695db) main_cf0_pane_t

0xd476,	// (0x00066d9f) scroll_pane_cp11

0x86e0,	// (0x00062009) cf0_flow_pane_g1

0x86e8,	// (0x00062011) cf0_flow_pane_g2

0x0001,

0xfcb7,	// (0x000695e0) cf0_flow_pane_g

0x86f0,	// (0x00062019) cf0_flow_pane_t1

0x970d,	// (0x00063036) main_call6_pane

0x970d,	// (0x00063036) main_calllock_pane

0x86fe,	// (0x00062027) call6_btn_grp_pane_ParamLimits

0x86fe,	// (0x00062027) call6_btn_grp_pane

0x8718,	// (0x00062041) call6_pane_g1_ParamLimits

0x8718,	// (0x00062041) call6_pane_g1

0x872e,	// (0x00062057) popup_call6_1st_window_ParamLimits

0x872e,	// (0x00062057) popup_call6_1st_window

0x873f,	// (0x00062068) popup_call6_2nd_window_ParamLimits

0x873f,	// (0x00062068) popup_call6_2nd_window

0x8750,	// (0x00062079) cell_call6_btn_pane_ParamLimits

0x8750,	// (0x00062079) cell_call6_btn_pane

0xa16c,	// (0x00063a95) bg_popup_call2_in_pane_cp03

0xd481,	// (0x00066daa) popup_call6_1st_window_g1

0xd489,	// (0x00066db2) popup_call6_1st_window_g2

0xd491,	// (0x00066dba) popup_call6_1st_window_g3

0x0002,

0xfcbc,	// (0x000695e5) popup_call6_1st_window_g

0xd499,	// (0x00066dc2) popup_call6_1st_window_t1

0xd4a8,	// (0x00066dd1) popup_call6_1st_window_t2

0xd4b6,	// (0x00066ddf) popup_call6_1st_window_t3

0x0002,

0xfcc3,	// (0x000695ec) popup_call6_1st_window_t

0xa16c,	// (0x00063a95) bg_popup_call2_in_pane_cp04

0xd4c4,	// (0x00066ded) popup_call6_2nd_window_g1

0xd4cc,	// (0x00066df5) popup_call6_2nd_window_g2

0xd4d4,	// (0x00066dfd) popup_call6_2nd_window_g3

0x0002,

0xfcca,	// (0x000695f3) popup_call6_2nd_window_g

0xd4dc,	// (0x00066e05) popup_call6_2nd_window_t1

0x9792,	// (0x000630bb) bg_button_pane_cp15

0xdf20,	// (0x00067849) cell_call6_btn_pane_g1

0xdf29,	// (0x00067852) cell_call6_btn_pane_t1

0x8763,	// (0x0006208c) listscroll_wgtman_pane_ParamLimits

0x8763,	// (0x0006208c) listscroll_wgtman_pane

0x8784,	// (0x000620ad) wgtman_btn_pane_ParamLimits

0x8784,	// (0x000620ad) wgtman_btn_pane

0xaa2f,	// (0x00064358) aid_scroll_copy1

0xd4eb,	// (0x00066e14) list_wgtman_pane

0x87c7,	// (0x000620f0) wgtman_btn_pane_g1_ParamLimits

0x87c7,	// (0x000620f0) wgtman_btn_pane_g1

0x87f3,	// (0x0006211c) wgtman_btn_pane_t1_ParamLimits

0x87f3,	// (0x0006211c) wgtman_btn_pane_t1

0xd4f5,	// (0x00066e1e) wgtman_btn_pane_t2_ParamLimits

0xd4f5,	// (0x00066e1e) wgtman_btn_pane_t2

0x0001,

0xfcd1,	// (0x000695fa) wgtman_btn_pane_t_ParamLimits

0xfcd1,	// (0x000695fa) wgtman_btn_pane_t

0x8830,	// (0x00062159) listrow_wgtman_pane_ParamLimits

0x8830,	// (0x00062159) listrow_wgtman_pane

0x8842,	// (0x0006216b) listrow_wgtman_pane_g1

0x884f,	// (0x00062178) listrow_wgtman_pane_g2

0x0001,

0xfcd6,	// (0x000695ff) listrow_wgtman_pane_g

0x886d,	// (0x00062196) listrow_wgtman_pane_t1

0x8885,	// (0x000621ae) listrow_wgtman_pane_t2

0x0001,

0xfcdb,	// (0x00069604) listrow_wgtman_pane_t

0x88ab,	// (0x000621d4) wait_bar_pane_cp09

0xd50c,	// (0x00066e35) main_calllock_btn_pane

0xd516,	// (0x00066e3f) main_calllock_pane_g1

0x970d,	// (0x00063036) bg_button_pane_cp17

0xd51e,	// (0x00066e47) main_calllock_btn_pane_g1

0xd527,	// (0x00066e50) main_calllock_btn_pane_t1

0x970d,	// (0x00063036) main_dialer3_pane

0x970d,	// (0x00063036) main_fmrd2_pane

0xa1ac,	// (0x00063ad5) main_fs_bigclock_unlock_btn_pane_g1

0x88c5,	// (0x000621ee) main_fs_bigclock_unlock_btn_pane_t1

0x88d3,	// (0x000621fc) area_fmrd2_info_pane_ParamLimits

0x88d3,	// (0x000621fc) area_fmrd2_info_pane

0x88e4,	// (0x0006220d) area_fmrd2_visual_pane_ParamLimits

0x88e4,	// (0x0006220d) area_fmrd2_visual_pane

0x88f2,	// (0x0006221b) fmrd2_indi_pane_ParamLimits

0x88f2,	// (0x0006221b) fmrd2_indi_pane

0x88ff,	// (0x00062228) area_fmrd2_visual_pane_g1

0x8907,	// (0x00062230) area_fmrd2_visual_pane_t1

0x8917,	// (0x00062240) area_fmrd2_visual_pane_t2

0x8927,	// (0x00062250) area_fmrd2_visual_pane_t3

0x0002,

0xfce5,	// (0x0006960e) area_fmrd2_visual_pane_t

0x8937,	// (0x00062260) area_fmrd2_info_pane_g1

0x893f,	// (0x00062268) area_fmrd2_info_pane_t1

0x894f,	// (0x00062278) area_fmrd2_info_pane_t2

0x895f,	// (0x00062288) area_fmrd2_info_pane_t3

0x896f,	// (0x00062298) area_fmrd2_info_pane_t4

0x0003,

0xfcec,	// (0x00069615) area_fmrd2_info_pane_t

0x897d,	// (0x000622a6) fmrd2_indi_pane_t1

0x898d,	// (0x000622b6) fmrd2_indi_pane_t2

0x899d,	// (0x000622c6) fmrd2_indi_pane_t3

0x0002,

0xfcf5,	// (0x0006961e) fmrd2_indi_pane_t

0xc7af,	// (0x000660d8) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc7af,	// (0x000660d8) list_single_fs_bigclock_indicator_pane_g5

0xc860,	// (0x00066189) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc860,	// (0x00066189) list_single_fs_bigclock_indicator_pane_t5

0x802f,	// (0x00061958) aid_cell_bcale_month_pane_ParamLimits

0x802f,	// (0x00061958) aid_cell_bcale_month_pane

0x804d,	// (0x00061976) bcale_month_pane_ParamLimits

0x804d,	// (0x00061976) bcale_month_pane

0x8071,	// (0x0006199a) bcale_preview_pane_ParamLimits

0x8071,	// (0x0006199a) bcale_preview_pane

0xd2ca,	// (0x00066bf3) list_single_fs_bigclock_pane_t1_ParamLimits

0xd2e9,	// (0x00066c12) list_single_fs_bigclock_pane_t2_ParamLimits

0xd2e9,	// (0x00066c12) list_single_fs_bigclock_pane_t2

0x0001,

0xfc70,	// (0x00069599) list_single_fs_bigclock_pane_t_ParamLimits

0xfc70,	// (0x00069599) list_single_fs_bigclock_pane_t

0x88bd,	// (0x000621e6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfce0,	// (0x00069609) main_fs_bigclock_unlock_btn_pane_g

0x89ad,	// (0x000622d6) aid_dia3_key_size_ParamLimits

0x89ad,	// (0x000622d6) aid_dia3_key_size

0x89bc,	// (0x000622e5) aid_dia3_listrow_size_ParamLimits

0x89bc,	// (0x000622e5) aid_dia3_listrow_size

0x89d1,	// (0x000622fa) dia3_keypad_fun_pane_ParamLimits

0x89d1,	// (0x000622fa) dia3_keypad_fun_pane

0x89ed,	// (0x00062316) dia3_keypad_num_pane_ParamLimits

0x89ed,	// (0x00062316) dia3_keypad_num_pane

0x8a08,	// (0x00062331) dia3_listscroll_pane_ParamLimits

0x8a08,	// (0x00062331) dia3_listscroll_pane

0x8a1b,	// (0x00062344) dia3_numentry_pane_ParamLimits

0x8a1b,	// (0x00062344) dia3_numentry_pane

0xd536,	// (0x00066e5f) dia3_list_pane

0xd541,	// (0x00066e6a) scroll_pane_cp12

0x970d,	// (0x00063036) bg_dia3_numentry_pane

0x8a33,	// (0x0006235c) dia3_numentry_pane_t1

0x8a42,	// (0x0006236b) cell_dia3_key_num_pane

0x8a4a,	// (0x00062373) cell_dia3_key0_fun_pane_ParamLimits

0x8a4a,	// (0x00062373) cell_dia3_key0_fun_pane

0x8a5e,	// (0x00062387) cell_dia3_key1_fun_pane_ParamLimits

0x8a5e,	// (0x00062387) cell_dia3_key1_fun_pane

0x8a76,	// (0x0006239f) dia3_listrow_pane

0xc502,	// (0x00065e2b) bg_dia3_numentry_pane_g1

0x970d,	// (0x00063036) bg_button_pane_cp21

0xd54c,	// (0x00066e75) cell_dia3_key_num_pane_t1

0xd55a,	// (0x00066e83) cell_dia3_key_num_pane_t2

0xd569,	// (0x00066e92) cell_dia3_key_num_pane_t3

0xd578,	// (0x00066ea1) cell_dia3_key_num_pane_t4

0x0003,

0xfcfc,	// (0x00069625) cell_dia3_key_num_pane_t

0x970d,	// (0x00063036) bg_button_pane_cp19

0x8a88,	// (0x000623b1) cell_dia3_key0_fun_pane_g1

0x970d,	// (0x00063036) bg_button_pane_cp20

0x8a90,	// (0x000623b9) cell_dia3_key1_fun_pane_g1

0x8a98,	// (0x000623c1) area_left_week_number_pane

0x8aa4,	// (0x000623cd) area_top_day_name_pane

0x8ab7,	// (0x000623e0) frame_month_view_pane

0xd587,	// (0x00066eb0) grid_month_view_pane

0x8aca,	// (0x000623f3) cell_top_day_name_pane_ParamLimits

0x8aca,	// (0x000623f3) cell_top_day_name_pane

0x8af7,	// (0x00062420) cell_area_left_week_number_pane_ParamLimits

0x8af7,	// (0x00062420) cell_area_left_week_number_pane

0x8b0b,	// (0x00062434) cell_month_view_pane_ParamLimits

0x8b0b,	// (0x00062434) cell_month_view_pane

0xd595,	// (0x00066ebe) frm_month_g1

0x8b38,	// (0x00062461) frm_month_g2

0x8b4b,	// (0x00062474) frm_month_g3

0x8b5e,	// (0x00062487) frm_month_g4

0x8b71,	// (0x0006249a) frm_month_g5

0x8b84,	// (0x000624ad) frm_month_g6

0x8b97,	// (0x000624c0) frm_month_g7

0xd5a2,	// (0x00066ecb) frm_month_g8

0x8baa,	// (0x000624d3) frm_month_g9

0x8bba,	// (0x000624e3) frm_month_g10

0x8bca,	// (0x000624f3) frm_month_g11

0x8bda,	// (0x00062503) frm_month_g12

0x8bec,	// (0x00062515) frm_month_g13

0x8bfe,	// (0x00062527) frm_month_g14

0x8c12,	// (0x0006253b) frm_month_g15

0x8c26,	// (0x0006254f) frm_month_g16

0x000f,

0xfd05,	// (0x0006962e) frm_month_g

0xd5af,	// (0x00066ed8) cell_top_day_name_pane_t1

0x8c3a,	// (0x00062563) cell_area_left_week_number_pane_g1

0x8c46,	// (0x0006256f) cell_area_left_week_number_pane_t1

0x9e93,	// (0x000637bc) cell_month_view_pane_g1

0x8c59,	// (0x00062582) cell_month_view_pane_t1

0x970d,	// (0x00063036) main_fps_pane

0xca7d,	// (0x000663a6) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xca7d,	// (0x000663a6) cmail_ddmenu_btn02_pane_cp1

0xca99,	// (0x000663c2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xca99,	// (0x000663c2) cmail_ddmenu_btn02_pane_cp2

0x8330,	// (0x00061c59) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8330,	// (0x00061c59) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc23,	// (0x0006954c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc23,	// (0x0006954c) cmail_ddmenu_btn02_pane_g

0x834e,	// (0x00061c77) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x834e,	// (0x00061c77) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc28,	// (0x00069551) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc28,	// (0x00069551) cmail_ddmenu_btn02_pane_t

0x8c6c,	// (0x00062595) fps_text_pane_ParamLimits

0x8c6c,	// (0x00062595) fps_text_pane

0x8c83,	// (0x000625ac) main_fps_pane_g1_ParamLimits

0x8c83,	// (0x000625ac) main_fps_pane_g1

0x8c9d,	// (0x000625c6) wait_bar_pane_cp010_ParamLimits

0x8c9d,	// (0x000625c6) wait_bar_pane_cp010

0x8cae,	// (0x000625d7) fps_text_pane_t1_ParamLimits

0x8cae,	// (0x000625d7) fps_text_pane_t1

0xf041,	// (0x0006896a) cam4_image_uncrop_pane_g1

0xf04a,	// (0x00068973) cam4_image_uncrop_pane_g2

0x568e,	// (0x0005efb7) cam4_image_uncrop_pane_g3

0x5697,	// (0x0005efc0) cam4_image_uncrop_pane_g4

0x0003,

0xf79f,	// (0x000690c8) cam4_image_uncrop_pane_g

0x8a76,	// (0x0006239f) dia3_listrow_pane_ParamLimits

0x970d,	// (0x00063036) main_phob2_pane

0x7e65,	// (0x0006178e) cell_tport_appsw_pane_cp02_ParamLimits

0x7e65,	// (0x0006178e) cell_tport_appsw_pane_cp02

0x7e79,	// (0x000617a2) cell_tport_appsw_pane_cp03_ParamLimits

0x7e79,	// (0x000617a2) cell_tport_appsw_pane_cp03

0x970d,	// (0x00063036) phob2_contact_card_pane

0x970d,	// (0x00063036) phob2_listscroll_pane

0xd5c2,	// (0x00066eeb) phob2_list_pane

0xd5ca,	// (0x00066ef3) scroll_pane_cp034

0x8cc6,	// (0x000625ef) phob2_cc_data_pane_ParamLimits

0x8cc6,	// (0x000625ef) phob2_cc_data_pane

0x8ce5,	// (0x0006260e) phob2_cc_listscroll_pane_ParamLimits

0x8ce5,	// (0x0006260e) phob2_cc_listscroll_pane

0x8830,	// (0x00062159) list_double_large_graphic_phob2_pane_ParamLimits

0x8830,	// (0x00062159) list_double_large_graphic_phob2_pane

0x8d03,	// (0x0006262c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8d03,	// (0x0006262c) list_double_large_graphic_phob2_pane_g1

0x8d10,	// (0x00062639) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8d10,	// (0x00062639) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd26,	// (0x0006964f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd26,	// (0x0006964f) list_double_large_graphic_phob2_pane_g

0x8d36,	// (0x0006265f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8d36,	// (0x0006265f) list_double_large_graphic_phob2_pane_t1

0x8d4b,	// (0x00062674) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8d4b,	// (0x00062674) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd2f,	// (0x00069658) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd2f,	// (0x00069658) list_double_large_graphic_phob2_pane_t

0x970d,	// (0x00063036) list_highlight_pane_cp024

0xd5d2,	// (0x00066efb) phob2_cc_button_pane

0x8d60,	// (0x00062689) phob2_cc_data_pane_g1_ParamLimits

0x8d60,	// (0x00062689) phob2_cc_data_pane_g1

0x8d77,	// (0x000626a0) phob2_cc_data_pane_g2_ParamLimits

0x8d77,	// (0x000626a0) phob2_cc_data_pane_g2

0x0001,

0xfd34,	// (0x0006965d) phob2_cc_data_pane_g_ParamLimits

0xfd34,	// (0x0006965d) phob2_cc_data_pane_g

0x8d89,	// (0x000626b2) phob2_cc_data_pane_t1_ParamLimits

0x8d89,	// (0x000626b2) phob2_cc_data_pane_t1

0x8da1,	// (0x000626ca) phob2_cc_data_pane_t2_ParamLimits

0x8da1,	// (0x000626ca) phob2_cc_data_pane_t2

0x8db9,	// (0x000626e2) phob2_cc_data_pane_t3_ParamLimits

0x8db9,	// (0x000626e2) phob2_cc_data_pane_t3

0x0002,

0xfd39,	// (0x00069662) phob2_cc_data_pane_t_ParamLimits

0xfd39,	// (0x00069662) phob2_cc_data_pane_t

0xd5da,	// (0x00066f03) phob2_cc_list_pane_ParamLimits

0xd5da,	// (0x00066f03) phob2_cc_list_pane

0xf053,	// (0x0006897c) scroll_pane_cp035_ParamLimits

0xf053,	// (0x0006897c) scroll_pane_cp035

0x9e2c,	// (0x00063755) bg_button_pane_cp033

0xd5e6,	// (0x00066f0f) phob2_cc_button_pane_g1

0xd5f2,	// (0x00066f1b) phob2_cc_button_pane_t1

0xd607,	// (0x00066f30) phob2_cc_button_pane_t2

0x0001,

0xfd40,	// (0x00069669) phob2_cc_button_pane_t

0x8dd1,	// (0x000626fa) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8dd1,	// (0x000626fa) list_double_large_graphic_phob2_cc_pane

0x8e01,	// (0x0006272a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8e01,	// (0x0006272a) list_double_large_graphic_phob2_cc_pane_g1

0x8e0d,	// (0x00062736) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8e0d,	// (0x00062736) list_double_large_graphic_phob2_cc_pane_g2

0x8e19,	// (0x00062742) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8e19,	// (0x00062742) list_double_large_graphic_phob2_cc_pane_g3

0x8e25,	// (0x0006274e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8e25,	// (0x0006274e) list_double_large_graphic_phob2_cc_pane_g4

0xd619,	// (0x00066f42) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd619,	// (0x00066f42) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfd45,	// (0x0006966e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfd45,	// (0x0006966e) list_double_large_graphic_phob2_cc_pane_g

0x8e31,	// (0x0006275a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8e31,	// (0x0006275a) list_double_large_graphic_phob2_cc_pane_t1

0x8e5a,	// (0x00062783) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8e5a,	// (0x00062783) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfd50,	// (0x00069679) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfd50,	// (0x00069679) list_double_large_graphic_phob2_cc_pane_t

0xd625,	// (0x00066f4e) list_highlight_pane_cp025_ParamLimits

0xd625,	// (0x00066f4e) list_highlight_pane_cp025

0x9e2c,	// (0x00063755) bg_button_pane_cp033_ParamLimits

0xd5e6,	// (0x00066f0f) phob2_cc_button_pane_g1_ParamLimits

0xd5f2,	// (0x00066f1b) phob2_cc_button_pane_t1_ParamLimits

0xd607,	// (0x00066f30) phob2_cc_button_pane_t2_ParamLimits

0xfd40,	// (0x00069669) phob2_cc_button_pane_t_ParamLimits

0x1044,	// (0x0005a96d) popup_wgtman_window

0xed12,	// (0x0006863b) scroll_pane_cp038

0x87a9,	// (0x000620d2) wgtman_btn_pane_cp_01_ParamLimits

0x87a9,	// (0x000620d2) wgtman_btn_pane_cp_01

0xd633,	// (0x00066f5c) wgtman_content_pane

0xd63c,	// (0x00066f65) wgtman_heading_pane

0x970d,	// (0x00063036) bg_heading_pane_cp02

0xd645,	// (0x00066f6e) wgtman_heading_pane_g1

0xd64d,	// (0x00066f76) wgtman_heading_pane_t1

0xd65b,	// (0x00066f84) scroll_pane_cp036

0xd663,	// (0x00066f8c) wgtman_list_pane

0xd66b,	// (0x00066f94) wgtman_list_pane_t1_ParamLimits

0xd66b,	// (0x00066f94) wgtman_list_pane_t1

0xdd4c,	// (0x00067675) cam4_grid_pane

0x6336,	// (0x0005fc5f) bg_button_pane_cp015_ParamLimits

0x6347,	// (0x0005fc70) bg_button_pane_cp016_ParamLimits

0x6353,	// (0x0005fc7c) bg_button_pane_cp017_ParamLimits

0x63a7,	// (0x0005fcd0) popup_vitu2_query_window_g3_ParamLimits

0x63a7,	// (0x0005fcd0) popup_vitu2_query_window_g3

0x6448,	// (0x0005fd71) popup_vitu2_query_window_t6_ParamLimits

0x6448,	// (0x0005fd71) popup_vitu2_query_window_t6

0x6473,	// (0x0005fd9c) popup_vitu2_query_window_t7_ParamLimits

0x6473,	// (0x0005fd9c) popup_vitu2_query_window_t7

0xf041,	// (0x0006896a) cam4_grid_pane_g1

0xf04a,	// (0x00068973) cam4_grid_pane_g2

0xd685,	// (0x00066fae) cam4_grid_pane_g3

0xd68e,	// (0x00066fb7) cam4_grid_pane_g4

0x0003,

0xfd55,	// (0x0006967e) cam4_grid_pane_g

0x1c0b,	// (0x0005b534) aid_placing_vt_slider_lsc_ParamLimits

0x1f16,	// (0x0005b83f) vidtel_button_pane_ParamLimits

0x1f16,	// (0x0005b83f) vidtel_button_pane

0x970d,	// (0x00063036) bg_button_pane_cp034

0xd699,	// (0x00066fc2) vidtel_button_pane_g1

0xd6a1,	// (0x00066fca) vidtel_button_pane_t1

0xee1e,	// (0x00068747) aid_size_vtel_slider_touch

0xf053,	// (0x0006897c) scroll_pane_cp039

0x7497,	// (0x00060dc0) ncim_query_button_pane_cp01_ParamLimits

0x74b6,	// (0x00060ddf) ncimui_query_pane_g1_ParamLimits

0x9e2c,	// (0x00063755) input_focus_pane_cp012_ParamLimits

0xc540,	// (0x00065e69) ncim_query_entry_pane_t1_ParamLimits

0xf053,	// (0x0006897c) scroll_pane_cp039_ParamLimits

0xab13,	// (0x0006443c) navi_pane_bcale_mc_g1

0xab1b,	// (0x00064444) navi_pane_bcale_mc_t1

0xcacd,	// (0x000663f6) main_sp_fs_email_pane_g1

0xcad9,	// (0x00066402) main_sp_fs_email_pane_g2

0x0001,

0xfb58,	// (0x00069481) main_sp_fs_email_pane_g

0xcf54,	// (0x0006687d) list_single_cale_mrui_row_pane_g3_ParamLimits

0xcf54,	// (0x0006687d) list_single_cale_mrui_row_pane_g3

0x836e,	// (0x00061c97) list_single_recal_day_pane_g5_event_pane

0xd134,	// (0x00066a5d) list_single_recal_day_pane_g7

0xd6b7,	// (0x00066fe0) list_recal_day_event_pane_cp01

0xd6c0,	// (0x00066fe9) list_recal_vselct_arw_lo_pane_cp01

0xd6c8,	// (0x00066ff1) list_recal_vselct_arw_up_pane_cp01

0xd6d0,	// (0x00066ff9) list_recal_vselct_pane_cp01

0xee40,	// (0x00068769) list_recal_day_event_pane_cp01_g1

0xd6da,	// (0x00067003) list_recal_day_event_pane_cp01_t1

0xd13c,	// (0x00066a65) list_single_recal_day_pane_t1_ParamLimits

0xd14e,	// (0x00066a77) list_single_recal_day_pane_t2_ParamLimits

0xfc38,	// (0x00069561) list_single_recal_day_pane_t_ParamLimits

0x9e0a,	// (0x00063733) bg_notes_pane_ParamLimits

0x9eeb,	// (0x00063814) list_notes_pane_ParamLimits

0x1264,	// (0x0005ab8d) scroll_pane_cp06_ParamLimits

0x9f27,	// (0x00063850) main_notes_pane_ParamLimits

0x9e2c,	// (0x00063755) main_welc_pane

0x8eb2,	// (0x000627db) main_welc_body_pane_ParamLimits

0x8eb2,	// (0x000627db) main_welc_body_pane

0x8ed0,	// (0x000627f9) main_welc_opti_pane_ParamLimits

0x8ed0,	// (0x000627f9) main_welc_opti_pane

0x8f4b,	// (0x00062874) main_welc_pane_t1_ParamLimits

0x8f4b,	// (0x00062874) main_welc_pane_t1

0x912f,	// (0x00062a58) main_welc_body_row_pane_ParamLimits

0x912f,	// (0x00062a58) main_welc_body_row_pane

0x9e85,	// (0x000637ae) main_welc_opti_row_pane_ParamLimits

0x9e85,	// (0x000637ae) main_welc_opti_row_pane

0xd6f8,	// (0x00067021) main_welc_opti_row_pane_g1

0x9143,	// (0x00062a6c) main_welc_opti_row_pane_t1

0xd700,	// (0x00067029) main_welc_body_row_pane_t1

0xd3b3,	// (0x00066cdc) popup_notif_wgt_heading_pane

0xd3cd,	// (0x00066cf6) aid_size_list_notif_wgt_del_ParamLimits

0xd3da,	// (0x00066d03) list_notif_wgt_row_pane_g1_ParamLimits

0xd3e6,	// (0x00066d0f) list_notif_wgt_row_pane_g2_ParamLimits

0xd3f5,	// (0x00066d1e) list_notif_wgt_row_pane_g3_ParamLimits

0xfc9f,	// (0x000695c8) list_notif_wgt_row_pane_g_ParamLimits

0xd402,	// (0x00066d2b) list_notif_wgt_row_pane_t1_ParamLimits

0xd418,	// (0x00066d41) list_notif_wgt_row_pane_t2_ParamLimits

0xd42a,	// (0x00066d53) list_notif_wgt_row_pane_t3_ParamLimits

0xfca6,	// (0x000695cf) list_notif_wgt_row_pane_t_ParamLimits

0x8842,	// (0x0006216b) listrow_wgtman_pane_g1_ParamLimits

0x884f,	// (0x00062178) listrow_wgtman_pane_g2_ParamLimits

0xfcd6,	// (0x000695ff) listrow_wgtman_pane_g_ParamLimits

0x886d,	// (0x00062196) listrow_wgtman_pane_t1_ParamLimits

0x8885,	// (0x000621ae) listrow_wgtman_pane_t2_ParamLimits

0xfcdb,	// (0x00069604) listrow_wgtman_pane_t_ParamLimits

0x88ab,	// (0x000621d4) wait_bar_pane_cp09_ParamLimits

0x970d,	// (0x00063036) bg_popup_heading_pane_cp02

0xd70f,	// (0x00067038) popup_notif_wgt_heading_pane_g1

0xd717,	// (0x00067040) popup_notif_wgt_heading_pane_t1

0x970d,	// (0x00063036) main_vids_pane

0x970d,	// (0x00063036) vids_listscroll_pane

0x9152,	// (0x00062a7b) scroll_pane_cp040

0x970d,	// (0x00063036) vids_list_pane

0x915d,	// (0x00062a86) vids_list_double_pane_ParamLimits

0x915d,	// (0x00062a86) vids_list_double_pane

0x916e,	// (0x00062a97) vids_list_double_pane_g1

0x9177,	// (0x00062aa0) vids_list_double_pane_t1

0x9187,	// (0x00062ab0) vids_list_double_pane_t2

0x0001,

0xfd74,	// (0x0006969d) vids_list_double_pane_t

0x9784,	// (0x000630ad) main_ncimui_pane_ParamLimits

0x72cd,	// (0x00060bf6) main_ncimui_pane_g1_ParamLimits

0x72d9,	// (0x00060c02) main_ncimui_pane_g2_ParamLimits

0x72d9,	// (0x00060c02) main_ncimui_pane_g2

0x0001,

0xfa59,	// (0x00069382) main_ncimui_pane_g_ParamLimits

0xfa59,	// (0x00069382) main_ncimui_pane_g

0x8eeb,	// (0x00062814) main_welc_pane_g1_ParamLimits

0x8eeb,	// (0x00062814) main_welc_pane_g1

0x8f00,	// (0x00062829) main_welc_pane_g2_ParamLimits

0x8f00,	// (0x00062829) main_welc_pane_g2

0x0003,

0xfd5e,	// (0x00069687) main_welc_pane_g_ParamLimits

0xfd5e,	// (0x00069687) main_welc_pane_g

0x124a,	// (0x0005ab73) listscroll_mce_pane_ParamLimits

0xac68,	// (0x00064591) wait_bar_pane_cp10

0xbff6,	// (0x0006591f) main_cale_day_pane_ParamLimits

0xbff6,	// (0x0006591f) main_cale_week_pane_ParamLimits

0x9e0a,	// (0x00063733) main_messa_pane_ParamLimits

0x4aa9,	// (0x0005e3d2) main_clock2_btn_pane_ParamLimits

0x4aa9,	// (0x0005e3d2) main_clock2_btn_pane

0xe6f5,	// (0x0006801e) main_clock2_btn_pane_cp01_ParamLimits

0xe6f5,	// (0x0006801e) main_clock2_btn_pane_cp01

0xcee0,	// (0x00066809) list_cale_mrui_pane_ParamLimits

0xd46e,	// (0x00066d97) main_cf0_pane_g2

0x0001,

0xfcad,	// (0x000695d6) main_cf0_pane_g

0x8a98,	// (0x000623c1) area_left_week_number_pane_ParamLimits

0x8aa4,	// (0x000623cd) area_top_day_name_pane_ParamLimits

0x8ab7,	// (0x000623e0) frame_month_view_pane_ParamLimits

0xd587,	// (0x00066eb0) grid_month_view_pane_ParamLimits

0xd595,	// (0x00066ebe) frm_month_g1_ParamLimits

0x8b38,	// (0x00062461) frm_month_g2_ParamLimits

0x8b4b,	// (0x00062474) frm_month_g3_ParamLimits

0x8b5e,	// (0x00062487) frm_month_g4_ParamLimits

0x8b71,	// (0x0006249a) frm_month_g5_ParamLimits

0x8b84,	// (0x000624ad) frm_month_g6_ParamLimits

0x8b97,	// (0x000624c0) frm_month_g7_ParamLimits

0xd5a2,	// (0x00066ecb) frm_month_g8_ParamLimits

0x8baa,	// (0x000624d3) frm_month_g9_ParamLimits

0x8bba,	// (0x000624e3) frm_month_g10_ParamLimits

0x8bca,	// (0x000624f3) frm_month_g11_ParamLimits

0x8bda,	// (0x00062503) frm_month_g12_ParamLimits

0x8bec,	// (0x00062515) frm_month_g13_ParamLimits

0x8bfe,	// (0x00062527) frm_month_g14_ParamLimits

0x8c12,	// (0x0006253b) frm_month_g15_ParamLimits

0x8c26,	// (0x0006254f) frm_month_g16_ParamLimits

0xfd05,	// (0x0006962e) frm_month_g_ParamLimits

0xd5af,	// (0x00066ed8) cell_top_day_name_pane_t1_ParamLimits

0x8c3a,	// (0x00062563) cell_area_left_week_number_pane_g1_ParamLimits

0x8c46,	// (0x0006256f) cell_area_left_week_number_pane_t1_ParamLimits

0x9e93,	// (0x000637bc) cell_month_view_pane_g1_ParamLimits

0x8c59,	// (0x00062582) cell_month_view_pane_t1_ParamLimits

0x9e02,	// (0x0006372b) main_clock2_btn_pane_g1

0xd725,	// (0x0006704e) main_clock2_btn_pane_t1

0x9e2c,	// (0x00063755) listscroll_cmail_pane_ParamLimits

0xcacd,	// (0x000663f6) main_sp_fs_email_pane_g1_ParamLimits

0xcad9,	// (0x00066402) main_sp_fs_email_pane_g2_ParamLimits

0xfb58,	// (0x00069481) main_sp_fs_email_pane_g_ParamLimits

0xd0a4,	// (0x000669cd) list_recal_day_pane_ParamLimits

0xd0b5,	// (0x000669de) mian_recal_day_pane_t1

0x7d08,	// (0x00061631) list_single_dyc_row_text_pane_t4_ParamLimits

0x7d08,	// (0x00061631) list_single_dyc_row_text_pane_t4

0x7d51,	// (0x0006167a) list_single_dyc_row_text_pane_t5_ParamLimits

0x7d51,	// (0x0006167a) list_single_dyc_row_text_pane_t5

0xcb7b,	// (0x000664a4) list_single_dyc_row_text_pane_t6_ParamLimits

0xcb7b,	// (0x000664a4) list_single_dyc_row_text_pane_t6

0xa582,	// (0x00063eab) aid_mgn_list_cale_time_pane

0x9784,	// (0x000630ad) main_gallery2_pane_ParamLimits

0xe70b,	// (0x00068034) main_clock2_pane_cp01_t1

0xe71b,	// (0x00068044) main_clock2_pane_cp01_t3

0x0001,

0xf6b6,	// (0x00068fdf) main_clock2_pane_cp01_t

0x1601,	// (0x0005af2a) cale_week_scroll_pane_g16_ParamLimits

0x1601,	// (0x0005af2a) cale_week_scroll_pane_g16

0xa16c,	// (0x00063a95) vorec_slider_pane

0xd6a1,	// (0x00066fca) vidtel_button_pane_t1_ParamLimits

0x83d4,	// (0x00061cfd) main_fs_bigclock_clock_pane_g1_ParamLimits

0x83d4,	// (0x00061cfd) main_fs_bigclock_clock_pane_g2_ParamLimits

0x83e5,	// (0x00061d0e) main_fs_bigclock_clock_pane_g3_ParamLimits

0x83e5,	// (0x00061d0e) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfc5b,	// (0x00069584) main_fs_bigclock_clock_pane_g_ParamLimits

0x83f8,	// (0x00061d21) main_fs_bigclock_clock_pane_t1_ParamLimits

0x840e,	// (0x00061d37) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfc64,	// (0x0006958d) main_fs_bigclock_clock_pane_t_ParamLimits

0x437e,	// (0x0005dca7) main_mup3_lyrics_pane_ParamLimits

0x437e,	// (0x0005dca7) main_mup3_lyrics_pane

0x91bd,	// (0x00062ae6) main_mup3_lyrics_pane_t1_ParamLimits

0x91bd,	// (0x00062ae6) main_mup3_lyrics_pane_t1

0xda9e,	// (0x000673c7) aid_main_mp4_pane_t1_area

0xdaa8,	// (0x000673d1) aid_main_mp4_pane_t2_area

0xdb54,	// (0x0006747d) main_mp4_pane_g7_ParamLimits

0xdb54,	// (0x0006747d) main_mp4_pane_g7

0xdb60,	// (0x00067489) main_mp4_pane_g8_ParamLimits

0xdb60,	// (0x00067489) main_mp4_pane_g8

0x5461,	// (0x0005ed8a) aid_call6_pane_g1_size

0x8deb,	// (0x00062714) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8deb,	// (0x00062714) list_double_large_graphic_phob2_other_pane

0xa53a,	// (0x00063e63) list_double_large_graphic_phob2_other_pane_g1

0x970d,	// (0x00063036) list_highlight_pane_cp026

0x9e2c,	// (0x00063755) main_welc_pane_ParamLimits

0x7b47,	// (0x00061470) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7b47,	// (0x00061470) main_sp_fs_ctrlbar_pane_g3

0x7b61,	// (0x0006148a) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7b61,	// (0x0006148a) main_sp_fs_ctrlbar_pane_g4

0x7b95,	// (0x000614be) toolbar2_fixed_button_pane_cp01

0x7ba0,	// (0x000614c9) toolbar2_fixed_button_pane_cp02

0x7bad,	// (0x000614d6) toolbar2_fixed_button_pane_cp03

0x8e96,	// (0x000627bf) list_welc_entry_pane_ParamLimits

0x8e96,	// (0x000627bf) list_welc_entry_pane

0x8f15,	// (0x0006283e) main_welc_pane_g3_ParamLimits

0x8f15,	// (0x0006283e) main_welc_pane_g3

0x8f69,	// (0x00062892) main_welc_pane_t2_ParamLimits

0x8f69,	// (0x00062892) main_welc_pane_t2

0x8f83,	// (0x000628ac) main_welc_pane_t3_ParamLimits

0x8f83,	// (0x000628ac) main_welc_pane_t3

0x0005,

0xfd67,	// (0x00069690) main_welc_pane_t_ParamLimits

0xfd67,	// (0x00069690) main_welc_pane_t

0x90b2,	// (0x000629db) welc_button_pane_ParamLimits

0x90b2,	// (0x000629db) welc_button_pane

0x911a,	// (0x00062a43) welc_service_logo_pane_ParamLimits

0x911a,	// (0x00062a43) welc_service_logo_pane

0x91d9,	// (0x00062b02) list_single_welc_entry_pane_ParamLimits

0x91d9,	// (0x00062b02) list_single_welc_entry_pane

0x91ea,	// (0x00062b13) list_single_welc_entry_pane_g1

0x91f2,	// (0x00062b1b) list_single_welc_entry_pane_t1

0x9200,	// (0x00062b29) list_single_welc_entry_pane_t2

0x0001,

0xfd79,	// (0x000696a2) list_single_welc_entry_pane_t

0x970d,	// (0x00063036) bg_button_pane_cp035

0xd733,	// (0x0006705c) welc_button_pane_t1

0xd741,	// (0x0006706a) welc_service_logo_pane_g1

0xd74a,	// (0x00067073) welc_service_logo_pane_g2

0x0001,

0xfd7e,	// (0x000696a7) welc_service_logo_pane_g

0x9792,	// (0x000630bb) main_int_radio_pane

0x9fc2,	// (0x000638eb) list_single_fs_dyc_pane_g1

0x8d1c,	// (0x00062645) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8d1c,	// (0x00062645) list_double_large_graphic_phob2_pane_g3

0x8d28,	// (0x00062651) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8d28,	// (0x00062651) list_double_large_graphic_phob2_pane_g4

0x920e,	// (0x00062b37) main_int_radio1_pane_ParamLimits

0x920e,	// (0x00062b37) main_int_radio1_pane

0xd753,	// (0x0006707c) find_pane_cp02

0x922b,	// (0x00062b54) input_focus_pane_cp12_ParamLimits

0x922b,	// (0x00062b54) input_focus_pane_cp12

0x923b,	// (0x00062b64) input_focus_pane_cp13_ParamLimits

0x923b,	// (0x00062b64) input_focus_pane_cp13

0x924f,	// (0x00062b78) input_focus_pane_cp14_ParamLimits

0x924f,	// (0x00062b78) input_focus_pane_cp14

0xd75c,	// (0x00067085) int_radio1_listscroll_pane

0x9263,	// (0x00062b8c) main_int_radio1_pane_g1_ParamLimits

0x9263,	// (0x00062b8c) main_int_radio1_pane_g1

0x927b,	// (0x00062ba4) main_int_radio1_pane_t1_ParamLimits

0x927b,	// (0x00062ba4) main_int_radio1_pane_t1

0x9296,	// (0x00062bbf) main_int_radio1_pane_t2_ParamLimits

0x9296,	// (0x00062bbf) main_int_radio1_pane_t2

0x92b1,	// (0x00062bda) main_int_radio1_pane_t3_ParamLimits

0x92b1,	// (0x00062bda) main_int_radio1_pane_t3

0x92cc,	// (0x00062bf5) main_int_radio1_pane_t4_ParamLimits

0x92cc,	// (0x00062bf5) main_int_radio1_pane_t4

0xd766,	// (0x0006708f) main_int_radio1_pane_t5_ParamLimits

0xd766,	// (0x0006708f) main_int_radio1_pane_t5

0x92de,	// (0x00062c07) main_int_radio1_pane_t6_ParamLimits

0x92de,	// (0x00062c07) main_int_radio1_pane_t6

0x92f3,	// (0x00062c1c) main_int_radio1_pane_t7_ParamLimits

0x92f3,	// (0x00062c1c) main_int_radio1_pane_t7

0x9308,	// (0x00062c31) main_int_radio1_pane_t8_ParamLimits

0x9308,	// (0x00062c31) main_int_radio1_pane_t8

0x9327,	// (0x00062c50) main_int_radio1_pane_t9_ParamLimits

0x9327,	// (0x00062c50) main_int_radio1_pane_t9

0x9339,	// (0x00062c62) main_int_radio1_pane_t10_ParamLimits

0x9339,	// (0x00062c62) main_int_radio1_pane_t10

0x935f,	// (0x00062c88) main_int_radio1_pane_t11_ParamLimits

0x935f,	// (0x00062c88) main_int_radio1_pane_t11

0x9385,	// (0x00062cae) main_int_radio1_pane_t12_ParamLimits

0x9385,	// (0x00062cae) main_int_radio1_pane_t12

0x000b,

0xfd83,	// (0x000696ac) main_int_radio1_pane_t_ParamLimits

0xfd83,	// (0x000696ac) main_int_radio1_pane_t

0xd778,	// (0x000670a1) int_radio_list_pane

0xd5ca,	// (0x00066ef3) scroll_pane_cp037

0xd780,	// (0x000670a9) list_double_large_graphic_int_radio_pane_ParamLimits

0xd780,	// (0x000670a9) list_double_large_graphic_int_radio_pane

0xd798,	// (0x000670c1) list_double_large_graphic_int_radio_pane_g1

0xd7a1,	// (0x000670ca) list_double_large_graphic_int_radio_pane_t1

0xd7af,	// (0x000670d8) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfd9c,	// (0x000696c5) list_double_large_graphic_int_radio_pane_t

0x970d,	// (0x00063036) list_highlight_pane_cp027

0xd6e8,	// (0x00067011) main_button_pane_4

0x8f25,	// (0x0006284e) main_welc_pane_g4_ParamLimits

0x8f25,	// (0x0006284e) main_welc_pane_g4

0x8f9b,	// (0x000628c4) main_welc_pane_t4_ParamLimits

0x8f9b,	// (0x000628c4) main_welc_pane_t4

0x8fb2,	// (0x000628db) main_welc_pane_t5_ParamLimits

0x8fb2,	// (0x000628db) main_welc_pane_t5

0x8fef,	// (0x00062918) main_welc_pane_t6_ParamLimits

0x8fef,	// (0x00062918) main_welc_pane_t6

0x90c9,	// (0x000629f2) welc_button_pane_2_ParamLimits

0x90c9,	// (0x000629f2) welc_button_pane_2

0x90e5,	// (0x00062a0e) welc_button_pane_3_ParamLimits

0x90e5,	// (0x00062a0e) welc_button_pane_3

0xd6f0,	// (0x00067019) welc_button_pane_4

0x9104,	// (0x00062a2d) welc_button_pane_5_ParamLimits

0x9104,	// (0x00062a2d) welc_button_pane_5

0x0e47,	// (0x0005a770) main_popup_welc_pane

0xd7cc,	// (0x000670f5) main_welc_sk_g3

0xd7d6,	// (0x000670ff) main_welc_sk_g4

0xd7e0,	// (0x00067109) main_welc_sk_t3

0xd7f0,	// (0x00067119) main_welc_sk_t4

0xd800,	// (0x00067129) popup_welc_pane_t4

0xd80e,	// (0x00067137) popup_welc_pane_t5

0xd81e,	// (0x00067147) popup_welc_pane_t6

0x9792,	// (0x000630bb) main_acti_pane

0x970d,	// (0x00063036) main_sso_pane

0x9397,	// (0x00062cc0) sso_body_pane_ParamLimits

0x9397,	// (0x00062cc0) sso_body_pane

0x93ab,	// (0x00062cd4) sso_logo_pane_ParamLimits

0x93ab,	// (0x00062cd4) sso_logo_pane

0x93d7,	// (0x00062d00) sso_sk_pane_ParamLimits

0x93d7,	// (0x00062d00) sso_sk_pane

0xa1ac,	// (0x00063ad5) main_sso_logo_pane_g1

0x93e9,	// (0x00062d12) sso_sk_pane_t1_ParamLimits

0x93e9,	// (0x00062d12) sso_sk_pane_t1

0x9403,	// (0x00062d2c) sso_sk_pane_t2_ParamLimits

0x9403,	// (0x00062d2c) sso_sk_pane_t2

0x0001,

0xfda1,	// (0x000696ca) sso_sk_pane_t_ParamLimits

0xfda1,	// (0x000696ca) sso_sk_pane_t

0xd85c,	// (0x00067185) aid_sso_gap

0xd865,	// (0x0006718e) aid_sso_txt1

0xd86f,	// (0x00067198) aid_sso_txt2

0xd879,	// (0x000671a2) aid_sso_txt3

0x0002,

0xfda6,	// (0x000696cf) aid_sso_txt

0xd883,	// (0x000671ac) aid_sso_widget

0x946d,	// (0x00062d96) sso_btn_pane_ParamLimits

0x946d,	// (0x00062d96) sso_btn_pane

0x94f5,	// (0x00062e1e) sso_option_pane_ParamLimits

0x94f5,	// (0x00062e1e) sso_option_pane

0x9575,	// (0x00062e9e) sso_query_pane_ParamLimits

0x9575,	// (0x00062e9e) sso_query_pane

0x95cb,	// (0x00062ef4) sso_query_pane_cp01_ParamLimits

0x95cb,	// (0x00062ef4) sso_query_pane_cp01

0x9625,	// (0x00062f4e) sso_t_hdr_pane_ParamLimits

0x9625,	// (0x00062f4e) sso_t_hdr_pane

0x9649,	// (0x00062f72) sso_t_nml_pane_ParamLimits

0x9649,	// (0x00062f72) sso_t_nml_pane

0xd879,	// (0x000671a2) sso_t_sub_pane

0x93b8,	// (0x00062ce1) sso_popup_window_ParamLimits

0x93b8,	// (0x00062ce1) sso_popup_window

0x9419,	// (0x00062d42) sso_apps_pane_ParamLimits

0x9419,	// (0x00062d42) sso_apps_pane

0x9443,	// (0x00062d6c) sso_body_pane_g1

0x944d,	// (0x00062d76) sso_body_pane_t1

0x945d,	// (0x00062d86) sso_body_pane_t2

0x0001,

0xfdad,	// (0x000696d6) sso_body_pane_t

0x94bf,	// (0x00062de8) sso_btn_pane_cp01_ParamLimits

0x94bf,	// (0x00062de8) sso_btn_pane_cp01

0x9549,	// (0x00062e72) sso_prog_pane_ParamLimits

0x9549,	// (0x00062e72) sso_prog_pane

0xd88d,	// (0x000671b6) sso_t_hdr_pane_t1_ParamLimits

0xd88d,	// (0x000671b6) sso_t_hdr_pane_t1

0xd8a0,	// (0x000671c9) input_focus_pane_cp10_ParamLimits

0xd8a0,	// (0x000671c9) input_focus_pane_cp10

0xd8b6,	// (0x000671df) sso_query_pane_t1_ParamLimits

0xd8b6,	// (0x000671df) sso_query_pane_t1

0xd8c9,	// (0x000671f2) sso_query_pane_t2_ParamLimits

0xd8c9,	// (0x000671f2) sso_query_pane_t2

0xd8e4,	// (0x0006720d) sso_query_pane_t3_ParamLimits

0xd8e4,	// (0x0006720d) sso_query_pane_t3

0xd90e,	// (0x00067237) sso_query_pane_t4_ParamLimits

0xd90e,	// (0x00067237) sso_query_pane_t4

0x0003,

0xfdb2,	// (0x000696db) sso_query_pane_t_ParamLimits

0xfdb2,	// (0x000696db) sso_query_pane_t

0x970d,	// (0x00063036) bg_button_pane_cp22

0xd7bd,	// (0x000670e6) sso_btn_pane_t1

0x969f,	// (0x00062fc8) sso_t_nml_pane_t1_ParamLimits

0x969f,	// (0x00062fc8) sso_t_nml_pane_t1

0xd932,	// (0x0006725b) sso_option_row_pane_ParamLimits

0xd932,	// (0x0006725b) sso_option_row_pane

0xd93f,	// (0x00067268) sso_t_sub_pane_t1_ParamLimits

0xd93f,	// (0x00067268) sso_t_sub_pane_t1

0x9e2c,	// (0x00063755) bg_popup_window_pane_cp11_ParamLimits

0x9e2c,	// (0x00063755) bg_popup_window_pane_cp11

0xd952,	// (0x0006727b) popup_sk_window_cp01_ParamLimits

0xd952,	// (0x0006727b) popup_sk_window_cp01

0xd95f,	// (0x00067288) sso_popup_body_pane_ParamLimits

0xd95f,	// (0x00067288) sso_popup_body_pane

0xd96c,	// (0x00067295) scroll_pane_cp21_ParamLimits

0xd96c,	// (0x00067295) scroll_pane_cp21

0xd979,	// (0x000672a2) sso_popup_body_t_pane_ParamLimits

0xd979,	// (0x000672a2) sso_popup_body_t_pane

0xd986,	// (0x000672af) sso_popup_body_t_hdr_pane_ParamLimits

0xd986,	// (0x000672af) sso_popup_body_t_hdr_pane

0xd994,	// (0x000672bd) sso_popup_body_t_nml_pane_ParamLimits

0xd994,	// (0x000672bd) sso_popup_body_t_nml_pane

0xd9af,	// (0x000672d8) sso_popup_body_t_sub_pane_ParamLimits

0xd9af,	// (0x000672d8) sso_popup_body_t_sub_pane

0xd9d2,	// (0x000672fb) sso_popup_body_t_hdr_pane_t1

0x96ba,	// (0x00062fe3) sso_popup_body_t_nml_pane_t1_ParamLimits

0x96ba,	// (0x00062fe3) sso_popup_body_t_nml_pane_t1

0xd9e2,	// (0x0006730b) sso_popup_body_t_sub_pane_t1_ParamLimits

0xd9e2,	// (0x0006730b) sso_popup_body_t_sub_pane_t1

0xa1ac,	// (0x00063ad5) sso_prog_pane_g1

0x96f3,	// (0x0006301c) sso_apps_pane_comp1_ParamLimits

0x96f3,	// (0x0006301c) sso_apps_pane_comp1

0xda07,	// (0x00067330) sso_apps_pane_comp1_g1

0xda0f,	// (0x00067338) sso_apps_pane_comp1_t1

0xda1d,	// (0x00067346) sso_option_row_pane_g1

0xda25,	// (0x0006734e) sso_option_row_pane_t1

0x8e83,	// (0x000627ac) bg_welc_area_ParamLimits

0x8e83,	// (0x000627ac) bg_welc_area

0x902d,	// (0x00062956) sso_t_hdr_pane_a_t1_ParamLimits

0x902d,	// (0x00062956) sso_t_hdr_pane_a_t1

0x9048,	// (0x00062971) sso_t_nml_pane_a_t1_ParamLimits

0x9048,	// (0x00062971) sso_t_nml_pane_a_t1

0x9077,	// (0x000629a0) sso_t_sub_pane_a_t1_ParamLimits

0x9077,	// (0x000629a0) sso_t_sub_pane_a_t1

0xd7bd,	// (0x000670e6) sso_btn_pane_t1_copy1

0x970d,	// (0x00063036) welc_button_pane_2_comp1

0xd82c,	// (0x00067155) sso_t_hdr_pane_p_t1

0xd83c,	// (0x00067165) sso_t_nml_pane_p_t1

0xd84c,	// (0x00067175) sso_t_sub_pane_p_t1
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
