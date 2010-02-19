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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0004cb40 };

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
0x5a67,	// (0x000525a7) Screen

0x5a73,	// (0x000525b3) application_window

0x5ab3,	// (0x000525f3) area_bottom_pane_ParamLimits

0x5ab3,	// (0x000525f3) area_bottom_pane

0x5ae8,	// (0x00052628) area_top_pane_ParamLimits

0x5ae8,	// (0x00052628) area_top_pane

0x01d7,	// (0x0004cd17) call_video_uplink_pane_ParamLimits

0x01d7,	// (0x0004cd17) call_video_uplink_pane

0x5b75,	// (0x000526b5) main_pane_ParamLimits

0x5b75,	// (0x000526b5) main_pane

0x3e78,	// (0x000509b8) context_pane

0x8d61,	// (0x000558a1) navi_pane

0x8d81,	// (0x000558c1) popup_cale_events_window_ParamLimits

0x8d81,	// (0x000558c1) popup_cale_events_window

0x3e8b,	// (0x000509cb) popup_mup_playback_window

0x8d99,	// (0x000558d9) signal_pane

0x1f79,	// (0x0004eab9) main_browser_pane

0x2a03,	// (0x0004f543) main_burst_pane

0x8c37,	// (0x00055777) main_calc_pane

0x2a03,	// (0x0004f543) main_cale_day_pane

0x1f79,	// (0x0004eab9) main_cale_month_pane

0x2a03,	// (0x0004f543) main_cale_week_pane

0x2a03,	// (0x0004f543) main_call_pane

0x1c07,	// (0x0004e747) main_call_poc_pane

0x2a03,	// (0x0004f543) main_camera_pane

0x2a03,	// (0x0004f543) main_chi_dic_pane

0x2884,	// (0x0004f3c4) main_clock_pane

0x1c07,	// (0x0004e747) main_fmradio_pane

0x2a03,	// (0x0004f543) main_graph_messa_pane

0x1c07,	// (0x0004e747) main_help_pane

0x1f79,	// (0x0004eab9) main_im_pane

0x1e62,	// (0x0004e9a2) main_image_pane_ParamLimits

0x1e62,	// (0x0004e9a2) main_image_pane

0x1c07,	// (0x0004e747) main_location2_pane

0x2a03,	// (0x0004f543) main_location_pane

0x1c07,	// (0x0004e747) main_messa_pane

0x1c07,	// (0x0004e747) main_mp2_pane

0x2a03,	// (0x0004f543) main_mp_pane

0x1c07,	// (0x0004e747) main_msg_pane

0x1c07,	// (0x0004e747) main_mup_eq_pane

0x1c07,	// (0x0004e747) main_mup_pane

0x1f79,	// (0x0004eab9) main_notes_pane

0x1c07,	// (0x0004e747) main_pec_pane

0x1c07,	// (0x0004e747) main_phob_pane

0x1c07,	// (0x0004e747) main_pinb_pane

0x1c07,	// (0x0004e747) main_postcard_pane

0x1c07,	// (0x0004e747) main_qdial_pane

0x2a03,	// (0x0004f543) main_skin_pane

0x1c07,	// (0x0004e747) main_smil2_pane

0x2a03,	// (0x0004f543) main_smil_pane

0x2a03,	// (0x0004f543) main_video_pane

0x2a03,	// (0x0004f543) main_video_tele_pane

0x1e62,	// (0x0004e9a2) main_viewer_pane_ParamLimits

0x1e62,	// (0x0004e9a2) main_viewer_pane

0x2a03,	// (0x0004f543) main_vorec_pane

0x8c6d,	// (0x000557ad) popup_blid_sat_info_window_ParamLimits

0x8c6d,	// (0x000557ad) popup_blid_sat_info_window

0x8c83,	// (0x000557c3) popup_dyc_status_message_window_ParamLimits

0x8c83,	// (0x000557c3) popup_dyc_status_message_window

0x8c91,	// (0x000557d1) popup_grid_large_graphic_window_ParamLimits

0x8c91,	// (0x000557d1) popup_grid_large_graphic_window

0x8d05,	// (0x00055845) popup_loc_request_window_ParamLimits

0x8d05,	// (0x00055845) popup_loc_request_window

0x8d39,	// (0x00055879) popup_wml_address_window_ParamLimits

0x8d39,	// (0x00055879) popup_wml_address_window

0x8b0f,	// (0x0005564f) call_muted_g1

0x87ce,	// (0x0005530e) popup_call_audio_conf_window_ParamLimits

0x87ce,	// (0x0005530e) popup_call_audio_conf_window

0x8b1f,	// (0x0005565f) popup_call_audio_first_window_ParamLimits

0x8b1f,	// (0x0005565f) popup_call_audio_first_window

0x8b5f,	// (0x0005569f) popup_call_audio_in_window_ParamLimits

0x8b5f,	// (0x0005569f) popup_call_audio_in_window

0x8b83,	// (0x000556c3) popup_call_audio_out_window_ParamLimits

0x8b83,	// (0x000556c3) popup_call_audio_out_window

0x8ba5,	// (0x000556e5) popup_call_audio_second_window_ParamLimits

0x8ba5,	// (0x000556e5) popup_call_audio_second_window

0x8bd5,	// (0x00055715) popup_call_audio_wait_window_ParamLimits

0x8bd5,	// (0x00055715) popup_call_audio_wait_window

0x8bf6,	// (0x00055736) popup_number_entry_window_ParamLimits

0x8bf6,	// (0x00055736) popup_number_entry_window

0x17f6,	// (0x0004e336) bg_popup_call_pane_cp05_ParamLimits

0x17f6,	// (0x0004e336) bg_popup_call_pane_cp05

0x1816,	// (0x0004e356) popup_number_entry_window_t1

0x1829,	// (0x0004e369) popup_number_entry_window_t2

0x183b,	// (0x0004e37b) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x0005bc27) popup_number_entry_window_t

0x184d,	// (0x0004e38d) text_title_cp2

0x1860,	// (0x0004e3a0) bg_popup_call_pane_cp_ParamLimits

0x1860,	// (0x0004e3a0) bg_popup_call_pane_cp

0x186e,	// (0x0004e3ae) call_thumbnail_pane

0x1876,	// (0x0004e3b6) popup_call_audio_in_window_g1_ParamLimits

0x1876,	// (0x0004e3b6) popup_call_audio_in_window_g1

0x1882,	// (0x0004e3c2) popup_call_audio_in_window_g2_ParamLimits

0x1882,	// (0x0004e3c2) popup_call_audio_in_window_g2

0x188e,	// (0x0004e3ce) popup_call_audio_in_window_g3_ParamLimits

0x188e,	// (0x0004e3ce) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x0005bc30) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x0005bc30) popup_call_audio_in_window_g

0x189a,	// (0x0004e3da) popup_call_audio_in_window_t1_ParamLimits

0x189a,	// (0x0004e3da) popup_call_audio_in_window_t1

0x18b5,	// (0x0004e3f5) popup_call_audio_in_window_t2_ParamLimits

0x18b5,	// (0x0004e3f5) popup_call_audio_in_window_t2

0x18d0,	// (0x0004e410) popup_call_audio_in_window_t3_ParamLimits

0x18d0,	// (0x0004e410) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x0005bc37) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x0005bc37) popup_call_audio_in_window_t

0x1860,	// (0x0004e3a0) bg_popup_call_pane_cp01_ParamLimits

0x1860,	// (0x0004e3a0) bg_popup_call_pane_cp01

0x186e,	// (0x0004e3ae) call_thumbnail_pane_cp02

0x18e3,	// (0x0004e423) call_type_pane_cp022

0x18eb,	// (0x0004e42b) popup_call_audio_out_window_g1_ParamLimits

0x18eb,	// (0x0004e42b) popup_call_audio_out_window_g1

0x18fd,	// (0x0004e43d) popup_call_audio_out_window_g2_ParamLimits

0x18fd,	// (0x0004e43d) popup_call_audio_out_window_g2

0x1909,	// (0x0004e449) popup_call_audio_out_window_g3_ParamLimits

0x1909,	// (0x0004e449) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0005bc3e) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0005bc3e) popup_call_audio_out_window_g

0x191b,	// (0x0004e45b) popup_call_audio_out_window_t1_ParamLimits

0x191b,	// (0x0004e45b) popup_call_audio_out_window_t1

0x1933,	// (0x0004e473) popup_call_audio_out_window_t2_ParamLimits

0x1933,	// (0x0004e473) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x0005bc45) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x0005bc45) popup_call_audio_out_window_t

0x1948,	// (0x0004e488) bg_popup_call_pane_ParamLimits

0x1948,	// (0x0004e488) bg_popup_call_pane

0x5d68,	// (0x000528a8) call_thumbnail_pane_cp_ParamLimits

0x5d68,	// (0x000528a8) call_thumbnail_pane_cp

0x19cc,	// (0x0004e50c) call_type_pane_cp01_ParamLimits

0x19cc,	// (0x0004e50c) call_type_pane_cp01

0x1a10,	// (0x0004e550) popup_call_audio_first_window_g1_ParamLimits

0x1a10,	// (0x0004e550) popup_call_audio_first_window_g1

0x1a5c,	// (0x0004e59c) popup_call_audio_first_window_g2_ParamLimits

0x1a5c,	// (0x0004e59c) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x0005bc4a) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x0005bc4a) popup_call_audio_first_window_g

0x1aa0,	// (0x0004e5e0) popup_call_audio_first_window_t1_ParamLimits

0x1aa0,	// (0x0004e5e0) popup_call_audio_first_window_t1

0x1b4c,	// (0x0004e68c) popup_call_audio_first_window_t4_ParamLimits

0x1b4c,	// (0x0004e68c) popup_call_audio_first_window_t4

0x1bd8,	// (0x0004e718) popup_call_audio_first_window_t5_ParamLimits

0x1bd8,	// (0x0004e718) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x0005bc4f) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x0005bc4f) popup_call_audio_first_window_t

0x1c07,	// (0x0004e747) bg_popup_call_pane_cp02

0x1c11,	// (0x0004e751) call_type_pane_cp023

0x1c19,	// (0x0004e759) popup_call_audio_wait_window_g1

0x1c21,	// (0x0004e761) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x0005bc56) popup_call_audio_wait_window_g

0x1c29,	// (0x0004e769) popup_call_audio_wait_window_t3

0x1c37,	// (0x0004e777) bg_popup_call_pane_cp03_ParamLimits

0x1c37,	// (0x0004e777) bg_popup_call_pane_cp03

0x1c97,	// (0x0004e7d7) call_thumbnail_pane_cp011_ParamLimits

0x1c97,	// (0x0004e7d7) call_thumbnail_pane_cp011

0x1ca3,	// (0x0004e7e3) call_type_pane_cp034_ParamLimits

0x1ca3,	// (0x0004e7e3) call_type_pane_cp034

0x1cdf,	// (0x0004e81f) popup_call_audio_second_window_g1_ParamLimits

0x1cdf,	// (0x0004e81f) popup_call_audio_second_window_g1

0x1d1b,	// (0x0004e85b) popup_call_audio_second_window_g2_ParamLimits

0x1d1b,	// (0x0004e85b) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x0005bc5b) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x0005bc5b) popup_call_audio_second_window_g

0x1d57,	// (0x0004e897) popup_call_audio_second_window_t1_ParamLimits

0x1d57,	// (0x0004e897) popup_call_audio_second_window_t1

0x1dd8,	// (0x0004e918) popup_call_audio_second_window_t2_ParamLimits

0x1dd8,	// (0x0004e918) popup_call_audio_second_window_t2

0x1e0e,	// (0x0004e94e) popup_call_audio_second_window_t3_ParamLimits

0x1e0e,	// (0x0004e94e) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x0005bc60) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x0005bc60) popup_call_audio_second_window_t

0x1c07,	// (0x0004e747) bg_popup_call_pane_cp04

0x1e44,	// (0x0004e984) list_conf_pane

0x1e4c,	// (0x0004e98c) popup_call_audio_conf_window_t1

0x1e5a,	// (0x0004e99a) call_thumbnail_pane_g1

0x1e62,	// (0x0004e9a2) bg_pinb_pane_ParamLimits

0x1e62,	// (0x0004e9a2) bg_pinb_pane

0x1e70,	// (0x0004e9b0) find_pinb_pane

0x1e79,	// (0x0004e9b9) listscroll_pinb_pane_ParamLimits

0x1e79,	// (0x0004e9b9) listscroll_pinb_pane

0x1e88,	// (0x0004e9c8) pinb_bg_pane_g1

0x5d8c,	// (0x000528cc) pinb_bg_pane_g2

0x5d98,	// (0x000528d8) pinb_bg_pane_g3

0x5da4,	// (0x000528e4) pinb_bg_pane_g4

0x5db0,	// (0x000528f0) pinb_bg_pane_g5

0x5dbc,	// (0x000528fc) pinb_bg_pane_g6

0x5dc7,	// (0x00052907) pinb_bg_pane_g7

0x5dd2,	// (0x00052912) pinb_bg_pane_g8

0x5ddd,	// (0x0005291d) pinb_bg_pane_g9

0x5de7,	// (0x00052927) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x0005bc67) pinb_bg_pane_g

0x5dfc,	// (0x0005293c) grid_pinb_pane

0x5e07,	// (0x00052947) list_pinb_pane

0x5e12,	// (0x00052952) scroll_pane_cp01_ParamLimits

0x5e12,	// (0x00052952) scroll_pane_cp01

0x1e9a,	// (0x0004e9da) find_pinb_pane_g1_ParamLimits

0x1e9a,	// (0x0004e9da) find_pinb_pane_g1

0x1eb2,	// (0x0004e9f2) find_pinb_pane_t1

0x1ec4,	// (0x0004ea04) find_pinb_pane_t2

0x0001,

0xf141,	// (0x0005bc81) find_pinb_pane_t

0x1ed9,	// (0x0004ea19) input_focus_pane_cp01_ParamLimits

0x1ed9,	// (0x0004ea19) input_focus_pane_cp01

0x5e24,	// (0x00052964) cell_pinb_pane_ParamLimits

0x5e24,	// (0x00052964) cell_pinb_pane

0x5e58,	// (0x00052998) cell_pinb_pane_g1_ParamLimits

0x5e58,	// (0x00052998) cell_pinb_pane_g1

0x5e6d,	// (0x000529ad) cell_pinb_pane_g2_ParamLimits

0x5e6d,	// (0x000529ad) cell_pinb_pane_g2

0x1ee5,	// (0x0004ea25) cell_pinb_pane_g3_ParamLimits

0x1ee5,	// (0x0004ea25) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x0005bc86) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x0005bc86) cell_pinb_pane_g

0x1c07,	// (0x0004e747) grid_highlight_pane_cp01

0x5e79,	// (0x000529b9) list_pinb_item_pane_ParamLimits

0x5e79,	// (0x000529b9) list_pinb_item_pane

0x1c07,	// (0x0004e747) list_highlight_pane_cp02

0x1ef1,	// (0x0004ea31) list_pinb_item_pane_g1_ParamLimits

0x1ef1,	// (0x0004ea31) list_pinb_item_pane_g1

0x1efe,	// (0x0004ea3e) list_pinb_item_pane_g2_ParamLimits

0x1efe,	// (0x0004ea3e) list_pinb_item_pane_g2

0x5ea6,	// (0x000529e6) list_pinb_item_pane_g3_ParamLimits

0x5ea6,	// (0x000529e6) list_pinb_item_pane_g3

0x1f0a,	// (0x0004ea4a) list_pinb_item_pane_g4_ParamLimits

0x1f0a,	// (0x0004ea4a) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x0005bc8d) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x0005bc8d) list_pinb_item_pane_g

0x1f16,	// (0x0004ea56) list_pinb_item_pane_t1_ParamLimits

0x1f16,	// (0x0004ea56) list_pinb_item_pane_t1

0x5ed1,	// (0x00052a11) calc_display_pane

0x5eef,	// (0x00052a2f) calc_paper_pane

0x5f0b,	// (0x00052a4b) grid_calc_pane

0x1c07,	// (0x0004e747) bg_list_pane_cp01

0x5f37,	// (0x00052a77) clock_g1

0x5f3f,	// (0x00052a7f) clock_g2

0x0001,

0xf156,	// (0x0005bc96) clock_g

0x5f49,	// (0x00052a89) clock_t1_ParamLimits

0x5f49,	// (0x00052a89) clock_t1

0x5f5e,	// (0x00052a9e) clock_t2_ParamLimits

0x5f5e,	// (0x00052a9e) clock_t2

0x5f70,	// (0x00052ab0) clock_t3_ParamLimits

0x5f70,	// (0x00052ab0) clock_t3

0x5f82,	// (0x00052ac2) clock_t4_ParamLimits

0x5f82,	// (0x00052ac2) clock_t4

0x5f94,	// (0x00052ad4) clock_t5_ParamLimits

0x5f94,	// (0x00052ad4) clock_t5

0x5fa9,	// (0x00052ae9) clock_t6_ParamLimits

0x5fa9,	// (0x00052ae9) clock_t6

0x5fbb,	// (0x00052afb) clock_t7_ParamLimits

0x5fbb,	// (0x00052afb) clock_t7

0x5fcd,	// (0x00052b0d) clock_t8_ParamLimits

0x5fcd,	// (0x00052b0d) clock_t8

0x5fe3,	// (0x00052b23) clock_t9_ParamLimits

0x5fe3,	// (0x00052b23) clock_t9

0x0008,

0xf15b,	// (0x0005bc9b) clock_t_ParamLimits

0xf15b,	// (0x0005bc9b) clock_t

0x1f2d,	// (0x0004ea6d) popup_clock_analogue_window_cp02

0x1f2d,	// (0x0004ea6d) popup_clock_digital_window_cp01

0x1f35,	// (0x0004ea75) listscroll_help_pane

0x1c07,	// (0x0004e747) phob_pre_status_pane

0x1f3f,	// (0x0004ea7f) grid_qdial_pane

0x1c07,	// (0x0004e747) listscroll_mce_pane

0x1f49,	// (0x0004ea89) bg_notes_pane

0x1f57,	// (0x0004ea97) list_notes_pane

0x5ff9,	// (0x00052b39) scroll_pane_cp06

0x1f65,	// (0x0004eaa5) bg_calc_paper_pane

0x6012,	// (0x00052b52) list_calc_pane

0x1f79,	// (0x0004eab9) bg_calc_display_pane

0x602c,	// (0x00052b6c) calc_display_pane_t1

0x6041,	// (0x00052b81) calc_display_pane_t2

0x6056,	// (0x00052b96) calc_display_pane_t3

0x0002,

0xf16e,	// (0x0005bcae) calc_display_pane_t

0x6068,	// (0x00052ba8) cell_calc_pane_ParamLimits

0x6068,	// (0x00052ba8) cell_calc_pane

0x1f85,	// (0x0004eac5) bg_calc_paper_pane_g1

0x1f9d,	// (0x0004eadd) bg_calc_paper_pane_g2

0x1f91,	// (0x0004ead1) bg_calc_paper_pane_g3

0x1fb5,	// (0x0004eaf5) bg_calc_paper_pane_g4

0x1fa9,	// (0x0004eae9) bg_calc_paper_pane_g5

0x6095,	// (0x00052bd5) bg_calc_paper_pane_g6

0x60a6,	// (0x00052be6) bg_calc_paper_pane_g7

0x60b7,	// (0x00052bf7) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x0005bcb5) bg_calc_paper_pane_g

0x60c8,	// (0x00052c08) calc_bg_paper_pane_g9

0x60d9,	// (0x00052c19) list_calc_item_pane_ParamLimits

0x60d9,	// (0x00052c19) list_calc_item_pane

0x1fc1,	// (0x0004eb01) list_calc_item_pane_g1

0x6113,	// (0x00052c53) list_calc_item_pane_t1_ParamLimits

0x6113,	// (0x00052c53) list_calc_item_pane_t1

0x6125,	// (0x00052c65) list_calc_item_pane_t2_ParamLimits

0x6125,	// (0x00052c65) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x0005bcc6) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x0005bcc6) list_calc_item_pane_t

0x1fce,	// (0x0004eb0e) cell_calc_pane_g1

0x1fd8,	// (0x0004eb18) grid_highlight_pane_cp02

0x2003,	// (0x0004eb43) bg_calc_display_pane_g1

0x6155,	// (0x00052c95) bg_calc_display_pane_g2

0x1ffa,	// (0x0004eb3a) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x0005bcd0) bg_calc_display_pane_g

0x615f,	// (0x00052c9f) cell_qdial_pane_ParamLimits

0x615f,	// (0x00052c9f) cell_qdial_pane

0x6173,	// (0x00052cb3) cell_qdial_pane_g1_ParamLimits

0x6173,	// (0x00052cb3) cell_qdial_pane_g1

0x6180,	// (0x00052cc0) cell_qdial_pane_g2_ParamLimits

0x6180,	// (0x00052cc0) cell_qdial_pane_g2

0x200c,	// (0x0004eb4c) cell_qdial_pane_g3_ParamLimits

0x200c,	// (0x0004eb4c) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x0005bcd7) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x0005bcd7) cell_qdial_pane_g

0x619e,	// (0x00052cde) cell_qdial_pane_t1_ParamLimits

0x619e,	// (0x00052cde) cell_qdial_pane_t1

0x61b6,	// (0x00052cf6) cell_qdial_pane_t2_ParamLimits

0x61b6,	// (0x00052cf6) cell_qdial_pane_t2

0x61c9,	// (0x00052d09) cell_qdial_pane_t3_ParamLimits

0x61c9,	// (0x00052d09) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x0005bce0) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x0005bce0) cell_qdial_pane_t

0x1c07,	// (0x0004e747) grid_highlight_pane_cp04

0x2018,	// (0x0004eb58) thumbnail_qdial_pane_ParamLimits

0x2018,	// (0x0004eb58) thumbnail_qdial_pane

0x2074,	// (0x0004ebb4) list_help_pane

0x207d,	// (0x0004ebbd) scroll_pane_cp02

0x61dc,	// (0x00052d1c) help_list_pane_t1_ParamLimits

0x61dc,	// (0x00052d1c) help_list_pane_t1

0x621a,	// (0x00052d5a) bg_notes_pane_g2

0x6222,	// (0x00052d62) bg_notes_pane_g3

0x622a,	// (0x00052d6a) notes_bg_pane_g1

0x6232,	// (0x00052d72) notes_bg_pane_g4

0x623a,	// (0x00052d7a) notes_bg_pane_g5

0x6242,	// (0x00052d82) notes_bg_pane_g6

0x624a,	// (0x00052d8a) notes_bg_pane_g7

0x6252,	// (0x00052d92) notes_bg_pane_g8

0x625a,	// (0x00052d9a) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x0005bcfe) notes_bg_pane_g

0x6262,	// (0x00052da2) list_notes_text_pane_ParamLimits

0x6262,	// (0x00052da2) list_notes_text_pane

0x2086,	// (0x0004ebc6) list_notes_text_pane_g1

0x62b6,	// (0x00052df6) list_notes_text_pane_t1

0x1f79,	// (0x0004eab9) listscroll_cale_week_pane

0x62e1,	// (0x00052e21) bg_cale_heading_pane

0x20a0,	// (0x0004ebe0) bg_cale_pane_cp01

0x62fd,	// (0x00052e3d) cale_week_corner_pane

0x630e,	// (0x00052e4e) cale_week_day_heading_pane

0x632a,	// (0x00052e6a) cale_week_scroll_pane_g1

0x6343,	// (0x00052e83) cale_week_scroll_pane_g2

0x6354,	// (0x00052e94) cale_week_scroll_pane_g3

0x6365,	// (0x00052ea5) cale_week_scroll_pane_g4

0x6376,	// (0x00052eb6) cale_week_scroll_pane_g5

0x6387,	// (0x00052ec7) cale_week_scroll_pane_g6

0x6398,	// (0x00052ed8) cale_week_scroll_pane_g7

0x63ab,	// (0x00052eeb) cale_week_scroll_pane_g8

0x63be,	// (0x00052efe) cale_week_scroll_pane_g9

0x63cf,	// (0x00052f0f) cale_week_scroll_pane_g10

0x63e0,	// (0x00052f20) cale_week_scroll_pane_g11

0x63f1,	// (0x00052f31) cale_week_scroll_pane_g12

0x640a,	// (0x00052f4a) cale_week_scroll_pane_g13

0x6423,	// (0x00052f63) cale_week_scroll_pane_g14

0x643c,	// (0x00052f7c) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x0005bd0d) cale_week_scroll_pane_g

0x6455,	// (0x00052f95) cale_week_time_pane

0x6468,	// (0x00052fa8) grid_cale_week_pane

0x6485,	// (0x00052fc5) scroll_pane_cp08

0x649f,	// (0x00052fdf) cell_cale_week_pane_ParamLimits

0x649f,	// (0x00052fdf) cell_cale_week_pane

0x64ef,	// (0x0005302f) cale_week_day_heading_pane_t1

0x6503,	// (0x00053043) cale_week_day_heading_pane_t2

0x6517,	// (0x00053057) cale_week_day_heading_pane_t3

0x652b,	// (0x0005306b) cale_week_day_heading_pane_t4

0x653f,	// (0x0005307f) cale_week_day_heading_pane_t5

0x6553,	// (0x00053093) cale_week_day_heading_pane_t6

0x6567,	// (0x000530a7) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0005bd2c) cale_week_day_heading_pane_t

0x20cb,	// (0x0004ec0b) bg_cale_side_pane

0x657b,	// (0x000530bb) cale_week_time_pane_t1

0x6593,	// (0x000530d3) cale_week_time_pane_t2

0x65ab,	// (0x000530eb) cale_week_time_pane_t3

0x65c3,	// (0x00053103) cale_week_time_pane_t4

0x65db,	// (0x0005311b) cale_week_time_pane_t5

0x65f3,	// (0x00053133) cale_week_time_pane_t6

0x6613,	// (0x00053153) cale_week_time_pane_t7

0x6633,	// (0x00053173) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0005bd3b) cale_week_time_pane_t

0x6653,	// (0x00053193) cell_cale_week_pane_g2

0x6664,	// (0x000531a4) cell_cale_week_pane_g3_ParamLimits

0x6664,	// (0x000531a4) cell_cale_week_pane_g3

0x20d9,	// (0x0004ec19) grid_highlight_pane_cp07

0x20e1,	// (0x0004ec21) listscroll_gms_pane

0x20eb,	// (0x0004ec2b) grid_gms_pane

0x20f4,	// (0x0004ec34) listscroll_gms_pane_g1

0x20fc,	// (0x0004ec3c) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0005bd4c) listscroll_gms_pane_g

0x667c,	// (0x000531bc) scroll_pane_cp010

0x6687,	// (0x000531c7) cell_gms_pane_ParamLimits

0x6687,	// (0x000531c7) cell_gms_pane

0x6699,	// (0x000531d9) cell_gms_pane_g1

0x2104,	// (0x0004ec44) cell_gms_pane_g2

0x2086,	// (0x0004ebc6) cell_gms_pane_g3

0x210c,	// (0x0004ec4c) cell_gms_pane_g4

0x0003,

0xf211,	// (0x0005bd51) cell_gms_pane_g

0x2115,	// (0x0004ec55) grid_highlight_pane_cp09

0x8ab7,	// (0x000555f7) phob_pre_status_pane_g1

0x8abf,	// (0x000555ff) phob_pre_status_pane_g2

0x8ac7,	// (0x00055607) phob_pre_status_pane_g3

0x8acf,	// (0x0005560f) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x0005c140) phob_pre_status_pane_g

0x8adf,	// (0x0005561f) phob_pre_status_pane_t1

0x8aef,	// (0x0005562f) phob_pre_status_pane_t2

0x8aff,	// (0x0005563f) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x0005c14b) phob_pre_status_pane_t

0x1c07,	// (0x0004e747) bg_list_pane_cp05

0x66a9,	// (0x000531e9) grid_vorec_pane

0x66b1,	// (0x000531f1) vorec_t1

0x66bf,	// (0x000531ff) vorec_t2

0x66cd,	// (0x0005320d) vorec_t3

0x66db,	// (0x0005321b) vorec_t4

0x66e9,	// (0x00053229) vorec_t5

0x66f7,	// (0x00053237) vorec_t6

0x0006,

0xf21a,	// (0x0005bd5a) vorec_t

0x6713,	// (0x00053253) wait_bar_pane_cp01

0x211d,	// (0x0004ec5d) cell_vorec_pane_ParamLimits

0x211d,	// (0x0004ec5d) cell_vorec_pane

0x2130,	// (0x0004ec70) cell_vorec_pane_g1

0x1c07,	// (0x0004e747) grid_highlight_pane_cp05

0x672b,	// (0x0005326b) cams_zoom_pane

0x6737,	// (0x00053277) image_vga_pane

0x6746,	// (0x00053286) main_camera_pane_g1

0x6754,	// (0x00053294) main_camera_pane_g2

0x6762,	// (0x000532a2) main_camera_pane_g3

0x676e,	// (0x000532ae) main_camera_pane_g4

0x677a,	// (0x000532ba) main_camera_pane_g5

0x6786,	// (0x000532c6) main_camera_pane_g6

0x6792,	// (0x000532d2) main_camera_pane_g7

0x0007,

0xf229,	// (0x0005bd69) main_camera_pane_g

0x679e,	// (0x000532de) main_camera_pane_t1

0x67b0,	// (0x000532f0) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0005bd7a) main_camera_pane_t

0x67d1,	// (0x00053311) cams_zoom_pane_cp_ParamLimits

0x67d1,	// (0x00053311) cams_zoom_pane_cp

0x67f5,	// (0x00053335) image_cif_pane_ParamLimits

0x67f5,	// (0x00053335) image_cif_pane

0x6813,	// (0x00053353) image_subqcif_pane

0x681b,	// (0x0005335b) main_video_pane_g1_ParamLimits

0x681b,	// (0x0005335b) main_video_pane_g1

0x683b,	// (0x0005337b) main_video_pane_g2_ParamLimits

0x683b,	// (0x0005337b) main_video_pane_g2

0x686d,	// (0x000533ad) main_video_pane_g3_ParamLimits

0x686d,	// (0x000533ad) main_video_pane_g3

0x6898,	// (0x000533d8) main_video_pane_g4_ParamLimits

0x6898,	// (0x000533d8) main_video_pane_g4

0x68c3,	// (0x00053403) main_video_pane_g5_ParamLimits

0x68c3,	// (0x00053403) main_video_pane_g5

0x2146,	// (0x0004ec86) main_video_pane_g6_ParamLimits

0x2146,	// (0x0004ec86) main_video_pane_g6

0x0006,

0xf23f,	// (0x0005bd7f) main_video_pane_g_ParamLimits

0xf23f,	// (0x0005bd7f) main_video_pane_g

0x68e7,	// (0x00053427) main_video_pane_t1_ParamLimits

0x68e7,	// (0x00053427) main_video_pane_t1

0x2160,	// (0x0004eca0) cams_zoom_pane_g1

0x2169,	// (0x0004eca9) cams_zoom_pane_g2

0x2172,	// (0x0004ecb2) cams_zoom_pane_g3

0x217b,	// (0x0004ecbb) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x0005bd8e) cams_zoom_pane_g

0x6931,	// (0x00053471) grid_cams_pane

0x693f,	// (0x0005347f) linegrid_cams_pane

0x694d,	// (0x0005348d) cell_cams_pane_ParamLimits

0x694d,	// (0x0005348d) cell_cams_pane

0x2184,	// (0x0004ecc4) cams_burst_image_pane

0x218c,	// (0x0004eccc) cell_cams_pane_g1

0x1c07,	// (0x0004e747) grid_highlight_pane_cp03

0x1fce,	// (0x0004eb0e) mp_bg_pane_g1

0x1c07,	// (0x0004e747) bg_list_pane_cp03

0x3d50,	// (0x00050890) bg_mp_pane

0x3d58,	// (0x00050898) grid_mp_pane

0x3d60,	// (0x000508a0) media_player_g1

0x3d68,	// (0x000508a8) media_player_t1

0x3d76,	// (0x000508b6) media_player_t2

0x3d84,	// (0x000508c4) media_player_t3

0x3d92,	// (0x000508d2) media_player_t4

0x3da0,	// (0x000508e0) media_player_t5

0x3dae,	// (0x000508ee) media_player_t6

0x3dbc,	// (0x000508fc) media_player_t7

0x0006,

0xf5ea,	// (0x0005c12a) media_player_t

0x3dca,	// (0x0005090a) wait_bar_pane_cp02

0xf5cf,	// (0x0005c10f) main_usb_pane_t

0x8aae,	// (0x000555ee) cell_mp_pane

0x1fce,	// (0x0004eb0e) cell_mp_pane_g1

0x1c07,	// (0x0004e747) grid_highlight_pane_cp06

0x2194,	// (0x0004ecd4) grid_skin_colour_pane

0x219c,	// (0x0004ecdc) list_highlight_pane_cp03

0x69b2,	// (0x000534f2) skin_g1

0x21a4,	// (0x0004ece4) skin_t1

0x21b3,	// (0x0004ecf3) skin_t2

0x0001,

0xf283,	// (0x0005bdc3) skin_t

0x69bc,	// (0x000534fc) cell_skin_colour_pane_ParamLimits

0x69bc,	// (0x000534fc) cell_skin_colour_pane

0x21c1,	// (0x0004ed01) cell_skin_colour_pane_g1

0x6a40,	// (0x00053580) call_video_g1_ParamLimits

0x6a40,	// (0x00053580) call_video_g1

0x6a50,	// (0x00053590) call_video_g2_ParamLimits

0x6a50,	// (0x00053590) call_video_g2

0x0001,

0xf288,	// (0x0005bdc8) call_video_g_ParamLimits

0xf288,	// (0x0005bdc8) call_video_g

0x6aaa,	// (0x000535ea) call_video_uplink_pane_cp1_ParamLimits

0x6aaa,	// (0x000535ea) call_video_uplink_pane_cp1

0x21d3,	// (0x0004ed13) call_video_uplink_pane_cp2

0x6b76,	// (0x000536b6) video_down_crop_pane_ParamLimits

0x6b76,	// (0x000536b6) video_down_crop_pane

0x6c68,	// (0x000537a8) video_down_pane_ParamLimits

0x6c68,	// (0x000537a8) video_down_pane

0x21db,	// (0x0004ed1b) video_down_subqcif_pane_ParamLimits

0x21db,	// (0x0004ed1b) video_down_subqcif_pane

0x21f3,	// (0x0004ed33) video_down_subqcif_pane_cp_ParamLimits

0x21f3,	// (0x0004ed33) video_down_subqcif_pane_cp

0x2219,	// (0x0004ed59) im_reading_pane_ParamLimits

0x2219,	// (0x0004ed59) im_reading_pane

0x6d8a,	// (0x000538ca) im_writing_pane_ParamLimits

0x6d8a,	// (0x000538ca) im_writing_pane

0x6da8,	// (0x000538e8) im_reading_pane_t1

0x2233,	// (0x0004ed73) list_im_pane

0x2244,	// (0x0004ed84) scroll_pane_cp07

0x6e08,	// (0x00053948) im_writing_pane_t1_ParamLimits

0x6e08,	// (0x00053948) im_writing_pane_t1

0x225d,	// (0x0004ed9d) im_writing_pane_t2_ParamLimits

0x225d,	// (0x0004ed9d) im_writing_pane_t2

0x0001,

0xf292,	// (0x0005bdd2) im_writing_pane_t_ParamLimits

0xf292,	// (0x0005bdd2) im_writing_pane_t

0x1c07,	// (0x0004e747) input_focus_pane_cp04

0x1c07,	// (0x0004e747) input_focus_pane_cp05

0x6e1a,	// (0x0005395a) list_im_single_pane_ParamLimits

0x6e1a,	// (0x0005395a) list_im_single_pane

0x6e46,	// (0x00053986) list_single_im_pane_t1

0x8a72,	// (0x000555b2) blid_accuracy_pane

0x8a7a,	// (0x000555ba) blid_compass_pane

0x8a84,	// (0x000555c4) main_location_t1

0x8a92,	// (0x000555d2) main_location_t2

0x8aa0,	// (0x000555e0) main_location_t3

0x0002,

0xf5f9,	// (0x0005c139) main_location_t

0x1c07,	// (0x0004e747) aid_levels_location

0x1fce,	// (0x0004eb0e) blid_accuracy_pane_g1

0x1fce,	// (0x0004eb0e) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x0005be34) blid_accuracy_pane_g

0x22a5,	// (0x0004ede5) wml_content_pane

0x22e3,	// (0x0004ee23) wml_button_pane_ParamLimits

0x22e3,	// (0x0004ee23) wml_button_pane

0x6e55,	// (0x00053995) wml_list_single_large_pane_ParamLimits

0x6e55,	// (0x00053995) wml_list_single_large_pane

0x6e87,	// (0x000539c7) wml_list_single_medium_pane_ParamLimits

0x6e87,	// (0x000539c7) wml_list_single_medium_pane

0x6ec0,	// (0x00053a00) wml_list_single_small_pane_ParamLimits

0x6ec0,	// (0x00053a00) wml_list_single_small_pane

0x22f7,	// (0x0004ee37) wml_selection_box_pane_ParamLimits

0x22f7,	// (0x0004ee37) wml_selection_box_pane

0x230a,	// (0x0004ee4a) wml_list_single_pane_t1

0x2319,	// (0x0004ee59) wml_list_single_medium_pane_t1

0x2328,	// (0x0004ee68) wml_list_single_large_pane_t1

0x2337,	// (0x0004ee77) input_focus_pane_cp02_ParamLimits

0x2337,	// (0x0004ee77) input_focus_pane_cp02

0x234a,	// (0x0004ee8a) wml_selection_box_pane_g1

0x2353,	// (0x0004ee93) wml_selection_box_pane_t1_ParamLimits

0x2353,	// (0x0004ee93) wml_selection_box_pane_t1

0x1e62,	// (0x0004e9a2) bg_wml_button_pane_ParamLimits

0x1e62,	// (0x0004e9a2) bg_wml_button_pane

0x236b,	// (0x0004eeab) wml_button_pane_g1

0x2373,	// (0x0004eeb3) wml_button_pane_t1

0x236b,	// (0x0004eeab) wml_button_bg_pane_g1

0x2383,	// (0x0004eec3) wml_button_bg_pane_g2

0x238b,	// (0x0004eecb) wml_button_bg_pane_g3

0x2393,	// (0x0004eed3) wml_button_bg_pane_g4

0x239b,	// (0x0004eedb) wml_button_bg_pane_g5

0x23a3,	// (0x0004eee3) wml_button_bg_pane_g6

0x23ab,	// (0x0004eeeb) wml_button_bg_pane_g7

0x23b3,	// (0x0004eef3) wml_button_bg_pane_g8

0x23bb,	// (0x0004eefb) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x0005bdd7) wml_button_bg_pane_g

0x6f08,	// (0x00053a48) bg_list_pane_cp02

0x23c3,	// (0x0004ef03) mce_header_pane_ParamLimits

0x23c3,	// (0x0004ef03) mce_header_pane

0x23d9,	// (0x0004ef19) mce_icon_pane

0x23d9,	// (0x0004ef19) mce_image_pane

0x23e2,	// (0x0004ef22) mce_text_pane_ParamLimits

0x23e2,	// (0x0004ef22) mce_text_pane

0x6f12,	// (0x00053a52) scroll_pane_cp03

0x22db,	// (0x0004ee1b) scroll_pane_cp04

0x23f5,	// (0x0004ef35) scroll_pane_cp05_ParamLimits

0x23f5,	// (0x0004ef35) scroll_pane_cp05

0x6f1c,	// (0x00053a5c) mce_header_field_pane_ParamLimits

0x6f1c,	// (0x00053a5c) mce_header_field_pane

0x6f3c,	// (0x00053a7c) mce_header_field_pane_2_ParamLimits

0x6f3c,	// (0x00053a7c) mce_header_field_pane_2

0x6f52,	// (0x00053a92) mce_header_field_pane_3

0x6f5a,	// (0x00053a9a) list_single_mce_message_pane_ParamLimits

0x6f5a,	// (0x00053a9a) list_single_mce_message_pane

0x6f8a,	// (0x00053aca) list_single_mce_smart_pane_ParamLimits

0x6f8a,	// (0x00053aca) list_single_mce_smart_pane

0x2401,	// (0x0004ef41) input_focus_pane_cp03

0x240a,	// (0x0004ef4a) list_header_data_pane

0x6fc5,	// (0x00053b05) mce_header_field_pane_t1

0x6fd5,	// (0x00053b15) list_single_mce_header_pane_ParamLimits

0x6fd5,	// (0x00053b15) list_single_mce_header_pane

0x2412,	// (0x0004ef52) list_single_mce_header_pane_t1

0x2421,	// (0x0004ef61) list_single_mce_message_pane_g1

0x2429,	// (0x0004ef69) list_single_mce_message_pane_t1

0x7027,	// (0x00053b67) bg_cale_heading_pane_cp01_ParamLimits

0x7027,	// (0x00053b67) bg_cale_heading_pane_cp01

0x2437,	// (0x0004ef77) bg_cale_pane_cp02_ParamLimits

0x2437,	// (0x0004ef77) bg_cale_pane_cp02

0x705a,	// (0x00053b9a) cale_month_corner_pane

0x7070,	// (0x00053bb0) cale_month_day_heading_pane_ParamLimits

0x7070,	// (0x00053bb0) cale_month_day_heading_pane

0x70b3,	// (0x00053bf3) cale_month_pane_g1_ParamLimits

0x70b3,	// (0x00053bf3) cale_month_pane_g1

0x70df,	// (0x00053c1f) cale_month_pane_g2_ParamLimits

0x70df,	// (0x00053c1f) cale_month_pane_g2

0x7102,	// (0x00053c42) cale_month_pane_g3_ParamLimits

0x7102,	// (0x00053c42) cale_month_pane_g3

0x713e,	// (0x00053c7e) cale_month_pane_g4_ParamLimits

0x713e,	// (0x00053c7e) cale_month_pane_g4

0x717a,	// (0x00053cba) cale_month_pane_g5_ParamLimits

0x717a,	// (0x00053cba) cale_month_pane_g5

0x71b6,	// (0x00053cf6) cale_month_pane_g6_ParamLimits

0x71b6,	// (0x00053cf6) cale_month_pane_g6

0x71f2,	// (0x00053d32) cale_month_pane_g7_ParamLimits

0x71f2,	// (0x00053d32) cale_month_pane_g7

0x723e,	// (0x00053d7e) cale_month_pane_g8_ParamLimits

0x723e,	// (0x00053d7e) cale_month_pane_g8

0x728a,	// (0x00053dca) cale_month_pane_g9_ParamLimits

0x728a,	// (0x00053dca) cale_month_pane_g9

0x72d0,	// (0x00053e10) cale_month_pane_g10_ParamLimits

0x72d0,	// (0x00053e10) cale_month_pane_g10

0x7316,	// (0x00053e56) cale_month_pane_g11_ParamLimits

0x7316,	// (0x00053e56) cale_month_pane_g11

0x7354,	// (0x00053e94) cale_month_pane_g12_ParamLimits

0x7354,	// (0x00053e94) cale_month_pane_g12

0x7392,	// (0x00053ed2) cale_month_pane_g13_ParamLimits

0x7392,	// (0x00053ed2) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x0005bdea) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x0005bdea) cale_month_pane_g

0x73d0,	// (0x00053f10) cale_month_week_pane

0x73e3,	// (0x00053f23) grid_cale_month_pane_ParamLimits

0x73e3,	// (0x00053f23) grid_cale_month_pane

0x7421,	// (0x00053f61) cale_month_day_heading_pane_t1

0x747f,	// (0x00053fbf) cale_month_day_heading_pane_t2

0x74e4,	// (0x00054024) cale_month_day_heading_pane_t3

0x7549,	// (0x00054089) cale_month_day_heading_pane_t4

0x75ae,	// (0x000540ee) cale_month_day_heading_pane_t5

0x7613,	// (0x00054153) cale_month_day_heading_pane_t6

0x7680,	// (0x000541c0) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x0005be05) cale_month_day_heading_pane_t

0x20cb,	// (0x0004ec0b) bg_cale_side_pane_cp01

0x76f5,	// (0x00054235) cale_month_week_pane_t1

0x770c,	// (0x0005424c) cale_month_week_pane_t2

0x7723,	// (0x00054263) cale_month_week_pane_t3

0x773a,	// (0x0005427a) cale_month_week_pane_t4

0x7751,	// (0x00054291) cale_month_week_pane_t5

0x7770,	// (0x000542b0) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x0005be14) cale_month_week_pane_t

0x778f,	// (0x000542cf) cell_cale_month_pane_ParamLimits

0x778f,	// (0x000542cf) cell_cale_month_pane

0x785d,	// (0x0005439d) cell_cale_month_pane_g1

0x7869,	// (0x000543a9) cell_cale_month_pane_t1_ParamLimits

0x7869,	// (0x000543a9) cell_cale_month_pane_t1

0x20d9,	// (0x0004ec19) grid_highlight_pane_cp08

0x1fce,	// (0x0004eb0e) main_smil_g1

0x7885,	// (0x000543c5) smil_status_pane

0x246c,	// (0x0004efac) smil_text_pane

0x3c68,	// (0x000507a8) bg_popup_call3_rect_pane_g8

0x3c70,	// (0x000507b0) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x0005c0cd) bg_popup_call3_rect_pane_g

0x3f05,	// (0x00050a45) smil_status_volume_pane_g1

0x2476,	// (0x0004efb6) smil_status_pane_t1

0x8e58,	// (0x00055998) volume_smil_pane

0x248d,	// (0x0004efcd) list_smil_text_pane

0x7898,	// (0x000543d8) scroll_pane_cp011

0x78a3,	// (0x000543e3) smil_text_list_pane_t1_ParamLimits

0x78a3,	// (0x000543e3) smil_text_list_pane_t1

0x794e,	// (0x0005448e) aid_volume_smil_ParamLimits

0x794e,	// (0x0005448e) aid_volume_smil

0x1fce,	// (0x0004eb0e) smil_volume_pane_g1

0x1fce,	// (0x0004eb0e) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x0005be34) smil_volume_pane_g

0x1f79,	// (0x0004eab9) listscroll_cale_day_pane

0x2497,	// (0x0004efd7) bg_cale_pane

0x24af,	// (0x0004efef) list_cale_pane

0x24c0,	// (0x0004f000) scroll_pane_cp09

0x24d1,	// (0x0004f011) cale_bg_pane_g1

0x24d9,	// (0x0004f019) cale_bg_pane_g2

0x24e1,	// (0x0004f021) cale_bg_pane_g3

0x24e9,	// (0x0004f029) cale_bg_pane_g4

0x24f1,	// (0x0004f031) cale_bg_pane_g5

0x24f9,	// (0x0004f039) cale_bg_pane_g6

0x2501,	// (0x0004f041) cale_bg_pane_g7

0x2509,	// (0x0004f049) cale_bg_pane_g8

0x2511,	// (0x0004f051) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0005be39) cale_bg_pane_g

0x7970,	// (0x000544b0) list_cale_time_pane_ParamLimits

0x7970,	// (0x000544b0) list_cale_time_pane

0x7991,	// (0x000544d1) list_cale_time_pane_g1_ParamLimits

0x7991,	// (0x000544d1) list_cale_time_pane_g1

0x2519,	// (0x0004f059) list_cale_time_pane_g2_ParamLimits

0x2519,	// (0x0004f059) list_cale_time_pane_g2

0x799d,	// (0x000544dd) list_cale_time_pane_g3_ParamLimits

0x799d,	// (0x000544dd) list_cale_time_pane_g3

0x79b9,	// (0x000544f9) list_cale_time_pane_g4_ParamLimits

0x79b9,	// (0x000544f9) list_cale_time_pane_g4

0x79c7,	// (0x00054507) list_cale_time_pane_g5_ParamLimits

0x79c7,	// (0x00054507) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0005be4c) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0005be4c) list_cale_time_pane_g

0x79d5,	// (0x00054515) list_cale_time_pane_t1_ParamLimits

0x79d5,	// (0x00054515) list_cale_time_pane_t1

0x79fd,	// (0x0005453d) list_cale_time_pane_t2_ParamLimits

0x79fd,	// (0x0005453d) list_cale_time_pane_t2

0x7d57,	// (0x00054897) aid_blid_cardinal_pane

0x7d99,	// (0x000548d9) compass_pane_t4

0x7a25,	// (0x00054565) list_cale_time_pane_t4_ParamLimits

0x7a25,	// (0x00054565) list_cale_time_pane_t4

0x7da7,	// (0x000548e7) compass_pane_t5

0x7db7,	// (0x000548f7) compass_pane_t6

0x7dc5,	// (0x00054905) compass_pane_t7

0x2947,	// (0x0004f487) navi_pane_cc_t1

0x2aaa,	// (0x0004f5ea) aid_phob_thumbnail_center_pane

0x8568,	// (0x000550a8) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0005be59) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0005be59) list_cale_time_pane_t

0x1860,	// (0x0004e3a0) bg_popup_window_pane_cp02_ParamLimits

0x1860,	// (0x0004e3a0) bg_popup_window_pane_cp02

0x2533,	// (0x0004f073) heading_pane_cp01_ParamLimits

0x2533,	// (0x0004f073) heading_pane_cp01

0x253f,	// (0x0004f07f) loc_req_pane_ParamLimits

0x253f,	// (0x0004f07f) loc_req_pane

0x254f,	// (0x0004f08f) loc_type_pane_ParamLimits

0x254f,	// (0x0004f08f) loc_type_pane

0x2561,	// (0x0004f0a1) loc_type_pane_t1_ParamLimits

0x2561,	// (0x0004f0a1) loc_type_pane_t1

0x2573,	// (0x0004f0b3) loc_type_pane_t2_ParamLimits

0x2573,	// (0x0004f0b3) loc_type_pane_t2

0x2585,	// (0x0004f0c5) loc_type_pane_t3_ParamLimits

0x2585,	// (0x0004f0c5) loc_type_pane_t3

0x0002,

0xf320,	// (0x0005be60) loc_type_pane_t_ParamLimits

0xf320,	// (0x0005be60) loc_type_pane_t

0x2597,	// (0x0004f0d7) list_loc_req_pane

0x25a1,	// (0x0004f0e1) scroll_pane_cp012

0x7a4d,	// (0x0005458d) list_single_loc_request_popup_menu_pane_ParamLimits

0x7a4d,	// (0x0005458d) list_single_loc_request_popup_menu_pane

0x25ac,	// (0x0004f0ec) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x25ac,	// (0x0004f0ec) list_single_loc_request_popup_menu_pane_g1

0x25b8,	// (0x0004f0f8) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x25b8,	// (0x0004f0f8) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0005be67) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0005be67) list_single_loc_request_popup_menu_pane_g

0x25c4,	// (0x0004f104) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x25c4,	// (0x0004f104) list_single_loc_request_popup_menu_pane_t1

0x7a5f,	// (0x0005459f) bg_popup_window_pane_cp03_ParamLimits

0x7a5f,	// (0x0005459f) bg_popup_window_pane_cp03

0x7a6d,	// (0x000545ad) heading_loc_req_pane_ParamLimits

0x7a6d,	// (0x000545ad) heading_loc_req_pane

0x7a79,	// (0x000545b9) popup_dyc_status_message_window_g1_ParamLimits

0x7a79,	// (0x000545b9) popup_dyc_status_message_window_g1

0x7a85,	// (0x000545c5) popup_dyc_status_message_window_t1_ParamLimits

0x7a85,	// (0x000545c5) popup_dyc_status_message_window_t1

0x7a97,	// (0x000545d7) popup_dyc_status_message_window_t2_ParamLimits

0x7a97,	// (0x000545d7) popup_dyc_status_message_window_t2

0x7aa9,	// (0x000545e9) popup_dyc_status_message_window_t3_ParamLimits

0x7aa9,	// (0x000545e9) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0005be6c) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0005be6c) popup_dyc_status_message_window_t

0x1c07,	// (0x0004e747) bg_heading_pane_cp01

0x25da,	// (0x0004f11a) heading_loc_req_pane_g1

0x25e2,	// (0x0004f122) heading_loc_req_pane_g2

0x25ea,	// (0x0004f12a) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x0005be73) heading_loc_req_pane_g

0x25f2,	// (0x0004f132) heading_loc_req_pane_t1

0x2601,	// (0x0004f141) bg_popup_sub_pane_cp01_ParamLimits

0x2601,	// (0x0004f141) bg_popup_sub_pane_cp01

0x260f,	// (0x0004f14f) popup_cale_events_window_g1_ParamLimits

0x260f,	// (0x0004f14f) popup_cale_events_window_g1

0x262f,	// (0x0004f16f) popup_cale_events_window_g2_ParamLimits

0x262f,	// (0x0004f16f) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x0005bea7) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x0005bea7) popup_cale_events_window_g

0x264f,	// (0x0004f18f) popup_cale_events_window_t1_ParamLimits

0x264f,	// (0x0004f18f) popup_cale_events_window_t1

0x2661,	// (0x0004f1a1) popup_cale_events_window_t2_ParamLimits

0x2661,	// (0x0004f1a1) popup_cale_events_window_t2

0x269f,	// (0x0004f1df) popup_cale_events_window_t3_ParamLimits

0x269f,	// (0x0004f1df) popup_cale_events_window_t3

0x26d9,	// (0x0004f219) popup_cale_events_window_t4_ParamLimits

0x26d9,	// (0x0004f219) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x0005beac) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x0005beac) popup_cale_events_window_t

0x7b2d,	// (0x0005466d) call_type_pane

0x29e5,	// (0x0004f525) popup_call_status_window_g1

0x7b39,	// (0x00054679) popup_call_status_window_g2

0x7b45,	// (0x00054685) popup_call_status_window_g3

0x0002,

0xf375,	// (0x0005beb5) popup_call_status_window_g

0x270f,	// (0x0004f24f) call_type_pane_g1

0x2718,	// (0x0004f258) call_type_pane_g2

0x0001,

0xf37c,	// (0x0005bebc) call_type_pane_g

0x1c07,	// (0x0004e747) bg_popup_sub_pane_cp02

0x2721,	// (0x0004f261) listscroll_popup_wml_pane

0x2729,	// (0x0004f269) list_wml_pane

0x2733,	// (0x0004f273) scroll_pane_cp013

0x273e,	// (0x0004f27e) list_single_graphic_popup_wml_pane_ParamLimits

0x273e,	// (0x0004f27e) list_single_graphic_popup_wml_pane

0x1fce,	// (0x0004eb0e) list_single_graphic_popup_wml_pane_g1

0x2752,	// (0x0004f292) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x0005bec1) list_single_graphic_popup_wml_pane_g

0x275a,	// (0x0004f29a) list_single_graphic_popup_wml_pane_t1

0x2768,	// (0x0004f2a8) aid_call_pane

0x1e5a,	// (0x0004e99a) popup_clock_analogue_window_g1

0x1e5a,	// (0x0004e99a) popup_clock_analogue_window_g2

0x7b51,	// (0x00054691) popup_clock_analogue_window_g3

0x7b51,	// (0x00054691) popup_clock_analogue_window_g4

0x1fce,	// (0x0004eb0e) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x0005bec6) popup_clock_analogue_window_g

0x7b59,	// (0x00054699) popup_clock_analogue_window_t1

0x7b67,	// (0x000546a7) clock_digital_number_pane_ParamLimits

0x7b67,	// (0x000546a7) clock_digital_number_pane

0x7b73,	// (0x000546b3) clock_digital_number_pane_cp02_ParamLimits

0x7b73,	// (0x000546b3) clock_digital_number_pane_cp02

0x7b7f,	// (0x000546bf) clock_digital_number_pane_cp03_ParamLimits

0x7b7f,	// (0x000546bf) clock_digital_number_pane_cp03

0x7b8b,	// (0x000546cb) clock_digital_number_pane_cp04_ParamLimits

0x7b8b,	// (0x000546cb) clock_digital_number_pane_cp04

0x7b97,	// (0x000546d7) clock_digital_separator_pane_ParamLimits

0x7b97,	// (0x000546d7) clock_digital_separator_pane

0x7ba3,	// (0x000546e3) popup_clock_digital_window_t1

0x1fce,	// (0x0004eb0e) clock_digital_number_pane_g1

0x1fce,	// (0x0004eb0e) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x0005be34) clock_digital_number_pane_g

0x1fce,	// (0x0004eb0e) clock_digital_separator_pane_g1

0x1fce,	// (0x0004eb0e) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x0005be34) clock_digital_separator_pane_g

0x1c07,	// (0x0004e747) bg_popup_window_pane_cp04

0x2778,	// (0x0004f2b8) heading_pane_cp03

0x2780,	// (0x0004f2c0) listscroll_popup_gms_pane

0x2788,	// (0x0004f2c8) grid_large_graphic_popup_pane

0x2792,	// (0x0004f2d2) listscroll_popup_gms_pane_g1

0x279a,	// (0x0004f2da) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x0005bed1) listscroll_popup_gms_pane_g

0x22db,	// (0x0004ee1b) scroll_pane_cp014

0x27a2,	// (0x0004f2e2) cell_large_graphic_popup_pane_ParamLimits

0x27a2,	// (0x0004f2e2) cell_large_graphic_popup_pane

0x27ba,	// (0x0004f2fa) cell_large_graphic_popup_pane_g1_ParamLimits

0x27ba,	// (0x0004f2fa) cell_large_graphic_popup_pane_g1

0x27c6,	// (0x0004f306) cell_large_graphic_popup_pane_g2_ParamLimits

0x27c6,	// (0x0004f306) cell_large_graphic_popup_pane_g2

0x27d2,	// (0x0004f312) cell_large_graphic_popup_pane_g3_ParamLimits

0x27d2,	// (0x0004f312) cell_large_graphic_popup_pane_g3

0x27df,	// (0x0004f31f) cell_large_graphic_popup_pane_g4_ParamLimits

0x27df,	// (0x0004f31f) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x0005bed6) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x0005bed6) cell_large_graphic_popup_pane_g

0x27ef,	// (0x0004f32f) grid_highlight_pane_cp010

0x1fce,	// (0x0004eb0e) bg_popup_call_pane_g1

0x27f9,	// (0x0004f339) list_single_graphic_popup_conf_pane_ParamLimits

0x27f9,	// (0x0004f339) list_single_graphic_popup_conf_pane

0x280b,	// (0x0004f34b) list_highlight_pane_cp01

0x2814,	// (0x0004f354) list_single_graphic_popup_conf_pane_g1

0x281c,	// (0x0004f35c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x0005bedf) list_single_graphic_popup_conf_pane_g

0x2824,	// (0x0004f364) list_single_graphic_popup_conf_pane_t1

0x2832,	// (0x0004f372) linegrid_cams_pane_g1

0x7bc0,	// (0x00054700) linegrid_cams_pane_g2

0x2086,	// (0x0004ebc6) linegrid_cams_pane_g3

0x283b,	// (0x0004f37b) linegrid_cams_pane_g4

0x7bc9,	// (0x00054709) linegrid_cams_pane_g5

0x7bd2,	// (0x00054712) linegrid_cams_pane_g6

0x210c,	// (0x0004ec4c) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x0005bee4) linegrid_cams_pane_g

0x2844,	// (0x0004f384) popup_clock_analogue_window

0x2844,	// (0x0004f384) popup_clock_digital_window

0x1c07,	// (0x0004e747) popup_phob_thumbnail_window

0x1fce,	// (0x0004eb0e) call_video_uplink_pane_g1

0x284d,	// (0x0004f38d) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x0005bef3) call_video_uplink_pane_g

0x20d9,	// (0x0004ec19) video_uplink_pane

0x2855,	// (0x0004f395) mce_image_pane_g1

0x7bdb,	// (0x0005471b) mce_image_pane_g2

0x7be3,	// (0x00054723) mce_image_pane_g3

0x7beb,	// (0x0005472b) mce_image_pane_g4

0x7bf3,	// (0x00054733) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x0005bef8) mce_image_pane_g

0x285f,	// (0x0004f39f) control_top_pane_stacon_cp01_ParamLimits

0x285f,	// (0x0004f39f) control_top_pane_stacon_cp01

0x2873,	// (0x0004f3b3) uni_indicator_pane_stacon_cp01_ParamLimits

0x2873,	// (0x0004f3b3) uni_indicator_pane_stacon_cp01

0x2884,	// (0x0004f3c4) bg_popup_sub_pane_cp03

0x7bfb,	// (0x0005473b) chi_dic_find_pane

0x7c03,	// (0x00054743) listscroll_chi_dic_pane

0x7c0c,	// (0x0005474c) main_pane_chidic_g1

0x7c1f,	// (0x0005475f) chi_dic_find_pane_t1

0x288e,	// (0x0004f3ce) find_chidic_pane

0x2897,	// (0x0004f3d7) chi_dic_list_pane_ParamLimits

0x2897,	// (0x0004f3d7) chi_dic_list_pane

0x28a8,	// (0x0004f3e8) scroll_pane_cp020

0x7c2d,	// (0x0005476d) find_chidic_pane_t1

0x1c07,	// (0x0004e747) input_focus_pane_cp06

0x7c3c,	// (0x0005477c) list_chi_dic_pane_ParamLimits

0x7c3c,	// (0x0005477c) list_chi_dic_pane

0x28b0,	// (0x0004f3f0) list_chi_dic_pane_t1_ParamLimits

0x28b0,	// (0x0004f3f0) list_chi_dic_pane_t1

0x1c07,	// (0x0004e747) list_highlight_pane_cp020

0x28c3,	// (0x0004f403) bg_cale_heading_pane_g1

0x7c5d,	// (0x0005479d) bg_cale_heading_pane_g2

0x7c65,	// (0x000547a5) bg_cale_heading_pane_g3

0x7c6d,	// (0x000547ad) bg_cale_heading_pane_g4

0x7c77,	// (0x000547b7) bg_cale_heading_pane_g5

0x7c81,	// (0x000547c1) bg_cale_heading_pane_g6

0x7c89,	// (0x000547c9) bg_cale_heading_pane_g7

0x7c91,	// (0x000547d1) bg_cale_heading_pane_g8

0x7c9b,	// (0x000547db) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x0005bf03) bg_cale_heading_pane_g

0x28c3,	// (0x0004f403) bg_cale_side_pane_g1

0x7ca5,	// (0x000547e5) bg_cale_side_pane_g2

0x7caf,	// (0x000547ef) bg_cale_side_pane_g3

0x7cb9,	// (0x000547f9) bg_cale_side_pane_g4

0x7cc3,	// (0x00054803) bg_cale_side_pane_g5

0x7ccd,	// (0x0005480d) bg_cale_side_pane_g6

0x7cd7,	// (0x00054817) bg_cale_side_pane_g7

0x7ce1,	// (0x00054821) bg_cale_side_pane_g8

0x7ce9,	// (0x00054829) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x0005bf16) bg_cale_side_pane_g

0x7cf1,	// (0x00054831) popup_call_status_window_ParamLimits

0x7cf1,	// (0x00054831) popup_call_status_window

0x28cb,	// (0x0004f40b) stacon_top_pane

0x28d3,	// (0x0004f413) status_pane_ParamLimits

0x28d3,	// (0x0004f413) status_pane

0x28e8,	// (0x0004f428) status_small_pane

0x28f0,	// (0x0004f430) control_pane

0x1c07,	// (0x0004e747) stacon_bottom_pane

0x28f8,	// (0x0004f438) list_single_mce_smart_pane_t1_ParamLimits

0x28f8,	// (0x0004f438) list_single_mce_smart_pane_t1

0x290b,	// (0x0004f44b) list_single_mce_smart_pane_t2_ParamLimits

0x290b,	// (0x0004f44b) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0005bf29) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0005bf29) list_single_mce_smart_pane_t

0x7cfd,	// (0x0005483d) compass_pane

0x7d09,	// (0x00054849) main_location2_pane_t1

0x7d1d,	// (0x0005485d) main_location2_pane_t2

0x7d31,	// (0x00054871) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0005bf2e) main_location2_pane_t

0x292a,	// (0x0004f46a) compass_pane_g1_ParamLimits

0x292a,	// (0x0004f46a) compass_pane_g1

0x7d7b,	// (0x000548bb) compass_pane_t1

0x7d8a,	// (0x000548ca) compass_pane_t2

0x0005,

0xf3f7,	// (0x0005bf37) compass_pane_t

0x7dd5,	// (0x00054915) text_secondary_cp61

0x293e,	// (0x0004f47e) navi_pane_cams_g5

0x2961,	// (0x0004f4a1) navi_pane_im_t1

0x296f,	// (0x0004f4af) navi_pane_mp_g1_ParamLimits

0x296f,	// (0x0004f4af) navi_pane_mp_g1

0x2983,	// (0x0004f4c3) navi_pane_mp_g2_ParamLimits

0x2983,	// (0x0004f4c3) navi_pane_mp_g2

0x298f,	// (0x0004f4cf) navi_pane_mp_g3_ParamLimits

0x298f,	// (0x0004f4cf) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0005bf4b) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0005bf4b) navi_pane_mp_g

0x299b,	// (0x0004f4db) navi_pane_mp_t1

0x29a9,	// (0x0004f4e9) navi_pane_mp_t2

0x0002,

0xf412,	// (0x0005bf52) navi_pane_mp_t

0x29f3,	// (0x0004f533) navi_pane_vt_g1

0x299b,	// (0x0004f4db) navi_pane_vt_t1

0x29fb,	// (0x0004f53b) navi_slider_pane

0x2a03,	// (0x0004f543) zooming_pane

0x2a0b,	// (0x0004f54b) navi_slider_pane_g1

0x7f02,	// (0x00054a42) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0005bf59) navi_slider_pane_g

0x2a2f,	// (0x0004f56f) aid_levels_zoom

0x2a37,	// (0x0004f577) zooming_pane_g1

0x2a3f,	// (0x0004f57f) zooming_pane_g2

0x2a3f,	// (0x0004f57f) zooming_pane_g3

0x0002,

0xf428,	// (0x0005bf68) zooming_pane_g

0x2a47,	// (0x0004f587) level_10_zoom

0x2a50,	// (0x0004f590) level_11_zoom

0x2a59,	// (0x0004f599) level_1_zoom

0x2a62,	// (0x0004f5a2) level_2_zoom

0x2a6b,	// (0x0004f5ab) level_3_zoom

0x2a74,	// (0x0004f5b4) level_4_zoom

0x2a7d,	// (0x0004f5bd) level_5_zoom

0x2a86,	// (0x0004f5c6) level_6_zoom

0x2a8f,	// (0x0004f5cf) level_7_zoom

0x2a98,	// (0x0004f5d8) level_8_zoom

0x2aa1,	// (0x0004f5e1) level_9_zoom

0x2ab2,	// (0x0004f5f2) popup_phob_thumbnail_window_g1

0x2aba,	// (0x0004f5fa) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x0005bf6f) popup_phob_thumbnail_window_g

0x3dd2,	// (0x00050912) level_1_location

0x3dda,	// (0x0005091a) level_2_location

0x3de2,	// (0x00050922) level_3_location

0x3dea,	// (0x0005092a) level_4_location

0x2a03,	// (0x0004f543) level_5_location

0x7f14,	// (0x00054a54) mce_icon_pane_g1

0x7f1c,	// (0x00054a5c) mce_icon_pane_g2

0x0001,

0xf434,	// (0x0005bf74) mce_icon_pane_g

0x7f24,	// (0x00054a64) main_mup_pane_g1_ParamLimits

0x7f24,	// (0x00054a64) main_mup_pane_g1

0x7f3c,	// (0x00054a7c) main_mup_pane_g2_ParamLimits

0x7f3c,	// (0x00054a7c) main_mup_pane_g2

0x7f58,	// (0x00054a98) main_mup_pane_g3_ParamLimits

0x7f58,	// (0x00054a98) main_mup_pane_g3

0x7f74,	// (0x00054ab4) main_mup_pane_g4_ParamLimits

0x7f74,	// (0x00054ab4) main_mup_pane_g4

0x7f90,	// (0x00054ad0) main_mup_pane_g5_ParamLimits

0x7f90,	// (0x00054ad0) main_mup_pane_g5

0x7fb1,	// (0x00054af1) main_mup_pane_g6_ParamLimits

0x7fb1,	// (0x00054af1) main_mup_pane_g6

0x7fcd,	// (0x00054b0d) main_mup_pane_g7_ParamLimits

0x7fcd,	// (0x00054b0d) main_mup_pane_g7

0x7fe9,	// (0x00054b29) main_mup_pane_g8_ParamLimits

0x7fe9,	// (0x00054b29) main_mup_pane_g8

0x8005,	// (0x00054b45) main_mup_pane_g9_ParamLimits

0x8005,	// (0x00054b45) main_mup_pane_g9

0x8024,	// (0x00054b64) main_mup_pane_g10_ParamLimits

0x8024,	// (0x00054b64) main_mup_pane_g10

0x8043,	// (0x00054b83) main_mup_pane_g11_ParamLimits

0x8043,	// (0x00054b83) main_mup_pane_g11

0x805b,	// (0x00054b9b) main_mup_pane_g12_ParamLimits

0x805b,	// (0x00054b9b) main_mup_pane_g12

0x8069,	// (0x00054ba9) main_mup_pane_g13_ParamLimits

0x8069,	// (0x00054ba9) main_mup_pane_g13

0x000c,

0xf439,	// (0x0005bf79) main_mup_pane_g_ParamLimits

0xf439,	// (0x0005bf79) main_mup_pane_g

0x807f,	// (0x00054bbf) main_mup_pane_t1_ParamLimits

0x807f,	// (0x00054bbf) main_mup_pane_t1

0x809c,	// (0x00054bdc) main_mup_pane_t2_ParamLimits

0x809c,	// (0x00054bdc) main_mup_pane_t2

0x80b6,	// (0x00054bf6) main_mup_pane_t3_ParamLimits

0x80b6,	// (0x00054bf6) main_mup_pane_t3

0x80d0,	// (0x00054c10) main_mup_pane_t4_ParamLimits

0x80d0,	// (0x00054c10) main_mup_pane_t4

0x80e2,	// (0x00054c22) main_mup_pane_t5_ParamLimits

0x80e2,	// (0x00054c22) main_mup_pane_t5

0x80f4,	// (0x00054c34) main_mup_pane_t6_ParamLimits

0x80f4,	// (0x00054c34) main_mup_pane_t6

0x0005,

0xf454,	// (0x0005bf94) main_mup_pane_t_ParamLimits

0xf454,	// (0x0005bf94) main_mup_pane_t

0x810a,	// (0x00054c4a) mup_progress_pane_ParamLimits

0x810a,	// (0x00054c4a) mup_progress_pane

0x8116,	// (0x00054c56) mup_visualizer_pane_ParamLimits

0x8116,	// (0x00054c56) mup_visualizer_pane

0x8154,	// (0x00054c94) mup_volume_pane_ParamLimits

0x8154,	// (0x00054c94) mup_volume_pane

0x29e5,	// (0x0004f525) mup_visualizer_pane_g1_ParamLimits

0x29e5,	// (0x0004f525) mup_visualizer_pane_g1

0x29e5,	// (0x0004f525) mup_visualizer_pane_g2_ParamLimits

0x29e5,	// (0x0004f525) mup_visualizer_pane_g2

0x292a,	// (0x0004f46a) mup_visualizer_pane_g3_ParamLimits

0x292a,	// (0x0004f46a) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x0005bfa1) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x0005bfa1) mup_visualizer_pane_g

0x1fce,	// (0x0004eb0e) mup_volume_pane_g1

0x2aca,	// (0x0004f60a) mup_volume_pane_g2

0x0001,

0xf468,	// (0x0005bfa8) mup_volume_pane_g

0x1fce,	// (0x0004eb0e) mup_progress_pane_g1

0x2ad3,	// (0x0004f613) mup_progress_pane_g2

0x2adc,	// (0x0004f61c) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x0005bfad) mup_progress_pane_g

0x1c07,	// (0x0004e747) bg_popup_window_pane_cp05

0x2ae5,	// (0x0004f625) heading_pane_cp02_ParamLimits

0x2ae5,	// (0x0004f625) heading_pane_cp02

0x2aff,	// (0x0004f63f) list_popup_blid_pane

0x2b07,	// (0x0004f647) list_blid_sat_info_pane_ParamLimits

0x2b07,	// (0x0004f647) list_blid_sat_info_pane

0x2b1a,	// (0x0004f65a) list_blid_sat_info_pane_g1

0x2b22,	// (0x0004f662) list_blid_sat_info_pane_t1

0x825f,	// (0x00054d9f) mup_equalizer_pane_ParamLimits

0x825f,	// (0x00054d9f) mup_equalizer_pane

0x8280,	// (0x00054dc0) mup_equalizer_pane_cp1_ParamLimits

0x8280,	// (0x00054dc0) mup_equalizer_pane_cp1

0x82a1,	// (0x00054de1) mup_equalizer_pane_cp2_ParamLimits

0x82a1,	// (0x00054de1) mup_equalizer_pane_cp2

0x82c2,	// (0x00054e02) mup_equalizer_pane_cp3_ParamLimits

0x82c2,	// (0x00054e02) mup_equalizer_pane_cp3

0x82e3,	// (0x00054e23) mup_equalizer_pane_cp4_ParamLimits

0x82e3,	// (0x00054e23) mup_equalizer_pane_cp4

0x8304,	// (0x00054e44) mup_equalizer_pane_cp5

0x831a,	// (0x00054e5a) mup_equalizer_pane_cp6

0x8332,	// (0x00054e72) mup_equalizer_pane_cp7

0x3cf0,	// (0x00050830) bg_popup_call_poc_act_pane_g9

0x3cf8,	// (0x00050838) bg_popup_call_poc_act_pane_g10

0x3d00,	// (0x00050840) bg_popup_call_poc_act_pane_g11

0x000a,

0x1e62,	// (0x0004e9a2) mup_scale_pane

0x1fce,	// (0x0004eb0e) mup_scale_pane_g1

0x2b30,	// (0x0004f670) mup_scale_pane_g2

0x0006,

0xf489,	// (0x0005bfc9) mup_scale_pane_g

0x2b54,	// (0x0004f694) msg_data_pane

0x2b5c,	// (0x0004f69c) scroll_pane_cp017

0x835c,	// (0x00054e9c) bg_list_pane_cp04_ParamLimits

0x835c,	// (0x00054e9c) bg_list_pane_cp04

0x2b64,	// (0x0004f6a4) msg_data_pane_g1

0x837c,	// (0x00054ebc) msg_data_pane_g2

0x7be3,	// (0x00054723) msg_data_pane_g3

0x8384,	// (0x00054ec4) msg_data_pane_g4

0x838c,	// (0x00054ecc) msg_data_pane_g5

0x8394,	// (0x00054ed4) msg_data_pane_g6

0x839c,	// (0x00054edc) msg_data_pane_g7

0x0006,

0xf498,	// (0x0005bfd8) msg_data_pane_g

0x83a4,	// (0x00054ee4) msg_text_pane_ParamLimits

0x83a4,	// (0x00054ee4) msg_text_pane

0x83f7,	// (0x00054f37) qrid_highlight_pane_cp011_ParamLimits

0x83f7,	// (0x00054f37) qrid_highlight_pane_cp011

0x1c07,	// (0x0004e747) msg_body_pane

0x1c07,	// (0x0004e747) msg_header_pane

0x2b75,	// (0x0004f6b5) input_focus_pane_cp07

0x8421,	// (0x00054f61) msg_header_pane_t1_ParamLimits

0x8421,	// (0x00054f61) msg_header_pane_t1

0x0503,	// (0x0004d043) msg_header_pane_t2_ParamLimits

0x0503,	// (0x0004d043) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x0005bfec) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x0005bfec) msg_header_pane_t

0x2b8a,	// (0x0004f6ca) msg_body_pane_g1

0x8435,	// (0x00054f75) msg_body_pane_t1_ParamLimits

0x8435,	// (0x00054f75) msg_body_pane_t1

0x0515,	// (0x0004d055) msg_body_pane_t2_ParamLimits

0x0515,	// (0x0004d055) msg_body_pane_t2

0x0527,	// (0x0004d067) msg_body_pane_t3_ParamLimits

0x0527,	// (0x0004d067) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x0005bff1) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x0005bff1) msg_body_pane_t

0x84b8,	// (0x00054ff8) main_viewer_pane_g1_ParamLimits

0x84b8,	// (0x00054ff8) main_viewer_pane_g1

0x84c4,	// (0x00055004) main_viewer_pane_g2_ParamLimits

0x84c4,	// (0x00055004) main_viewer_pane_g2

0x84d0,	// (0x00055010) main_viewer_pane_g3_ParamLimits

0x84d0,	// (0x00055010) main_viewer_pane_g3

0x84e1,	// (0x00055021) main_viewer_pane_g4_ParamLimits

0x84e1,	// (0x00055021) main_viewer_pane_g4

0x84f2,	// (0x00055032) main_viewer_pane_g5_ParamLimits

0x84f2,	// (0x00055032) main_viewer_pane_g5

0x84f2,	// (0x00055032) main_viewer_pane_g7_ParamLimits

0x84f2,	// (0x00055032) main_viewer_pane_g7

0x8504,	// (0x00055044) main_viewer_pane_g8_ParamLimits

0x8504,	// (0x00055044) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x0005c001) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x0005c001) main_viewer_pane_g

0x2b92,	// (0x0004f6d2) viewer_content_pane_ParamLimits

0x2b92,	// (0x0004f6d2) viewer_content_pane

0x853c,	// (0x0005507c) main_postcard_pane_g1_ParamLimits

0x853c,	// (0x0005507c) main_postcard_pane_g1

0x854a,	// (0x0005508a) main_postcard_pane_g2_ParamLimits

0x854a,	// (0x0005508a) main_postcard_pane_g2

0x8558,	// (0x00055098) main_postcard_pane_g3_ParamLimits

0x8558,	// (0x00055098) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x0005c012) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x0005c012) main_postcard_pane_g

0x8568,	// (0x000550a8) main_postcard_pane_g4

0x3ef2,	// (0x00050a32) smil_status_volume_pane_g2

0x8594,	// (0x000550d4) postcard_pane_ParamLimits

0x8594,	// (0x000550d4) postcard_pane

0x29e5,	// (0x0004f525) postcard_pane_g1_ParamLimits

0x29e5,	// (0x0004f525) postcard_pane_g1

0x85c6,	// (0x00055106) postcard_pane_g2_ParamLimits

0x85c6,	// (0x00055106) postcard_pane_g2

0x85d2,	// (0x00055112) postcard_pane_g3_ParamLimits

0x85d2,	// (0x00055112) postcard_pane_g3

0x2bae,	// (0x0004f6ee) postcard_pane_g4_ParamLimits

0x2bae,	// (0x0004f6ee) postcard_pane_g4

0x85de,	// (0x0005511e) postcard_pane_g5_ParamLimits

0x85de,	// (0x0005511e) postcard_pane_g5

0x85ea,	// (0x0005512a) postcard_pane_g6_ParamLimits

0x85ea,	// (0x0005512a) postcard_pane_g6

0x2ba0,	// (0x0004f6e0) postcard_pane_g7_ParamLimits

0x2ba0,	// (0x0004f6e0) postcard_pane_g7

0x0006,

0xf4df,	// (0x0005c01f) postcard_pane_g_ParamLimits

0xf4df,	// (0x0005c01f) postcard_pane_g

0x85f6,	// (0x00055136) main_mp2_pane_g1_ParamLimits

0x85f6,	// (0x00055136) main_mp2_pane_g1

0x8602,	// (0x00055142) main_mp2_pane_g2_ParamLimits

0x8602,	// (0x00055142) main_mp2_pane_g2

0x860e,	// (0x0005514e) main_mp2_pane_g3_ParamLimits

0x860e,	// (0x0005514e) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x0005c02e) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x0005c02e) main_mp2_pane_g

0x861a,	// (0x0005515a) main_mp2_pane_t1_ParamLimits

0x861a,	// (0x0005515a) main_mp2_pane_t1

0x8631,	// (0x00055171) main_mp2_pane_t2_ParamLimits

0x8631,	// (0x00055171) main_mp2_pane_t2

0x8643,	// (0x00055183) main_mp2_pane_t3_ParamLimits

0x8643,	// (0x00055183) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0005c035) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0005c035) main_mp2_pane_t

0x2bbc,	// (0x0004f6fc) pec_content_pane_ParamLimits

0x2bbc,	// (0x0004f6fc) pec_content_pane

0x22db,	// (0x0004ee1b) scroll_pane_cp015

0x2bce,	// (0x0004f70e) pec_attribute_pane_ParamLimits

0x2bce,	// (0x0004f70e) pec_attribute_pane

0x8655,	// (0x00055195) pec_content_pane_g1_ParamLimits

0x8655,	// (0x00055195) pec_content_pane_g1

0x2bde,	// (0x0004f71e) pec_content_pane_t1_ParamLimits

0x2bde,	// (0x0004f71e) pec_content_pane_t1

0x2bf0,	// (0x0004f730) pec_content_pane_t2_ParamLimits

0x2bf0,	// (0x0004f730) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x0005c03c) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x0005c03c) pec_content_pane_t

0x8661,	// (0x000551a1) list_single_graphic_pane_cp01_ParamLimits

0x8661,	// (0x000551a1) list_single_graphic_pane_cp01

0x1e62,	// (0x0004e9a2) bg_popup_sub_pane_cp04

0x2c02,	// (0x0004f742) popup_mup_playback_window_g1

0x2c0e,	// (0x0004f74e) popup_mup_playback_window_t1

0x2c23,	// (0x0004f763) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x0005c041) popup_mup_playback_window_t

0x2c5a,	// (0x0004f79a) main_image_pane_g1_ParamLimits

0x2c5a,	// (0x0004f79a) main_image_pane_g1

0x2c9d,	// (0x0004f7dd) scroll_pane_cp018_ParamLimits

0x2c9d,	// (0x0004f7dd) scroll_pane_cp018

0x2cb5,	// (0x0004f7f5) scroll_pane_cp016_ParamLimits

0x2cb5,	// (0x0004f7f5) scroll_pane_cp016

0x8705,	// (0x00055245) smil2_image_pane_ParamLimits

0x8705,	// (0x00055245) smil2_image_pane

0x8739,	// (0x00055279) smil2_root_pane_ParamLimits

0x8739,	// (0x00055279) smil2_root_pane

0x8765,	// (0x000552a5) smil2_text_pane_ParamLimits

0x8765,	// (0x000552a5) smil2_text_pane

0x1c07,	// (0x0004e747) bg_list_pane_cp06

0x2cf1,	// (0x0004f831) grid_radio_pane

0x1c07,	// (0x0004e747) bg_popup_window_pane_cp06

0x2cf9,	// (0x0004f839) main_fmradio_pane_t1

0x2778,	// (0x0004f2b8) heading_pane_cp04

0x2d07,	// (0x0004f847) main_fmradio_pane_t2

0x3d08,	// (0x00050848) popup_cale_lunar_info_window_g1

0x2d15,	// (0x0004f855) main_fmradio_pane_t3

0x3d10,	// (0x00050850) popup_cale_lunar_info_window_g2

0x2d23,	// (0x0004f863) main_fmradio_pane_t4

0x0001,

0x2d31,	// (0x0004f871) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x0005c11c) popup_cale_lunar_info_window_g

0xf516,	// (0x0005c056) main_fmradio_pane_t

0x2d3f,	// (0x0004f87f) wait_bar_pane_cp03

0x2d47,	// (0x0004f887) cell_fmradio_pane_ParamLimits

0x2d47,	// (0x0004f887) cell_fmradio_pane

0x2ba0,	// (0x0004f6e0) cell_fmradio_pane_g1_ParamLimits

0x2ba0,	// (0x0004f6e0) cell_fmradio_pane_g1

0x1c07,	// (0x0004e747) grid_highlight_pane_cp011

0x2d5a,	// (0x0004f89a) poc_content_pane_ParamLimits

0x2d5a,	// (0x0004f89a) poc_content_pane

0x2d6c,	// (0x0004f8ac) scroll_pane_cp019

0x87a5,	// (0x000552e5) popup_call_poc_act_window_ParamLimits

0x87a5,	// (0x000552e5) popup_call_poc_act_window

0x87b2,	// (0x000552f2) popup_call_poc_inact_window_ParamLimits

0x87b2,	// (0x000552f2) popup_call_poc_inact_window

0xf5b3,	// (0x0005c0f3) bg_popup_call_poc_act_pane_g

0x3c78,	// (0x000507b8) bg_popup_call_poc_inact_pane_g1

0x3c80,	// (0x000507c0) bg_popup_call_poc_inact_pane_g2

0x2d74,	// (0x0004f8b4) popup_call_poc_act_window_g2

0x3c88,	// (0x000507c8) bg_popup_call_poc_inact_pane_g3

0x3c90,	// (0x000507d0) bg_popup_call_poc_inact_pane_g4

0x3c98,	// (0x000507d8) bg_popup_call_poc_inact_pane_g5

0x2d7c,	// (0x0004f8bc) popup_call_poc_act_window_t1_ParamLimits

0x2d7c,	// (0x0004f8bc) popup_call_poc_act_window_t1

0x2da4,	// (0x0004f8e4) popup_call_poc_act_window_t2_ParamLimits

0x2da4,	// (0x0004f8e4) popup_call_poc_act_window_t2

0x2dcc,	// (0x0004f90c) popup_call_poc_act_window_t3_ParamLimits

0x2dcc,	// (0x0004f90c) popup_call_poc_act_window_t3

0x2df4,	// (0x0004f934) popup_call_poc_act_window_t4_ParamLimits

0x2df4,	// (0x0004f934) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x0005c061) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x0005c061) popup_call_poc_act_window_t

0x3ca0,	// (0x000507e0) bg_popup_call_poc_inact_pane_g6

0x3ca8,	// (0x000507e8) bg_popup_call_poc_inact_pane_g7

0x3cb0,	// (0x000507f0) bg_popup_call_poc_inact_pane_g8

0x2e06,	// (0x0004f946) popup_call_poc_inact_window_g2

0x3cb8,	// (0x000507f8) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x0005c0e0) bg_popup_call_poc_inact_pane_g

0x2e0e,	// (0x0004f94e) popup_call_poc_inact_window_t1_ParamLimits

0x2e0e,	// (0x0004f94e) popup_call_poc_inact_window_t1

0x2e23,	// (0x0004f963) popup_call_poc_inact_window_t2_ParamLimits

0x2e23,	// (0x0004f963) popup_call_poc_inact_window_t2

0x2e38,	// (0x0004f978) popup_call_poc_inact_window_t3_ParamLimits

0x2e38,	// (0x0004f978) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0005c06a) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0005c06a) popup_call_poc_inact_window_t

0x3e78,	// (0x000509b8) context_pane_ParamLimits

0x8d99,	// (0x000558d9) signal_pane_ParamLimits

0x2a03,	// (0x0004f543) main_call2_pane

0x3e66,	// (0x000509a6) popup_phob_thumbnail2_window_ParamLimits

0x3e66,	// (0x000509a6) popup_phob_thumbnail2_window

0x8466,	// (0x00054fa6) aid_hotspot_pointer_arrow_pane

0x846e,	// (0x00054fae) aid_hotspot_pointer_hand_pane

0x8ad7,	// (0x00055617) phob_pre_status_pane_g5

0x672b,	// (0x0005326b) cams_zoom_pane_ParamLimits

0x6737,	// (0x00053277) image_vga_pane_ParamLimits

0x6746,	// (0x00053286) main_camera_pane_g1_ParamLimits

0x6754,	// (0x00053294) main_camera_pane_g2_ParamLimits

0x6762,	// (0x000532a2) main_camera_pane_g3_ParamLimits

0x676e,	// (0x000532ae) main_camera_pane_g4_ParamLimits

0x677a,	// (0x000532ba) main_camera_pane_g5_ParamLimits

0x6786,	// (0x000532c6) main_camera_pane_g6_ParamLimits

0x6792,	// (0x000532d2) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0005bd69) main_camera_pane_g_ParamLimits

0x679e,	// (0x000532de) main_camera_pane_t1_ParamLimits

0x67b0,	// (0x000532f0) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0005bd7a) main_camera_pane_t_ParamLimits

0x1e62,	// (0x0004e9a2) bg_popup_preview_window_pane_cp01_ParamLimits

0x1e62,	// (0x0004e9a2) bg_popup_preview_window_pane_cp01

0x2e4d,	// (0x0004f98d) popup_phob_thumbnail2_window_g1_ParamLimits

0x2e4d,	// (0x0004f98d) popup_phob_thumbnail2_window_g1

0x1c07,	// (0x0004e747) call2_cli_visual_pane

0x87ce,	// (0x0005530e) popup_call2_audio_conf_window_ParamLimits

0x87ce,	// (0x0005530e) popup_call2_audio_conf_window

0x87e3,	// (0x00055323) popup_call2_audio_first_window_ParamLimits

0x87e3,	// (0x00055323) popup_call2_audio_first_window

0x8881,	// (0x000553c1) popup_call2_audio_in_window_ParamLimits

0x8881,	// (0x000553c1) popup_call2_audio_in_window

0x88c3,	// (0x00055403) popup_call2_audio_out_window_ParamLimits

0x88c3,	// (0x00055403) popup_call2_audio_out_window

0x8925,	// (0x00055465) popup_call2_audio_second_window_ParamLimits

0x8925,	// (0x00055465) popup_call2_audio_second_window

0x8983,	// (0x000554c3) popup_call2_audio_wait_window_ParamLimits

0x8983,	// (0x000554c3) popup_call2_audio_wait_window

0x1c07,	// (0x0004e747) bg_popup_call2_act_pane_cp03

0x1e44,	// (0x0004e984) list_conf_pane_cp

0x2e59,	// (0x0004f999) popup_call2_audio_conf_window_t1

0x2e67,	// (0x0004f9a7) list_single_graphic_popup_conf2_pane_ParamLimits

0x2e67,	// (0x0004f9a7) list_single_graphic_popup_conf2_pane

0x280b,	// (0x0004f34b) list_highlight_pane_cp04

0x2e7a,	// (0x0004f9ba) list_single_graphic_popup_conf2_pane_g1

0x281c,	// (0x0004f35c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x0005c071) list_single_graphic_popup_conf2_pane_g

0x2e84,	// (0x0004f9c4) list_single_graphic_popup_conf2_pane_t1

0x2e92,	// (0x0004f9d2) bg_popup_call2_act_pane_cp01_ParamLimits

0x2e92,	// (0x0004f9d2) bg_popup_call2_act_pane_cp01

0x2f1c,	// (0x0004fa5c) call_type_pane_cp05_ParamLimits

0x2f1c,	// (0x0004fa5c) call_type_pane_cp05

0x2f70,	// (0x0004fab0) popup_call2_audio_second_window_g1_ParamLimits

0x2f70,	// (0x0004fab0) popup_call2_audio_second_window_g1

0x2fc4,	// (0x0004fb04) popup_call2_audio_second_window_g2_ParamLimits

0x2fc4,	// (0x0004fb04) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x0005c076) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x0005c076) popup_call2_audio_second_window_g

0x3029,	// (0x0004fb69) popup_call2_audio_second_window_t1_ParamLimits

0x3029,	// (0x0004fb69) popup_call2_audio_second_window_t1

0x30e4,	// (0x0004fc24) popup_call2_audio_second_window_t2_ParamLimits

0x30e4,	// (0x0004fc24) popup_call2_audio_second_window_t2

0x3137,	// (0x0004fc77) popup_call2_audio_second_window_t3_ParamLimits

0x3137,	// (0x0004fc77) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x0005c07d) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x0005c07d) popup_call2_audio_second_window_t

0x1c07,	// (0x0004e747) bg_popup_call2_in_pane_cp02

0x1c11,	// (0x0004e751) call_type_pane_cp04

0x1c19,	// (0x0004e759) popup_call2_audio_wait_window_g1

0x1c21,	// (0x0004e761) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x0005bc56) popup_call2_audio_wait_window_g

0x1c29,	// (0x0004e769) popup_call2_audio_wait_window_t3

0x322a,	// (0x0004fd6a) bg_popup_call2_act_pane_ParamLimits

0x322a,	// (0x0004fd6a) bg_popup_call2_act_pane

0x32ea,	// (0x0004fe2a) call_type_pane_cp03_ParamLimits

0x32ea,	// (0x0004fe2a) call_type_pane_cp03

0x335a,	// (0x0004fe9a) popup_call2_audio_first_window_g1_ParamLimits

0x335a,	// (0x0004fe9a) popup_call2_audio_first_window_g1

0x33ca,	// (0x0004ff0a) popup_call2_audio_first_window_g2_ParamLimits

0x33ca,	// (0x0004ff0a) popup_call2_audio_first_window_g2

0x29e5,	// (0x0004f525) popup_call2_audio_first_window_g3_ParamLimits

0x29e5,	// (0x0004f525) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x0005c086) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x0005c086) popup_call2_audio_first_window_g

0x34a8,	// (0x0004ffe8) popup_call2_audio_first_window_t1_ParamLimits

0x34a8,	// (0x0004ffe8) popup_call2_audio_first_window_t1

0x35ab,	// (0x000500eb) popup_call2_audio_first_window_t4_ParamLimits

0x35ab,	// (0x000500eb) popup_call2_audio_first_window_t4

0x369a,	// (0x000501da) popup_call2_audio_first_window_t5_ParamLimits

0x369a,	// (0x000501da) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x0005c091) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x0005c091) popup_call2_audio_first_window_t

0x1e5a,	// (0x0004e99a) bg_popup_call2_act_pane_g1

0x3d18,	// (0x00050858) popup_cale_lunar_info_window_t1

0x3d26,	// (0x00050866) popup_cale_lunar_info_window_t2

0x3d34,	// (0x00050874) popup_cale_lunar_info_window_t3

0x1c07,	// (0x0004e747) bg_popup_call2_bubble_pane

0x379b,	// (0x000502db) bg_popup_call2_in_pane_cp01_ParamLimits

0x379b,	// (0x000502db) bg_popup_call2_in_pane_cp01

0x18e3,	// (0x0004e423) call_type_pane_cp02

0x37e3,	// (0x00050323) popup_call2_audio_out_window_g1_ParamLimits

0x37e3,	// (0x00050323) popup_call2_audio_out_window_g1

0x380f,	// (0x0005034f) popup_call2_audio_out_window_g2_ParamLimits

0x380f,	// (0x0005034f) popup_call2_audio_out_window_g2

0x3837,	// (0x00050377) popup_call2_audio_out_window_g3_ParamLimits

0x3837,	// (0x00050377) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x0005c09a) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x0005c09a) popup_call2_audio_out_window_g

0x3872,	// (0x000503b2) popup_call2_audio_out_window_t1_ParamLimits

0x3872,	// (0x000503b2) popup_call2_audio_out_window_t1

0x38d1,	// (0x00050411) popup_call2_audio_out_window_t2_ParamLimits

0x38d1,	// (0x00050411) popup_call2_audio_out_window_t2

0x3925,	// (0x00050465) popup_call2_audio_out_window_t3_ParamLimits

0x3925,	// (0x00050465) popup_call2_audio_out_window_t3

0x393b,	// (0x0005047b) popup_call2_audio_out_window_t4_ParamLimits

0x393b,	// (0x0005047b) popup_call2_audio_out_window_t4

0x3951,	// (0x00050491) popup_call2_audio_out_window_t5_ParamLimits

0x3951,	// (0x00050491) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x0005c0a3) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x0005c0a3) popup_call2_audio_out_window_t

0x39be,	// (0x000504fe) bg_popup_call2_in_pane_ParamLimits

0x39be,	// (0x000504fe) bg_popup_call2_in_pane

0x3a1a,	// (0x0005055a) popup_call2_audio_in_window_g1_ParamLimits

0x3a1a,	// (0x0005055a) popup_call2_audio_in_window_g1

0x3a52,	// (0x00050592) popup_call2_audio_in_window_g2_ParamLimits

0x3a52,	// (0x00050592) popup_call2_audio_in_window_g2

0x3a8a,	// (0x000505ca) popup_call2_audio_in_window_g3_ParamLimits

0x3a8a,	// (0x000505ca) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x0005c0b0) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x0005c0b0) popup_call2_audio_in_window_g

0x3ae2,	// (0x00050622) popup_call2_audio_in_window_t1_ParamLimits

0x3ae2,	// (0x00050622) popup_call2_audio_in_window_t1

0x3b62,	// (0x000506a2) popup_call2_audio_in_window_t2_ParamLimits

0x3b62,	// (0x000506a2) popup_call2_audio_in_window_t2

0x3be2,	// (0x00050722) popup_call2_audio_in_window_t3_ParamLimits

0x3be2,	// (0x00050722) popup_call2_audio_in_window_t3

0x3bfc,	// (0x0005073c) popup_call2_audio_in_window_t4_ParamLimits

0x3bfc,	// (0x0005073c) popup_call2_audio_in_window_t4

0x3c0e,	// (0x0005074e) popup_call2_audio_in_window_t5_ParamLimits

0x3c0e,	// (0x0005074e) popup_call2_audio_in_window_t5

0x3c23,	// (0x00050763) popup_call2_audio_in_window_t6_ParamLimits

0x3c23,	// (0x00050763) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x0005c0b9) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x0005c0b9) popup_call2_audio_in_window_t

0x1e5a,	// (0x0004e99a) bg_popup_call2_in_pane_g1

0x3d42,	// (0x00050882) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x0005c121) popup_cale_lunar_info_window_t

0x1e62,	// (0x0004e9a2) bg_popup_call2_rect_pane_ParamLimits

0x1e62,	// (0x0004e9a2) bg_popup_call2_rect_pane

0x1c07,	// (0x0004e747) call2_cli_visual_graphic_pane

0x1c07,	// (0x0004e747) call2_cli_visual_text_pane

0x8e4b,	// (0x0005598b) smil_status_volume_pane_g3

0x0002,

0x1fce,	// (0x0004eb0e) call2_cli_visual_graphic_pane_g1

0x1fce,	// (0x0004eb0e) call2_cli_visual_graphic_pane_g2

0x1fce,	// (0x0004eb0e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x0005c0c6) call2_cli_visual_graphic_pane_g

0x3c38,	// (0x00050778) bg_popup_call2_rect_pane_g1

0x206c,	// (0x0004ebac) bg_popup_call2_rect_pane_g2

0x3c40,	// (0x00050780) bg_popup_call2_rect_pane_g3

0x3c48,	// (0x00050788) bg_popup_call2_rect_pane_g4

0x3c50,	// (0x00050790) bg_popup_call2_rect_pane_g5

0x3c58,	// (0x00050798) bg_popup_call2_rect_pane_g6

0x3c60,	// (0x000507a0) bg_popup_call2_rect_pane_g7

0x3c68,	// (0x000507a8) bg_popup_call2_rect_pane_g8

0x3c70,	// (0x000507b0) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x0005c0cd) bg_popup_call2_rect_pane_g

0x3c78,	// (0x000507b8) bg_popup_call2_bubble_pane_g1

0x3c80,	// (0x000507c0) bg_popup_call2_bubble_pane_g2

0x3c88,	// (0x000507c8) bg_popup_call2_bubble_pane_g3

0x3c90,	// (0x000507d0) bg_popup_call2_bubble_pane_g4

0x3c98,	// (0x000507d8) bg_popup_call2_bubble_pane_g5

0x3ca0,	// (0x000507e0) bg_popup_call2_bubble_pane_g6

0x3ca8,	// (0x000507e8) bg_popup_call2_bubble_pane_g7

0x3cb0,	// (0x000507f0) bg_popup_call2_bubble_pane_g8

0x3cb8,	// (0x000507f8) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x0005c0e0) bg_popup_call2_bubble_pane_g

0x62ce,	// (0x00052e0e) aid_cale_week_size_cell_pane

0x67c2,	// (0x00053302) aid_cams_cif_uncrop_pane_ParamLimits

0x67c2,	// (0x00053302) aid_cams_cif_uncrop_pane

0x6925,	// (0x00053465) aid_cams_size_cell_ParamLimits

0x6925,	// (0x00053465) aid_cams_size_cell

0x6931,	// (0x00053471) grid_cams_pane_ParamLimits

0x693f,	// (0x0005347f) linegrid_cams_pane_ParamLimits

0x6a68,	// (0x000535a8) call_video_pane_t1

0x6a89,	// (0x000535c9) call_video_pane_t2

0x0001,

0xf28d,	// (0x0005bdcd) call_video_pane_t

0x7009,	// (0x00053b49) aid_cale_month_size_cell_pane_ParamLimits

0x7009,	// (0x00053b49) aid_cale_month_size_cell_pane

0xf62a,	// (0x0005c16a) smil_status_volume_pane_g

0x8e58,	// (0x00055998) volume_smil_pane_ParamLimits

0x018f,	// (0x0004cccf) aid_popup2_width_pane

0x6191,	// (0x00052cd1) cell_qdial_pane_g4_ParamLimits

0x6191,	// (0x00052cd1) cell_qdial_pane_g4

0x7d57,	// (0x00054897) aid_blid_cardinal_pane_ParamLimits

0x7d67,	// (0x000548a7) aid_blid_destination_pane_ParamLimits

0x7d67,	// (0x000548a7) aid_blid_destination_pane

0x1e62,	// (0x0004e9a2) bg_popup_call_poc_act_pane_ParamLimits

0x1e62,	// (0x0004e9a2) bg_popup_call_poc_act_pane

0x1e62,	// (0x0004e9a2) bg_popup_call_poc_inact_pane_ParamLimits

0x1e62,	// (0x0004e9a2) bg_popup_call_poc_inact_pane

0x3cc8,	// (0x00050808) bg_popup_call_poc_act_pane_g1

0x3cd0,	// (0x00050810) bg_popup_call_poc_act_pane_g2

0x3cd8,	// (0x00050818) bg_popup_call_poc_act_pane_g3

0x3c90,	// (0x000507d0) bg_popup_call_poc_act_pane_g4

0x3c98,	// (0x000507d8) bg_popup_call_poc_act_pane_g5

0x3ce0,	// (0x00050820) bg_popup_call_poc_act_pane_g6

0x3ca8,	// (0x000507e8) bg_popup_call_poc_act_pane_g7

0x3ce8,	// (0x00050828) bg_popup_call_poc_act_pane_g8

0x1c07,	// (0x0004e747) main_usb_pane

0x3e41,	// (0x00050981) popup_cale_lunar_info_window

0x6da8,	// (0x000538e8) im_reading_pane_t1_ParamLimits

0x2233,	// (0x0004ed73) list_im_pane_ParamLimits

0x2244,	// (0x0004ed84) scroll_pane_cp07_ParamLimits

0x1c07,	// (0x0004e747) grid_highlight_pane_cp012

0x1e62,	// (0x0004e9a2) mup_scale_pane_ParamLimits

0x29e5,	// (0x0004f525) main_usb_pane_g1_ParamLimits

0x29e5,	// (0x0004f525) main_usb_pane_g1

0x89fa,	// (0x0005553a) main_usb_pane_g2_ParamLimits

0x89fa,	// (0x0005553a) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x0005c10a) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x0005c10a) main_usb_pane_g

0x8a06,	// (0x00055546) main_usb_pane_t1_ParamLimits

0x8a06,	// (0x00055546) main_usb_pane_t1

0x8a18,	// (0x00055558) main_usb_pane_t2_ParamLimits

0x8a18,	// (0x00055558) main_usb_pane_t2

0x8a2a,	// (0x0005556a) main_usb_pane_t3_ParamLimits

0x8a2a,	// (0x0005556a) main_usb_pane_t3

0x8a3c,	// (0x0005557c) main_usb_pane_t4_ParamLimits

0x8a3c,	// (0x0005557c) main_usb_pane_t4

0x8a4e,	// (0x0005558e) main_usb_pane_t5_ParamLimits

0x8a4e,	// (0x0005558e) main_usb_pane_t5

0x8a60,	// (0x000555a0) main_usb_pane_t6_ParamLimits

0x8a60,	// (0x000555a0) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x0005c10f) main_usb_pane_t_ParamLimits

0x7cfd,	// (0x0005483d) aid_text_placing

0x7d09,	// (0x00054849) main_location2_pane_t1_ParamLimits

0x7d1d,	// (0x0005485d) main_location2_pane_t2_ParamLimits

0x7d31,	// (0x00054871) main_location2_pane_t3_ParamLimits

0x7d45,	// (0x00054885) main_location2_pane_t4_ParamLimits

0x7d45,	// (0x00054885) main_location2_pane_t4

0xf3ee,	// (0x0005bf2e) main_location2_pane_t_ParamLimits

0x1ea6,	// (0x0004e9e6) find_pinb_pane_g2_ParamLimits

0x1ea6,	// (0x0004e9e6) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x0005bc7c) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x0005bc7c) find_pinb_pane_g

0x1eb2,	// (0x0004e9f2) find_pinb_pane_t1_ParamLimits

0x1ec4,	// (0x0004ea04) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x0005bc81) find_pinb_pane_t_ParamLimits

0x1c07,	// (0x0004e747) main_call3_pane

0x7421,	// (0x00053f61) cale_month_day_heading_pane_t1_ParamLimits

0x747f,	// (0x00053fbf) cale_month_day_heading_pane_t2_ParamLimits

0x74e4,	// (0x00054024) cale_month_day_heading_pane_t3_ParamLimits

0x7549,	// (0x00054089) cale_month_day_heading_pane_t4_ParamLimits

0x75ae,	// (0x000540ee) cale_month_day_heading_pane_t5_ParamLimits

0x7613,	// (0x00054153) cale_month_day_heading_pane_t6_ParamLimits

0x7680,	// (0x000541c0) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x0005be05) cale_month_day_heading_pane_t_ParamLimits

0x2484,	// (0x0004efc4) smil_status_volume_pane

0x85ae,	// (0x000550ee) postcard_address_pane_ParamLimits

0x85ae,	// (0x000550ee) postcard_address_pane

0x85ba,	// (0x000550fa) postcard_message_pane_ParamLimits

0x85ba,	// (0x000550fa) postcard_message_pane

0x89c2,	// (0x00055502) call2_cli_visual_pane_t1_ParamLimits

0x89c2,	// (0x00055502) call2_cli_visual_pane_t1

0x8fab,	// (0x00055aeb) postcard_message_pane_t1_ParamLimits

0x8fab,	// (0x00055aeb) postcard_message_pane_t1

0x8f94,	// (0x00055ad4) postcard_address_pane_t1_ParamLimits

0x8f94,	// (0x00055ad4) postcard_address_pane_t1

0x8f85,	// (0x00055ac5) popup_call3_audio_in_window_ParamLimits

0x8f85,	// (0x00055ac5) popup_call3_audio_in_window

0x8e6d,	// (0x000559ad) bg_popup_call3_in_pane_ParamLimits

0x8e6d,	// (0x000559ad) bg_popup_call3_in_pane

0x8ecb,	// (0x00055a0b) popup_call3_audio_in_window_g1_ParamLimits

0x8ecb,	// (0x00055a0b) popup_call3_audio_in_window_g1

0x8ee3,	// (0x00055a23) popup_call3_audio_in_window_g2_ParamLimits

0x8ee3,	// (0x00055a23) popup_call3_audio_in_window_g2

0x8efb,	// (0x00055a3b) popup_call3_audio_in_window_g3_ParamLimits

0x8efb,	// (0x00055a3b) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x0005c171) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x0005c171) popup_call3_audio_in_window_g

0x8f23,	// (0x00055a63) popup_call3_audio_in_window_t1_ParamLimits

0x8f23,	// (0x00055a63) popup_call3_audio_in_window_t1

0x8f4b,	// (0x00055a8b) popup_call3_audio_in_window_t2_ParamLimits

0x8f4b,	// (0x00055a8b) popup_call3_audio_in_window_t2

0x8f73,	// (0x00055ab3) popup_call3_audio_in_window_t3_ParamLimits

0x8f73,	// (0x00055ab3) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x0005c17a) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x0005c17a) popup_call3_audio_in_window_t

0x2a03,	// (0x0004f543) bg_popup_call3_rect_pane

0x3c38,	// (0x00050778) bg_popup_call3_rect_pane_g1

0x206c,	// (0x0004ebac) bg_popup_call3_rect_pane_g2

0x3c40,	// (0x00050780) bg_popup_call3_rect_pane_g3

0x3c48,	// (0x00050788) bg_popup_call3_rect_pane_g4

0x3c50,	// (0x00050790) bg_popup_call3_rect_pane_g5

0x3c58,	// (0x00050798) bg_popup_call3_rect_pane_g6

0x3c60,	// (0x000507a0) bg_popup_call3_rect_pane_g7

0x816f,	// (0x00054caf) mup_visualizer_osc_pane

0x2ac2,	// (0x0004f602) mup_visualizer_spec_pane

0x8e8d,	// (0x000559cd) call3_video_qcif_pane_ParamLimits

0x8e8d,	// (0x000559cd) call3_video_qcif_pane

0x8e9d,	// (0x000559dd) call3_video_qcif_uncrop_pane_ParamLimits

0x8e9d,	// (0x000559dd) call3_video_qcif_uncrop_pane

0x8ea9,	// (0x000559e9) call3_video_subqcif_pane_ParamLimits

0x8ea9,	// (0x000559e9) call3_video_subqcif_pane

0x8ebb,	// (0x000559fb) call3_video_subqcif_uncrop_pane_ParamLimits

0x8ebb,	// (0x000559fb) call3_video_subqcif_uncrop_pane

0x8f13,	// (0x00055a53) popup_call3_audio_in_window_g4_ParamLimits

0x8f13,	// (0x00055a53) popup_call3_audio_in_window_g4

0x8e38,	// (0x00055978) mup_spec_half_pane

0x8e41,	// (0x00055981) mup_spec_half_pane_cp

0x3ed8,	// (0x00050a18) mup_osc_middle_pane

0x3ee1,	// (0x00050a21) mup_visualizer_osc_pane_g1

0x8e19,	// (0x00055959) mup_spec_bar_pane_ParamLimits

0x8e19,	// (0x00055959) mup_spec_bar_pane

0x3ec5,	// (0x00050a05) mup_spec_bar_pane_g1

0x3ecf,	// (0x00050a0f) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0005c165) mup_spec_bar_pane_g

0x62ce,	// (0x00052e0e) aid_cale_week_size_cell_pane_ParamLimits

0x62e1,	// (0x00052e21) bg_cale_heading_pane_ParamLimits

0x20a0,	// (0x0004ebe0) bg_cale_pane_cp01_ParamLimits

0x62fd,	// (0x00052e3d) cale_week_corner_pane_ParamLimits

0x630e,	// (0x00052e4e) cale_week_day_heading_pane_ParamLimits

0x632a,	// (0x00052e6a) cale_week_scroll_pane_g1_ParamLimits

0x6343,	// (0x00052e83) cale_week_scroll_pane_g2_ParamLimits

0x6354,	// (0x00052e94) cale_week_scroll_pane_g3_ParamLimits

0x6365,	// (0x00052ea5) cale_week_scroll_pane_g4_ParamLimits

0x6376,	// (0x00052eb6) cale_week_scroll_pane_g5_ParamLimits

0x6387,	// (0x00052ec7) cale_week_scroll_pane_g6_ParamLimits

0x6398,	// (0x00052ed8) cale_week_scroll_pane_g7_ParamLimits

0x63ab,	// (0x00052eeb) cale_week_scroll_pane_g8_ParamLimits

0x63be,	// (0x00052efe) cale_week_scroll_pane_g9_ParamLimits

0x63cf,	// (0x00052f0f) cale_week_scroll_pane_g10_ParamLimits

0x63e0,	// (0x00052f20) cale_week_scroll_pane_g11_ParamLimits

0x63f1,	// (0x00052f31) cale_week_scroll_pane_g12_ParamLimits

0x640a,	// (0x00052f4a) cale_week_scroll_pane_g13_ParamLimits

0x6423,	// (0x00052f63) cale_week_scroll_pane_g14_ParamLimits

0x643c,	// (0x00052f7c) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x0005bd0d) cale_week_scroll_pane_g_ParamLimits

0x6455,	// (0x00052f95) cale_week_time_pane_ParamLimits

0x6468,	// (0x00052fa8) grid_cale_week_pane_ParamLimits

0x20b9,	// (0x0004ebf9) listscroll_cale_week_pane_t1

0x6485,	// (0x00052fc5) scroll_pane_cp08_ParamLimits

0x705a,	// (0x00053b9a) cale_month_corner_pane_ParamLimits

0x245a,	// (0x0004ef9a) cale_month_pane_t1

0x73d0,	// (0x00053f10) cale_month_week_pane_ParamLimits

0x29e5,	// (0x0004f525) popup_call_status_window_g1_ParamLimits

0x7b39,	// (0x00054679) popup_call_status_window_g2_ParamLimits

0x7b45,	// (0x00054685) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x0005beb5) popup_call_status_window_g_ParamLimits

0x2770,	// (0x0004f2b0) aid_call2_pane

0x8413,	// (0x00054f53) msg_header_pane_g1

0x85ae,	// (0x000550ee) postcard_address2_pane_ParamLimits

0x85ae,	// (0x000550ee) postcard_address2_pane

0x85ba,	// (0x000550fa) postcard_message2_pane_ParamLimits

0x85ba,	// (0x000550fa) postcard_message2_pane

0x8da7,	// (0x000558e7) message2_row_pane_ParamLimits

0x8da7,	// (0x000558e7) message2_row_pane

0x8dc4,	// (0x00055904) address2_row_pane_ParamLimits

0x8dc4,	// (0x00055904) address2_row_pane

0x3e93,	// (0x000509d3) postcard_message2_row_pane_g1

0x3e9b,	// (0x000509db) postcard_message2_row_pane_t1

0x3e93,	// (0x000509d3) address2_row_pane_g1

0x3e9b,	// (0x000509db) address2_row_pane_t1

0x66a1,	// (0x000531e1) aid_size_cell_vorec

0x1c07,	// (0x0004e747) main_rss_pane

0x8dd7,	// (0x00055917) rss_list_single_pane_ParamLimits

0x8dd7,	// (0x00055917) rss_list_single_pane

0x3ea9,	// (0x000509e9) rss_list_single_pane_t1

0x3eb7,	// (0x000509f7) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x0005c160) rss_list_single_pane_t

0x1c07,	// (0x0004e747) main_camera2_pane

0x1c07,	// (0x0004e747) main_video2_pane

0x900f,	// (0x00055b4f) cams_zoom_pane_cp2_ParamLimits

0x900f,	// (0x00055b4f) cams_zoom_pane_cp2

0x901b,	// (0x00055b5b) image2_vga_pane_ParamLimits

0x901b,	// (0x00055b5b) image2_vga_pane

0x902a,	// (0x00055b6a) main_camera2_pane_g1_ParamLimits

0x902a,	// (0x00055b6a) main_camera2_pane_g1

0x9036,	// (0x00055b76) main_camera2_pane_g2_ParamLimits

0x9036,	// (0x00055b76) main_camera2_pane_g2

0x9042,	// (0x00055b82) main_camera2_pane_g3_ParamLimits

0x9042,	// (0x00055b82) main_camera2_pane_g3

0x904e,	// (0x00055b8e) main_camera2_pane_g4_ParamLimits

0x904e,	// (0x00055b8e) main_camera2_pane_g4

0x905a,	// (0x00055b9a) main_camera2_pane_g5_ParamLimits

0x905a,	// (0x00055b9a) main_camera2_pane_g5

0x9066,	// (0x00055ba6) main_camera2_pane_g6_ParamLimits

0x9066,	// (0x00055ba6) main_camera2_pane_g6

0x9072,	// (0x00055bb2) main_camera2_pane_g7_ParamLimits

0x9072,	// (0x00055bb2) main_camera2_pane_g7

0x907e,	// (0x00055bbe) main_camera2_pane_g8_ParamLimits

0x907e,	// (0x00055bbe) main_camera2_pane_g8

0x0008,

0xf641,	// (0x0005c181) main_camera2_pane_g_ParamLimits

0xf641,	// (0x0005c181) main_camera2_pane_g

0x9096,	// (0x00055bd6) main_camera2_pane_t1_ParamLimits

0x9096,	// (0x00055bd6) main_camera2_pane_t1

0x90a8,	// (0x00055be8) main_camera2_pane_t2_ParamLimits

0x90a8,	// (0x00055be8) main_camera2_pane_t2

0x90ba,	// (0x00055bfa) main_camera2_pane_t3_ParamLimits

0x90ba,	// (0x00055bfa) main_camera2_pane_t3

0x90cc,	// (0x00055c0c) main_camera2_pane_t4_ParamLimits

0x90cc,	// (0x00055c0c) main_camera2_pane_t4

0x0006,

0xf654,	// (0x0005c194) main_camera2_pane_t_ParamLimits

0xf654,	// (0x0005c194) main_camera2_pane_t

0x912e,	// (0x00055c6e) cams_zoom_pane_cp4_ParamLimits

0x912e,	// (0x00055c6e) cams_zoom_pane_cp4

0x913e,	// (0x00055c7e) image2_cif_pane_ParamLimits

0x913e,	// (0x00055c7e) image2_cif_pane

0x9153,	// (0x00055c93) image2_subqcif_pane_ParamLimits

0x9153,	// (0x00055c93) image2_subqcif_pane

0x9162,	// (0x00055ca2) main_video2_pane_g1_ParamLimits

0x9162,	// (0x00055ca2) main_video2_pane_g1

0x9174,	// (0x00055cb4) main_video2_pane_g2_ParamLimits

0x9174,	// (0x00055cb4) main_video2_pane_g2

0x9184,	// (0x00055cc4) main_video2_pane_g3_ParamLimits

0x9184,	// (0x00055cc4) main_video2_pane_g3

0x9194,	// (0x00055cd4) main_video2_pane_g4_ParamLimits

0x9194,	// (0x00055cd4) main_video2_pane_g4

0x91a4,	// (0x00055ce4) main_video2_pane_g5_ParamLimits

0x91a4,	// (0x00055ce4) main_video2_pane_g5

0x91b4,	// (0x00055cf4) main_video2_pane_g6_ParamLimits

0x91b4,	// (0x00055cf4) main_video2_pane_g6

0x0005,

0xf663,	// (0x0005c1a3) main_video2_pane_g_ParamLimits

0xf663,	// (0x0005c1a3) main_video2_pane_g

0x91c6,	// (0x00055d06) main_video2_pane_t1_ParamLimits

0x91c6,	// (0x00055d06) main_video2_pane_t1

0x91e0,	// (0x00055d20) main_video2_pane_t2_ParamLimits

0x91e0,	// (0x00055d20) main_video2_pane_t2

0x9206,	// (0x00055d46) main_video2_pane_t3_ParamLimits

0x9206,	// (0x00055d46) main_video2_pane_t3

0x0002,

0xf670,	// (0x0005c1b0) main_video2_pane_t_ParamLimits

0xf670,	// (0x0005c1b0) main_video2_pane_t

0x8b17,	// (0x00055657) call_muted_g2

0x0001,

0xf612,	// (0x0005c152) call_muted_g

0x1c07,	// (0x0004e747) main_mup2_pane

0x3f46,	// (0x00050a86) main_mup2_pane_g1_ParamLimits

0x3f46,	// (0x00050a86) main_mup2_pane_g1

0x922c,	// (0x00055d6c) main_mup2_pane_g2_ParamLimits

0x922c,	// (0x00055d6c) main_mup2_pane_g2

0x94ae,	// (0x00055fee) main_mup_pane_g13_cp1

0x94b6,	// (0x00055ff6) mup_volume_pane_cp1

0x924c,	// (0x00055d8c) main_mup2_pane_g4_ParamLimits

0x924c,	// (0x00055d8c) main_mup2_pane_g4

0x9261,	// (0x00055da1) main_mup2_pane_g5_ParamLimits

0x9261,	// (0x00055da1) main_mup2_pane_g5

0x9276,	// (0x00055db6) main_mup2_pane_g6_ParamLimits

0x9276,	// (0x00055db6) main_mup2_pane_g6

0x928b,	// (0x00055dcb) main_mup2_pane_g7_ParamLimits

0x928b,	// (0x00055dcb) main_mup2_pane_g7

0x0006,

0xf677,	// (0x0005c1b7) main_mup2_pane_g_ParamLimits

0xf677,	// (0x0005c1b7) main_mup2_pane_g

0x92a7,	// (0x00055de7) main_mup2_pane_t1_ParamLimits

0x92a7,	// (0x00055de7) main_mup2_pane_t1

0x92be,	// (0x00055dfe) main_mup2_pane_t2_ParamLimits

0x92be,	// (0x00055dfe) main_mup2_pane_t2

0x92d5,	// (0x00055e15) main_mup2_pane_t3_ParamLimits

0x92d5,	// (0x00055e15) main_mup2_pane_t3

0x92ec,	// (0x00055e2c) main_mup2_pane_t4_ParamLimits

0x92ec,	// (0x00055e2c) main_mup2_pane_t4

0x9306,	// (0x00055e46) main_mup2_pane_t5_ParamLimits

0x9306,	// (0x00055e46) main_mup2_pane_t5

0x9320,	// (0x00055e60) main_mup2_pane_t6_ParamLimits

0x9320,	// (0x00055e60) main_mup2_pane_t6

0x0005,

0xf686,	// (0x0005c1c6) main_mup2_pane_t_ParamLimits

0xf686,	// (0x0005c1c6) main_mup2_pane_t

0x9358,	// (0x00055e98) mup2_visualizer_pane_ParamLimits

0x9358,	// (0x00055e98) mup2_visualizer_pane

0x938e,	// (0x00055ece) mup_progress_pane_cp_ParamLimits

0x938e,	// (0x00055ece) mup_progress_pane_cp

0x9499,	// (0x00055fd9) mup_volume_pane_cp_ParamLimits

0x9499,	// (0x00055fd9) mup_volume_pane_cp

0x93a5,	// (0x00055ee5) mup2_visualizer_pane_g1_ParamLimits

0x93a5,	// (0x00055ee5) mup2_visualizer_pane_g1

0x3f18,	// (0x00050a58) mup2_visualizer_pane_g2_ParamLimits

0x3f18,	// (0x00050a58) mup2_visualizer_pane_g2

0x93ba,	// (0x00055efa) mup2_visualizer_pane_g3_ParamLimits

0x93ba,	// (0x00055efa) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x0005c1d3) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x0005c1d3) mup2_visualizer_pane_g

0x2ce9,	// (0x0004f829) aid_size_cell_fmradio

0x8c2d,	// (0x0005576d) aid_height_parent_landcape

0x22c2,	// (0x0004ee02) wml_content_pane_cp

0x22ca,	// (0x0004ee0a) wml_tabs_pane

0x22d3,	// (0x0004ee13) popup_wml_miniature_window

0x22db,	// (0x0004ee1b) scroll_pane_cp021

0x22ef,	// (0x0004ee2f) wml_content_pane_comp8

0x1c07,	// (0x0004e747) bg_popup_sub_pane_cp05

0x3f36,	// (0x00050a76) popup_wml_miniature_window_g1

0x3f3e,	// (0x00050a7e) wml_miniature_view_pane

0x93c8,	// (0x00055f08) aid_size_wml_view

0x93d0,	// (0x00055f10) wml_miniature_view_pane_g1

0x93d9,	// (0x00055f19) wml_miniature_view_pane_g2

0x93e2,	// (0x00055f22) wml_miniature_view_pane_g3

0x93ea,	// (0x00055f2a) wml_miniature_view_pane_g4

0x93f2,	// (0x00055f32) wml_miniature_view_pane_g5

0x93fa,	// (0x00055f3a) wml_miniature_view_pane_g6

0x9402,	// (0x00055f42) wml_miniature_view_pane_g7

0x940a,	// (0x00055f4a) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x0005c1da) wml_miniature_view_pane_g

0x3f46,	// (0x00050a86) background_graphic_ParamLimits

0x3f46,	// (0x00050a86) background_graphic

0x3f52,	// (0x00050a92) wml_tabs_2_pane

0x3f5b,	// (0x00050a9b) wml_tabs_3_pane_ParamLimits

0x3f5b,	// (0x00050a9b) wml_tabs_3_pane

0x3f6d,	// (0x00050aad) wml_tabs_4_pane_ParamLimits

0x3f6d,	// (0x00050aad) wml_tabs_4_pane

0x3f83,	// (0x00050ac3) wml_tabs_5_pane_ParamLimits

0x3f83,	// (0x00050ac3) wml_tabs_5_pane

0x3f9d,	// (0x00050add) wml_tabs_pane_g2_ParamLimits

0x3f9d,	// (0x00050add) wml_tabs_pane_g2

0x3fb1,	// (0x00050af1) wml_tabs_pane_g3_ParamLimits

0x3fb1,	// (0x00050af1) wml_tabs_pane_g3

0x9412,	// (0x00055f52) wml_tabs_2_active_pane_ParamLimits

0x9412,	// (0x00055f52) wml_tabs_2_active_pane

0x9422,	// (0x00055f62) wml_tabs_2_passive_pane_ParamLimits

0x9422,	// (0x00055f62) wml_tabs_2_passive_pane

0x9432,	// (0x00055f72) wml_tabs_3_active_pane_cp_ParamLimits

0x9432,	// (0x00055f72) wml_tabs_3_active_pane_cp

0x9443,	// (0x00055f83) wml_tabs_3_passive_pane_ParamLimits

0x9443,	// (0x00055f83) wml_tabs_3_passive_pane

0x9454,	// (0x00055f94) wml_tabs_3_passive_pane_cp_ParamLimits

0x9454,	// (0x00055f94) wml_tabs_3_passive_pane_cp

0x9465,	// (0x00055fa5) tabs_4_active_pane

0x946d,	// (0x00055fad) tabs_4_passive_pane

0x9475,	// (0x00055fb5) tabs_4_passive_pane_cp

0x947d,	// (0x00055fbd) tabs_4_passive_pane_cp2

0x3cc0,	// (0x00050800) aid_height_text

0x8138,	// (0x00054c78) mup_volume_cont_pane_ParamLimits

0x8138,	// (0x00054c78) mup_volume_cont_pane

0x5df2,	// (0x00052932) aid_size_cell_pinb

0x1e92,	// (0x0004e9d2) aid_size_list_pinb

0x9377,	// (0x00055eb7) mup2_volume_cont_pane_ParamLimits

0x9377,	// (0x00055eb7) mup2_volume_cont_pane

0x9485,	// (0x00055fc5) mup2_volume_cont_pane_g1_ParamLimits

0x9485,	// (0x00055fc5) mup2_volume_cont_pane_g1

0x5a7f,	// (0x000525bf) aid_size_cell_touch_ParamLimits

0x5a7f,	// (0x000525bf) aid_size_cell_touch

0x5cd2,	// (0x00052812) touch_pane_ParamLimits

0x5cd2,	// (0x00052812) touch_pane

0x017d,	// (0x0004ccbd) main_rss2_pane

0x3fce,	// (0x00050b0e) listscroll_rss2_pane

0x3fd7,	// (0x00050b17) rss2_navigation_pane

0x3fdf,	// (0x00050b1f) list_rss2_pane

0x28a8,	// (0x0004f3e8) scroll_pane_cp22

0x3fe7,	// (0x00050b27) rss2_navigation_pane_g1

0x3ff0,	// (0x00050b30) rss2_navigation_pane_g2

0x3ff8,	// (0x00050b38) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x0005c1eb) rss2_navigation_pane_g

0x4000,	// (0x00050b40) rss2_navigation_pane_t1

0x94be,	// (0x00055ffe) rss2_list_single_pane_ParamLimits

0x94be,	// (0x00055ffe) rss2_list_single_pane

0x400e,	// (0x00050b4e) rss2_list_single_pane_t2

0x401c,	// (0x00050b5c) rss2_list_single_pane_t3_ParamLimits

0x401c,	// (0x00050b5c) rss2_list_single_pane_t3

0x4039,	// (0x00050b79) rss2_list_single_pane_t4

0x7890,	// (0x000543d0) smil_status_pane_g1

0x01f5,	// (0x0004cd35) main_image2_pane_ParamLimits

0x01f5,	// (0x0004cd35) main_image2_pane

0x908a,	// (0x00055bca) main_camera2_pane_g9_ParamLimits

0x908a,	// (0x00055bca) main_camera2_pane_g9

0x90de,	// (0x00055c1e) main_camera2_pane_t5_ParamLimits

0x90de,	// (0x00055c1e) main_camera2_pane_t5

0x90f0,	// (0x00055c30) main_camera2_pane_t6_ParamLimits

0x90f0,	// (0x00055c30) main_camera2_pane_t6

0x94fa,	// (0x0005603a) main_image2_pane_g1_ParamLimits

0x94fa,	// (0x0005603a) main_image2_pane_g1

0x878f,	// (0x000552cf) smil2_video_pane_ParamLimits

0x878f,	// (0x000552cf) smil2_video_pane

0x01ab,	// (0x0004cceb) aid_zoom_text_primary_cp

0x01eb,	// (0x0004cd2b) popup_preview_fixed_window

0x222b,	// (0x0004ed6b) im_reading_pane_g1

0x8fd4,	// (0x00055b14) cams2_bc_adjust_pane_cp_ParamLimits

0x8fd4,	// (0x00055b14) cams2_bc_adjust_pane_cp

0x9120,	// (0x00055c60) cams2_bc_adjust_pane_ParamLimits

0x9120,	// (0x00055c60) cams2_bc_adjust_pane

0x427e,	// (0x00050dbe) cams2_bc_adjust_pane_g1

0x9506,	// (0x00056046) cams2_slider_pane

0x950f,	// (0x0005604f) cams2_slider_pane_g1

0x9518,	// (0x00056058) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x0005c1f2) cams2_slider_pane_g

0x5ed1,	// (0x00052a11) calc_display_pane_ParamLimits

0x5eef,	// (0x00052a2f) calc_paper_pane_ParamLimits

0x5f0b,	// (0x00052a4b) grid_calc_pane_ParamLimits

0x7ba3,	// (0x000546e3) popup_clock_digital_window_t1_ParamLimits

0x2c86,	// (0x0004f7c6) main_image_pane_t1

0x5eb7,	// (0x000529f7) aid_size_cell_calc_ParamLimits

0x5eb7,	// (0x000529f7) aid_size_cell_calc

0x8c5f,	// (0x0005579f) popup_blid_sat_info2_window_ParamLimits

0x8c5f,	// (0x0005579f) popup_blid_sat_info2_window

0x404f,	// (0x00050b8f) aid_size_cell_blid

0x4057,	// (0x00050b97) bg_popup_window_pane_cp07

0x407a,	// (0x00050bba) grid_popup_blid_pane

0x4084,	// (0x00050bc4) heading_pane_cp05_ParamLimits

0x4084,	// (0x00050bc4) heading_pane_cp05

0x414e,	// (0x00050c8e) cell_popup_blid_pane_ParamLimits

0x414e,	// (0x00050c8e) cell_popup_blid_pane

0x4174,	// (0x00050cb4) cell_popup_blid_pane_g1

0x417c,	// (0x00050cbc) cell_popup_blid_pane_t1

0x933d,	// (0x00055e7d) mup2_indicator_pane_ParamLimits

0x933d,	// (0x00055e7d) mup2_indicator_pane

0x2a03,	// (0x0004f543) mup2_visualizer_osc_pane

0x3f24,	// (0x00050a64) mup2_visualizer_spec_pane_ParamLimits

0x3f24,	// (0x00050a64) mup2_visualizer_spec_pane

0x9532,	// (0x00056072) mup2_spec_half_pane

0x953b,	// (0x0005607b) mup2_spec_half_pane_cp

0x9545,	// (0x00056085) mup2_spec_bar_pane_ParamLimits

0x9545,	// (0x00056085) mup2_spec_bar_pane

0x3ec5,	// (0x00050a05) mup2_spec_bar_pane_g1

0x3ecf,	// (0x00050a0f) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0005c165) mup2_spec_bar_pane_g

0x9564,	// (0x000560a4) mup2_osc_middle_pane

0x3ee1,	// (0x00050a21) mup2_visualizer_osc_pane_g1

0x1816,	// (0x0004e356) popup_number_entry_window_t1_ParamLimits

0x1829,	// (0x0004e369) popup_number_entry_window_t2_ParamLimits

0x183b,	// (0x0004e37b) popup_number_entry_window_t3_ParamLimits

0x5d29,	// (0x00052869) popup_number_entry_window_t5_ParamLimits

0x5d29,	// (0x00052869) popup_number_entry_window_t5

0xf0e7,	// (0x0005bc27) popup_number_entry_window_t_ParamLimits

0x184d,	// (0x0004e38d) text_title_cp2_ParamLimits

0x8476,	// (0x00054fb6) aid_hotspot_pointer_text2_pane

0x8510,	// (0x00055050) main_viewer_pane_g9_ParamLimits

0x8510,	// (0x00055050) main_viewer_pane_g9

0x245a,	// (0x0004ef9a) cale_month_pane_t1_ParamLimits

0x2497,	// (0x0004efd7) bg_cale_pane_ParamLimits

0x24af,	// (0x0004efef) list_cale_pane_ParamLimits

0x20b9,	// (0x0004ebf9) listscroll_cale_day_pane_t1

0x24c0,	// (0x0004f000) scroll_pane_cp09_ParamLimits

0x8177,	// (0x00054cb7) main_mup_eq_pane_t1_ParamLimits

0x8177,	// (0x00054cb7) main_mup_eq_pane_t1

0x8191,	// (0x00054cd1) main_mup_eq_pane_t2_ParamLimits

0x8191,	// (0x00054cd1) main_mup_eq_pane_t2

0x81a9,	// (0x00054ce9) main_mup_eq_pane_t3_ParamLimits

0x81a9,	// (0x00054ce9) main_mup_eq_pane_t3

0x81c1,	// (0x00054d01) main_mup_eq_pane_t4_ParamLimits

0x81c1,	// (0x00054d01) main_mup_eq_pane_t4

0x81d9,	// (0x00054d19) main_mup_eq_pane_t5_ParamLimits

0x81d9,	// (0x00054d19) main_mup_eq_pane_t5

0x81f1,	// (0x00054d31) main_mup_eq_pane_t6_ParamLimits

0x81f1,	// (0x00054d31) main_mup_eq_pane_t6

0x8205,	// (0x00054d45) main_mup_eq_pane_t7_ParamLimits

0x8205,	// (0x00054d45) main_mup_eq_pane_t7

0x8219,	// (0x00054d59) main_mup_eq_pane_t8_ParamLimits

0x8219,	// (0x00054d59) main_mup_eq_pane_t8

0x822f,	// (0x00054d6f) main_mup_eq_pane_t9_ParamLimits

0x822f,	// (0x00054d6f) main_mup_eq_pane_t9

0x8247,	// (0x00054d87) main_mup_eq_pane_t10_ParamLimits

0x8247,	// (0x00054d87) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x0005bfb4) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x0005bfb4) main_mup_eq_pane_t

0x8304,	// (0x00054e44) mup_equalizer_pane_cp5_ParamLimits

0x831a,	// (0x00054e5a) mup_equalizer_pane_cp6_ParamLimits

0x8332,	// (0x00054e72) mup_equalizer_pane_cp7_ParamLimits

0x017d,	// (0x0004ccbd) main_gallery_pane

0x3eea,	// (0x00050a2a) smil2_volume_pane

0x3f05,	// (0x00050a45) smil_status_volume_pane_g1_ParamLimits

0x3ef2,	// (0x00050a32) smil_status_volume_pane_g2_ParamLimits

0x8e4b,	// (0x0005598b) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x0005c16a) smil_status_volume_pane_g_ParamLimits

0x4057,	// (0x00050b97) bg_popup_window_pane_cp07_ParamLimits

0x4065,	// (0x00050ba5) blid_firmament_pane

0x956d,	// (0x000560ad) aid_size_cell_gallery_ParamLimits

0x956d,	// (0x000560ad) aid_size_cell_gallery

0x957b,	// (0x000560bb) grid_gallery_pane_ParamLimits

0x957b,	// (0x000560bb) grid_gallery_pane

0x958b,	// (0x000560cb) cell_gallery_pane_ParamLimits

0x958b,	// (0x000560cb) cell_gallery_pane

0x418a,	// (0x00050cca) bg_cell_gallery_focus_pane_ParamLimits

0x418a,	// (0x00050cca) bg_cell_gallery_focus_pane

0x419c,	// (0x00050cdc) cell_gallery_pane_g1_ParamLimits

0x419c,	// (0x00050cdc) cell_gallery_pane_g1

0x95d9,	// (0x00056119) cell_gallery_pane_g2_ParamLimits

0x95d9,	// (0x00056119) cell_gallery_pane_g2

0x95e6,	// (0x00056126) cell_gallery_pane_g3_ParamLimits

0x95e6,	// (0x00056126) cell_gallery_pane_g3

0x41a8,	// (0x00050ce8) cell_gallery_pane_g4_ParamLimits

0x41a8,	// (0x00050ce8) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x0005c218) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x0005c218) cell_gallery_pane_g

0x41b4,	// (0x00050cf4) bg_cell_gallery_focus_pane_g1

0x41bc,	// (0x00050cfc) bg_cell_gallery_focus_pane_g2

0x41c4,	// (0x00050d04) bg_cell_gallery_focus_pane_g3

0x41cc,	// (0x00050d0c) bg_cell_gallery_focus_pane_g4

0x41d4,	// (0x00050d14) bg_cell_gallery_focus_pane_g5

0x41dc,	// (0x00050d1c) bg_cell_gallery_focus_pane_g6

0x41e4,	// (0x00050d24) bg_cell_gallery_focus_pane_g7

0x41ec,	// (0x00050d2c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x0005c221) bg_cell_gallery_focus_pane_g

0x41f4,	// (0x00050d34) aid_firma_cardinal

0x4208,	// (0x00050d48) blid_firmament_pane_t1

0x421f,	// (0x00050d5f) blid_firmament_pane_t2

0x4236,	// (0x00050d76) blid_firmament_pane_t3

0x424d,	// (0x00050d8d) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x0005c232) blid_firmament_pane_t

0x4264,	// (0x00050da4) blid_sat_info_pane

0x4274,	// (0x00050db4) blid_sat_info_pane_g1

0x4274,	// (0x00050db4) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x0005c23b) blid_sat_info_pane_g

0x4286,	// (0x00050dc6) blid_sat_info_pane_t1

0x4294,	// (0x00050dd4) smil2_volume_content_pane

0x429d,	// (0x00050ddd) smil2_volume_pane_g1

0x42a5,	// (0x00050de5) smil2_volume_content_pane_g1

0x42ae,	// (0x00050dee) smil2_volume_content_pane_g2

0x42b7,	// (0x00050df7) smil2_volume_content_pane_g3

0x42c0,	// (0x00050e00) smil2_volume_content_pane_g4

0x42c9,	// (0x00050e09) smil2_volume_content_pane_g5

0x42d2,	// (0x00050e12) smil2_volume_content_pane_g6

0x42db,	// (0x00050e1b) smil2_volume_content_pane_g7

0x42e4,	// (0x00050e24) smil2_volume_content_pane_g8

0x42ed,	// (0x00050e2d) smil2_volume_content_pane_g9

0x42f6,	// (0x00050e36) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x0005c240) smil2_volume_content_pane_g

0x64ef,	// (0x0005302f) cale_week_day_heading_pane_t1_ParamLimits

0x6503,	// (0x00053043) cale_week_day_heading_pane_t2_ParamLimits

0x6517,	// (0x00053057) cale_week_day_heading_pane_t3_ParamLimits

0x652b,	// (0x0005306b) cale_week_day_heading_pane_t4_ParamLimits

0x653f,	// (0x0005307f) cale_week_day_heading_pane_t5_ParamLimits

0x6553,	// (0x00053093) cale_week_day_heading_pane_t6_ParamLimits

0x6567,	// (0x000530a7) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0005bd2c) cale_week_day_heading_pane_t_ParamLimits

0x20cb,	// (0x0004ec0b) bg_cale_side_pane_ParamLimits

0x657b,	// (0x000530bb) cale_week_time_pane_t1_ParamLimits

0x6593,	// (0x000530d3) cale_week_time_pane_t2_ParamLimits

0x65ab,	// (0x000530eb) cale_week_time_pane_t3_ParamLimits

0x65c3,	// (0x00053103) cale_week_time_pane_t4_ParamLimits

0x65db,	// (0x0005311b) cale_week_time_pane_t5_ParamLimits

0x65f3,	// (0x00053133) cale_week_time_pane_t6_ParamLimits

0x6613,	// (0x00053153) cale_week_time_pane_t7_ParamLimits

0x6633,	// (0x00053173) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0005bd3b) cale_week_time_pane_t_ParamLimits

0x6653,	// (0x00053193) cell_cale_week_pane_g2_ParamLimits

0x20cb,	// (0x0004ec0b) bg_cale_side_pane_cp01_ParamLimits

0x76f5,	// (0x00054235) cale_month_week_pane_t1_ParamLimits

0x770c,	// (0x0005424c) cale_month_week_pane_t2_ParamLimits

0x7723,	// (0x00054263) cale_month_week_pane_t3_ParamLimits

0x773a,	// (0x0005427a) cale_month_week_pane_t4_ParamLimits

0x7751,	// (0x00054291) cale_month_week_pane_t5_ParamLimits

0x7770,	// (0x000542b0) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x0005be14) cale_month_week_pane_t_ParamLimits

0x785d,	// (0x0005439d) cell_cale_month_pane_g1_ParamLimits

0x017d,	// (0x0004ccbd) main_cale_event_viewer_pane

0x017d,	// (0x0004ccbd) listscroll_cale_event_viewer_pane

0x42ff,	// (0x00050e3f) list_cale_ev_pane

0x4307,	// (0x00050e47) scroll_pane_cp023

0x4313,	// (0x00050e53) field_cale_ev_pane_ParamLimits

0x4313,	// (0x00050e53) field_cale_ev_pane

0x432d,	// (0x00050e6d) field_cale_ev_content_pane_ParamLimits

0x432d,	// (0x00050e6d) field_cale_ev_content_pane

0x4339,	// (0x00050e79) field_cale_ev_pane_g1_ParamLimits

0x4339,	// (0x00050e79) field_cale_ev_pane_g1

0x4345,	// (0x00050e85) field_cale_ev_pane_g2_ParamLimits

0x4345,	// (0x00050e85) field_cale_ev_pane_g2

0x435d,	// (0x00050e9d) field_cale_ev_pane_g3_ParamLimits

0x435d,	// (0x00050e9d) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x0005c255) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x0005c255) field_cale_ev_pane_g

0x4375,	// (0x00050eb5) field_cale_ev_pane_t1_ParamLimits

0x4375,	// (0x00050eb5) field_cale_ev_pane_t1

0x438c,	// (0x00050ecc) field_cale_ev_content_pane_t1_ParamLimits

0x438c,	// (0x00050ecc) field_cale_ev_content_pane_t1

0x2b6c,	// (0x0004f6ac) bg_button_pane_cp01

0x1f79,	// (0x0004eab9) listscroll_cale_week_pane_ParamLimits

0x62c4,	// (0x00052e04) popup_toolbar_window_cp01

0x20b9,	// (0x0004ebf9) listscroll_cale_week_pane_t1_ParamLimits

0x1f79,	// (0x0004eab9) listscroll_cale_day_pane_ParamLimits

0x62c4,	// (0x00052e04) popup_toolbar_window_cp02

0x20b9,	// (0x0004ebf9) listscroll_cale_day_pane_t1_ParamLimits

0x1f79,	// (0x0004eab9) main_cale_month_pane_ParamLimits

0x8d23,	// (0x00055863) popup_toolbar_window_cp03_ParamLimits

0x8d23,	// (0x00055863) popup_toolbar_window_cp03

0x86a1,	// (0x000551e1) main_image_pane_g2_ParamLimits

0x86a1,	// (0x000551e1) main_image_pane_g2

0x86ad,	// (0x000551ed) main_image_pane_g3_ParamLimits

0x86ad,	// (0x000551ed) main_image_pane_g3

0x0002,

0xf506,	// (0x0005c046) main_image_pane_g_ParamLimits

0xf506,	// (0x0005c046) main_image_pane_g

0x2c86,	// (0x0004f7c6) main_image_pane_t1_ParamLimits

0x86b9,	// (0x000551f9) main_image_pane_t2_ParamLimits

0x86b9,	// (0x000551f9) main_image_pane_t2

0x86cb,	// (0x0005520b) main_image_pane_t3_ParamLimits

0x86cb,	// (0x0005520b) main_image_pane_t3

0x86dd,	// (0x0005521d) main_image_pane_t4_ParamLimits

0x86dd,	// (0x0005521d) main_image_pane_t4

0x0003,

0xf50d,	// (0x0005c04d) main_image_pane_t_ParamLimits

0xf50d,	// (0x0005c04d) main_image_pane_t

0x86ef,	// (0x0005522f) popup_image_details_window_cp01

0x86f9,	// (0x00055239) popup_toobar_trans_pane_cp01_ParamLimits

0x86f9,	// (0x00055239) popup_toobar_trans_pane_cp01

0x8ca8,	// (0x000557e8) popup_image_details_window_ParamLimits

0x8ca8,	// (0x000557e8) popup_image_details_window

0x3e4b,	// (0x0005098b) popup_image_focus_window

0x8fc6,	// (0x00055b06) camera2_autofocus_pane_ParamLimits

0x8fc6,	// (0x00055b06) camera2_autofocus_pane

0x017d,	// (0x0004ccbd) bg_popup_sub_pane_cp06

0x43a9,	// (0x00050ee9) popup_image_focus_window_g1

0x43b1,	// (0x00050ef1) popup_image_focus_window_g2

0x43b9,	// (0x00050ef9) popup_image_focus_window_g3

0x43c1,	// (0x00050f01) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x0005c25c) popup_image_focus_window_g

0x43c9,	// (0x00050f09) popup_image_focus_window_t1

0x43d7,	// (0x00050f17) popup_image_focus_window_t2

0x43e7,	// (0x00050f27) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x0005c265) popup_image_focus_window_t

0x43f5,	// (0x00050f35) camera2_autofocus_pane_g1

0x01f5,	// (0x0004cd35) bg_tb_trans_pane_cp01

0x4403,	// (0x00050f43) popup_image_details_window_g1

0x4416,	// (0x00050f56) popup_image_details_window_g2

0x0002,

0xf737,	// (0x0005c277) popup_image_details_window_g

0x443f,	// (0x00050f7f) popup_image_details_window_t1

0x4451,	// (0x00050f91) popup_image_details_window_t2

0x446a,	// (0x00050faa) popup_image_details_window_t3

0x447e,	// (0x00050fbe) popup_image_details_window_t4

0x4499,	// (0x00050fd9) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x0005c27e) popup_image_details_window_t

0x1f65,	// (0x0004eaa5) bg_calc_paper_pane_ParamLimits

0x6008,	// (0x00052b48) grid_highlight_pane_cp013

0x6012,	// (0x00052b52) list_calc_pane_ParamLimits

0x6024,	// (0x00052b64) scroll_pane_cp024

0x1f79,	// (0x0004eab9) bg_calc_display_pane_ParamLimits

0x602c,	// (0x00052b6c) calc_display_pane_t1_ParamLimits

0x6041,	// (0x00052b81) calc_display_pane_t2_ParamLimits

0x6056,	// (0x00052b96) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x0005bcae) calc_display_pane_t_ParamLimits

0x613d,	// (0x00052c7d) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x0005bccb) cell_calc_pane_g

0x6146,	// (0x00052c86) cell_calc_pane_t1

0x1fd8,	// (0x0004eb18) grid_highlight_pane_cp02_ParamLimits

0x1fee,	// (0x0004eb2e) toolbar_button_pane_cp01_ParamLimits

0x1fee,	// (0x0004eb2e) toolbar_button_pane_cp01

0x2ccb,	// (0x0004f80b) temp_image_control_pane_ParamLimits

0x2ccb,	// (0x0004f80b) temp_image_control_pane

0x01f5,	// (0x0004cd35) main_mp3_pane

0x44b3,	// (0x00050ff3) temp_image_control_pane_g1_ParamLimits

0x44b3,	// (0x00050ff3) temp_image_control_pane_g1

0x44c1,	// (0x00051001) temp_image_control_pane_g2_ParamLimits

0x44c1,	// (0x00051001) temp_image_control_pane_g2

0x44d3,	// (0x00051013) temp_image_control_pane_g3_ParamLimits

0x44d3,	// (0x00051013) temp_image_control_pane_g3

0x9623,	// (0x00056163) temp_image_control_pane_g4_ParamLimits

0x9623,	// (0x00056163) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x0005c289) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x0005c289) temp_image_control_pane_g

0x44b3,	// (0x00050ff3) main_mp3_pane_g1

0x9634,	// (0x00056174) main_mp3_pane_g2

0x0007,

0xf752,	// (0x0005c292) main_mp3_pane_g

0x4516,	// (0x00051056) main_mp3_pane_t1

0x213a,	// (0x0004ec7a) main_camera_pane_g8_ParamLimits

0x213a,	// (0x0004ec7a) main_camera_pane_g8

0x68db,	// (0x0005341b) main_video_pane_g7_ParamLimits

0x68db,	// (0x0005341b) main_video_pane_g7

0x910e,	// (0x00055c4e) main_camera2_pane_t7_ParamLimits

0x910e,	// (0x00055c4e) main_camera2_pane_t7

0x2282,	// (0x0004edc2) scroll_pane_cp025_ParamLimits

0x2282,	// (0x0004edc2) scroll_pane_cp025

0x2296,	// (0x0004edd6) scroll_pane_cp026_ParamLimits

0x2296,	// (0x0004edd6) scroll_pane_cp026

0x22a5,	// (0x0004ede5) wml_content_pane_ParamLimits

0x017d,	// (0x0004ccbd) main_touch_calib_pane

0x96d8,	// (0x00056218) main_touch_calib_pane_g1

0x96e4,	// (0x00056224) main_touch_calib_pane_g2

0x96f0,	// (0x00056230) main_touch_calib_pane_g3

0x96fc,	// (0x0005623c) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x0005c2b0) main_touch_calib_pane_g

0x9708,	// (0x00056248) main_touch_calib_pane_t1

0x971f,	// (0x0005625f) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x0005c2b9) main_touch_calib_pane_t

0x2936,	// (0x0004f476) mup_progress_pane_cp02

0x2955,	// (0x0004f495) navi_pane_g1

0x29b7,	// (0x0004f4f7) navi_pane_mp_t3

0x01f5,	// (0x0004cd35) main_mp3_pane_ParamLimits

0x8d61,	// (0x000558a1) navi_pane_ParamLimits

0x44b3,	// (0x00050ff3) main_mp3_pane_g1_ParamLimits

0x9634,	// (0x00056174) main_mp3_pane_g2_ParamLimits

0x9640,	// (0x00056180) main_mp3_pane_g3_ParamLimits

0x9640,	// (0x00056180) main_mp3_pane_g3

0x964c,	// (0x0005618c) main_mp3_pane_g4_ParamLimits

0x964c,	// (0x0005618c) main_mp3_pane_g4

0x44e3,	// (0x00051023) main_mp3_pane_g5_ParamLimits

0x44e3,	// (0x00051023) main_mp3_pane_g5

0x44f1,	// (0x00051031) main_mp3_pane_g6_ParamLimits

0x44f1,	// (0x00051031) main_mp3_pane_g6

0x44fe,	// (0x0005103e) main_mp3_pane_g7_ParamLimits

0x44fe,	// (0x0005103e) main_mp3_pane_g7

0x450a,	// (0x0005104a) main_mp3_pane_g8_ParamLimits

0x450a,	// (0x0005104a) main_mp3_pane_g8

0xf752,	// (0x0005c292) main_mp3_pane_g_ParamLimits

0x9658,	// (0x00056198) main_mp3_pane_t2

0x9668,	// (0x000561a8) main_mp3_pane_t3

0x4524,	// (0x00051064) main_mp3_pane_t4

0x4532,	// (0x00051072) main_mp3_pane_t5

0x0005,

0xf763,	// (0x0005c2a3) main_mp3_pane_t

0x4540,	// (0x00051080) mup_progress_pane_cp01

0x01ab,	// (0x0004cceb) aid_zoom_text_secondary2

0x42ff,	// (0x00050e3f) list_cale_ev2_pane

0x4307,	// (0x00050e47) scroll_pane_cp023_ParamLimits

0x9772,	// (0x000562b2) field_cale_ev2_pane_ParamLimits

0x9772,	// (0x000562b2) field_cale_ev2_pane

0x063a,	// (0x0004d17a) field_cale_ev2_pane_g1_ParamLimits

0x063a,	// (0x0004d17a) field_cale_ev2_pane_g1

0x0646,	// (0x0004d186) field_cale_ev2_pane_g2_ParamLimits

0x0646,	// (0x0004d186) field_cale_ev2_pane_g2

0x065e,	// (0x0004d19e) field_cale_ev2_pane_g3_ParamLimits

0x065e,	// (0x0004d19e) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x0005c2c4) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x0005c2c4) field_cale_ev2_pane_g

0x97a6,	// (0x000562e6) field_cale_ev2_pane_t1_ParamLimits

0x97a6,	// (0x000562e6) field_cale_ev2_pane_t1

0x97bd,	// (0x000562fd) field_cale_ev2_pane_t2_ParamLimits

0x97bd,	// (0x000562fd) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x0005c2cd) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x0005c2cd) field_cale_ev2_pane_t

0x8578,	// (0x000550b8) main_postcard_pane_g5_ParamLimits

0x8578,	// (0x000550b8) main_postcard_pane_g5

0x8586,	// (0x000550c6) main_postcard_pane_g6_ParamLimits

0x8586,	// (0x000550c6) main_postcard_pane_g6

0x671b,	// (0x0005325b) camera2_autofocus_pane_cp_ParamLimits

0x671b,	// (0x0005325b) camera2_autofocus_pane_cp

0x01f5,	// (0x0004cd35) main_mup3_pane

0x97f2,	// (0x00056332) main_mup3_pane_g1_ParamLimits

0x97f2,	// (0x00056332) main_mup3_pane_g1

0x9813,	// (0x00056353) main_mup3_pane_g2_ParamLimits

0x9813,	// (0x00056353) main_mup3_pane_g2

0x9892,	// (0x000563d2) main_mup3_pane_g3_ParamLimits

0x9892,	// (0x000563d2) main_mup3_pane_g3

0x98d5,	// (0x00056415) main_mup3_pane_g4_ParamLimits

0x98d5,	// (0x00056415) main_mup3_pane_g4

0x9918,	// (0x00056458) main_mup3_pane_g5_ParamLimits

0x9918,	// (0x00056458) main_mup3_pane_g5

0x995d,	// (0x0005649d) main_mup3_pane_g6_ParamLimits

0x995d,	// (0x0005649d) main_mup3_pane_g6

0x4548,	// (0x00051088) main_mup3_pane_g7_ParamLimits

0x4548,	// (0x00051088) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x0005c2dd) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x0005c2dd) main_mup3_pane_g

0x99d3,	// (0x00056513) main_mup3_pane_t1_ParamLimits

0x99d3,	// (0x00056513) main_mup3_pane_t1

0x9a42,	// (0x00056582) main_mup3_pane_t2_ParamLimits

0x9a42,	// (0x00056582) main_mup3_pane_t2

0x9b0b,	// (0x0005664b) main_mup3_pane_t4_ParamLimits

0x9b0b,	// (0x0005664b) main_mup3_pane_t4

0x9b5f,	// (0x0005669f) main_mup3_pane_t5_ParamLimits

0x9b5f,	// (0x0005669f) main_mup3_pane_t5

0x9c0f,	// (0x0005674f) main_mup3_pane_t6_ParamLimits

0x9c0f,	// (0x0005674f) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x0005c2ee) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x0005c2ee) main_mup3_pane_t

0x9cbb,	// (0x000567fb) mup3_progress_pane_ParamLimits

0x9cbb,	// (0x000567fb) mup3_progress_pane

0x9d2f,	// (0x0005686f) popup_mup3_control_window_ParamLimits

0x9d2f,	// (0x0005686f) popup_mup3_control_window

0x4556,	// (0x00051096) popup_mup3_text_window

0x9d48,	// (0x00056888) mup3_progress_pane_t1

0x9d67,	// (0x000568a7) mup3_progress_pane_t2

0x455e,	// (0x0005109e) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x0005c2fb) mup3_progress_pane_t

0x457b,	// (0x000510bb) mup_progress_pane_cp03

0x017d,	// (0x0004ccbd) bg_tb_trans_pane_cp04

0x9d86,	// (0x000568c6) mup3_volume_pane

0x9d8e,	// (0x000568ce) popup_mup3_control_window_g1

0x9d97,	// (0x000568d7) mup3_volume_pane_g1

0x9da0,	// (0x000568e0) mup3_volume_pane_g2

0x9da9,	// (0x000568e9) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x0005c302) mup3_volume_pane_g

0x017d,	// (0x0004ccbd) bg_tb_trans_pane_cp03

0x458b,	// (0x000510cb) popup_mup3_text_window_g1

0x4593,	// (0x000510d3) popup_mup3_text_window_t1

0x1fc1,	// (0x0004eb01) list_calc_item_pane_g1_ParamLimits

0x3fc5,	// (0x00050b05) mup_volume_pane_cp_g1

0x9736,	// (0x00056276) main_touch_calib_pane_t3

0x974a,	// (0x0005628a) main_touch_calib_pane_t4

0x975e,	// (0x0005629e) main_touch_calib_pane_t5

0x0187,	// (0x0004ccc7) aid_cell_size_toolbar2

0x018f,	// (0x0004cccf) aid_popup3_width_pane

0x019b,	// (0x0004ccdb) aid_zoom_text_msg_primary

0x6705,	// (0x00053245) vorec_t7

0x1f85,	// (0x0004eac5) bg_calc_paper_pane_g1_ParamLimits

0x1f9d,	// (0x0004eadd) bg_calc_paper_pane_g2_ParamLimits

0x1f91,	// (0x0004ead1) bg_calc_paper_pane_g3_ParamLimits

0x1fb5,	// (0x0004eaf5) bg_calc_paper_pane_g4_ParamLimits

0x1fa9,	// (0x0004eae9) bg_calc_paper_pane_g5_ParamLimits

0x6095,	// (0x00052bd5) bg_calc_paper_pane_g6_ParamLimits

0x60a6,	// (0x00052be6) bg_calc_paper_pane_g7_ParamLimits

0x60b7,	// (0x00052bf7) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x0005bcb5) bg_calc_paper_pane_g_ParamLimits

0x60c8,	// (0x00052c08) calc_bg_paper_pane_g9_ParamLimits

0x6804,	// (0x00053344) image_qvga_pane_ParamLimits

0x6804,	// (0x00053344) image_qvga_pane

0x1e62,	// (0x0004e9a2) bg_popup_sub_pane_cp04_ParamLimits

0x2c02,	// (0x0004f742) popup_mup_playback_window_g1_ParamLimits

0x2c0e,	// (0x0004f74e) popup_mup_playback_window_t1_ParamLimits

0x2c23,	// (0x0004f763) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x0005c041) popup_mup_playback_window_t_ParamLimits

0x923d,	// (0x00055d7d) main_mup2_pane_g3_ParamLimits

0x923d,	// (0x00055d7d) main_mup2_pane_g3

0x6b16,	// (0x00053656) popup_toolbar_window_cp04

0x3018,	// (0x0004fb58) popup_call2_audio_second_window_g3_ParamLimits

0x3018,	// (0x0004fb58) popup_call2_audio_second_window_g3

0x342e,	// (0x0004ff6e) popup_call2_audio_first_window_g4_ParamLimits

0x342e,	// (0x0004ff6e) popup_call2_audio_first_window_g4

0x3ac2,	// (0x00050602) popup_call2_audio_in_window_g4_ParamLimits

0x3ac2,	// (0x00050602) popup_call2_audio_in_window_g4

0x8694,	// (0x000551d4) aid_area_sk_bg_cut_ParamLimits

0x8694,	// (0x000551d4) aid_area_sk_bg_cut

0x2c38,	// (0x0004f778) aid_area_sk_bg_cut_2_ParamLimits

0x2c38,	// (0x0004f778) aid_area_sk_bg_cut_2

0x95c9,	// (0x00056109) aid_placing_details_win

0x95d1,	// (0x00056111) aid_placing_details_win_2

0x43f5,	// (0x00050f35) camera2_autofocus_pane_g1_ParamLimits

0x5c80,	// (0x000527c0) popup_fixed_preview_cale_window_ParamLimits

0x5c80,	// (0x000527c0) popup_fixed_preview_cale_window

0x2a26,	// (0x0004f566) navi_slider_pane_g3

0x2a1d,	// (0x0004f55d) navi_slider_pane_g4

0x2a14,	// (0x0004f554) navi_slider_pane_g5

0x2a26,	// (0x0004f566) navi_slider_pane_g6

0x7f0b,	// (0x00054a4b) navi_slider_pane_g7

0x2b39,	// (0x0004f679) mup_scale_pane_g3

0x2b42,	// (0x0004f682) mup_scale_pane_g4

0x2b4b,	// (0x0004f68b) mup_scale_pane_g5

0x834a,	// (0x00054e8a) mup_scale_pane_g6

0x8353,	// (0x00054e93) mup_scale_pane_g7

0x2a26,	// (0x0004f566) cams2_slider_pane_g3

0x4047,	// (0x00050b87) cams2_slider_pane_g4

0x9521,	// (0x00056061) cams2_slider_pane_g5

0x2a26,	// (0x0004f566) cams2_slider_pane_g6

0x9529,	// (0x00056069) cams2_slider_pane_g7

0x4274,	// (0x00050db4) camera2_autofocus_pane_cp_g1

0x45a1,	// (0x000510e1) bg_popup_preview_window_pane_cp02_ParamLimits

0x45a1,	// (0x000510e1) bg_popup_preview_window_pane_cp02

0x45ad,	// (0x000510ed) list_fp_cale_pane_ParamLimits

0x45ad,	// (0x000510ed) list_fp_cale_pane

0x45b9,	// (0x000510f9) popup_fixed_preview_cale_window_t1_ParamLimits

0x45b9,	// (0x000510f9) popup_fixed_preview_cale_window_t1

0x9db2,	// (0x000568f2) popup_fixed_preview_cale_window_t2_ParamLimits

0x9db2,	// (0x000568f2) popup_fixed_preview_cale_window_t2

0x9dc7,	// (0x00056907) popup_fixed_preview_cale_window_t3_ParamLimits

0x9dc7,	// (0x00056907) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x0005c309) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x0005c309) popup_fixed_preview_cale_window_t

0x9ddc,	// (0x0005691c) list_single_fp_cale_pane_ParamLimits

0x9ddc,	// (0x0005691c) list_single_fp_cale_pane

0x45d7,	// (0x00051117) list_single_fp_cale_pane_g1_ParamLimits

0x45d7,	// (0x00051117) list_single_fp_cale_pane_g1

0x45e3,	// (0x00051123) list_single_fp_cale_pane_g2_ParamLimits

0x45e3,	// (0x00051123) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x0005c310) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x0005c310) list_single_fp_cale_pane_g

0x45fc,	// (0x0005113c) list_single_fp_cale_pane_t1_ParamLimits

0x45fc,	// (0x0005113c) list_single_fp_cale_pane_t1

0x460e,	// (0x0005114e) list_single_fp_cale_pane_t2_ParamLimits

0x460e,	// (0x0005114e) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x0005c317) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x0005c317) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x017d,	// (0x0004ccbd) main_dialer_pane

0x9df1,	// (0x00056931) aid_cell_size_keypad

0x9dfb,	// (0x0005693b) dialer_ne_pane

0x9e05,	// (0x00056945) grid_dialer_command_1_pane

0x9e0d,	// (0x0005694d) grid_dialer_command_2_pane

0x9e15,	// (0x00056955) grid_dialer_keypad_pane

0x9e29,	// (0x00056969) bg_popup_call_pane_cp06_ParamLimits

0x9e29,	// (0x00056969) bg_popup_call_pane_cp06

0x9e35,	// (0x00056975) dialer_ne_clear_pane_ParamLimits

0x9e35,	// (0x00056975) dialer_ne_clear_pane

0x4641,	// (0x00051181) dialer_ne_pane_g1

0x4649,	// (0x00051189) dialer_ne_pane_t1_ParamLimits

0x4649,	// (0x00051189) dialer_ne_pane_t1

0x9e41,	// (0x00056981) dialer_ne_pane_t2_ParamLimits

0x9e41,	// (0x00056981) dialer_ne_pane_t2

0x9e5e,	// (0x0005699e) dialer_ne_pane_t3_ParamLimits

0x9e5e,	// (0x0005699e) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x0005c31c) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x0005c31c) dialer_ne_pane_t

0x9e82,	// (0x000569c2) dialer_ne_pane_t3_copy1_ParamLimits

0x9e82,	// (0x000569c2) dialer_ne_pane_t3_copy1

0x9ea6,	// (0x000569e6) cell_dialer_keypad_pane_ParamLimits

0x9ea6,	// (0x000569e6) cell_dialer_keypad_pane

0x9ebd,	// (0x000569fd) cell_dialer_command_1_pane_ParamLimits

0x9ebd,	// (0x000569fd) cell_dialer_command_1_pane

0x9ed3,	// (0x00056a13) cell_dialer_command_2_pane_ParamLimits

0x9ed3,	// (0x00056a13) cell_dialer_command_2_pane

0x465b,	// (0x0005119b) bg_button_pane_cp02_ParamLimits

0x465b,	// (0x0005119b) bg_button_pane_cp02

0x9ee2,	// (0x00056a22) cell_dialer_keypad_pane_g1_ParamLimits

0x9ee2,	// (0x00056a22) cell_dialer_keypad_pane_g1

0x465b,	// (0x0005119b) bg_button_pane_cp03_ParamLimits

0x465b,	// (0x0005119b) bg_button_pane_cp03

0x9ef7,	// (0x00056a37) cell_dialer_command_1_pane_g1_ParamLimits

0x9ef7,	// (0x00056a37) cell_dialer_command_1_pane_g1

0x4667,	// (0x000511a7) bg_button_pane_cp04

0x9f0b,	// (0x00056a4b) cell_dialer_command_2_pane_g1

0x2a03,	// (0x0004f543) bg_button_pane_cp06

0x466f,	// (0x000511af) dialer_ne_clear_pane_g1

0x7e4e,	// (0x0005498e) navi_pane_g2

0x7e7c,	// (0x000549bc) navi_pane_g3

0x0002,

0xf404,	// (0x0005bf44) navi_pane_g

0x7ea7,	// (0x000549e7) navi_pane_mv_g2

0x7ece,	// (0x00054a0e) navi_pane_mv_g5

0x7ed6,	// (0x00054a16) navi_pane_mv_t1

0x1f79,	// (0x0004eab9) main_clock2_pane

0x9f3e,	// (0x00056a7e) main_clock2_list_pane_ParamLimits

0x9f3e,	// (0x00056a7e) main_clock2_list_pane

0x9f68,	// (0x00056aa8) main_clock2_pane_t1_ParamLimits

0x9f68,	// (0x00056aa8) main_clock2_pane_t1

0x9f8c,	// (0x00056acc) main_clock2_pane_t2_ParamLimits

0x9f8c,	// (0x00056acc) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x0005c323) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x0005c323) main_clock2_pane_t

0x9fe7,	// (0x00056b27) popup_clock_analogue_window_cp03_ParamLimits

0x9fe7,	// (0x00056b27) popup_clock_analogue_window_cp03

0xa007,	// (0x00056b47) popup_clock_digital_window_cp02_ParamLimits

0xa007,	// (0x00056b47) popup_clock_digital_window_cp02

0xa07c,	// (0x00056bbc) main_clock2_list_single_pane_ParamLimits

0xa07c,	// (0x00056bbc) main_clock2_list_single_pane

0x2a03,	// (0x0004f543) list_highlight_pane_cp05

0x4677,	// (0x000511b7) main_clock2_list_single_pane_t1

0x6b16,	// (0x00053656) popup_toolbar_window_cp04_ParamLimits

0x95f3,	// (0x00056133) camera2_autofocus_pane_g2_ParamLimits

0x95f3,	// (0x00056133) camera2_autofocus_pane_g2

0x95ff,	// (0x0005613f) camera2_autofocus_pane_g3_ParamLimits

0x95ff,	// (0x0005613f) camera2_autofocus_pane_g3

0x960b,	// (0x0005614b) camera2_autofocus_pane_g4_ParamLimits

0x960b,	// (0x0005614b) camera2_autofocus_pane_g4

0x9617,	// (0x00056157) camera2_autofocus_pane_g5_ParamLimits

0x9617,	// (0x00056157) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x0005c26c) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x0005c26c) camera2_autofocus_pane_g

0x97d2,	// (0x00056312) camera2_autofocus_pane_cp_g2

0x97da,	// (0x0005631a) camera2_autofocus_pane_cp_g3

0x97e2,	// (0x00056322) camera2_autofocus_pane_cp_g4

0x97ea,	// (0x0005632a) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x0005c2d2) camera2_autofocus_pane_cp_g

0x9e21,	// (0x00056961) popup_dialer_spcha_window

0x017d,	// (0x0004ccbd) bg_popup_sub_pane_cp07

0x4685,	// (0x000511c5) list_spcha_pane

0x468d,	// (0x000511cd) list_single_spcha_pane_ParamLimits

0x468d,	// (0x000511cd) list_single_spcha_pane

0x017d,	// (0x0004ccbd) list_highlight_pane_cp06

0x469e,	// (0x000511de) list_single_spcha_pane_t1

0x3863,	// (0x000503a3) popup_call2_audio_out_window_g4_ParamLimits

0x3863,	// (0x000503a3) popup_call2_audio_out_window_g4

0x017d,	// (0x0004ccbd) main_imed2_pane

0x3e53,	// (0x00050993) popup_imed_adjust2_window

0x8cb6,	// (0x000557f6) popup_imed_trans_window_ParamLimits

0x8cb6,	// (0x000557f6) popup_imed_trans_window

0x40b0,	// (0x00050bf0) popup_blid_sat_info2_window_t1

0x40be,	// (0x00050bfe) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x0005c201) popup_blid_sat_info2_window_t

0xa126,	// (0x00056c66) aid_size_cell_colour_35

0xa140,	// (0x00056c80) aid_size_cell_colour_112

0xa157,	// (0x00056c97) aid_size_cell_effect

0x01f5,	// (0x0004cd35) bg_tb_trans_pane_cp02

0x334e,	// (0x0004fe8e) heading_imed_pane

0xa171,	// (0x00056cb1) listscroll_imed_pane

0x46ac,	// (0x000511ec) heading_imed_pane_g1

0x46b4,	// (0x000511f4) heading_imed_pane_t1

0x46c2,	// (0x00051202) grid_imed_colour_35_pane_ParamLimits

0x46c2,	// (0x00051202) grid_imed_colour_35_pane

0xa17d,	// (0x00056cbd) grid_imed_effect_pane

0x46dd,	// (0x0005121d) list_imed_aspect_pane

0xa18d,	// (0x00056ccd) scroll_pane_cp027_ParamLimits

0xa18d,	// (0x00056ccd) scroll_pane_cp027

0xa199,	// (0x00056cd9) cell_imed_effect_pane_ParamLimits

0xa199,	// (0x00056cd9) cell_imed_effect_pane

0x46e5,	// (0x00051225) cell_imed_colour_pane_ParamLimits

0x46e5,	// (0x00051225) cell_imed_colour_pane

0x4727,	// (0x00051267) cell_imed_colour_pane_g1_ParamLimits

0x4727,	// (0x00051267) cell_imed_colour_pane_g1

0x4738,	// (0x00051278) hgihlgiht_grid_pane_cp016_ParamLimits

0x4738,	// (0x00051278) hgihlgiht_grid_pane_cp016

0xa1b1,	// (0x00056cf1) cell_imed_effect_pane_g1

0xa1b9,	// (0x00056cf9) grid_highlight_pane_cp017

0x4749,	// (0x00051289) list_imed_single_pane_ParamLimits

0x4749,	// (0x00051289) list_imed_single_pane

0x017d,	// (0x0004ccbd) list_highlight_pane_cp07

0x4760,	// (0x000512a0) list_imed_aspect_pane_comp1_t1

0x3e2b,	// (0x0005096b) bg_tb_trans_pane_cp05

0x4782,	// (0x000512c2) popup_imed_adjust2_window_g1

0x47a9,	// (0x000512e9) popup_imed_adjust2_window_t1

0x47c1,	// (0x00051301) slider_imed_adjust_pane

0x47d5,	// (0x00051315) slider_imed_adjust_pane_g1

0x47e5,	// (0x00051325) slider_imed_adjust_pane_g2

0x47f5,	// (0x00051335) slider_imed_adjust_pane_g3

0x4806,	// (0x00051346) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x0005c340) slider_imed_adjust_pane_g

0xa1c2,	// (0x00056d02) aid_size_cell_clipart2

0xa1ce,	// (0x00056d0e) grid_imed_clipart_pane

0x4817,	// (0x00051357) scroll_pane_cp031

0xa1d8,	// (0x00056d18) cell_imed_clipart_pane_ParamLimits

0xa1d8,	// (0x00056d18) cell_imed_clipart_pane

0xa1ff,	// (0x00056d3f) cell_imed_clipart_pane_g1

0x017d,	// (0x0004ccbd) grid_highlight_pane_cp014

0x9f4a,	// (0x00056a8a) main_clock2_pane_g1_ParamLimits

0x9f4a,	// (0x00056a8a) main_clock2_pane_g1

0xa023,	// (0x00056b63) aid_call2_pane_cp10

0xa035,	// (0x00056b75) aid_call_pane_cp10

0x292a,	// (0x0004f46a) popup_clock_analogue_window_cp10_g1

0x292a,	// (0x0004f46a) popup_clock_analogue_window_cp10_g2

0xa047,	// (0x00056b87) popup_clock_analogue_window_cp10_g3

0xa047,	// (0x00056b87) popup_clock_analogue_window_cp10_g4

0x292a,	// (0x0004f46a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x0005c32e) popup_clock_analogue_window_cp10_g

0xa05d,	// (0x00056b9d) popup_clock_analogue_window_cp10_t1

0xa08e,	// (0x00056bce) clock_digital_number_pane_cp10_ParamLimits

0xa08e,	// (0x00056bce) clock_digital_number_pane_cp10

0xa0a6,	// (0x00056be6) clock_digital_number_pane_cp11_ParamLimits

0xa0a6,	// (0x00056be6) clock_digital_number_pane_cp11

0xa0be,	// (0x00056bfe) clock_digital_number_pane_cp12_ParamLimits

0xa0be,	// (0x00056bfe) clock_digital_number_pane_cp12

0xa0d6,	// (0x00056c16) clock_digital_number_pane_cp13_ParamLimits

0xa0d6,	// (0x00056c16) clock_digital_number_pane_cp13

0xa0ee,	// (0x00056c2e) clock_digital_separator_pane_cp10_ParamLimits

0xa0ee,	// (0x00056c2e) clock_digital_separator_pane_cp10

0xa106,	// (0x00056c46) popup_clock_digital_window_cp02_t1_ParamLimits

0xa106,	// (0x00056c46) popup_clock_digital_window_cp02_t1

0x1e5a,	// (0x0004e99a) clock_digital_number_pane_cp10_g1

0x1e5a,	// (0x0004e99a) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x0005c349) clock_digital_number_pane_cp10_g

0x1e5a,	// (0x0004e99a) clock_digital_separator_pane_cp10_g1

0x1e5a,	// (0x0004e99a) clock_digital_separator_pane_g2_cp10

0x29c5,	// (0x0004f505) navi_pane_vded_g4

0x29ce,	// (0x0004f50e) navi_pane_vded_g5

0x29d7,	// (0x0004f517) navi_pane_vded_t1

0x017d,	// (0x0004ccbd) main_vded_pane

0xa208,	// (0x00056d48) main_vded_pane_g1

0xa214,	// (0x00056d54) main_vded_pane_g2

0xa21e,	// (0x00056d5e) main_vded_pane_g3

0x0002,

0xf80e,	// (0x0005c34e) main_vded_pane_g

0xa228,	// (0x00056d68) main_vded_pane_t1

0xa236,	// (0x00056d76) main_vded_pane_t2

0x0001,

0xf815,	// (0x0005c355) main_vded_pane_t

0xa244,	// (0x00056d84) vded_slider_pane

0xa24e,	// (0x00056d8e) vded_video_pane

0x481f,	// (0x0005135f) vded_video_pane_g1

0xa258,	// (0x00056d98) vded_video_pane_g2

0x4274,	// (0x00050db4) vded_video_pane_g3

0x0002,

0xf81a,	// (0x0005c35a) vded_video_pane_g

0x4829,	// (0x00051369) vded_slider_pane_g1

0x3fc5,	// (0x00050b05) vded_slider_pane_g2

0x4832,	// (0x00051372) vded_slider_pane_g3

0x483b,	// (0x0005137b) vded_slider_pane_g4

0x4844,	// (0x00051384) vded_slider_pane_g5

0x0004,

0xf821,	// (0x0005c361) vded_slider_pane_g

0x9d21,	// (0x00056861) mup3_rocker_pane_ParamLimits

0x9d21,	// (0x00056861) mup3_rocker_pane

0xa261,	// (0x00056da1) mup3_control_keys_pane_g1

0xa269,	// (0x00056da9) mup3_control_keys_pane_g2

0xa271,	// (0x00056db1) mup3_control_keys_pane_g3

0xa279,	// (0x00056db9) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x0005c36c) mup3_control_keys_pane_g

0x5c9e,	// (0x000527de) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5c9e,	// (0x000527de) popup_toolbar2_fixed_window_cp01

0x9d3b,	// (0x0005687b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9d3b,	// (0x0005687b) popup_toolbar2_fixed_window_cp02

0x318a,	// (0x0004fcca) popup_call2_audio_second_window_t4_ParamLimits

0x318a,	// (0x0004fcca) popup_call2_audio_second_window_t4

0x36d0,	// (0x00050210) popup_call2_audio_first_window_t6_ParamLimits

0x36d0,	// (0x00050210) popup_call2_audio_first_window_t6

0x3966,	// (0x000504a6) popup_call2_audio_out_window_t6_ParamLimits

0x3966,	// (0x000504a6) popup_call2_audio_out_window_t6

0x017d,	// (0x0004ccbd) main_vitu_pane

0xa289,	// (0x00056dc9) aid_size_cell_itu_ParamLimits

0xa289,	// (0x00056dc9) aid_size_cell_itu

0x097a,	// (0x0004d4ba) bg_popup_window_pane_cp08_ParamLimits

0x097a,	// (0x0004d4ba) bg_popup_window_pane_cp08

0xa297,	// (0x00056dd7) field_vitu_entry_pane_ParamLimits

0xa297,	// (0x00056dd7) field_vitu_entry_pane

0xa2a6,	// (0x00056de6) grid_vitu_function_pane_ParamLimits

0xa2a6,	// (0x00056de6) grid_vitu_function_pane

0xa2b6,	// (0x00056df6) grid_vitu_itu_pane_ParamLimits

0xa2b6,	// (0x00056df6) grid_vitu_itu_pane

0xa2c6,	// (0x00056e06) cell_vitu_itu_pane_ParamLimits

0xa2c6,	// (0x00056e06) cell_vitu_itu_pane

0xa2db,	// (0x00056e1b) cell_vitu_function_pane_ParamLimits

0xa2db,	// (0x00056e1b) cell_vitu_function_pane

0x01f5,	// (0x0004cd35) bg_popup_sub_pane_cp08_ParamLimits

0x01f5,	// (0x0004cd35) bg_popup_sub_pane_cp08

0xa2ef,	// (0x00056e2f) field_vitu_entry_pane_t1_ParamLimits

0xa2ef,	// (0x00056e2f) field_vitu_entry_pane_t1

0x4865,	// (0x000513a5) field_vitu_entry_pane_t2_ParamLimits

0x4865,	// (0x000513a5) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x0005c37a) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x0005c37a) field_vitu_entry_pane_t

0x4882,	// (0x000513c2) bg_button_pane_cp05_ParamLimits

0x4882,	// (0x000513c2) bg_button_pane_cp05

0xa30d,	// (0x00056e4d) cell_vitu_itu_pane_g1

0xa325,	// (0x00056e65) cell_vitu_itu_pane_t1_ParamLimits

0xa325,	// (0x00056e65) cell_vitu_itu_pane_t1

0xa337,	// (0x00056e77) cell_vitu_itu_pane_t2_ParamLimits

0xa337,	// (0x00056e77) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x0005c37f) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x0005c37f) cell_vitu_itu_pane_t

0x4890,	// (0x000513d0) bg_button_pane_cp07

0xa36c,	// (0x00056eac) cell_vitu_function_pane_g1

0x5f2f,	// (0x00052a6f) main_calc_pane_g1

0x5aa7,	// (0x000525e7) aid_visual_content_pane

0x017d,	// (0x0004ccbd) main_vradio_pane

0xa375,	// (0x00056eb5) main_vradio_pane_g1_ParamLimits

0xa375,	// (0x00056eb5) main_vradio_pane_g1

0x489a,	// (0x000513da) main_vradio_pane_g2_ParamLimits

0x489a,	// (0x000513da) main_vradio_pane_g2

0x0001,

0xf846,	// (0x0005c386) main_vradio_pane_g_ParamLimits

0xf846,	// (0x0005c386) main_vradio_pane_g

0xa385,	// (0x00056ec5) main_vradio_pane_t1_ParamLimits

0xa385,	// (0x00056ec5) main_vradio_pane_t1

0xa397,	// (0x00056ed7) main_vradio_pane_t2_ParamLimits

0xa397,	// (0x00056ed7) main_vradio_pane_t2

0x48a7,	// (0x000513e7) main_vradio_pane_t3_ParamLimits

0x48a7,	// (0x000513e7) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x0005c38b) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x0005c38b) main_vradio_pane_t

0xa3a9,	// (0x00056ee9) vradio_rocker_control_pane_ParamLimits

0xa3a9,	// (0x00056ee9) vradio_rocker_control_pane

0xa3b5,	// (0x00056ef5) vradio_station_info_pane_ParamLimits

0xa3b5,	// (0x00056ef5) vradio_station_info_pane

0x48bb,	// (0x000513fb) vradio_frequency_info_pane_ParamLimits

0x48bb,	// (0x000513fb) vradio_frequency_info_pane

0x4274,	// (0x00050db4) vradio_station_info_pane_g1

0x48ca,	// (0x0005140a) vradio_station_info_pane_t1_ParamLimits

0x48ca,	// (0x0005140a) vradio_station_info_pane_t1

0x48ec,	// (0x0005142c) vradio_station_info_pane_t2_ParamLimits

0x48ec,	// (0x0005142c) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x0005c392) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x0005c392) vradio_station_info_pane_t

0x48fe,	// (0x0005143e) vradio_tuning_pane

0x4906,	// (0x00051446) vradio_rocker_control_pane_g1

0x490e,	// (0x0005144e) vradio_rocker_control_pane_g2

0x4916,	// (0x00051456) vradio_rocker_control_pane_g3

0x491e,	// (0x0005145e) vradio_rocker_control_pane_g4

0x4926,	// (0x00051466) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x0005c397) vradio_rocker_control_pane_g

0xa3c4,	// (0x00056f04) vradio_frequency_info_pane_g1

0x492e,	// (0x0005146e) vradio_frequency_info_pane_t1_ParamLimits

0x492e,	// (0x0005146e) vradio_frequency_info_pane_t1

0xa3ce,	// (0x00056f0e) vradio_tuning_pane_g1

0xa3d7,	// (0x00056f17) vradio_tuning_pane_t1

0x01b3,	// (0x0004ccf3) area_side_right_pane_ParamLimits

0x01b3,	// (0x0004ccf3) area_side_right_pane

0x3df2,	// (0x00050932) status_small_pane_g1

0x3dfa,	// (0x0005093a) status_small_pane_g2

0x3e03,	// (0x00050943) status_small_pane_g3

0x3e0c,	// (0x0005094c) status_small_pane_g4

0x0003,

0xf617,	// (0x0005c157) status_small_pane_g

0x3e15,	// (0x00050955) status_small_pane_t1

0x017d,	// (0x0004ccbd) main_video3_pane

0x4942,	// (0x00051482) cams_zoom_vslider_pane

0x494a,	// (0x0005148a) image3_wide_pane_ParamLimits

0x494a,	// (0x0005148a) image3_wide_pane

0x4964,	// (0x000514a4) image3_wide_small_pane

0x4970,	// (0x000514b0) main_video3_pane_g1_ParamLimits

0x4970,	// (0x000514b0) main_video3_pane_g1

0x498c,	// (0x000514cc) main_video3_pane_g2_ParamLimits

0x498c,	// (0x000514cc) main_video3_pane_g2

0x0001,

0xf862,	// (0x0005c3a2) main_video3_pane_g_ParamLimits

0xf862,	// (0x0005c3a2) main_video3_pane_g

0x49a8,	// (0x000514e8) main_video3_pane_t1_ParamLimits

0x49a8,	// (0x000514e8) main_video3_pane_t1

0x49d3,	// (0x00051513) main_video3_pane_t2_ParamLimits

0x49d3,	// (0x00051513) main_video3_pane_t2

0x49fe,	// (0x0005153e) main_video3_pane_t3_ParamLimits

0x49fe,	// (0x0005153e) main_video3_pane_t3

0x0002,

0xf867,	// (0x0005c3a7) main_video3_pane_t_ParamLimits

0xf867,	// (0x0005c3a7) main_video3_pane_t

0x4a2b,	// (0x0005156b) cams_zoom_vslider_pane_g1

0x4a34,	// (0x00051574) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x0005c3ae) cams_zoom_vslider_pane_g

0x4a3c,	// (0x0005157c) small_slider_vertical_pane

0x4274,	// (0x00050db4) small_slider_vertical_pane_g1

0x4274,	// (0x00050db4) small_slider_vertical_pane_g2

0x4a44,	// (0x00051584) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x0005c3b3) small_slider_vertical_pane_g

0x017d,	// (0x0004ccbd) main_hwr_training_pane

0x4a4d,	// (0x0005158d) hwr_training_instruct_pane_ParamLimits

0x4a4d,	// (0x0005158d) hwr_training_instruct_pane

0xa3e6,	// (0x00056f26) hwr_training_navi_pane_ParamLimits

0xa3e6,	// (0x00056f26) hwr_training_navi_pane

0xa400,	// (0x00056f40) hwr_training_write_pane_ParamLimits

0xa400,	// (0x00056f40) hwr_training_write_pane

0x017d,	// (0x0004ccbd) bg_frame_shadow_pane

0x4a84,	// (0x000515c4) hwr_training_write_pane_g1

0x4a8c,	// (0x000515cc) hwr_training_write_pane_g2

0x4a94,	// (0x000515d4) hwr_training_write_pane_g3

0x4a9c,	// (0x000515dc) hwr_training_write_pane_g4

0x4aa4,	// (0x000515e4) hwr_training_write_pane_g5

0x4aac,	// (0x000515ec) hwr_training_write_pane_g6

0x4ab4,	// (0x000515f4) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x0005c3ba) hwr_training_write_pane_g

0xa438,	// (0x00056f78) hwr_training_navi_pane_g1_ParamLimits

0xa438,	// (0x00056f78) hwr_training_navi_pane_g1

0xa44a,	// (0x00056f8a) hwr_training_navi_pane_g2_ParamLimits

0xa44a,	// (0x00056f8a) hwr_training_navi_pane_g2

0xa45c,	// (0x00056f9c) hwr_training_navi_pane_g3_ParamLimits

0xa45c,	// (0x00056f9c) hwr_training_navi_pane_g3

0xa46c,	// (0x00056fac) hwr_training_navi_pane_g4_ParamLimits

0xa46c,	// (0x00056fac) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x0005c3c9) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x0005c3c9) hwr_training_navi_pane_g

0xa486,	// (0x00056fc6) hwr_training_navi_pane_t1

0xa494,	// (0x00056fd4) list_single_hwr_training_instruct_pane_ParamLimits

0xa494,	// (0x00056fd4) list_single_hwr_training_instruct_pane

0x4abc,	// (0x000515fc) list_single_hwr_training_instruct_pane_t1

0x41b4,	// (0x00050cf4) bg_frame_shadow_pane_g1

0x4acb,	// (0x0005160b) bg_frame_shadow_pane_g2

0x4ad3,	// (0x00051613) bg_frame_shadow_pane_g3

0x4adb,	// (0x0005161b) bg_frame_shadow_pane_g4

0x4ae3,	// (0x00051623) bg_frame_shadow_pane_g5

0x4aeb,	// (0x0005162b) bg_frame_shadow_pane_g6

0x4af3,	// (0x00051633) bg_frame_shadow_pane_g7

0x2044,	// (0x0004eb84) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x0005c3d4) bg_frame_shadow_pane_g

0x017d,	// (0x0004ccbd) main_video_tele_dialer_pane

0xa4ca,	// (0x0005700a) aid_size_cell_video_keypad_ParamLimits

0xa4ca,	// (0x0005700a) aid_size_cell_video_keypad

0xa4da,	// (0x0005701a) grid_video_dialer_keypad_pane_ParamLimits

0xa4da,	// (0x0005701a) grid_video_dialer_keypad_pane

0xa50c,	// (0x0005704c) video_down_pane_cp_ParamLimits

0xa50c,	// (0x0005704c) video_down_pane_cp

0xa534,	// (0x00057074) cell_video_dialer_keypad_pane_ParamLimits

0xa534,	// (0x00057074) cell_video_dialer_keypad_pane

0x4afb,	// (0x0005163b) bg_button_pane_cp08_ParamLimits

0x4afb,	// (0x0005163b) bg_button_pane_cp08

0xa549,	// (0x00057089) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa549,	// (0x00057089) cell_video_dialer_keypad_pane_g1

0x9d15,	// (0x00056855) mup3_rocker2_pane_ParamLimits

0x9d15,	// (0x00056855) mup3_rocker2_pane

0x4274,	// (0x00050db4) mup3_rocker2_pane_g1

0x8c44,	// (0x00055784) main_dialer2_pane

0x017d,	// (0x0004ccbd) main_mp4_pane

0xa588,	// (0x000570c8) main_mp4_pane_g1_ParamLimits

0xa588,	// (0x000570c8) main_mp4_pane_g1

0xa596,	// (0x000570d6) main_mp4_pane_g2_ParamLimits

0xa596,	// (0x000570d6) main_mp4_pane_g2

0xa5a4,	// (0x000570e4) main_mp4_pane_g3_ParamLimits

0xa5a4,	// (0x000570e4) main_mp4_pane_g3

0xa5e9,	// (0x00057129) main_mp4_pane_g4_ParamLimits

0xa5e9,	// (0x00057129) main_mp4_pane_g4

0xa611,	// (0x00057151) main_mp4_pane_g5_ParamLimits

0xa611,	// (0x00057151) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x0005c3f4) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x0005c3f4) main_mp4_pane_g

0xa661,	// (0x000571a1) main_mp4_pane_t1_ParamLimits

0xa661,	// (0x000571a1) main_mp4_pane_t1

0xa6bd,	// (0x000571fd) main_mp4_pane_t2_ParamLimits

0xa6bd,	// (0x000571fd) main_mp4_pane_t2

0x4b07,	// (0x00051647) main_mp4_pane_t3_ParamLimits

0x4b07,	// (0x00051647) main_mp4_pane_t3

0xa70f,	// (0x0005724f) main_mp4_pane_t4_ParamLimits

0xa70f,	// (0x0005724f) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x0005c401) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x0005c401) main_mp4_pane_t

0xa753,	// (0x00057293) mp4_progress_pane_ParamLimits

0xa753,	// (0x00057293) mp4_progress_pane

0xa79d,	// (0x000572dd) mp4_rocker_pane_ParamLimits

0xa79d,	// (0x000572dd) mp4_rocker_pane

0x4b2f,	// (0x0005166f) mp4_progress_pane_t1

0x4b48,	// (0x00051688) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x0005c40a) mp4_progress_pane_t

0x4b61,	// (0x000516a1) mup_progress_pane_cp04

0x4cbd,	// (0x000517fd) mp4_rocker_pane_g1

0xa7bd,	// (0x000572fd) aid_cell_size_keypad2_ParamLimits

0xa7bd,	// (0x000572fd) aid_cell_size_keypad2

0xa7cd,	// (0x0005730d) dialer2_ne_pane_ParamLimits

0xa7cd,	// (0x0005730d) dialer2_ne_pane

0xa7db,	// (0x0005731b) grid_dialer2_keypad_pane_ParamLimits

0xa7db,	// (0x0005731b) grid_dialer2_keypad_pane

0xde5d,	// (0x0005a99d) bg_popup_call_pane_cp07_ParamLimits

0xde5d,	// (0x0005a99d) bg_popup_call_pane_cp07

0xa7eb,	// (0x0005732b) dialer2_ne_pane_t1_ParamLimits

0xa7eb,	// (0x0005732b) dialer2_ne_pane_t1

0xa810,	// (0x00057350) cell_dialer2_keypad_pane_ParamLimits

0xa810,	// (0x00057350) cell_dialer2_keypad_pane

0x4b7f,	// (0x000516bf) bg_button_pane_pane_cp04_ParamLimits

0x4b7f,	// (0x000516bf) bg_button_pane_pane_cp04

0xa827,	// (0x00057367) cell_dialer2_keypad_pane_g1_ParamLimits

0xa827,	// (0x00057367) cell_dialer2_keypad_pane_g1

0x69d8,	// (0x00053518) aid_placing_vt_set_content_ParamLimits

0x69d8,	// (0x00053518) aid_placing_vt_set_content

0x6a04,	// (0x00053544) aid_placing_vt_set_title_ParamLimits

0x6a04,	// (0x00053544) aid_placing_vt_set_title

0x017d,	// (0x0004ccbd) main_image3_pane

0xa8c1,	// (0x00057401) area_side_right_pane_cp01_ParamLimits

0xa8c1,	// (0x00057401) area_side_right_pane_cp01

0xa8ee,	// (0x0005742e) main_image3_pane_g1_ParamLimits

0xa8ee,	// (0x0005742e) main_image3_pane_g1

0xa8fc,	// (0x0005743c) main_image3_pane_g2_ParamLimits

0xa8fc,	// (0x0005743c) main_image3_pane_g2

0xa915,	// (0x00057455) main_image3_pane_g3_ParamLimits

0xa915,	// (0x00057455) main_image3_pane_g3

0xa92e,	// (0x0005746e) main_image3_pane_g4_ParamLimits

0xa92e,	// (0x0005746e) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x0005c419) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x0005c419) main_image3_pane_g

0xa947,	// (0x00057487) main_image3_pane_t1_ParamLimits

0xa947,	// (0x00057487) main_image3_pane_t1

0xa96c,	// (0x000574ac) main_image3_pane_t2_ParamLimits

0xa96c,	// (0x000574ac) main_image3_pane_t2

0xa98b,	// (0x000574cb) main_image3_pane_t3_ParamLimits

0xa98b,	// (0x000574cb) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x0005c422) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x0005c422) main_image3_pane_t

0x097a,	// (0x0004d4ba) grid_sctrl_middle_pane_cp01_ParamLimits

0x097a,	// (0x0004d4ba) grid_sctrl_middle_pane_cp01

0xa9ec,	// (0x0005752c) cell_sctrl_middle_pane_cp01_ParamLimits

0xa9ec,	// (0x0005752c) cell_sctrl_middle_pane_cp01

0xa9fd,	// (0x0005753d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa9fd,	// (0x0005753d) cell_sctrl_middle_pane_cp01_g1

0x017d,	// (0x0004ccbd) main_call4_pane

0xaa0a,	// (0x0005754a) aid_size_button_call4_ParamLimits

0xaa0a,	// (0x0005754a) aid_size_button_call4

0xaa3a,	// (0x0005757a) call4_windows_pane_ParamLimits

0xaa3a,	// (0x0005757a) call4_windows_pane

0xaa54,	// (0x00057594) grid_call4_button_pane_ParamLimits

0xaa54,	// (0x00057594) grid_call4_button_pane

0x4b8b,	// (0x000516cb) call4_windows_conf_pane

0x4ba0,	// (0x000516e0) popup_call4_audio_first_window_ParamLimits

0x4ba0,	// (0x000516e0) popup_call4_audio_first_window

0x4bec,	// (0x0005172c) popup_call4_audio_second_window_ParamLimits

0x4bec,	// (0x0005172c) popup_call4_audio_second_window

0x4c00,	// (0x00051740) popup_call4_audio_wait_window_ParamLimits

0x4c00,	// (0x00051740) popup_call4_audio_wait_window

0xaa78,	// (0x000575b8) cell_call4_button_pane_ParamLimits

0xaa78,	// (0x000575b8) cell_call4_button_pane

0xaa9d,	// (0x000575dd) bg_button_pane_cp09_ParamLimits

0xaa9d,	// (0x000575dd) bg_button_pane_cp09

0xaaa9,	// (0x000575e9) cell_call4_button_pane_g1_ParamLimits

0xaaa9,	// (0x000575e9) cell_call4_button_pane_g1

0xaab6,	// (0x000575f6) cell_call4_button_pane_t1_ParamLimits

0xaab6,	// (0x000575f6) cell_call4_button_pane_t1

0x4c48,	// (0x00051788) popup_call4_audio_conf_window_ParamLimits

0x4c48,	// (0x00051788) popup_call4_audio_conf_window

0x9d48,	// (0x00056888) mup3_progress_pane_t1_ParamLimits

0x9d67,	// (0x000568a7) mup3_progress_pane_t2_ParamLimits

0x455e,	// (0x0005109e) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x0005c2fb) mup3_progress_pane_t_ParamLimits

0x457b,	// (0x000510bb) mup_progress_pane_cp03_ParamLimits

0xa281,	// (0x00056dc1) mup3_control_keys_pane_g4_copy1

0xa781,	// (0x000572c1) mp4_rocker2_pane_ParamLimits

0xa781,	// (0x000572c1) mp4_rocker2_pane

0x4c64,	// (0x000517a4) mp4_rocker2_pane_g1

0x4c5c,	// (0x0005179c) mp4_rocker2_pane_g2

0xaac8,	// (0x00057608) mp4_rocker2_pane_g3

0xaad0,	// (0x00057610) mp4_rocker2_pane_g4

0xaad8,	// (0x00057618) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x0005c42b) mp4_rocker2_pane_g

0x017d,	// (0x0004ccbd) main_camera4_pane

0x017d,	// (0x0004ccbd) main_video4_pane

0xa4e8,	// (0x00057028) main_video_tele_dialer_pane_t1_ParamLimits

0xa4e8,	// (0x00057028) main_video_tele_dialer_pane_t1

0xa4fa,	// (0x0005703a) main_video_tele_dialer_pane_t2_ParamLimits

0xa4fa,	// (0x0005703a) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x0005c3e5) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x0005c3e5) main_video_tele_dialer_pane_t

0xaaf8,	// (0x00057638) cam4_autofocus_pane_ParamLimits

0xaaf8,	// (0x00057638) cam4_autofocus_pane

0xab12,	// (0x00057652) cam4_image_uncrop_pane_ParamLimits

0xab12,	// (0x00057652) cam4_image_uncrop_pane

0xab29,	// (0x00057669) cam4_indicators_pane_ParamLimits

0xab29,	// (0x00057669) cam4_indicators_pane

0xab45,	// (0x00057685) main_camera4_pane_g1_ParamLimits

0xab45,	// (0x00057685) main_camera4_pane_g1

0xab51,	// (0x00057691) main_camera4_pane_g2_ParamLimits

0xab51,	// (0x00057691) main_camera4_pane_g2

0xab51,	// (0x00057691) main_camera4_pane_g3_ParamLimits

0xab51,	// (0x00057691) main_camera4_pane_g3

0xab5d,	// (0x0005769d) main_camera4_pane_g4_ParamLimits

0xab5d,	// (0x0005769d) main_camera4_pane_g4

0xab69,	// (0x000576a9) main_camera4_pane_g5_ParamLimits

0xab69,	// (0x000576a9) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x0005c436) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x0005c436) main_camera4_pane_g

0xab83,	// (0x000576c3) main_camera4_pane_t1_ParamLimits

0xab83,	// (0x000576c3) main_camera4_pane_t1

0xabcb,	// (0x0005770b) bg_tb_trans_pane_cp06

0xabe1,	// (0x00057721) cam4_indicators_pane_g1

0xabf2,	// (0x00057732) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x0005c451) cam4_indicators_pane_g

0xac10,	// (0x00057750) cam4_indicators_pane_t1

0xac3a,	// (0x0005777a) main_video4_pane_g1_ParamLimits

0xac3a,	// (0x0005777a) main_video4_pane_g1

0xac46,	// (0x00057786) main_video4_pane_g2_ParamLimits

0xac46,	// (0x00057786) main_video4_pane_g2

0xac52,	// (0x00057792) main_video4_pane_g3_ParamLimits

0xac52,	// (0x00057792) main_video4_pane_g3

0xac5e,	// (0x0005779e) main_video4_pane_g4_ParamLimits

0xac5e,	// (0x0005779e) main_video4_pane_g4

0x0004,

0xf918,	// (0x0005c458) main_video4_pane_g_ParamLimits

0xf918,	// (0x0005c458) main_video4_pane_g

0xac7e,	// (0x000577be) vid4_indicators_pane_ParamLimits

0xac7e,	// (0x000577be) vid4_indicators_pane

0xac9c,	// (0x000577dc) video4_image_uncrop_cif_pane_ParamLimits

0xac9c,	// (0x000577dc) video4_image_uncrop_cif_pane

0xacab,	// (0x000577eb) video4_image_uncrop_nhd_pane_ParamLimits

0xacab,	// (0x000577eb) video4_image_uncrop_nhd_pane

0xab12,	// (0x00057652) video4_image_uncrop_vga_pane_ParamLimits

0xab12,	// (0x00057652) video4_image_uncrop_vga_pane

0xacb8,	// (0x000577f8) bg_tb_trans_pane_cp07

0xabe1,	// (0x00057721) vid4_indicators_pane_g1

0xacce,	// (0x0005780e) vid4_indicators_pane_g2

0xacdf,	// (0x0005781f) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x0005c463) vid4_indicators_pane_g

0xad0c,	// (0x0005784c) vid4_indicators_pane_t1

0xad25,	// (0x00057865) cam4_autofocus_pane_g1

0xad2d,	// (0x0005786d) cam4_autofocus_pane_g2

0xad35,	// (0x00057875) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x0005c46e) cam4_autofocus_pane_g

0xad3d,	// (0x0005787d) cam4_autofocus_pane_g3_copy1

0xa518,	// (0x00057058) video_down_pane_cp_t1

0xa526,	// (0x00057066) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x0005c3ea) video_down_pane_cp_t

0x097a,	// (0x0004d4ba) popup_vitu2_window_ParamLimits

0x097a,	// (0x0004d4ba) popup_vitu2_window

0xad45,	// (0x00057885) aid_size_cell2_itu2_ParamLimits

0xad45,	// (0x00057885) aid_size_cell2_itu2

0xad67,	// (0x000578a7) aid_size_cell_itu2_ParamLimits

0xad67,	// (0x000578a7) aid_size_cell_itu2

0xadab,	// (0x000578eb) bg_popup_window_pane_cp09_ParamLimits

0xadab,	// (0x000578eb) bg_popup_window_pane_cp09

0xadb9,	// (0x000578f9) field_vitu2_entry_pane_ParamLimits

0xadb9,	// (0x000578f9) field_vitu2_entry_pane

0xadd9,	// (0x00057919) grid_vitu2_function_pane_ParamLimits

0xadd9,	// (0x00057919) grid_vitu2_function_pane

0xae1d,	// (0x0005795d) grid_vitu2_itu_pane_ParamLimits

0xae1d,	// (0x0005795d) grid_vitu2_itu_pane

0xae93,	// (0x000579d3) cell_vitu2_itu_pane_ParamLimits

0xae93,	// (0x000579d3) cell_vitu2_itu_pane

0xaea8,	// (0x000579e8) cell_vitu2_function_pane_ParamLimits

0xaea8,	// (0x000579e8) cell_vitu2_function_pane

0x4c7e,	// (0x000517be) bg_popup_call_pane_cp08_ParamLimits

0x4c7e,	// (0x000517be) bg_popup_call_pane_cp08

0x4c97,	// (0x000517d7) field_vitu2_entry_pane_g1

0x4ca3,	// (0x000517e3) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x0005c475) field_vitu2_entry_pane_g

0x0990,	// (0x0004d4d0) field_vitu2_entry_pane_t1_ParamLimits

0x0990,	// (0x0004d4d0) field_vitu2_entry_pane_t1

0x09c2,	// (0x0004d502) field_vitu2_entry_pane_t2_ParamLimits

0x09c2,	// (0x0004d502) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x0005c47c) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x0005c47c) field_vitu2_entry_pane_t

0xaee9,	// (0x00057a29) bg_button_pane_cp010_ParamLimits

0xaee9,	// (0x00057a29) bg_button_pane_cp010

0xaef7,	// (0x00057a37) cell_vitu2_itu_pane_g1

0xaf15,	// (0x00057a55) cell_vitu2_itu_pane_t1_ParamLimits

0xaf15,	// (0x00057a55) cell_vitu2_itu_pane_t1

0x59ac,	// (0x000524ec) cell_vitu2_itu_pane_t2_ParamLimits

0x59ac,	// (0x000524ec) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x0005c486) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x0005c486) cell_vitu2_itu_pane_t

0xacb8,	// (0x000577f8) bg_button_pane_cp011

0xaf67,	// (0x00057aa7) cell_vitu2_function_pane_g1

0x017d,	// (0x0004ccbd) main_myfav_hc_pane

0xa9cd,	// (0x0005750d) popup_image3_note_pane_ParamLimits

0xa9cd,	// (0x0005750d) popup_image3_note_pane

0xa9db,	// (0x0005751b) popup_image3_tool_bar_pane_ParamLimits

0xa9db,	// (0x0005751b) popup_image3_tool_bar_pane

0x5a1a,	// (0x0005255a) cell_vitu2_itu_pane_t3_ParamLimits

0x5a1a,	// (0x0005255a) cell_vitu2_itu_pane_t3

0x017d,	// (0x0004ccbd) bg_popup_trans_pane

0xde73,	// (0x0005a9b3) grid_image3_tool_bar_pane

0xde7d,	// (0x0005a9bd) bg_popup_trans_pane_g1

0x238b,	// (0x0004eecb) bg_popup_trans_pane_g2

0xde85,	// (0x0005a9c5) bg_popup_trans_pane_g3

0xde8d,	// (0x0005a9cd) bg_popup_trans_pane_g4

0xde95,	// (0x0005a9d5) bg_popup_trans_pane_g5

0xde9d,	// (0x0005a9dd) bg_popup_trans_pane_g6

0xdea5,	// (0x0005a9e5) bg_popup_trans_pane_g7

0xdead,	// (0x0005a9ed) bg_popup_trans_pane_g8

0x236b,	// (0x0004eeab) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x0005c48d) bg_popup_trans_pane_g

0xdeb5,	// (0x0005a9f5) cell_image3_tool_bar_pane_ParamLimits

0xdeb5,	// (0x0005a9f5) cell_image3_tool_bar_pane

0x4274,	// (0x00050db4) cell_image3_tool_bar_pane_g1

0x017d,	// (0x0004ccbd) bg_popup_trans_pane_cp1

0xdec9,	// (0x0005aa09) popup_image3_note_pane_t1

0xded7,	// (0x0005aa17) popup_image3_note_pane_t2

0xdee5,	// (0x0005aa25) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x0005c4a0) popup_image3_note_pane_t

0xdef3,	// (0x0005aa33) popup_image3_note_pane_t3_copy1

0xaf7b,	// (0x00057abb) bg_myfav_hc_instruction_pane_ParamLimits

0xaf7b,	// (0x00057abb) bg_myfav_hc_instruction_pane

0xaf93,	// (0x00057ad3) cell_myfav_contact_pane_ParamLimits

0xaf93,	// (0x00057ad3) cell_myfav_contact_pane

0xafad,	// (0x00057aed) cell_myfav_contact_pane_cp1_ParamLimits

0xafad,	// (0x00057aed) cell_myfav_contact_pane_cp1

0xafc5,	// (0x00057b05) cell_myfav_contact_pane_cp2_ParamLimits

0xafc5,	// (0x00057b05) cell_myfav_contact_pane_cp2

0xafdd,	// (0x00057b1d) cell_myfav_contact_pane_cp3_ParamLimits

0xafdd,	// (0x00057b1d) cell_myfav_contact_pane_cp3

0xaff4,	// (0x00057b34) cell_myfav_contact_pane_cp4_ParamLimits

0xaff4,	// (0x00057b34) cell_myfav_contact_pane_cp4

0xb00a,	// (0x00057b4a) cell_myfav_contact_pane_cp5_ParamLimits

0xb00a,	// (0x00057b4a) cell_myfav_contact_pane_cp5

0xb01e,	// (0x00057b5e) cell_myfav_contact_pane_cp6_ParamLimits

0xb01e,	// (0x00057b5e) cell_myfav_contact_pane_cp6

0xb032,	// (0x00057b72) cell_myfav_contact_pane_cp7_ParamLimits

0xb032,	// (0x00057b72) cell_myfav_contact_pane_cp7

0xdf01,	// (0x0005aa41) listscroll_gen_pane_cp05

0xb04a,	// (0x00057b8a) main_myfav_hc_pane_g1_ParamLimits

0xb04a,	// (0x00057b8a) main_myfav_hc_pane_g1

0xb062,	// (0x00057ba2) main_myfav_hc_pane_g2_ParamLimits

0xb062,	// (0x00057ba2) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x0005c4a7) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x0005c4a7) main_myfav_hc_pane_g

0xb092,	// (0x00057bd2) main_myfav_hc_pane_t1_ParamLimits

0xb092,	// (0x00057bd2) main_myfav_hc_pane_t1

0xdf0a,	// (0x0005aa4a) main_myfav_hc_pane_t2_ParamLimits

0xdf0a,	// (0x0005aa4a) main_myfav_hc_pane_t2

0xdf1c,	// (0x0005aa5c) main_myfav_hc_pane_t3_ParamLimits

0xdf1c,	// (0x0005aa5c) main_myfav_hc_pane_t3

0xb0a9,	// (0x00057be9) main_myfav_hc_pane_t4_ParamLimits

0xb0a9,	// (0x00057be9) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x0005c4ae) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x0005c4ae) main_myfav_hc_pane_t

0x4274,	// (0x00050db4) bg_myfav_hc_instruction_pane_g1

0xdf2e,	// (0x0005aa6e) cell_myfav_contact_pane_g1_ParamLimits

0xdf2e,	// (0x0005aa6e) cell_myfav_contact_pane_g1

0xdf2e,	// (0x0005aa6e) cell_myfav_contact_pane_g2_ParamLimits

0xdf2e,	// (0x0005aa6e) cell_myfav_contact_pane_g2

0xdf3a,	// (0x0005aa7a) cell_myfav_contact_pane_g3_ParamLimits

0xdf3a,	// (0x0005aa7a) cell_myfav_contact_pane_g3

0x4548,	// (0x00051088) cell_myfav_contact_pane_g4_ParamLimits

0x4548,	// (0x00051088) cell_myfav_contact_pane_g4

0xdf47,	// (0x0005aa87) cell_myfav_contact_pane_g5_ParamLimits

0xdf47,	// (0x0005aa87) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x0005c4b9) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x0005c4b9) cell_myfav_contact_pane_g

0xb07a,	// (0x00057bba) main_myfav_hc_pane_g3_ParamLimits

0xb07a,	// (0x00057bba) main_myfav_hc_pane_g3

0x5be3,	// (0x00052723) popup_adpt_find_window

0xb0d3,	// (0x00057c13) afind_page_pane_ParamLimits

0xb0d3,	// (0x00057c13) afind_page_pane

0xb0e0,	// (0x00057c20) aid_size_cell_afind_ParamLimits

0xb0e0,	// (0x00057c20) aid_size_cell_afind

0xb0fa,	// (0x00057c3a) bg_popup_sub_pane_cp09_ParamLimits

0xb0fa,	// (0x00057c3a) bg_popup_sub_pane_cp09

0xb107,	// (0x00057c47) find_pane_cp01_ParamLimits

0xb107,	// (0x00057c47) find_pane_cp01

0xdf53,	// (0x0005aa93) grid_afind_control_pane_ParamLimits

0xdf53,	// (0x0005aa93) grid_afind_control_pane

0xb114,	// (0x00057c54) grid_afind_pane_ParamLimits

0xb114,	// (0x00057c54) grid_afind_pane

0xb130,	// (0x00057c70) cell_afind_pane_ParamLimits

0xb130,	// (0x00057c70) cell_afind_pane

0x4274,	// (0x00050db4) afind_page_pane_g1

0xb178,	// (0x00057cb8) afind_page_pane_g2

0xb181,	// (0x00057cc1) afind_page_pane_g3

0x0002,

0xf984,	// (0x0005c4c4) afind_page_pane_g

0xb18a,	// (0x00057cca) afind_page_pane_t1

0xdf67,	// (0x0005aaa7) cell_afind_grid_control_pane_ParamLimits

0xdf67,	// (0x0005aaa7) cell_afind_grid_control_pane

0x4b7f,	// (0x000516bf) bg_button_pane_cp69_ParamLimits

0x4b7f,	// (0x000516bf) bg_button_pane_cp69

0xb1a1,	// (0x00057ce1) cell_afind_pane_g1_ParamLimits

0xb1a1,	// (0x00057ce1) cell_afind_pane_g1

0xb1ae,	// (0x00057cee) cell_afind_pane_t1_ParamLimits

0xb1ae,	// (0x00057cee) cell_afind_pane_t1

0x2184,	// (0x0004ecc4) bg_button_pane_cp72

0xdf76,	// (0x0005aab6) cell_afind_grid_control_pane_g1

0x87bf,	// (0x000552ff) aid_image_placing_area_ParamLimits

0x87bf,	// (0x000552ff) aid_image_placing_area

0x484d,	// (0x0005138d) field_vitu_entry_pane_g1_ParamLimits

0x484d,	// (0x0005138d) field_vitu_entry_pane_g1

0x4859,	// (0x00051399) field_vitu_entry_pane_g2_ParamLimits

0x4859,	// (0x00051399) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x0005c375) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x0005c375) field_vitu_entry_pane_g

0xa30d,	// (0x00056e4d) cell_vitu_itu_pane_g1_ParamLimits

0xa34f,	// (0x00056e8f) cell_vitu_itu_pane_t3_ParamLimits

0xa34f,	// (0x00056e8f) cell_vitu_itu_pane_t3

0x4b2f,	// (0x0005166f) mp4_progress_pane_t1_ParamLimits

0x4b48,	// (0x00051688) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x0005c40a) mp4_progress_pane_t_ParamLimits

0x4b61,	// (0x000516a1) mup_progress_pane_cp04_ParamLimits

0xb0bd,	// (0x00057bfd) main_myfav_hc_pane_t5_ParamLimits

0xb0bd,	// (0x00057bfd) main_myfav_hc_pane_t5

0x01a3,	// (0x0004cce3) aid_zoom_text_primary

0x5be3,	// (0x00052723) popup_adpt_find_window_ParamLimits

0x01f5,	// (0x0004cd35) main_cam_set_pane

0xab37,	// (0x00057677) cam4_zoom_pane_ParamLimits

0xab37,	// (0x00057677) cam4_zoom_pane

0xb1c0,	// (0x00057d00) main_cam_set_pane_g1_ParamLimits

0xb1c0,	// (0x00057d00) main_cam_set_pane_g1

0xb1ce,	// (0x00057d0e) main_cam_set_pane_g2_ParamLimits

0xb1ce,	// (0x00057d0e) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x0005c4cb) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x0005c4cb) main_cam_set_pane_g

0xb1da,	// (0x00057d1a) main_cam_set_pane_t1_ParamLimits

0xb1da,	// (0x00057d1a) main_cam_set_pane_t1

0xb1f6,	// (0x00057d36) main_cset_listscroll_pane_ParamLimits

0xb1f6,	// (0x00057d36) main_cset_listscroll_pane

0xb221,	// (0x00057d61) main_cset_slider_pane_ParamLimits

0xb221,	// (0x00057d61) main_cset_slider_pane

0xdf87,	// (0x0005aac7) main_cset_list_pane_ParamLimits

0xdf87,	// (0x0005aac7) main_cset_list_pane

0xdf97,	// (0x0005aad7) scroll_pane_cp028

0xb240,	// (0x00057d80) aid_area_touch_slider

0xb25c,	// (0x00057d9c) cset_slider_pane

0xb286,	// (0x00057dc6) main_cset_slider_pane_g1

0xb29b,	// (0x00057ddb) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x0005c4d0) main_cset_slider_pane_g

0xdfd0,	// (0x0005ab10) main_cset_slider_pane_t1

0xb363,	// (0x00057ea3) main_cset_slider_pane_t2

0xb37d,	// (0x00057ebd) main_cset_slider_pane_t3

0xb397,	// (0x00057ed7) main_cset_slider_pane_t4

0xb3b5,	// (0x00057ef5) main_cset_slider_pane_t5

0xb3d7,	// (0x00057f17) main_cset_slider_pane_t6

0xb3ee,	// (0x00057f2e) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x0005c4f5) main_cset_slider_pane_t

0xb4fc,	// (0x0005803c) cset_list_set_pane_ParamLimits

0xb4fc,	// (0x0005803c) cset_list_set_pane

0xb519,	// (0x00058059) aid_position_infowindow_above

0xb521,	// (0x00058061) aid_position_infowindow_below

0xb529,	// (0x00058069) cset_list_set_pane_g1_ParamLimits

0xb529,	// (0x00058069) cset_list_set_pane_g1

0x0bdf,	// (0x0004d71f) cset_list_set_pane_g3_ParamLimits

0x0bdf,	// (0x0004d71f) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x0005c514) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x0005c514) cset_list_set_pane_g

0x0bee,	// (0x0004d72e) cset_list_set_pane_t1_ParamLimits

0x0bee,	// (0x0004d72e) cset_list_set_pane_t1

0x01f5,	// (0x0004cd35) list_highlight_pane_cp021_ParamLimits

0x01f5,	// (0x0004cd35) list_highlight_pane_cp021

0x2b39,	// (0x0004f679) cset_slider_pane_g1

0x2b4b,	// (0x0004f68b) cset_slider_pane_g2

0x2b42,	// (0x0004f682) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x0005c519) cset_slider_pane_g

0xb535,	// (0x00058075) aid_area_touch_cam4_zoom

0xb53d,	// (0x0005807d) cam4_zoom_cont_pane

0xb545,	// (0x00058085) cam4_zoom_pane_g1

0xb54d,	// (0x0005808d) cam4_zoom_pane_g2

0xb555,	// (0x00058095) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x0005c520) cam4_zoom_pane_g

0xb55d,	// (0x0005809d) cam4_zoom_cont_pane_g1

0xb566,	// (0x000580a6) cam4_zoom_cont_pane_g2

0xb56f,	// (0x000580af) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x0005c527) cam4_zoom_cont_pane_g

0xaa24,	// (0x00057564) call4_image_pane_ParamLimits

0xaa24,	// (0x00057564) call4_image_pane

0x4b8b,	// (0x000516cb) call4_windows_conf_pane_ParamLimits

0x4bca,	// (0x0005170a) popup_call4_audio_in_window_ParamLimits

0x4bca,	// (0x0005170a) popup_call4_audio_in_window

0x017d,	// (0x0004ccbd) bg_popup_call2_act_pane_cp02

0x4c40,	// (0x00051780) call4_list_conf_pane

0x4274,	// (0x00050db4) call4_image_pane_g1

0x4274,	// (0x00050db4) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x0005c23b) call4_image_pane_g

0xe070,	// (0x0005abb0) list_single_graphic_popup_conf4_pane_ParamLimits

0xe070,	// (0x0005abb0) list_single_graphic_popup_conf4_pane

0x017d,	// (0x0004ccbd) list_highlight_pane_cp022

0xe083,	// (0x0005abc3) list_single_graphic_popup_conf4_pane_g1

0x281c,	// (0x0004f35c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x0005c52e) list_single_graphic_popup_conf4_pane_g

0xe08b,	// (0x0005abcb) list_single_graphic_popup_conf4_pane_t1

0x6b68,	// (0x000536a8) popup_vtel_slider_window_ParamLimits

0x6b68,	// (0x000536a8) popup_vtel_slider_window

0x4b6d,	// (0x000516ad) dialer2_ne_pane_t2_ParamLimits

0x4b6d,	// (0x000516ad) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x0005c40f) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x0005c40f) dialer2_ne_pane_t

0x01f5,	// (0x0004cd35) bg_popup_sub_pane_cp010_ParamLimits

0x01f5,	// (0x0004cd35) bg_popup_sub_pane_cp010

0xb578,	// (0x000580b8) popup_vtel_slider_window_g1_ParamLimits

0xb578,	// (0x000580b8) popup_vtel_slider_window_g1

0xb584,	// (0x000580c4) popup_vtel_slider_window_g2_ParamLimits

0xb584,	// (0x000580c4) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x0005c533) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x0005c533) popup_vtel_slider_window_g

0xb5cc,	// (0x0005810c) vtel_slider_pane_ParamLimits

0xb5cc,	// (0x0005810c) vtel_slider_pane

0xb5db,	// (0x0005811b) vtel_slider_pane_g1_ParamLimits

0xb5db,	// (0x0005811b) vtel_slider_pane_g1

0xb5e8,	// (0x00058128) vtel_slider_pane_g2_ParamLimits

0xb5e8,	// (0x00058128) vtel_slider_pane_g2

0xb5f5,	// (0x00058135) vtel_slider_pane_g3_ParamLimits

0xb5f5,	// (0x00058135) vtel_slider_pane_g3

0xb5db,	// (0x0005811b) vtel_slider_pane_g4_ParamLimits

0xb5db,	// (0x0005811b) vtel_slider_pane_g4

0xb602,	// (0x00058142) vtel_slider_pane_g5_ParamLimits

0xb602,	// (0x00058142) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x0005c53c) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x0005c53c) vtel_slider_pane_g

0x017d,	// (0x0004ccbd) main_gallery2_pane

0xad8d,	// (0x000578cd) aid_size_row_itut2_dropdow_list_ParamLimits

0xad8d,	// (0x000578cd) aid_size_row_itut2_dropdow_list

0xadfb,	// (0x0005793b) grid_vitu2_function_top_pane_ParamLimits

0xadfb,	// (0x0005793b) grid_vitu2_function_top_pane

0xae51,	// (0x00057991) popup_vitu2_dropdown_list_window_ParamLimits

0xae51,	// (0x00057991) popup_vitu2_dropdown_list_window

0xae71,	// (0x000579b1) popup_vitu2_match_list_window

0xb60f,	// (0x0005814f) cell_vitu2_function_top_pane_ParamLimits

0xb60f,	// (0x0005814f) cell_vitu2_function_top_pane

0xb62f,	// (0x0005816f) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb62f,	// (0x0005816f) cell_vitu2_function_top_pane_cp01

0xb64d,	// (0x0005818d) cell_vitu2_function_top_wide_pane_ParamLimits

0xb64d,	// (0x0005818d) cell_vitu2_function_top_wide_pane

0xacb8,	// (0x000577f8) bg_button_pane_cp012

0xb66b,	// (0x000581ab) cell_vitu2_function_top_pane_g1

0xb67a,	// (0x000581ba) bg_button_pane_cp013_ParamLimits

0xb67a,	// (0x000581ba) bg_button_pane_cp013

0xb696,	// (0x000581d6) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb696,	// (0x000581d6) cell_vitu2_function_top_wide_pane_g1

0xb6ae,	// (0x000581ee) bg_popup_sub_pane_cp20

0xb6bc,	// (0x000581fc) list_vitu2_match_list_pane

0xde7d,	// (0x0005a9bd) bg_popup_sub_pane_cp20_g1

0xde85,	// (0x0005a9c5) bg_popup_sub_pane_cp20_g2

0x238b,	// (0x0004eecb) bg_popup_sub_pane_cp20_g3

0xde8d,	// (0x0005a9cd) bg_popup_sub_pane_cp20_g4

0x236b,	// (0x0004eeab) bg_popup_sub_pane_cp20_g5

0xe0a1,	// (0x0005abe1) bg_popup_sub_pane_cp20_g6

0xde9d,	// (0x0005a9dd) bg_popup_sub_pane_cp20_g7

0xdea5,	// (0x0005a9e5) bg_popup_sub_pane_cp20_g8

0xdead,	// (0x0005a9ed) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x0005c547) bg_popup_sub_pane_cp20_g

0xb6d4,	// (0x00058214) list_vitu2_match_list_item_pane_ParamLimits

0xb6d4,	// (0x00058214) list_vitu2_match_list_item_pane

0xb6e6,	// (0x00058226) list_vitu2_match_list_item_pane_t1

0x6008,	// (0x00052b48) bg_popup_sub_pane_cp21

0xb723,	// (0x00058263) grid_vitu2_dropdown_list_pane

0xb72b,	// (0x0005826b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb72b,	// (0x0005826b) cell_vitu2_dropdown_list_char_pane

0xb74c,	// (0x0005828c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb74c,	// (0x0005828c) cell_vitu2_dropdown_list_ctrl_pane

0xe0a9,	// (0x0005abe9) cell_vitu2_dropdown_list_char_pane_g1

0xe0b2,	// (0x0005abf2) cell_vitu2_dropdown_list_char_pane_g2

0xe0bb,	// (0x0005abfb) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x0005c564) cell_vitu2_dropdown_list_char_pane_g

0xb778,	// (0x000582b8) cell_vitu2_dropdown_list_char_pane_t1

0xb786,	// (0x000582c6) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb786,	// (0x000582c6) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb796,	// (0x000582d6) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb796,	// (0x000582d6) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb7a7,	// (0x000582e7) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb7a7,	// (0x000582e7) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb7b7,	// (0x000582f7) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb7b7,	// (0x000582f7) cell_vitu2_dropdown_list_ctrl_pane_g4

0xabcb,	// (0x0005770b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xabcb,	// (0x0005770b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x0005c56b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x0005c56b) cell_vitu2_dropdown_list_ctrl_pane_g

0xb7d3,	// (0x00058313) aid_size_cell_gallery2_ParamLimits

0xb7d3,	// (0x00058313) aid_size_cell_gallery2

0xb7e1,	// (0x00058321) grid_gallery2_pane_ParamLimits

0xb7e1,	// (0x00058321) grid_gallery2_pane

0xb7f0,	// (0x00058330) scroll_pane_cp029_ParamLimits

0xb7f0,	// (0x00058330) scroll_pane_cp029

0xb7fc,	// (0x0005833c) cell_gallery2_pane_ParamLimits

0xb7fc,	// (0x0005833c) cell_gallery2_pane

0xe0c4,	// (0x0005ac04) cell_gallery2_pane_g2

0xb82d,	// (0x0005836d) cell_gallery2_pane_g3

0xe0ce,	// (0x0005ac0e) cell_gallery2_pane_g4

0xe0d6,	// (0x0005ac16) cell_gallery2_pane_g5

0x2a03,	// (0x0004f543) grid_highlight_pane_cp10

0xae71,	// (0x000579b1) popup_vitu2_match_list_window_ParamLimits

0xae83,	// (0x000579c3) popup_vitu2_query_window_ParamLimits

0xae83,	// (0x000579c3) popup_vitu2_query_window

0x6008,	// (0x00052b48) bg_vitu2_candi_button_pane

0xe0a9,	// (0x0005abe9) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe0b2,	// (0x0005abf2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe0bb,	// (0x0005abfb) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb835,	// (0x00058375) bg_button_pane_cp015

0xb847,	// (0x00058387) bg_button_pane_cp016

0xb85a,	// (0x0005839a) bg_button_pane_cp017

0x3e2b,	// (0x0005096b) bg_popup_sub_pane_cp22

0xe0de,	// (0x0005ac1e) popup_vitu2_query_window_g1

0xb89f,	// (0x000583df) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x0005c576) popup_vitu2_query_window_g

0xb8bc,	// (0x000583fc) popup_vitu2_query_window_t1_ParamLimits

0xb8bc,	// (0x000583fc) popup_vitu2_query_window_t1

0xb8ef,	// (0x0005842f) popup_vitu2_query_window_t2_ParamLimits

0xb8ef,	// (0x0005842f) popup_vitu2_query_window_t2

0xb901,	// (0x00058441) popup_vitu2_query_window_t3_ParamLimits

0xb901,	// (0x00058441) popup_vitu2_query_window_t3

0xb929,	// (0x00058469) popup_vitu2_query_window_t4_ParamLimits

0xb929,	// (0x00058469) popup_vitu2_query_window_t4

0xb94a,	// (0x0005848a) popup_vitu2_query_window_t5_ParamLimits

0xb94a,	// (0x0005848a) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x0005c57d) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x0005c57d) popup_vitu2_query_window_t

0xdf7f,	// (0x0005aabf) main_cset_text_pane

0xb240,	// (0x00057d80) aid_area_touch_slider_ParamLimits

0xb25c,	// (0x00057d9c) cset_slider_pane_ParamLimits

0xb286,	// (0x00057dc6) main_cset_slider_pane_g1_ParamLimits

0xb29b,	// (0x00057ddb) main_cset_slider_pane_g2_ParamLimits

0xdfa0,	// (0x0005aae0) main_cset_slider_pane_g3_ParamLimits

0xdfa0,	// (0x0005aae0) main_cset_slider_pane_g3

0xb2b0,	// (0x00057df0) main_cset_slider_pane_g4_ParamLimits

0xb2b0,	// (0x00057df0) main_cset_slider_pane_g4

0xb2bf,	// (0x00057dff) main_cset_slider_pane_g5_ParamLimits

0xb2bf,	// (0x00057dff) main_cset_slider_pane_g5

0xb2cd,	// (0x00057e0d) main_cset_slider_pane_g6_ParamLimits

0xb2cd,	// (0x00057e0d) main_cset_slider_pane_g6

0xf990,	// (0x0005c4d0) main_cset_slider_pane_g_ParamLimits

0xdfd0,	// (0x0005ab10) main_cset_slider_pane_t1_ParamLimits

0xb363,	// (0x00057ea3) main_cset_slider_pane_t2_ParamLimits

0xb37d,	// (0x00057ebd) main_cset_slider_pane_t3_ParamLimits

0xb397,	// (0x00057ed7) main_cset_slider_pane_t4_ParamLimits

0xb3b5,	// (0x00057ef5) main_cset_slider_pane_t5_ParamLimits

0xb3d7,	// (0x00057f17) main_cset_slider_pane_t6_ParamLimits

0xb3ee,	// (0x00057f2e) main_cset_slider_pane_t7_ParamLimits

0xb41c,	// (0x00057f5c) main_cset_slider_pane_t8_ParamLimits

0xb41c,	// (0x00057f5c) main_cset_slider_pane_t8

0xb444,	// (0x00057f84) main_cset_slider_pane_t9_ParamLimits

0xb444,	// (0x00057f84) main_cset_slider_pane_t9

0xb46c,	// (0x00057fac) main_cset_slider_pane_t10_ParamLimits

0xb46c,	// (0x00057fac) main_cset_slider_pane_t10

0xb494,	// (0x00057fd4) main_cset_slider_pane_t11_ParamLimits

0xb494,	// (0x00057fd4) main_cset_slider_pane_t11

0xb4be,	// (0x00057ffe) main_cset_slider_pane_t12_ParamLimits

0xb4be,	// (0x00057ffe) main_cset_slider_pane_t12

0xb4dd,	// (0x0005801d) main_cset_slider_pane_t13_ParamLimits

0xb4dd,	// (0x0005801d) main_cset_slider_pane_t13

0xf9b5,	// (0x0005c4f5) main_cset_slider_pane_t_ParamLimits

0x017d,	// (0x0004ccbd) bg_popup_sub_pane_cp011

0xe0ea,	// (0x0005ac2a) main_cset_text_pane_g1

0xe0f2,	// (0x0005ac32) main_cset_text_pane_t1

0xe100,	// (0x0005ac40) main_cset_text_pane_t2

0xe10e,	// (0x0005ac4e) main_cset_text_pane_t3

0xe11c,	// (0x0005ac5c) main_cset_text_pane_t4

0xe12a,	// (0x0005ac6a) main_cset_text_pane_t5

0xe138,	// (0x0005ac78) main_cset_text_pane_t6

0xe146,	// (0x0005ac86) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x0005c58c) main_cset_text_pane_t

0x017d,	// (0x0004ccbd) main_cam4_burst_pane

0x017d,	// (0x0004ccbd) main_cam5_pane

0x2484,	// (0x0004efc4) bg_button_pane_cp019

0xb198,	// (0x00057cd8) bg_button_pane_cp020

0xdfac,	// (0x0005aaec) main_cset_slider_pane_g7_ParamLimits

0xdfac,	// (0x0005aaec) main_cset_slider_pane_g7

0xdfb8,	// (0x0005aaf8) main_cset_slider_pane_g8_ParamLimits

0xdfb8,	// (0x0005aaf8) main_cset_slider_pane_g8

0xb2e3,	// (0x00057e23) main_cset_slider_pane_g9_ParamLimits

0xb2e3,	// (0x00057e23) main_cset_slider_pane_g9

0xb2ef,	// (0x00057e2f) main_cset_slider_pane_g10_ParamLimits

0xb2ef,	// (0x00057e2f) main_cset_slider_pane_g10

0xb2fb,	// (0x00057e3b) main_cset_slider_pane_g11_ParamLimits

0xb2fb,	// (0x00057e3b) main_cset_slider_pane_g11

0xb307,	// (0x00057e47) main_cset_slider_pane_g12_ParamLimits

0xb307,	// (0x00057e47) main_cset_slider_pane_g12

0xb313,	// (0x00057e53) main_cset_slider_pane_g13_ParamLimits

0xb313,	// (0x00057e53) main_cset_slider_pane_g13

0xb321,	// (0x00057e61) main_cset_slider_pane_g14_ParamLimits

0xb321,	// (0x00057e61) main_cset_slider_pane_g14

0xb32f,	// (0x00057e6f) main_cset_slider_pane_g15_ParamLimits

0xb32f,	// (0x00057e6f) main_cset_slider_pane_g15

0xdffe,	// (0x0005ab3e) main_cset_slider_pane_t14_ParamLimits

0xdffe,	// (0x0005ab3e) main_cset_slider_pane_t14

0xe037,	// (0x0005ab77) main_cset_slider_pane_t15_ParamLimits

0xe037,	// (0x0005ab77) main_cset_slider_pane_t15

0xb9c1,	// (0x00058501) aid_cam4_burst_size_cell_ParamLimits

0xb9c1,	// (0x00058501) aid_cam4_burst_size_cell

0xb9dd,	// (0x0005851d) grid_cam4_burst_pane_ParamLimits

0xb9dd,	// (0x0005851d) grid_cam4_burst_pane

0xba0d,	// (0x0005854d) linegrid_cam4_burst_pane_ParamLimits

0xba0d,	// (0x0005854d) linegrid_cam4_burst_pane

0xba2f,	// (0x0005856f) scroll_pane_cp30_ParamLimits

0xba2f,	// (0x0005856f) scroll_pane_cp30

0xba3b,	// (0x0005857b) cell_cam4_burst_pane_ParamLimits

0xba3b,	// (0x0005857b) cell_cam4_burst_pane

0xe154,	// (0x0005ac94) linegrid_cam4_burst_pane_g1_ParamLimits

0xe154,	// (0x0005ac94) linegrid_cam4_burst_pane_g1

0xba77,	// (0x000585b7) linegrid_cam4_burst_pane_g2_ParamLimits

0xba77,	// (0x000585b7) linegrid_cam4_burst_pane_g2

0xe161,	// (0x0005aca1) linegrid_cam4_burst_pane_g3_ParamLimits

0xe161,	// (0x0005aca1) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x0005c59b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0005c59b) linegrid_cam4_burst_pane_g

0xba88,	// (0x000585c8) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xba88,	// (0x000585c8) linegrid_cam4_burst_pane_g3_copy1

0xe16e,	// (0x0005acae) linegrid_cam4_burst_pane_g4_ParamLimits

0xe16e,	// (0x0005acae) linegrid_cam4_burst_pane_g4

0xbaa2,	// (0x000585e2) linegrid_cam4_burst_pane_g5_ParamLimits

0xbaa2,	// (0x000585e2) linegrid_cam4_burst_pane_g5

0xbab3,	// (0x000585f3) linegrid_cam4_burst_pane_g6_ParamLimits

0xbab3,	// (0x000585f3) linegrid_cam4_burst_pane_g6

0xe17b,	// (0x0005acbb) linegrid_cam4_burst_pane_g7_ParamLimits

0xe17b,	// (0x0005acbb) linegrid_cam4_burst_pane_g7

0xbac4,	// (0x00058604) cell_cam4_burst_pane_g1

0xe194,	// (0x0005acd4) main_cam5_pane_t1_ParamLimits

0xe194,	// (0x0005acd4) main_cam5_pane_t1

0xe1a6,	// (0x0005ace6) main_cam5_pane_t2_ParamLimits

0xe1a6,	// (0x0005ace6) main_cam5_pane_t2

0xe1b8,	// (0x0005acf8) main_cam5_pane_t3_ParamLimits

0xe1b8,	// (0x0005acf8) main_cam5_pane_t3

0xe1ca,	// (0x0005ad0a) main_cam5_pane_t4_ParamLimits

0xe1ca,	// (0x0005ad0a) main_cam5_pane_t4

0xe1e0,	// (0x0005ad20) main_cam5_pane_t5_ParamLimits

0xe1e0,	// (0x0005ad20) main_cam5_pane_t5

0xe1f2,	// (0x0005ad32) main_cam5_pane_t6_ParamLimits

0xe1f2,	// (0x0005ad32) main_cam5_pane_t6

0xe206,	// (0x0005ad46) main_cam5_pane_t7_ParamLimits

0xe206,	// (0x0005ad46) main_cam5_pane_t7

0xe218,	// (0x0005ad58) main_cam5_pane_t8_ParamLimits

0xe218,	// (0x0005ad58) main_cam5_pane_t8

0xe234,	// (0x0005ad74) main_cam5_pane_t9_ParamLimits

0xe234,	// (0x0005ad74) main_cam5_pane_t9

0xe246,	// (0x0005ad86) main_cam5_pane_t10_ParamLimits

0xe246,	// (0x0005ad86) main_cam5_pane_t10

0xe258,	// (0x0005ad98) main_cam5_pane_t11_ParamLimits

0xe258,	// (0x0005ad98) main_cam5_pane_t11

0xe26a,	// (0x0005adaa) main_cam5_pane_t12_ParamLimits

0xe26a,	// (0x0005adaa) main_cam5_pane_t12

0xe27f,	// (0x0005adbf) main_cam5_pane_t13_ParamLimits

0xe27f,	// (0x0005adbf) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x0005c5a7) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x0005c5a7) main_cam5_pane_t

0x5c8f,	// (0x000527cf) popup_scut_keymap_window_ParamLimits

0x5c8f,	// (0x000527cf) popup_scut_keymap_window

0xbad7,	// (0x00058617) aid_size_cell_brow_shortcut

0x2a03,	// (0x0004f543) bg_popup_window_pane_cp010

0xbae3,	// (0x00058623) grid_scut_pane

0xbaef,	// (0x0005862f) cell_scut_pane_ParamLimits

0xbaef,	// (0x0005862f) cell_scut_pane

0xbb06,	// (0x00058646) cell_scut_pane_g1

0xe29c,	// (0x0005addc) cell_scut_pane_t1

0xe2ab,	// (0x0005adeb) cell_scut_pane_t2

0xbb0f,	// (0x0005864f) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x0005c5c2) cell_scut_pane_t

0x996b,	// (0x000564ab) main_mup3_pane_g8_ParamLimits

0x996b,	// (0x000564ab) main_mup3_pane_g8

0xad9b,	// (0x000578db) area_vitu2_query_pane_ParamLimits

0xad9b,	// (0x000578db) area_vitu2_query_pane

0xb86d,	// (0x000583ad) input_focus_pane_cp08

0xe2ba,	// (0x0005adfa) area_vitu2_query_pane_g1

0xbb1d,	// (0x0005865d) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x0005c5c9) area_vitu2_query_pane_g

0xbb2e,	// (0x0005866e) area_vitu2_query_pane_t1_ParamLimits

0xbb2e,	// (0x0005866e) area_vitu2_query_pane_t1

0xbb42,	// (0x00058682) area_vitu2_query_pane_t2_ParamLimits

0xbb42,	// (0x00058682) area_vitu2_query_pane_t2

0xbb56,	// (0x00058696) area_vitu2_query_pane_t3_ParamLimits

0xbb56,	// (0x00058696) area_vitu2_query_pane_t3

0x0a61,	// (0x0004d5a1) area_vitu2_query_pane_t4_ParamLimits

0x0a61,	// (0x0004d5a1) area_vitu2_query_pane_t4

0x0a89,	// (0x0004d5c9) area_vitu2_query_pane_t5_ParamLimits

0x0a89,	// (0x0004d5c9) area_vitu2_query_pane_t5

0x0ab1,	// (0x0004d5f1) area_vitu2_query_pane_t6_ParamLimits

0x0ab1,	// (0x0004d5f1) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x0005c5ce) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x0005c5ce) area_vitu2_query_pane_t

0xbb7e,	// (0x000586be) bg_button_pane_cp018

0xbb8c,	// (0x000586cc) bg_button_pane_cp021

0xbb98,	// (0x000586d8) bg_button_pane_cp022

0xbba9,	// (0x000586e9) input_focus_pane_cp09

0x7de4,	// (0x00054924) aid_size_touch_mv_arrow_left

0x7e0f,	// (0x0005494f) aid_size_touch_mv_arrow_right

0xb347,	// (0x00057e87) main_cset_slider_pane_g16_ParamLimits

0xb347,	// (0x00057e87) main_cset_slider_pane_g16

0xb355,	// (0x00057e95) main_cset_slider_pane_g17_ParamLimits

0xb355,	// (0x00057e95) main_cset_slider_pane_g17

0xbac4,	// (0x00058604) cell_cam4_burst_pane_g1_ParamLimits

0x017d,	// (0x0004ccbd) compa_mode_pane

0xb590,	// (0x000580d0) popup_vtel_slider_window_g3_ParamLimits

0xb590,	// (0x000580d0) popup_vtel_slider_window_g3

0xb5a4,	// (0x000580e4) popup_vtel_slider_window_g4_ParamLimits

0xb5a4,	// (0x000580e4) popup_vtel_slider_window_g4

0xb5b8,	// (0x000580f8) popup_vtel_slider_window_t1_ParamLimits

0xb5b8,	// (0x000580f8) popup_vtel_slider_window_t1

0x017d,	// (0x0004ccbd) main_cl_pane

0x3e53,	// (0x00050993) popup_imed_adjust2_window_ParamLimits

0x3e2b,	// (0x0005096b) bg_tb_trans_pane_cp05_ParamLimits

0x4782,	// (0x000512c2) popup_imed_adjust2_window_g1_ParamLimits

0x4791,	// (0x000512d1) popup_imed_adjust2_window_g2_ParamLimits

0x4791,	// (0x000512d1) popup_imed_adjust2_window_g2

0x479d,	// (0x000512dd) popup_imed_adjust2_window_g3_ParamLimits

0x479d,	// (0x000512dd) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x0005c339) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x0005c339) popup_imed_adjust2_window_g

0x47a9,	// (0x000512e9) popup_imed_adjust2_window_t1_ParamLimits

0x47c1,	// (0x00051301) slider_imed_adjust_pane_ParamLimits

0x47d5,	// (0x00051315) slider_imed_adjust_pane_g1_ParamLimits

0x47e5,	// (0x00051325) slider_imed_adjust_pane_g2_ParamLimits

0x47f5,	// (0x00051335) slider_imed_adjust_pane_g3_ParamLimits

0x4806,	// (0x00051346) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x0005c340) slider_imed_adjust_pane_g_ParamLimits

0xaae0,	// (0x00057620) aid_touch_area_cam4_ParamLimits

0xaae0,	// (0x00057620) aid_touch_area_cam4

0xaaf0,	// (0x00057630) battery_pane_cp01

0xab77,	// (0x000576b7) main_camera4_pane_g6_ParamLimits

0xab77,	// (0x000576b7) main_camera4_pane_g6

0xab95,	// (0x000576d5) main_camera4_pane_t2_ParamLimits

0xab95,	// (0x000576d5) main_camera4_pane_t2

0x0001,

0xf903,	// (0x0005c443) main_camera4_pane_t_ParamLimits

0xf903,	// (0x0005c443) main_camera4_pane_t

0xac2a,	// (0x0005776a) aid_touch_area_vid4_ParamLimits

0xac2a,	// (0x0005776a) aid_touch_area_vid4

0xac6a,	// (0x000577aa) main_video4_pane_g5_ParamLimits

0xac6a,	// (0x000577aa) main_video4_pane_g5

0xac8c,	// (0x000577cc) vid4_progress_pane_ParamLimits

0xac8c,	// (0x000577cc) vid4_progress_pane

0xdfc4,	// (0x0005ab04) main_cset_slider_pane_g18_ParamLimits

0xdfc4,	// (0x0005ab04) main_cset_slider_pane_g18

0xe188,	// (0x0005acc8) cell_cam4_burst_pane_g2_ParamLimits

0xe188,	// (0x0005acc8) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x0005c5a2) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x0005c5a2) cell_cam4_burst_pane_g

0xbbba,	// (0x000586fa) bg_cl_pane_ParamLimits

0xbbba,	// (0x000586fa) bg_cl_pane

0xbbc6,	// (0x00058706) cl_header_pane_ParamLimits

0xbbc6,	// (0x00058706) cl_header_pane

0xbbd2,	// (0x00058712) cl_listscroll_pane_ParamLimits

0xbbd2,	// (0x00058712) cl_listscroll_pane

0xe2c6,	// (0x0005ae06) bg_cl_pane_g1

0xe2ce,	// (0x0005ae0e) bg_cl_pane_g2

0xe2d6,	// (0x0005ae16) bg_cl_pane_g3

0xe2de,	// (0x0005ae1e) bg_cl_pane_g4

0xe2e6,	// (0x0005ae26) bg_cl_pane_g5

0xe2ee,	// (0x0005ae2e) bg_cl_pane_g6

0xe2f6,	// (0x0005ae36) bg_cl_pane_g7

0xe2fe,	// (0x0005ae3e) bg_cl_pane_g8

0xe306,	// (0x0005ae46) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x0005c5dd) bg_cl_pane_g

0xbbde,	// (0x0005871e) aid_height_cl_leading_ParamLimits

0xbbde,	// (0x0005871e) aid_height_cl_leading

0xbbea,	// (0x0005872a) aid_height_cl_text_ParamLimits

0xbbea,	// (0x0005872a) aid_height_cl_text

0x097a,	// (0x0004d4ba) bg_cl_header_pane_ParamLimits

0x097a,	// (0x0004d4ba) bg_cl_header_pane

0xbc02,	// (0x00058742) cl_header_pane_g1_ParamLimits

0xbc02,	// (0x00058742) cl_header_pane_g1

0xbc0f,	// (0x0005874f) cl_header_pane_t1_ParamLimits

0xbc0f,	// (0x0005874f) cl_header_pane_t1

0xe30e,	// (0x0005ae4e) cl_list_pane

0xdf97,	// (0x0005aad7) hc_scroll_pane_cp01

0x236b,	// (0x0004eeab) bg_cl_header_pane_g1

0xde7d,	// (0x0005a9bd) bg_cl_header_pane_g2

0x238b,	// (0x0004eecb) bg_cl_header_pane_g3

0xde8d,	// (0x0005a9cd) bg_cl_header_pane_g4

0xde85,	// (0x0005a9c5) bg_cl_header_pane_g5

0xe0a1,	// (0x0005abe1) bg_cl_header_pane_g6

0xdea5,	// (0x0005a9e5) bg_cl_header_pane_g7

0xdead,	// (0x0005a9ed) bg_cl_header_pane_g8

0xde9d,	// (0x0005a9dd) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x0005c5f0) bg_cl_header_pane_g

0xbc21,	// (0x00058761) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbc21,	// (0x00058761) hc_cl_list_double_graphic_heading_pane

0xbc38,	// (0x00058778) hc_cl_list_single_graphic_pane_ParamLimits

0xbc38,	// (0x00058778) hc_cl_list_single_graphic_pane

0xbc58,	// (0x00058798) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbc58,	// (0x00058798) hc_cl_list_single_graphic_pane_g1

0xbc64,	// (0x000587a4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbc64,	// (0x000587a4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x0005c603) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x0005c603) hc_cl_list_single_graphic_pane_g

0xbc78,	// (0x000587b8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbc78,	// (0x000587b8) hc_cl_list_single_graphic_pane_t1

0xbc58,	// (0x00058798) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbc58,	// (0x00058798) hc_cl_list_double_graphic_heading_pane_g1

0xbc8d,	// (0x000587cd) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbc8d,	// (0x000587cd) hc_cl_list_double_graphic_heading_pane_g2

0xbca1,	// (0x000587e1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbca1,	// (0x000587e1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x0005c608) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x0005c608) hc_cl_list_double_graphic_heading_pane_g

0xbcb5,	// (0x000587f5) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbcb5,	// (0x000587f5) hc_cl_list_double_graphic_heading_pane_t1

0xbcca,	// (0x0005880a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbcca,	// (0x0005880a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x0005c60f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x0005c60f) hc_cl_list_double_graphic_heading_pane_t

0xbce7,	// (0x00058827) vid4_progress_pane_g1

0xbcf7,	// (0x00058837) vid4_progress_pane_g2

0x25ac,	// (0x0004f0ec) vid4_progress_pane_g3

0xabf2,	// (0x00057732) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x0005c614) vid4_progress_pane_g

0xbd07,	// (0x00058847) vid4_progress_pane_t1

0xbd1c,	// (0x0005885c) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x0005c61f) vid4_progress_pane_t

0xbd47,	// (0x00058887) wait_bar_pane_cp07

0x4065,	// (0x00050ba5) blid_firmament_pane_ParamLimits

0x40a8,	// (0x00050be8) popup_blid_sat_info2_window_g1

0x40cc,	// (0x00050c0c) popup_blid_sat_info2_window_t3

0x40da,	// (0x00050c1a) popup_blid_sat_info2_window_t4

0x40e8,	// (0x00050c28) popup_blid_sat_info2_window_t5

0x40f6,	// (0x00050c36) popup_blid_sat_info2_window_t6

0x4106,	// (0x00050c46) popup_blid_sat_info2_window_t7

0x4114,	// (0x00050c54) popup_blid_sat_info2_window_t8

0x4122,	// (0x00050c62) popup_blid_sat_info2_window_t9

0x4130,	// (0x00050c70) popup_blid_sat_info2_window_t10

0x41f4,	// (0x00050d34) aid_firma_cardinal_ParamLimits

0x4208,	// (0x00050d48) blid_firmament_pane_t1_ParamLimits

0x421f,	// (0x00050d5f) blid_firmament_pane_t2_ParamLimits

0x4236,	// (0x00050d76) blid_firmament_pane_t3_ParamLimits

0x424d,	// (0x00050d8d) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x0005c232) blid_firmament_pane_t_ParamLimits

0x4264,	// (0x00050da4) blid_sat_info_pane_ParamLimits

0x01f5,	// (0x0004cd35) main_cam_set_pane_ParamLimits

0xa126,	// (0x00056c66) aid_size_cell_colour_35_ParamLimits

0xa140,	// (0x00056c80) aid_size_cell_colour_112_ParamLimits

0xa157,	// (0x00056c97) aid_size_cell_effect_ParamLimits

0x01f5,	// (0x0004cd35) bg_tb_trans_pane_cp02_ParamLimits

0x334e,	// (0x0004fe8e) heading_imed_pane_ParamLimits

0xa171,	// (0x00056cb1) listscroll_imed_pane_ParamLimits

0x3440,	// (0x0004ff80) popup_call2_audio_first_window_g5_ParamLimits

0x3440,	// (0x0004ff80) popup_call2_audio_first_window_g5

0xa88f,	// (0x000573cf) aid_size_touch_image3_arrow_left_ParamLimits

0xa88f,	// (0x000573cf) aid_size_touch_image3_arrow_left

0xa8a5,	// (0x000573e5) aid_size_touch_image3_arrow_right_ParamLimits

0xa8a5,	// (0x000573e5) aid_size_touch_image3_arrow_right

0xbd32,	// (0x00058872) vid4_progress_pane_t3

0xa418,	// (0x00056f58) main_hwr_training_symbol_option_pane_ParamLimits

0xa418,	// (0x00056f58) main_hwr_training_symbol_option_pane

0x4a6f,	// (0x000515af) popup_hwr_training_preview_window_ParamLimits

0x4a6f,	// (0x000515af) popup_hwr_training_preview_window

0xa479,	// (0x00056fb9) hwr_training_navi_pane_g5_ParamLimits

0xa479,	// (0x00056fb9) hwr_training_navi_pane_g5

0xde6b,	// (0x0005a9ab) popup_char_count_window

0xb6ae,	// (0x000581ee) bg_popup_sub_pane_cp20_ParamLimits

0xb6bc,	// (0x000581fc) list_vitu2_match_list_pane_ParamLimits

0xb6c8,	// (0x00058208) vitu2_page_scroll_pane_ParamLimits

0xb6c8,	// (0x00058208) vitu2_page_scroll_pane

0xe320,	// (0x0005ae60) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe320,	// (0x0005ae60) list_single_hwr_training_symbol_option_pane

0xe333,	// (0x0005ae73) list_single_hwr_training_symbol_option_pane_g1

0xe33b,	// (0x0005ae7b) list_single_hwr_training_symbol_option_pane_t1

0xe349,	// (0x0005ae89) bg_button_pane_cp023

0xe352,	// (0x0005ae92) bg_button_pane_cp024

0xbd57,	// (0x00058897) vitu2_page_scroll_pane_g1

0xbd5f,	// (0x0005889f) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x0005c626) vitu2_page_scroll_pane_g

0xbd67,	// (0x000588a7) vitu2_page_scroll_pane_t1

0x3fc5,	// (0x00050b05) popup_char_count_window_g1

0xe385,	// (0x0005aec5) popup_char_count_window_g2

0xe38e,	// (0x0005aece) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x0005c62b) popup_char_count_window_g

0xe397,	// (0x0005aed7) popup_char_count_window_t1

0x017d,	// (0x0004ccbd) main_vded2_pane

0x476e,	// (0x000512ae) aid_size_cell_imed_line

0x4778,	// (0x000512b8) grid_imed_line_width_pane

0xacf0,	// (0x00057830) vid4_indicators_pane_g4

0xe3a5,	// (0x0005aee5) cell_imed_line_width_pane_ParamLimits

0xe3a5,	// (0x0005aee5) cell_imed_line_width_pane

0xe3b9,	// (0x0005aef9) cell_imed_line_width_pane_g1

0x427e,	// (0x00050dbe) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x0005c632) cell_imed_line_width_pane_g

0xbd76,	// (0x000588b6) main_vded2_pane_g1_ParamLimits

0xbd76,	// (0x000588b6) main_vded2_pane_g1

0xbd83,	// (0x000588c3) main_vded2_pane_g2_ParamLimits

0xbd83,	// (0x000588c3) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x0005c637) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x0005c637) main_vded2_pane_g

0xbd91,	// (0x000588d1) vded2_slider_pane_ParamLimits

0xbd91,	// (0x000588d1) vded2_slider_pane

0xbd9e,	// (0x000588de) aid_size_touch_vded2_end

0xbda8,	// (0x000588e8) aid_size_touch_vded2_playhead

0xe3c2,	// (0x0005af02) aid_size_touch_vded2_start

0xe3ca,	// (0x0005af0a) vded2_slider_bg_pane

0xe3d3,	// (0x0005af13) vded2_slider_pane_g1

0xe3dc,	// (0x0005af1c) vded2_slider_pane_g2

0xbdb0,	// (0x000588f0) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x0005c63c) vded2_slider_pane_g

0xe3e4,	// (0x0005af24) vded2_slider_bg_pane_g1

0xe3ed,	// (0x0005af2d) vded2_slider_bg_pane_g2

0xe3f6,	// (0x0005af36) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x0005c643) vded2_slider_bg_pane_g

0x851c,	// (0x0005505c) aid_postcard_touch_down_pane_ParamLimits

0x851c,	// (0x0005505c) aid_postcard_touch_down_pane

0x852c,	// (0x0005506c) aid_postcard_touch_up_pane_ParamLimits

0x852c,	// (0x0005506c) aid_postcard_touch_up_pane

0x017d,	// (0x0004ccbd) main_blid2_pane

0x3e39,	// (0x00050979) popup_blid2_search_window

0x017d,	// (0x0004ccbd) blid2_gps_pane

0x017d,	// (0x0004ccbd) blid2_navig_pane

0x017d,	// (0x0004ccbd) blid2_search_pane

0x017d,	// (0x0004ccbd) blid2_tripm_pane

0xbdb9,	// (0x000588f9) blid2_search_pane_g1_ParamLimits

0xbdb9,	// (0x000588f9) blid2_search_pane_g1

0xbdc9,	// (0x00058909) blid2_search_pane_t1_ParamLimits

0xbdc9,	// (0x00058909) blid2_search_pane_t1

0xbddb,	// (0x0005891b) aid_size_cell_blid2_gps_ParamLimits

0xbddb,	// (0x0005891b) aid_size_cell_blid2_gps

0xbdeb,	// (0x0005892b) blid2_gps_pane_g1_ParamLimits

0xbdeb,	// (0x0005892b) blid2_gps_pane_g1

0xbdf7,	// (0x00058937) grid_blid2_satellite_pane_ParamLimits

0xbdf7,	// (0x00058937) grid_blid2_satellite_pane

0xbe07,	// (0x00058947) blid2_navig_pane_g1_ParamLimits

0xbe07,	// (0x00058947) blid2_navig_pane_g1

0xbe13,	// (0x00058953) blid2_navig_pane_t1_ParamLimits

0xbe13,	// (0x00058953) blid2_navig_pane_t1

0xbe25,	// (0x00058965) blid2_navig_pane_t2_ParamLimits

0xbe25,	// (0x00058965) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x0005c64a) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x0005c64a) blid2_navig_pane_t

0xbe37,	// (0x00058977) blid2_navig_ring_pane_ParamLimits

0xbe37,	// (0x00058977) blid2_navig_ring_pane

0xbe47,	// (0x00058987) blid2_speed_pane_ParamLimits

0xbe47,	// (0x00058987) blid2_speed_pane

0xbe53,	// (0x00058993) blid2_tripm_pane_g1_ParamLimits

0xbe53,	// (0x00058993) blid2_tripm_pane_g1

0xbe63,	// (0x000589a3) blid2_tripm_pane_g2_ParamLimits

0xbe63,	// (0x000589a3) blid2_tripm_pane_g2

0xbe6f,	// (0x000589af) blid2_tripm_pane_g3_ParamLimits

0xbe6f,	// (0x000589af) blid2_tripm_pane_g3

0xbe7b,	// (0x000589bb) blid2_tripm_pane_g4_ParamLimits

0xbe7b,	// (0x000589bb) blid2_tripm_pane_g4

0xbe87,	// (0x000589c7) blid2_tripm_pane_g5_ParamLimits

0xbe87,	// (0x000589c7) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x0005c64f) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x0005c64f) blid2_tripm_pane_g

0xbea3,	// (0x000589e3) blid2_tripm_pane_t1_ParamLimits

0xbea3,	// (0x000589e3) blid2_tripm_pane_t1

0xbeb7,	// (0x000589f7) blid2_tripm_pane_t2_ParamLimits

0xbeb7,	// (0x000589f7) blid2_tripm_pane_t2

0xbecb,	// (0x00058a0b) blid2_tripm_pane_t3_ParamLimits

0xbecb,	// (0x00058a0b) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x0005c65c) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x0005c65c) blid2_tripm_pane_t

0xbefd,	// (0x00058a3d) cell_blid2_satellite_pane_ParamLimits

0xbefd,	// (0x00058a3d) cell_blid2_satellite_pane

0xbf17,	// (0x00058a57) cell_blid2_satellite_pane_g1

0xe3ff,	// (0x0005af3f) cell_blid2_satellite_pane_t1

0x4274,	// (0x00050db4) blid2_speed_pane_g1

0xe40d,	// (0x0005af4d) blid2_speed_pane_t1

0xe41b,	// (0x0005af5b) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x0005c665) blid2_speed_pane_t

0x4274,	// (0x00050db4) blid2_navig_ring_pane_g1

0xbf20,	// (0x00058a60) blid2_navig_ring_pane_g2

0xbf28,	// (0x00058a68) blid2_navig_ring_pane_g3

0xbf30,	// (0x00058a70) blid2_navig_ring_pane_g4

0xbf38,	// (0x00058a78) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x0005c66a) blid2_navig_ring_pane_g

0x017d,	// (0x0004ccbd) bg_popup_window_pane_cp011

0xe429,	// (0x0005af69) popup_blid2_search_window_g1

0xe431,	// (0x0005af71) popup_blid2_search_window_t1

0xe43f,	// (0x0005af7f) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x0005c675) popup_blid2_search_window_t

0x227a,	// (0x0004edba) main_browser_pane_g1

0x1f79,	// (0x0004eab9) main_browser_pane_ParamLimits

0xacb8,	// (0x000577f8) bg_button_pane_cp011_ParamLimits

0xaf67,	// (0x00057aa7) cell_vitu2_function_pane_g1_ParamLimits

0x3e2b,	// (0x0005096b) bg_popup_sub_pane_cp22_ParamLimits

0xb86d,	// (0x000583ad) input_focus_pane_cp08_ParamLimits

0xb884,	// (0x000583c4) popup_vitu2_query_button_pane_ParamLimits

0xb884,	// (0x000583c4) popup_vitu2_query_button_pane

0xb895,	// (0x000583d5) popup_vitu2_query_input_button_pane

0xe0de,	// (0x0005ac1e) popup_vitu2_query_window_g1_ParamLimits

0xb89f,	// (0x000583df) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x0005c576) popup_vitu2_query_window_g_ParamLimits

0x017d,	// (0x0004ccbd) bg_button_pane_cp026

0xbf40,	// (0x00058a80) popup_vitu2_query_input_button_pane_g1

0x017d,	// (0x0004ccbd) bg_button_pane_cp025

0xe44d,	// (0x0005af8d) popup_vitu2_query_button_pane_t1

0x9678,	// (0x000561b8) main_mp3_pane_t6

0x9688,	// (0x000561c8) popup_slider_window_cp01

0xabd9,	// (0x00057719) cam4_battery_pane

0xacc6,	// (0x00057806) cam4_battery_pane_cp02

0xbcdf,	// (0x0005881f) cam4_battery_pane_cp01

0xbcdf,	// (0x0005881f) cam4_battery_pane_cp03

0x4cbd,	// (0x000517fd) cam4_battery_pane_g1

0x4274,	// (0x00050db4) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x0005c67a) cam4_battery_pane_g

0x413e,	// (0x00050c7e) popup_blid_sat_info2_window_t11

0x7de4,	// (0x00054924) aid_size_touch_mv_arrow_left_ParamLimits

0x7e0f,	// (0x0005494f) aid_size_touch_mv_arrow_right_ParamLimits

0x2955,	// (0x0004f495) navi_pane_g1_ParamLimits

0x7e4e,	// (0x0005498e) navi_pane_g2_ParamLimits

0x7e7c,	// (0x000549bc) navi_pane_g3_ParamLimits

0xf404,	// (0x0005bf44) navi_pane_g_ParamLimits

0x7ed6,	// (0x00054a16) navi_pane_mv_t1_ParamLimits

0xa17d,	// (0x00056cbd) grid_imed_effect_pane_ParamLimits

0x6a28,	// (0x00053568) aid_placing_vt_slider_lsc

0x21c9,	// (0x0004ed09) aid_placing_vt_slider_prt

0x01f5,	// (0x0004cd35) bg_tb_trans_pane_cp01_ParamLimits

0x4403,	// (0x00050f43) popup_image_details_window_g1_ParamLimits

0x4416,	// (0x00050f56) popup_image_details_window_g2_ParamLimits

0x442b,	// (0x00050f6b) popup_image_details_window_g3_ParamLimits

0x442b,	// (0x00050f6b) popup_image_details_window_g3

0xf737,	// (0x0005c277) popup_image_details_window_g_ParamLimits

0x443f,	// (0x00050f7f) popup_image_details_window_t1_ParamLimits

0x4451,	// (0x00050f91) popup_image_details_window_t2_ParamLimits

0x446a,	// (0x00050faa) popup_image_details_window_t3_ParamLimits

0x447e,	// (0x00050fbe) popup_image_details_window_t4_ParamLimits

0x4499,	// (0x00050fd9) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x0005c27e) popup_image_details_window_t_ParamLimits

0xbbf6,	// (0x00058736) cl_header_name_pane_ParamLimits

0xbbf6,	// (0x00058736) cl_header_name_pane

0xbf48,	// (0x00058a88) cl_header_name_pane_t1_ParamLimits

0xbf48,	// (0x00058a88) cl_header_name_pane_t1

0xbf5f,	// (0x00058a9f) cl_header_name_pane_t2_ParamLimits

0xbf5f,	// (0x00058a9f) cl_header_name_pane_t2

0xbf89,	// (0x00058ac9) cl_header_name_pane_t3_ParamLimits

0xbf89,	// (0x00058ac9) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x0005c67f) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x0005c67f) cl_header_name_pane_t

0x7ea7,	// (0x000549e7) navi_pane_mv_g2_ParamLimits

0x4c97,	// (0x000517d7) field_vitu2_entry_pane_g1_ParamLimits

0x4ca3,	// (0x000517e3) field_vitu2_entry_pane_g2_ParamLimits

0x4caf,	// (0x000517ef) field_vitu2_entry_pane_g3_ParamLimits

0x4caf,	// (0x000517ef) field_vitu2_entry_pane_g3

0xf935,	// (0x0005c475) field_vitu2_entry_pane_g_ParamLimits

0xaef7,	// (0x00057a37) cell_vitu2_itu_pane_g1_ParamLimits

0xaf07,	// (0x00057a47) cell_vitu2_itu_pane_g2_ParamLimits

0xaf07,	// (0x00057a47) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x0005c481) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x0005c481) cell_vitu2_itu_pane_g

0xacb8,	// (0x000577f8) bg_vkb2_func_pane_cp05_ParamLimits

0xacb8,	// (0x000577f8) bg_vkb2_func_pane_cp05

0xacb8,	// (0x000577f8) bg_vkb2_func_pane_cp03

0xacb8,	// (0x000577f8) bg_vkb2_func_pane_cp04

0xacb8,	// (0x000577f8) bg_vkb2_func_pane_cp10_ParamLimits

0xacb8,	// (0x000577f8) bg_vkb2_func_pane_cp10

0xbb98,	// (0x000586d8) bg_vkb2_func_pane_cp08

0xbb7e,	// (0x000586be) bg_vkb2_func_pane_cp06

0xbb8c,	// (0x000586cc) bg_vkb2_func_pane_cp07

0xe35b,	// (0x0005ae9b) bg_vkb2_func_pane_cp11_ParamLimits

0xe35b,	// (0x0005ae9b) bg_vkb2_func_pane_cp11

0xe370,	// (0x0005aeb0) bg_vkb2_func_pane_cp12_ParamLimits

0xe370,	// (0x0005aeb0) bg_vkb2_func_pane_cp12

0x017d,	// (0x0004ccbd) bg_vkb2_func_pane_cp09

0xde7d,	// (0x0005a9bd) bg_vkb2_func_pane_g1

0x238b,	// (0x0004eecb) bg_vkb2_func_pane_g2

0xde85,	// (0x0005a9c5) bg_vkb2_func_pane_g3

0xde8d,	// (0x0005a9cd) bg_vkb2_func_pane_g4

0xe0a1,	// (0x0005abe1) bg_vkb2_func_pane_g5

0xdea5,	// (0x0005a9e5) bg_vkb2_func_pane_g6

0xdead,	// (0x0005a9ed) bg_vkb2_func_pane_g7

0xde9d,	// (0x0005a9dd) bg_vkb2_func_pane_g8

0x236b,	// (0x0004eeab) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x0005c686) bg_vkb2_func_pane_g

0xbe95,	// (0x000589d5) blid2_tripm_pane_g6_ParamLimits

0xbe95,	// (0x000589d5) blid2_tripm_pane_g6

0x4b27,	// (0x00051667) mp4_progress_pane_g1

0xbef1,	// (0x00058a31) blid2_tripm_values_pane_ParamLimits

0xbef1,	// (0x00058a31) blid2_tripm_values_pane

0xbfae,	// (0x00058aee) blid2_tripm_values_pane_t1

0xbfbc,	// (0x00058afc) blid2_tripm_values_pane_t2

0xbfca,	// (0x00058b0a) blid2_tripm_values_pane_t3

0xbfd8,	// (0x00058b18) blid2_tripm_values_pane_t4

0xbfe6,	// (0x00058b26) blid2_tripm_values_pane_t5

0xbff4,	// (0x00058b34) blid2_tripm_values_pane_t6

0xc002,	// (0x00058b42) blid2_tripm_values_pane_t7

0xc010,	// (0x00058b50) blid2_tripm_values_pane_t8

0xc01e,	// (0x00058b5e) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x0005c699) blid2_tripm_values_pane_t

0x6a68,	// (0x000535a8) call_video_pane_t1_ParamLimits

0x6a89,	// (0x000535c9) call_video_pane_t2_ParamLimits

0xf28d,	// (0x0005bdcd) call_video_pane_t_ParamLimits

0x8413,	// (0x00054f53) msg_header_pane_g1_ParamLimits

0x2b7e,	// (0x0004f6be) msg_header_pane_g2_ParamLimits

0x2b7e,	// (0x0004f6be) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x0005bfe7) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x0005bfe7) msg_header_pane_g

0x1f79,	// (0x0004eab9) main_clock2_pane_ParamLimits

0x9f13,	// (0x00056a53) grid_clock2_toolbar_pane_ParamLimits

0x9f13,	// (0x00056a53) grid_clock2_toolbar_pane

0x9f13,	// (0x00056a53) listscroll_clock2_pane_ParamLimits

0x9f13,	// (0x00056a53) listscroll_clock2_pane

0x9fb0,	// (0x00056af0) main_clock2_pane_t3_ParamLimits

0x9fb0,	// (0x00056af0) main_clock2_pane_t3

0x9fc2,	// (0x00056b02) main_clock2_pane_t4_ParamLimits

0x9fc2,	// (0x00056b02) main_clock2_pane_t4

0xe45b,	// (0x0005af9b) cell_clock2_toolbar_pane

0xe463,	// (0x0005afa3) cell_clock2_toolbar_pane_cp01

0xe463,	// (0x0005afa3) cell_clock2_toolbar_pane_cp02

0xe46b,	// (0x0005afab) cell_clock2_toolbar_pane_cp03

0xe473,	// (0x0005afb3) list_clock2_pane

0x28a8,	// (0x0004f3e8) scroll_pane_cp10

0xe47b,	// (0x0005afbb) list_single_clock2_pane_ParamLimits

0xe47b,	// (0x0005afbb) list_single_clock2_pane

0x2a03,	// (0x0004f543) list_highlight_pane_cp08

0xe488,	// (0x0005afc8) list_single_clock2_pane_t1

0xe496,	// (0x0005afd6) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x0005c6ac) list_single_clock2_pane_t

0x017d,	// (0x0004ccbd) bg_button_pane_cp10

0xe4a4,	// (0x0005afe4) cell_clock2_toolbar_pane_g1

0x847e,	// (0x00054fbe) aid_main_viewer_pane_g1_ParamLimits

0x847e,	// (0x00054fbe) aid_main_viewer_pane_g1

0x848a,	// (0x00054fca) aid_main_viewer_pane_g2_ParamLimits

0x848a,	// (0x00054fca) aid_main_viewer_pane_g2

0x8496,	// (0x00054fd6) aid_main_viewer_pane_g3_ParamLimits

0x8496,	// (0x00054fd6) aid_main_viewer_pane_g3

0x84a7,	// (0x00054fe7) aid_main_viewer_pane_g4_ParamLimits

0x84a7,	// (0x00054fe7) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x0005bff8) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x0005bff8) aid_main_viewer_pane_g

0x8c37,	// (0x00055777) main_calc_pane_ParamLimits

0x8c44,	// (0x00055784) main_dialer2_pane_ParamLimits

0x017d,	// (0x0004ccbd) main_cam6_pane

0x017d,	// (0x0004ccbd) main_vid6_pane

0x9f1f,	// (0x00056a5f) listscroll_gen_pane_cp06_ParamLimits

0x9f1f,	// (0x00056a5f) listscroll_gen_pane_cp06

0x9fd4,	// (0x00056b14) main_clock2_pane_t5_ParamLimits

0x9fd4,	// (0x00056b14) main_clock2_pane_t5

0xa023,	// (0x00056b63) aid_call2_pane_cp10_ParamLimits

0xa035,	// (0x00056b75) aid_call_pane_cp10_ParamLimits

0x292a,	// (0x0004f46a) popup_clock_analogue_window_cp10_g1_ParamLimits

0x292a,	// (0x0004f46a) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa047,	// (0x00056b87) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa047,	// (0x00056b87) popup_clock_analogue_window_cp10_g4_ParamLimits

0x292a,	// (0x0004f46a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x0005c32e) popup_clock_analogue_window_cp10_g_ParamLimits

0xa05d,	// (0x00056b9d) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa83c,	// (0x0005737c) cell_dialer2_keypad_pane_g2_ParamLimits

0xa83c,	// (0x0005737c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x0005c414) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x0005c414) cell_dialer2_keypad_pane_g

0xa858,	// (0x00057398) cell_dialer2_keypad_pane_t1

0xb22d,	// (0x00057d6d) main_cset_text2_pane_ParamLimits

0xb22d,	// (0x00057d6d) main_cset_text2_pane

0xe2ba,	// (0x0005adfa) area_vitu2_query_pane_g1_ParamLimits

0xbb1d,	// (0x0005865d) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x0005c5c9) area_vitu2_query_pane_g_ParamLimits

0x0ad9,	// (0x0004d619) area_vitu2_query_pane_t7_ParamLimits

0x0ad9,	// (0x0004d619) area_vitu2_query_pane_t7

0xbb7e,	// (0x000586be) bg_button_pane_cp018_ParamLimits

0xbb8c,	// (0x000586cc) bg_button_pane_cp021_ParamLimits

0xbb98,	// (0x000586d8) bg_button_pane_cp022_ParamLimits

0xbb98,	// (0x000586d8) bg_vkb2_func_pane_cp08_ParamLimits

0xbb7e,	// (0x000586be) bg_vkb2_func_pane_cp06_ParamLimits

0xbb8c,	// (0x000586cc) bg_vkb2_func_pane_cp07_ParamLimits

0xbba9,	// (0x000586e9) input_focus_pane_cp09_ParamLimits

0xc02c,	// (0x00058b6c) cam6_autofocus_pane_ParamLimits

0xc02c,	// (0x00058b6c) cam6_autofocus_pane

0xc04e,	// (0x00058b8e) cam6_image_uncrop_pane_ParamLimits

0xc04e,	// (0x00058b8e) cam6_image_uncrop_pane

0xc07b,	// (0x00058bbb) cam6_indi_pane_ParamLimits

0xc07b,	// (0x00058bbb) cam6_indi_pane

0xc095,	// (0x00058bd5) cam6_mode_pane_ParamLimits

0xc095,	// (0x00058bd5) cam6_mode_pane

0xc0a9,	// (0x00058be9) cam6_timer_pane_ParamLimits

0xc0a9,	// (0x00058be9) cam6_timer_pane

0xc0b5,	// (0x00058bf5) cam6_zoom_pane_ParamLimits

0xc0b5,	// (0x00058bf5) cam6_zoom_pane

0xc0cd,	// (0x00058c0d) cam6_mode_pane_g1_ParamLimits

0xc0cd,	// (0x00058c0d) cam6_mode_pane_g1

0xc0d9,	// (0x00058c19) cam6_mode_pane_g2_ParamLimits

0xc0d9,	// (0x00058c19) cam6_mode_pane_g2

0xc0e5,	// (0x00058c25) cam6_mode_pane_g3_ParamLimits

0xc0e5,	// (0x00058c25) cam6_mode_pane_g3

0xc0f1,	// (0x00058c31) cam6_mode_pane_g4_ParamLimits

0xc0f1,	// (0x00058c31) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x0005c6b1) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x0005c6b1) cam6_mode_pane_g

0xde5d,	// (0x0005a99d) bg_tb_trans_pane_cp08_ParamLimits

0xde5d,	// (0x0005a99d) bg_tb_trans_pane_cp08

0xe4ac,	// (0x0005afec) cam6_battery_pane_ParamLimits

0xe4ac,	// (0x0005afec) cam6_battery_pane

0xe4c2,	// (0x0005b002) cam6_indi_pane_g1_ParamLimits

0xe4c2,	// (0x0005b002) cam6_indi_pane_g1

0xe4d4,	// (0x0005b014) cam6_indi_pane_g2_ParamLimits

0xe4d4,	// (0x0005b014) cam6_indi_pane_g2

0xe4e6,	// (0x0005b026) cam6_indi_pane_g3_ParamLimits

0xe4e6,	// (0x0005b026) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x0005c6ba) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x0005c6ba) cam6_indi_pane_g

0xe4f8,	// (0x0005b038) cam6_indi_pane_t1_ParamLimits

0xe4f8,	// (0x0005b038) cam6_indi_pane_t1

0xad2d,	// (0x0005786d) cam6_autofocus_pane_g1

0xad25,	// (0x00057865) cam6_autofocus_pane_g2

0xad3d,	// (0x0005787d) cam6_autofocus_pane_g3

0xad35,	// (0x00057875) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x0005c6c1) cam6_autofocus_pane_g

0xe51e,	// (0x0005b05e) cam6_timer_pane_g1

0xe526,	// (0x0005b066) cam6_timer_pane_t1

0xe534,	// (0x0005b074) cam6_zoom_cont_pane

0xe53c,	// (0x0005b07c) cam6_zoom_pane_g1

0xe544,	// (0x0005b084) cam6_zoom_pane_g2

0xc0fd,	// (0x00058c3d) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x0005c6ca) cam6_zoom_pane_g

0x4274,	// (0x00050db4) cam6_battery_pane_g1

0x4274,	// (0x00050db4) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x0005c23b) cam6_battery_pane_g

0xe54c,	// (0x0005b08c) cam6_zoom_cont_pane_g1

0xe555,	// (0x0005b095) cam6_zoom_cont_pane_g2

0xe55e,	// (0x0005b09e) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x0005c6d1) cam6_zoom_cont_pane_g

0xc11a,	// (0x00058c5a) cam6_mode_pane_cp_ParamLimits

0xc11a,	// (0x00058c5a) cam6_mode_pane_cp

0xc12e,	// (0x00058c6e) cam6_zoom_pane_cp_ParamLimits

0xc12e,	// (0x00058c6e) cam6_zoom_pane_cp

0xc146,	// (0x00058c86) vid6_image_uncrop_cif_pane_ParamLimits

0xc146,	// (0x00058c86) vid6_image_uncrop_cif_pane

0xc172,	// (0x00058cb2) vid6_image_uncrop_nhd_pane_ParamLimits

0xc172,	// (0x00058cb2) vid6_image_uncrop_nhd_pane

0xc18f,	// (0x00058ccf) vid6_image_uncrop_vga_pane_ParamLimits

0xc18f,	// (0x00058ccf) vid6_image_uncrop_vga_pane

0xc1ae,	// (0x00058cee) vid6_image_uncrop_wvga_pane_ParamLimits

0xc1ae,	// (0x00058cee) vid6_image_uncrop_wvga_pane

0xc1cb,	// (0x00058d0b) vid6_indi_pane_ParamLimits

0xc1cb,	// (0x00058d0b) vid6_indi_pane

0xde5d,	// (0x0005a99d) bg_tb_trans_pane_cp09_ParamLimits

0xde5d,	// (0x0005a99d) bg_tb_trans_pane_cp09

0xe576,	// (0x0005b0b6) cam6_battery_pane_cp_ParamLimits

0xe576,	// (0x0005b0b6) cam6_battery_pane_cp

0xe582,	// (0x0005b0c2) vid6_indi_pane_g1_ParamLimits

0xe582,	// (0x0005b0c2) vid6_indi_pane_g1

0xe594,	// (0x0005b0d4) vid6_indi_pane_g2_ParamLimits

0xe594,	// (0x0005b0d4) vid6_indi_pane_g2

0xe5a6,	// (0x0005b0e6) vid6_indi_pane_g3_ParamLimits

0xe5a6,	// (0x0005b0e6) vid6_indi_pane_g3

0xe5bb,	// (0x0005b0fb) vid6_indi_pane_g4_ParamLimits

0xe5bb,	// (0x0005b0fb) vid6_indi_pane_g4

0xe5d0,	// (0x0005b110) vid6_indi_pane_g5_ParamLimits

0xe5d0,	// (0x0005b110) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x0005c6d8) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x0005c6d8) vid6_indi_pane_g

0xe5ea,	// (0x0005b12a) vid6_indi_pane_t1_ParamLimits

0xe5ea,	// (0x0005b12a) vid6_indi_pane_t1

0xe600,	// (0x0005b140) vid6_indi_pane_t2_ParamLimits

0xe600,	// (0x0005b140) vid6_indi_pane_t2

0xe628,	// (0x0005b168) vid6_indi_pane_t3_ParamLimits

0xe628,	// (0x0005b168) vid6_indi_pane_t3

0xe650,	// (0x0005b190) vid6_indi_pane_t4_ParamLimits

0xe650,	// (0x0005b190) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x0005c6e3) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x0005c6e3) vid6_indi_pane_t

0xe674,	// (0x0005b1b4) wait_bar_pane_cp08

0xc1ee,	// (0x00058d2e) main_cset_text2_pane_t1_ParamLimits

0xc1ee,	// (0x00058d2e) main_cset_text2_pane_t1

0xc105,	// (0x00058c45) listscroll_gen_pane_cp06_t1_ParamLimits

0xc105,	// (0x00058c45) listscroll_gen_pane_cp06_t1

0x017d,	// (0x0004ccbd) main_cam6_set_pane

0xabcb,	// (0x0005770b) bg_tb_trans_pane_cp06_ParamLimits

0xabe1,	// (0x00057721) cam4_indicators_pane_g1_ParamLimits

0xabf2,	// (0x00057732) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x0005c451) cam4_indicators_pane_g_ParamLimits

0xac10,	// (0x00057750) cam4_indicators_pane_t1_ParamLimits

0xacb8,	// (0x000577f8) bg_tb_trans_pane_cp07_ParamLimits

0xabe1,	// (0x00057721) vid4_indicators_pane_g1_ParamLimits

0xacce,	// (0x0005780e) vid4_indicators_pane_g2_ParamLimits

0xacdf,	// (0x0005781f) vid4_indicators_pane_g3_ParamLimits

0xacf0,	// (0x00057830) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x0005c463) vid4_indicators_pane_g_ParamLimits

0xad0c,	// (0x0005784c) vid4_indicators_pane_t1_ParamLimits

0xbce7,	// (0x00058827) vid4_progress_pane_g1_ParamLimits

0xbcf7,	// (0x00058837) vid4_progress_pane_g2_ParamLimits

0x25ac,	// (0x0004f0ec) vid4_progress_pane_g3_ParamLimits

0xabf2,	// (0x00057732) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x0005c614) vid4_progress_pane_g_ParamLimits

0xbd07,	// (0x00058847) vid4_progress_pane_t1_ParamLimits

0xbd1c,	// (0x0005885c) vid4_progress_pane_t2_ParamLimits

0xbd32,	// (0x00058872) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x0005c61f) vid4_progress_pane_t_ParamLimits

0xbd47,	// (0x00058887) wait_bar_pane_cp07_ParamLimits

0xc22c,	// (0x00058d6c) main_cam6_set_pane_g2_ParamLimits

0xc22c,	// (0x00058d6c) main_cam6_set_pane_g2

0xc238,	// (0x00058d78) main_cset6_listscroll_pane_ParamLimits

0xc238,	// (0x00058d78) main_cset6_listscroll_pane

0xc263,	// (0x00058da3) main_cset6_slider_pane_ParamLimits

0xc263,	// (0x00058da3) main_cset6_slider_pane

0xc26f,	// (0x00058daf) main_cset6_text2_pane_ParamLimits

0xc26f,	// (0x00058daf) main_cset6_text2_pane

0xe683,	// (0x0005b1c3) main_cset6_text_pane

0xe68b,	// (0x0005b1cb) main_cset_list_pane_copy1_ParamLimits

0xe68b,	// (0x0005b1cb) main_cset_list_pane_copy1

0xe69b,	// (0x0005b1db) scroll_pane_cp028_copy1

0xc282,	// (0x00058dc2) cset_list_set_pane_copy1

0xc29c,	// (0x00058ddc) aid_position_infowindow_above_copy1

0xc2a4,	// (0x00058de4) aid_position_infowindow_below_copy1

0x0bd7,	// (0x0004d717) cset_list_set_pane_g1_copy1

0x0bdf,	// (0x0004d71f) cset_list_set_pane_g3_copy1_ParamLimits

0x0bdf,	// (0x0004d71f) cset_list_set_pane_g3_copy1

0x0bee,	// (0x0004d72e) cset_list_set_pane_t1_copy1_ParamLimits

0x0bee,	// (0x0004d72e) cset_list_set_pane_t1_copy1

0x01f5,	// (0x0004cd35) list_highlight_pane_cp021_copy1_ParamLimits

0x01f5,	// (0x0004cd35) list_highlight_pane_cp021_copy1

0xe6a4,	// (0x0005b1e4) cset6_slider_pane_ParamLimits

0xe6a4,	// (0x0005b1e4) cset6_slider_pane

0xe6d0,	// (0x0005b210) main_cset6_slider_pane_g1_ParamLimits

0xe6d0,	// (0x0005b210) main_cset6_slider_pane_g1

0xc2ac,	// (0x00058dec) main_cset6_slider_pane_g2_ParamLimits

0xc2ac,	// (0x00058dec) main_cset6_slider_pane_g2

0xdfac,	// (0x0005aaec) main_cset6_slider_pane_g3_ParamLimits

0xdfac,	// (0x0005aaec) main_cset6_slider_pane_g3

0xc2d4,	// (0x00058e14) main_cset6_slider_pane_g4_ParamLimits

0xc2d4,	// (0x00058e14) main_cset6_slider_pane_g4

0xc2e0,	// (0x00058e20) main_cset6_slider_pane_g5_ParamLimits

0xc2e0,	// (0x00058e20) main_cset6_slider_pane_g5

0xdfac,	// (0x0005aaec) main_cset6_slider_pane_g7_ParamLimits

0xdfac,	// (0x0005aaec) main_cset6_slider_pane_g7

0xdfb8,	// (0x0005aaf8) main_cset6_slider_pane_g8_ParamLimits

0xdfb8,	// (0x0005aaf8) main_cset6_slider_pane_g8

0xc2ee,	// (0x00058e2e) main_cset6_slider_pane_g9_ParamLimits

0xc2ee,	// (0x00058e2e) main_cset6_slider_pane_g9

0xc2fa,	// (0x00058e3a) main_cset6_slider_pane_g10_ParamLimits

0xc2fa,	// (0x00058e3a) main_cset6_slider_pane_g10

0xc2d4,	// (0x00058e14) main_cset6_slider_pane_g11_ParamLimits

0xc2d4,	// (0x00058e14) main_cset6_slider_pane_g11

0xc306,	// (0x00058e46) main_cset6_slider_pane_g12_ParamLimits

0xc306,	// (0x00058e46) main_cset6_slider_pane_g12

0xc312,	// (0x00058e52) main_cset6_slider_pane_g13_ParamLimits

0xc312,	// (0x00058e52) main_cset6_slider_pane_g13

0xc320,	// (0x00058e60) main_cset6_slider_pane_g14_ParamLimits

0xc320,	// (0x00058e60) main_cset6_slider_pane_g14

0xc32e,	// (0x00058e6e) main_cset6_slider_pane_g15_ParamLimits

0xc32e,	// (0x00058e6e) main_cset6_slider_pane_g15

0xc2e0,	// (0x00058e20) main_cset6_slider_pane_g16_ParamLimits

0xc2e0,	// (0x00058e20) main_cset6_slider_pane_g16

0xc346,	// (0x00058e86) main_cset6_slider_pane_g17_ParamLimits

0xc346,	// (0x00058e86) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x0005c6ec) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x0005c6ec) main_cset6_slider_pane_g

0xe6f8,	// (0x0005b238) main_cset6_slider_pane_t1_ParamLimits

0xe6f8,	// (0x0005b238) main_cset6_slider_pane_t1

0xc354,	// (0x00058e94) main_cset6_slider_pane_t2_ParamLimits

0xc354,	// (0x00058e94) main_cset6_slider_pane_t2

0xc37f,	// (0x00058ebf) main_cset6_slider_pane_t3_ParamLimits

0xc37f,	// (0x00058ebf) main_cset6_slider_pane_t3

0xc3aa,	// (0x00058eea) main_cset6_slider_pane_t4_ParamLimits

0xc3aa,	// (0x00058eea) main_cset6_slider_pane_t4

0xc3d7,	// (0x00058f17) main_cset6_slider_pane_t5_ParamLimits

0xc3d7,	// (0x00058f17) main_cset6_slider_pane_t5

0xe739,	// (0x0005b279) main_cset6_slider_pane_t7_ParamLimits

0xe739,	// (0x0005b279) main_cset6_slider_pane_t7

0xc404,	// (0x00058f44) main_cset6_slider_pane_t8_ParamLimits

0xc404,	// (0x00058f44) main_cset6_slider_pane_t8

0xc428,	// (0x00058f68) main_cset6_slider_pane_t9_ParamLimits

0xc428,	// (0x00058f68) main_cset6_slider_pane_t9

0xc44c,	// (0x00058f8c) main_cset6_slider_pane_t10_ParamLimits

0xc44c,	// (0x00058f8c) main_cset6_slider_pane_t10

0xc470,	// (0x00058fb0) main_cset6_slider_pane_t11_ParamLimits

0xc470,	// (0x00058fb0) main_cset6_slider_pane_t11

0xe76f,	// (0x0005b2af) main_cset6_slider_pane_t14_ParamLimits

0xe76f,	// (0x0005b2af) main_cset6_slider_pane_t14

0xe7a8,	// (0x0005b2e8) main_cset6_slider_pane_t15_ParamLimits

0xe7a8,	// (0x0005b2e8) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x0005c711) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x0005c711) main_cset6_slider_pane_t

0xe7e1,	// (0x0005b321) cset_slider_pane_g1_copy1

0xe7ea,	// (0x0005b32a) cset_slider_pane_g2_copy1

0xe7f3,	// (0x0005b333) cset_slider_pane_g3_copy1

0x017d,	// (0x0004ccbd) bg_popup_sub_pane_cp011_copy1

0xe0ea,	// (0x0005ac2a) main_cset_text_pane_g1_copy1

0xe0f2,	// (0x0005ac32) main_cset_text_pane_t1_copy1

0xe100,	// (0x0005ac40) main_cset_text_pane_t2_copy1

0xe10e,	// (0x0005ac4e) main_cset_text_pane_t3_copy1

0xe11c,	// (0x0005ac5c) main_cset_text_pane_t4_copy1

0xe12a,	// (0x0005ac6a) main_cset_text_pane_t5_copy1

0xe138,	// (0x0005ac78) main_cset_text_pane_t6_copy1

0xe146,	// (0x0005ac86) main_cset_text_pane_t7_copy1

0xc496,	// (0x00058fd6) main_cset_text2_pane_t1_copy1

0x017d,	// (0x0004ccbd) main_ncimui_pane

0x8c83,	// (0x000557c3) popup_query_ncimui_window_ParamLimits

0x8c83,	// (0x000557c3) popup_query_ncimui_window

0x0676,	// (0x0004d1b6) field_cale_ev2_pane_g4_ParamLimits

0x0676,	// (0x0004d1b6) field_cale_ev2_pane_g4

0xa55a,	// (0x0005709a) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa55a,	// (0x0005709a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x0005c3ef) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x0005c3ef) cell_video_dialer_keypad_pane_g

0xa572,	// (0x000570b2) cell_video_dialer_keypad_pane_t1

0x017d,	// (0x0004ccbd) bg_popup_window_pane_cp012

0x2778,	// (0x0004f2b8) heading_pane_cp06

0xe826,	// (0x0005b366) ncim_query_content_pane

0x017d,	// (0x0004ccbd) bg_popup_heading_pane_cp01

0xe82e,	// (0x0005b36e) ncim_heading_pane_t1

0xe83c,	// (0x0005b37c) ncim_indicator_popup_pane

0xe84e,	// (0x0005b38e) ncim_query_button_pane

0xe862,	// (0x0005b3a2) ncim_query_content_pane_t1

0xe874,	// (0x0005b3b4) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x0005c750) ncim_query_content_pane_t

0xe8ae,	// (0x0005b3ee) ncim_query_list_pane

0xe8c0,	// (0x0005b400) ncim_query_popup_pane

0xe83c,	// (0x0005b37c) ncim_indicator_popup_pane_ParamLimits

0xc5c3,	// (0x00059103) ncim_query_content_pane_g1_ParamLimits

0xc5c3,	// (0x00059103) ncim_query_content_pane_g1

0xe862,	// (0x0005b3a2) ncim_query_content_pane_t1_ParamLimits

0xe874,	// (0x0005b3b4) ncim_query_content_pane_t2_ParamLimits

0xc5cf,	// (0x0005910f) ncim_query_content_pane_t3_ParamLimits

0xc5cf,	// (0x0005910f) ncim_query_content_pane_t3

0xc5ec,	// (0x0005912c) ncim_query_content_pane_t4_ParamLimits

0xc5ec,	// (0x0005912c) ncim_query_content_pane_t4

0xc609,	// (0x00059149) ncim_query_content_pane_t5_ParamLimits

0xc609,	// (0x00059149) ncim_query_content_pane_t5

0xe886,	// (0x0005b3c6) ncim_query_content_pane_t6_ParamLimits

0xe886,	// (0x0005b3c6) ncim_query_content_pane_t6

0xfc10,	// (0x0005c750) ncim_query_content_pane_t_ParamLimits

0xe8ae,	// (0x0005b3ee) ncim_query_list_pane_ParamLimits

0xe8c0,	// (0x0005b400) ncim_query_popup_pane_ParamLimits

0xe8d4,	// (0x0005b414) wait_bar_pane_cp04

0x017d,	// (0x0004ccbd) input_focus_pane_cp011

0xe8dc,	// (0x0005b41c) ncim_query_popup_pane_t1

0xe8ea,	// (0x0005b42a) ncim_list_query_list_pane_ParamLimits

0xe8ea,	// (0x0005b42a) ncim_list_query_list_pane

0x017d,	// (0x0004ccbd) bg_button_pane_cp027

0xe8fd,	// (0x0005b43d) ncim_query_button_pane_g1

0x017d,	// (0x0004ccbd) list_highlight_pane_cp012

0xe907,	// (0x0005b447) ncim_list_query_list_pane_g1

0xe90f,	// (0x0005b44f) ncim_list_query_list_pane_t1

0xac01,	// (0x00057741) cam4_indicators_pane_g3_ParamLimits

0xac01,	// (0x00057741) cam4_indicators_pane_g3

0xacfc,	// (0x0005783c) vid4_indicators_pane_g5_ParamLimits

0xacfc,	// (0x0005783c) vid4_indicators_pane_g5

0xac01,	// (0x00057741) vid4_progress_pane_g5_ParamLimits

0xac01,	// (0x00057741) vid4_progress_pane_g5

0xc4dc,	// (0x0005901c) main_ncimui_pane_g1

0xc532,	// (0x00059072) ncimui_group_query_pane_ParamLimits

0xc532,	// (0x00059072) ncimui_group_query_pane

0xc56e,	// (0x000590ae) ncimui_list_pane_ParamLimits

0xc56e,	// (0x000590ae) ncimui_list_pane

0xc58f,	// (0x000590cf) ncimui_text_pane_ParamLimits

0xc58f,	// (0x000590cf) ncimui_text_pane

0xc626,	// (0x00059166) ncimui_text_pane_t1_ParamLimits

0xc626,	// (0x00059166) ncimui_text_pane_t1

0xe91d,	// (0x0005b45d) ncimui_list_single_graphic_pane_ParamLimits

0xe91d,	// (0x0005b45d) ncimui_list_single_graphic_pane

0xc645,	// (0x00059185) ncimui_query_pane_ParamLimits

0xc645,	// (0x00059185) ncimui_query_pane

0x017d,	// (0x0004ccbd) list_highlight_pane_cp013

0xe92d,	// (0x0005b46d) ncim_list_query_list_pane_t1_copy1

0xe907,	// (0x0005b447) ncim_list_single_graphic_pane_g1

0xe93b,	// (0x0005b47b) ncim_query_button_pane_cp01

0xe947,	// (0x0005b487) ncim_query_entry_pane_ParamLimits

0xe947,	// (0x0005b487) ncim_query_entry_pane

0xe95a,	// (0x0005b49a) ncimui_query_pane_g1

0xe966,	// (0x0005b4a6) ncimui_query_pane_t1_ParamLimits

0xe966,	// (0x0005b4a6) ncimui_query_pane_t1

0x01f5,	// (0x0004cd35) input_focus_pane_cp012

0xe97f,	// (0x0005b4bf) ncim_query_entry_pane_t1

0x1f79,	// (0x0004eab9) main_im_pane_ParamLimits

0x01f5,	// (0x0004cd35) main_mobtv_pane_ParamLimits

0x01f5,	// (0x0004cd35) main_mobtv_pane

0xc2ee,	// (0x00058e2e) main_cset6_slider_pane_g18_ParamLimits

0xc2ee,	// (0x00058e2e) main_cset6_slider_pane_g18

0xc312,	// (0x00058e52) main_cset6_slider_pane_g19_ParamLimits

0xc312,	// (0x00058e52) main_cset6_slider_pane_g19

0x4caf,	// (0x000517ef) bg_main_mobtv_pane_ParamLimits

0x4caf,	// (0x000517ef) bg_main_mobtv_pane

0xc658,	// (0x00059198) main_mobtv_info_pane

0xc663,	// (0x000591a3) main_mobtv_loading_pane_ParamLimits

0xc663,	// (0x000591a3) main_mobtv_loading_pane

0xe991,	// (0x0005b4d1) main_mobtv_pg_channel_list_pane

0xe99b,	// (0x0005b4db) main_mobtv_pg_hdr_pane

0xc670,	// (0x000591b0) main_mobtv_programe_curr_pane_ParamLimits

0xc670,	// (0x000591b0) main_mobtv_programe_curr_pane

0xc67d,	// (0x000591bd) main_mobtv_programe_next_pane_ParamLimits

0xc67d,	// (0x000591bd) main_mobtv_programe_next_pane

0xe9a4,	// (0x0005b4e4) popup_mobtv_noti_window

0x4274,	// (0x00050db4) main_tv_pg_hdr_pane_g1

0xe9ac,	// (0x0005b4ec) main_tv_pg_hdr_pane_g2

0xe9b4,	// (0x0005b4f4) main_tv_pg_hdr_pane_g3

0xe9bc,	// (0x0005b4fc) main_tv_pg_hdr_pane_g4

0xe9c4,	// (0x0005b504) main_tv_pg_hdr_pane_g5

0xe9ce,	// (0x0005b50e) main_tv_pg_hdr_pane_g6

0xe9d8,	// (0x0005b518) main_tv_pg_hdr_pane_g7

0xe9e2,	// (0x0005b522) main_tv_pg_hdr_pane_g8

0xe9ec,	// (0x0005b52c) main_tv_pg_hdr_pane_g9

0xe9f6,	// (0x0005b536) main_tv_pg_hdr_pane_g10

0xea00,	// (0x0005b540) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x0005c75d) main_tv_pg_hdr_pane_g

0xea0a,	// (0x0005b54a) main_tv_pg_hdr_pane_t1

0xea18,	// (0x0005b558) main_tv_pg_hdr_pane_t2

0xea26,	// (0x0005b566) main_tv_pg_hdr_pane_t3

0xea36,	// (0x0005b576) main_tv_pg_hdr_pane_t4

0xea46,	// (0x0005b586) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x0005c774) main_tv_pg_hdr_pane_t

0xea56,	// (0x0005b596) single_mobtv_pg_channel_pane_ParamLimits

0xea56,	// (0x0005b596) single_mobtv_pg_channel_pane

0xea68,	// (0x0005b5a8) single_mobtv_pg_channel_table_pane

0xea71,	// (0x0005b5b1) single_mobtv_pg_channel_thumb_pane

0xea7a,	// (0x0005b5ba) single_tv_pg_channel_pane_g1

0xea83,	// (0x0005b5c3) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x0005c77f) single_tv_pg_channel_pane_g

0x44e3,	// (0x00051023) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x44e3,	// (0x00051023) bg_single_mobtv_pg_channel_thumb_pane

0xea8c,	// (0x0005b5cc) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xea8c,	// (0x0005b5cc) single_mobtv_pg_channel_thumb_pane_g1

0xea9a,	// (0x0005b5da) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xea9a,	// (0x0005b5da) single_mobtv_pg_channel_thumb_pane_g2

0xeaa6,	// (0x0005b5e6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xeaa6,	// (0x0005b5e6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x0005c784) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x0005c784) single_mobtv_pg_channel_thumb_pane_g

0xeab2,	// (0x0005b5f2) single_mobtv_pg_channel_thumb_pane_t1

0xeac0,	// (0x0005b600) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x0005c78b) single_mobtv_pg_channel_thumb_pane_t

0x4274,	// (0x00050db4) bg_single_mobtv_pg_channel_table_pane_g1

0x4274,	// (0x00050db4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x0005c23b) bg_single_mobtv_pg_channel_table_pane_g

0xeace,	// (0x0005b60e) single_mobtv_pg_channel_table_pane_t1

0xeadc,	// (0x0005b61c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x0005c790) single_mobtv_pg_channel_table_pane_t

0xc692,	// (0x000591d2) main_mobtv_info_pane_g1_ParamLimits

0xc692,	// (0x000591d2) main_mobtv_info_pane_g1

0xc6ae,	// (0x000591ee) main_mobtv_info_pane_t1_ParamLimits

0xc6ae,	// (0x000591ee) main_mobtv_info_pane_t1

0xc726,	// (0x00059266) main_mobtv_info_pane_t2_ParamLimits

0xc726,	// (0x00059266) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x0005c79a) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x0005c79a) main_mobtv_info_pane_t

0xc7b5,	// (0x000592f5) wait_bar_pane_cp05

0xc7c7,	// (0x00059307) main_mobtv_loading_pane_g1_ParamLimits

0xc7c7,	// (0x00059307) main_mobtv_loading_pane_g1

0xc7d5,	// (0x00059315) main_mobtv_loading_pane_g2_ParamLimits

0xc7d5,	// (0x00059315) main_mobtv_loading_pane_g2

0xc7e1,	// (0x00059321) main_mobtv_loading_pane_g3_ParamLimits

0xc7e1,	// (0x00059321) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x0005c7a1) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x0005c7a1) main_mobtv_loading_pane_g

0xeaea,	// (0x0005b62a) main_mobtv_loading_pane_t1_ParamLimits

0xeaea,	// (0x0005b62a) main_mobtv_loading_pane_t1

0xeb02,	// (0x0005b642) main_mobtv_loading_pane_t2_ParamLimits

0xeb02,	// (0x0005b642) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x0005c7a8) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x0005c7a8) main_mobtv_loading_pane_t

0xc7ef,	// (0x0005932f) wait_bar_pane_cp06_ParamLimits

0xc7ef,	// (0x0005932f) wait_bar_pane_cp06

0xeb26,	// (0x0005b666) main_mobtv_programe_curr_pane_t1

0xeb34,	// (0x0005b674) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x0005c7ad) main_mobtv_programe_curr_pane_t

0xeb42,	// (0x0005b682) main_mobtv_programe_next_pane_t1

0xeb50,	// (0x0005b690) main_mobtv_programe_next_pane_t2

0xeb5e,	// (0x0005b69e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x0005c7b2) main_mobtv_programe_next_pane_t

0x017d,	// (0x0004ccbd) bg_popup_mobtv_noti_window_pane

0xeb6c,	// (0x0005b6ac) popup_mobtv_noti_window_g1

0xeb74,	// (0x0005b6b4) popup_mobtv_noti_window_t1

0xeb82,	// (0x0005b6c2) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x0005c7b9) popup_mobtv_noti_window_t

0x4274,	// (0x00050db4) bg_popup_mobtv_noti_window_pane_g1

0x017d,	// (0x0004ccbd) sc_clock_pane

0x017d,	// (0x0004ccbd) main_fs_bigclock_pane

0xbedf,	// (0x00058a1f) blid2_tripm_pane_t4_ParamLimits

0xbedf,	// (0x00058a1f) blid2_tripm_pane_t4

0xc7fb,	// (0x0005933b) sc_clock_pane_g1_ParamLimits

0xc7fb,	// (0x0005933b) sc_clock_pane_g1

0xc809,	// (0x00059349) sc_clock_pane_t1_ParamLimits

0xc809,	// (0x00059349) sc_clock_pane_t1

0xc81c,	// (0x0005935c) sc_clock_pane_t2_ParamLimits

0xc81c,	// (0x0005935c) sc_clock_pane_t2

0xc82e,	// (0x0005936e) sc_clock_pane_t3_ParamLimits

0xc82e,	// (0x0005936e) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x0005c7be) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x0005c7be) sc_clock_pane_t

0xd585,	// (0x0005a0c5) main_fs_bigclock_indicator_pane_ParamLimits

0xd585,	// (0x0005a0c5) main_fs_bigclock_indicator_pane

0xc8ba,	// (0x000593fa) main_fs_bigclock_pane_g1_ParamLimits

0xc8ba,	// (0x000593fa) main_fs_bigclock_pane_g1

0xd591,	// (0x0005a0d1) main_fs_bigclock_pane_t1_ParamLimits

0xd591,	// (0x0005a0d1) main_fs_bigclock_pane_t1

0xd5a3,	// (0x0005a0e3) main_fs_bigclock_pane_t2_ParamLimits

0xd5a3,	// (0x0005a0e3) main_fs_bigclock_pane_t2

0xd5b5,	// (0x0005a0f5) main_fs_bigclock_pane_t3_ParamLimits

0xd5b5,	// (0x0005a0f5) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x0005c9c2) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0005c9c2) main_fs_bigclock_pane_t

0x13a7,	// (0x0004dee7) main_fs_bigclock_indicator_pane_g1

0xe856,	// (0x0005b396) ncim_query_content_pane_g2_ParamLimits

0xe856,	// (0x0005b396) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x0005c74b) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x0005c74b) ncim_query_content_pane_g

0xc842,	// (0x00059382) sc_clock_pane_t4_ParamLimits

0xc842,	// (0x00059382) sc_clock_pane_t4

0x01f5,	// (0x0004cd35) main_radioblah_pane

0x4c0e,	// (0x0005174e) cell_call4_button_pane_t1_copy1_ParamLimits

0x4c0e,	// (0x0005174e) cell_call4_button_pane_t1_copy1

0xc4e4,	// (0x00059024) main_ncimui_pane_t1_ParamLimits

0xc4e4,	// (0x00059024) main_ncimui_pane_t1

0xc4fe,	// (0x0005903e) main_ncimui_pane_t2_ParamLimits

0xc4fe,	// (0x0005903e) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x0005c744) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x0005c744) main_ncimui_pane_t

0xeccb,	// (0x0005b80b) main_radioblah_anim_pane_ParamLimits

0xeccb,	// (0x0005b80b) main_radioblah_anim_pane

0xecdc,	// (0x0005b81c) main_radioblah_info_pane_ParamLimits

0xecdc,	// (0x0005b81c) main_radioblah_info_pane

0xecf0,	// (0x0005b830) main_radioblah_pane_t1_ParamLimits

0xecf0,	// (0x0005b830) main_radioblah_pane_t1

0xed0c,	// (0x0005b84c) main_radioblah_pane_t2_ParamLimits

0xed0c,	// (0x0005b84c) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x0005c7df) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x0005c7df) main_radioblah_pane_t

0xc90c,	// (0x0005944c) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc90c,	// (0x0005944c) main_radioblah_rocker_ctrl_pane

0xed54,	// (0x0005b894) main_radioblah_info_pane_t1_ParamLimits

0xed54,	// (0x0005b894) main_radioblah_info_pane_t1

0xc951,	// (0x00059491) main_radioblah_info_pane_t2_ParamLimits

0xc951,	// (0x00059491) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x0005c7e8) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x0005c7e8) main_radioblah_info_pane_t

0x4274,	// (0x00050db4) main_radioblah_rocker_ctrl_pane_g1

0xca01,	// (0x00059541) main_radioblah_rocker_ctrl_pane_g2

0xca09,	// (0x00059549) main_radioblah_rocker_ctrl_pane_g3

0xca11,	// (0x00059551) main_radioblah_rocker_ctrl_pane_g4

0xca19,	// (0x00059559) main_radioblah_rocker_ctrl_pane_g5

0xca21,	// (0x00059561) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x0005c7f1) main_radioblah_rocker_ctrl_pane_g

0xc496,	// (0x00058fd6) main_cset_text2_pane_t1_copy1_ParamLimits

0xab21,	// (0x00057661) cam4_image_uncrop_qvga_pane

0xac76,	// (0x000577b6) vid4_image_uncrop_qcif_pane

0xc06d,	// (0x00058bad) cam6_image_uncrop_qvga_pane_ParamLimits

0xc06d,	// (0x00058bad) cam6_image_uncrop_qvga_pane

0xe566,	// (0x0005b0a6) vid6_image_uncrop_qcif_pane_ParamLimits

0xe566,	// (0x0005b0a6) vid6_image_uncrop_qcif_pane

0x017d,	// (0x0004ccbd) bg_popup_preview_window_pane_cp03

0xe7fc,	// (0x0005b33c) list_cset_text2_pane

0xe804,	// (0x0005b344) main_cset6_text2_pane_g1

0xe80c,	// (0x0005b34c) main_cset6_text2_pane_t1

0xca29,	// (0x00059569) list_cset_text2_pane_t1_ParamLimits

0xca29,	// (0x00059569) list_cset_text2_pane_t1

0x01f5,	// (0x0004cd35) main_radioblah_pane_ParamLimits

0xc7a1,	// (0x000592e1) main_mobtv_info_pane_t3_ParamLimits

0xc7a1,	// (0x000592e1) main_mobtv_info_pane_t3

0xc8fa,	// (0x0005943a) main_radioblah_pane_g1

0xc925,	// (0x00059465) main_radioblah_info_pane_g1

0xc9a6,	// (0x000594e6) main_radioblah_info_pane_t3_ParamLimits

0xc9a6,	// (0x000594e6) main_radioblah_info_pane_t3

0x783f,	// (0x0005437f) highlight_cell_cale_month_pane_ParamLimits

0x783f,	// (0x0005437f) highlight_cell_cale_month_pane

0x017d,	// (0x0004ccbd) main_phob_fisheye_pane

0x45cb,	// (0x0005110b) scroll_pane_cp0031_ParamLimits

0x45cb,	// (0x0005110b) scroll_pane_cp0031

0xe674,	// (0x0005b1b4) wait_bar_pane_cp08_ParamLimits

0xc282,	// (0x00058dc2) cset_list_set_pane_copy1_ParamLimits

0xed8e,	// (0x0005b8ce) highlight_cell_cale_month_pane_g1

0xca54,	// (0x00059594) highlight_cell_cale_month_pane_t1

0xe30e,	// (0x0005ae4e) list_gen_pane_cp01

0xdf97,	// (0x0005aad7) scroll_pane_01

0xca62,	// (0x000595a2) list_single_double_fisheye_pane

0xca6b,	// (0x000595ab) list_double_fisheye_pane_g1_ParamLimits

0xca6b,	// (0x000595ab) list_double_fisheye_pane_g1

0xca77,	// (0x000595b7) list_double_fisheye_pane_g2_ParamLimits

0xca77,	// (0x000595b7) list_double_fisheye_pane_g2

0xca8b,	// (0x000595cb) list_double_fisheye_pane_g3_ParamLimits

0xca8b,	// (0x000595cb) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x0005c7fe) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x0005c7fe) list_double_fisheye_pane_g

0xcab4,	// (0x000595f4) list_double_fisheye_pane_t1_ParamLimits

0xcab4,	// (0x000595f4) list_double_fisheye_pane_t1

0xcacf,	// (0x0005960f) list_double_fisheye_pane_t2_ParamLimits

0xcacf,	// (0x0005960f) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x0005c809) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x0005c809) list_double_fisheye_pane_t

0x017d,	// (0x0004ccbd) main_call5_pane

0xc868,	// (0x000593a8) sc_swipe_pane_ParamLimits

0xc868,	// (0x000593a8) sc_swipe_pane

0xcafd,	// (0x0005963d) call5_image_pane_ParamLimits

0xcafd,	// (0x0005963d) call5_image_pane

0xcb0d,	// (0x0005964d) call5_swipe_1_pane_ParamLimits

0xcb0d,	// (0x0005964d) call5_swipe_1_pane

0xcb19,	// (0x00059659) call5_swipe_2_pane_ParamLimits

0xcb19,	// (0x00059659) call5_swipe_2_pane

0xcb33,	// (0x00059673) popup_call5_audio_first_window_ParamLimits

0xcb33,	// (0x00059673) popup_call5_audio_first_window

0x44e3,	// (0x00051023) call5_swipe_1_pane_g1_ParamLimits

0x44e3,	// (0x00051023) call5_swipe_1_pane_g1

0xed96,	// (0x0005b8d6) call5_swipe_1_pane_g2_ParamLimits

0xed96,	// (0x0005b8d6) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x0005c80e) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x0005c80e) call5_swipe_1_pane_g

0xeda2,	// (0x0005b8e2) call5_swipe_1_pane_t1_ParamLimits

0xeda2,	// (0x0005b8e2) call5_swipe_1_pane_t1

0x44e3,	// (0x00051023) call5_swipe_2_pane_g1_ParamLimits

0x44e3,	// (0x00051023) call5_swipe_2_pane_g1

0xedb7,	// (0x0005b8f7) call5_swipe_2_pane_g2_ParamLimits

0xedb7,	// (0x0005b8f7) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x0005c813) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x0005c813) call5_swipe_2_pane_g

0xedc3,	// (0x0005b903) call5_swipe_2_pane_t1_ParamLimits

0xedc3,	// (0x0005b903) call5_swipe_2_pane_t1

0xedd8,	// (0x0005b918) sc_swipe_pane_g1_ParamLimits

0xedd8,	// (0x0005b918) sc_swipe_pane_g1

0xede5,	// (0x0005b925) sc_swipe_pane_g2_ParamLimits

0xede5,	// (0x0005b925) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x0005c818) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x0005c818) sc_swipe_pane_g

0xedf1,	// (0x0005b931) sc_swipe_pane_t1_ParamLimits

0xedf1,	// (0x0005b931) sc_swipe_pane_t1

0x017d,	// (0x0004ccbd) main_cmail_launcher_pane

0xcb41,	// (0x00059681) aid_size_cell_cmail_l_ParamLimits

0xcb41,	// (0x00059681) aid_size_cell_cmail_l

0xcb51,	// (0x00059691) grid_cmail_l_pane_ParamLimits

0xcb51,	// (0x00059691) grid_cmail_l_pane

0xcb61,	// (0x000596a1) cell_cmail_l_pane_ParamLimits

0xcb61,	// (0x000596a1) cell_cmail_l_pane

0xcb75,	// (0x000596b5) cell_cmail_l_pane_g1_ParamLimits

0xcb75,	// (0x000596b5) cell_cmail_l_pane_g1

0xcb81,	// (0x000596c1) cell_cmail_l_pane_t1_ParamLimits

0xcb81,	// (0x000596c1) cell_cmail_l_pane_t1

0xee06,	// (0x0005b946) cell_cmail_l_pane_t2_ParamLimits

0xee06,	// (0x0005b946) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x0005c81d) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x0005c81d) cell_cmail_l_pane_t

0x01f5,	// (0x0004cd35) grid_highlight_pane_cp018_ParamLimits

0x01f5,	// (0x0004cd35) grid_highlight_pane_cp018

0x5b4c,	// (0x0005268c) main2_pane_ParamLimits

0x5b4c,	// (0x0005268c) main2_pane

0x2024,	// (0x0004eb64) popup_sp_fs_action_menu_bg_pane_g1

0x202c,	// (0x0004eb6c) popup_sp_fs_action_menu_bg_pane_g2

0x2034,	// (0x0004eb74) popup_sp_fs_action_menu_bg_pane_g3

0x203c,	// (0x0004eb7c) popup_sp_fs_action_menu_bg_pane_g4

0x2044,	// (0x0004eb84) popup_sp_fs_action_menu_bg_pane_g5

0x204c,	// (0x0004eb8c) popup_sp_fs_action_menu_bg_pane_g6

0x2054,	// (0x0004eb94) popup_sp_fs_action_menu_bg_pane_g7

0x205c,	// (0x0004eb9c) popup_sp_fs_action_menu_bg_pane_g8

0x2064,	// (0x0004eba4) popup_sp_fs_action_menu_bg_pane_g9

0x206c,	// (0x0004ebac) popup_sp_fs_action_menu_bg_pane_g10

0x206c,	// (0x0004ebac) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x0005bce7) popup_sp_fs_action_menu_bg_pane_g

0x0315,	// (0x0004ce55) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0315,	// (0x0004ce55) list_medium_line_x2_t3_g3_g1

0x0321,	// (0x0004ce61) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0321,	// (0x0004ce61) list_medium_line_x2_t3_g3_g2

0x032d,	// (0x0004ce6d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x032d,	// (0x0004ce6d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x0005bd97) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x0005bd97) list_medium_line_x2_t3_g3_g

0x0339,	// (0x0004ce79) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0339,	// (0x0004ce79) list_medium_line_x2_t3_g3_t1

0x6960,	// (0x000534a0) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6960,	// (0x000534a0) list_medium_line_x2_t3_g3_t2

0x034e,	// (0x0004ce8e) list_medium_line_x2_t3_g3_t3_ParamLimits

0x034e,	// (0x0004ce8e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x0005bd9e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x0005bd9e) list_medium_line_x2_t3_g3_t

0x0315,	// (0x0004ce55) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0315,	// (0x0004ce55) list_medium_line_x2_t3_g2_g1

0x032d,	// (0x0004ce6d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x032d,	// (0x0004ce6d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x0005bda5) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x0005bda5) list_medium_line_x2_t3_g2_g

0x0363,	// (0x0004cea3) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0363,	// (0x0004cea3) list_medium_line_x2_t3_g2_t1

0x0379,	// (0x0004ceb9) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0379,	// (0x0004ceb9) list_medium_line_x2_t3_g2_t2

0x034e,	// (0x0004ce8e) list_medium_line_x2_t3_g2_t3_ParamLimits

0x034e,	// (0x0004ce8e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0005bdaa) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0005bdaa) list_medium_line_x2_t3_g2_t

0x0315,	// (0x0004ce55) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0315,	// (0x0004ce55) list_medium_line_x2_t4_g4_g1

0x038b,	// (0x0004cecb) list_medium_line_x2_t4_g4_g2_ParamLimits

0x038b,	// (0x0004cecb) list_medium_line_x2_t4_g4_g2

0x0321,	// (0x0004ce61) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0321,	// (0x0004ce61) list_medium_line_x2_t4_g4_g3

0x0397,	// (0x0004ced7) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0397,	// (0x0004ced7) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x0005bdb1) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x0005bdb1) list_medium_line_x2_t4_g4_g

0x6974,	// (0x000534b4) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6974,	// (0x000534b4) list_medium_line_x2_t4_g4_t1

0x698b,	// (0x000534cb) list_medium_line_x2_t4_g4_t2_ParamLimits

0x698b,	// (0x000534cb) list_medium_line_x2_t4_g4_t2

0x69a0,	// (0x000534e0) list_medium_line_x2_t4_g4_t3_ParamLimits

0x69a0,	// (0x000534e0) list_medium_line_x2_t4_g4_t3

0x03a3,	// (0x0004cee3) list_medium_line_x2_t4_g4_t4_ParamLimits

0x03a3,	// (0x0004cee3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x0005bdba) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x0005bdba) list_medium_line_x2_t4_g4_t

0x0315,	// (0x0004ce55) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0315,	// (0x0004ce55) list_medium_line_x2_t2_g4_g1

0x038b,	// (0x0004cecb) list_medium_line_x2_t2_g4_g2_ParamLimits

0x038b,	// (0x0004cecb) list_medium_line_x2_t2_g4_g2

0x0321,	// (0x0004ce61) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0321,	// (0x0004ce61) list_medium_line_x2_t2_g4_g3

0x032d,	// (0x0004ce6d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x032d,	// (0x0004ce6d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x0005be21) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x0005be21) list_medium_line_x2_t2_g4_g

0x03b5,	// (0x0004cef5) list_medium_line_x2_t2_g4_t1_ParamLimits

0x03b5,	// (0x0004cef5) list_medium_line_x2_t2_g4_t1

0x034e,	// (0x0004ce8e) list_medium_line_x2_t2_g4_t2_ParamLimits

0x034e,	// (0x0004ce8e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0005be2a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0005be2a) list_medium_line_x2_t2_g4_t

0x0315,	// (0x0004ce55) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0315,	// (0x0004ce55) list_medium_line_x2_t2_g3_g1

0x0321,	// (0x0004ce61) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0321,	// (0x0004ce61) list_medium_line_x2_t2_g3_g2

0x032d,	// (0x0004ce6d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x032d,	// (0x0004ce6d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x0005bd97) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x0005bd97) list_medium_line_x2_t2_g3_g

0x03ca,	// (0x0004cf0a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x03ca,	// (0x0004cf0a) list_medium_line_x2_t2_g3_t1

0x034e,	// (0x0004ce8e) list_medium_line_x2_t2_g3_t2_ParamLimits

0x034e,	// (0x0004ce8e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x0005be2f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x0005be2f) list_medium_line_x2_t2_g3_t

0x7abb,	// (0x000545fb) main_sp_fs_list_pane_ParamLimits

0x7abb,	// (0x000545fb) main_sp_fs_list_pane

0x7ac7,	// (0x00054607) sp_fs_scroll_pane_ParamLimits

0x7ac7,	// (0x00054607) sp_fs_scroll_pane

0x7ad3,	// (0x00054613) list_medium_line_x2_t3_t1

0x7ae3,	// (0x00054623) list_medium_line_x2_t3_t2

0x040d,	// (0x0004cf4d) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0005be7a) list_medium_line_x2_t3_t

0x7af1,	// (0x00054631) list_medium_line_x3_t4_t1

0x7b01,	// (0x00054641) list_medium_line_x3_t4_t2

0x041b,	// (0x0004cf5b) list_medium_line_x3_t4_t3

0x040d,	// (0x0004cf4d) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x0005be81) list_medium_line_x3_t4_t

0x7b0f,	// (0x0005464f) list_medium_line_x4_t5_t1

0x7b1f,	// (0x0005465f) list_medium_line_x4_t5_t2

0x041b,	// (0x0004cf5b) list_medium_line_x4_t5_t3

0x0429,	// (0x0004cf69) list_medium_line_x4_t5_t4

0x040d,	// (0x0004cf4d) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0005be8a) list_medium_line_x4_t5_t

0x0315,	// (0x0004ce55) list_medium_line_t4_g4_g1_ParamLimits

0x0315,	// (0x0004ce55) list_medium_line_t4_g4_g1

0x0397,	// (0x0004ced7) list_medium_line_t4_g4_g2_ParamLimits

0x0397,	// (0x0004ced7) list_medium_line_t4_g4_g2

0x0437,	// (0x0004cf77) list_medium_line_t4_g4_g3_ParamLimits

0x0437,	// (0x0004cf77) list_medium_line_t4_g4_g3

0x032d,	// (0x0004ce6d) list_medium_line_t4_g4_g4_ParamLimits

0x032d,	// (0x0004ce6d) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x0005be95) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x0005be95) list_medium_line_t4_g4_g

0x0443,	// (0x0004cf83) list_medium_line_t4_g4_t1_ParamLimits

0x0443,	// (0x0004cf83) list_medium_line_t4_g4_t1

0x0458,	// (0x0004cf98) list_medium_line_t4_g4_t2_ParamLimits

0x0458,	// (0x0004cf98) list_medium_line_t4_g4_t2

0x046d,	// (0x0004cfad) list_medium_line_t4_g4_t3_ParamLimits

0x046d,	// (0x0004cfad) list_medium_line_t4_g4_t3

0x034e,	// (0x0004ce8e) list_medium_line_t4_g4_t4_ParamLimits

0x034e,	// (0x0004ce8e) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x0005be9e) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x0005be9e) list_medium_line_t4_g4_t

0x7c14,	// (0x00054754) chi_dic_find_pane_g1

0x8c52,	// (0x00055792) main_tport_pane

0x09ff,	// (0x0004d53f) list_medium_line_plain_t1

0x0a49,	// (0x0004d589) list_medium_line_t2_g2_g1_ParamLimits

0x0a49,	// (0x0004d589) list_medium_line_t2_g2_g1

0x0a55,	// (0x0004d595) list_medium_line_t2_g2_g2_ParamLimits

0x0a55,	// (0x0004d595) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x0005c55a) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x0005c55a) list_medium_line_t2_g2_g

0xb6f4,	// (0x00058234) list_medium_line_t2_g2_t1_ParamLimits

0xb6f4,	// (0x00058234) list_medium_line_t2_g2_t1

0xb70e,	// (0x0005824e) list_medium_line_t2_g2_t2_ParamLimits

0xb70e,	// (0x0005824e) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x0005c55f) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x0005c55f) list_medium_line_t2_g2_t

0x0b81,	// (0x0004d6c1) aid_sp_fs_list_icon_a_sm

0x0b89,	// (0x0004d6c9) aid_sp_fs_list_icon_d

0x0b91,	// (0x0004d6d1) aid_sp_fs_text_primary

0xe317,	// (0x0005ae57) aid_sp_fs_text_secondary

0x39b5,	// (0x000504f5) list_medium_line

0x39b5,	// (0x000504f5) list_medium_line_g2

0x39b5,	// (0x000504f5) list_medium_line_g3

0x39b5,	// (0x000504f5) list_medium_line_plain

0x39b5,	// (0x000504f5) list_medium_line_plain_t2

0x39b5,	// (0x000504f5) list_medium_line_plain_t3

0x39b5,	// (0x000504f5) list_medium_line_right_icon

0x39b5,	// (0x000504f5) list_medium_line_right_iconx2

0x39b5,	// (0x000504f5) list_medium_line_t2

0x39b5,	// (0x000504f5) list_medium_line_t2_g2

0x39b5,	// (0x000504f5) list_medium_line_t2_g3

0x39b5,	// (0x000504f5) list_medium_line_t2_right_icon

0x39b5,	// (0x000504f5) list_medium_line_t2_right_iconx2

0x39b5,	// (0x000504f5) list_medium_line_t3

0x39b5,	// (0x000504f5) list_medium_line_t3_g2

0x39b5,	// (0x000504f5) list_medium_line_t3_g3

0x39b5,	// (0x000504f5) list_medium_line_t3_right_iconx2

0x0b9a,	// (0x0004d6da) list_medium_line_t4_g4

0x0ba3,	// (0x0004d6e3) list_medium_line_x2

0x0ba3,	// (0x0004d6e3) list_medium_line_x2_t2_g2

0x0ba3,	// (0x0004d6e3) list_medium_line_x2_t2_g3

0x0ba3,	// (0x0004d6e3) list_medium_line_x2_t2_g4

0x0ba3,	// (0x0004d6e3) list_medium_line_x2_t3

0x0ba3,	// (0x0004d6e3) list_medium_line_x2_t3_g2

0x0ba3,	// (0x0004d6e3) list_medium_line_x2_t3_g3

0x0ba3,	// (0x0004d6e3) list_medium_line_x2_t3_g4

0x0ba3,	// (0x0004d6e3) list_medium_line_x2_t4_g2

0x0ba3,	// (0x0004d6e3) list_medium_line_x2_t4_g4

0x0bac,	// (0x0004d6ec) list_medium_line_x3

0x0bac,	// (0x0004d6ec) list_medium_line_x3_t4

0x0bac,	// (0x0004d6ec) list_medium_line_x3_t4_g4

0x0b9a,	// (0x0004d6da) list_medium_line_x4_t4

0x0b9a,	// (0x0004d6da) list_medium_line_x4_t4_g7

0x0b9a,	// (0x0004d6da) list_medium_line_x4_t5

0x0bb5,	// (0x0004d6f5) list_single_fs_dyc_pane_ParamLimits

0x0bb5,	// (0x0004d6f5) list_single_fs_dyc_pane

0x0315,	// (0x0004ce55) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0315,	// (0x0004ce55) list_medium_line_x4_t4_g7_g1

0x0c03,	// (0x0004d743) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0c03,	// (0x0004d743) list_medium_line_x4_t4_g7_g2

0x0c0f,	// (0x0004d74f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0c0f,	// (0x0004d74f) list_medium_line_x4_t4_g7_g3

0x0c1e,	// (0x0004d75e) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0c1e,	// (0x0004d75e) list_medium_line_x4_t4_g7_g4

0x0c2a,	// (0x0004d76a) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0c2a,	// (0x0004d76a) list_medium_line_x4_t4_g7_g5

0x0c39,	// (0x0004d779) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0c39,	// (0x0004d779) list_medium_line_x4_t4_g7_g6

0x0c48,	// (0x0004d788) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0c48,	// (0x0004d788) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x0005c72a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x0005c72a) list_medium_line_x4_t4_g7_g

0x0c54,	// (0x0004d794) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0c54,	// (0x0004d794) list_medium_line_x4_t4_g7_t1

0x0c69,	// (0x0004d7a9) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0c69,	// (0x0004d7a9) list_medium_line_x4_t4_g7_t2

0x0c7e,	// (0x0004d7be) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0c7e,	// (0x0004d7be) list_medium_line_x4_t4_g7_t3

0x0c93,	// (0x0004d7d3) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0c93,	// (0x0004d7d3) list_medium_line_x4_t4_g7_t4

0x0ca5,	// (0x0004d7e5) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0ca5,	// (0x0004d7e5) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x0005c739) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x0005c739) list_medium_line_x4_t4_g7_t

0x0cb7,	// (0x0004d7f7) list_single_dyc_row_pane_ParamLimits

0x0cb7,	// (0x0004d7f7) list_single_dyc_row_pane

0xcaf1,	// (0x00059631) call5_gesture_pane_ParamLimits

0xcaf1,	// (0x00059631) call5_gesture_pane

0xcb25,	// (0x00059665) call5_windows_pane_ParamLimits

0xcb25,	// (0x00059665) call5_windows_pane

0xcb97,	// (0x000596d7) call5_swipe_1_pane_cp_ParamLimits

0xcb97,	// (0x000596d7) call5_swipe_1_pane_cp

0xcba3,	// (0x000596e3) call5_swipe_2_pane_cp_ParamLimits

0xcba3,	// (0x000596e3) call5_swipe_2_pane_cp

0x2a03,	// (0x0004f543) call5_image_pane_cp

0xcbaf,	// (0x000596ef) popup_call5_audio_first_window_cp_ParamLimits

0xcbaf,	// (0x000596ef) popup_call5_audio_first_window_cp

0xedd8,	// (0x0005b918) call5_swipe_1_pane_g1_cp_ParamLimits

0xedd8,	// (0x0005b918) call5_swipe_1_pane_g1_cp

0xee18,	// (0x0005b958) call5_swipe_1_pane_g2_cp

0xedf1,	// (0x0005b931) call5_swipe_1_pane_t1_cp_ParamLimits

0xedf1,	// (0x0005b931) call5_swipe_1_pane_t1_cp

0xedd8,	// (0x0005b918) call5_swipe_2_pane_g1_cp_ParamLimits

0xedd8,	// (0x0005b918) call5_swipe_2_pane_g1_cp

0xee20,	// (0x0005b960) call5_swipe_2_pane_g2_cp

0xee28,	// (0x0005b968) call5_swipe_2_pane_t1_cp_ParamLimits

0xee28,	// (0x0005b968) call5_swipe_2_pane_t1_cp

0x01f5,	// (0x0004cd35) main_sp_fs_email_pane

0xee3d,	// (0x0005b97d) main_sp_fs_listscroll_pane_te

0x0cd4,	// (0x0004d814) popup_sp_fs_action_menu_pane_ParamLimits

0x0cd4,	// (0x0004d814) popup_sp_fs_action_menu_pane

0x4274,	// (0x00050db4) bg_sp_fs_ctrlbar_pane_g1

0xee46,	// (0x0005b986) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xee4f,	// (0x0005b98f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xee58,	// (0x0005b998) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x4274,	// (0x00050db4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x0005c822) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4057,	// (0x00050b97) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4057,	// (0x00050b97) bg_sp_fs_ctrlbar_ddmenu_pane

0xee61,	// (0x0005b9a1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xee61,	// (0x0005b9a1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xee6d,	// (0x0005b9ad) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xee6d,	// (0x0005b9ad) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x0005c82b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x0005c82b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xee79,	// (0x0005b9b9) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xee79,	// (0x0005b9b9) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0d14,	// (0x0004d854) list_medium_line_t2_right_icon_g1

0xcbbb,	// (0x000596fb) list_medium_line_t2_right_icon_t1

0xcbcb,	// (0x0005970b) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x0005c830) list_medium_line_t2_right_icon_t

0x3e2b,	// (0x0005096b) bg_sp_fs_ctrlbar_pane_ParamLimits

0x3e2b,	// (0x0005096b) bg_sp_fs_ctrlbar_pane

0xcc30,	// (0x00059770) main_sp_fs_ctrlbar_button_pane_cp01

0xcc38,	// (0x00059778) main_sp_fs_ctrlbar_ddmenu_pane

0x368e,	// (0x000501ce) main_sp_fs_ctrlbar_pane_g1

0xeecb,	// (0x0005ba0b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x0005c835) main_sp_fs_ctrlbar_pane_g

0xeed7,	// (0x0005ba17) main_sp_fs_ctrlbar_pane_t1

0xcc42,	// (0x00059782) main_sp_fs_ctrlbar_pane

0xcc5c,	// (0x0005979c) main_sp_fs_listscroll_pane_te_cp01

0xcc6d,	// (0x000597ad) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xcc6d,	// (0x000597ad) popup_sp_fs_action_menu_pane_cp01

0x01f5,	// (0x0004cd35) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x01f5,	// (0x0004cd35) bg_sp_fs_highlight_list_pane_cp01

0x0d1c,	// (0x0004d85c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x0d1c,	// (0x0004d85c) sp_fs_action_menu_list_gene_pane_g1

0xeefc,	// (0x0005ba3c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xeefc,	// (0x0005ba3c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0005c83f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0005c83f) sp_fs_action_menu_list_gene_pane_g

0x0d2b,	// (0x0004d86b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x0d2b,	// (0x0004d86b) sp_fs_action_menu_list_gene_pane_t1

0x0d43,	// (0x0004d883) sp_fs_action_menu_list_gene_pane_ParamLimits

0x0d43,	// (0x0004d883) sp_fs_action_menu_list_gene_pane

0xef09,	// (0x0005ba49) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xef09,	// (0x0005ba49) popup_sp_fs_action_menu_bg_pane

0x0d60,	// (0x0004d8a0) sp_fs_action_menu_list_pane_ParamLimits

0x0d60,	// (0x0004d8a0) sp_fs_action_menu_list_pane

0xef17,	// (0x0005ba57) sp_fs_scroll_pane_cp01_ParamLimits

0xef17,	// (0x0005ba57) sp_fs_scroll_pane_cp01

0xcc85,	// (0x000597c5) list_medium_line_plain_t2_t1

0xcc95,	// (0x000597d5) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0005c844) list_medium_line_plain_t2_t

0xcca3,	// (0x000597e3) list_medium_line_plain_t3_t1

0xccb3,	// (0x000597f3) list_medium_line_plain_t3_t2

0xccc1,	// (0x00059801) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0005c849) list_medium_line_plain_t3_t

0x0315,	// (0x0004ce55) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0315,	// (0x0004ce55) list_medium_line_x2_t2_g2_g1

0x032d,	// (0x0004ce6d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x032d,	// (0x0004ce6d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x0005bda5) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x0005bda5) list_medium_line_x2_t2_g2_g

0x0443,	// (0x0004cf83) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0443,	// (0x0004cf83) list_medium_line_x2_t2_g2_t1

0x034e,	// (0x0004ce8e) list_medium_line_x2_t2_g2_t2_ParamLimits

0x034e,	// (0x0004ce8e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0005c850) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0005c850) list_medium_line_x2_t2_g2_t

0x0315,	// (0x0004ce55) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0315,	// (0x0004ce55) list_medium_line_x2_t4_g2_g1

0x0d7e,	// (0x0004d8be) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0d7e,	// (0x0004d8be) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x0005c855) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x0005c855) list_medium_line_x2_t4_g2_g

0xcccf,	// (0x0005980f) list_medium_line_x2_t4_g2_t1_ParamLimits

0xcccf,	// (0x0005980f) list_medium_line_x2_t4_g2_t1

0xcce9,	// (0x00059829) list_medium_line_x2_t4_g2_t2_ParamLimits

0xcce9,	// (0x00059829) list_medium_line_x2_t4_g2_t2

0xccfe,	// (0x0005983e) list_medium_line_x2_t4_g2_t3_ParamLimits

0xccfe,	// (0x0005983e) list_medium_line_x2_t4_g2_t3

0x034e,	// (0x0004ce8e) list_medium_line_x2_t4_g2_t4_ParamLimits

0x034e,	// (0x0004ce8e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x0005c85a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x0005c85a) list_medium_line_x2_t4_g2_t

0x0d90,	// (0x0004d8d0) list_medium_line_t3_right_iconx2_g1

0x0d14,	// (0x0004d854) list_medium_line_t3_right_iconx2_g2

0xcd13,	// (0x00059853) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x0005c863) list_medium_line_t3_right_iconx2_g

0xcd1b,	// (0x0005985b) list_medium_line_t3_right_iconx2_t1

0xcd2b,	// (0x0005986b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x0005c86a) list_medium_line_t3_right_iconx2_t

0x0315,	// (0x0004ce55) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0315,	// (0x0004ce55) list_medium_line_x3_t4_g4_g1

0x0321,	// (0x0004ce61) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0321,	// (0x0004ce61) list_medium_line_x3_t4_g4_g2

0x0397,	// (0x0004ced7) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0397,	// (0x0004ced7) list_medium_line_x3_t4_g4_g3

0x0d98,	// (0x0004d8d8) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0d98,	// (0x0004d8d8) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x0005c86f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x0005c86f) list_medium_line_x3_t4_g4_g

0xcd39,	// (0x00059879) list_medium_line_x3_t4_g4_t1_ParamLimits

0xcd39,	// (0x00059879) list_medium_line_x3_t4_g4_t1

0xcd50,	// (0x00059890) list_medium_line_x3_t4_g4_t2_ParamLimits

0xcd50,	// (0x00059890) list_medium_line_x3_t4_g4_t2

0x0458,	// (0x0004cf98) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0458,	// (0x0004cf98) list_medium_line_x3_t4_g4_t3

0x0da4,	// (0x0004d8e4) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0da4,	// (0x0004d8e4) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x0005c878) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x0005c878) list_medium_line_x3_t4_g4_t

0xcd65,	// (0x000598a5) list_single_dyc_row_text_pane_t1_ParamLimits

0xcd65,	// (0x000598a5) list_single_dyc_row_text_pane_t1

0xcd9c,	// (0x000598dc) list_single_dyc_row_text_pane_t2_ParamLimits

0xcd9c,	// (0x000598dc) list_single_dyc_row_text_pane_t2

0x0dc1,	// (0x0004d901) list_single_dyc_row_text_pane_t3_ParamLimits

0x0dc1,	// (0x0004d901) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x0005c881) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x0005c881) list_single_dyc_row_text_pane_t

0x0dd3,	// (0x0004d913) list_single_dyc_row_pane_g1_ParamLimits

0x0dd3,	// (0x0004d913) list_single_dyc_row_pane_g1

0x0ddf,	// (0x0004d91f) list_single_dyc_row_pane_g2_ParamLimits

0x0ddf,	// (0x0004d91f) list_single_dyc_row_pane_g2

0x0deb,	// (0x0004d92b) list_single_dyc_row_pane_g3_ParamLimits

0x0deb,	// (0x0004d92b) list_single_dyc_row_pane_g3

0x0df7,	// (0x0004d937) list_single_dyc_row_pane_g4_ParamLimits

0x0df7,	// (0x0004d937) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x0005c888) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x0005c888) list_single_dyc_row_pane_g

0x0e03,	// (0x0004d943) list_single_dyc_row_text_pane_ParamLimits

0x0e03,	// (0x0004d943) list_single_dyc_row_text_pane

0x017d,	// (0x0004ccbd) bg_sp_fs_scroll_pane

0xef3d,	// (0x0005ba7d) thumb_sp_fs_scroll_pane

0x0a49,	// (0x0004d589) list_medium_line_g1_ParamLimits

0x0a49,	// (0x0004d589) list_medium_line_g1

0x0e22,	// (0x0004d962) list_medium_line_t1_ParamLimits

0x0e22,	// (0x0004d962) list_medium_line_t1

0x0315,	// (0x0004ce55) list_medium_line_x2_g1_ParamLimits

0x0315,	// (0x0004ce55) list_medium_line_x2_g1

0x0321,	// (0x0004ce61) list_medium_line_x2_g2_ParamLimits

0x0321,	// (0x0004ce61) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x0005c891) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x0005c891) list_medium_line_x2_g

0x0e37,	// (0x0004d977) list_medium_line_x2_t1_ParamLimits

0x0e37,	// (0x0004d977) list_medium_line_x2_t1

0x0315,	// (0x0004ce55) list_medium_line_x3_g1_ParamLimits

0x0315,	// (0x0004ce55) list_medium_line_x3_g1

0x0321,	// (0x0004ce61) list_medium_line_x3_g2_ParamLimits

0x0321,	// (0x0004ce61) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x0005c891) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x0005c891) list_medium_line_x3_g

0x0e37,	// (0x0004d977) list_medium_line_x3_t1_ParamLimits

0x0e37,	// (0x0004d977) list_medium_line_x3_t1

0xef46,	// (0x0005ba86) thumb_sp_fs_scroll_pane_g1

0xef4f,	// (0x0005ba8f) thumb_sp_fs_scroll_pane_g2

0xef58,	// (0x0005ba98) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0005c896) thumb_sp_fs_scroll_pane_g

0xef46,	// (0x0005ba86) bg_sp_fs_scroll_pane_g1

0xef4f,	// (0x0005ba8f) bg_sp_fs_scroll_pane_g2

0xef58,	// (0x0005ba98) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0005c896) bg_sp_fs_scroll_pane_g

0x0315,	// (0x0004ce55) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0315,	// (0x0004ce55) list_medium_line_x2_t3_g4_g1

0x038b,	// (0x0004cecb) list_medium_line_x2_t3_g4_g2_ParamLimits

0x038b,	// (0x0004cecb) list_medium_line_x2_t3_g4_g2

0x0321,	// (0x0004ce61) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0321,	// (0x0004ce61) list_medium_line_x2_t3_g4_g3

0x032d,	// (0x0004ce6d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x032d,	// (0x0004ce6d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x0005be21) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x0005be21) list_medium_line_x2_t3_g4_g

0xcdf6,	// (0x00059936) list_medium_line_x2_t3_g4_t1_ParamLimits

0xcdf6,	// (0x00059936) list_medium_line_x2_t3_g4_t1

0xce0c,	// (0x0005994c) list_medium_line_x2_t3_g4_t2_ParamLimits

0xce0c,	// (0x0005994c) list_medium_line_x2_t3_g4_t2

0x034e,	// (0x0004ce8e) list_medium_line_x2_t3_g4_t3_ParamLimits

0x034e,	// (0x0004ce8e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x0005c89d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x0005c89d) list_medium_line_x2_t3_g4_t

0x0a49,	// (0x0004d589) list_medium_line_g2_g1_ParamLimits

0x0a49,	// (0x0004d589) list_medium_line_g2_g1

0x0a55,	// (0x0004d595) list_medium_line_g2_g2_ParamLimits

0x0a55,	// (0x0004d595) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x0005c55a) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x0005c55a) list_medium_line_g2_g

0x0e4d,	// (0x0004d98d) list_medium_line_g2_t1_ParamLimits

0x0e4d,	// (0x0004d98d) list_medium_line_g2_t1

0x0a49,	// (0x0004d589) list_medium_line_t3_g2_g1_ParamLimits

0x0a49,	// (0x0004d589) list_medium_line_t3_g2_g1

0x0a55,	// (0x0004d595) list_medium_line_t3_g2_g2_ParamLimits

0x0a55,	// (0x0004d595) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x0005c55a) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x0005c55a) list_medium_line_t3_g2_g

0xce25,	// (0x00059965) list_medium_line_t3_g2_t1_ParamLimits

0xce25,	// (0x00059965) list_medium_line_t3_g2_t1

0xce3f,	// (0x0005997f) list_medium_line_t3_g2_t2_ParamLimits

0xce3f,	// (0x0005997f) list_medium_line_t3_g2_t2

0xce54,	// (0x00059994) list_medium_line_t3_g2_t3_ParamLimits

0xce54,	// (0x00059994) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x0005c8a4) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x0005c8a4) list_medium_line_t3_g2_t

0x0d14,	// (0x0004d854) list_medium_line_right_icon_g1

0x0e62,	// (0x0004d9a2) list_medium_line_right_icon_t1

0x0a49,	// (0x0004d589) list_medium_line_t2_g1_ParamLimits

0x0a49,	// (0x0004d589) list_medium_line_t2_g1

0xce6a,	// (0x000599aa) list_medium_line_t2_t1_ParamLimits

0xce6a,	// (0x000599aa) list_medium_line_t2_t1

0xce81,	// (0x000599c1) list_medium_line_t2_t2_ParamLimits

0xce81,	// (0x000599c1) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x0005c8ab) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x0005c8ab) list_medium_line_t2_t

0x0a49,	// (0x0004d589) list_medium_line_t3_g1_ParamLimits

0x0a49,	// (0x0004d589) list_medium_line_t3_g1

0xce93,	// (0x000599d3) list_medium_line_t3_t1_ParamLimits

0xce93,	// (0x000599d3) list_medium_line_t3_t1

0xceaa,	// (0x000599ea) list_medium_line_t3_t2_ParamLimits

0xceaa,	// (0x000599ea) list_medium_line_t3_t2

0xcebf,	// (0x000599ff) list_medium_line_t3_t3_ParamLimits

0xcebf,	// (0x000599ff) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x0005c8b0) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x0005c8b0) list_medium_line_t3_t

0x0a49,	// (0x0004d589) list_medium_line_g3_g1_ParamLimits

0x0a49,	// (0x0004d589) list_medium_line_g3_g1

0x0e70,	// (0x0004d9b0) list_medium_line_g3_g2_ParamLimits

0x0e70,	// (0x0004d9b0) list_medium_line_g3_g2

0x0a55,	// (0x0004d595) list_medium_line_g3_g3_ParamLimits

0x0a55,	// (0x0004d595) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x0005c8b7) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x0005c8b7) list_medium_line_g3_g

0x0e7c,	// (0x0004d9bc) list_medium_line_g3_t1_ParamLimits

0x0e7c,	// (0x0004d9bc) list_medium_line_g3_t1

0x0a49,	// (0x0004d589) list_medium_line_t2_g3_g1_ParamLimits

0x0a49,	// (0x0004d589) list_medium_line_t2_g3_g1

0x0e70,	// (0x0004d9b0) list_medium_line_t2_g3_g2_ParamLimits

0x0e70,	// (0x0004d9b0) list_medium_line_t2_g3_g2

0x0a55,	// (0x0004d595) list_medium_line_t2_g3_g3_ParamLimits

0x0a55,	// (0x0004d595) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x0005c8b7) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x0005c8b7) list_medium_line_t2_g3_g

0xced1,	// (0x00059a11) list_medium_line_t2_g3_t1_ParamLimits

0xced1,	// (0x00059a11) list_medium_line_t2_g3_t1

0xceeb,	// (0x00059a2b) list_medium_line_t2_g3_t2_ParamLimits

0xceeb,	// (0x00059a2b) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x0005c8be) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x0005c8be) list_medium_line_t2_g3_t

0x0a49,	// (0x0004d589) list_medium_line_t3_g3_g1_ParamLimits

0x0a49,	// (0x0004d589) list_medium_line_t3_g3_g1

0x0e70,	// (0x0004d9b0) list_medium_line_t3_g3_g2_ParamLimits

0x0e70,	// (0x0004d9b0) list_medium_line_t3_g3_g2

0x0a55,	// (0x0004d595) list_medium_line_t3_g3_g3_ParamLimits

0x0a55,	// (0x0004d595) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x0005c8b7) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x0005c8b7) list_medium_line_t3_g3_g

0xcf00,	// (0x00059a40) list_medium_line_t3_g3_t1_ParamLimits

0xcf00,	// (0x00059a40) list_medium_line_t3_g3_t1

0xcf19,	// (0x00059a59) list_medium_line_t3_g3_t2_ParamLimits

0xcf19,	// (0x00059a59) list_medium_line_t3_g3_t2

0xcf2f,	// (0x00059a6f) list_medium_line_t3_g3_t3_ParamLimits

0xcf2f,	// (0x00059a6f) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x0005c8c3) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x0005c8c3) list_medium_line_t3_g3_t

0x0d90,	// (0x0004d8d0) list_medium_line_right_iconx2_g1

0x0d14,	// (0x0004d854) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0005c8ca) list_medium_line_right_iconx2_g

0x0e91,	// (0x0004d9d1) list_medium_line_right_iconx2_t1

0x0d90,	// (0x0004d8d0) list_medium_line_t2_right_iconx2_g1

0x0d14,	// (0x0004d854) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0005c8ca) list_medium_line_t2_right_iconx2_g

0xcf45,	// (0x00059a85) list_medium_line_t2_right_iconx2_t1

0xcf55,	// (0x00059a95) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x0005c8cf) list_medium_line_t2_right_iconx2_t

0x0e9f,	// (0x0004d9df) list_medium_line_x4_t4_t1

0xcf63,	// (0x00059aa3) list_medium_line_x4_t4_t2

0xcf73,	// (0x00059ab3) list_medium_line_x4_t4_t3

0xcf83,	// (0x00059ac3) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x0005c8d4) list_medium_line_x4_t4_t

0xcfbc,	// (0x00059afc) tport_appsw_pane_ParamLimits

0xcfbc,	// (0x00059afc) tport_appsw_pane

0xcfc8,	// (0x00059b08) tport_contact_pane_ParamLimits

0xcfc8,	// (0x00059b08) tport_contact_pane

0xcfd8,	// (0x00059b18) tport_listscroll_pane_ParamLimits

0xcfd8,	// (0x00059b18) tport_listscroll_pane

0xcfe8,	// (0x00059b28) cell_tport_appsw_pane_ParamLimits

0xcfe8,	// (0x00059b28) cell_tport_appsw_pane

0x4548,	// (0x00051088) tport_appsw_pane_g1_ParamLimits

0x4548,	// (0x00051088) tport_appsw_pane_g1

0xef61,	// (0x0005baa1) tport_contact_pane_g1

0xef6a,	// (0x0005baaa) tport_contact_pane_t1

0xef78,	// (0x0005bab8) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x0005c8dd) tport_contact_pane_t

0xef86,	// (0x0005bac6) list_tport_pane

0xef8f,	// (0x0005bacf) scroll_pane_cp_030

0xefa0,	// (0x0005bae0) cell_tport_appsw_pane_g1

0xefb0,	// (0x0005baf0) cell_tport_appsw_pane_t1

0x017d,	// (0x0004ccbd) grid_highlight_pane_cp019

0xd013,	// (0x00059b53) list_tport_double_graphic_pane_ParamLimits

0xd013,	// (0x00059b53) list_tport_double_graphic_pane

0x01f5,	// (0x0004cd35) list_highlight_pane_cp023_ParamLimits

0x01f5,	// (0x0004cd35) list_highlight_pane_cp023

0xd026,	// (0x00059b66) list_tport_double_graphic_pane_g1_ParamLimits

0xd026,	// (0x00059b66) list_tport_double_graphic_pane_g1

0xd033,	// (0x00059b73) list_tport_double_graphic_pane_t1_ParamLimits

0xd033,	// (0x00059b73) list_tport_double_graphic_pane_t1

0xd048,	// (0x00059b88) list_tport_double_graphic_pane_t2_ParamLimits

0xd048,	// (0x00059b88) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x0005c8e9) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x0005c8e9) list_tport_double_graphic_pane_t

0x017d,	// (0x0004ccbd) main_cale_note_pane

0xaecf,	// (0x00057a0f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xaecf,	// (0x00057a0f) cell_vitu2_function_top_wide_pane_cp01

0xc7b5,	// (0x000592f5) wait_bar_pane_cp05_ParamLimits

0x017d,	// (0x0004ccbd) listscroll_cmail_pane

0xefc6,	// (0x0005bb06) list_cmail_pane

0xd064,	// (0x00059ba4) list_cmail_body_pane

0xd088,	// (0x00059bc8) list_single_cmail_header_caption_pane

0xd0b6,	// (0x00059bf6) list_single_cmail_header_detail_pane_ParamLimits

0xd0b6,	// (0x00059bf6) list_single_cmail_header_detail_pane

0xd0ee,	// (0x00059c2e) list_single_cmail_header_caption_pane_t1

0xd0fe,	// (0x00059c3e) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd0fe,	// (0x00059c3e) list_single_cmail_header_detail_pane_g1

0x0ead,	// (0x0004d9ed) list_single_cmail_header_detail_pane_g2_ParamLimits

0x0ead,	// (0x0004d9ed) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x0005c8ee) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x0005c8ee) list_single_cmail_header_detail_pane_g

0x0eb9,	// (0x0004d9f9) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0eb9,	// (0x0004d9f9) list_single_cmail_header_detail_pane_t1

0x0eeb,	// (0x0004da2b) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0eeb,	// (0x0004da2b) list_single_cmail_header_editor_pane_bg

0xeff3,	// (0x0005bb33) list_cmail_body_pane_g1

0xeffc,	// (0x0005bb3c) list_cmail_body_pane_t1

0xde7d,	// (0x0005a9bd) list_single_cmail_header_editor_pane_bg_g1

0x238b,	// (0x0004eecb) list_single_cmail_header_editor_pane_bg_g1_copy1

0xde8d,	// (0x0005a9cd) list_single_cmail_header_editor_pane_bg_g1_copy2

0xde85,	// (0x0005a9c5) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe0a1,	// (0x0005abe1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xdead,	// (0x0005a9ed) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xde9d,	// (0x0005a9dd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xdea5,	// (0x0005a9e5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x236b,	// (0x0004eeab) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd13c,	// (0x00059c7c) calenote_gesture_pane_ParamLimits

0xd13c,	// (0x00059c7c) calenote_gesture_pane

0xd156,	// (0x00059c96) calenote_window_pane_ParamLimits

0xd156,	// (0x00059c96) calenote_window_pane

0xf00a,	// (0x0005bb4a) popup_note_window_cp01

0xd16e,	// (0x00059cae) calenote_swipe_1_pane_ParamLimits

0xd16e,	// (0x00059cae) calenote_swipe_1_pane

0xcba3,	// (0x000596e3) calenote_swipe_2_pane_ParamLimits

0xcba3,	// (0x000596e3) calenote_swipe_2_pane

0xedd8,	// (0x0005b918) calenote_swipe_1_pane_g1_ParamLimits

0xedd8,	// (0x0005b918) calenote_swipe_1_pane_g1

0xede5,	// (0x0005b925) calenote_swipe_1_pane_g2_ParamLimits

0xede5,	// (0x0005b925) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x0005c818) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x0005c818) calenote_swipe_1_pane_g

0xf01c,	// (0x0005bb5c) calenote_swipe_1_pane_t1_ParamLimits

0xf01c,	// (0x0005bb5c) calenote_swipe_1_pane_t1

0xedd8,	// (0x0005b918) calenote_swipe_2_pane_g1_ParamLimits

0xedd8,	// (0x0005b918) calenote_swipe_2_pane_g1

0xf03b,	// (0x0005bb7b) calenote_swipe_2_pane_g2_ParamLimits

0xf03b,	// (0x0005bb7b) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x0005c8fa) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x0005c8fa) calenote_swipe_2_pane_g

0xf047,	// (0x0005bb87) calenote_swipe_2_pane_t1_ParamLimits

0xf047,	// (0x0005bb87) calenote_swipe_2_pane_t1

0x017d,	// (0x0004ccbd) main_mup_navstr_pane

0x9c21,	// (0x00056761) main_mup3_pane_t7_ParamLimits

0x9c21,	// (0x00056761) main_mup3_pane_t7

0xa639,	// (0x00057179) main_mp4_pane_g6_ParamLimits

0xa639,	// (0x00057179) main_mp4_pane_g6

0xa9bb,	// (0x000574fb) main_image3_pane_t4_ParamLimits

0xa9bb,	// (0x000574fb) main_image3_pane_t4

0xd181,	// (0x00059cc1) popup_navstr_preview_pane_ParamLimits

0xd181,	// (0x00059cc1) popup_navstr_preview_pane

0xd18d,	// (0x00059ccd) scroll_navstr_pane_ParamLimits

0xd18d,	// (0x00059ccd) scroll_navstr_pane

0x017d,	// (0x0004ccbd) bg_popup_preview_window_pane_cp04

0xf06e,	// (0x0005bbae) popup_navstr_preview_pane_t1

0xd199,	// (0x00059cd9) scroll_navstr_pane_g1_ParamLimits

0xd199,	// (0x00059cd9) scroll_navstr_pane_g1

0xd1a6,	// (0x00059ce6) scroll_navstr_pane_t1_ParamLimits

0xd1a6,	// (0x00059ce6) scroll_navstr_pane_t1

0xf013,	// (0x0005bb53) bg_button_pane_cp014

0xf013,	// (0x0005bb53) bg_button_pane_cp030

0xca97,	// (0x000595d7) list_double_fisheye_pane_g4_ParamLimits

0xca97,	// (0x000595d7) list_double_fisheye_pane_g4

0xcaa3,	// (0x000595e3) list_double_fisheye_pane_g5_ParamLimits

0xcaa3,	// (0x000595e3) list_double_fisheye_pane_g5

0xefce,	// (0x0005bb0e) sp_fs_scroll_pane_cp03

0x368e,	// (0x000501ce) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xeecb,	// (0x0005ba0b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x0005c835) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xeed7,	// (0x0005ba17) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd05a,	// (0x00059b9a) sp_fs_scroll_pane_cp02

0x208f,	// (0x0004ebcf) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x208f,	// (0x0004ebcf) popup_sp_fs_calendar_preview_list_single_pane

0x017d,	// (0x0004ccbd) main_cam6_pano_pane

0x01f5,	// (0x0004cd35) main_mup3_pane_ParamLimits

0x017d,	// (0x0004ccbd) main_phacti_pane

0xc68a,	// (0x000591ca) bg_button_pane_cp11

0xc6a2,	// (0x000591e2) main_mobtv_info_pane_g2_ParamLimits

0xc6a2,	// (0x000591e2) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x0005c795) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x0005c795) main_mobtv_info_pane_g

0xc854,	// (0x00059394) sc_clock_pane_t5_ParamLimits

0xc854,	// (0x00059394) sc_clock_pane_t5

0xc8fa,	// (0x0005943a) main_radioblah_pane_g1_ParamLimits

0xed24,	// (0x0005b864) main_radioblah_pane_t3_ParamLimits

0xed24,	// (0x0005b864) main_radioblah_pane_t3

0xed3c,	// (0x0005b87c) main_radioblah_pane_t4_ParamLimits

0xed3c,	// (0x0005b87c) main_radioblah_pane_t4

0xc918,	// (0x00059458) main_radioblah_text_pane_ParamLimits

0xc918,	// (0x00059458) main_radioblah_text_pane

0xc925,	// (0x00059465) main_radioblah_info_pane_g1_ParamLimits

0xc9ba,	// (0x000594fa) main_radioblah_info_pane_t4_ParamLimits

0xc9ba,	// (0x000594fa) main_radioblah_info_pane_t4

0x01f5,	// (0x0004cd35) main_sp_fs_calendar_pane

0xd1b8,	// (0x00059cf8) main_phacti_pane_g1

0xd1c0,	// (0x00059d00) phacti_note_pane_ParamLimits

0xd1c0,	// (0x00059d00) phacti_note_pane

0xf085,	// (0x0005bbc5) phacti_term_pane_ParamLimits

0xf085,	// (0x0005bbc5) phacti_term_pane

0xf09a,	// (0x0005bbda) phacti_note_pane_t1_ParamLimits

0xf09a,	// (0x0005bbda) phacti_note_pane_t1

0x0efd,	// (0x0004da3d) phacti_term_pane_g1

0x0f05,	// (0x0004da45) phacti_term_pane_t1_ParamLimits

0x0f05,	// (0x0004da45) phacti_term_pane_t1

0xf0b1,	// (0x0005bbf1) popup_sp_fs_calendar_preview_list_single_pane_g1

0xf0b9,	// (0x0005bbf9) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x0005c904) popup_sp_fs_calendar_preview_list_single_pane_g

0xf0c1,	// (0x0005bc01) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xf0c1,	// (0x0005bc01) popup_sp_fs_calendar_preview_list_single_pane_t1

0xf0d7,	// (0x0005bc17) aid_popup_sp_fs_bg_corner_pane

0x4274,	// (0x00050db4) popup_sp_fs_calendar_preview_bg_pane_g1

0x017d,	// (0x0004ccbd) popup_sp_fs_calendar_preview_bg_pane

0xf0df,	// (0x0005bc1f) popup_sp_fs_calendar_preview_list_pane

0x01f5,	// (0x0004cd35) bg_main_sp_fs_cale_pane_ParamLimits

0x01f5,	// (0x0004cd35) bg_main_sp_fs_cale_pane

0x0f2f,	// (0x0004da6f) listscroll_cale_mrui_pane_ParamLimits

0x0f2f,	// (0x0004da6f) listscroll_cale_mrui_pane

0x0f43,	// (0x0004da83) listscroll_sp_fs_schedule_track_pane

0x0f4c,	// (0x0004da8c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x0f4c,	// (0x0004da8c) main_sp_fs_ctrlbar_pane_cp01

0x0f5d,	// (0x0004da9d) main_sp_fs_ribbon_pane

0x0f65,	// (0x0004daa5) popup_sp_fs_cale_preview_window

0xd203,	// (0x00059d43) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd203,	// (0x00059d43) list_single_sp_fs_schedule_track_pane

0x097a,	// (0x0004d4ba) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x097a,	// (0x0004d4ba) bg_sp_fs_highlight_list_pane_cp03

0xd22b,	// (0x00059d6b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd22b,	// (0x00059d6b) list_single_sp_fs_schedule_track_pane_g1

0xd237,	// (0x00059d77) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd237,	// (0x00059d77) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x0005c909) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x0005c909) list_single_sp_fs_schedule_track_pane_g

0xd243,	// (0x00059d83) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd243,	// (0x00059d83) list_single_sp_fs_schedule_track_pane_t1

0xd25b,	// (0x00059d9b) sp_fs_schedule_track_pane_ParamLimits

0xd25b,	// (0x00059d9b) sp_fs_schedule_track_pane

0x0f77,	// (0x0004dab7) sp_fs_schedule_track_pane_g1

0x0f7f,	// (0x0004dabf) sp_fs_schedule_track_pane_g2

0x0f87,	// (0x0004dac7) sp_fs_schedule_track_pane_g3

0x0f8f,	// (0x0004dacf) sp_fs_schedule_track_pane_g4

0x0f97,	// (0x0004dad7) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x0005c90e) sp_fs_schedule_track_pane_g

0xde7d,	// (0x0005a9bd) bg_sp_fs_schedule_viewer_highlight_g1

0x238b,	// (0x0004eecb) bg_sp_fs_schedule_viewer_highlight_g2

0xde85,	// (0x0005a9c5) bg_sp_fs_schedule_viewer_highlight_g3

0xde8d,	// (0x0005a9cd) bg_sp_fs_schedule_viewer_highlight_g4

0xe0a1,	// (0x0005abe1) bg_sp_fs_schedule_viewer_highlight_g5

0xde9d,	// (0x0005a9dd) bg_sp_fs_schedule_viewer_highlight_g6

0xdea5,	// (0x0005a9e5) bg_sp_fs_schedule_viewer_highlight_g7

0xdead,	// (0x0005a9ed) bg_sp_fs_schedule_viewer_highlight_g8

0x236b,	// (0x0004eeab) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x0005c919) bg_sp_fs_schedule_viewer_highlight_g

0x017d,	// (0x0004ccbd) bg_main_sp_fs_ribbon_pane

0xd26b,	// (0x00059dab) main_sp_fs_ribbon_pane_g1

0x0f9f,	// (0x0004dadf) main_sp_fs_ribbon_pane_t1

0xd276,	// (0x00059db6) main_sp_fs_ribbon_pane_t2

0x0fae,	// (0x0004daee) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x0005c92c) main_sp_fs_ribbon_pane_t

0x0fbd,	// (0x0004dafd) main_sp_fs_ribbon_scheduler_pane

0x0fc5,	// (0x0004db05) bg_main_sp_fs_ribbon_pane_g1

0x0fce,	// (0x0004db0e) bg_main_sp_fs_ribbon_pane_g2

0x0fd7,	// (0x0004db17) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x0005c933) bg_main_sp_fs_ribbon_pane_g

0x0fdf,	// (0x0004db1f) main_sp_fs_ribbon_scheduler_pane_g1

0x0fe8,	// (0x0004db28) main_sp_fs_ribbon_scheduler_pane_g2

0x0ff1,	// (0x0004db31) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x0005c93a) main_sp_fs_ribbon_scheduler_pane_g

0x0ffa,	// (0x0004db3a) list_cale_mrui_pane

0xd287,	// (0x00059dc7) sp_fs_scroll_pane_cp07_ParamLimits

0xd287,	// (0x00059dc7) sp_fs_scroll_pane_cp07

0xd29d,	// (0x00059ddd) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd29d,	// (0x00059ddd) bg_sp_fs_schedule_viewer_highlight

0x1003,	// (0x0004db43) list_single_sp_fs_schedule_track_pane_cp01

0x100b,	// (0x0004db4b) list_sp_fs_schedule_track_pane

0x1013,	// (0x0004db53) sp_fs_scroll_pane_cp06_ParamLimits

0x1013,	// (0x0004db53) sp_fs_scroll_pane_cp06

0x4274,	// (0x00050db4) bgmain_sp_fs_calendar_pane_g1

0xd2aa,	// (0x00059dea) list_single_cale_mrui_pane_ParamLimits

0xd2aa,	// (0x00059dea) list_single_cale_mrui_pane

0x1025,	// (0x0004db65) list_single_cale_mrui_row_pane_ParamLimits

0x1025,	// (0x0004db65) list_single_cale_mrui_row_pane

0x1032,	// (0x0004db72) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1032,	// (0x0004db72) list_single_cale_mrui_row_pane_g1

0x1077,	// (0x0004dbb7) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1077,	// (0x0004dbb7) list_single_cale_mrui_row_pane_t1

0xd2df,	// (0x00059e1f) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd2df,	// (0x00059e1f) list_single_cale_mrui_row_pane_t2

0x1089,	// (0x0004dbc9) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1089,	// (0x0004dbc9) list_single_cale_mrui_row_pane_t3

0x10b8,	// (0x0004dbf8) list_single_cale_mrui_row_pane_t4_ParamLimits

0x10b8,	// (0x0004dbf8) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe08,	// (0x0005c948) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe08,	// (0x0005c948) list_single_cale_mrui_row_pane_t

0xd345,	// (0x00059e85) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd345,	// (0x00059e85) list_single_cmail_header_editor_pane_bg_cp01

0xd367,	// (0x00059ea7) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd367,	// (0x00059ea7) list_single_cmail_header_editor_pane_bg_cp02

0xd383,	// (0x00059ec3) main_radioblah_text_pane_t1_ParamLimits

0xd383,	// (0x00059ec3) main_radioblah_text_pane_t1

0x10e7,	// (0x0004dc27) cam6_indi_pane_cp01

0x10ef,	// (0x0004dc2f) cam6_mode_pane_cp01

0x10f7,	// (0x0004dc37) cam6_pano_pane

0x1100,	// (0x0004dc40) cam6_zoom_pane_cp01

0x1108,	// (0x0004dc48) cam6_pano_image_pane

0x1113,	// (0x0004dc53) cam6_pano_pane_g1

0xea83,	// (0x0005b5c3) cam6_pano_pane_g2

0x111c,	// (0x0004dc5c) cam6_pano_pane_g3

0x1125,	// (0x0004dc65) cam6_pano_pane_g4

0x481f,	// (0x0005135f) cam6_pano_pane_g5

0x112e,	// (0x0004dc6e) cam6_pano_pane_g6

0x1138,	// (0x0004dc78) cam6_pano_pane_g7

0x1140,	// (0x0004dc80) cam6_pano_pane_g8

0x1149,	// (0x0004dc89) cam6_pano_pane_g9

0x0008,

0xfe11,	// (0x0005c951) cam6_pano_pane_g

0x017d,	// (0x0004ccbd) main_browser_tag_pane

0xf066,	// (0x0005bba6) grid_navstr_albumart_pane

0x1154,	// (0x0004dc94) cell_navstr_albumart_pane_ParamLimits

0x1154,	// (0x0004dc94) cell_navstr_albumart_pane

0x2b64,	// (0x0004f6a4) cell_navstr_albumart_pane_g1

0x3c40,	// (0x00050780) cell_navstr_albumart_pane_g2

0x3c50,	// (0x00050790) cell_navstr_albumart_pane_g3

0x3c48,	// (0x00050788) cell_navstr_albumart_pane_g4

0x0003,

0xfe24,	// (0x0005c964) cell_navstr_albumart_pane_g

0xd3a0,	// (0x00059ee0) bt_list_pane_ParamLimits

0xd3a0,	// (0x00059ee0) bt_list_pane

0xd3c7,	// (0x00059f07) bt_list_pane_t1

0xd3d6,	// (0x00059f16) bt_list_pane_t2

0x0001,

0xfe2d,	// (0x0005c96d) bt_list_pane_t

0x017d,	// (0x0004ccbd) main_cale_prevew_pane

0xd3e5,	// (0x00059f25) popup_cale_preview_window_ParamLimits

0xd3e5,	// (0x00059f25) popup_cale_preview_window

0x01f5,	// (0x0004cd35) bg_popup_preview_window_pane_cp05_ParamLimits

0x01f5,	// (0x0004cd35) bg_popup_preview_window_pane_cp05

0x1176,	// (0x0004dcb6) list_cale_preview_pane_ParamLimits

0x1176,	// (0x0004dcb6) list_cale_preview_pane

0xd3fc,	// (0x00059f3c) list_double_cale_preview_pane_ParamLimits

0xd3fc,	// (0x00059f3c) list_double_cale_preview_pane

0xd40e,	// (0x00059f4e) list_single_cale_preview_pane_ParamLimits

0xd40e,	// (0x00059f4e) list_single_cale_preview_pane

0xd422,	// (0x00059f62) list_single_cale_preview_pane_g1

0xd42a,	// (0x00059f6a) list_single_cale_preview_pane_t1_ParamLimits

0xd42a,	// (0x00059f6a) list_single_cale_preview_pane_t1

0xd43f,	// (0x00059f7f) list_double_cale_preview_pane_g1

0xd447,	// (0x00059f87) list_double_cale_preview_pane_t1_ParamLimits

0xd447,	// (0x00059f87) list_double_cale_preview_pane_t1

0xd45c,	// (0x00059f9c) list_double_cale_preview_pane_t2_ParamLimits

0xd45c,	// (0x00059f9c) list_double_cale_preview_pane_t2

0x0001,

0xfe32,	// (0x0005c972) list_double_cale_preview_pane_t_ParamLimits

0xfe32,	// (0x0005c972) list_double_cale_preview_pane_t

0x017d,	// (0x0004ccbd) main_ezdial_pane

0x01f5,	// (0x0004cd35) main_sp_fs_email_pane_ParamLimits

0xcbd9,	// (0x00059719) cmail_ddmenu_btn01_pane_ParamLimits

0xcbd9,	// (0x00059719) cmail_ddmenu_btn01_pane

0xcbf6,	// (0x00059736) cmail_ddmenu_btn02_pane_ParamLimits

0xcbf6,	// (0x00059736) cmail_ddmenu_btn02_pane

0xcc14,	// (0x00059754) cmail_ddmenu_btn03_pane_ParamLimits

0xcc14,	// (0x00059754) cmail_ddmenu_btn03_pane

0xcc42,	// (0x00059782) main_sp_fs_ctrlbar_pane_ParamLimits

0xcc5c,	// (0x0005979c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd064,	// (0x00059ba4) list_cmail_body_pane_ParamLimits

0xefdd,	// (0x0005bb1d) bg_button_pane_cp12

0xefe6,	// (0x0005bb26) list_single_cmail_header_detail_pane_g3_ParamLimits

0xefe6,	// (0x0005bb26) list_single_cmail_header_detail_pane_g3

0xd116,	// (0x00059c56) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd116,	// (0x00059c56) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x0005c8f5) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x0005c8f5) list_single_cmail_header_detail_pane_t

0x0f1a,	// (0x0004da5a) phacti_term_pane_t2_ParamLimits

0x0f1a,	// (0x0004da5a) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x0005c8ff) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x0005c8ff) phacti_term_pane_t

0x1182,	// (0x0004dcc2) aid_size_list_single_double

0xd474,	// (0x00059fb4) popup_ezdial_listscroll_window

0xd497,	// (0x00059fd7) popup_number_entry_window_cp01

0x2a03,	// (0x0004f543) bg_popup_call_pane_cp09

0x118e,	// (0x0004dcce) ezdial_list_pane

0x1196,	// (0x0004dcd6) scroll_pane_cp23

0x4057,	// (0x00050b97) bg_button_pane_cp028_ParamLimits

0x4057,	// (0x00050b97) bg_button_pane_cp028

0xd4a5,	// (0x00059fe5) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd4a5,	// (0x00059fe5) cmail_ddmenu_btn01_pane_g1

0xd4b7,	// (0x00059ff7) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd4b7,	// (0x00059ff7) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe37,	// (0x0005c977) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe37,	// (0x0005c977) cmail_ddmenu_btn01_pane_g

0x119e,	// (0x0004dcde) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x119e,	// (0x0004dcde) cmail_ddmenu_btn01_pane_t1

0x3e2b,	// (0x0005096b) bg_button_pane_cp029_ParamLimits

0x3e2b,	// (0x0005096b) bg_button_pane_cp029

0xd4b7,	// (0x00059ff7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd4b7,	// (0x00059ff7) cmail_ddmenu_btn02_pane_g1

0xd4cf,	// (0x0005a00f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd4cf,	// (0x0005a00f) cmail_ddmenu_btn02_pane_t1

0x097a,	// (0x0004d4ba) bg_button_pane_cp031_ParamLimits

0x097a,	// (0x0004d4ba) bg_button_pane_cp031

0xd4b7,	// (0x00059ff7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd4b7,	// (0x00059ff7) cmail_ddmenu_btn03_pane_g1

0xd4cf,	// (0x0005a00f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd4cf,	// (0x0005a00f) cmail_ddmenu_btn03_pane_t1

0xa858,	// (0x00057398) cell_dialer2_keypad_pane_t1_ParamLimits

0xa872,	// (0x000573b2) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa872,	// (0x000573b2) cell_dialer2_keypad_pane_t1_copy1

0xc52a,	// (0x0005906a) ncimui_group_button_pane

0x01f5,	// (0x0004cd35) main_sp_fs_calendar_pane_ParamLimits

0xd088,	// (0x00059bc8) list_single_cmail_header_caption_pane_ParamLimits

0xe317,	// (0x0005ae57) aid_recal_txt_sm_pane

0x017d,	// (0x0004ccbd) mian_recal_day_pane

0x0f65,	// (0x0004daa5) popup_sp_fs_cale_preview_window_ParamLimits

0x017d,	// (0x0004ccbd) list_recal_day_pane

0x11cd,	// (0x0004dd0d) list_single_recal_day_pane_ParamLimits

0x11cd,	// (0x0004dd0d) list_single_recal_day_pane

0x11df,	// (0x0004dd1f) list_single_recal_day_pane_g1_ParamLimits

0x11df,	// (0x0004dd1f) list_single_recal_day_pane_g1

0x11eb,	// (0x0004dd2b) list_single_recal_day_pane_g2_ParamLimits

0x11eb,	// (0x0004dd2b) list_single_recal_day_pane_g2

0x11fb,	// (0x0004dd3b) list_single_recal_day_pane_g3_ParamLimits

0x11fb,	// (0x0004dd3b) list_single_recal_day_pane_g3

0xd4f3,	// (0x0005a033) list_single_recal_day_pane_g4_ParamLimits

0xd4f3,	// (0x0005a033) list_single_recal_day_pane_g4

0x1207,	// (0x0004dd47) list_single_recal_day_pane_g5_ParamLimits

0x1207,	// (0x0004dd47) list_single_recal_day_pane_g5

0x1217,	// (0x0004dd57) list_single_recal_day_pane_g6_ParamLimits

0x1217,	// (0x0004dd57) list_single_recal_day_pane_g6

0x0004,

0xfe46,	// (0x0005c986) list_single_recal_day_pane_g_ParamLimits

0xfe46,	// (0x0005c986) list_single_recal_day_pane_g

0x122e,	// (0x0004dd6e) list_single_recal_day_pane_t1

0x1240,	// (0x0004dd80) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x0005c991) list_single_recal_day_pane_t

0xd513,	// (0x0005a053) ncimui_query_button_pane_ParamLimits

0xd513,	// (0x0005a053) ncimui_query_button_pane

0xd523,	// (0x0005a063) ncimui_query_button_pane_t1_ParamLimits

0xd523,	// (0x0005a063) ncimui_query_button_pane_t1

0x1255,	// (0x0004dd95) ncimui_query_button_pane_t2_ParamLimits

0x1255,	// (0x0004dd95) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x0005c996) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x0005c996) ncimui_query_button_pane_t

0xd536,	// (0x0005a076) query_button_pane_ParamLimits

0xd536,	// (0x0005a076) query_button_pane

0x017d,	// (0x0004ccbd) bg_button_pane_cp0028

0x1268,	// (0x0004dda8) query_button_pane_t1

0x8c52,	// (0x00055792) main_tport_pane_ParamLimits

0xcf93,	// (0x00059ad3) bg_popup_window_pane_cp01_ParamLimits

0xcf93,	// (0x00059ad3) bg_popup_window_pane_cp01

0xcfa0,	// (0x00059ae0) heading_pane_cp08_ParamLimits

0xcfa0,	// (0x00059ae0) heading_pane_cp08

0xcfae,	// (0x00059aee) heading_pane_cp07_ParamLimits

0xcfae,	// (0x00059aee) heading_pane_cp07

0xefa0,	// (0x0005bae0) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x0005c8e2) cell_tport_appsw_pane_g

0x8374,	// (0x00054eb4) input_candi_list_open_g1

0x2526,	// (0x0004f066) list_cale_time_pane_g6_ParamLimits

0x2526,	// (0x0004f066) list_cale_time_pane_g6

0x9692,	// (0x000561d2) aid_size_touch_calib_1_ParamLimits

0x9692,	// (0x000561d2) aid_size_touch_calib_1

0x969e,	// (0x000561de) aid_size_touch_calib_2_ParamLimits

0x969e,	// (0x000561de) aid_size_touch_calib_2

0x96ac,	// (0x000561ec) aid_size_touch_calib_3_ParamLimits

0x96ac,	// (0x000561ec) aid_size_touch_calib_3

0x96bc,	// (0x000561fc) aid_size_touch_calib_4_ParamLimits

0x96bc,	// (0x000561fc) aid_size_touch_calib_4

0x96ca,	// (0x0005620a) main_touch_calib_button_group_pane_ParamLimits

0x96ca,	// (0x0005620a) main_touch_calib_button_group_pane

0x96d8,	// (0x00056218) main_touch_calib_pane_g1_ParamLimits

0x96e4,	// (0x00056224) main_touch_calib_pane_g2_ParamLimits

0x96f0,	// (0x00056230) main_touch_calib_pane_g3_ParamLimits

0x96fc,	// (0x0005623c) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x0005c2b0) main_touch_calib_pane_g_ParamLimits

0x9708,	// (0x00056248) main_touch_calib_pane_t1_ParamLimits

0x971f,	// (0x0005625f) main_touch_calib_pane_t2_ParamLimits

0x9736,	// (0x00056276) main_touch_calib_pane_t3_ParamLimits

0x974a,	// (0x0005628a) main_touch_calib_pane_t4_ParamLimits

0x975e,	// (0x0005629e) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x0005c2b9) main_touch_calib_pane_t_ParamLimits

0x45ef,	// (0x0005112f) list_single_fp_cale_pane_g3_ParamLimits

0x45ef,	// (0x0005112f) list_single_fp_cale_pane_g3

0xacb8,	// (0x000577f8) bg_button_pane_cp012_ParamLimits

0xacb8,	// (0x000577f8) bg_vkb2_func_pane_cp03_ParamLimits

0xb66b,	// (0x000581ab) cell_vitu2_function_top_pane_g1_ParamLimits

0xacb8,	// (0x000577f8) bg_vkb2_func_pane_cp04_ParamLimits

0xc4c8,	// (0x00059008) main_ncimui_button_group_pane_ParamLimits

0xc4c8,	// (0x00059008) main_ncimui_button_group_pane

0xc518,	// (0x00059058) main_ncimui_pane_t3_ParamLimits

0xc518,	// (0x00059058) main_ncimui_pane_t3

0xf07c,	// (0x0005bbbc) phacti_button_group_pane

0x1182,	// (0x0004dcc2) aid_size_list_single_double_ParamLimits

0xd474,	// (0x00059fb4) popup_ezdial_listscroll_window_ParamLimits

0xd497,	// (0x00059fd7) popup_number_entry_window_cp01_ParamLimits

0xd543,	// (0x0005a083) phacti_button_pane_ParamLimits

0xd543,	// (0x0005a083) phacti_button_pane

0x017d,	// (0x0004ccbd) bg_button_pane_cp14

0x1276,	// (0x0004ddb6) phacti_button_pane_t1

0xd554,	// (0x0005a094) main_touch_calib_button_pane_ParamLimits

0xd554,	// (0x0005a094) main_touch_calib_button_pane

0x1f79,	// (0x0004eab9) bg_button_pane_cp18_ParamLimits

0x1f79,	// (0x0004eab9) bg_button_pane_cp18

0x1284,	// (0x0004ddc4) main_touch_calib_button_pane_t1_ParamLimits

0x1284,	// (0x0004ddc4) main_touch_calib_button_pane_t1

0x129a,	// (0x0004ddda) main_touch_calib_button_pane_t2_ParamLimits

0x129a,	// (0x0004ddda) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x0005c99b) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x0005c99b) main_touch_calib_button_pane_t

0x017d,	// (0x0004ccbd) cell_ncimui_button_pane

0x017d,	// (0x0004ccbd) bg_button_pane_cp032

0x12b8,	// (0x0004ddf8) cell_ncimui_button_pane_t1

0xa8ce,	// (0x0005740e) image3_infobar_pane_ParamLimits

0xa8ce,	// (0x0005740e) image3_infobar_pane

0xc876,	// (0x000593b6) fs_bigclock_status_pane_ParamLimits

0xc876,	// (0x000593b6) fs_bigclock_status_pane

0xc883,	// (0x000593c3) main_fs_bigclock_clock_pane_ParamLimits

0xc883,	// (0x000593c3) main_fs_bigclock_clock_pane

0xc899,	// (0x000593d9) main_fs_bigclock_indi_pane_ParamLimits

0xc899,	// (0x000593d9) main_fs_bigclock_indi_pane

0xc8c8,	// (0x00059408) main_fs_bigclock_swipe_pane_ParamLimits

0xc8c8,	// (0x00059408) main_fs_bigclock_swipe_pane

0x017d,	// (0x0004ccbd) main_fs_clock_dumped_data

0xeb90,	// (0x0005b6d0) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xeb90,	// (0x0005b6d0) list_single_fs_bigclock_indicator_pane_g1

0xebb9,	// (0x0005b6f9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xebb9,	// (0x0005b6f9) list_single_fs_bigclock_indicator_pane_g2

0xebd3,	// (0x0005b713) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xebd3,	// (0x0005b713) list_single_fs_bigclock_indicator_pane_g3

0xebed,	// (0x0005b72d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xebed,	// (0x0005b72d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x0005c7c9) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x0005c7c9) list_single_fs_bigclock_indicator_pane_g

0xec16,	// (0x0005b756) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xec16,	// (0x0005b756) list_single_fs_bigclock_indicator_pane_t1

0xec3e,	// (0x0005b77e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xec3e,	// (0x0005b77e) list_single_fs_bigclock_indicator_pane_t2

0xec66,	// (0x0005b7a6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xec66,	// (0x0005b7a6) list_single_fs_bigclock_indicator_pane_t3

0xec8e,	// (0x0005b7ce) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xec8e,	// (0x0005b7ce) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x0005c7d4) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x0005c7d4) list_single_fs_bigclock_indicator_pane_t

0x12c6,	// (0x0004de06) image3_infobar_fav_pane_ParamLimits

0x12c6,	// (0x0004de06) image3_infobar_fav_pane

0x12d6,	// (0x0004de16) image3_infobar_loc_pane_ParamLimits

0x12d6,	// (0x0004de16) image3_infobar_loc_pane

0x12ea,	// (0x0004de2a) image3_infobar_time_pane_ParamLimits

0x12ea,	// (0x0004de2a) image3_infobar_time_pane

0x4274,	// (0x00050db4) image3_infobar_time_pane_g1

0x12fa,	// (0x0004de3a) image3_infobar_time_pane_t1

0x4274,	// (0x00050db4) image3_infobar_loc_pane_g1

0x1308,	// (0x0004de48) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x0005c9a0) image3_infobar_loc_pane_g

0x1310,	// (0x0004de50) image3_infobar_loc_pane_t1

0x4274,	// (0x00050db4) image3_infobar_fav_pane_g1

0x131e,	// (0x0004de5e) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x0005c9a5) image3_infobar_fav_pane_g

0x1326,	// (0x0004de66) fs_bigclock_status_battery_pane

0x132f,	// (0x0004de6f) fs_bigclock_status_signal_pane

0x1338,	// (0x0004de78) fs_bigclock_status_title_pane

0x1341,	// (0x0004de81) fs_bigclock_status_signal_pane_g1

0x134a,	// (0x0004de8a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x0005c9aa) fs_bigclock_status_signal_pane_g

0x1352,	// (0x0004de92) fs_bigclock_status_battery_pane_g1

0x135b,	// (0x0004de9b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x0005c9af) fs_bigclock_status_battery_pane_g

0x1363,	// (0x0004dea3) fs_bigclock_status_title_pane_t1

0x4274,	// (0x00050db4) main_fs_bigclock_clock_pane_g1

0x1371,	// (0x0004deb1) main_fs_bigclock_clock_pane_g2

0x1371,	// (0x0004deb1) main_fs_bigclock_clock_pane_g3

0x1371,	// (0x0004deb1) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x0005c9b4) main_fs_bigclock_clock_pane_g

0x1379,	// (0x0004deb9) main_fs_bigclock_clock_pane_t1

0x1387,	// (0x0004dec7) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x0005c9bd) main_fs_bigclock_clock_pane_t

0x1396,	// (0x0004ded6) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1396,	// (0x0004ded6) list_single_fs_bigclock_indicator_pane

0xd564,	// (0x0005a0a4) list_single_fs_bigclock_pane_ParamLimits

0xd564,	// (0x0005a0a4) list_single_fs_bigclock_pane

0x13b0,	// (0x0004def0) main_fs_bigclock_indicator_pane_t1

0x13bf,	// (0x0004deff) list_single_fs_bigclock_pane_g1

0x13c7,	// (0x0004df07) list_single_fs_bigclock_pane_t1

0x4274,	// (0x00050db4) main_fs_bigclock_swipe_pane_g1

0x140a,	// (0x0004df4a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x0005c9ce) main_fs_bigclock_swipe_pane_g

0x1412,	// (0x0004df52) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1412,	// (0x0004df52) main_fs_bigclock_swipe_pane_t1

0x7b2d,	// (0x0005466d) call_type_pane_ParamLimits

0x017d,	// (0x0004ccbd) main_btmg_pane

0x105e,	// (0x0004db9e) list_single_cale_mrui_row_pane_g2_ParamLimits

0x105e,	// (0x0004db9e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe01,	// (0x0005c941) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x0005c941) list_single_cale_mrui_row_pane_g

0x11bd,	// (0x0004dcfd) list_recal_vselct_arw_lo_pane

0x11c5,	// (0x0004dd05) list_recal_vselct_arw_up_pane

0x0b91,	// (0x0004d6d1) list_recal_vselct_pane

0x142f,	// (0x0004df6f) btmg_button_pane

0xd5c7,	// (0x0005a107) main_btmg_pane_g1

0x017d,	// (0x0004ccbd) bg_button_pane_cp044

0x1439,	// (0x0004df79) btmg_button_pane_t1

0x3e23,	// (0x00050963) aid_listscroll_gen

0x01f5,	// (0x0004cd35) main_cntbar_detail_pane

0xefbe,	// (0x0005bafe) list_cmail_folder_pane

0xefce,	// (0x0005bb0e) sp_fs_scroll_pane_cp03_ParamLimits

0xd5cf,	// (0x0005a10f) list_single_fs_dyc_pane_cp01_ParamLimits

0xd5cf,	// (0x0005a10f) list_single_fs_dyc_pane_cp01

0x1447,	// (0x0004df87) aid_size_cmail_indent

0x1450,	// (0x0004df90) list_single_dyc_row_pane_cp01

0xd620,	// (0x0005a160) cntbar_detail_list_pane_ParamLimits

0xd620,	// (0x0005a160) cntbar_detail_list_pane

0xd65a,	// (0x0005a19a) main_cntbar_detail_cont_pane_ParamLimits

0xd65a,	// (0x0005a19a) main_cntbar_detail_cont_pane

0x7ac7,	// (0x00054607) scroll_pane_cp032_ParamLimits

0x7ac7,	// (0x00054607) scroll_pane_cp032

0xd666,	// (0x0005a1a6) cntbar_detail_list_event_pane_ParamLimits

0xd666,	// (0x0005a1a6) cntbar_detail_list_event_pane

0xd62c,	// (0x0005a16c) cntbar_detail_list_shct_pane

0x23d9,	// (0x0004ef19) aid_list_gen

0x1459,	// (0x0004df99) aid_scroll

0x1462,	// (0x0004dfa2) aid_size_touch_scroll_bar

0xd67a,	// (0x0005a1ba) aid_list_double

0x1474,	// (0x0004dfb4) aid_list_single

0xd683,	// (0x0005a1c3) aid_list_single_lg

0x1486,	// (0x0004dfc6) aid_list_z_g_a_sm

0x148e,	// (0x0004dfce) aid_list_z_g_d

0x1496,	// (0x0004dfd6) aid_txt_z_prm

0xd68c,	// (0x0005a1cc) aid_txt_z_prm_cp01

0xd69a,	// (0x0005a1da) aid_txt_z_sec

0xd6a8,	// (0x0005a1e8) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd6a8,	// (0x0005a1e8) main_cntbar_detail_cont_pane_g1

0xd6b5,	// (0x0005a1f5) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd6b5,	// (0x0005a1f5) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x0005c9d3) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x0005c9d3) main_cntbar_detail_cont_pane_g

0x14a4,	// (0x0004dfe4) main_cntbar_detail_cont_pane_t1

0x14b2,	// (0x0004dff2) main_cntbar_detail_cont_pane_t2

0x14c0,	// (0x0004e000) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x0005c9d8) main_cntbar_detail_cont_pane_t

0xd6c1,	// (0x0005a201) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd6c1,	// (0x0005a201) cell_cntbar_detail_list_shct_pane

0x14ce,	// (0x0004e00e) cntbar_detail_list_shct_pane_g1

0x14d7,	// (0x0004e017) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x0005c9df) cntbar_detail_list_shct_pane_g

0xd6d5,	// (0x0005a215) cntbar_detail_list_event_pane_g1_ParamLimits

0xd6d5,	// (0x0005a215) cntbar_detail_list_event_pane_g1

0xd6e1,	// (0x0005a221) cntbar_detail_list_event_pane_g2_ParamLimits

0xd6e1,	// (0x0005a221) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x0005c9e4) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x0005c9e4) cntbar_detail_list_event_pane_g

0xd74d,	// (0x0005a28d) cntbar_detail_list_event_pane_t1_ParamLimits

0xd74d,	// (0x0005a28d) cntbar_detail_list_event_pane_t1

0xd762,	// (0x0005a2a2) cntbar_detail_list_event_pane_t2_ParamLimits

0xd762,	// (0x0005a2a2) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x0005c9f1) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x0005c9f1) cntbar_detail_list_event_pane_t

0x4274,	// (0x00050db4) cell_cntbar_detail_list_shct_pane_g1

0x7ec6,	// (0x00054a06) navi_pane_mv_g3

0x01f5,	// (0x0004cd35) main_cntbar_detail_pane_ParamLimits

0x017d,	// (0x0004ccbd) main_notif_wgt_pane

0xa580,	// (0x000570c0) aid_tch_main_mp4_pane_g4

0xa7b5,	// (0x000572f5) popup_slider_window_cp02

0x11b3,	// (0x0004dcf3) list_recal_day_event_pane

0xd600,	// (0x0005a140) cntbar_detail_btn_pane_ParamLimits

0xd600,	// (0x0005a140) cntbar_detail_btn_pane

0xd610,	// (0x0005a150) cntbar_detail_btn_pane_cp01_ParamLimits

0xd610,	// (0x0005a150) cntbar_detail_btn_pane_cp01

0xd62c,	// (0x0005a16c) cntbar_detail_list_shct_pane_ParamLimits

0xd638,	// (0x0005a178) cntbar_detail_pane_g1_ParamLimits

0xd638,	// (0x0005a178) cntbar_detail_pane_g1

0xd644,	// (0x0005a184) cntbar_detail_pane_t1_ParamLimits

0xd644,	// (0x0005a184) cntbar_detail_pane_t1

0xd6ed,	// (0x0005a22d) cntbar_detail_list_event_pane_g3_ParamLimits

0xd6ed,	// (0x0005a22d) cntbar_detail_list_event_pane_g3

0xd705,	// (0x0005a245) cntbar_detail_list_event_pane_g4_ParamLimits

0xd705,	// (0x0005a245) cntbar_detail_list_event_pane_g4

0xd71d,	// (0x0005a25d) cntbar_detail_list_event_pane_g5_ParamLimits

0xd71d,	// (0x0005a25d) cntbar_detail_list_event_pane_g5

0xd735,	// (0x0005a275) cntbar_detail_list_event_pane_g6_ParamLimits

0xd735,	// (0x0005a275) cntbar_detail_list_event_pane_g6

0xd777,	// (0x0005a2b7) cntbar_detail_list_event_pane_t3_ParamLimits

0xd777,	// (0x0005a2b7) cntbar_detail_list_event_pane_t3

0xd789,	// (0x0005a2c9) popup_notif_wgt_window_ParamLimits

0xd789,	// (0x0005a2c9) popup_notif_wgt_window

0xd799,	// (0x0005a2d9) popup_submenu_window_cp01_ParamLimits

0xd799,	// (0x0005a2d9) popup_submenu_window_cp01

0x2a03,	// (0x0004f543) bg_popup_window_pane_cp10

0x14e0,	// (0x0004e020) listscroll_notif_wgt_pane

0x14ea,	// (0x0004e02a) list_notif_wgt_window

0x14f3,	// (0x0004e033) scroll_pane_cp033

0x14fc,	// (0x0004e03c) list_notif_wgt_row_pane_ParamLimits

0x14fc,	// (0x0004e03c) list_notif_wgt_row_pane

0x1510,	// (0x0004e050) aid_size_list_notif_wgt_del

0x1519,	// (0x0004e059) list_notif_wgt_row_pane_g1

0x1521,	// (0x0004e061) list_notif_wgt_row_pane_g2

0x1529,	// (0x0004e069) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x0005c9f8) list_notif_wgt_row_pane_g

0x1532,	// (0x0004e072) list_notif_wgt_row_pane_t1

0x1540,	// (0x0004e080) list_notif_wgt_row_pane_t2

0x154e,	// (0x0004e08e) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x0005c9ff) list_notif_wgt_row_pane_t

0xe0bb,	// (0x0005abfb) list_recal_day_event_pane_g1

0x155c,	// (0x0004e09c) list_recal_day_event_pane_t1

0x017d,	// (0x0004ccbd) bg_button_pane_cp045

0x156b,	// (0x0004e0ab) cntbar_detail_btn_pane_t1

0x3e2b,	// (0x0005096b) main_callh_pane_ParamLimits

0x3e2b,	// (0x0005096b) main_callh_pane

0x017d,	// (0x0004ccbd) main_coverflow0_pane

0x017d,	// (0x0004ccbd) main_wgtman_pane

0xc8e0,	// (0x00059420) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc8e0,	// (0x00059420) main_fs_bigclock_unlock_btn_pane

0xef98,	// (0x0005bad8) bg_button_pane_cp16

0xefa8,	// (0x0005bae8) cell_tport_appsw_pane_g3

0xd7a7,	// (0x0005a2e7) cf0_flow_pane_ParamLimits

0xd7a7,	// (0x0005a2e7) cf0_flow_pane

0x1579,	// (0x0004e0b9) listscroll_cf0_pane

0x1582,	// (0x0004e0c2) main_cf0_pane_g1

0xd7b6,	// (0x0005a2f6) main_cf0_pane_t1_ParamLimits

0xd7b6,	// (0x0005a2f6) main_cf0_pane_t1

0xd7ca,	// (0x0005a30a) main_cf0_pane_t2_ParamLimits

0xd7ca,	// (0x0005a30a) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x0005ca06) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x0005ca06) main_cf0_pane_t

0x158c,	// (0x0004e0cc) scroll_pane_cp11

0xd7de,	// (0x0005a31e) cf0_flow_pane_g1

0xd7e6,	// (0x0005a326) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x0005ca0b) cf0_flow_pane_g

0xd7ee,	// (0x0005a32e) cf0_flow_pane_t1

0x017d,	// (0x0004ccbd) main_call6_pane

0x017d,	// (0x0004ccbd) main_calllock_pane

0xd7fc,	// (0x0005a33c) call6_btn_grp_pane_ParamLimits

0xd7fc,	// (0x0005a33c) call6_btn_grp_pane

0xd80b,	// (0x0005a34b) call6_pane_g1_ParamLimits

0xd80b,	// (0x0005a34b) call6_pane_g1

0xd81a,	// (0x0005a35a) popup_call6_1st_window_ParamLimits

0xd81a,	// (0x0005a35a) popup_call6_1st_window

0xd828,	// (0x0005a368) popup_call6_2nd_window_ParamLimits

0xd828,	// (0x0005a368) popup_call6_2nd_window

0xd836,	// (0x0005a376) cell_call6_btn_pane_ParamLimits

0xd836,	// (0x0005a376) cell_call6_btn_pane

0x2a03,	// (0x0004f543) bg_popup_call2_in_pane_cp03

0x1597,	// (0x0004e0d7) popup_call6_1st_window_g1

0x159f,	// (0x0004e0df) popup_call6_1st_window_g2

0x15a7,	// (0x0004e0e7) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x0005ca10) popup_call6_1st_window_g

0x15af,	// (0x0004e0ef) popup_call6_1st_window_t1

0x15be,	// (0x0004e0fe) popup_call6_1st_window_t2

0x15ce,	// (0x0004e10e) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x0005ca17) popup_call6_1st_window_t

0x2a03,	// (0x0004f543) bg_popup_call2_in_pane_cp04

0x1597,	// (0x0004e0d7) popup_call6_2nd_window_g1

0x159f,	// (0x0004e0df) popup_call6_2nd_window_g2

0x15a7,	// (0x0004e0e7) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x0005ca10) popup_call6_2nd_window_g

0x15af,	// (0x0004e0ef) popup_call6_2nd_window_t1

0x017d,	// (0x0004ccbd) bg_button_pane_cp15

0x15de,	// (0x0004e11e) cell_call6_btn_pane_g1

0x15e7,	// (0x0004e127) cell_call6_btn_pane_t1

0xd845,	// (0x0005a385) listscroll_wgtman_pane_ParamLimits

0xd845,	// (0x0005a385) listscroll_wgtman_pane

0xd863,	// (0x0005a3a3) wgtman_btn_pane_ParamLimits

0xd863,	// (0x0005a3a3) wgtman_btn_pane

0x28a8,	// (0x0004f3e8) aid_scroll_copy1

0x15f6,	// (0x0004e136) list_wgtman_pane

0xd898,	// (0x0005a3d8) wgtman_btn_pane_g1_ParamLimits

0xd898,	// (0x0005a3d8) wgtman_btn_pane_g1

0xd8c0,	// (0x0005a400) wgtman_btn_pane_t1_ParamLimits

0xd8c0,	// (0x0005a400) wgtman_btn_pane_t1

0x1600,	// (0x0004e140) wgtman_btn_pane_t2_ParamLimits

0x1600,	// (0x0004e140) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x0005ca1e) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x0005ca1e) wgtman_btn_pane_t

0xd8f7,	// (0x0005a437) listrow_wgtman_pane_ParamLimits

0xd8f7,	// (0x0005a437) listrow_wgtman_pane

0xd913,	// (0x0005a453) listrow_wgtman_pane_g1

0xd91c,	// (0x0005a45c) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x0005ca23) listrow_wgtman_pane_g

0xd926,	// (0x0005a466) listrow_wgtman_pane_t1

0xd934,	// (0x0005a474) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x0005ca28) listrow_wgtman_pane_t

0xd942,	// (0x0005a482) wait_bar_pane_cp09

0x1617,	// (0x0004e157) main_calllock_btn_pane

0x1621,	// (0x0004e161) main_calllock_pane_g1

0x017d,	// (0x0004ccbd) bg_button_pane_cp17

0x162c,	// (0x0004e16c) main_calllock_btn_pane_g1

0x1635,	// (0x0004e175) main_calllock_btn_pane_t1

0x017d,	// (0x0004ccbd) main_dialer3_pane

0x017d,	// (0x0004ccbd) main_fmrd2_pane

0x4274,	// (0x00050db4) main_fs_bigclock_unlock_btn_pane_g1

0x164c,	// (0x0004e18c) main_fs_bigclock_unlock_btn_pane_t1

0xd94a,	// (0x0005a48a) area_fmrd2_info_pane_ParamLimits

0xd94a,	// (0x0005a48a) area_fmrd2_info_pane

0xd958,	// (0x0005a498) area_fmrd2_visual_pane_ParamLimits

0xd958,	// (0x0005a498) area_fmrd2_visual_pane

0xd966,	// (0x0005a4a6) fmrd2_indi_pane_ParamLimits

0xd966,	// (0x0005a4a6) fmrd2_indi_pane

0xd973,	// (0x0005a4b3) area_fmrd2_visual_pane_g1

0xd97b,	// (0x0005a4bb) area_fmrd2_visual_pane_t1

0xd98b,	// (0x0005a4cb) area_fmrd2_visual_pane_t2

0xd99b,	// (0x0005a4db) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x0005ca32) area_fmrd2_visual_pane_t

0xd9ab,	// (0x0005a4eb) area_fmrd2_info_pane_g1

0xd9b3,	// (0x0005a4f3) area_fmrd2_info_pane_t1

0xd9c3,	// (0x0005a503) area_fmrd2_info_pane_t2

0xd9d3,	// (0x0005a513) area_fmrd2_info_pane_t3

0xd9e3,	// (0x0005a523) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x0005ca39) area_fmrd2_info_pane_t

0xd9f1,	// (0x0005a531) fmrd2_indi_pane_t1

0xda01,	// (0x0005a541) fmrd2_indi_pane_t2

0xda11,	// (0x0005a551) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x0005ca42) fmrd2_indi_pane_t

0xebfc,	// (0x0005b73c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xebfc,	// (0x0005b73c) list_single_fs_bigclock_indicator_pane_g5

0xeca3,	// (0x0005b7e3) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xeca3,	// (0x0005b7e3) list_single_fs_bigclock_indicator_pane_t5

0xd1d6,	// (0x00059d16) aid_cell_bcale_month_pane_ParamLimits

0xd1d6,	// (0x00059d16) aid_cell_bcale_month_pane

0xd1e2,	// (0x00059d22) bcale_month_pane_ParamLimits

0xd1e2,	// (0x00059d22) bcale_month_pane

0xd1f2,	// (0x00059d32) bcale_preview_pane_ParamLimits

0xd1f2,	// (0x00059d32) bcale_preview_pane

0x13c7,	// (0x0004df07) list_single_fs_bigclock_pane_t1_ParamLimits

0x13e6,	// (0x0004df26) list_single_fs_bigclock_pane_t2_ParamLimits

0x13e6,	// (0x0004df26) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x0005c9c9) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x0005c9c9) list_single_fs_bigclock_pane_t

0x1644,	// (0x0004e184) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x0005ca2d) main_fs_bigclock_unlock_btn_pane_g

0xda1f,	// (0x0005a55f) aid_dia3_key_size_ParamLimits

0xda1f,	// (0x0005a55f) aid_dia3_key_size

0xda2b,	// (0x0005a56b) aid_dia3_listrow_size_ParamLimits

0xda2b,	// (0x0005a56b) aid_dia3_listrow_size

0xda3b,	// (0x0005a57b) dia3_keypad_fun_pane_ParamLimits

0xda3b,	// (0x0005a57b) dia3_keypad_fun_pane

0xda4d,	// (0x0005a58d) dia3_keypad_num_pane_ParamLimits

0xda4d,	// (0x0005a58d) dia3_keypad_num_pane

0xda5f,	// (0x0005a59f) dia3_listscroll_pane_ParamLimits

0xda5f,	// (0x0005a59f) dia3_listscroll_pane

0xda6d,	// (0x0005a5ad) dia3_numentry_pane_ParamLimits

0xda6d,	// (0x0005a5ad) dia3_numentry_pane

0x165a,	// (0x0004e19a) dia3_list_pane

0x1665,	// (0x0004e1a5) scroll_pane_cp12

0x017d,	// (0x0004ccbd) bg_dia3_numentry_pane

0xda7b,	// (0x0005a5bb) dia3_numentry_pane_t1

0xda8a,	// (0x0005a5ca) cell_dia3_key_num_pane

0xda92,	// (0x0005a5d2) cell_dia3_key0_fun_pane_ParamLimits

0xda92,	// (0x0005a5d2) cell_dia3_key0_fun_pane

0xda9f,	// (0x0005a5df) cell_dia3_key1_fun_pane_ParamLimits

0xda9f,	// (0x0005a5df) cell_dia3_key1_fun_pane

0xdaac,	// (0x0005a5ec) dia3_listrow_pane

0xe8fd,	// (0x0005b43d) bg_dia3_numentry_pane_g1

0x017d,	// (0x0004ccbd) bg_button_pane_cp21

0x1670,	// (0x0004e1b0) cell_dia3_key_num_pane_t1

0x167e,	// (0x0004e1be) cell_dia3_key_num_pane_t2

0x168d,	// (0x0004e1cd) cell_dia3_key_num_pane_t3

0x169c,	// (0x0004e1dc) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x0005ca49) cell_dia3_key_num_pane_t

0x017d,	// (0x0004ccbd) bg_button_pane_cp19

0xdab9,	// (0x0005a5f9) cell_dia3_key0_fun_pane_g1

0x017d,	// (0x0004ccbd) bg_button_pane_cp20

0xdac1,	// (0x0005a601) cell_dia3_key1_fun_pane_g1

0xdac9,	// (0x0005a609) area_left_week_number_pane

0xdad2,	// (0x0005a612) area_top_day_name_pane

0xdadb,	// (0x0005a61b) frame_month_view_pane

0xdae7,	// (0x0005a627) grid_month_view_pane

0xdaf1,	// (0x0005a631) cell_top_day_name_pane_ParamLimits

0xdaf1,	// (0x0005a631) cell_top_day_name_pane

0xdb0b,	// (0x0005a64b) cell_area_left_week_number_pane_ParamLimits

0xdb0b,	// (0x0005a64b) cell_area_left_week_number_pane

0xdb1f,	// (0x0005a65f) cell_month_view_pane_ParamLimits

0xdb1f,	// (0x0005a65f) cell_month_view_pane

0x16ab,	// (0x0004e1eb) frm_month_g1

0xdb3c,	// (0x0005a67c) frm_month_g2

0xdb46,	// (0x0005a686) frm_month_g3

0xdb50,	// (0x0005a690) frm_month_g4

0xdb5a,	// (0x0005a69a) frm_month_g5

0xdb64,	// (0x0005a6a4) frm_month_g6

0xdb6e,	// (0x0005a6ae) frm_month_g7

0x16b4,	// (0x0004e1f4) frm_month_g8

0xdb7a,	// (0x0005a6ba) frm_month_g9

0xdb83,	// (0x0005a6c3) frm_month_g10

0xdb8c,	// (0x0005a6cc) frm_month_g11

0xdb95,	// (0x0005a6d5) frm_month_g12

0xdb9e,	// (0x0005a6de) frm_month_g13

0xdba7,	// (0x0005a6e7) frm_month_g14

0xdbb0,	// (0x0005a6f0) frm_month_g15

0xdbbb,	// (0x0005a6fb) frm_month_g16

0x000f,

0xff12,	// (0x0005ca52) frm_month_g

0xdbc6,	// (0x0005a706) cell_top_day_name_pane_t1

0xdbd5,	// (0x0005a715) cell_area_left_week_number_pane_g1

0xdbc6,	// (0x0005a706) cell_area_left_week_number_pane_t1

0x4274,	// (0x00050db4) cell_month_view_pane_g1

0xdbdd,	// (0x0005a71d) cell_month_view_pane_t1

0x017d,	// (0x0004ccbd) main_fps_pane

0xee93,	// (0x0005b9d3) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xee93,	// (0x0005b9d3) cmail_ddmenu_btn02_pane_cp1

0xeeaf,	// (0x0005b9ef) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xeeaf,	// (0x0005b9ef) cmail_ddmenu_btn02_pane_cp2

0xd4c3,	// (0x0005a003) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd4c3,	// (0x0005a003) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3c,	// (0x0005c97c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3c,	// (0x0005c97c) cmail_ddmenu_btn02_pane_g

0xd4e1,	// (0x0005a021) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd4e1,	// (0x0005a021) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe41,	// (0x0005c981) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe41,	// (0x0005c981) cmail_ddmenu_btn02_pane_t

0xdbec,	// (0x0005a72c) fps_text_pane_ParamLimits

0xdbec,	// (0x0005a72c) fps_text_pane

0xdbf9,	// (0x0005a739) main_fps_pane_g1_ParamLimits

0xdbf9,	// (0x0005a739) main_fps_pane_g1

0xdc07,	// (0x0005a747) wait_bar_pane_cp010_ParamLimits

0xdc07,	// (0x0005a747) wait_bar_pane_cp010

0xdc13,	// (0x0005a753) fps_text_pane_t1_ParamLimits

0xdc13,	// (0x0005a753) fps_text_pane_t1

0xaba7,	// (0x000576e7) cam4_image_uncrop_pane_g1

0xabb0,	// (0x000576f0) cam4_image_uncrop_pane_g2

0xabb9,	// (0x000576f9) cam4_image_uncrop_pane_g3

0xabc2,	// (0x00057702) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x0005c448) cam4_image_uncrop_pane_g

0xdaac,	// (0x0005a5ec) dia3_listrow_pane_ParamLimits

0x017d,	// (0x0004ccbd) main_phob2_pane

0xcff5,	// (0x00059b35) cell_tport_appsw_pane_cp02_ParamLimits

0xcff5,	// (0x00059b35) cell_tport_appsw_pane_cp02

0xd004,	// (0x00059b44) cell_tport_appsw_pane_cp03_ParamLimits

0xd004,	// (0x00059b44) cell_tport_appsw_pane_cp03

0x017d,	// (0x0004ccbd) phob2_contact_card_pane

0x017d,	// (0x0004ccbd) phob2_listscroll_pane

0x16bd,	// (0x0004e1fd) phob2_list_pane

0x16c5,	// (0x0004e205) scroll_pane_cp034

0xdc2c,	// (0x0005a76c) phob2_cc_data_pane_ParamLimits

0xdc2c,	// (0x0005a76c) phob2_cc_data_pane

0xdc46,	// (0x0005a786) phob2_cc_listscroll_pane_ParamLimits

0xdc46,	// (0x0005a786) phob2_cc_listscroll_pane

0xdc60,	// (0x0005a7a0) list_double_large_graphic_phob2_pane_ParamLimits

0xdc60,	// (0x0005a7a0) list_double_large_graphic_phob2_pane

0xdc83,	// (0x0005a7c3) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xdc83,	// (0x0005a7c3) list_double_large_graphic_phob2_pane_g1

0xdc90,	// (0x0005a7d0) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xdc90,	// (0x0005a7d0) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x0005ca73) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x0005ca73) list_double_large_graphic_phob2_pane_g

0xdc9c,	// (0x0005a7dc) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xdc9c,	// (0x0005a7dc) list_double_large_graphic_phob2_pane_t1

0xdcb1,	// (0x0005a7f1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xdcb1,	// (0x0005a7f1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x0005ca78) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x0005ca78) list_double_large_graphic_phob2_pane_t

0x017d,	// (0x0004ccbd) list_highlight_pane_cp024

0x16cd,	// (0x0004e20d) phob2_cc_button_pane

0xdcc3,	// (0x0005a803) phob2_cc_data_pane_g1_ParamLimits

0xdcc3,	// (0x0005a803) phob2_cc_data_pane_g1

0xdccf,	// (0x0005a80f) phob2_cc_data_pane_g2_ParamLimits

0xdccf,	// (0x0005a80f) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x0005ca7d) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x0005ca7d) phob2_cc_data_pane_g

0xdcdb,	// (0x0005a81b) phob2_cc_data_pane_t1_ParamLimits

0xdcdb,	// (0x0005a81b) phob2_cc_data_pane_t1

0xdced,	// (0x0005a82d) phob2_cc_data_pane_t2_ParamLimits

0xdced,	// (0x0005a82d) phob2_cc_data_pane_t2

0xdcff,	// (0x0005a83f) phob2_cc_data_pane_t3_ParamLimits

0xdcff,	// (0x0005a83f) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x0005ca82) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x0005ca82) phob2_cc_data_pane_t

0x16d5,	// (0x0004e215) phob2_cc_list_pane_ParamLimits

0x16d5,	// (0x0004e215) phob2_cc_list_pane

0xe81a,	// (0x0005b35a) scroll_pane_cp035_ParamLimits

0xe81a,	// (0x0005b35a) scroll_pane_cp035

0x01f5,	// (0x0004cd35) bg_button_pane_cp033

0x16e1,	// (0x0004e221) phob2_cc_button_pane_g1

0x16ed,	// (0x0004e22d) phob2_cc_button_pane_t1

0x1702,	// (0x0004e242) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x0005ca89) phob2_cc_button_pane_t

0xdd11,	// (0x0005a851) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xdd11,	// (0x0005a851) list_double_large_graphic_phob2_cc_pane

0xdd41,	// (0x0005a881) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xdd41,	// (0x0005a881) list_double_large_graphic_phob2_cc_pane_g1

0xdd52,	// (0x0005a892) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xdd52,	// (0x0005a892) list_double_large_graphic_phob2_cc_pane_g2

0xdd61,	// (0x0005a8a1) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xdd61,	// (0x0005a8a1) list_double_large_graphic_phob2_cc_pane_g3

0xdd70,	// (0x0005a8b0) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xdd70,	// (0x0005a8b0) list_double_large_graphic_phob2_cc_pane_g4

0xdd81,	// (0x0005a8c1) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xdd81,	// (0x0005a8c1) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x0005ca8e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x0005ca8e) list_double_large_graphic_phob2_cc_pane_g

0xdd90,	// (0x0005a8d0) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xdd90,	// (0x0005a8d0) list_double_large_graphic_phob2_cc_pane_t1

0xddb9,	// (0x0005a8f9) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xddb9,	// (0x0005a8f9) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x0005ca99) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x0005ca99) list_double_large_graphic_phob2_cc_pane_t

0x1714,	// (0x0004e254) list_highlight_pane_cp025_ParamLimits

0x1714,	// (0x0004e254) list_highlight_pane_cp025

0x01f5,	// (0x0004cd35) bg_button_pane_cp033_ParamLimits

0x16e1,	// (0x0004e221) phob2_cc_button_pane_g1_ParamLimits

0x16ed,	// (0x0004e22d) phob2_cc_button_pane_t1_ParamLimits

0x1702,	// (0x0004e242) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x0005ca89) phob2_cc_button_pane_t_ParamLimits

0x5cc6,	// (0x00052806) popup_wgtman_window

0xdf97,	// (0x0005aad7) scroll_pane_cp038

0xd880,	// (0x0005a3c0) wgtman_btn_pane_cp_01_ParamLimits

0xd880,	// (0x0005a3c0) wgtman_btn_pane_cp_01

0x1722,	// (0x0004e262) wgtman_content_pane

0x146b,	// (0x0004dfab) wgtman_heading_pane

0x017d,	// (0x0004ccbd) bg_heading_pane_cp02

0x172b,	// (0x0004e26b) wgtman_heading_pane_g1

0x1733,	// (0x0004e273) wgtman_heading_pane_t1

0x1741,	// (0x0004e281) scroll_pane_cp036

0x1749,	// (0x0004e289) wgtman_list_pane

0x1751,	// (0x0004e291) wgtman_list_pane_t1_ParamLimits

0x1751,	// (0x0004e291) wgtman_list_pane_t1

0xab06,	// (0x00057646) cam4_grid_pane

0xb835,	// (0x00058375) bg_button_pane_cp015_ParamLimits

0xb847,	// (0x00058387) bg_button_pane_cp016_ParamLimits

0xb85a,	// (0x0005839a) bg_button_pane_cp017_ParamLimits

0xb8b0,	// (0x000583f0) popup_vitu2_query_window_g3_ParamLimits

0xb8b0,	// (0x000583f0) popup_vitu2_query_window_g3

0xb96b,	// (0x000584ab) popup_vitu2_query_window_t6_ParamLimits

0xb96b,	// (0x000584ab) popup_vitu2_query_window_t6

0xb996,	// (0x000584d6) popup_vitu2_query_window_t7_ParamLimits

0xb996,	// (0x000584d6) popup_vitu2_query_window_t7

0x4c6c,	// (0x000517ac) cam4_grid_pane_g1

0x4c75,	// (0x000517b5) cam4_grid_pane_g2

0x1773,	// (0x0004e2b3) cam4_grid_pane_g3

0x177c,	// (0x0004e2bc) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x0005ca9e) cam4_grid_pane_g

0x6a28,	// (0x00053568) aid_placing_vt_slider_lsc_ParamLimits

0x6d68,	// (0x000538a8) vidtel_button_pane_ParamLimits

0x6d68,	// (0x000538a8) vidtel_button_pane

0x1787,	// (0x0004e2c7) bg_button_pane_cp034

0xdde2,	// (0x0005a922) vidtel_button_pane_g1

0x1791,	// (0x0004e2d1) vidtel_button_pane_t1

0xe099,	// (0x0005abd9) aid_size_vtel_slider_touch

0xe81a,	// (0x0005b35a) scroll_pane_cp039

0xe93b,	// (0x0005b47b) ncim_query_button_pane_cp01_ParamLimits

0xe95a,	// (0x0005b49a) ncimui_query_pane_g1_ParamLimits

0x01f5,	// (0x0004cd35) input_focus_pane_cp012_ParamLimits

0xe97f,	// (0x0005b4bf) ncim_query_entry_pane_t1_ParamLimits

0xe81a,	// (0x0005b35a) scroll_pane_cp039_ParamLimits

0x7e38,	// (0x00054978) navi_pane_bcale_mc_g1

0x7e40,	// (0x00054980) navi_pane_bcale_mc_t1

0xeeec,	// (0x0005ba2c) main_sp_fs_email_pane_g1

0xeef4,	// (0x0005ba34) main_sp_fs_email_pane_g2

0x0001,

0xfcfa,	// (0x0005c83a) main_sp_fs_email_pane_g

0x106a,	// (0x0004dbaa) list_single_cale_mrui_row_pane_g3_ParamLimits

0x106a,	// (0x0004dbaa) list_single_cale_mrui_row_pane_g3

0xd509,	// (0x0005a049) list_single_recal_day_pane_g5_event_pane

0x1226,	// (0x0004dd66) list_single_recal_day_pane_g7

0x179f,	// (0x0004e2df) list_recal_day_event_pane_cp01

0x17a8,	// (0x0004e2e8) list_recal_vselct_arw_lo_pane_cp01

0x17b0,	// (0x0004e2f0) list_recal_vselct_arw_up_pane_cp01

0x17b8,	// (0x0004e2f8) list_recal_vselct_pane_cp01

0xe0bb,	// (0x0005abfb) list_recal_day_event_pane_cp01_g1

0x17c2,	// (0x0004e302) list_recal_day_event_pane_cp01_t1

0x122e,	// (0x0004dd6e) list_single_recal_day_pane_t1_ParamLimits

0x1240,	// (0x0004dd80) list_single_recal_day_pane_t2_ParamLimits

0xfe51,	// (0x0005c991) list_single_recal_day_pane_t_ParamLimits

0x1f49,	// (0x0004ea89) bg_notes_pane_ParamLimits

0x1f57,	// (0x0004ea97) list_notes_pane_ParamLimits

0x5ff9,	// (0x00052b39) scroll_pane_cp06_ParamLimits

0x1f79,	// (0x0004eab9) main_notes_pane_ParamLimits

0x017d,	// (0x0004ccbd) main_welc_pane

0xddea,	// (0x0005a92a) main_welc_body_pane_ParamLimits

0xddea,	// (0x0005a92a) main_welc_body_pane

0xddf8,	// (0x0005a938) main_welc_opti_pane_ParamLimits

0xddf8,	// (0x0005a938) main_welc_opti_pane

0xde07,	// (0x0005a947) main_welc_pane_t1_ParamLimits

0xde07,	// (0x0005a947) main_welc_pane_t1

0xde1b,	// (0x0005a95b) main_welc_body_row_pane_ParamLimits

0xde1b,	// (0x0005a95b) main_welc_body_row_pane

0xde4c,	// (0x0005a98c) main_welc_opti_row_pane_ParamLimits

0xde4c,	// (0x0005a98c) main_welc_opti_row_pane

0x17d0,	// (0x0004e310) main_welc_opti_row_pane_g1

0x17d8,	// (0x0004e318) main_welc_opti_row_pane_t1

0x17e7,	// (0x0004e327) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
