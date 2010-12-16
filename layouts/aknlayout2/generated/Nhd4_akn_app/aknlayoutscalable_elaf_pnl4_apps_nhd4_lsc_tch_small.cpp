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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00044101 };

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
0x1111,	// (0x00045212) Screen

0x111d,	// (0x0004521e) application_window

0x1163,	// (0x00045264) area_bottom_pane_ParamLimits

0x1163,	// (0x00045264) area_bottom_pane

0x119c,	// (0x0004529d) area_top_pane_ParamLimits

0x119c,	// (0x0004529d) area_top_pane

0x9fbd,	// (0x0004e0be) call_video_uplink_pane_ParamLimits

0x9fbd,	// (0x0004e0be) call_video_uplink_pane

0x122a,	// (0x0004532b) main_pane_ParamLimits

0x122a,	// (0x0004532b) main_pane

0xbfa7,	// (0x000500a8) context_pane

0x44b8,	// (0x000485b9) navi_pane

0x44ea,	// (0x000485eb) popup_cale_events_window_ParamLimits

0x44ea,	// (0x000485eb) popup_cale_events_window

0xbfba,	// (0x000500bb) popup_mup_playback_window

0x4502,	// (0x00048603) signal_pane

0x1bdf,	// (0x00045ce0) main_browser_pane

0xa144,	// (0x0004e245) main_burst_pane

0x4220,	// (0x00048321) main_calc_pane

0xbf47,	// (0x00050048) main_cale_day_pane

0x1e70,	// (0x00045f71) main_cale_month_pane

0xbf47,	// (0x00050048) main_cale_week_pane

0xa144,	// (0x0004e245) main_call_pane

0x17c5,	// (0x000458c6) main_call_poc_pane

0xa144,	// (0x0004e245) main_camera_pane

0xa144,	// (0x0004e245) main_chi_dic_pane

0xa94b,	// (0x0004ea4c) main_clock_pane

0x17c5,	// (0x000458c6) main_fmradio_pane

0xa144,	// (0x0004e245) main_graph_messa_pane

0x17c5,	// (0x000458c6) main_help_pane

0x1bdf,	// (0x00045ce0) main_im_pane

0x1a20,	// (0x00045b21) main_image_pane_ParamLimits

0x1a20,	// (0x00045b21) main_image_pane

0x17c5,	// (0x000458c6) main_location2_pane

0xa144,	// (0x0004e245) main_location_pane

0x1a20,	// (0x00045b21) main_messa_pane

0x17c5,	// (0x000458c6) main_mp2_pane

0xa144,	// (0x0004e245) main_mp_pane

0x17c5,	// (0x000458c6) main_msg_pane

0x17c5,	// (0x000458c6) main_mup_eq_pane

0x17c5,	// (0x000458c6) main_mup_pane

0x1bdf,	// (0x00045ce0) main_notes_pane

0x17c5,	// (0x000458c6) main_pec_pane

0x17c5,	// (0x000458c6) main_phob_pane

0x17c5,	// (0x000458c6) main_pinb_pane

0x17c5,	// (0x000458c6) main_postcard_pane

0x17c5,	// (0x000458c6) main_qdial_pane

0xa144,	// (0x0004e245) main_skin_pane

0x17c5,	// (0x000458c6) main_smil2_pane

0xa144,	// (0x0004e245) main_smil_pane

0xa144,	// (0x0004e245) main_video_pane

0xa144,	// (0x0004e245) main_video_tele_pane

0x1a20,	// (0x00045b21) main_viewer_pane_ParamLimits

0x1a20,	// (0x00045b21) main_viewer_pane

0xa144,	// (0x0004e245) main_vorec_pane

0x4274,	// (0x00048375) popup_blid_sat_info_window_ParamLimits

0x4274,	// (0x00048375) popup_blid_sat_info_window

0x42cc,	// (0x000483cd) popup_dyc_status_message_window_ParamLimits

0x42cc,	// (0x000483cd) popup_dyc_status_message_window

0x42e4,	// (0x000483e5) popup_grid_large_graphic_window_ParamLimits

0x42e4,	// (0x000483e5) popup_grid_large_graphic_window

0x4394,	// (0x00048495) popup_loc_request_window_ParamLimits

0x4394,	// (0x00048495) popup_loc_request_window

0x4490,	// (0x00048591) popup_wml_address_window_ParamLimits

0x4490,	// (0x00048591) popup_wml_address_window

0x405a,	// (0x0004815b) call_muted_g1

0x3d4f,	// (0x00047e50) popup_call_audio_conf_window_ParamLimits

0x3d4f,	// (0x00047e50) popup_call_audio_conf_window

0x406e,	// (0x0004816f) popup_call_audio_first_window_ParamLimits

0x406e,	// (0x0004816f) popup_call_audio_first_window

0x40e4,	// (0x000481e5) popup_call_audio_in_window_ParamLimits

0x40e4,	// (0x000481e5) popup_call_audio_in_window

0x4120,	// (0x00048221) popup_call_audio_out_window_ParamLimits

0x4120,	// (0x00048221) popup_call_audio_out_window

0x415a,	// (0x0004825b) popup_call_audio_second_window_ParamLimits

0x415a,	// (0x0004825b) popup_call_audio_second_window

0x41b0,	// (0x000482b1) popup_call_audio_wait_window_ParamLimits

0x41b0,	// (0x000482b1) popup_call_audio_wait_window

0x41e5,	// (0x000482e6) popup_number_entry_window_ParamLimits

0x41e5,	// (0x000482e6) popup_number_entry_window

0x1359,	// (0x0004545a) bg_popup_call_pane_cp05_ParamLimits

0x1359,	// (0x0004545a) bg_popup_call_pane_cp05

0x1379,	// (0x0004547a) popup_number_entry_window_t1

0x138c,	// (0x0004548d) popup_number_entry_window_t2

0x139e,	// (0x0004549f) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x0005311e) popup_number_entry_window_t

0x13e5,	// (0x000454e6) text_title_cp2

0x13f8,	// (0x000454f9) bg_popup_call_pane_cp_ParamLimits

0x13f8,	// (0x000454f9) bg_popup_call_pane_cp

0x1406,	// (0x00045507) call_thumbnail_pane

0x140e,	// (0x0004550f) popup_call_audio_in_window_g1_ParamLimits

0x140e,	// (0x0004550f) popup_call_audio_in_window_g1

0x141a,	// (0x0004551b) popup_call_audio_in_window_g2_ParamLimits

0x141a,	// (0x0004551b) popup_call_audio_in_window_g2

0x1426,	// (0x00045527) popup_call_audio_in_window_g3_ParamLimits

0x1426,	// (0x00045527) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x00053127) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x00053127) popup_call_audio_in_window_g

0x1432,	// (0x00045533) popup_call_audio_in_window_t1_ParamLimits

0x1432,	// (0x00045533) popup_call_audio_in_window_t1

0x144e,	// (0x0004554f) popup_call_audio_in_window_t2_ParamLimits

0x144e,	// (0x0004554f) popup_call_audio_in_window_t2

0x146a,	// (0x0004556b) popup_call_audio_in_window_t3_ParamLimits

0x146a,	// (0x0004556b) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x0005312e) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x0005312e) popup_call_audio_in_window_t

0x13f8,	// (0x000454f9) bg_popup_call_pane_cp01_ParamLimits

0x13f8,	// (0x000454f9) bg_popup_call_pane_cp01

0x1406,	// (0x00045507) call_thumbnail_pane_cp02

0x147d,	// (0x0004557e) call_type_pane_cp022

0x1485,	// (0x00045586) popup_call_audio_out_window_g1_ParamLimits

0x1485,	// (0x00045586) popup_call_audio_out_window_g1

0x1497,	// (0x00045598) popup_call_audio_out_window_g2_ParamLimits

0x1497,	// (0x00045598) popup_call_audio_out_window_g2

0x14a3,	// (0x000455a4) popup_call_audio_out_window_g3_ParamLimits

0x14a3,	// (0x000455a4) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x00053135) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x00053135) popup_call_audio_out_window_g

0x14b5,	// (0x000455b6) popup_call_audio_out_window_t1_ParamLimits

0x14b5,	// (0x000455b6) popup_call_audio_out_window_t1

0x14cd,	// (0x000455ce) popup_call_audio_out_window_t2_ParamLimits

0x14cd,	// (0x000455ce) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x0005313c) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x0005313c) popup_call_audio_out_window_t

0x14e2,	// (0x000455e3) bg_popup_call_pane_ParamLimits

0x14e2,	// (0x000455e3) bg_popup_call_pane

0x1566,	// (0x00045667) call_thumbnail_pane_cp_ParamLimits

0x1566,	// (0x00045667) call_thumbnail_pane_cp

0x158a,	// (0x0004568b) call_type_pane_cp01_ParamLimits

0x158a,	// (0x0004568b) call_type_pane_cp01

0x15ce,	// (0x000456cf) popup_call_audio_first_window_g1_ParamLimits

0x15ce,	// (0x000456cf) popup_call_audio_first_window_g1

0x161a,	// (0x0004571b) popup_call_audio_first_window_g2_ParamLimits

0x161a,	// (0x0004571b) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x00053141) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x00053141) popup_call_audio_first_window_g

0x165e,	// (0x0004575f) popup_call_audio_first_window_t1_ParamLimits

0x165e,	// (0x0004575f) popup_call_audio_first_window_t1

0x170a,	// (0x0004580b) popup_call_audio_first_window_t4_ParamLimits

0x170a,	// (0x0004580b) popup_call_audio_first_window_t4

0x1796,	// (0x00045897) popup_call_audio_first_window_t5_ParamLimits

0x1796,	// (0x00045897) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x00053146) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x00053146) popup_call_audio_first_window_t

0x17c5,	// (0x000458c6) bg_popup_call_pane_cp02

0x17cf,	// (0x000458d0) call_type_pane_cp023

0x17d7,	// (0x000458d8) popup_call_audio_wait_window_g1

0x17df,	// (0x000458e0) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x0005314d) popup_call_audio_wait_window_g

0x17e7,	// (0x000458e8) popup_call_audio_wait_window_t3

0x17f5,	// (0x000458f6) bg_popup_call_pane_cp03_ParamLimits

0x17f5,	// (0x000458f6) bg_popup_call_pane_cp03

0x1855,	// (0x00045956) call_thumbnail_pane_cp011_ParamLimits

0x1855,	// (0x00045956) call_thumbnail_pane_cp011

0x1861,	// (0x00045962) call_type_pane_cp034_ParamLimits

0x1861,	// (0x00045962) call_type_pane_cp034

0x189d,	// (0x0004599e) popup_call_audio_second_window_g1_ParamLimits

0x189d,	// (0x0004599e) popup_call_audio_second_window_g1

0x18d9,	// (0x000459da) popup_call_audio_second_window_g2_ParamLimits

0x18d9,	// (0x000459da) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x00053152) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x00053152) popup_call_audio_second_window_g

0x1915,	// (0x00045a16) popup_call_audio_second_window_t1_ParamLimits

0x1915,	// (0x00045a16) popup_call_audio_second_window_t1

0x1996,	// (0x00045a97) popup_call_audio_second_window_t2_ParamLimits

0x1996,	// (0x00045a97) popup_call_audio_second_window_t2

0x19cc,	// (0x00045acd) popup_call_audio_second_window_t3_ParamLimits

0x19cc,	// (0x00045acd) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x00053157) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x00053157) popup_call_audio_second_window_t

0x17c5,	// (0x000458c6) bg_popup_call_pane_cp04

0x1a02,	// (0x00045b03) list_conf_pane

0x1a0a,	// (0x00045b0b) popup_call_audio_conf_window_t1

0x1a18,	// (0x00045b19) call_thumbnail_pane_g1

0x1a20,	// (0x00045b21) bg_pinb_pane_ParamLimits

0x1a20,	// (0x00045b21) bg_pinb_pane

0x1a2e,	// (0x00045b2f) find_pinb_pane

0x1a20,	// (0x00045b21) listscroll_pinb_pane_ParamLimits

0x1a20,	// (0x00045b21) listscroll_pinb_pane

0x1a38,	// (0x00045b39) pinb_bg_pane_g1

0x1a38,	// (0x00045b39) pinb_bg_pane_g2

0x1a38,	// (0x00045b39) pinb_bg_pane_g3

0x1a38,	// (0x00045b39) pinb_bg_pane_g4

0x1a38,	// (0x00045b39) pinb_bg_pane_g5

0x1a38,	// (0x00045b39) pinb_bg_pane_g6

0x1a38,	// (0x00045b39) pinb_bg_pane_g7

0x1a38,	// (0x00045b39) pinb_bg_pane_g8

0x1a38,	// (0x00045b39) pinb_bg_pane_g9

0x1a38,	// (0x00045b39) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x0005315e) pinb_bg_pane_g

0x1129,	// (0x0004522a) grid_pinb_pane

0x1129,	// (0x0004522a) list_pinb_pane

0x12ed,	// (0x000453ee) scroll_pane_cp01_ParamLimits

0x12ed,	// (0x000453ee) scroll_pane_cp01

0x1a42,	// (0x00045b43) find_pinb_pane_g1_ParamLimits

0x1a42,	// (0x00045b43) find_pinb_pane_g1

0x1a5a,	// (0x00045b5b) find_pinb_pane_t1

0x1a6c,	// (0x00045b6d) find_pinb_pane_t2

0x0001,

0xf077,	// (0x00053178) find_pinb_pane_t

0x1a81,	// (0x00045b82) input_focus_pane_cp01_ParamLimits

0x1a81,	// (0x00045b82) input_focus_pane_cp01

0x1a8d,	// (0x00045b8e) cell_pinb_pane_ParamLimits

0x1a8d,	// (0x00045b8e) cell_pinb_pane

0x1a9b,	// (0x00045b9c) cell_pinb_pane_g1_ParamLimits

0x1a9b,	// (0x00045b9c) cell_pinb_pane_g1

0x1aa9,	// (0x00045baa) cell_pinb_pane_g2_ParamLimits

0x1aa9,	// (0x00045baa) cell_pinb_pane_g2

0x1aa9,	// (0x00045baa) cell_pinb_pane_g3_ParamLimits

0x1aa9,	// (0x00045baa) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x0005317d) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x0005317d) cell_pinb_pane_g

0x17c5,	// (0x000458c6) grid_highlight_pane_cp01

0x1a8d,	// (0x00045b8e) list_pinb_item_pane_ParamLimits

0x1a8d,	// (0x00045b8e) list_pinb_item_pane

0x1129,	// (0x0004522a) list_highlight_pane_cp02

0x1ab7,	// (0x00045bb8) list_pinb_item_pane_g1_ParamLimits

0x1ab7,	// (0x00045bb8) list_pinb_item_pane_g1

0x1aa9,	// (0x00045baa) list_pinb_item_pane_g2_ParamLimits

0x1aa9,	// (0x00045baa) list_pinb_item_pane_g2

0x1a9b,	// (0x00045b9c) list_pinb_item_pane_g3_ParamLimits

0x1a9b,	// (0x00045b9c) list_pinb_item_pane_g3

0x1aa9,	// (0x00045baa) list_pinb_item_pane_g4_ParamLimits

0x1aa9,	// (0x00045baa) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x00053184) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x00053184) list_pinb_item_pane_g

0x1ac5,	// (0x00045bc6) list_pinb_item_pane_t1_ParamLimits

0x1ac5,	// (0x00045bc6) list_pinb_item_pane_t1

0x1af7,	// (0x00045bf8) calc_display_pane

0x1b1c,	// (0x00045c1d) calc_paper_pane

0x1b3f,	// (0x00045c40) grid_calc_pane

0x1129,	// (0x0004522a) bg_list_pane_cp01

0x1b6d,	// (0x00045c6e) clock_g1

0x1b6d,	// (0x00045c6e) clock_g2

0x0001,

0xf08c,	// (0x0005318d) clock_g

0x1b77,	// (0x00045c78) clock_t1_ParamLimits

0x1b77,	// (0x00045c78) clock_t1

0x1b8b,	// (0x00045c8c) clock_t2_ParamLimits

0x1b8b,	// (0x00045c8c) clock_t2

0x1b8b,	// (0x00045c8c) clock_t3_ParamLimits

0x1b8b,	// (0x00045c8c) clock_t3

0x1b8b,	// (0x00045c8c) clock_t4_ParamLimits

0x1b8b,	// (0x00045c8c) clock_t4

0x1b77,	// (0x00045c78) clock_t5_ParamLimits

0x1b77,	// (0x00045c78) clock_t5

0x1b8b,	// (0x00045c8c) clock_t6_ParamLimits

0x1b8b,	// (0x00045c8c) clock_t6

0x1b8b,	// (0x00045c8c) clock_t7_ParamLimits

0x1b8b,	// (0x00045c8c) clock_t7

0x1b8b,	// (0x00045c8c) clock_t8_ParamLimits

0x1b8b,	// (0x00045c8c) clock_t8

0x1b8b,	// (0x00045c8c) clock_t9_ParamLimits

0x1b8b,	// (0x00045c8c) clock_t9

0x0008,

0xf091,	// (0x00053192) clock_t_ParamLimits

0xf091,	// (0x00053192) clock_t

0x1129,	// (0x0004522a) popup_clock_analogue_window_cp02

0x1129,	// (0x0004522a) popup_clock_digital_window_cp01

0x17c5,	// (0x000458c6) listscroll_help_pane

0x17c5,	// (0x000458c6) phob_pre_status_pane

0x1b9f,	// (0x00045ca0) grid_qdial_pane

0x1a20,	// (0x00045b21) listscroll_mce_pane

0x1a20,	// (0x00045b21) bg_notes_pane

0x1ba9,	// (0x00045caa) list_notes_pane

0x1bb7,	// (0x00045cb8) scroll_pane_cp06

0x1bcb,	// (0x00045ccc) bg_calc_paper_pane

0x9fe3,	// (0x0004e0e4) list_calc_pane

0x1bdf,	// (0x00045ce0) bg_calc_display_pane

0x1beb,	// (0x00045cec) calc_display_pane_t1

0x1bfd,	// (0x00045cfe) calc_display_pane_t2

0x9ffd,	// (0x0004e0fe) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x000531a5) calc_display_pane_t

0x1c0f,	// (0x00045d10) cell_calc_pane_ParamLimits

0x1c0f,	// (0x00045d10) cell_calc_pane

0x1c44,	// (0x00045d45) bg_calc_paper_pane_g1

0x1c50,	// (0x00045d51) bg_calc_paper_pane_g2

0x1c5c,	// (0x00045d5d) bg_calc_paper_pane_g3

0x1c68,	// (0x00045d69) bg_calc_paper_pane_g4

0x1c74,	// (0x00045d75) bg_calc_paper_pane_g5

0x1c80,	// (0x00045d81) bg_calc_paper_pane_g6

0x1c8f,	// (0x00045d90) bg_calc_paper_pane_g7

0x1c9e,	// (0x00045d9f) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x000531ac) bg_calc_paper_pane_g

0x1cb1,	// (0x00045db2) calc_bg_paper_pane_g9

0x1cc4,	// (0x00045dc5) list_calc_item_pane_ParamLimits

0x1cc4,	// (0x00045dc5) list_calc_item_pane

0x1cd9,	// (0x00045dda) list_calc_item_pane_g1

0xa00f,	// (0x0004e110) list_calc_item_pane_t1_ParamLimits

0xa00f,	// (0x0004e110) list_calc_item_pane_t1

0x1ce6,	// (0x00045de7) list_calc_item_pane_t2_ParamLimits

0x1ce6,	// (0x00045de7) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x000531bd) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x000531bd) list_calc_item_pane_t

0x1a38,	// (0x00045b39) cell_calc_pane_g1

0x1d18,	// (0x00045e19) grid_highlight_pane_cp02

0x1d3a,	// (0x00045e3b) bg_calc_display_pane_g1

0x1d43,	// (0x00045e44) bg_calc_display_pane_g2

0xda20,	// (0x00051b21) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x000531c7) bg_calc_display_pane_g

0x1d4d,	// (0x00045e4e) cell_qdial_pane_ParamLimits

0x1d4d,	// (0x00045e4e) cell_qdial_pane

0x1d61,	// (0x00045e62) cell_qdial_pane_g1_ParamLimits

0x1d61,	// (0x00045e62) cell_qdial_pane_g1

0x1d77,	// (0x00045e78) cell_qdial_pane_g2_ParamLimits

0x1d77,	// (0x00045e78) cell_qdial_pane_g2

0x1d87,	// (0x00045e88) cell_qdial_pane_g3_ParamLimits

0x1d87,	// (0x00045e88) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x000531ce) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x000531ce) cell_qdial_pane_g

0x1da9,	// (0x00045eaa) cell_qdial_pane_t1_ParamLimits

0x1da9,	// (0x00045eaa) cell_qdial_pane_t1

0x1dc1,	// (0x00045ec2) cell_qdial_pane_t2_ParamLimits

0x1dc1,	// (0x00045ec2) cell_qdial_pane_t2

0x1dd4,	// (0x00045ed5) cell_qdial_pane_t3_ParamLimits

0x1dd4,	// (0x00045ed5) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x000531d7) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x000531d7) cell_qdial_pane_t

0x17c5,	// (0x000458c6) grid_highlight_pane_cp04

0x1de7,	// (0x00045ee8) thumbnail_qdial_pane_ParamLimits

0x1de7,	// (0x00045ee8) thumbnail_qdial_pane

0xa029,	// (0x0004e12a) list_help_pane

0xa032,	// (0x0004e133) scroll_pane_cp02

0x1e3b,	// (0x00045f3c) help_list_pane_t1_ParamLimits

0x1e3b,	// (0x00045f3c) help_list_pane_t1

0xa03b,	// (0x0004e13c) bg_notes_pane_g2

0xa043,	// (0x0004e144) bg_notes_pane_g3

0xa04b,	// (0x0004e14c) notes_bg_pane_g1

0xa053,	// (0x0004e154) notes_bg_pane_g4

0xa05b,	// (0x0004e15c) notes_bg_pane_g5

0xa063,	// (0x0004e164) notes_bg_pane_g6

0xa06b,	// (0x0004e16c) notes_bg_pane_g7

0xa073,	// (0x0004e174) notes_bg_pane_g8

0xa07b,	// (0x0004e17c) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x000531f5) notes_bg_pane_g

0x1e5a,	// (0x00045f5b) list_notes_text_pane_ParamLimits

0x1e5a,	// (0x00045f5b) list_notes_text_pane

0xa083,	// (0x0004e184) list_notes_text_pane_g1

0x0ba7,	// (0x00044ca8) list_notes_text_pane_t1

0x1e70,	// (0x00045f71) listscroll_cale_week_pane

0x1e9c,	// (0x00045f9d) bg_cale_heading_pane

0xa0a6,	// (0x0004e1a7) bg_cale_pane_cp01

0x1eb4,	// (0x00045fb5) cale_week_corner_pane

0x1ed3,	// (0x00045fd4) cale_week_day_heading_pane

0x1ef0,	// (0x00045ff1) cale_week_scroll_pane_g1

0x1f03,	// (0x00046004) cale_week_scroll_pane_g2

0x1f1b,	// (0x0004601c) cale_week_scroll_pane_g3

0x1f33,	// (0x00046034) cale_week_scroll_pane_g4

0x1f4b,	// (0x0004604c) cale_week_scroll_pane_g5

0x1f6b,	// (0x0004606c) cale_week_scroll_pane_g6

0x1f8b,	// (0x0004608c) cale_week_scroll_pane_g7

0x1fab,	// (0x000460ac) cale_week_scroll_pane_g8

0x1fcf,	// (0x000460d0) cale_week_scroll_pane_g9

0x1fe7,	// (0x000460e8) cale_week_scroll_pane_g10

0x1fff,	// (0x00046100) cale_week_scroll_pane_g11

0x2017,	// (0x00046118) cale_week_scroll_pane_g12

0x202f,	// (0x00046130) cale_week_scroll_pane_g13

0x202f,	// (0x00046130) cale_week_scroll_pane_g14

0x202f,	// (0x00046130) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x00053204) cale_week_scroll_pane_g

0x206b,	// (0x0004616c) cale_week_time_pane

0x208f,	// (0x00046190) grid_cale_week_pane

0xa0d5,	// (0x0004e1d6) scroll_pane_cp08

0x20b5,	// (0x000461b6) cell_cale_week_pane_ParamLimits

0x20b5,	// (0x000461b6) cell_cale_week_pane

0x2143,	// (0x00046244) cale_week_day_heading_pane_t1

0x216d,	// (0x0004626e) cale_week_day_heading_pane_t2

0x219c,	// (0x0004629d) cale_week_day_heading_pane_t3

0x21cb,	// (0x000462cc) cale_week_day_heading_pane_t4

0x21fa,	// (0x000462fb) cale_week_day_heading_pane_t5

0x2231,	// (0x00046332) cale_week_day_heading_pane_t6

0x2268,	// (0x00046369) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x00053225) cale_week_day_heading_pane_t

0xa0f2,	// (0x0004e1f3) bg_cale_side_pane

0x2292,	// (0x00046393) cale_week_time_pane_t1

0x22ac,	// (0x000463ad) cale_week_time_pane_t2

0x22c6,	// (0x000463c7) cale_week_time_pane_t3

0x22e0,	// (0x000463e1) cale_week_time_pane_t4

0x22fa,	// (0x000463fb) cale_week_time_pane_t5

0x2314,	// (0x00046415) cale_week_time_pane_t6

0x232e,	// (0x0004642f) cale_week_time_pane_t7

0x2348,	// (0x00046449) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x00053234) cale_week_time_pane_t

0x2368,	// (0x00046469) cell_cale_week_pane_g2

0x238c,	// (0x0004648d) cell_cale_week_pane_g3_ParamLimits

0x238c,	// (0x0004648d) cell_cale_week_pane_g3

0xa100,	// (0x0004e201) grid_highlight_pane_cp07

0xa108,	// (0x0004e209) listscroll_gms_pane

0xa112,	// (0x0004e213) grid_gms_pane

0xa11b,	// (0x0004e21c) listscroll_gms_pane_g1

0xa123,	// (0x0004e224) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x00053245) listscroll_gms_pane_g

0x23a4,	// (0x000464a5) scroll_pane_cp010

0x23af,	// (0x000464b0) cell_gms_pane_ParamLimits

0x23af,	// (0x000464b0) cell_gms_pane

0x23c1,	// (0x000464c2) cell_gms_pane_g1

0xa12b,	// (0x0004e22c) cell_gms_pane_g2

0xa083,	// (0x0004e184) cell_gms_pane_g3

0xa133,	// (0x0004e234) cell_gms_pane_g4

0x0003,

0xf149,	// (0x0005324a) cell_gms_pane_g

0xa13c,	// (0x0004e23d) grid_highlight_pane_cp09

0x3fe2,	// (0x000480e3) phob_pre_status_pane_g1

0x3fea,	// (0x000480eb) phob_pre_status_pane_g2

0x3ff2,	// (0x000480f3) phob_pre_status_pane_g3

0x3ffa,	// (0x000480fb) phob_pre_status_pane_g4

0x0004,

0xf4f8,	// (0x000535f9) phob_pre_status_pane_g

0x400a,	// (0x0004810b) phob_pre_status_pane_t1

0x4018,	// (0x00048119) phob_pre_status_pane_t2

0x4028,	// (0x00048129) phob_pre_status_pane_t3

0x0002,

0xf503,	// (0x00053604) phob_pre_status_pane_t

0xa144,	// (0x0004e245) bg_list_pane_cp05

0x23d1,	// (0x000464d2) grid_vorec_pane

0x23d9,	// (0x000464da) vorec_t1

0x23e7,	// (0x000464e8) vorec_t2

0x23f5,	// (0x000464f6) vorec_t3

0x2403,	// (0x00046504) vorec_t4

0xd6b1,	// (0x000517b2) vorec_t5

0x8b79,	// (0x0004cc7a) vorec_t6

0x0004,

0xf152,	// (0x00053253) vorec_t

0x8b87,	// (0x0004cc88) wait_bar_pane_cp01

0x241f,	// (0x00046520) cell_vorec_pane_ParamLimits

0x241f,	// (0x00046520) cell_vorec_pane

0xa14c,	// (0x0004e24d) cell_vorec_pane_g1

0x17c5,	// (0x000458c6) grid_highlight_pane_cp05

0x12ed,	// (0x000453ee) cams_zoom_pane

0x12ed,	// (0x000453ee) image_vga_pane

0x1a9b,	// (0x00045b9c) main_camera_pane_g1

0x1a9b,	// (0x00045b9c) main_camera_pane_g2

0x1a9b,	// (0x00045b9c) main_camera_pane_g3

0x1a9b,	// (0x00045b9c) main_camera_pane_g4

0x1a9b,	// (0x00045b9c) main_camera_pane_g5

0x1a9b,	// (0x00045b9c) main_camera_pane_g6

0x1a9b,	// (0x00045b9c) main_camera_pane_g7

0x0007,

0xf15d,	// (0x0005325e) main_camera_pane_g

0x1b77,	// (0x00045c78) main_camera_pane_t1

0x1b77,	// (0x00045c78) main_camera_pane_t2

0x0001,

0xf16e,	// (0x0005326f) main_camera_pane_t

0x2446,	// (0x00046547) cams_zoom_pane_cp_ParamLimits

0x2446,	// (0x00046547) cams_zoom_pane_cp

0x247a,	// (0x0004657b) image_cif_pane_ParamLimits

0x247a,	// (0x0004657b) image_cif_pane

0x1129,	// (0x0004522a) image_subqcif_pane

0x248c,	// (0x0004658d) main_video_pane_g1_ParamLimits

0x248c,	// (0x0004658d) main_video_pane_g1

0x24ba,	// (0x000465bb) main_video_pane_g2_ParamLimits

0x24ba,	// (0x000465bb) main_video_pane_g2

0x24f4,	// (0x000465f5) main_video_pane_g3_ParamLimits

0x24f4,	// (0x000465f5) main_video_pane_g3

0x24f4,	// (0x000465f5) main_video_pane_g4_ParamLimits

0x24f4,	// (0x000465f5) main_video_pane_g4

0x2528,	// (0x00046629) main_video_pane_g5_ParamLimits

0x2528,	// (0x00046629) main_video_pane_g5

0xa156,	// (0x0004e257) main_video_pane_g6_ParamLimits

0xa156,	// (0x0004e257) main_video_pane_g6

0x0006,

0xf173,	// (0x00053274) main_video_pane_g_ParamLimits

0xf173,	// (0x00053274) main_video_pane_g

0x2544,	// (0x00046645) main_video_pane_t1_ParamLimits

0x2544,	// (0x00046645) main_video_pane_t1

0x1b6d,	// (0x00045c6e) cams_zoom_pane_g1

0x1b6d,	// (0x00045c6e) cams_zoom_pane_g2

0x1b6d,	// (0x00045c6e) cams_zoom_pane_g3

0x1b6d,	// (0x00045c6e) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x00053283) cams_zoom_pane_g

0x12ed,	// (0x000453ee) grid_cams_pane

0x12ed,	// (0x000453ee) linegrid_cams_pane

0x2588,	// (0x00046689) cell_cams_pane_ParamLimits

0x2588,	// (0x00046689) cell_cams_pane

0x1129,	// (0x0004522a) cams_burst_image_pane

0x1b6d,	// (0x00045c6e) cell_cams_pane_g1

0x1129,	// (0x0004522a) grid_highlight_pane_cp03

0x1a38,	// (0x00045b39) mp_bg_pane_g1

0x1129,	// (0x0004522a) bg_list_pane_cp03

0x1129,	// (0x0004522a) bg_mp_pane

0x1129,	// (0x0004522a) grid_mp_pane

0x1b6d,	// (0x00045c6e) media_player_g1

0xa671,	// (0x0004e772) media_player_t1

0xa671,	// (0x0004e772) media_player_t2

0xa671,	// (0x0004e772) media_player_t3

0xa671,	// (0x0004e772) media_player_t4

0xa671,	// (0x0004e772) media_player_t5

0xa671,	// (0x0004e772) media_player_t6

0xa671,	// (0x0004e772) media_player_t7

0x0006,

0xf4e2,	// (0x000535e3) media_player_t

0x1129,	// (0x0004522a) wait_bar_pane_cp02

0xf4c7,	// (0x000535c8) main_usb_pane_t

0xa94b,	// (0x0004ea4c) cell_mp_pane

0x1a38,	// (0x00045b39) cell_mp_pane_g1

0x17c5,	// (0x000458c6) grid_highlight_pane_cp06

0xa170,	// (0x0004e271) grid_skin_colour_pane

0xa178,	// (0x0004e279) list_highlight_pane_cp03

0x259d,	// (0x0004669e) skin_g1

0xa180,	// (0x0004e281) skin_t1

0xa18f,	// (0x0004e290) skin_t2

0x0001,

0xf1b0,	// (0x000532b1) skin_t

0x25a5,	// (0x000466a6) cell_skin_colour_pane_ParamLimits

0x25a5,	// (0x000466a6) cell_skin_colour_pane

0xa19d,	// (0x0004e29e) cell_skin_colour_pane_g1

0x261e,	// (0x0004671f) call_video_g1_ParamLimits

0x261e,	// (0x0004671f) call_video_g1

0x263a,	// (0x0004673b) call_video_g2_ParamLimits

0x263a,	// (0x0004673b) call_video_g2

0x0001,

0xf1b5,	// (0x000532b6) call_video_g_ParamLimits

0xf1b5,	// (0x000532b6) call_video_g

0x268c,	// (0x0004678d) call_video_uplink_pane_cp1_ParamLimits

0x268c,	// (0x0004678d) call_video_uplink_pane_cp1

0xa1af,	// (0x0004e2b0) call_video_uplink_pane_cp2

0x272b,	// (0x0004682c) video_down_crop_pane_ParamLimits

0x272b,	// (0x0004682c) video_down_crop_pane

0x2814,	// (0x00046915) video_down_pane_ParamLimits

0x2814,	// (0x00046915) video_down_pane

0xa1b7,	// (0x0004e2b8) video_down_subqcif_pane_ParamLimits

0xa1b7,	// (0x0004e2b8) video_down_subqcif_pane

0xa1cf,	// (0x0004e2d0) video_down_subqcif_pane_cp_ParamLimits

0xa1cf,	// (0x0004e2d0) video_down_subqcif_pane_cp

0xa1f5,	// (0x0004e2f6) im_reading_pane_ParamLimits

0xa1f5,	// (0x0004e2f6) im_reading_pane

0x2924,	// (0x00046a25) im_writing_pane_ParamLimits

0x2924,	// (0x00046a25) im_writing_pane

0x293a,	// (0x00046a3b) im_reading_pane_t1

0xa20f,	// (0x0004e310) list_im_pane

0xa220,	// (0x0004e321) scroll_pane_cp07

0x2974,	// (0x00046a75) im_writing_pane_t1_ParamLimits

0x2974,	// (0x00046a75) im_writing_pane_t1

0xa239,	// (0x0004e33a) im_writing_pane_t2_ParamLimits

0xa239,	// (0x0004e33a) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x000532c0) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x000532c0) im_writing_pane_t

0x17c5,	// (0x000458c6) input_focus_pane_cp04

0x17c5,	// (0x000458c6) input_focus_pane_cp05

0x2989,	// (0x00046a8a) list_im_single_pane_ParamLimits

0x2989,	// (0x00046a8a) list_im_single_pane

0x299e,	// (0x00046a9f) list_single_im_pane_t1

0xa144,	// (0x0004e245) blid_accuracy_pane

0xa144,	// (0x0004e245) blid_compass_pane

0xbeff,	// (0x00050000) main_location_t1

0xbeff,	// (0x00050000) main_location_t2

0xbeff,	// (0x00050000) main_location_t3

0x0002,

0xf4f1,	// (0x000535f2) main_location_t

0x17c5,	// (0x000458c6) aid_levels_location

0x1a38,	// (0x00045b39) blid_accuracy_pane_g1

0x1a38,	// (0x00045b39) blid_accuracy_pane_g2

0x0001,

0xf20e,	// (0x0005330f) blid_accuracy_pane_g

0xa281,	// (0x0004e382) wml_content_pane

0xa2bf,	// (0x0004e3c0) wml_button_pane_ParamLimits

0xa2bf,	// (0x0004e3c0) wml_button_pane

0x29ad,	// (0x00046aae) wml_list_single_large_pane_ParamLimits

0x29ad,	// (0x00046aae) wml_list_single_large_pane

0x29c2,	// (0x00046ac3) wml_list_single_medium_pane_ParamLimits

0x29c2,	// (0x00046ac3) wml_list_single_medium_pane

0x29d9,	// (0x00046ada) wml_list_single_small_pane_ParamLimits

0x29d9,	// (0x00046ada) wml_list_single_small_pane

0xa2d3,	// (0x0004e3d4) wml_selection_box_pane_ParamLimits

0xa2d3,	// (0x0004e3d4) wml_selection_box_pane

0xa2e6,	// (0x0004e3e7) wml_list_single_pane_t1

0xa2f5,	// (0x0004e3f6) wml_list_single_medium_pane_t1

0xa304,	// (0x0004e405) wml_list_single_large_pane_t1

0xa313,	// (0x0004e414) input_focus_pane_cp02_ParamLimits

0xa313,	// (0x0004e414) input_focus_pane_cp02

0xa326,	// (0x0004e427) wml_selection_box_pane_g1

0xa32f,	// (0x0004e430) wml_selection_box_pane_t1_ParamLimits

0xa32f,	// (0x0004e430) wml_selection_box_pane_t1

0x1a20,	// (0x00045b21) bg_wml_button_pane_ParamLimits

0x1a20,	// (0x00045b21) bg_wml_button_pane

0xa347,	// (0x0004e448) wml_button_pane_g1

0xa34f,	// (0x0004e450) wml_button_pane_t1

0xa347,	// (0x0004e448) wml_button_bg_pane_g1

0xa35f,	// (0x0004e460) wml_button_bg_pane_g2

0xa367,	// (0x0004e468) wml_button_bg_pane_g3

0xa36f,	// (0x0004e470) wml_button_bg_pane_g4

0xa377,	// (0x0004e478) wml_button_bg_pane_g5

0xa37f,	// (0x0004e480) wml_button_bg_pane_g6

0xa387,	// (0x0004e488) wml_button_bg_pane_g7

0xa38f,	// (0x0004e490) wml_button_bg_pane_g8

0xa397,	// (0x0004e498) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x000532c5) wml_button_bg_pane_g

0x29f2,	// (0x00046af3) bg_list_pane_cp02

0xa39f,	// (0x0004e4a0) mce_header_pane_ParamLimits

0xa39f,	// (0x0004e4a0) mce_header_pane

0xa3b5,	// (0x0004e4b6) mce_icon_pane

0xa3b5,	// (0x0004e4b6) mce_image_pane

0xa3be,	// (0x0004e4bf) mce_text_pane_ParamLimits

0xa3be,	// (0x0004e4bf) mce_text_pane

0x29fa,	// (0x00046afb) scroll_pane_cp03

0xa2b7,	// (0x0004e3b8) scroll_pane_cp04

0xa3d1,	// (0x0004e4d2) scroll_pane_cp05_ParamLimits

0xa3d1,	// (0x0004e4d2) scroll_pane_cp05

0x2a04,	// (0x00046b05) mce_header_field_pane_ParamLimits

0x2a04,	// (0x00046b05) mce_header_field_pane

0x2a1b,	// (0x00046b1c) mce_header_field_pane_2_ParamLimits

0x2a1b,	// (0x00046b1c) mce_header_field_pane_2

0x2a31,	// (0x00046b32) mce_header_field_pane_3

0x2a39,	// (0x00046b3a) list_single_mce_message_pane_ParamLimits

0x2a39,	// (0x00046b3a) list_single_mce_message_pane

0x2a4f,	// (0x00046b50) list_single_mce_smart_pane_ParamLimits

0x2a4f,	// (0x00046b50) list_single_mce_smart_pane

0xa3dd,	// (0x0004e4de) input_focus_pane_cp03

0xa3e6,	// (0x0004e4e7) list_header_data_pane

0x2a70,	// (0x00046b71) mce_header_field_pane_t1

0x2a80,	// (0x00046b81) list_single_mce_header_pane_ParamLimits

0x2a80,	// (0x00046b81) list_single_mce_header_pane

0xa3ee,	// (0x0004e4ef) list_single_mce_header_pane_t1

0xa3fd,	// (0x0004e4fe) list_single_mce_message_pane_g1

0xa405,	// (0x0004e506) list_single_mce_message_pane_t1

0x2aba,	// (0x00046bbb) bg_cale_heading_pane_cp01_ParamLimits

0x2aba,	// (0x00046bbb) bg_cale_heading_pane_cp01

0xa413,	// (0x0004e514) bg_cale_pane_cp02_ParamLimits

0xa413,	// (0x0004e514) bg_cale_pane_cp02

0x2af4,	// (0x00046bf5) cale_month_corner_pane

0x2b13,	// (0x00046c14) cale_month_day_heading_pane_ParamLimits

0x2b13,	// (0x00046c14) cale_month_day_heading_pane

0x2b65,	// (0x00046c66) cale_month_pane_g1_ParamLimits

0x2b65,	// (0x00046c66) cale_month_pane_g1

0x2b94,	// (0x00046c95) cale_month_pane_g2_ParamLimits

0x2b94,	// (0x00046c95) cale_month_pane_g2

0x2bc4,	// (0x00046cc5) cale_month_pane_g3_ParamLimits

0x2bc4,	// (0x00046cc5) cale_month_pane_g3

0x2c00,	// (0x00046d01) cale_month_pane_g4_ParamLimits

0x2c00,	// (0x00046d01) cale_month_pane_g4

0x2c3c,	// (0x00046d3d) cale_month_pane_g5_ParamLimits

0x2c3c,	// (0x00046d3d) cale_month_pane_g5

0x2c84,	// (0x00046d85) cale_month_pane_g6_ParamLimits

0x2c84,	// (0x00046d85) cale_month_pane_g6

0x2cd0,	// (0x00046dd1) cale_month_pane_g7_ParamLimits

0x2cd0,	// (0x00046dd1) cale_month_pane_g7

0x2d20,	// (0x00046e21) cale_month_pane_g8_ParamLimits

0x2d20,	// (0x00046e21) cale_month_pane_g8

0x2d74,	// (0x00046e75) cale_month_pane_g9_ParamLimits

0x2d74,	// (0x00046e75) cale_month_pane_g9

0x2dc6,	// (0x00046ec7) cale_month_pane_g10_ParamLimits

0x2dc6,	// (0x00046ec7) cale_month_pane_g10

0x2e18,	// (0x00046f19) cale_month_pane_g11_ParamLimits

0x2e18,	// (0x00046f19) cale_month_pane_g11

0x2e6a,	// (0x00046f6b) cale_month_pane_g12_ParamLimits

0x2e6a,	// (0x00046f6b) cale_month_pane_g12

0x2ebc,	// (0x00046fbd) cale_month_pane_g13_ParamLimits

0x2ebc,	// (0x00046fbd) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x000532d8) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x000532d8) cale_month_pane_g

0x2f0e,	// (0x0004700f) cale_month_week_pane

0x2f32,	// (0x00047033) grid_cale_month_pane_ParamLimits

0x2f32,	// (0x00047033) grid_cale_month_pane

0x2f7b,	// (0x0004707c) cale_month_day_heading_pane_t1

0x2fbd,	// (0x000470be) cale_month_day_heading_pane_t2

0x2ff2,	// (0x000470f3) cale_month_day_heading_pane_t3

0x3027,	// (0x00047128) cale_month_day_heading_pane_t4

0x3064,	// (0x00047165) cale_month_day_heading_pane_t5

0x30a9,	// (0x000471aa) cale_month_day_heading_pane_t6

0x30ee,	// (0x000471ef) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x000532f3) cale_month_day_heading_pane_t

0xa0f2,	// (0x0004e1f3) bg_cale_side_pane_cp01

0x313b,	// (0x0004723c) cale_month_week_pane_t1

0x3154,	// (0x00047255) cale_month_week_pane_t2

0x316d,	// (0x0004726e) cale_month_week_pane_t3

0x3186,	// (0x00047287) cale_month_week_pane_t4

0x319f,	// (0x000472a0) cale_month_week_pane_t5

0x31b8,	// (0x000472b9) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x00053302) cale_month_week_pane_t

0x31d1,	// (0x000472d2) cell_cale_month_pane_ParamLimits

0x31d1,	// (0x000472d2) cell_cale_month_pane

0xa452,	// (0x0004e553) cell_cale_month_pane_g1

0x32ff,	// (0x00047400) cell_cale_month_pane_t1_ParamLimits

0x32ff,	// (0x00047400) cell_cale_month_pane_t1

0xa100,	// (0x0004e201) grid_highlight_pane_cp08

0x1a38,	// (0x00045b39) main_smil_g1

0x332b,	// (0x0004742c) smil_status_pane

0xa45e,	// (0x0004e55f) smil_text_pane

0xa073,	// (0x0004e174) bg_popup_call3_rect_pane_g8

0xa07b,	// (0x0004e17c) bg_popup_call3_rect_pane_g9

0x0008,

0xf213,	// (0x00053314) bg_popup_call3_rect_pane_g

0xc01c,	// (0x0005011d) smil_status_volume_pane_g1

0xa468,	// (0x0004e569) smil_status_pane_t1

0xc04f,	// (0x00050150) volume_smil_pane

0xa47f,	// (0x0004e580) list_smil_text_pane

0x3340,	// (0x00047441) scroll_pane_cp011

0x334b,	// (0x0004744c) smil_text_list_pane_t1_ParamLimits

0x334b,	// (0x0004744c) smil_text_list_pane_t1

0xa489,	// (0x0004e58a) aid_volume_smil_ParamLimits

0xa489,	// (0x0004e58a) aid_volume_smil

0x1a38,	// (0x00045b39) smil_volume_pane_g1

0x1a38,	// (0x00045b39) smil_volume_pane_g2

0x0001,

0xf20e,	// (0x0005330f) smil_volume_pane_g

0x1e70,	// (0x00045f71) listscroll_cale_day_pane

0xa4ab,	// (0x0004e5ac) bg_cale_pane

0xa4c3,	// (0x0004e5c4) list_cale_pane

0xa4e6,	// (0x0004e5e7) scroll_pane_cp09

0xa04b,	// (0x0004e14c) cale_bg_pane_g1

0xa03b,	// (0x0004e13c) cale_bg_pane_g2

0xa043,	// (0x0004e144) cale_bg_pane_g3

0xa053,	// (0x0004e154) cale_bg_pane_g4

0xa05b,	// (0x0004e15c) cale_bg_pane_g5

0xa063,	// (0x0004e164) cale_bg_pane_g6

0xa06b,	// (0x0004e16c) cale_bg_pane_g7

0xa073,	// (0x0004e174) cale_bg_pane_g8

0xa07b,	// (0x0004e17c) cale_bg_pane_g9

0x0008,

0xf213,	// (0x00053314) cale_bg_pane_g

0x3397,	// (0x00047498) list_cale_time_pane_ParamLimits

0x3397,	// (0x00047498) list_cale_time_pane

0xa4f7,	// (0x0004e5f8) list_cale_time_pane_g1_ParamLimits

0xa4f7,	// (0x0004e5f8) list_cale_time_pane_g1

0xa503,	// (0x0004e604) list_cale_time_pane_g2_ParamLimits

0xa503,	// (0x0004e604) list_cale_time_pane_g2

0x33ad,	// (0x000474ae) list_cale_time_pane_g3_ParamLimits

0x33ad,	// (0x000474ae) list_cale_time_pane_g3

0x33bb,	// (0x000474bc) list_cale_time_pane_g4_ParamLimits

0x33bb,	// (0x000474bc) list_cale_time_pane_g4

0x33c9,	// (0x000474ca) list_cale_time_pane_g5_ParamLimits

0x33c9,	// (0x000474ca) list_cale_time_pane_g5

0x0005,

0xf226,	// (0x00053327) list_cale_time_pane_g_ParamLimits

0xf226,	// (0x00053327) list_cale_time_pane_g

0xa51d,	// (0x0004e61e) list_cale_time_pane_t1_ParamLimits

0xa51d,	// (0x0004e61e) list_cale_time_pane_t1

0xa545,	// (0x0004e646) list_cale_time_pane_t2_ParamLimits

0xa545,	// (0x0004e646) list_cale_time_pane_t2

0x3656,	// (0x00047757) aid_blid_cardinal_pane

0x3694,	// (0x00047795) compass_pane_t4

0xa56d,	// (0x0004e66e) list_cale_time_pane_t4_ParamLimits

0xa56d,	// (0x0004e66e) list_cale_time_pane_t4

0x36a2,	// (0x000477a3) compass_pane_t5

0x36b0,	// (0x000477b1) compass_pane_t6

0x36be,	// (0x000477bf) compass_pane_t7

0xaa65,	// (0x0004eb66) navi_pane_cc_t1

0xac54,	// (0x0004ed55) aid_phob_thumbnail_center_pane

0x3a34,	// (0x00047b35) main_postcard_pane_g4_ParamLimits

0x0002,

0xf233,	// (0x00053334) list_cale_time_pane_t_ParamLimits

0xf233,	// (0x00053334) list_cale_time_pane_t

0x13f8,	// (0x000454f9) bg_popup_window_pane_cp02_ParamLimits

0x13f8,	// (0x000454f9) bg_popup_window_pane_cp02

0xa595,	// (0x0004e696) heading_pane_cp01_ParamLimits

0xa595,	// (0x0004e696) heading_pane_cp01

0xa5a1,	// (0x0004e6a2) loc_req_pane_ParamLimits

0xa5a1,	// (0x0004e6a2) loc_req_pane

0xa5b3,	// (0x0004e6b4) loc_type_pane_ParamLimits

0xa5b3,	// (0x0004e6b4) loc_type_pane

0xa5c5,	// (0x0004e6c6) loc_type_pane_t1_ParamLimits

0xa5c5,	// (0x0004e6c6) loc_type_pane_t1

0xa5d7,	// (0x0004e6d8) loc_type_pane_t2_ParamLimits

0xa5d7,	// (0x0004e6d8) loc_type_pane_t2

0xa5e9,	// (0x0004e6ea) loc_type_pane_t3_ParamLimits

0xa5e9,	// (0x0004e6ea) loc_type_pane_t3

0x0002,

0xf23a,	// (0x0005333b) loc_type_pane_t_ParamLimits

0xf23a,	// (0x0005333b) loc_type_pane_t

0xa5fb,	// (0x0004e6fc) list_loc_req_pane

0xa605,	// (0x0004e706) scroll_pane_cp012

0x33d7,	// (0x000474d8) list_single_loc_request_popup_menu_pane_ParamLimits

0x33d7,	// (0x000474d8) list_single_loc_request_popup_menu_pane

0xa610,	// (0x0004e711) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa610,	// (0x0004e711) list_single_loc_request_popup_menu_pane_g1

0xa61c,	// (0x0004e71d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa61c,	// (0x0004e71d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf241,	// (0x00053342) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf241,	// (0x00053342) list_single_loc_request_popup_menu_pane_g

0xa628,	// (0x0004e729) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa628,	// (0x0004e729) list_single_loc_request_popup_menu_pane_t1

0x1a20,	// (0x00045b21) bg_popup_window_pane_cp03_ParamLimits

0x1a20,	// (0x00045b21) bg_popup_window_pane_cp03

0xa63e,	// (0x0004e73f) heading_loc_req_pane_ParamLimits

0xa63e,	// (0x0004e73f) heading_loc_req_pane

0x33e4,	// (0x000474e5) popup_dyc_status_message_window_g1_ParamLimits

0x33e4,	// (0x000474e5) popup_dyc_status_message_window_g1

0x33f8,	// (0x000474f9) popup_dyc_status_message_window_t1_ParamLimits

0x33f8,	// (0x000474f9) popup_dyc_status_message_window_t1

0x340d,	// (0x0004750e) popup_dyc_status_message_window_t2_ParamLimits

0x340d,	// (0x0004750e) popup_dyc_status_message_window_t2

0x3422,	// (0x00047523) popup_dyc_status_message_window_t3_ParamLimits

0x3422,	// (0x00047523) popup_dyc_status_message_window_t3

0x0002,

0xf246,	// (0x00053347) popup_dyc_status_message_window_t_ParamLimits

0xf246,	// (0x00053347) popup_dyc_status_message_window_t

0x17c5,	// (0x000458c6) bg_heading_pane_cp01

0xa64a,	// (0x0004e74b) heading_loc_req_pane_g1

0xa652,	// (0x0004e753) heading_loc_req_pane_g2

0xa65a,	// (0x0004e75b) heading_loc_req_pane_g3

0x0002,

0xf24d,	// (0x0005334e) heading_loc_req_pane_g

0xa662,	// (0x0004e763) heading_loc_req_pane_t1

0xa681,	// (0x0004e782) bg_popup_sub_pane_cp01_ParamLimits

0xa681,	// (0x0004e782) bg_popup_sub_pane_cp01

0xa68f,	// (0x0004e790) popup_cale_events_window_g1_ParamLimits

0xa68f,	// (0x0004e790) popup_cale_events_window_g1

0xa6af,	// (0x0004e7b0) popup_cale_events_window_g2_ParamLimits

0xa6af,	// (0x0004e7b0) popup_cale_events_window_g2

0x0001,

0xf26f,	// (0x00053370) popup_cale_events_window_g_ParamLimits

0xf26f,	// (0x00053370) popup_cale_events_window_g

0xa6cf,	// (0x0004e7d0) popup_cale_events_window_t1_ParamLimits

0xa6cf,	// (0x0004e7d0) popup_cale_events_window_t1

0xa6e1,	// (0x0004e7e2) popup_cale_events_window_t2_ParamLimits

0xa6e1,	// (0x0004e7e2) popup_cale_events_window_t2

0xa71f,	// (0x0004e820) popup_cale_events_window_t3_ParamLimits

0xa71f,	// (0x0004e820) popup_cale_events_window_t3

0xa759,	// (0x0004e85a) popup_cale_events_window_t4_ParamLimits

0xa759,	// (0x0004e85a) popup_cale_events_window_t4

0x0003,

0xf274,	// (0x00053375) popup_cale_events_window_t_ParamLimits

0xf274,	// (0x00053375) popup_cale_events_window_t

0x344a,	// (0x0004754b) call_type_pane

0x345a,	// (0x0004755b) popup_call_status_window_g1

0x346e,	// (0x0004756f) popup_call_status_window_g2

0x3482,	// (0x00047583) popup_call_status_window_g3

0x0002,

0xf27d,	// (0x0005337e) popup_call_status_window_g

0xa78f,	// (0x0004e890) call_type_pane_g1

0xa798,	// (0x0004e899) call_type_pane_g2

0x0001,

0xf284,	// (0x00053385) call_type_pane_g

0x17c5,	// (0x000458c6) bg_popup_sub_pane_cp02

0xa7a1,	// (0x0004e8a2) listscroll_popup_wml_pane

0xa7a9,	// (0x0004e8aa) list_wml_pane

0xa7b3,	// (0x0004e8b4) scroll_pane_cp013

0xa7be,	// (0x0004e8bf) list_single_graphic_popup_wml_pane_ParamLimits

0xa7be,	// (0x0004e8bf) list_single_graphic_popup_wml_pane

0x1a38,	// (0x00045b39) list_single_graphic_popup_wml_pane_g1

0xa7d2,	// (0x0004e8d3) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf289,	// (0x0005338a) list_single_graphic_popup_wml_pane_g

0xa7da,	// (0x0004e8db) list_single_graphic_popup_wml_pane_t1

0xa7f0,	// (0x0004e8f1) aid_call_pane

0x1a18,	// (0x00045b19) popup_clock_analogue_window_g1

0x1a18,	// (0x00045b19) popup_clock_analogue_window_g2

0xa7f8,	// (0x0004e8f9) popup_clock_analogue_window_g3

0xa7f8,	// (0x0004e8f9) popup_clock_analogue_window_g4

0x1a38,	// (0x00045b39) popup_clock_analogue_window_g5

0x0004,

0xf28e,	// (0x0005338f) popup_clock_analogue_window_g

0xa800,	// (0x0004e901) popup_clock_analogue_window_t1

0xa80e,	// (0x0004e90f) clock_digital_number_pane_ParamLimits

0xa80e,	// (0x0004e90f) clock_digital_number_pane

0xa81a,	// (0x0004e91b) clock_digital_number_pane_cp02_ParamLimits

0xa81a,	// (0x0004e91b) clock_digital_number_pane_cp02

0xa826,	// (0x0004e927) clock_digital_number_pane_cp03_ParamLimits

0xa826,	// (0x0004e927) clock_digital_number_pane_cp03

0xa832,	// (0x0004e933) clock_digital_number_pane_cp04_ParamLimits

0xa832,	// (0x0004e933) clock_digital_number_pane_cp04

0xa83e,	// (0x0004e93f) clock_digital_separator_pane_ParamLimits

0xa83e,	// (0x0004e93f) clock_digital_separator_pane

0xa84a,	// (0x0004e94b) popup_clock_digital_window_t1

0x1a38,	// (0x00045b39) clock_digital_number_pane_g1

0x1a38,	// (0x00045b39) clock_digital_number_pane_g2

0x0001,

0xf20e,	// (0x0005330f) clock_digital_number_pane_g

0x1a38,	// (0x00045b39) clock_digital_separator_pane_g1

0x1a38,	// (0x00045b39) clock_digital_separator_pane_g2

0x0001,

0xf20e,	// (0x0005330f) clock_digital_separator_pane_g

0x17c5,	// (0x000458c6) bg_popup_window_pane_cp04

0xa867,	// (0x0004e968) heading_pane_cp03

0xa144,	// (0x0004e245) listscroll_popup_gms_pane

0x17c5,	// (0x000458c6) grid_large_graphic_popup_pane

0xa86f,	// (0x0004e970) listscroll_popup_gms_pane_g1

0xa878,	// (0x0004e979) listscroll_popup_gms_pane_g2

0x0001,

0xf299,	// (0x0005339a) listscroll_popup_gms_pane_g

0xa881,	// (0x0004e982) scroll_pane_cp014

0x1a8d,	// (0x00045b8e) cell_large_graphic_popup_pane_ParamLimits

0x1a8d,	// (0x00045b8e) cell_large_graphic_popup_pane

0x1a9b,	// (0x00045b9c) cell_large_graphic_popup_pane_g1_ParamLimits

0x1a9b,	// (0x00045b9c) cell_large_graphic_popup_pane_g1

0xa88a,	// (0x0004e98b) cell_large_graphic_popup_pane_g2_ParamLimits

0xa88a,	// (0x0004e98b) cell_large_graphic_popup_pane_g2

0xa898,	// (0x0004e999) cell_large_graphic_popup_pane_g3_ParamLimits

0xa898,	// (0x0004e999) cell_large_graphic_popup_pane_g3

0xa8a6,	// (0x0004e9a7) cell_large_graphic_popup_pane_g4_ParamLimits

0xa8a6,	// (0x0004e9a7) cell_large_graphic_popup_pane_g4

0x0003,

0xf29e,	// (0x0005339f) cell_large_graphic_popup_pane_g_ParamLimits

0xf29e,	// (0x0005339f) cell_large_graphic_popup_pane_g

0x17c5,	// (0x000458c6) grid_highlight_pane_cp010

0x1a38,	// (0x00045b39) bg_popup_call_pane_g1

0xa8b7,	// (0x0004e9b8) list_single_graphic_popup_conf_pane_ParamLimits

0xa8b7,	// (0x0004e9b8) list_single_graphic_popup_conf_pane

0xa8ca,	// (0x0004e9cb) list_highlight_pane_cp01

0xa8d3,	// (0x0004e9d4) list_single_graphic_popup_conf_pane_g1

0xa8db,	// (0x0004e9dc) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2a7,	// (0x000533a8) list_single_graphic_popup_conf_pane_g

0xa8e3,	// (0x0004e9e4) list_single_graphic_popup_conf_pane_t1

0xa8f1,	// (0x0004e9f2) linegrid_cams_pane_g1

0x3491,	// (0x00047592) linegrid_cams_pane_g2

0xa083,	// (0x0004e184) linegrid_cams_pane_g3

0xa8fa,	// (0x0004e9fb) linegrid_cams_pane_g4

0x349a,	// (0x0004759b) linegrid_cams_pane_g5

0x34a3,	// (0x000475a4) linegrid_cams_pane_g6

0xa133,	// (0x0004e234) linegrid_cams_pane_g7

0x0006,

0xf2ac,	// (0x000533ad) linegrid_cams_pane_g

0xa903,	// (0x0004ea04) popup_clock_analogue_window

0xa903,	// (0x0004ea04) popup_clock_digital_window

0x17c5,	// (0x000458c6) popup_phob_thumbnail_window

0x1a38,	// (0x00045b39) call_video_uplink_pane_g1

0xa90c,	// (0x0004ea0d) call_video_uplink_pane_g2

0x0001,

0xf2bb,	// (0x000533bc) call_video_uplink_pane_g

0xa914,	// (0x0004ea15) video_uplink_pane

0xa91c,	// (0x0004ea1d) mce_image_pane_g1

0x34ae,	// (0x000475af) mce_image_pane_g2

0x34b6,	// (0x000475b7) mce_image_pane_g3

0x34be,	// (0x000475bf) mce_image_pane_g4

0x34c8,	// (0x000475c9) mce_image_pane_g5

0x0004,

0xf2c0,	// (0x000533c1) mce_image_pane_g

0xa926,	// (0x0004ea27) control_top_pane_stacon_cp01_ParamLimits

0xa926,	// (0x0004ea27) control_top_pane_stacon_cp01

0xa93a,	// (0x0004ea3b) uni_indicator_pane_stacon_cp01_ParamLimits

0xa93a,	// (0x0004ea3b) uni_indicator_pane_stacon_cp01

0xa94b,	// (0x0004ea4c) bg_popup_sub_pane_cp03

0x34d0,	// (0x000475d1) chi_dic_find_pane

0x34d8,	// (0x000475d9) listscroll_chi_dic_pane

0x34e1,	// (0x000475e2) main_pane_chidic_g1

0x34f4,	// (0x000475f5) chi_dic_find_pane_t1

0xa955,	// (0x0004ea56) find_chidic_pane

0xa95e,	// (0x0004ea5f) chi_dic_list_pane_ParamLimits

0xa95e,	// (0x0004ea5f) chi_dic_list_pane

0xa96f,	// (0x0004ea70) scroll_pane_cp020

0x3502,	// (0x00047603) find_chidic_pane_t1

0x17c5,	// (0x000458c6) input_focus_pane_cp06

0x3511,	// (0x00047612) list_chi_dic_pane_ParamLimits

0x3511,	// (0x00047612) list_chi_dic_pane

0x3523,	// (0x00047624) list_chi_dic_pane_t1_ParamLimits

0x3523,	// (0x00047624) list_chi_dic_pane_t1

0x17c5,	// (0x000458c6) list_highlight_pane_cp020

0xa977,	// (0x0004ea78) bg_cale_heading_pane_g1

0x3536,	// (0x00047637) bg_cale_heading_pane_g2

0x353e,	// (0x0004763f) bg_cale_heading_pane_g3

0x3546,	// (0x00047647) bg_cale_heading_pane_g4

0x3550,	// (0x00047651) bg_cale_heading_pane_g5

0x355a,	// (0x0004765b) bg_cale_heading_pane_g6

0x3562,	// (0x00047663) bg_cale_heading_pane_g7

0x356a,	// (0x0004766b) bg_cale_heading_pane_g8

0x3574,	// (0x00047675) bg_cale_heading_pane_g9

0x0008,

0xf2cb,	// (0x000533cc) bg_cale_heading_pane_g

0xa977,	// (0x0004ea78) bg_cale_side_pane_g1

0x357e,	// (0x0004767f) bg_cale_side_pane_g2

0x3586,	// (0x00047687) bg_cale_side_pane_g3

0x358e,	// (0x0004768f) bg_cale_side_pane_g4

0x3596,	// (0x00047697) bg_cale_side_pane_g5

0x359e,	// (0x0004769f) bg_cale_side_pane_g6

0x35a6,	// (0x000476a7) bg_cale_side_pane_g7

0x35ae,	// (0x000476af) bg_cale_side_pane_g8

0x35b6,	// (0x000476b7) bg_cale_side_pane_g9

0x0008,

0xf2de,	// (0x000533df) bg_cale_side_pane_g

0x35be,	// (0x000476bf) popup_call_status_window_ParamLimits

0x35be,	// (0x000476bf) popup_call_status_window

0xa97f,	// (0x0004ea80) stacon_top_pane

0xa987,	// (0x0004ea88) status_pane_ParamLimits

0xa987,	// (0x0004ea88) status_pane

0xa99c,	// (0x0004ea9d) status_small_pane

0xa9a4,	// (0x0004eaa5) control_pane

0x17c5,	// (0x000458c6) stacon_bottom_pane

0xa9ac,	// (0x0004eaad) list_single_mce_smart_pane_t1_ParamLimits

0xa9ac,	// (0x0004eaad) list_single_mce_smart_pane_t1

0xa9bf,	// (0x0004eac0) list_single_mce_smart_pane_t2_ParamLimits

0xa9bf,	// (0x0004eac0) list_single_mce_smart_pane_t2

0x0001,

0xf2f1,	// (0x000533f2) list_single_mce_smart_pane_t_ParamLimits

0xf2f1,	// (0x000533f2) list_single_mce_smart_pane_t

0x3605,	// (0x00047706) compass_pane

0x360e,	// (0x0004770f) main_location2_pane_t1

0x3620,	// (0x00047721) main_location2_pane_t2

0x3632,	// (0x00047733) main_location2_pane_t3

0x0003,

0xf2f6,	// (0x000533f7) main_location2_pane_t

0xa9de,	// (0x0004eadf) compass_pane_g1_ParamLimits

0xa9de,	// (0x0004eadf) compass_pane_g1

0x3676,	// (0x00047777) compass_pane_t1

0x3685,	// (0x00047786) compass_pane_t2

0x0005,

0xf2ff,	// (0x00053400) compass_pane_t

0x36cc,	// (0x000477cd) text_secondary_cp61

0xaa5c,	// (0x0004eb5d) navi_pane_cams_g5

0xaad8,	// (0x0004ebd9) navi_pane_im_t1

0xaae6,	// (0x0004ebe7) navi_pane_mp_g1_ParamLimits

0xaae6,	// (0x0004ebe7) navi_pane_mp_g1

0xaafa,	// (0x0004ebfb) navi_pane_mp_g2_ParamLimits

0xaafa,	// (0x0004ebfb) navi_pane_mp_g2

0xab06,	// (0x0004ec07) navi_pane_mp_g3_ParamLimits

0xab06,	// (0x0004ec07) navi_pane_mp_g3

0x0002,

0xf313,	// (0x00053414) navi_pane_mp_g_ParamLimits

0xf313,	// (0x00053414) navi_pane_mp_g

0xab12,	// (0x0004ec13) navi_pane_mp_t1

0xab20,	// (0x0004ec21) navi_pane_mp_t2

0x0002,

0xf31a,	// (0x0005341b) navi_pane_mp_t

0xab8b,	// (0x0004ec8c) navi_pane_vt_g1

0xab12,	// (0x0004ec13) navi_pane_vt_t1

0xab93,	// (0x0004ec94) navi_slider_pane

0xa144,	// (0x0004e245) zooming_pane

0xaba3,	// (0x0004eca4) navi_slider_pane_g1

0xabac,	// (0x0004ecad) navi_slider_pane_g2

0x0006,

0xf321,	// (0x00053422) navi_slider_pane_g

0xabd9,	// (0x0004ecda) aid_levels_zoom

0xabe1,	// (0x0004ece2) zooming_pane_g1

0xabe9,	// (0x0004ecea) zooming_pane_g2

0xabe9,	// (0x0004ecea) zooming_pane_g3

0x0002,

0xf330,	// (0x00053431) zooming_pane_g

0xabf1,	// (0x0004ecf2) level_10_zoom

0xabfa,	// (0x0004ecfb) level_11_zoom

0xac03,	// (0x0004ed04) level_1_zoom

0xac0c,	// (0x0004ed0d) level_2_zoom

0xac15,	// (0x0004ed16) level_3_zoom

0xac1e,	// (0x0004ed1f) level_4_zoom

0xac27,	// (0x0004ed28) level_5_zoom

0xac30,	// (0x0004ed31) level_6_zoom

0xac39,	// (0x0004ed3a) level_7_zoom

0xac42,	// (0x0004ed43) level_8_zoom

0xac4b,	// (0x0004ed4c) level_9_zoom

0xac5c,	// (0x0004ed5d) popup_phob_thumbnail_window_g1

0xac64,	// (0x0004ed65) popup_phob_thumbnail_window_g2

0x0001,

0xf337,	// (0x00053438) popup_phob_thumbnail_window_g

0x4038,	// (0x00048139) level_1_location

0x4040,	// (0x00048141) level_2_location

0x4048,	// (0x00048149) level_3_location

0x4050,	// (0x00048151) level_4_location

0xa144,	// (0x0004e245) level_5_location

0x371d,	// (0x0004781e) mce_icon_pane_g1

0x3727,	// (0x00047828) mce_icon_pane_g2

0x0001,

0xf33c,	// (0x0005343d) mce_icon_pane_g

0xac6c,	// (0x0004ed6d) main_mup_pane_g1_ParamLimits

0xac6c,	// (0x0004ed6d) main_mup_pane_g1

0xac6c,	// (0x0004ed6d) main_mup_pane_g2_ParamLimits

0xac6c,	// (0x0004ed6d) main_mup_pane_g2

0xac6c,	// (0x0004ed6d) main_mup_pane_g3_ParamLimits

0xac6c,	// (0x0004ed6d) main_mup_pane_g3

0xac6c,	// (0x0004ed6d) main_mup_pane_g4_ParamLimits

0xac6c,	// (0x0004ed6d) main_mup_pane_g4

0xac6c,	// (0x0004ed6d) main_mup_pane_g5_ParamLimits

0xac6c,	// (0x0004ed6d) main_mup_pane_g5

0xac6c,	// (0x0004ed6d) main_mup_pane_g6_ParamLimits

0xac6c,	// (0x0004ed6d) main_mup_pane_g6

0xac6c,	// (0x0004ed6d) main_mup_pane_g7_ParamLimits

0xac6c,	// (0x0004ed6d) main_mup_pane_g7

0xac6c,	// (0x0004ed6d) main_mup_pane_g8_ParamLimits

0xac6c,	// (0x0004ed6d) main_mup_pane_g8

0xac6c,	// (0x0004ed6d) main_mup_pane_g9_ParamLimits

0xac6c,	// (0x0004ed6d) main_mup_pane_g9

0xac6c,	// (0x0004ed6d) main_mup_pane_g10_ParamLimits

0xac6c,	// (0x0004ed6d) main_mup_pane_g10

0xac6c,	// (0x0004ed6d) main_mup_pane_g11_ParamLimits

0xac6c,	// (0x0004ed6d) main_mup_pane_g11

0x1a9b,	// (0x00045b9c) main_mup_pane_g12_ParamLimits

0x1a9b,	// (0x00045b9c) main_mup_pane_g12

0xac6c,	// (0x0004ed6d) main_mup_pane_g13_ParamLimits

0xac6c,	// (0x0004ed6d) main_mup_pane_g13

0x000c,

0xf341,	// (0x00053442) main_mup_pane_g_ParamLimits

0xf341,	// (0x00053442) main_mup_pane_g

0xac7a,	// (0x0004ed7b) main_mup_pane_t1_ParamLimits

0xac7a,	// (0x0004ed7b) main_mup_pane_t1

0xac7a,	// (0x0004ed7b) main_mup_pane_t2_ParamLimits

0xac7a,	// (0x0004ed7b) main_mup_pane_t2

0xac7a,	// (0x0004ed7b) main_mup_pane_t3_ParamLimits

0xac7a,	// (0x0004ed7b) main_mup_pane_t3

0x1b77,	// (0x00045c78) main_mup_pane_t4_ParamLimits

0x1b77,	// (0x00045c78) main_mup_pane_t4

0x1b77,	// (0x00045c78) main_mup_pane_t5_ParamLimits

0x1b77,	// (0x00045c78) main_mup_pane_t5

0x1b8b,	// (0x00045c8c) main_mup_pane_t6_ParamLimits

0x1b8b,	// (0x00045c8c) main_mup_pane_t6

0x0005,

0xf35c,	// (0x0005345d) main_mup_pane_t_ParamLimits

0xf35c,	// (0x0005345d) main_mup_pane_t

0x1a8d,	// (0x00045b8e) mup_progress_pane_ParamLimits

0x1a8d,	// (0x00045b8e) mup_progress_pane

0xac8e,	// (0x0004ed8f) mup_visualizer_pane_ParamLimits

0xac8e,	// (0x0004ed8f) mup_visualizer_pane

0xac8e,	// (0x0004ed8f) mup_volume_pane_ParamLimits

0xac8e,	// (0x0004ed8f) mup_volume_pane

0x1aa9,	// (0x00045baa) mup_visualizer_pane_g1_ParamLimits

0x1aa9,	// (0x00045baa) mup_visualizer_pane_g1

0xac9c,	// (0x0004ed9d) mup_visualizer_pane_g2_ParamLimits

0xac9c,	// (0x0004ed9d) mup_visualizer_pane_g2

0x1a9b,	// (0x00045b9c) mup_visualizer_pane_g3_ParamLimits

0x1a9b,	// (0x00045b9c) mup_visualizer_pane_g3

0x0002,

0xf369,	// (0x0005346a) mup_visualizer_pane_g_ParamLimits

0xf369,	// (0x0005346a) mup_visualizer_pane_g

0x1b6d,	// (0x00045c6e) mup_volume_pane_g1

0x1b6d,	// (0x00045c6e) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x0005318d) mup_volume_pane_g

0x1b6d,	// (0x00045c6e) mup_progress_pane_g1

0x1b6d,	// (0x00045c6e) mup_progress_pane_g2

0x1b6d,	// (0x00045c6e) mup_progress_pane_g3

0x0002,

0xf370,	// (0x00053471) mup_progress_pane_g

0x17c5,	// (0x000458c6) bg_popup_window_pane_cp05

0xacaa,	// (0x0004edab) heading_pane_cp02_ParamLimits

0xacaa,	// (0x0004edab) heading_pane_cp02

0xacc4,	// (0x0004edc5) list_popup_blid_pane

0xaccc,	// (0x0004edcd) list_blid_sat_info_pane_ParamLimits

0xaccc,	// (0x0004edcd) list_blid_sat_info_pane

0xacdf,	// (0x0004ede0) list_blid_sat_info_pane_g1

0xace7,	// (0x0004ede8) list_blid_sat_info_pane_t1

0x3827,	// (0x00047928) mup_equalizer_pane_ParamLimits

0x3827,	// (0x00047928) mup_equalizer_pane

0x3840,	// (0x00047941) mup_equalizer_pane_cp1_ParamLimits

0x3840,	// (0x00047941) mup_equalizer_pane_cp1

0x385d,	// (0x0004795e) mup_equalizer_pane_cp2_ParamLimits

0x385d,	// (0x0004795e) mup_equalizer_pane_cp2

0x387a,	// (0x0004797b) mup_equalizer_pane_cp3_ParamLimits

0x387a,	// (0x0004797b) mup_equalizer_pane_cp3

0x389b,	// (0x0004799c) mup_equalizer_pane_cp4_ParamLimits

0x389b,	// (0x0004799c) mup_equalizer_pane_cp4

0x38bc,	// (0x000479bd) mup_equalizer_pane_cp5

0x38d0,	// (0x000479d1) mup_equalizer_pane_cp6

0x38e4,	// (0x000479e5) mup_equalizer_pane_cp7

0xbe5f,	// (0x0004ff60) bg_popup_call_poc_act_pane_g9

0xbe67,	// (0x0004ff68) bg_popup_call_poc_act_pane_g10

0xbe6f,	// (0x0004ff70) bg_popup_call_poc_act_pane_g11

0x000a,

0x1a20,	// (0x00045b21) mup_scale_pane

0x1a38,	// (0x00045b39) mup_scale_pane_g1

0xacf5,	// (0x0004edf6) mup_scale_pane_g2

0x0006,

0xf38c,	// (0x0005348d) mup_scale_pane_g

0xad19,	// (0x0004ee1a) msg_data_pane

0xad21,	// (0x0004ee22) scroll_pane_cp017

0x0bb5,	// (0x00044cb6) bg_list_pane_cp04_ParamLimits

0x0bb5,	// (0x00044cb6) bg_list_pane_cp04

0xad31,	// (0x0004ee32) msg_data_pane_g1

0x390a,	// (0x00047a0b) msg_data_pane_g2

0x3912,	// (0x00047a13) msg_data_pane_g3

0x391a,	// (0x00047a1b) msg_data_pane_g4

0x3922,	// (0x00047a23) msg_data_pane_g5

0x392a,	// (0x00047a2b) msg_data_pane_g6

0x3932,	// (0x00047a33) msg_data_pane_g7

0x0006,

0xf39b,	// (0x0005349c) msg_data_pane_g

0x0bcd,	// (0x00044cce) msg_text_pane_ParamLimits

0x0bcd,	// (0x00044cce) msg_text_pane

0x393a,	// (0x00047a3b) qrid_highlight_pane_cp011_ParamLimits

0x393a,	// (0x00047a3b) qrid_highlight_pane_cp011

0x17c5,	// (0x000458c6) msg_body_pane

0x1a20,	// (0x00045b21) msg_header_pane

0xad4d,	// (0x0004ee4e) input_focus_pane_cp07

0xad6e,	// (0x0004ee6f) msg_header_pane_t1_ParamLimits

0xad6e,	// (0x0004ee6f) msg_header_pane_t1

0xad8a,	// (0x0004ee8b) msg_header_pane_t2_ParamLimits

0xad8a,	// (0x0004ee8b) msg_header_pane_t2

0x0001,

0xf3af,	// (0x000534b0) msg_header_pane_t_ParamLimits

0xf3af,	// (0x000534b0) msg_header_pane_t

0xadaa,	// (0x0004eeab) msg_body_pane_g1

0xadb2,	// (0x0004eeb3) msg_body_pane_t1_ParamLimits

0xadb2,	// (0x0004eeb3) msg_body_pane_t1

0xade3,	// (0x0004eee4) msg_body_pane_t2_ParamLimits

0xade3,	// (0x0004eee4) msg_body_pane_t2

0xadf5,	// (0x0004eef6) msg_body_pane_t3_ParamLimits

0xadf5,	// (0x0004eef6) msg_body_pane_t3

0x0002,

0xf3b4,	// (0x000534b5) msg_body_pane_t_ParamLimits

0xf3b4,	// (0x000534b5) msg_body_pane_t

0x398a,	// (0x00047a8b) main_viewer_pane_g1_ParamLimits

0x398a,	// (0x00047a8b) main_viewer_pane_g1

0x3998,	// (0x00047a99) main_viewer_pane_g2_ParamLimits

0x3998,	// (0x00047a99) main_viewer_pane_g2

0x39a6,	// (0x00047aa7) main_viewer_pane_g3_ParamLimits

0x39a6,	// (0x00047aa7) main_viewer_pane_g3

0x39b5,	// (0x00047ab6) main_viewer_pane_g4_ParamLimits

0x39b5,	// (0x00047ab6) main_viewer_pane_g4

0xae1f,	// (0x0004ef20) main_viewer_pane_g5_ParamLimits

0xae1f,	// (0x0004ef20) main_viewer_pane_g5

0xae1f,	// (0x0004ef20) main_viewer_pane_g7_ParamLimits

0xae1f,	// (0x0004ef20) main_viewer_pane_g7

0xae31,	// (0x0004ef32) main_viewer_pane_g8_ParamLimits

0xae31,	// (0x0004ef32) main_viewer_pane_g8

0x0007,

0xf3c4,	// (0x000534c5) main_viewer_pane_g_ParamLimits

0xf3c4,	// (0x000534c5) main_viewer_pane_g

0xae49,	// (0x0004ef4a) viewer_content_pane_ParamLimits

0xae49,	// (0x0004ef4a) viewer_content_pane

0x39f1,	// (0x00047af2) main_postcard_pane_g1_ParamLimits

0x39f1,	// (0x00047af2) main_postcard_pane_g1

0x3a07,	// (0x00047b08) main_postcard_pane_g2_ParamLimits

0x3a07,	// (0x00047b08) main_postcard_pane_g2

0x3a1d,	// (0x00047b1e) main_postcard_pane_g3_ParamLimits

0x3a1d,	// (0x00047b1e) main_postcard_pane_g3

0x0005,

0xf3d5,	// (0x000534d6) main_postcard_pane_g_ParamLimits

0xf3d5,	// (0x000534d6) main_postcard_pane_g

0x3a34,	// (0x00047b35) main_postcard_pane_g4

0xc02f,	// (0x00050130) smil_status_volume_pane_g2

0x3a77,	// (0x00047b78) postcard_pane_ParamLimits

0x3a77,	// (0x00047b78) postcard_pane

0xae57,	// (0x0004ef58) postcard_pane_g1_ParamLimits

0xae57,	// (0x0004ef58) postcard_pane_g1

0x3ab9,	// (0x00047bba) postcard_pane_g2_ParamLimits

0x3ab9,	// (0x00047bba) postcard_pane_g2

0x3ac5,	// (0x00047bc6) postcard_pane_g3_ParamLimits

0x3ac5,	// (0x00047bc6) postcard_pane_g3

0xae65,	// (0x0004ef66) postcard_pane_g4_ParamLimits

0xae65,	// (0x0004ef66) postcard_pane_g4

0x3ad1,	// (0x00047bd2) postcard_pane_g5_ParamLimits

0x3ad1,	// (0x00047bd2) postcard_pane_g5

0x3ae6,	// (0x00047be7) postcard_pane_g6_ParamLimits

0x3ae6,	// (0x00047be7) postcard_pane_g6

0xae57,	// (0x0004ef58) postcard_pane_g7_ParamLimits

0xae57,	// (0x0004ef58) postcard_pane_g7

0x0006,

0xf3e2,	// (0x000534e3) postcard_pane_g_ParamLimits

0xf3e2,	// (0x000534e3) postcard_pane_g

0x3afa,	// (0x00047bfb) main_mp2_pane_g1_ParamLimits

0x3afa,	// (0x00047bfb) main_mp2_pane_g1

0x3b06,	// (0x00047c07) main_mp2_pane_g2_ParamLimits

0x3b06,	// (0x00047c07) main_mp2_pane_g2

0x3b12,	// (0x00047c13) main_mp2_pane_g3_ParamLimits

0x3b12,	// (0x00047c13) main_mp2_pane_g3

0x0002,

0xf3f1,	// (0x000534f2) main_mp2_pane_g_ParamLimits

0xf3f1,	// (0x000534f2) main_mp2_pane_g

0x3b1e,	// (0x00047c1f) main_mp2_pane_t1_ParamLimits

0x3b1e,	// (0x00047c1f) main_mp2_pane_t1

0x3b33,	// (0x00047c34) main_mp2_pane_t2_ParamLimits

0x3b33,	// (0x00047c34) main_mp2_pane_t2

0x3b45,	// (0x00047c46) main_mp2_pane_t3_ParamLimits

0x3b45,	// (0x00047c46) main_mp2_pane_t3

0x0002,

0xf3f8,	// (0x000534f9) main_mp2_pane_t_ParamLimits

0xf3f8,	// (0x000534f9) main_mp2_pane_t

0x12ed,	// (0x000453ee) pec_content_pane_ParamLimits

0x12ed,	// (0x000453ee) pec_content_pane

0x1129,	// (0x0004522a) scroll_pane_cp015

0xac8e,	// (0x0004ed8f) pec_attribute_pane_ParamLimits

0xac8e,	// (0x0004ed8f) pec_attribute_pane

0x1a9b,	// (0x00045b9c) pec_content_pane_g1_ParamLimits

0x1a9b,	// (0x00045b9c) pec_content_pane_g1

0xae73,	// (0x0004ef74) pec_content_pane_t1_ParamLimits

0xae73,	// (0x0004ef74) pec_content_pane_t1

0xae87,	// (0x0004ef88) pec_content_pane_t2_ParamLimits

0xae87,	// (0x0004ef88) pec_content_pane_t2

0x0001,

0xf3ff,	// (0x00053500) pec_content_pane_t_ParamLimits

0xf3ff,	// (0x00053500) pec_content_pane_t

0x1a8d,	// (0x00045b8e) list_single_graphic_pane_cp01_ParamLimits

0x1a8d,	// (0x00045b8e) list_single_graphic_pane_cp01

0x1a20,	// (0x00045b21) bg_popup_sub_pane_cp04

0xae9b,	// (0x0004ef9c) popup_mup_playback_window_g1

0xaea7,	// (0x0004efa8) popup_mup_playback_window_t1

0xaebc,	// (0x0004efbd) popup_mup_playback_window_t2

0x0001,

0xf404,	// (0x00053505) popup_mup_playback_window_t

0xaef3,	// (0x0004eff4) main_image_pane_g1_ParamLimits

0xaef3,	// (0x0004eff4) main_image_pane_g1

0xaf36,	// (0x0004f037) scroll_pane_cp018_ParamLimits

0xaf36,	// (0x0004f037) scroll_pane_cp018

0xaf4e,	// (0x0004f04f) scroll_pane_cp016_ParamLimits

0xaf4e,	// (0x0004f04f) scroll_pane_cp016

0x3c0f,	// (0x00047d10) smil2_image_pane_ParamLimits

0x3c0f,	// (0x00047d10) smil2_image_pane

0x3c3f,	// (0x00047d40) smil2_root_pane_ParamLimits

0x3c3f,	// (0x00047d40) smil2_root_pane

0x3c77,	// (0x00047d78) smil2_text_pane_ParamLimits

0x3c77,	// (0x00047d78) smil2_text_pane

0x1129,	// (0x0004522a) bg_list_pane_cp06

0x1129,	// (0x0004522a) grid_radio_pane

0x17c5,	// (0x000458c6) bg_popup_window_pane_cp06

0xa671,	// (0x0004e772) main_fmradio_pane_t1

0xa867,	// (0x0004e968) heading_pane_cp04

0xa671,	// (0x0004e772) main_fmradio_pane_t2

0xbeb7,	// (0x0004ffb8) popup_cale_lunar_info_window_g1

0xa671,	// (0x0004e772) main_fmradio_pane_t3

0xbebf,	// (0x0004ffc0) popup_cale_lunar_info_window_g2

0xa671,	// (0x0004e772) main_fmradio_pane_t4

0x0001,

0xa671,	// (0x0004e772) main_fmradio_pane_t5

0x0004,

0xf4d4,	// (0x000535d5) popup_cale_lunar_info_window_g

0xf264,	// (0x00053365) main_fmradio_pane_t

0x1129,	// (0x0004522a) wait_bar_pane_cp03

0x1a8d,	// (0x00045b8e) cell_fmradio_pane_ParamLimits

0x1a8d,	// (0x00045b8e) cell_fmradio_pane

0x1a9b,	// (0x00045b9c) cell_fmradio_pane_g1_ParamLimits

0x1a9b,	// (0x00045b9c) cell_fmradio_pane_g1

0x1129,	// (0x0004522a) grid_highlight_pane_cp011

0xaf82,	// (0x0004f083) poc_content_pane_ParamLimits

0xaf82,	// (0x0004f083) poc_content_pane

0xaf94,	// (0x0004f095) scroll_pane_cp019

0x3cf7,	// (0x00047df8) popup_call_poc_act_window_ParamLimits

0x3cf7,	// (0x00047df8) popup_call_poc_act_window

0x3d1b,	// (0x00047e1c) popup_call_poc_inact_window_ParamLimits

0x3d1b,	// (0x00047e1c) popup_call_poc_inact_window

0xf49d,	// (0x0005359e) bg_popup_call_poc_act_pane_g

0xbe77,	// (0x0004ff78) bg_popup_call_poc_inact_pane_g1

0xbe7f,	// (0x0004ff80) bg_popup_call_poc_inact_pane_g2

0xaf9c,	// (0x0004f09d) popup_call_poc_act_window_g2

0xbe87,	// (0x0004ff88) bg_popup_call_poc_inact_pane_g3

0xbe07,	// (0x0004ff08) bg_popup_call_poc_inact_pane_g4

0xbe8f,	// (0x0004ff90) bg_popup_call_poc_inact_pane_g5

0xafa4,	// (0x0004f0a5) popup_call_poc_act_window_t1_ParamLimits

0xafa4,	// (0x0004f0a5) popup_call_poc_act_window_t1

0xafcc,	// (0x0004f0cd) popup_call_poc_act_window_t2_ParamLimits

0xafcc,	// (0x0004f0cd) popup_call_poc_act_window_t2

0xaff4,	// (0x0004f0f5) popup_call_poc_act_window_t3_ParamLimits

0xaff4,	// (0x0004f0f5) popup_call_poc_act_window_t3

0xb01c,	// (0x0004f11d) popup_call_poc_act_window_t4_ParamLimits

0xb01c,	// (0x0004f11d) popup_call_poc_act_window_t4

0x0003,

0xf419,	// (0x0005351a) popup_call_poc_act_window_t_ParamLimits

0xf419,	// (0x0005351a) popup_call_poc_act_window_t

0xbe97,	// (0x0004ff98) bg_popup_call_poc_inact_pane_g6

0xbe9f,	// (0x0004ffa0) bg_popup_call_poc_inact_pane_g7

0xbea7,	// (0x0004ffa8) bg_popup_call_poc_inact_pane_g8

0xb02e,	// (0x0004f12f) popup_call_poc_inact_window_g2

0xbeaf,	// (0x0004ffb0) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4b4,	// (0x000535b5) bg_popup_call_poc_inact_pane_g

0xb036,	// (0x0004f137) popup_call_poc_inact_window_t1_ParamLimits

0xb036,	// (0x0004f137) popup_call_poc_inact_window_t1

0xb04b,	// (0x0004f14c) popup_call_poc_inact_window_t2_ParamLimits

0xb04b,	// (0x0004f14c) popup_call_poc_inact_window_t2

0xb060,	// (0x0004f161) popup_call_poc_inact_window_t3_ParamLimits

0xb060,	// (0x0004f161) popup_call_poc_inact_window_t3

0x0002,

0xf422,	// (0x00053523) popup_call_poc_inact_window_t_ParamLimits

0xf422,	// (0x00053523) popup_call_poc_inact_window_t

0xbfa7,	// (0x000500a8) context_pane_ParamLimits

0x4502,	// (0x00048603) signal_pane_ParamLimits

0xa144,	// (0x0004e245) main_call2_pane

0xbf80,	// (0x00050081) popup_phob_thumbnail2_window_ParamLimits

0xbf80,	// (0x00050081) popup_phob_thumbnail2_window

0xae07,	// (0x0004ef08) aid_hotspot_pointer_arrow_pane

0xae0f,	// (0x0004ef10) aid_hotspot_pointer_hand_pane

0x4002,	// (0x00048103) phob_pre_status_pane_g5

0x12ed,	// (0x000453ee) cams_zoom_pane_ParamLimits

0x12ed,	// (0x000453ee) image_vga_pane_ParamLimits

0x1a9b,	// (0x00045b9c) main_camera_pane_g1_ParamLimits

0x1a9b,	// (0x00045b9c) main_camera_pane_g2_ParamLimits

0x1a9b,	// (0x00045b9c) main_camera_pane_g3_ParamLimits

0x1a9b,	// (0x00045b9c) main_camera_pane_g4_ParamLimits

0x1a9b,	// (0x00045b9c) main_camera_pane_g5_ParamLimits

0x1a9b,	// (0x00045b9c) main_camera_pane_g6_ParamLimits

0x1a9b,	// (0x00045b9c) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x0005325e) main_camera_pane_g_ParamLimits

0x1b77,	// (0x00045c78) main_camera_pane_t1_ParamLimits

0x1b77,	// (0x00045c78) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x0005326f) main_camera_pane_t_ParamLimits

0x1a20,	// (0x00045b21) bg_popup_preview_window_pane_cp01_ParamLimits

0x1a20,	// (0x00045b21) bg_popup_preview_window_pane_cp01

0xb075,	// (0x0004f176) popup_phob_thumbnail2_window_g1_ParamLimits

0xb075,	// (0x0004f176) popup_phob_thumbnail2_window_g1

0x17c5,	// (0x000458c6) call2_cli_visual_pane

0x3d4f,	// (0x00047e50) popup_call2_audio_conf_window_ParamLimits

0x3d4f,	// (0x00047e50) popup_call2_audio_conf_window

0x3d6f,	// (0x00047e70) popup_call2_audio_first_window_ParamLimits

0x3d6f,	// (0x00047e70) popup_call2_audio_first_window

0x3e05,	// (0x00047f06) popup_call2_audio_in_window_ParamLimits

0x3e05,	// (0x00047f06) popup_call2_audio_in_window

0x3e4d,	// (0x00047f4e) popup_call2_audio_out_window_ParamLimits

0x3e4d,	// (0x00047f4e) popup_call2_audio_out_window

0x3eb7,	// (0x00047fb8) popup_call2_audio_second_window_ParamLimits

0x3eb7,	// (0x00047fb8) popup_call2_audio_second_window

0x3f1d,	// (0x0004801e) popup_call2_audio_wait_window_ParamLimits

0x3f1d,	// (0x0004801e) popup_call2_audio_wait_window

0x17c5,	// (0x000458c6) bg_popup_call2_act_pane_cp03

0x1a02,	// (0x00045b03) list_conf_pane_cp

0xb081,	// (0x0004f182) popup_call2_audio_conf_window_t1

0xb08f,	// (0x0004f190) list_single_graphic_popup_conf2_pane_ParamLimits

0xb08f,	// (0x0004f190) list_single_graphic_popup_conf2_pane

0xa8ca,	// (0x0004e9cb) list_highlight_pane_cp04

0xb0a2,	// (0x0004f1a3) list_single_graphic_popup_conf2_pane_g1

0xa8db,	// (0x0004e9dc) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf429,	// (0x0005352a) list_single_graphic_popup_conf2_pane_g

0xb0ac,	// (0x0004f1ad) list_single_graphic_popup_conf2_pane_t1

0xb0ba,	// (0x0004f1bb) bg_popup_call2_act_pane_cp01_ParamLimits

0xb0ba,	// (0x0004f1bb) bg_popup_call2_act_pane_cp01

0xb144,	// (0x0004f245) call_type_pane_cp05_ParamLimits

0xb144,	// (0x0004f245) call_type_pane_cp05

0xb198,	// (0x0004f299) popup_call2_audio_second_window_g1_ParamLimits

0xb198,	// (0x0004f299) popup_call2_audio_second_window_g1

0xb1ec,	// (0x0004f2ed) popup_call2_audio_second_window_g2_ParamLimits

0xb1ec,	// (0x0004f2ed) popup_call2_audio_second_window_g2

0x0002,

0xf42e,	// (0x0005352f) popup_call2_audio_second_window_g_ParamLimits

0xf42e,	// (0x0005352f) popup_call2_audio_second_window_g

0xb251,	// (0x0004f352) popup_call2_audio_second_window_t1_ParamLimits

0xb251,	// (0x0004f352) popup_call2_audio_second_window_t1

0xb30c,	// (0x0004f40d) popup_call2_audio_second_window_t2_ParamLimits

0xb30c,	// (0x0004f40d) popup_call2_audio_second_window_t2

0xb35f,	// (0x0004f460) popup_call2_audio_second_window_t3_ParamLimits

0xb35f,	// (0x0004f460) popup_call2_audio_second_window_t3

0x0003,

0xf435,	// (0x00053536) popup_call2_audio_second_window_t_ParamLimits

0xf435,	// (0x00053536) popup_call2_audio_second_window_t

0x17c5,	// (0x000458c6) bg_popup_call2_in_pane_cp02

0x17cf,	// (0x000458d0) call_type_pane_cp04

0x3f57,	// (0x00048058) popup_call2_audio_wait_window_g1

0x3f5f,	// (0x00048060) popup_call2_audio_wait_window_g2

0x0001,

0xf43e,	// (0x0005353f) popup_call2_audio_wait_window_g

0x17e7,	// (0x000458e8) popup_call2_audio_wait_window_t3

0xb452,	// (0x0004f553) bg_popup_call2_act_pane_ParamLimits

0xb452,	// (0x0004f553) bg_popup_call2_act_pane

0xb512,	// (0x0004f613) call_type_pane_cp03_ParamLimits

0xb512,	// (0x0004f613) call_type_pane_cp03

0xb576,	// (0x0004f677) popup_call2_audio_first_window_g1_ParamLimits

0xb576,	// (0x0004f677) popup_call2_audio_first_window_g1

0xb5e6,	// (0x0004f6e7) popup_call2_audio_first_window_g2_ParamLimits

0xb5e6,	// (0x0004f6e7) popup_call2_audio_first_window_g2

0xb64a,	// (0x0004f74b) popup_call2_audio_first_window_g3_ParamLimits

0xb64a,	// (0x0004f74b) popup_call2_audio_first_window_g3

0x0004,

0xf443,	// (0x00053544) popup_call2_audio_first_window_g_ParamLimits

0xf443,	// (0x00053544) popup_call2_audio_first_window_g

0xb6d2,	// (0x0004f7d3) popup_call2_audio_first_window_t1_ParamLimits

0xb6d2,	// (0x0004f7d3) popup_call2_audio_first_window_t1

0xb7d5,	// (0x0004f8d6) popup_call2_audio_first_window_t4_ParamLimits

0xb7d5,	// (0x0004f8d6) popup_call2_audio_first_window_t4

0xb8b8,	// (0x0004f9b9) popup_call2_audio_first_window_t5_ParamLimits

0xb8b8,	// (0x0004f9b9) popup_call2_audio_first_window_t5

0x0003,

0xf44e,	// (0x0005354f) popup_call2_audio_first_window_t_ParamLimits

0xf44e,	// (0x0005354f) popup_call2_audio_first_window_t

0x1a18,	// (0x00045b19) bg_popup_call2_act_pane_g1

0xbec7,	// (0x0004ffc8) popup_cale_lunar_info_window_t1

0xbed5,	// (0x0004ffd6) popup_cale_lunar_info_window_t2

0xbee3,	// (0x0004ffe4) popup_cale_lunar_info_window_t3

0x17c5,	// (0x000458c6) bg_popup_call2_bubble_pane

0xb9b9,	// (0x0004faba) bg_popup_call2_in_pane_cp01_ParamLimits

0xb9b9,	// (0x0004faba) bg_popup_call2_in_pane_cp01

0x147d,	// (0x0004557e) call_type_pane_cp02

0x3f67,	// (0x00048068) popup_call2_audio_out_window_g1_ParamLimits

0x3f67,	// (0x00048068) popup_call2_audio_out_window_g1

0xba01,	// (0x0004fb02) popup_call2_audio_out_window_g2_ParamLimits

0xba01,	// (0x0004fb02) popup_call2_audio_out_window_g2

0x3f93,	// (0x00048094) popup_call2_audio_out_window_g3_ParamLimits

0x3f93,	// (0x00048094) popup_call2_audio_out_window_g3

0x0003,

0xf457,	// (0x00053558) popup_call2_audio_out_window_g_ParamLimits

0xf457,	// (0x00053558) popup_call2_audio_out_window_g

0xba38,	// (0x0004fb39) popup_call2_audio_out_window_t1_ParamLimits

0xba38,	// (0x0004fb39) popup_call2_audio_out_window_t1

0xba97,	// (0x0004fb98) popup_call2_audio_out_window_t2_ParamLimits

0xba97,	// (0x0004fb98) popup_call2_audio_out_window_t2

0xbaeb,	// (0x0004fbec) popup_call2_audio_out_window_t3_ParamLimits

0xbaeb,	// (0x0004fbec) popup_call2_audio_out_window_t3

0xbb01,	// (0x0004fc02) popup_call2_audio_out_window_t4_ParamLimits

0xbb01,	// (0x0004fc02) popup_call2_audio_out_window_t4

0xbb17,	// (0x0004fc18) popup_call2_audio_out_window_t5_ParamLimits

0xbb17,	// (0x0004fc18) popup_call2_audio_out_window_t5

0x0005,

0xf460,	// (0x00053561) popup_call2_audio_out_window_t_ParamLimits

0xf460,	// (0x00053561) popup_call2_audio_out_window_t

0xbb7b,	// (0x0004fc7c) bg_popup_call2_in_pane_ParamLimits

0xbb7b,	// (0x0004fc7c) bg_popup_call2_in_pane

0xbbd7,	// (0x0004fcd8) popup_call2_audio_in_window_g1_ParamLimits

0xbbd7,	// (0x0004fcd8) popup_call2_audio_in_window_g1

0xbc0f,	// (0x0004fd10) popup_call2_audio_in_window_g2_ParamLimits

0xbc0f,	// (0x0004fd10) popup_call2_audio_in_window_g2

0xbc47,	// (0x0004fd48) popup_call2_audio_in_window_g3_ParamLimits

0xbc47,	// (0x0004fd48) popup_call2_audio_in_window_g3

0x0003,

0xf46d,	// (0x0005356e) popup_call2_audio_in_window_g_ParamLimits

0xf46d,	// (0x0005356e) popup_call2_audio_in_window_g

0xbc9f,	// (0x0004fda0) popup_call2_audio_in_window_t1_ParamLimits

0xbc9f,	// (0x0004fda0) popup_call2_audio_in_window_t1

0xbd1f,	// (0x0004fe20) popup_call2_audio_in_window_t2_ParamLimits

0xbd1f,	// (0x0004fe20) popup_call2_audio_in_window_t2

0xbd9f,	// (0x0004fea0) popup_call2_audio_in_window_t3_ParamLimits

0xbd9f,	// (0x0004fea0) popup_call2_audio_in_window_t3

0xbdb9,	// (0x0004feba) popup_call2_audio_in_window_t4_ParamLimits

0xbdb9,	// (0x0004feba) popup_call2_audio_in_window_t4

0xbdcb,	// (0x0004fecc) popup_call2_audio_in_window_t5_ParamLimits

0xbdcb,	// (0x0004fecc) popup_call2_audio_in_window_t5

0xbddd,	// (0x0004fede) popup_call2_audio_in_window_t6_ParamLimits

0xbddd,	// (0x0004fede) popup_call2_audio_in_window_t6

0x0005,

0xf476,	// (0x00053577) popup_call2_audio_in_window_t_ParamLimits

0xf476,	// (0x00053577) popup_call2_audio_in_window_t

0x1a18,	// (0x00045b19) bg_popup_call2_in_pane_g1

0xbef1,	// (0x0004fff2) popup_cale_lunar_info_window_t4

0x0003,

0xf4d9,	// (0x000535da) popup_cale_lunar_info_window_t

0x1a20,	// (0x00045b21) bg_popup_call2_rect_pane_ParamLimits

0x1a20,	// (0x00045b21) bg_popup_call2_rect_pane

0x17c5,	// (0x000458c6) call2_cli_visual_graphic_pane

0x17c5,	// (0x000458c6) call2_cli_visual_text_pane

0xc042,	// (0x00050143) smil_status_volume_pane_g3

0x0002,

0x1a38,	// (0x00045b39) call2_cli_visual_graphic_pane_g1

0x1a38,	// (0x00045b39) call2_cli_visual_graphic_pane_g2

0x1a38,	// (0x00045b39) call2_cli_visual_graphic_pane_g3

0x0002,

0xf483,	// (0x00053584) call2_cli_visual_graphic_pane_g

0xa04b,	// (0x0004e14c) bg_popup_call2_rect_pane_g1

0xa03b,	// (0x0004e13c) bg_popup_call2_rect_pane_g2

0xa043,	// (0x0004e144) bg_popup_call2_rect_pane_g3

0xa053,	// (0x0004e154) bg_popup_call2_rect_pane_g4

0xa05b,	// (0x0004e15c) bg_popup_call2_rect_pane_g5

0xa063,	// (0x0004e164) bg_popup_call2_rect_pane_g6

0xa06b,	// (0x0004e16c) bg_popup_call2_rect_pane_g7

0xa073,	// (0x0004e174) bg_popup_call2_rect_pane_g8

0xa07b,	// (0x0004e17c) bg_popup_call2_rect_pane_g9

0x0008,

0xf213,	// (0x00053314) bg_popup_call2_rect_pane_g

0xbdef,	// (0x0004fef0) bg_popup_call2_bubble_pane_g1

0xbdf7,	// (0x0004fef8) bg_popup_call2_bubble_pane_g2

0xbdff,	// (0x0004ff00) bg_popup_call2_bubble_pane_g3

0xbe07,	// (0x0004ff08) bg_popup_call2_bubble_pane_g4

0xbe0f,	// (0x0004ff10) bg_popup_call2_bubble_pane_g5

0xbe17,	// (0x0004ff18) bg_popup_call2_bubble_pane_g6

0xbe1f,	// (0x0004ff20) bg_popup_call2_bubble_pane_g7

0xbe27,	// (0x0004ff28) bg_popup_call2_bubble_pane_g8

0xbe2f,	// (0x0004ff30) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48a,	// (0x0005358b) bg_popup_call2_bubble_pane_g

0x1e82,	// (0x00045f83) aid_cale_week_size_cell_pane

0x2432,	// (0x00046533) aid_cams_cif_uncrop_pane_ParamLimits

0x2432,	// (0x00046533) aid_cams_cif_uncrop_pane

0x12ed,	// (0x000453ee) aid_cams_size_cell_ParamLimits

0x12ed,	// (0x000453ee) aid_cams_size_cell

0x12ed,	// (0x000453ee) grid_cams_pane_ParamLimits

0x12ed,	// (0x000453ee) linegrid_cams_pane_ParamLimits

0x2650,	// (0x00046751) call_video_pane_t1

0x266e,	// (0x0004676f) call_video_pane_t2

0x0001,

0xf1ba,	// (0x000532bb) call_video_pane_t

0x2a94,	// (0x00046b95) aid_cale_month_size_cell_pane_ParamLimits

0x2a94,	// (0x00046b95) aid_cale_month_size_cell_pane

0xf51d,	// (0x0005361e) smil_status_volume_pane_g

0xc04f,	// (0x00050150) volume_smil_pane_ParamLimits

0x9f76,	// (0x0004e077) aid_popup2_width_pane

0x1d93,	// (0x00045e94) cell_qdial_pane_g4_ParamLimits

0x1d93,	// (0x00045e94) cell_qdial_pane_g4

0x3656,	// (0x00047757) aid_blid_cardinal_pane_ParamLimits

0x3662,	// (0x00047763) aid_blid_destination_pane_ParamLimits

0x3662,	// (0x00047763) aid_blid_destination_pane

0x1a20,	// (0x00045b21) bg_popup_call_poc_act_pane_ParamLimits

0x1a20,	// (0x00045b21) bg_popup_call_poc_act_pane

0x1a20,	// (0x00045b21) bg_popup_call_poc_inact_pane_ParamLimits

0x1a20,	// (0x00045b21) bg_popup_call_poc_inact_pane

0xbe37,	// (0x0004ff38) bg_popup_call_poc_act_pane_g1

0xbe3f,	// (0x0004ff40) bg_popup_call_poc_act_pane_g2

0xbe47,	// (0x0004ff48) bg_popup_call_poc_act_pane_g3

0xbe07,	// (0x0004ff08) bg_popup_call_poc_act_pane_g4

0xbe0f,	// (0x0004ff10) bg_popup_call_poc_act_pane_g5

0xbe4f,	// (0x0004ff50) bg_popup_call_poc_act_pane_g6

0xbe1f,	// (0x0004ff20) bg_popup_call_poc_act_pane_g7

0xbe57,	// (0x0004ff58) bg_popup_call_poc_act_pane_g8

0x17c5,	// (0x000458c6) main_usb_pane

0xbf5b,	// (0x0005005c) popup_cale_lunar_info_window

0x293a,	// (0x00046a3b) im_reading_pane_t1_ParamLimits

0xa20f,	// (0x0004e310) list_im_pane_ParamLimits

0xa220,	// (0x0004e321) scroll_pane_cp07_ParamLimits

0x17c5,	// (0x000458c6) grid_highlight_pane_cp012

0x1a20,	// (0x00045b21) mup_scale_pane_ParamLimits

0x1a9b,	// (0x00045b9c) main_usb_pane_g1_ParamLimits

0x1a9b,	// (0x00045b9c) main_usb_pane_g1

0x1a9b,	// (0x00045b9c) main_usb_pane_g2_ParamLimits

0x1a9b,	// (0x00045b9c) main_usb_pane_g2

0x0001,

0xf199,	// (0x0005329a) main_usb_pane_g_ParamLimits

0xf199,	// (0x0005329a) main_usb_pane_g

0x1b77,	// (0x00045c78) main_usb_pane_t1_ParamLimits

0x1b77,	// (0x00045c78) main_usb_pane_t1

0x1b77,	// (0x00045c78) main_usb_pane_t2_ParamLimits

0x1b77,	// (0x00045c78) main_usb_pane_t2

0x1b77,	// (0x00045c78) main_usb_pane_t3_ParamLimits

0x1b77,	// (0x00045c78) main_usb_pane_t3

0x1b77,	// (0x00045c78) main_usb_pane_t4_ParamLimits

0x1b77,	// (0x00045c78) main_usb_pane_t4

0x1b77,	// (0x00045c78) main_usb_pane_t5_ParamLimits

0x1b77,	// (0x00045c78) main_usb_pane_t5

0x1b77,	// (0x00045c78) main_usb_pane_t6_ParamLimits

0x1b77,	// (0x00045c78) main_usb_pane_t6

0x0005,

0xf4c7,	// (0x000535c8) main_usb_pane_t_ParamLimits

0x3605,	// (0x00047706) aid_text_placing

0x360e,	// (0x0004770f) main_location2_pane_t1_ParamLimits

0x3620,	// (0x00047721) main_location2_pane_t2_ParamLimits

0x3632,	// (0x00047733) main_location2_pane_t3_ParamLimits

0x3644,	// (0x00047745) main_location2_pane_t4_ParamLimits

0x3644,	// (0x00047745) main_location2_pane_t4

0xf2f6,	// (0x000533f7) main_location2_pane_t_ParamLimits

0x1a4e,	// (0x00045b4f) find_pinb_pane_g2_ParamLimits

0x1a4e,	// (0x00045b4f) find_pinb_pane_g2

0x0001,

0xf072,	// (0x00053173) find_pinb_pane_g_ParamLimits

0xf072,	// (0x00053173) find_pinb_pane_g

0x1a5a,	// (0x00045b5b) find_pinb_pane_t1_ParamLimits

0x1a6c,	// (0x00045b6d) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x00053178) find_pinb_pane_t_ParamLimits

0x17c5,	// (0x000458c6) main_call3_pane

0x2f7b,	// (0x0004707c) cale_month_day_heading_pane_t1_ParamLimits

0x2fbd,	// (0x000470be) cale_month_day_heading_pane_t2_ParamLimits

0x2ff2,	// (0x000470f3) cale_month_day_heading_pane_t3_ParamLimits

0x3027,	// (0x00047128) cale_month_day_heading_pane_t4_ParamLimits

0x3064,	// (0x00047165) cale_month_day_heading_pane_t5_ParamLimits

0x30a9,	// (0x000471aa) cale_month_day_heading_pane_t6_ParamLimits

0x30ee,	// (0x000471ef) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x000532f3) cale_month_day_heading_pane_t_ParamLimits

0xa476,	// (0x0004e577) smil_status_volume_pane

0x3a95,	// (0x00047b96) postcard_address_pane_ParamLimits

0x3a95,	// (0x00047b96) postcard_address_pane

0x3aa7,	// (0x00047ba8) postcard_message_pane_ParamLimits

0x3aa7,	// (0x00047ba8) postcard_message_pane

0x3fbf,	// (0x000480c0) call2_cli_visual_pane_t1_ParamLimits

0x3fbf,	// (0x000480c0) call2_cli_visual_pane_t1

0xc07c,	// (0x0005017d) postcard_message_pane_t1_ParamLimits

0xc07c,	// (0x0005017d) postcard_message_pane_t1

0xc064,	// (0x00050165) postcard_address_pane_t1_ParamLimits

0xc064,	// (0x00050165) postcard_address_pane_t1

0x46b5,	// (0x000487b6) popup_call3_audio_in_window_ParamLimits

0x46b5,	// (0x000487b6) popup_call3_audio_in_window

0x4540,	// (0x00048641) bg_popup_call3_in_pane_ParamLimits

0x4540,	// (0x00048641) bg_popup_call3_in_pane

0x45b6,	// (0x000486b7) popup_call3_audio_in_window_g1_ParamLimits

0x45b6,	// (0x000486b7) popup_call3_audio_in_window_g1

0x45d6,	// (0x000486d7) popup_call3_audio_in_window_g2_ParamLimits

0x45d6,	// (0x000486d7) popup_call3_audio_in_window_g2

0x45f6,	// (0x000486f7) popup_call3_audio_in_window_g3_ParamLimits

0x45f6,	// (0x000486f7) popup_call3_audio_in_window_g3

0x0003,

0xf524,	// (0x00053625) popup_call3_audio_in_window_g_ParamLimits

0xf524,	// (0x00053625) popup_call3_audio_in_window_g

0x4627,	// (0x00048728) popup_call3_audio_in_window_t1_ParamLimits

0x4627,	// (0x00048728) popup_call3_audio_in_window_t1

0x4665,	// (0x00048766) popup_call3_audio_in_window_t2_ParamLimits

0x4665,	// (0x00048766) popup_call3_audio_in_window_t2

0x46a3,	// (0x000487a4) popup_call3_audio_in_window_t3_ParamLimits

0x46a3,	// (0x000487a4) popup_call3_audio_in_window_t3

0x0002,

0xf52d,	// (0x0005362e) popup_call3_audio_in_window_t_ParamLimits

0xf52d,	// (0x0005362e) popup_call3_audio_in_window_t

0xa144,	// (0x0004e245) bg_popup_call3_rect_pane

0xa04b,	// (0x0004e14c) bg_popup_call3_rect_pane_g1

0xa03b,	// (0x0004e13c) bg_popup_call3_rect_pane_g2

0xa043,	// (0x0004e144) bg_popup_call3_rect_pane_g3

0xa053,	// (0x0004e154) bg_popup_call3_rect_pane_g4

0xa05b,	// (0x0004e15c) bg_popup_call3_rect_pane_g5

0xa063,	// (0x0004e164) bg_popup_call3_rect_pane_g6

0xa06b,	// (0x0004e16c) bg_popup_call3_rect_pane_g7

0x1129,	// (0x0004522a) mup_visualizer_osc_pane

0x1129,	// (0x0004522a) mup_visualizer_spec_pane

0x4570,	// (0x00048671) call3_video_qcif_pane_ParamLimits

0x4570,	// (0x00048671) call3_video_qcif_pane

0x4583,	// (0x00048684) call3_video_qcif_uncrop_pane_ParamLimits

0x4583,	// (0x00048684) call3_video_qcif_uncrop_pane

0x4591,	// (0x00048692) call3_video_subqcif_pane_ParamLimits

0x4591,	// (0x00048692) call3_video_subqcif_pane

0x45a5,	// (0x000486a6) call3_video_subqcif_uncrop_pane_ParamLimits

0x45a5,	// (0x000486a6) call3_video_subqcif_uncrop_pane

0x4616,	// (0x00048717) popup_call3_audio_in_window_g4_ParamLimits

0x4616,	// (0x00048717) popup_call3_audio_in_window_g4

0x1129,	// (0x0004522a) mup_spec_half_pane

0x1129,	// (0x0004522a) mup_spec_half_pane_cp

0x1129,	// (0x0004522a) mup_osc_middle_pane

0x1b6d,	// (0x00045c6e) mup_visualizer_osc_pane_g1

0xbff5,	// (0x000500f6) mup_spec_bar_pane_ParamLimits

0xbff5,	// (0x000500f6) mup_spec_bar_pane

0x1b6d,	// (0x00045c6e) mup_spec_bar_pane_g1

0x1b6d,	// (0x00045c6e) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x0005318d) mup_spec_bar_pane_g

0x1e82,	// (0x00045f83) aid_cale_week_size_cell_pane_ParamLimits

0x1e9c,	// (0x00045f9d) bg_cale_heading_pane_ParamLimits

0xa0a6,	// (0x0004e1a7) bg_cale_pane_cp01_ParamLimits

0x1eb4,	// (0x00045fb5) cale_week_corner_pane_ParamLimits

0x1ed3,	// (0x00045fd4) cale_week_day_heading_pane_ParamLimits

0x1ef0,	// (0x00045ff1) cale_week_scroll_pane_g1_ParamLimits

0x1f03,	// (0x00046004) cale_week_scroll_pane_g2_ParamLimits

0x1f1b,	// (0x0004601c) cale_week_scroll_pane_g3_ParamLimits

0x1f33,	// (0x00046034) cale_week_scroll_pane_g4_ParamLimits

0x1f4b,	// (0x0004604c) cale_week_scroll_pane_g5_ParamLimits

0x1f6b,	// (0x0004606c) cale_week_scroll_pane_g6_ParamLimits

0x1f8b,	// (0x0004608c) cale_week_scroll_pane_g7_ParamLimits

0x1fab,	// (0x000460ac) cale_week_scroll_pane_g8_ParamLimits

0x1fcf,	// (0x000460d0) cale_week_scroll_pane_g9_ParamLimits

0x1fe7,	// (0x000460e8) cale_week_scroll_pane_g10_ParamLimits

0x1fff,	// (0x00046100) cale_week_scroll_pane_g11_ParamLimits

0x2017,	// (0x00046118) cale_week_scroll_pane_g12_ParamLimits

0x202f,	// (0x00046130) cale_week_scroll_pane_g13_ParamLimits

0x202f,	// (0x00046130) cale_week_scroll_pane_g14_ParamLimits

0x202f,	// (0x00046130) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x00053204) cale_week_scroll_pane_g_ParamLimits

0x206b,	// (0x0004616c) cale_week_time_pane_ParamLimits

0x208f,	// (0x00046190) grid_cale_week_pane_ParamLimits

0xa0c3,	// (0x0004e1c4) listscroll_cale_week_pane_t1

0xa0d5,	// (0x0004e1d6) scroll_pane_cp08_ParamLimits

0x2af4,	// (0x00046bf5) cale_month_corner_pane_ParamLimits

0xa440,	// (0x0004e541) cale_month_pane_t1

0x2f0e,	// (0x0004700f) cale_month_week_pane_ParamLimits

0x345a,	// (0x0004755b) popup_call_status_window_g1_ParamLimits

0x346e,	// (0x0004756f) popup_call_status_window_g2_ParamLimits

0x3482,	// (0x00047583) popup_call_status_window_g3_ParamLimits

0xf27d,	// (0x0005337e) popup_call_status_window_g_ParamLimits

0xa7e8,	// (0x0004e8e9) aid_call2_pane

0x0c04,	// (0x00044d05) msg_header_pane_g1

0x3a95,	// (0x00047b96) postcard_address2_pane_ParamLimits

0x3a95,	// (0x00047b96) postcard_address2_pane

0x3aa7,	// (0x00047ba8) postcard_message2_pane_ParamLimits

0x3aa7,	// (0x00047ba8) postcard_message2_pane

0x4510,	// (0x00048611) message2_row_pane_ParamLimits

0x4510,	// (0x00048611) message2_row_pane

0x452d,	// (0x0004862e) address2_row_pane_ParamLimits

0x452d,	// (0x0004862e) address2_row_pane

0xbfc2,	// (0x000500c3) postcard_message2_row_pane_g1

0xbfca,	// (0x000500cb) postcard_message2_row_pane_t1

0xbfc2,	// (0x000500c3) address2_row_pane_g1

0xbfca,	// (0x000500cb) address2_row_pane_t1

0x23c9,	// (0x000464ca) aid_size_cell_vorec

0x17c5,	// (0x000458c6) main_rss_pane

0xbfd8,	// (0x000500d9) rss_list_single_pane_ParamLimits

0xbfd8,	// (0x000500d9) rss_list_single_pane

0xbfe6,	// (0x000500e7) rss_list_single_pane_t1

0xbfe6,	// (0x000500e7) rss_list_single_pane_t2

0x0001,

0xf518,	// (0x00053619) rss_list_single_pane_t

0x17c5,	// (0x000458c6) main_camera2_pane

0x17c5,	// (0x000458c6) main_video2_pane

0xc098,	// (0x00050199) cams_zoom_pane_cp2_ParamLimits

0xc098,	// (0x00050199) cams_zoom_pane_cp2

0xc098,	// (0x00050199) image2_vga_pane_ParamLimits

0xc098,	// (0x00050199) image2_vga_pane

0xc0a6,	// (0x000501a7) main_camera2_pane_g1_ParamLimits

0xc0a6,	// (0x000501a7) main_camera2_pane_g1

0xc0a6,	// (0x000501a7) main_camera2_pane_g2_ParamLimits

0xc0a6,	// (0x000501a7) main_camera2_pane_g2

0xc0a6,	// (0x000501a7) main_camera2_pane_g3_ParamLimits

0xc0a6,	// (0x000501a7) main_camera2_pane_g3

0xc0a6,	// (0x000501a7) main_camera2_pane_g4_ParamLimits

0xc0a6,	// (0x000501a7) main_camera2_pane_g4

0xc0a6,	// (0x000501a7) main_camera2_pane_g5_ParamLimits

0xc0a6,	// (0x000501a7) main_camera2_pane_g5

0xc0a6,	// (0x000501a7) main_camera2_pane_g6_ParamLimits

0xc0a6,	// (0x000501a7) main_camera2_pane_g6

0xc0a6,	// (0x000501a7) main_camera2_pane_g7_ParamLimits

0xc0a6,	// (0x000501a7) main_camera2_pane_g7

0xc0a6,	// (0x000501a7) main_camera2_pane_g8_ParamLimits

0xc0a6,	// (0x000501a7) main_camera2_pane_g8

0x0008,

0xf534,	// (0x00053635) main_camera2_pane_g_ParamLimits

0xf534,	// (0x00053635) main_camera2_pane_g

0x46d7,	// (0x000487d8) main_camera2_pane_t1_ParamLimits

0x46d7,	// (0x000487d8) main_camera2_pane_t1

0x46d7,	// (0x000487d8) main_camera2_pane_t2_ParamLimits

0x46d7,	// (0x000487d8) main_camera2_pane_t2

0x46d7,	// (0x000487d8) main_camera2_pane_t3_ParamLimits

0x46d7,	// (0x000487d8) main_camera2_pane_t3

0x46d7,	// (0x000487d8) main_camera2_pane_t4_ParamLimits

0x46d7,	// (0x000487d8) main_camera2_pane_t4

0x0006,

0xf547,	// (0x00053648) main_camera2_pane_t_ParamLimits

0xf547,	// (0x00053648) main_camera2_pane_t

0xc0c8,	// (0x000501c9) cams_zoom_pane_cp4_ParamLimits

0xc0c8,	// (0x000501c9) cams_zoom_pane_cp4

0xc0d6,	// (0x000501d7) image2_cif_pane_ParamLimits

0xc0d6,	// (0x000501d7) image2_cif_pane

0x12ed,	// (0x000453ee) image2_subqcif_pane_ParamLimits

0x12ed,	// (0x000453ee) image2_subqcif_pane

0x46eb,	// (0x000487ec) main_video2_pane_g1_ParamLimits

0x46eb,	// (0x000487ec) main_video2_pane_g1

0x46eb,	// (0x000487ec) main_video2_pane_g2_ParamLimits

0x46eb,	// (0x000487ec) main_video2_pane_g2

0x46eb,	// (0x000487ec) main_video2_pane_g3_ParamLimits

0x46eb,	// (0x000487ec) main_video2_pane_g3

0x46eb,	// (0x000487ec) main_video2_pane_g4_ParamLimits

0x46eb,	// (0x000487ec) main_video2_pane_g4

0x46eb,	// (0x000487ec) main_video2_pane_g5_ParamLimits

0x46eb,	// (0x000487ec) main_video2_pane_g5

0x46eb,	// (0x000487ec) main_video2_pane_g6_ParamLimits

0x46eb,	// (0x000487ec) main_video2_pane_g6

0x0005,

0xf556,	// (0x00053657) main_video2_pane_g_ParamLimits

0xf556,	// (0x00053657) main_video2_pane_g

0x46f9,	// (0x000487fa) main_video2_pane_t1_ParamLimits

0x46f9,	// (0x000487fa) main_video2_pane_t1

0x46f9,	// (0x000487fa) main_video2_pane_t2_ParamLimits

0x46f9,	// (0x000487fa) main_video2_pane_t2

0x46f9,	// (0x000487fa) main_video2_pane_t3_ParamLimits

0x46f9,	// (0x000487fa) main_video2_pane_t3

0x0002,

0xf563,	// (0x00053664) main_video2_pane_t_ParamLimits

0xf563,	// (0x00053664) main_video2_pane_t

0x4064,	// (0x00048165) call_muted_g2

0x0001,

0xf50a,	// (0x0005360b) call_muted_g

0x17c5,	// (0x000458c6) main_mup2_pane

0xac6c,	// (0x0004ed6d) main_mup2_pane_g1_ParamLimits

0xac6c,	// (0x0004ed6d) main_mup2_pane_g1

0xac6c,	// (0x0004ed6d) main_mup2_pane_g2_ParamLimits

0xac6c,	// (0x0004ed6d) main_mup2_pane_g2

0x1b6d,	// (0x00045c6e) main_mup_pane_g13_cp1

0x1129,	// (0x0004522a) mup_volume_pane_cp1

0xac6c,	// (0x0004ed6d) main_mup2_pane_g4_ParamLimits

0xac6c,	// (0x0004ed6d) main_mup2_pane_g4

0xac6c,	// (0x0004ed6d) main_mup2_pane_g5_ParamLimits

0xac6c,	// (0x0004ed6d) main_mup2_pane_g5

0xac6c,	// (0x0004ed6d) main_mup2_pane_g6_ParamLimits

0xac6c,	// (0x0004ed6d) main_mup2_pane_g6

0xac6c,	// (0x0004ed6d) main_mup2_pane_g7_ParamLimits

0xac6c,	// (0x0004ed6d) main_mup2_pane_g7

0x0006,

0xf56a,	// (0x0005366b) main_mup2_pane_g_ParamLimits

0xf56a,	// (0x0005366b) main_mup2_pane_g

0xac7a,	// (0x0004ed7b) main_mup2_pane_t1_ParamLimits

0xac7a,	// (0x0004ed7b) main_mup2_pane_t1

0xac7a,	// (0x0004ed7b) main_mup2_pane_t2_ParamLimits

0xac7a,	// (0x0004ed7b) main_mup2_pane_t2

0xac7a,	// (0x0004ed7b) main_mup2_pane_t3_ParamLimits

0xac7a,	// (0x0004ed7b) main_mup2_pane_t3

0xac7a,	// (0x0004ed7b) main_mup2_pane_t4_ParamLimits

0xac7a,	// (0x0004ed7b) main_mup2_pane_t4

0xac7a,	// (0x0004ed7b) main_mup2_pane_t5_ParamLimits

0xac7a,	// (0x0004ed7b) main_mup2_pane_t5

0xac7a,	// (0x0004ed7b) main_mup2_pane_t6_ParamLimits

0xac7a,	// (0x0004ed7b) main_mup2_pane_t6

0x0005,

0xf579,	// (0x0005367a) main_mup2_pane_t_ParamLimits

0xf579,	// (0x0005367a) main_mup2_pane_t

0xac8e,	// (0x0004ed8f) mup2_visualizer_pane_ParamLimits

0xac8e,	// (0x0004ed8f) mup2_visualizer_pane

0xac8e,	// (0x0004ed8f) mup_progress_pane_cp_ParamLimits

0xac8e,	// (0x0004ed8f) mup_progress_pane_cp

0xc0e4,	// (0x000501e5) mup_volume_pane_cp_ParamLimits

0xc0e4,	// (0x000501e5) mup_volume_pane_cp

0x1a9b,	// (0x00045b9c) mup2_visualizer_pane_g1_ParamLimits

0x1a9b,	// (0x00045b9c) mup2_visualizer_pane_g1

0x1aa9,	// (0x00045baa) mup2_visualizer_pane_g2_ParamLimits

0x1aa9,	// (0x00045baa) mup2_visualizer_pane_g2

0x1aa9,	// (0x00045baa) mup2_visualizer_pane_g3_ParamLimits

0x1aa9,	// (0x00045baa) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x0005317d) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x0005317d) mup2_visualizer_pane_g

0x1129,	// (0x0004522a) aid_size_cell_fmradio

0x4216,	// (0x00048317) aid_height_parent_landcape

0xa29e,	// (0x0004e39f) wml_content_pane_cp

0xa2a6,	// (0x0004e3a7) wml_tabs_pane

0xa2af,	// (0x0004e3b0) popup_wml_miniature_window

0xa2b7,	// (0x0004e3b8) scroll_pane_cp021

0xa2cb,	// (0x0004e3cc) wml_content_pane_comp8

0x17c5,	// (0x000458c6) bg_popup_sub_pane_cp05

0xc0fa,	// (0x000501fb) popup_wml_miniature_window_g1

0xc102,	// (0x00050203) wml_miniature_view_pane

0x470d,	// (0x0004880e) aid_size_wml_view

0x4715,	// (0x00048816) wml_miniature_view_pane_g1

0x471e,	// (0x0004881f) wml_miniature_view_pane_g2

0x4727,	// (0x00048828) wml_miniature_view_pane_g3

0x472f,	// (0x00048830) wml_miniature_view_pane_g4

0x4737,	// (0x00048838) wml_miniature_view_pane_g5

0x473f,	// (0x00048840) wml_miniature_view_pane_g6

0x4747,	// (0x00048848) wml_miniature_view_pane_g7

0x474f,	// (0x00048850) wml_miniature_view_pane_g8

0x0007,

0xf586,	// (0x00053687) wml_miniature_view_pane_g

0xc10a,	// (0x0005020b) background_graphic_ParamLimits

0xc10a,	// (0x0005020b) background_graphic

0xc116,	// (0x00050217) wml_tabs_2_pane

0xc11f,	// (0x00050220) wml_tabs_3_pane_ParamLimits

0xc11f,	// (0x00050220) wml_tabs_3_pane

0xc131,	// (0x00050232) wml_tabs_4_pane_ParamLimits

0xc131,	// (0x00050232) wml_tabs_4_pane

0xc147,	// (0x00050248) wml_tabs_5_pane_ParamLimits

0xc147,	// (0x00050248) wml_tabs_5_pane

0xc161,	// (0x00050262) wml_tabs_pane_g2_ParamLimits

0xc161,	// (0x00050262) wml_tabs_pane_g2

0xc176,	// (0x00050277) wml_tabs_pane_g3_ParamLimits

0xc176,	// (0x00050277) wml_tabs_pane_g3

0xc18b,	// (0x0005028c) wml_tabs_2_active_pane_ParamLimits

0xc18b,	// (0x0005028c) wml_tabs_2_active_pane

0xc18b,	// (0x0005028c) wml_tabs_2_passive_pane_ParamLimits

0xc18b,	// (0x0005028c) wml_tabs_2_passive_pane

0x4757,	// (0x00048858) wml_tabs_3_active_pane_cp_ParamLimits

0x4757,	// (0x00048858) wml_tabs_3_active_pane_cp

0x476c,	// (0x0004886d) wml_tabs_3_passive_pane_ParamLimits

0x476c,	// (0x0004886d) wml_tabs_3_passive_pane

0x477f,	// (0x00048880) wml_tabs_3_passive_pane_cp_ParamLimits

0x477f,	// (0x00048880) wml_tabs_3_passive_pane_cp

0x4796,	// (0x00048897) tabs_4_active_pane

0x479e,	// (0x0004889f) tabs_4_passive_pane

0x47a8,	// (0x000488a9) tabs_4_passive_pane_cp

0x47b0,	// (0x000488b1) tabs_4_passive_pane_cp2

0x3fda,	// (0x000480db) aid_height_text

0xac8e,	// (0x0004ed8f) mup_volume_cont_pane_ParamLimits

0xac8e,	// (0x0004ed8f) mup_volume_cont_pane

0x1129,	// (0x0004522a) aid_size_cell_pinb

0x1129,	// (0x0004522a) aid_size_list_pinb

0xac8e,	// (0x0004ed8f) mup2_volume_cont_pane_ParamLimits

0xac8e,	// (0x0004ed8f) mup2_volume_cont_pane

0xc199,	// (0x0005029a) mup2_volume_cont_pane_g1_ParamLimits

0xc199,	// (0x0005029a) mup2_volume_cont_pane_g1

0x1133,	// (0x00045234) aid_size_cell_touch_ParamLimits

0x1133,	// (0x00045234) aid_size_cell_touch

0x1307,	// (0x00045408) touch_pane_ParamLimits

0x1307,	// (0x00045408) touch_pane

0x1129,	// (0x0004522a) main_rss2_pane

0xc1b8,	// (0x000502b9) listscroll_rss2_pane

0xc1c1,	// (0x000502c2) rss2_navigation_pane

0xc1c9,	// (0x000502ca) list_rss2_pane

0xa96f,	// (0x0004ea70) scroll_pane_cp22

0xc1d1,	// (0x000502d2) rss2_navigation_pane_g1

0xc1da,	// (0x000502db) rss2_navigation_pane_g2

0xc1e2,	// (0x000502e3) rss2_navigation_pane_g3

0x0002,

0xf597,	// (0x00053698) rss2_navigation_pane_g

0xc1ea,	// (0x000502eb) rss2_navigation_pane_t1

0x47ba,	// (0x000488bb) rss2_list_single_pane_ParamLimits

0x47ba,	// (0x000488bb) rss2_list_single_pane

0xc1f8,	// (0x000502f9) rss2_list_single_pane_t2

0xc206,	// (0x00050307) rss2_list_single_pane_t3_ParamLimits

0xc206,	// (0x00050307) rss2_list_single_pane_t3

0xc223,	// (0x00050324) rss2_list_single_pane_t4

0x3336,	// (0x00047437) smil_status_pane_g1

0x12ed,	// (0x000453ee) main_image2_pane_ParamLimits

0x12ed,	// (0x000453ee) main_image2_pane

0xc0a6,	// (0x000501a7) main_camera2_pane_g9_ParamLimits

0xc0a6,	// (0x000501a7) main_camera2_pane_g9

0x46d7,	// (0x000487d8) main_camera2_pane_t5_ParamLimits

0x46d7,	// (0x000487d8) main_camera2_pane_t5

0xc0b4,	// (0x000501b5) main_camera2_pane_t6_ParamLimits

0xc0b4,	// (0x000501b5) main_camera2_pane_t6

0x47d0,	// (0x000488d1) main_image2_pane_g1_ParamLimits

0x47d0,	// (0x000488d1) main_image2_pane_g1

0x3cad,	// (0x00047dae) smil2_video_pane_ParamLimits

0x3cad,	// (0x00047dae) smil2_video_pane

0x9f92,	// (0x0004e093) aid_zoom_text_primary_cp

0x9fd1,	// (0x0004e0d2) popup_preview_fixed_window

0xa207,	// (0x0004e308) im_reading_pane_g1

0x46c9,	// (0x000487ca) cams2_bc_adjust_pane_cp_ParamLimits

0x46c9,	// (0x000487ca) cams2_bc_adjust_pane_cp

0xac8e,	// (0x0004ed8f) cams2_bc_adjust_pane_ParamLimits

0xac8e,	// (0x0004ed8f) cams2_bc_adjust_pane

0x1b6d,	// (0x00045c6e) cams2_bc_adjust_pane_g1

0x1129,	// (0x0004522a) cams2_slider_pane

0x1b6d,	// (0x00045c6e) cams2_slider_pane_g1

0x1b6d,	// (0x00045c6e) cams2_slider_pane_g2

0x0006,

0xf59e,	// (0x0005369f) cams2_slider_pane_g

0x1af7,	// (0x00045bf8) calc_display_pane_ParamLimits

0x1b1c,	// (0x00045c1d) calc_paper_pane_ParamLimits

0x1b3f,	// (0x00045c40) grid_calc_pane_ParamLimits

0xa84a,	// (0x0004e94b) popup_clock_digital_window_t1_ParamLimits

0xaf1f,	// (0x0004f020) main_image_pane_t1

0x1ad9,	// (0x00045bda) aid_size_cell_calc_ParamLimits

0x1ad9,	// (0x00045bda) aid_size_cell_calc

0x425c,	// (0x0004835d) popup_blid_sat_info2_window_ParamLimits

0x425c,	// (0x0004835d) popup_blid_sat_info2_window

0xc231,	// (0x00050332) aid_size_cell_blid

0xc0d6,	// (0x000501d7) bg_popup_window_pane_cp07

0xc24e,	// (0x0005034f) grid_popup_blid_pane

0xc258,	// (0x00050359) heading_pane_cp05_ParamLimits

0xc258,	// (0x00050359) heading_pane_cp05

0xc322,	// (0x00050423) cell_popup_blid_pane_ParamLimits

0xc322,	// (0x00050423) cell_popup_blid_pane

0xc346,	// (0x00050447) cell_popup_blid_pane_g1

0xc34e,	// (0x0005044f) cell_popup_blid_pane_t1

0xac8e,	// (0x0004ed8f) mup2_indicator_pane_ParamLimits

0xac8e,	// (0x0004ed8f) mup2_indicator_pane

0x1129,	// (0x0004522a) mup2_visualizer_osc_pane

0xc0e4,	// (0x000501e5) mup2_visualizer_spec_pane_ParamLimits

0xc0e4,	// (0x000501e5) mup2_visualizer_spec_pane

0x1129,	// (0x0004522a) mup2_spec_half_pane

0x1129,	// (0x0004522a) mup2_spec_half_pane_cp

0xc35c,	// (0x0005045d) mup2_spec_bar_pane_ParamLimits

0xc35c,	// (0x0005045d) mup2_spec_bar_pane

0x1b6d,	// (0x00045c6e) mup2_spec_bar_pane_g1

0xc37b,	// (0x0005047c) mup2_spec_bar_pane_g2

0x0001,

0xf5c4,	// (0x000536c5) mup2_spec_bar_pane_g

0x1129,	// (0x0004522a) mup2_osc_middle_pane

0x1b6d,	// (0x00045c6e) mup2_visualizer_osc_pane_g1

0x1379,	// (0x0004547a) popup_number_entry_window_t1_ParamLimits

0x138c,	// (0x0004548d) popup_number_entry_window_t2_ParamLimits

0x139e,	// (0x0004549f) popup_number_entry_window_t3_ParamLimits

0x13b0,	// (0x000454b1) popup_number_entry_window_t5_ParamLimits

0x13b0,	// (0x000454b1) popup_number_entry_window_t5

0xf01d,	// (0x0005311e) popup_number_entry_window_t_ParamLimits

0x13e5,	// (0x000454e6) text_title_cp2_ParamLimits

0xae17,	// (0x0004ef18) aid_hotspot_pointer_text2_pane

0xae3d,	// (0x0004ef3e) main_viewer_pane_g9_ParamLimits

0xae3d,	// (0x0004ef3e) main_viewer_pane_g9

0xa440,	// (0x0004e541) cale_month_pane_t1_ParamLimits

0xa4ab,	// (0x0004e5ac) bg_cale_pane_ParamLimits

0xa4c3,	// (0x0004e5c4) list_cale_pane_ParamLimits

0xa4d4,	// (0x0004e5d5) listscroll_cale_day_pane_t1

0xa4e6,	// (0x0004e5e7) scroll_pane_cp09_ParamLimits

0x372f,	// (0x00047830) main_mup_eq_pane_t1_ParamLimits

0x372f,	// (0x00047830) main_mup_eq_pane_t1

0x3749,	// (0x0004784a) main_mup_eq_pane_t2_ParamLimits

0x3749,	// (0x0004784a) main_mup_eq_pane_t2

0x3763,	// (0x00047864) main_mup_eq_pane_t3_ParamLimits

0x3763,	// (0x00047864) main_mup_eq_pane_t3

0x377f,	// (0x00047880) main_mup_eq_pane_t4_ParamLimits

0x377f,	// (0x00047880) main_mup_eq_pane_t4

0x379b,	// (0x0004789c) main_mup_eq_pane_t5_ParamLimits

0x379b,	// (0x0004789c) main_mup_eq_pane_t5

0x37b7,	// (0x000478b8) main_mup_eq_pane_t6_ParamLimits

0x37b7,	// (0x000478b8) main_mup_eq_pane_t6

0x37cb,	// (0x000478cc) main_mup_eq_pane_t7_ParamLimits

0x37cb,	// (0x000478cc) main_mup_eq_pane_t7

0x37df,	// (0x000478e0) main_mup_eq_pane_t8_ParamLimits

0x37df,	// (0x000478e0) main_mup_eq_pane_t8

0x37f3,	// (0x000478f4) main_mup_eq_pane_t9_ParamLimits

0x37f3,	// (0x000478f4) main_mup_eq_pane_t9

0x380d,	// (0x0004790e) main_mup_eq_pane_t10_ParamLimits

0x380d,	// (0x0004790e) main_mup_eq_pane_t10

0x0009,

0xf377,	// (0x00053478) main_mup_eq_pane_t_ParamLimits

0xf377,	// (0x00053478) main_mup_eq_pane_t

0x38bc,	// (0x000479bd) mup_equalizer_pane_cp5_ParamLimits

0x38d0,	// (0x000479d1) mup_equalizer_pane_cp6_ParamLimits

0x38e4,	// (0x000479e5) mup_equalizer_pane_cp7_ParamLimits

0x1129,	// (0x0004522a) main_gallery_pane

0xc014,	// (0x00050115) smil2_volume_pane

0xc01c,	// (0x0005011d) smil_status_volume_pane_g1_ParamLimits

0xc02f,	// (0x00050130) smil_status_volume_pane_g2_ParamLimits

0xc042,	// (0x00050143) smil_status_volume_pane_g3_ParamLimits

0xf51d,	// (0x0005361e) smil_status_volume_pane_g_ParamLimits

0xc0d6,	// (0x000501d7) bg_popup_window_pane_cp07_ParamLimits

0xc239,	// (0x0005033a) blid_firmament_pane

0x12ed,	// (0x000453ee) aid_size_cell_gallery_ParamLimits

0x12ed,	// (0x000453ee) aid_size_cell_gallery

0x12ed,	// (0x000453ee) grid_gallery_pane_ParamLimits

0x12ed,	// (0x000453ee) grid_gallery_pane

0xc0d6,	// (0x000501d7) cell_gallery_pane_ParamLimits

0xc0d6,	// (0x000501d7) cell_gallery_pane

0x12ed,	// (0x000453ee) bg_cell_gallery_focus_pane_ParamLimits

0x12ed,	// (0x000453ee) bg_cell_gallery_focus_pane

0x1a9b,	// (0x00045b9c) cell_gallery_pane_g1_ParamLimits

0x1a9b,	// (0x00045b9c) cell_gallery_pane_g1

0x1a9b,	// (0x00045b9c) cell_gallery_pane_g2_ParamLimits

0x1a9b,	// (0x00045b9c) cell_gallery_pane_g2

0x1a9b,	// (0x00045b9c) cell_gallery_pane_g3_ParamLimits

0x1a9b,	// (0x00045b9c) cell_gallery_pane_g3

0x1aa9,	// (0x00045baa) cell_gallery_pane_g4_ParamLimits

0x1aa9,	// (0x00045baa) cell_gallery_pane_g4

0x0003,

0xf5c9,	// (0x000536ca) cell_gallery_pane_g_ParamLimits

0xf5c9,	// (0x000536ca) cell_gallery_pane_g

0xc385,	// (0x00050486) bg_cell_gallery_focus_pane_g1

0xc38d,	// (0x0005048e) bg_cell_gallery_focus_pane_g2

0xc395,	// (0x00050496) bg_cell_gallery_focus_pane_g3

0xc39d,	// (0x0005049e) bg_cell_gallery_focus_pane_g4

0xc3a5,	// (0x000504a6) bg_cell_gallery_focus_pane_g5

0xc3ad,	// (0x000504ae) bg_cell_gallery_focus_pane_g6

0xc3b5,	// (0x000504b6) bg_cell_gallery_focus_pane_g7

0xc3bd,	// (0x000504be) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5d2,	// (0x000536d3) bg_cell_gallery_focus_pane_g

0xc3c5,	// (0x000504c6) aid_firma_cardinal

0xc3d9,	// (0x000504da) blid_firmament_pane_t1

0xc3f0,	// (0x000504f1) blid_firmament_pane_t2

0xc407,	// (0x00050508) blid_firmament_pane_t3

0xc41e,	// (0x0005051f) blid_firmament_pane_t4

0x0003,

0xf5e3,	// (0x000536e4) blid_firmament_pane_t

0xc435,	// (0x00050536) blid_sat_info_pane

0x1b6d,	// (0x00045c6e) blid_sat_info_pane_g1

0x1b6d,	// (0x00045c6e) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x0005318d) blid_sat_info_pane_g

0xc445,	// (0x00050546) blid_sat_info_pane_t1

0xc453,	// (0x00050554) smil2_volume_content_pane

0xc45c,	// (0x0005055d) smil2_volume_pane_g1

0x1d3a,	// (0x00045e3b) smil2_volume_content_pane_g1

0xc464,	// (0x00050565) smil2_volume_content_pane_g2

0xc46d,	// (0x0005056e) smil2_volume_content_pane_g3

0xc476,	// (0x00050577) smil2_volume_content_pane_g4

0xc47f,	// (0x00050580) smil2_volume_content_pane_g5

0xc488,	// (0x00050589) smil2_volume_content_pane_g6

0xc491,	// (0x00050592) smil2_volume_content_pane_g7

0xc49a,	// (0x0005059b) smil2_volume_content_pane_g8

0xc4a3,	// (0x000505a4) smil2_volume_content_pane_g9

0xc4ac,	// (0x000505ad) smil2_volume_content_pane_g10

0x0009,

0xf5ec,	// (0x000536ed) smil2_volume_content_pane_g

0x2143,	// (0x00046244) cale_week_day_heading_pane_t1_ParamLimits

0x216d,	// (0x0004626e) cale_week_day_heading_pane_t2_ParamLimits

0x219c,	// (0x0004629d) cale_week_day_heading_pane_t3_ParamLimits

0x21cb,	// (0x000462cc) cale_week_day_heading_pane_t4_ParamLimits

0x21fa,	// (0x000462fb) cale_week_day_heading_pane_t5_ParamLimits

0x2231,	// (0x00046332) cale_week_day_heading_pane_t6_ParamLimits

0x2268,	// (0x00046369) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x00053225) cale_week_day_heading_pane_t_ParamLimits

0xa0f2,	// (0x0004e1f3) bg_cale_side_pane_ParamLimits

0x2292,	// (0x00046393) cale_week_time_pane_t1_ParamLimits

0x22ac,	// (0x000463ad) cale_week_time_pane_t2_ParamLimits

0x22c6,	// (0x000463c7) cale_week_time_pane_t3_ParamLimits

0x22e0,	// (0x000463e1) cale_week_time_pane_t4_ParamLimits

0x22fa,	// (0x000463fb) cale_week_time_pane_t5_ParamLimits

0x2314,	// (0x00046415) cale_week_time_pane_t6_ParamLimits

0x232e,	// (0x0004642f) cale_week_time_pane_t7_ParamLimits

0x2348,	// (0x00046449) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x00053234) cale_week_time_pane_t_ParamLimits

0x2368,	// (0x00046469) cell_cale_week_pane_g2_ParamLimits

0xa0f2,	// (0x0004e1f3) bg_cale_side_pane_cp01_ParamLimits

0x313b,	// (0x0004723c) cale_month_week_pane_t1_ParamLimits

0x3154,	// (0x00047255) cale_month_week_pane_t2_ParamLimits

0x316d,	// (0x0004726e) cale_month_week_pane_t3_ParamLimits

0x3186,	// (0x00047287) cale_month_week_pane_t4_ParamLimits

0x319f,	// (0x000472a0) cale_month_week_pane_t5_ParamLimits

0x31b8,	// (0x000472b9) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x00053302) cale_month_week_pane_t_ParamLimits

0xa452,	// (0x0004e553) cell_cale_month_pane_g1_ParamLimits

0x1129,	// (0x0004522a) main_cale_event_viewer_pane

0x1129,	// (0x0004522a) listscroll_cale_event_viewer_pane

0xc4b5,	// (0x000505b6) list_cale_ev_pane

0xc4bd,	// (0x000505be) scroll_pane_cp023

0xc4c9,	// (0x000505ca) field_cale_ev_pane_ParamLimits

0xc4c9,	// (0x000505ca) field_cale_ev_pane

0xc4e7,	// (0x000505e8) field_cale_ev_content_pane_ParamLimits

0xc4e7,	// (0x000505e8) field_cale_ev_content_pane

0xc4f3,	// (0x000505f4) field_cale_ev_pane_g1_ParamLimits

0xc4f3,	// (0x000505f4) field_cale_ev_pane_g1

0xc4ff,	// (0x00050600) field_cale_ev_pane_g2_ParamLimits

0xc4ff,	// (0x00050600) field_cale_ev_pane_g2

0xc517,	// (0x00050618) field_cale_ev_pane_g3_ParamLimits

0xc517,	// (0x00050618) field_cale_ev_pane_g3

0x0002,

0xf601,	// (0x00053702) field_cale_ev_pane_g_ParamLimits

0xf601,	// (0x00053702) field_cale_ev_pane_g

0xc52f,	// (0x00050630) field_cale_ev_pane_t1_ParamLimits

0xc52f,	// (0x00050630) field_cale_ev_pane_t1

0xc546,	// (0x00050647) field_cale_ev_content_pane_t1_ParamLimits

0xc546,	// (0x00050647) field_cale_ev_content_pane_t1

0xad39,	// (0x0004ee3a) bg_button_pane_cp01

0x1e70,	// (0x00045f71) listscroll_cale_week_pane_ParamLimits

0xa09d,	// (0x0004e19e) popup_toolbar_window_cp01

0xa0c3,	// (0x0004e1c4) listscroll_cale_week_pane_t1_ParamLimits

0x1e70,	// (0x00045f71) listscroll_cale_day_pane_ParamLimits

0xa09d,	// (0x0004e19e) popup_toolbar_window_cp02

0xa4d4,	// (0x0004e5d5) listscroll_cale_day_pane_t1_ParamLimits

0x1e70,	// (0x00045f71) main_cale_month_pane_ParamLimits

0xbf92,	// (0x00050093) popup_toolbar_window_cp03_ParamLimits

0xbf92,	// (0x00050093) popup_toolbar_window_cp03

0x3b75,	// (0x00047c76) main_image_pane_g2_ParamLimits

0x3b75,	// (0x00047c76) main_image_pane_g2

0x3b86,	// (0x00047c87) main_image_pane_g3_ParamLimits

0x3b86,	// (0x00047c87) main_image_pane_g3

0x0002,

0xf409,	// (0x0005350a) main_image_pane_g_ParamLimits

0xf409,	// (0x0005350a) main_image_pane_g

0xaf1f,	// (0x0004f020) main_image_pane_t1_ParamLimits

0x3b97,	// (0x00047c98) main_image_pane_t2_ParamLimits

0x3b97,	// (0x00047c98) main_image_pane_t2

0x3ba9,	// (0x00047caa) main_image_pane_t3_ParamLimits

0x3ba9,	// (0x00047caa) main_image_pane_t3

0x3bd1,	// (0x00047cd2) main_image_pane_t4_ParamLimits

0x3bd1,	// (0x00047cd2) main_image_pane_t4

0x0003,

0xf410,	// (0x00053511) main_image_pane_t_ParamLimits

0xf410,	// (0x00053511) main_image_pane_t

0x3bf1,	// (0x00047cf2) popup_image_details_window_cp01

0x3bfb,	// (0x00047cfc) popup_toobar_trans_pane_cp01_ParamLimits

0x3bfb,	// (0x00047cfc) popup_toobar_trans_pane_cp01

0x432d,	// (0x0004842e) popup_image_details_window_ParamLimits

0x432d,	// (0x0004842e) popup_image_details_window

0xbf65,	// (0x00050066) popup_image_focus_window

0xc098,	// (0x00050199) camera2_autofocus_pane_ParamLimits

0xc098,	// (0x00050199) camera2_autofocus_pane

0x1129,	// (0x0004522a) bg_popup_sub_pane_cp06

0xc564,	// (0x00050665) popup_image_focus_window_g1

0xc56c,	// (0x0005066d) popup_image_focus_window_g2

0xc574,	// (0x00050675) popup_image_focus_window_g3

0xc57c,	// (0x0005067d) popup_image_focus_window_g4

0x0003,

0xf608,	// (0x00053709) popup_image_focus_window_g

0xc584,	// (0x00050685) popup_image_focus_window_t1

0xc592,	// (0x00050693) popup_image_focus_window_t2

0xc5a2,	// (0x000506a3) popup_image_focus_window_t3

0x0002,

0xf611,	// (0x00053712) popup_image_focus_window_t

0x1a9b,	// (0x00045b9c) camera2_autofocus_pane_g1

0x12ed,	// (0x000453ee) bg_tb_trans_pane_cp01

0xc5b0,	// (0x000506b1) popup_image_details_window_g1

0xc5c3,	// (0x000506c4) popup_image_details_window_g2

0x0002,

0xf623,	// (0x00053724) popup_image_details_window_g

0xc5ec,	// (0x000506ed) popup_image_details_window_t1

0xc5fe,	// (0x000506ff) popup_image_details_window_t2

0xc617,	// (0x00050718) popup_image_details_window_t3

0xc62b,	// (0x0005072c) popup_image_details_window_t4

0xc646,	// (0x00050747) popup_image_details_window_t5

0x0004,

0xf62a,	// (0x0005372b) popup_image_details_window_t

0x1bcb,	// (0x00045ccc) bg_calc_paper_pane_ParamLimits

0x1129,	// (0x0004522a) grid_highlight_pane_cp013

0x9fe3,	// (0x0004e0e4) list_calc_pane_ParamLimits

0x9ff5,	// (0x0004e0f6) scroll_pane_cp024

0x1bdf,	// (0x00045ce0) bg_calc_display_pane_ParamLimits

0x1beb,	// (0x00045cec) calc_display_pane_t1_ParamLimits

0x1bfd,	// (0x00045cfe) calc_display_pane_t2_ParamLimits

0x9ffd,	// (0x0004e0fe) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x000531a5) calc_display_pane_t_ParamLimits

0x1d00,	// (0x00045e01) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x000531c2) cell_calc_pane_g

0x1d09,	// (0x00045e0a) cell_calc_pane_t1

0x1d18,	// (0x00045e19) grid_highlight_pane_cp02_ParamLimits

0x1d2e,	// (0x00045e2f) toolbar_button_pane_cp01_ParamLimits

0x1d2e,	// (0x00045e2f) toolbar_button_pane_cp01

0xaf64,	// (0x0004f065) temp_image_control_pane_ParamLimits

0xaf64,	// (0x0004f065) temp_image_control_pane

0x12ed,	// (0x000453ee) main_mp3_pane

0xc660,	// (0x00050761) temp_image_control_pane_g1_ParamLimits

0xc660,	// (0x00050761) temp_image_control_pane_g1

0xc66e,	// (0x0005076f) temp_image_control_pane_g2_ParamLimits

0xc66e,	// (0x0005076f) temp_image_control_pane_g2

0xc680,	// (0x00050781) temp_image_control_pane_g3_ParamLimits

0xc680,	// (0x00050781) temp_image_control_pane_g3

0x47e6,	// (0x000488e7) temp_image_control_pane_g4_ParamLimits

0x47e6,	// (0x000488e7) temp_image_control_pane_g4

0x0003,

0xf635,	// (0x00053736) temp_image_control_pane_g_ParamLimits

0xf635,	// (0x00053736) temp_image_control_pane_g

0xc660,	// (0x00050761) main_mp3_pane_g1

0x47f9,	// (0x000488fa) main_mp3_pane_g2

0x0007,

0xf63e,	// (0x0005373f) main_mp3_pane_g

0xc6b5,	// (0x000507b6) main_mp3_pane_t1

0x1aa9,	// (0x00045baa) main_camera_pane_g8_ParamLimits

0x1aa9,	// (0x00045baa) main_camera_pane_g8

0x2536,	// (0x00046637) main_video_pane_g7_ParamLimits

0x2536,	// (0x00046637) main_video_pane_g7

0x1b8b,	// (0x00045c8c) main_camera2_pane_t7_ParamLimits

0x1b8b,	// (0x00045c8c) main_camera2_pane_t7

0xa25e,	// (0x0004e35f) scroll_pane_cp025_ParamLimits

0xa25e,	// (0x0004e35f) scroll_pane_cp025

0xa272,	// (0x0004e373) scroll_pane_cp026_ParamLimits

0xa272,	// (0x0004e373) scroll_pane_cp026

0xa281,	// (0x0004e382) wml_content_pane_ParamLimits

0x1129,	// (0x0004522a) main_touch_calib_pane

0x48cd,	// (0x000489ce) main_touch_calib_pane_g1

0x48df,	// (0x000489e0) main_touch_calib_pane_g2

0x48f1,	// (0x000489f2) main_touch_calib_pane_g3

0x4903,	// (0x00048a04) main_touch_calib_pane_g4

0x0003,

0xf65c,	// (0x0005375d) main_touch_calib_pane_g

0x4915,	// (0x00048a16) main_touch_calib_pane_t1

0x492f,	// (0x00048a30) main_touch_calib_pane_t2

0x0004,

0xf665,	// (0x00053766) main_touch_calib_pane_t

0xaa3e,	// (0x0004eb3f) mup_progress_pane_cp02

0xaa73,	// (0x0004eb74) navi_pane_g1

0xab2e,	// (0x0004ec2f) navi_pane_mp_t3

0x12ed,	// (0x000453ee) main_mp3_pane_ParamLimits

0x44b8,	// (0x000485b9) navi_pane_ParamLimits

0xc660,	// (0x00050761) main_mp3_pane_g1_ParamLimits

0x47f9,	// (0x000488fa) main_mp3_pane_g2_ParamLimits

0x4807,	// (0x00048908) main_mp3_pane_g3_ParamLimits

0x4807,	// (0x00048908) main_mp3_pane_g3

0x4815,	// (0x00048916) main_mp3_pane_g4_ParamLimits

0x4815,	// (0x00048916) main_mp3_pane_g4

0x1a9b,	// (0x00045b9c) main_mp3_pane_g5_ParamLimits

0x1a9b,	// (0x00045b9c) main_mp3_pane_g5

0xc690,	// (0x00050791) main_mp3_pane_g6_ParamLimits

0xc690,	// (0x00050791) main_mp3_pane_g6

0xc69d,	// (0x0005079e) main_mp3_pane_g7_ParamLimits

0xc69d,	// (0x0005079e) main_mp3_pane_g7

0xc6a9,	// (0x000507aa) main_mp3_pane_g8_ParamLimits

0xc6a9,	// (0x000507aa) main_mp3_pane_g8

0xf63e,	// (0x0005373f) main_mp3_pane_g_ParamLimits

0x4821,	// (0x00048922) main_mp3_pane_t2

0x482f,	// (0x00048930) main_mp3_pane_t3

0xc6c3,	// (0x000507c4) main_mp3_pane_t4

0xc6d1,	// (0x000507d2) main_mp3_pane_t5

0x0005,

0xf64f,	// (0x00053750) main_mp3_pane_t

0xc6df,	// (0x000507e0) mup_progress_pane_cp01

0x9f8a,	// (0x0004e08b) aid_zoom_text_secondary2

0xc4b5,	// (0x000505b6) list_cale_ev2_pane

0xc4bd,	// (0x000505be) scroll_pane_cp023_ParamLimits

0x4985,	// (0x00048a86) field_cale_ev2_pane_ParamLimits

0x4985,	// (0x00048a86) field_cale_ev2_pane

0xc6e7,	// (0x000507e8) field_cale_ev2_pane_g1_ParamLimits

0xc6e7,	// (0x000507e8) field_cale_ev2_pane_g1

0xc6f3,	// (0x000507f4) field_cale_ev2_pane_g2_ParamLimits

0xc6f3,	// (0x000507f4) field_cale_ev2_pane_g2

0xc70b,	// (0x0005080c) field_cale_ev2_pane_g3_ParamLimits

0xc70b,	// (0x0005080c) field_cale_ev2_pane_g3

0x0003,

0xf670,	// (0x00053771) field_cale_ev2_pane_g_ParamLimits

0xf670,	// (0x00053771) field_cale_ev2_pane_g

0xc72f,	// (0x00050830) field_cale_ev2_pane_t1_ParamLimits

0xc72f,	// (0x00050830) field_cale_ev2_pane_t1

0xc746,	// (0x00050847) field_cale_ev2_pane_t2_ParamLimits

0xc746,	// (0x00050847) field_cale_ev2_pane_t2

0x0001,

0xf679,	// (0x0005377a) field_cale_ev2_pane_t_ParamLimits

0xf679,	// (0x0005377a) field_cale_ev2_pane_t

0x3a4b,	// (0x00047b4c) main_postcard_pane_g5_ParamLimits

0x3a4b,	// (0x00047b4c) main_postcard_pane_g5

0x3a61,	// (0x00047b62) main_postcard_pane_g6_ParamLimits

0x3a61,	// (0x00047b62) main_postcard_pane_g6

0x12ed,	// (0x000453ee) camera2_autofocus_pane_cp_ParamLimits

0x12ed,	// (0x000453ee) camera2_autofocus_pane_cp

0x12ed,	// (0x000453ee) main_mup3_pane

0x49ea,	// (0x00048aeb) main_mup3_pane_g1_ParamLimits

0x49ea,	// (0x00048aeb) main_mup3_pane_g1

0x4a3c,	// (0x00048b3d) main_mup3_pane_g2_ParamLimits

0x4a3c,	// (0x00048b3d) main_mup3_pane_g2

0x4aa4,	// (0x00048ba5) main_mup3_pane_g3_ParamLimits

0x4aa4,	// (0x00048ba5) main_mup3_pane_g3

0x4b08,	// (0x00048c09) main_mup3_pane_g4_ParamLimits

0x4b08,	// (0x00048c09) main_mup3_pane_g4

0x4b6c,	// (0x00048c6d) main_mup3_pane_g5_ParamLimits

0x4b6c,	// (0x00048c6d) main_mup3_pane_g5

0xea88,	// (0x00052b89) main_mup3_pane_g6_ParamLimits

0xea88,	// (0x00052b89) main_mup3_pane_g6

0x1aa9,	// (0x00045baa) main_mup3_pane_g7_ParamLimits

0x1aa9,	// (0x00045baa) main_mup3_pane_g7

0x0007,

0xf689,	// (0x0005378a) main_mup3_pane_g_ParamLimits

0xf689,	// (0x0005378a) main_mup3_pane_g

0x4c39,	// (0x00048d3a) main_mup3_pane_t1_ParamLimits

0x4c39,	// (0x00048d3a) main_mup3_pane_t1

0x4d27,	// (0x00048e28) main_mup3_pane_t2_ParamLimits

0x4d27,	// (0x00048e28) main_mup3_pane_t2

0x4e15,	// (0x00048f16) main_mup3_pane_t4_ParamLimits

0x4e15,	// (0x00048f16) main_mup3_pane_t4

0x4e27,	// (0x00048f28) main_mup3_pane_t5_ParamLimits

0x4e27,	// (0x00048f28) main_mup3_pane_t5

0x4ef9,	// (0x00048ffa) main_mup3_pane_t6_ParamLimits

0x4ef9,	// (0x00048ffa) main_mup3_pane_t6

0x0005,

0xf69a,	// (0x0005379b) main_mup3_pane_t_ParamLimits

0xf69a,	// (0x0005379b) main_mup3_pane_t

0x4fa1,	// (0x000490a2) mup3_progress_pane_ParamLimits

0x4fa1,	// (0x000490a2) mup3_progress_pane

0x5009,	// (0x0004910a) popup_mup3_control_window_ParamLimits

0x5009,	// (0x0004910a) popup_mup3_control_window

0xc75b,	// (0x0005085c) popup_mup3_text_window

0x5021,	// (0x00049122) mup3_progress_pane_t1

0x5040,	// (0x00049141) mup3_progress_pane_t2

0xc763,	// (0x00050864) mup3_progress_pane_t3

0x0002,

0xf6a7,	// (0x000537a8) mup3_progress_pane_t

0xc780,	// (0x00050881) mup_progress_pane_cp03

0xc790,	// (0x00050891) bg_tb_trans_pane_cp04

0xc790,	// (0x00050891) mup3_volume_pane

0xc798,	// (0x00050899) popup_mup3_control_window_g1

0xc798,	// (0x00050899) mup3_volume_pane_g1

0xc798,	// (0x00050899) mup3_volume_pane_g2

0xc798,	// (0x00050899) mup3_volume_pane_g3

0x0002,

0xf6ae,	// (0x000537af) mup3_volume_pane_g

0x1129,	// (0x0004522a) bg_tb_trans_pane_cp03

0xc7a0,	// (0x000508a1) popup_mup3_text_window_g1

0xc7a8,	// (0x000508a9) popup_mup3_text_window_t1

0x1cd9,	// (0x00045dda) list_calc_item_pane_g1_ParamLimits

0xc1af,	// (0x000502b0) mup_volume_pane_cp_g1

0x4949,	// (0x00048a4a) main_touch_calib_pane_t3

0x495d,	// (0x00048a5e) main_touch_calib_pane_t4

0x4971,	// (0x00048a72) main_touch_calib_pane_t5

0x9f6e,	// (0x0004e06f) aid_cell_size_toolbar2

0x9f76,	// (0x0004e077) aid_popup3_width_pane

0x9f82,	// (0x0004e083) aid_zoom_text_msg_primary

0x2411,	// (0x00046512) vorec_t7

0x1c44,	// (0x00045d45) bg_calc_paper_pane_g1_ParamLimits

0x1c50,	// (0x00045d51) bg_calc_paper_pane_g2_ParamLimits

0x1c5c,	// (0x00045d5d) bg_calc_paper_pane_g3_ParamLimits

0x1c68,	// (0x00045d69) bg_calc_paper_pane_g4_ParamLimits

0x1c74,	// (0x00045d75) bg_calc_paper_pane_g5_ParamLimits

0x1c80,	// (0x00045d81) bg_calc_paper_pane_g6_ParamLimits

0x1c8f,	// (0x00045d90) bg_calc_paper_pane_g7_ParamLimits

0x1c9e,	// (0x00045d9f) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x000531ac) bg_calc_paper_pane_g_ParamLimits

0x1cb1,	// (0x00045db2) calc_bg_paper_pane_g9_ParamLimits

0x12ed,	// (0x000453ee) image_qvga_pane_ParamLimits

0x12ed,	// (0x000453ee) image_qvga_pane

0x1a20,	// (0x00045b21) bg_popup_sub_pane_cp04_ParamLimits

0xae9b,	// (0x0004ef9c) popup_mup_playback_window_g1_ParamLimits

0xaea7,	// (0x0004efa8) popup_mup_playback_window_t1_ParamLimits

0xaebc,	// (0x0004efbd) popup_mup_playback_window_t2_ParamLimits

0xf404,	// (0x00053505) popup_mup_playback_window_t_ParamLimits

0x1aa9,	// (0x00045baa) main_mup2_pane_g3_ParamLimits

0x1aa9,	// (0x00045baa) main_mup2_pane_g3

0x26f1,	// (0x000467f2) popup_toolbar_window_cp04

0xb240,	// (0x0004f341) popup_call2_audio_second_window_g3_ParamLimits

0xb240,	// (0x0004f341) popup_call2_audio_second_window_g3

0xb658,	// (0x0004f759) popup_call2_audio_first_window_g4_ParamLimits

0xb658,	// (0x0004f759) popup_call2_audio_first_window_g4

0xbc7f,	// (0x0004fd80) popup_call2_audio_in_window_g4_ParamLimits

0xbc7f,	// (0x0004fd80) popup_call2_audio_in_window_g4

0x3b57,	// (0x00047c58) aid_area_sk_bg_cut_ParamLimits

0x3b57,	// (0x00047c58) aid_area_sk_bg_cut

0xaed1,	// (0x0004efd2) aid_area_sk_bg_cut_2_ParamLimits

0xaed1,	// (0x0004efd2) aid_area_sk_bg_cut_2

0x1129,	// (0x0004522a) aid_placing_details_win

0x1129,	// (0x0004522a) aid_placing_details_win_2

0x1a9b,	// (0x00045b9c) camera2_autofocus_pane_g1_ParamLimits

0x1292,	// (0x00045393) popup_fixed_preview_cale_window_ParamLimits

0x1292,	// (0x00045393) popup_fixed_preview_cale_window

0xabb5,	// (0x0004ecb6) navi_slider_pane_g3

0xabbe,	// (0x0004ecbf) navi_slider_pane_g4

0xabc7,	// (0x0004ecc8) navi_slider_pane_g5

0xabb5,	// (0x0004ecb6) navi_slider_pane_g6

0xabd0,	// (0x0004ecd1) navi_slider_pane_g7

0xacfe,	// (0x0004edff) mup_scale_pane_g3

0xad07,	// (0x0004ee08) mup_scale_pane_g4

0xad10,	// (0x0004ee11) mup_scale_pane_g5

0x38f8,	// (0x000479f9) mup_scale_pane_g6

0x3901,	// (0x00047a02) mup_scale_pane_g7

0x1b6d,	// (0x00045c6e) cams2_slider_pane_g3

0x1b6d,	// (0x00045c6e) cams2_slider_pane_g4

0x1b6d,	// (0x00045c6e) cams2_slider_pane_g5

0x1b6d,	// (0x00045c6e) cams2_slider_pane_g6

0x1b6d,	// (0x00045c6e) cams2_slider_pane_g7

0x1b6d,	// (0x00045c6e) camera2_autofocus_pane_cp_g1

0xbf47,	// (0x00050048) bg_popup_preview_window_pane_cp02_ParamLimits

0xbf47,	// (0x00050048) bg_popup_preview_window_pane_cp02

0xc7b6,	// (0x000508b7) list_fp_cale_pane_ParamLimits

0xc7b6,	// (0x000508b7) list_fp_cale_pane

0xc7c2,	// (0x000508c3) popup_fixed_preview_cale_window_t1_ParamLimits

0xc7c2,	// (0x000508c3) popup_fixed_preview_cale_window_t1

0x505f,	// (0x00049160) popup_fixed_preview_cale_window_t2_ParamLimits

0x505f,	// (0x00049160) popup_fixed_preview_cale_window_t2

0x5074,	// (0x00049175) popup_fixed_preview_cale_window_t3_ParamLimits

0x5074,	// (0x00049175) popup_fixed_preview_cale_window_t3

0x0002,

0xf6b5,	// (0x000537b6) popup_fixed_preview_cale_window_t_ParamLimits

0xf6b5,	// (0x000537b6) popup_fixed_preview_cale_window_t

0x5089,	// (0x0004918a) list_single_fp_cale_pane_ParamLimits

0x5089,	// (0x0004918a) list_single_fp_cale_pane

0xc7e0,	// (0x000508e1) list_single_fp_cale_pane_g1_ParamLimits

0xc7e0,	// (0x000508e1) list_single_fp_cale_pane_g1

0xc7ec,	// (0x000508ed) list_single_fp_cale_pane_g2_ParamLimits

0xc7ec,	// (0x000508ed) list_single_fp_cale_pane_g2

0x0002,

0xf6bc,	// (0x000537bd) list_single_fp_cale_pane_g_ParamLimits

0xf6bc,	// (0x000537bd) list_single_fp_cale_pane_g

0xc805,	// (0x00050906) list_single_fp_cale_pane_t1_ParamLimits

0xc805,	// (0x00050906) list_single_fp_cale_pane_t1

0xc817,	// (0x00050918) list_single_fp_cale_pane_t2_ParamLimits

0xc817,	// (0x00050918) list_single_fp_cale_pane_t2

0x0001,

0xf6c3,	// (0x000537c4) list_single_fp_cale_pane_t_ParamLimits

0xf6c3,	// (0x000537c4) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1129,	// (0x0004522a) main_dialer_pane

0x1129,	// (0x0004522a) aid_cell_size_keypad

0x1129,	// (0x0004522a) dialer_ne_pane

0x1129,	// (0x0004522a) grid_dialer_command_1_pane

0x1129,	// (0x0004522a) grid_dialer_command_2_pane

0x1129,	// (0x0004522a) grid_dialer_keypad_pane

0x509f,	// (0x000491a0) bg_popup_call_pane_cp06_ParamLimits

0x509f,	// (0x000491a0) bg_popup_call_pane_cp06

0x509f,	// (0x000491a0) dialer_ne_clear_pane_ParamLimits

0x509f,	// (0x000491a0) dialer_ne_clear_pane

0x1b6d,	// (0x00045c6e) dialer_ne_pane_g1

0x1b8b,	// (0x00045c8c) dialer_ne_pane_t1_ParamLimits

0x1b8b,	// (0x00045c8c) dialer_ne_pane_t1

0x50ad,	// (0x000491ae) dialer_ne_pane_t2_ParamLimits

0x50ad,	// (0x000491ae) dialer_ne_pane_t2

0x50d5,	// (0x000491d6) dialer_ne_pane_t3_ParamLimits

0x50d5,	// (0x000491d6) dialer_ne_pane_t3

0x0002,

0xf6c8,	// (0x000537c9) dialer_ne_pane_t_ParamLimits

0xf6c8,	// (0x000537c9) dialer_ne_pane_t

0x50d5,	// (0x000491d6) dialer_ne_pane_t3_copy1_ParamLimits

0x50d5,	// (0x000491d6) dialer_ne_pane_t3_copy1

0xc84a,	// (0x0005094b) cell_dialer_keypad_pane_ParamLimits

0xc84a,	// (0x0005094b) cell_dialer_keypad_pane

0x12ed,	// (0x000453ee) cell_dialer_command_1_pane_ParamLimits

0x12ed,	// (0x000453ee) cell_dialer_command_1_pane

0xc861,	// (0x00050962) cell_dialer_command_2_pane_ParamLimits

0xc861,	// (0x00050962) cell_dialer_command_2_pane

0x12ed,	// (0x000453ee) bg_button_pane_cp02_ParamLimits

0x12ed,	// (0x000453ee) bg_button_pane_cp02

0x1a9b,	// (0x00045b9c) cell_dialer_keypad_pane_g1_ParamLimits

0x1a9b,	// (0x00045b9c) cell_dialer_keypad_pane_g1

0x12ed,	// (0x000453ee) bg_button_pane_cp03_ParamLimits

0x12ed,	// (0x000453ee) bg_button_pane_cp03

0x1a9b,	// (0x00045b9c) cell_dialer_command_1_pane_g1_ParamLimits

0x1a9b,	// (0x00045b9c) cell_dialer_command_1_pane_g1

0x1129,	// (0x0004522a) bg_button_pane_cp04

0x1b6d,	// (0x00045c6e) cell_dialer_command_2_pane_g1

0x1129,	// (0x0004522a) bg_button_pane_cp06

0x1b6d,	// (0x00045c6e) dialer_ne_clear_pane_g1

0xaa7f,	// (0x0004eb80) navi_pane_g2

0xaaad,	// (0x0004ebae) navi_pane_g3

0x0002,

0xf30c,	// (0x0005340d) navi_pane_g

0xab3c,	// (0x0004ec3d) navi_pane_mv_g2

0xab63,	// (0x0004ec64) navi_pane_mv_g5

0x36db,	// (0x000477dc) navi_pane_mv_t1

0x1bdf,	// (0x00045ce0) main_clock2_pane

0x12ed,	// (0x000453ee) main_clock2_list_pane_ParamLimits

0x12ed,	// (0x000453ee) main_clock2_list_pane

0x516b,	// (0x0004926c) main_clock2_pane_t1_ParamLimits

0x516b,	// (0x0004926c) main_clock2_pane_t1

0x51a6,	// (0x000492a7) main_clock2_pane_t2_ParamLimits

0x51a6,	// (0x000492a7) main_clock2_pane_t2

0x0004,

0xf6d4,	// (0x000537d5) main_clock2_pane_t_ParamLimits

0xf6d4,	// (0x000537d5) main_clock2_pane_t

0x5246,	// (0x00049347) popup_clock_analogue_window_cp03_ParamLimits

0x5246,	// (0x00049347) popup_clock_analogue_window_cp03

0x526b,	// (0x0004936c) popup_clock_digital_window_cp02_ParamLimits

0x526b,	// (0x0004936c) popup_clock_digital_window_cp02

0x52e4,	// (0x000493e5) main_clock2_list_single_pane_ParamLimits

0x52e4,	// (0x000493e5) main_clock2_list_single_pane

0xa144,	// (0x0004e245) list_highlight_pane_cp05

0xc8a4,	// (0x000509a5) main_clock2_list_single_pane_t1

0x26f1,	// (0x000467f2) popup_toolbar_window_cp04_ParamLimits

0x1aa9,	// (0x00045baa) camera2_autofocus_pane_g2_ParamLimits

0x1aa9,	// (0x00045baa) camera2_autofocus_pane_g2

0x1aa9,	// (0x00045baa) camera2_autofocus_pane_g3_ParamLimits

0x1aa9,	// (0x00045baa) camera2_autofocus_pane_g3

0x1aa9,	// (0x00045baa) camera2_autofocus_pane_g4_ParamLimits

0x1aa9,	// (0x00045baa) camera2_autofocus_pane_g4

0x1aa9,	// (0x00045baa) camera2_autofocus_pane_g5_ParamLimits

0x1aa9,	// (0x00045baa) camera2_autofocus_pane_g5

0x0004,

0xf618,	// (0x00053719) camera2_autofocus_pane_g_ParamLimits

0xf618,	// (0x00053719) camera2_autofocus_pane_g

0x49a6,	// (0x00048aa7) camera2_autofocus_pane_cp_g2

0x49ae,	// (0x00048aaf) camera2_autofocus_pane_cp_g3

0x49b6,	// (0x00048ab7) camera2_autofocus_pane_cp_g4

0x49be,	// (0x00048abf) camera2_autofocus_pane_cp_g5

0x0004,

0xf67e,	// (0x0005377f) camera2_autofocus_pane_cp_g

0x1129,	// (0x0004522a) popup_dialer_spcha_window

0x1129,	// (0x0004522a) bg_popup_sub_pane_cp07

0x1129,	// (0x0004522a) list_spcha_pane

0xc8b2,	// (0x000509b3) list_single_spcha_pane_ParamLimits

0xc8b2,	// (0x000509b3) list_single_spcha_pane

0x1129,	// (0x0004522a) list_highlight_pane_cp06

0xa671,	// (0x0004e772) list_single_spcha_pane_t1

0xba29,	// (0x0004fb2a) popup_call2_audio_out_window_g4_ParamLimits

0xba29,	// (0x0004fb2a) popup_call2_audio_out_window_g4

0x1129,	// (0x0004522a) main_imed2_pane

0xbf6d,	// (0x0005006e) popup_imed_adjust2_window

0x4345,	// (0x00048446) popup_imed_trans_window_ParamLimits

0x4345,	// (0x00048446) popup_imed_trans_window

0xc284,	// (0x00050385) popup_blid_sat_info2_window_t1

0xc292,	// (0x00050393) popup_blid_sat_info2_window_t2

0x000a,

0xf5ad,	// (0x000536ae) popup_blid_sat_info2_window_t

0x5395,	// (0x00049496) aid_size_cell_colour_35

0x53b5,	// (0x000494b6) aid_size_cell_colour_112

0x53d5,	// (0x000494d6) aid_size_cell_effect

0xac8e,	// (0x0004ed8f) bg_tb_trans_pane_cp02

0x53f5,	// (0x000494f6) heading_imed_pane

0x5401,	// (0x00049502) listscroll_imed_pane

0xc8c4,	// (0x000509c5) heading_imed_pane_g1

0xc8cc,	// (0x000509cd) heading_imed_pane_t1

0xc8da,	// (0x000509db) grid_imed_colour_35_pane_ParamLimits

0xc8da,	// (0x000509db) grid_imed_colour_35_pane

0x540d,	// (0x0004950e) grid_imed_effect_pane

0xc8f2,	// (0x000509f3) list_imed_aspect_pane

0x5423,	// (0x00049524) scroll_pane_cp027_ParamLimits

0x5423,	// (0x00049524) scroll_pane_cp027

0x5434,	// (0x00049535) cell_imed_effect_pane_ParamLimits

0x5434,	// (0x00049535) cell_imed_effect_pane

0xc8fa,	// (0x000509fb) cell_imed_colour_pane_ParamLimits

0xc8fa,	// (0x000509fb) cell_imed_colour_pane

0xc93c,	// (0x00050a3d) cell_imed_colour_pane_g1_ParamLimits

0xc93c,	// (0x00050a3d) cell_imed_colour_pane_g1

0xc94d,	// (0x00050a4e) hgihlgiht_grid_pane_cp016_ParamLimits

0xc94d,	// (0x00050a4e) hgihlgiht_grid_pane_cp016

0x545b,	// (0x0004955c) cell_imed_effect_pane_g1

0x5463,	// (0x00049564) grid_highlight_pane_cp017

0xc95e,	// (0x00050a5f) list_imed_single_pane_ParamLimits

0xc95e,	// (0x00050a5f) list_imed_single_pane

0x1129,	// (0x0004522a) list_highlight_pane_cp07

0xc973,	// (0x00050a74) list_imed_aspect_pane_comp1_t1

0xac8e,	// (0x0004ed8f) bg_tb_trans_pane_cp05

0xc995,	// (0x00050a96) popup_imed_adjust2_window_g1

0xc9bc,	// (0x00050abd) popup_imed_adjust2_window_t1

0xc9d4,	// (0x00050ad5) slider_imed_adjust_pane

0xc9e8,	// (0x00050ae9) slider_imed_adjust_pane_g1

0xc9f8,	// (0x00050af9) slider_imed_adjust_pane_g2

0xca08,	// (0x00050b09) slider_imed_adjust_pane_g3

0xca19,	// (0x00050b1a) slider_imed_adjust_pane_g4

0x0003,

0xf6f1,	// (0x000537f2) slider_imed_adjust_pane_g

0x546c,	// (0x0004956d) aid_size_cell_clipart2

0x5478,	// (0x00049579) grid_imed_clipart_pane

0xad21,	// (0x0004ee22) scroll_pane_cp031

0x5482,	// (0x00049583) cell_imed_clipart_pane_ParamLimits

0x5482,	// (0x00049583) cell_imed_clipart_pane

0x54a4,	// (0x000495a5) cell_imed_clipart_pane_g1

0x1129,	// (0x0004522a) grid_highlight_pane_cp014

0x5147,	// (0x00049248) main_clock2_pane_g1_ParamLimits

0x5147,	// (0x00049248) main_clock2_pane_g1

0x528b,	// (0x0004938c) aid_call2_pane_cp10

0x529d,	// (0x0004939e) aid_call_pane_cp10

0xa9de,	// (0x0004eadf) popup_clock_analogue_window_cp10_g1

0xa9de,	// (0x0004eadf) popup_clock_analogue_window_cp10_g2

0x52af,	// (0x000493b0) popup_clock_analogue_window_cp10_g3

0x52af,	// (0x000493b0) popup_clock_analogue_window_cp10_g4

0xa9de,	// (0x0004eadf) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6df,	// (0x000537e0) popup_clock_analogue_window_cp10_g

0x52c5,	// (0x000493c6) popup_clock_analogue_window_cp10_t1

0x52f6,	// (0x000493f7) clock_digital_number_pane_cp10_ParamLimits

0x52f6,	// (0x000493f7) clock_digital_number_pane_cp10

0x530e,	// (0x0004940f) clock_digital_number_pane_cp11_ParamLimits

0x530e,	// (0x0004940f) clock_digital_number_pane_cp11

0x5326,	// (0x00049427) clock_digital_number_pane_cp12_ParamLimits

0x5326,	// (0x00049427) clock_digital_number_pane_cp12

0x5340,	// (0x00049441) clock_digital_number_pane_cp13_ParamLimits

0x5340,	// (0x00049441) clock_digital_number_pane_cp13

0x535a,	// (0x0004945b) clock_digital_separator_pane_cp10_ParamLimits

0x535a,	// (0x0004945b) clock_digital_separator_pane_cp10

0x5374,	// (0x00049475) popup_clock_digital_window_cp02_t1_ParamLimits

0x5374,	// (0x00049475) popup_clock_digital_window_cp02_t1

0x1a18,	// (0x00045b19) clock_digital_number_pane_cp10_g1

0x1a18,	// (0x00045b19) clock_digital_number_pane_cp10_g2

0x0001,

0xf6fa,	// (0x000537fb) clock_digital_number_pane_cp10_g

0x1a18,	// (0x00045b19) clock_digital_separator_pane_cp10_g1

0x1a18,	// (0x00045b19) clock_digital_separator_pane_g2_cp10

0xab6b,	// (0x0004ec6c) navi_pane_vded_g4

0xab74,	// (0x0004ec75) navi_pane_vded_g5

0xab7d,	// (0x0004ec7e) navi_pane_vded_t1

0x1129,	// (0x0004522a) main_vded_pane

0x54ad,	// (0x000495ae) main_vded_pane_g1

0x54b7,	// (0x000495b8) main_vded_pane_g2

0x54c1,	// (0x000495c2) main_vded_pane_g3

0x0002,

0xf6ff,	// (0x00053800) main_vded_pane_g

0x54cb,	// (0x000495cc) main_vded_pane_t1

0x54d9,	// (0x000495da) main_vded_pane_t2

0x0001,

0xf706,	// (0x00053807) main_vded_pane_t

0x54e7,	// (0x000495e8) vded_slider_pane

0x54ef,	// (0x000495f0) vded_video_pane

0xca2a,	// (0x00050b2b) vded_video_pane_g1

0x54f7,	// (0x000495f8) vded_video_pane_g2

0x1b6d,	// (0x00045c6e) vded_video_pane_g3

0x0002,

0xf70b,	// (0x0005380c) vded_video_pane_g

0xca34,	// (0x00050b35) vded_slider_pane_g1

0xc1af,	// (0x000502b0) vded_slider_pane_g2

0xca3d,	// (0x00050b3e) vded_slider_pane_g3

0xca46,	// (0x00050b47) vded_slider_pane_g4

0xca4f,	// (0x00050b50) vded_slider_pane_g5

0x0004,

0xf712,	// (0x00053813) vded_slider_pane_g

0xea94,	// (0x00052b95) mup3_rocker_pane_ParamLimits

0xea94,	// (0x00052b95) mup3_rocker_pane

0xc798,	// (0x00050899) mup3_control_keys_pane_g1

0xca58,	// (0x00050b59) mup3_control_keys_pane_g2

0xc798,	// (0x00050899) mup3_control_keys_pane_g3

0xca60,	// (0x00050b61) mup3_control_keys_pane_g4

0x0003,

0xf71d,	// (0x0005381e) mup3_control_keys_pane_g

0x12c9,	// (0x000453ca) popup_toolbar2_fixed_window_cp01_ParamLimits

0x12c9,	// (0x000453ca) popup_toolbar2_fixed_window_cp01

0xea94,	// (0x00052b95) popup_toolbar2_fixed_window_cp02_ParamLimits

0xea94,	// (0x00052b95) popup_toolbar2_fixed_window_cp02

0xb3b2,	// (0x0004f4b3) popup_call2_audio_second_window_t4_ParamLimits

0xb3b2,	// (0x0004f4b3) popup_call2_audio_second_window_t4

0xb8ee,	// (0x0004f9ef) popup_call2_audio_first_window_t6_ParamLimits

0xb8ee,	// (0x0004f9ef) popup_call2_audio_first_window_t6

0xbb2c,	// (0x0004fc2d) popup_call2_audio_out_window_t6_ParamLimits

0xbb2c,	// (0x0004fc2d) popup_call2_audio_out_window_t6

0x1129,	// (0x0004522a) main_vitu_pane

0x12ed,	// (0x000453ee) aid_size_cell_itu_ParamLimits

0x12ed,	// (0x000453ee) aid_size_cell_itu

0x12ed,	// (0x000453ee) bg_popup_window_pane_cp08_ParamLimits

0x12ed,	// (0x000453ee) bg_popup_window_pane_cp08

0x12ed,	// (0x000453ee) field_vitu_entry_pane_ParamLimits

0x12ed,	// (0x000453ee) field_vitu_entry_pane

0x12ed,	// (0x000453ee) grid_vitu_function_pane_ParamLimits

0x12ed,	// (0x000453ee) grid_vitu_function_pane

0x12ed,	// (0x000453ee) grid_vitu_itu_pane_ParamLimits

0x12ed,	// (0x000453ee) grid_vitu_itu_pane

0x12ed,	// (0x000453ee) cell_vitu_itu_pane_ParamLimits

0x12ed,	// (0x000453ee) cell_vitu_itu_pane

0x12ed,	// (0x000453ee) cell_vitu_function_pane_ParamLimits

0x12ed,	// (0x000453ee) cell_vitu_function_pane

0x12ed,	// (0x000453ee) bg_popup_sub_pane_cp08_ParamLimits

0x12ed,	// (0x000453ee) bg_popup_sub_pane_cp08

0x1b77,	// (0x00045c78) field_vitu_entry_pane_t1_ParamLimits

0x1b77,	// (0x00045c78) field_vitu_entry_pane_t1

0xca68,	// (0x00050b69) field_vitu_entry_pane_t2_ParamLimits

0xca68,	// (0x00050b69) field_vitu_entry_pane_t2

0x0001,

0xf726,	// (0x00053827) field_vitu_entry_pane_t_ParamLimits

0xf726,	// (0x00053827) field_vitu_entry_pane_t

0xc0d6,	// (0x000501d7) bg_button_pane_cp05_ParamLimits

0xc0d6,	// (0x000501d7) bg_button_pane_cp05

0xca85,	// (0x00050b86) cell_vitu_itu_pane_g1

0xac7a,	// (0x0004ed7b) cell_vitu_itu_pane_t1_ParamLimits

0xac7a,	// (0x0004ed7b) cell_vitu_itu_pane_t1

0xac7a,	// (0x0004ed7b) cell_vitu_itu_pane_t2_ParamLimits

0xac7a,	// (0x0004ed7b) cell_vitu_itu_pane_t2

0x0002,

0xf72b,	// (0x0005382c) cell_vitu_itu_pane_t_ParamLimits

0xf72b,	// (0x0005382c) cell_vitu_itu_pane_t

0x1129,	// (0x0004522a) bg_button_pane_cp07

0x1b6d,	// (0x00045c6e) cell_vitu_function_pane_g1

0x9fdb,	// (0x0004e0dc) main_calc_pane_g1

0x1157,	// (0x00045258) aid_visual_content_pane

0x1129,	// (0x0004522a) main_vradio_pane

0x1a9b,	// (0x00045b9c) main_vradio_pane_g1_ParamLimits

0x1a9b,	// (0x00045b9c) main_vradio_pane_g1

0x1aa9,	// (0x00045baa) main_vradio_pane_g2_ParamLimits

0x1aa9,	// (0x00045baa) main_vradio_pane_g2

0x0001,

0xf732,	// (0x00053833) main_vradio_pane_g_ParamLimits

0xf732,	// (0x00053833) main_vradio_pane_g

0x1b77,	// (0x00045c78) main_vradio_pane_t1_ParamLimits

0x1b77,	// (0x00045c78) main_vradio_pane_t1

0x1b77,	// (0x00045c78) main_vradio_pane_t2_ParamLimits

0x1b77,	// (0x00045c78) main_vradio_pane_t2

0x1b8b,	// (0x00045c8c) main_vradio_pane_t3_ParamLimits

0x1b8b,	// (0x00045c8c) main_vradio_pane_t3

0x0002,

0xf737,	// (0x00053838) main_vradio_pane_t_ParamLimits

0xf737,	// (0x00053838) main_vradio_pane_t

0x12ed,	// (0x000453ee) vradio_rocker_control_pane_ParamLimits

0x12ed,	// (0x000453ee) vradio_rocker_control_pane

0x12ed,	// (0x000453ee) vradio_station_info_pane_ParamLimits

0x12ed,	// (0x000453ee) vradio_station_info_pane

0x12ed,	// (0x000453ee) vradio_frequency_info_pane_ParamLimits

0x12ed,	// (0x000453ee) vradio_frequency_info_pane

0x1b6d,	// (0x00045c6e) vradio_station_info_pane_g1

0xac7a,	// (0x0004ed7b) vradio_station_info_pane_t1_ParamLimits

0xac7a,	// (0x0004ed7b) vradio_station_info_pane_t1

0x1b8b,	// (0x00045c8c) vradio_station_info_pane_t2_ParamLimits

0x1b8b,	// (0x00045c8c) vradio_station_info_pane_t2

0x0001,

0xf73e,	// (0x0005383f) vradio_station_info_pane_t_ParamLimits

0xf73e,	// (0x0005383f) vradio_station_info_pane_t

0x1129,	// (0x0004522a) vradio_tuning_pane

0x5500,	// (0x00049601) vradio_rocker_control_pane_g1

0xcaa1,	// (0x00050ba2) vradio_rocker_control_pane_g2

0x550a,	// (0x0004960b) vradio_rocker_control_pane_g3

0x5514,	// (0x00049615) vradio_rocker_control_pane_g4

0x551e,	// (0x0004961f) vradio_rocker_control_pane_g5

0x0004,

0xf743,	// (0x00053844) vradio_rocker_control_pane_g

0x1b6d,	// (0x00045c6e) vradio_frequency_info_pane_g1

0x1b77,	// (0x00045c78) vradio_frequency_info_pane_t1_ParamLimits

0x1b77,	// (0x00045c78) vradio_frequency_info_pane_t1

0x5528,	// (0x00049629) vradio_tuning_pane_g1

0x5533,	// (0x00049634) vradio_tuning_pane_t1

0x9f9a,	// (0x0004e09b) area_side_right_pane_ParamLimits

0x9f9a,	// (0x0004e09b) area_side_right_pane

0xbf0e,	// (0x0005000f) status_small_pane_g1

0xbf16,	// (0x00050017) status_small_pane_g2

0xbf1f,	// (0x00050020) status_small_pane_g3

0xbf28,	// (0x00050029) status_small_pane_g4

0x0003,

0xf50f,	// (0x00053610) status_small_pane_g

0xbf31,	// (0x00050032) status_small_pane_t1

0x1129,	// (0x0004522a) main_video3_pane

0x1129,	// (0x0004522a) cams_zoom_vslider_pane

0xcaa9,	// (0x00050baa) image3_wide_pane_ParamLimits

0xcaa9,	// (0x00050baa) image3_wide_pane

0x1129,	// (0x0004522a) image3_wide_small_pane

0xcac3,	// (0x00050bc4) main_video3_pane_g1_ParamLimits

0xcac3,	// (0x00050bc4) main_video3_pane_g1

0xcac3,	// (0x00050bc4) main_video3_pane_g2_ParamLimits

0xcac3,	// (0x00050bc4) main_video3_pane_g2

0x0001,

0xf74e,	// (0x0005384f) main_video3_pane_g_ParamLimits

0xf74e,	// (0x0005384f) main_video3_pane_g

0xcae1,	// (0x00050be2) main_video3_pane_t1_ParamLimits

0xcae1,	// (0x00050be2) main_video3_pane_t1

0xcae1,	// (0x00050be2) main_video3_pane_t2_ParamLimits

0xcae1,	// (0x00050be2) main_video3_pane_t2

0xcae1,	// (0x00050be2) main_video3_pane_t3_ParamLimits

0xcae1,	// (0x00050be2) main_video3_pane_t3

0x0002,

0xf753,	// (0x00053854) main_video3_pane_t_ParamLimits

0xf753,	// (0x00053854) main_video3_pane_t

0x1b6d,	// (0x00045c6e) cams_zoom_vslider_pane_g1

0x1b6d,	// (0x00045c6e) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x0005318d) cams_zoom_vslider_pane_g

0x1129,	// (0x0004522a) small_slider_vertical_pane

0x1b6d,	// (0x00045c6e) small_slider_vertical_pane_g1

0x1b6d,	// (0x00045c6e) small_slider_vertical_pane_g2

0xcb08,	// (0x00050c09) small_slider_vertical_pane_g3

0x0002,

0xf75a,	// (0x0005385b) small_slider_vertical_pane_g

0x1129,	// (0x0004522a) main_hwr_training_pane

0xcb11,	// (0x00050c12) hwr_training_instruct_pane_ParamLimits

0xcb11,	// (0x00050c12) hwr_training_instruct_pane

0x5542,	// (0x00049643) hwr_training_navi_pane_ParamLimits

0x5542,	// (0x00049643) hwr_training_navi_pane

0x5561,	// (0x00049662) hwr_training_write_pane_ParamLimits

0x5561,	// (0x00049662) hwr_training_write_pane

0x1129,	// (0x0004522a) bg_frame_shadow_pane

0xcb48,	// (0x00050c49) hwr_training_write_pane_g1

0xcb50,	// (0x00050c51) hwr_training_write_pane_g2

0xcb58,	// (0x00050c59) hwr_training_write_pane_g3

0xcb60,	// (0x00050c61) hwr_training_write_pane_g4

0xcb68,	// (0x00050c69) hwr_training_write_pane_g5

0xcb70,	// (0x00050c71) hwr_training_write_pane_g6

0xcb78,	// (0x00050c79) hwr_training_write_pane_g7

0x0006,

0xf761,	// (0x00053862) hwr_training_write_pane_g

0xcb80,	// (0x00050c81) hwr_training_navi_pane_g1_ParamLimits

0xcb80,	// (0x00050c81) hwr_training_navi_pane_g1

0xcb92,	// (0x00050c93) hwr_training_navi_pane_g2_ParamLimits

0xcb92,	// (0x00050c93) hwr_training_navi_pane_g2

0xcba4,	// (0x00050ca5) hwr_training_navi_pane_g3_ParamLimits

0xcba4,	// (0x00050ca5) hwr_training_navi_pane_g3

0xcbb4,	// (0x00050cb5) hwr_training_navi_pane_g4_ParamLimits

0xcbb4,	// (0x00050cb5) hwr_training_navi_pane_g4

0x0004,

0xf770,	// (0x00053871) hwr_training_navi_pane_g_ParamLimits

0xf770,	// (0x00053871) hwr_training_navi_pane_g

0xcbc1,	// (0x00050cc2) hwr_training_navi_pane_t1

0x55ab,	// (0x000496ac) list_single_hwr_training_instruct_pane_ParamLimits

0x55ab,	// (0x000496ac) list_single_hwr_training_instruct_pane

0xcbcf,	// (0x00050cd0) list_single_hwr_training_instruct_pane_t1

0xc385,	// (0x00050486) bg_frame_shadow_pane_g1

0xcbde,	// (0x00050cdf) bg_frame_shadow_pane_g2

0xcbe6,	// (0x00050ce7) bg_frame_shadow_pane_g3

0xcbee,	// (0x00050cef) bg_frame_shadow_pane_g4

0xcbf6,	// (0x00050cf7) bg_frame_shadow_pane_g5

0xcbfe,	// (0x00050cff) bg_frame_shadow_pane_g6

0xcc06,	// (0x00050d07) bg_frame_shadow_pane_g7

0x1e13,	// (0x00045f14) bg_frame_shadow_pane_g8

0x0007,

0xf77b,	// (0x0005387c) bg_frame_shadow_pane_g

0x1129,	// (0x0004522a) main_video_tele_dialer_pane

0x55c1,	// (0x000496c2) aid_size_cell_video_keypad_ParamLimits

0x55c1,	// (0x000496c2) aid_size_cell_video_keypad

0x55db,	// (0x000496dc) grid_video_dialer_keypad_pane_ParamLimits

0x55db,	// (0x000496dc) grid_video_dialer_keypad_pane

0x5629,	// (0x0004972a) video_down_pane_cp_ParamLimits

0x5629,	// (0x0004972a) video_down_pane_cp

0x565b,	// (0x0004975c) cell_video_dialer_keypad_pane_ParamLimits

0x565b,	// (0x0004975c) cell_video_dialer_keypad_pane

0xcc0e,	// (0x00050d0f) bg_button_pane_cp08_ParamLimits

0xcc0e,	// (0x00050d0f) bg_button_pane_cp08

0x567d,	// (0x0004977e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x567d,	// (0x0004977e) cell_video_dialer_keypad_pane_g1

0xea94,	// (0x00052b95) mup3_rocker2_pane_ParamLimits

0xea94,	// (0x00052b95) mup3_rocker2_pane

0x1b6d,	// (0x00045c6e) mup3_rocker2_pane_g1

0x4234,	// (0x00048335) main_dialer2_pane

0x1129,	// (0x0004522a) main_mp4_pane

0xcc38,	// (0x00050d39) main_mp4_pane_g1_ParamLimits

0xcc38,	// (0x00050d39) main_mp4_pane_g1

0xcc38,	// (0x00050d39) main_mp4_pane_g2_ParamLimits

0xcc38,	// (0x00050d39) main_mp4_pane_g2

0x56b7,	// (0x000497b8) main_mp4_pane_g3_ParamLimits

0x56b7,	// (0x000497b8) main_mp4_pane_g3

0xcc56,	// (0x00050d57) main_mp4_pane_g4_ParamLimits

0xcc56,	// (0x00050d57) main_mp4_pane_g4

0xcc7e,	// (0x00050d7f) main_mp4_pane_g5_ParamLimits

0xcc7e,	// (0x00050d7f) main_mp4_pane_g5

0x0007,

0xf79b,	// (0x0005389c) main_mp4_pane_g_ParamLimits

0xf79b,	// (0x0005389c) main_mp4_pane_g

0xcce6,	// (0x00050de7) main_mp4_pane_t1_ParamLimits

0xcce6,	// (0x00050de7) main_mp4_pane_t1

0xcd48,	// (0x00050e49) main_mp4_pane_t2_ParamLimits

0xcd48,	// (0x00050e49) main_mp4_pane_t2

0xcdac,	// (0x00050ead) main_mp4_pane_t3_ParamLimits

0xcdac,	// (0x00050ead) main_mp4_pane_t3

0xce0a,	// (0x00050f0b) main_mp4_pane_t4_ParamLimits

0xce0a,	// (0x00050f0b) main_mp4_pane_t4

0x0003,

0xf7ac,	// (0x000538ad) main_mp4_pane_t_ParamLimits

0xf7ac,	// (0x000538ad) main_mp4_pane_t

0xce68,	// (0x00050f69) mp4_progress_pane_ParamLimits

0xce68,	// (0x00050f69) mp4_progress_pane

0xd36e,	// (0x0005146f) mp4_rocker_pane_ParamLimits

0xd36e,	// (0x0005146f) mp4_rocker_pane

0xd382,	// (0x00051483) mp4_progress_pane_t1

0xd3a1,	// (0x000514a2) mp4_progress_pane_t2

0x0001,

0xf7b5,	// (0x000538b6) mp4_progress_pane_t

0xd3c0,	// (0x000514c1) mup_progress_pane_cp04

0x1b6d,	// (0x00045c6e) mp4_rocker_pane_g1

0x12ed,	// (0x000453ee) aid_cell_size_keypad2_ParamLimits

0x12ed,	// (0x000453ee) aid_cell_size_keypad2

0x12ed,	// (0x000453ee) dialer2_ne_pane_ParamLimits

0x12ed,	// (0x000453ee) dialer2_ne_pane

0x12ed,	// (0x000453ee) grid_dialer2_keypad_pane_ParamLimits

0x12ed,	// (0x000453ee) grid_dialer2_keypad_pane

0xc0d6,	// (0x000501d7) bg_popup_call_pane_cp07_ParamLimits

0xc0d6,	// (0x000501d7) bg_popup_call_pane_cp07

0x56e7,	// (0x000497e8) dialer2_ne_pane_t1_ParamLimits

0x56e7,	// (0x000497e8) dialer2_ne_pane_t1

0x5726,	// (0x00049827) cell_dialer2_keypad_pane_ParamLimits

0x5726,	// (0x00049827) cell_dialer2_keypad_pane

0xc0d6,	// (0x000501d7) bg_button_pane_pane_cp04_ParamLimits

0xc0d6,	// (0x000501d7) bg_button_pane_pane_cp04

0x1a9b,	// (0x00045b9c) cell_dialer2_keypad_pane_g1_ParamLimits

0x1a9b,	// (0x00045b9c) cell_dialer2_keypad_pane_g1

0x25c5,	// (0x000466c6) aid_placing_vt_set_content_ParamLimits

0x25c5,	// (0x000466c6) aid_placing_vt_set_content

0x25ed,	// (0x000466ee) aid_placing_vt_set_title_ParamLimits

0x25ed,	// (0x000466ee) aid_placing_vt_set_title

0x1129,	// (0x0004522a) main_image3_pane

0x579b,	// (0x0004989c) area_side_right_pane_cp01_ParamLimits

0x579b,	// (0x0004989c) area_side_right_pane_cp01

0x57b2,	// (0x000498b3) main_image3_pane_g1_ParamLimits

0x57b2,	// (0x000498b3) main_image3_pane_g1

0x57c0,	// (0x000498c1) main_image3_pane_g2_ParamLimits

0x57c0,	// (0x000498c1) main_image3_pane_g2

0x57e8,	// (0x000498e9) main_image3_pane_g3_ParamLimits

0x57e8,	// (0x000498e9) main_image3_pane_g3

0x5812,	// (0x00049913) main_image3_pane_g4_ParamLimits

0x5812,	// (0x00049913) main_image3_pane_g4

0x0003,

0xf7c4,	// (0x000538c5) main_image3_pane_g_ParamLimits

0xf7c4,	// (0x000538c5) main_image3_pane_g

0x583c,	// (0x0004993d) main_image3_pane_t1_ParamLimits

0x583c,	// (0x0004993d) main_image3_pane_t1

0x5894,	// (0x00049995) main_image3_pane_t2_ParamLimits

0x5894,	// (0x00049995) main_image3_pane_t2

0x58e6,	// (0x000499e7) main_image3_pane_t3_ParamLimits

0x58e6,	// (0x000499e7) main_image3_pane_t3

0x0003,

0xf7cd,	// (0x000538ce) main_image3_pane_t_ParamLimits

0xf7cd,	// (0x000538ce) main_image3_pane_t

0x12ed,	// (0x000453ee) grid_sctrl_middle_pane_cp01_ParamLimits

0x12ed,	// (0x000453ee) grid_sctrl_middle_pane_cp01

0x596e,	// (0x00049a6f) cell_sctrl_middle_pane_cp01_ParamLimits

0x596e,	// (0x00049a6f) cell_sctrl_middle_pane_cp01

0x598b,	// (0x00049a8c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x598b,	// (0x00049a8c) cell_sctrl_middle_pane_cp01_g1

0x1129,	// (0x0004522a) main_call4_pane

0x59a1,	// (0x00049aa2) aid_size_button_call4_ParamLimits

0x59a1,	// (0x00049aa2) aid_size_button_call4

0x59d4,	// (0x00049ad5) call4_windows_pane_ParamLimits

0x59d4,	// (0x00049ad5) call4_windows_pane

0x59f3,	// (0x00049af4) grid_call4_button_pane_ParamLimits

0x59f3,	// (0x00049af4) grid_call4_button_pane

0x5a26,	// (0x00049b27) call4_windows_conf_pane

0x5a3b,	// (0x00049b3c) popup_call4_audio_first_window_ParamLimits

0x5a3b,	// (0x00049b3c) popup_call4_audio_first_window

0x5a8b,	// (0x00049b8c) popup_call4_audio_second_window_ParamLimits

0x5a8b,	// (0x00049b8c) popup_call4_audio_second_window

0x5aa2,	// (0x00049ba3) popup_call4_audio_wait_window_ParamLimits

0x5aa2,	// (0x00049ba3) popup_call4_audio_wait_window

0x5ab0,	// (0x00049bb1) cell_call4_button_pane_ParamLimits

0x5ab0,	// (0x00049bb1) cell_call4_button_pane

0x5ad5,	// (0x00049bd6) bg_button_pane_cp09_ParamLimits

0x5ad5,	// (0x00049bd6) bg_button_pane_cp09

0x5ae1,	// (0x00049be2) cell_call4_button_pane_g1_ParamLimits

0x5ae1,	// (0x00049be2) cell_call4_button_pane_g1

0x5b07,	// (0x00049c08) cell_call4_button_pane_t1_ParamLimits

0x5b07,	// (0x00049c08) cell_call4_button_pane_t1

0xd409,	// (0x0005150a) popup_call4_audio_conf_window_ParamLimits

0xd409,	// (0x0005150a) popup_call4_audio_conf_window

0x5021,	// (0x00049122) mup3_progress_pane_t1_ParamLimits

0x5040,	// (0x00049141) mup3_progress_pane_t2_ParamLimits

0xc763,	// (0x00050864) mup3_progress_pane_t3_ParamLimits

0xf6a7,	// (0x000537a8) mup3_progress_pane_t_ParamLimits

0xc780,	// (0x00050881) mup_progress_pane_cp03_ParamLimits

0xc798,	// (0x00050899) mup3_control_keys_pane_g4_copy1

0xd36e,	// (0x0005146f) mp4_rocker2_pane_ParamLimits

0xd36e,	// (0x0005146f) mp4_rocker2_pane

0xc798,	// (0x00050899) mp4_rocker2_pane_g1

0xc798,	// (0x00050899) mp4_rocker2_pane_g2

0xc798,	// (0x00050899) mp4_rocker2_pane_g3

0xc798,	// (0x00050899) mp4_rocker2_pane_g4

0xc798,	// (0x00050899) mp4_rocker2_pane_g5

0x0004,

0xf7d6,	// (0x000538d7) mp4_rocker2_pane_g

0x1129,	// (0x0004522a) main_camera4_pane

0x1129,	// (0x0004522a) main_video4_pane

0x55f7,	// (0x000496f8) main_video_tele_dialer_pane_t1_ParamLimits

0x55f7,	// (0x000496f8) main_video_tele_dialer_pane_t1

0x5610,	// (0x00049711) main_video_tele_dialer_pane_t2_ParamLimits

0x5610,	// (0x00049711) main_video_tele_dialer_pane_t2

0x0001,

0xf78c,	// (0x0005388d) main_video_tele_dialer_pane_t_ParamLimits

0xf78c,	// (0x0005388d) main_video_tele_dialer_pane_t

0x5b49,	// (0x00049c4a) cam4_autofocus_pane_ParamLimits

0x5b49,	// (0x00049c4a) cam4_autofocus_pane

0x5b5f,	// (0x00049c60) cam4_image_uncrop_pane_ParamLimits

0x5b5f,	// (0x00049c60) cam4_image_uncrop_pane

0x5b79,	// (0x00049c7a) cam4_indicators_pane_ParamLimits

0x5b79,	// (0x00049c7a) cam4_indicators_pane

0x5ba4,	// (0x00049ca5) main_camera4_pane_g1_ParamLimits

0x5ba4,	// (0x00049ca5) main_camera4_pane_g1

0x5bb6,	// (0x00049cb7) main_camera4_pane_g2_ParamLimits

0x5bb6,	// (0x00049cb7) main_camera4_pane_g2

0x5bc9,	// (0x00049cca) main_camera4_pane_g3_ParamLimits

0x5bc9,	// (0x00049cca) main_camera4_pane_g3

0x5bdc,	// (0x00049cdd) main_camera4_pane_g4_ParamLimits

0x5bdc,	// (0x00049cdd) main_camera4_pane_g4

0x5bef,	// (0x00049cf0) main_camera4_pane_g5_ParamLimits

0x5bef,	// (0x00049cf0) main_camera4_pane_g5

0x0005,

0xf7e1,	// (0x000538e2) main_camera4_pane_g_ParamLimits

0xf7e1,	// (0x000538e2) main_camera4_pane_g

0x5c13,	// (0x00049d14) main_camera4_pane_t1_ParamLimits

0x5c13,	// (0x00049d14) main_camera4_pane_t1

0x1a9b,	// (0x00045b9c) bg_tb_trans_pane_cp06

0xcf2c,	// (0x0005102d) cam4_indicators_pane_g1

0xcf3d,	// (0x0005103e) cam4_indicators_pane_g2

0x0002,

0xf7fc,	// (0x000538fd) cam4_indicators_pane_g

0xcf55,	// (0x00051056) cam4_indicators_pane_t1

0x5c77,	// (0x00049d78) main_video4_pane_g1_ParamLimits

0x5c77,	// (0x00049d78) main_video4_pane_g1

0x5c86,	// (0x00049d87) main_video4_pane_g2_ParamLimits

0x5c86,	// (0x00049d87) main_video4_pane_g2

0x5c95,	// (0x00049d96) main_video4_pane_g3_ParamLimits

0x5c95,	// (0x00049d96) main_video4_pane_g3

0x5ca4,	// (0x00049da5) main_video4_pane_g4_ParamLimits

0x5ca4,	// (0x00049da5) main_video4_pane_g4

0x0004,

0xf803,	// (0x00053904) main_video4_pane_g_ParamLimits

0xf803,	// (0x00053904) main_video4_pane_g

0x5cc2,	// (0x00049dc3) vid4_indicators_pane_ParamLimits

0x5cc2,	// (0x00049dc3) vid4_indicators_pane

0x5cf0,	// (0x00049df1) video4_image_uncrop_cif_pane_ParamLimits

0x5cf0,	// (0x00049df1) video4_image_uncrop_cif_pane

0x5d0a,	// (0x00049e0b) video4_image_uncrop_nhd_pane_ParamLimits

0x5d0a,	// (0x00049e0b) video4_image_uncrop_nhd_pane

0x5b5f,	// (0x00049c60) video4_image_uncrop_vga_pane_ParamLimits

0x5b5f,	// (0x00049c60) video4_image_uncrop_vga_pane

0x12ed,	// (0x000453ee) bg_tb_trans_pane_cp07

0xcf7f,	// (0x00051080) vid4_indicators_pane_g1

0xcf93,	// (0x00051094) vid4_indicators_pane_g2

0xcfa7,	// (0x000510a8) vid4_indicators_pane_g3

0x0004,

0xf80e,	// (0x0005390f) vid4_indicators_pane_g

0xcfd4,	// (0x000510d5) vid4_indicators_pane_t1

0x5d1e,	// (0x00049e1f) cam4_autofocus_pane_g1

0x5d26,	// (0x00049e27) cam4_autofocus_pane_g2

0x5d2e,	// (0x00049e2f) cam4_autofocus_pane_g3

0x0002,

0xf819,	// (0x0005391a) cam4_autofocus_pane_g

0x5d36,	// (0x00049e37) cam4_autofocus_pane_g3_copy1

0x563f,	// (0x00049740) video_down_pane_cp_t1

0x564d,	// (0x0004974e) video_down_pane_cp_t2

0x0001,

0xf791,	// (0x00053892) video_down_pane_cp_t

0x12ed,	// (0x000453ee) popup_vitu2_window_ParamLimits

0x12ed,	// (0x000453ee) popup_vitu2_window

0x5d3e,	// (0x00049e3f) aid_size_cell2_itu2_ParamLimits

0x5d3e,	// (0x00049e3f) aid_size_cell2_itu2

0x5d64,	// (0x00049e65) aid_size_cell_itu2_ParamLimits

0x5d64,	// (0x00049e65) aid_size_cell_itu2

0x509f,	// (0x000491a0) bg_popup_window_pane_cp09_ParamLimits

0x509f,	// (0x000491a0) bg_popup_window_pane_cp09

0x5dc0,	// (0x00049ec1) field_vitu2_entry_pane_ParamLimits

0x5dc0,	// (0x00049ec1) field_vitu2_entry_pane

0x5de6,	// (0x00049ee7) grid_vitu2_function_pane_ParamLimits

0x5de6,	// (0x00049ee7) grid_vitu2_function_pane

0x5e33,	// (0x00049f34) grid_vitu2_itu_pane_ParamLimits

0x5e33,	// (0x00049f34) grid_vitu2_itu_pane

0x5ec5,	// (0x00049fc6) cell_vitu2_itu_pane_ParamLimits

0x5ec5,	// (0x00049fc6) cell_vitu2_itu_pane

0x5ef1,	// (0x00049ff2) cell_vitu2_function_pane_ParamLimits

0x5ef1,	// (0x00049ff2) cell_vitu2_function_pane

0xd41d,	// (0x0005151e) bg_popup_call_pane_cp08_ParamLimits

0xd41d,	// (0x0005151e) bg_popup_call_pane_cp08

0xd434,	// (0x00051535) field_vitu2_entry_pane_g1

0xd440,	// (0x00051541) field_vitu2_entry_pane_g2

0x0002,

0xf820,	// (0x00053921) field_vitu2_entry_pane_g

0x5f30,	// (0x0004a031) field_vitu2_entry_pane_t1_ParamLimits

0x5f30,	// (0x0004a031) field_vitu2_entry_pane_t1

0xd44c,	// (0x0005154d) field_vitu2_entry_pane_t2_ParamLimits

0xd44c,	// (0x0005154d) field_vitu2_entry_pane_t2

0x0001,

0xf827,	// (0x00053928) field_vitu2_entry_pane_t_ParamLimits

0xf827,	// (0x00053928) field_vitu2_entry_pane_t

0x5f60,	// (0x0004a061) bg_button_pane_cp010_ParamLimits

0x5f60,	// (0x0004a061) bg_button_pane_cp010

0x5f6e,	// (0x0004a06f) cell_vitu2_itu_pane_g1

0x5f94,	// (0x0004a095) cell_vitu2_itu_pane_t1_ParamLimits

0x5f94,	// (0x0004a095) cell_vitu2_itu_pane_t1

0x5ff2,	// (0x0004a0f3) cell_vitu2_itu_pane_t2_ParamLimits

0x5ff2,	// (0x0004a0f3) cell_vitu2_itu_pane_t2

0x0002,

0xf831,	// (0x00053932) cell_vitu2_itu_pane_t_ParamLimits

0xf831,	// (0x00053932) cell_vitu2_itu_pane_t

0x12ed,	// (0x000453ee) bg_button_pane_cp011

0x60de,	// (0x0004a1df) cell_vitu2_function_pane_g1

0x1129,	// (0x0004522a) main_myfav_hc_pane

0x5936,	// (0x00049a37) popup_image3_note_pane_ParamLimits

0x5936,	// (0x00049a37) popup_image3_note_pane

0x5952,	// (0x00049a53) popup_image3_tool_bar_pane_ParamLimits

0x5952,	// (0x00049a53) popup_image3_tool_bar_pane

0x6080,	// (0x0004a181) cell_vitu2_itu_pane_t3_ParamLimits

0x6080,	// (0x0004a181) cell_vitu2_itu_pane_t3

0x1129,	// (0x0004522a) bg_popup_trans_pane

0xd471,	// (0x00051572) grid_image3_tool_bar_pane

0xd47b,	// (0x0005157c) bg_popup_trans_pane_g1

0xa367,	// (0x0004e468) bg_popup_trans_pane_g2

0xd483,	// (0x00051584) bg_popup_trans_pane_g3

0xd48b,	// (0x0005158c) bg_popup_trans_pane_g4

0xd493,	// (0x00051594) bg_popup_trans_pane_g5

0xd49b,	// (0x0005159c) bg_popup_trans_pane_g6

0xd4a3,	// (0x000515a4) bg_popup_trans_pane_g7

0xd4ab,	// (0x000515ac) bg_popup_trans_pane_g8

0xa347,	// (0x0004e448) bg_popup_trans_pane_g9

0x0008,

0xf838,	// (0x00053939) bg_popup_trans_pane_g

0xd4b3,	// (0x000515b4) cell_image3_tool_bar_pane_ParamLimits

0xd4b3,	// (0x000515b4) cell_image3_tool_bar_pane

0x1b6d,	// (0x00045c6e) cell_image3_tool_bar_pane_g1

0x1129,	// (0x0004522a) bg_popup_trans_pane_cp1

0xd4c7,	// (0x000515c8) popup_image3_note_pane_t1

0xd4d5,	// (0x000515d6) popup_image3_note_pane_t2

0xd4e3,	// (0x000515e4) popup_image3_note_pane_t3

0x0002,

0xf84b,	// (0x0005394c) popup_image3_note_pane_t

0xd4f1,	// (0x000515f2) popup_image3_note_pane_t3_copy1

0x60f1,	// (0x0004a1f2) bg_myfav_hc_instruction_pane_ParamLimits

0x60f1,	// (0x0004a1f2) bg_myfav_hc_instruction_pane

0x6105,	// (0x0004a206) cell_myfav_contact_pane_ParamLimits

0x6105,	// (0x0004a206) cell_myfav_contact_pane

0x6123,	// (0x0004a224) cell_myfav_contact_pane_cp1_ParamLimits

0x6123,	// (0x0004a224) cell_myfav_contact_pane_cp1

0x613b,	// (0x0004a23c) cell_myfav_contact_pane_cp2_ParamLimits

0x613b,	// (0x0004a23c) cell_myfav_contact_pane_cp2

0x6153,	// (0x0004a254) cell_myfav_contact_pane_cp3_ParamLimits

0x6153,	// (0x0004a254) cell_myfav_contact_pane_cp3

0x616a,	// (0x0004a26b) cell_myfav_contact_pane_cp4_ParamLimits

0x616a,	// (0x0004a26b) cell_myfav_contact_pane_cp4

0x6182,	// (0x0004a283) cell_myfav_contact_pane_cp5_ParamLimits

0x6182,	// (0x0004a283) cell_myfav_contact_pane_cp5

0x6196,	// (0x0004a297) cell_myfav_contact_pane_cp6_ParamLimits

0x6196,	// (0x0004a297) cell_myfav_contact_pane_cp6

0x61ac,	// (0x0004a2ad) cell_myfav_contact_pane_cp7_ParamLimits

0x61ac,	// (0x0004a2ad) cell_myfav_contact_pane_cp7

0xd4ff,	// (0x00051600) listscroll_gen_pane_cp05

0x61c6,	// (0x0004a2c7) main_myfav_hc_pane_g1_ParamLimits

0x61c6,	// (0x0004a2c7) main_myfav_hc_pane_g1

0x61e0,	// (0x0004a2e1) main_myfav_hc_pane_g2_ParamLimits

0x61e0,	// (0x0004a2e1) main_myfav_hc_pane_g2

0x0002,

0xf852,	// (0x00053953) main_myfav_hc_pane_g_ParamLimits

0xf852,	// (0x00053953) main_myfav_hc_pane_g

0x6212,	// (0x0004a313) main_myfav_hc_pane_t1_ParamLimits

0x6212,	// (0x0004a313) main_myfav_hc_pane_t1

0xd508,	// (0x00051609) main_myfav_hc_pane_t2_ParamLimits

0xd508,	// (0x00051609) main_myfav_hc_pane_t2

0xd51a,	// (0x0005161b) main_myfav_hc_pane_t3_ParamLimits

0xd51a,	// (0x0005161b) main_myfav_hc_pane_t3

0x6229,	// (0x0004a32a) main_myfav_hc_pane_t4_ParamLimits

0x6229,	// (0x0004a32a) main_myfav_hc_pane_t4

0x0004,

0xf859,	// (0x0005395a) main_myfav_hc_pane_t_ParamLimits

0xf859,	// (0x0005395a) main_myfav_hc_pane_t

0x1b6d,	// (0x00045c6e) bg_myfav_hc_instruction_pane_g1

0xd52c,	// (0x0005162d) cell_myfav_contact_pane_g1_ParamLimits

0xd52c,	// (0x0005162d) cell_myfav_contact_pane_g1

0xd52c,	// (0x0005162d) cell_myfav_contact_pane_g2_ParamLimits

0xd52c,	// (0x0005162d) cell_myfav_contact_pane_g2

0xd538,	// (0x00051639) cell_myfav_contact_pane_g3_ParamLimits

0xd538,	// (0x00051639) cell_myfav_contact_pane_g3

0x1aa9,	// (0x00045baa) cell_myfav_contact_pane_g4_ParamLimits

0x1aa9,	// (0x00045baa) cell_myfav_contact_pane_g4

0xd545,	// (0x00051646) cell_myfav_contact_pane_g5_ParamLimits

0xd545,	// (0x00051646) cell_myfav_contact_pane_g5

0x0004,

0xf864,	// (0x00053965) cell_myfav_contact_pane_g_ParamLimits

0xf864,	// (0x00053965) cell_myfav_contact_pane_g

0x61fa,	// (0x0004a2fb) main_myfav_hc_pane_g3_ParamLimits

0x61fa,	// (0x0004a2fb) main_myfav_hc_pane_g3

0x0b41,	// (0x00044c42) popup_adpt_find_window

0x6251,	// (0x0004a352) afind_page_pane_ParamLimits

0x6251,	// (0x0004a352) afind_page_pane

0x6267,	// (0x0004a368) aid_size_cell_afind_ParamLimits

0x6267,	// (0x0004a368) aid_size_cell_afind

0x6285,	// (0x0004a386) bg_popup_sub_pane_cp09_ParamLimits

0x6285,	// (0x0004a386) bg_popup_sub_pane_cp09

0x6297,	// (0x0004a398) find_pane_cp01_ParamLimits

0x6297,	// (0x0004a398) find_pane_cp01

0xd551,	// (0x00051652) grid_afind_control_pane_ParamLimits

0xd551,	// (0x00051652) grid_afind_control_pane

0x62ab,	// (0x0004a3ac) grid_afind_pane_ParamLimits

0x62ab,	// (0x0004a3ac) grid_afind_pane

0x62cd,	// (0x0004a3ce) cell_afind_pane_ParamLimits

0x62cd,	// (0x0004a3ce) cell_afind_pane

0x1b6d,	// (0x00045c6e) afind_page_pane_g1

0x6334,	// (0x0004a435) afind_page_pane_g2

0x633c,	// (0x0004a43d) afind_page_pane_g3

0x0002,

0xf86f,	// (0x00053970) afind_page_pane_g

0x6344,	// (0x0004a445) afind_page_pane_t1

0xd577,	// (0x00051678) cell_afind_grid_control_pane_ParamLimits

0xd577,	// (0x00051678) cell_afind_grid_control_pane

0xd586,	// (0x00051687) bg_button_pane_cp69_ParamLimits

0xd586,	// (0x00051687) bg_button_pane_cp69

0x6352,	// (0x0004a453) cell_afind_pane_g1_ParamLimits

0x6352,	// (0x0004a453) cell_afind_pane_g1

0x635f,	// (0x0004a460) cell_afind_pane_t1_ParamLimits

0x635f,	// (0x0004a460) cell_afind_pane_t1

0xd592,	// (0x00051693) bg_button_pane_cp72

0xd59a,	// (0x0005169b) cell_afind_grid_control_pane_g1

0x3d34,	// (0x00047e35) aid_image_placing_area_ParamLimits

0x3d34,	// (0x00047e35) aid_image_placing_area

0x1a9b,	// (0x00045b9c) field_vitu_entry_pane_g1_ParamLimits

0x1a9b,	// (0x00045b9c) field_vitu_entry_pane_g1

0x1a9b,	// (0x00045b9c) field_vitu_entry_pane_g2_ParamLimits

0x1a9b,	// (0x00045b9c) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x0005329a) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x0005329a) field_vitu_entry_pane_g

0xca85,	// (0x00050b86) cell_vitu_itu_pane_g1_ParamLimits

0xca68,	// (0x00050b69) cell_vitu_itu_pane_t3_ParamLimits

0xca68,	// (0x00050b69) cell_vitu_itu_pane_t3

0xd382,	// (0x00051483) mp4_progress_pane_t1_ParamLimits

0xd3a1,	// (0x000514a2) mp4_progress_pane_t2_ParamLimits

0xf7b5,	// (0x000538b6) mp4_progress_pane_t_ParamLimits

0xd3c0,	// (0x000514c1) mup_progress_pane_cp04_ParamLimits

0x623d,	// (0x0004a33e) main_myfav_hc_pane_t5_ParamLimits

0x623d,	// (0x0004a33e) main_myfav_hc_pane_t5

0x9f8a,	// (0x0004e08b) aid_zoom_text_primary

0x0b41,	// (0x00044c42) popup_adpt_find_window_ParamLimits

0x12ed,	// (0x000453ee) main_cam_set_pane

0x5b90,	// (0x00049c91) cam4_zoom_pane_ParamLimits

0x5b90,	// (0x00049c91) cam4_zoom_pane

0x6371,	// (0x0004a472) main_cam_set_pane_g1_ParamLimits

0x6371,	// (0x0004a472) main_cam_set_pane_g1

0x637f,	// (0x0004a480) main_cam_set_pane_g2_ParamLimits

0x637f,	// (0x0004a480) main_cam_set_pane_g2

0x0001,

0xf876,	// (0x00053977) main_cam_set_pane_g_ParamLimits

0xf876,	// (0x00053977) main_cam_set_pane_g

0x63a0,	// (0x0004a4a1) main_cam_set_pane_t1_ParamLimits

0x63a0,	// (0x0004a4a1) main_cam_set_pane_t1

0x63bb,	// (0x0004a4bc) main_cset_listscroll_pane_ParamLimits

0x63bb,	// (0x0004a4bc) main_cset_listscroll_pane

0x63e1,	// (0x0004a4e2) main_cset_slider_pane_ParamLimits

0x63e1,	// (0x0004a4e2) main_cset_slider_pane

0xd5ab,	// (0x000516ac) main_cset_list_pane_ParamLimits

0xd5ab,	// (0x000516ac) main_cset_list_pane

0xd5bb,	// (0x000516bc) scroll_pane_cp028

0x6407,	// (0x0004a508) aid_area_touch_slider

0x6423,	// (0x0004a524) cset_slider_pane

0x6446,	// (0x0004a547) main_cset_slider_pane_g1

0x645b,	// (0x0004a55c) main_cset_slider_pane_g2

0x0011,

0xf87b,	// (0x0005397c) main_cset_slider_pane_g

0xd6e3,	// (0x000517e4) main_cset_slider_pane_t1

0x64ff,	// (0x0004a600) main_cset_slider_pane_t2

0x6519,	// (0x0004a61a) main_cset_slider_pane_t3

0x6533,	// (0x0004a634) main_cset_slider_pane_t4

0x654d,	// (0x0004a64e) main_cset_slider_pane_t5

0x6567,	// (0x0004a668) main_cset_slider_pane_t6

0x657c,	// (0x0004a67d) main_cset_slider_pane_t7

0x000e,

0xf8a0,	// (0x000539a1) main_cset_slider_pane_t

0x6680,	// (0x0004a781) cset_list_set_pane_ParamLimits

0x6680,	// (0x0004a781) cset_list_set_pane

0xd77d,	// (0x0005187e) aid_position_infowindow_above

0xd785,	// (0x00051886) aid_position_infowindow_below

0x0c12,	// (0x00044d13) cset_list_set_pane_g1_ParamLimits

0x0c12,	// (0x00044d13) cset_list_set_pane_g1

0x0c1e,	// (0x00044d1f) cset_list_set_pane_g3_ParamLimits

0x0c1e,	// (0x00044d1f) cset_list_set_pane_g3

0x0001,

0xf8bf,	// (0x000539c0) cset_list_set_pane_g_ParamLimits

0xf8bf,	// (0x000539c0) cset_list_set_pane_g

0x0c2d,	// (0x00044d2e) cset_list_set_pane_t1_ParamLimits

0x0c2d,	// (0x00044d2e) cset_list_set_pane_t1

0x12ed,	// (0x000453ee) list_highlight_pane_cp021_ParamLimits

0x12ed,	// (0x000453ee) list_highlight_pane_cp021

0xacfe,	// (0x0004edff) cset_slider_pane_g1

0xad10,	// (0x0004ee11) cset_slider_pane_g2

0xad07,	// (0x0004ee08) cset_slider_pane_g3

0x0002,

0xf8c4,	// (0x000539c5) cset_slider_pane_g

0xd5d0,	// (0x000516d1) aid_area_touch_cam4_zoom

0xd5d8,	// (0x000516d9) cam4_zoom_cont_pane

0xd5e0,	// (0x000516e1) cam4_zoom_pane_g1

0xd5e8,	// (0x000516e9) cam4_zoom_pane_g2

0x6692,	// (0x0004a793) cam4_zoom_pane_g3

0x0002,

0xf8cb,	// (0x000539cc) cam4_zoom_pane_g

0xd78d,	// (0x0005188e) cam4_zoom_cont_pane_g1

0xd796,	// (0x00051897) cam4_zoom_cont_pane_g2

0xd79f,	// (0x000518a0) cam4_zoom_cont_pane_g3

0x0002,

0xf8d2,	// (0x000539d3) cam4_zoom_cont_pane_g

0x59bf,	// (0x00049ac0) call4_image_pane_ParamLimits

0x59bf,	// (0x00049ac0) call4_image_pane

0x5a26,	// (0x00049b27) call4_windows_conf_pane_ParamLimits

0x5a69,	// (0x00049b6a) popup_call4_audio_in_window_ParamLimits

0x5a69,	// (0x00049b6a) popup_call4_audio_in_window

0x1129,	// (0x0004522a) bg_popup_call2_act_pane_cp02

0xd401,	// (0x00051502) call4_list_conf_pane

0x1b6d,	// (0x00045c6e) call4_image_pane_g1

0x1b6d,	// (0x00045c6e) call4_image_pane_g2

0x0001,

0xf08c,	// (0x0005318d) call4_image_pane_g

0xd7a8,	// (0x000518a9) list_single_graphic_popup_conf4_pane_ParamLimits

0xd7a8,	// (0x000518a9) list_single_graphic_popup_conf4_pane

0x1129,	// (0x0004522a) list_highlight_pane_cp022

0xd7bb,	// (0x000518bc) list_single_graphic_popup_conf4_pane_g1

0xa8db,	// (0x0004e9dc) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8d9,	// (0x000539da) list_single_graphic_popup_conf4_pane_g

0xd7c3,	// (0x000518c4) list_single_graphic_popup_conf4_pane_t1

0x2711,	// (0x00046812) popup_vtel_slider_window_ParamLimits

0x2711,	// (0x00046812) popup_vtel_slider_window

0xd3d3,	// (0x000514d4) dialer2_ne_pane_t2_ParamLimits

0xd3d3,	// (0x000514d4) dialer2_ne_pane_t2

0x0001,

0xf7ba,	// (0x000538bb) dialer2_ne_pane_t_ParamLimits

0xf7ba,	// (0x000538bb) dialer2_ne_pane_t

0xc0d6,	// (0x000501d7) bg_popup_sub_pane_cp010_ParamLimits

0xc0d6,	// (0x000501d7) bg_popup_sub_pane_cp010

0x669a,	// (0x0004a79b) popup_vtel_slider_window_g1_ParamLimits

0x669a,	// (0x0004a79b) popup_vtel_slider_window_g1

0x66ad,	// (0x0004a7ae) popup_vtel_slider_window_g2_ParamLimits

0x66ad,	// (0x0004a7ae) popup_vtel_slider_window_g2

0x0003,

0xf8de,	// (0x000539df) popup_vtel_slider_window_g_ParamLimits

0xf8de,	// (0x000539df) popup_vtel_slider_window_g

0x6703,	// (0x0004a804) vtel_slider_pane_ParamLimits

0x6703,	// (0x0004a804) vtel_slider_pane

0x6725,	// (0x0004a826) vtel_slider_pane_g1_ParamLimits

0x6725,	// (0x0004a826) vtel_slider_pane_g1

0x6739,	// (0x0004a83a) vtel_slider_pane_g2_ParamLimits

0x6739,	// (0x0004a83a) vtel_slider_pane_g2

0x6751,	// (0x0004a852) vtel_slider_pane_g3_ParamLimits

0x6751,	// (0x0004a852) vtel_slider_pane_g3

0x6725,	// (0x0004a826) vtel_slider_pane_g4_ParamLimits

0x6725,	// (0x0004a826) vtel_slider_pane_g4

0x6767,	// (0x0004a868) vtel_slider_pane_g5_ParamLimits

0x6767,	// (0x0004a868) vtel_slider_pane_g5

0x0004,

0xf8e7,	// (0x000539e8) vtel_slider_pane_g_ParamLimits

0xf8e7,	// (0x000539e8) vtel_slider_pane_g

0x12ed,	// (0x000453ee) main_gallery2_pane

0x5d90,	// (0x00049e91) aid_size_row_itut2_dropdow_list_ParamLimits

0x5d90,	// (0x00049e91) aid_size_row_itut2_dropdow_list

0x5e0a,	// (0x00049f0b) grid_vitu2_function_top_pane_ParamLimits

0x5e0a,	// (0x00049f0b) grid_vitu2_function_top_pane

0x5e6e,	// (0x00049f6f) popup_vitu2_dropdown_list_window_ParamLimits

0x5e6e,	// (0x00049f6f) popup_vitu2_dropdown_list_window

0x5e99,	// (0x00049f9a) popup_vitu2_match_list_window

0x677d,	// (0x0004a87e) cell_vitu2_function_top_pane_ParamLimits

0x677d,	// (0x0004a87e) cell_vitu2_function_top_pane

0x6795,	// (0x0004a896) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6795,	// (0x0004a896) cell_vitu2_function_top_pane_cp01

0x67b1,	// (0x0004a8b2) cell_vitu2_function_top_wide_pane_ParamLimits

0x67b1,	// (0x0004a8b2) cell_vitu2_function_top_wide_pane

0x12ed,	// (0x000453ee) bg_button_pane_cp012

0x67cf,	// (0x0004a8d0) cell_vitu2_function_top_pane_g1

0xd5f0,	// (0x000516f1) bg_button_pane_cp013_ParamLimits

0xd5f0,	// (0x000516f1) bg_button_pane_cp013

0x67e3,	// (0x0004a8e4) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x67e3,	// (0x0004a8e4) cell_vitu2_function_top_wide_pane_g1

0x12ed,	// (0x000453ee) bg_popup_sub_pane_cp20

0x67fb,	// (0x0004a8fc) list_vitu2_match_list_pane

0xd47b,	// (0x0005157c) bg_popup_sub_pane_cp20_g1

0xd483,	// (0x00051584) bg_popup_sub_pane_cp20_g2

0xa367,	// (0x0004e468) bg_popup_sub_pane_cp20_g3

0xd48b,	// (0x0005158c) bg_popup_sub_pane_cp20_g4

0xa347,	// (0x0004e448) bg_popup_sub_pane_cp20_g5

0xd7d9,	// (0x000518da) bg_popup_sub_pane_cp20_g6

0xd49b,	// (0x0005159c) bg_popup_sub_pane_cp20_g7

0xd4a3,	// (0x000515a4) bg_popup_sub_pane_cp20_g8

0xd4ab,	// (0x000515ac) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8f2,	// (0x000539f3) bg_popup_sub_pane_cp20_g

0xd60c,	// (0x0005170d) list_vitu2_match_list_item_pane_ParamLimits

0xd60c,	// (0x0005170d) list_vitu2_match_list_item_pane

0xd61e,	// (0x0005171f) list_vitu2_match_list_item_pane_t1

0x1129,	// (0x0004522a) bg_popup_sub_pane_cp21

0xa144,	// (0x0004e245) grid_vitu2_dropdown_list_pane

0x6813,	// (0x0004a914) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6813,	// (0x0004a914) cell_vitu2_dropdown_list_char_pane

0x6833,	// (0x0004a934) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6833,	// (0x0004a934) cell_vitu2_dropdown_list_ctrl_pane

0xd7e1,	// (0x000518e2) cell_vitu2_dropdown_list_char_pane_g1

0xd7ea,	// (0x000518eb) cell_vitu2_dropdown_list_char_pane_g2

0xd7f3,	// (0x000518f4) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf905,	// (0x00053a06) cell_vitu2_dropdown_list_char_pane_g

0x685b,	// (0x0004a95c) cell_vitu2_dropdown_list_char_pane_t1

0x6869,	// (0x0004a96a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6869,	// (0x0004a96a) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6876,	// (0x0004a977) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6876,	// (0x0004a977) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6883,	// (0x0004a984) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6883,	// (0x0004a984) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6890,	// (0x0004a991) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6890,	// (0x0004a991) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1a9b,	// (0x00045b9c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1a9b,	// (0x00045b9c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf90c,	// (0x00053a0d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf90c,	// (0x00053a0d) cell_vitu2_dropdown_list_ctrl_pane_g

0x68ac,	// (0x0004a9ad) aid_size_cell_gallery2_ParamLimits

0x68ac,	// (0x0004a9ad) aid_size_cell_gallery2

0x68ca,	// (0x0004a9cb) grid_gallery2_pane_ParamLimits

0x68ca,	// (0x0004a9cb) grid_gallery2_pane

0x68e4,	// (0x0004a9e5) scroll_pane_cp029_ParamLimits

0x68e4,	// (0x0004a9e5) scroll_pane_cp029

0x68f5,	// (0x0004a9f6) cell_gallery2_pane_ParamLimits

0x68f5,	// (0x0004a9f6) cell_gallery2_pane

0xa19d,	// (0x0004e29e) cell_gallery2_pane_g2

0x6954,	// (0x0004aa55) cell_gallery2_pane_g3

0xd7fc,	// (0x000518fd) cell_gallery2_pane_g4

0xd804,	// (0x00051905) cell_gallery2_pane_g5

0xa144,	// (0x0004e245) grid_highlight_pane_cp10

0x5e99,	// (0x00049f9a) popup_vitu2_match_list_window_ParamLimits

0x5eae,	// (0x00049faf) popup_vitu2_query_window_ParamLimits

0x5eae,	// (0x00049faf) popup_vitu2_query_window

0x1129,	// (0x0004522a) bg_vitu2_candi_button_pane

0xd7e1,	// (0x000518e2) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd7ea,	// (0x000518eb) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd7f3,	// (0x000518f4) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x695c,	// (0x0004aa5d) bg_button_pane_cp015

0x696d,	// (0x0004aa6e) bg_button_pane_cp016

0x6979,	// (0x0004aa7a) bg_button_pane_cp017

0xac8e,	// (0x0004ed8f) bg_popup_sub_pane_cp22

0xd80c,	// (0x0005190d) popup_vitu2_query_window_g1

0x69b7,	// (0x0004aab8) popup_vitu2_query_window_g2

0x0002,

0xf917,	// (0x00053a18) popup_vitu2_query_window_g

0x69d9,	// (0x0004aada) popup_vitu2_query_window_t1_ParamLimits

0x69d9,	// (0x0004aada) popup_vitu2_query_window_t1

0x6a0c,	// (0x0004ab0d) popup_vitu2_query_window_t2_ParamLimits

0x6a0c,	// (0x0004ab0d) popup_vitu2_query_window_t2

0x6a1e,	// (0x0004ab1f) popup_vitu2_query_window_t3_ParamLimits

0x6a1e,	// (0x0004ab1f) popup_vitu2_query_window_t3

0x6a46,	// (0x0004ab47) popup_vitu2_query_window_t4_ParamLimits

0x6a46,	// (0x0004ab47) popup_vitu2_query_window_t4

0x6a5a,	// (0x0004ab5b) popup_vitu2_query_window_t5_ParamLimits

0x6a5a,	// (0x0004ab5b) popup_vitu2_query_window_t5

0x0006,

0xf91e,	// (0x00053a1f) popup_vitu2_query_window_t_ParamLimits

0xf91e,	// (0x00053a1f) popup_vitu2_query_window_t

0xd5a3,	// (0x000516a4) main_cset_text_pane

0x6407,	// (0x0004a508) aid_area_touch_slider_ParamLimits

0x6423,	// (0x0004a524) cset_slider_pane_ParamLimits

0x6446,	// (0x0004a547) main_cset_slider_pane_g1_ParamLimits

0x645b,	// (0x0004a55c) main_cset_slider_pane_g2_ParamLimits

0xd5c4,	// (0x000516c5) main_cset_slider_pane_g3_ParamLimits

0xd5c4,	// (0x000516c5) main_cset_slider_pane_g3

0x6470,	// (0x0004a571) main_cset_slider_pane_g4_ParamLimits

0x6470,	// (0x0004a571) main_cset_slider_pane_g4

0x647f,	// (0x0004a580) main_cset_slider_pane_g5_ParamLimits

0x647f,	// (0x0004a580) main_cset_slider_pane_g5

0x648b,	// (0x0004a58c) main_cset_slider_pane_g6_ParamLimits

0x648b,	// (0x0004a58c) main_cset_slider_pane_g6

0xf87b,	// (0x0005397c) main_cset_slider_pane_g_ParamLimits

0xd6e3,	// (0x000517e4) main_cset_slider_pane_t1_ParamLimits

0x64ff,	// (0x0004a600) main_cset_slider_pane_t2_ParamLimits

0x6519,	// (0x0004a61a) main_cset_slider_pane_t3_ParamLimits

0x6533,	// (0x0004a634) main_cset_slider_pane_t4_ParamLimits

0x654d,	// (0x0004a64e) main_cset_slider_pane_t5_ParamLimits

0x6567,	// (0x0004a668) main_cset_slider_pane_t6_ParamLimits

0x657c,	// (0x0004a67d) main_cset_slider_pane_t7_ParamLimits

0x65a6,	// (0x0004a6a7) main_cset_slider_pane_t8_ParamLimits

0x65a6,	// (0x0004a6a7) main_cset_slider_pane_t8

0x65ce,	// (0x0004a6cf) main_cset_slider_pane_t9_ParamLimits

0x65ce,	// (0x0004a6cf) main_cset_slider_pane_t9

0x65f6,	// (0x0004a6f7) main_cset_slider_pane_t10_ParamLimits

0x65f6,	// (0x0004a6f7) main_cset_slider_pane_t10

0x661e,	// (0x0004a71f) main_cset_slider_pane_t11_ParamLimits

0x661e,	// (0x0004a71f) main_cset_slider_pane_t11

0x6646,	// (0x0004a747) main_cset_slider_pane_t12_ParamLimits

0x6646,	// (0x0004a747) main_cset_slider_pane_t12

0x6663,	// (0x0004a764) main_cset_slider_pane_t13_ParamLimits

0x6663,	// (0x0004a764) main_cset_slider_pane_t13

0xf8a0,	// (0x000539a1) main_cset_slider_pane_t_ParamLimits

0x1129,	// (0x0004522a) bg_popup_sub_pane_cp011

0xd818,	// (0x00051919) main_cset_text_pane_g1

0xd820,	// (0x00051921) main_cset_text_pane_t1

0xd82e,	// (0x0005192f) main_cset_text_pane_t2

0xd83c,	// (0x0005193d) main_cset_text_pane_t3

0xd84a,	// (0x0005194b) main_cset_text_pane_t4

0xd858,	// (0x00051959) main_cset_text_pane_t5

0xd866,	// (0x00051967) main_cset_text_pane_t6

0xd874,	// (0x00051975) main_cset_text_pane_t7

0x0006,

0xf92d,	// (0x00053a2e) main_cset_text_pane_t

0x1129,	// (0x0004522a) main_cam4_burst_pane

0x1129,	// (0x0004522a) main_cam5_pane

0xd565,	// (0x00051666) bg_button_pane_cp019

0xd56e,	// (0x0005166f) bg_button_pane_cp020

0xd6bf,	// (0x000517c0) main_cset_slider_pane_g7_ParamLimits

0xd6bf,	// (0x000517c0) main_cset_slider_pane_g7

0xd6cb,	// (0x000517cc) main_cset_slider_pane_g8_ParamLimits

0xd6cb,	// (0x000517cc) main_cset_slider_pane_g8

0x649f,	// (0x0004a5a0) main_cset_slider_pane_g9_ParamLimits

0x649f,	// (0x0004a5a0) main_cset_slider_pane_g9

0x64ab,	// (0x0004a5ac) main_cset_slider_pane_g10_ParamLimits

0x64ab,	// (0x0004a5ac) main_cset_slider_pane_g10

0x64b7,	// (0x0004a5b8) main_cset_slider_pane_g11_ParamLimits

0x64b7,	// (0x0004a5b8) main_cset_slider_pane_g11

0x64c3,	// (0x0004a5c4) main_cset_slider_pane_g12_ParamLimits

0x64c3,	// (0x0004a5c4) main_cset_slider_pane_g12

0x64cf,	// (0x0004a5d0) main_cset_slider_pane_g13_ParamLimits

0x64cf,	// (0x0004a5d0) main_cset_slider_pane_g13

0x64db,	// (0x0004a5dc) main_cset_slider_pane_g14_ParamLimits

0x64db,	// (0x0004a5dc) main_cset_slider_pane_g14

0x64e7,	// (0x0004a5e8) main_cset_slider_pane_g15_ParamLimits

0x64e7,	// (0x0004a5e8) main_cset_slider_pane_g15

0xd70b,	// (0x0005180c) main_cset_slider_pane_t14_ParamLimits

0xd70b,	// (0x0005180c) main_cset_slider_pane_t14

0xd744,	// (0x00051845) main_cset_slider_pane_t15_ParamLimits

0xd744,	// (0x00051845) main_cset_slider_pane_t15

0x6ac4,	// (0x0004abc5) aid_cam4_burst_size_cell_ParamLimits

0x6ac4,	// (0x0004abc5) aid_cam4_burst_size_cell

0x6ae4,	// (0x0004abe5) grid_cam4_burst_pane_ParamLimits

0x6ae4,	// (0x0004abe5) grid_cam4_burst_pane

0x6b1c,	// (0x0004ac1d) linegrid_cam4_burst_pane_ParamLimits

0x6b1c,	// (0x0004ac1d) linegrid_cam4_burst_pane

0xdd89,	// (0x00051e8a) scroll_pane_cp30_ParamLimits

0xdd89,	// (0x00051e8a) scroll_pane_cp30

0x6b40,	// (0x0004ac41) cell_cam4_burst_pane_ParamLimits

0x6b40,	// (0x0004ac41) cell_cam4_burst_pane

0xd882,	// (0x00051983) linegrid_cam4_burst_pane_g1_ParamLimits

0xd882,	// (0x00051983) linegrid_cam4_burst_pane_g1

0x6b8d,	// (0x0004ac8e) linegrid_cam4_burst_pane_g2_ParamLimits

0x6b8d,	// (0x0004ac8e) linegrid_cam4_burst_pane_g2

0xd88f,	// (0x00051990) linegrid_cam4_burst_pane_g3_ParamLimits

0xd88f,	// (0x00051990) linegrid_cam4_burst_pane_g3

0x0002,

0xf93c,	// (0x00053a3d) linegrid_cam4_burst_pane_g_ParamLimits

0xf93c,	// (0x00053a3d) linegrid_cam4_burst_pane_g

0x6b9e,	// (0x0004ac9f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6b9e,	// (0x0004ac9f) linegrid_cam4_burst_pane_g3_copy1

0xd89c,	// (0x0005199d) linegrid_cam4_burst_pane_g4_ParamLimits

0xd89c,	// (0x0005199d) linegrid_cam4_burst_pane_g4

0x6bb8,	// (0x0004acb9) linegrid_cam4_burst_pane_g5_ParamLimits

0x6bb8,	// (0x0004acb9) linegrid_cam4_burst_pane_g5

0x6bc9,	// (0x0004acca) linegrid_cam4_burst_pane_g6_ParamLimits

0x6bc9,	// (0x0004acca) linegrid_cam4_burst_pane_g6

0xd8a9,	// (0x000519aa) linegrid_cam4_burst_pane_g7_ParamLimits

0xd8a9,	// (0x000519aa) linegrid_cam4_burst_pane_g7

0x6be0,	// (0x0004ace1) cell_cam4_burst_pane_g1

0xd8c2,	// (0x000519c3) main_cam5_pane_t1_ParamLimits

0xd8c2,	// (0x000519c3) main_cam5_pane_t1

0xd8d4,	// (0x000519d5) main_cam5_pane_t2_ParamLimits

0xd8d4,	// (0x000519d5) main_cam5_pane_t2

0xd8e6,	// (0x000519e7) main_cam5_pane_t3_ParamLimits

0xd8e6,	// (0x000519e7) main_cam5_pane_t3

0xd8f8,	// (0x000519f9) main_cam5_pane_t4_ParamLimits

0xd8f8,	// (0x000519f9) main_cam5_pane_t4

0xd910,	// (0x00051a11) main_cam5_pane_t5_ParamLimits

0xd910,	// (0x00051a11) main_cam5_pane_t5

0xd924,	// (0x00051a25) main_cam5_pane_t6_ParamLimits

0xd924,	// (0x00051a25) main_cam5_pane_t6

0xd938,	// (0x00051a39) main_cam5_pane_t7_ParamLimits

0xd938,	// (0x00051a39) main_cam5_pane_t7

0xd94a,	// (0x00051a4b) main_cam5_pane_t8_ParamLimits

0xd94a,	// (0x00051a4b) main_cam5_pane_t8

0xd966,	// (0x00051a67) main_cam5_pane_t9_ParamLimits

0xd966,	// (0x00051a67) main_cam5_pane_t9

0xd978,	// (0x00051a79) main_cam5_pane_t10_ParamLimits

0xd978,	// (0x00051a79) main_cam5_pane_t10

0xd98a,	// (0x00051a8b) main_cam5_pane_t11_ParamLimits

0xd98a,	// (0x00051a8b) main_cam5_pane_t11

0xd99c,	// (0x00051a9d) main_cam5_pane_t12_ParamLimits

0xd99c,	// (0x00051a9d) main_cam5_pane_t12

0xd9b1,	// (0x00051ab2) main_cam5_pane_t13_ParamLimits

0xd9b1,	// (0x00051ab2) main_cam5_pane_t13

0x000c,

0xf948,	// (0x00053a49) main_cam5_pane_t_ParamLimits

0xf948,	// (0x00053a49) main_cam5_pane_t

0x12ad,	// (0x000453ae) popup_scut_keymap_window_ParamLimits

0x12ad,	// (0x000453ae) popup_scut_keymap_window

0x6bf3,	// (0x0004acf4) aid_size_cell_brow_shortcut

0xa144,	// (0x0004e245) bg_popup_window_pane_cp010

0x6bff,	// (0x0004ad00) grid_scut_pane

0x6c0b,	// (0x0004ad0c) cell_scut_pane_ParamLimits

0x6c0b,	// (0x0004ad0c) cell_scut_pane

0x6c22,	// (0x0004ad23) cell_scut_pane_g1

0xd9ce,	// (0x00051acf) cell_scut_pane_t1

0xd9dd,	// (0x00051ade) cell_scut_pane_t2

0x6c2b,	// (0x0004ad2c) cell_scut_pane_t3

0x0002,

0xf963,	// (0x00053a64) cell_scut_pane_t

0x4bd0,	// (0x00048cd1) main_mup3_pane_g8_ParamLimits

0x4bd0,	// (0x00048cd1) main_mup3_pane_g8

0x5daa,	// (0x00049eab) area_vitu2_query_pane_ParamLimits

0x5daa,	// (0x00049eab) area_vitu2_query_pane

0x6985,	// (0x0004aa86) input_focus_pane_cp08

0xd9ec,	// (0x00051aed) area_vitu2_query_pane_g1

0x6c39,	// (0x0004ad3a) area_vitu2_query_pane_g2

0x0001,

0xf96a,	// (0x00053a6b) area_vitu2_query_pane_g

0x6c48,	// (0x0004ad49) area_vitu2_query_pane_t1_ParamLimits

0x6c48,	// (0x0004ad49) area_vitu2_query_pane_t1

0x6c5c,	// (0x0004ad5d) area_vitu2_query_pane_t2_ParamLimits

0x6c5c,	// (0x0004ad5d) area_vitu2_query_pane_t2

0x6c70,	// (0x0004ad71) area_vitu2_query_pane_t3_ParamLimits

0x6c70,	// (0x0004ad71) area_vitu2_query_pane_t3

0xd9f8,	// (0x00051af9) area_vitu2_query_pane_t4_ParamLimits

0xd9f8,	// (0x00051af9) area_vitu2_query_pane_t4

0xda29,	// (0x00051b2a) area_vitu2_query_pane_t5_ParamLimits

0xda29,	// (0x00051b2a) area_vitu2_query_pane_t5

0xda51,	// (0x00051b52) area_vitu2_query_pane_t6_ParamLimits

0xda51,	// (0x00051b52) area_vitu2_query_pane_t6

0x0006,

0xf96f,	// (0x00053a70) area_vitu2_query_pane_t_ParamLimits

0xf96f,	// (0x00053a70) area_vitu2_query_pane_t

0x6c98,	// (0x0004ad99) bg_button_pane_cp018

0x6ca4,	// (0x0004ada5) bg_button_pane_cp021

0x6cb0,	// (0x0004adb1) bg_button_pane_cp022

0x6ccf,	// (0x0004add0) input_focus_pane_cp09

0xa9ea,	// (0x0004eaeb) aid_size_touch_mv_arrow_left

0xaa15,	// (0x0004eb16) aid_size_touch_mv_arrow_right

0xdd71,	// (0x00051e72) main_cset_slider_pane_g16_ParamLimits

0xdd71,	// (0x00051e72) main_cset_slider_pane_g16

0xdd7d,	// (0x00051e7e) main_cset_slider_pane_g17_ParamLimits

0xdd7d,	// (0x00051e7e) main_cset_slider_pane_g17

0x6be0,	// (0x0004ace1) cell_cam4_burst_pane_g1_ParamLimits

0x1129,	// (0x0004522a) compa_mode_pane

0x66bd,	// (0x0004a7be) popup_vtel_slider_window_g3_ParamLimits

0x66bd,	// (0x0004a7be) popup_vtel_slider_window_g3

0x66d4,	// (0x0004a7d5) popup_vtel_slider_window_g4_ParamLimits

0x66d4,	// (0x0004a7d5) popup_vtel_slider_window_g4

0x66eb,	// (0x0004a7ec) popup_vtel_slider_window_t1_ParamLimits

0x66eb,	// (0x0004a7ec) popup_vtel_slider_window_t1

0x1129,	// (0x0004522a) main_cl_pane

0xbf6d,	// (0x0005006e) popup_imed_adjust2_window_ParamLimits

0xac8e,	// (0x0004ed8f) bg_tb_trans_pane_cp05_ParamLimits

0xc995,	// (0x00050a96) popup_imed_adjust2_window_g1_ParamLimits

0xc9a4,	// (0x00050aa5) popup_imed_adjust2_window_g2_ParamLimits

0xc9a4,	// (0x00050aa5) popup_imed_adjust2_window_g2

0xc9b0,	// (0x00050ab1) popup_imed_adjust2_window_g3_ParamLimits

0xc9b0,	// (0x00050ab1) popup_imed_adjust2_window_g3

0x0002,

0xf6ea,	// (0x000537eb) popup_imed_adjust2_window_g_ParamLimits

0xf6ea,	// (0x000537eb) popup_imed_adjust2_window_g

0xc9bc,	// (0x00050abd) popup_imed_adjust2_window_t1_ParamLimits

0xc9d4,	// (0x00050ad5) slider_imed_adjust_pane_ParamLimits

0xc9e8,	// (0x00050ae9) slider_imed_adjust_pane_g1_ParamLimits

0xc9f8,	// (0x00050af9) slider_imed_adjust_pane_g2_ParamLimits

0xca08,	// (0x00050b09) slider_imed_adjust_pane_g3_ParamLimits

0xca19,	// (0x00050b1a) slider_imed_adjust_pane_g4_ParamLimits

0xf6f1,	// (0x000537f2) slider_imed_adjust_pane_g_ParamLimits

0x5b31,	// (0x00049c32) aid_touch_area_cam4_ParamLimits

0x5b31,	// (0x00049c32) aid_touch_area_cam4

0xcf08,	// (0x00051009) battery_pane_cp01

0x5c00,	// (0x00049d01) main_camera4_pane_g6_ParamLimits

0x5c00,	// (0x00049d01) main_camera4_pane_g6

0x5c2a,	// (0x00049d2b) main_camera4_pane_t2_ParamLimits

0x5c2a,	// (0x00049d2b) main_camera4_pane_t2

0x0001,

0xf7ee,	// (0x000538ef) main_camera4_pane_t_ParamLimits

0xf7ee,	// (0x000538ef) main_camera4_pane_t

0x5c5f,	// (0x00049d60) aid_touch_area_vid4_ParamLimits

0x5c5f,	// (0x00049d60) aid_touch_area_vid4

0x5cb3,	// (0x00049db4) main_video4_pane_g5_ParamLimits

0x5cb3,	// (0x00049db4) main_video4_pane_g5

0x5cd8,	// (0x00049dd9) vid4_progress_pane_ParamLimits

0x5cd8,	// (0x00049dd9) vid4_progress_pane

0xd6d7,	// (0x000517d8) main_cset_slider_pane_g18_ParamLimits

0xd6d7,	// (0x000517d8) main_cset_slider_pane_g18

0xd8b6,	// (0x000519b7) cell_cam4_burst_pane_g2_ParamLimits

0xd8b6,	// (0x000519b7) cell_cam4_burst_pane_g2

0x0001,

0xf943,	// (0x00053a44) cell_cam4_burst_pane_g_ParamLimits

0xf943,	// (0x00053a44) cell_cam4_burst_pane_g

0x1bdf,	// (0x00045ce0) bg_cl_pane_ParamLimits

0x1bdf,	// (0x00045ce0) bg_cl_pane

0x6cdf,	// (0x0004ade0) cl_header_pane_ParamLimits

0x6cdf,	// (0x0004ade0) cl_header_pane

0x6cf3,	// (0x0004adf4) cl_listscroll_pane_ParamLimits

0x6cf3,	// (0x0004adf4) cl_listscroll_pane

0xda9d,	// (0x00051b9e) bg_cl_pane_g1

0xdaa5,	// (0x00051ba6) bg_cl_pane_g2

0xdaad,	// (0x00051bae) bg_cl_pane_g3

0xdab5,	// (0x00051bb6) bg_cl_pane_g4

0xdabd,	// (0x00051bbe) bg_cl_pane_g5

0xdac5,	// (0x00051bc6) bg_cl_pane_g6

0xdacd,	// (0x00051bce) bg_cl_pane_g7

0xdad5,	// (0x00051bd6) bg_cl_pane_g8

0xdadd,	// (0x00051bde) bg_cl_pane_g9

0x0008,

0xf97e,	// (0x00053a7f) bg_cl_pane_g

0x6d03,	// (0x0004ae04) aid_height_cl_leading_ParamLimits

0x6d03,	// (0x0004ae04) aid_height_cl_leading

0x6d0f,	// (0x0004ae10) aid_height_cl_text_ParamLimits

0x6d0f,	// (0x0004ae10) aid_height_cl_text

0x12ed,	// (0x000453ee) bg_cl_header_pane_ParamLimits

0x12ed,	// (0x000453ee) bg_cl_header_pane

0x6d2e,	// (0x0004ae2f) cl_header_pane_g1_ParamLimits

0x6d2e,	// (0x0004ae2f) cl_header_pane_g1

0x6d44,	// (0x0004ae45) cl_header_pane_t1_ParamLimits

0x6d44,	// (0x0004ae45) cl_header_pane_t1

0xdae5,	// (0x00051be6) cl_list_pane

0xd5bb,	// (0x000516bc) hc_scroll_pane_cp01

0xa347,	// (0x0004e448) bg_cl_header_pane_g1

0xd47b,	// (0x0005157c) bg_cl_header_pane_g2

0xa367,	// (0x0004e468) bg_cl_header_pane_g3

0xd48b,	// (0x0005158c) bg_cl_header_pane_g4

0xd483,	// (0x00051584) bg_cl_header_pane_g5

0xd7d9,	// (0x000518da) bg_cl_header_pane_g6

0xd4a3,	// (0x000515a4) bg_cl_header_pane_g7

0xd4ab,	// (0x000515ac) bg_cl_header_pane_g8

0xd49b,	// (0x0005159c) bg_cl_header_pane_g9

0x0008,

0xf991,	// (0x00053a92) bg_cl_header_pane_g

0x6d5d,	// (0x0004ae5e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6d5d,	// (0x0004ae5e) hc_cl_list_double_graphic_heading_pane

0x6d6e,	// (0x0004ae6f) hc_cl_list_single_graphic_pane_ParamLimits

0x6d6e,	// (0x0004ae6f) hc_cl_list_single_graphic_pane

0x6d87,	// (0x0004ae88) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6d87,	// (0x0004ae88) hc_cl_list_single_graphic_pane_g1

0x6d93,	// (0x0004ae94) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6d93,	// (0x0004ae94) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9a4,	// (0x00053aa5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9a4,	// (0x00053aa5) hc_cl_list_single_graphic_pane_g

0x6da7,	// (0x0004aea8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6da7,	// (0x0004aea8) hc_cl_list_single_graphic_pane_t1

0x6d87,	// (0x0004ae88) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6d87,	// (0x0004ae88) hc_cl_list_double_graphic_heading_pane_g1

0x6dbc,	// (0x0004aebd) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6dbc,	// (0x0004aebd) hc_cl_list_double_graphic_heading_pane_g2

0x6dd0,	// (0x0004aed1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6dd0,	// (0x0004aed1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9a9,	// (0x00053aaa) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9a9,	// (0x00053aaa) hc_cl_list_double_graphic_heading_pane_g

0x6de4,	// (0x0004aee5) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6de4,	// (0x0004aee5) hc_cl_list_double_graphic_heading_pane_t1

0x6df9,	// (0x0004aefa) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6df9,	// (0x0004aefa) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9b0,	// (0x00053ab1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9b0,	// (0x00053ab1) hc_cl_list_double_graphic_heading_pane_t

0xd634,	// (0x00051735) vid4_progress_pane_g1

0xd644,	// (0x00051745) vid4_progress_pane_g2

0x6e0e,	// (0x0004af0f) vid4_progress_pane_g3

0xd654,	// (0x00051755) vid4_progress_pane_g4

0x0004,

0xf9b5,	// (0x00053ab6) vid4_progress_pane_g

0x6e20,	// (0x0004af21) vid4_progress_pane_t1

0xd66c,	// (0x0005176d) vid4_progress_pane_t2

0x0002,

0xf9c0,	// (0x00053ac1) vid4_progress_pane_t

0x6e36,	// (0x0004af37) wait_bar_pane_cp07

0xc239,	// (0x0005033a) blid_firmament_pane_ParamLimits

0xc27c,	// (0x0005037d) popup_blid_sat_info2_window_g1

0xc2a0,	// (0x000503a1) popup_blid_sat_info2_window_t3

0xc2ae,	// (0x000503af) popup_blid_sat_info2_window_t4

0xc2bc,	// (0x000503bd) popup_blid_sat_info2_window_t5

0xc2ca,	// (0x000503cb) popup_blid_sat_info2_window_t6

0xc2da,	// (0x000503db) popup_blid_sat_info2_window_t7

0xc2e8,	// (0x000503e9) popup_blid_sat_info2_window_t8

0xc2f6,	// (0x000503f7) popup_blid_sat_info2_window_t9

0xc304,	// (0x00050405) popup_blid_sat_info2_window_t10

0xc3c5,	// (0x000504c6) aid_firma_cardinal_ParamLimits

0xc3d9,	// (0x000504da) blid_firmament_pane_t1_ParamLimits

0xc3f0,	// (0x000504f1) blid_firmament_pane_t2_ParamLimits

0xc407,	// (0x00050508) blid_firmament_pane_t3_ParamLimits

0xc41e,	// (0x0005051f) blid_firmament_pane_t4_ParamLimits

0xf5e3,	// (0x000536e4) blid_firmament_pane_t_ParamLimits

0xc435,	// (0x00050536) blid_sat_info_pane_ParamLimits

0x12ed,	// (0x000453ee) main_cam_set_pane_ParamLimits

0x5395,	// (0x00049496) aid_size_cell_colour_35_ParamLimits

0x53b5,	// (0x000494b6) aid_size_cell_colour_112_ParamLimits

0x53d5,	// (0x000494d6) aid_size_cell_effect_ParamLimits

0xac8e,	// (0x0004ed8f) bg_tb_trans_pane_cp02_ParamLimits

0x53f5,	// (0x000494f6) heading_imed_pane_ParamLimits

0x5401,	// (0x00049502) listscroll_imed_pane_ParamLimits

0xb66a,	// (0x0004f76b) popup_call2_audio_first_window_g5_ParamLimits

0xb66a,	// (0x0004f76b) popup_call2_audio_first_window_g5

0x573d,	// (0x0004983e) aid_size_touch_image3_arrow_left_ParamLimits

0x573d,	// (0x0004983e) aid_size_touch_image3_arrow_left

0x5769,	// (0x0004986a) aid_size_touch_image3_arrow_right_ParamLimits

0x5769,	// (0x0004986a) aid_size_touch_image3_arrow_right

0xd681,	// (0x00051782) vid4_progress_pane_t3

0x557c,	// (0x0004967d) main_hwr_training_symbol_option_pane_ParamLimits

0x557c,	// (0x0004967d) main_hwr_training_symbol_option_pane

0xcb33,	// (0x00050c34) popup_hwr_training_preview_window_ParamLimits

0xcb33,	// (0x00050c34) popup_hwr_training_preview_window

0x559c,	// (0x0004969d) hwr_training_navi_pane_g5_ParamLimits

0x559c,	// (0x0004969d) hwr_training_navi_pane_g5

0xd469,	// (0x0005156a) popup_char_count_window

0x12ed,	// (0x000453ee) bg_popup_sub_pane_cp20_ParamLimits

0x67fb,	// (0x0004a8fc) list_vitu2_match_list_pane_ParamLimits

0x6807,	// (0x0004a908) vitu2_page_scroll_pane_ParamLimits

0x6807,	// (0x0004a908) vitu2_page_scroll_pane

0xdaf7,	// (0x00051bf8) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdaf7,	// (0x00051bf8) list_single_hwr_training_symbol_option_pane

0xdb0a,	// (0x00051c0b) list_single_hwr_training_symbol_option_pane_g1

0xdb12,	// (0x00051c13) list_single_hwr_training_symbol_option_pane_t1

0xdb20,	// (0x00051c21) bg_button_pane_cp023

0xdb29,	// (0x00051c2a) bg_button_pane_cp024

0xdb5c,	// (0x00051c5d) vitu2_page_scroll_pane_g1

0xdb64,	// (0x00051c65) vitu2_page_scroll_pane_g2

0x0001,

0xf9c7,	// (0x00053ac8) vitu2_page_scroll_pane_g

0xdb6c,	// (0x00051c6d) vitu2_page_scroll_pane_t1

0x1d3a,	// (0x00045e3b) popup_char_count_window_g1

0xdb7b,	// (0x00051c7c) popup_char_count_window_g2

0xda20,	// (0x00051b21) popup_char_count_window_g3

0x0002,

0xf9cc,	// (0x00053acd) popup_char_count_window_g

0xdb84,	// (0x00051c85) popup_char_count_window_t1

0x1129,	// (0x0004522a) main_vded2_pane

0xc981,	// (0x00050a82) aid_size_cell_imed_line

0xc98b,	// (0x00050a8c) grid_imed_line_width_pane

0xcfb8,	// (0x000510b9) vid4_indicators_pane_g4

0xdb92,	// (0x00051c93) cell_imed_line_width_pane_ParamLimits

0xdb92,	// (0x00051c93) cell_imed_line_width_pane

0xdba6,	// (0x00051ca7) cell_imed_line_width_pane_g1

0xdbaf,	// (0x00051cb0) cell_imed_line_width_pane_g2

0x0001,

0xf9d3,	// (0x00053ad4) cell_imed_line_width_pane_g

0x6e47,	// (0x0004af48) main_vded2_pane_g1_ParamLimits

0x6e47,	// (0x0004af48) main_vded2_pane_g1

0x6e5d,	// (0x0004af5e) main_vded2_pane_g2_ParamLimits

0x6e5d,	// (0x0004af5e) main_vded2_pane_g2

0x0001,

0xf9d8,	// (0x00053ad9) main_vded2_pane_g_ParamLimits

0xf9d8,	// (0x00053ad9) main_vded2_pane_g

0x6e6f,	// (0x0004af70) vded2_slider_pane_ParamLimits

0x6e6f,	// (0x0004af70) vded2_slider_pane

0x6e7f,	// (0x0004af80) aid_size_touch_vded2_end

0x6e89,	// (0x0004af8a) aid_size_touch_vded2_playhead

0xdbb7,	// (0x00051cb8) aid_size_touch_vded2_start

0xdbbf,	// (0x00051cc0) vded2_slider_bg_pane

0xdbc8,	// (0x00051cc9) vded2_slider_pane_g1

0xdbd1,	// (0x00051cd2) vded2_slider_pane_g2

0x6e93,	// (0x0004af94) vded2_slider_pane_g3

0x0002,

0xf9dd,	// (0x00053ade) vded2_slider_pane_g

0xdbd9,	// (0x00051cda) vded2_slider_bg_pane_g1

0xdbe2,	// (0x00051ce3) vded2_slider_bg_pane_g2

0xdbeb,	// (0x00051cec) vded2_slider_bg_pane_g3

0x0002,

0xf9e4,	// (0x00053ae5) vded2_slider_bg_pane_g

0x39c4,	// (0x00047ac5) aid_postcard_touch_down_pane_ParamLimits

0x39c4,	// (0x00047ac5) aid_postcard_touch_down_pane

0x39da,	// (0x00047adb) aid_postcard_touch_up_pane_ParamLimits

0x39da,	// (0x00047adb) aid_postcard_touch_up_pane

0x1129,	// (0x0004522a) main_blid2_pane

0xbf53,	// (0x00050054) popup_blid2_search_window

0x1129,	// (0x0004522a) blid2_gps_pane

0x1129,	// (0x0004522a) blid2_navig_pane

0x1129,	// (0x0004522a) blid2_search_pane

0x1129,	// (0x0004522a) blid2_tripm_pane

0x6e9e,	// (0x0004af9f) blid2_search_pane_g1_ParamLimits

0x6e9e,	// (0x0004af9f) blid2_search_pane_g1

0x6eb6,	// (0x0004afb7) blid2_search_pane_t1_ParamLimits

0x6eb6,	// (0x0004afb7) blid2_search_pane_t1

0x6ec8,	// (0x0004afc9) aid_size_cell_blid2_gps_ParamLimits

0x6ec8,	// (0x0004afc9) aid_size_cell_blid2_gps

0x6ee0,	// (0x0004afe1) blid2_gps_pane_g1_ParamLimits

0x6ee0,	// (0x0004afe1) blid2_gps_pane_g1

0x6ef4,	// (0x0004aff5) grid_blid2_satellite_pane_ParamLimits

0x6ef4,	// (0x0004aff5) grid_blid2_satellite_pane

0x6f0e,	// (0x0004b00f) blid2_navig_pane_g1_ParamLimits

0x6f0e,	// (0x0004b00f) blid2_navig_pane_g1

0x6f1a,	// (0x0004b01b) blid2_navig_pane_t1_ParamLimits

0x6f1a,	// (0x0004b01b) blid2_navig_pane_t1

0x6f35,	// (0x0004b036) blid2_navig_pane_t2_ParamLimits

0x6f35,	// (0x0004b036) blid2_navig_pane_t2

0x0001,

0xf9eb,	// (0x00053aec) blid2_navig_pane_t_ParamLimits

0xf9eb,	// (0x00053aec) blid2_navig_pane_t

0x6f50,	// (0x0004b051) blid2_navig_ring_pane_ParamLimits

0x6f50,	// (0x0004b051) blid2_navig_ring_pane

0x6f69,	// (0x0004b06a) blid2_speed_pane_ParamLimits

0x6f69,	// (0x0004b06a) blid2_speed_pane

0x6f75,	// (0x0004b076) blid2_tripm_pane_g1_ParamLimits

0x6f75,	// (0x0004b076) blid2_tripm_pane_g1

0x6f90,	// (0x0004b091) blid2_tripm_pane_g2_ParamLimits

0x6f90,	// (0x0004b091) blid2_tripm_pane_g2

0x6fa4,	// (0x0004b0a5) blid2_tripm_pane_g3_ParamLimits

0x6fa4,	// (0x0004b0a5) blid2_tripm_pane_g3

0x6fb8,	// (0x0004b0b9) blid2_tripm_pane_g4_ParamLimits

0x6fb8,	// (0x0004b0b9) blid2_tripm_pane_g4

0x6fcc,	// (0x0004b0cd) blid2_tripm_pane_g5_ParamLimits

0x6fcc,	// (0x0004b0cd) blid2_tripm_pane_g5

0x0005,

0xf9f0,	// (0x00053af1) blid2_tripm_pane_g_ParamLimits

0xf9f0,	// (0x00053af1) blid2_tripm_pane_g

0x6ff2,	// (0x0004b0f3) blid2_tripm_pane_t1_ParamLimits

0x6ff2,	// (0x0004b0f3) blid2_tripm_pane_t1

0x700d,	// (0x0004b10e) blid2_tripm_pane_t2_ParamLimits

0x700d,	// (0x0004b10e) blid2_tripm_pane_t2

0x7026,	// (0x0004b127) blid2_tripm_pane_t3_ParamLimits

0x7026,	// (0x0004b127) blid2_tripm_pane_t3

0x0003,

0xf9fd,	// (0x00053afe) blid2_tripm_pane_t_ParamLimits

0xf9fd,	// (0x00053afe) blid2_tripm_pane_t

0x706d,	// (0x0004b16e) cell_blid2_satellite_pane_ParamLimits

0x706d,	// (0x0004b16e) cell_blid2_satellite_pane

0x708b,	// (0x0004b18c) cell_blid2_satellite_pane_g1

0xdbf4,	// (0x00051cf5) cell_blid2_satellite_pane_t1

0x1b6d,	// (0x00045c6e) blid2_speed_pane_g1

0xdc02,	// (0x00051d03) blid2_speed_pane_t1

0xdc10,	// (0x00051d11) blid2_speed_pane_t2

0x0001,

0xfa06,	// (0x00053b07) blid2_speed_pane_t

0x1b6d,	// (0x00045c6e) blid2_navig_ring_pane_g1

0x7094,	// (0x0004b195) blid2_navig_ring_pane_g2

0x709c,	// (0x0004b19d) blid2_navig_ring_pane_g3

0x70a4,	// (0x0004b1a5) blid2_navig_ring_pane_g4

0x70ac,	// (0x0004b1ad) blid2_navig_ring_pane_g5

0x0004,

0xfa0b,	// (0x00053b0c) blid2_navig_ring_pane_g

0x1129,	// (0x0004522a) bg_popup_window_pane_cp011

0xdc1e,	// (0x00051d1f) popup_blid2_search_window_g1

0xdc26,	// (0x00051d27) popup_blid2_search_window_t1

0xdc34,	// (0x00051d35) popup_blid2_search_window_t2

0x0001,

0xfa16,	// (0x00053b17) popup_blid2_search_window_t

0xa256,	// (0x0004e357) main_browser_pane_g1

0x1bdf,	// (0x00045ce0) main_browser_pane_ParamLimits

0x12ed,	// (0x000453ee) bg_button_pane_cp011_ParamLimits

0x60de,	// (0x0004a1df) cell_vitu2_function_pane_g1_ParamLimits

0xac8e,	// (0x0004ed8f) bg_popup_sub_pane_cp22_ParamLimits

0x6985,	// (0x0004aa86) input_focus_pane_cp08_ParamLimits

0x69a0,	// (0x0004aaa1) popup_vitu2_query_button_pane_ParamLimits

0x69a0,	// (0x0004aaa1) popup_vitu2_query_button_pane

0x69af,	// (0x0004aab0) popup_vitu2_query_input_button_pane

0xd80c,	// (0x0005190d) popup_vitu2_query_window_g1_ParamLimits

0x69b7,	// (0x0004aab8) popup_vitu2_query_window_g2_ParamLimits

0xf917,	// (0x00053a18) popup_vitu2_query_window_g_ParamLimits

0x1129,	// (0x0004522a) bg_button_pane_cp026

0x70b4,	// (0x0004b1b5) popup_vitu2_query_input_button_pane_g1

0x1129,	// (0x0004522a) bg_button_pane_cp025

0xdc42,	// (0x00051d43) popup_vitu2_query_button_pane_t1

0x483d,	// (0x0004893e) main_mp3_pane_t6

0x484b,	// (0x0004894c) popup_slider_window_cp01

0xcf24,	// (0x00051025) cam4_battery_pane

0xcf77,	// (0x00051078) cam4_battery_pane_cp02

0xd62c,	// (0x0005172d) cam4_battery_pane_cp01

0xd62c,	// (0x0005172d) cam4_battery_pane_cp03

0x1b6d,	// (0x00045c6e) cam4_battery_pane_g1

0xdc50,	// (0x00051d51) cam4_battery_pane_g2

0x0001,

0xfa1b,	// (0x00053b1c) cam4_battery_pane_g

0xc312,	// (0x00050413) popup_blid_sat_info2_window_t11

0xa9ea,	// (0x0004eaeb) aid_size_touch_mv_arrow_left_ParamLimits

0xaa15,	// (0x0004eb16) aid_size_touch_mv_arrow_right_ParamLimits

0xaa73,	// (0x0004eb74) navi_pane_g1_ParamLimits

0xaa7f,	// (0x0004eb80) navi_pane_g2_ParamLimits

0xaaad,	// (0x0004ebae) navi_pane_g3_ParamLimits

0xf30c,	// (0x0005340d) navi_pane_g_ParamLimits

0x36db,	// (0x000477dc) navi_pane_mv_t1_ParamLimits

0x540d,	// (0x0004950e) grid_imed_effect_pane_ParamLimits

0x260e,	// (0x0004670f) aid_placing_vt_slider_lsc

0xa1a5,	// (0x0004e2a6) aid_placing_vt_slider_prt

0x12ed,	// (0x000453ee) bg_tb_trans_pane_cp01_ParamLimits

0xc5b0,	// (0x000506b1) popup_image_details_window_g1_ParamLimits

0xc5c3,	// (0x000506c4) popup_image_details_window_g2_ParamLimits

0xc5d8,	// (0x000506d9) popup_image_details_window_g3_ParamLimits

0xc5d8,	// (0x000506d9) popup_image_details_window_g3

0xf623,	// (0x00053724) popup_image_details_window_g_ParamLimits

0xc5ec,	// (0x000506ed) popup_image_details_window_t1_ParamLimits

0xc5fe,	// (0x000506ff) popup_image_details_window_t2_ParamLimits

0xc617,	// (0x00050718) popup_image_details_window_t3_ParamLimits

0xc62b,	// (0x0005072c) popup_image_details_window_t4_ParamLimits

0xc646,	// (0x00050747) popup_image_details_window_t5_ParamLimits

0xf62a,	// (0x0005372b) popup_image_details_window_t_ParamLimits

0x6d1b,	// (0x0004ae1c) cl_header_name_pane_ParamLimits

0x6d1b,	// (0x0004ae1c) cl_header_name_pane

0x70bc,	// (0x0004b1bd) cl_header_name_pane_t1_ParamLimits

0x70bc,	// (0x0004b1bd) cl_header_name_pane_t1

0x70dd,	// (0x0004b1de) cl_header_name_pane_t2_ParamLimits

0x70dd,	// (0x0004b1de) cl_header_name_pane_t2

0x711f,	// (0x0004b220) cl_header_name_pane_t3_ParamLimits

0x711f,	// (0x0004b220) cl_header_name_pane_t3

0x0002,

0xfa20,	// (0x00053b21) cl_header_name_pane_t_ParamLimits

0xfa20,	// (0x00053b21) cl_header_name_pane_t

0xab3c,	// (0x0004ec3d) navi_pane_mv_g2_ParamLimits

0xd434,	// (0x00051535) field_vitu2_entry_pane_g1_ParamLimits

0xd440,	// (0x00051541) field_vitu2_entry_pane_g2_ParamLimits

0xac6c,	// (0x0004ed6d) field_vitu2_entry_pane_g3_ParamLimits

0xac6c,	// (0x0004ed6d) field_vitu2_entry_pane_g3

0xf820,	// (0x00053921) field_vitu2_entry_pane_g_ParamLimits

0x5f6e,	// (0x0004a06f) cell_vitu2_itu_pane_g1_ParamLimits

0x5f86,	// (0x0004a087) cell_vitu2_itu_pane_g2_ParamLimits

0x5f86,	// (0x0004a087) cell_vitu2_itu_pane_g2

0x0001,

0xf82c,	// (0x0005392d) cell_vitu2_itu_pane_g_ParamLimits

0xf82c,	// (0x0005392d) cell_vitu2_itu_pane_g

0x12ed,	// (0x000453ee) bg_vkb2_func_pane_cp05_ParamLimits

0x12ed,	// (0x000453ee) bg_vkb2_func_pane_cp05

0x12ed,	// (0x000453ee) bg_vkb2_func_pane_cp03

0x12ed,	// (0x000453ee) bg_vkb2_func_pane_cp04

0x12ed,	// (0x000453ee) bg_vkb2_func_pane_cp10_ParamLimits

0x12ed,	// (0x000453ee) bg_vkb2_func_pane_cp10

0x6cbf,	// (0x0004adc0) bg_vkb2_func_pane_cp08

0x6c98,	// (0x0004ad99) bg_vkb2_func_pane_cp06

0x6ca4,	// (0x0004ada5) bg_vkb2_func_pane_cp07

0xdb32,	// (0x00051c33) bg_vkb2_func_pane_cp11_ParamLimits

0xdb32,	// (0x00051c33) bg_vkb2_func_pane_cp11

0xdb47,	// (0x00051c48) bg_vkb2_func_pane_cp12_ParamLimits

0xdb47,	// (0x00051c48) bg_vkb2_func_pane_cp12

0x1129,	// (0x0004522a) bg_vkb2_func_pane_cp09

0xd47b,	// (0x0005157c) bg_vkb2_func_pane_g1

0xa367,	// (0x0004e468) bg_vkb2_func_pane_g2

0xd483,	// (0x00051584) bg_vkb2_func_pane_g3

0xd48b,	// (0x0005158c) bg_vkb2_func_pane_g4

0xd7d9,	// (0x000518da) bg_vkb2_func_pane_g5

0xd4a3,	// (0x000515a4) bg_vkb2_func_pane_g6

0xd4ab,	// (0x000515ac) bg_vkb2_func_pane_g7

0xd49b,	// (0x0005159c) bg_vkb2_func_pane_g8

0xa347,	// (0x0004e448) bg_vkb2_func_pane_g9

0x0008,

0xfa27,	// (0x00053b28) bg_vkb2_func_pane_g

0x6fe0,	// (0x0004b0e1) blid2_tripm_pane_g6_ParamLimits

0x6fe0,	// (0x0004b0e1) blid2_tripm_pane_g6

0xd37a,	// (0x0005147b) mp4_progress_pane_g1

0x7059,	// (0x0004b15a) blid2_tripm_values_pane_ParamLimits

0x7059,	// (0x0004b15a) blid2_tripm_values_pane

0x7150,	// (0x0004b251) blid2_tripm_values_pane_t1

0x715e,	// (0x0004b25f) blid2_tripm_values_pane_t2

0x716c,	// (0x0004b26d) blid2_tripm_values_pane_t3

0x717a,	// (0x0004b27b) blid2_tripm_values_pane_t4

0x7188,	// (0x0004b289) blid2_tripm_values_pane_t5

0x7196,	// (0x0004b297) blid2_tripm_values_pane_t6

0x71a4,	// (0x0004b2a5) blid2_tripm_values_pane_t7

0x71b2,	// (0x0004b2b3) blid2_tripm_values_pane_t8

0x71c0,	// (0x0004b2c1) blid2_tripm_values_pane_t9

0x0008,

0xfa3a,	// (0x00053b3b) blid2_tripm_values_pane_t

0x2650,	// (0x00046751) call_video_pane_t1_ParamLimits

0x266e,	// (0x0004676f) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x000532bb) call_video_pane_t_ParamLimits

0x0c04,	// (0x00044d05) msg_header_pane_g1_ParamLimits

0xad62,	// (0x0004ee63) msg_header_pane_g2_ParamLimits

0xad62,	// (0x0004ee63) msg_header_pane_g2

0x0001,

0xf3aa,	// (0x000534ab) msg_header_pane_g_ParamLimits

0xf3aa,	// (0x000534ab) msg_header_pane_g

0x1bdf,	// (0x00045ce0) main_clock2_pane_ParamLimits

0x5102,	// (0x00049203) grid_clock2_toolbar_pane_ParamLimits

0x5102,	// (0x00049203) grid_clock2_toolbar_pane

0x5102,	// (0x00049203) listscroll_clock2_pane_ParamLimits

0x5102,	// (0x00049203) listscroll_clock2_pane

0x51e6,	// (0x000492e7) main_clock2_pane_t3_ParamLimits

0x51e6,	// (0x000492e7) main_clock2_pane_t3

0x520a,	// (0x0004930b) main_clock2_pane_t4_ParamLimits

0x520a,	// (0x0004930b) main_clock2_pane_t4

0xdc5a,	// (0x00051d5b) cell_clock2_toolbar_pane

0xdc62,	// (0x00051d63) cell_clock2_toolbar_pane_cp01

0xdc62,	// (0x00051d63) cell_clock2_toolbar_pane_cp02

0xdc6a,	// (0x00051d6b) cell_clock2_toolbar_pane_cp03

0xdc72,	// (0x00051d73) list_clock2_pane

0xa96f,	// (0x0004ea70) scroll_pane_cp10

0xdc7a,	// (0x00051d7b) list_single_clock2_pane_ParamLimits

0xdc7a,	// (0x00051d7b) list_single_clock2_pane

0xa144,	// (0x0004e245) list_highlight_pane_cp08

0xdc87,	// (0x00051d88) list_single_clock2_pane_t1

0xdc95,	// (0x00051d96) list_single_clock2_pane_t2

0x0001,

0xfa4d,	// (0x00053b4e) list_single_clock2_pane_t

0x1129,	// (0x0004522a) bg_button_pane_cp10

0xdca3,	// (0x00051da4) cell_clock2_toolbar_pane_g1

0x3950,	// (0x00047a51) aid_main_viewer_pane_g1_ParamLimits

0x3950,	// (0x00047a51) aid_main_viewer_pane_g1

0x395e,	// (0x00047a5f) aid_main_viewer_pane_g2_ParamLimits

0x395e,	// (0x00047a5f) aid_main_viewer_pane_g2

0x396c,	// (0x00047a6d) aid_main_viewer_pane_g3_ParamLimits

0x396c,	// (0x00047a6d) aid_main_viewer_pane_g3

0x397b,	// (0x00047a7c) aid_main_viewer_pane_g4_ParamLimits

0x397b,	// (0x00047a7c) aid_main_viewer_pane_g4

0x0003,

0xf3bb,	// (0x000534bc) aid_main_viewer_pane_g_ParamLimits

0xf3bb,	// (0x000534bc) aid_main_viewer_pane_g

0x4220,	// (0x00048321) main_calc_pane_ParamLimits

0x4234,	// (0x00048335) main_dialer2_pane_ParamLimits

0x1129,	// (0x0004522a) main_cam6_pane

0x1129,	// (0x0004522a) main_vid6_pane

0x510e,	// (0x0004920f) listscroll_gen_pane_cp06_ParamLimits

0x510e,	// (0x0004920f) listscroll_gen_pane_cp06

0x522d,	// (0x0004932e) main_clock2_pane_t5_ParamLimits

0x522d,	// (0x0004932e) main_clock2_pane_t5

0x528b,	// (0x0004938c) aid_call2_pane_cp10_ParamLimits

0x529d,	// (0x0004939e) aid_call_pane_cp10_ParamLimits

0xa9de,	// (0x0004eadf) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa9de,	// (0x0004eadf) popup_clock_analogue_window_cp10_g2_ParamLimits

0x52af,	// (0x000493b0) popup_clock_analogue_window_cp10_g3_ParamLimits

0x52af,	// (0x000493b0) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa9de,	// (0x0004eadf) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6df,	// (0x000537e0) popup_clock_analogue_window_cp10_g_ParamLimits

0x52c5,	// (0x000493c6) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd3e5,	// (0x000514e6) cell_dialer2_keypad_pane_g2_ParamLimits

0xd3e5,	// (0x000514e6) cell_dialer2_keypad_pane_g2

0x0001,

0xf7bf,	// (0x000538c0) cell_dialer2_keypad_pane_g_ParamLimits

0xf7bf,	// (0x000538c0) cell_dialer2_keypad_pane_g

0x1b77,	// (0x00045c78) cell_dialer2_keypad_pane_t1

0x63f9,	// (0x0004a4fa) main_cset_text2_pane_ParamLimits

0x63f9,	// (0x0004a4fa) main_cset_text2_pane

0xd9ec,	// (0x00051aed) area_vitu2_query_pane_g1_ParamLimits

0x6c39,	// (0x0004ad3a) area_vitu2_query_pane_g2_ParamLimits

0xf96a,	// (0x00053a6b) area_vitu2_query_pane_g_ParamLimits

0xda79,	// (0x00051b7a) area_vitu2_query_pane_t7_ParamLimits

0xda79,	// (0x00051b7a) area_vitu2_query_pane_t7

0x6c98,	// (0x0004ad99) bg_button_pane_cp018_ParamLimits

0x6ca4,	// (0x0004ada5) bg_button_pane_cp021_ParamLimits

0x6cb0,	// (0x0004adb1) bg_button_pane_cp022_ParamLimits

0x6cbf,	// (0x0004adc0) bg_vkb2_func_pane_cp08_ParamLimits

0x6c98,	// (0x0004ad99) bg_vkb2_func_pane_cp06_ParamLimits

0x6ca4,	// (0x0004ada5) bg_vkb2_func_pane_cp07_ParamLimits

0x6ccf,	// (0x0004add0) input_focus_pane_cp09_ParamLimits

0x71ce,	// (0x0004b2cf) cam6_autofocus_pane_ParamLimits

0x71ce,	// (0x0004b2cf) cam6_autofocus_pane

0x71da,	// (0x0004b2db) cam6_image_uncrop_pane_ParamLimits

0x71da,	// (0x0004b2db) cam6_image_uncrop_pane

0x71ea,	// (0x0004b2eb) cam6_indi_pane_ParamLimits

0x71ea,	// (0x0004b2eb) cam6_indi_pane

0x7200,	// (0x0004b301) cam6_mode_pane_ParamLimits

0x7200,	// (0x0004b301) cam6_mode_pane

0x7212,	// (0x0004b313) cam6_timer_pane_ParamLimits

0x7212,	// (0x0004b313) cam6_timer_pane

0x721e,	// (0x0004b31f) cam6_zoom_pane_ParamLimits

0x721e,	// (0x0004b31f) cam6_zoom_pane

0x722b,	// (0x0004b32c) cam6_mode_pane_g1_ParamLimits

0x722b,	// (0x0004b32c) cam6_mode_pane_g1

0x723b,	// (0x0004b33c) cam6_mode_pane_g2_ParamLimits

0x723b,	// (0x0004b33c) cam6_mode_pane_g2

0x724b,	// (0x0004b34c) cam6_mode_pane_g3_ParamLimits

0x724b,	// (0x0004b34c) cam6_mode_pane_g3

0x725b,	// (0x0004b35c) cam6_mode_pane_g4_ParamLimits

0x725b,	// (0x0004b35c) cam6_mode_pane_g4

0x0003,

0xfa52,	// (0x00053b53) cam6_mode_pane_g_ParamLimits

0xfa52,	// (0x00053b53) cam6_mode_pane_g

0xc0c8,	// (0x000501c9) bg_tb_trans_pane_cp08_ParamLimits

0xc0c8,	// (0x000501c9) bg_tb_trans_pane_cp08

0xdcab,	// (0x00051dac) cam6_battery_pane_ParamLimits

0xdcab,	// (0x00051dac) cam6_battery_pane

0xdcc1,	// (0x00051dc2) cam6_indi_pane_g1_ParamLimits

0xdcc1,	// (0x00051dc2) cam6_indi_pane_g1

0xdcd3,	// (0x00051dd4) cam6_indi_pane_g2_ParamLimits

0xdcd3,	// (0x00051dd4) cam6_indi_pane_g2

0xdce5,	// (0x00051de6) cam6_indi_pane_g3_ParamLimits

0xdce5,	// (0x00051de6) cam6_indi_pane_g3

0x0002,

0xfa5b,	// (0x00053b5c) cam6_indi_pane_g_ParamLimits

0xfa5b,	// (0x00053b5c) cam6_indi_pane_g

0xdcf7,	// (0x00051df8) cam6_indi_pane_t1_ParamLimits

0xdcf7,	// (0x00051df8) cam6_indi_pane_t1

0x5d1e,	// (0x00049e1f) cam6_autofocus_pane_g1

0x5d26,	// (0x00049e27) cam6_autofocus_pane_g2

0x5d2e,	// (0x00049e2f) cam6_autofocus_pane_g3

0x5d36,	// (0x00049e37) cam6_autofocus_pane_g4

0x0003,

0xfa62,	// (0x00053b63) cam6_autofocus_pane_g

0xdd1d,	// (0x00051e1e) cam6_timer_pane_g1

0xdd25,	// (0x00051e26) cam6_timer_pane_t1

0xdd33,	// (0x00051e34) cam6_zoom_cont_pane

0xdd3b,	// (0x00051e3c) cam6_zoom_pane_g1

0xdd44,	// (0x00051e45) cam6_zoom_pane_g2

0x726b,	// (0x0004b36c) cam6_zoom_pane_g3

0x0002,

0xfa6b,	// (0x00053b6c) cam6_zoom_pane_g

0x1b6d,	// (0x00045c6e) cam6_battery_pane_g1

0x1b6d,	// (0x00045c6e) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x0005318d) cam6_battery_pane_g

0xdd3b,	// (0x00051e3c) cam6_zoom_cont_pane_g1

0xdd44,	// (0x00051e45) cam6_zoom_cont_pane_g2

0xdd4d,	// (0x00051e4e) cam6_zoom_cont_pane_g3

0x0002,

0xfa72,	// (0x00053b73) cam6_zoom_cont_pane_g

0x7289,	// (0x0004b38a) cam6_mode_pane_cp_ParamLimits

0x7289,	// (0x0004b38a) cam6_mode_pane_cp

0x729b,	// (0x0004b39c) cam6_zoom_pane_cp_ParamLimits

0x729b,	// (0x0004b39c) cam6_zoom_pane_cp

0x72a7,	// (0x0004b3a8) vid6_image_uncrop_cif_pane_ParamLimits

0x72a7,	// (0x0004b3a8) vid6_image_uncrop_cif_pane

0x72b7,	// (0x0004b3b8) vid6_image_uncrop_nhd_pane_ParamLimits

0x72b7,	// (0x0004b3b8) vid6_image_uncrop_nhd_pane

0x72c6,	// (0x0004b3c7) vid6_image_uncrop_vga_pane_ParamLimits

0x72c6,	// (0x0004b3c7) vid6_image_uncrop_vga_pane

0x72d5,	// (0x0004b3d6) vid6_image_uncrop_wvga_pane_ParamLimits

0x72d5,	// (0x0004b3d6) vid6_image_uncrop_wvga_pane

0x72e4,	// (0x0004b3e5) vid6_indi_pane_ParamLimits

0x72e4,	// (0x0004b3e5) vid6_indi_pane

0xc0c8,	// (0x000501c9) bg_tb_trans_pane_cp09_ParamLimits

0xc0c8,	// (0x000501c9) bg_tb_trans_pane_cp09

0xdd65,	// (0x00051e66) cam6_battery_pane_cp_ParamLimits

0xdd65,	// (0x00051e66) cam6_battery_pane_cp

0xdd95,	// (0x00051e96) vid6_indi_pane_g1_ParamLimits

0xdd95,	// (0x00051e96) vid6_indi_pane_g1

0xdda7,	// (0x00051ea8) vid6_indi_pane_g2_ParamLimits

0xdda7,	// (0x00051ea8) vid6_indi_pane_g2

0xddb9,	// (0x00051eba) vid6_indi_pane_g3_ParamLimits

0xddb9,	// (0x00051eba) vid6_indi_pane_g3

0xddce,	// (0x00051ecf) vid6_indi_pane_g4_ParamLimits

0xddce,	// (0x00051ecf) vid6_indi_pane_g4

0xdde3,	// (0x00051ee4) vid6_indi_pane_g5_ParamLimits

0xdde3,	// (0x00051ee4) vid6_indi_pane_g5

0x0004,

0xfa79,	// (0x00053b7a) vid6_indi_pane_g_ParamLimits

0xfa79,	// (0x00053b7a) vid6_indi_pane_g

0xddfd,	// (0x00051efe) vid6_indi_pane_t1_ParamLimits

0xddfd,	// (0x00051efe) vid6_indi_pane_t1

0xde13,	// (0x00051f14) vid6_indi_pane_t2_ParamLimits

0xde13,	// (0x00051f14) vid6_indi_pane_t2

0xde3b,	// (0x00051f3c) vid6_indi_pane_t3_ParamLimits

0xde3b,	// (0x00051f3c) vid6_indi_pane_t3

0xde63,	// (0x00051f64) vid6_indi_pane_t4_ParamLimits

0xde63,	// (0x00051f64) vid6_indi_pane_t4

0x0003,

0xfa84,	// (0x00053b85) vid6_indi_pane_t_ParamLimits

0xfa84,	// (0x00053b85) vid6_indi_pane_t

0xde87,	// (0x00051f88) wait_bar_pane_cp08

0x72fc,	// (0x0004b3fd) main_cset_text2_pane_t1_ParamLimits

0x72fc,	// (0x0004b3fd) main_cset_text2_pane_t1

0x7274,	// (0x0004b375) listscroll_gen_pane_cp06_t1_ParamLimits

0x7274,	// (0x0004b375) listscroll_gen_pane_cp06_t1

0x1129,	// (0x0004522a) main_cam6_set_pane

0x1a9b,	// (0x00045b9c) bg_tb_trans_pane_cp06_ParamLimits

0xcf2c,	// (0x0005102d) cam4_indicators_pane_g1_ParamLimits

0xcf3d,	// (0x0005103e) cam4_indicators_pane_g2_ParamLimits

0xf7fc,	// (0x000538fd) cam4_indicators_pane_g_ParamLimits

0xcf55,	// (0x00051056) cam4_indicators_pane_t1_ParamLimits

0x12ed,	// (0x000453ee) bg_tb_trans_pane_cp07_ParamLimits

0xcf7f,	// (0x00051080) vid4_indicators_pane_g1_ParamLimits

0xcf93,	// (0x00051094) vid4_indicators_pane_g2_ParamLimits

0xcfa7,	// (0x000510a8) vid4_indicators_pane_g3_ParamLimits

0xcfb8,	// (0x000510b9) vid4_indicators_pane_g4_ParamLimits

0xf80e,	// (0x0005390f) vid4_indicators_pane_g_ParamLimits

0xcfd4,	// (0x000510d5) vid4_indicators_pane_t1_ParamLimits

0xd634,	// (0x00051735) vid4_progress_pane_g1_ParamLimits

0xd644,	// (0x00051745) vid4_progress_pane_g2_ParamLimits

0x6e0e,	// (0x0004af0f) vid4_progress_pane_g3_ParamLimits

0xd654,	// (0x00051755) vid4_progress_pane_g4_ParamLimits

0xf9b5,	// (0x00053ab6) vid4_progress_pane_g_ParamLimits

0x6e20,	// (0x0004af21) vid4_progress_pane_t1_ParamLimits

0xd66c,	// (0x0005176d) vid4_progress_pane_t2_ParamLimits

0xd681,	// (0x00051782) vid4_progress_pane_t3_ParamLimits

0xf9c0,	// (0x00053ac1) vid4_progress_pane_t_ParamLimits

0x6e36,	// (0x0004af37) wait_bar_pane_cp07_ParamLimits

0x731a,	// (0x0004b41b) main_cam6_set_pane_g2_ParamLimits

0x731a,	// (0x0004b41b) main_cam6_set_pane_g2

0x733e,	// (0x0004b43f) main_cset6_listscroll_pane_ParamLimits

0x733e,	// (0x0004b43f) main_cset6_listscroll_pane

0x735a,	// (0x0004b45b) main_cset6_slider_pane_ParamLimits

0x735a,	// (0x0004b45b) main_cset6_slider_pane

0x7370,	// (0x0004b471) main_cset6_text2_pane_ParamLimits

0x7370,	// (0x0004b471) main_cset6_text2_pane

0xde96,	// (0x00051f97) main_cset6_text_pane

0xde9e,	// (0x00051f9f) main_cset_list_pane_copy1_ParamLimits

0xde9e,	// (0x00051f9f) main_cset_list_pane_copy1

0xdeae,	// (0x00051faf) scroll_pane_cp028_copy1

0x737e,	// (0x0004b47f) cset_list_set_pane_copy1

0x7390,	// (0x0004b491) aid_position_infowindow_above_copy1

0x7398,	// (0x0004b499) aid_position_infowindow_below_copy1

0x0c56,	// (0x00044d57) cset_list_set_pane_g1_copy1

0x0c5e,	// (0x00044d5f) cset_list_set_pane_g3_copy1_ParamLimits

0x0c5e,	// (0x00044d5f) cset_list_set_pane_g3_copy1

0x0c6d,	// (0x00044d6e) cset_list_set_pane_t1_copy1_ParamLimits

0x0c6d,	// (0x00044d6e) cset_list_set_pane_t1_copy1

0x12ed,	// (0x000453ee) list_highlight_pane_cp021_copy1_ParamLimits

0x12ed,	// (0x000453ee) list_highlight_pane_cp021_copy1

0xdeb7,	// (0x00051fb8) cset6_slider_pane_ParamLimits

0xdeb7,	// (0x00051fb8) cset6_slider_pane

0xdee3,	// (0x00051fe4) main_cset6_slider_pane_g1_ParamLimits

0xdee3,	// (0x00051fe4) main_cset6_slider_pane_g1

0x73a0,	// (0x0004b4a1) main_cset6_slider_pane_g2_ParamLimits

0x73a0,	// (0x0004b4a1) main_cset6_slider_pane_g2

0xdf0b,	// (0x0005200c) main_cset6_slider_pane_g3_ParamLimits

0xdf0b,	// (0x0005200c) main_cset6_slider_pane_g3

0x73c8,	// (0x0004b4c9) main_cset6_slider_pane_g4_ParamLimits

0x73c8,	// (0x0004b4c9) main_cset6_slider_pane_g4

0xdf17,	// (0x00052018) main_cset6_slider_pane_g5_ParamLimits

0xdf17,	// (0x00052018) main_cset6_slider_pane_g5

0xd6bf,	// (0x000517c0) main_cset6_slider_pane_g7_ParamLimits

0xd6bf,	// (0x000517c0) main_cset6_slider_pane_g7

0xd6cb,	// (0x000517cc) main_cset6_slider_pane_g8_ParamLimits

0xd6cb,	// (0x000517cc) main_cset6_slider_pane_g8

0x649f,	// (0x0004a5a0) main_cset6_slider_pane_g9_ParamLimits

0x649f,	// (0x0004a5a0) main_cset6_slider_pane_g9

0x64ab,	// (0x0004a5ac) main_cset6_slider_pane_g10_ParamLimits

0x64ab,	// (0x0004a5ac) main_cset6_slider_pane_g10

0x64b7,	// (0x0004a5b8) main_cset6_slider_pane_g11_ParamLimits

0x64b7,	// (0x0004a5b8) main_cset6_slider_pane_g11

0x64c3,	// (0x0004a5c4) main_cset6_slider_pane_g12_ParamLimits

0x64c3,	// (0x0004a5c4) main_cset6_slider_pane_g12

0x64cf,	// (0x0004a5d0) main_cset6_slider_pane_g13_ParamLimits

0x64cf,	// (0x0004a5d0) main_cset6_slider_pane_g13

0x64db,	// (0x0004a5dc) main_cset6_slider_pane_g14_ParamLimits

0x64db,	// (0x0004a5dc) main_cset6_slider_pane_g14

0x73d4,	// (0x0004b4d5) main_cset6_slider_pane_g15_ParamLimits

0x73d4,	// (0x0004b4d5) main_cset6_slider_pane_g15

0xdd71,	// (0x00051e72) main_cset6_slider_pane_g16_ParamLimits

0xdd71,	// (0x00051e72) main_cset6_slider_pane_g16

0xdd7d,	// (0x00051e7e) main_cset6_slider_pane_g17_ParamLimits

0xdd7d,	// (0x00051e7e) main_cset6_slider_pane_g17

0x0011,

0xfa8d,	// (0x00053b8e) main_cset6_slider_pane_g_ParamLimits

0xfa8d,	// (0x00053b8e) main_cset6_slider_pane_g

0xdf23,	// (0x00052024) main_cset6_slider_pane_t1_ParamLimits

0xdf23,	// (0x00052024) main_cset6_slider_pane_t1

0x7404,	// (0x0004b505) main_cset6_slider_pane_t2_ParamLimits

0x7404,	// (0x0004b505) main_cset6_slider_pane_t2

0x742f,	// (0x0004b530) main_cset6_slider_pane_t3_ParamLimits

0x742f,	// (0x0004b530) main_cset6_slider_pane_t3

0x745a,	// (0x0004b55b) main_cset6_slider_pane_t4_ParamLimits

0x745a,	// (0x0004b55b) main_cset6_slider_pane_t4

0x7485,	// (0x0004b586) main_cset6_slider_pane_t5_ParamLimits

0x7485,	// (0x0004b586) main_cset6_slider_pane_t5

0xdf64,	// (0x00052065) main_cset6_slider_pane_t7_ParamLimits

0xdf64,	// (0x00052065) main_cset6_slider_pane_t7

0x74b0,	// (0x0004b5b1) main_cset6_slider_pane_t8_ParamLimits

0x74b0,	// (0x0004b5b1) main_cset6_slider_pane_t8

0x74d4,	// (0x0004b5d5) main_cset6_slider_pane_t9_ParamLimits

0x74d4,	// (0x0004b5d5) main_cset6_slider_pane_t9

0x74f8,	// (0x0004b5f9) main_cset6_slider_pane_t10_ParamLimits

0x74f8,	// (0x0004b5f9) main_cset6_slider_pane_t10

0x751c,	// (0x0004b61d) main_cset6_slider_pane_t11_ParamLimits

0x751c,	// (0x0004b61d) main_cset6_slider_pane_t11

0xdf9a,	// (0x0005209b) main_cset6_slider_pane_t14_ParamLimits

0xdf9a,	// (0x0005209b) main_cset6_slider_pane_t14

0xdfd3,	// (0x000520d4) main_cset6_slider_pane_t15_ParamLimits

0xdfd3,	// (0x000520d4) main_cset6_slider_pane_t15

0x000b,

0xfab2,	// (0x00053bb3) main_cset6_slider_pane_t_ParamLimits

0xfab2,	// (0x00053bb3) main_cset6_slider_pane_t

0xd78d,	// (0x0005188e) cset_slider_pane_g1_copy1

0xd796,	// (0x00051897) cset_slider_pane_g2_copy1

0xd79f,	// (0x000518a0) cset_slider_pane_g3_copy1

0x1129,	// (0x0004522a) bg_popup_sub_pane_cp011_copy1

0xe015,	// (0x00052116) main_cset_text_pane_g1_copy1

0xd820,	// (0x00051921) main_cset_text_pane_t1_copy1

0xd82e,	// (0x0005192f) main_cset_text_pane_t2_copy1

0xd83c,	// (0x0005193d) main_cset_text_pane_t3_copy1

0xd84a,	// (0x0005194b) main_cset_text_pane_t4_copy1

0xd858,	// (0x00051959) main_cset_text_pane_t5_copy1

0xe01d,	// (0x0005211e) main_cset_text_pane_t6_copy1

0xe02b,	// (0x0005212c) main_cset_text_pane_t7_copy1

0x72fc,	// (0x0004b3fd) main_cset_text2_pane_t1_copy1

0x12ed,	// (0x000453ee) main_ncimui_pane

0x4478,	// (0x00048579) popup_query_ncimui_window_ParamLimits

0x4478,	// (0x00048579) popup_query_ncimui_window

0xc723,	// (0x00050824) field_cale_ev2_pane_g4_ParamLimits

0xc723,	// (0x00050824) field_cale_ev2_pane_g4

0x5691,	// (0x00049792) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5691,	// (0x00049792) cell_video_dialer_keypad_pane_g2

0x0001,

0xf796,	// (0x00053897) cell_video_dialer_keypad_pane_g_ParamLimits

0xf796,	// (0x00053897) cell_video_dialer_keypad_pane_g

0x56a9,	// (0x000497aa) cell_video_dialer_keypad_pane_t1

0x1129,	// (0x0004522a) bg_popup_window_pane_cp012

0xa867,	// (0x0004e968) heading_pane_cp06

0xe057,	// (0x00052158) ncim_query_content_pane

0x1129,	// (0x0004522a) bg_popup_heading_pane_cp01

0xe05f,	// (0x00052160) ncim_heading_pane_t1

0xe06d,	// (0x0005216e) ncim_indicator_popup_pane

0xe07f,	// (0x00052180) ncim_query_button_pane

0xe093,	// (0x00052194) ncim_query_content_pane_t1

0xe0a5,	// (0x000521a6) ncim_query_content_pane_t2

0x0005,

0xfaf6,	// (0x00053bf7) ncim_query_content_pane_t

0xe0df,	// (0x000521e0) ncim_query_list_pane

0xe0f1,	// (0x000521f2) ncim_query_popup_pane

0xe06d,	// (0x0005216e) ncim_indicator_popup_pane_ParamLimits

0x7669,	// (0x0004b76a) ncim_query_content_pane_g1_ParamLimits

0x7669,	// (0x0004b76a) ncim_query_content_pane_g1

0xe093,	// (0x00052194) ncim_query_content_pane_t1_ParamLimits

0xe0a5,	// (0x000521a6) ncim_query_content_pane_t2_ParamLimits

0x7675,	// (0x0004b776) ncim_query_content_pane_t3_ParamLimits

0x7675,	// (0x0004b776) ncim_query_content_pane_t3

0x769d,	// (0x0004b79e) ncim_query_content_pane_t4_ParamLimits

0x769d,	// (0x0004b79e) ncim_query_content_pane_t4

0x76c5,	// (0x0004b7c6) ncim_query_content_pane_t5_ParamLimits

0x76c5,	// (0x0004b7c6) ncim_query_content_pane_t5

0xe0b7,	// (0x000521b8) ncim_query_content_pane_t6_ParamLimits

0xe0b7,	// (0x000521b8) ncim_query_content_pane_t6

0xfaf6,	// (0x00053bf7) ncim_query_content_pane_t_ParamLimits

0xe0df,	// (0x000521e0) ncim_query_list_pane_ParamLimits

0xe0f1,	// (0x000521f2) ncim_query_popup_pane_ParamLimits

0xe105,	// (0x00052206) wait_bar_pane_cp04

0x1129,	// (0x0004522a) input_focus_pane_cp011

0xe10d,	// (0x0005220e) ncim_query_popup_pane_t1

0xe11b,	// (0x0005221c) ncim_list_query_list_pane_ParamLimits

0xe11b,	// (0x0005221c) ncim_list_query_list_pane

0x1129,	// (0x0004522a) bg_button_pane_cp027

0xe128,	// (0x00052229) ncim_query_button_pane_g1

0x1129,	// (0x0004522a) list_highlight_pane_cp012

0xe132,	// (0x00052233) ncim_list_query_list_pane_g1

0xe13a,	// (0x0005223b) ncim_list_query_list_pane_t1

0xcf49,	// (0x0005104a) cam4_indicators_pane_g3_ParamLimits

0xcf49,	// (0x0005104a) cam4_indicators_pane_g3

0xcfc4,	// (0x000510c5) vid4_indicators_pane_g5_ParamLimits

0xcfc4,	// (0x000510c5) vid4_indicators_pane_g5

0xd660,	// (0x00051761) vid4_progress_pane_g5_ParamLimits

0xd660,	// (0x00051761) vid4_progress_pane_g5

0x7554,	// (0x0004b655) main_ncimui_pane_g1

0x75bd,	// (0x0004b6be) ncimui_group_query_pane_ParamLimits

0x75bd,	// (0x0004b6be) ncimui_group_query_pane

0x7605,	// (0x0004b706) ncimui_list_pane_ParamLimits

0x7605,	// (0x0004b706) ncimui_list_pane

0x762c,	// (0x0004b72d) ncimui_text_pane_ParamLimits

0x762c,	// (0x0004b72d) ncimui_text_pane

0x76ed,	// (0x0004b7ee) ncimui_text_pane_t1_ParamLimits

0x76ed,	// (0x0004b7ee) ncimui_text_pane_t1

0xe148,	// (0x00052249) ncimui_list_single_graphic_pane_ParamLimits

0xe148,	// (0x00052249) ncimui_list_single_graphic_pane

0x770b,	// (0x0004b80c) ncimui_query_pane_ParamLimits

0x770b,	// (0x0004b80c) ncimui_query_pane

0x1129,	// (0x0004522a) list_highlight_pane_cp013

0xe158,	// (0x00052259) ncim_list_query_list_pane_t1_copy1

0xe166,	// (0x00052267) ncim_list_single_graphic_pane_g1

0x771e,	// (0x0004b81f) ncim_query_button_pane_cp01

0x772a,	// (0x0004b82b) ncim_query_entry_pane_ParamLimits

0x772a,	// (0x0004b82b) ncim_query_entry_pane

0x773d,	// (0x0004b83e) ncimui_query_pane_g1

0x7749,	// (0x0004b84a) ncimui_query_pane_t1_ParamLimits

0x7749,	// (0x0004b84a) ncimui_query_pane_t1

0x12ed,	// (0x000453ee) input_focus_pane_cp012

0xe16e,	// (0x0005226f) ncim_query_entry_pane_t1

0x1bdf,	// (0x00045ce0) main_im_pane_ParamLimits

0x12ed,	// (0x000453ee) main_mobtv_pane_ParamLimits

0x12ed,	// (0x000453ee) main_mobtv_pane

0x73ec,	// (0x0004b4ed) main_cset6_slider_pane_g18_ParamLimits

0x73ec,	// (0x0004b4ed) main_cset6_slider_pane_g18

0x73f8,	// (0x0004b4f9) main_cset6_slider_pane_g19_ParamLimits

0x73f8,	// (0x0004b4f9) main_cset6_slider_pane_g19

0x1ab7,	// (0x00045bb8) bg_main_mobtv_pane_ParamLimits

0x1ab7,	// (0x00045bb8) bg_main_mobtv_pane

0x7762,	// (0x0004b863) main_mobtv_info_pane

0x776b,	// (0x0004b86c) main_mobtv_loading_pane_ParamLimits

0x776b,	// (0x0004b86c) main_mobtv_loading_pane

0xe180,	// (0x00052281) main_mobtv_pg_channel_list_pane

0xe18a,	// (0x0005228b) main_mobtv_pg_hdr_pane

0x7778,	// (0x0004b879) main_mobtv_programe_curr_pane_ParamLimits

0x7778,	// (0x0004b879) main_mobtv_programe_curr_pane

0x7785,	// (0x0004b886) main_mobtv_programe_next_pane_ParamLimits

0x7785,	// (0x0004b886) main_mobtv_programe_next_pane

0xe193,	// (0x00052294) popup_mobtv_noti_window

0x1b6d,	// (0x00045c6e) main_tv_pg_hdr_pane_g1

0xe19b,	// (0x0005229c) main_tv_pg_hdr_pane_g2

0xe1a3,	// (0x000522a4) main_tv_pg_hdr_pane_g3

0xe1ab,	// (0x000522ac) main_tv_pg_hdr_pane_g4

0xe1b3,	// (0x000522b4) main_tv_pg_hdr_pane_g5

0xe1bd,	// (0x000522be) main_tv_pg_hdr_pane_g6

0xe1c7,	// (0x000522c8) main_tv_pg_hdr_pane_g7

0xe1d1,	// (0x000522d2) main_tv_pg_hdr_pane_g8

0xe1db,	// (0x000522dc) main_tv_pg_hdr_pane_g9

0xe1e5,	// (0x000522e6) main_tv_pg_hdr_pane_g10

0xe1ef,	// (0x000522f0) main_tv_pg_hdr_pane_g11

0x000a,

0xfb03,	// (0x00053c04) main_tv_pg_hdr_pane_g

0xe1f9,	// (0x000522fa) main_tv_pg_hdr_pane_t1

0xe207,	// (0x00052308) main_tv_pg_hdr_pane_t2

0xe215,	// (0x00052316) main_tv_pg_hdr_pane_t3

0xe225,	// (0x00052326) main_tv_pg_hdr_pane_t4

0xe235,	// (0x00052336) main_tv_pg_hdr_pane_t5

0x0004,

0xfb1a,	// (0x00053c1b) main_tv_pg_hdr_pane_t

0xe245,	// (0x00052346) single_mobtv_pg_channel_pane_ParamLimits

0xe245,	// (0x00052346) single_mobtv_pg_channel_pane

0xe257,	// (0x00052358) single_mobtv_pg_channel_table_pane

0xa476,	// (0x0004e577) single_mobtv_pg_channel_thumb_pane

0xe260,	// (0x00052361) single_tv_pg_channel_pane_g1

0xe269,	// (0x0005236a) single_tv_pg_channel_pane_g2

0x0001,

0xfb25,	// (0x00053c26) single_tv_pg_channel_pane_g

0x1a9b,	// (0x00045b9c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1a9b,	// (0x00045b9c) bg_single_mobtv_pg_channel_thumb_pane

0xe272,	// (0x00052373) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe272,	// (0x00052373) single_mobtv_pg_channel_thumb_pane_g1

0xe280,	// (0x00052381) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe280,	// (0x00052381) single_mobtv_pg_channel_thumb_pane_g2

0xe28c,	// (0x0005238d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe28c,	// (0x0005238d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb2a,	// (0x00053c2b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb2a,	// (0x00053c2b) single_mobtv_pg_channel_thumb_pane_g

0xe298,	// (0x00052399) single_mobtv_pg_channel_thumb_pane_t1

0xe2a6,	// (0x000523a7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb31,	// (0x00053c32) single_mobtv_pg_channel_thumb_pane_t

0x1b6d,	// (0x00045c6e) bg_single_mobtv_pg_channel_table_pane_g1

0x1b6d,	// (0x00045c6e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x0005318d) bg_single_mobtv_pg_channel_table_pane_g

0xe2b4,	// (0x000523b5) single_mobtv_pg_channel_table_pane_t1

0xe2c2,	// (0x000523c3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb36,	// (0x00053c37) single_mobtv_pg_channel_table_pane_t

0x779a,	// (0x0004b89b) main_mobtv_info_pane_g1_ParamLimits

0x779a,	// (0x0004b89b) main_mobtv_info_pane_g1

0x77b8,	// (0x0004b8b9) main_mobtv_info_pane_t1_ParamLimits

0x77b8,	// (0x0004b8b9) main_mobtv_info_pane_t1

0x7830,	// (0x0004b931) main_mobtv_info_pane_t2_ParamLimits

0x7830,	// (0x0004b931) main_mobtv_info_pane_t2

0x0002,

0xfb40,	// (0x00053c41) main_mobtv_info_pane_t_ParamLimits

0xfb40,	// (0x00053c41) main_mobtv_info_pane_t

0x78bf,	// (0x0004b9c0) wait_bar_pane_cp05

0x78d1,	// (0x0004b9d2) main_mobtv_loading_pane_g1_ParamLimits

0x78d1,	// (0x0004b9d2) main_mobtv_loading_pane_g1

0x78e4,	// (0x0004b9e5) main_mobtv_loading_pane_g2_ParamLimits

0x78e4,	// (0x0004b9e5) main_mobtv_loading_pane_g2

0x78f0,	// (0x0004b9f1) main_mobtv_loading_pane_g3_ParamLimits

0x78f0,	// (0x0004b9f1) main_mobtv_loading_pane_g3

0x0002,

0xfb47,	// (0x00053c48) main_mobtv_loading_pane_g_ParamLimits

0xfb47,	// (0x00053c48) main_mobtv_loading_pane_g

0xe2d0,	// (0x000523d1) main_mobtv_loading_pane_t1_ParamLimits

0xe2d0,	// (0x000523d1) main_mobtv_loading_pane_t1

0xe2e8,	// (0x000523e9) main_mobtv_loading_pane_t2_ParamLimits

0xe2e8,	// (0x000523e9) main_mobtv_loading_pane_t2

0x0001,

0xfb4e,	// (0x00053c4f) main_mobtv_loading_pane_t_ParamLimits

0xfb4e,	// (0x00053c4f) main_mobtv_loading_pane_t

0x7903,	// (0x0004ba04) wait_bar_pane_cp06_ParamLimits

0x7903,	// (0x0004ba04) wait_bar_pane_cp06

0xe30c,	// (0x0005240d) main_mobtv_programe_curr_pane_t1

0xe31a,	// (0x0005241b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb53,	// (0x00053c54) main_mobtv_programe_curr_pane_t

0xe328,	// (0x00052429) main_mobtv_programe_next_pane_t1

0xe336,	// (0x00052437) main_mobtv_programe_next_pane_t2

0xe344,	// (0x00052445) main_mobtv_programe_next_pane_t3

0x0002,

0xfb58,	// (0x00053c59) main_mobtv_programe_next_pane_t

0x1129,	// (0x0004522a) bg_popup_mobtv_noti_window_pane

0xe352,	// (0x00052453) popup_mobtv_noti_window_g1

0xe35a,	// (0x0005245b) popup_mobtv_noti_window_t1

0xe368,	// (0x00052469) popup_mobtv_noti_window_t2

0x0001,

0xfb5f,	// (0x00053c60) popup_mobtv_noti_window_t

0x1b6d,	// (0x00045c6e) bg_popup_mobtv_noti_window_pane_g1

0x1129,	// (0x0004522a) sc_clock_pane

0x1129,	// (0x0004522a) main_fs_bigclock_pane

0x7043,	// (0x0004b144) blid2_tripm_pane_t4_ParamLimits

0x7043,	// (0x0004b144) blid2_tripm_pane_t4

0x1a9b,	// (0x00045b9c) sc_clock_pane_g1_ParamLimits

0x1a9b,	// (0x00045b9c) sc_clock_pane_g1

0x1b77,	// (0x00045c78) sc_clock_pane_t1_ParamLimits

0x1b77,	// (0x00045c78) sc_clock_pane_t1

0x1b77,	// (0x00045c78) sc_clock_pane_t2_ParamLimits

0x1b77,	// (0x00045c78) sc_clock_pane_t2

0x1b77,	// (0x00045c78) sc_clock_pane_t3_ParamLimits

0x1b77,	// (0x00045c78) sc_clock_pane_t3

0x0004,

0xfb64,	// (0x00053c65) sc_clock_pane_t_ParamLimits

0xfb64,	// (0x00053c65) sc_clock_pane_t

0x80db,	// (0x0004c1dc) main_fs_bigclock_indicator_pane_ParamLimits

0x80db,	// (0x0004c1dc) main_fs_bigclock_indicator_pane

0x7961,	// (0x0004ba62) main_fs_bigclock_pane_g1_ParamLimits

0x7961,	// (0x0004ba62) main_fs_bigclock_pane_g1

0x80e7,	// (0x0004c1e8) main_fs_bigclock_pane_t1_ParamLimits

0x80e7,	// (0x0004c1e8) main_fs_bigclock_pane_t1

0x80f9,	// (0x0004c1fa) main_fs_bigclock_pane_t2_ParamLimits

0x80f9,	// (0x0004c1fa) main_fs_bigclock_pane_t2

0x810d,	// (0x0004c20e) main_fs_bigclock_pane_t3_ParamLimits

0x810d,	// (0x0004c20e) main_fs_bigclock_pane_t3

0x0002,

0xfcc1,	// (0x00053dc2) main_fs_bigclock_pane_t_ParamLimits

0xfcc1,	// (0x00053dc2) main_fs_bigclock_pane_t

0xebd2,	// (0x00052cd3) main_fs_bigclock_indicator_pane_g1

0xe087,	// (0x00052188) ncim_query_content_pane_g2_ParamLimits

0xe087,	// (0x00052188) ncim_query_content_pane_g2

0x0001,

0xfaf1,	// (0x00053bf2) ncim_query_content_pane_g_ParamLimits

0xfaf1,	// (0x00053bf2) ncim_query_content_pane_g

0x1b77,	// (0x00045c78) sc_clock_pane_t4_ParamLimits

0x1b77,	// (0x00045c78) sc_clock_pane_t4

0x12ed,	// (0x000453ee) main_radioblah_pane

0xced6,	// (0x00050fd7) cell_call4_button_pane_t1_copy1_ParamLimits

0xced6,	// (0x00050fd7) cell_call4_button_pane_t1_copy1

0x756c,	// (0x0004b66d) main_ncimui_pane_t1_ParamLimits

0x756c,	// (0x0004b66d) main_ncimui_pane_t1

0x7586,	// (0x0004b687) main_ncimui_pane_t2_ParamLimits

0x7586,	// (0x0004b687) main_ncimui_pane_t2

0x0002,

0xfaea,	// (0x00053beb) main_ncimui_pane_t_ParamLimits

0xfaea,	// (0x00053beb) main_ncimui_pane_t

0xac8e,	// (0x0004ed8f) main_radioblah_anim_pane_ParamLimits

0xac8e,	// (0x0004ed8f) main_radioblah_anim_pane

0xac8e,	// (0x0004ed8f) main_radioblah_info_pane_ParamLimits

0xac8e,	// (0x0004ed8f) main_radioblah_info_pane

0xac7a,	// (0x0004ed7b) main_radioblah_pane_t1_ParamLimits

0xac7a,	// (0x0004ed7b) main_radioblah_pane_t1

0xac7a,	// (0x0004ed7b) main_radioblah_pane_t2_ParamLimits

0xac7a,	// (0x0004ed7b) main_radioblah_pane_t2

0x0003,

0xfb85,	// (0x00053c86) main_radioblah_pane_t_ParamLimits

0xfb85,	// (0x00053c86) main_radioblah_pane_t

0x12ed,	// (0x000453ee) main_radioblah_rocker_ctrl_pane_ParamLimits

0x12ed,	// (0x000453ee) main_radioblah_rocker_ctrl_pane

0xc0b4,	// (0x000501b5) main_radioblah_info_pane_t1_ParamLimits

0xc0b4,	// (0x000501b5) main_radioblah_info_pane_t1

0xe4de,	// (0x000525df) main_radioblah_info_pane_t2_ParamLimits

0xe4de,	// (0x000525df) main_radioblah_info_pane_t2

0x0003,

0xfb8e,	// (0x00053c8f) main_radioblah_info_pane_t_ParamLimits

0xfb8e,	// (0x00053c8f) main_radioblah_info_pane_t

0x1b6d,	// (0x00045c6e) main_radioblah_rocker_ctrl_pane_g1

0x1b6d,	// (0x00045c6e) main_radioblah_rocker_ctrl_pane_g2

0x1b6d,	// (0x00045c6e) main_radioblah_rocker_ctrl_pane_g3

0x1b6d,	// (0x00045c6e) main_radioblah_rocker_ctrl_pane_g4

0x1b6d,	// (0x00045c6e) main_radioblah_rocker_ctrl_pane_g5

0x1b6d,	// (0x00045c6e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb97,	// (0x00053c98) main_radioblah_rocker_ctrl_pane_g

0x72fc,	// (0x0004b3fd) main_cset_text2_pane_t1_copy1_ParamLimits

0xcf1c,	// (0x0005101d) cam4_image_uncrop_qvga_pane

0xcf6f,	// (0x00051070) vid4_image_uncrop_qcif_pane

0xd697,	// (0x00051798) cam6_image_uncrop_qvga_pane_ParamLimits

0xd697,	// (0x00051798) cam6_image_uncrop_qvga_pane

0xdd55,	// (0x00051e56) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd55,	// (0x00051e56) vid6_image_uncrop_qcif_pane

0x1129,	// (0x0004522a) bg_popup_preview_window_pane_cp03

0xe039,	// (0x0005213a) list_cset_text2_pane

0xe041,	// (0x00052142) main_cset6_text2_pane_g1

0xe049,	// (0x0005214a) main_cset6_text2_pane_t1

0xeab2,	// (0x00052bb3) list_cset_text2_pane_t1_ParamLimits

0xeab2,	// (0x00052bb3) list_cset_text2_pane_t1

0x12ed,	// (0x000453ee) main_radioblah_pane_ParamLimits

0x78ab,	// (0x0004b9ac) main_mobtv_info_pane_t3_ParamLimits

0x78ab,	// (0x0004b9ac) main_mobtv_info_pane_t3

0xac6c,	// (0x0004ed6d) main_radioblah_pane_g1

0xe4ae,	// (0x000525af) main_radioblah_info_pane_g1

0x1b8b,	// (0x00045c8c) main_radioblah_info_pane_t3_ParamLimits

0x1b8b,	// (0x00045c8c) main_radioblah_info_pane_t3

0x32d9,	// (0x000473da) highlight_cell_cale_month_pane_ParamLimits

0x32d9,	// (0x000473da) highlight_cell_cale_month_pane

0x1129,	// (0x0004522a) main_phob_fisheye_pane

0xc7d4,	// (0x000508d5) scroll_pane_cp0031_ParamLimits

0xc7d4,	// (0x000508d5) scroll_pane_cp0031

0xde87,	// (0x00051f88) wait_bar_pane_cp08_ParamLimits

0x737e,	// (0x0004b47f) cset_list_set_pane_copy1_ParamLimits

0xe52d,	// (0x0005262e) highlight_cell_cale_month_pane_g1

0x79ae,	// (0x0004baaf) highlight_cell_cale_month_pane_t1

0xdae5,	// (0x00051be6) list_gen_pane_cp01

0xd5bb,	// (0x000516bc) scroll_pane_01

0x79bc,	// (0x0004babd) list_single_double_fisheye_pane

0x79c5,	// (0x0004bac6) list_double_fisheye_pane_g1_ParamLimits

0x79c5,	// (0x0004bac6) list_double_fisheye_pane_g1

0x79d1,	// (0x0004bad2) list_double_fisheye_pane_g2_ParamLimits

0x79d1,	// (0x0004bad2) list_double_fisheye_pane_g2

0x79e5,	// (0x0004bae6) list_double_fisheye_pane_g3_ParamLimits

0x79e5,	// (0x0004bae6) list_double_fisheye_pane_g3

0x0004,

0xfba4,	// (0x00053ca5) list_double_fisheye_pane_g_ParamLimits

0xfba4,	// (0x00053ca5) list_double_fisheye_pane_g

0x7a0e,	// (0x0004bb0f) list_double_fisheye_pane_t1_ParamLimits

0x7a0e,	// (0x0004bb0f) list_double_fisheye_pane_t1

0x7a29,	// (0x0004bb2a) list_double_fisheye_pane_t2_ParamLimits

0x7a29,	// (0x0004bb2a) list_double_fisheye_pane_t2

0x0001,

0xfbaf,	// (0x00053cb0) list_double_fisheye_pane_t_ParamLimits

0xfbaf,	// (0x00053cb0) list_double_fisheye_pane_t

0x1129,	// (0x0004522a) main_call5_pane

0x12ed,	// (0x000453ee) sc_swipe_pane_ParamLimits

0x12ed,	// (0x000453ee) sc_swipe_pane

0x7a5e,	// (0x0004bb5f) call5_image_pane_ParamLimits

0x7a5e,	// (0x0004bb5f) call5_image_pane

0x7a7b,	// (0x0004bb7c) call5_swipe_1_pane_ParamLimits

0x7a7b,	// (0x0004bb7c) call5_swipe_1_pane

0x7a8e,	// (0x0004bb8f) call5_swipe_2_pane_ParamLimits

0x7a8e,	// (0x0004bb8f) call5_swipe_2_pane

0x7ab9,	// (0x0004bbba) popup_call5_audio_first_window_ParamLimits

0x7ab9,	// (0x0004bbba) popup_call5_audio_first_window

0x1a9b,	// (0x00045b9c) call5_swipe_1_pane_g1_ParamLimits

0x1a9b,	// (0x00045b9c) call5_swipe_1_pane_g1

0xe535,	// (0x00052636) call5_swipe_1_pane_g2_ParamLimits

0xe535,	// (0x00052636) call5_swipe_1_pane_g2

0x0001,

0xfbb4,	// (0x00053cb5) call5_swipe_1_pane_g_ParamLimits

0xfbb4,	// (0x00053cb5) call5_swipe_1_pane_g

0xe541,	// (0x00052642) call5_swipe_1_pane_t1_ParamLimits

0xe541,	// (0x00052642) call5_swipe_1_pane_t1

0x1a9b,	// (0x00045b9c) call5_swipe_2_pane_g1_ParamLimits

0x1a9b,	// (0x00045b9c) call5_swipe_2_pane_g1

0xe556,	// (0x00052657) call5_swipe_2_pane_g2_ParamLimits

0xe556,	// (0x00052657) call5_swipe_2_pane_g2

0x0001,

0xfbb9,	// (0x00053cba) call5_swipe_2_pane_g_ParamLimits

0xfbb9,	// (0x00053cba) call5_swipe_2_pane_g

0xe562,	// (0x00052663) call5_swipe_2_pane_t1_ParamLimits

0xe562,	// (0x00052663) call5_swipe_2_pane_t1

0x1a9b,	// (0x00045b9c) sc_swipe_pane_g1_ParamLimits

0x1a9b,	// (0x00045b9c) sc_swipe_pane_g1

0x1aa9,	// (0x00045baa) sc_swipe_pane_g2_ParamLimits

0x1aa9,	// (0x00045baa) sc_swipe_pane_g2

0x0001,

0xf732,	// (0x00053833) sc_swipe_pane_g_ParamLimits

0xf732,	// (0x00053833) sc_swipe_pane_g

0x1b77,	// (0x00045c78) sc_swipe_pane_t1_ParamLimits

0x1b77,	// (0x00045c78) sc_swipe_pane_t1

0x1129,	// (0x0004522a) main_cmail_launcher_pane

0x7aca,	// (0x0004bbcb) aid_size_cell_cmail_l_ParamLimits

0x7aca,	// (0x0004bbcb) aid_size_cell_cmail_l

0x7ad8,	// (0x0004bbd9) grid_cmail_l_pane_ParamLimits

0x7ad8,	// (0x0004bbd9) grid_cmail_l_pane

0x7af2,	// (0x0004bbf3) cell_cmail_l_pane_ParamLimits

0x7af2,	// (0x0004bbf3) cell_cmail_l_pane

0xe577,	// (0x00052678) cell_cmail_l_pane_g1_ParamLimits

0xe577,	// (0x00052678) cell_cmail_l_pane_g1

0xe583,	// (0x00052684) cell_cmail_l_pane_t1_ParamLimits

0xe583,	// (0x00052684) cell_cmail_l_pane_t1

0xe599,	// (0x0005269a) cell_cmail_l_pane_t2_ParamLimits

0xe599,	// (0x0005269a) cell_cmail_l_pane_t2

0x0001,

0xfbbe,	// (0x00053cbf) cell_cmail_l_pane_t_ParamLimits

0xfbbe,	// (0x00053cbf) cell_cmail_l_pane_t

0x12ed,	// (0x000453ee) grid_highlight_pane_cp018_ParamLimits

0x12ed,	// (0x000453ee) grid_highlight_pane_cp018

0x11f9,	// (0x000452fa) main2_pane_ParamLimits

0x11f9,	// (0x000452fa) main2_pane

0x1df3,	// (0x00045ef4) popup_sp_fs_action_menu_bg_pane_g1

0x1dfb,	// (0x00045efc) popup_sp_fs_action_menu_bg_pane_g2

0x1e03,	// (0x00045f04) popup_sp_fs_action_menu_bg_pane_g3

0x1e0b,	// (0x00045f0c) popup_sp_fs_action_menu_bg_pane_g4

0x1e13,	// (0x00045f14) popup_sp_fs_action_menu_bg_pane_g5

0x1e1b,	// (0x00045f1c) popup_sp_fs_action_menu_bg_pane_g6

0x1e23,	// (0x00045f24) popup_sp_fs_action_menu_bg_pane_g7

0x1e2b,	// (0x00045f2c) popup_sp_fs_action_menu_bg_pane_g8

0x1e33,	// (0x00045f34) popup_sp_fs_action_menu_bg_pane_g9

0xa021,	// (0x0004e122) popup_sp_fs_action_menu_bg_pane_g10

0xa021,	// (0x0004e122) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x000531de) popup_sp_fs_action_menu_bg_pane_g

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t3_g3_g1

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t3_g3_g2

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x0005328c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x0005328c) list_medium_line_x2_t3_g3_g

0x1b77,	// (0x00045c78) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t3_g3_t1

0x1b77,	// (0x00045c78) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t3_g3_t2

0x1b77,	// (0x00045c78) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x00053293) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x00053293) list_medium_line_x2_t3_g3_t

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t3_g2_g1

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x0005329a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x0005329a) list_medium_line_x2_t3_g2_g

0x1b77,	// (0x00045c78) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t3_g2_t1

0x1b77,	// (0x00045c78) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t3_g2_t2

0x1b77,	// (0x00045c78) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x00053293) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x00053293) list_medium_line_x2_t3_g2_t

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t4_g4_g1

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t4_g4_g2

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t4_g4_g3

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x0005329f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x0005329f) list_medium_line_x2_t4_g4_g

0x1b77,	// (0x00045c78) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t4_g4_t1

0x1b77,	// (0x00045c78) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t4_g4_t2

0x1b77,	// (0x00045c78) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t4_g4_t3

0x1b77,	// (0x00045c78) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x000532a8) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x000532a8) list_medium_line_x2_t4_g4_t

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t2_g4_g1

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t2_g4_g2

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t2_g4_g3

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x0005329f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x0005329f) list_medium_line_x2_t2_g4_g

0x1b77,	// (0x00045c78) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t2_g4_t1

0x1b77,	// (0x00045c78) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t2_g4_t2

0x0001,

0xf16e,	// (0x0005326f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf16e,	// (0x0005326f) list_medium_line_x2_t2_g4_t

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t2_g3_g1

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t2_g3_g2

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x0005328c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x0005328c) list_medium_line_x2_t2_g3_g

0x1b77,	// (0x00045c78) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t2_g3_t1

0x1b77,	// (0x00045c78) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t2_g3_t2

0x0001,

0xf16e,	// (0x0005326f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf16e,	// (0x0005326f) list_medium_line_x2_t2_g3_t

0x343e,	// (0x0004753f) main_sp_fs_list_pane_ParamLimits

0x343e,	// (0x0004753f) main_sp_fs_list_pane

0xe764,	// (0x00052865) sp_fs_scroll_pane_ParamLimits

0xe764,	// (0x00052865) sp_fs_scroll_pane

0xa671,	// (0x0004e772) list_medium_line_x2_t3_t1

0xa671,	// (0x0004e772) list_medium_line_x2_t3_t2

0xa671,	// (0x0004e772) list_medium_line_x2_t3_t3

0x0002,

0xf254,	// (0x00053355) list_medium_line_x2_t3_t

0xa671,	// (0x0004e772) list_medium_line_x3_t4_t1

0xa671,	// (0x0004e772) list_medium_line_x3_t4_t2

0xa671,	// (0x0004e772) list_medium_line_x3_t4_t3

0xa671,	// (0x0004e772) list_medium_line_x3_t4_t4

0x0003,

0xf25b,	// (0x0005335c) list_medium_line_x3_t4_t

0xa671,	// (0x0004e772) list_medium_line_x4_t5_t1

0xa671,	// (0x0004e772) list_medium_line_x4_t5_t2

0xa671,	// (0x0004e772) list_medium_line_x4_t5_t3

0xa671,	// (0x0004e772) list_medium_line_x4_t5_t4

0xa671,	// (0x0004e772) list_medium_line_x4_t5_t5

0x0004,

0xf264,	// (0x00053365) list_medium_line_x4_t5_t

0x1a9b,	// (0x00045b9c) list_medium_line_t4_g4_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_t4_g4_g1

0x1a9b,	// (0x00045b9c) list_medium_line_t4_g4_g2_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_t4_g4_g2

0x1a9b,	// (0x00045b9c) list_medium_line_t4_g4_g3_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_t4_g4_g3

0x1a9b,	// (0x00045b9c) list_medium_line_t4_g4_g4_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x0005329f) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x0005329f) list_medium_line_t4_g4_g

0x1b77,	// (0x00045c78) list_medium_line_t4_g4_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t4_g4_t1

0x1b77,	// (0x00045c78) list_medium_line_t4_g4_t2_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t4_g4_t2

0x1b77,	// (0x00045c78) list_medium_line_t4_g4_t3_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t4_g4_t3

0x1b77,	// (0x00045c78) list_medium_line_t4_g4_t4_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x000532a8) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x000532a8) list_medium_line_t4_g4_t

0x34e9,	// (0x000475ea) chi_dic_find_pane_g1

0x4248,	// (0x00048349) main_tport_pane

0xa671,	// (0x0004e772) list_medium_line_plain_t1

0x1a9b,	// (0x00045b9c) list_medium_line_t2_g2_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_t2_g2_g1

0x1a9b,	// (0x00045b9c) list_medium_line_t2_g2_g2_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x0005329a) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x0005329a) list_medium_line_t2_g2_g

0x1b77,	// (0x00045c78) list_medium_line_t2_g2_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t2_g2_t1

0x1b77,	// (0x00045c78) list_medium_line_t2_g2_t2_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t2_g2_t2

0x0001,

0xf16e,	// (0x0005326f) list_medium_line_t2_g2_t_ParamLimits

0xf16e,	// (0x0005326f) list_medium_line_t2_g2_t

0xcfeb,	// (0x000510ec) aid_sp_fs_list_icon_a_sm

0xcff3,	// (0x000510f4) aid_sp_fs_list_icon_d

0xcffb,	// (0x000510fc) aid_sp_fs_text_primary

0xdaee,	// (0x00051bef) aid_sp_fs_text_secondary

0x1129,	// (0x0004522a) list_medium_line

0x1129,	// (0x0004522a) list_medium_line_g2

0x1129,	// (0x0004522a) list_medium_line_g3

0x1129,	// (0x0004522a) list_medium_line_plain

0x1129,	// (0x0004522a) list_medium_line_plain_t2

0x1129,	// (0x0004522a) list_medium_line_plain_t3

0x1129,	// (0x0004522a) list_medium_line_right_icon

0x1129,	// (0x0004522a) list_medium_line_right_iconx2

0x1129,	// (0x0004522a) list_medium_line_t2

0x1129,	// (0x0004522a) list_medium_line_t2_g2

0x1129,	// (0x0004522a) list_medium_line_t2_g3

0x1129,	// (0x0004522a) list_medium_line_t2_right_icon

0x1129,	// (0x0004522a) list_medium_line_t2_right_iconx2

0x1129,	// (0x0004522a) list_medium_line_t3

0x1129,	// (0x0004522a) list_medium_line_t3_g2

0x1129,	// (0x0004522a) list_medium_line_t3_g3

0x1129,	// (0x0004522a) list_medium_line_t3_right_iconx2

0x1129,	// (0x0004522a) list_medium_line_t4_g4

0x1129,	// (0x0004522a) list_medium_line_x2

0x1129,	// (0x0004522a) list_medium_line_x2_t2_g2

0x1129,	// (0x0004522a) list_medium_line_x2_t2_g3

0x1129,	// (0x0004522a) list_medium_line_x2_t2_g4

0x1129,	// (0x0004522a) list_medium_line_x2_t3

0x1129,	// (0x0004522a) list_medium_line_x2_t3_g2

0x1129,	// (0x0004522a) list_medium_line_x2_t3_g3

0x1129,	// (0x0004522a) list_medium_line_x2_t3_g4

0x1129,	// (0x0004522a) list_medium_line_x2_t4_g2

0x1129,	// (0x0004522a) list_medium_line_x2_t4_g4

0x1129,	// (0x0004522a) list_medium_line_x3

0x1129,	// (0x0004522a) list_medium_line_x3_t4

0x1129,	// (0x0004522a) list_medium_line_x3_t4_g4

0x1129,	// (0x0004522a) list_medium_line_x4_t4

0x1129,	// (0x0004522a) list_medium_line_x4_t4_g7

0x1129,	// (0x0004522a) list_medium_line_x4_t5

0x0c42,	// (0x00044d43) list_single_fs_dyc_pane_ParamLimits

0x0c42,	// (0x00044d43) list_single_fs_dyc_pane

0x1a9b,	// (0x00045b9c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x4_t4_g7_g1

0x1a9b,	// (0x00045b9c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x4_t4_g7_g2

0x1a9b,	// (0x00045b9c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x4_t4_g7_g3

0x1a9b,	// (0x00045b9c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x4_t4_g7_g4

0x1a9b,	// (0x00045b9c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x4_t4_g7_g5

0x1a9b,	// (0x00045b9c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x4_t4_g7_g6

0x1aa9,	// (0x00045baa) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1aa9,	// (0x00045baa) list_medium_line_x4_t4_g7_g7

0x0006,

0xfacb,	// (0x00053bcc) list_medium_line_x4_t4_g7_g_ParamLimits

0xfacb,	// (0x00053bcc) list_medium_line_x4_t4_g7_g

0x1b77,	// (0x00045c78) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x4_t4_g7_t1

0x1b77,	// (0x00045c78) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x4_t4_g7_t2

0x1b77,	// (0x00045c78) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x4_t4_g7_t3

0x1b8b,	// (0x00045c8c) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1b8b,	// (0x00045c8c) list_medium_line_x4_t4_g7_t4

0x1b8b,	// (0x00045c8c) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1b8b,	// (0x00045c8c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfada,	// (0x00053bdb) list_medium_line_x4_t4_g7_t_ParamLimits

0xfada,	// (0x00053bdb) list_medium_line_x4_t4_g7_t

0x0c82,	// (0x00044d83) list_single_dyc_row_pane_ParamLimits

0x0c82,	// (0x00044d83) list_single_dyc_row_pane

0x7a4b,	// (0x0004bb4c) call5_gesture_pane_ParamLimits

0x7a4b,	// (0x0004bb4c) call5_gesture_pane

0x7aa1,	// (0x0004bba2) call5_windows_pane_ParamLimits

0x7aa1,	// (0x0004bba2) call5_windows_pane

0x7b0c,	// (0x0004bc0d) call5_swipe_1_pane_cp_ParamLimits

0x7b0c,	// (0x0004bc0d) call5_swipe_1_pane_cp

0x7b18,	// (0x0004bc19) call5_swipe_2_pane_cp_ParamLimits

0x7b18,	// (0x0004bc19) call5_swipe_2_pane_cp

0xa144,	// (0x0004e245) call5_image_pane_cp

0x7b24,	// (0x0004bc25) popup_call5_audio_first_window_cp_ParamLimits

0x7b24,	// (0x0004bc25) popup_call5_audio_first_window_cp

0xe5b6,	// (0x000526b7) call5_swipe_1_pane_g1_cp_ParamLimits

0xe5b6,	// (0x000526b7) call5_swipe_1_pane_g1_cp

0xe5c3,	// (0x000526c4) call5_swipe_1_pane_g2_cp

0xe5cb,	// (0x000526cc) call5_swipe_1_pane_t1_cp_ParamLimits

0xe5cb,	// (0x000526cc) call5_swipe_1_pane_t1_cp

0xe5b6,	// (0x000526b7) call5_swipe_2_pane_g1_cp_ParamLimits

0xe5b6,	// (0x000526b7) call5_swipe_2_pane_g1_cp

0xe5e0,	// (0x000526e1) call5_swipe_2_pane_g2_cp

0xe5e8,	// (0x000526e9) call5_swipe_2_pane_t1_cp_ParamLimits

0xe5e8,	// (0x000526e9) call5_swipe_2_pane_t1_cp

0x12ed,	// (0x000453ee) main_sp_fs_email_pane

0xe5fd,	// (0x000526fe) main_sp_fs_listscroll_pane_te

0x7b32,	// (0x0004bc33) popup_sp_fs_action_menu_pane_ParamLimits

0x7b32,	// (0x0004bc33) popup_sp_fs_action_menu_pane

0x1b6d,	// (0x00045c6e) bg_sp_fs_ctrlbar_pane_g1

0xe606,	// (0x00052707) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe60f,	// (0x00052710) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xbf28,	// (0x00050029) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1b6d,	// (0x00045c6e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbc3,	// (0x00053cc4) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc0d6,	// (0x000501d7) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc0d6,	// (0x000501d7) bg_sp_fs_ctrlbar_ddmenu_pane

0xe618,	// (0x00052719) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe618,	// (0x00052719) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe624,	// (0x00052725) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe624,	// (0x00052725) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbcc,	// (0x00053ccd) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbcc,	// (0x00053ccd) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe630,	// (0x00052731) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe630,	// (0x00052731) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1b6d,	// (0x00045c6e) list_medium_line_t2_right_icon_g1

0xa671,	// (0x0004e772) list_medium_line_t2_right_icon_t1

0xa671,	// (0x0004e772) list_medium_line_t2_right_icon_t2

0x0001,

0xfbd1,	// (0x00053cd2) list_medium_line_t2_right_icon_t

0xac8e,	// (0x0004ed8f) bg_sp_fs_ctrlbar_pane_ParamLimits

0xac8e,	// (0x0004ed8f) bg_sp_fs_ctrlbar_pane

0x7bbc,	// (0x0004bcbd) main_sp_fs_ctrlbar_button_pane_cp01

0x7bc6,	// (0x0004bcc7) main_sp_fs_ctrlbar_ddmenu_pane

0xe682,	// (0x00052783) main_sp_fs_ctrlbar_pane_g1

0xe68e,	// (0x0005278f) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbd6,	// (0x00053cd7) main_sp_fs_ctrlbar_pane_g

0x7c04,	// (0x0004bd05) main_sp_fs_ctrlbar_pane_t1

0x7c43,	// (0x0004bd44) main_sp_fs_ctrlbar_pane

0x7c67,	// (0x0004bd68) main_sp_fs_listscroll_pane_te_cp01

0x0c9f,	// (0x00044da0) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0c9f,	// (0x00044da0) popup_sp_fs_action_menu_pane_cp01

0x12ed,	// (0x000453ee) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x12ed,	// (0x000453ee) bg_sp_fs_highlight_list_pane_cp01

0xd004,	// (0x00051105) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd004,	// (0x00051105) sp_fs_action_menu_list_gene_pane_g1

0xe6b5,	// (0x000527b6) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe6b5,	// (0x000527b6) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbe4,	// (0x00053ce5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbe4,	// (0x00053ce5) sp_fs_action_menu_list_gene_pane_g

0xd013,	// (0x00051114) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd013,	// (0x00051114) sp_fs_action_menu_list_gene_pane_t1

0xd02b,	// (0x0005112c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd02b,	// (0x0005112c) sp_fs_action_menu_list_gene_pane

0xe6c2,	// (0x000527c3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe6c2,	// (0x000527c3) popup_sp_fs_action_menu_bg_pane

0xd04a,	// (0x0005114b) sp_fs_action_menu_list_pane_ParamLimits

0xd04a,	// (0x0005114b) sp_fs_action_menu_list_pane

0x0cc4,	// (0x00044dc5) sp_fs_scroll_pane_cp01_ParamLimits

0x0cc4,	// (0x00044dc5) sp_fs_scroll_pane_cp01

0xa671,	// (0x0004e772) list_medium_line_plain_t2_t1

0xa671,	// (0x0004e772) list_medium_line_plain_t2_t2

0x0001,

0xfbd1,	// (0x00053cd2) list_medium_line_plain_t2_t

0xa671,	// (0x0004e772) list_medium_line_plain_t3_t1

0xa671,	// (0x0004e772) list_medium_line_plain_t3_t2

0xa671,	// (0x0004e772) list_medium_line_plain_t3_t3

0x0002,

0xf254,	// (0x00053355) list_medium_line_plain_t3_t

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t2_g2_g1

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x0005329a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x0005329a) list_medium_line_x2_t2_g2_g

0x1b77,	// (0x00045c78) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t2_g2_t1

0x1b77,	// (0x00045c78) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t2_g2_t2

0x0001,

0xf16e,	// (0x0005326f) list_medium_line_x2_t2_g2_t_ParamLimits

0xf16e,	// (0x0005326f) list_medium_line_x2_t2_g2_t

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t4_g2_g1

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x0005329a) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x0005329a) list_medium_line_x2_t4_g2_g

0x1b77,	// (0x00045c78) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t4_g2_t1

0x1b77,	// (0x00045c78) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t4_g2_t2

0x1b77,	// (0x00045c78) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t4_g2_t3

0x1b77,	// (0x00045c78) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x000532a8) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x000532a8) list_medium_line_x2_t4_g2_t

0x1b6d,	// (0x00045c6e) list_medium_line_t3_right_iconx2_g1

0x1b6d,	// (0x00045c6e) list_medium_line_t3_right_iconx2_g2

0x1b6d,	// (0x00045c6e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf370,	// (0x00053471) list_medium_line_t3_right_iconx2_g

0xa671,	// (0x0004e772) list_medium_line_t3_right_iconx2_t1

0xa671,	// (0x0004e772) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbd1,	// (0x00053cd2) list_medium_line_t3_right_iconx2_t

0x1a9b,	// (0x00045b9c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x3_t4_g4_g1

0x1a9b,	// (0x00045b9c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x3_t4_g4_g2

0x1a9b,	// (0x00045b9c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x3_t4_g4_g3

0x1a9b,	// (0x00045b9c) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x0005329f) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x0005329f) list_medium_line_x3_t4_g4_g

0x1b77,	// (0x00045c78) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x3_t4_g4_t1

0x1b77,	// (0x00045c78) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x3_t4_g4_t2

0x1b77,	// (0x00045c78) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x3_t4_g4_t3

0x1b77,	// (0x00045c78) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x000532a8) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x000532a8) list_medium_line_x3_t4_g4_t

0x0cea,	// (0x00044deb) list_single_dyc_row_text_pane_t1_ParamLimits

0x0cea,	// (0x00044deb) list_single_dyc_row_text_pane_t1

0x0d33,	// (0x00044e34) list_single_dyc_row_text_pane_t2_ParamLimits

0x0d33,	// (0x00044e34) list_single_dyc_row_text_pane_t2

0xd06a,	// (0x0005116b) list_single_dyc_row_text_pane_t3_ParamLimits

0xd06a,	// (0x0005116b) list_single_dyc_row_text_pane_t3

0x0005,

0xfbe9,	// (0x00053cea) list_single_dyc_row_text_pane_t_ParamLimits

0xfbe9,	// (0x00053cea) list_single_dyc_row_text_pane_t

0xd08e,	// (0x0005118f) list_single_dyc_row_pane_g1_ParamLimits

0xd08e,	// (0x0005118f) list_single_dyc_row_pane_g1

0xd09a,	// (0x0005119b) list_single_dyc_row_pane_g2_ParamLimits

0xd09a,	// (0x0005119b) list_single_dyc_row_pane_g2

0xd0a6,	// (0x000511a7) list_single_dyc_row_pane_g3_ParamLimits

0xd0a6,	// (0x000511a7) list_single_dyc_row_pane_g3

0xd0b9,	// (0x000511ba) list_single_dyc_row_pane_g4_ParamLimits

0xd0b9,	// (0x000511ba) list_single_dyc_row_pane_g4

0x0006,

0xfbf6,	// (0x00053cf7) list_single_dyc_row_pane_g_ParamLimits

0xfbf6,	// (0x00053cf7) list_single_dyc_row_pane_g

0xd10b,	// (0x0005120c) list_single_dyc_row_text_pane_ParamLimits

0xd10b,	// (0x0005120c) list_single_dyc_row_text_pane

0x1129,	// (0x0004522a) bg_sp_fs_scroll_pane

0xe6d0,	// (0x000527d1) thumb_sp_fs_scroll_pane

0x1a9b,	// (0x00045b9c) list_medium_line_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_g1

0x1b77,	// (0x00045c78) list_medium_line_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t1

0x1a9b,	// (0x00045b9c) list_medium_line_x2_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_g1

0x1a9b,	// (0x00045b9c) list_medium_line_x2_g2_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x0005329a) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x0005329a) list_medium_line_x2_g

0x1b77,	// (0x00045c78) list_medium_line_x2_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t1

0x1a9b,	// (0x00045b9c) list_medium_line_x3_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x3_g1

0xe6d9,	// (0x000527da) list_medium_line_x3_g2_ParamLimits

0xe6d9,	// (0x000527da) list_medium_line_x3_g2

0x0001,

0xfc05,	// (0x00053d06) list_medium_line_x3_g_ParamLimits

0xfc05,	// (0x00053d06) list_medium_line_x3_g

0xe6e7,	// (0x000527e8) list_medium_line_x3_t1_ParamLimits

0xe6e7,	// (0x000527e8) list_medium_line_x3_t1

0xe6fb,	// (0x000527fc) thumb_sp_fs_scroll_pane_g1

0xe704,	// (0x00052805) thumb_sp_fs_scroll_pane_g2

0xe70d,	// (0x0005280e) thumb_sp_fs_scroll_pane_g3

0x0002,

0x08d6,	// (0x000449d7) thumb_sp_fs_scroll_pane_g

0xe6fb,	// (0x000527fc) bg_sp_fs_scroll_pane_g1

0xe704,	// (0x00052805) bg_sp_fs_scroll_pane_g2

0xe70d,	// (0x0005280e) bg_sp_fs_scroll_pane_g3

0x0002,

0x08d6,	// (0x000449d7) bg_sp_fs_scroll_pane_g

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t3_g4_g1

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t3_g4_g2

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t3_g4_g3

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x0005329f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x0005329f) list_medium_line_x2_t3_g4_g

0x1b77,	// (0x00045c78) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t3_g4_t1

0x1b77,	// (0x00045c78) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t3_g4_t2

0x1b77,	// (0x00045c78) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x00053293) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x00053293) list_medium_line_x2_t3_g4_t

0x1a9b,	// (0x00045b9c) list_medium_line_g2_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_g2_g1

0x1a9b,	// (0x00045b9c) list_medium_line_g2_g2_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x0005329a) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x0005329a) list_medium_line_g2_g

0x1b77,	// (0x00045c78) list_medium_line_g2_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_g2_t1

0x1a9b,	// (0x00045b9c) list_medium_line_t3_g2_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_t3_g2_g1

0x1a9b,	// (0x00045b9c) list_medium_line_t3_g2_g2_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x0005329a) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x0005329a) list_medium_line_t3_g2_g

0x1b77,	// (0x00045c78) list_medium_line_t3_g2_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t3_g2_t1

0x1b77,	// (0x00045c78) list_medium_line_t3_g2_t2_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t3_g2_t2

0x1b77,	// (0x00045c78) list_medium_line_t3_g2_t3_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x00053293) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x00053293) list_medium_line_t3_g2_t

0x1b6d,	// (0x00045c6e) list_medium_line_right_icon_g1

0xa671,	// (0x0004e772) list_medium_line_right_icon_t1

0x1a9b,	// (0x00045b9c) list_medium_line_t2_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_t2_g1

0x1b77,	// (0x00045c78) list_medium_line_t2_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t2_t1

0x1b77,	// (0x00045c78) list_medium_line_t2_t2_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t2_t2

0x0001,

0xf16e,	// (0x0005326f) list_medium_line_t2_t_ParamLimits

0xf16e,	// (0x0005326f) list_medium_line_t2_t

0x1a9b,	// (0x00045b9c) list_medium_line_t3_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_t3_g1

0x1b77,	// (0x00045c78) list_medium_line_t3_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t3_t1

0x1b77,	// (0x00045c78) list_medium_line_t3_t2_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t3_t2

0x1b77,	// (0x00045c78) list_medium_line_t3_t3_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x00053293) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x00053293) list_medium_line_t3_t

0x1a9b,	// (0x00045b9c) list_medium_line_g3_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_g3_g1

0x1a9b,	// (0x00045b9c) list_medium_line_g3_g2_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_g3_g2

0x1a9b,	// (0x00045b9c) list_medium_line_g3_g3_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x0005328c) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x0005328c) list_medium_line_g3_g

0x1b77,	// (0x00045c78) list_medium_line_g3_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_g3_t1

0x1a9b,	// (0x00045b9c) list_medium_line_t2_g3_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_t2_g3_g1

0x1a9b,	// (0x00045b9c) list_medium_line_t2_g3_g2_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_t2_g3_g2

0x1a9b,	// (0x00045b9c) list_medium_line_t2_g3_g3_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x0005328c) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x0005328c) list_medium_line_t2_g3_g

0x1b77,	// (0x00045c78) list_medium_line_t2_g3_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t2_g3_t1

0x1b77,	// (0x00045c78) list_medium_line_t2_g3_t2_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t2_g3_t2

0x0001,

0xf16e,	// (0x0005326f) list_medium_line_t2_g3_t_ParamLimits

0xf16e,	// (0x0005326f) list_medium_line_t2_g3_t

0x1a9b,	// (0x00045b9c) list_medium_line_t3_g3_g1_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_t3_g3_g1

0x1a9b,	// (0x00045b9c) list_medium_line_t3_g3_g2_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_t3_g3_g2

0x1a9b,	// (0x00045b9c) list_medium_line_t3_g3_g3_ParamLimits

0x1a9b,	// (0x00045b9c) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x0005328c) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x0005328c) list_medium_line_t3_g3_g

0x1b77,	// (0x00045c78) list_medium_line_t3_g3_t1_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t3_g3_t1

0x1b77,	// (0x00045c78) list_medium_line_t3_g3_t2_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t3_g3_t2

0x1b77,	// (0x00045c78) list_medium_line_t3_g3_t3_ParamLimits

0x1b77,	// (0x00045c78) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x00053293) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x00053293) list_medium_line_t3_g3_t

0x1b6d,	// (0x00045c6e) list_medium_line_right_iconx2_g1

0x1b6d,	// (0x00045c6e) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x0005318d) list_medium_line_right_iconx2_g

0xa671,	// (0x0004e772) list_medium_line_right_iconx2_t1

0x1b6d,	// (0x00045c6e) list_medium_line_t2_right_iconx2_g1

0x1b6d,	// (0x00045c6e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x0005318d) list_medium_line_t2_right_iconx2_g

0xa671,	// (0x0004e772) list_medium_line_t2_right_iconx2_t1

0xa671,	// (0x0004e772) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbd1,	// (0x00053cd2) list_medium_line_t2_right_iconx2_t

0xa671,	// (0x0004e772) list_medium_line_x4_t4_t1

0xa671,	// (0x0004e772) list_medium_line_x4_t4_t2

0xa671,	// (0x0004e772) list_medium_line_x4_t4_t3

0xa671,	// (0x0004e772) list_medium_line_x4_t4_t4

0x0003,

0xf25b,	// (0x0005335c) list_medium_line_x4_t4_t

0x7cd4,	// (0x0004bdd5) tport_appsw_pane_ParamLimits

0x7cd4,	// (0x0004bdd5) tport_appsw_pane

0x7cec,	// (0x0004bded) tport_contact_pane_ParamLimits

0x7cec,	// (0x0004bded) tport_contact_pane

0x7d04,	// (0x0004be05) tport_listscroll_pane_ParamLimits

0x7d04,	// (0x0004be05) tport_listscroll_pane

0x7d1e,	// (0x0004be1f) cell_tport_appsw_pane_ParamLimits

0x7d1e,	// (0x0004be1f) cell_tport_appsw_pane

0xac6c,	// (0x0004ed6d) tport_appsw_pane_g1_ParamLimits

0xac6c,	// (0x0004ed6d) tport_appsw_pane_g1

0xe716,	// (0x00052817) tport_contact_pane_g1

0xe71f,	// (0x00052820) tport_contact_pane_t1

0xe72d,	// (0x0005282e) tport_contact_pane_t2

0x0001,

0x08dd,	// (0x000449de) tport_contact_pane_t

0xe73b,	// (0x0005283c) list_tport_pane

0xe744,	// (0x00052845) scroll_pane_cp_030

0x7d66,	// (0x0004be67) cell_tport_appsw_pane_g1

0x7d76,	// (0x0004be77) cell_tport_appsw_pane_t1

0x7d84,	// (0x0004be85) grid_highlight_pane_cp019

0x7d8c,	// (0x0004be8d) list_tport_double_graphic_pane_ParamLimits

0x7d8c,	// (0x0004be8d) list_tport_double_graphic_pane

0x12ed,	// (0x000453ee) list_highlight_pane_cp023_ParamLimits

0x12ed,	// (0x000453ee) list_highlight_pane_cp023

0x7d99,	// (0x0004be9a) list_tport_double_graphic_pane_g1_ParamLimits

0x7d99,	// (0x0004be9a) list_tport_double_graphic_pane_g1

0x7da6,	// (0x0004bea7) list_tport_double_graphic_pane_t1_ParamLimits

0x7da6,	// (0x0004bea7) list_tport_double_graphic_pane_t1

0x7dbb,	// (0x0004bebc) list_tport_double_graphic_pane_t2_ParamLimits

0x7dbb,	// (0x0004bebc) list_tport_double_graphic_pane_t2

0x0001,

0xfc11,	// (0x00053d12) list_tport_double_graphic_pane_t_ParamLimits

0xfc11,	// (0x00053d12) list_tport_double_graphic_pane_t

0x1129,	// (0x0004522a) main_cale_note_pane

0x5f16,	// (0x0004a017) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5f16,	// (0x0004a017) cell_vitu2_function_top_wide_pane_cp01

0x78bf,	// (0x0004b9c0) wait_bar_pane_cp05_ParamLimits

0x12ed,	// (0x000453ee) listscroll_cmail_pane

0xe755,	// (0x00052856) list_cmail_pane

0x7dcd,	// (0x0004bece) list_cmail_body_pane

0x7de3,	// (0x0004bee4) list_single_cmail_header_caption_pane

0x7dfa,	// (0x0004befb) list_single_cmail_header_detail_pane_ParamLimits

0x7dfa,	// (0x0004befb) list_single_cmail_header_detail_pane

0xe778,	// (0x00052879) list_single_cmail_header_caption_pane_t1

0x0e68,	// (0x00044f69) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0e68,	// (0x00044f69) list_single_cmail_header_detail_pane_g1

0xd130,	// (0x00051231) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd130,	// (0x00051231) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc16,	// (0x00053d17) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc16,	// (0x00053d17) list_single_cmail_header_detail_pane_g

0x0e80,	// (0x00044f81) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0e80,	// (0x00044f81) list_single_cmail_header_detail_pane_t1

0x0ebe,	// (0x00044fbf) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0ebe,	// (0x00044fbf) list_single_cmail_header_editor_pane_bg

0xe269,	// (0x0005236a) list_cmail_body_pane_g1

0xe79c,	// (0x0005289d) list_cmail_body_pane_t1

0xd47b,	// (0x0005157c) list_single_cmail_header_editor_pane_bg_g1

0xa367,	// (0x0004e468) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd48b,	// (0x0005158c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd483,	// (0x00051584) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd7d9,	// (0x000518da) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd4ab,	// (0x000515ac) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd49b,	// (0x0005159c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd4a3,	// (0x000515a4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa347,	// (0x0004e448) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7e28,	// (0x0004bf29) calenote_gesture_pane_ParamLimits

0x7e28,	// (0x0004bf29) calenote_gesture_pane

0x7e48,	// (0x0004bf49) calenote_window_pane_ParamLimits

0x7e48,	// (0x0004bf49) calenote_window_pane

0xe7aa,	// (0x000528ab) popup_note_window_cp01

0x7e64,	// (0x0004bf65) calenote_swipe_1_pane_ParamLimits

0x7e64,	// (0x0004bf65) calenote_swipe_1_pane

0x7b18,	// (0x0004bc19) calenote_swipe_2_pane_ParamLimits

0x7b18,	// (0x0004bc19) calenote_swipe_2_pane

0xe5b6,	// (0x000526b7) calenote_swipe_1_pane_g1_ParamLimits

0xe5b6,	// (0x000526b7) calenote_swipe_1_pane_g1

0xe7bc,	// (0x000528bd) calenote_swipe_1_pane_g2_ParamLimits

0xe7bc,	// (0x000528bd) calenote_swipe_1_pane_g2

0x0001,

0xfc22,	// (0x00053d23) calenote_swipe_1_pane_g_ParamLimits

0xfc22,	// (0x00053d23) calenote_swipe_1_pane_g

0xe7c8,	// (0x000528c9) calenote_swipe_1_pane_t1_ParamLimits

0xe7c8,	// (0x000528c9) calenote_swipe_1_pane_t1

0xe5b6,	// (0x000526b7) calenote_swipe_2_pane_g1_ParamLimits

0xe5b6,	// (0x000526b7) calenote_swipe_2_pane_g1

0xe7e7,	// (0x000528e8) calenote_swipe_2_pane_g2_ParamLimits

0xe7e7,	// (0x000528e8) calenote_swipe_2_pane_g2

0x0001,

0xfc27,	// (0x00053d28) calenote_swipe_2_pane_g_ParamLimits

0xfc27,	// (0x00053d28) calenote_swipe_2_pane_g

0xe7f3,	// (0x000528f4) calenote_swipe_2_pane_t1_ParamLimits

0xe7f3,	// (0x000528f4) calenote_swipe_2_pane_t1

0x1129,	// (0x0004522a) main_mup_navstr_pane

0x4f0b,	// (0x0004900c) main_mup3_pane_t7_ParamLimits

0x4f0b,	// (0x0004900c) main_mup3_pane_t7

0xcca6,	// (0x00050da7) main_mp4_pane_g6_ParamLimits

0xcca6,	// (0x00050da7) main_mp4_pane_g6

0xcec4,	// (0x00050fc5) main_image3_pane_t4_ParamLimits

0xcec4,	// (0x00050fc5) main_image3_pane_t4

0x7e79,	// (0x0004bf7a) popup_navstr_preview_pane_ParamLimits

0x7e79,	// (0x0004bf7a) popup_navstr_preview_pane

0x7e8d,	// (0x0004bf8e) scroll_navstr_pane_ParamLimits

0x7e8d,	// (0x0004bf8e) scroll_navstr_pane

0x1129,	// (0x0004522a) bg_popup_preview_window_pane_cp04

0xe81a,	// (0x0005291b) popup_navstr_preview_pane_t1

0x7ea1,	// (0x0004bfa2) scroll_navstr_pane_g1_ParamLimits

0x7ea1,	// (0x0004bfa2) scroll_navstr_pane_g1

0x7eb5,	// (0x0004bfb6) scroll_navstr_pane_t1_ParamLimits

0x7eb5,	// (0x0004bfb6) scroll_navstr_pane_t1

0xe7b3,	// (0x000528b4) bg_button_pane_cp014

0xe7b3,	// (0x000528b4) bg_button_pane_cp030

0x79f1,	// (0x0004baf2) list_double_fisheye_pane_g4_ParamLimits

0x79f1,	// (0x0004baf2) list_double_fisheye_pane_g4

0x79fd,	// (0x0004bafe) list_double_fisheye_pane_g5_ParamLimits

0x79fd,	// (0x0004bafe) list_double_fisheye_pane_g5

0xe764,	// (0x00052865) sp_fs_scroll_pane_cp03

0xe682,	// (0x00052783) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe68e,	// (0x0005278f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbd6,	// (0x00053cd7) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7c04,	// (0x0004bd05) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe770,	// (0x00052871) sp_fs_scroll_pane_cp02

0xa08c,	// (0x0004e18d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa08c,	// (0x0004e18d) popup_sp_fs_calendar_preview_list_single_pane

0x1129,	// (0x0004522a) main_cam6_pano_pane

0x12ed,	// (0x000453ee) main_mup3_pane_ParamLimits

0x1129,	// (0x0004522a) main_phacti_pane

0x7792,	// (0x0004b893) bg_button_pane_cp11

0x77ac,	// (0x0004b8ad) main_mobtv_info_pane_g2_ParamLimits

0x77ac,	// (0x0004b8ad) main_mobtv_info_pane_g2

0x0001,

0xfb3b,	// (0x00053c3c) main_mobtv_info_pane_g_ParamLimits

0xfb3b,	// (0x00053c3c) main_mobtv_info_pane_g

0x1b77,	// (0x00045c78) sc_clock_pane_t5_ParamLimits

0x1b77,	// (0x00045c78) sc_clock_pane_t5

0xac6c,	// (0x0004ed6d) main_radioblah_pane_g1_ParamLimits

0xac7a,	// (0x0004ed7b) main_radioblah_pane_t3_ParamLimits

0xac7a,	// (0x0004ed7b) main_radioblah_pane_t3

0xac7a,	// (0x0004ed7b) main_radioblah_pane_t4_ParamLimits

0xac7a,	// (0x0004ed7b) main_radioblah_pane_t4

0x12ed,	// (0x000453ee) main_radioblah_text_pane_ParamLimits

0x12ed,	// (0x000453ee) main_radioblah_text_pane

0xe4ae,	// (0x000525af) main_radioblah_info_pane_g1_ParamLimits

0xe4f2,	// (0x000525f3) main_radioblah_info_pane_t4_ParamLimits

0xe4f2,	// (0x000525f3) main_radioblah_info_pane_t4

0x12ed,	// (0x000453ee) main_sp_fs_calendar_pane

0x7ecc,	// (0x0004bfcd) main_phacti_pane_g1

0x7ed4,	// (0x0004bfd5) phacti_note_pane_ParamLimits

0x7ed4,	// (0x0004bfd5) phacti_note_pane

0xe831,	// (0x00052932) phacti_term_pane_ParamLimits

0xe831,	// (0x00052932) phacti_term_pane

0xe846,	// (0x00052947) phacti_note_pane_t1_ParamLimits

0xe846,	// (0x00052947) phacti_note_pane_t1

0xd160,	// (0x00051261) phacti_term_pane_g1

0xd168,	// (0x00051269) phacti_term_pane_t1_ParamLimits

0xd168,	// (0x00051269) phacti_term_pane_t1

0xe85d,	// (0x0005295e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe865,	// (0x00052966) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0909,	// (0x00044a0a) popup_sp_fs_calendar_preview_list_single_pane_g

0xe86d,	// (0x0005296e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe86d,	// (0x0005296e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe883,	// (0x00052984) aid_popup_sp_fs_bg_corner_pane

0x1b6d,	// (0x00045c6e) popup_sp_fs_calendar_preview_bg_pane_g1

0x1129,	// (0x0004522a) popup_sp_fs_calendar_preview_bg_pane

0xe88b,	// (0x0005298c) popup_sp_fs_calendar_preview_list_pane

0xe893,	// (0x00052994) bg_main_sp_fs_cale_pane_ParamLimits

0xe893,	// (0x00052994) bg_main_sp_fs_cale_pane

0xe8ab,	// (0x000529ac) listscroll_cale_mrui_pane_ParamLimits

0xe8ab,	// (0x000529ac) listscroll_cale_mrui_pane

0xc790,	// (0x00050891) listscroll_sp_fs_schedule_track_pane

0xd19b,	// (0x0005129c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd19b,	// (0x0005129c) main_sp_fs_ctrlbar_pane_cp01

0xc790,	// (0x00050891) main_sp_fs_ribbon_pane

0xd1b1,	// (0x000512b2) popup_sp_fs_cale_preview_window

0xd6a5,	// (0x000517a6) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd6a5,	// (0x000517a6) list_single_sp_fs_schedule_track_pane

0xea94,	// (0x00052b95) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xea94,	// (0x00052b95) bg_sp_fs_highlight_list_pane_cp03

0xea88,	// (0x00052b89) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xea88,	// (0x00052b89) list_single_sp_fs_schedule_track_pane_g1

0xea88,	// (0x00052b89) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xea88,	// (0x00052b89) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc31,	// (0x00053d32) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc31,	// (0x00053d32) list_single_sp_fs_schedule_track_pane_g

0x7ee8,	// (0x0004bfe9) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7ee8,	// (0x0004bfe9) list_single_sp_fs_schedule_track_pane_t1

0x7efa,	// (0x0004bffb) sp_fs_schedule_track_pane_ParamLimits

0x7efa,	// (0x0004bffb) sp_fs_schedule_track_pane

0xc798,	// (0x00050899) sp_fs_schedule_track_pane_g1

0xc798,	// (0x00050899) sp_fs_schedule_track_pane_g2

0xc798,	// (0x00050899) sp_fs_schedule_track_pane_g3

0xc798,	// (0x00050899) sp_fs_schedule_track_pane_g4

0xc798,	// (0x00050899) sp_fs_schedule_track_pane_g5

0x0004,

0xf7d6,	// (0x000538d7) sp_fs_schedule_track_pane_g

0xc798,	// (0x00050899) bg_sp_fs_schedule_viewer_highlight_g1

0xc798,	// (0x00050899) bg_sp_fs_schedule_viewer_highlight_g2

0xc798,	// (0x00050899) bg_sp_fs_schedule_viewer_highlight_g3

0xc798,	// (0x00050899) bg_sp_fs_schedule_viewer_highlight_g4

0xc798,	// (0x00050899) bg_sp_fs_schedule_viewer_highlight_g5

0xc798,	// (0x00050899) bg_sp_fs_schedule_viewer_highlight_g6

0xc798,	// (0x00050899) bg_sp_fs_schedule_viewer_highlight_g7

0xc798,	// (0x00050899) bg_sp_fs_schedule_viewer_highlight_g8

0xc798,	// (0x00050899) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc36,	// (0x00053d37) bg_sp_fs_schedule_viewer_highlight_g

0xc790,	// (0x00050891) bg_main_sp_fs_ribbon_pane

0xc798,	// (0x00050899) main_sp_fs_ribbon_pane_g1

0xe8c3,	// (0x000529c4) main_sp_fs_ribbon_pane_t1

0xe8c3,	// (0x000529c4) main_sp_fs_ribbon_pane_t2

0xe8c3,	// (0x000529c4) main_sp_fs_ribbon_pane_t3

0x0002,

0x0926,	// (0x00044a27) main_sp_fs_ribbon_pane_t

0xc790,	// (0x00050891) main_sp_fs_ribbon_scheduler_pane

0xc798,	// (0x00050899) bg_main_sp_fs_ribbon_pane_g1

0xc798,	// (0x00050899) bg_main_sp_fs_ribbon_pane_g2

0xc798,	// (0x00050899) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf6ae,	// (0x000537af) bg_main_sp_fs_ribbon_pane_g

0xc798,	// (0x00050899) main_sp_fs_ribbon_scheduler_pane_g1

0xc798,	// (0x00050899) main_sp_fs_ribbon_scheduler_pane_g2

0xc798,	// (0x00050899) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf6ae,	// (0x000537af) main_sp_fs_ribbon_scheduler_pane_g

0xe8d1,	// (0x000529d2) list_cale_mrui_pane

0x7f06,	// (0x0004c007) sp_fs_scroll_pane_cp07_ParamLimits

0x7f06,	// (0x0004c007) sp_fs_scroll_pane_cp07

0xea94,	// (0x00052b95) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xea94,	// (0x00052b95) bg_sp_fs_schedule_viewer_highlight

0xc790,	// (0x00050891) list_single_sp_fs_schedule_track_pane_cp01

0xc790,	// (0x00050891) list_sp_fs_schedule_track_pane

0xe8de,	// (0x000529df) sp_fs_scroll_pane_cp06_ParamLimits

0xe8de,	// (0x000529df) sp_fs_scroll_pane_cp06

0x1b6d,	// (0x00045c6e) bgmain_sp_fs_calendar_pane_g1

0x0ed7,	// (0x00044fd8) list_single_cale_mrui_pane_ParamLimits

0x0ed7,	// (0x00044fd8) list_single_cale_mrui_pane

0xd1c3,	// (0x000512c4) list_single_cale_mrui_row_pane_ParamLimits

0xd1c3,	// (0x000512c4) list_single_cale_mrui_row_pane

0xd1d0,	// (0x000512d1) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd1d0,	// (0x000512d1) list_single_cale_mrui_row_pane_g1

0xd208,	// (0x00051309) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd208,	// (0x00051309) list_single_cale_mrui_row_pane_t1

0x0ef8,	// (0x00044ff9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0ef8,	// (0x00044ff9) list_single_cale_mrui_row_pane_t2

0xd21a,	// (0x0005131b) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd21a,	// (0x0005131b) list_single_cale_mrui_row_pane_t3

0xd249,	// (0x0005134a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd249,	// (0x0005134a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc50,	// (0x00053d51) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc50,	// (0x00053d51) list_single_cale_mrui_row_pane_t

0x0f60,	// (0x00045061) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0f60,	// (0x00045061) list_single_cmail_header_editor_pane_bg_cp01

0x0f8e,	// (0x0004508f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0f8e,	// (0x0004508f) list_single_cmail_header_editor_pane_bg_cp02

0xe8ff,	// (0x00052a00) main_radioblah_text_pane_t1_ParamLimits

0xe8ff,	// (0x00052a00) main_radioblah_text_pane_t1

0xe919,	// (0x00052a1a) cam6_indi_pane_cp01

0xe921,	// (0x00052a22) cam6_mode_pane_cp01

0xe929,	// (0x00052a2a) cam6_pano_pane

0xe932,	// (0x00052a33) cam6_zoom_pane_cp01

0xe93a,	// (0x00052a3b) cam6_pano_image_pane

0xe945,	// (0x00052a46) cam6_pano_pane_g1

0xe269,	// (0x0005236a) cam6_pano_pane_g2

0xe94e,	// (0x00052a4f) cam6_pano_pane_g3

0xe957,	// (0x00052a58) cam6_pano_pane_g4

0xca2a,	// (0x00050b2b) cam6_pano_pane_g5

0xe960,	// (0x00052a61) cam6_pano_pane_g6

0xe96a,	// (0x00052a6b) cam6_pano_pane_g7

0xe972,	// (0x00052a73) cam6_pano_pane_g8

0xe97b,	// (0x00052a7c) cam6_pano_pane_g9

0x0008,

0xfc59,	// (0x00053d5a) cam6_pano_pane_g

0x1129,	// (0x0004522a) main_browser_tag_pane

0xe812,	// (0x00052913) grid_navstr_albumart_pane

0xe986,	// (0x00052a87) cell_navstr_albumart_pane_ParamLimits

0xe986,	// (0x00052a87) cell_navstr_albumart_pane

0xe9a6,	// (0x00052aa7) cell_navstr_albumart_pane_g1

0xe9ae,	// (0x00052aaf) cell_navstr_albumart_pane_g2

0xe9b6,	// (0x00052ab7) cell_navstr_albumart_pane_g3

0xe9be,	// (0x00052abf) cell_navstr_albumart_pane_g4

0x0003,

0x0950,	// (0x00044a51) cell_navstr_albumart_pane_g

0x7f22,	// (0x0004c023) bt_list_pane_ParamLimits

0x7f22,	// (0x0004c023) bt_list_pane

0x7f36,	// (0x0004c037) bt_list_pane_t1

0x7f45,	// (0x0004c046) bt_list_pane_t2

0x0001,

0xfc6c,	// (0x00053d6d) bt_list_pane_t

0x1129,	// (0x0004522a) main_cale_prevew_pane

0x7f54,	// (0x0004c055) popup_cale_preview_window_ParamLimits

0x7f54,	// (0x0004c055) popup_cale_preview_window

0x12ed,	// (0x000453ee) bg_popup_preview_window_pane_cp05_ParamLimits

0x12ed,	// (0x000453ee) bg_popup_preview_window_pane_cp05

0xe9c6,	// (0x00052ac7) list_cale_preview_pane_ParamLimits

0xe9c6,	// (0x00052ac7) list_cale_preview_pane

0x7f6d,	// (0x0004c06e) list_double_cale_preview_pane_ParamLimits

0x7f6d,	// (0x0004c06e) list_double_cale_preview_pane

0xd4b3,	// (0x000515b4) list_single_cale_preview_pane_ParamLimits

0xd4b3,	// (0x000515b4) list_single_cale_preview_pane

0x7f7f,	// (0x0004c080) list_single_cale_preview_pane_g1

0x7f87,	// (0x0004c088) list_single_cale_preview_pane_t1_ParamLimits

0x7f87,	// (0x0004c088) list_single_cale_preview_pane_t1

0x7f9c,	// (0x0004c09d) list_double_cale_preview_pane_g1

0x7fa4,	// (0x0004c0a5) list_double_cale_preview_pane_t1_ParamLimits

0x7fa4,	// (0x0004c0a5) list_double_cale_preview_pane_t1

0x7fb9,	// (0x0004c0ba) list_double_cale_preview_pane_t2_ParamLimits

0x7fb9,	// (0x0004c0ba) list_double_cale_preview_pane_t2

0x0001,

0xfc71,	// (0x00053d72) list_double_cale_preview_pane_t_ParamLimits

0xfc71,	// (0x00053d72) list_double_cale_preview_pane_t

0x1129,	// (0x0004522a) main_ezdial_pane

0x12ed,	// (0x000453ee) main_sp_fs_email_pane_ParamLimits

0x7b74,	// (0x0004bc75) cmail_ddmenu_btn01_pane_ParamLimits

0x7b74,	// (0x0004bc75) cmail_ddmenu_btn01_pane

0x7b87,	// (0x0004bc88) cmail_ddmenu_btn02_pane_ParamLimits

0x7b87,	// (0x0004bc88) cmail_ddmenu_btn02_pane

0x7baa,	// (0x0004bcab) cmail_ddmenu_btn03_pane_ParamLimits

0x7baa,	// (0x0004bcab) cmail_ddmenu_btn03_pane

0x7c43,	// (0x0004bd44) main_sp_fs_ctrlbar_pane_ParamLimits

0x7c67,	// (0x0004bd68) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7dcd,	// (0x0004bece) list_cmail_body_pane_ParamLimits

0xe786,	// (0x00052887) bg_button_pane_cp12

0xe78f,	// (0x00052890) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe78f,	// (0x00052890) list_single_cmail_header_detail_pane_g3

0xd13c,	// (0x0005123d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd13c,	// (0x0005123d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc1d,	// (0x00053d1e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc1d,	// (0x00053d1e) list_single_cmail_header_detail_pane_t

0xd17d,	// (0x0005127e) phacti_term_pane_t2_ParamLimits

0xd17d,	// (0x0005127e) phacti_term_pane_t2

0x0001,

0xfc2c,	// (0x00053d2d) phacti_term_pane_t_ParamLimits

0xfc2c,	// (0x00053d2d) phacti_term_pane_t

0xe9d2,	// (0x00052ad3) aid_size_list_single_double

0x7fd1,	// (0x0004c0d2) popup_ezdial_listscroll_window

0xe9de,	// (0x00052adf) popup_number_entry_window_cp01

0xa144,	// (0x0004e245) bg_popup_call_pane_cp09

0xe9eb,	// (0x00052aec) ezdial_list_pane

0xe9f3,	// (0x00052af4) scroll_pane_cp23

0xac8e,	// (0x0004ed8f) bg_button_pane_cp028_ParamLimits

0xac8e,	// (0x0004ed8f) bg_button_pane_cp028

0x7fe8,	// (0x0004c0e9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7fe8,	// (0x0004c0e9) cmail_ddmenu_btn01_pane_g1

0x7ff4,	// (0x0004c0f5) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x7ff4,	// (0x0004c0f5) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc76,	// (0x00053d77) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc76,	// (0x00053d77) cmail_ddmenu_btn01_pane_g

0xe9fb,	// (0x00052afc) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9fb,	// (0x00052afc) cmail_ddmenu_btn01_pane_t1

0xac8e,	// (0x0004ed8f) bg_button_pane_cp029_ParamLimits

0xac8e,	// (0x0004ed8f) bg_button_pane_cp029

0x8000,	// (0x0004c101) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8000,	// (0x0004c101) cmail_ddmenu_btn02_pane_g1

0x8018,	// (0x0004c119) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8018,	// (0x0004c119) cmail_ddmenu_btn02_pane_t1

0x12ed,	// (0x000453ee) bg_button_pane_cp031_ParamLimits

0x12ed,	// (0x000453ee) bg_button_pane_cp031

0x8000,	// (0x0004c101) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8000,	// (0x0004c101) cmail_ddmenu_btn03_pane_g1

0x8018,	// (0x0004c119) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8018,	// (0x0004c119) cmail_ddmenu_btn03_pane_t1

0x1b77,	// (0x00045c78) cell_dialer2_keypad_pane_t1_ParamLimits

0xca68,	// (0x00050b69) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xca68,	// (0x00050b69) cell_dialer2_keypad_pane_t1_copy1

0x75b5,	// (0x0004b6b6) ncimui_group_button_pane

0x12ed,	// (0x000453ee) main_sp_fs_calendar_pane_ParamLimits

0x7de3,	// (0x0004bee4) list_single_cmail_header_caption_pane_ParamLimits

0xd192,	// (0x00051293) aid_recal_txt_sm_pane

0x1129,	// (0x0004522a) mian_recal_day_pane

0xd1b1,	// (0x000512b2) popup_sp_fs_cale_preview_window_ParamLimits

0xea10,	// (0x00052b11) list_recal_day_pane

0xd293,	// (0x00051394) list_single_recal_day_pane_ParamLimits

0xd293,	// (0x00051394) list_single_recal_day_pane

0xea37,	// (0x00052b38) list_single_recal_day_pane_g1_ParamLimits

0xea37,	// (0x00052b38) list_single_recal_day_pane_g1

0xd2a5,	// (0x000513a6) list_single_recal_day_pane_g2_ParamLimits

0xd2a5,	// (0x000513a6) list_single_recal_day_pane_g2

0xd2b1,	// (0x000513b2) list_single_recal_day_pane_g3_ParamLimits

0xd2b1,	// (0x000513b2) list_single_recal_day_pane_g3

0x0fae,	// (0x000450af) list_single_recal_day_pane_g4_ParamLimits

0x0fae,	// (0x000450af) list_single_recal_day_pane_g4

0xd2bd,	// (0x000513be) list_single_recal_day_pane_g5_ParamLimits

0xd2bd,	// (0x000513be) list_single_recal_day_pane_g5

0xd2c9,	// (0x000513ca) list_single_recal_day_pane_g6_ParamLimits

0xd2c9,	// (0x000513ca) list_single_recal_day_pane_g6

0x0004,

0xfc85,	// (0x00053d86) list_single_recal_day_pane_g_ParamLimits

0xfc85,	// (0x00053d86) list_single_recal_day_pane_g

0xd2dd,	// (0x000513de) list_single_recal_day_pane_t1

0xd2ef,	// (0x000513f0) list_single_recal_day_pane_t2

0x0001,

0xfc90,	// (0x00053d91) list_single_recal_day_pane_t

0x803c,	// (0x0004c13d) ncimui_query_button_pane_ParamLimits

0x803c,	// (0x0004c13d) ncimui_query_button_pane

0x804c,	// (0x0004c14d) ncimui_query_button_pane_t1_ParamLimits

0x804c,	// (0x0004c14d) ncimui_query_button_pane_t1

0xea43,	// (0x00052b44) ncimui_query_button_pane_t2_ParamLimits

0xea43,	// (0x00052b44) ncimui_query_button_pane_t2

0x0001,

0xfc95,	// (0x00053d96) ncimui_query_button_pane_t_ParamLimits

0xfc95,	// (0x00053d96) ncimui_query_button_pane_t

0x805f,	// (0x0004c160) query_button_pane_ParamLimits

0x805f,	// (0x0004c160) query_button_pane

0x1129,	// (0x0004522a) bg_button_pane_cp0028

0xea56,	// (0x00052b57) query_button_pane_t1

0x4248,	// (0x00048349) main_tport_pane_ParamLimits

0x7c91,	// (0x0004bd92) bg_popup_window_pane_cp01_ParamLimits

0x7c91,	// (0x0004bd92) bg_popup_window_pane_cp01

0x7cac,	// (0x0004bdad) heading_pane_cp08_ParamLimits

0x7cac,	// (0x0004bdad) heading_pane_cp08

0x7cbf,	// (0x0004bdc0) heading_pane_cp07_ParamLimits

0x7cbf,	// (0x0004bdc0) heading_pane_cp07

0x7d66,	// (0x0004be67) cell_tport_appsw_pane_g2

0x0002,

0xfc0a,	// (0x00053d0b) cell_tport_appsw_pane_g

0xad29,	// (0x0004ee2a) input_candi_list_open_g1

0xa510,	// (0x0004e611) list_cale_time_pane_g6_ParamLimits

0xa510,	// (0x0004e611) list_cale_time_pane_g6

0x4855,	// (0x00048956) aid_size_touch_calib_1_ParamLimits

0x4855,	// (0x00048956) aid_size_touch_calib_1

0x4867,	// (0x00048968) aid_size_touch_calib_2_ParamLimits

0x4867,	// (0x00048968) aid_size_touch_calib_2

0x487f,	// (0x00048980) aid_size_touch_calib_3_ParamLimits

0x487f,	// (0x00048980) aid_size_touch_calib_3

0x489d,	// (0x0004899e) aid_size_touch_calib_4_ParamLimits

0x489d,	// (0x0004899e) aid_size_touch_calib_4

0x48b5,	// (0x000489b6) main_touch_calib_button_group_pane_ParamLimits

0x48b5,	// (0x000489b6) main_touch_calib_button_group_pane

0x48cd,	// (0x000489ce) main_touch_calib_pane_g1_ParamLimits

0x48df,	// (0x000489e0) main_touch_calib_pane_g2_ParamLimits

0x48f1,	// (0x000489f2) main_touch_calib_pane_g3_ParamLimits

0x4903,	// (0x00048a04) main_touch_calib_pane_g4_ParamLimits

0xf65c,	// (0x0005375d) main_touch_calib_pane_g_ParamLimits

0x4915,	// (0x00048a16) main_touch_calib_pane_t1_ParamLimits

0x492f,	// (0x00048a30) main_touch_calib_pane_t2_ParamLimits

0x4949,	// (0x00048a4a) main_touch_calib_pane_t3_ParamLimits

0x495d,	// (0x00048a5e) main_touch_calib_pane_t4_ParamLimits

0x4971,	// (0x00048a72) main_touch_calib_pane_t5_ParamLimits

0xf665,	// (0x00053766) main_touch_calib_pane_t_ParamLimits

0xc7f8,	// (0x000508f9) list_single_fp_cale_pane_g3_ParamLimits

0xc7f8,	// (0x000508f9) list_single_fp_cale_pane_g3

0x12ed,	// (0x000453ee) bg_button_pane_cp012_ParamLimits

0x12ed,	// (0x000453ee) bg_vkb2_func_pane_cp03_ParamLimits

0x67cf,	// (0x0004a8d0) cell_vitu2_function_top_pane_g1_ParamLimits

0x12ed,	// (0x000453ee) bg_vkb2_func_pane_cp04_ParamLimits

0x7540,	// (0x0004b641) main_ncimui_button_group_pane_ParamLimits

0x7540,	// (0x0004b641) main_ncimui_button_group_pane

0x75a0,	// (0x0004b6a1) main_ncimui_pane_t3_ParamLimits

0x75a0,	// (0x0004b6a1) main_ncimui_pane_t3

0xe828,	// (0x00052929) phacti_button_group_pane

0xe9d2,	// (0x00052ad3) aid_size_list_single_double_ParamLimits

0x7fd1,	// (0x0004c0d2) popup_ezdial_listscroll_window_ParamLimits

0xe9de,	// (0x00052adf) popup_number_entry_window_cp01_ParamLimits

0x8072,	// (0x0004c173) phacti_button_pane_ParamLimits

0x8072,	// (0x0004c173) phacti_button_pane

0x1129,	// (0x0004522a) bg_button_pane_cp14

0xea64,	// (0x00052b65) phacti_button_pane_t1

0x8083,	// (0x0004c184) main_touch_calib_button_pane_ParamLimits

0x8083,	// (0x0004c184) main_touch_calib_button_pane

0x1bdf,	// (0x00045ce0) bg_button_pane_cp18_ParamLimits

0x1bdf,	// (0x00045ce0) bg_button_pane_cp18

0xea72,	// (0x00052b73) main_touch_calib_button_pane_t1_ParamLimits

0xea72,	// (0x00052b73) main_touch_calib_button_pane_t1

0xeacd,	// (0x00052bce) main_touch_calib_button_pane_t2_ParamLimits

0xeacd,	// (0x00052bce) main_touch_calib_button_pane_t2

0x0001,

0xfc9a,	// (0x00053d9b) main_touch_calib_button_pane_t_ParamLimits

0xfc9a,	// (0x00053d9b) main_touch_calib_button_pane_t

0x1129,	// (0x0004522a) cell_ncimui_button_pane

0x1129,	// (0x0004522a) bg_button_pane_cp032

0xeaeb,	// (0x00052bec) cell_ncimui_button_pane_t1

0xcea4,	// (0x00050fa5) image3_infobar_pane_ParamLimits

0xcea4,	// (0x00050fa5) image3_infobar_pane

0x7912,	// (0x0004ba13) fs_bigclock_status_pane_ParamLimits

0x7912,	// (0x0004ba13) fs_bigclock_status_pane

0x791f,	// (0x0004ba20) main_fs_bigclock_clock_pane_ParamLimits

0x791f,	// (0x0004ba20) main_fs_bigclock_clock_pane

0x793d,	// (0x0004ba3e) main_fs_bigclock_indi_pane_ParamLimits

0x793d,	// (0x0004ba3e) main_fs_bigclock_indi_pane

0x796f,	// (0x0004ba70) main_fs_bigclock_swipe_pane_ParamLimits

0x796f,	// (0x0004ba70) main_fs_bigclock_swipe_pane

0x1129,	// (0x0004522a) main_fs_clock_dumped_data

0xe376,	// (0x00052477) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe376,	// (0x00052477) list_single_fs_bigclock_indicator_pane_g1

0xe392,	// (0x00052493) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe392,	// (0x00052493) list_single_fs_bigclock_indicator_pane_g2

0xe3ac,	// (0x000524ad) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3ac,	// (0x000524ad) list_single_fs_bigclock_indicator_pane_g3

0xe3c6,	// (0x000524c7) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3c6,	// (0x000524c7) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb6f,	// (0x00053c70) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb6f,	// (0x00053c70) list_single_fs_bigclock_indicator_pane_g

0xe3f1,	// (0x000524f2) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe3f1,	// (0x000524f2) list_single_fs_bigclock_indicator_pane_t1

0xe419,	// (0x0005251a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe419,	// (0x0005251a) list_single_fs_bigclock_indicator_pane_t2

0xe441,	// (0x00052542) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe441,	// (0x00052542) list_single_fs_bigclock_indicator_pane_t3

0xe469,	// (0x0005256a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe469,	// (0x0005256a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb7a,	// (0x00053c7b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb7a,	// (0x00053c7b) list_single_fs_bigclock_indicator_pane_t

0xeaf9,	// (0x00052bfa) image3_infobar_fav_pane_ParamLimits

0xeaf9,	// (0x00052bfa) image3_infobar_fav_pane

0xeb09,	// (0x00052c0a) image3_infobar_loc_pane_ParamLimits

0xeb09,	// (0x00052c0a) image3_infobar_loc_pane

0xeb1d,	// (0x00052c1e) image3_infobar_time_pane_ParamLimits

0xeb1d,	// (0x00052c1e) image3_infobar_time_pane

0x1b6d,	// (0x00045c6e) image3_infobar_time_pane_g1

0xeb2d,	// (0x00052c2e) image3_infobar_time_pane_t1

0x1b6d,	// (0x00045c6e) image3_infobar_loc_pane_g1

0xeb3b,	// (0x00052c3c) image3_infobar_loc_pane_g2

0x0001,

0xfc9f,	// (0x00053da0) image3_infobar_loc_pane_g

0xeb43,	// (0x00052c44) image3_infobar_loc_pane_t1

0x1b6d,	// (0x00045c6e) image3_infobar_fav_pane_g1

0xeb51,	// (0x00052c52) image3_infobar_fav_pane_g2

0x0001,

0xfca4,	// (0x00053da5) image3_infobar_fav_pane_g

0xeb59,	// (0x00052c5a) fs_bigclock_status_battery_pane

0xeb62,	// (0x00052c63) fs_bigclock_status_signal_pane

0xeb6b,	// (0x00052c6c) fs_bigclock_status_title_pane

0xeb74,	// (0x00052c75) fs_bigclock_status_signal_pane_g1

0xeb7d,	// (0x00052c7e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfca9,	// (0x00053daa) fs_bigclock_status_signal_pane_g

0xeb85,	// (0x00052c86) fs_bigclock_status_battery_pane_g1

0xeb8e,	// (0x00052c8f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcae,	// (0x00053daf) fs_bigclock_status_battery_pane_g

0xeb96,	// (0x00052c97) fs_bigclock_status_title_pane_t1

0x8098,	// (0x0004c199) main_fs_bigclock_clock_pane_g1

0x8098,	// (0x0004c199) main_fs_bigclock_clock_pane_g2

0x8098,	// (0x0004c199) main_fs_bigclock_clock_pane_g3

0x8098,	// (0x0004c199) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcb3,	// (0x00053db4) main_fs_bigclock_clock_pane_g

0x80ab,	// (0x0004c1ac) main_fs_bigclock_clock_pane_t1

0x80c5,	// (0x0004c1c6) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcbc,	// (0x00053dbd) main_fs_bigclock_clock_pane_t

0xeba4,	// (0x00052ca5) list_single_fs_bigclock_indicator_pane_ParamLimits

0xeba4,	// (0x00052ca5) list_single_fs_bigclock_indicator_pane

0xebb5,	// (0x00052cb6) list_single_fs_bigclock_pane_ParamLimits

0xebb5,	// (0x00052cb6) list_single_fs_bigclock_pane

0xebdb,	// (0x00052cdc) main_fs_bigclock_indicator_pane_t1

0xebea,	// (0x00052ceb) list_single_fs_bigclock_pane_g1

0xebf2,	// (0x00052cf3) list_single_fs_bigclock_pane_t1

0x1b6d,	// (0x00045c6e) main_fs_bigclock_swipe_pane_g1

0xec35,	// (0x00052d36) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfccd,	// (0x00053dce) main_fs_bigclock_swipe_pane_g

0xec3d,	// (0x00052d3e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec3d,	// (0x00052d3e) main_fs_bigclock_swipe_pane_t1

0x344a,	// (0x0004754b) call_type_pane_ParamLimits

0x1129,	// (0x0004522a) main_btmg_pane

0xd1fc,	// (0x000512fd) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd1fc,	// (0x000512fd) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc49,	// (0x00053d4a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc49,	// (0x00053d4a) list_single_cale_mrui_row_pane_g

0xd282,	// (0x00051383) list_recal_vselct_arw_lo_pane

0xea2f,	// (0x00052b30) list_recal_vselct_arw_up_pane

0xd28a,	// (0x0005138b) list_recal_vselct_pane

0x811f,	// (0x0004c220) btmg_button_pane

0x8129,	// (0x0004c22a) main_btmg_pane_g1

0x1129,	// (0x0004522a) bg_button_pane_cp044

0xec5a,	// (0x00052d5b) btmg_button_pane_t1

0xbf3f,	// (0x00050040) aid_listscroll_gen

0x12ed,	// (0x000453ee) main_cntbar_detail_pane

0xe74d,	// (0x0005284e) list_cmail_folder_pane

0xe764,	// (0x00052865) sp_fs_scroll_pane_cp03_ParamLimits

0x7de3,	// (0x0004bee4) list_single_fs_dyc_pane_cp01_ParamLimits

0x7de3,	// (0x0004bee4) list_single_fs_dyc_pane_cp01

0xec68,	// (0x00052d69) aid_size_cmail_indent

0xd301,	// (0x00051402) list_single_dyc_row_pane_cp01

0x8165,	// (0x0004c266) cntbar_detail_list_pane_ParamLimits

0x8165,	// (0x0004c266) cntbar_detail_list_pane

0x81b1,	// (0x0004c2b2) main_cntbar_detail_cont_pane_ParamLimits

0x81b1,	// (0x0004c2b2) main_cntbar_detail_cont_pane

0xe764,	// (0x00052865) scroll_pane_cp032_ParamLimits

0xe764,	// (0x00052865) scroll_pane_cp032

0x81c5,	// (0x0004c2c6) cntbar_detail_list_event_pane_ParamLimits

0x81c5,	// (0x0004c2c6) cntbar_detail_list_event_pane

0x8175,	// (0x0004c276) cntbar_detail_list_shct_pane

0xa3b5,	// (0x0004e4b6) aid_list_gen

0xec71,	// (0x00052d72) aid_scroll

0xec7a,	// (0x00052d7b) aid_size_touch_scroll_bar

0xec83,	// (0x00052d84) aid_list_double

0x81d5,	// (0x0004c2d6) aid_list_single

0x81d5,	// (0x0004c2d6) aid_list_single_lg

0xd30a,	// (0x0005140b) aid_list_z_g_a_sm

0xd312,	// (0x00051413) aid_list_z_g_d

0xd31a,	// (0x0005141b) aid_txt_z_prm

0xd328,	// (0x00051429) aid_txt_z_prm_cp01

0xd336,	// (0x00051437) aid_txt_z_sec

0x81de,	// (0x0004c2df) main_cntbar_detail_cont_pane_g1_ParamLimits

0x81de,	// (0x0004c2df) main_cntbar_detail_cont_pane_g1

0x81f2,	// (0x0004c2f3) main_cntbar_detail_cont_pane_g2_ParamLimits

0x81f2,	// (0x0004c2f3) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcd2,	// (0x00053dd3) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcd2,	// (0x00053dd3) main_cntbar_detail_cont_pane_g

0xec8c,	// (0x00052d8d) main_cntbar_detail_cont_pane_t1

0xec9a,	// (0x00052d9b) main_cntbar_detail_cont_pane_t2

0xeca8,	// (0x00052da9) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcd7,	// (0x00053dd8) main_cntbar_detail_cont_pane_t

0x8202,	// (0x0004c303) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8202,	// (0x0004c303) cell_cntbar_detail_list_shct_pane

0xecb6,	// (0x00052db7) cntbar_detail_list_shct_pane_g1

0xecbf,	// (0x00052dc0) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcde,	// (0x00053ddf) cntbar_detail_list_shct_pane_g

0x8216,	// (0x0004c317) cntbar_detail_list_event_pane_g1_ParamLimits

0x8216,	// (0x0004c317) cntbar_detail_list_event_pane_g1

0x8222,	// (0x0004c323) cntbar_detail_list_event_pane_g2_ParamLimits

0x8222,	// (0x0004c323) cntbar_detail_list_event_pane_g2

0x0005,

0xfce3,	// (0x00053de4) cntbar_detail_list_event_pane_g_ParamLimits

0xfce3,	// (0x00053de4) cntbar_detail_list_event_pane_g

0x828e,	// (0x0004c38f) cntbar_detail_list_event_pane_t1_ParamLimits

0x828e,	// (0x0004c38f) cntbar_detail_list_event_pane_t1

0x82a3,	// (0x0004c3a4) cntbar_detail_list_event_pane_t2_ParamLimits

0x82a3,	// (0x0004c3a4) cntbar_detail_list_event_pane_t2

0x0002,

0xfcf0,	// (0x00053df1) cntbar_detail_list_event_pane_t_ParamLimits

0xfcf0,	// (0x00053df1) cntbar_detail_list_event_pane_t

0x1b6d,	// (0x00045c6e) cell_cntbar_detail_list_shct_pane_g1

0xab5b,	// (0x0004ec5c) navi_pane_mv_g3

0x12ed,	// (0x000453ee) main_cntbar_detail_pane_ParamLimits

0x1129,	// (0x0004522a) main_notif_wgt_pane

0xcc30,	// (0x00050d31) aid_tch_main_mp4_pane_g4

0xce9c,	// (0x00050f9d) popup_slider_window_cp02

0xd278,	// (0x00051379) list_recal_day_event_pane

0x8133,	// (0x0004c234) cntbar_detail_btn_pane_ParamLimits

0x8133,	// (0x0004c234) cntbar_detail_btn_pane

0x814c,	// (0x0004c24d) cntbar_detail_btn_pane_cp01_ParamLimits

0x814c,	// (0x0004c24d) cntbar_detail_btn_pane_cp01

0x8175,	// (0x0004c276) cntbar_detail_list_shct_pane_ParamLimits

0x8185,	// (0x0004c286) cntbar_detail_pane_g1_ParamLimits

0x8185,	// (0x0004c286) cntbar_detail_pane_g1

0x8195,	// (0x0004c296) cntbar_detail_pane_t1_ParamLimits

0x8195,	// (0x0004c296) cntbar_detail_pane_t1

0x822e,	// (0x0004c32f) cntbar_detail_list_event_pane_g3_ParamLimits

0x822e,	// (0x0004c32f) cntbar_detail_list_event_pane_g3

0x8246,	// (0x0004c347) cntbar_detail_list_event_pane_g4_ParamLimits

0x8246,	// (0x0004c347) cntbar_detail_list_event_pane_g4

0x825e,	// (0x0004c35f) cntbar_detail_list_event_pane_g5_ParamLimits

0x825e,	// (0x0004c35f) cntbar_detail_list_event_pane_g5

0x8276,	// (0x0004c377) cntbar_detail_list_event_pane_g6_ParamLimits

0x8276,	// (0x0004c377) cntbar_detail_list_event_pane_g6

0x82b8,	// (0x0004c3b9) cntbar_detail_list_event_pane_t3_ParamLimits

0x82b8,	// (0x0004c3b9) cntbar_detail_list_event_pane_t3

0x82ca,	// (0x0004c3cb) popup_notif_wgt_window_ParamLimits

0x82ca,	// (0x0004c3cb) popup_notif_wgt_window

0x82e3,	// (0x0004c3e4) popup_submenu_window_cp01_ParamLimits

0x82e3,	// (0x0004c3e4) popup_submenu_window_cp01

0xa144,	// (0x0004e245) bg_popup_window_pane_cp10

0xecc8,	// (0x00052dc9) listscroll_notif_wgt_pane

0xecda,	// (0x00052ddb) list_notif_wgt_window

0xece3,	// (0x00052de4) scroll_pane_cp033

0x82f5,	// (0x0004c3f6) list_notif_wgt_row_pane_ParamLimits

0x82f5,	// (0x0004c3f6) list_notif_wgt_row_pane

0xecec,	// (0x00052ded) aid_size_list_notif_wgt_del

0xecf9,	// (0x00052dfa) list_notif_wgt_row_pane_g1

0xed05,	// (0x00052e06) list_notif_wgt_row_pane_g2

0xed14,	// (0x00052e15) list_notif_wgt_row_pane_g3

0x0002,

0xfcf7,	// (0x00053df8) list_notif_wgt_row_pane_g

0xed21,	// (0x00052e22) list_notif_wgt_row_pane_t1

0xed37,	// (0x00052e38) list_notif_wgt_row_pane_t2

0xed49,	// (0x00052e4a) list_notif_wgt_row_pane_t3

0x0002,

0xfcfe,	// (0x00053dff) list_notif_wgt_row_pane_t

0xd7e1,	// (0x000518e2) list_recal_day_event_pane_g1

0xed5b,	// (0x00052e5c) list_recal_day_event_pane_t1

0x1129,	// (0x0004522a) bg_button_pane_cp045

0x8305,	// (0x0004c406) cntbar_detail_btn_pane_t1

0xac8e,	// (0x0004ed8f) main_callh_pane_ParamLimits

0xac8e,	// (0x0004ed8f) main_callh_pane

0x1129,	// (0x0004522a) main_coverflow0_pane

0x1129,	// (0x0004522a) main_wgtman_pane

0x7987,	// (0x0004ba88) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7987,	// (0x0004ba88) main_fs_bigclock_unlock_btn_pane

0x7d5e,	// (0x0004be5f) bg_button_pane_cp16

0x7d6e,	// (0x0004be6f) cell_tport_appsw_pane_g3

0x8313,	// (0x0004c414) cf0_flow_pane_ParamLimits

0x8313,	// (0x0004c414) cf0_flow_pane

0xed6a,	// (0x00052e6b) listscroll_cf0_pane

0xed75,	// (0x00052e76) main_cf0_pane_g1

0x8328,	// (0x0004c429) main_cf0_pane_t1_ParamLimits

0x8328,	// (0x0004c429) main_cf0_pane_t1

0x833f,	// (0x0004c440) main_cf0_pane_t2_ParamLimits

0x833f,	// (0x0004c440) main_cf0_pane_t2

0x0001,

0xfd0a,	// (0x00053e0b) main_cf0_pane_t_ParamLimits

0xfd0a,	// (0x00053e0b) main_cf0_pane_t

0xed87,	// (0x00052e88) scroll_pane_cp11

0x8356,	// (0x0004c457) cf0_flow_pane_g1

0x835e,	// (0x0004c45f) cf0_flow_pane_g2

0x0001,

0xfd0f,	// (0x00053e10) cf0_flow_pane_g

0x8366,	// (0x0004c467) cf0_flow_pane_t1

0x1129,	// (0x0004522a) main_call6_pane

0x1129,	// (0x0004522a) main_calllock_pane

0x8374,	// (0x0004c475) call6_btn_grp_pane_ParamLimits

0x8374,	// (0x0004c475) call6_btn_grp_pane

0x838e,	// (0x0004c48f) call6_pane_g1_ParamLimits

0x838e,	// (0x0004c48f) call6_pane_g1

0x83a4,	// (0x0004c4a5) popup_call6_1st_window_ParamLimits

0x83a4,	// (0x0004c4a5) popup_call6_1st_window

0x83b5,	// (0x0004c4b6) popup_call6_2nd_window_ParamLimits

0x83b5,	// (0x0004c4b6) popup_call6_2nd_window

0x83c6,	// (0x0004c4c7) cell_call6_btn_pane_ParamLimits

0x83c6,	// (0x0004c4c7) cell_call6_btn_pane

0xa144,	// (0x0004e245) bg_popup_call2_in_pane_cp03

0xed92,	// (0x00052e93) popup_call6_1st_window_g1

0xed9a,	// (0x00052e9b) popup_call6_1st_window_g2

0xeda2,	// (0x00052ea3) popup_call6_1st_window_g3

0x0002,

0x0a01,	// (0x00044b02) popup_call6_1st_window_g

0xedaa,	// (0x00052eab) popup_call6_1st_window_t1

0xedb9,	// (0x00052eba) popup_call6_1st_window_t2

0xedc7,	// (0x00052ec8) popup_call6_1st_window_t3

0x0002,

0x0a08,	// (0x00044b09) popup_call6_1st_window_t

0xa144,	// (0x0004e245) bg_popup_call2_in_pane_cp04

0xedd5,	// (0x00052ed6) popup_call6_2nd_window_g1

0xeddd,	// (0x00052ede) popup_call6_2nd_window_g2

0xede5,	// (0x00052ee6) popup_call6_2nd_window_g3

0x0002,

0x0a0f,	// (0x00044b10) popup_call6_2nd_window_g

0xeded,	// (0x00052eee) popup_call6_2nd_window_t1

0x1129,	// (0x0004522a) bg_button_pane_cp15

0xedfc,	// (0x00052efd) cell_call6_btn_pane_g1

0xee05,	// (0x00052f06) cell_call6_btn_pane_t1

0x83da,	// (0x0004c4db) listscroll_wgtman_pane_ParamLimits

0x83da,	// (0x0004c4db) listscroll_wgtman_pane

0x83fb,	// (0x0004c4fc) wgtman_btn_pane_ParamLimits

0x83fb,	// (0x0004c4fc) wgtman_btn_pane

0xa96f,	// (0x0004ea70) aid_scroll_copy1

0xee14,	// (0x00052f15) list_wgtman_pane

0x843e,	// (0x0004c53f) wgtman_btn_pane_g1_ParamLimits

0x843e,	// (0x0004c53f) wgtman_btn_pane_g1

0x846a,	// (0x0004c56b) wgtman_btn_pane_t1_ParamLimits

0x846a,	// (0x0004c56b) wgtman_btn_pane_t1

0xee1e,	// (0x00052f1f) wgtman_btn_pane_t2_ParamLimits

0xee1e,	// (0x00052f1f) wgtman_btn_pane_t2

0x0001,

0xfd14,	// (0x00053e15) wgtman_btn_pane_t_ParamLimits

0xfd14,	// (0x00053e15) wgtman_btn_pane_t

0x84a7,	// (0x0004c5a8) listrow_wgtman_pane_ParamLimits

0x84a7,	// (0x0004c5a8) listrow_wgtman_pane

0x84ba,	// (0x0004c5bb) listrow_wgtman_pane_g1

0x84c7,	// (0x0004c5c8) listrow_wgtman_pane_g2

0x0001,

0xfd19,	// (0x00053e1a) listrow_wgtman_pane_g

0x0fc6,	// (0x000450c7) listrow_wgtman_pane_t1

0x0fde,	// (0x000450df) listrow_wgtman_pane_t2

0x0001,

0xfd1e,	// (0x00053e1f) listrow_wgtman_pane_t

0x1004,	// (0x00045105) wait_bar_pane_cp09

0xee35,	// (0x00052f36) main_calllock_btn_pane

0xee3f,	// (0x00052f40) main_calllock_pane_g1

0x1129,	// (0x0004522a) bg_button_pane_cp17

0xedfc,	// (0x00052efd) main_calllock_btn_pane_g1

0xee47,	// (0x00052f48) main_calllock_btn_pane_t1

0x1129,	// (0x0004522a) main_dialer3_pane

0x1129,	// (0x0004522a) main_fmrd2_pane

0x1b6d,	// (0x00045c6e) main_fs_bigclock_unlock_btn_pane_g1

0x84ed,	// (0x0004c5ee) main_fs_bigclock_unlock_btn_pane_t1

0x84fb,	// (0x0004c5fc) area_fmrd2_info_pane_ParamLimits

0x84fb,	// (0x0004c5fc) area_fmrd2_info_pane

0x850c,	// (0x0004c60d) area_fmrd2_visual_pane_ParamLimits

0x850c,	// (0x0004c60d) area_fmrd2_visual_pane

0x851a,	// (0x0004c61b) fmrd2_indi_pane_ParamLimits

0x851a,	// (0x0004c61b) fmrd2_indi_pane

0x8527,	// (0x0004c628) area_fmrd2_visual_pane_g1

0x852f,	// (0x0004c630) area_fmrd2_visual_pane_t1

0x853f,	// (0x0004c640) area_fmrd2_visual_pane_t2

0x854f,	// (0x0004c650) area_fmrd2_visual_pane_t3

0x0002,

0xfd28,	// (0x00053e29) area_fmrd2_visual_pane_t

0x855f,	// (0x0004c660) area_fmrd2_info_pane_g1

0x8567,	// (0x0004c668) area_fmrd2_info_pane_t1

0x8577,	// (0x0004c678) area_fmrd2_info_pane_t2

0x8587,	// (0x0004c688) area_fmrd2_info_pane_t3

0x8597,	// (0x0004c698) area_fmrd2_info_pane_t4

0x0003,

0xfd2f,	// (0x00053e30) area_fmrd2_info_pane_t

0x85a5,	// (0x0004c6a6) fmrd2_indi_pane_t1

0x85b5,	// (0x0004c6b6) fmrd2_indi_pane_t2

0x85c5,	// (0x0004c6c6) fmrd2_indi_pane_t3

0x0002,

0xfd38,	// (0x00053e39) fmrd2_indi_pane_t

0xe3d5,	// (0x000524d6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe3d5,	// (0x000524d6) list_single_fs_bigclock_indicator_pane_g5

0xe486,	// (0x00052587) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe486,	// (0x00052587) list_single_fs_bigclock_indicator_pane_t5

0xd36e,	// (0x0005146f) aid_cell_bcale_month_pane_ParamLimits

0xd36e,	// (0x0005146f) aid_cell_bcale_month_pane

0xd36e,	// (0x0005146f) bcale_month_pane_ParamLimits

0xd36e,	// (0x0005146f) bcale_month_pane

0xea94,	// (0x00052b95) bcale_preview_pane_ParamLimits

0xea94,	// (0x00052b95) bcale_preview_pane

0xebf2,	// (0x00052cf3) list_single_fs_bigclock_pane_t1_ParamLimits

0xec11,	// (0x00052d12) list_single_fs_bigclock_pane_t2_ParamLimits

0xec11,	// (0x00052d12) list_single_fs_bigclock_pane_t2

0x0001,

0xfcc8,	// (0x00053dc9) list_single_fs_bigclock_pane_t_ParamLimits

0xfcc8,	// (0x00053dc9) list_single_fs_bigclock_pane_t

0x84e5,	// (0x0004c5e6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd23,	// (0x00053e24) main_fs_bigclock_unlock_btn_pane_g

0x85d5,	// (0x0004c6d6) aid_dia3_key_size_ParamLimits

0x85d5,	// (0x0004c6d6) aid_dia3_key_size

0x85e4,	// (0x0004c6e5) aid_dia3_listrow_size_ParamLimits

0x85e4,	// (0x0004c6e5) aid_dia3_listrow_size

0x85f9,	// (0x0004c6fa) dia3_keypad_fun_pane_ParamLimits

0x85f9,	// (0x0004c6fa) dia3_keypad_fun_pane

0x8615,	// (0x0004c716) dia3_keypad_num_pane_ParamLimits

0x8615,	// (0x0004c716) dia3_keypad_num_pane

0x8630,	// (0x0004c731) dia3_listscroll_pane_ParamLimits

0x8630,	// (0x0004c731) dia3_listscroll_pane

0x8643,	// (0x0004c744) dia3_numentry_pane_ParamLimits

0x8643,	// (0x0004c744) dia3_numentry_pane

0xee56,	// (0x00052f57) dia3_list_pane

0xee61,	// (0x00052f62) scroll_pane_cp12

0x1129,	// (0x0004522a) bg_dia3_numentry_pane

0x865b,	// (0x0004c75c) dia3_numentry_pane_t1

0x866a,	// (0x0004c76b) cell_dia3_key_num_pane

0x8672,	// (0x0004c773) cell_dia3_key0_fun_pane_ParamLimits

0x8672,	// (0x0004c773) cell_dia3_key0_fun_pane

0x8686,	// (0x0004c787) cell_dia3_key1_fun_pane_ParamLimits

0x8686,	// (0x0004c787) cell_dia3_key1_fun_pane

0x869e,	// (0x0004c79f) dia3_listrow_pane

0xe128,	// (0x00052229) bg_dia3_numentry_pane_g1

0x1129,	// (0x0004522a) bg_button_pane_cp21

0xee6c,	// (0x00052f6d) cell_dia3_key_num_pane_t1

0xee7a,	// (0x00052f7b) cell_dia3_key_num_pane_t2

0xee89,	// (0x00052f8a) cell_dia3_key_num_pane_t3

0xee98,	// (0x00052f99) cell_dia3_key_num_pane_t4

0x0003,

0xfd3f,	// (0x00053e40) cell_dia3_key_num_pane_t

0x1129,	// (0x0004522a) bg_button_pane_cp19

0x86b0,	// (0x0004c7b1) cell_dia3_key0_fun_pane_g1

0x1129,	// (0x0004522a) bg_button_pane_cp20

0x86b8,	// (0x0004c7b9) cell_dia3_key1_fun_pane_g1

0xea94,	// (0x00052b95) area_left_week_number_pane

0xea94,	// (0x00052b95) area_top_day_name_pane

0xea94,	// (0x00052b95) frame_month_view_pane

0xea94,	// (0x00052b95) grid_month_view_pane

0xea94,	// (0x00052b95) cell_top_day_name_pane_ParamLimits

0xea94,	// (0x00052b95) cell_top_day_name_pane

0xea94,	// (0x00052b95) cell_area_left_week_number_pane_ParamLimits

0xea94,	// (0x00052b95) cell_area_left_week_number_pane

0xea94,	// (0x00052b95) cell_month_view_pane_ParamLimits

0xea94,	// (0x00052b95) cell_month_view_pane

0xea88,	// (0x00052b89) frm_month_g1

0xea88,	// (0x00052b89) frm_month_g2

0xea88,	// (0x00052b89) frm_month_g3

0xea88,	// (0x00052b89) frm_month_g4

0xea88,	// (0x00052b89) frm_month_g5

0xea88,	// (0x00052b89) frm_month_g6

0xea88,	// (0x00052b89) frm_month_g7

0xea88,	// (0x00052b89) frm_month_g8

0xea88,	// (0x00052b89) frm_month_g9

0xea88,	// (0x00052b89) frm_month_g10

0xea88,	// (0x00052b89) frm_month_g11

0xea88,	// (0x00052b89) frm_month_g12

0xea88,	// (0x00052b89) frm_month_g13

0xea88,	// (0x00052b89) frm_month_g14

0xea88,	// (0x00052b89) frm_month_g15

0xea88,	// (0x00052b89) frm_month_g16

0x000f,

0xfd48,	// (0x00053e49) frm_month_g

0xeea7,	// (0x00052fa8) cell_top_day_name_pane_t1

0xea88,	// (0x00052b89) cell_area_left_week_number_pane_g1

0xeea7,	// (0x00052fa8) cell_area_left_week_number_pane_t1

0xea88,	// (0x00052b89) cell_month_view_pane_g1

0xeea7,	// (0x00052fa8) cell_month_view_pane_t1

0x1129,	// (0x0004522a) main_fps_pane

0xe64a,	// (0x0005274b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe64a,	// (0x0005274b) cmail_ddmenu_btn02_pane_cp1

0xe666,	// (0x00052767) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe666,	// (0x00052767) cmail_ddmenu_btn02_pane_cp2

0x800c,	// (0x0004c10d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x800c,	// (0x0004c10d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc7b,	// (0x00053d7c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc7b,	// (0x00053d7c) cmail_ddmenu_btn02_pane_g

0x802a,	// (0x0004c12b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x802a,	// (0x0004c12b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc80,	// (0x00053d81) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc80,	// (0x00053d81) cmail_ddmenu_btn02_pane_t

0x86c0,	// (0x0004c7c1) fps_text_pane_ParamLimits

0x86c0,	// (0x0004c7c1) fps_text_pane

0x86d7,	// (0x0004c7d8) main_fps_pane_g1_ParamLimits

0x86d7,	// (0x0004c7d8) main_fps_pane_g1

0x86f1,	// (0x0004c7f2) wait_bar_pane_cp010_ParamLimits

0x86f1,	// (0x0004c7f2) wait_bar_pane_cp010

0x8702,	// (0x0004c803) fps_text_pane_t1_ParamLimits

0x8702,	// (0x0004c803) fps_text_pane_t1

0xeaa0,	// (0x00052ba1) cam4_image_uncrop_pane_g1

0xeaa9,	// (0x00052baa) cam4_image_uncrop_pane_g2

0x5c4b,	// (0x00049d4c) cam4_image_uncrop_pane_g3

0x5c54,	// (0x00049d55) cam4_image_uncrop_pane_g4

0x0003,

0xf7f3,	// (0x000538f4) cam4_image_uncrop_pane_g

0x869e,	// (0x0004c79f) dia3_listrow_pane_ParamLimits

0x1129,	// (0x0004522a) main_phob2_pane

0x7d2f,	// (0x0004be30) cell_tport_appsw_pane_cp02_ParamLimits

0x7d2f,	// (0x0004be30) cell_tport_appsw_pane_cp02

0x7d43,	// (0x0004be44) cell_tport_appsw_pane_cp03_ParamLimits

0x7d43,	// (0x0004be44) cell_tport_appsw_pane_cp03

0x1129,	// (0x0004522a) phob2_contact_card_pane

0x1129,	// (0x0004522a) phob2_listscroll_pane

0xeeb9,	// (0x00052fba) phob2_list_pane

0xe9f3,	// (0x00052af4) scroll_pane_cp034

0x871a,	// (0x0004c81b) phob2_cc_data_pane_ParamLimits

0x871a,	// (0x0004c81b) phob2_cc_data_pane

0x8739,	// (0x0004c83a) phob2_cc_listscroll_pane_ParamLimits

0x8739,	// (0x0004c83a) phob2_cc_listscroll_pane

0x8757,	// (0x0004c858) list_double_large_graphic_phob2_pane_ParamLimits

0x8757,	// (0x0004c858) list_double_large_graphic_phob2_pane

0x8778,	// (0x0004c879) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8778,	// (0x0004c879) list_double_large_graphic_phob2_pane_g1

0x1016,	// (0x00045117) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1016,	// (0x00045117) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd69,	// (0x00053e6a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd69,	// (0x00053e6a) list_double_large_graphic_phob2_pane_g

0x104a,	// (0x0004514b) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x104a,	// (0x0004514b) list_double_large_graphic_phob2_pane_t1

0x106e,	// (0x0004516f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x106e,	// (0x0004516f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd72,	// (0x00053e73) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd72,	// (0x00053e73) list_double_large_graphic_phob2_pane_t

0x12ed,	// (0x000453ee) list_highlight_pane_cp024

0xeec1,	// (0x00052fc2) phob2_cc_button_pane

0x878a,	// (0x0004c88b) phob2_cc_data_pane_g1_ParamLimits

0x878a,	// (0x0004c88b) phob2_cc_data_pane_g1

0x87a1,	// (0x0004c8a2) phob2_cc_data_pane_g2_ParamLimits

0x87a1,	// (0x0004c8a2) phob2_cc_data_pane_g2

0x0001,

0xfd77,	// (0x00053e78) phob2_cc_data_pane_g_ParamLimits

0xfd77,	// (0x00053e78) phob2_cc_data_pane_g

0x87b3,	// (0x0004c8b4) phob2_cc_data_pane_t1_ParamLimits

0x87b3,	// (0x0004c8b4) phob2_cc_data_pane_t1

0x87cb,	// (0x0004c8cc) phob2_cc_data_pane_t2_ParamLimits

0x87cb,	// (0x0004c8cc) phob2_cc_data_pane_t2

0x87e3,	// (0x0004c8e4) phob2_cc_data_pane_t3_ParamLimits

0x87e3,	// (0x0004c8e4) phob2_cc_data_pane_t3

0x0002,

0xfd7c,	// (0x00053e7d) phob2_cc_data_pane_t_ParamLimits

0xfd7c,	// (0x00053e7d) phob2_cc_data_pane_t

0xeec9,	// (0x00052fca) phob2_cc_list_pane_ParamLimits

0xeec9,	// (0x00052fca) phob2_cc_list_pane

0xdd89,	// (0x00051e8a) scroll_pane_cp035_ParamLimits

0xdd89,	// (0x00051e8a) scroll_pane_cp035

0x12ed,	// (0x000453ee) bg_button_pane_cp033

0xeed5,	// (0x00052fd6) phob2_cc_button_pane_g1

0xeee1,	// (0x00052fe2) phob2_cc_button_pane_t1

0xeef6,	// (0x00052ff7) phob2_cc_button_pane_t2

0x0001,

0xfd83,	// (0x00053e84) phob2_cc_button_pane_t

0x87fb,	// (0x0004c8fc) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x87fb,	// (0x0004c8fc) list_double_large_graphic_phob2_cc_pane

0x882d,	// (0x0004c92e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x882d,	// (0x0004c92e) list_double_large_graphic_phob2_cc_pane_g1

0x108f,	// (0x00045190) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x108f,	// (0x00045190) list_double_large_graphic_phob2_cc_pane_g2

0x109b,	// (0x0004519c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x109b,	// (0x0004519c) list_double_large_graphic_phob2_cc_pane_g3

0x10a7,	// (0x000451a8) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x10a7,	// (0x000451a8) list_double_large_graphic_phob2_cc_pane_g4

0x10b3,	// (0x000451b4) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x10b3,	// (0x000451b4) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfd88,	// (0x00053e89) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfd88,	// (0x00053e89) list_double_large_graphic_phob2_cc_pane_g

0x10bf,	// (0x000451c0) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x10bf,	// (0x000451c0) list_double_large_graphic_phob2_cc_pane_t1

0x10e8,	// (0x000451e9) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x10e8,	// (0x000451e9) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfd93,	// (0x00053e94) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfd93,	// (0x00053e94) list_double_large_graphic_phob2_cc_pane_t

0xef08,	// (0x00053009) list_highlight_pane_cp025_ParamLimits

0xef08,	// (0x00053009) list_highlight_pane_cp025

0x12ed,	// (0x000453ee) bg_button_pane_cp033_ParamLimits

0xeed5,	// (0x00052fd6) phob2_cc_button_pane_g1_ParamLimits

0xeee1,	// (0x00052fe2) phob2_cc_button_pane_t1_ParamLimits

0xeef6,	// (0x00052ff7) phob2_cc_button_pane_t2_ParamLimits

0xfd83,	// (0x00053e84) phob2_cc_button_pane_t_ParamLimits

0x12fb,	// (0x000453fc) popup_wgtman_window

0xd5bb,	// (0x000516bc) scroll_pane_cp038

0x8420,	// (0x0004c521) wgtman_btn_pane_cp_01_ParamLimits

0x8420,	// (0x0004c521) wgtman_btn_pane_cp_01

0xef16,	// (0x00053017) wgtman_content_pane

0xef1f,	// (0x00053020) wgtman_heading_pane

0x1129,	// (0x0004522a) bg_heading_pane_cp02

0xef28,	// (0x00053029) wgtman_heading_pane_g1

0xef30,	// (0x00053031) wgtman_heading_pane_t1

0xef3e,	// (0x0005303f) scroll_pane_cp036

0xef46,	// (0x00053047) wgtman_list_pane

0xeab2,	// (0x00052bb3) wgtman_list_pane_t1_ParamLimits

0xeab2,	// (0x00052bb3) wgtman_list_pane_t1

0xcf10,	// (0x00051011) cam4_grid_pane

0x695c,	// (0x0004aa5d) bg_button_pane_cp015_ParamLimits

0x696d,	// (0x0004aa6e) bg_button_pane_cp016_ParamLimits

0x6979,	// (0x0004aa7a) bg_button_pane_cp017_ParamLimits

0x69cd,	// (0x0004aace) popup_vitu2_query_window_g3_ParamLimits

0x69cd,	// (0x0004aace) popup_vitu2_query_window_g3

0x6a6e,	// (0x0004ab6f) popup_vitu2_query_window_t6_ParamLimits

0x6a6e,	// (0x0004ab6f) popup_vitu2_query_window_t6

0x6a99,	// (0x0004ab9a) popup_vitu2_query_window_t7_ParamLimits

0x6a99,	// (0x0004ab9a) popup_vitu2_query_window_t7

0xeaa0,	// (0x00052ba1) cam4_grid_pane_g1

0xeaa9,	// (0x00052baa) cam4_grid_pane_g2

0xef4e,	// (0x0005304f) cam4_grid_pane_g3

0xef57,	// (0x00053058) cam4_grid_pane_g4

0x0003,

0xfd98,	// (0x00053e99) cam4_grid_pane_g

0x260e,	// (0x0004670f) aid_placing_vt_slider_lsc_ParamLimits

0x290b,	// (0x00046a0c) vidtel_button_pane_ParamLimits

0x290b,	// (0x00046a0c) vidtel_button_pane

0x1129,	// (0x0004522a) bg_button_pane_cp034

0xef62,	// (0x00053063) vidtel_button_pane_g1

0xef6a,	// (0x0005306b) vidtel_button_pane_t1

0xd7d1,	// (0x000518d2) aid_size_vtel_slider_touch

0xdd89,	// (0x00051e8a) scroll_pane_cp039

0x771e,	// (0x0004b81f) ncim_query_button_pane_cp01_ParamLimits

0x773d,	// (0x0004b83e) ncimui_query_pane_g1_ParamLimits

0x12ed,	// (0x000453ee) input_focus_pane_cp012_ParamLimits

0xe16e,	// (0x0005226f) ncim_query_entry_pane_t1_ParamLimits

0xdd89,	// (0x00051e8a) scroll_pane_cp039_ParamLimits

0xaa46,	// (0x0004eb47) navi_pane_bcale_mc_g1

0xaa4e,	// (0x0004eb4f) navi_pane_bcale_mc_t1

0xe69a,	// (0x0005279b) main_sp_fs_email_pane_g1

0xe6a6,	// (0x000527a7) main_sp_fs_email_pane_g2

0x0001,

0xfbdf,	// (0x00053ce0) main_sp_fs_email_pane_g

0xe8f2,	// (0x000529f3) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8f2,	// (0x000529f3) list_single_cale_mrui_row_pane_g3

0x0fbc,	// (0x000450bd) list_single_recal_day_pane_g5_event_pane

0xd2d5,	// (0x000513d6) list_single_recal_day_pane_g7

0xef80,	// (0x00053081) list_recal_day_event_pane_cp01

0xef89,	// (0x0005308a) list_recal_vselct_arw_lo_pane_cp01

0xef91,	// (0x00053092) list_recal_vselct_arw_up_pane_cp01

0xef99,	// (0x0005309a) list_recal_vselct_pane_cp01

0xd7e1,	// (0x000518e2) list_recal_day_event_pane_cp01_g1

0xd344,	// (0x00051445) list_recal_day_event_pane_cp01_t1

0xd2dd,	// (0x000513de) list_single_recal_day_pane_t1_ParamLimits

0xd2ef,	// (0x000513f0) list_single_recal_day_pane_t2_ParamLimits

0xfc90,	// (0x00053d91) list_single_recal_day_pane_t_ParamLimits

0x1a20,	// (0x00045b21) bg_notes_pane_ParamLimits

0x1ba9,	// (0x00045caa) list_notes_pane_ParamLimits

0x1bb7,	// (0x00045cb8) scroll_pane_cp06_ParamLimits

0x1bdf,	// (0x00045ce0) main_notes_pane_ParamLimits

0x12ed,	// (0x000453ee) main_welc_pane

0x8872,	// (0x0004c973) main_welc_body_pane_ParamLimits

0x8872,	// (0x0004c973) main_welc_body_pane

0x888f,	// (0x0004c990) main_welc_opti_pane_ParamLimits

0x888f,	// (0x0004c990) main_welc_opti_pane

0x88ff,	// (0x0004ca00) main_welc_pane_t1_ParamLimits

0x88ff,	// (0x0004ca00) main_welc_pane_t1

0x8b11,	// (0x0004cc12) main_welc_body_row_pane_ParamLimits

0x8b11,	// (0x0004cc12) main_welc_body_row_pane

0x1a8d,	// (0x00045b8e) main_welc_opti_row_pane_ParamLimits

0x1a8d,	// (0x00045b8e) main_welc_opti_row_pane

0xefab,	// (0x000530ac) main_welc_opti_row_pane_g1

0x8b26,	// (0x0004cc27) main_welc_opti_row_pane_t1

0xefb3,	// (0x000530b4) main_welc_body_row_pane_t1

0xecd2,	// (0x00052dd3) popup_notif_wgt_heading_pane

0xecec,	// (0x00052ded) aid_size_list_notif_wgt_del_ParamLimits

0xecf9,	// (0x00052dfa) list_notif_wgt_row_pane_g1_ParamLimits

0xed05,	// (0x00052e06) list_notif_wgt_row_pane_g2_ParamLimits

0xed14,	// (0x00052e15) list_notif_wgt_row_pane_g3_ParamLimits

0xfcf7,	// (0x00053df8) list_notif_wgt_row_pane_g_ParamLimits

0xed21,	// (0x00052e22) list_notif_wgt_row_pane_t1_ParamLimits

0xed37,	// (0x00052e38) list_notif_wgt_row_pane_t2_ParamLimits

0xed49,	// (0x00052e4a) list_notif_wgt_row_pane_t3_ParamLimits

0xfcfe,	// (0x00053dff) list_notif_wgt_row_pane_t_ParamLimits

0x84ba,	// (0x0004c5bb) listrow_wgtman_pane_g1_ParamLimits

0x84c7,	// (0x0004c5c8) listrow_wgtman_pane_g2_ParamLimits

0xfd19,	// (0x00053e1a) listrow_wgtman_pane_g_ParamLimits

0x0fc6,	// (0x000450c7) listrow_wgtman_pane_t1_ParamLimits

0x0fde,	// (0x000450df) listrow_wgtman_pane_t2_ParamLimits

0xfd1e,	// (0x00053e1f) listrow_wgtman_pane_t_ParamLimits

0x1004,	// (0x00045105) wait_bar_pane_cp09_ParamLimits

0x1129,	// (0x0004522a) bg_popup_heading_pane_cp02

0xefc2,	// (0x000530c3) popup_notif_wgt_heading_pane_g1

0xefca,	// (0x000530cb) popup_notif_wgt_heading_pane_t1

0x1129,	// (0x0004522a) main_vids_pane

0x1129,	// (0x0004522a) vids_listscroll_pane

0x8b35,	// (0x0004cc36) scroll_pane_cp040

0x1129,	// (0x0004522a) vids_list_pane

0x8b40,	// (0x0004cc41) vids_list_double_pane_ParamLimits

0x8b40,	// (0x0004cc41) vids_list_double_pane

0x8b51,	// (0x0004cc52) vids_list_double_pane_g1

0x8b5a,	// (0x0004cc5b) vids_list_double_pane_t1

0x8b69,	// (0x0004cc6a) vids_list_double_pane_t2

0x0001,

0xfdb7,	// (0x00053eb8) vids_list_double_pane_t

0x12ed,	// (0x000453ee) main_ncimui_pane_ParamLimits

0x7554,	// (0x0004b655) main_ncimui_pane_g1_ParamLimits

0x7560,	// (0x0004b661) main_ncimui_pane_g2_ParamLimits

0x7560,	// (0x0004b661) main_ncimui_pane_g2

0x0001,

0xfae5,	// (0x00053be6) main_ncimui_pane_g_ParamLimits

0xfae5,	// (0x00053be6) main_ncimui_pane_g

0x88aa,	// (0x0004c9ab) main_welc_pane_g1_ParamLimits

0x88aa,	// (0x0004c9ab) main_welc_pane_g1

0x88bf,	// (0x0004c9c0) main_welc_pane_g2_ParamLimits

0x88bf,	// (0x0004c9c0) main_welc_pane_g2

0x0003,

0xfda1,	// (0x00053ea2) main_welc_pane_g_ParamLimits

0xfda1,	// (0x00053ea2) main_welc_pane_g

0x1a20,	// (0x00045b21) listscroll_mce_pane_ParamLimits

0xab9b,	// (0x0004ec9c) wait_bar_pane_cp10

0xbf47,	// (0x00050048) main_cale_day_pane_ParamLimits

0xbf47,	// (0x00050048) main_cale_week_pane_ParamLimits

0x1a20,	// (0x00045b21) main_messa_pane_ParamLimits

0x5133,	// (0x00049234) main_clock2_btn_pane_ParamLimits

0x5133,	// (0x00049234) main_clock2_btn_pane

0xc872,	// (0x00050973) main_clock2_btn_pane_cp01_ParamLimits

0xc872,	// (0x00050973) main_clock2_btn_pane_cp01

0xe8d1,	// (0x000529d2) list_cale_mrui_pane_ParamLimits

0xed7f,	// (0x00052e80) main_cf0_pane_g2

0x0001,

0xfd05,	// (0x00053e06) main_cf0_pane_g

0xea94,	// (0x00052b95) area_left_week_number_pane_ParamLimits

0xea94,	// (0x00052b95) area_top_day_name_pane_ParamLimits

0xea94,	// (0x00052b95) frame_month_view_pane_ParamLimits

0xea94,	// (0x00052b95) grid_month_view_pane_ParamLimits

0xea88,	// (0x00052b89) frm_month_g1_ParamLimits

0xea88,	// (0x00052b89) frm_month_g2_ParamLimits

0xea88,	// (0x00052b89) frm_month_g3_ParamLimits

0xea88,	// (0x00052b89) frm_month_g4_ParamLimits

0xea88,	// (0x00052b89) frm_month_g5_ParamLimits

0xea88,	// (0x00052b89) frm_month_g6_ParamLimits

0xea88,	// (0x00052b89) frm_month_g7_ParamLimits

0xea88,	// (0x00052b89) frm_month_g8_ParamLimits

0xea88,	// (0x00052b89) frm_month_g9_ParamLimits

0xea88,	// (0x00052b89) frm_month_g10_ParamLimits

0xea88,	// (0x00052b89) frm_month_g11_ParamLimits

0xea88,	// (0x00052b89) frm_month_g12_ParamLimits

0xea88,	// (0x00052b89) frm_month_g13_ParamLimits

0xea88,	// (0x00052b89) frm_month_g14_ParamLimits

0xea88,	// (0x00052b89) frm_month_g15_ParamLimits

0xea88,	// (0x00052b89) frm_month_g16_ParamLimits

0xfd48,	// (0x00053e49) frm_month_g_ParamLimits

0xeea7,	// (0x00052fa8) cell_top_day_name_pane_t1_ParamLimits

0xea88,	// (0x00052b89) cell_area_left_week_number_pane_g1_ParamLimits

0xeea7,	// (0x00052fa8) cell_area_left_week_number_pane_t1_ParamLimits

0xea88,	// (0x00052b89) cell_month_view_pane_g1_ParamLimits

0xeea7,	// (0x00052fa8) cell_month_view_pane_t1_ParamLimits

0x1a18,	// (0x00045b19) main_clock2_btn_pane_g1

0xefd8,	// (0x000530d9) main_clock2_btn_pane_t1

0x12ed,	// (0x000453ee) listscroll_cmail_pane_ParamLimits

0xe69a,	// (0x0005279b) main_sp_fs_email_pane_g1_ParamLimits

0xe6a6,	// (0x000527a7) main_sp_fs_email_pane_g2_ParamLimits

0xfbdf,	// (0x00053ce0) main_sp_fs_email_pane_g_ParamLimits

0xea10,	// (0x00052b11) list_recal_day_pane_ParamLimits

0xea21,	// (0x00052b22) mian_recal_day_pane_t1

0x0da9,	// (0x00044eaa) list_single_dyc_row_text_pane_t4_ParamLimits

0x0da9,	// (0x00044eaa) list_single_dyc_row_text_pane_t4

0x0df2,	// (0x00044ef3) list_single_dyc_row_text_pane_t5_ParamLimits

0x0df2,	// (0x00044ef3) list_single_dyc_row_text_pane_t5

0xd07c,	// (0x0005117d) list_single_dyc_row_text_pane_t6_ParamLimits

0xd07c,	// (0x0005117d) list_single_dyc_row_text_pane_t6

0x338f,	// (0x00047490) aid_mgn_list_cale_time_pane

0x12ed,	// (0x000453ee) main_gallery2_pane_ParamLimits

0xc888,	// (0x00050989) main_clock2_pane_cp01_t1

0xc896,	// (0x00050997) main_clock2_pane_cp01_t3

0x0001,

0xf6cf,	// (0x000537d0) main_clock2_pane_cp01_t

0x2047,	// (0x00046148) cale_week_scroll_pane_g16_ParamLimits

0x2047,	// (0x00046148) cale_week_scroll_pane_g16

0xa144,	// (0x0004e245) vorec_slider_pane

0xef6a,	// (0x0005306b) vidtel_button_pane_t1_ParamLimits

0x8098,	// (0x0004c199) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8098,	// (0x0004c199) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8098,	// (0x0004c199) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8098,	// (0x0004c199) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcb3,	// (0x00053db4) main_fs_bigclock_clock_pane_g_ParamLimits

0x80ab,	// (0x0004c1ac) main_fs_bigclock_clock_pane_t1_ParamLimits

0x80c5,	// (0x0004c1c6) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcbc,	// (0x00053dbd) main_fs_bigclock_clock_pane_t_ParamLimits

0x49c6,	// (0x00048ac7) main_mup3_lyrics_pane_ParamLimits

0x49c6,	// (0x00048ac7) main_mup3_lyrics_pane

0x8b91,	// (0x0004cc92) main_mup3_lyrics_pane_t1_ParamLimits

0x8b91,	// (0x0004cc92) main_mup3_lyrics_pane_t1

0xcc1a,	// (0x00050d1b) aid_main_mp4_pane_t1_area

0xcc24,	// (0x00050d25) aid_main_mp4_pane_t2_area

0xccce,	// (0x00050dcf) main_mp4_pane_g7_ParamLimits

0xccce,	// (0x00050dcf) main_mp4_pane_g7

0xccda,	// (0x00050ddb) main_mp4_pane_g8_ParamLimits

0xccda,	// (0x00050ddb) main_mp4_pane_g8

0x5a1c,	// (0x00049b1d) aid_call6_pane_g1_size

0x8816,	// (0x0004c917) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8816,	// (0x0004c917) list_double_large_graphic_phob2_other_pane

0xa977,	// (0x0004ea78) list_double_large_graphic_phob2_other_pane_g1

0x1129,	// (0x0004522a) list_highlight_pane_cp026

0x12ed,	// (0x000453ee) main_welc_pane_ParamLimits

0x7bd0,	// (0x0004bcd1) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7bd0,	// (0x0004bcd1) main_sp_fs_ctrlbar_pane_g3

0x7bea,	// (0x0004bceb) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7bea,	// (0x0004bceb) main_sp_fs_ctrlbar_pane_g4

0x7c1e,	// (0x0004bd1f) toolbar2_fixed_button_pane_cp01

0x7c29,	// (0x0004bd2a) toolbar2_fixed_button_pane_cp02

0x7c36,	// (0x0004bd37) toolbar2_fixed_button_pane_cp03

0x884c,	// (0x0004c94d) list_welc_entry_pane_ParamLimits

0x884c,	// (0x0004c94d) list_welc_entry_pane

0x88d4,	// (0x0004c9d5) main_welc_pane_g3_ParamLimits

0x88d4,	// (0x0004c9d5) main_welc_pane_g3

0x891d,	// (0x0004ca1e) main_welc_pane_t2_ParamLimits

0x891d,	// (0x0004ca1e) main_welc_pane_t2

0x8938,	// (0x0004ca39) main_welc_pane_t3_ParamLimits

0x8938,	// (0x0004ca39) main_welc_pane_t3

0x0005,

0xfdaa,	// (0x00053eab) main_welc_pane_t_ParamLimits

0xfdaa,	// (0x00053eab) main_welc_pane_t

0x8a70,	// (0x0004cb71) welc_button_pane_ParamLimits

0x8a70,	// (0x0004cb71) welc_button_pane

0x8afc,	// (0x0004cbfd) welc_service_logo_pane_ParamLimits

0x8afc,	// (0x0004cbfd) welc_service_logo_pane

0x8bad,	// (0x0004ccae) list_single_welc_entry_pane_ParamLimits

0x8bad,	// (0x0004ccae) list_single_welc_entry_pane

0x8bbe,	// (0x0004ccbf) list_single_welc_entry_pane_g1

0x8bc6,	// (0x0004ccc7) list_single_welc_entry_pane_t1

0x8bd4,	// (0x0004ccd5) list_single_welc_entry_pane_t2

0x0001,

0xfdbc,	// (0x00053ebd) list_single_welc_entry_pane_t

0x1129,	// (0x0004522a) bg_button_pane_cp035

0x8be2,	// (0x0004cce3) welc_button_pane_t1

0xefe6,	// (0x000530e7) welc_service_logo_pane_g1

0xefef,	// (0x000530f0) welc_service_logo_pane_g2

0x0001,

0xfdc1,	// (0x00053ec2) welc_service_logo_pane_g

0x1129,	// (0x0004522a) main_int_radio_pane

0xe00c,	// (0x0005210d) list_single_fs_dyc_pane_g1

0x1025,	// (0x00045126) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x1025,	// (0x00045126) list_double_large_graphic_phob2_pane_g3

0x1037,	// (0x00045138) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x1037,	// (0x00045138) list_double_large_graphic_phob2_pane_g4

0x8bf0,	// (0x0004ccf1) main_int_radio1_pane_ParamLimits

0x8bf0,	// (0x0004ccf1) main_int_radio1_pane

0xeff8,	// (0x000530f9) find_pane_cp02

0x8c0d,	// (0x0004cd0e) input_focus_pane_cp12_ParamLimits

0x8c0d,	// (0x0004cd0e) input_focus_pane_cp12

0x8c1d,	// (0x0004cd1e) input_focus_pane_cp13_ParamLimits

0x8c1d,	// (0x0004cd1e) input_focus_pane_cp13

0x8c31,	// (0x0004cd32) input_focus_pane_cp14_ParamLimits

0x8c31,	// (0x0004cd32) input_focus_pane_cp14

0xf001,	// (0x00053102) int_radio1_listscroll_pane

0x8c45,	// (0x0004cd46) main_int_radio1_pane_g1_ParamLimits

0x8c45,	// (0x0004cd46) main_int_radio1_pane_g1

0x8c5d,	// (0x0004cd5e) main_int_radio1_pane_t1_ParamLimits

0x8c5d,	// (0x0004cd5e) main_int_radio1_pane_t1

0x8c78,	// (0x0004cd79) main_int_radio1_pane_t2_ParamLimits

0x8c78,	// (0x0004cd79) main_int_radio1_pane_t2

0x8c93,	// (0x0004cd94) main_int_radio1_pane_t3_ParamLimits

0x8c93,	// (0x0004cd94) main_int_radio1_pane_t3

0x8cae,	// (0x0004cdaf) main_int_radio1_pane_t4_ParamLimits

0x8cae,	// (0x0004cdaf) main_int_radio1_pane_t4

0xf00b,	// (0x0005310c) main_int_radio1_pane_t5_ParamLimits

0xf00b,	// (0x0005310c) main_int_radio1_pane_t5

0x8cc0,	// (0x0004cdc1) main_int_radio1_pane_t6_ParamLimits

0x8cc0,	// (0x0004cdc1) main_int_radio1_pane_t6

0x8cd5,	// (0x0004cdd6) main_int_radio1_pane_t7_ParamLimits

0x8cd5,	// (0x0004cdd6) main_int_radio1_pane_t7

0x8cea,	// (0x0004cdeb) main_int_radio1_pane_t8_ParamLimits

0x8cea,	// (0x0004cdeb) main_int_radio1_pane_t8

0x8d09,	// (0x0004ce0a) main_int_radio1_pane_t9_ParamLimits

0x8d09,	// (0x0004ce0a) main_int_radio1_pane_t9

0x8d1b,	// (0x0004ce1c) main_int_radio1_pane_t10_ParamLimits

0x8d1b,	// (0x0004ce1c) main_int_radio1_pane_t10

0x8d41,	// (0x0004ce42) main_int_radio1_pane_t11_ParamLimits

0x8d41,	// (0x0004ce42) main_int_radio1_pane_t11

0x8d67,	// (0x0004ce68) main_int_radio1_pane_t12_ParamLimits

0x8d67,	// (0x0004ce68) main_int_radio1_pane_t12

0x000b,

0xfdc6,	// (0x00053ec7) main_int_radio1_pane_t_ParamLimits

0xfdc6,	// (0x00053ec7) main_int_radio1_pane_t

0x8d79,	// (0x0004ce7a) int_radio_list_pane

0xe9f3,	// (0x00052af4) scroll_pane_cp037

0x8d81,	// (0x0004ce82) list_double_large_graphic_int_radio_pane_ParamLimits

0x8d81,	// (0x0004ce82) list_double_large_graphic_int_radio_pane

0x8d9a,	// (0x0004ce9b) list_double_large_graphic_int_radio_pane_g1

0xd352,	// (0x00051453) list_double_large_graphic_int_radio_pane_t1

0xd360,	// (0x00051461) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfddf,	// (0x00053ee0) list_double_large_graphic_int_radio_pane_t

0x1129,	// (0x0004522a) list_highlight_pane_cp027

0xefa3,	// (0x000530a4) main_button_pane_4

0x88e7,	// (0x0004c9e8) main_welc_pane_g4_ParamLimits

0x88e7,	// (0x0004c9e8) main_welc_pane_g4

0x8951,	// (0x0004ca52) main_welc_pane_t4_ParamLimits

0x8951,	// (0x0004ca52) main_welc_pane_t4

0x896c,	// (0x0004ca6d) main_welc_pane_t5_ParamLimits

0x896c,	// (0x0004ca6d) main_welc_pane_t5

0x89ad,	// (0x0004caae) main_welc_pane_t6_ParamLimits

0x89ad,	// (0x0004caae) main_welc_pane_t6

0x8a87,	// (0x0004cb88) welc_button_pane_2_ParamLimits

0x8a87,	// (0x0004cb88) welc_button_pane_2

0x8aac,	// (0x0004cbad) welc_button_pane_3_ParamLimits

0x8aac,	// (0x0004cbad) welc_button_pane_3

0xefa3,	// (0x000530a4) welc_button_pane_4

0x8ad4,	// (0x0004cbd5) welc_button_pane_5_ParamLimits

0x8ad4,	// (0x0004cbd5) welc_button_pane_5

0x1157,	// (0x00045258) main_popup_welc_pane

0x8dbb,	// (0x0004cebc) main_welc_sk_g3

0x8dc5,	// (0x0004cec6) main_welc_sk_g4

0x8dcf,	// (0x0004ced0) main_welc_sk_t3

0x8ddf,	// (0x0004cee0) main_welc_sk_t4

0x8def,	// (0x0004cef0) popup_welc_pane_t4

0x8dfd,	// (0x0004cefe) popup_welc_pane_t5

0x8e0b,	// (0x0004cf0c) popup_welc_pane_t6

0x1129,	// (0x0004522a) main_acti_pane

0x1129,	// (0x0004522a) main_sso_pane

0x8e49,	// (0x0004cf4a) sso_body_pane_ParamLimits

0x8e49,	// (0x0004cf4a) sso_body_pane

0x8e69,	// (0x0004cf6a) sso_logo_pane_ParamLimits

0x8e69,	// (0x0004cf6a) sso_logo_pane

0x8ea2,	// (0x0004cfa3) sso_sk_pane_ParamLimits

0x8ea2,	// (0x0004cfa3) sso_sk_pane

0x8eb4,	// (0x0004cfb5) main_sso_logo_pane_g1

0x8ebd,	// (0x0004cfbe) sso_sk_pane_t1_ParamLimits

0x8ebd,	// (0x0004cfbe) sso_sk_pane_t1

0x8ed7,	// (0x0004cfd8) sso_sk_pane_t2_ParamLimits

0x8ed7,	// (0x0004cfd8) sso_sk_pane_t2

0x0001,

0xfde4,	// (0x00053ee5) sso_sk_pane_t_ParamLimits

0xfde4,	// (0x00053ee5) sso_sk_pane_t

0x8eed,	// (0x0004cfee) aid_sso_gap

0x8ef6,	// (0x0004cff7) aid_sso_txt1

0x8f00,	// (0x0004d001) aid_sso_txt2

0x8f0a,	// (0x0004d00b) aid_sso_txt3

0x0002,

0xfde9,	// (0x00053eea) aid_sso_txt

0x8f14,	// (0x0004d015) aid_sso_widget

0x8f72,	// (0x0004d073) sso_btn_pane_ParamLimits

0x8f72,	// (0x0004d073) sso_btn_pane

0x9006,	// (0x0004d107) sso_option_pane_ParamLimits

0x9006,	// (0x0004d107) sso_option_pane

0x90ba,	// (0x0004d1bb) sso_query_pane_ParamLimits

0x90ba,	// (0x0004d1bb) sso_query_pane

0x9110,	// (0x0004d211) sso_query_pane_cp01_ParamLimits

0x9110,	// (0x0004d211) sso_query_pane_cp01

0x9168,	// (0x0004d269) sso_t_hdr_pane_ParamLimits

0x9168,	// (0x0004d269) sso_t_hdr_pane

0x9192,	// (0x0004d293) sso_t_nml_pane_ParamLimits

0x9192,	// (0x0004d293) sso_t_nml_pane

0x91e8,	// (0x0004d2e9) sso_t_sub_pane

0x8e76,	// (0x0004cf77) sso_popup_window_ParamLimits

0x8e76,	// (0x0004cf77) sso_popup_window

0x8f1e,	// (0x0004d01f) sso_apps_pane_ParamLimits

0x8f1e,	// (0x0004d01f) sso_apps_pane

0x8f48,	// (0x0004d049) sso_body_pane_g1

0x8f52,	// (0x0004d053) sso_body_pane_t1

0x8f62,	// (0x0004d063) sso_body_pane_t2

0x0001,

0xfdf0,	// (0x00053ef1) sso_body_pane_t

0x8fbe,	// (0x0004d0bf) sso_btn_pane_cp01_ParamLimits

0x8fbe,	// (0x0004d0bf) sso_btn_pane_cp01

0x908e,	// (0x0004d18f) sso_prog_pane_ParamLimits

0x908e,	// (0x0004d18f) sso_prog_pane

0x9217,	// (0x0004d318) sso_t_hdr_pane_t1_ParamLimits

0x9217,	// (0x0004d318) sso_t_hdr_pane_t1

0x922a,	// (0x0004d32b) input_focus_pane_cp10_ParamLimits

0x922a,	// (0x0004d32b) input_focus_pane_cp10

0x923e,	// (0x0004d33f) sso_query_pane_t1_ParamLimits

0x923e,	// (0x0004d33f) sso_query_pane_t1

0x9251,	// (0x0004d352) sso_query_pane_t2_ParamLimits

0x9251,	// (0x0004d352) sso_query_pane_t2

0x926a,	// (0x0004d36b) sso_query_pane_t3_ParamLimits

0x926a,	// (0x0004d36b) sso_query_pane_t3

0x9294,	// (0x0004d395) sso_query_pane_t4_ParamLimits

0x9294,	// (0x0004d395) sso_query_pane_t4

0x0003,

0xfdf5,	// (0x00053ef6) sso_query_pane_t_ParamLimits

0xfdf5,	// (0x00053ef6) sso_query_pane_t

0x92b8,	// (0x0004d3b9) bg_button_pane_cp22

0x8da3,	// (0x0004cea4) sso_btn_pane_t1

0x92c1,	// (0x0004d3c2) sso_t_nml_pane_t1_ParamLimits

0x92c1,	// (0x0004d3c2) sso_t_nml_pane_t1

0x92dc,	// (0x0004d3dd) sso_option_row_pane_ParamLimits

0x92dc,	// (0x0004d3dd) sso_option_row_pane

0x92e9,	// (0x0004d3ea) sso_t_sub_pane_t1_ParamLimits

0x92e9,	// (0x0004d3ea) sso_t_sub_pane_t1

0x12ed,	// (0x000453ee) bg_popup_window_pane_cp11_ParamLimits

0x12ed,	// (0x000453ee) bg_popup_window_pane_cp11

0x9306,	// (0x0004d407) popup_sk_window_cp01_ParamLimits

0x9306,	// (0x0004d407) popup_sk_window_cp01

0x9313,	// (0x0004d414) sso_popup_body_pane_ParamLimits

0x9313,	// (0x0004d414) sso_popup_body_pane

0x9320,	// (0x0004d421) scroll_pane_cp21_ParamLimits

0x9320,	// (0x0004d421) scroll_pane_cp21

0x932d,	// (0x0004d42e) sso_popup_body_t_pane_ParamLimits

0x932d,	// (0x0004d42e) sso_popup_body_t_pane

0x933a,	// (0x0004d43b) sso_popup_body_t_hdr_pane_ParamLimits

0x933a,	// (0x0004d43b) sso_popup_body_t_hdr_pane

0x934c,	// (0x0004d44d) sso_popup_body_t_nml_pane_ParamLimits

0x934c,	// (0x0004d44d) sso_popup_body_t_nml_pane

0x9373,	// (0x0004d474) sso_popup_body_t_sub_pane_ParamLimits

0x9373,	// (0x0004d474) sso_popup_body_t_sub_pane

0x9396,	// (0x0004d497) sso_popup_body_t_hdr_pane_t1

0x93a6,	// (0x0004d4a7) sso_popup_body_t_nml_pane_t1_ParamLimits

0x93a6,	// (0x0004d4a7) sso_popup_body_t_nml_pane_t1

0x93df,	// (0x0004d4e0) sso_popup_body_t_sub_pane_t1_ParamLimits

0x93df,	// (0x0004d4e0) sso_popup_body_t_sub_pane_t1

0x1b6d,	// (0x00045c6e) sso_prog_pane_g1

0x9404,	// (0x0004d505) sso_apps_pane_comp1_ParamLimits

0x9404,	// (0x0004d505) sso_apps_pane_comp1

0x941e,	// (0x0004d51f) sso_apps_pane_comp1_g1

0x9426,	// (0x0004d527) sso_apps_pane_comp1_t1

0x9442,	// (0x0004d543) sso_option_row_pane_g1

0x945a,	// (0x0004d55b) sso_option_row_pane_t1

0xe755,	// (0x00052856) list_cmail_pane_ParamLimits

0x1129,	// (0x0004522a) main_call7_pane

0x8839,	// (0x0004c93a) bg_welc_area_ParamLimits

0x8839,	// (0x0004c93a) bg_welc_area

0x89eb,	// (0x0004caec) sso_t_hdr_pane_a_t1_ParamLimits

0x89eb,	// (0x0004caec) sso_t_hdr_pane_a_t1

0x8a06,	// (0x0004cb07) sso_t_nml_pane_a_t1_ParamLimits

0x8a06,	// (0x0004cb07) sso_t_nml_pane_a_t1

0x8a35,	// (0x0004cb36) sso_t_sub_pane_a_t1_ParamLimits

0x8a35,	// (0x0004cb36) sso_t_sub_pane_a_t1

0x8aea,	// (0x0004cbeb) welc_button_pane_cp01_ParamLimits

0x8aea,	// (0x0004cbeb) welc_button_pane_cp01

0x8da3,	// (0x0004cea4) sso_btn_pane_t1_copy1

0x8db2,	// (0x0004ceb3) welc_button_pane_2_comp1

0x8e19,	// (0x0004cf1a) sso_t_hdr_pane_p_t1

0x8e29,	// (0x0004cf2a) sso_t_nml_pane_p_t1

0x8e39,	// (0x0004cf3a) sso_t_sub_pane_p_t1

0x1129,	// (0x0004522a) main_att_pane

0x1129,	// (0x0004522a) main_vod_pane

0x91e8,	// (0x0004d2e9) sso_t_sub_pane_ParamLimits

0x9434,	// (0x0004d535) input_focus_pane_cp10_t1

0x945a,	// (0x0004d55b) sso_option_row_pane_t1_ParamLimits

0x9476,	// (0x0004d577) main_att_body_pane_ParamLimits

0x9476,	// (0x0004d577) main_att_body_pane

0x948c,	// (0x0004d58d) att_btn_emg_pane_ParamLimits

0x948c,	// (0x0004d58d) att_btn_emg_pane

0x94ab,	// (0x0004d5ac) att_btn_pane_ParamLimits

0x94ab,	// (0x0004d5ac) att_btn_pane

0x951a,	// (0x0004d61b) att_btn_pane_cp01_ParamLimits

0x951a,	// (0x0004d61b) att_btn_pane_cp01

0x955a,	// (0x0004d65b) att_li_srv_pane_ParamLimits

0x955a,	// (0x0004d65b) att_li_srv_pane

0x9577,	// (0x0004d678) att_opt_pane_ParamLimits

0x9577,	// (0x0004d678) att_opt_pane

0x95c1,	// (0x0004d6c2) att_query_pane_ParamLimits

0x95c1,	// (0x0004d6c2) att_query_pane

0x963a,	// (0x0004d73b) att_query_pane_cp01_ParamLimits

0x963a,	// (0x0004d73b) att_query_pane_cp01

0x9686,	// (0x0004d787) att_t_hdr_pane_ParamLimits

0x9686,	// (0x0004d787) att_t_hdr_pane

0x96f2,	// (0x0004d7f3) att_t_nml_pane_ParamLimits

0x96f2,	// (0x0004d7f3) att_t_nml_pane

0x9762,	// (0x0004d863) att_t_nml_pane_cp01_ParamLimits

0x9762,	// (0x0004d863) att_t_nml_pane_cp01

0x978e,	// (0x0004d88f) att_t_nmlb_pane_ParamLimits

0x978e,	// (0x0004d88f) att_t_nmlb_pane

0x97fb,	// (0x0004d8fc) att_term_pane_ParamLimits

0x97fb,	// (0x0004d8fc) att_term_pane

0x9845,	// (0x0004d946) main_att_body_pane_g1_ParamLimits

0x9845,	// (0x0004d946) main_att_body_pane_g1

0x9871,	// (0x0004d972) att_t_hdr_pane_t1_ParamLimits

0x9871,	// (0x0004d972) att_t_hdr_pane_t1

0x988a,	// (0x0004d98b) att_t_nml_pane_t1_ParamLimits

0x988a,	// (0x0004d98b) att_t_nml_pane_t1

0x98af,	// (0x0004d9b0) att_btn_pane_t1

0x92b8,	// (0x0004d3b9) bg_button_pane_cp23

0x98be,	// (0x0004d9bf) att_li_srv_row_pane_ParamLimits

0x98be,	// (0x0004d9bf) att_li_srv_row_pane

0x98ce,	// (0x0004d9cf) att_t_nmlb_pane_t1_ParamLimits

0x98ce,	// (0x0004d9cf) att_t_nmlb_pane_t1

0x98ea,	// (0x0004d9eb) att_query_pane_t1

0x98f9,	// (0x0004d9fa) att_query_pane_t2

0x9908,	// (0x0004da09) att_query_pane_t3

0x0002,

0xfe03,	// (0x00053f04) att_query_pane_t

0x9917,	// (0x0004da18) input_focus_pane_cp11

0x9920,	// (0x0004da21) att_term_pane_t1_ParamLimits

0x9920,	// (0x0004da21) att_term_pane_t1

0x1129,	// (0x0004522a) att_opt_row_pane

0x993d,	// (0x0004da3e) att_opt_row_pane_g1

0x9945,	// (0x0004da46) att_opt_row_pane_t1_ParamLimits

0x9945,	// (0x0004da46) att_opt_row_pane_t1

0x995e,	// (0x0004da5f) att_li_srv_row_pane_g1

0x9966,	// (0x0004da67) att_li_srv_row_pane_t1_ParamLimits

0x9966,	// (0x0004da67) att_li_srv_row_pane_t1

0x9966,	// (0x0004da67) att_li_srv_row_pane_t2_ParamLimits

0x9966,	// (0x0004da67) att_li_srv_row_pane_t2

0x0001,

0xfe0a,	// (0x00053f0b) att_li_srv_row_pane_t_ParamLimits

0xfe0a,	// (0x00053f0b) att_li_srv_row_pane_t

0x997b,	// (0x0004da7c) att_btn_close_pane_g1

0x1129,	// (0x0004522a) bg_button_pane_cp24

0x9983,	// (0x0004da84) main_vod_body_pane_ParamLimits

0x9983,	// (0x0004da84) main_vod_body_pane

0x9997,	// (0x0004da98) main_vod_body_pane_g1_ParamLimits

0x9997,	// (0x0004da98) main_vod_body_pane_g1

0x99cb,	// (0x0004dacc) scroll_pane_cp24_ParamLimits

0x99cb,	// (0x0004dacc) scroll_pane_cp24

0x9a19,	// (0x0004db1a) vod_btn_pane_ParamLimits

0x9a19,	// (0x0004db1a) vod_btn_pane

0x9a5f,	// (0x0004db60) vod_det_pane_ParamLimits

0x9a5f,	// (0x0004db60) vod_det_pane

0x9a8f,	// (0x0004db90) vod_logo_g1_ParamLimits

0x9a8f,	// (0x0004db90) vod_logo_g1

0x9acd,	// (0x0004dbce) vod_opt_pane_ParamLimits

0x9acd,	// (0x0004dbce) vod_opt_pane

0x9b00,	// (0x0004dc01) vod_opt_pane_cp01_ParamLimits

0x9b00,	// (0x0004dc01) vod_opt_pane_cp01

0x9b2c,	// (0x0004dc2d) vod_query_pane_ParamLimits

0x9b2c,	// (0x0004dc2d) vod_query_pane

0x9b57,	// (0x0004dc58) vod_query_pane_cp01_ParamLimits

0x9b57,	// (0x0004dc58) vod_query_pane_cp01

0x9b63,	// (0x0004dc64) vod_t_nml_pane_ParamLimits

0x9b63,	// (0x0004dc64) vod_t_nml_pane

0x9c0c,	// (0x0004dd0d) vod_t_nml_pane_cp01_ParamLimits

0x9c0c,	// (0x0004dd0d) vod_t_nml_pane_cp01

0x9c48,	// (0x0004dd49) vod_t_sub_pane_ParamLimits

0x9c48,	// (0x0004dd49) vod_t_sub_pane

0x9c79,	// (0x0004dd7a) vod_t_sub_pane_cp01_ParamLimits

0x9c79,	// (0x0004dd7a) vod_t_sub_pane_cp01

0x9917,	// (0x0004da18) vod_query_field_pane

0x9ca5,	// (0x0004dda6) vod_query_pane_t1

0x9cb4,	// (0x0004ddb5) bg_button_pane_cp25

0x8da3,	// (0x0004cea4) sso_btn_pane_t1_copy2

0x9cbd,	// (0x0004ddbe) vod_t_nml_pane_t1_ParamLimits

0x9cbd,	// (0x0004ddbe) vod_t_nml_pane_t1

0x9cec,	// (0x0004dded) vod_opt_row_pane_ParamLimits

0x9cec,	// (0x0004dded) vod_opt_row_pane

0x9cfe,	// (0x0004ddff) vod_t_sub_pane_t1_ParamLimits

0x9cfe,	// (0x0004ddff) vod_t_sub_pane_t1

0x9d17,	// (0x0004de18) vod_det_cell_pane_ParamLimits

0x9d17,	// (0x0004de18) vod_det_cell_pane

0x1129,	// (0x0004522a) input_focus_pane_cp15

0x9d28,	// (0x0004de29) vod_query_field_pane_t1

0x9d36,	// (0x0004de37) vod_opt_row_pane_g1_ParamLimits

0x9d36,	// (0x0004de37) vod_opt_row_pane_g1

0x9d42,	// (0x0004de43) vod_opt_row_pane_t1_ParamLimits

0x9d42,	// (0x0004de43) vod_opt_row_pane_t1

0x9d62,	// (0x0004de63) vod_det_cell_field_pane

0x9d6b,	// (0x0004de6c) vod_det_cell_pane_g1

0x9d73,	// (0x0004de74) vod_det_cell_pane_t1

0x1129,	// (0x0004522a) input_focus_pane_cp16

0x9d82,	// (0x0004de83) vod_det_cell_field_pane_t1

0x8374,	// (0x0004c475) call7_btn_grp_pane_ParamLimits

0x8374,	// (0x0004c475) call7_btn_grp_pane

0x9d90,	// (0x0004de91) call7_bubble_pane_ParamLimits

0x9d90,	// (0x0004de91) call7_bubble_pane

0x9da7,	// (0x0004dea8) cell_call7_btn_pane_ParamLimits

0x9da7,	// (0x0004dea8) cell_call7_btn_pane

0x9dbb,	// (0x0004debc) call7_pane_g1_ParamLimits

0x9dbb,	// (0x0004debc) call7_pane_g1

0x9dca,	// (0x0004decb) call7_windows_conf_pane_ParamLimits

0x9dca,	// (0x0004decb) call7_windows_conf_pane

0x9de4,	// (0x0004dee5) popup_call7_1st_window_ParamLimits

0x9de4,	// (0x0004dee5) popup_call7_1st_window

0x9df5,	// (0x0004def6) popup_call7_2nd_window_ParamLimits

0x9df5,	// (0x0004def6) popup_call7_2nd_window

0x9e06,	// (0x0004df07) popup_call7_3rd_window_ParamLimits

0x9e06,	// (0x0004df07) popup_call7_3rd_window

0x1129,	// (0x0004522a) bg_button_pane_cp26

0xedfc,	// (0x00052efd) cell_call7_btn_pane_g1

0xee05,	// (0x00052f06) cell_call7_btn_pane_t1

0x1129,	// (0x0004522a) bg_popup_window_pane_cp12

0x9e17,	// (0x0004df18) popup_call7_1st_window_g1

0x9e1f,	// (0x0004df20) popup_call7_1st_window_g2

0x9e27,	// (0x0004df28) popup_call7_1st_window_g3

0x0002,

0xfe0f,	// (0x00053f10) popup_call7_1st_window_g

0x9e2f,	// (0x0004df30) popup_call7_1st_window_t1

0x9e3e,	// (0x0004df3f) popup_call7_1st_window_t2

0x9e4c,	// (0x0004df4d) popup_call7_1st_window_t3

0x0002,

0xfe16,	// (0x00053f17) popup_call7_1st_window_t

0x1129,	// (0x0004522a) bg_popup_window_pane_cp13

0x9e5a,	// (0x0004df5b) popup_call7_2nd_window_g1

0x9e62,	// (0x0004df63) popup_call7_2nd_window_g2

0x9e6a,	// (0x0004df6b) popup_call7_2nd_window_g3

0x0002,

0xfe1d,	// (0x00053f1e) popup_call7_2nd_window_g

0x9e72,	// (0x0004df73) popup_call7_2nd_window_t1

0x1129,	// (0x0004522a) bg_popup_window_pane_cp14

0x9e81,	// (0x0004df82) call7_list_conf_pane

0x9e89,	// (0x0004df8a) call7_list_conf_row_pane_ParamLimits

0x9e89,	// (0x0004df8a) call7_list_conf_row_pane

0x9e9c,	// (0x0004df9d) call7_list_conf_row_pane_g1

0x9ea4,	// (0x0004dfa5) call7_list_conf_row_pane_g2

0x0001,

0xfe24,	// (0x00053f25) call7_list_conf_row_pane_g

0x9eac,	// (0x0004dfad) call7_list_conf_row_pane_t1

0x1129,	// (0x0004522a) list_highlight_pane_cp22

0x905a,	// (0x0004d15b) sso_option_pane_cp01_ParamLimits

0x905a,	// (0x0004d15b) sso_option_pane_cp01

0x1a20,	// (0x00045b21) msg_header_pane_ParamLimits

0xad39,	// (0x0004ee3a) bg_button_pane_cp01_ParamLimits

0xad4d,	// (0x0004ee4e) input_focus_pane_cp07_ParamLimits

0x7c87,	// (0x0004bd88) popup_email_progress_window

0x1b6d,	// (0x00045c6e) popup_email_progress_window_g1

0x9eba,	// (0x0004dfbb) popup_email_progress_window_g2

0x0001,

0xfe29,	// (0x00053f2a) popup_email_progress_window_g

0x9ec2,	// (0x0004dfc3) popup_email_progress_window_t1

0x1129,	// (0x0004522a) cmail_conv_pane

0xd0cf,	// (0x000511d0) list_single_dyc_row_pane_g5_ParamLimits

0xd0cf,	// (0x000511d0) list_single_dyc_row_pane_g5

0xd0db,	// (0x000511dc) list_single_dyc_row_pane_g6_ParamLimits

0xd0db,	// (0x000511dc) list_single_dyc_row_pane_g6

0xd0f3,	// (0x000511f4) list_single_dyc_row_pane_g7_ParamLimits

0xd0f3,	// (0x000511f4) list_single_dyc_row_pane_g7

0x8866,	// (0x0004c967) main_button_pane_5_ParamLimits

0x8866,	// (0x0004c967) main_button_pane_5

0x8e5d,	// (0x0004cf5e) sso_emg_call_btn_pane_ParamLimits

0x8e5d,	// (0x0004cf5e) sso_emg_call_btn_pane

0x91fd,	// (0x0004d2fe) sso_t_sub_pane_cp01_ParamLimits

0x91fd,	// (0x0004d2fe) sso_t_sub_pane_cp01

0x9442,	// (0x0004d543) sso_option_row_pane_g1_ParamLimits

0x944e,	// (0x0004d54f) sso_option_row_pane_g2_ParamLimits

0x944e,	// (0x0004d54f) sso_option_row_pane_g2

0x0001,

0xfdfe,	// (0x00053eff) sso_option_row_pane_g_ParamLimits

0xfdfe,	// (0x00053eff) sso_option_row_pane_g

0x9538,	// (0x0004d639) att_btn_pane_cp02_ParamLimits

0x9538,	// (0x0004d639) att_btn_pane_cp02

0x9ed0,	// (0x0004dfd1) cmail_conv_hdr_pane

0x9ed9,	// (0x0004dfda) list_cmail_conv_pane

0x9ee3,	// (0x0004dfe4) scroll_pane_cp31

0x9eeb,	// (0x0004dfec) cmail_conv_hdr_pane_t1

0x9ef9,	// (0x0004dffa) cmail_conv_hdr_pane_t2

0x0001,

0xfe2e,	// (0x00053f2f) cmail_conv_hdr_pane_t

0x9f07,	// (0x0004e008) bubble_cmail_conv_pane_ParamLimits

0x9f07,	// (0x0004e008) bubble_cmail_conv_pane

0xe883,	// (0x00052984) aid_size_colorization_pane

0xa144,	// (0x0004e245) bg_bubble_cmail_conv_pane

0x9f1f,	// (0x0004e020) body_bubble_cmail_conv_pane

0xa64a,	// (0x0004e74b) bubble_cmail_conv_pane_g1

0x9f27,	// (0x0004e028) bubble_cmail_conv_pane_g2

0x9f2f,	// (0x0004e030) bubble_cmail_conv_pane_g3

0x0002,

0xfe33,	// (0x00053f34) bubble_cmail_conv_pane_g

0x9f37,	// (0x0004e038) bubble_cmail_conv_pane_t1

0xe6fb,	// (0x000527fc) bg_bubble_cmail_conv_pane_g1

0xe704,	// (0x00052805) bg_bubble_cmail_conv_pane_g2

0xe70d,	// (0x0005280e) bg_bubble_cmail_conv_pane_g3

0x0002,

0x08d6,	// (0x000449d7) bg_bubble_cmail_conv_pane_g

0x9f45,	// (0x0004e046) body_bubble_cmail_conv_pane_t1_ParamLimits

0x9f45,	// (0x0004e046) body_bubble_cmail_conv_pane_t1

0x9f5c,	// (0x0004e05d) body_bubble_cmail_conv_pane_t2_ParamLimits

0x9f5c,	// (0x0004e05d) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe3a,	// (0x00053f3b) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe3a,	// (0x00053f3b) body_bubble_cmail_conv_pane_t

0x12ed,	// (0x000453ee) list_highlight_pane_cp024_ParamLimits
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
