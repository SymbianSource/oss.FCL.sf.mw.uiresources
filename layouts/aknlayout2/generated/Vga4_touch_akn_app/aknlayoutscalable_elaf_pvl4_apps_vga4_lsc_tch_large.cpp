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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00075657 };

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
0x14d8,	// (0x00076b2f) Screen

0x14e4,	// (0x00076b3b) application_window

0x1520,	// (0x00076b77) area_bottom_pane_ParamLimits

0x1520,	// (0x00076b77) area_bottom_pane

0x1559,	// (0x00076bb0) area_top_pane_ParamLimits

0x1559,	// (0x00076bb0) area_top_pane

0xaadb,	// (0x00080132) call_video_uplink_pane_ParamLimits

0xaadb,	// (0x00080132) call_video_uplink_pane

0x15ce,	// (0x00076c25) main_pane_ParamLimits

0x15ce,	// (0x00076c25) main_pane

0x5d23,	// (0x0007b37a) context_pane

0x5d36,	// (0x0007b38d) navi_pane

0x5d66,	// (0x0007b3bd) popup_cale_events_window_ParamLimits

0x5d66,	// (0x0007b3bd) popup_cale_events_window

0x5d7e,	// (0x0007b3d5) popup_mup_playback_window

0x5d86,	// (0x0007b3dd) signal_pane

0xe8e8,	// (0x00083f3f) main_browser_pane

0x3788,	// (0x00078ddf) main_burst_pane

0x59d4,	// (0x0007b02b) main_calc_pane

0x3788,	// (0x00078ddf) main_cale_day_pane

0xe8e8,	// (0x00083f3f) main_cale_month_pane

0x3788,	// (0x00078ddf) main_cale_week_pane

0x3788,	// (0x00078ddf) main_call_pane

0xe5a2,	// (0x00083bf9) main_call_poc_pane

0x3788,	// (0x00078ddf) main_camera_pane

0x3788,	// (0x00078ddf) main_chi_dic_pane

0x32e1,	// (0x00078938) main_clock_pane

0xe5a2,	// (0x00083bf9) main_fmradio_pane

0x3788,	// (0x00078ddf) main_graph_messa_pane

0xe5a2,	// (0x00083bf9) main_help_pane

0xe8e8,	// (0x00083f3f) main_im_pane

0xe81d,	// (0x00083e74) main_image_pane_ParamLimits

0xe81d,	// (0x00083e74) main_image_pane

0xe5a2,	// (0x00083bf9) main_location2_pane

0x3788,	// (0x00078ddf) main_location_pane

0xe5a2,	// (0x00083bf9) main_messa_pane

0xe5a2,	// (0x00083bf9) main_mp2_pane

0x3788,	// (0x00078ddf) main_mp_pane

0xe5a2,	// (0x00083bf9) main_msg_pane

0xe5a2,	// (0x00083bf9) main_mup_eq_pane

0xe5a2,	// (0x00083bf9) main_mup_pane

0x3788,	// (0x00078ddf) main_notes_pane

0xe5a2,	// (0x00083bf9) main_pec_pane

0xe5a2,	// (0x00083bf9) main_phob_pane

0xe5a2,	// (0x00083bf9) main_pinb_pane

0xe5a2,	// (0x00083bf9) main_postcard_pane

0xe5a2,	// (0x00083bf9) main_qdial_pane

0x3788,	// (0x00078ddf) main_skin_pane

0xe5a2,	// (0x00083bf9) main_smil2_pane

0x3788,	// (0x00078ddf) main_smil_pane

0x3788,	// (0x00078ddf) main_video_pane

0x3788,	// (0x00078ddf) main_video_tele_pane

0xe81d,	// (0x00083e74) main_viewer_pane_ParamLimits

0xe81d,	// (0x00083e74) main_viewer_pane

0x3788,	// (0x00078ddf) main_vorec_pane

0x5a40,	// (0x0007b097) popup_blid_sat_info_window_ParamLimits

0x5a40,	// (0x0007b097) popup_blid_sat_info_window

0x5ab0,	// (0x0007b107) popup_dyc_status_message_window_ParamLimits

0x5ab0,	// (0x0007b107) popup_dyc_status_message_window

0x5aca,	// (0x0007b121) popup_grid_large_graphic_window_ParamLimits

0x5aca,	// (0x0007b121) popup_grid_large_graphic_window

0x5ba9,	// (0x0007b200) popup_loc_request_window_ParamLimits

0x5ba9,	// (0x0007b200) popup_loc_request_window

0x5cf7,	// (0x0007b34e) popup_wml_address_window_ParamLimits

0x5cf7,	// (0x0007b34e) popup_wml_address_window

0x57d9,	// (0x0007ae30) call_muted_g1

0x44f6,	// (0x00079b4d) popup_call_audio_conf_window_ParamLimits

0x44f6,	// (0x00079b4d) popup_call_audio_conf_window

0x57e9,	// (0x0007ae40) popup_call_audio_first_window_ParamLimits

0x57e9,	// (0x0007ae40) popup_call_audio_first_window

0x585f,	// (0x0007aeb6) popup_call_audio_in_window_ParamLimits

0x585f,	// (0x0007aeb6) popup_call_audio_in_window

0x589b,	// (0x0007aef2) popup_call_audio_out_window_ParamLimits

0x589b,	// (0x0007aef2) popup_call_audio_out_window

0x58d5,	// (0x0007af2c) popup_call_audio_second_window_ParamLimits

0x58d5,	// (0x0007af2c) popup_call_audio_second_window

0x592b,	// (0x0007af82) popup_call_audio_wait_window_ParamLimits

0x592b,	// (0x0007af82) popup_call_audio_wait_window

0x5960,	// (0x0007afb7) popup_number_entry_window_ParamLimits

0x5960,	// (0x0007afb7) popup_number_entry_window

0xab07,	// (0x0008015e) bg_popup_call_pane_cp05_ParamLimits

0xab07,	// (0x0008015e) bg_popup_call_pane_cp05

0xab27,	// (0x0008017e) popup_number_entry_window_t1

0xab3a,	// (0x00080191) popup_number_entry_window_t2

0xab4c,	// (0x000801a3) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00084743) popup_number_entry_window_t

0xab5e,	// (0x000801b5) text_title_cp2

0xab71,	// (0x000801c8) bg_popup_call_pane_cp_ParamLimits

0xab71,	// (0x000801c8) bg_popup_call_pane_cp

0xab7f,	// (0x000801d6) call_thumbnail_pane

0xab87,	// (0x000801de) popup_call_audio_in_window_g1_ParamLimits

0xab87,	// (0x000801de) popup_call_audio_in_window_g1

0xab93,	// (0x000801ea) popup_call_audio_in_window_g2_ParamLimits

0xab93,	// (0x000801ea) popup_call_audio_in_window_g2

0xab9f,	// (0x000801f6) popup_call_audio_in_window_g3_ParamLimits

0xab9f,	// (0x000801f6) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0008474c) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0008474c) popup_call_audio_in_window_g

0xabab,	// (0x00080202) popup_call_audio_in_window_t1_ParamLimits

0xabab,	// (0x00080202) popup_call_audio_in_window_t1

0xabc7,	// (0x0008021e) popup_call_audio_in_window_t2_ParamLimits

0xabc7,	// (0x0008021e) popup_call_audio_in_window_t2

0xe26b,	// (0x000838c2) popup_call_audio_in_window_t3_ParamLimits

0xe26b,	// (0x000838c2) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00084753) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00084753) popup_call_audio_in_window_t

0xab71,	// (0x000801c8) bg_popup_call_pane_cp01_ParamLimits

0xab71,	// (0x000801c8) bg_popup_call_pane_cp01

0xab7f,	// (0x000801d6) call_thumbnail_pane_cp02

0xe27e,	// (0x000838d5) call_type_pane_cp022

0xe286,	// (0x000838dd) popup_call_audio_out_window_g1_ParamLimits

0xe286,	// (0x000838dd) popup_call_audio_out_window_g1

0xe298,	// (0x000838ef) popup_call_audio_out_window_g2_ParamLimits

0xe298,	// (0x000838ef) popup_call_audio_out_window_g2

0xe2a4,	// (0x000838fb) popup_call_audio_out_window_g3_ParamLimits

0xe2a4,	// (0x000838fb) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0008475a) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0008475a) popup_call_audio_out_window_g

0xe2b6,	// (0x0008390d) popup_call_audio_out_window_t1_ParamLimits

0xe2b6,	// (0x0008390d) popup_call_audio_out_window_t1

0xe2ce,	// (0x00083925) popup_call_audio_out_window_t2_ParamLimits

0xe2ce,	// (0x00083925) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00084761) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00084761) popup_call_audio_out_window_t

0xe2e3,	// (0x0008393a) bg_popup_call_pane_ParamLimits

0xe2e3,	// (0x0008393a) bg_popup_call_pane

0x178d,	// (0x00076de4) call_thumbnail_pane_cp_ParamLimits

0x178d,	// (0x00076de4) call_thumbnail_pane_cp

0xe367,	// (0x000839be) call_type_pane_cp01_ParamLimits

0xe367,	// (0x000839be) call_type_pane_cp01

0xe3ab,	// (0x00083a02) popup_call_audio_first_window_g1_ParamLimits

0xe3ab,	// (0x00083a02) popup_call_audio_first_window_g1

0xe3f7,	// (0x00083a4e) popup_call_audio_first_window_g2_ParamLimits

0xe3f7,	// (0x00083a4e) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00084766) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00084766) popup_call_audio_first_window_g

0xe43b,	// (0x00083a92) popup_call_audio_first_window_t1_ParamLimits

0xe43b,	// (0x00083a92) popup_call_audio_first_window_t1

0xe4e7,	// (0x00083b3e) popup_call_audio_first_window_t4_ParamLimits

0xe4e7,	// (0x00083b3e) popup_call_audio_first_window_t4

0xe573,	// (0x00083bca) popup_call_audio_first_window_t5_ParamLimits

0xe573,	// (0x00083bca) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0008476b) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0008476b) popup_call_audio_first_window_t

0xe5a2,	// (0x00083bf9) bg_popup_call_pane_cp02

0xe5ac,	// (0x00083c03) call_type_pane_cp023

0xe5b4,	// (0x00083c0b) popup_call_audio_wait_window_g1

0xe5bc,	// (0x00083c13) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00084772) popup_call_audio_wait_window_g

0xe5c4,	// (0x00083c1b) popup_call_audio_wait_window_t3

0xe5d2,	// (0x00083c29) bg_popup_call_pane_cp03_ParamLimits

0xe5d2,	// (0x00083c29) bg_popup_call_pane_cp03

0xe652,	// (0x00083ca9) call_thumbnail_pane_cp011_ParamLimits

0xe652,	// (0x00083ca9) call_thumbnail_pane_cp011

0xe65e,	// (0x00083cb5) call_type_pane_cp034_ParamLimits

0xe65e,	// (0x00083cb5) call_type_pane_cp034

0xe69a,	// (0x00083cf1) popup_call_audio_second_window_g1_ParamLimits

0xe69a,	// (0x00083cf1) popup_call_audio_second_window_g1

0xe6d6,	// (0x00083d2d) popup_call_audio_second_window_g2_ParamLimits

0xe6d6,	// (0x00083d2d) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00084777) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00084777) popup_call_audio_second_window_g

0xe712,	// (0x00083d69) popup_call_audio_second_window_t1_ParamLimits

0xe712,	// (0x00083d69) popup_call_audio_second_window_t1

0xe793,	// (0x00083dea) popup_call_audio_second_window_t2_ParamLimits

0xe793,	// (0x00083dea) popup_call_audio_second_window_t2

0xe7c9,	// (0x00083e20) popup_call_audio_second_window_t3_ParamLimits

0xe7c9,	// (0x00083e20) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0008477c) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0008477c) popup_call_audio_second_window_t

0xe5a2,	// (0x00083bf9) bg_popup_call_pane_cp04

0xe7ff,	// (0x00083e56) list_conf_pane

0xe807,	// (0x00083e5e) popup_call_audio_conf_window_t1

0xe815,	// (0x00083e6c) call_thumbnail_pane_g1

0xe81d,	// (0x00083e74) bg_pinb_pane_ParamLimits

0xe81d,	// (0x00083e74) bg_pinb_pane

0xe82b,	// (0x00083e82) find_pinb_pane

0xe834,	// (0x00083e8b) listscroll_pinb_pane_ParamLimits

0xe834,	// (0x00083e8b) listscroll_pinb_pane

0xe843,	// (0x00083e9a) pinb_bg_pane_g1

0x17b1,	// (0x00076e08) pinb_bg_pane_g2

0x17bd,	// (0x00076e14) pinb_bg_pane_g3

0x17c9,	// (0x00076e20) pinb_bg_pane_g4

0x17d5,	// (0x00076e2c) pinb_bg_pane_g5

0x17e1,	// (0x00076e38) pinb_bg_pane_g6

0x17ec,	// (0x00076e43) pinb_bg_pane_g7

0x17f7,	// (0x00076e4e) pinb_bg_pane_g8

0x1802,	// (0x00076e59) pinb_bg_pane_g9

0x180c,	// (0x00076e63) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00084783) pinb_bg_pane_g

0x1829,	// (0x00076e80) grid_pinb_pane

0x1834,	// (0x00076e8b) list_pinb_pane

0x183f,	// (0x00076e96) scroll_pane_cp01_ParamLimits

0x183f,	// (0x00076e96) scroll_pane_cp01

0xe84d,	// (0x00083ea4) find_pinb_pane_g1_ParamLimits

0xe84d,	// (0x00083ea4) find_pinb_pane_g1

0xe865,	// (0x00083ebc) find_pinb_pane_t1

0xe877,	// (0x00083ece) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0008479d) find_pinb_pane_t

0xe88c,	// (0x00083ee3) input_focus_pane_cp01_ParamLimits

0xe88c,	// (0x00083ee3) input_focus_pane_cp01

0x1851,	// (0x00076ea8) cell_pinb_pane_ParamLimits

0x1851,	// (0x00076ea8) cell_pinb_pane

0x1873,	// (0x00076eca) cell_pinb_pane_g1_ParamLimits

0x1873,	// (0x00076eca) cell_pinb_pane_g1

0x1887,	// (0x00076ede) cell_pinb_pane_g2_ParamLimits

0x1887,	// (0x00076ede) cell_pinb_pane_g2

0xe898,	// (0x00083eef) cell_pinb_pane_g3_ParamLimits

0xe898,	// (0x00083eef) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x000847a2) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x000847a2) cell_pinb_pane_g

0xe5a2,	// (0x00083bf9) grid_highlight_pane_cp01

0x1893,	// (0x00076eea) list_pinb_item_pane_ParamLimits

0x1893,	// (0x00076eea) list_pinb_item_pane

0xe5a2,	// (0x00083bf9) list_highlight_pane_cp02

0x18a6,	// (0x00076efd) list_pinb_item_pane_g1_ParamLimits

0x18a6,	// (0x00076efd) list_pinb_item_pane_g1

0x18b3,	// (0x00076f0a) list_pinb_item_pane_g2_ParamLimits

0x18b3,	// (0x00076f0a) list_pinb_item_pane_g2

0x18bf,	// (0x00076f16) list_pinb_item_pane_g3_ParamLimits

0x18bf,	// (0x00076f16) list_pinb_item_pane_g3

0x18d0,	// (0x00076f27) list_pinb_item_pane_g4_ParamLimits

0x18d0,	// (0x00076f27) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x000847a9) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x000847a9) list_pinb_item_pane_g

0x18dc,	// (0x00076f33) list_pinb_item_pane_t1_ParamLimits

0x18dc,	// (0x00076f33) list_pinb_item_pane_t1

0x1911,	// (0x00076f68) calc_display_pane

0x1937,	// (0x00076f8e) calc_paper_pane

0x195a,	// (0x00076fb1) grid_calc_pane

0xe5a2,	// (0x00083bf9) bg_list_pane_cp01

0x1988,	// (0x00076fdf) clock_g1

0x1990,	// (0x00076fe7) clock_g2

0x0001,

0xf15b,	// (0x000847b2) clock_g

0x1998,	// (0x00076fef) clock_t1_ParamLimits

0x1998,	// (0x00076fef) clock_t1

0x19ad,	// (0x00077004) clock_t2_ParamLimits

0x19ad,	// (0x00077004) clock_t2

0x19bf,	// (0x00077016) clock_t3_ParamLimits

0x19bf,	// (0x00077016) clock_t3

0x19d1,	// (0x00077028) clock_t4_ParamLimits

0x19d1,	// (0x00077028) clock_t4

0x19e3,	// (0x0007703a) clock_t5_ParamLimits

0x19e3,	// (0x0007703a) clock_t5

0x19f8,	// (0x0007704f) clock_t6_ParamLimits

0x19f8,	// (0x0007704f) clock_t6

0x1a0a,	// (0x00077061) clock_t7_ParamLimits

0x1a0a,	// (0x00077061) clock_t7

0x1a1c,	// (0x00077073) clock_t8_ParamLimits

0x1a1c,	// (0x00077073) clock_t8

0x1a30,	// (0x00077087) clock_t9_ParamLimits

0x1a30,	// (0x00077087) clock_t9

0x0008,

0xf160,	// (0x000847b7) clock_t_ParamLimits

0xf160,	// (0x000847b7) clock_t

0xe8a4,	// (0x00083efb) popup_clock_analogue_window_cp02

0xe8a4,	// (0x00083efb) popup_clock_digital_window_cp01

0xe8ac,	// (0x00083f03) listscroll_help_pane

0xe5a2,	// (0x00083bf9) phob_pre_status_pane

0xe8b6,	// (0x00083f0d) grid_qdial_pane

0xe5a2,	// (0x00083bf9) listscroll_mce_pane

0xe8c0,	// (0x00083f17) bg_notes_pane

0xe8ca,	// (0x00083f21) list_notes_pane

0x1a46,	// (0x0007709d) scroll_pane_cp06

0xe8d4,	// (0x00083f2b) bg_calc_paper_pane

0xabeb,	// (0x00080242) list_calc_pane

0xe8e8,	// (0x00083f3f) bg_calc_display_pane

0x1a51,	// (0x000770a8) calc_display_pane_t1

0x1a63,	// (0x000770ba) calc_display_pane_t2

0xac05,	// (0x0008025c) calc_display_pane_t3

0x0002,

0xf173,	// (0x000847ca) calc_display_pane_t

0x1a75,	// (0x000770cc) cell_calc_pane_ParamLimits

0x1a75,	// (0x000770cc) cell_calc_pane

0xe8f4,	// (0x00083f4b) bg_calc_paper_pane_g1

0xe900,	// (0x00083f57) bg_calc_paper_pane_g2

0xe90c,	// (0x00083f63) bg_calc_paper_pane_g3

0xe918,	// (0x00083f6f) bg_calc_paper_pane_g4

0xe924,	// (0x00083f7b) bg_calc_paper_pane_g5

0x1ab0,	// (0x00077107) bg_calc_paper_pane_g6

0x1ac3,	// (0x0007711a) bg_calc_paper_pane_g7

0x1ad6,	// (0x0007712d) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x000847d1) bg_calc_paper_pane_g

0x1ae7,	// (0x0007713e) calc_bg_paper_pane_g9

0x1af8,	// (0x0007714f) list_calc_item_pane_ParamLimits

0x1af8,	// (0x0007714f) list_calc_item_pane

0xe930,	// (0x00083f87) list_calc_item_pane_g1

0xac17,	// (0x0008026e) list_calc_item_pane_t1_ParamLimits

0xac17,	// (0x0008026e) list_calc_item_pane_t1

0x1b0c,	// (0x00077163) list_calc_item_pane_t2_ParamLimits

0x1b0c,	// (0x00077163) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x000847e2) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x000847e2) list_calc_item_pane_t

0xe93d,	// (0x00083f94) cell_calc_pane_g1

0xe947,	// (0x00083f9e) grid_highlight_pane_cp02

0xe969,	// (0x00083fc0) bg_calc_display_pane_g1

0xac29,	// (0x00080280) bg_calc_display_pane_g2

0xe972,	// (0x00083fc9) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x000847ec) bg_calc_display_pane_g

0x1b3e,	// (0x00077195) cell_qdial_pane_ParamLimits

0x1b3e,	// (0x00077195) cell_qdial_pane

0x1b54,	// (0x000771ab) cell_qdial_pane_g1_ParamLimits

0x1b54,	// (0x000771ab) cell_qdial_pane_g1

0x1b6a,	// (0x000771c1) cell_qdial_pane_g2_ParamLimits

0x1b6a,	// (0x000771c1) cell_qdial_pane_g2

0xe97b,	// (0x00083fd2) cell_qdial_pane_g3_ParamLimits

0xe97b,	// (0x00083fd2) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x000847f3) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x000847f3) cell_qdial_pane_g

0x1b90,	// (0x000771e7) cell_qdial_pane_t1_ParamLimits

0x1b90,	// (0x000771e7) cell_qdial_pane_t1

0x1ba8,	// (0x000771ff) cell_qdial_pane_t2_ParamLimits

0x1ba8,	// (0x000771ff) cell_qdial_pane_t2

0x1bbb,	// (0x00077212) cell_qdial_pane_t3_ParamLimits

0x1bbb,	// (0x00077212) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x000847fc) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x000847fc) cell_qdial_pane_t

0xe5a2,	// (0x00083bf9) grid_highlight_pane_cp04

0xe987,	// (0x00083fde) thumbnail_qdial_pane_ParamLimits

0xe987,	// (0x00083fde) thumbnail_qdial_pane

0xe9e3,	// (0x0008403a) list_help_pane

0xe9ec,	// (0x00084043) scroll_pane_cp02

0x1bce,	// (0x00077225) help_list_pane_t1_ParamLimits

0x1bce,	// (0x00077225) help_list_pane_t1

0xac33,	// (0x0008028a) bg_notes_pane_g2

0xac3b,	// (0x00080292) bg_notes_pane_g3

0xac43,	// (0x0008029a) notes_bg_pane_g1

0xac4b,	// (0x000802a2) notes_bg_pane_g4

0xac53,	// (0x000802aa) notes_bg_pane_g5

0xac5b,	// (0x000802b2) notes_bg_pane_g6

0xac63,	// (0x000802ba) notes_bg_pane_g7

0xac6b,	// (0x000802c2) notes_bg_pane_g8

0xac73,	// (0x000802ca) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0008481a) notes_bg_pane_g

0xde48,	// (0x0008349f) list_notes_text_pane_ParamLimits

0xde48,	// (0x0008349f) list_notes_text_pane

0xe9f5,	// (0x0008404c) list_notes_text_pane_g1

0xac7b,	// (0x000802d2) list_notes_text_pane_t1

0xe8e8,	// (0x00083f3f) listscroll_cale_week_pane

0x1c0f,	// (0x00077266) bg_cale_heading_pane

0xea0f,	// (0x00084066) bg_cale_pane_cp01

0x1c2b,	// (0x00077282) cale_week_corner_pane

0x1c41,	// (0x00077298) cale_week_day_heading_pane

0x1c5d,	// (0x000772b4) cale_week_scroll_pane_g1

0x1c76,	// (0x000772cd) cale_week_scroll_pane_g2

0x1c87,	// (0x000772de) cale_week_scroll_pane_g3

0x1c98,	// (0x000772ef) cale_week_scroll_pane_g4

0x1ca9,	// (0x00077300) cale_week_scroll_pane_g5

0x1cba,	// (0x00077311) cale_week_scroll_pane_g6

0x1ccb,	// (0x00077322) cale_week_scroll_pane_g7

0x1cdc,	// (0x00077333) cale_week_scroll_pane_g8

0x1ced,	// (0x00077344) cale_week_scroll_pane_g9

0x1cfe,	// (0x00077355) cale_week_scroll_pane_g10

0x1d0f,	// (0x00077366) cale_week_scroll_pane_g11

0x1d20,	// (0x00077377) cale_week_scroll_pane_g12

0x1d31,	// (0x00077388) cale_week_scroll_pane_g13

0x1d4a,	// (0x000773a1) cale_week_scroll_pane_g14

0x1d63,	// (0x000773ba) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00084829) cale_week_scroll_pane_g

0x1d7c,	// (0x000773d3) cale_week_time_pane

0x1d8d,	// (0x000773e4) grid_cale_week_pane

0x1da8,	// (0x000773ff) scroll_pane_cp08

0x1dc0,	// (0x00077417) cell_cale_week_pane_ParamLimits

0x1dc0,	// (0x00077417) cell_cale_week_pane

0x1e08,	// (0x0007745f) cale_week_day_heading_pane_t1

0x1e1c,	// (0x00077473) cale_week_day_heading_pane_t2

0x1e30,	// (0x00077487) cale_week_day_heading_pane_t3

0x1e44,	// (0x0007749b) cale_week_day_heading_pane_t4

0x1e58,	// (0x000774af) cale_week_day_heading_pane_t5

0x1e6c,	// (0x000774c3) cale_week_day_heading_pane_t6

0x1e80,	// (0x000774d7) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00084848) cale_week_day_heading_pane_t

0xea3a,	// (0x00084091) bg_cale_side_pane

0x1e94,	// (0x000774eb) cale_week_time_pane_t1

0x1eac,	// (0x00077503) cale_week_time_pane_t2

0x1ec4,	// (0x0007751b) cale_week_time_pane_t3

0x1edc,	// (0x00077533) cale_week_time_pane_t4

0x1ef4,	// (0x0007754b) cale_week_time_pane_t5

0x1f0c,	// (0x00077563) cale_week_time_pane_t6

0x1f24,	// (0x0007757b) cale_week_time_pane_t7

0x1f40,	// (0x00077597) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00084857) cale_week_time_pane_t

0x1f60,	// (0x000775b7) cell_cale_week_pane_g2

0x1f71,	// (0x000775c8) cell_cale_week_pane_g3_ParamLimits

0x1f71,	// (0x000775c8) cell_cale_week_pane_g3

0xea48,	// (0x0008409f) grid_highlight_pane_cp07

0xea50,	// (0x000840a7) listscroll_gms_pane

0xea5a,	// (0x000840b1) grid_gms_pane

0xea63,	// (0x000840ba) listscroll_gms_pane_g1

0xea6b,	// (0x000840c2) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00084868) listscroll_gms_pane_g

0x1f89,	// (0x000775e0) scroll_pane_cp010

0x1f94,	// (0x000775eb) cell_gms_pane_ParamLimits

0x1f94,	// (0x000775eb) cell_gms_pane

0x1fae,	// (0x00077605) cell_gms_pane_g1

0xea73,	// (0x000840ca) cell_gms_pane_g2

0xea7b,	// (0x000840d2) cell_gms_pane_g3

0xea84,	// (0x000840db) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0008486d) cell_gms_pane_g

0xea8d,	// (0x000840e4) grid_highlight_pane_cp09

0x5761,	// (0x0007adb8) phob_pre_status_pane_g1

0x5769,	// (0x0007adc0) phob_pre_status_pane_g2

0x5771,	// (0x0007adc8) phob_pre_status_pane_g3

0x5779,	// (0x0007add0) phob_pre_status_pane_g4

0x0004,

0xf5fe,	// (0x00084c55) phob_pre_status_pane_g

0x5789,	// (0x0007ade0) phob_pre_status_pane_t1

0x5799,	// (0x0007adf0) phob_pre_status_pane_t2

0x57a9,	// (0x0007ae00) phob_pre_status_pane_t3

0x0002,

0xf609,	// (0x00084c60) phob_pre_status_pane_t

0xe5a2,	// (0x00083bf9) bg_list_pane_cp05

0x1fbe,	// (0x00077615) grid_vorec_pane

0xac89,	// (0x000802e0) vorec_t1

0xac97,	// (0x000802ee) vorec_t2

0xaca5,	// (0x000802fc) vorec_t3

0xacb3,	// (0x0008030a) vorec_t4

0xacc1,	// (0x00080318) vorec_t5

0xaccf,	// (0x00080326) vorec_t6

0x0006,

0xf21f,	// (0x00084876) vorec_t

0xaceb,	// (0x00080342) wait_bar_pane_cp01

0x1fc8,	// (0x0007761f) cell_vorec_pane_ParamLimits

0x1fc8,	// (0x0007761f) cell_vorec_pane

0xea95,	// (0x000840ec) cell_vorec_pane_g1

0xe5a2,	// (0x00083bf9) grid_highlight_pane_cp05

0x1ff3,	// (0x0007764a) cams_zoom_pane

0x2002,	// (0x00077659) image_vga_pane

0x201c,	// (0x00077673) main_camera_pane_g1

0x202e,	// (0x00077685) main_camera_pane_g2

0x203e,	// (0x00077695) main_camera_pane_g3

0x2052,	// (0x000776a9) main_camera_pane_g4

0x2066,	// (0x000776bd) main_camera_pane_g5

0x207a,	// (0x000776d1) main_camera_pane_g6

0x208e,	// (0x000776e5) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00084885) main_camera_pane_g

0x20a2,	// (0x000776f9) main_camera_pane_t1

0x20b8,	// (0x0007770f) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00084896) main_camera_pane_t

0x20f6,	// (0x0007774d) cams_zoom_pane_cp_ParamLimits

0x20f6,	// (0x0007774d) cams_zoom_pane_cp

0x211e,	// (0x00077775) image_cif_pane_ParamLimits

0x211e,	// (0x00077775) image_cif_pane

0x2159,	// (0x000777b0) image_subqcif_pane

0x2163,	// (0x000777ba) main_video_pane_g1_ParamLimits

0x2163,	// (0x000777ba) main_video_pane_g1

0x2187,	// (0x000777de) main_video_pane_g2_ParamLimits

0x2187,	// (0x000777de) main_video_pane_g2

0x21bd,	// (0x00077814) main_video_pane_g3_ParamLimits

0x21bd,	// (0x00077814) main_video_pane_g3

0x21eb,	// (0x00077842) main_video_pane_g4_ParamLimits

0x21eb,	// (0x00077842) main_video_pane_g4

0x2219,	// (0x00077870) main_video_pane_g5_ParamLimits

0x2219,	// (0x00077870) main_video_pane_g5

0xeaab,	// (0x00084102) main_video_pane_g6_ParamLimits

0xeaab,	// (0x00084102) main_video_pane_g6

0x0006,

0xf244,	// (0x0008489b) main_video_pane_g_ParamLimits

0xf244,	// (0x0008489b) main_video_pane_g

0x2242,	// (0x00077899) main_video_pane_t1_ParamLimits

0x2242,	// (0x00077899) main_video_pane_t1

0xeac5,	// (0x0008411c) cams_zoom_pane_g1

0xeace,	// (0x00084125) cams_zoom_pane_g2

0xead7,	// (0x0008412e) cams_zoom_pane_g3

0xeae0,	// (0x00084137) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x000848aa) cams_zoom_pane_g

0x229f,	// (0x000778f6) grid_cams_pane

0x22b9,	// (0x00077910) linegrid_cams_pane

0x22cd,	// (0x00077924) cell_cams_pane_ParamLimits

0x22cd,	// (0x00077924) cell_cams_pane

0xeae9,	// (0x00084140) cams_burst_image_pane

0xeaf1,	// (0x00084148) cell_cams_pane_g1

0xe5a2,	// (0x00083bf9) grid_highlight_pane_cp03

0xe93d,	// (0x00083f94) mp_bg_pane_g1

0xe5a2,	// (0x00083bf9) bg_list_pane_cp03

0x5694,	// (0x0007aceb) bg_mp_pane

0x569c,	// (0x0007acf3) grid_mp_pane

0x56a4,	// (0x0007acfb) media_player_g1

0x56ae,	// (0x0007ad05) media_player_t1

0x56bc,	// (0x0007ad13) media_player_t2

0x56ca,	// (0x0007ad21) media_player_t3

0x56d8,	// (0x0007ad2f) media_player_t4

0x56e6,	// (0x0007ad3d) media_player_t5

0x56f4,	// (0x0007ad4b) media_player_t6

0x5702,	// (0x0007ad59) media_player_t7

0x0006,

0xf5e8,	// (0x00084c3f) media_player_t

0x5710,	// (0x0007ad67) wait_bar_pane_cp02

0xf5cd,	// (0x00084c24) main_usb_pane_t

0x5758,	// (0x0007adaf) cell_mp_pane

0xe93d,	// (0x00083f94) cell_mp_pane_g1

0xe5a2,	// (0x00083bf9) grid_highlight_pane_cp06

0xeaf9,	// (0x00084150) grid_skin_colour_pane

0xeb01,	// (0x00084158) list_highlight_pane_cp03

0x22ef,	// (0x00077946) skin_g1

0xeb09,	// (0x00084160) skin_t1

0xeb18,	// (0x0008416f) skin_t2

0x0001,

0xf288,	// (0x000848df) skin_t

0x22f9,	// (0x00077950) cell_skin_colour_pane_ParamLimits

0x22f9,	// (0x00077950) cell_skin_colour_pane

0xeb26,	// (0x0008417d) cell_skin_colour_pane_g1

0x236c,	// (0x000779c3) call_video_g1_ParamLimits

0x236c,	// (0x000779c3) call_video_g1

0x2388,	// (0x000779df) call_video_g2_ParamLimits

0x2388,	// (0x000779df) call_video_g2

0x0001,

0xf28d,	// (0x000848e4) call_video_g_ParamLimits

0xf28d,	// (0x000848e4) call_video_g

0x23d0,	// (0x00077a27) call_video_uplink_pane_cp1_ParamLimits

0x23d0,	// (0x00077a27) call_video_uplink_pane_cp1

0xeb38,	// (0x0008418f) call_video_uplink_pane_cp2

0x2471,	// (0x00077ac8) video_down_crop_pane_ParamLimits

0x2471,	// (0x00077ac8) video_down_crop_pane

0x255a,	// (0x00077bb1) video_down_pane_ParamLimits

0x255a,	// (0x00077bb1) video_down_pane

0xeb40,	// (0x00084197) video_down_subqcif_pane_ParamLimits

0xeb40,	// (0x00084197) video_down_subqcif_pane

0xeb5a,	// (0x000841b1) video_down_subqcif_pane_cp_ParamLimits

0xeb5a,	// (0x000841b1) video_down_subqcif_pane_cp

0xeb80,	// (0x000841d7) im_reading_pane_ParamLimits

0xeb80,	// (0x000841d7) im_reading_pane

0x2663,	// (0x00077cba) im_writing_pane_ParamLimits

0x2663,	// (0x00077cba) im_writing_pane

0x2681,	// (0x00077cd8) im_reading_pane_t1

0xeb9a,	// (0x000841f1) list_im_pane

0xebab,	// (0x00084202) scroll_pane_cp07

0x26c0,	// (0x00077d17) im_writing_pane_t1_ParamLimits

0x26c0,	// (0x00077d17) im_writing_pane_t1

0xebc4,	// (0x0008421b) im_writing_pane_t2_ParamLimits

0xebc4,	// (0x0008421b) im_writing_pane_t2

0x0001,

0xf297,	// (0x000848ee) im_writing_pane_t_ParamLimits

0xf297,	// (0x000848ee) im_writing_pane_t

0xe5a2,	// (0x00083bf9) input_focus_pane_cp04

0xe5a2,	// (0x00083bf9) input_focus_pane_cp05

0x26d5,	// (0x00077d2c) list_im_single_pane_ParamLimits

0x26d5,	// (0x00077d2c) list_im_single_pane

0x26ee,	// (0x00077d45) list_single_im_pane_t1

0x5718,	// (0x0007ad6f) blid_accuracy_pane

0x5720,	// (0x0007ad77) blid_compass_pane

0x572a,	// (0x0007ad81) main_location_t1

0x573a,	// (0x0007ad91) main_location_t2

0x574a,	// (0x0007ada1) main_location_t3

0x0002,

0xf5f7,	// (0x00084c4e) main_location_t

0xe5a2,	// (0x00083bf9) aid_levels_location

0xe93d,	// (0x00083f94) blid_accuracy_pane_g1

0xe93d,	// (0x00083f94) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00084950) blid_accuracy_pane_g

0xec0c,	// (0x00084263) wml_content_pane

0xec4a,	// (0x000842a1) wml_button_pane_ParamLimits

0xec4a,	// (0x000842a1) wml_button_pane

0x26fd,	// (0x00077d54) wml_list_single_large_pane_ParamLimits

0x26fd,	// (0x00077d54) wml_list_single_large_pane

0x2716,	// (0x00077d6d) wml_list_single_medium_pane_ParamLimits

0x2716,	// (0x00077d6d) wml_list_single_medium_pane

0x2730,	// (0x00077d87) wml_list_single_small_pane_ParamLimits

0x2730,	// (0x00077d87) wml_list_single_small_pane

0xec5e,	// (0x000842b5) wml_selection_box_pane_ParamLimits

0xec5e,	// (0x000842b5) wml_selection_box_pane

0xec71,	// (0x000842c8) wml_list_single_pane_t1

0xec80,	// (0x000842d7) wml_list_single_medium_pane_t1

0xec8f,	// (0x000842e6) wml_list_single_large_pane_t1

0xec9e,	// (0x000842f5) input_focus_pane_cp02_ParamLimits

0xec9e,	// (0x000842f5) input_focus_pane_cp02

0xecb1,	// (0x00084308) wml_selection_box_pane_g1

0xecba,	// (0x00084311) wml_selection_box_pane_t1_ParamLimits

0xecba,	// (0x00084311) wml_selection_box_pane_t1

0xe81d,	// (0x00083e74) bg_wml_button_pane_ParamLimits

0xe81d,	// (0x00083e74) bg_wml_button_pane

0xecd2,	// (0x00084329) wml_button_pane_g1

0xecda,	// (0x00084331) wml_button_pane_t1

0xecd2,	// (0x00084329) wml_button_bg_pane_g1

0xecea,	// (0x00084341) wml_button_bg_pane_g2

0xecf2,	// (0x00084349) wml_button_bg_pane_g3

0xecfa,	// (0x00084351) wml_button_bg_pane_g4

0xed02,	// (0x00084359) wml_button_bg_pane_g5

0xed0a,	// (0x00084361) wml_button_bg_pane_g6

0xed12,	// (0x00084369) wml_button_bg_pane_g7

0xed1a,	// (0x00084371) wml_button_bg_pane_g8

0xed22,	// (0x00084379) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x000848f3) wml_button_bg_pane_g

0x274f,	// (0x00077da6) bg_list_pane_cp02

0xed2a,	// (0x00084381) mce_header_pane_ParamLimits

0xed2a,	// (0x00084381) mce_header_pane

0xed40,	// (0x00084397) mce_icon_pane

0xed40,	// (0x00084397) mce_image_pane

0xed49,	// (0x000843a0) mce_text_pane_ParamLimits

0xed49,	// (0x000843a0) mce_text_pane

0x2759,	// (0x00077db0) scroll_pane_cp03

0xec42,	// (0x00084299) scroll_pane_cp04

0xed5c,	// (0x000843b3) scroll_pane_cp05_ParamLimits

0xed5c,	// (0x000843b3) scroll_pane_cp05

0x2763,	// (0x00077dba) mce_header_field_pane_ParamLimits

0x2763,	// (0x00077dba) mce_header_field_pane

0x277c,	// (0x00077dd3) mce_header_field_pane_2_ParamLimits

0x277c,	// (0x00077dd3) mce_header_field_pane_2

0x2792,	// (0x00077de9) mce_header_field_pane_3

0x279a,	// (0x00077df1) list_single_mce_message_pane_ParamLimits

0x279a,	// (0x00077df1) list_single_mce_message_pane

0x27b6,	// (0x00077e0d) list_single_mce_smart_pane_ParamLimits

0x27b6,	// (0x00077e0d) list_single_mce_smart_pane

0xed68,	// (0x000843bf) input_focus_pane_cp03

0xed71,	// (0x000843c8) list_header_data_pane

0x27dd,	// (0x00077e34) mce_header_field_pane_t1

0x27ed,	// (0x00077e44) list_single_mce_header_pane_ParamLimits

0x27ed,	// (0x00077e44) list_single_mce_header_pane

0xed79,	// (0x000843d0) list_single_mce_header_pane_t1

0xed88,	// (0x000843df) list_single_mce_message_pane_g1

0xed90,	// (0x000843e7) list_single_mce_message_pane_t1

0x281f,	// (0x00077e76) bg_cale_heading_pane_cp01_ParamLimits

0x281f,	// (0x00077e76) bg_cale_heading_pane_cp01

0xed9e,	// (0x000843f5) bg_cale_pane_cp02_ParamLimits

0xed9e,	// (0x000843f5) bg_cale_pane_cp02

0x2852,	// (0x00077ea9) cale_month_corner_pane

0x2868,	// (0x00077ebf) cale_month_day_heading_pane_ParamLimits

0x2868,	// (0x00077ebf) cale_month_day_heading_pane

0x289b,	// (0x00077ef2) cale_month_pane_g1_ParamLimits

0x289b,	// (0x00077ef2) cale_month_pane_g1

0x28c7,	// (0x00077f1e) cale_month_pane_g2_ParamLimits

0x28c7,	// (0x00077f1e) cale_month_pane_g2

0x28e8,	// (0x00077f3f) cale_month_pane_g3_ParamLimits

0x28e8,	// (0x00077f3f) cale_month_pane_g3

0x2924,	// (0x00077f7b) cale_month_pane_g4_ParamLimits

0x2924,	// (0x00077f7b) cale_month_pane_g4

0x2960,	// (0x00077fb7) cale_month_pane_g5_ParamLimits

0x2960,	// (0x00077fb7) cale_month_pane_g5

0x299c,	// (0x00077ff3) cale_month_pane_g6_ParamLimits

0x299c,	// (0x00077ff3) cale_month_pane_g6

0x29d8,	// (0x0007802f) cale_month_pane_g7_ParamLimits

0x29d8,	// (0x0007802f) cale_month_pane_g7

0x2a14,	// (0x0007806b) cale_month_pane_g8_ParamLimits

0x2a14,	// (0x0007806b) cale_month_pane_g8

0x2a50,	// (0x000780a7) cale_month_pane_g9_ParamLimits

0x2a50,	// (0x000780a7) cale_month_pane_g9

0x2a86,	// (0x000780dd) cale_month_pane_g10_ParamLimits

0x2a86,	// (0x000780dd) cale_month_pane_g10

0x2ab0,	// (0x00078107) cale_month_pane_g11_ParamLimits

0x2ab0,	// (0x00078107) cale_month_pane_g11

0x2ada,	// (0x00078131) cale_month_pane_g12_ParamLimits

0x2ada,	// (0x00078131) cale_month_pane_g12

0x2b08,	// (0x0007815f) cale_month_pane_g13_ParamLimits

0x2b08,	// (0x0007815f) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00084906) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00084906) cale_month_pane_g

0x2b36,	// (0x0007818d) cale_month_week_pane

0x2b47,	// (0x0007819e) grid_cale_month_pane_ParamLimits

0x2b47,	// (0x0007819e) grid_cale_month_pane

0x2b75,	// (0x000781cc) cale_month_day_heading_pane_t1

0x2bd3,	// (0x0007822a) cale_month_day_heading_pane_t2

0x2c38,	// (0x0007828f) cale_month_day_heading_pane_t3

0x2c9d,	// (0x000782f4) cale_month_day_heading_pane_t4

0x2d02,	// (0x00078359) cale_month_day_heading_pane_t5

0x2d67,	// (0x000783be) cale_month_day_heading_pane_t6

0x2dcc,	// (0x00078423) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00084921) cale_month_day_heading_pane_t

0xea3a,	// (0x00084091) bg_cale_side_pane_cp01

0x2e31,	// (0x00078488) cale_month_week_pane_t1

0x2e48,	// (0x0007849f) cale_month_week_pane_t2

0x2e5f,	// (0x000784b6) cale_month_week_pane_t3

0x2e76,	// (0x000784cd) cale_month_week_pane_t4

0x2e8d,	// (0x000784e4) cale_month_week_pane_t5

0x2ea4,	// (0x000784fb) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00084930) cale_month_week_pane_t

0x2ec3,	// (0x0007851a) cell_cale_month_pane_ParamLimits

0x2ec3,	// (0x0007851a) cell_cale_month_pane

0xaddb,	// (0x00080432) cell_cale_month_pane_g1

0x2f71,	// (0x000785c8) cell_cale_month_pane_t1_ParamLimits

0x2f71,	// (0x000785c8) cell_cale_month_pane_t1

0xea48,	// (0x0008409f) grid_highlight_pane_cp08

0xe93d,	// (0x00083f94) main_smil_g1

0x2f8d,	// (0x000785e4) smil_status_pane

0xedd3,	// (0x0008442a) smil_text_pane

0x551f,	// (0x0007ab76) bg_popup_call3_rect_pane_g8

0x5527,	// (0x0007ab7e) bg_popup_call3_rect_pane_g9

0x0008,

0xf58b,	// (0x00084be2) bg_popup_call3_rect_pane_g

0x5e7a,	// (0x0007b4d1) smil_status_volume_pane_g1

0xeddd,	// (0x00084434) smil_status_pane_t1

0xaf50,	// (0x000805a7) volume_smil_pane

0xedf4,	// (0x0008444b) list_smil_text_pane

0x2fa2,	// (0x000785f9) scroll_pane_cp011

0x2fad,	// (0x00078604) smil_text_list_pane_t1_ParamLimits

0x2fad,	// (0x00078604) smil_text_list_pane_t1

0xade7,	// (0x0008043e) aid_volume_smil_ParamLimits

0xade7,	// (0x0008043e) aid_volume_smil

0xe93d,	// (0x00083f94) smil_volume_pane_g1

0xe93d,	// (0x00083f94) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00084950) smil_volume_pane_g

0xe8e8,	// (0x00083f3f) listscroll_cale_day_pane

0xedfe,	// (0x00084455) bg_cale_pane

0xee16,	// (0x0008446d) list_cale_pane

0xee27,	// (0x0008447e) scroll_pane_cp09

0xee38,	// (0x0008448f) cale_bg_pane_g1

0xee40,	// (0x00084497) cale_bg_pane_g2

0xee48,	// (0x0008449f) cale_bg_pane_g3

0xee50,	// (0x000844a7) cale_bg_pane_g4

0xee58,	// (0x000844af) cale_bg_pane_g5

0xee60,	// (0x000844b7) cale_bg_pane_g6

0xee68,	// (0x000844bf) cale_bg_pane_g7

0xee70,	// (0x000844c7) cale_bg_pane_g8

0xee78,	// (0x000844cf) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00084955) cale_bg_pane_g

0x3002,	// (0x00078659) list_cale_time_pane_ParamLimits

0x3002,	// (0x00078659) list_cale_time_pane

0x3017,	// (0x0007866e) list_cale_time_pane_g1_ParamLimits

0x3017,	// (0x0007866e) list_cale_time_pane_g1

0xee80,	// (0x000844d7) list_cale_time_pane_g2_ParamLimits

0xee80,	// (0x000844d7) list_cale_time_pane_g2

0x3023,	// (0x0007867a) list_cale_time_pane_g3_ParamLimits

0x3023,	// (0x0007867a) list_cale_time_pane_g3

0x3031,	// (0x00078688) list_cale_time_pane_g4_ParamLimits

0x3031,	// (0x00078688) list_cale_time_pane_g4

0x303f,	// (0x00078696) list_cale_time_pane_g5_ParamLimits

0x303f,	// (0x00078696) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00084968) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00084968) list_cale_time_pane_g

0x304d,	// (0x000786a4) list_cale_time_pane_t1_ParamLimits

0x304d,	// (0x000786a4) list_cale_time_pane_t1

0x3075,	// (0x000786cc) list_cale_time_pane_t2_ParamLimits

0x3075,	// (0x000786cc) list_cale_time_pane_t2

0x3514,	// (0x00078b6b) aid_blid_cardinal_pane

0x3562,	// (0x00078bb9) compass_pane_t4

0x309d,	// (0x000786f4) list_cale_time_pane_t4_ParamLimits

0x309d,	// (0x000786f4) list_cale_time_pane_t4

0x3570,	// (0x00078bc7) compass_pane_t5

0x3580,	// (0x00078bd7) compass_pane_t6

0x358e,	// (0x00078be5) compass_pane_t7

0x3610,	// (0x00078c67) navi_pane_cc_t1

0x382f,	// (0x00078e86) aid_phob_thumbnail_center_pane

0x3ecb,	// (0x00079522) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00084975) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00084975) list_cale_time_pane_t

0xab71,	// (0x000801c8) bg_popup_window_pane_cp02_ParamLimits

0xab71,	// (0x000801c8) bg_popup_window_pane_cp02

0xee9a,	// (0x000844f1) heading_pane_cp01_ParamLimits

0xee9a,	// (0x000844f1) heading_pane_cp01

0xeea6,	// (0x000844fd) loc_req_pane_ParamLimits

0xeea6,	// (0x000844fd) loc_req_pane

0xeeb6,	// (0x0008450d) loc_type_pane_ParamLimits

0xeeb6,	// (0x0008450d) loc_type_pane

0xeec8,	// (0x0008451f) loc_type_pane_t1_ParamLimits

0xeec8,	// (0x0008451f) loc_type_pane_t1

0xeeda,	// (0x00084531) loc_type_pane_t2_ParamLimits

0xeeda,	// (0x00084531) loc_type_pane_t2

0xeeec,	// (0x00084543) loc_type_pane_t3_ParamLimits

0xeeec,	// (0x00084543) loc_type_pane_t3

0x0002,

0xf325,	// (0x0008497c) loc_type_pane_t_ParamLimits

0xf325,	// (0x0008497c) loc_type_pane_t

0xeefe,	// (0x00084555) list_loc_req_pane

0xef08,	// (0x0008455f) scroll_pane_cp012

0x30c5,	// (0x0007871c) list_single_loc_request_popup_menu_pane_ParamLimits

0x30c5,	// (0x0007871c) list_single_loc_request_popup_menu_pane

0xef13,	// (0x0008456a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xef13,	// (0x0008456a) list_single_loc_request_popup_menu_pane_g1

0xef1f,	// (0x00084576) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xef1f,	// (0x00084576) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00084983) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00084983) list_single_loc_request_popup_menu_pane_g

0xef2b,	// (0x00084582) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xef2b,	// (0x00084582) list_single_loc_request_popup_menu_pane_t1

0xe81d,	// (0x00083e74) bg_popup_window_pane_cp03_ParamLimits

0xe81d,	// (0x00083e74) bg_popup_window_pane_cp03

0xef41,	// (0x00084598) heading_loc_req_pane_ParamLimits

0xef41,	// (0x00084598) heading_loc_req_pane

0x30d2,	// (0x00078729) popup_dyc_status_message_window_g1_ParamLimits

0x30d2,	// (0x00078729) popup_dyc_status_message_window_g1

0x30e6,	// (0x0007873d) popup_dyc_status_message_window_t1_ParamLimits

0x30e6,	// (0x0007873d) popup_dyc_status_message_window_t1

0x30fb,	// (0x00078752) popup_dyc_status_message_window_t2_ParamLimits

0x30fb,	// (0x00078752) popup_dyc_status_message_window_t2

0x3110,	// (0x00078767) popup_dyc_status_message_window_t3_ParamLimits

0x3110,	// (0x00078767) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00084988) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00084988) popup_dyc_status_message_window_t

0xe5a2,	// (0x00083bf9) bg_heading_pane_cp01

0xef4d,	// (0x000845a4) heading_loc_req_pane_g1

0xef55,	// (0x000845ac) heading_loc_req_pane_g2

0xef5d,	// (0x000845b4) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0008498f) heading_loc_req_pane_g

0xef65,	// (0x000845bc) heading_loc_req_pane_t1

0xef75,	// (0x000845cc) bg_popup_sub_pane_cp01_ParamLimits

0xef75,	// (0x000845cc) bg_popup_sub_pane_cp01

0xef83,	// (0x000845da) popup_cale_events_window_g1_ParamLimits

0xef83,	// (0x000845da) popup_cale_events_window_g1

0xefa3,	// (0x000845fa) popup_cale_events_window_g2_ParamLimits

0xefa3,	// (0x000845fa) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x000849c3) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x000849c3) popup_cale_events_window_g

0xefc3,	// (0x0008461a) popup_cale_events_window_t1_ParamLimits

0xefc3,	// (0x0008461a) popup_cale_events_window_t1

0xefd5,	// (0x0008462c) popup_cale_events_window_t2_ParamLimits

0xefd5,	// (0x0008462c) popup_cale_events_window_t2

0xf013,	// (0x0008466a) popup_cale_events_window_t3_ParamLimits

0xf013,	// (0x0008466a) popup_cale_events_window_t3

0xf04d,	// (0x000846a4) popup_cale_events_window_t4_ParamLimits

0xf04d,	// (0x000846a4) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x000849c8) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x000849c8) popup_cale_events_window_t

0x3144,	// (0x0007879b) call_type_pane

0x3154,	// (0x000787ab) popup_call_status_window_g1

0x3168,	// (0x000787bf) popup_call_status_window_g2

0x317c,	// (0x000787d3) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x000849d1) popup_call_status_window_g

0xf083,	// (0x000846da) call_type_pane_g1

0xf08c,	// (0x000846e3) call_type_pane_g2

0x0001,

0xf381,	// (0x000849d8) call_type_pane_g

0xe5a2,	// (0x00083bf9) bg_popup_sub_pane_cp02

0xf095,	// (0x000846ec) listscroll_popup_wml_pane

0xf09d,	// (0x000846f4) list_wml_pane

0xf0a7,	// (0x000846fe) scroll_pane_cp013

0xf0b2,	// (0x00084709) list_single_graphic_popup_wml_pane_ParamLimits

0xf0b2,	// (0x00084709) list_single_graphic_popup_wml_pane

0xe93d,	// (0x00083f94) list_single_graphic_popup_wml_pane_g1

0xf0c6,	// (0x0008471d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x000849dd) list_single_graphic_popup_wml_pane_g

0xf0ce,	// (0x00084725) list_single_graphic_popup_wml_pane_t1

0xf0e4,	// (0x0008473b) aid_call_pane

0xe815,	// (0x00083e6c) popup_clock_analogue_window_g1

0xe815,	// (0x00083e6c) popup_clock_analogue_window_g2

0xae80,	// (0x000804d7) popup_clock_analogue_window_g3

0xae80,	// (0x000804d7) popup_clock_analogue_window_g4

0xe93d,	// (0x00083f94) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x000849e2) popup_clock_analogue_window_g

0xae88,	// (0x000804df) popup_clock_analogue_window_t1

0xae96,	// (0x000804ed) clock_digital_number_pane_ParamLimits

0xae96,	// (0x000804ed) clock_digital_number_pane

0xaea2,	// (0x000804f9) clock_digital_number_pane_cp02_ParamLimits

0xaea2,	// (0x000804f9) clock_digital_number_pane_cp02

0xaeae,	// (0x00080505) clock_digital_number_pane_cp03_ParamLimits

0xaeae,	// (0x00080505) clock_digital_number_pane_cp03

0xaeba,	// (0x00080511) clock_digital_number_pane_cp04_ParamLimits

0xaeba,	// (0x00080511) clock_digital_number_pane_cp04

0xaec6,	// (0x0008051d) clock_digital_separator_pane_ParamLimits

0xaec6,	// (0x0008051d) clock_digital_separator_pane

0xaed2,	// (0x00080529) popup_clock_digital_window_t1

0xe93d,	// (0x00083f94) clock_digital_number_pane_g1

0xe93d,	// (0x00083f94) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00084950) clock_digital_number_pane_g

0xe93d,	// (0x00083f94) clock_digital_separator_pane_g1

0xe93d,	// (0x00083f94) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00084950) clock_digital_separator_pane_g

0xe5a2,	// (0x00083bf9) bg_popup_window_pane_cp04

0x318c,	// (0x000787e3) heading_pane_cp03

0x3194,	// (0x000787eb) listscroll_popup_gms_pane

0x319c,	// (0x000787f3) grid_large_graphic_popup_pane

0x31a6,	// (0x000787fd) listscroll_popup_gms_pane_g1

0x31ae,	// (0x00078805) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x000849ed) listscroll_popup_gms_pane_g

0xec42,	// (0x00084299) scroll_pane_cp014

0x31b6,	// (0x0007880d) cell_large_graphic_popup_pane_ParamLimits

0x31b6,	// (0x0007880d) cell_large_graphic_popup_pane

0x31ce,	// (0x00078825) cell_large_graphic_popup_pane_g1_ParamLimits

0x31ce,	// (0x00078825) cell_large_graphic_popup_pane_g1

0x31da,	// (0x00078831) cell_large_graphic_popup_pane_g2_ParamLimits

0x31da,	// (0x00078831) cell_large_graphic_popup_pane_g2

0x31e6,	// (0x0007883d) cell_large_graphic_popup_pane_g3_ParamLimits

0x31e6,	// (0x0007883d) cell_large_graphic_popup_pane_g3

0x31f3,	// (0x0007884a) cell_large_graphic_popup_pane_g4_ParamLimits

0x31f3,	// (0x0007884a) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x000849f2) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x000849f2) cell_large_graphic_popup_pane_g

0x3203,	// (0x0007885a) grid_highlight_pane_cp010

0xe93d,	// (0x00083f94) bg_popup_call_pane_g1

0x320d,	// (0x00078864) list_single_graphic_popup_conf_pane_ParamLimits

0x320d,	// (0x00078864) list_single_graphic_popup_conf_pane

0x321f,	// (0x00078876) list_highlight_pane_cp01

0x3228,	// (0x0007887f) list_single_graphic_popup_conf_pane_g1

0x3230,	// (0x00078887) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x000849fb) list_single_graphic_popup_conf_pane_g

0x3238,	// (0x0007888f) list_single_graphic_popup_conf_pane_t1

0x3246,	// (0x0007889d) linegrid_cams_pane_g1

0x324f,	// (0x000788a6) linegrid_cams_pane_g2

0xea7b,	// (0x000840d2) linegrid_cams_pane_g3

0x3258,	// (0x000788af) linegrid_cams_pane_g4

0x3261,	// (0x000788b8) linegrid_cams_pane_g5

0x326a,	// (0x000788c1) linegrid_cams_pane_g6

0xea84,	// (0x000840db) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00084a00) linegrid_cams_pane_g

0x3275,	// (0x000788cc) popup_clock_analogue_window

0x3275,	// (0x000788cc) popup_clock_digital_window

0xe5a2,	// (0x00083bf9) popup_phob_thumbnail_window

0xe93d,	// (0x00083f94) call_video_uplink_pane_g1

0x327e,	// (0x000788d5) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00084a0f) call_video_uplink_pane_g

0x3286,	// (0x000788dd) video_uplink_pane

0x328e,	// (0x000788e5) mce_image_pane_g1

0x3298,	// (0x000788ef) mce_image_pane_g2

0x32a2,	// (0x000788f9) mce_image_pane_g3

0x32ac,	// (0x00078903) mce_image_pane_g4

0x32b4,	// (0x0007890b) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00084a14) mce_image_pane_g

0x32bc,	// (0x00078913) control_top_pane_stacon_cp01_ParamLimits

0x32bc,	// (0x00078913) control_top_pane_stacon_cp01

0x32d0,	// (0x00078927) uni_indicator_pane_stacon_cp01_ParamLimits

0x32d0,	// (0x00078927) uni_indicator_pane_stacon_cp01

0x32e1,	// (0x00078938) bg_popup_sub_pane_cp03

0x32eb,	// (0x00078942) chi_dic_find_pane

0x32f3,	// (0x0007894a) listscroll_chi_dic_pane

0x32fc,	// (0x00078953) main_pane_chidic_g1

0x330f,	// (0x00078966) chi_dic_find_pane_t1

0x331d,	// (0x00078974) find_chidic_pane

0x3326,	// (0x0007897d) chi_dic_list_pane_ParamLimits

0x3326,	// (0x0007897d) chi_dic_list_pane

0x3337,	// (0x0007898e) scroll_pane_cp020

0x333f,	// (0x00078996) find_chidic_pane_t1

0xe5a2,	// (0x00083bf9) input_focus_pane_cp06

0x334e,	// (0x000789a5) list_chi_dic_pane_ParamLimits

0x334e,	// (0x000789a5) list_chi_dic_pane

0x3360,	// (0x000789b7) list_chi_dic_pane_t1_ParamLimits

0x3360,	// (0x000789b7) list_chi_dic_pane_t1

0xe5a2,	// (0x00083bf9) list_highlight_pane_cp020

0x3373,	// (0x000789ca) bg_cale_heading_pane_g1

0x337b,	// (0x000789d2) bg_cale_heading_pane_g2

0x3383,	// (0x000789da) bg_cale_heading_pane_g3

0x338b,	// (0x000789e2) bg_cale_heading_pane_g4

0x3393,	// (0x000789ea) bg_cale_heading_pane_g5

0x339b,	// (0x000789f2) bg_cale_heading_pane_g6

0x33a3,	// (0x000789fa) bg_cale_heading_pane_g7

0x33ab,	// (0x00078a02) bg_cale_heading_pane_g8

0x33b3,	// (0x00078a0a) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00084a1f) bg_cale_heading_pane_g

0x3373,	// (0x000789ca) bg_cale_side_pane_g1

0x33bb,	// (0x00078a12) bg_cale_side_pane_g2

0x33c5,	// (0x00078a1c) bg_cale_side_pane_g3

0x33cf,	// (0x00078a26) bg_cale_side_pane_g4

0x33d9,	// (0x00078a30) bg_cale_side_pane_g5

0x33e3,	// (0x00078a3a) bg_cale_side_pane_g6

0x33ed,	// (0x00078a44) bg_cale_side_pane_g7

0x33f7,	// (0x00078a4e) bg_cale_side_pane_g8

0x33ff,	// (0x00078a56) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00084a32) bg_cale_side_pane_g

0x3407,	// (0x00078a5e) popup_call_status_window_ParamLimits

0x3407,	// (0x00078a5e) popup_call_status_window

0x3454,	// (0x00078aab) stacon_top_pane

0x345c,	// (0x00078ab3) status_pane_ParamLimits

0x345c,	// (0x00078ab3) status_pane

0x3471,	// (0x00078ac8) status_small_pane

0x3479,	// (0x00078ad0) control_pane

0xe5a2,	// (0x00083bf9) stacon_bottom_pane

0x3481,	// (0x00078ad8) list_single_mce_smart_pane_t1_ParamLimits

0x3481,	// (0x00078ad8) list_single_mce_smart_pane_t1

0x3494,	// (0x00078aeb) list_single_mce_smart_pane_t2_ParamLimits

0x3494,	// (0x00078aeb) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00084a45) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00084a45) list_single_mce_smart_pane_t

0x34b3,	// (0x00078b0a) compass_pane

0x34be,	// (0x00078b15) main_location2_pane_t1

0x34d4,	// (0x00078b2b) main_location2_pane_t2

0x34ea,	// (0x00078b41) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00084a4a) main_location2_pane_t

0x3538,	// (0x00078b8f) compass_pane_g1_ParamLimits

0x3538,	// (0x00078b8f) compass_pane_g1

0x3544,	// (0x00078b9b) compass_pane_t1

0x3553,	// (0x00078baa) compass_pane_t2

0x0005,

0xf3fc,	// (0x00084a53) compass_pane_t

0x359e,	// (0x00078bf5) text_secondary_cp61

0x3607,	// (0x00078c5e) navi_pane_cams_g5

0x3683,	// (0x00078cda) navi_pane_im_t1

0x3691,	// (0x00078ce8) navi_pane_mp_g1_ParamLimits

0x3691,	// (0x00078ce8) navi_pane_mp_g1

0x36a5,	// (0x00078cfc) navi_pane_mp_g2_ParamLimits

0x36a5,	// (0x00078cfc) navi_pane_mp_g2

0x36b1,	// (0x00078d08) navi_pane_mp_g3_ParamLimits

0x36b1,	// (0x00078d08) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00084a67) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00084a67) navi_pane_mp_g

0x36bd,	// (0x00078d14) navi_pane_mp_t1

0x36cb,	// (0x00078d22) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00084a6e) navi_pane_mp_t

0x3778,	// (0x00078dcf) navi_pane_vt_g1

0x36bd,	// (0x00078d14) navi_pane_vt_t1

0x3780,	// (0x00078dd7) navi_slider_pane

0x3788,	// (0x00078ddf) zooming_pane

0x3790,	// (0x00078de7) navi_slider_pane_g1

0xaeef,	// (0x00080546) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00084a75) navi_slider_pane_g

0x37b4,	// (0x00078e0b) aid_levels_zoom

0x37bc,	// (0x00078e13) zooming_pane_g1

0x37c4,	// (0x00078e1b) zooming_pane_g2

0x37c4,	// (0x00078e1b) zooming_pane_g3

0x0002,

0xf42d,	// (0x00084a84) zooming_pane_g

0x37cc,	// (0x00078e23) level_10_zoom

0x37d5,	// (0x00078e2c) level_11_zoom

0x37de,	// (0x00078e35) level_1_zoom

0x37e7,	// (0x00078e3e) level_2_zoom

0x37f0,	// (0x00078e47) level_3_zoom

0x37f9,	// (0x00078e50) level_4_zoom

0x3802,	// (0x00078e59) level_5_zoom

0x380b,	// (0x00078e62) level_6_zoom

0x3814,	// (0x00078e6b) level_7_zoom

0x381d,	// (0x00078e74) level_8_zoom

0x3826,	// (0x00078e7d) level_9_zoom

0x3837,	// (0x00078e8e) popup_phob_thumbnail_window_g1

0x383f,	// (0x00078e96) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00084a8b) popup_phob_thumbnail_window_g

0x57b9,	// (0x0007ae10) level_1_location

0x57c1,	// (0x0007ae18) level_2_location

0x57c9,	// (0x0007ae20) level_3_location

0x57d1,	// (0x0007ae28) level_4_location

0x3788,	// (0x00078ddf) level_5_location

0x3847,	// (0x00078e9e) mce_icon_pane_g1

0x384f,	// (0x00078ea6) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00084a90) mce_icon_pane_g

0x3857,	// (0x00078eae) main_mup_pane_g1_ParamLimits

0x3857,	// (0x00078eae) main_mup_pane_g1

0x386d,	// (0x00078ec4) main_mup_pane_g2_ParamLimits

0x386d,	// (0x00078ec4) main_mup_pane_g2

0x3885,	// (0x00078edc) main_mup_pane_g3_ParamLimits

0x3885,	// (0x00078edc) main_mup_pane_g3

0x389d,	// (0x00078ef4) main_mup_pane_g4_ParamLimits

0x389d,	// (0x00078ef4) main_mup_pane_g4

0x38af,	// (0x00078f06) main_mup_pane_g5_ParamLimits

0x38af,	// (0x00078f06) main_mup_pane_g5

0x38cb,	// (0x00078f22) main_mup_pane_g6_ParamLimits

0x38cb,	// (0x00078f22) main_mup_pane_g6

0x38e5,	// (0x00078f3c) main_mup_pane_g7_ParamLimits

0x38e5,	// (0x00078f3c) main_mup_pane_g7

0x3903,	// (0x00078f5a) main_mup_pane_g8_ParamLimits

0x3903,	// (0x00078f5a) main_mup_pane_g8

0x3921,	// (0x00078f78) main_mup_pane_g9_ParamLimits

0x3921,	// (0x00078f78) main_mup_pane_g9

0x393d,	// (0x00078f94) main_mup_pane_g10_ParamLimits

0x393d,	// (0x00078f94) main_mup_pane_g10

0x395b,	// (0x00078fb2) main_mup_pane_g11_ParamLimits

0x395b,	// (0x00078fb2) main_mup_pane_g11

0x3975,	// (0x00078fcc) main_mup_pane_g12_ParamLimits

0x3975,	// (0x00078fcc) main_mup_pane_g12

0x398b,	// (0x00078fe2) main_mup_pane_g13_ParamLimits

0x398b,	// (0x00078fe2) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00084a95) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00084a95) main_mup_pane_g

0x399f,	// (0x00078ff6) main_mup_pane_t1_ParamLimits

0x399f,	// (0x00078ff6) main_mup_pane_t1

0x39bb,	// (0x00079012) main_mup_pane_t2_ParamLimits

0x39bb,	// (0x00079012) main_mup_pane_t2

0x39d3,	// (0x0007902a) main_mup_pane_t3_ParamLimits

0x39d3,	// (0x0007902a) main_mup_pane_t3

0x39eb,	// (0x00079042) main_mup_pane_t4_ParamLimits

0x39eb,	// (0x00079042) main_mup_pane_t4

0x3a09,	// (0x00079060) main_mup_pane_t5_ParamLimits

0x3a09,	// (0x00079060) main_mup_pane_t5

0x3a1e,	// (0x00079075) main_mup_pane_t6_ParamLimits

0x3a1e,	// (0x00079075) main_mup_pane_t6

0x0005,

0xf459,	// (0x00084ab0) main_mup_pane_t_ParamLimits

0xf459,	// (0x00084ab0) main_mup_pane_t

0x3a30,	// (0x00079087) mup_progress_pane_ParamLimits

0x3a30,	// (0x00079087) mup_progress_pane

0x3a3c,	// (0x00079093) mup_visualizer_pane_ParamLimits

0x3a3c,	// (0x00079093) mup_visualizer_pane

0x3a70,	// (0x000790c7) mup_volume_pane_ParamLimits

0x3a70,	// (0x000790c7) mup_volume_pane

0x3a8e,	// (0x000790e5) mup_visualizer_pane_g1_ParamLimits

0x3a8e,	// (0x000790e5) mup_visualizer_pane_g1

0x3a8e,	// (0x000790e5) mup_visualizer_pane_g2_ParamLimits

0x3a8e,	// (0x000790e5) mup_visualizer_pane_g2

0x3538,	// (0x00078b8f) mup_visualizer_pane_g3_ParamLimits

0x3538,	// (0x00078b8f) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00084abd) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00084abd) mup_visualizer_pane_g

0xe93d,	// (0x00083f94) mup_volume_pane_g1

0x3aa4,	// (0x000790fb) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00084ac4) mup_volume_pane_g

0xe93d,	// (0x00083f94) mup_progress_pane_g1

0x3aad,	// (0x00079104) mup_progress_pane_g2

0x3ab6,	// (0x0007910d) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00084ac9) mup_progress_pane_g

0xe5a2,	// (0x00083bf9) bg_popup_window_pane_cp05

0x3abf,	// (0x00079116) heading_pane_cp02_ParamLimits

0x3abf,	// (0x00079116) heading_pane_cp02

0x3adb,	// (0x00079132) list_popup_blid_pane

0x3ae3,	// (0x0007913a) list_blid_sat_info_pane_ParamLimits

0x3ae3,	// (0x0007913a) list_blid_sat_info_pane

0x3af6,	// (0x0007914d) list_blid_sat_info_pane_g1

0x3afe,	// (0x00079155) list_blid_sat_info_pane_t1

0x3c18,	// (0x0007926f) mup_equalizer_pane_ParamLimits

0x3c18,	// (0x0007926f) mup_equalizer_pane

0x3c39,	// (0x00079290) mup_equalizer_pane_cp1_ParamLimits

0x3c39,	// (0x00079290) mup_equalizer_pane_cp1

0x3c5a,	// (0x000792b1) mup_equalizer_pane_cp2_ParamLimits

0x3c5a,	// (0x000792b1) mup_equalizer_pane_cp2

0x3c7f,	// (0x000792d6) mup_equalizer_pane_cp3_ParamLimits

0x3c7f,	// (0x000792d6) mup_equalizer_pane_cp3

0x3ca8,	// (0x000792ff) mup_equalizer_pane_cp4_ParamLimits

0x3ca8,	// (0x000792ff) mup_equalizer_pane_cp4

0x3cd1,	// (0x00079328) mup_equalizer_pane_cp5

0x3ce9,	// (0x00079340) mup_equalizer_pane_cp6

0x3d01,	// (0x00079358) mup_equalizer_pane_cp7

0x55a7,	// (0x0007abfe) bg_popup_call_poc_act_pane_g9

0x55af,	// (0x0007ac06) bg_popup_call_poc_act_pane_g10

0x55b7,	// (0x0007ac0e) bg_popup_call_poc_act_pane_g11

0x000a,

0xe81d,	// (0x00083e74) mup_scale_pane

0xe93d,	// (0x00083f94) mup_scale_pane_g1

0x3d19,	// (0x00079370) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00084ae5) mup_scale_pane_g

0x3d4f,	// (0x000793a6) msg_data_pane

0x3d57,	// (0x000793ae) scroll_pane_cp017

0x0b84,	// (0x000761db) bg_list_pane_cp04_ParamLimits

0x0b84,	// (0x000761db) bg_list_pane_cp04

0x3d5f,	// (0x000793b6) msg_data_pane_g1

0x3d67,	// (0x000793be) msg_data_pane_g2

0x3d71,	// (0x000793c8) msg_data_pane_g3

0x3d7b,	// (0x000793d2) msg_data_pane_g4

0x3d83,	// (0x000793da) msg_data_pane_g5

0x3d8b,	// (0x000793e2) msg_data_pane_g6

0x3d93,	// (0x000793ea) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00084af4) msg_data_pane_g

0x0bac,	// (0x00076203) msg_text_pane_ParamLimits

0x0bac,	// (0x00076203) msg_text_pane

0x3d9b,	// (0x000793f2) qrid_highlight_pane_cp011_ParamLimits

0x3d9b,	// (0x000793f2) qrid_highlight_pane_cp011

0xe5a2,	// (0x00083bf9) msg_body_pane

0xe5a2,	// (0x00083bf9) msg_header_pane

0x3dba,	// (0x00079411) input_focus_pane_cp07

0x0be6,	// (0x0007623d) msg_header_pane_t1_ParamLimits

0x0be6,	// (0x0007623d) msg_header_pane_t1

0x0bfa,	// (0x00076251) msg_header_pane_t2_ParamLimits

0x0bfa,	// (0x00076251) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00084b08) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00084b08) msg_header_pane_t

0x3dcf,	// (0x00079426) msg_body_pane_g1

0x0c0c,	// (0x00076263) msg_body_pane_t1_ParamLimits

0x0c0c,	// (0x00076263) msg_body_pane_t1

0x0c3d,	// (0x00076294) msg_body_pane_t2_ParamLimits

0x0c3d,	// (0x00076294) msg_body_pane_t2

0x0c4f,	// (0x000762a6) msg_body_pane_t3_ParamLimits

0x0c4f,	// (0x000762a6) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00084b0d) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00084b0d) msg_body_pane_t

0x3e11,	// (0x00079468) main_viewer_pane_g1_ParamLimits

0x3e11,	// (0x00079468) main_viewer_pane_g1

0x3e1f,	// (0x00079476) main_viewer_pane_g2_ParamLimits

0x3e1f,	// (0x00079476) main_viewer_pane_g2

0x3e2d,	// (0x00079484) main_viewer_pane_g3_ParamLimits

0x3e2d,	// (0x00079484) main_viewer_pane_g3

0x3e3c,	// (0x00079493) main_viewer_pane_g4_ParamLimits

0x3e3c,	// (0x00079493) main_viewer_pane_g4

0xaf19,	// (0x00080570) main_viewer_pane_g5_ParamLimits

0xaf19,	// (0x00080570) main_viewer_pane_g5

0xaf19,	// (0x00080570) main_viewer_pane_g7_ParamLimits

0xaf19,	// (0x00080570) main_viewer_pane_g7

0xaf2b,	// (0x00080582) main_viewer_pane_g8_ParamLimits

0xaf2b,	// (0x00080582) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00084b1d) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00084b1d) main_viewer_pane_g

0x3e4b,	// (0x000794a2) viewer_content_pane_ParamLimits

0x3e4b,	// (0x000794a2) viewer_content_pane

0x3e88,	// (0x000794df) main_postcard_pane_g1_ParamLimits

0x3e88,	// (0x000794df) main_postcard_pane_g1

0x3e9e,	// (0x000794f5) main_postcard_pane_g2_ParamLimits

0x3e9e,	// (0x000794f5) main_postcard_pane_g2

0x3eb4,	// (0x0007950b) main_postcard_pane_g3_ParamLimits

0x3eb4,	// (0x0007950b) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00084b2e) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00084b2e) main_postcard_pane_g

0x3ecb,	// (0x00079522) main_postcard_pane_g4

0x5e8d,	// (0x0007b4e4) smil_status_volume_pane_g2

0x3f0e,	// (0x00079565) postcard_pane_ParamLimits

0x3f0e,	// (0x00079565) postcard_pane

0x3f5e,	// (0x000795b5) postcard_pane_g1_ParamLimits

0x3f5e,	// (0x000795b5) postcard_pane_g1

0x3f6c,	// (0x000795c3) postcard_pane_g2_ParamLimits

0x3f6c,	// (0x000795c3) postcard_pane_g2

0x3f78,	// (0x000795cf) postcard_pane_g3_ParamLimits

0x3f78,	// (0x000795cf) postcard_pane_g3

0x3f84,	// (0x000795db) postcard_pane_g4_ParamLimits

0x3f84,	// (0x000795db) postcard_pane_g4

0x3f92,	// (0x000795e9) postcard_pane_g5_ParamLimits

0x3f92,	// (0x000795e9) postcard_pane_g5

0x3fa4,	// (0x000795fb) postcard_pane_g6_ParamLimits

0x3fa4,	// (0x000795fb) postcard_pane_g6

0x3f5e,	// (0x000795b5) postcard_pane_g7_ParamLimits

0x3f5e,	// (0x000795b5) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00084b3b) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00084b3b) postcard_pane_g

0x3fbc,	// (0x00079613) main_mp2_pane_g1_ParamLimits

0x3fbc,	// (0x00079613) main_mp2_pane_g1

0x3fca,	// (0x00079621) main_mp2_pane_g2_ParamLimits

0x3fca,	// (0x00079621) main_mp2_pane_g2

0x3fd6,	// (0x0007962d) main_mp2_pane_g3_ParamLimits

0x3fd6,	// (0x0007962d) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00084b4a) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00084b4a) main_mp2_pane_g

0x3fe2,	// (0x00079639) main_mp2_pane_t1_ParamLimits

0x3fe2,	// (0x00079639) main_mp2_pane_t1

0x3ff9,	// (0x00079650) main_mp2_pane_t2_ParamLimits

0x3ff9,	// (0x00079650) main_mp2_pane_t2

0x400d,	// (0x00079664) main_mp2_pane_t3_ParamLimits

0x400d,	// (0x00079664) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00084b51) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00084b51) main_mp2_pane_t

0x401f,	// (0x00079676) pec_content_pane_ParamLimits

0x401f,	// (0x00079676) pec_content_pane

0xec42,	// (0x00084299) scroll_pane_cp015

0x4031,	// (0x00079688) pec_attribute_pane_ParamLimits

0x4031,	// (0x00079688) pec_attribute_pane

0x4041,	// (0x00079698) pec_content_pane_g1_ParamLimits

0x4041,	// (0x00079698) pec_content_pane_g1

0x404d,	// (0x000796a4) pec_content_pane_t1_ParamLimits

0x404d,	// (0x000796a4) pec_content_pane_t1

0x405f,	// (0x000796b6) pec_content_pane_t2_ParamLimits

0x405f,	// (0x000796b6) pec_content_pane_t2

0x0001,

0xf501,	// (0x00084b58) pec_content_pane_t_ParamLimits

0xf501,	// (0x00084b58) pec_content_pane_t

0x4071,	// (0x000796c8) list_single_graphic_pane_cp01_ParamLimits

0x4071,	// (0x000796c8) list_single_graphic_pane_cp01

0xe81d,	// (0x00083e74) bg_popup_sub_pane_cp04

0x408b,	// (0x000796e2) popup_mup_playback_window_g1

0x4097,	// (0x000796ee) popup_mup_playback_window_t1

0x40ac,	// (0x00079703) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00084b5d) popup_mup_playback_window_t

0x4101,	// (0x00079758) main_image_pane_g1_ParamLimits

0x4101,	// (0x00079758) main_image_pane_g1

0x41de,	// (0x00079835) scroll_pane_cp018_ParamLimits

0x41de,	// (0x00079835) scroll_pane_cp018

0x41f6,	// (0x0007984d) scroll_pane_cp016_ParamLimits

0x41f6,	// (0x0007984d) scroll_pane_cp016

0x422a,	// (0x00079881) smil2_image_pane_ParamLimits

0x422a,	// (0x00079881) smil2_image_pane

0x4260,	// (0x000798b7) smil2_root_pane_ParamLimits

0x4260,	// (0x000798b7) smil2_root_pane

0x4298,	// (0x000798ef) smil2_text_pane_ParamLimits

0x4298,	// (0x000798ef) smil2_text_pane

0xe5a2,	// (0x00083bf9) bg_list_pane_cp06

0x4330,	// (0x00079987) grid_radio_pane

0xe5a2,	// (0x00083bf9) bg_popup_window_pane_cp06

0x433a,	// (0x00079991) main_fmradio_pane_t1

0x318c,	// (0x000787e3) heading_pane_cp04

0x4348,	// (0x0007999f) main_fmradio_pane_t2

0x564a,	// (0x0007aca1) popup_cale_lunar_info_window_g1

0x4356,	// (0x000799ad) main_fmradio_pane_t3

0x5652,	// (0x0007aca9) popup_cale_lunar_info_window_g2

0x4366,	// (0x000799bd) main_fmradio_pane_t4

0x0001,

0x4374,	// (0x000799cb) main_fmradio_pane_t5

0x0004,

0xf5da,	// (0x00084c31) popup_cale_lunar_info_window_g

0xf51b,	// (0x00084b72) main_fmradio_pane_t

0x4382,	// (0x000799d9) wait_bar_pane_cp03

0x438a,	// (0x000799e1) cell_fmradio_pane_ParamLimits

0x438a,	// (0x000799e1) cell_fmradio_pane

0x3f5e,	// (0x000795b5) cell_fmradio_pane_g1_ParamLimits

0x3f5e,	// (0x000795b5) cell_fmradio_pane_g1

0xe5a2,	// (0x00083bf9) grid_highlight_pane_cp011

0x439f,	// (0x000799f6) poc_content_pane_ParamLimits

0x439f,	// (0x000799f6) poc_content_pane

0x43b1,	// (0x00079a08) scroll_pane_cp019

0x43b9,	// (0x00079a10) popup_call_poc_act_window_ParamLimits

0x43b9,	// (0x00079a10) popup_call_poc_act_window

0x43dd,	// (0x00079a34) popup_call_poc_inact_window_ParamLimits

0x43dd,	// (0x00079a34) popup_call_poc_inact_window

0xf5b1,	// (0x00084c08) bg_popup_call_poc_act_pane_g

0x552f,	// (0x0007ab86) bg_popup_call_poc_inact_pane_g1

0x5537,	// (0x0007ab8e) bg_popup_call_poc_inact_pane_g2

0x43f6,	// (0x00079a4d) popup_call_poc_act_window_g2

0x553f,	// (0x0007ab96) bg_popup_call_poc_inact_pane_g3

0x5547,	// (0x0007ab9e) bg_popup_call_poc_inact_pane_g4

0x554f,	// (0x0007aba6) bg_popup_call_poc_inact_pane_g5

0x43fe,	// (0x00079a55) popup_call_poc_act_window_t1_ParamLimits

0x43fe,	// (0x00079a55) popup_call_poc_act_window_t1

0x4426,	// (0x00079a7d) popup_call_poc_act_window_t2_ParamLimits

0x4426,	// (0x00079a7d) popup_call_poc_act_window_t2

0x444e,	// (0x00079aa5) popup_call_poc_act_window_t3_ParamLimits

0x444e,	// (0x00079aa5) popup_call_poc_act_window_t3

0x4476,	// (0x00079acd) popup_call_poc_act_window_t4_ParamLimits

0x4476,	// (0x00079acd) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00084b7d) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00084b7d) popup_call_poc_act_window_t

0x5557,	// (0x0007abae) bg_popup_call_poc_inact_pane_g6

0x555f,	// (0x0007abb6) bg_popup_call_poc_inact_pane_g7

0x5567,	// (0x0007abbe) bg_popup_call_poc_inact_pane_g8

0x4488,	// (0x00079adf) popup_call_poc_inact_window_g2

0x556f,	// (0x0007abc6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf59e,	// (0x00084bf5) bg_popup_call_poc_inact_pane_g

0x4490,	// (0x00079ae7) popup_call_poc_inact_window_t1_ParamLimits

0x4490,	// (0x00079ae7) popup_call_poc_inact_window_t1

0x44a5,	// (0x00079afc) popup_call_poc_inact_window_t2_ParamLimits

0x44a5,	// (0x00079afc) popup_call_poc_inact_window_t2

0x44ba,	// (0x00079b11) popup_call_poc_inact_window_t3_ParamLimits

0x44ba,	// (0x00079b11) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00084b86) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00084b86) popup_call_poc_inact_window_t

0x5d23,	// (0x0007b37a) context_pane_ParamLimits

0x5d86,	// (0x0007b3dd) signal_pane_ParamLimits

0x3788,	// (0x00078ddf) main_call2_pane

0x5cb5,	// (0x0007b30c) popup_phob_thumbnail2_window_ParamLimits

0x5cb5,	// (0x0007b30c) popup_phob_thumbnail2_window

0xaf01,	// (0x00080558) aid_hotspot_pointer_arrow_pane

0xaf09,	// (0x00080560) aid_hotspot_pointer_hand_pane

0x5781,	// (0x0007add8) phob_pre_status_pane_g5

0x1ff3,	// (0x0007764a) cams_zoom_pane_ParamLimits

0x2002,	// (0x00077659) image_vga_pane_ParamLimits

0x201c,	// (0x00077673) main_camera_pane_g1_ParamLimits

0x202e,	// (0x00077685) main_camera_pane_g2_ParamLimits

0x203e,	// (0x00077695) main_camera_pane_g3_ParamLimits

0x2052,	// (0x000776a9) main_camera_pane_g4_ParamLimits

0x2066,	// (0x000776bd) main_camera_pane_g5_ParamLimits

0x207a,	// (0x000776d1) main_camera_pane_g6_ParamLimits

0x208e,	// (0x000776e5) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00084885) main_camera_pane_g_ParamLimits

0x20a2,	// (0x000776f9) main_camera_pane_t1_ParamLimits

0x20b8,	// (0x0007770f) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00084896) main_camera_pane_t_ParamLimits

0xe81d,	// (0x00083e74) bg_popup_preview_window_pane_cp01_ParamLimits

0xe81d,	// (0x00083e74) bg_popup_preview_window_pane_cp01

0x44cf,	// (0x00079b26) popup_phob_thumbnail2_window_g1_ParamLimits

0x44cf,	// (0x00079b26) popup_phob_thumbnail2_window_g1

0xe5a2,	// (0x00083bf9) call2_cli_visual_pane

0x44f6,	// (0x00079b4d) popup_call2_audio_conf_window_ParamLimits

0x44f6,	// (0x00079b4d) popup_call2_audio_conf_window

0x451e,	// (0x00079b75) popup_call2_audio_first_window_ParamLimits

0x451e,	// (0x00079b75) popup_call2_audio_first_window

0x45b4,	// (0x00079c0b) popup_call2_audio_in_window_ParamLimits

0x45b4,	// (0x00079c0b) popup_call2_audio_in_window

0x4600,	// (0x00079c57) popup_call2_audio_out_window_ParamLimits

0x4600,	// (0x00079c57) popup_call2_audio_out_window

0x4672,	// (0x00079cc9) popup_call2_audio_second_window_ParamLimits

0x4672,	// (0x00079cc9) popup_call2_audio_second_window

0x46d8,	// (0x00079d2f) popup_call2_audio_wait_window_ParamLimits

0x46d8,	// (0x00079d2f) popup_call2_audio_wait_window

0xe5a2,	// (0x00083bf9) bg_popup_call2_act_pane_cp03

0xe7ff,	// (0x00083e56) list_conf_pane_cp

0x4712,	// (0x00079d69) popup_call2_audio_conf_window_t1

0x4720,	// (0x00079d77) list_single_graphic_popup_conf2_pane_ParamLimits

0x4720,	// (0x00079d77) list_single_graphic_popup_conf2_pane

0x321f,	// (0x00078876) list_highlight_pane_cp04

0x4733,	// (0x00079d8a) list_single_graphic_popup_conf2_pane_g1

0x3230,	// (0x00078887) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00084b8d) list_single_graphic_popup_conf2_pane_g

0x473d,	// (0x00079d94) list_single_graphic_popup_conf2_pane_t1

0x474b,	// (0x00079da2) bg_popup_call2_act_pane_cp01_ParamLimits

0x474b,	// (0x00079da2) bg_popup_call2_act_pane_cp01

0x47d5,	// (0x00079e2c) call_type_pane_cp05_ParamLimits

0x47d5,	// (0x00079e2c) call_type_pane_cp05

0x4829,	// (0x00079e80) popup_call2_audio_second_window_g1_ParamLimits

0x4829,	// (0x00079e80) popup_call2_audio_second_window_g1

0x487d,	// (0x00079ed4) popup_call2_audio_second_window_g2_ParamLimits

0x487d,	// (0x00079ed4) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00084b92) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00084b92) popup_call2_audio_second_window_g

0x48e2,	// (0x00079f39) popup_call2_audio_second_window_t1_ParamLimits

0x48e2,	// (0x00079f39) popup_call2_audio_second_window_t1

0x499d,	// (0x00079ff4) popup_call2_audio_second_window_t2_ParamLimits

0x499d,	// (0x00079ff4) popup_call2_audio_second_window_t2

0x49f0,	// (0x0007a047) popup_call2_audio_second_window_t3_ParamLimits

0x49f0,	// (0x0007a047) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00084b99) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00084b99) popup_call2_audio_second_window_t

0xe5a2,	// (0x00083bf9) bg_popup_call2_in_pane_cp02

0xe5ac,	// (0x00083c03) call_type_pane_cp04

0xe5b4,	// (0x00083c0b) popup_call2_audio_wait_window_g1

0xe5bc,	// (0x00083c13) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00084772) popup_call2_audio_wait_window_g

0xe5c4,	// (0x00083c1b) popup_call2_audio_wait_window_t3

0x4ae3,	// (0x0007a13a) bg_popup_call2_act_pane_ParamLimits

0x4ae3,	// (0x0007a13a) bg_popup_call2_act_pane

0x4ba3,	// (0x0007a1fa) call_type_pane_cp03_ParamLimits

0x4ba3,	// (0x0007a1fa) call_type_pane_cp03

0x4c07,	// (0x0007a25e) popup_call2_audio_first_window_g1_ParamLimits

0x4c07,	// (0x0007a25e) popup_call2_audio_first_window_g1

0x4c77,	// (0x0007a2ce) popup_call2_audio_first_window_g2_ParamLimits

0x4c77,	// (0x0007a2ce) popup_call2_audio_first_window_g2

0x3a8e,	// (0x000790e5) popup_call2_audio_first_window_g3_ParamLimits

0x3a8e,	// (0x000790e5) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00084ba2) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00084ba2) popup_call2_audio_first_window_g

0x4d55,	// (0x0007a3ac) popup_call2_audio_first_window_t1_ParamLimits

0x4d55,	// (0x0007a3ac) popup_call2_audio_first_window_t1

0x4e58,	// (0x0007a4af) popup_call2_audio_first_window_t4_ParamLimits

0x4e58,	// (0x0007a4af) popup_call2_audio_first_window_t4

0x4f3b,	// (0x0007a592) popup_call2_audio_first_window_t5_ParamLimits

0x4f3b,	// (0x0007a592) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00084bad) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00084bad) popup_call2_audio_first_window_t

0xe815,	// (0x00083e6c) bg_popup_call2_act_pane_g1

0x565c,	// (0x0007acb3) popup_cale_lunar_info_window_t1

0x566a,	// (0x0007acc1) popup_cale_lunar_info_window_t2

0x5678,	// (0x0007accf) popup_cale_lunar_info_window_t3

0xe5a2,	// (0x00083bf9) bg_popup_call2_bubble_pane

0x503c,	// (0x0007a693) bg_popup_call2_in_pane_cp01_ParamLimits

0x503c,	// (0x0007a693) bg_popup_call2_in_pane_cp01

0xe27e,	// (0x000838d5) call_type_pane_cp02

0x5084,	// (0x0007a6db) popup_call2_audio_out_window_g1_ParamLimits

0x5084,	// (0x0007a6db) popup_call2_audio_out_window_g1

0x50b0,	// (0x0007a707) popup_call2_audio_out_window_g2_ParamLimits

0x50b0,	// (0x0007a707) popup_call2_audio_out_window_g2

0x50d8,	// (0x0007a72f) popup_call2_audio_out_window_g3_ParamLimits

0x50d8,	// (0x0007a72f) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00084bb6) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00084bb6) popup_call2_audio_out_window_g

0x5113,	// (0x0007a76a) popup_call2_audio_out_window_t1_ParamLimits

0x5113,	// (0x0007a76a) popup_call2_audio_out_window_t1

0x5172,	// (0x0007a7c9) popup_call2_audio_out_window_t2_ParamLimits

0x5172,	// (0x0007a7c9) popup_call2_audio_out_window_t2

0x51c6,	// (0x0007a81d) popup_call2_audio_out_window_t3_ParamLimits

0x51c6,	// (0x0007a81d) popup_call2_audio_out_window_t3

0x51dc,	// (0x0007a833) popup_call2_audio_out_window_t4_ParamLimits

0x51dc,	// (0x0007a833) popup_call2_audio_out_window_t4

0x51f2,	// (0x0007a849) popup_call2_audio_out_window_t5_ParamLimits

0x51f2,	// (0x0007a849) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00084bbf) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00084bbf) popup_call2_audio_out_window_t

0x5256,	// (0x0007a8ad) bg_popup_call2_in_pane_ParamLimits

0x5256,	// (0x0007a8ad) bg_popup_call2_in_pane

0x52b2,	// (0x0007a909) popup_call2_audio_in_window_g1_ParamLimits

0x52b2,	// (0x0007a909) popup_call2_audio_in_window_g1

0x52ea,	// (0x0007a941) popup_call2_audio_in_window_g2_ParamLimits

0x52ea,	// (0x0007a941) popup_call2_audio_in_window_g2

0x5322,	// (0x0007a979) popup_call2_audio_in_window_g3_ParamLimits

0x5322,	// (0x0007a979) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00084bcc) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00084bcc) popup_call2_audio_in_window_g

0x537a,	// (0x0007a9d1) popup_call2_audio_in_window_t1_ParamLimits

0x537a,	// (0x0007a9d1) popup_call2_audio_in_window_t1

0x53fa,	// (0x0007aa51) popup_call2_audio_in_window_t2_ParamLimits

0x53fa,	// (0x0007aa51) popup_call2_audio_in_window_t2

0x547a,	// (0x0007aad1) popup_call2_audio_in_window_t3_ParamLimits

0x547a,	// (0x0007aad1) popup_call2_audio_in_window_t3

0x5494,	// (0x0007aaeb) popup_call2_audio_in_window_t4_ParamLimits

0x5494,	// (0x0007aaeb) popup_call2_audio_in_window_t4

0x54a6,	// (0x0007aafd) popup_call2_audio_in_window_t5_ParamLimits

0x54a6,	// (0x0007aafd) popup_call2_audio_in_window_t5

0x54bb,	// (0x0007ab12) popup_call2_audio_in_window_t6_ParamLimits

0x54bb,	// (0x0007ab12) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00084bd5) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00084bd5) popup_call2_audio_in_window_t

0xe815,	// (0x00083e6c) bg_popup_call2_in_pane_g1

0x5686,	// (0x0007acdd) popup_cale_lunar_info_window_t4

0x0003,

0xf5df,	// (0x00084c36) popup_cale_lunar_info_window_t

0xe81d,	// (0x00083e74) bg_popup_call2_rect_pane_ParamLimits

0xe81d,	// (0x00083e74) bg_popup_call2_rect_pane

0xe5a2,	// (0x00083bf9) call2_cli_visual_graphic_pane

0xe5a2,	// (0x00083bf9) call2_cli_visual_text_pane

0xaf43,	// (0x0008059a) smil_status_volume_pane_g3

0x0002,

0xe93d,	// (0x00083f94) call2_cli_visual_graphic_pane_g1

0xe93d,	// (0x00083f94) call2_cli_visual_graphic_pane_g2

0xe93d,	// (0x00083f94) call2_cli_visual_graphic_pane_g3

0x0002,

0x00fc,	// (0x00075753) call2_cli_visual_graphic_pane_g

0x54ef,	// (0x0007ab46) bg_popup_call2_rect_pane_g1

0xe9db,	// (0x00084032) bg_popup_call2_rect_pane_g2

0x54f7,	// (0x0007ab4e) bg_popup_call2_rect_pane_g3

0x54ff,	// (0x0007ab56) bg_popup_call2_rect_pane_g4

0x5507,	// (0x0007ab5e) bg_popup_call2_rect_pane_g5

0x550f,	// (0x0007ab66) bg_popup_call2_rect_pane_g6

0x5517,	// (0x0007ab6e) bg_popup_call2_rect_pane_g7

0x551f,	// (0x0007ab76) bg_popup_call2_rect_pane_g8

0x5527,	// (0x0007ab7e) bg_popup_call2_rect_pane_g9

0x0008,

0xf58b,	// (0x00084be2) bg_popup_call2_rect_pane_g

0x552f,	// (0x0007ab86) bg_popup_call2_bubble_pane_g1

0x5537,	// (0x0007ab8e) bg_popup_call2_bubble_pane_g2

0x553f,	// (0x0007ab96) bg_popup_call2_bubble_pane_g3

0x5547,	// (0x0007ab9e) bg_popup_call2_bubble_pane_g4

0x554f,	// (0x0007aba6) bg_popup_call2_bubble_pane_g5

0x5557,	// (0x0007abae) bg_popup_call2_bubble_pane_g6

0x555f,	// (0x0007abb6) bg_popup_call2_bubble_pane_g7

0x5567,	// (0x0007abbe) bg_popup_call2_bubble_pane_g8

0x556f,	// (0x0007abc6) bg_popup_call2_bubble_pane_g9

0x0008,

0xf59e,	// (0x00084bf5) bg_popup_call2_bubble_pane_g

0x1bfc,	// (0x00077253) aid_cale_week_size_cell_pane

0x20d2,	// (0x00077729) aid_cams_cif_uncrop_pane_ParamLimits

0x20d2,	// (0x00077729) aid_cams_cif_uncrop_pane

0x228b,	// (0x000778e2) aid_cams_size_cell_ParamLimits

0x228b,	// (0x000778e2) aid_cams_size_cell

0x229f,	// (0x000778f6) grid_cams_pane_ParamLimits

0x22b9,	// (0x00077910) linegrid_cams_pane_ParamLimits

0x239c,	// (0x000779f3) call_video_pane_t1

0x23b6,	// (0x00077a0d) call_video_pane_t2

0x0001,

0xf292,	// (0x000848e9) call_video_pane_t

0x2801,	// (0x00077e58) aid_cale_month_size_cell_pane_ParamLimits

0x2801,	// (0x00077e58) aid_cale_month_size_cell_pane

0xf628,	// (0x00084c7f) smil_status_volume_pane_g

0xaf50,	// (0x000805a7) volume_smil_pane_ParamLimits

0xaa92,	// (0x000800e9) aid_popup2_width_pane

0x1b7b,	// (0x000771d2) cell_qdial_pane_g4_ParamLimits

0x1b7b,	// (0x000771d2) cell_qdial_pane_g4

0x3514,	// (0x00078b6b) aid_blid_cardinal_pane_ParamLimits

0x3524,	// (0x00078b7b) aid_blid_destination_pane_ParamLimits

0x3524,	// (0x00078b7b) aid_blid_destination_pane

0xe81d,	// (0x00083e74) bg_popup_call_poc_act_pane_ParamLimits

0xe81d,	// (0x00083e74) bg_popup_call_poc_act_pane

0xe81d,	// (0x00083e74) bg_popup_call_poc_inact_pane_ParamLimits

0xe81d,	// (0x00083e74) bg_popup_call_poc_inact_pane

0x557f,	// (0x0007abd6) bg_popup_call_poc_act_pane_g1

0x5587,	// (0x0007abde) bg_popup_call_poc_act_pane_g2

0x558f,	// (0x0007abe6) bg_popup_call_poc_act_pane_g3

0x5547,	// (0x0007ab9e) bg_popup_call_poc_act_pane_g4

0x554f,	// (0x0007aba6) bg_popup_call_poc_act_pane_g5

0x5597,	// (0x0007abee) bg_popup_call_poc_act_pane_g6

0x555f,	// (0x0007abb6) bg_popup_call_poc_act_pane_g7

0x559f,	// (0x0007abf6) bg_popup_call_poc_act_pane_g8

0xe5a2,	// (0x00083bf9) main_usb_pane

0x5aa4,	// (0x0007b0fb) popup_cale_lunar_info_window

0x2681,	// (0x00077cd8) im_reading_pane_t1_ParamLimits

0xeb9a,	// (0x000841f1) list_im_pane_ParamLimits

0xebab,	// (0x00084202) scroll_pane_cp07_ParamLimits

0xe5a2,	// (0x00083bf9) grid_highlight_pane_cp012

0xe81d,	// (0x00083e74) mup_scale_pane_ParamLimits

0x3f5e,	// (0x000795b5) main_usb_pane_g1_ParamLimits

0x3f5e,	// (0x000795b5) main_usb_pane_g1

0x55bf,	// (0x0007ac16) main_usb_pane_g2_ParamLimits

0x55bf,	// (0x0007ac16) main_usb_pane_g2

0x0001,

0xf5c8,	// (0x00084c1f) main_usb_pane_g_ParamLimits

0xf5c8,	// (0x00084c1f) main_usb_pane_g

0x55d5,	// (0x0007ac2c) main_usb_pane_t1_ParamLimits

0x55d5,	// (0x0007ac2c) main_usb_pane_t1

0x55e7,	// (0x0007ac3e) main_usb_pane_t2_ParamLimits

0x55e7,	// (0x0007ac3e) main_usb_pane_t2

0x55f9,	// (0x0007ac50) main_usb_pane_t3_ParamLimits

0x55f9,	// (0x0007ac50) main_usb_pane_t3

0x560b,	// (0x0007ac62) main_usb_pane_t4_ParamLimits

0x560b,	// (0x0007ac62) main_usb_pane_t4

0x5620,	// (0x0007ac77) main_usb_pane_t5_ParamLimits

0x5620,	// (0x0007ac77) main_usb_pane_t5

0x5635,	// (0x0007ac8c) main_usb_pane_t6_ParamLimits

0x5635,	// (0x0007ac8c) main_usb_pane_t6

0x0005,

0xf5cd,	// (0x00084c24) main_usb_pane_t_ParamLimits

0x34b3,	// (0x00078b0a) aid_text_placing

0x34be,	// (0x00078b15) main_location2_pane_t1_ParamLimits

0x34d4,	// (0x00078b2b) main_location2_pane_t2_ParamLimits

0x34ea,	// (0x00078b41) main_location2_pane_t3_ParamLimits

0x3500,	// (0x00078b57) main_location2_pane_t4_ParamLimits

0x3500,	// (0x00078b57) main_location2_pane_t4

0xf3f3,	// (0x00084a4a) main_location2_pane_t_ParamLimits

0xe859,	// (0x00083eb0) find_pinb_pane_g2_ParamLimits

0xe859,	// (0x00083eb0) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00084798) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00084798) find_pinb_pane_g

0xe865,	// (0x00083ebc) find_pinb_pane_t1_ParamLimits

0xe877,	// (0x00083ece) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0008479d) find_pinb_pane_t_ParamLimits

0xe5a2,	// (0x00083bf9) main_call3_pane

0x2b75,	// (0x000781cc) cale_month_day_heading_pane_t1_ParamLimits

0x2bd3,	// (0x0007822a) cale_month_day_heading_pane_t2_ParamLimits

0x2c38,	// (0x0007828f) cale_month_day_heading_pane_t3_ParamLimits

0x2c9d,	// (0x000782f4) cale_month_day_heading_pane_t4_ParamLimits

0x2d02,	// (0x00078359) cale_month_day_heading_pane_t5_ParamLimits

0x2d67,	// (0x000783be) cale_month_day_heading_pane_t6_ParamLimits

0x2dcc,	// (0x00078423) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00084921) cale_month_day_heading_pane_t_ParamLimits

0xedeb,	// (0x00084442) smil_status_volume_pane

0x3f32,	// (0x00079589) postcard_address_pane_ParamLimits

0x3f32,	// (0x00079589) postcard_address_pane

0x3f48,	// (0x0007959f) postcard_message_pane_ParamLimits

0x3f48,	// (0x0007959f) postcard_message_pane

0x54d0,	// (0x0007ab27) call2_cli_visual_pane_t1_ParamLimits

0x54d0,	// (0x0007ab27) call2_cli_visual_pane_t1

0x6046,	// (0x0007b69d) postcard_message_pane_t1_ParamLimits

0x6046,	// (0x0007b69d) postcard_message_pane_t1

0x602f,	// (0x0007b686) postcard_address_pane_t1_ParamLimits

0x602f,	// (0x0007b686) postcard_address_pane_t1

0x601b,	// (0x0007b672) popup_call3_audio_in_window_ParamLimits

0x601b,	// (0x0007b672) popup_call3_audio_in_window

0x5ea0,	// (0x0007b4f7) bg_popup_call3_in_pane_ParamLimits

0x5ea0,	// (0x0007b4f7) bg_popup_call3_in_pane

0x5f1c,	// (0x0007b573) popup_call3_audio_in_window_g1_ParamLimits

0x5f1c,	// (0x0007b573) popup_call3_audio_in_window_g1

0x5f3c,	// (0x0007b593) popup_call3_audio_in_window_g2_ParamLimits

0x5f3c,	// (0x0007b593) popup_call3_audio_in_window_g2

0x5f5c,	// (0x0007b5b3) popup_call3_audio_in_window_g3_ParamLimits

0x5f5c,	// (0x0007b5b3) popup_call3_audio_in_window_g3

0x0003,

0xf62f,	// (0x00084c86) popup_call3_audio_in_window_g_ParamLimits

0xf62f,	// (0x00084c86) popup_call3_audio_in_window_g

0x5f8d,	// (0x0007b5e4) popup_call3_audio_in_window_t1_ParamLimits

0x5f8d,	// (0x0007b5e4) popup_call3_audio_in_window_t1

0x5fcb,	// (0x0007b622) popup_call3_audio_in_window_t2_ParamLimits

0x5fcb,	// (0x0007b622) popup_call3_audio_in_window_t2

0x6009,	// (0x0007b660) popup_call3_audio_in_window_t3_ParamLimits

0x6009,	// (0x0007b660) popup_call3_audio_in_window_t3

0x0002,

0xf638,	// (0x00084c8f) popup_call3_audio_in_window_t_ParamLimits

0xf638,	// (0x00084c8f) popup_call3_audio_in_window_t

0x3788,	// (0x00078ddf) bg_popup_call3_rect_pane

0x54ef,	// (0x0007ab46) bg_popup_call3_rect_pane_g1

0xe9db,	// (0x00084032) bg_popup_call3_rect_pane_g2

0x54f7,	// (0x0007ab4e) bg_popup_call3_rect_pane_g3

0x54ff,	// (0x0007ab56) bg_popup_call3_rect_pane_g4

0x5507,	// (0x0007ab5e) bg_popup_call3_rect_pane_g5

0x550f,	// (0x0007ab66) bg_popup_call3_rect_pane_g6

0x5517,	// (0x0007ab6e) bg_popup_call3_rect_pane_g7

0x3a86,	// (0x000790dd) mup_visualizer_osc_pane

0x3a9c,	// (0x000790f3) mup_visualizer_spec_pane

0x5ed0,	// (0x0007b527) call3_video_qcif_pane_ParamLimits

0x5ed0,	// (0x0007b527) call3_video_qcif_pane

0x5ee3,	// (0x0007b53a) call3_video_qcif_uncrop_pane_ParamLimits

0x5ee3,	// (0x0007b53a) call3_video_qcif_uncrop_pane

0x5ef3,	// (0x0007b54a) call3_video_subqcif_pane_ParamLimits

0x5ef3,	// (0x0007b54a) call3_video_subqcif_pane

0x5f09,	// (0x0007b560) call3_video_subqcif_uncrop_pane_ParamLimits

0x5f09,	// (0x0007b560) call3_video_subqcif_uncrop_pane

0x5f7c,	// (0x0007b5d3) popup_call3_audio_in_window_g4_ParamLimits

0x5f7c,	// (0x0007b5d3) popup_call3_audio_in_window_g4

0x5e61,	// (0x0007b4b8) mup_spec_half_pane

0x5e6a,	// (0x0007b4c1) mup_spec_half_pane_cp

0x5e4f,	// (0x0007b4a6) mup_osc_middle_pane

0x5e58,	// (0x0007b4af) mup_visualizer_osc_pane_g1

0x5e2f,	// (0x0007b486) mup_spec_bar_pane_ParamLimits

0x5e2f,	// (0x0007b486) mup_spec_bar_pane

0x5e1c,	// (0x0007b473) mup_spec_bar_pane_g1

0x5e26,	// (0x0007b47d) mup_spec_bar_pane_g2

0x0001,

0xf623,	// (0x00084c7a) mup_spec_bar_pane_g

0x1bfc,	// (0x00077253) aid_cale_week_size_cell_pane_ParamLimits

0x1c0f,	// (0x00077266) bg_cale_heading_pane_ParamLimits

0xea0f,	// (0x00084066) bg_cale_pane_cp01_ParamLimits

0x1c2b,	// (0x00077282) cale_week_corner_pane_ParamLimits

0x1c41,	// (0x00077298) cale_week_day_heading_pane_ParamLimits

0x1c5d,	// (0x000772b4) cale_week_scroll_pane_g1_ParamLimits

0x1c76,	// (0x000772cd) cale_week_scroll_pane_g2_ParamLimits

0x1c87,	// (0x000772de) cale_week_scroll_pane_g3_ParamLimits

0x1c98,	// (0x000772ef) cale_week_scroll_pane_g4_ParamLimits

0x1ca9,	// (0x00077300) cale_week_scroll_pane_g5_ParamLimits

0x1cba,	// (0x00077311) cale_week_scroll_pane_g6_ParamLimits

0x1ccb,	// (0x00077322) cale_week_scroll_pane_g7_ParamLimits

0x1cdc,	// (0x00077333) cale_week_scroll_pane_g8_ParamLimits

0x1ced,	// (0x00077344) cale_week_scroll_pane_g9_ParamLimits

0x1cfe,	// (0x00077355) cale_week_scroll_pane_g10_ParamLimits

0x1d0f,	// (0x00077366) cale_week_scroll_pane_g11_ParamLimits

0x1d20,	// (0x00077377) cale_week_scroll_pane_g12_ParamLimits

0x1d31,	// (0x00077388) cale_week_scroll_pane_g13_ParamLimits

0x1d4a,	// (0x000773a1) cale_week_scroll_pane_g14_ParamLimits

0x1d63,	// (0x000773ba) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00084829) cale_week_scroll_pane_g_ParamLimits

0x1d7c,	// (0x000773d3) cale_week_time_pane_ParamLimits

0x1d8d,	// (0x000773e4) grid_cale_week_pane_ParamLimits

0xea28,	// (0x0008407f) listscroll_cale_week_pane_t1

0x1da8,	// (0x000773ff) scroll_pane_cp08_ParamLimits

0x2852,	// (0x00077ea9) cale_month_corner_pane_ParamLimits

0xedc1,	// (0x00084418) cale_month_pane_t1

0x2b36,	// (0x0007818d) cale_month_week_pane_ParamLimits

0x3154,	// (0x000787ab) popup_call_status_window_g1_ParamLimits

0x3168,	// (0x000787bf) popup_call_status_window_g2_ParamLimits

0x317c,	// (0x000787d3) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x000849d1) popup_call_status_window_g_ParamLimits

0xf0dc,	// (0x00084733) aid_call2_pane

0x0bd8,	// (0x0007622f) msg_header_pane_g1

0x3f32,	// (0x00079589) postcard_address2_pane_ParamLimits

0x3f32,	// (0x00079589) postcard_address2_pane

0x3f48,	// (0x0007959f) postcard_message2_pane_ParamLimits

0x3f48,	// (0x0007959f) postcard_message2_pane

0x5d94,	// (0x0007b3eb) message2_row_pane_ParamLimits

0x5d94,	// (0x0007b3eb) message2_row_pane

0x5db7,	// (0x0007b40e) address2_row_pane_ParamLimits

0x5db7,	// (0x0007b40e) address2_row_pane

0x5dca,	// (0x0007b421) postcard_message2_row_pane_g1

0x5dd2,	// (0x0007b429) postcard_message2_row_pane_t1

0x5dca,	// (0x0007b421) address2_row_pane_g1

0x5dd2,	// (0x0007b429) address2_row_pane_t1

0x1fb6,	// (0x0007760d) aid_size_cell_vorec

0xe5a2,	// (0x00083bf9) main_rss_pane

0x5de0,	// (0x0007b437) rss_list_single_pane_ParamLimits

0x5de0,	// (0x0007b437) rss_list_single_pane

0x5e00,	// (0x0007b457) rss_list_single_pane_t1

0x5e0e,	// (0x0007b465) rss_list_single_pane_t2

0x0001,

0xf61e,	// (0x00084c75) rss_list_single_pane_t

0xe5a2,	// (0x00083bf9) main_camera2_pane

0xe5a2,	// (0x00083bf9) main_video2_pane

0x60b5,	// (0x0007b70c) cams_zoom_pane_cp2_ParamLimits

0x60b5,	// (0x0007b70c) cams_zoom_pane_cp2

0x60cc,	// (0x0007b723) image2_vga_pane_ParamLimits

0x60cc,	// (0x0007b723) image2_vga_pane

0x6114,	// (0x0007b76b) main_camera2_pane_g1_ParamLimits

0x6114,	// (0x0007b76b) main_camera2_pane_g1

0x6134,	// (0x0007b78b) main_camera2_pane_g2_ParamLimits

0x6134,	// (0x0007b78b) main_camera2_pane_g2

0x614b,	// (0x0007b7a2) main_camera2_pane_g3_ParamLimits

0x614b,	// (0x0007b7a2) main_camera2_pane_g3

0x6162,	// (0x0007b7b9) main_camera2_pane_g4_ParamLimits

0x6162,	// (0x0007b7b9) main_camera2_pane_g4

0x6179,	// (0x0007b7d0) main_camera2_pane_g5_ParamLimits

0x6179,	// (0x0007b7d0) main_camera2_pane_g5

0x6190,	// (0x0007b7e7) main_camera2_pane_g6_ParamLimits

0x6190,	// (0x0007b7e7) main_camera2_pane_g6

0x61a7,	// (0x0007b7fe) main_camera2_pane_g7_ParamLimits

0x61a7,	// (0x0007b7fe) main_camera2_pane_g7

0x61be,	// (0x0007b815) main_camera2_pane_g8_ParamLimits

0x61be,	// (0x0007b815) main_camera2_pane_g8

0x0008,

0xf63f,	// (0x00084c96) main_camera2_pane_g_ParamLimits

0xf63f,	// (0x00084c96) main_camera2_pane_g

0x61ec,	// (0x0007b843) main_camera2_pane_t1_ParamLimits

0x61ec,	// (0x0007b843) main_camera2_pane_t1

0x6221,	// (0x0007b878) main_camera2_pane_t2_ParamLimits

0x6221,	// (0x0007b878) main_camera2_pane_t2

0x623e,	// (0x0007b895) main_camera2_pane_t3_ParamLimits

0x623e,	// (0x0007b895) main_camera2_pane_t3

0x629c,	// (0x0007b8f3) main_camera2_pane_t4_ParamLimits

0x629c,	// (0x0007b8f3) main_camera2_pane_t4

0x0006,

0xf652,	// (0x00084ca9) main_camera2_pane_t_ParamLimits

0xf652,	// (0x00084ca9) main_camera2_pane_t

0x6325,	// (0x0007b97c) cams_zoom_pane_cp4_ParamLimits

0x6325,	// (0x0007b97c) cams_zoom_pane_cp4

0x633b,	// (0x0007b992) image2_cif_pane_ParamLimits

0x633b,	// (0x0007b992) image2_cif_pane

0x6366,	// (0x0007b9bd) image2_subqcif_pane_ParamLimits

0x6366,	// (0x0007b9bd) image2_subqcif_pane

0x6381,	// (0x0007b9d8) main_video2_pane_g1_ParamLimits

0x6381,	// (0x0007b9d8) main_video2_pane_g1

0x639b,	// (0x0007b9f2) main_video2_pane_g2_ParamLimits

0x639b,	// (0x0007b9f2) main_video2_pane_g2

0x63b1,	// (0x0007ba08) main_video2_pane_g3_ParamLimits

0x63b1,	// (0x0007ba08) main_video2_pane_g3

0x63c7,	// (0x0007ba1e) main_video2_pane_g4_ParamLimits

0x63c7,	// (0x0007ba1e) main_video2_pane_g4

0x63dd,	// (0x0007ba34) main_video2_pane_g5_ParamLimits

0x63dd,	// (0x0007ba34) main_video2_pane_g5

0x63f3,	// (0x0007ba4a) main_video2_pane_g6_ParamLimits

0x63f3,	// (0x0007ba4a) main_video2_pane_g6

0x0005,

0xf661,	// (0x00084cb8) main_video2_pane_g_ParamLimits

0xf661,	// (0x00084cb8) main_video2_pane_g

0x640d,	// (0x0007ba64) main_video2_pane_t1_ParamLimits

0x640d,	// (0x0007ba64) main_video2_pane_t1

0x6431,	// (0x0007ba88) main_video2_pane_t2_ParamLimits

0x6431,	// (0x0007ba88) main_video2_pane_t2

0x6481,	// (0x0007bad8) main_video2_pane_t3_ParamLimits

0x6481,	// (0x0007bad8) main_video2_pane_t3

0x0002,

0xf66e,	// (0x00084cc5) main_video2_pane_t_ParamLimits

0xf66e,	// (0x00084cc5) main_video2_pane_t

0x57e1,	// (0x0007ae38) call_muted_g2

0x0001,

0xf610,	// (0x00084c67) call_muted_g

0xe5a2,	// (0x00083bf9) main_mup2_pane

0x64c9,	// (0x0007bb20) main_mup2_pane_g1_ParamLimits

0x64c9,	// (0x0007bb20) main_mup2_pane_g1

0x64d5,	// (0x0007bb2c) main_mup2_pane_g2_ParamLimits

0x64d5,	// (0x0007bb2c) main_mup2_pane_g2

0xb06f,	// (0x000806c6) main_mup_pane_g13_cp1

0xb077,	// (0x000806ce) mup_volume_pane_cp1

0x64f3,	// (0x0007bb4a) main_mup2_pane_g4_ParamLimits

0x64f3,	// (0x0007bb4a) main_mup2_pane_g4

0x6505,	// (0x0007bb5c) main_mup2_pane_g5_ParamLimits

0x6505,	// (0x0007bb5c) main_mup2_pane_g5

0x6517,	// (0x0007bb6e) main_mup2_pane_g6_ParamLimits

0x6517,	// (0x0007bb6e) main_mup2_pane_g6

0x6529,	// (0x0007bb80) main_mup2_pane_g7_ParamLimits

0x6529,	// (0x0007bb80) main_mup2_pane_g7

0x0006,

0xf675,	// (0x00084ccc) main_mup2_pane_g_ParamLimits

0xf675,	// (0x00084ccc) main_mup2_pane_g

0x6541,	// (0x0007bb98) main_mup2_pane_t1_ParamLimits

0x6541,	// (0x0007bb98) main_mup2_pane_t1

0x6557,	// (0x0007bbae) main_mup2_pane_t2_ParamLimits

0x6557,	// (0x0007bbae) main_mup2_pane_t2

0x656d,	// (0x0007bbc4) main_mup2_pane_t3_ParamLimits

0x656d,	// (0x0007bbc4) main_mup2_pane_t3

0x6583,	// (0x0007bbda) main_mup2_pane_t4_ParamLimits

0x6583,	// (0x0007bbda) main_mup2_pane_t4

0x659b,	// (0x0007bbf2) main_mup2_pane_t5_ParamLimits

0x659b,	// (0x0007bbf2) main_mup2_pane_t5

0x65b3,	// (0x0007bc0a) main_mup2_pane_t6_ParamLimits

0x65b3,	// (0x0007bc0a) main_mup2_pane_t6

0x0005,

0xf684,	// (0x00084cdb) main_mup2_pane_t_ParamLimits

0xf684,	// (0x00084cdb) main_mup2_pane_t

0x65e3,	// (0x0007bc3a) mup2_visualizer_pane_ParamLimits

0x65e3,	// (0x0007bc3a) mup2_visualizer_pane

0x6611,	// (0x0007bc68) mup_progress_pane_cp_ParamLimits

0x6611,	// (0x0007bc68) mup_progress_pane_cp

0xb051,	// (0x000806a8) mup_volume_pane_cp_ParamLimits

0xb051,	// (0x000806a8) mup_volume_pane_cp

0x6627,	// (0x0007bc7e) mup2_visualizer_pane_g1_ParamLimits

0x6627,	// (0x0007bc7e) mup2_visualizer_pane_g1

0xaf90,	// (0x000805e7) mup2_visualizer_pane_g2_ParamLimits

0xaf90,	// (0x000805e7) mup2_visualizer_pane_g2

0x663c,	// (0x0007bc93) mup2_visualizer_pane_g3_ParamLimits

0x663c,	// (0x0007bc93) mup2_visualizer_pane_g3

0x0002,

0xf691,	// (0x00084ce8) mup2_visualizer_pane_g_ParamLimits

0xf691,	// (0x00084ce8) mup2_visualizer_pane_g

0x4328,	// (0x0007997f) aid_size_cell_fmradio

0x59c2,	// (0x0007b019) aid_height_parent_landcape

0xec29,	// (0x00084280) wml_content_pane_cp

0xec31,	// (0x00084288) wml_tabs_pane

0xec3a,	// (0x00084291) popup_wml_miniature_window

0xec42,	// (0x00084299) scroll_pane_cp021

0xec56,	// (0x000842ad) wml_content_pane_comp8

0xe5a2,	// (0x00083bf9) bg_popup_sub_pane_cp05

0xafae,	// (0x00080605) popup_wml_miniature_window_g1

0xafb6,	// (0x0008060d) wml_miniature_view_pane

0x6648,	// (0x0007bc9f) aid_size_wml_view

0x6650,	// (0x0007bca7) wml_miniature_view_pane_g1

0x6659,	// (0x0007bcb0) wml_miniature_view_pane_g2

0x6662,	// (0x0007bcb9) wml_miniature_view_pane_g3

0x666a,	// (0x0007bcc1) wml_miniature_view_pane_g4

0x6672,	// (0x0007bcc9) wml_miniature_view_pane_g5

0x667a,	// (0x0007bcd1) wml_miniature_view_pane_g6

0x6682,	// (0x0007bcd9) wml_miniature_view_pane_g7

0x668a,	// (0x0007bce1) wml_miniature_view_pane_g8

0x0007,

0xf698,	// (0x00084cef) wml_miniature_view_pane_g

0xafbe,	// (0x00080615) background_graphic_ParamLimits

0xafbe,	// (0x00080615) background_graphic

0xafca,	// (0x00080621) wml_tabs_2_pane

0xafd3,	// (0x0008062a) wml_tabs_3_pane_ParamLimits

0xafd3,	// (0x0008062a) wml_tabs_3_pane

0xafe5,	// (0x0008063c) wml_tabs_4_pane_ParamLimits

0xafe5,	// (0x0008063c) wml_tabs_4_pane

0xaffb,	// (0x00080652) wml_tabs_5_pane_ParamLimits

0xaffb,	// (0x00080652) wml_tabs_5_pane

0xb015,	// (0x0008066c) wml_tabs_pane_g2_ParamLimits

0xb015,	// (0x0008066c) wml_tabs_pane_g2

0xb029,	// (0x00080680) wml_tabs_pane_g3_ParamLimits

0xb029,	// (0x00080680) wml_tabs_pane_g3

0x6692,	// (0x0007bce9) wml_tabs_2_active_pane_ParamLimits

0x6692,	// (0x0007bce9) wml_tabs_2_active_pane

0x66a6,	// (0x0007bcfd) wml_tabs_2_passive_pane_ParamLimits

0x66a6,	// (0x0007bcfd) wml_tabs_2_passive_pane

0x66ba,	// (0x0007bd11) wml_tabs_3_active_pane_cp_ParamLimits

0x66ba,	// (0x0007bd11) wml_tabs_3_active_pane_cp

0x66cf,	// (0x0007bd26) wml_tabs_3_passive_pane_ParamLimits

0x66cf,	// (0x0007bd26) wml_tabs_3_passive_pane

0x66e2,	// (0x0007bd39) wml_tabs_3_passive_pane_cp_ParamLimits

0x66e2,	// (0x0007bd39) wml_tabs_3_passive_pane_cp

0x66f9,	// (0x0007bd50) tabs_4_active_pane

0x6701,	// (0x0007bd58) tabs_4_passive_pane

0x670b,	// (0x0007bd62) tabs_4_passive_pane_cp

0x6713,	// (0x0007bd6a) tabs_4_passive_pane_cp2

0x5577,	// (0x0007abce) aid_height_text

0x3a58,	// (0x000790af) mup_volume_cont_pane_ParamLimits

0x3a58,	// (0x000790af) mup_volume_cont_pane

0x1817,	// (0x00076e6e) aid_size_cell_pinb

0x1821,	// (0x00076e78) aid_size_list_pinb

0x65fd,	// (0x0007bc54) mup2_volume_cont_pane_ParamLimits

0x65fd,	// (0x0007bc54) mup2_volume_cont_pane

0xb03d,	// (0x00080694) mup2_volume_cont_pane_g1_ParamLimits

0xb03d,	// (0x00080694) mup2_volume_cont_pane_g1

0x14f0,	// (0x00076b47) aid_size_cell_touch_ParamLimits

0x14f0,	// (0x00076b47) aid_size_cell_touch

0x1706,	// (0x00076d5d) touch_pane_ParamLimits

0x1706,	// (0x00076d5d) touch_pane

0xaa80,	// (0x000800d7) main_rss2_pane

0xb07f,	// (0x000806d6) listscroll_rss2_pane

0xb088,	// (0x000806df) rss2_navigation_pane

0xb090,	// (0x000806e7) list_rss2_pane

0x3337,	// (0x0007898e) scroll_pane_cp22

0xb098,	// (0x000806ef) rss2_navigation_pane_g1

0xb0a1,	// (0x000806f8) rss2_navigation_pane_g2

0xb0a9,	// (0x00080700) rss2_navigation_pane_g3

0x0002,

0xf6a9,	// (0x00084d00) rss2_navigation_pane_g

0xb0b1,	// (0x00080708) rss2_navigation_pane_t1

0x671d,	// (0x0007bd74) rss2_list_single_pane_ParamLimits

0x671d,	// (0x0007bd74) rss2_list_single_pane

0xb0bf,	// (0x00080716) rss2_list_single_pane_t2

0xb0cd,	// (0x00080724) rss2_list_single_pane_t3_ParamLimits

0xb0cd,	// (0x00080724) rss2_list_single_pane_t3

0xb0ea,	// (0x00080741) rss2_list_single_pane_t4

0x2f98,	// (0x000785ef) smil_status_pane_g1

0xaaf9,	// (0x00080150) main_image2_pane_ParamLimits

0xaaf9,	// (0x00080150) main_image2_pane

0x61d5,	// (0x0007b82c) main_camera2_pane_g9_ParamLimits

0x61d5,	// (0x0007b82c) main_camera2_pane_g9

0x62f1,	// (0x0007b948) main_camera2_pane_t5_ParamLimits

0x62f1,	// (0x0007b948) main_camera2_pane_t5

0xaf65,	// (0x000805bc) main_camera2_pane_t6_ParamLimits

0xaf65,	// (0x000805bc) main_camera2_pane_t6

0x6737,	// (0x0007bd8e) main_image2_pane_g1_ParamLimits

0x6737,	// (0x0007bd8e) main_image2_pane_g1

0x42d2,	// (0x00079929) smil2_video_pane_ParamLimits

0x42d2,	// (0x00079929) smil2_video_pane

0xaaae,	// (0x00080105) aid_zoom_text_primary_cp

0xaaef,	// (0x00080146) popup_preview_fixed_window

0xeb92,	// (0x000841e9) im_reading_pane_g1

0x60a7,	// (0x0007b6fe) cams2_bc_adjust_pane_cp_ParamLimits

0x60a7,	// (0x0007b6fe) cams2_bc_adjust_pane_cp

0x6317,	// (0x0007b96e) cams2_bc_adjust_pane_ParamLimits

0x6317,	// (0x0007b96e) cams2_bc_adjust_pane

0xb0f8,	// (0x0008074f) cams2_bc_adjust_pane_g1

0xb100,	// (0x00080757) cams2_slider_pane

0xb109,	// (0x00080760) cams2_slider_pane_g1

0xb112,	// (0x00080769) cams2_slider_pane_g2

0x0006,

0xf6b0,	// (0x00084d07) cams2_slider_pane_g

0x1911,	// (0x00076f68) calc_display_pane_ParamLimits

0x1937,	// (0x00076f8e) calc_paper_pane_ParamLimits

0x195a,	// (0x00076fb1) grid_calc_pane_ParamLimits

0xaed2,	// (0x00080529) popup_clock_digital_window_t1_ParamLimits

0x414f,	// (0x000797a6) main_image_pane_t1

0x18f3,	// (0x00076f4a) aid_size_cell_calc_ParamLimits

0x18f3,	// (0x00076f4a) aid_size_cell_calc

0x5a26,	// (0x0007b07d) popup_blid_sat_info2_window_ParamLimits

0x5a26,	// (0x0007b07d) popup_blid_sat_info2_window

0xb134,	// (0x0008078b) aid_size_cell_blid

0xb13c,	// (0x00080793) bg_popup_window_pane_cp07

0xb15f,	// (0x000807b6) grid_popup_blid_pane

0xb169,	// (0x000807c0) heading_pane_cp05_ParamLimits

0xb169,	// (0x000807c0) heading_pane_cp05

0xb233,	// (0x0008088a) cell_popup_blid_pane_ParamLimits

0xb233,	// (0x0008088a) cell_popup_blid_pane

0xb25d,	// (0x000808b4) cell_popup_blid_pane_g1

0xb265,	// (0x000808bc) cell_popup_blid_pane_t1

0x65cd,	// (0x0007bc24) mup2_indicator_pane_ParamLimits

0x65cd,	// (0x0007bc24) mup2_indicator_pane

0x3788,	// (0x00078ddf) mup2_visualizer_osc_pane

0xaf9c,	// (0x000805f3) mup2_visualizer_spec_pane_ParamLimits

0xaf9c,	// (0x000805f3) mup2_visualizer_spec_pane

0x674d,	// (0x0007bda4) mup2_spec_half_pane

0x6756,	// (0x0007bdad) mup2_spec_half_pane_cp

0x675e,	// (0x0007bdb5) mup2_spec_bar_pane_ParamLimits

0x675e,	// (0x0007bdb5) mup2_spec_bar_pane

0x5e1c,	// (0x0007b473) mup2_spec_bar_pane_g1

0x5e26,	// (0x0007b47d) mup2_spec_bar_pane_g2

0x0001,

0xf623,	// (0x00084c7a) mup2_spec_bar_pane_g

0x677e,	// (0x0007bdd5) mup2_osc_middle_pane

0x5e58,	// (0x0007b4af) mup2_visualizer_osc_pane_g1

0xab27,	// (0x0008017e) popup_number_entry_window_t1_ParamLimits

0xab3a,	// (0x00080191) popup_number_entry_window_t2_ParamLimits

0xab4c,	// (0x000801a3) popup_number_entry_window_t3_ParamLimits

0x1758,	// (0x00076daf) popup_number_entry_window_t5_ParamLimits

0x1758,	// (0x00076daf) popup_number_entry_window_t5

0xf0ec,	// (0x00084743) popup_number_entry_window_t_ParamLimits

0xab5e,	// (0x000801b5) text_title_cp2_ParamLimits

0xaf11,	// (0x00080568) aid_hotspot_pointer_text2_pane

0xaf37,	// (0x0008058e) main_viewer_pane_g9_ParamLimits

0xaf37,	// (0x0008058e) main_viewer_pane_g9

0xedc1,	// (0x00084418) cale_month_pane_t1_ParamLimits

0xedfe,	// (0x00084455) bg_cale_pane_ParamLimits

0xee16,	// (0x0008446d) list_cale_pane_ParamLimits

0xea28,	// (0x0008407f) listscroll_cale_day_pane_t1

0xee27,	// (0x0008447e) scroll_pane_cp09_ParamLimits

0x3b0c,	// (0x00079163) main_mup_eq_pane_t1_ParamLimits

0x3b0c,	// (0x00079163) main_mup_eq_pane_t1

0x3b28,	// (0x0007917f) main_mup_eq_pane_t2_ParamLimits

0x3b28,	// (0x0007917f) main_mup_eq_pane_t2

0x3b44,	// (0x0007919b) main_mup_eq_pane_t3_ParamLimits

0x3b44,	// (0x0007919b) main_mup_eq_pane_t3

0x3b62,	// (0x000791b9) main_mup_eq_pane_t4_ParamLimits

0x3b62,	// (0x000791b9) main_mup_eq_pane_t4

0x3b80,	// (0x000791d7) main_mup_eq_pane_t5_ParamLimits

0x3b80,	// (0x000791d7) main_mup_eq_pane_t5

0x3b9e,	// (0x000791f5) main_mup_eq_pane_t6_ParamLimits

0x3b9e,	// (0x000791f5) main_mup_eq_pane_t6

0x3bb4,	// (0x0007920b) main_mup_eq_pane_t7_ParamLimits

0x3bb4,	// (0x0007920b) main_mup_eq_pane_t7

0x3bca,	// (0x00079221) main_mup_eq_pane_t8_ParamLimits

0x3bca,	// (0x00079221) main_mup_eq_pane_t8

0x3be0,	// (0x00079237) main_mup_eq_pane_t9_ParamLimits

0x3be0,	// (0x00079237) main_mup_eq_pane_t9

0x3bfc,	// (0x00079253) main_mup_eq_pane_t10_ParamLimits

0x3bfc,	// (0x00079253) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00084ad0) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00084ad0) main_mup_eq_pane_t

0x3cd1,	// (0x00079328) mup_equalizer_pane_cp5_ParamLimits

0x3ce9,	// (0x00079340) mup_equalizer_pane_cp6_ParamLimits

0x3d01,	// (0x00079358) mup_equalizer_pane_cp7_ParamLimits

0xaa80,	// (0x000800d7) main_gallery_pane

0x5e72,	// (0x0007b4c9) smil2_volume_pane

0x5e7a,	// (0x0007b4d1) smil_status_volume_pane_g1_ParamLimits

0x5e8d,	// (0x0007b4e4) smil_status_volume_pane_g2_ParamLimits

0xaf43,	// (0x0008059a) smil_status_volume_pane_g3_ParamLimits

0xf628,	// (0x00084c7f) smil_status_volume_pane_g_ParamLimits

0xb13c,	// (0x00080793) bg_popup_window_pane_cp07_ParamLimits

0xb14a,	// (0x000807a1) blid_firmament_pane

0x6787,	// (0x0007bdde) aid_size_cell_gallery_ParamLimits

0x6787,	// (0x0007bdde) aid_size_cell_gallery

0x679d,	// (0x0007bdf4) grid_gallery_pane_ParamLimits

0x679d,	// (0x0007bdf4) grid_gallery_pane

0x67b8,	// (0x0007be0f) cell_gallery_pane_ParamLimits

0x67b8,	// (0x0007be0f) cell_gallery_pane

0xb273,	// (0x000808ca) bg_cell_gallery_focus_pane_ParamLimits

0xb273,	// (0x000808ca) bg_cell_gallery_focus_pane

0xb285,	// (0x000808dc) cell_gallery_pane_g1_ParamLimits

0xb285,	// (0x000808dc) cell_gallery_pane_g1

0x6809,	// (0x0007be60) cell_gallery_pane_g2_ParamLimits

0x6809,	// (0x0007be60) cell_gallery_pane_g2

0x6816,	// (0x0007be6d) cell_gallery_pane_g3_ParamLimits

0x6816,	// (0x0007be6d) cell_gallery_pane_g3

0xb291,	// (0x000808e8) cell_gallery_pane_g4_ParamLimits

0xb291,	// (0x000808e8) cell_gallery_pane_g4

0x0003,

0xf6d6,	// (0x00084d2d) cell_gallery_pane_g_ParamLimits

0xf6d6,	// (0x00084d2d) cell_gallery_pane_g

0xb29d,	// (0x000808f4) bg_cell_gallery_focus_pane_g1

0xb2a5,	// (0x000808fc) bg_cell_gallery_focus_pane_g2

0xb2ad,	// (0x00080904) bg_cell_gallery_focus_pane_g3

0xb2b5,	// (0x0008090c) bg_cell_gallery_focus_pane_g4

0xb2bd,	// (0x00080914) bg_cell_gallery_focus_pane_g5

0xb2c5,	// (0x0008091c) bg_cell_gallery_focus_pane_g6

0xb2cd,	// (0x00080924) bg_cell_gallery_focus_pane_g7

0xb2d5,	// (0x0008092c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6df,	// (0x00084d36) bg_cell_gallery_focus_pane_g

0xb2dd,	// (0x00080934) aid_firma_cardinal

0xb2f1,	// (0x00080948) blid_firmament_pane_t1

0xb308,	// (0x0008095f) blid_firmament_pane_t2

0xb31f,	// (0x00080976) blid_firmament_pane_t3

0xb336,	// (0x0008098d) blid_firmament_pane_t4

0x0003,

0xf6f0,	// (0x00084d47) blid_firmament_pane_t

0xb34d,	// (0x000809a4) blid_sat_info_pane

0xb35d,	// (0x000809b4) blid_sat_info_pane_g1

0xb35d,	// (0x000809b4) blid_sat_info_pane_g2

0x0001,

0xf6f9,	// (0x00084d50) blid_sat_info_pane_g

0xb367,	// (0x000809be) blid_sat_info_pane_t1

0xb375,	// (0x000809cc) smil2_volume_content_pane

0xb37e,	// (0x000809d5) smil2_volume_pane_g1

0xb386,	// (0x000809dd) smil2_volume_content_pane_g1

0xb38f,	// (0x000809e6) smil2_volume_content_pane_g2

0xb398,	// (0x000809ef) smil2_volume_content_pane_g3

0xb3a1,	// (0x000809f8) smil2_volume_content_pane_g4

0xb3aa,	// (0x00080a01) smil2_volume_content_pane_g5

0xb3b3,	// (0x00080a0a) smil2_volume_content_pane_g6

0xb3bc,	// (0x00080a13) smil2_volume_content_pane_g7

0xb3c5,	// (0x00080a1c) smil2_volume_content_pane_g8

0xb3ce,	// (0x00080a25) smil2_volume_content_pane_g9

0xb3d7,	// (0x00080a2e) smil2_volume_content_pane_g10

0x0009,

0xf6fe,	// (0x00084d55) smil2_volume_content_pane_g

0x1e08,	// (0x0007745f) cale_week_day_heading_pane_t1_ParamLimits

0x1e1c,	// (0x00077473) cale_week_day_heading_pane_t2_ParamLimits

0x1e30,	// (0x00077487) cale_week_day_heading_pane_t3_ParamLimits

0x1e44,	// (0x0007749b) cale_week_day_heading_pane_t4_ParamLimits

0x1e58,	// (0x000774af) cale_week_day_heading_pane_t5_ParamLimits

0x1e6c,	// (0x000774c3) cale_week_day_heading_pane_t6_ParamLimits

0x1e80,	// (0x000774d7) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00084848) cale_week_day_heading_pane_t_ParamLimits

0xea3a,	// (0x00084091) bg_cale_side_pane_ParamLimits

0x1e94,	// (0x000774eb) cale_week_time_pane_t1_ParamLimits

0x1eac,	// (0x00077503) cale_week_time_pane_t2_ParamLimits

0x1ec4,	// (0x0007751b) cale_week_time_pane_t3_ParamLimits

0x1edc,	// (0x00077533) cale_week_time_pane_t4_ParamLimits

0x1ef4,	// (0x0007754b) cale_week_time_pane_t5_ParamLimits

0x1f0c,	// (0x00077563) cale_week_time_pane_t6_ParamLimits

0x1f24,	// (0x0007757b) cale_week_time_pane_t7_ParamLimits

0x1f40,	// (0x00077597) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00084857) cale_week_time_pane_t_ParamLimits

0x1f60,	// (0x000775b7) cell_cale_week_pane_g2_ParamLimits

0xea3a,	// (0x00084091) bg_cale_side_pane_cp01_ParamLimits

0x2e31,	// (0x00078488) cale_month_week_pane_t1_ParamLimits

0x2e48,	// (0x0007849f) cale_month_week_pane_t2_ParamLimits

0x2e5f,	// (0x000784b6) cale_month_week_pane_t3_ParamLimits

0x2e76,	// (0x000784cd) cale_month_week_pane_t4_ParamLimits

0x2e8d,	// (0x000784e4) cale_month_week_pane_t5_ParamLimits

0x2ea4,	// (0x000784fb) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00084930) cale_month_week_pane_t_ParamLimits

0xaddb,	// (0x00080432) cell_cale_month_pane_g1_ParamLimits

0xaa80,	// (0x000800d7) main_cale_event_viewer_pane

0xaa80,	// (0x000800d7) listscroll_cale_event_viewer_pane

0xb3e0,	// (0x00080a37) list_cale_ev_pane

0xb3e8,	// (0x00080a3f) scroll_pane_cp023

0x6823,	// (0x0007be7a) field_cale_ev_pane_ParamLimits

0x6823,	// (0x0007be7a) field_cale_ev_pane

0xb3f4,	// (0x00080a4b) field_cale_ev_content_pane_ParamLimits

0xb3f4,	// (0x00080a4b) field_cale_ev_content_pane

0xb400,	// (0x00080a57) field_cale_ev_pane_g1_ParamLimits

0xb400,	// (0x00080a57) field_cale_ev_pane_g1

0xb40c,	// (0x00080a63) field_cale_ev_pane_g2_ParamLimits

0xb40c,	// (0x00080a63) field_cale_ev_pane_g2

0xb424,	// (0x00080a7b) field_cale_ev_pane_g3_ParamLimits

0xb424,	// (0x00080a7b) field_cale_ev_pane_g3

0x0002,

0xf713,	// (0x00084d6a) field_cale_ev_pane_g_ParamLimits

0xf713,	// (0x00084d6a) field_cale_ev_pane_g

0xb43c,	// (0x00080a93) field_cale_ev_pane_t1_ParamLimits

0xb43c,	// (0x00080a93) field_cale_ev_pane_t1

0x6847,	// (0x0007be9e) field_cale_ev_content_pane_t1_ParamLimits

0x6847,	// (0x0007be9e) field_cale_ev_content_pane_t1

0x3db1,	// (0x00079408) bg_button_pane_cp01

0xe8e8,	// (0x00083f3f) listscroll_cale_week_pane_ParamLimits

0x1bf2,	// (0x00077249) popup_toolbar_window_cp01

0xea28,	// (0x0008407f) listscroll_cale_week_pane_t1_ParamLimits

0xe8e8,	// (0x00083f3f) listscroll_cale_day_pane_ParamLimits

0x2ff8,	// (0x0007864f) popup_toolbar_window_cp02

0xea28,	// (0x0008407f) listscroll_cale_day_pane_t1_ParamLimits

0xe8e8,	// (0x00083f3f) main_cale_month_pane_ParamLimits

0x5ce1,	// (0x0007b338) popup_toolbar_window_cp03_ParamLimits

0x5ce1,	// (0x0007b338) popup_toolbar_window_cp03

0x412d,	// (0x00079784) main_image_pane_g2_ParamLimits

0x412d,	// (0x00079784) main_image_pane_g2

0x413e,	// (0x00079795) main_image_pane_g3_ParamLimits

0x413e,	// (0x00079795) main_image_pane_g3

0x0002,

0xf50b,	// (0x00084b62) main_image_pane_g_ParamLimits

0xf50b,	// (0x00084b62) main_image_pane_g

0x414f,	// (0x000797a6) main_image_pane_t1_ParamLimits

0x4166,	// (0x000797bd) main_image_pane_t2_ParamLimits

0x4166,	// (0x000797bd) main_image_pane_t2

0x4178,	// (0x000797cf) main_image_pane_t3_ParamLimits

0x4178,	// (0x000797cf) main_image_pane_t3

0x41a0,	// (0x000797f7) main_image_pane_t4_ParamLimits

0x41a0,	// (0x000797f7) main_image_pane_t4

0x0003,

0xf512,	// (0x00084b69) main_image_pane_t_ParamLimits

0xf512,	// (0x00084b69) main_image_pane_t

0x41c0,	// (0x00079817) popup_image_details_window_cp01

0x41ca,	// (0x00079821) popup_toobar_trans_pane_cp01_ParamLimits

0x41ca,	// (0x00079821) popup_toobar_trans_pane_cp01

0x5b25,	// (0x0007b17c) popup_image_details_window_ParamLimits

0x5b25,	// (0x0007b17c) popup_image_details_window

0x5b3d,	// (0x0007b194) popup_image_focus_window

0x6061,	// (0x0007b6b8) camera2_autofocus_pane_ParamLimits

0x6061,	// (0x0007b6b8) camera2_autofocus_pane

0xaa80,	// (0x000800d7) bg_popup_sub_pane_cp06

0xb453,	// (0x00080aaa) popup_image_focus_window_g1

0xb45b,	// (0x00080ab2) popup_image_focus_window_g2

0xb463,	// (0x00080aba) popup_image_focus_window_g3

0xb46b,	// (0x00080ac2) popup_image_focus_window_g4

0x0003,

0xf71a,	// (0x00084d71) popup_image_focus_window_g

0xb473,	// (0x00080aca) popup_image_focus_window_t1

0xb481,	// (0x00080ad8) popup_image_focus_window_t2

0xb491,	// (0x00080ae8) popup_image_focus_window_t3

0x0002,

0xf723,	// (0x00084d7a) popup_image_focus_window_t

0xb49f,	// (0x00080af6) camera2_autofocus_pane_g1

0xaaf9,	// (0x00080150) bg_tb_trans_pane_cp01

0xb4ad,	// (0x00080b04) popup_image_details_window_g1

0xb4c0,	// (0x00080b17) popup_image_details_window_g2

0x0002,

0xf735,	// (0x00084d8c) popup_image_details_window_g

0xb4e9,	// (0x00080b40) popup_image_details_window_t1

0xb4fb,	// (0x00080b52) popup_image_details_window_t2

0xb514,	// (0x00080b6b) popup_image_details_window_t3

0xb528,	// (0x00080b7f) popup_image_details_window_t4

0xb543,	// (0x00080b9a) popup_image_details_window_t5

0x0004,

0xf73c,	// (0x00084d93) popup_image_details_window_t

0xe8d4,	// (0x00083f2b) bg_calc_paper_pane_ParamLimits

0xaa80,	// (0x000800d7) grid_highlight_pane_cp013

0xabeb,	// (0x00080242) list_calc_pane_ParamLimits

0xabfd,	// (0x00080254) scroll_pane_cp024

0xe8e8,	// (0x00083f3f) bg_calc_display_pane_ParamLimits

0x1a51,	// (0x000770a8) calc_display_pane_t1_ParamLimits

0x1a63,	// (0x000770ba) calc_display_pane_t2_ParamLimits

0xac05,	// (0x0008025c) calc_display_pane_t3_ParamLimits

0xf173,	// (0x000847ca) calc_display_pane_t_ParamLimits

0x1b26,	// (0x0007717d) cell_calc_pane_g2

0x0001,

0xf190,	// (0x000847e7) cell_calc_pane_g

0x1b2f,	// (0x00077186) cell_calc_pane_t1

0xe947,	// (0x00083f9e) grid_highlight_pane_cp02_ParamLimits

0xe95d,	// (0x00083fb4) toolbar_button_pane_cp01_ParamLimits

0xe95d,	// (0x00083fb4) toolbar_button_pane_cp01

0x420c,	// (0x00079863) temp_image_control_pane_ParamLimits

0x420c,	// (0x00079863) temp_image_control_pane

0xaaf9,	// (0x00080150) main_mp3_pane

0xb55d,	// (0x00080bb4) temp_image_control_pane_g1_ParamLimits

0xb55d,	// (0x00080bb4) temp_image_control_pane_g1

0xb56b,	// (0x00080bc2) temp_image_control_pane_g2_ParamLimits

0xb56b,	// (0x00080bc2) temp_image_control_pane_g2

0xb57d,	// (0x00080bd4) temp_image_control_pane_g3_ParamLimits

0xb57d,	// (0x00080bd4) temp_image_control_pane_g3

0x6898,	// (0x0007beef) temp_image_control_pane_g4_ParamLimits

0x6898,	// (0x0007beef) temp_image_control_pane_g4

0x0003,

0xf747,	// (0x00084d9e) temp_image_control_pane_g_ParamLimits

0xf747,	// (0x00084d9e) temp_image_control_pane_g

0xb55d,	// (0x00080bb4) main_mp3_pane_g1

0x68ab,	// (0x0007bf02) main_mp3_pane_g2

0x0007,

0xf750,	// (0x00084da7) main_mp3_pane_g

0xb5c0,	// (0x00080c17) main_mp3_pane_t1

0xea9f,	// (0x000840f6) main_camera_pane_g8_ParamLimits

0xea9f,	// (0x000840f6) main_camera_pane_g8

0x2231,	// (0x00077888) main_video_pane_g7_ParamLimits

0x2231,	// (0x00077888) main_video_pane_g7

0xaf7e,	// (0x000805d5) main_camera2_pane_t7_ParamLimits

0xaf7e,	// (0x000805d5) main_camera2_pane_t7

0xebe9,	// (0x00084240) scroll_pane_cp025_ParamLimits

0xebe9,	// (0x00084240) scroll_pane_cp025

0xebfd,	// (0x00084254) scroll_pane_cp026_ParamLimits

0xebfd,	// (0x00084254) scroll_pane_cp026

0xec0c,	// (0x00084263) wml_content_pane_ParamLimits

0xaa80,	// (0x000800d7) main_touch_calib_pane

0x6973,	// (0x0007bfca) main_touch_calib_pane_g1

0x697f,	// (0x0007bfd6) main_touch_calib_pane_g2

0x698b,	// (0x0007bfe2) main_touch_calib_pane_g3

0x6997,	// (0x0007bfee) main_touch_calib_pane_g4

0x0003,

0xf76e,	// (0x00084dc5) main_touch_calib_pane_g

0x69a3,	// (0x0007bffa) main_touch_calib_pane_t1

0x69bd,	// (0x0007c014) main_touch_calib_pane_t2

0x0004,

0xf777,	// (0x00084dce) main_touch_calib_pane_t

0x35ff,	// (0x00078c56) mup_progress_pane_cp02

0x361e,	// (0x00078c75) navi_pane_g1

0x36d9,	// (0x00078d30) navi_pane_mp_t3

0xaaf9,	// (0x00080150) main_mp3_pane_ParamLimits

0x5d36,	// (0x0007b38d) navi_pane_ParamLimits

0xb55d,	// (0x00080bb4) main_mp3_pane_g1_ParamLimits

0x68ab,	// (0x0007bf02) main_mp3_pane_g2_ParamLimits

0x68b7,	// (0x0007bf0e) main_mp3_pane_g3_ParamLimits

0x68b7,	// (0x0007bf0e) main_mp3_pane_g3

0x68c5,	// (0x0007bf1c) main_mp3_pane_g4_ParamLimits

0x68c5,	// (0x0007bf1c) main_mp3_pane_g4

0xb58d,	// (0x00080be4) main_mp3_pane_g5_ParamLimits

0xb58d,	// (0x00080be4) main_mp3_pane_g5

0xb59b,	// (0x00080bf2) main_mp3_pane_g6_ParamLimits

0xb59b,	// (0x00080bf2) main_mp3_pane_g6

0xb5a8,	// (0x00080bff) main_mp3_pane_g7_ParamLimits

0xb5a8,	// (0x00080bff) main_mp3_pane_g7

0xb5b4,	// (0x00080c0b) main_mp3_pane_g8_ParamLimits

0xb5b4,	// (0x00080c0b) main_mp3_pane_g8

0xf750,	// (0x00084da7) main_mp3_pane_g_ParamLimits

0x68d1,	// (0x0007bf28) main_mp3_pane_t2

0x68df,	// (0x0007bf36) main_mp3_pane_t3

0xb5ce,	// (0x00080c25) main_mp3_pane_t4

0xb5dc,	// (0x00080c33) main_mp3_pane_t5

0x0005,

0xf761,	// (0x00084db8) main_mp3_pane_t

0xb5ea,	// (0x00080c41) mup_progress_pane_cp01

0xaaae,	// (0x00080105) aid_zoom_text_secondary2

0xb3e0,	// (0x00080a37) list_cale_ev2_pane

0xb3e8,	// (0x00080a3f) scroll_pane_cp023_ParamLimits

0x6a15,	// (0x0007c06c) field_cale_ev2_pane_ParamLimits

0x6a15,	// (0x0007c06c) field_cale_ev2_pane

0xb5f2,	// (0x00080c49) field_cale_ev2_pane_g1_ParamLimits

0xb5f2,	// (0x00080c49) field_cale_ev2_pane_g1

0xb5fe,	// (0x00080c55) field_cale_ev2_pane_g2_ParamLimits

0xb5fe,	// (0x00080c55) field_cale_ev2_pane_g2

0xb616,	// (0x00080c6d) field_cale_ev2_pane_g3_ParamLimits

0xb616,	// (0x00080c6d) field_cale_ev2_pane_g3

0x0003,

0xf782,	// (0x00084dd9) field_cale_ev2_pane_g_ParamLimits

0xf782,	// (0x00084dd9) field_cale_ev2_pane_g

0xb63a,	// (0x00080c91) field_cale_ev2_pane_t1_ParamLimits

0xb63a,	// (0x00080c91) field_cale_ev2_pane_t1

0xb651,	// (0x00080ca8) field_cale_ev2_pane_t2_ParamLimits

0xb651,	// (0x00080ca8) field_cale_ev2_pane_t2

0x0001,

0xf78b,	// (0x00084de2) field_cale_ev2_pane_t_ParamLimits

0xf78b,	// (0x00084de2) field_cale_ev2_pane_t

0x3ee2,	// (0x00079539) main_postcard_pane_g5_ParamLimits

0x3ee2,	// (0x00079539) main_postcard_pane_g5

0x3ef8,	// (0x0007954f) main_postcard_pane_g6_ParamLimits

0x3ef8,	// (0x0007954f) main_postcard_pane_g6

0x1fdd,	// (0x00077634) camera2_autofocus_pane_cp_ParamLimits

0x1fdd,	// (0x00077634) camera2_autofocus_pane_cp

0xaaf9,	// (0x00080150) main_mup3_pane

0x6a59,	// (0x0007c0b0) main_mup3_pane_g1_ParamLimits

0x6a59,	// (0x0007c0b0) main_mup3_pane_g1

0x6a7b,	// (0x0007c0d2) main_mup3_pane_g2_ParamLimits

0x6a7b,	// (0x0007c0d2) main_mup3_pane_g2

0x6afe,	// (0x0007c155) main_mup3_pane_g3_ParamLimits

0x6afe,	// (0x0007c155) main_mup3_pane_g3

0x6b42,	// (0x0007c199) main_mup3_pane_g4_ParamLimits

0x6b42,	// (0x0007c199) main_mup3_pane_g4

0x6b86,	// (0x0007c1dd) main_mup3_pane_g5_ParamLimits

0x6b86,	// (0x0007c1dd) main_mup3_pane_g5

0x6bca,	// (0x0007c221) main_mup3_pane_g6_ParamLimits

0x6bca,	// (0x0007c221) main_mup3_pane_g6

0xb666,	// (0x00080cbd) main_mup3_pane_g7_ParamLimits

0xb666,	// (0x00080cbd) main_mup3_pane_g7

0x0007,

0xf79b,	// (0x00084df2) main_mup3_pane_g_ParamLimits

0xf79b,	// (0x00084df2) main_mup3_pane_g

0x6c46,	// (0x0007c29d) main_mup3_pane_t1_ParamLimits

0x6c46,	// (0x0007c29d) main_mup3_pane_t1

0x6cc0,	// (0x0007c317) main_mup3_pane_t2_ParamLimits

0x6cc0,	// (0x0007c317) main_mup3_pane_t2

0x6d9a,	// (0x0007c3f1) main_mup3_pane_t4_ParamLimits

0x6d9a,	// (0x0007c3f1) main_mup3_pane_t4

0x6df8,	// (0x0007c44f) main_mup3_pane_t5_ParamLimits

0x6df8,	// (0x0007c44f) main_mup3_pane_t5

0x6eb0,	// (0x0007c507) main_mup3_pane_t6_ParamLimits

0x6eb0,	// (0x0007c507) main_mup3_pane_t6

0x0005,

0xf7ac,	// (0x00084e03) main_mup3_pane_t_ParamLimits

0xf7ac,	// (0x00084e03) main_mup3_pane_t

0x6f66,	// (0x0007c5bd) mup3_progress_pane_ParamLimits

0x6f66,	// (0x0007c5bd) mup3_progress_pane

0x6fea,	// (0x0007c641) popup_mup3_control_window_ParamLimits

0x6fea,	// (0x0007c641) popup_mup3_control_window

0xb674,	// (0x00080ccb) popup_mup3_text_window

0x7020,	// (0x0007c677) mup3_progress_pane_t1

0x7037,	// (0x0007c68e) mup3_progress_pane_t2

0xb67c,	// (0x00080cd3) mup3_progress_pane_t3

0x0002,

0xf7b9,	// (0x00084e10) mup3_progress_pane_t

0xb693,	// (0x00080cea) mup_progress_pane_cp03

0xaa80,	// (0x000800d7) bg_tb_trans_pane_cp04

0x704e,	// (0x0007c6a5) mup3_volume_pane

0x7056,	// (0x0007c6ad) popup_mup3_control_window_g1

0x705f,	// (0x0007c6b6) mup3_volume_pane_g1

0x7068,	// (0x0007c6bf) mup3_volume_pane_g2

0x7071,	// (0x0007c6c8) mup3_volume_pane_g3

0x0002,

0xf7c0,	// (0x00084e17) mup3_volume_pane_g

0xaa80,	// (0x000800d7) bg_tb_trans_pane_cp03

0xb6a3,	// (0x00080cfa) popup_mup3_text_window_g1

0xb6ab,	// (0x00080d02) popup_mup3_text_window_t1

0xe930,	// (0x00083f87) list_calc_item_pane_g1_ParamLimits

0xb066,	// (0x000806bd) mup_volume_pane_cp_g1

0x69d7,	// (0x0007c02e) main_touch_calib_pane_t3

0x69eb,	// (0x0007c042) main_touch_calib_pane_t4

0x69ff,	// (0x0007c056) main_touch_calib_pane_t5

0xaa8a,	// (0x000800e1) aid_cell_size_toolbar2

0xaa92,	// (0x000800e9) aid_popup3_width_pane

0xaa9e,	// (0x000800f5) aid_zoom_text_msg_primary

0xacdd,	// (0x00080334) vorec_t7

0xe8f4,	// (0x00083f4b) bg_calc_paper_pane_g1_ParamLimits

0xe900,	// (0x00083f57) bg_calc_paper_pane_g2_ParamLimits

0xe90c,	// (0x00083f63) bg_calc_paper_pane_g3_ParamLimits

0xe918,	// (0x00083f6f) bg_calc_paper_pane_g4_ParamLimits

0xe924,	// (0x00083f7b) bg_calc_paper_pane_g5_ParamLimits

0x1ab0,	// (0x00077107) bg_calc_paper_pane_g6_ParamLimits

0x1ac3,	// (0x0007711a) bg_calc_paper_pane_g7_ParamLimits

0x1ad6,	// (0x0007712d) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x000847d1) bg_calc_paper_pane_g_ParamLimits

0x1ae7,	// (0x0007713e) calc_bg_paper_pane_g9_ParamLimits

0x213f,	// (0x00077796) image_qvga_pane_ParamLimits

0x213f,	// (0x00077796) image_qvga_pane

0xe81d,	// (0x00083e74) bg_popup_sub_pane_cp04_ParamLimits

0x408b,	// (0x000796e2) popup_mup_playback_window_g1_ParamLimits

0x4097,	// (0x000796ee) popup_mup_playback_window_t1_ParamLimits

0x40ac,	// (0x00079703) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00084b5d) popup_mup_playback_window_t_ParamLimits

0x64e5,	// (0x0007bb3c) main_mup2_pane_g3_ParamLimits

0x64e5,	// (0x0007bb3c) main_mup2_pane_g3

0x2435,	// (0x00077a8c) popup_toolbar_window_cp04

0x48d1,	// (0x00079f28) popup_call2_audio_second_window_g3_ParamLimits

0x48d1,	// (0x00079f28) popup_call2_audio_second_window_g3

0x4cdb,	// (0x0007a332) popup_call2_audio_first_window_g4_ParamLimits

0x4cdb,	// (0x0007a332) popup_call2_audio_first_window_g4

0x535a,	// (0x0007a9b1) popup_call2_audio_in_window_g4_ParamLimits

0x535a,	// (0x0007a9b1) popup_call2_audio_in_window_g4

0x40c1,	// (0x00079718) aid_area_sk_bg_cut_ParamLimits

0x40c1,	// (0x00079718) aid_area_sk_bg_cut

0x40df,	// (0x00079736) aid_area_sk_bg_cut_2_ParamLimits

0x40df,	// (0x00079736) aid_area_sk_bg_cut_2

0x67f9,	// (0x0007be50) aid_placing_details_win

0x6801,	// (0x0007be58) aid_placing_details_win_2

0xb49f,	// (0x00080af6) camera2_autofocus_pane_g1_ParamLimits

0x16a5,	// (0x00076cfc) popup_fixed_preview_cale_window_ParamLimits

0x16a5,	// (0x00076cfc) popup_fixed_preview_cale_window

0x3799,	// (0x00078df0) navi_slider_pane_g3

0x37a2,	// (0x00078df9) navi_slider_pane_g4

0x37ab,	// (0x00078e02) navi_slider_pane_g5

0x3799,	// (0x00078df0) navi_slider_pane_g6

0xaef8,	// (0x0008054f) navi_slider_pane_g7

0x3d22,	// (0x00079379) mup_scale_pane_g3

0x3d2b,	// (0x00079382) mup_scale_pane_g4

0x3d34,	// (0x0007938b) mup_scale_pane_g5

0x3d3d,	// (0x00079394) mup_scale_pane_g6

0x3d46,	// (0x0007939d) mup_scale_pane_g7

0x3799,	// (0x00078df0) cams2_slider_pane_g3

0xb11b,	// (0x00080772) cams2_slider_pane_g4

0xb123,	// (0x0008077a) cams2_slider_pane_g5

0x3799,	// (0x00078df0) cams2_slider_pane_g6

0xb12b,	// (0x00080782) cams2_slider_pane_g7

0xb35d,	// (0x000809b4) camera2_autofocus_pane_cp_g1

0xb6b9,	// (0x00080d10) bg_popup_preview_window_pane_cp02_ParamLimits

0xb6b9,	// (0x00080d10) bg_popup_preview_window_pane_cp02

0xb6c5,	// (0x00080d1c) list_fp_cale_pane_ParamLimits

0xb6c5,	// (0x00080d1c) list_fp_cale_pane

0xb6d1,	// (0x00080d28) popup_fixed_preview_cale_window_t1_ParamLimits

0xb6d1,	// (0x00080d28) popup_fixed_preview_cale_window_t1

0x707a,	// (0x0007c6d1) popup_fixed_preview_cale_window_t2_ParamLimits

0x707a,	// (0x0007c6d1) popup_fixed_preview_cale_window_t2

0x708f,	// (0x0007c6e6) popup_fixed_preview_cale_window_t3_ParamLimits

0x708f,	// (0x0007c6e6) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c7,	// (0x00084e1e) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c7,	// (0x00084e1e) popup_fixed_preview_cale_window_t

0xb6ef,	// (0x00080d46) list_single_fp_cale_pane_ParamLimits

0xb6ef,	// (0x00080d46) list_single_fp_cale_pane

0xb707,	// (0x00080d5e) list_single_fp_cale_pane_g1_ParamLimits

0xb707,	// (0x00080d5e) list_single_fp_cale_pane_g1

0xb713,	// (0x00080d6a) list_single_fp_cale_pane_g2_ParamLimits

0xb713,	// (0x00080d6a) list_single_fp_cale_pane_g2

0x0002,

0xf7ce,	// (0x00084e25) list_single_fp_cale_pane_g_ParamLimits

0xf7ce,	// (0x00084e25) list_single_fp_cale_pane_g

0xb72c,	// (0x00080d83) list_single_fp_cale_pane_t1_ParamLimits

0xb72c,	// (0x00080d83) list_single_fp_cale_pane_t1

0xb73e,	// (0x00080d95) list_single_fp_cale_pane_t2_ParamLimits

0xb73e,	// (0x00080d95) list_single_fp_cale_pane_t2

0x0001,

0xf7d5,	// (0x00084e2c) list_single_fp_cale_pane_t_ParamLimits

0xf7d5,	// (0x00084e2c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xaa80,	// (0x000800d7) main_dialer_pane

0x70a6,	// (0x0007c6fd) aid_cell_size_keypad

0x70b0,	// (0x0007c707) dialer_ne_pane

0x70ba,	// (0x0007c711) grid_dialer_command_1_pane

0x70c2,	// (0x0007c719) grid_dialer_command_2_pane

0x70ca,	// (0x0007c721) grid_dialer_keypad_pane

0x70de,	// (0x0007c735) bg_popup_call_pane_cp06_ParamLimits

0x70de,	// (0x0007c735) bg_popup_call_pane_cp06

0x70ea,	// (0x0007c741) dialer_ne_clear_pane_ParamLimits

0x70ea,	// (0x0007c741) dialer_ne_clear_pane

0xb771,	// (0x00080dc8) dialer_ne_pane_g1

0xb779,	// (0x00080dd0) dialer_ne_pane_t1_ParamLimits

0xb779,	// (0x00080dd0) dialer_ne_pane_t1

0x70f6,	// (0x0007c74d) dialer_ne_pane_t2_ParamLimits

0x70f6,	// (0x0007c74d) dialer_ne_pane_t2

0x7120,	// (0x0007c777) dialer_ne_pane_t3_ParamLimits

0x7120,	// (0x0007c777) dialer_ne_pane_t3

0x0002,

0xf7da,	// (0x00084e31) dialer_ne_pane_t_ParamLimits

0xf7da,	// (0x00084e31) dialer_ne_pane_t

0x7150,	// (0x0007c7a7) dialer_ne_pane_t3_copy1_ParamLimits

0x7150,	// (0x0007c7a7) dialer_ne_pane_t3_copy1

0x717f,	// (0x0007c7d6) cell_dialer_keypad_pane_ParamLimits

0x717f,	// (0x0007c7d6) cell_dialer_keypad_pane

0x7196,	// (0x0007c7ed) cell_dialer_command_1_pane_ParamLimits

0x7196,	// (0x0007c7ed) cell_dialer_command_1_pane

0x71ac,	// (0x0007c803) cell_dialer_command_2_pane_ParamLimits

0x71ac,	// (0x0007c803) cell_dialer_command_2_pane

0xb78b,	// (0x00080de2) bg_button_pane_cp02_ParamLimits

0xb78b,	// (0x00080de2) bg_button_pane_cp02

0x71bb,	// (0x0007c812) cell_dialer_keypad_pane_g1_ParamLimits

0x71bb,	// (0x0007c812) cell_dialer_keypad_pane_g1

0xb78b,	// (0x00080de2) bg_button_pane_cp03_ParamLimits

0xb78b,	// (0x00080de2) bg_button_pane_cp03

0x71d0,	// (0x0007c827) cell_dialer_command_1_pane_g1_ParamLimits

0x71d0,	// (0x0007c827) cell_dialer_command_1_pane_g1

0xb797,	// (0x00080dee) bg_button_pane_cp04

0x71e4,	// (0x0007c83b) cell_dialer_command_2_pane_g1

0x3788,	// (0x00078ddf) bg_button_pane_cp06

0xb79f,	// (0x00080df6) dialer_ne_clear_pane_g1

0x362a,	// (0x00078c81) navi_pane_g2

0x3658,	// (0x00078caf) navi_pane_g3

0x0002,

0xf409,	// (0x00084a60) navi_pane_g

0x36e7,	// (0x00078d3e) navi_pane_mv_g2

0x370e,	// (0x00078d65) navi_pane_mv_g5

0x3716,	// (0x00078d6d) navi_pane_mv_t1

0xe8e8,	// (0x00083f3f) main_clock2_pane

0x7221,	// (0x0007c878) main_clock2_list_pane_ParamLimits

0x7221,	// (0x0007c878) main_clock2_list_pane

0x7259,	// (0x0007c8b0) main_clock2_pane_t1_ParamLimits

0x7259,	// (0x0007c8b0) main_clock2_pane_t1

0x7295,	// (0x0007c8ec) main_clock2_pane_t2_ParamLimits

0x7295,	// (0x0007c8ec) main_clock2_pane_t2

0x0004,

0xf7e1,	// (0x00084e38) main_clock2_pane_t_ParamLimits

0xf7e1,	// (0x00084e38) main_clock2_pane_t

0x7321,	// (0x0007c978) popup_clock_analogue_window_cp03_ParamLimits

0x7321,	// (0x0007c978) popup_clock_analogue_window_cp03

0x7348,	// (0x0007c99f) popup_clock_digital_window_cp02_ParamLimits

0x7348,	// (0x0007c99f) popup_clock_digital_window_cp02

0x73c1,	// (0x0007ca18) main_clock2_list_single_pane_ParamLimits

0x73c1,	// (0x0007ca18) main_clock2_list_single_pane

0x3788,	// (0x00078ddf) list_highlight_pane_cp05

0xb7a7,	// (0x00080dfe) main_clock2_list_single_pane_t1

0x2435,	// (0x00077a8c) popup_toolbar_window_cp04_ParamLimits

0x6868,	// (0x0007bebf) camera2_autofocus_pane_g2_ParamLimits

0x6868,	// (0x0007bebf) camera2_autofocus_pane_g2

0x6874,	// (0x0007becb) camera2_autofocus_pane_g3_ParamLimits

0x6874,	// (0x0007becb) camera2_autofocus_pane_g3

0x6880,	// (0x0007bed7) camera2_autofocus_pane_g4_ParamLimits

0x6880,	// (0x0007bed7) camera2_autofocus_pane_g4

0x688c,	// (0x0007bee3) camera2_autofocus_pane_g5_ParamLimits

0x688c,	// (0x0007bee3) camera2_autofocus_pane_g5

0x0004,

0xf72a,	// (0x00084d81) camera2_autofocus_pane_g_ParamLimits

0xf72a,	// (0x00084d81) camera2_autofocus_pane_g

0x6a39,	// (0x0007c090) camera2_autofocus_pane_cp_g2

0x6a41,	// (0x0007c098) camera2_autofocus_pane_cp_g3

0x6a49,	// (0x0007c0a0) camera2_autofocus_pane_cp_g4

0x6a51,	// (0x0007c0a8) camera2_autofocus_pane_cp_g5

0x0004,

0xf790,	// (0x00084de7) camera2_autofocus_pane_cp_g

0x70d6,	// (0x0007c72d) popup_dialer_spcha_window

0xaa80,	// (0x000800d7) bg_popup_sub_pane_cp07

0xb7b5,	// (0x00080e0c) list_spcha_pane

0xb7bd,	// (0x00080e14) list_single_spcha_pane_ParamLimits

0xb7bd,	// (0x00080e14) list_single_spcha_pane

0xaa80,	// (0x000800d7) list_highlight_pane_cp06

0xb7ce,	// (0x00080e25) list_single_spcha_pane_t1

0x5104,	// (0x0007a75b) popup_call2_audio_out_window_g4_ParamLimits

0x5104,	// (0x0007a75b) popup_call2_audio_out_window_g4

0xaa80,	// (0x000800d7) main_imed2_pane

0x5b47,	// (0x0007b19e) popup_imed_adjust2_window

0x5b5a,	// (0x0007b1b1) popup_imed_trans_window_ParamLimits

0x5b5a,	// (0x0007b1b1) popup_imed_trans_window

0xb195,	// (0x000807ec) popup_blid_sat_info2_window_t1

0xb1a3,	// (0x000807fa) popup_blid_sat_info2_window_t2

0x000a,

0xf6bf,	// (0x00084d16) popup_blid_sat_info2_window_t

0x7477,	// (0x0007cace) aid_size_cell_colour_35

0x7497,	// (0x0007caee) aid_size_cell_colour_112

0x74b7,	// (0x0007cb0e) aid_size_cell_effect

0x59e8,	// (0x0007b03f) bg_tb_trans_pane_cp02

0xee9a,	// (0x000844f1) heading_imed_pane

0x74d7,	// (0x0007cb2e) listscroll_imed_pane

0xb7dc,	// (0x00080e33) heading_imed_pane_g1

0xb7e4,	// (0x00080e3b) heading_imed_pane_t1

0xb7f2,	// (0x00080e49) grid_imed_colour_35_pane_ParamLimits

0xb7f2,	// (0x00080e49) grid_imed_colour_35_pane

0x74e3,	// (0x0007cb3a) grid_imed_effect_pane

0xb80e,	// (0x00080e65) list_imed_aspect_pane

0x74fa,	// (0x0007cb51) scroll_pane_cp027_ParamLimits

0x74fa,	// (0x0007cb51) scroll_pane_cp027

0x750b,	// (0x0007cb62) cell_imed_effect_pane_ParamLimits

0x750b,	// (0x0007cb62) cell_imed_effect_pane

0xb816,	// (0x00080e6d) cell_imed_colour_pane_ParamLimits

0xb816,	// (0x00080e6d) cell_imed_colour_pane

0xb860,	// (0x00080eb7) cell_imed_colour_pane_g1_ParamLimits

0xb860,	// (0x00080eb7) cell_imed_colour_pane_g1

0xb871,	// (0x00080ec8) hgihlgiht_grid_pane_cp016_ParamLimits

0xb871,	// (0x00080ec8) hgihlgiht_grid_pane_cp016

0x7530,	// (0x0007cb87) cell_imed_effect_pane_g1

0x7538,	// (0x0007cb8f) grid_highlight_pane_cp017

0xb882,	// (0x00080ed9) list_imed_single_pane_ParamLimits

0xb882,	// (0x00080ed9) list_imed_single_pane

0xaa80,	// (0x000800d7) list_highlight_pane_cp07

0xb896,	// (0x00080eed) list_imed_aspect_pane_comp1_t1

0x59e8,	// (0x0007b03f) bg_tb_trans_pane_cp05

0xb8b8,	// (0x00080f0f) popup_imed_adjust2_window_g1

0xb8df,	// (0x00080f36) popup_imed_adjust2_window_t1

0xb8f7,	// (0x00080f4e) slider_imed_adjust_pane

0xb90b,	// (0x00080f62) slider_imed_adjust_pane_g1

0xb91b,	// (0x00080f72) slider_imed_adjust_pane_g2

0xb92b,	// (0x00080f82) slider_imed_adjust_pane_g3

0xb93c,	// (0x00080f93) slider_imed_adjust_pane_g4

0x0003,

0xf7fe,	// (0x00084e55) slider_imed_adjust_pane_g

0x7541,	// (0x0007cb98) aid_size_cell_clipart2

0x754d,	// (0x0007cba4) grid_imed_clipart_pane

0xb94d,	// (0x00080fa4) scroll_pane_cp031

0x7557,	// (0x0007cbae) cell_imed_clipart_pane_ParamLimits

0x7557,	// (0x0007cbae) cell_imed_clipart_pane

0x7574,	// (0x0007cbcb) cell_imed_clipart_pane_g1

0xaa80,	// (0x000800d7) grid_highlight_pane_cp014

0x7236,	// (0x0007c88d) main_clock2_pane_g1_ParamLimits

0x7236,	// (0x0007c88d) main_clock2_pane_g1

0x7368,	// (0x0007c9bf) aid_call2_pane_cp10

0x737a,	// (0x0007c9d1) aid_call_pane_cp10

0x3538,	// (0x00078b8f) popup_clock_analogue_window_cp10_g1

0x3538,	// (0x00078b8f) popup_clock_analogue_window_cp10_g2

0x738c,	// (0x0007c9e3) popup_clock_analogue_window_cp10_g3

0x738c,	// (0x0007c9e3) popup_clock_analogue_window_cp10_g4

0x3538,	// (0x00078b8f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ec,	// (0x00084e43) popup_clock_analogue_window_cp10_g

0x73a2,	// (0x0007c9f9) popup_clock_analogue_window_cp10_t1

0x73d3,	// (0x0007ca2a) clock_digital_number_pane_cp10_ParamLimits

0x73d3,	// (0x0007ca2a) clock_digital_number_pane_cp10

0x73ed,	// (0x0007ca44) clock_digital_number_pane_cp11_ParamLimits

0x73ed,	// (0x0007ca44) clock_digital_number_pane_cp11

0x7407,	// (0x0007ca5e) clock_digital_number_pane_cp12_ParamLimits

0x7407,	// (0x0007ca5e) clock_digital_number_pane_cp12

0x7421,	// (0x0007ca78) clock_digital_number_pane_cp13_ParamLimits

0x7421,	// (0x0007ca78) clock_digital_number_pane_cp13

0x743b,	// (0x0007ca92) clock_digital_separator_pane_cp10_ParamLimits

0x743b,	// (0x0007ca92) clock_digital_separator_pane_cp10

0x7455,	// (0x0007caac) popup_clock_digital_window_cp02_t1_ParamLimits

0x7455,	// (0x0007caac) popup_clock_digital_window_cp02_t1

0xe815,	// (0x00083e6c) clock_digital_number_pane_cp10_g1

0xe815,	// (0x00083e6c) clock_digital_number_pane_cp10_g2

0x0001,

0x037f,	// (0x000759d6) clock_digital_number_pane_cp10_g

0xe815,	// (0x00083e6c) clock_digital_separator_pane_cp10_g1

0xe815,	// (0x00083e6c) clock_digital_separator_pane_g2_cp10

0x3758,	// (0x00078daf) navi_pane_vded_g4

0x3761,	// (0x00078db8) navi_pane_vded_g5

0x376a,	// (0x00078dc1) navi_pane_vded_t1

0xaa80,	// (0x000800d7) main_vded_pane

0x757d,	// (0x0007cbd4) main_vded_pane_g1

0x7589,	// (0x0007cbe0) main_vded_pane_g2

0x7595,	// (0x0007cbec) main_vded_pane_g3

0x0002,

0xf807,	// (0x00084e5e) main_vded_pane_g

0x75a1,	// (0x0007cbf8) main_vded_pane_t1

0x75af,	// (0x0007cc06) main_vded_pane_t2

0x0001,

0xf80e,	// (0x00084e65) main_vded_pane_t

0x75bd,	// (0x0007cc14) vded_slider_pane

0x75c7,	// (0x0007cc1e) vded_video_pane

0xb955,	// (0x00080fac) vded_video_pane_g1

0x75d3,	// (0x0007cc2a) vded_video_pane_g2

0xb35d,	// (0x000809b4) vded_video_pane_g3

0x0002,

0xf813,	// (0x00084e6a) vded_video_pane_g

0xb95f,	// (0x00080fb6) vded_slider_pane_g1

0xb066,	// (0x000806bd) vded_slider_pane_g2

0xb968,	// (0x00080fbf) vded_slider_pane_g3

0xb971,	// (0x00080fc8) vded_slider_pane_g4

0xb97a,	// (0x00080fd1) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x00084e71) vded_slider_pane_g

0x6fd4,	// (0x0007c62b) mup3_rocker_pane_ParamLimits

0x6fd4,	// (0x0007c62b) mup3_rocker_pane

0x75dc,	// (0x0007cc33) mup3_control_keys_pane_g1

0x75e4,	// (0x0007cc3b) mup3_control_keys_pane_g2

0x75ec,	// (0x0007cc43) mup3_control_keys_pane_g3

0x75f4,	// (0x0007cc4b) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x00084e7c) mup3_control_keys_pane_g

0x16dc,	// (0x00076d33) popup_toolbar2_fixed_window_cp01_ParamLimits

0x16dc,	// (0x00076d33) popup_toolbar2_fixed_window_cp01

0x700a,	// (0x0007c661) popup_toolbar2_fixed_window_cp02_ParamLimits

0x700a,	// (0x0007c661) popup_toolbar2_fixed_window_cp02

0x4a43,	// (0x0007a09a) popup_call2_audio_second_window_t4_ParamLimits

0x4a43,	// (0x0007a09a) popup_call2_audio_second_window_t4

0x4f71,	// (0x0007a5c8) popup_call2_audio_first_window_t6_ParamLimits

0x4f71,	// (0x0007a5c8) popup_call2_audio_first_window_t6

0x5207,	// (0x0007a85e) popup_call2_audio_out_window_t6_ParamLimits

0x5207,	// (0x0007a85e) popup_call2_audio_out_window_t6

0xaa80,	// (0x000800d7) main_vitu_pane

0x7604,	// (0x0007cc5b) aid_size_cell_itu_ParamLimits

0x7604,	// (0x0007cc5b) aid_size_cell_itu

0xaaf9,	// (0x00080150) bg_popup_window_pane_cp08_ParamLimits

0xaaf9,	// (0x00080150) bg_popup_window_pane_cp08

0x761a,	// (0x0007cc71) field_vitu_entry_pane_ParamLimits

0x761a,	// (0x0007cc71) field_vitu_entry_pane

0x7631,	// (0x0007cc88) grid_vitu_function_pane_ParamLimits

0x7631,	// (0x0007cc88) grid_vitu_function_pane

0x764c,	// (0x0007cca3) grid_vitu_itu_pane_ParamLimits

0x764c,	// (0x0007cca3) grid_vitu_itu_pane

0x766a,	// (0x0007ccc1) cell_vitu_itu_pane_ParamLimits

0x766a,	// (0x0007ccc1) cell_vitu_itu_pane

0x7690,	// (0x0007cce7) cell_vitu_function_pane_ParamLimits

0x7690,	// (0x0007cce7) cell_vitu_function_pane

0xaaf9,	// (0x00080150) bg_popup_sub_pane_cp08_ParamLimits

0xaaf9,	// (0x00080150) bg_popup_sub_pane_cp08

0x76ab,	// (0x0007cd02) field_vitu_entry_pane_t1_ParamLimits

0x76ab,	// (0x0007cd02) field_vitu_entry_pane_t1

0xb99b,	// (0x00080ff2) field_vitu_entry_pane_t2_ParamLimits

0xb99b,	// (0x00080ff2) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x00084e8a) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x00084e8a) field_vitu_entry_pane_t

0xb9b8,	// (0x0008100f) bg_button_pane_cp05_ParamLimits

0xb9b8,	// (0x0008100f) bg_button_pane_cp05

0x76cb,	// (0x0007cd22) cell_vitu_itu_pane_g1

0x76e3,	// (0x0007cd3a) cell_vitu_itu_pane_t1_ParamLimits

0x76e3,	// (0x0007cd3a) cell_vitu_itu_pane_t1

0x76f5,	// (0x0007cd4c) cell_vitu_itu_pane_t2_ParamLimits

0x76f5,	// (0x0007cd4c) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x00084e8f) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x00084e8f) cell_vitu_itu_pane_t

0xb9c6,	// (0x0008101d) bg_button_pane_cp07

0x772a,	// (0x0007cd81) cell_vitu_function_pane_g1

0xabe3,	// (0x0008023a) main_calc_pane_g1

0x1514,	// (0x00076b6b) aid_visual_content_pane

0xaa80,	// (0x000800d7) main_vradio_pane

0x7733,	// (0x0007cd8a) main_vradio_pane_g1_ParamLimits

0x7733,	// (0x0007cd8a) main_vradio_pane_g1

0xb9d0,	// (0x00081027) main_vradio_pane_g2_ParamLimits

0xb9d0,	// (0x00081027) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x00084e96) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x00084e96) main_vradio_pane_g

0x774a,	// (0x0007cda1) main_vradio_pane_t1_ParamLimits

0x774a,	// (0x0007cda1) main_vradio_pane_t1

0x775f,	// (0x0007cdb6) main_vradio_pane_t2_ParamLimits

0x775f,	// (0x0007cdb6) main_vradio_pane_t2

0xb9dd,	// (0x00081034) main_vradio_pane_t3_ParamLimits

0xb9dd,	// (0x00081034) main_vradio_pane_t3

0x0002,

0xf844,	// (0x00084e9b) main_vradio_pane_t_ParamLimits

0xf844,	// (0x00084e9b) main_vradio_pane_t

0x7774,	// (0x0007cdcb) vradio_rocker_control_pane_ParamLimits

0x7774,	// (0x0007cdcb) vradio_rocker_control_pane

0x7786,	// (0x0007cddd) vradio_station_info_pane_ParamLimits

0x7786,	// (0x0007cddd) vradio_station_info_pane

0xb9f1,	// (0x00081048) vradio_frequency_info_pane_ParamLimits

0xb9f1,	// (0x00081048) vradio_frequency_info_pane

0xb35d,	// (0x000809b4) vradio_station_info_pane_g1

0xba00,	// (0x00081057) vradio_station_info_pane_t1_ParamLimits

0xba00,	// (0x00081057) vradio_station_info_pane_t1

0xba22,	// (0x00081079) vradio_station_info_pane_t2_ParamLimits

0xba22,	// (0x00081079) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x00084ea2) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x00084ea2) vradio_station_info_pane_t

0xba34,	// (0x0008108b) vradio_tuning_pane

0xba3c,	// (0x00081093) vradio_rocker_control_pane_g1

0xba44,	// (0x0008109b) vradio_rocker_control_pane_g2

0xba4c,	// (0x000810a3) vradio_rocker_control_pane_g3

0xba54,	// (0x000810ab) vradio_rocker_control_pane_g4

0xba5c,	// (0x000810b3) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x00084ea7) vradio_rocker_control_pane_g

0x7796,	// (0x0007cded) vradio_frequency_info_pane_g1

0xba64,	// (0x000810bb) vradio_frequency_info_pane_t1_ParamLimits

0xba64,	// (0x000810bb) vradio_frequency_info_pane_t1

0x77a0,	// (0x0007cdf7) vradio_tuning_pane_g1

0x77ab,	// (0x0007ce02) vradio_tuning_pane_t1

0xaab6,	// (0x0008010d) area_side_right_pane_ParamLimits

0xaab6,	// (0x0008010d) area_side_right_pane

0x5991,	// (0x0007afe8) status_small_pane_g1

0x5999,	// (0x0007aff0) status_small_pane_g2

0x59a2,	// (0x0007aff9) status_small_pane_g3

0x59ab,	// (0x0007b002) status_small_pane_g4

0x0003,

0xf615,	// (0x00084c6c) status_small_pane_g

0x59b4,	// (0x0007b00b) status_small_pane_t1

0xaa80,	// (0x000800d7) main_video3_pane

0xba78,	// (0x000810cf) cams_zoom_vslider_pane

0xba80,	// (0x000810d7) image3_wide_pane_ParamLimits

0xba80,	// (0x000810d7) image3_wide_pane

0xba9a,	// (0x000810f1) image3_wide_small_pane

0xbaa6,	// (0x000810fd) main_video3_pane_g1_ParamLimits

0xbaa6,	// (0x000810fd) main_video3_pane_g1

0xbac2,	// (0x00081119) main_video3_pane_g2_ParamLimits

0xbac2,	// (0x00081119) main_video3_pane_g2

0x0001,

0xf85b,	// (0x00084eb2) main_video3_pane_g_ParamLimits

0xf85b,	// (0x00084eb2) main_video3_pane_g

0xbade,	// (0x00081135) main_video3_pane_t1_ParamLimits

0xbade,	// (0x00081135) main_video3_pane_t1

0xbb09,	// (0x00081160) main_video3_pane_t2_ParamLimits

0xbb09,	// (0x00081160) main_video3_pane_t2

0xbb36,	// (0x0008118d) main_video3_pane_t3_ParamLimits

0xbb36,	// (0x0008118d) main_video3_pane_t3

0x0002,

0xf860,	// (0x00084eb7) main_video3_pane_t_ParamLimits

0xf860,	// (0x00084eb7) main_video3_pane_t

0xbb63,	// (0x000811ba) cams_zoom_vslider_pane_g1

0xbb6c,	// (0x000811c3) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x00084ebe) cams_zoom_vslider_pane_g

0xbb74,	// (0x000811cb) small_slider_vertical_pane

0xb35d,	// (0x000809b4) small_slider_vertical_pane_g1

0xb35d,	// (0x000809b4) small_slider_vertical_pane_g2

0xbb7c,	// (0x000811d3) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x00084ec3) small_slider_vertical_pane_g

0xaa80,	// (0x000800d7) main_hwr_training_pane

0xbb85,	// (0x000811dc) hwr_training_instruct_pane_ParamLimits

0xbb85,	// (0x000811dc) hwr_training_instruct_pane

0x77ba,	// (0x0007ce11) hwr_training_navi_pane_ParamLimits

0x77ba,	// (0x0007ce11) hwr_training_navi_pane

0x77d9,	// (0x0007ce30) hwr_training_write_pane_ParamLimits

0x77d9,	// (0x0007ce30) hwr_training_write_pane

0xaa80,	// (0x000800d7) bg_frame_shadow_pane

0xbbbc,	// (0x00081213) hwr_training_write_pane_g1

0xbbc4,	// (0x0008121b) hwr_training_write_pane_g2

0xbbcc,	// (0x00081223) hwr_training_write_pane_g3

0xbbd4,	// (0x0008122b) hwr_training_write_pane_g4

0xbbdc,	// (0x00081233) hwr_training_write_pane_g5

0xbbe4,	// (0x0008123b) hwr_training_write_pane_g6

0xbbec,	// (0x00081243) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x00084eca) hwr_training_write_pane_g

0xde5f,	// (0x000834b6) hwr_training_navi_pane_g1_ParamLimits

0xde5f,	// (0x000834b6) hwr_training_navi_pane_g1

0xde71,	// (0x000834c8) hwr_training_navi_pane_g2_ParamLimits

0xde71,	// (0x000834c8) hwr_training_navi_pane_g2

0xde83,	// (0x000834da) hwr_training_navi_pane_g3_ParamLimits

0xde83,	// (0x000834da) hwr_training_navi_pane_g3

0xde93,	// (0x000834ea) hwr_training_navi_pane_g4_ParamLimits

0xde93,	// (0x000834ea) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x00084ed9) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x00084ed9) hwr_training_navi_pane_g

0xdea0,	// (0x000834f7) hwr_training_navi_pane_t1

0x7821,	// (0x0007ce78) list_single_hwr_training_instruct_pane_ParamLimits

0x7821,	// (0x0007ce78) list_single_hwr_training_instruct_pane

0xbbf4,	// (0x0008124b) list_single_hwr_training_instruct_pane_t1

0xb29d,	// (0x000808f4) bg_frame_shadow_pane_g1

0xbc03,	// (0x0008125a) bg_frame_shadow_pane_g2

0xbc0b,	// (0x00081262) bg_frame_shadow_pane_g3

0xbc13,	// (0x0008126a) bg_frame_shadow_pane_g4

0xbc1b,	// (0x00081272) bg_frame_shadow_pane_g5

0xbc23,	// (0x0008127a) bg_frame_shadow_pane_g6

0xbc2b,	// (0x00081282) bg_frame_shadow_pane_g7

0xe9b3,	// (0x0008400a) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x00084ee4) bg_frame_shadow_pane_g

0xaa80,	// (0x000800d7) main_video_tele_dialer_pane

0x783d,	// (0x0007ce94) aid_size_cell_video_keypad_ParamLimits

0x783d,	// (0x0007ce94) aid_size_cell_video_keypad

0x7857,	// (0x0007ceae) grid_video_dialer_keypad_pane_ParamLimits

0x7857,	// (0x0007ceae) grid_video_dialer_keypad_pane

0x78a5,	// (0x0007cefc) video_down_pane_cp_ParamLimits

0x78a5,	// (0x0007cefc) video_down_pane_cp

0x78d9,	// (0x0007cf30) cell_video_dialer_keypad_pane_ParamLimits

0x78d9,	// (0x0007cf30) cell_video_dialer_keypad_pane

0xbc33,	// (0x0008128a) bg_button_pane_cp08_ParamLimits

0xbc33,	// (0x0008128a) bg_button_pane_cp08

0x78ff,	// (0x0007cf56) cell_video_dialer_keypad_pane_g1_ParamLimits

0x78ff,	// (0x0007cf56) cell_video_dialer_keypad_pane_g1

0x6fbe,	// (0x0007c615) mup3_rocker2_pane_ParamLimits

0x6fbe,	// (0x0007c615) mup3_rocker2_pane

0xb35d,	// (0x000809b4) mup3_rocker2_pane_g1

0x59f6,	// (0x0007b04d) main_dialer2_pane

0xaa80,	// (0x000800d7) main_mp4_pane

0xdeb6,	// (0x0008350d) main_mp4_pane_g1_ParamLimits

0xdeb6,	// (0x0008350d) main_mp4_pane_g1

0xdeb6,	// (0x0008350d) main_mp4_pane_g2_ParamLimits

0xdeb6,	// (0x0008350d) main_mp4_pane_g2

0x793a,	// (0x0007cf91) main_mp4_pane_g3_ParamLimits

0x793a,	// (0x0007cf91) main_mp4_pane_g3

0xdec4,	// (0x0008351b) main_mp4_pane_g4_ParamLimits

0xdec4,	// (0x0008351b) main_mp4_pane_g4

0xdede,	// (0x00083535) main_mp4_pane_g5_ParamLimits

0xdede,	// (0x00083535) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x00084f04) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x00084f04) main_mp4_pane_g

0xdf12,	// (0x00083569) main_mp4_pane_t1_ParamLimits

0xdf12,	// (0x00083569) main_mp4_pane_t1

0xdf6e,	// (0x000835c5) main_mp4_pane_t2_ParamLimits

0xdf6e,	// (0x000835c5) main_mp4_pane_t2

0xbc3f,	// (0x00081296) main_mp4_pane_t3_ParamLimits

0xbc3f,	// (0x00081296) main_mp4_pane_t3

0xdfc0,	// (0x00083617) main_mp4_pane_t4_ParamLimits

0xdfc0,	// (0x00083617) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x00084f11) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x00084f11) main_mp4_pane_t

0xe000,	// (0x00083657) mp4_progress_pane_ParamLimits

0xe000,	// (0x00083657) mp4_progress_pane

0xe04a,	// (0x000836a1) mp4_rocker_pane_ParamLimits

0xe04a,	// (0x000836a1) mp4_rocker_pane

0xbc67,	// (0x000812be) mp4_progress_pane_t1

0xbc80,	// (0x000812d7) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x00084f1a) mp4_progress_pane_t

0xbc99,	// (0x000812f0) mup_progress_pane_cp04

0xb35d,	// (0x000809b4) mp4_rocker_pane_g1

0x7984,	// (0x0007cfdb) aid_cell_size_keypad2_ParamLimits

0x7984,	// (0x0007cfdb) aid_cell_size_keypad2

0x799a,	// (0x0007cff1) dialer2_ne_pane_ParamLimits

0x799a,	// (0x0007cff1) dialer2_ne_pane

0x79b2,	// (0x0007d009) grid_dialer2_keypad_pane_ParamLimits

0x79b2,	// (0x0007d009) grid_dialer2_keypad_pane

0xb13c,	// (0x00080793) bg_popup_call_pane_cp07_ParamLimits

0xb13c,	// (0x00080793) bg_popup_call_pane_cp07

0x79ce,	// (0x0007d025) dialer2_ne_pane_t1_ParamLimits

0x79ce,	// (0x0007d025) dialer2_ne_pane_t1

0x7a0e,	// (0x0007d065) cell_dialer2_keypad_pane_ParamLimits

0x7a0e,	// (0x0007d065) cell_dialer2_keypad_pane

0xbcb7,	// (0x0008130e) bg_button_pane_pane_cp04_ParamLimits

0xbcb7,	// (0x0008130e) bg_button_pane_pane_cp04

0x7a34,	// (0x0007d08b) cell_dialer2_keypad_pane_g1_ParamLimits

0x7a34,	// (0x0007d08b) cell_dialer2_keypad_pane_g1

0x2319,	// (0x00077970) aid_placing_vt_set_content_ParamLimits

0x2319,	// (0x00077970) aid_placing_vt_set_content

0x233d,	// (0x00077994) aid_placing_vt_set_title_ParamLimits

0x233d,	// (0x00077994) aid_placing_vt_set_title

0xaa80,	// (0x000800d7) main_image3_pane

0x7afa,	// (0x0007d151) area_side_right_pane_cp01_ParamLimits

0x7afa,	// (0x0007d151) area_side_right_pane_cp01

0xdeb6,	// (0x0008350d) main_image3_pane_g1_ParamLimits

0xdeb6,	// (0x0008350d) main_image3_pane_g1

0x7b13,	// (0x0007d16a) main_image3_pane_g2_ParamLimits

0x7b13,	// (0x0007d16a) main_image3_pane_g2

0x7b3b,	// (0x0007d192) main_image3_pane_g3_ParamLimits

0x7b3b,	// (0x0007d192) main_image3_pane_g3

0x7b65,	// (0x0007d1bc) main_image3_pane_g4_ParamLimits

0x7b65,	// (0x0007d1bc) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x00084f29) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x00084f29) main_image3_pane_g

0x7b8f,	// (0x0007d1e6) main_image3_pane_t1_ParamLimits

0x7b8f,	// (0x0007d1e6) main_image3_pane_t1

0x7be7,	// (0x0007d23e) main_image3_pane_t2_ParamLimits

0x7be7,	// (0x0007d23e) main_image3_pane_t2

0x7c39,	// (0x0007d290) main_image3_pane_t3_ParamLimits

0x7c39,	// (0x0007d290) main_image3_pane_t3

0x0003,

0xf8db,	// (0x00084f32) main_image3_pane_t_ParamLimits

0xf8db,	// (0x00084f32) main_image3_pane_t

0xaaf9,	// (0x00080150) grid_sctrl_middle_pane_cp01_ParamLimits

0xaaf9,	// (0x00080150) grid_sctrl_middle_pane_cp01

0x7cc1,	// (0x0007d318) cell_sctrl_middle_pane_cp01_ParamLimits

0x7cc1,	// (0x0007d318) cell_sctrl_middle_pane_cp01

0x7cde,	// (0x0007d335) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7cde,	// (0x0007d335) cell_sctrl_middle_pane_cp01_g1

0xaa80,	// (0x000800d7) main_call4_pane

0x7cf3,	// (0x0007d34a) aid_size_button_call4_ParamLimits

0x7cf3,	// (0x0007d34a) aid_size_button_call4

0x7d26,	// (0x0007d37d) call4_windows_pane_ParamLimits

0x7d26,	// (0x0007d37d) call4_windows_pane

0x7d48,	// (0x0007d39f) grid_call4_button_pane_ParamLimits

0x7d48,	// (0x0007d39f) grid_call4_button_pane

0xbcc3,	// (0x0008131a) call4_windows_conf_pane

0xbcde,	// (0x00081335) popup_call4_audio_first_window_ParamLimits

0xbcde,	// (0x00081335) popup_call4_audio_first_window

0xbd2c,	// (0x00081383) popup_call4_audio_second_window_ParamLimits

0xbd2c,	// (0x00081383) popup_call4_audio_second_window

0xbd42,	// (0x00081399) popup_call4_audio_wait_window_ParamLimits

0xbd42,	// (0x00081399) popup_call4_audio_wait_window

0x7d73,	// (0x0007d3ca) cell_call4_button_pane_ParamLimits

0x7d73,	// (0x0007d3ca) cell_call4_button_pane

0x7d9a,	// (0x0007d3f1) bg_button_pane_cp09_ParamLimits

0x7d9a,	// (0x0007d3f1) bg_button_pane_cp09

0x7da6,	// (0x0007d3fd) cell_call4_button_pane_g1_ParamLimits

0x7da6,	// (0x0007d3fd) cell_call4_button_pane_g1

0x7dcc,	// (0x0007d423) cell_call4_button_pane_t1_ParamLimits

0x7dcc,	// (0x0007d423) cell_call4_button_pane_t1

0xbd8a,	// (0x000813e1) popup_call4_audio_conf_window_ParamLimits

0xbd8a,	// (0x000813e1) popup_call4_audio_conf_window

0x7020,	// (0x0007c677) mup3_progress_pane_t1_ParamLimits

0x7037,	// (0x0007c68e) mup3_progress_pane_t2_ParamLimits

0xb67c,	// (0x00080cd3) mup3_progress_pane_t3_ParamLimits

0xf7b9,	// (0x00084e10) mup3_progress_pane_t_ParamLimits

0xb693,	// (0x00080cea) mup_progress_pane_cp03_ParamLimits

0x75fc,	// (0x0007cc53) mup3_control_keys_pane_g4_copy1

0xe02e,	// (0x00083685) mp4_rocker2_pane_ParamLimits

0xe02e,	// (0x00083685) mp4_rocker2_pane

0xbda4,	// (0x000813fb) mp4_rocker2_pane_g1

0xbdac,	// (0x00081403) mp4_rocker2_pane_g2

0xe0a0,	// (0x000836f7) mp4_rocker2_pane_g3

0xe0a8,	// (0x000836ff) mp4_rocker2_pane_g4

0xe0b0,	// (0x00083707) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x00084f3b) mp4_rocker2_pane_g

0xaa80,	// (0x000800d7) main_camera4_pane

0xaa80,	// (0x000800d7) main_video4_pane

0x7873,	// (0x0007ceca) main_video_tele_dialer_pane_t1_ParamLimits

0x7873,	// (0x0007ceca) main_video_tele_dialer_pane_t1

0x788c,	// (0x0007cee3) main_video_tele_dialer_pane_t2_ParamLimits

0x788c,	// (0x0007cee3) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x00084ef5) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x00084ef5) main_video_tele_dialer_pane_t

0x7e0a,	// (0x0007d461) cam4_autofocus_pane_ParamLimits

0x7e0a,	// (0x0007d461) cam4_autofocus_pane

0x7e20,	// (0x0007d477) cam4_image_uncrop_pane_ParamLimits

0x7e20,	// (0x0007d477) cam4_image_uncrop_pane

0x7e39,	// (0x0007d490) cam4_indicators_pane_ParamLimits

0x7e39,	// (0x0007d490) cam4_indicators_pane

0x7e68,	// (0x0007d4bf) main_camera4_pane_g1_ParamLimits

0x7e68,	// (0x0007d4bf) main_camera4_pane_g1

0x7e74,	// (0x0007d4cb) main_camera4_pane_g2_ParamLimits

0x7e74,	// (0x0007d4cb) main_camera4_pane_g2

0x7e74,	// (0x0007d4cb) main_camera4_pane_g3_ParamLimits

0x7e74,	// (0x0007d4cb) main_camera4_pane_g3

0x7e80,	// (0x0007d4d7) main_camera4_pane_g4_ParamLimits

0x7e80,	// (0x0007d4d7) main_camera4_pane_g4

0x7e8c,	// (0x0007d4e3) main_camera4_pane_g5_ParamLimits

0x7e8c,	// (0x0007d4e3) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x00084f46) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x00084f46) main_camera4_pane_g

0x7ea9,	// (0x0007d500) main_camera4_pane_t1_ParamLimits

0x7ea9,	// (0x0007d500) main_camera4_pane_t1

0xb58d,	// (0x00080be4) bg_tb_trans_pane_cp06

0xe0de,	// (0x00083735) cam4_indicators_pane_g1

0xe0eb,	// (0x00083742) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x00084f61) cam4_indicators_pane_g

0xe10b,	// (0x00083762) cam4_indicators_pane_t1

0x7f0d,	// (0x0007d564) main_video4_pane_g1_ParamLimits

0x7f0d,	// (0x0007d564) main_video4_pane_g1

0x7f1f,	// (0x0007d576) main_video4_pane_g2_ParamLimits

0x7f1f,	// (0x0007d576) main_video4_pane_g2

0x7f33,	// (0x0007d58a) main_video4_pane_g3_ParamLimits

0x7f33,	// (0x0007d58a) main_video4_pane_g3

0x7f43,	// (0x0007d59a) main_video4_pane_g4_ParamLimits

0x7f43,	// (0x0007d59a) main_video4_pane_g4

0x0004,

0xf911,	// (0x00084f68) main_video4_pane_g_ParamLimits

0xf911,	// (0x00084f68) main_video4_pane_g

0x7f63,	// (0x0007d5ba) vid4_indicators_pane_ParamLimits

0x7f63,	// (0x0007d5ba) vid4_indicators_pane

0x7f93,	// (0x0007d5ea) video4_image_uncrop_cif_pane_ParamLimits

0x7f93,	// (0x0007d5ea) video4_image_uncrop_cif_pane

0x7fad,	// (0x0007d604) video4_image_uncrop_nhd_pane_ParamLimits

0x7fad,	// (0x0007d604) video4_image_uncrop_nhd_pane

0x7e20,	// (0x0007d477) video4_image_uncrop_vga_pane_ParamLimits

0x7e20,	// (0x0007d477) video4_image_uncrop_vga_pane

0xbdc8,	// (0x0008141f) bg_tb_trans_pane_cp07

0x7fc3,	// (0x0007d61a) vid4_indicators_pane_g1

0x7fd0,	// (0x0007d627) vid4_indicators_pane_g2

0x7fdd,	// (0x0007d634) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x00084f73) vid4_indicators_pane_g

0x8002,	// (0x0007d659) vid4_indicators_pane_t1

0x8014,	// (0x0007d66b) cam4_autofocus_pane_g1

0x801c,	// (0x0007d673) cam4_autofocus_pane_g2

0x8024,	// (0x0007d67b) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x00084f7e) cam4_autofocus_pane_g

0x802c,	// (0x0007d683) cam4_autofocus_pane_g3_copy1

0x78bd,	// (0x0007cf14) video_down_pane_cp_t1

0x78cb,	// (0x0007cf22) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x00084efa) video_down_pane_cp_t

0xaaf9,	// (0x00080150) popup_vitu2_window_ParamLimits

0xaaf9,	// (0x00080150) popup_vitu2_window

0x8034,	// (0x0007d68b) aid_size_cell2_itu2_ParamLimits

0x8034,	// (0x0007d68b) aid_size_cell2_itu2

0x805a,	// (0x0007d6b1) aid_size_cell_itu2_ParamLimits

0x805a,	// (0x0007d6b1) aid_size_cell_itu2

0x80b8,	// (0x0007d70f) bg_popup_window_pane_cp09_ParamLimits

0x80b8,	// (0x0007d70f) bg_popup_window_pane_cp09

0x80c6,	// (0x0007d71d) field_vitu2_entry_pane_ParamLimits

0x80c6,	// (0x0007d71d) field_vitu2_entry_pane

0x80ee,	// (0x0007d745) grid_vitu2_function_pane_ParamLimits

0x80ee,	// (0x0007d745) grid_vitu2_function_pane

0x813f,	// (0x0007d796) grid_vitu2_itu_pane_ParamLimits

0x813f,	// (0x0007d796) grid_vitu2_itu_pane

0x81ca,	// (0x0007d821) cell_vitu2_itu_pane_ParamLimits

0x81ca,	// (0x0007d821) cell_vitu2_itu_pane

0x81f0,	// (0x0007d847) cell_vitu2_function_pane_ParamLimits

0x81f0,	// (0x0007d847) cell_vitu2_function_pane

0xbdd6,	// (0x0008142d) bg_popup_call_pane_cp08_ParamLimits

0xbdd6,	// (0x0008142d) bg_popup_call_pane_cp08

0xbdef,	// (0x00081446) field_vitu2_entry_pane_g1

0xbdfb,	// (0x00081452) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x00084f85) field_vitu2_entry_pane_g

0x0c61,	// (0x000762b8) field_vitu2_entry_pane_t1_ParamLimits

0x0c61,	// (0x000762b8) field_vitu2_entry_pane_t1

0xbe15,	// (0x0008146c) field_vitu2_entry_pane_t2_ParamLimits

0xbe15,	// (0x0008146c) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x00084f8c) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x00084f8c) field_vitu2_entry_pane_t

0x8234,	// (0x0007d88b) bg_button_pane_cp010_ParamLimits

0x8234,	// (0x0007d88b) bg_button_pane_cp010

0x8242,	// (0x0007d899) cell_vitu2_itu_pane_g1

0x8260,	// (0x0007d8b7) cell_vitu2_itu_pane_t1_ParamLimits

0x8260,	// (0x0007d8b7) cell_vitu2_itu_pane_t1

0x0c7e,	// (0x000762d5) cell_vitu2_itu_pane_t2_ParamLimits

0x0c7e,	// (0x000762d5) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x00084f96) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x00084f96) cell_vitu2_itu_pane_t

0xaaf9,	// (0x00080150) bg_button_pane_cp011

0x82c6,	// (0x0007d91d) cell_vitu2_function_pane_g1

0xaa80,	// (0x000800d7) main_myfav_hc_pane

0x7c89,	// (0x0007d2e0) popup_image3_note_pane_ParamLimits

0x7c89,	// (0x0007d2e0) popup_image3_note_pane

0x7ca5,	// (0x0007d2fc) popup_image3_tool_bar_pane_ParamLimits

0x7ca5,	// (0x0007d2fc) popup_image3_tool_bar_pane

0x0d02,	// (0x00076359) cell_vitu2_itu_pane_t3_ParamLimits

0x0d02,	// (0x00076359) cell_vitu2_itu_pane_t3

0xaa80,	// (0x000800d7) bg_popup_trans_pane

0xbe3a,	// (0x00081491) grid_image3_tool_bar_pane

0xbe44,	// (0x0008149b) bg_popup_trans_pane_g1

0xecf2,	// (0x00084349) bg_popup_trans_pane_g2

0xbe4c,	// (0x000814a3) bg_popup_trans_pane_g3

0xbe54,	// (0x000814ab) bg_popup_trans_pane_g4

0xbe5c,	// (0x000814b3) bg_popup_trans_pane_g5

0xbe64,	// (0x000814bb) bg_popup_trans_pane_g6

0xbe6c,	// (0x000814c3) bg_popup_trans_pane_g7

0xbe74,	// (0x000814cb) bg_popup_trans_pane_g8

0xecd2,	// (0x00084329) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x00084f9d) bg_popup_trans_pane_g

0xbe7c,	// (0x000814d3) cell_image3_tool_bar_pane_ParamLimits

0xbe7c,	// (0x000814d3) cell_image3_tool_bar_pane

0xb35d,	// (0x000809b4) cell_image3_tool_bar_pane_g1

0xaa80,	// (0x000800d7) bg_popup_trans_pane_cp1

0xbe92,	// (0x000814e9) popup_image3_note_pane_t1

0xbea0,	// (0x000814f7) popup_image3_note_pane_t2

0xbeae,	// (0x00081505) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x00084fb0) popup_image3_note_pane_t

0xbebe,	// (0x00081515) popup_image3_note_pane_t3_copy1

0x82da,	// (0x0007d931) bg_myfav_hc_instruction_pane_ParamLimits

0x82da,	// (0x0007d931) bg_myfav_hc_instruction_pane

0x82f2,	// (0x0007d949) cell_myfav_contact_pane_ParamLimits

0x82f2,	// (0x0007d949) cell_myfav_contact_pane

0x830e,	// (0x0007d965) cell_myfav_contact_pane_cp1_ParamLimits

0x830e,	// (0x0007d965) cell_myfav_contact_pane_cp1

0x8326,	// (0x0007d97d) cell_myfav_contact_pane_cp2_ParamLimits

0x8326,	// (0x0007d97d) cell_myfav_contact_pane_cp2

0x833e,	// (0x0007d995) cell_myfav_contact_pane_cp3_ParamLimits

0x833e,	// (0x0007d995) cell_myfav_contact_pane_cp3

0x8355,	// (0x0007d9ac) cell_myfav_contact_pane_cp4_ParamLimits

0x8355,	// (0x0007d9ac) cell_myfav_contact_pane_cp4

0x836d,	// (0x0007d9c4) cell_myfav_contact_pane_cp5_ParamLimits

0x836d,	// (0x0007d9c4) cell_myfav_contact_pane_cp5

0x8381,	// (0x0007d9d8) cell_myfav_contact_pane_cp6_ParamLimits

0x8381,	// (0x0007d9d8) cell_myfav_contact_pane_cp6

0x8397,	// (0x0007d9ee) cell_myfav_contact_pane_cp7_ParamLimits

0x8397,	// (0x0007d9ee) cell_myfav_contact_pane_cp7

0xbecc,	// (0x00081523) listscroll_gen_pane_cp05

0x83af,	// (0x0007da06) main_myfav_hc_pane_g1_ParamLimits

0x83af,	// (0x0007da06) main_myfav_hc_pane_g1

0x83c9,	// (0x0007da20) main_myfav_hc_pane_g2_ParamLimits

0x83c9,	// (0x0007da20) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x00084fb7) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x00084fb7) main_myfav_hc_pane_g

0x83fd,	// (0x0007da54) main_myfav_hc_pane_t1_ParamLimits

0x83fd,	// (0x0007da54) main_myfav_hc_pane_t1

0xbed5,	// (0x0008152c) main_myfav_hc_pane_t2_ParamLimits

0xbed5,	// (0x0008152c) main_myfav_hc_pane_t2

0xbee7,	// (0x0008153e) main_myfav_hc_pane_t3_ParamLimits

0xbee7,	// (0x0008153e) main_myfav_hc_pane_t3

0x8414,	// (0x0007da6b) main_myfav_hc_pane_t4_ParamLimits

0x8414,	// (0x0007da6b) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x00084fbe) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x00084fbe) main_myfav_hc_pane_t

0xb35d,	// (0x000809b4) bg_myfav_hc_instruction_pane_g1

0xbef9,	// (0x00081550) cell_myfav_contact_pane_g1_ParamLimits

0xbef9,	// (0x00081550) cell_myfav_contact_pane_g1

0xbef9,	// (0x00081550) cell_myfav_contact_pane_g2_ParamLimits

0xbef9,	// (0x00081550) cell_myfav_contact_pane_g2

0xbf05,	// (0x0008155c) cell_myfav_contact_pane_g3_ParamLimits

0xbf05,	// (0x0008155c) cell_myfav_contact_pane_g3

0xb666,	// (0x00080cbd) cell_myfav_contact_pane_g4_ParamLimits

0xb666,	// (0x00080cbd) cell_myfav_contact_pane_g4

0xbf12,	// (0x00081569) cell_myfav_contact_pane_g5_ParamLimits

0xbf12,	// (0x00081569) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x00084fc9) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x00084fc9) cell_myfav_contact_pane_g

0x83e3,	// (0x0007da3a) main_myfav_hc_pane_g3_ParamLimits

0x83e3,	// (0x0007da3a) main_myfav_hc_pane_g3

0x163c,	// (0x00076c93) popup_adpt_find_window

0x843e,	// (0x0007da95) afind_page_pane_ParamLimits

0x843e,	// (0x0007da95) afind_page_pane

0x8453,	// (0x0007daaa) aid_size_cell_afind_ParamLimits

0x8453,	// (0x0007daaa) aid_size_cell_afind

0x8471,	// (0x0007dac8) bg_popup_sub_pane_cp09_ParamLimits

0x8471,	// (0x0007dac8) bg_popup_sub_pane_cp09

0x847e,	// (0x0007dad5) find_pane_cp01_ParamLimits

0x847e,	// (0x0007dad5) find_pane_cp01

0xbf1e,	// (0x00081575) grid_afind_control_pane_ParamLimits

0xbf1e,	// (0x00081575) grid_afind_control_pane

0x848b,	// (0x0007dae2) grid_afind_pane_ParamLimits

0x848b,	// (0x0007dae2) grid_afind_pane

0x84ad,	// (0x0007db04) cell_afind_pane_ParamLimits

0x84ad,	// (0x0007db04) cell_afind_pane

0xb35d,	// (0x000809b4) afind_page_pane_g1

0x8514,	// (0x0007db6b) afind_page_pane_g2

0x851d,	// (0x0007db74) afind_page_pane_g3

0x0002,

0xf97d,	// (0x00084fd4) afind_page_pane_g

0x8526,	// (0x0007db7d) afind_page_pane_t1

0xbf32,	// (0x00081589) cell_afind_grid_control_pane_ParamLimits

0xbf32,	// (0x00081589) cell_afind_grid_control_pane

0xbcb7,	// (0x0008130e) bg_button_pane_cp69_ParamLimits

0xbcb7,	// (0x0008130e) bg_button_pane_cp69

0x8546,	// (0x0007db9d) cell_afind_pane_g1_ParamLimits

0x8546,	// (0x0007db9d) cell_afind_pane_g1

0x8553,	// (0x0007dbaa) cell_afind_pane_t1_ParamLimits

0x8553,	// (0x0007dbaa) cell_afind_pane_t1

0xeae9,	// (0x00084140) bg_button_pane_cp72

0xbf41,	// (0x00081598) cell_afind_grid_control_pane_g1

0x44db,	// (0x00079b32) aid_image_placing_area_ParamLimits

0x44db,	// (0x00079b32) aid_image_placing_area

0xb983,	// (0x00080fda) field_vitu_entry_pane_g1_ParamLimits

0xb983,	// (0x00080fda) field_vitu_entry_pane_g1

0xb98f,	// (0x00080fe6) field_vitu_entry_pane_g2_ParamLimits

0xb98f,	// (0x00080fe6) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x00084e85) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x00084e85) field_vitu_entry_pane_g

0x76cb,	// (0x0007cd22) cell_vitu_itu_pane_g1_ParamLimits

0x770d,	// (0x0007cd64) cell_vitu_itu_pane_t3_ParamLimits

0x770d,	// (0x0007cd64) cell_vitu_itu_pane_t3

0xbc67,	// (0x000812be) mp4_progress_pane_t1_ParamLimits

0xbc80,	// (0x000812d7) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x00084f1a) mp4_progress_pane_t_ParamLimits

0xbc99,	// (0x000812f0) mup_progress_pane_cp04_ParamLimits

0x8428,	// (0x0007da7f) main_myfav_hc_pane_t5_ParamLimits

0x8428,	// (0x0007da7f) main_myfav_hc_pane_t5

0xaaa6,	// (0x000800fd) aid_zoom_text_primary

0x163c,	// (0x00076c93) popup_adpt_find_window_ParamLimits

0xaaf9,	// (0x00080150) main_cam_set_pane

0x7e52,	// (0x0007d4a9) cam4_zoom_pane_ParamLimits

0x7e52,	// (0x0007d4a9) cam4_zoom_pane

0x8565,	// (0x0007dbbc) main_cam_set_pane_g1_ParamLimits

0x8565,	// (0x0007dbbc) main_cam_set_pane_g1

0x8573,	// (0x0007dbca) main_cam_set_pane_g2_ParamLimits

0x8573,	// (0x0007dbca) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x00084fdb) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x00084fdb) main_cam_set_pane_g

0x8596,	// (0x0007dbed) main_cam_set_pane_t1_ParamLimits

0x8596,	// (0x0007dbed) main_cam_set_pane_t1

0x85b1,	// (0x0007dc08) main_cset_listscroll_pane_ParamLimits

0x85b1,	// (0x0007dc08) main_cset_listscroll_pane

0x85d5,	// (0x0007dc2c) main_cset_slider_pane_ParamLimits

0x85d5,	// (0x0007dc2c) main_cset_slider_pane

0xbf52,	// (0x000815a9) main_cset_list_pane_ParamLimits

0xbf52,	// (0x000815a9) main_cset_list_pane

0xbf62,	// (0x000815b9) scroll_pane_cp028

0x85ff,	// (0x0007dc56) aid_area_touch_slider

0x861b,	// (0x0007dc72) cset_slider_pane

0x8645,	// (0x0007dc9c) main_cset_slider_pane_g1

0x865a,	// (0x0007dcb1) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x00084fe0) main_cset_slider_pane_g

0xbf9b,	// (0x000815f2) main_cset_slider_pane_t1

0x871c,	// (0x0007dd73) main_cset_slider_pane_t2

0x8736,	// (0x0007dd8d) main_cset_slider_pane_t3

0x8750,	// (0x0007dda7) main_cset_slider_pane_t4

0x876a,	// (0x0007ddc1) main_cset_slider_pane_t5

0x8788,	// (0x0007dddf) main_cset_slider_pane_t6

0x879f,	// (0x0007ddf6) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x00085005) main_cset_slider_pane_t

0x88ab,	// (0x0007df02) cset_list_set_pane_ParamLimits

0x88ab,	// (0x0007df02) cset_list_set_pane

0x88bf,	// (0x0007df16) aid_position_infowindow_above

0x88c7,	// (0x0007df1e) aid_position_infowindow_below

0xe139,	// (0x00083790) cset_list_set_pane_g1_ParamLimits

0xe139,	// (0x00083790) cset_list_set_pane_g1

0x0d5a,	// (0x000763b1) cset_list_set_pane_g3_ParamLimits

0x0d5a,	// (0x000763b1) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x00085024) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x00085024) cset_list_set_pane_g

0x0d69,	// (0x000763c0) cset_list_set_pane_t1_ParamLimits

0x0d69,	// (0x000763c0) cset_list_set_pane_t1

0xaaf9,	// (0x00080150) list_highlight_pane_cp021_ParamLimits

0xaaf9,	// (0x00080150) list_highlight_pane_cp021

0x3d22,	// (0x00079379) cset_slider_pane_g1

0x3d34,	// (0x0007938b) cset_slider_pane_g2

0x3d2b,	// (0x00079382) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x00085029) cset_slider_pane_g

0xe145,	// (0x0008379c) aid_area_touch_cam4_zoom

0xe14d,	// (0x000837a4) cam4_zoom_cont_pane

0xe155,	// (0x000837ac) cam4_zoom_pane_g1

0xe15d,	// (0x000837b4) cam4_zoom_pane_g2

0x88cf,	// (0x0007df26) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x00085030) cam4_zoom_pane_g

0xc03b,	// (0x00081692) cam4_zoom_cont_pane_g1

0xc044,	// (0x0008169b) cam4_zoom_cont_pane_g2

0xc04d,	// (0x000816a4) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x00085037) cam4_zoom_cont_pane_g

0x7d11,	// (0x0007d368) call4_image_pane_ParamLimits

0x7d11,	// (0x0007d368) call4_image_pane

0xbcc3,	// (0x0008131a) call4_windows_conf_pane_ParamLimits

0xbd0a,	// (0x00081361) popup_call4_audio_in_window_ParamLimits

0xbd0a,	// (0x00081361) popup_call4_audio_in_window

0xaa80,	// (0x000800d7) bg_popup_call2_act_pane_cp02

0xbd82,	// (0x000813d9) call4_list_conf_pane

0xb35d,	// (0x000809b4) call4_image_pane_g1

0xb35d,	// (0x000809b4) call4_image_pane_g2

0x0001,

0xf6f9,	// (0x00084d50) call4_image_pane_g

0xc056,	// (0x000816ad) list_single_graphic_popup_conf4_pane_ParamLimits

0xc056,	// (0x000816ad) list_single_graphic_popup_conf4_pane

0xaa80,	// (0x000800d7) list_highlight_pane_cp022

0xc06b,	// (0x000816c2) list_single_graphic_popup_conf4_pane_g1

0x3230,	// (0x00078887) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0008503e) list_single_graphic_popup_conf4_pane_g

0xc073,	// (0x000816ca) list_single_graphic_popup_conf4_pane_t1

0x2457,	// (0x00077aae) popup_vtel_slider_window_ParamLimits

0x2457,	// (0x00077aae) popup_vtel_slider_window

0xbca5,	// (0x000812fc) dialer2_ne_pane_t2_ParamLimits

0xbca5,	// (0x000812fc) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x00084f1f) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x00084f1f) dialer2_ne_pane_t

0xb13c,	// (0x00080793) bg_popup_sub_pane_cp010_ParamLimits

0xb13c,	// (0x00080793) bg_popup_sub_pane_cp010

0x88d7,	// (0x0007df2e) popup_vtel_slider_window_g1_ParamLimits

0x88d7,	// (0x0007df2e) popup_vtel_slider_window_g1

0x88ea,	// (0x0007df41) popup_vtel_slider_window_g2_ParamLimits

0x88ea,	// (0x0007df41) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x00085043) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x00085043) popup_vtel_slider_window_g

0x8940,	// (0x0007df97) vtel_slider_pane_ParamLimits

0x8940,	// (0x0007df97) vtel_slider_pane

0x8962,	// (0x0007dfb9) vtel_slider_pane_g1_ParamLimits

0x8962,	// (0x0007dfb9) vtel_slider_pane_g1

0x8976,	// (0x0007dfcd) vtel_slider_pane_g2_ParamLimits

0x8976,	// (0x0007dfcd) vtel_slider_pane_g2

0x898e,	// (0x0007dfe5) vtel_slider_pane_g3_ParamLimits

0x898e,	// (0x0007dfe5) vtel_slider_pane_g3

0x8962,	// (0x0007dfb9) vtel_slider_pane_g4_ParamLimits

0x8962,	// (0x0007dfb9) vtel_slider_pane_g4

0x89a4,	// (0x0007dffb) vtel_slider_pane_g5_ParamLimits

0x89a4,	// (0x0007dffb) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0008504c) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0008504c) vtel_slider_pane_g

0xaa80,	// (0x000800d7) main_gallery2_pane

0x8086,	// (0x0007d6dd) aid_size_row_itut2_dropdow_list_ParamLimits

0x8086,	// (0x0007d6dd) aid_size_row_itut2_dropdow_list

0x8116,	// (0x0007d76d) grid_vitu2_function_top_pane_ParamLimits

0x8116,	// (0x0007d76d) grid_vitu2_function_top_pane

0x8175,	// (0x0007d7cc) popup_vitu2_dropdown_list_window_ParamLimits

0x8175,	// (0x0007d7cc) popup_vitu2_dropdown_list_window

0x819e,	// (0x0007d7f5) popup_vitu2_match_list_window

0x89ba,	// (0x0007e011) cell_vitu2_function_top_pane_ParamLimits

0x89ba,	// (0x0007e011) cell_vitu2_function_top_pane

0x89da,	// (0x0007e031) cell_vitu2_function_top_pane_cp01_ParamLimits

0x89da,	// (0x0007e031) cell_vitu2_function_top_pane_cp01

0x89f8,	// (0x0007e04f) cell_vitu2_function_top_wide_pane_ParamLimits

0x89f8,	// (0x0007e04f) cell_vitu2_function_top_wide_pane

0xaaf9,	// (0x00080150) bg_button_pane_cp012

0x8a16,	// (0x0007e06d) cell_vitu2_function_top_pane_g1

0xe165,	// (0x000837bc) bg_button_pane_cp013_ParamLimits

0xe165,	// (0x000837bc) bg_button_pane_cp013

0x8a2a,	// (0x0007e081) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8a2a,	// (0x0007e081) cell_vitu2_function_top_wide_pane_g1

0xaaf9,	// (0x00080150) bg_popup_sub_pane_cp20

0x8a42,	// (0x0007e099) list_vitu2_match_list_pane

0xbe44,	// (0x0008149b) bg_popup_sub_pane_cp20_g1

0xbe4c,	// (0x000814a3) bg_popup_sub_pane_cp20_g2

0xecf2,	// (0x00084349) bg_popup_sub_pane_cp20_g3

0xbe54,	// (0x000814ab) bg_popup_sub_pane_cp20_g4

0xecd2,	// (0x00084329) bg_popup_sub_pane_cp20_g5

0xc097,	// (0x000816ee) bg_popup_sub_pane_cp20_g6

0xbe64,	// (0x000814bb) bg_popup_sub_pane_cp20_g7

0xbe6c,	// (0x000814c3) bg_popup_sub_pane_cp20_g8

0xbe74,	// (0x000814cb) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x00085057) bg_popup_sub_pane_cp20_g

0xe181,	// (0x000837d8) list_vitu2_match_list_item_pane_ParamLimits

0xe181,	// (0x000837d8) list_vitu2_match_list_item_pane

0xe193,	// (0x000837ea) list_vitu2_match_list_item_pane_t1

0xaa80,	// (0x000800d7) bg_popup_sub_pane_cp21

0xf095,	// (0x000846ec) grid_vitu2_dropdown_list_pane

0x8a60,	// (0x0007e0b7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8a60,	// (0x0007e0b7) cell_vitu2_dropdown_list_char_pane

0x8a83,	// (0x0007e0da) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8a83,	// (0x0007e0da) cell_vitu2_dropdown_list_ctrl_pane

0xc0b7,	// (0x0008170e) cell_vitu2_dropdown_list_char_pane_g1

0xc0c0,	// (0x00081717) cell_vitu2_dropdown_list_char_pane_g2

0xc0c9,	// (0x00081720) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x00085074) cell_vitu2_dropdown_list_char_pane_g

0x8ab1,	// (0x0007e108) cell_vitu2_dropdown_list_char_pane_t1

0x8abf,	// (0x0007e116) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8abf,	// (0x0007e116) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8acf,	// (0x0007e126) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8acf,	// (0x0007e126) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8ae0,	// (0x0007e137) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8ae0,	// (0x0007e137) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8af0,	// (0x0007e147) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8af0,	// (0x0007e147) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb58d,	// (0x00080be4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb58d,	// (0x00080be4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0008507b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0008507b) cell_vitu2_dropdown_list_ctrl_pane_g

0x8b0c,	// (0x0007e163) aid_size_cell_gallery2_ParamLimits

0x8b0c,	// (0x0007e163) aid_size_cell_gallery2

0x8b22,	// (0x0007e179) grid_gallery2_pane_ParamLimits

0x8b22,	// (0x0007e179) grid_gallery2_pane

0x8b36,	// (0x0007e18d) scroll_pane_cp029_ParamLimits

0x8b36,	// (0x0007e18d) scroll_pane_cp029

0x8b42,	// (0x0007e199) cell_gallery2_pane_ParamLimits

0x8b42,	// (0x0007e199) cell_gallery2_pane

0xc0d2,	// (0x00081729) cell_gallery2_pane_g2

0x8b7c,	// (0x0007e1d3) cell_gallery2_pane_g3

0xc0dc,	// (0x00081733) cell_gallery2_pane_g4

0xc0e4,	// (0x0008173b) cell_gallery2_pane_g5

0x3788,	// (0x00078ddf) grid_highlight_pane_cp10

0x819e,	// (0x0007d7f5) popup_vitu2_match_list_window_ParamLimits

0x81b5,	// (0x0007d80c) popup_vitu2_query_window_ParamLimits

0x81b5,	// (0x0007d80c) popup_vitu2_query_window

0xaa80,	// (0x000800d7) bg_vitu2_candi_button_pane

0xc0b7,	// (0x0008170e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xc0c0,	// (0x00081717) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xc0c9,	// (0x00081720) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0db0,	// (0x00076407) bg_button_pane_cp015

0x8b84,	// (0x0007e1db) bg_button_pane_cp016

0x8b97,	// (0x0007e1ee) bg_button_pane_cp017

0x59e8,	// (0x0007b03f) bg_popup_sub_pane_cp22

0xc0ec,	// (0x00081743) popup_vitu2_query_window_g1

0x0de5,	// (0x0007643c) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x00085086) popup_vitu2_query_window_g

0x0e04,	// (0x0007645b) popup_vitu2_query_window_t1_ParamLimits

0x0e04,	// (0x0007645b) popup_vitu2_query_window_t1

0x0e39,	// (0x00076490) popup_vitu2_query_window_t2_ParamLimits

0x0e39,	// (0x00076490) popup_vitu2_query_window_t2

0x0e4b,	// (0x000764a2) popup_vitu2_query_window_t3_ParamLimits

0x0e4b,	// (0x000764a2) popup_vitu2_query_window_t3

0x8bbb,	// (0x0007e212) popup_vitu2_query_window_t4_ParamLimits

0x8bbb,	// (0x0007e212) popup_vitu2_query_window_t4

0x8bdc,	// (0x0007e233) popup_vitu2_query_window_t5_ParamLimits

0x8bdc,	// (0x0007e233) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0008508d) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0008508d) popup_vitu2_query_window_t

0xbf4a,	// (0x000815a1) main_cset_text_pane

0x85ff,	// (0x0007dc56) aid_area_touch_slider_ParamLimits

0x861b,	// (0x0007dc72) cset_slider_pane_ParamLimits

0x8645,	// (0x0007dc9c) main_cset_slider_pane_g1_ParamLimits

0x865a,	// (0x0007dcb1) main_cset_slider_pane_g2_ParamLimits

0xbf6b,	// (0x000815c2) main_cset_slider_pane_g3_ParamLimits

0xbf6b,	// (0x000815c2) main_cset_slider_pane_g3

0x866f,	// (0x0007dcc6) main_cset_slider_pane_g4_ParamLimits

0x866f,	// (0x0007dcc6) main_cset_slider_pane_g4

0x867e,	// (0x0007dcd5) main_cset_slider_pane_g5_ParamLimits

0x867e,	// (0x0007dcd5) main_cset_slider_pane_g5

0x868c,	// (0x0007dce3) main_cset_slider_pane_g6_ParamLimits

0x868c,	// (0x0007dce3) main_cset_slider_pane_g6

0xf989,	// (0x00084fe0) main_cset_slider_pane_g_ParamLimits

0xbf9b,	// (0x000815f2) main_cset_slider_pane_t1_ParamLimits

0x871c,	// (0x0007dd73) main_cset_slider_pane_t2_ParamLimits

0x8736,	// (0x0007dd8d) main_cset_slider_pane_t3_ParamLimits

0x8750,	// (0x0007dda7) main_cset_slider_pane_t4_ParamLimits

0x876a,	// (0x0007ddc1) main_cset_slider_pane_t5_ParamLimits

0x8788,	// (0x0007dddf) main_cset_slider_pane_t6_ParamLimits

0x879f,	// (0x0007ddf6) main_cset_slider_pane_t7_ParamLimits

0x87cd,	// (0x0007de24) main_cset_slider_pane_t8_ParamLimits

0x87cd,	// (0x0007de24) main_cset_slider_pane_t8

0x87f5,	// (0x0007de4c) main_cset_slider_pane_t9_ParamLimits

0x87f5,	// (0x0007de4c) main_cset_slider_pane_t9

0x881d,	// (0x0007de74) main_cset_slider_pane_t10_ParamLimits

0x881d,	// (0x0007de74) main_cset_slider_pane_t10

0x8845,	// (0x0007de9c) main_cset_slider_pane_t11_ParamLimits

0x8845,	// (0x0007de9c) main_cset_slider_pane_t11

0x886f,	// (0x0007dec6) main_cset_slider_pane_t12_ParamLimits

0x886f,	// (0x0007dec6) main_cset_slider_pane_t12

0x888c,	// (0x0007dee3) main_cset_slider_pane_t13_ParamLimits

0x888c,	// (0x0007dee3) main_cset_slider_pane_t13

0xf9ae,	// (0x00085005) main_cset_slider_pane_t_ParamLimits

0xaa80,	// (0x000800d7) bg_popup_sub_pane_cp011

0xc0f8,	// (0x0008174f) main_cset_text_pane_g1

0xc100,	// (0x00081757) main_cset_text_pane_t1

0xc10e,	// (0x00081765) main_cset_text_pane_t2

0xc11c,	// (0x00081773) main_cset_text_pane_t3

0xc12a,	// (0x00081781) main_cset_text_pane_t4

0xc138,	// (0x0008178f) main_cset_text_pane_t5

0xc146,	// (0x0008179d) main_cset_text_pane_t6

0xc154,	// (0x000817ab) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0008509c) main_cset_text_pane_t

0xaa80,	// (0x000800d7) main_cam4_burst_pane

0xaa80,	// (0x000800d7) main_cam5_pane

0x8534,	// (0x0007db8b) bg_button_pane_cp019

0x853d,	// (0x0007db94) bg_button_pane_cp020

0xbf77,	// (0x000815ce) main_cset_slider_pane_g7_ParamLimits

0xbf77,	// (0x000815ce) main_cset_slider_pane_g7

0xbf83,	// (0x000815da) main_cset_slider_pane_g8_ParamLimits

0xbf83,	// (0x000815da) main_cset_slider_pane_g8

0x86a0,	// (0x0007dcf7) main_cset_slider_pane_g9_ParamLimits

0x86a0,	// (0x0007dcf7) main_cset_slider_pane_g9

0x86ac,	// (0x0007dd03) main_cset_slider_pane_g10_ParamLimits

0x86ac,	// (0x0007dd03) main_cset_slider_pane_g10

0x86b8,	// (0x0007dd0f) main_cset_slider_pane_g11_ParamLimits

0x86b8,	// (0x0007dd0f) main_cset_slider_pane_g11

0x86c4,	// (0x0007dd1b) main_cset_slider_pane_g12_ParamLimits

0x86c4,	// (0x0007dd1b) main_cset_slider_pane_g12

0x86d0,	// (0x0007dd27) main_cset_slider_pane_g13_ParamLimits

0x86d0,	// (0x0007dd27) main_cset_slider_pane_g13

0x86dc,	// (0x0007dd33) main_cset_slider_pane_g14_ParamLimits

0x86dc,	// (0x0007dd33) main_cset_slider_pane_g14

0x86e8,	// (0x0007dd3f) main_cset_slider_pane_g15_ParamLimits

0x86e8,	// (0x0007dd3f) main_cset_slider_pane_g15

0xbfc9,	// (0x00081620) main_cset_slider_pane_t14_ParamLimits

0xbfc9,	// (0x00081620) main_cset_slider_pane_t14

0xc002,	// (0x00081659) main_cset_slider_pane_t15_ParamLimits

0xc002,	// (0x00081659) main_cset_slider_pane_t15

0x8bfd,	// (0x0007e254) aid_cam4_burst_size_cell_ParamLimits

0x8bfd,	// (0x0007e254) aid_cam4_burst_size_cell

0x8c1d,	// (0x0007e274) grid_cam4_burst_pane_ParamLimits

0x8c1d,	// (0x0007e274) grid_cam4_burst_pane

0x8c57,	// (0x0007e2ae) linegrid_cam4_burst_pane_ParamLimits

0x8c57,	// (0x0007e2ae) linegrid_cam4_burst_pane

0xc162,	// (0x000817b9) scroll_pane_cp30_ParamLimits

0xc162,	// (0x000817b9) scroll_pane_cp30

0x8c7b,	// (0x0007e2d2) cell_cam4_burst_pane_ParamLimits

0x8c7b,	// (0x0007e2d2) cell_cam4_burst_pane

0xc16e,	// (0x000817c5) linegrid_cam4_burst_pane_g1_ParamLimits

0xc16e,	// (0x000817c5) linegrid_cam4_burst_pane_g1

0x8cd0,	// (0x0007e327) linegrid_cam4_burst_pane_g2_ParamLimits

0x8cd0,	// (0x0007e327) linegrid_cam4_burst_pane_g2

0xc17b,	// (0x000817d2) linegrid_cam4_burst_pane_g3_ParamLimits

0xc17b,	// (0x000817d2) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x000850ab) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x000850ab) linegrid_cam4_burst_pane_g

0x8ce1,	// (0x0007e338) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8ce1,	// (0x0007e338) linegrid_cam4_burst_pane_g3_copy1

0xc188,	// (0x000817df) linegrid_cam4_burst_pane_g4_ParamLimits

0xc188,	// (0x000817df) linegrid_cam4_burst_pane_g4

0x8cff,	// (0x0007e356) linegrid_cam4_burst_pane_g5_ParamLimits

0x8cff,	// (0x0007e356) linegrid_cam4_burst_pane_g5

0x8d10,	// (0x0007e367) linegrid_cam4_burst_pane_g6_ParamLimits

0x8d10,	// (0x0007e367) linegrid_cam4_burst_pane_g6

0xc195,	// (0x000817ec) linegrid_cam4_burst_pane_g7_ParamLimits

0xc195,	// (0x000817ec) linegrid_cam4_burst_pane_g7

0x8d27,	// (0x0007e37e) cell_cam4_burst_pane_g1

0xc1ae,	// (0x00081805) main_cam5_pane_t1_ParamLimits

0xc1ae,	// (0x00081805) main_cam5_pane_t1

0xc1c0,	// (0x00081817) main_cam5_pane_t2_ParamLimits

0xc1c0,	// (0x00081817) main_cam5_pane_t2

0xc1d2,	// (0x00081829) main_cam5_pane_t3_ParamLimits

0xc1d2,	// (0x00081829) main_cam5_pane_t3

0xc1e4,	// (0x0008183b) main_cam5_pane_t4_ParamLimits

0xc1e4,	// (0x0008183b) main_cam5_pane_t4

0xc1fc,	// (0x00081853) main_cam5_pane_t5_ParamLimits

0xc1fc,	// (0x00081853) main_cam5_pane_t5

0xc210,	// (0x00081867) main_cam5_pane_t6_ParamLimits

0xc210,	// (0x00081867) main_cam5_pane_t6

0xc224,	// (0x0008187b) main_cam5_pane_t7_ParamLimits

0xc224,	// (0x0008187b) main_cam5_pane_t7

0xc236,	// (0x0008188d) main_cam5_pane_t8_ParamLimits

0xc236,	// (0x0008188d) main_cam5_pane_t8

0xc254,	// (0x000818ab) main_cam5_pane_t9_ParamLimits

0xc254,	// (0x000818ab) main_cam5_pane_t9

0xc266,	// (0x000818bd) main_cam5_pane_t10_ParamLimits

0xc266,	// (0x000818bd) main_cam5_pane_t10

0xc278,	// (0x000818cf) main_cam5_pane_t11_ParamLimits

0xc278,	// (0x000818cf) main_cam5_pane_t11

0xc28c,	// (0x000818e3) main_cam5_pane_t12_ParamLimits

0xc28c,	// (0x000818e3) main_cam5_pane_t12

0xc2a3,	// (0x000818fa) main_cam5_pane_t13_ParamLimits

0xc2a3,	// (0x000818fa) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x000850b7) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x000850b7) main_cam5_pane_t

0x16c0,	// (0x00076d17) popup_scut_keymap_window_ParamLimits

0x16c0,	// (0x00076d17) popup_scut_keymap_window

0x8d3a,	// (0x0007e391) aid_size_cell_brow_shortcut

0x3788,	// (0x00078ddf) bg_popup_window_pane_cp010

0x8d46,	// (0x0007e39d) grid_scut_pane

0x8d52,	// (0x0007e3a9) cell_scut_pane_ParamLimits

0x8d52,	// (0x0007e3a9) cell_scut_pane

0x8d6b,	// (0x0007e3c2) cell_scut_pane_g1

0xc2c6,	// (0x0008191d) cell_scut_pane_t1

0xc2d5,	// (0x0008192c) cell_scut_pane_t2

0x8d74,	// (0x0007e3cb) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x000850d2) cell_scut_pane_t

0x6bdd,	// (0x0007c234) main_mup3_pane_g8_ParamLimits

0x6bdd,	// (0x0007c234) main_mup3_pane_g8

0x80a0,	// (0x0007d6f7) area_vitu2_query_pane_ParamLimits

0x80a0,	// (0x0007d6f7) area_vitu2_query_pane

0x0dc4,	// (0x0007641b) input_focus_pane_cp08

0xc2e4,	// (0x0008193b) area_vitu2_query_pane_g1

0x0ec9,	// (0x00076520) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x000850d9) area_vitu2_query_pane_g

0x8d82,	// (0x0007e3d9) area_vitu2_query_pane_t1_ParamLimits

0x8d82,	// (0x0007e3d9) area_vitu2_query_pane_t1

0x8d96,	// (0x0007e3ed) area_vitu2_query_pane_t2_ParamLimits

0x8d96,	// (0x0007e3ed) area_vitu2_query_pane_t2

0x0edc,	// (0x00076533) area_vitu2_query_pane_t3_ParamLimits

0x0edc,	// (0x00076533) area_vitu2_query_pane_t3

0xc2f0,	// (0x00081947) area_vitu2_query_pane_t4_ParamLimits

0xc2f0,	// (0x00081947) area_vitu2_query_pane_t4

0xc318,	// (0x0008196f) area_vitu2_query_pane_t5_ParamLimits

0xc318,	// (0x0008196f) area_vitu2_query_pane_t5

0xc340,	// (0x00081997) area_vitu2_query_pane_t6_ParamLimits

0xc340,	// (0x00081997) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x000850de) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x000850de) area_vitu2_query_pane_t

0x8daa,	// (0x0007e401) bg_button_pane_cp018

0x8db8,	// (0x0007e40f) bg_button_pane_cp021

0x0f04,	// (0x0007655b) bg_button_pane_cp022

0x0f15,	// (0x0007656c) input_focus_pane_cp09

0x35ad,	// (0x00078c04) aid_size_touch_mv_arrow_left

0x35d6,	// (0x00078c2d) aid_size_touch_mv_arrow_right

0x8700,	// (0x0007dd57) main_cset_slider_pane_g16_ParamLimits

0x8700,	// (0x0007dd57) main_cset_slider_pane_g16

0x870e,	// (0x0007dd65) main_cset_slider_pane_g17_ParamLimits

0x870e,	// (0x0007dd65) main_cset_slider_pane_g17

0x8d27,	// (0x0007e37e) cell_cam4_burst_pane_g1_ParamLimits

0xaa80,	// (0x000800d7) compa_mode_pane

0x88fa,	// (0x0007df51) popup_vtel_slider_window_g3_ParamLimits

0x88fa,	// (0x0007df51) popup_vtel_slider_window_g3

0x8911,	// (0x0007df68) popup_vtel_slider_window_g4_ParamLimits

0x8911,	// (0x0007df68) popup_vtel_slider_window_g4

0x8928,	// (0x0007df7f) popup_vtel_slider_window_t1_ParamLimits

0x8928,	// (0x0007df7f) popup_vtel_slider_window_t1

0xaa80,	// (0x000800d7) main_cl_pane

0x5b47,	// (0x0007b19e) popup_imed_adjust2_window_ParamLimits

0x59e8,	// (0x0007b03f) bg_tb_trans_pane_cp05_ParamLimits

0xb8b8,	// (0x00080f0f) popup_imed_adjust2_window_g1_ParamLimits

0xb8c7,	// (0x00080f1e) popup_imed_adjust2_window_g2_ParamLimits

0xb8c7,	// (0x00080f1e) popup_imed_adjust2_window_g2

0xb8d3,	// (0x00080f2a) popup_imed_adjust2_window_g3_ParamLimits

0xb8d3,	// (0x00080f2a) popup_imed_adjust2_window_g3

0x0002,

0xf7f7,	// (0x00084e4e) popup_imed_adjust2_window_g_ParamLimits

0xf7f7,	// (0x00084e4e) popup_imed_adjust2_window_g

0xb8df,	// (0x00080f36) popup_imed_adjust2_window_t1_ParamLimits

0xb8f7,	// (0x00080f4e) slider_imed_adjust_pane_ParamLimits

0xb90b,	// (0x00080f62) slider_imed_adjust_pane_g1_ParamLimits

0xb91b,	// (0x00080f72) slider_imed_adjust_pane_g2_ParamLimits

0xb92b,	// (0x00080f82) slider_imed_adjust_pane_g3_ParamLimits

0xb93c,	// (0x00080f93) slider_imed_adjust_pane_g4_ParamLimits

0xf7fe,	// (0x00084e55) slider_imed_adjust_pane_g_ParamLimits

0x7df2,	// (0x0007d449) aid_touch_area_cam4_ParamLimits

0x7df2,	// (0x0007d449) aid_touch_area_cam4

0xe0b8,	// (0x0008370f) battery_pane_cp01

0x7e9d,	// (0x0007d4f4) main_camera4_pane_g6_ParamLimits

0x7e9d,	// (0x0007d4f4) main_camera4_pane_g6

0x7ec0,	// (0x0007d517) main_camera4_pane_t2_ParamLimits

0x7ec0,	// (0x0007d517) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x00084f53) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x00084f53) main_camera4_pane_t

0x7ef5,	// (0x0007d54c) aid_touch_area_vid4_ParamLimits

0x7ef5,	// (0x0007d54c) aid_touch_area_vid4

0x7f53,	// (0x0007d5aa) main_video4_pane_g5_ParamLimits

0x7f53,	// (0x0007d5aa) main_video4_pane_g5

0x7f7a,	// (0x0007d5d1) vid4_progress_pane_ParamLimits

0x7f7a,	// (0x0007d5d1) vid4_progress_pane

0xbf8f,	// (0x000815e6) main_cset_slider_pane_g18_ParamLimits

0xbf8f,	// (0x000815e6) main_cset_slider_pane_g18

0xc1a2,	// (0x000817f9) cell_cam4_burst_pane_g2_ParamLimits

0xc1a2,	// (0x000817f9) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x000850b2) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x000850b2) cell_cam4_burst_pane_g

0xe8e8,	// (0x00083f3f) bg_cl_pane_ParamLimits

0xe8e8,	// (0x00083f3f) bg_cl_pane

0x8dc4,	// (0x0007e41b) cl_header_pane_ParamLimits

0x8dc4,	// (0x0007e41b) cl_header_pane

0x8dd8,	// (0x0007e42f) cl_listscroll_pane_ParamLimits

0x8dd8,	// (0x0007e42f) cl_listscroll_pane

0xc38c,	// (0x000819e3) bg_cl_pane_g1

0xc394,	// (0x000819eb) bg_cl_pane_g2

0xc39c,	// (0x000819f3) bg_cl_pane_g3

0xc3a4,	// (0x000819fb) bg_cl_pane_g4

0xc3ac,	// (0x00081a03) bg_cl_pane_g5

0xc3b4,	// (0x00081a0b) bg_cl_pane_g6

0xc3bc,	// (0x00081a13) bg_cl_pane_g7

0xc3c4,	// (0x00081a1b) bg_cl_pane_g8

0xc3cc,	// (0x00081a23) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x000850ed) bg_cl_pane_g

0x8de8,	// (0x0007e43f) aid_height_cl_leading_ParamLimits

0x8de8,	// (0x0007e43f) aid_height_cl_leading

0x8df4,	// (0x0007e44b) aid_height_cl_text_ParamLimits

0x8df4,	// (0x0007e44b) aid_height_cl_text

0xaaf9,	// (0x00080150) bg_cl_header_pane_ParamLimits

0xaaf9,	// (0x00080150) bg_cl_header_pane

0x8e13,	// (0x0007e46a) cl_header_pane_g1_ParamLimits

0x8e13,	// (0x0007e46a) cl_header_pane_g1

0x8e29,	// (0x0007e480) cl_header_pane_t1_ParamLimits

0x8e29,	// (0x0007e480) cl_header_pane_t1

0xc3d4,	// (0x00081a2b) cl_list_pane

0xbf62,	// (0x000815b9) hc_scroll_pane_cp01

0xecd2,	// (0x00084329) bg_cl_header_pane_g1

0xbe44,	// (0x0008149b) bg_cl_header_pane_g2

0xecf2,	// (0x00084349) bg_cl_header_pane_g3

0xbe54,	// (0x000814ab) bg_cl_header_pane_g4

0xbe4c,	// (0x000814a3) bg_cl_header_pane_g5

0xc097,	// (0x000816ee) bg_cl_header_pane_g6

0xbe6c,	// (0x000814c3) bg_cl_header_pane_g7

0xbe74,	// (0x000814cb) bg_cl_header_pane_g8

0xbe64,	// (0x000814bb) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x00085100) bg_cl_header_pane_g

0x8e42,	// (0x0007e499) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8e42,	// (0x0007e499) hc_cl_list_double_graphic_heading_pane

0x8e55,	// (0x0007e4ac) hc_cl_list_single_graphic_pane_ParamLimits

0x8e55,	// (0x0007e4ac) hc_cl_list_single_graphic_pane

0x8e6d,	// (0x0007e4c4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8e6d,	// (0x0007e4c4) hc_cl_list_single_graphic_pane_g1

0x8e79,	// (0x0007e4d0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8e79,	// (0x0007e4d0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x00085113) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x00085113) hc_cl_list_single_graphic_pane_g

0x8e8d,	// (0x0007e4e4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8e8d,	// (0x0007e4e4) hc_cl_list_single_graphic_pane_t1

0x8e6d,	// (0x0007e4c4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8e6d,	// (0x0007e4c4) hc_cl_list_double_graphic_heading_pane_g1

0x8ea2,	// (0x0007e4f9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8ea2,	// (0x0007e4f9) hc_cl_list_double_graphic_heading_pane_g2

0x8eb6,	// (0x0007e50d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8eb6,	// (0x0007e50d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x00085118) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x00085118) hc_cl_list_double_graphic_heading_pane_g

0x8eca,	// (0x0007e521) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8eca,	// (0x0007e521) hc_cl_list_double_graphic_heading_pane_t1

0x8edf,	// (0x0007e536) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8edf,	// (0x0007e536) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0008511f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0008511f) hc_cl_list_double_graphic_heading_pane_t

0xe1a9,	// (0x00083800) vid4_progress_pane_g1

0xe1b5,	// (0x0008380c) vid4_progress_pane_g2

0xe1c1,	// (0x00083818) vid4_progress_pane_g3

0xe1d0,	// (0x00083827) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x00085124) vid4_progress_pane_g

0xe1ee,	// (0x00083845) vid4_progress_pane_t1

0xe204,	// (0x0008385b) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0008512f) vid4_progress_pane_t

0xe22f,	// (0x00083886) wait_bar_pane_cp07

0xb14a,	// (0x000807a1) blid_firmament_pane_ParamLimits

0xb18d,	// (0x000807e4) popup_blid_sat_info2_window_g1

0xb1b1,	// (0x00080808) popup_blid_sat_info2_window_t3

0xb1bf,	// (0x00080816) popup_blid_sat_info2_window_t4

0xb1cd,	// (0x00080824) popup_blid_sat_info2_window_t5

0xb1db,	// (0x00080832) popup_blid_sat_info2_window_t6

0xb1eb,	// (0x00080842) popup_blid_sat_info2_window_t7

0xb1f9,	// (0x00080850) popup_blid_sat_info2_window_t8

0xb207,	// (0x0008085e) popup_blid_sat_info2_window_t9

0xb215,	// (0x0008086c) popup_blid_sat_info2_window_t10

0xb2dd,	// (0x00080934) aid_firma_cardinal_ParamLimits

0xb2f1,	// (0x00080948) blid_firmament_pane_t1_ParamLimits

0xb308,	// (0x0008095f) blid_firmament_pane_t2_ParamLimits

0xb31f,	// (0x00080976) blid_firmament_pane_t3_ParamLimits

0xb336,	// (0x0008098d) blid_firmament_pane_t4_ParamLimits

0xf6f0,	// (0x00084d47) blid_firmament_pane_t_ParamLimits

0xb34d,	// (0x000809a4) blid_sat_info_pane_ParamLimits

0xaaf9,	// (0x00080150) main_cam_set_pane_ParamLimits

0x7477,	// (0x0007cace) aid_size_cell_colour_35_ParamLimits

0x7497,	// (0x0007caee) aid_size_cell_colour_112_ParamLimits

0x74b7,	// (0x0007cb0e) aid_size_cell_effect_ParamLimits

0x59e8,	// (0x0007b03f) bg_tb_trans_pane_cp02_ParamLimits

0xee9a,	// (0x000844f1) heading_imed_pane_ParamLimits

0x74d7,	// (0x0007cb2e) listscroll_imed_pane_ParamLimits

0x4ced,	// (0x0007a344) popup_call2_audio_first_window_g5_ParamLimits

0x4ced,	// (0x0007a344) popup_call2_audio_first_window_g5

0x7a9c,	// (0x0007d0f3) aid_size_touch_image3_arrow_left_ParamLimits

0x7a9c,	// (0x0007d0f3) aid_size_touch_image3_arrow_left

0x7ac8,	// (0x0007d11f) aid_size_touch_image3_arrow_right_ParamLimits

0x7ac8,	// (0x0007d11f) aid_size_touch_image3_arrow_right

0xe21a,	// (0x00083871) vid4_progress_pane_t3

0x77f4,	// (0x0007ce4b) main_hwr_training_symbol_option_pane_ParamLimits

0x77f4,	// (0x0007ce4b) main_hwr_training_symbol_option_pane

0xbba7,	// (0x000811fe) popup_hwr_training_preview_window_ParamLimits

0xbba7,	// (0x000811fe) popup_hwr_training_preview_window

0x7814,	// (0x0007ce6b) hwr_training_navi_pane_g5_ParamLimits

0x7814,	// (0x0007ce6b) hwr_training_navi_pane_g5

0xbe32,	// (0x00081489) popup_char_count_window

0xaaf9,	// (0x00080150) bg_popup_sub_pane_cp20_ParamLimits

0x8a42,	// (0x0007e099) list_vitu2_match_list_pane_ParamLimits

0x8a51,	// (0x0007e0a8) vitu2_page_scroll_pane_ParamLimits

0x8a51,	// (0x0007e0a8) vitu2_page_scroll_pane

0xc426,	// (0x00081a7d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xc426,	// (0x00081a7d) list_single_hwr_training_symbol_option_pane

0xc439,	// (0x00081a90) list_single_hwr_training_symbol_option_pane_g1

0xc441,	// (0x00081a98) list_single_hwr_training_symbol_option_pane_t1

0xc44f,	// (0x00081aa6) bg_button_pane_cp023

0xc458,	// (0x00081aaf) bg_button_pane_cp024

0x8efe,	// (0x0007e555) vitu2_page_scroll_pane_g1

0x8f06,	// (0x0007e55d) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x00085136) vitu2_page_scroll_pane_g

0x8f10,	// (0x0007e567) vitu2_page_scroll_pane_t1

0xb066,	// (0x000806bd) popup_char_count_window_g1

0xc48b,	// (0x00081ae2) popup_char_count_window_g2

0xc494,	// (0x00081aeb) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0008513b) popup_char_count_window_g

0xc49d,	// (0x00081af4) popup_char_count_window_t1

0xaa80,	// (0x000800d7) main_vded2_pane

0xb8a4,	// (0x00080efb) aid_size_cell_imed_line

0xb8ae,	// (0x00080f05) grid_imed_line_width_pane

0x7fea,	// (0x0007d641) vid4_indicators_pane_g4

0xc4ab,	// (0x00081b02) cell_imed_line_width_pane_ParamLimits

0xc4ab,	// (0x00081b02) cell_imed_line_width_pane

0xc4c1,	// (0x00081b18) cell_imed_line_width_pane_g1

0xc4ca,	// (0x00081b21) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x00085142) cell_imed_line_width_pane_g

0x8f1f,	// (0x0007e576) main_vded2_pane_g1_ParamLimits

0x8f1f,	// (0x0007e576) main_vded2_pane_g1

0x8f3a,	// (0x0007e591) main_vded2_pane_g2_ParamLimits

0x8f3a,	// (0x0007e591) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x00085147) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x00085147) main_vded2_pane_g

0x8f4c,	// (0x0007e5a3) vded2_slider_pane_ParamLimits

0x8f4c,	// (0x0007e5a3) vded2_slider_pane

0x8f5c,	// (0x0007e5b3) aid_size_touch_vded2_end

0x8f66,	// (0x0007e5bd) aid_size_touch_vded2_playhead

0xc4d2,	// (0x00081b29) aid_size_touch_vded2_start

0xc4da,	// (0x00081b31) vded2_slider_bg_pane

0xc4e3,	// (0x00081b3a) vded2_slider_pane_g1

0xc4ec,	// (0x00081b43) vded2_slider_pane_g2

0x8f70,	// (0x0007e5c7) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0008514c) vded2_slider_pane_g

0xc4f4,	// (0x00081b4b) vded2_slider_bg_pane_g1

0xc4fd,	// (0x00081b54) vded2_slider_bg_pane_g2

0xc506,	// (0x00081b5d) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x00085153) vded2_slider_bg_pane_g

0x3e59,	// (0x000794b0) aid_postcard_touch_down_pane_ParamLimits

0x3e59,	// (0x000794b0) aid_postcard_touch_down_pane

0x3e71,	// (0x000794c8) aid_postcard_touch_up_pane_ParamLimits

0x3e71,	// (0x000794c8) aid_postcard_touch_up_pane

0xaa80,	// (0x000800d7) main_blid2_pane

0x5a1e,	// (0x0007b075) popup_blid2_search_window

0xaa80,	// (0x000800d7) blid2_gps_pane

0xaa80,	// (0x000800d7) blid2_navig_pane

0xaa80,	// (0x000800d7) blid2_search_pane

0xaa80,	// (0x000800d7) blid2_tripm_pane

0x8f7b,	// (0x0007e5d2) blid2_search_pane_g1_ParamLimits

0x8f7b,	// (0x0007e5d2) blid2_search_pane_g1

0x8f93,	// (0x0007e5ea) blid2_search_pane_t1_ParamLimits

0x8f93,	// (0x0007e5ea) blid2_search_pane_t1

0x8fa5,	// (0x0007e5fc) aid_size_cell_blid2_gps_ParamLimits

0x8fa5,	// (0x0007e5fc) aid_size_cell_blid2_gps

0x8fbd,	// (0x0007e614) blid2_gps_pane_g1_ParamLimits

0x8fbd,	// (0x0007e614) blid2_gps_pane_g1

0x8fd1,	// (0x0007e628) grid_blid2_satellite_pane_ParamLimits

0x8fd1,	// (0x0007e628) grid_blid2_satellite_pane

0x8fe9,	// (0x0007e640) blid2_navig_pane_g1_ParamLimits

0x8fe9,	// (0x0007e640) blid2_navig_pane_g1

0x8ff5,	// (0x0007e64c) blid2_navig_pane_t1_ParamLimits

0x8ff5,	// (0x0007e64c) blid2_navig_pane_t1

0x9010,	// (0x0007e667) blid2_navig_pane_t2_ParamLimits

0x9010,	// (0x0007e667) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0008515a) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0008515a) blid2_navig_pane_t

0x902b,	// (0x0007e682) blid2_navig_ring_pane_ParamLimits

0x902b,	// (0x0007e682) blid2_navig_ring_pane

0x9046,	// (0x0007e69d) blid2_speed_pane_ParamLimits

0x9046,	// (0x0007e69d) blid2_speed_pane

0x9052,	// (0x0007e6a9) blid2_tripm_pane_g1_ParamLimits

0x9052,	// (0x0007e6a9) blid2_tripm_pane_g1

0x906d,	// (0x0007e6c4) blid2_tripm_pane_g2_ParamLimits

0x906d,	// (0x0007e6c4) blid2_tripm_pane_g2

0x9081,	// (0x0007e6d8) blid2_tripm_pane_g3_ParamLimits

0x9081,	// (0x0007e6d8) blid2_tripm_pane_g3

0x9095,	// (0x0007e6ec) blid2_tripm_pane_g4_ParamLimits

0x9095,	// (0x0007e6ec) blid2_tripm_pane_g4

0x90a9,	// (0x0007e700) blid2_tripm_pane_g5_ParamLimits

0x90a9,	// (0x0007e700) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0008515f) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0008515f) blid2_tripm_pane_g

0x90cf,	// (0x0007e726) blid2_tripm_pane_t1_ParamLimits

0x90cf,	// (0x0007e726) blid2_tripm_pane_t1

0x90ea,	// (0x0007e741) blid2_tripm_pane_t2_ParamLimits

0x90ea,	// (0x0007e741) blid2_tripm_pane_t2

0x9103,	// (0x0007e75a) blid2_tripm_pane_t3_ParamLimits

0x9103,	// (0x0007e75a) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0008516c) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0008516c) blid2_tripm_pane_t

0x914a,	// (0x0007e7a1) cell_blid2_satellite_pane_ParamLimits

0x914a,	// (0x0007e7a1) cell_blid2_satellite_pane

0x9166,	// (0x0007e7bd) cell_blid2_satellite_pane_g1

0xc50f,	// (0x00081b66) cell_blid2_satellite_pane_t1

0xb35d,	// (0x000809b4) blid2_speed_pane_g1

0xc51d,	// (0x00081b74) blid2_speed_pane_t1

0xc52b,	// (0x00081b82) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x00085175) blid2_speed_pane_t

0xb35d,	// (0x000809b4) blid2_navig_ring_pane_g1

0x916f,	// (0x0007e7c6) blid2_navig_ring_pane_g2

0x9177,	// (0x0007e7ce) blid2_navig_ring_pane_g3

0x917f,	// (0x0007e7d6) blid2_navig_ring_pane_g4

0x9187,	// (0x0007e7de) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0008517a) blid2_navig_ring_pane_g

0xaa80,	// (0x000800d7) bg_popup_window_pane_cp011

0xc539,	// (0x00081b90) popup_blid2_search_window_g1

0xc541,	// (0x00081b98) popup_blid2_search_window_t1

0xc54f,	// (0x00081ba6) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x00085185) popup_blid2_search_window_t

0xebe1,	// (0x00084238) main_browser_pane_g1

0xe8e8,	// (0x00083f3f) main_browser_pane_ParamLimits

0xaaf9,	// (0x00080150) bg_button_pane_cp011_ParamLimits

0x82c6,	// (0x0007d91d) cell_vitu2_function_pane_g1_ParamLimits

0x59e8,	// (0x0007b03f) bg_popup_sub_pane_cp22_ParamLimits

0x0dc4,	// (0x0007641b) input_focus_pane_cp08_ParamLimits

0x8baa,	// (0x0007e201) popup_vitu2_query_button_pane_ParamLimits

0x8baa,	// (0x0007e201) popup_vitu2_query_button_pane

0x0ddb,	// (0x00076432) popup_vitu2_query_input_button_pane

0xc0ec,	// (0x00081743) popup_vitu2_query_window_g1_ParamLimits

0x0de5,	// (0x0007643c) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x00085086) popup_vitu2_query_window_g_ParamLimits

0xaa80,	// (0x000800d7) bg_button_pane_cp026

0x918f,	// (0x0007e7e6) popup_vitu2_query_input_button_pane_g1

0xaa80,	// (0x000800d7) bg_button_pane_cp025

0xc55d,	// (0x00081bb4) popup_vitu2_query_button_pane_t1

0x68ed,	// (0x0007bf44) main_mp3_pane_t6

0x68fb,	// (0x0007bf52) popup_slider_window_cp01

0xe0d6,	// (0x0008372d) cam4_battery_pane

0xe12f,	// (0x00083786) cam4_battery_pane_cp02

0x8ef4,	// (0x0007e54b) cam4_battery_pane_cp01

0xe1a1,	// (0x000837f8) cam4_battery_pane_cp03

0xb35d,	// (0x000809b4) cam4_battery_pane_g1

0xc56b,	// (0x00081bc2) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0008518a) cam4_battery_pane_g

0xb223,	// (0x0008087a) popup_blid_sat_info2_window_t11

0x35ad,	// (0x00078c04) aid_size_touch_mv_arrow_left_ParamLimits

0x35d6,	// (0x00078c2d) aid_size_touch_mv_arrow_right_ParamLimits

0x361e,	// (0x00078c75) navi_pane_g1_ParamLimits

0x362a,	// (0x00078c81) navi_pane_g2_ParamLimits

0x3658,	// (0x00078caf) navi_pane_g3_ParamLimits

0xf409,	// (0x00084a60) navi_pane_g_ParamLimits

0x3716,	// (0x00078d6d) navi_pane_mv_t1_ParamLimits

0x74e3,	// (0x0007cb3a) grid_imed_effect_pane_ParamLimits

0x235c,	// (0x000779b3) aid_placing_vt_slider_lsc

0xeb2e,	// (0x00084185) aid_placing_vt_slider_prt

0xaaf9,	// (0x00080150) bg_tb_trans_pane_cp01_ParamLimits

0xb4ad,	// (0x00080b04) popup_image_details_window_g1_ParamLimits

0xb4c0,	// (0x00080b17) popup_image_details_window_g2_ParamLimits

0xb4d5,	// (0x00080b2c) popup_image_details_window_g3_ParamLimits

0xb4d5,	// (0x00080b2c) popup_image_details_window_g3

0xf735,	// (0x00084d8c) popup_image_details_window_g_ParamLimits

0xb4e9,	// (0x00080b40) popup_image_details_window_t1_ParamLimits

0xb4fb,	// (0x00080b52) popup_image_details_window_t2_ParamLimits

0xb514,	// (0x00080b6b) popup_image_details_window_t3_ParamLimits

0xb528,	// (0x00080b7f) popup_image_details_window_t4_ParamLimits

0xb543,	// (0x00080b9a) popup_image_details_window_t5_ParamLimits

0xf73c,	// (0x00084d93) popup_image_details_window_t_ParamLimits

0x8e00,	// (0x0007e457) cl_header_name_pane_ParamLimits

0x8e00,	// (0x0007e457) cl_header_name_pane

0x9197,	// (0x0007e7ee) cl_header_name_pane_t1_ParamLimits

0x9197,	// (0x0007e7ee) cl_header_name_pane_t1

0x91b8,	// (0x0007e80f) cl_header_name_pane_t2_ParamLimits

0x91b8,	// (0x0007e80f) cl_header_name_pane_t2

0x91fa,	// (0x0007e851) cl_header_name_pane_t3_ParamLimits

0x91fa,	// (0x0007e851) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0008518f) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0008518f) cl_header_name_pane_t

0x36e7,	// (0x00078d3e) navi_pane_mv_g2_ParamLimits

0xbdef,	// (0x00081446) field_vitu2_entry_pane_g1_ParamLimits

0xbdfb,	// (0x00081452) field_vitu2_entry_pane_g2_ParamLimits

0xbe07,	// (0x0008145e) field_vitu2_entry_pane_g3_ParamLimits

0xbe07,	// (0x0008145e) field_vitu2_entry_pane_g3

0xf92e,	// (0x00084f85) field_vitu2_entry_pane_g_ParamLimits

0x8242,	// (0x0007d899) cell_vitu2_itu_pane_g1_ParamLimits

0x8252,	// (0x0007d8a9) cell_vitu2_itu_pane_g2_ParamLimits

0x8252,	// (0x0007d8a9) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x00084f91) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x00084f91) cell_vitu2_itu_pane_g

0xaaf9,	// (0x00080150) bg_vkb2_func_pane_cp05_ParamLimits

0xaaf9,	// (0x00080150) bg_vkb2_func_pane_cp05

0xaaf9,	// (0x00080150) bg_vkb2_func_pane_cp03

0xaaf9,	// (0x00080150) bg_vkb2_func_pane_cp04

0xaaf9,	// (0x00080150) bg_vkb2_func_pane_cp10_ParamLimits

0xaaf9,	// (0x00080150) bg_vkb2_func_pane_cp10

0x0f04,	// (0x0007655b) bg_vkb2_func_pane_cp08

0x8daa,	// (0x0007e401) bg_vkb2_func_pane_cp06

0x8db8,	// (0x0007e40f) bg_vkb2_func_pane_cp07

0xc461,	// (0x00081ab8) bg_vkb2_func_pane_cp11_ParamLimits

0xc461,	// (0x00081ab8) bg_vkb2_func_pane_cp11

0xc476,	// (0x00081acd) bg_vkb2_func_pane_cp12_ParamLimits

0xc476,	// (0x00081acd) bg_vkb2_func_pane_cp12

0xaa80,	// (0x000800d7) bg_vkb2_func_pane_cp09

0xbe44,	// (0x0008149b) bg_vkb2_func_pane_g1

0xecf2,	// (0x00084349) bg_vkb2_func_pane_g2

0xbe4c,	// (0x000814a3) bg_vkb2_func_pane_g3

0xbe54,	// (0x000814ab) bg_vkb2_func_pane_g4

0xc097,	// (0x000816ee) bg_vkb2_func_pane_g5

0xbe6c,	// (0x000814c3) bg_vkb2_func_pane_g6

0xbe74,	// (0x000814cb) bg_vkb2_func_pane_g7

0xbe64,	// (0x000814bb) bg_vkb2_func_pane_g8

0xecd2,	// (0x00084329) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x00085196) bg_vkb2_func_pane_g

0x90bd,	// (0x0007e714) blid2_tripm_pane_g6_ParamLimits

0x90bd,	// (0x0007e714) blid2_tripm_pane_g6

0xbc5f,	// (0x000812b6) mp4_progress_pane_g1

0x9136,	// (0x0007e78d) blid2_tripm_values_pane_ParamLimits

0x9136,	// (0x0007e78d) blid2_tripm_values_pane

0x922b,	// (0x0007e882) blid2_tripm_values_pane_t1

0x9239,	// (0x0007e890) blid2_tripm_values_pane_t2

0x9247,	// (0x0007e89e) blid2_tripm_values_pane_t3

0x9255,	// (0x0007e8ac) blid2_tripm_values_pane_t4

0x9263,	// (0x0007e8ba) blid2_tripm_values_pane_t5

0x9271,	// (0x0007e8c8) blid2_tripm_values_pane_t6

0x927f,	// (0x0007e8d6) blid2_tripm_values_pane_t7

0x928d,	// (0x0007e8e4) blid2_tripm_values_pane_t8

0x929b,	// (0x0007e8f2) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x000851a9) blid2_tripm_values_pane_t

0x239c,	// (0x000779f3) call_video_pane_t1_ParamLimits

0x23b6,	// (0x00077a0d) call_video_pane_t2_ParamLimits

0xf292,	// (0x000848e9) call_video_pane_t_ParamLimits

0x0bd8,	// (0x0007622f) msg_header_pane_g1_ParamLimits

0x3dc3,	// (0x0007941a) msg_header_pane_g2_ParamLimits

0x3dc3,	// (0x0007941a) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00084b03) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00084b03) msg_header_pane_g

0xe8e8,	// (0x00083f3f) main_clock2_pane_ParamLimits

0x71ec,	// (0x0007c843) grid_clock2_toolbar_pane_ParamLimits

0x71ec,	// (0x0007c843) grid_clock2_toolbar_pane

0x71ec,	// (0x0007c843) listscroll_clock2_pane_ParamLimits

0x71ec,	// (0x0007c843) listscroll_clock2_pane

0x72d5,	// (0x0007c92c) main_clock2_pane_t3_ParamLimits

0x72d5,	// (0x0007c92c) main_clock2_pane_t3

0x72f0,	// (0x0007c947) main_clock2_pane_t4_ParamLimits

0x72f0,	// (0x0007c947) main_clock2_pane_t4

0xc575,	// (0x00081bcc) cell_clock2_toolbar_pane

0xc57d,	// (0x00081bd4) cell_clock2_toolbar_pane_cp01

0xc57d,	// (0x00081bd4) cell_clock2_toolbar_pane_cp02

0xc585,	// (0x00081bdc) cell_clock2_toolbar_pane_cp03

0xc58d,	// (0x00081be4) list_clock2_pane

0x3337,	// (0x0007898e) scroll_pane_cp10

0xc595,	// (0x00081bec) list_single_clock2_pane_ParamLimits

0xc595,	// (0x00081bec) list_single_clock2_pane

0x3788,	// (0x00078ddf) list_highlight_pane_cp08

0xc5a2,	// (0x00081bf9) list_single_clock2_pane_t1

0xc5b0,	// (0x00081c07) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x000851bc) list_single_clock2_pane_t

0xaa80,	// (0x000800d7) bg_button_pane_cp10

0xc5be,	// (0x00081c15) cell_clock2_toolbar_pane_g1

0x3dd7,	// (0x0007942e) aid_main_viewer_pane_g1_ParamLimits

0x3dd7,	// (0x0007942e) aid_main_viewer_pane_g1

0x3de5,	// (0x0007943c) aid_main_viewer_pane_g2_ParamLimits

0x3de5,	// (0x0007943c) aid_main_viewer_pane_g2

0x3df3,	// (0x0007944a) aid_main_viewer_pane_g3_ParamLimits

0x3df3,	// (0x0007944a) aid_main_viewer_pane_g3

0x3e02,	// (0x00079459) aid_main_viewer_pane_g4_ParamLimits

0x3e02,	// (0x00079459) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00084b14) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00084b14) aid_main_viewer_pane_g

0x59d4,	// (0x0007b02b) main_calc_pane_ParamLimits

0x59f6,	// (0x0007b04d) main_dialer2_pane_ParamLimits

0xaa80,	// (0x000800d7) main_cam6_pane

0xaa80,	// (0x000800d7) main_vid6_pane

0x71f8,	// (0x0007c84f) listscroll_gen_pane_cp06_ParamLimits

0x71f8,	// (0x0007c84f) listscroll_gen_pane_cp06

0x730b,	// (0x0007c962) main_clock2_pane_t5_ParamLimits

0x730b,	// (0x0007c962) main_clock2_pane_t5

0x7368,	// (0x0007c9bf) aid_call2_pane_cp10_ParamLimits

0x737a,	// (0x0007c9d1) aid_call_pane_cp10_ParamLimits

0x3538,	// (0x00078b8f) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3538,	// (0x00078b8f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x738c,	// (0x0007c9e3) popup_clock_analogue_window_cp10_g3_ParamLimits

0x738c,	// (0x0007c9e3) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3538,	// (0x00078b8f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ec,	// (0x00084e43) popup_clock_analogue_window_cp10_g_ParamLimits

0x73a2,	// (0x0007c9f9) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7a49,	// (0x0007d0a0) cell_dialer2_keypad_pane_g2_ParamLimits

0x7a49,	// (0x0007d0a0) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x00084f24) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x00084f24) cell_dialer2_keypad_pane_g

0x7a65,	// (0x0007d0bc) cell_dialer2_keypad_pane_t1

0x85f1,	// (0x0007dc48) main_cset_text2_pane_ParamLimits

0x85f1,	// (0x0007dc48) main_cset_text2_pane

0xc2e4,	// (0x0008193b) area_vitu2_query_pane_g1_ParamLimits

0x0ec9,	// (0x00076520) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x000850d9) area_vitu2_query_pane_g_ParamLimits

0xc368,	// (0x000819bf) area_vitu2_query_pane_t7_ParamLimits

0xc368,	// (0x000819bf) area_vitu2_query_pane_t7

0x8daa,	// (0x0007e401) bg_button_pane_cp018_ParamLimits

0x8db8,	// (0x0007e40f) bg_button_pane_cp021_ParamLimits

0x0f04,	// (0x0007655b) bg_button_pane_cp022_ParamLimits

0x0f04,	// (0x0007655b) bg_vkb2_func_pane_cp08_ParamLimits

0x8daa,	// (0x0007e401) bg_vkb2_func_pane_cp06_ParamLimits

0x8db8,	// (0x0007e40f) bg_vkb2_func_pane_cp07_ParamLimits

0x0f15,	// (0x0007656c) input_focus_pane_cp09_ParamLimits

0xe249,	// (0x000838a0) cam6_autofocus_pane_ParamLimits

0xe249,	// (0x000838a0) cam6_autofocus_pane

0x92a9,	// (0x0007e900) cam6_image_uncrop_pane_ParamLimits

0x92a9,	// (0x0007e900) cam6_image_uncrop_pane

0x92b8,	// (0x0007e90f) cam6_indi_pane_ParamLimits

0x92b8,	// (0x0007e90f) cam6_indi_pane

0x92ce,	// (0x0007e925) cam6_mode_pane_ParamLimits

0x92ce,	// (0x0007e925) cam6_mode_pane

0x92e0,	// (0x0007e937) cam6_timer_pane_ParamLimits

0x92e0,	// (0x0007e937) cam6_timer_pane

0x92ec,	// (0x0007e943) cam6_zoom_pane_ParamLimits

0x92ec,	// (0x0007e943) cam6_zoom_pane

0x92fa,	// (0x0007e951) cam6_mode_pane_g1_ParamLimits

0x92fa,	// (0x0007e951) cam6_mode_pane_g1

0x930a,	// (0x0007e961) cam6_mode_pane_g2_ParamLimits

0x930a,	// (0x0007e961) cam6_mode_pane_g2

0x931a,	// (0x0007e971) cam6_mode_pane_g3_ParamLimits

0x931a,	// (0x0007e971) cam6_mode_pane_g3

0x932a,	// (0x0007e981) cam6_mode_pane_g4_ParamLimits

0x932a,	// (0x0007e981) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x000851c1) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x000851c1) cam6_mode_pane_g

0xc5c6,	// (0x00081c1d) bg_tb_trans_pane_cp08_ParamLimits

0xc5c6,	// (0x00081c1d) bg_tb_trans_pane_cp08

0xc5d4,	// (0x00081c2b) cam6_battery_pane_ParamLimits

0xc5d4,	// (0x00081c2b) cam6_battery_pane

0xc5ea,	// (0x00081c41) cam6_indi_pane_g1_ParamLimits

0xc5ea,	// (0x00081c41) cam6_indi_pane_g1

0xc5fc,	// (0x00081c53) cam6_indi_pane_g2_ParamLimits

0xc5fc,	// (0x00081c53) cam6_indi_pane_g2

0xc60e,	// (0x00081c65) cam6_indi_pane_g3_ParamLimits

0xc60e,	// (0x00081c65) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x000851ca) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x000851ca) cam6_indi_pane_g

0xc620,	// (0x00081c77) cam6_indi_pane_t1_ParamLimits

0xc620,	// (0x00081c77) cam6_indi_pane_t1

0x8014,	// (0x0007d66b) cam6_autofocus_pane_g1

0x801c,	// (0x0007d673) cam6_autofocus_pane_g2

0x8024,	// (0x0007d67b) cam6_autofocus_pane_g3

0x802c,	// (0x0007d683) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x000851d1) cam6_autofocus_pane_g

0xc646,	// (0x00081c9d) cam6_timer_pane_g1

0xc64e,	// (0x00081ca5) cam6_timer_pane_t1

0xc65c,	// (0x00081cb3) cam6_zoom_cont_pane

0xc664,	// (0x00081cbb) cam6_zoom_pane_g1

0xc66c,	// (0x00081cc3) cam6_zoom_pane_g2

0x933a,	// (0x0007e991) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x000851da) cam6_zoom_pane_g

0xb35d,	// (0x000809b4) cam6_battery_pane_g1

0xb35d,	// (0x000809b4) cam6_battery_pane_g2

0x0001,

0xf6f9,	// (0x00084d50) cam6_battery_pane_g

0xc674,	// (0x00081ccb) cam6_zoom_cont_pane_g1

0xc67d,	// (0x00081cd4) cam6_zoom_cont_pane_g2

0xc686,	// (0x00081cdd) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x000851e1) cam6_zoom_cont_pane_g

0x9357,	// (0x0007e9ae) cam6_mode_pane_cp_ParamLimits

0x9357,	// (0x0007e9ae) cam6_mode_pane_cp

0x92ec,	// (0x0007e943) cam6_zoom_pane_cp_ParamLimits

0x92ec,	// (0x0007e943) cam6_zoom_pane_cp

0x9369,	// (0x0007e9c0) vid6_image_uncrop_cif_pane_ParamLimits

0x9369,	// (0x0007e9c0) vid6_image_uncrop_cif_pane

0x9379,	// (0x0007e9d0) vid6_image_uncrop_nhd_pane_ParamLimits

0x9379,	// (0x0007e9d0) vid6_image_uncrop_nhd_pane

0x92a9,	// (0x0007e900) vid6_image_uncrop_vga_pane_ParamLimits

0x92a9,	// (0x0007e900) vid6_image_uncrop_vga_pane

0x9388,	// (0x0007e9df) vid6_image_uncrop_wvga_pane_ParamLimits

0x9388,	// (0x0007e9df) vid6_image_uncrop_wvga_pane

0x9397,	// (0x0007e9ee) vid6_indi_pane_ParamLimits

0x9397,	// (0x0007e9ee) vid6_indi_pane

0xc5c6,	// (0x00081c1d) bg_tb_trans_pane_cp09_ParamLimits

0xc5c6,	// (0x00081c1d) bg_tb_trans_pane_cp09

0xc69e,	// (0x00081cf5) cam6_battery_pane_cp_ParamLimits

0xc69e,	// (0x00081cf5) cam6_battery_pane_cp

0xc6aa,	// (0x00081d01) vid6_indi_pane_g1_ParamLimits

0xc6aa,	// (0x00081d01) vid6_indi_pane_g1

0xc6bc,	// (0x00081d13) vid6_indi_pane_g2_ParamLimits

0xc6bc,	// (0x00081d13) vid6_indi_pane_g2

0xc6ce,	// (0x00081d25) vid6_indi_pane_g3_ParamLimits

0xc6ce,	// (0x00081d25) vid6_indi_pane_g3

0xc6e5,	// (0x00081d3c) vid6_indi_pane_g4_ParamLimits

0xc6e5,	// (0x00081d3c) vid6_indi_pane_g4

0xc6fc,	// (0x00081d53) vid6_indi_pane_g5_ParamLimits

0xc6fc,	// (0x00081d53) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x000851e8) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x000851e8) vid6_indi_pane_g

0xc716,	// (0x00081d6d) vid6_indi_pane_t1_ParamLimits

0xc716,	// (0x00081d6d) vid6_indi_pane_t1

0xc72c,	// (0x00081d83) vid6_indi_pane_t2_ParamLimits

0xc72c,	// (0x00081d83) vid6_indi_pane_t2

0xc754,	// (0x00081dab) vid6_indi_pane_t3_ParamLimits

0xc754,	// (0x00081dab) vid6_indi_pane_t3

0xc77c,	// (0x00081dd3) vid6_indi_pane_t4_ParamLimits

0xc77c,	// (0x00081dd3) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x000851f3) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x000851f3) vid6_indi_pane_t

0xc7a0,	// (0x00081df7) wait_bar_pane_cp08

0x93af,	// (0x0007ea06) main_cset_text2_pane_t1_ParamLimits

0x93af,	// (0x0007ea06) main_cset_text2_pane_t1

0x9342,	// (0x0007e999) listscroll_gen_pane_cp06_t1_ParamLimits

0x9342,	// (0x0007e999) listscroll_gen_pane_cp06_t1

0xaa80,	// (0x000800d7) main_cam6_set_pane

0xb58d,	// (0x00080be4) bg_tb_trans_pane_cp06_ParamLimits

0xe0de,	// (0x00083735) cam4_indicators_pane_g1_ParamLimits

0xe0eb,	// (0x00083742) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x00084f61) cam4_indicators_pane_g_ParamLimits

0xe10b,	// (0x00083762) cam4_indicators_pane_t1_ParamLimits

0xbdc8,	// (0x0008141f) bg_tb_trans_pane_cp07_ParamLimits

0x7fc3,	// (0x0007d61a) vid4_indicators_pane_g1_ParamLimits

0x7fd0,	// (0x0007d627) vid4_indicators_pane_g2_ParamLimits

0x7fdd,	// (0x0007d634) vid4_indicators_pane_g3_ParamLimits

0x7fea,	// (0x0007d641) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x00084f73) vid4_indicators_pane_g_ParamLimits

0x8002,	// (0x0007d659) vid4_indicators_pane_t1_ParamLimits

0xe1a9,	// (0x00083800) vid4_progress_pane_g1_ParamLimits

0xe1b5,	// (0x0008380c) vid4_progress_pane_g2_ParamLimits

0xe1c1,	// (0x00083818) vid4_progress_pane_g3_ParamLimits

0xe1d0,	// (0x00083827) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x00085124) vid4_progress_pane_g_ParamLimits

0xe1ee,	// (0x00083845) vid4_progress_pane_t1_ParamLimits

0xe204,	// (0x0008385b) vid4_progress_pane_t2_ParamLimits

0xe21a,	// (0x00083871) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0008512f) vid4_progress_pane_t_ParamLimits

0xe22f,	// (0x00083886) wait_bar_pane_cp07_ParamLimits

0x93d0,	// (0x0007ea27) main_cam6_set_pane_g2_ParamLimits

0x93d0,	// (0x0007ea27) main_cam6_set_pane_g2

0x93f6,	// (0x0007ea4d) main_cset6_listscroll_pane_ParamLimits

0x93f6,	// (0x0007ea4d) main_cset6_listscroll_pane

0x9414,	// (0x0007ea6b) main_cset6_slider_pane_ParamLimits

0x9414,	// (0x0007ea6b) main_cset6_slider_pane

0x942a,	// (0x0007ea81) main_cset6_text2_pane_ParamLimits

0x942a,	// (0x0007ea81) main_cset6_text2_pane

0xc7af,	// (0x00081e06) main_cset6_text_pane

0xc7b7,	// (0x00081e0e) main_cset_list_pane_copy1_ParamLimits

0xc7b7,	// (0x00081e0e) main_cset_list_pane_copy1

0xc7c7,	// (0x00081e1e) scroll_pane_cp028_copy1

0x9438,	// (0x0007ea8f) cset_list_set_pane_copy1

0x944c,	// (0x0007eaa3) aid_position_infowindow_above_copy1

0x9454,	// (0x0007eaab) aid_position_infowindow_below_copy1

0x945c,	// (0x0007eab3) cset_list_set_pane_g1_copy1

0xc7d0,	// (0x00081e27) cset_list_set_pane_g3_copy1_ParamLimits

0xc7d0,	// (0x00081e27) cset_list_set_pane_g3_copy1

0xc7df,	// (0x00081e36) cset_list_set_pane_t1_copy1_ParamLimits

0xc7df,	// (0x00081e36) cset_list_set_pane_t1_copy1

0xaaf9,	// (0x00080150) list_highlight_pane_cp021_copy1_ParamLimits

0xaaf9,	// (0x00080150) list_highlight_pane_cp021_copy1

0xc7f4,	// (0x00081e4b) cset6_slider_pane_ParamLimits

0xc7f4,	// (0x00081e4b) cset6_slider_pane

0xc820,	// (0x00081e77) main_cset6_slider_pane_g1_ParamLimits

0xc820,	// (0x00081e77) main_cset6_slider_pane_g1

0x9464,	// (0x0007eabb) main_cset6_slider_pane_g2_ParamLimits

0x9464,	// (0x0007eabb) main_cset6_slider_pane_g2

0xc848,	// (0x00081e9f) main_cset6_slider_pane_g3_ParamLimits

0xc848,	// (0x00081e9f) main_cset6_slider_pane_g3

0x948c,	// (0x0007eae3) main_cset6_slider_pane_g4_ParamLimits

0x948c,	// (0x0007eae3) main_cset6_slider_pane_g4

0x9498,	// (0x0007eaef) main_cset6_slider_pane_g5_ParamLimits

0x9498,	// (0x0007eaef) main_cset6_slider_pane_g5

0xbf77,	// (0x000815ce) main_cset6_slider_pane_g7_ParamLimits

0xbf77,	// (0x000815ce) main_cset6_slider_pane_g7

0xbf83,	// (0x000815da) main_cset6_slider_pane_g8_ParamLimits

0xbf83,	// (0x000815da) main_cset6_slider_pane_g8

0x86a0,	// (0x0007dcf7) main_cset6_slider_pane_g9_ParamLimits

0x86a0,	// (0x0007dcf7) main_cset6_slider_pane_g9

0x86ac,	// (0x0007dd03) main_cset6_slider_pane_g10_ParamLimits

0x86ac,	// (0x0007dd03) main_cset6_slider_pane_g10

0x86b8,	// (0x0007dd0f) main_cset6_slider_pane_g11_ParamLimits

0x86b8,	// (0x0007dd0f) main_cset6_slider_pane_g11

0x86c4,	// (0x0007dd1b) main_cset6_slider_pane_g12_ParamLimits

0x86c4,	// (0x0007dd1b) main_cset6_slider_pane_g12

0x86d0,	// (0x0007dd27) main_cset6_slider_pane_g13_ParamLimits

0x86d0,	// (0x0007dd27) main_cset6_slider_pane_g13

0x86dc,	// (0x0007dd33) main_cset6_slider_pane_g14_ParamLimits

0x86dc,	// (0x0007dd33) main_cset6_slider_pane_g14

0x94a6,	// (0x0007eafd) main_cset6_slider_pane_g15_ParamLimits

0x94a6,	// (0x0007eafd) main_cset6_slider_pane_g15

0x8700,	// (0x0007dd57) main_cset6_slider_pane_g16_ParamLimits

0x8700,	// (0x0007dd57) main_cset6_slider_pane_g16

0x870e,	// (0x0007dd65) main_cset6_slider_pane_g17_ParamLimits

0x870e,	// (0x0007dd65) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x000851fc) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x000851fc) main_cset6_slider_pane_g

0xc854,	// (0x00081eab) main_cset6_slider_pane_t1_ParamLimits

0xc854,	// (0x00081eab) main_cset6_slider_pane_t1

0x94d6,	// (0x0007eb2d) main_cset6_slider_pane_t2_ParamLimits

0x94d6,	// (0x0007eb2d) main_cset6_slider_pane_t2

0x9501,	// (0x0007eb58) main_cset6_slider_pane_t3_ParamLimits

0x9501,	// (0x0007eb58) main_cset6_slider_pane_t3

0x952c,	// (0x0007eb83) main_cset6_slider_pane_t4_ParamLimits

0x952c,	// (0x0007eb83) main_cset6_slider_pane_t4

0x9559,	// (0x0007ebb0) main_cset6_slider_pane_t5_ParamLimits

0x9559,	// (0x0007ebb0) main_cset6_slider_pane_t5

0xc895,	// (0x00081eec) main_cset6_slider_pane_t7_ParamLimits

0xc895,	// (0x00081eec) main_cset6_slider_pane_t7

0x9586,	// (0x0007ebdd) main_cset6_slider_pane_t8_ParamLimits

0x9586,	// (0x0007ebdd) main_cset6_slider_pane_t8

0x95aa,	// (0x0007ec01) main_cset6_slider_pane_t9_ParamLimits

0x95aa,	// (0x0007ec01) main_cset6_slider_pane_t9

0x95ce,	// (0x0007ec25) main_cset6_slider_pane_t10_ParamLimits

0x95ce,	// (0x0007ec25) main_cset6_slider_pane_t10

0x95f2,	// (0x0007ec49) main_cset6_slider_pane_t11_ParamLimits

0x95f2,	// (0x0007ec49) main_cset6_slider_pane_t11

0xc8cb,	// (0x00081f22) main_cset6_slider_pane_t14_ParamLimits

0xc8cb,	// (0x00081f22) main_cset6_slider_pane_t14

0xc904,	// (0x00081f5b) main_cset6_slider_pane_t15_ParamLimits

0xc904,	// (0x00081f5b) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x00085221) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x00085221) main_cset6_slider_pane_t

0xc03b,	// (0x00081692) cset_slider_pane_g1_copy1

0xc044,	// (0x0008169b) cset_slider_pane_g2_copy1

0xc04d,	// (0x000816a4) cset_slider_pane_g3_copy1

0xaa80,	// (0x000800d7) bg_popup_sub_pane_cp011_copy1

0xc0f8,	// (0x0008174f) main_cset_text_pane_g1_copy1

0xc100,	// (0x00081757) main_cset_text_pane_t1_copy1

0xc10e,	// (0x00081765) main_cset_text_pane_t2_copy1

0xc11c,	// (0x00081773) main_cset_text_pane_t3_copy1

0xc12a,	// (0x00081781) main_cset_text_pane_t4_copy1

0xc138,	// (0x0008178f) main_cset_text_pane_t5_copy1

0xc146,	// (0x0008179d) main_cset_text_pane_t6_copy1

0xc154,	// (0x000817ab) main_cset_text_pane_t7_copy1

0x93af,	// (0x0007ea06) main_cset_text2_pane_t1_copy1

0xaa80,	// (0x000800d7) main_ncimui_pane

0x5cc7,	// (0x0007b31e) popup_query_ncimui_window_ParamLimits

0x5cc7,	// (0x0007b31e) popup_query_ncimui_window

0xb62e,	// (0x00080c85) field_cale_ev2_pane_g4_ParamLimits

0xb62e,	// (0x00080c85) field_cale_ev2_pane_g4

0x7914,	// (0x0007cf6b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7914,	// (0x0007cf6b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x00084eff) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x00084eff) cell_video_dialer_keypad_pane_g

0x792c,	// (0x0007cf83) cell_video_dialer_keypad_pane_t1

0xaa80,	// (0x000800d7) bg_popup_window_pane_cp012

0x318c,	// (0x000787e3) heading_pane_cp06

0xca2c,	// (0x00082083) ncim_query_content_pane

0xaa80,	// (0x000800d7) bg_popup_heading_pane_cp01

0xca34,	// (0x0008208b) ncim_heading_pane_t1

0xca42,	// (0x00082099) ncim_indicator_popup_pane

0xca54,	// (0x000820ab) ncim_query_button_pane

0xca6a,	// (0x000820c1) ncim_query_content_pane_t1

0xca7c,	// (0x000820d3) ncim_query_content_pane_t2

0x0005,

0xfc09,	// (0x00085260) ncim_query_content_pane_t

0xcab6,	// (0x0008210d) ncim_query_list_pane

0xcac8,	// (0x0008211f) ncim_query_popup_pane

0xca42,	// (0x00082099) ncim_indicator_popup_pane_ParamLimits

0x9711,	// (0x0007ed68) ncim_query_content_pane_g1_ParamLimits

0x9711,	// (0x0007ed68) ncim_query_content_pane_g1

0xca6a,	// (0x000820c1) ncim_query_content_pane_t1_ParamLimits

0xca7c,	// (0x000820d3) ncim_query_content_pane_t2_ParamLimits

0x971d,	// (0x0007ed74) ncim_query_content_pane_t3_ParamLimits

0x971d,	// (0x0007ed74) ncim_query_content_pane_t3

0x9745,	// (0x0007ed9c) ncim_query_content_pane_t4_ParamLimits

0x9745,	// (0x0007ed9c) ncim_query_content_pane_t4

0x976d,	// (0x0007edc4) ncim_query_content_pane_t5_ParamLimits

0x976d,	// (0x0007edc4) ncim_query_content_pane_t5

0xca8e,	// (0x000820e5) ncim_query_content_pane_t6_ParamLimits

0xca8e,	// (0x000820e5) ncim_query_content_pane_t6

0xfc09,	// (0x00085260) ncim_query_content_pane_t_ParamLimits

0xcab6,	// (0x0008210d) ncim_query_list_pane_ParamLimits

0xcac8,	// (0x0008211f) ncim_query_popup_pane_ParamLimits

0xcadc,	// (0x00082133) wait_bar_pane_cp04

0xaa80,	// (0x000800d7) input_focus_pane_cp011

0xcae4,	// (0x0008213b) ncim_query_popup_pane_t1

0xcaf2,	// (0x00082149) ncim_list_query_list_pane_ParamLimits

0xcaf2,	// (0x00082149) ncim_list_query_list_pane

0xaa80,	// (0x000800d7) bg_button_pane_cp027

0xcb05,	// (0x0008215c) ncim_query_button_pane_g1

0xaa80,	// (0x000800d7) list_highlight_pane_cp012

0xcb0f,	// (0x00082166) ncim_list_query_list_pane_g1

0xcb17,	// (0x0008216e) ncim_list_query_list_pane_t1

0xe0fb,	// (0x00083752) cam4_indicators_pane_g3_ParamLimits

0xe0fb,	// (0x00083752) cam4_indicators_pane_g3

0x7ff6,	// (0x0007d64d) vid4_indicators_pane_g5_ParamLimits

0x7ff6,	// (0x0007d64d) vid4_indicators_pane_g5

0xe1df,	// (0x00083836) vid4_progress_pane_g5_ParamLimits

0xe1df,	// (0x00083836) vid4_progress_pane_g5

0x962a,	// (0x0007ec81) main_ncimui_pane_g1

0x9680,	// (0x0007ecd7) ncimui_group_query_pane_ParamLimits

0x9680,	// (0x0007ecd7) ncimui_group_query_pane

0x96bc,	// (0x0007ed13) ncimui_list_pane_ParamLimits

0x96bc,	// (0x0007ed13) ncimui_list_pane

0x96dd,	// (0x0007ed34) ncimui_text_pane_ParamLimits

0x96dd,	// (0x0007ed34) ncimui_text_pane

0x9795,	// (0x0007edec) ncimui_text_pane_t1_ParamLimits

0x9795,	// (0x0007edec) ncimui_text_pane_t1

0xcb25,	// (0x0008217c) ncimui_list_single_graphic_pane_ParamLimits

0xcb25,	// (0x0008217c) ncimui_list_single_graphic_pane

0x97b3,	// (0x0007ee0a) ncimui_query_pane_ParamLimits

0x97b3,	// (0x0007ee0a) ncimui_query_pane

0xaa80,	// (0x000800d7) list_highlight_pane_cp013

0xcb35,	// (0x0008218c) ncim_list_query_list_pane_t1_copy1

0xcb0f,	// (0x00082166) ncim_list_single_graphic_pane_g1

0xcb43,	// (0x0008219a) ncim_query_button_pane_cp01

0xcb4f,	// (0x000821a6) ncim_query_entry_pane_ParamLimits

0xcb4f,	// (0x000821a6) ncim_query_entry_pane

0xcb62,	// (0x000821b9) ncimui_query_pane_g1

0xcb6e,	// (0x000821c5) ncimui_query_pane_t1_ParamLimits

0xcb6e,	// (0x000821c5) ncimui_query_pane_t1

0xaaf9,	// (0x00080150) input_focus_pane_cp012

0xcb87,	// (0x000821de) ncim_query_entry_pane_t1

0xe8e8,	// (0x00083f3f) main_im_pane_ParamLimits

0xaaf9,	// (0x00080150) main_mobtv_pane_ParamLimits

0xaaf9,	// (0x00080150) main_mobtv_pane

0x94be,	// (0x0007eb15) main_cset6_slider_pane_g18_ParamLimits

0x94be,	// (0x0007eb15) main_cset6_slider_pane_g18

0x94ca,	// (0x0007eb21) main_cset6_slider_pane_g19_ParamLimits

0x94ca,	// (0x0007eb21) main_cset6_slider_pane_g19

0xe63b,	// (0x00083c92) bg_main_mobtv_pane_ParamLimits

0xe63b,	// (0x00083c92) bg_main_mobtv_pane

0x97c6,	// (0x0007ee1d) main_mobtv_info_pane

0x97d1,	// (0x0007ee28) main_mobtv_loading_pane_ParamLimits

0x97d1,	// (0x0007ee28) main_mobtv_loading_pane

0xcb99,	// (0x000821f0) main_mobtv_pg_channel_list_pane

0xcba3,	// (0x000821fa) main_mobtv_pg_hdr_pane

0x97de,	// (0x0007ee35) main_mobtv_programe_curr_pane_ParamLimits

0x97de,	// (0x0007ee35) main_mobtv_programe_curr_pane

0x97eb,	// (0x0007ee42) main_mobtv_programe_next_pane_ParamLimits

0x97eb,	// (0x0007ee42) main_mobtv_programe_next_pane

0xcbac,	// (0x00082203) popup_mobtv_noti_window

0xb35d,	// (0x000809b4) main_tv_pg_hdr_pane_g1

0xcbb6,	// (0x0008220d) main_tv_pg_hdr_pane_g2

0xcbbe,	// (0x00082215) main_tv_pg_hdr_pane_g3

0xcbc6,	// (0x0008221d) main_tv_pg_hdr_pane_g4

0xcbce,	// (0x00082225) main_tv_pg_hdr_pane_g5

0xcbd8,	// (0x0008222f) main_tv_pg_hdr_pane_g6

0xcbe2,	// (0x00082239) main_tv_pg_hdr_pane_g7

0xcbec,	// (0x00082243) main_tv_pg_hdr_pane_g8

0xcbf6,	// (0x0008224d) main_tv_pg_hdr_pane_g9

0xcc00,	// (0x00082257) main_tv_pg_hdr_pane_g10

0xcc0a,	// (0x00082261) main_tv_pg_hdr_pane_g11

0x000a,

0xfc16,	// (0x0008526d) main_tv_pg_hdr_pane_g

0xcc14,	// (0x0008226b) main_tv_pg_hdr_pane_t1

0xcc22,	// (0x00082279) main_tv_pg_hdr_pane_t2

0xcc30,	// (0x00082287) main_tv_pg_hdr_pane_t3

0xcc40,	// (0x00082297) main_tv_pg_hdr_pane_t4

0xcc50,	// (0x000822a7) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2d,	// (0x00085284) main_tv_pg_hdr_pane_t

0xcc60,	// (0x000822b7) single_mobtv_pg_channel_pane_ParamLimits

0xcc60,	// (0x000822b7) single_mobtv_pg_channel_pane

0xcc72,	// (0x000822c9) single_mobtv_pg_channel_table_pane

0xcc7b,	// (0x000822d2) single_mobtv_pg_channel_thumb_pane

0xcc84,	// (0x000822db) single_tv_pg_channel_pane_g1

0xcc8d,	// (0x000822e4) single_tv_pg_channel_pane_g2

0x0001,

0xfc38,	// (0x0008528f) single_tv_pg_channel_pane_g

0xb58d,	// (0x00080be4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xb58d,	// (0x00080be4) bg_single_mobtv_pg_channel_thumb_pane

0xcc96,	// (0x000822ed) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xcc96,	// (0x000822ed) single_mobtv_pg_channel_thumb_pane_g1

0xcca4,	// (0x000822fb) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xcca4,	// (0x000822fb) single_mobtv_pg_channel_thumb_pane_g2

0xccb0,	// (0x00082307) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xccb0,	// (0x00082307) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3d,	// (0x00085294) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3d,	// (0x00085294) single_mobtv_pg_channel_thumb_pane_g

0xccbc,	// (0x00082313) single_mobtv_pg_channel_thumb_pane_t1

0xccca,	// (0x00082321) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc44,	// (0x0008529b) single_mobtv_pg_channel_thumb_pane_t

0xb35d,	// (0x000809b4) bg_single_mobtv_pg_channel_table_pane_g1

0xb35d,	// (0x000809b4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6f9,	// (0x00084d50) bg_single_mobtv_pg_channel_table_pane_g

0xccd8,	// (0x0008232f) single_mobtv_pg_channel_table_pane_t1

0xcce6,	// (0x0008233d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc49,	// (0x000852a0) single_mobtv_pg_channel_table_pane_t

0x9800,	// (0x0007ee57) main_mobtv_info_pane_g1_ParamLimits

0x9800,	// (0x0007ee57) main_mobtv_info_pane_g1

0x981e,	// (0x0007ee75) main_mobtv_info_pane_t1_ParamLimits

0x981e,	// (0x0007ee75) main_mobtv_info_pane_t1

0x9896,	// (0x0007eeed) main_mobtv_info_pane_t2_ParamLimits

0x9896,	// (0x0007eeed) main_mobtv_info_pane_t2

0x0002,

0xfc53,	// (0x000852aa) main_mobtv_info_pane_t_ParamLimits

0xfc53,	// (0x000852aa) main_mobtv_info_pane_t

0x9927,	// (0x0007ef7e) wait_bar_pane_cp05

0x9939,	// (0x0007ef90) main_mobtv_loading_pane_g1_ParamLimits

0x9939,	// (0x0007ef90) main_mobtv_loading_pane_g1

0x994a,	// (0x0007efa1) main_mobtv_loading_pane_g2_ParamLimits

0x994a,	// (0x0007efa1) main_mobtv_loading_pane_g2

0x9956,	// (0x0007efad) main_mobtv_loading_pane_g3_ParamLimits

0x9956,	// (0x0007efad) main_mobtv_loading_pane_g3

0x0002,

0xfc5a,	// (0x000852b1) main_mobtv_loading_pane_g_ParamLimits

0xfc5a,	// (0x000852b1) main_mobtv_loading_pane_g

0xccf4,	// (0x0008234b) main_mobtv_loading_pane_t1_ParamLimits

0xccf4,	// (0x0008234b) main_mobtv_loading_pane_t1

0xcd0c,	// (0x00082363) main_mobtv_loading_pane_t2_ParamLimits

0xcd0c,	// (0x00082363) main_mobtv_loading_pane_t2

0x0001,

0xfc61,	// (0x000852b8) main_mobtv_loading_pane_t_ParamLimits

0xfc61,	// (0x000852b8) main_mobtv_loading_pane_t

0x9969,	// (0x0007efc0) wait_bar_pane_cp06_ParamLimits

0x9969,	// (0x0007efc0) wait_bar_pane_cp06

0xcd30,	// (0x00082387) main_mobtv_programe_curr_pane_t1

0xcd3e,	// (0x00082395) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc66,	// (0x000852bd) main_mobtv_programe_curr_pane_t

0xcd4c,	// (0x000823a3) main_mobtv_programe_next_pane_t1

0xcd5a,	// (0x000823b1) main_mobtv_programe_next_pane_t2

0xcd68,	// (0x000823bf) main_mobtv_programe_next_pane_t3

0x0002,

0xfc6b,	// (0x000852c2) main_mobtv_programe_next_pane_t

0xaa80,	// (0x000800d7) bg_popup_mobtv_noti_window_pane

0xcd76,	// (0x000823cd) popup_mobtv_noti_window_g1

0xcd7e,	// (0x000823d5) popup_mobtv_noti_window_t1

0xcd8c,	// (0x000823e3) popup_mobtv_noti_window_t2

0x0001,

0xfc72,	// (0x000852c9) popup_mobtv_noti_window_t

0xb35d,	// (0x000809b4) bg_popup_mobtv_noti_window_pane_g1

0xaa80,	// (0x000800d7) sc_clock_pane

0xaa80,	// (0x000800d7) main_fs_bigclock_pane

0x9120,	// (0x0007e777) blid2_tripm_pane_t4_ParamLimits

0x9120,	// (0x0007e777) blid2_tripm_pane_t4

0x9978,	// (0x0007efcf) sc_clock_pane_g1_ParamLimits

0x9978,	// (0x0007efcf) sc_clock_pane_g1

0x998a,	// (0x0007efe1) sc_clock_pane_t1_ParamLimits

0x998a,	// (0x0007efe1) sc_clock_pane_t1

0x99ae,	// (0x0007f005) sc_clock_pane_t2_ParamLimits

0x99ae,	// (0x0007f005) sc_clock_pane_t2

0x99c6,	// (0x0007f01d) sc_clock_pane_t3_ParamLimits

0x99c6,	// (0x0007f01d) sc_clock_pane_t3

0x0004,

0xfc77,	// (0x000852ce) sc_clock_pane_t_ParamLimits

0xfc77,	// (0x000852ce) sc_clock_pane_t

0xa287,	// (0x0007f8de) main_fs_bigclock_indicator_pane_ParamLimits

0xa287,	// (0x0007f8de) main_fs_bigclock_indicator_pane

0xb55d,	// (0x00080bb4) main_fs_bigclock_pane_g1_ParamLimits

0xb55d,	// (0x00080bb4) main_fs_bigclock_pane_g1

0xa293,	// (0x0007f8ea) main_fs_bigclock_pane_t1_ParamLimits

0xa293,	// (0x0007f8ea) main_fs_bigclock_pane_t1

0xa2a5,	// (0x0007f8fc) main_fs_bigclock_pane_t2_ParamLimits

0xa2a5,	// (0x0007f8fc) main_fs_bigclock_pane_t2

0xa2b9,	// (0x0007f910) main_fs_bigclock_pane_t3_ParamLimits

0xa2b9,	// (0x0007f910) main_fs_bigclock_pane_t3

0x0002,

0xfe76,	// (0x000854cd) main_fs_bigclock_pane_t_ParamLimits

0xfe76,	// (0x000854cd) main_fs_bigclock_pane_t

0xda1c,	// (0x00083073) main_fs_bigclock_indicator_pane_g1

0xca5c,	// (0x000820b3) ncim_query_content_pane_g2_ParamLimits

0xca5c,	// (0x000820b3) ncim_query_content_pane_g2

0x0001,

0xfc04,	// (0x0008525b) ncim_query_content_pane_g_ParamLimits

0xfc04,	// (0x0008525b) ncim_query_content_pane_g

0x99db,	// (0x0007f032) sc_clock_pane_t4_ParamLimits

0x99db,	// (0x0007f032) sc_clock_pane_t4

0xaaf9,	// (0x00080150) main_radioblah_pane

0xbd50,	// (0x000813a7) cell_call4_button_pane_t1_copy1_ParamLimits

0xbd50,	// (0x000813a7) cell_call4_button_pane_t1_copy1

0x9632,	// (0x0007ec89) main_ncimui_pane_t1_ParamLimits

0x9632,	// (0x0007ec89) main_ncimui_pane_t1

0x964c,	// (0x0007eca3) main_ncimui_pane_t2_ParamLimits

0x964c,	// (0x0007eca3) main_ncimui_pane_t2

0x0002,

0xfbfd,	// (0x00085254) main_ncimui_pane_t_ParamLimits

0xfbfd,	// (0x00085254) main_ncimui_pane_t

0xcec4,	// (0x0008251b) main_radioblah_anim_pane_ParamLimits

0xcec4,	// (0x0008251b) main_radioblah_anim_pane

0xced5,	// (0x0008252c) main_radioblah_info_pane_ParamLimits

0xced5,	// (0x0008252c) main_radioblah_info_pane

0xcee9,	// (0x00082540) main_radioblah_pane_t1_ParamLimits

0xcee9,	// (0x00082540) main_radioblah_pane_t1

0xcf05,	// (0x0008255c) main_radioblah_pane_t2_ParamLimits

0xcf05,	// (0x0008255c) main_radioblah_pane_t2

0x0003,

0xfc98,	// (0x000852ef) main_radioblah_pane_t_ParamLimits

0xfc98,	// (0x000852ef) main_radioblah_pane_t

0x9a89,	// (0x0007f0e0) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9a89,	// (0x0007f0e0) main_radioblah_rocker_ctrl_pane

0xcf4d,	// (0x000825a4) main_radioblah_info_pane_t1_ParamLimits

0xcf4d,	// (0x000825a4) main_radioblah_info_pane_t1

0x9ae1,	// (0x0007f138) main_radioblah_info_pane_t2_ParamLimits

0x9ae1,	// (0x0007f138) main_radioblah_info_pane_t2

0x0003,

0xfca1,	// (0x000852f8) main_radioblah_info_pane_t_ParamLimits

0xfca1,	// (0x000852f8) main_radioblah_info_pane_t

0xb35d,	// (0x000809b4) main_radioblah_rocker_ctrl_pane_g1

0x9b91,	// (0x0007f1e8) main_radioblah_rocker_ctrl_pane_g2

0x9b99,	// (0x0007f1f0) main_radioblah_rocker_ctrl_pane_g3

0x9ba1,	// (0x0007f1f8) main_radioblah_rocker_ctrl_pane_g4

0x9ba9,	// (0x0007f200) main_radioblah_rocker_ctrl_pane_g5

0x9bb1,	// (0x0007f208) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaa,	// (0x00085301) main_radioblah_rocker_ctrl_pane_g

0x93af,	// (0x0007ea06) main_cset_text2_pane_t1_copy1_ParamLimits

0xe0cc,	// (0x00083723) cam4_image_uncrop_qvga_pane

0xe125,	// (0x0008377c) vid4_image_uncrop_qcif_pane

0xe249,	// (0x000838a0) cam6_image_uncrop_qvga_pane_ParamLimits

0xe249,	// (0x000838a0) cam6_image_uncrop_qvga_pane

0xc68e,	// (0x00081ce5) vid6_image_uncrop_qcif_pane_ParamLimits

0xc68e,	// (0x00081ce5) vid6_image_uncrop_qcif_pane

0xaa80,	// (0x000800d7) bg_popup_preview_window_pane_cp03

0xca0e,	// (0x00082065) list_cset_text2_pane

0xca16,	// (0x0008206d) main_cset6_text2_pane_g1

0xca1e,	// (0x00082075) main_cset6_text2_pane_t1

0xcf87,	// (0x000825de) list_cset_text2_pane_t1_ParamLimits

0xcf87,	// (0x000825de) list_cset_text2_pane_t1

0xaaf9,	// (0x00080150) main_radioblah_pane_ParamLimits

0x9913,	// (0x0007ef6a) main_mobtv_info_pane_t3_ParamLimits

0x9913,	// (0x0007ef6a) main_mobtv_info_pane_t3

0x9a77,	// (0x0007f0ce) main_radioblah_pane_g1

0x9ab1,	// (0x0007f108) main_radioblah_info_pane_g1

0x9b36,	// (0x0007f18d) main_radioblah_info_pane_t3_ParamLimits

0x9b36,	// (0x0007f18d) main_radioblah_info_pane_t3

0x2f53,	// (0x000785aa) highlight_cell_cale_month_pane_ParamLimits

0x2f53,	// (0x000785aa) highlight_cell_cale_month_pane

0xaa80,	// (0x000800d7) main_phob_fisheye_pane

0xb6e3,	// (0x00080d3a) scroll_pane_cp0031_ParamLimits

0xb6e3,	// (0x00080d3a) scroll_pane_cp0031

0xc7a0,	// (0x00081df7) wait_bar_pane_cp08_ParamLimits

0x9438,	// (0x0007ea8f) cset_list_set_pane_copy1_ParamLimits

0xcfa1,	// (0x000825f8) highlight_cell_cale_month_pane_g1

0x9bb9,	// (0x0007f210) highlight_cell_cale_month_pane_t1

0xc3d4,	// (0x00081a2b) list_gen_pane_cp01

0xbf62,	// (0x000815b9) scroll_pane_01

0x9bc7,	// (0x0007f21e) list_single_double_fisheye_pane

0xcfa9,	// (0x00082600) list_double_fisheye_pane_g1_ParamLimits

0xcfa9,	// (0x00082600) list_double_fisheye_pane_g1

0xcfb5,	// (0x0008260c) list_double_fisheye_pane_g2_ParamLimits

0xcfb5,	// (0x0008260c) list_double_fisheye_pane_g2

0x9bd0,	// (0x0007f227) list_double_fisheye_pane_g3_ParamLimits

0x9bd0,	// (0x0007f227) list_double_fisheye_pane_g3

0x0004,

0xfcb7,	// (0x0008530e) list_double_fisheye_pane_g_ParamLimits

0xfcb7,	// (0x0008530e) list_double_fisheye_pane_g

0x0f26,	// (0x0007657d) list_double_fisheye_pane_t1_ParamLimits

0x0f26,	// (0x0007657d) list_double_fisheye_pane_t1

0x0f41,	// (0x00076598) list_double_fisheye_pane_t2_ParamLimits

0x0f41,	// (0x00076598) list_double_fisheye_pane_t2

0x0001,

0xfcc2,	// (0x00085319) list_double_fisheye_pane_t_ParamLimits

0xfcc2,	// (0x00085319) list_double_fisheye_pane_t

0xaa80,	// (0x000800d7) main_call5_pane

0x9a06,	// (0x0007f05d) sc_swipe_pane_ParamLimits

0x9a06,	// (0x0007f05d) sc_swipe_pane

0x9bef,	// (0x0007f246) call5_image_pane_ParamLimits

0x9bef,	// (0x0007f246) call5_image_pane

0x9c0c,	// (0x0007f263) call5_swipe_1_pane_ParamLimits

0x9c0c,	// (0x0007f263) call5_swipe_1_pane

0x9c1f,	// (0x0007f276) call5_swipe_2_pane_ParamLimits

0x9c1f,	// (0x0007f276) call5_swipe_2_pane

0x9c4c,	// (0x0007f2a3) popup_call5_audio_first_window_ParamLimits

0x9c4c,	// (0x0007f2a3) popup_call5_audio_first_window

0xb58d,	// (0x00080be4) call5_swipe_1_pane_g1_ParamLimits

0xb58d,	// (0x00080be4) call5_swipe_1_pane_g1

0xcfe6,	// (0x0008263d) call5_swipe_1_pane_g2_ParamLimits

0xcfe6,	// (0x0008263d) call5_swipe_1_pane_g2

0x0001,

0xfcc7,	// (0x0008531e) call5_swipe_1_pane_g_ParamLimits

0xfcc7,	// (0x0008531e) call5_swipe_1_pane_g

0xcff2,	// (0x00082649) call5_swipe_1_pane_t1_ParamLimits

0xcff2,	// (0x00082649) call5_swipe_1_pane_t1

0xb58d,	// (0x00080be4) call5_swipe_2_pane_g1_ParamLimits

0xb58d,	// (0x00080be4) call5_swipe_2_pane_g1

0xd007,	// (0x0008265e) call5_swipe_2_pane_g2_ParamLimits

0xd007,	// (0x0008265e) call5_swipe_2_pane_g2

0x0001,

0xfccc,	// (0x00085323) call5_swipe_2_pane_g_ParamLimits

0xfccc,	// (0x00085323) call5_swipe_2_pane_g

0xd013,	// (0x0008266a) call5_swipe_2_pane_t1_ParamLimits

0xd013,	// (0x0008266a) call5_swipe_2_pane_t1

0xd028,	// (0x0008267f) sc_swipe_pane_g1_ParamLimits

0xd028,	// (0x0008267f) sc_swipe_pane_g1

0xd035,	// (0x0008268c) sc_swipe_pane_g2_ParamLimits

0xd035,	// (0x0008268c) sc_swipe_pane_g2

0x0001,

0xfcd1,	// (0x00085328) sc_swipe_pane_g_ParamLimits

0xfcd1,	// (0x00085328) sc_swipe_pane_g

0xd041,	// (0x00082698) sc_swipe_pane_t1_ParamLimits

0xd041,	// (0x00082698) sc_swipe_pane_t1

0xaa80,	// (0x000800d7) main_cmail_launcher_pane

0x9c61,	// (0x0007f2b8) aid_size_cell_cmail_l_ParamLimits

0x9c61,	// (0x0007f2b8) aid_size_cell_cmail_l

0x9c7b,	// (0x0007f2d2) grid_cmail_l_pane_ParamLimits

0x9c7b,	// (0x0007f2d2) grid_cmail_l_pane

0x9c97,	// (0x0007f2ee) cell_cmail_l_pane_ParamLimits

0x9c97,	// (0x0007f2ee) cell_cmail_l_pane

0x9cbf,	// (0x0007f316) cell_cmail_l_pane_g1_ParamLimits

0x9cbf,	// (0x0007f316) cell_cmail_l_pane_g1

0x9ccb,	// (0x0007f322) cell_cmail_l_pane_t1_ParamLimits

0x9ccb,	// (0x0007f322) cell_cmail_l_pane_t1

0xd056,	// (0x000826ad) cell_cmail_l_pane_t2_ParamLimits

0xd056,	// (0x000826ad) cell_cmail_l_pane_t2

0x0001,

0xfcd6,	// (0x0008532d) cell_cmail_l_pane_t_ParamLimits

0xfcd6,	// (0x0008532d) cell_cmail_l_pane_t

0xaaf9,	// (0x00080150) grid_highlight_pane_cp018_ParamLimits

0xaaf9,	// (0x00080150) grid_highlight_pane_cp018

0x15b6,	// (0x00076c0d) main2_pane_ParamLimits

0x15b6,	// (0x00076c0d) main2_pane

0xe993,	// (0x00083fea) popup_sp_fs_action_menu_bg_pane_g1

0xe99b,	// (0x00083ff2) popup_sp_fs_action_menu_bg_pane_g2

0xe9a3,	// (0x00083ffa) popup_sp_fs_action_menu_bg_pane_g3

0xe9ab,	// (0x00084002) popup_sp_fs_action_menu_bg_pane_g4

0xe9b3,	// (0x0008400a) popup_sp_fs_action_menu_bg_pane_g5

0xe9bb,	// (0x00084012) popup_sp_fs_action_menu_bg_pane_g6

0xe9c3,	// (0x0008401a) popup_sp_fs_action_menu_bg_pane_g7

0xe9cb,	// (0x00084022) popup_sp_fs_action_menu_bg_pane_g8

0xe9d3,	// (0x0008402a) popup_sp_fs_action_menu_bg_pane_g9

0xe9db,	// (0x00084032) popup_sp_fs_action_menu_bg_pane_g10

0xe9db,	// (0x00084032) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00084803) popup_sp_fs_action_menu_bg_pane_g

0xacf3,	// (0x0008034a) list_medium_line_x2_t3_g3_g1_ParamLimits

0xacf3,	// (0x0008034a) list_medium_line_x2_t3_g3_g1

0xacff,	// (0x00080356) list_medium_line_x2_t3_g3_g2_ParamLimits

0xacff,	// (0x00080356) list_medium_line_x2_t3_g3_g2

0xad0b,	// (0x00080362) list_medium_line_x2_t3_g3_g3_ParamLimits

0xad0b,	// (0x00080362) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x000848b3) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x000848b3) list_medium_line_x2_t3_g3_g

0xad17,	// (0x0008036e) list_medium_line_x2_t3_g3_t1_ParamLimits

0xad17,	// (0x0008036e) list_medium_line_x2_t3_g3_t1

0x0ad1,	// (0x00076128) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ad1,	// (0x00076128) list_medium_line_x2_t3_g3_t2

0xad2c,	// (0x00080383) list_medium_line_x2_t3_g3_t3_ParamLimits

0xad2c,	// (0x00080383) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x000848ba) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x000848ba) list_medium_line_x2_t3_g3_t

0xacf3,	// (0x0008034a) list_medium_line_x2_t3_g2_g1_ParamLimits

0xacf3,	// (0x0008034a) list_medium_line_x2_t3_g2_g1

0xad0b,	// (0x00080362) list_medium_line_x2_t3_g2_g2_ParamLimits

0xad0b,	// (0x00080362) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x000848c1) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x000848c1) list_medium_line_x2_t3_g2_g

0xad41,	// (0x00080398) list_medium_line_x2_t3_g2_t1_ParamLimits

0xad41,	// (0x00080398) list_medium_line_x2_t3_g2_t1

0xad57,	// (0x000803ae) list_medium_line_x2_t3_g2_t2_ParamLimits

0xad57,	// (0x000803ae) list_medium_line_x2_t3_g2_t2

0xad69,	// (0x000803c0) list_medium_line_x2_t3_g2_t3_ParamLimits

0xad69,	// (0x000803c0) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x000848c6) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x000848c6) list_medium_line_x2_t3_g2_t

0xacf3,	// (0x0008034a) list_medium_line_x2_t4_g4_g1_ParamLimits

0xacf3,	// (0x0008034a) list_medium_line_x2_t4_g4_g1

0xad87,	// (0x000803de) list_medium_line_x2_t4_g4_g2_ParamLimits

0xad87,	// (0x000803de) list_medium_line_x2_t4_g4_g2

0xacff,	// (0x00080356) list_medium_line_x2_t4_g4_g3_ParamLimits

0xacff,	// (0x00080356) list_medium_line_x2_t4_g4_g3

0xad93,	// (0x000803ea) list_medium_line_x2_t4_g4_g4_ParamLimits

0xad93,	// (0x000803ea) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x000848cd) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x000848cd) list_medium_line_x2_t4_g4_g

0x0ae5,	// (0x0007613c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0ae5,	// (0x0007613c) list_medium_line_x2_t4_g4_t1

0x0aff,	// (0x00076156) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0aff,	// (0x00076156) list_medium_line_x2_t4_g4_t2

0x0b15,	// (0x0007616c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0b15,	// (0x0007616c) list_medium_line_x2_t4_g4_t3

0xad9f,	// (0x000803f6) list_medium_line_x2_t4_g4_t4_ParamLimits

0xad9f,	// (0x000803f6) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x000848d6) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x000848d6) list_medium_line_x2_t4_g4_t

0xacf3,	// (0x0008034a) list_medium_line_x2_t2_g4_g1_ParamLimits

0xacf3,	// (0x0008034a) list_medium_line_x2_t2_g4_g1

0xad87,	// (0x000803de) list_medium_line_x2_t2_g4_g2_ParamLimits

0xad87,	// (0x000803de) list_medium_line_x2_t2_g4_g2

0xacff,	// (0x00080356) list_medium_line_x2_t2_g4_g3_ParamLimits

0xacff,	// (0x00080356) list_medium_line_x2_t2_g4_g3

0xad0b,	// (0x00080362) list_medium_line_x2_t2_g4_g4_ParamLimits

0xad0b,	// (0x00080362) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0008493d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0008493d) list_medium_line_x2_t2_g4_g

0xadb1,	// (0x00080408) list_medium_line_x2_t2_g4_t1_ParamLimits

0xadb1,	// (0x00080408) list_medium_line_x2_t2_g4_t1

0xad2c,	// (0x00080383) list_medium_line_x2_t2_g4_t2_ParamLimits

0xad2c,	// (0x00080383) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00084946) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00084946) list_medium_line_x2_t2_g4_t

0xacf3,	// (0x0008034a) list_medium_line_x2_t2_g3_g1_ParamLimits

0xacf3,	// (0x0008034a) list_medium_line_x2_t2_g3_g1

0xacff,	// (0x00080356) list_medium_line_x2_t2_g3_g2_ParamLimits

0xacff,	// (0x00080356) list_medium_line_x2_t2_g3_g2

0xad0b,	// (0x00080362) list_medium_line_x2_t2_g3_g3_ParamLimits

0xad0b,	// (0x00080362) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x000848b3) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x000848b3) list_medium_line_x2_t2_g3_g

0xadc6,	// (0x0008041d) list_medium_line_x2_t2_g3_t1_ParamLimits

0xadc6,	// (0x0008041d) list_medium_line_x2_t2_g3_t1

0xad2c,	// (0x00080383) list_medium_line_x2_t2_g3_t2_ParamLimits

0xad2c,	// (0x00080383) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0008494b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0008494b) list_medium_line_x2_t2_g3_t

0x312c,	// (0x00078783) main_sp_fs_list_pane_ParamLimits

0x312c,	// (0x00078783) main_sp_fs_list_pane

0x3138,	// (0x0007878f) sp_fs_scroll_pane_ParamLimits

0x3138,	// (0x0007878f) sp_fs_scroll_pane

0x0b2a,	// (0x00076181) list_medium_line_x2_t3_t1

0x0b3a,	// (0x00076191) list_medium_line_x2_t3_t2

0xae09,	// (0x00080460) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00084996) list_medium_line_x2_t3_t

0x0b48,	// (0x0007619f) list_medium_line_x3_t4_t1

0x0b58,	// (0x000761af) list_medium_line_x3_t4_t2

0xae17,	// (0x0008046e) list_medium_line_x3_t4_t3

0xae09,	// (0x00080460) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0008499d) list_medium_line_x3_t4_t

0x0b66,	// (0x000761bd) list_medium_line_x4_t5_t1

0x0b76,	// (0x000761cd) list_medium_line_x4_t5_t2

0xae17,	// (0x0008046e) list_medium_line_x4_t5_t3

0xae25,	// (0x0008047c) list_medium_line_x4_t5_t4

0xae09,	// (0x00080460) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x000849a6) list_medium_line_x4_t5_t

0xacf3,	// (0x0008034a) list_medium_line_t4_g4_g1_ParamLimits

0xacf3,	// (0x0008034a) list_medium_line_t4_g4_g1

0xad93,	// (0x000803ea) list_medium_line_t4_g4_g2_ParamLimits

0xad93,	// (0x000803ea) list_medium_line_t4_g4_g2

0xae33,	// (0x0008048a) list_medium_line_t4_g4_g3_ParamLimits

0xae33,	// (0x0008048a) list_medium_line_t4_g4_g3

0xad0b,	// (0x00080362) list_medium_line_t4_g4_g4_ParamLimits

0xad0b,	// (0x00080362) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x000849b1) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x000849b1) list_medium_line_t4_g4_g

0xae3f,	// (0x00080496) list_medium_line_t4_g4_t1_ParamLimits

0xae3f,	// (0x00080496) list_medium_line_t4_g4_t1

0xae54,	// (0x000804ab) list_medium_line_t4_g4_t2_ParamLimits

0xae54,	// (0x000804ab) list_medium_line_t4_g4_t2

0xae6a,	// (0x000804c1) list_medium_line_t4_g4_t3_ParamLimits

0xae6a,	// (0x000804c1) list_medium_line_t4_g4_t3

0xad2c,	// (0x00080383) list_medium_line_t4_g4_t4_ParamLimits

0xad2c,	// (0x00080383) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x000849ba) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x000849ba) list_medium_line_t4_g4_t

0x3304,	// (0x0007895b) chi_dic_find_pane_g1

0x5a0a,	// (0x0007b061) main_tport_pane

0xc089,	// (0x000816e0) list_medium_line_plain_t1

0xc09f,	// (0x000816f6) list_medium_line_t2_g2_g1_ParamLimits

0xc09f,	// (0x000816f6) list_medium_line_t2_g2_g1

0xc0ab,	// (0x00081702) list_medium_line_t2_g2_g2_ParamLimits

0xc0ab,	// (0x00081702) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0008506a) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0008506a) list_medium_line_t2_g2_g

0x0d7e,	// (0x000763d5) list_medium_line_t2_g2_t1_ParamLimits

0x0d7e,	// (0x000763d5) list_medium_line_t2_g2_t1

0x0d95,	// (0x000763ec) list_medium_line_t2_g2_t2_ParamLimits

0x0d95,	// (0x000763ec) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0008506f) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0008506f) list_medium_line_t2_g2_t

0xc3dd,	// (0x00081a34) aid_sp_fs_list_icon_a_sm

0xe241,	// (0x00083898) aid_sp_fs_list_icon_d

0xc3e5,	// (0x00081a3c) aid_sp_fs_text_primary

0xe632,	// (0x00083c89) aid_sp_fs_text_secondary

0xc3ee,	// (0x00081a45) list_medium_line

0xc3ee,	// (0x00081a45) list_medium_line_g2

0xc3ee,	// (0x00081a45) list_medium_line_g3

0xc3ee,	// (0x00081a45) list_medium_line_plain

0xc3ee,	// (0x00081a45) list_medium_line_plain_t2

0xc3ee,	// (0x00081a45) list_medium_line_plain_t3

0xc3ee,	// (0x00081a45) list_medium_line_right_icon

0xc3ee,	// (0x00081a45) list_medium_line_right_iconx2

0xc3ee,	// (0x00081a45) list_medium_line_t2

0xc3ee,	// (0x00081a45) list_medium_line_t2_g2

0xc3ee,	// (0x00081a45) list_medium_line_t2_g3

0xc3ee,	// (0x00081a45) list_medium_line_t2_right_icon

0xc3ee,	// (0x00081a45) list_medium_line_t2_right_iconx2

0xc3ee,	// (0x00081a45) list_medium_line_t3

0xc3ee,	// (0x00081a45) list_medium_line_t3_g2

0xc3ee,	// (0x00081a45) list_medium_line_t3_g3

0xc3ee,	// (0x00081a45) list_medium_line_t3_right_iconx2

0xc3f7,	// (0x00081a4e) list_medium_line_t4_g4

0xc400,	// (0x00081a57) list_medium_line_x2

0xc400,	// (0x00081a57) list_medium_line_x2_t2_g2

0xc400,	// (0x00081a57) list_medium_line_x2_t2_g3

0xc400,	// (0x00081a57) list_medium_line_x2_t2_g4

0xc400,	// (0x00081a57) list_medium_line_x2_t3

0xc400,	// (0x00081a57) list_medium_line_x2_t3_g2

0xc400,	// (0x00081a57) list_medium_line_x2_t3_g3

0xc400,	// (0x00081a57) list_medium_line_x2_t3_g4

0xc400,	// (0x00081a57) list_medium_line_x2_t4_g2

0xc400,	// (0x00081a57) list_medium_line_x2_t4_g4

0xc409,	// (0x00081a60) list_medium_line_x3

0xc409,	// (0x00081a60) list_medium_line_x3_t4

0xc409,	// (0x00081a60) list_medium_line_x3_t4_g4

0xc3f7,	// (0x00081a4e) list_medium_line_x4_t4

0xc3f7,	// (0x00081a4e) list_medium_line_x4_t4_g7

0xc3f7,	// (0x00081a4e) list_medium_line_x4_t5

0xc412,	// (0x00081a69) list_single_fs_dyc_pane_ParamLimits

0xc412,	// (0x00081a69) list_single_fs_dyc_pane

0xacf3,	// (0x0008034a) list_medium_line_x4_t4_g7_g1_ParamLimits

0xacf3,	// (0x0008034a) list_medium_line_x4_t4_g7_g1

0xc93d,	// (0x00081f94) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc93d,	// (0x00081f94) list_medium_line_x4_t4_g7_g2

0xc949,	// (0x00081fa0) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc949,	// (0x00081fa0) list_medium_line_x4_t4_g7_g3

0xc958,	// (0x00081faf) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc958,	// (0x00081faf) list_medium_line_x4_t4_g7_g4

0xc964,	// (0x00081fbb) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc964,	// (0x00081fbb) list_medium_line_x4_t4_g7_g5

0xc973,	// (0x00081fca) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc973,	// (0x00081fca) list_medium_line_x4_t4_g7_g6

0xc982,	// (0x00081fd9) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc982,	// (0x00081fd9) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0008523a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0008523a) list_medium_line_x4_t4_g7_g

0xc98e,	// (0x00081fe5) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc98e,	// (0x00081fe5) list_medium_line_x4_t4_g7_t1

0xc9a3,	// (0x00081ffa) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc9a3,	// (0x00081ffa) list_medium_line_x4_t4_g7_t2

0xc9b8,	// (0x0008200f) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc9b8,	// (0x0008200f) list_medium_line_x4_t4_g7_t3

0xc9cd,	// (0x00082024) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc9cd,	// (0x00082024) list_medium_line_x4_t4_g7_t4

0xc9df,	// (0x00082036) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc9df,	// (0x00082036) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x00085249) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x00085249) list_medium_line_x4_t4_g7_t

0xc9f1,	// (0x00082048) list_single_dyc_row_pane_ParamLimits

0xc9f1,	// (0x00082048) list_single_dyc_row_pane

0x9bdc,	// (0x0007f233) call5_gesture_pane_ParamLimits

0x9bdc,	// (0x0007f233) call5_gesture_pane

0x9c32,	// (0x0007f289) call5_windows_pane_ParamLimits

0x9c32,	// (0x0007f289) call5_windows_pane

0x9ce1,	// (0x0007f338) call5_swipe_1_pane_cp_ParamLimits

0x9ce1,	// (0x0007f338) call5_swipe_1_pane_cp

0x9ced,	// (0x0007f344) call5_swipe_2_pane_cp_ParamLimits

0x9ced,	// (0x0007f344) call5_swipe_2_pane_cp

0x3788,	// (0x00078ddf) call5_image_pane_cp

0x9cf9,	// (0x0007f350) popup_call5_audio_first_window_cp_ParamLimits

0x9cf9,	// (0x0007f350) popup_call5_audio_first_window_cp

0xd028,	// (0x0008267f) call5_swipe_1_pane_g1_cp_ParamLimits

0xd028,	// (0x0008267f) call5_swipe_1_pane_g1_cp

0xd068,	// (0x000826bf) call5_swipe_1_pane_g2_cp

0xd041,	// (0x00082698) call5_swipe_1_pane_t1_cp_ParamLimits

0xd041,	// (0x00082698) call5_swipe_1_pane_t1_cp

0xd028,	// (0x0008267f) call5_swipe_2_pane_g1_cp_ParamLimits

0xd028,	// (0x0008267f) call5_swipe_2_pane_g1_cp

0xd070,	// (0x000826c7) call5_swipe_2_pane_g2_cp

0xd078,	// (0x000826cf) call5_swipe_2_pane_t1_cp_ParamLimits

0xd078,	// (0x000826cf) call5_swipe_2_pane_t1_cp

0xaaf9,	// (0x00080150) main_sp_fs_email_pane

0xd08d,	// (0x000826e4) main_sp_fs_listscroll_pane_te

0xd096,	// (0x000826ed) popup_sp_fs_action_menu_pane_ParamLimits

0xd096,	// (0x000826ed) popup_sp_fs_action_menu_pane

0xb35d,	// (0x000809b4) bg_sp_fs_ctrlbar_pane_g1

0xd0dc,	// (0x00082733) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd0e5,	// (0x0008273c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd0ee,	// (0x00082745) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xb35d,	// (0x000809b4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcdb,	// (0x00085332) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xb13c,	// (0x00080793) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xb13c,	// (0x00080793) bg_sp_fs_ctrlbar_ddmenu_pane

0xd0f7,	// (0x0008274e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xd0f7,	// (0x0008274e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xd103,	// (0x0008275a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xd103,	// (0x0008275a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce4,	// (0x0008533b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce4,	// (0x0008533b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xd10f,	// (0x00082766) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xd10f,	// (0x00082766) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd129,	// (0x00082780) list_medium_line_t2_right_icon_g1

0x0f63,	// (0x000765ba) list_medium_line_t2_right_icon_t1

0x0f73,	// (0x000765ca) list_medium_line_t2_right_icon_t2

0x0001,

0xfce9,	// (0x00085340) list_medium_line_t2_right_icon_t

0x59e8,	// (0x0007b03f) bg_sp_fs_ctrlbar_pane_ParamLimits

0x59e8,	// (0x0007b03f) bg_sp_fs_ctrlbar_pane

0x9d4f,	// (0x0007f3a6) main_sp_fs_ctrlbar_button_pane_cp01

0x9d59,	// (0x0007f3b0) main_sp_fs_ctrlbar_ddmenu_pane

0xd16b,	// (0x000827c2) main_sp_fs_ctrlbar_pane_g1

0xd177,	// (0x000827ce) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcee,	// (0x00085345) main_sp_fs_ctrlbar_pane_g

0xd183,	// (0x000827da) main_sp_fs_ctrlbar_pane_t1

0x0f85,	// (0x000765dc) main_sp_fs_ctrlbar_pane

0x0fa9,	// (0x00076600) main_sp_fs_listscroll_pane_te_cp01

0x0fc9,	// (0x00076620) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0fc9,	// (0x00076620) popup_sp_fs_action_menu_pane_cp01

0xaaf9,	// (0x00080150) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xaaf9,	// (0x00080150) bg_sp_fs_highlight_list_pane_cp01

0xd198,	// (0x000827ef) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd198,	// (0x000827ef) sp_fs_action_menu_list_gene_pane_g1

0xd1a7,	// (0x000827fe) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xd1a7,	// (0x000827fe) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf3,	// (0x0008534a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf3,	// (0x0008534a) sp_fs_action_menu_list_gene_pane_g

0xd1b4,	// (0x0008280b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd1b4,	// (0x0008280b) sp_fs_action_menu_list_gene_pane_t1

0xd1cc,	// (0x00082823) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd1cc,	// (0x00082823) sp_fs_action_menu_list_gene_pane

0xd1ef,	// (0x00082846) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xd1ef,	// (0x00082846) popup_sp_fs_action_menu_bg_pane

0xd1fd,	// (0x00082854) sp_fs_action_menu_list_pane_ParamLimits

0xd1fd,	// (0x00082854) sp_fs_action_menu_list_pane

0xd221,	// (0x00082878) sp_fs_scroll_pane_cp01_ParamLimits

0xd221,	// (0x00082878) sp_fs_scroll_pane_cp01

0x0fe5,	// (0x0007663c) list_medium_line_plain_t2_t1

0x0ff5,	// (0x0007664c) list_medium_line_plain_t2_t2

0x0001,

0xfcf8,	// (0x0008534f) list_medium_line_plain_t2_t

0x1005,	// (0x0007665c) list_medium_line_plain_t3_t1

0x1015,	// (0x0007666c) list_medium_line_plain_t3_t2

0x1023,	// (0x0007667a) list_medium_line_plain_t3_t3

0x0002,

0xfcfd,	// (0x00085354) list_medium_line_plain_t3_t

0xacf3,	// (0x0008034a) list_medium_line_x2_t2_g2_g1_ParamLimits

0xacf3,	// (0x0008034a) list_medium_line_x2_t2_g2_g1

0xad0b,	// (0x00080362) list_medium_line_x2_t2_g2_g2_ParamLimits

0xad0b,	// (0x00080362) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x000848c1) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x000848c1) list_medium_line_x2_t2_g2_g

0xae3f,	// (0x00080496) list_medium_line_x2_t2_g2_t1_ParamLimits

0xae3f,	// (0x00080496) list_medium_line_x2_t2_g2_t1

0xad2c,	// (0x00080383) list_medium_line_x2_t2_g2_t2_ParamLimits

0xad2c,	// (0x00080383) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd04,	// (0x0008535b) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd04,	// (0x0008535b) list_medium_line_x2_t2_g2_t

0xacf3,	// (0x0008034a) list_medium_line_x2_t4_g2_g1_ParamLimits

0xacf3,	// (0x0008034a) list_medium_line_x2_t4_g2_g1

0xd247,	// (0x0008289e) list_medium_line_x2_t4_g2_g2_ParamLimits

0xd247,	// (0x0008289e) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd09,	// (0x00085360) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd09,	// (0x00085360) list_medium_line_x2_t4_g2_g

0x1031,	// (0x00076688) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1031,	// (0x00076688) list_medium_line_x2_t4_g2_t1

0x104b,	// (0x000766a2) list_medium_line_x2_t4_g2_t2_ParamLimits

0x104b,	// (0x000766a2) list_medium_line_x2_t4_g2_t2

0x1061,	// (0x000766b8) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1061,	// (0x000766b8) list_medium_line_x2_t4_g2_t3

0xad2c,	// (0x00080383) list_medium_line_x2_t4_g2_t4_ParamLimits

0xad2c,	// (0x00080383) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0e,	// (0x00085365) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0e,	// (0x00085365) list_medium_line_x2_t4_g2_t

0xd259,	// (0x000828b0) list_medium_line_t3_right_iconx2_g1

0xd129,	// (0x00082780) list_medium_line_t3_right_iconx2_g2

0x1076,	// (0x000766cd) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd17,	// (0x0008536e) list_medium_line_t3_right_iconx2_g

0x1080,	// (0x000766d7) list_medium_line_t3_right_iconx2_t1

0x1090,	// (0x000766e7) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1e,	// (0x00085375) list_medium_line_t3_right_iconx2_t

0xacf3,	// (0x0008034a) list_medium_line_x3_t4_g4_g1_ParamLimits

0xacf3,	// (0x0008034a) list_medium_line_x3_t4_g4_g1

0xacff,	// (0x00080356) list_medium_line_x3_t4_g4_g2_ParamLimits

0xacff,	// (0x00080356) list_medium_line_x3_t4_g4_g2

0xad93,	// (0x000803ea) list_medium_line_x3_t4_g4_g3_ParamLimits

0xad93,	// (0x000803ea) list_medium_line_x3_t4_g4_g3

0xd261,	// (0x000828b8) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd261,	// (0x000828b8) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd23,	// (0x0008537a) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd23,	// (0x0008537a) list_medium_line_x3_t4_g4_g

0x109e,	// (0x000766f5) list_medium_line_x3_t4_g4_t1_ParamLimits

0x109e,	// (0x000766f5) list_medium_line_x3_t4_g4_t1

0x10b5,	// (0x0007670c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x10b5,	// (0x0007670c) list_medium_line_x3_t4_g4_t2

0xd26d,	// (0x000828c4) list_medium_line_x3_t4_g4_t3_ParamLimits

0xd26d,	// (0x000828c4) list_medium_line_x3_t4_g4_t3

0xd282,	// (0x000828d9) list_medium_line_x3_t4_g4_t4_ParamLimits

0xd282,	// (0x000828d9) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2c,	// (0x00085383) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2c,	// (0x00085383) list_medium_line_x3_t4_g4_t

0x10d0,	// (0x00076727) list_single_dyc_row_text_pane_t1_ParamLimits

0x10d0,	// (0x00076727) list_single_dyc_row_text_pane_t1

0x1119,	// (0x00076770) list_single_dyc_row_text_pane_t2_ParamLimits

0x1119,	// (0x00076770) list_single_dyc_row_text_pane_t2

0xd29f,	// (0x000828f6) list_single_dyc_row_text_pane_t3_ParamLimits

0xd29f,	// (0x000828f6) list_single_dyc_row_text_pane_t3

0x0002,

0xfd35,	// (0x0008538c) list_single_dyc_row_text_pane_t_ParamLimits

0xfd35,	// (0x0008538c) list_single_dyc_row_text_pane_t

0xd2b1,	// (0x00082908) list_single_dyc_row_pane_g1_ParamLimits

0xd2b1,	// (0x00082908) list_single_dyc_row_pane_g1

0xd2bd,	// (0x00082914) list_single_dyc_row_pane_g2_ParamLimits

0xd2bd,	// (0x00082914) list_single_dyc_row_pane_g2

0xd2c9,	// (0x00082920) list_single_dyc_row_pane_g3_ParamLimits

0xd2c9,	// (0x00082920) list_single_dyc_row_pane_g3

0xd2d5,	// (0x0008292c) list_single_dyc_row_pane_g4_ParamLimits

0xd2d5,	// (0x0008292c) list_single_dyc_row_pane_g4

0x0003,

0xfd3c,	// (0x00085393) list_single_dyc_row_pane_g_ParamLimits

0xfd3c,	// (0x00085393) list_single_dyc_row_pane_g

0xd2e1,	// (0x00082938) list_single_dyc_row_text_pane_ParamLimits

0xd2e1,	// (0x00082938) list_single_dyc_row_text_pane

0xaa80,	// (0x000800d7) bg_sp_fs_scroll_pane

0xd300,	// (0x00082957) thumb_sp_fs_scroll_pane

0xc09f,	// (0x000816f6) list_medium_line_g1_ParamLimits

0xc09f,	// (0x000816f6) list_medium_line_g1

0xd309,	// (0x00082960) list_medium_line_t1_ParamLimits

0xd309,	// (0x00082960) list_medium_line_t1

0xacf3,	// (0x0008034a) list_medium_line_x2_g1_ParamLimits

0xacf3,	// (0x0008034a) list_medium_line_x2_g1

0xacff,	// (0x00080356) list_medium_line_x2_g2_ParamLimits

0xacff,	// (0x00080356) list_medium_line_x2_g2

0x0001,

0xfd45,	// (0x0008539c) list_medium_line_x2_g_ParamLimits

0xfd45,	// (0x0008539c) list_medium_line_x2_g

0xd31e,	// (0x00082975) list_medium_line_x2_t1_ParamLimits

0xd31e,	// (0x00082975) list_medium_line_x2_t1

0xacf3,	// (0x0008034a) list_medium_line_x3_g1_ParamLimits

0xacf3,	// (0x0008034a) list_medium_line_x3_g1

0xacff,	// (0x00080356) list_medium_line_x3_g2_ParamLimits

0xacff,	// (0x00080356) list_medium_line_x3_g2

0x0001,

0xfd45,	// (0x0008539c) list_medium_line_x3_g_ParamLimits

0xfd45,	// (0x0008539c) list_medium_line_x3_g

0xd31e,	// (0x00082975) list_medium_line_x3_t1_ParamLimits

0xd31e,	// (0x00082975) list_medium_line_x3_t1

0xd334,	// (0x0008298b) thumb_sp_fs_scroll_pane_g1

0xd33d,	// (0x00082994) thumb_sp_fs_scroll_pane_g2

0xd346,	// (0x0008299d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4a,	// (0x000853a1) thumb_sp_fs_scroll_pane_g

0xd334,	// (0x0008298b) bg_sp_fs_scroll_pane_g1

0xd33d,	// (0x00082994) bg_sp_fs_scroll_pane_g2

0xd346,	// (0x0008299d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4a,	// (0x000853a1) bg_sp_fs_scroll_pane_g

0xacf3,	// (0x0008034a) list_medium_line_x2_t3_g4_g1_ParamLimits

0xacf3,	// (0x0008034a) list_medium_line_x2_t3_g4_g1

0xad87,	// (0x000803de) list_medium_line_x2_t3_g4_g2_ParamLimits

0xad87,	// (0x000803de) list_medium_line_x2_t3_g4_g2

0xacff,	// (0x00080356) list_medium_line_x2_t3_g4_g3_ParamLimits

0xacff,	// (0x00080356) list_medium_line_x2_t3_g4_g3

0xad0b,	// (0x00080362) list_medium_line_x2_t3_g4_g4_ParamLimits

0xad0b,	// (0x00080362) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0008493d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0008493d) list_medium_line_x2_t3_g4_g

0x1173,	// (0x000767ca) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1173,	// (0x000767ca) list_medium_line_x2_t3_g4_t1

0x1189,	// (0x000767e0) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1189,	// (0x000767e0) list_medium_line_x2_t3_g4_t2

0xad2c,	// (0x00080383) list_medium_line_x2_t3_g4_t3_ParamLimits

0xad2c,	// (0x00080383) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd51,	// (0x000853a8) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd51,	// (0x000853a8) list_medium_line_x2_t3_g4_t

0xc09f,	// (0x000816f6) list_medium_line_g2_g1_ParamLimits

0xc09f,	// (0x000816f6) list_medium_line_g2_g1

0xc0ab,	// (0x00081702) list_medium_line_g2_g2_ParamLimits

0xc0ab,	// (0x00081702) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0008506a) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0008506a) list_medium_line_g2_g

0xd34f,	// (0x000829a6) list_medium_line_g2_t1_ParamLimits

0xd34f,	// (0x000829a6) list_medium_line_g2_t1

0xc09f,	// (0x000816f6) list_medium_line_t3_g2_g1_ParamLimits

0xc09f,	// (0x000816f6) list_medium_line_t3_g2_g1

0xc0ab,	// (0x00081702) list_medium_line_t3_g2_g2_ParamLimits

0xc0ab,	// (0x00081702) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0008506a) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0008506a) list_medium_line_t3_g2_g

0x11a2,	// (0x000767f9) list_medium_line_t3_g2_t1_ParamLimits

0x11a2,	// (0x000767f9) list_medium_line_t3_g2_t1

0x11b9,	// (0x00076810) list_medium_line_t3_g2_t2_ParamLimits

0x11b9,	// (0x00076810) list_medium_line_t3_g2_t2

0x11ce,	// (0x00076825) list_medium_line_t3_g2_t3_ParamLimits

0x11ce,	// (0x00076825) list_medium_line_t3_g2_t3

0x0002,

0xfd58,	// (0x000853af) list_medium_line_t3_g2_t_ParamLimits

0xfd58,	// (0x000853af) list_medium_line_t3_g2_t

0xd129,	// (0x00082780) list_medium_line_right_icon_g1

0xd364,	// (0x000829bb) list_medium_line_right_icon_t1

0xc09f,	// (0x000816f6) list_medium_line_t2_g1_ParamLimits

0xc09f,	// (0x000816f6) list_medium_line_t2_g1

0x11e7,	// (0x0007683e) list_medium_line_t2_t1_ParamLimits

0x11e7,	// (0x0007683e) list_medium_line_t2_t1

0x1201,	// (0x00076858) list_medium_line_t2_t2_ParamLimits

0x1201,	// (0x00076858) list_medium_line_t2_t2

0x0001,

0xfd5f,	// (0x000853b6) list_medium_line_t2_t_ParamLimits

0xfd5f,	// (0x000853b6) list_medium_line_t2_t

0xc09f,	// (0x000816f6) list_medium_line_t3_g1_ParamLimits

0xc09f,	// (0x000816f6) list_medium_line_t3_g1

0x121a,	// (0x00076871) list_medium_line_t3_t1_ParamLimits

0x121a,	// (0x00076871) list_medium_line_t3_t1

0x1231,	// (0x00076888) list_medium_line_t3_t2_ParamLimits

0x1231,	// (0x00076888) list_medium_line_t3_t2

0x1246,	// (0x0007689d) list_medium_line_t3_t3_ParamLimits

0x1246,	// (0x0007689d) list_medium_line_t3_t3

0x0002,

0xfd64,	// (0x000853bb) list_medium_line_t3_t_ParamLimits

0xfd64,	// (0x000853bb) list_medium_line_t3_t

0xc09f,	// (0x000816f6) list_medium_line_g3_g1_ParamLimits

0xc09f,	// (0x000816f6) list_medium_line_g3_g1

0xd372,	// (0x000829c9) list_medium_line_g3_g2_ParamLimits

0xd372,	// (0x000829c9) list_medium_line_g3_g2

0xc0ab,	// (0x00081702) list_medium_line_g3_g3_ParamLimits

0xc0ab,	// (0x00081702) list_medium_line_g3_g3

0x0002,

0xfd6b,	// (0x000853c2) list_medium_line_g3_g_ParamLimits

0xfd6b,	// (0x000853c2) list_medium_line_g3_g

0xd37e,	// (0x000829d5) list_medium_line_g3_t1_ParamLimits

0xd37e,	// (0x000829d5) list_medium_line_g3_t1

0xc09f,	// (0x000816f6) list_medium_line_t2_g3_g1_ParamLimits

0xc09f,	// (0x000816f6) list_medium_line_t2_g3_g1

0xd372,	// (0x000829c9) list_medium_line_t2_g3_g2_ParamLimits

0xd372,	// (0x000829c9) list_medium_line_t2_g3_g2

0xc0ab,	// (0x00081702) list_medium_line_t2_g3_g3_ParamLimits

0xc0ab,	// (0x00081702) list_medium_line_t2_g3_g3

0x0002,

0xfd6b,	// (0x000853c2) list_medium_line_t2_g3_g_ParamLimits

0xfd6b,	// (0x000853c2) list_medium_line_t2_g3_g

0x1258,	// (0x000768af) list_medium_line_t2_g3_t1_ParamLimits

0x1258,	// (0x000768af) list_medium_line_t2_g3_t1

0x126f,	// (0x000768c6) list_medium_line_t2_g3_t2_ParamLimits

0x126f,	// (0x000768c6) list_medium_line_t2_g3_t2

0x0001,

0xfd72,	// (0x000853c9) list_medium_line_t2_g3_t_ParamLimits

0xfd72,	// (0x000853c9) list_medium_line_t2_g3_t

0xc09f,	// (0x000816f6) list_medium_line_t3_g3_g1_ParamLimits

0xc09f,	// (0x000816f6) list_medium_line_t3_g3_g1

0xd372,	// (0x000829c9) list_medium_line_t3_g3_g2_ParamLimits

0xd372,	// (0x000829c9) list_medium_line_t3_g3_g2

0xc0ab,	// (0x00081702) list_medium_line_t3_g3_g3_ParamLimits

0xc0ab,	// (0x00081702) list_medium_line_t3_g3_g3

0x0002,

0xfd6b,	// (0x000853c2) list_medium_line_t3_g3_g_ParamLimits

0xfd6b,	// (0x000853c2) list_medium_line_t3_g3_g

0x1288,	// (0x000768df) list_medium_line_t3_g3_t1_ParamLimits

0x1288,	// (0x000768df) list_medium_line_t3_g3_t1

0x12a1,	// (0x000768f8) list_medium_line_t3_g3_t2_ParamLimits

0x12a1,	// (0x000768f8) list_medium_line_t3_g3_t2

0x12b7,	// (0x0007690e) list_medium_line_t3_g3_t3_ParamLimits

0x12b7,	// (0x0007690e) list_medium_line_t3_g3_t3

0x0002,

0xfd77,	// (0x000853ce) list_medium_line_t3_g3_t_ParamLimits

0xfd77,	// (0x000853ce) list_medium_line_t3_g3_t

0xd259,	// (0x000828b0) list_medium_line_right_iconx2_g1

0xd129,	// (0x00082780) list_medium_line_right_iconx2_g2

0x0001,

0xfd7e,	// (0x000853d5) list_medium_line_right_iconx2_g

0xd393,	// (0x000829ea) list_medium_line_right_iconx2_t1

0xd259,	// (0x000828b0) list_medium_line_t2_right_iconx2_g1

0xd129,	// (0x00082780) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7e,	// (0x000853d5) list_medium_line_t2_right_iconx2_g

0x12d1,	// (0x00076928) list_medium_line_t2_right_iconx2_t1

0x12e1,	// (0x00076938) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd83,	// (0x000853da) list_medium_line_t2_right_iconx2_t

0xd3a1,	// (0x000829f8) list_medium_line_x4_t4_t1

0x12f3,	// (0x0007694a) list_medium_line_x4_t4_t2

0x1303,	// (0x0007695a) list_medium_line_x4_t4_t3

0x1313,	// (0x0007696a) list_medium_line_x4_t4_t4

0x0003,

0xfd88,	// (0x000853df) list_medium_line_x4_t4_t

0x9d9d,	// (0x0007f3f4) tport_appsw_pane_ParamLimits

0x9d9d,	// (0x0007f3f4) tport_appsw_pane

0x9db0,	// (0x0007f407) tport_contact_pane_ParamLimits

0x9db0,	// (0x0007f407) tport_contact_pane

0x9dc3,	// (0x0007f41a) tport_listscroll_pane_ParamLimits

0x9dc3,	// (0x0007f41a) tport_listscroll_pane

0x9dd9,	// (0x0007f430) cell_tport_appsw_pane_ParamLimits

0x9dd9,	// (0x0007f430) cell_tport_appsw_pane

0xbe07,	// (0x0008145e) tport_appsw_pane_g1_ParamLimits

0xbe07,	// (0x0008145e) tport_appsw_pane_g1

0xd3af,	// (0x00082a06) tport_contact_pane_g1

0xd3b8,	// (0x00082a0f) tport_contact_pane_t1

0xd3c6,	// (0x00082a1d) tport_contact_pane_t2

0x0001,

0xfd91,	// (0x000853e8) tport_contact_pane_t

0xd3d4,	// (0x00082a2b) list_tport_pane

0xd3dd,	// (0x00082a34) scroll_pane_cp_030

0x9e1f,	// (0x0007f476) cell_tport_appsw_pane_g1

0xd3f6,	// (0x00082a4d) cell_tport_appsw_pane_t1

0xaa80,	// (0x000800d7) grid_highlight_pane_cp019

0x9e2f,	// (0x0007f486) list_tport_double_graphic_pane_ParamLimits

0x9e2f,	// (0x0007f486) list_tport_double_graphic_pane

0xaaf9,	// (0x00080150) list_highlight_pane_cp023_ParamLimits

0xaaf9,	// (0x00080150) list_highlight_pane_cp023

0x9e3f,	// (0x0007f496) list_tport_double_graphic_pane_g1_ParamLimits

0x9e3f,	// (0x0007f496) list_tport_double_graphic_pane_g1

0x9e4c,	// (0x0007f4a3) list_tport_double_graphic_pane_t1_ParamLimits

0x9e4c,	// (0x0007f4a3) list_tport_double_graphic_pane_t1

0x9e61,	// (0x0007f4b8) list_tport_double_graphic_pane_t2_ParamLimits

0x9e61,	// (0x0007f4b8) list_tport_double_graphic_pane_t2

0x0001,

0xfd9d,	// (0x000853f4) list_tport_double_graphic_pane_t_ParamLimits

0xfd9d,	// (0x000853f4) list_tport_double_graphic_pane_t

0xaa80,	// (0x000800d7) main_cale_note_pane

0x8219,	// (0x0007d870) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8219,	// (0x0007d870) cell_vitu2_function_top_wide_pane_cp01

0x9927,	// (0x0007ef7e) wait_bar_pane_cp05_ParamLimits

0xaa80,	// (0x000800d7) listscroll_cmail_pane

0xd40c,	// (0x00082a63) list_cmail_pane

0x9e7d,	// (0x0007f4d4) list_cmail_body_pane

0x9e95,	// (0x0007f4ec) list_single_cmail_header_caption_pane

0x9eb2,	// (0x0007f509) list_single_cmail_header_detail_pane_ParamLimits

0x9eb2,	// (0x0007f509) list_single_cmail_header_detail_pane

0x9ee4,	// (0x0007f53b) list_single_cmail_header_caption_pane_t1

0x1323,	// (0x0007697a) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1323,	// (0x0007697a) list_single_cmail_header_detail_pane_g1

0xe257,	// (0x000838ae) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe257,	// (0x000838ae) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda2,	// (0x000853f9) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda2,	// (0x000853f9) list_single_cmail_header_detail_pane_g

0xd439,	// (0x00082a90) list_single_cmail_header_detail_pane_t1_ParamLimits

0xd439,	// (0x00082a90) list_single_cmail_header_detail_pane_t1

0xd477,	// (0x00082ace) list_single_cmail_header_editor_pane_bg_ParamLimits

0xd477,	// (0x00082ace) list_single_cmail_header_editor_pane_bg

0xcc8d,	// (0x000822e4) list_cmail_body_pane_g1

0xd489,	// (0x00082ae0) list_cmail_body_pane_t1

0xbe44,	// (0x0008149b) list_single_cmail_header_editor_pane_bg_g1

0xecf2,	// (0x00084349) list_single_cmail_header_editor_pane_bg_g1_copy1

0xbe54,	// (0x000814ab) list_single_cmail_header_editor_pane_bg_g1_copy2

0xbe4c,	// (0x000814a3) list_single_cmail_header_editor_pane_bg_g1_copy3

0xc097,	// (0x000816ee) list_single_cmail_header_editor_pane_bg_g1_copy4

0xbe74,	// (0x000814cb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xbe64,	// (0x000814bb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xbe6c,	// (0x000814c3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xecd2,	// (0x00084329) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9ef4,	// (0x0007f54b) calenote_gesture_pane_ParamLimits

0x9ef4,	// (0x0007f54b) calenote_gesture_pane

0x9f14,	// (0x0007f56b) calenote_window_pane_ParamLimits

0x9f14,	// (0x0007f56b) calenote_window_pane

0xd497,	// (0x00082aee) popup_note_window_cp01

0x9f30,	// (0x0007f587) calenote_swipe_1_pane_ParamLimits

0x9f30,	// (0x0007f587) calenote_swipe_1_pane

0x9ced,	// (0x0007f344) calenote_swipe_2_pane_ParamLimits

0x9ced,	// (0x0007f344) calenote_swipe_2_pane

0xd028,	// (0x0008267f) calenote_swipe_1_pane_g1_ParamLimits

0xd028,	// (0x0008267f) calenote_swipe_1_pane_g1

0xd035,	// (0x0008268c) calenote_swipe_1_pane_g2_ParamLimits

0xd035,	// (0x0008268c) calenote_swipe_1_pane_g2

0x0001,

0xfcd1,	// (0x00085328) calenote_swipe_1_pane_g_ParamLimits

0xfcd1,	// (0x00085328) calenote_swipe_1_pane_g

0xd4a9,	// (0x00082b00) calenote_swipe_1_pane_t1_ParamLimits

0xd4a9,	// (0x00082b00) calenote_swipe_1_pane_t1

0xd028,	// (0x0008267f) calenote_swipe_2_pane_g1_ParamLimits

0xd028,	// (0x0008267f) calenote_swipe_2_pane_g1

0xd4c8,	// (0x00082b1f) calenote_swipe_2_pane_g2_ParamLimits

0xd4c8,	// (0x00082b1f) calenote_swipe_2_pane_g2

0x0001,

0xfdae,	// (0x00085405) calenote_swipe_2_pane_g_ParamLimits

0xfdae,	// (0x00085405) calenote_swipe_2_pane_g

0xd4d4,	// (0x00082b2b) calenote_swipe_2_pane_t1_ParamLimits

0xd4d4,	// (0x00082b2b) calenote_swipe_2_pane_t1

0xaa80,	// (0x000800d7) main_mup_navstr_pane

0x6ec2,	// (0x0007c519) main_mup3_pane_t7_ParamLimits

0x6ec2,	// (0x0007c519) main_mup3_pane_t7

0xdef8,	// (0x0008354f) main_mp4_pane_g6_ParamLimits

0xdef8,	// (0x0008354f) main_mp4_pane_g6

0xe08e,	// (0x000836e5) main_image3_pane_t4_ParamLimits

0xe08e,	// (0x000836e5) main_image3_pane_t4

0x9f45,	// (0x0007f59c) popup_navstr_preview_pane_ParamLimits

0x9f45,	// (0x0007f59c) popup_navstr_preview_pane

0x9f55,	// (0x0007f5ac) scroll_navstr_pane_ParamLimits

0x9f55,	// (0x0007f5ac) scroll_navstr_pane

0xaa80,	// (0x000800d7) bg_popup_preview_window_pane_cp04

0xd4fb,	// (0x00082b52) popup_navstr_preview_pane_t1

0x9f69,	// (0x0007f5c0) scroll_navstr_pane_g1_ParamLimits

0x9f69,	// (0x0007f5c0) scroll_navstr_pane_g1

0x9f7d,	// (0x0007f5d4) scroll_navstr_pane_t1_ParamLimits

0x9f7d,	// (0x0007f5d4) scroll_navstr_pane_t1

0xd4a0,	// (0x00082af7) bg_button_pane_cp014

0xd4a0,	// (0x00082af7) bg_button_pane_cp030

0xcfc9,	// (0x00082620) list_double_fisheye_pane_g4_ParamLimits

0xcfc9,	// (0x00082620) list_double_fisheye_pane_g4

0xcfd5,	// (0x0008262c) list_double_fisheye_pane_g5_ParamLimits

0xcfd5,	// (0x0008262c) list_double_fisheye_pane_g5

0xd414,	// (0x00082a6b) sp_fs_scroll_pane_cp03

0xd16b,	// (0x000827c2) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xd177,	// (0x000827ce) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcee,	// (0x00085345) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd183,	// (0x000827da) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9e73,	// (0x0007f4ca) sp_fs_scroll_pane_cp02

0xe9fe,	// (0x00084055) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe9fe,	// (0x00084055) popup_sp_fs_calendar_preview_list_single_pane

0xaa80,	// (0x000800d7) main_cam6_pano_pane

0xaaf9,	// (0x00080150) main_mup3_pane_ParamLimits

0xaa80,	// (0x000800d7) main_phacti_pane

0x97f8,	// (0x0007ee4f) bg_button_pane_cp11

0x9812,	// (0x0007ee69) main_mobtv_info_pane_g2_ParamLimits

0x9812,	// (0x0007ee69) main_mobtv_info_pane_g2

0x0001,

0xfc4e,	// (0x000852a5) main_mobtv_info_pane_g_ParamLimits

0xfc4e,	// (0x000852a5) main_mobtv_info_pane_g

0x99ed,	// (0x0007f044) sc_clock_pane_t5_ParamLimits

0x99ed,	// (0x0007f044) sc_clock_pane_t5

0x9a77,	// (0x0007f0ce) main_radioblah_pane_g1_ParamLimits

0xcf1d,	// (0x00082574) main_radioblah_pane_t3_ParamLimits

0xcf1d,	// (0x00082574) main_radioblah_pane_t3

0xcf35,	// (0x0008258c) main_radioblah_pane_t4_ParamLimits

0xcf35,	// (0x0008258c) main_radioblah_pane_t4

0x9a9f,	// (0x0007f0f6) main_radioblah_text_pane_ParamLimits

0x9a9f,	// (0x0007f0f6) main_radioblah_text_pane

0x9ab1,	// (0x0007f108) main_radioblah_info_pane_g1_ParamLimits

0x9b4a,	// (0x0007f1a1) main_radioblah_info_pane_t4_ParamLimits

0x9b4a,	// (0x0007f1a1) main_radioblah_info_pane_t4

0xaaf9,	// (0x00080150) main_sp_fs_calendar_pane

0x9f94,	// (0x0007f5eb) main_phacti_pane_g1

0x9f9c,	// (0x0007f5f3) phacti_note_pane_ParamLimits

0x9f9c,	// (0x0007f5f3) phacti_note_pane

0xd512,	// (0x00082b69) phacti_term_pane_ParamLimits

0xd512,	// (0x00082b69) phacti_term_pane

0xd527,	// (0x00082b7e) phacti_note_pane_t1_ParamLimits

0xd527,	// (0x00082b7e) phacti_note_pane_t1

0xd53e,	// (0x00082b95) phacti_term_pane_g1

0xd546,	// (0x00082b9d) phacti_term_pane_t1_ParamLimits

0xd546,	// (0x00082b9d) phacti_term_pane_t1

0xd570,	// (0x00082bc7) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd578,	// (0x00082bcf) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb8,	// (0x0008540f) popup_sp_fs_calendar_preview_list_single_pane_g

0xd580,	// (0x00082bd7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd580,	// (0x00082bd7) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd596,	// (0x00082bed) aid_popup_sp_fs_bg_corner_pane

0xb35d,	// (0x000809b4) popup_sp_fs_calendar_preview_bg_pane_g1

0xaa80,	// (0x000800d7) popup_sp_fs_calendar_preview_bg_pane

0xd59e,	// (0x00082bf5) popup_sp_fs_calendar_preview_list_pane

0xaaf9,	// (0x00080150) bg_main_sp_fs_cale_pane_ParamLimits

0xaaf9,	// (0x00080150) bg_main_sp_fs_cale_pane

0xd5a6,	// (0x00082bfd) listscroll_cale_mrui_pane_ParamLimits

0xd5a6,	// (0x00082bfd) listscroll_cale_mrui_pane

0xd5ba,	// (0x00082c11) listscroll_sp_fs_schedule_track_pane

0xd5c3,	// (0x00082c1a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd5c3,	// (0x00082c1a) main_sp_fs_ctrlbar_pane_cp01

0xd5d4,	// (0x00082c2b) main_sp_fs_ribbon_pane

0xd5dc,	// (0x00082c33) popup_sp_fs_cale_preview_window

0x9ff3,	// (0x0007f64a) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9ff3,	// (0x0007f64a) list_single_sp_fs_schedule_track_pane

0xaaf9,	// (0x00080150) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xaaf9,	// (0x00080150) bg_sp_fs_highlight_list_pane_cp03

0xa006,	// (0x0007f65d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa006,	// (0x0007f65d) list_single_sp_fs_schedule_track_pane_g1

0xa012,	// (0x0007f669) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa012,	// (0x0007f669) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbd,	// (0x00085414) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbd,	// (0x00085414) list_single_sp_fs_schedule_track_pane_g

0xa01e,	// (0x0007f675) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa01e,	// (0x0007f675) list_single_sp_fs_schedule_track_pane_t1

0xa040,	// (0x0007f697) sp_fs_schedule_track_pane_ParamLimits

0xa040,	// (0x0007f697) sp_fs_schedule_track_pane

0xd5ee,	// (0x00082c45) sp_fs_schedule_track_pane_g1

0xd5f6,	// (0x00082c4d) sp_fs_schedule_track_pane_g2

0xd5fe,	// (0x00082c55) sp_fs_schedule_track_pane_g3

0xd606,	// (0x00082c5d) sp_fs_schedule_track_pane_g4

0xd60e,	// (0x00082c65) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc2,	// (0x00085419) sp_fs_schedule_track_pane_g

0xbe44,	// (0x0008149b) bg_sp_fs_schedule_viewer_highlight_g1

0xecf2,	// (0x00084349) bg_sp_fs_schedule_viewer_highlight_g2

0xbe4c,	// (0x000814a3) bg_sp_fs_schedule_viewer_highlight_g3

0xbe54,	// (0x000814ab) bg_sp_fs_schedule_viewer_highlight_g4

0xc097,	// (0x000816ee) bg_sp_fs_schedule_viewer_highlight_g5

0xbe64,	// (0x000814bb) bg_sp_fs_schedule_viewer_highlight_g6

0xbe6c,	// (0x000814c3) bg_sp_fs_schedule_viewer_highlight_g7

0xbe74,	// (0x000814cb) bg_sp_fs_schedule_viewer_highlight_g8

0xecd2,	// (0x00084329) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdcd,	// (0x00085424) bg_sp_fs_schedule_viewer_highlight_g

0xaa80,	// (0x000800d7) bg_main_sp_fs_ribbon_pane

0xa055,	// (0x0007f6ac) main_sp_fs_ribbon_pane_g1

0xd616,	// (0x00082c6d) main_sp_fs_ribbon_pane_t1

0xa05e,	// (0x0007f6b5) main_sp_fs_ribbon_pane_t2

0xd625,	// (0x00082c7c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde0,	// (0x00085437) main_sp_fs_ribbon_pane_t

0xd634,	// (0x00082c8b) main_sp_fs_ribbon_scheduler_pane

0xd63c,	// (0x00082c93) bg_main_sp_fs_ribbon_pane_g1

0xd645,	// (0x00082c9c) bg_main_sp_fs_ribbon_pane_g2

0xd64e,	// (0x00082ca5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde7,	// (0x0008543e) bg_main_sp_fs_ribbon_pane_g

0xd656,	// (0x00082cad) main_sp_fs_ribbon_scheduler_pane_g1

0xd65f,	// (0x00082cb6) main_sp_fs_ribbon_scheduler_pane_g2

0xd668,	// (0x00082cbf) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdee,	// (0x00085445) main_sp_fs_ribbon_scheduler_pane_g

0xd671,	// (0x00082cc8) list_cale_mrui_pane

0xa06d,	// (0x0007f6c4) sp_fs_scroll_pane_cp07_ParamLimits

0xa06d,	// (0x0007f6c4) sp_fs_scroll_pane_cp07

0xa083,	// (0x0007f6da) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa083,	// (0x0007f6da) bg_sp_fs_schedule_viewer_highlight

0xd67a,	// (0x00082cd1) list_single_sp_fs_schedule_track_pane_cp01

0xd682,	// (0x00082cd9) list_sp_fs_schedule_track_pane

0xd68a,	// (0x00082ce1) sp_fs_scroll_pane_cp06_ParamLimits

0xd68a,	// (0x00082ce1) sp_fs_scroll_pane_cp06

0xb35d,	// (0x000809b4) bgmain_sp_fs_calendar_pane_g1

0xd69c,	// (0x00082cf3) list_single_cale_mrui_pane_ParamLimits

0xd69c,	// (0x00082cf3) list_single_cale_mrui_pane

0xd6c0,	// (0x00082d17) list_single_cale_mrui_row_pane_ParamLimits

0xd6c0,	// (0x00082d17) list_single_cale_mrui_row_pane

0xd6cd,	// (0x00082d24) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd6cd,	// (0x00082d24) list_single_cale_mrui_row_pane_g1

0xd705,	// (0x00082d5c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd705,	// (0x00082d5c) list_single_cale_mrui_row_pane_t1

0x1361,	// (0x000769b8) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1361,	// (0x000769b8) list_single_cale_mrui_row_pane_t2

0xd717,	// (0x00082d6e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd717,	// (0x00082d6e) list_single_cale_mrui_row_pane_t3

0xd746,	// (0x00082d9d) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd746,	// (0x00082d9d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdfa,	// (0x00085451) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdfa,	// (0x00085451) list_single_cale_mrui_row_pane_t

0x13c7,	// (0x00076a1e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x13c7,	// (0x00076a1e) list_single_cmail_header_editor_pane_bg_cp01

0x13eb,	// (0x00076a42) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x13eb,	// (0x00076a42) list_single_cmail_header_editor_pane_bg_cp02

0xa095,	// (0x0007f6ec) main_radioblah_text_pane_t1_ParamLimits

0xa095,	// (0x0007f6ec) main_radioblah_text_pane_t1

0xd775,	// (0x00082dcc) cam6_indi_pane_cp01

0xd77d,	// (0x00082dd4) cam6_mode_pane_cp01

0xd785,	// (0x00082ddc) cam6_pano_pane

0xd78e,	// (0x00082de5) cam6_zoom_pane_cp01

0xd798,	// (0x00082def) cam6_pano_image_pane

0xd7a1,	// (0x00082df8) cam6_pano_pane_g1

0xcc8d,	// (0x000822e4) cam6_pano_pane_g2

0xd7aa,	// (0x00082e01) cam6_pano_pane_g3

0xd7b3,	// (0x00082e0a) cam6_pano_pane_g4

0xb955,	// (0x00080fac) cam6_pano_pane_g5

0xd7bc,	// (0x00082e13) cam6_pano_pane_g6

0xd7c4,	// (0x00082e1b) cam6_pano_pane_g7

0xd7cc,	// (0x00082e23) cam6_pano_pane_g8

0xd7d5,	// (0x00082e2c) cam6_pano_pane_g9

0x0008,

0xfe03,	// (0x0008545a) cam6_pano_pane_g

0xaa80,	// (0x000800d7) main_browser_tag_pane

0xd4f3,	// (0x00082b4a) grid_navstr_albumart_pane

0xd7e0,	// (0x00082e37) cell_navstr_albumart_pane_ParamLimits

0xd7e0,	// (0x00082e37) cell_navstr_albumart_pane

0xd7fc,	// (0x00082e53) cell_navstr_albumart_pane_g1

0x54f7,	// (0x0007ab4e) cell_navstr_albumart_pane_g2

0x5507,	// (0x0007ab5e) cell_navstr_albumart_pane_g3

0x54ff,	// (0x0007ab56) cell_navstr_albumart_pane_g4

0x0003,

0xfe16,	// (0x0008546d) cell_navstr_albumart_pane_g

0xa0b0,	// (0x0007f707) bt_list_pane_ParamLimits

0xa0b0,	// (0x0007f707) bt_list_pane

0xa0c6,	// (0x0007f71d) bt_list_pane_t1

0xa0d5,	// (0x0007f72c) bt_list_pane_t2

0x0001,

0xfe1f,	// (0x00085476) bt_list_pane_t

0xaa80,	// (0x000800d7) main_cale_prevew_pane

0xa0e4,	// (0x0007f73b) popup_cale_preview_window_ParamLimits

0xa0e4,	// (0x0007f73b) popup_cale_preview_window

0xaaf9,	// (0x00080150) bg_popup_preview_window_pane_cp05_ParamLimits

0xaaf9,	// (0x00080150) bg_popup_preview_window_pane_cp05

0xd804,	// (0x00082e5b) list_cale_preview_pane_ParamLimits

0xd804,	// (0x00082e5b) list_cale_preview_pane

0xa0ff,	// (0x0007f756) list_double_cale_preview_pane_ParamLimits

0xa0ff,	// (0x0007f756) list_double_cale_preview_pane

0xa113,	// (0x0007f76a) list_single_cale_preview_pane_ParamLimits

0xa113,	// (0x0007f76a) list_single_cale_preview_pane

0xa12b,	// (0x0007f782) list_single_cale_preview_pane_g1

0xa133,	// (0x0007f78a) list_single_cale_preview_pane_t1_ParamLimits

0xa133,	// (0x0007f78a) list_single_cale_preview_pane_t1

0xa148,	// (0x0007f79f) list_double_cale_preview_pane_g1

0xa150,	// (0x0007f7a7) list_double_cale_preview_pane_t1_ParamLimits

0xa150,	// (0x0007f7a7) list_double_cale_preview_pane_t1

0xa165,	// (0x0007f7bc) list_double_cale_preview_pane_t2_ParamLimits

0xa165,	// (0x0007f7bc) list_double_cale_preview_pane_t2

0x0001,

0xfe24,	// (0x0008547b) list_double_cale_preview_pane_t_ParamLimits

0xfe24,	// (0x0008547b) list_double_cale_preview_pane_t

0xaa80,	// (0x000800d7) main_ezdial_pane

0xaaf9,	// (0x00080150) main_sp_fs_email_pane_ParamLimits

0x9d07,	// (0x0007f35e) cmail_ddmenu_btn01_pane_ParamLimits

0x9d07,	// (0x0007f35e) cmail_ddmenu_btn01_pane

0x9d1a,	// (0x0007f371) cmail_ddmenu_btn02_pane_ParamLimits

0x9d1a,	// (0x0007f371) cmail_ddmenu_btn02_pane

0x9d3d,	// (0x0007f394) cmail_ddmenu_btn03_pane_ParamLimits

0x9d3d,	// (0x0007f394) cmail_ddmenu_btn03_pane

0x0f85,	// (0x000765dc) main_sp_fs_ctrlbar_pane_ParamLimits

0x0fa9,	// (0x00076600) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9e7d,	// (0x0007f4d4) list_cmail_body_pane_ParamLimits

0xd423,	// (0x00082a7a) bg_button_pane_cp12

0xd42c,	// (0x00082a83) list_single_cmail_header_detail_pane_g3_ParamLimits

0xd42c,	// (0x00082a83) list_single_cmail_header_detail_pane_g3

0x133b,	// (0x00076992) list_single_cmail_header_detail_pane_t2_ParamLimits

0x133b,	// (0x00076992) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda9,	// (0x00085400) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda9,	// (0x00085400) list_single_cmail_header_detail_pane_t

0xd55b,	// (0x00082bb2) phacti_term_pane_t2_ParamLimits

0xd55b,	// (0x00082bb2) phacti_term_pane_t2

0x0001,

0xfdb3,	// (0x0008540a) phacti_term_pane_t_ParamLimits

0xfdb3,	// (0x0008540a) phacti_term_pane_t

0xd810,	// (0x00082e67) aid_size_list_single_double

0xa17d,	// (0x0007f7d4) popup_ezdial_listscroll_window

0xa199,	// (0x0007f7f0) popup_number_entry_window_cp01

0x3788,	// (0x00078ddf) bg_popup_call_pane_cp09

0xd81c,	// (0x00082e73) ezdial_list_pane

0xd824,	// (0x00082e7b) scroll_pane_cp23

0x59e8,	// (0x0007b03f) bg_button_pane_cp028_ParamLimits

0x59e8,	// (0x0007b03f) bg_button_pane_cp028

0xa1a7,	// (0x0007f7fe) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa1a7,	// (0x0007f7fe) cmail_ddmenu_btn01_pane_g1

0xa1b3,	// (0x0007f80a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa1b3,	// (0x0007f80a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe29,	// (0x00085480) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe29,	// (0x00085480) cmail_ddmenu_btn01_pane_g

0xd82c,	// (0x00082e83) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd82c,	// (0x00082e83) cmail_ddmenu_btn01_pane_t1

0x59e8,	// (0x0007b03f) bg_button_pane_cp029_ParamLimits

0x59e8,	// (0x0007b03f) bg_button_pane_cp029

0xa1bf,	// (0x0007f816) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa1bf,	// (0x0007f816) cmail_ddmenu_btn02_pane_g1

0xa1d7,	// (0x0007f82e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa1d7,	// (0x0007f82e) cmail_ddmenu_btn02_pane_t1

0xaaf9,	// (0x00080150) bg_button_pane_cp031_ParamLimits

0xaaf9,	// (0x00080150) bg_button_pane_cp031

0xa1bf,	// (0x0007f816) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa1bf,	// (0x0007f816) cmail_ddmenu_btn03_pane_g1

0xa1d7,	// (0x0007f82e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa1d7,	// (0x0007f82e) cmail_ddmenu_btn03_pane_t1

0x7a65,	// (0x0007d0bc) cell_dialer2_keypad_pane_t1_ParamLimits

0x7a7f,	// (0x0007d0d6) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7a7f,	// (0x0007d0d6) cell_dialer2_keypad_pane_t1_copy1

0x9678,	// (0x0007eccf) ncimui_group_button_pane

0xaaf9,	// (0x00080150) main_sp_fs_calendar_pane_ParamLimits

0x9e95,	// (0x0007f4ec) list_single_cmail_header_caption_pane_ParamLimits

0xe649,	// (0x00083ca0) aid_recal_txt_sm_pane

0xaa80,	// (0x000800d7) mian_recal_day_pane

0xd5dc,	// (0x00082c33) popup_sp_fs_cale_preview_window_ParamLimits

0xaa80,	// (0x000800d7) list_recal_day_pane

0xd85a,	// (0x00082eb1) list_single_recal_day_pane_ParamLimits

0xd85a,	// (0x00082eb1) list_single_recal_day_pane

0xd86c,	// (0x00082ec3) list_single_recal_day_pane_g1_ParamLimits

0xd86c,	// (0x00082ec3) list_single_recal_day_pane_g1

0xd878,	// (0x00082ecf) list_single_recal_day_pane_g2_ParamLimits

0xd878,	// (0x00082ecf) list_single_recal_day_pane_g2

0xd884,	// (0x00082edb) list_single_recal_day_pane_g3_ParamLimits

0xd884,	// (0x00082edb) list_single_recal_day_pane_g3

0xa1fb,	// (0x0007f852) list_single_recal_day_pane_g4_ParamLimits

0xa1fb,	// (0x0007f852) list_single_recal_day_pane_g4

0xd890,	// (0x00082ee7) list_single_recal_day_pane_g5_ParamLimits

0xd890,	// (0x00082ee7) list_single_recal_day_pane_g5

0xd89c,	// (0x00082ef3) list_single_recal_day_pane_g6_ParamLimits

0xd89c,	// (0x00082ef3) list_single_recal_day_pane_g6

0x0005,

0xfe38,	// (0x0008548f) list_single_recal_day_pane_g_ParamLimits

0xfe38,	// (0x0008548f) list_single_recal_day_pane_g

0xd8a8,	// (0x00082eff) list_single_recal_day_pane_t1

0xd8b6,	// (0x00082f0d) list_single_recal_day_pane_t2

0x0001,

0xfe45,	// (0x0008549c) list_single_recal_day_pane_t

0xa209,	// (0x0007f860) ncimui_query_button_pane_ParamLimits

0xa209,	// (0x0007f860) ncimui_query_button_pane

0xa219,	// (0x0007f870) ncimui_query_button_pane_t1_ParamLimits

0xa219,	// (0x0007f870) ncimui_query_button_pane_t1

0xd8c4,	// (0x00082f1b) ncimui_query_button_pane_t2_ParamLimits

0xd8c4,	// (0x00082f1b) ncimui_query_button_pane_t2

0x0001,

0xfe4a,	// (0x000854a1) ncimui_query_button_pane_t_ParamLimits

0xfe4a,	// (0x000854a1) ncimui_query_button_pane_t

0xa22c,	// (0x0007f883) query_button_pane_ParamLimits

0xa22c,	// (0x0007f883) query_button_pane

0xaa80,	// (0x000800d7) bg_button_pane_cp0028

0xd8d7,	// (0x00082f2e) query_button_pane_t1

0x5a0a,	// (0x0007b061) main_tport_pane_ParamLimits

0x9d63,	// (0x0007f3ba) bg_popup_window_pane_cp01_ParamLimits

0x9d63,	// (0x0007f3ba) bg_popup_window_pane_cp01

0x9d79,	// (0x0007f3d0) heading_pane_cp08_ParamLimits

0x9d79,	// (0x0007f3d0) heading_pane_cp08

0x9d8a,	// (0x0007f3e1) heading_pane_cp07_ParamLimits

0x9d8a,	// (0x0007f3e1) heading_pane_cp07

0xd3ee,	// (0x00082a45) cell_tport_appsw_pane_g2

0x0002,

0xfd96,	// (0x000853ed) cell_tport_appsw_pane_g

0x0ba4,	// (0x000761fb) input_candi_list_open_g1

0xee8d,	// (0x000844e4) list_cale_time_pane_g6_ParamLimits

0xee8d,	// (0x000844e4) list_cale_time_pane_g6

0x6905,	// (0x0007bf5c) aid_size_touch_calib_1_ParamLimits

0x6905,	// (0x0007bf5c) aid_size_touch_calib_1

0x6911,	// (0x0007bf68) aid_size_touch_calib_2_ParamLimits

0x6911,	// (0x0007bf68) aid_size_touch_calib_2

0x6927,	// (0x0007bf7e) aid_size_touch_calib_3_ParamLimits

0x6927,	// (0x0007bf7e) aid_size_touch_calib_3

0x6945,	// (0x0007bf9c) aid_size_touch_calib_4_ParamLimits

0x6945,	// (0x0007bf9c) aid_size_touch_calib_4

0x695b,	// (0x0007bfb2) main_touch_calib_button_group_pane_ParamLimits

0x695b,	// (0x0007bfb2) main_touch_calib_button_group_pane

0x6973,	// (0x0007bfca) main_touch_calib_pane_g1_ParamLimits

0x697f,	// (0x0007bfd6) main_touch_calib_pane_g2_ParamLimits

0x698b,	// (0x0007bfe2) main_touch_calib_pane_g3_ParamLimits

0x6997,	// (0x0007bfee) main_touch_calib_pane_g4_ParamLimits

0xf76e,	// (0x00084dc5) main_touch_calib_pane_g_ParamLimits

0x69a3,	// (0x0007bffa) main_touch_calib_pane_t1_ParamLimits

0x69bd,	// (0x0007c014) main_touch_calib_pane_t2_ParamLimits

0x69d7,	// (0x0007c02e) main_touch_calib_pane_t3_ParamLimits

0x69eb,	// (0x0007c042) main_touch_calib_pane_t4_ParamLimits

0x69ff,	// (0x0007c056) main_touch_calib_pane_t5_ParamLimits

0xf777,	// (0x00084dce) main_touch_calib_pane_t_ParamLimits

0xb71f,	// (0x00080d76) list_single_fp_cale_pane_g3_ParamLimits

0xb71f,	// (0x00080d76) list_single_fp_cale_pane_g3

0xaaf9,	// (0x00080150) bg_button_pane_cp012_ParamLimits

0xaaf9,	// (0x00080150) bg_vkb2_func_pane_cp03_ParamLimits

0x8a16,	// (0x0007e06d) cell_vitu2_function_top_pane_g1_ParamLimits

0xaaf9,	// (0x00080150) bg_vkb2_func_pane_cp04_ParamLimits

0x9618,	// (0x0007ec6f) main_ncimui_button_group_pane_ParamLimits

0x9618,	// (0x0007ec6f) main_ncimui_button_group_pane

0x9666,	// (0x0007ecbd) main_ncimui_pane_t3_ParamLimits

0x9666,	// (0x0007ecbd) main_ncimui_pane_t3

0xd509,	// (0x00082b60) phacti_button_group_pane

0xd810,	// (0x00082e67) aid_size_list_single_double_ParamLimits

0xa17d,	// (0x0007f7d4) popup_ezdial_listscroll_window_ParamLimits

0xa199,	// (0x0007f7f0) popup_number_entry_window_cp01_ParamLimits

0xa23f,	// (0x0007f896) phacti_button_pane_ParamLimits

0xa23f,	// (0x0007f896) phacti_button_pane

0xaa80,	// (0x000800d7) bg_button_pane_cp14

0xd8e5,	// (0x00082f3c) phacti_button_pane_t1

0xa250,	// (0x0007f8a7) main_touch_calib_button_pane_ParamLimits

0xa250,	// (0x0007f8a7) main_touch_calib_button_pane

0xe8e8,	// (0x00083f3f) bg_button_pane_cp18_ParamLimits

0xe8e8,	// (0x00083f3f) bg_button_pane_cp18

0xd8f3,	// (0x00082f4a) main_touch_calib_button_pane_t1_ParamLimits

0xd8f3,	// (0x00082f4a) main_touch_calib_button_pane_t1

0xd909,	// (0x00082f60) main_touch_calib_button_pane_t2_ParamLimits

0xd909,	// (0x00082f60) main_touch_calib_button_pane_t2

0x0001,

0xfe4f,	// (0x000854a6) main_touch_calib_button_pane_t_ParamLimits

0xfe4f,	// (0x000854a6) main_touch_calib_button_pane_t

0xaa80,	// (0x000800d7) cell_ncimui_button_pane

0xaa80,	// (0x000800d7) bg_button_pane_cp032

0xd927,	// (0x00082f7e) cell_ncimui_button_pane_t1

0xe06c,	// (0x000836c3) image3_infobar_pane_ParamLimits

0xe06c,	// (0x000836c3) image3_infobar_pane

0x9a19,	// (0x0007f070) fs_bigclock_status_pane_ParamLimits

0x9a19,	// (0x0007f070) fs_bigclock_status_pane

0x9a26,	// (0x0007f07d) main_fs_bigclock_clock_pane_ParamLimits

0x9a26,	// (0x0007f07d) main_fs_bigclock_clock_pane

0x9a39,	// (0x0007f090) main_fs_bigclock_indi_pane_ParamLimits

0x9a39,	// (0x0007f090) main_fs_bigclock_indi_pane

0x9a54,	// (0x0007f0ab) main_fs_bigclock_swipe_pane_ParamLimits

0x9a54,	// (0x0007f0ab) main_fs_bigclock_swipe_pane

0xaa80,	// (0x000800d7) main_fs_clock_dumped_data

0xcd9a,	// (0x000823f1) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xcd9a,	// (0x000823f1) list_single_fs_bigclock_indicator_pane_g1

0xcdba,	// (0x00082411) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xcdba,	// (0x00082411) list_single_fs_bigclock_indicator_pane_g2

0xcdd4,	// (0x0008242b) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xcdd4,	// (0x0008242b) list_single_fs_bigclock_indicator_pane_g3

0xcdf0,	// (0x00082447) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xcdf0,	// (0x00082447) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc82,	// (0x000852d9) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc82,	// (0x000852d9) list_single_fs_bigclock_indicator_pane_g

0xce16,	// (0x0008246d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xce16,	// (0x0008246d) list_single_fs_bigclock_indicator_pane_t1

0xce3e,	// (0x00082495) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xce3e,	// (0x00082495) list_single_fs_bigclock_indicator_pane_t2

0xce66,	// (0x000824bd) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xce66,	// (0x000824bd) list_single_fs_bigclock_indicator_pane_t3

0xce90,	// (0x000824e7) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xce90,	// (0x000824e7) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8d,	// (0x000852e4) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8d,	// (0x000852e4) list_single_fs_bigclock_indicator_pane_t

0xd935,	// (0x00082f8c) image3_infobar_fav_pane_ParamLimits

0xd935,	// (0x00082f8c) image3_infobar_fav_pane

0xd945,	// (0x00082f9c) image3_infobar_loc_pane_ParamLimits

0xd945,	// (0x00082f9c) image3_infobar_loc_pane

0xd95b,	// (0x00082fb2) image3_infobar_time_pane_ParamLimits

0xd95b,	// (0x00082fb2) image3_infobar_time_pane

0xb35d,	// (0x000809b4) image3_infobar_time_pane_g1

0xd96b,	// (0x00082fc2) image3_infobar_time_pane_t1

0xb35d,	// (0x000809b4) image3_infobar_loc_pane_g1

0xd979,	// (0x00082fd0) image3_infobar_loc_pane_g2

0x0001,

0xfe54,	// (0x000854ab) image3_infobar_loc_pane_g

0xd981,	// (0x00082fd8) image3_infobar_loc_pane_t1

0xb35d,	// (0x000809b4) image3_infobar_fav_pane_g1

0xd98f,	// (0x00082fe6) image3_infobar_fav_pane_g2

0x0001,

0xfe59,	// (0x000854b0) image3_infobar_fav_pane_g

0xd997,	// (0x00082fee) fs_bigclock_status_battery_pane

0xd9a0,	// (0x00082ff7) fs_bigclock_status_signal_pane

0xd9a9,	// (0x00083000) fs_bigclock_status_title_pane

0xd9b2,	// (0x00083009) fs_bigclock_status_signal_pane_g1

0xd9bb,	// (0x00083012) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5e,	// (0x000854b5) fs_bigclock_status_signal_pane_g

0xd9c3,	// (0x0008301a) fs_bigclock_status_battery_pane_g1

0xd9cc,	// (0x00083023) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe63,	// (0x000854ba) fs_bigclock_status_battery_pane_g

0xd9d4,	// (0x0008302b) fs_bigclock_status_title_pane_t1

0xb35d,	// (0x000809b4) main_fs_bigclock_clock_pane_g1

0xd9e2,	// (0x00083039) main_fs_bigclock_clock_pane_g2

0xd9e2,	// (0x00083039) main_fs_bigclock_clock_pane_g3

0xd9e2,	// (0x00083039) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe68,	// (0x000854bf) main_fs_bigclock_clock_pane_g

0xd9ee,	// (0x00083045) main_fs_bigclock_clock_pane_t1

0xd9fc,	// (0x00083053) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe71,	// (0x000854c8) main_fs_bigclock_clock_pane_t

0xda0b,	// (0x00083062) list_single_fs_bigclock_indicator_pane_ParamLimits

0xda0b,	// (0x00083062) list_single_fs_bigclock_indicator_pane

0xa265,	// (0x0007f8bc) list_single_fs_bigclock_pane_ParamLimits

0xa265,	// (0x0007f8bc) list_single_fs_bigclock_pane

0xda25,	// (0x0008307c) main_fs_bigclock_indicator_pane_t1

0xda34,	// (0x0008308b) list_single_fs_bigclock_pane_g1

0xda3c,	// (0x00083093) list_single_fs_bigclock_pane_t1

0xb35d,	// (0x000809b4) main_fs_bigclock_swipe_pane_g1

0xda7a,	// (0x000830d1) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe82,	// (0x000854d9) main_fs_bigclock_swipe_pane_g

0xda82,	// (0x000830d9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xda82,	// (0x000830d9) main_fs_bigclock_swipe_pane_t1

0x3144,	// (0x0007879b) call_type_pane_ParamLimits

0xaa80,	// (0x000800d7) main_btmg_pane

0xd6f9,	// (0x00082d50) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd6f9,	// (0x00082d50) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdf5,	// (0x0008544c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf5,	// (0x0008544c) list_single_cale_mrui_row_pane_g

0xd84a,	// (0x00082ea1) list_recal_vselct_arw_lo_pane

0xd852,	// (0x00082ea9) list_recal_vselct_arw_up_pane

0xe632,	// (0x00083c89) list_recal_vselct_pane

0xda9f,	// (0x000830f6) btmg_button_pane

0xa2cb,	// (0x0007f922) main_btmg_pane_g1

0xaa80,	// (0x000800d7) bg_button_pane_cp044

0xdaa9,	// (0x00083100) btmg_button_pane_t1

0x59cc,	// (0x0007b023) aid_listscroll_gen

0xaaf9,	// (0x00080150) main_cntbar_detail_pane

0xd404,	// (0x00082a5b) list_cmail_folder_pane

0xd414,	// (0x00082a6b) sp_fs_scroll_pane_cp03_ParamLimits

0x1409,	// (0x00076a60) list_single_fs_dyc_pane_cp01_ParamLimits

0x1409,	// (0x00076a60) list_single_fs_dyc_pane_cp01

0xdab7,	// (0x0008310e) aid_size_cmail_indent

0xdac0,	// (0x00083117) list_single_dyc_row_pane_cp01

0xa305,	// (0x0007f95c) cntbar_detail_list_pane_ParamLimits

0xa305,	// (0x0007f95c) cntbar_detail_list_pane

0xa357,	// (0x0007f9ae) main_cntbar_detail_cont_pane_ParamLimits

0xa357,	// (0x0007f9ae) main_cntbar_detail_cont_pane

0x3138,	// (0x0007878f) scroll_pane_cp032_ParamLimits

0x3138,	// (0x0007878f) scroll_pane_cp032

0xa36b,	// (0x0007f9c2) cntbar_detail_list_event_pane_ParamLimits

0xa36b,	// (0x0007f9c2) cntbar_detail_list_event_pane

0xa317,	// (0x0007f96e) cntbar_detail_list_shct_pane

0xed40,	// (0x00084397) aid_list_gen

0xdac9,	// (0x00083120) aid_scroll

0xdad2,	// (0x00083129) aid_size_touch_scroll_bar

0xdadb,	// (0x00083132) aid_list_double

0xdae4,	// (0x0008313b) aid_list_single

0xa37b,	// (0x0007f9d2) aid_list_single_lg

0xdaed,	// (0x00083144) aid_list_z_g_a_sm

0xe263,	// (0x000838ba) aid_list_z_g_d

0xdaf5,	// (0x0008314c) aid_txt_z_prm

0xdb03,	// (0x0008315a) aid_txt_z_prm_cp01

0xdb11,	// (0x00083168) aid_txt_z_sec

0xa384,	// (0x0007f9db) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa384,	// (0x0007f9db) main_cntbar_detail_cont_pane_g1

0xa398,	// (0x0007f9ef) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa398,	// (0x0007f9ef) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe87,	// (0x000854de) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe87,	// (0x000854de) main_cntbar_detail_cont_pane_g

0xdb1f,	// (0x00083176) main_cntbar_detail_cont_pane_t1

0xdb2d,	// (0x00083184) main_cntbar_detail_cont_pane_t2

0xdb3b,	// (0x00083192) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe8c,	// (0x000854e3) main_cntbar_detail_cont_pane_t

0xa3a8,	// (0x0007f9ff) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa3a8,	// (0x0007f9ff) cell_cntbar_detail_list_shct_pane

0xdb49,	// (0x000831a0) cntbar_detail_list_shct_pane_g1

0xdb52,	// (0x000831a9) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe93,	// (0x000854ea) cntbar_detail_list_shct_pane_g

0xa3ba,	// (0x0007fa11) cntbar_detail_list_event_pane_g1_ParamLimits

0xa3ba,	// (0x0007fa11) cntbar_detail_list_event_pane_g1

0xa3c6,	// (0x0007fa1d) cntbar_detail_list_event_pane_g2_ParamLimits

0xa3c6,	// (0x0007fa1d) cntbar_detail_list_event_pane_g2

0x0005,

0xfe98,	// (0x000854ef) cntbar_detail_list_event_pane_g_ParamLimits

0xfe98,	// (0x000854ef) cntbar_detail_list_event_pane_g

0xa434,	// (0x0007fa8b) cntbar_detail_list_event_pane_t1_ParamLimits

0xa434,	// (0x0007fa8b) cntbar_detail_list_event_pane_t1

0xa449,	// (0x0007faa0) cntbar_detail_list_event_pane_t2_ParamLimits

0xa449,	// (0x0007faa0) cntbar_detail_list_event_pane_t2

0x0002,

0xfea5,	// (0x000854fc) cntbar_detail_list_event_pane_t_ParamLimits

0xfea5,	// (0x000854fc) cntbar_detail_list_event_pane_t

0xb35d,	// (0x000809b4) cell_cntbar_detail_list_shct_pane_g1

0x3706,	// (0x00078d5d) navi_pane_mv_g3

0xaaf9,	// (0x00080150) main_cntbar_detail_pane_ParamLimits

0xaa80,	// (0x000800d7) main_notif_wgt_pane

0xdeae,	// (0x00083505) aid_tch_main_mp4_pane_g4

0xe062,	// (0x000836b9) popup_slider_window_cp02

0xd841,	// (0x00082e98) list_recal_day_event_pane

0xa2d5,	// (0x0007f92c) cntbar_detail_btn_pane_ParamLimits

0xa2d5,	// (0x0007f92c) cntbar_detail_btn_pane

0xa2ed,	// (0x0007f944) cntbar_detail_btn_pane_cp01_ParamLimits

0xa2ed,	// (0x0007f944) cntbar_detail_btn_pane_cp01

0xa317,	// (0x0007f96e) cntbar_detail_list_shct_pane_ParamLimits

0xa327,	// (0x0007f97e) cntbar_detail_pane_g1_ParamLimits

0xa327,	// (0x0007f97e) cntbar_detail_pane_g1

0xa33b,	// (0x0007f992) cntbar_detail_pane_t1_ParamLimits

0xa33b,	// (0x0007f992) cntbar_detail_pane_t1

0xa3d2,	// (0x0007fa29) cntbar_detail_list_event_pane_g3_ParamLimits

0xa3d2,	// (0x0007fa29) cntbar_detail_list_event_pane_g3

0xa3ea,	// (0x0007fa41) cntbar_detail_list_event_pane_g4_ParamLimits

0xa3ea,	// (0x0007fa41) cntbar_detail_list_event_pane_g4

0xa402,	// (0x0007fa59) cntbar_detail_list_event_pane_g5_ParamLimits

0xa402,	// (0x0007fa59) cntbar_detail_list_event_pane_g5

0xa41a,	// (0x0007fa71) cntbar_detail_list_event_pane_g6_ParamLimits

0xa41a,	// (0x0007fa71) cntbar_detail_list_event_pane_g6

0xa45e,	// (0x0007fab5) cntbar_detail_list_event_pane_t3_ParamLimits

0xa45e,	// (0x0007fab5) cntbar_detail_list_event_pane_t3

0xa470,	// (0x0007fac7) popup_notif_wgt_window_ParamLimits

0xa470,	// (0x0007fac7) popup_notif_wgt_window

0xa489,	// (0x0007fae0) popup_submenu_window_cp01_ParamLimits

0xa489,	// (0x0007fae0) popup_submenu_window_cp01

0x3788,	// (0x00078ddf) bg_popup_window_pane_cp10

0xdb5b,	// (0x000831b2) listscroll_notif_wgt_pane

0xdb65,	// (0x000831bc) list_notif_wgt_window

0xdb6e,	// (0x000831c5) scroll_pane_cp033

0xdb77,	// (0x000831ce) list_notif_wgt_row_pane_ParamLimits

0xdb77,	// (0x000831ce) list_notif_wgt_row_pane

0xdb8b,	// (0x000831e2) aid_size_list_notif_wgt_del

0xdb94,	// (0x000831eb) list_notif_wgt_row_pane_g1

0xdb9c,	// (0x000831f3) list_notif_wgt_row_pane_g2

0xdba4,	// (0x000831fb) list_notif_wgt_row_pane_g3

0x0002,

0xfeac,	// (0x00085503) list_notif_wgt_row_pane_g

0xdbad,	// (0x00083204) list_notif_wgt_row_pane_t1

0xdbbb,	// (0x00083212) list_notif_wgt_row_pane_t2

0xdbc9,	// (0x00083220) list_notif_wgt_row_pane_t3

0x0002,

0xfeb3,	// (0x0008550a) list_notif_wgt_row_pane_t

0xc0b7,	// (0x0008170e) list_recal_day_event_pane_g1

0xdbd7,	// (0x0008322e) list_recal_day_event_pane_t1

0xaa80,	// (0x000800d7) bg_button_pane_cp045

0xdbe6,	// (0x0008323d) cntbar_detail_btn_pane_t1

0x59e8,	// (0x0007b03f) main_callh_pane_ParamLimits

0x59e8,	// (0x0007b03f) main_callh_pane

0xaa80,	// (0x000800d7) main_coverflow0_pane

0xaa80,	// (0x000800d7) main_wgtman_pane

0x9a62,	// (0x0007f0b9) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9a62,	// (0x0007f0b9) main_fs_bigclock_unlock_btn_pane

0xd3e6,	// (0x00082a3d) bg_button_pane_cp16

0x9e27,	// (0x0007f47e) cell_tport_appsw_pane_g3

0xa49b,	// (0x0007faf2) cf0_flow_pane_ParamLimits

0xa49b,	// (0x0007faf2) cf0_flow_pane

0xdbf4,	// (0x0008324b) listscroll_cf0_pane

0xdbfd,	// (0x00083254) main_cf0_pane_g1

0xa4b0,	// (0x0007fb07) main_cf0_pane_t1_ParamLimits

0xa4b0,	// (0x0007fb07) main_cf0_pane_t1

0xa4c7,	// (0x0007fb1e) main_cf0_pane_t2_ParamLimits

0xa4c7,	// (0x0007fb1e) main_cf0_pane_t2

0x0001,

0xfeba,	// (0x00085511) main_cf0_pane_t_ParamLimits

0xfeba,	// (0x00085511) main_cf0_pane_t

0xdc07,	// (0x0008325e) scroll_pane_cp11

0xa4de,	// (0x0007fb35) cf0_flow_pane_g1

0xa4ea,	// (0x0007fb41) cf0_flow_pane_g2

0x0001,

0xfebf,	// (0x00085516) cf0_flow_pane_g

0xa4f6,	// (0x0007fb4d) cf0_flow_pane_t1

0xaa80,	// (0x000800d7) main_call6_pane

0xaa80,	// (0x000800d7) main_calllock_pane

0xa508,	// (0x0007fb5f) call6_btn_grp_pane_ParamLimits

0xa508,	// (0x0007fb5f) call6_btn_grp_pane

0xa524,	// (0x0007fb7b) call6_pane_g1_ParamLimits

0xa524,	// (0x0007fb7b) call6_pane_g1

0xa53a,	// (0x0007fb91) popup_call6_1st_window_ParamLimits

0xa53a,	// (0x0007fb91) popup_call6_1st_window

0xa54b,	// (0x0007fba2) popup_call6_2nd_window_ParamLimits

0xa54b,	// (0x0007fba2) popup_call6_2nd_window

0xa55c,	// (0x0007fbb3) cell_call6_btn_pane_ParamLimits

0xa55c,	// (0x0007fbb3) cell_call6_btn_pane

0x3788,	// (0x00078ddf) bg_popup_call2_in_pane_cp03

0xdc12,	// (0x00083269) popup_call6_1st_window_g1

0xdc1a,	// (0x00083271) popup_call6_1st_window_g2

0xdc22,	// (0x00083279) popup_call6_1st_window_g3

0x0002,

0xfec4,	// (0x0008551b) popup_call6_1st_window_g

0xdc2a,	// (0x00083281) popup_call6_1st_window_t1

0xdc39,	// (0x00083290) popup_call6_1st_window_t2

0xdc49,	// (0x000832a0) popup_call6_1st_window_t3

0x0002,

0xfecb,	// (0x00085522) popup_call6_1st_window_t

0x3788,	// (0x00078ddf) bg_popup_call2_in_pane_cp04

0xdc12,	// (0x00083269) popup_call6_2nd_window_g1

0xdc1a,	// (0x00083271) popup_call6_2nd_window_g2

0xdc22,	// (0x00083279) popup_call6_2nd_window_g3

0x0002,

0xfec4,	// (0x0008551b) popup_call6_2nd_window_g

0xdc2a,	// (0x00083281) popup_call6_2nd_window_t1

0xaa80,	// (0x000800d7) bg_button_pane_cp15

0xdc59,	// (0x000832b0) cell_call6_btn_pane_g1

0xdc62,	// (0x000832b9) cell_call6_btn_pane_t1

0xa570,	// (0x0007fbc7) listscroll_wgtman_pane_ParamLimits

0xa570,	// (0x0007fbc7) listscroll_wgtman_pane

0xa593,	// (0x0007fbea) wgtman_btn_pane_ParamLimits

0xa593,	// (0x0007fbea) wgtman_btn_pane

0x3337,	// (0x0007898e) aid_scroll_copy1

0xdc71,	// (0x000832c8) list_wgtman_pane

0xa5d6,	// (0x0007fc2d) wgtman_btn_pane_g1_ParamLimits

0xa5d6,	// (0x0007fc2d) wgtman_btn_pane_g1

0xa602,	// (0x0007fc59) wgtman_btn_pane_t1_ParamLimits

0xa602,	// (0x0007fc59) wgtman_btn_pane_t1

0xdc7b,	// (0x000832d2) wgtman_btn_pane_t2_ParamLimits

0xdc7b,	// (0x000832d2) wgtman_btn_pane_t2

0x0001,

0xfed2,	// (0x00085529) wgtman_btn_pane_t_ParamLimits

0xfed2,	// (0x00085529) wgtman_btn_pane_t

0xdc92,	// (0x000832e9) listrow_wgtman_pane_ParamLimits

0xdc92,	// (0x000832e9) listrow_wgtman_pane

0xdca6,	// (0x000832fd) listrow_wgtman_pane_g1

0xa63f,	// (0x0007fc96) listrow_wgtman_pane_g2

0x0001,

0xfed7,	// (0x0008552e) listrow_wgtman_pane_g

0xdcaf,	// (0x00083306) listrow_wgtman_pane_t1

0xdcbd,	// (0x00083314) listrow_wgtman_pane_t2

0x0001,

0xfedc,	// (0x00085533) listrow_wgtman_pane_t

0xdccb,	// (0x00083322) wait_bar_pane_cp09

0xdcd3,	// (0x0008332a) main_calllock_btn_pane

0xdcdd,	// (0x00083334) main_calllock_pane_g1

0xaa80,	// (0x000800d7) bg_button_pane_cp17

0xdce9,	// (0x00083340) main_calllock_btn_pane_g1

0xdcf2,	// (0x00083349) main_calllock_btn_pane_t1

0xaa80,	// (0x000800d7) main_dialer3_pane

0xaa80,	// (0x000800d7) main_fmrd2_pane

0xb35d,	// (0x000809b4) main_fs_bigclock_unlock_btn_pane_g1

0xdd09,	// (0x00083360) main_fs_bigclock_unlock_btn_pane_t1

0xa649,	// (0x0007fca0) area_fmrd2_info_pane_ParamLimits

0xa649,	// (0x0007fca0) area_fmrd2_info_pane

0xa65c,	// (0x0007fcb3) area_fmrd2_visual_pane_ParamLimits

0xa65c,	// (0x0007fcb3) area_fmrd2_visual_pane

0xa66a,	// (0x0007fcc1) fmrd2_indi_pane_ParamLimits

0xa66a,	// (0x0007fcc1) fmrd2_indi_pane

0xa677,	// (0x0007fcce) area_fmrd2_visual_pane_g1

0xa67f,	// (0x0007fcd6) area_fmrd2_visual_pane_t1

0xa68f,	// (0x0007fce6) area_fmrd2_visual_pane_t2

0xa69f,	// (0x0007fcf6) area_fmrd2_visual_pane_t3

0x0002,

0xfee6,	// (0x0008553d) area_fmrd2_visual_pane_t

0xa6af,	// (0x0007fd06) area_fmrd2_info_pane_g1

0xa6b7,	// (0x0007fd0e) area_fmrd2_info_pane_t1

0xa6c7,	// (0x0007fd1e) area_fmrd2_info_pane_t2

0xa6d7,	// (0x0007fd2e) area_fmrd2_info_pane_t3

0xa6e7,	// (0x0007fd3e) area_fmrd2_info_pane_t4

0x0003,

0xfeed,	// (0x00085544) area_fmrd2_info_pane_t

0xa6f7,	// (0x0007fd4e) fmrd2_indi_pane_t1

0xa707,	// (0x0007fd5e) fmrd2_indi_pane_t2

0xa717,	// (0x0007fd6e) fmrd2_indi_pane_t3

0x0002,

0xfef6,	// (0x0008554d) fmrd2_indi_pane_t

0xcdff,	// (0x00082456) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xcdff,	// (0x00082456) list_single_fs_bigclock_indicator_pane_g5

0xcea5,	// (0x000824fc) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xcea5,	// (0x000824fc) list_single_fs_bigclock_indicator_pane_t5

0x9fb0,	// (0x0007f607) aid_cell_bcale_month_pane_ParamLimits

0x9fb0,	// (0x0007f607) aid_cell_bcale_month_pane

0x9fc2,	// (0x0007f619) bcale_month_pane_ParamLimits

0x9fc2,	// (0x0007f619) bcale_month_pane

0x9fda,	// (0x0007f631) bcale_preview_pane_ParamLimits

0x9fda,	// (0x0007f631) bcale_preview_pane

0xda3c,	// (0x00083093) list_single_fs_bigclock_pane_t1_ParamLimits

0xda56,	// (0x000830ad) list_single_fs_bigclock_pane_t2_ParamLimits

0xda56,	// (0x000830ad) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7d,	// (0x000854d4) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x000854d4) list_single_fs_bigclock_pane_t

0xdd01,	// (0x00083358) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee1,	// (0x00085538) main_fs_bigclock_unlock_btn_pane_g

0xa727,	// (0x0007fd7e) aid_dia3_key_size_ParamLimits

0xa727,	// (0x0007fd7e) aid_dia3_key_size

0xa736,	// (0x0007fd8d) aid_dia3_listrow_size_ParamLimits

0xa736,	// (0x0007fd8d) aid_dia3_listrow_size

0xa744,	// (0x0007fd9b) dia3_keypad_fun_pane_ParamLimits

0xa744,	// (0x0007fd9b) dia3_keypad_fun_pane

0xa760,	// (0x0007fdb7) dia3_keypad_num_pane_ParamLimits

0xa760,	// (0x0007fdb7) dia3_keypad_num_pane

0xa779,	// (0x0007fdd0) dia3_listscroll_pane_ParamLimits

0xa779,	// (0x0007fdd0) dia3_listscroll_pane

0xa78e,	// (0x0007fde5) dia3_numentry_pane_ParamLimits

0xa78e,	// (0x0007fde5) dia3_numentry_pane

0xdd17,	// (0x0008336e) dia3_list_pane

0xdd22,	// (0x00083379) scroll_pane_cp12

0xaa80,	// (0x000800d7) bg_dia3_numentry_pane

0xdd2d,	// (0x00083384) dia3_numentry_pane_t1

0xa7a1,	// (0x0007fdf8) cell_dia3_key_num_pane

0xa7a9,	// (0x0007fe00) cell_dia3_key0_fun_pane_ParamLimits

0xa7a9,	// (0x0007fe00) cell_dia3_key0_fun_pane

0xa7bd,	// (0x0007fe14) cell_dia3_key1_fun_pane_ParamLimits

0xa7bd,	// (0x0007fe14) cell_dia3_key1_fun_pane

0xa7d5,	// (0x0007fe2c) dia3_listrow_pane

0xcb05,	// (0x0008215c) bg_dia3_numentry_pane_g1

0xaa80,	// (0x000800d7) bg_button_pane_cp21

0xdd3c,	// (0x00083393) cell_dia3_key_num_pane_t1

0xdd4a,	// (0x000833a1) cell_dia3_key_num_pane_t2

0xdd59,	// (0x000833b0) cell_dia3_key_num_pane_t3

0xdd68,	// (0x000833bf) cell_dia3_key_num_pane_t4

0x0003,

0xfefd,	// (0x00085554) cell_dia3_key_num_pane_t

0xaa80,	// (0x000800d7) bg_button_pane_cp19

0xa7e7,	// (0x0007fe3e) cell_dia3_key0_fun_pane_g1

0xaa80,	// (0x000800d7) bg_button_pane_cp20

0xa7ef,	// (0x0007fe46) cell_dia3_key1_fun_pane_g1

0xa7f7,	// (0x0007fe4e) area_left_week_number_pane

0xa800,	// (0x0007fe57) area_top_day_name_pane

0xa809,	// (0x0007fe60) frame_month_view_pane

0xa815,	// (0x0007fe6c) grid_month_view_pane

0xa81f,	// (0x0007fe76) cell_top_day_name_pane_ParamLimits

0xa81f,	// (0x0007fe76) cell_top_day_name_pane

0xa839,	// (0x0007fe90) cell_area_left_week_number_pane_ParamLimits

0xa839,	// (0x0007fe90) cell_area_left_week_number_pane

0xa84f,	// (0x0007fea6) cell_month_view_pane_ParamLimits

0xa84f,	// (0x0007fea6) cell_month_view_pane

0xdd77,	// (0x000833ce) frm_month_g1

0xa86e,	// (0x0007fec5) frm_month_g2

0xa878,	// (0x0007fecf) frm_month_g3

0xa882,	// (0x0007fed9) frm_month_g4

0xa88c,	// (0x0007fee3) frm_month_g5

0xa896,	// (0x0007feed) frm_month_g6

0xa8a2,	// (0x0007fef9) frm_month_g7

0xdd80,	// (0x000833d7) frm_month_g8

0xa8ae,	// (0x0007ff05) frm_month_g9

0xa8b7,	// (0x0007ff0e) frm_month_g10

0xa8c0,	// (0x0007ff17) frm_month_g11

0xa8c9,	// (0x0007ff20) frm_month_g12

0xa8d2,	// (0x0007ff29) frm_month_g13

0xa8db,	// (0x0007ff32) frm_month_g14

0xa8e4,	// (0x0007ff3b) frm_month_g15

0xa8ef,	// (0x0007ff46) frm_month_g16

0x000f,

0xff06,	// (0x0008555d) frm_month_g

0xa8fa,	// (0x0007ff51) cell_top_day_name_pane_t1

0xa909,	// (0x0007ff60) cell_area_left_week_number_pane_g1

0xa8fa,	// (0x0007ff51) cell_area_left_week_number_pane_t1

0xb35d,	// (0x000809b4) cell_month_view_pane_g1

0xa911,	// (0x0007ff68) cell_month_view_pane_t1

0xaa80,	// (0x000800d7) main_fps_pane

0xd131,	// (0x00082788) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xd131,	// (0x00082788) cmail_ddmenu_btn02_pane_cp1

0xd14d,	// (0x000827a4) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xd14d,	// (0x000827a4) cmail_ddmenu_btn02_pane_cp2

0xa1cb,	// (0x0007f822) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa1cb,	// (0x0007f822) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2e,	// (0x00085485) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2e,	// (0x00085485) cmail_ddmenu_btn02_pane_g

0xa1e9,	// (0x0007f840) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa1e9,	// (0x0007f840) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe33,	// (0x0008548a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe33,	// (0x0008548a) cmail_ddmenu_btn02_pane_t

0xa920,	// (0x0007ff77) fps_text_pane_ParamLimits

0xa920,	// (0x0007ff77) fps_text_pane

0xa937,	// (0x0007ff8e) main_fps_pane_g1_ParamLimits

0xa937,	// (0x0007ff8e) main_fps_pane_g1

0xa94f,	// (0x0007ffa6) wait_bar_pane_cp010_ParamLimits

0xa94f,	// (0x0007ffa6) wait_bar_pane_cp010

0xa962,	// (0x0007ffb9) fps_text_pane_t1_ParamLimits

0xa962,	// (0x0007ffb9) fps_text_pane_t1

0xbdb4,	// (0x0008140b) cam4_image_uncrop_pane_g1

0xbdbd,	// (0x00081414) cam4_image_uncrop_pane_g2

0x7ee1,	// (0x0007d538) cam4_image_uncrop_pane_g3

0x7eea,	// (0x0007d541) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x00084f58) cam4_image_uncrop_pane_g

0xa7d5,	// (0x0007fe2c) dia3_listrow_pane_ParamLimits

0xaa80,	// (0x000800d7) main_phob2_pane

0x9dee,	// (0x0007f445) cell_tport_appsw_pane_cp02_ParamLimits

0x9dee,	// (0x0007f445) cell_tport_appsw_pane_cp02

0x9e02,	// (0x0007f459) cell_tport_appsw_pane_cp03_ParamLimits

0x9e02,	// (0x0007f459) cell_tport_appsw_pane_cp03

0xaa80,	// (0x000800d7) phob2_contact_card_pane

0xaa80,	// (0x000800d7) phob2_listscroll_pane

0xdd89,	// (0x000833e0) phob2_list_pane

0xdd91,	// (0x000833e8) scroll_pane_cp034

0xa97a,	// (0x0007ffd1) phob2_cc_data_pane_ParamLimits

0xa97a,	// (0x0007ffd1) phob2_cc_data_pane

0xa99b,	// (0x0007fff2) phob2_cc_listscroll_pane_ParamLimits

0xa99b,	// (0x0007fff2) phob2_cc_listscroll_pane

0xa9bd,	// (0x00080014) list_double_large_graphic_phob2_pane_ParamLimits

0xa9bd,	// (0x00080014) list_double_large_graphic_phob2_pane

0xa9d2,	// (0x00080029) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa9d2,	// (0x00080029) list_double_large_graphic_phob2_pane_g1

0x1423,	// (0x00076a7a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1423,	// (0x00076a7a) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff27,	// (0x0008557e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff27,	// (0x0008557e) list_double_large_graphic_phob2_pane_g

0x142f,	// (0x00076a86) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x142f,	// (0x00076a86) list_double_large_graphic_phob2_pane_t1

0x1444,	// (0x00076a9b) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1444,	// (0x00076a9b) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2c,	// (0x00085583) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2c,	// (0x00085583) list_double_large_graphic_phob2_pane_t

0xaa80,	// (0x000800d7) list_highlight_pane_cp024

0xdd99,	// (0x000833f0) phob2_cc_button_pane

0xa9df,	// (0x00080036) phob2_cc_data_pane_g1_ParamLimits

0xa9df,	// (0x00080036) phob2_cc_data_pane_g1

0xa9f5,	// (0x0008004c) phob2_cc_data_pane_g2_ParamLimits

0xa9f5,	// (0x0008004c) phob2_cc_data_pane_g2

0x0001,

0xff31,	// (0x00085588) phob2_cc_data_pane_g_ParamLimits

0xff31,	// (0x00085588) phob2_cc_data_pane_g

0xaa09,	// (0x00080060) phob2_cc_data_pane_t1_ParamLimits

0xaa09,	// (0x00080060) phob2_cc_data_pane_t1

0xaa23,	// (0x0008007a) phob2_cc_data_pane_t2_ParamLimits

0xaa23,	// (0x0008007a) phob2_cc_data_pane_t2

0xaa3d,	// (0x00080094) phob2_cc_data_pane_t3_ParamLimits

0xaa3d,	// (0x00080094) phob2_cc_data_pane_t3

0x0002,

0xff36,	// (0x0008558d) phob2_cc_data_pane_t_ParamLimits

0xff36,	// (0x0008558d) phob2_cc_data_pane_t

0xdda1,	// (0x000833f8) phob2_cc_list_pane_ParamLimits

0xdda1,	// (0x000833f8) phob2_cc_list_pane

0xc162,	// (0x000817b9) scroll_pane_cp035_ParamLimits

0xc162,	// (0x000817b9) scroll_pane_cp035

0xaaf9,	// (0x00080150) bg_button_pane_cp033

0xddad,	// (0x00083404) phob2_cc_button_pane_g1

0xddb9,	// (0x00083410) phob2_cc_button_pane_t1

0xddce,	// (0x00083425) phob2_cc_button_pane_t2

0x0001,

0xff3d,	// (0x00085594) phob2_cc_button_pane_t

0xaa57,	// (0x000800ae) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaa57,	// (0x000800ae) list_double_large_graphic_phob2_cc_pane

0xaa6c,	// (0x000800c3) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xaa6c,	// (0x000800c3) list_double_large_graphic_phob2_cc_pane_g1

0x1456,	// (0x00076aad) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1456,	// (0x00076aad) list_double_large_graphic_phob2_cc_pane_g2

0x1462,	// (0x00076ab9) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1462,	// (0x00076ab9) list_double_large_graphic_phob2_cc_pane_g3

0x146e,	// (0x00076ac5) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x146e,	// (0x00076ac5) list_double_large_graphic_phob2_cc_pane_g4

0x147a,	// (0x00076ad1) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x147a,	// (0x00076ad1) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff42,	// (0x00085599) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff42,	// (0x00085599) list_double_large_graphic_phob2_cc_pane_g

0x1486,	// (0x00076add) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1486,	// (0x00076add) list_double_large_graphic_phob2_cc_pane_t1

0x14af,	// (0x00076b06) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x14af,	// (0x00076b06) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4d,	// (0x000855a4) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4d,	// (0x000855a4) list_double_large_graphic_phob2_cc_pane_t

0xdde0,	// (0x00083437) list_highlight_pane_cp025_ParamLimits

0xdde0,	// (0x00083437) list_highlight_pane_cp025

0xaaf9,	// (0x00080150) bg_button_pane_cp033_ParamLimits

0xddad,	// (0x00083404) phob2_cc_button_pane_g1_ParamLimits

0xddb9,	// (0x00083410) phob2_cc_button_pane_t1_ParamLimits

0xddce,	// (0x00083425) phob2_cc_button_pane_t2_ParamLimits

0xff3d,	// (0x00085594) phob2_cc_button_pane_t_ParamLimits

0x16fa,	// (0x00076d51) popup_wgtman_window

0xbf62,	// (0x000815b9) scroll_pane_cp038

0xa5b8,	// (0x0007fc0f) wgtman_btn_pane_cp_01_ParamLimits

0xa5b8,	// (0x0007fc0f) wgtman_btn_pane_cp_01

0xddee,	// (0x00083445) wgtman_content_pane

0xddf7,	// (0x0008344e) wgtman_heading_pane

0xaa80,	// (0x000800d7) bg_heading_pane_cp02

0xde00,	// (0x00083457) wgtman_heading_pane_g1

0xde08,	// (0x0008345f) wgtman_heading_pane_t1

0xde16,	// (0x0008346d) scroll_pane_cp036

0xde1e,	// (0x00083475) wgtman_list_pane

0xcf87,	// (0x000825de) wgtman_list_pane_t1_ParamLimits

0xcf87,	// (0x000825de) wgtman_list_pane_t1

0xe0c0,	// (0x00083717) cam4_grid_pane

0x0db0,	// (0x00076407) bg_button_pane_cp015_ParamLimits

0x8b84,	// (0x0007e1db) bg_button_pane_cp016_ParamLimits

0x8b97,	// (0x0007e1ee) bg_button_pane_cp017_ParamLimits

0x0df8,	// (0x0007644f) popup_vitu2_query_window_g3_ParamLimits

0x0df8,	// (0x0007644f) popup_vitu2_query_window_g3

0x0e73,	// (0x000764ca) popup_vitu2_query_window_t6_ParamLimits

0x0e73,	// (0x000764ca) popup_vitu2_query_window_t6

0x0e9e,	// (0x000764f5) popup_vitu2_query_window_t7_ParamLimits

0x0e9e,	// (0x000764f5) popup_vitu2_query_window_t7

0xbdb4,	// (0x0008140b) cam4_grid_pane_g1

0xbdbd,	// (0x00081414) cam4_grid_pane_g2

0xde26,	// (0x0008347d) cam4_grid_pane_g3

0xde2f,	// (0x00083486) cam4_grid_pane_g4

0x0003,

0xff52,	// (0x000855a9) cam4_grid_pane_g

0x235c,	// (0x000779b3) aid_placing_vt_slider_lsc_ParamLimits

0x264c,	// (0x00077ca3) vidtel_button_pane_ParamLimits

0x264c,	// (0x00077ca3) vidtel_button_pane

0xaa80,	// (0x000800d7) bg_button_pane_cp034

0xaa78,	// (0x000800cf) vidtel_button_pane_g1

0xde3a,	// (0x00083491) vidtel_button_pane_t1

0xc081,	// (0x000816d8) aid_size_vtel_slider_touch

0xc162,	// (0x000817b9) scroll_pane_cp039

0xcb43,	// (0x0008219a) ncim_query_button_pane_cp01_ParamLimits

0xcb62,	// (0x000821b9) ncimui_query_pane_g1_ParamLimits

0xaaf9,	// (0x00080150) input_focus_pane_cp012_ParamLimits

0xcb87,	// (0x000821de) ncim_query_entry_pane_t1_ParamLimits

0xc162,	// (0x000817b9) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
