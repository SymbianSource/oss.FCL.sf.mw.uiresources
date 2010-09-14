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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00062ff6 };

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
0x738b,	// (0x0006a381) Screen

0x7397,	// (0x0006a38d) application_window

0x73f3,	// (0x0006a3e9) area_bottom_pane_ParamLimits

0x73f3,	// (0x0006a3e9) area_bottom_pane

0x744b,	// (0x0006a441) area_top_pane_ParamLimits

0x744b,	// (0x0006a441) area_top_pane

0x74af,	// (0x0006a4a5) call_video_uplink_pane_ParamLimits

0x74af,	// (0x0006a4a5) call_video_uplink_pane

0x74ee,	// (0x0006a4e4) main_pane_ParamLimits

0x74ee,	// (0x0006a4e4) main_pane

0x486b,	// (0x00067861) context_pane

0xa25e,	// (0x0006d254) navi_pane

0xa284,	// (0x0006d27a) popup_cale_events_window_ParamLimits

0xa284,	// (0x0006d27a) popup_cale_events_window

0x487e,	// (0x00067874) popup_mup_playback_window

0xa29c,	// (0x0006d292) signal_pane

0x085a,	// (0x00063850) main_browser_pane

0x0a9f,	// (0x00063a95) main_burst_pane

0xa0ea,	// (0x0006d0e0) main_calc_pane

0x2929,	// (0x0006591f) main_cale_day_pane

0x7af6,	// (0x0006aaec) main_cale_month_pane

0x2929,	// (0x0006591f) main_cale_week_pane

0x0a9f,	// (0x00063a95) main_call_pane

0x04e2,	// (0x000634d8) main_call_poc_pane

0x0a9f,	// (0x00063a95) main_camera_pane

0x0a9f,	// (0x00063a95) main_chi_dic_pane

0x1320,	// (0x00064316) main_clock_pane

0x04e2,	// (0x000634d8) main_fmradio_pane

0x0a9f,	// (0x00063a95) main_graph_messa_pane

0x04e2,	// (0x000634d8) main_help_pane

0x085a,	// (0x00063850) main_im_pane

0x073d,	// (0x00063733) main_image_pane_ParamLimits

0x073d,	// (0x00063733) main_image_pane

0x04e2,	// (0x000634d8) main_location2_pane

0x0a9f,	// (0x00063a95) main_location_pane

0x073d,	// (0x00063733) main_messa_pane

0x04e2,	// (0x000634d8) main_mp2_pane

0x0a9f,	// (0x00063a95) main_mp_pane

0x04e2,	// (0x000634d8) main_msg_pane

0x04e2,	// (0x000634d8) main_mup_eq_pane

0x04e2,	// (0x000634d8) main_mup_pane

0x085a,	// (0x00063850) main_notes_pane

0x04e2,	// (0x000634d8) main_pec_pane

0x04e2,	// (0x000634d8) main_phob_pane

0x04e2,	// (0x000634d8) main_pinb_pane

0x04e2,	// (0x000634d8) main_postcard_pane

0x04e2,	// (0x000634d8) main_qdial_pane

0x0a9f,	// (0x00063a95) main_skin_pane

0x04e2,	// (0x000634d8) main_smil2_pane

0x0a9f,	// (0x00063a95) main_smil_pane

0x0a9f,	// (0x00063a95) main_video_pane

0x0a9f,	// (0x00063a95) main_video_tele_pane

0x073d,	// (0x00063733) main_viewer_pane_ParamLimits

0x073d,	// (0x00063733) main_viewer_pane

0x0a9f,	// (0x00063a95) main_vorec_pane

0xa128,	// (0x0006d11e) popup_blid_sat_info_window_ParamLimits

0xa128,	// (0x0006d11e) popup_blid_sat_info_window

0xa148,	// (0x0006d13e) popup_dyc_status_message_window_ParamLimits

0xa148,	// (0x0006d13e) popup_dyc_status_message_window

0xa158,	// (0x0006d14e) popup_grid_large_graphic_window_ParamLimits

0xa158,	// (0x0006d14e) popup_grid_large_graphic_window

0xa1e9,	// (0x0006d1df) popup_loc_request_window_ParamLimits

0xa1e9,	// (0x0006d1df) popup_loc_request_window

0xa236,	// (0x0006d22c) popup_wml_address_window_ParamLimits

0xa236,	// (0x0006d22c) popup_wml_address_window

0x9fc2,	// (0x0006cfb8) call_muted_g1

0x9c3d,	// (0x0006cc33) popup_call_audio_conf_window_ParamLimits

0x9c3d,	// (0x0006cc33) popup_call_audio_conf_window

0x9fd2,	// (0x0006cfc8) popup_call_audio_first_window_ParamLimits

0x9fd2,	// (0x0006cfc8) popup_call_audio_first_window

0xa012,	// (0x0006d008) popup_call_audio_in_window_ParamLimits

0xa012,	// (0x0006d008) popup_call_audio_in_window

0xa036,	// (0x0006d02c) popup_call_audio_out_window_ParamLimits

0xa036,	// (0x0006d02c) popup_call_audio_out_window

0xa058,	// (0x0006d04e) popup_call_audio_second_window_ParamLimits

0xa058,	// (0x0006d04e) popup_call_audio_second_window

0xa088,	// (0x0006d07e) popup_call_audio_wait_window_ParamLimits

0xa088,	// (0x0006d07e) popup_call_audio_wait_window

0xa0a9,	// (0x0006d09f) popup_number_entry_window_ParamLimits

0xa0a9,	// (0x0006d09f) popup_number_entry_window

0x00cf,	// (0x000630c5) bg_popup_call_pane_cp05_ParamLimits

0x00cf,	// (0x000630c5) bg_popup_call_pane_cp05

0x00ef,	// (0x000630e5) popup_number_entry_window_t1

0x0102,	// (0x000630f8) popup_number_entry_window_t2

0x0114,	// (0x0006310a) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x00072061) popup_number_entry_window_t

0x0126,	// (0x0006311c) text_title_cp2

0x0139,	// (0x0006312f) bg_popup_call_pane_cp_ParamLimits

0x0139,	// (0x0006312f) bg_popup_call_pane_cp

0x0147,	// (0x0006313d) call_thumbnail_pane

0x014f,	// (0x00063145) popup_call_audio_in_window_g1_ParamLimits

0x014f,	// (0x00063145) popup_call_audio_in_window_g1

0x015b,	// (0x00063151) popup_call_audio_in_window_g2_ParamLimits

0x015b,	// (0x00063151) popup_call_audio_in_window_g2

0x0167,	// (0x0006315d) popup_call_audio_in_window_g3_ParamLimits

0x0167,	// (0x0006315d) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x0007206a) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x0007206a) popup_call_audio_in_window_g

0x0173,	// (0x00063169) popup_call_audio_in_window_t1_ParamLimits

0x0173,	// (0x00063169) popup_call_audio_in_window_t1

0x018f,	// (0x00063185) popup_call_audio_in_window_t2_ParamLimits

0x018f,	// (0x00063185) popup_call_audio_in_window_t2

0x01ab,	// (0x000631a1) popup_call_audio_in_window_t3_ParamLimits

0x01ab,	// (0x000631a1) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x00072071) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x00072071) popup_call_audio_in_window_t

0x0139,	// (0x0006312f) bg_popup_call_pane_cp01_ParamLimits

0x0139,	// (0x0006312f) bg_popup_call_pane_cp01

0x0147,	// (0x0006313d) call_thumbnail_pane_cp02

0x01be,	// (0x000631b4) call_type_pane_cp022

0x01c6,	// (0x000631bc) popup_call_audio_out_window_g1_ParamLimits

0x01c6,	// (0x000631bc) popup_call_audio_out_window_g1

0x01d8,	// (0x000631ce) popup_call_audio_out_window_g2_ParamLimits

0x01d8,	// (0x000631ce) popup_call_audio_out_window_g2

0x01e4,	// (0x000631da) popup_call_audio_out_window_g3_ParamLimits

0x01e4,	// (0x000631da) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x00072078) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x00072078) popup_call_audio_out_window_g

0x01f6,	// (0x000631ec) popup_call_audio_out_window_t1_ParamLimits

0x01f6,	// (0x000631ec) popup_call_audio_out_window_t1

0x020e,	// (0x00063204) popup_call_audio_out_window_t2_ParamLimits

0x020e,	// (0x00063204) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x0007207f) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x0007207f) popup_call_audio_out_window_t

0x0223,	// (0x00063219) bg_popup_call_pane_ParamLimits

0x0223,	// (0x00063219) bg_popup_call_pane

0x76ef,	// (0x0006a6e5) call_thumbnail_pane_cp_ParamLimits

0x76ef,	// (0x0006a6e5) call_thumbnail_pane_cp

0x02a7,	// (0x0006329d) call_type_pane_cp01_ParamLimits

0x02a7,	// (0x0006329d) call_type_pane_cp01

0x02eb,	// (0x000632e1) popup_call_audio_first_window_g1_ParamLimits

0x02eb,	// (0x000632e1) popup_call_audio_first_window_g1

0x0337,	// (0x0006332d) popup_call_audio_first_window_g2_ParamLimits

0x0337,	// (0x0006332d) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x00072084) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x00072084) popup_call_audio_first_window_g

0x037b,	// (0x00063371) popup_call_audio_first_window_t1_ParamLimits

0x037b,	// (0x00063371) popup_call_audio_first_window_t1

0x0427,	// (0x0006341d) popup_call_audio_first_window_t4_ParamLimits

0x0427,	// (0x0006341d) popup_call_audio_first_window_t4

0x04b3,	// (0x000634a9) popup_call_audio_first_window_t5_ParamLimits

0x04b3,	// (0x000634a9) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x00072089) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x00072089) popup_call_audio_first_window_t

0x04e2,	// (0x000634d8) bg_popup_call_pane_cp02

0x04ec,	// (0x000634e2) call_type_pane_cp023

0x04f4,	// (0x000634ea) popup_call_audio_wait_window_g1

0x04fc,	// (0x000634f2) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x00072090) popup_call_audio_wait_window_g

0x0504,	// (0x000634fa) popup_call_audio_wait_window_t3

0x0512,	// (0x00063508) bg_popup_call_pane_cp03_ParamLimits

0x0512,	// (0x00063508) bg_popup_call_pane_cp03

0x0572,	// (0x00063568) call_thumbnail_pane_cp011_ParamLimits

0x0572,	// (0x00063568) call_thumbnail_pane_cp011

0x057e,	// (0x00063574) call_type_pane_cp034_ParamLimits

0x057e,	// (0x00063574) call_type_pane_cp034

0x05ba,	// (0x000635b0) popup_call_audio_second_window_g1_ParamLimits

0x05ba,	// (0x000635b0) popup_call_audio_second_window_g1

0x05f6,	// (0x000635ec) popup_call_audio_second_window_g2_ParamLimits

0x05f6,	// (0x000635ec) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x00072095) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x00072095) popup_call_audio_second_window_g

0x0632,	// (0x00063628) popup_call_audio_second_window_t1_ParamLimits

0x0632,	// (0x00063628) popup_call_audio_second_window_t1

0x06b3,	// (0x000636a9) popup_call_audio_second_window_t2_ParamLimits

0x06b3,	// (0x000636a9) popup_call_audio_second_window_t2

0x06e9,	// (0x000636df) popup_call_audio_second_window_t3_ParamLimits

0x06e9,	// (0x000636df) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x0007209a) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x0007209a) popup_call_audio_second_window_t

0x04e2,	// (0x000634d8) bg_popup_call_pane_cp04

0x071f,	// (0x00063715) list_conf_pane

0x0727,	// (0x0006371d) popup_call_audio_conf_window_t1

0x0735,	// (0x0006372b) call_thumbnail_pane_g1

0x073d,	// (0x00063733) bg_pinb_pane_ParamLimits

0x073d,	// (0x00063733) bg_pinb_pane

0x074b,	// (0x00063741) find_pinb_pane

0x073d,	// (0x00063733) listscroll_pinb_pane_ParamLimits

0x073d,	// (0x00063733) listscroll_pinb_pane

0x0755,	// (0x0006374b) pinb_bg_pane_g1

0x0755,	// (0x0006374b) pinb_bg_pane_g2

0x0755,	// (0x0006374b) pinb_bg_pane_g3

0x0755,	// (0x0006374b) pinb_bg_pane_g4

0x0755,	// (0x0006374b) pinb_bg_pane_g5

0x0755,	// (0x0006374b) pinb_bg_pane_g6

0x0755,	// (0x0006374b) pinb_bg_pane_g7

0x0755,	// (0x0006374b) pinb_bg_pane_g8

0x0755,	// (0x0006374b) pinb_bg_pane_g9

0x0755,	// (0x0006374b) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x000720a1) pinb_bg_pane_g

0x0040,	// (0x00063036) grid_pinb_pane

0x0040,	// (0x00063036) list_pinb_pane

0x075f,	// (0x00063755) scroll_pane_cp01_ParamLimits

0x075f,	// (0x00063755) scroll_pane_cp01

0x076d,	// (0x00063763) find_pinb_pane_g1_ParamLimits

0x076d,	// (0x00063763) find_pinb_pane_g1

0x0785,	// (0x0006377b) find_pinb_pane_t1

0x0797,	// (0x0006378d) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x000720bb) find_pinb_pane_t

0x07ac,	// (0x000637a2) input_focus_pane_cp01_ParamLimits

0x07ac,	// (0x000637a2) input_focus_pane_cp01

0x07b8,	// (0x000637ae) cell_pinb_pane_ParamLimits

0x07b8,	// (0x000637ae) cell_pinb_pane

0x07c6,	// (0x000637bc) cell_pinb_pane_g1_ParamLimits

0x07c6,	// (0x000637bc) cell_pinb_pane_g1

0x07d4,	// (0x000637ca) cell_pinb_pane_g2_ParamLimits

0x07d4,	// (0x000637ca) cell_pinb_pane_g2

0x07d4,	// (0x000637ca) cell_pinb_pane_g3_ParamLimits

0x07d4,	// (0x000637ca) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x000720c0) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x000720c0) cell_pinb_pane_g

0x04e2,	// (0x000634d8) grid_highlight_pane_cp01

0x07b8,	// (0x000637ae) list_pinb_item_pane_ParamLimits

0x07b8,	// (0x000637ae) list_pinb_item_pane

0x0040,	// (0x00063036) list_highlight_pane_cp02

0x07e2,	// (0x000637d8) list_pinb_item_pane_g1_ParamLimits

0x07e2,	// (0x000637d8) list_pinb_item_pane_g1

0x07d4,	// (0x000637ca) list_pinb_item_pane_g2_ParamLimits

0x07d4,	// (0x000637ca) list_pinb_item_pane_g2

0x07c6,	// (0x000637bc) list_pinb_item_pane_g3_ParamLimits

0x07c6,	// (0x000637bc) list_pinb_item_pane_g3

0x07d4,	// (0x000637ca) list_pinb_item_pane_g4_ParamLimits

0x07d4,	// (0x000637ca) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x000720c7) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x000720c7) list_pinb_item_pane_g

0x07f0,	// (0x000637e6) list_pinb_item_pane_t1_ParamLimits

0x07f0,	// (0x000637e6) list_pinb_item_pane_t1

0x772d,	// (0x0006a723) calc_display_pane

0x774b,	// (0x0006a741) calc_paper_pane

0x7767,	// (0x0006a75d) grid_calc_pane

0x04e2,	// (0x000634d8) bg_list_pane_cp01

0x7793,	// (0x0006a789) clock_g1

0x779b,	// (0x0006a791) clock_g2

0x0001,

0xf0da,	// (0x000720d0) clock_g

0x77a5,	// (0x0006a79b) clock_t1_ParamLimits

0x77a5,	// (0x0006a79b) clock_t1

0x77ba,	// (0x0006a7b0) clock_t2_ParamLimits

0x77ba,	// (0x0006a7b0) clock_t2

0x77cc,	// (0x0006a7c2) clock_t3_ParamLimits

0x77cc,	// (0x0006a7c2) clock_t3

0x77de,	// (0x0006a7d4) clock_t4_ParamLimits

0x77de,	// (0x0006a7d4) clock_t4

0x77f0,	// (0x0006a7e6) clock_t5_ParamLimits

0x77f0,	// (0x0006a7e6) clock_t5

0x7805,	// (0x0006a7fb) clock_t6_ParamLimits

0x7805,	// (0x0006a7fb) clock_t6

0x7817,	// (0x0006a80d) clock_t7_ParamLimits

0x7817,	// (0x0006a80d) clock_t7

0x7829,	// (0x0006a81f) clock_t8_ParamLimits

0x7829,	// (0x0006a81f) clock_t8

0x783f,	// (0x0006a835) clock_t9_ParamLimits

0x783f,	// (0x0006a835) clock_t9

0x0008,

0xf0df,	// (0x000720d5) clock_t_ParamLimits

0xf0df,	// (0x000720d5) clock_t

0x080c,	// (0x00063802) popup_clock_analogue_window_cp02

0x080c,	// (0x00063802) popup_clock_digital_window_cp01

0x04e2,	// (0x000634d8) listscroll_help_pane

0x04e2,	// (0x000634d8) phob_pre_status_pane

0x0814,	// (0x0006380a) grid_qdial_pane

0x7855,	// (0x0006a84b) listscroll_mce_pane

0x073d,	// (0x00063733) bg_notes_pane

0x081e,	// (0x00063814) list_notes_pane

0x7873,	// (0x0006a869) scroll_pane_cp06

0x082c,	// (0x00063822) bg_calc_paper_pane

0x7882,	// (0x0006a878) list_calc_pane

0x085a,	// (0x00063850) bg_calc_display_pane

0x789c,	// (0x0006a892) calc_display_pane_t1

0x78b1,	// (0x0006a8a7) calc_display_pane_t2

0x78c6,	// (0x0006a8bc) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x000720e8) calc_display_pane_t

0x78d8,	// (0x0006a8ce) cell_calc_pane_ParamLimits

0x78d8,	// (0x0006a8ce) cell_calc_pane

0x0878,	// (0x0006386e) bg_calc_paper_pane_g1

0x0890,	// (0x00063886) bg_calc_paper_pane_g2

0x0884,	// (0x0006387a) bg_calc_paper_pane_g3

0x08a8,	// (0x0006389e) bg_calc_paper_pane_g4

0x089c,	// (0x00063892) bg_calc_paper_pane_g5

0x7905,	// (0x0006a8fb) bg_calc_paper_pane_g6

0x7916,	// (0x0006a90c) bg_calc_paper_pane_g7

0x7927,	// (0x0006a91d) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x000720ef) bg_calc_paper_pane_g

0x7938,	// (0x0006a92e) calc_bg_paper_pane_g9

0x7949,	// (0x0006a93f) list_calc_item_pane_ParamLimits

0x7949,	// (0x0006a93f) list_calc_item_pane

0x08b4,	// (0x000638aa) list_calc_item_pane_g1

0x7975,	// (0x0006a96b) list_calc_item_pane_t1_ParamLimits

0x7975,	// (0x0006a96b) list_calc_item_pane_t1

0x7987,	// (0x0006a97d) list_calc_item_pane_t2_ParamLimits

0x7987,	// (0x0006a97d) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x00072100) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x00072100) list_calc_item_pane_t

0x0755,	// (0x0006374b) cell_calc_pane_g1

0x08d3,	// (0x000638c9) grid_highlight_pane_cp02

0x79b7,	// (0x0006a9ad) bg_calc_display_pane_g1

0x79c0,	// (0x0006a9b6) bg_calc_display_pane_g2

0x79ca,	// (0x0006a9c0) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x0007210a) bg_calc_display_pane_g

0x79d3,	// (0x0006a9c9) cell_qdial_pane_ParamLimits

0x79d3,	// (0x0006a9c9) cell_qdial_pane

0x79e7,	// (0x0006a9dd) cell_qdial_pane_g1_ParamLimits

0x79e7,	// (0x0006a9dd) cell_qdial_pane_g1

0x79f4,	// (0x0006a9ea) cell_qdial_pane_g2_ParamLimits

0x79f4,	// (0x0006a9ea) cell_qdial_pane_g2

0x08fe,	// (0x000638f4) cell_qdial_pane_g3_ParamLimits

0x08fe,	// (0x000638f4) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x00072111) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x00072111) cell_qdial_pane_g

0x7a12,	// (0x0006aa08) cell_qdial_pane_t1_ParamLimits

0x7a12,	// (0x0006aa08) cell_qdial_pane_t1

0x7a2a,	// (0x0006aa20) cell_qdial_pane_t2_ParamLimits

0x7a2a,	// (0x0006aa20) cell_qdial_pane_t2

0x7a3d,	// (0x0006aa33) cell_qdial_pane_t3_ParamLimits

0x7a3d,	// (0x0006aa33) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x0007211a) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x0007211a) cell_qdial_pane_t

0x04e2,	// (0x000634d8) grid_highlight_pane_cp04

0x090a,	// (0x00063900) thumbnail_qdial_pane_ParamLimits

0x090a,	// (0x00063900) thumbnail_qdial_pane

0x0966,	// (0x0006395c) list_help_pane

0x096f,	// (0x00063965) scroll_pane_cp02

0x7a50,	// (0x0006aa46) help_list_pane_t1_ParamLimits

0x7a50,	// (0x0006aa46) help_list_pane_t1

0x7a86,	// (0x0006aa7c) bg_notes_pane_g2

0x7a8e,	// (0x0006aa84) bg_notes_pane_g3

0x7a96,	// (0x0006aa8c) notes_bg_pane_g1

0x7a9e,	// (0x0006aa94) notes_bg_pane_g4

0x7aa6,	// (0x0006aa9c) notes_bg_pane_g5

0x7aae,	// (0x0006aaa4) notes_bg_pane_g6

0x7ab6,	// (0x0006aaac) notes_bg_pane_g7

0x7abe,	// (0x0006aab4) notes_bg_pane_g8

0x7ac6,	// (0x0006aabc) notes_bg_pane_g9

0x0006,

0xf142,	// (0x00072138) notes_bg_pane_g

0x7ace,	// (0x0006aac4) list_notes_text_pane_ParamLimits

0x7ace,	// (0x0006aac4) list_notes_text_pane

0x09de,	// (0x000639d4) list_notes_text_pane_g1

0x66fe,	// (0x000696f4) list_notes_text_pane_t1

0x7af6,	// (0x0006aaec) listscroll_cale_week_pane

0x7b1b,	// (0x0006ab11) bg_cale_heading_pane

0x0a01,	// (0x000639f7) bg_cale_pane_cp01

0x7b3b,	// (0x0006ab31) cale_week_corner_pane

0x7b55,	// (0x0006ab4b) cale_week_day_heading_pane

0x7b75,	// (0x0006ab6b) cale_week_scroll_pane_g1

0x7b90,	// (0x0006ab86) cale_week_scroll_pane_g2

0x7ba3,	// (0x0006ab99) cale_week_scroll_pane_g3

0x7bb6,	// (0x0006abac) cale_week_scroll_pane_g4

0x7bc9,	// (0x0006abbf) cale_week_scroll_pane_g5

0x7bdc,	// (0x0006abd2) cale_week_scroll_pane_g6

0x7bef,	// (0x0006abe5) cale_week_scroll_pane_g7

0x7c04,	// (0x0006abfa) cale_week_scroll_pane_g8

0x7c19,	// (0x0006ac0f) cale_week_scroll_pane_g9

0x7c2c,	// (0x0006ac22) cale_week_scroll_pane_g10

0x7c3f,	// (0x0006ac35) cale_week_scroll_pane_g11

0x7c52,	// (0x0006ac48) cale_week_scroll_pane_g12

0x7c69,	// (0x0006ac5f) cale_week_scroll_pane_g13

0x7c84,	// (0x0006ac7a) cale_week_scroll_pane_g14

0x7c9f,	// (0x0006ac95) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x00072147) cale_week_scroll_pane_g

0x7ccf,	// (0x0006acc5) cale_week_time_pane

0x7ce4,	// (0x0006acda) grid_cale_week_pane

0x0a30,	// (0x00063a26) scroll_pane_cp08

0x7d03,	// (0x0006acf9) cell_cale_week_pane_ParamLimits

0x7d03,	// (0x0006acf9) cell_cale_week_pane

0x7d65,	// (0x0006ad5b) cale_week_day_heading_pane_t1

0x7d80,	// (0x0006ad76) cale_week_day_heading_pane_t2

0x7d9b,	// (0x0006ad91) cale_week_day_heading_pane_t3

0x7db6,	// (0x0006adac) cale_week_day_heading_pane_t4

0x7dd1,	// (0x0006adc7) cale_week_day_heading_pane_t5

0x7dec,	// (0x0006ade2) cale_week_day_heading_pane_t6

0x7e07,	// (0x0006adfd) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x00072168) cale_week_day_heading_pane_t

0x0a4d,	// (0x00063a43) bg_cale_side_pane

0x7e22,	// (0x0006ae18) cale_week_time_pane_t1

0x7e3c,	// (0x0006ae32) cale_week_time_pane_t2

0x7e56,	// (0x0006ae4c) cale_week_time_pane_t3

0x7e70,	// (0x0006ae66) cale_week_time_pane_t4

0x7e8a,	// (0x0006ae80) cale_week_time_pane_t5

0x7ea4,	// (0x0006ae9a) cale_week_time_pane_t6

0x7ec2,	// (0x0006aeb8) cale_week_time_pane_t7

0x7ee4,	// (0x0006aeda) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x00072177) cale_week_time_pane_t

0x7f08,	// (0x0006aefe) cell_cale_week_pane_g2

0x7f2c,	// (0x0006af22) cell_cale_week_pane_g3_ParamLimits

0x7f2c,	// (0x0006af22) cell_cale_week_pane_g3

0x0a5b,	// (0x00063a51) grid_highlight_pane_cp07

0x0a63,	// (0x00063a59) listscroll_gms_pane

0x0a6d,	// (0x00063a63) grid_gms_pane

0x0a76,	// (0x00063a6c) listscroll_gms_pane_g1

0x0a7e,	// (0x00063a74) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x00072188) listscroll_gms_pane_g

0x7f44,	// (0x0006af3a) scroll_pane_cp010

0x7f4f,	// (0x0006af45) cell_gms_pane_ParamLimits

0x7f4f,	// (0x0006af45) cell_gms_pane

0x7f62,	// (0x0006af58) cell_gms_pane_g1

0x0a86,	// (0x00063a7c) cell_gms_pane_g2

0x09de,	// (0x000639d4) cell_gms_pane_g3

0x0a8e,	// (0x00063a84) cell_gms_pane_g4

0x0003,

0xf197,	// (0x0007218d) cell_gms_pane_g

0x0a97,	// (0x00063a8d) grid_highlight_pane_cp09

0x9f46,	// (0x0006cf3c) phob_pre_status_pane_g1

0x9f4e,	// (0x0006cf44) phob_pre_status_pane_g2

0x9f56,	// (0x0006cf4c) phob_pre_status_pane_g3

0x9f5e,	// (0x0006cf54) phob_pre_status_pane_g4

0x0004,

0xf560,	// (0x00072556) phob_pre_status_pane_g

0x9f6e,	// (0x0006cf64) phob_pre_status_pane_t1

0x9f7e,	// (0x0006cf74) phob_pre_status_pane_t2

0x9f8e,	// (0x0006cf84) phob_pre_status_pane_t3

0x0002,

0xf56b,	// (0x00072561) phob_pre_status_pane_t

0x0a9f,	// (0x00063a95) bg_list_pane_cp05

0x7f72,	// (0x0006af68) grid_vorec_pane

0x7f7c,	// (0x0006af72) vorec_t1

0x7f8a,	// (0x0006af80) vorec_t2

0x7f98,	// (0x0006af8e) vorec_t3

0x7fa6,	// (0x0006af9c) vorec_t4

0xe8d3,	// (0x000718c9) vorec_t5

0xe8e1,	// (0x000718d7) vorec_t6

0x0004,

0xf1a0,	// (0x00072196) vorec_t

0xe8ef,	// (0x000718e5) wait_bar_pane_cp01

0x7fc2,	// (0x0006afb8) cell_vorec_pane_ParamLimits

0x7fc2,	// (0x0006afb8) cell_vorec_pane

0x7fd5,	// (0x0006afcb) cell_vorec_pane_g1

0x04e2,	// (0x000634d8) grid_highlight_pane_cp05

0x07b8,	// (0x000637ae) cams_zoom_pane

0x07b8,	// (0x000637ae) image_vga_pane

0x07d4,	// (0x000637ca) main_camera_pane_g1

0x07d4,	// (0x000637ca) main_camera_pane_g2

0x07d4,	// (0x000637ca) main_camera_pane_g3

0x07d4,	// (0x000637ca) main_camera_pane_g4

0x07d4,	// (0x000637ca) main_camera_pane_g5

0x07d4,	// (0x000637ca) main_camera_pane_g6

0x07d4,	// (0x000637ca) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x000721a1) main_camera_pane_g

0x168e,	// (0x00064684) main_camera_pane_t1

0x168e,	// (0x00064684) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x000721b2) main_camera_pane_t

0x7fdf,	// (0x0006afd5) cams_zoom_pane_cp_ParamLimits

0x7fdf,	// (0x0006afd5) cams_zoom_pane_cp

0x800d,	// (0x0006b003) image_cif_pane_ParamLimits

0x800d,	// (0x0006b003) image_cif_pane

0x0040,	// (0x00063036) image_subqcif_pane

0x801b,	// (0x0006b011) main_video_pane_g1_ParamLimits

0x801b,	// (0x0006b011) main_video_pane_g1

0x8043,	// (0x0006b039) main_video_pane_g2_ParamLimits

0x8043,	// (0x0006b039) main_video_pane_g2

0x8076,	// (0x0006b06c) main_video_pane_g3_ParamLimits

0x8076,	// (0x0006b06c) main_video_pane_g3

0x8076,	// (0x0006b06c) main_video_pane_g4_ParamLimits

0x8076,	// (0x0006b06c) main_video_pane_g4

0x80a4,	// (0x0006b09a) main_video_pane_g5_ParamLimits

0x80a4,	// (0x0006b09a) main_video_pane_g5

0x0ac5,	// (0x00063abb) main_video_pane_g6_ParamLimits

0x0ac5,	// (0x00063abb) main_video_pane_g6

0x0006,

0xf1c1,	// (0x000721b7) main_video_pane_g_ParamLimits

0xf1c1,	// (0x000721b7) main_video_pane_g

0x80c0,	// (0x0006b0b6) main_video_pane_t1_ParamLimits

0x80c0,	// (0x0006b0b6) main_video_pane_t1

0x0adf,	// (0x00063ad5) cams_zoom_pane_g1

0x0adf,	// (0x00063ad5) cams_zoom_pane_g2

0x0adf,	// (0x00063ad5) cams_zoom_pane_g3

0x0adf,	// (0x00063ad5) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x000721c6) cams_zoom_pane_g

0x8106,	// (0x0006b0fc) grid_cams_pane

0x8114,	// (0x0006b10a) linegrid_cams_pane

0x8122,	// (0x0006b118) cell_cams_pane_ParamLimits

0x8122,	// (0x0006b118) cell_cams_pane

0x0ae9,	// (0x00063adf) cams_burst_image_pane

0x0af1,	// (0x00063ae7) cell_cams_pane_g1

0x04e2,	// (0x000634d8) grid_highlight_pane_cp03

0x0755,	// (0x0006374b) mp_bg_pane_g1

0x0040,	// (0x00063036) bg_list_pane_cp03

0x0040,	// (0x00063036) bg_mp_pane

0x0040,	// (0x00063036) grid_mp_pane

0x0adf,	// (0x00063ad5) media_player_g1

0x1041,	// (0x00064037) media_player_t1

0x1041,	// (0x00064037) media_player_t2

0x1041,	// (0x00064037) media_player_t3

0x1041,	// (0x00064037) media_player_t4

0x1041,	// (0x00064037) media_player_t5

0x1041,	// (0x00064037) media_player_t6

0x1041,	// (0x00064037) media_player_t7

0x0006,

0xf54a,	// (0x00072540) media_player_t

0x0040,	// (0x00063036) wait_bar_pane_cp02

0xf52f,	// (0x00072525) main_usb_pane_t

0x1320,	// (0x00064316) cell_mp_pane

0x0755,	// (0x0006374b) cell_mp_pane_g1

0x04e2,	// (0x000634d8) grid_highlight_pane_cp06

0x0af9,	// (0x00063aef) grid_skin_colour_pane

0x0b01,	// (0x00063af7) list_highlight_pane_cp03

0x8135,	// (0x0006b12b) skin_g1

0x0b09,	// (0x00063aff) skin_t1

0x0b18,	// (0x00063b0e) skin_t2

0x0001,

0xf1fe,	// (0x000721f4) skin_t

0x813f,	// (0x0006b135) cell_skin_colour_pane_ParamLimits

0x813f,	// (0x0006b135) cell_skin_colour_pane

0x0b26,	// (0x00063b1c) cell_skin_colour_pane_g1

0x81c3,	// (0x0006b1b9) call_video_g1_ParamLimits

0x81c3,	// (0x0006b1b9) call_video_g1

0x81d3,	// (0x0006b1c9) call_video_g2_ParamLimits

0x81d3,	// (0x0006b1c9) call_video_g2

0x0001,

0xf203,	// (0x000721f9) call_video_g_ParamLimits

0xf203,	// (0x000721f9) call_video_g

0x822d,	// (0x0006b223) call_video_uplink_pane_cp1_ParamLimits

0x822d,	// (0x0006b223) call_video_uplink_pane_cp1

0x0b38,	// (0x00063b2e) call_video_uplink_pane_cp2

0x82f9,	// (0x0006b2ef) video_down_crop_pane_ParamLimits

0x82f9,	// (0x0006b2ef) video_down_crop_pane

0x83f7,	// (0x0006b3ed) video_down_pane_ParamLimits

0x83f7,	// (0x0006b3ed) video_down_pane

0x0b40,	// (0x00063b36) video_down_subqcif_pane_ParamLimits

0x0b40,	// (0x00063b36) video_down_subqcif_pane

0x0b58,	// (0x00063b4e) video_down_subqcif_pane_cp_ParamLimits

0x0b58,	// (0x00063b4e) video_down_subqcif_pane_cp

0x0b7e,	// (0x00063b74) im_reading_pane_ParamLimits

0x0b7e,	// (0x00063b74) im_reading_pane

0x8517,	// (0x0006b50d) im_writing_pane_ParamLimits

0x8517,	// (0x0006b50d) im_writing_pane

0x8535,	// (0x0006b52b) im_reading_pane_t1

0x0b98,	// (0x00063b8e) list_im_pane

0x0ba9,	// (0x00063b9f) scroll_pane_cp07

0x8589,	// (0x0006b57f) im_writing_pane_t1_ParamLimits

0x8589,	// (0x0006b57f) im_writing_pane_t1

0x0bc2,	// (0x00063bb8) im_writing_pane_t2_ParamLimits

0x0bc2,	// (0x00063bb8) im_writing_pane_t2

0x0001,

0xf20d,	// (0x00072203) im_writing_pane_t_ParamLimits

0xf20d,	// (0x00072203) im_writing_pane_t

0x04e2,	// (0x000634d8) input_focus_pane_cp04

0x04e2,	// (0x000634d8) input_focus_pane_cp05

0x859e,	// (0x0006b594) list_im_single_pane_ParamLimits

0x859e,	// (0x0006b594) list_im_single_pane

0x85c2,	// (0x0006b5b8) list_single_im_pane_t1

0x0a9f,	// (0x00063a95) blid_accuracy_pane

0x0a9f,	// (0x00063a95) blid_compass_pane

0x28e1,	// (0x000658d7) main_location_t1

0x28e1,	// (0x000658d7) main_location_t2

0x28e1,	// (0x000658d7) main_location_t3

0x0002,

0xf559,	// (0x0007254f) main_location_t

0x04e2,	// (0x000634d8) aid_levels_location

0x0755,	// (0x0006374b) blid_accuracy_pane_g1

0x0755,	// (0x0006374b) blid_accuracy_pane_g2

0x0001,

0xf261,	// (0x00072257) blid_accuracy_pane_g

0x0c0a,	// (0x00063c00) wml_content_pane

0x0c48,	// (0x00063c3e) wml_button_pane_ParamLimits

0x0c48,	// (0x00063c3e) wml_button_pane

0x85d1,	// (0x0006b5c7) wml_list_single_large_pane_ParamLimits

0x85d1,	// (0x0006b5c7) wml_list_single_large_pane

0x85fb,	// (0x0006b5f1) wml_list_single_medium_pane_ParamLimits

0x85fb,	// (0x0006b5f1) wml_list_single_medium_pane

0x862c,	// (0x0006b622) wml_list_single_small_pane_ParamLimits

0x862c,	// (0x0006b622) wml_list_single_small_pane

0x0c5c,	// (0x00063c52) wml_selection_box_pane_ParamLimits

0x0c5c,	// (0x00063c52) wml_selection_box_pane

0x0c6f,	// (0x00063c65) wml_list_single_pane_t1

0x0c7e,	// (0x00063c74) wml_list_single_medium_pane_t1

0x0c8d,	// (0x00063c83) wml_list_single_large_pane_t1

0x0c9c,	// (0x00063c92) input_focus_pane_cp02_ParamLimits

0x0c9c,	// (0x00063c92) input_focus_pane_cp02

0x0caf,	// (0x00063ca5) wml_selection_box_pane_g1

0x0cb8,	// (0x00063cae) wml_selection_box_pane_t1_ParamLimits

0x0cb8,	// (0x00063cae) wml_selection_box_pane_t1

0x073d,	// (0x00063733) bg_wml_button_pane_ParamLimits

0x073d,	// (0x00063733) bg_wml_button_pane

0x0cd0,	// (0x00063cc6) wml_button_pane_g1

0x0cd8,	// (0x00063cce) wml_button_pane_t1

0x0cd0,	// (0x00063cc6) wml_button_bg_pane_g1

0x0ce8,	// (0x00063cde) wml_button_bg_pane_g2

0x0cf0,	// (0x00063ce6) wml_button_bg_pane_g3

0x0cf8,	// (0x00063cee) wml_button_bg_pane_g4

0x0d00,	// (0x00063cf6) wml_button_bg_pane_g5

0x0d08,	// (0x00063cfe) wml_button_bg_pane_g6

0x0d10,	// (0x00063d06) wml_button_bg_pane_g7

0x0d18,	// (0x00063d0e) wml_button_bg_pane_g8

0x0d20,	// (0x00063d16) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x00072208) wml_button_bg_pane_g

0x8666,	// (0x0006b65c) bg_list_pane_cp02

0x0d28,	// (0x00063d1e) mce_header_pane_ParamLimits

0x0d28,	// (0x00063d1e) mce_header_pane

0x0d3e,	// (0x00063d34) mce_icon_pane

0x0d3e,	// (0x00063d34) mce_image_pane

0x866e,	// (0x0006b664) mce_text_pane_ParamLimits

0x866e,	// (0x0006b664) mce_text_pane

0x8681,	// (0x0006b677) scroll_pane_cp03

0x0c40,	// (0x00063c36) scroll_pane_cp04

0x0d47,	// (0x00063d3d) scroll_pane_cp05_ParamLimits

0x0d47,	// (0x00063d3d) scroll_pane_cp05

0x8689,	// (0x0006b67f) mce_header_field_pane_ParamLimits

0x8689,	// (0x0006b67f) mce_header_field_pane

0x86a9,	// (0x0006b69f) mce_header_field_pane_2_ParamLimits

0x86a9,	// (0x0006b69f) mce_header_field_pane_2

0x86bf,	// (0x0006b6b5) mce_header_field_pane_3

0x86c7,	// (0x0006b6bd) list_single_mce_message_pane_ParamLimits

0x86c7,	// (0x0006b6bd) list_single_mce_message_pane

0x86d7,	// (0x0006b6cd) list_single_mce_smart_pane_ParamLimits

0x86d7,	// (0x0006b6cd) list_single_mce_smart_pane

0x0d53,	// (0x00063d49) input_focus_pane_cp03

0x0d5c,	// (0x00063d52) list_header_data_pane

0x86f2,	// (0x0006b6e8) mce_header_field_pane_t1

0x8700,	// (0x0006b6f6) list_single_mce_header_pane_ParamLimits

0x8700,	// (0x0006b6f6) list_single_mce_header_pane

0x0d64,	// (0x00063d5a) list_single_mce_header_pane_t1

0x0d73,	// (0x00063d69) list_single_mce_message_pane_g1

0x0d7b,	// (0x00063d71) list_single_mce_message_pane_t1

0x8737,	// (0x0006b72d) bg_cale_heading_pane_cp01_ParamLimits

0x8737,	// (0x0006b72d) bg_cale_heading_pane_cp01

0x0d89,	// (0x00063d7f) bg_cale_pane_cp02_ParamLimits

0x0d89,	// (0x00063d7f) bg_cale_pane_cp02

0x8785,	// (0x0006b77b) cale_month_corner_pane

0x87a4,	// (0x0006b79a) cale_month_day_heading_pane_ParamLimits

0x87a4,	// (0x0006b79a) cale_month_day_heading_pane

0x880a,	// (0x0006b800) cale_month_pane_g1_ParamLimits

0x880a,	// (0x0006b800) cale_month_pane_g1

0x884d,	// (0x0006b843) cale_month_pane_g2_ParamLimits

0x884d,	// (0x0006b843) cale_month_pane_g2

0x8885,	// (0x0006b87b) cale_month_pane_g3_ParamLimits

0x8885,	// (0x0006b87b) cale_month_pane_g3

0x88d1,	// (0x0006b8c7) cale_month_pane_g4_ParamLimits

0x88d1,	// (0x0006b8c7) cale_month_pane_g4

0x891d,	// (0x0006b913) cale_month_pane_g5_ParamLimits

0x891d,	// (0x0006b913) cale_month_pane_g5

0x8969,	// (0x0006b95f) cale_month_pane_g6_ParamLimits

0x8969,	// (0x0006b95f) cale_month_pane_g6

0x89b5,	// (0x0006b9ab) cale_month_pane_g7_ParamLimits

0x89b5,	// (0x0006b9ab) cale_month_pane_g7

0x8a19,	// (0x0006ba0f) cale_month_pane_g8_ParamLimits

0x8a19,	// (0x0006ba0f) cale_month_pane_g8

0x8a7d,	// (0x0006ba73) cale_month_pane_g9_ParamLimits

0x8a7d,	// (0x0006ba73) cale_month_pane_g9

0x8adb,	// (0x0006bad1) cale_month_pane_g10_ParamLimits

0x8adb,	// (0x0006bad1) cale_month_pane_g10

0x8b37,	// (0x0006bb2d) cale_month_pane_g11_ParamLimits

0x8b37,	// (0x0006bb2d) cale_month_pane_g11

0x8b8b,	// (0x0006bb81) cale_month_pane_g12_ParamLimits

0x8b8b,	// (0x0006bb81) cale_month_pane_g12

0x8be1,	// (0x0006bbd7) cale_month_pane_g13_ParamLimits

0x8be1,	// (0x0006bbd7) cale_month_pane_g13

0x000c,

0xf225,	// (0x0007221b) cale_month_pane_g_ParamLimits

0xf225,	// (0x0007221b) cale_month_pane_g

0x8c37,	// (0x0006bc2d) cale_month_week_pane

0x8c5b,	// (0x0006bc51) grid_cale_month_pane_ParamLimits

0x8c5b,	// (0x0006bc51) grid_cale_month_pane

0x8cb4,	// (0x0006bcaa) cale_month_day_heading_pane_t1

0x8d3a,	// (0x0006bd30) cale_month_day_heading_pane_t2

0x8db3,	// (0x0006bda9) cale_month_day_heading_pane_t3

0x8e2c,	// (0x0006be22) cale_month_day_heading_pane_t4

0x8ea5,	// (0x0006be9b) cale_month_day_heading_pane_t5

0x8f1e,	// (0x0006bf14) cale_month_day_heading_pane_t6

0x8f97,	// (0x0006bf8d) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x00072236) cale_month_day_heading_pane_t

0x0a4d,	// (0x00063a43) bg_cale_side_pane_cp01

0x9028,	// (0x0006c01e) cale_month_week_pane_t1

0x9041,	// (0x0006c037) cale_month_week_pane_t2

0x905a,	// (0x0006c050) cale_month_week_pane_t3

0x9073,	// (0x0006c069) cale_month_week_pane_t4

0x908c,	// (0x0006c082) cale_month_week_pane_t5

0x90ad,	// (0x0006c0a3) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x00072245) cale_month_week_pane_t

0x90ce,	// (0x0006c0c4) cell_cale_month_pane_ParamLimits

0x90ce,	// (0x0006c0c4) cell_cale_month_pane

0x91f0,	// (0x0006c1e6) cell_cale_month_pane_g1

0x91fc,	// (0x0006c1f2) cell_cale_month_pane_t1_ParamLimits

0x91fc,	// (0x0006c1f2) cell_cale_month_pane_t1

0x0a5b,	// (0x00063a51) grid_highlight_pane_cp08

0x0755,	// (0x0006374b) main_smil_g1

0x9228,	// (0x0006c21e) smil_status_pane

0x0dd4,	// (0x00063dca) smil_text_pane

0x27f9,	// (0x000657ef) bg_popup_call3_rect_pane_g8

0x2801,	// (0x000657f7) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ed,	// (0x000724e3) bg_popup_call3_rect_pane_g

0x48f3,	// (0x000678e9) smil_status_volume_pane_g1

0x0dde,	// (0x00063dd4) smil_status_pane_t1

0xa2e5,	// (0x0006d2db) volume_smil_pane

0x0df5,	// (0x00063deb) list_smil_text_pane

0x923b,	// (0x0006c231) scroll_pane_cp011

0x9246,	// (0x0006c23c) smil_text_list_pane_t1_ParamLimits

0x9246,	// (0x0006c23c) smil_text_list_pane_t1

0x92be,	// (0x0006c2b4) aid_volume_smil_ParamLimits

0x92be,	// (0x0006c2b4) aid_volume_smil

0x0755,	// (0x0006374b) smil_volume_pane_g1

0x0755,	// (0x0006374b) smil_volume_pane_g2

0x0001,

0xf261,	// (0x00072257) smil_volume_pane_g

0x7af6,	// (0x0006aaec) listscroll_cale_day_pane

0x0e21,	// (0x00063e17) bg_cale_pane

0x0e39,	// (0x00063e2f) list_cale_pane

0x0e5c,	// (0x00063e52) scroll_pane_cp09

0x0e6d,	// (0x00063e63) cale_bg_pane_g1

0x0e75,	// (0x00063e6b) cale_bg_pane_g2

0x0e7d,	// (0x00063e73) cale_bg_pane_g3

0x0e85,	// (0x00063e7b) cale_bg_pane_g4

0x0e8d,	// (0x00063e83) cale_bg_pane_g5

0x0e95,	// (0x00063e8b) cale_bg_pane_g6

0x0e9d,	// (0x00063e93) cale_bg_pane_g7

0x0ea5,	// (0x00063e9b) cale_bg_pane_g8

0x0ead,	// (0x00063ea3) cale_bg_pane_g9

0x0008,

0xf266,	// (0x0007225c) cale_bg_pane_g

0x92e0,	// (0x0006c2d6) list_cale_time_pane_ParamLimits

0x92e0,	// (0x0006c2d6) list_cale_time_pane

0x0ebd,	// (0x00063eb3) list_cale_time_pane_g1_ParamLimits

0x0ebd,	// (0x00063eb3) list_cale_time_pane_g1

0x0ec9,	// (0x00063ebf) list_cale_time_pane_g2_ParamLimits

0x0ec9,	// (0x00063ebf) list_cale_time_pane_g2

0x9302,	// (0x0006c2f8) list_cale_time_pane_g3_ParamLimits

0x9302,	// (0x0006c2f8) list_cale_time_pane_g3

0x9310,	// (0x0006c306) list_cale_time_pane_g4_ParamLimits

0x9310,	// (0x0006c306) list_cale_time_pane_g4

0x931e,	// (0x0006c314) list_cale_time_pane_g5_ParamLimits

0x931e,	// (0x0006c314) list_cale_time_pane_g5

0x0005,

0xf279,	// (0x0007226f) list_cale_time_pane_g_ParamLimits

0xf279,	// (0x0007226f) list_cale_time_pane_g

0x0ee3,	// (0x00063ed9) list_cale_time_pane_t1_ParamLimits

0x0ee3,	// (0x00063ed9) list_cale_time_pane_t1

0x0f0b,	// (0x00063f01) list_cale_time_pane_t2_ParamLimits

0x0f0b,	// (0x00063f01) list_cale_time_pane_t2

0x95c1,	// (0x0006c5b7) aid_blid_cardinal_pane

0x9603,	// (0x0006c5f9) compass_pane_t4

0x0f33,	// (0x00063f29) list_cale_time_pane_t4_ParamLimits

0x0f33,	// (0x00063f29) list_cale_time_pane_t4

0x9611,	// (0x0006c607) compass_pane_t5

0x9621,	// (0x0006c617) compass_pane_t6

0x962f,	// (0x0006c625) compass_pane_t7

0x1465,	// (0x0006445b) navi_pane_cc_t1

0x1654,	// (0x0006464a) aid_phob_thumbnail_center_pane

0x99e4,	// (0x0006c9da) main_postcard_pane_g4_ParamLimits

0x0002,

0xf286,	// (0x0007227c) list_cale_time_pane_t_ParamLimits

0xf286,	// (0x0007227c) list_cale_time_pane_t

0x0139,	// (0x0006312f) bg_popup_window_pane_cp02_ParamLimits

0x0139,	// (0x0006312f) bg_popup_window_pane_cp02

0x0f5b,	// (0x00063f51) heading_pane_cp01_ParamLimits

0x0f5b,	// (0x00063f51) heading_pane_cp01

0x0f67,	// (0x00063f5d) loc_req_pane_ParamLimits

0x0f67,	// (0x00063f5d) loc_req_pane

0x0f77,	// (0x00063f6d) loc_type_pane_ParamLimits

0x0f77,	// (0x00063f6d) loc_type_pane

0x0f89,	// (0x00063f7f) loc_type_pane_t1_ParamLimits

0x0f89,	// (0x00063f7f) loc_type_pane_t1

0x0f9b,	// (0x00063f91) loc_type_pane_t2_ParamLimits

0x0f9b,	// (0x00063f91) loc_type_pane_t2

0x0fad,	// (0x00063fa3) loc_type_pane_t3_ParamLimits

0x0fad,	// (0x00063fa3) loc_type_pane_t3

0x0002,

0xf28d,	// (0x00072283) loc_type_pane_t_ParamLimits

0xf28d,	// (0x00072283) loc_type_pane_t

0x0fbf,	// (0x00063fb5) list_loc_req_pane

0x0fc9,	// (0x00063fbf) scroll_pane_cp012

0x932c,	// (0x0006c322) list_single_loc_request_popup_menu_pane_ParamLimits

0x932c,	// (0x0006c322) list_single_loc_request_popup_menu_pane

0x0fd4,	// (0x00063fca) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0fd4,	// (0x00063fca) list_single_loc_request_popup_menu_pane_g1

0x0fe0,	// (0x00063fd6) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0fe0,	// (0x00063fd6) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf294,	// (0x0007228a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf294,	// (0x0007228a) list_single_loc_request_popup_menu_pane_g

0x0fec,	// (0x00063fe2) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0fec,	// (0x00063fe2) list_single_loc_request_popup_menu_pane_t1

0x933e,	// (0x0006c334) bg_popup_window_pane_cp03_ParamLimits

0x933e,	// (0x0006c334) bg_popup_window_pane_cp03

0x934c,	// (0x0006c342) heading_loc_req_pane_ParamLimits

0x934c,	// (0x0006c342) heading_loc_req_pane

0x9358,	// (0x0006c34e) popup_dyc_status_message_window_g1_ParamLimits

0x9358,	// (0x0006c34e) popup_dyc_status_message_window_g1

0x9364,	// (0x0006c35a) popup_dyc_status_message_window_t1_ParamLimits

0x9364,	// (0x0006c35a) popup_dyc_status_message_window_t1

0x9376,	// (0x0006c36c) popup_dyc_status_message_window_t2_ParamLimits

0x9376,	// (0x0006c36c) popup_dyc_status_message_window_t2

0x9388,	// (0x0006c37e) popup_dyc_status_message_window_t3_ParamLimits

0x9388,	// (0x0006c37e) popup_dyc_status_message_window_t3

0x0002,

0xf299,	// (0x0007228f) popup_dyc_status_message_window_t_ParamLimits

0xf299,	// (0x0007228f) popup_dyc_status_message_window_t

0x04e2,	// (0x000634d8) bg_heading_pane_cp01

0x100e,	// (0x00064004) heading_loc_req_pane_g1

0x1016,	// (0x0006400c) heading_loc_req_pane_g2

0x101e,	// (0x00064014) heading_loc_req_pane_g3

0x0002,

0xf2a0,	// (0x00072296) heading_loc_req_pane_g

0x1026,	// (0x0006401c) heading_loc_req_pane_t1

0x1051,	// (0x00064047) bg_popup_sub_pane_cp01_ParamLimits

0x1051,	// (0x00064047) bg_popup_sub_pane_cp01

0x105f,	// (0x00064055) popup_cale_events_window_g1_ParamLimits

0x105f,	// (0x00064055) popup_cale_events_window_g1

0x107f,	// (0x00064075) popup_cale_events_window_g2_ParamLimits

0x107f,	// (0x00064075) popup_cale_events_window_g2

0x0001,

0xf2c2,	// (0x000722b8) popup_cale_events_window_g_ParamLimits

0xf2c2,	// (0x000722b8) popup_cale_events_window_g

0x109f,	// (0x00064095) popup_cale_events_window_t1_ParamLimits

0x109f,	// (0x00064095) popup_cale_events_window_t1

0x10b1,	// (0x000640a7) popup_cale_events_window_t2_ParamLimits

0x10b1,	// (0x000640a7) popup_cale_events_window_t2

0x10ef,	// (0x000640e5) popup_cale_events_window_t3_ParamLimits

0x10ef,	// (0x000640e5) popup_cale_events_window_t3

0x1129,	// (0x0006411f) popup_cale_events_window_t4_ParamLimits

0x1129,	// (0x0006411f) popup_cale_events_window_t4

0x0003,

0xf2c7,	// (0x000722bd) popup_cale_events_window_t_ParamLimits

0xf2c7,	// (0x000722bd) popup_cale_events_window_t

0x93b2,	// (0x0006c3a8) call_type_pane

0x201e,	// (0x00065014) popup_call_status_window_g1

0x93be,	// (0x0006c3b4) popup_call_status_window_g2

0x93ca,	// (0x0006c3c0) popup_call_status_window_g3

0x0002,

0xf2d0,	// (0x000722c6) popup_call_status_window_g

0x115f,	// (0x00064155) call_type_pane_g1

0x1168,	// (0x0006415e) call_type_pane_g2

0x0001,

0xf2d7,	// (0x000722cd) call_type_pane_g

0x04e2,	// (0x000634d8) bg_popup_sub_pane_cp02

0x1171,	// (0x00064167) listscroll_popup_wml_pane

0x1179,	// (0x0006416f) list_wml_pane

0x1183,	// (0x00064179) scroll_pane_cp013

0x118e,	// (0x00064184) list_single_graphic_popup_wml_pane_ParamLimits

0x118e,	// (0x00064184) list_single_graphic_popup_wml_pane

0x0755,	// (0x0006374b) list_single_graphic_popup_wml_pane_g1

0x11a2,	// (0x00064198) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2dc,	// (0x000722d2) list_single_graphic_popup_wml_pane_g

0x11aa,	// (0x000641a0) list_single_graphic_popup_wml_pane_t1

0x11b8,	// (0x000641ae) aid_call_pane

0x0735,	// (0x0006372b) popup_clock_analogue_window_g1

0x0735,	// (0x0006372b) popup_clock_analogue_window_g2

0x93d6,	// (0x0006c3cc) popup_clock_analogue_window_g3

0x93d6,	// (0x0006c3cc) popup_clock_analogue_window_g4

0x0755,	// (0x0006374b) popup_clock_analogue_window_g5

0x0004,

0xf2e1,	// (0x000722d7) popup_clock_analogue_window_g

0x93de,	// (0x0006c3d4) popup_clock_analogue_window_t1

0x93ec,	// (0x0006c3e2) clock_digital_number_pane_ParamLimits

0x93ec,	// (0x0006c3e2) clock_digital_number_pane

0x93f8,	// (0x0006c3ee) clock_digital_number_pane_cp02_ParamLimits

0x93f8,	// (0x0006c3ee) clock_digital_number_pane_cp02

0x9404,	// (0x0006c3fa) clock_digital_number_pane_cp03_ParamLimits

0x9404,	// (0x0006c3fa) clock_digital_number_pane_cp03

0x9410,	// (0x0006c406) clock_digital_number_pane_cp04_ParamLimits

0x9410,	// (0x0006c406) clock_digital_number_pane_cp04

0x9420,	// (0x0006c416) clock_digital_separator_pane_ParamLimits

0x9420,	// (0x0006c416) clock_digital_separator_pane

0x942c,	// (0x0006c422) popup_clock_digital_window_t1

0x0755,	// (0x0006374b) clock_digital_number_pane_g1

0x0755,	// (0x0006374b) clock_digital_number_pane_g2

0x0001,

0xf261,	// (0x00072257) clock_digital_number_pane_g

0x0755,	// (0x0006374b) clock_digital_separator_pane_g1

0x0755,	// (0x0006374b) clock_digital_separator_pane_g2

0x0001,

0xf261,	// (0x00072257) clock_digital_separator_pane_g

0x04e2,	// (0x000634d8) bg_popup_window_pane_cp04

0x123b,	// (0x00064231) heading_pane_cp03

0x0a9f,	// (0x00063a95) listscroll_popup_gms_pane

0x04e2,	// (0x000634d8) grid_large_graphic_popup_pane

0x1244,	// (0x0006423a) listscroll_popup_gms_pane_g1

0x124d,	// (0x00064243) listscroll_popup_gms_pane_g2

0x0001,

0xf2ec,	// (0x000722e2) listscroll_popup_gms_pane_g

0x1256,	// (0x0006424c) scroll_pane_cp014

0x07b8,	// (0x000637ae) cell_large_graphic_popup_pane_ParamLimits

0x07b8,	// (0x000637ae) cell_large_graphic_popup_pane

0x07c6,	// (0x000637bc) cell_large_graphic_popup_pane_g1_ParamLimits

0x07c6,	// (0x000637bc) cell_large_graphic_popup_pane_g1

0x125f,	// (0x00064255) cell_large_graphic_popup_pane_g2_ParamLimits

0x125f,	// (0x00064255) cell_large_graphic_popup_pane_g2

0x126d,	// (0x00064263) cell_large_graphic_popup_pane_g3_ParamLimits

0x126d,	// (0x00064263) cell_large_graphic_popup_pane_g3

0x127b,	// (0x00064271) cell_large_graphic_popup_pane_g4_ParamLimits

0x127b,	// (0x00064271) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f1,	// (0x000722e7) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f1,	// (0x000722e7) cell_large_graphic_popup_pane_g

0x04e2,	// (0x000634d8) grid_highlight_pane_cp010

0x0755,	// (0x0006374b) bg_popup_call_pane_g1

0x128c,	// (0x00064282) list_single_graphic_popup_conf_pane_ParamLimits

0x128c,	// (0x00064282) list_single_graphic_popup_conf_pane

0x129f,	// (0x00064295) list_highlight_pane_cp01

0x12a8,	// (0x0006429e) list_single_graphic_popup_conf_pane_g1

0x12b0,	// (0x000642a6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2fa,	// (0x000722f0) list_single_graphic_popup_conf_pane_g

0x12b8,	// (0x000642ae) list_single_graphic_popup_conf_pane_t1

0x12c6,	// (0x000642bc) linegrid_cams_pane_g1

0x9449,	// (0x0006c43f) linegrid_cams_pane_g2

0x09de,	// (0x000639d4) linegrid_cams_pane_g3

0x12cf,	// (0x000642c5) linegrid_cams_pane_g4

0x9452,	// (0x0006c448) linegrid_cams_pane_g5

0x945b,	// (0x0006c451) linegrid_cams_pane_g6

0x0a8e,	// (0x00063a84) linegrid_cams_pane_g7

0x0006,

0xf2ff,	// (0x000722f5) linegrid_cams_pane_g

0x12d8,	// (0x000642ce) popup_clock_analogue_window

0x12d8,	// (0x000642ce) popup_clock_digital_window

0x04e2,	// (0x000634d8) popup_phob_thumbnail_window

0x0755,	// (0x0006374b) call_video_uplink_pane_g1

0x12e1,	// (0x000642d7) call_video_uplink_pane_g2

0x0001,

0xf30e,	// (0x00072304) call_video_uplink_pane_g

0x12e9,	// (0x000642df) video_uplink_pane

0x12f1,	// (0x000642e7) mce_image_pane_g1

0x9464,	// (0x0006c45a) mce_image_pane_g2

0x946e,	// (0x0006c464) mce_image_pane_g3

0x9476,	// (0x0006c46c) mce_image_pane_g4

0x947e,	// (0x0006c474) mce_image_pane_g5

0x0004,

0xf313,	// (0x00072309) mce_image_pane_g

0x12fb,	// (0x000642f1) control_top_pane_stacon_cp01_ParamLimits

0x12fb,	// (0x000642f1) control_top_pane_stacon_cp01

0x130f,	// (0x00064305) uni_indicator_pane_stacon_cp01_ParamLimits

0x130f,	// (0x00064305) uni_indicator_pane_stacon_cp01

0x1320,	// (0x00064316) bg_popup_sub_pane_cp03

0x132a,	// (0x00064320) chi_dic_find_pane

0x9486,	// (0x0006c47c) listscroll_chi_dic_pane

0x1332,	// (0x00064328) main_pane_chidic_g1

0x133a,	// (0x00064330) chi_dic_find_pane_t1

0x1348,	// (0x0006433e) find_chidic_pane

0x1351,	// (0x00064347) chi_dic_list_pane_ParamLimits

0x1351,	// (0x00064347) chi_dic_list_pane

0x1362,	// (0x00064358) scroll_pane_cp020

0x136a,	// (0x00064360) find_chidic_pane_t1

0x04e2,	// (0x000634d8) input_focus_pane_cp06

0x949a,	// (0x0006c490) list_chi_dic_pane_ParamLimits

0x949a,	// (0x0006c490) list_chi_dic_pane

0x94b4,	// (0x0006c4aa) list_chi_dic_pane_t1_ParamLimits

0x94b4,	// (0x0006c4aa) list_chi_dic_pane_t1

0x04e2,	// (0x000634d8) list_highlight_pane_cp020

0x1379,	// (0x0006436f) bg_cale_heading_pane_g1

0x94c7,	// (0x0006c4bd) bg_cale_heading_pane_g2

0x94cf,	// (0x0006c4c5) bg_cale_heading_pane_g3

0x94d7,	// (0x0006c4cd) bg_cale_heading_pane_g4

0x94e1,	// (0x0006c4d7) bg_cale_heading_pane_g5

0x94eb,	// (0x0006c4e1) bg_cale_heading_pane_g6

0x94f3,	// (0x0006c4e9) bg_cale_heading_pane_g7

0x94fb,	// (0x0006c4f1) bg_cale_heading_pane_g8

0x9505,	// (0x0006c4fb) bg_cale_heading_pane_g9

0x0008,

0xf31e,	// (0x00072314) bg_cale_heading_pane_g

0x1379,	// (0x0006436f) bg_cale_side_pane_g1

0x950f,	// (0x0006c505) bg_cale_side_pane_g2

0x9519,	// (0x0006c50f) bg_cale_side_pane_g3

0x9523,	// (0x0006c519) bg_cale_side_pane_g4

0x952d,	// (0x0006c523) bg_cale_side_pane_g5

0x9537,	// (0x0006c52d) bg_cale_side_pane_g6

0x9541,	// (0x0006c537) bg_cale_side_pane_g7

0x954b,	// (0x0006c541) bg_cale_side_pane_g8

0x9553,	// (0x0006c549) bg_cale_side_pane_g9

0x0008,

0xf331,	// (0x00072327) bg_cale_side_pane_g

0x955b,	// (0x0006c551) popup_call_status_window_ParamLimits

0x955b,	// (0x0006c551) popup_call_status_window

0x1381,	// (0x00064377) stacon_top_pane

0x1389,	// (0x0006437f) status_pane_ParamLimits

0x1389,	// (0x0006437f) status_pane

0x139e,	// (0x00064394) status_small_pane

0x13a6,	// (0x0006439c) control_pane

0x04e2,	// (0x000634d8) stacon_bottom_pane

0x13ae,	// (0x000643a4) list_single_mce_smart_pane_t1_ParamLimits

0x13ae,	// (0x000643a4) list_single_mce_smart_pane_t1

0x13c1,	// (0x000643b7) list_single_mce_smart_pane_t2_ParamLimits

0x13c1,	// (0x000643b7) list_single_mce_smart_pane_t2

0x0001,

0xf344,	// (0x0007233a) list_single_mce_smart_pane_t_ParamLimits

0xf344,	// (0x0007233a) list_single_mce_smart_pane_t

0x9567,	// (0x0006c55d) compass_pane

0x9573,	// (0x0006c569) main_location2_pane_t1

0x9587,	// (0x0006c57d) main_location2_pane_t2

0x959b,	// (0x0006c591) main_location2_pane_t3

0x0003,

0xf349,	// (0x0007233f) main_location2_pane_t

0x13e0,	// (0x000643d6) compass_pane_g1_ParamLimits

0x13e0,	// (0x000643d6) compass_pane_g1

0x95e5,	// (0x0006c5db) compass_pane_t1

0x95f4,	// (0x0006c5ea) compass_pane_t2

0x0005,

0xf352,	// (0x00072348) compass_pane_t

0x963f,	// (0x0006c635) text_secondary_cp61

0x145c,	// (0x00064452) navi_pane_cams_g5

0x14d8,	// (0x000644ce) navi_pane_im_t1

0x14e6,	// (0x000644dc) navi_pane_mp_g1_ParamLimits

0x14e6,	// (0x000644dc) navi_pane_mp_g1

0x14fa,	// (0x000644f0) navi_pane_mp_g2_ParamLimits

0x14fa,	// (0x000644f0) navi_pane_mp_g2

0x1506,	// (0x000644fc) navi_pane_mp_g3_ParamLimits

0x1506,	// (0x000644fc) navi_pane_mp_g3

0x0002,

0xf366,	// (0x0007235c) navi_pane_mp_g_ParamLimits

0xf366,	// (0x0007235c) navi_pane_mp_g

0x1512,	// (0x00064508) navi_pane_mp_t1

0x1520,	// (0x00064516) navi_pane_mp_t2

0x0002,

0xf36d,	// (0x00072363) navi_pane_mp_t

0x158b,	// (0x00064581) navi_pane_vt_g1

0x1512,	// (0x00064508) navi_pane_vt_t1

0x1593,	// (0x00064589) navi_slider_pane

0x0a9f,	// (0x00063a95) zooming_pane

0x15a3,	// (0x00064599) navi_slider_pane_g1

0x967a,	// (0x0006c670) navi_slider_pane_g2

0x0006,

0xf374,	// (0x0007236a) navi_slider_pane_g

0x15d9,	// (0x000645cf) aid_levels_zoom

0x15e1,	// (0x000645d7) zooming_pane_g1

0x15e9,	// (0x000645df) zooming_pane_g2

0x15e9,	// (0x000645df) zooming_pane_g3

0x0002,

0xf383,	// (0x00072379) zooming_pane_g

0x15f1,	// (0x000645e7) level_10_zoom

0x15fa,	// (0x000645f0) level_11_zoom

0x1603,	// (0x000645f9) level_1_zoom

0x160c,	// (0x00064602) level_2_zoom

0x1615,	// (0x0006460b) level_3_zoom

0x161e,	// (0x00064614) level_4_zoom

0x1627,	// (0x0006461d) level_5_zoom

0x1630,	// (0x00064626) level_6_zoom

0x1639,	// (0x0006462f) level_7_zoom

0x1642,	// (0x00064638) level_8_zoom

0x164b,	// (0x00064641) level_9_zoom

0x165c,	// (0x00064652) popup_phob_thumbnail_window_g1

0x1664,	// (0x0006465a) popup_phob_thumbnail_window_g2

0x0001,

0xf38a,	// (0x00072380) popup_phob_thumbnail_window_g

0x9f9e,	// (0x0006cf94) level_1_location

0x9fa6,	// (0x0006cf9c) level_2_location

0x9fae,	// (0x0006cfa4) level_3_location

0x9fb8,	// (0x0006cfae) level_4_location

0x0a9f,	// (0x00063a95) level_5_location

0x968c,	// (0x0006c682) mce_icon_pane_g1

0x9694,	// (0x0006c68a) mce_icon_pane_g2

0x0001,

0xf38f,	// (0x00072385) mce_icon_pane_g

0x969c,	// (0x0006c692) main_mup_pane_g1_ParamLimits

0x969c,	// (0x0006c692) main_mup_pane_g1

0x07e2,	// (0x000637d8) main_mup_pane_g2_ParamLimits

0x07e2,	// (0x000637d8) main_mup_pane_g2

0x07e2,	// (0x000637d8) main_mup_pane_g3_ParamLimits

0x07e2,	// (0x000637d8) main_mup_pane_g3

0x07e2,	// (0x000637d8) main_mup_pane_g4_ParamLimits

0x07e2,	// (0x000637d8) main_mup_pane_g4

0x07e2,	// (0x000637d8) main_mup_pane_g5_ParamLimits

0x07e2,	// (0x000637d8) main_mup_pane_g5

0x07e2,	// (0x000637d8) main_mup_pane_g6_ParamLimits

0x07e2,	// (0x000637d8) main_mup_pane_g6

0x07e2,	// (0x000637d8) main_mup_pane_g7_ParamLimits

0x07e2,	// (0x000637d8) main_mup_pane_g7

0x07e2,	// (0x000637d8) main_mup_pane_g8_ParamLimits

0x07e2,	// (0x000637d8) main_mup_pane_g8

0x07e2,	// (0x000637d8) main_mup_pane_g9_ParamLimits

0x07e2,	// (0x000637d8) main_mup_pane_g9

0x07e2,	// (0x000637d8) main_mup_pane_g10_ParamLimits

0x07e2,	// (0x000637d8) main_mup_pane_g10

0x07e2,	// (0x000637d8) main_mup_pane_g11_ParamLimits

0x07e2,	// (0x000637d8) main_mup_pane_g11

0x07d4,	// (0x000637ca) main_mup_pane_g12_ParamLimits

0x07d4,	// (0x000637ca) main_mup_pane_g12

0x07e2,	// (0x000637d8) main_mup_pane_g13_ParamLimits

0x07e2,	// (0x000637d8) main_mup_pane_g13

0x000c,

0xf394,	// (0x0007238a) main_mup_pane_g_ParamLimits

0xf394,	// (0x0007238a) main_mup_pane_g

0x07f0,	// (0x000637e6) main_mup_pane_t1_ParamLimits

0x07f0,	// (0x000637e6) main_mup_pane_t1

0x07f0,	// (0x000637e6) main_mup_pane_t2_ParamLimits

0x07f0,	// (0x000637e6) main_mup_pane_t2

0x07f0,	// (0x000637e6) main_mup_pane_t3_ParamLimits

0x07f0,	// (0x000637e6) main_mup_pane_t3

0x168e,	// (0x00064684) main_mup_pane_t4_ParamLimits

0x168e,	// (0x00064684) main_mup_pane_t4

0x168e,	// (0x00064684) main_mup_pane_t5_ParamLimits

0x168e,	// (0x00064684) main_mup_pane_t5

0x0ab1,	// (0x00063aa7) main_mup_pane_t6_ParamLimits

0x0ab1,	// (0x00063aa7) main_mup_pane_t6

0x0005,

0xf3af,	// (0x000723a5) main_mup_pane_t_ParamLimits

0xf3af,	// (0x000723a5) main_mup_pane_t

0x075f,	// (0x00063755) mup_progress_pane_ParamLimits

0x075f,	// (0x00063755) mup_progress_pane

0x4987,	// (0x0006797d) mup_visualizer_pane_ParamLimits

0x4987,	// (0x0006797d) mup_visualizer_pane

0x4987,	// (0x0006797d) mup_volume_pane_ParamLimits

0x4987,	// (0x0006797d) mup_volume_pane

0x07d4,	// (0x000637ca) mup_visualizer_pane_g1_ParamLimits

0x07d4,	// (0x000637ca) mup_visualizer_pane_g1

0x16b0,	// (0x000646a6) mup_visualizer_pane_g2_ParamLimits

0x16b0,	// (0x000646a6) mup_visualizer_pane_g2

0x07c6,	// (0x000637bc) mup_visualizer_pane_g3_ParamLimits

0x07c6,	// (0x000637bc) mup_visualizer_pane_g3

0x0002,

0xf3bc,	// (0x000723b2) mup_visualizer_pane_g_ParamLimits

0xf3bc,	// (0x000723b2) mup_visualizer_pane_g

0x0adf,	// (0x00063ad5) mup_volume_pane_g1

0x0adf,	// (0x00063ad5) mup_volume_pane_g2

0x0001,

0xf3c3,	// (0x000723b9) mup_volume_pane_g

0x0adf,	// (0x00063ad5) mup_progress_pane_g1

0x0adf,	// (0x00063ad5) mup_progress_pane_g2

0x0adf,	// (0x00063ad5) mup_progress_pane_g3

0x0002,

0xf3c8,	// (0x000723be) mup_progress_pane_g

0x04e2,	// (0x000634d8) bg_popup_window_pane_cp05

0x16be,	// (0x000646b4) heading_pane_cp02_ParamLimits

0x16be,	// (0x000646b4) heading_pane_cp02

0x16d8,	// (0x000646ce) list_popup_blid_pane

0x16e0,	// (0x000646d6) list_blid_sat_info_pane_ParamLimits

0x16e0,	// (0x000646d6) list_blid_sat_info_pane

0x16f3,	// (0x000646e9) list_blid_sat_info_pane_g1

0x16fb,	// (0x000646f1) list_blid_sat_info_pane_t1

0x9799,	// (0x0006c78f) mup_equalizer_pane_ParamLimits

0x9799,	// (0x0006c78f) mup_equalizer_pane

0x97ba,	// (0x0006c7b0) mup_equalizer_pane_cp1_ParamLimits

0x97ba,	// (0x0006c7b0) mup_equalizer_pane_cp1

0x97db,	// (0x0006c7d1) mup_equalizer_pane_cp2_ParamLimits

0x97db,	// (0x0006c7d1) mup_equalizer_pane_cp2

0x97fc,	// (0x0006c7f2) mup_equalizer_pane_cp3_ParamLimits

0x97fc,	// (0x0006c7f2) mup_equalizer_pane_cp3

0x981d,	// (0x0006c813) mup_equalizer_pane_cp4_ParamLimits

0x981d,	// (0x0006c813) mup_equalizer_pane_cp4

0x983e,	// (0x0006c834) mup_equalizer_pane_cp5

0x9854,	// (0x0006c84a) mup_equalizer_pane_cp6

0x986c,	// (0x0006c862) mup_equalizer_pane_cp7

0x2879,	// (0x0006586f) bg_popup_call_poc_act_pane_g9

0x2881,	// (0x00065877) bg_popup_call_poc_act_pane_g10

0x2889,	// (0x0006587f) bg_popup_call_poc_act_pane_g11

0x000a,

0x073d,	// (0x00063733) mup_scale_pane

0x0755,	// (0x0006374b) mup_scale_pane_g1

0x1709,	// (0x000646ff) mup_scale_pane_g2

0x0006,

0xf3e4,	// (0x000723da) mup_scale_pane_g

0x172d,	// (0x00064723) msg_data_pane

0x1735,	// (0x0006472b) scroll_pane_cp017

0x670c,	// (0x00069702) bg_list_pane_cp04_ParamLimits

0x670c,	// (0x00069702) bg_list_pane_cp04

0x173d,	// (0x00064733) msg_data_pane_g1

0x9896,	// (0x0006c88c) msg_data_pane_g2

0x98a0,	// (0x0006c896) msg_data_pane_g3

0x98a8,	// (0x0006c89e) msg_data_pane_g4

0x98b0,	// (0x0006c8a6) msg_data_pane_g5

0x98b8,	// (0x0006c8ae) msg_data_pane_g6

0x98c0,	// (0x0006c8b6) msg_data_pane_g7

0x0006,

0xf3f3,	// (0x000723e9) msg_data_pane_g

0x6732,	// (0x00069728) msg_text_pane_ParamLimits

0x6732,	// (0x00069728) msg_text_pane

0x98c8,	// (0x0006c8be) qrid_highlight_pane_cp011_ParamLimits

0x98c8,	// (0x0006c8be) qrid_highlight_pane_cp011

0x04e2,	// (0x000634d8) msg_body_pane

0x04e2,	// (0x000634d8) msg_header_pane

0x174e,	// (0x00064744) input_focus_pane_cp07

0x6781,	// (0x00069777) msg_header_pane_t1_ParamLimits

0x6781,	// (0x00069777) msg_header_pane_t1

0x6797,	// (0x0006978d) msg_header_pane_t2_ParamLimits

0x6797,	// (0x0006978d) msg_header_pane_t2

0x0001,

0xf407,	// (0x000723fd) msg_header_pane_t_ParamLimits

0xf407,	// (0x000723fd) msg_header_pane_t

0x1763,	// (0x00064759) msg_body_pane_g1

0x67ae,	// (0x000697a4) msg_body_pane_t1_ParamLimits

0x67ae,	// (0x000697a4) msg_body_pane_t1

0x67df,	// (0x000697d5) msg_body_pane_t2_ParamLimits

0x67df,	// (0x000697d5) msg_body_pane_t2

0x67f1,	// (0x000697e7) msg_body_pane_t3_ParamLimits

0x67f1,	// (0x000697e7) msg_body_pane_t3

0x0002,

0xf40c,	// (0x00072402) msg_body_pane_t_ParamLimits

0xf40c,	// (0x00072402) msg_body_pane_t

0x9934,	// (0x0006c92a) main_viewer_pane_g1_ParamLimits

0x9934,	// (0x0006c92a) main_viewer_pane_g1

0x9940,	// (0x0006c936) main_viewer_pane_g2_ParamLimits

0x9940,	// (0x0006c936) main_viewer_pane_g2

0x994c,	// (0x0006c942) main_viewer_pane_g3_ParamLimits

0x994c,	// (0x0006c942) main_viewer_pane_g3

0x995d,	// (0x0006c953) main_viewer_pane_g4_ParamLimits

0x995d,	// (0x0006c953) main_viewer_pane_g4

0x996e,	// (0x0006c964) main_viewer_pane_g5_ParamLimits

0x996e,	// (0x0006c964) main_viewer_pane_g5

0x996e,	// (0x0006c964) main_viewer_pane_g7_ParamLimits

0x996e,	// (0x0006c964) main_viewer_pane_g7

0x9980,	// (0x0006c976) main_viewer_pane_g8_ParamLimits

0x9980,	// (0x0006c976) main_viewer_pane_g8

0x0007,

0xf41c,	// (0x00072412) main_viewer_pane_g_ParamLimits

0xf41c,	// (0x00072412) main_viewer_pane_g

0x17a1,	// (0x00064797) viewer_content_pane_ParamLimits

0x17a1,	// (0x00064797) viewer_content_pane

0x99b8,	// (0x0006c9ae) main_postcard_pane_g1_ParamLimits

0x99b8,	// (0x0006c9ae) main_postcard_pane_g1

0x99c6,	// (0x0006c9bc) main_postcard_pane_g2_ParamLimits

0x99c6,	// (0x0006c9bc) main_postcard_pane_g2

0x99d4,	// (0x0006c9ca) main_postcard_pane_g3_ParamLimits

0x99d4,	// (0x0006c9ca) main_postcard_pane_g3

0x0005,

0xf42d,	// (0x00072423) main_postcard_pane_g_ParamLimits

0xf42d,	// (0x00072423) main_postcard_pane_g

0x99e4,	// (0x0006c9da) main_postcard_pane_g4

0x48e0,	// (0x000678d6) smil_status_volume_pane_g2

0x9a10,	// (0x0006ca06) postcard_pane_ParamLimits

0x9a10,	// (0x0006ca06) postcard_pane

0x201e,	// (0x00065014) postcard_pane_g1_ParamLimits

0x201e,	// (0x00065014) postcard_pane_g1

0x9a42,	// (0x0006ca38) postcard_pane_g2_ParamLimits

0x9a42,	// (0x0006ca38) postcard_pane_g2

0x9a4e,	// (0x0006ca44) postcard_pane_g3_ParamLimits

0x9a4e,	// (0x0006ca44) postcard_pane_g3

0x17bd,	// (0x000647b3) postcard_pane_g4_ParamLimits

0x17bd,	// (0x000647b3) postcard_pane_g4

0x9a5a,	// (0x0006ca50) postcard_pane_g5_ParamLimits

0x9a5a,	// (0x0006ca50) postcard_pane_g5

0x9a66,	// (0x0006ca5c) postcard_pane_g6_ParamLimits

0x9a66,	// (0x0006ca5c) postcard_pane_g6

0x17af,	// (0x000647a5) postcard_pane_g7_ParamLimits

0x17af,	// (0x000647a5) postcard_pane_g7

0x0006,

0xf43a,	// (0x00072430) postcard_pane_g_ParamLimits

0xf43a,	// (0x00072430) postcard_pane_g

0x9a72,	// (0x0006ca68) main_mp2_pane_g1_ParamLimits

0x9a72,	// (0x0006ca68) main_mp2_pane_g1

0x9a7e,	// (0x0006ca74) main_mp2_pane_g2_ParamLimits

0x9a7e,	// (0x0006ca74) main_mp2_pane_g2

0x9a8a,	// (0x0006ca80) main_mp2_pane_g3_ParamLimits

0x9a8a,	// (0x0006ca80) main_mp2_pane_g3

0x0002,

0xf449,	// (0x0007243f) main_mp2_pane_g_ParamLimits

0xf449,	// (0x0007243f) main_mp2_pane_g

0x9a96,	// (0x0006ca8c) main_mp2_pane_t1_ParamLimits

0x9a96,	// (0x0006ca8c) main_mp2_pane_t1

0x9aad,	// (0x0006caa3) main_mp2_pane_t2_ParamLimits

0x9aad,	// (0x0006caa3) main_mp2_pane_t2

0x9ac1,	// (0x0006cab7) main_mp2_pane_t3_ParamLimits

0x9ac1,	// (0x0006cab7) main_mp2_pane_t3

0x0002,

0xf450,	// (0x00072446) main_mp2_pane_t_ParamLimits

0xf450,	// (0x00072446) main_mp2_pane_t

0x17cb,	// (0x000647c1) pec_content_pane_ParamLimits

0x17cb,	// (0x000647c1) pec_content_pane

0x0c40,	// (0x00063c36) scroll_pane_cp015

0x17dd,	// (0x000647d3) pec_attribute_pane_ParamLimits

0x17dd,	// (0x000647d3) pec_attribute_pane

0x9ad3,	// (0x0006cac9) pec_content_pane_g1_ParamLimits

0x9ad3,	// (0x0006cac9) pec_content_pane_g1

0x17ed,	// (0x000647e3) pec_content_pane_t1_ParamLimits

0x17ed,	// (0x000647e3) pec_content_pane_t1

0x17ff,	// (0x000647f5) pec_content_pane_t2_ParamLimits

0x17ff,	// (0x000647f5) pec_content_pane_t2

0x0001,

0xf457,	// (0x0007244d) pec_content_pane_t_ParamLimits

0xf457,	// (0x0007244d) pec_content_pane_t

0x9adf,	// (0x0006cad5) list_single_graphic_pane_cp01_ParamLimits

0x9adf,	// (0x0006cad5) list_single_graphic_pane_cp01

0x073d,	// (0x00063733) bg_popup_sub_pane_cp04

0x1811,	// (0x00064807) popup_mup_playback_window_g1

0x181d,	// (0x00064813) popup_mup_playback_window_t1

0x1832,	// (0x00064828) popup_mup_playback_window_t2

0x0001,

0xf45c,	// (0x00072452) popup_mup_playback_window_t

0x1869,	// (0x0006485f) main_image_pane_g1_ParamLimits

0x1869,	// (0x0006485f) main_image_pane_g1

0x18ac,	// (0x000648a2) scroll_pane_cp018_ParamLimits

0x18ac,	// (0x000648a2) scroll_pane_cp018

0x18c4,	// (0x000648ba) scroll_pane_cp016_ParamLimits

0x18c4,	// (0x000648ba) scroll_pane_cp016

0x9b78,	// (0x0006cb6e) smil2_image_pane_ParamLimits

0x9b78,	// (0x0006cb6e) smil2_image_pane

0x9ba8,	// (0x0006cb9e) smil2_root_pane_ParamLimits

0x9ba8,	// (0x0006cb9e) smil2_root_pane

0x9bd4,	// (0x0006cbca) smil2_text_pane_ParamLimits

0x9bd4,	// (0x0006cbca) smil2_text_pane

0x04e2,	// (0x000634d8) bg_list_pane_cp06

0x1900,	// (0x000648f6) grid_radio_pane

0x04e2,	// (0x000634d8) bg_popup_window_pane_cp06

0x1908,	// (0x000648fe) main_fmradio_pane_t1

0x2891,	// (0x00065887) heading_pane_cp04

0x1916,	// (0x0006490c) main_fmradio_pane_t2

0x2899,	// (0x0006588f) popup_cale_lunar_info_window_g1

0x1924,	// (0x0006491a) main_fmradio_pane_t3

0x28a1,	// (0x00065897) popup_cale_lunar_info_window_g2

0x1932,	// (0x00064928) main_fmradio_pane_t4

0x0001,

0x1940,	// (0x00064936) main_fmradio_pane_t5

0x0004,

0xf53c,	// (0x00072532) popup_cale_lunar_info_window_g

0xf471,	// (0x00072467) main_fmradio_pane_t

0x194e,	// (0x00064944) wait_bar_pane_cp03

0x1956,	// (0x0006494c) cell_fmradio_pane_ParamLimits

0x1956,	// (0x0006494c) cell_fmradio_pane

0x17af,	// (0x000647a5) cell_fmradio_pane_g1_ParamLimits

0x17af,	// (0x000647a5) cell_fmradio_pane_g1

0x04e2,	// (0x000634d8) grid_highlight_pane_cp011

0x1969,	// (0x0006495f) poc_content_pane_ParamLimits

0x1969,	// (0x0006495f) poc_content_pane

0x197b,	// (0x00064971) scroll_pane_cp019

0x9c14,	// (0x0006cc0a) popup_call_poc_act_window_ParamLimits

0x9c14,	// (0x0006cc0a) popup_call_poc_act_window

0x9c21,	// (0x0006cc17) popup_call_poc_inact_window_ParamLimits

0x9c21,	// (0x0006cc17) popup_call_poc_inact_window

0xf513,	// (0x00072509) bg_popup_call_poc_act_pane_g

0x2809,	// (0x000657ff) bg_popup_call_poc_inact_pane_g1

0x2811,	// (0x00065807) bg_popup_call_poc_inact_pane_g2

0x1983,	// (0x00064979) popup_call_poc_act_window_g2

0x2819,	// (0x0006580f) bg_popup_call_poc_inact_pane_g3

0x2821,	// (0x00065817) bg_popup_call_poc_inact_pane_g4

0x2829,	// (0x0006581f) bg_popup_call_poc_inact_pane_g5

0x198b,	// (0x00064981) popup_call_poc_act_window_t1_ParamLimits

0x198b,	// (0x00064981) popup_call_poc_act_window_t1

0x19b3,	// (0x000649a9) popup_call_poc_act_window_t2_ParamLimits

0x19b3,	// (0x000649a9) popup_call_poc_act_window_t2

0x19db,	// (0x000649d1) popup_call_poc_act_window_t3_ParamLimits

0x19db,	// (0x000649d1) popup_call_poc_act_window_t3

0x1a03,	// (0x000649f9) popup_call_poc_act_window_t4_ParamLimits

0x1a03,	// (0x000649f9) popup_call_poc_act_window_t4

0x0003,

0xf47c,	// (0x00072472) popup_call_poc_act_window_t_ParamLimits

0xf47c,	// (0x00072472) popup_call_poc_act_window_t

0x2831,	// (0x00065827) bg_popup_call_poc_inact_pane_g6

0x2839,	// (0x0006582f) bg_popup_call_poc_inact_pane_g7

0x2841,	// (0x00065837) bg_popup_call_poc_inact_pane_g8

0x1a15,	// (0x00064a0b) popup_call_poc_inact_window_g2

0x2849,	// (0x0006583f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf500,	// (0x000724f6) bg_popup_call_poc_inact_pane_g

0x1a1d,	// (0x00064a13) popup_call_poc_inact_window_t1_ParamLimits

0x1a1d,	// (0x00064a13) popup_call_poc_inact_window_t1

0x1a32,	// (0x00064a28) popup_call_poc_inact_window_t2_ParamLimits

0x1a32,	// (0x00064a28) popup_call_poc_inact_window_t2

0x1a47,	// (0x00064a3d) popup_call_poc_inact_window_t3_ParamLimits

0x1a47,	// (0x00064a3d) popup_call_poc_inact_window_t3

0x0002,

0xf485,	// (0x0007247b) popup_call_poc_inact_window_t_ParamLimits

0xf485,	// (0x0007247b) popup_call_poc_inact_window_t

0x486b,	// (0x00067861) context_pane_ParamLimits

0xa29c,	// (0x0006d292) signal_pane_ParamLimits

0x0a9f,	// (0x00063a95) main_call2_pane

0xa20f,	// (0x0006d205) popup_phob_thumbnail2_window_ParamLimits

0xa20f,	// (0x0006d205) popup_phob_thumbnail2_window

0x98e2,	// (0x0006c8d8) aid_hotspot_pointer_arrow_pane

0x98ea,	// (0x0006c8e0) aid_hotspot_pointer_hand_pane

0x9f66,	// (0x0006cf5c) phob_pre_status_pane_g5

0x07b8,	// (0x000637ae) cams_zoom_pane_ParamLimits

0x07b8,	// (0x000637ae) image_vga_pane_ParamLimits

0x07d4,	// (0x000637ca) main_camera_pane_g1_ParamLimits

0x07d4,	// (0x000637ca) main_camera_pane_g2_ParamLimits

0x07d4,	// (0x000637ca) main_camera_pane_g3_ParamLimits

0x07d4,	// (0x000637ca) main_camera_pane_g4_ParamLimits

0x07d4,	// (0x000637ca) main_camera_pane_g5_ParamLimits

0x07d4,	// (0x000637ca) main_camera_pane_g6_ParamLimits

0x07d4,	// (0x000637ca) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x000721a1) main_camera_pane_g_ParamLimits

0x168e,	// (0x00064684) main_camera_pane_t1_ParamLimits

0x168e,	// (0x00064684) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x000721b2) main_camera_pane_t_ParamLimits

0x073d,	// (0x00063733) bg_popup_preview_window_pane_cp01_ParamLimits

0x073d,	// (0x00063733) bg_popup_preview_window_pane_cp01

0x1a5c,	// (0x00064a52) popup_phob_thumbnail2_window_g1_ParamLimits

0x1a5c,	// (0x00064a52) popup_phob_thumbnail2_window_g1

0x04e2,	// (0x000634d8) call2_cli_visual_pane

0x9c3d,	// (0x0006cc33) popup_call2_audio_conf_window_ParamLimits

0x9c3d,	// (0x0006cc33) popup_call2_audio_conf_window

0x9c52,	// (0x0006cc48) popup_call2_audio_first_window_ParamLimits

0x9c52,	// (0x0006cc48) popup_call2_audio_first_window

0x9cf0,	// (0x0006cce6) popup_call2_audio_in_window_ParamLimits

0x9cf0,	// (0x0006cce6) popup_call2_audio_in_window

0x9d32,	// (0x0006cd28) popup_call2_audio_out_window_ParamLimits

0x9d32,	// (0x0006cd28) popup_call2_audio_out_window

0x9d94,	// (0x0006cd8a) popup_call2_audio_second_window_ParamLimits

0x9d94,	// (0x0006cd8a) popup_call2_audio_second_window

0x9df2,	// (0x0006cde8) popup_call2_audio_wait_window_ParamLimits

0x9df2,	// (0x0006cde8) popup_call2_audio_wait_window

0x04e2,	// (0x000634d8) bg_popup_call2_act_pane_cp03

0x071f,	// (0x00063715) list_conf_pane_cp

0x1a68,	// (0x00064a5e) popup_call2_audio_conf_window_t1

0x128c,	// (0x00064282) list_single_graphic_popup_conf2_pane_ParamLimits

0x128c,	// (0x00064282) list_single_graphic_popup_conf2_pane

0x129f,	// (0x00064295) list_highlight_pane_cp04

0x1a76,	// (0x00064a6c) list_single_graphic_popup_conf2_pane_g1

0x12b0,	// (0x000642a6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf48c,	// (0x00072482) list_single_graphic_popup_conf2_pane_g

0x1a80,	// (0x00064a76) list_single_graphic_popup_conf2_pane_t1

0x1a8e,	// (0x00064a84) bg_popup_call2_act_pane_cp01_ParamLimits

0x1a8e,	// (0x00064a84) bg_popup_call2_act_pane_cp01

0x1b18,	// (0x00064b0e) call_type_pane_cp05_ParamLimits

0x1b18,	// (0x00064b0e) call_type_pane_cp05

0x1b6c,	// (0x00064b62) popup_call2_audio_second_window_g1_ParamLimits

0x1b6c,	// (0x00064b62) popup_call2_audio_second_window_g1

0x1bc0,	// (0x00064bb6) popup_call2_audio_second_window_g2_ParamLimits

0x1bc0,	// (0x00064bb6) popup_call2_audio_second_window_g2

0x0002,

0xf491,	// (0x00072487) popup_call2_audio_second_window_g_ParamLimits

0xf491,	// (0x00072487) popup_call2_audio_second_window_g

0x1c25,	// (0x00064c1b) popup_call2_audio_second_window_t1_ParamLimits

0x1c25,	// (0x00064c1b) popup_call2_audio_second_window_t1

0x1ce0,	// (0x00064cd6) popup_call2_audio_second_window_t2_ParamLimits

0x1ce0,	// (0x00064cd6) popup_call2_audio_second_window_t2

0x1d33,	// (0x00064d29) popup_call2_audio_second_window_t3_ParamLimits

0x1d33,	// (0x00064d29) popup_call2_audio_second_window_t3

0x0003,

0xf498,	// (0x0007248e) popup_call2_audio_second_window_t_ParamLimits

0xf498,	// (0x0007248e) popup_call2_audio_second_window_t

0x04e2,	// (0x000634d8) bg_popup_call2_in_pane_cp02

0x04ec,	// (0x000634e2) call_type_pane_cp04

0x9e31,	// (0x0006ce27) popup_call2_audio_wait_window_g1

0x9e39,	// (0x0006ce2f) popup_call2_audio_wait_window_g2

0x0001,

0xf4a1,	// (0x00072497) popup_call2_audio_wait_window_g

0x0504,	// (0x000634fa) popup_call2_audio_wait_window_t3

0x1e26,	// (0x00064e1c) bg_popup_call2_act_pane_ParamLimits

0x1e26,	// (0x00064e1c) bg_popup_call2_act_pane

0x1ee6,	// (0x00064edc) call_type_pane_cp03_ParamLimits

0x1ee6,	// (0x00064edc) call_type_pane_cp03

0x1f4a,	// (0x00064f40) popup_call2_audio_first_window_g1_ParamLimits

0x1f4a,	// (0x00064f40) popup_call2_audio_first_window_g1

0x1fba,	// (0x00064fb0) popup_call2_audio_first_window_g2_ParamLimits

0x1fba,	// (0x00064fb0) popup_call2_audio_first_window_g2

0x201e,	// (0x00065014) popup_call2_audio_first_window_g3_ParamLimits

0x201e,	// (0x00065014) popup_call2_audio_first_window_g3

0x0004,

0xf4a6,	// (0x0007249c) popup_call2_audio_first_window_g_ParamLimits

0xf4a6,	// (0x0007249c) popup_call2_audio_first_window_g

0x20a6,	// (0x0006509c) popup_call2_audio_first_window_t1_ParamLimits

0x20a6,	// (0x0006509c) popup_call2_audio_first_window_t1

0x21a9,	// (0x0006519f) popup_call2_audio_first_window_t4_ParamLimits

0x21a9,	// (0x0006519f) popup_call2_audio_first_window_t4

0x228c,	// (0x00065282) popup_call2_audio_first_window_t5_ParamLimits

0x228c,	// (0x00065282) popup_call2_audio_first_window_t5

0x0003,

0xf4b1,	// (0x000724a7) popup_call2_audio_first_window_t_ParamLimits

0xf4b1,	// (0x000724a7) popup_call2_audio_first_window_t

0x0735,	// (0x0006372b) bg_popup_call2_act_pane_g1

0x28a9,	// (0x0006589f) popup_cale_lunar_info_window_t1

0x28b7,	// (0x000658ad) popup_cale_lunar_info_window_t2

0x28c5,	// (0x000658bb) popup_cale_lunar_info_window_t3

0x04e2,	// (0x000634d8) bg_popup_call2_bubble_pane

0x238d,	// (0x00065383) bg_popup_call2_in_pane_cp01_ParamLimits

0x238d,	// (0x00065383) bg_popup_call2_in_pane_cp01

0x01be,	// (0x000631b4) call_type_pane_cp02

0x9e41,	// (0x0006ce37) popup_call2_audio_out_window_g1_ParamLimits

0x9e41,	// (0x0006ce37) popup_call2_audio_out_window_g1

0x23d5,	// (0x000653cb) popup_call2_audio_out_window_g2_ParamLimits

0x23d5,	// (0x000653cb) popup_call2_audio_out_window_g2

0x9e6d,	// (0x0006ce63) popup_call2_audio_out_window_g3_ParamLimits

0x9e6d,	// (0x0006ce63) popup_call2_audio_out_window_g3

0x0003,

0xf4ba,	// (0x000724b0) popup_call2_audio_out_window_g_ParamLimits

0xf4ba,	// (0x000724b0) popup_call2_audio_out_window_g

0x240c,	// (0x00065402) popup_call2_audio_out_window_t1_ParamLimits

0x240c,	// (0x00065402) popup_call2_audio_out_window_t1

0x246b,	// (0x00065461) popup_call2_audio_out_window_t2_ParamLimits

0x246b,	// (0x00065461) popup_call2_audio_out_window_t2

0x24bf,	// (0x000654b5) popup_call2_audio_out_window_t3_ParamLimits

0x24bf,	// (0x000654b5) popup_call2_audio_out_window_t3

0x24d5,	// (0x000654cb) popup_call2_audio_out_window_t4_ParamLimits

0x24d5,	// (0x000654cb) popup_call2_audio_out_window_t4

0x24eb,	// (0x000654e1) popup_call2_audio_out_window_t5_ParamLimits

0x24eb,	// (0x000654e1) popup_call2_audio_out_window_t5

0x0005,

0xf4c3,	// (0x000724b9) popup_call2_audio_out_window_t_ParamLimits

0xf4c3,	// (0x000724b9) popup_call2_audio_out_window_t

0x254f,	// (0x00065545) bg_popup_call2_in_pane_ParamLimits

0x254f,	// (0x00065545) bg_popup_call2_in_pane

0x25ab,	// (0x000655a1) popup_call2_audio_in_window_g1_ParamLimits

0x25ab,	// (0x000655a1) popup_call2_audio_in_window_g1

0x25e3,	// (0x000655d9) popup_call2_audio_in_window_g2_ParamLimits

0x25e3,	// (0x000655d9) popup_call2_audio_in_window_g2

0x261b,	// (0x00065611) popup_call2_audio_in_window_g3_ParamLimits

0x261b,	// (0x00065611) popup_call2_audio_in_window_g3

0x0003,

0xf4d0,	// (0x000724c6) popup_call2_audio_in_window_g_ParamLimits

0xf4d0,	// (0x000724c6) popup_call2_audio_in_window_g

0x2673,	// (0x00065669) popup_call2_audio_in_window_t1_ParamLimits

0x2673,	// (0x00065669) popup_call2_audio_in_window_t1

0x26f3,	// (0x000656e9) popup_call2_audio_in_window_t2_ParamLimits

0x26f3,	// (0x000656e9) popup_call2_audio_in_window_t2

0x2773,	// (0x00065769) popup_call2_audio_in_window_t3_ParamLimits

0x2773,	// (0x00065769) popup_call2_audio_in_window_t3

0x278d,	// (0x00065783) popup_call2_audio_in_window_t4_ParamLimits

0x278d,	// (0x00065783) popup_call2_audio_in_window_t4

0x279f,	// (0x00065795) popup_call2_audio_in_window_t5_ParamLimits

0x279f,	// (0x00065795) popup_call2_audio_in_window_t5

0x27b4,	// (0x000657aa) popup_call2_audio_in_window_t6_ParamLimits

0x27b4,	// (0x000657aa) popup_call2_audio_in_window_t6

0x0005,

0xf4d9,	// (0x000724cf) popup_call2_audio_in_window_t_ParamLimits

0xf4d9,	// (0x000724cf) popup_call2_audio_in_window_t

0x0735,	// (0x0006372b) bg_popup_call2_in_pane_g1

0x28d3,	// (0x000658c9) popup_cale_lunar_info_window_t4

0x0003,

0xf541,	// (0x00072537) popup_cale_lunar_info_window_t

0x073d,	// (0x00063733) bg_popup_call2_rect_pane_ParamLimits

0x073d,	// (0x00063733) bg_popup_call2_rect_pane

0x04e2,	// (0x000634d8) call2_cli_visual_graphic_pane

0x04e2,	// (0x000634d8) call2_cli_visual_text_pane

0xa2d8,	// (0x0006d2ce) smil_status_volume_pane_g3

0x0002,

0x0755,	// (0x0006374b) call2_cli_visual_graphic_pane_g1

0x0755,	// (0x0006374b) call2_cli_visual_graphic_pane_g2

0x0755,	// (0x0006374b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e6,	// (0x000724dc) call2_cli_visual_graphic_pane_g

0x27c9,	// (0x000657bf) bg_popup_call2_rect_pane_g1

0x095e,	// (0x00063954) bg_popup_call2_rect_pane_g2

0x27d1,	// (0x000657c7) bg_popup_call2_rect_pane_g3

0x27d9,	// (0x000657cf) bg_popup_call2_rect_pane_g4

0x27e1,	// (0x000657d7) bg_popup_call2_rect_pane_g5

0x27e9,	// (0x000657df) bg_popup_call2_rect_pane_g6

0x27f1,	// (0x000657e7) bg_popup_call2_rect_pane_g7

0x27f9,	// (0x000657ef) bg_popup_call2_rect_pane_g8

0x2801,	// (0x000657f7) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ed,	// (0x000724e3) bg_popup_call2_rect_pane_g

0x2809,	// (0x000657ff) bg_popup_call2_bubble_pane_g1

0x2811,	// (0x00065807) bg_popup_call2_bubble_pane_g2

0x2819,	// (0x0006580f) bg_popup_call2_bubble_pane_g3

0x2821,	// (0x00065817) bg_popup_call2_bubble_pane_g4

0x2829,	// (0x0006581f) bg_popup_call2_bubble_pane_g5

0x2831,	// (0x00065827) bg_popup_call2_bubble_pane_g6

0x2839,	// (0x0006582f) bg_popup_call2_bubble_pane_g7

0x2841,	// (0x00065837) bg_popup_call2_bubble_pane_g8

0x2849,	// (0x0006583f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf500,	// (0x000724f6) bg_popup_call2_bubble_pane_g

0x7b06,	// (0x0006aafc) aid_cale_week_size_cell_pane

0x073d,	// (0x00063733) aid_cams_cif_uncrop_pane_ParamLimits

0x073d,	// (0x00063733) aid_cams_cif_uncrop_pane

0x80fa,	// (0x0006b0f0) aid_cams_size_cell_ParamLimits

0x80fa,	// (0x0006b0f0) aid_cams_size_cell

0x8106,	// (0x0006b0fc) grid_cams_pane_ParamLimits

0x8114,	// (0x0006b10a) linegrid_cams_pane_ParamLimits

0x81eb,	// (0x0006b1e1) call_video_pane_t1

0x820c,	// (0x0006b202) call_video_pane_t2

0x0001,

0xf208,	// (0x000721fe) call_video_pane_t

0x8711,	// (0x0006b707) aid_cale_month_size_cell_pane_ParamLimits

0x8711,	// (0x0006b707) aid_cale_month_size_cell_pane

0xf585,	// (0x0007257b) smil_status_volume_pane_g

0xa2e5,	// (0x0006d2db) volume_smil_pane_ParamLimits

0x73ab,	// (0x0006a3a1) aid_popup2_width_pane

0x7a05,	// (0x0006a9fb) cell_qdial_pane_g4_ParamLimits

0x7a05,	// (0x0006a9fb) cell_qdial_pane_g4

0x95c1,	// (0x0006c5b7) aid_blid_cardinal_pane_ParamLimits

0x95d1,	// (0x0006c5c7) aid_blid_destination_pane_ParamLimits

0x95d1,	// (0x0006c5c7) aid_blid_destination_pane

0x073d,	// (0x00063733) bg_popup_call_poc_act_pane_ParamLimits

0x073d,	// (0x00063733) bg_popup_call_poc_act_pane

0x073d,	// (0x00063733) bg_popup_call_poc_inact_pane_ParamLimits

0x073d,	// (0x00063733) bg_popup_call_poc_inact_pane

0x2851,	// (0x00065847) bg_popup_call_poc_act_pane_g1

0x2859,	// (0x0006584f) bg_popup_call_poc_act_pane_g2

0x2861,	// (0x00065857) bg_popup_call_poc_act_pane_g3

0x2821,	// (0x00065817) bg_popup_call_poc_act_pane_g4

0x2829,	// (0x0006581f) bg_popup_call_poc_act_pane_g5

0x2869,	// (0x0006585f) bg_popup_call_poc_act_pane_g6

0x2839,	// (0x0006582f) bg_popup_call_poc_act_pane_g7

0x2871,	// (0x00065867) bg_popup_call_poc_act_pane_g8

0x04e2,	// (0x000634d8) main_usb_pane

0xa13e,	// (0x0006d134) popup_cale_lunar_info_window

0x8535,	// (0x0006b52b) im_reading_pane_t1_ParamLimits

0x0b98,	// (0x00063b8e) list_im_pane_ParamLimits

0x0ba9,	// (0x00063b9f) scroll_pane_cp07_ParamLimits

0x04e2,	// (0x000634d8) grid_highlight_pane_cp012

0x073d,	// (0x00063733) mup_scale_pane_ParamLimits

0x201e,	// (0x00065014) main_usb_pane_g1_ParamLimits

0x201e,	// (0x00065014) main_usb_pane_g1

0x9ece,	// (0x0006cec4) main_usb_pane_g2_ParamLimits

0x9ece,	// (0x0006cec4) main_usb_pane_g2

0x0001,

0xf52a,	// (0x00072520) main_usb_pane_g_ParamLimits

0xf52a,	// (0x00072520) main_usb_pane_g

0x9eda,	// (0x0006ced0) main_usb_pane_t1_ParamLimits

0x9eda,	// (0x0006ced0) main_usb_pane_t1

0x9eec,	// (0x0006cee2) main_usb_pane_t2_ParamLimits

0x9eec,	// (0x0006cee2) main_usb_pane_t2

0x9efe,	// (0x0006cef4) main_usb_pane_t3_ParamLimits

0x9efe,	// (0x0006cef4) main_usb_pane_t3

0x9f10,	// (0x0006cf06) main_usb_pane_t4_ParamLimits

0x9f10,	// (0x0006cf06) main_usb_pane_t4

0x9f22,	// (0x0006cf18) main_usb_pane_t5_ParamLimits

0x9f22,	// (0x0006cf18) main_usb_pane_t5

0x9f34,	// (0x0006cf2a) main_usb_pane_t6_ParamLimits

0x9f34,	// (0x0006cf2a) main_usb_pane_t6

0x0005,

0xf52f,	// (0x00072525) main_usb_pane_t_ParamLimits

0x9567,	// (0x0006c55d) aid_text_placing

0x9573,	// (0x0006c569) main_location2_pane_t1_ParamLimits

0x9587,	// (0x0006c57d) main_location2_pane_t2_ParamLimits

0x959b,	// (0x0006c591) main_location2_pane_t3_ParamLimits

0x95af,	// (0x0006c5a5) main_location2_pane_t4_ParamLimits

0x95af,	// (0x0006c5a5) main_location2_pane_t4

0xf349,	// (0x0007233f) main_location2_pane_t_ParamLimits

0x0779,	// (0x0006376f) find_pinb_pane_g2_ParamLimits

0x0779,	// (0x0006376f) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x000720b6) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x000720b6) find_pinb_pane_g

0x0785,	// (0x0006377b) find_pinb_pane_t1_ParamLimits

0x0797,	// (0x0006378d) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x000720bb) find_pinb_pane_t_ParamLimits

0x04e2,	// (0x000634d8) main_call3_pane

0x8cb4,	// (0x0006bcaa) cale_month_day_heading_pane_t1_ParamLimits

0x8d3a,	// (0x0006bd30) cale_month_day_heading_pane_t2_ParamLimits

0x8db3,	// (0x0006bda9) cale_month_day_heading_pane_t3_ParamLimits

0x8e2c,	// (0x0006be22) cale_month_day_heading_pane_t4_ParamLimits

0x8ea5,	// (0x0006be9b) cale_month_day_heading_pane_t5_ParamLimits

0x8f1e,	// (0x0006bf14) cale_month_day_heading_pane_t6_ParamLimits

0x8f97,	// (0x0006bf8d) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x00072236) cale_month_day_heading_pane_t_ParamLimits

0x0dec,	// (0x00063de2) smil_status_volume_pane

0x9a2a,	// (0x0006ca20) postcard_address_pane_ParamLimits

0x9a2a,	// (0x0006ca20) postcard_address_pane

0x9a36,	// (0x0006ca2c) postcard_message_pane_ParamLimits

0x9a36,	// (0x0006ca2c) postcard_message_pane

0x9e99,	// (0x0006ce8f) call2_cli_visual_pane_t1_ParamLimits

0x9e99,	// (0x0006ce8f) call2_cli_visual_pane_t1

0x491e,	// (0x00067914) postcard_message_pane_t1_ParamLimits

0x491e,	// (0x00067914) postcard_message_pane_t1

0x4906,	// (0x000678fc) postcard_address_pane_t1_ParamLimits

0x4906,	// (0x000678fc) postcard_address_pane_t1

0xa416,	// (0x0006d40c) popup_call3_audio_in_window_ParamLimits

0xa416,	// (0x0006d40c) popup_call3_audio_in_window

0xa2fa,	// (0x0006d2f0) bg_popup_call3_in_pane_ParamLimits

0xa2fa,	// (0x0006d2f0) bg_popup_call3_in_pane

0xa35c,	// (0x0006d352) popup_call3_audio_in_window_g1_ParamLimits

0xa35c,	// (0x0006d352) popup_call3_audio_in_window_g1

0xa374,	// (0x0006d36a) popup_call3_audio_in_window_g2_ParamLimits

0xa374,	// (0x0006d36a) popup_call3_audio_in_window_g2

0xa38c,	// (0x0006d382) popup_call3_audio_in_window_g3_ParamLimits

0xa38c,	// (0x0006d382) popup_call3_audio_in_window_g3

0x0003,

0xf58c,	// (0x00072582) popup_call3_audio_in_window_g_ParamLimits

0xf58c,	// (0x00072582) popup_call3_audio_in_window_g

0xa3b4,	// (0x0006d3aa) popup_call3_audio_in_window_t1_ParamLimits

0xa3b4,	// (0x0006d3aa) popup_call3_audio_in_window_t1

0xa3dc,	// (0x0006d3d2) popup_call3_audio_in_window_t2_ParamLimits

0xa3dc,	// (0x0006d3d2) popup_call3_audio_in_window_t2

0xa404,	// (0x0006d3fa) popup_call3_audio_in_window_t3_ParamLimits

0xa404,	// (0x0006d3fa) popup_call3_audio_in_window_t3

0x0002,

0xf595,	// (0x0007258b) popup_call3_audio_in_window_t_ParamLimits

0xf595,	// (0x0007258b) popup_call3_audio_in_window_t

0x0a9f,	// (0x00063a95) bg_popup_call3_rect_pane

0x27c9,	// (0x000657bf) bg_popup_call3_rect_pane_g1

0x095e,	// (0x00063954) bg_popup_call3_rect_pane_g2

0x27d1,	// (0x000657c7) bg_popup_call3_rect_pane_g3

0x27d9,	// (0x000657cf) bg_popup_call3_rect_pane_g4

0x27e1,	// (0x000657d7) bg_popup_call3_rect_pane_g5

0x27e9,	// (0x000657df) bg_popup_call3_rect_pane_g6

0x27f1,	// (0x000657e7) bg_popup_call3_rect_pane_g7

0x0040,	// (0x00063036) mup_visualizer_osc_pane

0x0040,	// (0x00063036) mup_visualizer_spec_pane

0xa31a,	// (0x0006d310) call3_video_qcif_pane_ParamLimits

0xa31a,	// (0x0006d310) call3_video_qcif_pane

0xa32c,	// (0x0006d322) call3_video_qcif_uncrop_pane_ParamLimits

0xa32c,	// (0x0006d322) call3_video_qcif_uncrop_pane

0xa33a,	// (0x0006d330) call3_video_subqcif_pane_ParamLimits

0xa33a,	// (0x0006d330) call3_video_subqcif_pane

0xa34c,	// (0x0006d342) call3_video_subqcif_uncrop_pane_ParamLimits

0xa34c,	// (0x0006d342) call3_video_subqcif_uncrop_pane

0xa3a4,	// (0x0006d39a) popup_call3_audio_in_window_g4_ParamLimits

0xa3a4,	// (0x0006d39a) popup_call3_audio_in_window_g4

0x0040,	// (0x00063036) mup_spec_half_pane

0x0040,	// (0x00063036) mup_spec_half_pane_cp

0x0040,	// (0x00063036) mup_osc_middle_pane

0x0adf,	// (0x00063ad5) mup_visualizer_osc_pane_g1

0x48b9,	// (0x000678af) mup_spec_bar_pane_ParamLimits

0x48b9,	// (0x000678af) mup_spec_bar_pane

0x0adf,	// (0x00063ad5) mup_spec_bar_pane_g1

0x0adf,	// (0x00063ad5) mup_spec_bar_pane_g2

0x0001,

0xf3c3,	// (0x000723b9) mup_spec_bar_pane_g

0x7b06,	// (0x0006aafc) aid_cale_week_size_cell_pane_ParamLimits

0x7b1b,	// (0x0006ab11) bg_cale_heading_pane_ParamLimits

0x0a01,	// (0x000639f7) bg_cale_pane_cp01_ParamLimits

0x7b3b,	// (0x0006ab31) cale_week_corner_pane_ParamLimits

0x7b55,	// (0x0006ab4b) cale_week_day_heading_pane_ParamLimits

0x7b75,	// (0x0006ab6b) cale_week_scroll_pane_g1_ParamLimits

0x7b90,	// (0x0006ab86) cale_week_scroll_pane_g2_ParamLimits

0x7ba3,	// (0x0006ab99) cale_week_scroll_pane_g3_ParamLimits

0x7bb6,	// (0x0006abac) cale_week_scroll_pane_g4_ParamLimits

0x7bc9,	// (0x0006abbf) cale_week_scroll_pane_g5_ParamLimits

0x7bdc,	// (0x0006abd2) cale_week_scroll_pane_g6_ParamLimits

0x7bef,	// (0x0006abe5) cale_week_scroll_pane_g7_ParamLimits

0x7c04,	// (0x0006abfa) cale_week_scroll_pane_g8_ParamLimits

0x7c19,	// (0x0006ac0f) cale_week_scroll_pane_g9_ParamLimits

0x7c2c,	// (0x0006ac22) cale_week_scroll_pane_g10_ParamLimits

0x7c3f,	// (0x0006ac35) cale_week_scroll_pane_g11_ParamLimits

0x7c52,	// (0x0006ac48) cale_week_scroll_pane_g12_ParamLimits

0x7c69,	// (0x0006ac5f) cale_week_scroll_pane_g13_ParamLimits

0x7c84,	// (0x0006ac7a) cale_week_scroll_pane_g14_ParamLimits

0x7c9f,	// (0x0006ac95) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x00072147) cale_week_scroll_pane_g_ParamLimits

0x7ccf,	// (0x0006acc5) cale_week_time_pane_ParamLimits

0x7ce4,	// (0x0006acda) grid_cale_week_pane_ParamLimits

0x0a1e,	// (0x00063a14) listscroll_cale_week_pane_t1

0x0a30,	// (0x00063a26) scroll_pane_cp08_ParamLimits

0x8785,	// (0x0006b77b) cale_month_corner_pane_ParamLimits

0x0db6,	// (0x00063dac) cale_month_pane_t1

0x8c37,	// (0x0006bc2d) cale_month_week_pane_ParamLimits

0x201e,	// (0x00065014) popup_call_status_window_g1_ParamLimits

0x93be,	// (0x0006c3b4) popup_call_status_window_g2_ParamLimits

0x93ca,	// (0x0006c3c0) popup_call_status_window_g3_ParamLimits

0xf2d0,	// (0x000722c6) popup_call_status_window_g_ParamLimits

0x11c0,	// (0x000641b6) aid_call2_pane

0x6775,	// (0x0006976b) msg_header_pane_g1

0x9a2a,	// (0x0006ca20) postcard_address2_pane_ParamLimits

0x9a2a,	// (0x0006ca20) postcard_address2_pane

0x9a36,	// (0x0006ca2c) postcard_message2_pane_ParamLimits

0x9a36,	// (0x0006ca2c) postcard_message2_pane

0xa2aa,	// (0x0006d2a0) message2_row_pane_ParamLimits

0xa2aa,	// (0x0006d2a0) message2_row_pane

0xa2c5,	// (0x0006d2bb) address2_row_pane_ParamLimits

0xa2c5,	// (0x0006d2bb) address2_row_pane

0x4886,	// (0x0006787c) postcard_message2_row_pane_g1

0x488e,	// (0x00067884) postcard_message2_row_pane_t1

0x4886,	// (0x0006787c) address2_row_pane_g1

0x488e,	// (0x00067884) address2_row_pane_t1

0x7f6a,	// (0x0006af60) aid_size_cell_vorec

0x04e2,	// (0x000634d8) main_rss_pane

0x489c,	// (0x00067892) rss_list_single_pane_ParamLimits

0x489c,	// (0x00067892) rss_list_single_pane

0x48aa,	// (0x000678a0) rss_list_single_pane_t1

0x48aa,	// (0x000678a0) rss_list_single_pane_t2

0x0001,

0xf580,	// (0x00072576) rss_list_single_pane_t

0x04e2,	// (0x000634d8) main_camera2_pane

0x04e2,	// (0x000634d8) main_video2_pane

0x07b8,	// (0x000637ae) cams_zoom_pane_cp2_ParamLimits

0x07b8,	// (0x000637ae) cams_zoom_pane_cp2

0x07b8,	// (0x000637ae) image2_vga_pane_ParamLimits

0x07b8,	// (0x000637ae) image2_vga_pane

0x07d4,	// (0x000637ca) main_camera2_pane_g1_ParamLimits

0x07d4,	// (0x000637ca) main_camera2_pane_g1

0x07d4,	// (0x000637ca) main_camera2_pane_g2_ParamLimits

0x07d4,	// (0x000637ca) main_camera2_pane_g2

0x07d4,	// (0x000637ca) main_camera2_pane_g3_ParamLimits

0x07d4,	// (0x000637ca) main_camera2_pane_g3

0x07d4,	// (0x000637ca) main_camera2_pane_g4_ParamLimits

0x07d4,	// (0x000637ca) main_camera2_pane_g4

0x07d4,	// (0x000637ca) main_camera2_pane_g5_ParamLimits

0x07d4,	// (0x000637ca) main_camera2_pane_g5

0x07d4,	// (0x000637ca) main_camera2_pane_g6_ParamLimits

0x07d4,	// (0x000637ca) main_camera2_pane_g6

0x07d4,	// (0x000637ca) main_camera2_pane_g7_ParamLimits

0x07d4,	// (0x000637ca) main_camera2_pane_g7

0x07d4,	// (0x000637ca) main_camera2_pane_g8_ParamLimits

0x07d4,	// (0x000637ca) main_camera2_pane_g8

0x0008,

0xf59c,	// (0x00072592) main_camera2_pane_g_ParamLimits

0xf59c,	// (0x00072592) main_camera2_pane_g

0x168e,	// (0x00064684) main_camera2_pane_t1_ParamLimits

0x168e,	// (0x00064684) main_camera2_pane_t1

0x168e,	// (0x00064684) main_camera2_pane_t2_ParamLimits

0x168e,	// (0x00064684) main_camera2_pane_t2

0x168e,	// (0x00064684) main_camera2_pane_t3_ParamLimits

0x168e,	// (0x00064684) main_camera2_pane_t3

0x168e,	// (0x00064684) main_camera2_pane_t4_ParamLimits

0x168e,	// (0x00064684) main_camera2_pane_t4

0x0006,

0xf5af,	// (0x000725a5) main_camera2_pane_t_ParamLimits

0xf5af,	// (0x000725a5) main_camera2_pane_t

0x16a2,	// (0x00064698) cams_zoom_pane_cp4_ParamLimits

0x16a2,	// (0x00064698) cams_zoom_pane_cp4

0x075f,	// (0x00063755) image2_cif_pane_ParamLimits

0x075f,	// (0x00063755) image2_cif_pane

0x07b8,	// (0x000637ae) image2_subqcif_pane_ParamLimits

0x07b8,	// (0x000637ae) image2_subqcif_pane

0x166c,	// (0x00064662) main_video2_pane_g1_ParamLimits

0x166c,	// (0x00064662) main_video2_pane_g1

0x166c,	// (0x00064662) main_video2_pane_g2_ParamLimits

0x166c,	// (0x00064662) main_video2_pane_g2

0x166c,	// (0x00064662) main_video2_pane_g3_ParamLimits

0x166c,	// (0x00064662) main_video2_pane_g3

0x166c,	// (0x00064662) main_video2_pane_g4_ParamLimits

0x166c,	// (0x00064662) main_video2_pane_g4

0x166c,	// (0x00064662) main_video2_pane_g5_ParamLimits

0x166c,	// (0x00064662) main_video2_pane_g5

0x166c,	// (0x00064662) main_video2_pane_g6_ParamLimits

0x166c,	// (0x00064662) main_video2_pane_g6

0x0005,

0xf5be,	// (0x000725b4) main_video2_pane_g_ParamLimits

0xf5be,	// (0x000725b4) main_video2_pane_g

0x167a,	// (0x00064670) main_video2_pane_t1_ParamLimits

0x167a,	// (0x00064670) main_video2_pane_t1

0x167a,	// (0x00064670) main_video2_pane_t2_ParamLimits

0x167a,	// (0x00064670) main_video2_pane_t2

0x167a,	// (0x00064670) main_video2_pane_t3_ParamLimits

0x167a,	// (0x00064670) main_video2_pane_t3

0x0002,

0xf5cb,	// (0x000725c1) main_video2_pane_t_ParamLimits

0xf5cb,	// (0x000725c1) main_video2_pane_t

0x9fca,	// (0x0006cfc0) call_muted_g2

0x0001,

0xf572,	// (0x00072568) call_muted_g

0x04e2,	// (0x000634d8) main_mup2_pane

0x07e2,	// (0x000637d8) main_mup2_pane_g1_ParamLimits

0x07e2,	// (0x000637d8) main_mup2_pane_g1

0x07e2,	// (0x000637d8) main_mup2_pane_g2_ParamLimits

0x07e2,	// (0x000637d8) main_mup2_pane_g2

0x0adf,	// (0x00063ad5) main_mup_pane_g13_cp1

0x0040,	// (0x00063036) mup_volume_pane_cp1

0x07e2,	// (0x000637d8) main_mup2_pane_g4_ParamLimits

0x07e2,	// (0x000637d8) main_mup2_pane_g4

0x07e2,	// (0x000637d8) main_mup2_pane_g5_ParamLimits

0x07e2,	// (0x000637d8) main_mup2_pane_g5

0x07e2,	// (0x000637d8) main_mup2_pane_g6_ParamLimits

0x07e2,	// (0x000637d8) main_mup2_pane_g6

0x07e2,	// (0x000637d8) main_mup2_pane_g7_ParamLimits

0x07e2,	// (0x000637d8) main_mup2_pane_g7

0x0006,

0xf5d2,	// (0x000725c8) main_mup2_pane_g_ParamLimits

0xf5d2,	// (0x000725c8) main_mup2_pane_g

0x07f0,	// (0x000637e6) main_mup2_pane_t1_ParamLimits

0x07f0,	// (0x000637e6) main_mup2_pane_t1

0x07f0,	// (0x000637e6) main_mup2_pane_t2_ParamLimits

0x07f0,	// (0x000637e6) main_mup2_pane_t2

0x07f0,	// (0x000637e6) main_mup2_pane_t3_ParamLimits

0x07f0,	// (0x000637e6) main_mup2_pane_t3

0x07f0,	// (0x000637e6) main_mup2_pane_t4_ParamLimits

0x07f0,	// (0x000637e6) main_mup2_pane_t4

0x07f0,	// (0x000637e6) main_mup2_pane_t5_ParamLimits

0x07f0,	// (0x000637e6) main_mup2_pane_t5

0x07f0,	// (0x000637e6) main_mup2_pane_t6_ParamLimits

0x07f0,	// (0x000637e6) main_mup2_pane_t6

0x0005,

0xf5e1,	// (0x000725d7) main_mup2_pane_t_ParamLimits

0xf5e1,	// (0x000725d7) main_mup2_pane_t

0x4987,	// (0x0006797d) mup2_visualizer_pane_ParamLimits

0x4987,	// (0x0006797d) mup2_visualizer_pane

0x4987,	// (0x0006797d) mup_progress_pane_cp_ParamLimits

0x4987,	// (0x0006797d) mup_progress_pane_cp

0x493a,	// (0x00067930) mup_volume_pane_cp_ParamLimits

0x493a,	// (0x00067930) mup_volume_pane_cp

0x07c6,	// (0x000637bc) mup2_visualizer_pane_g1_ParamLimits

0x07c6,	// (0x000637bc) mup2_visualizer_pane_g1

0x07d4,	// (0x000637ca) mup2_visualizer_pane_g2_ParamLimits

0x07d4,	// (0x000637ca) mup2_visualizer_pane_g2

0x07d4,	// (0x000637ca) mup2_visualizer_pane_g3_ParamLimits

0x07d4,	// (0x000637ca) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x000720c0) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x000720c0) mup2_visualizer_pane_g

0x18f8,	// (0x000648ee) aid_size_cell_fmradio

0xa0e0,	// (0x0006d0d6) aid_height_parent_landcape

0x0c27,	// (0x00063c1d) wml_content_pane_cp

0x0c2f,	// (0x00063c25) wml_tabs_pane

0x0c38,	// (0x00063c2e) popup_wml_miniature_window

0x0c40,	// (0x00063c36) scroll_pane_cp021

0x0c54,	// (0x00063c4a) wml_content_pane_comp8

0x04e2,	// (0x000634d8) bg_popup_sub_pane_cp05

0x4950,	// (0x00067946) popup_wml_miniature_window_g1

0x4958,	// (0x0006794e) wml_miniature_view_pane

0xa447,	// (0x0006d43d) aid_size_wml_view

0xa44f,	// (0x0006d445) wml_miniature_view_pane_g1

0xa458,	// (0x0006d44e) wml_miniature_view_pane_g2

0xa461,	// (0x0006d457) wml_miniature_view_pane_g3

0xa469,	// (0x0006d45f) wml_miniature_view_pane_g4

0xa471,	// (0x0006d467) wml_miniature_view_pane_g5

0xa479,	// (0x0006d46f) wml_miniature_view_pane_g6

0xa481,	// (0x0006d477) wml_miniature_view_pane_g7

0xa489,	// (0x0006d47f) wml_miniature_view_pane_g8

0x0007,

0xf5ee,	// (0x000725e4) wml_miniature_view_pane_g

0x4960,	// (0x00067956) background_graphic_ParamLimits

0x4960,	// (0x00067956) background_graphic

0x496c,	// (0x00067962) wml_tabs_2_pane

0x4975,	// (0x0006796b) wml_tabs_3_pane_ParamLimits

0x4975,	// (0x0006796b) wml_tabs_3_pane

0x4995,	// (0x0006798b) wml_tabs_4_pane_ParamLimits

0x4995,	// (0x0006798b) wml_tabs_4_pane

0x49ab,	// (0x000679a1) wml_tabs_5_pane_ParamLimits

0x49ab,	// (0x000679a1) wml_tabs_5_pane

0x49c5,	// (0x000679bb) wml_tabs_pane_g2_ParamLimits

0x49c5,	// (0x000679bb) wml_tabs_pane_g2

0x49da,	// (0x000679d0) wml_tabs_pane_g3_ParamLimits

0x49da,	// (0x000679d0) wml_tabs_pane_g3

0x49ef,	// (0x000679e5) wml_tabs_2_active_pane_ParamLimits

0x49ef,	// (0x000679e5) wml_tabs_2_active_pane

0x49ef,	// (0x000679e5) wml_tabs_2_passive_pane_ParamLimits

0x49ef,	// (0x000679e5) wml_tabs_2_passive_pane

0xa491,	// (0x0006d487) wml_tabs_3_active_pane_cp_ParamLimits

0xa491,	// (0x0006d487) wml_tabs_3_active_pane_cp

0xa4a2,	// (0x0006d498) wml_tabs_3_passive_pane_ParamLimits

0xa4a2,	// (0x0006d498) wml_tabs_3_passive_pane

0xa4b3,	// (0x0006d4a9) wml_tabs_3_passive_pane_cp_ParamLimits

0xa4b3,	// (0x0006d4a9) wml_tabs_3_passive_pane_cp

0xa4c4,	// (0x0006d4ba) tabs_4_active_pane

0xa4cc,	// (0x0006d4c2) tabs_4_passive_pane

0xa4d4,	// (0x0006d4ca) tabs_4_passive_pane_cp

0xa4dc,	// (0x0006d4d2) tabs_4_passive_pane_cp2

0x9ec6,	// (0x0006cebc) aid_height_text

0x4987,	// (0x0006797d) mup_volume_cont_pane_ParamLimits

0x4987,	// (0x0006797d) mup_volume_cont_pane

0x0040,	// (0x00063036) aid_size_cell_pinb

0x0040,	// (0x00063036) aid_size_list_pinb

0x4987,	// (0x0006797d) mup2_volume_cont_pane_ParamLimits

0x4987,	// (0x0006797d) mup2_volume_cont_pane

0xa4e4,	// (0x0006d4da) mup2_volume_cont_pane_g1_ParamLimits

0xa4e4,	// (0x0006d4da) mup2_volume_cont_pane_g1

0x73b7,	// (0x0006a3ad) aid_size_cell_touch_ParamLimits

0x73b7,	// (0x0006a3ad) aid_size_cell_touch

0x765f,	// (0x0006a655) touch_pane_ParamLimits

0x765f,	// (0x0006a655) touch_pane

0x0040,	// (0x00063036) main_rss2_pane

0x4a10,	// (0x00067a06) listscroll_rss2_pane

0x4a19,	// (0x00067a0f) rss2_navigation_pane

0x4a21,	// (0x00067a17) list_rss2_pane

0x1362,	// (0x00064358) scroll_pane_cp22

0x4a29,	// (0x00067a1f) rss2_navigation_pane_g1

0x4a32,	// (0x00067a28) rss2_navigation_pane_g2

0x4a3a,	// (0x00067a30) rss2_navigation_pane_g3

0x0002,

0xf5ff,	// (0x000725f5) rss2_navigation_pane_g

0x4a42,	// (0x00067a38) rss2_navigation_pane_t1

0xa4fa,	// (0x0006d4f0) rss2_list_single_pane_ParamLimits

0xa4fa,	// (0x0006d4f0) rss2_list_single_pane

0x4a50,	// (0x00067a46) rss2_list_single_pane_t2

0x4a5e,	// (0x00067a54) rss2_list_single_pane_t3_ParamLimits

0x4a5e,	// (0x00067a54) rss2_list_single_pane_t3

0x4a7b,	// (0x00067a71) rss2_list_single_pane_t4

0x9233,	// (0x0006c229) smil_status_pane_g1

0x075f,	// (0x00063755) main_image2_pane_ParamLimits

0x075f,	// (0x00063755) main_image2_pane

0x07d4,	// (0x000637ca) main_camera2_pane_g9_ParamLimits

0x07d4,	// (0x000637ca) main_camera2_pane_g9

0x168e,	// (0x00064684) main_camera2_pane_t5_ParamLimits

0x168e,	// (0x00064684) main_camera2_pane_t5

0xa433,	// (0x0006d429) main_camera2_pane_t6_ParamLimits

0xa433,	// (0x0006d429) main_camera2_pane_t6

0xa52b,	// (0x0006d521) main_image2_pane_g1_ParamLimits

0xa52b,	// (0x0006d521) main_image2_pane_g1

0x9bfe,	// (0x0006cbf4) smil2_video_pane_ParamLimits

0x9bfe,	// (0x0006cbf4) smil2_video_pane

0x73eb,	// (0x0006a3e1) aid_zoom_text_primary_cp

0x7608,	// (0x0006a5fe) popup_preview_fixed_window

0x0b90,	// (0x00063b86) im_reading_pane_g1

0xa425,	// (0x0006d41b) cams2_bc_adjust_pane_cp_ParamLimits

0xa425,	// (0x0006d41b) cams2_bc_adjust_pane_cp

0x07b8,	// (0x000637ae) cams2_bc_adjust_pane_ParamLimits

0x07b8,	// (0x000637ae) cams2_bc_adjust_pane

0x0adf,	// (0x00063ad5) cams2_bc_adjust_pane_g1

0x0040,	// (0x00063036) cams2_slider_pane

0x0adf,	// (0x00063ad5) cams2_slider_pane_g1

0x0adf,	// (0x00063ad5) cams2_slider_pane_g2

0x0006,

0xf606,	// (0x000725fc) cams2_slider_pane_g

0x772d,	// (0x0006a723) calc_display_pane_ParamLimits

0x774b,	// (0x0006a741) calc_paper_pane_ParamLimits

0x7767,	// (0x0006a75d) grid_calc_pane_ParamLimits

0x942c,	// (0x0006c422) popup_clock_digital_window_t1_ParamLimits

0x1895,	// (0x0006488b) main_image_pane_t1

0x7713,	// (0x0006a709) aid_size_cell_calc_ParamLimits

0x7713,	// (0x0006a709) aid_size_cell_calc

0xa11a,	// (0x0006d110) popup_blid_sat_info2_window_ParamLimits

0xa11a,	// (0x0006d110) popup_blid_sat_info2_window

0x4a89,	// (0x00067a7f) aid_size_cell_blid

0x4987,	// (0x0006797d) bg_popup_window_pane_cp07

0x4aa6,	// (0x00067a9c) grid_popup_blid_pane

0x4ab0,	// (0x00067aa6) heading_pane_cp05_ParamLimits

0x4ab0,	// (0x00067aa6) heading_pane_cp05

0x4b7a,	// (0x00067b70) cell_popup_blid_pane_ParamLimits

0x4b7a,	// (0x00067b70) cell_popup_blid_pane

0x4b9e,	// (0x00067b94) cell_popup_blid_pane_g1

0x4ba6,	// (0x00067b9c) cell_popup_blid_pane_t1

0x4987,	// (0x0006797d) mup2_indicator_pane_ParamLimits

0x4987,	// (0x0006797d) mup2_indicator_pane

0x0040,	// (0x00063036) mup2_visualizer_osc_pane

0x493a,	// (0x00067930) mup2_visualizer_spec_pane_ParamLimits

0x493a,	// (0x00067930) mup2_visualizer_spec_pane

0x0040,	// (0x00063036) mup2_spec_half_pane

0x0040,	// (0x00063036) mup2_spec_half_pane_cp

0x4bb4,	// (0x00067baa) mup2_spec_bar_pane_ParamLimits

0x4bb4,	// (0x00067baa) mup2_spec_bar_pane

0x0adf,	// (0x00063ad5) mup2_spec_bar_pane_g1

0x4bd3,	// (0x00067bc9) mup2_spec_bar_pane_g2

0x0001,

0xf62c,	// (0x00072622) mup2_spec_bar_pane_g

0x0040,	// (0x00063036) mup2_osc_middle_pane

0x0adf,	// (0x00063ad5) mup2_visualizer_osc_pane_g1

0x00ef,	// (0x000630e5) popup_number_entry_window_t1_ParamLimits

0x0102,	// (0x000630f8) popup_number_entry_window_t2_ParamLimits

0x0114,	// (0x0006310a) popup_number_entry_window_t3_ParamLimits

0x76b6,	// (0x0006a6ac) popup_number_entry_window_t5_ParamLimits

0x76b6,	// (0x0006a6ac) popup_number_entry_window_t5

0xf06b,	// (0x00072061) popup_number_entry_window_t_ParamLimits

0x0126,	// (0x0006311c) text_title_cp2_ParamLimits

0x98f2,	// (0x0006c8e8) aid_hotspot_pointer_text2_pane

0x998c,	// (0x0006c982) main_viewer_pane_g9_ParamLimits

0x998c,	// (0x0006c982) main_viewer_pane_g9

0x0db6,	// (0x00063dac) cale_month_pane_t1_ParamLimits

0x0e21,	// (0x00063e17) bg_cale_pane_ParamLimits

0x0e39,	// (0x00063e2f) list_cale_pane_ParamLimits

0x0e4a,	// (0x00063e40) listscroll_cale_day_pane_t1

0x0e5c,	// (0x00063e52) scroll_pane_cp09_ParamLimits

0x96af,	// (0x0006c6a5) main_mup_eq_pane_t1_ParamLimits

0x96af,	// (0x0006c6a5) main_mup_eq_pane_t1

0x96c9,	// (0x0006c6bf) main_mup_eq_pane_t2_ParamLimits

0x96c9,	// (0x0006c6bf) main_mup_eq_pane_t2

0x96e3,	// (0x0006c6d9) main_mup_eq_pane_t3_ParamLimits

0x96e3,	// (0x0006c6d9) main_mup_eq_pane_t3

0x96fb,	// (0x0006c6f1) main_mup_eq_pane_t4_ParamLimits

0x96fb,	// (0x0006c6f1) main_mup_eq_pane_t4

0x9713,	// (0x0006c709) main_mup_eq_pane_t5_ParamLimits

0x9713,	// (0x0006c709) main_mup_eq_pane_t5

0x972b,	// (0x0006c721) main_mup_eq_pane_t6_ParamLimits

0x972b,	// (0x0006c721) main_mup_eq_pane_t6

0x973f,	// (0x0006c735) main_mup_eq_pane_t7_ParamLimits

0x973f,	// (0x0006c735) main_mup_eq_pane_t7

0x9753,	// (0x0006c749) main_mup_eq_pane_t8_ParamLimits

0x9753,	// (0x0006c749) main_mup_eq_pane_t8

0x9769,	// (0x0006c75f) main_mup_eq_pane_t9_ParamLimits

0x9769,	// (0x0006c75f) main_mup_eq_pane_t9

0x9781,	// (0x0006c777) main_mup_eq_pane_t10_ParamLimits

0x9781,	// (0x0006c777) main_mup_eq_pane_t10

0x0009,

0xf3cf,	// (0x000723c5) main_mup_eq_pane_t_ParamLimits

0xf3cf,	// (0x000723c5) main_mup_eq_pane_t

0x983e,	// (0x0006c834) mup_equalizer_pane_cp5_ParamLimits

0x9854,	// (0x0006c84a) mup_equalizer_pane_cp6_ParamLimits

0x986c,	// (0x0006c862) mup_equalizer_pane_cp7_ParamLimits

0x0040,	// (0x00063036) main_gallery_pane

0x48d8,	// (0x000678ce) smil2_volume_pane

0x48f3,	// (0x000678e9) smil_status_volume_pane_g1_ParamLimits

0x48e0,	// (0x000678d6) smil_status_volume_pane_g2_ParamLimits

0xa2d8,	// (0x0006d2ce) smil_status_volume_pane_g3_ParamLimits

0xf585,	// (0x0007257b) smil_status_volume_pane_g_ParamLimits

0x4987,	// (0x0006797d) bg_popup_window_pane_cp07_ParamLimits

0x4a91,	// (0x00067a87) blid_firmament_pane

0x07b8,	// (0x000637ae) aid_size_cell_gallery_ParamLimits

0x07b8,	// (0x000637ae) aid_size_cell_gallery

0x07b8,	// (0x000637ae) grid_gallery_pane_ParamLimits

0x07b8,	// (0x000637ae) grid_gallery_pane

0x16a2,	// (0x00064698) cell_gallery_pane_ParamLimits

0x16a2,	// (0x00064698) cell_gallery_pane

0x075f,	// (0x00063755) bg_cell_gallery_focus_pane_ParamLimits

0x075f,	// (0x00063755) bg_cell_gallery_focus_pane

0x07c6,	// (0x000637bc) cell_gallery_pane_g1_ParamLimits

0x07c6,	// (0x000637bc) cell_gallery_pane_g1

0x07c6,	// (0x000637bc) cell_gallery_pane_g2_ParamLimits

0x07c6,	// (0x000637bc) cell_gallery_pane_g2

0x07c6,	// (0x000637bc) cell_gallery_pane_g3_ParamLimits

0x07c6,	// (0x000637bc) cell_gallery_pane_g3

0x07d4,	// (0x000637ca) cell_gallery_pane_g4_ParamLimits

0x07d4,	// (0x000637ca) cell_gallery_pane_g4

0x0003,

0xf631,	// (0x00072627) cell_gallery_pane_g_ParamLimits

0xf631,	// (0x00072627) cell_gallery_pane_g

0x4bdd,	// (0x00067bd3) bg_cell_gallery_focus_pane_g1

0x4be5,	// (0x00067bdb) bg_cell_gallery_focus_pane_g2

0x4bed,	// (0x00067be3) bg_cell_gallery_focus_pane_g3

0x4bf5,	// (0x00067beb) bg_cell_gallery_focus_pane_g4

0x4bfd,	// (0x00067bf3) bg_cell_gallery_focus_pane_g5

0x4c05,	// (0x00067bfb) bg_cell_gallery_focus_pane_g6

0x4c0d,	// (0x00067c03) bg_cell_gallery_focus_pane_g7

0x4c15,	// (0x00067c0b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf63a,	// (0x00072630) bg_cell_gallery_focus_pane_g

0x4c1d,	// (0x00067c13) aid_firma_cardinal

0x4c31,	// (0x00067c27) blid_firmament_pane_t1

0x4c48,	// (0x00067c3e) blid_firmament_pane_t2

0x4c5f,	// (0x00067c55) blid_firmament_pane_t3

0x4c76,	// (0x00067c6c) blid_firmament_pane_t4

0x0003,

0xf64b,	// (0x00072641) blid_firmament_pane_t

0x4c8d,	// (0x00067c83) blid_sat_info_pane

0x0adf,	// (0x00063ad5) blid_sat_info_pane_g1

0x0adf,	// (0x00063ad5) blid_sat_info_pane_g2

0x0001,

0xf3c3,	// (0x000723b9) blid_sat_info_pane_g

0x4c9d,	// (0x00067c93) blid_sat_info_pane_t1

0x4cab,	// (0x00067ca1) smil2_volume_content_pane

0x4cb4,	// (0x00067caa) smil2_volume_pane_g1

0x08f5,	// (0x000638eb) smil2_volume_content_pane_g1

0x4cbc,	// (0x00067cb2) smil2_volume_content_pane_g2

0x4cc5,	// (0x00067cbb) smil2_volume_content_pane_g3

0x4cce,	// (0x00067cc4) smil2_volume_content_pane_g4

0x4cd7,	// (0x00067ccd) smil2_volume_content_pane_g5

0x4ce0,	// (0x00067cd6) smil2_volume_content_pane_g6

0x4ce9,	// (0x00067cdf) smil2_volume_content_pane_g7

0x4cf2,	// (0x00067ce8) smil2_volume_content_pane_g8

0x4cfb,	// (0x00067cf1) smil2_volume_content_pane_g9

0x4d04,	// (0x00067cfa) smil2_volume_content_pane_g10

0x0009,

0xf654,	// (0x0007264a) smil2_volume_content_pane_g

0x7d65,	// (0x0006ad5b) cale_week_day_heading_pane_t1_ParamLimits

0x7d80,	// (0x0006ad76) cale_week_day_heading_pane_t2_ParamLimits

0x7d9b,	// (0x0006ad91) cale_week_day_heading_pane_t3_ParamLimits

0x7db6,	// (0x0006adac) cale_week_day_heading_pane_t4_ParamLimits

0x7dd1,	// (0x0006adc7) cale_week_day_heading_pane_t5_ParamLimits

0x7dec,	// (0x0006ade2) cale_week_day_heading_pane_t6_ParamLimits

0x7e07,	// (0x0006adfd) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x00072168) cale_week_day_heading_pane_t_ParamLimits

0x0a4d,	// (0x00063a43) bg_cale_side_pane_ParamLimits

0x7e22,	// (0x0006ae18) cale_week_time_pane_t1_ParamLimits

0x7e3c,	// (0x0006ae32) cale_week_time_pane_t2_ParamLimits

0x7e56,	// (0x0006ae4c) cale_week_time_pane_t3_ParamLimits

0x7e70,	// (0x0006ae66) cale_week_time_pane_t4_ParamLimits

0x7e8a,	// (0x0006ae80) cale_week_time_pane_t5_ParamLimits

0x7ea4,	// (0x0006ae9a) cale_week_time_pane_t6_ParamLimits

0x7ec2,	// (0x0006aeb8) cale_week_time_pane_t7_ParamLimits

0x7ee4,	// (0x0006aeda) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x00072177) cale_week_time_pane_t_ParamLimits

0x7f08,	// (0x0006aefe) cell_cale_week_pane_g2_ParamLimits

0x0a4d,	// (0x00063a43) bg_cale_side_pane_cp01_ParamLimits

0x9028,	// (0x0006c01e) cale_month_week_pane_t1_ParamLimits

0x9041,	// (0x0006c037) cale_month_week_pane_t2_ParamLimits

0x905a,	// (0x0006c050) cale_month_week_pane_t3_ParamLimits

0x9073,	// (0x0006c069) cale_month_week_pane_t4_ParamLimits

0x908c,	// (0x0006c082) cale_month_week_pane_t5_ParamLimits

0x90ad,	// (0x0006c0a3) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x00072245) cale_month_week_pane_t_ParamLimits

0x91f0,	// (0x0006c1e6) cell_cale_month_pane_g1_ParamLimits

0x0040,	// (0x00063036) main_cale_event_viewer_pane

0x0040,	// (0x00063036) listscroll_cale_event_viewer_pane

0x4d0d,	// (0x00067d03) list_cale_ev_pane

0x4d15,	// (0x00067d0b) scroll_pane_cp023

0x4d21,	// (0x00067d17) field_cale_ev_pane_ParamLimits

0x4d21,	// (0x00067d17) field_cale_ev_pane

0x4d3f,	// (0x00067d35) field_cale_ev_content_pane_ParamLimits

0x4d3f,	// (0x00067d35) field_cale_ev_content_pane

0x4d4b,	// (0x00067d41) field_cale_ev_pane_g1_ParamLimits

0x4d4b,	// (0x00067d41) field_cale_ev_pane_g1

0x4d57,	// (0x00067d4d) field_cale_ev_pane_g2_ParamLimits

0x4d57,	// (0x00067d4d) field_cale_ev_pane_g2

0x4d6f,	// (0x00067d65) field_cale_ev_pane_g3_ParamLimits

0x4d6f,	// (0x00067d65) field_cale_ev_pane_g3

0x0002,

0xf669,	// (0x0007265f) field_cale_ev_pane_g_ParamLimits

0xf669,	// (0x0007265f) field_cale_ev_pane_g

0x4d87,	// (0x00067d7d) field_cale_ev_pane_t1_ParamLimits

0x4d87,	// (0x00067d7d) field_cale_ev_pane_t1

0x0978,	// (0x0006396e) field_cale_ev_content_pane_t1_ParamLimits

0x0978,	// (0x0006396e) field_cale_ev_content_pane_t1

0x1745,	// (0x0006473b) bg_button_pane_cp01

0x7af6,	// (0x0006aaec) listscroll_cale_week_pane_ParamLimits

0x09f8,	// (0x000639ee) popup_toolbar_window_cp01

0x0a1e,	// (0x00063a14) listscroll_cale_week_pane_t1_ParamLimits

0x7af6,	// (0x0006aaec) listscroll_cale_day_pane_ParamLimits

0x09f8,	// (0x000639ee) popup_toolbar_window_cp02

0x0e4a,	// (0x00063e40) listscroll_cale_day_pane_t1_ParamLimits

0x7af6,	// (0x0006aaec) main_cale_month_pane_ParamLimits

0xa221,	// (0x0006d217) popup_toolbar_window_cp03_ParamLimits

0xa221,	// (0x0006d217) popup_toolbar_window_cp03

0x9b14,	// (0x0006cb0a) main_image_pane_g2_ParamLimits

0x9b14,	// (0x0006cb0a) main_image_pane_g2

0x9b20,	// (0x0006cb16) main_image_pane_g3_ParamLimits

0x9b20,	// (0x0006cb16) main_image_pane_g3

0x0002,

0xf461,	// (0x00072457) main_image_pane_g_ParamLimits

0xf461,	// (0x00072457) main_image_pane_g

0x1895,	// (0x0006488b) main_image_pane_t1_ParamLimits

0x9b2c,	// (0x0006cb22) main_image_pane_t2_ParamLimits

0x9b2c,	// (0x0006cb22) main_image_pane_t2

0x9b3e,	// (0x0006cb34) main_image_pane_t3_ParamLimits

0x9b3e,	// (0x0006cb34) main_image_pane_t3

0x9b50,	// (0x0006cb46) main_image_pane_t4_ParamLimits

0x9b50,	// (0x0006cb46) main_image_pane_t4

0x0003,

0xf468,	// (0x0007245e) main_image_pane_t_ParamLimits

0xf468,	// (0x0007245e) main_image_pane_t

0x9b62,	// (0x0006cb58) popup_image_details_window_cp01

0x9b6c,	// (0x0006cb62) popup_toobar_trans_pane_cp01_ParamLimits

0x9b6c,	// (0x0006cb62) popup_toobar_trans_pane_cp01

0xa171,	// (0x0006d167) popup_image_details_window_ParamLimits

0xa171,	// (0x0006d167) popup_image_details_window

0xa17f,	// (0x0006d175) popup_image_focus_window

0x07b8,	// (0x000637ae) camera2_autofocus_pane_ParamLimits

0x07b8,	// (0x000637ae) camera2_autofocus_pane

0x0040,	// (0x00063036) bg_popup_sub_pane_cp06

0x4d9e,	// (0x00067d94) popup_image_focus_window_g1

0x4da6,	// (0x00067d9c) popup_image_focus_window_g2

0x4dae,	// (0x00067da4) popup_image_focus_window_g3

0x4db6,	// (0x00067dac) popup_image_focus_window_g4

0x0003,

0xf670,	// (0x00072666) popup_image_focus_window_g

0x4dbe,	// (0x00067db4) popup_image_focus_window_t1

0x4dcc,	// (0x00067dc2) popup_image_focus_window_t2

0x4ddc,	// (0x00067dd2) popup_image_focus_window_t3

0x0002,

0xf679,	// (0x0007266f) popup_image_focus_window_t

0x07c6,	// (0x000637bc) camera2_autofocus_pane_g1

0x075f,	// (0x00063755) bg_tb_trans_pane_cp01

0x4dea,	// (0x00067de0) popup_image_details_window_g1

0x4dfd,	// (0x00067df3) popup_image_details_window_g2

0x0002,

0xf68b,	// (0x00072681) popup_image_details_window_g

0x4e26,	// (0x00067e1c) popup_image_details_window_t1

0x4e38,	// (0x00067e2e) popup_image_details_window_t2

0x4e51,	// (0x00067e47) popup_image_details_window_t3

0x4e65,	// (0x00067e5b) popup_image_details_window_t4

0x4e80,	// (0x00067e76) popup_image_details_window_t5

0x0004,

0xf692,	// (0x00072688) popup_image_details_window_t

0x082c,	// (0x00063822) bg_calc_paper_pane_ParamLimits

0x0040,	// (0x00063036) grid_highlight_pane_cp013

0x7882,	// (0x0006a878) list_calc_pane_ParamLimits

0x7894,	// (0x0006a88a) scroll_pane_cp024

0x085a,	// (0x00063850) bg_calc_display_pane_ParamLimits

0x789c,	// (0x0006a892) calc_display_pane_t1_ParamLimits

0x78b1,	// (0x0006a8a7) calc_display_pane_t2_ParamLimits

0x78c6,	// (0x0006a8bc) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x000720e8) calc_display_pane_t_ParamLimits

0x799f,	// (0x0006a995) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x00072105) cell_calc_pane_g

0x79a8,	// (0x0006a99e) cell_calc_pane_t1

0x08d3,	// (0x000638c9) grid_highlight_pane_cp02_ParamLimits

0x08e9,	// (0x000638df) toolbar_button_pane_cp01_ParamLimits

0x08e9,	// (0x000638df) toolbar_button_pane_cp01

0x18da,	// (0x000648d0) temp_image_control_pane_ParamLimits

0x18da,	// (0x000648d0) temp_image_control_pane

0x075f,	// (0x00063755) main_mp3_pane

0x4e9a,	// (0x00067e90) temp_image_control_pane_g1_ParamLimits

0x4e9a,	// (0x00067e90) temp_image_control_pane_g1

0x4ea8,	// (0x00067e9e) temp_image_control_pane_g2_ParamLimits

0x4ea8,	// (0x00067e9e) temp_image_control_pane_g2

0x4eba,	// (0x00067eb0) temp_image_control_pane_g3_ParamLimits

0x4eba,	// (0x00067eb0) temp_image_control_pane_g3

0xa537,	// (0x0006d52d) temp_image_control_pane_g4_ParamLimits

0xa537,	// (0x0006d52d) temp_image_control_pane_g4

0x0003,

0xf69d,	// (0x00072693) temp_image_control_pane_g_ParamLimits

0xf69d,	// (0x00072693) temp_image_control_pane_g

0x4e9a,	// (0x00067e90) main_mp3_pane_g1

0xa548,	// (0x0006d53e) main_mp3_pane_g2

0x0007,

0xf6a6,	// (0x0007269c) main_mp3_pane_g

0x4eef,	// (0x00067ee5) main_mp3_pane_t1

0x07d4,	// (0x000637ca) main_camera_pane_g8_ParamLimits

0x07d4,	// (0x000637ca) main_camera_pane_g8

0x80b2,	// (0x0006b0a8) main_video_pane_g7_ParamLimits

0x80b2,	// (0x0006b0a8) main_video_pane_g7

0x168e,	// (0x00064684) main_camera2_pane_t7_ParamLimits

0x168e,	// (0x00064684) main_camera2_pane_t7

0x0be7,	// (0x00063bdd) scroll_pane_cp025_ParamLimits

0x0be7,	// (0x00063bdd) scroll_pane_cp025

0x0bfb,	// (0x00063bf1) scroll_pane_cp026_ParamLimits

0x0bfb,	// (0x00063bf1) scroll_pane_cp026

0x0c0a,	// (0x00063c00) wml_content_pane_ParamLimits

0x0040,	// (0x00063036) main_touch_calib_pane

0xa5ec,	// (0x0006d5e2) main_touch_calib_pane_g1

0xa5f8,	// (0x0006d5ee) main_touch_calib_pane_g2

0xa604,	// (0x0006d5fa) main_touch_calib_pane_g3

0xa610,	// (0x0006d606) main_touch_calib_pane_g4

0x0003,

0xf6c4,	// (0x000726ba) main_touch_calib_pane_g

0xa61c,	// (0x0006d612) main_touch_calib_pane_t1

0xa635,	// (0x0006d62b) main_touch_calib_pane_t2

0x0004,

0xf6cd,	// (0x000726c3) main_touch_calib_pane_t

0x143e,	// (0x00064434) mup_progress_pane_cp02

0x1473,	// (0x00064469) navi_pane_g1

0x152e,	// (0x00064524) navi_pane_mp_t3

0x075f,	// (0x00063755) main_mp3_pane_ParamLimits

0xa25e,	// (0x0006d254) navi_pane_ParamLimits

0x4e9a,	// (0x00067e90) main_mp3_pane_g1_ParamLimits

0xa548,	// (0x0006d53e) main_mp3_pane_g2_ParamLimits

0xa554,	// (0x0006d54a) main_mp3_pane_g3_ParamLimits

0xa554,	// (0x0006d54a) main_mp3_pane_g3

0xa560,	// (0x0006d556) main_mp3_pane_g4_ParamLimits

0xa560,	// (0x0006d556) main_mp3_pane_g4

0x07c6,	// (0x000637bc) main_mp3_pane_g5_ParamLimits

0x07c6,	// (0x000637bc) main_mp3_pane_g5

0x4eca,	// (0x00067ec0) main_mp3_pane_g6_ParamLimits

0x4eca,	// (0x00067ec0) main_mp3_pane_g6

0x4ed7,	// (0x00067ecd) main_mp3_pane_g7_ParamLimits

0x4ed7,	// (0x00067ecd) main_mp3_pane_g7

0x4ee3,	// (0x00067ed9) main_mp3_pane_g8_ParamLimits

0x4ee3,	// (0x00067ed9) main_mp3_pane_g8

0xf6a6,	// (0x0007269c) main_mp3_pane_g_ParamLimits

0xa56c,	// (0x0006d562) main_mp3_pane_t2

0xa57c,	// (0x0006d572) main_mp3_pane_t3

0x4efd,	// (0x00067ef3) main_mp3_pane_t4

0x4f0b,	// (0x00067f01) main_mp3_pane_t5

0x0005,

0xf6b7,	// (0x000726ad) main_mp3_pane_t

0x4f19,	// (0x00067f0f) mup_progress_pane_cp01

0x73eb,	// (0x0006a3e1) aid_zoom_text_secondary2

0x4d0d,	// (0x00067d03) list_cale_ev2_pane

0x4d15,	// (0x00067d0b) scroll_pane_cp023_ParamLimits

0xa690,	// (0x0006d686) field_cale_ev2_pane_ParamLimits

0xa690,	// (0x0006d686) field_cale_ev2_pane

0xa6b9,	// (0x0006d6af) field_cale_ev2_pane_g1_ParamLimits

0xa6b9,	// (0x0006d6af) field_cale_ev2_pane_g1

0xa6c5,	// (0x0006d6bb) field_cale_ev2_pane_g2_ParamLimits

0xa6c5,	// (0x0006d6bb) field_cale_ev2_pane_g2

0xa6dd,	// (0x0006d6d3) field_cale_ev2_pane_g3_ParamLimits

0xa6dd,	// (0x0006d6d3) field_cale_ev2_pane_g3

0x0003,

0xf6d8,	// (0x000726ce) field_cale_ev2_pane_g_ParamLimits

0xf6d8,	// (0x000726ce) field_cale_ev2_pane_g

0x6803,	// (0x000697f9) field_cale_ev2_pane_t1_ParamLimits

0x6803,	// (0x000697f9) field_cale_ev2_pane_t1

0x681a,	// (0x00069810) field_cale_ev2_pane_t2_ParamLimits

0x681a,	// (0x00069810) field_cale_ev2_pane_t2

0x0001,

0xf6e1,	// (0x000726d7) field_cale_ev2_pane_t_ParamLimits

0xf6e1,	// (0x000726d7) field_cale_ev2_pane_t

0x99f4,	// (0x0006c9ea) main_postcard_pane_g5_ParamLimits

0x99f4,	// (0x0006c9ea) main_postcard_pane_g5

0x9a02,	// (0x0006c9f8) main_postcard_pane_g6_ParamLimits

0x9a02,	// (0x0006c9f8) main_postcard_pane_g6

0x07b8,	// (0x000637ae) camera2_autofocus_pane_cp_ParamLimits

0x07b8,	// (0x000637ae) camera2_autofocus_pane_cp

0x075f,	// (0x00063755) main_mup3_pane

0xa740,	// (0x0006d736) main_mup3_pane_g1_ParamLimits

0xa740,	// (0x0006d736) main_mup3_pane_g1

0xa761,	// (0x0006d757) main_mup3_pane_g2_ParamLimits

0xa761,	// (0x0006d757) main_mup3_pane_g2

0xa7d9,	// (0x0006d7cf) main_mup3_pane_g3_ParamLimits

0xa7d9,	// (0x0006d7cf) main_mup3_pane_g3

0xa81c,	// (0x0006d812) main_mup3_pane_g4_ParamLimits

0xa81c,	// (0x0006d812) main_mup3_pane_g4

0xa85f,	// (0x0006d855) main_mup3_pane_g5_ParamLimits

0xa85f,	// (0x0006d855) main_mup3_pane_g5

0xa8a2,	// (0x0006d898) main_mup3_pane_g6_ParamLimits

0xa8a2,	// (0x0006d898) main_mup3_pane_g6

0x07d4,	// (0x000637ca) main_mup3_pane_g7_ParamLimits

0x07d4,	// (0x000637ca) main_mup3_pane_g7

0x0007,

0xf6f1,	// (0x000726e7) main_mup3_pane_g_ParamLimits

0xf6f1,	// (0x000726e7) main_mup3_pane_g

0xa918,	// (0x0006d90e) main_mup3_pane_t1_ParamLimits

0xa918,	// (0x0006d90e) main_mup3_pane_t1

0xa987,	// (0x0006d97d) main_mup3_pane_t2_ParamLimits

0xa987,	// (0x0006d97d) main_mup3_pane_t2

0xaa50,	// (0x0006da46) main_mup3_pane_t4_ParamLimits

0xaa50,	// (0x0006da46) main_mup3_pane_t4

0xaa9e,	// (0x0006da94) main_mup3_pane_t5_ParamLimits

0xaa9e,	// (0x0006da94) main_mup3_pane_t5

0xab4e,	// (0x0006db44) main_mup3_pane_t6_ParamLimits

0xab4e,	// (0x0006db44) main_mup3_pane_t6

0x0005,

0xf702,	// (0x000726f8) main_mup3_pane_t_ParamLimits

0xf702,	// (0x000726f8) main_mup3_pane_t

0xabfa,	// (0x0006dbf0) mup3_progress_pane_ParamLimits

0xabfa,	// (0x0006dbf0) mup3_progress_pane

0xac78,	// (0x0006dc6e) popup_mup3_control_window_ParamLimits

0xac78,	// (0x0006dc6e) popup_mup3_control_window

0x4f21,	// (0x00067f17) popup_mup3_text_window

0xac91,	// (0x0006dc87) mup3_progress_pane_t1

0xacb0,	// (0x0006dca6) mup3_progress_pane_t2

0x4f29,	// (0x00067f1f) mup3_progress_pane_t3

0x0002,

0xf70f,	// (0x00072705) mup3_progress_pane_t

0x4f46,	// (0x00067f3c) mup_progress_pane_cp03

0x0040,	// (0x00063036) bg_tb_trans_pane_cp04

0xaccf,	// (0x0006dcc5) mup3_volume_pane

0xacd7,	// (0x0006dccd) popup_mup3_control_window_g1

0xace0,	// (0x0006dcd6) mup3_volume_pane_g1

0xace9,	// (0x0006dcdf) mup3_volume_pane_g2

0xacf2,	// (0x0006dce8) mup3_volume_pane_g3

0x0002,

0xf716,	// (0x0007270c) mup3_volume_pane_g

0x0040,	// (0x00063036) bg_tb_trans_pane_cp03

0x4f56,	// (0x00067f4c) popup_mup3_text_window_g1

0x4f5e,	// (0x00067f54) popup_mup3_text_window_t1

0x08b4,	// (0x000638aa) list_calc_item_pane_g1_ParamLimits

0x49fd,	// (0x000679f3) mup_volume_pane_cp_g1

0xa64e,	// (0x0006d644) main_touch_calib_pane_t3

0xa664,	// (0x0006d65a) main_touch_calib_pane_t4

0xa67a,	// (0x0006d670) main_touch_calib_pane_t5

0x73a3,	// (0x0006a399) aid_cell_size_toolbar2

0x73ab,	// (0x0006a3a1) aid_popup3_width_pane

0x66ee,	// (0x000696e4) aid_zoom_text_msg_primary

0x7fb4,	// (0x0006afaa) vorec_t7

0x0878,	// (0x0006386e) bg_calc_paper_pane_g1_ParamLimits

0x0890,	// (0x00063886) bg_calc_paper_pane_g2_ParamLimits

0x0884,	// (0x0006387a) bg_calc_paper_pane_g3_ParamLimits

0x08a8,	// (0x0006389e) bg_calc_paper_pane_g4_ParamLimits

0x089c,	// (0x00063892) bg_calc_paper_pane_g5_ParamLimits

0x7905,	// (0x0006a8fb) bg_calc_paper_pane_g6_ParamLimits

0x7916,	// (0x0006a90c) bg_calc_paper_pane_g7_ParamLimits

0x7927,	// (0x0006a91d) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x000720ef) bg_calc_paper_pane_g_ParamLimits

0x7938,	// (0x0006a92e) calc_bg_paper_pane_g9_ParamLimits

0x07b8,	// (0x000637ae) image_qvga_pane_ParamLimits

0x07b8,	// (0x000637ae) image_qvga_pane

0x073d,	// (0x00063733) bg_popup_sub_pane_cp04_ParamLimits

0x1811,	// (0x00064807) popup_mup_playback_window_g1_ParamLimits

0x181d,	// (0x00064813) popup_mup_playback_window_t1_ParamLimits

0x1832,	// (0x00064828) popup_mup_playback_window_t2_ParamLimits

0xf45c,	// (0x00072452) popup_mup_playback_window_t_ParamLimits

0x07c6,	// (0x000637bc) main_mup2_pane_g3_ParamLimits

0x07c6,	// (0x000637bc) main_mup2_pane_g3

0x8299,	// (0x0006b28f) popup_toolbar_window_cp04

0x1c14,	// (0x00064c0a) popup_call2_audio_second_window_g3_ParamLimits

0x1c14,	// (0x00064c0a) popup_call2_audio_second_window_g3

0x202c,	// (0x00065022) popup_call2_audio_first_window_g4_ParamLimits

0x202c,	// (0x00065022) popup_call2_audio_first_window_g4

0x2653,	// (0x00065649) popup_call2_audio_in_window_g4_ParamLimits

0x2653,	// (0x00065649) popup_call2_audio_in_window_g4

0x9b07,	// (0x0006cafd) aid_area_sk_bg_cut_ParamLimits

0x9b07,	// (0x0006cafd) aid_area_sk_bg_cut

0x1847,	// (0x0006483d) aid_area_sk_bg_cut_2_ParamLimits

0x1847,	// (0x0006483d) aid_area_sk_bg_cut_2

0x0040,	// (0x00063036) aid_placing_details_win

0x0040,	// (0x00063036) aid_placing_details_win_2

0x07c6,	// (0x000637bc) camera2_autofocus_pane_g1_ParamLimits

0x75f9,	// (0x0006a5ef) popup_fixed_preview_cale_window_ParamLimits

0x75f9,	// (0x0006a5ef) popup_fixed_preview_cale_window

0x15c7,	// (0x000645bd) navi_slider_pane_g3

0x15be,	// (0x000645b4) navi_slider_pane_g4

0x15b5,	// (0x000645ab) navi_slider_pane_g5

0x15c7,	// (0x000645bd) navi_slider_pane_g6

0x9683,	// (0x0006c679) navi_slider_pane_g7

0x1712,	// (0x00064708) mup_scale_pane_g3

0x171b,	// (0x00064711) mup_scale_pane_g4

0x1724,	// (0x0006471a) mup_scale_pane_g5

0x9884,	// (0x0006c87a) mup_scale_pane_g6

0x988d,	// (0x0006c883) mup_scale_pane_g7

0x0adf,	// (0x00063ad5) cams2_slider_pane_g3

0x0adf,	// (0x00063ad5) cams2_slider_pane_g4

0x0adf,	// (0x00063ad5) cams2_slider_pane_g5

0x0adf,	// (0x00063ad5) cams2_slider_pane_g6

0x0adf,	// (0x00063ad5) cams2_slider_pane_g7

0x0adf,	// (0x00063ad5) camera2_autofocus_pane_cp_g1

0x2929,	// (0x0006591f) bg_popup_preview_window_pane_cp02_ParamLimits

0x2929,	// (0x0006591f) bg_popup_preview_window_pane_cp02

0x4f6c,	// (0x00067f62) list_fp_cale_pane_ParamLimits

0x4f6c,	// (0x00067f62) list_fp_cale_pane

0x4f78,	// (0x00067f6e) popup_fixed_preview_cale_window_t1_ParamLimits

0x4f78,	// (0x00067f6e) popup_fixed_preview_cale_window_t1

0xacfb,	// (0x0006dcf1) popup_fixed_preview_cale_window_t2_ParamLimits

0xacfb,	// (0x0006dcf1) popup_fixed_preview_cale_window_t2

0xad10,	// (0x0006dd06) popup_fixed_preview_cale_window_t3_ParamLimits

0xad10,	// (0x0006dd06) popup_fixed_preview_cale_window_t3

0x0002,

0xf71d,	// (0x00072713) popup_fixed_preview_cale_window_t_ParamLimits

0xf71d,	// (0x00072713) popup_fixed_preview_cale_window_t

0xad25,	// (0x0006dd1b) list_single_fp_cale_pane_ParamLimits

0xad25,	// (0x0006dd1b) list_single_fp_cale_pane

0x4f96,	// (0x00067f8c) list_single_fp_cale_pane_g1_ParamLimits

0x4f96,	// (0x00067f8c) list_single_fp_cale_pane_g1

0x4fa2,	// (0x00067f98) list_single_fp_cale_pane_g2_ParamLimits

0x4fa2,	// (0x00067f98) list_single_fp_cale_pane_g2

0x0002,

0xf724,	// (0x0007271a) list_single_fp_cale_pane_g_ParamLimits

0xf724,	// (0x0007271a) list_single_fp_cale_pane_g

0x4fbb,	// (0x00067fb1) list_single_fp_cale_pane_t1_ParamLimits

0x4fbb,	// (0x00067fb1) list_single_fp_cale_pane_t1

0x4fcd,	// (0x00067fc3) list_single_fp_cale_pane_t2_ParamLimits

0x4fcd,	// (0x00067fc3) list_single_fp_cale_pane_t2

0x0001,

0xf72b,	// (0x00072721) list_single_fp_cale_pane_t_ParamLimits

0xf72b,	// (0x00072721) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0040,	// (0x00063036) main_dialer_pane

0x0040,	// (0x00063036) aid_cell_size_keypad

0x0040,	// (0x00063036) dialer_ne_pane

0x0040,	// (0x00063036) grid_dialer_command_1_pane

0x0040,	// (0x00063036) grid_dialer_command_2_pane

0x0040,	// (0x00063036) grid_dialer_keypad_pane

0x4987,	// (0x0006797d) bg_popup_call_pane_cp06_ParamLimits

0x4987,	// (0x0006797d) bg_popup_call_pane_cp06

0x4987,	// (0x0006797d) dialer_ne_clear_pane_ParamLimits

0x4987,	// (0x0006797d) dialer_ne_clear_pane

0x0adf,	// (0x00063ad5) dialer_ne_pane_g1

0x168e,	// (0x00064684) dialer_ne_pane_t1_ParamLimits

0x168e,	// (0x00064684) dialer_ne_pane_t1

0x50f5,	// (0x000680eb) dialer_ne_pane_t2_ParamLimits

0x50f5,	// (0x000680eb) dialer_ne_pane_t2

0xad38,	// (0x0006dd2e) dialer_ne_pane_t3_ParamLimits

0xad38,	// (0x0006dd2e) dialer_ne_pane_t3

0x0002,

0xf730,	// (0x00072726) dialer_ne_pane_t_ParamLimits

0xf730,	// (0x00072726) dialer_ne_pane_t

0xad38,	// (0x0006dd2e) dialer_ne_pane_t3_copy1_ParamLimits

0xad38,	// (0x0006dd2e) dialer_ne_pane_t3_copy1

0x5000,	// (0x00067ff6) cell_dialer_keypad_pane_ParamLimits

0x5000,	// (0x00067ff6) cell_dialer_keypad_pane

0x075f,	// (0x00063755) cell_dialer_command_1_pane_ParamLimits

0x075f,	// (0x00063755) cell_dialer_command_1_pane

0x5017,	// (0x0006800d) cell_dialer_command_2_pane_ParamLimits

0x5017,	// (0x0006800d) cell_dialer_command_2_pane

0x075f,	// (0x00063755) bg_button_pane_cp02_ParamLimits

0x075f,	// (0x00063755) bg_button_pane_cp02

0x07c6,	// (0x000637bc) cell_dialer_keypad_pane_g1_ParamLimits

0x07c6,	// (0x000637bc) cell_dialer_keypad_pane_g1

0x075f,	// (0x00063755) bg_button_pane_cp03_ParamLimits

0x075f,	// (0x00063755) bg_button_pane_cp03

0x07c6,	// (0x000637bc) cell_dialer_command_1_pane_g1_ParamLimits

0x07c6,	// (0x000637bc) cell_dialer_command_1_pane_g1

0x0040,	// (0x00063036) bg_button_pane_cp04

0x0adf,	// (0x00063ad5) cell_dialer_command_2_pane_g1

0x0040,	// (0x00063036) bg_button_pane_cp06

0x0adf,	// (0x00063ad5) dialer_ne_clear_pane_g1

0x147f,	// (0x00064475) navi_pane_g2

0x14ad,	// (0x000644a3) navi_pane_g3

0x0002,

0xf35f,	// (0x00072355) navi_pane_g

0x153c,	// (0x00064532) navi_pane_mv_g2

0x1563,	// (0x00064559) navi_pane_mv_g5

0x964e,	// (0x0006c644) navi_pane_mv_t1

0x085a,	// (0x00063850) main_clock2_pane

0x07b8,	// (0x000637ae) main_clock2_list_pane_ParamLimits

0x07b8,	// (0x000637ae) main_clock2_list_pane

0xadae,	// (0x0006dda4) main_clock2_pane_t1_ParamLimits

0xadae,	// (0x0006dda4) main_clock2_pane_t1

0xaddc,	// (0x0006ddd2) main_clock2_pane_t2_ParamLimits

0xaddc,	// (0x0006ddd2) main_clock2_pane_t2

0x0004,

0xf73c,	// (0x00072732) main_clock2_pane_t_ParamLimits

0xf73c,	// (0x00072732) main_clock2_pane_t

0xae41,	// (0x0006de37) popup_clock_analogue_window_cp03_ParamLimits

0xae41,	// (0x0006de37) popup_clock_analogue_window_cp03

0xae5f,	// (0x0006de55) popup_clock_digital_window_cp02_ParamLimits

0xae5f,	// (0x0006de55) popup_clock_digital_window_cp02

0xaed4,	// (0x0006deca) main_clock2_list_single_pane_ParamLimits

0xaed4,	// (0x0006deca) main_clock2_list_single_pane

0x0a9f,	// (0x00063a95) list_highlight_pane_cp05

0x505e,	// (0x00068054) main_clock2_list_single_pane_t1

0x8299,	// (0x0006b28f) popup_toolbar_window_cp04_ParamLimits

0x07d4,	// (0x000637ca) camera2_autofocus_pane_g2_ParamLimits

0x07d4,	// (0x000637ca) camera2_autofocus_pane_g2

0x07d4,	// (0x000637ca) camera2_autofocus_pane_g3_ParamLimits

0x07d4,	// (0x000637ca) camera2_autofocus_pane_g3

0x07d4,	// (0x000637ca) camera2_autofocus_pane_g4_ParamLimits

0x07d4,	// (0x000637ca) camera2_autofocus_pane_g4

0x07d4,	// (0x000637ca) camera2_autofocus_pane_g5_ParamLimits

0x07d4,	// (0x000637ca) camera2_autofocus_pane_g5

0x0004,

0xf680,	// (0x00072676) camera2_autofocus_pane_g_ParamLimits

0xf680,	// (0x00072676) camera2_autofocus_pane_g

0xa701,	// (0x0006d6f7) camera2_autofocus_pane_cp_g2

0xa709,	// (0x0006d6ff) camera2_autofocus_pane_cp_g3

0xa711,	// (0x0006d707) camera2_autofocus_pane_cp_g4

0xa719,	// (0x0006d70f) camera2_autofocus_pane_cp_g5

0x0004,

0xf6e6,	// (0x000726dc) camera2_autofocus_pane_cp_g

0x0040,	// (0x00063036) popup_dialer_spcha_window

0x0040,	// (0x00063036) bg_popup_sub_pane_cp07

0x0040,	// (0x00063036) list_spcha_pane

0x506c,	// (0x00068062) list_single_spcha_pane_ParamLimits

0x506c,	// (0x00068062) list_single_spcha_pane

0x0040,	// (0x00063036) list_highlight_pane_cp06

0x1041,	// (0x00064037) list_single_spcha_pane_t1

0x23fd,	// (0x000653f3) popup_call2_audio_out_window_g4_ParamLimits

0x23fd,	// (0x000653f3) popup_call2_audio_out_window_g4

0x0040,	// (0x00063036) main_imed2_pane

0xa187,	// (0x0006d17d) popup_imed_adjust2_window

0xa19a,	// (0x0006d190) popup_imed_trans_window_ParamLimits

0xa19a,	// (0x0006d190) popup_imed_trans_window

0x4adc,	// (0x00067ad2) popup_blid_sat_info2_window_t1

0x4aea,	// (0x00067ae0) popup_blid_sat_info2_window_t2

0x000a,

0xf615,	// (0x0007260b) popup_blid_sat_info2_window_t

0xaf89,	// (0x0006df7f) aid_size_cell_colour_35

0xafa3,	// (0x0006df99) aid_size_cell_colour_112

0xafba,	// (0x0006dfb0) aid_size_cell_effect

0x075f,	// (0x00063755) bg_tb_trans_pane_cp02

0x1002,	// (0x00063ff8) heading_imed_pane

0xafd4,	// (0x0006dfca) listscroll_imed_pane

0x507e,	// (0x00068074) heading_imed_pane_g1

0x5086,	// (0x0006807c) heading_imed_pane_t1

0x5094,	// (0x0006808a) grid_imed_colour_35_pane_ParamLimits

0x5094,	// (0x0006808a) grid_imed_colour_35_pane

0xafe0,	// (0x0006dfd6) grid_imed_effect_pane

0x50ab,	// (0x000680a1) list_imed_aspect_pane

0xaff0,	// (0x0006dfe6) scroll_pane_cp027_ParamLimits

0xaff0,	// (0x0006dfe6) scroll_pane_cp027

0xaffc,	// (0x0006dff2) cell_imed_effect_pane_ParamLimits

0xaffc,	// (0x0006dff2) cell_imed_effect_pane

0x50b3,	// (0x000680a9) cell_imed_colour_pane_ParamLimits

0x50b3,	// (0x000680a9) cell_imed_colour_pane

0x5112,	// (0x00068108) cell_imed_colour_pane_g1_ParamLimits

0x5112,	// (0x00068108) cell_imed_colour_pane_g1

0x5123,	// (0x00068119) hgihlgiht_grid_pane_cp016_ParamLimits

0x5123,	// (0x00068119) hgihlgiht_grid_pane_cp016

0xb014,	// (0x0006e00a) cell_imed_effect_pane_g1

0xb01c,	// (0x0006e012) grid_highlight_pane_cp017

0x5134,	// (0x0006812a) list_imed_single_pane_ParamLimits

0x5134,	// (0x0006812a) list_imed_single_pane

0x0040,	// (0x00063036) list_highlight_pane_cp07

0x5149,	// (0x0006813f) list_imed_aspect_pane_comp1_t1

0x16a2,	// (0x00064698) bg_tb_trans_pane_cp05

0x516b,	// (0x00068161) popup_imed_adjust2_window_g1

0x5192,	// (0x00068188) popup_imed_adjust2_window_t1

0x51aa,	// (0x000681a0) slider_imed_adjust_pane

0x51be,	// (0x000681b4) slider_imed_adjust_pane_g1

0x51ce,	// (0x000681c4) slider_imed_adjust_pane_g2

0x51de,	// (0x000681d4) slider_imed_adjust_pane_g3

0x51ef,	// (0x000681e5) slider_imed_adjust_pane_g4

0x0003,

0xf759,	// (0x0007274f) slider_imed_adjust_pane_g

0xb025,	// (0x0006e01b) aid_size_cell_clipart2

0xb031,	// (0x0006e027) grid_imed_clipart_pane

0x5200,	// (0x000681f6) scroll_pane_cp031

0xb03b,	// (0x0006e031) cell_imed_clipart_pane_ParamLimits

0xb03b,	// (0x0006e031) cell_imed_clipart_pane

0xb05d,	// (0x0006e053) cell_imed_clipart_pane_g1

0x0040,	// (0x00063036) grid_highlight_pane_cp014

0xad90,	// (0x0006dd86) main_clock2_pane_g1_ParamLimits

0xad90,	// (0x0006dd86) main_clock2_pane_g1

0xae7b,	// (0x0006de71) aid_call2_pane_cp10

0xae8d,	// (0x0006de83) aid_call_pane_cp10

0x13e0,	// (0x000643d6) popup_clock_analogue_window_cp10_g1

0x13e0,	// (0x000643d6) popup_clock_analogue_window_cp10_g2

0xae9f,	// (0x0006de95) popup_clock_analogue_window_cp10_g3

0xae9f,	// (0x0006de95) popup_clock_analogue_window_cp10_g4

0x13e0,	// (0x000643d6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf747,	// (0x0007273d) popup_clock_analogue_window_cp10_g

0xaeb5,	// (0x0006deab) popup_clock_analogue_window_cp10_t1

0xaee6,	// (0x0006dedc) clock_digital_number_pane_cp10_ParamLimits

0xaee6,	// (0x0006dedc) clock_digital_number_pane_cp10

0xaf00,	// (0x0006def6) clock_digital_number_pane_cp11_ParamLimits

0xaf00,	// (0x0006def6) clock_digital_number_pane_cp11

0xaf1a,	// (0x0006df10) clock_digital_number_pane_cp12_ParamLimits

0xaf1a,	// (0x0006df10) clock_digital_number_pane_cp12

0xaf34,	// (0x0006df2a) clock_digital_number_pane_cp13_ParamLimits

0xaf34,	// (0x0006df2a) clock_digital_number_pane_cp13

0xaf4e,	// (0x0006df44) clock_digital_separator_pane_cp10_ParamLimits

0xaf4e,	// (0x0006df44) clock_digital_separator_pane_cp10

0xaf68,	// (0x0006df5e) popup_clock_digital_window_cp02_t1_ParamLimits

0xaf68,	// (0x0006df5e) popup_clock_digital_window_cp02_t1

0x0735,	// (0x0006372b) clock_digital_number_pane_cp10_g1

0x0735,	// (0x0006372b) clock_digital_number_pane_cp10_g2

0x0001,

0xf762,	// (0x00072758) clock_digital_number_pane_cp10_g

0x0735,	// (0x0006372b) clock_digital_separator_pane_cp10_g1

0x0735,	// (0x0006372b) clock_digital_separator_pane_g2_cp10

0x156b,	// (0x00064561) navi_pane_vded_g4

0x1574,	// (0x0006456a) navi_pane_vded_g5

0x157d,	// (0x00064573) navi_pane_vded_t1

0x0040,	// (0x00063036) main_vded_pane

0xb066,	// (0x0006e05c) main_vded_pane_g1

0xb072,	// (0x0006e068) main_vded_pane_g2

0xb07c,	// (0x0006e072) main_vded_pane_g3

0x0002,

0xf767,	// (0x0007275d) main_vded_pane_g

0xb086,	// (0x0006e07c) main_vded_pane_t1

0xb094,	// (0x0006e08a) main_vded_pane_t2

0x0001,

0xf76e,	// (0x00072764) main_vded_pane_t

0xb0a2,	// (0x0006e098) vded_slider_pane

0xb0ac,	// (0x0006e0a2) vded_video_pane

0x5208,	// (0x000681fe) vded_video_pane_g1

0xb0b6,	// (0x0006e0ac) vded_video_pane_g2

0x0adf,	// (0x00063ad5) vded_video_pane_g3

0x0002,

0xf773,	// (0x00072769) vded_video_pane_g

0x5212,	// (0x00068208) vded_slider_pane_g1

0x49fd,	// (0x000679f3) vded_slider_pane_g2

0x521b,	// (0x00068211) vded_slider_pane_g3

0x5224,	// (0x0006821a) vded_slider_pane_g4

0x522d,	// (0x00068223) vded_slider_pane_g5

0x0004,

0xf77a,	// (0x00072770) vded_slider_pane_g

0xac6a,	// (0x0006dc60) mup3_rocker_pane_ParamLimits

0xac6a,	// (0x0006dc60) mup3_rocker_pane

0xb0bf,	// (0x0006e0b5) mup3_control_keys_pane_g1

0xb0c7,	// (0x0006e0bd) mup3_control_keys_pane_g2

0xb0cf,	// (0x0006e0c5) mup3_control_keys_pane_g3

0xb0d7,	// (0x0006e0cd) mup3_control_keys_pane_g4

0x0003,

0xf785,	// (0x0007277b) mup3_control_keys_pane_g

0x7621,	// (0x0006a617) popup_toolbar2_fixed_window_cp01_ParamLimits

0x7621,	// (0x0006a617) popup_toolbar2_fixed_window_cp01

0xac84,	// (0x0006dc7a) popup_toolbar2_fixed_window_cp02_ParamLimits

0xac84,	// (0x0006dc7a) popup_toolbar2_fixed_window_cp02

0x1d86,	// (0x00064d7c) popup_call2_audio_second_window_t4_ParamLimits

0x1d86,	// (0x00064d7c) popup_call2_audio_second_window_t4

0x22c2,	// (0x000652b8) popup_call2_audio_first_window_t6_ParamLimits

0x22c2,	// (0x000652b8) popup_call2_audio_first_window_t6

0x2500,	// (0x000654f6) popup_call2_audio_out_window_t6_ParamLimits

0x2500,	// (0x000654f6) popup_call2_audio_out_window_t6

0x0040,	// (0x00063036) main_vitu_pane

0x07b8,	// (0x000637ae) aid_size_cell_itu_ParamLimits

0x07b8,	// (0x000637ae) aid_size_cell_itu

0x07b8,	// (0x000637ae) bg_popup_window_pane_cp08_ParamLimits

0x07b8,	// (0x000637ae) bg_popup_window_pane_cp08

0x07b8,	// (0x000637ae) field_vitu_entry_pane_ParamLimits

0x07b8,	// (0x000637ae) field_vitu_entry_pane

0x07b8,	// (0x000637ae) grid_vitu_function_pane_ParamLimits

0x07b8,	// (0x000637ae) grid_vitu_function_pane

0x07b8,	// (0x000637ae) grid_vitu_itu_pane_ParamLimits

0x07b8,	// (0x000637ae) grid_vitu_itu_pane

0x07b8,	// (0x000637ae) cell_vitu_itu_pane_ParamLimits

0x07b8,	// (0x000637ae) cell_vitu_itu_pane

0x07b8,	// (0x000637ae) cell_vitu_function_pane_ParamLimits

0x07b8,	// (0x000637ae) cell_vitu_function_pane

0x075f,	// (0x00063755) bg_popup_sub_pane_cp08_ParamLimits

0x075f,	// (0x00063755) bg_popup_sub_pane_cp08

0x0ab1,	// (0x00063aa7) field_vitu_entry_pane_t1_ParamLimits

0x0ab1,	// (0x00063aa7) field_vitu_entry_pane_t1

0x50f5,	// (0x000680eb) field_vitu_entry_pane_t2_ParamLimits

0x50f5,	// (0x000680eb) field_vitu_entry_pane_t2

0x0001,

0xf78e,	// (0x00072784) field_vitu_entry_pane_t_ParamLimits

0xf78e,	// (0x00072784) field_vitu_entry_pane_t

0x4987,	// (0x0006797d) bg_button_pane_cp05_ParamLimits

0x4987,	// (0x0006797d) bg_button_pane_cp05

0x5236,	// (0x0006822c) cell_vitu_itu_pane_g1

0x167a,	// (0x00064670) cell_vitu_itu_pane_t1_ParamLimits

0x167a,	// (0x00064670) cell_vitu_itu_pane_t1

0x167a,	// (0x00064670) cell_vitu_itu_pane_t2_ParamLimits

0x167a,	// (0x00064670) cell_vitu_itu_pane_t2

0x0002,

0xf793,	// (0x00072789) cell_vitu_itu_pane_t_ParamLimits

0xf793,	// (0x00072789) cell_vitu_itu_pane_t

0x0040,	// (0x00063036) bg_button_pane_cp07

0x0adf,	// (0x00063ad5) cell_vitu_function_pane_g1

0x778b,	// (0x0006a781) main_calc_pane_g1

0x73df,	// (0x0006a3d5) aid_visual_content_pane

0x0040,	// (0x00063036) main_vradio_pane

0x07d4,	// (0x000637ca) main_vradio_pane_g1_ParamLimits

0x07d4,	// (0x000637ca) main_vradio_pane_g1

0x07d4,	// (0x000637ca) main_vradio_pane_g2_ParamLimits

0x07d4,	// (0x000637ca) main_vradio_pane_g2

0x0001,

0xf79a,	// (0x00072790) main_vradio_pane_g_ParamLimits

0xf79a,	// (0x00072790) main_vradio_pane_g

0x168e,	// (0x00064684) main_vradio_pane_t1_ParamLimits

0x168e,	// (0x00064684) main_vradio_pane_t1

0x168e,	// (0x00064684) main_vradio_pane_t2_ParamLimits

0x168e,	// (0x00064684) main_vradio_pane_t2

0x168e,	// (0x00064684) main_vradio_pane_t3_ParamLimits

0x168e,	// (0x00064684) main_vradio_pane_t3

0x0002,

0xf79f,	// (0x00072795) main_vradio_pane_t_ParamLimits

0xf79f,	// (0x00072795) main_vradio_pane_t

0x07b8,	// (0x000637ae) vradio_rocker_control_pane_ParamLimits

0x07b8,	// (0x000637ae) vradio_rocker_control_pane

0x07b8,	// (0x000637ae) vradio_station_info_pane_ParamLimits

0x07b8,	// (0x000637ae) vradio_station_info_pane

0x075f,	// (0x00063755) vradio_frequency_info_pane_ParamLimits

0x075f,	// (0x00063755) vradio_frequency_info_pane

0x0adf,	// (0x00063ad5) vradio_station_info_pane_g1

0x167a,	// (0x00064670) vradio_station_info_pane_t1_ParamLimits

0x167a,	// (0x00064670) vradio_station_info_pane_t1

0x168e,	// (0x00064684) vradio_station_info_pane_t2_ParamLimits

0x168e,	// (0x00064684) vradio_station_info_pane_t2

0x0001,

0xf7a6,	// (0x0007279c) vradio_station_info_pane_t_ParamLimits

0xf7a6,	// (0x0007279c) vradio_station_info_pane_t

0x0040,	// (0x00063036) vradio_tuning_pane

0xb0e7,	// (0x0006e0dd) vradio_rocker_control_pane_g1

0x5252,	// (0x00068248) vradio_rocker_control_pane_g2

0xb0ef,	// (0x0006e0e5) vradio_rocker_control_pane_g3

0xb0f7,	// (0x0006e0ed) vradio_rocker_control_pane_g4

0xb0ff,	// (0x0006e0f5) vradio_rocker_control_pane_g5

0x0004,

0xf7ab,	// (0x000727a1) vradio_rocker_control_pane_g

0x0adf,	// (0x00063ad5) vradio_frequency_info_pane_g1

0x0ab1,	// (0x00063aa7) vradio_frequency_info_pane_t1_ParamLimits

0x0ab1,	// (0x00063aa7) vradio_frequency_info_pane_t1

0xb107,	// (0x0006e0fd) vradio_tuning_pane_g1

0xb114,	// (0x0006e10a) vradio_tuning_pane_t1

0x7428,	// (0x0006a41e) area_side_right_pane_ParamLimits

0x7428,	// (0x0006a41e) area_side_right_pane

0x28f0,	// (0x000658e6) status_small_pane_g1

0x28f8,	// (0x000658ee) status_small_pane_g2

0x2901,	// (0x000658f7) status_small_pane_g3

0x290a,	// (0x00065900) status_small_pane_g4

0x0003,

0xf577,	// (0x0007256d) status_small_pane_g

0x2913,	// (0x00065909) status_small_pane_t1

0x0040,	// (0x00063036) main_video3_pane

0x525a,	// (0x00068250) cams_zoom_vslider_pane

0x5262,	// (0x00068258) image3_wide_pane_ParamLimits

0x5262,	// (0x00068258) image3_wide_pane

0x527c,	// (0x00068272) image3_wide_small_pane

0x5288,	// (0x0006827e) main_video3_pane_g1_ParamLimits

0x5288,	// (0x0006827e) main_video3_pane_g1

0x52a4,	// (0x0006829a) main_video3_pane_g2_ParamLimits

0x52a4,	// (0x0006829a) main_video3_pane_g2

0x0001,

0xf7b6,	// (0x000727ac) main_video3_pane_g_ParamLimits

0xf7b6,	// (0x000727ac) main_video3_pane_g

0x52c0,	// (0x000682b6) main_video3_pane_t1_ParamLimits

0x52c0,	// (0x000682b6) main_video3_pane_t1

0x52eb,	// (0x000682e1) main_video3_pane_t2_ParamLimits

0x52eb,	// (0x000682e1) main_video3_pane_t2

0x5316,	// (0x0006830c) main_video3_pane_t3_ParamLimits

0x5316,	// (0x0006830c) main_video3_pane_t3

0x0002,

0xf7bb,	// (0x000727b1) main_video3_pane_t_ParamLimits

0xf7bb,	// (0x000727b1) main_video3_pane_t

0x5343,	// (0x00068339) cams_zoom_vslider_pane_g1

0x534c,	// (0x00068342) cams_zoom_vslider_pane_g2

0x0001,

0xf7c2,	// (0x000727b8) cams_zoom_vslider_pane_g

0x5354,	// (0x0006834a) small_slider_vertical_pane

0x0adf,	// (0x00063ad5) small_slider_vertical_pane_g1

0x0adf,	// (0x00063ad5) small_slider_vertical_pane_g2

0x535c,	// (0x00068352) small_slider_vertical_pane_g3

0x0002,

0xf7c7,	// (0x000727bd) small_slider_vertical_pane_g

0x0040,	// (0x00063036) main_hwr_training_pane

0x5365,	// (0x0006835b) hwr_training_instruct_pane_ParamLimits

0x5365,	// (0x0006835b) hwr_training_instruct_pane

0xb123,	// (0x0006e119) hwr_training_navi_pane_ParamLimits

0xb123,	// (0x0006e119) hwr_training_navi_pane

0xb13d,	// (0x0006e133) hwr_training_write_pane_ParamLimits

0xb13d,	// (0x0006e133) hwr_training_write_pane

0x0040,	// (0x00063036) bg_frame_shadow_pane

0x539c,	// (0x00068392) hwr_training_write_pane_g1

0x53a4,	// (0x0006839a) hwr_training_write_pane_g2

0x53ac,	// (0x000683a2) hwr_training_write_pane_g3

0x53b4,	// (0x000683aa) hwr_training_write_pane_g4

0x53bc,	// (0x000683b2) hwr_training_write_pane_g5

0x53c4,	// (0x000683ba) hwr_training_write_pane_g6

0x53cc,	// (0x000683c2) hwr_training_write_pane_g7

0x0006,

0xf7ce,	// (0x000727c4) hwr_training_write_pane_g

0xb175,	// (0x0006e16b) hwr_training_navi_pane_g1_ParamLimits

0xb175,	// (0x0006e16b) hwr_training_navi_pane_g1

0xb187,	// (0x0006e17d) hwr_training_navi_pane_g2_ParamLimits

0xb187,	// (0x0006e17d) hwr_training_navi_pane_g2

0xb199,	// (0x0006e18f) hwr_training_navi_pane_g3_ParamLimits

0xb199,	// (0x0006e18f) hwr_training_navi_pane_g3

0xb1a9,	// (0x0006e19f) hwr_training_navi_pane_g4_ParamLimits

0xb1a9,	// (0x0006e19f) hwr_training_navi_pane_g4

0x0004,

0xf7dd,	// (0x000727d3) hwr_training_navi_pane_g_ParamLimits

0xf7dd,	// (0x000727d3) hwr_training_navi_pane_g

0xb1c3,	// (0x0006e1b9) hwr_training_navi_pane_t1

0xb1d1,	// (0x0006e1c7) list_single_hwr_training_instruct_pane_ParamLimits

0xb1d1,	// (0x0006e1c7) list_single_hwr_training_instruct_pane

0x53d4,	// (0x000683ca) list_single_hwr_training_instruct_pane_t1

0x4bdd,	// (0x00067bd3) bg_frame_shadow_pane_g1

0x53e3,	// (0x000683d9) bg_frame_shadow_pane_g2

0x53eb,	// (0x000683e1) bg_frame_shadow_pane_g3

0x53f3,	// (0x000683e9) bg_frame_shadow_pane_g4

0x53fb,	// (0x000683f1) bg_frame_shadow_pane_g5

0x5403,	// (0x000683f9) bg_frame_shadow_pane_g6

0x540b,	// (0x00068401) bg_frame_shadow_pane_g7

0x0936,	// (0x0006392c) bg_frame_shadow_pane_g8

0x0007,

0xf7e8,	// (0x000727de) bg_frame_shadow_pane_g

0x0040,	// (0x00063036) main_video_tele_dialer_pane

0xb1f6,	// (0x0006e1ec) aid_size_cell_video_keypad_ParamLimits

0xb1f6,	// (0x0006e1ec) aid_size_cell_video_keypad

0xb206,	// (0x0006e1fc) grid_video_dialer_keypad_pane_ParamLimits

0xb206,	// (0x0006e1fc) grid_video_dialer_keypad_pane

0xb23a,	// (0x0006e230) video_down_pane_cp_ParamLimits

0xb23a,	// (0x0006e230) video_down_pane_cp

0xb264,	// (0x0006e25a) cell_video_dialer_keypad_pane_ParamLimits

0xb264,	// (0x0006e25a) cell_video_dialer_keypad_pane

0x5413,	// (0x00068409) bg_button_pane_cp08_ParamLimits

0x5413,	// (0x00068409) bg_button_pane_cp08

0xb279,	// (0x0006e26f) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb279,	// (0x0006e26f) cell_video_dialer_keypad_pane_g1

0xac5e,	// (0x0006dc54) mup3_rocker2_pane_ParamLimits

0xac5e,	// (0x0006dc54) mup3_rocker2_pane

0x0adf,	// (0x00063ad5) mup3_rocker2_pane_g1

0xa0f7,	// (0x0006d0ed) main_dialer2_pane

0x0040,	// (0x00063036) main_mp4_pane

0xb2ce,	// (0x0006e2c4) main_mp4_pane_g1_ParamLimits

0xb2ce,	// (0x0006e2c4) main_mp4_pane_g1

0xb2dc,	// (0x0006e2d2) main_mp4_pane_g2_ParamLimits

0xb2dc,	// (0x0006e2d2) main_mp4_pane_g2

0xb2ea,	// (0x0006e2e0) main_mp4_pane_g3_ParamLimits

0xb2ea,	// (0x0006e2e0) main_mp4_pane_g3

0xb32f,	// (0x0006e325) main_mp4_pane_g4_ParamLimits

0xb32f,	// (0x0006e325) main_mp4_pane_g4

0xb35d,	// (0x0006e353) main_mp4_pane_g5_ParamLimits

0xb35d,	// (0x0006e353) main_mp4_pane_g5

0x0007,

0xf808,	// (0x000727fe) main_mp4_pane_g_ParamLimits

0xf808,	// (0x000727fe) main_mp4_pane_g

0xb3d1,	// (0x0006e3c7) main_mp4_pane_t1_ParamLimits

0xb3d1,	// (0x0006e3c7) main_mp4_pane_t1

0xb42d,	// (0x0006e423) main_mp4_pane_t2_ParamLimits

0xb42d,	// (0x0006e423) main_mp4_pane_t2

0x541f,	// (0x00068415) main_mp4_pane_t3_ParamLimits

0x541f,	// (0x00068415) main_mp4_pane_t3

0xb47f,	// (0x0006e475) main_mp4_pane_t4_ParamLimits

0xb47f,	// (0x0006e475) main_mp4_pane_t4

0x0003,

0xf819,	// (0x0007280f) main_mp4_pane_t_ParamLimits

0xf819,	// (0x0007280f) main_mp4_pane_t

0xb4c3,	// (0x0006e4b9) mp4_progress_pane_ParamLimits

0xb4c3,	// (0x0006e4b9) mp4_progress_pane

0xb50d,	// (0x0006e503) mp4_rocker_pane_ParamLimits

0xb50d,	// (0x0006e503) mp4_rocker_pane

0x544d,	// (0x00068443) mp4_progress_pane_t1

0x5466,	// (0x0006845c) mp4_progress_pane_t2

0x0001,

0xf822,	// (0x00072818) mp4_progress_pane_t

0x547f,	// (0x00068475) mup_progress_pane_cp04

0x0adf,	// (0x00063ad5) mp4_rocker_pane_g1

0xb52d,	// (0x0006e523) aid_cell_size_keypad2_ParamLimits

0xb52d,	// (0x0006e523) aid_cell_size_keypad2

0xb53d,	// (0x0006e533) dialer2_ne_pane_ParamLimits

0xb53d,	// (0x0006e533) dialer2_ne_pane

0xb54b,	// (0x0006e541) grid_dialer2_keypad_pane_ParamLimits

0xb54b,	// (0x0006e541) grid_dialer2_keypad_pane

0xee04,	// (0x00071dfa) bg_popup_call_pane_cp07_ParamLimits

0xee04,	// (0x00071dfa) bg_popup_call_pane_cp07

0xb55b,	// (0x0006e551) dialer2_ne_pane_t1_ParamLimits

0xb55b,	// (0x0006e551) dialer2_ne_pane_t1

0xb580,	// (0x0006e576) cell_dialer2_keypad_pane_ParamLimits

0xb580,	// (0x0006e576) cell_dialer2_keypad_pane

0x54a4,	// (0x0006849a) bg_button_pane_pane_cp04_ParamLimits

0x54a4,	// (0x0006849a) bg_button_pane_pane_cp04

0xb595,	// (0x0006e58b) cell_dialer2_keypad_pane_g1_ParamLimits

0xb595,	// (0x0006e58b) cell_dialer2_keypad_pane_g1

0x815b,	// (0x0006b151) aid_placing_vt_set_content_ParamLimits

0x815b,	// (0x0006b151) aid_placing_vt_set_content

0x8187,	// (0x0006b17d) aid_placing_vt_set_title_ParamLimits

0x8187,	// (0x0006b17d) aid_placing_vt_set_title

0x0040,	// (0x00063036) main_image3_pane

0xb62f,	// (0x0006e625) area_side_right_pane_cp01_ParamLimits

0xb62f,	// (0x0006e625) area_side_right_pane_cp01

0x07e2,	// (0x000637d8) main_image3_pane_g1_ParamLimits

0x07e2,	// (0x000637d8) main_image3_pane_g1

0xb65c,	// (0x0006e652) main_image3_pane_g2_ParamLimits

0xb65c,	// (0x0006e652) main_image3_pane_g2

0xb675,	// (0x0006e66b) main_image3_pane_g3_ParamLimits

0xb675,	// (0x0006e66b) main_image3_pane_g3

0xb68e,	// (0x0006e684) main_image3_pane_g4_ParamLimits

0xb68e,	// (0x0006e684) main_image3_pane_g4

0x0003,

0xf831,	// (0x00072827) main_image3_pane_g_ParamLimits

0xf831,	// (0x00072827) main_image3_pane_g

0xb6a7,	// (0x0006e69d) main_image3_pane_t1_ParamLimits

0xb6a7,	// (0x0006e69d) main_image3_pane_t1

0xb6cc,	// (0x0006e6c2) main_image3_pane_t2_ParamLimits

0xb6cc,	// (0x0006e6c2) main_image3_pane_t2

0xb6eb,	// (0x0006e6e1) main_image3_pane_t3_ParamLimits

0xb6eb,	// (0x0006e6e1) main_image3_pane_t3

0x0003,

0xf83a,	// (0x00072830) main_image3_pane_t_ParamLimits

0xf83a,	// (0x00072830) main_image3_pane_t

0x07b8,	// (0x000637ae) grid_sctrl_middle_pane_cp01_ParamLimits

0x07b8,	// (0x000637ae) grid_sctrl_middle_pane_cp01

0xb74c,	// (0x0006e742) cell_sctrl_middle_pane_cp01_ParamLimits

0xb74c,	// (0x0006e742) cell_sctrl_middle_pane_cp01

0xb75d,	// (0x0006e753) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb75d,	// (0x0006e753) cell_sctrl_middle_pane_cp01_g1

0x0040,	// (0x00063036) main_call4_pane

0xb76a,	// (0x0006e760) aid_size_button_call4_ParamLimits

0xb76a,	// (0x0006e760) aid_size_button_call4

0xb7a0,	// (0x0006e796) call4_windows_pane_ParamLimits

0xb7a0,	// (0x0006e796) call4_windows_pane

0xb7b5,	// (0x0006e7ab) grid_call4_button_pane_ParamLimits

0xb7b5,	// (0x0006e7ab) grid_call4_button_pane

0xb7e3,	// (0x0006e7d9) call4_windows_conf_pane

0xb7fa,	// (0x0006e7f0) popup_call4_audio_first_window_ParamLimits

0xb7fa,	// (0x0006e7f0) popup_call4_audio_first_window

0xb84a,	// (0x0006e840) popup_call4_audio_second_window_ParamLimits

0xb84a,	// (0x0006e840) popup_call4_audio_second_window

0xb863,	// (0x0006e859) popup_call4_audio_wait_window_ParamLimits

0xb863,	// (0x0006e859) popup_call4_audio_wait_window

0xb871,	// (0x0006e867) cell_call4_button_pane_ParamLimits

0xb871,	// (0x0006e867) cell_call4_button_pane

0xb894,	// (0x0006e88a) bg_button_pane_cp09_ParamLimits

0xb894,	// (0x0006e88a) bg_button_pane_cp09

0xb8a0,	// (0x0006e896) cell_call4_button_pane_g1_ParamLimits

0xb8a0,	// (0x0006e896) cell_call4_button_pane_g1

0xb8ad,	// (0x0006e8a3) cell_call4_button_pane_t1_ParamLimits

0xb8ad,	// (0x0006e8a3) cell_call4_button_pane_t1

0x54b8,	// (0x000684ae) popup_call4_audio_conf_window_ParamLimits

0x54b8,	// (0x000684ae) popup_call4_audio_conf_window

0xac91,	// (0x0006dc87) mup3_progress_pane_t1_ParamLimits

0xacb0,	// (0x0006dca6) mup3_progress_pane_t2_ParamLimits

0x4f29,	// (0x00067f1f) mup3_progress_pane_t3_ParamLimits

0xf70f,	// (0x00072705) mup3_progress_pane_t_ParamLimits

0x4f46,	// (0x00067f3c) mup_progress_pane_cp03_ParamLimits

0xb0df,	// (0x0006e0d5) mup3_control_keys_pane_g4_copy1

0xb4f1,	// (0x0006e4e7) mp4_rocker2_pane_ParamLimits

0xb4f1,	// (0x0006e4e7) mp4_rocker2_pane

0x54d4,	// (0x000684ca) mp4_rocker2_pane_g1

0x54cc,	// (0x000684c2) mp4_rocker2_pane_g2

0xb8f1,	// (0x0006e8e7) mp4_rocker2_pane_g3

0xb8f9,	// (0x0006e8ef) mp4_rocker2_pane_g4

0xb901,	// (0x0006e8f7) mp4_rocker2_pane_g5

0x0004,

0xf843,	// (0x00072839) mp4_rocker2_pane_g

0x0040,	// (0x00063036) main_camera4_pane

0x0040,	// (0x00063036) main_video4_pane

0xb216,	// (0x0006e20c) main_video_tele_dialer_pane_t1_ParamLimits

0xb216,	// (0x0006e20c) main_video_tele_dialer_pane_t1

0xb228,	// (0x0006e21e) main_video_tele_dialer_pane_t2_ParamLimits

0xb228,	// (0x0006e21e) main_video_tele_dialer_pane_t2

0x0001,

0xf7f9,	// (0x000727ef) main_video_tele_dialer_pane_t_ParamLimits

0xf7f9,	// (0x000727ef) main_video_tele_dialer_pane_t

0xb921,	// (0x0006e917) cam4_autofocus_pane_ParamLimits

0xb921,	// (0x0006e917) cam4_autofocus_pane

0xb93b,	// (0x0006e931) cam4_image_uncrop_pane_ParamLimits

0xb93b,	// (0x0006e931) cam4_image_uncrop_pane

0xb952,	// (0x0006e948) cam4_indicators_pane_ParamLimits

0xb952,	// (0x0006e948) cam4_indicators_pane

0xb96e,	// (0x0006e964) main_camera4_pane_g1_ParamLimits

0xb96e,	// (0x0006e964) main_camera4_pane_g1

0xb97a,	// (0x0006e970) main_camera4_pane_g2_ParamLimits

0xb97a,	// (0x0006e970) main_camera4_pane_g2

0xb97a,	// (0x0006e970) main_camera4_pane_g3_ParamLimits

0xb97a,	// (0x0006e970) main_camera4_pane_g3

0xb986,	// (0x0006e97c) main_camera4_pane_g4_ParamLimits

0xb986,	// (0x0006e97c) main_camera4_pane_g4

0xb992,	// (0x0006e988) main_camera4_pane_g5_ParamLimits

0xb992,	// (0x0006e988) main_camera4_pane_g5

0x0005,

0xf84e,	// (0x00072844) main_camera4_pane_g_ParamLimits

0xf84e,	// (0x00072844) main_camera4_pane_g

0xb9ac,	// (0x0006e9a2) main_camera4_pane_t1_ParamLimits

0xb9ac,	// (0x0006e9a2) main_camera4_pane_t1

0x07c6,	// (0x000637bc) bg_tb_trans_pane_cp06

0xb9fc,	// (0x0006e9f2) cam4_indicators_pane_g1

0xba0d,	// (0x0006ea03) cam4_indicators_pane_g2

0x0002,

0xf869,	// (0x0007285f) cam4_indicators_pane_g

0xba2b,	// (0x0006ea21) cam4_indicators_pane_t1

0xba55,	// (0x0006ea4b) main_video4_pane_g1_ParamLimits

0xba55,	// (0x0006ea4b) main_video4_pane_g1

0xba61,	// (0x0006ea57) main_video4_pane_g2_ParamLimits

0xba61,	// (0x0006ea57) main_video4_pane_g2

0xba6d,	// (0x0006ea63) main_video4_pane_g3_ParamLimits

0xba6d,	// (0x0006ea63) main_video4_pane_g3

0xba79,	// (0x0006ea6f) main_video4_pane_g4_ParamLimits

0xba79,	// (0x0006ea6f) main_video4_pane_g4

0x0004,

0xf870,	// (0x00072866) main_video4_pane_g_ParamLimits

0xf870,	// (0x00072866) main_video4_pane_g

0xba99,	// (0x0006ea8f) vid4_indicators_pane_ParamLimits

0xba99,	// (0x0006ea8f) vid4_indicators_pane

0xbab8,	// (0x0006eaae) video4_image_uncrop_cif_pane_ParamLimits

0xbab8,	// (0x0006eaae) video4_image_uncrop_cif_pane

0xbac7,	// (0x0006eabd) video4_image_uncrop_nhd_pane_ParamLimits

0xbac7,	// (0x0006eabd) video4_image_uncrop_nhd_pane

0xb93b,	// (0x0006e931) video4_image_uncrop_vga_pane_ParamLimits

0xb93b,	// (0x0006e931) video4_image_uncrop_vga_pane

0x075f,	// (0x00063755) bg_tb_trans_pane_cp07

0xbade,	// (0x0006ead4) vid4_indicators_pane_g1

0xbaf2,	// (0x0006eae8) vid4_indicators_pane_g2

0xbb06,	// (0x0006eafc) vid4_indicators_pane_g3

0x0004,

0xf87b,	// (0x00072871) vid4_indicators_pane_g

0xbb35,	// (0x0006eb2b) vid4_indicators_pane_t1

0xbb4c,	// (0x0006eb42) cam4_autofocus_pane_g1

0xbb54,	// (0x0006eb4a) cam4_autofocus_pane_g2

0xbb5c,	// (0x0006eb52) cam4_autofocus_pane_g3

0x0002,

0xf886,	// (0x0007287c) cam4_autofocus_pane_g

0xbb64,	// (0x0006eb5a) cam4_autofocus_pane_g3_copy1

0xb248,	// (0x0006e23e) video_down_pane_cp_t1

0xb256,	// (0x0006e24c) video_down_pane_cp_t2

0x0001,

0xf7fe,	// (0x000727f4) video_down_pane_cp_t

0x07b8,	// (0x000637ae) popup_vitu2_window_ParamLimits

0x07b8,	// (0x000637ae) popup_vitu2_window

0xbb6c,	// (0x0006eb62) aid_size_cell2_itu2_ParamLimits

0xbb6c,	// (0x0006eb62) aid_size_cell2_itu2

0xbb8e,	// (0x0006eb84) aid_size_cell_itu2_ParamLimits

0xbb8e,	// (0x0006eb84) aid_size_cell_itu2

0xee04,	// (0x00071dfa) bg_popup_window_pane_cp09_ParamLimits

0xee04,	// (0x00071dfa) bg_popup_window_pane_cp09

0xbbd2,	// (0x0006ebc8) field_vitu2_entry_pane_ParamLimits

0xbbd2,	// (0x0006ebc8) field_vitu2_entry_pane

0xbbf2,	// (0x0006ebe8) grid_vitu2_function_pane_ParamLimits

0xbbf2,	// (0x0006ebe8) grid_vitu2_function_pane

0xbc36,	// (0x0006ec2c) grid_vitu2_itu_pane_ParamLimits

0xbc36,	// (0x0006ec2c) grid_vitu2_itu_pane

0xbcae,	// (0x0006eca4) cell_vitu2_itu_pane_ParamLimits

0xbcae,	// (0x0006eca4) cell_vitu2_itu_pane

0xbcc7,	// (0x0006ecbd) cell_vitu2_function_pane_ParamLimits

0xbcc7,	// (0x0006ecbd) cell_vitu2_function_pane

0x54ea,	// (0x000684e0) bg_popup_call_pane_cp08_ParamLimits

0x54ea,	// (0x000684e0) bg_popup_call_pane_cp08

0x5501,	// (0x000684f7) field_vitu2_entry_pane_g1

0x550d,	// (0x00068503) field_vitu2_entry_pane_g2

0x0002,

0xf88d,	// (0x00072883) field_vitu2_entry_pane_g

0x682f,	// (0x00069825) field_vitu2_entry_pane_t1_ParamLimits

0x682f,	// (0x00069825) field_vitu2_entry_pane_t1

0x6861,	// (0x00069857) field_vitu2_entry_pane_t2_ParamLimits

0x6861,	// (0x00069857) field_vitu2_entry_pane_t2

0x0001,

0xf894,	// (0x0007288a) field_vitu2_entry_pane_t_ParamLimits

0xf894,	// (0x0007288a) field_vitu2_entry_pane_t

0xa425,	// (0x0006d41b) bg_button_pane_cp010_ParamLimits

0xa425,	// (0x0006d41b) bg_button_pane_cp010

0xbd08,	// (0x0006ecfe) cell_vitu2_itu_pane_g1

0xbd2e,	// (0x0006ed24) cell_vitu2_itu_pane_t1_ParamLimits

0xbd2e,	// (0x0006ed24) cell_vitu2_itu_pane_t1

0x687e,	// (0x00069874) cell_vitu2_itu_pane_t2_ParamLimits

0x687e,	// (0x00069874) cell_vitu2_itu_pane_t2

0x0002,

0xf89e,	// (0x00072894) cell_vitu2_itu_pane_t_ParamLimits

0xf89e,	// (0x00072894) cell_vitu2_itu_pane_t

0x075f,	// (0x00063755) bg_button_pane_cp011

0xbd7a,	// (0x0006ed70) cell_vitu2_function_pane_g1

0x0040,	// (0x00063036) main_myfav_hc_pane

0xb72d,	// (0x0006e723) popup_image3_note_pane_ParamLimits

0xb72d,	// (0x0006e723) popup_image3_note_pane

0xb73b,	// (0x0006e731) popup_image3_tool_bar_pane_ParamLimits

0xb73b,	// (0x0006e731) popup_image3_tool_bar_pane

0x68f4,	// (0x000698ea) cell_vitu2_itu_pane_t3_ParamLimits

0x68f4,	// (0x000698ea) cell_vitu2_itu_pane_t3

0x0040,	// (0x00063036) bg_popup_trans_pane

0x5521,	// (0x00068517) grid_image3_tool_bar_pane

0x552b,	// (0x00068521) bg_popup_trans_pane_g1

0x0cf0,	// (0x00063ce6) bg_popup_trans_pane_g2

0x5533,	// (0x00068529) bg_popup_trans_pane_g3

0x553b,	// (0x00068531) bg_popup_trans_pane_g4

0x5543,	// (0x00068539) bg_popup_trans_pane_g5

0x554b,	// (0x00068541) bg_popup_trans_pane_g6

0x5553,	// (0x00068549) bg_popup_trans_pane_g7

0x555b,	// (0x00068551) bg_popup_trans_pane_g8

0x0cd0,	// (0x00063cc6) bg_popup_trans_pane_g9

0x0008,

0xf8a5,	// (0x0007289b) bg_popup_trans_pane_g

0x5563,	// (0x00068559) cell_image3_tool_bar_pane_ParamLimits

0x5563,	// (0x00068559) cell_image3_tool_bar_pane

0x0adf,	// (0x00063ad5) cell_image3_tool_bar_pane_g1

0x0040,	// (0x00063036) bg_popup_trans_pane_cp1

0x5577,	// (0x0006856d) popup_image3_note_pane_t1

0x5585,	// (0x0006857b) popup_image3_note_pane_t2

0x5593,	// (0x00068589) popup_image3_note_pane_t3

0x0002,

0xf8b8,	// (0x000728ae) popup_image3_note_pane_t

0x55a1,	// (0x00068597) popup_image3_note_pane_t3_copy1

0xbd8e,	// (0x0006ed84) bg_myfav_hc_instruction_pane_ParamLimits

0xbd8e,	// (0x0006ed84) bg_myfav_hc_instruction_pane

0xbda6,	// (0x0006ed9c) cell_myfav_contact_pane_ParamLimits

0xbda6,	// (0x0006ed9c) cell_myfav_contact_pane

0xbdc0,	// (0x0006edb6) cell_myfav_contact_pane_cp1_ParamLimits

0xbdc0,	// (0x0006edb6) cell_myfav_contact_pane_cp1

0xbdd8,	// (0x0006edce) cell_myfav_contact_pane_cp2_ParamLimits

0xbdd8,	// (0x0006edce) cell_myfav_contact_pane_cp2

0xbdf0,	// (0x0006ede6) cell_myfav_contact_pane_cp3_ParamLimits

0xbdf0,	// (0x0006ede6) cell_myfav_contact_pane_cp3

0xbe07,	// (0x0006edfd) cell_myfav_contact_pane_cp4_ParamLimits

0xbe07,	// (0x0006edfd) cell_myfav_contact_pane_cp4

0xbe1d,	// (0x0006ee13) cell_myfav_contact_pane_cp5_ParamLimits

0xbe1d,	// (0x0006ee13) cell_myfav_contact_pane_cp5

0xbe31,	// (0x0006ee27) cell_myfav_contact_pane_cp6_ParamLimits

0xbe31,	// (0x0006ee27) cell_myfav_contact_pane_cp6

0xbe45,	// (0x0006ee3b) cell_myfav_contact_pane_cp7_ParamLimits

0xbe45,	// (0x0006ee3b) cell_myfav_contact_pane_cp7

0x55af,	// (0x000685a5) listscroll_gen_pane_cp05

0xbe5d,	// (0x0006ee53) main_myfav_hc_pane_g1_ParamLimits

0xbe5d,	// (0x0006ee53) main_myfav_hc_pane_g1

0xbe73,	// (0x0006ee69) main_myfav_hc_pane_g2_ParamLimits

0xbe73,	// (0x0006ee69) main_myfav_hc_pane_g2

0x0002,

0xf8bf,	// (0x000728b5) main_myfav_hc_pane_g_ParamLimits

0xf8bf,	// (0x000728b5) main_myfav_hc_pane_g

0xbea1,	// (0x0006ee97) main_myfav_hc_pane_t1_ParamLimits

0xbea1,	// (0x0006ee97) main_myfav_hc_pane_t1

0x55b8,	// (0x000685ae) main_myfav_hc_pane_t2_ParamLimits

0x55b8,	// (0x000685ae) main_myfav_hc_pane_t2

0x55ca,	// (0x000685c0) main_myfav_hc_pane_t3_ParamLimits

0x55ca,	// (0x000685c0) main_myfav_hc_pane_t3

0xbeb8,	// (0x0006eeae) main_myfav_hc_pane_t4_ParamLimits

0xbeb8,	// (0x0006eeae) main_myfav_hc_pane_t4

0x0004,

0xf8c6,	// (0x000728bc) main_myfav_hc_pane_t_ParamLimits

0xf8c6,	// (0x000728bc) main_myfav_hc_pane_t

0x0adf,	// (0x00063ad5) bg_myfav_hc_instruction_pane_g1

0x55dc,	// (0x000685d2) cell_myfav_contact_pane_g1_ParamLimits

0x55dc,	// (0x000685d2) cell_myfav_contact_pane_g1

0x55dc,	// (0x000685d2) cell_myfav_contact_pane_g2_ParamLimits

0x55dc,	// (0x000685d2) cell_myfav_contact_pane_g2

0x55e8,	// (0x000685de) cell_myfav_contact_pane_g3_ParamLimits

0x55e8,	// (0x000685de) cell_myfav_contact_pane_g3

0x07d4,	// (0x000637ca) cell_myfav_contact_pane_g4_ParamLimits

0x07d4,	// (0x000637ca) cell_myfav_contact_pane_g4

0x55f5,	// (0x000685eb) cell_myfav_contact_pane_g5_ParamLimits

0x55f5,	// (0x000685eb) cell_myfav_contact_pane_g5

0x0004,

0xf8d1,	// (0x000728c7) cell_myfav_contact_pane_g_ParamLimits

0xf8d1,	// (0x000728c7) cell_myfav_contact_pane_g

0xbe89,	// (0x0006ee7f) main_myfav_hc_pane_g3_ParamLimits

0xbe89,	// (0x0006ee7f) main_myfav_hc_pane_g3

0x755c,	// (0x0006a552) popup_adpt_find_window

0xbee2,	// (0x0006eed8) afind_page_pane_ParamLimits

0xbee2,	// (0x0006eed8) afind_page_pane

0xbeef,	// (0x0006eee5) aid_size_cell_afind_ParamLimits

0xbeef,	// (0x0006eee5) aid_size_cell_afind

0xbf09,	// (0x0006eeff) bg_popup_sub_pane_cp09_ParamLimits

0xbf09,	// (0x0006eeff) bg_popup_sub_pane_cp09

0xbf16,	// (0x0006ef0c) find_pane_cp01_ParamLimits

0xbf16,	// (0x0006ef0c) find_pane_cp01

0x5601,	// (0x000685f7) grid_afind_control_pane_ParamLimits

0x5601,	// (0x000685f7) grid_afind_control_pane

0xbf23,	// (0x0006ef19) grid_afind_pane_ParamLimits

0xbf23,	// (0x0006ef19) grid_afind_pane

0xbf3f,	// (0x0006ef35) cell_afind_pane_ParamLimits

0xbf3f,	// (0x0006ef35) cell_afind_pane

0x0adf,	// (0x00063ad5) afind_page_pane_g1

0xbf87,	// (0x0006ef7d) afind_page_pane_g2

0xbf90,	// (0x0006ef86) afind_page_pane_g3

0x0002,

0xf8dc,	// (0x000728d2) afind_page_pane_g

0xbf99,	// (0x0006ef8f) afind_page_pane_t1

0x5615,	// (0x0006860b) cell_afind_grid_control_pane_ParamLimits

0x5615,	// (0x0006860b) cell_afind_grid_control_pane

0x54a4,	// (0x0006849a) bg_button_pane_cp69_ParamLimits

0x54a4,	// (0x0006849a) bg_button_pane_cp69

0xbfb9,	// (0x0006efaf) cell_afind_pane_g1_ParamLimits

0xbfb9,	// (0x0006efaf) cell_afind_pane_g1

0xbfc6,	// (0x0006efbc) cell_afind_pane_t1_ParamLimits

0xbfc6,	// (0x0006efbc) cell_afind_pane_t1

0x0ae9,	// (0x00063adf) bg_button_pane_cp72

0x5624,	// (0x0006861a) cell_afind_grid_control_pane_g1

0x9c2e,	// (0x0006cc24) aid_image_placing_area_ParamLimits

0x9c2e,	// (0x0006cc24) aid_image_placing_area

0x07c6,	// (0x000637bc) field_vitu_entry_pane_g1_ParamLimits

0x07c6,	// (0x000637bc) field_vitu_entry_pane_g1

0x07c6,	// (0x000637bc) field_vitu_entry_pane_g2_ParamLimits

0x07c6,	// (0x000637bc) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x000721dd) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x000721dd) field_vitu_entry_pane_g

0x5236,	// (0x0006822c) cell_vitu_itu_pane_g1_ParamLimits

0x50f5,	// (0x000680eb) cell_vitu_itu_pane_t3_ParamLimits

0x50f5,	// (0x000680eb) cell_vitu_itu_pane_t3

0x544d,	// (0x00068443) mp4_progress_pane_t1_ParamLimits

0x5466,	// (0x0006845c) mp4_progress_pane_t2_ParamLimits

0xf822,	// (0x00072818) mp4_progress_pane_t_ParamLimits

0x547f,	// (0x00068475) mup_progress_pane_cp04_ParamLimits

0xbecc,	// (0x0006eec2) main_myfav_hc_pane_t5_ParamLimits

0xbecc,	// (0x0006eec2) main_myfav_hc_pane_t5

0x66f6,	// (0x000696ec) aid_zoom_text_primary

0x755c,	// (0x0006a552) popup_adpt_find_window_ParamLimits

0x075f,	// (0x00063755) main_cam_set_pane

0xb960,	// (0x0006e956) cam4_zoom_pane_ParamLimits

0xb960,	// (0x0006e956) cam4_zoom_pane

0xbfd8,	// (0x0006efce) main_cam_set_pane_g1_ParamLimits

0xbfd8,	// (0x0006efce) main_cam_set_pane_g1

0xbfe6,	// (0x0006efdc) main_cam_set_pane_g2_ParamLimits

0xbfe6,	// (0x0006efdc) main_cam_set_pane_g2

0x0001,

0xf8e3,	// (0x000728d9) main_cam_set_pane_g_ParamLimits

0xf8e3,	// (0x000728d9) main_cam_set_pane_g

0xbff2,	// (0x0006efe8) main_cam_set_pane_t1_ParamLimits

0xbff2,	// (0x0006efe8) main_cam_set_pane_t1

0xc00e,	// (0x0006f004) main_cset_listscroll_pane_ParamLimits

0xc00e,	// (0x0006f004) main_cset_listscroll_pane

0xc040,	// (0x0006f036) main_cset_slider_pane_ParamLimits

0xc040,	// (0x0006f036) main_cset_slider_pane

0x5635,	// (0x0006862b) main_cset_list_pane_ParamLimits

0x5635,	// (0x0006862b) main_cset_list_pane

0x5645,	// (0x0006863b) scroll_pane_cp028

0xc05f,	// (0x0006f055) aid_area_touch_slider

0xc07b,	// (0x0006f071) cset_slider_pane

0xc09e,	// (0x0006f094) main_cset_slider_pane_g1

0xc0b3,	// (0x0006f0a9) main_cset_slider_pane_g2

0x0011,

0xf8e8,	// (0x000728de) main_cset_slider_pane_g

0x567e,	// (0x00068674) main_cset_slider_pane_t1

0xc175,	// (0x0006f16b) main_cset_slider_pane_t2

0xc18f,	// (0x0006f185) main_cset_slider_pane_t3

0xc1a9,	// (0x0006f19f) main_cset_slider_pane_t4

0xc1c3,	// (0x0006f1b9) main_cset_slider_pane_t5

0xc1e1,	// (0x0006f1d7) main_cset_slider_pane_t6

0xc1f8,	// (0x0006f1ee) main_cset_slider_pane_t7

0x000e,

0xf90d,	// (0x00072903) main_cset_slider_pane_t

0xc304,	// (0x0006f2fa) cset_list_set_pane_ParamLimits

0xc304,	// (0x0006f2fa) cset_list_set_pane

0x5718,	// (0x0006870e) aid_position_infowindow_above

0x5720,	// (0x00068716) aid_position_infowindow_below

0xc31a,	// (0x0006f310) cset_list_set_pane_g1_ParamLimits

0xc31a,	// (0x0006f310) cset_list_set_pane_g1

0x6946,	// (0x0006993c) cset_list_set_pane_g3_ParamLimits

0x6946,	// (0x0006993c) cset_list_set_pane_g3

0x0001,

0xf92c,	// (0x00072922) cset_list_set_pane_g_ParamLimits

0xf92c,	// (0x00072922) cset_list_set_pane_g

0x6955,	// (0x0006994b) cset_list_set_pane_t1_ParamLimits

0x6955,	// (0x0006994b) cset_list_set_pane_t1

0x075f,	// (0x00063755) list_highlight_pane_cp021_ParamLimits

0x075f,	// (0x00063755) list_highlight_pane_cp021

0x1712,	// (0x00064708) cset_slider_pane_g1

0x1724,	// (0x0006471a) cset_slider_pane_g2

0x171b,	// (0x00064711) cset_slider_pane_g3

0x0002,

0xf931,	// (0x00072927) cset_slider_pane_g

0xc326,	// (0x0006f31c) aid_area_touch_cam4_zoom

0xc32e,	// (0x0006f324) cam4_zoom_cont_pane

0xc336,	// (0x0006f32c) cam4_zoom_pane_g1

0xc33e,	// (0x0006f334) cam4_zoom_pane_g2

0xc346,	// (0x0006f33c) cam4_zoom_pane_g3

0x0002,

0xf938,	// (0x0007292e) cam4_zoom_pane_g

0xee12,	// (0x00071e08) cam4_zoom_cont_pane_g1

0xee1b,	// (0x00071e11) cam4_zoom_cont_pane_g2

0xee24,	// (0x00071e1a) cam4_zoom_cont_pane_g3

0x0002,

0xf93f,	// (0x00072935) cam4_zoom_cont_pane_g

0xb784,	// (0x0006e77a) call4_image_pane_ParamLimits

0xb784,	// (0x0006e77a) call4_image_pane

0xb7e3,	// (0x0006e7d9) call4_windows_conf_pane_ParamLimits

0xb828,	// (0x0006e81e) popup_call4_audio_in_window_ParamLimits

0xb828,	// (0x0006e81e) popup_call4_audio_in_window

0x0040,	// (0x00063036) bg_popup_call2_act_pane_cp02

0x54b0,	// (0x000684a6) call4_list_conf_pane

0x0adf,	// (0x00063ad5) call4_image_pane_g1

0x0adf,	// (0x00063ad5) call4_image_pane_g2

0x0001,

0xf3c3,	// (0x000723b9) call4_image_pane_g

0x5728,	// (0x0006871e) list_single_graphic_popup_conf4_pane_ParamLimits

0x5728,	// (0x0006871e) list_single_graphic_popup_conf4_pane

0x0040,	// (0x00063036) list_highlight_pane_cp022

0x573b,	// (0x00068731) list_single_graphic_popup_conf4_pane_g1

0x12b0,	// (0x000642a6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf946,	// (0x0007293c) list_single_graphic_popup_conf4_pane_g

0x5743,	// (0x00068739) list_single_graphic_popup_conf4_pane_t1

0x82eb,	// (0x0006b2e1) popup_vtel_slider_window_ParamLimits

0x82eb,	// (0x0006b2e1) popup_vtel_slider_window

0x5492,	// (0x00068488) dialer2_ne_pane_t2_ParamLimits

0x5492,	// (0x00068488) dialer2_ne_pane_t2

0x0001,

0xf827,	// (0x0007281d) dialer2_ne_pane_t_ParamLimits

0xf827,	// (0x0007281d) dialer2_ne_pane_t

0x075f,	// (0x00063755) bg_popup_sub_pane_cp010_ParamLimits

0x075f,	// (0x00063755) bg_popup_sub_pane_cp010

0xc34e,	// (0x0006f344) popup_vtel_slider_window_g1_ParamLimits

0xc34e,	// (0x0006f344) popup_vtel_slider_window_g1

0xc35a,	// (0x0006f350) popup_vtel_slider_window_g2_ParamLimits

0xc35a,	// (0x0006f350) popup_vtel_slider_window_g2

0x0003,

0xf94b,	// (0x00072941) popup_vtel_slider_window_g_ParamLimits

0xf94b,	// (0x00072941) popup_vtel_slider_window_g

0xc3a2,	// (0x0006f398) vtel_slider_pane_ParamLimits

0xc3a2,	// (0x0006f398) vtel_slider_pane

0xc3b1,	// (0x0006f3a7) vtel_slider_pane_g1_ParamLimits

0xc3b1,	// (0x0006f3a7) vtel_slider_pane_g1

0xc3be,	// (0x0006f3b4) vtel_slider_pane_g2_ParamLimits

0xc3be,	// (0x0006f3b4) vtel_slider_pane_g2

0xc3cb,	// (0x0006f3c1) vtel_slider_pane_g3_ParamLimits

0xc3cb,	// (0x0006f3c1) vtel_slider_pane_g3

0xc3b1,	// (0x0006f3a7) vtel_slider_pane_g4_ParamLimits

0xc3b1,	// (0x0006f3a7) vtel_slider_pane_g4

0xc3d8,	// (0x0006f3ce) vtel_slider_pane_g5_ParamLimits

0xc3d8,	// (0x0006f3ce) vtel_slider_pane_g5

0x0004,

0xf954,	// (0x0007294a) vtel_slider_pane_g_ParamLimits

0xf954,	// (0x0007294a) vtel_slider_pane_g

0x075f,	// (0x00063755) main_gallery2_pane

0xbbb4,	// (0x0006ebaa) aid_size_row_itut2_dropdow_list_ParamLimits

0xbbb4,	// (0x0006ebaa) aid_size_row_itut2_dropdow_list

0xbc14,	// (0x0006ec0a) grid_vitu2_function_top_pane_ParamLimits

0xbc14,	// (0x0006ec0a) grid_vitu2_function_top_pane

0xbc6e,	// (0x0006ec64) popup_vitu2_dropdown_list_window_ParamLimits

0xbc6e,	// (0x0006ec64) popup_vitu2_dropdown_list_window

0xbc8c,	// (0x0006ec82) popup_vitu2_match_list_window

0xc3e5,	// (0x0006f3db) cell_vitu2_function_top_pane_ParamLimits

0xc3e5,	// (0x0006f3db) cell_vitu2_function_top_pane

0xc3ff,	// (0x0006f3f5) cell_vitu2_function_top_pane_cp01_ParamLimits

0xc3ff,	// (0x0006f3f5) cell_vitu2_function_top_pane_cp01

0xc41b,	// (0x0006f411) cell_vitu2_function_top_wide_pane_ParamLimits

0xc41b,	// (0x0006f411) cell_vitu2_function_top_wide_pane

0x075f,	// (0x00063755) bg_button_pane_cp012

0xc439,	// (0x0006f42f) cell_vitu2_function_top_pane_g1

0xc44d,	// (0x0006f443) bg_button_pane_cp013_ParamLimits

0xc44d,	// (0x0006f443) bg_button_pane_cp013

0xc469,	// (0x0006f45f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc469,	// (0x0006f45f) cell_vitu2_function_top_wide_pane_g1

0x07b8,	// (0x000637ae) bg_popup_sub_pane_cp20

0xc481,	// (0x0006f477) list_vitu2_match_list_pane

0x552b,	// (0x00068521) bg_popup_sub_pane_cp20_g1

0x5533,	// (0x00068529) bg_popup_sub_pane_cp20_g2

0x0cf0,	// (0x00063ce6) bg_popup_sub_pane_cp20_g3

0x553b,	// (0x00068531) bg_popup_sub_pane_cp20_g4

0x0cd0,	// (0x00063cc6) bg_popup_sub_pane_cp20_g5

0x5759,	// (0x0006874f) bg_popup_sub_pane_cp20_g6

0x554b,	// (0x00068541) bg_popup_sub_pane_cp20_g7

0x5553,	// (0x00068549) bg_popup_sub_pane_cp20_g8

0x555b,	// (0x00068551) bg_popup_sub_pane_cp20_g9

0x0008,

0xf95f,	// (0x00072955) bg_popup_sub_pane_cp20_g

0xc499,	// (0x0006f48f) list_vitu2_match_list_item_pane_ParamLimits

0xc499,	// (0x0006f48f) list_vitu2_match_list_item_pane

0xc4ab,	// (0x0006f4a1) list_vitu2_match_list_item_pane_t1

0x0040,	// (0x00063036) bg_popup_sub_pane_cp21

0x0a9f,	// (0x00063a95) grid_vitu2_dropdown_list_pane

0xc4b9,	// (0x0006f4af) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xc4b9,	// (0x0006f4af) cell_vitu2_dropdown_list_char_pane

0xc4d9,	// (0x0006f4cf) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xc4d9,	// (0x0006f4cf) cell_vitu2_dropdown_list_ctrl_pane

0x5773,	// (0x00068769) cell_vitu2_dropdown_list_char_pane_g1

0x576a,	// (0x00068760) cell_vitu2_dropdown_list_char_pane_g2

0x5761,	// (0x00068757) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf972,	// (0x00072968) cell_vitu2_dropdown_list_char_pane_g

0xc501,	// (0x0006f4f7) cell_vitu2_dropdown_list_char_pane_t1

0xc50f,	// (0x0006f505) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc50f,	// (0x0006f505) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc51c,	// (0x0006f512) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc51c,	// (0x0006f512) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc529,	// (0x0006f51f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc529,	// (0x0006f51f) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc536,	// (0x0006f52c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc536,	// (0x0006f52c) cell_vitu2_dropdown_list_ctrl_pane_g4

0x07c6,	// (0x000637bc) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x07c6,	// (0x000637bc) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf979,	// (0x0007296f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf979,	// (0x0007296f) cell_vitu2_dropdown_list_ctrl_pane_g

0xc552,	// (0x0006f548) aid_size_cell_gallery2_ParamLimits

0xc552,	// (0x0006f548) aid_size_cell_gallery2

0xc56c,	// (0x0006f562) grid_gallery2_pane_ParamLimits

0xc56c,	// (0x0006f562) grid_gallery2_pane

0xc583,	// (0x0006f579) scroll_pane_cp029_ParamLimits

0xc583,	// (0x0006f579) scroll_pane_cp029

0xc593,	// (0x0006f589) cell_gallery2_pane_ParamLimits

0xc593,	// (0x0006f589) cell_gallery2_pane

0x577c,	// (0x00068772) cell_gallery2_pane_g2

0x3955,	// (0x0006694b) cell_gallery2_pane_g3

0x5784,	// (0x0006877a) cell_gallery2_pane_g4

0x578c,	// (0x00068782) cell_gallery2_pane_g5

0x0a9f,	// (0x00063a95) grid_highlight_pane_cp10

0xbc8c,	// (0x0006ec82) popup_vitu2_match_list_window_ParamLimits

0xbc9e,	// (0x0006ec94) popup_vitu2_query_window_ParamLimits

0xbc9e,	// (0x0006ec94) popup_vitu2_query_window

0x0040,	// (0x00063036) bg_vitu2_candi_button_pane

0x5773,	// (0x00068769) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x576a,	// (0x00068760) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x5761,	// (0x00068757) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x696a,	// (0x00069960) bg_button_pane_cp015

0xc5e8,	// (0x0006f5de) bg_button_pane_cp016

0xc5f4,	// (0x0006f5ea) bg_button_pane_cp017

0x16a2,	// (0x00064698) bg_popup_sub_pane_cp22

0x5794,	// (0x0006878a) popup_vitu2_query_window_g1

0x69a4,	// (0x0006999a) popup_vitu2_query_window_g2

0x0002,

0xf984,	// (0x0007297a) popup_vitu2_query_window_g

0x69bc,	// (0x000699b2) popup_vitu2_query_window_t1_ParamLimits

0x69bc,	// (0x000699b2) popup_vitu2_query_window_t1

0x69ef,	// (0x000699e5) popup_vitu2_query_window_t2_ParamLimits

0x69ef,	// (0x000699e5) popup_vitu2_query_window_t2

0x6a01,	// (0x000699f7) popup_vitu2_query_window_t3_ParamLimits

0x6a01,	// (0x000699f7) popup_vitu2_query_window_t3

0xc61b,	// (0x0006f611) popup_vitu2_query_window_t4_ParamLimits

0xc61b,	// (0x0006f611) popup_vitu2_query_window_t4

0xc62f,	// (0x0006f625) popup_vitu2_query_window_t5_ParamLimits

0xc62f,	// (0x0006f625) popup_vitu2_query_window_t5

0x0006,

0xf98b,	// (0x00072981) popup_vitu2_query_window_t_ParamLimits

0xf98b,	// (0x00072981) popup_vitu2_query_window_t

0x562d,	// (0x00068623) main_cset_text_pane

0xc05f,	// (0x0006f055) aid_area_touch_slider_ParamLimits

0xc07b,	// (0x0006f071) cset_slider_pane_ParamLimits

0xc09e,	// (0x0006f094) main_cset_slider_pane_g1_ParamLimits

0xc0b3,	// (0x0006f0a9) main_cset_slider_pane_g2_ParamLimits

0x564e,	// (0x00068644) main_cset_slider_pane_g3_ParamLimits

0x564e,	// (0x00068644) main_cset_slider_pane_g3

0xc0c8,	// (0x0006f0be) main_cset_slider_pane_g4_ParamLimits

0xc0c8,	// (0x0006f0be) main_cset_slider_pane_g4

0xc0d7,	// (0x0006f0cd) main_cset_slider_pane_g5_ParamLimits

0xc0d7,	// (0x0006f0cd) main_cset_slider_pane_g5

0xc0e5,	// (0x0006f0db) main_cset_slider_pane_g6_ParamLimits

0xc0e5,	// (0x0006f0db) main_cset_slider_pane_g6

0xf8e8,	// (0x000728de) main_cset_slider_pane_g_ParamLimits

0x567e,	// (0x00068674) main_cset_slider_pane_t1_ParamLimits

0xc175,	// (0x0006f16b) main_cset_slider_pane_t2_ParamLimits

0xc18f,	// (0x0006f185) main_cset_slider_pane_t3_ParamLimits

0xc1a9,	// (0x0006f19f) main_cset_slider_pane_t4_ParamLimits

0xc1c3,	// (0x0006f1b9) main_cset_slider_pane_t5_ParamLimits

0xc1e1,	// (0x0006f1d7) main_cset_slider_pane_t6_ParamLimits

0xc1f8,	// (0x0006f1ee) main_cset_slider_pane_t7_ParamLimits

0xc226,	// (0x0006f21c) main_cset_slider_pane_t8_ParamLimits

0xc226,	// (0x0006f21c) main_cset_slider_pane_t8

0xc24e,	// (0x0006f244) main_cset_slider_pane_t9_ParamLimits

0xc24e,	// (0x0006f244) main_cset_slider_pane_t9

0xc276,	// (0x0006f26c) main_cset_slider_pane_t10_ParamLimits

0xc276,	// (0x0006f26c) main_cset_slider_pane_t10

0xc29e,	// (0x0006f294) main_cset_slider_pane_t11_ParamLimits

0xc29e,	// (0x0006f294) main_cset_slider_pane_t11

0xc2c8,	// (0x0006f2be) main_cset_slider_pane_t12_ParamLimits

0xc2c8,	// (0x0006f2be) main_cset_slider_pane_t12

0xc2e5,	// (0x0006f2db) main_cset_slider_pane_t13_ParamLimits

0xc2e5,	// (0x0006f2db) main_cset_slider_pane_t13

0xf90d,	// (0x00072903) main_cset_slider_pane_t_ParamLimits

0x0040,	// (0x00063036) bg_popup_sub_pane_cp011

0x57a0,	// (0x00068796) main_cset_text_pane_g1

0x57a8,	// (0x0006879e) main_cset_text_pane_t1

0x57b6,	// (0x000687ac) main_cset_text_pane_t2

0x57c4,	// (0x000687ba) main_cset_text_pane_t3

0x57d2,	// (0x000687c8) main_cset_text_pane_t4

0x57e0,	// (0x000687d6) main_cset_text_pane_t5

0x57ee,	// (0x000687e4) main_cset_text_pane_t6

0x57fc,	// (0x000687f2) main_cset_text_pane_t7

0x0006,

0xf99a,	// (0x00072990) main_cset_text_pane_t

0x0040,	// (0x00063036) main_cam4_burst_pane

0x0040,	// (0x00063036) main_cam5_pane

0xbfa7,	// (0x0006ef9d) bg_button_pane_cp019

0xbfb0,	// (0x0006efa6) bg_button_pane_cp020

0x565a,	// (0x00068650) main_cset_slider_pane_g7_ParamLimits

0x565a,	// (0x00068650) main_cset_slider_pane_g7

0x5666,	// (0x0006865c) main_cset_slider_pane_g8_ParamLimits

0x5666,	// (0x0006865c) main_cset_slider_pane_g8

0xc0f9,	// (0x0006f0ef) main_cset_slider_pane_g9_ParamLimits

0xc0f9,	// (0x0006f0ef) main_cset_slider_pane_g9

0xc105,	// (0x0006f0fb) main_cset_slider_pane_g10_ParamLimits

0xc105,	// (0x0006f0fb) main_cset_slider_pane_g10

0xc111,	// (0x0006f107) main_cset_slider_pane_g11_ParamLimits

0xc111,	// (0x0006f107) main_cset_slider_pane_g11

0xc11d,	// (0x0006f113) main_cset_slider_pane_g12_ParamLimits

0xc11d,	// (0x0006f113) main_cset_slider_pane_g12

0xc129,	// (0x0006f11f) main_cset_slider_pane_g13_ParamLimits

0xc129,	// (0x0006f11f) main_cset_slider_pane_g13

0xc135,	// (0x0006f12b) main_cset_slider_pane_g14_ParamLimits

0xc135,	// (0x0006f12b) main_cset_slider_pane_g14

0xc141,	// (0x0006f137) main_cset_slider_pane_g15_ParamLimits

0xc141,	// (0x0006f137) main_cset_slider_pane_g15

0x56a6,	// (0x0006869c) main_cset_slider_pane_t14_ParamLimits

0x56a6,	// (0x0006869c) main_cset_slider_pane_t14

0x56df,	// (0x000686d5) main_cset_slider_pane_t15_ParamLimits

0x56df,	// (0x000686d5) main_cset_slider_pane_t15

0xc643,	// (0x0006f639) aid_cam4_burst_size_cell_ParamLimits

0xc643,	// (0x0006f639) aid_cam4_burst_size_cell

0xc65f,	// (0x0006f655) grid_cam4_burst_pane_ParamLimits

0xc65f,	// (0x0006f655) grid_cam4_burst_pane

0xc68f,	// (0x0006f685) linegrid_cam4_burst_pane_ParamLimits

0xc68f,	// (0x0006f685) linegrid_cam4_burst_pane

0xc6af,	// (0x0006f6a5) scroll_pane_cp30_ParamLimits

0xc6af,	// (0x0006f6a5) scroll_pane_cp30

0xc6bb,	// (0x0006f6b1) cell_cam4_burst_pane_ParamLimits

0xc6bb,	// (0x0006f6b1) cell_cam4_burst_pane

0x580a,	// (0x00068800) linegrid_cam4_burst_pane_g1_ParamLimits

0x580a,	// (0x00068800) linegrid_cam4_burst_pane_g1

0xc6f7,	// (0x0006f6ed) linegrid_cam4_burst_pane_g2_ParamLimits

0xc6f7,	// (0x0006f6ed) linegrid_cam4_burst_pane_g2

0x5817,	// (0x0006880d) linegrid_cam4_burst_pane_g3_ParamLimits

0x5817,	// (0x0006880d) linegrid_cam4_burst_pane_g3

0x0002,

0xf9a9,	// (0x0007299f) linegrid_cam4_burst_pane_g_ParamLimits

0xf9a9,	// (0x0007299f) linegrid_cam4_burst_pane_g

0xc708,	// (0x0006f6fe) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc708,	// (0x0006f6fe) linegrid_cam4_burst_pane_g3_copy1

0x5824,	// (0x0006881a) linegrid_cam4_burst_pane_g4_ParamLimits

0x5824,	// (0x0006881a) linegrid_cam4_burst_pane_g4

0xc722,	// (0x0006f718) linegrid_cam4_burst_pane_g5_ParamLimits

0xc722,	// (0x0006f718) linegrid_cam4_burst_pane_g5

0xc733,	// (0x0006f729) linegrid_cam4_burst_pane_g6_ParamLimits

0xc733,	// (0x0006f729) linegrid_cam4_burst_pane_g6

0x5831,	// (0x00068827) linegrid_cam4_burst_pane_g7_ParamLimits

0x5831,	// (0x00068827) linegrid_cam4_burst_pane_g7

0xc744,	// (0x0006f73a) cell_cam4_burst_pane_g1

0x584a,	// (0x00068840) main_cam5_pane_t1_ParamLimits

0x584a,	// (0x00068840) main_cam5_pane_t1

0x585c,	// (0x00068852) main_cam5_pane_t2_ParamLimits

0x585c,	// (0x00068852) main_cam5_pane_t2

0x586e,	// (0x00068864) main_cam5_pane_t3_ParamLimits

0x586e,	// (0x00068864) main_cam5_pane_t3

0x5880,	// (0x00068876) main_cam5_pane_t4_ParamLimits

0x5880,	// (0x00068876) main_cam5_pane_t4

0x5898,	// (0x0006888e) main_cam5_pane_t5_ParamLimits

0x5898,	// (0x0006888e) main_cam5_pane_t5

0x58ac,	// (0x000688a2) main_cam5_pane_t6_ParamLimits

0x58ac,	// (0x000688a2) main_cam5_pane_t6

0x58c0,	// (0x000688b6) main_cam5_pane_t7_ParamLimits

0x58c0,	// (0x000688b6) main_cam5_pane_t7

0x58d2,	// (0x000688c8) main_cam5_pane_t8_ParamLimits

0x58d2,	// (0x000688c8) main_cam5_pane_t8

0x58ee,	// (0x000688e4) main_cam5_pane_t9_ParamLimits

0x58ee,	// (0x000688e4) main_cam5_pane_t9

0x5900,	// (0x000688f6) main_cam5_pane_t10_ParamLimits

0x5900,	// (0x000688f6) main_cam5_pane_t10

0x5912,	// (0x00068908) main_cam5_pane_t11_ParamLimits

0x5912,	// (0x00068908) main_cam5_pane_t11

0x5924,	// (0x0006891a) main_cam5_pane_t12_ParamLimits

0x5924,	// (0x0006891a) main_cam5_pane_t12

0x5939,	// (0x0006892f) main_cam5_pane_t13_ParamLimits

0x5939,	// (0x0006892f) main_cam5_pane_t13

0x000c,

0xf9b5,	// (0x000729ab) main_cam5_pane_t_ParamLimits

0xf9b5,	// (0x000729ab) main_cam5_pane_t

0x7612,	// (0x0006a608) popup_scut_keymap_window_ParamLimits

0x7612,	// (0x0006a608) popup_scut_keymap_window

0xc757,	// (0x0006f74d) aid_size_cell_brow_shortcut

0x0a9f,	// (0x00063a95) bg_popup_window_pane_cp010

0xc763,	// (0x0006f759) grid_scut_pane

0xc76f,	// (0x0006f765) cell_scut_pane_ParamLimits

0xc76f,	// (0x0006f765) cell_scut_pane

0xc786,	// (0x0006f77c) cell_scut_pane_g1

0x5956,	// (0x0006894c) cell_scut_pane_t1

0x5965,	// (0x0006895b) cell_scut_pane_t2

0xc78f,	// (0x0006f785) cell_scut_pane_t3

0x0002,

0xf9d0,	// (0x000729c6) cell_scut_pane_t

0xa8b0,	// (0x0006d8a6) main_mup3_pane_g8_ParamLimits

0xa8b0,	// (0x0006d8a6) main_mup3_pane_g8

0xbbc2,	// (0x0006ebb8) area_vitu2_query_pane_ParamLimits

0xbbc2,	// (0x0006ebb8) area_vitu2_query_pane

0x697f,	// (0x00069975) input_focus_pane_cp08

0x5992,	// (0x00068988) area_vitu2_query_pane_g1

0x6a7f,	// (0x00069a75) area_vitu2_query_pane_g2

0x0001,

0xf9d7,	// (0x000729cd) area_vitu2_query_pane_g

0xc79d,	// (0x0006f793) area_vitu2_query_pane_t1_ParamLimits

0xc79d,	// (0x0006f793) area_vitu2_query_pane_t1

0xc7b1,	// (0x0006f7a7) area_vitu2_query_pane_t2_ParamLimits

0xc7b1,	// (0x0006f7a7) area_vitu2_query_pane_t2

0x6a90,	// (0x00069a86) area_vitu2_query_pane_t3_ParamLimits

0x6a90,	// (0x00069a86) area_vitu2_query_pane_t3

0x6ab8,	// (0x00069aae) area_vitu2_query_pane_t4_ParamLimits

0x6ab8,	// (0x00069aae) area_vitu2_query_pane_t4

0x6ae0,	// (0x00069ad6) area_vitu2_query_pane_t5_ParamLimits

0x6ae0,	// (0x00069ad6) area_vitu2_query_pane_t5

0x6b08,	// (0x00069afe) area_vitu2_query_pane_t6_ParamLimits

0x6b08,	// (0x00069afe) area_vitu2_query_pane_t6

0x0006,

0xf9dc,	// (0x000729d2) area_vitu2_query_pane_t_ParamLimits

0xf9dc,	// (0x000729d2) area_vitu2_query_pane_t

0xc5e8,	// (0x0006f5de) bg_button_pane_cp018

0xc7c5,	// (0x0006f7bb) bg_button_pane_cp021

0x6b54,	// (0x00069b4a) bg_button_pane_cp022

0x6b77,	// (0x00069b6d) input_focus_pane_cp09

0x13ec,	// (0x000643e2) aid_size_touch_mv_arrow_left

0x1415,	// (0x0006440b) aid_size_touch_mv_arrow_right

0xc159,	// (0x0006f14f) main_cset_slider_pane_g16_ParamLimits

0xc159,	// (0x0006f14f) main_cset_slider_pane_g16

0xc167,	// (0x0006f15d) main_cset_slider_pane_g17_ParamLimits

0xc167,	// (0x0006f15d) main_cset_slider_pane_g17

0xc744,	// (0x0006f73a) cell_cam4_burst_pane_g1_ParamLimits

0x0040,	// (0x00063036) compa_mode_pane

0xc366,	// (0x0006f35c) popup_vtel_slider_window_g3_ParamLimits

0xc366,	// (0x0006f35c) popup_vtel_slider_window_g3

0xc37a,	// (0x0006f370) popup_vtel_slider_window_g4_ParamLimits

0xc37a,	// (0x0006f370) popup_vtel_slider_window_g4

0xc38e,	// (0x0006f384) popup_vtel_slider_window_t1_ParamLimits

0xc38e,	// (0x0006f384) popup_vtel_slider_window_t1

0x0040,	// (0x00063036) main_cl_pane

0xa187,	// (0x0006d17d) popup_imed_adjust2_window_ParamLimits

0x16a2,	// (0x00064698) bg_tb_trans_pane_cp05_ParamLimits

0x516b,	// (0x00068161) popup_imed_adjust2_window_g1_ParamLimits

0x517a,	// (0x00068170) popup_imed_adjust2_window_g2_ParamLimits

0x517a,	// (0x00068170) popup_imed_adjust2_window_g2

0x5186,	// (0x0006817c) popup_imed_adjust2_window_g3_ParamLimits

0x5186,	// (0x0006817c) popup_imed_adjust2_window_g3

0x0002,

0xf752,	// (0x00072748) popup_imed_adjust2_window_g_ParamLimits

0xf752,	// (0x00072748) popup_imed_adjust2_window_g

0x5192,	// (0x00068188) popup_imed_adjust2_window_t1_ParamLimits

0x51aa,	// (0x000681a0) slider_imed_adjust_pane_ParamLimits

0x51be,	// (0x000681b4) slider_imed_adjust_pane_g1_ParamLimits

0x51ce,	// (0x000681c4) slider_imed_adjust_pane_g2_ParamLimits

0x51de,	// (0x000681d4) slider_imed_adjust_pane_g3_ParamLimits

0x51ef,	// (0x000681e5) slider_imed_adjust_pane_g4_ParamLimits

0xf759,	// (0x0007274f) slider_imed_adjust_pane_g_ParamLimits

0xb909,	// (0x0006e8ff) aid_touch_area_cam4_ParamLimits

0xb909,	// (0x0006e8ff) aid_touch_area_cam4

0xb919,	// (0x0006e90f) battery_pane_cp01

0xb9a0,	// (0x0006e996) main_camera4_pane_g6_ParamLimits

0xb9a0,	// (0x0006e996) main_camera4_pane_g6

0xb9be,	// (0x0006e9b4) main_camera4_pane_t2_ParamLimits

0xb9be,	// (0x0006e9b4) main_camera4_pane_t2

0x0001,

0xf85b,	// (0x00072851) main_camera4_pane_t_ParamLimits

0xf85b,	// (0x00072851) main_camera4_pane_t

0xba45,	// (0x0006ea3b) aid_touch_area_vid4_ParamLimits

0xba45,	// (0x0006ea3b) aid_touch_area_vid4

0xba85,	// (0x0006ea7b) main_video4_pane_g5_ParamLimits

0xba85,	// (0x0006ea7b) main_video4_pane_g5

0xbaa9,	// (0x0006ea9f) vid4_progress_pane_ParamLimits

0xbaa9,	// (0x0006ea9f) vid4_progress_pane

0x5672,	// (0x00068668) main_cset_slider_pane_g18_ParamLimits

0x5672,	// (0x00068668) main_cset_slider_pane_g18

0x583e,	// (0x00068834) cell_cam4_burst_pane_g2_ParamLimits

0x583e,	// (0x00068834) cell_cam4_burst_pane_g2

0x0001,

0xf9b0,	// (0x000729a6) cell_cam4_burst_pane_g_ParamLimits

0xf9b0,	// (0x000729a6) cell_cam4_burst_pane_g

0xc7d1,	// (0x0006f7c7) bg_cl_pane_ParamLimits

0xc7d1,	// (0x0006f7c7) bg_cl_pane

0xc7dd,	// (0x0006f7d3) cl_header_pane_ParamLimits

0xc7dd,	// (0x0006f7d3) cl_header_pane

0xc7e9,	// (0x0006f7df) cl_listscroll_pane_ParamLimits

0xc7e9,	// (0x0006f7df) cl_listscroll_pane

0xee2d,	// (0x00071e23) bg_cl_pane_g1

0xee35,	// (0x00071e2b) bg_cl_pane_g2

0xee3d,	// (0x00071e33) bg_cl_pane_g3

0xee45,	// (0x00071e3b) bg_cl_pane_g4

0xee4d,	// (0x00071e43) bg_cl_pane_g5

0xee55,	// (0x00071e4b) bg_cl_pane_g6

0xee5d,	// (0x00071e53) bg_cl_pane_g7

0xee65,	// (0x00071e5b) bg_cl_pane_g8

0xee6d,	// (0x00071e63) bg_cl_pane_g9

0x0008,

0xf9eb,	// (0x000729e1) bg_cl_pane_g

0xc7f5,	// (0x0006f7eb) aid_height_cl_leading_ParamLimits

0xc7f5,	// (0x0006f7eb) aid_height_cl_leading

0xc801,	// (0x0006f7f7) aid_height_cl_text_ParamLimits

0xc801,	// (0x0006f7f7) aid_height_cl_text

0x07b8,	// (0x000637ae) bg_cl_header_pane_ParamLimits

0x07b8,	// (0x000637ae) bg_cl_header_pane

0xc819,	// (0x0006f80f) cl_header_pane_g1_ParamLimits

0xc819,	// (0x0006f80f) cl_header_pane_g1

0xc826,	// (0x0006f81c) cl_header_pane_t1_ParamLimits

0xc826,	// (0x0006f81c) cl_header_pane_t1

0xee75,	// (0x00071e6b) cl_list_pane

0x5645,	// (0x0006863b) hc_scroll_pane_cp01

0x0cd0,	// (0x00063cc6) bg_cl_header_pane_g1

0x552b,	// (0x00068521) bg_cl_header_pane_g2

0x0cf0,	// (0x00063ce6) bg_cl_header_pane_g3

0x553b,	// (0x00068531) bg_cl_header_pane_g4

0x5533,	// (0x00068529) bg_cl_header_pane_g5

0x5759,	// (0x0006874f) bg_cl_header_pane_g6

0x5553,	// (0x00068549) bg_cl_header_pane_g7

0x555b,	// (0x00068551) bg_cl_header_pane_g8

0x554b,	// (0x00068541) bg_cl_header_pane_g9

0x0008,

0xf9fe,	// (0x000729f4) bg_cl_header_pane_g

0xc838,	// (0x0006f82e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc838,	// (0x0006f82e) hc_cl_list_double_graphic_heading_pane

0xc849,	// (0x0006f83f) hc_cl_list_single_graphic_pane_ParamLimits

0xc849,	// (0x0006f83f) hc_cl_list_single_graphic_pane

0xc862,	// (0x0006f858) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc862,	// (0x0006f858) hc_cl_list_single_graphic_pane_g1

0xc86e,	// (0x0006f864) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc86e,	// (0x0006f864) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa11,	// (0x00072a07) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa11,	// (0x00072a07) hc_cl_list_single_graphic_pane_g

0xc882,	// (0x0006f878) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc882,	// (0x0006f878) hc_cl_list_single_graphic_pane_t1

0xc862,	// (0x0006f858) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc862,	// (0x0006f858) hc_cl_list_double_graphic_heading_pane_g1

0xc897,	// (0x0006f88d) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc897,	// (0x0006f88d) hc_cl_list_double_graphic_heading_pane_g2

0xc8ab,	// (0x0006f8a1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc8ab,	// (0x0006f8a1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa16,	// (0x00072a0c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa16,	// (0x00072a0c) hc_cl_list_double_graphic_heading_pane_g

0xc8bf,	// (0x0006f8b5) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc8bf,	// (0x0006f8b5) hc_cl_list_double_graphic_heading_pane_t1

0xc8d4,	// (0x0006f8ca) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc8d4,	// (0x0006f8ca) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa1d,	// (0x00072a13) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa1d,	// (0x00072a13) hc_cl_list_double_graphic_heading_pane_t

0xc8f1,	// (0x0006f8e7) vid4_progress_pane_g1

0xc901,	// (0x0006f8f7) vid4_progress_pane_g2

0xc911,	// (0x0006f907) vid4_progress_pane_g3

0xc923,	// (0x0006f919) vid4_progress_pane_g4

0x0004,

0xfa22,	// (0x00072a18) vid4_progress_pane_g

0xc93b,	// (0x0006f931) vid4_progress_pane_t1

0xc951,	// (0x0006f947) vid4_progress_pane_t2

0x0002,

0xfa2d,	// (0x00072a23) vid4_progress_pane_t

0xc97b,	// (0x0006f971) wait_bar_pane_cp07

0x4a91,	// (0x00067a87) blid_firmament_pane_ParamLimits

0x4ad4,	// (0x00067aca) popup_blid_sat_info2_window_g1

0x4af8,	// (0x00067aee) popup_blid_sat_info2_window_t3

0x4b06,	// (0x00067afc) popup_blid_sat_info2_window_t4

0x4b14,	// (0x00067b0a) popup_blid_sat_info2_window_t5

0x4b22,	// (0x00067b18) popup_blid_sat_info2_window_t6

0x4b32,	// (0x00067b28) popup_blid_sat_info2_window_t7

0x4b40,	// (0x00067b36) popup_blid_sat_info2_window_t8

0x4b4e,	// (0x00067b44) popup_blid_sat_info2_window_t9

0x4b5c,	// (0x00067b52) popup_blid_sat_info2_window_t10

0x4c1d,	// (0x00067c13) aid_firma_cardinal_ParamLimits

0x4c31,	// (0x00067c27) blid_firmament_pane_t1_ParamLimits

0x4c48,	// (0x00067c3e) blid_firmament_pane_t2_ParamLimits

0x4c5f,	// (0x00067c55) blid_firmament_pane_t3_ParamLimits

0x4c76,	// (0x00067c6c) blid_firmament_pane_t4_ParamLimits

0xf64b,	// (0x00072641) blid_firmament_pane_t_ParamLimits

0x4c8d,	// (0x00067c83) blid_sat_info_pane_ParamLimits

0x075f,	// (0x00063755) main_cam_set_pane_ParamLimits

0xaf89,	// (0x0006df7f) aid_size_cell_colour_35_ParamLimits

0xafa3,	// (0x0006df99) aid_size_cell_colour_112_ParamLimits

0xafba,	// (0x0006dfb0) aid_size_cell_effect_ParamLimits

0x075f,	// (0x00063755) bg_tb_trans_pane_cp02_ParamLimits

0x1002,	// (0x00063ff8) heading_imed_pane_ParamLimits

0xafd4,	// (0x0006dfca) listscroll_imed_pane_ParamLimits

0x203e,	// (0x00065034) popup_call2_audio_first_window_g5_ParamLimits

0x203e,	// (0x00065034) popup_call2_audio_first_window_g5

0xb5fd,	// (0x0006e5f3) aid_size_touch_image3_arrow_left_ParamLimits

0xb5fd,	// (0x0006e5f3) aid_size_touch_image3_arrow_left

0xb613,	// (0x0006e609) aid_size_touch_image3_arrow_right_ParamLimits

0xb613,	// (0x0006e609) aid_size_touch_image3_arrow_right

0xc966,	// (0x0006f95c) vid4_progress_pane_t3

0xb155,	// (0x0006e14b) main_hwr_training_symbol_option_pane_ParamLimits

0xb155,	// (0x0006e14b) main_hwr_training_symbol_option_pane

0x5387,	// (0x0006837d) popup_hwr_training_preview_window_ParamLimits

0x5387,	// (0x0006837d) popup_hwr_training_preview_window

0xb1b6,	// (0x0006e1ac) hwr_training_navi_pane_g5_ParamLimits

0xb1b6,	// (0x0006e1ac) hwr_training_navi_pane_g5

0x5519,	// (0x0006850f) popup_char_count_window

0x07b8,	// (0x000637ae) bg_popup_sub_pane_cp20_ParamLimits

0xc481,	// (0x0006f477) list_vitu2_match_list_pane_ParamLimits

0xc48d,	// (0x0006f483) vitu2_page_scroll_pane_ParamLimits

0xc48d,	// (0x0006f483) vitu2_page_scroll_pane

0xee7e,	// (0x00071e74) list_single_hwr_training_symbol_option_pane_ParamLimits

0xee7e,	// (0x00071e74) list_single_hwr_training_symbol_option_pane

0xee91,	// (0x00071e87) list_single_hwr_training_symbol_option_pane_g1

0xee99,	// (0x00071e8f) list_single_hwr_training_symbol_option_pane_t1

0xeea7,	// (0x00071e9d) bg_button_pane_cp023

0xeeb0,	// (0x00071ea6) bg_button_pane_cp024

0xeee3,	// (0x00071ed9) vitu2_page_scroll_pane_g1

0xeeeb,	// (0x00071ee1) vitu2_page_scroll_pane_g2

0x0001,

0xfa34,	// (0x00072a2a) vitu2_page_scroll_pane_g

0xeef3,	// (0x00071ee9) vitu2_page_scroll_pane_t1

0x49fd,	// (0x000679f3) popup_char_count_window_g1

0xef02,	// (0x00071ef8) popup_char_count_window_g2

0xef0b,	// (0x00071f01) popup_char_count_window_g3

0x0002,

0xfa39,	// (0x00072a2f) popup_char_count_window_g

0xef14,	// (0x00071f0a) popup_char_count_window_t1

0x0040,	// (0x00063036) main_vded2_pane

0x5157,	// (0x0006814d) aid_size_cell_imed_line

0x5161,	// (0x00068157) grid_imed_line_width_pane

0xbb17,	// (0x0006eb0d) vid4_indicators_pane_g4

0xef22,	// (0x00071f18) cell_imed_line_width_pane_ParamLimits

0xef22,	// (0x00071f18) cell_imed_line_width_pane

0xef36,	// (0x00071f2c) cell_imed_line_width_pane_g1

0xef3f,	// (0x00071f35) cell_imed_line_width_pane_g2

0x0001,

0xfa40,	// (0x00072a36) cell_imed_line_width_pane_g

0xc996,	// (0x0006f98c) main_vded2_pane_g1_ParamLimits

0xc996,	// (0x0006f98c) main_vded2_pane_g1

0xc9a3,	// (0x0006f999) main_vded2_pane_g2_ParamLimits

0xc9a3,	// (0x0006f999) main_vded2_pane_g2

0x0001,

0xfa45,	// (0x00072a3b) main_vded2_pane_g_ParamLimits

0xfa45,	// (0x00072a3b) main_vded2_pane_g

0xc9b1,	// (0x0006f9a7) vded2_slider_pane_ParamLimits

0xc9b1,	// (0x0006f9a7) vded2_slider_pane

0xc9be,	// (0x0006f9b4) aid_size_touch_vded2_end

0xc9c8,	// (0x0006f9be) aid_size_touch_vded2_playhead

0xef47,	// (0x00071f3d) aid_size_touch_vded2_start

0xef4f,	// (0x00071f45) vded2_slider_bg_pane

0xef58,	// (0x00071f4e) vded2_slider_pane_g1

0xef61,	// (0x00071f57) vded2_slider_pane_g2

0xc9d0,	// (0x0006f9c6) vded2_slider_pane_g3

0x0002,

0xfa4a,	// (0x00072a40) vded2_slider_pane_g

0xef69,	// (0x00071f5f) vded2_slider_bg_pane_g1

0xef72,	// (0x00071f68) vded2_slider_bg_pane_g2

0xef7b,	// (0x00071f71) vded2_slider_bg_pane_g3

0x0002,

0xfa51,	// (0x00072a47) vded2_slider_bg_pane_g

0x9998,	// (0x0006c98e) aid_postcard_touch_down_pane_ParamLimits

0x9998,	// (0x0006c98e) aid_postcard_touch_down_pane

0x99a8,	// (0x0006c99e) aid_postcard_touch_up_pane_ParamLimits

0x99a8,	// (0x0006c99e) aid_postcard_touch_up_pane

0x0040,	// (0x00063036) main_blid2_pane

0xa112,	// (0x0006d108) popup_blid2_search_window

0x0040,	// (0x00063036) blid2_gps_pane

0x0040,	// (0x00063036) blid2_navig_pane

0x0040,	// (0x00063036) blid2_search_pane

0x0040,	// (0x00063036) blid2_tripm_pane

0xc9d9,	// (0x0006f9cf) blid2_search_pane_g1_ParamLimits

0xc9d9,	// (0x0006f9cf) blid2_search_pane_g1

0xc9e9,	// (0x0006f9df) blid2_search_pane_t1_ParamLimits

0xc9e9,	// (0x0006f9df) blid2_search_pane_t1

0xc9fb,	// (0x0006f9f1) aid_size_cell_blid2_gps_ParamLimits

0xc9fb,	// (0x0006f9f1) aid_size_cell_blid2_gps

0xca0b,	// (0x0006fa01) blid2_gps_pane_g1_ParamLimits

0xca0b,	// (0x0006fa01) blid2_gps_pane_g1

0xca17,	// (0x0006fa0d) grid_blid2_satellite_pane_ParamLimits

0xca17,	// (0x0006fa0d) grid_blid2_satellite_pane

0xca27,	// (0x0006fa1d) blid2_navig_pane_g1_ParamLimits

0xca27,	// (0x0006fa1d) blid2_navig_pane_g1

0xca33,	// (0x0006fa29) blid2_navig_pane_t1_ParamLimits

0xca33,	// (0x0006fa29) blid2_navig_pane_t1

0xca45,	// (0x0006fa3b) blid2_navig_pane_t2_ParamLimits

0xca45,	// (0x0006fa3b) blid2_navig_pane_t2

0x0001,

0xfa58,	// (0x00072a4e) blid2_navig_pane_t_ParamLimits

0xfa58,	// (0x00072a4e) blid2_navig_pane_t

0xca57,	// (0x0006fa4d) blid2_navig_ring_pane_ParamLimits

0xca57,	// (0x0006fa4d) blid2_navig_ring_pane

0xca67,	// (0x0006fa5d) blid2_speed_pane_ParamLimits

0xca67,	// (0x0006fa5d) blid2_speed_pane

0xca73,	// (0x0006fa69) blid2_tripm_pane_g1_ParamLimits

0xca73,	// (0x0006fa69) blid2_tripm_pane_g1

0xca83,	// (0x0006fa79) blid2_tripm_pane_g2_ParamLimits

0xca83,	// (0x0006fa79) blid2_tripm_pane_g2

0xca8f,	// (0x0006fa85) blid2_tripm_pane_g3_ParamLimits

0xca8f,	// (0x0006fa85) blid2_tripm_pane_g3

0xca9b,	// (0x0006fa91) blid2_tripm_pane_g4_ParamLimits

0xca9b,	// (0x0006fa91) blid2_tripm_pane_g4

0xcaa7,	// (0x0006fa9d) blid2_tripm_pane_g5_ParamLimits

0xcaa7,	// (0x0006fa9d) blid2_tripm_pane_g5

0x0005,

0xfa5d,	// (0x00072a53) blid2_tripm_pane_g_ParamLimits

0xfa5d,	// (0x00072a53) blid2_tripm_pane_g

0xcac3,	// (0x0006fab9) blid2_tripm_pane_t1_ParamLimits

0xcac3,	// (0x0006fab9) blid2_tripm_pane_t1

0xcad7,	// (0x0006facd) blid2_tripm_pane_t2_ParamLimits

0xcad7,	// (0x0006facd) blid2_tripm_pane_t2

0xcae9,	// (0x0006fadf) blid2_tripm_pane_t3_ParamLimits

0xcae9,	// (0x0006fadf) blid2_tripm_pane_t3

0x0003,

0xfa6a,	// (0x00072a60) blid2_tripm_pane_t_ParamLimits

0xfa6a,	// (0x00072a60) blid2_tripm_pane_t

0xcb1b,	// (0x0006fb11) cell_blid2_satellite_pane_ParamLimits

0xcb1b,	// (0x0006fb11) cell_blid2_satellite_pane

0xcb35,	// (0x0006fb2b) cell_blid2_satellite_pane_g1

0xef84,	// (0x00071f7a) cell_blid2_satellite_pane_t1

0x0adf,	// (0x00063ad5) blid2_speed_pane_g1

0xef92,	// (0x00071f88) blid2_speed_pane_t1

0xefa0,	// (0x00071f96) blid2_speed_pane_t2

0x0001,

0xfa73,	// (0x00072a69) blid2_speed_pane_t

0x0adf,	// (0x00063ad5) blid2_navig_ring_pane_g1

0xcb3e,	// (0x0006fb34) blid2_navig_ring_pane_g2

0xcb46,	// (0x0006fb3c) blid2_navig_ring_pane_g3

0xcb4e,	// (0x0006fb44) blid2_navig_ring_pane_g4

0xcb56,	// (0x0006fb4c) blid2_navig_ring_pane_g5

0x0004,

0xfa78,	// (0x00072a6e) blid2_navig_ring_pane_g

0x0040,	// (0x00063036) bg_popup_window_pane_cp011

0xefae,	// (0x00071fa4) popup_blid2_search_window_g1

0xefb6,	// (0x00071fac) popup_blid2_search_window_t1

0xefc4,	// (0x00071fba) popup_blid2_search_window_t2

0x0001,

0xfa83,	// (0x00072a79) popup_blid2_search_window_t

0x0bdf,	// (0x00063bd5) main_browser_pane_g1

0x085a,	// (0x00063850) main_browser_pane_ParamLimits

0x075f,	// (0x00063755) bg_button_pane_cp011_ParamLimits

0xbd7a,	// (0x0006ed70) cell_vitu2_function_pane_g1_ParamLimits

0x16a2,	// (0x00064698) bg_popup_sub_pane_cp22_ParamLimits

0x697f,	// (0x00069975) input_focus_pane_cp08_ParamLimits

0xc600,	// (0x0006f5f6) popup_vitu2_query_button_pane_ParamLimits

0xc600,	// (0x0006f5f6) popup_vitu2_query_button_pane

0x699a,	// (0x00069990) popup_vitu2_query_input_button_pane

0x5794,	// (0x0006878a) popup_vitu2_query_window_g1_ParamLimits

0x69a4,	// (0x0006999a) popup_vitu2_query_window_g2_ParamLimits

0xf984,	// (0x0007297a) popup_vitu2_query_window_g_ParamLimits

0x0040,	// (0x00063036) bg_button_pane_cp026

0xcb5e,	// (0x0006fb54) popup_vitu2_query_input_button_pane_g1

0x0040,	// (0x00063036) bg_button_pane_cp025

0xefd2,	// (0x00071fc8) popup_vitu2_query_button_pane_t1

0xa58c,	// (0x0006d582) main_mp3_pane_t6

0xa59c,	// (0x0006d592) popup_slider_window_cp01

0xb9f4,	// (0x0006e9ea) cam4_battery_pane

0xbad4,	// (0x0006eaca) cam4_battery_pane_cp02

0xc8e9,	// (0x0006f8df) cam4_battery_pane_cp01

0xc8e9,	// (0x0006f8df) cam4_battery_pane_cp03

0x0adf,	// (0x00063ad5) cam4_battery_pane_g1

0x4a06,	// (0x000679fc) cam4_battery_pane_g2

0x0001,

0xfa88,	// (0x00072a7e) cam4_battery_pane_g

0x4b6a,	// (0x00067b60) popup_blid_sat_info2_window_t11

0x13ec,	// (0x000643e2) aid_size_touch_mv_arrow_left_ParamLimits

0x1415,	// (0x0006440b) aid_size_touch_mv_arrow_right_ParamLimits

0x1473,	// (0x00064469) navi_pane_g1_ParamLimits

0x147f,	// (0x00064475) navi_pane_g2_ParamLimits

0x14ad,	// (0x000644a3) navi_pane_g3_ParamLimits

0xf35f,	// (0x00072355) navi_pane_g_ParamLimits

0x964e,	// (0x0006c644) navi_pane_mv_t1_ParamLimits

0xafe0,	// (0x0006dfd6) grid_imed_effect_pane_ParamLimits

0x81ab,	// (0x0006b1a1) aid_placing_vt_slider_lsc

0x0b2e,	// (0x00063b24) aid_placing_vt_slider_prt

0x075f,	// (0x00063755) bg_tb_trans_pane_cp01_ParamLimits

0x4dea,	// (0x00067de0) popup_image_details_window_g1_ParamLimits

0x4dfd,	// (0x00067df3) popup_image_details_window_g2_ParamLimits

0x4e12,	// (0x00067e08) popup_image_details_window_g3_ParamLimits

0x4e12,	// (0x00067e08) popup_image_details_window_g3

0xf68b,	// (0x00072681) popup_image_details_window_g_ParamLimits

0x4e26,	// (0x00067e1c) popup_image_details_window_t1_ParamLimits

0x4e38,	// (0x00067e2e) popup_image_details_window_t2_ParamLimits

0x4e51,	// (0x00067e47) popup_image_details_window_t3_ParamLimits

0x4e65,	// (0x00067e5b) popup_image_details_window_t4_ParamLimits

0x4e80,	// (0x00067e76) popup_image_details_window_t5_ParamLimits

0xf692,	// (0x00072688) popup_image_details_window_t_ParamLimits

0xc80d,	// (0x0006f803) cl_header_name_pane_ParamLimits

0xc80d,	// (0x0006f803) cl_header_name_pane

0xcb66,	// (0x0006fb5c) cl_header_name_pane_t1_ParamLimits

0xcb66,	// (0x0006fb5c) cl_header_name_pane_t1

0xcb7d,	// (0x0006fb73) cl_header_name_pane_t2_ParamLimits

0xcb7d,	// (0x0006fb73) cl_header_name_pane_t2

0xcba7,	// (0x0006fb9d) cl_header_name_pane_t3_ParamLimits

0xcba7,	// (0x0006fb9d) cl_header_name_pane_t3

0x0002,

0xfa8d,	// (0x00072a83) cl_header_name_pane_t_ParamLimits

0xfa8d,	// (0x00072a83) cl_header_name_pane_t

0x153c,	// (0x00064532) navi_pane_mv_g2_ParamLimits

0x5501,	// (0x000684f7) field_vitu2_entry_pane_g1_ParamLimits

0x550d,	// (0x00068503) field_vitu2_entry_pane_g2_ParamLimits

0x166c,	// (0x00064662) field_vitu2_entry_pane_g3_ParamLimits

0x166c,	// (0x00064662) field_vitu2_entry_pane_g3

0xf88d,	// (0x00072883) field_vitu2_entry_pane_g_ParamLimits

0xbd08,	// (0x0006ecfe) cell_vitu2_itu_pane_g1_ParamLimits

0xbd20,	// (0x0006ed16) cell_vitu2_itu_pane_g2_ParamLimits

0xbd20,	// (0x0006ed16) cell_vitu2_itu_pane_g2

0x0001,

0xf899,	// (0x0007288f) cell_vitu2_itu_pane_g_ParamLimits

0xf899,	// (0x0007288f) cell_vitu2_itu_pane_g

0x075f,	// (0x00063755) bg_vkb2_func_pane_cp05_ParamLimits

0x075f,	// (0x00063755) bg_vkb2_func_pane_cp05

0x075f,	// (0x00063755) bg_vkb2_func_pane_cp03

0x075f,	// (0x00063755) bg_vkb2_func_pane_cp04

0x075f,	// (0x00063755) bg_vkb2_func_pane_cp10_ParamLimits

0x075f,	// (0x00063755) bg_vkb2_func_pane_cp10

0x6b65,	// (0x00069b5b) bg_vkb2_func_pane_cp08

0xc5e8,	// (0x0006f5de) bg_vkb2_func_pane_cp06

0xc7c5,	// (0x0006f7bb) bg_vkb2_func_pane_cp07

0xeeb9,	// (0x00071eaf) bg_vkb2_func_pane_cp11_ParamLimits

0xeeb9,	// (0x00071eaf) bg_vkb2_func_pane_cp11

0xeece,	// (0x00071ec4) bg_vkb2_func_pane_cp12_ParamLimits

0xeece,	// (0x00071ec4) bg_vkb2_func_pane_cp12

0x0040,	// (0x00063036) bg_vkb2_func_pane_cp09

0x552b,	// (0x00068521) bg_vkb2_func_pane_g1

0x0cf0,	// (0x00063ce6) bg_vkb2_func_pane_g2

0x5533,	// (0x00068529) bg_vkb2_func_pane_g3

0x553b,	// (0x00068531) bg_vkb2_func_pane_g4

0x5759,	// (0x0006874f) bg_vkb2_func_pane_g5

0x5553,	// (0x00068549) bg_vkb2_func_pane_g6

0x555b,	// (0x00068551) bg_vkb2_func_pane_g7

0x554b,	// (0x00068541) bg_vkb2_func_pane_g8

0x0cd0,	// (0x00063cc6) bg_vkb2_func_pane_g9

0x0008,

0xfa94,	// (0x00072a8a) bg_vkb2_func_pane_g

0xcab5,	// (0x0006faab) blid2_tripm_pane_g6_ParamLimits

0xcab5,	// (0x0006faab) blid2_tripm_pane_g6

0x5445,	// (0x0006843b) mp4_progress_pane_g1

0xcb0f,	// (0x0006fb05) blid2_tripm_values_pane_ParamLimits

0xcb0f,	// (0x0006fb05) blid2_tripm_values_pane

0xcbcc,	// (0x0006fbc2) blid2_tripm_values_pane_t1

0xcbda,	// (0x0006fbd0) blid2_tripm_values_pane_t2

0xcbe8,	// (0x0006fbde) blid2_tripm_values_pane_t3

0xcbf6,	// (0x0006fbec) blid2_tripm_values_pane_t4

0xcc04,	// (0x0006fbfa) blid2_tripm_values_pane_t5

0xcc12,	// (0x0006fc08) blid2_tripm_values_pane_t6

0xcc20,	// (0x0006fc16) blid2_tripm_values_pane_t7

0xcc2e,	// (0x0006fc24) blid2_tripm_values_pane_t8

0xcc3c,	// (0x0006fc32) blid2_tripm_values_pane_t9

0x0008,

0xfaa7,	// (0x00072a9d) blid2_tripm_values_pane_t

0x81eb,	// (0x0006b1e1) call_video_pane_t1_ParamLimits

0x820c,	// (0x0006b202) call_video_pane_t2_ParamLimits

0xf208,	// (0x000721fe) call_video_pane_t_ParamLimits

0x6775,	// (0x0006976b) msg_header_pane_g1_ParamLimits

0x1757,	// (0x0006474d) msg_header_pane_g2_ParamLimits

0x1757,	// (0x0006474d) msg_header_pane_g2

0x0001,

0xf402,	// (0x000723f8) msg_header_pane_g_ParamLimits

0xf402,	// (0x000723f8) msg_header_pane_g

0x085a,	// (0x00063850) main_clock2_pane_ParamLimits

0xad5a,	// (0x0006dd50) grid_clock2_toolbar_pane_ParamLimits

0xad5a,	// (0x0006dd50) grid_clock2_toolbar_pane

0xad5a,	// (0x0006dd50) listscroll_clock2_pane_ParamLimits

0xad5a,	// (0x0006dd50) listscroll_clock2_pane

0xae0a,	// (0x0006de00) main_clock2_pane_t3_ParamLimits

0xae0a,	// (0x0006de00) main_clock2_pane_t3

0xae1c,	// (0x0006de12) main_clock2_pane_t4_ParamLimits

0xae1c,	// (0x0006de12) main_clock2_pane_t4

0xefe0,	// (0x00071fd6) cell_clock2_toolbar_pane

0xefe8,	// (0x00071fde) cell_clock2_toolbar_pane_cp01

0xefe8,	// (0x00071fde) cell_clock2_toolbar_pane_cp02

0xeff0,	// (0x00071fe6) cell_clock2_toolbar_pane_cp03

0xeff8,	// (0x00071fee) list_clock2_pane

0x1362,	// (0x00064358) scroll_pane_cp10

0xf000,	// (0x00071ff6) list_single_clock2_pane_ParamLimits

0xf000,	// (0x00071ff6) list_single_clock2_pane

0x0a9f,	// (0x00063a95) list_highlight_pane_cp08

0xf00d,	// (0x00072003) list_single_clock2_pane_t1

0xf01b,	// (0x00072011) list_single_clock2_pane_t2

0x0001,

0xfaba,	// (0x00072ab0) list_single_clock2_pane_t

0x0040,	// (0x00063036) bg_button_pane_cp10

0xf029,	// (0x0007201f) cell_clock2_toolbar_pane_g1

0x98fa,	// (0x0006c8f0) aid_main_viewer_pane_g1_ParamLimits

0x98fa,	// (0x0006c8f0) aid_main_viewer_pane_g1

0x9906,	// (0x0006c8fc) aid_main_viewer_pane_g2_ParamLimits

0x9906,	// (0x0006c8fc) aid_main_viewer_pane_g2

0x9912,	// (0x0006c908) aid_main_viewer_pane_g3_ParamLimits

0x9912,	// (0x0006c908) aid_main_viewer_pane_g3

0x9923,	// (0x0006c919) aid_main_viewer_pane_g4_ParamLimits

0x9923,	// (0x0006c919) aid_main_viewer_pane_g4

0x0003,

0xf413,	// (0x00072409) aid_main_viewer_pane_g_ParamLimits

0xf413,	// (0x00072409) aid_main_viewer_pane_g

0xa0ea,	// (0x0006d0e0) main_calc_pane_ParamLimits

0xa0f7,	// (0x0006d0ed) main_dialer2_pane_ParamLimits

0x0040,	// (0x00063036) main_cam6_pane

0x0040,	// (0x00063036) main_vid6_pane

0xad66,	// (0x0006dd5c) listscroll_gen_pane_cp06_ParamLimits

0xad66,	// (0x0006dd5c) listscroll_gen_pane_cp06

0xae2e,	// (0x0006de24) main_clock2_pane_t5_ParamLimits

0xae2e,	// (0x0006de24) main_clock2_pane_t5

0xae7b,	// (0x0006de71) aid_call2_pane_cp10_ParamLimits

0xae8d,	// (0x0006de83) aid_call_pane_cp10_ParamLimits

0x13e0,	// (0x000643d6) popup_clock_analogue_window_cp10_g1_ParamLimits

0x13e0,	// (0x000643d6) popup_clock_analogue_window_cp10_g2_ParamLimits

0xae9f,	// (0x0006de95) popup_clock_analogue_window_cp10_g3_ParamLimits

0xae9f,	// (0x0006de95) popup_clock_analogue_window_cp10_g4_ParamLimits

0x13e0,	// (0x000643d6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf747,	// (0x0007273d) popup_clock_analogue_window_cp10_g_ParamLimits

0xaeb5,	// (0x0006deab) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb5aa,	// (0x0006e5a0) cell_dialer2_keypad_pane_g2_ParamLimits

0xb5aa,	// (0x0006e5a0) cell_dialer2_keypad_pane_g2

0x0001,

0xf82c,	// (0x00072822) cell_dialer2_keypad_pane_g_ParamLimits

0xf82c,	// (0x00072822) cell_dialer2_keypad_pane_g

0xb5c6,	// (0x0006e5bc) cell_dialer2_keypad_pane_t1

0xc04c,	// (0x0006f042) main_cset_text2_pane_ParamLimits

0xc04c,	// (0x0006f042) main_cset_text2_pane

0x5992,	// (0x00068988) area_vitu2_query_pane_g1_ParamLimits

0x6a7f,	// (0x00069a75) area_vitu2_query_pane_g2_ParamLimits

0xf9d7,	// (0x000729cd) area_vitu2_query_pane_g_ParamLimits

0x6b30,	// (0x00069b26) area_vitu2_query_pane_t7_ParamLimits

0x6b30,	// (0x00069b26) area_vitu2_query_pane_t7

0xc5e8,	// (0x0006f5de) bg_button_pane_cp018_ParamLimits

0xc7c5,	// (0x0006f7bb) bg_button_pane_cp021_ParamLimits

0x6b54,	// (0x00069b4a) bg_button_pane_cp022_ParamLimits

0x6b65,	// (0x00069b5b) bg_vkb2_func_pane_cp08_ParamLimits

0xc5e8,	// (0x0006f5de) bg_vkb2_func_pane_cp06_ParamLimits

0xc7c5,	// (0x0006f7bb) bg_vkb2_func_pane_cp07_ParamLimits

0x6b77,	// (0x00069b6d) input_focus_pane_cp09_ParamLimits

0xcc4a,	// (0x0006fc40) cam6_autofocus_pane_ParamLimits

0xcc4a,	// (0x0006fc40) cam6_autofocus_pane

0xcc6c,	// (0x0006fc62) cam6_image_uncrop_pane_ParamLimits

0xcc6c,	// (0x0006fc62) cam6_image_uncrop_pane

0xcc99,	// (0x0006fc8f) cam6_indi_pane_ParamLimits

0xcc99,	// (0x0006fc8f) cam6_indi_pane

0xccb3,	// (0x0006fca9) cam6_mode_pane_ParamLimits

0xccb3,	// (0x0006fca9) cam6_mode_pane

0xccc7,	// (0x0006fcbd) cam6_timer_pane_ParamLimits

0xccc7,	// (0x0006fcbd) cam6_timer_pane

0xccd3,	// (0x0006fcc9) cam6_zoom_pane_ParamLimits

0xccd3,	// (0x0006fcc9) cam6_zoom_pane

0xcceb,	// (0x0006fce1) cam6_mode_pane_g1_ParamLimits

0xcceb,	// (0x0006fce1) cam6_mode_pane_g1

0xccf7,	// (0x0006fced) cam6_mode_pane_g2_ParamLimits

0xccf7,	// (0x0006fced) cam6_mode_pane_g2

0xcd03,	// (0x0006fcf9) cam6_mode_pane_g3_ParamLimits

0xcd03,	// (0x0006fcf9) cam6_mode_pane_g3

0xcd0f,	// (0x0006fd05) cam6_mode_pane_g4_ParamLimits

0xcd0f,	// (0x0006fd05) cam6_mode_pane_g4

0x0003,

0xfabf,	// (0x00072ab5) cam6_mode_pane_g_ParamLimits

0xfabf,	// (0x00072ab5) cam6_mode_pane_g

0xee04,	// (0x00071dfa) bg_tb_trans_pane_cp08_ParamLimits

0xee04,	// (0x00071dfa) bg_tb_trans_pane_cp08

0xf031,	// (0x00072027) cam6_battery_pane_ParamLimits

0xf031,	// (0x00072027) cam6_battery_pane

0xf047,	// (0x0007203d) cam6_indi_pane_g1_ParamLimits

0xf047,	// (0x0007203d) cam6_indi_pane_g1

0xf059,	// (0x0007204f) cam6_indi_pane_g2_ParamLimits

0xf059,	// (0x0007204f) cam6_indi_pane_g2

0x2a1b,	// (0x00065a11) cam6_indi_pane_g3_ParamLimits

0x2a1b,	// (0x00065a11) cam6_indi_pane_g3

0x0002,

0xfac8,	// (0x00072abe) cam6_indi_pane_g_ParamLimits

0xfac8,	// (0x00072abe) cam6_indi_pane_g

0x2a2d,	// (0x00065a23) cam6_indi_pane_t1_ParamLimits

0x2a2d,	// (0x00065a23) cam6_indi_pane_t1

0xbb4c,	// (0x0006eb42) cam6_autofocus_pane_g1

0xbb54,	// (0x0006eb4a) cam6_autofocus_pane_g2

0xbb5c,	// (0x0006eb52) cam6_autofocus_pane_g3

0xbb64,	// (0x0006eb5a) cam6_autofocus_pane_g4

0x0003,

0xfacf,	// (0x00072ac5) cam6_autofocus_pane_g

0x2a53,	// (0x00065a49) cam6_timer_pane_g1

0x2a5b,	// (0x00065a51) cam6_timer_pane_t1

0x2a69,	// (0x00065a5f) cam6_zoom_cont_pane

0x2a71,	// (0x00065a67) cam6_zoom_pane_g1

0x2a79,	// (0x00065a6f) cam6_zoom_pane_g2

0xcd1b,	// (0x0006fd11) cam6_zoom_pane_g3

0x0002,

0xfad8,	// (0x00072ace) cam6_zoom_pane_g

0x0adf,	// (0x00063ad5) cam6_battery_pane_g1

0x0adf,	// (0x00063ad5) cam6_battery_pane_g2

0x0001,

0xf3c3,	// (0x000723b9) cam6_battery_pane_g

0x2a81,	// (0x00065a77) cam6_zoom_cont_pane_g1

0x2a8a,	// (0x00065a80) cam6_zoom_cont_pane_g2

0x2a93,	// (0x00065a89) cam6_zoom_cont_pane_g3

0x0002,

0xfadf,	// (0x00072ad5) cam6_zoom_cont_pane_g

0xcd38,	// (0x0006fd2e) cam6_mode_pane_cp_ParamLimits

0xcd38,	// (0x0006fd2e) cam6_mode_pane_cp

0xccd3,	// (0x0006fcc9) cam6_zoom_pane_cp_ParamLimits

0xccd3,	// (0x0006fcc9) cam6_zoom_pane_cp

0xcd4c,	// (0x0006fd42) vid6_image_uncrop_cif_pane_ParamLimits

0xcd4c,	// (0x0006fd42) vid6_image_uncrop_cif_pane

0xcd78,	// (0x0006fd6e) vid6_image_uncrop_nhd_pane_ParamLimits

0xcd78,	// (0x0006fd6e) vid6_image_uncrop_nhd_pane

0xcc6c,	// (0x0006fc62) vid6_image_uncrop_vga_pane_ParamLimits

0xcc6c,	// (0x0006fc62) vid6_image_uncrop_vga_pane

0xcd95,	// (0x0006fd8b) vid6_image_uncrop_wvga_pane_ParamLimits

0xcd95,	// (0x0006fd8b) vid6_image_uncrop_wvga_pane

0xcdb2,	// (0x0006fda8) vid6_indi_pane_ParamLimits

0xcdb2,	// (0x0006fda8) vid6_indi_pane

0xee04,	// (0x00071dfa) bg_tb_trans_pane_cp09_ParamLimits

0xee04,	// (0x00071dfa) bg_tb_trans_pane_cp09

0x2aab,	// (0x00065aa1) cam6_battery_pane_cp_ParamLimits

0x2aab,	// (0x00065aa1) cam6_battery_pane_cp

0x2ab7,	// (0x00065aad) vid6_indi_pane_g1_ParamLimits

0x2ab7,	// (0x00065aad) vid6_indi_pane_g1

0x2ac9,	// (0x00065abf) vid6_indi_pane_g2_ParamLimits

0x2ac9,	// (0x00065abf) vid6_indi_pane_g2

0x2adb,	// (0x00065ad1) vid6_indi_pane_g3_ParamLimits

0x2adb,	// (0x00065ad1) vid6_indi_pane_g3

0x2af0,	// (0x00065ae6) vid6_indi_pane_g4_ParamLimits

0x2af0,	// (0x00065ae6) vid6_indi_pane_g4

0x2b05,	// (0x00065afb) vid6_indi_pane_g5_ParamLimits

0x2b05,	// (0x00065afb) vid6_indi_pane_g5

0x0004,

0xfae6,	// (0x00072adc) vid6_indi_pane_g_ParamLimits

0xfae6,	// (0x00072adc) vid6_indi_pane_g

0x2b1f,	// (0x00065b15) vid6_indi_pane_t1_ParamLimits

0x2b1f,	// (0x00065b15) vid6_indi_pane_t1

0x2b35,	// (0x00065b2b) vid6_indi_pane_t2_ParamLimits

0x2b35,	// (0x00065b2b) vid6_indi_pane_t2

0x2b5d,	// (0x00065b53) vid6_indi_pane_t3_ParamLimits

0x2b5d,	// (0x00065b53) vid6_indi_pane_t3

0x2b85,	// (0x00065b7b) vid6_indi_pane_t4_ParamLimits

0x2b85,	// (0x00065b7b) vid6_indi_pane_t4

0x0003,

0xfaf1,	// (0x00072ae7) vid6_indi_pane_t_ParamLimits

0xfaf1,	// (0x00072ae7) vid6_indi_pane_t

0x2ba9,	// (0x00065b9f) wait_bar_pane_cp08

0xcdd7,	// (0x0006fdcd) main_cset_text2_pane_t1_ParamLimits

0xcdd7,	// (0x0006fdcd) main_cset_text2_pane_t1

0xcd23,	// (0x0006fd19) listscroll_gen_pane_cp06_t1_ParamLimits

0xcd23,	// (0x0006fd19) listscroll_gen_pane_cp06_t1

0x0040,	// (0x00063036) main_cam6_set_pane

0x07c6,	// (0x000637bc) bg_tb_trans_pane_cp06_ParamLimits

0xb9fc,	// (0x0006e9f2) cam4_indicators_pane_g1_ParamLimits

0xba0d,	// (0x0006ea03) cam4_indicators_pane_g2_ParamLimits

0xf869,	// (0x0007285f) cam4_indicators_pane_g_ParamLimits

0xba2b,	// (0x0006ea21) cam4_indicators_pane_t1_ParamLimits

0x075f,	// (0x00063755) bg_tb_trans_pane_cp07_ParamLimits

0xbade,	// (0x0006ead4) vid4_indicators_pane_g1_ParamLimits

0xbaf2,	// (0x0006eae8) vid4_indicators_pane_g2_ParamLimits

0xbb06,	// (0x0006eafc) vid4_indicators_pane_g3_ParamLimits

0xbb17,	// (0x0006eb0d) vid4_indicators_pane_g4_ParamLimits

0xf87b,	// (0x00072871) vid4_indicators_pane_g_ParamLimits

0xbb35,	// (0x0006eb2b) vid4_indicators_pane_t1_ParamLimits

0xc8f1,	// (0x0006f8e7) vid4_progress_pane_g1_ParamLimits

0xc901,	// (0x0006f8f7) vid4_progress_pane_g2_ParamLimits

0xc911,	// (0x0006f907) vid4_progress_pane_g3_ParamLimits

0xc923,	// (0x0006f919) vid4_progress_pane_g4_ParamLimits

0xfa22,	// (0x00072a18) vid4_progress_pane_g_ParamLimits

0xc93b,	// (0x0006f931) vid4_progress_pane_t1_ParamLimits

0xc951,	// (0x0006f947) vid4_progress_pane_t2_ParamLimits

0xc966,	// (0x0006f95c) vid4_progress_pane_t3_ParamLimits

0xfa2d,	// (0x00072a23) vid4_progress_pane_t_ParamLimits

0xc97b,	// (0x0006f971) wait_bar_pane_cp07_ParamLimits

0xce0a,	// (0x0006fe00) main_cam6_set_pane_g2_ParamLimits

0xce0a,	// (0x0006fe00) main_cam6_set_pane_g2

0xce16,	// (0x0006fe0c) main_cset6_listscroll_pane_ParamLimits

0xce16,	// (0x0006fe0c) main_cset6_listscroll_pane

0xce41,	// (0x0006fe37) main_cset6_slider_pane_ParamLimits

0xce41,	// (0x0006fe37) main_cset6_slider_pane

0xce4d,	// (0x0006fe43) main_cset6_text2_pane_ParamLimits

0xce4d,	// (0x0006fe43) main_cset6_text2_pane

0x2bb8,	// (0x00065bae) main_cset6_text_pane

0x2bc0,	// (0x00065bb6) main_cset_list_pane_copy1_ParamLimits

0x2bc0,	// (0x00065bb6) main_cset_list_pane_copy1

0x2bd0,	// (0x00065bc6) scroll_pane_cp028_copy1

0xce60,	// (0x0006fe56) cset_list_set_pane_copy1

0xce73,	// (0x0006fe69) aid_position_infowindow_above_copy1

0xce7b,	// (0x0006fe71) aid_position_infowindow_below_copy1

0xce83,	// (0x0006fe79) cset_list_set_pane_g1_copy1

0x6946,	// (0x0006993c) cset_list_set_pane_g3_copy1_ParamLimits

0x6946,	// (0x0006993c) cset_list_set_pane_g3_copy1

0x6955,	// (0x0006994b) cset_list_set_pane_t1_copy1_ParamLimits

0x6955,	// (0x0006994b) cset_list_set_pane_t1_copy1

0x075f,	// (0x00063755) list_highlight_pane_cp021_copy1_ParamLimits

0x075f,	// (0x00063755) list_highlight_pane_cp021_copy1

0x2bd9,	// (0x00065bcf) cset6_slider_pane_ParamLimits

0x2bd9,	// (0x00065bcf) cset6_slider_pane

0x2c05,	// (0x00065bfb) main_cset6_slider_pane_g1_ParamLimits

0x2c05,	// (0x00065bfb) main_cset6_slider_pane_g1

0xce8b,	// (0x0006fe81) main_cset6_slider_pane_g2_ParamLimits

0xce8b,	// (0x0006fe81) main_cset6_slider_pane_g2

0x2c2d,	// (0x00065c23) main_cset6_slider_pane_g3_ParamLimits

0x2c2d,	// (0x00065c23) main_cset6_slider_pane_g3

0xceb3,	// (0x0006fea9) main_cset6_slider_pane_g4_ParamLimits

0xceb3,	// (0x0006fea9) main_cset6_slider_pane_g4

0xcebf,	// (0x0006feb5) main_cset6_slider_pane_g5_ParamLimits

0xcebf,	// (0x0006feb5) main_cset6_slider_pane_g5

0x565a,	// (0x00068650) main_cset6_slider_pane_g7_ParamLimits

0x565a,	// (0x00068650) main_cset6_slider_pane_g7

0x5666,	// (0x0006865c) main_cset6_slider_pane_g8_ParamLimits

0x5666,	// (0x0006865c) main_cset6_slider_pane_g8

0xcecd,	// (0x0006fec3) main_cset6_slider_pane_g9_ParamLimits

0xcecd,	// (0x0006fec3) main_cset6_slider_pane_g9

0xced9,	// (0x0006fecf) main_cset6_slider_pane_g10_ParamLimits

0xced9,	// (0x0006fecf) main_cset6_slider_pane_g10

0xcee5,	// (0x0006fedb) main_cset6_slider_pane_g11_ParamLimits

0xcee5,	// (0x0006fedb) main_cset6_slider_pane_g11

0xcef1,	// (0x0006fee7) main_cset6_slider_pane_g12_ParamLimits

0xcef1,	// (0x0006fee7) main_cset6_slider_pane_g12

0xcefd,	// (0x0006fef3) main_cset6_slider_pane_g13_ParamLimits

0xcefd,	// (0x0006fef3) main_cset6_slider_pane_g13

0xcf09,	// (0x0006feff) main_cset6_slider_pane_g14_ParamLimits

0xcf09,	// (0x0006feff) main_cset6_slider_pane_g14

0xcf15,	// (0x0006ff0b) main_cset6_slider_pane_g15_ParamLimits

0xcf15,	// (0x0006ff0b) main_cset6_slider_pane_g15

0xcf2d,	// (0x0006ff23) main_cset6_slider_pane_g16_ParamLimits

0xcf2d,	// (0x0006ff23) main_cset6_slider_pane_g16

0xcf3b,	// (0x0006ff31) main_cset6_slider_pane_g17_ParamLimits

0xcf3b,	// (0x0006ff31) main_cset6_slider_pane_g17

0x0011,

0xfafa,	// (0x00072af0) main_cset6_slider_pane_g_ParamLimits

0xfafa,	// (0x00072af0) main_cset6_slider_pane_g

0x2c39,	// (0x00065c2f) main_cset6_slider_pane_t1_ParamLimits

0x2c39,	// (0x00065c2f) main_cset6_slider_pane_t1

0xcf61,	// (0x0006ff57) main_cset6_slider_pane_t2_ParamLimits

0xcf61,	// (0x0006ff57) main_cset6_slider_pane_t2

0xcf8c,	// (0x0006ff82) main_cset6_slider_pane_t3_ParamLimits

0xcf8c,	// (0x0006ff82) main_cset6_slider_pane_t3

0xcfb7,	// (0x0006ffad) main_cset6_slider_pane_t4_ParamLimits

0xcfb7,	// (0x0006ffad) main_cset6_slider_pane_t4

0xcfe2,	// (0x0006ffd8) main_cset6_slider_pane_t5_ParamLimits

0xcfe2,	// (0x0006ffd8) main_cset6_slider_pane_t5

0x2c7a,	// (0x00065c70) main_cset6_slider_pane_t7_ParamLimits

0x2c7a,	// (0x00065c70) main_cset6_slider_pane_t7

0xd00f,	// (0x00070005) main_cset6_slider_pane_t8_ParamLimits

0xd00f,	// (0x00070005) main_cset6_slider_pane_t8

0xd033,	// (0x00070029) main_cset6_slider_pane_t9_ParamLimits

0xd033,	// (0x00070029) main_cset6_slider_pane_t9

0xd057,	// (0x0007004d) main_cset6_slider_pane_t10_ParamLimits

0xd057,	// (0x0007004d) main_cset6_slider_pane_t10

0xd07b,	// (0x00070071) main_cset6_slider_pane_t11_ParamLimits

0xd07b,	// (0x00070071) main_cset6_slider_pane_t11

0x2cb0,	// (0x00065ca6) main_cset6_slider_pane_t14_ParamLimits

0x2cb0,	// (0x00065ca6) main_cset6_slider_pane_t14

0x2ce9,	// (0x00065cdf) main_cset6_slider_pane_t15_ParamLimits

0x2ce9,	// (0x00065cdf) main_cset6_slider_pane_t15

0x000b,

0xfb1f,	// (0x00072b15) main_cset6_slider_pane_t_ParamLimits

0xfb1f,	// (0x00072b15) main_cset6_slider_pane_t

0xee12,	// (0x00071e08) cset_slider_pane_g1_copy1

0xee1b,	// (0x00071e11) cset_slider_pane_g2_copy1

0xee24,	// (0x00071e1a) cset_slider_pane_g3_copy1

0x0040,	// (0x00063036) bg_popup_sub_pane_cp011_copy1

0x2d22,	// (0x00065d18) main_cset_text_pane_g1_copy1

0x57a8,	// (0x0006879e) main_cset_text_pane_t1_copy1

0x57b6,	// (0x000687ac) main_cset_text_pane_t2_copy1

0x57c4,	// (0x000687ba) main_cset_text_pane_t3_copy1

0x57d2,	// (0x000687c8) main_cset_text_pane_t4_copy1

0x57e0,	// (0x000687d6) main_cset_text_pane_t5_copy1

0x2d2a,	// (0x00065d20) main_cset_text_pane_t6_copy1

0x2d38,	// (0x00065d2e) main_cset_text_pane_t7_copy1

0xd09f,	// (0x00070095) main_cset_text2_pane_t1_copy1

0x075f,	// (0x00063755) main_ncimui_pane

0xa148,	// (0x0006d13e) popup_query_ncimui_window_ParamLimits

0xa148,	// (0x0006d13e) popup_query_ncimui_window

0xa6f5,	// (0x0006d6eb) field_cale_ev2_pane_g4_ParamLimits

0xa6f5,	// (0x0006d6eb) field_cale_ev2_pane_g4

0xb28a,	// (0x0006e280) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb28a,	// (0x0006e280) cell_video_dialer_keypad_pane_g2

0x0001,

0xf803,	// (0x000727f9) cell_video_dialer_keypad_pane_g_ParamLimits

0xf803,	// (0x000727f9) cell_video_dialer_keypad_pane_g

0xb2a2,	// (0x0006e298) cell_video_dialer_keypad_pane_t1

0x0040,	// (0x00063036) bg_popup_window_pane_cp012

0x2891,	// (0x00065887) heading_pane_cp06

0x2d64,	// (0x00065d5a) ncim_query_content_pane

0x0040,	// (0x00063036) bg_popup_heading_pane_cp01

0x2d6c,	// (0x00065d62) ncim_heading_pane_t1

0x2d7a,	// (0x00065d70) ncim_indicator_popup_pane

0x2d8c,	// (0x00065d82) ncim_query_button_pane

0x2da0,	// (0x00065d96) ncim_query_content_pane_t1

0x2db2,	// (0x00065da8) ncim_query_content_pane_t2

0x0005,

0xfb63,	// (0x00072b59) ncim_query_content_pane_t

0x2dec,	// (0x00065de2) ncim_query_list_pane

0x2dfe,	// (0x00065df4) ncim_query_popup_pane

0x2d7a,	// (0x00065d70) ncim_indicator_popup_pane_ParamLimits

0xd1f2,	// (0x000701e8) ncim_query_content_pane_g1_ParamLimits

0xd1f2,	// (0x000701e8) ncim_query_content_pane_g1

0x2da0,	// (0x00065d96) ncim_query_content_pane_t1_ParamLimits

0x2db2,	// (0x00065da8) ncim_query_content_pane_t2_ParamLimits

0xd1fe,	// (0x000701f4) ncim_query_content_pane_t3_ParamLimits

0xd1fe,	// (0x000701f4) ncim_query_content_pane_t3

0xd21b,	// (0x00070211) ncim_query_content_pane_t4_ParamLimits

0xd21b,	// (0x00070211) ncim_query_content_pane_t4

0xd238,	// (0x0007022e) ncim_query_content_pane_t5_ParamLimits

0xd238,	// (0x0007022e) ncim_query_content_pane_t5

0x2dc4,	// (0x00065dba) ncim_query_content_pane_t6_ParamLimits

0x2dc4,	// (0x00065dba) ncim_query_content_pane_t6

0xfb63,	// (0x00072b59) ncim_query_content_pane_t_ParamLimits

0x2dec,	// (0x00065de2) ncim_query_list_pane_ParamLimits

0x2dfe,	// (0x00065df4) ncim_query_popup_pane_ParamLimits

0x2e12,	// (0x00065e08) wait_bar_pane_cp04

0x0040,	// (0x00063036) input_focus_pane_cp011

0x2e1a,	// (0x00065e10) ncim_query_popup_pane_t1

0x2e28,	// (0x00065e1e) ncim_list_query_list_pane_ParamLimits

0x2e28,	// (0x00065e1e) ncim_list_query_list_pane

0x0040,	// (0x00063036) bg_button_pane_cp027

0x2e35,	// (0x00065e2b) ncim_query_button_pane_g1

0x0040,	// (0x00063036) list_highlight_pane_cp012

0x2e3f,	// (0x00065e35) ncim_list_query_list_pane_g1

0x2e47,	// (0x00065e3d) ncim_list_query_list_pane_t1

0xba1c,	// (0x0006ea12) cam4_indicators_pane_g3_ParamLimits

0xba1c,	// (0x0006ea12) cam4_indicators_pane_g3

0xbb23,	// (0x0006eb19) vid4_indicators_pane_g5_ParamLimits

0xbb23,	// (0x0006eb19) vid4_indicators_pane_g5

0xc92f,	// (0x0006f925) vid4_progress_pane_g5_ParamLimits

0xc92f,	// (0x0006f925) vid4_progress_pane_g5

0xd0de,	// (0x000700d4) main_ncimui_pane_g1

0xd146,	// (0x0007013c) ncimui_group_query_pane_ParamLimits

0xd146,	// (0x0007013c) ncimui_group_query_pane

0xd18e,	// (0x00070184) ncimui_list_pane_ParamLimits

0xd18e,	// (0x00070184) ncimui_list_pane

0xd1b5,	// (0x000701ab) ncimui_text_pane_ParamLimits

0xd1b5,	// (0x000701ab) ncimui_text_pane

0xd255,	// (0x0007024b) ncimui_text_pane_t1_ParamLimits

0xd255,	// (0x0007024b) ncimui_text_pane_t1

0x2e55,	// (0x00065e4b) ncimui_list_single_graphic_pane_ParamLimits

0x2e55,	// (0x00065e4b) ncimui_list_single_graphic_pane

0xd274,	// (0x0007026a) ncimui_query_pane_ParamLimits

0xd274,	// (0x0007026a) ncimui_query_pane

0x0040,	// (0x00063036) list_highlight_pane_cp013

0x2e65,	// (0x00065e5b) ncim_list_query_list_pane_t1_copy1

0x2e3f,	// (0x00065e35) ncim_list_single_graphic_pane_g1

0xd287,	// (0x0007027d) ncim_query_button_pane_cp01

0xd293,	// (0x00070289) ncim_query_entry_pane_ParamLimits

0xd293,	// (0x00070289) ncim_query_entry_pane

0xd2a6,	// (0x0007029c) ncimui_query_pane_g1

0xd2b2,	// (0x000702a8) ncimui_query_pane_t1_ParamLimits

0xd2b2,	// (0x000702a8) ncimui_query_pane_t1

0x075f,	// (0x00063755) input_focus_pane_cp012

0x2e73,	// (0x00065e69) ncim_query_entry_pane_t1

0x085a,	// (0x00063850) main_im_pane_ParamLimits

0x075f,	// (0x00063755) main_mobtv_pane_ParamLimits

0x075f,	// (0x00063755) main_mobtv_pane

0xcf49,	// (0x0006ff3f) main_cset6_slider_pane_g18_ParamLimits

0xcf49,	// (0x0006ff3f) main_cset6_slider_pane_g18

0xcf55,	// (0x0006ff4b) main_cset6_slider_pane_g19_ParamLimits

0xcf55,	// (0x0006ff4b) main_cset6_slider_pane_g19

0x166c,	// (0x00064662) bg_main_mobtv_pane_ParamLimits

0x166c,	// (0x00064662) bg_main_mobtv_pane

0xd2cb,	// (0x000702c1) main_mobtv_info_pane

0xd2d6,	// (0x000702cc) main_mobtv_loading_pane_ParamLimits

0xd2d6,	// (0x000702cc) main_mobtv_loading_pane

0x2e85,	// (0x00065e7b) main_mobtv_pg_channel_list_pane

0x2e8f,	// (0x00065e85) main_mobtv_pg_hdr_pane

0xd2e3,	// (0x000702d9) main_mobtv_programe_curr_pane_ParamLimits

0xd2e3,	// (0x000702d9) main_mobtv_programe_curr_pane

0xd2f0,	// (0x000702e6) main_mobtv_programe_next_pane_ParamLimits

0xd2f0,	// (0x000702e6) main_mobtv_programe_next_pane

0x2e98,	// (0x00065e8e) popup_mobtv_noti_window

0x0adf,	// (0x00063ad5) main_tv_pg_hdr_pane_g1

0x2ea0,	// (0x00065e96) main_tv_pg_hdr_pane_g2

0x2ea8,	// (0x00065e9e) main_tv_pg_hdr_pane_g3

0x2eb0,	// (0x00065ea6) main_tv_pg_hdr_pane_g4

0x2eb8,	// (0x00065eae) main_tv_pg_hdr_pane_g5

0x2ec2,	// (0x00065eb8) main_tv_pg_hdr_pane_g6

0x2ecc,	// (0x00065ec2) main_tv_pg_hdr_pane_g7

0x2ed6,	// (0x00065ecc) main_tv_pg_hdr_pane_g8

0x2ee0,	// (0x00065ed6) main_tv_pg_hdr_pane_g9

0x2eea,	// (0x00065ee0) main_tv_pg_hdr_pane_g10

0x2ef4,	// (0x00065eea) main_tv_pg_hdr_pane_g11

0x000a,

0xfb70,	// (0x00072b66) main_tv_pg_hdr_pane_g

0x2efe,	// (0x00065ef4) main_tv_pg_hdr_pane_t1

0x2f0c,	// (0x00065f02) main_tv_pg_hdr_pane_t2

0x2f1a,	// (0x00065f10) main_tv_pg_hdr_pane_t3

0x2f2a,	// (0x00065f20) main_tv_pg_hdr_pane_t4

0x2f3a,	// (0x00065f30) main_tv_pg_hdr_pane_t5

0x0004,

0xfb87,	// (0x00072b7d) main_tv_pg_hdr_pane_t

0x2f4a,	// (0x00065f40) single_mobtv_pg_channel_pane_ParamLimits

0x2f4a,	// (0x00065f40) single_mobtv_pg_channel_pane

0x2f5c,	// (0x00065f52) single_mobtv_pg_channel_table_pane

0x2f65,	// (0x00065f5b) single_mobtv_pg_channel_thumb_pane

0x2f6e,	// (0x00065f64) single_tv_pg_channel_pane_g1

0x2f77,	// (0x00065f6d) single_tv_pg_channel_pane_g2

0x0001,

0xfb92,	// (0x00072b88) single_tv_pg_channel_pane_g

0x07c6,	// (0x000637bc) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x07c6,	// (0x000637bc) bg_single_mobtv_pg_channel_thumb_pane

0x2f80,	// (0x00065f76) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2f80,	// (0x00065f76) single_mobtv_pg_channel_thumb_pane_g1

0x2f8e,	// (0x00065f84) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2f8e,	// (0x00065f84) single_mobtv_pg_channel_thumb_pane_g2

0x2f9a,	// (0x00065f90) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2f9a,	// (0x00065f90) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb97,	// (0x00072b8d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb97,	// (0x00072b8d) single_mobtv_pg_channel_thumb_pane_g

0x2fa6,	// (0x00065f9c) single_mobtv_pg_channel_thumb_pane_t1

0x2fb4,	// (0x00065faa) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb9e,	// (0x00072b94) single_mobtv_pg_channel_thumb_pane_t

0x0adf,	// (0x00063ad5) bg_single_mobtv_pg_channel_table_pane_g1

0x0adf,	// (0x00063ad5) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c3,	// (0x000723b9) bg_single_mobtv_pg_channel_table_pane_g

0x2fc2,	// (0x00065fb8) single_mobtv_pg_channel_table_pane_t1

0x2fd0,	// (0x00065fc6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfba3,	// (0x00072b99) single_mobtv_pg_channel_table_pane_t

0xd305,	// (0x000702fb) main_mobtv_info_pane_g1_ParamLimits

0xd305,	// (0x000702fb) main_mobtv_info_pane_g1

0xd321,	// (0x00070317) main_mobtv_info_pane_t1_ParamLimits

0xd321,	// (0x00070317) main_mobtv_info_pane_t1

0xd399,	// (0x0007038f) main_mobtv_info_pane_t2_ParamLimits

0xd399,	// (0x0007038f) main_mobtv_info_pane_t2

0x0002,

0xfbad,	// (0x00072ba3) main_mobtv_info_pane_t_ParamLimits

0xfbad,	// (0x00072ba3) main_mobtv_info_pane_t

0xd428,	// (0x0007041e) wait_bar_pane_cp05

0xd43a,	// (0x00070430) main_mobtv_loading_pane_g1_ParamLimits

0xd43a,	// (0x00070430) main_mobtv_loading_pane_g1

0xd448,	// (0x0007043e) main_mobtv_loading_pane_g2_ParamLimits

0xd448,	// (0x0007043e) main_mobtv_loading_pane_g2

0xd454,	// (0x0007044a) main_mobtv_loading_pane_g3_ParamLimits

0xd454,	// (0x0007044a) main_mobtv_loading_pane_g3

0x0002,

0xfbb4,	// (0x00072baa) main_mobtv_loading_pane_g_ParamLimits

0xfbb4,	// (0x00072baa) main_mobtv_loading_pane_g

0x2fde,	// (0x00065fd4) main_mobtv_loading_pane_t1_ParamLimits

0x2fde,	// (0x00065fd4) main_mobtv_loading_pane_t1

0x2ff6,	// (0x00065fec) main_mobtv_loading_pane_t2_ParamLimits

0x2ff6,	// (0x00065fec) main_mobtv_loading_pane_t2

0x0001,

0xfbbb,	// (0x00072bb1) main_mobtv_loading_pane_t_ParamLimits

0xfbbb,	// (0x00072bb1) main_mobtv_loading_pane_t

0xd462,	// (0x00070458) wait_bar_pane_cp06_ParamLimits

0xd462,	// (0x00070458) wait_bar_pane_cp06

0x301a,	// (0x00066010) main_mobtv_programe_curr_pane_t1

0x3028,	// (0x0006601e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbc0,	// (0x00072bb6) main_mobtv_programe_curr_pane_t

0x3036,	// (0x0006602c) main_mobtv_programe_next_pane_t1

0x3044,	// (0x0006603a) main_mobtv_programe_next_pane_t2

0x3052,	// (0x00066048) main_mobtv_programe_next_pane_t3

0x0002,

0xfbc5,	// (0x00072bbb) main_mobtv_programe_next_pane_t

0x0040,	// (0x00063036) bg_popup_mobtv_noti_window_pane

0x3060,	// (0x00066056) popup_mobtv_noti_window_g1

0x3068,	// (0x0006605e) popup_mobtv_noti_window_t1

0x3076,	// (0x0006606c) popup_mobtv_noti_window_t2

0x0001,

0xfbcc,	// (0x00072bc2) popup_mobtv_noti_window_t

0x0adf,	// (0x00063ad5) bg_popup_mobtv_noti_window_pane_g1

0x0040,	// (0x00063036) sc_clock_pane

0x0040,	// (0x00063036) main_fs_bigclock_pane

0xcafd,	// (0x0006faf3) blid2_tripm_pane_t4_ParamLimits

0xcafd,	// (0x0006faf3) blid2_tripm_pane_t4

0xd46e,	// (0x00070464) sc_clock_pane_g1_ParamLimits

0xd46e,	// (0x00070464) sc_clock_pane_g1

0xd47c,	// (0x00070472) sc_clock_pane_t1_ParamLimits

0xd47c,	// (0x00070472) sc_clock_pane_t1

0xd48f,	// (0x00070485) sc_clock_pane_t2_ParamLimits

0xd48f,	// (0x00070485) sc_clock_pane_t2

0xd4a1,	// (0x00070497) sc_clock_pane_t3_ParamLimits

0xd4a1,	// (0x00070497) sc_clock_pane_t3

0x0004,

0xfbd1,	// (0x00072bc7) sc_clock_pane_t_ParamLimits

0xfbd1,	// (0x00072bc7) sc_clock_pane_t

0xddc3,	// (0x00070db9) main_fs_bigclock_indicator_pane_ParamLimits

0xddc3,	// (0x00070db9) main_fs_bigclock_indicator_pane

0xd524,	// (0x0007051a) main_fs_bigclock_pane_g1_ParamLimits

0xd524,	// (0x0007051a) main_fs_bigclock_pane_g1

0xddcf,	// (0x00070dc5) main_fs_bigclock_pane_t1_ParamLimits

0xddcf,	// (0x00070dc5) main_fs_bigclock_pane_t1

0xdde1,	// (0x00070dd7) main_fs_bigclock_pane_t2_ParamLimits

0xdde1,	// (0x00070dd7) main_fs_bigclock_pane_t2

0xddf5,	// (0x00070deb) main_fs_bigclock_pane_t3_ParamLimits

0xddf5,	// (0x00070deb) main_fs_bigclock_pane_t3

0x0002,

0xfd62,	// (0x00072d58) main_fs_bigclock_pane_t_ParamLimits

0xfd62,	// (0x00072d58) main_fs_bigclock_pane_t

0x3bdd,	// (0x00066bd3) main_fs_bigclock_indicator_pane_g1

0x2d94,	// (0x00065d8a) ncim_query_content_pane_g2_ParamLimits

0x2d94,	// (0x00065d8a) ncim_query_content_pane_g2

0x0001,

0xfb5e,	// (0x00072b54) ncim_query_content_pane_g_ParamLimits

0xfb5e,	// (0x00072b54) ncim_query_content_pane_g

0xd4b5,	// (0x000704ab) sc_clock_pane_t4_ParamLimits

0xd4b5,	// (0x000704ab) sc_clock_pane_t4

0x075f,	// (0x00063755) main_radioblah_pane

0xb8bf,	// (0x0006e8b5) cell_call4_button_pane_t1_copy1_ParamLimits

0xb8bf,	// (0x0006e8b5) cell_call4_button_pane_t1_copy1

0xd0f8,	// (0x000700ee) main_ncimui_pane_t1_ParamLimits

0xd0f8,	// (0x000700ee) main_ncimui_pane_t1

0xd112,	// (0x00070108) main_ncimui_pane_t2_ParamLimits

0xd112,	// (0x00070108) main_ncimui_pane_t2

0x0002,

0xfb57,	// (0x00072b4d) main_ncimui_pane_t_ParamLimits

0xfb57,	// (0x00072b4d) main_ncimui_pane_t

0x31bb,	// (0x000661b1) main_radioblah_anim_pane_ParamLimits

0x31bb,	// (0x000661b1) main_radioblah_anim_pane

0x31cc,	// (0x000661c2) main_radioblah_info_pane_ParamLimits

0x31cc,	// (0x000661c2) main_radioblah_info_pane

0x31e0,	// (0x000661d6) main_radioblah_pane_t1_ParamLimits

0x31e0,	// (0x000661d6) main_radioblah_pane_t1

0x31fc,	// (0x000661f2) main_radioblah_pane_t2_ParamLimits

0x31fc,	// (0x000661f2) main_radioblah_pane_t2

0x0003,

0xfbf2,	// (0x00072be8) main_radioblah_pane_t_ParamLimits

0xfbf2,	// (0x00072be8) main_radioblah_pane_t

0xd57a,	// (0x00070570) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd57a,	// (0x00070570) main_radioblah_rocker_ctrl_pane

0x3244,	// (0x0006623a) main_radioblah_info_pane_t1_ParamLimits

0x3244,	// (0x0006623a) main_radioblah_info_pane_t1

0xd5bf,	// (0x000705b5) main_radioblah_info_pane_t2_ParamLimits

0xd5bf,	// (0x000705b5) main_radioblah_info_pane_t2

0x0003,

0xfbfb,	// (0x00072bf1) main_radioblah_info_pane_t_ParamLimits

0xfbfb,	// (0x00072bf1) main_radioblah_info_pane_t

0x0adf,	// (0x00063ad5) main_radioblah_rocker_ctrl_pane_g1

0xd66f,	// (0x00070665) main_radioblah_rocker_ctrl_pane_g2

0xd677,	// (0x0007066d) main_radioblah_rocker_ctrl_pane_g3

0xd67f,	// (0x00070675) main_radioblah_rocker_ctrl_pane_g4

0xd687,	// (0x0007067d) main_radioblah_rocker_ctrl_pane_g5

0xd68f,	// (0x00070685) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc04,	// (0x00072bfa) main_radioblah_rocker_ctrl_pane_g

0xd09f,	// (0x00070095) main_cset_text2_pane_t1_copy1_ParamLimits

0xb94a,	// (0x0006e940) cam4_image_uncrop_qvga_pane

0xba91,	// (0x0006ea87) vid4_image_uncrop_qcif_pane

0xcc8b,	// (0x0006fc81) cam6_image_uncrop_qvga_pane_ParamLimits

0xcc8b,	// (0x0006fc81) cam6_image_uncrop_qvga_pane

0x2a9b,	// (0x00065a91) vid6_image_uncrop_qcif_pane_ParamLimits

0x2a9b,	// (0x00065a91) vid6_image_uncrop_qcif_pane

0x0040,	// (0x00063036) bg_popup_preview_window_pane_cp03

0x2d46,	// (0x00065d3c) list_cset_text2_pane

0x2d4e,	// (0x00065d44) main_cset6_text2_pane_g1

0x2d56,	// (0x00065d4c) main_cset6_text2_pane_t1

0xd697,	// (0x0007068d) list_cset_text2_pane_t1_ParamLimits

0xd697,	// (0x0007068d) list_cset_text2_pane_t1

0x075f,	// (0x00063755) main_radioblah_pane_ParamLimits

0xd414,	// (0x0007040a) main_mobtv_info_pane_t3_ParamLimits

0xd414,	// (0x0007040a) main_mobtv_info_pane_t3

0xd568,	// (0x0007055e) main_radioblah_pane_g1

0xd593,	// (0x00070589) main_radioblah_info_pane_g1

0xd614,	// (0x0007060a) main_radioblah_info_pane_t3_ParamLimits

0xd614,	// (0x0007060a) main_radioblah_info_pane_t3

0x91ca,	// (0x0006c1c0) highlight_cell_cale_month_pane_ParamLimits

0x91ca,	// (0x0006c1c0) highlight_cell_cale_month_pane

0x0040,	// (0x00063036) main_phob_fisheye_pane

0x4f8a,	// (0x00067f80) scroll_pane_cp0031_ParamLimits

0x4f8a,	// (0x00067f80) scroll_pane_cp0031

0x2ba9,	// (0x00065b9f) wait_bar_pane_cp08_ParamLimits

0xce60,	// (0x0006fe56) cset_list_set_pane_copy1_ParamLimits

0x327e,	// (0x00066274) highlight_cell_cale_month_pane_g1

0xd6b4,	// (0x000706aa) highlight_cell_cale_month_pane_t1

0xee75,	// (0x00071e6b) list_gen_pane_cp01

0x5645,	// (0x0006863b) scroll_pane_01

0x6bc9,	// (0x00069bbf) list_single_double_fisheye_pane

0x6bd2,	// (0x00069bc8) list_double_fisheye_pane_g1_ParamLimits

0x6bd2,	// (0x00069bc8) list_double_fisheye_pane_g1

0x6bde,	// (0x00069bd4) list_double_fisheye_pane_g2_ParamLimits

0x6bde,	// (0x00069bd4) list_double_fisheye_pane_g2

0x6bf2,	// (0x00069be8) list_double_fisheye_pane_g3_ParamLimits

0x6bf2,	// (0x00069be8) list_double_fisheye_pane_g3

0x0004,

0xfc11,	// (0x00072c07) list_double_fisheye_pane_g_ParamLimits

0xfc11,	// (0x00072c07) list_double_fisheye_pane_g

0x6c1b,	// (0x00069c11) list_double_fisheye_pane_t1_ParamLimits

0x6c1b,	// (0x00069c11) list_double_fisheye_pane_t1

0x6c36,	// (0x00069c2c) list_double_fisheye_pane_t2_ParamLimits

0x6c36,	// (0x00069c2c) list_double_fisheye_pane_t2

0x0001,

0xfc1c,	// (0x00072c12) list_double_fisheye_pane_t_ParamLimits

0xfc1c,	// (0x00072c12) list_double_fisheye_pane_t

0x0040,	// (0x00063036) main_call5_pane

0xd4db,	// (0x000704d1) sc_swipe_pane_ParamLimits

0xd4db,	// (0x000704d1) sc_swipe_pane

0xd6ce,	// (0x000706c4) call5_image_pane_ParamLimits

0xd6ce,	// (0x000706c4) call5_image_pane

0xd6de,	// (0x000706d4) call5_swipe_1_pane_ParamLimits

0xd6de,	// (0x000706d4) call5_swipe_1_pane

0xd6ea,	// (0x000706e0) call5_swipe_2_pane_ParamLimits

0xd6ea,	// (0x000706e0) call5_swipe_2_pane

0xd704,	// (0x000706fa) popup_call5_audio_first_window_ParamLimits

0xd704,	// (0x000706fa) popup_call5_audio_first_window

0x07c6,	// (0x000637bc) call5_swipe_1_pane_g1_ParamLimits

0x07c6,	// (0x000637bc) call5_swipe_1_pane_g1

0x3286,	// (0x0006627c) call5_swipe_1_pane_g2_ParamLimits

0x3286,	// (0x0006627c) call5_swipe_1_pane_g2

0x0001,

0xfc21,	// (0x00072c17) call5_swipe_1_pane_g_ParamLimits

0xfc21,	// (0x00072c17) call5_swipe_1_pane_g

0x3292,	// (0x00066288) call5_swipe_1_pane_t1_ParamLimits

0x3292,	// (0x00066288) call5_swipe_1_pane_t1

0x07c6,	// (0x000637bc) call5_swipe_2_pane_g1_ParamLimits

0x07c6,	// (0x000637bc) call5_swipe_2_pane_g1

0x32a7,	// (0x0006629d) call5_swipe_2_pane_g2_ParamLimits

0x32a7,	// (0x0006629d) call5_swipe_2_pane_g2

0x0001,

0xfc26,	// (0x00072c1c) call5_swipe_2_pane_g_ParamLimits

0xfc26,	// (0x00072c1c) call5_swipe_2_pane_g

0x32b3,	// (0x000662a9) call5_swipe_2_pane_t1_ParamLimits

0x32b3,	// (0x000662a9) call5_swipe_2_pane_t1

0x32c8,	// (0x000662be) sc_swipe_pane_g1_ParamLimits

0x32c8,	// (0x000662be) sc_swipe_pane_g1

0x32d5,	// (0x000662cb) sc_swipe_pane_g2_ParamLimits

0x32d5,	// (0x000662cb) sc_swipe_pane_g2

0x0001,

0xfc2b,	// (0x00072c21) sc_swipe_pane_g_ParamLimits

0xfc2b,	// (0x00072c21) sc_swipe_pane_g

0x32e1,	// (0x000662d7) sc_swipe_pane_t1_ParamLimits

0x32e1,	// (0x000662d7) sc_swipe_pane_t1

0x0040,	// (0x00063036) main_cmail_launcher_pane

0xd712,	// (0x00070708) aid_size_cell_cmail_l_ParamLimits

0xd712,	// (0x00070708) aid_size_cell_cmail_l

0xd720,	// (0x00070716) grid_cmail_l_pane_ParamLimits

0xd720,	// (0x00070716) grid_cmail_l_pane

0xd730,	// (0x00070726) cell_cmail_l_pane_ParamLimits

0xd730,	// (0x00070726) cell_cmail_l_pane

0x32f6,	// (0x000662ec) cell_cmail_l_pane_g1_ParamLimits

0x32f6,	// (0x000662ec) cell_cmail_l_pane_g1

0x3302,	// (0x000662f8) cell_cmail_l_pane_t1_ParamLimits

0x3302,	// (0x000662f8) cell_cmail_l_pane_t1

0x3318,	// (0x0006630e) cell_cmail_l_pane_t2_ParamLimits

0x3318,	// (0x0006630e) cell_cmail_l_pane_t2

0x0001,

0xfc30,	// (0x00072c26) cell_cmail_l_pane_t_ParamLimits

0xfc30,	// (0x00072c26) cell_cmail_l_pane_t

0x075f,	// (0x00063755) grid_highlight_pane_cp018_ParamLimits

0x075f,	// (0x00063755) grid_highlight_pane_cp018

0x74c3,	// (0x0006a4b9) main2_pane_ParamLimits

0x74c3,	// (0x0006a4b9) main2_pane

0x0916,	// (0x0006390c) popup_sp_fs_action_menu_bg_pane_g1

0x091e,	// (0x00063914) popup_sp_fs_action_menu_bg_pane_g2

0x0926,	// (0x0006391c) popup_sp_fs_action_menu_bg_pane_g3

0x092e,	// (0x00063924) popup_sp_fs_action_menu_bg_pane_g4

0x0936,	// (0x0006392c) popup_sp_fs_action_menu_bg_pane_g5

0x093e,	// (0x00063934) popup_sp_fs_action_menu_bg_pane_g6

0x0946,	// (0x0006393c) popup_sp_fs_action_menu_bg_pane_g7

0x094e,	// (0x00063944) popup_sp_fs_action_menu_bg_pane_g8

0x0956,	// (0x0006394c) popup_sp_fs_action_menu_bg_pane_g9

0x095e,	// (0x00063954) popup_sp_fs_action_menu_bg_pane_g10

0x095e,	// (0x00063954) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x00072121) popup_sp_fs_action_menu_bg_pane_g

0x07c6,	// (0x000637bc) list_medium_line_x2_t3_g3_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t3_g3_g1

0x07c6,	// (0x000637bc) list_medium_line_x2_t3_g3_g2_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t3_g3_g2

0x07c6,	// (0x000637bc) list_medium_line_x2_t3_g3_g3_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x000721cf) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x000721cf) list_medium_line_x2_t3_g3_g

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t3_g3_t1

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t3_g3_t2

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x000721d6) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x000721d6) list_medium_line_x2_t3_g3_t

0x07c6,	// (0x000637bc) list_medium_line_x2_t3_g2_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t3_g2_g1

0x07c6,	// (0x000637bc) list_medium_line_x2_t3_g2_g2_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x000721dd) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x000721dd) list_medium_line_x2_t3_g2_g

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t3_g2_t1

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t3_g2_t2

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x000721d6) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x000721d6) list_medium_line_x2_t3_g2_t

0x07c6,	// (0x000637bc) list_medium_line_x2_t4_g4_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t4_g4_g1

0x07c6,	// (0x000637bc) list_medium_line_x2_t4_g4_g2_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t4_g4_g2

0x07c6,	// (0x000637bc) list_medium_line_x2_t4_g4_g3_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t4_g4_g3

0x07c6,	// (0x000637bc) list_medium_line_x2_t4_g4_g4_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x000721e2) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x000721e2) list_medium_line_x2_t4_g4_g

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t4_g4_t1

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t4_g4_t2

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t4_g4_t3

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x000721eb) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x000721eb) list_medium_line_x2_t4_g4_t

0x07c6,	// (0x000637bc) list_medium_line_x2_t2_g4_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t2_g4_g1

0x07c6,	// (0x000637bc) list_medium_line_x2_t2_g4_g2_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t2_g4_g2

0x07c6,	// (0x000637bc) list_medium_line_x2_t2_g4_g3_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t2_g4_g3

0x07c6,	// (0x000637bc) list_medium_line_x2_t2_g4_g4_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x000721e2) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x000721e2) list_medium_line_x2_t2_g4_g

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t2_g4_t1

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t2_g4_t2

0x0001,

0xf25c,	// (0x00072252) list_medium_line_x2_t2_g4_t_ParamLimits

0xf25c,	// (0x00072252) list_medium_line_x2_t2_g4_t

0x07c6,	// (0x000637bc) list_medium_line_x2_t2_g3_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t2_g3_g1

0x07c6,	// (0x000637bc) list_medium_line_x2_t2_g3_g2_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t2_g3_g2

0x07c6,	// (0x000637bc) list_medium_line_x2_t2_g3_g3_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x000721cf) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x000721cf) list_medium_line_x2_t2_g3_g

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t2_g3_t1

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t2_g3_t2

0x0001,

0xf25c,	// (0x00072252) list_medium_line_x2_t2_g3_t_ParamLimits

0xf25c,	// (0x00072252) list_medium_line_x2_t2_g3_t

0x939a,	// (0x0006c390) main_sp_fs_list_pane_ParamLimits

0x939a,	// (0x0006c390) main_sp_fs_list_pane

0x93a6,	// (0x0006c39c) sp_fs_scroll_pane_ParamLimits

0x93a6,	// (0x0006c39c) sp_fs_scroll_pane

0x1041,	// (0x00064037) list_medium_line_x2_t3_t1

0x1041,	// (0x00064037) list_medium_line_x2_t3_t2

0x1041,	// (0x00064037) list_medium_line_x2_t3_t3

0x0002,

0xf2a7,	// (0x0007229d) list_medium_line_x2_t3_t

0x1041,	// (0x00064037) list_medium_line_x3_t4_t1

0x1041,	// (0x00064037) list_medium_line_x3_t4_t2

0x1041,	// (0x00064037) list_medium_line_x3_t4_t3

0x1041,	// (0x00064037) list_medium_line_x3_t4_t4

0x0003,

0xf2ae,	// (0x000722a4) list_medium_line_x3_t4_t

0x1041,	// (0x00064037) list_medium_line_x4_t5_t1

0x1041,	// (0x00064037) list_medium_line_x4_t5_t2

0x1041,	// (0x00064037) list_medium_line_x4_t5_t3

0x1041,	// (0x00064037) list_medium_line_x4_t5_t4

0x1041,	// (0x00064037) list_medium_line_x4_t5_t5

0x0004,

0xf2b7,	// (0x000722ad) list_medium_line_x4_t5_t

0x07c6,	// (0x000637bc) list_medium_line_t4_g4_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_t4_g4_g1

0x07c6,	// (0x000637bc) list_medium_line_t4_g4_g2_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_t4_g4_g2

0x07c6,	// (0x000637bc) list_medium_line_t4_g4_g3_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_t4_g4_g3

0x07c6,	// (0x000637bc) list_medium_line_t4_g4_g4_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x000721e2) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x000721e2) list_medium_line_t4_g4_g

0x0ab1,	// (0x00063aa7) list_medium_line_t4_g4_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t4_g4_t1

0x0ab1,	// (0x00063aa7) list_medium_line_t4_g4_t2_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t4_g4_t2

0x0ab1,	// (0x00063aa7) list_medium_line_t4_g4_t3_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t4_g4_t3

0x0ab1,	// (0x00063aa7) list_medium_line_t4_g4_t4_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x000721eb) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x000721eb) list_medium_line_t4_g4_t

0x948f,	// (0x0006c485) chi_dic_find_pane_g1

0xa105,	// (0x0006d0fb) main_tport_pane

0x1041,	// (0x00064037) list_medium_line_plain_t1

0x07c6,	// (0x000637bc) list_medium_line_t2_g2_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_t2_g2_g1

0x07c6,	// (0x000637bc) list_medium_line_t2_g2_g2_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x000721dd) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x000721dd) list_medium_line_t2_g2_g

0x0ab1,	// (0x00063aa7) list_medium_line_t2_g2_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t2_g2_t1

0x0ab1,	// (0x00063aa7) list_medium_line_t2_g2_t2_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t2_g2_t2

0x0001,

0xf25c,	// (0x00072252) list_medium_line_t2_g2_t_ParamLimits

0xf25c,	// (0x00072252) list_medium_line_t2_g2_t

0x6b87,	// (0x00069b7d) aid_sp_fs_list_icon_a_sm

0xc98e,	// (0x0006f984) aid_sp_fs_list_icon_d

0x3c7c,	// (0x00066c72) aid_sp_fs_text_primary

0x6b8f,	// (0x00069b85) aid_sp_fs_text_secondary

0x0040,	// (0x00063036) list_medium_line

0x0040,	// (0x00063036) list_medium_line_g2

0x0040,	// (0x00063036) list_medium_line_g3

0x0040,	// (0x00063036) list_medium_line_plain

0x0040,	// (0x00063036) list_medium_line_plain_t2

0x0040,	// (0x00063036) list_medium_line_plain_t3

0x0040,	// (0x00063036) list_medium_line_right_icon

0x0040,	// (0x00063036) list_medium_line_right_iconx2

0x0040,	// (0x00063036) list_medium_line_t2

0x0040,	// (0x00063036) list_medium_line_t2_g2

0x0040,	// (0x00063036) list_medium_line_t2_g3

0x0040,	// (0x00063036) list_medium_line_t2_right_icon

0x0040,	// (0x00063036) list_medium_line_t2_right_iconx2

0x0040,	// (0x00063036) list_medium_line_t3

0x0040,	// (0x00063036) list_medium_line_t3_g2

0x0040,	// (0x00063036) list_medium_line_t3_g3

0x0040,	// (0x00063036) list_medium_line_t3_right_iconx2

0x0040,	// (0x00063036) list_medium_line_t4_g4

0x0040,	// (0x00063036) list_medium_line_x2

0x0040,	// (0x00063036) list_medium_line_x2_t2_g2

0x0040,	// (0x00063036) list_medium_line_x2_t2_g3

0x0040,	// (0x00063036) list_medium_line_x2_t2_g4

0x0040,	// (0x00063036) list_medium_line_x2_t3

0x0040,	// (0x00063036) list_medium_line_x2_t3_g2

0x0040,	// (0x00063036) list_medium_line_x2_t3_g3

0x0040,	// (0x00063036) list_medium_line_x2_t3_g4

0x0040,	// (0x00063036) list_medium_line_x2_t4_g2

0x0040,	// (0x00063036) list_medium_line_x2_t4_g4

0x0040,	// (0x00063036) list_medium_line_x3

0x0040,	// (0x00063036) list_medium_line_x3_t4

0x0040,	// (0x00063036) list_medium_line_x3_t4_g4

0x0040,	// (0x00063036) list_medium_line_x4_t4

0x0040,	// (0x00063036) list_medium_line_x4_t4_g7

0x0040,	// (0x00063036) list_medium_line_x4_t5

0x6b98,	// (0x00069b8e) list_single_fs_dyc_pane_ParamLimits

0x6b98,	// (0x00069b8e) list_single_fs_dyc_pane

0x07c6,	// (0x000637bc) list_medium_line_x4_t4_g7_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x4_t4_g7_g1

0x07c6,	// (0x000637bc) list_medium_line_x4_t4_g7_g2_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x4_t4_g7_g2

0x07c6,	// (0x000637bc) list_medium_line_x4_t4_g7_g3_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x4_t4_g7_g3

0x07c6,	// (0x000637bc) list_medium_line_x4_t4_g7_g4_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x4_t4_g7_g4

0x07c6,	// (0x000637bc) list_medium_line_x4_t4_g7_g5_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x4_t4_g7_g5

0x07c6,	// (0x000637bc) list_medium_line_x4_t4_g7_g6_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x4_t4_g7_g6

0x07d4,	// (0x000637ca) list_medium_line_x4_t4_g7_g7_ParamLimits

0x07d4,	// (0x000637ca) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb38,	// (0x00072b2e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb38,	// (0x00072b2e) list_medium_line_x4_t4_g7_g

0x0ab1,	// (0x00063aa7) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x4_t4_g7_t1

0x0ab1,	// (0x00063aa7) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x4_t4_g7_t2

0x0ab1,	// (0x00063aa7) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x4_t4_g7_t3

0x168e,	// (0x00064684) list_medium_line_x4_t4_g7_t4_ParamLimits

0x168e,	// (0x00064684) list_medium_line_x4_t4_g7_t4

0x168e,	// (0x00064684) list_medium_line_x4_t4_g7_t5_ParamLimits

0x168e,	// (0x00064684) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb47,	// (0x00072b3d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb47,	// (0x00072b3d) list_medium_line_x4_t4_g7_t

0x6bac,	// (0x00069ba2) list_single_dyc_row_pane_ParamLimits

0x6bac,	// (0x00069ba2) list_single_dyc_row_pane

0xd6c2,	// (0x000706b8) call5_gesture_pane_ParamLimits

0xd6c2,	// (0x000706b8) call5_gesture_pane

0xd6f6,	// (0x000706ec) call5_windows_pane_ParamLimits

0xd6f6,	// (0x000706ec) call5_windows_pane

0xd749,	// (0x0007073f) call5_swipe_1_pane_cp_ParamLimits

0xd749,	// (0x0007073f) call5_swipe_1_pane_cp

0xd755,	// (0x0007074b) call5_swipe_2_pane_cp_ParamLimits

0xd755,	// (0x0007074b) call5_swipe_2_pane_cp

0x0a9f,	// (0x00063a95) call5_image_pane_cp

0xd761,	// (0x00070757) popup_call5_audio_first_window_cp_ParamLimits

0xd761,	// (0x00070757) popup_call5_audio_first_window_cp

0x32c8,	// (0x000662be) call5_swipe_1_pane_g1_cp_ParamLimits

0x32c8,	// (0x000662be) call5_swipe_1_pane_g1_cp

0x3335,	// (0x0006632b) call5_swipe_1_pane_g2_cp

0x32e1,	// (0x000662d7) call5_swipe_1_pane_t1_cp_ParamLimits

0x32e1,	// (0x000662d7) call5_swipe_1_pane_t1_cp

0x32c8,	// (0x000662be) call5_swipe_2_pane_g1_cp_ParamLimits

0x32c8,	// (0x000662be) call5_swipe_2_pane_g1_cp

0x333d,	// (0x00066333) call5_swipe_2_pane_g2_cp

0x3345,	// (0x0006633b) call5_swipe_2_pane_t1_cp_ParamLimits

0x3345,	// (0x0006633b) call5_swipe_2_pane_t1_cp

0x075f,	// (0x00063755) main_sp_fs_email_pane

0x335a,	// (0x00066350) main_sp_fs_listscroll_pane_te

0xd76f,	// (0x00070765) popup_sp_fs_action_menu_pane_ParamLimits

0xd76f,	// (0x00070765) popup_sp_fs_action_menu_pane

0x0adf,	// (0x00063ad5) bg_sp_fs_ctrlbar_pane_g1

0x3363,	// (0x00066359) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x336c,	// (0x00066362) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3375,	// (0x0006636b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0adf,	// (0x00063ad5) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc35,	// (0x00072c2b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4987,	// (0x0006797d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4987,	// (0x0006797d) bg_sp_fs_ctrlbar_ddmenu_pane

0x337e,	// (0x00066374) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x337e,	// (0x00066374) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x338a,	// (0x00066380) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x338a,	// (0x00066380) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc3e,	// (0x00072c34) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc3e,	// (0x00072c34) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3396,	// (0x0006638c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3396,	// (0x0006638c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0adf,	// (0x00063ad5) list_medium_line_t2_right_icon_g1

0x1041,	// (0x00064037) list_medium_line_t2_right_icon_t1

0x1041,	// (0x00064037) list_medium_line_t2_right_icon_t2

0x0001,

0xfc43,	// (0x00072c39) list_medium_line_t2_right_icon_t

0x16a2,	// (0x00064698) bg_sp_fs_ctrlbar_pane_ParamLimits

0x16a2,	// (0x00064698) bg_sp_fs_ctrlbar_pane

0xd80a,	// (0x00070800) main_sp_fs_ctrlbar_button_pane_cp01

0xd812,	// (0x00070808) main_sp_fs_ctrlbar_ddmenu_pane

0x33e8,	// (0x000663de) main_sp_fs_ctrlbar_pane_g1

0x33f4,	// (0x000663ea) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc48,	// (0x00072c3e) main_sp_fs_ctrlbar_pane_g

0xd84e,	// (0x00070844) main_sp_fs_ctrlbar_pane_t1

0xd889,	// (0x0007087f) main_sp_fs_ctrlbar_pane

0xd89f,	// (0x00070895) main_sp_fs_listscroll_pane_te_cp01

0x6c58,	// (0x00069c4e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6c58,	// (0x00069c4e) popup_sp_fs_action_menu_pane_cp01

0x075f,	// (0x00063755) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x075f,	// (0x00063755) bg_sp_fs_highlight_list_pane_cp01

0x6c78,	// (0x00069c6e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6c78,	// (0x00069c6e) sp_fs_action_menu_list_gene_pane_g1

0x342a,	// (0x00066420) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x342a,	// (0x00066420) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc56,	// (0x00072c4c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc56,	// (0x00072c4c) sp_fs_action_menu_list_gene_pane_g

0x6c87,	// (0x00069c7d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6c87,	// (0x00069c7d) sp_fs_action_menu_list_gene_pane_t1

0x6c9f,	// (0x00069c95) sp_fs_action_menu_list_gene_pane_ParamLimits

0x6c9f,	// (0x00069c95) sp_fs_action_menu_list_gene_pane

0x346e,	// (0x00066464) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x346e,	// (0x00066464) popup_sp_fs_action_menu_bg_pane

0x6cc0,	// (0x00069cb6) sp_fs_action_menu_list_pane_ParamLimits

0x6cc0,	// (0x00069cb6) sp_fs_action_menu_list_pane

0x6ce2,	// (0x00069cd8) sp_fs_scroll_pane_cp01_ParamLimits

0x6ce2,	// (0x00069cd8) sp_fs_scroll_pane_cp01

0x1041,	// (0x00064037) list_medium_line_plain_t2_t1

0x1041,	// (0x00064037) list_medium_line_plain_t2_t2

0x0001,

0xfc43,	// (0x00072c39) list_medium_line_plain_t2_t

0x1041,	// (0x00064037) list_medium_line_plain_t3_t1

0x1041,	// (0x00064037) list_medium_line_plain_t3_t2

0x1041,	// (0x00064037) list_medium_line_plain_t3_t3

0x0002,

0xf2a7,	// (0x0007229d) list_medium_line_plain_t3_t

0x07c6,	// (0x000637bc) list_medium_line_x2_t2_g2_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t2_g2_g1

0x07c6,	// (0x000637bc) list_medium_line_x2_t2_g2_g2_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x000721dd) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x000721dd) list_medium_line_x2_t2_g2_g

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t2_g2_t1

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t2_g2_t2

0x0001,

0xf25c,	// (0x00072252) list_medium_line_x2_t2_g2_t_ParamLimits

0xf25c,	// (0x00072252) list_medium_line_x2_t2_g2_t

0x07c6,	// (0x000637bc) list_medium_line_x2_t4_g2_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t4_g2_g1

0x07c6,	// (0x000637bc) list_medium_line_x2_t4_g2_g2_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x000721dd) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x000721dd) list_medium_line_x2_t4_g2_g

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t4_g2_t1

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t4_g2_t2

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t4_g2_t3

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x000721eb) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x000721eb) list_medium_line_x2_t4_g2_t

0x0adf,	// (0x00063ad5) list_medium_line_t3_right_iconx2_g1

0x0adf,	// (0x00063ad5) list_medium_line_t3_right_iconx2_g2

0x0adf,	// (0x00063ad5) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c8,	// (0x000723be) list_medium_line_t3_right_iconx2_g

0x1041,	// (0x00064037) list_medium_line_t3_right_iconx2_t1

0x1041,	// (0x00064037) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc43,	// (0x00072c39) list_medium_line_t3_right_iconx2_t

0x07c6,	// (0x000637bc) list_medium_line_x3_t4_g4_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x3_t4_g4_g1

0x07c6,	// (0x000637bc) list_medium_line_x3_t4_g4_g2_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x3_t4_g4_g2

0x07c6,	// (0x000637bc) list_medium_line_x3_t4_g4_g3_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x3_t4_g4_g3

0x07c6,	// (0x000637bc) list_medium_line_x3_t4_g4_g4_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x000721e2) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x000721e2) list_medium_line_x3_t4_g4_g

0x0ab1,	// (0x00063aa7) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x3_t4_g4_t1

0x0ab1,	// (0x00063aa7) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x3_t4_g4_t2

0x0ab1,	// (0x00063aa7) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x3_t4_g4_t3

0x0ab1,	// (0x00063aa7) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x000721eb) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x000721eb) list_medium_line_x3_t4_g4_t

0x6d08,	// (0x00069cfe) list_single_dyc_row_text_pane_t1_ParamLimits

0x6d08,	// (0x00069cfe) list_single_dyc_row_text_pane_t1

0x6d3f,	// (0x00069d35) list_single_dyc_row_text_pane_t2_ParamLimits

0x6d3f,	// (0x00069d35) list_single_dyc_row_text_pane_t2

0x6db5,	// (0x00069dab) list_single_dyc_row_text_pane_t3_ParamLimits

0x6db5,	// (0x00069dab) list_single_dyc_row_text_pane_t3

0x0005,

0xfc5b,	// (0x00072c51) list_single_dyc_row_text_pane_t_ParamLimits

0xfc5b,	// (0x00072c51) list_single_dyc_row_text_pane_t

0x6e86,	// (0x00069e7c) list_single_dyc_row_pane_g1_ParamLimits

0x6e86,	// (0x00069e7c) list_single_dyc_row_pane_g1

0x6e92,	// (0x00069e88) list_single_dyc_row_pane_g2_ParamLimits

0x6e92,	// (0x00069e88) list_single_dyc_row_pane_g2

0x6e9e,	// (0x00069e94) list_single_dyc_row_pane_g3_ParamLimits

0x6e9e,	// (0x00069e94) list_single_dyc_row_pane_g3

0x6eaa,	// (0x00069ea0) list_single_dyc_row_pane_g4_ParamLimits

0x6eaa,	// (0x00069ea0) list_single_dyc_row_pane_g4

0x0003,

0xfc68,	// (0x00072c5e) list_single_dyc_row_pane_g_ParamLimits

0xfc68,	// (0x00072c5e) list_single_dyc_row_pane_g

0x6eb6,	// (0x00069eac) list_single_dyc_row_text_pane_ParamLimits

0x6eb6,	// (0x00069eac) list_single_dyc_row_text_pane

0x0040,	// (0x00063036) bg_sp_fs_scroll_pane

0x350f,	// (0x00066505) thumb_sp_fs_scroll_pane

0x07c6,	// (0x000637bc) list_medium_line_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_g1

0x0ab1,	// (0x00063aa7) list_medium_line_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t1

0x07c6,	// (0x000637bc) list_medium_line_x2_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_g1

0x07c6,	// (0x000637bc) list_medium_line_x2_g2_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x000721dd) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x000721dd) list_medium_line_x2_g

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t1

0x07c6,	// (0x000637bc) list_medium_line_x3_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x3_g1

0x54dc,	// (0x000684d2) list_medium_line_x3_g2_ParamLimits

0x54dc,	// (0x000684d2) list_medium_line_x3_g2

0x0001,

0xfc71,	// (0x00072c67) list_medium_line_x3_g_ParamLimits

0xfc71,	// (0x00072c67) list_medium_line_x3_g

0x3518,	// (0x0006650e) list_medium_line_x3_t1_ParamLimits

0x3518,	// (0x0006650e) list_medium_line_x3_t1

0x352c,	// (0x00066522) thumb_sp_fs_scroll_pane_g1

0x3535,	// (0x0006652b) thumb_sp_fs_scroll_pane_g2

0x353e,	// (0x00066534) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc76,	// (0x00072c6c) thumb_sp_fs_scroll_pane_g

0x352c,	// (0x00066522) bg_sp_fs_scroll_pane_g1

0x3535,	// (0x0006652b) bg_sp_fs_scroll_pane_g2

0x353e,	// (0x00066534) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc76,	// (0x00072c6c) bg_sp_fs_scroll_pane_g

0x07c6,	// (0x000637bc) list_medium_line_x2_t3_g4_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t3_g4_g1

0x07c6,	// (0x000637bc) list_medium_line_x2_t3_g4_g2_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t3_g4_g2

0x07c6,	// (0x000637bc) list_medium_line_x2_t3_g4_g3_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t3_g4_g3

0x07c6,	// (0x000637bc) list_medium_line_x2_t3_g4_g4_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x000721e2) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x000721e2) list_medium_line_x2_t3_g4_g

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t3_g4_t1

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t3_g4_t2

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x000721d6) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x000721d6) list_medium_line_x2_t3_g4_t

0x07c6,	// (0x000637bc) list_medium_line_g2_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_g2_g1

0x07c6,	// (0x000637bc) list_medium_line_g2_g2_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x000721dd) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x000721dd) list_medium_line_g2_g

0x0ab1,	// (0x00063aa7) list_medium_line_g2_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_g2_t1

0x07c6,	// (0x000637bc) list_medium_line_t3_g2_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_t3_g2_g1

0x07c6,	// (0x000637bc) list_medium_line_t3_g2_g2_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x000721dd) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x000721dd) list_medium_line_t3_g2_g

0x0ab1,	// (0x00063aa7) list_medium_line_t3_g2_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t3_g2_t1

0x0ab1,	// (0x00063aa7) list_medium_line_t3_g2_t2_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t3_g2_t2

0x0ab1,	// (0x00063aa7) list_medium_line_t3_g2_t3_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x000721d6) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x000721d6) list_medium_line_t3_g2_t

0x0adf,	// (0x00063ad5) list_medium_line_right_icon_g1

0x1041,	// (0x00064037) list_medium_line_right_icon_t1

0x07c6,	// (0x000637bc) list_medium_line_t2_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_t2_g1

0x0ab1,	// (0x00063aa7) list_medium_line_t2_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t2_t1

0x0ab1,	// (0x00063aa7) list_medium_line_t2_t2_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t2_t2

0x0001,

0xf25c,	// (0x00072252) list_medium_line_t2_t_ParamLimits

0xf25c,	// (0x00072252) list_medium_line_t2_t

0x07c6,	// (0x000637bc) list_medium_line_t3_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_t3_g1

0x0ab1,	// (0x00063aa7) list_medium_line_t3_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t3_t1

0x0ab1,	// (0x00063aa7) list_medium_line_t3_t2_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t3_t2

0x0ab1,	// (0x00063aa7) list_medium_line_t3_t3_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x000721d6) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x000721d6) list_medium_line_t3_t

0x07c6,	// (0x000637bc) list_medium_line_g3_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_g3_g1

0x07c6,	// (0x000637bc) list_medium_line_g3_g2_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_g3_g2

0x07c6,	// (0x000637bc) list_medium_line_g3_g3_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x000721cf) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x000721cf) list_medium_line_g3_g

0x0ab1,	// (0x00063aa7) list_medium_line_g3_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_g3_t1

0x07c6,	// (0x000637bc) list_medium_line_t2_g3_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_t2_g3_g1

0x07c6,	// (0x000637bc) list_medium_line_t2_g3_g2_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_t2_g3_g2

0x07c6,	// (0x000637bc) list_medium_line_t2_g3_g3_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x000721cf) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x000721cf) list_medium_line_t2_g3_g

0x0ab1,	// (0x00063aa7) list_medium_line_t2_g3_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t2_g3_t1

0x0ab1,	// (0x00063aa7) list_medium_line_t2_g3_t2_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t2_g3_t2

0x0001,

0xf25c,	// (0x00072252) list_medium_line_t2_g3_t_ParamLimits

0xf25c,	// (0x00072252) list_medium_line_t2_g3_t

0x07c6,	// (0x000637bc) list_medium_line_t3_g3_g1_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_t3_g3_g1

0x07c6,	// (0x000637bc) list_medium_line_t3_g3_g2_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_t3_g3_g2

0x07c6,	// (0x000637bc) list_medium_line_t3_g3_g3_ParamLimits

0x07c6,	// (0x000637bc) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x000721cf) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x000721cf) list_medium_line_t3_g3_g

0x0ab1,	// (0x00063aa7) list_medium_line_t3_g3_t1_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t3_g3_t1

0x0ab1,	// (0x00063aa7) list_medium_line_t3_g3_t2_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t3_g3_t2

0x0ab1,	// (0x00063aa7) list_medium_line_t3_g3_t3_ParamLimits

0x0ab1,	// (0x00063aa7) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x000721d6) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x000721d6) list_medium_line_t3_g3_t

0x0adf,	// (0x00063ad5) list_medium_line_right_iconx2_g1

0x0adf,	// (0x00063ad5) list_medium_line_right_iconx2_g2

0x0001,

0xf3c3,	// (0x000723b9) list_medium_line_right_iconx2_g

0x1041,	// (0x00064037) list_medium_line_right_iconx2_t1

0x0adf,	// (0x00063ad5) list_medium_line_t2_right_iconx2_g1

0x0adf,	// (0x00063ad5) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3c3,	// (0x000723b9) list_medium_line_t2_right_iconx2_g

0x1041,	// (0x00064037) list_medium_line_t2_right_iconx2_t1

0x1041,	// (0x00064037) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc43,	// (0x00072c39) list_medium_line_t2_right_iconx2_t

0x1041,	// (0x00064037) list_medium_line_x4_t4_t1

0x1041,	// (0x00064037) list_medium_line_x4_t4_t2

0x1041,	// (0x00064037) list_medium_line_x4_t4_t3

0x1041,	// (0x00064037) list_medium_line_x4_t4_t4

0x0003,

0xf2ae,	// (0x000722a4) list_medium_line_x4_t4_t

0xd8da,	// (0x000708d0) tport_appsw_pane_ParamLimits

0xd8da,	// (0x000708d0) tport_appsw_pane

0xd8e8,	// (0x000708de) tport_contact_pane_ParamLimits

0xd8e8,	// (0x000708de) tport_contact_pane

0xd8f8,	// (0x000708ee) tport_listscroll_pane_ParamLimits

0xd8f8,	// (0x000708ee) tport_listscroll_pane

0xd908,	// (0x000708fe) cell_tport_appsw_pane_ParamLimits

0xd908,	// (0x000708fe) cell_tport_appsw_pane

0x07d4,	// (0x000637ca) tport_appsw_pane_g1_ParamLimits

0x07d4,	// (0x000637ca) tport_appsw_pane_g1

0x3547,	// (0x0006653d) tport_contact_pane_g1

0x2e1a,	// (0x00065e10) tport_contact_pane_t1

0x3550,	// (0x00066546) tport_contact_pane_t2

0x0001,

0xfc7d,	// (0x00072c73) tport_contact_pane_t

0x355e,	// (0x00066554) list_tport_pane

0x3567,	// (0x0006655d) scroll_pane_cp_030

0xd93b,	// (0x00070931) cell_tport_appsw_pane_g1

0xd94b,	// (0x00070941) cell_tport_appsw_pane_t1

0xd959,	// (0x0007094f) grid_highlight_pane_cp019

0xd961,	// (0x00070957) list_tport_double_graphic_pane_ParamLimits

0xd961,	// (0x00070957) list_tport_double_graphic_pane

0x075f,	// (0x00063755) list_highlight_pane_cp023_ParamLimits

0x075f,	// (0x00063755) list_highlight_pane_cp023

0xd972,	// (0x00070968) list_tport_double_graphic_pane_g1_ParamLimits

0xd972,	// (0x00070968) list_tport_double_graphic_pane_g1

0xd97f,	// (0x00070975) list_tport_double_graphic_pane_t1_ParamLimits

0xd97f,	// (0x00070975) list_tport_double_graphic_pane_t1

0xd994,	// (0x0007098a) list_tport_double_graphic_pane_t2_ParamLimits

0xd994,	// (0x0007098a) list_tport_double_graphic_pane_t2

0x0001,

0xfc89,	// (0x00072c7f) list_tport_double_graphic_pane_t_ParamLimits

0xfc89,	// (0x00072c7f) list_tport_double_graphic_pane_t

0x0040,	// (0x00063036) main_cale_note_pane

0xbcee,	// (0x0006ece4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xbcee,	// (0x0006ece4) cell_vitu2_function_top_wide_pane_cp01

0xd428,	// (0x0007041e) wait_bar_pane_cp05_ParamLimits

0x075f,	// (0x00063755) listscroll_cmail_pane

0x3570,	// (0x00066566) list_cmail_pane

0xd9a6,	// (0x0007099c) list_cmail_body_pane

0xd9cd,	// (0x000709c3) list_single_cmail_header_caption_pane

0xd9f6,	// (0x000709ec) list_single_cmail_header_detail_pane_ParamLimits

0xd9f6,	// (0x000709ec) list_single_cmail_header_detail_pane

0x3580,	// (0x00066576) list_single_cmail_header_caption_pane_t1

0x6ed5,	// (0x00069ecb) list_single_cmail_header_detail_pane_g1_ParamLimits

0x6ed5,	// (0x00069ecb) list_single_cmail_header_detail_pane_g1

0xda2c,	// (0x00070a22) list_single_cmail_header_detail_pane_g2_ParamLimits

0xda2c,	// (0x00070a22) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc8e,	// (0x00072c84) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc8e,	// (0x00072c84) list_single_cmail_header_detail_pane_g

0x6eeb,	// (0x00069ee1) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6eeb,	// (0x00069ee1) list_single_cmail_header_detail_pane_t1

0x6f4b,	// (0x00069f41) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6f4b,	// (0x00069f41) list_single_cmail_header_editor_pane_bg

0x2f77,	// (0x00065f6d) list_cmail_body_pane_g1

0x3627,	// (0x0006661d) list_cmail_body_pane_t1

0x552b,	// (0x00068521) list_single_cmail_header_editor_pane_bg_g1

0x0cf0,	// (0x00063ce6) list_single_cmail_header_editor_pane_bg_g1_copy1

0x553b,	// (0x00068531) list_single_cmail_header_editor_pane_bg_g1_copy2

0x5533,	// (0x00068529) list_single_cmail_header_editor_pane_bg_g1_copy3

0x5759,	// (0x0006874f) list_single_cmail_header_editor_pane_bg_g1_copy4

0x555b,	// (0x00068551) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x554b,	// (0x00068541) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x5553,	// (0x00068549) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0cd0,	// (0x00063cc6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xda38,	// (0x00070a2e) calenote_gesture_pane_ParamLimits

0xda38,	// (0x00070a2e) calenote_gesture_pane

0xda52,	// (0x00070a48) calenote_window_pane_ParamLimits

0xda52,	// (0x00070a48) calenote_window_pane

0x3635,	// (0x0006662b) popup_note_window_cp01

0xda6a,	// (0x00070a60) calenote_swipe_1_pane_ParamLimits

0xda6a,	// (0x00070a60) calenote_swipe_1_pane

0xd755,	// (0x0007074b) calenote_swipe_2_pane_ParamLimits

0xd755,	// (0x0007074b) calenote_swipe_2_pane

0x32c8,	// (0x000662be) calenote_swipe_1_pane_g1_ParamLimits

0x32c8,	// (0x000662be) calenote_swipe_1_pane_g1

0x32d5,	// (0x000662cb) calenote_swipe_1_pane_g2_ParamLimits

0x32d5,	// (0x000662cb) calenote_swipe_1_pane_g2

0x0001,

0xfc2b,	// (0x00072c21) calenote_swipe_1_pane_g_ParamLimits

0xfc2b,	// (0x00072c21) calenote_swipe_1_pane_g

0x3647,	// (0x0006663d) calenote_swipe_1_pane_t1_ParamLimits

0x3647,	// (0x0006663d) calenote_swipe_1_pane_t1

0x32c8,	// (0x000662be) calenote_swipe_2_pane_g1_ParamLimits

0x32c8,	// (0x000662be) calenote_swipe_2_pane_g1

0x3666,	// (0x0006665c) calenote_swipe_2_pane_g2_ParamLimits

0x3666,	// (0x0006665c) calenote_swipe_2_pane_g2

0x0001,

0xfc9a,	// (0x00072c90) calenote_swipe_2_pane_g_ParamLimits

0xfc9a,	// (0x00072c90) calenote_swipe_2_pane_g

0x3672,	// (0x00066668) calenote_swipe_2_pane_t1_ParamLimits

0x3672,	// (0x00066668) calenote_swipe_2_pane_t1

0x0040,	// (0x00063036) main_mup_navstr_pane

0xab60,	// (0x0006db56) main_mup3_pane_t7_ParamLimits

0xab60,	// (0x0006db56) main_mup3_pane_t7

0xb38b,	// (0x0006e381) main_mp4_pane_g6_ParamLimits

0xb38b,	// (0x0006e381) main_mp4_pane_g6

0xb71b,	// (0x0006e711) main_image3_pane_t4_ParamLimits

0xb71b,	// (0x0006e711) main_image3_pane_t4

0xda7d,	// (0x00070a73) popup_navstr_preview_pane_ParamLimits

0xda7d,	// (0x00070a73) popup_navstr_preview_pane

0xda89,	// (0x00070a7f) scroll_navstr_pane_ParamLimits

0xda89,	// (0x00070a7f) scroll_navstr_pane

0x0040,	// (0x00063036) bg_popup_preview_window_pane_cp04

0x3699,	// (0x0006668f) popup_navstr_preview_pane_t1

0xda95,	// (0x00070a8b) scroll_navstr_pane_g1_ParamLimits

0xda95,	// (0x00070a8b) scroll_navstr_pane_g1

0xdaa2,	// (0x00070a98) scroll_navstr_pane_t1_ParamLimits

0xdaa2,	// (0x00070a98) scroll_navstr_pane_t1

0x363e,	// (0x00066634) bg_button_pane_cp014

0x363e,	// (0x00066634) bg_button_pane_cp030

0x6bfe,	// (0x00069bf4) list_double_fisheye_pane_g4_ParamLimits

0x6bfe,	// (0x00069bf4) list_double_fisheye_pane_g4

0x6c0a,	// (0x00069c00) list_double_fisheye_pane_g5_ParamLimits

0x6c0a,	// (0x00069c00) list_double_fisheye_pane_g5

0x1035,	// (0x0006402b) sp_fs_scroll_pane_cp03

0x33e8,	// (0x000663de) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x33f4,	// (0x000663ea) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc48,	// (0x00072c3e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd84e,	// (0x00070844) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x3578,	// (0x0006656e) sp_fs_scroll_pane_cp02

0x09e7,	// (0x000639dd) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x09e7,	// (0x000639dd) popup_sp_fs_calendar_preview_list_single_pane

0x0040,	// (0x00063036) main_cam6_pano_pane

0x075f,	// (0x00063755) main_mup3_pane_ParamLimits

0x0040,	// (0x00063036) main_phacti_pane

0xd2fd,	// (0x000702f3) bg_button_pane_cp11

0xd315,	// (0x0007030b) main_mobtv_info_pane_g2_ParamLimits

0xd315,	// (0x0007030b) main_mobtv_info_pane_g2

0x0001,

0xfba8,	// (0x00072b9e) main_mobtv_info_pane_g_ParamLimits

0xfba8,	// (0x00072b9e) main_mobtv_info_pane_g

0xd4c7,	// (0x000704bd) sc_clock_pane_t5_ParamLimits

0xd4c7,	// (0x000704bd) sc_clock_pane_t5

0xd568,	// (0x0007055e) main_radioblah_pane_g1_ParamLimits

0x3214,	// (0x0006620a) main_radioblah_pane_t3_ParamLimits

0x3214,	// (0x0006620a) main_radioblah_pane_t3

0x322c,	// (0x00066222) main_radioblah_pane_t4_ParamLimits

0x322c,	// (0x00066222) main_radioblah_pane_t4

0xd586,	// (0x0007057c) main_radioblah_text_pane_ParamLimits

0xd586,	// (0x0007057c) main_radioblah_text_pane

0xd593,	// (0x00070589) main_radioblah_info_pane_g1_ParamLimits

0xd628,	// (0x0007061e) main_radioblah_info_pane_t4_ParamLimits

0xd628,	// (0x0007061e) main_radioblah_info_pane_t4

0x075f,	// (0x00063755) main_sp_fs_calendar_pane

0xdab4,	// (0x00070aaa) main_phacti_pane_g1

0xdabc,	// (0x00070ab2) phacti_note_pane_ParamLimits

0xdabc,	// (0x00070ab2) phacti_note_pane

0x36b0,	// (0x000666a6) phacti_term_pane_ParamLimits

0x36b0,	// (0x000666a6) phacti_term_pane

0x36c5,	// (0x000666bb) phacti_note_pane_t1_ParamLimits

0x36c5,	// (0x000666bb) phacti_note_pane_t1

0x6f62,	// (0x00069f58) phacti_term_pane_g1

0x6f6a,	// (0x00069f60) phacti_term_pane_t1_ParamLimits

0x6f6a,	// (0x00069f60) phacti_term_pane_t1

0x370e,	// (0x00066704) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0a86,	// (0x00063a7c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfca4,	// (0x00072c9a) popup_sp_fs_calendar_preview_list_single_pane_g

0x3716,	// (0x0006670c) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3716,	// (0x0006670c) popup_sp_fs_calendar_preview_list_single_pane_t1

0x372c,	// (0x00066722) aid_popup_sp_fs_bg_corner_pane

0x0adf,	// (0x00063ad5) popup_sp_fs_calendar_preview_bg_pane_g1

0x0040,	// (0x00063036) popup_sp_fs_calendar_preview_bg_pane

0x3734,	// (0x0006672a) popup_sp_fs_calendar_preview_list_pane

0x16a2,	// (0x00064698) bg_main_sp_fs_cale_pane_ParamLimits

0x16a2,	// (0x00064698) bg_main_sp_fs_cale_pane

0x6f9d,	// (0x00069f93) listscroll_cale_mrui_pane_ParamLimits

0x6f9d,	// (0x00069f93) listscroll_cale_mrui_pane

0x6fb2,	// (0x00069fa8) listscroll_sp_fs_schedule_track_pane

0x6fbb,	// (0x00069fb1) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x6fbb,	// (0x00069fb1) main_sp_fs_ctrlbar_pane_cp01

0x3776,	// (0x0006676c) main_sp_fs_ribbon_pane

0x6fce,	// (0x00069fc4) popup_sp_fs_cale_preview_window

0xdb1f,	// (0x00070b15) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdb1f,	// (0x00070b15) list_single_sp_fs_schedule_track_pane

0x07b8,	// (0x000637ae) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x07b8,	// (0x000637ae) bg_sp_fs_highlight_list_pane_cp03

0xdb3f,	// (0x00070b35) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xdb3f,	// (0x00070b35) list_single_sp_fs_schedule_track_pane_g1

0xdb4b,	// (0x00070b41) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xdb4b,	// (0x00070b41) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfca9,	// (0x00072c9f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfca9,	// (0x00072c9f) list_single_sp_fs_schedule_track_pane_g

0xdb57,	// (0x00070b4d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xdb57,	// (0x00070b4d) list_single_sp_fs_schedule_track_pane_t1

0xdb6f,	// (0x00070b65) sp_fs_schedule_track_pane_ParamLimits

0xdb6f,	// (0x00070b65) sp_fs_schedule_track_pane

0x3790,	// (0x00066786) sp_fs_schedule_track_pane_g1

0x3798,	// (0x0006678e) sp_fs_schedule_track_pane_g2

0x37a0,	// (0x00066796) sp_fs_schedule_track_pane_g3

0x37a8,	// (0x0006679e) sp_fs_schedule_track_pane_g4

0x37b0,	// (0x000667a6) sp_fs_schedule_track_pane_g5

0x0004,

0xfcae,	// (0x00072ca4) sp_fs_schedule_track_pane_g

0x552b,	// (0x00068521) bg_sp_fs_schedule_viewer_highlight_g1

0x0cf0,	// (0x00063ce6) bg_sp_fs_schedule_viewer_highlight_g2

0x5533,	// (0x00068529) bg_sp_fs_schedule_viewer_highlight_g3

0x553b,	// (0x00068531) bg_sp_fs_schedule_viewer_highlight_g4

0x5759,	// (0x0006874f) bg_sp_fs_schedule_viewer_highlight_g5

0x554b,	// (0x00068541) bg_sp_fs_schedule_viewer_highlight_g6

0x5553,	// (0x00068549) bg_sp_fs_schedule_viewer_highlight_g7

0x555b,	// (0x00068551) bg_sp_fs_schedule_viewer_highlight_g8

0x0cd0,	// (0x00063cc6) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcb9,	// (0x00072caf) bg_sp_fs_schedule_viewer_highlight_g

0x0040,	// (0x00063036) bg_main_sp_fs_ribbon_pane

0xdb7f,	// (0x00070b75) main_sp_fs_ribbon_pane_g1

0x37b8,	// (0x000667ae) main_sp_fs_ribbon_pane_t1

0xdb88,	// (0x00070b7e) main_sp_fs_ribbon_pane_t2

0x37c7,	// (0x000667bd) main_sp_fs_ribbon_pane_t3

0x0002,

0xfccc,	// (0x00072cc2) main_sp_fs_ribbon_pane_t

0x37d6,	// (0x000667cc) main_sp_fs_ribbon_scheduler_pane

0x37de,	// (0x000667d4) bg_main_sp_fs_ribbon_pane_g1

0x37e7,	// (0x000667dd) bg_main_sp_fs_ribbon_pane_g2

0x37f0,	// (0x000667e6) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcd3,	// (0x00072cc9) bg_main_sp_fs_ribbon_pane_g

0x37f8,	// (0x000667ee) main_sp_fs_ribbon_scheduler_pane_g1

0x3801,	// (0x000667f7) main_sp_fs_ribbon_scheduler_pane_g2

0x380a,	// (0x00066800) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcda,	// (0x00072cd0) main_sp_fs_ribbon_scheduler_pane_g

0x3813,	// (0x00066809) list_cale_mrui_pane

0xdb97,	// (0x00070b8d) sp_fs_scroll_pane_cp07_ParamLimits

0xdb97,	// (0x00070b8d) sp_fs_scroll_pane_cp07

0xdbb3,	// (0x00070ba9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xdbb3,	// (0x00070ba9) bg_sp_fs_schedule_viewer_highlight

0x3820,	// (0x00066816) list_single_sp_fs_schedule_track_pane_cp01

0x3828,	// (0x0006681e) list_sp_fs_schedule_track_pane

0x3830,	// (0x00066826) sp_fs_scroll_pane_cp06_ParamLimits

0x3830,	// (0x00066826) sp_fs_scroll_pane_cp06

0x0adf,	// (0x00063ad5) bgmain_sp_fs_calendar_pane_g1

0x6fe0,	// (0x00069fd6) list_single_cale_mrui_pane_ParamLimits

0x6fe0,	// (0x00069fd6) list_single_cale_mrui_pane

0x700a,	// (0x0006a000) list_single_cale_mrui_row_pane_ParamLimits

0x700a,	// (0x0006a000) list_single_cale_mrui_row_pane

0x7017,	// (0x0006a00d) list_single_cale_mrui_row_pane_g1_ParamLimits

0x7017,	// (0x0006a00d) list_single_cale_mrui_row_pane_g1

0x704f,	// (0x0006a045) list_single_cale_mrui_row_pane_t1_ParamLimits

0x704f,	// (0x0006a045) list_single_cale_mrui_row_pane_t1

0x7061,	// (0x0006a057) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7061,	// (0x0006a057) list_single_cale_mrui_row_pane_t2

0x70c7,	// (0x0006a0bd) list_single_cale_mrui_row_pane_t3_ParamLimits

0x70c7,	// (0x0006a0bd) list_single_cale_mrui_row_pane_t3

0x70f6,	// (0x0006a0ec) list_single_cale_mrui_row_pane_t4_ParamLimits

0x70f6,	// (0x0006a0ec) list_single_cale_mrui_row_pane_t4

0x0003,

0xfce8,	// (0x00072cde) list_single_cale_mrui_row_pane_t_ParamLimits

0xfce8,	// (0x00072cde) list_single_cale_mrui_row_pane_t

0x7125,	// (0x0006a11b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7125,	// (0x0006a11b) list_single_cmail_header_editor_pane_bg_cp01

0x7145,	// (0x0006a13b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7145,	// (0x0006a13b) list_single_cmail_header_editor_pane_bg_cp02

0xdbc0,	// (0x00070bb6) main_radioblah_text_pane_t1_ParamLimits

0xdbc0,	// (0x00070bb6) main_radioblah_text_pane_t1

0x3904,	// (0x000668fa) cam6_indi_pane_cp01

0x390c,	// (0x00066902) cam6_mode_pane_cp01

0x3914,	// (0x0006690a) cam6_pano_pane

0x391d,	// (0x00066913) cam6_zoom_pane_cp01

0x3925,	// (0x0006691b) cam6_pano_image_pane

0x3930,	// (0x00066926) cam6_pano_pane_g1

0x2f77,	// (0x00065f6d) cam6_pano_pane_g2

0x3939,	// (0x0006692f) cam6_pano_pane_g3

0x3942,	// (0x00066938) cam6_pano_pane_g4

0x5208,	// (0x000681fe) cam6_pano_pane_g5

0x394b,	// (0x00066941) cam6_pano_pane_g6

0x3955,	// (0x0006694b) cam6_pano_pane_g7

0x395d,	// (0x00066953) cam6_pano_pane_g8

0x3966,	// (0x0006695c) cam6_pano_pane_g9

0x0008,

0xfcf1,	// (0x00072ce7) cam6_pano_pane_g

0x0040,	// (0x00063036) main_browser_tag_pane

0x3691,	// (0x00066687) grid_navstr_albumart_pane

0x3971,	// (0x00066967) cell_navstr_albumart_pane_ParamLimits

0x3971,	// (0x00066967) cell_navstr_albumart_pane

0x3991,	// (0x00066987) cell_navstr_albumart_pane_g1

0x27d1,	// (0x000657c7) cell_navstr_albumart_pane_g2

0x27e1,	// (0x000657d7) cell_navstr_albumart_pane_g3

0x27d9,	// (0x000657cf) cell_navstr_albumart_pane_g4

0x0003,

0xfd04,	// (0x00072cfa) cell_navstr_albumart_pane_g

0xdbdb,	// (0x00070bd1) bt_list_pane_ParamLimits

0xdbdb,	// (0x00070bd1) bt_list_pane

0xdbfb,	// (0x00070bf1) bt_list_pane_t1

0xdc0a,	// (0x00070c00) bt_list_pane_t2

0x0001,

0xfd0d,	// (0x00072d03) bt_list_pane_t

0x0040,	// (0x00063036) main_cale_prevew_pane

0xdc19,	// (0x00070c0f) popup_cale_preview_window_ParamLimits

0xdc19,	// (0x00070c0f) popup_cale_preview_window

0x075f,	// (0x00063755) bg_popup_preview_window_pane_cp05_ParamLimits

0x075f,	// (0x00063755) bg_popup_preview_window_pane_cp05

0x3999,	// (0x0006698f) list_cale_preview_pane_ParamLimits

0x3999,	// (0x0006698f) list_cale_preview_pane

0xdc32,	// (0x00070c28) list_double_cale_preview_pane_ParamLimits

0xdc32,	// (0x00070c28) list_double_cale_preview_pane

0xdc44,	// (0x00070c3a) list_single_cale_preview_pane_ParamLimits

0xdc44,	// (0x00070c3a) list_single_cale_preview_pane

0xdc5a,	// (0x00070c50) list_single_cale_preview_pane_g1

0xdc62,	// (0x00070c58) list_single_cale_preview_pane_t1_ParamLimits

0xdc62,	// (0x00070c58) list_single_cale_preview_pane_t1

0xdc77,	// (0x00070c6d) list_double_cale_preview_pane_g1

0xdc7f,	// (0x00070c75) list_double_cale_preview_pane_t1_ParamLimits

0xdc7f,	// (0x00070c75) list_double_cale_preview_pane_t1

0xdc94,	// (0x00070c8a) list_double_cale_preview_pane_t2_ParamLimits

0xdc94,	// (0x00070c8a) list_double_cale_preview_pane_t2

0x0001,

0xfd12,	// (0x00072d08) list_double_cale_preview_pane_t_ParamLimits

0xfd12,	// (0x00072d08) list_double_cale_preview_pane_t

0x0040,	// (0x00063036) main_ezdial_pane

0x075f,	// (0x00063755) main_sp_fs_email_pane_ParamLimits

0xd7b3,	// (0x000707a9) cmail_ddmenu_btn01_pane_ParamLimits

0xd7b3,	// (0x000707a9) cmail_ddmenu_btn01_pane

0xd7d0,	// (0x000707c6) cmail_ddmenu_btn02_pane_ParamLimits

0xd7d0,	// (0x000707c6) cmail_ddmenu_btn02_pane

0xd7ee,	// (0x000707e4) cmail_ddmenu_btn03_pane_ParamLimits

0xd7ee,	// (0x000707e4) cmail_ddmenu_btn03_pane

0xd889,	// (0x0007087f) main_sp_fs_ctrlbar_pane_ParamLimits

0xd89f,	// (0x00070895) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd9a6,	// (0x0007099c) list_cmail_body_pane_ParamLimits

0x358e,	// (0x00066584) bg_button_pane_cp12

0x35a3,	// (0x00066599) list_single_cmail_header_detail_pane_g3_ParamLimits

0x35a3,	// (0x00066599) list_single_cmail_header_detail_pane_g3

0x6f27,	// (0x00069f1d) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6f27,	// (0x00069f1d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc95,	// (0x00072c8b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc95,	// (0x00072c8b) list_single_cmail_header_detail_pane_t

0x6f7f,	// (0x00069f75) phacti_term_pane_t2_ParamLimits

0x6f7f,	// (0x00069f75) phacti_term_pane_t2

0x0001,

0xfc9f,	// (0x00072c95) phacti_term_pane_t_ParamLimits

0xfc9f,	// (0x00072c95) phacti_term_pane_t

0x39a5,	// (0x0006699b) aid_size_list_single_double

0xdcac,	// (0x00070ca2) popup_ezdial_listscroll_window

0xdccd,	// (0x00070cc3) popup_number_entry_window_cp01

0x0a9f,	// (0x00063a95) bg_popup_call_pane_cp09

0x39b1,	// (0x000669a7) ezdial_list_pane

0x39b9,	// (0x000669af) scroll_pane_cp23

0x4987,	// (0x0006797d) bg_button_pane_cp028_ParamLimits

0x4987,	// (0x0006797d) bg_button_pane_cp028

0xdcdb,	// (0x00070cd1) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xdcdb,	// (0x00070cd1) cmail_ddmenu_btn01_pane_g1

0xdceb,	// (0x00070ce1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xdceb,	// (0x00070ce1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd17,	// (0x00072d0d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd17,	// (0x00072d0d) cmail_ddmenu_btn01_pane_g

0x39c1,	// (0x000669b7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x39c1,	// (0x000669b7) cmail_ddmenu_btn01_pane_t1

0x16a2,	// (0x00064698) bg_button_pane_cp029_ParamLimits

0x16a2,	// (0x00064698) bg_button_pane_cp029

0xdcf7,	// (0x00070ced) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xdcf7,	// (0x00070ced) cmail_ddmenu_btn02_pane_g1

0xdd0f,	// (0x00070d05) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xdd0f,	// (0x00070d05) cmail_ddmenu_btn02_pane_t1

0x07b8,	// (0x000637ae) bg_button_pane_cp031_ParamLimits

0x07b8,	// (0x000637ae) bg_button_pane_cp031

0xdcf7,	// (0x00070ced) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xdcf7,	// (0x00070ced) cmail_ddmenu_btn03_pane_g1

0xdd0f,	// (0x00070d05) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xdd0f,	// (0x00070d05) cmail_ddmenu_btn03_pane_t1

0xb5c6,	// (0x0006e5bc) cell_dialer2_keypad_pane_t1_ParamLimits

0xb5e0,	// (0x0006e5d6) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb5e0,	// (0x0006e5d6) cell_dialer2_keypad_pane_t1_copy1

0xd13e,	// (0x00070134) ncimui_group_button_pane

0x075f,	// (0x00063755) main_sp_fs_calendar_pane_ParamLimits

0xd9cd,	// (0x000709c3) list_single_cmail_header_caption_pane_ParamLimits

0x6f94,	// (0x00069f8a) aid_recal_txt_sm_pane

0x0040,	// (0x00063036) mian_recal_day_pane

0x6fce,	// (0x00069fc4) popup_sp_fs_cale_preview_window_ParamLimits

0x39d7,	// (0x000669cd) list_recal_day_pane

0x717c,	// (0x0006a172) list_single_recal_day_pane_ParamLimits

0x717c,	// (0x0006a172) list_single_recal_day_pane

0x3a2b,	// (0x00066a21) list_single_recal_day_pane_g1_ParamLimits

0x3a2b,	// (0x00066a21) list_single_recal_day_pane_g1

0x718e,	// (0x0006a184) list_single_recal_day_pane_g2_ParamLimits

0x718e,	// (0x0006a184) list_single_recal_day_pane_g2

0x719a,	// (0x0006a190) list_single_recal_day_pane_g3_ParamLimits

0x719a,	// (0x0006a190) list_single_recal_day_pane_g3

0x71a6,	// (0x0006a19c) list_single_recal_day_pane_g4_ParamLimits

0x71a6,	// (0x0006a19c) list_single_recal_day_pane_g4

0x71b4,	// (0x0006a1aa) list_single_recal_day_pane_g5_ParamLimits

0x71b4,	// (0x0006a1aa) list_single_recal_day_pane_g5

0x71ca,	// (0x0006a1c0) list_single_recal_day_pane_g6_ParamLimits

0x71ca,	// (0x0006a1c0) list_single_recal_day_pane_g6

0x0004,

0xfd26,	// (0x00072d1c) list_single_recal_day_pane_g_ParamLimits

0xfd26,	// (0x00072d1c) list_single_recal_day_pane_g

0x71de,	// (0x0006a1d4) list_single_recal_day_pane_t1

0x71f0,	// (0x0006a1e6) list_single_recal_day_pane_t2

0x0001,

0xfd31,	// (0x00072d27) list_single_recal_day_pane_t

0xdd33,	// (0x00070d29) ncimui_query_button_pane_ParamLimits

0xdd33,	// (0x00070d29) ncimui_query_button_pane

0xdd43,	// (0x00070d39) ncimui_query_button_pane_t1_ParamLimits

0xdd43,	// (0x00070d39) ncimui_query_button_pane_t1

0x3a93,	// (0x00066a89) ncimui_query_button_pane_t2_ParamLimits

0x3a93,	// (0x00066a89) ncimui_query_button_pane_t2

0x0001,

0xfd36,	// (0x00072d2c) ncimui_query_button_pane_t_ParamLimits

0xfd36,	// (0x00072d2c) ncimui_query_button_pane_t

0xdd56,	// (0x00070d4c) query_button_pane_ParamLimits

0xdd56,	// (0x00070d4c) query_button_pane

0x0040,	// (0x00063036) bg_button_pane_cp0028

0x3aa6,	// (0x00066a9c) query_button_pane_t1

0xa105,	// (0x0006d0fb) main_tport_pane_ParamLimits

0xd8b0,	// (0x000708a6) bg_popup_window_pane_cp01_ParamLimits

0xd8b0,	// (0x000708a6) bg_popup_window_pane_cp01

0xd8be,	// (0x000708b4) heading_pane_cp08_ParamLimits

0xd8be,	// (0x000708b4) heading_pane_cp08

0xd8cc,	// (0x000708c2) heading_pane_cp07_ParamLimits

0xd8cc,	// (0x000708c2) heading_pane_cp07

0xd93b,	// (0x00070931) cell_tport_appsw_pane_g2

0x0002,

0xfc82,	// (0x00072c78) cell_tport_appsw_pane_g

0x672a,	// (0x00069720) input_candi_list_open_g1

0x0ed6,	// (0x00063ecc) list_cale_time_pane_g6_ParamLimits

0x0ed6,	// (0x00063ecc) list_cale_time_pane_g6

0xa5a6,	// (0x0006d59c) aid_size_touch_calib_1_ParamLimits

0xa5a6,	// (0x0006d59c) aid_size_touch_calib_1

0xa5b2,	// (0x0006d5a8) aid_size_touch_calib_2_ParamLimits

0xa5b2,	// (0x0006d5a8) aid_size_touch_calib_2

0xa5c0,	// (0x0006d5b6) aid_size_touch_calib_3_ParamLimits

0xa5c0,	// (0x0006d5b6) aid_size_touch_calib_3

0xa5d0,	// (0x0006d5c6) aid_size_touch_calib_4_ParamLimits

0xa5d0,	// (0x0006d5c6) aid_size_touch_calib_4

0xa5de,	// (0x0006d5d4) main_touch_calib_button_group_pane_ParamLimits

0xa5de,	// (0x0006d5d4) main_touch_calib_button_group_pane

0xa5ec,	// (0x0006d5e2) main_touch_calib_pane_g1_ParamLimits

0xa5f8,	// (0x0006d5ee) main_touch_calib_pane_g2_ParamLimits

0xa604,	// (0x0006d5fa) main_touch_calib_pane_g3_ParamLimits

0xa610,	// (0x0006d606) main_touch_calib_pane_g4_ParamLimits

0xf6c4,	// (0x000726ba) main_touch_calib_pane_g_ParamLimits

0xa61c,	// (0x0006d612) main_touch_calib_pane_t1_ParamLimits

0xa635,	// (0x0006d62b) main_touch_calib_pane_t2_ParamLimits

0xa64e,	// (0x0006d644) main_touch_calib_pane_t3_ParamLimits

0xa664,	// (0x0006d65a) main_touch_calib_pane_t4_ParamLimits

0xa67a,	// (0x0006d670) main_touch_calib_pane_t5_ParamLimits

0xf6cd,	// (0x000726c3) main_touch_calib_pane_t_ParamLimits

0x4fae,	// (0x00067fa4) list_single_fp_cale_pane_g3_ParamLimits

0x4fae,	// (0x00067fa4) list_single_fp_cale_pane_g3

0x075f,	// (0x00063755) bg_button_pane_cp012_ParamLimits

0x075f,	// (0x00063755) bg_vkb2_func_pane_cp03_ParamLimits

0xc439,	// (0x0006f42f) cell_vitu2_function_top_pane_g1_ParamLimits

0x075f,	// (0x00063755) bg_vkb2_func_pane_cp04_ParamLimits

0xd0c6,	// (0x000700bc) main_ncimui_button_group_pane_ParamLimits

0xd0c6,	// (0x000700bc) main_ncimui_button_group_pane

0xd12c,	// (0x00070122) main_ncimui_pane_t3_ParamLimits

0xd12c,	// (0x00070122) main_ncimui_pane_t3

0x36a7,	// (0x0006669d) phacti_button_group_pane

0x39a5,	// (0x0006699b) aid_size_list_single_double_ParamLimits

0xdcac,	// (0x00070ca2) popup_ezdial_listscroll_window_ParamLimits

0xdccd,	// (0x00070cc3) popup_number_entry_window_cp01_ParamLimits

0xdd63,	// (0x00070d59) phacti_button_pane_ParamLimits

0xdd63,	// (0x00070d59) phacti_button_pane

0x0040,	// (0x00063036) bg_button_pane_cp14

0x3ab4,	// (0x00066aaa) phacti_button_pane_t1

0xdd74,	// (0x00070d6a) main_touch_calib_button_pane_ParamLimits

0xdd74,	// (0x00070d6a) main_touch_calib_button_pane

0x085a,	// (0x00063850) bg_button_pane_cp18_ParamLimits

0x085a,	// (0x00063850) bg_button_pane_cp18

0x3ac2,	// (0x00066ab8) main_touch_calib_button_pane_t1_ParamLimits

0x3ac2,	// (0x00066ab8) main_touch_calib_button_pane_t1

0x3ad8,	// (0x00066ace) main_touch_calib_button_pane_t2_ParamLimits

0x3ad8,	// (0x00066ace) main_touch_calib_button_pane_t2

0x0001,

0xfd3b,	// (0x00072d31) main_touch_calib_button_pane_t_ParamLimits

0xfd3b,	// (0x00072d31) main_touch_calib_button_pane_t

0x0040,	// (0x00063036) cell_ncimui_button_pane

0x0040,	// (0x00063036) bg_button_pane_cp032

0x3af6,	// (0x00066aec) cell_ncimui_button_pane_t1

0xb63c,	// (0x0006e632) image3_infobar_pane_ParamLimits

0xb63c,	// (0x0006e632) image3_infobar_pane

0xd4e9,	// (0x000704df) fs_bigclock_status_pane_ParamLimits

0xd4e9,	// (0x000704df) fs_bigclock_status_pane

0xd4f6,	// (0x000704ec) main_fs_bigclock_clock_pane_ParamLimits

0xd4f6,	// (0x000704ec) main_fs_bigclock_clock_pane

0xd50a,	// (0x00070500) main_fs_bigclock_indi_pane_ParamLimits

0xd50a,	// (0x00070500) main_fs_bigclock_indi_pane

0xd532,	// (0x00070528) main_fs_bigclock_swipe_pane_ParamLimits

0xd532,	// (0x00070528) main_fs_bigclock_swipe_pane

0x0040,	// (0x00063036) main_fs_clock_dumped_data

0x3084,	// (0x0006607a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3084,	// (0x0006607a) list_single_fs_bigclock_indicator_pane_g1

0x309f,	// (0x00066095) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x309f,	// (0x00066095) list_single_fs_bigclock_indicator_pane_g2

0x30b9,	// (0x000660af) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x30b9,	// (0x000660af) list_single_fs_bigclock_indicator_pane_g3

0x30d3,	// (0x000660c9) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x30d3,	// (0x000660c9) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbdc,	// (0x00072bd2) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbdc,	// (0x00072bd2) list_single_fs_bigclock_indicator_pane_g

0x30fe,	// (0x000660f4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x30fe,	// (0x000660f4) list_single_fs_bigclock_indicator_pane_t1

0x3126,	// (0x0006611c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3126,	// (0x0006611c) list_single_fs_bigclock_indicator_pane_t2

0x314e,	// (0x00066144) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x314e,	// (0x00066144) list_single_fs_bigclock_indicator_pane_t3

0x3176,	// (0x0006616c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3176,	// (0x0006616c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbe7,	// (0x00072bdd) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbe7,	// (0x00072bdd) list_single_fs_bigclock_indicator_pane_t

0x3b04,	// (0x00066afa) image3_infobar_fav_pane_ParamLimits

0x3b04,	// (0x00066afa) image3_infobar_fav_pane

0x3b14,	// (0x00066b0a) image3_infobar_loc_pane_ParamLimits

0x3b14,	// (0x00066b0a) image3_infobar_loc_pane

0x3b28,	// (0x00066b1e) image3_infobar_time_pane_ParamLimits

0x3b28,	// (0x00066b1e) image3_infobar_time_pane

0x0adf,	// (0x00063ad5) image3_infobar_time_pane_g1

0x3b38,	// (0x00066b2e) image3_infobar_time_pane_t1

0x0adf,	// (0x00063ad5) image3_infobar_loc_pane_g1

0x3b46,	// (0x00066b3c) image3_infobar_loc_pane_g2

0x0001,

0xfd40,	// (0x00072d36) image3_infobar_loc_pane_g

0x3b4e,	// (0x00066b44) image3_infobar_loc_pane_t1

0x0adf,	// (0x00063ad5) image3_infobar_fav_pane_g1

0x3b5c,	// (0x00066b52) image3_infobar_fav_pane_g2

0x0001,

0xfd45,	// (0x00072d3b) image3_infobar_fav_pane_g

0x3b64,	// (0x00066b5a) fs_bigclock_status_battery_pane

0x3b6d,	// (0x00066b63) fs_bigclock_status_signal_pane

0x3b76,	// (0x00066b6c) fs_bigclock_status_title_pane

0x3b7f,	// (0x00066b75) fs_bigclock_status_signal_pane_g1

0x3b88,	// (0x00066b7e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd4a,	// (0x00072d40) fs_bigclock_status_signal_pane_g

0x3b90,	// (0x00066b86) fs_bigclock_status_battery_pane_g1

0x3b99,	// (0x00066b8f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd4f,	// (0x00072d45) fs_bigclock_status_battery_pane_g

0x3ba1,	// (0x00066b97) fs_bigclock_status_title_pane_t1

0xdd84,	// (0x00070d7a) main_fs_bigclock_clock_pane_g1

0xdd84,	// (0x00070d7a) main_fs_bigclock_clock_pane_g2

0xdd91,	// (0x00070d87) main_fs_bigclock_clock_pane_g3

0xdd91,	// (0x00070d87) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd54,	// (0x00072d4a) main_fs_bigclock_clock_pane_g

0xdd9d,	// (0x00070d93) main_fs_bigclock_clock_pane_t1

0xddb0,	// (0x00070da6) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd5d,	// (0x00072d53) main_fs_bigclock_clock_pane_t

0x3baf,	// (0x00066ba5) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3baf,	// (0x00066ba5) list_single_fs_bigclock_indicator_pane

0x3bc0,	// (0x00066bb6) list_single_fs_bigclock_pane_ParamLimits

0x3bc0,	// (0x00066bb6) list_single_fs_bigclock_pane

0x3be6,	// (0x00066bdc) main_fs_bigclock_indicator_pane_t1

0x3bf5,	// (0x00066beb) list_single_fs_bigclock_pane_g1

0x3bfd,	// (0x00066bf3) list_single_fs_bigclock_pane_t1

0x0adf,	// (0x00063ad5) main_fs_bigclock_swipe_pane_g1

0x3c40,	// (0x00066c36) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd6e,	// (0x00072d64) main_fs_bigclock_swipe_pane_g

0x3c48,	// (0x00066c3e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3c48,	// (0x00066c3e) main_fs_bigclock_swipe_pane_t1

0x93b2,	// (0x0006c3a8) call_type_pane_ParamLimits

0x0040,	// (0x00063036) main_btmg_pane

0x7043,	// (0x0006a039) list_single_cale_mrui_row_pane_g2_ParamLimits

0x7043,	// (0x0006a039) list_single_cale_mrui_row_pane_g2

0x0002,

0xfce1,	// (0x00072cd7) list_single_cale_mrui_row_pane_g_ParamLimits

0xfce1,	// (0x00072cd7) list_single_cale_mrui_row_pane_g

0x716b,	// (0x0006a161) list_recal_vselct_arw_lo_pane

0x3a08,	// (0x000669fe) list_recal_vselct_arw_up_pane

0x7173,	// (0x0006a169) list_recal_vselct_pane

0xde07,	// (0x00070dfd) btmg_button_pane

0xde13,	// (0x00070e09) main_btmg_pane_g1

0x0040,	// (0x00063036) bg_button_pane_cp044

0x3c65,	// (0x00066c5b) btmg_button_pane_t1

0x2921,	// (0x00065917) aid_listscroll_gen

0x075f,	// (0x00063755) main_cntbar_detail_pane

0x3570,	// (0x00066566) list_cmail_folder_pane

0x1035,	// (0x0006402b) sp_fs_scroll_pane_cp03_ParamLimits

0x7202,	// (0x0006a1f8) list_single_fs_dyc_pane_cp01_ParamLimits

0x7202,	// (0x0006a1f8) list_single_fs_dyc_pane_cp01

0x3c73,	// (0x00066c69) aid_size_cmail_indent

0x722a,	// (0x0006a220) list_single_dyc_row_pane_cp01

0xde3b,	// (0x00070e31) cntbar_detail_list_pane_ParamLimits

0xde3b,	// (0x00070e31) cntbar_detail_list_pane

0xde75,	// (0x00070e6b) main_cntbar_detail_cont_pane_ParamLimits

0xde75,	// (0x00070e6b) main_cntbar_detail_cont_pane

0x93a6,	// (0x0006c39c) scroll_pane_cp032_ParamLimits

0x93a6,	// (0x0006c39c) scroll_pane_cp032

0xde81,	// (0x00070e77) cntbar_detail_list_event_pane_ParamLimits

0xde81,	// (0x00070e77) cntbar_detail_list_event_pane

0xde47,	// (0x00070e3d) cntbar_detail_list_shct_pane

0x0d3e,	// (0x00063d34) aid_list_gen

0x3c85,	// (0x00066c7b) aid_scroll

0x3c8e,	// (0x00066c84) aid_size_touch_scroll_bar

0xde95,	// (0x00070e8b) aid_list_double

0x3c97,	// (0x00066c8d) aid_list_single

0xde9e,	// (0x00070e94) aid_list_single_lg

0x7233,	// (0x0006a229) aid_list_z_g_a_sm

0xdea7,	// (0x00070e9d) aid_list_z_g_d

0x723b,	// (0x0006a231) aid_txt_z_prm

0x7249,	// (0x0006a23f) aid_txt_z_prm_cp01

0x7257,	// (0x0006a24d) aid_txt_z_sec

0xdeaf,	// (0x00070ea5) main_cntbar_detail_cont_pane_g1_ParamLimits

0xdeaf,	// (0x00070ea5) main_cntbar_detail_cont_pane_g1

0xdebc,	// (0x00070eb2) main_cntbar_detail_cont_pane_g2_ParamLimits

0xdebc,	// (0x00070eb2) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd73,	// (0x00072d69) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd73,	// (0x00072d69) main_cntbar_detail_cont_pane_g

0x3ca0,	// (0x00066c96) main_cntbar_detail_cont_pane_t1

0x3cae,	// (0x00066ca4) main_cntbar_detail_cont_pane_t2

0x3cbc,	// (0x00066cb2) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd78,	// (0x00072d6e) main_cntbar_detail_cont_pane_t

0xdec8,	// (0x00070ebe) cell_cntbar_detail_list_shct_pane_ParamLimits

0xdec8,	// (0x00070ebe) cell_cntbar_detail_list_shct_pane

0x3cca,	// (0x00066cc0) cntbar_detail_list_shct_pane_g1

0x3cd3,	// (0x00066cc9) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd7f,	// (0x00072d75) cntbar_detail_list_shct_pane_g

0xdedc,	// (0x00070ed2) cntbar_detail_list_event_pane_g1_ParamLimits

0xdedc,	// (0x00070ed2) cntbar_detail_list_event_pane_g1

0xdee8,	// (0x00070ede) cntbar_detail_list_event_pane_g2_ParamLimits

0xdee8,	// (0x00070ede) cntbar_detail_list_event_pane_g2

0x0005,

0xfd84,	// (0x00072d7a) cntbar_detail_list_event_pane_g_ParamLimits

0xfd84,	// (0x00072d7a) cntbar_detail_list_event_pane_g

0xdf54,	// (0x00070f4a) cntbar_detail_list_event_pane_t1_ParamLimits

0xdf54,	// (0x00070f4a) cntbar_detail_list_event_pane_t1

0xdf69,	// (0x00070f5f) cntbar_detail_list_event_pane_t2_ParamLimits

0xdf69,	// (0x00070f5f) cntbar_detail_list_event_pane_t2

0x0002,

0xfd91,	// (0x00072d87) cntbar_detail_list_event_pane_t_ParamLimits

0xfd91,	// (0x00072d87) cntbar_detail_list_event_pane_t

0x0adf,	// (0x00063ad5) cell_cntbar_detail_list_shct_pane_g1

0x155b,	// (0x00064551) navi_pane_mv_g3

0x075f,	// (0x00063755) main_cntbar_detail_pane_ParamLimits

0x0040,	// (0x00063036) main_notif_wgt_pane

0xb2c6,	// (0x0006e2bc) aid_tch_main_mp4_pane_g4

0xb525,	// (0x0006e51b) popup_slider_window_cp02

0x7161,	// (0x0006a157) list_recal_day_event_pane

0xde1b,	// (0x00070e11) cntbar_detail_btn_pane_ParamLimits

0xde1b,	// (0x00070e11) cntbar_detail_btn_pane

0xde2b,	// (0x00070e21) cntbar_detail_btn_pane_cp01_ParamLimits

0xde2b,	// (0x00070e21) cntbar_detail_btn_pane_cp01

0xde47,	// (0x00070e3d) cntbar_detail_list_shct_pane_ParamLimits

0xde53,	// (0x00070e49) cntbar_detail_pane_g1_ParamLimits

0xde53,	// (0x00070e49) cntbar_detail_pane_g1

0xde5f,	// (0x00070e55) cntbar_detail_pane_t1_ParamLimits

0xde5f,	// (0x00070e55) cntbar_detail_pane_t1

0xdef4,	// (0x00070eea) cntbar_detail_list_event_pane_g3_ParamLimits

0xdef4,	// (0x00070eea) cntbar_detail_list_event_pane_g3

0xdf0c,	// (0x00070f02) cntbar_detail_list_event_pane_g4_ParamLimits

0xdf0c,	// (0x00070f02) cntbar_detail_list_event_pane_g4

0xdf24,	// (0x00070f1a) cntbar_detail_list_event_pane_g5_ParamLimits

0xdf24,	// (0x00070f1a) cntbar_detail_list_event_pane_g5

0xdf3c,	// (0x00070f32) cntbar_detail_list_event_pane_g6_ParamLimits

0xdf3c,	// (0x00070f32) cntbar_detail_list_event_pane_g6

0xdf7e,	// (0x00070f74) cntbar_detail_list_event_pane_t3_ParamLimits

0xdf7e,	// (0x00070f74) cntbar_detail_list_event_pane_t3

0xdf90,	// (0x00070f86) popup_notif_wgt_window_ParamLimits

0xdf90,	// (0x00070f86) popup_notif_wgt_window

0xdfa0,	// (0x00070f96) popup_submenu_window_cp01_ParamLimits

0xdfa0,	// (0x00070f96) popup_submenu_window_cp01

0x0a9f,	// (0x00063a95) bg_popup_window_pane_cp10

0x3cdc,	// (0x00066cd2) listscroll_notif_wgt_pane

0x3cee,	// (0x00066ce4) list_notif_wgt_window

0x3cf7,	// (0x00066ced) scroll_pane_cp033

0xdfb2,	// (0x00070fa8) list_notif_wgt_row_pane_ParamLimits

0xdfb2,	// (0x00070fa8) list_notif_wgt_row_pane

0x3d00,	// (0x00066cf6) aid_size_list_notif_wgt_del

0x3d0d,	// (0x00066d03) list_notif_wgt_row_pane_g1

0x3d19,	// (0x00066d0f) list_notif_wgt_row_pane_g2

0x3d28,	// (0x00066d1e) list_notif_wgt_row_pane_g3

0x0002,

0xfd98,	// (0x00072d8e) list_notif_wgt_row_pane_g

0x3d35,	// (0x00066d2b) list_notif_wgt_row_pane_t1

0x3d4b,	// (0x00066d41) list_notif_wgt_row_pane_t2

0x3d5d,	// (0x00066d53) list_notif_wgt_row_pane_t3

0x0002,

0xfd9f,	// (0x00072d95) list_notif_wgt_row_pane_t

0x5773,	// (0x00068769) list_recal_day_event_pane_g1

0x3d6f,	// (0x00066d65) list_recal_day_event_pane_t1

0x0040,	// (0x00063036) bg_button_pane_cp045

0x3d7e,	// (0x00066d74) cntbar_detail_btn_pane_t1

0x16a2,	// (0x00064698) main_callh_pane_ParamLimits

0x16a2,	// (0x00064698) main_callh_pane

0x0040,	// (0x00063036) main_coverflow0_pane

0x0040,	// (0x00063036) main_wgtman_pane

0xd54a,	// (0x00070540) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd54a,	// (0x00070540) main_fs_bigclock_unlock_btn_pane

0xd933,	// (0x00070929) bg_button_pane_cp16

0xd943,	// (0x00070939) cell_tport_appsw_pane_g3

0xdfc4,	// (0x00070fba) cf0_flow_pane_ParamLimits

0xdfc4,	// (0x00070fba) cf0_flow_pane

0x3d8c,	// (0x00066d82) listscroll_cf0_pane

0x3d97,	// (0x00066d8d) main_cf0_pane_g1

0xdfd3,	// (0x00070fc9) main_cf0_pane_t1_ParamLimits

0xdfd3,	// (0x00070fc9) main_cf0_pane_t1

0xdfe7,	// (0x00070fdd) main_cf0_pane_t2_ParamLimits

0xdfe7,	// (0x00070fdd) main_cf0_pane_t2

0x0001,

0xfdab,	// (0x00072da1) main_cf0_pane_t_ParamLimits

0xfdab,	// (0x00072da1) main_cf0_pane_t

0x3da9,	// (0x00066d9f) scroll_pane_cp11

0xdffb,	// (0x00070ff1) cf0_flow_pane_g1

0xe003,	// (0x00070ff9) cf0_flow_pane_g2

0x0001,

0xfdb0,	// (0x00072da6) cf0_flow_pane_g

0xe00b,	// (0x00071001) cf0_flow_pane_t1

0x0040,	// (0x00063036) main_call6_pane

0x0040,	// (0x00063036) main_calllock_pane

0xe019,	// (0x0007100f) call6_btn_grp_pane_ParamLimits

0xe019,	// (0x0007100f) call6_btn_grp_pane

0xe028,	// (0x0007101e) call6_pane_g1_ParamLimits

0xe028,	// (0x0007101e) call6_pane_g1

0xe038,	// (0x0007102e) popup_call6_1st_window_ParamLimits

0xe038,	// (0x0007102e) popup_call6_1st_window

0xe046,	// (0x0007103c) popup_call6_2nd_window_ParamLimits

0xe046,	// (0x0007103c) popup_call6_2nd_window

0xe054,	// (0x0007104a) cell_call6_btn_pane_ParamLimits

0xe054,	// (0x0007104a) cell_call6_btn_pane

0x0a9f,	// (0x00063a95) bg_popup_call2_in_pane_cp03

0x3db4,	// (0x00066daa) popup_call6_1st_window_g1

0x3dbc,	// (0x00066db2) popup_call6_1st_window_g2

0x3dc4,	// (0x00066dba) popup_call6_1st_window_g3

0x0002,

0xfdb5,	// (0x00072dab) popup_call6_1st_window_g

0x3dcc,	// (0x00066dc2) popup_call6_1st_window_t1

0x3ddb,	// (0x00066dd1) popup_call6_1st_window_t2

0x3de9,	// (0x00066ddf) popup_call6_1st_window_t3

0x0002,

0xfdbc,	// (0x00072db2) popup_call6_1st_window_t

0x0a9f,	// (0x00063a95) bg_popup_call2_in_pane_cp04

0x3df7,	// (0x00066ded) popup_call6_2nd_window_g1

0x3dff,	// (0x00066df5) popup_call6_2nd_window_g2

0x3e07,	// (0x00066dfd) popup_call6_2nd_window_g3

0x0002,

0xfdc3,	// (0x00072db9) popup_call6_2nd_window_g

0x3e0f,	// (0x00066e05) popup_call6_2nd_window_t1

0x0040,	// (0x00063036) bg_button_pane_cp15

0x3e51,	// (0x00066e47) cell_call6_btn_pane_g1

0xe063,	// (0x00071059) cell_call6_btn_pane_t1

0xe072,	// (0x00071068) listscroll_wgtman_pane_ParamLimits

0xe072,	// (0x00071068) listscroll_wgtman_pane

0xe08e,	// (0x00071084) wgtman_btn_pane_ParamLimits

0xe08e,	// (0x00071084) wgtman_btn_pane

0x1362,	// (0x00064358) aid_scroll_copy1

0x3e1e,	// (0x00066e14) list_wgtman_pane

0xe0c3,	// (0x000710b9) wgtman_btn_pane_g1_ParamLimits

0xe0c3,	// (0x000710b9) wgtman_btn_pane_g1

0xe0eb,	// (0x000710e1) wgtman_btn_pane_t1_ParamLimits

0xe0eb,	// (0x000710e1) wgtman_btn_pane_t1

0x3e28,	// (0x00066e1e) wgtman_btn_pane_t2_ParamLimits

0x3e28,	// (0x00066e1e) wgtman_btn_pane_t2

0x0001,

0xfdca,	// (0x00072dc0) wgtman_btn_pane_t_ParamLimits

0xfdca,	// (0x00072dc0) wgtman_btn_pane_t

0xe122,	// (0x00071118) listrow_wgtman_pane_ParamLimits

0xe122,	// (0x00071118) listrow_wgtman_pane

0xe13d,	// (0x00071133) listrow_wgtman_pane_g1

0xe14a,	// (0x00071140) listrow_wgtman_pane_g2

0x0001,

0xfdcf,	// (0x00072dc5) listrow_wgtman_pane_g

0x7265,	// (0x0006a25b) listrow_wgtman_pane_t1

0x727d,	// (0x0006a273) listrow_wgtman_pane_t2

0x0001,

0xfdd4,	// (0x00072dca) listrow_wgtman_pane_t

0x72a3,	// (0x0006a299) wait_bar_pane_cp09

0x3e3f,	// (0x00066e35) main_calllock_btn_pane

0x3e49,	// (0x00066e3f) main_calllock_pane_g1

0x0040,	// (0x00063036) bg_button_pane_cp17

0x3e51,	// (0x00066e47) main_calllock_btn_pane_g1

0x3e5a,	// (0x00066e50) main_calllock_btn_pane_t1

0x0040,	// (0x00063036) main_dialer3_pane

0x0040,	// (0x00063036) main_fmrd2_pane

0x0adf,	// (0x00063ad5) main_fs_bigclock_unlock_btn_pane_g1

0xe170,	// (0x00071166) main_fs_bigclock_unlock_btn_pane_t1

0xe17e,	// (0x00071174) area_fmrd2_info_pane_ParamLimits

0xe17e,	// (0x00071174) area_fmrd2_info_pane

0xe18c,	// (0x00071182) area_fmrd2_visual_pane_ParamLimits

0xe18c,	// (0x00071182) area_fmrd2_visual_pane

0xe19a,	// (0x00071190) fmrd2_indi_pane_ParamLimits

0xe19a,	// (0x00071190) fmrd2_indi_pane

0xe1a7,	// (0x0007119d) area_fmrd2_visual_pane_g1

0xe1af,	// (0x000711a5) area_fmrd2_visual_pane_t1

0xe1bf,	// (0x000711b5) area_fmrd2_visual_pane_t2

0xe1cf,	// (0x000711c5) area_fmrd2_visual_pane_t3

0x0002,

0xfdde,	// (0x00072dd4) area_fmrd2_visual_pane_t

0xe1df,	// (0x000711d5) area_fmrd2_info_pane_g1

0xe1e7,	// (0x000711dd) area_fmrd2_info_pane_t1

0xe1f7,	// (0x000711ed) area_fmrd2_info_pane_t2

0xe207,	// (0x000711fd) area_fmrd2_info_pane_t3

0xe217,	// (0x0007120d) area_fmrd2_info_pane_t4

0x0003,

0xfde5,	// (0x00072ddb) area_fmrd2_info_pane_t

0xe225,	// (0x0007121b) fmrd2_indi_pane_t1

0xe235,	// (0x0007122b) fmrd2_indi_pane_t2

0xe245,	// (0x0007123b) fmrd2_indi_pane_t3

0x0002,

0xfdee,	// (0x00072de4) fmrd2_indi_pane_t

0x30e2,	// (0x000660d8) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x30e2,	// (0x000660d8) list_single_fs_bigclock_indicator_pane_g5

0x3193,	// (0x00066189) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3193,	// (0x00066189) list_single_fs_bigclock_indicator_pane_t5

0xdad2,	// (0x00070ac8) aid_cell_bcale_month_pane_ParamLimits

0xdad2,	// (0x00070ac8) aid_cell_bcale_month_pane

0xdaf0,	// (0x00070ae6) bcale_month_pane_ParamLimits

0xdaf0,	// (0x00070ae6) bcale_month_pane

0xdb0e,	// (0x00070b04) bcale_preview_pane_ParamLimits

0xdb0e,	// (0x00070b04) bcale_preview_pane

0x3bfd,	// (0x00066bf3) list_single_fs_bigclock_pane_t1_ParamLimits

0x3c1c,	// (0x00066c12) list_single_fs_bigclock_pane_t2_ParamLimits

0x3c1c,	// (0x00066c12) list_single_fs_bigclock_pane_t2

0x0001,

0xfd69,	// (0x00072d5f) list_single_fs_bigclock_pane_t_ParamLimits

0xfd69,	// (0x00072d5f) list_single_fs_bigclock_pane_t

0xe168,	// (0x0007115e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdd9,	// (0x00072dcf) main_fs_bigclock_unlock_btn_pane_g

0xe253,	// (0x00071249) aid_dia3_key_size_ParamLimits

0xe253,	// (0x00071249) aid_dia3_key_size

0xe25f,	// (0x00071255) aid_dia3_listrow_size_ParamLimits

0xe25f,	// (0x00071255) aid_dia3_listrow_size

0xe26f,	// (0x00071265) dia3_keypad_fun_pane_ParamLimits

0xe26f,	// (0x00071265) dia3_keypad_fun_pane

0xe281,	// (0x00071277) dia3_keypad_num_pane_ParamLimits

0xe281,	// (0x00071277) dia3_keypad_num_pane

0xe293,	// (0x00071289) dia3_listscroll_pane_ParamLimits

0xe293,	// (0x00071289) dia3_listscroll_pane

0xe2a1,	// (0x00071297) dia3_numentry_pane_ParamLimits

0xe2a1,	// (0x00071297) dia3_numentry_pane

0x3e69,	// (0x00066e5f) dia3_list_pane

0x3e74,	// (0x00066e6a) scroll_pane_cp12

0x0040,	// (0x00063036) bg_dia3_numentry_pane

0xe2af,	// (0x000712a5) dia3_numentry_pane_t1

0xe2be,	// (0x000712b4) cell_dia3_key_num_pane

0xe2c6,	// (0x000712bc) cell_dia3_key0_fun_pane_ParamLimits

0xe2c6,	// (0x000712bc) cell_dia3_key0_fun_pane

0xe2d3,	// (0x000712c9) cell_dia3_key1_fun_pane_ParamLimits

0xe2d3,	// (0x000712c9) cell_dia3_key1_fun_pane

0xe2e0,	// (0x000712d6) dia3_listrow_pane

0x2e35,	// (0x00065e2b) bg_dia3_numentry_pane_g1

0x0040,	// (0x00063036) bg_button_pane_cp21

0x3e7f,	// (0x00066e75) cell_dia3_key_num_pane_t1

0x3e8d,	// (0x00066e83) cell_dia3_key_num_pane_t2

0x3e9c,	// (0x00066e92) cell_dia3_key_num_pane_t3

0x3eab,	// (0x00066ea1) cell_dia3_key_num_pane_t4

0x0003,

0xfdf5,	// (0x00072deb) cell_dia3_key_num_pane_t

0x0040,	// (0x00063036) bg_button_pane_cp19

0xe2ed,	// (0x000712e3) cell_dia3_key0_fun_pane_g1

0x0040,	// (0x00063036) bg_button_pane_cp20

0xe2f5,	// (0x000712eb) cell_dia3_key1_fun_pane_g1

0xe2fd,	// (0x000712f3) area_left_week_number_pane

0xe310,	// (0x00071306) area_top_day_name_pane

0xe31e,	// (0x00071314) frame_month_view_pane

0x3eba,	// (0x00066eb0) grid_month_view_pane

0xe333,	// (0x00071329) cell_top_day_name_pane_ParamLimits

0xe333,	// (0x00071329) cell_top_day_name_pane

0xe34d,	// (0x00071343) cell_area_left_week_number_pane_ParamLimits

0xe34d,	// (0x00071343) cell_area_left_week_number_pane

0xe370,	// (0x00071366) cell_month_view_pane_ParamLimits

0xe370,	// (0x00071366) cell_month_view_pane

0x3ec8,	// (0x00066ebe) frm_month_g1

0xe39c,	// (0x00071392) frm_month_g2

0xe3ad,	// (0x000713a3) frm_month_g3

0xe3be,	// (0x000713b4) frm_month_g4

0xe3cf,	// (0x000713c5) frm_month_g5

0xe3e2,	// (0x000713d8) frm_month_g6

0xe3f5,	// (0x000713eb) frm_month_g7

0x3ed5,	// (0x00066ecb) frm_month_g8

0xe408,	// (0x000713fe) frm_month_g9

0xe415,	// (0x0007140b) frm_month_g10

0xe422,	// (0x00071418) frm_month_g11

0xe42f,	// (0x00071425) frm_month_g12

0xe43c,	// (0x00071432) frm_month_g13

0xe449,	// (0x0007143f) frm_month_g14

0xe458,	// (0x0007144e) frm_month_g15

0xe467,	// (0x0007145d) frm_month_g16

0x000f,

0xfdfe,	// (0x00072df4) frm_month_g

0x3ee2,	// (0x00066ed8) cell_top_day_name_pane_t1

0xe476,	// (0x0007146c) cell_area_left_week_number_pane_g1

0xe485,	// (0x0007147b) cell_area_left_week_number_pane_t1

0x07c6,	// (0x000637bc) cell_month_view_pane_g1

0xe49b,	// (0x00071491) cell_month_view_pane_t1

0x0040,	// (0x00063036) main_fps_pane

0x33b0,	// (0x000663a6) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x33b0,	// (0x000663a6) cmail_ddmenu_btn02_pane_cp1

0x33cc,	// (0x000663c2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x33cc,	// (0x000663c2) cmail_ddmenu_btn02_pane_cp2

0xdd03,	// (0x00070cf9) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xdd03,	// (0x00070cf9) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd1c,	// (0x00072d12) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd1c,	// (0x00072d12) cmail_ddmenu_btn02_pane_g

0xdd21,	// (0x00070d17) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xdd21,	// (0x00070d17) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd21,	// (0x00072d17) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd21,	// (0x00072d17) cmail_ddmenu_btn02_pane_t

0xe4b1,	// (0x000714a7) fps_text_pane_ParamLimits

0xe4b1,	// (0x000714a7) fps_text_pane

0xe4be,	// (0x000714b4) main_fps_pane_g1_ParamLimits

0xe4be,	// (0x000714b4) main_fps_pane_g1

0xe4cc,	// (0x000714c2) wait_bar_pane_cp010_ParamLimits

0xe4cc,	// (0x000714c2) wait_bar_pane_cp010

0xe4d8,	// (0x000714ce) fps_text_pane_t1_ParamLimits

0xe4d8,	// (0x000714ce) fps_text_pane_t1

0xb9d0,	// (0x0006e9c6) cam4_image_uncrop_pane_g1

0xb9d9,	// (0x0006e9cf) cam4_image_uncrop_pane_g2

0xb9e2,	// (0x0006e9d8) cam4_image_uncrop_pane_g3

0xb9eb,	// (0x0006e9e1) cam4_image_uncrop_pane_g4

0x0003,

0xf860,	// (0x00072856) cam4_image_uncrop_pane_g

0xe2e0,	// (0x000712d6) dia3_listrow_pane_ParamLimits

0x0040,	// (0x00063036) main_phob2_pane

0xd915,	// (0x0007090b) cell_tport_appsw_pane_cp02_ParamLimits

0xd915,	// (0x0007090b) cell_tport_appsw_pane_cp02

0xd924,	// (0x0007091a) cell_tport_appsw_pane_cp03_ParamLimits

0xd924,	// (0x0007091a) cell_tport_appsw_pane_cp03

0x0040,	// (0x00063036) phob2_contact_card_pane

0x0040,	// (0x00063036) phob2_listscroll_pane

0x3ef5,	// (0x00066eeb) phob2_list_pane

0x3efd,	// (0x00066ef3) scroll_pane_cp034

0xe4f1,	// (0x000714e7) phob2_cc_data_pane_ParamLimits

0xe4f1,	// (0x000714e7) phob2_cc_data_pane

0xe50b,	// (0x00071501) phob2_cc_listscroll_pane_ParamLimits

0xe50b,	// (0x00071501) phob2_cc_listscroll_pane

0xe122,	// (0x00071118) list_double_large_graphic_phob2_pane_ParamLimits

0xe122,	// (0x00071118) list_double_large_graphic_phob2_pane

0xe525,	// (0x0007151b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe525,	// (0x0007151b) list_double_large_graphic_phob2_pane_g1

0xe532,	// (0x00071528) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xe532,	// (0x00071528) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe1f,	// (0x00072e15) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe1f,	// (0x00072e15) list_double_large_graphic_phob2_pane_g

0x72c1,	// (0x0006a2b7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x72c1,	// (0x0006a2b7) list_double_large_graphic_phob2_pane_t1

0x72d6,	// (0x0006a2cc) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x72d6,	// (0x0006a2cc) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe28,	// (0x00072e1e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe28,	// (0x00072e1e) list_double_large_graphic_phob2_pane_t

0x0040,	// (0x00063036) list_highlight_pane_cp024

0x3f05,	// (0x00066efb) phob2_cc_button_pane

0xe54c,	// (0x00071542) phob2_cc_data_pane_g1_ParamLimits

0xe54c,	// (0x00071542) phob2_cc_data_pane_g1

0xe55b,	// (0x00071551) phob2_cc_data_pane_g2_ParamLimits

0xe55b,	// (0x00071551) phob2_cc_data_pane_g2

0x0001,

0xfe2d,	// (0x00072e23) phob2_cc_data_pane_g_ParamLimits

0xfe2d,	// (0x00072e23) phob2_cc_data_pane_g

0xe56a,	// (0x00071560) phob2_cc_data_pane_t1_ParamLimits

0xe56a,	// (0x00071560) phob2_cc_data_pane_t1

0xe57f,	// (0x00071575) phob2_cc_data_pane_t2_ParamLimits

0xe57f,	// (0x00071575) phob2_cc_data_pane_t2

0xe594,	// (0x0007158a) phob2_cc_data_pane_t3_ParamLimits

0xe594,	// (0x0007158a) phob2_cc_data_pane_t3

0x0002,

0xfe32,	// (0x00072e28) phob2_cc_data_pane_t_ParamLimits

0xfe32,	// (0x00072e28) phob2_cc_data_pane_t

0x3f0d,	// (0x00066f03) phob2_cc_list_pane_ParamLimits

0x3f0d,	// (0x00066f03) phob2_cc_list_pane

0x5986,	// (0x0006897c) scroll_pane_cp035_ParamLimits

0x5986,	// (0x0006897c) scroll_pane_cp035

0x075f,	// (0x00063755) bg_button_pane_cp033

0x3f19,	// (0x00066f0f) phob2_cc_button_pane_g1

0x3f25,	// (0x00066f1b) phob2_cc_button_pane_t1

0x3f3a,	// (0x00066f30) phob2_cc_button_pane_t2

0x0001,

0xfe39,	// (0x00072e2f) phob2_cc_button_pane_t

0xe5a9,	// (0x0007159f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe5a9,	// (0x0007159f) list_double_large_graphic_phob2_cc_pane

0xe617,	// (0x0007160d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe617,	// (0x0007160d) list_double_large_graphic_phob2_cc_pane_g1

0xe628,	// (0x0007161e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xe628,	// (0x0007161e) list_double_large_graphic_phob2_cc_pane_g2

0x72eb,	// (0x0006a2e1) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x72eb,	// (0x0006a2e1) list_double_large_graphic_phob2_cc_pane_g3

0x72f7,	// (0x0006a2ed) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x72f7,	// (0x0006a2ed) list_double_large_graphic_phob2_cc_pane_g4

0x7303,	// (0x0006a2f9) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x7303,	// (0x0006a2f9) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe3e,	// (0x00072e34) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe3e,	// (0x00072e34) list_double_large_graphic_phob2_cc_pane_g

0x730f,	// (0x0006a305) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x730f,	// (0x0006a305) list_double_large_graphic_phob2_cc_pane_t1

0x7338,	// (0x0006a32e) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x7338,	// (0x0006a32e) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe49,	// (0x00072e3f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe49,	// (0x00072e3f) list_double_large_graphic_phob2_cc_pane_t

0x3f58,	// (0x00066f4e) list_highlight_pane_cp025_ParamLimits

0x3f58,	// (0x00066f4e) list_highlight_pane_cp025

0x075f,	// (0x00063755) bg_button_pane_cp033_ParamLimits

0x3f19,	// (0x00066f0f) phob2_cc_button_pane_g1_ParamLimits

0x3f25,	// (0x00066f1b) phob2_cc_button_pane_t1_ParamLimits

0x3f3a,	// (0x00066f30) phob2_cc_button_pane_t2_ParamLimits

0xfe39,	// (0x00072e2f) phob2_cc_button_pane_t_ParamLimits

0x7653,	// (0x0006a649) popup_wgtman_window

0x5645,	// (0x0006863b) scroll_pane_cp038

0xe0ab,	// (0x000710a1) wgtman_btn_pane_cp_01_ParamLimits

0xe0ab,	// (0x000710a1) wgtman_btn_pane_cp_01

0x3f66,	// (0x00066f5c) wgtman_content_pane

0x3f6f,	// (0x00066f65) wgtman_heading_pane

0x0040,	// (0x00063036) bg_heading_pane_cp02

0x3f78,	// (0x00066f6e) wgtman_heading_pane_g1

0x3f80,	// (0x00066f76) wgtman_heading_pane_t1

0x3f8e,	// (0x00066f84) scroll_pane_cp036

0x3f96,	// (0x00066f8c) wgtman_list_pane

0x3f9e,	// (0x00066f94) wgtman_list_pane_t1_ParamLimits

0x3f9e,	// (0x00066f94) wgtman_list_pane_t1

0xb92f,	// (0x0006e925) cam4_grid_pane

0x696a,	// (0x00069960) bg_button_pane_cp015_ParamLimits

0xc5e8,	// (0x0006f5de) bg_button_pane_cp016_ParamLimits

0xc5f4,	// (0x0006f5ea) bg_button_pane_cp017_ParamLimits

0xc60f,	// (0x0006f605) popup_vitu2_query_window_g3_ParamLimits

0xc60f,	// (0x0006f605) popup_vitu2_query_window_g3

0x6a29,	// (0x00069a1f) popup_vitu2_query_window_t6_ParamLimits

0x6a29,	// (0x00069a1f) popup_vitu2_query_window_t6

0x6a54,	// (0x00069a4a) popup_vitu2_query_window_t7_ParamLimits

0x6a54,	// (0x00069a4a) popup_vitu2_query_window_t7

0x5974,	// (0x0006896a) cam4_grid_pane_g1

0x597d,	// (0x00068973) cam4_grid_pane_g2

0x3fb8,	// (0x00066fae) cam4_grid_pane_g3

0x3fc1,	// (0x00066fb7) cam4_grid_pane_g4

0x0003,

0xfe4e,	// (0x00072e44) cam4_grid_pane_g

0x81ab,	// (0x0006b1a1) aid_placing_vt_slider_lsc_ParamLimits

0x84f7,	// (0x0006b4ed) vidtel_button_pane_ParamLimits

0x84f7,	// (0x0006b4ed) vidtel_button_pane

0x0040,	// (0x00063036) bg_button_pane_cp034

0x3fcc,	// (0x00066fc2) vidtel_button_pane_g1

0x3fd4,	// (0x00066fca) vidtel_button_pane_t1

0x5751,	// (0x00068747) aid_size_vtel_slider_touch

0x5986,	// (0x0006897c) scroll_pane_cp039

0xd287,	// (0x0007027d) ncim_query_button_pane_cp01_ParamLimits

0xd2a6,	// (0x0007029c) ncimui_query_pane_g1_ParamLimits

0x075f,	// (0x00063755) input_focus_pane_cp012_ParamLimits

0x2e73,	// (0x00065e69) ncim_query_entry_pane_t1_ParamLimits

0x5986,	// (0x0006897c) scroll_pane_cp039_ParamLimits

0x1446,	// (0x0006443c) navi_pane_bcale_mc_g1

0x144e,	// (0x00064444) navi_pane_bcale_mc_t1

0x3400,	// (0x000663f6) main_sp_fs_email_pane_g1

0x340c,	// (0x00066402) main_sp_fs_email_pane_g2

0x0001,

0xfc51,	// (0x00072c47) main_sp_fs_email_pane_g

0x3887,	// (0x0006687d) list_single_cale_mrui_row_pane_g3_ParamLimits

0x3887,	// (0x0006687d) list_single_cale_mrui_row_pane_g3

0x71c0,	// (0x0006a1b6) list_single_recal_day_pane_g5_event_pane

0x71d6,	// (0x0006a1cc) list_single_recal_day_pane_g7

0x3fea,	// (0x00066fe0) list_recal_day_event_pane_cp01

0x3ff3,	// (0x00066fe9) list_recal_vselct_arw_lo_pane_cp01

0x3ffb,	// (0x00066ff1) list_recal_vselct_arw_up_pane_cp01

0x4003,	// (0x00066ff9) list_recal_vselct_pane_cp01

0x5773,	// (0x00068769) list_recal_day_event_pane_cp01_g1

0x7361,	// (0x0006a357) list_recal_day_event_pane_cp01_t1

0x71de,	// (0x0006a1d4) list_single_recal_day_pane_t1_ParamLimits

0x71f0,	// (0x0006a1e6) list_single_recal_day_pane_t2_ParamLimits

0xfd31,	// (0x00072d27) list_single_recal_day_pane_t_ParamLimits

0x073d,	// (0x00063733) bg_notes_pane_ParamLimits

0x081e,	// (0x00063814) list_notes_pane_ParamLimits

0x7873,	// (0x0006a869) scroll_pane_cp06_ParamLimits

0x085a,	// (0x00063850) main_notes_pane_ParamLimits

0x075f,	// (0x00063755) main_welc_pane

0xe655,	// (0x0007164b) main_welc_body_pane_ParamLimits

0xe655,	// (0x0007164b) main_welc_body_pane

0xe66f,	// (0x00071665) main_welc_opti_pane_ParamLimits

0xe66f,	// (0x00071665) main_welc_opti_pane

0xe6ce,	// (0x000716c4) main_welc_pane_t1_ParamLimits

0xe6ce,	// (0x000716c4) main_welc_pane_t1

0xe856,	// (0x0007184c) main_welc_body_row_pane_ParamLimits

0xe856,	// (0x0007184c) main_welc_body_row_pane

0x07b8,	// (0x000637ae) main_welc_opti_row_pane_ParamLimits

0x07b8,	// (0x000637ae) main_welc_opti_row_pane

0x402b,	// (0x00067021) main_welc_opti_row_pane_g1

0xe87b,	// (0x00071871) main_welc_opti_row_pane_t1

0x4033,	// (0x00067029) main_welc_body_row_pane_t1

0x3ce6,	// (0x00066cdc) popup_notif_wgt_heading_pane

0x3d00,	// (0x00066cf6) aid_size_list_notif_wgt_del_ParamLimits

0x3d0d,	// (0x00066d03) list_notif_wgt_row_pane_g1_ParamLimits

0x3d19,	// (0x00066d0f) list_notif_wgt_row_pane_g2_ParamLimits

0x3d28,	// (0x00066d1e) list_notif_wgt_row_pane_g3_ParamLimits

0xfd98,	// (0x00072d8e) list_notif_wgt_row_pane_g_ParamLimits

0x3d35,	// (0x00066d2b) list_notif_wgt_row_pane_t1_ParamLimits

0x3d4b,	// (0x00066d41) list_notif_wgt_row_pane_t2_ParamLimits

0x3d5d,	// (0x00066d53) list_notif_wgt_row_pane_t3_ParamLimits

0xfd9f,	// (0x00072d95) list_notif_wgt_row_pane_t_ParamLimits

0xe13d,	// (0x00071133) listrow_wgtman_pane_g1_ParamLimits

0xe14a,	// (0x00071140) listrow_wgtman_pane_g2_ParamLimits

0xfdcf,	// (0x00072dc5) listrow_wgtman_pane_g_ParamLimits

0x7265,	// (0x0006a25b) listrow_wgtman_pane_t1_ParamLimits

0x727d,	// (0x0006a273) listrow_wgtman_pane_t2_ParamLimits

0xfdd4,	// (0x00072dca) listrow_wgtman_pane_t_ParamLimits

0x72a3,	// (0x0006a299) wait_bar_pane_cp09_ParamLimits

0x0040,	// (0x00063036) bg_popup_heading_pane_cp02

0x4042,	// (0x00067038) popup_notif_wgt_heading_pane_g1

0x404a,	// (0x00067040) popup_notif_wgt_heading_pane_t1

0x0040,	// (0x00063036) main_vids_pane

0x0040,	// (0x00063036) vids_listscroll_pane

0xe88a,	// (0x00071880) scroll_pane_cp040

0x0040,	// (0x00063036) vids_list_pane

0xe895,	// (0x0007188b) vids_list_double_pane_ParamLimits

0xe895,	// (0x0007188b) vids_list_double_pane

0xe8ac,	// (0x000718a2) vids_list_double_pane_g1

0xe8b5,	// (0x000718ab) vids_list_double_pane_t1

0xe8c5,	// (0x000718bb) vids_list_double_pane_t2

0x0001,

0xfe6d,	// (0x00072e63) vids_list_double_pane_t

0x075f,	// (0x00063755) main_ncimui_pane_ParamLimits

0xd0de,	// (0x000700d4) main_ncimui_pane_g1_ParamLimits

0xd0ea,	// (0x000700e0) main_ncimui_pane_g2_ParamLimits

0xd0ea,	// (0x000700e0) main_ncimui_pane_g2

0x0001,

0xfb52,	// (0x00072b48) main_ncimui_pane_g_ParamLimits

0xfb52,	// (0x00072b48) main_ncimui_pane_g

0xe688,	// (0x0007167e) main_welc_pane_g1_ParamLimits

0xe688,	// (0x0007167e) main_welc_pane_g1

0xe694,	// (0x0007168a) main_welc_pane_g2_ParamLimits

0xe694,	// (0x0007168a) main_welc_pane_g2

0x0003,

0xfe57,	// (0x00072e4d) main_welc_pane_g_ParamLimits

0xfe57,	// (0x00072e4d) main_welc_pane_g

0x7855,	// (0x0006a84b) listscroll_mce_pane_ParamLimits

0x159b,	// (0x00064591) wait_bar_pane_cp10

0x2929,	// (0x0006591f) main_cale_day_pane_ParamLimits

0x2929,	// (0x0006591f) main_cale_week_pane_ParamLimits

0x073d,	// (0x00063733) main_messa_pane_ParamLimits

0xad84,	// (0x0006dd7a) main_clock2_btn_pane_ParamLimits

0xad84,	// (0x0006dd7a) main_clock2_btn_pane

0x5028,	// (0x0006801e) main_clock2_btn_pane_cp01_ParamLimits

0x5028,	// (0x0006801e) main_clock2_btn_pane_cp01

0x3813,	// (0x00066809) list_cale_mrui_pane_ParamLimits

0x3da1,	// (0x00066d97) main_cf0_pane_g2

0x0001,

0xfda6,	// (0x00072d9c) main_cf0_pane_g

0xe2fd,	// (0x000712f3) area_left_week_number_pane_ParamLimits

0xe310,	// (0x00071306) area_top_day_name_pane_ParamLimits

0xe31e,	// (0x00071314) frame_month_view_pane_ParamLimits

0x3eba,	// (0x00066eb0) grid_month_view_pane_ParamLimits

0x3ec8,	// (0x00066ebe) frm_month_g1_ParamLimits

0xe39c,	// (0x00071392) frm_month_g2_ParamLimits

0xe3ad,	// (0x000713a3) frm_month_g3_ParamLimits

0xe3be,	// (0x000713b4) frm_month_g4_ParamLimits

0xe3cf,	// (0x000713c5) frm_month_g5_ParamLimits

0xe3e2,	// (0x000713d8) frm_month_g6_ParamLimits

0xe3f5,	// (0x000713eb) frm_month_g7_ParamLimits

0x3ed5,	// (0x00066ecb) frm_month_g8_ParamLimits

0xe408,	// (0x000713fe) frm_month_g9_ParamLimits

0xe415,	// (0x0007140b) frm_month_g10_ParamLimits

0xe422,	// (0x00071418) frm_month_g11_ParamLimits

0xe42f,	// (0x00071425) frm_month_g12_ParamLimits

0xe43c,	// (0x00071432) frm_month_g13_ParamLimits

0xe449,	// (0x0007143f) frm_month_g14_ParamLimits

0xe458,	// (0x0007144e) frm_month_g15_ParamLimits

0xe467,	// (0x0007145d) frm_month_g16_ParamLimits

0xfdfe,	// (0x00072df4) frm_month_g_ParamLimits

0x3ee2,	// (0x00066ed8) cell_top_day_name_pane_t1_ParamLimits

0xe476,	// (0x0007146c) cell_area_left_week_number_pane_g1_ParamLimits

0xe485,	// (0x0007147b) cell_area_left_week_number_pane_t1_ParamLimits

0x07c6,	// (0x000637bc) cell_month_view_pane_g1_ParamLimits

0xe49b,	// (0x00071491) cell_month_view_pane_t1_ParamLimits

0x0735,	// (0x0006372b) main_clock2_btn_pane_g1

0x4058,	// (0x0006704e) main_clock2_btn_pane_t1

0x075f,	// (0x00063755) listscroll_cmail_pane_ParamLimits

0x3400,	// (0x000663f6) main_sp_fs_email_pane_g1_ParamLimits

0x340c,	// (0x00066402) main_sp_fs_email_pane_g2_ParamLimits

0xfc51,	// (0x00072c47) main_sp_fs_email_pane_g_ParamLimits

0x39d7,	// (0x000669cd) list_recal_day_pane_ParamLimits

0x39e8,	// (0x000669de) mian_recal_day_pane_t1

0x6dc7,	// (0x00069dbd) list_single_dyc_row_text_pane_t4_ParamLimits

0x6dc7,	// (0x00069dbd) list_single_dyc_row_text_pane_t4

0x6dfe,	// (0x00069df4) list_single_dyc_row_text_pane_t5_ParamLimits

0x6dfe,	// (0x00069df4) list_single_dyc_row_text_pane_t5

0x6e74,	// (0x00069e6a) list_single_dyc_row_text_pane_t6_ParamLimits

0x6e74,	// (0x00069e6a) list_single_dyc_row_text_pane_t6

0x0eb5,	// (0x00063eab) aid_mgn_list_cale_time_pane

0x075f,	// (0x00063755) main_gallery2_pane_ParamLimits

0x503e,	// (0x00068034) main_clock2_pane_cp01_t1

0x504e,	// (0x00068044) main_clock2_pane_cp01_t3

0x0001,

0xf737,	// (0x0007272d) main_clock2_pane_cp01_t

0x7cba,	// (0x0006acb0) cale_week_scroll_pane_g16_ParamLimits

0x7cba,	// (0x0006acb0) cale_week_scroll_pane_g16

0x0a9f,	// (0x00063a95) vorec_slider_pane

0x3fd4,	// (0x00066fca) vidtel_button_pane_t1_ParamLimits

0xdd84,	// (0x00070d7a) main_fs_bigclock_clock_pane_g1_ParamLimits

0xdd84,	// (0x00070d7a) main_fs_bigclock_clock_pane_g2_ParamLimits

0xdd91,	// (0x00070d87) main_fs_bigclock_clock_pane_g3_ParamLimits

0xdd91,	// (0x00070d87) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd54,	// (0x00072d4a) main_fs_bigclock_clock_pane_g_ParamLimits

0xdd9d,	// (0x00070d93) main_fs_bigclock_clock_pane_t1_ParamLimits

0xddb0,	// (0x00070da6) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd5d,	// (0x00072d53) main_fs_bigclock_clock_pane_t_ParamLimits

0xa721,	// (0x0006d717) main_mup3_lyrics_pane_ParamLimits

0xa721,	// (0x0006d717) main_mup3_lyrics_pane

0xe8f9,	// (0x000718ef) main_mup3_lyrics_pane_t1_ParamLimits

0xe8f9,	// (0x000718ef) main_mup3_lyrics_pane_t1

0xb2b0,	// (0x0006e2a6) aid_main_mp4_pane_t1_area

0xb2ba,	// (0x0006e2b0) aid_main_mp4_pane_t2_area

0xb3b9,	// (0x0006e3af) main_mp4_pane_g7_ParamLimits

0xb3b9,	// (0x0006e3af) main_mp4_pane_g7

0xb3c5,	// (0x0006e3bb) main_mp4_pane_g8_ParamLimits

0xb3c5,	// (0x0006e3bb) main_mp4_pane_g8

0xb7d7,	// (0x0006e7cd) aid_call6_pane_g1_size

0xe5eb,	// (0x000715e1) list_double_large_graphic_phob2_other_pane_ParamLimits

0xe5eb,	// (0x000715e1) list_double_large_graphic_phob2_other_pane

0x0e6d,	// (0x00063e63) list_double_large_graphic_phob2_other_pane_g1

0x0040,	// (0x00063036) list_highlight_pane_cp026

0x075f,	// (0x00063755) main_welc_pane_ParamLimits

0xd81c,	// (0x00070812) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xd81c,	// (0x00070812) main_sp_fs_ctrlbar_pane_g3

0xd834,	// (0x0007082a) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xd834,	// (0x0007082a) main_sp_fs_ctrlbar_pane_g4

0xd866,	// (0x0007085c) toolbar2_fixed_button_pane_cp01

0xd871,	// (0x00070867) toolbar2_fixed_button_pane_cp02

0xd87c,	// (0x00070872) toolbar2_fixed_button_pane_cp03

0xe646,	// (0x0007163c) list_welc_entry_pane_ParamLimits

0xe646,	// (0x0007163c) list_welc_entry_pane

0xe6a2,	// (0x00071698) main_welc_pane_g3_ParamLimits

0xe6a2,	// (0x00071698) main_welc_pane_g3

0xe6e8,	// (0x000716de) main_welc_pane_t2_ParamLimits

0xe6e8,	// (0x000716de) main_welc_pane_t2

0xe6fc,	// (0x000716f2) main_welc_pane_t3_ParamLimits

0xe6fc,	// (0x000716f2) main_welc_pane_t3

0x0005,

0xfe60,	// (0x00072e56) main_welc_pane_t_ParamLimits

0xfe60,	// (0x00072e56) main_welc_pane_t

0xe7f8,	// (0x000717ee) welc_button_pane_ParamLimits

0xe7f8,	// (0x000717ee) welc_button_pane

0xe848,	// (0x0007183e) welc_service_logo_pane_ParamLimits

0xe848,	// (0x0007183e) welc_service_logo_pane

0xe92b,	// (0x00071921) list_single_welc_entry_pane_ParamLimits

0xe92b,	// (0x00071921) list_single_welc_entry_pane

0xe93c,	// (0x00071932) list_single_welc_entry_pane_g1

0xe944,	// (0x0007193a) list_single_welc_entry_pane_t1

0xe952,	// (0x00071948) list_single_welc_entry_pane_t2

0x0001,

0xfe72,	// (0x00072e68) list_single_welc_entry_pane_t

0x0040,	// (0x00063036) bg_button_pane_cp035

0x4066,	// (0x0006705c) welc_button_pane_t1

0x4074,	// (0x0006706a) welc_service_logo_pane_g1

0x407d,	// (0x00067073) welc_service_logo_pane_g2

0x0001,

0xfe77,	// (0x00072e6d) welc_service_logo_pane_g

0x0040,	// (0x00063036) main_int_radio_pane

0x08f5,	// (0x000638eb) list_single_fs_dyc_pane_g1

0x72b5,	// (0x0006a2ab) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x72b5,	// (0x0006a2ab) list_double_large_graphic_phob2_pane_g3

0xe53e,	// (0x00071534) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xe53e,	// (0x00071534) list_double_large_graphic_phob2_pane_g4

0xe960,	// (0x00071956) main_int_radio1_pane_ParamLimits

0xe960,	// (0x00071956) main_int_radio1_pane

0x4086,	// (0x0006707c) find_pane_cp02

0xe972,	// (0x00071968) input_focus_pane_cp12_ParamLimits

0xe972,	// (0x00071968) input_focus_pane_cp12

0xe97e,	// (0x00071974) input_focus_pane_cp13_ParamLimits

0xe97e,	// (0x00071974) input_focus_pane_cp13

0xe996,	// (0x0007198c) input_focus_pane_cp14_ParamLimits

0xe996,	// (0x0007198c) input_focus_pane_cp14

0x408f,	// (0x00067085) int_radio1_listscroll_pane

0xe9ae,	// (0x000719a4) main_int_radio1_pane_g1_ParamLimits

0xe9ae,	// (0x000719a4) main_int_radio1_pane_g1

0xe9be,	// (0x000719b4) main_int_radio1_pane_t1_ParamLimits

0xe9be,	// (0x000719b4) main_int_radio1_pane_t1

0xe9d2,	// (0x000719c8) main_int_radio1_pane_t2_ParamLimits

0xe9d2,	// (0x000719c8) main_int_radio1_pane_t2

0xe9e6,	// (0x000719dc) main_int_radio1_pane_t3_ParamLimits

0xe9e6,	// (0x000719dc) main_int_radio1_pane_t3

0xe9fa,	// (0x000719f0) main_int_radio1_pane_t4_ParamLimits

0xe9fa,	// (0x000719f0) main_int_radio1_pane_t4

0x4099,	// (0x0006708f) main_int_radio1_pane_t5_ParamLimits

0x4099,	// (0x0006708f) main_int_radio1_pane_t5

0xea11,	// (0x00071a07) main_int_radio1_pane_t6_ParamLimits

0xea11,	// (0x00071a07) main_int_radio1_pane_t6

0xea23,	// (0x00071a19) main_int_radio1_pane_t7_ParamLimits

0xea23,	// (0x00071a19) main_int_radio1_pane_t7

0xea35,	// (0x00071a2b) main_int_radio1_pane_t8_ParamLimits

0xea35,	// (0x00071a2b) main_int_radio1_pane_t8

0xea49,	// (0x00071a3f) main_int_radio1_pane_t9_ParamLimits

0xea49,	// (0x00071a3f) main_int_radio1_pane_t9

0xea5b,	// (0x00071a51) main_int_radio1_pane_t10_ParamLimits

0xea5b,	// (0x00071a51) main_int_radio1_pane_t10

0xea8c,	// (0x00071a82) main_int_radio1_pane_t11_ParamLimits

0xea8c,	// (0x00071a82) main_int_radio1_pane_t11

0xeabd,	// (0x00071ab3) main_int_radio1_pane_t12_ParamLimits

0xeabd,	// (0x00071ab3) main_int_radio1_pane_t12

0x000b,

0xfe7c,	// (0x00072e72) main_int_radio1_pane_t_ParamLimits

0xfe7c,	// (0x00072e72) main_int_radio1_pane_t

0x40ab,	// (0x000670a1) int_radio_list_pane

0x3efd,	// (0x00066ef3) scroll_pane_cp037

0x40b3,	// (0x000670a9) list_double_large_graphic_int_radio_pane_ParamLimits

0x40b3,	// (0x000670a9) list_double_large_graphic_int_radio_pane

0x40cb,	// (0x000670c1) list_double_large_graphic_int_radio_pane_g1

0x736f,	// (0x0006a365) list_double_large_graphic_int_radio_pane_t1

0x737d,	// (0x0006a373) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe95,	// (0x00072e8b) list_double_large_graphic_int_radio_pane_t

0x0040,	// (0x00063036) list_highlight_pane_cp027

0x401b,	// (0x00067011) main_button_pane_4

0xe6ae,	// (0x000716a4) main_welc_pane_g4_ParamLimits

0xe6ae,	// (0x000716a4) main_welc_pane_g4

0xe70e,	// (0x00071704) main_welc_pane_t4_ParamLimits

0xe70e,	// (0x00071704) main_welc_pane_t4

0xe720,	// (0x00071716) main_welc_pane_t5_ParamLimits

0xe720,	// (0x00071716) main_welc_pane_t5

0xe750,	// (0x00071746) main_welc_pane_t6_ParamLimits

0xe750,	// (0x00071746) main_welc_pane_t6

0xe806,	// (0x000717fc) welc_button_pane_2_ParamLimits

0xe806,	// (0x000717fc) welc_button_pane_2

0xe81e,	// (0x00071814) welc_button_pane_3_ParamLimits

0xe81e,	// (0x00071814) welc_button_pane_3

0x4023,	// (0x00067019) welc_button_pane_4

0xe838,	// (0x0007182e) welc_button_pane_5_ParamLimits

0xe838,	// (0x0007182e) welc_button_pane_5

0x73df,	// (0x0006a3d5) main_popup_welc_pane

0x40ff,	// (0x000670f5) main_welc_sk_g3

0x4109,	// (0x000670ff) main_welc_sk_g4

0x4113,	// (0x00067109) main_welc_sk_t3

0x4123,	// (0x00067119) main_welc_sk_t4

0x4133,	// (0x00067129) popup_welc_pane_t4

0x4141,	// (0x00067137) popup_welc_pane_t5

0x4151,	// (0x00067147) popup_welc_pane_t6

0x0040,	// (0x00063036) main_acti_pane

0x0040,	// (0x00063036) main_sso_pane

0xead4,	// (0x00071aca) sso_body_pane_ParamLimits

0xead4,	// (0x00071aca) sso_body_pane

0xeae2,	// (0x00071ad8) sso_logo_pane_ParamLimits

0xeae2,	// (0x00071ad8) sso_logo_pane

0xeb09,	// (0x00071aff) sso_sk_pane_ParamLimits

0xeb09,	// (0x00071aff) sso_sk_pane

0x0adf,	// (0x00063ad5) main_sso_logo_pane_g1

0xeb16,	// (0x00071b0c) sso_sk_pane_t1_ParamLimits

0xeb16,	// (0x00071b0c) sso_sk_pane_t1

0xeb2a,	// (0x00071b20) sso_sk_pane_t2_ParamLimits

0xeb2a,	// (0x00071b20) sso_sk_pane_t2

0x0001,

0xfe9a,	// (0x00072e90) sso_sk_pane_t_ParamLimits

0xfe9a,	// (0x00072e90) sso_sk_pane_t

0x418f,	// (0x00067185) aid_sso_gap

0x4198,	// (0x0006718e) aid_sso_txt1

0x41a2,	// (0x00067198) aid_sso_txt2

0x41ac,	// (0x000671a2) aid_sso_txt3

0x0002,

0xfe9f,	// (0x00072e95) aid_sso_txt

0x41b6,	// (0x000671ac) aid_sso_widget

0xeb89,	// (0x00071b7f) sso_btn_pane_ParamLimits

0xeb89,	// (0x00071b7f) sso_btn_pane

0xec02,	// (0x00071bf8) sso_option_pane_ParamLimits

0xec02,	// (0x00071bf8) sso_option_pane

0xec7c,	// (0x00071c72) sso_query_pane_ParamLimits

0xec7c,	// (0x00071c72) sso_query_pane

0xeccc,	// (0x00071cc2) sso_query_pane_cp01_ParamLimits

0xeccc,	// (0x00071cc2) sso_query_pane_cp01

0xed1e,	// (0x00071d14) sso_t_hdr_pane_ParamLimits

0xed1e,	// (0x00071d14) sso_t_hdr_pane

0xed3d,	// (0x00071d33) sso_t_nml_pane_ParamLimits

0xed3d,	// (0x00071d33) sso_t_nml_pane

0x41ac,	// (0x000671a2) sso_t_sub_pane

0xeaef,	// (0x00071ae5) sso_popup_window_ParamLimits

0xeaef,	// (0x00071ae5) sso_popup_window

0xeb3c,	// (0x00071b32) sso_apps_pane_ParamLimits

0xeb3c,	// (0x00071b32) sso_apps_pane

0xeb5f,	// (0x00071b55) sso_body_pane_g1

0xeb69,	// (0x00071b5f) sso_body_pane_t1

0xeb79,	// (0x00071b6f) sso_body_pane_t2

0x0001,

0xfea6,	// (0x00072e9c) sso_body_pane_t

0xebd4,	// (0x00071bca) sso_btn_pane_cp01_ParamLimits

0xebd4,	// (0x00071bca) sso_btn_pane_cp01

0xec4e,	// (0x00071c44) sso_prog_pane_ParamLimits

0xec4e,	// (0x00071c44) sso_prog_pane

0x41c0,	// (0x000671b6) sso_t_hdr_pane_t1_ParamLimits

0x41c0,	// (0x000671b6) sso_t_hdr_pane_t1

0x41d3,	// (0x000671c9) input_focus_pane_cp10_ParamLimits

0x41d3,	// (0x000671c9) input_focus_pane_cp10

0x41e9,	// (0x000671df) sso_query_pane_t1_ParamLimits

0x41e9,	// (0x000671df) sso_query_pane_t1

0x41fc,	// (0x000671f2) sso_query_pane_t2_ParamLimits

0x41fc,	// (0x000671f2) sso_query_pane_t2

0x4217,	// (0x0006720d) sso_query_pane_t3_ParamLimits

0x4217,	// (0x0006720d) sso_query_pane_t3

0x4241,	// (0x00067237) sso_query_pane_t4_ParamLimits

0x4241,	// (0x00067237) sso_query_pane_t4

0x0003,

0xfeab,	// (0x00072ea1) sso_query_pane_t_ParamLimits

0xfeab,	// (0x00072ea1) sso_query_pane_t

0x0040,	// (0x00063036) bg_button_pane_cp22

0x40f0,	// (0x000670e6) sso_btn_pane_t1

0xed8d,	// (0x00071d83) sso_t_nml_pane_t1_ParamLimits

0xed8d,	// (0x00071d83) sso_t_nml_pane_t1

0x4265,	// (0x0006725b) sso_option_row_pane_ParamLimits

0x4265,	// (0x0006725b) sso_option_row_pane

0x4272,	// (0x00067268) sso_t_sub_pane_t1_ParamLimits

0x4272,	// (0x00067268) sso_t_sub_pane_t1

0x075f,	// (0x00063755) bg_popup_window_pane_cp11_ParamLimits

0x075f,	// (0x00063755) bg_popup_window_pane_cp11

0x4285,	// (0x0006727b) popup_sk_window_cp01_ParamLimits

0x4285,	// (0x0006727b) popup_sk_window_cp01

0x4292,	// (0x00067288) sso_popup_body_pane_ParamLimits

0x4292,	// (0x00067288) sso_popup_body_pane

0x429f,	// (0x00067295) scroll_pane_cp21_ParamLimits

0x429f,	// (0x00067295) scroll_pane_cp21

0x42ac,	// (0x000672a2) sso_popup_body_t_pane_ParamLimits

0x42ac,	// (0x000672a2) sso_popup_body_t_pane

0x42b9,	// (0x000672af) sso_popup_body_t_hdr_pane_ParamLimits

0x42b9,	// (0x000672af) sso_popup_body_t_hdr_pane

0x42c7,	// (0x000672bd) sso_popup_body_t_nml_pane_ParamLimits

0x42c7,	// (0x000672bd) sso_popup_body_t_nml_pane

0x42e2,	// (0x000672d8) sso_popup_body_t_sub_pane_ParamLimits

0x42e2,	// (0x000672d8) sso_popup_body_t_sub_pane

0x4305,	// (0x000672fb) sso_popup_body_t_hdr_pane_t1

0xedaa,	// (0x00071da0) sso_popup_body_t_nml_pane_t1_ParamLimits

0xedaa,	// (0x00071da0) sso_popup_body_t_nml_pane_t1

0x4315,	// (0x0006730b) sso_popup_body_t_sub_pane_t1_ParamLimits

0x4315,	// (0x0006730b) sso_popup_body_t_sub_pane_t1

0x0adf,	// (0x00063ad5) sso_prog_pane_g1

0xedeb,	// (0x00071de1) sso_apps_pane_comp1_ParamLimits

0xedeb,	// (0x00071de1) sso_apps_pane_comp1

0x433a,	// (0x00067330) sso_apps_pane_comp1_g1

0x4342,	// (0x00067338) sso_apps_pane_comp1_t1

0x4350,	// (0x00067346) sso_option_row_pane_g1

0x4358,	// (0x0006734e) sso_option_row_pane_t1

0xe634,	// (0x0007162a) bg_welc_area_ParamLimits

0xe634,	// (0x0007162a) bg_welc_area

0xe786,	// (0x0007177c) sso_t_hdr_pane_a_t1_ParamLimits

0xe786,	// (0x0007177c) sso_t_hdr_pane_a_t1

0xe79a,	// (0x00071790) sso_t_nml_pane_a_t1_ParamLimits

0xe79a,	// (0x00071790) sso_t_nml_pane_a_t1

0xe7c4,	// (0x000717ba) sso_t_sub_pane_a_t1_ParamLimits

0xe7c4,	// (0x000717ba) sso_t_sub_pane_a_t1

0x40f0,	// (0x000670e6) sso_btn_pane_t1_copy1

0x0040,	// (0x00063036) welc_button_pane_2_comp1

0x415f,	// (0x00067155) sso_t_hdr_pane_p_t1

0x416f,	// (0x00067165) sso_t_nml_pane_p_t1

0x417f,	// (0x00067175) sso_t_sub_pane_p_t1
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

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
