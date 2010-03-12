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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00034cda };

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
0x5878,	// (0x0003a552) Screen

0x5884,	// (0x0003a55e) application_window

0x58e0,	// (0x0003a5ba) area_bottom_pane_ParamLimits

0x58e0,	// (0x0003a5ba) area_bottom_pane

0x5939,	// (0x0003a613) area_top_pane_ParamLimits

0x5939,	// (0x0003a613) area_top_pane

0x599d,	// (0x0003a677) call_video_uplink_pane_ParamLimits

0x599d,	// (0x0003a677) call_video_uplink_pane

0x59da,	// (0x0003a6b4) main_pane_ParamLimits

0x59da,	// (0x0003a6b4) main_pane

0x375e,	// (0x00038438) context_pane

0x8a95,	// (0x0003d76f) navi_pane

0x8ab5,	// (0x0003d78f) popup_cale_events_window_ParamLimits

0x8ab5,	// (0x0003d78f) popup_cale_events_window

0x3771,	// (0x0003844b) popup_mup_playback_window

0x8acd,	// (0x0003d7a7) signal_pane

0x1721,	// (0x000363fb) main_browser_pane

0x2305,	// (0x00036fdf) main_burst_pane

0x892c,	// (0x0003d606) main_calc_pane

0x2305,	// (0x00036fdf) main_cale_day_pane

0x1721,	// (0x000363fb) main_cale_month_pane

0x2305,	// (0x00036fdf) main_cale_week_pane

0x2305,	// (0x00036fdf) main_call_pane

0x13a1,	// (0x0003607b) main_call_poc_pane

0x2305,	// (0x00036fdf) main_camera_pane

0x2305,	// (0x00036fdf) main_chi_dic_pane

0x2194,	// (0x00036e6e) main_clock_pane

0x13a1,	// (0x0003607b) main_fmradio_pane

0x2305,	// (0x00036fdf) main_graph_messa_pane

0x13a1,	// (0x0003607b) main_help_pane

0x1721,	// (0x000363fb) main_im_pane

0x160a,	// (0x000362e4) main_image_pane_ParamLimits

0x160a,	// (0x000362e4) main_image_pane

0x13a1,	// (0x0003607b) main_location2_pane

0x2305,	// (0x00036fdf) main_location_pane

0x13a1,	// (0x0003607b) main_messa_pane

0x13a1,	// (0x0003607b) main_mp2_pane

0x2305,	// (0x00036fdf) main_mp_pane

0x13a1,	// (0x0003607b) main_msg_pane

0x13a1,	// (0x0003607b) main_mup_eq_pane

0x13a1,	// (0x0003607b) main_mup_pane

0x1721,	// (0x000363fb) main_notes_pane

0x13a1,	// (0x0003607b) main_pec_pane

0x13a1,	// (0x0003607b) main_phob_pane

0x13a1,	// (0x0003607b) main_pinb_pane

0x13a1,	// (0x0003607b) main_postcard_pane

0x13a1,	// (0x0003607b) main_qdial_pane

0x2305,	// (0x00036fdf) main_skin_pane

0x13a1,	// (0x0003607b) main_smil2_pane

0x2305,	// (0x00036fdf) main_smil_pane

0x2305,	// (0x00036fdf) main_video_pane

0x2305,	// (0x00036fdf) main_video_tele_pane

0x160a,	// (0x000362e4) main_viewer_pane_ParamLimits

0x160a,	// (0x000362e4) main_viewer_pane

0x2305,	// (0x00036fdf) main_vorec_pane

0x896a,	// (0x0003d644) popup_blid_sat_info_window_ParamLimits

0x896a,	// (0x0003d644) popup_blid_sat_info_window

0x898a,	// (0x0003d664) popup_dyc_status_message_window_ParamLimits

0x898a,	// (0x0003d664) popup_dyc_status_message_window

0x8998,	// (0x0003d672) popup_grid_large_graphic_window_ParamLimits

0x8998,	// (0x0003d672) popup_grid_large_graphic_window

0x8a27,	// (0x0003d701) popup_loc_request_window_ParamLimits

0x8a27,	// (0x0003d701) popup_loc_request_window

0x8a6d,	// (0x0003d747) popup_wml_address_window_ParamLimits

0x8a6d,	// (0x0003d747) popup_wml_address_window

0x8804,	// (0x0003d4de) call_muted_g1

0x84c3,	// (0x0003d19d) popup_call_audio_conf_window_ParamLimits

0x84c3,	// (0x0003d19d) popup_call_audio_conf_window

0x8814,	// (0x0003d4ee) popup_call_audio_first_window_ParamLimits

0x8814,	// (0x0003d4ee) popup_call_audio_first_window

0x8854,	// (0x0003d52e) popup_call_audio_in_window_ParamLimits

0x8854,	// (0x0003d52e) popup_call_audio_in_window

0x8878,	// (0x0003d552) popup_call_audio_out_window_ParamLimits

0x8878,	// (0x0003d552) popup_call_audio_out_window

0x889a,	// (0x0003d574) popup_call_audio_second_window_ParamLimits

0x889a,	// (0x0003d574) popup_call_audio_second_window

0x88ca,	// (0x0003d5a4) popup_call_audio_wait_window_ParamLimits

0x88ca,	// (0x0003d5a4) popup_call_audio_wait_window

0x88eb,	// (0x0003d5c5) popup_number_entry_window_ParamLimits

0x88eb,	// (0x0003d5c5) popup_number_entry_window

0x0f90,	// (0x00035c6a) bg_popup_call_pane_cp05_ParamLimits

0x0f90,	// (0x00035c6a) bg_popup_call_pane_cp05

0x0fb0,	// (0x00035c8a) popup_number_entry_window_t1

0x0fc3,	// (0x00035c9d) popup_number_entry_window_t2

0x0fd5,	// (0x00035caf) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x00043db2) popup_number_entry_window_t

0x0fe7,	// (0x00035cc1) text_title_cp2

0x0ffa,	// (0x00035cd4) bg_popup_call_pane_cp_ParamLimits

0x0ffa,	// (0x00035cd4) bg_popup_call_pane_cp

0x1008,	// (0x00035ce2) call_thumbnail_pane

0x1010,	// (0x00035cea) popup_call_audio_in_window_g1_ParamLimits

0x1010,	// (0x00035cea) popup_call_audio_in_window_g1

0x101c,	// (0x00035cf6) popup_call_audio_in_window_g2_ParamLimits

0x101c,	// (0x00035cf6) popup_call_audio_in_window_g2

0x1028,	// (0x00035d02) popup_call_audio_in_window_g3_ParamLimits

0x1028,	// (0x00035d02) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x00043dbb) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x00043dbb) popup_call_audio_in_window_g

0x1034,	// (0x00035d0e) popup_call_audio_in_window_t1_ParamLimits

0x1034,	// (0x00035d0e) popup_call_audio_in_window_t1

0x104f,	// (0x00035d29) popup_call_audio_in_window_t2_ParamLimits

0x104f,	// (0x00035d29) popup_call_audio_in_window_t2

0x106a,	// (0x00035d44) popup_call_audio_in_window_t3_ParamLimits

0x106a,	// (0x00035d44) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x00043dc2) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x00043dc2) popup_call_audio_in_window_t

0x0ffa,	// (0x00035cd4) bg_popup_call_pane_cp01_ParamLimits

0x0ffa,	// (0x00035cd4) bg_popup_call_pane_cp01

0x1008,	// (0x00035ce2) call_thumbnail_pane_cp02

0x107d,	// (0x00035d57) call_type_pane_cp022

0x1085,	// (0x00035d5f) popup_call_audio_out_window_g1_ParamLimits

0x1085,	// (0x00035d5f) popup_call_audio_out_window_g1

0x1097,	// (0x00035d71) popup_call_audio_out_window_g2_ParamLimits

0x1097,	// (0x00035d71) popup_call_audio_out_window_g2

0x10a3,	// (0x00035d7d) popup_call_audio_out_window_g3_ParamLimits

0x10a3,	// (0x00035d7d) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x00043dc9) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x00043dc9) popup_call_audio_out_window_g

0x10b5,	// (0x00035d8f) popup_call_audio_out_window_t1_ParamLimits

0x10b5,	// (0x00035d8f) popup_call_audio_out_window_t1

0x10cd,	// (0x00035da7) popup_call_audio_out_window_t2_ParamLimits

0x10cd,	// (0x00035da7) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x00043dd0) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x00043dd0) popup_call_audio_out_window_t

0x10e2,	// (0x00035dbc) bg_popup_call_pane_ParamLimits

0x10e2,	// (0x00035dbc) bg_popup_call_pane

0x5be5,	// (0x0003a8bf) call_thumbnail_pane_cp_ParamLimits

0x5be5,	// (0x0003a8bf) call_thumbnail_pane_cp

0x1166,	// (0x00035e40) call_type_pane_cp01_ParamLimits

0x1166,	// (0x00035e40) call_type_pane_cp01

0x11aa,	// (0x00035e84) popup_call_audio_first_window_g1_ParamLimits

0x11aa,	// (0x00035e84) popup_call_audio_first_window_g1

0x11f6,	// (0x00035ed0) popup_call_audio_first_window_g2_ParamLimits

0x11f6,	// (0x00035ed0) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x00043dd5) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x00043dd5) popup_call_audio_first_window_g

0x123a,	// (0x00035f14) popup_call_audio_first_window_t1_ParamLimits

0x123a,	// (0x00035f14) popup_call_audio_first_window_t1

0x12e6,	// (0x00035fc0) popup_call_audio_first_window_t4_ParamLimits

0x12e6,	// (0x00035fc0) popup_call_audio_first_window_t4

0x1372,	// (0x0003604c) popup_call_audio_first_window_t5_ParamLimits

0x1372,	// (0x0003604c) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x00043dda) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x00043dda) popup_call_audio_first_window_t

0x13a1,	// (0x0003607b) bg_popup_call_pane_cp02

0x13ab,	// (0x00036085) call_type_pane_cp023

0x13b3,	// (0x0003608d) popup_call_audio_wait_window_g1

0x13bb,	// (0x00036095) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x00043de1) popup_call_audio_wait_window_g

0x13c3,	// (0x0003609d) popup_call_audio_wait_window_t3

0x13d1,	// (0x000360ab) bg_popup_call_pane_cp03_ParamLimits

0x13d1,	// (0x000360ab) bg_popup_call_pane_cp03

0x1431,	// (0x0003610b) call_thumbnail_pane_cp011_ParamLimits

0x1431,	// (0x0003610b) call_thumbnail_pane_cp011

0x143d,	// (0x00036117) call_type_pane_cp034_ParamLimits

0x143d,	// (0x00036117) call_type_pane_cp034

0x1479,	// (0x00036153) popup_call_audio_second_window_g1_ParamLimits

0x1479,	// (0x00036153) popup_call_audio_second_window_g1

0x14c3,	// (0x0003619d) popup_call_audio_second_window_g2_ParamLimits

0x14c3,	// (0x0003619d) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x00043de6) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x00043de6) popup_call_audio_second_window_g

0x14ff,	// (0x000361d9) popup_call_audio_second_window_t1_ParamLimits

0x14ff,	// (0x000361d9) popup_call_audio_second_window_t1

0x1580,	// (0x0003625a) popup_call_audio_second_window_t2_ParamLimits

0x1580,	// (0x0003625a) popup_call_audio_second_window_t2

0x15b6,	// (0x00036290) popup_call_audio_second_window_t3_ParamLimits

0x15b6,	// (0x00036290) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x00043deb) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x00043deb) popup_call_audio_second_window_t

0x13a1,	// (0x0003607b) bg_popup_call_pane_cp04

0x15ec,	// (0x000362c6) list_conf_pane

0x15f4,	// (0x000362ce) popup_call_audio_conf_window_t1

0x1602,	// (0x000362dc) call_thumbnail_pane_g1

0x160a,	// (0x000362e4) bg_pinb_pane_ParamLimits

0x160a,	// (0x000362e4) bg_pinb_pane

0x1618,	// (0x000362f2) find_pinb_pane

0x1621,	// (0x000362fb) listscroll_pinb_pane_ParamLimits

0x1621,	// (0x000362fb) listscroll_pinb_pane

0x1630,	// (0x0003630a) pinb_bg_pane_g1

0x5c09,	// (0x0003a8e3) pinb_bg_pane_g2

0x5c15,	// (0x0003a8ef) pinb_bg_pane_g3

0x5c21,	// (0x0003a8fb) pinb_bg_pane_g4

0x5c2d,	// (0x0003a907) pinb_bg_pane_g5

0x5c39,	// (0x0003a913) pinb_bg_pane_g6

0x5c44,	// (0x0003a91e) pinb_bg_pane_g7

0x5c4f,	// (0x0003a929) pinb_bg_pane_g8

0x5c5a,	// (0x0003a934) pinb_bg_pane_g9

0x5c64,	// (0x0003a93e) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x00043df2) pinb_bg_pane_g

0x5c79,	// (0x0003a953) grid_pinb_pane

0x5c84,	// (0x0003a95e) list_pinb_pane

0x5c8f,	// (0x0003a969) scroll_pane_cp01_ParamLimits

0x5c8f,	// (0x0003a969) scroll_pane_cp01

0x1642,	// (0x0003631c) find_pinb_pane_g1_ParamLimits

0x1642,	// (0x0003631c) find_pinb_pane_g1

0x165a,	// (0x00036334) find_pinb_pane_t1

0x166c,	// (0x00036346) find_pinb_pane_t2

0x0001,

0xf132,	// (0x00043e0c) find_pinb_pane_t

0x1681,	// (0x0003635b) input_focus_pane_cp01_ParamLimits

0x1681,	// (0x0003635b) input_focus_pane_cp01

0x5ca1,	// (0x0003a97b) cell_pinb_pane_ParamLimits

0x5ca1,	// (0x0003a97b) cell_pinb_pane

0x5cd5,	// (0x0003a9af) cell_pinb_pane_g1_ParamLimits

0x5cd5,	// (0x0003a9af) cell_pinb_pane_g1

0x5cea,	// (0x0003a9c4) cell_pinb_pane_g2_ParamLimits

0x5cea,	// (0x0003a9c4) cell_pinb_pane_g2

0x168d,	// (0x00036367) cell_pinb_pane_g3_ParamLimits

0x168d,	// (0x00036367) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x00043e11) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x00043e11) cell_pinb_pane_g

0x13a1,	// (0x0003607b) grid_highlight_pane_cp01

0x5cf6,	// (0x0003a9d0) list_pinb_item_pane_ParamLimits

0x5cf6,	// (0x0003a9d0) list_pinb_item_pane

0x13a1,	// (0x0003607b) list_highlight_pane_cp02

0x1699,	// (0x00036373) list_pinb_item_pane_g1_ParamLimits

0x1699,	// (0x00036373) list_pinb_item_pane_g1

0x16a6,	// (0x00036380) list_pinb_item_pane_g2_ParamLimits

0x16a6,	// (0x00036380) list_pinb_item_pane_g2

0x5d23,	// (0x0003a9fd) list_pinb_item_pane_g3_ParamLimits

0x5d23,	// (0x0003a9fd) list_pinb_item_pane_g3

0x16b2,	// (0x0003638c) list_pinb_item_pane_g4_ParamLimits

0x16b2,	// (0x0003638c) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x00043e18) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x00043e18) list_pinb_item_pane_g

0x16be,	// (0x00036398) list_pinb_item_pane_t1_ParamLimits

0x16be,	// (0x00036398) list_pinb_item_pane_t1

0x5d4e,	// (0x0003aa28) calc_display_pane

0x5d6c,	// (0x0003aa46) calc_paper_pane

0x5d88,	// (0x0003aa62) grid_calc_pane

0x13a1,	// (0x0003607b) bg_list_pane_cp01

0x5db4,	// (0x0003aa8e) clock_g1

0x5dbc,	// (0x0003aa96) clock_g2

0x0001,

0xf147,	// (0x00043e21) clock_g

0x5dc6,	// (0x0003aaa0) clock_t1_ParamLimits

0x5dc6,	// (0x0003aaa0) clock_t1

0x5ddb,	// (0x0003aab5) clock_t2_ParamLimits

0x5ddb,	// (0x0003aab5) clock_t2

0x5ded,	// (0x0003aac7) clock_t3_ParamLimits

0x5ded,	// (0x0003aac7) clock_t3

0x5dff,	// (0x0003aad9) clock_t4_ParamLimits

0x5dff,	// (0x0003aad9) clock_t4

0x5e11,	// (0x0003aaeb) clock_t5_ParamLimits

0x5e11,	// (0x0003aaeb) clock_t5

0x5e26,	// (0x0003ab00) clock_t6_ParamLimits

0x5e26,	// (0x0003ab00) clock_t6

0x5e38,	// (0x0003ab12) clock_t7_ParamLimits

0x5e38,	// (0x0003ab12) clock_t7

0x5e4a,	// (0x0003ab24) clock_t8_ParamLimits

0x5e4a,	// (0x0003ab24) clock_t8

0x5e60,	// (0x0003ab3a) clock_t9_ParamLimits

0x5e60,	// (0x0003ab3a) clock_t9

0x0008,

0xf14c,	// (0x00043e26) clock_t_ParamLimits

0xf14c,	// (0x00043e26) clock_t

0x16d5,	// (0x000363af) popup_clock_analogue_window_cp02

0x16d5,	// (0x000363af) popup_clock_digital_window_cp01

0x16dd,	// (0x000363b7) listscroll_help_pane

0x13a1,	// (0x0003607b) phob_pre_status_pane

0x16e7,	// (0x000363c1) grid_qdial_pane

0x13a1,	// (0x0003607b) listscroll_mce_pane

0x16f1,	// (0x000363cb) bg_notes_pane

0x16ff,	// (0x000363d9) list_notes_pane

0x5e76,	// (0x0003ab50) scroll_pane_cp06

0x170d,	// (0x000363e7) bg_calc_paper_pane

0x5e85,	// (0x0003ab5f) list_calc_pane

0x1721,	// (0x000363fb) bg_calc_display_pane

0x5e9f,	// (0x0003ab79) calc_display_pane_t1

0x5eb4,	// (0x0003ab8e) calc_display_pane_t2

0x5ec9,	// (0x0003aba3) calc_display_pane_t3

0x0002,

0xf15f,	// (0x00043e39) calc_display_pane_t

0x5edb,	// (0x0003abb5) cell_calc_pane_ParamLimits

0x5edb,	// (0x0003abb5) cell_calc_pane

0x172d,	// (0x00036407) bg_calc_paper_pane_g1

0x1745,	// (0x0003641f) bg_calc_paper_pane_g2

0x1739,	// (0x00036413) bg_calc_paper_pane_g3

0x175d,	// (0x00036437) bg_calc_paper_pane_g4

0x1751,	// (0x0003642b) bg_calc_paper_pane_g5

0x5f08,	// (0x0003abe2) bg_calc_paper_pane_g6

0x5f19,	// (0x0003abf3) bg_calc_paper_pane_g7

0x5f2a,	// (0x0003ac04) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x00043e40) bg_calc_paper_pane_g

0x5f3b,	// (0x0003ac15) calc_bg_paper_pane_g9

0x5f4c,	// (0x0003ac26) list_calc_item_pane_ParamLimits

0x5f4c,	// (0x0003ac26) list_calc_item_pane

0x1769,	// (0x00036443) list_calc_item_pane_g1

0x5f86,	// (0x0003ac60) list_calc_item_pane_t1_ParamLimits

0x5f86,	// (0x0003ac60) list_calc_item_pane_t1

0x5f98,	// (0x0003ac72) list_calc_item_pane_t2_ParamLimits

0x5f98,	// (0x0003ac72) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x00043e51) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x00043e51) list_calc_item_pane_t

0x1776,	// (0x00036450) cell_calc_pane_g1

0x1780,	// (0x0003645a) grid_highlight_pane_cp02

0x17ab,	// (0x00036485) bg_calc_display_pane_g1

0x5fc8,	// (0x0003aca2) bg_calc_display_pane_g2

0x17a2,	// (0x0003647c) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x00043e5b) bg_calc_display_pane_g

0x5fd2,	// (0x0003acac) cell_qdial_pane_ParamLimits

0x5fd2,	// (0x0003acac) cell_qdial_pane

0x5fe6,	// (0x0003acc0) cell_qdial_pane_g1_ParamLimits

0x5fe6,	// (0x0003acc0) cell_qdial_pane_g1

0x5ff3,	// (0x0003accd) cell_qdial_pane_g2_ParamLimits

0x5ff3,	// (0x0003accd) cell_qdial_pane_g2

0x17b4,	// (0x0003648e) cell_qdial_pane_g3_ParamLimits

0x17b4,	// (0x0003648e) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x00043e62) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x00043e62) cell_qdial_pane_g

0x6011,	// (0x0003aceb) cell_qdial_pane_t1_ParamLimits

0x6011,	// (0x0003aceb) cell_qdial_pane_t1

0x6029,	// (0x0003ad03) cell_qdial_pane_t2_ParamLimits

0x6029,	// (0x0003ad03) cell_qdial_pane_t2

0x603c,	// (0x0003ad16) cell_qdial_pane_t3_ParamLimits

0x603c,	// (0x0003ad16) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x00043e6b) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x00043e6b) cell_qdial_pane_t

0x13a1,	// (0x0003607b) grid_highlight_pane_cp04

0x17c0,	// (0x0003649a) thumbnail_qdial_pane_ParamLimits

0x17c0,	// (0x0003649a) thumbnail_qdial_pane

0x181c,	// (0x000364f6) list_help_pane

0x1825,	// (0x000364ff) scroll_pane_cp02

0x604f,	// (0x0003ad29) help_list_pane_t1_ParamLimits

0x604f,	// (0x0003ad29) help_list_pane_t1

0x608d,	// (0x0003ad67) bg_notes_pane_g2

0x6095,	// (0x0003ad6f) bg_notes_pane_g3

0x609d,	// (0x0003ad77) notes_bg_pane_g1

0x60a5,	// (0x0003ad7f) notes_bg_pane_g4

0x60ad,	// (0x0003ad87) notes_bg_pane_g5

0x60b5,	// (0x0003ad8f) notes_bg_pane_g6

0x60bd,	// (0x0003ad97) notes_bg_pane_g7

0x60c5,	// (0x0003ad9f) notes_bg_pane_g8

0x60cd,	// (0x0003ada7) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x00043e89) notes_bg_pane_g

0x60d5,	// (0x0003adaf) list_notes_text_pane_ParamLimits

0x60d5,	// (0x0003adaf) list_notes_text_pane

0x182e,	// (0x00036508) list_notes_text_pane_g1

0x4666,	// (0x00039340) list_notes_text_pane_t1

0x1721,	// (0x000363fb) listscroll_cale_week_pane

0x6146,	// (0x0003ae20) bg_cale_heading_pane

0x1848,	// (0x00036522) bg_cale_pane_cp01

0x6162,	// (0x0003ae3c) cale_week_corner_pane

0x6173,	// (0x0003ae4d) cale_week_day_heading_pane

0x618f,	// (0x0003ae69) cale_week_scroll_pane_g1

0x61a8,	// (0x0003ae82) cale_week_scroll_pane_g2

0x61b9,	// (0x0003ae93) cale_week_scroll_pane_g3

0x61ca,	// (0x0003aea4) cale_week_scroll_pane_g4

0x61db,	// (0x0003aeb5) cale_week_scroll_pane_g5

0x61ec,	// (0x0003aec6) cale_week_scroll_pane_g6

0x61fd,	// (0x0003aed7) cale_week_scroll_pane_g7

0x6210,	// (0x0003aeea) cale_week_scroll_pane_g8

0x6223,	// (0x0003aefd) cale_week_scroll_pane_g9

0x6234,	// (0x0003af0e) cale_week_scroll_pane_g10

0x6245,	// (0x0003af1f) cale_week_scroll_pane_g11

0x6256,	// (0x0003af30) cale_week_scroll_pane_g12

0x626f,	// (0x0003af49) cale_week_scroll_pane_g13

0x6288,	// (0x0003af62) cale_week_scroll_pane_g14

0x62a1,	// (0x0003af7b) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x00043e98) cale_week_scroll_pane_g

0x62ba,	// (0x0003af94) cale_week_time_pane

0x62cd,	// (0x0003afa7) grid_cale_week_pane

0x62ea,	// (0x0003afc4) scroll_pane_cp08

0x6304,	// (0x0003afde) cell_cale_week_pane_ParamLimits

0x6304,	// (0x0003afde) cell_cale_week_pane

0x6354,	// (0x0003b02e) cale_week_day_heading_pane_t1

0x6368,	// (0x0003b042) cale_week_day_heading_pane_t2

0x637c,	// (0x0003b056) cale_week_day_heading_pane_t3

0x6390,	// (0x0003b06a) cale_week_day_heading_pane_t4

0x63a4,	// (0x0003b07e) cale_week_day_heading_pane_t5

0x63b8,	// (0x0003b092) cale_week_day_heading_pane_t6

0x63cc,	// (0x0003b0a6) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x00043eb7) cale_week_day_heading_pane_t

0x1873,	// (0x0003654d) bg_cale_side_pane

0x63e0,	// (0x0003b0ba) cale_week_time_pane_t1

0x63f8,	// (0x0003b0d2) cale_week_time_pane_t2

0x6410,	// (0x0003b0ea) cale_week_time_pane_t3

0x6428,	// (0x0003b102) cale_week_time_pane_t4

0x6440,	// (0x0003b11a) cale_week_time_pane_t5

0x6458,	// (0x0003b132) cale_week_time_pane_t6

0x6478,	// (0x0003b152) cale_week_time_pane_t7

0x6498,	// (0x0003b172) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x00043ec6) cale_week_time_pane_t

0x64b8,	// (0x0003b192) cell_cale_week_pane_g2

0x64c9,	// (0x0003b1a3) cell_cale_week_pane_g3_ParamLimits

0x64c9,	// (0x0003b1a3) cell_cale_week_pane_g3

0x1881,	// (0x0003655b) grid_highlight_pane_cp07

0x1889,	// (0x00036563) listscroll_gms_pane

0x1893,	// (0x0003656d) grid_gms_pane

0x189c,	// (0x00036576) listscroll_gms_pane_g1

0x18a4,	// (0x0003657e) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x00043ed7) listscroll_gms_pane_g

0x64e1,	// (0x0003b1bb) scroll_pane_cp010

0x64ec,	// (0x0003b1c6) cell_gms_pane_ParamLimits

0x64ec,	// (0x0003b1c6) cell_gms_pane

0x64fe,	// (0x0003b1d8) cell_gms_pane_g1

0x18ac,	// (0x00036586) cell_gms_pane_g2

0x182e,	// (0x00036508) cell_gms_pane_g3

0x18b4,	// (0x0003658e) cell_gms_pane_g4

0x0003,

0xf202,	// (0x00043edc) cell_gms_pane_g

0x18bd,	// (0x00036597) grid_highlight_pane_cp09

0x87ac,	// (0x0003d486) phob_pre_status_pane_g1

0x87b4,	// (0x0003d48e) phob_pre_status_pane_g2

0x87bc,	// (0x0003d496) phob_pre_status_pane_g3

0x87c4,	// (0x0003d49e) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x000442cb) phob_pre_status_pane_g

0x87d4,	// (0x0003d4ae) phob_pre_status_pane_t1

0x87e4,	// (0x0003d4be) phob_pre_status_pane_t2

0x87f4,	// (0x0003d4ce) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x000442d6) phob_pre_status_pane_t

0x13a1,	// (0x0003607b) bg_list_pane_cp05

0x650e,	// (0x0003b1e8) grid_vorec_pane

0x6518,	// (0x0003b1f2) vorec_t1

0x6526,	// (0x0003b200) vorec_t2

0x6534,	// (0x0003b20e) vorec_t3

0x6542,	// (0x0003b21c) vorec_t4

0x6550,	// (0x0003b22a) vorec_t5

0x655e,	// (0x0003b238) vorec_t6

0x0006,

0xf20b,	// (0x00043ee5) vorec_t

0x657a,	// (0x0003b254) wait_bar_pane_cp01

0x18c5,	// (0x0003659f) cell_vorec_pane_ParamLimits

0x18c5,	// (0x0003659f) cell_vorec_pane

0x18d8,	// (0x000365b2) cell_vorec_pane_g1

0x13a1,	// (0x0003607b) grid_highlight_pane_cp05

0x6592,	// (0x0003b26c) cams_zoom_pane

0x659e,	// (0x0003b278) image_vga_pane

0x65ad,	// (0x0003b287) main_camera_pane_g1

0x65bb,	// (0x0003b295) main_camera_pane_g2

0x65c9,	// (0x0003b2a3) main_camera_pane_g3

0x65d5,	// (0x0003b2af) main_camera_pane_g4

0x65e1,	// (0x0003b2bb) main_camera_pane_g5

0x65ed,	// (0x0003b2c7) main_camera_pane_g6

0x65f9,	// (0x0003b2d3) main_camera_pane_g7

0x0007,

0xf21a,	// (0x00043ef4) main_camera_pane_g

0x6605,	// (0x0003b2df) main_camera_pane_t1

0x6617,	// (0x0003b2f1) main_camera_pane_t2

0x0001,

0xf22b,	// (0x00043f05) main_camera_pane_t

0x6638,	// (0x0003b312) cams_zoom_pane_cp_ParamLimits

0x6638,	// (0x0003b312) cams_zoom_pane_cp

0x665c,	// (0x0003b336) image_cif_pane_ParamLimits

0x665c,	// (0x0003b336) image_cif_pane

0x667a,	// (0x0003b354) image_subqcif_pane

0x6682,	// (0x0003b35c) main_video_pane_g1_ParamLimits

0x6682,	// (0x0003b35c) main_video_pane_g1

0x66a2,	// (0x0003b37c) main_video_pane_g2_ParamLimits

0x66a2,	// (0x0003b37c) main_video_pane_g2

0x66d4,	// (0x0003b3ae) main_video_pane_g3_ParamLimits

0x66d4,	// (0x0003b3ae) main_video_pane_g3

0x66ff,	// (0x0003b3d9) main_video_pane_g4_ParamLimits

0x66ff,	// (0x0003b3d9) main_video_pane_g4

0x672a,	// (0x0003b404) main_video_pane_g5_ParamLimits

0x672a,	// (0x0003b404) main_video_pane_g5

0x18ee,	// (0x000365c8) main_video_pane_g6_ParamLimits

0x18ee,	// (0x000365c8) main_video_pane_g6

0x0006,

0xf230,	// (0x00043f0a) main_video_pane_g_ParamLimits

0xf230,	// (0x00043f0a) main_video_pane_g

0x674e,	// (0x0003b428) main_video_pane_t1_ParamLimits

0x674e,	// (0x0003b428) main_video_pane_t1

0x1908,	// (0x000365e2) cams_zoom_pane_g1

0x1911,	// (0x000365eb) cams_zoom_pane_g2

0x191a,	// (0x000365f4) cams_zoom_pane_g3

0x1923,	// (0x000365fd) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x00043f19) cams_zoom_pane_g

0x6798,	// (0x0003b472) grid_cams_pane

0x67a6,	// (0x0003b480) linegrid_cams_pane

0x67b4,	// (0x0003b48e) cell_cams_pane_ParamLimits

0x67b4,	// (0x0003b48e) cell_cams_pane

0x192c,	// (0x00036606) cams_burst_image_pane

0x1934,	// (0x0003660e) cell_cams_pane_g1

0x13a1,	// (0x0003607b) grid_highlight_pane_cp03

0x1776,	// (0x00036450) mp_bg_pane_g1

0x13a1,	// (0x0003607b) bg_list_pane_cp03

0x3675,	// (0x0003834f) bg_mp_pane

0x367d,	// (0x00038357) grid_mp_pane

0x3685,	// (0x0003835f) media_player_g1

0x368d,	// (0x00038367) media_player_t1

0x369b,	// (0x00038375) media_player_t2

0x36a9,	// (0x00038383) media_player_t3

0x36b7,	// (0x00038391) media_player_t4

0x36c5,	// (0x0003839f) media_player_t5

0x36d3,	// (0x000383ad) media_player_t6

0x36e1,	// (0x000383bb) media_player_t7

0x0006,

0xf5db,	// (0x000442b5) media_player_t

0x36ef,	// (0x000383c9) wait_bar_pane_cp02

0xf5c0,	// (0x0004429a) main_usb_pane_t

0x87a3,	// (0x0003d47d) cell_mp_pane

0x1776,	// (0x00036450) cell_mp_pane_g1

0x13a1,	// (0x0003607b) grid_highlight_pane_cp06

0x19f9,	// (0x000366d3) grid_skin_colour_pane

0x1a01,	// (0x000366db) list_highlight_pane_cp03

0x67c7,	// (0x0003b4a1) skin_g1

0x1a09,	// (0x000366e3) skin_t1

0x1a18,	// (0x000366f2) skin_t2

0x0001,

0xf274,	// (0x00043f4e) skin_t

0x67d1,	// (0x0003b4ab) cell_skin_colour_pane_ParamLimits

0x67d1,	// (0x0003b4ab) cell_skin_colour_pane

0x1a26,	// (0x00036700) cell_skin_colour_pane_g1

0x6855,	// (0x0003b52f) call_video_g1_ParamLimits

0x6855,	// (0x0003b52f) call_video_g1

0x6865,	// (0x0003b53f) call_video_g2_ParamLimits

0x6865,	// (0x0003b53f) call_video_g2

0x0001,

0xf279,	// (0x00043f53) call_video_g_ParamLimits

0xf279,	// (0x00043f53) call_video_g

0x68bf,	// (0x0003b599) call_video_uplink_pane_cp1_ParamLimits

0x68bf,	// (0x0003b599) call_video_uplink_pane_cp1

0x1a38,	// (0x00036712) call_video_uplink_pane_cp2

0x698b,	// (0x0003b665) video_down_crop_pane_ParamLimits

0x698b,	// (0x0003b665) video_down_crop_pane

0x6a7d,	// (0x0003b757) video_down_pane_ParamLimits

0x6a7d,	// (0x0003b757) video_down_pane

0x1a40,	// (0x0003671a) video_down_subqcif_pane_ParamLimits

0x1a40,	// (0x0003671a) video_down_subqcif_pane

0x1a58,	// (0x00036732) video_down_subqcif_pane_cp_ParamLimits

0x1a58,	// (0x00036732) video_down_subqcif_pane_cp

0x1a7e,	// (0x00036758) im_reading_pane_ParamLimits

0x1a7e,	// (0x00036758) im_reading_pane

0x6b9f,	// (0x0003b879) im_writing_pane_ParamLimits

0x6b9f,	// (0x0003b879) im_writing_pane

0x6bbd,	// (0x0003b897) im_reading_pane_t1

0x1a98,	// (0x00036772) list_im_pane

0x1aa9,	// (0x00036783) scroll_pane_cp07

0x6c1d,	// (0x0003b8f7) im_writing_pane_t1_ParamLimits

0x6c1d,	// (0x0003b8f7) im_writing_pane_t1

0x1ac2,	// (0x0003679c) im_writing_pane_t2_ParamLimits

0x1ac2,	// (0x0003679c) im_writing_pane_t2

0x0001,

0xf283,	// (0x00043f5d) im_writing_pane_t_ParamLimits

0xf283,	// (0x00043f5d) im_writing_pane_t

0x13a1,	// (0x0003607b) input_focus_pane_cp04

0x13a1,	// (0x0003607b) input_focus_pane_cp05

0x6c2f,	// (0x0003b909) list_im_single_pane_ParamLimits

0x6c2f,	// (0x0003b909) list_im_single_pane

0x6c5b,	// (0x0003b935) list_single_im_pane_t1

0x8767,	// (0x0003d441) blid_accuracy_pane

0x876f,	// (0x0003d449) blid_compass_pane

0x8779,	// (0x0003d453) main_location_t1

0x8787,	// (0x0003d461) main_location_t2

0x8795,	// (0x0003d46f) main_location_t3

0x0002,

0xf5ea,	// (0x000442c4) main_location_t

0x13a1,	// (0x0003607b) aid_levels_location

0x1776,	// (0x00036450) blid_accuracy_pane_g1

0x1776,	// (0x00036450) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x00043fbf) blid_accuracy_pane_g

0x1b0a,	// (0x000367e4) wml_content_pane

0x1b48,	// (0x00036822) wml_button_pane_ParamLimits

0x1b48,	// (0x00036822) wml_button_pane

0x6c6a,	// (0x0003b944) wml_list_single_large_pane_ParamLimits

0x6c6a,	// (0x0003b944) wml_list_single_large_pane

0x6c9c,	// (0x0003b976) wml_list_single_medium_pane_ParamLimits

0x6c9c,	// (0x0003b976) wml_list_single_medium_pane

0x6cd5,	// (0x0003b9af) wml_list_single_small_pane_ParamLimits

0x6cd5,	// (0x0003b9af) wml_list_single_small_pane

0x1b5c,	// (0x00036836) wml_selection_box_pane_ParamLimits

0x1b5c,	// (0x00036836) wml_selection_box_pane

0x1b6f,	// (0x00036849) wml_list_single_pane_t1

0x1b7e,	// (0x00036858) wml_list_single_medium_pane_t1

0x1b8d,	// (0x00036867) wml_list_single_large_pane_t1

0x1b9c,	// (0x00036876) input_focus_pane_cp02_ParamLimits

0x1b9c,	// (0x00036876) input_focus_pane_cp02

0x1baf,	// (0x00036889) wml_selection_box_pane_g1

0x1bb8,	// (0x00036892) wml_selection_box_pane_t1_ParamLimits

0x1bb8,	// (0x00036892) wml_selection_box_pane_t1

0x160a,	// (0x000362e4) bg_wml_button_pane_ParamLimits

0x160a,	// (0x000362e4) bg_wml_button_pane

0x1bd0,	// (0x000368aa) wml_button_pane_g1

0x1bd8,	// (0x000368b2) wml_button_pane_t1

0x1bd0,	// (0x000368aa) wml_button_bg_pane_g1

0x1be8,	// (0x000368c2) wml_button_bg_pane_g2

0x1bf0,	// (0x000368ca) wml_button_bg_pane_g3

0x1bf8,	// (0x000368d2) wml_button_bg_pane_g4

0x1c00,	// (0x000368da) wml_button_bg_pane_g5

0x1c08,	// (0x000368e2) wml_button_bg_pane_g6

0x1c10,	// (0x000368ea) wml_button_bg_pane_g7

0x1c18,	// (0x000368f2) wml_button_bg_pane_g8

0x1c20,	// (0x000368fa) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x00043f62) wml_button_bg_pane_g

0x6d1d,	// (0x0003b9f7) bg_list_pane_cp02

0x1c28,	// (0x00036902) mce_header_pane_ParamLimits

0x1c28,	// (0x00036902) mce_header_pane

0x1c3e,	// (0x00036918) mce_icon_pane

0x1c3e,	// (0x00036918) mce_image_pane

0x1c47,	// (0x00036921) mce_text_pane_ParamLimits

0x1c47,	// (0x00036921) mce_text_pane

0x6d27,	// (0x0003ba01) scroll_pane_cp03

0x1b40,	// (0x0003681a) scroll_pane_cp04

0x1c5a,	// (0x00036934) scroll_pane_cp05_ParamLimits

0x1c5a,	// (0x00036934) scroll_pane_cp05

0x6d31,	// (0x0003ba0b) mce_header_field_pane_ParamLimits

0x6d31,	// (0x0003ba0b) mce_header_field_pane

0x6d51,	// (0x0003ba2b) mce_header_field_pane_2_ParamLimits

0x6d51,	// (0x0003ba2b) mce_header_field_pane_2

0x6d67,	// (0x0003ba41) mce_header_field_pane_3

0x6d6f,	// (0x0003ba49) list_single_mce_message_pane_ParamLimits

0x6d6f,	// (0x0003ba49) list_single_mce_message_pane

0x6d9f,	// (0x0003ba79) list_single_mce_smart_pane_ParamLimits

0x6d9f,	// (0x0003ba79) list_single_mce_smart_pane

0x1c66,	// (0x00036940) input_focus_pane_cp03

0x1c6f,	// (0x00036949) list_header_data_pane

0x6dda,	// (0x0003bab4) mce_header_field_pane_t1

0x6dea,	// (0x0003bac4) list_single_mce_header_pane_ParamLimits

0x6dea,	// (0x0003bac4) list_single_mce_header_pane

0x1c77,	// (0x00036951) list_single_mce_header_pane_t1

0x1c86,	// (0x00036960) list_single_mce_message_pane_g1

0x1c8e,	// (0x00036968) list_single_mce_message_pane_t1

0x6e3c,	// (0x0003bb16) bg_cale_heading_pane_cp01_ParamLimits

0x6e3c,	// (0x0003bb16) bg_cale_heading_pane_cp01

0x1c9c,	// (0x00036976) bg_cale_pane_cp02_ParamLimits

0x1c9c,	// (0x00036976) bg_cale_pane_cp02

0x6e6f,	// (0x0003bb49) cale_month_corner_pane

0x6e85,	// (0x0003bb5f) cale_month_day_heading_pane_ParamLimits

0x6e85,	// (0x0003bb5f) cale_month_day_heading_pane

0x6ec8,	// (0x0003bba2) cale_month_pane_g1_ParamLimits

0x6ec8,	// (0x0003bba2) cale_month_pane_g1

0x6ef4,	// (0x0003bbce) cale_month_pane_g2_ParamLimits

0x6ef4,	// (0x0003bbce) cale_month_pane_g2

0x6f17,	// (0x0003bbf1) cale_month_pane_g3_ParamLimits

0x6f17,	// (0x0003bbf1) cale_month_pane_g3

0x6f53,	// (0x0003bc2d) cale_month_pane_g4_ParamLimits

0x6f53,	// (0x0003bc2d) cale_month_pane_g4

0x6f8f,	// (0x0003bc69) cale_month_pane_g5_ParamLimits

0x6f8f,	// (0x0003bc69) cale_month_pane_g5

0x6fcb,	// (0x0003bca5) cale_month_pane_g6_ParamLimits

0x6fcb,	// (0x0003bca5) cale_month_pane_g6

0x7007,	// (0x0003bce1) cale_month_pane_g7_ParamLimits

0x7007,	// (0x0003bce1) cale_month_pane_g7

0x7053,	// (0x0003bd2d) cale_month_pane_g8_ParamLimits

0x7053,	// (0x0003bd2d) cale_month_pane_g8

0x709f,	// (0x0003bd79) cale_month_pane_g9_ParamLimits

0x709f,	// (0x0003bd79) cale_month_pane_g9

0x70e5,	// (0x0003bdbf) cale_month_pane_g10_ParamLimits

0x70e5,	// (0x0003bdbf) cale_month_pane_g10

0x712b,	// (0x0003be05) cale_month_pane_g11_ParamLimits

0x712b,	// (0x0003be05) cale_month_pane_g11

0x7169,	// (0x0003be43) cale_month_pane_g12_ParamLimits

0x7169,	// (0x0003be43) cale_month_pane_g12

0x71a7,	// (0x0003be81) cale_month_pane_g13_ParamLimits

0x71a7,	// (0x0003be81) cale_month_pane_g13

0x000c,

0xf29b,	// (0x00043f75) cale_month_pane_g_ParamLimits

0xf29b,	// (0x00043f75) cale_month_pane_g

0x71e5,	// (0x0003bebf) cale_month_week_pane

0x71f8,	// (0x0003bed2) grid_cale_month_pane_ParamLimits

0x71f8,	// (0x0003bed2) grid_cale_month_pane

0x7236,	// (0x0003bf10) cale_month_day_heading_pane_t1

0x7294,	// (0x0003bf6e) cale_month_day_heading_pane_t2

0x72f9,	// (0x0003bfd3) cale_month_day_heading_pane_t3

0x735e,	// (0x0003c038) cale_month_day_heading_pane_t4

0x73c3,	// (0x0003c09d) cale_month_day_heading_pane_t5

0x7428,	// (0x0003c102) cale_month_day_heading_pane_t6

0x7495,	// (0x0003c16f) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x00043f90) cale_month_day_heading_pane_t

0x1873,	// (0x0003654d) bg_cale_side_pane_cp01

0x750a,	// (0x0003c1e4) cale_month_week_pane_t1

0x7521,	// (0x0003c1fb) cale_month_week_pane_t2

0x7538,	// (0x0003c212) cale_month_week_pane_t3

0x754f,	// (0x0003c229) cale_month_week_pane_t4

0x7566,	// (0x0003c240) cale_month_week_pane_t5

0x7585,	// (0x0003c25f) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x00043f9f) cale_month_week_pane_t

0x75a4,	// (0x0003c27e) cell_cale_month_pane_ParamLimits

0x75a4,	// (0x0003c27e) cell_cale_month_pane

0x7672,	// (0x0003c34c) cell_cale_month_pane_g1

0x767e,	// (0x0003c358) cell_cale_month_pane_t1_ParamLimits

0x767e,	// (0x0003c358) cell_cale_month_pane_t1

0x1881,	// (0x0003655b) grid_highlight_pane_cp08

0x1776,	// (0x00036450) main_smil_g1

0x769a,	// (0x0003c374) smil_status_pane

0x1cfb,	// (0x000369d5) smil_text_pane

0x358d,	// (0x00038267) bg_popup_call3_rect_pane_g8

0x3595,	// (0x0003826f) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x00044258) bg_popup_call3_rect_pane_g

0x37eb,	// (0x000384c5) smil_status_volume_pane_g1

0x1d05,	// (0x000369df) smil_status_pane_t1

0x8b8c,	// (0x0003d866) volume_smil_pane

0x1d1c,	// (0x000369f6) list_smil_text_pane

0x76ad,	// (0x0003c387) scroll_pane_cp011

0x76b8,	// (0x0003c392) smil_text_list_pane_t1_ParamLimits

0x76b8,	// (0x0003c392) smil_text_list_pane_t1

0x7763,	// (0x0003c43d) aid_volume_smil_ParamLimits

0x7763,	// (0x0003c43d) aid_volume_smil

0x1776,	// (0x00036450) smil_volume_pane_g1

0x1776,	// (0x00036450) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x00043fbf) smil_volume_pane_g

0x1721,	// (0x000363fb) listscroll_cale_day_pane

0x1d26,	// (0x00036a00) bg_cale_pane

0x1d3e,	// (0x00036a18) list_cale_pane

0x1d4f,	// (0x00036a29) scroll_pane_cp09

0x1d60,	// (0x00036a3a) cale_bg_pane_g1

0x1d68,	// (0x00036a42) cale_bg_pane_g2

0x1d70,	// (0x00036a4a) cale_bg_pane_g3

0x1d78,	// (0x00036a52) cale_bg_pane_g4

0x1d80,	// (0x00036a5a) cale_bg_pane_g5

0x1d88,	// (0x00036a62) cale_bg_pane_g6

0x1d90,	// (0x00036a6a) cale_bg_pane_g7

0x1d98,	// (0x00036a72) cale_bg_pane_g8

0x1da0,	// (0x00036a7a) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x00043fc4) cale_bg_pane_g

0x7785,	// (0x0003c45f) list_cale_time_pane_ParamLimits

0x7785,	// (0x0003c45f) list_cale_time_pane

0x77a6,	// (0x0003c480) list_cale_time_pane_g1_ParamLimits

0x77a6,	// (0x0003c480) list_cale_time_pane_g1

0x1da8,	// (0x00036a82) list_cale_time_pane_g2_ParamLimits

0x1da8,	// (0x00036a82) list_cale_time_pane_g2

0x77b2,	// (0x0003c48c) list_cale_time_pane_g3_ParamLimits

0x77b2,	// (0x0003c48c) list_cale_time_pane_g3

0x77ce,	// (0x0003c4a8) list_cale_time_pane_g4_ParamLimits

0x77ce,	// (0x0003c4a8) list_cale_time_pane_g4

0x77dc,	// (0x0003c4b6) list_cale_time_pane_g5_ParamLimits

0x77dc,	// (0x0003c4b6) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x00043fd7) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x00043fd7) list_cale_time_pane_g

0x77ea,	// (0x0003c4c4) list_cale_time_pane_t1_ParamLimits

0x77ea,	// (0x0003c4c4) list_cale_time_pane_t1

0x7812,	// (0x0003c4ec) list_cale_time_pane_t2_ParamLimits

0x7812,	// (0x0003c4ec) list_cale_time_pane_t2

0x7b12,	// (0x0003c7ec) aid_blid_cardinal_pane

0x7b54,	// (0x0003c82e) compass_pane_t4

0x783a,	// (0x0003c514) list_cale_time_pane_t4_ParamLimits

0x783a,	// (0x0003c514) list_cale_time_pane_t4

0x7b62,	// (0x0003c83c) compass_pane_t5

0x7b72,	// (0x0003c84c) compass_pane_t6

0x7b80,	// (0x0003c85a) compass_pane_t7

0x2257,	// (0x00036f31) navi_pane_cc_t1

0x23ac,	// (0x00037086) aid_phob_thumbnail_center_pane

0x825d,	// (0x0003cf37) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x00043fe4) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x00043fe4) list_cale_time_pane_t

0x0ffa,	// (0x00035cd4) bg_popup_window_pane_cp02_ParamLimits

0x0ffa,	// (0x00035cd4) bg_popup_window_pane_cp02

0x1dc2,	// (0x00036a9c) heading_pane_cp01_ParamLimits

0x1dc2,	// (0x00036a9c) heading_pane_cp01

0x1dce,	// (0x00036aa8) loc_req_pane_ParamLimits

0x1dce,	// (0x00036aa8) loc_req_pane

0x1dde,	// (0x00036ab8) loc_type_pane_ParamLimits

0x1dde,	// (0x00036ab8) loc_type_pane

0x1df0,	// (0x00036aca) loc_type_pane_t1_ParamLimits

0x1df0,	// (0x00036aca) loc_type_pane_t1

0x1e02,	// (0x00036adc) loc_type_pane_t2_ParamLimits

0x1e02,	// (0x00036adc) loc_type_pane_t2

0x1e14,	// (0x00036aee) loc_type_pane_t3_ParamLimits

0x1e14,	// (0x00036aee) loc_type_pane_t3

0x0002,

0xf311,	// (0x00043feb) loc_type_pane_t_ParamLimits

0xf311,	// (0x00043feb) loc_type_pane_t

0x1e26,	// (0x00036b00) list_loc_req_pane

0x1e30,	// (0x00036b0a) scroll_pane_cp012

0x7862,	// (0x0003c53c) list_single_loc_request_popup_menu_pane_ParamLimits

0x7862,	// (0x0003c53c) list_single_loc_request_popup_menu_pane

0x1e3b,	// (0x00036b15) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1e3b,	// (0x00036b15) list_single_loc_request_popup_menu_pane_g1

0x1e47,	// (0x00036b21) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1e47,	// (0x00036b21) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x00043ff2) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x00043ff2) list_single_loc_request_popup_menu_pane_g

0x1e53,	// (0x00036b2d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1e53,	// (0x00036b2d) list_single_loc_request_popup_menu_pane_t1

0x7874,	// (0x0003c54e) bg_popup_window_pane_cp03_ParamLimits

0x7874,	// (0x0003c54e) bg_popup_window_pane_cp03

0x7882,	// (0x0003c55c) heading_loc_req_pane_ParamLimits

0x7882,	// (0x0003c55c) heading_loc_req_pane

0x788e,	// (0x0003c568) popup_dyc_status_message_window_g1_ParamLimits

0x788e,	// (0x0003c568) popup_dyc_status_message_window_g1

0x789a,	// (0x0003c574) popup_dyc_status_message_window_t1_ParamLimits

0x789a,	// (0x0003c574) popup_dyc_status_message_window_t1

0x78ac,	// (0x0003c586) popup_dyc_status_message_window_t2_ParamLimits

0x78ac,	// (0x0003c586) popup_dyc_status_message_window_t2

0x78be,	// (0x0003c598) popup_dyc_status_message_window_t3_ParamLimits

0x78be,	// (0x0003c598) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x00043ff7) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x00043ff7) popup_dyc_status_message_window_t

0x13a1,	// (0x0003607b) bg_heading_pane_cp01

0x1e75,	// (0x00036b4f) heading_loc_req_pane_g1

0x1e7d,	// (0x00036b57) heading_loc_req_pane_g2

0x1e85,	// (0x00036b5f) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x00043ffe) heading_loc_req_pane_g

0x1e8d,	// (0x00036b67) heading_loc_req_pane_t1

0x1f11,	// (0x00036beb) bg_popup_sub_pane_cp01_ParamLimits

0x1f11,	// (0x00036beb) bg_popup_sub_pane_cp01

0x1f1f,	// (0x00036bf9) popup_cale_events_window_g1_ParamLimits

0x1f1f,	// (0x00036bf9) popup_cale_events_window_g1

0x1f3f,	// (0x00036c19) popup_cale_events_window_g2_ParamLimits

0x1f3f,	// (0x00036c19) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x00044032) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x00044032) popup_cale_events_window_g

0x1f5f,	// (0x00036c39) popup_cale_events_window_t1_ParamLimits

0x1f5f,	// (0x00036c39) popup_cale_events_window_t1

0x1f71,	// (0x00036c4b) popup_cale_events_window_t2_ParamLimits

0x1f71,	// (0x00036c4b) popup_cale_events_window_t2

0x1faf,	// (0x00036c89) popup_cale_events_window_t3_ParamLimits

0x1faf,	// (0x00036c89) popup_cale_events_window_t3

0x1fe9,	// (0x00036cc3) popup_cale_events_window_t4_ParamLimits

0x1fe9,	// (0x00036cc3) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x00044037) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x00044037) popup_cale_events_window_t

0x78e8,	// (0x0003c5c2) call_type_pane

0x23c4,	// (0x0003709e) popup_call_status_window_g1

0x78f4,	// (0x0003c5ce) popup_call_status_window_g2

0x7900,	// (0x0003c5da) popup_call_status_window_g3

0x0002,

0xf366,	// (0x00044040) popup_call_status_window_g

0x201f,	// (0x00036cf9) call_type_pane_g1

0x2028,	// (0x00036d02) call_type_pane_g2

0x0001,

0xf36d,	// (0x00044047) call_type_pane_g

0x13a1,	// (0x0003607b) bg_popup_sub_pane_cp02

0x2031,	// (0x00036d0b) listscroll_popup_wml_pane

0x2039,	// (0x00036d13) list_wml_pane

0x2043,	// (0x00036d1d) scroll_pane_cp013

0x204e,	// (0x00036d28) list_single_graphic_popup_wml_pane_ParamLimits

0x204e,	// (0x00036d28) list_single_graphic_popup_wml_pane

0x1776,	// (0x00036450) list_single_graphic_popup_wml_pane_g1

0x2062,	// (0x00036d3c) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x0004404c) list_single_graphic_popup_wml_pane_g

0x206a,	// (0x00036d44) list_single_graphic_popup_wml_pane_t1

0x2078,	// (0x00036d52) aid_call_pane

0x1602,	// (0x000362dc) popup_clock_analogue_window_g1

0x1602,	// (0x000362dc) popup_clock_analogue_window_g2

0x790c,	// (0x0003c5e6) popup_clock_analogue_window_g3

0x790c,	// (0x0003c5e6) popup_clock_analogue_window_g4

0x1776,	// (0x00036450) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x00044051) popup_clock_analogue_window_g

0x7914,	// (0x0003c5ee) popup_clock_analogue_window_t1

0x7922,	// (0x0003c5fc) clock_digital_number_pane_ParamLimits

0x7922,	// (0x0003c5fc) clock_digital_number_pane

0x792e,	// (0x0003c608) clock_digital_number_pane_cp02_ParamLimits

0x792e,	// (0x0003c608) clock_digital_number_pane_cp02

0x793a,	// (0x0003c614) clock_digital_number_pane_cp03_ParamLimits

0x793a,	// (0x0003c614) clock_digital_number_pane_cp03

0x7946,	// (0x0003c620) clock_digital_number_pane_cp04_ParamLimits

0x7946,	// (0x0003c620) clock_digital_number_pane_cp04

0x7952,	// (0x0003c62c) clock_digital_separator_pane_ParamLimits

0x7952,	// (0x0003c62c) clock_digital_separator_pane

0x795e,	// (0x0003c638) popup_clock_digital_window_t1

0x1776,	// (0x00036450) clock_digital_number_pane_g1

0x1776,	// (0x00036450) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x00043fbf) clock_digital_number_pane_g

0x1776,	// (0x00036450) clock_digital_separator_pane_g1

0x1776,	// (0x00036450) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x00043fbf) clock_digital_separator_pane_g

0x13a1,	// (0x0003607b) bg_popup_window_pane_cp04

0x2088,	// (0x00036d62) heading_pane_cp03

0x2090,	// (0x00036d6a) listscroll_popup_gms_pane

0x2098,	// (0x00036d72) grid_large_graphic_popup_pane

0x20a2,	// (0x00036d7c) listscroll_popup_gms_pane_g1

0x20aa,	// (0x00036d84) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x0004405c) listscroll_popup_gms_pane_g

0x1b40,	// (0x0003681a) scroll_pane_cp014

0x20b2,	// (0x00036d8c) cell_large_graphic_popup_pane_ParamLimits

0x20b2,	// (0x00036d8c) cell_large_graphic_popup_pane

0x20ca,	// (0x00036da4) cell_large_graphic_popup_pane_g1_ParamLimits

0x20ca,	// (0x00036da4) cell_large_graphic_popup_pane_g1

0x20d6,	// (0x00036db0) cell_large_graphic_popup_pane_g2_ParamLimits

0x20d6,	// (0x00036db0) cell_large_graphic_popup_pane_g2

0x20e2,	// (0x00036dbc) cell_large_graphic_popup_pane_g3_ParamLimits

0x20e2,	// (0x00036dbc) cell_large_graphic_popup_pane_g3

0x20ef,	// (0x00036dc9) cell_large_graphic_popup_pane_g4_ParamLimits

0x20ef,	// (0x00036dc9) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x00044061) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x00044061) cell_large_graphic_popup_pane_g

0x20ff,	// (0x00036dd9) grid_highlight_pane_cp010

0x1776,	// (0x00036450) bg_popup_call_pane_g1

0x2109,	// (0x00036de3) list_single_graphic_popup_conf_pane_ParamLimits

0x2109,	// (0x00036de3) list_single_graphic_popup_conf_pane

0x211b,	// (0x00036df5) list_highlight_pane_cp01

0x2124,	// (0x00036dfe) list_single_graphic_popup_conf_pane_g1

0x212c,	// (0x00036e06) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x0004406a) list_single_graphic_popup_conf_pane_g

0x2134,	// (0x00036e0e) list_single_graphic_popup_conf_pane_t1

0x2142,	// (0x00036e1c) linegrid_cams_pane_g1

0x797b,	// (0x0003c655) linegrid_cams_pane_g2

0x182e,	// (0x00036508) linegrid_cams_pane_g3

0x214b,	// (0x00036e25) linegrid_cams_pane_g4

0x7984,	// (0x0003c65e) linegrid_cams_pane_g5

0x798d,	// (0x0003c667) linegrid_cams_pane_g6

0x18b4,	// (0x0003658e) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x0004406f) linegrid_cams_pane_g

0x2154,	// (0x00036e2e) popup_clock_analogue_window

0x2154,	// (0x00036e2e) popup_clock_digital_window

0x13a1,	// (0x0003607b) popup_phob_thumbnail_window

0x1776,	// (0x00036450) call_video_uplink_pane_g1

0x215d,	// (0x00036e37) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x0004407e) call_video_uplink_pane_g

0x1881,	// (0x0003655b) video_uplink_pane

0x2165,	// (0x00036e3f) mce_image_pane_g1

0x7996,	// (0x0003c670) mce_image_pane_g2

0x799e,	// (0x0003c678) mce_image_pane_g3

0x79a6,	// (0x0003c680) mce_image_pane_g4

0x79ae,	// (0x0003c688) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x00044083) mce_image_pane_g

0x216f,	// (0x00036e49) control_top_pane_stacon_cp01_ParamLimits

0x216f,	// (0x00036e49) control_top_pane_stacon_cp01

0x2183,	// (0x00036e5d) uni_indicator_pane_stacon_cp01_ParamLimits

0x2183,	// (0x00036e5d) uni_indicator_pane_stacon_cp01

0x2194,	// (0x00036e6e) bg_popup_sub_pane_cp03

0x79b6,	// (0x0003c690) chi_dic_find_pane

0x79be,	// (0x0003c698) listscroll_chi_dic_pane

0x79c7,	// (0x0003c6a1) main_pane_chidic_g1

0x79da,	// (0x0003c6b4) chi_dic_find_pane_t1

0x219e,	// (0x00036e78) find_chidic_pane

0x21a7,	// (0x00036e81) chi_dic_list_pane_ParamLimits

0x21a7,	// (0x00036e81) chi_dic_list_pane

0x21b8,	// (0x00036e92) scroll_pane_cp020

0x79e8,	// (0x0003c6c2) find_chidic_pane_t1

0x13a1,	// (0x0003607b) input_focus_pane_cp06

0x79f7,	// (0x0003c6d1) list_chi_dic_pane_ParamLimits

0x79f7,	// (0x0003c6d1) list_chi_dic_pane

0x21c0,	// (0x00036e9a) list_chi_dic_pane_t1_ParamLimits

0x21c0,	// (0x00036e9a) list_chi_dic_pane_t1

0x13a1,	// (0x0003607b) list_highlight_pane_cp020

0x21d3,	// (0x00036ead) bg_cale_heading_pane_g1

0x7a18,	// (0x0003c6f2) bg_cale_heading_pane_g2

0x7a20,	// (0x0003c6fa) bg_cale_heading_pane_g3

0x7a28,	// (0x0003c702) bg_cale_heading_pane_g4

0x7a32,	// (0x0003c70c) bg_cale_heading_pane_g5

0x7a3c,	// (0x0003c716) bg_cale_heading_pane_g6

0x7a44,	// (0x0003c71e) bg_cale_heading_pane_g7

0x7a4c,	// (0x0003c726) bg_cale_heading_pane_g8

0x7a56,	// (0x0003c730) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x0004408e) bg_cale_heading_pane_g

0x21d3,	// (0x00036ead) bg_cale_side_pane_g1

0x7a60,	// (0x0003c73a) bg_cale_side_pane_g2

0x7a6a,	// (0x0003c744) bg_cale_side_pane_g3

0x7a74,	// (0x0003c74e) bg_cale_side_pane_g4

0x7a7e,	// (0x0003c758) bg_cale_side_pane_g5

0x7a88,	// (0x0003c762) bg_cale_side_pane_g6

0x7a92,	// (0x0003c76c) bg_cale_side_pane_g7

0x7a9c,	// (0x0003c776) bg_cale_side_pane_g8

0x7aa4,	// (0x0003c77e) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x000440a1) bg_cale_side_pane_g

0x7aac,	// (0x0003c786) popup_call_status_window_ParamLimits

0x7aac,	// (0x0003c786) popup_call_status_window

0x21db,	// (0x00036eb5) stacon_top_pane

0x21e3,	// (0x00036ebd) status_pane_ParamLimits

0x21e3,	// (0x00036ebd) status_pane

0x21f8,	// (0x00036ed2) status_small_pane

0x2200,	// (0x00036eda) control_pane

0x13a1,	// (0x0003607b) stacon_bottom_pane

0x2208,	// (0x00036ee2) list_single_mce_smart_pane_t1_ParamLimits

0x2208,	// (0x00036ee2) list_single_mce_smart_pane_t1

0x221b,	// (0x00036ef5) list_single_mce_smart_pane_t2_ParamLimits

0x221b,	// (0x00036ef5) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x000440b4) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x000440b4) list_single_mce_smart_pane_t

0x7ab8,	// (0x0003c792) compass_pane

0x7ac4,	// (0x0003c79e) main_location2_pane_t1

0x7ad8,	// (0x0003c7b2) main_location2_pane_t2

0x7aec,	// (0x0003c7c6) main_location2_pane_t3

0x0003,

0xf3df,	// (0x000440b9) main_location2_pane_t

0x223a,	// (0x00036f14) compass_pane_g1_ParamLimits

0x223a,	// (0x00036f14) compass_pane_g1

0x7b36,	// (0x0003c810) compass_pane_t1

0x7b45,	// (0x0003c81f) compass_pane_t2

0x0005,

0xf3e8,	// (0x000440c2) compass_pane_t

0x7b90,	// (0x0003c86a) text_secondary_cp61

0x224e,	// (0x00036f28) navi_pane_cams_g5

0x2271,	// (0x00036f4b) navi_pane_im_t1

0x227f,	// (0x00036f59) navi_pane_mp_g1_ParamLimits

0x227f,	// (0x00036f59) navi_pane_mp_g1

0x2293,	// (0x00036f6d) navi_pane_mp_g2_ParamLimits

0x2293,	// (0x00036f6d) navi_pane_mp_g2

0x229f,	// (0x00036f79) navi_pane_mp_g3_ParamLimits

0x229f,	// (0x00036f79) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x000440d6) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x000440d6) navi_pane_mp_g

0x22ab,	// (0x00036f85) navi_pane_mp_t1

0x22b9,	// (0x00036f93) navi_pane_mp_t2

0x0002,

0xf403,	// (0x000440dd) navi_pane_mp_t

0x22f5,	// (0x00036fcf) navi_pane_vt_g1

0x22ab,	// (0x00036f85) navi_pane_vt_t1

0x22fd,	// (0x00036fd7) navi_slider_pane

0x2305,	// (0x00036fdf) zooming_pane

0x230d,	// (0x00036fe7) navi_slider_pane_g1

0x7cbd,	// (0x0003c997) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x000440e4) navi_slider_pane_g

0x2331,	// (0x0003700b) aid_levels_zoom

0x2339,	// (0x00037013) zooming_pane_g1

0x2341,	// (0x0003701b) zooming_pane_g2

0x2341,	// (0x0003701b) zooming_pane_g3

0x0002,

0xf419,	// (0x000440f3) zooming_pane_g

0x2349,	// (0x00037023) level_10_zoom

0x2352,	// (0x0003702c) level_11_zoom

0x235b,	// (0x00037035) level_1_zoom

0x2364,	// (0x0003703e) level_2_zoom

0x236d,	// (0x00037047) level_3_zoom

0x2376,	// (0x00037050) level_4_zoom

0x237f,	// (0x00037059) level_5_zoom

0x2388,	// (0x00037062) level_6_zoom

0x2391,	// (0x0003706b) level_7_zoom

0x239a,	// (0x00037074) level_8_zoom

0x23a3,	// (0x0003707d) level_9_zoom

0x23b4,	// (0x0003708e) popup_phob_thumbnail_window_g1

0x23bc,	// (0x00037096) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x000440fa) popup_phob_thumbnail_window_g

0x36f7,	// (0x000383d1) level_1_location

0x36ff,	// (0x000383d9) level_2_location

0x3707,	// (0x000383e1) level_3_location

0x370f,	// (0x000383e9) level_4_location

0x2305,	// (0x00036fdf) level_5_location

0x7ccf,	// (0x0003c9a9) mce_icon_pane_g1

0x7cd7,	// (0x0003c9b1) mce_icon_pane_g2

0x0001,

0xf425,	// (0x000440ff) mce_icon_pane_g

0x7cdf,	// (0x0003c9b9) main_mup_pane_g1_ParamLimits

0x7cdf,	// (0x0003c9b9) main_mup_pane_g1

0x7cf7,	// (0x0003c9d1) main_mup_pane_g2_ParamLimits

0x7cf7,	// (0x0003c9d1) main_mup_pane_g2

0x7d13,	// (0x0003c9ed) main_mup_pane_g3_ParamLimits

0x7d13,	// (0x0003c9ed) main_mup_pane_g3

0x7d2f,	// (0x0003ca09) main_mup_pane_g4_ParamLimits

0x7d2f,	// (0x0003ca09) main_mup_pane_g4

0x7d4b,	// (0x0003ca25) main_mup_pane_g5_ParamLimits

0x7d4b,	// (0x0003ca25) main_mup_pane_g5

0x7d6c,	// (0x0003ca46) main_mup_pane_g6_ParamLimits

0x7d6c,	// (0x0003ca46) main_mup_pane_g6

0x7d88,	// (0x0003ca62) main_mup_pane_g7_ParamLimits

0x7d88,	// (0x0003ca62) main_mup_pane_g7

0x7da4,	// (0x0003ca7e) main_mup_pane_g8_ParamLimits

0x7da4,	// (0x0003ca7e) main_mup_pane_g8

0x7dc0,	// (0x0003ca9a) main_mup_pane_g9_ParamLimits

0x7dc0,	// (0x0003ca9a) main_mup_pane_g9

0x7ddf,	// (0x0003cab9) main_mup_pane_g10_ParamLimits

0x7ddf,	// (0x0003cab9) main_mup_pane_g10

0x7dfe,	// (0x0003cad8) main_mup_pane_g11_ParamLimits

0x7dfe,	// (0x0003cad8) main_mup_pane_g11

0x7e16,	// (0x0003caf0) main_mup_pane_g12_ParamLimits

0x7e16,	// (0x0003caf0) main_mup_pane_g12

0x7e24,	// (0x0003cafe) main_mup_pane_g13_ParamLimits

0x7e24,	// (0x0003cafe) main_mup_pane_g13

0x000c,

0xf42a,	// (0x00044104) main_mup_pane_g_ParamLimits

0xf42a,	// (0x00044104) main_mup_pane_g

0x7e3a,	// (0x0003cb14) main_mup_pane_t1_ParamLimits

0x7e3a,	// (0x0003cb14) main_mup_pane_t1

0x7e57,	// (0x0003cb31) main_mup_pane_t2_ParamLimits

0x7e57,	// (0x0003cb31) main_mup_pane_t2

0x7e71,	// (0x0003cb4b) main_mup_pane_t3_ParamLimits

0x7e71,	// (0x0003cb4b) main_mup_pane_t3

0x7e8b,	// (0x0003cb65) main_mup_pane_t4_ParamLimits

0x7e8b,	// (0x0003cb65) main_mup_pane_t4

0x7e9d,	// (0x0003cb77) main_mup_pane_t5_ParamLimits

0x7e9d,	// (0x0003cb77) main_mup_pane_t5

0x7eaf,	// (0x0003cb89) main_mup_pane_t6_ParamLimits

0x7eaf,	// (0x0003cb89) main_mup_pane_t6

0x0005,

0xf445,	// (0x0004411f) main_mup_pane_t_ParamLimits

0xf445,	// (0x0004411f) main_mup_pane_t

0x7ec5,	// (0x0003cb9f) mup_progress_pane_ParamLimits

0x7ec5,	// (0x0003cb9f) mup_progress_pane

0x7ed1,	// (0x0003cbab) mup_visualizer_pane_ParamLimits

0x7ed1,	// (0x0003cbab) mup_visualizer_pane

0x7f0f,	// (0x0003cbe9) mup_volume_pane_ParamLimits

0x7f0f,	// (0x0003cbe9) mup_volume_pane

0x23c4,	// (0x0003709e) mup_visualizer_pane_g1_ParamLimits

0x23c4,	// (0x0003709e) mup_visualizer_pane_g1

0x23c4,	// (0x0003709e) mup_visualizer_pane_g2_ParamLimits

0x23c4,	// (0x0003709e) mup_visualizer_pane_g2

0x223a,	// (0x00036f14) mup_visualizer_pane_g3_ParamLimits

0x223a,	// (0x00036f14) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x0004412c) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x0004412c) mup_visualizer_pane_g

0x1776,	// (0x00036450) mup_volume_pane_g1

0x23da,	// (0x000370b4) mup_volume_pane_g2

0x0001,

0xf459,	// (0x00044133) mup_volume_pane_g

0x1776,	// (0x00036450) mup_progress_pane_g1

0x23e3,	// (0x000370bd) mup_progress_pane_g2

0x23ec,	// (0x000370c6) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x00044138) mup_progress_pane_g

0x13a1,	// (0x0003607b) bg_popup_window_pane_cp05

0x23f5,	// (0x000370cf) heading_pane_cp02_ParamLimits

0x23f5,	// (0x000370cf) heading_pane_cp02

0x240f,	// (0x000370e9) list_popup_blid_pane

0x2417,	// (0x000370f1) list_blid_sat_info_pane_ParamLimits

0x2417,	// (0x000370f1) list_blid_sat_info_pane

0x242a,	// (0x00037104) list_blid_sat_info_pane_g1

0x2432,	// (0x0003710c) list_blid_sat_info_pane_t1

0x801a,	// (0x0003ccf4) mup_equalizer_pane_ParamLimits

0x801a,	// (0x0003ccf4) mup_equalizer_pane

0x803b,	// (0x0003cd15) mup_equalizer_pane_cp1_ParamLimits

0x803b,	// (0x0003cd15) mup_equalizer_pane_cp1

0x805c,	// (0x0003cd36) mup_equalizer_pane_cp2_ParamLimits

0x805c,	// (0x0003cd36) mup_equalizer_pane_cp2

0x807d,	// (0x0003cd57) mup_equalizer_pane_cp3_ParamLimits

0x807d,	// (0x0003cd57) mup_equalizer_pane_cp3

0x809e,	// (0x0003cd78) mup_equalizer_pane_cp4_ParamLimits

0x809e,	// (0x0003cd78) mup_equalizer_pane_cp4

0x80bf,	// (0x0003cd99) mup_equalizer_pane_cp5

0x80d5,	// (0x0003cdaf) mup_equalizer_pane_cp6

0x80ed,	// (0x0003cdc7) mup_equalizer_pane_cp7

0x3615,	// (0x000382ef) bg_popup_call_poc_act_pane_g9

0x361d,	// (0x000382f7) bg_popup_call_poc_act_pane_g10

0x3625,	// (0x000382ff) bg_popup_call_poc_act_pane_g11

0x000a,

0x160a,	// (0x000362e4) mup_scale_pane

0x1776,	// (0x00036450) mup_scale_pane_g1

0x2440,	// (0x0003711a) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x00044154) mup_scale_pane_g

0x2464,	// (0x0003713e) msg_data_pane

0x246c,	// (0x00037146) scroll_pane_cp017

0x485f,	// (0x00039539) bg_list_pane_cp04_ParamLimits

0x485f,	// (0x00039539) bg_list_pane_cp04

0x2474,	// (0x0003714e) msg_data_pane_g1

0x8117,	// (0x0003cdf1) msg_data_pane_g2

0x799e,	// (0x0003c678) msg_data_pane_g3

0x811f,	// (0x0003cdf9) msg_data_pane_g4

0x8127,	// (0x0003ce01) msg_data_pane_g5

0x812f,	// (0x0003ce09) msg_data_pane_g6

0x8137,	// (0x0003ce11) msg_data_pane_g7

0x0006,

0xf489,	// (0x00044163) msg_data_pane_g

0x487f,	// (0x00039559) msg_text_pane_ParamLimits

0x487f,	// (0x00039559) msg_text_pane

0x813f,	// (0x0003ce19) qrid_highlight_pane_cp011_ParamLimits

0x813f,	// (0x0003ce19) qrid_highlight_pane_cp011

0x13a1,	// (0x0003607b) msg_body_pane

0x13a1,	// (0x0003607b) msg_header_pane

0x2485,	// (0x0003715f) input_focus_pane_cp07

0x48e0,	// (0x000395ba) msg_header_pane_t1_ParamLimits

0x48e0,	// (0x000395ba) msg_header_pane_t1

0x48f4,	// (0x000395ce) msg_header_pane_t2_ParamLimits

0x48f4,	// (0x000395ce) msg_header_pane_t2

0x0001,

0xf49d,	// (0x00044177) msg_header_pane_t_ParamLimits

0xf49d,	// (0x00044177) msg_header_pane_t

0x24ac,	// (0x00037186) msg_body_pane_g1

0x4906,	// (0x000395e0) msg_body_pane_t1_ParamLimits

0x4906,	// (0x000395e0) msg_body_pane_t1

0x4937,	// (0x00039611) msg_body_pane_t2_ParamLimits

0x4937,	// (0x00039611) msg_body_pane_t2

0x4949,	// (0x00039623) msg_body_pane_t3_ParamLimits

0x4949,	// (0x00039623) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x0004417c) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x0004417c) msg_body_pane_t

0x81ad,	// (0x0003ce87) main_viewer_pane_g1_ParamLimits

0x81ad,	// (0x0003ce87) main_viewer_pane_g1

0x81b9,	// (0x0003ce93) main_viewer_pane_g2_ParamLimits

0x81b9,	// (0x0003ce93) main_viewer_pane_g2

0x81c5,	// (0x0003ce9f) main_viewer_pane_g3_ParamLimits

0x81c5,	// (0x0003ce9f) main_viewer_pane_g3

0x81d6,	// (0x0003ceb0) main_viewer_pane_g4_ParamLimits

0x81d6,	// (0x0003ceb0) main_viewer_pane_g4

0x81e7,	// (0x0003cec1) main_viewer_pane_g5_ParamLimits

0x81e7,	// (0x0003cec1) main_viewer_pane_g5

0x81e7,	// (0x0003cec1) main_viewer_pane_g7_ParamLimits

0x81e7,	// (0x0003cec1) main_viewer_pane_g7

0x81f9,	// (0x0003ced3) main_viewer_pane_g8_ParamLimits

0x81f9,	// (0x0003ced3) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x0004418c) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x0004418c) main_viewer_pane_g

0x24d8,	// (0x000371b2) viewer_content_pane_ParamLimits

0x24d8,	// (0x000371b2) viewer_content_pane

0x8231,	// (0x0003cf0b) main_postcard_pane_g1_ParamLimits

0x8231,	// (0x0003cf0b) main_postcard_pane_g1

0x823f,	// (0x0003cf19) main_postcard_pane_g2_ParamLimits

0x823f,	// (0x0003cf19) main_postcard_pane_g2

0x824d,	// (0x0003cf27) main_postcard_pane_g3_ParamLimits

0x824d,	// (0x0003cf27) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x0004419d) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x0004419d) main_postcard_pane_g

0x825d,	// (0x0003cf37) main_postcard_pane_g4

0x37d8,	// (0x000384b2) smil_status_volume_pane_g2

0x8289,	// (0x0003cf63) postcard_pane_ParamLimits

0x8289,	// (0x0003cf63) postcard_pane

0x23c4,	// (0x0003709e) postcard_pane_g1_ParamLimits

0x23c4,	// (0x0003709e) postcard_pane_g1

0x82bb,	// (0x0003cf95) postcard_pane_g2_ParamLimits

0x82bb,	// (0x0003cf95) postcard_pane_g2

0x82c7,	// (0x0003cfa1) postcard_pane_g3_ParamLimits

0x82c7,	// (0x0003cfa1) postcard_pane_g3

0x24f4,	// (0x000371ce) postcard_pane_g4_ParamLimits

0x24f4,	// (0x000371ce) postcard_pane_g4

0x82d3,	// (0x0003cfad) postcard_pane_g5_ParamLimits

0x82d3,	// (0x0003cfad) postcard_pane_g5

0x82df,	// (0x0003cfb9) postcard_pane_g6_ParamLimits

0x82df,	// (0x0003cfb9) postcard_pane_g6

0x24e6,	// (0x000371c0) postcard_pane_g7_ParamLimits

0x24e6,	// (0x000371c0) postcard_pane_g7

0x0006,

0xf4d0,	// (0x000441aa) postcard_pane_g_ParamLimits

0xf4d0,	// (0x000441aa) postcard_pane_g

0x82eb,	// (0x0003cfc5) main_mp2_pane_g1_ParamLimits

0x82eb,	// (0x0003cfc5) main_mp2_pane_g1

0x82f7,	// (0x0003cfd1) main_mp2_pane_g2_ParamLimits

0x82f7,	// (0x0003cfd1) main_mp2_pane_g2

0x8303,	// (0x0003cfdd) main_mp2_pane_g3_ParamLimits

0x8303,	// (0x0003cfdd) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x000441b9) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x000441b9) main_mp2_pane_g

0x830f,	// (0x0003cfe9) main_mp2_pane_t1_ParamLimits

0x830f,	// (0x0003cfe9) main_mp2_pane_t1

0x8326,	// (0x0003d000) main_mp2_pane_t2_ParamLimits

0x8326,	// (0x0003d000) main_mp2_pane_t2

0x8338,	// (0x0003d012) main_mp2_pane_t3_ParamLimits

0x8338,	// (0x0003d012) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x000441c0) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x000441c0) main_mp2_pane_t

0x2502,	// (0x000371dc) pec_content_pane_ParamLimits

0x2502,	// (0x000371dc) pec_content_pane

0x1b40,	// (0x0003681a) scroll_pane_cp015

0x2514,	// (0x000371ee) pec_attribute_pane_ParamLimits

0x2514,	// (0x000371ee) pec_attribute_pane

0x834a,	// (0x0003d024) pec_content_pane_g1_ParamLimits

0x834a,	// (0x0003d024) pec_content_pane_g1

0x2524,	// (0x000371fe) pec_content_pane_t1_ParamLimits

0x2524,	// (0x000371fe) pec_content_pane_t1

0x2536,	// (0x00037210) pec_content_pane_t2_ParamLimits

0x2536,	// (0x00037210) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x000441c7) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x000441c7) pec_content_pane_t

0x8356,	// (0x0003d030) list_single_graphic_pane_cp01_ParamLimits

0x8356,	// (0x0003d030) list_single_graphic_pane_cp01

0x160a,	// (0x000362e4) bg_popup_sub_pane_cp04

0x2548,	// (0x00037222) popup_mup_playback_window_g1

0x2554,	// (0x0003722e) popup_mup_playback_window_t1

0x2569,	// (0x00037243) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x000441cc) popup_mup_playback_window_t

0x25a0,	// (0x0003727a) main_image_pane_g1_ParamLimits

0x25a0,	// (0x0003727a) main_image_pane_g1

0x25e3,	// (0x000372bd) scroll_pane_cp018_ParamLimits

0x25e3,	// (0x000372bd) scroll_pane_cp018

0x25fb,	// (0x000372d5) scroll_pane_cp016_ParamLimits

0x25fb,	// (0x000372d5) scroll_pane_cp016

0x83fa,	// (0x0003d0d4) smil2_image_pane_ParamLimits

0x83fa,	// (0x0003d0d4) smil2_image_pane

0x842e,	// (0x0003d108) smil2_root_pane_ParamLimits

0x842e,	// (0x0003d108) smil2_root_pane

0x845a,	// (0x0003d134) smil2_text_pane_ParamLimits

0x845a,	// (0x0003d134) smil2_text_pane

0x13a1,	// (0x0003607b) bg_list_pane_cp06

0x2637,	// (0x00037311) grid_radio_pane

0x13a1,	// (0x0003607b) bg_popup_window_pane_cp06

0x263f,	// (0x00037319) main_fmradio_pane_t1

0x2088,	// (0x00036d62) heading_pane_cp04

0x264d,	// (0x00037327) main_fmradio_pane_t2

0x362d,	// (0x00038307) popup_cale_lunar_info_window_g1

0x265b,	// (0x00037335) main_fmradio_pane_t3

0x3635,	// (0x0003830f) popup_cale_lunar_info_window_g2

0x2669,	// (0x00037343) main_fmradio_pane_t4

0x0001,

0x2677,	// (0x00037351) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x000442a7) popup_cale_lunar_info_window_g

0xf507,	// (0x000441e1) main_fmradio_pane_t

0x2685,	// (0x0003735f) wait_bar_pane_cp03

0x268d,	// (0x00037367) cell_fmradio_pane_ParamLimits

0x268d,	// (0x00037367) cell_fmradio_pane

0x24e6,	// (0x000371c0) cell_fmradio_pane_g1_ParamLimits

0x24e6,	// (0x000371c0) cell_fmradio_pane_g1

0x13a1,	// (0x0003607b) grid_highlight_pane_cp011

0x26a0,	// (0x0003737a) poc_content_pane_ParamLimits

0x26a0,	// (0x0003737a) poc_content_pane

0x26b2,	// (0x0003738c) scroll_pane_cp019

0x849a,	// (0x0003d174) popup_call_poc_act_window_ParamLimits

0x849a,	// (0x0003d174) popup_call_poc_act_window

0x84a7,	// (0x0003d181) popup_call_poc_inact_window_ParamLimits

0x84a7,	// (0x0003d181) popup_call_poc_inact_window

0xf5a4,	// (0x0004427e) bg_popup_call_poc_act_pane_g

0x359d,	// (0x00038277) bg_popup_call_poc_inact_pane_g1

0x35a5,	// (0x0003827f) bg_popup_call_poc_inact_pane_g2

0x26ba,	// (0x00037394) popup_call_poc_act_window_g2

0x35ad,	// (0x00038287) bg_popup_call_poc_inact_pane_g3

0x35b5,	// (0x0003828f) bg_popup_call_poc_inact_pane_g4

0x35bd,	// (0x00038297) bg_popup_call_poc_inact_pane_g5

0x26c2,	// (0x0003739c) popup_call_poc_act_window_t1_ParamLimits

0x26c2,	// (0x0003739c) popup_call_poc_act_window_t1

0x26ea,	// (0x000373c4) popup_call_poc_act_window_t2_ParamLimits

0x26ea,	// (0x000373c4) popup_call_poc_act_window_t2

0x2712,	// (0x000373ec) popup_call_poc_act_window_t3_ParamLimits

0x2712,	// (0x000373ec) popup_call_poc_act_window_t3

0x273a,	// (0x00037414) popup_call_poc_act_window_t4_ParamLimits

0x273a,	// (0x00037414) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x000441ec) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x000441ec) popup_call_poc_act_window_t

0x35c5,	// (0x0003829f) bg_popup_call_poc_inact_pane_g6

0x35cd,	// (0x000382a7) bg_popup_call_poc_inact_pane_g7

0x35d5,	// (0x000382af) bg_popup_call_poc_inact_pane_g8

0x274c,	// (0x00037426) popup_call_poc_inact_window_g2

0x35dd,	// (0x000382b7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x0004426b) bg_popup_call_poc_inact_pane_g

0x2754,	// (0x0003742e) popup_call_poc_inact_window_t1_ParamLimits

0x2754,	// (0x0003742e) popup_call_poc_inact_window_t1

0x2769,	// (0x00037443) popup_call_poc_inact_window_t2_ParamLimits

0x2769,	// (0x00037443) popup_call_poc_inact_window_t2

0x277e,	// (0x00037458) popup_call_poc_inact_window_t3_ParamLimits

0x277e,	// (0x00037458) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x000441f5) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x000441f5) popup_call_poc_inact_window_t

0x375e,	// (0x00038438) context_pane_ParamLimits

0x8acd,	// (0x0003d7a7) signal_pane_ParamLimits

0x2305,	// (0x00036fdf) main_call2_pane

0x8a45,	// (0x0003d71f) popup_phob_thumbnail2_window_ParamLimits

0x8a45,	// (0x0003d71f) popup_phob_thumbnail2_window

0x815b,	// (0x0003ce35) aid_hotspot_pointer_arrow_pane

0x8163,	// (0x0003ce3d) aid_hotspot_pointer_hand_pane

0x87cc,	// (0x0003d4a6) phob_pre_status_pane_g5

0x6592,	// (0x0003b26c) cams_zoom_pane_ParamLimits

0x659e,	// (0x0003b278) image_vga_pane_ParamLimits

0x65ad,	// (0x0003b287) main_camera_pane_g1_ParamLimits

0x65bb,	// (0x0003b295) main_camera_pane_g2_ParamLimits

0x65c9,	// (0x0003b2a3) main_camera_pane_g3_ParamLimits

0x65d5,	// (0x0003b2af) main_camera_pane_g4_ParamLimits

0x65e1,	// (0x0003b2bb) main_camera_pane_g5_ParamLimits

0x65ed,	// (0x0003b2c7) main_camera_pane_g6_ParamLimits

0x65f9,	// (0x0003b2d3) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x00043ef4) main_camera_pane_g_ParamLimits

0x6605,	// (0x0003b2df) main_camera_pane_t1_ParamLimits

0x6617,	// (0x0003b2f1) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x00043f05) main_camera_pane_t_ParamLimits

0x160a,	// (0x000362e4) bg_popup_preview_window_pane_cp01_ParamLimits

0x160a,	// (0x000362e4) bg_popup_preview_window_pane_cp01

0x2793,	// (0x0003746d) popup_phob_thumbnail2_window_g1_ParamLimits

0x2793,	// (0x0003746d) popup_phob_thumbnail2_window_g1

0x13a1,	// (0x0003607b) call2_cli_visual_pane

0x84c3,	// (0x0003d19d) popup_call2_audio_conf_window_ParamLimits

0x84c3,	// (0x0003d19d) popup_call2_audio_conf_window

0x84d8,	// (0x0003d1b2) popup_call2_audio_first_window_ParamLimits

0x84d8,	// (0x0003d1b2) popup_call2_audio_first_window

0x8576,	// (0x0003d250) popup_call2_audio_in_window_ParamLimits

0x8576,	// (0x0003d250) popup_call2_audio_in_window

0x85b8,	// (0x0003d292) popup_call2_audio_out_window_ParamLimits

0x85b8,	// (0x0003d292) popup_call2_audio_out_window

0x861a,	// (0x0003d2f4) popup_call2_audio_second_window_ParamLimits

0x861a,	// (0x0003d2f4) popup_call2_audio_second_window

0x8678,	// (0x0003d352) popup_call2_audio_wait_window_ParamLimits

0x8678,	// (0x0003d352) popup_call2_audio_wait_window

0x13a1,	// (0x0003607b) bg_popup_call2_act_pane_cp03

0x15ec,	// (0x000362c6) list_conf_pane_cp

0x279f,	// (0x00037479) popup_call2_audio_conf_window_t1

0x27ad,	// (0x00037487) list_single_graphic_popup_conf2_pane_ParamLimits

0x27ad,	// (0x00037487) list_single_graphic_popup_conf2_pane

0x211b,	// (0x00036df5) list_highlight_pane_cp04

0x27c0,	// (0x0003749a) list_single_graphic_popup_conf2_pane_g1

0x212c,	// (0x00036e06) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x000441fc) list_single_graphic_popup_conf2_pane_g

0x27ca,	// (0x000374a4) list_single_graphic_popup_conf2_pane_t1

0x27d8,	// (0x000374b2) bg_popup_call2_act_pane_cp01_ParamLimits

0x27d8,	// (0x000374b2) bg_popup_call2_act_pane_cp01

0x2862,	// (0x0003753c) call_type_pane_cp05_ParamLimits

0x2862,	// (0x0003753c) call_type_pane_cp05

0x28b6,	// (0x00037590) popup_call2_audio_second_window_g1_ParamLimits

0x28b6,	// (0x00037590) popup_call2_audio_second_window_g1

0x290a,	// (0x000375e4) popup_call2_audio_second_window_g2_ParamLimits

0x290a,	// (0x000375e4) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x00044201) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x00044201) popup_call2_audio_second_window_g

0x296f,	// (0x00037649) popup_call2_audio_second_window_t1_ParamLimits

0x296f,	// (0x00037649) popup_call2_audio_second_window_t1

0x2a2a,	// (0x00037704) popup_call2_audio_second_window_t2_ParamLimits

0x2a2a,	// (0x00037704) popup_call2_audio_second_window_t2

0x2a7d,	// (0x00037757) popup_call2_audio_second_window_t3_ParamLimits

0x2a7d,	// (0x00037757) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x00044208) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x00044208) popup_call2_audio_second_window_t

0x13a1,	// (0x0003607b) bg_popup_call2_in_pane_cp02

0x13ab,	// (0x00036085) call_type_pane_cp04

0x13b3,	// (0x0003608d) popup_call2_audio_wait_window_g1

0x13bb,	// (0x00036095) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x00043de1) popup_call2_audio_wait_window_g

0x13c3,	// (0x0003609d) popup_call2_audio_wait_window_t3

0x2b70,	// (0x0003784a) bg_popup_call2_act_pane_ParamLimits

0x2b70,	// (0x0003784a) bg_popup_call2_act_pane

0x2c30,	// (0x0003790a) call_type_pane_cp03_ParamLimits

0x2c30,	// (0x0003790a) call_type_pane_cp03

0x2c94,	// (0x0003796e) popup_call2_audio_first_window_g1_ParamLimits

0x2c94,	// (0x0003796e) popup_call2_audio_first_window_g1

0x2d04,	// (0x000379de) popup_call2_audio_first_window_g2_ParamLimits

0x2d04,	// (0x000379de) popup_call2_audio_first_window_g2

0x23c4,	// (0x0003709e) popup_call2_audio_first_window_g3_ParamLimits

0x23c4,	// (0x0003709e) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x00044211) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x00044211) popup_call2_audio_first_window_g

0x2de2,	// (0x00037abc) popup_call2_audio_first_window_t1_ParamLimits

0x2de2,	// (0x00037abc) popup_call2_audio_first_window_t1

0x2ee5,	// (0x00037bbf) popup_call2_audio_first_window_t4_ParamLimits

0x2ee5,	// (0x00037bbf) popup_call2_audio_first_window_t4

0x2fc8,	// (0x00037ca2) popup_call2_audio_first_window_t5_ParamLimits

0x2fc8,	// (0x00037ca2) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x0004421c) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x0004421c) popup_call2_audio_first_window_t

0x1602,	// (0x000362dc) bg_popup_call2_act_pane_g1

0x363d,	// (0x00038317) popup_cale_lunar_info_window_t1

0x364b,	// (0x00038325) popup_cale_lunar_info_window_t2

0x3659,	// (0x00038333) popup_cale_lunar_info_window_t3

0x13a1,	// (0x0003607b) bg_popup_call2_bubble_pane

0x30c9,	// (0x00037da3) bg_popup_call2_in_pane_cp01_ParamLimits

0x30c9,	// (0x00037da3) bg_popup_call2_in_pane_cp01

0x107d,	// (0x00035d57) call_type_pane_cp02

0x3111,	// (0x00037deb) popup_call2_audio_out_window_g1_ParamLimits

0x3111,	// (0x00037deb) popup_call2_audio_out_window_g1

0x313d,	// (0x00037e17) popup_call2_audio_out_window_g2_ParamLimits

0x313d,	// (0x00037e17) popup_call2_audio_out_window_g2

0x3165,	// (0x00037e3f) popup_call2_audio_out_window_g3_ParamLimits

0x3165,	// (0x00037e3f) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x00044225) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x00044225) popup_call2_audio_out_window_g

0x31a0,	// (0x00037e7a) popup_call2_audio_out_window_t1_ParamLimits

0x31a0,	// (0x00037e7a) popup_call2_audio_out_window_t1

0x31ff,	// (0x00037ed9) popup_call2_audio_out_window_t2_ParamLimits

0x31ff,	// (0x00037ed9) popup_call2_audio_out_window_t2

0x3253,	// (0x00037f2d) popup_call2_audio_out_window_t3_ParamLimits

0x3253,	// (0x00037f2d) popup_call2_audio_out_window_t3

0x3269,	// (0x00037f43) popup_call2_audio_out_window_t4_ParamLimits

0x3269,	// (0x00037f43) popup_call2_audio_out_window_t4

0x327f,	// (0x00037f59) popup_call2_audio_out_window_t5_ParamLimits

0x327f,	// (0x00037f59) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x0004422e) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x0004422e) popup_call2_audio_out_window_t

0x32e3,	// (0x00037fbd) bg_popup_call2_in_pane_ParamLimits

0x32e3,	// (0x00037fbd) bg_popup_call2_in_pane

0x333f,	// (0x00038019) popup_call2_audio_in_window_g1_ParamLimits

0x333f,	// (0x00038019) popup_call2_audio_in_window_g1

0x3377,	// (0x00038051) popup_call2_audio_in_window_g2_ParamLimits

0x3377,	// (0x00038051) popup_call2_audio_in_window_g2

0x33af,	// (0x00038089) popup_call2_audio_in_window_g3_ParamLimits

0x33af,	// (0x00038089) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x0004423b) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x0004423b) popup_call2_audio_in_window_g

0x3407,	// (0x000380e1) popup_call2_audio_in_window_t1_ParamLimits

0x3407,	// (0x000380e1) popup_call2_audio_in_window_t1

0x3487,	// (0x00038161) popup_call2_audio_in_window_t2_ParamLimits

0x3487,	// (0x00038161) popup_call2_audio_in_window_t2

0x3507,	// (0x000381e1) popup_call2_audio_in_window_t3_ParamLimits

0x3507,	// (0x000381e1) popup_call2_audio_in_window_t3

0x3521,	// (0x000381fb) popup_call2_audio_in_window_t4_ParamLimits

0x3521,	// (0x000381fb) popup_call2_audio_in_window_t4

0x3533,	// (0x0003820d) popup_call2_audio_in_window_t5_ParamLimits

0x3533,	// (0x0003820d) popup_call2_audio_in_window_t5

0x3548,	// (0x00038222) popup_call2_audio_in_window_t6_ParamLimits

0x3548,	// (0x00038222) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x00044244) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x00044244) popup_call2_audio_in_window_t

0x1602,	// (0x000362dc) bg_popup_call2_in_pane_g1

0x3667,	// (0x00038341) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x000442ac) popup_cale_lunar_info_window_t

0x160a,	// (0x000362e4) bg_popup_call2_rect_pane_ParamLimits

0x160a,	// (0x000362e4) bg_popup_call2_rect_pane

0x13a1,	// (0x0003607b) call2_cli_visual_graphic_pane

0x13a1,	// (0x0003607b) call2_cli_visual_text_pane

0x8b7f,	// (0x0003d859) smil_status_volume_pane_g3

0x0002,

0x1776,	// (0x00036450) call2_cli_visual_graphic_pane_g1

0x1776,	// (0x00036450) call2_cli_visual_graphic_pane_g2

0x1776,	// (0x00036450) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x00044251) call2_cli_visual_graphic_pane_g

0x355d,	// (0x00038237) bg_popup_call2_rect_pane_g1

0x1814,	// (0x000364ee) bg_popup_call2_rect_pane_g2

0x3565,	// (0x0003823f) bg_popup_call2_rect_pane_g3

0x356d,	// (0x00038247) bg_popup_call2_rect_pane_g4

0x3575,	// (0x0003824f) bg_popup_call2_rect_pane_g5

0x357d,	// (0x00038257) bg_popup_call2_rect_pane_g6

0x3585,	// (0x0003825f) bg_popup_call2_rect_pane_g7

0x358d,	// (0x00038267) bg_popup_call2_rect_pane_g8

0x3595,	// (0x0003826f) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x00044258) bg_popup_call2_rect_pane_g

0x359d,	// (0x00038277) bg_popup_call2_bubble_pane_g1

0x35a5,	// (0x0003827f) bg_popup_call2_bubble_pane_g2

0x35ad,	// (0x00038287) bg_popup_call2_bubble_pane_g3

0x35b5,	// (0x0003828f) bg_popup_call2_bubble_pane_g4

0x35bd,	// (0x00038297) bg_popup_call2_bubble_pane_g5

0x35c5,	// (0x0003829f) bg_popup_call2_bubble_pane_g6

0x35cd,	// (0x000382a7) bg_popup_call2_bubble_pane_g7

0x35d5,	// (0x000382af) bg_popup_call2_bubble_pane_g8

0x35dd,	// (0x000382b7) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x0004426b) bg_popup_call2_bubble_pane_g

0x6133,	// (0x0003ae0d) aid_cale_week_size_cell_pane

0x6629,	// (0x0003b303) aid_cams_cif_uncrop_pane_ParamLimits

0x6629,	// (0x0003b303) aid_cams_cif_uncrop_pane

0x678c,	// (0x0003b466) aid_cams_size_cell_ParamLimits

0x678c,	// (0x0003b466) aid_cams_size_cell

0x6798,	// (0x0003b472) grid_cams_pane_ParamLimits

0x67a6,	// (0x0003b480) linegrid_cams_pane_ParamLimits

0x687d,	// (0x0003b557) call_video_pane_t1

0x689e,	// (0x0003b578) call_video_pane_t2

0x0001,

0xf27e,	// (0x00043f58) call_video_pane_t

0x6e1e,	// (0x0003baf8) aid_cale_month_size_cell_pane_ParamLimits

0x6e1e,	// (0x0003baf8) aid_cale_month_size_cell_pane

0xf61b,	// (0x000442f5) smil_status_volume_pane_g

0x8b8c,	// (0x0003d866) volume_smil_pane_ParamLimits

0x5898,	// (0x0003a572) aid_popup2_width_pane

0x6004,	// (0x0003acde) cell_qdial_pane_g4_ParamLimits

0x6004,	// (0x0003acde) cell_qdial_pane_g4

0x7b12,	// (0x0003c7ec) aid_blid_cardinal_pane_ParamLimits

0x7b22,	// (0x0003c7fc) aid_blid_destination_pane_ParamLimits

0x7b22,	// (0x0003c7fc) aid_blid_destination_pane

0x160a,	// (0x000362e4) bg_popup_call_poc_act_pane_ParamLimits

0x160a,	// (0x000362e4) bg_popup_call_poc_act_pane

0x160a,	// (0x000362e4) bg_popup_call_poc_inact_pane_ParamLimits

0x160a,	// (0x000362e4) bg_popup_call_poc_inact_pane

0x35ed,	// (0x000382c7) bg_popup_call_poc_act_pane_g1

0x35f5,	// (0x000382cf) bg_popup_call_poc_act_pane_g2

0x35fd,	// (0x000382d7) bg_popup_call_poc_act_pane_g3

0x35b5,	// (0x0003828f) bg_popup_call_poc_act_pane_g4

0x35bd,	// (0x00038297) bg_popup_call_poc_act_pane_g5

0x3605,	// (0x000382df) bg_popup_call_poc_act_pane_g6

0x35cd,	// (0x000382a7) bg_popup_call_poc_act_pane_g7

0x360d,	// (0x000382e7) bg_popup_call_poc_act_pane_g8

0x13a1,	// (0x0003607b) main_usb_pane

0x8980,	// (0x0003d65a) popup_cale_lunar_info_window

0x6bbd,	// (0x0003b897) im_reading_pane_t1_ParamLimits

0x1a98,	// (0x00036772) list_im_pane_ParamLimits

0x1aa9,	// (0x00036783) scroll_pane_cp07_ParamLimits

0x13a1,	// (0x0003607b) grid_highlight_pane_cp012

0x160a,	// (0x000362e4) mup_scale_pane_ParamLimits

0x23c4,	// (0x0003709e) main_usb_pane_g1_ParamLimits

0x23c4,	// (0x0003709e) main_usb_pane_g1

0x86ef,	// (0x0003d3c9) main_usb_pane_g2_ParamLimits

0x86ef,	// (0x0003d3c9) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x00044295) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x00044295) main_usb_pane_g

0x86fb,	// (0x0003d3d5) main_usb_pane_t1_ParamLimits

0x86fb,	// (0x0003d3d5) main_usb_pane_t1

0x870d,	// (0x0003d3e7) main_usb_pane_t2_ParamLimits

0x870d,	// (0x0003d3e7) main_usb_pane_t2

0x871f,	// (0x0003d3f9) main_usb_pane_t3_ParamLimits

0x871f,	// (0x0003d3f9) main_usb_pane_t3

0x8731,	// (0x0003d40b) main_usb_pane_t4_ParamLimits

0x8731,	// (0x0003d40b) main_usb_pane_t4

0x8743,	// (0x0003d41d) main_usb_pane_t5_ParamLimits

0x8743,	// (0x0003d41d) main_usb_pane_t5

0x8755,	// (0x0003d42f) main_usb_pane_t6_ParamLimits

0x8755,	// (0x0003d42f) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x0004429a) main_usb_pane_t_ParamLimits

0x7ab8,	// (0x0003c792) aid_text_placing

0x7ac4,	// (0x0003c79e) main_location2_pane_t1_ParamLimits

0x7ad8,	// (0x0003c7b2) main_location2_pane_t2_ParamLimits

0x7aec,	// (0x0003c7c6) main_location2_pane_t3_ParamLimits

0x7b00,	// (0x0003c7da) main_location2_pane_t4_ParamLimits

0x7b00,	// (0x0003c7da) main_location2_pane_t4

0xf3df,	// (0x000440b9) main_location2_pane_t_ParamLimits

0x164e,	// (0x00036328) find_pinb_pane_g2_ParamLimits

0x164e,	// (0x00036328) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x00043e07) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x00043e07) find_pinb_pane_g

0x165a,	// (0x00036334) find_pinb_pane_t1_ParamLimits

0x166c,	// (0x00036346) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x00043e0c) find_pinb_pane_t_ParamLimits

0x13a1,	// (0x0003607b) main_call3_pane

0x7236,	// (0x0003bf10) cale_month_day_heading_pane_t1_ParamLimits

0x7294,	// (0x0003bf6e) cale_month_day_heading_pane_t2_ParamLimits

0x72f9,	// (0x0003bfd3) cale_month_day_heading_pane_t3_ParamLimits

0x735e,	// (0x0003c038) cale_month_day_heading_pane_t4_ParamLimits

0x73c3,	// (0x0003c09d) cale_month_day_heading_pane_t5_ParamLimits

0x7428,	// (0x0003c102) cale_month_day_heading_pane_t6_ParamLimits

0x7495,	// (0x0003c16f) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x00043f90) cale_month_day_heading_pane_t_ParamLimits

0x1d13,	// (0x000369ed) smil_status_volume_pane

0x82a3,	// (0x0003cf7d) postcard_address_pane_ParamLimits

0x82a3,	// (0x0003cf7d) postcard_address_pane

0x82af,	// (0x0003cf89) postcard_message_pane_ParamLimits

0x82af,	// (0x0003cf89) postcard_message_pane

0x86b7,	// (0x0003d391) call2_cli_visual_pane_t1_ParamLimits

0x86b7,	// (0x0003d391) call2_cli_visual_pane_t1

0x8cdf,	// (0x0003d9b9) postcard_message_pane_t1_ParamLimits

0x8cdf,	// (0x0003d9b9) postcard_message_pane_t1

0x8cc8,	// (0x0003d9a2) postcard_address_pane_t1_ParamLimits

0x8cc8,	// (0x0003d9a2) postcard_address_pane_t1

0x8cb9,	// (0x0003d993) popup_call3_audio_in_window_ParamLimits

0x8cb9,	// (0x0003d993) popup_call3_audio_in_window

0x8ba1,	// (0x0003d87b) bg_popup_call3_in_pane_ParamLimits

0x8ba1,	// (0x0003d87b) bg_popup_call3_in_pane

0x8bff,	// (0x0003d8d9) popup_call3_audio_in_window_g1_ParamLimits

0x8bff,	// (0x0003d8d9) popup_call3_audio_in_window_g1

0x8c17,	// (0x0003d8f1) popup_call3_audio_in_window_g2_ParamLimits

0x8c17,	// (0x0003d8f1) popup_call3_audio_in_window_g2

0x8c2f,	// (0x0003d909) popup_call3_audio_in_window_g3_ParamLimits

0x8c2f,	// (0x0003d909) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x000442fc) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x000442fc) popup_call3_audio_in_window_g

0x8c57,	// (0x0003d931) popup_call3_audio_in_window_t1_ParamLimits

0x8c57,	// (0x0003d931) popup_call3_audio_in_window_t1

0x8c7f,	// (0x0003d959) popup_call3_audio_in_window_t2_ParamLimits

0x8c7f,	// (0x0003d959) popup_call3_audio_in_window_t2

0x8ca7,	// (0x0003d981) popup_call3_audio_in_window_t3_ParamLimits

0x8ca7,	// (0x0003d981) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x00044305) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x00044305) popup_call3_audio_in_window_t

0x2305,	// (0x00036fdf) bg_popup_call3_rect_pane

0x355d,	// (0x00038237) bg_popup_call3_rect_pane_g1

0x1814,	// (0x000364ee) bg_popup_call3_rect_pane_g2

0x3565,	// (0x0003823f) bg_popup_call3_rect_pane_g3

0x356d,	// (0x00038247) bg_popup_call3_rect_pane_g4

0x3575,	// (0x0003824f) bg_popup_call3_rect_pane_g5

0x357d,	// (0x00038257) bg_popup_call3_rect_pane_g6

0x3585,	// (0x0003825f) bg_popup_call3_rect_pane_g7

0x7f2a,	// (0x0003cc04) mup_visualizer_osc_pane

0x23d2,	// (0x000370ac) mup_visualizer_spec_pane

0x8bc1,	// (0x0003d89b) call3_video_qcif_pane_ParamLimits

0x8bc1,	// (0x0003d89b) call3_video_qcif_pane

0x8bd1,	// (0x0003d8ab) call3_video_qcif_uncrop_pane_ParamLimits

0x8bd1,	// (0x0003d8ab) call3_video_qcif_uncrop_pane

0x8bdd,	// (0x0003d8b7) call3_video_subqcif_pane_ParamLimits

0x8bdd,	// (0x0003d8b7) call3_video_subqcif_pane

0x8bef,	// (0x0003d8c9) call3_video_subqcif_uncrop_pane_ParamLimits

0x8bef,	// (0x0003d8c9) call3_video_subqcif_uncrop_pane

0x8c47,	// (0x0003d921) popup_call3_audio_in_window_g4_ParamLimits

0x8c47,	// (0x0003d921) popup_call3_audio_in_window_g4

0x8b6c,	// (0x0003d846) mup_spec_half_pane

0x8b75,	// (0x0003d84f) mup_spec_half_pane_cp

0x37be,	// (0x00038498) mup_osc_middle_pane

0x37c7,	// (0x000384a1) mup_visualizer_osc_pane_g1

0x8b4d,	// (0x0003d827) mup_spec_bar_pane_ParamLimits

0x8b4d,	// (0x0003d827) mup_spec_bar_pane

0x37ab,	// (0x00038485) mup_spec_bar_pane_g1

0x37b5,	// (0x0003848f) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x000442f0) mup_spec_bar_pane_g

0x6133,	// (0x0003ae0d) aid_cale_week_size_cell_pane_ParamLimits

0x6146,	// (0x0003ae20) bg_cale_heading_pane_ParamLimits

0x1848,	// (0x00036522) bg_cale_pane_cp01_ParamLimits

0x6162,	// (0x0003ae3c) cale_week_corner_pane_ParamLimits

0x6173,	// (0x0003ae4d) cale_week_day_heading_pane_ParamLimits

0x618f,	// (0x0003ae69) cale_week_scroll_pane_g1_ParamLimits

0x61a8,	// (0x0003ae82) cale_week_scroll_pane_g2_ParamLimits

0x61b9,	// (0x0003ae93) cale_week_scroll_pane_g3_ParamLimits

0x61ca,	// (0x0003aea4) cale_week_scroll_pane_g4_ParamLimits

0x61db,	// (0x0003aeb5) cale_week_scroll_pane_g5_ParamLimits

0x61ec,	// (0x0003aec6) cale_week_scroll_pane_g6_ParamLimits

0x61fd,	// (0x0003aed7) cale_week_scroll_pane_g7_ParamLimits

0x6210,	// (0x0003aeea) cale_week_scroll_pane_g8_ParamLimits

0x6223,	// (0x0003aefd) cale_week_scroll_pane_g9_ParamLimits

0x6234,	// (0x0003af0e) cale_week_scroll_pane_g10_ParamLimits

0x6245,	// (0x0003af1f) cale_week_scroll_pane_g11_ParamLimits

0x6256,	// (0x0003af30) cale_week_scroll_pane_g12_ParamLimits

0x626f,	// (0x0003af49) cale_week_scroll_pane_g13_ParamLimits

0x6288,	// (0x0003af62) cale_week_scroll_pane_g14_ParamLimits

0x62a1,	// (0x0003af7b) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x00043e98) cale_week_scroll_pane_g_ParamLimits

0x62ba,	// (0x0003af94) cale_week_time_pane_ParamLimits

0x62cd,	// (0x0003afa7) grid_cale_week_pane_ParamLimits

0x1861,	// (0x0003653b) listscroll_cale_week_pane_t1

0x62ea,	// (0x0003afc4) scroll_pane_cp08_ParamLimits

0x6e6f,	// (0x0003bb49) cale_month_corner_pane_ParamLimits

0x1cbf,	// (0x00036999) cale_month_pane_t1

0x71e5,	// (0x0003bebf) cale_month_week_pane_ParamLimits

0x23c4,	// (0x0003709e) popup_call_status_window_g1_ParamLimits

0x78f4,	// (0x0003c5ce) popup_call_status_window_g2_ParamLimits

0x7900,	// (0x0003c5da) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x00044040) popup_call_status_window_g_ParamLimits

0x2080,	// (0x00036d5a) aid_call2_pane

0x48d2,	// (0x000395ac) msg_header_pane_g1

0x82a3,	// (0x0003cf7d) postcard_address2_pane_ParamLimits

0x82a3,	// (0x0003cf7d) postcard_address2_pane

0x82af,	// (0x0003cf89) postcard_message2_pane_ParamLimits

0x82af,	// (0x0003cf89) postcard_message2_pane

0x8adb,	// (0x0003d7b5) message2_row_pane_ParamLimits

0x8adb,	// (0x0003d7b5) message2_row_pane

0x8af8,	// (0x0003d7d2) address2_row_pane_ParamLimits

0x8af8,	// (0x0003d7d2) address2_row_pane

0x3779,	// (0x00038453) postcard_message2_row_pane_g1

0x3781,	// (0x0003845b) postcard_message2_row_pane_t1

0x3779,	// (0x00038453) address2_row_pane_g1

0x3781,	// (0x0003845b) address2_row_pane_t1

0x6506,	// (0x0003b1e0) aid_size_cell_vorec

0x13a1,	// (0x0003607b) main_rss_pane

0x8b0b,	// (0x0003d7e5) rss_list_single_pane_ParamLimits

0x8b0b,	// (0x0003d7e5) rss_list_single_pane

0x378f,	// (0x00038469) rss_list_single_pane_t1

0x379d,	// (0x00038477) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x000442eb) rss_list_single_pane_t

0x13a1,	// (0x0003607b) main_camera2_pane

0x13a1,	// (0x0003607b) main_video2_pane

0x8d43,	// (0x0003da1d) cams_zoom_pane_cp2_ParamLimits

0x8d43,	// (0x0003da1d) cams_zoom_pane_cp2

0x8d4f,	// (0x0003da29) image2_vga_pane_ParamLimits

0x8d4f,	// (0x0003da29) image2_vga_pane

0x8d5e,	// (0x0003da38) main_camera2_pane_g1_ParamLimits

0x8d5e,	// (0x0003da38) main_camera2_pane_g1

0x8d6a,	// (0x0003da44) main_camera2_pane_g2_ParamLimits

0x8d6a,	// (0x0003da44) main_camera2_pane_g2

0x8d76,	// (0x0003da50) main_camera2_pane_g3_ParamLimits

0x8d76,	// (0x0003da50) main_camera2_pane_g3

0x8d82,	// (0x0003da5c) main_camera2_pane_g4_ParamLimits

0x8d82,	// (0x0003da5c) main_camera2_pane_g4

0x8d8e,	// (0x0003da68) main_camera2_pane_g5_ParamLimits

0x8d8e,	// (0x0003da68) main_camera2_pane_g5

0x8d9a,	// (0x0003da74) main_camera2_pane_g6_ParamLimits

0x8d9a,	// (0x0003da74) main_camera2_pane_g6

0x8da6,	// (0x0003da80) main_camera2_pane_g7_ParamLimits

0x8da6,	// (0x0003da80) main_camera2_pane_g7

0x8db2,	// (0x0003da8c) main_camera2_pane_g8_ParamLimits

0x8db2,	// (0x0003da8c) main_camera2_pane_g8

0x0008,

0xf632,	// (0x0004430c) main_camera2_pane_g_ParamLimits

0xf632,	// (0x0004430c) main_camera2_pane_g

0x8dca,	// (0x0003daa4) main_camera2_pane_t1_ParamLimits

0x8dca,	// (0x0003daa4) main_camera2_pane_t1

0x8ddc,	// (0x0003dab6) main_camera2_pane_t2_ParamLimits

0x8ddc,	// (0x0003dab6) main_camera2_pane_t2

0x8dee,	// (0x0003dac8) main_camera2_pane_t3_ParamLimits

0x8dee,	// (0x0003dac8) main_camera2_pane_t3

0x8e00,	// (0x0003dada) main_camera2_pane_t4_ParamLimits

0x8e00,	// (0x0003dada) main_camera2_pane_t4

0x0006,

0xf645,	// (0x0004431f) main_camera2_pane_t_ParamLimits

0xf645,	// (0x0004431f) main_camera2_pane_t

0x8e62,	// (0x0003db3c) cams_zoom_pane_cp4_ParamLimits

0x8e62,	// (0x0003db3c) cams_zoom_pane_cp4

0x8e72,	// (0x0003db4c) image2_cif_pane_ParamLimits

0x8e72,	// (0x0003db4c) image2_cif_pane

0x8e87,	// (0x0003db61) image2_subqcif_pane_ParamLimits

0x8e87,	// (0x0003db61) image2_subqcif_pane

0x8e96,	// (0x0003db70) main_video2_pane_g1_ParamLimits

0x8e96,	// (0x0003db70) main_video2_pane_g1

0x8ea8,	// (0x0003db82) main_video2_pane_g2_ParamLimits

0x8ea8,	// (0x0003db82) main_video2_pane_g2

0x8eb8,	// (0x0003db92) main_video2_pane_g3_ParamLimits

0x8eb8,	// (0x0003db92) main_video2_pane_g3

0x8ec8,	// (0x0003dba2) main_video2_pane_g4_ParamLimits

0x8ec8,	// (0x0003dba2) main_video2_pane_g4

0x8ed8,	// (0x0003dbb2) main_video2_pane_g5_ParamLimits

0x8ed8,	// (0x0003dbb2) main_video2_pane_g5

0x8ee8,	// (0x0003dbc2) main_video2_pane_g6_ParamLimits

0x8ee8,	// (0x0003dbc2) main_video2_pane_g6

0x0005,

0xf654,	// (0x0004432e) main_video2_pane_g_ParamLimits

0xf654,	// (0x0004432e) main_video2_pane_g

0x8efa,	// (0x0003dbd4) main_video2_pane_t1_ParamLimits

0x8efa,	// (0x0003dbd4) main_video2_pane_t1

0x8f14,	// (0x0003dbee) main_video2_pane_t2_ParamLimits

0x8f14,	// (0x0003dbee) main_video2_pane_t2

0x8f3a,	// (0x0003dc14) main_video2_pane_t3_ParamLimits

0x8f3a,	// (0x0003dc14) main_video2_pane_t3

0x0002,

0xf661,	// (0x0004433b) main_video2_pane_t_ParamLimits

0xf661,	// (0x0004433b) main_video2_pane_t

0x880c,	// (0x0003d4e6) call_muted_g2

0x0001,

0xf603,	// (0x000442dd) call_muted_g

0x13a1,	// (0x0003607b) main_mup2_pane

0xd39d,	// (0x00042077) main_mup2_pane_g1_ParamLimits

0xd39d,	// (0x00042077) main_mup2_pane_g1

0x8f60,	// (0x0003dc3a) main_mup2_pane_g2_ParamLimits

0x8f60,	// (0x0003dc3a) main_mup2_pane_g2

0x91e2,	// (0x0003debc) main_mup_pane_g13_cp1

0x91ea,	// (0x0003dec4) mup_volume_pane_cp1

0x8f80,	// (0x0003dc5a) main_mup2_pane_g4_ParamLimits

0x8f80,	// (0x0003dc5a) main_mup2_pane_g4

0x8f95,	// (0x0003dc6f) main_mup2_pane_g5_ParamLimits

0x8f95,	// (0x0003dc6f) main_mup2_pane_g5

0x8faa,	// (0x0003dc84) main_mup2_pane_g6_ParamLimits

0x8faa,	// (0x0003dc84) main_mup2_pane_g6

0x8fbf,	// (0x0003dc99) main_mup2_pane_g7_ParamLimits

0x8fbf,	// (0x0003dc99) main_mup2_pane_g7

0x0006,

0xf668,	// (0x00044342) main_mup2_pane_g_ParamLimits

0xf668,	// (0x00044342) main_mup2_pane_g

0x8fdb,	// (0x0003dcb5) main_mup2_pane_t1_ParamLimits

0x8fdb,	// (0x0003dcb5) main_mup2_pane_t1

0x8ff2,	// (0x0003dccc) main_mup2_pane_t2_ParamLimits

0x8ff2,	// (0x0003dccc) main_mup2_pane_t2

0x9009,	// (0x0003dce3) main_mup2_pane_t3_ParamLimits

0x9009,	// (0x0003dce3) main_mup2_pane_t3

0x9020,	// (0x0003dcfa) main_mup2_pane_t4_ParamLimits

0x9020,	// (0x0003dcfa) main_mup2_pane_t4

0x903a,	// (0x0003dd14) main_mup2_pane_t5_ParamLimits

0x903a,	// (0x0003dd14) main_mup2_pane_t5

0x9054,	// (0x0003dd2e) main_mup2_pane_t6_ParamLimits

0x9054,	// (0x0003dd2e) main_mup2_pane_t6

0x0005,

0xf677,	// (0x00044351) main_mup2_pane_t_ParamLimits

0xf677,	// (0x00044351) main_mup2_pane_t

0x908c,	// (0x0003dd66) mup2_visualizer_pane_ParamLimits

0x908c,	// (0x0003dd66) mup2_visualizer_pane

0x90c2,	// (0x0003dd9c) mup_progress_pane_cp_ParamLimits

0x90c2,	// (0x0003dd9c) mup_progress_pane_cp

0x91cd,	// (0x0003dea7) mup_volume_pane_cp_ParamLimits

0x91cd,	// (0x0003dea7) mup_volume_pane_cp

0x90d9,	// (0x0003ddb3) mup2_visualizer_pane_g1_ParamLimits

0x90d9,	// (0x0003ddb3) mup2_visualizer_pane_g1

0xd3a9,	// (0x00042083) mup2_visualizer_pane_g2_ParamLimits

0xd3a9,	// (0x00042083) mup2_visualizer_pane_g2

0x90ee,	// (0x0003ddc8) mup2_visualizer_pane_g3_ParamLimits

0x90ee,	// (0x0003ddc8) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x0004435e) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x0004435e) mup2_visualizer_pane_g

0x262f,	// (0x00037309) aid_size_cell_fmradio

0x8922,	// (0x0003d5fc) aid_height_parent_landcape

0x1b27,	// (0x00036801) wml_content_pane_cp

0x1b2f,	// (0x00036809) wml_tabs_pane

0x1b38,	// (0x00036812) popup_wml_miniature_window

0x1b40,	// (0x0003681a) scroll_pane_cp021

0x1b54,	// (0x0003682e) wml_content_pane_comp8

0x13a1,	// (0x0003607b) bg_popup_sub_pane_cp05

0xd3c7,	// (0x000420a1) popup_wml_miniature_window_g1

0xd3cf,	// (0x000420a9) wml_miniature_view_pane

0x90fc,	// (0x0003ddd6) aid_size_wml_view

0x9104,	// (0x0003ddde) wml_miniature_view_pane_g1

0x910d,	// (0x0003dde7) wml_miniature_view_pane_g2

0x9116,	// (0x0003ddf0) wml_miniature_view_pane_g3

0x911e,	// (0x0003ddf8) wml_miniature_view_pane_g4

0x9126,	// (0x0003de00) wml_miniature_view_pane_g5

0x912e,	// (0x0003de08) wml_miniature_view_pane_g6

0x9136,	// (0x0003de10) wml_miniature_view_pane_g7

0x913e,	// (0x0003de18) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x00044365) wml_miniature_view_pane_g

0xd39d,	// (0x00042077) background_graphic_ParamLimits

0xd39d,	// (0x00042077) background_graphic

0xd3d7,	// (0x000420b1) wml_tabs_2_pane

0xd3e0,	// (0x000420ba) wml_tabs_3_pane_ParamLimits

0xd3e0,	// (0x000420ba) wml_tabs_3_pane

0xd3f2,	// (0x000420cc) wml_tabs_4_pane_ParamLimits

0xd3f2,	// (0x000420cc) wml_tabs_4_pane

0xd408,	// (0x000420e2) wml_tabs_5_pane_ParamLimits

0xd408,	// (0x000420e2) wml_tabs_5_pane

0xd422,	// (0x000420fc) wml_tabs_pane_g2_ParamLimits

0xd422,	// (0x000420fc) wml_tabs_pane_g2

0xd436,	// (0x00042110) wml_tabs_pane_g3_ParamLimits

0xd436,	// (0x00042110) wml_tabs_pane_g3

0x9146,	// (0x0003de20) wml_tabs_2_active_pane_ParamLimits

0x9146,	// (0x0003de20) wml_tabs_2_active_pane

0x9156,	// (0x0003de30) wml_tabs_2_passive_pane_ParamLimits

0x9156,	// (0x0003de30) wml_tabs_2_passive_pane

0x9166,	// (0x0003de40) wml_tabs_3_active_pane_cp_ParamLimits

0x9166,	// (0x0003de40) wml_tabs_3_active_pane_cp

0x9177,	// (0x0003de51) wml_tabs_3_passive_pane_ParamLimits

0x9177,	// (0x0003de51) wml_tabs_3_passive_pane

0x9188,	// (0x0003de62) wml_tabs_3_passive_pane_cp_ParamLimits

0x9188,	// (0x0003de62) wml_tabs_3_passive_pane_cp

0x9199,	// (0x0003de73) tabs_4_active_pane

0x91a1,	// (0x0003de7b) tabs_4_passive_pane

0x91a9,	// (0x0003de83) tabs_4_passive_pane_cp

0x91b1,	// (0x0003de8b) tabs_4_passive_pane_cp2

0x35e5,	// (0x000382bf) aid_height_text

0x7ef3,	// (0x0003cbcd) mup_volume_cont_pane_ParamLimits

0x7ef3,	// (0x0003cbcd) mup_volume_cont_pane

0x5c6f,	// (0x0003a949) aid_size_cell_pinb

0x163a,	// (0x00036314) aid_size_list_pinb

0x90ab,	// (0x0003dd85) mup2_volume_cont_pane_ParamLimits

0x90ab,	// (0x0003dd85) mup2_volume_cont_pane

0x91b9,	// (0x0003de93) mup2_volume_cont_pane_g1_ParamLimits

0x91b9,	// (0x0003de93) mup2_volume_cont_pane_g1

0x58a4,	// (0x0003a57e) aid_size_cell_touch_ParamLimits

0x58a4,	// (0x0003a57e) aid_size_cell_touch

0x5b4f,	// (0x0003a829) touch_pane_ParamLimits

0x5b4f,	// (0x0003a829) touch_pane

0x0f86,	// (0x00035c60) main_rss2_pane

0xd453,	// (0x0004212d) listscroll_rss2_pane

0xd45c,	// (0x00042136) rss2_navigation_pane

0xd464,	// (0x0004213e) list_rss2_pane

0x21b8,	// (0x00036e92) scroll_pane_cp22

0xd46c,	// (0x00042146) rss2_navigation_pane_g1

0xd475,	// (0x0004214f) rss2_navigation_pane_g2

0xd47d,	// (0x00042157) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x00044376) rss2_navigation_pane_g

0xd485,	// (0x0004215f) rss2_navigation_pane_t1

0x91f2,	// (0x0003decc) rss2_list_single_pane_ParamLimits

0x91f2,	// (0x0003decc) rss2_list_single_pane

0xd493,	// (0x0004216d) rss2_list_single_pane_t2

0xd4a1,	// (0x0004217b) rss2_list_single_pane_t3_ParamLimits

0xd4a1,	// (0x0004217b) rss2_list_single_pane_t3

0xd4be,	// (0x00042198) rss2_list_single_pane_t4

0x76a5,	// (0x0003c37f) smil_status_pane_g1

0x14b5,	// (0x0003618f) main_image2_pane_ParamLimits

0x14b5,	// (0x0003618f) main_image2_pane

0x8dbe,	// (0x0003da98) main_camera2_pane_g9_ParamLimits

0x8dbe,	// (0x0003da98) main_camera2_pane_g9

0x8e12,	// (0x0003daec) main_camera2_pane_t5_ParamLimits

0x8e12,	// (0x0003daec) main_camera2_pane_t5

0x8e24,	// (0x0003dafe) main_camera2_pane_t6_ParamLimits

0x8e24,	// (0x0003dafe) main_camera2_pane_t6

0x922e,	// (0x0003df08) main_image2_pane_g1_ParamLimits

0x922e,	// (0x0003df08) main_image2_pane_g1

0x8484,	// (0x0003d15e) smil2_video_pane_ParamLimits

0x8484,	// (0x0003d15e) smil2_video_pane

0x465e,	// (0x00039338) aid_zoom_text_primary_cp

0x5af4,	// (0x0003a7ce) popup_preview_fixed_window

0x1a90,	// (0x0003676a) im_reading_pane_g1

0x8d08,	// (0x0003d9e2) cams2_bc_adjust_pane_cp_ParamLimits

0x8d08,	// (0x0003d9e2) cams2_bc_adjust_pane_cp

0x8e54,	// (0x0003db2e) cams2_bc_adjust_pane_ParamLimits

0x8e54,	// (0x0003db2e) cams2_bc_adjust_pane

0x923a,	// (0x0003df14) cams2_bc_adjust_pane_g1

0x9242,	// (0x0003df1c) cams2_slider_pane

0x924b,	// (0x0003df25) cams2_slider_pane_g1

0x9254,	// (0x0003df2e) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x0004437d) cams2_slider_pane_g

0x5d4e,	// (0x0003aa28) calc_display_pane_ParamLimits

0x5d6c,	// (0x0003aa46) calc_paper_pane_ParamLimits

0x5d88,	// (0x0003aa62) grid_calc_pane_ParamLimits

0x795e,	// (0x0003c638) popup_clock_digital_window_t1_ParamLimits

0x25cc,	// (0x000372a6) main_image_pane_t1

0x5d34,	// (0x0003aa0e) aid_size_cell_calc_ParamLimits

0x5d34,	// (0x0003aa0e) aid_size_cell_calc

0x895c,	// (0x0003d636) popup_blid_sat_info2_window_ParamLimits

0x895c,	// (0x0003d636) popup_blid_sat_info2_window

0xd4d4,	// (0x000421ae) aid_size_cell_blid

0xd4dc,	// (0x000421b6) bg_popup_window_pane_cp07

0xd4ff,	// (0x000421d9) grid_popup_blid_pane

0xd509,	// (0x000421e3) heading_pane_cp05_ParamLimits

0xd509,	// (0x000421e3) heading_pane_cp05

0xd5d3,	// (0x000422ad) cell_popup_blid_pane_ParamLimits

0xd5d3,	// (0x000422ad) cell_popup_blid_pane

0xd5f9,	// (0x000422d3) cell_popup_blid_pane_g1

0xd601,	// (0x000422db) cell_popup_blid_pane_t1

0x9071,	// (0x0003dd4b) mup2_indicator_pane_ParamLimits

0x9071,	// (0x0003dd4b) mup2_indicator_pane

0x2305,	// (0x00036fdf) mup2_visualizer_osc_pane

0xd3b5,	// (0x0004208f) mup2_visualizer_spec_pane_ParamLimits

0xd3b5,	// (0x0004208f) mup2_visualizer_spec_pane

0x926e,	// (0x0003df48) mup2_spec_half_pane

0x9277,	// (0x0003df51) mup2_spec_half_pane_cp

0x9281,	// (0x0003df5b) mup2_spec_bar_pane_ParamLimits

0x9281,	// (0x0003df5b) mup2_spec_bar_pane

0x37ab,	// (0x00038485) mup2_spec_bar_pane_g1

0x37b5,	// (0x0003848f) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x000442f0) mup2_spec_bar_pane_g

0x92a0,	// (0x0003df7a) mup2_osc_middle_pane

0x37c7,	// (0x000384a1) mup2_visualizer_osc_pane_g1

0x0fb0,	// (0x00035c8a) popup_number_entry_window_t1_ParamLimits

0x0fc3,	// (0x00035c9d) popup_number_entry_window_t2_ParamLimits

0x0fd5,	// (0x00035caf) popup_number_entry_window_t3_ParamLimits

0x5ba6,	// (0x0003a880) popup_number_entry_window_t5_ParamLimits

0x5ba6,	// (0x0003a880) popup_number_entry_window_t5

0xf0d8,	// (0x00043db2) popup_number_entry_window_t_ParamLimits

0x0fe7,	// (0x00035cc1) text_title_cp2_ParamLimits

0x816b,	// (0x0003ce45) aid_hotspot_pointer_text2_pane

0x8205,	// (0x0003cedf) main_viewer_pane_g9_ParamLimits

0x8205,	// (0x0003cedf) main_viewer_pane_g9

0x1cbf,	// (0x00036999) cale_month_pane_t1_ParamLimits

0x1d26,	// (0x00036a00) bg_cale_pane_ParamLimits

0x1d3e,	// (0x00036a18) list_cale_pane_ParamLimits

0x1861,	// (0x0003653b) listscroll_cale_day_pane_t1

0x1d4f,	// (0x00036a29) scroll_pane_cp09_ParamLimits

0x7f32,	// (0x0003cc0c) main_mup_eq_pane_t1_ParamLimits

0x7f32,	// (0x0003cc0c) main_mup_eq_pane_t1

0x7f4c,	// (0x0003cc26) main_mup_eq_pane_t2_ParamLimits

0x7f4c,	// (0x0003cc26) main_mup_eq_pane_t2

0x7f64,	// (0x0003cc3e) main_mup_eq_pane_t3_ParamLimits

0x7f64,	// (0x0003cc3e) main_mup_eq_pane_t3

0x7f7c,	// (0x0003cc56) main_mup_eq_pane_t4_ParamLimits

0x7f7c,	// (0x0003cc56) main_mup_eq_pane_t4

0x7f94,	// (0x0003cc6e) main_mup_eq_pane_t5_ParamLimits

0x7f94,	// (0x0003cc6e) main_mup_eq_pane_t5

0x7fac,	// (0x0003cc86) main_mup_eq_pane_t6_ParamLimits

0x7fac,	// (0x0003cc86) main_mup_eq_pane_t6

0x7fc0,	// (0x0003cc9a) main_mup_eq_pane_t7_ParamLimits

0x7fc0,	// (0x0003cc9a) main_mup_eq_pane_t7

0x7fd4,	// (0x0003ccae) main_mup_eq_pane_t8_ParamLimits

0x7fd4,	// (0x0003ccae) main_mup_eq_pane_t8

0x7fea,	// (0x0003ccc4) main_mup_eq_pane_t9_ParamLimits

0x7fea,	// (0x0003ccc4) main_mup_eq_pane_t9

0x8002,	// (0x0003ccdc) main_mup_eq_pane_t10_ParamLimits

0x8002,	// (0x0003ccdc) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x0004413f) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x0004413f) main_mup_eq_pane_t

0x80bf,	// (0x0003cd99) mup_equalizer_pane_cp5_ParamLimits

0x80d5,	// (0x0003cdaf) mup_equalizer_pane_cp6_ParamLimits

0x80ed,	// (0x0003cdc7) mup_equalizer_pane_cp7_ParamLimits

0x0f86,	// (0x00035c60) main_gallery_pane

0x37d0,	// (0x000384aa) smil2_volume_pane

0x37eb,	// (0x000384c5) smil_status_volume_pane_g1_ParamLimits

0x37d8,	// (0x000384b2) smil_status_volume_pane_g2_ParamLimits

0x8b7f,	// (0x0003d859) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x000442f5) smil_status_volume_pane_g_ParamLimits

0xd4dc,	// (0x000421b6) bg_popup_window_pane_cp07_ParamLimits

0xd4ea,	// (0x000421c4) blid_firmament_pane

0x92a9,	// (0x0003df83) aid_size_cell_gallery_ParamLimits

0x92a9,	// (0x0003df83) aid_size_cell_gallery

0x92b7,	// (0x0003df91) grid_gallery_pane_ParamLimits

0x92b7,	// (0x0003df91) grid_gallery_pane

0x92c7,	// (0x0003dfa1) cell_gallery_pane_ParamLimits

0x92c7,	// (0x0003dfa1) cell_gallery_pane

0xd60f,	// (0x000422e9) bg_cell_gallery_focus_pane_ParamLimits

0xd60f,	// (0x000422e9) bg_cell_gallery_focus_pane

0xd621,	// (0x000422fb) cell_gallery_pane_g1_ParamLimits

0xd621,	// (0x000422fb) cell_gallery_pane_g1

0x9315,	// (0x0003dfef) cell_gallery_pane_g2_ParamLimits

0x9315,	// (0x0003dfef) cell_gallery_pane_g2

0x9322,	// (0x0003dffc) cell_gallery_pane_g3_ParamLimits

0x9322,	// (0x0003dffc) cell_gallery_pane_g3

0xd62d,	// (0x00042307) cell_gallery_pane_g4_ParamLimits

0xd62d,	// (0x00042307) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x000443a3) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x000443a3) cell_gallery_pane_g

0xd639,	// (0x00042313) bg_cell_gallery_focus_pane_g1

0xd641,	// (0x0004231b) bg_cell_gallery_focus_pane_g2

0xd649,	// (0x00042323) bg_cell_gallery_focus_pane_g3

0xd651,	// (0x0004232b) bg_cell_gallery_focus_pane_g4

0xd659,	// (0x00042333) bg_cell_gallery_focus_pane_g5

0xd661,	// (0x0004233b) bg_cell_gallery_focus_pane_g6

0xd669,	// (0x00042343) bg_cell_gallery_focus_pane_g7

0xd671,	// (0x0004234b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x000443ac) bg_cell_gallery_focus_pane_g

0xd679,	// (0x00042353) aid_firma_cardinal

0xd68d,	// (0x00042367) blid_firmament_pane_t1

0xd6a4,	// (0x0004237e) blid_firmament_pane_t2

0xd6bb,	// (0x00042395) blid_firmament_pane_t3

0xd6d2,	// (0x000423ac) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x000443bd) blid_firmament_pane_t

0xd6e9,	// (0x000423c3) blid_sat_info_pane

0xd6f9,	// (0x000423d3) blid_sat_info_pane_g1

0xd6f9,	// (0x000423d3) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x000443c6) blid_sat_info_pane_g

0xd703,	// (0x000423dd) blid_sat_info_pane_t1

0xd711,	// (0x000423eb) smil2_volume_content_pane

0xd71a,	// (0x000423f4) smil2_volume_pane_g1

0xd722,	// (0x000423fc) smil2_volume_content_pane_g1

0xd72b,	// (0x00042405) smil2_volume_content_pane_g2

0xd734,	// (0x0004240e) smil2_volume_content_pane_g3

0xd73d,	// (0x00042417) smil2_volume_content_pane_g4

0xd746,	// (0x00042420) smil2_volume_content_pane_g5

0xd74f,	// (0x00042429) smil2_volume_content_pane_g6

0xd758,	// (0x00042432) smil2_volume_content_pane_g7

0xd761,	// (0x0004243b) smil2_volume_content_pane_g8

0xd76a,	// (0x00042444) smil2_volume_content_pane_g9

0xd773,	// (0x0004244d) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x000443cb) smil2_volume_content_pane_g

0x6354,	// (0x0003b02e) cale_week_day_heading_pane_t1_ParamLimits

0x6368,	// (0x0003b042) cale_week_day_heading_pane_t2_ParamLimits

0x637c,	// (0x0003b056) cale_week_day_heading_pane_t3_ParamLimits

0x6390,	// (0x0003b06a) cale_week_day_heading_pane_t4_ParamLimits

0x63a4,	// (0x0003b07e) cale_week_day_heading_pane_t5_ParamLimits

0x63b8,	// (0x0003b092) cale_week_day_heading_pane_t6_ParamLimits

0x63cc,	// (0x0003b0a6) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x00043eb7) cale_week_day_heading_pane_t_ParamLimits

0x1873,	// (0x0003654d) bg_cale_side_pane_ParamLimits

0x63e0,	// (0x0003b0ba) cale_week_time_pane_t1_ParamLimits

0x63f8,	// (0x0003b0d2) cale_week_time_pane_t2_ParamLimits

0x6410,	// (0x0003b0ea) cale_week_time_pane_t3_ParamLimits

0x6428,	// (0x0003b102) cale_week_time_pane_t4_ParamLimits

0x6440,	// (0x0003b11a) cale_week_time_pane_t5_ParamLimits

0x6458,	// (0x0003b132) cale_week_time_pane_t6_ParamLimits

0x6478,	// (0x0003b152) cale_week_time_pane_t7_ParamLimits

0x6498,	// (0x0003b172) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x00043ec6) cale_week_time_pane_t_ParamLimits

0x64b8,	// (0x0003b192) cell_cale_week_pane_g2_ParamLimits

0x1873,	// (0x0003654d) bg_cale_side_pane_cp01_ParamLimits

0x750a,	// (0x0003c1e4) cale_month_week_pane_t1_ParamLimits

0x7521,	// (0x0003c1fb) cale_month_week_pane_t2_ParamLimits

0x7538,	// (0x0003c212) cale_month_week_pane_t3_ParamLimits

0x754f,	// (0x0003c229) cale_month_week_pane_t4_ParamLimits

0x7566,	// (0x0003c240) cale_month_week_pane_t5_ParamLimits

0x7585,	// (0x0003c25f) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x00043f9f) cale_month_week_pane_t_ParamLimits

0x7672,	// (0x0003c34c) cell_cale_month_pane_g1_ParamLimits

0x0f86,	// (0x00035c60) main_cale_event_viewer_pane

0x0f86,	// (0x00035c60) listscroll_cale_event_viewer_pane

0xd77c,	// (0x00042456) list_cale_ev_pane

0xd784,	// (0x0004245e) scroll_pane_cp023

0xd790,	// (0x0004246a) field_cale_ev_pane_ParamLimits

0xd790,	// (0x0004246a) field_cale_ev_pane

0xd7aa,	// (0x00042484) field_cale_ev_content_pane_ParamLimits

0xd7aa,	// (0x00042484) field_cale_ev_content_pane

0xd7b6,	// (0x00042490) field_cale_ev_pane_g1_ParamLimits

0xd7b6,	// (0x00042490) field_cale_ev_pane_g1

0xd7c2,	// (0x0004249c) field_cale_ev_pane_g2_ParamLimits

0xd7c2,	// (0x0004249c) field_cale_ev_pane_g2

0xd7da,	// (0x000424b4) field_cale_ev_pane_g3_ParamLimits

0xd7da,	// (0x000424b4) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x000443e0) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x000443e0) field_cale_ev_pane_g

0xd7f2,	// (0x000424cc) field_cale_ev_pane_t1_ParamLimits

0xd7f2,	// (0x000424cc) field_cale_ev_pane_t1

0xd809,	// (0x000424e3) field_cale_ev_content_pane_t1_ParamLimits

0xd809,	// (0x000424e3) field_cale_ev_content_pane_t1

0x247c,	// (0x00037156) bg_button_pane_cp01

0x1721,	// (0x000363fb) listscroll_cale_week_pane_ParamLimits

0x6129,	// (0x0003ae03) popup_toolbar_window_cp01

0x1861,	// (0x0003653b) listscroll_cale_week_pane_t1_ParamLimits

0x1721,	// (0x000363fb) listscroll_cale_day_pane_ParamLimits

0x6129,	// (0x0003ae03) popup_toolbar_window_cp02

0x1861,	// (0x0003653b) listscroll_cale_day_pane_t1_ParamLimits

0x1721,	// (0x000363fb) main_cale_month_pane_ParamLimits

0x8a57,	// (0x0003d731) popup_toolbar_window_cp03_ParamLimits

0x8a57,	// (0x0003d731) popup_toolbar_window_cp03

0x8396,	// (0x0003d070) main_image_pane_g2_ParamLimits

0x8396,	// (0x0003d070) main_image_pane_g2

0x83a2,	// (0x0003d07c) main_image_pane_g3_ParamLimits

0x83a2,	// (0x0003d07c) main_image_pane_g3

0x0002,

0xf4f7,	// (0x000441d1) main_image_pane_g_ParamLimits

0xf4f7,	// (0x000441d1) main_image_pane_g

0x25cc,	// (0x000372a6) main_image_pane_t1_ParamLimits

0x83ae,	// (0x0003d088) main_image_pane_t2_ParamLimits

0x83ae,	// (0x0003d088) main_image_pane_t2

0x83c0,	// (0x0003d09a) main_image_pane_t3_ParamLimits

0x83c0,	// (0x0003d09a) main_image_pane_t3

0x83d2,	// (0x0003d0ac) main_image_pane_t4_ParamLimits

0x83d2,	// (0x0003d0ac) main_image_pane_t4

0x0003,

0xf4fe,	// (0x000441d8) main_image_pane_t_ParamLimits

0xf4fe,	// (0x000441d8) main_image_pane_t

0x83e4,	// (0x0003d0be) popup_image_details_window_cp01

0x83ee,	// (0x0003d0c8) popup_toobar_trans_pane_cp01_ParamLimits

0x83ee,	// (0x0003d0c8) popup_toobar_trans_pane_cp01

0x89af,	// (0x0003d689) popup_image_details_window_ParamLimits

0x89af,	// (0x0003d689) popup_image_details_window

0x89bd,	// (0x0003d697) popup_image_focus_window

0x8cfa,	// (0x0003d9d4) camera2_autofocus_pane_ParamLimits

0x8cfa,	// (0x0003d9d4) camera2_autofocus_pane

0x0f86,	// (0x00035c60) bg_popup_sub_pane_cp06

0xd826,	// (0x00042500) popup_image_focus_window_g1

0xd82e,	// (0x00042508) popup_image_focus_window_g2

0xd836,	// (0x00042510) popup_image_focus_window_g3

0xd83e,	// (0x00042518) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x000443e7) popup_image_focus_window_g

0xd846,	// (0x00042520) popup_image_focus_window_t1

0xd854,	// (0x0004252e) popup_image_focus_window_t2

0xd864,	// (0x0004253e) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x000443f0) popup_image_focus_window_t

0xd872,	// (0x0004254c) camera2_autofocus_pane_g1

0x14b5,	// (0x0003618f) bg_tb_trans_pane_cp01

0xd880,	// (0x0004255a) popup_image_details_window_g1

0xd893,	// (0x0004256d) popup_image_details_window_g2

0x0002,

0xf728,	// (0x00044402) popup_image_details_window_g

0xd8bc,	// (0x00042596) popup_image_details_window_t1

0xd8ce,	// (0x000425a8) popup_image_details_window_t2

0xd8e7,	// (0x000425c1) popup_image_details_window_t3

0xd8fb,	// (0x000425d5) popup_image_details_window_t4

0xd916,	// (0x000425f0) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x00044409) popup_image_details_window_t

0x170d,	// (0x000363e7) bg_calc_paper_pane_ParamLimits

0x0f86,	// (0x00035c60) grid_highlight_pane_cp013

0x5e85,	// (0x0003ab5f) list_calc_pane_ParamLimits

0x5e97,	// (0x0003ab71) scroll_pane_cp024

0x1721,	// (0x000363fb) bg_calc_display_pane_ParamLimits

0x5e9f,	// (0x0003ab79) calc_display_pane_t1_ParamLimits

0x5eb4,	// (0x0003ab8e) calc_display_pane_t2_ParamLimits

0x5ec9,	// (0x0003aba3) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x00043e39) calc_display_pane_t_ParamLimits

0x5fb0,	// (0x0003ac8a) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x00043e56) cell_calc_pane_g

0x5fb9,	// (0x0003ac93) cell_calc_pane_t1

0x1780,	// (0x0003645a) grid_highlight_pane_cp02_ParamLimits

0x1796,	// (0x00036470) toolbar_button_pane_cp01_ParamLimits

0x1796,	// (0x00036470) toolbar_button_pane_cp01

0x2611,	// (0x000372eb) temp_image_control_pane_ParamLimits

0x2611,	// (0x000372eb) temp_image_control_pane

0x14b5,	// (0x0003618f) main_mp3_pane

0xd930,	// (0x0004260a) temp_image_control_pane_g1_ParamLimits

0xd930,	// (0x0004260a) temp_image_control_pane_g1

0xd93e,	// (0x00042618) temp_image_control_pane_g2_ParamLimits

0xd93e,	// (0x00042618) temp_image_control_pane_g2

0xd950,	// (0x0004262a) temp_image_control_pane_g3_ParamLimits

0xd950,	// (0x0004262a) temp_image_control_pane_g3

0x935f,	// (0x0003e039) temp_image_control_pane_g4_ParamLimits

0x935f,	// (0x0003e039) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x00044414) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x00044414) temp_image_control_pane_g

0xd930,	// (0x0004260a) main_mp3_pane_g1

0x9370,	// (0x0003e04a) main_mp3_pane_g2

0x0007,

0xf743,	// (0x0004441d) main_mp3_pane_g

0xd993,	// (0x0004266d) main_mp3_pane_t1

0x18e2,	// (0x000365bc) main_camera_pane_g8_ParamLimits

0x18e2,	// (0x000365bc) main_camera_pane_g8

0x6742,	// (0x0003b41c) main_video_pane_g7_ParamLimits

0x6742,	// (0x0003b41c) main_video_pane_g7

0x8e42,	// (0x0003db1c) main_camera2_pane_t7_ParamLimits

0x8e42,	// (0x0003db1c) main_camera2_pane_t7

0x1ae7,	// (0x000367c1) scroll_pane_cp025_ParamLimits

0x1ae7,	// (0x000367c1) scroll_pane_cp025

0x1afb,	// (0x000367d5) scroll_pane_cp026_ParamLimits

0x1afb,	// (0x000367d5) scroll_pane_cp026

0x1b0a,	// (0x000367e4) wml_content_pane_ParamLimits

0x0f86,	// (0x00035c60) main_touch_calib_pane

0x9414,	// (0x0003e0ee) main_touch_calib_pane_g1

0x9420,	// (0x0003e0fa) main_touch_calib_pane_g2

0x942c,	// (0x0003e106) main_touch_calib_pane_g3

0x9438,	// (0x0003e112) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x0004443b) main_touch_calib_pane_g

0x9444,	// (0x0003e11e) main_touch_calib_pane_t1

0x945b,	// (0x0003e135) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x00044444) main_touch_calib_pane_t

0x2246,	// (0x00036f20) mup_progress_pane_cp02

0x2265,	// (0x00036f3f) navi_pane_g1

0x22c7,	// (0x00036fa1) navi_pane_mp_t3

0x14b5,	// (0x0003618f) main_mp3_pane_ParamLimits

0x8a95,	// (0x0003d76f) navi_pane_ParamLimits

0xd930,	// (0x0004260a) main_mp3_pane_g1_ParamLimits

0x9370,	// (0x0003e04a) main_mp3_pane_g2_ParamLimits

0x937c,	// (0x0003e056) main_mp3_pane_g3_ParamLimits

0x937c,	// (0x0003e056) main_mp3_pane_g3

0x9388,	// (0x0003e062) main_mp3_pane_g4_ParamLimits

0x9388,	// (0x0003e062) main_mp3_pane_g4

0xd960,	// (0x0004263a) main_mp3_pane_g5_ParamLimits

0xd960,	// (0x0004263a) main_mp3_pane_g5

0xd96e,	// (0x00042648) main_mp3_pane_g6_ParamLimits

0xd96e,	// (0x00042648) main_mp3_pane_g6

0xd97b,	// (0x00042655) main_mp3_pane_g7_ParamLimits

0xd97b,	// (0x00042655) main_mp3_pane_g7

0xd987,	// (0x00042661) main_mp3_pane_g8_ParamLimits

0xd987,	// (0x00042661) main_mp3_pane_g8

0xf743,	// (0x0004441d) main_mp3_pane_g_ParamLimits

0x9394,	// (0x0003e06e) main_mp3_pane_t2

0x93a4,	// (0x0003e07e) main_mp3_pane_t3

0xd9a1,	// (0x0004267b) main_mp3_pane_t4

0xd9af,	// (0x00042689) main_mp3_pane_t5

0x0005,

0xf754,	// (0x0004442e) main_mp3_pane_t

0xd9bd,	// (0x00042697) mup_progress_pane_cp01

0x465e,	// (0x00039338) aid_zoom_text_secondary2

0xd77c,	// (0x00042456) list_cale_ev2_pane

0xd784,	// (0x0004245e) scroll_pane_cp023_ParamLimits

0x94ae,	// (0x0003e188) field_cale_ev2_pane_ParamLimits

0x94ae,	// (0x0003e188) field_cale_ev2_pane

0x495b,	// (0x00039635) field_cale_ev2_pane_g1_ParamLimits

0x495b,	// (0x00039635) field_cale_ev2_pane_g1

0x4967,	// (0x00039641) field_cale_ev2_pane_g2_ParamLimits

0x4967,	// (0x00039641) field_cale_ev2_pane_g2

0x497f,	// (0x00039659) field_cale_ev2_pane_g3_ParamLimits

0x497f,	// (0x00039659) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x0004444f) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x0004444f) field_cale_ev2_pane_g

0x49a3,	// (0x0003967d) field_cale_ev2_pane_t1_ParamLimits

0x49a3,	// (0x0003967d) field_cale_ev2_pane_t1

0x49ba,	// (0x00039694) field_cale_ev2_pane_t2_ParamLimits

0x49ba,	// (0x00039694) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x00044458) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x00044458) field_cale_ev2_pane_t

0x826d,	// (0x0003cf47) main_postcard_pane_g5_ParamLimits

0x826d,	// (0x0003cf47) main_postcard_pane_g5

0x827b,	// (0x0003cf55) main_postcard_pane_g6_ParamLimits

0x827b,	// (0x0003cf55) main_postcard_pane_g6

0x6582,	// (0x0003b25c) camera2_autofocus_pane_cp_ParamLimits

0x6582,	// (0x0003b25c) camera2_autofocus_pane_cp

0x14b5,	// (0x0003618f) main_mup3_pane

0x9502,	// (0x0003e1dc) main_mup3_pane_g1_ParamLimits

0x9502,	// (0x0003e1dc) main_mup3_pane_g1

0x9523,	// (0x0003e1fd) main_mup3_pane_g2_ParamLimits

0x9523,	// (0x0003e1fd) main_mup3_pane_g2

0x95a2,	// (0x0003e27c) main_mup3_pane_g3_ParamLimits

0x95a2,	// (0x0003e27c) main_mup3_pane_g3

0x95e5,	// (0x0003e2bf) main_mup3_pane_g4_ParamLimits

0x95e5,	// (0x0003e2bf) main_mup3_pane_g4

0x9628,	// (0x0003e302) main_mup3_pane_g5_ParamLimits

0x9628,	// (0x0003e302) main_mup3_pane_g5

0x966d,	// (0x0003e347) main_mup3_pane_g6_ParamLimits

0x966d,	// (0x0003e347) main_mup3_pane_g6

0xd9c5,	// (0x0004269f) main_mup3_pane_g7_ParamLimits

0xd9c5,	// (0x0004269f) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x00044468) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x00044468) main_mup3_pane_g

0x96e3,	// (0x0003e3bd) main_mup3_pane_t1_ParamLimits

0x96e3,	// (0x0003e3bd) main_mup3_pane_t1

0x9752,	// (0x0003e42c) main_mup3_pane_t2_ParamLimits

0x9752,	// (0x0003e42c) main_mup3_pane_t2

0x981b,	// (0x0003e4f5) main_mup3_pane_t4_ParamLimits

0x981b,	// (0x0003e4f5) main_mup3_pane_t4

0x986f,	// (0x0003e549) main_mup3_pane_t5_ParamLimits

0x986f,	// (0x0003e549) main_mup3_pane_t5

0x991f,	// (0x0003e5f9) main_mup3_pane_t6_ParamLimits

0x991f,	// (0x0003e5f9) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x00044479) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x00044479) main_mup3_pane_t

0x99cb,	// (0x0003e6a5) mup3_progress_pane_ParamLimits

0x99cb,	// (0x0003e6a5) mup3_progress_pane

0x9a3f,	// (0x0003e719) popup_mup3_control_window_ParamLimits

0x9a3f,	// (0x0003e719) popup_mup3_control_window

0xd9d3,	// (0x000426ad) popup_mup3_text_window

0x9a58,	// (0x0003e732) mup3_progress_pane_t1

0x9a77,	// (0x0003e751) mup3_progress_pane_t2

0xd9db,	// (0x000426b5) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x00044486) mup3_progress_pane_t

0xd9f8,	// (0x000426d2) mup_progress_pane_cp03

0x0f86,	// (0x00035c60) bg_tb_trans_pane_cp04

0x9a96,	// (0x0003e770) mup3_volume_pane

0x9a9e,	// (0x0003e778) popup_mup3_control_window_g1

0x9aa7,	// (0x0003e781) mup3_volume_pane_g1

0x9ab0,	// (0x0003e78a) mup3_volume_pane_g2

0x9ab9,	// (0x0003e793) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x0004448d) mup3_volume_pane_g

0x0f86,	// (0x00035c60) bg_tb_trans_pane_cp03

0xda08,	// (0x000426e2) popup_mup3_text_window_g1

0xda10,	// (0x000426ea) popup_mup3_text_window_t1

0x1769,	// (0x00036443) list_calc_item_pane_g1_ParamLimits

0xd44a,	// (0x00042124) mup_volume_pane_cp_g1

0x9472,	// (0x0003e14c) main_touch_calib_pane_t3

0x9486,	// (0x0003e160) main_touch_calib_pane_t4

0x949a,	// (0x0003e174) main_touch_calib_pane_t5

0x5890,	// (0x0003a56a) aid_cell_size_toolbar2

0x5898,	// (0x0003a572) aid_popup3_width_pane

0x4656,	// (0x00039330) aid_zoom_text_msg_primary

0x656c,	// (0x0003b246) vorec_t7

0x172d,	// (0x00036407) bg_calc_paper_pane_g1_ParamLimits

0x1745,	// (0x0003641f) bg_calc_paper_pane_g2_ParamLimits

0x1739,	// (0x00036413) bg_calc_paper_pane_g3_ParamLimits

0x175d,	// (0x00036437) bg_calc_paper_pane_g4_ParamLimits

0x1751,	// (0x0003642b) bg_calc_paper_pane_g5_ParamLimits

0x5f08,	// (0x0003abe2) bg_calc_paper_pane_g6_ParamLimits

0x5f19,	// (0x0003abf3) bg_calc_paper_pane_g7_ParamLimits

0x5f2a,	// (0x0003ac04) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x00043e40) bg_calc_paper_pane_g_ParamLimits

0x5f3b,	// (0x0003ac15) calc_bg_paper_pane_g9_ParamLimits

0x666b,	// (0x0003b345) image_qvga_pane_ParamLimits

0x666b,	// (0x0003b345) image_qvga_pane

0x160a,	// (0x000362e4) bg_popup_sub_pane_cp04_ParamLimits

0x2548,	// (0x00037222) popup_mup_playback_window_g1_ParamLimits

0x2554,	// (0x0003722e) popup_mup_playback_window_t1_ParamLimits

0x2569,	// (0x00037243) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x000441cc) popup_mup_playback_window_t_ParamLimits

0x8f71,	// (0x0003dc4b) main_mup2_pane_g3_ParamLimits

0x8f71,	// (0x0003dc4b) main_mup2_pane_g3

0x692b,	// (0x0003b605) popup_toolbar_window_cp04

0x295e,	// (0x00037638) popup_call2_audio_second_window_g3_ParamLimits

0x295e,	// (0x00037638) popup_call2_audio_second_window_g3

0x2d68,	// (0x00037a42) popup_call2_audio_first_window_g4_ParamLimits

0x2d68,	// (0x00037a42) popup_call2_audio_first_window_g4

0x33e7,	// (0x000380c1) popup_call2_audio_in_window_g4_ParamLimits

0x33e7,	// (0x000380c1) popup_call2_audio_in_window_g4

0x8389,	// (0x0003d063) aid_area_sk_bg_cut_ParamLimits

0x8389,	// (0x0003d063) aid_area_sk_bg_cut

0x257e,	// (0x00037258) aid_area_sk_bg_cut_2_ParamLimits

0x257e,	// (0x00037258) aid_area_sk_bg_cut_2

0x9305,	// (0x0003dfdf) aid_placing_details_win

0x930d,	// (0x0003dfe7) aid_placing_details_win_2

0xd872,	// (0x0004254c) camera2_autofocus_pane_g1_ParamLimits

0x5ae5,	// (0x0003a7bf) popup_fixed_preview_cale_window_ParamLimits

0x5ae5,	// (0x0003a7bf) popup_fixed_preview_cale_window

0x2328,	// (0x00037002) navi_slider_pane_g3

0x231f,	// (0x00036ff9) navi_slider_pane_g4

0x2316,	// (0x00036ff0) navi_slider_pane_g5

0x2328,	// (0x00037002) navi_slider_pane_g6

0x7cc6,	// (0x0003c9a0) navi_slider_pane_g7

0x2449,	// (0x00037123) mup_scale_pane_g3

0x2452,	// (0x0003712c) mup_scale_pane_g4

0x245b,	// (0x00037135) mup_scale_pane_g5

0x8105,	// (0x0003cddf) mup_scale_pane_g6

0x810e,	// (0x0003cde8) mup_scale_pane_g7

0x2328,	// (0x00037002) cams2_slider_pane_g3

0xd4cc,	// (0x000421a6) cams2_slider_pane_g4

0x925d,	// (0x0003df37) cams2_slider_pane_g5

0x2328,	// (0x00037002) cams2_slider_pane_g6

0x9265,	// (0x0003df3f) cams2_slider_pane_g7

0xd6f9,	// (0x000423d3) camera2_autofocus_pane_cp_g1

0xda1e,	// (0x000426f8) bg_popup_preview_window_pane_cp02_ParamLimits

0xda1e,	// (0x000426f8) bg_popup_preview_window_pane_cp02

0xda2a,	// (0x00042704) list_fp_cale_pane_ParamLimits

0xda2a,	// (0x00042704) list_fp_cale_pane

0xda36,	// (0x00042710) popup_fixed_preview_cale_window_t1_ParamLimits

0xda36,	// (0x00042710) popup_fixed_preview_cale_window_t1

0x9ac2,	// (0x0003e79c) popup_fixed_preview_cale_window_t2_ParamLimits

0x9ac2,	// (0x0003e79c) popup_fixed_preview_cale_window_t2

0x9ad7,	// (0x0003e7b1) popup_fixed_preview_cale_window_t3_ParamLimits

0x9ad7,	// (0x0003e7b1) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x00044494) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x00044494) popup_fixed_preview_cale_window_t

0x9aec,	// (0x0003e7c6) list_single_fp_cale_pane_ParamLimits

0x9aec,	// (0x0003e7c6) list_single_fp_cale_pane

0xda54,	// (0x0004272e) list_single_fp_cale_pane_g1_ParamLimits

0xda54,	// (0x0004272e) list_single_fp_cale_pane_g1

0xda60,	// (0x0004273a) list_single_fp_cale_pane_g2_ParamLimits

0xda60,	// (0x0004273a) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x0004449b) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x0004449b) list_single_fp_cale_pane_g

0xda79,	// (0x00042753) list_single_fp_cale_pane_t1_ParamLimits

0xda79,	// (0x00042753) list_single_fp_cale_pane_t1

0xda8b,	// (0x00042765) list_single_fp_cale_pane_t2_ParamLimits

0xda8b,	// (0x00042765) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x000444a2) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x000444a2) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0f86,	// (0x00035c60) main_dialer_pane

0x9b01,	// (0x0003e7db) aid_cell_size_keypad

0x9b0b,	// (0x0003e7e5) dialer_ne_pane

0x9b15,	// (0x0003e7ef) grid_dialer_command_1_pane

0x9b1d,	// (0x0003e7f7) grid_dialer_command_2_pane

0x9b25,	// (0x0003e7ff) grid_dialer_keypad_pane

0x9b39,	// (0x0003e813) bg_popup_call_pane_cp06_ParamLimits

0x9b39,	// (0x0003e813) bg_popup_call_pane_cp06

0x9b45,	// (0x0003e81f) dialer_ne_clear_pane_ParamLimits

0x9b45,	// (0x0003e81f) dialer_ne_clear_pane

0xdabe,	// (0x00042798) dialer_ne_pane_g1

0xdac6,	// (0x000427a0) dialer_ne_pane_t1_ParamLimits

0xdac6,	// (0x000427a0) dialer_ne_pane_t1

0x9b51,	// (0x0003e82b) dialer_ne_pane_t2_ParamLimits

0x9b51,	// (0x0003e82b) dialer_ne_pane_t2

0x9b6e,	// (0x0003e848) dialer_ne_pane_t3_ParamLimits

0x9b6e,	// (0x0003e848) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x000444a7) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x000444a7) dialer_ne_pane_t

0x9b92,	// (0x0003e86c) dialer_ne_pane_t3_copy1_ParamLimits

0x9b92,	// (0x0003e86c) dialer_ne_pane_t3_copy1

0x9bb6,	// (0x0003e890) cell_dialer_keypad_pane_ParamLimits

0x9bb6,	// (0x0003e890) cell_dialer_keypad_pane

0x9bcd,	// (0x0003e8a7) cell_dialer_command_1_pane_ParamLimits

0x9bcd,	// (0x0003e8a7) cell_dialer_command_1_pane

0x9be3,	// (0x0003e8bd) cell_dialer_command_2_pane_ParamLimits

0x9be3,	// (0x0003e8bd) cell_dialer_command_2_pane

0xdad8,	// (0x000427b2) bg_button_pane_cp02_ParamLimits

0xdad8,	// (0x000427b2) bg_button_pane_cp02

0x9bf2,	// (0x0003e8cc) cell_dialer_keypad_pane_g1_ParamLimits

0x9bf2,	// (0x0003e8cc) cell_dialer_keypad_pane_g1

0xdad8,	// (0x000427b2) bg_button_pane_cp03_ParamLimits

0xdad8,	// (0x000427b2) bg_button_pane_cp03

0x9c07,	// (0x0003e8e1) cell_dialer_command_1_pane_g1_ParamLimits

0x9c07,	// (0x0003e8e1) cell_dialer_command_1_pane_g1

0xdae4,	// (0x000427be) bg_button_pane_cp04

0x9c1b,	// (0x0003e8f5) cell_dialer_command_2_pane_g1

0x2305,	// (0x00036fdf) bg_button_pane_cp06

0xdaec,	// (0x000427c6) dialer_ne_clear_pane_g1

0x7c09,	// (0x0003c8e3) navi_pane_g2

0x7c37,	// (0x0003c911) navi_pane_g3

0x0002,

0xf3f5,	// (0x000440cf) navi_pane_g

0x7c62,	// (0x0003c93c) navi_pane_mv_g2

0x7c89,	// (0x0003c963) navi_pane_mv_g5

0x7c91,	// (0x0003c96b) navi_pane_mv_t1

0x1721,	// (0x000363fb) main_clock2_pane

0x9c4e,	// (0x0003e928) main_clock2_list_pane_ParamLimits

0x9c4e,	// (0x0003e928) main_clock2_list_pane

0x9c78,	// (0x0003e952) main_clock2_pane_t1_ParamLimits

0x9c78,	// (0x0003e952) main_clock2_pane_t1

0x9c9c,	// (0x0003e976) main_clock2_pane_t2_ParamLimits

0x9c9c,	// (0x0003e976) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x000444ae) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x000444ae) main_clock2_pane_t

0x9cf7,	// (0x0003e9d1) popup_clock_analogue_window_cp03_ParamLimits

0x9cf7,	// (0x0003e9d1) popup_clock_analogue_window_cp03

0x9d17,	// (0x0003e9f1) popup_clock_digital_window_cp02_ParamLimits

0x9d17,	// (0x0003e9f1) popup_clock_digital_window_cp02

0x9d8c,	// (0x0003ea66) main_clock2_list_single_pane_ParamLimits

0x9d8c,	// (0x0003ea66) main_clock2_list_single_pane

0x2305,	// (0x00036fdf) list_highlight_pane_cp05

0xdaf4,	// (0x000427ce) main_clock2_list_single_pane_t1

0x692b,	// (0x0003b605) popup_toolbar_window_cp04_ParamLimits

0x932f,	// (0x0003e009) camera2_autofocus_pane_g2_ParamLimits

0x932f,	// (0x0003e009) camera2_autofocus_pane_g2

0x933b,	// (0x0003e015) camera2_autofocus_pane_g3_ParamLimits

0x933b,	// (0x0003e015) camera2_autofocus_pane_g3

0x9347,	// (0x0003e021) camera2_autofocus_pane_g4_ParamLimits

0x9347,	// (0x0003e021) camera2_autofocus_pane_g4

0x9353,	// (0x0003e02d) camera2_autofocus_pane_g5_ParamLimits

0x9353,	// (0x0003e02d) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x000443f7) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x000443f7) camera2_autofocus_pane_g

0x94e2,	// (0x0003e1bc) camera2_autofocus_pane_cp_g2

0x94ea,	// (0x0003e1c4) camera2_autofocus_pane_cp_g3

0x94f2,	// (0x0003e1cc) camera2_autofocus_pane_cp_g4

0x94fa,	// (0x0003e1d4) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x0004445d) camera2_autofocus_pane_cp_g

0x9b31,	// (0x0003e80b) popup_dialer_spcha_window

0x0f86,	// (0x00035c60) bg_popup_sub_pane_cp07

0xdb02,	// (0x000427dc) list_spcha_pane

0xdb0a,	// (0x000427e4) list_single_spcha_pane_ParamLimits

0xdb0a,	// (0x000427e4) list_single_spcha_pane

0x0f86,	// (0x00035c60) list_highlight_pane_cp06

0xdb1b,	// (0x000427f5) list_single_spcha_pane_t1

0x3191,	// (0x00037e6b) popup_call2_audio_out_window_g4_ParamLimits

0x3191,	// (0x00037e6b) popup_call2_audio_out_window_g4

0x0f86,	// (0x00035c60) main_imed2_pane

0x89c5,	// (0x0003d69f) popup_imed_adjust2_window

0x89d8,	// (0x0003d6b2) popup_imed_trans_window_ParamLimits

0x89d8,	// (0x0003d6b2) popup_imed_trans_window

0xd535,	// (0x0004220f) popup_blid_sat_info2_window_t1

0xd543,	// (0x0004221d) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x0004438c) popup_blid_sat_info2_window_t

0x9e36,	// (0x0003eb10) aid_size_cell_colour_35

0x9e50,	// (0x0003eb2a) aid_size_cell_colour_112

0x9e67,	// (0x0003eb41) aid_size_cell_effect

0x14b5,	// (0x0003618f) bg_tb_trans_pane_cp02

0x1e69,	// (0x00036b43) heading_imed_pane

0x9e81,	// (0x0003eb5b) listscroll_imed_pane

0xdb29,	// (0x00042803) heading_imed_pane_g1

0xdb31,	// (0x0004280b) heading_imed_pane_t1

0xdb3f,	// (0x00042819) grid_imed_colour_35_pane_ParamLimits

0xdb3f,	// (0x00042819) grid_imed_colour_35_pane

0x9e8d,	// (0x0003eb67) grid_imed_effect_pane

0xdb5a,	// (0x00042834) list_imed_aspect_pane

0x9e9d,	// (0x0003eb77) scroll_pane_cp027_ParamLimits

0x9e9d,	// (0x0003eb77) scroll_pane_cp027

0x9ea9,	// (0x0003eb83) cell_imed_effect_pane_ParamLimits

0x9ea9,	// (0x0003eb83) cell_imed_effect_pane

0xdb62,	// (0x0004283c) cell_imed_colour_pane_ParamLimits

0xdb62,	// (0x0004283c) cell_imed_colour_pane

0xdba4,	// (0x0004287e) cell_imed_colour_pane_g1_ParamLimits

0xdba4,	// (0x0004287e) cell_imed_colour_pane_g1

0xdbb5,	// (0x0004288f) hgihlgiht_grid_pane_cp016_ParamLimits

0xdbb5,	// (0x0004288f) hgihlgiht_grid_pane_cp016

0x9ec1,	// (0x0003eb9b) cell_imed_effect_pane_g1

0x9ec9,	// (0x0003eba3) grid_highlight_pane_cp017

0xdbc6,	// (0x000428a0) list_imed_single_pane_ParamLimits

0xdbc6,	// (0x000428a0) list_imed_single_pane

0x0f86,	// (0x00035c60) list_highlight_pane_cp07

0xdbdd,	// (0x000428b7) list_imed_aspect_pane_comp1_t1

0x3750,	// (0x0003842a) bg_tb_trans_pane_cp05

0xdbff,	// (0x000428d9) popup_imed_adjust2_window_g1

0xdc26,	// (0x00042900) popup_imed_adjust2_window_t1

0xdc3e,	// (0x00042918) slider_imed_adjust_pane

0xdc52,	// (0x0004292c) slider_imed_adjust_pane_g1

0xdc62,	// (0x0004293c) slider_imed_adjust_pane_g2

0xdc72,	// (0x0004294c) slider_imed_adjust_pane_g3

0xdc83,	// (0x0004295d) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x000444cb) slider_imed_adjust_pane_g

0x9ed2,	// (0x0003ebac) aid_size_cell_clipart2

0x9ede,	// (0x0003ebb8) grid_imed_clipart_pane

0xdc94,	// (0x0004296e) scroll_pane_cp031

0x9ee8,	// (0x0003ebc2) cell_imed_clipart_pane_ParamLimits

0x9ee8,	// (0x0003ebc2) cell_imed_clipart_pane

0x9f0f,	// (0x0003ebe9) cell_imed_clipart_pane_g1

0x0f86,	// (0x00035c60) grid_highlight_pane_cp014

0x9c5a,	// (0x0003e934) main_clock2_pane_g1_ParamLimits

0x9c5a,	// (0x0003e934) main_clock2_pane_g1

0x9d33,	// (0x0003ea0d) aid_call2_pane_cp10

0x9d45,	// (0x0003ea1f) aid_call_pane_cp10

0x223a,	// (0x00036f14) popup_clock_analogue_window_cp10_g1

0x223a,	// (0x00036f14) popup_clock_analogue_window_cp10_g2

0x9d57,	// (0x0003ea31) popup_clock_analogue_window_cp10_g3

0x9d57,	// (0x0003ea31) popup_clock_analogue_window_cp10_g4

0x223a,	// (0x00036f14) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x000444b9) popup_clock_analogue_window_cp10_g

0x9d6d,	// (0x0003ea47) popup_clock_analogue_window_cp10_t1

0x9d9e,	// (0x0003ea78) clock_digital_number_pane_cp10_ParamLimits

0x9d9e,	// (0x0003ea78) clock_digital_number_pane_cp10

0x9db6,	// (0x0003ea90) clock_digital_number_pane_cp11_ParamLimits

0x9db6,	// (0x0003ea90) clock_digital_number_pane_cp11

0x9dce,	// (0x0003eaa8) clock_digital_number_pane_cp12_ParamLimits

0x9dce,	// (0x0003eaa8) clock_digital_number_pane_cp12

0x9de6,	// (0x0003eac0) clock_digital_number_pane_cp13_ParamLimits

0x9de6,	// (0x0003eac0) clock_digital_number_pane_cp13

0x9dfe,	// (0x0003ead8) clock_digital_separator_pane_cp10_ParamLimits

0x9dfe,	// (0x0003ead8) clock_digital_separator_pane_cp10

0x9e16,	// (0x0003eaf0) popup_clock_digital_window_cp02_t1_ParamLimits

0x9e16,	// (0x0003eaf0) popup_clock_digital_window_cp02_t1

0x1602,	// (0x000362dc) clock_digital_number_pane_cp10_g1

0x1602,	// (0x000362dc) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x000444d4) clock_digital_number_pane_cp10_g

0x1602,	// (0x000362dc) clock_digital_separator_pane_cp10_g1

0x1602,	// (0x000362dc) clock_digital_separator_pane_g2_cp10

0x22d5,	// (0x00036faf) navi_pane_vded_g4

0x22de,	// (0x00036fb8) navi_pane_vded_g5

0x22e7,	// (0x00036fc1) navi_pane_vded_t1

0x0f86,	// (0x00035c60) main_vded_pane

0x9f18,	// (0x0003ebf2) main_vded_pane_g1

0x9f24,	// (0x0003ebfe) main_vded_pane_g2

0x9f2e,	// (0x0003ec08) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x000444d9) main_vded_pane_g

0x9f38,	// (0x0003ec12) main_vded_pane_t1

0x9f46,	// (0x0003ec20) main_vded_pane_t2

0x0001,

0xf806,	// (0x000444e0) main_vded_pane_t

0x9f54,	// (0x0003ec2e) vded_slider_pane

0x9f5e,	// (0x0003ec38) vded_video_pane

0xdc9c,	// (0x00042976) vded_video_pane_g1

0x9f68,	// (0x0003ec42) vded_video_pane_g2

0xd6f9,	// (0x000423d3) vded_video_pane_g3

0x0002,

0xf80b,	// (0x000444e5) vded_video_pane_g

0xdca6,	// (0x00042980) vded_slider_pane_g1

0xd44a,	// (0x00042124) vded_slider_pane_g2

0xdcaf,	// (0x00042989) vded_slider_pane_g3

0xdcb8,	// (0x00042992) vded_slider_pane_g4

0xdcc1,	// (0x0004299b) vded_slider_pane_g5

0x0004,

0xf812,	// (0x000444ec) vded_slider_pane_g

0x9a31,	// (0x0003e70b) mup3_rocker_pane_ParamLimits

0x9a31,	// (0x0003e70b) mup3_rocker_pane

0x9f71,	// (0x0003ec4b) mup3_control_keys_pane_g1

0x9f79,	// (0x0003ec53) mup3_control_keys_pane_g2

0x9f81,	// (0x0003ec5b) mup3_control_keys_pane_g3

0x9f89,	// (0x0003ec63) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x000444f7) mup3_control_keys_pane_g

0x5b0d,	// (0x0003a7e7) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5b0d,	// (0x0003a7e7) popup_toolbar2_fixed_window_cp01

0x9a4b,	// (0x0003e725) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9a4b,	// (0x0003e725) popup_toolbar2_fixed_window_cp02

0x2ad0,	// (0x000377aa) popup_call2_audio_second_window_t4_ParamLimits

0x2ad0,	// (0x000377aa) popup_call2_audio_second_window_t4

0x2ffe,	// (0x00037cd8) popup_call2_audio_first_window_t6_ParamLimits

0x2ffe,	// (0x00037cd8) popup_call2_audio_first_window_t6

0x3294,	// (0x00037f6e) popup_call2_audio_out_window_t6_ParamLimits

0x3294,	// (0x00037f6e) popup_call2_audio_out_window_t6

0x0f86,	// (0x00035c60) main_vitu_pane

0x9f99,	// (0x0003ec73) aid_size_cell_itu_ParamLimits

0x9f99,	// (0x0003ec73) aid_size_cell_itu

0x5b35,	// (0x0003a80f) bg_popup_window_pane_cp08_ParamLimits

0x5b35,	// (0x0003a80f) bg_popup_window_pane_cp08

0x9fa7,	// (0x0003ec81) field_vitu_entry_pane_ParamLimits

0x9fa7,	// (0x0003ec81) field_vitu_entry_pane

0x9fb6,	// (0x0003ec90) grid_vitu_function_pane_ParamLimits

0x9fb6,	// (0x0003ec90) grid_vitu_function_pane

0x9fc6,	// (0x0003eca0) grid_vitu_itu_pane_ParamLimits

0x9fc6,	// (0x0003eca0) grid_vitu_itu_pane

0x9fd6,	// (0x0003ecb0) cell_vitu_itu_pane_ParamLimits

0x9fd6,	// (0x0003ecb0) cell_vitu_itu_pane

0x9feb,	// (0x0003ecc5) cell_vitu_function_pane_ParamLimits

0x9feb,	// (0x0003ecc5) cell_vitu_function_pane

0x14b5,	// (0x0003618f) bg_popup_sub_pane_cp08_ParamLimits

0x14b5,	// (0x0003618f) bg_popup_sub_pane_cp08

0x9fff,	// (0x0003ecd9) field_vitu_entry_pane_t1_ParamLimits

0x9fff,	// (0x0003ecd9) field_vitu_entry_pane_t1

0xdce2,	// (0x000429bc) field_vitu_entry_pane_t2_ParamLimits

0xdce2,	// (0x000429bc) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x00044505) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x00044505) field_vitu_entry_pane_t

0xdcff,	// (0x000429d9) bg_button_pane_cp05_ParamLimits

0xdcff,	// (0x000429d9) bg_button_pane_cp05

0xa01d,	// (0x0003ecf7) cell_vitu_itu_pane_g1

0xa035,	// (0x0003ed0f) cell_vitu_itu_pane_t1_ParamLimits

0xa035,	// (0x0003ed0f) cell_vitu_itu_pane_t1

0xa047,	// (0x0003ed21) cell_vitu_itu_pane_t2_ParamLimits

0xa047,	// (0x0003ed21) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x0004450a) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x0004450a) cell_vitu_itu_pane_t

0xdd0d,	// (0x000429e7) bg_button_pane_cp07

0xa07c,	// (0x0003ed56) cell_vitu_function_pane_g1

0x5dac,	// (0x0003aa86) main_calc_pane_g1

0x58cc,	// (0x0003a5a6) aid_visual_content_pane

0x0f86,	// (0x00035c60) main_vradio_pane

0xa085,	// (0x0003ed5f) main_vradio_pane_g1_ParamLimits

0xa085,	// (0x0003ed5f) main_vradio_pane_g1

0xdd17,	// (0x000429f1) main_vradio_pane_g2_ParamLimits

0xdd17,	// (0x000429f1) main_vradio_pane_g2

0x0001,

0xf837,	// (0x00044511) main_vradio_pane_g_ParamLimits

0xf837,	// (0x00044511) main_vradio_pane_g

0xa095,	// (0x0003ed6f) main_vradio_pane_t1_ParamLimits

0xa095,	// (0x0003ed6f) main_vradio_pane_t1

0xa0a7,	// (0x0003ed81) main_vradio_pane_t2_ParamLimits

0xa0a7,	// (0x0003ed81) main_vradio_pane_t2

0xdd24,	// (0x000429fe) main_vradio_pane_t3_ParamLimits

0xdd24,	// (0x000429fe) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x00044516) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x00044516) main_vradio_pane_t

0xa0b9,	// (0x0003ed93) vradio_rocker_control_pane_ParamLimits

0xa0b9,	// (0x0003ed93) vradio_rocker_control_pane

0xa0c5,	// (0x0003ed9f) vradio_station_info_pane_ParamLimits

0xa0c5,	// (0x0003ed9f) vradio_station_info_pane

0xdd38,	// (0x00042a12) vradio_frequency_info_pane_ParamLimits

0xdd38,	// (0x00042a12) vradio_frequency_info_pane

0xd6f9,	// (0x000423d3) vradio_station_info_pane_g1

0xdd47,	// (0x00042a21) vradio_station_info_pane_t1_ParamLimits

0xdd47,	// (0x00042a21) vradio_station_info_pane_t1

0xdd69,	// (0x00042a43) vradio_station_info_pane_t2_ParamLimits

0xdd69,	// (0x00042a43) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x0004451d) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x0004451d) vradio_station_info_pane_t

0xdd7b,	// (0x00042a55) vradio_tuning_pane

0xdd83,	// (0x00042a5d) vradio_rocker_control_pane_g1

0xdd8b,	// (0x00042a65) vradio_rocker_control_pane_g2

0xdd93,	// (0x00042a6d) vradio_rocker_control_pane_g3

0xdd9b,	// (0x00042a75) vradio_rocker_control_pane_g4

0xdda3,	// (0x00042a7d) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x00044522) vradio_rocker_control_pane_g

0xa0d4,	// (0x0003edae) vradio_frequency_info_pane_g1

0xddab,	// (0x00042a85) vradio_frequency_info_pane_t1_ParamLimits

0xddab,	// (0x00042a85) vradio_frequency_info_pane_t1

0xa0de,	// (0x0003edb8) vradio_tuning_pane_g1

0xa0e7,	// (0x0003edc1) vradio_tuning_pane_t1

0x5915,	// (0x0003a5ef) area_side_right_pane_ParamLimits

0x5915,	// (0x0003a5ef) area_side_right_pane

0x3717,	// (0x000383f1) status_small_pane_g1

0x371f,	// (0x000383f9) status_small_pane_g2

0x3728,	// (0x00038402) status_small_pane_g3

0x3731,	// (0x0003840b) status_small_pane_g4

0x0003,

0xf608,	// (0x000442e2) status_small_pane_g

0x373a,	// (0x00038414) status_small_pane_t1

0x0f86,	// (0x00035c60) main_video3_pane

0xddbf,	// (0x00042a99) cams_zoom_vslider_pane

0xddc7,	// (0x00042aa1) image3_wide_pane_ParamLimits

0xddc7,	// (0x00042aa1) image3_wide_pane

0xdde1,	// (0x00042abb) image3_wide_small_pane

0xdded,	// (0x00042ac7) main_video3_pane_g1_ParamLimits

0xdded,	// (0x00042ac7) main_video3_pane_g1

0xde09,	// (0x00042ae3) main_video3_pane_g2_ParamLimits

0xde09,	// (0x00042ae3) main_video3_pane_g2

0x0001,

0xf853,	// (0x0004452d) main_video3_pane_g_ParamLimits

0xf853,	// (0x0004452d) main_video3_pane_g

0xde25,	// (0x00042aff) main_video3_pane_t1_ParamLimits

0xde25,	// (0x00042aff) main_video3_pane_t1

0xde50,	// (0x00042b2a) main_video3_pane_t2_ParamLimits

0xde50,	// (0x00042b2a) main_video3_pane_t2

0xde7b,	// (0x00042b55) main_video3_pane_t3_ParamLimits

0xde7b,	// (0x00042b55) main_video3_pane_t3

0x0002,

0xf858,	// (0x00044532) main_video3_pane_t_ParamLimits

0xf858,	// (0x00044532) main_video3_pane_t

0xdea8,	// (0x00042b82) cams_zoom_vslider_pane_g1

0xdeb1,	// (0x00042b8b) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x00044539) cams_zoom_vslider_pane_g

0xdeb9,	// (0x00042b93) small_slider_vertical_pane

0xd6f9,	// (0x000423d3) small_slider_vertical_pane_g1

0xd6f9,	// (0x000423d3) small_slider_vertical_pane_g2

0xdec1,	// (0x00042b9b) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x0004453e) small_slider_vertical_pane_g

0x0f86,	// (0x00035c60) main_hwr_training_pane

0xdeca,	// (0x00042ba4) hwr_training_instruct_pane_ParamLimits

0xdeca,	// (0x00042ba4) hwr_training_instruct_pane

0xa0f6,	// (0x0003edd0) hwr_training_navi_pane_ParamLimits

0xa0f6,	// (0x0003edd0) hwr_training_navi_pane

0xa110,	// (0x0003edea) hwr_training_write_pane_ParamLimits

0xa110,	// (0x0003edea) hwr_training_write_pane

0x0f86,	// (0x00035c60) bg_frame_shadow_pane

0xdf01,	// (0x00042bdb) hwr_training_write_pane_g1

0xdf09,	// (0x00042be3) hwr_training_write_pane_g2

0xdf11,	// (0x00042beb) hwr_training_write_pane_g3

0xdf19,	// (0x00042bf3) hwr_training_write_pane_g4

0xdf21,	// (0x00042bfb) hwr_training_write_pane_g5

0xdf29,	// (0x00042c03) hwr_training_write_pane_g6

0xdf31,	// (0x00042c0b) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x00044545) hwr_training_write_pane_g

0xa148,	// (0x0003ee22) hwr_training_navi_pane_g1_ParamLimits

0xa148,	// (0x0003ee22) hwr_training_navi_pane_g1

0xa15a,	// (0x0003ee34) hwr_training_navi_pane_g2_ParamLimits

0xa15a,	// (0x0003ee34) hwr_training_navi_pane_g2

0xa16c,	// (0x0003ee46) hwr_training_navi_pane_g3_ParamLimits

0xa16c,	// (0x0003ee46) hwr_training_navi_pane_g3

0xa17c,	// (0x0003ee56) hwr_training_navi_pane_g4_ParamLimits

0xa17c,	// (0x0003ee56) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x00044554) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x00044554) hwr_training_navi_pane_g

0xa196,	// (0x0003ee70) hwr_training_navi_pane_t1

0xa1a4,	// (0x0003ee7e) list_single_hwr_training_instruct_pane_ParamLimits

0xa1a4,	// (0x0003ee7e) list_single_hwr_training_instruct_pane

0xdf39,	// (0x00042c13) list_single_hwr_training_instruct_pane_t1

0xd639,	// (0x00042313) bg_frame_shadow_pane_g1

0xdf48,	// (0x00042c22) bg_frame_shadow_pane_g2

0xdf50,	// (0x00042c2a) bg_frame_shadow_pane_g3

0xdf58,	// (0x00042c32) bg_frame_shadow_pane_g4

0xdf60,	// (0x00042c3a) bg_frame_shadow_pane_g5

0xdf68,	// (0x00042c42) bg_frame_shadow_pane_g6

0xdf70,	// (0x00042c4a) bg_frame_shadow_pane_g7

0x17ec,	// (0x000364c6) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x0004455f) bg_frame_shadow_pane_g

0x0f86,	// (0x00035c60) main_video_tele_dialer_pane

0xa1da,	// (0x0003eeb4) aid_size_cell_video_keypad_ParamLimits

0xa1da,	// (0x0003eeb4) aid_size_cell_video_keypad

0xa1ea,	// (0x0003eec4) grid_video_dialer_keypad_pane_ParamLimits

0xa1ea,	// (0x0003eec4) grid_video_dialer_keypad_pane

0xa21c,	// (0x0003eef6) video_down_pane_cp_ParamLimits

0xa21c,	// (0x0003eef6) video_down_pane_cp

0xa244,	// (0x0003ef1e) cell_video_dialer_keypad_pane_ParamLimits

0xa244,	// (0x0003ef1e) cell_video_dialer_keypad_pane

0xdf78,	// (0x00042c52) bg_button_pane_cp08_ParamLimits

0xdf78,	// (0x00042c52) bg_button_pane_cp08

0xa259,	// (0x0003ef33) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa259,	// (0x0003ef33) cell_video_dialer_keypad_pane_g1

0x9a25,	// (0x0003e6ff) mup3_rocker2_pane_ParamLimits

0x9a25,	// (0x0003e6ff) mup3_rocker2_pane

0xd6f9,	// (0x000423d3) mup3_rocker2_pane_g1

0x8939,	// (0x0003d613) main_dialer2_pane

0x0f86,	// (0x00035c60) main_mp4_pane

0xa298,	// (0x0003ef72) main_mp4_pane_g1_ParamLimits

0xa298,	// (0x0003ef72) main_mp4_pane_g1

0xa2a6,	// (0x0003ef80) main_mp4_pane_g2_ParamLimits

0xa2a6,	// (0x0003ef80) main_mp4_pane_g2

0xa2b4,	// (0x0003ef8e) main_mp4_pane_g3_ParamLimits

0xa2b4,	// (0x0003ef8e) main_mp4_pane_g3

0xa2f9,	// (0x0003efd3) main_mp4_pane_g4_ParamLimits

0xa2f9,	// (0x0003efd3) main_mp4_pane_g4

0xa321,	// (0x0003effb) main_mp4_pane_g5_ParamLimits

0xa321,	// (0x0003effb) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x0004457f) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x0004457f) main_mp4_pane_g

0xa371,	// (0x0003f04b) main_mp4_pane_t1_ParamLimits

0xa371,	// (0x0003f04b) main_mp4_pane_t1

0xa3cd,	// (0x0003f0a7) main_mp4_pane_t2_ParamLimits

0xa3cd,	// (0x0003f0a7) main_mp4_pane_t2

0xdf84,	// (0x00042c5e) main_mp4_pane_t3_ParamLimits

0xdf84,	// (0x00042c5e) main_mp4_pane_t3

0xa41f,	// (0x0003f0f9) main_mp4_pane_t4_ParamLimits

0xa41f,	// (0x0003f0f9) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x0004458c) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x0004458c) main_mp4_pane_t

0xa463,	// (0x0003f13d) mp4_progress_pane_ParamLimits

0xa463,	// (0x0003f13d) mp4_progress_pane

0xa4ad,	// (0x0003f187) mp4_rocker_pane_ParamLimits

0xa4ad,	// (0x0003f187) mp4_rocker_pane

0xdfac,	// (0x00042c86) mp4_progress_pane_t1

0xdfc5,	// (0x00042c9f) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x00044595) mp4_progress_pane_t

0xdfde,	// (0x00042cb8) mup_progress_pane_cp04

0xd6f9,	// (0x000423d3) mp4_rocker_pane_g1

0xa4cd,	// (0x0003f1a7) aid_cell_size_keypad2_ParamLimits

0xa4cd,	// (0x0003f1a7) aid_cell_size_keypad2

0xa4dd,	// (0x0003f1b7) dialer2_ne_pane_ParamLimits

0xa4dd,	// (0x0003f1b7) dialer2_ne_pane

0xa4eb,	// (0x0003f1c5) grid_dialer2_keypad_pane_ParamLimits

0xa4eb,	// (0x0003f1c5) grid_dialer2_keypad_pane

0xdfea,	// (0x00042cc4) bg_popup_call_pane_cp07_ParamLimits

0xdfea,	// (0x00042cc4) bg_popup_call_pane_cp07

0xa4fb,	// (0x0003f1d5) dialer2_ne_pane_t1_ParamLimits

0xa4fb,	// (0x0003f1d5) dialer2_ne_pane_t1

0xa520,	// (0x0003f1fa) cell_dialer2_keypad_pane_ParamLimits

0xa520,	// (0x0003f1fa) cell_dialer2_keypad_pane

0xe00a,	// (0x00042ce4) bg_button_pane_pane_cp04_ParamLimits

0xe00a,	// (0x00042ce4) bg_button_pane_pane_cp04

0xa537,	// (0x0003f211) cell_dialer2_keypad_pane_g1_ParamLimits

0xa537,	// (0x0003f211) cell_dialer2_keypad_pane_g1

0x67ed,	// (0x0003b4c7) aid_placing_vt_set_content_ParamLimits

0x67ed,	// (0x0003b4c7) aid_placing_vt_set_content

0x6819,	// (0x0003b4f3) aid_placing_vt_set_title_ParamLimits

0x6819,	// (0x0003b4f3) aid_placing_vt_set_title

0x0f86,	// (0x00035c60) main_image3_pane

0xa5d1,	// (0x0003f2ab) area_side_right_pane_cp01_ParamLimits

0xa5d1,	// (0x0003f2ab) area_side_right_pane_cp01

0xe016,	// (0x00042cf0) main_image3_pane_g1_ParamLimits

0xe016,	// (0x00042cf0) main_image3_pane_g1

0xa5fe,	// (0x0003f2d8) main_image3_pane_g2_ParamLimits

0xa5fe,	// (0x0003f2d8) main_image3_pane_g2

0xa617,	// (0x0003f2f1) main_image3_pane_g3_ParamLimits

0xa617,	// (0x0003f2f1) main_image3_pane_g3

0xa630,	// (0x0003f30a) main_image3_pane_g4_ParamLimits

0xa630,	// (0x0003f30a) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x000445a4) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x000445a4) main_image3_pane_g

0xa649,	// (0x0003f323) main_image3_pane_t1_ParamLimits

0xa649,	// (0x0003f323) main_image3_pane_t1

0xa66e,	// (0x0003f348) main_image3_pane_t2_ParamLimits

0xa66e,	// (0x0003f348) main_image3_pane_t2

0xa68d,	// (0x0003f367) main_image3_pane_t3_ParamLimits

0xa68d,	// (0x0003f367) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x000445ad) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x000445ad) main_image3_pane_t

0x5b35,	// (0x0003a80f) grid_sctrl_middle_pane_cp01_ParamLimits

0x5b35,	// (0x0003a80f) grid_sctrl_middle_pane_cp01

0xa6ee,	// (0x0003f3c8) cell_sctrl_middle_pane_cp01_ParamLimits

0xa6ee,	// (0x0003f3c8) cell_sctrl_middle_pane_cp01

0xa6ff,	// (0x0003f3d9) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa6ff,	// (0x0003f3d9) cell_sctrl_middle_pane_cp01_g1

0x0f86,	// (0x00035c60) main_call4_pane

0xa70c,	// (0x0003f3e6) aid_size_button_call4_ParamLimits

0xa70c,	// (0x0003f3e6) aid_size_button_call4

0xa73c,	// (0x0003f416) call4_windows_pane_ParamLimits

0xa73c,	// (0x0003f416) call4_windows_pane

0xa756,	// (0x0003f430) grid_call4_button_pane_ParamLimits

0xa756,	// (0x0003f430) grid_call4_button_pane

0xe024,	// (0x00042cfe) call4_windows_conf_pane

0xe039,	// (0x00042d13) popup_call4_audio_first_window_ParamLimits

0xe039,	// (0x00042d13) popup_call4_audio_first_window

0xe085,	// (0x00042d5f) popup_call4_audio_second_window_ParamLimits

0xe085,	// (0x00042d5f) popup_call4_audio_second_window

0xe099,	// (0x00042d73) popup_call4_audio_wait_window_ParamLimits

0xe099,	// (0x00042d73) popup_call4_audio_wait_window

0xa77a,	// (0x0003f454) cell_call4_button_pane_ParamLimits

0xa77a,	// (0x0003f454) cell_call4_button_pane

0xa79f,	// (0x0003f479) bg_button_pane_cp09_ParamLimits

0xa79f,	// (0x0003f479) bg_button_pane_cp09

0xa7ab,	// (0x0003f485) cell_call4_button_pane_g1_ParamLimits

0xa7ab,	// (0x0003f485) cell_call4_button_pane_g1

0xa7b8,	// (0x0003f492) cell_call4_button_pane_t1_ParamLimits

0xa7b8,	// (0x0003f492) cell_call4_button_pane_t1

0xe0e1,	// (0x00042dbb) popup_call4_audio_conf_window_ParamLimits

0xe0e1,	// (0x00042dbb) popup_call4_audio_conf_window

0x9a58,	// (0x0003e732) mup3_progress_pane_t1_ParamLimits

0x9a77,	// (0x0003e751) mup3_progress_pane_t2_ParamLimits

0xd9db,	// (0x000426b5) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x00044486) mup3_progress_pane_t_ParamLimits

0xd9f8,	// (0x000426d2) mup_progress_pane_cp03_ParamLimits

0x9f91,	// (0x0003ec6b) mup3_control_keys_pane_g4_copy1

0xa491,	// (0x0003f16b) mp4_rocker2_pane_ParamLimits

0xa491,	// (0x0003f16b) mp4_rocker2_pane

0xe0f5,	// (0x00042dcf) mp4_rocker2_pane_g1

0xe0fd,	// (0x00042dd7) mp4_rocker2_pane_g2

0xa7ca,	// (0x0003f4a4) mp4_rocker2_pane_g3

0xa7d2,	// (0x0003f4ac) mp4_rocker2_pane_g4

0xa7da,	// (0x0003f4b4) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x000445b6) mp4_rocker2_pane_g

0x0f86,	// (0x00035c60) main_camera4_pane

0x0f86,	// (0x00035c60) main_video4_pane

0xa1f8,	// (0x0003eed2) main_video_tele_dialer_pane_t1_ParamLimits

0xa1f8,	// (0x0003eed2) main_video_tele_dialer_pane_t1

0xa20a,	// (0x0003eee4) main_video_tele_dialer_pane_t2_ParamLimits

0xa20a,	// (0x0003eee4) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x00044570) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x00044570) main_video_tele_dialer_pane_t

0xa7fa,	// (0x0003f4d4) cam4_autofocus_pane_ParamLimits

0xa7fa,	// (0x0003f4d4) cam4_autofocus_pane

0xa814,	// (0x0003f4ee) cam4_image_uncrop_pane_ParamLimits

0xa814,	// (0x0003f4ee) cam4_image_uncrop_pane

0xa82b,	// (0x0003f505) cam4_indicators_pane_ParamLimits

0xa82b,	// (0x0003f505) cam4_indicators_pane

0xa847,	// (0x0003f521) main_camera4_pane_g1_ParamLimits

0xa847,	// (0x0003f521) main_camera4_pane_g1

0xa853,	// (0x0003f52d) main_camera4_pane_g2_ParamLimits

0xa853,	// (0x0003f52d) main_camera4_pane_g2

0xa853,	// (0x0003f52d) main_camera4_pane_g3_ParamLimits

0xa853,	// (0x0003f52d) main_camera4_pane_g3

0xa85f,	// (0x0003f539) main_camera4_pane_g4_ParamLimits

0xa85f,	// (0x0003f539) main_camera4_pane_g4

0xa86b,	// (0x0003f545) main_camera4_pane_g5_ParamLimits

0xa86b,	// (0x0003f545) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x000445c1) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x000445c1) main_camera4_pane_g

0xa885,	// (0x0003f55f) main_camera4_pane_t1_ParamLimits

0xa885,	// (0x0003f55f) main_camera4_pane_t1

0xd960,	// (0x0004263a) bg_tb_trans_pane_cp06

0xa8d5,	// (0x0003f5af) cam4_indicators_pane_g1

0xa8e6,	// (0x0003f5c0) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x000445dc) cam4_indicators_pane_g

0xa904,	// (0x0003f5de) cam4_indicators_pane_t1

0xa92e,	// (0x0003f608) main_video4_pane_g1_ParamLimits

0xa92e,	// (0x0003f608) main_video4_pane_g1

0xa93a,	// (0x0003f614) main_video4_pane_g2_ParamLimits

0xa93a,	// (0x0003f614) main_video4_pane_g2

0xa946,	// (0x0003f620) main_video4_pane_g3_ParamLimits

0xa946,	// (0x0003f620) main_video4_pane_g3

0xa952,	// (0x0003f62c) main_video4_pane_g4_ParamLimits

0xa952,	// (0x0003f62c) main_video4_pane_g4

0x0004,

0xf909,	// (0x000445e3) main_video4_pane_g_ParamLimits

0xf909,	// (0x000445e3) main_video4_pane_g

0xa972,	// (0x0003f64c) vid4_indicators_pane_ParamLimits

0xa972,	// (0x0003f64c) vid4_indicators_pane

0xa98f,	// (0x0003f669) video4_image_uncrop_cif_pane_ParamLimits

0xa98f,	// (0x0003f669) video4_image_uncrop_cif_pane

0xa99e,	// (0x0003f678) video4_image_uncrop_nhd_pane_ParamLimits

0xa99e,	// (0x0003f678) video4_image_uncrop_nhd_pane

0xa814,	// (0x0003f4ee) video4_image_uncrop_vga_pane_ParamLimits

0xa814,	// (0x0003f4ee) video4_image_uncrop_vga_pane

0x14b5,	// (0x0003618f) bg_tb_trans_pane_cp07

0xa9b3,	// (0x0003f68d) vid4_indicators_pane_g1

0xa9c7,	// (0x0003f6a1) vid4_indicators_pane_g2

0xa9db,	// (0x0003f6b5) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x000445ee) vid4_indicators_pane_g

0xaa08,	// (0x0003f6e2) vid4_indicators_pane_t1

0xaa1f,	// (0x0003f6f9) cam4_autofocus_pane_g1

0xaa27,	// (0x0003f701) cam4_autofocus_pane_g2

0xaa2f,	// (0x0003f709) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x000445f9) cam4_autofocus_pane_g

0xaa37,	// (0x0003f711) cam4_autofocus_pane_g3_copy1

0xa228,	// (0x0003ef02) video_down_pane_cp_t1

0xa236,	// (0x0003ef10) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x00044575) video_down_pane_cp_t

0x5b35,	// (0x0003a80f) popup_vitu2_window_ParamLimits

0x5b35,	// (0x0003a80f) popup_vitu2_window

0xaa3f,	// (0x0003f719) aid_size_cell2_itu2_ParamLimits

0xaa3f,	// (0x0003f719) aid_size_cell2_itu2

0xaa61,	// (0x0003f73b) aid_size_cell_itu2_ParamLimits

0xaa61,	// (0x0003f73b) aid_size_cell_itu2

0xdfea,	// (0x00042cc4) bg_popup_window_pane_cp09_ParamLimits

0xdfea,	// (0x00042cc4) bg_popup_window_pane_cp09

0xaaa5,	// (0x0003f77f) field_vitu2_entry_pane_ParamLimits

0xaaa5,	// (0x0003f77f) field_vitu2_entry_pane

0xaac5,	// (0x0003f79f) grid_vitu2_function_pane_ParamLimits

0xaac5,	// (0x0003f79f) grid_vitu2_function_pane

0xab09,	// (0x0003f7e3) grid_vitu2_itu_pane_ParamLimits

0xab09,	// (0x0003f7e3) grid_vitu2_itu_pane

0xab7f,	// (0x0003f859) cell_vitu2_itu_pane_ParamLimits

0xab7f,	// (0x0003f859) cell_vitu2_itu_pane

0xab94,	// (0x0003f86e) cell_vitu2_function_pane_ParamLimits

0xab94,	// (0x0003f86e) cell_vitu2_function_pane

0xe105,	// (0x00042ddf) bg_popup_call_pane_cp08_ParamLimits

0xe105,	// (0x00042ddf) bg_popup_call_pane_cp08

0xe11e,	// (0x00042df8) field_vitu2_entry_pane_g1

0xe12a,	// (0x00042e04) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x00044600) field_vitu2_entry_pane_g

0x49cf,	// (0x000396a9) field_vitu2_entry_pane_t1_ParamLimits

0x49cf,	// (0x000396a9) field_vitu2_entry_pane_t1

0x4a01,	// (0x000396db) field_vitu2_entry_pane_t2_ParamLimits

0x4a01,	// (0x000396db) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x00044607) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x00044607) field_vitu2_entry_pane_t

0xabd5,	// (0x0003f8af) bg_button_pane_cp010_ParamLimits

0xabd5,	// (0x0003f8af) bg_button_pane_cp010

0xabe3,	// (0x0003f8bd) cell_vitu2_itu_pane_g1

0xac01,	// (0x0003f8db) cell_vitu2_itu_pane_t1_ParamLimits

0xac01,	// (0x0003f8db) cell_vitu2_itu_pane_t1

0x4a1e,	// (0x000396f8) cell_vitu2_itu_pane_t2_ParamLimits

0x4a1e,	// (0x000396f8) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x00044611) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x00044611) cell_vitu2_itu_pane_t

0x14b5,	// (0x0003618f) bg_button_pane_cp011

0xac53,	// (0x0003f92d) cell_vitu2_function_pane_g1

0x0f86,	// (0x00035c60) main_myfav_hc_pane

0xa6cf,	// (0x0003f3a9) popup_image3_note_pane_ParamLimits

0xa6cf,	// (0x0003f3a9) popup_image3_note_pane

0xa6dd,	// (0x0003f3b7) popup_image3_tool_bar_pane_ParamLimits

0xa6dd,	// (0x0003f3b7) popup_image3_tool_bar_pane

0x4a8c,	// (0x00039766) cell_vitu2_itu_pane_t3_ParamLimits

0x4a8c,	// (0x00039766) cell_vitu2_itu_pane_t3

0x0f86,	// (0x00035c60) bg_popup_trans_pane

0xe14c,	// (0x00042e26) grid_image3_tool_bar_pane

0xe156,	// (0x00042e30) bg_popup_trans_pane_g1

0x1bf0,	// (0x000368ca) bg_popup_trans_pane_g2

0xe15e,	// (0x00042e38) bg_popup_trans_pane_g3

0xe166,	// (0x00042e40) bg_popup_trans_pane_g4

0xe16e,	// (0x00042e48) bg_popup_trans_pane_g5

0xe176,	// (0x00042e50) bg_popup_trans_pane_g6

0xe17e,	// (0x00042e58) bg_popup_trans_pane_g7

0xe186,	// (0x00042e60) bg_popup_trans_pane_g8

0x1bd0,	// (0x000368aa) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x00044618) bg_popup_trans_pane_g

0xe18e,	// (0x00042e68) cell_image3_tool_bar_pane_ParamLimits

0xe18e,	// (0x00042e68) cell_image3_tool_bar_pane

0xd6f9,	// (0x000423d3) cell_image3_tool_bar_pane_g1

0x0f86,	// (0x00035c60) bg_popup_trans_pane_cp1

0xe1a2,	// (0x00042e7c) popup_image3_note_pane_t1

0xe1b0,	// (0x00042e8a) popup_image3_note_pane_t2

0xe1be,	// (0x00042e98) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x0004462b) popup_image3_note_pane_t

0xe1cc,	// (0x00042ea6) popup_image3_note_pane_t3_copy1

0xac67,	// (0x0003f941) bg_myfav_hc_instruction_pane_ParamLimits

0xac67,	// (0x0003f941) bg_myfav_hc_instruction_pane

0xac7f,	// (0x0003f959) cell_myfav_contact_pane_ParamLimits

0xac7f,	// (0x0003f959) cell_myfav_contact_pane

0xac99,	// (0x0003f973) cell_myfav_contact_pane_cp1_ParamLimits

0xac99,	// (0x0003f973) cell_myfav_contact_pane_cp1

0xacb1,	// (0x0003f98b) cell_myfav_contact_pane_cp2_ParamLimits

0xacb1,	// (0x0003f98b) cell_myfav_contact_pane_cp2

0xacc9,	// (0x0003f9a3) cell_myfav_contact_pane_cp3_ParamLimits

0xacc9,	// (0x0003f9a3) cell_myfav_contact_pane_cp3

0xace0,	// (0x0003f9ba) cell_myfav_contact_pane_cp4_ParamLimits

0xace0,	// (0x0003f9ba) cell_myfav_contact_pane_cp4

0xacf6,	// (0x0003f9d0) cell_myfav_contact_pane_cp5_ParamLimits

0xacf6,	// (0x0003f9d0) cell_myfav_contact_pane_cp5

0xad0a,	// (0x0003f9e4) cell_myfav_contact_pane_cp6_ParamLimits

0xad0a,	// (0x0003f9e4) cell_myfav_contact_pane_cp6

0xad1e,	// (0x0003f9f8) cell_myfav_contact_pane_cp7_ParamLimits

0xad1e,	// (0x0003f9f8) cell_myfav_contact_pane_cp7

0xe1da,	// (0x00042eb4) listscroll_gen_pane_cp05

0xad36,	// (0x0003fa10) main_myfav_hc_pane_g1_ParamLimits

0xad36,	// (0x0003fa10) main_myfav_hc_pane_g1

0xad4e,	// (0x0003fa28) main_myfav_hc_pane_g2_ParamLimits

0xad4e,	// (0x0003fa28) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x00044632) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x00044632) main_myfav_hc_pane_g

0xad7e,	// (0x0003fa58) main_myfav_hc_pane_t1_ParamLimits

0xad7e,	// (0x0003fa58) main_myfav_hc_pane_t1

0xe1e3,	// (0x00042ebd) main_myfav_hc_pane_t2_ParamLimits

0xe1e3,	// (0x00042ebd) main_myfav_hc_pane_t2

0xe1f5,	// (0x00042ecf) main_myfav_hc_pane_t3_ParamLimits

0xe1f5,	// (0x00042ecf) main_myfav_hc_pane_t3

0xad95,	// (0x0003fa6f) main_myfav_hc_pane_t4_ParamLimits

0xad95,	// (0x0003fa6f) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x00044639) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x00044639) main_myfav_hc_pane_t

0xd6f9,	// (0x000423d3) bg_myfav_hc_instruction_pane_g1

0xe207,	// (0x00042ee1) cell_myfav_contact_pane_g1_ParamLimits

0xe207,	// (0x00042ee1) cell_myfav_contact_pane_g1

0xe207,	// (0x00042ee1) cell_myfav_contact_pane_g2_ParamLimits

0xe207,	// (0x00042ee1) cell_myfav_contact_pane_g2

0xe213,	// (0x00042eed) cell_myfav_contact_pane_g3_ParamLimits

0xe213,	// (0x00042eed) cell_myfav_contact_pane_g3

0xd9c5,	// (0x0004269f) cell_myfav_contact_pane_g4_ParamLimits

0xd9c5,	// (0x0004269f) cell_myfav_contact_pane_g4

0xe220,	// (0x00042efa) cell_myfav_contact_pane_g5_ParamLimits

0xe220,	// (0x00042efa) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x00044644) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x00044644) cell_myfav_contact_pane_g

0xad66,	// (0x0003fa40) main_myfav_hc_pane_g3_ParamLimits

0xad66,	// (0x0003fa40) main_myfav_hc_pane_g3

0x5a48,	// (0x0003a722) popup_adpt_find_window

0xadbf,	// (0x0003fa99) afind_page_pane_ParamLimits

0xadbf,	// (0x0003fa99) afind_page_pane

0xadcc,	// (0x0003faa6) aid_size_cell_afind_ParamLimits

0xadcc,	// (0x0003faa6) aid_size_cell_afind

0xade6,	// (0x0003fac0) bg_popup_sub_pane_cp09_ParamLimits

0xade6,	// (0x0003fac0) bg_popup_sub_pane_cp09

0xadf3,	// (0x0003facd) find_pane_cp01_ParamLimits

0xadf3,	// (0x0003facd) find_pane_cp01

0xe22c,	// (0x00042f06) grid_afind_control_pane_ParamLimits

0xe22c,	// (0x00042f06) grid_afind_control_pane

0xae00,	// (0x0003fada) grid_afind_pane_ParamLimits

0xae00,	// (0x0003fada) grid_afind_pane

0xae1c,	// (0x0003faf6) cell_afind_pane_ParamLimits

0xae1c,	// (0x0003faf6) cell_afind_pane

0xd6f9,	// (0x000423d3) afind_page_pane_g1

0xae64,	// (0x0003fb3e) afind_page_pane_g2

0xae6d,	// (0x0003fb47) afind_page_pane_g3

0x0002,

0xf975,	// (0x0004464f) afind_page_pane_g

0xae76,	// (0x0003fb50) afind_page_pane_t1

0xe240,	// (0x00042f1a) cell_afind_grid_control_pane_ParamLimits

0xe240,	// (0x00042f1a) cell_afind_grid_control_pane

0xe00a,	// (0x00042ce4) bg_button_pane_cp69_ParamLimits

0xe00a,	// (0x00042ce4) bg_button_pane_cp69

0xae8d,	// (0x0003fb67) cell_afind_pane_g1_ParamLimits

0xae8d,	// (0x0003fb67) cell_afind_pane_g1

0xae9a,	// (0x0003fb74) cell_afind_pane_t1_ParamLimits

0xae9a,	// (0x0003fb74) cell_afind_pane_t1

0x192c,	// (0x00036606) bg_button_pane_cp72

0xe24f,	// (0x00042f29) cell_afind_grid_control_pane_g1

0x84b4,	// (0x0003d18e) aid_image_placing_area_ParamLimits

0x84b4,	// (0x0003d18e) aid_image_placing_area

0xdcca,	// (0x000429a4) field_vitu_entry_pane_g1_ParamLimits

0xdcca,	// (0x000429a4) field_vitu_entry_pane_g1

0xdcd6,	// (0x000429b0) field_vitu_entry_pane_g2_ParamLimits

0xdcd6,	// (0x000429b0) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x00044500) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x00044500) field_vitu_entry_pane_g

0xa01d,	// (0x0003ecf7) cell_vitu_itu_pane_g1_ParamLimits

0xa05f,	// (0x0003ed39) cell_vitu_itu_pane_t3_ParamLimits

0xa05f,	// (0x0003ed39) cell_vitu_itu_pane_t3

0xdfac,	// (0x00042c86) mp4_progress_pane_t1_ParamLimits

0xdfc5,	// (0x00042c9f) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x00044595) mp4_progress_pane_t_ParamLimits

0xdfde,	// (0x00042cb8) mup_progress_pane_cp04_ParamLimits

0xada9,	// (0x0003fa83) main_myfav_hc_pane_t5_ParamLimits

0xada9,	// (0x0003fa83) main_myfav_hc_pane_t5

0x58d8,	// (0x0003a5b2) aid_zoom_text_primary

0x5a48,	// (0x0003a722) popup_adpt_find_window_ParamLimits

0x14b5,	// (0x0003618f) main_cam_set_pane

0xa839,	// (0x0003f513) cam4_zoom_pane_ParamLimits

0xa839,	// (0x0003f513) cam4_zoom_pane

0xaeac,	// (0x0003fb86) main_cam_set_pane_g1_ParamLimits

0xaeac,	// (0x0003fb86) main_cam_set_pane_g1

0xaeba,	// (0x0003fb94) main_cam_set_pane_g2_ParamLimits

0xaeba,	// (0x0003fb94) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x00044656) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x00044656) main_cam_set_pane_g

0xaec6,	// (0x0003fba0) main_cam_set_pane_t1_ParamLimits

0xaec6,	// (0x0003fba0) main_cam_set_pane_t1

0xaee2,	// (0x0003fbbc) main_cset_listscroll_pane_ParamLimits

0xaee2,	// (0x0003fbbc) main_cset_listscroll_pane

0xaf0d,	// (0x0003fbe7) main_cset_slider_pane_ParamLimits

0xaf0d,	// (0x0003fbe7) main_cset_slider_pane

0xe260,	// (0x00042f3a) main_cset_list_pane_ParamLimits

0xe260,	// (0x00042f3a) main_cset_list_pane

0xe270,	// (0x00042f4a) scroll_pane_cp028

0xaf2c,	// (0x0003fc06) aid_area_touch_slider

0xaf48,	// (0x0003fc22) cset_slider_pane

0xaf72,	// (0x0003fc4c) main_cset_slider_pane_g1

0xaf87,	// (0x0003fc61) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x0004465b) main_cset_slider_pane_g

0xe2a9,	// (0x00042f83) main_cset_slider_pane_t1

0xb04f,	// (0x0003fd29) main_cset_slider_pane_t2

0xb069,	// (0x0003fd43) main_cset_slider_pane_t3

0xb083,	// (0x0003fd5d) main_cset_slider_pane_t4

0xb0a1,	// (0x0003fd7b) main_cset_slider_pane_t5

0xb0c3,	// (0x0003fd9d) main_cset_slider_pane_t6

0xb0da,	// (0x0003fdb4) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x00044680) main_cset_slider_pane_t

0xb1e8,	// (0x0003fec2) cset_list_set_pane_ParamLimits

0xb1e8,	// (0x0003fec2) cset_list_set_pane

0xb205,	// (0x0003fedf) aid_position_infowindow_above

0xb20d,	// (0x0003fee7) aid_position_infowindow_below

0x4ad9,	// (0x000397b3) cset_list_set_pane_g1_ParamLimits

0x4ad9,	// (0x000397b3) cset_list_set_pane_g1

0x4ae5,	// (0x000397bf) cset_list_set_pane_g3_ParamLimits

0x4ae5,	// (0x000397bf) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x0004469f) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x0004469f) cset_list_set_pane_g

0x4af4,	// (0x000397ce) cset_list_set_pane_t1_ParamLimits

0x4af4,	// (0x000397ce) cset_list_set_pane_t1

0x14b5,	// (0x0003618f) list_highlight_pane_cp021_ParamLimits

0x14b5,	// (0x0003618f) list_highlight_pane_cp021

0x2449,	// (0x00037123) cset_slider_pane_g1

0x245b,	// (0x00037135) cset_slider_pane_g2

0x2452,	// (0x0003712c) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x000446a4) cset_slider_pane_g

0xb215,	// (0x0003feef) aid_area_touch_cam4_zoom

0xb21d,	// (0x0003fef7) cam4_zoom_cont_pane

0xb225,	// (0x0003feff) cam4_zoom_pane_g1

0xb22d,	// (0x0003ff07) cam4_zoom_pane_g2

0xb235,	// (0x0003ff0f) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x000446ab) cam4_zoom_pane_g

0xe349,	// (0x00043023) cam4_zoom_cont_pane_g1

0xe352,	// (0x0004302c) cam4_zoom_cont_pane_g2

0xe35b,	// (0x00043035) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x000446b2) cam4_zoom_cont_pane_g

0xa726,	// (0x0003f400) call4_image_pane_ParamLimits

0xa726,	// (0x0003f400) call4_image_pane

0xe024,	// (0x00042cfe) call4_windows_conf_pane_ParamLimits

0xe063,	// (0x00042d3d) popup_call4_audio_in_window_ParamLimits

0xe063,	// (0x00042d3d) popup_call4_audio_in_window

0x0f86,	// (0x00035c60) bg_popup_call2_act_pane_cp02

0xe0d9,	// (0x00042db3) call4_list_conf_pane

0xd6f9,	// (0x000423d3) call4_image_pane_g1

0xd6f9,	// (0x000423d3) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x000443c6) call4_image_pane_g

0xe364,	// (0x0004303e) list_single_graphic_popup_conf4_pane_ParamLimits

0xe364,	// (0x0004303e) list_single_graphic_popup_conf4_pane

0x0f86,	// (0x00035c60) list_highlight_pane_cp022

0xe377,	// (0x00043051) list_single_graphic_popup_conf4_pane_g1

0x212c,	// (0x00036e06) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x000446b9) list_single_graphic_popup_conf4_pane_g

0xe37f,	// (0x00043059) list_single_graphic_popup_conf4_pane_t1

0x697d,	// (0x0003b657) popup_vtel_slider_window_ParamLimits

0x697d,	// (0x0003b657) popup_vtel_slider_window

0xdff8,	// (0x00042cd2) dialer2_ne_pane_t2_ParamLimits

0xdff8,	// (0x00042cd2) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x0004459a) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x0004459a) dialer2_ne_pane_t

0x14b5,	// (0x0003618f) bg_popup_sub_pane_cp010_ParamLimits

0x14b5,	// (0x0003618f) bg_popup_sub_pane_cp010

0xb23d,	// (0x0003ff17) popup_vtel_slider_window_g1_ParamLimits

0xb23d,	// (0x0003ff17) popup_vtel_slider_window_g1

0xb249,	// (0x0003ff23) popup_vtel_slider_window_g2_ParamLimits

0xb249,	// (0x0003ff23) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x000446be) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x000446be) popup_vtel_slider_window_g

0xb291,	// (0x0003ff6b) vtel_slider_pane_ParamLimits

0xb291,	// (0x0003ff6b) vtel_slider_pane

0xb2a0,	// (0x0003ff7a) vtel_slider_pane_g1_ParamLimits

0xb2a0,	// (0x0003ff7a) vtel_slider_pane_g1

0xb2ad,	// (0x0003ff87) vtel_slider_pane_g2_ParamLimits

0xb2ad,	// (0x0003ff87) vtel_slider_pane_g2

0xb2ba,	// (0x0003ff94) vtel_slider_pane_g3_ParamLimits

0xb2ba,	// (0x0003ff94) vtel_slider_pane_g3

0xb2a0,	// (0x0003ff7a) vtel_slider_pane_g4_ParamLimits

0xb2a0,	// (0x0003ff7a) vtel_slider_pane_g4

0xb2c7,	// (0x0003ffa1) vtel_slider_pane_g5_ParamLimits

0xb2c7,	// (0x0003ffa1) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x000446c7) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x000446c7) vtel_slider_pane_g

0x0f86,	// (0x00035c60) main_gallery2_pane

0xaa87,	// (0x0003f761) aid_size_row_itut2_dropdow_list_ParamLimits

0xaa87,	// (0x0003f761) aid_size_row_itut2_dropdow_list

0xaae7,	// (0x0003f7c1) grid_vitu2_function_top_pane_ParamLimits

0xaae7,	// (0x0003f7c1) grid_vitu2_function_top_pane

0xab3d,	// (0x0003f817) popup_vitu2_dropdown_list_window_ParamLimits

0xab3d,	// (0x0003f817) popup_vitu2_dropdown_list_window

0xab5d,	// (0x0003f837) popup_vitu2_match_list_window

0xb2d4,	// (0x0003ffae) cell_vitu2_function_top_pane_ParamLimits

0xb2d4,	// (0x0003ffae) cell_vitu2_function_top_pane

0xb2f4,	// (0x0003ffce) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb2f4,	// (0x0003ffce) cell_vitu2_function_top_pane_cp01

0xb312,	// (0x0003ffec) cell_vitu2_function_top_wide_pane_ParamLimits

0xb312,	// (0x0003ffec) cell_vitu2_function_top_wide_pane

0x14b5,	// (0x0003618f) bg_button_pane_cp012

0xb330,	// (0x0004000a) cell_vitu2_function_top_pane_g1

0xb33f,	// (0x00040019) bg_button_pane_cp013_ParamLimits

0xb33f,	// (0x00040019) bg_button_pane_cp013

0xb35b,	// (0x00040035) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb35b,	// (0x00040035) cell_vitu2_function_top_wide_pane_g1

0x5b35,	// (0x0003a80f) bg_popup_sub_pane_cp20

0xb373,	// (0x0004004d) list_vitu2_match_list_pane

0xe156,	// (0x00042e30) bg_popup_sub_pane_cp20_g1

0xe15e,	// (0x00042e38) bg_popup_sub_pane_cp20_g2

0x1bf0,	// (0x000368ca) bg_popup_sub_pane_cp20_g3

0xe166,	// (0x00042e40) bg_popup_sub_pane_cp20_g4

0x1bd0,	// (0x000368aa) bg_popup_sub_pane_cp20_g5

0xe395,	// (0x0004306f) bg_popup_sub_pane_cp20_g6

0xe176,	// (0x00042e50) bg_popup_sub_pane_cp20_g7

0xe17e,	// (0x00042e58) bg_popup_sub_pane_cp20_g8

0xe186,	// (0x00042e60) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x000446d2) bg_popup_sub_pane_cp20_g

0xb38b,	// (0x00040065) list_vitu2_match_list_item_pane_ParamLimits

0xb38b,	// (0x00040065) list_vitu2_match_list_item_pane

0xb39d,	// (0x00040077) list_vitu2_match_list_item_pane_t1

0x0f86,	// (0x00035c60) bg_popup_sub_pane_cp21

0x2031,	// (0x00036d0b) grid_vitu2_dropdown_list_pane

0xb3ab,	// (0x00040085) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb3ab,	// (0x00040085) cell_vitu2_dropdown_list_char_pane

0xb3cc,	// (0x000400a6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb3cc,	// (0x000400a6) cell_vitu2_dropdown_list_ctrl_pane

0xe39d,	// (0x00043077) cell_vitu2_dropdown_list_char_pane_g1

0xe3a6,	// (0x00043080) cell_vitu2_dropdown_list_char_pane_g2

0xe3af,	// (0x00043089) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x000446ef) cell_vitu2_dropdown_list_char_pane_g

0xb3f8,	// (0x000400d2) cell_vitu2_dropdown_list_char_pane_t1

0xb406,	// (0x000400e0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb406,	// (0x000400e0) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb416,	// (0x000400f0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb416,	// (0x000400f0) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb427,	// (0x00040101) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb427,	// (0x00040101) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb437,	// (0x00040111) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb437,	// (0x00040111) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd960,	// (0x0004263a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd960,	// (0x0004263a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x000446f6) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x000446f6) cell_vitu2_dropdown_list_ctrl_pane_g

0xb453,	// (0x0004012d) aid_size_cell_gallery2_ParamLimits

0xb453,	// (0x0004012d) aid_size_cell_gallery2

0xb461,	// (0x0004013b) grid_gallery2_pane_ParamLimits

0xb461,	// (0x0004013b) grid_gallery2_pane

0xb470,	// (0x0004014a) scroll_pane_cp029_ParamLimits

0xb470,	// (0x0004014a) scroll_pane_cp029

0xb47c,	// (0x00040156) cell_gallery2_pane_ParamLimits

0xb47c,	// (0x00040156) cell_gallery2_pane

0xe3b8,	// (0x00043092) cell_gallery2_pane_g2

0xb4ad,	// (0x00040187) cell_gallery2_pane_g3

0xe3c2,	// (0x0004309c) cell_gallery2_pane_g4

0xe3ca,	// (0x000430a4) cell_gallery2_pane_g5

0x2305,	// (0x00036fdf) grid_highlight_pane_cp10

0xab5d,	// (0x0003f837) popup_vitu2_match_list_window_ParamLimits

0xab6f,	// (0x0003f849) popup_vitu2_query_window_ParamLimits

0xab6f,	// (0x0003f849) popup_vitu2_query_window

0x0f86,	// (0x00035c60) bg_vitu2_candi_button_pane

0xe39d,	// (0x00043077) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe3a6,	// (0x00043080) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe3af,	// (0x00043089) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x4b5e,	// (0x00039838) bg_button_pane_cp015

0xb4b5,	// (0x0004018f) bg_button_pane_cp016

0xb4c8,	// (0x000401a2) bg_button_pane_cp017

0x3750,	// (0x0003842a) bg_popup_sub_pane_cp22

0xe3d2,	// (0x000430ac) popup_vitu2_query_window_g1

0x4b91,	// (0x0003986b) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x00044701) popup_vitu2_query_window_g

0x4bae,	// (0x00039888) popup_vitu2_query_window_t1_ParamLimits

0x4bae,	// (0x00039888) popup_vitu2_query_window_t1

0x4be1,	// (0x000398bb) popup_vitu2_query_window_t2_ParamLimits

0x4be1,	// (0x000398bb) popup_vitu2_query_window_t2

0x4bf3,	// (0x000398cd) popup_vitu2_query_window_t3_ParamLimits

0x4bf3,	// (0x000398cd) popup_vitu2_query_window_t3

0xb4ec,	// (0x000401c6) popup_vitu2_query_window_t4_ParamLimits

0xb4ec,	// (0x000401c6) popup_vitu2_query_window_t4

0xb50d,	// (0x000401e7) popup_vitu2_query_window_t5_ParamLimits

0xb50d,	// (0x000401e7) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x00044708) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x00044708) popup_vitu2_query_window_t

0xe258,	// (0x00042f32) main_cset_text_pane

0xaf2c,	// (0x0003fc06) aid_area_touch_slider_ParamLimits

0xaf48,	// (0x0003fc22) cset_slider_pane_ParamLimits

0xaf72,	// (0x0003fc4c) main_cset_slider_pane_g1_ParamLimits

0xaf87,	// (0x0003fc61) main_cset_slider_pane_g2_ParamLimits

0xe279,	// (0x00042f53) main_cset_slider_pane_g3_ParamLimits

0xe279,	// (0x00042f53) main_cset_slider_pane_g3

0xaf9c,	// (0x0003fc76) main_cset_slider_pane_g4_ParamLimits

0xaf9c,	// (0x0003fc76) main_cset_slider_pane_g4

0xafab,	// (0x0003fc85) main_cset_slider_pane_g5_ParamLimits

0xafab,	// (0x0003fc85) main_cset_slider_pane_g5

0xafb9,	// (0x0003fc93) main_cset_slider_pane_g6_ParamLimits

0xafb9,	// (0x0003fc93) main_cset_slider_pane_g6

0xf981,	// (0x0004465b) main_cset_slider_pane_g_ParamLimits

0xe2a9,	// (0x00042f83) main_cset_slider_pane_t1_ParamLimits

0xb04f,	// (0x0003fd29) main_cset_slider_pane_t2_ParamLimits

0xb069,	// (0x0003fd43) main_cset_slider_pane_t3_ParamLimits

0xb083,	// (0x0003fd5d) main_cset_slider_pane_t4_ParamLimits

0xb0a1,	// (0x0003fd7b) main_cset_slider_pane_t5_ParamLimits

0xb0c3,	// (0x0003fd9d) main_cset_slider_pane_t6_ParamLimits

0xb0da,	// (0x0003fdb4) main_cset_slider_pane_t7_ParamLimits

0xb108,	// (0x0003fde2) main_cset_slider_pane_t8_ParamLimits

0xb108,	// (0x0003fde2) main_cset_slider_pane_t8

0xb130,	// (0x0003fe0a) main_cset_slider_pane_t9_ParamLimits

0xb130,	// (0x0003fe0a) main_cset_slider_pane_t9

0xb158,	// (0x0003fe32) main_cset_slider_pane_t10_ParamLimits

0xb158,	// (0x0003fe32) main_cset_slider_pane_t10

0xb180,	// (0x0003fe5a) main_cset_slider_pane_t11_ParamLimits

0xb180,	// (0x0003fe5a) main_cset_slider_pane_t11

0xb1aa,	// (0x0003fe84) main_cset_slider_pane_t12_ParamLimits

0xb1aa,	// (0x0003fe84) main_cset_slider_pane_t12

0xb1c9,	// (0x0003fea3) main_cset_slider_pane_t13_ParamLimits

0xb1c9,	// (0x0003fea3) main_cset_slider_pane_t13

0xf9a6,	// (0x00044680) main_cset_slider_pane_t_ParamLimits

0x0f86,	// (0x00035c60) bg_popup_sub_pane_cp011

0xe3de,	// (0x000430b8) main_cset_text_pane_g1

0xe3e6,	// (0x000430c0) main_cset_text_pane_t1

0xe3f4,	// (0x000430ce) main_cset_text_pane_t2

0xe402,	// (0x000430dc) main_cset_text_pane_t3

0xe410,	// (0x000430ea) main_cset_text_pane_t4

0xe41e,	// (0x000430f8) main_cset_text_pane_t5

0xe42c,	// (0x00043106) main_cset_text_pane_t6

0xe43a,	// (0x00043114) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x00044717) main_cset_text_pane_t

0x0f86,	// (0x00035c60) main_cam4_burst_pane

0x0f86,	// (0x00035c60) main_cam5_pane

0x1d13,	// (0x000369ed) bg_button_pane_cp019

0xae84,	// (0x0003fb5e) bg_button_pane_cp020

0xe285,	// (0x00042f5f) main_cset_slider_pane_g7_ParamLimits

0xe285,	// (0x00042f5f) main_cset_slider_pane_g7

0xe291,	// (0x00042f6b) main_cset_slider_pane_g8_ParamLimits

0xe291,	// (0x00042f6b) main_cset_slider_pane_g8

0xafcf,	// (0x0003fca9) main_cset_slider_pane_g9_ParamLimits

0xafcf,	// (0x0003fca9) main_cset_slider_pane_g9

0xafdb,	// (0x0003fcb5) main_cset_slider_pane_g10_ParamLimits

0xafdb,	// (0x0003fcb5) main_cset_slider_pane_g10

0xafe7,	// (0x0003fcc1) main_cset_slider_pane_g11_ParamLimits

0xafe7,	// (0x0003fcc1) main_cset_slider_pane_g11

0xaff3,	// (0x0003fccd) main_cset_slider_pane_g12_ParamLimits

0xaff3,	// (0x0003fccd) main_cset_slider_pane_g12

0xafff,	// (0x0003fcd9) main_cset_slider_pane_g13_ParamLimits

0xafff,	// (0x0003fcd9) main_cset_slider_pane_g13

0xb00d,	// (0x0003fce7) main_cset_slider_pane_g14_ParamLimits

0xb00d,	// (0x0003fce7) main_cset_slider_pane_g14

0xb01b,	// (0x0003fcf5) main_cset_slider_pane_g15_ParamLimits

0xb01b,	// (0x0003fcf5) main_cset_slider_pane_g15

0xe2d7,	// (0x00042fb1) main_cset_slider_pane_t14_ParamLimits

0xe2d7,	// (0x00042fb1) main_cset_slider_pane_t14

0xe310,	// (0x00042fea) main_cset_slider_pane_t15_ParamLimits

0xe310,	// (0x00042fea) main_cset_slider_pane_t15

0xb52e,	// (0x00040208) aid_cam4_burst_size_cell_ParamLimits

0xb52e,	// (0x00040208) aid_cam4_burst_size_cell

0xb54a,	// (0x00040224) grid_cam4_burst_pane_ParamLimits

0xb54a,	// (0x00040224) grid_cam4_burst_pane

0xb57a,	// (0x00040254) linegrid_cam4_burst_pane_ParamLimits

0xb57a,	// (0x00040254) linegrid_cam4_burst_pane

0xb59c,	// (0x00040276) scroll_pane_cp30_ParamLimits

0xb59c,	// (0x00040276) scroll_pane_cp30

0xb5a8,	// (0x00040282) cell_cam4_burst_pane_ParamLimits

0xb5a8,	// (0x00040282) cell_cam4_burst_pane

0xe448,	// (0x00043122) linegrid_cam4_burst_pane_g1_ParamLimits

0xe448,	// (0x00043122) linegrid_cam4_burst_pane_g1

0xb5e4,	// (0x000402be) linegrid_cam4_burst_pane_g2_ParamLimits

0xb5e4,	// (0x000402be) linegrid_cam4_burst_pane_g2

0xe455,	// (0x0004312f) linegrid_cam4_burst_pane_g3_ParamLimits

0xe455,	// (0x0004312f) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x00044726) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x00044726) linegrid_cam4_burst_pane_g

0xb5f5,	// (0x000402cf) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb5f5,	// (0x000402cf) linegrid_cam4_burst_pane_g3_copy1

0xe462,	// (0x0004313c) linegrid_cam4_burst_pane_g4_ParamLimits

0xe462,	// (0x0004313c) linegrid_cam4_burst_pane_g4

0xb60f,	// (0x000402e9) linegrid_cam4_burst_pane_g5_ParamLimits

0xb60f,	// (0x000402e9) linegrid_cam4_burst_pane_g5

0xb620,	// (0x000402fa) linegrid_cam4_burst_pane_g6_ParamLimits

0xb620,	// (0x000402fa) linegrid_cam4_burst_pane_g6

0xe46f,	// (0x00043149) linegrid_cam4_burst_pane_g7_ParamLimits

0xe46f,	// (0x00043149) linegrid_cam4_burst_pane_g7

0xb631,	// (0x0004030b) cell_cam4_burst_pane_g1

0xe488,	// (0x00043162) main_cam5_pane_t1_ParamLimits

0xe488,	// (0x00043162) main_cam5_pane_t1

0xe49a,	// (0x00043174) main_cam5_pane_t2_ParamLimits

0xe49a,	// (0x00043174) main_cam5_pane_t2

0xe4ac,	// (0x00043186) main_cam5_pane_t3_ParamLimits

0xe4ac,	// (0x00043186) main_cam5_pane_t3

0xe4be,	// (0x00043198) main_cam5_pane_t4_ParamLimits

0xe4be,	// (0x00043198) main_cam5_pane_t4

0xe4d4,	// (0x000431ae) main_cam5_pane_t5_ParamLimits

0xe4d4,	// (0x000431ae) main_cam5_pane_t5

0xe4e6,	// (0x000431c0) main_cam5_pane_t6_ParamLimits

0xe4e6,	// (0x000431c0) main_cam5_pane_t6

0xe4fa,	// (0x000431d4) main_cam5_pane_t7_ParamLimits

0xe4fa,	// (0x000431d4) main_cam5_pane_t7

0xe50c,	// (0x000431e6) main_cam5_pane_t8_ParamLimits

0xe50c,	// (0x000431e6) main_cam5_pane_t8

0xe528,	// (0x00043202) main_cam5_pane_t9_ParamLimits

0xe528,	// (0x00043202) main_cam5_pane_t9

0xe53a,	// (0x00043214) main_cam5_pane_t10_ParamLimits

0xe53a,	// (0x00043214) main_cam5_pane_t10

0xe54c,	// (0x00043226) main_cam5_pane_t11_ParamLimits

0xe54c,	// (0x00043226) main_cam5_pane_t11

0xe55e,	// (0x00043238) main_cam5_pane_t12_ParamLimits

0xe55e,	// (0x00043238) main_cam5_pane_t12

0xe573,	// (0x0004324d) main_cam5_pane_t13_ParamLimits

0xe573,	// (0x0004324d) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x00044732) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x00044732) main_cam5_pane_t

0x5afe,	// (0x0003a7d8) popup_scut_keymap_window_ParamLimits

0x5afe,	// (0x0003a7d8) popup_scut_keymap_window

0xb644,	// (0x0004031e) aid_size_cell_brow_shortcut

0x2305,	// (0x00036fdf) bg_popup_window_pane_cp010

0xb650,	// (0x0004032a) grid_scut_pane

0xb65c,	// (0x00040336) cell_scut_pane_ParamLimits

0xb65c,	// (0x00040336) cell_scut_pane

0xb673,	// (0x0004034d) cell_scut_pane_g1

0xe590,	// (0x0004326a) cell_scut_pane_t1

0xe59f,	// (0x00043279) cell_scut_pane_t2

0xb67c,	// (0x00040356) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x0004474d) cell_scut_pane_t

0x967b,	// (0x0003e355) main_mup3_pane_g8_ParamLimits

0x967b,	// (0x0003e355) main_mup3_pane_g8

0xaa95,	// (0x0003f76f) area_vitu2_query_pane_ParamLimits

0xaa95,	// (0x0003f76f) area_vitu2_query_pane

0x4b70,	// (0x0003984a) input_focus_pane_cp08

0xe5ae,	// (0x00043288) area_vitu2_query_pane_g1

0x4c71,	// (0x0003994b) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x00044754) area_vitu2_query_pane_g

0xb68a,	// (0x00040364) area_vitu2_query_pane_t1_ParamLimits

0xb68a,	// (0x00040364) area_vitu2_query_pane_t1

0xb69e,	// (0x00040378) area_vitu2_query_pane_t2_ParamLimits

0xb69e,	// (0x00040378) area_vitu2_query_pane_t2

0x4c82,	// (0x0003995c) area_vitu2_query_pane_t3_ParamLimits

0x4c82,	// (0x0003995c) area_vitu2_query_pane_t3

0x4caa,	// (0x00039984) area_vitu2_query_pane_t4_ParamLimits

0x4caa,	// (0x00039984) area_vitu2_query_pane_t4

0x4cd2,	// (0x000399ac) area_vitu2_query_pane_t5_ParamLimits

0x4cd2,	// (0x000399ac) area_vitu2_query_pane_t5

0x4cfa,	// (0x000399d4) area_vitu2_query_pane_t6_ParamLimits

0x4cfa,	// (0x000399d4) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x00044759) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x00044759) area_vitu2_query_pane_t

0xb6b2,	// (0x0004038c) bg_button_pane_cp018

0xb6c0,	// (0x0004039a) bg_button_pane_cp021

0x4d46,	// (0x00039a20) bg_button_pane_cp022

0x4d57,	// (0x00039a31) input_focus_pane_cp09

0x7b9f,	// (0x0003c879) aid_size_touch_mv_arrow_left

0x7bca,	// (0x0003c8a4) aid_size_touch_mv_arrow_right

0xb033,	// (0x0003fd0d) main_cset_slider_pane_g16_ParamLimits

0xb033,	// (0x0003fd0d) main_cset_slider_pane_g16

0xb041,	// (0x0003fd1b) main_cset_slider_pane_g17_ParamLimits

0xb041,	// (0x0003fd1b) main_cset_slider_pane_g17

0xb631,	// (0x0004030b) cell_cam4_burst_pane_g1_ParamLimits

0x0f86,	// (0x00035c60) compa_mode_pane

0xb255,	// (0x0003ff2f) popup_vtel_slider_window_g3_ParamLimits

0xb255,	// (0x0003ff2f) popup_vtel_slider_window_g3

0xb269,	// (0x0003ff43) popup_vtel_slider_window_g4_ParamLimits

0xb269,	// (0x0003ff43) popup_vtel_slider_window_g4

0xb27d,	// (0x0003ff57) popup_vtel_slider_window_t1_ParamLimits

0xb27d,	// (0x0003ff57) popup_vtel_slider_window_t1

0x0f86,	// (0x00035c60) main_cl_pane

0x89c5,	// (0x0003d69f) popup_imed_adjust2_window_ParamLimits

0x3750,	// (0x0003842a) bg_tb_trans_pane_cp05_ParamLimits

0xdbff,	// (0x000428d9) popup_imed_adjust2_window_g1_ParamLimits

0xdc0e,	// (0x000428e8) popup_imed_adjust2_window_g2_ParamLimits

0xdc0e,	// (0x000428e8) popup_imed_adjust2_window_g2

0xdc1a,	// (0x000428f4) popup_imed_adjust2_window_g3_ParamLimits

0xdc1a,	// (0x000428f4) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x000444c4) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x000444c4) popup_imed_adjust2_window_g

0xdc26,	// (0x00042900) popup_imed_adjust2_window_t1_ParamLimits

0xdc3e,	// (0x00042918) slider_imed_adjust_pane_ParamLimits

0xdc52,	// (0x0004292c) slider_imed_adjust_pane_g1_ParamLimits

0xdc62,	// (0x0004293c) slider_imed_adjust_pane_g2_ParamLimits

0xdc72,	// (0x0004294c) slider_imed_adjust_pane_g3_ParamLimits

0xdc83,	// (0x0004295d) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x000444cb) slider_imed_adjust_pane_g_ParamLimits

0xa7e2,	// (0x0003f4bc) aid_touch_area_cam4_ParamLimits

0xa7e2,	// (0x0003f4bc) aid_touch_area_cam4

0xa7f2,	// (0x0003f4cc) battery_pane_cp01

0xa879,	// (0x0003f553) main_camera4_pane_g6_ParamLimits

0xa879,	// (0x0003f553) main_camera4_pane_g6

0xa897,	// (0x0003f571) main_camera4_pane_t2_ParamLimits

0xa897,	// (0x0003f571) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x000445ce) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x000445ce) main_camera4_pane_t

0xa91e,	// (0x0003f5f8) aid_touch_area_vid4_ParamLimits

0xa91e,	// (0x0003f5f8) aid_touch_area_vid4

0xa95e,	// (0x0003f638) main_video4_pane_g5_ParamLimits

0xa95e,	// (0x0003f638) main_video4_pane_g5

0xa980,	// (0x0003f65a) vid4_progress_pane_ParamLimits

0xa980,	// (0x0003f65a) vid4_progress_pane

0xe29d,	// (0x00042f77) main_cset_slider_pane_g18_ParamLimits

0xe29d,	// (0x00042f77) main_cset_slider_pane_g18

0xe47c,	// (0x00043156) cell_cam4_burst_pane_g2_ParamLimits

0xe47c,	// (0x00043156) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x0004472d) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x0004472d) cell_cam4_burst_pane_g

0xb6cc,	// (0x000403a6) bg_cl_pane_ParamLimits

0xb6cc,	// (0x000403a6) bg_cl_pane

0xb6d8,	// (0x000403b2) cl_header_pane_ParamLimits

0xb6d8,	// (0x000403b2) cl_header_pane

0xb6e4,	// (0x000403be) cl_listscroll_pane_ParamLimits

0xb6e4,	// (0x000403be) cl_listscroll_pane

0xe5ba,	// (0x00043294) bg_cl_pane_g1

0xe5c2,	// (0x0004329c) bg_cl_pane_g2

0xe5ca,	// (0x000432a4) bg_cl_pane_g3

0xe5d2,	// (0x000432ac) bg_cl_pane_g4

0xe5da,	// (0x000432b4) bg_cl_pane_g5

0xe5e2,	// (0x000432bc) bg_cl_pane_g6

0xe5ea,	// (0x000432c4) bg_cl_pane_g7

0xe5f2,	// (0x000432cc) bg_cl_pane_g8

0xe5fa,	// (0x000432d4) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x00044768) bg_cl_pane_g

0xb6f0,	// (0x000403ca) aid_height_cl_leading_ParamLimits

0xb6f0,	// (0x000403ca) aid_height_cl_leading

0xb6fc,	// (0x000403d6) aid_height_cl_text_ParamLimits

0xb6fc,	// (0x000403d6) aid_height_cl_text

0x5b35,	// (0x0003a80f) bg_cl_header_pane_ParamLimits

0x5b35,	// (0x0003a80f) bg_cl_header_pane

0xb714,	// (0x000403ee) cl_header_pane_g1_ParamLimits

0xb714,	// (0x000403ee) cl_header_pane_g1

0xb721,	// (0x000403fb) cl_header_pane_t1_ParamLimits

0xb721,	// (0x000403fb) cl_header_pane_t1

0xe602,	// (0x000432dc) cl_list_pane

0xe270,	// (0x00042f4a) hc_scroll_pane_cp01

0x1bd0,	// (0x000368aa) bg_cl_header_pane_g1

0xe156,	// (0x00042e30) bg_cl_header_pane_g2

0x1bf0,	// (0x000368ca) bg_cl_header_pane_g3

0xe166,	// (0x00042e40) bg_cl_header_pane_g4

0xe15e,	// (0x00042e38) bg_cl_header_pane_g5

0xe395,	// (0x0004306f) bg_cl_header_pane_g6

0xe17e,	// (0x00042e58) bg_cl_header_pane_g7

0xe186,	// (0x00042e60) bg_cl_header_pane_g8

0xe176,	// (0x00042e50) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x0004477b) bg_cl_header_pane_g

0xb733,	// (0x0004040d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb733,	// (0x0004040d) hc_cl_list_double_graphic_heading_pane

0xb74a,	// (0x00040424) hc_cl_list_single_graphic_pane_ParamLimits

0xb74a,	// (0x00040424) hc_cl_list_single_graphic_pane

0xb76a,	// (0x00040444) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb76a,	// (0x00040444) hc_cl_list_single_graphic_pane_g1

0xb776,	// (0x00040450) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb776,	// (0x00040450) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x0004478e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x0004478e) hc_cl_list_single_graphic_pane_g

0xb78a,	// (0x00040464) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb78a,	// (0x00040464) hc_cl_list_single_graphic_pane_t1

0xb76a,	// (0x00040444) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb76a,	// (0x00040444) hc_cl_list_double_graphic_heading_pane_g1

0xb79f,	// (0x00040479) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb79f,	// (0x00040479) hc_cl_list_double_graphic_heading_pane_g2

0xb7b3,	// (0x0004048d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb7b3,	// (0x0004048d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x00044793) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x00044793) hc_cl_list_double_graphic_heading_pane_g

0xb7c7,	// (0x000404a1) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb7c7,	// (0x000404a1) hc_cl_list_double_graphic_heading_pane_t1

0xb7dc,	// (0x000404b6) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb7dc,	// (0x000404b6) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x0004479a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x0004479a) hc_cl_list_double_graphic_heading_pane_t

0xb7f9,	// (0x000404d3) vid4_progress_pane_g1

0xb80b,	// (0x000404e5) vid4_progress_pane_g2

0xb81d,	// (0x000404f7) vid4_progress_pane_g3

0xb829,	// (0x00040503) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x0004479f) vid4_progress_pane_g

0xb847,	// (0x00040521) vid4_progress_pane_t1

0xb85c,	// (0x00040536) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x000447aa) vid4_progress_pane_t

0xb887,	// (0x00040561) wait_bar_pane_cp07

0xd4ea,	// (0x000421c4) blid_firmament_pane_ParamLimits

0xd52d,	// (0x00042207) popup_blid_sat_info2_window_g1

0xd551,	// (0x0004222b) popup_blid_sat_info2_window_t3

0xd55f,	// (0x00042239) popup_blid_sat_info2_window_t4

0xd56d,	// (0x00042247) popup_blid_sat_info2_window_t5

0xd57b,	// (0x00042255) popup_blid_sat_info2_window_t6

0xd58b,	// (0x00042265) popup_blid_sat_info2_window_t7

0xd599,	// (0x00042273) popup_blid_sat_info2_window_t8

0xd5a7,	// (0x00042281) popup_blid_sat_info2_window_t9

0xd5b5,	// (0x0004228f) popup_blid_sat_info2_window_t10

0xd679,	// (0x00042353) aid_firma_cardinal_ParamLimits

0xd68d,	// (0x00042367) blid_firmament_pane_t1_ParamLimits

0xd6a4,	// (0x0004237e) blid_firmament_pane_t2_ParamLimits

0xd6bb,	// (0x00042395) blid_firmament_pane_t3_ParamLimits

0xd6d2,	// (0x000423ac) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x000443bd) blid_firmament_pane_t_ParamLimits

0xd6e9,	// (0x000423c3) blid_sat_info_pane_ParamLimits

0x14b5,	// (0x0003618f) main_cam_set_pane_ParamLimits

0x9e36,	// (0x0003eb10) aid_size_cell_colour_35_ParamLimits

0x9e50,	// (0x0003eb2a) aid_size_cell_colour_112_ParamLimits

0x9e67,	// (0x0003eb41) aid_size_cell_effect_ParamLimits

0x14b5,	// (0x0003618f) bg_tb_trans_pane_cp02_ParamLimits

0x1e69,	// (0x00036b43) heading_imed_pane_ParamLimits

0x9e81,	// (0x0003eb5b) listscroll_imed_pane_ParamLimits

0x2d7a,	// (0x00037a54) popup_call2_audio_first_window_g5_ParamLimits

0x2d7a,	// (0x00037a54) popup_call2_audio_first_window_g5

0xa59f,	// (0x0003f279) aid_size_touch_image3_arrow_left_ParamLimits

0xa59f,	// (0x0003f279) aid_size_touch_image3_arrow_left

0xa5b5,	// (0x0003f28f) aid_size_touch_image3_arrow_right_ParamLimits

0xa5b5,	// (0x0003f28f) aid_size_touch_image3_arrow_right

0xb872,	// (0x0004054c) vid4_progress_pane_t3

0xa128,	// (0x0003ee02) main_hwr_training_symbol_option_pane_ParamLimits

0xa128,	// (0x0003ee02) main_hwr_training_symbol_option_pane

0xdeec,	// (0x00042bc6) popup_hwr_training_preview_window_ParamLimits

0xdeec,	// (0x00042bc6) popup_hwr_training_preview_window

0xa189,	// (0x0003ee63) hwr_training_navi_pane_g5_ParamLimits

0xa189,	// (0x0003ee63) hwr_training_navi_pane_g5

0xe144,	// (0x00042e1e) popup_char_count_window

0x5b35,	// (0x0003a80f) bg_popup_sub_pane_cp20_ParamLimits

0xb373,	// (0x0004004d) list_vitu2_match_list_pane_ParamLimits

0xb37f,	// (0x00040059) vitu2_page_scroll_pane_ParamLimits

0xb37f,	// (0x00040059) vitu2_page_scroll_pane

0xe60b,	// (0x000432e5) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe60b,	// (0x000432e5) list_single_hwr_training_symbol_option_pane

0xe61e,	// (0x000432f8) list_single_hwr_training_symbol_option_pane_g1

0xe626,	// (0x00043300) list_single_hwr_training_symbol_option_pane_t1

0xe634,	// (0x0004330e) bg_button_pane_cp023

0xe63d,	// (0x00043317) bg_button_pane_cp024

0xb897,	// (0x00040571) vitu2_page_scroll_pane_g1

0xb89f,	// (0x00040579) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x000447b1) vitu2_page_scroll_pane_g

0xb8a7,	// (0x00040581) vitu2_page_scroll_pane_t1

0xd44a,	// (0x00042124) popup_char_count_window_g1

0xe670,	// (0x0004334a) popup_char_count_window_g2

0xe679,	// (0x00043353) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x000447b6) popup_char_count_window_g

0xe682,	// (0x0004335c) popup_char_count_window_t1

0x0f86,	// (0x00035c60) main_vded2_pane

0xdbeb,	// (0x000428c5) aid_size_cell_imed_line

0xdbf5,	// (0x000428cf) grid_imed_line_width_pane

0xa9ec,	// (0x0003f6c6) vid4_indicators_pane_g4

0xe690,	// (0x0004336a) cell_imed_line_width_pane_ParamLimits

0xe690,	// (0x0004336a) cell_imed_line_width_pane

0xe6a4,	// (0x0004337e) cell_imed_line_width_pane_g1

0xe6ad,	// (0x00043387) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x000447bd) cell_imed_line_width_pane_g

0xb8b6,	// (0x00040590) main_vded2_pane_g1_ParamLimits

0xb8b6,	// (0x00040590) main_vded2_pane_g1

0xb8c3,	// (0x0004059d) main_vded2_pane_g2_ParamLimits

0xb8c3,	// (0x0004059d) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x000447c2) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x000447c2) main_vded2_pane_g

0xb8d1,	// (0x000405ab) vded2_slider_pane_ParamLimits

0xb8d1,	// (0x000405ab) vded2_slider_pane

0xb8de,	// (0x000405b8) aid_size_touch_vded2_end

0xb8e8,	// (0x000405c2) aid_size_touch_vded2_playhead

0xe6b5,	// (0x0004338f) aid_size_touch_vded2_start

0xe6bd,	// (0x00043397) vded2_slider_bg_pane

0xe6c6,	// (0x000433a0) vded2_slider_pane_g1

0xe6cf,	// (0x000433a9) vded2_slider_pane_g2

0xb8f0,	// (0x000405ca) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x000447c7) vded2_slider_pane_g

0xe6d7,	// (0x000433b1) vded2_slider_bg_pane_g1

0xe6e0,	// (0x000433ba) vded2_slider_bg_pane_g2

0xe6e9,	// (0x000433c3) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x000447ce) vded2_slider_bg_pane_g

0x8211,	// (0x0003ceeb) aid_postcard_touch_down_pane_ParamLimits

0x8211,	// (0x0003ceeb) aid_postcard_touch_down_pane

0x8221,	// (0x0003cefb) aid_postcard_touch_up_pane_ParamLimits

0x8221,	// (0x0003cefb) aid_postcard_touch_up_pane

0x0f86,	// (0x00035c60) main_blid2_pane

0x8954,	// (0x0003d62e) popup_blid2_search_window

0x0f86,	// (0x00035c60) blid2_gps_pane

0x0f86,	// (0x00035c60) blid2_navig_pane

0x0f86,	// (0x00035c60) blid2_search_pane

0x0f86,	// (0x00035c60) blid2_tripm_pane

0xb8f9,	// (0x000405d3) blid2_search_pane_g1_ParamLimits

0xb8f9,	// (0x000405d3) blid2_search_pane_g1

0xb909,	// (0x000405e3) blid2_search_pane_t1_ParamLimits

0xb909,	// (0x000405e3) blid2_search_pane_t1

0xb91b,	// (0x000405f5) aid_size_cell_blid2_gps_ParamLimits

0xb91b,	// (0x000405f5) aid_size_cell_blid2_gps

0xb92b,	// (0x00040605) blid2_gps_pane_g1_ParamLimits

0xb92b,	// (0x00040605) blid2_gps_pane_g1

0xb937,	// (0x00040611) grid_blid2_satellite_pane_ParamLimits

0xb937,	// (0x00040611) grid_blid2_satellite_pane

0xb947,	// (0x00040621) blid2_navig_pane_g1_ParamLimits

0xb947,	// (0x00040621) blid2_navig_pane_g1

0xb953,	// (0x0004062d) blid2_navig_pane_t1_ParamLimits

0xb953,	// (0x0004062d) blid2_navig_pane_t1

0xb965,	// (0x0004063f) blid2_navig_pane_t2_ParamLimits

0xb965,	// (0x0004063f) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x000447d5) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x000447d5) blid2_navig_pane_t

0xb977,	// (0x00040651) blid2_navig_ring_pane_ParamLimits

0xb977,	// (0x00040651) blid2_navig_ring_pane

0xb987,	// (0x00040661) blid2_speed_pane_ParamLimits

0xb987,	// (0x00040661) blid2_speed_pane

0xb993,	// (0x0004066d) blid2_tripm_pane_g1_ParamLimits

0xb993,	// (0x0004066d) blid2_tripm_pane_g1

0xb9a3,	// (0x0004067d) blid2_tripm_pane_g2_ParamLimits

0xb9a3,	// (0x0004067d) blid2_tripm_pane_g2

0xb9af,	// (0x00040689) blid2_tripm_pane_g3_ParamLimits

0xb9af,	// (0x00040689) blid2_tripm_pane_g3

0xb9bb,	// (0x00040695) blid2_tripm_pane_g4_ParamLimits

0xb9bb,	// (0x00040695) blid2_tripm_pane_g4

0xb9c7,	// (0x000406a1) blid2_tripm_pane_g5_ParamLimits

0xb9c7,	// (0x000406a1) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x000447da) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x000447da) blid2_tripm_pane_g

0xb9e3,	// (0x000406bd) blid2_tripm_pane_t1_ParamLimits

0xb9e3,	// (0x000406bd) blid2_tripm_pane_t1

0xb9f7,	// (0x000406d1) blid2_tripm_pane_t2_ParamLimits

0xb9f7,	// (0x000406d1) blid2_tripm_pane_t2

0xba0b,	// (0x000406e5) blid2_tripm_pane_t3_ParamLimits

0xba0b,	// (0x000406e5) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x000447e7) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x000447e7) blid2_tripm_pane_t

0xba3d,	// (0x00040717) cell_blid2_satellite_pane_ParamLimits

0xba3d,	// (0x00040717) cell_blid2_satellite_pane

0xba57,	// (0x00040731) cell_blid2_satellite_pane_g1

0xe6f2,	// (0x000433cc) cell_blid2_satellite_pane_t1

0xd6f9,	// (0x000423d3) blid2_speed_pane_g1

0xe700,	// (0x000433da) blid2_speed_pane_t1

0xe70e,	// (0x000433e8) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x000447f0) blid2_speed_pane_t

0xd6f9,	// (0x000423d3) blid2_navig_ring_pane_g1

0xba60,	// (0x0004073a) blid2_navig_ring_pane_g2

0xba68,	// (0x00040742) blid2_navig_ring_pane_g3

0xba70,	// (0x0004074a) blid2_navig_ring_pane_g4

0xba78,	// (0x00040752) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x000447f5) blid2_navig_ring_pane_g

0x0f86,	// (0x00035c60) bg_popup_window_pane_cp011

0xe71c,	// (0x000433f6) popup_blid2_search_window_g1

0xe724,	// (0x000433fe) popup_blid2_search_window_t1

0xe732,	// (0x0004340c) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x00044800) popup_blid2_search_window_t

0x1adf,	// (0x000367b9) main_browser_pane_g1

0x1721,	// (0x000363fb) main_browser_pane_ParamLimits

0x14b5,	// (0x0003618f) bg_button_pane_cp011_ParamLimits

0xac53,	// (0x0003f92d) cell_vitu2_function_pane_g1_ParamLimits

0x3750,	// (0x0003842a) bg_popup_sub_pane_cp22_ParamLimits

0x4b70,	// (0x0003984a) input_focus_pane_cp08_ParamLimits

0xb4db,	// (0x000401b5) popup_vitu2_query_button_pane_ParamLimits

0xb4db,	// (0x000401b5) popup_vitu2_query_button_pane

0x4b87,	// (0x00039861) popup_vitu2_query_input_button_pane

0xe3d2,	// (0x000430ac) popup_vitu2_query_window_g1_ParamLimits

0x4b91,	// (0x0003986b) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x00044701) popup_vitu2_query_window_g_ParamLimits

0x0f86,	// (0x00035c60) bg_button_pane_cp026

0xba80,	// (0x0004075a) popup_vitu2_query_input_button_pane_g1

0x0f86,	// (0x00035c60) bg_button_pane_cp025

0xe740,	// (0x0004341a) popup_vitu2_query_button_pane_t1

0x93b4,	// (0x0003e08e) main_mp3_pane_t6

0x93c4,	// (0x0003e09e) popup_slider_window_cp01

0xa8cd,	// (0x0003f5a7) cam4_battery_pane

0xa9ab,	// (0x0003f685) cam4_battery_pane_cp02

0xb7f1,	// (0x000404cb) cam4_battery_pane_cp01

0xb7f1,	// (0x000404cb) cam4_battery_pane_cp03

0xd6f9,	// (0x000423d3) cam4_battery_pane_g1

0xe74e,	// (0x00043428) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x00044805) cam4_battery_pane_g

0xd5c3,	// (0x0004229d) popup_blid_sat_info2_window_t11

0x7b9f,	// (0x0003c879) aid_size_touch_mv_arrow_left_ParamLimits

0x7bca,	// (0x0003c8a4) aid_size_touch_mv_arrow_right_ParamLimits

0x2265,	// (0x00036f3f) navi_pane_g1_ParamLimits

0x7c09,	// (0x0003c8e3) navi_pane_g2_ParamLimits

0x7c37,	// (0x0003c911) navi_pane_g3_ParamLimits

0xf3f5,	// (0x000440cf) navi_pane_g_ParamLimits

0x7c91,	// (0x0003c96b) navi_pane_mv_t1_ParamLimits

0x9e8d,	// (0x0003eb67) grid_imed_effect_pane_ParamLimits

0x683d,	// (0x0003b517) aid_placing_vt_slider_lsc

0x1a2e,	// (0x00036708) aid_placing_vt_slider_prt

0x14b5,	// (0x0003618f) bg_tb_trans_pane_cp01_ParamLimits

0xd880,	// (0x0004255a) popup_image_details_window_g1_ParamLimits

0xd893,	// (0x0004256d) popup_image_details_window_g2_ParamLimits

0xd8a8,	// (0x00042582) popup_image_details_window_g3_ParamLimits

0xd8a8,	// (0x00042582) popup_image_details_window_g3

0xf728,	// (0x00044402) popup_image_details_window_g_ParamLimits

0xd8bc,	// (0x00042596) popup_image_details_window_t1_ParamLimits

0xd8ce,	// (0x000425a8) popup_image_details_window_t2_ParamLimits

0xd8e7,	// (0x000425c1) popup_image_details_window_t3_ParamLimits

0xd8fb,	// (0x000425d5) popup_image_details_window_t4_ParamLimits

0xd916,	// (0x000425f0) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x00044409) popup_image_details_window_t_ParamLimits

0xb708,	// (0x000403e2) cl_header_name_pane_ParamLimits

0xb708,	// (0x000403e2) cl_header_name_pane

0xba88,	// (0x00040762) cl_header_name_pane_t1_ParamLimits

0xba88,	// (0x00040762) cl_header_name_pane_t1

0xba9f,	// (0x00040779) cl_header_name_pane_t2_ParamLimits

0xba9f,	// (0x00040779) cl_header_name_pane_t2

0xbac9,	// (0x000407a3) cl_header_name_pane_t3_ParamLimits

0xbac9,	// (0x000407a3) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x0004480a) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x0004480a) cl_header_name_pane_t

0x7c62,	// (0x0003c93c) navi_pane_mv_g2_ParamLimits

0xe11e,	// (0x00042df8) field_vitu2_entry_pane_g1_ParamLimits

0xe12a,	// (0x00042e04) field_vitu2_entry_pane_g2_ParamLimits

0xe136,	// (0x00042e10) field_vitu2_entry_pane_g3_ParamLimits

0xe136,	// (0x00042e10) field_vitu2_entry_pane_g3

0xf926,	// (0x00044600) field_vitu2_entry_pane_g_ParamLimits

0xabe3,	// (0x0003f8bd) cell_vitu2_itu_pane_g1_ParamLimits

0xabf3,	// (0x0003f8cd) cell_vitu2_itu_pane_g2_ParamLimits

0xabf3,	// (0x0003f8cd) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x0004460c) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x0004460c) cell_vitu2_itu_pane_g

0x14b5,	// (0x0003618f) bg_vkb2_func_pane_cp05_ParamLimits

0x14b5,	// (0x0003618f) bg_vkb2_func_pane_cp05

0x14b5,	// (0x0003618f) bg_vkb2_func_pane_cp03

0x14b5,	// (0x0003618f) bg_vkb2_func_pane_cp04

0x14b5,	// (0x0003618f) bg_vkb2_func_pane_cp10_ParamLimits

0x14b5,	// (0x0003618f) bg_vkb2_func_pane_cp10

0x4d46,	// (0x00039a20) bg_vkb2_func_pane_cp08

0xb6b2,	// (0x0004038c) bg_vkb2_func_pane_cp06

0xb6c0,	// (0x0004039a) bg_vkb2_func_pane_cp07

0xe646,	// (0x00043320) bg_vkb2_func_pane_cp11_ParamLimits

0xe646,	// (0x00043320) bg_vkb2_func_pane_cp11

0xe65b,	// (0x00043335) bg_vkb2_func_pane_cp12_ParamLimits

0xe65b,	// (0x00043335) bg_vkb2_func_pane_cp12

0x0f86,	// (0x00035c60) bg_vkb2_func_pane_cp09

0xe156,	// (0x00042e30) bg_vkb2_func_pane_g1

0x1bf0,	// (0x000368ca) bg_vkb2_func_pane_g2

0xe15e,	// (0x00042e38) bg_vkb2_func_pane_g3

0xe166,	// (0x00042e40) bg_vkb2_func_pane_g4

0xe395,	// (0x0004306f) bg_vkb2_func_pane_g5

0xe17e,	// (0x00042e58) bg_vkb2_func_pane_g6

0xe186,	// (0x00042e60) bg_vkb2_func_pane_g7

0xe176,	// (0x00042e50) bg_vkb2_func_pane_g8

0x1bd0,	// (0x000368aa) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x00044811) bg_vkb2_func_pane_g

0xb9d5,	// (0x000406af) blid2_tripm_pane_g6_ParamLimits

0xb9d5,	// (0x000406af) blid2_tripm_pane_g6

0xdfa4,	// (0x00042c7e) mp4_progress_pane_g1

0xba31,	// (0x0004070b) blid2_tripm_values_pane_ParamLimits

0xba31,	// (0x0004070b) blid2_tripm_values_pane

0xbaee,	// (0x000407c8) blid2_tripm_values_pane_t1

0xbafc,	// (0x000407d6) blid2_tripm_values_pane_t2

0xbb0a,	// (0x000407e4) blid2_tripm_values_pane_t3

0xbb18,	// (0x000407f2) blid2_tripm_values_pane_t4

0xbb26,	// (0x00040800) blid2_tripm_values_pane_t5

0xbb34,	// (0x0004080e) blid2_tripm_values_pane_t6

0xbb42,	// (0x0004081c) blid2_tripm_values_pane_t7

0xbb50,	// (0x0004082a) blid2_tripm_values_pane_t8

0xbb5e,	// (0x00040838) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x00044824) blid2_tripm_values_pane_t

0x687d,	// (0x0003b557) call_video_pane_t1_ParamLimits

0x689e,	// (0x0003b578) call_video_pane_t2_ParamLimits

0xf27e,	// (0x00043f58) call_video_pane_t_ParamLimits

0x48d2,	// (0x000395ac) msg_header_pane_g1_ParamLimits

0x248e,	// (0x00037168) msg_header_pane_g2_ParamLimits

0x248e,	// (0x00037168) msg_header_pane_g2

0x0001,

0xf498,	// (0x00044172) msg_header_pane_g_ParamLimits

0xf498,	// (0x00044172) msg_header_pane_g

0x1721,	// (0x000363fb) main_clock2_pane_ParamLimits

0x9c23,	// (0x0003e8fd) grid_clock2_toolbar_pane_ParamLimits

0x9c23,	// (0x0003e8fd) grid_clock2_toolbar_pane

0x9c23,	// (0x0003e8fd) listscroll_clock2_pane_ParamLimits

0x9c23,	// (0x0003e8fd) listscroll_clock2_pane

0x9cc0,	// (0x0003e99a) main_clock2_pane_t3_ParamLimits

0x9cc0,	// (0x0003e99a) main_clock2_pane_t3

0x9cd2,	// (0x0003e9ac) main_clock2_pane_t4_ParamLimits

0x9cd2,	// (0x0003e9ac) main_clock2_pane_t4

0xe758,	// (0x00043432) cell_clock2_toolbar_pane

0xe760,	// (0x0004343a) cell_clock2_toolbar_pane_cp01

0xe760,	// (0x0004343a) cell_clock2_toolbar_pane_cp02

0xe768,	// (0x00043442) cell_clock2_toolbar_pane_cp03

0xe770,	// (0x0004344a) list_clock2_pane

0x21b8,	// (0x00036e92) scroll_pane_cp10

0xe778,	// (0x00043452) list_single_clock2_pane_ParamLimits

0xe778,	// (0x00043452) list_single_clock2_pane

0x2305,	// (0x00036fdf) list_highlight_pane_cp08

0xe785,	// (0x0004345f) list_single_clock2_pane_t1

0xe793,	// (0x0004346d) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x00044837) list_single_clock2_pane_t

0x0f86,	// (0x00035c60) bg_button_pane_cp10

0xe7a1,	// (0x0004347b) cell_clock2_toolbar_pane_g1

0x8173,	// (0x0003ce4d) aid_main_viewer_pane_g1_ParamLimits

0x8173,	// (0x0003ce4d) aid_main_viewer_pane_g1

0x817f,	// (0x0003ce59) aid_main_viewer_pane_g2_ParamLimits

0x817f,	// (0x0003ce59) aid_main_viewer_pane_g2

0x818b,	// (0x0003ce65) aid_main_viewer_pane_g3_ParamLimits

0x818b,	// (0x0003ce65) aid_main_viewer_pane_g3

0x819c,	// (0x0003ce76) aid_main_viewer_pane_g4_ParamLimits

0x819c,	// (0x0003ce76) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x00044183) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x00044183) aid_main_viewer_pane_g

0x892c,	// (0x0003d606) main_calc_pane_ParamLimits

0x8939,	// (0x0003d613) main_dialer2_pane_ParamLimits

0x0f86,	// (0x00035c60) main_cam6_pane

0x0f86,	// (0x00035c60) main_vid6_pane

0x9c2f,	// (0x0003e909) listscroll_gen_pane_cp06_ParamLimits

0x9c2f,	// (0x0003e909) listscroll_gen_pane_cp06

0x9ce4,	// (0x0003e9be) main_clock2_pane_t5_ParamLimits

0x9ce4,	// (0x0003e9be) main_clock2_pane_t5

0x9d33,	// (0x0003ea0d) aid_call2_pane_cp10_ParamLimits

0x9d45,	// (0x0003ea1f) aid_call_pane_cp10_ParamLimits

0x223a,	// (0x00036f14) popup_clock_analogue_window_cp10_g1_ParamLimits

0x223a,	// (0x00036f14) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9d57,	// (0x0003ea31) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9d57,	// (0x0003ea31) popup_clock_analogue_window_cp10_g4_ParamLimits

0x223a,	// (0x00036f14) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x000444b9) popup_clock_analogue_window_cp10_g_ParamLimits

0x9d6d,	// (0x0003ea47) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa54c,	// (0x0003f226) cell_dialer2_keypad_pane_g2_ParamLimits

0xa54c,	// (0x0003f226) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x0004459f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x0004459f) cell_dialer2_keypad_pane_g

0xa568,	// (0x0003f242) cell_dialer2_keypad_pane_t1

0xaf19,	// (0x0003fbf3) main_cset_text2_pane_ParamLimits

0xaf19,	// (0x0003fbf3) main_cset_text2_pane

0xe5ae,	// (0x00043288) area_vitu2_query_pane_g1_ParamLimits

0x4c71,	// (0x0003994b) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x00044754) area_vitu2_query_pane_g_ParamLimits

0x4d22,	// (0x000399fc) area_vitu2_query_pane_t7_ParamLimits

0x4d22,	// (0x000399fc) area_vitu2_query_pane_t7

0xb6b2,	// (0x0004038c) bg_button_pane_cp018_ParamLimits

0xb6c0,	// (0x0004039a) bg_button_pane_cp021_ParamLimits

0x4d46,	// (0x00039a20) bg_button_pane_cp022_ParamLimits

0x4d46,	// (0x00039a20) bg_vkb2_func_pane_cp08_ParamLimits

0xb6b2,	// (0x0004038c) bg_vkb2_func_pane_cp06_ParamLimits

0xb6c0,	// (0x0004039a) bg_vkb2_func_pane_cp07_ParamLimits

0x4d57,	// (0x00039a31) input_focus_pane_cp09_ParamLimits

0xbb6c,	// (0x00040846) cam6_autofocus_pane_ParamLimits

0xbb6c,	// (0x00040846) cam6_autofocus_pane

0xbb8e,	// (0x00040868) cam6_image_uncrop_pane_ParamLimits

0xbb8e,	// (0x00040868) cam6_image_uncrop_pane

0xbbbb,	// (0x00040895) cam6_indi_pane_ParamLimits

0xbbbb,	// (0x00040895) cam6_indi_pane

0xbbd5,	// (0x000408af) cam6_mode_pane_ParamLimits

0xbbd5,	// (0x000408af) cam6_mode_pane

0xbbe9,	// (0x000408c3) cam6_timer_pane_ParamLimits

0xbbe9,	// (0x000408c3) cam6_timer_pane

0xbbf5,	// (0x000408cf) cam6_zoom_pane_ParamLimits

0xbbf5,	// (0x000408cf) cam6_zoom_pane

0xbc0d,	// (0x000408e7) cam6_mode_pane_g1_ParamLimits

0xbc0d,	// (0x000408e7) cam6_mode_pane_g1

0xbc19,	// (0x000408f3) cam6_mode_pane_g2_ParamLimits

0xbc19,	// (0x000408f3) cam6_mode_pane_g2

0xbc25,	// (0x000408ff) cam6_mode_pane_g3_ParamLimits

0xbc25,	// (0x000408ff) cam6_mode_pane_g3

0xbc31,	// (0x0004090b) cam6_mode_pane_g4_ParamLimits

0xbc31,	// (0x0004090b) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x0004483c) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x0004483c) cam6_mode_pane_g

0xdfea,	// (0x00042cc4) bg_tb_trans_pane_cp08_ParamLimits

0xdfea,	// (0x00042cc4) bg_tb_trans_pane_cp08

0xe7a9,	// (0x00043483) cam6_battery_pane_ParamLimits

0xe7a9,	// (0x00043483) cam6_battery_pane

0xe7bf,	// (0x00043499) cam6_indi_pane_g1_ParamLimits

0xe7bf,	// (0x00043499) cam6_indi_pane_g1

0xe7d1,	// (0x000434ab) cam6_indi_pane_g2_ParamLimits

0xe7d1,	// (0x000434ab) cam6_indi_pane_g2

0xe7e3,	// (0x000434bd) cam6_indi_pane_g3_ParamLimits

0xe7e3,	// (0x000434bd) cam6_indi_pane_g3

0x0002,

0xfb6b,	// (0x00044845) cam6_indi_pane_g_ParamLimits

0xfb6b,	// (0x00044845) cam6_indi_pane_g

0xe7f5,	// (0x000434cf) cam6_indi_pane_t1_ParamLimits

0xe7f5,	// (0x000434cf) cam6_indi_pane_t1

0xaa1f,	// (0x0003f6f9) cam6_autofocus_pane_g1

0xaa27,	// (0x0003f701) cam6_autofocus_pane_g2

0xaa2f,	// (0x0003f709) cam6_autofocus_pane_g3

0xaa37,	// (0x0003f711) cam6_autofocus_pane_g4

0x0003,

0xfb72,	// (0x0004484c) cam6_autofocus_pane_g

0xe81b,	// (0x000434f5) cam6_timer_pane_g1

0xe823,	// (0x000434fd) cam6_timer_pane_t1

0xe831,	// (0x0004350b) cam6_zoom_cont_pane

0xe839,	// (0x00043513) cam6_zoom_pane_g1

0xe841,	// (0x0004351b) cam6_zoom_pane_g2

0xbc3d,	// (0x00040917) cam6_zoom_pane_g3

0x0002,

0xfb7b,	// (0x00044855) cam6_zoom_pane_g

0xd6f9,	// (0x000423d3) cam6_battery_pane_g1

0xd6f9,	// (0x000423d3) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x000443c6) cam6_battery_pane_g

0xe849,	// (0x00043523) cam6_zoom_cont_pane_g1

0xe852,	// (0x0004352c) cam6_zoom_cont_pane_g2

0xe85b,	// (0x00043535) cam6_zoom_cont_pane_g3

0x0002,

0xfb82,	// (0x0004485c) cam6_zoom_cont_pane_g

0xbc5a,	// (0x00040934) cam6_mode_pane_cp_ParamLimits

0xbc5a,	// (0x00040934) cam6_mode_pane_cp

0xbbf5,	// (0x000408cf) cam6_zoom_pane_cp_ParamLimits

0xbbf5,	// (0x000408cf) cam6_zoom_pane_cp

0xbc6e,	// (0x00040948) vid6_image_uncrop_cif_pane_ParamLimits

0xbc6e,	// (0x00040948) vid6_image_uncrop_cif_pane

0xbc9a,	// (0x00040974) vid6_image_uncrop_nhd_pane_ParamLimits

0xbc9a,	// (0x00040974) vid6_image_uncrop_nhd_pane

0xbb8e,	// (0x00040868) vid6_image_uncrop_vga_pane_ParamLimits

0xbb8e,	// (0x00040868) vid6_image_uncrop_vga_pane

0xbcb7,	// (0x00040991) vid6_image_uncrop_wvga_pane_ParamLimits

0xbcb7,	// (0x00040991) vid6_image_uncrop_wvga_pane

0xbcd4,	// (0x000409ae) vid6_indi_pane_ParamLimits

0xbcd4,	// (0x000409ae) vid6_indi_pane

0xdfea,	// (0x00042cc4) bg_tb_trans_pane_cp09_ParamLimits

0xdfea,	// (0x00042cc4) bg_tb_trans_pane_cp09

0xe873,	// (0x0004354d) cam6_battery_pane_cp_ParamLimits

0xe873,	// (0x0004354d) cam6_battery_pane_cp

0xe87f,	// (0x00043559) vid6_indi_pane_g1_ParamLimits

0xe87f,	// (0x00043559) vid6_indi_pane_g1

0xe891,	// (0x0004356b) vid6_indi_pane_g2_ParamLimits

0xe891,	// (0x0004356b) vid6_indi_pane_g2

0xe8a3,	// (0x0004357d) vid6_indi_pane_g3_ParamLimits

0xe8a3,	// (0x0004357d) vid6_indi_pane_g3

0xe8b8,	// (0x00043592) vid6_indi_pane_g4_ParamLimits

0xe8b8,	// (0x00043592) vid6_indi_pane_g4

0xe8cd,	// (0x000435a7) vid6_indi_pane_g5_ParamLimits

0xe8cd,	// (0x000435a7) vid6_indi_pane_g5

0x0004,

0xfb89,	// (0x00044863) vid6_indi_pane_g_ParamLimits

0xfb89,	// (0x00044863) vid6_indi_pane_g

0xe8e7,	// (0x000435c1) vid6_indi_pane_t1_ParamLimits

0xe8e7,	// (0x000435c1) vid6_indi_pane_t1

0xe8fd,	// (0x000435d7) vid6_indi_pane_t2_ParamLimits

0xe8fd,	// (0x000435d7) vid6_indi_pane_t2

0xe925,	// (0x000435ff) vid6_indi_pane_t3_ParamLimits

0xe925,	// (0x000435ff) vid6_indi_pane_t3

0xe94d,	// (0x00043627) vid6_indi_pane_t4_ParamLimits

0xe94d,	// (0x00043627) vid6_indi_pane_t4

0x0003,

0xfb94,	// (0x0004486e) vid6_indi_pane_t_ParamLimits

0xfb94,	// (0x0004486e) vid6_indi_pane_t

0xe971,	// (0x0004364b) wait_bar_pane_cp08

0xbcf7,	// (0x000409d1) main_cset_text2_pane_t1_ParamLimits

0xbcf7,	// (0x000409d1) main_cset_text2_pane_t1

0xbc45,	// (0x0004091f) listscroll_gen_pane_cp06_t1_ParamLimits

0xbc45,	// (0x0004091f) listscroll_gen_pane_cp06_t1

0x0f86,	// (0x00035c60) main_cam6_set_pane

0xd960,	// (0x0004263a) bg_tb_trans_pane_cp06_ParamLimits

0xa8d5,	// (0x0003f5af) cam4_indicators_pane_g1_ParamLimits

0xa8e6,	// (0x0003f5c0) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x000445dc) cam4_indicators_pane_g_ParamLimits

0xa904,	// (0x0003f5de) cam4_indicators_pane_t1_ParamLimits

0x14b5,	// (0x0003618f) bg_tb_trans_pane_cp07_ParamLimits

0xa9b3,	// (0x0003f68d) vid4_indicators_pane_g1_ParamLimits

0xa9c7,	// (0x0003f6a1) vid4_indicators_pane_g2_ParamLimits

0xa9db,	// (0x0003f6b5) vid4_indicators_pane_g3_ParamLimits

0xa9ec,	// (0x0003f6c6) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x000445ee) vid4_indicators_pane_g_ParamLimits

0xaa08,	// (0x0003f6e2) vid4_indicators_pane_t1_ParamLimits

0xb7f9,	// (0x000404d3) vid4_progress_pane_g1_ParamLimits

0xb80b,	// (0x000404e5) vid4_progress_pane_g2_ParamLimits

0xb81d,	// (0x000404f7) vid4_progress_pane_g3_ParamLimits

0xb829,	// (0x00040503) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x0004479f) vid4_progress_pane_g_ParamLimits

0xb847,	// (0x00040521) vid4_progress_pane_t1_ParamLimits

0xb85c,	// (0x00040536) vid4_progress_pane_t2_ParamLimits

0xb872,	// (0x0004054c) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x000447aa) vid4_progress_pane_t_ParamLimits

0xb887,	// (0x00040561) wait_bar_pane_cp07_ParamLimits

0xbd35,	// (0x00040a0f) main_cam6_set_pane_g2_ParamLimits

0xbd35,	// (0x00040a0f) main_cam6_set_pane_g2

0xbd41,	// (0x00040a1b) main_cset6_listscroll_pane_ParamLimits

0xbd41,	// (0x00040a1b) main_cset6_listscroll_pane

0xbd6c,	// (0x00040a46) main_cset6_slider_pane_ParamLimits

0xbd6c,	// (0x00040a46) main_cset6_slider_pane

0xbd78,	// (0x00040a52) main_cset6_text2_pane_ParamLimits

0xbd78,	// (0x00040a52) main_cset6_text2_pane

0xe980,	// (0x0004365a) main_cset6_text_pane

0xe988,	// (0x00043662) main_cset_list_pane_copy1_ParamLimits

0xe988,	// (0x00043662) main_cset_list_pane_copy1

0xe998,	// (0x00043672) scroll_pane_cp028_copy1

0xbd8b,	// (0x00040a65) cset_list_set_pane_copy1

0xbda5,	// (0x00040a7f) aid_position_infowindow_above_copy1

0xbdad,	// (0x00040a87) aid_position_infowindow_below_copy1

0x4db0,	// (0x00039a8a) cset_list_set_pane_g1_copy1

0x4ae5,	// (0x000397bf) cset_list_set_pane_g3_copy1_ParamLimits

0x4ae5,	// (0x000397bf) cset_list_set_pane_g3_copy1

0x4af4,	// (0x000397ce) cset_list_set_pane_t1_copy1_ParamLimits

0x4af4,	// (0x000397ce) cset_list_set_pane_t1_copy1

0x14b5,	// (0x0003618f) list_highlight_pane_cp021_copy1_ParamLimits

0x14b5,	// (0x0003618f) list_highlight_pane_cp021_copy1

0xe9a1,	// (0x0004367b) cset6_slider_pane_ParamLimits

0xe9a1,	// (0x0004367b) cset6_slider_pane

0xe9cd,	// (0x000436a7) main_cset6_slider_pane_g1_ParamLimits

0xe9cd,	// (0x000436a7) main_cset6_slider_pane_g1

0xbdb5,	// (0x00040a8f) main_cset6_slider_pane_g2_ParamLimits

0xbdb5,	// (0x00040a8f) main_cset6_slider_pane_g2

0xe285,	// (0x00042f5f) main_cset6_slider_pane_g3_ParamLimits

0xe285,	// (0x00042f5f) main_cset6_slider_pane_g3

0xbddd,	// (0x00040ab7) main_cset6_slider_pane_g4_ParamLimits

0xbddd,	// (0x00040ab7) main_cset6_slider_pane_g4

0xbde9,	// (0x00040ac3) main_cset6_slider_pane_g5_ParamLimits

0xbde9,	// (0x00040ac3) main_cset6_slider_pane_g5

0xe285,	// (0x00042f5f) main_cset6_slider_pane_g7_ParamLimits

0xe285,	// (0x00042f5f) main_cset6_slider_pane_g7

0xe291,	// (0x00042f6b) main_cset6_slider_pane_g8_ParamLimits

0xe291,	// (0x00042f6b) main_cset6_slider_pane_g8

0xbdf7,	// (0x00040ad1) main_cset6_slider_pane_g9_ParamLimits

0xbdf7,	// (0x00040ad1) main_cset6_slider_pane_g9

0xbe03,	// (0x00040add) main_cset6_slider_pane_g10_ParamLimits

0xbe03,	// (0x00040add) main_cset6_slider_pane_g10

0xbddd,	// (0x00040ab7) main_cset6_slider_pane_g11_ParamLimits

0xbddd,	// (0x00040ab7) main_cset6_slider_pane_g11

0xbe0f,	// (0x00040ae9) main_cset6_slider_pane_g12_ParamLimits

0xbe0f,	// (0x00040ae9) main_cset6_slider_pane_g12

0xbe1b,	// (0x00040af5) main_cset6_slider_pane_g13_ParamLimits

0xbe1b,	// (0x00040af5) main_cset6_slider_pane_g13

0xbe29,	// (0x00040b03) main_cset6_slider_pane_g14_ParamLimits

0xbe29,	// (0x00040b03) main_cset6_slider_pane_g14

0xbe37,	// (0x00040b11) main_cset6_slider_pane_g15_ParamLimits

0xbe37,	// (0x00040b11) main_cset6_slider_pane_g15

0xbde9,	// (0x00040ac3) main_cset6_slider_pane_g16_ParamLimits

0xbde9,	// (0x00040ac3) main_cset6_slider_pane_g16

0xbe4f,	// (0x00040b29) main_cset6_slider_pane_g17_ParamLimits

0xbe4f,	// (0x00040b29) main_cset6_slider_pane_g17

0x0011,

0xfb9d,	// (0x00044877) main_cset6_slider_pane_g_ParamLimits

0xfb9d,	// (0x00044877) main_cset6_slider_pane_g

0xe9f5,	// (0x000436cf) main_cset6_slider_pane_t1_ParamLimits

0xe9f5,	// (0x000436cf) main_cset6_slider_pane_t1

0xbe5d,	// (0x00040b37) main_cset6_slider_pane_t2_ParamLimits

0xbe5d,	// (0x00040b37) main_cset6_slider_pane_t2

0xbe88,	// (0x00040b62) main_cset6_slider_pane_t3_ParamLimits

0xbe88,	// (0x00040b62) main_cset6_slider_pane_t3

0xbeb3,	// (0x00040b8d) main_cset6_slider_pane_t4_ParamLimits

0xbeb3,	// (0x00040b8d) main_cset6_slider_pane_t4

0xbee0,	// (0x00040bba) main_cset6_slider_pane_t5_ParamLimits

0xbee0,	// (0x00040bba) main_cset6_slider_pane_t5

0xea36,	// (0x00043710) main_cset6_slider_pane_t7_ParamLimits

0xea36,	// (0x00043710) main_cset6_slider_pane_t7

0xbf0d,	// (0x00040be7) main_cset6_slider_pane_t8_ParamLimits

0xbf0d,	// (0x00040be7) main_cset6_slider_pane_t8

0xbf31,	// (0x00040c0b) main_cset6_slider_pane_t9_ParamLimits

0xbf31,	// (0x00040c0b) main_cset6_slider_pane_t9

0xbf55,	// (0x00040c2f) main_cset6_slider_pane_t10_ParamLimits

0xbf55,	// (0x00040c2f) main_cset6_slider_pane_t10

0xbf79,	// (0x00040c53) main_cset6_slider_pane_t11_ParamLimits

0xbf79,	// (0x00040c53) main_cset6_slider_pane_t11

0xea6c,	// (0x00043746) main_cset6_slider_pane_t14_ParamLimits

0xea6c,	// (0x00043746) main_cset6_slider_pane_t14

0xeaa5,	// (0x0004377f) main_cset6_slider_pane_t15_ParamLimits

0xeaa5,	// (0x0004377f) main_cset6_slider_pane_t15

0x000b,

0xfbc2,	// (0x0004489c) main_cset6_slider_pane_t_ParamLimits

0xfbc2,	// (0x0004489c) main_cset6_slider_pane_t

0xe349,	// (0x00043023) cset_slider_pane_g1_copy1

0xe352,	// (0x0004302c) cset_slider_pane_g2_copy1

0xe35b,	// (0x00043035) cset_slider_pane_g3_copy1

0x0f86,	// (0x00035c60) bg_popup_sub_pane_cp011_copy1

0xeade,	// (0x000437b8) main_cset_text_pane_g1_copy1

0xe3e6,	// (0x000430c0) main_cset_text_pane_t1_copy1

0xe3f4,	// (0x000430ce) main_cset_text_pane_t2_copy1

0xe402,	// (0x000430dc) main_cset_text_pane_t3_copy1

0xe410,	// (0x000430ea) main_cset_text_pane_t4_copy1

0xe41e,	// (0x000430f8) main_cset_text_pane_t5_copy1

0xeae6,	// (0x000437c0) main_cset_text_pane_t6_copy1

0xeaf4,	// (0x000437ce) main_cset_text_pane_t7_copy1

0xbf9f,	// (0x00040c79) main_cset_text2_pane_t1_copy1

0x14b5,	// (0x0003618f) main_ncimui_pane

0x898a,	// (0x0003d664) popup_query_ncimui_window_ParamLimits

0x898a,	// (0x0003d664) popup_query_ncimui_window

0x4997,	// (0x00039671) field_cale_ev2_pane_g4_ParamLimits

0x4997,	// (0x00039671) field_cale_ev2_pane_g4

0xa26a,	// (0x0003ef44) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa26a,	// (0x0003ef44) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x0004457a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x0004457a) cell_video_dialer_keypad_pane_g

0xa282,	// (0x0003ef5c) cell_video_dialer_keypad_pane_t1

0x0f86,	// (0x00035c60) bg_popup_window_pane_cp012

0x2088,	// (0x00036d62) heading_pane_cp06

0xeb2c,	// (0x00043806) ncim_query_content_pane

0x0f86,	// (0x00035c60) bg_popup_heading_pane_cp01

0xeb34,	// (0x0004380e) ncim_heading_pane_t1

0xeb42,	// (0x0004381c) ncim_indicator_popup_pane

0xeb54,	// (0x0004382e) ncim_query_button_pane

0xeb68,	// (0x00043842) ncim_query_content_pane_t1

0xeb7a,	// (0x00043854) ncim_query_content_pane_t2

0x0005,

0xfc06,	// (0x000448e0) ncim_query_content_pane_t

0xebb4,	// (0x0004388e) ncim_query_list_pane

0xebc6,	// (0x000438a0) ncim_query_popup_pane

0xeb42,	// (0x0004381c) ncim_indicator_popup_pane_ParamLimits

0xc0fd,	// (0x00040dd7) ncim_query_content_pane_g1_ParamLimits

0xc0fd,	// (0x00040dd7) ncim_query_content_pane_g1

0xeb68,	// (0x00043842) ncim_query_content_pane_t1_ParamLimits

0xeb7a,	// (0x00043854) ncim_query_content_pane_t2_ParamLimits

0xc109,	// (0x00040de3) ncim_query_content_pane_t3_ParamLimits

0xc109,	// (0x00040de3) ncim_query_content_pane_t3

0xc126,	// (0x00040e00) ncim_query_content_pane_t4_ParamLimits

0xc126,	// (0x00040e00) ncim_query_content_pane_t4

0xc143,	// (0x00040e1d) ncim_query_content_pane_t5_ParamLimits

0xc143,	// (0x00040e1d) ncim_query_content_pane_t5

0xeb8c,	// (0x00043866) ncim_query_content_pane_t6_ParamLimits

0xeb8c,	// (0x00043866) ncim_query_content_pane_t6

0xfc06,	// (0x000448e0) ncim_query_content_pane_t_ParamLimits

0xebb4,	// (0x0004388e) ncim_query_list_pane_ParamLimits

0xebc6,	// (0x000438a0) ncim_query_popup_pane_ParamLimits

0xebda,	// (0x000438b4) wait_bar_pane_cp04

0x0f86,	// (0x00035c60) input_focus_pane_cp011

0xebe2,	// (0x000438bc) ncim_query_popup_pane_t1

0xebf0,	// (0x000438ca) ncim_list_query_list_pane_ParamLimits

0xebf0,	// (0x000438ca) ncim_list_query_list_pane

0x0f86,	// (0x00035c60) bg_button_pane_cp027

0xec03,	// (0x000438dd) ncim_query_button_pane_g1

0x0f86,	// (0x00035c60) list_highlight_pane_cp012

0xec0d,	// (0x000438e7) ncim_list_query_list_pane_g1

0xec15,	// (0x000438ef) ncim_list_query_list_pane_t1

0xa8f5,	// (0x0003f5cf) cam4_indicators_pane_g3_ParamLimits

0xa8f5,	// (0x0003f5cf) cam4_indicators_pane_g3

0xa9f8,	// (0x0003f6d2) vid4_indicators_pane_g5_ParamLimits

0xa9f8,	// (0x0003f6d2) vid4_indicators_pane_g5

0xb838,	// (0x00040512) vid4_progress_pane_g5_ParamLimits

0xb838,	// (0x00040512) vid4_progress_pane_g5

0xbfe9,	// (0x00040cc3) main_ncimui_pane_g1

0xc051,	// (0x00040d2b) ncimui_group_query_pane_ParamLimits

0xc051,	// (0x00040d2b) ncimui_group_query_pane

0xc099,	// (0x00040d73) ncimui_list_pane_ParamLimits

0xc099,	// (0x00040d73) ncimui_list_pane

0xc0c0,	// (0x00040d9a) ncimui_text_pane_ParamLimits

0xc0c0,	// (0x00040d9a) ncimui_text_pane

0xc160,	// (0x00040e3a) ncimui_text_pane_t1_ParamLimits

0xc160,	// (0x00040e3a) ncimui_text_pane_t1

0xec23,	// (0x000438fd) ncimui_list_single_graphic_pane_ParamLimits

0xec23,	// (0x000438fd) ncimui_list_single_graphic_pane

0xc17f,	// (0x00040e59) ncimui_query_pane_ParamLimits

0xc17f,	// (0x00040e59) ncimui_query_pane

0x0f86,	// (0x00035c60) list_highlight_pane_cp013

0xec33,	// (0x0004390d) ncim_list_query_list_pane_t1_copy1

0xec0d,	// (0x000438e7) ncim_list_single_graphic_pane_g1

0xec41,	// (0x0004391b) ncim_query_button_pane_cp01

0xec4d,	// (0x00043927) ncim_query_entry_pane_ParamLimits

0xec4d,	// (0x00043927) ncim_query_entry_pane

0xec60,	// (0x0004393a) ncimui_query_pane_g1

0xec6c,	// (0x00043946) ncimui_query_pane_t1_ParamLimits

0xec6c,	// (0x00043946) ncimui_query_pane_t1

0x14b5,	// (0x0003618f) input_focus_pane_cp012

0xec85,	// (0x0004395f) ncim_query_entry_pane_t1

0x1721,	// (0x000363fb) main_im_pane_ParamLimits

0x14b5,	// (0x0003618f) main_mobtv_pane_ParamLimits

0x14b5,	// (0x0003618f) main_mobtv_pane

0xbdf7,	// (0x00040ad1) main_cset6_slider_pane_g18_ParamLimits

0xbdf7,	// (0x00040ad1) main_cset6_slider_pane_g18

0xbe1b,	// (0x00040af5) main_cset6_slider_pane_g19_ParamLimits

0xbe1b,	// (0x00040af5) main_cset6_slider_pane_g19

0xe136,	// (0x00042e10) bg_main_mobtv_pane_ParamLimits

0xe136,	// (0x00042e10) bg_main_mobtv_pane

0xc192,	// (0x00040e6c) main_mobtv_info_pane

0xc19d,	// (0x00040e77) main_mobtv_loading_pane_ParamLimits

0xc19d,	// (0x00040e77) main_mobtv_loading_pane

0xec97,	// (0x00043971) main_mobtv_pg_channel_list_pane

0xeca1,	// (0x0004397b) main_mobtv_pg_hdr_pane

0xc1aa,	// (0x00040e84) main_mobtv_programe_curr_pane_ParamLimits

0xc1aa,	// (0x00040e84) main_mobtv_programe_curr_pane

0xc1b7,	// (0x00040e91) main_mobtv_programe_next_pane_ParamLimits

0xc1b7,	// (0x00040e91) main_mobtv_programe_next_pane

0xecaa,	// (0x00043984) popup_mobtv_noti_window

0xd6f9,	// (0x000423d3) main_tv_pg_hdr_pane_g1

0xecb2,	// (0x0004398c) main_tv_pg_hdr_pane_g2

0xecba,	// (0x00043994) main_tv_pg_hdr_pane_g3

0xecc2,	// (0x0004399c) main_tv_pg_hdr_pane_g4

0xecca,	// (0x000439a4) main_tv_pg_hdr_pane_g5

0xecd4,	// (0x000439ae) main_tv_pg_hdr_pane_g6

0xecde,	// (0x000439b8) main_tv_pg_hdr_pane_g7

0xece8,	// (0x000439c2) main_tv_pg_hdr_pane_g8

0xecf2,	// (0x000439cc) main_tv_pg_hdr_pane_g9

0xecfc,	// (0x000439d6) main_tv_pg_hdr_pane_g10

0xed06,	// (0x000439e0) main_tv_pg_hdr_pane_g11

0x000a,

0xfc13,	// (0x000448ed) main_tv_pg_hdr_pane_g

0xed10,	// (0x000439ea) main_tv_pg_hdr_pane_t1

0xed1e,	// (0x000439f8) main_tv_pg_hdr_pane_t2

0xed2c,	// (0x00043a06) main_tv_pg_hdr_pane_t3

0xed3c,	// (0x00043a16) main_tv_pg_hdr_pane_t4

0xed4c,	// (0x00043a26) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2a,	// (0x00044904) main_tv_pg_hdr_pane_t

0xed5c,	// (0x00043a36) single_mobtv_pg_channel_pane_ParamLimits

0xed5c,	// (0x00043a36) single_mobtv_pg_channel_pane

0xed6e,	// (0x00043a48) single_mobtv_pg_channel_table_pane

0xed77,	// (0x00043a51) single_mobtv_pg_channel_thumb_pane

0xed80,	// (0x00043a5a) single_tv_pg_channel_pane_g1

0xed89,	// (0x00043a63) single_tv_pg_channel_pane_g2

0x0001,

0xfc35,	// (0x0004490f) single_tv_pg_channel_pane_g

0xd960,	// (0x0004263a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd960,	// (0x0004263a) bg_single_mobtv_pg_channel_thumb_pane

0xed92,	// (0x00043a6c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xed92,	// (0x00043a6c) single_mobtv_pg_channel_thumb_pane_g1

0xeda0,	// (0x00043a7a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xeda0,	// (0x00043a7a) single_mobtv_pg_channel_thumb_pane_g2

0xedac,	// (0x00043a86) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xedac,	// (0x00043a86) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3a,	// (0x00044914) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3a,	// (0x00044914) single_mobtv_pg_channel_thumb_pane_g

0xedb8,	// (0x00043a92) single_mobtv_pg_channel_thumb_pane_t1

0xedc6,	// (0x00043aa0) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc41,	// (0x0004491b) single_mobtv_pg_channel_thumb_pane_t

0xd6f9,	// (0x000423d3) bg_single_mobtv_pg_channel_table_pane_g1

0xd6f9,	// (0x000423d3) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x000443c6) bg_single_mobtv_pg_channel_table_pane_g

0xedd4,	// (0x00043aae) single_mobtv_pg_channel_table_pane_t1

0xede2,	// (0x00043abc) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc46,	// (0x00044920) single_mobtv_pg_channel_table_pane_t

0xc1cc,	// (0x00040ea6) main_mobtv_info_pane_g1_ParamLimits

0xc1cc,	// (0x00040ea6) main_mobtv_info_pane_g1

0xc1e8,	// (0x00040ec2) main_mobtv_info_pane_t1_ParamLimits

0xc1e8,	// (0x00040ec2) main_mobtv_info_pane_t1

0xc260,	// (0x00040f3a) main_mobtv_info_pane_t2_ParamLimits

0xc260,	// (0x00040f3a) main_mobtv_info_pane_t2

0x0002,

0xfc50,	// (0x0004492a) main_mobtv_info_pane_t_ParamLimits

0xfc50,	// (0x0004492a) main_mobtv_info_pane_t

0xc2ef,	// (0x00040fc9) wait_bar_pane_cp05

0xc301,	// (0x00040fdb) main_mobtv_loading_pane_g1_ParamLimits

0xc301,	// (0x00040fdb) main_mobtv_loading_pane_g1

0xc30f,	// (0x00040fe9) main_mobtv_loading_pane_g2_ParamLimits

0xc30f,	// (0x00040fe9) main_mobtv_loading_pane_g2

0xc31b,	// (0x00040ff5) main_mobtv_loading_pane_g3_ParamLimits

0xc31b,	// (0x00040ff5) main_mobtv_loading_pane_g3

0x0002,

0xfc57,	// (0x00044931) main_mobtv_loading_pane_g_ParamLimits

0xfc57,	// (0x00044931) main_mobtv_loading_pane_g

0xedf0,	// (0x00043aca) main_mobtv_loading_pane_t1_ParamLimits

0xedf0,	// (0x00043aca) main_mobtv_loading_pane_t1

0xee08,	// (0x00043ae2) main_mobtv_loading_pane_t2_ParamLimits

0xee08,	// (0x00043ae2) main_mobtv_loading_pane_t2

0x0001,

0xfc5e,	// (0x00044938) main_mobtv_loading_pane_t_ParamLimits

0xfc5e,	// (0x00044938) main_mobtv_loading_pane_t

0xc329,	// (0x00041003) wait_bar_pane_cp06_ParamLimits

0xc329,	// (0x00041003) wait_bar_pane_cp06

0xee2c,	// (0x00043b06) main_mobtv_programe_curr_pane_t1

0xee3a,	// (0x00043b14) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc63,	// (0x0004493d) main_mobtv_programe_curr_pane_t

0xee48,	// (0x00043b22) main_mobtv_programe_next_pane_t1

0xee56,	// (0x00043b30) main_mobtv_programe_next_pane_t2

0xee64,	// (0x00043b3e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc68,	// (0x00044942) main_mobtv_programe_next_pane_t

0x0f86,	// (0x00035c60) bg_popup_mobtv_noti_window_pane

0xee72,	// (0x00043b4c) popup_mobtv_noti_window_g1

0xee7a,	// (0x00043b54) popup_mobtv_noti_window_t1

0xee88,	// (0x00043b62) popup_mobtv_noti_window_t2

0x0001,

0xfc6f,	// (0x00044949) popup_mobtv_noti_window_t

0xd6f9,	// (0x000423d3) bg_popup_mobtv_noti_window_pane_g1

0x0f86,	// (0x00035c60) sc_clock_pane

0x0f86,	// (0x00035c60) main_fs_bigclock_pane

0xba1f,	// (0x000406f9) blid2_tripm_pane_t4_ParamLimits

0xba1f,	// (0x000406f9) blid2_tripm_pane_t4

0xc335,	// (0x0004100f) sc_clock_pane_g1_ParamLimits

0xc335,	// (0x0004100f) sc_clock_pane_g1

0xc343,	// (0x0004101d) sc_clock_pane_t1_ParamLimits

0xc343,	// (0x0004101d) sc_clock_pane_t1

0xc356,	// (0x00041030) sc_clock_pane_t2_ParamLimits

0xc356,	// (0x00041030) sc_clock_pane_t2

0xc368,	// (0x00041042) sc_clock_pane_t3_ParamLimits

0xc368,	// (0x00041042) sc_clock_pane_t3

0x0004,

0xfc74,	// (0x0004494e) sc_clock_pane_t_ParamLimits

0xfc74,	// (0x0004494e) sc_clock_pane_t

0xcbae,	// (0x00041888) main_fs_bigclock_indicator_pane_ParamLimits

0xcbae,	// (0x00041888) main_fs_bigclock_indicator_pane

0xc3f4,	// (0x000410ce) main_fs_bigclock_pane_g1_ParamLimits

0xc3f4,	// (0x000410ce) main_fs_bigclock_pane_g1

0xcbba,	// (0x00041894) main_fs_bigclock_pane_t1_ParamLimits

0xcbba,	// (0x00041894) main_fs_bigclock_pane_t1

0xcbcc,	// (0x000418a6) main_fs_bigclock_pane_t2_ParamLimits

0xcbcc,	// (0x000418a6) main_fs_bigclock_pane_t2

0xcbde,	// (0x000418b8) main_fs_bigclock_pane_t3_ParamLimits

0xcbde,	// (0x000418b8) main_fs_bigclock_pane_t3

0x0002,

0xfe78,	// (0x00044b52) main_fs_bigclock_pane_t_ParamLimits

0xfe78,	// (0x00044b52) main_fs_bigclock_pane_t

0x0ab3,	// (0x0003578d) main_fs_bigclock_indicator_pane_g1

0xeb5c,	// (0x00043836) ncim_query_content_pane_g2_ParamLimits

0xeb5c,	// (0x00043836) ncim_query_content_pane_g2

0x0001,

0xfc01,	// (0x000448db) ncim_query_content_pane_g_ParamLimits

0xfc01,	// (0x000448db) ncim_query_content_pane_g

0xc37c,	// (0x00041056) sc_clock_pane_t4_ParamLimits

0xc37c,	// (0x00041056) sc_clock_pane_t4

0x14b5,	// (0x0003618f) main_radioblah_pane

0xe0a7,	// (0x00042d81) cell_call4_button_pane_t1_copy1_ParamLimits

0xe0a7,	// (0x00042d81) cell_call4_button_pane_t1_copy1

0xc003,	// (0x00040cdd) main_ncimui_pane_t1_ParamLimits

0xc003,	// (0x00040cdd) main_ncimui_pane_t1

0xc01d,	// (0x00040cf7) main_ncimui_pane_t2_ParamLimits

0xc01d,	// (0x00040cf7) main_ncimui_pane_t2

0x0002,

0xfbfa,	// (0x000448d4) main_ncimui_pane_t_ParamLimits

0xfbfa,	// (0x000448d4) main_ncimui_pane_t

0xefd1,	// (0x00043cab) main_radioblah_anim_pane_ParamLimits

0xefd1,	// (0x00043cab) main_radioblah_anim_pane

0xefe2,	// (0x00043cbc) main_radioblah_info_pane_ParamLimits

0xefe2,	// (0x00043cbc) main_radioblah_info_pane

0xeff6,	// (0x00043cd0) main_radioblah_pane_t1_ParamLimits

0xeff6,	// (0x00043cd0) main_radioblah_pane_t1

0xf012,	// (0x00043cec) main_radioblah_pane_t2_ParamLimits

0xf012,	// (0x00043cec) main_radioblah_pane_t2

0x0003,

0xfc95,	// (0x0004496f) main_radioblah_pane_t_ParamLimits

0xfc95,	// (0x0004496f) main_radioblah_pane_t

0xc446,	// (0x00041120) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc446,	// (0x00041120) main_radioblah_rocker_ctrl_pane

0xf05a,	// (0x00043d34) main_radioblah_info_pane_t1_ParamLimits

0xf05a,	// (0x00043d34) main_radioblah_info_pane_t1

0xc48b,	// (0x00041165) main_radioblah_info_pane_t2_ParamLimits

0xc48b,	// (0x00041165) main_radioblah_info_pane_t2

0x0003,

0xfc9e,	// (0x00044978) main_radioblah_info_pane_t_ParamLimits

0xfc9e,	// (0x00044978) main_radioblah_info_pane_t

0xd6f9,	// (0x000423d3) main_radioblah_rocker_ctrl_pane_g1

0xc53b,	// (0x00041215) main_radioblah_rocker_ctrl_pane_g2

0xc543,	// (0x0004121d) main_radioblah_rocker_ctrl_pane_g3

0xc54b,	// (0x00041225) main_radioblah_rocker_ctrl_pane_g4

0xc553,	// (0x0004122d) main_radioblah_rocker_ctrl_pane_g5

0xc55b,	// (0x00041235) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca7,	// (0x00044981) main_radioblah_rocker_ctrl_pane_g

0xbf9f,	// (0x00040c79) main_cset_text2_pane_t1_copy1_ParamLimits

0xa823,	// (0x0003f4fd) cam4_image_uncrop_qvga_pane

0xa96a,	// (0x0003f644) vid4_image_uncrop_qcif_pane

0xbbad,	// (0x00040887) cam6_image_uncrop_qvga_pane_ParamLimits

0xbbad,	// (0x00040887) cam6_image_uncrop_qvga_pane

0xe863,	// (0x0004353d) vid6_image_uncrop_qcif_pane_ParamLimits

0xe863,	// (0x0004353d) vid6_image_uncrop_qcif_pane

0x0f86,	// (0x00035c60) bg_popup_preview_window_pane_cp03

0xeb02,	// (0x000437dc) list_cset_text2_pane

0xeb0a,	// (0x000437e4) main_cset6_text2_pane_g1

0xeb12,	// (0x000437ec) main_cset6_text2_pane_t1

0xc563,	// (0x0004123d) list_cset_text2_pane_t1_ParamLimits

0xc563,	// (0x0004123d) list_cset_text2_pane_t1

0x14b5,	// (0x0003618f) main_radioblah_pane_ParamLimits

0xc2db,	// (0x00040fb5) main_mobtv_info_pane_t3_ParamLimits

0xc2db,	// (0x00040fb5) main_mobtv_info_pane_t3

0xc434,	// (0x0004110e) main_radioblah_pane_g1

0xc45f,	// (0x00041139) main_radioblah_info_pane_g1

0xc4e0,	// (0x000411ba) main_radioblah_info_pane_t3_ParamLimits

0xc4e0,	// (0x000411ba) main_radioblah_info_pane_t3

0x7654,	// (0x0003c32e) highlight_cell_cale_month_pane_ParamLimits

0x7654,	// (0x0003c32e) highlight_cell_cale_month_pane

0x0f86,	// (0x00035c60) main_phob_fisheye_pane

0xda48,	// (0x00042722) scroll_pane_cp0031_ParamLimits

0xda48,	// (0x00042722) scroll_pane_cp0031

0xe971,	// (0x0004364b) wait_bar_pane_cp08_ParamLimits

0xbd8b,	// (0x00040a65) cset_list_set_pane_copy1_ParamLimits

0xf094,	// (0x00043d6e) highlight_cell_cale_month_pane_g1

0xc58e,	// (0x00041268) highlight_cell_cale_month_pane_t1

0xe602,	// (0x000432dc) list_gen_pane_cp01

0xe270,	// (0x00042f4a) scroll_pane_01

0x4e89,	// (0x00039b63) list_single_double_fisheye_pane

0x4e92,	// (0x00039b6c) list_double_fisheye_pane_g1_ParamLimits

0x4e92,	// (0x00039b6c) list_double_fisheye_pane_g1

0x4e9e,	// (0x00039b78) list_double_fisheye_pane_g2_ParamLimits

0x4e9e,	// (0x00039b78) list_double_fisheye_pane_g2

0x4eb2,	// (0x00039b8c) list_double_fisheye_pane_g3_ParamLimits

0x4eb2,	// (0x00039b8c) list_double_fisheye_pane_g3

0x0004,

0xfcb4,	// (0x0004498e) list_double_fisheye_pane_g_ParamLimits

0xfcb4,	// (0x0004498e) list_double_fisheye_pane_g

0x4edb,	// (0x00039bb5) list_double_fisheye_pane_t1_ParamLimits

0x4edb,	// (0x00039bb5) list_double_fisheye_pane_t1

0x4ef6,	// (0x00039bd0) list_double_fisheye_pane_t2_ParamLimits

0x4ef6,	// (0x00039bd0) list_double_fisheye_pane_t2

0x0001,

0xfcbf,	// (0x00044999) list_double_fisheye_pane_t_ParamLimits

0xfcbf,	// (0x00044999) list_double_fisheye_pane_t

0x0f86,	// (0x00035c60) main_call5_pane

0xc3a2,	// (0x0004107c) sc_swipe_pane_ParamLimits

0xc3a2,	// (0x0004107c) sc_swipe_pane

0xc5a8,	// (0x00041282) call5_image_pane_ParamLimits

0xc5a8,	// (0x00041282) call5_image_pane

0xc5b8,	// (0x00041292) call5_swipe_1_pane_ParamLimits

0xc5b8,	// (0x00041292) call5_swipe_1_pane

0xc5c4,	// (0x0004129e) call5_swipe_2_pane_ParamLimits

0xc5c4,	// (0x0004129e) call5_swipe_2_pane

0xc5de,	// (0x000412b8) popup_call5_audio_first_window_ParamLimits

0xc5de,	// (0x000412b8) popup_call5_audio_first_window

0xd960,	// (0x0004263a) call5_swipe_1_pane_g1_ParamLimits

0xd960,	// (0x0004263a) call5_swipe_1_pane_g1

0xf0a5,	// (0x00043d7f) call5_swipe_1_pane_g2_ParamLimits

0xf0a5,	// (0x00043d7f) call5_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x0004499e) call5_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x0004499e) call5_swipe_1_pane_g

0xf0b1,	// (0x00043d8b) call5_swipe_1_pane_t1_ParamLimits

0xf0b1,	// (0x00043d8b) call5_swipe_1_pane_t1

0xd960,	// (0x0004263a) call5_swipe_2_pane_g1_ParamLimits

0xd960,	// (0x0004263a) call5_swipe_2_pane_g1

0x00b0,	// (0x00034d8a) call5_swipe_2_pane_g2_ParamLimits

0x00b0,	// (0x00034d8a) call5_swipe_2_pane_g2

0x0001,

0xfcc9,	// (0x000449a3) call5_swipe_2_pane_g_ParamLimits

0xfcc9,	// (0x000449a3) call5_swipe_2_pane_g

0x00bc,	// (0x00034d96) call5_swipe_2_pane_t1_ParamLimits

0x00bc,	// (0x00034d96) call5_swipe_2_pane_t1

0x00d1,	// (0x00034dab) sc_swipe_pane_g1_ParamLimits

0x00d1,	// (0x00034dab) sc_swipe_pane_g1

0x00de,	// (0x00034db8) sc_swipe_pane_g2_ParamLimits

0x00de,	// (0x00034db8) sc_swipe_pane_g2

0x0001,

0xfcce,	// (0x000449a8) sc_swipe_pane_g_ParamLimits

0xfcce,	// (0x000449a8) sc_swipe_pane_g

0x00ea,	// (0x00034dc4) sc_swipe_pane_t1_ParamLimits

0x00ea,	// (0x00034dc4) sc_swipe_pane_t1

0x0f86,	// (0x00035c60) main_cmail_launcher_pane

0xc5ec,	// (0x000412c6) aid_size_cell_cmail_l_ParamLimits

0xc5ec,	// (0x000412c6) aid_size_cell_cmail_l

0xc5fc,	// (0x000412d6) grid_cmail_l_pane_ParamLimits

0xc5fc,	// (0x000412d6) grid_cmail_l_pane

0xc60c,	// (0x000412e6) cell_cmail_l_pane_ParamLimits

0xc60c,	// (0x000412e6) cell_cmail_l_pane

0xc620,	// (0x000412fa) cell_cmail_l_pane_g1_ParamLimits

0xc620,	// (0x000412fa) cell_cmail_l_pane_g1

0xc62c,	// (0x00041306) cell_cmail_l_pane_t1_ParamLimits

0xc62c,	// (0x00041306) cell_cmail_l_pane_t1

0x00ff,	// (0x00034dd9) cell_cmail_l_pane_t2_ParamLimits

0x00ff,	// (0x00034dd9) cell_cmail_l_pane_t2

0x0001,

0xfcd3,	// (0x000449ad) cell_cmail_l_pane_t_ParamLimits

0xfcd3,	// (0x000449ad) cell_cmail_l_pane_t

0x14b5,	// (0x0003618f) grid_highlight_pane_cp018_ParamLimits

0x14b5,	// (0x0003618f) grid_highlight_pane_cp018

0x59b1,	// (0x0003a68b) main2_pane_ParamLimits

0x59b1,	// (0x0003a68b) main2_pane

0x17cc,	// (0x000364a6) popup_sp_fs_action_menu_bg_pane_g1

0x17d4,	// (0x000364ae) popup_sp_fs_action_menu_bg_pane_g2

0x17dc,	// (0x000364b6) popup_sp_fs_action_menu_bg_pane_g3

0x17e4,	// (0x000364be) popup_sp_fs_action_menu_bg_pane_g4

0x17ec,	// (0x000364c6) popup_sp_fs_action_menu_bg_pane_g5

0x17f4,	// (0x000364ce) popup_sp_fs_action_menu_bg_pane_g6

0x17fc,	// (0x000364d6) popup_sp_fs_action_menu_bg_pane_g7

0x1804,	// (0x000364de) popup_sp_fs_action_menu_bg_pane_g8

0x180c,	// (0x000364e6) popup_sp_fs_action_menu_bg_pane_g9

0x1814,	// (0x000364ee) popup_sp_fs_action_menu_bg_pane_g10

0x1814,	// (0x000364ee) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x00043e72) popup_sp_fs_action_menu_bg_pane_g

0x4674,	// (0x0003934e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4674,	// (0x0003934e) list_medium_line_x2_t3_g3_g1

0x4680,	// (0x0003935a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x4680,	// (0x0003935a) list_medium_line_x2_t3_g3_g2

0x468c,	// (0x00039366) list_medium_line_x2_t3_g3_g3_ParamLimits

0x468c,	// (0x00039366) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x00043f22) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x00043f22) list_medium_line_x2_t3_g3_g

0x4698,	// (0x00039372) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4698,	// (0x00039372) list_medium_line_x2_t3_g3_t1

0x46ad,	// (0x00039387) list_medium_line_x2_t3_g3_t2_ParamLimits

0x46ad,	// (0x00039387) list_medium_line_x2_t3_g3_t2

0x46c1,	// (0x0003939b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x46c1,	// (0x0003939b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x00043f29) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x00043f29) list_medium_line_x2_t3_g3_t

0x4674,	// (0x0003934e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4674,	// (0x0003934e) list_medium_line_x2_t3_g2_g1

0x468c,	// (0x00039366) list_medium_line_x2_t3_g2_g2_ParamLimits

0x468c,	// (0x00039366) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x00043f30) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x00043f30) list_medium_line_x2_t3_g2_g

0x46d6,	// (0x000393b0) list_medium_line_x2_t3_g2_t1_ParamLimits

0x46d6,	// (0x000393b0) list_medium_line_x2_t3_g2_t1

0x46ec,	// (0x000393c6) list_medium_line_x2_t3_g2_t2_ParamLimits

0x46ec,	// (0x000393c6) list_medium_line_x2_t3_g2_t2

0x46c1,	// (0x0003939b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x46c1,	// (0x0003939b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x00043f35) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x00043f35) list_medium_line_x2_t3_g2_t

0x4674,	// (0x0003934e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4674,	// (0x0003934e) list_medium_line_x2_t4_g4_g1

0x46fe,	// (0x000393d8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x46fe,	// (0x000393d8) list_medium_line_x2_t4_g4_g2

0x4680,	// (0x0003935a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x4680,	// (0x0003935a) list_medium_line_x2_t4_g4_g3

0x470a,	// (0x000393e4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x470a,	// (0x000393e4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x00043f3c) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x00043f3c) list_medium_line_x2_t4_g4_g

0x4716,	// (0x000393f0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x4716,	// (0x000393f0) list_medium_line_x2_t4_g4_t1

0x472d,	// (0x00039407) list_medium_line_x2_t4_g4_t2_ParamLimits

0x472d,	// (0x00039407) list_medium_line_x2_t4_g4_t2

0x4742,	// (0x0003941c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x4742,	// (0x0003941c) list_medium_line_x2_t4_g4_t3

0x4754,	// (0x0003942e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x4754,	// (0x0003942e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x00043f45) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x00043f45) list_medium_line_x2_t4_g4_t

0x4674,	// (0x0003934e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4674,	// (0x0003934e) list_medium_line_x2_t2_g4_g1

0x46fe,	// (0x000393d8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x46fe,	// (0x000393d8) list_medium_line_x2_t2_g4_g2

0x4680,	// (0x0003935a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x4680,	// (0x0003935a) list_medium_line_x2_t2_g4_g3

0x468c,	// (0x00039366) list_medium_line_x2_t2_g4_g4_ParamLimits

0x468c,	// (0x00039366) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x00043fac) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x00043fac) list_medium_line_x2_t2_g4_g

0x4766,	// (0x00039440) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4766,	// (0x00039440) list_medium_line_x2_t2_g4_t1

0x46c1,	// (0x0003939b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x46c1,	// (0x0003939b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x00043fb5) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x00043fb5) list_medium_line_x2_t2_g4_t

0x4674,	// (0x0003934e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4674,	// (0x0003934e) list_medium_line_x2_t2_g3_g1

0x4680,	// (0x0003935a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x4680,	// (0x0003935a) list_medium_line_x2_t2_g3_g2

0x468c,	// (0x00039366) list_medium_line_x2_t2_g3_g3_ParamLimits

0x468c,	// (0x00039366) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x00043f22) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x00043f22) list_medium_line_x2_t2_g3_g

0x477b,	// (0x00039455) list_medium_line_x2_t2_g3_t1_ParamLimits

0x477b,	// (0x00039455) list_medium_line_x2_t2_g3_t1

0x46c1,	// (0x0003939b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x46c1,	// (0x0003939b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x00043fba) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x00043fba) list_medium_line_x2_t2_g3_t

0x78d0,	// (0x0003c5aa) main_sp_fs_list_pane_ParamLimits

0x78d0,	// (0x0003c5aa) main_sp_fs_list_pane

0x78dc,	// (0x0003c5b6) sp_fs_scroll_pane_ParamLimits

0x78dc,	// (0x0003c5b6) sp_fs_scroll_pane

0x4790,	// (0x0003946a) list_medium_line_x2_t3_t1

0x47a0,	// (0x0003947a) list_medium_line_x2_t3_t2

0x47ae,	// (0x00039488) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x00044005) list_medium_line_x2_t3_t

0x47bc,	// (0x00039496) list_medium_line_x3_t4_t1

0x47cc,	// (0x000394a6) list_medium_line_x3_t4_t2

0x47da,	// (0x000394b4) list_medium_line_x3_t4_t3

0x47ae,	// (0x00039488) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x0004400c) list_medium_line_x3_t4_t

0x47e8,	// (0x000394c2) list_medium_line_x4_t5_t1

0x47f8,	// (0x000394d2) list_medium_line_x4_t5_t2

0x47da,	// (0x000394b4) list_medium_line_x4_t5_t3

0x4806,	// (0x000394e0) list_medium_line_x4_t5_t4

0x47ae,	// (0x00039488) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x00044015) list_medium_line_x4_t5_t

0x4674,	// (0x0003934e) list_medium_line_t4_g4_g1_ParamLimits

0x4674,	// (0x0003934e) list_medium_line_t4_g4_g1

0x470a,	// (0x000393e4) list_medium_line_t4_g4_g2_ParamLimits

0x470a,	// (0x000393e4) list_medium_line_t4_g4_g2

0x4814,	// (0x000394ee) list_medium_line_t4_g4_g3_ParamLimits

0x4814,	// (0x000394ee) list_medium_line_t4_g4_g3

0x468c,	// (0x00039366) list_medium_line_t4_g4_g4_ParamLimits

0x468c,	// (0x00039366) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x00044020) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x00044020) list_medium_line_t4_g4_g

0x4820,	// (0x000394fa) list_medium_line_t4_g4_t1_ParamLimits

0x4820,	// (0x000394fa) list_medium_line_t4_g4_t1

0x4835,	// (0x0003950f) list_medium_line_t4_g4_t2_ParamLimits

0x4835,	// (0x0003950f) list_medium_line_t4_g4_t2

0x484a,	// (0x00039524) list_medium_line_t4_g4_t3_ParamLimits

0x484a,	// (0x00039524) list_medium_line_t4_g4_t3

0x46c1,	// (0x0003939b) list_medium_line_t4_g4_t4_ParamLimits

0x46c1,	// (0x0003939b) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x00044029) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x00044029) list_medium_line_t4_g4_t

0x79cf,	// (0x0003c6a9) chi_dic_find_pane_g1

0x8947,	// (0x0003d621) main_tport_pane

0x4b09,	// (0x000397e3) list_medium_line_plain_t1

0x4b17,	// (0x000397f1) list_medium_line_t2_g2_g1_ParamLimits

0x4b17,	// (0x000397f1) list_medium_line_t2_g2_g1

0x4b23,	// (0x000397fd) list_medium_line_t2_g2_g2_ParamLimits

0x4b23,	// (0x000397fd) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x000446e5) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x000446e5) list_medium_line_t2_g2_g

0x4b2f,	// (0x00039809) list_medium_line_t2_g2_t1_ParamLimits

0x4b2f,	// (0x00039809) list_medium_line_t2_g2_t1

0x4b49,	// (0x00039823) list_medium_line_t2_g2_t2_ParamLimits

0x4b49,	// (0x00039823) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x000446ea) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x000446ea) list_medium_line_t2_g2_t

0x4d68,	// (0x00039a42) aid_sp_fs_list_icon_a_sm

0x4d70,	// (0x00039a4a) aid_sp_fs_list_icon_d

0x08d0,	// (0x000355aa) aid_sp_fs_text_primary

0x0629,	// (0x00035303) aid_sp_fs_text_secondary

0x4d78,	// (0x00039a52) list_medium_line

0x4d78,	// (0x00039a52) list_medium_line_g2

0x4d78,	// (0x00039a52) list_medium_line_g3

0x4d78,	// (0x00039a52) list_medium_line_plain

0x4d78,	// (0x00039a52) list_medium_line_plain_t2

0x4d78,	// (0x00039a52) list_medium_line_plain_t3

0x4d78,	// (0x00039a52) list_medium_line_right_icon

0x4d78,	// (0x00039a52) list_medium_line_right_iconx2

0x4d78,	// (0x00039a52) list_medium_line_t2

0x4d78,	// (0x00039a52) list_medium_line_t2_g2

0x4d78,	// (0x00039a52) list_medium_line_t2_g3

0x4d78,	// (0x00039a52) list_medium_line_t2_right_icon

0x4d78,	// (0x00039a52) list_medium_line_t2_right_iconx2

0x4d78,	// (0x00039a52) list_medium_line_t3

0x4d78,	// (0x00039a52) list_medium_line_t3_g2

0x4d78,	// (0x00039a52) list_medium_line_t3_g3

0x4d78,	// (0x00039a52) list_medium_line_t3_right_iconx2

0x4d81,	// (0x00039a5b) list_medium_line_t4_g4

0x4d8a,	// (0x00039a64) list_medium_line_x2

0x4d8a,	// (0x00039a64) list_medium_line_x2_t2_g2

0x4d8a,	// (0x00039a64) list_medium_line_x2_t2_g3

0x4d8a,	// (0x00039a64) list_medium_line_x2_t2_g4

0x4d8a,	// (0x00039a64) list_medium_line_x2_t3

0x4d8a,	// (0x00039a64) list_medium_line_x2_t3_g2

0x4d8a,	// (0x00039a64) list_medium_line_x2_t3_g3

0x4d8a,	// (0x00039a64) list_medium_line_x2_t3_g4

0x4d8a,	// (0x00039a64) list_medium_line_x2_t4_g2

0x4d8a,	// (0x00039a64) list_medium_line_x2_t4_g4

0x4d93,	// (0x00039a6d) list_medium_line_x3

0x4d93,	// (0x00039a6d) list_medium_line_x3_t4

0x4d93,	// (0x00039a6d) list_medium_line_x3_t4_g4

0x4d81,	// (0x00039a5b) list_medium_line_x4_t4

0x4d81,	// (0x00039a5b) list_medium_line_x4_t4_g7

0x4d81,	// (0x00039a5b) list_medium_line_x4_t5

0x4d9c,	// (0x00039a76) list_single_fs_dyc_pane_ParamLimits

0x4d9c,	// (0x00039a76) list_single_fs_dyc_pane

0x4674,	// (0x0003934e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4674,	// (0x0003934e) list_medium_line_x4_t4_g7_g1

0x4db8,	// (0x00039a92) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4db8,	// (0x00039a92) list_medium_line_x4_t4_g7_g2

0x4dc4,	// (0x00039a9e) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4dc4,	// (0x00039a9e) list_medium_line_x4_t4_g7_g3

0x4dd3,	// (0x00039aad) list_medium_line_x4_t4_g7_g4_ParamLimits

0x4dd3,	// (0x00039aad) list_medium_line_x4_t4_g7_g4

0x4ddf,	// (0x00039ab9) list_medium_line_x4_t4_g7_g5_ParamLimits

0x4ddf,	// (0x00039ab9) list_medium_line_x4_t4_g7_g5

0x4dee,	// (0x00039ac8) list_medium_line_x4_t4_g7_g6_ParamLimits

0x4dee,	// (0x00039ac8) list_medium_line_x4_t4_g7_g6

0x4dfd,	// (0x00039ad7) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4dfd,	// (0x00039ad7) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdb,	// (0x000448b5) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdb,	// (0x000448b5) list_medium_line_x4_t4_g7_g

0x4e09,	// (0x00039ae3) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4e09,	// (0x00039ae3) list_medium_line_x4_t4_g7_t1

0x4e1e,	// (0x00039af8) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4e1e,	// (0x00039af8) list_medium_line_x4_t4_g7_t2

0x4e33,	// (0x00039b0d) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4e33,	// (0x00039b0d) list_medium_line_x4_t4_g7_t3

0x4e48,	// (0x00039b22) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4e48,	// (0x00039b22) list_medium_line_x4_t4_g7_t4

0x4e5a,	// (0x00039b34) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4e5a,	// (0x00039b34) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbea,	// (0x000448c4) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbea,	// (0x000448c4) list_medium_line_x4_t4_g7_t

0x4e6c,	// (0x00039b46) list_single_dyc_row_pane_ParamLimits

0x4e6c,	// (0x00039b46) list_single_dyc_row_pane

0xc59c,	// (0x00041276) call5_gesture_pane_ParamLimits

0xc59c,	// (0x00041276) call5_gesture_pane

0xc5d0,	// (0x000412aa) call5_windows_pane_ParamLimits

0xc5d0,	// (0x000412aa) call5_windows_pane

0xc642,	// (0x0004131c) call5_swipe_1_pane_cp_ParamLimits

0xc642,	// (0x0004131c) call5_swipe_1_pane_cp

0xc64e,	// (0x00041328) call5_swipe_2_pane_cp_ParamLimits

0xc64e,	// (0x00041328) call5_swipe_2_pane_cp

0x2305,	// (0x00036fdf) call5_image_pane_cp

0xc65a,	// (0x00041334) popup_call5_audio_first_window_cp_ParamLimits

0xc65a,	// (0x00041334) popup_call5_audio_first_window_cp

0x00d1,	// (0x00034dab) call5_swipe_1_pane_g1_cp_ParamLimits

0x00d1,	// (0x00034dab) call5_swipe_1_pane_g1_cp

0x0111,	// (0x00034deb) call5_swipe_1_pane_g2_cp

0x00ea,	// (0x00034dc4) call5_swipe_1_pane_t1_cp_ParamLimits

0x00ea,	// (0x00034dc4) call5_swipe_1_pane_t1_cp

0x00d1,	// (0x00034dab) call5_swipe_2_pane_g1_cp_ParamLimits

0x00d1,	// (0x00034dab) call5_swipe_2_pane_g1_cp

0x0119,	// (0x00034df3) call5_swipe_2_pane_g2_cp

0x0121,	// (0x00034dfb) call5_swipe_2_pane_t1_cp_ParamLimits

0x0121,	// (0x00034dfb) call5_swipe_2_pane_t1_cp

0x14b5,	// (0x0003618f) main_sp_fs_email_pane

0x0136,	// (0x00034e10) main_sp_fs_listscroll_pane_te

0x4f18,	// (0x00039bf2) popup_sp_fs_action_menu_pane_ParamLimits

0x4f18,	// (0x00039bf2) popup_sp_fs_action_menu_pane

0xd6f9,	// (0x000423d3) bg_sp_fs_ctrlbar_pane_g1

0x017f,	// (0x00034e59) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x0188,	// (0x00034e62) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x0191,	// (0x00034e6b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd6f9,	// (0x000423d3) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd8,	// (0x000449b2) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xd4dc,	// (0x000421b6) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xd4dc,	// (0x000421b6) bg_sp_fs_ctrlbar_ddmenu_pane

0x019a,	// (0x00034e74) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x019a,	// (0x00034e74) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x01a6,	// (0x00034e80) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x01a6,	// (0x00034e80) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce1,	// (0x000449bb) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce1,	// (0x000449bb) main_sp_fs_ctrlbar_ddmenu_pane_g

0x01b2,	// (0x00034e8c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x01b2,	// (0x00034e8c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x4f58,	// (0x00039c32) list_medium_line_t2_right_icon_g1

0x4f60,	// (0x00039c3a) list_medium_line_t2_right_icon_t1

0x4f70,	// (0x00039c4a) list_medium_line_t2_right_icon_t2

0x0001,

0xfce6,	// (0x000449c0) list_medium_line_t2_right_icon_t

0x3750,	// (0x0003842a) bg_sp_fs_ctrlbar_pane_ParamLimits

0x3750,	// (0x0003842a) bg_sp_fs_ctrlbar_pane

0xc6bd,	// (0x00041397) main_sp_fs_ctrlbar_button_pane_cp01

0xc6c5,	// (0x0004139f) main_sp_fs_ctrlbar_ddmenu_pane

0x193c,	// (0x00036616) main_sp_fs_ctrlbar_pane_g1

0x020c,	// (0x00034ee6) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfceb,	// (0x000449c5) main_sp_fs_ctrlbar_pane_g

0x0218,	// (0x00034ef2) main_sp_fs_ctrlbar_pane_t1

0x4f7e,	// (0x00039c58) main_sp_fs_ctrlbar_pane

0x4f98,	// (0x00039c72) main_sp_fs_listscroll_pane_te_cp01

0x4fa9,	// (0x00039c83) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x4fa9,	// (0x00039c83) popup_sp_fs_action_menu_pane_cp01

0x14b5,	// (0x0003618f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x14b5,	// (0x0003618f) bg_sp_fs_highlight_list_pane_cp01

0x4fcd,	// (0x00039ca7) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x4fcd,	// (0x00039ca7) sp_fs_action_menu_list_gene_pane_g1

0x024c,	// (0x00034f26) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x024c,	// (0x00034f26) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf5,	// (0x000449cf) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf5,	// (0x000449cf) sp_fs_action_menu_list_gene_pane_g

0x4fdc,	// (0x00039cb6) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x4fdc,	// (0x00039cb6) sp_fs_action_menu_list_gene_pane_t1

0x4ff4,	// (0x00039cce) sp_fs_action_menu_list_gene_pane_ParamLimits

0x4ff4,	// (0x00039cce) sp_fs_action_menu_list_gene_pane

0x028e,	// (0x00034f68) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x028e,	// (0x00034f68) popup_sp_fs_action_menu_bg_pane

0x5011,	// (0x00039ceb) sp_fs_action_menu_list_pane_ParamLimits

0x5011,	// (0x00039ceb) sp_fs_action_menu_list_pane

0x02ba,	// (0x00034f94) sp_fs_scroll_pane_cp01_ParamLimits

0x02ba,	// (0x00034f94) sp_fs_scroll_pane_cp01

0x502f,	// (0x00039d09) list_medium_line_plain_t2_t1

0x503f,	// (0x00039d19) list_medium_line_plain_t2_t2

0x0001,

0xfcfa,	// (0x000449d4) list_medium_line_plain_t2_t

0x504d,	// (0x00039d27) list_medium_line_plain_t3_t1

0x505d,	// (0x00039d37) list_medium_line_plain_t3_t2

0x506b,	// (0x00039d45) list_medium_line_plain_t3_t3

0x0002,

0xfcff,	// (0x000449d9) list_medium_line_plain_t3_t

0x4674,	// (0x0003934e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4674,	// (0x0003934e) list_medium_line_x2_t2_g2_g1

0x468c,	// (0x00039366) list_medium_line_x2_t2_g2_g2_ParamLimits

0x468c,	// (0x00039366) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x00043f30) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x00043f30) list_medium_line_x2_t2_g2_g

0x4820,	// (0x000394fa) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4820,	// (0x000394fa) list_medium_line_x2_t2_g2_t1

0x46c1,	// (0x0003939b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x46c1,	// (0x0003939b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd06,	// (0x000449e0) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd06,	// (0x000449e0) list_medium_line_x2_t2_g2_t

0x4674,	// (0x0003934e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4674,	// (0x0003934e) list_medium_line_x2_t4_g2_g1

0x5079,	// (0x00039d53) list_medium_line_x2_t4_g2_g2_ParamLimits

0x5079,	// (0x00039d53) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0b,	// (0x000449e5) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0b,	// (0x000449e5) list_medium_line_x2_t4_g2_g

0x508b,	// (0x00039d65) list_medium_line_x2_t4_g2_t1_ParamLimits

0x508b,	// (0x00039d65) list_medium_line_x2_t4_g2_t1

0x50a5,	// (0x00039d7f) list_medium_line_x2_t4_g2_t2_ParamLimits

0x50a5,	// (0x00039d7f) list_medium_line_x2_t4_g2_t2

0x50ba,	// (0x00039d94) list_medium_line_x2_t4_g2_t3_ParamLimits

0x50ba,	// (0x00039d94) list_medium_line_x2_t4_g2_t3

0x46c1,	// (0x0003939b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x46c1,	// (0x0003939b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd10,	// (0x000449ea) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd10,	// (0x000449ea) list_medium_line_x2_t4_g2_t

0x50cf,	// (0x00039da9) list_medium_line_t3_right_iconx2_g1

0x4f58,	// (0x00039c32) list_medium_line_t3_right_iconx2_g2

0x50d7,	// (0x00039db1) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd19,	// (0x000449f3) list_medium_line_t3_right_iconx2_g

0x50df,	// (0x00039db9) list_medium_line_t3_right_iconx2_t1

0x50ef,	// (0x00039dc9) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd20,	// (0x000449fa) list_medium_line_t3_right_iconx2_t

0x4674,	// (0x0003934e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4674,	// (0x0003934e) list_medium_line_x3_t4_g4_g1

0x4680,	// (0x0003935a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x4680,	// (0x0003935a) list_medium_line_x3_t4_g4_g2

0x470a,	// (0x000393e4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x470a,	// (0x000393e4) list_medium_line_x3_t4_g4_g3

0x50fd,	// (0x00039dd7) list_medium_line_x3_t4_g4_g4_ParamLimits

0x50fd,	// (0x00039dd7) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd25,	// (0x000449ff) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd25,	// (0x000449ff) list_medium_line_x3_t4_g4_g

0x5109,	// (0x00039de3) list_medium_line_x3_t4_g4_t1_ParamLimits

0x5109,	// (0x00039de3) list_medium_line_x3_t4_g4_t1

0x5120,	// (0x00039dfa) list_medium_line_x3_t4_g4_t2_ParamLimits

0x5120,	// (0x00039dfa) list_medium_line_x3_t4_g4_t2

0x4835,	// (0x0003950f) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4835,	// (0x0003950f) list_medium_line_x3_t4_g4_t3

0x5135,	// (0x00039e0f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5135,	// (0x00039e0f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2e,	// (0x00044a08) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2e,	// (0x00044a08) list_medium_line_x3_t4_g4_t

0x5152,	// (0x00039e2c) list_single_dyc_row_text_pane_t1_ParamLimits

0x5152,	// (0x00039e2c) list_single_dyc_row_text_pane_t1

0x5189,	// (0x00039e63) list_single_dyc_row_text_pane_t2_ParamLimits

0x5189,	// (0x00039e63) list_single_dyc_row_text_pane_t2

0x51e3,	// (0x00039ebd) list_single_dyc_row_text_pane_t3_ParamLimits

0x51e3,	// (0x00039ebd) list_single_dyc_row_text_pane_t3

0x0002,

0xfd37,	// (0x00044a11) list_single_dyc_row_text_pane_t_ParamLimits

0xfd37,	// (0x00044a11) list_single_dyc_row_text_pane_t

0x51f5,	// (0x00039ecf) list_single_dyc_row_pane_g1_ParamLimits

0x51f5,	// (0x00039ecf) list_single_dyc_row_pane_g1

0x5201,	// (0x00039edb) list_single_dyc_row_pane_g2_ParamLimits

0x5201,	// (0x00039edb) list_single_dyc_row_pane_g2

0x520d,	// (0x00039ee7) list_single_dyc_row_pane_g3_ParamLimits

0x520d,	// (0x00039ee7) list_single_dyc_row_pane_g3

0x5219,	// (0x00039ef3) list_single_dyc_row_pane_g4_ParamLimits

0x5219,	// (0x00039ef3) list_single_dyc_row_pane_g4

0x0003,

0xfd3e,	// (0x00044a18) list_single_dyc_row_pane_g_ParamLimits

0xfd3e,	// (0x00044a18) list_single_dyc_row_pane_g

0x5225,	// (0x00039eff) list_single_dyc_row_text_pane_ParamLimits

0x5225,	// (0x00039eff) list_single_dyc_row_text_pane

0x0f86,	// (0x00035c60) bg_sp_fs_scroll_pane

0x0372,	// (0x0003504c) thumb_sp_fs_scroll_pane

0x4b17,	// (0x000397f1) list_medium_line_g1_ParamLimits

0x4b17,	// (0x000397f1) list_medium_line_g1

0x5244,	// (0x00039f1e) list_medium_line_t1_ParamLimits

0x5244,	// (0x00039f1e) list_medium_line_t1

0x4674,	// (0x0003934e) list_medium_line_x2_g1_ParamLimits

0x4674,	// (0x0003934e) list_medium_line_x2_g1

0x4680,	// (0x0003935a) list_medium_line_x2_g2_ParamLimits

0x4680,	// (0x0003935a) list_medium_line_x2_g2

0x0001,

0xfd47,	// (0x00044a21) list_medium_line_x2_g_ParamLimits

0xfd47,	// (0x00044a21) list_medium_line_x2_g

0x5259,	// (0x00039f33) list_medium_line_x2_t1_ParamLimits

0x5259,	// (0x00039f33) list_medium_line_x2_t1

0x4674,	// (0x0003934e) list_medium_line_x3_g1_ParamLimits

0x4674,	// (0x0003934e) list_medium_line_x3_g1

0x4680,	// (0x0003935a) list_medium_line_x3_g2_ParamLimits

0x4680,	// (0x0003935a) list_medium_line_x3_g2

0x0001,

0xfd47,	// (0x00044a21) list_medium_line_x3_g_ParamLimits

0xfd47,	// (0x00044a21) list_medium_line_x3_g

0x5259,	// (0x00039f33) list_medium_line_x3_t1_ParamLimits

0x5259,	// (0x00039f33) list_medium_line_x3_t1

0x03a6,	// (0x00035080) thumb_sp_fs_scroll_pane_g1

0x03af,	// (0x00035089) thumb_sp_fs_scroll_pane_g2

0x03b8,	// (0x00035092) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x00044a26) thumb_sp_fs_scroll_pane_g

0x03a6,	// (0x00035080) bg_sp_fs_scroll_pane_g1

0x03af,	// (0x00035089) bg_sp_fs_scroll_pane_g2

0x03b8,	// (0x00035092) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x00044a26) bg_sp_fs_scroll_pane_g

0x4674,	// (0x0003934e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4674,	// (0x0003934e) list_medium_line_x2_t3_g4_g1

0x46fe,	// (0x000393d8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x46fe,	// (0x000393d8) list_medium_line_x2_t3_g4_g2

0x4680,	// (0x0003935a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x4680,	// (0x0003935a) list_medium_line_x2_t3_g4_g3

0x468c,	// (0x00039366) list_medium_line_x2_t3_g4_g4_ParamLimits

0x468c,	// (0x00039366) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x00043fac) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x00043fac) list_medium_line_x2_t3_g4_g

0x526f,	// (0x00039f49) list_medium_line_x2_t3_g4_t1_ParamLimits

0x526f,	// (0x00039f49) list_medium_line_x2_t3_g4_t1

0x5285,	// (0x00039f5f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x5285,	// (0x00039f5f) list_medium_line_x2_t3_g4_t2

0x46c1,	// (0x0003939b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x46c1,	// (0x0003939b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd53,	// (0x00044a2d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd53,	// (0x00044a2d) list_medium_line_x2_t3_g4_t

0x4b17,	// (0x000397f1) list_medium_line_g2_g1_ParamLimits

0x4b17,	// (0x000397f1) list_medium_line_g2_g1

0x4b23,	// (0x000397fd) list_medium_line_g2_g2_ParamLimits

0x4b23,	// (0x000397fd) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x000446e5) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x000446e5) list_medium_line_g2_g

0x529e,	// (0x00039f78) list_medium_line_g2_t1_ParamLimits

0x529e,	// (0x00039f78) list_medium_line_g2_t1

0x4b17,	// (0x000397f1) list_medium_line_t3_g2_g1_ParamLimits

0x4b17,	// (0x000397f1) list_medium_line_t3_g2_g1

0x4b23,	// (0x000397fd) list_medium_line_t3_g2_g2_ParamLimits

0x4b23,	// (0x000397fd) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x000446e5) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x000446e5) list_medium_line_t3_g2_g

0x52b3,	// (0x00039f8d) list_medium_line_t3_g2_t1_ParamLimits

0x52b3,	// (0x00039f8d) list_medium_line_t3_g2_t1

0x52cd,	// (0x00039fa7) list_medium_line_t3_g2_t2_ParamLimits

0x52cd,	// (0x00039fa7) list_medium_line_t3_g2_t2

0x52e2,	// (0x00039fbc) list_medium_line_t3_g2_t3_ParamLimits

0x52e2,	// (0x00039fbc) list_medium_line_t3_g2_t3

0x0002,

0xfd5a,	// (0x00044a34) list_medium_line_t3_g2_t_ParamLimits

0xfd5a,	// (0x00044a34) list_medium_line_t3_g2_t

0x4f58,	// (0x00039c32) list_medium_line_right_icon_g1

0x52f8,	// (0x00039fd2) list_medium_line_right_icon_t1

0x4b17,	// (0x000397f1) list_medium_line_t2_g1_ParamLimits

0x4b17,	// (0x000397f1) list_medium_line_t2_g1

0x5306,	// (0x00039fe0) list_medium_line_t2_t1_ParamLimits

0x5306,	// (0x00039fe0) list_medium_line_t2_t1

0x531d,	// (0x00039ff7) list_medium_line_t2_t2_ParamLimits

0x531d,	// (0x00039ff7) list_medium_line_t2_t2

0x0001,

0xfd61,	// (0x00044a3b) list_medium_line_t2_t_ParamLimits

0xfd61,	// (0x00044a3b) list_medium_line_t2_t

0x4b17,	// (0x000397f1) list_medium_line_t3_g1_ParamLimits

0x4b17,	// (0x000397f1) list_medium_line_t3_g1

0x532f,	// (0x0003a009) list_medium_line_t3_t1_ParamLimits

0x532f,	// (0x0003a009) list_medium_line_t3_t1

0x5346,	// (0x0003a020) list_medium_line_t3_t2_ParamLimits

0x5346,	// (0x0003a020) list_medium_line_t3_t2

0x535b,	// (0x0003a035) list_medium_line_t3_t3_ParamLimits

0x535b,	// (0x0003a035) list_medium_line_t3_t3

0x0002,

0xfd66,	// (0x00044a40) list_medium_line_t3_t_ParamLimits

0xfd66,	// (0x00044a40) list_medium_line_t3_t

0x4b17,	// (0x000397f1) list_medium_line_g3_g1_ParamLimits

0x4b17,	// (0x000397f1) list_medium_line_g3_g1

0x536d,	// (0x0003a047) list_medium_line_g3_g2_ParamLimits

0x536d,	// (0x0003a047) list_medium_line_g3_g2

0x4b23,	// (0x000397fd) list_medium_line_g3_g3_ParamLimits

0x4b23,	// (0x000397fd) list_medium_line_g3_g3

0x0002,

0xfd6d,	// (0x00044a47) list_medium_line_g3_g_ParamLimits

0xfd6d,	// (0x00044a47) list_medium_line_g3_g

0x5379,	// (0x0003a053) list_medium_line_g3_t1_ParamLimits

0x5379,	// (0x0003a053) list_medium_line_g3_t1

0x4b17,	// (0x000397f1) list_medium_line_t2_g3_g1_ParamLimits

0x4b17,	// (0x000397f1) list_medium_line_t2_g3_g1

0x536d,	// (0x0003a047) list_medium_line_t2_g3_g2_ParamLimits

0x536d,	// (0x0003a047) list_medium_line_t2_g3_g2

0x4b23,	// (0x000397fd) list_medium_line_t2_g3_g3_ParamLimits

0x4b23,	// (0x000397fd) list_medium_line_t2_g3_g3

0x0002,

0xfd6d,	// (0x00044a47) list_medium_line_t2_g3_g_ParamLimits

0xfd6d,	// (0x00044a47) list_medium_line_t2_g3_g

0x538e,	// (0x0003a068) list_medium_line_t2_g3_t1_ParamLimits

0x538e,	// (0x0003a068) list_medium_line_t2_g3_t1

0x53a8,	// (0x0003a082) list_medium_line_t2_g3_t2_ParamLimits

0x53a8,	// (0x0003a082) list_medium_line_t2_g3_t2

0x0001,

0xfd74,	// (0x00044a4e) list_medium_line_t2_g3_t_ParamLimits

0xfd74,	// (0x00044a4e) list_medium_line_t2_g3_t

0x4b17,	// (0x000397f1) list_medium_line_t3_g3_g1_ParamLimits

0x4b17,	// (0x000397f1) list_medium_line_t3_g3_g1

0x536d,	// (0x0003a047) list_medium_line_t3_g3_g2_ParamLimits

0x536d,	// (0x0003a047) list_medium_line_t3_g3_g2

0x4b23,	// (0x000397fd) list_medium_line_t3_g3_g3_ParamLimits

0x4b23,	// (0x000397fd) list_medium_line_t3_g3_g3

0x0002,

0xfd6d,	// (0x00044a47) list_medium_line_t3_g3_g_ParamLimits

0xfd6d,	// (0x00044a47) list_medium_line_t3_g3_g

0x53bd,	// (0x0003a097) list_medium_line_t3_g3_t1_ParamLimits

0x53bd,	// (0x0003a097) list_medium_line_t3_g3_t1

0x53d6,	// (0x0003a0b0) list_medium_line_t3_g3_t2_ParamLimits

0x53d6,	// (0x0003a0b0) list_medium_line_t3_g3_t2

0x53ec,	// (0x0003a0c6) list_medium_line_t3_g3_t3_ParamLimits

0x53ec,	// (0x0003a0c6) list_medium_line_t3_g3_t3

0x0002,

0xfd79,	// (0x00044a53) list_medium_line_t3_g3_t_ParamLimits

0xfd79,	// (0x00044a53) list_medium_line_t3_g3_t

0x50cf,	// (0x00039da9) list_medium_line_right_iconx2_g1

0x4f58,	// (0x00039c32) list_medium_line_right_iconx2_g2

0x0001,

0xfd80,	// (0x00044a5a) list_medium_line_right_iconx2_g

0x5402,	// (0x0003a0dc) list_medium_line_right_iconx2_t1

0x50cf,	// (0x00039da9) list_medium_line_t2_right_iconx2_g1

0x4f58,	// (0x00039c32) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd80,	// (0x00044a5a) list_medium_line_t2_right_iconx2_g

0x5410,	// (0x0003a0ea) list_medium_line_t2_right_iconx2_t1

0x5420,	// (0x0003a0fa) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd85,	// (0x00044a5f) list_medium_line_t2_right_iconx2_t

0x542e,	// (0x0003a108) list_medium_line_x4_t4_t1

0x543c,	// (0x0003a116) list_medium_line_x4_t4_t2

0x544c,	// (0x0003a126) list_medium_line_x4_t4_t3

0x545c,	// (0x0003a136) list_medium_line_x4_t4_t4

0x0003,

0xfd8a,	// (0x00044a64) list_medium_line_x4_t4_t

0xc6f8,	// (0x000413d2) tport_appsw_pane_ParamLimits

0xc6f8,	// (0x000413d2) tport_appsw_pane

0xc704,	// (0x000413de) tport_contact_pane_ParamLimits

0xc704,	// (0x000413de) tport_contact_pane

0xc714,	// (0x000413ee) tport_listscroll_pane_ParamLimits

0xc714,	// (0x000413ee) tport_listscroll_pane

0xc724,	// (0x000413fe) cell_tport_appsw_pane_ParamLimits

0xc724,	// (0x000413fe) cell_tport_appsw_pane

0xd9c5,	// (0x0004269f) tport_appsw_pane_g1_ParamLimits

0xd9c5,	// (0x0004269f) tport_appsw_pane_g1

0x0421,	// (0x000350fb) tport_contact_pane_g1

0x042a,	// (0x00035104) tport_contact_pane_t1

0x0438,	// (0x00035112) tport_contact_pane_t2

0x0001,

0xfd93,	// (0x00044a6d) tport_contact_pane_t

0x0446,	// (0x00035120) list_tport_pane

0x044f,	// (0x00035129) scroll_pane_cp_030

0x0460,	// (0x0003513a) cell_tport_appsw_pane_g1

0x0470,	// (0x0003514a) cell_tport_appsw_pane_t1

0x0f86,	// (0x00035c60) grid_highlight_pane_cp019

0xc74f,	// (0x00041429) list_tport_double_graphic_pane_ParamLimits

0xc74f,	// (0x00041429) list_tport_double_graphic_pane

0x14b5,	// (0x0003618f) list_highlight_pane_cp023_ParamLimits

0x14b5,	// (0x0003618f) list_highlight_pane_cp023

0xc762,	// (0x0004143c) list_tport_double_graphic_pane_g1_ParamLimits

0xc762,	// (0x0004143c) list_tport_double_graphic_pane_g1

0xc76f,	// (0x00041449) list_tport_double_graphic_pane_t1_ParamLimits

0xc76f,	// (0x00041449) list_tport_double_graphic_pane_t1

0xc784,	// (0x0004145e) list_tport_double_graphic_pane_t2_ParamLimits

0xc784,	// (0x0004145e) list_tport_double_graphic_pane_t2

0x0001,

0xfd9f,	// (0x00044a79) list_tport_double_graphic_pane_t_ParamLimits

0xfd9f,	// (0x00044a79) list_tport_double_graphic_pane_t

0x0f86,	// (0x00035c60) main_cale_note_pane

0xabbb,	// (0x0003f895) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xabbb,	// (0x0003f895) cell_vitu2_function_top_wide_pane_cp01

0xc2ef,	// (0x00040fc9) wait_bar_pane_cp05_ParamLimits

0x0f86,	// (0x00035c60) listscroll_cmail_pane

0x0486,	// (0x00035160) list_cmail_pane

0xc7a0,	// (0x0004147a) list_cmail_body_pane

0xc7c4,	// (0x0004149e) list_single_cmail_header_caption_pane

0xc7f2,	// (0x000414cc) list_single_cmail_header_detail_pane_ParamLimits

0xc7f2,	// (0x000414cc) list_single_cmail_header_detail_pane

0xc82a,	// (0x00041504) list_single_cmail_header_caption_pane_t1

0x546c,	// (0x0003a146) list_single_cmail_header_detail_pane_g1_ParamLimits

0x546c,	// (0x0003a146) list_single_cmail_header_detail_pane_g1

0x5484,	// (0x0003a15e) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5484,	// (0x0003a15e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda4,	// (0x00044a7e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda4,	// (0x00044a7e) list_single_cmail_header_detail_pane_g

0x5490,	// (0x0003a16a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5490,	// (0x0003a16a) list_single_cmail_header_detail_pane_t1

0x54e8,	// (0x0003a1c2) list_single_cmail_header_editor_pane_bg_ParamLimits

0x54e8,	// (0x0003a1c2) list_single_cmail_header_editor_pane_bg

0x0503,	// (0x000351dd) list_cmail_body_pane_g1

0x050c,	// (0x000351e6) list_cmail_body_pane_t1

0xe156,	// (0x00042e30) list_single_cmail_header_editor_pane_bg_g1

0x1bf0,	// (0x000368ca) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe166,	// (0x00042e40) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe15e,	// (0x00042e38) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe395,	// (0x0004306f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe186,	// (0x00042e60) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe176,	// (0x00042e50) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe17e,	// (0x00042e58) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1bd0,	// (0x000368aa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc83a,	// (0x00041514) calenote_gesture_pane_ParamLimits

0xc83a,	// (0x00041514) calenote_gesture_pane

0xc854,	// (0x0004152e) calenote_window_pane_ParamLimits

0xc854,	// (0x0004152e) calenote_window_pane

0x051a,	// (0x000351f4) popup_note_window_cp01

0xc86c,	// (0x00041546) calenote_swipe_1_pane_ParamLimits

0xc86c,	// (0x00041546) calenote_swipe_1_pane

0xc64e,	// (0x00041328) calenote_swipe_2_pane_ParamLimits

0xc64e,	// (0x00041328) calenote_swipe_2_pane

0x00d1,	// (0x00034dab) calenote_swipe_1_pane_g1_ParamLimits

0x00d1,	// (0x00034dab) calenote_swipe_1_pane_g1

0x00de,	// (0x00034db8) calenote_swipe_1_pane_g2_ParamLimits

0x00de,	// (0x00034db8) calenote_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x000449a8) calenote_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x000449a8) calenote_swipe_1_pane_g

0x052c,	// (0x00035206) calenote_swipe_1_pane_t1_ParamLimits

0x052c,	// (0x00035206) calenote_swipe_1_pane_t1

0x00d1,	// (0x00034dab) calenote_swipe_2_pane_g1_ParamLimits

0x00d1,	// (0x00034dab) calenote_swipe_2_pane_g1

0x054b,	// (0x00035225) calenote_swipe_2_pane_g2_ParamLimits

0x054b,	// (0x00035225) calenote_swipe_2_pane_g2

0x0001,

0xfdb0,	// (0x00044a8a) calenote_swipe_2_pane_g_ParamLimits

0xfdb0,	// (0x00044a8a) calenote_swipe_2_pane_g

0x0557,	// (0x00035231) calenote_swipe_2_pane_t1_ParamLimits

0x0557,	// (0x00035231) calenote_swipe_2_pane_t1

0x0f86,	// (0x00035c60) main_mup_navstr_pane

0x9931,	// (0x0003e60b) main_mup3_pane_t7_ParamLimits

0x9931,	// (0x0003e60b) main_mup3_pane_t7

0xa349,	// (0x0003f023) main_mp4_pane_g6_ParamLimits

0xa349,	// (0x0003f023) main_mp4_pane_g6

0xa6bd,	// (0x0003f397) main_image3_pane_t4_ParamLimits

0xa6bd,	// (0x0003f397) main_image3_pane_t4

0xc87f,	// (0x00041559) popup_navstr_preview_pane_ParamLimits

0xc87f,	// (0x00041559) popup_navstr_preview_pane

0xc88b,	// (0x00041565) scroll_navstr_pane_ParamLimits

0xc88b,	// (0x00041565) scroll_navstr_pane

0x0f86,	// (0x00035c60) bg_popup_preview_window_pane_cp04

0x057e,	// (0x00035258) popup_navstr_preview_pane_t1

0xc897,	// (0x00041571) scroll_navstr_pane_g1_ParamLimits

0xc897,	// (0x00041571) scroll_navstr_pane_g1

0xc8a4,	// (0x0004157e) scroll_navstr_pane_t1_ParamLimits

0xc8a4,	// (0x0004157e) scroll_navstr_pane_t1

0x0523,	// (0x000351fd) bg_button_pane_cp014

0x0523,	// (0x000351fd) bg_button_pane_cp030

0x4ebe,	// (0x00039b98) list_double_fisheye_pane_g4_ParamLimits

0x4ebe,	// (0x00039b98) list_double_fisheye_pane_g4

0x4eca,	// (0x00039ba4) list_double_fisheye_pane_g5_ParamLimits

0x4eca,	// (0x00039ba4) list_double_fisheye_pane_g5

0x048e,	// (0x00035168) sp_fs_scroll_pane_cp03

0x193c,	// (0x00036616) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x020c,	// (0x00034ee6) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfceb,	// (0x000449c5) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x0218,	// (0x00034ef2) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xc796,	// (0x00041470) sp_fs_scroll_pane_cp02

0x1837,	// (0x00036511) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1837,	// (0x00036511) popup_sp_fs_calendar_preview_list_single_pane

0x0f86,	// (0x00035c60) main_cam6_pano_pane

0x14b5,	// (0x0003618f) main_mup3_pane_ParamLimits

0x0f86,	// (0x00035c60) main_phacti_pane

0xc1c4,	// (0x00040e9e) bg_button_pane_cp11

0xc1dc,	// (0x00040eb6) main_mobtv_info_pane_g2_ParamLimits

0xc1dc,	// (0x00040eb6) main_mobtv_info_pane_g2

0x0001,

0xfc4b,	// (0x00044925) main_mobtv_info_pane_g_ParamLimits

0xfc4b,	// (0x00044925) main_mobtv_info_pane_g

0xc38e,	// (0x00041068) sc_clock_pane_t5_ParamLimits

0xc38e,	// (0x00041068) sc_clock_pane_t5

0xc434,	// (0x0004110e) main_radioblah_pane_g1_ParamLimits

0xf02a,	// (0x00043d04) main_radioblah_pane_t3_ParamLimits

0xf02a,	// (0x00043d04) main_radioblah_pane_t3

0xf042,	// (0x00043d1c) main_radioblah_pane_t4_ParamLimits

0xf042,	// (0x00043d1c) main_radioblah_pane_t4

0xc452,	// (0x0004112c) main_radioblah_text_pane_ParamLimits

0xc452,	// (0x0004112c) main_radioblah_text_pane

0xc45f,	// (0x00041139) main_radioblah_info_pane_g1_ParamLimits

0xc4f4,	// (0x000411ce) main_radioblah_info_pane_t4_ParamLimits

0xc4f4,	// (0x000411ce) main_radioblah_info_pane_t4

0x14b5,	// (0x0003618f) main_sp_fs_calendar_pane

0xc8b6,	// (0x00041590) main_phacti_pane_g1

0xc8be,	// (0x00041598) phacti_note_pane_ParamLimits

0xc8be,	// (0x00041598) phacti_note_pane

0x0595,	// (0x0003526f) phacti_term_pane_ParamLimits

0x0595,	// (0x0003526f) phacti_term_pane

0x05aa,	// (0x00035284) phacti_note_pane_t1_ParamLimits

0x05aa,	// (0x00035284) phacti_note_pane_t1

0x54fa,	// (0x0003a1d4) phacti_term_pane_g1

0x5502,	// (0x0003a1dc) phacti_term_pane_t1_ParamLimits

0x5502,	// (0x0003a1dc) phacti_term_pane_t1

0x05f3,	// (0x000352cd) popup_sp_fs_calendar_preview_list_single_pane_g1

0x05fb,	// (0x000352d5) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdba,	// (0x00044a94) popup_sp_fs_calendar_preview_list_single_pane_g

0x0603,	// (0x000352dd) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0603,	// (0x000352dd) popup_sp_fs_calendar_preview_list_single_pane_t1

0x0619,	// (0x000352f3) aid_popup_sp_fs_bg_corner_pane

0xd6f9,	// (0x000423d3) popup_sp_fs_calendar_preview_bg_pane_g1

0x0f86,	// (0x00035c60) popup_sp_fs_calendar_preview_bg_pane

0x0621,	// (0x000352fb) popup_sp_fs_calendar_preview_list_pane

0x14b5,	// (0x0003618f) bg_main_sp_fs_cale_pane_ParamLimits

0x14b5,	// (0x0003618f) bg_main_sp_fs_cale_pane

0x552c,	// (0x0003a206) listscroll_cale_mrui_pane_ParamLimits

0x552c,	// (0x0003a206) listscroll_cale_mrui_pane

0x5540,	// (0x0003a21a) listscroll_sp_fs_schedule_track_pane

0x5549,	// (0x0003a223) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5549,	// (0x0003a223) main_sp_fs_ctrlbar_pane_cp01

0x0660,	// (0x0003533a) main_sp_fs_ribbon_pane

0x0668,	// (0x00035342) popup_sp_fs_cale_preview_window

0xc905,	// (0x000415df) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc905,	// (0x000415df) list_single_sp_fs_schedule_track_pane

0x5b35,	// (0x0003a80f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x5b35,	// (0x0003a80f) bg_sp_fs_highlight_list_pane_cp03

0xc92d,	// (0x00041607) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc92d,	// (0x00041607) list_single_sp_fs_schedule_track_pane_g1

0xc939,	// (0x00041613) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc939,	// (0x00041613) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbf,	// (0x00044a99) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbf,	// (0x00044a99) list_single_sp_fs_schedule_track_pane_g

0xc945,	// (0x0004161f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc945,	// (0x0004161f) list_single_sp_fs_schedule_track_pane_t1

0xc95d,	// (0x00041637) sp_fs_schedule_track_pane_ParamLimits

0xc95d,	// (0x00041637) sp_fs_schedule_track_pane

0x067a,	// (0x00035354) sp_fs_schedule_track_pane_g1

0x0682,	// (0x0003535c) sp_fs_schedule_track_pane_g2

0x068a,	// (0x00035364) sp_fs_schedule_track_pane_g3

0x0692,	// (0x0003536c) sp_fs_schedule_track_pane_g4

0x069a,	// (0x00035374) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc4,	// (0x00044a9e) sp_fs_schedule_track_pane_g

0xe156,	// (0x00042e30) bg_sp_fs_schedule_viewer_highlight_g1

0x1bf0,	// (0x000368ca) bg_sp_fs_schedule_viewer_highlight_g2

0xe15e,	// (0x00042e38) bg_sp_fs_schedule_viewer_highlight_g3

0xe166,	// (0x00042e40) bg_sp_fs_schedule_viewer_highlight_g4

0xe395,	// (0x0004306f) bg_sp_fs_schedule_viewer_highlight_g5

0xe176,	// (0x00042e50) bg_sp_fs_schedule_viewer_highlight_g6

0xe17e,	// (0x00042e58) bg_sp_fs_schedule_viewer_highlight_g7

0xe186,	// (0x00042e60) bg_sp_fs_schedule_viewer_highlight_g8

0x1bd0,	// (0x000368aa) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdcf,	// (0x00044aa9) bg_sp_fs_schedule_viewer_highlight_g

0x0f86,	// (0x00035c60) bg_main_sp_fs_ribbon_pane

0xc96d,	// (0x00041647) main_sp_fs_ribbon_pane_g1

0x06a2,	// (0x0003537c) main_sp_fs_ribbon_pane_t1

0xc978,	// (0x00041652) main_sp_fs_ribbon_pane_t2

0x06b1,	// (0x0003538b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde2,	// (0x00044abc) main_sp_fs_ribbon_pane_t

0x06c0,	// (0x0003539a) main_sp_fs_ribbon_scheduler_pane

0x06c8,	// (0x000353a2) bg_main_sp_fs_ribbon_pane_g1

0x06d1,	// (0x000353ab) bg_main_sp_fs_ribbon_pane_g2

0x06da,	// (0x000353b4) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde9,	// (0x00044ac3) bg_main_sp_fs_ribbon_pane_g

0x06e2,	// (0x000353bc) main_sp_fs_ribbon_scheduler_pane_g1

0x06eb,	// (0x000353c5) main_sp_fs_ribbon_scheduler_pane_g2

0x06f4,	// (0x000353ce) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf0,	// (0x00044aca) main_sp_fs_ribbon_scheduler_pane_g

0x06fd,	// (0x000353d7) list_cale_mrui_pane

0xc989,	// (0x00041663) sp_fs_scroll_pane_cp07_ParamLimits

0xc989,	// (0x00041663) sp_fs_scroll_pane_cp07

0xc99f,	// (0x00041679) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc99f,	// (0x00041679) bg_sp_fs_schedule_viewer_highlight

0x0706,	// (0x000353e0) list_single_sp_fs_schedule_track_pane_cp01

0x070e,	// (0x000353e8) list_sp_fs_schedule_track_pane

0x0716,	// (0x000353f0) sp_fs_scroll_pane_cp06_ParamLimits

0x0716,	// (0x000353f0) sp_fs_scroll_pane_cp06

0xd6f9,	// (0x000423d3) bgmain_sp_fs_calendar_pane_g1

0x555a,	// (0x0003a234) list_single_cale_mrui_pane_ParamLimits

0x555a,	// (0x0003a234) list_single_cale_mrui_pane

0x558f,	// (0x0003a269) list_single_cale_mrui_row_pane_ParamLimits

0x558f,	// (0x0003a269) list_single_cale_mrui_row_pane

0x559c,	// (0x0003a276) list_single_cale_mrui_row_pane_g1_ParamLimits

0x559c,	// (0x0003a276) list_single_cale_mrui_row_pane_g1

0x55d4,	// (0x0003a2ae) list_single_cale_mrui_row_pane_t1_ParamLimits

0x55d4,	// (0x0003a2ae) list_single_cale_mrui_row_pane_t1

0x55e6,	// (0x0003a2c0) list_single_cale_mrui_row_pane_t2_ParamLimits

0x55e6,	// (0x0003a2c0) list_single_cale_mrui_row_pane_t2

0x564c,	// (0x0003a326) list_single_cale_mrui_row_pane_t3_ParamLimits

0x564c,	// (0x0003a326) list_single_cale_mrui_row_pane_t3

0x567b,	// (0x0003a355) list_single_cale_mrui_row_pane_t4_ParamLimits

0x567b,	// (0x0003a355) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdfe,	// (0x00044ad8) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdfe,	// (0x00044ad8) list_single_cale_mrui_row_pane_t

0x56aa,	// (0x0003a384) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x56aa,	// (0x0003a384) list_single_cmail_header_editor_pane_bg_cp01

0x56cc,	// (0x0003a3a6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x56cc,	// (0x0003a3a6) list_single_cmail_header_editor_pane_bg_cp02

0xc9ac,	// (0x00041686) main_radioblah_text_pane_t1_ParamLimits

0xc9ac,	// (0x00041686) main_radioblah_text_pane_t1

0x07ea,	// (0x000354c4) cam6_indi_pane_cp01

0x07f2,	// (0x000354cc) cam6_mode_pane_cp01

0x07fa,	// (0x000354d4) cam6_pano_pane

0x0803,	// (0x000354dd) cam6_zoom_pane_cp01

0x080b,	// (0x000354e5) cam6_pano_image_pane

0x0816,	// (0x000354f0) cam6_pano_pane_g1

0xed89,	// (0x00043a63) cam6_pano_pane_g2

0x081f,	// (0x000354f9) cam6_pano_pane_g3

0x0828,	// (0x00035502) cam6_pano_pane_g4

0xdc9c,	// (0x00042976) cam6_pano_pane_g5

0x0831,	// (0x0003550b) cam6_pano_pane_g6

0x083b,	// (0x00035515) cam6_pano_pane_g7

0x0843,	// (0x0003551d) cam6_pano_pane_g8

0x084c,	// (0x00035526) cam6_pano_pane_g9

0x0008,

0xfe07,	// (0x00044ae1) cam6_pano_pane_g

0x0f86,	// (0x00035c60) main_browser_tag_pane

0x0576,	// (0x00035250) grid_navstr_albumart_pane

0x0857,	// (0x00035531) cell_navstr_albumart_pane_ParamLimits

0x0857,	// (0x00035531) cell_navstr_albumart_pane

0x2474,	// (0x0003714e) cell_navstr_albumart_pane_g1

0x3565,	// (0x0003823f) cell_navstr_albumart_pane_g2

0x3575,	// (0x0003824f) cell_navstr_albumart_pane_g3

0x356d,	// (0x00038247) cell_navstr_albumart_pane_g4

0x0003,

0xfe1a,	// (0x00044af4) cell_navstr_albumart_pane_g

0xc9c9,	// (0x000416a3) bt_list_pane_ParamLimits

0xc9c9,	// (0x000416a3) bt_list_pane

0xc9f0,	// (0x000416ca) bt_list_pane_t1

0xc9ff,	// (0x000416d9) bt_list_pane_t2

0x0001,

0xfe23,	// (0x00044afd) bt_list_pane_t

0x0f86,	// (0x00035c60) main_cale_prevew_pane

0xca0e,	// (0x000416e8) popup_cale_preview_window_ParamLimits

0xca0e,	// (0x000416e8) popup_cale_preview_window

0x14b5,	// (0x0003618f) bg_popup_preview_window_pane_cp05_ParamLimits

0x14b5,	// (0x0003618f) bg_popup_preview_window_pane_cp05

0x0879,	// (0x00035553) list_cale_preview_pane_ParamLimits

0x0879,	// (0x00035553) list_cale_preview_pane

0xca25,	// (0x000416ff) list_double_cale_preview_pane_ParamLimits

0xca25,	// (0x000416ff) list_double_cale_preview_pane

0xca37,	// (0x00041711) list_single_cale_preview_pane_ParamLimits

0xca37,	// (0x00041711) list_single_cale_preview_pane

0xca4b,	// (0x00041725) list_single_cale_preview_pane_g1

0xca53,	// (0x0004172d) list_single_cale_preview_pane_t1_ParamLimits

0xca53,	// (0x0004172d) list_single_cale_preview_pane_t1

0xca68,	// (0x00041742) list_double_cale_preview_pane_g1

0xca70,	// (0x0004174a) list_double_cale_preview_pane_t1_ParamLimits

0xca70,	// (0x0004174a) list_double_cale_preview_pane_t1

0xca85,	// (0x0004175f) list_double_cale_preview_pane_t2_ParamLimits

0xca85,	// (0x0004175f) list_double_cale_preview_pane_t2

0x0001,

0xfe28,	// (0x00044b02) list_double_cale_preview_pane_t_ParamLimits

0xfe28,	// (0x00044b02) list_double_cale_preview_pane_t

0x0f86,	// (0x00035c60) main_ezdial_pane

0x14b5,	// (0x0003618f) main_sp_fs_email_pane_ParamLimits

0xc666,	// (0x00041340) cmail_ddmenu_btn01_pane_ParamLimits

0xc666,	// (0x00041340) cmail_ddmenu_btn01_pane

0xc683,	// (0x0004135d) cmail_ddmenu_btn02_pane_ParamLimits

0xc683,	// (0x0004135d) cmail_ddmenu_btn02_pane

0xc6a1,	// (0x0004137b) cmail_ddmenu_btn03_pane_ParamLimits

0xc6a1,	// (0x0004137b) cmail_ddmenu_btn03_pane

0x4f7e,	// (0x00039c58) main_sp_fs_ctrlbar_pane_ParamLimits

0x4f98,	// (0x00039c72) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc7a0,	// (0x0004147a) list_cmail_body_pane_ParamLimits

0x049d,	// (0x00035177) bg_button_pane_cp12

0x04b2,	// (0x0003518c) list_single_cmail_header_detail_pane_g3_ParamLimits

0x04b2,	// (0x0003518c) list_single_cmail_header_detail_pane_g3

0x54c2,	// (0x0003a19c) list_single_cmail_header_detail_pane_t2_ParamLimits

0x54c2,	// (0x0003a19c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdab,	// (0x00044a85) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdab,	// (0x00044a85) list_single_cmail_header_detail_pane_t

0x5517,	// (0x0003a1f1) phacti_term_pane_t2_ParamLimits

0x5517,	// (0x0003a1f1) phacti_term_pane_t2

0x0001,

0xfdb5,	// (0x00044a8f) phacti_term_pane_t_ParamLimits

0xfdb5,	// (0x00044a8f) phacti_term_pane_t

0x0885,	// (0x0003555f) aid_size_list_single_double

0xca9d,	// (0x00041777) popup_ezdial_listscroll_window

0xcac0,	// (0x0004179a) popup_number_entry_window_cp01

0x2305,	// (0x00036fdf) bg_popup_call_pane_cp09

0x0891,	// (0x0003556b) ezdial_list_pane

0x0899,	// (0x00035573) scroll_pane_cp23

0xd4dc,	// (0x000421b6) bg_button_pane_cp028_ParamLimits

0xd4dc,	// (0x000421b6) bg_button_pane_cp028

0xcace,	// (0x000417a8) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcace,	// (0x000417a8) cmail_ddmenu_btn01_pane_g1

0xcae0,	// (0x000417ba) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xcae0,	// (0x000417ba) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2d,	// (0x00044b07) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2d,	// (0x00044b07) cmail_ddmenu_btn01_pane_g

0x08a1,	// (0x0003557b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x08a1,	// (0x0003557b) cmail_ddmenu_btn01_pane_t1

0x3750,	// (0x0003842a) bg_button_pane_cp029_ParamLimits

0x3750,	// (0x0003842a) bg_button_pane_cp029

0xcae0,	// (0x000417ba) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xcae0,	// (0x000417ba) cmail_ddmenu_btn02_pane_g1

0xcaf8,	// (0x000417d2) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xcaf8,	// (0x000417d2) cmail_ddmenu_btn02_pane_t1

0x5b35,	// (0x0003a80f) bg_button_pane_cp031_ParamLimits

0x5b35,	// (0x0003a80f) bg_button_pane_cp031

0xcae0,	// (0x000417ba) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xcae0,	// (0x000417ba) cmail_ddmenu_btn03_pane_g1

0xcaf8,	// (0x000417d2) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xcaf8,	// (0x000417d2) cmail_ddmenu_btn03_pane_t1

0xa568,	// (0x0003f242) cell_dialer2_keypad_pane_t1_ParamLimits

0xa582,	// (0x0003f25c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa582,	// (0x0003f25c) cell_dialer2_keypad_pane_t1_copy1

0xc049,	// (0x00040d23) ncimui_group_button_pane

0x14b5,	// (0x0003618f) main_sp_fs_calendar_pane_ParamLimits

0xc7c4,	// (0x0004149e) list_single_cmail_header_caption_pane_ParamLimits

0x0629,	// (0x00035303) aid_recal_txt_sm_pane

0x0f86,	// (0x00035c60) mian_recal_day_pane

0x0668,	// (0x00035342) popup_sp_fs_cale_preview_window_ParamLimits

0x0f86,	// (0x00035c60) list_recal_day_pane

0x08d9,	// (0x000355b3) list_single_recal_day_pane_ParamLimits

0x08d9,	// (0x000355b3) list_single_recal_day_pane

0x08eb,	// (0x000355c5) list_single_recal_day_pane_g1_ParamLimits

0x08eb,	// (0x000355c5) list_single_recal_day_pane_g1

0x08f7,	// (0x000355d1) list_single_recal_day_pane_g2_ParamLimits

0x08f7,	// (0x000355d1) list_single_recal_day_pane_g2

0x0907,	// (0x000355e1) list_single_recal_day_pane_g3_ParamLimits

0x0907,	// (0x000355e1) list_single_recal_day_pane_g3

0xcb1c,	// (0x000417f6) list_single_recal_day_pane_g4_ParamLimits

0xcb1c,	// (0x000417f6) list_single_recal_day_pane_g4

0x0913,	// (0x000355ed) list_single_recal_day_pane_g5_ParamLimits

0x0913,	// (0x000355ed) list_single_recal_day_pane_g5

0x0923,	// (0x000355fd) list_single_recal_day_pane_g6_ParamLimits

0x0923,	// (0x000355fd) list_single_recal_day_pane_g6

0x0004,

0xfe3c,	// (0x00044b16) list_single_recal_day_pane_g_ParamLimits

0xfe3c,	// (0x00044b16) list_single_recal_day_pane_g

0x093a,	// (0x00035614) list_single_recal_day_pane_t1

0x094c,	// (0x00035626) list_single_recal_day_pane_t2

0x0001,

0xfe47,	// (0x00044b21) list_single_recal_day_pane_t

0xcb3c,	// (0x00041816) ncimui_query_button_pane_ParamLimits

0xcb3c,	// (0x00041816) ncimui_query_button_pane

0xcb4c,	// (0x00041826) ncimui_query_button_pane_t1_ParamLimits

0xcb4c,	// (0x00041826) ncimui_query_button_pane_t1

0x0961,	// (0x0003563b) ncimui_query_button_pane_t2_ParamLimits

0x0961,	// (0x0003563b) ncimui_query_button_pane_t2

0x0001,

0xfe4c,	// (0x00044b26) ncimui_query_button_pane_t_ParamLimits

0xfe4c,	// (0x00044b26) ncimui_query_button_pane_t

0xcb5f,	// (0x00041839) query_button_pane_ParamLimits

0xcb5f,	// (0x00041839) query_button_pane

0x0f86,	// (0x00035c60) bg_button_pane_cp0028

0x0974,	// (0x0003564e) query_button_pane_t1

0x8947,	// (0x0003d621) main_tport_pane_ParamLimits

0xc6cf,	// (0x000413a9) bg_popup_window_pane_cp01_ParamLimits

0xc6cf,	// (0x000413a9) bg_popup_window_pane_cp01

0xc6dc,	// (0x000413b6) heading_pane_cp08_ParamLimits

0xc6dc,	// (0x000413b6) heading_pane_cp08

0xc6ea,	// (0x000413c4) heading_pane_cp07_ParamLimits

0xc6ea,	// (0x000413c4) heading_pane_cp07

0x0460,	// (0x0003513a) cell_tport_appsw_pane_g2

0x0002,

0xfd98,	// (0x00044a72) cell_tport_appsw_pane_g

0x4877,	// (0x00039551) input_candi_list_open_g1

0x1db5,	// (0x00036a8f) list_cale_time_pane_g6_ParamLimits

0x1db5,	// (0x00036a8f) list_cale_time_pane_g6

0x93ce,	// (0x0003e0a8) aid_size_touch_calib_1_ParamLimits

0x93ce,	// (0x0003e0a8) aid_size_touch_calib_1

0x93da,	// (0x0003e0b4) aid_size_touch_calib_2_ParamLimits

0x93da,	// (0x0003e0b4) aid_size_touch_calib_2

0x93e8,	// (0x0003e0c2) aid_size_touch_calib_3_ParamLimits

0x93e8,	// (0x0003e0c2) aid_size_touch_calib_3

0x93f8,	// (0x0003e0d2) aid_size_touch_calib_4_ParamLimits

0x93f8,	// (0x0003e0d2) aid_size_touch_calib_4

0x9406,	// (0x0003e0e0) main_touch_calib_button_group_pane_ParamLimits

0x9406,	// (0x0003e0e0) main_touch_calib_button_group_pane

0x9414,	// (0x0003e0ee) main_touch_calib_pane_g1_ParamLimits

0x9420,	// (0x0003e0fa) main_touch_calib_pane_g2_ParamLimits

0x942c,	// (0x0003e106) main_touch_calib_pane_g3_ParamLimits

0x9438,	// (0x0003e112) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x0004443b) main_touch_calib_pane_g_ParamLimits

0x9444,	// (0x0003e11e) main_touch_calib_pane_t1_ParamLimits

0x945b,	// (0x0003e135) main_touch_calib_pane_t2_ParamLimits

0x9472,	// (0x0003e14c) main_touch_calib_pane_t3_ParamLimits

0x9486,	// (0x0003e160) main_touch_calib_pane_t4_ParamLimits

0x949a,	// (0x0003e174) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x00044444) main_touch_calib_pane_t_ParamLimits

0xda6c,	// (0x00042746) list_single_fp_cale_pane_g3_ParamLimits

0xda6c,	// (0x00042746) list_single_fp_cale_pane_g3

0x14b5,	// (0x0003618f) bg_button_pane_cp012_ParamLimits

0x14b5,	// (0x0003618f) bg_vkb2_func_pane_cp03_ParamLimits

0xb330,	// (0x0004000a) cell_vitu2_function_top_pane_g1_ParamLimits

0x14b5,	// (0x0003618f) bg_vkb2_func_pane_cp04_ParamLimits

0xbfd1,	// (0x00040cab) main_ncimui_button_group_pane_ParamLimits

0xbfd1,	// (0x00040cab) main_ncimui_button_group_pane

0xc037,	// (0x00040d11) main_ncimui_pane_t3_ParamLimits

0xc037,	// (0x00040d11) main_ncimui_pane_t3

0x058c,	// (0x00035266) phacti_button_group_pane

0x0885,	// (0x0003555f) aid_size_list_single_double_ParamLimits

0xca9d,	// (0x00041777) popup_ezdial_listscroll_window_ParamLimits

0xcac0,	// (0x0004179a) popup_number_entry_window_cp01_ParamLimits

0xcb6c,	// (0x00041846) phacti_button_pane_ParamLimits

0xcb6c,	// (0x00041846) phacti_button_pane

0x0f86,	// (0x00035c60) bg_button_pane_cp14

0x0982,	// (0x0003565c) phacti_button_pane_t1

0xcb7d,	// (0x00041857) main_touch_calib_button_pane_ParamLimits

0xcb7d,	// (0x00041857) main_touch_calib_button_pane

0x1721,	// (0x000363fb) bg_button_pane_cp18_ParamLimits

0x1721,	// (0x000363fb) bg_button_pane_cp18

0x0990,	// (0x0003566a) main_touch_calib_button_pane_t1_ParamLimits

0x0990,	// (0x0003566a) main_touch_calib_button_pane_t1

0x09a6,	// (0x00035680) main_touch_calib_button_pane_t2_ParamLimits

0x09a6,	// (0x00035680) main_touch_calib_button_pane_t2

0x0001,

0xfe51,	// (0x00044b2b) main_touch_calib_button_pane_t_ParamLimits

0xfe51,	// (0x00044b2b) main_touch_calib_button_pane_t

0x0f86,	// (0x00035c60) cell_ncimui_button_pane

0x0f86,	// (0x00035c60) bg_button_pane_cp032

0x09c4,	// (0x0003569e) cell_ncimui_button_pane_t1

0xa5de,	// (0x0003f2b8) image3_infobar_pane_ParamLimits

0xa5de,	// (0x0003f2b8) image3_infobar_pane

0xc3b0,	// (0x0004108a) fs_bigclock_status_pane_ParamLimits

0xc3b0,	// (0x0004108a) fs_bigclock_status_pane

0xc3bd,	// (0x00041097) main_fs_bigclock_clock_pane_ParamLimits

0xc3bd,	// (0x00041097) main_fs_bigclock_clock_pane

0xc3d3,	// (0x000410ad) main_fs_bigclock_indi_pane_ParamLimits

0xc3d3,	// (0x000410ad) main_fs_bigclock_indi_pane

0xc402,	// (0x000410dc) main_fs_bigclock_swipe_pane_ParamLimits

0xc402,	// (0x000410dc) main_fs_bigclock_swipe_pane

0x0f86,	// (0x00035c60) main_fs_clock_dumped_data

0xee96,	// (0x00043b70) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xee96,	// (0x00043b70) list_single_fs_bigclock_indicator_pane_g1

0xeebf,	// (0x00043b99) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xeebf,	// (0x00043b99) list_single_fs_bigclock_indicator_pane_g2

0xeed9,	// (0x00043bb3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xeed9,	// (0x00043bb3) list_single_fs_bigclock_indicator_pane_g3

0xeef3,	// (0x00043bcd) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xeef3,	// (0x00043bcd) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7f,	// (0x00044959) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7f,	// (0x00044959) list_single_fs_bigclock_indicator_pane_g

0xef1c,	// (0x00043bf6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xef1c,	// (0x00043bf6) list_single_fs_bigclock_indicator_pane_t1

0xef44,	// (0x00043c1e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xef44,	// (0x00043c1e) list_single_fs_bigclock_indicator_pane_t2

0xef6c,	// (0x00043c46) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xef6c,	// (0x00043c46) list_single_fs_bigclock_indicator_pane_t3

0xef94,	// (0x00043c6e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xef94,	// (0x00043c6e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8a,	// (0x00044964) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8a,	// (0x00044964) list_single_fs_bigclock_indicator_pane_t

0x09d2,	// (0x000356ac) image3_infobar_fav_pane_ParamLimits

0x09d2,	// (0x000356ac) image3_infobar_fav_pane

0x09e2,	// (0x000356bc) image3_infobar_loc_pane_ParamLimits

0x09e2,	// (0x000356bc) image3_infobar_loc_pane

0x09f6,	// (0x000356d0) image3_infobar_time_pane_ParamLimits

0x09f6,	// (0x000356d0) image3_infobar_time_pane

0xd6f9,	// (0x000423d3) image3_infobar_time_pane_g1

0x0a06,	// (0x000356e0) image3_infobar_time_pane_t1

0xd6f9,	// (0x000423d3) image3_infobar_loc_pane_g1

0x0a14,	// (0x000356ee) image3_infobar_loc_pane_g2

0x0001,

0xfe56,	// (0x00044b30) image3_infobar_loc_pane_g

0x0a1c,	// (0x000356f6) image3_infobar_loc_pane_t1

0xd6f9,	// (0x000423d3) image3_infobar_fav_pane_g1

0x0a2a,	// (0x00035704) image3_infobar_fav_pane_g2

0x0001,

0xfe5b,	// (0x00044b35) image3_infobar_fav_pane_g

0x0a32,	// (0x0003570c) fs_bigclock_status_battery_pane

0x0a3b,	// (0x00035715) fs_bigclock_status_signal_pane

0x0a44,	// (0x0003571e) fs_bigclock_status_title_pane

0x0a4d,	// (0x00035727) fs_bigclock_status_signal_pane_g1

0x0a56,	// (0x00035730) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe60,	// (0x00044b3a) fs_bigclock_status_signal_pane_g

0x0a5e,	// (0x00035738) fs_bigclock_status_battery_pane_g1

0x0a67,	// (0x00035741) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe65,	// (0x00044b3f) fs_bigclock_status_battery_pane_g

0x0a6f,	// (0x00035749) fs_bigclock_status_title_pane_t1

0xd6f9,	// (0x000423d3) main_fs_bigclock_clock_pane_g1

0x0a7d,	// (0x00035757) main_fs_bigclock_clock_pane_g2

0x0a7d,	// (0x00035757) main_fs_bigclock_clock_pane_g3

0x0a7d,	// (0x00035757) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6a,	// (0x00044b44) main_fs_bigclock_clock_pane_g

0x0a85,	// (0x0003575f) main_fs_bigclock_clock_pane_t1

0x0a93,	// (0x0003576d) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe73,	// (0x00044b4d) main_fs_bigclock_clock_pane_t

0x0aa2,	// (0x0003577c) list_single_fs_bigclock_indicator_pane_ParamLimits

0x0aa2,	// (0x0003577c) list_single_fs_bigclock_indicator_pane

0xcb8d,	// (0x00041867) list_single_fs_bigclock_pane_ParamLimits

0xcb8d,	// (0x00041867) list_single_fs_bigclock_pane

0x0abc,	// (0x00035796) main_fs_bigclock_indicator_pane_t1

0x0acb,	// (0x000357a5) list_single_fs_bigclock_pane_g1

0x0ad3,	// (0x000357ad) list_single_fs_bigclock_pane_t1

0xd6f9,	// (0x000423d3) main_fs_bigclock_swipe_pane_g1

0x0b16,	// (0x000357f0) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe84,	// (0x00044b5e) main_fs_bigclock_swipe_pane_g

0x0b1e,	// (0x000357f8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x0b1e,	// (0x000357f8) main_fs_bigclock_swipe_pane_t1

0x78e8,	// (0x0003c5c2) call_type_pane_ParamLimits

0x0f86,	// (0x00035c60) main_btmg_pane

0x55c8,	// (0x0003a2a2) list_single_cale_mrui_row_pane_g2_ParamLimits

0x55c8,	// (0x0003a2a2) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf7,	// (0x00044ad1) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf7,	// (0x00044ad1) list_single_cale_mrui_row_pane_g

0x08c0,	// (0x0003559a) list_recal_vselct_arw_lo_pane

0x08c8,	// (0x000355a2) list_recal_vselct_arw_up_pane

0x08d0,	// (0x000355aa) list_recal_vselct_pane

0xcbf0,	// (0x000418ca) btmg_button_pane

0xcbfc,	// (0x000418d6) main_btmg_pane_g1

0x0f86,	// (0x00035c60) bg_button_pane_cp044

0x0b3b,	// (0x00035815) btmg_button_pane_t1

0x3748,	// (0x00038422) aid_listscroll_gen

0x14b5,	// (0x0003618f) main_cntbar_detail_pane

0x047e,	// (0x00035158) list_cmail_folder_pane

0x048e,	// (0x00035168) sp_fs_scroll_pane_cp03_ParamLimits

0x56e8,	// (0x0003a3c2) list_single_fs_dyc_pane_cp01_ParamLimits

0x56e8,	// (0x0003a3c2) list_single_fs_dyc_pane_cp01

0x0b49,	// (0x00035823) aid_size_cmail_indent

0x5719,	// (0x0003a3f3) list_single_dyc_row_pane_cp01

0xcc24,	// (0x000418fe) cntbar_detail_list_pane_ParamLimits

0xcc24,	// (0x000418fe) cntbar_detail_list_pane

0xcc5e,	// (0x00041938) main_cntbar_detail_cont_pane_ParamLimits

0xcc5e,	// (0x00041938) main_cntbar_detail_cont_pane

0x78dc,	// (0x0003c5b6) scroll_pane_cp032_ParamLimits

0x78dc,	// (0x0003c5b6) scroll_pane_cp032

0xcc6a,	// (0x00041944) cntbar_detail_list_event_pane_ParamLimits

0xcc6a,	// (0x00041944) cntbar_detail_list_event_pane

0xcc30,	// (0x0004190a) cntbar_detail_list_shct_pane

0x1c3e,	// (0x00036918) aid_list_gen

0x0b5b,	// (0x00035835) aid_scroll

0x0b64,	// (0x0003583e) aid_size_touch_scroll_bar

0xf09c,	// (0x00043d76) aid_list_double

0x0b76,	// (0x00035850) aid_list_single

0x5722,	// (0x0003a3fc) aid_list_single_lg

0x572b,	// (0x0003a405) aid_list_z_g_a_sm

0x5733,	// (0x0003a40d) aid_list_z_g_d

0x573b,	// (0x0003a415) aid_txt_z_prm

0x5749,	// (0x0003a423) aid_txt_z_prm_cp01

0x5757,	// (0x0003a431) aid_txt_z_sec

0xcc7e,	// (0x00041958) main_cntbar_detail_cont_pane_g1_ParamLimits

0xcc7e,	// (0x00041958) main_cntbar_detail_cont_pane_g1

0xcc8b,	// (0x00041965) main_cntbar_detail_cont_pane_g2_ParamLimits

0xcc8b,	// (0x00041965) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe89,	// (0x00044b63) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe89,	// (0x00044b63) main_cntbar_detail_cont_pane_g

0x0ba6,	// (0x00035880) main_cntbar_detail_cont_pane_t1

0x0bb4,	// (0x0003588e) main_cntbar_detail_cont_pane_t2

0x0bc2,	// (0x0003589c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe8e,	// (0x00044b68) main_cntbar_detail_cont_pane_t

0xcc97,	// (0x00041971) cell_cntbar_detail_list_shct_pane_ParamLimits

0xcc97,	// (0x00041971) cell_cntbar_detail_list_shct_pane

0x0bd0,	// (0x000358aa) cntbar_detail_list_shct_pane_g1

0x0bd9,	// (0x000358b3) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe95,	// (0x00044b6f) cntbar_detail_list_shct_pane_g

0xccab,	// (0x00041985) cntbar_detail_list_event_pane_g1_ParamLimits

0xccab,	// (0x00041985) cntbar_detail_list_event_pane_g1

0xccb7,	// (0x00041991) cntbar_detail_list_event_pane_g2_ParamLimits

0xccb7,	// (0x00041991) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9a,	// (0x00044b74) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9a,	// (0x00044b74) cntbar_detail_list_event_pane_g

0xcd23,	// (0x000419fd) cntbar_detail_list_event_pane_t1_ParamLimits

0xcd23,	// (0x000419fd) cntbar_detail_list_event_pane_t1

0xcd38,	// (0x00041a12) cntbar_detail_list_event_pane_t2_ParamLimits

0xcd38,	// (0x00041a12) cntbar_detail_list_event_pane_t2

0x0002,

0xfea7,	// (0x00044b81) cntbar_detail_list_event_pane_t_ParamLimits

0xfea7,	// (0x00044b81) cntbar_detail_list_event_pane_t

0xd6f9,	// (0x000423d3) cell_cntbar_detail_list_shct_pane_g1

0x7c81,	// (0x0003c95b) navi_pane_mv_g3

0x14b5,	// (0x0003618f) main_cntbar_detail_pane_ParamLimits

0x0f86,	// (0x00035c60) main_notif_wgt_pane

0xa290,	// (0x0003ef6a) aid_tch_main_mp4_pane_g4

0xa4c5,	// (0x0003f19f) popup_slider_window_cp02

0x08b6,	// (0x00035590) list_recal_day_event_pane

0xcc04,	// (0x000418de) cntbar_detail_btn_pane_ParamLimits

0xcc04,	// (0x000418de) cntbar_detail_btn_pane

0xcc14,	// (0x000418ee) cntbar_detail_btn_pane_cp01_ParamLimits

0xcc14,	// (0x000418ee) cntbar_detail_btn_pane_cp01

0xcc30,	// (0x0004190a) cntbar_detail_list_shct_pane_ParamLimits

0xcc3c,	// (0x00041916) cntbar_detail_pane_g1_ParamLimits

0xcc3c,	// (0x00041916) cntbar_detail_pane_g1

0xcc48,	// (0x00041922) cntbar_detail_pane_t1_ParamLimits

0xcc48,	// (0x00041922) cntbar_detail_pane_t1

0xccc3,	// (0x0004199d) cntbar_detail_list_event_pane_g3_ParamLimits

0xccc3,	// (0x0004199d) cntbar_detail_list_event_pane_g3

0xccdb,	// (0x000419b5) cntbar_detail_list_event_pane_g4_ParamLimits

0xccdb,	// (0x000419b5) cntbar_detail_list_event_pane_g4

0xccf3,	// (0x000419cd) cntbar_detail_list_event_pane_g5_ParamLimits

0xccf3,	// (0x000419cd) cntbar_detail_list_event_pane_g5

0xcd0b,	// (0x000419e5) cntbar_detail_list_event_pane_g6_ParamLimits

0xcd0b,	// (0x000419e5) cntbar_detail_list_event_pane_g6

0xcd4d,	// (0x00041a27) cntbar_detail_list_event_pane_t3_ParamLimits

0xcd4d,	// (0x00041a27) cntbar_detail_list_event_pane_t3

0xcd5f,	// (0x00041a39) popup_notif_wgt_window_ParamLimits

0xcd5f,	// (0x00041a39) popup_notif_wgt_window

0xcd6f,	// (0x00041a49) popup_submenu_window_cp01_ParamLimits

0xcd6f,	// (0x00041a49) popup_submenu_window_cp01

0x2305,	// (0x00036fdf) bg_popup_window_pane_cp10

0x0be2,	// (0x000358bc) listscroll_notif_wgt_pane

0x0bf3,	// (0x000358cd) list_notif_wgt_window

0x0bfc,	// (0x000358d6) scroll_pane_cp033

0xcd7d,	// (0x00041a57) list_notif_wgt_row_pane_ParamLimits

0xcd7d,	// (0x00041a57) list_notif_wgt_row_pane

0x0c05,	// (0x000358df) aid_size_list_notif_wgt_del

0x0c12,	// (0x000358ec) list_notif_wgt_row_pane_g1

0x0c1e,	// (0x000358f8) list_notif_wgt_row_pane_g2

0x0c2a,	// (0x00035904) list_notif_wgt_row_pane_g3

0x0002,

0xfeae,	// (0x00044b88) list_notif_wgt_row_pane_g

0x0c37,	// (0x00035911) list_notif_wgt_row_pane_t1

0x0c4c,	// (0x00035926) list_notif_wgt_row_pane_t2

0x0c5e,	// (0x00035938) list_notif_wgt_row_pane_t3

0x0002,

0xfeb5,	// (0x00044b8f) list_notif_wgt_row_pane_t

0xe39d,	// (0x00043077) list_recal_day_event_pane_g1

0x0c70,	// (0x0003594a) list_recal_day_event_pane_t1

0x0f86,	// (0x00035c60) bg_button_pane_cp045

0x0c7f,	// (0x00035959) cntbar_detail_btn_pane_t1

0x3750,	// (0x0003842a) main_callh_pane_ParamLimits

0x3750,	// (0x0003842a) main_callh_pane

0x0f86,	// (0x00035c60) main_coverflow0_pane

0x0f86,	// (0x00035c60) main_wgtman_pane

0xc41a,	// (0x000410f4) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc41a,	// (0x000410f4) main_fs_bigclock_unlock_btn_pane

0x0458,	// (0x00035132) bg_button_pane_cp16

0x0468,	// (0x00035142) cell_tport_appsw_pane_g3

0xcd91,	// (0x00041a6b) cf0_flow_pane_ParamLimits

0xcd91,	// (0x00041a6b) cf0_flow_pane

0x0c8d,	// (0x00035967) listscroll_cf0_pane

0x0c98,	// (0x00035972) main_cf0_pane_g1

0xcda0,	// (0x00041a7a) main_cf0_pane_t1_ParamLimits

0xcda0,	// (0x00041a7a) main_cf0_pane_t1

0xcdb4,	// (0x00041a8e) main_cf0_pane_t2_ParamLimits

0xcdb4,	// (0x00041a8e) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00044b96) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00044b96) main_cf0_pane_t

0x0ca2,	// (0x0003597c) scroll_pane_cp11

0xcdc8,	// (0x00041aa2) cf0_flow_pane_g1

0xcdd0,	// (0x00041aaa) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x00044b9b) cf0_flow_pane_g

0xcdd8,	// (0x00041ab2) cf0_flow_pane_t1

0x0f86,	// (0x00035c60) main_call6_pane

0x0f86,	// (0x00035c60) main_calllock_pane

0xcde6,	// (0x00041ac0) call6_btn_grp_pane_ParamLimits

0xcde6,	// (0x00041ac0) call6_btn_grp_pane

0xcdf5,	// (0x00041acf) call6_pane_g1_ParamLimits

0xcdf5,	// (0x00041acf) call6_pane_g1

0xce04,	// (0x00041ade) popup_call6_1st_window_ParamLimits

0xce04,	// (0x00041ade) popup_call6_1st_window

0xce12,	// (0x00041aec) popup_call6_2nd_window_ParamLimits

0xce12,	// (0x00041aec) popup_call6_2nd_window

0xce20,	// (0x00041afa) cell_call6_btn_pane_ParamLimits

0xce20,	// (0x00041afa) cell_call6_btn_pane

0x2305,	// (0x00036fdf) bg_popup_call2_in_pane_cp03

0x0cad,	// (0x00035987) popup_call6_1st_window_g1

0x0cb5,	// (0x0003598f) popup_call6_1st_window_g2

0x0cbd,	// (0x00035997) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00044ba0) popup_call6_1st_window_g

0x0cc5,	// (0x0003599f) popup_call6_1st_window_t1

0x0cd4,	// (0x000359ae) popup_call6_1st_window_t2

0x0ce4,	// (0x000359be) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00044ba7) popup_call6_1st_window_t

0x2305,	// (0x00036fdf) bg_popup_call2_in_pane_cp04

0x0cad,	// (0x00035987) popup_call6_2nd_window_g1

0x0cb5,	// (0x0003598f) popup_call6_2nd_window_g2

0x0cbd,	// (0x00035997) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00044ba0) popup_call6_2nd_window_g

0x0cc5,	// (0x0003599f) popup_call6_2nd_window_t1

0x0f86,	// (0x00035c60) bg_button_pane_cp15

0x0cf4,	// (0x000359ce) cell_call6_btn_pane_g1

0x0cfd,	// (0x000359d7) cell_call6_btn_pane_t1

0xce2f,	// (0x00041b09) listscroll_wgtman_pane_ParamLimits

0xce2f,	// (0x00041b09) listscroll_wgtman_pane

0xce4d,	// (0x00041b27) wgtman_btn_pane_ParamLimits

0xce4d,	// (0x00041b27) wgtman_btn_pane

0x21b8,	// (0x00036e92) aid_scroll_copy1

0x0d0c,	// (0x000359e6) list_wgtman_pane

0xce82,	// (0x00041b5c) wgtman_btn_pane_g1_ParamLimits

0xce82,	// (0x00041b5c) wgtman_btn_pane_g1

0xceaa,	// (0x00041b84) wgtman_btn_pane_t1_ParamLimits

0xceaa,	// (0x00041b84) wgtman_btn_pane_t1

0x0d16,	// (0x000359f0) wgtman_btn_pane_t2_ParamLimits

0x0d16,	// (0x000359f0) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x00044bae) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x00044bae) wgtman_btn_pane_t

0xcee1,	// (0x00041bbb) listrow_wgtman_pane_ParamLimits

0xcee1,	// (0x00041bbb) listrow_wgtman_pane

0xcefd,	// (0x00041bd7) listrow_wgtman_pane_g1

0xcf0a,	// (0x00041be4) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00044bb3) listrow_wgtman_pane_g

0x5765,	// (0x0003a43f) listrow_wgtman_pane_t1

0x577d,	// (0x0003a457) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x00044bb8) listrow_wgtman_pane_t

0x57a3,	// (0x0003a47d) wait_bar_pane_cp09

0x0d2d,	// (0x00035a07) main_calllock_btn_pane

0x0d37,	// (0x00035a11) main_calllock_pane_g1

0x0f86,	// (0x00035c60) bg_button_pane_cp17

0x0d42,	// (0x00035a1c) main_calllock_btn_pane_g1

0x0d4b,	// (0x00035a25) main_calllock_btn_pane_t1

0x0f86,	// (0x00035c60) main_dialer3_pane

0x0f86,	// (0x00035c60) main_fmrd2_pane

0xd6f9,	// (0x000423d3) main_fs_bigclock_unlock_btn_pane_g1

0x0d62,	// (0x00035a3c) main_fs_bigclock_unlock_btn_pane_t1

0xcf28,	// (0x00041c02) area_fmrd2_info_pane_ParamLimits

0xcf28,	// (0x00041c02) area_fmrd2_info_pane

0xcf36,	// (0x00041c10) area_fmrd2_visual_pane_ParamLimits

0xcf36,	// (0x00041c10) area_fmrd2_visual_pane

0xcf44,	// (0x00041c1e) fmrd2_indi_pane_ParamLimits

0xcf44,	// (0x00041c1e) fmrd2_indi_pane

0xcf51,	// (0x00041c2b) area_fmrd2_visual_pane_g1

0xcf59,	// (0x00041c33) area_fmrd2_visual_pane_t1

0xcf69,	// (0x00041c43) area_fmrd2_visual_pane_t2

0xcf79,	// (0x00041c53) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00044bc2) area_fmrd2_visual_pane_t

0xcf89,	// (0x00041c63) area_fmrd2_info_pane_g1

0xcf91,	// (0x00041c6b) area_fmrd2_info_pane_t1

0xcfa1,	// (0x00041c7b) area_fmrd2_info_pane_t2

0xcfb1,	// (0x00041c8b) area_fmrd2_info_pane_t3

0xcfc1,	// (0x00041c9b) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00044bc9) area_fmrd2_info_pane_t

0xcfcf,	// (0x00041ca9) fmrd2_indi_pane_t1

0xcfdf,	// (0x00041cb9) fmrd2_indi_pane_t2

0xcfef,	// (0x00041cc9) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00044bd2) fmrd2_indi_pane_t

0xef02,	// (0x00043bdc) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xef02,	// (0x00043bdc) list_single_fs_bigclock_indicator_pane_g5

0xefa9,	// (0x00043c83) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xefa9,	// (0x00043c83) list_single_fs_bigclock_indicator_pane_t5

0xc8d4,	// (0x000415ae) aid_cell_bcale_month_pane_ParamLimits

0xc8d4,	// (0x000415ae) aid_cell_bcale_month_pane

0xc8e4,	// (0x000415be) bcale_month_pane_ParamLimits

0xc8e4,	// (0x000415be) bcale_month_pane

0xc8f4,	// (0x000415ce) bcale_preview_pane_ParamLimits

0xc8f4,	// (0x000415ce) bcale_preview_pane

0x0ad3,	// (0x000357ad) list_single_fs_bigclock_pane_t1_ParamLimits

0x0af2,	// (0x000357cc) list_single_fs_bigclock_pane_t2_ParamLimits

0x0af2,	// (0x000357cc) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7f,	// (0x00044b59) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7f,	// (0x00044b59) list_single_fs_bigclock_pane_t

0x0d5a,	// (0x00035a34) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x00044bbd) main_fs_bigclock_unlock_btn_pane_g

0xcffd,	// (0x00041cd7) aid_dia3_key_size_ParamLimits

0xcffd,	// (0x00041cd7) aid_dia3_key_size

0xd009,	// (0x00041ce3) aid_dia3_listrow_size_ParamLimits

0xd009,	// (0x00041ce3) aid_dia3_listrow_size

0xd019,	// (0x00041cf3) dia3_keypad_fun_pane_ParamLimits

0xd019,	// (0x00041cf3) dia3_keypad_fun_pane

0xd02b,	// (0x00041d05) dia3_keypad_num_pane_ParamLimits

0xd02b,	// (0x00041d05) dia3_keypad_num_pane

0xd03d,	// (0x00041d17) dia3_listscroll_pane_ParamLimits

0xd03d,	// (0x00041d17) dia3_listscroll_pane

0xd04b,	// (0x00041d25) dia3_numentry_pane_ParamLimits

0xd04b,	// (0x00041d25) dia3_numentry_pane

0x0d70,	// (0x00035a4a) dia3_list_pane

0x0d7b,	// (0x00035a55) scroll_pane_cp12

0x0f86,	// (0x00035c60) bg_dia3_numentry_pane

0xd059,	// (0x00041d33) dia3_numentry_pane_t1

0xd068,	// (0x00041d42) cell_dia3_key_num_pane

0xd070,	// (0x00041d4a) cell_dia3_key0_fun_pane_ParamLimits

0xd070,	// (0x00041d4a) cell_dia3_key0_fun_pane

0xd07d,	// (0x00041d57) cell_dia3_key1_fun_pane_ParamLimits

0xd07d,	// (0x00041d57) cell_dia3_key1_fun_pane

0xd08a,	// (0x00041d64) dia3_listrow_pane

0xec03,	// (0x000438dd) bg_dia3_numentry_pane_g1

0x0f86,	// (0x00035c60) bg_button_pane_cp21

0x0d86,	// (0x00035a60) cell_dia3_key_num_pane_t1

0x0d94,	// (0x00035a6e) cell_dia3_key_num_pane_t2

0x0da3,	// (0x00035a7d) cell_dia3_key_num_pane_t3

0x0db2,	// (0x00035a8c) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00044bd9) cell_dia3_key_num_pane_t

0x0f86,	// (0x00035c60) bg_button_pane_cp19

0xd097,	// (0x00041d71) cell_dia3_key0_fun_pane_g1

0x0f86,	// (0x00035c60) bg_button_pane_cp20

0xd09f,	// (0x00041d79) cell_dia3_key1_fun_pane_g1

0xd0a7,	// (0x00041d81) area_left_week_number_pane

0xd0b3,	// (0x00041d8d) area_top_day_name_pane

0xd0bf,	// (0x00041d99) frame_month_view_pane

0xd0cb,	// (0x00041da5) grid_month_view_pane

0x0dc1,	// (0x00035a9b) cell_top_day_name_pane_ParamLimits

0x0dc1,	// (0x00035a9b) cell_top_day_name_pane

0xca37,	// (0x00041711) cell_area_left_week_number_pane_ParamLimits

0xca37,	// (0x00041711) cell_area_left_week_number_pane

0xd0d7,	// (0x00041db1) cell_month_view_pane_ParamLimits

0xd0d7,	// (0x00041db1) cell_month_view_pane

0x0ddb,	// (0x00035ab5) frm_month_g1

0xd0f4,	// (0x00041dce) frm_month_g2

0xd0fe,	// (0x00041dd8) frm_month_g3

0xd108,	// (0x00041de2) frm_month_g4

0xd112,	// (0x00041dec) frm_month_g5

0xd11c,	// (0x00041df6) frm_month_g6

0xd126,	// (0x00041e00) frm_month_g7

0x0de4,	// (0x00035abe) frm_month_g8

0x0ded,	// (0x00035ac7) frm_month_g9

0x0df6,	// (0x00035ad0) frm_month_g10

0x0dff,	// (0x00035ad9) frm_month_g11

0x0e08,	// (0x00035ae2) frm_month_g12

0x0e11,	// (0x00035aeb) frm_month_g13

0x0e1a,	// (0x00035af4) frm_month_g14

0x0e25,	// (0x00035aff) frm_month_g15

0x0e30,	// (0x00035b0a) frm_month_g16

0x000f,

0xff08,	// (0x00044be2) frm_month_g

0xd132,	// (0x00041e0c) cell_top_day_name_pane_t1

0xd141,	// (0x00041e1b) cell_area_left_week_number_pane_g1

0xd149,	// (0x00041e23) cell_area_left_week_number_pane_t1

0xd6f9,	// (0x000423d3) cell_month_view_pane_g1

0xd158,	// (0x00041e32) cell_month_view_pane_t1

0x0f86,	// (0x00035c60) main_fps_pane

0x01d4,	// (0x00034eae) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x01d4,	// (0x00034eae) cmail_ddmenu_btn02_pane_cp1

0x01f0,	// (0x00034eca) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x01f0,	// (0x00034eca) cmail_ddmenu_btn02_pane_cp2

0xcaec,	// (0x000417c6) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xcaec,	// (0x000417c6) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe32,	// (0x00044b0c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe32,	// (0x00044b0c) cmail_ddmenu_btn02_pane_g

0xcb0a,	// (0x000417e4) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xcb0a,	// (0x000417e4) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe37,	// (0x00044b11) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe37,	// (0x00044b11) cmail_ddmenu_btn02_pane_t

0xd167,	// (0x00041e41) fps_text_pane_ParamLimits

0xd167,	// (0x00041e41) fps_text_pane

0xd174,	// (0x00041e4e) main_fps_pane_g1_ParamLimits

0xd174,	// (0x00041e4e) main_fps_pane_g1

0xd182,	// (0x00041e5c) wait_bar_pane_cp010_ParamLimits

0xd182,	// (0x00041e5c) wait_bar_pane_cp010

0xd18e,	// (0x00041e68) fps_text_pane_t1_ParamLimits

0xd18e,	// (0x00041e68) fps_text_pane_t1

0xa8a9,	// (0x0003f583) cam4_image_uncrop_pane_g1

0xa8b2,	// (0x0003f58c) cam4_image_uncrop_pane_g2

0xa8bb,	// (0x0003f595) cam4_image_uncrop_pane_g3

0xa8c4,	// (0x0003f59e) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x000445d3) cam4_image_uncrop_pane_g

0xd08a,	// (0x00041d64) dia3_listrow_pane_ParamLimits

0x0f86,	// (0x00035c60) main_phob2_pane

0xc731,	// (0x0004140b) cell_tport_appsw_pane_cp02_ParamLimits

0xc731,	// (0x0004140b) cell_tport_appsw_pane_cp02

0xc740,	// (0x0004141a) cell_tport_appsw_pane_cp03_ParamLimits

0xc740,	// (0x0004141a) cell_tport_appsw_pane_cp03

0x0f86,	// (0x00035c60) phob2_contact_card_pane

0x0f86,	// (0x00035c60) phob2_listscroll_pane

0x0e3b,	// (0x00035b15) phob2_list_pane

0x0e43,	// (0x00035b1d) scroll_pane_cp034

0xd1a7,	// (0x00041e81) phob2_cc_data_pane_ParamLimits

0xd1a7,	// (0x00041e81) phob2_cc_data_pane

0xd1c1,	// (0x00041e9b) phob2_cc_listscroll_pane_ParamLimits

0xd1c1,	// (0x00041e9b) phob2_cc_listscroll_pane

0xd1db,	// (0x00041eb5) list_double_large_graphic_phob2_pane_ParamLimits

0xd1db,	// (0x00041eb5) list_double_large_graphic_phob2_pane

0xd1fe,	// (0x00041ed8) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd1fe,	// (0x00041ed8) list_double_large_graphic_phob2_pane_g1

0x57b5,	// (0x0003a48f) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x57b5,	// (0x0003a48f) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00044c03) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00044c03) list_double_large_graphic_phob2_pane_g

0x57c1,	// (0x0003a49b) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x57c1,	// (0x0003a49b) list_double_large_graphic_phob2_pane_t1

0x57d6,	// (0x0003a4b0) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x57d6,	// (0x0003a4b0) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00044c08) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00044c08) list_double_large_graphic_phob2_pane_t

0x0f86,	// (0x00035c60) list_highlight_pane_cp024

0x0e4b,	// (0x00035b25) phob2_cc_button_pane

0xd20b,	// (0x00041ee5) phob2_cc_data_pane_g1_ParamLimits

0xd20b,	// (0x00041ee5) phob2_cc_data_pane_g1

0xd217,	// (0x00041ef1) phob2_cc_data_pane_g2_ParamLimits

0xd217,	// (0x00041ef1) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00044c0d) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00044c0d) phob2_cc_data_pane_g

0xd223,	// (0x00041efd) phob2_cc_data_pane_t1_ParamLimits

0xd223,	// (0x00041efd) phob2_cc_data_pane_t1

0xd235,	// (0x00041f0f) phob2_cc_data_pane_t2_ParamLimits

0xd235,	// (0x00041f0f) phob2_cc_data_pane_t2

0xd247,	// (0x00041f21) phob2_cc_data_pane_t3_ParamLimits

0xd247,	// (0x00041f21) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00044c12) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00044c12) phob2_cc_data_pane_t

0x0e53,	// (0x00035b2d) phob2_cc_list_pane_ParamLimits

0x0e53,	// (0x00035b2d) phob2_cc_list_pane

0xeb20,	// (0x000437fa) scroll_pane_cp035_ParamLimits

0xeb20,	// (0x000437fa) scroll_pane_cp035

0x14b5,	// (0x0003618f) bg_button_pane_cp033

0x0e5f,	// (0x00035b39) phob2_cc_button_pane_g1

0x0e6b,	// (0x00035b45) phob2_cc_button_pane_t1

0x0e80,	// (0x00035b5a) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00044c19) phob2_cc_button_pane_t

0xd259,	// (0x00041f33) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd259,	// (0x00041f33) list_double_large_graphic_phob2_cc_pane

0xd289,	// (0x00041f63) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd289,	// (0x00041f63) list_double_large_graphic_phob2_cc_pane_g1

0x57e8,	// (0x0003a4c2) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x57e8,	// (0x0003a4c2) list_double_large_graphic_phob2_cc_pane_g2

0x57f7,	// (0x0003a4d1) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x57f7,	// (0x0003a4d1) list_double_large_graphic_phob2_cc_pane_g3

0x5806,	// (0x0003a4e0) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x5806,	// (0x0003a4e0) list_double_large_graphic_phob2_cc_pane_g4

0x5817,	// (0x0003a4f1) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x5817,	// (0x0003a4f1) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00044c1e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00044c1e) list_double_large_graphic_phob2_cc_pane_g

0x5826,	// (0x0003a500) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x5826,	// (0x0003a500) list_double_large_graphic_phob2_cc_pane_t1

0x584f,	// (0x0003a529) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x584f,	// (0x0003a529) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00044c29) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00044c29) list_double_large_graphic_phob2_cc_pane_t

0x0e92,	// (0x00035b6c) list_highlight_pane_cp025_ParamLimits

0x0e92,	// (0x00035b6c) list_highlight_pane_cp025

0x14b5,	// (0x0003618f) bg_button_pane_cp033_ParamLimits

0x0e5f,	// (0x00035b39) phob2_cc_button_pane_g1_ParamLimits

0x0e6b,	// (0x00035b45) phob2_cc_button_pane_t1_ParamLimits

0x0e80,	// (0x00035b5a) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00044c19) phob2_cc_button_pane_t_ParamLimits

0x5b43,	// (0x0003a81d) popup_wgtman_window

0xe270,	// (0x00042f4a) scroll_pane_cp038

0xce6a,	// (0x00041b44) wgtman_btn_pane_cp_01_ParamLimits

0xce6a,	// (0x00041b44) wgtman_btn_pane_cp_01

0x0ea0,	// (0x00035b7a) wgtman_content_pane

0x0b6d,	// (0x00035847) wgtman_heading_pane

0x0f86,	// (0x00035c60) bg_heading_pane_cp02

0x0ea9,	// (0x00035b83) wgtman_heading_pane_g1

0x0eb1,	// (0x00035b8b) wgtman_heading_pane_t1

0x0ebf,	// (0x00035b99) scroll_pane_cp036

0x0ec7,	// (0x00035ba1) wgtman_list_pane

0x0ecf,	// (0x00035ba9) wgtman_list_pane_t1_ParamLimits

0x0ecf,	// (0x00035ba9) wgtman_list_pane_t1

0xa808,	// (0x0003f4e2) cam4_grid_pane

0x4b5e,	// (0x00039838) bg_button_pane_cp015_ParamLimits

0xb4b5,	// (0x0004018f) bg_button_pane_cp016_ParamLimits

0xb4c8,	// (0x000401a2) bg_button_pane_cp017_ParamLimits

0x4ba2,	// (0x0003987c) popup_vitu2_query_window_g3_ParamLimits

0x4ba2,	// (0x0003987c) popup_vitu2_query_window_g3

0x4c1b,	// (0x000398f5) popup_vitu2_query_window_t6_ParamLimits

0x4c1b,	// (0x000398f5) popup_vitu2_query_window_t6

0x4c46,	// (0x00039920) popup_vitu2_query_window_t7_ParamLimits

0x4c46,	// (0x00039920) popup_vitu2_query_window_t7

0xf0c6,	// (0x00043da0) cam4_grid_pane_g1

0xf0cf,	// (0x00043da9) cam4_grid_pane_g2

0x0eed,	// (0x00035bc7) cam4_grid_pane_g3

0x0ef6,	// (0x00035bd0) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00044c2e) cam4_grid_pane_g

0x683d,	// (0x0003b517) aid_placing_vt_slider_lsc_ParamLimits

0x6b7d,	// (0x0003b857) vidtel_button_pane_ParamLimits

0x6b7d,	// (0x0003b857) vidtel_button_pane

0x0f01,	// (0x00035bdb) bg_button_pane_cp034

0xd29a,	// (0x00041f74) vidtel_button_pane_g1

0x0f0b,	// (0x00035be5) vidtel_button_pane_t1

0xe38d,	// (0x00043067) aid_size_vtel_slider_touch

0xeb20,	// (0x000437fa) scroll_pane_cp039

0xec41,	// (0x0004391b) ncim_query_button_pane_cp01_ParamLimits

0xec60,	// (0x0004393a) ncimui_query_pane_g1_ParamLimits

0x14b5,	// (0x0003618f) input_focus_pane_cp012_ParamLimits

0xec85,	// (0x0004395f) ncim_query_entry_pane_t1_ParamLimits

0xeb20,	// (0x000437fa) scroll_pane_cp039_ParamLimits

0x7bf3,	// (0x0003c8cd) navi_pane_bcale_mc_g1

0x7bfb,	// (0x0003c8d5) navi_pane_bcale_mc_t1

0x022d,	// (0x00034f07) main_sp_fs_email_pane_g1

0x0235,	// (0x00034f0f) main_sp_fs_email_pane_g2

0x0001,

0xfcf0,	// (0x000449ca) main_sp_fs_email_pane_g

0x076d,	// (0x00035447) list_single_cale_mrui_row_pane_g3_ParamLimits

0x076d,	// (0x00035447) list_single_cale_mrui_row_pane_g3

0xcb32,	// (0x0004180c) list_single_recal_day_pane_g5_event_pane

0x0932,	// (0x0003560c) list_single_recal_day_pane_g7

0x0f19,	// (0x00035bf3) list_recal_day_event_pane_cp01

0x0f22,	// (0x00035bfc) list_recal_vselct_arw_lo_pane_cp01

0x0f2a,	// (0x00035c04) list_recal_vselct_arw_up_pane_cp01

0x0f32,	// (0x00035c0c) list_recal_vselct_pane_cp01

0xe39d,	// (0x00043077) list_recal_day_event_pane_cp01_g1

0x0f3c,	// (0x00035c16) list_recal_day_event_pane_cp01_t1

0x093a,	// (0x00035614) list_single_recal_day_pane_t1_ParamLimits

0x094c,	// (0x00035626) list_single_recal_day_pane_t2_ParamLimits

0xfe47,	// (0x00044b21) list_single_recal_day_pane_t_ParamLimits

0x16f1,	// (0x000363cb) bg_notes_pane_ParamLimits

0x16ff,	// (0x000363d9) list_notes_pane_ParamLimits

0x5e76,	// (0x0003ab50) scroll_pane_cp06_ParamLimits

0x1721,	// (0x000363fb) main_notes_pane_ParamLimits

0x0f86,	// (0x00035c60) main_welc_pane

0xd2a2,	// (0x00041f7c) main_welc_body_pane_ParamLimits

0xd2a2,	// (0x00041f7c) main_welc_body_pane

0xd2bb,	// (0x00041f95) main_welc_opti_pane_ParamLimits

0xd2bb,	// (0x00041f95) main_welc_opti_pane

0xd2f0,	// (0x00041fca) main_welc_pane_t1_ParamLimits

0xd2f0,	// (0x00041fca) main_welc_pane_t1

0xd30e,	// (0x00041fe8) main_welc_body_row_pane_ParamLimits

0xd30e,	// (0x00041fe8) main_welc_body_row_pane

0xd33f,	// (0x00042019) main_welc_opti_row_pane_ParamLimits

0xd33f,	// (0x00042019) main_welc_opti_row_pane

0x0f4a,	// (0x00035c24) main_welc_opti_row_pane_g1

0x0f52,	// (0x00035c2c) main_welc_opti_row_pane_t1

0x0f61,	// (0x00035c3b) main_welc_body_row_pane_t1

0x0beb,	// (0x000358c5) popup_notif_wgt_heading_pane

0x0c05,	// (0x000358df) aid_size_list_notif_wgt_del_ParamLimits

0x0c12,	// (0x000358ec) list_notif_wgt_row_pane_g1_ParamLimits

0x0c1e,	// (0x000358f8) list_notif_wgt_row_pane_g2_ParamLimits

0x0c2a,	// (0x00035904) list_notif_wgt_row_pane_g3_ParamLimits

0xfeae,	// (0x00044b88) list_notif_wgt_row_pane_g_ParamLimits

0x0c37,	// (0x00035911) list_notif_wgt_row_pane_t1_ParamLimits

0x0c4c,	// (0x00035926) list_notif_wgt_row_pane_t2_ParamLimits

0x0c5e,	// (0x00035938) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb5,	// (0x00044b8f) list_notif_wgt_row_pane_t_ParamLimits

0xcefd,	// (0x00041bd7) listrow_wgtman_pane_g1_ParamLimits

0xcf0a,	// (0x00041be4) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00044bb3) listrow_wgtman_pane_g_ParamLimits

0x5765,	// (0x0003a43f) listrow_wgtman_pane_t1_ParamLimits

0x577d,	// (0x0003a457) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x00044bb8) listrow_wgtman_pane_t_ParamLimits

0x57a3,	// (0x0003a47d) wait_bar_pane_cp09_ParamLimits

0x0f86,	// (0x00035c60) bg_popup_heading_pane_cp02

0x0f70,	// (0x00035c4a) popup_notif_wgt_heading_pane_g1

0x0f78,	// (0x00035c52) popup_notif_wgt_heading_pane_t1

0x0f86,	// (0x00035c60) main_vids_pane

0x0f86,	// (0x00035c60) vids_listscroll_pane

0xd350,	// (0x0004202a) scroll_pane_cp040

0x0f86,	// (0x00035c60) vids_list_pane

0xd35b,	// (0x00042035) vids_list_double_pane_ParamLimits

0xd35b,	// (0x00042035) vids_list_double_pane

0xd376,	// (0x00042050) vids_list_double_pane_g1

0xd37f,	// (0x00042059) vids_list_double_pane_t1

0xd38f,	// (0x00042069) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00044c3c) vids_list_double_pane_t

0x14b5,	// (0x0003618f) main_ncimui_pane_ParamLimits

0xbfe9,	// (0x00040cc3) main_ncimui_pane_g1_ParamLimits

0xbff5,	// (0x00040ccf) main_ncimui_pane_g2_ParamLimits

0xbff5,	// (0x00040ccf) main_ncimui_pane_g2

0x0001,

0xfbf5,	// (0x000448cf) main_ncimui_pane_g_ParamLimits

0xfbf5,	// (0x000448cf) main_ncimui_pane_g

0xd2d6,	// (0x00041fb0) main_welc_pane_g1_ParamLimits

0xd2d6,	// (0x00041fb0) main_welc_pane_g1

0xd2e2,	// (0x00041fbc) main_welc_pane_g2_ParamLimits

0xd2e2,	// (0x00041fbc) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00044c37) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00044c37) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
