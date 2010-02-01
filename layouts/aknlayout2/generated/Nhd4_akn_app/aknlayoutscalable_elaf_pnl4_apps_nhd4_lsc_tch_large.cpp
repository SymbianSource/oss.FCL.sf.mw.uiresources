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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00074654 };

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
0x1809,	// (0x00075e5d) Screen

0x1815,	// (0x00075e69) application_window

0x1851,	// (0x00075ea5) area_bottom_pane_ParamLimits

0x1851,	// (0x00075ea5) area_bottom_pane

0x188a,	// (0x00075ede) area_top_pane_ParamLimits

0x188a,	// (0x00075ede) area_top_pane

0xe8c7,	// (0x00082f1b) call_video_uplink_pane_ParamLimits

0xe8c7,	// (0x00082f1b) call_video_uplink_pane

0x18ff,	// (0x00075f53) main_pane_ParamLimits

0x18ff,	// (0x00075f53) main_pane

0xb7b8,	// (0x0007fe0c) context_pane

0x5f90,	// (0x0007a5e4) navi_pane

0x5fb8,	// (0x0007a60c) popup_cale_events_window_ParamLimits

0x5fb8,	// (0x0007a60c) popup_cale_events_window

0xb7cb,	// (0x0007fe1f) popup_mup_playback_window

0x5fd0,	// (0x0007a624) signal_pane

0xf097,	// (0x000836eb) main_browser_pane

0x41e1,	// (0x00078835) main_burst_pane

0x5cf0,	// (0x0007a344) main_calc_pane

0x41e1,	// (0x00078835) main_cale_day_pane

0xf097,	// (0x000836eb) main_cale_month_pane

0x41e1,	// (0x00078835) main_cale_week_pane

0x41e1,	// (0x00078835) main_call_pane

0xed2d,	// (0x00083381) main_call_poc_pane

0x41e1,	// (0x00078835) main_camera_pane

0x41e1,	// (0x00078835) main_chi_dic_pane

0x3d52,	// (0x000783a6) main_clock_pane

0xed2d,	// (0x00083381) main_fmradio_pane

0x41e1,	// (0x00078835) main_graph_messa_pane

0xed2d,	// (0x00083381) main_help_pane

0xf097,	// (0x000836eb) main_im_pane

0xef88,	// (0x000835dc) main_image_pane_ParamLimits

0xef88,	// (0x000835dc) main_image_pane

0xed2d,	// (0x00083381) main_location2_pane

0x41e1,	// (0x00078835) main_location_pane

0xed2d,	// (0x00083381) main_messa_pane

0xed2d,	// (0x00083381) main_mp2_pane

0x41e1,	// (0x00078835) main_mp_pane

0xed2d,	// (0x00083381) main_msg_pane

0xed2d,	// (0x00083381) main_mup_eq_pane

0xed2d,	// (0x00083381) main_mup_pane

0x41e1,	// (0x00078835) main_notes_pane

0xed2d,	// (0x00083381) main_pec_pane

0xed2d,	// (0x00083381) main_phob_pane

0xed2d,	// (0x00083381) main_pinb_pane

0xed2d,	// (0x00083381) main_postcard_pane

0xed2d,	// (0x00083381) main_qdial_pane

0x41e1,	// (0x00078835) main_skin_pane

0xed2d,	// (0x00083381) main_smil2_pane

0x41e1,	// (0x00078835) main_smil_pane

0x41e1,	// (0x00078835) main_video_pane

0x41e1,	// (0x00078835) main_video_tele_pane

0xef88,	// (0x000835dc) main_viewer_pane_ParamLimits

0xef88,	// (0x000835dc) main_viewer_pane

0x41e1,	// (0x00078835) main_vorec_pane

0x5d44,	// (0x0007a398) popup_blid_sat_info_window_ParamLimits

0x5d44,	// (0x0007a398) popup_blid_sat_info_window

0x5d9c,	// (0x0007a3f0) popup_dyc_status_message_window_ParamLimits

0x5d9c,	// (0x0007a3f0) popup_dyc_status_message_window

0x5db4,	// (0x0007a408) popup_grid_large_graphic_window_ParamLimits

0x5db4,	// (0x0007a408) popup_grid_large_graphic_window

0x5e6a,	// (0x0007a4be) popup_loc_request_window_ParamLimits

0x5e6a,	// (0x0007a4be) popup_loc_request_window

0x5f68,	// (0x0007a5bc) popup_wml_address_window_ParamLimits

0x5f68,	// (0x0007a5bc) popup_wml_address_window

0x5b2a,	// (0x0007a17e) call_muted_g1

0x4eb8,	// (0x0007950c) popup_call_audio_conf_window_ParamLimits

0x4eb8,	// (0x0007950c) popup_call_audio_conf_window

0x5b3e,	// (0x0007a192) popup_call_audio_first_window_ParamLimits

0x5b3e,	// (0x0007a192) popup_call_audio_first_window

0x5bb4,	// (0x0007a208) popup_call_audio_in_window_ParamLimits

0x5bb4,	// (0x0007a208) popup_call_audio_in_window

0x5bf0,	// (0x0007a244) popup_call_audio_out_window_ParamLimits

0x5bf0,	// (0x0007a244) popup_call_audio_out_window

0x5c2a,	// (0x0007a27e) popup_call_audio_second_window_ParamLimits

0x5c2a,	// (0x0007a27e) popup_call_audio_second_window

0x5c80,	// (0x0007a2d4) popup_call_audio_wait_window_ParamLimits

0x5c80,	// (0x0007a2d4) popup_call_audio_wait_window

0x5cb5,	// (0x0007a309) popup_number_entry_window_ParamLimits

0x5cb5,	// (0x0007a309) popup_number_entry_window

0xe8f3,	// (0x00082f47) bg_popup_call_pane_cp05_ParamLimits

0xe8f3,	// (0x00082f47) bg_popup_call_pane_cp05

0xe913,	// (0x00082f67) popup_number_entry_window_t1

0xe926,	// (0x00082f7a) popup_number_entry_window_t2

0xe938,	// (0x00082f8c) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00083740) popup_number_entry_window_t

0xe94a,	// (0x00082f9e) text_title_cp2

0xe95d,	// (0x00082fb1) bg_popup_call_pane_cp_ParamLimits

0xe95d,	// (0x00082fb1) bg_popup_call_pane_cp

0xe96b,	// (0x00082fbf) call_thumbnail_pane

0xe973,	// (0x00082fc7) popup_call_audio_in_window_g1_ParamLimits

0xe973,	// (0x00082fc7) popup_call_audio_in_window_g1

0xe97f,	// (0x00082fd3) popup_call_audio_in_window_g2_ParamLimits

0xe97f,	// (0x00082fd3) popup_call_audio_in_window_g2

0xe98b,	// (0x00082fdf) popup_call_audio_in_window_g3_ParamLimits

0xe98b,	// (0x00082fdf) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00083749) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00083749) popup_call_audio_in_window_g

0xe997,	// (0x00082feb) popup_call_audio_in_window_t1_ParamLimits

0xe997,	// (0x00082feb) popup_call_audio_in_window_t1

0xe9db,	// (0x0008302f) popup_call_audio_in_window_t2_ParamLimits

0xe9db,	// (0x0008302f) popup_call_audio_in_window_t2

0xe9f6,	// (0x0008304a) popup_call_audio_in_window_t3_ParamLimits

0xe9f6,	// (0x0008304a) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00083750) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00083750) popup_call_audio_in_window_t

0xe95d,	// (0x00082fb1) bg_popup_call_pane_cp01_ParamLimits

0xe95d,	// (0x00082fb1) bg_popup_call_pane_cp01

0xe96b,	// (0x00082fbf) call_thumbnail_pane_cp02

0xea09,	// (0x0008305d) call_type_pane_cp022

0xea11,	// (0x00083065) popup_call_audio_out_window_g1_ParamLimits

0xea11,	// (0x00083065) popup_call_audio_out_window_g1

0xea23,	// (0x00083077) popup_call_audio_out_window_g2_ParamLimits

0xea23,	// (0x00083077) popup_call_audio_out_window_g2

0xea2f,	// (0x00083083) popup_call_audio_out_window_g3_ParamLimits

0xea2f,	// (0x00083083) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00083757) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00083757) popup_call_audio_out_window_g

0xea41,	// (0x00083095) popup_call_audio_out_window_t1_ParamLimits

0xea41,	// (0x00083095) popup_call_audio_out_window_t1

0xea59,	// (0x000830ad) popup_call_audio_out_window_t2_ParamLimits

0xea59,	// (0x000830ad) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0008375e) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0008375e) popup_call_audio_out_window_t

0xea6e,	// (0x000830c2) bg_popup_call_pane_ParamLimits

0xea6e,	// (0x000830c2) bg_popup_call_pane

0x1aaa,	// (0x000760fe) call_thumbnail_pane_cp_ParamLimits

0x1aaa,	// (0x000760fe) call_thumbnail_pane_cp

0xeaf2,	// (0x00083146) call_type_pane_cp01_ParamLimits

0xeaf2,	// (0x00083146) call_type_pane_cp01

0xeb36,	// (0x0008318a) popup_call_audio_first_window_g1_ParamLimits

0xeb36,	// (0x0008318a) popup_call_audio_first_window_g1

0xeb82,	// (0x000831d6) popup_call_audio_first_window_g2_ParamLimits

0xeb82,	// (0x000831d6) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00083763) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00083763) popup_call_audio_first_window_g

0xebc6,	// (0x0008321a) popup_call_audio_first_window_t1_ParamLimits

0xebc6,	// (0x0008321a) popup_call_audio_first_window_t1

0xec72,	// (0x000832c6) popup_call_audio_first_window_t4_ParamLimits

0xec72,	// (0x000832c6) popup_call_audio_first_window_t4

0xecfe,	// (0x00083352) popup_call_audio_first_window_t5_ParamLimits

0xecfe,	// (0x00083352) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00083768) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00083768) popup_call_audio_first_window_t

0xed2d,	// (0x00083381) bg_popup_call_pane_cp02

0xed37,	// (0x0008338b) call_type_pane_cp023

0xed3f,	// (0x00083393) popup_call_audio_wait_window_g1

0xed47,	// (0x0008339b) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0008376f) popup_call_audio_wait_window_g

0xed4f,	// (0x000833a3) popup_call_audio_wait_window_t3

0xed5d,	// (0x000833b1) bg_popup_call_pane_cp03_ParamLimits

0xed5d,	// (0x000833b1) bg_popup_call_pane_cp03

0xedbd,	// (0x00083411) call_thumbnail_pane_cp011_ParamLimits

0xedbd,	// (0x00083411) call_thumbnail_pane_cp011

0xedc9,	// (0x0008341d) call_type_pane_cp034_ParamLimits

0xedc9,	// (0x0008341d) call_type_pane_cp034

0xee05,	// (0x00083459) popup_call_audio_second_window_g1_ParamLimits

0xee05,	// (0x00083459) popup_call_audio_second_window_g1

0xee41,	// (0x00083495) popup_call_audio_second_window_g2_ParamLimits

0xee41,	// (0x00083495) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00083774) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00083774) popup_call_audio_second_window_g

0xee7d,	// (0x000834d1) popup_call_audio_second_window_t1_ParamLimits

0xee7d,	// (0x000834d1) popup_call_audio_second_window_t1

0xeefe,	// (0x00083552) popup_call_audio_second_window_t2_ParamLimits

0xeefe,	// (0x00083552) popup_call_audio_second_window_t2

0xef34,	// (0x00083588) popup_call_audio_second_window_t3_ParamLimits

0xef34,	// (0x00083588) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00083779) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00083779) popup_call_audio_second_window_t

0xed2d,	// (0x00083381) bg_popup_call_pane_cp04

0xef6a,	// (0x000835be) list_conf_pane

0xef72,	// (0x000835c6) popup_call_audio_conf_window_t1

0xef80,	// (0x000835d4) call_thumbnail_pane_g1

0xef88,	// (0x000835dc) bg_pinb_pane_ParamLimits

0xef88,	// (0x000835dc) bg_pinb_pane

0xef96,	// (0x000835ea) find_pinb_pane

0xef9f,	// (0x000835f3) listscroll_pinb_pane_ParamLimits

0xef9f,	// (0x000835f3) listscroll_pinb_pane

0xefae,	// (0x00083602) pinb_bg_pane_g1

0x1ace,	// (0x00076122) pinb_bg_pane_g2

0x1ada,	// (0x0007612e) pinb_bg_pane_g3

0x1ae6,	// (0x0007613a) pinb_bg_pane_g4

0x1af2,	// (0x00076146) pinb_bg_pane_g5

0x1afe,	// (0x00076152) pinb_bg_pane_g6

0x1b09,	// (0x0007615d) pinb_bg_pane_g7

0x1b14,	// (0x00076168) pinb_bg_pane_g8

0x1b1f,	// (0x00076173) pinb_bg_pane_g9

0x1b29,	// (0x0007617d) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00083780) pinb_bg_pane_g

0x1b3e,	// (0x00076192) grid_pinb_pane

0x1b47,	// (0x0007619b) list_pinb_pane

0x1b50,	// (0x000761a4) scroll_pane_cp01_ParamLimits

0x1b50,	// (0x000761a4) scroll_pane_cp01

0xefc0,	// (0x00083614) find_pinb_pane_g1_ParamLimits

0xefc0,	// (0x00083614) find_pinb_pane_g1

0xefd8,	// (0x0008362c) find_pinb_pane_t1

0xefea,	// (0x0008363e) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0008379a) find_pinb_pane_t

0xefff,	// (0x00083653) input_focus_pane_cp01_ParamLimits

0xefff,	// (0x00083653) input_focus_pane_cp01

0x1b62,	// (0x000761b6) cell_pinb_pane_ParamLimits

0x1b62,	// (0x000761b6) cell_pinb_pane

0x1b94,	// (0x000761e8) cell_pinb_pane_g1_ParamLimits

0x1b94,	// (0x000761e8) cell_pinb_pane_g1

0x1ba4,	// (0x000761f8) cell_pinb_pane_g2_ParamLimits

0x1ba4,	// (0x000761f8) cell_pinb_pane_g2

0xf00b,	// (0x0008365f) cell_pinb_pane_g3_ParamLimits

0xf00b,	// (0x0008365f) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0008379f) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0008379f) cell_pinb_pane_g

0xed2d,	// (0x00083381) grid_highlight_pane_cp01

0x1bb0,	// (0x00076204) list_pinb_item_pane_ParamLimits

0x1bb0,	// (0x00076204) list_pinb_item_pane

0xed2d,	// (0x00083381) list_highlight_pane_cp02

0xf017,	// (0x0008366b) list_pinb_item_pane_g1_ParamLimits

0xf017,	// (0x0008366b) list_pinb_item_pane_g1

0xf024,	// (0x00083678) list_pinb_item_pane_g2_ParamLimits

0xf024,	// (0x00083678) list_pinb_item_pane_g2

0x1bc4,	// (0x00076218) list_pinb_item_pane_g3_ParamLimits

0x1bc4,	// (0x00076218) list_pinb_item_pane_g3

0xf030,	// (0x00083684) list_pinb_item_pane_g4_ParamLimits

0xf030,	// (0x00083684) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x000837a6) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x000837a6) list_pinb_item_pane_g

0xf03c,	// (0x00083690) list_pinb_item_pane_t1_ParamLimits

0xf03c,	// (0x00083690) list_pinb_item_pane_t1

0x1bf3,	// (0x00076247) calc_display_pane

0x1c1b,	// (0x0007626f) calc_paper_pane

0x1c3e,	// (0x00076292) grid_calc_pane

0xed2d,	// (0x00083381) bg_list_pane_cp01

0x1c6c,	// (0x000762c0) clock_g1

0x1c74,	// (0x000762c8) clock_g2

0x0001,

0xf15b,	// (0x000837af) clock_g

0x1c7c,	// (0x000762d0) clock_t1_ParamLimits

0x1c7c,	// (0x000762d0) clock_t1

0x1c91,	// (0x000762e5) clock_t2_ParamLimits

0x1c91,	// (0x000762e5) clock_t2

0x1ca3,	// (0x000762f7) clock_t3_ParamLimits

0x1ca3,	// (0x000762f7) clock_t3

0x1cb5,	// (0x00076309) clock_t4_ParamLimits

0x1cb5,	// (0x00076309) clock_t4

0x1cc7,	// (0x0007631b) clock_t5_ParamLimits

0x1cc7,	// (0x0007631b) clock_t5

0x1cdc,	// (0x00076330) clock_t6_ParamLimits

0x1cdc,	// (0x00076330) clock_t6

0x1cee,	// (0x00076342) clock_t7_ParamLimits

0x1cee,	// (0x00076342) clock_t7

0x1d00,	// (0x00076354) clock_t8_ParamLimits

0x1d00,	// (0x00076354) clock_t8

0x1d14,	// (0x00076368) clock_t9_ParamLimits

0x1d14,	// (0x00076368) clock_t9

0x0008,

0xf160,	// (0x000837b4) clock_t_ParamLimits

0xf160,	// (0x000837b4) clock_t

0xf053,	// (0x000836a7) popup_clock_analogue_window_cp02

0xf053,	// (0x000836a7) popup_clock_digital_window_cp01

0xf05b,	// (0x000836af) listscroll_help_pane

0xed2d,	// (0x00083381) phob_pre_status_pane

0xf065,	// (0x000836b9) grid_qdial_pane

0xed2d,	// (0x00083381) listscroll_mce_pane

0xf06f,	// (0x000836c3) bg_notes_pane

0xf079,	// (0x000836cd) list_notes_pane

0x1d28,	// (0x0007637c) scroll_pane_cp06

0xf083,	// (0x000836d7) bg_calc_paper_pane

0xad8a,	// (0x0007f3de) list_calc_pane

0xf097,	// (0x000836eb) bg_calc_display_pane

0x1d33,	// (0x00076387) calc_display_pane_t1

0x1d45,	// (0x00076399) calc_display_pane_t2

0xada4,	// (0x0007f3f8) calc_display_pane_t3

0x0002,

0xf173,	// (0x000837c7) calc_display_pane_t

0x1d57,	// (0x000763ab) cell_calc_pane_ParamLimits

0x1d57,	// (0x000763ab) cell_calc_pane

0xf0a3,	// (0x000836f7) bg_calc_paper_pane_g1

0xf0af,	// (0x00083703) bg_calc_paper_pane_g2

0xf0bb,	// (0x0008370f) bg_calc_paper_pane_g3

0xf0c7,	// (0x0008371b) bg_calc_paper_pane_g4

0xf0d3,	// (0x00083727) bg_calc_paper_pane_g5

0x1d8c,	// (0x000763e0) bg_calc_paper_pane_g6

0x1d9b,	// (0x000763ef) bg_calc_paper_pane_g7

0x1daa,	// (0x000763fe) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x000837ce) bg_calc_paper_pane_g

0x1dbd,	// (0x00076411) calc_bg_paper_pane_g9

0x1dd0,	// (0x00076424) list_calc_item_pane_ParamLimits

0x1dd0,	// (0x00076424) list_calc_item_pane

0xf0df,	// (0x00083733) list_calc_item_pane_g1

0xadb6,	// (0x0007f40a) list_calc_item_pane_t1_ParamLimits

0xadb6,	// (0x0007f40a) list_calc_item_pane_t1

0x1de6,	// (0x0007643a) list_calc_item_pane_t2_ParamLimits

0x1de6,	// (0x0007643a) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x000837df) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x000837df) list_calc_item_pane_t

0x1e00,	// (0x00076454) cell_calc_pane_g1

0x1e22,	// (0x00076476) grid_highlight_pane_cp02

0x1e44,	// (0x00076498) bg_calc_display_pane_g1

0xadc8,	// (0x0007f41c) bg_calc_display_pane_g2

0x1e4d,	// (0x000764a1) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x000837e9) bg_calc_display_pane_g

0x1e56,	// (0x000764aa) cell_qdial_pane_ParamLimits

0x1e56,	// (0x000764aa) cell_qdial_pane

0x1e6a,	// (0x000764be) cell_qdial_pane_g1_ParamLimits

0x1e6a,	// (0x000764be) cell_qdial_pane_g1

0x1e80,	// (0x000764d4) cell_qdial_pane_g2_ParamLimits

0x1e80,	// (0x000764d4) cell_qdial_pane_g2

0x1e91,	// (0x000764e5) cell_qdial_pane_g3_ParamLimits

0x1e91,	// (0x000764e5) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x000837f0) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x000837f0) cell_qdial_pane_g

0x1eb3,	// (0x00076507) cell_qdial_pane_t1_ParamLimits

0x1eb3,	// (0x00076507) cell_qdial_pane_t1

0x1ecb,	// (0x0007651f) cell_qdial_pane_t2_ParamLimits

0x1ecb,	// (0x0007651f) cell_qdial_pane_t2

0x1ede,	// (0x00076532) cell_qdial_pane_t3_ParamLimits

0x1ede,	// (0x00076532) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x000837f9) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x000837f9) cell_qdial_pane_t

0xed2d,	// (0x00083381) grid_highlight_pane_cp04

0x1ef1,	// (0x00076545) thumbnail_qdial_pane_ParamLimits

0x1ef1,	// (0x00076545) thumbnail_qdial_pane

0x1f4d,	// (0x000765a1) list_help_pane

0x1f56,	// (0x000765aa) scroll_pane_cp02

0x1f5f,	// (0x000765b3) help_list_pane_t1_ParamLimits

0x1f5f,	// (0x000765b3) help_list_pane_t1

0xadd2,	// (0x0007f426) bg_notes_pane_g2

0xadda,	// (0x0007f42e) bg_notes_pane_g3

0xade2,	// (0x0007f436) notes_bg_pane_g1

0xadea,	// (0x0007f43e) notes_bg_pane_g4

0xadf2,	// (0x0007f446) notes_bg_pane_g5

0xadfa,	// (0x0007f44e) notes_bg_pane_g6

0xae02,	// (0x0007f456) notes_bg_pane_g7

0xae0a,	// (0x0007f45e) notes_bg_pane_g8

0xae12,	// (0x0007f466) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00083817) notes_bg_pane_g

0x1f7f,	// (0x000765d3) list_notes_text_pane_ParamLimits

0x1f7f,	// (0x000765d3) list_notes_text_pane

0x1f96,	// (0x000765ea) list_notes_text_pane_g1

0x0d77,	// (0x000753cb) list_notes_text_pane_t1

0xf097,	// (0x000836eb) listscroll_cale_week_pane

0x1fcd,	// (0x00076621) bg_cale_heading_pane

0x1fe5,	// (0x00076639) bg_cale_pane_cp01

0x1ffe,	// (0x00076652) cale_week_corner_pane

0x200f,	// (0x00076663) cale_week_day_heading_pane

0x2027,	// (0x0007667b) cale_week_scroll_pane_g1

0x203c,	// (0x00076690) cale_week_scroll_pane_g2

0x204d,	// (0x000766a1) cale_week_scroll_pane_g3

0x205e,	// (0x000766b2) cale_week_scroll_pane_g4

0x206f,	// (0x000766c3) cale_week_scroll_pane_g5

0x2082,	// (0x000766d6) cale_week_scroll_pane_g6

0x2095,	// (0x000766e9) cale_week_scroll_pane_g7

0x20a8,	// (0x000766fc) cale_week_scroll_pane_g8

0x20bb,	// (0x0007670f) cale_week_scroll_pane_g9

0x20cc,	// (0x00076720) cale_week_scroll_pane_g10

0x20dd,	// (0x00076731) cale_week_scroll_pane_g11

0x20ee,	// (0x00076742) cale_week_scroll_pane_g12

0x20ff,	// (0x00076753) cale_week_scroll_pane_g13

0x2110,	// (0x00076764) cale_week_scroll_pane_g14

0x2121,	// (0x00076775) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00083826) cale_week_scroll_pane_g

0x2132,	// (0x00076786) cale_week_time_pane

0x2145,	// (0x00076799) grid_cale_week_pane

0x216c,	// (0x000767c0) scroll_pane_cp08

0x2186,	// (0x000767da) cell_cale_week_pane_ParamLimits

0x2186,	// (0x000767da) cell_cale_week_pane

0x21c6,	// (0x0007681a) cale_week_day_heading_pane_t1

0x21da,	// (0x0007682e) cale_week_day_heading_pane_t2

0x21ee,	// (0x00076842) cale_week_day_heading_pane_t3

0x2202,	// (0x00076856) cale_week_day_heading_pane_t4

0x2216,	// (0x0007686a) cale_week_day_heading_pane_t5

0x222a,	// (0x0007687e) cale_week_day_heading_pane_t6

0x2240,	// (0x00076894) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00083845) cale_week_day_heading_pane_t

0x2254,	// (0x000768a8) bg_cale_side_pane

0x2262,	// (0x000768b6) cale_week_time_pane_t1

0x227a,	// (0x000768ce) cale_week_time_pane_t2

0x2292,	// (0x000768e6) cale_week_time_pane_t3

0x22aa,	// (0x000768fe) cale_week_time_pane_t4

0x22c2,	// (0x00076916) cale_week_time_pane_t5

0x22da,	// (0x0007692e) cale_week_time_pane_t6

0x22f2,	// (0x00076946) cale_week_time_pane_t7

0x230a,	// (0x0007695e) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00083854) cale_week_time_pane_t

0x2322,	// (0x00076976) cell_cale_week_pane_g2

0x233b,	// (0x0007698f) cell_cale_week_pane_g3_ParamLimits

0x233b,	// (0x0007698f) cell_cale_week_pane_g3

0x2353,	// (0x000769a7) grid_highlight_pane_cp07

0x235b,	// (0x000769af) listscroll_gms_pane

0x2365,	// (0x000769b9) grid_gms_pane

0x236e,	// (0x000769c2) listscroll_gms_pane_g1

0x2376,	// (0x000769ca) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00083865) listscroll_gms_pane_g

0x237e,	// (0x000769d2) scroll_pane_cp010

0x2389,	// (0x000769dd) cell_gms_pane_ParamLimits

0x2389,	// (0x000769dd) cell_gms_pane

0x239c,	// (0x000769f0) cell_gms_pane_g1

0x23a4,	// (0x000769f8) cell_gms_pane_g2

0x1f96,	// (0x000765ea) cell_gms_pane_g3

0x23ac,	// (0x00076a00) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0008386a) cell_gms_pane_g

0x23b5,	// (0x00076a09) grid_highlight_pane_cp09

0x5ad2,	// (0x0007a126) phob_pre_status_pane_g1

0x5ada,	// (0x0007a12e) phob_pre_status_pane_g2

0x5ae2,	// (0x0007a136) phob_pre_status_pane_g3

0x5aea,	// (0x0007a13e) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x00083c59) phob_pre_status_pane_g

0x5afc,	// (0x0007a150) phob_pre_status_pane_t1

0x5b0a,	// (0x0007a15e) phob_pre_status_pane_t2

0x5b1a,	// (0x0007a16e) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x00083c64) phob_pre_status_pane_t

0xed2d,	// (0x00083381) bg_list_pane_cp05

0xae22,	// (0x0007f476) grid_vorec_pane

0xae2a,	// (0x0007f47e) vorec_t1

0xae38,	// (0x0007f48c) vorec_t2

0xae46,	// (0x0007f49a) vorec_t3

0xae54,	// (0x0007f4a8) vorec_t4

0xae62,	// (0x0007f4b6) vorec_t5

0xae70,	// (0x0007f4c4) vorec_t6

0x0006,

0xf21f,	// (0x00083873) vorec_t

0xae8c,	// (0x0007f4e0) wait_bar_pane_cp01

0x23bd,	// (0x00076a11) cell_vorec_pane_ParamLimits

0x23bd,	// (0x00076a11) cell_vorec_pane

0x23d0,	// (0x00076a24) cell_vorec_pane_g1

0xed2d,	// (0x00083381) grid_highlight_pane_cp05

0x23f2,	// (0x00076a46) cams_zoom_pane

0x2401,	// (0x00076a55) image_vga_pane

0x241b,	// (0x00076a6f) main_camera_pane_g1

0x242d,	// (0x00076a81) main_camera_pane_g2

0x243f,	// (0x00076a93) main_camera_pane_g3

0x2451,	// (0x00076aa5) main_camera_pane_g4

0x2463,	// (0x00076ab7) main_camera_pane_g5

0x2475,	// (0x00076ac9) main_camera_pane_g6

0x2487,	// (0x00076adb) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00083882) main_camera_pane_g

0x24a5,	// (0x00076af9) main_camera_pane_t1

0x24bb,	// (0x00076b0f) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00083893) main_camera_pane_t

0x24f7,	// (0x00076b4b) cams_zoom_pane_cp_ParamLimits

0x24f7,	// (0x00076b4b) cams_zoom_pane_cp

0x251f,	// (0x00076b73) image_cif_pane_ParamLimits

0x251f,	// (0x00076b73) image_cif_pane

0x255a,	// (0x00076bae) image_subqcif_pane

0x2562,	// (0x00076bb6) main_video_pane_g1_ParamLimits

0x2562,	// (0x00076bb6) main_video_pane_g1

0x2586,	// (0x00076bda) main_video_pane_g2_ParamLimits

0x2586,	// (0x00076bda) main_video_pane_g2

0x25bc,	// (0x00076c10) main_video_pane_g3_ParamLimits

0x25bc,	// (0x00076c10) main_video_pane_g3

0x25ec,	// (0x00076c40) main_video_pane_g4_ParamLimits

0x25ec,	// (0x00076c40) main_video_pane_g4

0x261c,	// (0x00076c70) main_video_pane_g5_ParamLimits

0x261c,	// (0x00076c70) main_video_pane_g5

0x2636,	// (0x00076c8a) main_video_pane_g6_ParamLimits

0x2636,	// (0x00076c8a) main_video_pane_g6

0x0006,

0xf244,	// (0x00083898) main_video_pane_g_ParamLimits

0xf244,	// (0x00083898) main_video_pane_g

0x2661,	// (0x00076cb5) main_video_pane_t1_ParamLimits

0x2661,	// (0x00076cb5) main_video_pane_t1

0x26aa,	// (0x00076cfe) cams_zoom_pane_g1

0x26b3,	// (0x00076d07) cams_zoom_pane_g2

0x26bc,	// (0x00076d10) cams_zoom_pane_g3

0x26c5,	// (0x00076d19) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x000838a7) cams_zoom_pane_g

0x26e2,	// (0x00076d36) grid_cams_pane

0x26fc,	// (0x00076d50) linegrid_cams_pane

0x270f,	// (0x00076d63) cell_cams_pane_ParamLimits

0x270f,	// (0x00076d63) cell_cams_pane

0x272f,	// (0x00076d83) cams_burst_image_pane

0x2737,	// (0x00076d8b) cell_cams_pane_g1

0xed2d,	// (0x00083381) grid_highlight_pane_cp03

0x1e00,	// (0x00076454) mp_bg_pane_g1

0xed2d,	// (0x00083381) bg_list_pane_cp03

0xb690,	// (0x0007fce4) bg_mp_pane

0xb698,	// (0x0007fcec) grid_mp_pane

0xb6a0,	// (0x0007fcf4) media_player_g1

0xb6a8,	// (0x0007fcfc) media_player_t1

0xb6b6,	// (0x0007fd0a) media_player_t2

0xb6c4,	// (0x0007fd18) media_player_t3

0xb6d2,	// (0x0007fd26) media_player_t4

0xb6e0,	// (0x0007fd34) media_player_t5

0xb6ee,	// (0x0007fd42) media_player_t6

0xb6fc,	// (0x0007fd50) media_player_t7

0x0006,

0xf5ef,	// (0x00083c43) media_player_t

0xb70a,	// (0x0007fd5e) wait_bar_pane_cp02

0xf5d4,	// (0x00083c28) main_usb_pane_t

0x5ac9,	// (0x0007a11d) cell_mp_pane

0x1e00,	// (0x00076454) cell_mp_pane_g1

0xed2d,	// (0x00083381) grid_highlight_pane_cp06

0x273f,	// (0x00076d93) grid_skin_colour_pane

0x2747,	// (0x00076d9b) list_highlight_pane_cp03

0x274f,	// (0x00076da3) skin_g1

0x2757,	// (0x00076dab) skin_t1

0x2766,	// (0x00076dba) skin_t2

0x0001,

0xf288,	// (0x000838dc) skin_t

0x2774,	// (0x00076dc8) cell_skin_colour_pane_ParamLimits

0x2774,	// (0x00076dc8) cell_skin_colour_pane

0x2794,	// (0x00076de8) cell_skin_colour_pane_g1

0x27ff,	// (0x00076e53) call_video_g1_ParamLimits

0x27ff,	// (0x00076e53) call_video_g1

0x281b,	// (0x00076e6f) call_video_g2_ParamLimits

0x281b,	// (0x00076e6f) call_video_g2

0x0001,

0xf28d,	// (0x000838e1) call_video_g_ParamLimits

0xf28d,	// (0x000838e1) call_video_g

0x286d,	// (0x00076ec1) call_video_uplink_pane_cp1_ParamLimits

0x286d,	// (0x00076ec1) call_video_uplink_pane_cp1

0x28d2,	// (0x00076f26) call_video_uplink_pane_cp2

0x2914,	// (0x00076f68) video_down_crop_pane_ParamLimits

0x2914,	// (0x00076f68) video_down_crop_pane

0x29fd,	// (0x00077051) video_down_pane_ParamLimits

0x29fd,	// (0x00077051) video_down_pane

0x2af4,	// (0x00077148) video_down_subqcif_pane_ParamLimits

0x2af4,	// (0x00077148) video_down_subqcif_pane

0x2b0c,	// (0x00077160) video_down_subqcif_pane_cp_ParamLimits

0x2b0c,	// (0x00077160) video_down_subqcif_pane_cp

0x2b47,	// (0x0007719b) im_reading_pane_ParamLimits

0x2b47,	// (0x0007719b) im_reading_pane

0x2b59,	// (0x000771ad) im_writing_pane_ParamLimits

0x2b59,	// (0x000771ad) im_writing_pane

0x2b77,	// (0x000771cb) im_reading_pane_t1

0x2bb3,	// (0x00077207) list_im_pane

0x2bc4,	// (0x00077218) scroll_pane_cp07

0x2bdd,	// (0x00077231) im_writing_pane_t1_ParamLimits

0x2bdd,	// (0x00077231) im_writing_pane_t1

0x2bf2,	// (0x00077246) im_writing_pane_t2_ParamLimits

0x2bf2,	// (0x00077246) im_writing_pane_t2

0x0001,

0xf297,	// (0x000838eb) im_writing_pane_t_ParamLimits

0xf297,	// (0x000838eb) im_writing_pane_t

0xed2d,	// (0x00083381) input_focus_pane_cp04

0xed2d,	// (0x00083381) input_focus_pane_cp05

0x2c0f,	// (0x00077263) list_im_single_pane_ParamLimits

0x2c0f,	// (0x00077263) list_im_single_pane

0x2c25,	// (0x00077279) list_single_im_pane_t1

0x5a89,	// (0x0007a0dd) blid_accuracy_pane

0x5a91,	// (0x0007a0e5) blid_compass_pane

0x5a9b,	// (0x0007a0ef) main_location_t1

0x5aab,	// (0x0007a0ff) main_location_t2

0x5abb,	// (0x0007a10f) main_location_t3

0x0002,

0xf5fe,	// (0x00083c52) main_location_t

0xed2d,	// (0x00083381) aid_levels_location

0x1e00,	// (0x00076454) blid_accuracy_pane_g1

0x1e00,	// (0x00076454) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0008394d) blid_accuracy_pane_g

0x2c5f,	// (0x000772b3) wml_content_pane

0x2c9d,	// (0x000772f1) wml_button_pane_ParamLimits

0x2c9d,	// (0x000772f1) wml_button_pane

0x2cb1,	// (0x00077305) wml_list_single_large_pane_ParamLimits

0x2cb1,	// (0x00077305) wml_list_single_large_pane

0x2cc8,	// (0x0007731c) wml_list_single_medium_pane_ParamLimits

0x2cc8,	// (0x0007731c) wml_list_single_medium_pane

0x2ce0,	// (0x00077334) wml_list_single_small_pane_ParamLimits

0x2ce0,	// (0x00077334) wml_list_single_small_pane

0x2cfe,	// (0x00077352) wml_selection_box_pane_ParamLimits

0x2cfe,	// (0x00077352) wml_selection_box_pane

0x2d11,	// (0x00077365) wml_list_single_pane_t1

0x2d20,	// (0x00077374) wml_list_single_medium_pane_t1

0x2d2f,	// (0x00077383) wml_list_single_large_pane_t1

0x2d3e,	// (0x00077392) input_focus_pane_cp02_ParamLimits

0x2d3e,	// (0x00077392) input_focus_pane_cp02

0x2d51,	// (0x000773a5) wml_selection_box_pane_g1

0x2d5a,	// (0x000773ae) wml_selection_box_pane_t1_ParamLimits

0x2d5a,	// (0x000773ae) wml_selection_box_pane_t1

0xef88,	// (0x000835dc) bg_wml_button_pane_ParamLimits

0xef88,	// (0x000835dc) bg_wml_button_pane

0x2d72,	// (0x000773c6) wml_button_pane_g1

0x2d7a,	// (0x000773ce) wml_button_pane_t1

0x2d72,	// (0x000773c6) wml_button_bg_pane_g1

0x2d8a,	// (0x000773de) wml_button_bg_pane_g2

0x2d92,	// (0x000773e6) wml_button_bg_pane_g3

0x2d9a,	// (0x000773ee) wml_button_bg_pane_g4

0x2da2,	// (0x000773f6) wml_button_bg_pane_g5

0x2daa,	// (0x000773fe) wml_button_bg_pane_g6

0x2db2,	// (0x00077406) wml_button_bg_pane_g7

0x2dba,	// (0x0007740e) wml_button_bg_pane_g8

0x2dc2,	// (0x00077416) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x000838f0) wml_button_bg_pane_g

0x2dca,	// (0x0007741e) bg_list_pane_cp02

0x2dd2,	// (0x00077426) mce_header_pane_ParamLimits

0x2dd2,	// (0x00077426) mce_header_pane

0x2de8,	// (0x0007743c) mce_icon_pane

0x2de8,	// (0x0007743c) mce_image_pane

0x2df1,	// (0x00077445) mce_text_pane_ParamLimits

0x2df1,	// (0x00077445) mce_text_pane

0x2e04,	// (0x00077458) scroll_pane_cp03

0x2c95,	// (0x000772e9) scroll_pane_cp04

0x2e0e,	// (0x00077462) scroll_pane_cp05_ParamLimits

0x2e0e,	// (0x00077462) scroll_pane_cp05

0x2e1a,	// (0x0007746e) mce_header_field_pane_ParamLimits

0x2e1a,	// (0x0007746e) mce_header_field_pane

0x2e31,	// (0x00077485) mce_header_field_pane_2_ParamLimits

0x2e31,	// (0x00077485) mce_header_field_pane_2

0x2e47,	// (0x0007749b) mce_header_field_pane_3

0x2e4f,	// (0x000774a3) list_single_mce_message_pane_ParamLimits

0x2e4f,	// (0x000774a3) list_single_mce_message_pane

0x2e67,	// (0x000774bb) list_single_mce_smart_pane_ParamLimits

0x2e67,	// (0x000774bb) list_single_mce_smart_pane

0x2e8a,	// (0x000774de) input_focus_pane_cp03

0x2e93,	// (0x000774e7) list_header_data_pane

0x2e9b,	// (0x000774ef) mce_header_field_pane_t1

0x2eab,	// (0x000774ff) list_single_mce_header_pane_ParamLimits

0x2eab,	// (0x000774ff) list_single_mce_header_pane

0x2ebf,	// (0x00077513) list_single_mce_header_pane_t1

0x2ece,	// (0x00077522) list_single_mce_message_pane_g1

0x2ed6,	// (0x0007752a) list_single_mce_message_pane_t1

0x2f02,	// (0x00077556) bg_cale_heading_pane_cp01_ParamLimits

0x2f02,	// (0x00077556) bg_cale_heading_pane_cp01

0x2f25,	// (0x00077579) bg_cale_pane_cp02_ParamLimits

0x2f25,	// (0x00077579) bg_cale_pane_cp02

0x2f48,	// (0x0007759c) cale_month_corner_pane

0x2f5e,	// (0x000775b2) cale_month_day_heading_pane_ParamLimits

0x2f5e,	// (0x000775b2) cale_month_day_heading_pane

0x2f91,	// (0x000775e5) cale_month_pane_g1_ParamLimits

0x2f91,	// (0x000775e5) cale_month_pane_g1

0x2fad,	// (0x00077601) cale_month_pane_g2_ParamLimits

0x2fad,	// (0x00077601) cale_month_pane_g2

0x2fc8,	// (0x0007761c) cale_month_pane_g3_ParamLimits

0x2fc8,	// (0x0007761c) cale_month_pane_g3

0x2ff4,	// (0x00077648) cale_month_pane_g4_ParamLimits

0x2ff4,	// (0x00077648) cale_month_pane_g4

0x3020,	// (0x00077674) cale_month_pane_g5_ParamLimits

0x3020,	// (0x00077674) cale_month_pane_g5

0x3054,	// (0x000776a8) cale_month_pane_g6_ParamLimits

0x3054,	// (0x000776a8) cale_month_pane_g6

0x3090,	// (0x000776e4) cale_month_pane_g7_ParamLimits

0x3090,	// (0x000776e4) cale_month_pane_g7

0x30cc,	// (0x00077720) cale_month_pane_g8_ParamLimits

0x30cc,	// (0x00077720) cale_month_pane_g8

0x3108,	// (0x0007775c) cale_month_pane_g9_ParamLimits

0x3108,	// (0x0007775c) cale_month_pane_g9

0x3142,	// (0x00077796) cale_month_pane_g10_ParamLimits

0x3142,	// (0x00077796) cale_month_pane_g10

0x317c,	// (0x000777d0) cale_month_pane_g11_ParamLimits

0x317c,	// (0x000777d0) cale_month_pane_g11

0x31b6,	// (0x0007780a) cale_month_pane_g12_ParamLimits

0x31b6,	// (0x0007780a) cale_month_pane_g12

0x31f0,	// (0x00077844) cale_month_pane_g13_ParamLimits

0x31f0,	// (0x00077844) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00083903) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00083903) cale_month_pane_g

0x323c,	// (0x00077890) cale_month_week_pane

0x324f,	// (0x000778a3) grid_cale_month_pane_ParamLimits

0x324f,	// (0x000778a3) grid_cale_month_pane

0x327d,	// (0x000778d1) cale_month_day_heading_pane_t1

0x32db,	// (0x0007792f) cale_month_day_heading_pane_t2

0x3340,	// (0x00077994) cale_month_day_heading_pane_t3

0x33a5,	// (0x000779f9) cale_month_day_heading_pane_t4

0x340a,	// (0x00077a5e) cale_month_day_heading_pane_t5

0x347f,	// (0x00077ad3) cale_month_day_heading_pane_t6

0x34f4,	// (0x00077b48) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0008391e) cale_month_day_heading_pane_t

0x2254,	// (0x000768a8) bg_cale_side_pane_cp01

0x3569,	// (0x00077bbd) cale_month_week_pane_t1

0x3580,	// (0x00077bd4) cale_month_week_pane_t2

0x3597,	// (0x00077beb) cale_month_week_pane_t3

0x35ae,	// (0x00077c02) cale_month_week_pane_t4

0x35c5,	// (0x00077c19) cale_month_week_pane_t5

0x35dc,	// (0x00077c30) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0008392d) cale_month_week_pane_t

0x35f3,	// (0x00077c47) cell_cale_month_pane_ParamLimits

0x35f3,	// (0x00077c47) cell_cale_month_pane

0xaf7c,	// (0x0007f5d0) cell_cale_month_pane_g1

0x36c9,	// (0x00077d1d) cell_cale_month_pane_t1_ParamLimits

0x36c9,	// (0x00077d1d) cell_cale_month_pane_t1

0x2353,	// (0x000769a7) grid_highlight_pane_cp08

0x1e00,	// (0x00076454) main_smil_g1

0x36e5,	// (0x00077d39) smil_status_pane

0x36f0,	// (0x00077d44) smil_text_pane

0xb5a8,	// (0x0007fbfc) bg_popup_call3_rect_pane_g8

0xb5b0,	// (0x0007fc04) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00083be6) bg_popup_call3_rect_pane_g

0xb832,	// (0x0007fe86) smil_status_volume_pane_g1

0x3704,	// (0x00077d58) smil_status_pane_t1

0xb865,	// (0x0007feb9) volume_smil_pane

0x371b,	// (0x00077d6f) list_smil_text_pane

0x3725,	// (0x00077d79) scroll_pane_cp011

0x3730,	// (0x00077d84) smil_text_list_pane_t1_ParamLimits

0x3730,	// (0x00077d84) smil_text_list_pane_t1

0xaf88,	// (0x0007f5dc) aid_volume_smil_ParamLimits

0xaf88,	// (0x0007f5dc) aid_volume_smil

0x1e00,	// (0x00076454) smil_volume_pane_g1

0x1e00,	// (0x00076454) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0008394d) smil_volume_pane_g

0xf097,	// (0x000836eb) listscroll_cale_day_pane

0x3784,	// (0x00077dd8) bg_cale_pane

0x379c,	// (0x00077df0) list_cale_pane

0x37ad,	// (0x00077e01) scroll_pane_cp09

0x37be,	// (0x00077e12) cale_bg_pane_g1

0x37c6,	// (0x00077e1a) cale_bg_pane_g2

0x37ce,	// (0x00077e22) cale_bg_pane_g3

0x37d6,	// (0x00077e2a) cale_bg_pane_g4

0x37de,	// (0x00077e32) cale_bg_pane_g5

0x37e6,	// (0x00077e3a) cale_bg_pane_g6

0x37ee,	// (0x00077e42) cale_bg_pane_g7

0x37f6,	// (0x00077e4a) cale_bg_pane_g8

0x37fe,	// (0x00077e52) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00083952) cale_bg_pane_g

0x3806,	// (0x00077e5a) list_cale_time_pane_ParamLimits

0x3806,	// (0x00077e5a) list_cale_time_pane

0x381b,	// (0x00077e6f) list_cale_time_pane_g1_ParamLimits

0x381b,	// (0x00077e6f) list_cale_time_pane_g1

0x3827,	// (0x00077e7b) list_cale_time_pane_g2_ParamLimits

0x3827,	// (0x00077e7b) list_cale_time_pane_g2

0x3834,	// (0x00077e88) list_cale_time_pane_g3_ParamLimits

0x3834,	// (0x00077e88) list_cale_time_pane_g3

0x3850,	// (0x00077ea4) list_cale_time_pane_g4_ParamLimits

0x3850,	// (0x00077ea4) list_cale_time_pane_g4

0x385e,	// (0x00077eb2) list_cale_time_pane_g5_ParamLimits

0x385e,	// (0x00077eb2) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00083965) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00083965) list_cale_time_pane_g

0x3879,	// (0x00077ecd) list_cale_time_pane_t1_ParamLimits

0x3879,	// (0x00077ecd) list_cale_time_pane_t1

0x38a1,	// (0x00077ef5) list_cale_time_pane_t2_ParamLimits

0x38a1,	// (0x00077ef5) list_cale_time_pane_t2

0x3f77,	// (0x000785cb) aid_blid_cardinal_pane

0x3fc1,	// (0x00078615) compass_pane_t4

0x38c9,	// (0x00077f1d) list_cale_time_pane_t4_ParamLimits

0x38c9,	// (0x00077f1d) list_cale_time_pane_t4

0x3fcf,	// (0x00078623) compass_pane_t5

0x3fdd,	// (0x00078631) compass_pane_t6

0x3feb,	// (0x0007863f) compass_pane_t7

0x406b,	// (0x000786bf) navi_pane_cc_t1

0x4288,	// (0x000788dc) aid_phob_thumbnail_center_pane

0x48ba,	// (0x00078f0e) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00083972) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00083972) list_cale_time_pane_t

0xe95d,	// (0x00082fb1) bg_popup_window_pane_cp02_ParamLimits

0xe95d,	// (0x00082fb1) bg_popup_window_pane_cp02

0x38f1,	// (0x00077f45) heading_pane_cp01_ParamLimits

0x38f1,	// (0x00077f45) heading_pane_cp01

0x38fd,	// (0x00077f51) loc_req_pane_ParamLimits

0x38fd,	// (0x00077f51) loc_req_pane

0x390d,	// (0x00077f61) loc_type_pane_ParamLimits

0x390d,	// (0x00077f61) loc_type_pane

0x391f,	// (0x00077f73) loc_type_pane_t1_ParamLimits

0x391f,	// (0x00077f73) loc_type_pane_t1

0x3931,	// (0x00077f85) loc_type_pane_t2_ParamLimits

0x3931,	// (0x00077f85) loc_type_pane_t2

0x3943,	// (0x00077f97) loc_type_pane_t3_ParamLimits

0x3943,	// (0x00077f97) loc_type_pane_t3

0x0002,

0xf325,	// (0x00083979) loc_type_pane_t_ParamLimits

0xf325,	// (0x00083979) loc_type_pane_t

0x3955,	// (0x00077fa9) list_loc_req_pane

0x395f,	// (0x00077fb3) scroll_pane_cp012

0x396a,	// (0x00077fbe) list_single_loc_request_popup_menu_pane_ParamLimits

0x396a,	// (0x00077fbe) list_single_loc_request_popup_menu_pane

0x3977,	// (0x00077fcb) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3977,	// (0x00077fcb) list_single_loc_request_popup_menu_pane_g1

0x3983,	// (0x00077fd7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3983,	// (0x00077fd7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00083980) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00083980) list_single_loc_request_popup_menu_pane_g

0x398f,	// (0x00077fe3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x398f,	// (0x00077fe3) list_single_loc_request_popup_menu_pane_t1

0xef88,	// (0x000835dc) bg_popup_window_pane_cp03_ParamLimits

0xef88,	// (0x000835dc) bg_popup_window_pane_cp03

0x39a5,	// (0x00077ff9) heading_loc_req_pane_ParamLimits

0x39a5,	// (0x00077ff9) heading_loc_req_pane

0x39b1,	// (0x00078005) popup_dyc_status_message_window_g1_ParamLimits

0x39b1,	// (0x00078005) popup_dyc_status_message_window_g1

0x39c5,	// (0x00078019) popup_dyc_status_message_window_t1_ParamLimits

0x39c5,	// (0x00078019) popup_dyc_status_message_window_t1

0x39da,	// (0x0007802e) popup_dyc_status_message_window_t2_ParamLimits

0x39da,	// (0x0007802e) popup_dyc_status_message_window_t2

0x39ef,	// (0x00078043) popup_dyc_status_message_window_t3_ParamLimits

0x39ef,	// (0x00078043) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00083985) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00083985) popup_dyc_status_message_window_t

0xed2d,	// (0x00083381) bg_heading_pane_cp01

0x3a0b,	// (0x0007805f) heading_loc_req_pane_g1

0x3a13,	// (0x00078067) heading_loc_req_pane_g2

0x3a1b,	// (0x0007806f) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0008398c) heading_loc_req_pane_g

0x3a23,	// (0x00078077) heading_loc_req_pane_t1

0x3a4a,	// (0x0007809e) bg_popup_sub_pane_cp01_ParamLimits

0x3a4a,	// (0x0007809e) bg_popup_sub_pane_cp01

0x3a58,	// (0x000780ac) popup_cale_events_window_g1_ParamLimits

0x3a58,	// (0x000780ac) popup_cale_events_window_g1

0x3a78,	// (0x000780cc) popup_cale_events_window_g2_ParamLimits

0x3a78,	// (0x000780cc) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x000839c0) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x000839c0) popup_cale_events_window_g

0x3a98,	// (0x000780ec) popup_cale_events_window_t1_ParamLimits

0x3a98,	// (0x000780ec) popup_cale_events_window_t1

0x3aaa,	// (0x000780fe) popup_cale_events_window_t2_ParamLimits

0x3aaa,	// (0x000780fe) popup_cale_events_window_t2

0x3ae8,	// (0x0007813c) popup_cale_events_window_t3_ParamLimits

0x3ae8,	// (0x0007813c) popup_cale_events_window_t3

0x3b22,	// (0x00078176) popup_cale_events_window_t4_ParamLimits

0x3b22,	// (0x00078176) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x000839c5) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x000839c5) popup_cale_events_window_t

0x3b58,	// (0x000781ac) call_type_pane

0x3b68,	// (0x000781bc) popup_call_status_window_g1

0x3b7c,	// (0x000781d0) popup_call_status_window_g2

0x3b90,	// (0x000781e4) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x000839ce) popup_call_status_window_g

0x3ba0,	// (0x000781f4) call_type_pane_g1

0x3ba9,	// (0x000781fd) call_type_pane_g2

0x0001,

0xf381,	// (0x000839d5) call_type_pane_g

0xed2d,	// (0x00083381) bg_popup_sub_pane_cp02

0x3bb2,	// (0x00078206) listscroll_popup_wml_pane

0x3bba,	// (0x0007820e) list_wml_pane

0x3bc4,	// (0x00078218) scroll_pane_cp013

0x3bcf,	// (0x00078223) list_single_graphic_popup_wml_pane_ParamLimits

0x3bcf,	// (0x00078223) list_single_graphic_popup_wml_pane

0x1e00,	// (0x00076454) list_single_graphic_popup_wml_pane_g1

0x3be3,	// (0x00078237) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x000839da) list_single_graphic_popup_wml_pane_g

0x3beb,	// (0x0007823f) list_single_graphic_popup_wml_pane_t1

0x3c01,	// (0x00078255) aid_call_pane

0xef80,	// (0x000835d4) popup_clock_analogue_window_g1

0xef80,	// (0x000835d4) popup_clock_analogue_window_g2

0xb021,	// (0x0007f675) popup_clock_analogue_window_g3

0xb021,	// (0x0007f675) popup_clock_analogue_window_g4

0x1e00,	// (0x00076454) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x000839df) popup_clock_analogue_window_g

0xb029,	// (0x0007f67d) popup_clock_analogue_window_t1

0xb037,	// (0x0007f68b) clock_digital_number_pane_ParamLimits

0xb037,	// (0x0007f68b) clock_digital_number_pane

0xb043,	// (0x0007f697) clock_digital_number_pane_cp02_ParamLimits

0xb043,	// (0x0007f697) clock_digital_number_pane_cp02

0xb04f,	// (0x0007f6a3) clock_digital_number_pane_cp03_ParamLimits

0xb04f,	// (0x0007f6a3) clock_digital_number_pane_cp03

0xb05b,	// (0x0007f6af) clock_digital_number_pane_cp04_ParamLimits

0xb05b,	// (0x0007f6af) clock_digital_number_pane_cp04

0xb067,	// (0x0007f6bb) clock_digital_separator_pane_ParamLimits

0xb067,	// (0x0007f6bb) clock_digital_separator_pane

0xb073,	// (0x0007f6c7) popup_clock_digital_window_t1

0x1e00,	// (0x00076454) clock_digital_number_pane_g1

0x1e00,	// (0x00076454) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0008394d) clock_digital_number_pane_g

0x1e00,	// (0x00076454) clock_digital_separator_pane_g1

0x1e00,	// (0x00076454) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0008394d) clock_digital_separator_pane_g

0xed2d,	// (0x00083381) bg_popup_window_pane_cp04

0x3c09,	// (0x0007825d) heading_pane_cp03

0x3c11,	// (0x00078265) listscroll_popup_gms_pane

0x3c19,	// (0x0007826d) grid_large_graphic_popup_pane

0x3c23,	// (0x00078277) listscroll_popup_gms_pane_g1

0x3c2b,	// (0x0007827f) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x000839ea) listscroll_popup_gms_pane_g

0x2c95,	// (0x000772e9) scroll_pane_cp014

0x3c33,	// (0x00078287) cell_large_graphic_popup_pane_ParamLimits

0x3c33,	// (0x00078287) cell_large_graphic_popup_pane

0x3c4b,	// (0x0007829f) cell_large_graphic_popup_pane_g1_ParamLimits

0x3c4b,	// (0x0007829f) cell_large_graphic_popup_pane_g1

0x3c57,	// (0x000782ab) cell_large_graphic_popup_pane_g2_ParamLimits

0x3c57,	// (0x000782ab) cell_large_graphic_popup_pane_g2

0x3c63,	// (0x000782b7) cell_large_graphic_popup_pane_g3_ParamLimits

0x3c63,	// (0x000782b7) cell_large_graphic_popup_pane_g3

0x3c70,	// (0x000782c4) cell_large_graphic_popup_pane_g4_ParamLimits

0x3c70,	// (0x000782c4) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x000839ef) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x000839ef) cell_large_graphic_popup_pane_g

0x3c80,	// (0x000782d4) grid_highlight_pane_cp010

0x1e00,	// (0x00076454) bg_popup_call_pane_g1

0x3c8a,	// (0x000782de) list_single_graphic_popup_conf_pane_ParamLimits

0x3c8a,	// (0x000782de) list_single_graphic_popup_conf_pane

0x3c9c,	// (0x000782f0) list_highlight_pane_cp01

0x3ca5,	// (0x000782f9) list_single_graphic_popup_conf_pane_g1

0x3cad,	// (0x00078301) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x000839f8) list_single_graphic_popup_conf_pane_g

0x3cb5,	// (0x00078309) list_single_graphic_popup_conf_pane_t1

0x3cc3,	// (0x00078317) linegrid_cams_pane_g1

0x3ccc,	// (0x00078320) linegrid_cams_pane_g2

0x1f96,	// (0x000765ea) linegrid_cams_pane_g3

0x3cd5,	// (0x00078329) linegrid_cams_pane_g4

0x3cde,	// (0x00078332) linegrid_cams_pane_g5

0x3ce7,	// (0x0007833b) linegrid_cams_pane_g6

0x23ac,	// (0x00076a00) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x000839fd) linegrid_cams_pane_g

0x3cf2,	// (0x00078346) popup_clock_analogue_window

0x3cf2,	// (0x00078346) popup_clock_digital_window

0xed2d,	// (0x00083381) popup_phob_thumbnail_window

0x1e00,	// (0x00076454) call_video_uplink_pane_g1

0x3cfb,	// (0x0007834f) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00083a0c) call_video_uplink_pane_g

0x2353,	// (0x000769a7) video_uplink_pane

0x3d03,	// (0x00078357) mce_image_pane_g1

0x3d0d,	// (0x00078361) mce_image_pane_g2

0x3d15,	// (0x00078369) mce_image_pane_g3

0x3d1d,	// (0x00078371) mce_image_pane_g4

0x3d25,	// (0x00078379) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00083a11) mce_image_pane_g

0x3d2d,	// (0x00078381) control_top_pane_stacon_cp01_ParamLimits

0x3d2d,	// (0x00078381) control_top_pane_stacon_cp01

0x3d41,	// (0x00078395) uni_indicator_pane_stacon_cp01_ParamLimits

0x3d41,	// (0x00078395) uni_indicator_pane_stacon_cp01

0x3d52,	// (0x000783a6) bg_popup_sub_pane_cp03

0x3d5c,	// (0x000783b0) chi_dic_find_pane

0x3d64,	// (0x000783b8) listscroll_chi_dic_pane

0x3d6d,	// (0x000783c1) main_pane_chidic_g1

0x3d80,	// (0x000783d4) chi_dic_find_pane_t1

0x3d8e,	// (0x000783e2) find_chidic_pane

0x3d97,	// (0x000783eb) chi_dic_list_pane_ParamLimits

0x3d97,	// (0x000783eb) chi_dic_list_pane

0x3da8,	// (0x000783fc) scroll_pane_cp020

0x3db0,	// (0x00078404) find_chidic_pane_t1

0xed2d,	// (0x00083381) input_focus_pane_cp06

0x3dbf,	// (0x00078413) list_chi_dic_pane_ParamLimits

0x3dbf,	// (0x00078413) list_chi_dic_pane

0x3dd3,	// (0x00078427) list_chi_dic_pane_t1_ParamLimits

0x3dd3,	// (0x00078427) list_chi_dic_pane_t1

0xed2d,	// (0x00083381) list_highlight_pane_cp020

0x3de6,	// (0x0007843a) bg_cale_heading_pane_g1

0x3dee,	// (0x00078442) bg_cale_heading_pane_g2

0x3df6,	// (0x0007844a) bg_cale_heading_pane_g3

0x3dfe,	// (0x00078452) bg_cale_heading_pane_g4

0x3e08,	// (0x0007845c) bg_cale_heading_pane_g5

0x3e12,	// (0x00078466) bg_cale_heading_pane_g6

0x3e1a,	// (0x0007846e) bg_cale_heading_pane_g7

0x3e22,	// (0x00078476) bg_cale_heading_pane_g8

0x3e2c,	// (0x00078480) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00083a1c) bg_cale_heading_pane_g

0x3de6,	// (0x0007843a) bg_cale_side_pane_g1

0x3e36,	// (0x0007848a) bg_cale_side_pane_g2

0x3e3e,	// (0x00078492) bg_cale_side_pane_g3

0x3e46,	// (0x0007849a) bg_cale_side_pane_g4

0x3e4e,	// (0x000784a2) bg_cale_side_pane_g5

0x3e56,	// (0x000784aa) bg_cale_side_pane_g6

0x3e5e,	// (0x000784b2) bg_cale_side_pane_g7

0x3e66,	// (0x000784ba) bg_cale_side_pane_g8

0x3e6e,	// (0x000784c2) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00083a2f) bg_cale_side_pane_g

0x3e76,	// (0x000784ca) popup_call_status_window_ParamLimits

0x3e76,	// (0x000784ca) popup_call_status_window

0x3ebd,	// (0x00078511) stacon_top_pane

0x3ec5,	// (0x00078519) status_pane_ParamLimits

0x3ec5,	// (0x00078519) status_pane

0x3eda,	// (0x0007852e) status_small_pane

0x3ee2,	// (0x00078536) control_pane

0xed2d,	// (0x00083381) stacon_bottom_pane

0x3eea,	// (0x0007853e) list_single_mce_smart_pane_t1_ParamLimits

0x3eea,	// (0x0007853e) list_single_mce_smart_pane_t1

0x3efd,	// (0x00078551) list_single_mce_smart_pane_t2_ParamLimits

0x3efd,	// (0x00078551) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00083a42) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00083a42) list_single_mce_smart_pane_t

0x3f1c,	// (0x00078570) compass_pane

0x3f25,	// (0x00078579) main_location2_pane_t1

0x3f39,	// (0x0007858d) main_location2_pane_t2

0x3f4d,	// (0x000785a1) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00083a47) main_location2_pane_t

0x3f97,	// (0x000785eb) compass_pane_g1_ParamLimits

0x3f97,	// (0x000785eb) compass_pane_g1

0x3fa3,	// (0x000785f7) compass_pane_t1

0x3fb2,	// (0x00078606) compass_pane_t2

0x0005,

0xf3fc,	// (0x00083a50) compass_pane_t

0x3ff9,	// (0x0007864d) text_secondary_cp61

0x4062,	// (0x000786b6) navi_pane_cams_g5

0x40dc,	// (0x00078730) navi_pane_im_t1

0x40ea,	// (0x0007873e) navi_pane_mp_g1_ParamLimits

0x40ea,	// (0x0007873e) navi_pane_mp_g1

0x40fe,	// (0x00078752) navi_pane_mp_g2_ParamLimits

0x40fe,	// (0x00078752) navi_pane_mp_g2

0x410a,	// (0x0007875e) navi_pane_mp_g3_ParamLimits

0x410a,	// (0x0007875e) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00083a64) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00083a64) navi_pane_mp_g

0x4116,	// (0x0007876a) navi_pane_mp_t1

0x4124,	// (0x00078778) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00083a6b) navi_pane_mp_t

0x41d1,	// (0x00078825) navi_pane_vt_g1

0x4116,	// (0x0007876a) navi_pane_vt_t1

0x41d9,	// (0x0007882d) navi_slider_pane

0x41e1,	// (0x00078835) zooming_pane

0x41e9,	// (0x0007883d) navi_slider_pane_g1

0xb090,	// (0x0007f6e4) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00083a72) navi_slider_pane_g

0x420d,	// (0x00078861) aid_levels_zoom

0x4215,	// (0x00078869) zooming_pane_g1

0x421d,	// (0x00078871) zooming_pane_g2

0x421d,	// (0x00078871) zooming_pane_g3

0x0002,

0xf42d,	// (0x00083a81) zooming_pane_g

0x4225,	// (0x00078879) level_10_zoom

0x422e,	// (0x00078882) level_11_zoom

0x4237,	// (0x0007888b) level_1_zoom

0x4240,	// (0x00078894) level_2_zoom

0x4249,	// (0x0007889d) level_3_zoom

0x4252,	// (0x000788a6) level_4_zoom

0x425b,	// (0x000788af) level_5_zoom

0x4264,	// (0x000788b8) level_6_zoom

0x426d,	// (0x000788c1) level_7_zoom

0x4276,	// (0x000788ca) level_8_zoom

0x427f,	// (0x000788d3) level_9_zoom

0x4290,	// (0x000788e4) popup_phob_thumbnail_window_g1

0x4298,	// (0x000788ec) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00083a88) popup_phob_thumbnail_window_g

0xb712,	// (0x0007fd66) level_1_location

0xb71a,	// (0x0007fd6e) level_2_location

0xb722,	// (0x0007fd76) level_3_location

0xb72a,	// (0x0007fd7e) level_4_location

0x41e1,	// (0x00078835) level_5_location

0x42a0,	// (0x000788f4) mce_icon_pane_g1

0x42a8,	// (0x000788fc) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00083a8d) mce_icon_pane_g

0x42b0,	// (0x00078904) main_mup_pane_g1_ParamLimits

0x42b0,	// (0x00078904) main_mup_pane_g1

0x42c6,	// (0x0007891a) main_mup_pane_g2_ParamLimits

0x42c6,	// (0x0007891a) main_mup_pane_g2

0x42de,	// (0x00078932) main_mup_pane_g3_ParamLimits

0x42de,	// (0x00078932) main_mup_pane_g3

0x42f6,	// (0x0007894a) main_mup_pane_g4_ParamLimits

0x42f6,	// (0x0007894a) main_mup_pane_g4

0x430e,	// (0x00078962) main_mup_pane_g5_ParamLimits

0x430e,	// (0x00078962) main_mup_pane_g5

0x432a,	// (0x0007897e) main_mup_pane_g6_ParamLimits

0x432a,	// (0x0007897e) main_mup_pane_g6

0x4342,	// (0x00078996) main_mup_pane_g7_ParamLimits

0x4342,	// (0x00078996) main_mup_pane_g7

0x435a,	// (0x000789ae) main_mup_pane_g8_ParamLimits

0x435a,	// (0x000789ae) main_mup_pane_g8

0x4372,	// (0x000789c6) main_mup_pane_g9_ParamLimits

0x4372,	// (0x000789c6) main_mup_pane_g9

0x438c,	// (0x000789e0) main_mup_pane_g10_ParamLimits

0x438c,	// (0x000789e0) main_mup_pane_g10

0x43a6,	// (0x000789fa) main_mup_pane_g11_ParamLimits

0x43a6,	// (0x000789fa) main_mup_pane_g11

0x43ba,	// (0x00078a0e) main_mup_pane_g12_ParamLimits

0x43ba,	// (0x00078a0e) main_mup_pane_g12

0x43d0,	// (0x00078a24) main_mup_pane_g13_ParamLimits

0x43d0,	// (0x00078a24) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00083a92) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00083a92) main_mup_pane_g

0x43e4,	// (0x00078a38) main_mup_pane_t1_ParamLimits

0x43e4,	// (0x00078a38) main_mup_pane_t1

0x43fe,	// (0x00078a52) main_mup_pane_t2_ParamLimits

0x43fe,	// (0x00078a52) main_mup_pane_t2

0x4416,	// (0x00078a6a) main_mup_pane_t3_ParamLimits

0x4416,	// (0x00078a6a) main_mup_pane_t3

0x442e,	// (0x00078a82) main_mup_pane_t4_ParamLimits

0x442e,	// (0x00078a82) main_mup_pane_t4

0x444c,	// (0x00078aa0) main_mup_pane_t5_ParamLimits

0x444c,	// (0x00078aa0) main_mup_pane_t5

0x4461,	// (0x00078ab5) main_mup_pane_t6_ParamLimits

0x4461,	// (0x00078ab5) main_mup_pane_t6

0x0005,

0xf459,	// (0x00083aad) main_mup_pane_t_ParamLimits

0xf459,	// (0x00083aad) main_mup_pane_t

0x4473,	// (0x00078ac7) mup_progress_pane_ParamLimits

0x4473,	// (0x00078ac7) mup_progress_pane

0x447f,	// (0x00078ad3) mup_visualizer_pane_ParamLimits

0x447f,	// (0x00078ad3) mup_visualizer_pane

0x44b3,	// (0x00078b07) mup_volume_pane_ParamLimits

0x44b3,	// (0x00078b07) mup_volume_pane

0x44d1,	// (0x00078b25) mup_visualizer_pane_g1_ParamLimits

0x44d1,	// (0x00078b25) mup_visualizer_pane_g1

0x44d1,	// (0x00078b25) mup_visualizer_pane_g2_ParamLimits

0x44d1,	// (0x00078b25) mup_visualizer_pane_g2

0x3f97,	// (0x000785eb) mup_visualizer_pane_g3_ParamLimits

0x3f97,	// (0x000785eb) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00083aba) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00083aba) mup_visualizer_pane_g

0x1e00,	// (0x00076454) mup_volume_pane_g1

0x44e7,	// (0x00078b3b) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00083ac1) mup_volume_pane_g

0x1e00,	// (0x00076454) mup_progress_pane_g1

0x44f0,	// (0x00078b44) mup_progress_pane_g2

0x44f9,	// (0x00078b4d) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00083ac6) mup_progress_pane_g

0xed2d,	// (0x00083381) bg_popup_window_pane_cp05

0x4502,	// (0x00078b56) heading_pane_cp02_ParamLimits

0x4502,	// (0x00078b56) heading_pane_cp02

0x451c,	// (0x00078b70) list_popup_blid_pane

0x4524,	// (0x00078b78) list_blid_sat_info_pane_ParamLimits

0x4524,	// (0x00078b78) list_blid_sat_info_pane

0x4537,	// (0x00078b8b) list_blid_sat_info_pane_g1

0x453f,	// (0x00078b93) list_blid_sat_info_pane_t1

0x4645,	// (0x00078c99) mup_equalizer_pane_ParamLimits

0x4645,	// (0x00078c99) mup_equalizer_pane

0x465e,	// (0x00078cb2) mup_equalizer_pane_cp1_ParamLimits

0x465e,	// (0x00078cb2) mup_equalizer_pane_cp1

0x467b,	// (0x00078ccf) mup_equalizer_pane_cp2_ParamLimits

0x467b,	// (0x00078ccf) mup_equalizer_pane_cp2

0x4698,	// (0x00078cec) mup_equalizer_pane_cp3_ParamLimits

0x4698,	// (0x00078cec) mup_equalizer_pane_cp3

0x46b9,	// (0x00078d0d) mup_equalizer_pane_cp4_ParamLimits

0x46b9,	// (0x00078d0d) mup_equalizer_pane_cp4

0x46da,	// (0x00078d2e) mup_equalizer_pane_cp5

0x46ee,	// (0x00078d42) mup_equalizer_pane_cp6

0x4702,	// (0x00078d56) mup_equalizer_pane_cp7

0xb630,	// (0x0007fc84) bg_popup_call_poc_act_pane_g9

0xb638,	// (0x0007fc8c) bg_popup_call_poc_act_pane_g10

0xb640,	// (0x0007fc94) bg_popup_call_poc_act_pane_g11

0x000a,

0xef88,	// (0x000835dc) mup_scale_pane

0x1e00,	// (0x00076454) mup_scale_pane_g1

0x4716,	// (0x00078d6a) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00083ae2) mup_scale_pane_g

0x474c,	// (0x00078da0) msg_data_pane

0x4754,	// (0x00078da8) scroll_pane_cp017

0x0e31,	// (0x00075485) bg_list_pane_cp04_ParamLimits

0x0e31,	// (0x00075485) bg_list_pane_cp04

0x475c,	// (0x00078db0) msg_data_pane_g1

0x4764,	// (0x00078db8) msg_data_pane_g2

0x3d15,	// (0x00078369) msg_data_pane_g3

0x476c,	// (0x00078dc0) msg_data_pane_g4

0x4774,	// (0x00078dc8) msg_data_pane_g5

0x477c,	// (0x00078dd0) msg_data_pane_g6

0x4784,	// (0x00078dd8) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00083af1) msg_data_pane_g

0x0e51,	// (0x000754a5) msg_text_pane_ParamLimits

0x0e51,	// (0x000754a5) msg_text_pane

0x478c,	// (0x00078de0) qrid_highlight_pane_cp011_ParamLimits

0x478c,	// (0x00078de0) qrid_highlight_pane_cp011

0xed2d,	// (0x00083381) msg_body_pane

0xed2d,	// (0x00083381) msg_header_pane

0x47ab,	// (0x00078dff) input_focus_pane_cp07

0x0e85,	// (0x000754d9) msg_header_pane_t1_ParamLimits

0x0e85,	// (0x000754d9) msg_header_pane_t1

0x0e99,	// (0x000754ed) msg_header_pane_t2_ParamLimits

0x0e99,	// (0x000754ed) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00083b05) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00083b05) msg_header_pane_t

0x47c0,	// (0x00078e14) msg_body_pane_g1

0x0eab,	// (0x000754ff) msg_body_pane_t1_ParamLimits

0x0eab,	// (0x000754ff) msg_body_pane_t1

0x0edc,	// (0x00075530) msg_body_pane_t2_ParamLimits

0x0edc,	// (0x00075530) msg_body_pane_t2

0x0eee,	// (0x00075542) msg_body_pane_t3_ParamLimits

0x0eee,	// (0x00075542) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00083b0a) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00083b0a) msg_body_pane_t

0x4802,	// (0x00078e56) main_viewer_pane_g1_ParamLimits

0x4802,	// (0x00078e56) main_viewer_pane_g1

0x4810,	// (0x00078e64) main_viewer_pane_g2_ParamLimits

0x4810,	// (0x00078e64) main_viewer_pane_g2

0x481e,	// (0x00078e72) main_viewer_pane_g3_ParamLimits

0x481e,	// (0x00078e72) main_viewer_pane_g3

0x482d,	// (0x00078e81) main_viewer_pane_g4_ParamLimits

0x482d,	// (0x00078e81) main_viewer_pane_g4

0xb0ba,	// (0x0007f70e) main_viewer_pane_g5_ParamLimits

0xb0ba,	// (0x0007f70e) main_viewer_pane_g5

0xb0ba,	// (0x0007f70e) main_viewer_pane_g7_ParamLimits

0xb0ba,	// (0x0007f70e) main_viewer_pane_g7

0xb0cc,	// (0x0007f720) main_viewer_pane_g8_ParamLimits

0xb0cc,	// (0x0007f720) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00083b1a) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00083b1a) main_viewer_pane_g

0x483c,	// (0x00078e90) viewer_content_pane_ParamLimits

0x483c,	// (0x00078e90) viewer_content_pane

0x4877,	// (0x00078ecb) main_postcard_pane_g1_ParamLimits

0x4877,	// (0x00078ecb) main_postcard_pane_g1

0x488d,	// (0x00078ee1) main_postcard_pane_g2_ParamLimits

0x488d,	// (0x00078ee1) main_postcard_pane_g2

0x48a3,	// (0x00078ef7) main_postcard_pane_g3_ParamLimits

0x48a3,	// (0x00078ef7) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00083b2b) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00083b2b) main_postcard_pane_g

0x48ba,	// (0x00078f0e) main_postcard_pane_g4

0xb845,	// (0x0007fe99) smil_status_volume_pane_g2

0x48fd,	// (0x00078f51) postcard_pane_ParamLimits

0x48fd,	// (0x00078f51) postcard_pane

0x493f,	// (0x00078f93) postcard_pane_g1_ParamLimits

0x493f,	// (0x00078f93) postcard_pane_g1

0x494d,	// (0x00078fa1) postcard_pane_g2_ParamLimits

0x494d,	// (0x00078fa1) postcard_pane_g2

0x4959,	// (0x00078fad) postcard_pane_g3_ParamLimits

0x4959,	// (0x00078fad) postcard_pane_g3

0x4965,	// (0x00078fb9) postcard_pane_g4_ParamLimits

0x4965,	// (0x00078fb9) postcard_pane_g4

0x4973,	// (0x00078fc7) postcard_pane_g5_ParamLimits

0x4973,	// (0x00078fc7) postcard_pane_g5

0x4988,	// (0x00078fdc) postcard_pane_g6_ParamLimits

0x4988,	// (0x00078fdc) postcard_pane_g6

0x493f,	// (0x00078f93) postcard_pane_g7_ParamLimits

0x493f,	// (0x00078f93) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00083b38) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00083b38) postcard_pane_g

0x499c,	// (0x00078ff0) main_mp2_pane_g1_ParamLimits

0x499c,	// (0x00078ff0) main_mp2_pane_g1

0x49a8,	// (0x00078ffc) main_mp2_pane_g2_ParamLimits

0x49a8,	// (0x00078ffc) main_mp2_pane_g2

0x49b4,	// (0x00079008) main_mp2_pane_g3_ParamLimits

0x49b4,	// (0x00079008) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00083b47) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00083b47) main_mp2_pane_g

0x49c0,	// (0x00079014) main_mp2_pane_t1_ParamLimits

0x49c0,	// (0x00079014) main_mp2_pane_t1

0x49d5,	// (0x00079029) main_mp2_pane_t2_ParamLimits

0x49d5,	// (0x00079029) main_mp2_pane_t2

0x49e7,	// (0x0007903b) main_mp2_pane_t3_ParamLimits

0x49e7,	// (0x0007903b) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00083b4e) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00083b4e) main_mp2_pane_t

0x49f9,	// (0x0007904d) pec_content_pane_ParamLimits

0x49f9,	// (0x0007904d) pec_content_pane

0x2c95,	// (0x000772e9) scroll_pane_cp015

0x4a0b,	// (0x0007905f) pec_attribute_pane_ParamLimits

0x4a0b,	// (0x0007905f) pec_attribute_pane

0x4a1b,	// (0x0007906f) pec_content_pane_g1_ParamLimits

0x4a1b,	// (0x0007906f) pec_content_pane_g1

0x4a29,	// (0x0007907d) pec_content_pane_t1_ParamLimits

0x4a29,	// (0x0007907d) pec_content_pane_t1

0x4a3b,	// (0x0007908f) pec_content_pane_t2_ParamLimits

0x4a3b,	// (0x0007908f) pec_content_pane_t2

0x0001,

0xf501,	// (0x00083b55) pec_content_pane_t_ParamLimits

0xf501,	// (0x00083b55) pec_content_pane_t

0x4a4d,	// (0x000790a1) list_single_graphic_pane_cp01_ParamLimits

0x4a4d,	// (0x000790a1) list_single_graphic_pane_cp01

0xef88,	// (0x000835dc) bg_popup_sub_pane_cp04

0x4a65,	// (0x000790b9) popup_mup_playback_window_g1

0x4a71,	// (0x000790c5) popup_mup_playback_window_t1

0x4a86,	// (0x000790da) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00083b5a) popup_mup_playback_window_t

0x4adb,	// (0x0007912f) main_image_pane_g1_ParamLimits

0x4adb,	// (0x0007912f) main_image_pane_g1

0x4bb8,	// (0x0007920c) scroll_pane_cp018_ParamLimits

0x4bb8,	// (0x0007920c) scroll_pane_cp018

0x4bd0,	// (0x00079224) scroll_pane_cp016_ParamLimits

0x4bd0,	// (0x00079224) scroll_pane_cp016

0x4c04,	// (0x00079258) smil2_image_pane_ParamLimits

0x4c04,	// (0x00079258) smil2_image_pane

0x4c38,	// (0x0007928c) smil2_root_pane_ParamLimits

0x4c38,	// (0x0007928c) smil2_root_pane

0x4c70,	// (0x000792c4) smil2_text_pane_ParamLimits

0x4c70,	// (0x000792c4) smil2_text_pane

0xed2d,	// (0x00083381) bg_list_pane_cp06

0x4cf8,	// (0x0007934c) grid_radio_pane

0xed2d,	// (0x00083381) bg_popup_window_pane_cp06

0x4d00,	// (0x00079354) main_fmradio_pane_t1

0x3c09,	// (0x0007825d) heading_pane_cp04

0x4d0e,	// (0x00079362) main_fmradio_pane_t2

0xb648,	// (0x0007fc9c) popup_cale_lunar_info_window_g1

0x4d1c,	// (0x00079370) main_fmradio_pane_t3

0xb650,	// (0x0007fca4) popup_cale_lunar_info_window_g2

0x4d2a,	// (0x0007937e) main_fmradio_pane_t4

0x0001,

0x4d38,	// (0x0007938c) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x00083c35) popup_cale_lunar_info_window_g

0xf51b,	// (0x00083b6f) main_fmradio_pane_t

0x4d46,	// (0x0007939a) wait_bar_pane_cp03

0x4d4e,	// (0x000793a2) cell_fmradio_pane_ParamLimits

0x4d4e,	// (0x000793a2) cell_fmradio_pane

0x493f,	// (0x00078f93) cell_fmradio_pane_g1_ParamLimits

0x493f,	// (0x00078f93) cell_fmradio_pane_g1

0xed2d,	// (0x00083381) grid_highlight_pane_cp011

0x4d61,	// (0x000793b5) poc_content_pane_ParamLimits

0x4d61,	// (0x000793b5) poc_content_pane

0x4d73,	// (0x000793c7) scroll_pane_cp019

0x4d7b,	// (0x000793cf) popup_call_poc_act_window_ParamLimits

0x4d7b,	// (0x000793cf) popup_call_poc_act_window

0x4d9f,	// (0x000793f3) popup_call_poc_inact_window_ParamLimits

0x4d9f,	// (0x000793f3) popup_call_poc_inact_window

0xf5b8,	// (0x00083c0c) bg_popup_call_poc_act_pane_g

0xb5b8,	// (0x0007fc0c) bg_popup_call_poc_inact_pane_g1

0xb5c0,	// (0x0007fc14) bg_popup_call_poc_inact_pane_g2

0x4db8,	// (0x0007940c) popup_call_poc_act_window_g2

0xb5c8,	// (0x0007fc1c) bg_popup_call_poc_inact_pane_g3

0xb5d0,	// (0x0007fc24) bg_popup_call_poc_inact_pane_g4

0xb5d8,	// (0x0007fc2c) bg_popup_call_poc_inact_pane_g5

0x4dc0,	// (0x00079414) popup_call_poc_act_window_t1_ParamLimits

0x4dc0,	// (0x00079414) popup_call_poc_act_window_t1

0x4de8,	// (0x0007943c) popup_call_poc_act_window_t2_ParamLimits

0x4de8,	// (0x0007943c) popup_call_poc_act_window_t2

0x4e10,	// (0x00079464) popup_call_poc_act_window_t3_ParamLimits

0x4e10,	// (0x00079464) popup_call_poc_act_window_t3

0x4e38,	// (0x0007948c) popup_call_poc_act_window_t4_ParamLimits

0x4e38,	// (0x0007948c) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00083b7a) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00083b7a) popup_call_poc_act_window_t

0xb5e0,	// (0x0007fc34) bg_popup_call_poc_inact_pane_g6

0xb5e8,	// (0x0007fc3c) bg_popup_call_poc_inact_pane_g7

0xb5f0,	// (0x0007fc44) bg_popup_call_poc_inact_pane_g8

0x4e4a,	// (0x0007949e) popup_call_poc_inact_window_g2

0xb5f8,	// (0x0007fc4c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x00083bf9) bg_popup_call_poc_inact_pane_g

0x4e52,	// (0x000794a6) popup_call_poc_inact_window_t1_ParamLimits

0x4e52,	// (0x000794a6) popup_call_poc_inact_window_t1

0x4e67,	// (0x000794bb) popup_call_poc_inact_window_t2_ParamLimits

0x4e67,	// (0x000794bb) popup_call_poc_inact_window_t2

0x4e7c,	// (0x000794d0) popup_call_poc_inact_window_t3_ParamLimits

0x4e7c,	// (0x000794d0) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00083b83) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00083b83) popup_call_poc_inact_window_t

0xb7b8,	// (0x0007fe0c) context_pane_ParamLimits

0x5fd0,	// (0x0007a624) signal_pane_ParamLimits

0x41e1,	// (0x00078835) main_call2_pane

0xb7a6,	// (0x0007fdfa) popup_phob_thumbnail2_window_ParamLimits

0xb7a6,	// (0x0007fdfa) popup_phob_thumbnail2_window

0xb0a2,	// (0x0007f6f6) aid_hotspot_pointer_arrow_pane

0xb0aa,	// (0x0007f6fe) aid_hotspot_pointer_hand_pane

0x5af4,	// (0x0007a148) phob_pre_status_pane_g5

0x23f2,	// (0x00076a46) cams_zoom_pane_ParamLimits

0x2401,	// (0x00076a55) image_vga_pane_ParamLimits

0x241b,	// (0x00076a6f) main_camera_pane_g1_ParamLimits

0x242d,	// (0x00076a81) main_camera_pane_g2_ParamLimits

0x243f,	// (0x00076a93) main_camera_pane_g3_ParamLimits

0x2451,	// (0x00076aa5) main_camera_pane_g4_ParamLimits

0x2463,	// (0x00076ab7) main_camera_pane_g5_ParamLimits

0x2475,	// (0x00076ac9) main_camera_pane_g6_ParamLimits

0x2487,	// (0x00076adb) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00083882) main_camera_pane_g_ParamLimits

0x24a5,	// (0x00076af9) main_camera_pane_t1_ParamLimits

0x24bb,	// (0x00076b0f) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00083893) main_camera_pane_t_ParamLimits

0xef88,	// (0x000835dc) bg_popup_preview_window_pane_cp01_ParamLimits

0xef88,	// (0x000835dc) bg_popup_preview_window_pane_cp01

0x4e91,	// (0x000794e5) popup_phob_thumbnail2_window_g1_ParamLimits

0x4e91,	// (0x000794e5) popup_phob_thumbnail2_window_g1

0xed2d,	// (0x00083381) call2_cli_visual_pane

0x4eb8,	// (0x0007950c) popup_call2_audio_conf_window_ParamLimits

0x4eb8,	// (0x0007950c) popup_call2_audio_conf_window

0x4ed8,	// (0x0007952c) popup_call2_audio_first_window_ParamLimits

0x4ed8,	// (0x0007952c) popup_call2_audio_first_window

0x4f6e,	// (0x000795c2) popup_call2_audio_in_window_ParamLimits

0x4f6e,	// (0x000795c2) popup_call2_audio_in_window

0x4fb6,	// (0x0007960a) popup_call2_audio_out_window_ParamLimits

0x4fb6,	// (0x0007960a) popup_call2_audio_out_window

0x5020,	// (0x00079674) popup_call2_audio_second_window_ParamLimits

0x5020,	// (0x00079674) popup_call2_audio_second_window

0x5086,	// (0x000796da) popup_call2_audio_wait_window_ParamLimits

0x5086,	// (0x000796da) popup_call2_audio_wait_window

0xed2d,	// (0x00083381) bg_popup_call2_act_pane_cp03

0xef6a,	// (0x000835be) list_conf_pane_cp

0x50c0,	// (0x00079714) popup_call2_audio_conf_window_t1

0x50ce,	// (0x00079722) list_single_graphic_popup_conf2_pane_ParamLimits

0x50ce,	// (0x00079722) list_single_graphic_popup_conf2_pane

0x3c9c,	// (0x000782f0) list_highlight_pane_cp04

0x50e1,	// (0x00079735) list_single_graphic_popup_conf2_pane_g1

0x3cad,	// (0x00078301) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00083b8a) list_single_graphic_popup_conf2_pane_g

0x50eb,	// (0x0007973f) list_single_graphic_popup_conf2_pane_t1

0x50f9,	// (0x0007974d) bg_popup_call2_act_pane_cp01_ParamLimits

0x50f9,	// (0x0007974d) bg_popup_call2_act_pane_cp01

0x5183,	// (0x000797d7) call_type_pane_cp05_ParamLimits

0x5183,	// (0x000797d7) call_type_pane_cp05

0x51d7,	// (0x0007982b) popup_call2_audio_second_window_g1_ParamLimits

0x51d7,	// (0x0007982b) popup_call2_audio_second_window_g1

0x522b,	// (0x0007987f) popup_call2_audio_second_window_g2_ParamLimits

0x522b,	// (0x0007987f) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00083b8f) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00083b8f) popup_call2_audio_second_window_g

0x5290,	// (0x000798e4) popup_call2_audio_second_window_t1_ParamLimits

0x5290,	// (0x000798e4) popup_call2_audio_second_window_t1

0x534b,	// (0x0007999f) popup_call2_audio_second_window_t2_ParamLimits

0x534b,	// (0x0007999f) popup_call2_audio_second_window_t2

0x539e,	// (0x000799f2) popup_call2_audio_second_window_t3_ParamLimits

0x539e,	// (0x000799f2) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00083b96) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00083b96) popup_call2_audio_second_window_t

0xed2d,	// (0x00083381) bg_popup_call2_in_pane_cp02

0xed37,	// (0x0008338b) call_type_pane_cp04

0xed3f,	// (0x00083393) popup_call2_audio_wait_window_g1

0xed47,	// (0x0008339b) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0008376f) popup_call2_audio_wait_window_g

0xed4f,	// (0x000833a3) popup_call2_audio_wait_window_t3

0x5491,	// (0x00079ae5) bg_popup_call2_act_pane_ParamLimits

0x5491,	// (0x00079ae5) bg_popup_call2_act_pane

0x5551,	// (0x00079ba5) call_type_pane_cp03_ParamLimits

0x5551,	// (0x00079ba5) call_type_pane_cp03

0x55b5,	// (0x00079c09) popup_call2_audio_first_window_g1_ParamLimits

0x55b5,	// (0x00079c09) popup_call2_audio_first_window_g1

0x5625,	// (0x00079c79) popup_call2_audio_first_window_g2_ParamLimits

0x5625,	// (0x00079c79) popup_call2_audio_first_window_g2

0x44d1,	// (0x00078b25) popup_call2_audio_first_window_g3_ParamLimits

0x44d1,	// (0x00078b25) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00083b9f) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00083b9f) popup_call2_audio_first_window_g

0x5703,	// (0x00079d57) popup_call2_audio_first_window_t1_ParamLimits

0x5703,	// (0x00079d57) popup_call2_audio_first_window_t1

0x5806,	// (0x00079e5a) popup_call2_audio_first_window_t4_ParamLimits

0x5806,	// (0x00079e5a) popup_call2_audio_first_window_t4

0x58e9,	// (0x00079f3d) popup_call2_audio_first_window_t5_ParamLimits

0x58e9,	// (0x00079f3d) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00083baa) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00083baa) popup_call2_audio_first_window_t

0xef80,	// (0x000835d4) bg_popup_call2_act_pane_g1

0xb658,	// (0x0007fcac) popup_cale_lunar_info_window_t1

0xb666,	// (0x0007fcba) popup_cale_lunar_info_window_t2

0xb674,	// (0x0007fcc8) popup_cale_lunar_info_window_t3

0xed2d,	// (0x00083381) bg_popup_call2_bubble_pane

0xb0e4,	// (0x0007f738) bg_popup_call2_in_pane_cp01_ParamLimits

0xb0e4,	// (0x0007f738) bg_popup_call2_in_pane_cp01

0xea09,	// (0x0008305d) call_type_pane_cp02

0xb12c,	// (0x0007f780) popup_call2_audio_out_window_g1_ParamLimits

0xb12c,	// (0x0007f780) popup_call2_audio_out_window_g1

0xb158,	// (0x0007f7ac) popup_call2_audio_out_window_g2_ParamLimits

0xb158,	// (0x0007f7ac) popup_call2_audio_out_window_g2

0xb180,	// (0x0007f7d4) popup_call2_audio_out_window_g3_ParamLimits

0xb180,	// (0x0007f7d4) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00083bb3) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00083bb3) popup_call2_audio_out_window_g

0xb1bb,	// (0x0007f80f) popup_call2_audio_out_window_t1_ParamLimits

0xb1bb,	// (0x0007f80f) popup_call2_audio_out_window_t1

0xb21a,	// (0x0007f86e) popup_call2_audio_out_window_t2_ParamLimits

0xb21a,	// (0x0007f86e) popup_call2_audio_out_window_t2

0xb26e,	// (0x0007f8c2) popup_call2_audio_out_window_t3_ParamLimits

0xb26e,	// (0x0007f8c2) popup_call2_audio_out_window_t3

0xb284,	// (0x0007f8d8) popup_call2_audio_out_window_t4_ParamLimits

0xb284,	// (0x0007f8d8) popup_call2_audio_out_window_t4

0xb29a,	// (0x0007f8ee) popup_call2_audio_out_window_t5_ParamLimits

0xb29a,	// (0x0007f8ee) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00083bbc) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00083bbc) popup_call2_audio_out_window_t

0xb2fe,	// (0x0007f952) bg_popup_call2_in_pane_ParamLimits

0xb2fe,	// (0x0007f952) bg_popup_call2_in_pane

0xb35a,	// (0x0007f9ae) popup_call2_audio_in_window_g1_ParamLimits

0xb35a,	// (0x0007f9ae) popup_call2_audio_in_window_g1

0xb392,	// (0x0007f9e6) popup_call2_audio_in_window_g2_ParamLimits

0xb392,	// (0x0007f9e6) popup_call2_audio_in_window_g2

0xb3ca,	// (0x0007fa1e) popup_call2_audio_in_window_g3_ParamLimits

0xb3ca,	// (0x0007fa1e) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00083bc9) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00083bc9) popup_call2_audio_in_window_g

0xb422,	// (0x0007fa76) popup_call2_audio_in_window_t1_ParamLimits

0xb422,	// (0x0007fa76) popup_call2_audio_in_window_t1

0xb4a2,	// (0x0007faf6) popup_call2_audio_in_window_t2_ParamLimits

0xb4a2,	// (0x0007faf6) popup_call2_audio_in_window_t2

0xb522,	// (0x0007fb76) popup_call2_audio_in_window_t3_ParamLimits

0xb522,	// (0x0007fb76) popup_call2_audio_in_window_t3

0xb53c,	// (0x0007fb90) popup_call2_audio_in_window_t4_ParamLimits

0xb53c,	// (0x0007fb90) popup_call2_audio_in_window_t4

0xb54e,	// (0x0007fba2) popup_call2_audio_in_window_t5_ParamLimits

0xb54e,	// (0x0007fba2) popup_call2_audio_in_window_t5

0xb563,	// (0x0007fbb7) popup_call2_audio_in_window_t6_ParamLimits

0xb563,	// (0x0007fbb7) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00083bd2) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00083bd2) popup_call2_audio_in_window_t

0xef80,	// (0x000835d4) bg_popup_call2_in_pane_g1

0xb682,	// (0x0007fcd6) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x00083c3a) popup_cale_lunar_info_window_t

0xef88,	// (0x000835dc) bg_popup_call2_rect_pane_ParamLimits

0xef88,	// (0x000835dc) bg_popup_call2_rect_pane

0xed2d,	// (0x00083381) call2_cli_visual_graphic_pane

0xed2d,	// (0x00083381) call2_cli_visual_text_pane

0xb858,	// (0x0007feac) smil_status_volume_pane_g3

0x0002,

0x1e00,	// (0x00076454) call2_cli_visual_graphic_pane_g1

0x1e00,	// (0x00076454) call2_cli_visual_graphic_pane_g2

0x1e00,	// (0x00076454) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00083bdf) call2_cli_visual_graphic_pane_g

0xb578,	// (0x0007fbcc) bg_popup_call2_rect_pane_g1

0x1f45,	// (0x00076599) bg_popup_call2_rect_pane_g2

0xb580,	// (0x0007fbd4) bg_popup_call2_rect_pane_g3

0xb588,	// (0x0007fbdc) bg_popup_call2_rect_pane_g4

0xb590,	// (0x0007fbe4) bg_popup_call2_rect_pane_g5

0xb598,	// (0x0007fbec) bg_popup_call2_rect_pane_g6

0xb5a0,	// (0x0007fbf4) bg_popup_call2_rect_pane_g7

0xb5a8,	// (0x0007fbfc) bg_popup_call2_rect_pane_g8

0xb5b0,	// (0x0007fc04) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00083be6) bg_popup_call2_rect_pane_g

0xb5b8,	// (0x0007fc0c) bg_popup_call2_bubble_pane_g1

0xb5c0,	// (0x0007fc14) bg_popup_call2_bubble_pane_g2

0xb5c8,	// (0x0007fc1c) bg_popup_call2_bubble_pane_g3

0xb5d0,	// (0x0007fc24) bg_popup_call2_bubble_pane_g4

0xb5d8,	// (0x0007fc2c) bg_popup_call2_bubble_pane_g5

0xb5e0,	// (0x0007fc34) bg_popup_call2_bubble_pane_g6

0xb5e8,	// (0x0007fc3c) bg_popup_call2_bubble_pane_g7

0xb5f0,	// (0x0007fc44) bg_popup_call2_bubble_pane_g8

0xb5f8,	// (0x0007fc4c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00083bf9) bg_popup_call2_bubble_pane_g

0x1fba,	// (0x0007660e) aid_cale_week_size_cell_pane

0x24d3,	// (0x00076b27) aid_cams_cif_uncrop_pane_ParamLimits

0x24d3,	// (0x00076b27) aid_cams_cif_uncrop_pane

0x26ce,	// (0x00076d22) aid_cams_size_cell_ParamLimits

0x26ce,	// (0x00076d22) aid_cams_size_cell

0x26e2,	// (0x00076d36) grid_cams_pane_ParamLimits

0x26fc,	// (0x00076d50) linegrid_cams_pane_ParamLimits

0x2831,	// (0x00076e85) call_video_pane_t1

0x284f,	// (0x00076ea3) call_video_pane_t2

0x0001,

0xf292,	// (0x000838e6) call_video_pane_t

0x2ee4,	// (0x00077538) aid_cale_month_size_cell_pane_ParamLimits

0x2ee4,	// (0x00077538) aid_cale_month_size_cell_pane

0xf62f,	// (0x00083c83) smil_status_volume_pane_g

0xb865,	// (0x0007feb9) volume_smil_pane_ParamLimits

0xad3a,	// (0x0007f38e) aid_popup2_width_pane

0x1e9d,	// (0x000764f1) cell_qdial_pane_g4_ParamLimits

0x1e9d,	// (0x000764f1) cell_qdial_pane_g4

0x3f77,	// (0x000785cb) aid_blid_cardinal_pane_ParamLimits

0x3f83,	// (0x000785d7) aid_blid_destination_pane_ParamLimits

0x3f83,	// (0x000785d7) aid_blid_destination_pane

0xef88,	// (0x000835dc) bg_popup_call_poc_act_pane_ParamLimits

0xef88,	// (0x000835dc) bg_popup_call_poc_act_pane

0xef88,	// (0x000835dc) bg_popup_call_poc_inact_pane_ParamLimits

0xef88,	// (0x000835dc) bg_popup_call_poc_inact_pane

0xb608,	// (0x0007fc5c) bg_popup_call_poc_act_pane_g1

0xb610,	// (0x0007fc64) bg_popup_call_poc_act_pane_g2

0xb618,	// (0x0007fc6c) bg_popup_call_poc_act_pane_g3

0xb5d0,	// (0x0007fc24) bg_popup_call_poc_act_pane_g4

0xb5d8,	// (0x0007fc2c) bg_popup_call_poc_act_pane_g5

0xb620,	// (0x0007fc74) bg_popup_call_poc_act_pane_g6

0xb5e8,	// (0x0007fc3c) bg_popup_call_poc_act_pane_g7

0xb628,	// (0x0007fc7c) bg_popup_call_poc_act_pane_g8

0xed2d,	// (0x00083381) main_usb_pane

0xb781,	// (0x0007fdd5) popup_cale_lunar_info_window

0x2b77,	// (0x000771cb) im_reading_pane_t1_ParamLimits

0x2bb3,	// (0x00077207) list_im_pane_ParamLimits

0x2bc4,	// (0x00077218) scroll_pane_cp07_ParamLimits

0xed2d,	// (0x00083381) grid_highlight_pane_cp012

0xef88,	// (0x000835dc) mup_scale_pane_ParamLimits

0x493f,	// (0x00078f93) main_usb_pane_g1_ParamLimits

0x493f,	// (0x00078f93) main_usb_pane_g1

0x5a07,	// (0x0007a05b) main_usb_pane_g2_ParamLimits

0x5a07,	// (0x0007a05b) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x00083c23) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x00083c23) main_usb_pane_g

0x5a1d,	// (0x0007a071) main_usb_pane_t1_ParamLimits

0x5a1d,	// (0x0007a071) main_usb_pane_t1

0x5a2f,	// (0x0007a083) main_usb_pane_t2_ParamLimits

0x5a2f,	// (0x0007a083) main_usb_pane_t2

0x5a41,	// (0x0007a095) main_usb_pane_t3_ParamLimits

0x5a41,	// (0x0007a095) main_usb_pane_t3

0x5a53,	// (0x0007a0a7) main_usb_pane_t4_ParamLimits

0x5a53,	// (0x0007a0a7) main_usb_pane_t4

0x5a65,	// (0x0007a0b9) main_usb_pane_t5_ParamLimits

0x5a65,	// (0x0007a0b9) main_usb_pane_t5

0x5a77,	// (0x0007a0cb) main_usb_pane_t6_ParamLimits

0x5a77,	// (0x0007a0cb) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x00083c28) main_usb_pane_t_ParamLimits

0x3f1c,	// (0x00078570) aid_text_placing

0x3f25,	// (0x00078579) main_location2_pane_t1_ParamLimits

0x3f39,	// (0x0007858d) main_location2_pane_t2_ParamLimits

0x3f4d,	// (0x000785a1) main_location2_pane_t3_ParamLimits

0x3f63,	// (0x000785b7) main_location2_pane_t4_ParamLimits

0x3f63,	// (0x000785b7) main_location2_pane_t4

0xf3f3,	// (0x00083a47) main_location2_pane_t_ParamLimits

0xefcc,	// (0x00083620) find_pinb_pane_g2_ParamLimits

0xefcc,	// (0x00083620) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00083795) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00083795) find_pinb_pane_g

0xefd8,	// (0x0008362c) find_pinb_pane_t1_ParamLimits

0xefea,	// (0x0008363e) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0008379a) find_pinb_pane_t_ParamLimits

0xed2d,	// (0x00083381) main_call3_pane

0x327d,	// (0x000778d1) cale_month_day_heading_pane_t1_ParamLimits

0x32db,	// (0x0007792f) cale_month_day_heading_pane_t2_ParamLimits

0x3340,	// (0x00077994) cale_month_day_heading_pane_t3_ParamLimits

0x33a5,	// (0x000779f9) cale_month_day_heading_pane_t4_ParamLimits

0x340a,	// (0x00077a5e) cale_month_day_heading_pane_t5_ParamLimits

0x347f,	// (0x00077ad3) cale_month_day_heading_pane_t6_ParamLimits

0x34f4,	// (0x00077b48) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0008391e) cale_month_day_heading_pane_t_ParamLimits

0x3712,	// (0x00077d66) smil_status_volume_pane

0x491b,	// (0x00078f6f) postcard_address_pane_ParamLimits

0x491b,	// (0x00078f6f) postcard_address_pane

0x492d,	// (0x00078f81) postcard_message_pane_ParamLimits

0x492d,	// (0x00078f81) postcard_message_pane

0x59ea,	// (0x0007a03e) call2_cli_visual_pane_t1_ParamLimits

0x59ea,	// (0x0007a03e) call2_cli_visual_pane_t1

0x61fe,	// (0x0007a852) postcard_message_pane_t1_ParamLimits

0x61fe,	// (0x0007a852) postcard_message_pane_t1

0x61e7,	// (0x0007a83b) postcard_address_pane_t1_ParamLimits

0x61e7,	// (0x0007a83b) postcard_address_pane_t1

0x61d3,	// (0x0007a827) popup_call3_audio_in_window_ParamLimits

0x61d3,	// (0x0007a827) popup_call3_audio_in_window

0x6062,	// (0x0007a6b6) bg_popup_call3_in_pane_ParamLimits

0x6062,	// (0x0007a6b6) bg_popup_call3_in_pane

0x60d4,	// (0x0007a728) popup_call3_audio_in_window_g1_ParamLimits

0x60d4,	// (0x0007a728) popup_call3_audio_in_window_g1

0x60f4,	// (0x0007a748) popup_call3_audio_in_window_g2_ParamLimits

0x60f4,	// (0x0007a748) popup_call3_audio_in_window_g2

0x6114,	// (0x0007a768) popup_call3_audio_in_window_g3_ParamLimits

0x6114,	// (0x0007a768) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x00083c8a) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x00083c8a) popup_call3_audio_in_window_g

0x6145,	// (0x0007a799) popup_call3_audio_in_window_t1_ParamLimits

0x6145,	// (0x0007a799) popup_call3_audio_in_window_t1

0x6183,	// (0x0007a7d7) popup_call3_audio_in_window_t2_ParamLimits

0x6183,	// (0x0007a7d7) popup_call3_audio_in_window_t2

0x61c1,	// (0x0007a815) popup_call3_audio_in_window_t3_ParamLimits

0x61c1,	// (0x0007a815) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x00083c93) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x00083c93) popup_call3_audio_in_window_t

0x41e1,	// (0x00078835) bg_popup_call3_rect_pane

0xb578,	// (0x0007fbcc) bg_popup_call3_rect_pane_g1

0x1f45,	// (0x00076599) bg_popup_call3_rect_pane_g2

0xb580,	// (0x0007fbd4) bg_popup_call3_rect_pane_g3

0xb588,	// (0x0007fbdc) bg_popup_call3_rect_pane_g4

0xb590,	// (0x0007fbe4) bg_popup_call3_rect_pane_g5

0xb598,	// (0x0007fbec) bg_popup_call3_rect_pane_g6

0xb5a0,	// (0x0007fbf4) bg_popup_call3_rect_pane_g7

0x44c9,	// (0x00078b1d) mup_visualizer_osc_pane

0x44df,	// (0x00078b33) mup_visualizer_spec_pane

0x6092,	// (0x0007a6e6) call3_video_qcif_pane_ParamLimits

0x6092,	// (0x0007a6e6) call3_video_qcif_pane

0x60a3,	// (0x0007a6f7) call3_video_qcif_uncrop_pane_ParamLimits

0x60a3,	// (0x0007a6f7) call3_video_qcif_uncrop_pane

0x60af,	// (0x0007a703) call3_video_subqcif_pane_ParamLimits

0x60af,	// (0x0007a703) call3_video_subqcif_pane

0x60c3,	// (0x0007a717) call3_video_subqcif_uncrop_pane_ParamLimits

0x60c3,	// (0x0007a717) call3_video_subqcif_uncrop_pane

0x6134,	// (0x0007a788) popup_call3_audio_in_window_g4_ParamLimits

0x6134,	// (0x0007a788) popup_call3_audio_in_window_g4

0x6051,	// (0x0007a6a5) mup_spec_half_pane

0x605a,	// (0x0007a6ae) mup_spec_half_pane_cp

0xb818,	// (0x0007fe6c) mup_osc_middle_pane

0xb821,	// (0x0007fe75) mup_visualizer_osc_pane_g1

0x6031,	// (0x0007a685) mup_spec_bar_pane_ParamLimits

0x6031,	// (0x0007a685) mup_spec_bar_pane

0xb805,	// (0x0007fe59) mup_spec_bar_pane_g1

0xb80f,	// (0x0007fe63) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00083c7e) mup_spec_bar_pane_g

0x1fba,	// (0x0007660e) aid_cale_week_size_cell_pane_ParamLimits

0x1fcd,	// (0x00076621) bg_cale_heading_pane_ParamLimits

0x1fe5,	// (0x00076639) bg_cale_pane_cp01_ParamLimits

0x1ffe,	// (0x00076652) cale_week_corner_pane_ParamLimits

0x200f,	// (0x00076663) cale_week_day_heading_pane_ParamLimits

0x2027,	// (0x0007667b) cale_week_scroll_pane_g1_ParamLimits

0x203c,	// (0x00076690) cale_week_scroll_pane_g2_ParamLimits

0x204d,	// (0x000766a1) cale_week_scroll_pane_g3_ParamLimits

0x205e,	// (0x000766b2) cale_week_scroll_pane_g4_ParamLimits

0x206f,	// (0x000766c3) cale_week_scroll_pane_g5_ParamLimits

0x2082,	// (0x000766d6) cale_week_scroll_pane_g6_ParamLimits

0x2095,	// (0x000766e9) cale_week_scroll_pane_g7_ParamLimits

0x20a8,	// (0x000766fc) cale_week_scroll_pane_g8_ParamLimits

0x20bb,	// (0x0007670f) cale_week_scroll_pane_g9_ParamLimits

0x20cc,	// (0x00076720) cale_week_scroll_pane_g10_ParamLimits

0x20dd,	// (0x00076731) cale_week_scroll_pane_g11_ParamLimits

0x20ee,	// (0x00076742) cale_week_scroll_pane_g12_ParamLimits

0x20ff,	// (0x00076753) cale_week_scroll_pane_g13_ParamLimits

0x2110,	// (0x00076764) cale_week_scroll_pane_g14_ParamLimits

0x2121,	// (0x00076775) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00083826) cale_week_scroll_pane_g_ParamLimits

0x2132,	// (0x00076786) cale_week_time_pane_ParamLimits

0x2145,	// (0x00076799) grid_cale_week_pane_ParamLimits

0x215a,	// (0x000767ae) listscroll_cale_week_pane_t1

0x216c,	// (0x000767c0) scroll_pane_cp08_ParamLimits

0x2f48,	// (0x0007759c) cale_month_corner_pane_ParamLimits

0x322a,	// (0x0007787e) cale_month_pane_t1

0x323c,	// (0x00077890) cale_month_week_pane_ParamLimits

0x3b68,	// (0x000781bc) popup_call_status_window_g1_ParamLimits

0x3b7c,	// (0x000781d0) popup_call_status_window_g2_ParamLimits

0x3b90,	// (0x000781e4) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x000839ce) popup_call_status_window_g_ParamLimits

0x3bf9,	// (0x0007824d) aid_call2_pane

0x0e77,	// (0x000754cb) msg_header_pane_g1

0x491b,	// (0x00078f6f) postcard_address2_pane_ParamLimits

0x491b,	// (0x00078f6f) postcard_address2_pane

0x492d,	// (0x00078f81) postcard_message2_pane_ParamLimits

0x492d,	// (0x00078f81) postcard_message2_pane

0x5fde,	// (0x0007a632) message2_row_pane_ParamLimits

0x5fde,	// (0x0007a632) message2_row_pane

0x5ffd,	// (0x0007a651) address2_row_pane_ParamLimits

0x5ffd,	// (0x0007a651) address2_row_pane

0xb7d3,	// (0x0007fe27) postcard_message2_row_pane_g1

0xb7db,	// (0x0007fe2f) postcard_message2_row_pane_t1

0xb7d3,	// (0x0007fe27) address2_row_pane_g1

0xb7db,	// (0x0007fe2f) address2_row_pane_t1

0xae1a,	// (0x0007f46e) aid_size_cell_vorec

0xed2d,	// (0x00083381) main_rss_pane

0x6010,	// (0x0007a664) rss_list_single_pane_ParamLimits

0x6010,	// (0x0007a664) rss_list_single_pane

0xb7e9,	// (0x0007fe3d) rss_list_single_pane_t1

0xb7f7,	// (0x0007fe4b) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x00083c79) rss_list_single_pane_t

0xed2d,	// (0x00083381) main_camera2_pane

0xed2d,	// (0x00083381) main_video2_pane

0x6277,	// (0x0007a8cb) cams_zoom_pane_cp2_ParamLimits

0x6277,	// (0x0007a8cb) cams_zoom_pane_cp2

0x6297,	// (0x0007a8eb) image2_vga_pane_ParamLimits

0x6297,	// (0x0007a8eb) image2_vga_pane

0x62e8,	// (0x0007a93c) main_camera2_pane_g1_ParamLimits

0x62e8,	// (0x0007a93c) main_camera2_pane_g1

0x6308,	// (0x0007a95c) main_camera2_pane_g2_ParamLimits

0x6308,	// (0x0007a95c) main_camera2_pane_g2

0x6328,	// (0x0007a97c) main_camera2_pane_g3_ParamLimits

0x6328,	// (0x0007a97c) main_camera2_pane_g3

0x6348,	// (0x0007a99c) main_camera2_pane_g4_ParamLimits

0x6348,	// (0x0007a99c) main_camera2_pane_g4

0x6368,	// (0x0007a9bc) main_camera2_pane_g5_ParamLimits

0x6368,	// (0x0007a9bc) main_camera2_pane_g5

0x6388,	// (0x0007a9dc) main_camera2_pane_g6_ParamLimits

0x6388,	// (0x0007a9dc) main_camera2_pane_g6

0x63a8,	// (0x0007a9fc) main_camera2_pane_g7_ParamLimits

0x63a8,	// (0x0007a9fc) main_camera2_pane_g7

0x63c8,	// (0x0007aa1c) main_camera2_pane_g8_ParamLimits

0x63c8,	// (0x0007aa1c) main_camera2_pane_g8

0x0008,

0xf646,	// (0x00083c9a) main_camera2_pane_g_ParamLimits

0xf646,	// (0x00083c9a) main_camera2_pane_g

0x6408,	// (0x0007aa5c) main_camera2_pane_t1_ParamLimits

0x6408,	// (0x0007aa5c) main_camera2_pane_t1

0x643d,	// (0x0007aa91) main_camera2_pane_t2_ParamLimits

0x643d,	// (0x0007aa91) main_camera2_pane_t2

0x6463,	// (0x0007aab7) main_camera2_pane_t3_ParamLimits

0x6463,	// (0x0007aab7) main_camera2_pane_t3

0x64c1,	// (0x0007ab15) main_camera2_pane_t4_ParamLimits

0x64c1,	// (0x0007ab15) main_camera2_pane_t4

0x0006,

0xf659,	// (0x00083cad) main_camera2_pane_t_ParamLimits

0xf659,	// (0x00083cad) main_camera2_pane_t

0x6553,	// (0x0007aba7) cams_zoom_pane_cp4_ParamLimits

0x6553,	// (0x0007aba7) cams_zoom_pane_cp4

0x6569,	// (0x0007abbd) image2_cif_pane_ParamLimits

0x6569,	// (0x0007abbd) image2_cif_pane

0x6594,	// (0x0007abe8) image2_subqcif_pane_ParamLimits

0x6594,	// (0x0007abe8) image2_subqcif_pane

0x65ae,	// (0x0007ac02) main_video2_pane_g1_ParamLimits

0x65ae,	// (0x0007ac02) main_video2_pane_g1

0x65c8,	// (0x0007ac1c) main_video2_pane_g2_ParamLimits

0x65c8,	// (0x0007ac1c) main_video2_pane_g2

0x65de,	// (0x0007ac32) main_video2_pane_g3_ParamLimits

0x65de,	// (0x0007ac32) main_video2_pane_g3

0x65f4,	// (0x0007ac48) main_video2_pane_g4_ParamLimits

0x65f4,	// (0x0007ac48) main_video2_pane_g4

0x660a,	// (0x0007ac5e) main_video2_pane_g5_ParamLimits

0x660a,	// (0x0007ac5e) main_video2_pane_g5

0x6620,	// (0x0007ac74) main_video2_pane_g6_ParamLimits

0x6620,	// (0x0007ac74) main_video2_pane_g6

0x0005,

0xf668,	// (0x00083cbc) main_video2_pane_g_ParamLimits

0xf668,	// (0x00083cbc) main_video2_pane_g

0x663a,	// (0x0007ac8e) main_video2_pane_t1_ParamLimits

0x663a,	// (0x0007ac8e) main_video2_pane_t1

0x665e,	// (0x0007acb2) main_video2_pane_t2_ParamLimits

0x665e,	// (0x0007acb2) main_video2_pane_t2

0x66ac,	// (0x0007ad00) main_video2_pane_t3_ParamLimits

0x66ac,	// (0x0007ad00) main_video2_pane_t3

0x0002,

0xf675,	// (0x00083cc9) main_video2_pane_t_ParamLimits

0xf675,	// (0x00083cc9) main_video2_pane_t

0x5b34,	// (0x0007a188) call_muted_g2

0x0001,

0xf617,	// (0x00083c6b) call_muted_g

0xed2d,	// (0x00083381) main_mup2_pane

0x66f4,	// (0x0007ad48) main_mup2_pane_g1_ParamLimits

0x66f4,	// (0x0007ad48) main_mup2_pane_g1

0x6700,	// (0x0007ad54) main_mup2_pane_g2_ParamLimits

0x6700,	// (0x0007ad54) main_mup2_pane_g2

0xb989,	// (0x0007ffdd) main_mup_pane_g13_cp1

0xb991,	// (0x0007ffe5) mup_volume_pane_cp1

0x671c,	// (0x0007ad70) main_mup2_pane_g4_ParamLimits

0x671c,	// (0x0007ad70) main_mup2_pane_g4

0x672e,	// (0x0007ad82) main_mup2_pane_g5_ParamLimits

0x672e,	// (0x0007ad82) main_mup2_pane_g5

0x6740,	// (0x0007ad94) main_mup2_pane_g6_ParamLimits

0x6740,	// (0x0007ad94) main_mup2_pane_g6

0x6752,	// (0x0007ada6) main_mup2_pane_g7_ParamLimits

0x6752,	// (0x0007ada6) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x00083cd0) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x00083cd0) main_mup2_pane_g

0x676a,	// (0x0007adbe) main_mup2_pane_t1_ParamLimits

0x676a,	// (0x0007adbe) main_mup2_pane_t1

0x6780,	// (0x0007add4) main_mup2_pane_t2_ParamLimits

0x6780,	// (0x0007add4) main_mup2_pane_t2

0x6796,	// (0x0007adea) main_mup2_pane_t3_ParamLimits

0x6796,	// (0x0007adea) main_mup2_pane_t3

0x67ac,	// (0x0007ae00) main_mup2_pane_t4_ParamLimits

0x67ac,	// (0x0007ae00) main_mup2_pane_t4

0x67c4,	// (0x0007ae18) main_mup2_pane_t5_ParamLimits

0x67c4,	// (0x0007ae18) main_mup2_pane_t5

0x67dc,	// (0x0007ae30) main_mup2_pane_t6_ParamLimits

0x67dc,	// (0x0007ae30) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00083cdf) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00083cdf) main_mup2_pane_t

0x680c,	// (0x0007ae60) mup2_visualizer_pane_ParamLimits

0x680c,	// (0x0007ae60) mup2_visualizer_pane

0x683a,	// (0x0007ae8e) mup_progress_pane_cp_ParamLimits

0x683a,	// (0x0007ae8e) mup_progress_pane_cp

0xb96b,	// (0x0007ffbf) mup_volume_pane_cp_ParamLimits

0xb96b,	// (0x0007ffbf) mup_volume_pane_cp

0x684e,	// (0x0007aea2) mup2_visualizer_pane_g1_ParamLimits

0x684e,	// (0x0007aea2) mup2_visualizer_pane_g1

0xb8aa,	// (0x0007fefe) mup2_visualizer_pane_g2_ParamLimits

0xb8aa,	// (0x0007fefe) mup2_visualizer_pane_g2

0x6865,	// (0x0007aeb9) mup2_visualizer_pane_g3_ParamLimits

0x6865,	// (0x0007aeb9) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00083cec) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00083cec) mup2_visualizer_pane_g

0x4cf0,	// (0x00079344) aid_size_cell_fmradio

0x5ce6,	// (0x0007a33a) aid_height_parent_landcape

0x2c7c,	// (0x000772d0) wml_content_pane_cp

0x2c84,	// (0x000772d8) wml_tabs_pane

0x2c8d,	// (0x000772e1) popup_wml_miniature_window

0x2c95,	// (0x000772e9) scroll_pane_cp021

0x2ca9,	// (0x000772fd) wml_content_pane_comp8

0xed2d,	// (0x00083381) bg_popup_sub_pane_cp05

0xb8c8,	// (0x0007ff1c) popup_wml_miniature_window_g1

0xb8d0,	// (0x0007ff24) wml_miniature_view_pane

0x6871,	// (0x0007aec5) aid_size_wml_view

0x6879,	// (0x0007aecd) wml_miniature_view_pane_g1

0x6882,	// (0x0007aed6) wml_miniature_view_pane_g2

0x688b,	// (0x0007aedf) wml_miniature_view_pane_g3

0x6893,	// (0x0007aee7) wml_miniature_view_pane_g4

0x689b,	// (0x0007aeef) wml_miniature_view_pane_g5

0x68a3,	// (0x0007aef7) wml_miniature_view_pane_g6

0x68ab,	// (0x0007aeff) wml_miniature_view_pane_g7

0x68b3,	// (0x0007af07) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x00083cf3) wml_miniature_view_pane_g

0xb8d8,	// (0x0007ff2c) background_graphic_ParamLimits

0xb8d8,	// (0x0007ff2c) background_graphic

0xb8e4,	// (0x0007ff38) wml_tabs_2_pane

0xb8ed,	// (0x0007ff41) wml_tabs_3_pane_ParamLimits

0xb8ed,	// (0x0007ff41) wml_tabs_3_pane

0xb8ff,	// (0x0007ff53) wml_tabs_4_pane_ParamLimits

0xb8ff,	// (0x0007ff53) wml_tabs_4_pane

0xb915,	// (0x0007ff69) wml_tabs_5_pane_ParamLimits

0xb915,	// (0x0007ff69) wml_tabs_5_pane

0xb92f,	// (0x0007ff83) wml_tabs_pane_g2_ParamLimits

0xb92f,	// (0x0007ff83) wml_tabs_pane_g2

0xb943,	// (0x0007ff97) wml_tabs_pane_g3_ParamLimits

0xb943,	// (0x0007ff97) wml_tabs_pane_g3

0x68bb,	// (0x0007af0f) wml_tabs_2_active_pane_ParamLimits

0x68bb,	// (0x0007af0f) wml_tabs_2_active_pane

0x68cf,	// (0x0007af23) wml_tabs_2_passive_pane_ParamLimits

0x68cf,	// (0x0007af23) wml_tabs_2_passive_pane

0x68e3,	// (0x0007af37) wml_tabs_3_active_pane_cp_ParamLimits

0x68e3,	// (0x0007af37) wml_tabs_3_active_pane_cp

0x68f8,	// (0x0007af4c) wml_tabs_3_passive_pane_ParamLimits

0x68f8,	// (0x0007af4c) wml_tabs_3_passive_pane

0x690b,	// (0x0007af5f) wml_tabs_3_passive_pane_cp_ParamLimits

0x690b,	// (0x0007af5f) wml_tabs_3_passive_pane_cp

0x6922,	// (0x0007af76) tabs_4_active_pane

0x692a,	// (0x0007af7e) tabs_4_passive_pane

0x6934,	// (0x0007af88) tabs_4_passive_pane_cp

0x693c,	// (0x0007af90) tabs_4_passive_pane_cp2

0xb600,	// (0x0007fc54) aid_height_text

0x449b,	// (0x00078aef) mup_volume_cont_pane_ParamLimits

0x449b,	// (0x00078aef) mup_volume_cont_pane

0x1b34,	// (0x00076188) aid_size_cell_pinb

0xefb8,	// (0x0008360c) aid_size_list_pinb

0x6826,	// (0x0007ae7a) mup2_volume_cont_pane_ParamLimits

0x6826,	// (0x0007ae7a) mup2_volume_cont_pane

0xb957,	// (0x0007ffab) mup2_volume_cont_pane_g1_ParamLimits

0xb957,	// (0x0007ffab) mup2_volume_cont_pane_g1

0x1821,	// (0x00075e75) aid_size_cell_touch_ParamLimits

0x1821,	// (0x00075e75) aid_size_cell_touch

0x1a23,	// (0x00076077) touch_pane_ParamLimits

0x1a23,	// (0x00076077) touch_pane

0xad28,	// (0x0007f37c) main_rss2_pane

0xb999,	// (0x0007ffed) listscroll_rss2_pane

0xb9a2,	// (0x0007fff6) rss2_navigation_pane

0xb9aa,	// (0x0007fffe) list_rss2_pane

0x3da8,	// (0x000783fc) scroll_pane_cp22

0xb9b2,	// (0x00080006) rss2_navigation_pane_g1

0xb9bb,	// (0x0008000f) rss2_navigation_pane_g2

0xb9c3,	// (0x00080017) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x00083d04) rss2_navigation_pane_g

0xb9cb,	// (0x0008001f) rss2_navigation_pane_t1

0x6946,	// (0x0007af9a) rss2_list_single_pane_ParamLimits

0x6946,	// (0x0007af9a) rss2_list_single_pane

0xb9d9,	// (0x0008002d) rss2_list_single_pane_t2

0xb9e7,	// (0x0008003b) rss2_list_single_pane_t3_ParamLimits

0xb9e7,	// (0x0008003b) rss2_list_single_pane_t3

0xba04,	// (0x00080058) rss2_list_single_pane_t4

0x36fa,	// (0x00077d4e) smil_status_pane_g1

0xe8e5,	// (0x00082f39) main_image2_pane_ParamLimits

0xe8e5,	// (0x00082f39) main_image2_pane

0x63e8,	// (0x0007aa3c) main_camera2_pane_g9_ParamLimits

0x63e8,	// (0x0007aa3c) main_camera2_pane_g9

0x6516,	// (0x0007ab6a) main_camera2_pane_t5_ParamLimits

0x6516,	// (0x0007ab6a) main_camera2_pane_t5

0xb87a,	// (0x0007fece) main_camera2_pane_t6_ParamLimits

0xb87a,	// (0x0007fece) main_camera2_pane_t6

0x695e,	// (0x0007afb2) main_image2_pane_g1_ParamLimits

0x695e,	// (0x0007afb2) main_image2_pane_g1

0x4ca6,	// (0x000792fa) smil2_video_pane_ParamLimits

0x4ca6,	// (0x000792fa) smil2_video_pane

0xad56,	// (0x0007f3aa) aid_zoom_text_primary_cp

0xe8db,	// (0x00082f2f) popup_preview_fixed_window

0x2b6f,	// (0x000771c3) im_reading_pane_g1

0x625f,	// (0x0007a8b3) cams2_bc_adjust_pane_cp_ParamLimits

0x625f,	// (0x0007a8b3) cams2_bc_adjust_pane_cp

0x6545,	// (0x0007ab99) cams2_bc_adjust_pane_ParamLimits

0x6545,	// (0x0007ab99) cams2_bc_adjust_pane

0xba12,	// (0x00080066) cams2_bc_adjust_pane_g1

0xba1a,	// (0x0008006e) cams2_slider_pane

0xba23,	// (0x00080077) cams2_slider_pane_g1

0xba2c,	// (0x00080080) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x00083d0b) cams2_slider_pane_g

0x1bf3,	// (0x00076247) calc_display_pane_ParamLimits

0x1c1b,	// (0x0007626f) calc_paper_pane_ParamLimits

0x1c3e,	// (0x00076292) grid_calc_pane_ParamLimits

0xb073,	// (0x0007f6c7) popup_clock_digital_window_t1_ParamLimits

0x4b29,	// (0x0007917d) main_image_pane_t1

0x1bd5,	// (0x00076229) aid_size_cell_calc_ParamLimits

0x1bd5,	// (0x00076229) aid_size_cell_calc

0x5d2c,	// (0x0007a380) popup_blid_sat_info2_window_ParamLimits

0x5d2c,	// (0x0007a380) popup_blid_sat_info2_window

0xba4e,	// (0x000800a2) aid_size_cell_blid

0xba56,	// (0x000800aa) bg_popup_window_pane_cp07

0xba79,	// (0x000800cd) grid_popup_blid_pane

0xba83,	// (0x000800d7) heading_pane_cp05_ParamLimits

0xba83,	// (0x000800d7) heading_pane_cp05

0xbb4d,	// (0x000801a1) cell_popup_blid_pane_ParamLimits

0xbb4d,	// (0x000801a1) cell_popup_blid_pane

0xbb73,	// (0x000801c7) cell_popup_blid_pane_g1

0xbb7b,	// (0x000801cf) cell_popup_blid_pane_t1

0x67f6,	// (0x0007ae4a) mup2_indicator_pane_ParamLimits

0x67f6,	// (0x0007ae4a) mup2_indicator_pane

0x41e1,	// (0x00078835) mup2_visualizer_osc_pane

0xb8b6,	// (0x0007ff0a) mup2_visualizer_spec_pane_ParamLimits

0xb8b6,	// (0x0007ff0a) mup2_visualizer_spec_pane

0x6974,	// (0x0007afc8) mup2_spec_half_pane

0x697d,	// (0x0007afd1) mup2_spec_half_pane_cp

0x6985,	// (0x0007afd9) mup2_spec_bar_pane_ParamLimits

0x6985,	// (0x0007afd9) mup2_spec_bar_pane

0xb805,	// (0x0007fe59) mup2_spec_bar_pane_g1

0xb80f,	// (0x0007fe63) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00083c7e) mup2_spec_bar_pane_g

0x69a5,	// (0x0007aff9) mup2_osc_middle_pane

0xb821,	// (0x0007fe75) mup2_visualizer_osc_pane_g1

0xe913,	// (0x00082f67) popup_number_entry_window_t1_ParamLimits

0xe926,	// (0x00082f7a) popup_number_entry_window_t2_ParamLimits

0xe938,	// (0x00082f8c) popup_number_entry_window_t3_ParamLimits

0x1a75,	// (0x000760c9) popup_number_entry_window_t5_ParamLimits

0x1a75,	// (0x000760c9) popup_number_entry_window_t5

0xf0ec,	// (0x00083740) popup_number_entry_window_t_ParamLimits

0xe94a,	// (0x00082f9e) text_title_cp2_ParamLimits

0xb0b2,	// (0x0007f706) aid_hotspot_pointer_text2_pane

0xb0d8,	// (0x0007f72c) main_viewer_pane_g9_ParamLimits

0xb0d8,	// (0x0007f72c) main_viewer_pane_g9

0x322a,	// (0x0007787e) cale_month_pane_t1_ParamLimits

0x3784,	// (0x00077dd8) bg_cale_pane_ParamLimits

0x379c,	// (0x00077df0) list_cale_pane_ParamLimits

0x215a,	// (0x000767ae) listscroll_cale_day_pane_t1

0x37ad,	// (0x00077e01) scroll_pane_cp09_ParamLimits

0x454d,	// (0x00078ba1) main_mup_eq_pane_t1_ParamLimits

0x454d,	// (0x00078ba1) main_mup_eq_pane_t1

0x4567,	// (0x00078bbb) main_mup_eq_pane_t2_ParamLimits

0x4567,	// (0x00078bbb) main_mup_eq_pane_t2

0x4581,	// (0x00078bd5) main_mup_eq_pane_t3_ParamLimits

0x4581,	// (0x00078bd5) main_mup_eq_pane_t3

0x459d,	// (0x00078bf1) main_mup_eq_pane_t4_ParamLimits

0x459d,	// (0x00078bf1) main_mup_eq_pane_t4

0x45b9,	// (0x00078c0d) main_mup_eq_pane_t5_ParamLimits

0x45b9,	// (0x00078c0d) main_mup_eq_pane_t5

0x45d5,	// (0x00078c29) main_mup_eq_pane_t6_ParamLimits

0x45d5,	// (0x00078c29) main_mup_eq_pane_t6

0x45e9,	// (0x00078c3d) main_mup_eq_pane_t7_ParamLimits

0x45e9,	// (0x00078c3d) main_mup_eq_pane_t7

0x45fd,	// (0x00078c51) main_mup_eq_pane_t8_ParamLimits

0x45fd,	// (0x00078c51) main_mup_eq_pane_t8

0x4611,	// (0x00078c65) main_mup_eq_pane_t9_ParamLimits

0x4611,	// (0x00078c65) main_mup_eq_pane_t9

0x462b,	// (0x00078c7f) main_mup_eq_pane_t10_ParamLimits

0x462b,	// (0x00078c7f) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00083acd) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00083acd) main_mup_eq_pane_t

0x46da,	// (0x00078d2e) mup_equalizer_pane_cp5_ParamLimits

0x46ee,	// (0x00078d42) mup_equalizer_pane_cp6_ParamLimits

0x4702,	// (0x00078d56) mup_equalizer_pane_cp7_ParamLimits

0xad28,	// (0x0007f37c) main_gallery_pane

0xb82a,	// (0x0007fe7e) smil2_volume_pane

0xb832,	// (0x0007fe86) smil_status_volume_pane_g1_ParamLimits

0xb845,	// (0x0007fe99) smil_status_volume_pane_g2_ParamLimits

0xb858,	// (0x0007feac) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x00083c83) smil_status_volume_pane_g_ParamLimits

0xba56,	// (0x000800aa) bg_popup_window_pane_cp07_ParamLimits

0xba64,	// (0x000800b8) blid_firmament_pane

0x69ae,	// (0x0007b002) aid_size_cell_gallery_ParamLimits

0x69ae,	// (0x0007b002) aid_size_cell_gallery

0x69c4,	// (0x0007b018) grid_gallery_pane_ParamLimits

0x69c4,	// (0x0007b018) grid_gallery_pane

0x69dd,	// (0x0007b031) cell_gallery_pane_ParamLimits

0x69dd,	// (0x0007b031) cell_gallery_pane

0xbb89,	// (0x000801dd) bg_cell_gallery_focus_pane_ParamLimits

0xbb89,	// (0x000801dd) bg_cell_gallery_focus_pane

0xbb9b,	// (0x000801ef) cell_gallery_pane_g1_ParamLimits

0xbb9b,	// (0x000801ef) cell_gallery_pane_g1

0x6a26,	// (0x0007b07a) cell_gallery_pane_g2_ParamLimits

0x6a26,	// (0x0007b07a) cell_gallery_pane_g2

0x6a33,	// (0x0007b087) cell_gallery_pane_g3_ParamLimits

0x6a33,	// (0x0007b087) cell_gallery_pane_g3

0xbba7,	// (0x000801fb) cell_gallery_pane_g4_ParamLimits

0xbba7,	// (0x000801fb) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x00083d31) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x00083d31) cell_gallery_pane_g

0xbbb3,	// (0x00080207) bg_cell_gallery_focus_pane_g1

0xbbbb,	// (0x0008020f) bg_cell_gallery_focus_pane_g2

0xbbc3,	// (0x00080217) bg_cell_gallery_focus_pane_g3

0xbbcb,	// (0x0008021f) bg_cell_gallery_focus_pane_g4

0xbbd3,	// (0x00080227) bg_cell_gallery_focus_pane_g5

0xbbdb,	// (0x0008022f) bg_cell_gallery_focus_pane_g6

0xbbe3,	// (0x00080237) bg_cell_gallery_focus_pane_g7

0xbbeb,	// (0x0008023f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x00083d3a) bg_cell_gallery_focus_pane_g

0xbbf3,	// (0x00080247) aid_firma_cardinal

0xbc07,	// (0x0008025b) blid_firmament_pane_t1

0xbc1e,	// (0x00080272) blid_firmament_pane_t2

0xbc35,	// (0x00080289) blid_firmament_pane_t3

0xbc4c,	// (0x000802a0) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x00083d4b) blid_firmament_pane_t

0xbc63,	// (0x000802b7) blid_sat_info_pane

0xbc73,	// (0x000802c7) blid_sat_info_pane_g1

0xbc73,	// (0x000802c7) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x00083d54) blid_sat_info_pane_g

0xbc7d,	// (0x000802d1) blid_sat_info_pane_t1

0xbc8b,	// (0x000802df) smil2_volume_content_pane

0xbc94,	// (0x000802e8) smil2_volume_pane_g1

0xbc9c,	// (0x000802f0) smil2_volume_content_pane_g1

0xbca5,	// (0x000802f9) smil2_volume_content_pane_g2

0xbcae,	// (0x00080302) smil2_volume_content_pane_g3

0xbcb7,	// (0x0008030b) smil2_volume_content_pane_g4

0xbcc0,	// (0x00080314) smil2_volume_content_pane_g5

0xbcc9,	// (0x0008031d) smil2_volume_content_pane_g6

0xbcd2,	// (0x00080326) smil2_volume_content_pane_g7

0xbcdb,	// (0x0008032f) smil2_volume_content_pane_g8

0xbce4,	// (0x00080338) smil2_volume_content_pane_g9

0xbced,	// (0x00080341) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x00083d59) smil2_volume_content_pane_g

0x21c6,	// (0x0007681a) cale_week_day_heading_pane_t1_ParamLimits

0x21da,	// (0x0007682e) cale_week_day_heading_pane_t2_ParamLimits

0x21ee,	// (0x00076842) cale_week_day_heading_pane_t3_ParamLimits

0x2202,	// (0x00076856) cale_week_day_heading_pane_t4_ParamLimits

0x2216,	// (0x0007686a) cale_week_day_heading_pane_t5_ParamLimits

0x222a,	// (0x0007687e) cale_week_day_heading_pane_t6_ParamLimits

0x2240,	// (0x00076894) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00083845) cale_week_day_heading_pane_t_ParamLimits

0x2254,	// (0x000768a8) bg_cale_side_pane_ParamLimits

0x2262,	// (0x000768b6) cale_week_time_pane_t1_ParamLimits

0x227a,	// (0x000768ce) cale_week_time_pane_t2_ParamLimits

0x2292,	// (0x000768e6) cale_week_time_pane_t3_ParamLimits

0x22aa,	// (0x000768fe) cale_week_time_pane_t4_ParamLimits

0x22c2,	// (0x00076916) cale_week_time_pane_t5_ParamLimits

0x22da,	// (0x0007692e) cale_week_time_pane_t6_ParamLimits

0x22f2,	// (0x00076946) cale_week_time_pane_t7_ParamLimits

0x230a,	// (0x0007695e) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00083854) cale_week_time_pane_t_ParamLimits

0x2322,	// (0x00076976) cell_cale_week_pane_g2_ParamLimits

0x2254,	// (0x000768a8) bg_cale_side_pane_cp01_ParamLimits

0x3569,	// (0x00077bbd) cale_month_week_pane_t1_ParamLimits

0x3580,	// (0x00077bd4) cale_month_week_pane_t2_ParamLimits

0x3597,	// (0x00077beb) cale_month_week_pane_t3_ParamLimits

0x35ae,	// (0x00077c02) cale_month_week_pane_t4_ParamLimits

0x35c5,	// (0x00077c19) cale_month_week_pane_t5_ParamLimits

0x35dc,	// (0x00077c30) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0008392d) cale_month_week_pane_t_ParamLimits

0xaf7c,	// (0x0007f5d0) cell_cale_month_pane_g1_ParamLimits

0xad28,	// (0x0007f37c) main_cale_event_viewer_pane

0xad28,	// (0x0007f37c) listscroll_cale_event_viewer_pane

0xbcf6,	// (0x0008034a) list_cale_ev_pane

0xbcfe,	// (0x00080352) scroll_pane_cp023

0xbd0a,	// (0x0008035e) field_cale_ev_pane_ParamLimits

0xbd0a,	// (0x0008035e) field_cale_ev_pane

0xbd24,	// (0x00080378) field_cale_ev_content_pane_ParamLimits

0xbd24,	// (0x00080378) field_cale_ev_content_pane

0xbd30,	// (0x00080384) field_cale_ev_pane_g1_ParamLimits

0xbd30,	// (0x00080384) field_cale_ev_pane_g1

0xbd3c,	// (0x00080390) field_cale_ev_pane_g2_ParamLimits

0xbd3c,	// (0x00080390) field_cale_ev_pane_g2

0xbd54,	// (0x000803a8) field_cale_ev_pane_g3_ParamLimits

0xbd54,	// (0x000803a8) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x00083d6e) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x00083d6e) field_cale_ev_pane_g

0xbd6c,	// (0x000803c0) field_cale_ev_pane_t1_ParamLimits

0xbd6c,	// (0x000803c0) field_cale_ev_pane_t1

0xbd83,	// (0x000803d7) field_cale_ev_content_pane_t1_ParamLimits

0xbd83,	// (0x000803d7) field_cale_ev_content_pane_t1

0x47a2,	// (0x00078df6) bg_button_pane_cp01

0xf097,	// (0x000836eb) listscroll_cale_week_pane_ParamLimits

0x1fb0,	// (0x00076604) popup_toolbar_window_cp01

0x215a,	// (0x000767ae) listscroll_cale_week_pane_t1_ParamLimits

0xf097,	// (0x000836eb) listscroll_cale_day_pane_ParamLimits

0x377a,	// (0x00077dce) popup_toolbar_window_cp02

0x215a,	// (0x000767ae) listscroll_cale_day_pane_t1_ParamLimits

0xf097,	// (0x000836eb) main_cale_month_pane_ParamLimits

0x5f52,	// (0x0007a5a6) popup_toolbar_window_cp03_ParamLimits

0x5f52,	// (0x0007a5a6) popup_toolbar_window_cp03

0x4b07,	// (0x0007915b) main_image_pane_g2_ParamLimits

0x4b07,	// (0x0007915b) main_image_pane_g2

0x4b18,	// (0x0007916c) main_image_pane_g3_ParamLimits

0x4b18,	// (0x0007916c) main_image_pane_g3

0x0002,

0xf50b,	// (0x00083b5f) main_image_pane_g_ParamLimits

0xf50b,	// (0x00083b5f) main_image_pane_g

0x4b29,	// (0x0007917d) main_image_pane_t1_ParamLimits

0x4b40,	// (0x00079194) main_image_pane_t2_ParamLimits

0x4b40,	// (0x00079194) main_image_pane_t2

0x4b52,	// (0x000791a6) main_image_pane_t3_ParamLimits

0x4b52,	// (0x000791a6) main_image_pane_t3

0x4b7a,	// (0x000791ce) main_image_pane_t4_ParamLimits

0x4b7a,	// (0x000791ce) main_image_pane_t4

0x0003,

0xf512,	// (0x00083b66) main_image_pane_t_ParamLimits

0xf512,	// (0x00083b66) main_image_pane_t

0x4b9a,	// (0x000791ee) popup_image_details_window_cp01

0x4ba4,	// (0x000791f8) popup_toobar_trans_pane_cp01_ParamLimits

0x4ba4,	// (0x000791f8) popup_toobar_trans_pane_cp01

0x5e03,	// (0x0007a457) popup_image_details_window_ParamLimits

0x5e03,	// (0x0007a457) popup_image_details_window

0xb78b,	// (0x0007fddf) popup_image_focus_window

0x6219,	// (0x0007a86d) camera2_autofocus_pane_ParamLimits

0x6219,	// (0x0007a86d) camera2_autofocus_pane

0xad28,	// (0x0007f37c) bg_popup_sub_pane_cp06

0xbda0,	// (0x000803f4) popup_image_focus_window_g1

0xbda8,	// (0x000803fc) popup_image_focus_window_g2

0xbdb0,	// (0x00080404) popup_image_focus_window_g3

0xbdb8,	// (0x0008040c) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x00083d75) popup_image_focus_window_g

0xbdc0,	// (0x00080414) popup_image_focus_window_t1

0xbdce,	// (0x00080422) popup_image_focus_window_t2

0xbdde,	// (0x00080432) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x00083d7e) popup_image_focus_window_t

0xbdec,	// (0x00080440) camera2_autofocus_pane_g1

0xe8e5,	// (0x00082f39) bg_tb_trans_pane_cp01

0xbdfa,	// (0x0008044e) popup_image_details_window_g1

0xbe0d,	// (0x00080461) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x00083d90) popup_image_details_window_g

0xbe36,	// (0x0008048a) popup_image_details_window_t1

0xbe48,	// (0x0008049c) popup_image_details_window_t2

0xbe61,	// (0x000804b5) popup_image_details_window_t3

0xbe75,	// (0x000804c9) popup_image_details_window_t4

0xbe90,	// (0x000804e4) popup_image_details_window_t5

0x0004,

0xf743,	// (0x00083d97) popup_image_details_window_t

0xf083,	// (0x000836d7) bg_calc_paper_pane_ParamLimits

0xad28,	// (0x0007f37c) grid_highlight_pane_cp013

0xad8a,	// (0x0007f3de) list_calc_pane_ParamLimits

0xad9c,	// (0x0007f3f0) scroll_pane_cp024

0xf097,	// (0x000836eb) bg_calc_display_pane_ParamLimits

0x1d33,	// (0x00076387) calc_display_pane_t1_ParamLimits

0x1d45,	// (0x00076399) calc_display_pane_t2_ParamLimits

0xada4,	// (0x0007f3f8) calc_display_pane_t3_ParamLimits

0xf173,	// (0x000837c7) calc_display_pane_t_ParamLimits

0x1e0a,	// (0x0007645e) cell_calc_pane_g2

0x0001,

0xf190,	// (0x000837e4) cell_calc_pane_g

0x1e13,	// (0x00076467) cell_calc_pane_t1

0x1e22,	// (0x00076476) grid_highlight_pane_cp02_ParamLimits

0x1e38,	// (0x0007648c) toolbar_button_pane_cp01_ParamLimits

0x1e38,	// (0x0007648c) toolbar_button_pane_cp01

0x4be6,	// (0x0007923a) temp_image_control_pane_ParamLimits

0x4be6,	// (0x0007923a) temp_image_control_pane

0xe8e5,	// (0x00082f39) main_mp3_pane

0xbeaa,	// (0x000804fe) temp_image_control_pane_g1_ParamLimits

0xbeaa,	// (0x000804fe) temp_image_control_pane_g1

0xbeb8,	// (0x0008050c) temp_image_control_pane_g2_ParamLimits

0xbeb8,	// (0x0008050c) temp_image_control_pane_g2

0xbeca,	// (0x0008051e) temp_image_control_pane_g3_ParamLimits

0xbeca,	// (0x0008051e) temp_image_control_pane_g3

0x6a70,	// (0x0007b0c4) temp_image_control_pane_g4_ParamLimits

0x6a70,	// (0x0007b0c4) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x00083da2) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x00083da2) temp_image_control_pane_g

0xbeaa,	// (0x000804fe) main_mp3_pane_g1

0x6a83,	// (0x0007b0d7) main_mp3_pane_g2

0x0007,

0xf757,	// (0x00083dab) main_mp3_pane_g

0xbf0d,	// (0x00080561) main_mp3_pane_t1

0x2499,	// (0x00076aed) main_camera_pane_g8_ParamLimits

0x2499,	// (0x00076aed) main_camera_pane_g8

0x2650,	// (0x00076ca4) main_video_pane_g7_ParamLimits

0x2650,	// (0x00076ca4) main_video_pane_g7

0xb898,	// (0x0007feec) main_camera2_pane_t7_ParamLimits

0xb898,	// (0x0007feec) main_camera2_pane_t7

0x2c3c,	// (0x00077290) scroll_pane_cp025_ParamLimits

0x2c3c,	// (0x00077290) scroll_pane_cp025

0x2c50,	// (0x000772a4) scroll_pane_cp026_ParamLimits

0x2c50,	// (0x000772a4) scroll_pane_cp026

0x2c5f,	// (0x000772b3) wml_content_pane_ParamLimits

0xad28,	// (0x0007f37c) main_touch_calib_pane

0x6b4f,	// (0x0007b1a3) main_touch_calib_pane_g1

0x6b5b,	// (0x0007b1af) main_touch_calib_pane_g2

0x6b67,	// (0x0007b1bb) main_touch_calib_pane_g3

0x6b73,	// (0x0007b1c7) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x00083dc9) main_touch_calib_pane_g

0x6b7f,	// (0x0007b1d3) main_touch_calib_pane_t1

0x6b99,	// (0x0007b1ed) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x00083dd2) main_touch_calib_pane_t

0x405a,	// (0x000786ae) mup_progress_pane_cp02

0x4079,	// (0x000786cd) navi_pane_g1

0x4132,	// (0x00078786) navi_pane_mp_t3

0xe8e5,	// (0x00082f39) main_mp3_pane_ParamLimits

0x5f90,	// (0x0007a5e4) navi_pane_ParamLimits

0xbeaa,	// (0x000804fe) main_mp3_pane_g1_ParamLimits

0x6a83,	// (0x0007b0d7) main_mp3_pane_g2_ParamLimits

0x6a91,	// (0x0007b0e5) main_mp3_pane_g3_ParamLimits

0x6a91,	// (0x0007b0e5) main_mp3_pane_g3

0x6a9f,	// (0x0007b0f3) main_mp3_pane_g4_ParamLimits

0x6a9f,	// (0x0007b0f3) main_mp3_pane_g4

0xbeda,	// (0x0008052e) main_mp3_pane_g5_ParamLimits

0xbeda,	// (0x0008052e) main_mp3_pane_g5

0xbee8,	// (0x0008053c) main_mp3_pane_g6_ParamLimits

0xbee8,	// (0x0008053c) main_mp3_pane_g6

0xbef5,	// (0x00080549) main_mp3_pane_g7_ParamLimits

0xbef5,	// (0x00080549) main_mp3_pane_g7

0xbf01,	// (0x00080555) main_mp3_pane_g8_ParamLimits

0xbf01,	// (0x00080555) main_mp3_pane_g8

0xf757,	// (0x00083dab) main_mp3_pane_g_ParamLimits

0x6aad,	// (0x0007b101) main_mp3_pane_t2

0x6abb,	// (0x0007b10f) main_mp3_pane_t3

0xbf1b,	// (0x0008056f) main_mp3_pane_t4

0xbf29,	// (0x0008057d) main_mp3_pane_t5

0x0005,

0xf768,	// (0x00083dbc) main_mp3_pane_t

0xbf37,	// (0x0008058b) mup_progress_pane_cp01

0xad56,	// (0x0007f3aa) aid_zoom_text_secondary2

0xbcf6,	// (0x0008034a) list_cale_ev2_pane

0xbcfe,	// (0x00080352) scroll_pane_cp023_ParamLimits

0x6bef,	// (0x0007b243) field_cale_ev2_pane_ParamLimits

0x6bef,	// (0x0007b243) field_cale_ev2_pane

0x6c15,	// (0x0007b269) field_cale_ev2_pane_g1_ParamLimits

0x6c15,	// (0x0007b269) field_cale_ev2_pane_g1

0x6c21,	// (0x0007b275) field_cale_ev2_pane_g2_ParamLimits

0x6c21,	// (0x0007b275) field_cale_ev2_pane_g2

0x6c39,	// (0x0007b28d) field_cale_ev2_pane_g3_ParamLimits

0x6c39,	// (0x0007b28d) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x00083ddd) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x00083ddd) field_cale_ev2_pane_g

0xbf4b,	// (0x0008059f) field_cale_ev2_pane_t1_ParamLimits

0xbf4b,	// (0x0008059f) field_cale_ev2_pane_t1

0xbf62,	// (0x000805b6) field_cale_ev2_pane_t2_ParamLimits

0xbf62,	// (0x000805b6) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x00083de6) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x00083de6) field_cale_ev2_pane_t

0x48d1,	// (0x00078f25) main_postcard_pane_g5_ParamLimits

0x48d1,	// (0x00078f25) main_postcard_pane_g5

0x48e7,	// (0x00078f3b) main_postcard_pane_g6_ParamLimits

0x48e7,	// (0x00078f3b) main_postcard_pane_g6

0x23da,	// (0x00076a2e) camera2_autofocus_pane_cp_ParamLimits

0x23da,	// (0x00076a2e) camera2_autofocus_pane_cp

0xe8e5,	// (0x00082f39) main_mup3_pane

0x6c71,	// (0x0007b2c5) main_mup3_pane_g1_ParamLimits

0x6c71,	// (0x0007b2c5) main_mup3_pane_g1

0x6c93,	// (0x0007b2e7) main_mup3_pane_g2_ParamLimits

0x6c93,	// (0x0007b2e7) main_mup3_pane_g2

0x6d14,	// (0x0007b368) main_mup3_pane_g3_ParamLimits

0x6d14,	// (0x0007b368) main_mup3_pane_g3

0x6d56,	// (0x0007b3aa) main_mup3_pane_g4_ParamLimits

0x6d56,	// (0x0007b3aa) main_mup3_pane_g4

0x6d98,	// (0x0007b3ec) main_mup3_pane_g5_ParamLimits

0x6d98,	// (0x0007b3ec) main_mup3_pane_g5

0x6ddc,	// (0x0007b430) main_mup3_pane_g6_ParamLimits

0x6ddc,	// (0x0007b430) main_mup3_pane_g6

0xbf77,	// (0x000805cb) main_mup3_pane_g7_ParamLimits

0xbf77,	// (0x000805cb) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x00083df6) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x00083df6) main_mup3_pane_g

0x6e58,	// (0x0007b4ac) main_mup3_pane_t1_ParamLimits

0x6e58,	// (0x0007b4ac) main_mup3_pane_t1

0x6ecc,	// (0x0007b520) main_mup3_pane_t2_ParamLimits

0x6ecc,	// (0x0007b520) main_mup3_pane_t2

0x6fa0,	// (0x0007b5f4) main_mup3_pane_t4_ParamLimits

0x6fa0,	// (0x0007b5f4) main_mup3_pane_t4

0x6ffa,	// (0x0007b64e) main_mup3_pane_t5_ParamLimits

0x6ffa,	// (0x0007b64e) main_mup3_pane_t5

0x70ae,	// (0x0007b702) main_mup3_pane_t6_ParamLimits

0x70ae,	// (0x0007b702) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x00083e07) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x00083e07) main_mup3_pane_t

0x7162,	// (0x0007b7b6) mup3_progress_pane_ParamLimits

0x7162,	// (0x0007b7b6) mup3_progress_pane

0x71de,	// (0x0007b832) popup_mup3_control_window_ParamLimits

0x71de,	// (0x0007b832) popup_mup3_control_window

0xbf85,	// (0x000805d9) popup_mup3_text_window

0x7210,	// (0x0007b864) mup3_progress_pane_t1

0x7227,	// (0x0007b87b) mup3_progress_pane_t2

0xbf8d,	// (0x000805e1) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x00083e14) mup3_progress_pane_t

0xbfa4,	// (0x000805f8) mup_progress_pane_cp03

0xad28,	// (0x0007f37c) bg_tb_trans_pane_cp04

0x723e,	// (0x0007b892) mup3_volume_pane

0x7246,	// (0x0007b89a) popup_mup3_control_window_g1

0x724f,	// (0x0007b8a3) mup3_volume_pane_g1

0x7258,	// (0x0007b8ac) mup3_volume_pane_g2

0x7261,	// (0x0007b8b5) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x00083e1b) mup3_volume_pane_g

0xad28,	// (0x0007f37c) bg_tb_trans_pane_cp03

0xbfb4,	// (0x00080608) popup_mup3_text_window_g1

0xbfbc,	// (0x00080610) popup_mup3_text_window_t1

0xf0df,	// (0x00083733) list_calc_item_pane_g1_ParamLimits

0xb980,	// (0x0007ffd4) mup_volume_pane_cp_g1

0x6bb3,	// (0x0007b207) main_touch_calib_pane_t3

0x6bc7,	// (0x0007b21b) main_touch_calib_pane_t4

0x6bdb,	// (0x0007b22f) main_touch_calib_pane_t5

0xad32,	// (0x0007f386) aid_cell_size_toolbar2

0xad3a,	// (0x0007f38e) aid_popup3_width_pane

0xad46,	// (0x0007f39a) aid_zoom_text_msg_primary

0xae7e,	// (0x0007f4d2) vorec_t7

0xf0a3,	// (0x000836f7) bg_calc_paper_pane_g1_ParamLimits

0xf0af,	// (0x00083703) bg_calc_paper_pane_g2_ParamLimits

0xf0bb,	// (0x0008370f) bg_calc_paper_pane_g3_ParamLimits

0xf0c7,	// (0x0008371b) bg_calc_paper_pane_g4_ParamLimits

0xf0d3,	// (0x00083727) bg_calc_paper_pane_g5_ParamLimits

0x1d8c,	// (0x000763e0) bg_calc_paper_pane_g6_ParamLimits

0x1d9b,	// (0x000763ef) bg_calc_paper_pane_g7_ParamLimits

0x1daa,	// (0x000763fe) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x000837ce) bg_calc_paper_pane_g_ParamLimits

0x1dbd,	// (0x00076411) calc_bg_paper_pane_g9_ParamLimits

0x2540,	// (0x00076b94) image_qvga_pane_ParamLimits

0x2540,	// (0x00076b94) image_qvga_pane

0xef88,	// (0x000835dc) bg_popup_sub_pane_cp04_ParamLimits

0x4a65,	// (0x000790b9) popup_mup_playback_window_g1_ParamLimits

0x4a71,	// (0x000790c5) popup_mup_playback_window_t1_ParamLimits

0x4a86,	// (0x000790da) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00083b5a) popup_mup_playback_window_t_ParamLimits

0x6710,	// (0x0007ad64) main_mup2_pane_g3_ParamLimits

0x6710,	// (0x0007ad64) main_mup2_pane_g3

0x28da,	// (0x00076f2e) popup_toolbar_window_cp04

0x527f,	// (0x000798d3) popup_call2_audio_second_window_g3_ParamLimits

0x527f,	// (0x000798d3) popup_call2_audio_second_window_g3

0x5689,	// (0x00079cdd) popup_call2_audio_first_window_g4_ParamLimits

0x5689,	// (0x00079cdd) popup_call2_audio_first_window_g4

0xb402,	// (0x0007fa56) popup_call2_audio_in_window_g4_ParamLimits

0xb402,	// (0x0007fa56) popup_call2_audio_in_window_g4

0x4a9b,	// (0x000790ef) aid_area_sk_bg_cut_ParamLimits

0x4a9b,	// (0x000790ef) aid_area_sk_bg_cut

0x4ab9,	// (0x0007910d) aid_area_sk_bg_cut_2_ParamLimits

0x4ab9,	// (0x0007910d) aid_area_sk_bg_cut_2

0x6a16,	// (0x0007b06a) aid_placing_details_win

0x6a1e,	// (0x0007b072) aid_placing_details_win_2

0xbdec,	// (0x00080440) camera2_autofocus_pane_g1_ParamLimits

0x19ce,	// (0x00076022) popup_fixed_preview_cale_window_ParamLimits

0x19ce,	// (0x00076022) popup_fixed_preview_cale_window

0x41f2,	// (0x00078846) navi_slider_pane_g3

0x41fb,	// (0x0007884f) navi_slider_pane_g4

0x4204,	// (0x00078858) navi_slider_pane_g5

0x41f2,	// (0x00078846) navi_slider_pane_g6

0xb099,	// (0x0007f6ed) navi_slider_pane_g7

0x471f,	// (0x00078d73) mup_scale_pane_g3

0x4728,	// (0x00078d7c) mup_scale_pane_g4

0x4731,	// (0x00078d85) mup_scale_pane_g5

0x473a,	// (0x00078d8e) mup_scale_pane_g6

0x4743,	// (0x00078d97) mup_scale_pane_g7

0x41f2,	// (0x00078846) cams2_slider_pane_g3

0xba35,	// (0x00080089) cams2_slider_pane_g4

0xba3d,	// (0x00080091) cams2_slider_pane_g5

0x41f2,	// (0x00078846) cams2_slider_pane_g6

0xba45,	// (0x00080099) cams2_slider_pane_g7

0xbc73,	// (0x000802c7) camera2_autofocus_pane_cp_g1

0xbfca,	// (0x0008061e) bg_popup_preview_window_pane_cp02_ParamLimits

0xbfca,	// (0x0008061e) bg_popup_preview_window_pane_cp02

0xbfd6,	// (0x0008062a) list_fp_cale_pane_ParamLimits

0xbfd6,	// (0x0008062a) list_fp_cale_pane

0xbfe2,	// (0x00080636) popup_fixed_preview_cale_window_t1_ParamLimits

0xbfe2,	// (0x00080636) popup_fixed_preview_cale_window_t1

0x726a,	// (0x0007b8be) popup_fixed_preview_cale_window_t2_ParamLimits

0x726a,	// (0x0007b8be) popup_fixed_preview_cale_window_t2

0x727f,	// (0x0007b8d3) popup_fixed_preview_cale_window_t3_ParamLimits

0x727f,	// (0x0007b8d3) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x00083e22) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x00083e22) popup_fixed_preview_cale_window_t

0x7294,	// (0x0007b8e8) list_single_fp_cale_pane_ParamLimits

0x7294,	// (0x0007b8e8) list_single_fp_cale_pane

0xc000,	// (0x00080654) list_single_fp_cale_pane_g1_ParamLimits

0xc000,	// (0x00080654) list_single_fp_cale_pane_g1

0xc00c,	// (0x00080660) list_single_fp_cale_pane_g2_ParamLimits

0xc00c,	// (0x00080660) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x00083e29) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x00083e29) list_single_fp_cale_pane_g

0xc025,	// (0x00080679) list_single_fp_cale_pane_t1_ParamLimits

0xc025,	// (0x00080679) list_single_fp_cale_pane_t1

0xc037,	// (0x0008068b) list_single_fp_cale_pane_t2_ParamLimits

0xc037,	// (0x0008068b) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x00083e30) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x00083e30) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xad28,	// (0x0007f37c) main_dialer_pane

0x72ac,	// (0x0007b900) aid_cell_size_keypad

0x72b6,	// (0x0007b90a) dialer_ne_pane

0x72be,	// (0x0007b912) grid_dialer_command_1_pane

0x72c6,	// (0x0007b91a) grid_dialer_command_2_pane

0x72ce,	// (0x0007b922) grid_dialer_keypad_pane

0x72e0,	// (0x0007b934) bg_popup_call_pane_cp06_ParamLimits

0x72e0,	// (0x0007b934) bg_popup_call_pane_cp06

0x72ec,	// (0x0007b940) dialer_ne_clear_pane_ParamLimits

0x72ec,	// (0x0007b940) dialer_ne_clear_pane

0xc06a,	// (0x000806be) dialer_ne_pane_g1

0xc072,	// (0x000806c6) dialer_ne_pane_t1_ParamLimits

0xc072,	// (0x000806c6) dialer_ne_pane_t1

0x72f8,	// (0x0007b94c) dialer_ne_pane_t2_ParamLimits

0x72f8,	// (0x0007b94c) dialer_ne_pane_t2

0x7322,	// (0x0007b976) dialer_ne_pane_t3_ParamLimits

0x7322,	// (0x0007b976) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x00083e35) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x00083e35) dialer_ne_pane_t

0x7352,	// (0x0007b9a6) dialer_ne_pane_t3_copy1_ParamLimits

0x7352,	// (0x0007b9a6) dialer_ne_pane_t3_copy1

0x7381,	// (0x0007b9d5) cell_dialer_keypad_pane_ParamLimits

0x7381,	// (0x0007b9d5) cell_dialer_keypad_pane

0x7398,	// (0x0007b9ec) cell_dialer_command_1_pane_ParamLimits

0x7398,	// (0x0007b9ec) cell_dialer_command_1_pane

0x73ae,	// (0x0007ba02) cell_dialer_command_2_pane_ParamLimits

0x73ae,	// (0x0007ba02) cell_dialer_command_2_pane

0xc084,	// (0x000806d8) bg_button_pane_cp02_ParamLimits

0xc084,	// (0x000806d8) bg_button_pane_cp02

0x73bd,	// (0x0007ba11) cell_dialer_keypad_pane_g1_ParamLimits

0x73bd,	// (0x0007ba11) cell_dialer_keypad_pane_g1

0xc084,	// (0x000806d8) bg_button_pane_cp03_ParamLimits

0xc084,	// (0x000806d8) bg_button_pane_cp03

0x73d2,	// (0x0007ba26) cell_dialer_command_1_pane_g1_ParamLimits

0x73d2,	// (0x0007ba26) cell_dialer_command_1_pane_g1

0xc090,	// (0x000806e4) bg_button_pane_cp04

0x73e6,	// (0x0007ba3a) cell_dialer_command_2_pane_g1

0x41e1,	// (0x00078835) bg_button_pane_cp06

0xc098,	// (0x000806ec) dialer_ne_clear_pane_g1

0x4085,	// (0x000786d9) navi_pane_g2

0x40b3,	// (0x00078707) navi_pane_g3

0x0002,

0xf409,	// (0x00083a5d) navi_pane_g

0x4140,	// (0x00078794) navi_pane_mv_g2

0x4167,	// (0x000787bb) navi_pane_mv_g5

0x416f,	// (0x000787c3) navi_pane_mv_t1

0xf097,	// (0x000836eb) main_clock2_pane

0x7419,	// (0x0007ba6d) main_clock2_list_pane_ParamLimits

0x7419,	// (0x0007ba6d) main_clock2_list_pane

0x744f,	// (0x0007baa3) main_clock2_pane_t1_ParamLimits

0x744f,	// (0x0007baa3) main_clock2_pane_t1

0x748d,	// (0x0007bae1) main_clock2_pane_t2_ParamLimits

0x748d,	// (0x0007bae1) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x00083e3c) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x00083e3c) main_clock2_pane_t

0x7517,	// (0x0007bb6b) popup_clock_analogue_window_cp03_ParamLimits

0x7517,	// (0x0007bb6b) popup_clock_analogue_window_cp03

0x753e,	// (0x0007bb92) popup_clock_digital_window_cp02_ParamLimits

0x753e,	// (0x0007bb92) popup_clock_digital_window_cp02

0x75b3,	// (0x0007bc07) main_clock2_list_single_pane_ParamLimits

0x75b3,	// (0x0007bc07) main_clock2_list_single_pane

0x41e1,	// (0x00078835) list_highlight_pane_cp05

0xc0a0,	// (0x000806f4) main_clock2_list_single_pane_t1

0x28da,	// (0x00076f2e) popup_toolbar_window_cp04_ParamLimits

0x6a40,	// (0x0007b094) camera2_autofocus_pane_g2_ParamLimits

0x6a40,	// (0x0007b094) camera2_autofocus_pane_g2

0x6a4c,	// (0x0007b0a0) camera2_autofocus_pane_g3_ParamLimits

0x6a4c,	// (0x0007b0a0) camera2_autofocus_pane_g3

0x6a58,	// (0x0007b0ac) camera2_autofocus_pane_g4_ParamLimits

0x6a58,	// (0x0007b0ac) camera2_autofocus_pane_g4

0x6a64,	// (0x0007b0b8) camera2_autofocus_pane_g5_ParamLimits

0x6a64,	// (0x0007b0b8) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x00083d85) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x00083d85) camera2_autofocus_pane_g

0x6c51,	// (0x0007b2a5) camera2_autofocus_pane_cp_g2

0x6c59,	// (0x0007b2ad) camera2_autofocus_pane_cp_g3

0x6c61,	// (0x0007b2b5) camera2_autofocus_pane_cp_g4

0x6c69,	// (0x0007b2bd) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x00083deb) camera2_autofocus_pane_cp_g

0x72d8,	// (0x0007b92c) popup_dialer_spcha_window

0xad28,	// (0x0007f37c) bg_popup_sub_pane_cp07

0xc0ae,	// (0x00080702) list_spcha_pane

0xc0b6,	// (0x0008070a) list_single_spcha_pane_ParamLimits

0xc0b6,	// (0x0008070a) list_single_spcha_pane

0xad28,	// (0x0007f37c) list_highlight_pane_cp06

0xc0c7,	// (0x0008071b) list_single_spcha_pane_t1

0xb1ac,	// (0x0007f800) popup_call2_audio_out_window_g4_ParamLimits

0xb1ac,	// (0x0007f800) popup_call2_audio_out_window_g4

0xad28,	// (0x0007f37c) main_imed2_pane

0xb793,	// (0x0007fde7) popup_imed_adjust2_window

0x5e1b,	// (0x0007a46f) popup_imed_trans_window_ParamLimits

0x5e1b,	// (0x0007a46f) popup_imed_trans_window

0xbaaf,	// (0x00080103) popup_blid_sat_info2_window_t1

0xbabd,	// (0x00080111) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x00083d1a) popup_blid_sat_info2_window_t

0x765d,	// (0x0007bcb1) aid_size_cell_colour_35

0x767d,	// (0x0007bcd1) aid_size_cell_colour_112

0x769d,	// (0x0007bcf1) aid_size_cell_effect

0xb76b,	// (0x0007fdbf) bg_tb_trans_pane_cp02

0x38f1,	// (0x00077f45) heading_imed_pane

0x76bd,	// (0x0007bd11) listscroll_imed_pane

0xc0d5,	// (0x00080729) heading_imed_pane_g1

0xc0dd,	// (0x00080731) heading_imed_pane_t1

0xc0eb,	// (0x0008073f) grid_imed_colour_35_pane_ParamLimits

0xc0eb,	// (0x0008073f) grid_imed_colour_35_pane

0x76c9,	// (0x0007bd1d) grid_imed_effect_pane

0xc106,	// (0x0008075a) list_imed_aspect_pane

0x76de,	// (0x0007bd32) scroll_pane_cp027_ParamLimits

0x76de,	// (0x0007bd32) scroll_pane_cp027

0x76ef,	// (0x0007bd43) cell_imed_effect_pane_ParamLimits

0x76ef,	// (0x0007bd43) cell_imed_effect_pane

0xc10e,	// (0x00080762) cell_imed_colour_pane_ParamLimits

0xc10e,	// (0x00080762) cell_imed_colour_pane

0xc150,	// (0x000807a4) cell_imed_colour_pane_g1_ParamLimits

0xc150,	// (0x000807a4) cell_imed_colour_pane_g1

0xc161,	// (0x000807b5) hgihlgiht_grid_pane_cp016_ParamLimits

0xc161,	// (0x000807b5) hgihlgiht_grid_pane_cp016

0x7716,	// (0x0007bd6a) cell_imed_effect_pane_g1

0x771e,	// (0x0007bd72) grid_highlight_pane_cp017

0x1f7f,	// (0x000765d3) list_imed_single_pane_ParamLimits

0x1f7f,	// (0x000765d3) list_imed_single_pane

0xad28,	// (0x0007f37c) list_highlight_pane_cp07

0xc172,	// (0x000807c6) list_imed_aspect_pane_comp1_t1

0xb76b,	// (0x0007fdbf) bg_tb_trans_pane_cp05

0xc194,	// (0x000807e8) popup_imed_adjust2_window_g1

0xc1bb,	// (0x0008080f) popup_imed_adjust2_window_t1

0xc1d3,	// (0x00080827) slider_imed_adjust_pane

0xc1e7,	// (0x0008083b) slider_imed_adjust_pane_g1

0xc1f7,	// (0x0008084b) slider_imed_adjust_pane_g2

0xc207,	// (0x0008085b) slider_imed_adjust_pane_g3

0xc218,	// (0x0008086c) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x00083e59) slider_imed_adjust_pane_g

0x7727,	// (0x0007bd7b) aid_size_cell_clipart2

0x7733,	// (0x0007bd87) grid_imed_clipart_pane

0xc229,	// (0x0008087d) scroll_pane_cp031

0x773d,	// (0x0007bd91) cell_imed_clipart_pane_ParamLimits

0x773d,	// (0x0007bd91) cell_imed_clipart_pane

0x7764,	// (0x0007bdb8) cell_imed_clipart_pane_g1

0xad28,	// (0x0007f37c) grid_highlight_pane_cp014

0x742e,	// (0x0007ba82) main_clock2_pane_g1_ParamLimits

0x742e,	// (0x0007ba82) main_clock2_pane_g1

0x755e,	// (0x0007bbb2) aid_call2_pane_cp10

0x7570,	// (0x0007bbc4) aid_call_pane_cp10

0x3f97,	// (0x000785eb) popup_clock_analogue_window_cp10_g1

0x3f97,	// (0x000785eb) popup_clock_analogue_window_cp10_g2

0x7582,	// (0x0007bbd6) popup_clock_analogue_window_cp10_g3

0x7582,	// (0x0007bbd6) popup_clock_analogue_window_cp10_g4

0x3f97,	// (0x000785eb) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x00083e47) popup_clock_analogue_window_cp10_g

0x7594,	// (0x0007bbe8) popup_clock_analogue_window_cp10_t1

0x75c5,	// (0x0007bc19) clock_digital_number_pane_cp10_ParamLimits

0x75c5,	// (0x0007bc19) clock_digital_number_pane_cp10

0x75dd,	// (0x0007bc31) clock_digital_number_pane_cp11_ParamLimits

0x75dd,	// (0x0007bc31) clock_digital_number_pane_cp11

0x75f5,	// (0x0007bc49) clock_digital_number_pane_cp12_ParamLimits

0x75f5,	// (0x0007bc49) clock_digital_number_pane_cp12

0x760d,	// (0x0007bc61) clock_digital_number_pane_cp13_ParamLimits

0x760d,	// (0x0007bc61) clock_digital_number_pane_cp13

0x7625,	// (0x0007bc79) clock_digital_separator_pane_cp10_ParamLimits

0x7625,	// (0x0007bc79) clock_digital_separator_pane_cp10

0x763d,	// (0x0007bc91) popup_clock_digital_window_cp02_t1_ParamLimits

0x763d,	// (0x0007bc91) popup_clock_digital_window_cp02_t1

0xef80,	// (0x000835d4) clock_digital_number_pane_cp10_g1

0xef80,	// (0x000835d4) clock_digital_number_pane_cp10_g2

0x0001,

0x061e,	// (0x00074c72) clock_digital_number_pane_cp10_g

0xef80,	// (0x000835d4) clock_digital_separator_pane_cp10_g1

0xef80,	// (0x000835d4) clock_digital_separator_pane_g2_cp10

0x41b1,	// (0x00078805) navi_pane_vded_g4

0x41ba,	// (0x0007880e) navi_pane_vded_g5

0x41c3,	// (0x00078817) navi_pane_vded_t1

0xad28,	// (0x0007f37c) main_vded_pane

0x776d,	// (0x0007bdc1) main_vded_pane_g1

0x7779,	// (0x0007bdcd) main_vded_pane_g2

0x7783,	// (0x0007bdd7) main_vded_pane_g3

0x0002,

0xf80e,	// (0x00083e62) main_vded_pane_g

0x778d,	// (0x0007bde1) main_vded_pane_t1

0x779b,	// (0x0007bdef) main_vded_pane_t2

0x0001,

0xf815,	// (0x00083e69) main_vded_pane_t

0x77a9,	// (0x0007bdfd) vded_slider_pane

0x77b3,	// (0x0007be07) vded_video_pane

0xc231,	// (0x00080885) vded_video_pane_g1

0x77bd,	// (0x0007be11) vded_video_pane_g2

0xbc73,	// (0x000802c7) vded_video_pane_g3

0x0002,

0xf81a,	// (0x00083e6e) vded_video_pane_g

0xc23b,	// (0x0008088f) vded_slider_pane_g1

0xb980,	// (0x0007ffd4) vded_slider_pane_g2

0xc244,	// (0x00080898) vded_slider_pane_g3

0xc24d,	// (0x000808a1) vded_slider_pane_g4

0xc256,	// (0x000808aa) vded_slider_pane_g5

0x0004,

0xf821,	// (0x00083e75) vded_slider_pane_g

0x71c6,	// (0x0007b81a) mup3_rocker_pane_ParamLimits

0x71c6,	// (0x0007b81a) mup3_rocker_pane

0x77c6,	// (0x0007be1a) mup3_control_keys_pane_g1

0x77ce,	// (0x0007be22) mup3_control_keys_pane_g2

0x77d6,	// (0x0007be2a) mup3_control_keys_pane_g3

0x77de,	// (0x0007be32) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x00083e80) mup3_control_keys_pane_g

0x1a05,	// (0x00076059) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1a05,	// (0x00076059) popup_toolbar2_fixed_window_cp01

0x71fa,	// (0x0007b84e) popup_toolbar2_fixed_window_cp02_ParamLimits

0x71fa,	// (0x0007b84e) popup_toolbar2_fixed_window_cp02

0x53f1,	// (0x00079a45) popup_call2_audio_second_window_t4_ParamLimits

0x53f1,	// (0x00079a45) popup_call2_audio_second_window_t4

0x591f,	// (0x00079f73) popup_call2_audio_first_window_t6_ParamLimits

0x591f,	// (0x00079f73) popup_call2_audio_first_window_t6

0xb2af,	// (0x0007f903) popup_call2_audio_out_window_t6_ParamLimits

0xb2af,	// (0x0007f903) popup_call2_audio_out_window_t6

0xad28,	// (0x0007f37c) main_vitu_pane

0x77ee,	// (0x0007be42) aid_size_cell_itu_ParamLimits

0x77ee,	// (0x0007be42) aid_size_cell_itu

0xe8e5,	// (0x00082f39) bg_popup_window_pane_cp08_ParamLimits

0xe8e5,	// (0x00082f39) bg_popup_window_pane_cp08

0x7804,	// (0x0007be58) field_vitu_entry_pane_ParamLimits

0x7804,	// (0x0007be58) field_vitu_entry_pane

0x781b,	// (0x0007be6f) grid_vitu_function_pane_ParamLimits

0x781b,	// (0x0007be6f) grid_vitu_function_pane

0x7836,	// (0x0007be8a) grid_vitu_itu_pane_ParamLimits

0x7836,	// (0x0007be8a) grid_vitu_itu_pane

0x7854,	// (0x0007bea8) cell_vitu_itu_pane_ParamLimits

0x7854,	// (0x0007bea8) cell_vitu_itu_pane

0x7878,	// (0x0007becc) cell_vitu_function_pane_ParamLimits

0x7878,	// (0x0007becc) cell_vitu_function_pane

0xe8e5,	// (0x00082f39) bg_popup_sub_pane_cp08_ParamLimits

0xe8e5,	// (0x00082f39) bg_popup_sub_pane_cp08

0x7893,	// (0x0007bee7) field_vitu_entry_pane_t1_ParamLimits

0x7893,	// (0x0007bee7) field_vitu_entry_pane_t1

0xc277,	// (0x000808cb) field_vitu_entry_pane_t2_ParamLimits

0xc277,	// (0x000808cb) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x00083e8e) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x00083e8e) field_vitu_entry_pane_t

0xc294,	// (0x000808e8) bg_button_pane_cp05_ParamLimits

0xc294,	// (0x000808e8) bg_button_pane_cp05

0x78b3,	// (0x0007bf07) cell_vitu_itu_pane_g1

0x78cb,	// (0x0007bf1f) cell_vitu_itu_pane_t1_ParamLimits

0x78cb,	// (0x0007bf1f) cell_vitu_itu_pane_t1

0x78dd,	// (0x0007bf31) cell_vitu_itu_pane_t2_ParamLimits

0x78dd,	// (0x0007bf31) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x00083e93) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x00083e93) cell_vitu_itu_pane_t

0xc2a2,	// (0x000808f6) bg_button_pane_cp07

0x7912,	// (0x0007bf66) cell_vitu_function_pane_g1

0xad82,	// (0x0007f3d6) main_calc_pane_g1

0x1845,	// (0x00075e99) aid_visual_content_pane

0xad28,	// (0x0007f37c) main_vradio_pane

0x791b,	// (0x0007bf6f) main_vradio_pane_g1_ParamLimits

0x791b,	// (0x0007bf6f) main_vradio_pane_g1

0xc2ac,	// (0x00080900) main_vradio_pane_g2_ParamLimits

0xc2ac,	// (0x00080900) main_vradio_pane_g2

0x0001,

0xf846,	// (0x00083e9a) main_vradio_pane_g_ParamLimits

0xf846,	// (0x00083e9a) main_vradio_pane_g

0x7934,	// (0x0007bf88) main_vradio_pane_t1_ParamLimits

0x7934,	// (0x0007bf88) main_vradio_pane_t1

0x7949,	// (0x0007bf9d) main_vradio_pane_t2_ParamLimits

0x7949,	// (0x0007bf9d) main_vradio_pane_t2

0xc2b9,	// (0x0008090d) main_vradio_pane_t3_ParamLimits

0xc2b9,	// (0x0008090d) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x00083e9f) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x00083e9f) main_vradio_pane_t

0x795e,	// (0x0007bfb2) vradio_rocker_control_pane_ParamLimits

0x795e,	// (0x0007bfb2) vradio_rocker_control_pane

0x7970,	// (0x0007bfc4) vradio_station_info_pane_ParamLimits

0x7970,	// (0x0007bfc4) vradio_station_info_pane

0xc2cd,	// (0x00080921) vradio_frequency_info_pane_ParamLimits

0xc2cd,	// (0x00080921) vradio_frequency_info_pane

0xbc73,	// (0x000802c7) vradio_station_info_pane_g1

0xc2dc,	// (0x00080930) vradio_station_info_pane_t1_ParamLimits

0xc2dc,	// (0x00080930) vradio_station_info_pane_t1

0xc2fe,	// (0x00080952) vradio_station_info_pane_t2_ParamLimits

0xc2fe,	// (0x00080952) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x00083ea6) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x00083ea6) vradio_station_info_pane_t

0xc310,	// (0x00080964) vradio_tuning_pane

0xc318,	// (0x0008096c) vradio_rocker_control_pane_g1

0xc320,	// (0x00080974) vradio_rocker_control_pane_g2

0xc328,	// (0x0008097c) vradio_rocker_control_pane_g3

0xc330,	// (0x00080984) vradio_rocker_control_pane_g4

0xc338,	// (0x0008098c) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x00083eab) vradio_rocker_control_pane_g

0x7982,	// (0x0007bfd6) vradio_frequency_info_pane_g1

0xc340,	// (0x00080994) vradio_frequency_info_pane_t1_ParamLimits

0xc340,	// (0x00080994) vradio_frequency_info_pane_t1

0x798c,	// (0x0007bfe0) vradio_tuning_pane_g1

0x7997,	// (0x0007bfeb) vradio_tuning_pane_t1

0xad5e,	// (0x0007f3b2) area_side_right_pane_ParamLimits

0xad5e,	// (0x0007f3b2) area_side_right_pane

0xb732,	// (0x0007fd86) status_small_pane_g1

0xb73a,	// (0x0007fd8e) status_small_pane_g2

0xb743,	// (0x0007fd97) status_small_pane_g3

0xb74c,	// (0x0007fda0) status_small_pane_g4

0x0003,

0xf61c,	// (0x00083c70) status_small_pane_g

0xb755,	// (0x0007fda9) status_small_pane_t1

0xad28,	// (0x0007f37c) main_video3_pane

0xc354,	// (0x000809a8) cams_zoom_vslider_pane

0xc35c,	// (0x000809b0) image3_wide_pane_ParamLimits

0xc35c,	// (0x000809b0) image3_wide_pane

0xc376,	// (0x000809ca) image3_wide_small_pane

0xc382,	// (0x000809d6) main_video3_pane_g1_ParamLimits

0xc382,	// (0x000809d6) main_video3_pane_g1

0xc39e,	// (0x000809f2) main_video3_pane_g2_ParamLimits

0xc39e,	// (0x000809f2) main_video3_pane_g2

0x0001,

0xf862,	// (0x00083eb6) main_video3_pane_g_ParamLimits

0xf862,	// (0x00083eb6) main_video3_pane_g

0xc3ba,	// (0x00080a0e) main_video3_pane_t1_ParamLimits

0xc3ba,	// (0x00080a0e) main_video3_pane_t1

0xc3e5,	// (0x00080a39) main_video3_pane_t2_ParamLimits

0xc3e5,	// (0x00080a39) main_video3_pane_t2

0xc410,	// (0x00080a64) main_video3_pane_t3_ParamLimits

0xc410,	// (0x00080a64) main_video3_pane_t3

0x0002,

0xf867,	// (0x00083ebb) main_video3_pane_t_ParamLimits

0xf867,	// (0x00083ebb) main_video3_pane_t

0xc43d,	// (0x00080a91) cams_zoom_vslider_pane_g1

0xc446,	// (0x00080a9a) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x00083ec2) cams_zoom_vslider_pane_g

0xc44e,	// (0x00080aa2) small_slider_vertical_pane

0xbc73,	// (0x000802c7) small_slider_vertical_pane_g1

0xbc73,	// (0x000802c7) small_slider_vertical_pane_g2

0xc456,	// (0x00080aaa) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x00083ec7) small_slider_vertical_pane_g

0xad28,	// (0x0007f37c) main_hwr_training_pane

0xc45f,	// (0x00080ab3) hwr_training_instruct_pane_ParamLimits

0xc45f,	// (0x00080ab3) hwr_training_instruct_pane

0x79a6,	// (0x0007bffa) hwr_training_navi_pane_ParamLimits

0x79a6,	// (0x0007bffa) hwr_training_navi_pane

0x79c5,	// (0x0007c019) hwr_training_write_pane_ParamLimits

0x79c5,	// (0x0007c019) hwr_training_write_pane

0xad28,	// (0x0007f37c) bg_frame_shadow_pane

0xc496,	// (0x00080aea) hwr_training_write_pane_g1

0xc49e,	// (0x00080af2) hwr_training_write_pane_g2

0xc4a6,	// (0x00080afa) hwr_training_write_pane_g3

0xc4ae,	// (0x00080b02) hwr_training_write_pane_g4

0xc4b6,	// (0x00080b0a) hwr_training_write_pane_g5

0xc4be,	// (0x00080b12) hwr_training_write_pane_g6

0xc4c6,	// (0x00080b1a) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x00083ece) hwr_training_write_pane_g

0xe4b5,	// (0x00082b09) hwr_training_navi_pane_g1_ParamLimits

0xe4b5,	// (0x00082b09) hwr_training_navi_pane_g1

0xe4c7,	// (0x00082b1b) hwr_training_navi_pane_g2_ParamLimits

0xe4c7,	// (0x00082b1b) hwr_training_navi_pane_g2

0xe4d9,	// (0x00082b2d) hwr_training_navi_pane_g3_ParamLimits

0xe4d9,	// (0x00082b2d) hwr_training_navi_pane_g3

0xe4e9,	// (0x00082b3d) hwr_training_navi_pane_g4_ParamLimits

0xe4e9,	// (0x00082b3d) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x00083edd) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x00083edd) hwr_training_navi_pane_g

0xe4f6,	// (0x00082b4a) hwr_training_navi_pane_t1

0x7a0f,	// (0x0007c063) list_single_hwr_training_instruct_pane_ParamLimits

0x7a0f,	// (0x0007c063) list_single_hwr_training_instruct_pane

0xc4ce,	// (0x00080b22) list_single_hwr_training_instruct_pane_t1

0xbbb3,	// (0x00080207) bg_frame_shadow_pane_g1

0xc4dd,	// (0x00080b31) bg_frame_shadow_pane_g2

0xc4e5,	// (0x00080b39) bg_frame_shadow_pane_g3

0xc4ed,	// (0x00080b41) bg_frame_shadow_pane_g4

0xc4f5,	// (0x00080b49) bg_frame_shadow_pane_g5

0xc4fd,	// (0x00080b51) bg_frame_shadow_pane_g6

0xc505,	// (0x00080b59) bg_frame_shadow_pane_g7

0x1f1d,	// (0x00076571) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x00083ee8) bg_frame_shadow_pane_g

0xad28,	// (0x0007f37c) main_video_tele_dialer_pane

0x7a2c,	// (0x0007c080) aid_size_cell_video_keypad_ParamLimits

0x7a2c,	// (0x0007c080) aid_size_cell_video_keypad

0x7a46,	// (0x0007c09a) grid_video_dialer_keypad_pane_ParamLimits

0x7a46,	// (0x0007c09a) grid_video_dialer_keypad_pane

0x7a92,	// (0x0007c0e6) video_down_pane_cp_ParamLimits

0x7a92,	// (0x0007c0e6) video_down_pane_cp

0x7ac2,	// (0x0007c116) cell_video_dialer_keypad_pane_ParamLimits

0x7ac2,	// (0x0007c116) cell_video_dialer_keypad_pane

0xc50d,	// (0x00080b61) bg_button_pane_cp08_ParamLimits

0xc50d,	// (0x00080b61) bg_button_pane_cp08

0x7ae4,	// (0x0007c138) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7ae4,	// (0x0007c138) cell_video_dialer_keypad_pane_g1

0x71b0,	// (0x0007b804) mup3_rocker2_pane_ParamLimits

0x71b0,	// (0x0007b804) mup3_rocker2_pane

0xbc73,	// (0x000802c7) mup3_rocker2_pane_g1

0x5d04,	// (0x0007a358) main_dialer2_pane

0xad28,	// (0x0007f37c) main_mp4_pane

0xe50c,	// (0x00082b60) main_mp4_pane_g1_ParamLimits

0xe50c,	// (0x00082b60) main_mp4_pane_g1

0xe50c,	// (0x00082b60) main_mp4_pane_g2_ParamLimits

0xe50c,	// (0x00082b60) main_mp4_pane_g2

0x7b1f,	// (0x0007c173) main_mp4_pane_g3_ParamLimits

0x7b1f,	// (0x0007c173) main_mp4_pane_g3

0xe51a,	// (0x00082b6e) main_mp4_pane_g4_ParamLimits

0xe51a,	// (0x00082b6e) main_mp4_pane_g4

0xe542,	// (0x00082b96) main_mp4_pane_g5_ParamLimits

0xe542,	// (0x00082b96) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x00083f08) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x00083f08) main_mp4_pane_g

0xe592,	// (0x00082be6) main_mp4_pane_t1_ParamLimits

0xe592,	// (0x00082be6) main_mp4_pane_t1

0xe5ee,	// (0x00082c42) main_mp4_pane_t2_ParamLimits

0xe5ee,	// (0x00082c42) main_mp4_pane_t2

0xc519,	// (0x00080b6d) main_mp4_pane_t3_ParamLimits

0xc519,	// (0x00080b6d) main_mp4_pane_t3

0xe640,	// (0x00082c94) main_mp4_pane_t4_ParamLimits

0xe640,	// (0x00082c94) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x00083f15) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x00083f15) main_mp4_pane_t

0xe684,	// (0x00082cd8) mp4_progress_pane_ParamLimits

0xe684,	// (0x00082cd8) mp4_progress_pane

0xe6ce,	// (0x00082d22) mp4_rocker_pane_ParamLimits

0xe6ce,	// (0x00082d22) mp4_rocker_pane

0xc541,	// (0x00080b95) mp4_progress_pane_t1

0xc55a,	// (0x00080bae) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x00083f1e) mp4_progress_pane_t

0xc573,	// (0x00080bc7) mup_progress_pane_cp04

0xbc73,	// (0x000802c7) mp4_rocker_pane_g1

0x7b5b,	// (0x0007c1af) aid_cell_size_keypad2_ParamLimits

0x7b5b,	// (0x0007c1af) aid_cell_size_keypad2

0x7b71,	// (0x0007c1c5) dialer2_ne_pane_ParamLimits

0x7b71,	// (0x0007c1c5) dialer2_ne_pane

0x7b8b,	// (0x0007c1df) grid_dialer2_keypad_pane_ParamLimits

0x7b8b,	// (0x0007c1df) grid_dialer2_keypad_pane

0xba56,	// (0x000800aa) bg_popup_call_pane_cp07_ParamLimits

0xba56,	// (0x000800aa) bg_popup_call_pane_cp07

0x7ba9,	// (0x0007c1fd) dialer2_ne_pane_t1_ParamLimits

0x7ba9,	// (0x0007c1fd) dialer2_ne_pane_t1

0x7be8,	// (0x0007c23c) cell_dialer2_keypad_pane_ParamLimits

0x7be8,	// (0x0007c23c) cell_dialer2_keypad_pane

0xc591,	// (0x00080be5) bg_button_pane_pane_cp04_ParamLimits

0xc591,	// (0x00080be5) bg_button_pane_pane_cp04

0x7c0c,	// (0x0007c260) cell_dialer2_keypad_pane_g1_ParamLimits

0x7c0c,	// (0x0007c260) cell_dialer2_keypad_pane_g1

0x279c,	// (0x00076df0) aid_placing_vt_set_content_ParamLimits

0x279c,	// (0x00076df0) aid_placing_vt_set_content

0x27c4,	// (0x00076e18) aid_placing_vt_set_title_ParamLimits

0x27c4,	// (0x00076e18) aid_placing_vt_set_title

0xad28,	// (0x0007f37c) main_image3_pane

0x7cd2,	// (0x0007c326) area_side_right_pane_cp01_ParamLimits

0x7cd2,	// (0x0007c326) area_side_right_pane_cp01

0xe50c,	// (0x00082b60) main_image3_pane_g1_ParamLimits

0xe50c,	// (0x00082b60) main_image3_pane_g1

0x7ce9,	// (0x0007c33d) main_image3_pane_g2_ParamLimits

0x7ce9,	// (0x0007c33d) main_image3_pane_g2

0x7d11,	// (0x0007c365) main_image3_pane_g3_ParamLimits

0x7d11,	// (0x0007c365) main_image3_pane_g3

0x7d3b,	// (0x0007c38f) main_image3_pane_g4_ParamLimits

0x7d3b,	// (0x0007c38f) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x00083f2d) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x00083f2d) main_image3_pane_g

0x7d65,	// (0x0007c3b9) main_image3_pane_t1_ParamLimits

0x7d65,	// (0x0007c3b9) main_image3_pane_t1

0x7dbd,	// (0x0007c411) main_image3_pane_t2_ParamLimits

0x7dbd,	// (0x0007c411) main_image3_pane_t2

0x7e0f,	// (0x0007c463) main_image3_pane_t3_ParamLimits

0x7e0f,	// (0x0007c463) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x00083f36) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x00083f36) main_image3_pane_t

0xe8e5,	// (0x00082f39) grid_sctrl_middle_pane_cp01_ParamLimits

0xe8e5,	// (0x00082f39) grid_sctrl_middle_pane_cp01

0x7e97,	// (0x0007c4eb) cell_sctrl_middle_pane_cp01_ParamLimits

0x7e97,	// (0x0007c4eb) cell_sctrl_middle_pane_cp01

0x7eb4,	// (0x0007c508) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7eb4,	// (0x0007c508) cell_sctrl_middle_pane_cp01_g1

0xad28,	// (0x0007f37c) main_call4_pane

0x7eca,	// (0x0007c51e) aid_size_button_call4_ParamLimits

0x7eca,	// (0x0007c51e) aid_size_button_call4

0x7efb,	// (0x0007c54f) call4_windows_pane_ParamLimits

0x7efb,	// (0x0007c54f) call4_windows_pane

0x7f1b,	// (0x0007c56f) grid_call4_button_pane_ParamLimits

0x7f1b,	// (0x0007c56f) grid_call4_button_pane

0xc59d,	// (0x00080bf1) call4_windows_conf_pane

0xc5b2,	// (0x00080c06) popup_call4_audio_first_window_ParamLimits

0xc5b2,	// (0x00080c06) popup_call4_audio_first_window

0xc5fe,	// (0x00080c52) popup_call4_audio_second_window_ParamLimits

0xc5fe,	// (0x00080c52) popup_call4_audio_second_window

0xc612,	// (0x00080c66) popup_call4_audio_wait_window_ParamLimits

0xc612,	// (0x00080c66) popup_call4_audio_wait_window

0x7f48,	// (0x0007c59c) cell_call4_button_pane_ParamLimits

0x7f48,	// (0x0007c59c) cell_call4_button_pane

0x7f71,	// (0x0007c5c5) bg_button_pane_cp09_ParamLimits

0x7f71,	// (0x0007c5c5) bg_button_pane_cp09

0x7f7d,	// (0x0007c5d1) cell_call4_button_pane_g1_ParamLimits

0x7f7d,	// (0x0007c5d1) cell_call4_button_pane_g1

0x7fa3,	// (0x0007c5f7) cell_call4_button_pane_t1_ParamLimits

0x7fa3,	// (0x0007c5f7) cell_call4_button_pane_t1

0xc65a,	// (0x00080cae) popup_call4_audio_conf_window_ParamLimits

0xc65a,	// (0x00080cae) popup_call4_audio_conf_window

0x7210,	// (0x0007b864) mup3_progress_pane_t1_ParamLimits

0x7227,	// (0x0007b87b) mup3_progress_pane_t2_ParamLimits

0xbf8d,	// (0x000805e1) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x00083e14) mup3_progress_pane_t_ParamLimits

0xbfa4,	// (0x000805f8) mup_progress_pane_cp03_ParamLimits

0x77e6,	// (0x0007be3a) mup3_control_keys_pane_g4_copy1

0xe6b2,	// (0x00082d06) mp4_rocker2_pane_ParamLimits

0xe6b2,	// (0x00082d06) mp4_rocker2_pane

0xc66e,	// (0x00080cc2) mp4_rocker2_pane_g1

0xc676,	// (0x00080cca) mp4_rocker2_pane_g2

0xe720,	// (0x00082d74) mp4_rocker2_pane_g3

0xe728,	// (0x00082d7c) mp4_rocker2_pane_g4

0xe730,	// (0x00082d84) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x00083f3f) mp4_rocker2_pane_g

0xad28,	// (0x0007f37c) main_camera4_pane

0xad28,	// (0x0007f37c) main_video4_pane

0x7a60,	// (0x0007c0b4) main_video_tele_dialer_pane_t1_ParamLimits

0x7a60,	// (0x0007c0b4) main_video_tele_dialer_pane_t1

0x7a79,	// (0x0007c0cd) main_video_tele_dialer_pane_t2_ParamLimits

0x7a79,	// (0x0007c0cd) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x00083ef9) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x00083ef9) main_video_tele_dialer_pane_t

0x7fe5,	// (0x0007c639) cam4_autofocus_pane_ParamLimits

0x7fe5,	// (0x0007c639) cam4_autofocus_pane

0x7ffb,	// (0x0007c64f) cam4_image_uncrop_pane_ParamLimits

0x7ffb,	// (0x0007c64f) cam4_image_uncrop_pane

0x8015,	// (0x0007c669) cam4_indicators_pane_ParamLimits

0x8015,	// (0x0007c669) cam4_indicators_pane

0x8040,	// (0x0007c694) main_camera4_pane_g1_ParamLimits

0x8040,	// (0x0007c694) main_camera4_pane_g1

0x8053,	// (0x0007c6a7) main_camera4_pane_g2_ParamLimits

0x8053,	// (0x0007c6a7) main_camera4_pane_g2

0x8066,	// (0x0007c6ba) main_camera4_pane_g3_ParamLimits

0x8066,	// (0x0007c6ba) main_camera4_pane_g3

0x8079,	// (0x0007c6cd) main_camera4_pane_g4_ParamLimits

0x8079,	// (0x0007c6cd) main_camera4_pane_g4

0x808c,	// (0x0007c6e0) main_camera4_pane_g5_ParamLimits

0x808c,	// (0x0007c6e0) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x00083f4a) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x00083f4a) main_camera4_pane_g

0x80b0,	// (0x0007c704) main_camera4_pane_t1_ParamLimits

0x80b0,	// (0x0007c704) main_camera4_pane_t1

0xbeda,	// (0x0008052e) bg_tb_trans_pane_cp06

0xe75c,	// (0x00082db0) cam4_indicators_pane_g1

0xe76d,	// (0x00082dc1) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x00083f65) cam4_indicators_pane_g

0xe78b,	// (0x00082ddf) cam4_indicators_pane_t1

0x8114,	// (0x0007c768) main_video4_pane_g1_ParamLimits

0x8114,	// (0x0007c768) main_video4_pane_g1

0x8127,	// (0x0007c77b) main_video4_pane_g2_ParamLimits

0x8127,	// (0x0007c77b) main_video4_pane_g2

0x813b,	// (0x0007c78f) main_video4_pane_g3_ParamLimits

0x813b,	// (0x0007c78f) main_video4_pane_g3

0x814f,	// (0x0007c7a3) main_video4_pane_g4_ParamLimits

0x814f,	// (0x0007c7a3) main_video4_pane_g4

0x0004,

0xf918,	// (0x00083f6c) main_video4_pane_g_ParamLimits

0xf918,	// (0x00083f6c) main_video4_pane_g

0x8177,	// (0x0007c7cb) vid4_indicators_pane_ParamLimits

0x8177,	// (0x0007c7cb) vid4_indicators_pane

0x81a9,	// (0x0007c7fd) video4_image_uncrop_cif_pane_ParamLimits

0x81a9,	// (0x0007c7fd) video4_image_uncrop_cif_pane

0x81c3,	// (0x0007c817) video4_image_uncrop_nhd_pane_ParamLimits

0x81c3,	// (0x0007c817) video4_image_uncrop_nhd_pane

0x7ffb,	// (0x0007c64f) video4_image_uncrop_vga_pane_ParamLimits

0x7ffb,	// (0x0007c64f) video4_image_uncrop_vga_pane

0xc690,	// (0x00080ce4) bg_tb_trans_pane_cp07

0x81d7,	// (0x0007c82b) vid4_indicators_pane_g1

0x81e4,	// (0x0007c838) vid4_indicators_pane_g2

0x81f1,	// (0x0007c845) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x00083f77) vid4_indicators_pane_g

0x8216,	// (0x0007c86a) vid4_indicators_pane_t1

0x8228,	// (0x0007c87c) cam4_autofocus_pane_g1

0x8230,	// (0x0007c884) cam4_autofocus_pane_g2

0x8238,	// (0x0007c88c) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x00083f82) cam4_autofocus_pane_g

0x8240,	// (0x0007c894) cam4_autofocus_pane_g3_copy1

0x7aa6,	// (0x0007c0fa) video_down_pane_cp_t1

0x7ab4,	// (0x0007c108) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x00083efe) video_down_pane_cp_t

0xe8e5,	// (0x00082f39) popup_vitu2_window_ParamLimits

0xe8e5,	// (0x00082f39) popup_vitu2_window

0x8248,	// (0x0007c89c) aid_size_cell2_itu2_ParamLimits

0x8248,	// (0x0007c89c) aid_size_cell2_itu2

0x826e,	// (0x0007c8c2) aid_size_cell_itu2_ParamLimits

0x826e,	// (0x0007c8c2) aid_size_cell_itu2

0x82ca,	// (0x0007c91e) bg_popup_window_pane_cp09_ParamLimits

0x82ca,	// (0x0007c91e) bg_popup_window_pane_cp09

0x82d8,	// (0x0007c92c) field_vitu2_entry_pane_ParamLimits

0x82d8,	// (0x0007c92c) field_vitu2_entry_pane

0x82fe,	// (0x0007c952) grid_vitu2_function_pane_ParamLimits

0x82fe,	// (0x0007c952) grid_vitu2_function_pane

0x834f,	// (0x0007c9a3) grid_vitu2_itu_pane_ParamLimits

0x834f,	// (0x0007c9a3) grid_vitu2_itu_pane

0x83e0,	// (0x0007ca34) cell_vitu2_itu_pane_ParamLimits

0x83e0,	// (0x0007ca34) cell_vitu2_itu_pane

0x8404,	// (0x0007ca58) cell_vitu2_function_pane_ParamLimits

0x8404,	// (0x0007ca58) cell_vitu2_function_pane

0xc69e,	// (0x00080cf2) bg_popup_call_pane_cp08_ParamLimits

0xc69e,	// (0x00080cf2) bg_popup_call_pane_cp08

0xc6b7,	// (0x00080d0b) field_vitu2_entry_pane_g1

0xc6c3,	// (0x00080d17) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x00083f89) field_vitu2_entry_pane_g

0x0f00,	// (0x00075554) field_vitu2_entry_pane_t1_ParamLimits

0x0f00,	// (0x00075554) field_vitu2_entry_pane_t1

0xc6dd,	// (0x00080d31) field_vitu2_entry_pane_t2_ParamLimits

0xc6dd,	// (0x00080d31) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x00083f90) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x00083f90) field_vitu2_entry_pane_t

0x8443,	// (0x0007ca97) bg_button_pane_cp010_ParamLimits

0x8443,	// (0x0007ca97) bg_button_pane_cp010

0x8451,	// (0x0007caa5) cell_vitu2_itu_pane_g1

0x846f,	// (0x0007cac3) cell_vitu2_itu_pane_t1_ParamLimits

0x846f,	// (0x0007cac3) cell_vitu2_itu_pane_t1

0x0f31,	// (0x00075585) cell_vitu2_itu_pane_t2_ParamLimits

0x0f31,	// (0x00075585) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x00083f9a) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x00083f9a) cell_vitu2_itu_pane_t

0xe8e5,	// (0x00082f39) bg_button_pane_cp011

0x84d5,	// (0x0007cb29) cell_vitu2_function_pane_g1

0xad28,	// (0x0007f37c) main_myfav_hc_pane

0x7e5f,	// (0x0007c4b3) popup_image3_note_pane_ParamLimits

0x7e5f,	// (0x0007c4b3) popup_image3_note_pane

0x7e7b,	// (0x0007c4cf) popup_image3_tool_bar_pane_ParamLimits

0x7e7b,	// (0x0007c4cf) popup_image3_tool_bar_pane

0x0fb5,	// (0x00075609) cell_vitu2_itu_pane_t3_ParamLimits

0x0fb5,	// (0x00075609) cell_vitu2_itu_pane_t3

0xad28,	// (0x0007f37c) bg_popup_trans_pane

0xc702,	// (0x00080d56) grid_image3_tool_bar_pane

0xc70c,	// (0x00080d60) bg_popup_trans_pane_g1

0x2d92,	// (0x000773e6) bg_popup_trans_pane_g2

0xc714,	// (0x00080d68) bg_popup_trans_pane_g3

0xc71c,	// (0x00080d70) bg_popup_trans_pane_g4

0xc724,	// (0x00080d78) bg_popup_trans_pane_g5

0xc72c,	// (0x00080d80) bg_popup_trans_pane_g6

0xc734,	// (0x00080d88) bg_popup_trans_pane_g7

0xc73c,	// (0x00080d90) bg_popup_trans_pane_g8

0x2d72,	// (0x000773c6) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x00083fa1) bg_popup_trans_pane_g

0xc744,	// (0x00080d98) cell_image3_tool_bar_pane_ParamLimits

0xc744,	// (0x00080d98) cell_image3_tool_bar_pane

0xbc73,	// (0x000802c7) cell_image3_tool_bar_pane_g1

0xad28,	// (0x0007f37c) bg_popup_trans_pane_cp1

0xc758,	// (0x00080dac) popup_image3_note_pane_t1

0xc766,	// (0x00080dba) popup_image3_note_pane_t2

0xc774,	// (0x00080dc8) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x00083fb4) popup_image3_note_pane_t

0xc782,	// (0x00080dd6) popup_image3_note_pane_t3_copy1

0x84e9,	// (0x0007cb3d) bg_myfav_hc_instruction_pane_ParamLimits

0x84e9,	// (0x0007cb3d) bg_myfav_hc_instruction_pane

0x84ff,	// (0x0007cb53) cell_myfav_contact_pane_ParamLimits

0x84ff,	// (0x0007cb53) cell_myfav_contact_pane

0x851b,	// (0x0007cb6f) cell_myfav_contact_pane_cp1_ParamLimits

0x851b,	// (0x0007cb6f) cell_myfav_contact_pane_cp1

0x8533,	// (0x0007cb87) cell_myfav_contact_pane_cp2_ParamLimits

0x8533,	// (0x0007cb87) cell_myfav_contact_pane_cp2

0x854b,	// (0x0007cb9f) cell_myfav_contact_pane_cp3_ParamLimits

0x854b,	// (0x0007cb9f) cell_myfav_contact_pane_cp3

0x8562,	// (0x0007cbb6) cell_myfav_contact_pane_cp4_ParamLimits

0x8562,	// (0x0007cbb6) cell_myfav_contact_pane_cp4

0x857a,	// (0x0007cbce) cell_myfav_contact_pane_cp5_ParamLimits

0x857a,	// (0x0007cbce) cell_myfav_contact_pane_cp5

0x858e,	// (0x0007cbe2) cell_myfav_contact_pane_cp6_ParamLimits

0x858e,	// (0x0007cbe2) cell_myfav_contact_pane_cp6

0x85a4,	// (0x0007cbf8) cell_myfav_contact_pane_cp7_ParamLimits

0x85a4,	// (0x0007cbf8) cell_myfav_contact_pane_cp7

0xc790,	// (0x00080de4) listscroll_gen_pane_cp05

0x85be,	// (0x0007cc12) main_myfav_hc_pane_g1_ParamLimits

0x85be,	// (0x0007cc12) main_myfav_hc_pane_g1

0x85d8,	// (0x0007cc2c) main_myfav_hc_pane_g2_ParamLimits

0x85d8,	// (0x0007cc2c) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x00083fbb) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x00083fbb) main_myfav_hc_pane_g

0x860a,	// (0x0007cc5e) main_myfav_hc_pane_t1_ParamLimits

0x860a,	// (0x0007cc5e) main_myfav_hc_pane_t1

0xc799,	// (0x00080ded) main_myfav_hc_pane_t2_ParamLimits

0xc799,	// (0x00080ded) main_myfav_hc_pane_t2

0xc7ab,	// (0x00080dff) main_myfav_hc_pane_t3_ParamLimits

0xc7ab,	// (0x00080dff) main_myfav_hc_pane_t3

0x8621,	// (0x0007cc75) main_myfav_hc_pane_t4_ParamLimits

0x8621,	// (0x0007cc75) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x00083fc2) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x00083fc2) main_myfav_hc_pane_t

0xbc73,	// (0x000802c7) bg_myfav_hc_instruction_pane_g1

0xc7bd,	// (0x00080e11) cell_myfav_contact_pane_g1_ParamLimits

0xc7bd,	// (0x00080e11) cell_myfav_contact_pane_g1

0xc7bd,	// (0x00080e11) cell_myfav_contact_pane_g2_ParamLimits

0xc7bd,	// (0x00080e11) cell_myfav_contact_pane_g2

0xc7c9,	// (0x00080e1d) cell_myfav_contact_pane_g3_ParamLimits

0xc7c9,	// (0x00080e1d) cell_myfav_contact_pane_g3

0xbf77,	// (0x000805cb) cell_myfav_contact_pane_g4_ParamLimits

0xbf77,	// (0x000805cb) cell_myfav_contact_pane_g4

0xc7d6,	// (0x00080e2a) cell_myfav_contact_pane_g5_ParamLimits

0xc7d6,	// (0x00080e2a) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x00083fcd) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x00083fcd) cell_myfav_contact_pane_g

0x85f2,	// (0x0007cc46) main_myfav_hc_pane_g3_ParamLimits

0x85f2,	// (0x0007cc46) main_myfav_hc_pane_g3

0x1967,	// (0x00075fbb) popup_adpt_find_window

0x8649,	// (0x0007cc9d) afind_page_pane_ParamLimits

0x8649,	// (0x0007cc9d) afind_page_pane

0x865e,	// (0x0007ccb2) aid_size_cell_afind_ParamLimits

0x865e,	// (0x0007ccb2) aid_size_cell_afind

0x867c,	// (0x0007ccd0) bg_popup_sub_pane_cp09_ParamLimits

0x867c,	// (0x0007ccd0) bg_popup_sub_pane_cp09

0x8689,	// (0x0007ccdd) find_pane_cp01_ParamLimits

0x8689,	// (0x0007ccdd) find_pane_cp01

0xc7e2,	// (0x00080e36) grid_afind_control_pane_ParamLimits

0xc7e2,	// (0x00080e36) grid_afind_control_pane

0x8696,	// (0x0007ccea) grid_afind_pane_ParamLimits

0x8696,	// (0x0007ccea) grid_afind_pane

0x86b8,	// (0x0007cd0c) cell_afind_pane_ParamLimits

0x86b8,	// (0x0007cd0c) cell_afind_pane

0xbc73,	// (0x000802c7) afind_page_pane_g1

0x8719,	// (0x0007cd6d) afind_page_pane_g2

0x8722,	// (0x0007cd76) afind_page_pane_g3

0x0002,

0xf984,	// (0x00083fd8) afind_page_pane_g

0x872b,	// (0x0007cd7f) afind_page_pane_t1

0xc7f6,	// (0x00080e4a) cell_afind_grid_control_pane_ParamLimits

0xc7f6,	// (0x00080e4a) cell_afind_grid_control_pane

0xc591,	// (0x00080be5) bg_button_pane_cp69_ParamLimits

0xc591,	// (0x00080be5) bg_button_pane_cp69

0x874b,	// (0x0007cd9f) cell_afind_pane_g1_ParamLimits

0x874b,	// (0x0007cd9f) cell_afind_pane_g1

0x8758,	// (0x0007cdac) cell_afind_pane_t1_ParamLimits

0x8758,	// (0x0007cdac) cell_afind_pane_t1

0x272f,	// (0x00076d83) bg_button_pane_cp72

0xc805,	// (0x00080e59) cell_afind_grid_control_pane_g1

0x4e9d,	// (0x000794f1) aid_image_placing_area_ParamLimits

0x4e9d,	// (0x000794f1) aid_image_placing_area

0xc25f,	// (0x000808b3) field_vitu_entry_pane_g1_ParamLimits

0xc25f,	// (0x000808b3) field_vitu_entry_pane_g1

0xc26b,	// (0x000808bf) field_vitu_entry_pane_g2_ParamLimits

0xc26b,	// (0x000808bf) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x00083e89) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x00083e89) field_vitu_entry_pane_g

0x78b3,	// (0x0007bf07) cell_vitu_itu_pane_g1_ParamLimits

0x78f5,	// (0x0007bf49) cell_vitu_itu_pane_t3_ParamLimits

0x78f5,	// (0x0007bf49) cell_vitu_itu_pane_t3

0xc541,	// (0x00080b95) mp4_progress_pane_t1_ParamLimits

0xc55a,	// (0x00080bae) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x00083f1e) mp4_progress_pane_t_ParamLimits

0xc573,	// (0x00080bc7) mup_progress_pane_cp04_ParamLimits

0x8635,	// (0x0007cc89) main_myfav_hc_pane_t5_ParamLimits

0x8635,	// (0x0007cc89) main_myfav_hc_pane_t5

0xad4e,	// (0x0007f3a2) aid_zoom_text_primary

0x1967,	// (0x00075fbb) popup_adpt_find_window_ParamLimits

0xe8e5,	// (0x00082f39) main_cam_set_pane

0x802c,	// (0x0007c680) cam4_zoom_pane_ParamLimits

0x802c,	// (0x0007c680) cam4_zoom_pane

0x876a,	// (0x0007cdbe) main_cam_set_pane_g1_ParamLimits

0x876a,	// (0x0007cdbe) main_cam_set_pane_g1

0x8778,	// (0x0007cdcc) main_cam_set_pane_g2_ParamLimits

0x8778,	// (0x0007cdcc) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x00083fdf) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x00083fdf) main_cam_set_pane_g

0x8799,	// (0x0007cded) main_cam_set_pane_t1_ParamLimits

0x8799,	// (0x0007cded) main_cam_set_pane_t1

0x87b4,	// (0x0007ce08) main_cset_listscroll_pane_ParamLimits

0x87b4,	// (0x0007ce08) main_cset_listscroll_pane

0x87d4,	// (0x0007ce28) main_cset_slider_pane_ParamLimits

0x87d4,	// (0x0007ce28) main_cset_slider_pane

0xc816,	// (0x00080e6a) main_cset_list_pane_ParamLimits

0xc816,	// (0x00080e6a) main_cset_list_pane

0xc826,	// (0x00080e7a) scroll_pane_cp028

0x87fa,	// (0x0007ce4e) aid_area_touch_slider

0x8816,	// (0x0007ce6a) cset_slider_pane

0x8840,	// (0x0007ce94) main_cset_slider_pane_g1

0x8855,	// (0x0007cea9) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x00083fe4) main_cset_slider_pane_g

0xc85f,	// (0x00080eb3) main_cset_slider_pane_t1

0x8911,	// (0x0007cf65) main_cset_slider_pane_t2

0x892b,	// (0x0007cf7f) main_cset_slider_pane_t3

0x8945,	// (0x0007cf99) main_cset_slider_pane_t4

0x895f,	// (0x0007cfb3) main_cset_slider_pane_t5

0x897b,	// (0x0007cfcf) main_cset_slider_pane_t6

0x8990,	// (0x0007cfe4) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x00084009) main_cset_slider_pane_t

0x8a94,	// (0x0007d0e8) cset_list_set_pane_ParamLimits

0x8a94,	// (0x0007d0e8) cset_list_set_pane

0x8aa8,	// (0x0007d0fc) aid_position_infowindow_above

0x8ab0,	// (0x0007d104) aid_position_infowindow_below

0x8ab8,	// (0x0007d10c) cset_list_set_pane_g1_ParamLimits

0x8ab8,	// (0x0007d10c) cset_list_set_pane_g1

0x100d,	// (0x00075661) cset_list_set_pane_g3_ParamLimits

0x100d,	// (0x00075661) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x00084028) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x00084028) cset_list_set_pane_g

0x101c,	// (0x00075670) cset_list_set_pane_t1_ParamLimits

0x101c,	// (0x00075670) cset_list_set_pane_t1

0xe8e5,	// (0x00082f39) list_highlight_pane_cp021_ParamLimits

0xe8e5,	// (0x00082f39) list_highlight_pane_cp021

0x471f,	// (0x00078d73) cset_slider_pane_g1

0x4731,	// (0x00078d85) cset_slider_pane_g2

0x4728,	// (0x00078d7c) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x0008402d) cset_slider_pane_g

0xe7b5,	// (0x00082e09) aid_area_touch_cam4_zoom

0xe7bd,	// (0x00082e11) cam4_zoom_cont_pane

0xe7c5,	// (0x00082e19) cam4_zoom_pane_g1

0xe7cd,	// (0x00082e21) cam4_zoom_pane_g2

0x8ac4,	// (0x0007d118) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x00084034) cam4_zoom_pane_g

0xc8ff,	// (0x00080f53) cam4_zoom_cont_pane_g1

0xc908,	// (0x00080f5c) cam4_zoom_cont_pane_g2

0xc911,	// (0x00080f65) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x0008403b) cam4_zoom_cont_pane_g

0x7ee8,	// (0x0007c53c) call4_image_pane_ParamLimits

0x7ee8,	// (0x0007c53c) call4_image_pane

0xc59d,	// (0x00080bf1) call4_windows_conf_pane_ParamLimits

0xc5dc,	// (0x00080c30) popup_call4_audio_in_window_ParamLimits

0xc5dc,	// (0x00080c30) popup_call4_audio_in_window

0xad28,	// (0x0007f37c) bg_popup_call2_act_pane_cp02

0xc652,	// (0x00080ca6) call4_list_conf_pane

0xbc73,	// (0x000802c7) call4_image_pane_g1

0xbc73,	// (0x000802c7) call4_image_pane_g2

0x0001,

0xf700,	// (0x00083d54) call4_image_pane_g

0xc91a,	// (0x00080f6e) list_single_graphic_popup_conf4_pane_ParamLimits

0xc91a,	// (0x00080f6e) list_single_graphic_popup_conf4_pane

0xad28,	// (0x0007f37c) list_highlight_pane_cp022

0xc92d,	// (0x00080f81) list_single_graphic_popup_conf4_pane_g1

0x3cad,	// (0x00078301) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x00084042) list_single_graphic_popup_conf4_pane_g

0xc935,	// (0x00080f89) list_single_graphic_popup_conf4_pane_t1

0x28fa,	// (0x00076f4e) popup_vtel_slider_window_ParamLimits

0x28fa,	// (0x00076f4e) popup_vtel_slider_window

0xc57f,	// (0x00080bd3) dialer2_ne_pane_t2_ParamLimits

0xc57f,	// (0x00080bd3) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x00083f23) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x00083f23) dialer2_ne_pane_t

0xba56,	// (0x000800aa) bg_popup_sub_pane_cp010_ParamLimits

0xba56,	// (0x000800aa) bg_popup_sub_pane_cp010

0x8acc,	// (0x0007d120) popup_vtel_slider_window_g1_ParamLimits

0x8acc,	// (0x0007d120) popup_vtel_slider_window_g1

0x8adf,	// (0x0007d133) popup_vtel_slider_window_g2_ParamLimits

0x8adf,	// (0x0007d133) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x00084047) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x00084047) popup_vtel_slider_window_g

0x8b35,	// (0x0007d189) vtel_slider_pane_ParamLimits

0x8b35,	// (0x0007d189) vtel_slider_pane

0x8b57,	// (0x0007d1ab) vtel_slider_pane_g1_ParamLimits

0x8b57,	// (0x0007d1ab) vtel_slider_pane_g1

0x8b6b,	// (0x0007d1bf) vtel_slider_pane_g2_ParamLimits

0x8b6b,	// (0x0007d1bf) vtel_slider_pane_g2

0x8b83,	// (0x0007d1d7) vtel_slider_pane_g3_ParamLimits

0x8b83,	// (0x0007d1d7) vtel_slider_pane_g3

0x8b57,	// (0x0007d1ab) vtel_slider_pane_g4_ParamLimits

0x8b57,	// (0x0007d1ab) vtel_slider_pane_g4

0x8b99,	// (0x0007d1ed) vtel_slider_pane_g5_ParamLimits

0x8b99,	// (0x0007d1ed) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x00084050) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x00084050) vtel_slider_pane_g

0xad28,	// (0x0007f37c) main_gallery2_pane

0x829a,	// (0x0007c8ee) aid_size_row_itut2_dropdow_list_ParamLimits

0x829a,	// (0x0007c8ee) aid_size_row_itut2_dropdow_list

0x8326,	// (0x0007c97a) grid_vitu2_function_top_pane_ParamLimits

0x8326,	// (0x0007c97a) grid_vitu2_function_top_pane

0x838b,	// (0x0007c9df) popup_vitu2_dropdown_list_window_ParamLimits

0x838b,	// (0x0007c9df) popup_vitu2_dropdown_list_window

0x83b4,	// (0x0007ca08) popup_vitu2_match_list_window

0x8baf,	// (0x0007d203) cell_vitu2_function_top_pane_ParamLimits

0x8baf,	// (0x0007d203) cell_vitu2_function_top_pane

0x8bcd,	// (0x0007d221) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8bcd,	// (0x0007d221) cell_vitu2_function_top_pane_cp01

0x8beb,	// (0x0007d23f) cell_vitu2_function_top_wide_pane_ParamLimits

0x8beb,	// (0x0007d23f) cell_vitu2_function_top_wide_pane

0xe8e5,	// (0x00082f39) bg_button_pane_cp012

0x8c09,	// (0x0007d25d) cell_vitu2_function_top_pane_g1

0xe7d5,	// (0x00082e29) bg_button_pane_cp013_ParamLimits

0xe7d5,	// (0x00082e29) bg_button_pane_cp013

0x8c1d,	// (0x0007d271) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8c1d,	// (0x0007d271) cell_vitu2_function_top_wide_pane_g1

0xe8e5,	// (0x00082f39) bg_popup_sub_pane_cp20

0x8c35,	// (0x0007d289) list_vitu2_match_list_pane

0xc70c,	// (0x00080d60) bg_popup_sub_pane_cp20_g1

0xc714,	// (0x00080d68) bg_popup_sub_pane_cp20_g2

0x2d92,	// (0x000773e6) bg_popup_sub_pane_cp20_g3

0xc71c,	// (0x00080d70) bg_popup_sub_pane_cp20_g4

0x2d72,	// (0x000773c6) bg_popup_sub_pane_cp20_g5

0xc959,	// (0x00080fad) bg_popup_sub_pane_cp20_g6

0xc72c,	// (0x00080d80) bg_popup_sub_pane_cp20_g7

0xc734,	// (0x00080d88) bg_popup_sub_pane_cp20_g8

0xc73c,	// (0x00080d90) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x0008405b) bg_popup_sub_pane_cp20_g

0xe7f1,	// (0x00082e45) list_vitu2_match_list_item_pane_ParamLimits

0xe7f1,	// (0x00082e45) list_vitu2_match_list_item_pane

0xe803,	// (0x00082e57) list_vitu2_match_list_item_pane_t1

0xad28,	// (0x0007f37c) bg_popup_sub_pane_cp21

0x3bb2,	// (0x00078206) grid_vitu2_dropdown_list_pane

0x8c53,	// (0x0007d2a7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8c53,	// (0x0007d2a7) cell_vitu2_dropdown_list_char_pane

0x8c74,	// (0x0007d2c8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8c74,	// (0x0007d2c8) cell_vitu2_dropdown_list_ctrl_pane

0xc979,	// (0x00080fcd) cell_vitu2_dropdown_list_char_pane_g1

0xc982,	// (0x00080fd6) cell_vitu2_dropdown_list_char_pane_g2

0xc98b,	// (0x00080fdf) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x00084078) cell_vitu2_dropdown_list_char_pane_g

0x8ca0,	// (0x0007d2f4) cell_vitu2_dropdown_list_char_pane_t1

0x8cae,	// (0x0007d302) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8cae,	// (0x0007d302) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8cbe,	// (0x0007d312) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8cbe,	// (0x0007d312) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8ccf,	// (0x0007d323) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8ccf,	// (0x0007d323) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8cdf,	// (0x0007d333) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8cdf,	// (0x0007d333) cell_vitu2_dropdown_list_ctrl_pane_g4

0xbeda,	// (0x0008052e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xbeda,	// (0x0008052e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x0008407f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x0008407f) cell_vitu2_dropdown_list_ctrl_pane_g

0x8cfb,	// (0x0007d34f) aid_size_cell_gallery2_ParamLimits

0x8cfb,	// (0x0007d34f) aid_size_cell_gallery2

0x8d11,	// (0x0007d365) grid_gallery2_pane_ParamLimits

0x8d11,	// (0x0007d365) grid_gallery2_pane

0x8d25,	// (0x0007d379) scroll_pane_cp029_ParamLimits

0x8d25,	// (0x0007d379) scroll_pane_cp029

0x8d31,	// (0x0007d385) cell_gallery2_pane_ParamLimits

0x8d31,	// (0x0007d385) cell_gallery2_pane

0xc994,	// (0x00080fe8) cell_gallery2_pane_g2

0x8d67,	// (0x0007d3bb) cell_gallery2_pane_g3

0xc99e,	// (0x00080ff2) cell_gallery2_pane_g4

0xc9a6,	// (0x00080ffa) cell_gallery2_pane_g5

0x41e1,	// (0x00078835) grid_highlight_pane_cp10

0x83b4,	// (0x0007ca08) popup_vitu2_match_list_window_ParamLimits

0x83c9,	// (0x0007ca1d) popup_vitu2_query_window_ParamLimits

0x83c9,	// (0x0007ca1d) popup_vitu2_query_window

0xad28,	// (0x0007f37c) bg_vitu2_candi_button_pane

0xc979,	// (0x00080fcd) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xc982,	// (0x00080fd6) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xc98b,	// (0x00080fdf) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1066,	// (0x000756ba) bg_button_pane_cp015

0x8d6f,	// (0x0007d3c3) bg_button_pane_cp016

0x8d82,	// (0x0007d3d6) bg_button_pane_cp017

0xb76b,	// (0x0007fdbf) bg_popup_sub_pane_cp22

0xc9ae,	// (0x00081002) popup_vitu2_query_window_g1

0x8da6,	// (0x0007d3fa) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x0008408a) popup_vitu2_query_window_g

0x10a7,	// (0x000756fb) popup_vitu2_query_window_t1_ParamLimits

0x10a7,	// (0x000756fb) popup_vitu2_query_window_t1

0x10dc,	// (0x00075730) popup_vitu2_query_window_t2_ParamLimits

0x10dc,	// (0x00075730) popup_vitu2_query_window_t2

0x10ee,	// (0x00075742) popup_vitu2_query_window_t3_ParamLimits

0x10ee,	// (0x00075742) popup_vitu2_query_window_t3

0x8db9,	// (0x0007d40d) popup_vitu2_query_window_t4_ParamLimits

0x8db9,	// (0x0007d40d) popup_vitu2_query_window_t4

0x8dda,	// (0x0007d42e) popup_vitu2_query_window_t5_ParamLimits

0x8dda,	// (0x0007d42e) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x00084091) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x00084091) popup_vitu2_query_window_t

0xc80e,	// (0x00080e62) main_cset_text_pane

0x87fa,	// (0x0007ce4e) aid_area_touch_slider_ParamLimits

0x8816,	// (0x0007ce6a) cset_slider_pane_ParamLimits

0x8840,	// (0x0007ce94) main_cset_slider_pane_g1_ParamLimits

0x8855,	// (0x0007cea9) main_cset_slider_pane_g2_ParamLimits

0xc82f,	// (0x00080e83) main_cset_slider_pane_g3_ParamLimits

0xc82f,	// (0x00080e83) main_cset_slider_pane_g3

0x886a,	// (0x0007cebe) main_cset_slider_pane_g4_ParamLimits

0x886a,	// (0x0007cebe) main_cset_slider_pane_g4

0x8879,	// (0x0007cecd) main_cset_slider_pane_g5_ParamLimits

0x8879,	// (0x0007cecd) main_cset_slider_pane_g5

0x8885,	// (0x0007ced9) main_cset_slider_pane_g6_ParamLimits

0x8885,	// (0x0007ced9) main_cset_slider_pane_g6

0xf990,	// (0x00083fe4) main_cset_slider_pane_g_ParamLimits

0xc85f,	// (0x00080eb3) main_cset_slider_pane_t1_ParamLimits

0x8911,	// (0x0007cf65) main_cset_slider_pane_t2_ParamLimits

0x892b,	// (0x0007cf7f) main_cset_slider_pane_t3_ParamLimits

0x8945,	// (0x0007cf99) main_cset_slider_pane_t4_ParamLimits

0x895f,	// (0x0007cfb3) main_cset_slider_pane_t5_ParamLimits

0x897b,	// (0x0007cfcf) main_cset_slider_pane_t6_ParamLimits

0x8990,	// (0x0007cfe4) main_cset_slider_pane_t7_ParamLimits

0x89ba,	// (0x0007d00e) main_cset_slider_pane_t8_ParamLimits

0x89ba,	// (0x0007d00e) main_cset_slider_pane_t8

0x89e2,	// (0x0007d036) main_cset_slider_pane_t9_ParamLimits

0x89e2,	// (0x0007d036) main_cset_slider_pane_t9

0x8a0a,	// (0x0007d05e) main_cset_slider_pane_t10_ParamLimits

0x8a0a,	// (0x0007d05e) main_cset_slider_pane_t10

0x8a32,	// (0x0007d086) main_cset_slider_pane_t11_ParamLimits

0x8a32,	// (0x0007d086) main_cset_slider_pane_t11

0x8a5a,	// (0x0007d0ae) main_cset_slider_pane_t12_ParamLimits

0x8a5a,	// (0x0007d0ae) main_cset_slider_pane_t12

0x8a77,	// (0x0007d0cb) main_cset_slider_pane_t13_ParamLimits

0x8a77,	// (0x0007d0cb) main_cset_slider_pane_t13

0xf9b5,	// (0x00084009) main_cset_slider_pane_t_ParamLimits

0xad28,	// (0x0007f37c) bg_popup_sub_pane_cp011

0xc9ba,	// (0x0008100e) main_cset_text_pane_g1

0xc9c2,	// (0x00081016) main_cset_text_pane_t1

0xc9d0,	// (0x00081024) main_cset_text_pane_t2

0xc9de,	// (0x00081032) main_cset_text_pane_t3

0xc9ec,	// (0x00081040) main_cset_text_pane_t4

0xc9fa,	// (0x0008104e) main_cset_text_pane_t5

0xca08,	// (0x0008105c) main_cset_text_pane_t6

0xca16,	// (0x0008106a) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x000840a0) main_cset_text_pane_t

0xad28,	// (0x0007f37c) main_cam4_burst_pane

0xad28,	// (0x0007f37c) main_cam5_pane

0x8739,	// (0x0007cd8d) bg_button_pane_cp019

0x8742,	// (0x0007cd96) bg_button_pane_cp020

0xc83b,	// (0x00080e8f) main_cset_slider_pane_g7_ParamLimits

0xc83b,	// (0x00080e8f) main_cset_slider_pane_g7

0xc847,	// (0x00080e9b) main_cset_slider_pane_g8_ParamLimits

0xc847,	// (0x00080e9b) main_cset_slider_pane_g8

0x8899,	// (0x0007ceed) main_cset_slider_pane_g9_ParamLimits

0x8899,	// (0x0007ceed) main_cset_slider_pane_g9

0x88a5,	// (0x0007cef9) main_cset_slider_pane_g10_ParamLimits

0x88a5,	// (0x0007cef9) main_cset_slider_pane_g10

0x88b1,	// (0x0007cf05) main_cset_slider_pane_g11_ParamLimits

0x88b1,	// (0x0007cf05) main_cset_slider_pane_g11

0x88bd,	// (0x0007cf11) main_cset_slider_pane_g12_ParamLimits

0x88bd,	// (0x0007cf11) main_cset_slider_pane_g12

0x88c9,	// (0x0007cf1d) main_cset_slider_pane_g13_ParamLimits

0x88c9,	// (0x0007cf1d) main_cset_slider_pane_g13

0x88d5,	// (0x0007cf29) main_cset_slider_pane_g14_ParamLimits

0x88d5,	// (0x0007cf29) main_cset_slider_pane_g14

0x88e1,	// (0x0007cf35) main_cset_slider_pane_g15_ParamLimits

0x88e1,	// (0x0007cf35) main_cset_slider_pane_g15

0xc88d,	// (0x00080ee1) main_cset_slider_pane_t14_ParamLimits

0xc88d,	// (0x00080ee1) main_cset_slider_pane_t14

0xc8c6,	// (0x00080f1a) main_cset_slider_pane_t15_ParamLimits

0xc8c6,	// (0x00080f1a) main_cset_slider_pane_t15

0x8dfb,	// (0x0007d44f) aid_cam4_burst_size_cell_ParamLimits

0x8dfb,	// (0x0007d44f) aid_cam4_burst_size_cell

0x8e1b,	// (0x0007d46f) grid_cam4_burst_pane_ParamLimits

0x8e1b,	// (0x0007d46f) grid_cam4_burst_pane

0x8e53,	// (0x0007d4a7) linegrid_cam4_burst_pane_ParamLimits

0x8e53,	// (0x0007d4a7) linegrid_cam4_burst_pane

0xca24,	// (0x00081078) scroll_pane_cp30_ParamLimits

0xca24,	// (0x00081078) scroll_pane_cp30

0x8e79,	// (0x0007d4cd) cell_cam4_burst_pane_ParamLimits

0x8e79,	// (0x0007d4cd) cell_cam4_burst_pane

0xca30,	// (0x00081084) linegrid_cam4_burst_pane_g1_ParamLimits

0xca30,	// (0x00081084) linegrid_cam4_burst_pane_g1

0x8ec6,	// (0x0007d51a) linegrid_cam4_burst_pane_g2_ParamLimits

0x8ec6,	// (0x0007d51a) linegrid_cam4_burst_pane_g2

0xca3d,	// (0x00081091) linegrid_cam4_burst_pane_g3_ParamLimits

0xca3d,	// (0x00081091) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x000840af) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x000840af) linegrid_cam4_burst_pane_g

0x8ed7,	// (0x0007d52b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8ed7,	// (0x0007d52b) linegrid_cam4_burst_pane_g3_copy1

0xca4a,	// (0x0008109e) linegrid_cam4_burst_pane_g4_ParamLimits

0xca4a,	// (0x0008109e) linegrid_cam4_burst_pane_g4

0x8ef1,	// (0x0007d545) linegrid_cam4_burst_pane_g5_ParamLimits

0x8ef1,	// (0x0007d545) linegrid_cam4_burst_pane_g5

0x8f02,	// (0x0007d556) linegrid_cam4_burst_pane_g6_ParamLimits

0x8f02,	// (0x0007d556) linegrid_cam4_burst_pane_g6

0xca57,	// (0x000810ab) linegrid_cam4_burst_pane_g7_ParamLimits

0xca57,	// (0x000810ab) linegrid_cam4_burst_pane_g7

0x8f19,	// (0x0007d56d) cell_cam4_burst_pane_g1

0xca70,	// (0x000810c4) main_cam5_pane_t1_ParamLimits

0xca70,	// (0x000810c4) main_cam5_pane_t1

0xca82,	// (0x000810d6) main_cam5_pane_t2_ParamLimits

0xca82,	// (0x000810d6) main_cam5_pane_t2

0xca94,	// (0x000810e8) main_cam5_pane_t3_ParamLimits

0xca94,	// (0x000810e8) main_cam5_pane_t3

0xcaa6,	// (0x000810fa) main_cam5_pane_t4_ParamLimits

0xcaa6,	// (0x000810fa) main_cam5_pane_t4

0xcabc,	// (0x00081110) main_cam5_pane_t5_ParamLimits

0xcabc,	// (0x00081110) main_cam5_pane_t5

0xcace,	// (0x00081122) main_cam5_pane_t6_ParamLimits

0xcace,	// (0x00081122) main_cam5_pane_t6

0xcae2,	// (0x00081136) main_cam5_pane_t7_ParamLimits

0xcae2,	// (0x00081136) main_cam5_pane_t7

0xcaf4,	// (0x00081148) main_cam5_pane_t8_ParamLimits

0xcaf4,	// (0x00081148) main_cam5_pane_t8

0xcb10,	// (0x00081164) main_cam5_pane_t9_ParamLimits

0xcb10,	// (0x00081164) main_cam5_pane_t9

0xcb22,	// (0x00081176) main_cam5_pane_t10_ParamLimits

0xcb22,	// (0x00081176) main_cam5_pane_t10

0xcb34,	// (0x00081188) main_cam5_pane_t11_ParamLimits

0xcb34,	// (0x00081188) main_cam5_pane_t11

0xcb46,	// (0x0008119a) main_cam5_pane_t12_ParamLimits

0xcb46,	// (0x0008119a) main_cam5_pane_t12

0xcb5b,	// (0x000811af) main_cam5_pane_t13_ParamLimits

0xcb5b,	// (0x000811af) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x000840bb) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x000840bb) main_cam5_pane_t

0x19e9,	// (0x0007603d) popup_scut_keymap_window_ParamLimits

0x19e9,	// (0x0007603d) popup_scut_keymap_window

0x8f2c,	// (0x0007d580) aid_size_cell_brow_shortcut

0x41e1,	// (0x00078835) bg_popup_window_pane_cp010

0x8f38,	// (0x0007d58c) grid_scut_pane

0x8f44,	// (0x0007d598) cell_scut_pane_ParamLimits

0x8f44,	// (0x0007d598) cell_scut_pane

0x8f5b,	// (0x0007d5af) cell_scut_pane_g1

0xcb78,	// (0x000811cc) cell_scut_pane_t1

0xcb87,	// (0x000811db) cell_scut_pane_t2

0x8f64,	// (0x0007d5b8) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x000840d6) cell_scut_pane_t

0x6def,	// (0x0007b443) main_mup3_pane_g8_ParamLimits

0x6def,	// (0x0007b443) main_mup3_pane_g8

0x82b2,	// (0x0007c906) area_vitu2_query_pane_ParamLimits

0x82b2,	// (0x0007c906) area_vitu2_query_pane

0x107a,	// (0x000756ce) input_focus_pane_cp08

0xcb96,	// (0x000811ea) area_vitu2_query_pane_g1

0x116c,	// (0x000757c0) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x000840dd) area_vitu2_query_pane_g

0x8f72,	// (0x0007d5c6) area_vitu2_query_pane_t1_ParamLimits

0x8f72,	// (0x0007d5c6) area_vitu2_query_pane_t1

0x8f86,	// (0x0007d5da) area_vitu2_query_pane_t2_ParamLimits

0x8f86,	// (0x0007d5da) area_vitu2_query_pane_t2

0x117d,	// (0x000757d1) area_vitu2_query_pane_t3_ParamLimits

0x117d,	// (0x000757d1) area_vitu2_query_pane_t3

0xcba2,	// (0x000811f6) area_vitu2_query_pane_t4_ParamLimits

0xcba2,	// (0x000811f6) area_vitu2_query_pane_t4

0xcbca,	// (0x0008121e) area_vitu2_query_pane_t5_ParamLimits

0xcbca,	// (0x0008121e) area_vitu2_query_pane_t5

0xcbf2,	// (0x00081246) area_vitu2_query_pane_t6_ParamLimits

0xcbf2,	// (0x00081246) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x000840e2) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x000840e2) area_vitu2_query_pane_t

0x8f9a,	// (0x0007d5ee) bg_button_pane_cp018

0x8fa8,	// (0x0007d5fc) bg_button_pane_cp021

0x11a5,	// (0x000757f9) bg_button_pane_cp022

0x11b6,	// (0x0007580a) input_focus_pane_cp09

0x4008,	// (0x0007865c) aid_size_touch_mv_arrow_left

0x4031,	// (0x00078685) aid_size_touch_mv_arrow_right

0x88f9,	// (0x0007cf4d) main_cset_slider_pane_g16_ParamLimits

0x88f9,	// (0x0007cf4d) main_cset_slider_pane_g16

0x8905,	// (0x0007cf59) main_cset_slider_pane_g17_ParamLimits

0x8905,	// (0x0007cf59) main_cset_slider_pane_g17

0x8f19,	// (0x0007d56d) cell_cam4_burst_pane_g1_ParamLimits

0xad28,	// (0x0007f37c) compa_mode_pane

0x8aef,	// (0x0007d143) popup_vtel_slider_window_g3_ParamLimits

0x8aef,	// (0x0007d143) popup_vtel_slider_window_g3

0x8b06,	// (0x0007d15a) popup_vtel_slider_window_g4_ParamLimits

0x8b06,	// (0x0007d15a) popup_vtel_slider_window_g4

0x8b1d,	// (0x0007d171) popup_vtel_slider_window_t1_ParamLimits

0x8b1d,	// (0x0007d171) popup_vtel_slider_window_t1

0xad28,	// (0x0007f37c) main_cl_pane

0xb793,	// (0x0007fde7) popup_imed_adjust2_window_ParamLimits

0xb76b,	// (0x0007fdbf) bg_tb_trans_pane_cp05_ParamLimits

0xc194,	// (0x000807e8) popup_imed_adjust2_window_g1_ParamLimits

0xc1a3,	// (0x000807f7) popup_imed_adjust2_window_g2_ParamLimits

0xc1a3,	// (0x000807f7) popup_imed_adjust2_window_g2

0xc1af,	// (0x00080803) popup_imed_adjust2_window_g3_ParamLimits

0xc1af,	// (0x00080803) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x00083e52) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x00083e52) popup_imed_adjust2_window_g

0xc1bb,	// (0x0008080f) popup_imed_adjust2_window_t1_ParamLimits

0xc1d3,	// (0x00080827) slider_imed_adjust_pane_ParamLimits

0xc1e7,	// (0x0008083b) slider_imed_adjust_pane_g1_ParamLimits

0xc1f7,	// (0x0008084b) slider_imed_adjust_pane_g2_ParamLimits

0xc207,	// (0x0008085b) slider_imed_adjust_pane_g3_ParamLimits

0xc218,	// (0x0008086c) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x00083e59) slider_imed_adjust_pane_g_ParamLimits

0x7fcd,	// (0x0007c621) aid_touch_area_cam4_ParamLimits

0x7fcd,	// (0x0007c621) aid_touch_area_cam4

0xe738,	// (0x00082d8c) battery_pane_cp01

0x809d,	// (0x0007c6f1) main_camera4_pane_g6_ParamLimits

0x809d,	// (0x0007c6f1) main_camera4_pane_g6

0x80c7,	// (0x0007c71b) main_camera4_pane_t2_ParamLimits

0x80c7,	// (0x0007c71b) main_camera4_pane_t2

0x0001,

0xf903,	// (0x00083f57) main_camera4_pane_t_ParamLimits

0xf903,	// (0x00083f57) main_camera4_pane_t

0x80fc,	// (0x0007c750) aid_touch_area_vid4_ParamLimits

0x80fc,	// (0x0007c750) aid_touch_area_vid4

0x8163,	// (0x0007c7b7) main_video4_pane_g5_ParamLimits

0x8163,	// (0x0007c7b7) main_video4_pane_g5

0x818e,	// (0x0007c7e2) vid4_progress_pane_ParamLimits

0x818e,	// (0x0007c7e2) vid4_progress_pane

0xc853,	// (0x00080ea7) main_cset_slider_pane_g18_ParamLimits

0xc853,	// (0x00080ea7) main_cset_slider_pane_g18

0xca64,	// (0x000810b8) cell_cam4_burst_pane_g2_ParamLimits

0xca64,	// (0x000810b8) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x000840b6) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x000840b6) cell_cam4_burst_pane_g

0xf097,	// (0x000836eb) bg_cl_pane_ParamLimits

0xf097,	// (0x000836eb) bg_cl_pane

0x8fb4,	// (0x0007d608) cl_header_pane_ParamLimits

0x8fb4,	// (0x0007d608) cl_header_pane

0x8fc8,	// (0x0007d61c) cl_listscroll_pane_ParamLimits

0x8fc8,	// (0x0007d61c) cl_listscroll_pane

0xcc3e,	// (0x00081292) bg_cl_pane_g1

0xcc46,	// (0x0008129a) bg_cl_pane_g2

0xcc4e,	// (0x000812a2) bg_cl_pane_g3

0xcc56,	// (0x000812aa) bg_cl_pane_g4

0xcc5e,	// (0x000812b2) bg_cl_pane_g5

0xcc66,	// (0x000812ba) bg_cl_pane_g6

0xcc6e,	// (0x000812c2) bg_cl_pane_g7

0xcc76,	// (0x000812ca) bg_cl_pane_g8

0xcc7e,	// (0x000812d2) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x000840f1) bg_cl_pane_g

0x8fd8,	// (0x0007d62c) aid_height_cl_leading_ParamLimits

0x8fd8,	// (0x0007d62c) aid_height_cl_leading

0x8fe4,	// (0x0007d638) aid_height_cl_text_ParamLimits

0x8fe4,	// (0x0007d638) aid_height_cl_text

0xe8e5,	// (0x00082f39) bg_cl_header_pane_ParamLimits

0xe8e5,	// (0x00082f39) bg_cl_header_pane

0x9003,	// (0x0007d657) cl_header_pane_g1_ParamLimits

0x9003,	// (0x0007d657) cl_header_pane_g1

0x9019,	// (0x0007d66d) cl_header_pane_t1_ParamLimits

0x9019,	// (0x0007d66d) cl_header_pane_t1

0xcc86,	// (0x000812da) cl_list_pane

0xc826,	// (0x00080e7a) hc_scroll_pane_cp01

0x2d72,	// (0x000773c6) bg_cl_header_pane_g1

0xc70c,	// (0x00080d60) bg_cl_header_pane_g2

0x2d92,	// (0x000773e6) bg_cl_header_pane_g3

0xc71c,	// (0x00080d70) bg_cl_header_pane_g4

0xc714,	// (0x00080d68) bg_cl_header_pane_g5

0xc959,	// (0x00080fad) bg_cl_header_pane_g6

0xc734,	// (0x00080d88) bg_cl_header_pane_g7

0xc73c,	// (0x00080d90) bg_cl_header_pane_g8

0xc72c,	// (0x00080d80) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x00084104) bg_cl_header_pane_g

0x9032,	// (0x0007d686) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9032,	// (0x0007d686) hc_cl_list_double_graphic_heading_pane

0x9046,	// (0x0007d69a) hc_cl_list_single_graphic_pane_ParamLimits

0x9046,	// (0x0007d69a) hc_cl_list_single_graphic_pane

0x9060,	// (0x0007d6b4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9060,	// (0x0007d6b4) hc_cl_list_single_graphic_pane_g1

0x906c,	// (0x0007d6c0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x906c,	// (0x0007d6c0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x00084117) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x00084117) hc_cl_list_single_graphic_pane_g

0x9080,	// (0x0007d6d4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9080,	// (0x0007d6d4) hc_cl_list_single_graphic_pane_t1

0x9060,	// (0x0007d6b4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9060,	// (0x0007d6b4) hc_cl_list_double_graphic_heading_pane_g1

0x9095,	// (0x0007d6e9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9095,	// (0x0007d6e9) hc_cl_list_double_graphic_heading_pane_g2

0x90a9,	// (0x0007d6fd) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x90a9,	// (0x0007d6fd) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x0008411c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x0008411c) hc_cl_list_double_graphic_heading_pane_g

0x90bd,	// (0x0007d711) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x90bd,	// (0x0007d711) hc_cl_list_double_graphic_heading_pane_t1

0x90d2,	// (0x0007d726) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x90d2,	// (0x0007d726) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x00084123) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x00084123) hc_cl_list_double_graphic_heading_pane_t

0xe819,	// (0x00082e6d) vid4_progress_pane_g1

0xe829,	// (0x00082e7d) vid4_progress_pane_g2

0xe839,	// (0x00082e8d) vid4_progress_pane_g3

0xe76d,	// (0x00082dc1) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x00084128) vid4_progress_pane_g

0xe845,	// (0x00082e99) vid4_progress_pane_t1

0xe85a,	// (0x00082eae) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x00084133) vid4_progress_pane_t

0xe885,	// (0x00082ed9) wait_bar_pane_cp07

0xba64,	// (0x000800b8) blid_firmament_pane_ParamLimits

0xbaa7,	// (0x000800fb) popup_blid_sat_info2_window_g1

0xbacb,	// (0x0008011f) popup_blid_sat_info2_window_t3

0xbad9,	// (0x0008012d) popup_blid_sat_info2_window_t4

0xbae7,	// (0x0008013b) popup_blid_sat_info2_window_t5

0xbaf5,	// (0x00080149) popup_blid_sat_info2_window_t6

0xbb05,	// (0x00080159) popup_blid_sat_info2_window_t7

0xbb13,	// (0x00080167) popup_blid_sat_info2_window_t8

0xbb21,	// (0x00080175) popup_blid_sat_info2_window_t9

0xbb2f,	// (0x00080183) popup_blid_sat_info2_window_t10

0xbbf3,	// (0x00080247) aid_firma_cardinal_ParamLimits

0xbc07,	// (0x0008025b) blid_firmament_pane_t1_ParamLimits

0xbc1e,	// (0x00080272) blid_firmament_pane_t2_ParamLimits

0xbc35,	// (0x00080289) blid_firmament_pane_t3_ParamLimits

0xbc4c,	// (0x000802a0) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x00083d4b) blid_firmament_pane_t_ParamLimits

0xbc63,	// (0x000802b7) blid_sat_info_pane_ParamLimits

0xe8e5,	// (0x00082f39) main_cam_set_pane_ParamLimits

0x765d,	// (0x0007bcb1) aid_size_cell_colour_35_ParamLimits

0x767d,	// (0x0007bcd1) aid_size_cell_colour_112_ParamLimits

0x769d,	// (0x0007bcf1) aid_size_cell_effect_ParamLimits

0xb76b,	// (0x0007fdbf) bg_tb_trans_pane_cp02_ParamLimits

0x38f1,	// (0x00077f45) heading_imed_pane_ParamLimits

0x76bd,	// (0x0007bd11) listscroll_imed_pane_ParamLimits

0x569b,	// (0x00079cef) popup_call2_audio_first_window_g5_ParamLimits

0x569b,	// (0x00079cef) popup_call2_audio_first_window_g5

0x7c74,	// (0x0007c2c8) aid_size_touch_image3_arrow_left_ParamLimits

0x7c74,	// (0x0007c2c8) aid_size_touch_image3_arrow_left

0x7ca0,	// (0x0007c2f4) aid_size_touch_image3_arrow_right_ParamLimits

0x7ca0,	// (0x0007c2f4) aid_size_touch_image3_arrow_right

0xe870,	// (0x00082ec4) vid4_progress_pane_t3

0x79e0,	// (0x0007c034) main_hwr_training_symbol_option_pane_ParamLimits

0x79e0,	// (0x0007c034) main_hwr_training_symbol_option_pane

0xc481,	// (0x00080ad5) popup_hwr_training_preview_window_ParamLimits

0xc481,	// (0x00080ad5) popup_hwr_training_preview_window

0x7a00,	// (0x0007c054) hwr_training_navi_pane_g5_ParamLimits

0x7a00,	// (0x0007c054) hwr_training_navi_pane_g5

0xc6fa,	// (0x00080d4e) popup_char_count_window

0xe8e5,	// (0x00082f39) bg_popup_sub_pane_cp20_ParamLimits

0x8c35,	// (0x0007d289) list_vitu2_match_list_pane_ParamLimits

0x8c44,	// (0x0007d298) vitu2_page_scroll_pane_ParamLimits

0x8c44,	// (0x0007d298) vitu2_page_scroll_pane

0xccd8,	// (0x0008132c) list_single_hwr_training_symbol_option_pane_ParamLimits

0xccd8,	// (0x0008132c) list_single_hwr_training_symbol_option_pane

0xcceb,	// (0x0008133f) list_single_hwr_training_symbol_option_pane_g1

0xccf3,	// (0x00081347) list_single_hwr_training_symbol_option_pane_t1

0xcd01,	// (0x00081355) bg_button_pane_cp023

0xcd0a,	// (0x0008135e) bg_button_pane_cp024

0x90e7,	// (0x0007d73b) vitu2_page_scroll_pane_g1

0x90ef,	// (0x0007d743) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x0008413a) vitu2_page_scroll_pane_g

0x90f7,	// (0x0007d74b) vitu2_page_scroll_pane_t1

0xb980,	// (0x0007ffd4) popup_char_count_window_g1

0xcd3d,	// (0x00081391) popup_char_count_window_g2

0xcd46,	// (0x0008139a) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x0008413f) popup_char_count_window_g

0xcd4f,	// (0x000813a3) popup_char_count_window_t1

0xad28,	// (0x0007f37c) main_vded2_pane

0xc180,	// (0x000807d4) aid_size_cell_imed_line

0xc18a,	// (0x000807de) grid_imed_line_width_pane

0x81fe,	// (0x0007c852) vid4_indicators_pane_g4

0xcd5d,	// (0x000813b1) cell_imed_line_width_pane_ParamLimits

0xcd5d,	// (0x000813b1) cell_imed_line_width_pane

0xcd71,	// (0x000813c5) cell_imed_line_width_pane_g1

0xcd7a,	// (0x000813ce) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x00084146) cell_imed_line_width_pane_g

0x9106,	// (0x0007d75a) main_vded2_pane_g1_ParamLimits

0x9106,	// (0x0007d75a) main_vded2_pane_g1

0x911c,	// (0x0007d770) main_vded2_pane_g2_ParamLimits

0x911c,	// (0x0007d770) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x0008414b) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x0008414b) main_vded2_pane_g

0x912e,	// (0x0007d782) vded2_slider_pane_ParamLimits

0x912e,	// (0x0007d782) vded2_slider_pane

0x913e,	// (0x0007d792) aid_size_touch_vded2_end

0x9148,	// (0x0007d79c) aid_size_touch_vded2_playhead

0xcd82,	// (0x000813d6) aid_size_touch_vded2_start

0xcd8a,	// (0x000813de) vded2_slider_bg_pane

0xcd93,	// (0x000813e7) vded2_slider_pane_g1

0xcd9c,	// (0x000813f0) vded2_slider_pane_g2

0x9152,	// (0x0007d7a6) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x00084150) vded2_slider_pane_g

0xcda4,	// (0x000813f8) vded2_slider_bg_pane_g1

0xcdad,	// (0x00081401) vded2_slider_bg_pane_g2

0xcdb6,	// (0x0008140a) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x00084157) vded2_slider_bg_pane_g

0x484a,	// (0x00078e9e) aid_postcard_touch_down_pane_ParamLimits

0x484a,	// (0x00078e9e) aid_postcard_touch_down_pane

0x4860,	// (0x00078eb4) aid_postcard_touch_up_pane_ParamLimits

0x4860,	// (0x00078eb4) aid_postcard_touch_up_pane

0xad28,	// (0x0007f37c) main_blid2_pane

0xb779,	// (0x0007fdcd) popup_blid2_search_window

0xad28,	// (0x0007f37c) blid2_gps_pane

0xad28,	// (0x0007f37c) blid2_navig_pane

0xad28,	// (0x0007f37c) blid2_search_pane

0xad28,	// (0x0007f37c) blid2_tripm_pane

0x915d,	// (0x0007d7b1) blid2_search_pane_g1_ParamLimits

0x915d,	// (0x0007d7b1) blid2_search_pane_g1

0x9175,	// (0x0007d7c9) blid2_search_pane_t1_ParamLimits

0x9175,	// (0x0007d7c9) blid2_search_pane_t1

0x9187,	// (0x0007d7db) aid_size_cell_blid2_gps_ParamLimits

0x9187,	// (0x0007d7db) aid_size_cell_blid2_gps

0x919f,	// (0x0007d7f3) blid2_gps_pane_g1_ParamLimits

0x919f,	// (0x0007d7f3) blid2_gps_pane_g1

0x91b3,	// (0x0007d807) grid_blid2_satellite_pane_ParamLimits

0x91b3,	// (0x0007d807) grid_blid2_satellite_pane

0x91cd,	// (0x0007d821) blid2_navig_pane_g1_ParamLimits

0x91cd,	// (0x0007d821) blid2_navig_pane_g1

0x91d9,	// (0x0007d82d) blid2_navig_pane_t1_ParamLimits

0x91d9,	// (0x0007d82d) blid2_navig_pane_t1

0x91f4,	// (0x0007d848) blid2_navig_pane_t2_ParamLimits

0x91f4,	// (0x0007d848) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x0008415e) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x0008415e) blid2_navig_pane_t

0x920f,	// (0x0007d863) blid2_navig_ring_pane_ParamLimits

0x920f,	// (0x0007d863) blid2_navig_ring_pane

0x9228,	// (0x0007d87c) blid2_speed_pane_ParamLimits

0x9228,	// (0x0007d87c) blid2_speed_pane

0x9234,	// (0x0007d888) blid2_tripm_pane_g1_ParamLimits

0x9234,	// (0x0007d888) blid2_tripm_pane_g1

0x924f,	// (0x0007d8a3) blid2_tripm_pane_g2_ParamLimits

0x924f,	// (0x0007d8a3) blid2_tripm_pane_g2

0x9263,	// (0x0007d8b7) blid2_tripm_pane_g3_ParamLimits

0x9263,	// (0x0007d8b7) blid2_tripm_pane_g3

0x9277,	// (0x0007d8cb) blid2_tripm_pane_g4_ParamLimits

0x9277,	// (0x0007d8cb) blid2_tripm_pane_g4

0x928b,	// (0x0007d8df) blid2_tripm_pane_g5_ParamLimits

0x928b,	// (0x0007d8df) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x00084163) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x00084163) blid2_tripm_pane_g

0x92b1,	// (0x0007d905) blid2_tripm_pane_t1_ParamLimits

0x92b1,	// (0x0007d905) blid2_tripm_pane_t1

0x92cc,	// (0x0007d920) blid2_tripm_pane_t2_ParamLimits

0x92cc,	// (0x0007d920) blid2_tripm_pane_t2

0x92e7,	// (0x0007d93b) blid2_tripm_pane_t3_ParamLimits

0x92e7,	// (0x0007d93b) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x00084170) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x00084170) blid2_tripm_pane_t

0x932e,	// (0x0007d982) cell_blid2_satellite_pane_ParamLimits

0x932e,	// (0x0007d982) cell_blid2_satellite_pane

0x934c,	// (0x0007d9a0) cell_blid2_satellite_pane_g1

0xcdbf,	// (0x00081413) cell_blid2_satellite_pane_t1

0xbc73,	// (0x000802c7) blid2_speed_pane_g1

0xcdcd,	// (0x00081421) blid2_speed_pane_t1

0xcddb,	// (0x0008142f) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x00084179) blid2_speed_pane_t

0xbc73,	// (0x000802c7) blid2_navig_ring_pane_g1

0x9355,	// (0x0007d9a9) blid2_navig_ring_pane_g2

0x935d,	// (0x0007d9b1) blid2_navig_ring_pane_g3

0x9365,	// (0x0007d9b9) blid2_navig_ring_pane_g4

0x936d,	// (0x0007d9c1) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x0008417e) blid2_navig_ring_pane_g

0xad28,	// (0x0007f37c) bg_popup_window_pane_cp011

0xcde9,	// (0x0008143d) popup_blid2_search_window_g1

0xcdf1,	// (0x00081445) popup_blid2_search_window_t1

0xcdff,	// (0x00081453) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x00084189) popup_blid2_search_window_t

0x2c34,	// (0x00077288) main_browser_pane_g1

0xf097,	// (0x000836eb) main_browser_pane_ParamLimits

0xe8e5,	// (0x00082f39) bg_button_pane_cp011_ParamLimits

0x84d5,	// (0x0007cb29) cell_vitu2_function_pane_g1_ParamLimits

0xb76b,	// (0x0007fdbf) bg_popup_sub_pane_cp22_ParamLimits

0x107a,	// (0x000756ce) input_focus_pane_cp08_ParamLimits

0x8d95,	// (0x0007d3e9) popup_vitu2_query_button_pane_ParamLimits

0x8d95,	// (0x0007d3e9) popup_vitu2_query_button_pane

0x1091,	// (0x000756e5) popup_vitu2_query_input_button_pane

0xc9ae,	// (0x00081002) popup_vitu2_query_window_g1_ParamLimits

0x8da6,	// (0x0007d3fa) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x0008408a) popup_vitu2_query_window_g_ParamLimits

0xad28,	// (0x0007f37c) bg_button_pane_cp026

0x9375,	// (0x0007d9c9) popup_vitu2_query_input_button_pane_g1

0xad28,	// (0x0007f37c) bg_button_pane_cp025

0xce0d,	// (0x00081461) popup_vitu2_query_button_pane_t1

0x6ac9,	// (0x0007b11d) main_mp3_pane_t6

0x6ad7,	// (0x0007b12b) popup_slider_window_cp01

0xe754,	// (0x00082da8) cam4_battery_pane

0xe7ad,	// (0x00082e01) cam4_battery_pane_cp02

0xe811,	// (0x00082e65) cam4_battery_pane_cp01

0xe811,	// (0x00082e65) cam4_battery_pane_cp03

0xbc73,	// (0x000802c7) cam4_battery_pane_g1

0xce1b,	// (0x0008146f) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x0008418e) cam4_battery_pane_g

0xbb3d,	// (0x00080191) popup_blid_sat_info2_window_t11

0x4008,	// (0x0007865c) aid_size_touch_mv_arrow_left_ParamLimits

0x4031,	// (0x00078685) aid_size_touch_mv_arrow_right_ParamLimits

0x4079,	// (0x000786cd) navi_pane_g1_ParamLimits

0x4085,	// (0x000786d9) navi_pane_g2_ParamLimits

0x40b3,	// (0x00078707) navi_pane_g3_ParamLimits

0xf409,	// (0x00083a5d) navi_pane_g_ParamLimits

0x416f,	// (0x000787c3) navi_pane_mv_t1_ParamLimits

0x76c9,	// (0x0007bd1d) grid_imed_effect_pane_ParamLimits

0x27e5,	// (0x00076e39) aid_placing_vt_slider_lsc

0x27f5,	// (0x00076e49) aid_placing_vt_slider_prt

0xe8e5,	// (0x00082f39) bg_tb_trans_pane_cp01_ParamLimits

0xbdfa,	// (0x0008044e) popup_image_details_window_g1_ParamLimits

0xbe0d,	// (0x00080461) popup_image_details_window_g2_ParamLimits

0xbe22,	// (0x00080476) popup_image_details_window_g3_ParamLimits

0xbe22,	// (0x00080476) popup_image_details_window_g3

0xf73c,	// (0x00083d90) popup_image_details_window_g_ParamLimits

0xbe36,	// (0x0008048a) popup_image_details_window_t1_ParamLimits

0xbe48,	// (0x0008049c) popup_image_details_window_t2_ParamLimits

0xbe61,	// (0x000804b5) popup_image_details_window_t3_ParamLimits

0xbe75,	// (0x000804c9) popup_image_details_window_t4_ParamLimits

0xbe90,	// (0x000804e4) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x00083d97) popup_image_details_window_t_ParamLimits

0x8ff0,	// (0x0007d644) cl_header_name_pane_ParamLimits

0x8ff0,	// (0x0007d644) cl_header_name_pane

0x937d,	// (0x0007d9d1) cl_header_name_pane_t1_ParamLimits

0x937d,	// (0x0007d9d1) cl_header_name_pane_t1

0x939e,	// (0x0007d9f2) cl_header_name_pane_t2_ParamLimits

0x939e,	// (0x0007d9f2) cl_header_name_pane_t2

0x93e0,	// (0x0007da34) cl_header_name_pane_t3_ParamLimits

0x93e0,	// (0x0007da34) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x00084193) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x00084193) cl_header_name_pane_t

0x4140,	// (0x00078794) navi_pane_mv_g2_ParamLimits

0xc6b7,	// (0x00080d0b) field_vitu2_entry_pane_g1_ParamLimits

0xc6c3,	// (0x00080d17) field_vitu2_entry_pane_g2_ParamLimits

0xc6cf,	// (0x00080d23) field_vitu2_entry_pane_g3_ParamLimits

0xc6cf,	// (0x00080d23) field_vitu2_entry_pane_g3

0xf935,	// (0x00083f89) field_vitu2_entry_pane_g_ParamLimits

0x8451,	// (0x0007caa5) cell_vitu2_itu_pane_g1_ParamLimits

0x8461,	// (0x0007cab5) cell_vitu2_itu_pane_g2_ParamLimits

0x8461,	// (0x0007cab5) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x00083f95) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x00083f95) cell_vitu2_itu_pane_g

0xe8e5,	// (0x00082f39) bg_vkb2_func_pane_cp05_ParamLimits

0xe8e5,	// (0x00082f39) bg_vkb2_func_pane_cp05

0xe8e5,	// (0x00082f39) bg_vkb2_func_pane_cp03

0xe8e5,	// (0x00082f39) bg_vkb2_func_pane_cp04

0xe8e5,	// (0x00082f39) bg_vkb2_func_pane_cp10_ParamLimits

0xe8e5,	// (0x00082f39) bg_vkb2_func_pane_cp10

0x11a5,	// (0x000757f9) bg_vkb2_func_pane_cp08

0x8f9a,	// (0x0007d5ee) bg_vkb2_func_pane_cp06

0x8fa8,	// (0x0007d5fc) bg_vkb2_func_pane_cp07

0xcd13,	// (0x00081367) bg_vkb2_func_pane_cp11_ParamLimits

0xcd13,	// (0x00081367) bg_vkb2_func_pane_cp11

0xcd28,	// (0x0008137c) bg_vkb2_func_pane_cp12_ParamLimits

0xcd28,	// (0x0008137c) bg_vkb2_func_pane_cp12

0xad28,	// (0x0007f37c) bg_vkb2_func_pane_cp09

0xc70c,	// (0x00080d60) bg_vkb2_func_pane_g1

0x2d92,	// (0x000773e6) bg_vkb2_func_pane_g2

0xc714,	// (0x00080d68) bg_vkb2_func_pane_g3

0xc71c,	// (0x00080d70) bg_vkb2_func_pane_g4

0xc959,	// (0x00080fad) bg_vkb2_func_pane_g5

0xc734,	// (0x00080d88) bg_vkb2_func_pane_g6

0xc73c,	// (0x00080d90) bg_vkb2_func_pane_g7

0xc72c,	// (0x00080d80) bg_vkb2_func_pane_g8

0x2d72,	// (0x000773c6) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x0008419a) bg_vkb2_func_pane_g

0x929f,	// (0x0007d8f3) blid2_tripm_pane_g6_ParamLimits

0x929f,	// (0x0007d8f3) blid2_tripm_pane_g6

0xc539,	// (0x00080b8d) mp4_progress_pane_g1

0x931a,	// (0x0007d96e) blid2_tripm_values_pane_ParamLimits

0x931a,	// (0x0007d96e) blid2_tripm_values_pane

0x9411,	// (0x0007da65) blid2_tripm_values_pane_t1

0x941f,	// (0x0007da73) blid2_tripm_values_pane_t2

0x942d,	// (0x0007da81) blid2_tripm_values_pane_t3

0x943b,	// (0x0007da8f) blid2_tripm_values_pane_t4

0x9449,	// (0x0007da9d) blid2_tripm_values_pane_t5

0x9457,	// (0x0007daab) blid2_tripm_values_pane_t6

0x9465,	// (0x0007dab9) blid2_tripm_values_pane_t7

0x9473,	// (0x0007dac7) blid2_tripm_values_pane_t8

0x9481,	// (0x0007dad5) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x000841ad) blid2_tripm_values_pane_t

0x2831,	// (0x00076e85) call_video_pane_t1_ParamLimits

0x284f,	// (0x00076ea3) call_video_pane_t2_ParamLimits

0xf292,	// (0x000838e6) call_video_pane_t_ParamLimits

0x0e77,	// (0x000754cb) msg_header_pane_g1_ParamLimits

0x47b4,	// (0x00078e08) msg_header_pane_g2_ParamLimits

0x47b4,	// (0x00078e08) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00083b00) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00083b00) msg_header_pane_g

0xf097,	// (0x000836eb) main_clock2_pane_ParamLimits

0x73ee,	// (0x0007ba42) grid_clock2_toolbar_pane_ParamLimits

0x73ee,	// (0x0007ba42) grid_clock2_toolbar_pane

0x73ee,	// (0x0007ba42) listscroll_clock2_pane_ParamLimits

0x73ee,	// (0x0007ba42) listscroll_clock2_pane

0x74cb,	// (0x0007bb1f) main_clock2_pane_t3_ParamLimits

0x74cb,	// (0x0007bb1f) main_clock2_pane_t3

0x74e6,	// (0x0007bb3a) main_clock2_pane_t4_ParamLimits

0x74e6,	// (0x0007bb3a) main_clock2_pane_t4

0xce25,	// (0x00081479) cell_clock2_toolbar_pane

0xce2d,	// (0x00081481) cell_clock2_toolbar_pane_cp01

0xce2d,	// (0x00081481) cell_clock2_toolbar_pane_cp02

0xce35,	// (0x00081489) cell_clock2_toolbar_pane_cp03

0xce3d,	// (0x00081491) list_clock2_pane

0x3da8,	// (0x000783fc) scroll_pane_cp10

0xce45,	// (0x00081499) list_single_clock2_pane_ParamLimits

0xce45,	// (0x00081499) list_single_clock2_pane

0x41e1,	// (0x00078835) list_highlight_pane_cp08

0xce52,	// (0x000814a6) list_single_clock2_pane_t1

0xce60,	// (0x000814b4) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x000841c0) list_single_clock2_pane_t

0xad28,	// (0x0007f37c) bg_button_pane_cp10

0xce6e,	// (0x000814c2) cell_clock2_toolbar_pane_g1

0x47c8,	// (0x00078e1c) aid_main_viewer_pane_g1_ParamLimits

0x47c8,	// (0x00078e1c) aid_main_viewer_pane_g1

0x47d6,	// (0x00078e2a) aid_main_viewer_pane_g2_ParamLimits

0x47d6,	// (0x00078e2a) aid_main_viewer_pane_g2

0x47e4,	// (0x00078e38) aid_main_viewer_pane_g3_ParamLimits

0x47e4,	// (0x00078e38) aid_main_viewer_pane_g3

0x47f3,	// (0x00078e47) aid_main_viewer_pane_g4_ParamLimits

0x47f3,	// (0x00078e47) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00083b11) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00083b11) aid_main_viewer_pane_g

0x5cf0,	// (0x0007a344) main_calc_pane_ParamLimits

0x5d04,	// (0x0007a358) main_dialer2_pane_ParamLimits

0xad28,	// (0x0007f37c) main_cam6_pane

0xad28,	// (0x0007f37c) main_vid6_pane

0x73fa,	// (0x0007ba4e) listscroll_gen_pane_cp06_ParamLimits

0x73fa,	// (0x0007ba4e) listscroll_gen_pane_cp06

0x7501,	// (0x0007bb55) main_clock2_pane_t5_ParamLimits

0x7501,	// (0x0007bb55) main_clock2_pane_t5

0x755e,	// (0x0007bbb2) aid_call2_pane_cp10_ParamLimits

0x7570,	// (0x0007bbc4) aid_call_pane_cp10_ParamLimits

0x3f97,	// (0x000785eb) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3f97,	// (0x000785eb) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7582,	// (0x0007bbd6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7582,	// (0x0007bbd6) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3f97,	// (0x000785eb) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x00083e47) popup_clock_analogue_window_cp10_g_ParamLimits

0x7594,	// (0x0007bbe8) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7c21,	// (0x0007c275) cell_dialer2_keypad_pane_g2_ParamLimits

0x7c21,	// (0x0007c275) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x00083f28) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x00083f28) cell_dialer2_keypad_pane_g

0x7c3d,	// (0x0007c291) cell_dialer2_keypad_pane_t1

0x87ec,	// (0x0007ce40) main_cset_text2_pane_ParamLimits

0x87ec,	// (0x0007ce40) main_cset_text2_pane

0xcb96,	// (0x000811ea) area_vitu2_query_pane_g1_ParamLimits

0x116c,	// (0x000757c0) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x000840dd) area_vitu2_query_pane_g_ParamLimits

0xcc1a,	// (0x0008126e) area_vitu2_query_pane_t7_ParamLimits

0xcc1a,	// (0x0008126e) area_vitu2_query_pane_t7

0x8f9a,	// (0x0007d5ee) bg_button_pane_cp018_ParamLimits

0x8fa8,	// (0x0007d5fc) bg_button_pane_cp021_ParamLimits

0x11a5,	// (0x000757f9) bg_button_pane_cp022_ParamLimits

0x11a5,	// (0x000757f9) bg_vkb2_func_pane_cp08_ParamLimits

0x8f9a,	// (0x0007d5ee) bg_vkb2_func_pane_cp06_ParamLimits

0x8fa8,	// (0x0007d5fc) bg_vkb2_func_pane_cp07_ParamLimits

0x11b6,	// (0x0007580a) input_focus_pane_cp09_ParamLimits

0xe89d,	// (0x00082ef1) cam6_autofocus_pane_ParamLimits

0xe89d,	// (0x00082ef1) cam6_autofocus_pane

0x948f,	// (0x0007dae3) cam6_image_uncrop_pane_ParamLimits

0x948f,	// (0x0007dae3) cam6_image_uncrop_pane

0x949e,	// (0x0007daf2) cam6_indi_pane_ParamLimits

0x949e,	// (0x0007daf2) cam6_indi_pane

0x94b4,	// (0x0007db08) cam6_mode_pane_ParamLimits

0x94b4,	// (0x0007db08) cam6_mode_pane

0x94c6,	// (0x0007db1a) cam6_timer_pane_ParamLimits

0x94c6,	// (0x0007db1a) cam6_timer_pane

0x94d2,	// (0x0007db26) cam6_zoom_pane_ParamLimits

0x94d2,	// (0x0007db26) cam6_zoom_pane

0x94de,	// (0x0007db32) cam6_mode_pane_g1_ParamLimits

0x94de,	// (0x0007db32) cam6_mode_pane_g1

0x94ee,	// (0x0007db42) cam6_mode_pane_g2_ParamLimits

0x94ee,	// (0x0007db42) cam6_mode_pane_g2

0x94fe,	// (0x0007db52) cam6_mode_pane_g3_ParamLimits

0x94fe,	// (0x0007db52) cam6_mode_pane_g3

0x950e,	// (0x0007db62) cam6_mode_pane_g4_ParamLimits

0x950e,	// (0x0007db62) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x000841c5) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x000841c5) cam6_mode_pane_g

0xce76,	// (0x000814ca) bg_tb_trans_pane_cp08_ParamLimits

0xce76,	// (0x000814ca) bg_tb_trans_pane_cp08

0xce84,	// (0x000814d8) cam6_battery_pane_ParamLimits

0xce84,	// (0x000814d8) cam6_battery_pane

0xce9a,	// (0x000814ee) cam6_indi_pane_g1_ParamLimits

0xce9a,	// (0x000814ee) cam6_indi_pane_g1

0xceac,	// (0x00081500) cam6_indi_pane_g2_ParamLimits

0xceac,	// (0x00081500) cam6_indi_pane_g2

0xcebe,	// (0x00081512) cam6_indi_pane_g3_ParamLimits

0xcebe,	// (0x00081512) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x000841ce) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x000841ce) cam6_indi_pane_g

0xced0,	// (0x00081524) cam6_indi_pane_t1_ParamLimits

0xced0,	// (0x00081524) cam6_indi_pane_t1

0x951e,	// (0x0007db72) cam6_autofocus_pane_g1

0x9526,	// (0x0007db7a) cam6_autofocus_pane_g2

0x952e,	// (0x0007db82) cam6_autofocus_pane_g3

0x9536,	// (0x0007db8a) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x000841d5) cam6_autofocus_pane_g

0xcef6,	// (0x0008154a) cam6_timer_pane_g1

0xcefe,	// (0x00081552) cam6_timer_pane_t1

0xcf0c,	// (0x00081560) cam6_zoom_cont_pane

0xcf14,	// (0x00081568) cam6_zoom_pane_g1

0xcf1c,	// (0x00081570) cam6_zoom_pane_g2

0x953e,	// (0x0007db92) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x000841de) cam6_zoom_pane_g

0xbc73,	// (0x000802c7) cam6_battery_pane_g1

0xbc73,	// (0x000802c7) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x00083d54) cam6_battery_pane_g

0xcf24,	// (0x00081578) cam6_zoom_cont_pane_g1

0xcf2d,	// (0x00081581) cam6_zoom_cont_pane_g2

0xcf36,	// (0x0008158a) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x000841e5) cam6_zoom_cont_pane_g

0x955b,	// (0x0007dbaf) cam6_mode_pane_cp_ParamLimits

0x955b,	// (0x0007dbaf) cam6_mode_pane_cp

0x94d2,	// (0x0007db26) cam6_zoom_pane_cp_ParamLimits

0x94d2,	// (0x0007db26) cam6_zoom_pane_cp

0x956d,	// (0x0007dbc1) vid6_image_uncrop_cif_pane_ParamLimits

0x956d,	// (0x0007dbc1) vid6_image_uncrop_cif_pane

0x957d,	// (0x0007dbd1) vid6_image_uncrop_nhd_pane_ParamLimits

0x957d,	// (0x0007dbd1) vid6_image_uncrop_nhd_pane

0x948f,	// (0x0007dae3) vid6_image_uncrop_vga_pane_ParamLimits

0x948f,	// (0x0007dae3) vid6_image_uncrop_vga_pane

0x958c,	// (0x0007dbe0) vid6_image_uncrop_wvga_pane_ParamLimits

0x958c,	// (0x0007dbe0) vid6_image_uncrop_wvga_pane

0x959b,	// (0x0007dbef) vid6_indi_pane_ParamLimits

0x959b,	// (0x0007dbef) vid6_indi_pane

0xce76,	// (0x000814ca) bg_tb_trans_pane_cp09_ParamLimits

0xce76,	// (0x000814ca) bg_tb_trans_pane_cp09

0xcf4e,	// (0x000815a2) cam6_battery_pane_cp_ParamLimits

0xcf4e,	// (0x000815a2) cam6_battery_pane_cp

0xcf5a,	// (0x000815ae) vid6_indi_pane_g1_ParamLimits

0xcf5a,	// (0x000815ae) vid6_indi_pane_g1

0xcf6c,	// (0x000815c0) vid6_indi_pane_g2_ParamLimits

0xcf6c,	// (0x000815c0) vid6_indi_pane_g2

0xcf7e,	// (0x000815d2) vid6_indi_pane_g3_ParamLimits

0xcf7e,	// (0x000815d2) vid6_indi_pane_g3

0xcf93,	// (0x000815e7) vid6_indi_pane_g4_ParamLimits

0xcf93,	// (0x000815e7) vid6_indi_pane_g4

0xcfa8,	// (0x000815fc) vid6_indi_pane_g5_ParamLimits

0xcfa8,	// (0x000815fc) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x000841ec) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x000841ec) vid6_indi_pane_g

0xcfc2,	// (0x00081616) vid6_indi_pane_t1_ParamLimits

0xcfc2,	// (0x00081616) vid6_indi_pane_t1

0xcfd8,	// (0x0008162c) vid6_indi_pane_t2_ParamLimits

0xcfd8,	// (0x0008162c) vid6_indi_pane_t2

0xd000,	// (0x00081654) vid6_indi_pane_t3_ParamLimits

0xd000,	// (0x00081654) vid6_indi_pane_t3

0xd028,	// (0x0008167c) vid6_indi_pane_t4_ParamLimits

0xd028,	// (0x0008167c) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x000841f7) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x000841f7) vid6_indi_pane_t

0xd04c,	// (0x000816a0) wait_bar_pane_cp08

0x95b3,	// (0x0007dc07) main_cset_text2_pane_t1_ParamLimits

0x95b3,	// (0x0007dc07) main_cset_text2_pane_t1

0x9546,	// (0x0007db9a) listscroll_gen_pane_cp06_t1_ParamLimits

0x9546,	// (0x0007db9a) listscroll_gen_pane_cp06_t1

0xad28,	// (0x0007f37c) main_cam6_set_pane

0xbeda,	// (0x0008052e) bg_tb_trans_pane_cp06_ParamLimits

0xe75c,	// (0x00082db0) cam4_indicators_pane_g1_ParamLimits

0xe76d,	// (0x00082dc1) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x00083f65) cam4_indicators_pane_g_ParamLimits

0xe78b,	// (0x00082ddf) cam4_indicators_pane_t1_ParamLimits

0xc690,	// (0x00080ce4) bg_tb_trans_pane_cp07_ParamLimits

0x81d7,	// (0x0007c82b) vid4_indicators_pane_g1_ParamLimits

0x81e4,	// (0x0007c838) vid4_indicators_pane_g2_ParamLimits

0x81f1,	// (0x0007c845) vid4_indicators_pane_g3_ParamLimits

0x81fe,	// (0x0007c852) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x00083f77) vid4_indicators_pane_g_ParamLimits

0x8216,	// (0x0007c86a) vid4_indicators_pane_t1_ParamLimits

0xe819,	// (0x00082e6d) vid4_progress_pane_g1_ParamLimits

0xe829,	// (0x00082e7d) vid4_progress_pane_g2_ParamLimits

0xe839,	// (0x00082e8d) vid4_progress_pane_g3_ParamLimits

0xe76d,	// (0x00082dc1) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x00084128) vid4_progress_pane_g_ParamLimits

0xe845,	// (0x00082e99) vid4_progress_pane_t1_ParamLimits

0xe85a,	// (0x00082eae) vid4_progress_pane_t2_ParamLimits

0xe870,	// (0x00082ec4) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x00084133) vid4_progress_pane_t_ParamLimits

0xe885,	// (0x00082ed9) wait_bar_pane_cp07_ParamLimits

0x95d3,	// (0x0007dc27) main_cam6_set_pane_g2_ParamLimits

0x95d3,	// (0x0007dc27) main_cam6_set_pane_g2

0x95f7,	// (0x0007dc4b) main_cset6_listscroll_pane_ParamLimits

0x95f7,	// (0x0007dc4b) main_cset6_listscroll_pane

0x9613,	// (0x0007dc67) main_cset6_slider_pane_ParamLimits

0x9613,	// (0x0007dc67) main_cset6_slider_pane

0x9629,	// (0x0007dc7d) main_cset6_text2_pane_ParamLimits

0x9629,	// (0x0007dc7d) main_cset6_text2_pane

0xd05b,	// (0x000816af) main_cset6_text_pane

0xd063,	// (0x000816b7) main_cset_list_pane_copy1_ParamLimits

0xd063,	// (0x000816b7) main_cset_list_pane_copy1

0xd073,	// (0x000816c7) scroll_pane_cp028_copy1

0x9637,	// (0x0007dc8b) cset_list_set_pane_copy1

0x964a,	// (0x0007dc9e) aid_position_infowindow_above_copy1

0x9652,	// (0x0007dca6) aid_position_infowindow_below_copy1

0xe8ab,	// (0x00082eff) cset_list_set_pane_g1_copy1

0x100d,	// (0x00075661) cset_list_set_pane_g3_copy1_ParamLimits

0x100d,	// (0x00075661) cset_list_set_pane_g3_copy1

0x101c,	// (0x00075670) cset_list_set_pane_t1_copy1_ParamLimits

0x101c,	// (0x00075670) cset_list_set_pane_t1_copy1

0xe8e5,	// (0x00082f39) list_highlight_pane_cp021_copy1_ParamLimits

0xe8e5,	// (0x00082f39) list_highlight_pane_cp021_copy1

0xd07c,	// (0x000816d0) cset6_slider_pane_ParamLimits

0xd07c,	// (0x000816d0) cset6_slider_pane

0xd0a8,	// (0x000816fc) main_cset6_slider_pane_g1_ParamLimits

0xd0a8,	// (0x000816fc) main_cset6_slider_pane_g1

0x965a,	// (0x0007dcae) main_cset6_slider_pane_g2_ParamLimits

0x965a,	// (0x0007dcae) main_cset6_slider_pane_g2

0xc83b,	// (0x00080e8f) main_cset6_slider_pane_g3_ParamLimits

0xc83b,	// (0x00080e8f) main_cset6_slider_pane_g3

0x88b1,	// (0x0007cf05) main_cset6_slider_pane_g4_ParamLimits

0x88b1,	// (0x0007cf05) main_cset6_slider_pane_g4

0x88f9,	// (0x0007cf4d) main_cset6_slider_pane_g5_ParamLimits

0x88f9,	// (0x0007cf4d) main_cset6_slider_pane_g5

0xc83b,	// (0x00080e8f) main_cset6_slider_pane_g7_ParamLimits

0xc83b,	// (0x00080e8f) main_cset6_slider_pane_g7

0xc847,	// (0x00080e9b) main_cset6_slider_pane_g8_ParamLimits

0xc847,	// (0x00080e9b) main_cset6_slider_pane_g8

0x8899,	// (0x0007ceed) main_cset6_slider_pane_g9_ParamLimits

0x8899,	// (0x0007ceed) main_cset6_slider_pane_g9

0x88a5,	// (0x0007cef9) main_cset6_slider_pane_g10_ParamLimits

0x88a5,	// (0x0007cef9) main_cset6_slider_pane_g10

0x88b1,	// (0x0007cf05) main_cset6_slider_pane_g11_ParamLimits

0x88b1,	// (0x0007cf05) main_cset6_slider_pane_g11

0x88bd,	// (0x0007cf11) main_cset6_slider_pane_g12_ParamLimits

0x88bd,	// (0x0007cf11) main_cset6_slider_pane_g12

0x88c9,	// (0x0007cf1d) main_cset6_slider_pane_g13_ParamLimits

0x88c9,	// (0x0007cf1d) main_cset6_slider_pane_g13

0x88d5,	// (0x0007cf29) main_cset6_slider_pane_g14_ParamLimits

0x88d5,	// (0x0007cf29) main_cset6_slider_pane_g14

0x9682,	// (0x0007dcd6) main_cset6_slider_pane_g15_ParamLimits

0x9682,	// (0x0007dcd6) main_cset6_slider_pane_g15

0x88f9,	// (0x0007cf4d) main_cset6_slider_pane_g16_ParamLimits

0x88f9,	// (0x0007cf4d) main_cset6_slider_pane_g16

0x8905,	// (0x0007cf59) main_cset6_slider_pane_g17_ParamLimits

0x8905,	// (0x0007cf59) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x00084200) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x00084200) main_cset6_slider_pane_g

0xd0d0,	// (0x00081724) main_cset6_slider_pane_t1_ParamLimits

0xd0d0,	// (0x00081724) main_cset6_slider_pane_t1

0x969a,	// (0x0007dcee) main_cset6_slider_pane_t2_ParamLimits

0x969a,	// (0x0007dcee) main_cset6_slider_pane_t2

0x96c5,	// (0x0007dd19) main_cset6_slider_pane_t3_ParamLimits

0x96c5,	// (0x0007dd19) main_cset6_slider_pane_t3

0x96f0,	// (0x0007dd44) main_cset6_slider_pane_t4_ParamLimits

0x96f0,	// (0x0007dd44) main_cset6_slider_pane_t4

0x971b,	// (0x0007dd6f) main_cset6_slider_pane_t5_ParamLimits

0x971b,	// (0x0007dd6f) main_cset6_slider_pane_t5

0xd111,	// (0x00081765) main_cset6_slider_pane_t7_ParamLimits

0xd111,	// (0x00081765) main_cset6_slider_pane_t7

0x9746,	// (0x0007dd9a) main_cset6_slider_pane_t8_ParamLimits

0x9746,	// (0x0007dd9a) main_cset6_slider_pane_t8

0x976a,	// (0x0007ddbe) main_cset6_slider_pane_t9_ParamLimits

0x976a,	// (0x0007ddbe) main_cset6_slider_pane_t9

0x978e,	// (0x0007dde2) main_cset6_slider_pane_t10_ParamLimits

0x978e,	// (0x0007dde2) main_cset6_slider_pane_t10

0x97b2,	// (0x0007de06) main_cset6_slider_pane_t11_ParamLimits

0x97b2,	// (0x0007de06) main_cset6_slider_pane_t11

0xd147,	// (0x0008179b) main_cset6_slider_pane_t14_ParamLimits

0xd147,	// (0x0008179b) main_cset6_slider_pane_t14

0xd180,	// (0x000817d4) main_cset6_slider_pane_t15_ParamLimits

0xd180,	// (0x000817d4) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x00084225) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x00084225) main_cset6_slider_pane_t

0xc8ff,	// (0x00080f53) cset_slider_pane_g1_copy1

0xc908,	// (0x00080f5c) cset_slider_pane_g2_copy1

0xc911,	// (0x00080f65) cset_slider_pane_g3_copy1

0xad28,	// (0x0007f37c) bg_popup_sub_pane_cp011_copy1

0xc9ba,	// (0x0008100e) main_cset_text_pane_g1_copy1

0xc9c2,	// (0x00081016) main_cset_text_pane_t1_copy1

0xc9d0,	// (0x00081024) main_cset_text_pane_t2_copy1

0xc9de,	// (0x00081032) main_cset_text_pane_t3_copy1

0xc9ec,	// (0x00081040) main_cset_text_pane_t4_copy1

0xc9fa,	// (0x0008104e) main_cset_text_pane_t5_copy1

0xca08,	// (0x0008105c) main_cset_text_pane_t6_copy1

0xca16,	// (0x0008106a) main_cset_text_pane_t7_copy1

0x95b3,	// (0x0007dc07) main_cset_text2_pane_t1_copy1

0xad28,	// (0x0007f37c) main_ncimui_pane

0x5f3a,	// (0x0007a58e) popup_query_ncimui_window_ParamLimits

0x5f3a,	// (0x0007a58e) popup_query_ncimui_window

0xbf3f,	// (0x00080593) field_cale_ev2_pane_g4_ParamLimits

0xbf3f,	// (0x00080593) field_cale_ev2_pane_g4

0x7af9,	// (0x0007c14d) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7af9,	// (0x0007c14d) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x00083f03) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x00083f03) cell_video_dialer_keypad_pane_g

0x7b11,	// (0x0007c165) cell_video_dialer_keypad_pane_t1

0xad28,	// (0x0007f37c) bg_popup_window_pane_cp012

0x3c09,	// (0x0007825d) heading_pane_cp06

0xd2a8,	// (0x000818fc) ncim_query_content_pane

0xad28,	// (0x0007f37c) bg_popup_heading_pane_cp01

0xd2b0,	// (0x00081904) ncim_heading_pane_t1

0xd2be,	// (0x00081912) ncim_indicator_popup_pane

0xd2d0,	// (0x00081924) ncim_query_button_pane

0xd2e4,	// (0x00081938) ncim_query_content_pane_t1

0xd2f6,	// (0x0008194a) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x00084264) ncim_query_content_pane_t

0xd330,	// (0x00081984) ncim_query_list_pane

0xd342,	// (0x00081996) ncim_query_popup_pane

0xd2be,	// (0x00081912) ncim_indicator_popup_pane_ParamLimits

0x98cf,	// (0x0007df23) ncim_query_content_pane_g1_ParamLimits

0x98cf,	// (0x0007df23) ncim_query_content_pane_g1

0xd2e4,	// (0x00081938) ncim_query_content_pane_t1_ParamLimits

0xd2f6,	// (0x0008194a) ncim_query_content_pane_t2_ParamLimits

0x98db,	// (0x0007df2f) ncim_query_content_pane_t3_ParamLimits

0x98db,	// (0x0007df2f) ncim_query_content_pane_t3

0x9903,	// (0x0007df57) ncim_query_content_pane_t4_ParamLimits

0x9903,	// (0x0007df57) ncim_query_content_pane_t4

0x992b,	// (0x0007df7f) ncim_query_content_pane_t5_ParamLimits

0x992b,	// (0x0007df7f) ncim_query_content_pane_t5

0xd308,	// (0x0008195c) ncim_query_content_pane_t6_ParamLimits

0xd308,	// (0x0008195c) ncim_query_content_pane_t6

0xfc10,	// (0x00084264) ncim_query_content_pane_t_ParamLimits

0xd330,	// (0x00081984) ncim_query_list_pane_ParamLimits

0xd342,	// (0x00081996) ncim_query_popup_pane_ParamLimits

0xd356,	// (0x000819aa) wait_bar_pane_cp04

0xad28,	// (0x0007f37c) input_focus_pane_cp011

0xd35e,	// (0x000819b2) ncim_query_popup_pane_t1

0xd36c,	// (0x000819c0) ncim_list_query_list_pane_ParamLimits

0xd36c,	// (0x000819c0) ncim_list_query_list_pane

0xad28,	// (0x0007f37c) bg_button_pane_cp027

0xd37f,	// (0x000819d3) ncim_query_button_pane_g1

0xad28,	// (0x0007f37c) list_highlight_pane_cp012

0xd389,	// (0x000819dd) ncim_list_query_list_pane_g1

0xd391,	// (0x000819e5) ncim_list_query_list_pane_t1

0xe77c,	// (0x00082dd0) cam4_indicators_pane_g3_ParamLimits

0xe77c,	// (0x00082dd0) cam4_indicators_pane_g3

0x820a,	// (0x0007c85e) vid4_indicators_pane_g5_ParamLimits

0x820a,	// (0x0007c85e) vid4_indicators_pane_g5

0xe77c,	// (0x00082dd0) vid4_progress_pane_g5_ParamLimits

0xe77c,	// (0x00082dd0) vid4_progress_pane_g5

0x97e8,	// (0x0007de3c) main_ncimui_pane_g1

0x983e,	// (0x0007de92) ncimui_group_query_pane_ParamLimits

0x983e,	// (0x0007de92) ncimui_group_query_pane

0x987a,	// (0x0007dece) ncimui_list_pane_ParamLimits

0x987a,	// (0x0007dece) ncimui_list_pane

0x989b,	// (0x0007deef) ncimui_text_pane_ParamLimits

0x989b,	// (0x0007deef) ncimui_text_pane

0x9953,	// (0x0007dfa7) ncimui_text_pane_t1_ParamLimits

0x9953,	// (0x0007dfa7) ncimui_text_pane_t1

0xd39f,	// (0x000819f3) ncimui_list_single_graphic_pane_ParamLimits

0xd39f,	// (0x000819f3) ncimui_list_single_graphic_pane

0x9971,	// (0x0007dfc5) ncimui_query_pane_ParamLimits

0x9971,	// (0x0007dfc5) ncimui_query_pane

0xad28,	// (0x0007f37c) list_highlight_pane_cp013

0xd3af,	// (0x00081a03) ncim_list_query_list_pane_t1_copy1

0xd389,	// (0x000819dd) ncim_list_single_graphic_pane_g1

0xd3bd,	// (0x00081a11) ncim_query_button_pane_cp01

0xd3c9,	// (0x00081a1d) ncim_query_entry_pane_ParamLimits

0xd3c9,	// (0x00081a1d) ncim_query_entry_pane

0xd3dc,	// (0x00081a30) ncimui_query_pane_g1

0xd3e8,	// (0x00081a3c) ncimui_query_pane_t1_ParamLimits

0xd3e8,	// (0x00081a3c) ncimui_query_pane_t1

0xe8e5,	// (0x00082f39) input_focus_pane_cp012

0xd401,	// (0x00081a55) ncim_query_entry_pane_t1

0xf097,	// (0x000836eb) main_im_pane_ParamLimits

0xe8e5,	// (0x00082f39) main_mobtv_pane_ParamLimits

0xe8e5,	// (0x00082f39) main_mobtv_pane

0x8899,	// (0x0007ceed) main_cset6_slider_pane_g18_ParamLimits

0x8899,	// (0x0007ceed) main_cset6_slider_pane_g18

0x88c9,	// (0x0007cf1d) main_cset6_slider_pane_g19_ParamLimits

0x88c9,	// (0x0007cf1d) main_cset6_slider_pane_g19

0xe9bb,	// (0x0008300f) bg_main_mobtv_pane_ParamLimits

0xe9bb,	// (0x0008300f) bg_main_mobtv_pane

0x9984,	// (0x0007dfd8) main_mobtv_info_pane

0x998d,	// (0x0007dfe1) main_mobtv_loading_pane_ParamLimits

0x998d,	// (0x0007dfe1) main_mobtv_loading_pane

0xd413,	// (0x00081a67) main_mobtv_pg_channel_list_pane

0xd41d,	// (0x00081a71) main_mobtv_pg_hdr_pane

0x999a,	// (0x0007dfee) main_mobtv_programe_curr_pane_ParamLimits

0x999a,	// (0x0007dfee) main_mobtv_programe_curr_pane

0x99a7,	// (0x0007dffb) main_mobtv_programe_next_pane_ParamLimits

0x99a7,	// (0x0007dffb) main_mobtv_programe_next_pane

0xd426,	// (0x00081a7a) popup_mobtv_noti_window

0xbc73,	// (0x000802c7) main_tv_pg_hdr_pane_g1

0xd42e,	// (0x00081a82) main_tv_pg_hdr_pane_g2

0xd436,	// (0x00081a8a) main_tv_pg_hdr_pane_g3

0xd43e,	// (0x00081a92) main_tv_pg_hdr_pane_g4

0xd446,	// (0x00081a9a) main_tv_pg_hdr_pane_g5

0xd450,	// (0x00081aa4) main_tv_pg_hdr_pane_g6

0xd45a,	// (0x00081aae) main_tv_pg_hdr_pane_g7

0xd464,	// (0x00081ab8) main_tv_pg_hdr_pane_g8

0xd46e,	// (0x00081ac2) main_tv_pg_hdr_pane_g9

0xd478,	// (0x00081acc) main_tv_pg_hdr_pane_g10

0xd482,	// (0x00081ad6) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x00084271) main_tv_pg_hdr_pane_g

0xd48c,	// (0x00081ae0) main_tv_pg_hdr_pane_t1

0xd49a,	// (0x00081aee) main_tv_pg_hdr_pane_t2

0xd4a8,	// (0x00081afc) main_tv_pg_hdr_pane_t3

0xd4b8,	// (0x00081b0c) main_tv_pg_hdr_pane_t4

0xd4c8,	// (0x00081b1c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x00084288) main_tv_pg_hdr_pane_t

0xd4d8,	// (0x00081b2c) single_mobtv_pg_channel_pane_ParamLimits

0xd4d8,	// (0x00081b2c) single_mobtv_pg_channel_pane

0xd4ea,	// (0x00081b3e) single_mobtv_pg_channel_table_pane

0xd4f3,	// (0x00081b47) single_mobtv_pg_channel_thumb_pane

0xd4fc,	// (0x00081b50) single_tv_pg_channel_pane_g1

0xd505,	// (0x00081b59) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x00084293) single_tv_pg_channel_pane_g

0xbeda,	// (0x0008052e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xbeda,	// (0x0008052e) bg_single_mobtv_pg_channel_thumb_pane

0xd50e,	// (0x00081b62) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd50e,	// (0x00081b62) single_mobtv_pg_channel_thumb_pane_g1

0xd51c,	// (0x00081b70) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd51c,	// (0x00081b70) single_mobtv_pg_channel_thumb_pane_g2

0xd528,	// (0x00081b7c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd528,	// (0x00081b7c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x00084298) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x00084298) single_mobtv_pg_channel_thumb_pane_g

0xd534,	// (0x00081b88) single_mobtv_pg_channel_thumb_pane_t1

0xd542,	// (0x00081b96) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x0008429f) single_mobtv_pg_channel_thumb_pane_t

0xbc73,	// (0x000802c7) bg_single_mobtv_pg_channel_table_pane_g1

0xbc73,	// (0x000802c7) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x00083d54) bg_single_mobtv_pg_channel_table_pane_g

0xd550,	// (0x00081ba4) single_mobtv_pg_channel_table_pane_t1

0xd55e,	// (0x00081bb2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x000842a4) single_mobtv_pg_channel_table_pane_t

0x99bc,	// (0x0007e010) main_mobtv_info_pane_g1_ParamLimits

0x99bc,	// (0x0007e010) main_mobtv_info_pane_g1

0x99da,	// (0x0007e02e) main_mobtv_info_pane_t1_ParamLimits

0x99da,	// (0x0007e02e) main_mobtv_info_pane_t1

0x9a52,	// (0x0007e0a6) main_mobtv_info_pane_t2_ParamLimits

0x9a52,	// (0x0007e0a6) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x000842ae) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x000842ae) main_mobtv_info_pane_t

0x9ae1,	// (0x0007e135) wait_bar_pane_cp05

0x9af3,	// (0x0007e147) main_mobtv_loading_pane_g1_ParamLimits

0x9af3,	// (0x0007e147) main_mobtv_loading_pane_g1

0x9b06,	// (0x0007e15a) main_mobtv_loading_pane_g2_ParamLimits

0x9b06,	// (0x0007e15a) main_mobtv_loading_pane_g2

0x9b12,	// (0x0007e166) main_mobtv_loading_pane_g3_ParamLimits

0x9b12,	// (0x0007e166) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x000842b5) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x000842b5) main_mobtv_loading_pane_g

0xd56c,	// (0x00081bc0) main_mobtv_loading_pane_t1_ParamLimits

0xd56c,	// (0x00081bc0) main_mobtv_loading_pane_t1

0xd584,	// (0x00081bd8) main_mobtv_loading_pane_t2_ParamLimits

0xd584,	// (0x00081bd8) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x000842bc) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x000842bc) main_mobtv_loading_pane_t

0x9b25,	// (0x0007e179) wait_bar_pane_cp06_ParamLimits

0x9b25,	// (0x0007e179) wait_bar_pane_cp06

0xd5a8,	// (0x00081bfc) main_mobtv_programe_curr_pane_t1

0xd5b6,	// (0x00081c0a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x000842c1) main_mobtv_programe_curr_pane_t

0xd5c4,	// (0x00081c18) main_mobtv_programe_next_pane_t1

0xd5d2,	// (0x00081c26) main_mobtv_programe_next_pane_t2

0xd5e0,	// (0x00081c34) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x000842c6) main_mobtv_programe_next_pane_t

0xad28,	// (0x0007f37c) bg_popup_mobtv_noti_window_pane

0xd5ee,	// (0x00081c42) popup_mobtv_noti_window_g1

0xd5f6,	// (0x00081c4a) popup_mobtv_noti_window_t1

0xd604,	// (0x00081c58) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x000842cd) popup_mobtv_noti_window_t

0xbc73,	// (0x000802c7) bg_popup_mobtv_noti_window_pane_g1

0xad28,	// (0x0007f37c) sc_clock_pane

0xad28,	// (0x0007f37c) main_fs_bigclock_pane

0x9304,	// (0x0007d958) blid2_tripm_pane_t4_ParamLimits

0x9304,	// (0x0007d958) blid2_tripm_pane_t4

0x9b34,	// (0x0007e188) sc_clock_pane_g1_ParamLimits

0x9b34,	// (0x0007e188) sc_clock_pane_g1

0x9b46,	// (0x0007e19a) sc_clock_pane_t1_ParamLimits

0x9b46,	// (0x0007e19a) sc_clock_pane_t1

0x9b68,	// (0x0007e1bc) sc_clock_pane_t2_ParamLimits

0x9b68,	// (0x0007e1bc) sc_clock_pane_t2

0x9b80,	// (0x0007e1d4) sc_clock_pane_t3_ParamLimits

0x9b80,	// (0x0007e1d4) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x000842d2) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x000842d2) sc_clock_pane_t

0xa56e,	// (0x0007ebc2) main_fs_bigclock_indicator_pane_ParamLimits

0xa56e,	// (0x0007ebc2) main_fs_bigclock_indicator_pane

0xbeaa,	// (0x000804fe) main_fs_bigclock_pane_g1_ParamLimits

0xbeaa,	// (0x000804fe) main_fs_bigclock_pane_g1

0xa57a,	// (0x0007ebce) main_fs_bigclock_pane_t1_ParamLimits

0xa57a,	// (0x0007ebce) main_fs_bigclock_pane_t1

0xa58c,	// (0x0007ebe0) main_fs_bigclock_pane_t2_ParamLimits

0xa58c,	// (0x0007ebe0) main_fs_bigclock_pane_t2

0xa59e,	// (0x0007ebf2) main_fs_bigclock_pane_t3_ParamLimits

0xa59e,	// (0x0007ebf2) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x000844d1) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x000844d1) main_fs_bigclock_pane_t

0xe0c9,	// (0x0008271d) main_fs_bigclock_indicator_pane_g1

0xd2d8,	// (0x0008192c) ncim_query_content_pane_g2_ParamLimits

0xd2d8,	// (0x0008192c) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x0008425f) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x0008425f) ncim_query_content_pane_g

0x9b99,	// (0x0007e1ed) sc_clock_pane_t4_ParamLimits

0x9b99,	// (0x0007e1ed) sc_clock_pane_t4

0xe8e5,	// (0x00082f39) main_radioblah_pane

0xc620,	// (0x00080c74) cell_call4_button_pane_t1_copy1_ParamLimits

0xc620,	// (0x00080c74) cell_call4_button_pane_t1_copy1

0x97f0,	// (0x0007de44) main_ncimui_pane_t1_ParamLimits

0x97f0,	// (0x0007de44) main_ncimui_pane_t1

0x980a,	// (0x0007de5e) main_ncimui_pane_t2_ParamLimits

0x980a,	// (0x0007de5e) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x00084258) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x00084258) main_ncimui_pane_t

0xd612,	// (0x00081c66) main_radioblah_anim_pane_ParamLimits

0xd612,	// (0x00081c66) main_radioblah_anim_pane

0xd623,	// (0x00081c77) main_radioblah_info_pane_ParamLimits

0xd623,	// (0x00081c77) main_radioblah_info_pane

0xd637,	// (0x00081c8b) main_radioblah_pane_t1_ParamLimits

0xd637,	// (0x00081c8b) main_radioblah_pane_t1

0xd653,	// (0x00081ca7) main_radioblah_pane_t2_ParamLimits

0xd653,	// (0x00081ca7) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x000842f3) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x000842f3) main_radioblah_pane_t

0x9d69,	// (0x0007e3bd) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9d69,	// (0x0007e3bd) main_radioblah_rocker_ctrl_pane

0xd69b,	// (0x00081cef) main_radioblah_info_pane_t1_ParamLimits

0xd69b,	// (0x00081cef) main_radioblah_info_pane_t1

0x9dc1,	// (0x0007e415) main_radioblah_info_pane_t2_ParamLimits

0x9dc1,	// (0x0007e415) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x000842fc) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x000842fc) main_radioblah_info_pane_t

0xbc73,	// (0x000802c7) main_radioblah_rocker_ctrl_pane_g1

0x9e73,	// (0x0007e4c7) main_radioblah_rocker_ctrl_pane_g2

0x9e7b,	// (0x0007e4cf) main_radioblah_rocker_ctrl_pane_g3

0x9e83,	// (0x0007e4d7) main_radioblah_rocker_ctrl_pane_g4

0x9e8b,	// (0x0007e4df) main_radioblah_rocker_ctrl_pane_g5

0x9e93,	// (0x0007e4e7) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x00084305) main_radioblah_rocker_ctrl_pane_g

0x95b3,	// (0x0007dc07) main_cset_text2_pane_t1_copy1_ParamLimits

0xe74c,	// (0x00082da0) cam4_image_uncrop_qvga_pane

0xe7a5,	// (0x00082df9) vid4_image_uncrop_qcif_pane

0xe89d,	// (0x00082ef1) cam6_image_uncrop_qvga_pane_ParamLimits

0xe89d,	// (0x00082ef1) cam6_image_uncrop_qvga_pane

0xcf3e,	// (0x00081592) vid6_image_uncrop_qcif_pane_ParamLimits

0xcf3e,	// (0x00081592) vid6_image_uncrop_qcif_pane

0xad28,	// (0x0007f37c) bg_popup_preview_window_pane_cp03

0xd28a,	// (0x000818de) list_cset_text2_pane

0xd292,	// (0x000818e6) main_cset6_text2_pane_g1

0xd29a,	// (0x000818ee) main_cset6_text2_pane_t1

0x9e9b,	// (0x0007e4ef) list_cset_text2_pane_t1_ParamLimits

0x9e9b,	// (0x0007e4ef) list_cset_text2_pane_t1

0xe8e5,	// (0x00082f39) main_radioblah_pane_ParamLimits

0x9acd,	// (0x0007e121) main_mobtv_info_pane_t3_ParamLimits

0x9acd,	// (0x0007e121) main_mobtv_info_pane_t3

0x9d57,	// (0x0007e3ab) main_radioblah_pane_g1

0x9d91,	// (0x0007e3e5) main_radioblah_info_pane_g1

0x9e18,	// (0x0007e46c) main_radioblah_info_pane_t3_ParamLimits

0x9e18,	// (0x0007e46c) main_radioblah_info_pane_t3

0x36ab,	// (0x00077cff) highlight_cell_cale_month_pane_ParamLimits

0x36ab,	// (0x00077cff) highlight_cell_cale_month_pane

0xad28,	// (0x0007f37c) main_phob_fisheye_pane

0xbff4,	// (0x00080648) scroll_pane_cp0031_ParamLimits

0xbff4,	// (0x00080648) scroll_pane_cp0031

0xd04c,	// (0x000816a0) wait_bar_pane_cp08_ParamLimits

0x9637,	// (0x0007dc8b) cset_list_set_pane_copy1_ParamLimits

0xd6d5,	// (0x00081d29) highlight_cell_cale_month_pane_g1

0x9eb8,	// (0x0007e50c) highlight_cell_cale_month_pane_t1

0xcc86,	// (0x000812da) list_gen_pane_cp01

0xc826,	// (0x00080e7a) scroll_pane_01

0xe9b2,	// (0x00083006) list_single_double_fisheye_pane

0x11c7,	// (0x0007581b) list_double_fisheye_pane_g1_ParamLimits

0x11c7,	// (0x0007581b) list_double_fisheye_pane_g1

0x11d3,	// (0x00075827) list_double_fisheye_pane_g2_ParamLimits

0x11d3,	// (0x00075827) list_double_fisheye_pane_g2

0x9ec6,	// (0x0007e51a) list_double_fisheye_pane_g3_ParamLimits

0x9ec6,	// (0x0007e51a) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x00084312) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x00084312) list_double_fisheye_pane_g

0x1204,	// (0x00075858) list_double_fisheye_pane_t1_ParamLimits

0x1204,	// (0x00075858) list_double_fisheye_pane_t1

0x121f,	// (0x00075873) list_double_fisheye_pane_t2_ParamLimits

0x121f,	// (0x00075873) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x0008431d) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x0008431d) list_double_fisheye_pane_t

0xad28,	// (0x0007f37c) main_call5_pane

0x9bc4,	// (0x0007e218) sc_swipe_pane_ParamLimits

0x9bc4,	// (0x0007e218) sc_swipe_pane

0x9ee5,	// (0x0007e539) call5_image_pane_ParamLimits

0x9ee5,	// (0x0007e539) call5_image_pane

0x9f02,	// (0x0007e556) call5_swipe_1_pane_ParamLimits

0x9f02,	// (0x0007e556) call5_swipe_1_pane

0x9f15,	// (0x0007e569) call5_swipe_2_pane_ParamLimits

0x9f15,	// (0x0007e569) call5_swipe_2_pane

0x9f40,	// (0x0007e594) popup_call5_audio_first_window_ParamLimits

0x9f40,	// (0x0007e594) popup_call5_audio_first_window

0xbeda,	// (0x0008052e) call5_swipe_1_pane_g1_ParamLimits

0xbeda,	// (0x0008052e) call5_swipe_1_pane_g1

0xd6dd,	// (0x00081d31) call5_swipe_1_pane_g2_ParamLimits

0xd6dd,	// (0x00081d31) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x00084322) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x00084322) call5_swipe_1_pane_g

0xd6e9,	// (0x00081d3d) call5_swipe_1_pane_t1_ParamLimits

0xd6e9,	// (0x00081d3d) call5_swipe_1_pane_t1

0xbeda,	// (0x0008052e) call5_swipe_2_pane_g1_ParamLimits

0xbeda,	// (0x0008052e) call5_swipe_2_pane_g1

0xd6fe,	// (0x00081d52) call5_swipe_2_pane_g2_ParamLimits

0xd6fe,	// (0x00081d52) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x00084327) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x00084327) call5_swipe_2_pane_g

0xd70a,	// (0x00081d5e) call5_swipe_2_pane_t1_ParamLimits

0xd70a,	// (0x00081d5e) call5_swipe_2_pane_t1

0xd71f,	// (0x00081d73) sc_swipe_pane_g1_ParamLimits

0xd71f,	// (0x00081d73) sc_swipe_pane_g1

0xd72c,	// (0x00081d80) sc_swipe_pane_g2_ParamLimits

0xd72c,	// (0x00081d80) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x0008432c) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x0008432c) sc_swipe_pane_g

0xd738,	// (0x00081d8c) sc_swipe_pane_t1_ParamLimits

0xd738,	// (0x00081d8c) sc_swipe_pane_t1

0xad28,	// (0x0007f37c) main_cmail_launcher_pane

0x9f51,	// (0x0007e5a5) aid_size_cell_cmail_l_ParamLimits

0x9f51,	// (0x0007e5a5) aid_size_cell_cmail_l

0x9f6b,	// (0x0007e5bf) grid_cmail_l_pane_ParamLimits

0x9f6b,	// (0x0007e5bf) grid_cmail_l_pane

0x9f86,	// (0x0007e5da) cell_cmail_l_pane_ParamLimits

0x9f86,	// (0x0007e5da) cell_cmail_l_pane

0x9fac,	// (0x0007e600) cell_cmail_l_pane_g1_ParamLimits

0x9fac,	// (0x0007e600) cell_cmail_l_pane_g1

0x9fb8,	// (0x0007e60c) cell_cmail_l_pane_t1_ParamLimits

0x9fb8,	// (0x0007e60c) cell_cmail_l_pane_t1

0xd74d,	// (0x00081da1) cell_cmail_l_pane_t2_ParamLimits

0xd74d,	// (0x00081da1) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x00084331) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x00084331) cell_cmail_l_pane_t

0xe8e5,	// (0x00082f39) grid_highlight_pane_cp018_ParamLimits

0xe8e5,	// (0x00082f39) grid_highlight_pane_cp018

0x18e7,	// (0x00075f3b) main2_pane_ParamLimits

0x18e7,	// (0x00075f3b) main2_pane

0x1efd,	// (0x00076551) popup_sp_fs_action_menu_bg_pane_g1

0x1f05,	// (0x00076559) popup_sp_fs_action_menu_bg_pane_g2

0x1f0d,	// (0x00076561) popup_sp_fs_action_menu_bg_pane_g3

0x1f15,	// (0x00076569) popup_sp_fs_action_menu_bg_pane_g4

0x1f1d,	// (0x00076571) popup_sp_fs_action_menu_bg_pane_g5

0x1f25,	// (0x00076579) popup_sp_fs_action_menu_bg_pane_g6

0x1f2d,	// (0x00076581) popup_sp_fs_action_menu_bg_pane_g7

0x1f35,	// (0x00076589) popup_sp_fs_action_menu_bg_pane_g8

0x1f3d,	// (0x00076591) popup_sp_fs_action_menu_bg_pane_g9

0x1f45,	// (0x00076599) popup_sp_fs_action_menu_bg_pane_g10

0x1f45,	// (0x00076599) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00083800) popup_sp_fs_action_menu_bg_pane_g

0xae94,	// (0x0007f4e8) list_medium_line_x2_t3_g3_g1_ParamLimits

0xae94,	// (0x0007f4e8) list_medium_line_x2_t3_g3_g1

0xaea0,	// (0x0007f4f4) list_medium_line_x2_t3_g3_g2_ParamLimits

0xaea0,	// (0x0007f4f4) list_medium_line_x2_t3_g3_g2

0xaeac,	// (0x0007f500) list_medium_line_x2_t3_g3_g3_ParamLimits

0xaeac,	// (0x0007f500) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x000838b0) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x000838b0) list_medium_line_x2_t3_g3_g

0xaeb8,	// (0x0007f50c) list_medium_line_x2_t3_g3_t1_ParamLimits

0xaeb8,	// (0x0007f50c) list_medium_line_x2_t3_g3_t1

0x0d85,	// (0x000753d9) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0d85,	// (0x000753d9) list_medium_line_x2_t3_g3_t2

0xaecd,	// (0x0007f521) list_medium_line_x2_t3_g3_t3_ParamLimits

0xaecd,	// (0x0007f521) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x000838b7) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x000838b7) list_medium_line_x2_t3_g3_t

0xae94,	// (0x0007f4e8) list_medium_line_x2_t3_g2_g1_ParamLimits

0xae94,	// (0x0007f4e8) list_medium_line_x2_t3_g2_g1

0xaeac,	// (0x0007f500) list_medium_line_x2_t3_g2_g2_ParamLimits

0xaeac,	// (0x0007f500) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x000838be) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x000838be) list_medium_line_x2_t3_g2_g

0xaee2,	// (0x0007f536) list_medium_line_x2_t3_g2_t1_ParamLimits

0xaee2,	// (0x0007f536) list_medium_line_x2_t3_g2_t1

0xaef8,	// (0x0007f54c) list_medium_line_x2_t3_g2_t2_ParamLimits

0xaef8,	// (0x0007f54c) list_medium_line_x2_t3_g2_t2

0xaf0a,	// (0x0007f55e) list_medium_line_x2_t3_g2_t3_ParamLimits

0xaf0a,	// (0x0007f55e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x000838c3) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x000838c3) list_medium_line_x2_t3_g2_t

0xae94,	// (0x0007f4e8) list_medium_line_x2_t4_g4_g1_ParamLimits

0xae94,	// (0x0007f4e8) list_medium_line_x2_t4_g4_g1

0xaf28,	// (0x0007f57c) list_medium_line_x2_t4_g4_g2_ParamLimits

0xaf28,	// (0x0007f57c) list_medium_line_x2_t4_g4_g2

0xaea0,	// (0x0007f4f4) list_medium_line_x2_t4_g4_g3_ParamLimits

0xaea0,	// (0x0007f4f4) list_medium_line_x2_t4_g4_g3

0xaf34,	// (0x0007f588) list_medium_line_x2_t4_g4_g4_ParamLimits

0xaf34,	// (0x0007f588) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x000838ca) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x000838ca) list_medium_line_x2_t4_g4_g

0x0d99,	// (0x000753ed) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0d99,	// (0x000753ed) list_medium_line_x2_t4_g4_t1

0x0db0,	// (0x00075404) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0db0,	// (0x00075404) list_medium_line_x2_t4_g4_t2

0x0dc5,	// (0x00075419) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0dc5,	// (0x00075419) list_medium_line_x2_t4_g4_t3

0xaf40,	// (0x0007f594) list_medium_line_x2_t4_g4_t4_ParamLimits

0xaf40,	// (0x0007f594) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x000838d3) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x000838d3) list_medium_line_x2_t4_g4_t

0xae94,	// (0x0007f4e8) list_medium_line_x2_t2_g4_g1_ParamLimits

0xae94,	// (0x0007f4e8) list_medium_line_x2_t2_g4_g1

0xaf28,	// (0x0007f57c) list_medium_line_x2_t2_g4_g2_ParamLimits

0xaf28,	// (0x0007f57c) list_medium_line_x2_t2_g4_g2

0xaea0,	// (0x0007f4f4) list_medium_line_x2_t2_g4_g3_ParamLimits

0xaea0,	// (0x0007f4f4) list_medium_line_x2_t2_g4_g3

0xaeac,	// (0x0007f500) list_medium_line_x2_t2_g4_g4_ParamLimits

0xaeac,	// (0x0007f500) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0008393a) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0008393a) list_medium_line_x2_t2_g4_g

0xaf52,	// (0x0007f5a6) list_medium_line_x2_t2_g4_t1_ParamLimits

0xaf52,	// (0x0007f5a6) list_medium_line_x2_t2_g4_t1

0xaecd,	// (0x0007f521) list_medium_line_x2_t2_g4_t2_ParamLimits

0xaecd,	// (0x0007f521) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00083943) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00083943) list_medium_line_x2_t2_g4_t

0xae94,	// (0x0007f4e8) list_medium_line_x2_t2_g3_g1_ParamLimits

0xae94,	// (0x0007f4e8) list_medium_line_x2_t2_g3_g1

0xaea0,	// (0x0007f4f4) list_medium_line_x2_t2_g3_g2_ParamLimits

0xaea0,	// (0x0007f4f4) list_medium_line_x2_t2_g3_g2

0xaeac,	// (0x0007f500) list_medium_line_x2_t2_g3_g3_ParamLimits

0xaeac,	// (0x0007f500) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x000838b0) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x000838b0) list_medium_line_x2_t2_g3_g

0xaf67,	// (0x0007f5bb) list_medium_line_x2_t2_g3_t1_ParamLimits

0xaf67,	// (0x0007f5bb) list_medium_line_x2_t2_g3_t1

0xaecd,	// (0x0007f521) list_medium_line_x2_t2_g3_t2_ParamLimits

0xaecd,	// (0x0007f521) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00083948) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00083948) list_medium_line_x2_t2_g3_t

0x3a32,	// (0x00078086) main_sp_fs_list_pane_ParamLimits

0x3a32,	// (0x00078086) main_sp_fs_list_pane

0x3a3e,	// (0x00078092) sp_fs_scroll_pane_ParamLimits

0x3a3e,	// (0x00078092) sp_fs_scroll_pane

0x0dd7,	// (0x0007542b) list_medium_line_x2_t3_t1

0x0de7,	// (0x0007543b) list_medium_line_x2_t3_t2

0xafaa,	// (0x0007f5fe) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00083993) list_medium_line_x2_t3_t

0x0df5,	// (0x00075449) list_medium_line_x3_t4_t1

0x0e05,	// (0x00075459) list_medium_line_x3_t4_t2

0xafb8,	// (0x0007f60c) list_medium_line_x3_t4_t3

0xafaa,	// (0x0007f5fe) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0008399a) list_medium_line_x3_t4_t

0x0e13,	// (0x00075467) list_medium_line_x4_t5_t1

0x0e23,	// (0x00075477) list_medium_line_x4_t5_t2

0xafb8,	// (0x0007f60c) list_medium_line_x4_t5_t3

0xafc6,	// (0x0007f61a) list_medium_line_x4_t5_t4

0xafaa,	// (0x0007f5fe) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x000839a3) list_medium_line_x4_t5_t

0xae94,	// (0x0007f4e8) list_medium_line_t4_g4_g1_ParamLimits

0xae94,	// (0x0007f4e8) list_medium_line_t4_g4_g1

0xaf34,	// (0x0007f588) list_medium_line_t4_g4_g2_ParamLimits

0xaf34,	// (0x0007f588) list_medium_line_t4_g4_g2

0xafd4,	// (0x0007f628) list_medium_line_t4_g4_g3_ParamLimits

0xafd4,	// (0x0007f628) list_medium_line_t4_g4_g3

0xaeac,	// (0x0007f500) list_medium_line_t4_g4_g4_ParamLimits

0xaeac,	// (0x0007f500) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x000839ae) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x000839ae) list_medium_line_t4_g4_g

0xafe0,	// (0x0007f634) list_medium_line_t4_g4_t1_ParamLimits

0xafe0,	// (0x0007f634) list_medium_line_t4_g4_t1

0xaff5,	// (0x0007f649) list_medium_line_t4_g4_t2_ParamLimits

0xaff5,	// (0x0007f649) list_medium_line_t4_g4_t2

0xb00b,	// (0x0007f65f) list_medium_line_t4_g4_t3_ParamLimits

0xb00b,	// (0x0007f65f) list_medium_line_t4_g4_t3

0xaecd,	// (0x0007f521) list_medium_line_t4_g4_t4_ParamLimits

0xaecd,	// (0x0007f521) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x000839b7) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x000839b7) list_medium_line_t4_g4_t

0x3d75,	// (0x000783c9) chi_dic_find_pane_g1

0x5d18,	// (0x0007a36c) main_tport_pane

0xc94b,	// (0x00080f9f) list_medium_line_plain_t1

0xc961,	// (0x00080fb5) list_medium_line_t2_g2_g1_ParamLimits

0xc961,	// (0x00080fb5) list_medium_line_t2_g2_g1

0xc96d,	// (0x00080fc1) list_medium_line_t2_g2_g2_ParamLimits

0xc96d,	// (0x00080fc1) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x0008406e) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x0008406e) list_medium_line_t2_g2_g

0x1031,	// (0x00075685) list_medium_line_t2_g2_t1_ParamLimits

0x1031,	// (0x00075685) list_medium_line_t2_g2_t1

0x104b,	// (0x0007569f) list_medium_line_t2_g2_t2_ParamLimits

0x104b,	// (0x0007569f) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x00084073) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x00084073) list_medium_line_t2_g2_t

0xcc8f,	// (0x000812e3) aid_sp_fs_list_icon_a_sm

0xe895,	// (0x00082ee9) aid_sp_fs_list_icon_d

0xcc97,	// (0x000812eb) aid_sp_fs_text_primary

0xcca0,	// (0x000812f4) aid_sp_fs_text_secondary

0xcca9,	// (0x000812fd) list_medium_line

0xcca9,	// (0x000812fd) list_medium_line_g2

0xcca9,	// (0x000812fd) list_medium_line_g3

0xcca9,	// (0x000812fd) list_medium_line_plain

0xcca9,	// (0x000812fd) list_medium_line_plain_t2

0xcca9,	// (0x000812fd) list_medium_line_plain_t3

0xcca9,	// (0x000812fd) list_medium_line_right_icon

0xcca9,	// (0x000812fd) list_medium_line_right_iconx2

0xcca9,	// (0x000812fd) list_medium_line_t2

0xcca9,	// (0x000812fd) list_medium_line_t2_g2

0xcca9,	// (0x000812fd) list_medium_line_t2_g3

0xcca9,	// (0x000812fd) list_medium_line_t2_right_icon

0xcca9,	// (0x000812fd) list_medium_line_t2_right_iconx2

0xcca9,	// (0x000812fd) list_medium_line_t3

0xcca9,	// (0x000812fd) list_medium_line_t3_g2

0xcca9,	// (0x000812fd) list_medium_line_t3_g3

0xcca9,	// (0x000812fd) list_medium_line_t3_right_iconx2

0xccb2,	// (0x00081306) list_medium_line_t4_g4

0xe9b2,	// (0x00083006) list_medium_line_x2

0xe9b2,	// (0x00083006) list_medium_line_x2_t2_g2

0xe9b2,	// (0x00083006) list_medium_line_x2_t2_g3

0xe9b2,	// (0x00083006) list_medium_line_x2_t2_g4

0xe9b2,	// (0x00083006) list_medium_line_x2_t3

0xe9b2,	// (0x00083006) list_medium_line_x2_t3_g2

0xe9b2,	// (0x00083006) list_medium_line_x2_t3_g3

0xe9b2,	// (0x00083006) list_medium_line_x2_t3_g4

0xe9b2,	// (0x00083006) list_medium_line_x2_t4_g2

0xe9b2,	// (0x00083006) list_medium_line_x2_t4_g4

0xccbb,	// (0x0008130f) list_medium_line_x3

0xccbb,	// (0x0008130f) list_medium_line_x3_t4

0xccbb,	// (0x0008130f) list_medium_line_x3_t4_g4

0xccb2,	// (0x00081306) list_medium_line_x4_t4

0xccb2,	// (0x00081306) list_medium_line_x4_t4_g7

0xccb2,	// (0x00081306) list_medium_line_x4_t5

0xccc4,	// (0x00081318) list_single_fs_dyc_pane_ParamLimits

0xccc4,	// (0x00081318) list_single_fs_dyc_pane

0xae94,	// (0x0007f4e8) list_medium_line_x4_t4_g7_g1_ParamLimits

0xae94,	// (0x0007f4e8) list_medium_line_x4_t4_g7_g1

0xd1b9,	// (0x0008180d) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd1b9,	// (0x0008180d) list_medium_line_x4_t4_g7_g2

0xd1c5,	// (0x00081819) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd1c5,	// (0x00081819) list_medium_line_x4_t4_g7_g3

0xd1d4,	// (0x00081828) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd1d4,	// (0x00081828) list_medium_line_x4_t4_g7_g4

0xd1e0,	// (0x00081834) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd1e0,	// (0x00081834) list_medium_line_x4_t4_g7_g5

0xd1ef,	// (0x00081843) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd1ef,	// (0x00081843) list_medium_line_x4_t4_g7_g6

0xd1fe,	// (0x00081852) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd1fe,	// (0x00081852) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x0008423e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x0008423e) list_medium_line_x4_t4_g7_g

0xd20a,	// (0x0008185e) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd20a,	// (0x0008185e) list_medium_line_x4_t4_g7_t1

0xd21f,	// (0x00081873) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd21f,	// (0x00081873) list_medium_line_x4_t4_g7_t2

0xd234,	// (0x00081888) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd234,	// (0x00081888) list_medium_line_x4_t4_g7_t3

0xd249,	// (0x0008189d) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd249,	// (0x0008189d) list_medium_line_x4_t4_g7_t4

0xd25b,	// (0x000818af) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd25b,	// (0x000818af) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x0008424d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x0008424d) list_medium_line_x4_t4_g7_t

0xd26d,	// (0x000818c1) list_single_dyc_row_pane_ParamLimits

0xd26d,	// (0x000818c1) list_single_dyc_row_pane

0x9ed2,	// (0x0007e526) call5_gesture_pane_ParamLimits

0x9ed2,	// (0x0007e526) call5_gesture_pane

0x9f28,	// (0x0007e57c) call5_windows_pane_ParamLimits

0x9f28,	// (0x0007e57c) call5_windows_pane

0x9fce,	// (0x0007e622) call5_swipe_1_pane_cp_ParamLimits

0x9fce,	// (0x0007e622) call5_swipe_1_pane_cp

0x9fda,	// (0x0007e62e) call5_swipe_2_pane_cp_ParamLimits

0x9fda,	// (0x0007e62e) call5_swipe_2_pane_cp

0x41e1,	// (0x00078835) call5_image_pane_cp

0x9fe6,	// (0x0007e63a) popup_call5_audio_first_window_cp_ParamLimits

0x9fe6,	// (0x0007e63a) popup_call5_audio_first_window_cp

0xd71f,	// (0x00081d73) call5_swipe_1_pane_g1_cp_ParamLimits

0xd71f,	// (0x00081d73) call5_swipe_1_pane_g1_cp

0xd75f,	// (0x00081db3) call5_swipe_1_pane_g2_cp

0xd738,	// (0x00081d8c) call5_swipe_1_pane_t1_cp_ParamLimits

0xd738,	// (0x00081d8c) call5_swipe_1_pane_t1_cp

0xd71f,	// (0x00081d73) call5_swipe_2_pane_g1_cp_ParamLimits

0xd71f,	// (0x00081d73) call5_swipe_2_pane_g1_cp

0xd767,	// (0x00081dbb) call5_swipe_2_pane_g2_cp

0xd76f,	// (0x00081dc3) call5_swipe_2_pane_t1_cp_ParamLimits

0xd76f,	// (0x00081dc3) call5_swipe_2_pane_t1_cp

0xe8e5,	// (0x00082f39) main_sp_fs_email_pane

0xd784,	// (0x00081dd8) main_sp_fs_listscroll_pane_te

0xd78d,	// (0x00081de1) popup_sp_fs_action_menu_pane_ParamLimits

0xd78d,	// (0x00081de1) popup_sp_fs_action_menu_pane

0xbc73,	// (0x000802c7) bg_sp_fs_ctrlbar_pane_g1

0xd7cf,	// (0x00081e23) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd7d8,	// (0x00081e2c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd7e1,	// (0x00081e35) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbc73,	// (0x000802c7) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x00084336) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xba56,	// (0x000800aa) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xba56,	// (0x000800aa) bg_sp_fs_ctrlbar_ddmenu_pane

0xd7ea,	// (0x00081e3e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xd7ea,	// (0x00081e3e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xd7f6,	// (0x00081e4a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xd7f6,	// (0x00081e4a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x0008433f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x0008433f) main_sp_fs_ctrlbar_ddmenu_pane_g

0xd802,	// (0x00081e56) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xd802,	// (0x00081e56) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd81c,	// (0x00081e70) list_medium_line_t2_right_icon_g1

0x1241,	// (0x00075895) list_medium_line_t2_right_icon_t1

0x1251,	// (0x000758a5) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x00084344) list_medium_line_t2_right_icon_t

0xb76b,	// (0x0007fdbf) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb76b,	// (0x0007fdbf) bg_sp_fs_ctrlbar_pane

0xa03a,	// (0x0007e68e) main_sp_fs_ctrlbar_button_pane_cp01

0xa044,	// (0x0007e698) main_sp_fs_ctrlbar_ddmenu_pane

0xd85c,	// (0x00081eb0) main_sp_fs_ctrlbar_pane_g1

0xd868,	// (0x00081ebc) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x00084349) main_sp_fs_ctrlbar_pane_g

0xd874,	// (0x00081ec8) main_sp_fs_ctrlbar_pane_t1

0x1263,	// (0x000758b7) main_sp_fs_ctrlbar_pane

0x1287,	// (0x000758db) main_sp_fs_listscroll_pane_te_cp01

0x12a7,	// (0x000758fb) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x12a7,	// (0x000758fb) popup_sp_fs_action_menu_pane_cp01

0xe8e5,	// (0x00082f39) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe8e5,	// (0x00082f39) bg_sp_fs_highlight_list_pane_cp01

0xd889,	// (0x00081edd) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd889,	// (0x00081edd) sp_fs_action_menu_list_gene_pane_g1

0xd898,	// (0x00081eec) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xd898,	// (0x00081eec) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfa,	// (0x0008434e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfa,	// (0x0008434e) sp_fs_action_menu_list_gene_pane_g

0xd8a5,	// (0x00081ef9) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd8a5,	// (0x00081ef9) sp_fs_action_menu_list_gene_pane_t1

0xd8bd,	// (0x00081f11) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd8bd,	// (0x00081f11) sp_fs_action_menu_list_gene_pane

0xd8dc,	// (0x00081f30) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xd8dc,	// (0x00081f30) popup_sp_fs_action_menu_bg_pane

0xd8ea,	// (0x00081f3e) sp_fs_action_menu_list_pane_ParamLimits

0xd8ea,	// (0x00081f3e) sp_fs_action_menu_list_pane

0xd90a,	// (0x00081f5e) sp_fs_scroll_pane_cp01_ParamLimits

0xd90a,	// (0x00081f5e) sp_fs_scroll_pane_cp01

0x12c1,	// (0x00075915) list_medium_line_plain_t2_t1

0x12d1,	// (0x00075925) list_medium_line_plain_t2_t2

0x0001,

0xfcff,	// (0x00084353) list_medium_line_plain_t2_t

0x12e1,	// (0x00075935) list_medium_line_plain_t3_t1

0x12f1,	// (0x00075945) list_medium_line_plain_t3_t2

0x12ff,	// (0x00075953) list_medium_line_plain_t3_t3

0x0002,

0xfd04,	// (0x00084358) list_medium_line_plain_t3_t

0xae94,	// (0x0007f4e8) list_medium_line_x2_t2_g2_g1_ParamLimits

0xae94,	// (0x0007f4e8) list_medium_line_x2_t2_g2_g1

0xaeac,	// (0x0007f500) list_medium_line_x2_t2_g2_g2_ParamLimits

0xaeac,	// (0x0007f500) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x000838be) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x000838be) list_medium_line_x2_t2_g2_g

0xafe0,	// (0x0007f634) list_medium_line_x2_t2_g2_t1_ParamLimits

0xafe0,	// (0x0007f634) list_medium_line_x2_t2_g2_t1

0xaecd,	// (0x0007f521) list_medium_line_x2_t2_g2_t2_ParamLimits

0xaecd,	// (0x0007f521) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0b,	// (0x0008435f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0b,	// (0x0008435f) list_medium_line_x2_t2_g2_t

0xae94,	// (0x0007f4e8) list_medium_line_x2_t4_g2_g1_ParamLimits

0xae94,	// (0x0007f4e8) list_medium_line_x2_t4_g2_g1

0xd930,	// (0x00081f84) list_medium_line_x2_t4_g2_g2_ParamLimits

0xd930,	// (0x00081f84) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd10,	// (0x00084364) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd10,	// (0x00084364) list_medium_line_x2_t4_g2_g

0x130d,	// (0x00075961) list_medium_line_x2_t4_g2_t1_ParamLimits

0x130d,	// (0x00075961) list_medium_line_x2_t4_g2_t1

0x1324,	// (0x00075978) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1324,	// (0x00075978) list_medium_line_x2_t4_g2_t2

0x1339,	// (0x0007598d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1339,	// (0x0007598d) list_medium_line_x2_t4_g2_t3

0xaecd,	// (0x0007f521) list_medium_line_x2_t4_g2_t4_ParamLimits

0xaecd,	// (0x0007f521) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x00084369) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x00084369) list_medium_line_x2_t4_g2_t

0xd942,	// (0x00081f96) list_medium_line_t3_right_iconx2_g1

0xd81c,	// (0x00081e70) list_medium_line_t3_right_iconx2_g2

0x134b,	// (0x0007599f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x00084372) list_medium_line_t3_right_iconx2_g

0x1355,	// (0x000759a9) list_medium_line_t3_right_iconx2_t1

0x1365,	// (0x000759b9) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x00084379) list_medium_line_t3_right_iconx2_t

0xae94,	// (0x0007f4e8) list_medium_line_x3_t4_g4_g1_ParamLimits

0xae94,	// (0x0007f4e8) list_medium_line_x3_t4_g4_g1

0xaea0,	// (0x0007f4f4) list_medium_line_x3_t4_g4_g2_ParamLimits

0xaea0,	// (0x0007f4f4) list_medium_line_x3_t4_g4_g2

0xaf34,	// (0x0007f588) list_medium_line_x3_t4_g4_g3_ParamLimits

0xaf34,	// (0x0007f588) list_medium_line_x3_t4_g4_g3

0xd94a,	// (0x00081f9e) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd94a,	// (0x00081f9e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x0008437e) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x0008437e) list_medium_line_x3_t4_g4_g

0x1373,	// (0x000759c7) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1373,	// (0x000759c7) list_medium_line_x3_t4_g4_t1

0x138a,	// (0x000759de) list_medium_line_x3_t4_g4_t2_ParamLimits

0x138a,	// (0x000759de) list_medium_line_x3_t4_g4_t2

0xd956,	// (0x00081faa) list_medium_line_x3_t4_g4_t3_ParamLimits

0xd956,	// (0x00081faa) list_medium_line_x3_t4_g4_t3

0xd96b,	// (0x00081fbf) list_medium_line_x3_t4_g4_t4_ParamLimits

0xd96b,	// (0x00081fbf) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x00084387) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x00084387) list_medium_line_x3_t4_g4_t

0x13a5,	// (0x000759f9) list_single_dyc_row_text_pane_t1_ParamLimits

0x13a5,	// (0x000759f9) list_single_dyc_row_text_pane_t1

0x13ee,	// (0x00075a42) list_single_dyc_row_text_pane_t2_ParamLimits

0x13ee,	// (0x00075a42) list_single_dyc_row_text_pane_t2

0xd988,	// (0x00081fdc) list_single_dyc_row_text_pane_t3_ParamLimits

0xd988,	// (0x00081fdc) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x00084390) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x00084390) list_single_dyc_row_text_pane_t

0xd99a,	// (0x00081fee) list_single_dyc_row_pane_g1_ParamLimits

0xd99a,	// (0x00081fee) list_single_dyc_row_pane_g1

0xd9a6,	// (0x00081ffa) list_single_dyc_row_pane_g2_ParamLimits

0xd9a6,	// (0x00081ffa) list_single_dyc_row_pane_g2

0xd9b2,	// (0x00082006) list_single_dyc_row_pane_g3_ParamLimits

0xd9b2,	// (0x00082006) list_single_dyc_row_pane_g3

0xd9be,	// (0x00082012) list_single_dyc_row_pane_g4_ParamLimits

0xd9be,	// (0x00082012) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x00084397) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x00084397) list_single_dyc_row_pane_g

0xd9ca,	// (0x0008201e) list_single_dyc_row_text_pane_ParamLimits

0xd9ca,	// (0x0008201e) list_single_dyc_row_text_pane

0xad28,	// (0x0007f37c) bg_sp_fs_scroll_pane

0xd9e9,	// (0x0008203d) thumb_sp_fs_scroll_pane

0xc961,	// (0x00080fb5) list_medium_line_g1_ParamLimits

0xc961,	// (0x00080fb5) list_medium_line_g1

0xd9f2,	// (0x00082046) list_medium_line_t1_ParamLimits

0xd9f2,	// (0x00082046) list_medium_line_t1

0xae94,	// (0x0007f4e8) list_medium_line_x2_g1_ParamLimits

0xae94,	// (0x0007f4e8) list_medium_line_x2_g1

0xaea0,	// (0x0007f4f4) list_medium_line_x2_g2_ParamLimits

0xaea0,	// (0x0007f4f4) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x000843a0) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x000843a0) list_medium_line_x2_g

0xda07,	// (0x0008205b) list_medium_line_x2_t1_ParamLimits

0xda07,	// (0x0008205b) list_medium_line_x2_t1

0xae94,	// (0x0007f4e8) list_medium_line_x3_g1_ParamLimits

0xae94,	// (0x0007f4e8) list_medium_line_x3_g1

0xaea0,	// (0x0007f4f4) list_medium_line_x3_g2_ParamLimits

0xaea0,	// (0x0007f4f4) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x000843a0) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x000843a0) list_medium_line_x3_g

0xda07,	// (0x0008205b) list_medium_line_x3_t1_ParamLimits

0xda07,	// (0x0008205b) list_medium_line_x3_t1

0xda1d,	// (0x00082071) thumb_sp_fs_scroll_pane_g1

0xda26,	// (0x0008207a) thumb_sp_fs_scroll_pane_g2

0xda2f,	// (0x00082083) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x000843a5) thumb_sp_fs_scroll_pane_g

0xda1d,	// (0x00082071) bg_sp_fs_scroll_pane_g1

0xda26,	// (0x0008207a) bg_sp_fs_scroll_pane_g2

0xda2f,	// (0x00082083) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x000843a5) bg_sp_fs_scroll_pane_g

0xae94,	// (0x0007f4e8) list_medium_line_x2_t3_g4_g1_ParamLimits

0xae94,	// (0x0007f4e8) list_medium_line_x2_t3_g4_g1

0xaf28,	// (0x0007f57c) list_medium_line_x2_t3_g4_g2_ParamLimits

0xaf28,	// (0x0007f57c) list_medium_line_x2_t3_g4_g2

0xaea0,	// (0x0007f4f4) list_medium_line_x2_t3_g4_g3_ParamLimits

0xaea0,	// (0x0007f4f4) list_medium_line_x2_t3_g4_g3

0xaeac,	// (0x0007f500) list_medium_line_x2_t3_g4_g4_ParamLimits

0xaeac,	// (0x0007f500) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0008393a) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0008393a) list_medium_line_x2_t3_g4_g

0x1448,	// (0x00075a9c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1448,	// (0x00075a9c) list_medium_line_x2_t3_g4_t1

0x1462,	// (0x00075ab6) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1462,	// (0x00075ab6) list_medium_line_x2_t3_g4_t2

0xaecd,	// (0x0007f521) list_medium_line_x2_t3_g4_t3_ParamLimits

0xaecd,	// (0x0007f521) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x000843ac) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x000843ac) list_medium_line_x2_t3_g4_t

0xc961,	// (0x00080fb5) list_medium_line_g2_g1_ParamLimits

0xc961,	// (0x00080fb5) list_medium_line_g2_g1

0xc96d,	// (0x00080fc1) list_medium_line_g2_g2_ParamLimits

0xc96d,	// (0x00080fc1) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x0008406e) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x0008406e) list_medium_line_g2_g

0xda38,	// (0x0008208c) list_medium_line_g2_t1_ParamLimits

0xda38,	// (0x0008208c) list_medium_line_g2_t1

0xc961,	// (0x00080fb5) list_medium_line_t3_g2_g1_ParamLimits

0xc961,	// (0x00080fb5) list_medium_line_t3_g2_g1

0xc96d,	// (0x00080fc1) list_medium_line_t3_g2_g2_ParamLimits

0xc96d,	// (0x00080fc1) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x0008406e) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x0008406e) list_medium_line_t3_g2_g

0x147b,	// (0x00075acf) list_medium_line_t3_g2_t1_ParamLimits

0x147b,	// (0x00075acf) list_medium_line_t3_g2_t1

0x1492,	// (0x00075ae6) list_medium_line_t3_g2_t2_ParamLimits

0x1492,	// (0x00075ae6) list_medium_line_t3_g2_t2

0x14a7,	// (0x00075afb) list_medium_line_t3_g2_t3_ParamLimits

0x14a7,	// (0x00075afb) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x000843b3) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x000843b3) list_medium_line_t3_g2_t

0xd81c,	// (0x00081e70) list_medium_line_right_icon_g1

0xda4d,	// (0x000820a1) list_medium_line_right_icon_t1

0xc961,	// (0x00080fb5) list_medium_line_t2_g1_ParamLimits

0xc961,	// (0x00080fb5) list_medium_line_t2_g1

0x14c0,	// (0x00075b14) list_medium_line_t2_t1_ParamLimits

0x14c0,	// (0x00075b14) list_medium_line_t2_t1

0x14da,	// (0x00075b2e) list_medium_line_t2_t2_ParamLimits

0x14da,	// (0x00075b2e) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x000843ba) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x000843ba) list_medium_line_t2_t

0xc961,	// (0x00080fb5) list_medium_line_t3_g1_ParamLimits

0xc961,	// (0x00080fb5) list_medium_line_t3_g1

0x14f3,	// (0x00075b47) list_medium_line_t3_t1_ParamLimits

0x14f3,	// (0x00075b47) list_medium_line_t3_t1

0x150d,	// (0x00075b61) list_medium_line_t3_t2_ParamLimits

0x150d,	// (0x00075b61) list_medium_line_t3_t2

0x1522,	// (0x00075b76) list_medium_line_t3_t3_ParamLimits

0x1522,	// (0x00075b76) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x000843bf) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x000843bf) list_medium_line_t3_t

0xc961,	// (0x00080fb5) list_medium_line_g3_g1_ParamLimits

0xc961,	// (0x00080fb5) list_medium_line_g3_g1

0xda5b,	// (0x000820af) list_medium_line_g3_g2_ParamLimits

0xda5b,	// (0x000820af) list_medium_line_g3_g2

0xc96d,	// (0x00080fc1) list_medium_line_g3_g3_ParamLimits

0xc96d,	// (0x00080fc1) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x000843c6) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x000843c6) list_medium_line_g3_g

0xda67,	// (0x000820bb) list_medium_line_g3_t1_ParamLimits

0xda67,	// (0x000820bb) list_medium_line_g3_t1

0xc961,	// (0x00080fb5) list_medium_line_t2_g3_g1_ParamLimits

0xc961,	// (0x00080fb5) list_medium_line_t2_g3_g1

0xda5b,	// (0x000820af) list_medium_line_t2_g3_g2_ParamLimits

0xda5b,	// (0x000820af) list_medium_line_t2_g3_g2

0xc96d,	// (0x00080fc1) list_medium_line_t2_g3_g3_ParamLimits

0xc96d,	// (0x00080fc1) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x000843c6) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x000843c6) list_medium_line_t2_g3_g

0x1537,	// (0x00075b8b) list_medium_line_t2_g3_t1_ParamLimits

0x1537,	// (0x00075b8b) list_medium_line_t2_g3_t1

0x154e,	// (0x00075ba2) list_medium_line_t2_g3_t2_ParamLimits

0x154e,	// (0x00075ba2) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x000843cd) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x000843cd) list_medium_line_t2_g3_t

0xc961,	// (0x00080fb5) list_medium_line_t3_g3_g1_ParamLimits

0xc961,	// (0x00080fb5) list_medium_line_t3_g3_g1

0xda5b,	// (0x000820af) list_medium_line_t3_g3_g2_ParamLimits

0xda5b,	// (0x000820af) list_medium_line_t3_g3_g2

0xc96d,	// (0x00080fc1) list_medium_line_t3_g3_g3_ParamLimits

0xc96d,	// (0x00080fc1) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x000843c6) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x000843c6) list_medium_line_t3_g3_g

0x1569,	// (0x00075bbd) list_medium_line_t3_g3_t1_ParamLimits

0x1569,	// (0x00075bbd) list_medium_line_t3_g3_t1

0x1582,	// (0x00075bd6) list_medium_line_t3_g3_t2_ParamLimits

0x1582,	// (0x00075bd6) list_medium_line_t3_g3_t2

0x1598,	// (0x00075bec) list_medium_line_t3_g3_t3_ParamLimits

0x1598,	// (0x00075bec) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x000843d2) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x000843d2) list_medium_line_t3_g3_t

0xd942,	// (0x00081f96) list_medium_line_right_iconx2_g1

0xd81c,	// (0x00081e70) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x000843d9) list_medium_line_right_iconx2_g

0xda7c,	// (0x000820d0) list_medium_line_right_iconx2_t1

0xd942,	// (0x00081f96) list_medium_line_t2_right_iconx2_g1

0xd81c,	// (0x00081e70) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x000843d9) list_medium_line_t2_right_iconx2_g

0x15b2,	// (0x00075c06) list_medium_line_t2_right_iconx2_t1

0x15c2,	// (0x00075c16) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x000843de) list_medium_line_t2_right_iconx2_t

0xda8a,	// (0x000820de) list_medium_line_x4_t4_t1

0x15d4,	// (0x00075c28) list_medium_line_x4_t4_t2

0x15e4,	// (0x00075c38) list_medium_line_x4_t4_t3

0x15f4,	// (0x00075c48) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x000843e3) list_medium_line_x4_t4_t

0xa091,	// (0x0007e6e5) tport_appsw_pane_ParamLimits

0xa091,	// (0x0007e6e5) tport_appsw_pane

0xa0a2,	// (0x0007e6f6) tport_contact_pane_ParamLimits

0xa0a2,	// (0x0007e6f6) tport_contact_pane

0xa0bb,	// (0x0007e70f) tport_listscroll_pane_ParamLimits

0xa0bb,	// (0x0007e70f) tport_listscroll_pane

0xa0d6,	// (0x0007e72a) cell_tport_appsw_pane_ParamLimits

0xa0d6,	// (0x0007e72a) cell_tport_appsw_pane

0xc6cf,	// (0x00080d23) tport_appsw_pane_g1_ParamLimits

0xc6cf,	// (0x00080d23) tport_appsw_pane_g1

0xda98,	// (0x000820ec) tport_contact_pane_g1

0xdaa1,	// (0x000820f5) tport_contact_pane_t1

0xdaaf,	// (0x00082103) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x000843ec) tport_contact_pane_t

0xdabd,	// (0x00082111) list_tport_pane

0xdac6,	// (0x0008211a) scroll_pane_cp_030

0xdad7,	// (0x0008212b) cell_tport_appsw_pane_g1

0xdae7,	// (0x0008213b) cell_tport_appsw_pane_t1

0xad28,	// (0x0007f37c) grid_highlight_pane_cp019

0xa116,	// (0x0007e76a) list_tport_double_graphic_pane_ParamLimits

0xa116,	// (0x0007e76a) list_tport_double_graphic_pane

0xe8e5,	// (0x00082f39) list_highlight_pane_cp023_ParamLimits

0xe8e5,	// (0x00082f39) list_highlight_pane_cp023

0xa123,	// (0x0007e777) list_tport_double_graphic_pane_g1_ParamLimits

0xa123,	// (0x0007e777) list_tport_double_graphic_pane_g1

0xa130,	// (0x0007e784) list_tport_double_graphic_pane_t1_ParamLimits

0xa130,	// (0x0007e784) list_tport_double_graphic_pane_t1

0xa145,	// (0x0007e799) list_tport_double_graphic_pane_t2_ParamLimits

0xa145,	// (0x0007e799) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x000843f8) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x000843f8) list_tport_double_graphic_pane_t

0xad28,	// (0x0007f37c) main_cale_note_pane

0x8429,	// (0x0007ca7d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8429,	// (0x0007ca7d) cell_vitu2_function_top_wide_pane_cp01

0x9ae1,	// (0x0007e135) wait_bar_pane_cp05_ParamLimits

0xad28,	// (0x0007f37c) listscroll_cmail_pane

0xdafd,	// (0x00082151) list_cmail_pane

0xa161,	// (0x0007e7b5) list_cmail_body_pane

0xa176,	// (0x0007e7ca) list_single_cmail_header_caption_pane

0xa18f,	// (0x0007e7e3) list_single_cmail_header_detail_pane_ParamLimits

0xa18f,	// (0x0007e7e3) list_single_cmail_header_detail_pane

0xa1b8,	// (0x0007e80c) list_single_cmail_header_caption_pane_t1

0x1604,	// (0x00075c58) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1604,	// (0x00075c58) list_single_cmail_header_detail_pane_g1

0xe8b3,	// (0x00082f07) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe8b3,	// (0x00082f07) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x000843fd) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x000843fd) list_single_cmail_header_detail_pane_g

0xdb2a,	// (0x0008217e) list_single_cmail_header_detail_pane_t1_ParamLimits

0xdb2a,	// (0x0008217e) list_single_cmail_header_detail_pane_t1

0xdb5c,	// (0x000821b0) list_single_cmail_header_editor_pane_bg_ParamLimits

0xdb5c,	// (0x000821b0) list_single_cmail_header_editor_pane_bg

0xdb6e,	// (0x000821c2) list_cmail_body_pane_g1

0xdb77,	// (0x000821cb) list_cmail_body_pane_t1

0xc70c,	// (0x00080d60) list_single_cmail_header_editor_pane_bg_g1

0x2d92,	// (0x000773e6) list_single_cmail_header_editor_pane_bg_g1_copy1

0xc71c,	// (0x00080d70) list_single_cmail_header_editor_pane_bg_g1_copy2

0xc714,	// (0x00080d68) list_single_cmail_header_editor_pane_bg_g1_copy3

0xc959,	// (0x00080fad) list_single_cmail_header_editor_pane_bg_g1_copy4

0xc73c,	// (0x00080d90) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xc72c,	// (0x00080d80) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xc734,	// (0x00080d88) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2d72,	// (0x000773c6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa1c8,	// (0x0007e81c) calenote_gesture_pane_ParamLimits

0xa1c8,	// (0x0007e81c) calenote_gesture_pane

0xa1e8,	// (0x0007e83c) calenote_window_pane_ParamLimits

0xa1e8,	// (0x0007e83c) calenote_window_pane

0xdb85,	// (0x000821d9) popup_note_window_cp01

0xa204,	// (0x0007e858) calenote_swipe_1_pane_ParamLimits

0xa204,	// (0x0007e858) calenote_swipe_1_pane

0x9fda,	// (0x0007e62e) calenote_swipe_2_pane_ParamLimits

0x9fda,	// (0x0007e62e) calenote_swipe_2_pane

0xd71f,	// (0x00081d73) calenote_swipe_1_pane_g1_ParamLimits

0xd71f,	// (0x00081d73) calenote_swipe_1_pane_g1

0xd72c,	// (0x00081d80) calenote_swipe_1_pane_g2_ParamLimits

0xd72c,	// (0x00081d80) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x0008432c) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x0008432c) calenote_swipe_1_pane_g

0xdb97,	// (0x000821eb) calenote_swipe_1_pane_t1_ParamLimits

0xdb97,	// (0x000821eb) calenote_swipe_1_pane_t1

0xd71f,	// (0x00081d73) calenote_swipe_2_pane_g1_ParamLimits

0xd71f,	// (0x00081d73) calenote_swipe_2_pane_g1

0xdbb6,	// (0x0008220a) calenote_swipe_2_pane_g2_ParamLimits

0xdbb6,	// (0x0008220a) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x00084409) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x00084409) calenote_swipe_2_pane_g

0xdbc2,	// (0x00082216) calenote_swipe_2_pane_t1_ParamLimits

0xdbc2,	// (0x00082216) calenote_swipe_2_pane_t1

0xad28,	// (0x0007f37c) main_mup_navstr_pane

0x70c0,	// (0x0007b714) main_mup3_pane_t7_ParamLimits

0x70c0,	// (0x0007b714) main_mup3_pane_t7

0xe56a,	// (0x00082bbe) main_mp4_pane_g6_ParamLimits

0xe56a,	// (0x00082bbe) main_mp4_pane_g6

0xe70e,	// (0x00082d62) main_image3_pane_t4_ParamLimits

0xe70e,	// (0x00082d62) main_image3_pane_t4

0xa219,	// (0x0007e86d) popup_navstr_preview_pane_ParamLimits

0xa219,	// (0x0007e86d) popup_navstr_preview_pane

0xa22d,	// (0x0007e881) scroll_navstr_pane_ParamLimits

0xa22d,	// (0x0007e881) scroll_navstr_pane

0xad28,	// (0x0007f37c) bg_popup_preview_window_pane_cp04

0xdbe9,	// (0x0008223d) popup_navstr_preview_pane_t1

0xa241,	// (0x0007e895) scroll_navstr_pane_g1_ParamLimits

0xa241,	// (0x0007e895) scroll_navstr_pane_g1

0xa255,	// (0x0007e8a9) scroll_navstr_pane_t1_ParamLimits

0xa255,	// (0x0007e8a9) scroll_navstr_pane_t1

0xdb8e,	// (0x000821e2) bg_button_pane_cp014

0xdb8e,	// (0x000821e2) bg_button_pane_cp030

0x11e7,	// (0x0007583b) list_double_fisheye_pane_g4_ParamLimits

0x11e7,	// (0x0007583b) list_double_fisheye_pane_g4

0x11f3,	// (0x00075847) list_double_fisheye_pane_g5_ParamLimits

0x11f3,	// (0x00075847) list_double_fisheye_pane_g5

0xdb05,	// (0x00082159) sp_fs_scroll_pane_cp03

0xd85c,	// (0x00081eb0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xd868,	// (0x00081ebc) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x00084349) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd874,	// (0x00081ec8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa157,	// (0x0007e7ab) sp_fs_scroll_pane_cp02

0x1f9f,	// (0x000765f3) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1f9f,	// (0x000765f3) popup_sp_fs_calendar_preview_list_single_pane

0xad28,	// (0x0007f37c) main_cam6_pano_pane

0xe8e5,	// (0x00082f39) main_mup3_pane_ParamLimits

0xad28,	// (0x0007f37c) main_phacti_pane

0x99b4,	// (0x0007e008) bg_button_pane_cp11

0x99ce,	// (0x0007e022) main_mobtv_info_pane_g2_ParamLimits

0x99ce,	// (0x0007e022) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x000842a9) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x000842a9) main_mobtv_info_pane_g

0x9bab,	// (0x0007e1ff) sc_clock_pane_t5_ParamLimits

0x9bab,	// (0x0007e1ff) sc_clock_pane_t5

0x9d57,	// (0x0007e3ab) main_radioblah_pane_g1_ParamLimits

0xd66b,	// (0x00081cbf) main_radioblah_pane_t3_ParamLimits

0xd66b,	// (0x00081cbf) main_radioblah_pane_t3

0xd683,	// (0x00081cd7) main_radioblah_pane_t4_ParamLimits

0xd683,	// (0x00081cd7) main_radioblah_pane_t4

0x9d7f,	// (0x0007e3d3) main_radioblah_text_pane_ParamLimits

0x9d7f,	// (0x0007e3d3) main_radioblah_text_pane

0x9d91,	// (0x0007e3e5) main_radioblah_info_pane_g1_ParamLimits

0x9e2c,	// (0x0007e480) main_radioblah_info_pane_t4_ParamLimits

0x9e2c,	// (0x0007e480) main_radioblah_info_pane_t4

0xe8e5,	// (0x00082f39) main_sp_fs_calendar_pane

0xa26b,	// (0x0007e8bf) main_phacti_pane_g1

0xa273,	// (0x0007e8c7) phacti_note_pane_ParamLimits

0xa273,	// (0x0007e8c7) phacti_note_pane

0xdc00,	// (0x00082254) phacti_term_pane_ParamLimits

0xdc00,	// (0x00082254) phacti_term_pane

0xdc15,	// (0x00082269) phacti_note_pane_t1_ParamLimits

0xdc15,	// (0x00082269) phacti_note_pane_t1

0xdc2c,	// (0x00082280) phacti_term_pane_g1

0xdc34,	// (0x00082288) phacti_term_pane_t1_ParamLimits

0xdc34,	// (0x00082288) phacti_term_pane_t1

0xdc5e,	// (0x000822b2) popup_sp_fs_calendar_preview_list_single_pane_g1

0xdc66,	// (0x000822ba) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x00084413) popup_sp_fs_calendar_preview_list_single_pane_g

0xdc6e,	// (0x000822c2) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xdc6e,	// (0x000822c2) popup_sp_fs_calendar_preview_list_single_pane_t1

0xdc84,	// (0x000822d8) aid_popup_sp_fs_bg_corner_pane

0xbc73,	// (0x000802c7) popup_sp_fs_calendar_preview_bg_pane_g1

0xad28,	// (0x0007f37c) popup_sp_fs_calendar_preview_bg_pane

0xdc8c,	// (0x000822e0) popup_sp_fs_calendar_preview_list_pane

0xe8e5,	// (0x00082f39) bg_main_sp_fs_cale_pane_ParamLimits

0xe8e5,	// (0x00082f39) bg_main_sp_fs_cale_pane

0xdc94,	// (0x000822e8) listscroll_cale_mrui_pane_ParamLimits

0xdc94,	// (0x000822e8) listscroll_cale_mrui_pane

0xdca8,	// (0x000822fc) listscroll_sp_fs_schedule_track_pane

0xdcb1,	// (0x00082305) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xdcb1,	// (0x00082305) main_sp_fs_ctrlbar_pane_cp01

0xdcc2,	// (0x00082316) main_sp_fs_ribbon_pane

0xdcca,	// (0x0008231e) popup_sp_fs_cale_preview_window

0xa2ce,	// (0x0007e922) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa2ce,	// (0x0007e922) list_single_sp_fs_schedule_track_pane

0xe8e5,	// (0x00082f39) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe8e5,	// (0x00082f39) bg_sp_fs_highlight_list_pane_cp03

0xa2e3,	// (0x0007e937) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa2e3,	// (0x0007e937) list_single_sp_fs_schedule_track_pane_g1

0xa2ef,	// (0x0007e943) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa2ef,	// (0x0007e943) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x00084418) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x00084418) list_single_sp_fs_schedule_track_pane_g

0xa2fb,	// (0x0007e94f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa2fb,	// (0x0007e94f) list_single_sp_fs_schedule_track_pane_t1

0xa315,	// (0x0007e969) sp_fs_schedule_track_pane_ParamLimits

0xa315,	// (0x0007e969) sp_fs_schedule_track_pane

0xdcdc,	// (0x00082330) sp_fs_schedule_track_pane_g1

0xdce4,	// (0x00082338) sp_fs_schedule_track_pane_g2

0xdcec,	// (0x00082340) sp_fs_schedule_track_pane_g3

0xdcf4,	// (0x00082348) sp_fs_schedule_track_pane_g4

0xdcfc,	// (0x00082350) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x0008441d) sp_fs_schedule_track_pane_g

0xc70c,	// (0x00080d60) bg_sp_fs_schedule_viewer_highlight_g1

0x2d92,	// (0x000773e6) bg_sp_fs_schedule_viewer_highlight_g2

0xc714,	// (0x00080d68) bg_sp_fs_schedule_viewer_highlight_g3

0xc71c,	// (0x00080d70) bg_sp_fs_schedule_viewer_highlight_g4

0xc959,	// (0x00080fad) bg_sp_fs_schedule_viewer_highlight_g5

0xc72c,	// (0x00080d80) bg_sp_fs_schedule_viewer_highlight_g6

0xc734,	// (0x00080d88) bg_sp_fs_schedule_viewer_highlight_g7

0xc73c,	// (0x00080d90) bg_sp_fs_schedule_viewer_highlight_g8

0x2d72,	// (0x000773c6) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x00084428) bg_sp_fs_schedule_viewer_highlight_g

0xad28,	// (0x0007f37c) bg_main_sp_fs_ribbon_pane

0xa326,	// (0x0007e97a) main_sp_fs_ribbon_pane_g1

0xdd04,	// (0x00082358) main_sp_fs_ribbon_pane_t1

0xa32f,	// (0x0007e983) main_sp_fs_ribbon_pane_t2

0xdd13,	// (0x00082367) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x0008443b) main_sp_fs_ribbon_pane_t

0xdd22,	// (0x00082376) main_sp_fs_ribbon_scheduler_pane

0xdd2a,	// (0x0008237e) bg_main_sp_fs_ribbon_pane_g1

0xdd33,	// (0x00082387) bg_main_sp_fs_ribbon_pane_g2

0xdd3c,	// (0x00082390) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x00084442) bg_main_sp_fs_ribbon_pane_g

0xdd44,	// (0x00082398) main_sp_fs_ribbon_scheduler_pane_g1

0xdd4d,	// (0x000823a1) main_sp_fs_ribbon_scheduler_pane_g2

0xdd56,	// (0x000823aa) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x00084449) main_sp_fs_ribbon_scheduler_pane_g

0xdd5f,	// (0x000823b3) list_cale_mrui_pane

0xa33e,	// (0x0007e992) sp_fs_scroll_pane_cp07_ParamLimits

0xa33e,	// (0x0007e992) sp_fs_scroll_pane_cp07

0xa352,	// (0x0007e9a6) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa352,	// (0x0007e9a6) bg_sp_fs_schedule_viewer_highlight

0xdd68,	// (0x000823bc) list_single_sp_fs_schedule_track_pane_cp01

0xdd70,	// (0x000823c4) list_sp_fs_schedule_track_pane

0xdd78,	// (0x000823cc) sp_fs_scroll_pane_cp06_ParamLimits

0xdd78,	// (0x000823cc) sp_fs_scroll_pane_cp06

0xbc73,	// (0x000802c7) bgmain_sp_fs_calendar_pane_g1

0x1642,	// (0x00075c96) list_single_cale_mrui_pane_ParamLimits

0x1642,	// (0x00075c96) list_single_cale_mrui_pane

0xdd8a,	// (0x000823de) list_single_cale_mrui_row_pane_ParamLimits

0xdd8a,	// (0x000823de) list_single_cale_mrui_row_pane

0xdd97,	// (0x000823eb) list_single_cale_mrui_row_pane_g1_ParamLimits

0xdd97,	// (0x000823eb) list_single_cale_mrui_row_pane_g1

0xddcf,	// (0x00082423) list_single_cale_mrui_row_pane_t1_ParamLimits

0xddcf,	// (0x00082423) list_single_cale_mrui_row_pane_t1

0x1664,	// (0x00075cb8) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1664,	// (0x00075cb8) list_single_cale_mrui_row_pane_t2

0xdde1,	// (0x00082435) list_single_cale_mrui_row_pane_t3_ParamLimits

0xdde1,	// (0x00082435) list_single_cale_mrui_row_pane_t3

0xde10,	// (0x00082464) list_single_cale_mrui_row_pane_t4_ParamLimits

0xde10,	// (0x00082464) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x00084455) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x00084455) list_single_cale_mrui_row_pane_t

0x16cc,	// (0x00075d20) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x16cc,	// (0x00075d20) list_single_cmail_header_editor_pane_bg_cp01

0x16f2,	// (0x00075d46) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x16f2,	// (0x00075d46) list_single_cmail_header_editor_pane_bg_cp02

0xa362,	// (0x0007e9b6) main_radioblah_text_pane_t1_ParamLimits

0xa362,	// (0x0007e9b6) main_radioblah_text_pane_t1

0xde3f,	// (0x00082493) cam6_indi_pane_cp01

0xde47,	// (0x0008249b) cam6_mode_pane_cp01

0xde4f,	// (0x000824a3) cam6_pano_pane

0xde58,	// (0x000824ac) cam6_zoom_pane_cp01

0xde60,	// (0x000824b4) cam6_pano_image_pane

0xde6b,	// (0x000824bf) cam6_pano_pane_g1

0xd505,	// (0x00081b59) cam6_pano_pane_g2

0xde74,	// (0x000824c8) cam6_pano_pane_g3

0xde7d,	// (0x000824d1) cam6_pano_pane_g4

0xc231,	// (0x00080885) cam6_pano_pane_g5

0xde86,	// (0x000824da) cam6_pano_pane_g6

0xde90,	// (0x000824e4) cam6_pano_pane_g7

0xde98,	// (0x000824ec) cam6_pano_pane_g8

0xdea1,	// (0x000824f5) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x0008445e) cam6_pano_pane_g

0xad28,	// (0x0007f37c) main_browser_tag_pane

0xdbe1,	// (0x00082235) grid_navstr_albumart_pane

0xdeac,	// (0x00082500) cell_navstr_albumart_pane_ParamLimits

0xdeac,	// (0x00082500) cell_navstr_albumart_pane

0x475c,	// (0x00078db0) cell_navstr_albumart_pane_g1

0xb580,	// (0x0007fbd4) cell_navstr_albumart_pane_g2

0xb590,	// (0x0007fbe4) cell_navstr_albumart_pane_g3

0xb588,	// (0x0007fbdc) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x00084471) cell_navstr_albumart_pane_g

0xa37d,	// (0x0007e9d1) bt_list_pane_ParamLimits

0xa37d,	// (0x0007e9d1) bt_list_pane

0xa392,	// (0x0007e9e6) bt_list_pane_t1

0xa3a1,	// (0x0007e9f5) bt_list_pane_t2

0x0001,

0xfe26,	// (0x0008447a) bt_list_pane_t

0xad28,	// (0x0007f37c) main_cale_prevew_pane

0xa3b0,	// (0x0007ea04) popup_cale_preview_window_ParamLimits

0xa3b0,	// (0x0007ea04) popup_cale_preview_window

0xe8e5,	// (0x00082f39) bg_popup_preview_window_pane_cp05_ParamLimits

0xe8e5,	// (0x00082f39) bg_popup_preview_window_pane_cp05

0xdece,	// (0x00082522) list_cale_preview_pane_ParamLimits

0xdece,	// (0x00082522) list_cale_preview_pane

0xa3c7,	// (0x0007ea1b) list_double_cale_preview_pane_ParamLimits

0xa3c7,	// (0x0007ea1b) list_double_cale_preview_pane

0xa3d9,	// (0x0007ea2d) list_single_cale_preview_pane_ParamLimits

0xa3d9,	// (0x0007ea2d) list_single_cale_preview_pane

0xa3ed,	// (0x0007ea41) list_single_cale_preview_pane_g1

0xa3f5,	// (0x0007ea49) list_single_cale_preview_pane_t1_ParamLimits

0xa3f5,	// (0x0007ea49) list_single_cale_preview_pane_t1

0xa40a,	// (0x0007ea5e) list_double_cale_preview_pane_g1

0xa412,	// (0x0007ea66) list_double_cale_preview_pane_t1_ParamLimits

0xa412,	// (0x0007ea66) list_double_cale_preview_pane_t1

0xa427,	// (0x0007ea7b) list_double_cale_preview_pane_t2_ParamLimits

0xa427,	// (0x0007ea7b) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x0008447f) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x0008447f) list_double_cale_preview_pane_t

0xad28,	// (0x0007f37c) main_ezdial_pane

0xe8e5,	// (0x00082f39) main_sp_fs_email_pane_ParamLimits

0x9ff2,	// (0x0007e646) cmail_ddmenu_btn01_pane_ParamLimits

0x9ff2,	// (0x0007e646) cmail_ddmenu_btn01_pane

0xa005,	// (0x0007e659) cmail_ddmenu_btn02_pane_ParamLimits

0xa005,	// (0x0007e659) cmail_ddmenu_btn02_pane

0xa028,	// (0x0007e67c) cmail_ddmenu_btn03_pane_ParamLimits

0xa028,	// (0x0007e67c) cmail_ddmenu_btn03_pane

0x1263,	// (0x000758b7) main_sp_fs_ctrlbar_pane_ParamLimits

0x1287,	// (0x000758db) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa161,	// (0x0007e7b5) list_cmail_body_pane_ParamLimits

0xdb14,	// (0x00082168) bg_button_pane_cp12

0xdb1d,	// (0x00082171) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdb1d,	// (0x00082171) list_single_cmail_header_detail_pane_g3

0x161c,	// (0x00075c70) list_single_cmail_header_detail_pane_t2_ParamLimits

0x161c,	// (0x00075c70) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x00084404) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x00084404) list_single_cmail_header_detail_pane_t

0xdc49,	// (0x0008229d) phacti_term_pane_t2_ParamLimits

0xdc49,	// (0x0008229d) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x0008440e) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x0008440e) phacti_term_pane_t

0xdeda,	// (0x0008252e) aid_size_list_single_double

0xa43f,	// (0x0007ea93) popup_ezdial_listscroll_window

0xa45b,	// (0x0007eaaf) popup_number_entry_window_cp01

0x41e1,	// (0x00078835) bg_popup_call_pane_cp09

0xdee6,	// (0x0008253a) ezdial_list_pane

0xdeee,	// (0x00082542) scroll_pane_cp23

0xb76b,	// (0x0007fdbf) bg_button_pane_cp028_ParamLimits

0xb76b,	// (0x0007fdbf) bg_button_pane_cp028

0xa469,	// (0x0007eabd) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa469,	// (0x0007eabd) cmail_ddmenu_btn01_pane_g1

0xa475,	// (0x0007eac9) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa475,	// (0x0007eac9) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x00084484) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x00084484) cmail_ddmenu_btn01_pane_g

0xdef6,	// (0x0008254a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xdef6,	// (0x0008254a) cmail_ddmenu_btn01_pane_t1

0xb76b,	// (0x0007fdbf) bg_button_pane_cp029_ParamLimits

0xb76b,	// (0x0007fdbf) bg_button_pane_cp029

0xa481,	// (0x0007ead5) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa481,	// (0x0007ead5) cmail_ddmenu_btn02_pane_g1

0xa499,	// (0x0007eaed) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa499,	// (0x0007eaed) cmail_ddmenu_btn02_pane_t1

0xe8e5,	// (0x00082f39) bg_button_pane_cp031_ParamLimits

0xe8e5,	// (0x00082f39) bg_button_pane_cp031

0xa481,	// (0x0007ead5) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa481,	// (0x0007ead5) cmail_ddmenu_btn03_pane_g1

0xa499,	// (0x0007eaed) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa499,	// (0x0007eaed) cmail_ddmenu_btn03_pane_t1

0x7c3d,	// (0x0007c291) cell_dialer2_keypad_pane_t1_ParamLimits

0x7c57,	// (0x0007c2ab) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7c57,	// (0x0007c2ab) cell_dialer2_keypad_pane_t1_copy1

0x9836,	// (0x0007de8a) ncimui_group_button_pane

0xe8e5,	// (0x00082f39) main_sp_fs_calendar_pane_ParamLimits

0xa176,	// (0x0007e7ca) list_single_cmail_header_caption_pane_ParamLimits

0xe9c9,	// (0x0008301d) aid_recal_txt_sm_pane

0xad28,	// (0x0007f37c) mian_recal_day_pane

0xdcca,	// (0x0008231e) popup_sp_fs_cale_preview_window_ParamLimits

0xad28,	// (0x0007f37c) list_recal_day_pane

0xdf24,	// (0x00082578) list_single_recal_day_pane_ParamLimits

0xdf24,	// (0x00082578) list_single_recal_day_pane

0xdf36,	// (0x0008258a) list_single_recal_day_pane_g1_ParamLimits

0xdf36,	// (0x0008258a) list_single_recal_day_pane_g1

0xdf42,	// (0x00082596) list_single_recal_day_pane_g2_ParamLimits

0xdf42,	// (0x00082596) list_single_recal_day_pane_g2

0xdf51,	// (0x000825a5) list_single_recal_day_pane_g3_ParamLimits

0xdf51,	// (0x000825a5) list_single_recal_day_pane_g3

0xa4bd,	// (0x0007eb11) list_single_recal_day_pane_g4_ParamLimits

0xa4bd,	// (0x0007eb11) list_single_recal_day_pane_g4

0xdf5d,	// (0x000825b1) list_single_recal_day_pane_g5_ParamLimits

0xdf5d,	// (0x000825b1) list_single_recal_day_pane_g5

0xdf6c,	// (0x000825c0) list_single_recal_day_pane_g6_ParamLimits

0xdf6c,	// (0x000825c0) list_single_recal_day_pane_g6

0x0005,

0xfe3f,	// (0x00084493) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x00084493) list_single_recal_day_pane_g

0xdf78,	// (0x000825cc) list_single_recal_day_pane_t1

0xdf86,	// (0x000825da) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x000844a0) list_single_recal_day_pane_t

0xa4d0,	// (0x0007eb24) ncimui_query_button_pane_ParamLimits

0xa4d0,	// (0x0007eb24) ncimui_query_button_pane

0xa4e0,	// (0x0007eb34) ncimui_query_button_pane_t1_ParamLimits

0xa4e0,	// (0x0007eb34) ncimui_query_button_pane_t1

0xdf94,	// (0x000825e8) ncimui_query_button_pane_t2_ParamLimits

0xdf94,	// (0x000825e8) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x000844a5) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x000844a5) ncimui_query_button_pane_t

0xa4f3,	// (0x0007eb47) query_button_pane_ParamLimits

0xa4f3,	// (0x0007eb47) query_button_pane

0xad28,	// (0x0007f37c) bg_button_pane_cp0028

0xdfa7,	// (0x000825fb) query_button_pane_t1

0x5d18,	// (0x0007a36c) main_tport_pane_ParamLimits

0xa04e,	// (0x0007e6a2) bg_popup_window_pane_cp01_ParamLimits

0xa04e,	// (0x0007e6a2) bg_popup_window_pane_cp01

0xa068,	// (0x0007e6bc) heading_pane_cp08_ParamLimits

0xa068,	// (0x0007e6bc) heading_pane_cp08

0xa07c,	// (0x0007e6d0) heading_pane_cp07_ParamLimits

0xa07c,	// (0x0007e6d0) heading_pane_cp07

0xdad7,	// (0x0008212b) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x000843f1) cell_tport_appsw_pane_g

0x0e49,	// (0x0007549d) input_candi_list_open_g1

0x386c,	// (0x00077ec0) list_cale_time_pane_g6_ParamLimits

0x386c,	// (0x00077ec0) list_cale_time_pane_g6

0x6ae1,	// (0x0007b135) aid_size_touch_calib_1_ParamLimits

0x6ae1,	// (0x0007b135) aid_size_touch_calib_1

0x6aed,	// (0x0007b141) aid_size_touch_calib_2_ParamLimits

0x6aed,	// (0x0007b141) aid_size_touch_calib_2

0x6b03,	// (0x0007b157) aid_size_touch_calib_3_ParamLimits

0x6b03,	// (0x0007b157) aid_size_touch_calib_3

0x6b21,	// (0x0007b175) aid_size_touch_calib_4_ParamLimits

0x6b21,	// (0x0007b175) aid_size_touch_calib_4

0x6b37,	// (0x0007b18b) main_touch_calib_button_group_pane_ParamLimits

0x6b37,	// (0x0007b18b) main_touch_calib_button_group_pane

0x6b4f,	// (0x0007b1a3) main_touch_calib_pane_g1_ParamLimits

0x6b5b,	// (0x0007b1af) main_touch_calib_pane_g2_ParamLimits

0x6b67,	// (0x0007b1bb) main_touch_calib_pane_g3_ParamLimits

0x6b73,	// (0x0007b1c7) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x00083dc9) main_touch_calib_pane_g_ParamLimits

0x6b7f,	// (0x0007b1d3) main_touch_calib_pane_t1_ParamLimits

0x6b99,	// (0x0007b1ed) main_touch_calib_pane_t2_ParamLimits

0x6bb3,	// (0x0007b207) main_touch_calib_pane_t3_ParamLimits

0x6bc7,	// (0x0007b21b) main_touch_calib_pane_t4_ParamLimits

0x6bdb,	// (0x0007b22f) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x00083dd2) main_touch_calib_pane_t_ParamLimits

0xc018,	// (0x0008066c) list_single_fp_cale_pane_g3_ParamLimits

0xc018,	// (0x0008066c) list_single_fp_cale_pane_g3

0xe8e5,	// (0x00082f39) bg_button_pane_cp012_ParamLimits

0xe8e5,	// (0x00082f39) bg_vkb2_func_pane_cp03_ParamLimits

0x8c09,	// (0x0007d25d) cell_vitu2_function_top_pane_g1_ParamLimits

0xe8e5,	// (0x00082f39) bg_vkb2_func_pane_cp04_ParamLimits

0x97d6,	// (0x0007de2a) main_ncimui_button_group_pane_ParamLimits

0x97d6,	// (0x0007de2a) main_ncimui_button_group_pane

0x9824,	// (0x0007de78) main_ncimui_pane_t3_ParamLimits

0x9824,	// (0x0007de78) main_ncimui_pane_t3

0xdbf7,	// (0x0008224b) phacti_button_group_pane

0xdeda,	// (0x0008252e) aid_size_list_single_double_ParamLimits

0xa43f,	// (0x0007ea93) popup_ezdial_listscroll_window_ParamLimits

0xa45b,	// (0x0007eaaf) popup_number_entry_window_cp01_ParamLimits

0xa506,	// (0x0007eb5a) phacti_button_pane_ParamLimits

0xa506,	// (0x0007eb5a) phacti_button_pane

0xad28,	// (0x0007f37c) bg_button_pane_cp14

0xdfb5,	// (0x00082609) phacti_button_pane_t1

0xa517,	// (0x0007eb6b) main_touch_calib_button_pane_ParamLimits

0xa517,	// (0x0007eb6b) main_touch_calib_button_pane

0xf097,	// (0x000836eb) bg_button_pane_cp18_ParamLimits

0xf097,	// (0x000836eb) bg_button_pane_cp18

0xdfc3,	// (0x00082617) main_touch_calib_button_pane_t1_ParamLimits

0xdfc3,	// (0x00082617) main_touch_calib_button_pane_t1

0xdfd9,	// (0x0008262d) main_touch_calib_button_pane_t2_ParamLimits

0xdfd9,	// (0x0008262d) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x000844aa) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x000844aa) main_touch_calib_button_pane_t

0xad28,	// (0x0007f37c) cell_ncimui_button_pane

0xad28,	// (0x0007f37c) bg_button_pane_cp032

0xdff7,	// (0x0008264b) cell_ncimui_button_pane_t1

0xe6ee,	// (0x00082d42) image3_infobar_pane_ParamLimits

0xe6ee,	// (0x00082d42) image3_infobar_pane

0x9bd7,	// (0x0007e22b) fs_bigclock_status_pane_ParamLimits

0x9bd7,	// (0x0007e22b) fs_bigclock_status_pane

0x9be4,	// (0x0007e238) main_fs_bigclock_clock_pane_ParamLimits

0x9be4,	// (0x0007e238) main_fs_bigclock_clock_pane

0x9bf7,	// (0x0007e24b) main_fs_bigclock_indi_pane_ParamLimits

0x9bf7,	// (0x0007e24b) main_fs_bigclock_indi_pane

0x9c12,	// (0x0007e266) main_fs_bigclock_swipe_pane_ParamLimits

0x9c12,	// (0x0007e266) main_fs_bigclock_swipe_pane

0xad28,	// (0x0007f37c) main_fs_clock_dumped_data

0x9c35,	// (0x0007e289) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x9c35,	// (0x0007e289) list_single_fs_bigclock_indicator_pane_g1

0x9c53,	// (0x0007e2a7) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x9c53,	// (0x0007e2a7) list_single_fs_bigclock_indicator_pane_g2

0x9c6d,	// (0x0007e2c1) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x9c6d,	// (0x0007e2c1) list_single_fs_bigclock_indicator_pane_g3

0x9c87,	// (0x0007e2db) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x9c87,	// (0x0007e2db) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x000842dd) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x000842dd) list_single_fs_bigclock_indicator_pane_g

0x9cad,	// (0x0007e301) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x9cad,	// (0x0007e301) list_single_fs_bigclock_indicator_pane_t1

0x9cd5,	// (0x0007e329) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x9cd5,	// (0x0007e329) list_single_fs_bigclock_indicator_pane_t2

0x9cfd,	// (0x0007e351) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9cfd,	// (0x0007e351) list_single_fs_bigclock_indicator_pane_t3

0x9d25,	// (0x0007e379) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x9d25,	// (0x0007e379) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x000842e8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x000842e8) list_single_fs_bigclock_indicator_pane_t

0xe005,	// (0x00082659) image3_infobar_fav_pane_ParamLimits

0xe005,	// (0x00082659) image3_infobar_fav_pane

0xe015,	// (0x00082669) image3_infobar_loc_pane_ParamLimits

0xe015,	// (0x00082669) image3_infobar_loc_pane

0xe029,	// (0x0008267d) image3_infobar_time_pane_ParamLimits

0xe029,	// (0x0008267d) image3_infobar_time_pane

0xbc73,	// (0x000802c7) image3_infobar_time_pane_g1

0xe039,	// (0x0008268d) image3_infobar_time_pane_t1

0xbc73,	// (0x000802c7) image3_infobar_loc_pane_g1

0xe047,	// (0x0008269b) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x000844af) image3_infobar_loc_pane_g

0xe04f,	// (0x000826a3) image3_infobar_loc_pane_t1

0xbc73,	// (0x000802c7) image3_infobar_fav_pane_g1

0xe05d,	// (0x000826b1) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x000844b4) image3_infobar_fav_pane_g

0xe065,	// (0x000826b9) fs_bigclock_status_battery_pane

0xe06e,	// (0x000826c2) fs_bigclock_status_signal_pane

0xe077,	// (0x000826cb) fs_bigclock_status_title_pane

0xe080,	// (0x000826d4) fs_bigclock_status_signal_pane_g1

0xe089,	// (0x000826dd) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x000844b9) fs_bigclock_status_signal_pane_g

0xe091,	// (0x000826e5) fs_bigclock_status_battery_pane_g1

0xe09a,	// (0x000826ee) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x000844be) fs_bigclock_status_battery_pane_g

0xe0a2,	// (0x000826f6) fs_bigclock_status_title_pane_t1

0xbc73,	// (0x000802c7) main_fs_bigclock_clock_pane_g1

0xe0b0,	// (0x00082704) main_fs_bigclock_clock_pane_g2

0xe0b0,	// (0x00082704) main_fs_bigclock_clock_pane_g3

0xe0b0,	// (0x00082704) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x000844c3) main_fs_bigclock_clock_pane_g

0xa52c,	// (0x0007eb80) main_fs_bigclock_clock_pane_t1

0xa53a,	// (0x0007eb8e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x000844cc) main_fs_bigclock_clock_pane_t

0xe0b8,	// (0x0008270c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe0b8,	// (0x0008270c) list_single_fs_bigclock_indicator_pane

0xa549,	// (0x0007eb9d) list_single_fs_bigclock_pane_ParamLimits

0xa549,	// (0x0007eb9d) list_single_fs_bigclock_pane

0xe0d2,	// (0x00082726) main_fs_bigclock_indicator_pane_t1

0xe0e1,	// (0x00082735) list_single_fs_bigclock_pane_g1

0xe0e9,	// (0x0008273d) list_single_fs_bigclock_pane_t1

0xbc73,	// (0x000802c7) main_fs_bigclock_swipe_pane_g1

0xe129,	// (0x0008277d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x000844dd) main_fs_bigclock_swipe_pane_g

0xe131,	// (0x00082785) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe131,	// (0x00082785) main_fs_bigclock_swipe_pane_t1

0x3b58,	// (0x000781ac) call_type_pane_ParamLimits

0xad28,	// (0x0007f37c) main_btmg_pane

0xddc3,	// (0x00082417) list_single_cale_mrui_row_pane_g2_ParamLimits

0xddc3,	// (0x00082417) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfc,	// (0x00084450) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x00084450) list_single_cale_mrui_row_pane_g

0xdf14,	// (0x00082568) list_recal_vselct_arw_lo_pane

0xdf1c,	// (0x00082570) list_recal_vselct_arw_up_pane

0xe9d2,	// (0x00083026) list_recal_vselct_pane

0xe14e,	// (0x000827a2) btmg_button_pane

0xa5b0,	// (0x0007ec04) main_btmg_pane_g1

0xad28,	// (0x0007f37c) bg_button_pane_cp044

0xe158,	// (0x000827ac) btmg_button_pane_t1

0xb763,	// (0x0007fdb7) aid_listscroll_gen

0xe8e5,	// (0x00082f39) main_cntbar_detail_pane

0xdaf5,	// (0x00082149) list_cmail_folder_pane

0xdb05,	// (0x00082159) sp_fs_scroll_pane_cp03_ParamLimits

0x1712,	// (0x00075d66) list_single_fs_dyc_pane_cp01_ParamLimits

0x1712,	// (0x00075d66) list_single_fs_dyc_pane_cp01

0xe166,	// (0x000827ba) aid_size_cmail_indent

0xe16f,	// (0x000827c3) list_single_dyc_row_pane_cp01

0xa5e6,	// (0x0007ec3a) cntbar_detail_list_pane_ParamLimits

0xa5e6,	// (0x0007ec3a) cntbar_detail_list_pane

0xa632,	// (0x0007ec86) main_cntbar_detail_cont_pane_ParamLimits

0xa632,	// (0x0007ec86) main_cntbar_detail_cont_pane

0x3a3e,	// (0x00078092) scroll_pane_cp032_ParamLimits

0x3a3e,	// (0x00078092) scroll_pane_cp032

0xa646,	// (0x0007ec9a) cntbar_detail_list_event_pane_ParamLimits

0xa646,	// (0x0007ec9a) cntbar_detail_list_event_pane

0xa5f6,	// (0x0007ec4a) cntbar_detail_list_shct_pane

0x2de8,	// (0x0007743c) aid_list_gen

0xe178,	// (0x000827cc) aid_scroll

0xe181,	// (0x000827d5) aid_size_touch_scroll_bar

0xe18a,	// (0x000827de) aid_list_double

0xe193,	// (0x000827e7) aid_list_single

0xe19c,	// (0x000827f0) aid_list_single_lg

0xe1a5,	// (0x000827f9) aid_list_z_g_a_sm

0xe8bf,	// (0x00082f13) aid_list_z_g_d

0xe1ad,	// (0x00082801) aid_txt_z_prm

0x172c,	// (0x00075d80) aid_txt_z_prm_cp01

0x173a,	// (0x00075d8e) aid_txt_z_sec

0xa656,	// (0x0007ecaa) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa656,	// (0x0007ecaa) main_cntbar_detail_cont_pane_g1

0xa66a,	// (0x0007ecbe) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa66a,	// (0x0007ecbe) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x000844e2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x000844e2) main_cntbar_detail_cont_pane_g

0xe1bb,	// (0x0008280f) main_cntbar_detail_cont_pane_t1

0xe1c9,	// (0x0008281d) main_cntbar_detail_cont_pane_t2

0xe1d7,	// (0x0008282b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x000844e7) main_cntbar_detail_cont_pane_t

0xa67a,	// (0x0007ecce) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa67a,	// (0x0007ecce) cell_cntbar_detail_list_shct_pane

0xe1e5,	// (0x00082839) cntbar_detail_list_shct_pane_g1

0xe1ee,	// (0x00082842) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x000844ee) cntbar_detail_list_shct_pane_g

0xa68e,	// (0x0007ece2) cntbar_detail_list_event_pane_g1_ParamLimits

0xa68e,	// (0x0007ece2) cntbar_detail_list_event_pane_g1

0xa69a,	// (0x0007ecee) cntbar_detail_list_event_pane_g2_ParamLimits

0xa69a,	// (0x0007ecee) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x000844f3) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x000844f3) cntbar_detail_list_event_pane_g

0xa706,	// (0x0007ed5a) cntbar_detail_list_event_pane_t1_ParamLimits

0xa706,	// (0x0007ed5a) cntbar_detail_list_event_pane_t1

0xa71b,	// (0x0007ed6f) cntbar_detail_list_event_pane_t2_ParamLimits

0xa71b,	// (0x0007ed6f) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x00084500) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x00084500) cntbar_detail_list_event_pane_t

0xbc73,	// (0x000802c7) cell_cntbar_detail_list_shct_pane_g1

0x415f,	// (0x000787b3) navi_pane_mv_g3

0xe8e5,	// (0x00082f39) main_cntbar_detail_pane_ParamLimits

0xad28,	// (0x0007f37c) main_notif_wgt_pane

0xe504,	// (0x00082b58) aid_tch_main_mp4_pane_g4

0xe6e6,	// (0x00082d3a) popup_slider_window_cp02

0xdf0b,	// (0x0008255f) list_recal_day_event_pane

0xa5ba,	// (0x0007ec0e) cntbar_detail_btn_pane_ParamLimits

0xa5ba,	// (0x0007ec0e) cntbar_detail_btn_pane

0xa5d0,	// (0x0007ec24) cntbar_detail_btn_pane_cp01_ParamLimits

0xa5d0,	// (0x0007ec24) cntbar_detail_btn_pane_cp01

0xa5f6,	// (0x0007ec4a) cntbar_detail_list_shct_pane_ParamLimits

0xa606,	// (0x0007ec5a) cntbar_detail_pane_g1_ParamLimits

0xa606,	// (0x0007ec5a) cntbar_detail_pane_g1

0xa616,	// (0x0007ec6a) cntbar_detail_pane_t1_ParamLimits

0xa616,	// (0x0007ec6a) cntbar_detail_pane_t1

0xa6a6,	// (0x0007ecfa) cntbar_detail_list_event_pane_g3_ParamLimits

0xa6a6,	// (0x0007ecfa) cntbar_detail_list_event_pane_g3

0xa6be,	// (0x0007ed12) cntbar_detail_list_event_pane_g4_ParamLimits

0xa6be,	// (0x0007ed12) cntbar_detail_list_event_pane_g4

0xa6d6,	// (0x0007ed2a) cntbar_detail_list_event_pane_g5_ParamLimits

0xa6d6,	// (0x0007ed2a) cntbar_detail_list_event_pane_g5

0xa6ee,	// (0x0007ed42) cntbar_detail_list_event_pane_g6_ParamLimits

0xa6ee,	// (0x0007ed42) cntbar_detail_list_event_pane_g6

0xa730,	// (0x0007ed84) cntbar_detail_list_event_pane_t3_ParamLimits

0xa730,	// (0x0007ed84) cntbar_detail_list_event_pane_t3

0xa742,	// (0x0007ed96) popup_notif_wgt_window_ParamLimits

0xa742,	// (0x0007ed96) popup_notif_wgt_window

0xa75b,	// (0x0007edaf) popup_submenu_window_cp01_ParamLimits

0xa75b,	// (0x0007edaf) popup_submenu_window_cp01

0x41e1,	// (0x00078835) bg_popup_window_pane_cp10

0xe1f7,	// (0x0008284b) listscroll_notif_wgt_pane

0xe201,	// (0x00082855) list_notif_wgt_window

0xe20a,	// (0x0008285e) scroll_pane_cp033

0xe213,	// (0x00082867) list_notif_wgt_row_pane_ParamLimits

0xe213,	// (0x00082867) list_notif_wgt_row_pane

0xe227,	// (0x0008287b) aid_size_list_notif_wgt_del

0xe230,	// (0x00082884) list_notif_wgt_row_pane_g1

0xe238,	// (0x0008288c) list_notif_wgt_row_pane_g2

0xe240,	// (0x00082894) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x00084507) list_notif_wgt_row_pane_g

0xe249,	// (0x0008289d) list_notif_wgt_row_pane_t1

0xe257,	// (0x000828ab) list_notif_wgt_row_pane_t2

0xe265,	// (0x000828b9) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x0008450e) list_notif_wgt_row_pane_t

0xc979,	// (0x00080fcd) list_recal_day_event_pane_g1

0xe273,	// (0x000828c7) list_recal_day_event_pane_t1

0xad28,	// (0x0007f37c) bg_button_pane_cp045

0xe282,	// (0x000828d6) cntbar_detail_btn_pane_t1

0xb76b,	// (0x0007fdbf) main_callh_pane_ParamLimits

0xb76b,	// (0x0007fdbf) main_callh_pane

0xad28,	// (0x0007f37c) main_coverflow0_pane

0xad28,	// (0x0007f37c) main_wgtman_pane

0x9c20,	// (0x0007e274) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9c20,	// (0x0007e274) main_fs_bigclock_unlock_btn_pane

0xdacf,	// (0x00082123) bg_button_pane_cp16

0xdadf,	// (0x00082133) cell_tport_appsw_pane_g3

0xa76d,	// (0x0007edc1) cf0_flow_pane_ParamLimits

0xa76d,	// (0x0007edc1) cf0_flow_pane

0xe290,	// (0x000828e4) listscroll_cf0_pane

0xe299,	// (0x000828ed) main_cf0_pane_g1

0xa782,	// (0x0007edd6) main_cf0_pane_t1_ParamLimits

0xa782,	// (0x0007edd6) main_cf0_pane_t1

0xa799,	// (0x0007eded) main_cf0_pane_t2_ParamLimits

0xa799,	// (0x0007eded) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x00084515) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x00084515) main_cf0_pane_t

0xe2a3,	// (0x000828f7) scroll_pane_cp11

0xa7b0,	// (0x0007ee04) cf0_flow_pane_g1

0xa7b8,	// (0x0007ee0c) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x0008451a) cf0_flow_pane_g

0xa7c0,	// (0x0007ee14) cf0_flow_pane_t1

0xad28,	// (0x0007f37c) main_call6_pane

0xad28,	// (0x0007f37c) main_calllock_pane

0xa7ce,	// (0x0007ee22) call6_btn_grp_pane_ParamLimits

0xa7ce,	// (0x0007ee22) call6_btn_grp_pane

0xa7e8,	// (0x0007ee3c) call6_pane_g1_ParamLimits

0xa7e8,	// (0x0007ee3c) call6_pane_g1

0xa7fd,	// (0x0007ee51) popup_call6_1st_window_ParamLimits

0xa7fd,	// (0x0007ee51) popup_call6_1st_window

0xa80e,	// (0x0007ee62) popup_call6_2nd_window_ParamLimits

0xa80e,	// (0x0007ee62) popup_call6_2nd_window

0xa81f,	// (0x0007ee73) cell_call6_btn_pane_ParamLimits

0xa81f,	// (0x0007ee73) cell_call6_btn_pane

0x41e1,	// (0x00078835) bg_popup_call2_in_pane_cp03

0xe2ae,	// (0x00082902) popup_call6_1st_window_g1

0xe2b6,	// (0x0008290a) popup_call6_1st_window_g2

0xe2be,	// (0x00082912) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x0008451f) popup_call6_1st_window_g

0xe2c6,	// (0x0008291a) popup_call6_1st_window_t1

0xe2d5,	// (0x00082929) popup_call6_1st_window_t2

0xe2e5,	// (0x00082939) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x00084526) popup_call6_1st_window_t

0x41e1,	// (0x00078835) bg_popup_call2_in_pane_cp04

0xe2ae,	// (0x00082902) popup_call6_2nd_window_g1

0xe2b6,	// (0x0008290a) popup_call6_2nd_window_g2

0xe2be,	// (0x00082912) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x0008451f) popup_call6_2nd_window_g

0xe2c6,	// (0x0008291a) popup_call6_2nd_window_t1

0xad28,	// (0x0007f37c) bg_button_pane_cp15

0xe2f5,	// (0x00082949) cell_call6_btn_pane_g1

0xe2fe,	// (0x00082952) cell_call6_btn_pane_t1

0xa833,	// (0x0007ee87) listscroll_wgtman_pane_ParamLimits

0xa833,	// (0x0007ee87) listscroll_wgtman_pane

0xa856,	// (0x0007eeaa) wgtman_btn_pane_ParamLimits

0xa856,	// (0x0007eeaa) wgtman_btn_pane

0x3da8,	// (0x000783fc) aid_scroll_copy1

0xe30d,	// (0x00082961) list_wgtman_pane

0xa899,	// (0x0007eeed) wgtman_btn_pane_g1_ParamLimits

0xa899,	// (0x0007eeed) wgtman_btn_pane_g1

0xa8c5,	// (0x0007ef19) wgtman_btn_pane_t1_ParamLimits

0xa8c5,	// (0x0007ef19) wgtman_btn_pane_t1

0xe317,	// (0x0008296b) wgtman_btn_pane_t2_ParamLimits

0xe317,	// (0x0008296b) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x0008452d) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x0008452d) wgtman_btn_pane_t

0xa902,	// (0x0007ef56) listrow_wgtman_pane_ParamLimits

0xa902,	// (0x0007ef56) listrow_wgtman_pane

0xa915,	// (0x0007ef69) listrow_wgtman_pane_g1

0xa91e,	// (0x0007ef72) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x00084532) listrow_wgtman_pane_g

0x1748,	// (0x00075d9c) listrow_wgtman_pane_t1

0x1756,	// (0x00075daa) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x00084537) listrow_wgtman_pane_t

0x1764,	// (0x00075db8) wait_bar_pane_cp09

0xe32e,	// (0x00082982) main_calllock_btn_pane

0xe338,	// (0x0008298c) main_calllock_pane_g1

0xad28,	// (0x0007f37c) bg_button_pane_cp17

0xe343,	// (0x00082997) main_calllock_btn_pane_g1

0xe34c,	// (0x000829a0) main_calllock_btn_pane_t1

0xad28,	// (0x0007f37c) main_dialer3_pane

0xad28,	// (0x0007f37c) main_fmrd2_pane

0xbc73,	// (0x000802c7) main_fs_bigclock_unlock_btn_pane_g1

0xe363,	// (0x000829b7) main_fs_bigclock_unlock_btn_pane_t1

0xa928,	// (0x0007ef7c) area_fmrd2_info_pane_ParamLimits

0xa928,	// (0x0007ef7c) area_fmrd2_info_pane

0xa939,	// (0x0007ef8d) area_fmrd2_visual_pane_ParamLimits

0xa939,	// (0x0007ef8d) area_fmrd2_visual_pane

0xa947,	// (0x0007ef9b) fmrd2_indi_pane_ParamLimits

0xa947,	// (0x0007ef9b) fmrd2_indi_pane

0xa954,	// (0x0007efa8) area_fmrd2_visual_pane_g1

0xa95c,	// (0x0007efb0) area_fmrd2_visual_pane_t1

0xa96c,	// (0x0007efc0) area_fmrd2_visual_pane_t2

0xa97c,	// (0x0007efd0) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x00084541) area_fmrd2_visual_pane_t

0xa98c,	// (0x0007efe0) area_fmrd2_info_pane_g1

0xa994,	// (0x0007efe8) area_fmrd2_info_pane_t1

0xa9a4,	// (0x0007eff8) area_fmrd2_info_pane_t2

0xa9b4,	// (0x0007f008) area_fmrd2_info_pane_t3

0xa9c4,	// (0x0007f018) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x00084548) area_fmrd2_info_pane_t

0xa9d2,	// (0x0007f026) fmrd2_indi_pane_t1

0xa9e2,	// (0x0007f036) fmrd2_indi_pane_t2

0xa9f2,	// (0x0007f046) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x00084551) fmrd2_indi_pane_t

0x9c96,	// (0x0007e2ea) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9c96,	// (0x0007e2ea) list_single_fs_bigclock_indicator_pane_g5

0x9d3a,	// (0x0007e38e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x9d3a,	// (0x0007e38e) list_single_fs_bigclock_indicator_pane_t5

0xa287,	// (0x0007e8db) aid_cell_bcale_month_pane_ParamLimits

0xa287,	// (0x0007e8db) aid_cell_bcale_month_pane

0xa299,	// (0x0007e8ed) bcale_month_pane_ParamLimits

0xa299,	// (0x0007e8ed) bcale_month_pane

0xa2b3,	// (0x0007e907) bcale_preview_pane_ParamLimits

0xa2b3,	// (0x0007e907) bcale_preview_pane

0xe0e9,	// (0x0008273d) list_single_fs_bigclock_pane_t1_ParamLimits

0xe105,	// (0x00082759) list_single_fs_bigclock_pane_t2_ParamLimits

0xe105,	// (0x00082759) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x000844d8) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x000844d8) list_single_fs_bigclock_pane_t

0xe35b,	// (0x000829af) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x0008453c) main_fs_bigclock_unlock_btn_pane_g

0xaa02,	// (0x0007f056) aid_dia3_key_size_ParamLimits

0xaa02,	// (0x0007f056) aid_dia3_key_size

0xaa11,	// (0x0007f065) aid_dia3_listrow_size_ParamLimits

0xaa11,	// (0x0007f065) aid_dia3_listrow_size

0xaa26,	// (0x0007f07a) dia3_keypad_fun_pane_ParamLimits

0xaa26,	// (0x0007f07a) dia3_keypad_fun_pane

0xaa42,	// (0x0007f096) dia3_keypad_num_pane_ParamLimits

0xaa42,	// (0x0007f096) dia3_keypad_num_pane

0xaa5d,	// (0x0007f0b1) dia3_listscroll_pane_ParamLimits

0xaa5d,	// (0x0007f0b1) dia3_listscroll_pane

0xaa70,	// (0x0007f0c4) dia3_numentry_pane_ParamLimits

0xaa70,	// (0x0007f0c4) dia3_numentry_pane

0xe371,	// (0x000829c5) dia3_list_pane

0xe37c,	// (0x000829d0) scroll_pane_cp12

0xad28,	// (0x0007f37c) bg_dia3_numentry_pane

0xaa84,	// (0x0007f0d8) dia3_numentry_pane_t1

0xaa93,	// (0x0007f0e7) cell_dia3_key_num_pane

0xaa9b,	// (0x0007f0ef) cell_dia3_key0_fun_pane_ParamLimits

0xaa9b,	// (0x0007f0ef) cell_dia3_key0_fun_pane

0xaaaf,	// (0x0007f103) cell_dia3_key1_fun_pane_ParamLimits

0xaaaf,	// (0x0007f103) cell_dia3_key1_fun_pane

0xaac7,	// (0x0007f11b) dia3_listrow_pane

0xd37f,	// (0x000819d3) bg_dia3_numentry_pane_g1

0xad28,	// (0x0007f37c) bg_button_pane_cp21

0xe387,	// (0x000829db) cell_dia3_key_num_pane_t1

0xe395,	// (0x000829e9) cell_dia3_key_num_pane_t2

0xe3a4,	// (0x000829f8) cell_dia3_key_num_pane_t3

0xe3b3,	// (0x00082a07) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x00084558) cell_dia3_key_num_pane_t

0xad28,	// (0x0007f37c) bg_button_pane_cp19

0xaad9,	// (0x0007f12d) cell_dia3_key0_fun_pane_g1

0xad28,	// (0x0007f37c) bg_button_pane_cp20

0xaae1,	// (0x0007f135) cell_dia3_key1_fun_pane_g1

0xaae9,	// (0x0007f13d) area_left_week_number_pane

0xe3c2,	// (0x00082a16) area_top_day_name_pane

0xaaf2,	// (0x0007f146) frame_month_view_pane

0xaafa,	// (0x0007f14e) grid_month_view_pane

0xab04,	// (0x0007f158) cell_top_day_name_pane_ParamLimits

0xab04,	// (0x0007f158) cell_top_day_name_pane

0xa3d9,	// (0x0007ea2d) cell_area_left_week_number_pane_ParamLimits

0xa3d9,	// (0x0007ea2d) cell_area_left_week_number_pane

0xab1a,	// (0x0007f16e) cell_month_view_pane_ParamLimits

0xab1a,	// (0x0007f16e) cell_month_view_pane

0xe3cb,	// (0x00082a1f) frm_month_g1

0xab35,	// (0x0007f189) frm_month_g2

0xab3d,	// (0x0007f191) frm_month_g3

0xab45,	// (0x0007f199) frm_month_g4

0xab4d,	// (0x0007f1a1) frm_month_g5

0xab55,	// (0x0007f1a9) frm_month_g6

0xab5d,	// (0x0007f1b1) frm_month_g7

0xe3d4,	// (0x00082a28) frm_month_g8

0xab65,	// (0x0007f1b9) frm_month_g9

0xab6e,	// (0x0007f1c2) frm_month_g10

0xab77,	// (0x0007f1cb) frm_month_g11

0xab80,	// (0x0007f1d4) frm_month_g12

0xab89,	// (0x0007f1dd) frm_month_g13

0xab92,	// (0x0007f1e6) frm_month_g14

0xab9b,	// (0x0007f1ef) frm_month_g15

0xaba4,	// (0x0007f1f8) frm_month_g16

0x000f,

0xff0d,	// (0x00084561) frm_month_g

0xabad,	// (0x0007f201) cell_top_day_name_pane_t1

0xabbc,	// (0x0007f210) cell_area_left_week_number_pane_g1

0xabad,	// (0x0007f201) cell_area_left_week_number_pane_t1

0xbc73,	// (0x000802c7) cell_month_view_pane_g1

0xabc4,	// (0x0007f218) cell_month_view_pane_t1

0xad28,	// (0x0007f37c) main_fps_pane

0xd824,	// (0x00081e78) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xd824,	// (0x00081e78) cmail_ddmenu_btn02_pane_cp1

0xd840,	// (0x00081e94) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xd840,	// (0x00081e94) cmail_ddmenu_btn02_pane_cp2

0xa48d,	// (0x0007eae1) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa48d,	// (0x0007eae1) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x00084489) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x00084489) cmail_ddmenu_btn02_pane_g

0xa4ab,	// (0x0007eaff) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa4ab,	// (0x0007eaff) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x0008448e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x0008448e) cmail_ddmenu_btn02_pane_t

0xabd3,	// (0x0007f227) fps_text_pane_ParamLimits

0xabd3,	// (0x0007f227) fps_text_pane

0xabea,	// (0x0007f23e) main_fps_pane_g1_ParamLimits

0xabea,	// (0x0007f23e) main_fps_pane_g1

0xac04,	// (0x0007f258) wait_bar_pane_cp010_ParamLimits

0xac04,	// (0x0007f258) wait_bar_pane_cp010

0xac15,	// (0x0007f269) fps_text_pane_t1_ParamLimits

0xac15,	// (0x0007f269) fps_text_pane_t1

0xc67e,	// (0x00080cd2) cam4_image_uncrop_pane_g1

0xc687,	// (0x00080cdb) cam4_image_uncrop_pane_g2

0x80e8,	// (0x0007c73c) cam4_image_uncrop_pane_g3

0x80f1,	// (0x0007c745) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x00083f5c) cam4_image_uncrop_pane_g

0xaac7,	// (0x0007f11b) dia3_listrow_pane_ParamLimits

0xad28,	// (0x0007f37c) main_phob2_pane

0xa0e7,	// (0x0007e73b) cell_tport_appsw_pane_cp02_ParamLimits

0xa0e7,	// (0x0007e73b) cell_tport_appsw_pane_cp02

0xa0fb,	// (0x0007e74f) cell_tport_appsw_pane_cp03_ParamLimits

0xa0fb,	// (0x0007e74f) cell_tport_appsw_pane_cp03

0xad28,	// (0x0007f37c) phob2_contact_card_pane

0xad28,	// (0x0007f37c) phob2_listscroll_pane

0xe3dd,	// (0x00082a31) phob2_list_pane

0xe3e5,	// (0x00082a39) scroll_pane_cp034

0xac2d,	// (0x0007f281) phob2_cc_data_pane_ParamLimits

0xac2d,	// (0x0007f281) phob2_cc_data_pane

0xac4c,	// (0x0007f2a0) phob2_cc_listscroll_pane_ParamLimits

0xac4c,	// (0x0007f2a0) phob2_cc_listscroll_pane

0xc744,	// (0x00080d98) list_double_large_graphic_phob2_pane_ParamLimits

0xc744,	// (0x00080d98) list_double_large_graphic_phob2_pane

0xac6a,	// (0x0007f2be) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xac6a,	// (0x0007f2be) list_double_large_graphic_phob2_pane_g1

0x176c,	// (0x00075dc0) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x176c,	// (0x00075dc0) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x00084582) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x00084582) list_double_large_graphic_phob2_pane_g

0x1778,	// (0x00075dcc) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1778,	// (0x00075dcc) list_double_large_graphic_phob2_pane_t1

0x178d,	// (0x00075de1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x178d,	// (0x00075de1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x00084587) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x00084587) list_double_large_graphic_phob2_pane_t

0xad28,	// (0x0007f37c) list_highlight_pane_cp024

0xe3ed,	// (0x00082a41) phob2_cc_button_pane

0xac77,	// (0x0007f2cb) phob2_cc_data_pane_g1_ParamLimits

0xac77,	// (0x0007f2cb) phob2_cc_data_pane_g1

0xac8c,	// (0x0007f2e0) phob2_cc_data_pane_g2_ParamLimits

0xac8c,	// (0x0007f2e0) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x0008458c) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x0008458c) phob2_cc_data_pane_g

0xac9e,	// (0x0007f2f2) phob2_cc_data_pane_t1_ParamLimits

0xac9e,	// (0x0007f2f2) phob2_cc_data_pane_t1

0xacb6,	// (0x0007f30a) phob2_cc_data_pane_t2_ParamLimits

0xacb6,	// (0x0007f30a) phob2_cc_data_pane_t2

0xacce,	// (0x0007f322) phob2_cc_data_pane_t3_ParamLimits

0xacce,	// (0x0007f322) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x00084591) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x00084591) phob2_cc_data_pane_t

0xe3f5,	// (0x00082a49) phob2_cc_list_pane_ParamLimits

0xe3f5,	// (0x00082a49) phob2_cc_list_pane

0xca24,	// (0x00081078) scroll_pane_cp035_ParamLimits

0xca24,	// (0x00081078) scroll_pane_cp035

0xe8e5,	// (0x00082f39) bg_button_pane_cp033

0xe401,	// (0x00082a55) phob2_cc_button_pane_g1

0xe40d,	// (0x00082a61) phob2_cc_button_pane_t1

0xe422,	// (0x00082a76) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x00084598) phob2_cc_button_pane_t

0xace8,	// (0x0007f33c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xace8,	// (0x0007f33c) list_double_large_graphic_phob2_cc_pane

0xacfc,	// (0x0007f350) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xacfc,	// (0x0007f350) list_double_large_graphic_phob2_cc_pane_g1

0xad08,	// (0x0007f35c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xad08,	// (0x0007f35c) list_double_large_graphic_phob2_cc_pane_g2

0xad14,	// (0x0007f368) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xad14,	// (0x0007f368) list_double_large_graphic_phob2_cc_pane_g3

0x179f,	// (0x00075df3) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x179f,	// (0x00075df3) list_double_large_graphic_phob2_cc_pane_g4

0x17ab,	// (0x00075dff) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x17ab,	// (0x00075dff) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x0008459d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x0008459d) list_double_large_graphic_phob2_cc_pane_g

0x17b7,	// (0x00075e0b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x17b7,	// (0x00075e0b) list_double_large_graphic_phob2_cc_pane_t1

0x17e0,	// (0x00075e34) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x17e0,	// (0x00075e34) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x000845a8) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x000845a8) list_double_large_graphic_phob2_cc_pane_t

0xe434,	// (0x00082a88) list_highlight_pane_cp025_ParamLimits

0xe434,	// (0x00082a88) list_highlight_pane_cp025

0xe8e5,	// (0x00082f39) bg_button_pane_cp033_ParamLimits

0xe401,	// (0x00082a55) phob2_cc_button_pane_g1_ParamLimits

0xe40d,	// (0x00082a61) phob2_cc_button_pane_t1_ParamLimits

0xe422,	// (0x00082a76) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x00084598) phob2_cc_button_pane_t_ParamLimits

0x1845,	// (0x00075e99) popup_wgtman_window

0xc826,	// (0x00080e7a) scroll_pane_cp038

0xa87b,	// (0x0007eecf) wgtman_btn_pane_cp_01_ParamLimits

0xa87b,	// (0x0007eecf) wgtman_btn_pane_cp_01

0xe442,	// (0x00082a96) wgtman_content_pane

0xe18a,	// (0x000827de) wgtman_heading_pane

0xad28,	// (0x0007f37c) bg_heading_pane_cp02

0xe44b,	// (0x00082a9f) wgtman_heading_pane_g1

0xe453,	// (0x00082aa7) wgtman_heading_pane_t1

0xe461,	// (0x00082ab5) scroll_pane_cp036

0xe469,	// (0x00082abd) wgtman_list_pane

0xe471,	// (0x00082ac5) wgtman_list_pane_t1_ParamLimits

0xe471,	// (0x00082ac5) wgtman_list_pane_t1

0xe740,	// (0x00082d94) cam4_grid_pane

0x1066,	// (0x000756ba) bg_button_pane_cp015_ParamLimits

0x8d6f,	// (0x0007d3c3) bg_button_pane_cp016_ParamLimits

0x8d82,	// (0x0007d3d6) bg_button_pane_cp017_ParamLimits

0x109b,	// (0x000756ef) popup_vitu2_query_window_g3_ParamLimits

0x109b,	// (0x000756ef) popup_vitu2_query_window_g3

0x1116,	// (0x0007576a) popup_vitu2_query_window_t6_ParamLimits

0x1116,	// (0x0007576a) popup_vitu2_query_window_t6

0x1141,	// (0x00075795) popup_vitu2_query_window_t7_ParamLimits

0x1141,	// (0x00075795) popup_vitu2_query_window_t7

0xc67e,	// (0x00080cd2) cam4_grid_pane_g1

0xc687,	// (0x00080cdb) cam4_grid_pane_g2

0xe493,	// (0x00082ae7) cam4_grid_pane_g3

0xe49c,	// (0x00082af0) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x000845ad) cam4_grid_pane_g

0x27e5,	// (0x00076e39) aid_placing_vt_slider_lsc_ParamLimits

0x2b30,	// (0x00077184) vidtel_button_pane_ParamLimits

0x2b30,	// (0x00077184) vidtel_button_pane

0xad28,	// (0x0007f37c) bg_button_pane_cp034

0xad20,	// (0x0007f374) vidtel_button_pane_g1

0xe4a7,	// (0x00082afb) vidtel_button_pane_t1

0xc943,	// (0x00080f97) aid_size_vtel_slider_touch

0xca24,	// (0x00081078) scroll_pane_cp039

0xd3bd,	// (0x00081a11) ncim_query_button_pane_cp01_ParamLimits

0xd3dc,	// (0x00081a30) ncimui_query_pane_g1_ParamLimits

0xe8e5,	// (0x00082f39) input_focus_pane_cp012_ParamLimits

0xd401,	// (0x00081a55) ncim_query_entry_pane_t1_ParamLimits

0xca24,	// (0x00081078) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
